// ===== 00450b2c  FUN_00450b2c =====

void FUN_00450b2c(void)

{
  return;
}


// ===== 00450b30  FUN_00450b30 =====

void FUN_00450b30(long param_1)

{
  FUN_0045b950(*(undefined8 *)(*(long *)(param_1 + 0x360) + 0xb8));
  return;
}


// ===== 00450b3c  FUN_00450b3c =====

void FUN_00450b3c(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_48 = *param_2;
  local_44 = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(param_2 + 1) = 0;
  lVar3 = *(long *)(param_1 + 0x360);
  local_40 = param_2[2];
  local_3c = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)(param_2 + 3) = 0;
  uVar2 = *(undefined8 *)(lVar3 + 0xb8);
  local_38 = param_2[4];
  local_34 = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)(param_2 + 5) = 0;
  local_30 = param_2[6];
  local_2c = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)(param_2 + 7) = 0;
  FUN_0045b9d4(uVar2,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00450bdc  FUN_00450bdc =====

void FUN_00450bdc(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = param_2[1];
  local_40 = *param_2;
  local_30 = *(undefined4 *)(param_2 + 2);
  FUN_0042e414(*(undefined8 *)(param_1 + 0x360),&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00450c38  FUN_00450c38 =====

void FUN_00450c38(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = param_2[2];
  local_38 = param_2[3];
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  if (*(long *)(local_38 + 8) != 0) {
    param_2[2] = FUN_0041a0c4;
    param_2[3] = &DAT_001f1910;
  }
  FUN_0042e420(uVar2,&local_50);
  if (*(code **)(local_38 + 8) != (code *)0x0) {
    (**(code **)(local_38 + 8))(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00450cc8  FUN_00450cc8 =====

void FUN_00450cc8(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = param_2[2];
  local_38 = param_2[3];
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x360) + 0xb8);
  if (*(long *)(local_38 + 8) != 0) {
    param_2[2] = FUN_0041c32c;
    param_2[3] = &DAT_001f1910;
  }
  FUN_0045b77c(uVar2,&local_50);
  if (*(code **)(local_38 + 8) != (code *)0x0) {
    (**(code **)(local_38 + 8))(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00450d5c  FUN_00450d5c =====

void FUN_00450d5c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar6 = param_2[2];
  puVar1 = (undefined8 *)param_2[3];
  uVar4 = *param_2;
  uVar2 = param_2[1];
  pcVar5 = (code *)*puVar1;
  if (pcVar5 != (code *)0x0) {
    uVar4 = (*pcVar5)();
  }
  lVar7 = *(long *)(param_1 + 0x430);
  *(undefined8 *)(param_1 + 0x428) = uVar6;
  *(undefined8 **)(param_1 + 0x430) = puVar1;
  uVar6 = *(undefined8 *)(param_1 + 0x418);
  *(undefined8 *)(param_1 + 0x418) = uVar4;
  *(undefined8 *)(param_1 + 0x420) = uVar2;
  pcVar5 = *(code **)(lVar7 + 8);
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(uVar6);
  }
  local_60 = param_2[2];
  local_58 = param_2[3];
  uStack_68 = param_2[1];
  local_70 = *param_2;
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x360) + 0xb8);
  if (*(long *)(local_58 + 8) != 0) {
    param_2[2] = FUN_00402980;
    param_2[3] = &DAT_001f1910;
  }
  FUN_0045b808(uVar6,&local_70);
  if (*(code **)(local_58 + 8) != (code *)0x0) {
    (**(code **)(local_58 + 8))(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00450e44  FUN_00450e44 =====

void FUN_00450e44(long param_1)

{
  FUN_0045b898(*(undefined8 *)(*(long *)(param_1 + 0x360) + 0xb8));
  return;
}


// ===== 00450e50  FUN_00450e50 =====

void FUN_00450e50(long param_1)

{
  FUN_0045b8a8(*(undefined8 *)(*(long *)(param_1 + 0x360) + 0xb8));
  return;
}


// ===== 00450e5c  FUN_00450e5c =====

void FUN_00450e5c(long param_1)

{
  FUN_0045b8fc(*(undefined8 *)(*(long *)(param_1 + 0x360) + 0xb8));
  return;
}


// ===== 00450e68  FUN_00450e68 =====

/* WARNING: Removing unreachable block (ram,0x00451010) */
/* WARNING: Removing unreachable block (ram,0x0045105c) */

void FUN_00450e68(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *__src;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  undefined8 *__dest;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_b8 [8];
  void *local_b0;
  void *local_a8;
  undefined4 local_90;
  undefined1 local_8c;
  undefined1 local_8b;
  void *local_88;
  void *local_80;
  void *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar8 = *(long *)(param_1 + 0x318);
  local_80 = (void *)0x0;
  local_78 = (void *)0x0;
  lVar9 = *(long *)(param_1 + 0x310);
  local_88 = (void *)0x0;
  local_90 = *(undefined4 *)(param_1 + 0x2a8);
  local_8c = *(undefined1 *)(param_1 + 0x32b);
  local_8b = *(undefined1 *)(param_1 + 0x308);
  uVar3 = lVar8 - lVar9;
  if (uVar3 != 0) {
    if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar3 >> 3) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar5 = operator_new(uVar3);
    lVar10 = 0;
    local_78 = (void *)((long)pvVar5 + ((long)uVar3 >> 3) * 8);
    local_88 = pvVar5;
    do {
      puVar2 = (undefined8 *)(lVar9 + lVar10);
      __dest = (undefined8 *)((long)pvVar5 + lVar10);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        __src = (undefined8 *)*puVar2;
        uVar3 = puVar2[1];
        if (uVar3 < 0x17) {
          *(char *)((long)pvVar5 + lVar10 + 0x17) = (char)uVar3;
        }
        else {
          if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar1 = (uVar3 | 0xf) + 1;
          __dest = (undefined8 *)operator_new(uVar1);
          puVar2 = (undefined8 *)((long)pvVar5 + lVar10);
          puVar2[1] = uVar3;
          puVar2[2] = uVar1 | 0x8000000000000000;
          *puVar2 = __dest;
        }
        if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar3 + 1))) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                     ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
        }
        memmove(__dest,__src,uVar3 + 1);
      }
      else {
        uVar7 = puVar2[1];
        uVar6 = *puVar2;
        __dest[2] = puVar2[2];
        __dest[1] = uVar7;
        *__dest = uVar6;
      }
      lVar10 = lVar10 + 0x18;
    } while (lVar9 + lVar10 != lVar8);
    local_80 = (void *)((long)pvVar5 + lVar10);
  }
  local_70 = FUN_0051452c(*(undefined8 *)(param_1 + 0x338));
  uVar7 = *(undefined8 *)(param_1 + 0x360);
  uVar6 = *(undefined8 *)(param_1 + 0x348);
  FUN_0042db4c(auStack_b8,&local_90);
  FUN_0042d2f8(uVar7,uVar6,auStack_b8);
  if (local_b0 != (void *)0x0) {
    for (; local_a8 != local_b0; local_a8 = (void *)((long)local_a8 + -0x18)) {
    }
    local_a8 = local_b0;
    operator_delete(local_b0);
  }
  if (local_88 != (void *)0x0) {
    for (; local_80 != local_88; local_80 = (void *)((long)local_80 + -0x18)) {
    }
    local_80 = local_88;
    operator_delete(local_88);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004510d8  FUN_004510d8 =====

void FUN_004510d8(long param_1)

{
  FUN_0042dfc4(*(undefined8 *)(param_1 + 0x360));
  return;
}


// ===== 004510e0  FUN_004510e0 =====

void FUN_004510e0(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = param_2[2];
  local_38 = param_2[3];
  uStack_48 = param_2[1];
  local_50 = *param_2;
  if (*(long *)(local_38 + 8) != 0) {
    param_2[2] = FUN_0041a404;
    param_2[3] = &DAT_001f1910;
  }
  FUN_004b269c(param_1 + 0x19a0,&local_50);
  if (*(code **)(local_38 + 8) != (code *)0x0) {
    (**(code **)(local_38 + 8))(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00451174  FUN_00451174 =====

void FUN_00451174(undefined8 *param_1,long param_2,long param_3,long *param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined1 *__src;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  undefined1 **__dest;
  long lVar8;
  undefined1 *local_80;
  ulong uStack_78;
  undefined8 local_70;
  long local_68;
  long *local_60;
  long local_58;
  
  __dest = &local_80;
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    goto LAB_004512d8;
  }
  *(int *)(param_2 + 0x448) = *(int *)(param_2 + 0x448) + 1;
  FUN_005490bc(param_1);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __src = (undefined1 *)*param_1;
    uVar3 = param_1[1];
    if (uVar3 < 0x17) {
      local_70 = CONCAT17((char)uVar3,(undefined7)local_70);
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_70 = uVar1 | 0x8000000000000000;
      local_80 = (undefined1 *)__dest;
      uStack_78 = uVar3;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar3 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar3 + 1);
  }
  else {
    uStack_78 = param_1[1];
    local_80 = (undefined1 *)*param_1;
    local_70 = param_1[2];
  }
  if (param_4 != (long *)0x0) {
    plVar2 = param_4 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar3 = uStack_78;
  if (-1 < (long)local_70) {
    uVar3 = local_70 >> 0x38;
  }
  local_68 = param_3;
  local_60 = param_4;
  if (uVar3 == 0) {
    if (param_4 != (long *)0x0) goto LAB_004512b0;
  }
  else {
    FUN_004572f0(param_2 + 0x18d8,&local_80,&local_80,&local_68);
    if (local_60 != (long *)0x0) {
LAB_004512b0:
      plVar7 = local_60;
      plVar2 = local_60 + 1;
      do {
        lVar8 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
        FUN_005466cc(plVar7);
      }
    }
  }
  if ((long)local_70 < 0) {
    operator_delete(local_80);
  }
LAB_004512d8:
  if (param_4 != (long *)0x0) {
    plVar2 = param_4 + 1;
    do {
      lVar8 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*param_4 + 0x10))(param_4);
      FUN_005466cc(param_4);
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0045138c  FUN_0045138c =====

void FUN_0045138c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  FUN_004b302c(param_1 + 0x19a0,param_2,0);
  lVar1 = FUN_00456578(param_1 + 0x18d8,param_2);
  if (lVar1 != 0) {
    FUN_00456734(param_1 + 0x18d8,lVar1);
  }
  lVar1 = FUN_0045695c(param_1 + 0x1900,param_2);
  if (lVar1 != 0) {
    FUN_00456b18(param_1 + 0x1900,lVar1);
    return;
  }
  return;
}


// ===== 00451418  FUN_00451418 =====

void FUN_00451418(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_0045143c(param_1,param_2,1);
  if (lVar1 != 0) {
    FUN_004bbc00();
    return;
  }
  return;
}


// ===== 0045143c  FUN_0045143c =====

long * FUN_0045143c(long param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  lVar6 = FUN_0045695c(param_1 + 0x1900);
  if (lVar6 == 0) {
    if (((param_3 & 0xff) == 0) || (lVar6 = FUN_00456578(param_1 + 0x18d8,param_2), lVar6 == 0)) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = (long *)operator_new(0x80);
      uVar2 = *(undefined8 *)(lVar6 + 0x28);
      lVar6 = *(long *)(lVar6 + 0x30);
      if (lVar6 != 0) {
        plVar1 = (long *)(lVar6 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_004bb87c(plVar7,uVar2,lVar6,(param_3 & 0xff00) != 0);
      *plVar7 = (long)(PTR_DAT_00d51b98 + 0x10);
      local_60 = plVar7;
      FUN_004b302c(param_1 + 0x19a0,param_2,plVar7);
      FUN_00456d18(param_1 + 0x1900,param_2,param_2,&local_60);
      plVar1 = local_60;
      local_60 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        FUN_004bbfa4(plVar1);
        operator_delete(plVar1);
      }
    }
  }
  else {
    plVar7 = *(long **)(lVar6 + 0x28);
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return plVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00451578  FUN_00451578 =====

void FUN_00451578(long param_1,uint param_2)

{
  undefined1 *__src;
  long lVar1;
  ulong uVar2;
  undefined1 **__dest;
  long lVar3;
  ulong uVar4;
  undefined1 **ppuVar5;
  undefined1 *local_80;
  ulong uStack_78;
  undefined8 local_70;
  char local_60 [23];
  char local_49;
  long local_48;
  
  ppuVar5 = &local_80;
  __dest = &local_80;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e94,"../../discord_native_lib/src/media/engine.cpp",0x46b1,
                 "Setting video input device index: ",param_2);
  }
  if (param_2 == 0xffffffff) {
    local_49 = '\b';
    if ((local_60 < "isabled") && ("disabled" < local_60 + 8)) {
LAB_00451740:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    builtin_strncpy(local_60,"disabled",9);
    ppuVar5 = (undefined1 **)local_60;
    FUN_00451798(param_1,local_60);
    if (-1 < local_49) goto LAB_0045169c;
  }
  else {
    if ((int)param_2 < 0) goto LAB_0045169c;
    uVar2 = (*(long *)(param_1 + 0x1950) - *(long *)(param_1 + 0x1948) >> 3) * 0x6db6db6db6db6db7;
    if ((int)uVar2 <= (int)param_2) goto LAB_0045169c;
    uVar4 = (ulong)param_2;
    if (uVar2 < uVar4 || uVar2 - uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x587,
                 "__n < size()","vector[] index out of bounds");
    }
    lVar3 = *(long *)(param_1 + 0x1948) + uVar4 * 0x38;
    if (*(char *)(lVar3 + 0x2f) < '\0') {
      __src = *(undefined1 **)(lVar3 + 0x18);
      uVar2 = *(ulong *)(lVar3 + 0x20);
      if (uVar2 < 0x17) {
        local_70 = CONCAT17((char)uVar2,(undefined7)local_70);
      }
      else {
        if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar4 = (uVar2 | 0xf) + 1;
        __dest = (undefined1 **)operator_new(uVar4);
        local_70 = uVar4 | 0x8000000000000000;
        local_80 = (undefined1 *)__dest;
        uStack_78 = uVar2;
      }
      if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar2 + 1)))
      goto LAB_00451740;
      memmove(__dest,__src,uVar2 + 1);
    }
    else {
      local_70 = *(ulong *)(lVar3 + 0x28);
      uStack_78 = *(ulong *)(lVar3 + 0x20);
      local_80 = *(undefined1 **)(lVar3 + 0x18);
    }
    FUN_00451798(param_1,&local_80);
    if (-1 < (long)local_70) goto LAB_0045169c;
  }
  operator_delete(*ppuVar5);
LAB_0045169c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00451798  FUN_00451798 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00451798(undefined8 *******param_1,char *param_2)

{
  long *plVar1;
  undefined8 *******pppppppuVar2;
  size_t sVar3;
  size_t sVar4;
  undefined8 ******__s1;
  byte bVar5;
  byte bVar6;
  char cVar7;
  long lVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  char *__s2;
  char *pcVar14;
  undefined8 *****pppppuVar15;
  undefined8 *******pppppppuVar16;
  uint uVar17;
  undefined8 *****pppppuVar18;
  undefined8 ******ppppppuVar19;
  undefined8 ******ppppppuVar20;
  undefined1 auVar21 [16];
  undefined8 *******local_98;
  size_t local_90;
  byte local_81;
  char local_80;
  undefined7 uStack_7f;
  size_t local_78;
  byte local_69;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  uVar11 = FUN_00417e08();
  if ((uVar11 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4eff,"../../discord_native_lib/src/media/engine.cpp",0x4711,
                 "Setting video input device: \'",param_2,&DAT_001c1d3e);
  }
  if (param_1[0x327] == (undefined8 ******)0x0) {
    local_69 = 0;
    local_80 = '\0';
  }
  else {
    (*(code *)(*param_1[0x327])[7])(&local_80);
    if (param_1[0x327] != (undefined8 ******)0x0) {
      bVar5 = param_2[0x17];
      uVar11 = (ulong)bVar5;
      uVar17 = (uint)(char)local_69;
      sVar3 = *(size_t *)(param_2 + 8);
      if (-1 < (char)bVar5) {
        sVar3 = uVar11;
      }
      sVar4 = local_78;
      if (-1 < (int)uVar17) {
        sVar4 = (ulong)local_69;
      }
      if (sVar3 == sVar4) {
        pcVar14 = *(char **)param_2;
        if (-1 < (char)bVar5) {
          pcVar14 = param_2;
        }
        __s2 = (char *)CONCAT71(uStack_7f,local_80);
        if (-1 < (int)uVar17) {
          __s2 = &local_80;
        }
        if (-1 < (char)bVar5) {
          pcVar14 = param_2;
          if (bVar5 != 0) {
            do {
              if (*pcVar14 != *__s2) goto LAB_004518b0;
              uVar11 = uVar11 - 1;
              __s2 = __s2 + 1;
              pcVar14 = pcVar14 + 1;
            } while (uVar11 != 0);
          }
          goto LAB_00451c30;
        }
        if ((sVar3 == 0) || (iVar10 = memcmp(pcVar14,__s2,sVar3), iVar10 == 0)) goto LAB_00451c30;
      }
    }
  }
LAB_004518b0:
  pppppppuVar2 = param_1 + 0x334;
  FUN_004b302c(pppppppuVar2,&local_80,0);
  lVar12 = FUN_00456578(param_1 + 0x31b,&local_80);
  if (lVar12 != 0) {
    FUN_00456734(param_1 + 0x31b,lVar12);
  }
  lVar12 = FUN_0045695c(param_1 + 800,&local_80);
  if (lVar12 != 0) {
    FUN_00456b18(param_1 + 800,lVar12);
  }
  ppppppuVar19 = param_1[0x32c];
  ppppppuVar20 = param_1[0x32d];
  if (ppppppuVar19 != ppppppuVar20) {
    do {
      if (ppppppuVar19[1] != (undefined8 *****)0x0) {
        plVar13 = (long *)FUN_005466fc();
        if ((plVar13 == (long *)0x0) ||
           (pppppuVar18 = *ppppppuVar19, pppppuVar18 == (undefined8 *****)0x0)) {
LAB_00451a48:
          if (plVar13 == (long *)0x0) goto LAB_00451934;
        }
        else {
          (*(code *)(*pppppuVar18)[7])(&local_98,pppppuVar18);
          uVar11 = (ulong)local_81;
          sVar3 = local_90;
          if (-1 < (char)local_81) {
            sVar3 = uVar11;
          }
          sVar4 = local_78;
          if (-1 < (char)local_69) {
            sVar4 = (ulong)local_69;
          }
          if (sVar3 != sVar4) {
            bVar9 = false;
            if ((char)local_81 < '\0') {
LAB_00451a00:
              operator_delete(local_98);
              if (bVar9) goto LAB_00451a34;
            }
            else {
LAB_004519f0:
              if (bVar9) goto LAB_00451a34;
            }
            goto LAB_00451a48;
          }
          pppppppuVar16 = local_98;
          if (-1 < (char)local_81) {
            pppppppuVar16 = &local_98;
          }
          pcVar14 = (char *)CONCAT71(uStack_7f,local_80);
          if (-1 < (char)local_69) {
            pcVar14 = &local_80;
          }
          if (-1 < (char)local_81) {
            if (local_81 != 0) {
              pppppppuVar16 = &local_98;
              do {
                uVar11 = uVar11 - 1;
                bVar9 = *(char *)pppppppuVar16 == *pcVar14;
                if (!bVar9) break;
                pcVar14 = pcVar14 + 1;
                pppppppuVar16 = (undefined8 *******)((long)pppppppuVar16 + 1);
              } while (uVar11 != 0);
              if ((char)local_81 < '\0') goto LAB_00451a00;
              goto LAB_004519f0;
            }
LAB_00451a34:
            (*(code *)(*pppppuVar18)[3])(pppppuVar18,ppppppuVar19[0xc]);
            goto LAB_00451a48;
          }
          if (sVar3 == 0) {
            operator_delete(local_98);
            goto LAB_00451a34;
          }
          iVar10 = memcmp(pppppppuVar16,pcVar14,sVar3);
          operator_delete(local_98);
          if (iVar10 == 0) goto LAB_00451a34;
        }
        plVar1 = plVar13 + 1;
        do {
          lVar12 = *plVar1;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar12 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          FUN_005466cc(plVar13);
        }
      }
LAB_00451934:
      ppppppuVar19 = ppppppuVar19 + 0xd;
    } while (ppppppuVar19 != ppppppuVar20);
  }
  if (param_1[0x327] != (undefined8 ******)0x0) {
    FUN_004b2f54(pppppppuVar2,0);
  }
  ppppppuVar19 = param_1[0x328];
  param_1[0x327] = (undefined8 ******)0x0;
  param_1[0x328] = (undefined8 ******)0x0;
  if (ppppppuVar19 != (undefined8 ******)0x0) {
    ppppppuVar20 = ppppppuVar19 + 1;
    do {
      pppppuVar18 = *ppppppuVar20;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(ppppppuVar20,0x10);
      if (bVar9) {
        *ppppppuVar20 = (undefined8 *****)((long)pppppuVar18 + -1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (pppppuVar18 == (undefined8 *****)0x0) {
      (*(code *)(*ppppppuVar19)[2])(ppppppuVar19);
      FUN_005466cc(ppppppuVar19);
    }
  }
  ppppppuVar19 = param_1[0x329];
  ppppppuVar20 = param_1[0x32a];
  if (ppppppuVar19 == ppppppuVar20) {
LAB_00451b84:
    if (ppppppuVar19 == ppppppuVar20) goto LAB_00451bd8;
    auVar21 = FUN_00451cb8(param_1,ppppppuVar19);
    ppppppuVar19 = auVar21._0_8_;
    ppppppuVar20 = param_1[0x328];
    *(undefined1 (*) [16])(param_1 + 0x327) = auVar21;
    if (ppppppuVar20 != (undefined8 ******)0x0) {
      ppppppuVar19 = ppppppuVar20 + 1;
      do {
        pppppuVar18 = *ppppppuVar19;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ppppppuVar19,0x10);
        if (bVar9) {
          *ppppppuVar19 = (undefined8 *****)((long)pppppuVar18 + -1);
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (pppppuVar18 == (undefined8 *****)0x0) {
        (*(code *)(*ppppppuVar20)[2])(ppppppuVar20);
        FUN_005466cc(ppppppuVar20);
      }
      goto LAB_00451bd8;
    }
  }
  else {
    bVar5 = param_2[0x17];
    pppppuVar18 = *(undefined8 ******)(param_2 + 8);
    if (-1 < (char)bVar5) {
      pppppuVar18 = (undefined8 *****)(ulong)bVar5;
    }
    do {
      bVar6 = *(byte *)((long)ppppppuVar19 + 0x2f);
      pppppuVar15 = ppppppuVar19[4];
      if (-1 < (char)bVar6) {
        pppppuVar15 = (undefined8 *****)(ulong)bVar6;
      }
      if (pppppuVar15 == pppppuVar18) {
        __s1 = (undefined8 ******)ppppppuVar19[3];
        if (-1 < (char)bVar6) {
          __s1 = ppppppuVar19 + 3;
        }
        pcVar14 = *(char **)param_2;
        if (-1 < (char)bVar5) {
          pcVar14 = param_2;
        }
        if ((char)bVar6 < '\0') {
          if ((pppppuVar18 == (undefined8 *****)0x0) ||
             (iVar10 = memcmp(__s1,pcVar14,(size_t)pppppuVar18), iVar10 == 0)) goto LAB_00451b84;
        }
        else {
          if (bVar6 == 0) goto LAB_00451b84;
          pppppuVar15 = (undefined8 *****)0x0;
          while (*(char *)((long)ppppppuVar19 + (long)(pppppuVar15 + 3)) ==
                 pcVar14[(long)pppppuVar15]) {
            pppppuVar15 = (undefined8 *****)((long)pppppuVar15 + 1);
            if ((undefined8 *****)(ulong)bVar6 == pppppuVar15) goto LAB_00451b84;
          }
        }
      }
      ppppppuVar19 = ppppppuVar19 + 7;
    } while (ppppppuVar19 != ppppppuVar20);
LAB_00451bd8:
    ppppppuVar19 = param_1[0x327];
  }
  if (ppppppuVar19 != (undefined8 ******)0x0) {
    FUN_004b2f54(pppppppuVar2,ppppppuVar19);
  }
  FUN_005467a4(param_1 + 0x311);
  if (*(char *)(param_1 + 0x31a) == '\0') {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
               "this->has_value()","optional operator-> called on a disengaged value");
  }
  local_98 = param_1;
  FUN_007b6160(param_1 + 0x316,&local_98,FUN_00430140);
  FUN_005467c8(param_1 + 0x311);
  uVar17 = (uint)local_69;
LAB_00451c30:
  if ((uVar17 >> 7 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_7f,local_80));
  }
  if (*(long *)(lVar8 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00451cb8  FUN_00451cb8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00451cb8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *******__dest;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *******__src;
  undefined1 local_b8 [8];
  undefined8 *******local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined1 local_98 [16];
  long local_88 [2];
  code *local_78;
  undefined8 *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  local_98 = FUN_0045352c();
  plVar9 = local_98._8_8_;
  if (local_98._0_8_ == 0) {
    pcVar2 = FUN_00457e4c;
    puVar3 = &DAT_001f1910;
    if (*(long *)(param_1 + 0x1928) != 0) {
      pcVar2 = FUN_00457e58;
      puVar3 = &DAT_001f6430;
    }
    uVar7 = FUN_0051452c(*(undefined8 *)(param_1 + 0x338));
    lVar10 = *(long *)(param_1 + 0x1930);
    uVar12 = *(undefined8 *)(param_1 + 0x1928);
    if (lVar10 != 0) {
      plVar8 = (long *)(lVar10 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_b8[0] = *(undefined1 *)(param_1 + 0x2e8);
    __dest = &local_b0;
    if (*(char *)(param_1 + 0x307) < '\0') {
      uVar11 = *(ulong *)(param_1 + 0x2f8);
      __src = *(undefined8 ********)(param_1 + 0x2f0);
      if (uVar11 < 0x17) {
        local_a0 = CONCAT17((char)uVar11,(undefined7)local_a0);
      }
      else {
        if (0x7fffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar1 = (uVar11 | 0xf) + 1;
        __dest = (undefined8 *******)operator_new(uVar1);
        local_a0 = uVar1 | 0x8000000000000000;
        local_b0 = __dest;
        uStack_a8 = uVar11;
      }
      if ((__dest <= __src) && (__src < (undefined8 *******)((long)__dest + uVar11 + 1))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      memmove(__dest,__src,uVar11 + 1);
    }
    else {
      uStack_a8 = *(ulong *)(param_1 + 0x2f8);
      local_b0 = *(undefined8 ********)(param_1 + 0x2f0);
      local_a0 = *(ulong *)(param_1 + 0x300);
    }
    local_88[0] = param_1;
    local_78 = pcVar2;
    local_70 = puVar3;
    if ((code *)*puVar3 != (code *)0x0) {
      local_88[0] = (*(code *)*puVar3)(param_1);
    }
    local_98 = FUN_004b9920(uVar7,uVar12,lVar10,param_2,local_b8,local_88);
    plVar8 = local_98._0_8_;
    if ((code *)local_70[1] != (code *)0x0) {
      (*(code *)local_70[1])(local_88[0]);
    }
    if ((long)local_a0 < 0) {
      operator_delete(local_b0);
    }
    if (plVar8 != (long *)0x0) {
      uVar11 = (**(code **)(*plVar8 + 0x60))(plVar8);
      if ((uVar11 & 1) != 0) {
        FUN_005467a4(plVar8 + 3);
        if ((char)plVar8[0xc] == '\0') {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
                     "this->has_value()","optional operator-> called on a disengaged value");
        }
        FUN_007b5a0c(plVar8 + 8,param_1,param_1,FUN_00458328);
        FUN_005467c8(plVar8 + 3);
      }
      (**(code **)(*plVar8 + 0x28))
                (plVar8,*(undefined4 *)(PTR_DAT_00d51ba0 + 0x18),
                 *(undefined4 *)(PTR_DAT_00d51ba0 + 0x20),*(undefined4 *)(PTR_DAT_00d51ba0 + 0x30));
    }
    uVar11 = *(ulong *)(param_1 + 0x1968);
    if (uVar11 < *(ulong *)(param_1 + 0x1970)) {
      FUN_00454dac(uVar11,local_98,param_2);
      lVar10 = uVar11 + 0x68;
      *(long *)(param_1 + 0x1968) = lVar10;
    }
    else {
      FUN_00454be4((long *)(param_1 + 0x1960),local_98,param_2);
      lVar10 = *(long *)(param_1 + 0x1968);
    }
    if (*(long *)(param_1 + 0x1960) == lVar10) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                 "!empty()","back() called on an empty vector");
    }
    if (plVar9 != (long *)0x0) {
      plVar8 = plVar9 + 1;
      do {
        lVar10 = *plVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        FUN_005466cc(plVar9);
      }
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_98._0_8_,local_98._8_8_);
}


// ===== 00452010  FUN_00452010 =====

void FUN_00452010(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  size_t __n;
  size_t sVar3;
  undefined8 *__s1;
  undefined8 *__s2;
  undefined1 *__src;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  undefined1 **__dest;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 *local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  long local_68;
  
  __dest = &local_c0;
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  lVar14 = *(long *)(param_1 + 0x1948);
  lVar15 = *(long *)(param_1 + 0x1950);
  if (lVar14 == lVar15) {
LAB_004520f8:
    lVar11 = FUN_0045143c(param_1,param_2,1);
    if (lVar14 == lVar15) goto LAB_00452340;
    if (lVar11 == 0) {
      auVar16 = FUN_00451cb8(param_1,lVar14);
      plVar12 = auVar16._8_8_;
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        __src = (undefined1 *)*param_2;
        uVar13 = param_2[1];
        if (uVar13 < 0x17) {
          local_b0 = CONCAT17((char)uVar13,(undefined7)local_b0);
        }
        else {
          if (0x7fffffffffffffef < uVar13) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar1 = (uVar13 | 0xf) + 1;
          __dest = (undefined1 **)operator_new(uVar1);
          local_b0 = uVar1 | 0x8000000000000000;
          local_c0 = (undefined1 *)__dest;
          uStack_b8 = uVar13;
        }
        if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar13 + 1))) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                     ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
        }
        memmove(__dest,__src,uVar13 + 1);
      }
      else {
        uStack_b8 = param_2[1];
        local_c0 = (undefined1 *)*param_2;
        local_b0 = param_2[2];
      }
      if (plVar12 != (long *)0x0) {
        plVar2 = plVar12 + 1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = *plVar2 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      uVar13 = uStack_b8;
      if (-1 < (long)local_b0) {
        uVar13 = local_b0 >> 0x38;
      }
      local_a0 = auVar16;
      if (uVar13 != 0 && auVar16._0_8_ != 0) {
        FUN_004572f0(param_1 + 0x18d8,&local_c0,&local_c0,local_a0);
      }
      uVar9 = local_a0._8_8_;
      if ((long *)local_a0._8_8_ != (long *)0x0) {
        plVar2 = (long *)(local_a0._8_8_ + 8);
        do {
          lVar14 = *plVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = lVar14 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*(long *)local_a0._8_8_ + 0x10))(local_a0._8_8_);
          FUN_005466cc(uVar9);
        }
      }
      if ((long)local_b0 < 0) {
        operator_delete(local_c0);
      }
      lVar11 = FUN_0045143c(param_1,param_2,0x101);
      if (plVar12 != (long *)0x0) {
        plVar2 = plVar12 + 1;
        do {
          lVar14 = *plVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = lVar14 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          FUN_005466cc(plVar12);
        }
      }
      goto LAB_00452340;
    }
    lVar14 = param_3[3];
    if (*(char *)(lVar14 + 0x10) == '\0') goto LAB_00452348;
    FUN_004b302c(param_1 + 0x19a0,param_2,0);
    lVar14 = FUN_00456578(param_1 + 0x18d8,param_2);
    if (lVar14 != 0) {
      FUN_00456734(param_1 + 0x18d8,lVar14);
    }
    lVar14 = FUN_0045695c(param_1 + 0x1900,param_2);
    if (lVar14 != 0) {
      if (*(long *)(lVar8 + 0x28) == local_68) {
        FUN_00456b18(param_1 + 0x1900,lVar14);
        return;
      }
      goto LAB_004523f0;
    }
  }
  else {
    bVar4 = *(byte *)((long)param_2 + 0x17);
    __n = param_2[1];
    if (-1 < (char)bVar4) {
      __n = (ulong)bVar4;
    }
    do {
      bVar5 = *(byte *)(lVar14 + 0x2f);
      sVar3 = *(size_t *)(lVar14 + 0x20);
      if (-1 < (char)bVar5) {
        sVar3 = (ulong)bVar5;
      }
      if (sVar3 == __n) {
        __s1 = (undefined8 *)*(void **)(lVar14 + 0x18);
        if (-1 < (char)bVar5) {
          __s1 = (undefined8 *)(lVar14 + 0x18);
        }
        __s2 = (undefined8 *)*param_2;
        if (-1 < (char)bVar4) {
          __s2 = param_2;
        }
        if ((char)bVar5 < '\0') {
          if ((__n == 0) || (iVar10 = memcmp(__s1,__s2,__n), iVar10 == 0)) goto LAB_004520f8;
        }
        else {
          if (bVar5 == 0) goto LAB_004520f8;
          uVar13 = 0;
          while (*(char *)(lVar14 + uVar13 + 0x18) == *(char *)((long)__s2 + uVar13)) {
            uVar13 = uVar13 + 1;
            if (bVar5 == uVar13) goto LAB_004520f8;
          }
        }
      }
      lVar14 = lVar14 + 0x38;
    } while (lVar14 != lVar15);
    lVar11 = FUN_0045143c(param_1,param_2,1);
LAB_00452340:
    if (lVar11 != 0) {
      lVar14 = param_3[3];
LAB_00452348:
      uStack_88 = param_3[1];
      local_90 = *param_3;
      local_80 = param_3[2];
      if (*(long *)(lVar14 + 8) != 0) {
        param_3[2] = FUN_00413c90;
        param_3[3] = &DAT_001f1910;
      }
      local_78 = lVar14;
      FUN_004bbac4(lVar11,&local_90);
      if (*(code **)(local_78 + 8) != (code *)0x0) {
        (**(code **)(local_78 + 8))(local_90);
      }
    }
  }
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
LAB_004523f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004523f4  FUN_004523f4 =====

void FUN_004523f4(void)

{
  return;
}


// ===== 004523f8  FUN_004523f8 =====

void FUN_004523f8(void)

{
  return;
}


// ===== 004523fc  FUN_004523fc =====

void FUN_004523fc(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  if ((param_2 != (long *)0x0) && (*(long **)(param_1 + 0x1938) != param_2)) {
    plVar7 = *(long **)(param_1 + 0x1968);
    for (plVar6 = *(long **)(param_1 + 0x1960); plVar6 != plVar7; plVar6 = plVar6 + 0xd) {
      if (plVar6[1] != 0) {
        plVar4 = (long *)FUN_005466fc();
        plVar1 = (long *)0x0;
        if (plVar4 != (long *)0x0) {
          plVar1 = (long *)*plVar6;
        }
        if (plVar1 != (long *)0x0 && plVar1 == param_2) {
          (**(code **)(*param_2 + 0x18))(param_2,plVar6[0xc]);
        }
        if (plVar4 != (long *)0x0) {
          plVar1 = plVar4 + 1;
          do {
            lVar5 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            FUN_005466cc(plVar4);
          }
        }
      }
    }
  }
  return;
}


// ===== 004524bc  FUN_004524bc =====

/* WARNING: Removing unreachable block (ram,0x00452dc4) */
/* WARNING: Removing unreachable block (ram,0x00452e94) */
/* WARNING: Type propagation algorithm not settling */

void FUN_004524bc(undefined8 param_1,long param_2)

{
  void **ppvVar1;
  void **ppvVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *pvVar5;
  undefined8 ******ppppppuVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *******pppppppuVar10;
  void *pvVar11;
  undefined *puVar12;
  undefined *puVar13;
  void *pvVar14;
  undefined8 *puVar15;
  bool bVar16;
  char cVar17;
  uint uVar18;
  ulong uVar19;
  undefined8 uVar20;
  long *plVar21;
  long lVar22;
  undefined8 *******pppppppuVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined8 *******pppppppuVar26;
  undefined8 *******pppppppuVar27;
  undefined8 *puVar28;
  void *pvVar29;
  int iVar30;
  undefined8 *******pppppppuVar31;
  long lVar32;
  undefined8 *local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 *******local_408;
  undefined8 *******local_400;
  undefined8 local_3f8;
  undefined *local_3f0;
  void *local_3e8;
  void *local_3e0;
  undefined8 *******local_3d0;
  undefined8 *******local_3c8;
  undefined8 local_3c0;
  undefined *local_3b8;
  void *local_3b0;
  void *local_3a8;
  undefined1 auStack_398 [40];
  undefined *local_370;
  void *local_368;
  char local_351;
  void *local_348 [2];
  char local_331;
  void *local_320 [2];
  undefined *local_310;
  char cStack_309;
  undefined *local_308 [8];
  void *local_2c8;
  undefined8 uStack_2c0;
  long local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  undefined *local_2a0;
  undefined8 uStack_298;
  undefined4 auStack_290 [34];
  void *local_208 [11];
  void *local_1b0;
  undefined8 uStack_1a8;
  long local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined *local_188;
  undefined8 uStack_180;
  undefined4 auStack_178 [34];
  undefined8 local_f0 [2];
  code *local_e0;
  undefined8 *local_d8;
  undefined8 local_d0 [2];
  code *local_c0;
  undefined8 *local_b8;
  undefined8 local_b0 [2];
  code *local_a0;
  undefined8 *local_98;
  undefined8 local_90 [2];
  code *local_80;
  undefined *local_78;
  long local_70;
  
  lVar9 = tpidr_el0;
  local_70 = *(long *)(lVar9 + 0x28);
  local_80 = FUN_00457818;
  local_78 = &DAT_001f6488;
  local_a0 = FUN_00442d38;
  local_98 = &DAT_001f1910;
  FUN_004b6d68(&local_3b8,param_2 + 0x1a18,local_90,local_b0);
  if ((code *)local_98[1] != (code *)0x0) {
    (*(code *)local_98[1])(local_b0[0]);
  }
  if (*(code **)(local_78 + 8) != (code *)0x0) {
    (**(code **)(local_78 + 8))(local_90[0]);
  }
  local_3c8 = (undefined8 *******)0x0;
  local_3c0 = 0;
  local_3d0 = &local_3c8;
  FUN_004b7110(local_208,&local_3b8);
  pvVar11 = local_208[1];
  pvVar5 = local_208[0];
  for (pvVar29 = local_208[0]; local_208[0] = pvVar5, pvVar29 != pvVar11;
      pvVar29 = (void *)((long)pvVar29 + 0x60)) {
    FUN_00446444(&local_3d0,pvVar29,pvVar29);
    pvVar5 = local_208[0];
  }
  if (pvVar5 != (void *)0x0) {
    while (local_208[1] != pvVar5) {
      FUN_007b6d78((void *)((long)local_208[1] + -0x60));
      local_208[1] = (void *)((long)local_208[1] + -0x60);
    }
    operator_delete(local_208[0]);
  }
  puVar13 = PTR_PTR_00d51b18;
  puVar12 = PTR_DAT_00d51b10;
  ppvVar1 = local_208 + 3;
  ppvVar2 = local_208 + 2;
  puVar3 = PTR_DAT_00d51b10 + 0x68;
  puVar4 = PTR_DAT_00d51b10 + 0x40;
  pvVar29 = *(void **)(PTR_PTR_00d51b18 + 0x10);
  uVar20 = *(undefined8 *)(PTR_PTR_00d51b18 + 0x18);
  local_208[0] = pvVar29;
  local_208[2] = puVar4;
  local_188 = puVar3;
  *(undefined8 *)((long)local_208 + *(long *)((long)pvVar29 + -0x18)) = uVar20;
  local_208[1] = (void *)0x0;
  lVar22 = *(long *)((long)local_208[0] + -0x18);
  FUN_00520e8c((long)local_208 + lVar22,ppvVar1);
  lVar7 = *(long *)(puVar13 + 0x20);
  uVar8 = *(undefined8 *)(puVar13 + 0x28);
  *(undefined8 *)((long)&uStack_180 + lVar22) = 0;
  lVar32 = *(long *)(puVar13 + 8);
  *(undefined4 *)((long)auStack_178 + lVar22) = 0xffffffff;
  *(undefined8 *)((long)ppvVar2 + *(long *)(lVar7 + -0x18)) = uVar8;
  uVar25 = *(undefined8 *)(puVar13 + 0x30);
  *(undefined8 *)((long)local_208 + *(long *)(lVar32 + -0x18)) = uVar25;
  local_208[0] = puVar12 + 0x18;
  local_208[2] = puVar4;
  local_188 = puVar3;
  FUN_0054a4c8(ppvVar1);
  local_190 = 0x18;
  uStack_1a8 = 0;
  local_1b0 = (void *)0x0;
  local_208[3] = PTR_DAT_00d51b20 + 0x10;
  uStack_198 = 0;
  local_1a0 = 0;
  pppppppuVar23 = local_3d0;
  while ((undefined8 ********)pppppppuVar23 != &local_3c8) {
    ppppppuVar6 = pppppppuVar23[5];
    pppppppuVar31 = (undefined8 *******)pppppppuVar23[4];
    if (-1 < (char)*(byte *)((long)pppppppuVar23 + 0x37)) {
      ppppppuVar6 = (undefined8 ******)(ulong)*(byte *)((long)pppppppuVar23 + 0x37);
      pppppppuVar31 = pppppppuVar23 + 4;
    }
    FUN_00428964(ppvVar2,pppppppuVar31,ppppppuVar6);
    FUN_00428964(ppvVar2,&DAT_001e1644,2);
    pppppppuVar31 = (undefined8 *******)pppppppuVar23[1];
    pppppppuVar26 = pppppppuVar23;
    if ((undefined8 *******)pppppppuVar23[1] == (undefined8 *******)0x0) {
      do {
        pppppppuVar23 = (undefined8 *******)pppppppuVar26[2];
        bVar16 = (undefined8 *******)*pppppppuVar23 != pppppppuVar26;
        pppppppuVar26 = pppppppuVar23;
      } while (bVar16);
    }
    else {
      do {
        pppppppuVar23 = pppppppuVar31;
        pppppppuVar31 = (undefined8 *******)*pppppppuVar23;
      } while ((undefined8 *******)*pppppppuVar23 != (undefined8 *******)0x0);
    }
  }
  uVar19 = FUN_00417e08();
  if ((uVar19 & 1) == 0) {
    FUN_0054d504(local_320,ppvVar1);
    FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/media/engine.cpp",0x4c49,
                 "Supported encoders: ",local_320);
    if (cStack_309 < '\0') {
      operator_delete(local_320[0]);
    }
  }
  local_c0 = FUN_00442d38;
  local_b8 = &DAT_001f1910;
  local_e0 = FUN_00417780;
  local_d8 = &DAT_001f1910;
  FUN_004b78b0(&local_3f0,local_d0,local_f0);
  if ((code *)local_d8[1] != (code *)0x0) {
    (*(code *)local_d8[1])(local_f0[0]);
  }
  if ((code *)local_b8[1] != (code *)0x0) {
    (*(code *)local_b8[1])(local_d0[0]);
  }
  local_400 = (undefined8 *******)0x0;
  local_3f8 = 0;
  local_408 = &local_400;
  FUN_004b7c38(local_320,&local_3f0);
  pvVar14 = local_320[1];
  pvVar11 = local_320[0];
  for (pvVar5 = local_320[0]; local_320[0] = pvVar11, pvVar5 != pvVar14;
      pvVar5 = (void *)((long)pvVar5 + 0x60)) {
    FUN_00446444(&local_408,pvVar5,pvVar5);
    pvVar11 = local_320[0];
  }
  if (pvVar11 != (void *)0x0) {
    while (local_320[1] != pvVar11) {
      FUN_007b6d78((void *)((long)local_320[1] + -0x60));
      local_320[1] = (void *)((long)local_320[1] + -0x60);
    }
    operator_delete(local_320[0]);
  }
  local_320[0] = pvVar29;
  local_310 = puVar12 + 0x40;
  local_2a0 = puVar12 + 0x68;
  *(undefined8 *)((long)local_320 + *(long *)((long)pvVar29 + -0x18)) = uVar20;
  local_320[1] = (void *)0x0;
  lVar22 = *(long *)((long)local_320[0] + -0x18);
  FUN_00520e8c((long)local_320 + lVar22,local_308);
  *(undefined8 *)((long)&uStack_298 + lVar22) = 0;
  *(undefined4 *)((long)auStack_290 + lVar22) = 0xffffffff;
  *(undefined8 *)((long)&stack0xfffffffffffffcf0 + *(long *)(lVar7 + -0x18)) = uVar8;
  *(undefined8 *)((long)local_320 + *(long *)(lVar32 + -0x18)) = uVar25;
  local_320[0] = puVar12 + 0x18;
  local_310 = puVar12 + 0x40;
  local_2a0 = puVar12 + 0x68;
  FUN_0054a4c8(local_308);
  local_2a8 = 0x18;
  local_308[0] = PTR_DAT_00d51b20 + 0x10;
  uStack_2c0 = 0;
  local_2c8 = (void *)0x0;
  uStack_2b0 = 0;
  local_2b8 = 0;
  pppppppuVar23 = local_408;
  while ((undefined8 ********)pppppppuVar23 != &local_400) {
    ppppppuVar6 = pppppppuVar23[5];
    pppppppuVar31 = (undefined8 *******)pppppppuVar23[4];
    if (-1 < (char)*(byte *)((long)pppppppuVar23 + 0x37)) {
      ppppppuVar6 = (undefined8 ******)(ulong)*(byte *)((long)pppppppuVar23 + 0x37);
      pppppppuVar31 = pppppppuVar23 + 4;
    }
    FUN_00428964(&stack0xfffffffffffffcf0,pppppppuVar31,ppppppuVar6);
    FUN_00428964(&stack0xfffffffffffffcf0,&DAT_001e1644,2);
    pppppppuVar31 = (undefined8 *******)pppppppuVar23[1];
    pppppppuVar26 = pppppppuVar23;
    if ((undefined8 *******)pppppppuVar23[1] == (undefined8 *******)0x0) {
      do {
        pppppppuVar23 = (undefined8 *******)pppppppuVar26[2];
        bVar16 = (undefined8 *******)*pppppppuVar23 != pppppppuVar26;
        pppppppuVar26 = pppppppuVar23;
      } while (bVar16);
    }
    else {
      do {
        pppppppuVar23 = pppppppuVar31;
        pppppppuVar31 = (undefined8 *******)*pppppppuVar23;
      } while ((undefined8 *******)*pppppppuVar23 != (undefined8 *******)0x0);
    }
  }
  uVar19 = FUN_00417e08();
  if ((uVar19 & 1) == 0) {
    FUN_0054d504(local_348,local_308);
    FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/media/engine.cpp",0x4ca1,
                 "Supported decoders: ",local_348);
    if (local_331 < '\0') {
      operator_delete(local_348[0]);
    }
  }
  local_418 = 0;
  local_410 = 0;
  local_420 = &local_418;
  pppppppuVar23 = local_3d0;
  while ((undefined8 ********)pppppppuVar23 != &local_3c8) {
    FUN_0045781c(&local_420,&local_418,pppppppuVar23 + 4,pppppppuVar23 + 4);
    if (pppppppuVar23 == (undefined8 *******)0x0) goto LAB_00452ee0;
    pppppppuVar31 = (undefined8 *******)pppppppuVar23[1];
    pppppppuVar26 = pppppppuVar23;
    if ((undefined8 *******)pppppppuVar23[1] == (undefined8 *******)0x0) {
      do {
        pppppppuVar23 = (undefined8 *******)pppppppuVar26[2];
        bVar16 = (undefined8 *******)*pppppppuVar23 != pppppppuVar26;
        pppppppuVar26 = pppppppuVar23;
      } while (bVar16);
    }
    else {
      do {
        pppppppuVar23 = pppppppuVar31;
        pppppppuVar31 = (undefined8 *******)*pppppppuVar23;
      } while ((undefined8 *******)*pppppppuVar23 != (undefined8 *******)0x0);
    }
  }
  FUN_004df134(local_348,6);
  puVar24 = local_420;
  pppppppuVar23 = local_408;
  while (local_420 = puVar24, (undefined8 ********)pppppppuVar23 != &local_400) {
    FUN_0045781c(&local_420,&local_418,pppppppuVar23 + 4,pppppppuVar23 + 4);
    if (pppppppuVar23 == (undefined8 *******)0x0) goto LAB_00452ee0;
    pppppppuVar31 = (undefined8 *******)pppppppuVar23[1];
    pppppppuVar26 = pppppppuVar23;
    puVar24 = local_420;
    if ((undefined8 *******)pppppppuVar23[1] == (undefined8 *******)0x0) {
      do {
        pppppppuVar23 = (undefined8 *******)pppppppuVar26[2];
        bVar16 = (undefined8 *******)*pppppppuVar23 != pppppppuVar26;
        pppppppuVar26 = pppppppuVar23;
      } while (bVar16);
    }
    else {
      do {
        pppppppuVar23 = pppppppuVar31;
        pppppppuVar31 = (undefined8 *******)*pppppppuVar23;
      } while ((undefined8 *******)*pppppppuVar23 != (undefined8 *******)0x0);
    }
  }
  if (puVar24 != &local_418) {
    iVar30 = 0;
    do {
      puVar15 = puVar24 + 4;
      FUN_004df134(&local_370,7);
      FUN_004df478(auStack_398,puVar15);
      uVar20 = FUN_004e1438(&local_370,"codec");
      FUN_004dfa04(uVar20,auStack_398);
      FUN_004df880(auStack_398);
      pppppppuVar23 = &local_3c8;
      pppppppuVar31 = local_3c8;
      if (local_3c8 == (undefined8 *******)0x0) {
LAB_00452b88:
        pppppppuVar23 = &local_3c8;
      }
      else {
        do {
          pppppppuVar27 = pppppppuVar23;
          pppppppuVar26 = pppppppuVar31 + 4;
          cVar17 = FUN_0041d7a0(pppppppuVar26,puVar15);
          pppppppuVar23 = pppppppuVar27;
          pppppppuVar10 = pppppppuVar31 + 1;
          if (-1 < cVar17) {
            pppppppuVar23 = pppppppuVar31;
            pppppppuVar10 = pppppppuVar31;
          }
          pppppppuVar31 = (undefined8 *******)*pppppppuVar10;
        } while ((undefined8 *******)*pppppppuVar10 != (undefined8 *******)0x0);
        if ((undefined8 ********)pppppppuVar23 == &local_3c8) goto LAB_00452b88;
        pppppppuVar31 = pppppppuVar27 + 4;
        if (-1 < cVar17) {
          pppppppuVar31 = pppppppuVar26;
        }
        uVar18 = FUN_0041d7a0(puVar15,pppppppuVar31);
        if ((uVar18 >> 7 & 1) != 0) goto LAB_00452b88;
      }
      FUN_004df5b4(auStack_398,(undefined8 ********)pppppppuVar23 != &local_3c8);
      uVar20 = FUN_004e1438(&local_370,"encode");
      FUN_004dfa04(uVar20,auStack_398);
      FUN_004df880(auStack_398);
      pppppppuVar23 = &local_400;
      pppppppuVar31 = local_400;
      if (local_400 == (undefined8 *******)0x0) {
LAB_00452c18:
        pppppppuVar23 = &local_400;
      }
      else {
        do {
          pppppppuVar27 = pppppppuVar23;
          pppppppuVar26 = pppppppuVar31 + 4;
          cVar17 = FUN_0041d7a0(pppppppuVar26,puVar15);
          pppppppuVar23 = pppppppuVar27;
          pppppppuVar10 = pppppppuVar31 + 1;
          if (-1 < cVar17) {
            pppppppuVar23 = pppppppuVar31;
            pppppppuVar10 = pppppppuVar31;
          }
          pppppppuVar31 = (undefined8 *******)*pppppppuVar10;
        } while ((undefined8 *******)*pppppppuVar10 != (undefined8 *******)0x0);
        if ((undefined8 ********)pppppppuVar23 == &local_400) goto LAB_00452c18;
        pppppppuVar31 = pppppppuVar27 + 4;
        if (-1 < cVar17) {
          pppppppuVar31 = pppppppuVar26;
        }
        uVar18 = FUN_0041d7a0(puVar15,pppppppuVar31);
        if ((uVar18 >> 7 & 1) != 0) goto LAB_00452c18;
      }
      FUN_004df5b4(auStack_398,(undefined8 ********)pppppppuVar23 != &local_400);
      uVar20 = FUN_004e1438(&local_370,"decode");
      FUN_004dfa04(uVar20,auStack_398);
      FUN_004df880(auStack_398);
      uVar20 = FUN_004e05e4(local_348,iVar30);
      FUN_004dfa04(uVar20,&local_370);
      FUN_004df880(&local_370);
      if (puVar24 == (undefined8 *)0x0) {
LAB_00452ee0:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                   "__x != nullptr","node shouldn\'t be null");
      }
      puVar15 = (undefined8 *)puVar24[1];
      puVar28 = puVar24;
      if ((undefined8 *)puVar24[1] == (undefined8 *)0x0) {
        do {
          puVar24 = (undefined8 *)puVar28[2];
          bVar16 = (undefined8 *)*puVar24 != puVar28;
          puVar28 = puVar24;
        } while (bVar16);
      }
      else {
        do {
          puVar24 = puVar15;
          puVar15 = (undefined8 *)*puVar24;
        } while ((undefined8 *)*puVar24 != (undefined8 *)0x0);
      }
      iVar30 = iVar30 + 1;
    } while (puVar24 != &local_418);
  }
  FUN_004e36c8(&local_370);
  FUN_004e36e0(param_1,&local_370,local_348);
  local_370 = PTR_DAT_00d51ae0 + 0x10;
  if (local_351 < '\0') {
    operator_delete(local_368);
  }
  FUN_004e36c0(&local_370);
  FUN_004df880(local_348);
  FUN_004463f4(&local_420,local_418);
  puVar3 = PTR_PTR_00d51b18;
  pvVar29 = *(void **)PTR_PTR_00d51b18;
  uVar20 = *(undefined8 *)(PTR_PTR_00d51b18 + 0x40);
  uVar8 = *(undefined8 *)(PTR_PTR_00d51b18 + 0x48);
  local_320[0] = pvVar29;
  *(undefined8 *)((long)local_320 + *(long *)((long)pvVar29 + -0x18)) = uVar20;
  local_308[0] = PTR_DAT_00d51b20 + 0x10;
  local_310 = (undefined *)uVar8;
  if (local_2b8 < 0) {
    operator_delete(local_2c8);
  }
  FUN_0054a488(local_308);
  FUN_0054ce58(local_320,puVar3 + 8);
  thunk_FUN_00520cf4(&local_2a0);
  FUN_004463f4(&local_408,local_400);
  pvVar5 = local_3e8;
  local_3f0 = PTR_DAT_00d51b80 + 0x10;
  if (local_3e8 != (void *)0x0) {
    for (; local_3e0 != pvVar5; local_3e0 = (void *)((long)local_3e0 + -0x20)) {
      plVar21 = *(long **)((long)local_3e0 + -8);
      *(undefined8 *)((long)local_3e0 + -8) = 0;
      if (plVar21 != (long *)0x0) {
        (**(code **)(*plVar21 + 8))();
      }
    }
    local_3e0 = pvVar5;
    operator_delete(local_3e8);
  }
  local_208[0] = pvVar29;
  *(undefined8 *)((long)local_208 + *(long *)((long)pvVar29 + -0x18)) = uVar20;
  local_208[3] = PTR_DAT_00d51b20 + 0x10;
  local_208[2] = (void *)uVar8;
  if (local_1a0 < 0) {
    operator_delete(local_1b0);
  }
  FUN_0054a488(ppvVar1);
  FUN_0054ce58(local_208,puVar3 + 8);
  thunk_FUN_00520cf4(&local_188);
  FUN_004463f4(&local_3d0,local_3c8);
  pvVar29 = local_3b0;
  local_3b8 = PTR_DAT_00d51b88 + 0x10;
  if (local_3b0 != (void *)0x0) {
    for (; local_3a8 != pvVar29; local_3a8 = (void *)((long)local_3a8 + -0x20)) {
      plVar21 = *(long **)((long)local_3a8 + -8);
      *(undefined8 *)((long)local_3a8 + -8) = 0;
      if (plVar21 != (long *)0x0) {
        (**(code **)(*plVar21 + 0x30))();
      }
    }
    local_3a8 = pvVar29;
    operator_delete(local_3b0);
  }
  if (*(long *)(lVar9 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00452f0c  FUN_00452f0c =====

void FUN_00452f0c(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *local_a0;
  undefined8 uStack_98;
  code *local_90;
  undefined **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  code *local_70;
  undefined8 *local_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pcVar1 = (code *)param_2[2];
  puVar2 = (undefined8 *)param_2[3];
  uVar6 = param_2[1];
  uVar5 = *param_2;
  if (puVar2[1] != 0) {
    param_2[2] = FUN_00457bf4;
    param_2[3] = &DAT_001f1910;
  }
  local_80 = uVar5;
  uStack_78 = uVar6;
  local_70 = pcVar1;
  local_68 = puVar2;
  if (*(char *)(param_1 + 0x1a24) == '\0') {
    if (puVar2[1] != 0) {
      local_70 = FUN_00457bf4;
      local_68 = &DAT_001f1910;
    }
    local_90 = FUN_00457c00;
    local_88 = &PTR_FUN_00d1c5d0;
    local_a0 = (undefined8 *)operator_new(0x20);
    *local_a0 = uVar5;
    local_a0[1] = uVar6;
    puVar4 = *(undefined8 **)(param_1 + 0x1a30);
    local_a0[2] = pcVar1;
    local_a0[3] = puVar2;
    if (puVar2[1] != 0) {
      puVar2 = &DAT_001f1910;
    }
    if (puVar4 < *(undefined8 **)(param_1 + 0x1a38)) {
      if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x23,"__location != nullptr","null pointer given to construct_at");
      }
      puVar4[1] = uStack_98;
      *puVar4 = local_a0;
      puVar4[2] = local_90;
      puVar4[3] = local_88;
      if (local_88[1] != (undefined *)0x0) {
        local_90 = FUN_0040dec4;
        local_88 = (undefined **)&DAT_001f1910;
      }
      *(undefined8 **)(param_1 + 0x1a30) = puVar4 + 4;
    }
    else {
      FUN_004313e8(param_1 + 0x1a28,&local_a0);
    }
    if ((code *)local_88[1] != (code *)0x0) {
      (*(code *)local_88[1])(local_a0);
    }
    if ((code *)puVar2[1] != (code *)0x0) {
      (*(code *)puVar2[1])(uVar5);
    }
  }
  else {
    FUN_004530b4(&local_80);
  }
  if ((code *)local_68[1] != (code *)0x0) {
    (*(code *)local_68[1])(local_80);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004530b4  FUN_004530b4 =====

/* WARNING: Removing unreachable block (ram,0x00453208) */
/* WARNING: Removing unreachable block (ram,0x00453254) */

void FUN_004530b4(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *local_f0;
  long *local_e8;
  long *local_d8;
  long *local_d0;
  undefined1 auStack_c0 [40];
  undefined1 auStack_98 [40];
  undefined1 auStack_70 [40];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_004df134(auStack_70,0);
  FUN_004c1478(&local_d8);
  plVar4 = local_d0;
  for (plVar1 = local_d8; plVar1 != plVar4; plVar1 = plVar1 + 3) {
    uVar5 = FUN_004e1438(auStack_70,"available_video_encoders");
    plVar2 = (long *)*plVar1;
    if (-1 < *(char *)((long)plVar1 + 0x17)) {
      plVar2 = plVar1;
    }
    FUN_004df270(auStack_98,plVar2);
    FUN_004e1528(uVar5,auStack_98);
    FUN_004df880(auStack_98);
  }
  FUN_004c1484(&local_f0);
  plVar4 = local_e8;
  for (plVar1 = local_f0; plVar1 != plVar4; plVar1 = plVar1 + 3) {
    uVar5 = FUN_004e1438(auStack_70,"available_video_decoders");
    plVar2 = (long *)*plVar1;
    if (-1 < *(char *)((long)plVar1 + 0x17)) {
      plVar2 = plVar1;
    }
    FUN_004df270(auStack_98,plVar2);
    FUN_004e1528(uVar5,auStack_98);
    FUN_004df880(auStack_98);
  }
  FUN_004df5d8(auStack_c0,auStack_70);
  (**(code **)(param_1 + 0x10))(param_1,auStack_c0);
  FUN_004df880(auStack_c0);
  if (local_f0 != (long *)0x0) {
    for (; local_e8 != local_f0; local_e8 = local_e8 + -3) {
    }
    local_e8 = local_f0;
    operator_delete(local_f0);
  }
  if (local_d8 != (long *)0x0) {
    for (; local_d0 != local_d8; local_d0 = local_d0 + -3) {
    }
    local_d0 = local_d8;
    operator_delete(local_d8);
  }
  FUN_004df880(auStack_70);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004532a0  FUN_004532a0 =====

undefined8 FUN_004532a0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_2b0 [424];
  undefined1 auStack_108 [208];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00848970(auStack_2b0,param_3);
  FUN_008495b4(auStack_108,param_4);
  uVar2 = (**(code **)(*param_2 + 0x20))(param_2,auStack_2b0,auStack_108);
  FUN_0084966c(auStack_108);
  FUN_00848a78(auStack_2b0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00453338  FUN_00453338 =====

void FUN_00453338(undefined8 param_1,long *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00453348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x30))(param_2,param_3);
  return;
}


// ===== 0045334c  FUN_0045334c =====

/* WARNING: Removing unreachable block (ram,0x00453474) */

long * FUN_0045334c(long param_1,long *param_2,long param_3)

{
  ulong uVar1;
  undefined8 ***__src;
  ulong uVar2;
  long lVar3;
  undefined8 ***__dest;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_168 [248];
  undefined8 **local_70;
  ulong uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (*(char *)(param_3 + 0xaf) < '\0') {
    __src = *(undefined8 ****)(param_3 + 0x98);
    uVar2 = *(ulong *)(param_3 + 0xa0);
    if (uVar2 < 0x17) {
      __dest = &local_70;
      local_60 = CONCAT17((char)uVar2,(undefined7)local_60);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 ***)operator_new(uVar1);
      local_60 = uVar1 | 0x8000000000000000;
      local_70 = __dest;
      uStack_68 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined8 ***)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uStack_68 = *(ulong *)(param_3 + 0xa0);
    local_70 = *(undefined8 ***)(param_3 + 0x98);
    local_60 = *(ulong *)(param_3 + 0xa8);
  }
  FUN_00846884(auStack_168,param_3);
  plVar4 = (long *)(**(code **)(*param_2 + 0x38))(param_2,auStack_168);
  FUN_00846ac4(auStack_168);
  if (*(int *)(param_1 + 0x1820) != 0) {
    uVar5 = FUN_005f8e18(plVar4);
    FUN_005f32e8(uVar5,*(undefined4 *)(param_1 + 0x1820));
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
  FUN_00472c30(*(undefined8 *)(*(long *)(param_1 + 0x360) + 0xb0),param_2,&local_70,plVar4);
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar4;
}


// ===== 004534dc  FUN_004534dc =====

void FUN_004534dc(long param_1,long *param_2,long *param_3)

{
  FUN_0047328c(*(undefined8 *)(*(long *)(param_1 + 0x360) + 0xb0),param_3);
  (**(code **)(*param_3 + 0x18))(param_3);
                    /* WARNING: Could not recover jumptable at 0x00453528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x40))(param_2,param_3);
  return;
}


// ===== 0045352c  FUN_0045352c =====

void FUN_0045352c(long param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  void *pvVar6;
  bool bVar7;
  int iVar8;
  char *__s2;
  long lVar9;
  ulong uVar10;
  void **ppvVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  void *local_80;
  size_t local_78;
  byte local_69;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  plVar12 = *(long **)(param_1 + 0x1960);
  plVar14 = *(long **)(param_1 + 0x1968);
  plVar15 = plVar12;
  plVar13 = plVar12;
  if (plVar12 != plVar14) {
LAB_00453570:
    if ((plVar15[1] != 0) && (*(long *)(plVar15[1] + 8) != -1)) goto code_r0x00453584;
    if ((plVar15 != plVar14) && (plVar12 = plVar15 + 0xd, plVar12 != plVar14)) {
      do {
        if ((plVar12[1] != 0) && (*(long *)(plVar12[1] + 8) != -1)) {
          FUN_00454b04(plVar15,plVar12);
          plVar15 = plVar15 + 0xd;
        }
        plVar12 = plVar12 + 0xd;
      } while (plVar12 != plVar14);
      plVar14 = *(long **)(param_1 + 0x1968);
    }
    plVar12 = plVar15;
    plVar13 = plVar14;
    if (plVar14 < plVar15) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x644,
                 "__first <= __last","vector::erase(first, last) called with invalid range");
    }
  }
LAB_004535f8:
  if (plVar12 == plVar13) {
    plVar15 = *(long **)(param_1 + 0x1960);
    if (plVar15 != plVar13) goto LAB_00453698;
  }
  else {
    if ((long *)((long)plVar12 + ((long)plVar13 - (long)plVar12)) != plVar13) {
      lVar9 = (long)plVar13 - (long)plVar12 >> 3;
      do {
        FUN_00454b04(plVar12,plVar12 + lVar9);
        plVar12 = plVar12 + 0xd;
      } while (plVar12 + lVar9 != plVar13);
      plVar13 = *(long **)(param_1 + 0x1968);
    }
    while (plVar13 != plVar12) {
      plVar13 = plVar13 + -0xd;
      FUN_004548a8(plVar13);
    }
    plVar15 = *(long **)(param_1 + 0x1960);
    *(long **)(param_1 + 0x1968) = plVar12;
    plVar13 = plVar12;
    if (plVar15 != plVar12) {
LAB_00453698:
      do {
        if (plVar15[1] != 0) {
          plVar12 = (long *)FUN_005466fc();
          bVar7 = false;
          if ((plVar12 != (long *)0x0) && ((long *)*plVar15 != (long *)0x0)) {
            (**(code **)(*(long *)*plVar15 + 0x38))(&local_80);
            pvVar6 = local_80;
            uVar10 = (ulong)local_69;
            bVar2 = *(byte *)(param_2 + 0x2f);
            __n = local_78;
            if (-1 < (char)local_69) {
              __n = uVar10;
            }
            sVar1 = *(size_t *)(param_2 + 0x20);
            if (-1 < (char)bVar2) {
              sVar1 = (ulong)bVar2;
            }
            if (__n == sVar1) {
              ppvVar11 = (void **)local_80;
              if (-1 < (char)local_69) {
                ppvVar11 = &local_80;
              }
              __s2 = *(char **)(param_2 + 0x18);
              if (-1 < (char)bVar2) {
                __s2 = (char *)(param_2 + 0x18);
              }
              if (-1 < (char)local_69) {
                ppvVar11 = &local_80;
                if (local_69 == 0) {
                  bVar7 = true;
                  goto LAB_004537a0;
                }
                do {
                  uVar10 = uVar10 - 1;
                  bVar7 = *(char *)ppvVar11 == *__s2;
                  if (!bVar7) break;
                  __s2 = __s2 + 1;
                  ppvVar11 = (void **)((long)ppvVar11 + 1);
                } while (uVar10 != 0);
                goto joined_r0x0045376c;
              }
              if (__n == 0) {
                bVar7 = true;
              }
              else {
                iVar8 = memcmp(ppvVar11,__s2,__n);
                bVar7 = iVar8 == 0;
              }
            }
            else {
              bVar7 = false;
joined_r0x0045376c:
              if (-1 < (char)local_69) goto LAB_004537a0;
            }
            operator_delete(pvVar6);
          }
LAB_004537a0:
          if (plVar12 != (long *)0x0) {
            plVar14 = plVar12 + 1;
            do {
              lVar9 = *plVar14;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar4) {
                *plVar14 = lVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
              FUN_005466cc(plVar12);
            }
          }
          plVar12 = plVar15;
          if (bVar7) break;
        }
        plVar15 = plVar15 + 0xd;
        plVar12 = plVar13;
      } while (plVar15 != plVar13);
      if (plVar12 != *(long **)(param_1 + 0x1968)) {
        if (plVar12[1] == 0) {
          plVar15 = (long *)0x0;
          lVar9 = 0;
          goto LAB_00453858;
        }
        plVar13 = (long *)FUN_005466fc();
        lVar9 = *plVar12;
        plVar15 = plVar13;
        if (plVar13 != (long *)0x0 && lVar9 != 0) goto LAB_00453858;
        plVar15 = (long *)0x0;
        lVar9 = 0;
        if (plVar13 == (long *)0x0) goto LAB_00453858;
        plVar15 = plVar13 + 1;
        do {
          lVar9 = *plVar15;
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar7) {
            *plVar15 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13,0);
          FUN_005466cc(plVar13);
        }
      }
    }
  }
  plVar15 = (long *)0x0;
  lVar9 = 0;
LAB_00453858:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar9,plVar15);
code_r0x00453584:
  plVar15 = plVar15 + 0xd;
  plVar12 = plVar14;
  plVar13 = plVar14;
  if (plVar15 == plVar14) goto LAB_004535f8;
  goto LAB_00453570;
}


// ===== 004538bc  FUN_004538bc =====

undefined8 FUN_004538bc(long param_1,undefined8 *param_2)

{
  size_t __n;
  size_t sVar1;
  undefined8 *__s1;
  undefined8 *__s2;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)(param_1 + 0x1948);
  lVar8 = *(long *)(param_1 + 0x1950);
  if (lVar7 == lVar8) {
LAB_00453988:
    if (lVar7 != lVar8) {
      uVar5 = FUN_00451cb8(param_1,lVar7);
      return uVar5;
    }
  }
  else {
    bVar2 = *(byte *)((long)param_2 + 0x17);
    __n = param_2[1];
    if (-1 < (char)bVar2) {
      __n = (ulong)bVar2;
    }
    do {
      bVar3 = *(byte *)(lVar7 + 0x2f);
      sVar1 = *(size_t *)(lVar7 + 0x20);
      if (-1 < (char)bVar3) {
        sVar1 = (ulong)bVar3;
      }
      if (sVar1 == __n) {
        __s1 = (undefined8 *)*(void **)(lVar7 + 0x18);
        if (-1 < (char)bVar3) {
          __s1 = (undefined8 *)(lVar7 + 0x18);
        }
        __s2 = (undefined8 *)*param_2;
        if (-1 < (char)bVar2) {
          __s2 = param_2;
        }
        if ((char)bVar3 < '\0') {
          if ((__n == 0) || (iVar4 = memcmp(__s1,__s2,__n), iVar4 == 0)) goto LAB_00453988;
        }
        else {
          if (bVar3 == 0) goto LAB_00453988;
          uVar6 = 0;
          while (*(char *)(lVar7 + uVar6 + 0x18) == *(char *)((long)__s2 + uVar6)) {
            uVar6 = uVar6 + 1;
            if (bVar3 == uVar6) goto LAB_00453988;
          }
        }
      }
      lVar7 = lVar7 + 0x38;
    } while (lVar7 != lVar8);
  }
  return 0;
}


// ===== 004539bc  FUN_004539bc =====

void FUN_004539bc(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(code **)(param_1 + 0x1a50) = FUN_0041c320;
  pcVar1 = *(code **)(*(long *)(param_1 + 0x1a58) + 8);
  *(undefined8 **)(param_1 + 0x1a58) = &DAT_001f1910;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x1a40));
  }
  uVar3 = *param_2;
  *(undefined8 *)(param_1 + 0x1a48) = param_2[1];
  *(undefined8 *)(param_1 + 0x1a40) = uVar3;
  *(undefined8 *)(param_1 + 0x1a50) = param_2[2];
  *(undefined8 *)(param_1 + 0x1a58) = param_2[3];
  param_2[2] = FUN_0041c320;
  param_2[3] = &DAT_001f1910;
  lVar2 = *(long *)(param_1 + 0x1a78);
  *(undefined8 **)(param_1 + 0x1a78) = &DAT_001f1910;
  *(code **)(param_1 + 0x1a70) = FUN_0041c32c;
  pcVar1 = *(code **)(lVar2 + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x1a60));
  }
  uVar3 = *param_3;
  *(undefined8 *)(param_1 + 0x1a68) = param_3[1];
  *(undefined8 *)(param_1 + 0x1a60) = uVar3;
  *(undefined8 *)(param_1 + 0x1a70) = param_3[2];
  *(undefined8 *)(param_1 + 0x1a78) = param_3[3];
  param_3[2] = FUN_0041c32c;
  param_3[3] = &DAT_001f1910;
  lVar2 = *(long *)(param_1 + 0x1a98);
  *(undefined8 **)(param_1 + 0x1a98) = &DAT_001f1910;
  *(code **)(param_1 + 0x1a90) = FUN_00410008;
  pcVar1 = *(code **)(lVar2 + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x1a80));
  }
  uVar3 = *param_4;
  *(undefined8 *)(param_1 + 0x1a88) = param_4[1];
  *(undefined8 *)(param_1 + 0x1a80) = uVar3;
  *(undefined8 *)(param_1 + 0x1a90) = param_4[2];
  *(undefined8 *)(param_1 + 0x1a98) = param_4[3];
  param_4[2] = FUN_00410008;
  param_4[3] = &DAT_001f1910;
  return;
}


// ===== 00453adc  FUN_00453adc =====

void FUN_00453adc(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  *(code **)(param_1 + 0x1988) = FUN_0041bfe0;
  pcVar1 = *(code **)(*(long *)(param_1 + 0x1990) + 8);
  *(undefined8 **)(param_1 + 0x1990) = &DAT_001f1910;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x1978));
  }
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x1980) = param_2[1];
  *(undefined8 *)(param_1 + 0x1978) = uVar2;
  *(undefined8 *)(param_1 + 0x1988) = param_2[2];
  *(undefined8 *)(param_1 + 0x1990) = param_2[3];
  param_2[2] = FUN_0041bfe0;
  param_2[3] = &DAT_001f1910;
  return;
}


// ===== 00453b5c  FUN_00453b5c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00453b5c(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    uVar13 = *(undefined8 *)(param_2 + 8);
    plVar8 = (long *)FUN_005466fc(*(long *)(param_2 + 0x10));
    if (plVar8 != (long *)0x0) {
      lVar12 = *(long *)(*(long *)(param_1 + 0x338) + 0x58);
      if (lVar12 != 0) {
        lVar14 = *(long *)(*(long *)(param_1 + 0x338) + 0x78);
        if (lVar14 == 0) {
          puVar11 = (undefined8 *)operator_new(0x20);
          puVar11[2] = uVar13;
          puVar11[3] = plVar8;
          *puVar11 = &PTR_FUN_00d1c678;
          puVar11[1] = param_1;
        }
        else {
          uVar9 = FUN_005ce36c();
          pcVar10 = (char *)operator_new(0x20);
          uVar7 = s_OnVideoInputDeviceFirstFrame_001b0898._20_8_;
          uVar6 = s_OnVideoInputDeviceFirstFrame_001b0898._0_8_;
          if ((pcVar10 < "nVideoInputDeviceFirstFrame") &&
             ("OnVideoInputDeviceFirstFrame" < pcVar10 + 0x1c)) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                       ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range")
            ;
          }
          uVar4 = CONCAT44(s_OnVideoInputDeviceFirstFrame_001b0898._12_4_,
                           s_OnVideoInputDeviceFirstFrame_001b0898._8_4_);
          uVar5 = CONCAT44(s_OnVideoInputDeviceFirstFrame_001b0898._16_4_,
                           s_OnVideoInputDeviceFirstFrame_001b0898._12_4_);
          pcVar10[0x1c] = '\0';
          *(undefined8 *)(pcVar10 + 8) = uVar4;
          *(undefined8 *)pcVar10 = uVar6;
          *(undefined8 *)(pcVar10 + 0x14) = uVar7;
          *(undefined8 *)(pcVar10 + 0xc) = uVar5;
          puVar11 = (undefined8 *)operator_new(0x60);
          puVar11[2] = uVar13;
          puVar11[3] = plVar8;
          uVar6 = _UNK_001f3f48;
          uVar13 = _DAT_001f3f40;
          puVar11[4] = pcVar10;
          *puVar11 = &PTR_FUN_00d1c650;
          puVar11[1] = param_1;
          puVar11[7] = lVar14;
          puVar11[6] = uVar6;
          puVar11[5] = uVar13;
          puVar11[0xb] = uVar9;
          puVar11[9] = FUN_0040e7ec;
          puVar11[10] = &DAT_001f4e70;
        }
        FUN_00512cf8(lVar12);
        return;
      }
      plVar1 = plVar8 + 1;
      do {
        lVar12 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 != 0) {
        return;
      }
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_005466cc(plVar8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00458330();
}


// ===== 00453cfc  FUN_00453cfc =====

void FUN_00453cfc(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *local_40;
  long local_38;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = &local_38;
  plVar3 = (long *)*param_2;
  plVar2 = param_2 + 1;
  local_38 = *plVar2;
  local_30 = param_2[2];
  if (local_30 != 0) {
    *(long **)(local_38 + 0x10) = local_40;
    *param_2 = (long)plVar2;
    *plVar2 = 0;
    param_2[2] = 0;
    local_40 = plVar3;
  }
  FUN_004b33e8(param_1 + 0x19a0,&local_40);
  FUN_0040ddcc(&local_40,local_38);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00453d90  FUN_00453d90 =====

void FUN_00453d90(long param_1)

{
  FUN_004b3904(param_1 + 0x19a0);
  return;
}


// ===== 00453d9c  FUN_00453d9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00453d9c(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *__src;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  void *pvVar10;
  undefined8 *__dest;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  void *local_1c0;
  ulong uStack_1b8;
  undefined2 local_1b0;
  char cStack_1a9;
  void *local_1a8;
  char acStack_1a0 [8];
  char local_198 [7];
  char local_191;
  char *local_190;
  undefined8 local_188;
  long lStack_180;
  void *local_178;
  char acStack_170 [5];
  char acStack_16b [3];
  char acStack_168 [5];
  char local_163 [2];
  char local_161;
  char *local_160;
  undefined8 local_158;
  long lStack_150;
  char *local_148;
  undefined8 local_140;
  long lStack_138;
  char *local_130;
  undefined8 local_128;
  long lStack_120;
  char *local_118;
  undefined8 local_110;
  long lStack_108;
  char *local_100;
  undefined8 local_f8;
  long lStack_f0;
  char *local_e8;
  undefined8 local_e0;
  long lStack_d8;
  char *local_d0;
  undefined8 local_c8;
  long lStack_c0;
  char *local_b8;
  undefined8 local_b0;
  long lStack_a8;
  char *local_a0;
  undefined8 local_98;
  long lStack_90;
  char *local_88;
  undefined8 local_80;
  long lStack_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  cStack_1a9 = '\x11';
  if (("loss-based-bwe-v2" < &local_1c0) || ((char *)((long)&local_1b0 + 1U) < "oss-based-bwe-v2"))
  {
    local_1b0 = 0x32;
    uStack_1b8 = s_loss_based_bwe_v2_001f62a0._8_8_;
    local_1c0 = (void *)s_loss_based_bwe_v2_001f62a0._0_8_;
    local_191 = '\x10';
    if (("robust-estimator" < &local_1a8) || (local_198 < "obust-estimator")) {
      local_198[0] = '\0';
      acStack_1a0 = (char  [8])s_robust_estimator_001f6418._8_8_;
      local_1a8 = (void *)s_robust_estimator_001f6418._0_8_;
      local_190 = (char *)operator_new(0x20);
      uVar6 = s_rate_control_link_capacity_fix_001f62b2._22_8_;
      uVar13 = s_rate_control_link_capacity_fix_001f62b2._0_8_;
      lVar12 = _UNK_001f4c98;
      uVar11 = _DAT_001f4c90;
      lStack_180 = _UNK_001f4c98;
      local_188 = _DAT_001f4c90;
      if (("rate-control-link-capacity-fix" < local_190) ||
         (local_190 + 0x1e < "ate-control-link-capacity-fix")) {
        uVar5 = CONCAT62(s_rate_control_link_capacity_fix_001f62b2._16_6_,
                         s_rate_control_link_capacity_fix_001f62b2._14_2_);
        *(ulong *)(local_190 + 8) =
             CONCAT26(s_rate_control_link_capacity_fix_001f62b2._14_2_,
                      s_rate_control_link_capacity_fix_001f62b2._8_6_);
        *(undefined8 *)local_190 = uVar13;
        *(undefined8 *)(local_190 + 0x16) = uVar6;
        *(undefined8 *)(local_190 + 0xe) = uVar5;
        local_190[0x1e] = '\0';
        local_161 = '\x15';
        if (("trendline-window-size" < &local_178) || (local_163 < "rendline-window-size")) {
          local_163[0] = '\0';
          acStack_170[0] = s_trendline_window_size_001f62d1[8];
          acStack_170[1] = s_trendline_window_size_001f62d1[9];
          acStack_170[2] = s_trendline_window_size_001f62d1[10];
          acStack_170[3] = s_trendline_window_size_001f62d1[0xb];
          acStack_170[4] = s_trendline_window_size_001f62d1[0xc];
          local_178 = (void *)s_trendline_window_size_001f62d1._0_8_;
          acStack_16b[0] = s_trendline_window_size_001f62d1[0xd];
          acStack_16b[1] = s_trendline_window_size_001f62d1[0xe];
          acStack_16b[2] = s_trendline_window_size_001f62d1[0xf];
          acStack_168[0] = s_trendline_window_size_001f62d1[0x10];
          acStack_168[1] = s_trendline_window_size_001f62d1[0x11];
          acStack_168[2] = s_trendline_window_size_001f62d1[0x12];
          acStack_168[3] = s_trendline_window_size_001f62d1[0x13];
          acStack_168[4] = s_trendline_window_size_001f62d1[0x14];
          local_160 = (char *)operator_new(0x20);
          uVar13 = s_trendline_window_duration_50_001f62e7._0_8_;
          lStack_150 = _UNK_001f3f48;
          local_158 = _DAT_001f3f40;
          if (("trendline-window-duration-50" < local_160) ||
             (local_160 + 0x1c < "rendline-window-duration-50")) {
            uVar6 = CONCAT44(s_trendline_window_duration_50_001f62e7._12_4_,
                             s_trendline_window_duration_50_001f62e7._8_4_);
            local_160[0x1c] = '\0';
            uVar7 = s_trendline_window_duration_50_001f62e7._20_8_;
            uVar5 = CONCAT44(s_trendline_window_duration_50_001f62e7._16_4_,
                             s_trendline_window_duration_50_001f62e7._12_4_);
            *(undefined8 *)(local_160 + 8) = uVar6;
            *(undefined8 *)local_160 = uVar13;
            *(undefined8 *)(local_160 + 0x14) = uVar7;
            *(undefined8 *)(local_160 + 0xc) = uVar5;
            local_148 = (char *)operator_new(0x20);
            uVar6 = s_trendline_window_duration_100_001f6304._0_8_;
            lVar8 = _UNK_001f3af8;
            uVar13 = _DAT_001f3af0;
            lStack_138 = _UNK_001f3af8;
            local_140 = _DAT_001f3af0;
            if (("trendline-window-duration-100" < local_148) ||
               (local_148 + 0x1d < "rendline-window-duration-100")) {
              uVar5 = CONCAT35(s_trendline_window_duration_100_001f6304._13_3_,
                               s_trendline_window_duration_100_001f6304._8_5_);
              local_148[0x1d] = '\0';
              uVar9 = s_trendline_window_duration_100_001f6304._21_8_;
              uVar7 = CONCAT53(s_trendline_window_duration_100_001f6304._16_5_,
                               s_trendline_window_duration_100_001f6304._13_3_);
              *(undefined8 *)(local_148 + 8) = uVar5;
              *(undefined8 *)local_148 = uVar6;
              *(undefined8 *)(local_148 + 0x15) = uVar9;
              *(undefined8 *)(local_148 + 0xd) = uVar7;
              local_130 = (char *)operator_new(0x20);
              uVar6 = s_trendline_window_duration_250_001f6322._0_8_;
              lStack_120 = lVar8;
              local_128 = uVar13;
              if (("trendline-window-duration-250" < local_130) ||
                 (local_130 + 0x1d < "rendline-window-duration-250")) {
                uVar5 = CONCAT35(s_trendline_window_duration_250_001f6322._13_3_,
                                 s_trendline_window_duration_250_001f6322._8_5_);
                local_130[0x1d] = '\0';
                uVar9 = s_trendline_window_duration_250_001f6322._21_8_;
                uVar7 = CONCAT53(s_trendline_window_duration_250_001f6322._16_5_,
                                 s_trendline_window_duration_250_001f6322._13_3_);
                *(undefined8 *)(local_130 + 8) = uVar5;
                *(undefined8 *)local_130 = uVar6;
                *(undefined8 *)(local_130 + 0x15) = uVar9;
                *(undefined8 *)(local_130 + 0xd) = uVar7;
                local_118 = (char *)operator_new(0x20);
                uVar6 = s_trendline_window_duration_500_001f6340._0_8_;
                lStack_108 = lVar8;
                local_110 = uVar13;
                if (("trendline-window-duration-500" < local_118) ||
                   (local_118 + 0x1d < "rendline-window-duration-500")) {
                  uVar13 = CONCAT35(s_trendline_window_duration_500_001f6340._13_3_,
                                    s_trendline_window_duration_500_001f6340._8_5_);
                  local_118[0x1d] = '\0';
                  uVar7 = s_trendline_window_duration_500_001f6340._21_8_;
                  uVar5 = CONCAT53(s_trendline_window_duration_500_001f6340._16_5_,
                                   s_trendline_window_duration_500_001f6340._13_3_);
                  *(undefined8 *)(local_118 + 8) = uVar13;
                  *(undefined8 *)local_118 = uVar6;
                  *(undefined8 *)(local_118 + 0x15) = uVar7;
                  *(undefined8 *)(local_118 + 0xd) = uVar5;
                  local_100 = (char *)operator_new(0x20);
                  uVar13 = s_trendline_window_duration_1000_001f635e._0_8_;
                  lStack_f0 = lVar12;
                  local_f8 = uVar11;
                  if (("trendline-window-duration-1000" < local_100) ||
                     (local_100 + 0x1e < "rendline-window-duration-1000")) {
                    uVar6 = CONCAT26(s_trendline_window_duration_1000_001f635e._14_2_,
                                     s_trendline_window_duration_1000_001f635e._8_6_);
                    local_100[0x1e] = '\0';
                    uVar7 = s_trendline_window_duration_1000_001f635e._22_8_;
                    uVar5 = CONCAT62(s_trendline_window_duration_1000_001f635e._16_6_,
                                     s_trendline_window_duration_1000_001f635e._14_2_);
                    *(undefined8 *)(local_100 + 8) = uVar6;
                    *(undefined8 *)local_100 = uVar13;
                    *(undefined8 *)(local_100 + 0x16) = uVar7;
                    *(undefined8 *)(local_100 + 0xe) = uVar5;
                    local_e8 = (char *)operator_new(0x20);
                    uVar13 = s_trendline_window_duration_2500_001f637d._0_8_;
                    lStack_d8 = lVar12;
                    local_e0 = uVar11;
                    if (("trendline-window-duration-2500" < local_e8) ||
                       (local_e8 + 0x1e < "rendline-window-duration-2500")) {
                      uVar6 = CONCAT26(s_trendline_window_duration_2500_001f637d._14_2_,
                                       s_trendline_window_duration_2500_001f637d._8_6_);
                      local_e8[0x1e] = '\0';
                      uVar7 = s_trendline_window_duration_2500_001f637d._22_8_;
                      uVar5 = CONCAT62(s_trendline_window_duration_2500_001f637d._16_6_,
                                       s_trendline_window_duration_2500_001f637d._14_2_);
                      *(undefined8 *)(local_e8 + 8) = uVar6;
                      *(undefined8 *)local_e8 = uVar13;
                      *(undefined8 *)(local_e8 + 0x16) = uVar7;
                      *(undefined8 *)(local_e8 + 0xe) = uVar5;
                      local_d0 = (char *)operator_new(0x20);
                      uVar13 = s_trendline_window_duration_3750_001f639c._0_8_;
                      lStack_c0 = lVar12;
                      local_c8 = uVar11;
                      if (("trendline-window-duration-3750" < local_d0) ||
                         (local_d0 + 0x1e < "rendline-window-duration-3750")) {
                        uVar6 = CONCAT26(s_trendline_window_duration_3750_001f639c._14_2_,
                                         s_trendline_window_duration_3750_001f639c._8_6_);
                        local_d0[0x1e] = '\0';
                        uVar7 = s_trendline_window_duration_3750_001f639c._22_8_;
                        uVar5 = CONCAT62(s_trendline_window_duration_3750_001f639c._16_6_,
                                         s_trendline_window_duration_3750_001f639c._14_2_);
                        *(undefined8 *)(local_d0 + 8) = uVar6;
                        *(undefined8 *)local_d0 = uVar13;
                        *(undefined8 *)(local_d0 + 0x16) = uVar7;
                        *(undefined8 *)(local_d0 + 0xe) = uVar5;
                        local_b8 = (char *)operator_new(0x20);
                        uVar13 = s_trendline_window_duration_5000_001f63bb._0_8_;
                        lStack_a8 = lVar12;
                        local_b0 = uVar11;
                        if (("trendline-window-duration-5000" < local_b8) ||
                           (local_b8 + 0x1e < "rendline-window-duration-5000")) {
                          uVar6 = CONCAT26(s_trendline_window_duration_5000_001f63bb._14_2_,
                                           s_trendline_window_duration_5000_001f63bb._8_6_);
                          local_b8[0x1e] = '\0';
                          uVar7 = s_trendline_window_duration_5000_001f63bb._22_8_;
                          uVar5 = CONCAT62(s_trendline_window_duration_5000_001f63bb._16_6_,
                                           s_trendline_window_duration_5000_001f63bb._14_2_);
                          *(undefined8 *)(local_b8 + 8) = uVar6;
                          *(undefined8 *)local_b8 = uVar13;
                          *(undefined8 *)(local_b8 + 0x16) = uVar7;
                          *(undefined8 *)(local_b8 + 0xe) = uVar5;
                          local_a0 = (char *)operator_new(0x20);
                          uVar13 = s_trendline_window_duration_6250_001f63da._0_8_;
                          lStack_90 = lVar12;
                          local_98 = uVar11;
                          if (("trendline-window-duration-6250" < local_a0) ||
                             (local_a0 + 0x1e < "rendline-window-duration-6250")) {
                            uVar6 = CONCAT26(s_trendline_window_duration_6250_001f63da._14_2_,
                                             s_trendline_window_duration_6250_001f63da._8_6_);
                            local_a0[0x1e] = '\0';
                            uVar7 = s_trendline_window_duration_6250_001f63da._22_8_;
                            uVar5 = CONCAT62(s_trendline_window_duration_6250_001f63da._16_6_,
                                             s_trendline_window_duration_6250_001f63da._14_2_);
                            *(undefined8 *)(local_a0 + 8) = uVar6;
                            *(undefined8 *)local_a0 = uVar13;
                            *(undefined8 *)(local_a0 + 0x16) = uVar7;
                            *(undefined8 *)(local_a0 + 0xe) = uVar5;
                            local_88 = (char *)operator_new(0x20);
                            uVar13 = s_trendline_window_duration_7500_001f63f9._0_8_;
                            lStack_78 = lVar12;
                            local_80 = uVar11;
                            if (("trendline-window-duration-7500" < local_88) ||
                               (local_88 + 0x1e < "rendline-window-duration-7500")) {
                              uVar11 = CONCAT26(s_trendline_window_duration_7500_001f63f9._14_2_,
                                                s_trendline_window_duration_7500_001f63f9._8_6_);
                              local_88[0x1e] = '\0';
                              uVar5 = s_trendline_window_duration_7500_001f63f9._22_8_;
                              uVar6 = CONCAT62(s_trendline_window_duration_7500_001f63f9._16_6_,
                                               s_trendline_window_duration_7500_001f63f9._14_2_);
                              *(undefined8 *)(local_88 + 8) = uVar11;
                              *(undefined8 *)local_88 = uVar13;
                              *(undefined8 *)(local_88 + 0x16) = uVar5;
                              *(undefined8 *)(local_88 + 0xe) = uVar6;
                              pvVar10 = operator_new(0x150);
                              lVar12 = 0;
                              *param_1 = pvVar10;
                              param_1[2] = (long)pvVar10 + 0x150;
                              do {
                                __dest = (undefined8 *)((long)pvVar10 + lVar12);
                                if ((&cStack_1a9)[lVar12] < '\0') {
                                  __src = *(undefined8 **)((long)&local_1c0 + lVar12);
                                  uVar3 = *(ulong *)((long)&uStack_1b8 + lVar12);
                                  if (uVar3 < 0x17) {
                                    *(char *)((long)pvVar10 + lVar12 + 0x17) = (char)uVar3;
                                  }
                                  else {
                                    if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
                                      abort();
                                    }
                                    uVar1 = (uVar3 | 0xf) + 1;
                                    __dest = (undefined8 *)operator_new(uVar1);
                                    puVar2 = (undefined8 *)((long)pvVar10 + lVar12);
                                    puVar2[1] = uVar3;
                                    puVar2[2] = uVar1 | 0x8000000000000000;
                                    *puVar2 = __dest;
                                  }
                                  if ((__dest <= __src) &&
                                     (__src < (undefined8 *)((long)__dest + uVar3 + 1))) break;
                                  memmove(__dest,__src,uVar3 + 1);
                                }
                                else {
                                  uVar13 = *(undefined8 *)((long)&local_1c0 + lVar12);
                                  uVar11 = *(undefined8 *)((long)&local_1b0 + lVar12);
                                  __dest[1] = *(undefined8 *)((long)&uStack_1b8 + lVar12);
                                  *__dest = uVar13;
                                  __dest[2] = uVar11;
                                }
                                lVar12 = lVar12 + 0x18;
                                if (lVar12 == 0x150) {
                                  param_1[1] = (long)pvVar10 + 0x150;
                                  if (lStack_78 < 0) {
                                    operator_delete(local_88);
                                  }
                                  if (lStack_90 < 0) {
                                    operator_delete(local_a0);
                                  }
                                  if (lStack_a8 < 0) {
                                    operator_delete(local_b8);
                                  }
                                  if (lStack_c0 < 0) {
                                    operator_delete(local_d0);
                                  }
                                  if (lStack_d8 < 0) {
                                    operator_delete(local_e8);
                                  }
                                  if (lStack_f0 < 0) {
                                    operator_delete(local_100);
                                  }
                                  if (lStack_108 < 0) {
                                    operator_delete(local_118);
                                  }
                                  if (lStack_120 < 0) {
                                    operator_delete(local_130);
                                  }
                                  if (lStack_138 < 0) {
                                    operator_delete(local_148);
                                  }
                                  if (lStack_150 < 0) {
                                    operator_delete(local_160);
                                  }
                                  if (local_161 < '\0') {
                                    operator_delete(local_178);
                                  }
                                  if (lStack_180 < 0) {
                                    operator_delete(local_190);
                                  }
                                  if (local_191 < '\0') {
                                    operator_delete(local_1a8);
                                  }
                                  if (cStack_1a9 < '\0') {
                                    operator_delete(local_1c0);
                                  }
                                  if (*(long *)(lVar4 + 0x28) == local_68) {
                                    return;
                                  }
                    /* WARNING: Subroutine does not return */
                                  __stack_chk_fail();
                                }
                              } while( true );
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
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004543ec  FUN_004543ec =====

void FUN_004543ec(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  *param_1 = &PTR_FUN_00d1c5b0;
  puVar2 = (undefined8 *)param_1[0x17];
  while (puVar2 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar2;
    if (*(char *)((long)puVar2 + 0x3f) < '\0') {
      operator_delete((void *)puVar2[5]);
      cVar1 = *(char *)((long)puVar2 + 0x27);
    }
    else {
      cVar1 = *(char *)((long)puVar2 + 0x27);
    }
    if (cVar1 < '\0') {
      operator_delete((void *)puVar2[2]);
    }
    operator_delete(puVar2);
    puVar2 = (undefined8 *)pvVar3;
  }
  pvVar3 = (void *)param_1[0x15];
  param_1[0x15] = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  FUN_005184d4((long)param_1 + 0x74);
  FUN_005184d4((long)param_1 + 0x44);
  FUN_00546ab0((long)param_1 + 0x1c);
  return;
}


// ===== 00454490  FUN_00454490 =====

void FUN_00454490(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  *param_1 = &PTR_FUN_00d1c5b0;
  puVar2 = (undefined8 *)param_1[0x17];
  while (puVar2 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar2;
    if (*(char *)((long)puVar2 + 0x3f) < '\0') {
      operator_delete((void *)puVar2[5]);
      cVar1 = *(char *)((long)puVar2 + 0x27);
    }
    else {
      cVar1 = *(char *)((long)puVar2 + 0x27);
    }
    if (cVar1 < '\0') {
      operator_delete((void *)puVar2[2]);
    }
    operator_delete(puVar2);
    puVar2 = (undefined8 *)pvVar3;
  }
  pvVar3 = (void *)param_1[0x15];
  param_1[0x15] = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  FUN_005184d4((long)param_1 + 0x74);
  FUN_005184d4((long)param_1 + 0x44);
  FUN_00546ab0((long)param_1 + 0x1c);
  operator_delete(param_1);
  return;
}


// ===== 0045453c  FUN_0045453c =====

void FUN_0045453c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 00454548  FUN_00454548 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00454548(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *local_178 [9];
  void *local_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108 [3];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [30];
  long local_70;
  
  puVar5 = PTR_PTR_00d51b50;
  puVar4 = PTR_DAT_00d51b48;
  lVar2 = tpidr_el0;
  ppuVar3 = local_178 + 1;
  local_70 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_DAT_00d51b48 + 0x40;
  local_178[0] = *(undefined **)(PTR_PTR_00d51b50 + 8);
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_00d51b50 + 0x10);
  lVar6 = *(long *)(local_178[0] + -0x18);
  FUN_00520e8c((long)local_178 + lVar6,ppuVar3);
  local_178[0] = puVar4 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar6) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar6) = 0xffffffff;
  local_108[0] = puVar1;
  FUN_0054a4c8(ppuVar3);
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_118 = 0;
  lStack_120 = 0;
  puVar1 = PTR_DAT_00d51b20 + 0x10;
  local_110 = 0x10;
  local_178[1] = puVar1;
  FUN_0045469c(local_178,param_2);
  FUN_0054d504(param_1,ppuVar3);
  local_178[0] = *(undefined **)puVar5;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(puVar5 + 0x18);
  local_178[1] = puVar1;
  if (lStack_120 < 0) {
    operator_delete(local_130);
  }
  FUN_0054a488(ppuVar3);
  FUN_0054b3d4(local_178,puVar5 + 8);
  thunk_FUN_00520cf4(local_108);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0045469c  FUN_0045469c =====

long * FUN_0045469c(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *__s;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  size_t sVar6;
  long lVar7;
  undefined8 uVar8;
  char local_70 [16];
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_0054b44c(local_70,param_1);
  if (local_70[0] != '\0') {
    FUN_00520ce8(auStack_60,(long)param_1 + *(long *)(*param_1 + -0x18));
    uVar4 = FUN_0053cfd4(auStack_60,PTR_DAT_00d51ba8);
    FUN_0053ceec(auStack_60);
    lVar7 = (long)param_1 + *(long *)(*param_1 + -0x18);
    uVar3 = *(uint *)(lVar7 + 0x90);
    uVar8 = *(undefined8 *)(lVar7 + 0x28);
    if (uVar3 == 0xffffffff) {
      FUN_00520ce8(auStack_60,lVar7);
      plVar5 = (long *)FUN_0053cfd4(auStack_60,PTR_DAT_00d51b28);
      uVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,0x20);
      FUN_0053ceec(auStack_60);
      uVar3 = uVar3 & 0xff;
      *(uint *)(lVar7 + 0x90) = uVar3;
    }
    uVar1 = *param_2;
    __s = (char *)param_2[1];
    sVar6 = strlen(__s);
    lVar7 = FUN_00534a14(uVar4,uVar8,lVar7,uVar3,uVar1,__s,__s + sVar6);
    if (lVar7 == 0) {
      lVar7 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_00520d98(lVar7,*(uint *)(lVar7 + 0x20) | 1);
    }
  }
  FUN_0054b498(local_70);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004547f0  FUN_004547f0 =====

void FUN_004547f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 004547fc  FUN_004547fc =====

void FUN_004547fc(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auStack_b0 [136];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  FUN_00623234(auStack_b0,param_2,param_3,param_1);
  FUN_00623864(auStack_b0);
  uVar1 = param_4[1];
  puVar3 = (undefined8 *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
    puVar3 = param_4;
  }
  if ((puVar3 == (undefined8 *)0x0) && (uVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
               "__len == 0 || __s != nullptr",
               "string_view::string_view(_CharT *, size_t): received nullptr");
  }
  FUN_00547cac();
  FUN_006234e4(auStack_b0);
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004548a8  FUN_004548a8 =====

void FUN_004548a8(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if (param_1[1] != 0) {
    plVar3 = (long *)FUN_005466fc();
    if ((plVar3 == (long *)0x0) || (plVar4 = (long *)*param_1, plVar4 == (long *)0x0)) {
      if (plVar3 == (long *)0x0) goto LAB_0045491c;
    }
    else {
      (**(code **)(*plVar4 + 0x18))(plVar4,param_1[0xc]);
    }
    plVar4 = plVar3 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_005466cc(plVar3);
    }
  }
LAB_0045491c:
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[2]);
    lVar5 = param_1[1];
  }
  else {
    lVar5 = param_1[1];
  }
  if (lVar5 != 0) {
    FUN_005466cc();
    return;
  }
  return;
}


// ===== 00454984  FUN_00454984 =====

void FUN_00454984(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  void *pvVar8;
  
  lVar4 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar4 * -0x1084210842108421 + 1;
  if (0x108421084210842 < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar5 = param_1[2] - *param_1 >> 3;
  uVar6 = lVar5 * -0x2108421084210842;
  if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
    uVar6 = uVar1;
  }
  if (0x84210842108420 < (ulong)(lVar5 * -0x1084210842108421)) {
    uVar6 = 0x108421084210842;
  }
  if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  if (0x108421084210842 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  pvVar3 = operator_new(uVar6 * 0xf8);
  pvVar2 = (void *)((long)pvVar3 + uVar6 * 0xf8);
  pvVar3 = (void *)((long)pvVar3 + lVar4 * 8);
  FUN_004243d4(pvVar3,param_2);
  pvVar8 = (void *)*param_1;
  pvVar7 = (void *)param_1[1];
  lVar4 = (long)pvVar3 + 0xf8;
  if (pvVar7 == pvVar8) {
    *param_1 = (long)pvVar3;
    param_1[1] = lVar4;
    param_1[2] = (long)pvVar2;
  }
  else {
    do {
      pvVar3 = (void *)((long)pvVar3 + -0xf8);
      pvVar7 = (void *)((long)pvVar7 + -0xf8);
      FUN_004245ac(pvVar3,pvVar7);
    } while (pvVar7 != pvVar8);
    pvVar7 = (void *)*param_1;
    pvVar8 = (void *)param_1[1];
    *param_1 = (long)pvVar3;
    param_1[1] = lVar4;
    param_1[2] = (long)pvVar2;
    while (pvVar8 != pvVar7) {
      pvVar8 = (void *)((long)pvVar8 + -0xf8);
      FUN_00411fac(pvVar8);
    }
  }
  if (pvVar7 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar7);
  return;
}


// ===== 00454b04  FUN_00454b04 =====

undefined8 * FUN_00454b04(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1 != param_2) {
    uVar5 = param_2[1];
    uVar4 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    lVar2 = param_1[1];
    param_1[1] = uVar5;
    *param_1 = uVar4;
    if (lVar2 != 0) {
      FUN_005466cc();
    }
    if (*(char *)((long)param_1 + 0x27) < '\0') {
      operator_delete((void *)param_1[2]);
    }
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    param_1[4] = param_2[4];
    param_1[3] = uVar5;
    param_1[2] = uVar4;
    *(undefined1 *)((long)param_2 + 0x27) = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    if (*(char *)((long)param_1 + 0x3f) < '\0') {
      operator_delete((void *)param_1[5]);
    }
    uVar5 = param_2[6];
    uVar4 = param_2[5];
    param_1[7] = param_2[7];
    param_1[6] = uVar5;
    param_1[5] = uVar4;
    *(undefined1 *)((long)param_2 + 0x3f) = 0;
    *(undefined1 *)(param_2 + 5) = 0;
    param_1[8] = param_2[8];
    uVar4 = param_2[0xc];
    param_2[0xc] = 0;
    uVar6 = param_2[10];
    uVar5 = param_2[9];
    uVar1 = *(undefined1 *)(param_2 + 0xb);
    plVar3 = (long *)param_1[0xc];
    param_1[0xc] = uVar4;
    param_1[10] = uVar6;
    param_1[9] = uVar5;
    *(undefined1 *)(param_1 + 0xb) = uVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  return param_1;
}


// ===== 00454be4  FUN_00454be4 =====

void FUN_00454be4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  undefined1 uVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  void *pvVar10;
  undefined8 uVar11;
  
  lVar6 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar6 * 0x4ec4ec4ec4ec4ec5 + 1;
  if (0x276276276276276 < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = param_1[2] - *param_1 >> 3;
  uVar8 = lVar7 * -0x6276276276276276;
  if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
    uVar8 = uVar1;
  }
  if (0x13b13b13b13b13a < (ulong)(lVar7 * 0x4ec4ec4ec4ec4ec5)) {
    uVar8 = 0x276276276276276;
  }
  if (uVar8 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if (0x276276276276276 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    pvVar5 = operator_new(uVar8 * 0x68);
  }
  pvVar10 = (void *)((long)pvVar5 + lVar6 * 8);
  pvVar5 = (void *)((long)pvVar5 + uVar8 * 0x68);
  FUN_00454dac(pvVar10,param_2,param_3);
  pvVar2 = (void *)*param_1;
  pvVar3 = (void *)param_1[1];
  if (pvVar3 == pvVar2) {
    *param_1 = (long)pvVar10;
    param_1[1] = (long)pvVar10 + 0x68;
    param_1[2] = (long)pvVar5;
  }
  else {
    lVar6 = 0;
    do {
      lVar7 = lVar6 + -0x68;
      uVar9 = *(undefined8 *)((long)pvVar3 + lVar6 + -0x68);
      *(undefined8 *)((long)pvVar10 + lVar6 + -0x60) = *(undefined8 *)((long)pvVar3 + lVar6 + -0x60)
      ;
      *(undefined8 *)((long)pvVar10 + lVar6 + -0x68) = uVar9;
      *(undefined8 *)((long)pvVar3 + lVar6 + -0x68) = 0;
      *(undefined8 *)((long)pvVar3 + lVar6 + -0x60) = 0;
      uVar11 = *(undefined8 *)((long)pvVar3 + lVar6 + -0x50);
      uVar9 = *(undefined8 *)((long)pvVar3 + lVar6 + -0x58);
      *(undefined8 *)((long)pvVar10 + lVar6 + -0x48) = *(undefined8 *)((long)pvVar3 + lVar6 + -0x48)
      ;
      *(undefined8 *)((long)pvVar10 + lVar6 + -0x50) = uVar11;
      *(undefined8 *)((long)pvVar10 + lVar6 + -0x58) = uVar9;
      *(undefined8 *)((long)pvVar3 + lVar6 + -0x50) = 0;
      *(undefined8 *)((long)pvVar3 + lVar6 + -0x48) = 0;
      uVar11 = *(undefined8 *)((long)pvVar3 + lVar6 + -0x38);
      uVar9 = *(undefined8 *)((long)pvVar3 + lVar6 + -0x40);
      *(undefined8 *)((long)pvVar3 + lVar6 + -0x58) = 0;
      *(undefined8 *)((long)pvVar10 + lVar6 + -0x30) = *(undefined8 *)((long)pvVar3 + lVar6 + -0x30)
      ;
      *(undefined8 *)((long)pvVar10 + lVar6 + -0x38) = uVar11;
      *(undefined8 *)((long)pvVar10 + lVar6 + -0x40) = uVar9;
      *(undefined8 *)((long)pvVar3 + lVar6 + -0x38) = 0;
      *(undefined8 *)((long)pvVar3 + lVar6 + -0x30) = 0;
      *(undefined8 *)((long)pvVar3 + lVar6 + -0x40) = 0;
      *(undefined8 *)((long)pvVar10 + lVar6 + -0x28) = *(undefined8 *)((long)pvVar3 + lVar6 + -0x28)
      ;
      uVar11 = *(undefined8 *)((long)pvVar3 + lVar6 + -0x20);
      uVar4 = *(undefined1 *)((long)pvVar3 + lVar6 + -0x10);
      uVar9 = *(undefined8 *)((long)pvVar3 + lVar6 + -8);
      *(undefined8 *)((long)pvVar3 + lVar6 + -8) = 0;
      *(undefined8 *)((long)pvVar10 + lVar6 + -0x18) = *(undefined8 *)((long)pvVar3 + lVar6 + -0x18)
      ;
      *(undefined8 *)((long)pvVar10 + lVar6 + -0x20) = uVar11;
      *(undefined1 *)((long)pvVar10 + lVar6 + -0x10) = uVar4;
      *(undefined8 *)((long)pvVar10 + lVar6 + -8) = uVar9;
      lVar6 = lVar7;
    } while ((void *)((long)pvVar3 + lVar7) != pvVar2);
    param_1[2] = (long)pvVar5;
    pvVar3 = (void *)*param_1;
    pvVar5 = (void *)param_1[1];
    *param_1 = (long)pvVar10 + lVar7;
    param_1[1] = (long)pvVar10 + 0x68;
    while (pvVar5 != pvVar3) {
      pvVar5 = (void *)((long)pvVar5 + -0x68);
      FUN_004548a8(pvVar5);
    }
  }
  if (pvVar3 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar3);
  return;
}


// ===== 00454dac  FUN_00454dac =====

long FUN_00454dac(long param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  void *local_80 [2];
  char local_69;
  void *local_68;
  char local_51;
  undefined4 local_4c;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  uVar2 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_00411394(local_80,param_3);
  local_4c = *(undefined4 *)(param_3 + 0x34);
  FUN_00454ea4(param_1,uVar2,lVar3,local_80);
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_69 < '\0') {
    operator_delete(local_80[0]);
  }
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00454ea4  FUN_00454ea4 =====

void FUN_00454ea4(undefined8 *param_1,undefined8 param_2,long *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined1 auStack_88 [64];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_3 != (long *)0x0) {
    plVar6 = param_3 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_00411394(param_1 + 2,param_4);
  *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)(param_4 + 0x34);
  uVar5 = FUN_005ce36c();
  param_1[9] = uVar5;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  plVar6 = (long *)operator_new(0x18);
  puVar4 = PTR_DAT_00d51bb0;
  lVar7 = param_1[1];
  plVar6[1] = 0;
  plVar6[2] = 0;
  param_1[0xc] = plVar6;
  *plVar6 = (long)(puVar4 + 0x10);
  if (lVar7 != 0) {
    plVar6 = (long *)FUN_005466fc();
    if ((plVar6 == (long *)0x0) || (plVar8 = (long *)*param_1, plVar8 == (long *)0x0)) {
      if (plVar6 == (long *)0x0) goto LAB_00454fb4;
    }
    else {
      uVar5 = param_1[0xc];
      FUN_007bfa40(auStack_88);
      (**(code **)(*plVar8 + 0x10))(plVar8,uVar5,auStack_88);
      FUN_007bfb14(auStack_88);
    }
    plVar8 = plVar6 + 1;
    do {
      lVar7 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
LAB_00454fb4:
  if (param_3 != (long *)0x0) {
    plVar6 = param_3 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*param_3 + 0x10))(param_3);
      FUN_005466cc(param_3);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00455014  FUN_00455014 =====

long * FUN_00455014(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  ulong unaff_x27;
  undefined2 uVar17;
  undefined8 uVar18;
  float fVar19;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar6 = param_2[1];
  puVar7 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar6 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar7 = param_2;
  }
  if (puVar7 == (undefined8 *)0x0 && uVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
               "__len == 0 || __s != nullptr",
               "string_view::string_view(_CharT *, size_t): received nullptr");
  }
  uVar6 = FUN_00427058(auStack_70);
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uVar18 = NEON_cnt(uVar16,1);
    uVar17 = NEON_uaddlv(uVar18,1);
    uVar11 = CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar17) & 0xffffffff;
    if (uVar11 < 2) {
      unaff_x27 = uVar16 - 1 & uVar6;
    }
    else {
      unaff_x27 = uVar6;
      if (uVar16 <= uVar6) {
        uVar8 = 0;
        if (uVar16 != 0) {
          uVar8 = uVar6 / uVar16;
        }
        unaff_x27 = uVar6 - uVar8 * uVar16;
      }
    }
    puVar7 = *(undefined8 **)(*param_1 + unaff_x27 * 8);
    if ((puVar7 != (undefined8 *)0x0) && (plVar15 = (long *)*puVar7, plVar15 != (long *)0x0)) {
      puVar7 = (undefined8 *)*param_2;
      __n = param_2[1];
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        puVar7 = param_2;
        __n = (ulong)*(byte *)((long)param_2 + 0x17);
      }
      do {
        uVar8 = plVar15[1];
        if (uVar8 != uVar6) {
          if (uVar11 < 2) {
            uVar8 = uVar8 & uVar16 - 1;
          }
          else if (uVar16 <= uVar8) {
            uVar3 = 0;
            if (uVar16 != 0) {
              uVar3 = uVar8 / uVar16;
            }
            uVar8 = uVar8 - uVar3 * uVar16;
          }
          if (uVar8 != unaff_x27) break;
        }
        bVar2 = *(byte *)((long)plVar15 + 0x27);
        sVar1 = plVar15[3];
        if (-1 < (char)bVar2) {
          sVar1 = (ulong)bVar2;
        }
        if (sVar1 == __n) {
          plVar9 = plVar15 + 2;
          plVar12 = (long *)*plVar9;
          if ((char)bVar2 < '\0') {
            plVar9 = plVar12;
            if (__n != 0) {
              uVar5 = memcmp(plVar12,puVar7,__n);
              plVar9 = (long *)(ulong)uVar5;
              if (uVar5 != 0) goto LAB_004550f8;
            }
          }
          else if (bVar2 != 0) {
            uVar8 = 0;
            while (*(char *)((long)plVar15 + uVar8 + 0x10) == *(char *)((long)puVar7 + uVar8)) {
              uVar8 = uVar8 + 1;
              if (bVar2 == uVar8) goto LAB_004551b8;
            }
            goto LAB_004550f8;
          }
LAB_004551b8:
          uVar18 = 0;
          goto LAB_004553a4;
        }
LAB_004550f8:
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
  plVar15 = (long *)operator_new(0x40);
  plVar9 = (long *)*param_4;
  lVar14 = *plVar9;
  lVar10 = plVar9[2];
  plVar15[3] = plVar9[1];
  plVar15[2] = lVar14;
  plVar15[4] = lVar10;
  *plVar9 = 0;
  plVar9[1] = 0;
  plVar9[2] = 0;
  lVar10 = param_1[3];
  plVar15[5] = 0;
  plVar15[6] = 0;
  fVar19 = *(float *)(param_1 + 4);
  plVar15[7] = 0;
  *plVar15 = 0;
  plVar15[1] = uVar6;
  plVar9 = plVar15;
  if ((uVar16 == 0) || (fVar19 * (float)uVar16 < (float)(lVar10 + 1))) {
    if (uVar16 < 3) {
      uVar11 = 1;
    }
    else {
      uVar11 = (ulong)((uVar16 & uVar16 - 1) != 0);
    }
    plVar12 = (long *)(uVar11 | uVar16 << 1);
    plVar13 = (long *)(long)((float)(lVar10 + 1) / fVar19);
    if (plVar12 <= plVar13) {
      plVar12 = plVar13;
    }
    if ((long)plVar12 - 1U == 0) {
      plVar12 = (long *)0x2;
    }
    else if (((ulong)plVar12 & (long)plVar12 - 1U) != 0) {
      plVar9 = (long *)FUN_005204f8(plVar12);
      plVar12 = plVar9;
    }
    plVar13 = (long *)param_1[1];
    if (plVar13 < plVar12) {
LAB_00455280:
      plVar9 = (long *)FUN_00455404(param_1,plVar12);
    }
    else if (plVar12 < plVar13) {
      plVar9 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (plVar13 < (long *)0x3) {
LAB_004552e8:
        plVar9 = (long *)FUN_005204f8();
      }
      else {
        uVar18 = NEON_cnt(plVar13,1);
        uVar17 = NEON_uaddlv(uVar18,1);
        if (1 < (CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar17) & 0xffffffff)) goto LAB_004552e8;
        if ((long *)0x1 < plVar9) {
          plVar9 = (long *)(1L << (-LZCOUNT((long)plVar9 + -1) & 0x3fU));
        }
      }
      if (plVar12 <= plVar9) {
        plVar12 = plVar9;
      }
      if (plVar12 < plVar13) goto LAB_00455280;
    }
    uVar16 = param_1[1];
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_x27 = uVar16 - 1 & uVar6;
    }
    else {
      unaff_x27 = uVar6;
      if (uVar16 <= uVar6) {
        uVar11 = 0;
        if (uVar16 != 0) {
          uVar11 = uVar6 / uVar16;
        }
        unaff_x27 = uVar6 - uVar11 * uVar16;
      }
    }
  }
  lVar10 = *param_1;
  plVar12 = *(long **)(lVar10 + unaff_x27 * 8);
  if (plVar12 == (long *)0x0) {
    plVar12 = param_1 + 2;
    lVar14 = *plVar12;
    *plVar12 = (long)plVar15;
    *plVar15 = lVar14;
    *(long **)(lVar10 + unaff_x27 * 8) = plVar12;
    if (*plVar15 == 0) goto LAB_00455394;
    uVar6 = *(ulong *)(*plVar15 + 8);
    if ((uVar16 & uVar16 - 1) == 0) {
      uVar6 = uVar6 & uVar16 - 1;
    }
    else if (uVar16 <= uVar6) {
      uVar11 = 0;
      if (uVar16 != 0) {
        uVar11 = uVar6 / uVar16;
      }
      uVar6 = uVar6 - uVar11 * uVar16;
    }
    plVar12 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar15 = *plVar12;
  }
  *plVar12 = (long)plVar15;
LAB_00455394:
  uVar18 = 1;
  param_1[3] = param_1[3] + 1;
LAB_004553a4:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar9,uVar18);
  }
  return plVar15;
}


// ===== 00455404  FUN_00455404 =====

void FUN_00455404(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar2 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    pvVar2 = operator_new(param_2 << 3);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)pvVar2;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar10 = NEON_cnt(param_2,1);
      uVar9 = NEON_uaddlv(uVar10,1);
      uVar6 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
      if (uVar6 < 2) {
        uVar4 = uVar4 & param_2 - 1;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar5;
      if (plVar7 != (long *)0x0) {
        do {
          uVar8 = plVar7[1];
          if (uVar6 < 2) {
            uVar8 = uVar8 & param_2 - 1;
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
              *(long **)(*param_1 + uVar8 * 8) = plVar5;
              uVar4 = uVar8;
            }
            else {
              *plVar5 = *plVar7;
              *plVar7 = **(long **)(*param_1 + uVar8 * 8);
              **(undefined8 **)(*param_1 + uVar8 * 8) = plVar7;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar7 = (long *)*plVar5;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return;
}


// ===== 00455560  FUN_00455560 =====

long * FUN_00455560(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *unaff_x27;
  undefined2 uVar16;
  undefined8 uVar17;
  float fVar18;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar10 = param_2[1];
  puVar6 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar10 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar6 = param_2;
  }
  if (puVar6 == (undefined8 *)0x0 && uVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
               "__len == 0 || __s != nullptr",
               "string_view::string_view(_CharT *, size_t): received nullptr");
  }
  plVar5 = (long *)FUN_00427058(auStack_70);
  plVar15 = (long *)param_1[1];
  if (plVar15 != (long *)0x0) {
    uVar17 = NEON_cnt(plVar15,1);
    uVar16 = NEON_uaddlv(uVar17,1);
    uVar10 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
    if (uVar10 < 2) {
      unaff_x27 = (long *)((long)plVar15 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x27 = plVar5;
      if (plVar15 <= plVar5) {
        uVar9 = 0;
        if (plVar15 != (long *)0x0) {
          uVar9 = (ulong)plVar5 / (ulong)plVar15;
        }
        unaff_x27 = (long *)((long)plVar5 - uVar9 * (long)plVar15);
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + (long)unaff_x27 * 8);
    if ((puVar6 != (undefined8 *)0x0) && (plVar14 = (long *)*puVar6, plVar14 != (long *)0x0)) {
      puVar6 = (undefined8 *)*param_2;
      __n = param_2[1];
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        puVar6 = param_2;
        __n = (ulong)*(byte *)((long)param_2 + 0x17);
      }
      do {
        plVar7 = (long *)plVar14[1];
        if (plVar7 != plVar5) {
          if (uVar10 < 2) {
            plVar7 = (long *)((ulong)plVar7 & (long)plVar15 - 1U);
          }
          else if (plVar15 <= plVar7) {
            uVar9 = 0;
            if (plVar15 != (long *)0x0) {
              uVar9 = (ulong)plVar7 / (ulong)plVar15;
            }
            plVar7 = (long *)((long)plVar7 - uVar9 * (long)plVar15);
          }
          if (plVar7 != unaff_x27) break;
        }
        bVar2 = *(byte *)((long)plVar14 + 0x27);
        sVar1 = plVar14[3];
        if (-1 < (char)bVar2) {
          sVar1 = (ulong)bVar2;
        }
        if (sVar1 == __n) {
          plVar7 = plVar14 + 2;
          plVar11 = (long *)*plVar7;
          if ((char)bVar2 < '\0') {
            plVar7 = plVar11;
            if (__n != 0) {
              uVar4 = memcmp(plVar11,puVar6,__n);
              plVar7 = (long *)(ulong)uVar4;
              if (uVar4 != 0) goto LAB_00455644;
            }
          }
          else if (bVar2 != 0) {
            uVar9 = 0;
            while (*(char *)((long)plVar14 + uVar9 + 0x10) == *(char *)((long)puVar6 + uVar9)) {
              uVar9 = uVar9 + 1;
              if (bVar2 == uVar9) goto LAB_00455704;
            }
            goto LAB_00455644;
          }
LAB_00455704:
          uVar17 = 0;
          goto LAB_00455954;
        }
LAB_00455644:
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
  plVar14 = (long *)operator_new(0x40);
  plVar11 = (long *)*param_4;
  plVar7 = plVar14 + 2;
  if (*(char *)((long)plVar11 + 0x17) < '\0') {
    plVar12 = (long *)*plVar11;
    uVar10 = plVar11[1];
    if (uVar10 < 0x17) {
      *(char *)((long)plVar14 + 0x27) = (char)uVar10;
    }
    else {
      if (0x7fffffffffffffef < uVar10) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar9 = (uVar10 | 0xf) + 1;
      plVar7 = (long *)operator_new(uVar9);
      plVar14[2] = (long)plVar7;
      plVar14[3] = uVar10;
      plVar14[4] = uVar9 | 0x8000000000000000;
    }
    if ((plVar7 <= plVar12) && (plVar12 < (long *)((long)plVar7 + uVar10 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    plVar7 = (long *)memmove(plVar7,plVar12,uVar10 + 1);
  }
  else {
    lVar13 = plVar11[1];
    lVar8 = *plVar11;
    plVar14[4] = plVar11[2];
    plVar14[3] = lVar13;
    *plVar7 = lVar8;
  }
  lVar8 = param_1[3];
  plVar14[5] = 0;
  plVar14[6] = 0;
  fVar18 = *(float *)(param_1 + 4);
  plVar14[7] = 0;
  *plVar14 = 0;
  plVar14[1] = (long)plVar5;
  if ((plVar15 == (long *)0x0) || (fVar18 * (float)plVar15 < (float)(lVar8 + 1))) {
    if (plVar15 < (long *)0x3) {
      uVar10 = 1;
    }
    else {
      uVar10 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
    }
    plVar11 = (long *)(uVar10 | (long)plVar15 << 1);
    plVar12 = (long *)(long)((float)(lVar8 + 1) / fVar18);
    if (plVar11 <= plVar12) {
      plVar11 = plVar12;
    }
    if ((long)plVar11 - 1U == 0) {
      plVar11 = (long *)0x2;
    }
    else if (((ulong)plVar11 & (long)plVar11 - 1U) != 0) {
      plVar7 = (long *)FUN_005204f8(plVar11);
      plVar15 = (long *)param_1[1];
      plVar11 = plVar7;
    }
    if (plVar15 < plVar11) {
LAB_00455830:
      plVar7 = (long *)FUN_00455404(param_1,plVar11);
    }
    else if (plVar11 < plVar15) {
      plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (plVar15 < (long *)0x3) {
LAB_00455898:
        plVar7 = (long *)FUN_005204f8();
      }
      else {
        uVar17 = NEON_cnt(plVar15,1);
        uVar16 = NEON_uaddlv(uVar17,1);
        if (1 < (CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff)) goto LAB_00455898;
        if ((long *)0x1 < plVar7) {
          plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
        }
      }
      if (plVar11 <= plVar7) {
        plVar11 = plVar7;
      }
      if (plVar11 < plVar15) goto LAB_00455830;
    }
    plVar15 = (long *)param_1[1];
    if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar15 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x27 = plVar5;
      if (plVar15 <= plVar5) {
        uVar10 = 0;
        if (plVar15 != (long *)0x0) {
          uVar10 = (ulong)plVar5 / (ulong)plVar15;
        }
        unaff_x27 = (long *)((long)plVar5 - uVar10 * (long)plVar15);
      }
    }
  }
  lVar8 = *param_1;
  plVar5 = *(long **)(lVar8 + (long)unaff_x27 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    lVar13 = *plVar5;
    *plVar5 = (long)plVar14;
    *plVar14 = lVar13;
    *(long **)(lVar8 + (long)unaff_x27 * 8) = plVar5;
    if (*plVar14 == 0) goto LAB_00455944;
    plVar5 = *(long **)(*plVar14 + 8);
    if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
      plVar5 = (long *)((ulong)plVar5 & (long)plVar15 - 1U);
    }
    else if (plVar15 <= plVar5) {
      uVar10 = 0;
      if (plVar15 != (long *)0x0) {
        uVar10 = (ulong)plVar5 / (ulong)plVar15;
      }
      plVar5 = (long *)((long)plVar5 - uVar10 * (long)plVar15);
    }
    plVar5 = (long *)(*param_1 + (long)plVar5 * 8);
  }
  else {
    *plVar14 = *plVar5;
  }
  *plVar5 = (long)plVar14;
LAB_00455944:
  uVar17 = 1;
  param_1[3] = param_1[3] + 1;
LAB_00455954:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar7,uVar17);
  }
  return plVar14;
}


// ===== 004559e0  FUN_004559e0 =====

long * FUN_004559e0(long *param_1,undefined8 *param_2)

{
  long *__s2;
  size_t sVar1;
  void *__s1;
  size_t __n;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar6 = FUN_00427058(auStack_70,*param_2,param_2[1]);
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar13 = NEON_cnt(uVar9,1);
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar10 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    if (uVar10 < 2) {
      uVar11 = uVar9 - 1 & uVar6;
    }
    else {
      uVar11 = uVar6;
      if (uVar9 <= uVar6) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar6 / uVar9;
        }
        uVar11 = uVar6 - uVar11 * uVar9;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar11 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      if (plVar7 != (long *)0x0) {
        __s1 = (void *)*param_2;
        __n = param_2[1];
        do {
          uVar8 = plVar7[1];
          if (uVar6 == uVar8) {
            bVar2 = *(byte *)((long)plVar7 + 0x27);
            __s2 = (long *)plVar7[2];
            if (-1 < (char)bVar2) {
              __s2 = plVar7 + 2;
            }
            sVar1 = plVar7[3];
            if (-1 < (char)bVar2) {
              sVar1 = (ulong)bVar2;
            }
            if (__s2 == (long *)0x0 && sVar1 != 0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/string_view",
                         0x131,"__len == 0 || __s != nullptr",
                         "string_view::string_view(_CharT *, size_t): received nullptr");
            }
            if ((__n == sVar1) && ((__n == 0 || (iVar5 = memcmp(__s1,__s2,__n), iVar5 == 0))))
            break;
          }
          else {
            if (uVar10 < 2) {
              uVar8 = uVar8 & uVar9 - 1;
            }
            else if (uVar9 <= uVar8) {
              uVar3 = 0;
              if (uVar9 != 0) {
                uVar3 = uVar8 / uVar9;
              }
              uVar8 = uVar8 - uVar3 * uVar9;
            }
            if (uVar8 != uVar11) goto LAB_00455b10;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      goto LAB_00455b14;
    }
  }
LAB_00455b10:
  plVar7 = (long *)0x0;
LAB_00455b14:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return plVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00455b74  FUN_00455b74 =====

void FUN_00455b74(undefined8 *param_1)

{
  FUN_00455b7c(*param_1);
  return;
}


// ===== 00455b7c  FUN_00455b7c =====

/* WARNING: Removing unreachable block (ram,0x00455c04) */
/* WARNING: Removing unreachable block (ram,0x00455c18) */

void FUN_00455b7c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  void *local_50;
  void *pvStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pcVar3 = (code *)*param_1;
  plVar1 = (long *)(param_1[2] + (param_1[1] >> 1));
  if ((param_1[1] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  pvStack_48 = (void *)param_2[1];
  local_50 = (void *)*param_2;
  *param_2 = 0;
  local_40 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  (*pcVar3)(plVar1,&local_50);
  if (local_50 != (void *)0x0) {
    for (; pvStack_48 != local_50; pvStack_48 = (void *)((long)pvStack_48 + -0x38)) {
    }
    pvStack_48 = local_50;
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00455c58  FUN_00455c58 =====

void FUN_00455c58(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar3 = *param_1;
  uVar2 = param_1[2];
  puVar1[1] = param_1[1];
  *puVar1 = uVar3;
  puVar1[2] = uVar2;
  return;
}


// ===== 00455c8c  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00455c90  FUN_00455c90 =====

void FUN_00455c90(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_00455c90(param_1,*param_2);
    FUN_00455c90(param_1,param_2[1]);
    plVar5 = (long *)param_2[6];
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN_005466cc(plVar5);
      }
    }
    operator_delete(param_2);
    return;
  }
  return;
}


// ===== 00455d08  FUN_00455d08 =====

void FUN_00455d08(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  long *plVar7;
  
  puVar4 = (undefined8 *)param_1[2];
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar5 = (void *)*puVar4;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        FUN_005466cc(plVar7);
      }
    }
    if (*(char *)((long)puVar4 + 0x27) < '\0') {
      operator_delete((void *)puVar4[2]);
    }
    operator_delete(puVar4);
    puVar4 = (undefined8 *)pvVar5;
  }
  pvVar5 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar5 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar5);
  return;
}


// ===== 00455db4  FUN_00455db4 =====

void FUN_00455db4(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  
  puVar1 = (undefined8 *)param_1[2];
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)puVar1[5];
    puVar1[5] = 0;
    pvVar3 = (void *)*puVar1;
    if (pvVar2 != (void *)0x0) {
      FUN_004bbfa4(pvVar2);
      operator_delete(pvVar2);
    }
    if (*(char *)((long)puVar1 + 0x27) < '\0') {
      operator_delete((void *)puVar1[2]);
    }
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar3;
  }
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}


// ===== 00455e40  FUN_00455e40 =====

void FUN_00455e40(undefined8 *param_1)

{
  FUN_00455e48(*param_1);
  return;
}


// ===== 00455e48  FUN_00455e48 =====

/* WARNING: Removing unreachable block (ram,0x00456204) */
/* WARNING: Removing unreachable block (ram,0x00456218) */

void FUN_00455e48(long param_1,long param_2)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  void *local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  void *local_90;
  void *local_88;
  void *local_80;
  void *local_78;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x10) == '\0') {
    uVar4 = FUN_00417e08();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/engine.cpp",0x411,
                   "*** OnDevicesChanged:");
    }
    uVar4 = FUN_00417e08();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/engine.cpp",0x419,
                   "* audioInput:");
    }
    lVar6 = *(long *)(param_2 + 0x370);
    local_80 = (void *)0x0;
    local_78 = (void *)0x0;
    lVar7 = *(long *)(param_2 + 0x368);
    local_70 = (void *)0x0;
    uVar4 = lVar6 - lVar7;
    if (uVar4 != 0) {
      if (0x108421084210842 < (ulong)(((long)uVar4 >> 3) * -0x1084210842108421)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pvVar5 = operator_new(uVar4);
      lVar8 = 0;
      local_70 = (void *)((long)pvVar5 + ((long)uVar4 >> 3) * 8);
      local_80 = pvVar5;
      do {
        FUN_004243d4((long)pvVar5 + lVar8,lVar7 + lVar8);
        lVar8 = lVar8 + 0xf8;
      } while (lVar7 + lVar8 != lVar6);
      local_78 = (void *)((long)pvVar5 + lVar8);
      for (; lVar8 != 0; lVar8 = lVar8 + -0xf8) {
        uVar4 = FUN_00417e08();
        if ((uVar4 & 1) == 0) {
          FUN_00623bb0("\r\t\n\t\n\t","../../discord_native_lib/src/media/engine.cpp",0x431,
                       &DAT_001d8b2f,pvVar5,&DAT_001a2df6,(long)pvVar5 + 0x18,&DAT_001ca519);
        }
        pvVar5 = (void *)((long)pvVar5 + 0xf8);
      }
    }
    uVar4 = FUN_00417e08();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/engine.cpp",0x441,
                   "* audioOutput:");
    }
    lVar6 = *(long *)(param_2 + 0x398);
    local_98 = (void *)0x0;
    local_90 = (void *)0x0;
    lVar7 = *(long *)(param_2 + 0x390);
    local_88 = (void *)0x0;
    uVar4 = lVar6 - lVar7;
    if (uVar4 != 0) {
      if (0x108421084210842 < (ulong)(((long)uVar4 >> 3) * -0x1084210842108421)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pvVar5 = operator_new(uVar4);
      lVar8 = 0;
      local_88 = (void *)((long)pvVar5 + ((long)uVar4 >> 3) * 8);
      local_98 = pvVar5;
      do {
        FUN_004243d4((long)pvVar5 + lVar8,lVar7 + lVar8);
        lVar8 = lVar8 + 0xf8;
      } while (lVar7 + lVar8 != lVar6);
      local_90 = (void *)((long)pvVar5 + lVar8);
      for (; lVar8 != 0; lVar8 = lVar8 + -0xf8) {
        uVar4 = FUN_00417e08();
        if ((uVar4 & 1) == 0) {
          FUN_00623bb0("\r\t\n\t\n\t","../../discord_native_lib/src/media/engine.cpp",0x459,
                       &DAT_001d8b2f,pvVar5,&DAT_001a2df6,(long)pvVar5 + 0x18,&DAT_001ca519);
        }
        pvVar5 = (void *)((long)pvVar5 + 0xf8);
      }
    }
    local_b0 = (void *)0x0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    if (&local_b0 != (void **)(param_2 + 0x1948)) {
      FUN_00410fc0(&local_b0,*(undefined8 *)(param_2 + 0x1948),*(undefined8 *)(param_2 + 0x1950));
    }
    uVar4 = FUN_00417e08();
    pvVar5 = local_b0;
    pvVar2 = local_a8;
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/engine.cpp",0x481,
                   "* videoInput:");
      pvVar5 = local_b0;
      pvVar2 = local_a8;
    }
    for (; pvVar3 = local_a8, pvVar5 != local_a8; pvVar5 = (void *)((long)pvVar5 + 0x38)) {
      local_a8 = pvVar2;
      uVar4 = FUN_00417e08();
      if ((uVar4 & 1) == 0) {
        FUN_00623bb0("\r\t\n\t\n\t","../../discord_native_lib/src/media/engine.cpp",0x491,
                     &DAT_001d8b2f,pvVar5,&DAT_001a2df6,(long)pvVar5 + 0x18,&DAT_001ca519);
      }
      pvVar2 = local_a8;
      local_a8 = pvVar3;
    }
    local_a8 = pvVar2;
    (**(code **)(param_1 + 0x18))(param_1 + 8,&local_80,&local_98,&local_b0);
    if (local_b0 != (void *)0x0) {
      for (; local_a8 != local_b0; local_a8 = (void *)((long)local_a8 + -0x38)) {
      }
      local_a8 = local_b0;
      operator_delete(local_b0);
    }
    pvVar2 = local_98;
    pvVar5 = local_90;
    if (local_98 != (void *)0x0) {
      while (pvVar5 != pvVar2) {
        FUN_00411fac((void *)((long)pvVar5 + -0xf8));
        pvVar5 = (void *)((long)pvVar5 + -0xf8);
      }
      local_90 = pvVar2;
      operator_delete(local_98);
    }
    pvVar2 = local_80;
    pvVar5 = local_78;
    if (local_80 != (void *)0x0) {
      while (pvVar5 != pvVar2) {
        FUN_00411fac((void *)((long)pvVar5 + -0xf8));
        pvVar5 = (void *)((long)pvVar5 + -0xf8);
      }
      local_78 = pvVar2;
      operator_delete(local_80);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004562dc  FUN_004562dc =====

undefined1  [16]
FUN_004562dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
            undefined8 *param_5,undefined8 param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  
  plVar7 = (long *)operator_new(2000);
  uVar2 = *param_4;
  uVar4 = param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  uVar3 = *param_5;
  lVar8 = param_5[1];
  plVar9 = plVar7 + 1;
  *plVar9 = 0;
  plVar10 = plVar7 + 2;
  *plVar10 = 0;
  *plVar7 = (long)&PTR_FUN_00d1c710;
  if (lVar8 != 0) {
    plVar1 = (long *)(lVar8 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar1 = plVar7 + 3;
  FUN_00434fcc(plVar1,param_2,param_3,uVar2,uVar4,uVar3,lVar8,param_6);
  if (plVar7[5] == 0) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = *plVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar7[4] = (long)plVar1;
    plVar7[5] = (long)plVar7;
  }
  else {
    if (*(long *)(plVar7[5] + 8) != -1) goto LAB_004563fc;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = *plVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar7[4] = (long)plVar1;
    plVar7[5] = (long)plVar7;
    FUN_005466cc();
  }
  do {
    lVar8 = *plVar9;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar6) {
      *plVar9 = lVar8 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_005466cc(plVar7);
  }
LAB_004563fc:
  auVar11._8_8_ = plVar7;
  auVar11._0_8_ = plVar1;
  return auVar11;
}


// ===== 0045641c  FUN_0045641c =====

void FUN_0045641c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1c710;
  FUN_005466c0();
  return;
}


// ===== 0045642c  FUN_0045642c =====

void FUN_0045642c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1c710;
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 0045645c  FUN_0045645c =====

void FUN_0045645c(long param_1)

{
  FUN_00437178(param_1 + 0x18);
  return;
}


// ===== 00456464  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00456468  FUN_00456468 =====

void FUN_00456468(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *param_1;
  plVar1 = (long *)(lVar6 + 0x350);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    if (*(long *)(*(long *)(lVar6 + 0x360) + 200) != 0) {
      uVar4 = FUN_00417e08();
      if ((uVar4 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/engine.cpp",0x1669,
                     "Stopping audio output device");
      }
      FUN_004317cc(*(undefined8 *)(*(long *)(lVar6 + 0x360) + 200));
    }
    FUN_00455c90(lVar6 + 0x10,*(undefined8 *)(lVar6 + 0x18));
    *(undefined8 **)(lVar6 + 0x10) = (undefined8 *)(lVar6 + 0x18);
    *(undefined8 *)(lVar6 + 0x18) = 0;
    *(undefined8 *)(lVar6 + 0x20) = 0;
  }
  return;
}


// ===== 004564f0  FUN_004564f0 =====

void FUN_004564f0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *param_1;
  plVar1 = (long *)(lVar6 + 0x350);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    if (*(long *)(*(long *)(lVar6 + 0x360) + 200) != 0) {
      uVar4 = FUN_00417e08();
      if ((uVar4 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/engine.cpp",0x1669,
                     "Stopping audio output device");
      }
      FUN_004317cc(*(undefined8 *)(*(long *)(lVar6 + 0x360) + 200));
    }
    FUN_00455c90(lVar6 + 0x10,*(undefined8 *)(lVar6 + 0x18));
    *(undefined8 **)(lVar6 + 0x10) = (undefined8 *)(lVar6 + 0x18);
    *(undefined8 *)(lVar6 + 0x18) = 0;
    *(undefined8 *)(lVar6 + 0x20) = 0;
  }
  return;
}


// ===== 00456578  FUN_00456578 =====

long * FUN_00456578(long *param_1,undefined8 *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar7 = param_2[1];
  puVar5 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar7 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar5 = param_2;
  }
  uVar7 = FUN_00427058(auStack_70,puVar5,uVar7);
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar14 = NEON_cnt(uVar10,1);
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar11 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & uVar7;
    }
    else {
      uVar12 = uVar7;
      if (uVar10 <= uVar7) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = uVar7 / uVar10;
        }
        uVar12 = uVar7 - uVar12 * uVar10;
      }
    }
    plVar8 = *(long **)(*param_1 + uVar12 * 8);
    if (plVar8 != (long *)0x0) {
      plVar8 = (long *)*plVar8;
      if (plVar8 != (long *)0x0) {
        puVar5 = (undefined8 *)*param_2;
        __n = param_2[1];
        if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
          puVar5 = param_2;
          __n = (ulong)*(byte *)((long)param_2 + 0x17);
        }
        do {
          uVar9 = plVar8[1];
          if (uVar9 == uVar7) {
            bVar2 = *(byte *)((long)plVar8 + 0x27);
            sVar1 = plVar8[3];
            if (-1 < (char)bVar2) {
              sVar1 = (ulong)bVar2;
            }
            if (sVar1 == __n) {
              if ((char)bVar2 < '\0') {
                if ((__n == 0) || (iVar6 = memcmp((void *)plVar8[2],puVar5,__n), iVar6 == 0)) break;
              }
              else {
                if (bVar2 == 0) break;
                uVar9 = 0;
                while (*(char *)((long)plVar8 + uVar9 + 0x10) == *(char *)((long)puVar5 + uVar9)) {
                  uVar9 = uVar9 + 1;
                  if (bVar2 == uVar9) goto LAB_004566fc;
                }
              }
            }
          }
          else {
            if (uVar11 < 2) {
              uVar9 = uVar9 & uVar10 - 1;
            }
            else if (uVar10 <= uVar9) {
              uVar3 = 0;
              if (uVar10 != 0) {
                uVar3 = uVar9 / uVar10;
              }
              uVar9 = uVar9 - uVar3 * uVar10;
            }
            if (uVar9 != uVar12) goto LAB_004566f8;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      goto LAB_004566fc;
    }
  }
LAB_004566f8:
  plVar8 = (long *)0x0;
LAB_004566fc:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return plVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00456734  FUN_00456734 =====

undefined8 FUN_00456734(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  void *local_50 [2];
  char local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__hash_table",0x965,
               "__p != end()",
               "unordered container erase(iterator) called with a non-dereferenceable iterator");
  }
  uVar7 = *param_2;
  FUN_00456828(local_50);
  pvVar5 = local_50[0];
  local_50[0] = (void *)0x0;
  if (pvVar5 == (void *)0x0) goto LAB_004567b0;
  if (local_40 != '\0') {
    plVar8 = *(long **)((long)pvVar5 + 0x30);
    if (plVar8 == (long *)0x0) {
LAB_00456798:
      cVar2 = *(char *)((long)pvVar5 + 0x27);
    }
    else {
      plVar1 = plVar8 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 != 0) goto LAB_00456798;
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_005466cc(plVar8);
      cVar2 = *(char *)((long)pvVar5 + 0x27);
    }
    if (cVar2 < '\0') {
      operator_delete(*(void **)((long)pvVar5 + 0x10));
    }
  }
  operator_delete(pvVar5);
LAB_004567b0:
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00456828  FUN_00456828 =====

void FUN_00456828(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar5 = param_2[1];
  uVar3 = param_3[1];
  uVar11 = NEON_cnt(uVar5,1);
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  if (uVar7 < 2) {
    uVar3 = uVar5 - 1 & uVar3;
  }
  else if (uVar5 <= uVar3) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar3 / uVar5;
    }
    uVar3 = uVar3 - uVar9 * uVar5;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_3);
  if (plVar6 != param_2 + 2) {
    uVar9 = plVar6[1];
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_004568f4;
  }
  if (*param_3 != 0) {
    uVar9 = *(ulong *)(*param_3 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_004568f4;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_004568f4:
  lVar8 = *param_3;
  if (lVar8 != 0) {
    uVar9 = *(ulong *)(lVar8 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar7 * uVar5;
    }
    if (uVar9 != uVar3) {
      *(long **)(*param_2 + uVar9 * 8) = plVar6;
      lVar8 = *param_3;
    }
  }
  lVar4 = param_2[3];
  *plVar6 = lVar8;
  *param_3 = 0;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  param_2[3] = lVar4 + -1;
  return;
}


// ===== 0045695c  FUN_0045695c =====

long * FUN_0045695c(long *param_1,undefined8 *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar7 = param_2[1];
  puVar5 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar7 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar5 = param_2;
  }
  uVar7 = FUN_00427058(auStack_70,puVar5,uVar7);
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar14 = NEON_cnt(uVar10,1);
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar11 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & uVar7;
    }
    else {
      uVar12 = uVar7;
      if (uVar10 <= uVar7) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = uVar7 / uVar10;
        }
        uVar12 = uVar7 - uVar12 * uVar10;
      }
    }
    plVar8 = *(long **)(*param_1 + uVar12 * 8);
    if (plVar8 != (long *)0x0) {
      plVar8 = (long *)*plVar8;
      if (plVar8 != (long *)0x0) {
        puVar5 = (undefined8 *)*param_2;
        __n = param_2[1];
        if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
          puVar5 = param_2;
          __n = (ulong)*(byte *)((long)param_2 + 0x17);
        }
        do {
          uVar9 = plVar8[1];
          if (uVar9 == uVar7) {
            bVar2 = *(byte *)((long)plVar8 + 0x27);
            sVar1 = plVar8[3];
            if (-1 < (char)bVar2) {
              sVar1 = (ulong)bVar2;
            }
            if (sVar1 == __n) {
              if ((char)bVar2 < '\0') {
                if ((__n == 0) || (iVar6 = memcmp((void *)plVar8[2],puVar5,__n), iVar6 == 0)) break;
              }
              else {
                if (bVar2 == 0) break;
                uVar9 = 0;
                while (*(char *)((long)plVar8 + uVar9 + 0x10) == *(char *)((long)puVar5 + uVar9)) {
                  uVar9 = uVar9 + 1;
                  if (bVar2 == uVar9) goto LAB_00456ae0;
                }
              }
            }
          }
          else {
            if (uVar11 < 2) {
              uVar9 = uVar9 & uVar10 - 1;
            }
            else if (uVar10 <= uVar9) {
              uVar3 = 0;
              if (uVar10 != 0) {
                uVar3 = uVar9 / uVar10;
              }
              uVar9 = uVar9 - uVar3 * uVar10;
            }
            if (uVar9 != uVar12) goto LAB_00456adc;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      goto LAB_00456ae0;
    }
  }
LAB_00456adc:
  plVar8 = (long *)0x0;
LAB_00456ae0:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return plVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00456b18  FUN_00456b18 =====

undefined8 FUN_00456b18(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  void *pvVar4;
  void *local_50 [2];
  char local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__hash_table",0x965,
               "__p != end()",
               "unordered container erase(iterator) called with a non-dereferenceable iterator");
  }
  uVar3 = *param_2;
  FUN_00456be4(local_50);
  pvVar2 = local_50[0];
  local_50[0] = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    if (local_40 != '\0') {
      pvVar4 = *(void **)((long)pvVar2 + 0x28);
      *(undefined8 *)((long)pvVar2 + 0x28) = 0;
      if (pvVar4 != (void *)0x0) {
        FUN_004bbfa4(pvVar4);
        operator_delete(pvVar4);
      }
      if (*(char *)((long)pvVar2 + 0x27) < '\0') {
        operator_delete(*(void **)((long)pvVar2 + 0x10));
      }
    }
    operator_delete(pvVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00456be4  FUN_00456be4 =====

void FUN_00456be4(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar5 = param_2[1];
  uVar3 = param_3[1];
  uVar11 = NEON_cnt(uVar5,1);
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  if (uVar7 < 2) {
    uVar3 = uVar5 - 1 & uVar3;
  }
  else if (uVar5 <= uVar3) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar3 / uVar5;
    }
    uVar3 = uVar3 - uVar9 * uVar5;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_3);
  if (plVar6 != param_2 + 2) {
    uVar9 = plVar6[1];
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_00456cb0;
  }
  if (*param_3 != 0) {
    uVar9 = *(ulong *)(*param_3 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_00456cb0;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_00456cb0:
  lVar8 = *param_3;
  if (lVar8 != 0) {
    uVar9 = *(ulong *)(lVar8 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar7 * uVar5;
    }
    if (uVar9 != uVar3) {
      *(long **)(*param_2 + uVar9 * 8) = plVar6;
      lVar8 = *param_3;
    }
  }
  lVar4 = param_2[3];
  *plVar6 = lVar8;
  *param_3 = 0;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  param_2[3] = lVar4 + -1;
  return;
}


// ===== 00456d18  FUN_00456d18 =====

long * FUN_00456d18(long *param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *unaff_x28;
  undefined2 uVar16;
  undefined8 uVar17;
  float fVar18;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar11 = param_2[1];
  puVar6 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar11 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar6 = param_2;
  }
  plVar5 = (long *)FUN_00427058(auStack_70,puVar6,uVar11);
  plVar15 = (long *)param_1[1];
  if (plVar15 != (long *)0x0) {
    uVar17 = NEON_cnt(plVar15,1);
    uVar16 = NEON_uaddlv(uVar17,1);
    uVar11 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
    if (uVar11 < 2) {
      unaff_x28 = (long *)((long)plVar15 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x28 = plVar5;
      if (plVar15 <= plVar5) {
        uVar9 = 0;
        if (plVar15 != (long *)0x0) {
          uVar9 = (ulong)plVar5 / (ulong)plVar15;
        }
        unaff_x28 = (long *)((long)plVar5 - uVar9 * (long)plVar15);
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + (long)unaff_x28 * 8);
    if ((puVar6 != (undefined8 *)0x0) && (plVar14 = (long *)*puVar6, plVar14 != (long *)0x0)) {
      puVar6 = (undefined8 *)*param_2;
      __n = param_2[1];
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        puVar6 = param_2;
        __n = (ulong)*(byte *)((long)param_2 + 0x17);
      }
      do {
        plVar7 = (long *)plVar14[1];
        if (plVar7 != plVar5) {
          if (uVar11 < 2) {
            plVar7 = (long *)((ulong)plVar7 & (long)plVar15 - 1U);
          }
          else if (plVar15 <= plVar7) {
            uVar9 = 0;
            if (plVar15 != (long *)0x0) {
              uVar9 = (ulong)plVar7 / (ulong)plVar15;
            }
            plVar7 = (long *)((long)plVar7 - uVar9 * (long)plVar15);
          }
          if (plVar7 != unaff_x28) break;
        }
        bVar2 = *(byte *)((long)plVar14 + 0x27);
        sVar1 = plVar14[3];
        if (-1 < (char)bVar2) {
          sVar1 = (ulong)bVar2;
        }
        if (sVar1 == __n) {
          plVar7 = plVar14 + 2;
          plVar12 = (long *)*plVar7;
          if ((char)bVar2 < '\0') {
            plVar7 = plVar12;
            if (__n != 0) {
              uVar4 = memcmp(plVar12,puVar6,__n);
              plVar7 = (long *)(ulong)uVar4;
              if (uVar4 != 0) goto LAB_00456df4;
            }
          }
          else if (bVar2 != 0) {
            uVar9 = 0;
            while (*(char *)((long)plVar14 + uVar9 + 0x10) == *(char *)((long)puVar6 + uVar9)) {
              uVar9 = uVar9 + 1;
              if (bVar2 == uVar9) goto LAB_00456ed4;
            }
            goto LAB_00456df4;
          }
LAB_00456ed4:
          uVar17 = 0;
          goto LAB_00457130;
        }
LAB_00456df4:
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
  plVar14 = (long *)operator_new(0x30);
  plVar7 = plVar14 + 2;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    plVar12 = (long *)*param_3;
    uVar11 = param_3[1];
    if (uVar11 < 0x17) {
      *(char *)((long)plVar14 + 0x27) = (char)uVar11;
    }
    else {
      if (0x7fffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar9 = (uVar11 | 0xf) + 1;
      plVar7 = (long *)operator_new(uVar9);
      plVar14[2] = (long)plVar7;
      plVar14[3] = uVar11;
      plVar14[4] = uVar9 | 0x8000000000000000;
    }
    if ((plVar7 <= plVar12) && (plVar12 < (long *)((long)plVar7 + uVar11 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    plVar7 = (long *)memmove(plVar7,plVar12,uVar11 + 1);
  }
  else {
    lVar10 = *param_3;
    lVar8 = param_3[2];
    plVar14[3] = param_3[1];
    *plVar7 = lVar10;
    plVar14[4] = lVar8;
  }
  lVar8 = param_1[3];
  *plVar14 = 0;
  plVar14[1] = (long)plVar5;
  lVar10 = *param_4;
  *param_4 = 0;
  fVar18 = *(float *)(param_1 + 4);
  plVar14[5] = lVar10;
  if ((plVar15 == (long *)0x0) || (fVar18 * (float)plVar15 < (float)(lVar8 + 1))) {
    if (plVar15 < (long *)0x3) {
      uVar11 = 1;
    }
    else {
      uVar11 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
    }
    plVar12 = (long *)(uVar11 | (long)plVar15 << 1);
    plVar13 = (long *)(long)((float)(lVar8 + 1) / fVar18);
    if (plVar12 <= plVar13) {
      plVar12 = plVar13;
    }
    if ((long)plVar12 - 1U == 0) {
      plVar12 = (long *)0x2;
    }
    else if (((ulong)plVar12 & (long)plVar12 - 1U) != 0) {
      plVar7 = (long *)FUN_005204f8(plVar12);
      plVar15 = (long *)param_1[1];
      plVar12 = plVar7;
    }
    if (plVar15 < plVar12) {
LAB_0045700c:
      plVar7 = (long *)FUN_00457194(param_1,plVar12);
    }
    else if (plVar12 < plVar15) {
      plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (plVar15 < (long *)0x3) {
LAB_00457074:
        plVar7 = (long *)FUN_005204f8();
      }
      else {
        uVar17 = NEON_cnt(plVar15,1);
        uVar16 = NEON_uaddlv(uVar17,1);
        if (1 < (CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff)) goto LAB_00457074;
        if ((long *)0x1 < plVar7) {
          plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
        }
      }
      if (plVar12 <= plVar7) {
        plVar12 = plVar7;
      }
      if (plVar12 < plVar15) goto LAB_0045700c;
    }
    plVar15 = (long *)param_1[1];
    if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
      unaff_x28 = (long *)((long)plVar15 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x28 = plVar5;
      if (plVar15 <= plVar5) {
        uVar11 = 0;
        if (plVar15 != (long *)0x0) {
          uVar11 = (ulong)plVar5 / (ulong)plVar15;
        }
        unaff_x28 = (long *)((long)plVar5 - uVar11 * (long)plVar15);
      }
    }
  }
  lVar8 = *param_1;
  plVar5 = *(long **)(lVar8 + (long)unaff_x28 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    lVar10 = *plVar5;
    *plVar5 = (long)plVar14;
    *plVar14 = lVar10;
    *(long **)(lVar8 + (long)unaff_x28 * 8) = plVar5;
    if (*plVar14 == 0) goto LAB_00457120;
    plVar5 = *(long **)(*plVar14 + 8);
    if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
      plVar5 = (long *)((ulong)plVar5 & (long)plVar15 - 1U);
    }
    else if (plVar15 <= plVar5) {
      uVar11 = 0;
      if (plVar15 != (long *)0x0) {
        uVar11 = (ulong)plVar5 / (ulong)plVar15;
      }
      plVar5 = (long *)((long)plVar5 - uVar11 * (long)plVar15);
    }
    plVar5 = (long *)(*param_1 + (long)plVar5 * 8);
  }
  else {
    *plVar14 = *plVar5;
  }
  *plVar5 = (long)plVar14;
LAB_00457120:
  uVar17 = 1;
  param_1[3] = param_1[3] + 1;
LAB_00457130:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar7,uVar17);
  }
  return plVar14;
}


// ===== 00457194  FUN_00457194 =====

void FUN_00457194(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar2 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    pvVar2 = operator_new(param_2 << 3);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)pvVar2;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar10 = NEON_cnt(param_2,1);
      uVar9 = NEON_uaddlv(uVar10,1);
      uVar6 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
      if (uVar6 < 2) {
        uVar4 = uVar4 & param_2 - 1;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar5;
      if (plVar7 != (long *)0x0) {
        do {
          uVar8 = plVar7[1];
          if (uVar6 < 2) {
            uVar8 = uVar8 & param_2 - 1;
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
              *(long **)(*param_1 + uVar8 * 8) = plVar5;
              uVar4 = uVar8;
            }
            else {
              *plVar5 = *plVar7;
              *plVar7 = **(long **)(*param_1 + uVar8 * 8);
              **(undefined8 **)(*param_1 + uVar8 * 8) = plVar7;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar7 = (long *)*plVar5;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return;
}


// ===== 004572f0  FUN_004572f0 =====

long * FUN_004572f0(long *param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  ulong unaff_x28;
  undefined2 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  float fVar21;
  long lVar22;
  long lVar23;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar6 = param_2[1];
  puVar8 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar6 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar8 = param_2;
  }
  uVar6 = FUN_00427058(auStack_70,puVar8,uVar6);
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uVar18 = NEON_cnt(uVar16,1);
    uVar17 = NEON_uaddlv(uVar18,1);
    uVar12 = CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar17) & 0xffffffff;
    if (uVar12 < 2) {
      unaff_x28 = uVar16 - 1 & uVar6;
    }
    else {
      unaff_x28 = uVar6;
      if (uVar16 <= uVar6) {
        uVar9 = 0;
        if (uVar16 != 0) {
          uVar9 = uVar6 / uVar16;
        }
        unaff_x28 = uVar6 - uVar9 * uVar16;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x28 * 8);
    if ((puVar8 != (undefined8 *)0x0) && (plVar15 = (long *)*puVar8, plVar15 != (long *)0x0)) {
      puVar8 = (undefined8 *)*param_2;
      __n = param_2[1];
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        puVar8 = param_2;
        __n = (ulong)*(byte *)((long)param_2 + 0x17);
      }
      do {
        uVar9 = plVar15[1];
        if (uVar9 != uVar6) {
          if (uVar12 < 2) {
            uVar9 = uVar9 & uVar16 - 1;
          }
          else if (uVar16 <= uVar9) {
            uVar3 = 0;
            if (uVar16 != 0) {
              uVar3 = uVar9 / uVar16;
            }
            uVar9 = uVar9 - uVar3 * uVar16;
          }
          if (uVar9 != unaff_x28) break;
        }
        bVar2 = *(byte *)((long)plVar15 + 0x27);
        sVar1 = plVar15[3];
        if (-1 < (char)bVar2) {
          sVar1 = (ulong)bVar2;
        }
        if (sVar1 == __n) {
          plVar7 = plVar15 + 2;
          plVar13 = (long *)*plVar7;
          if ((char)bVar2 < '\0') {
            plVar7 = plVar13;
            if (__n != 0) {
              uVar5 = memcmp(plVar13,puVar8,__n);
              plVar7 = (long *)(ulong)uVar5;
              if (uVar5 != 0) goto LAB_004573cc;
            }
          }
          else if (bVar2 != 0) {
            uVar9 = 0;
            while (*(char *)((long)plVar15 + uVar9 + 0x10) == *(char *)((long)puVar8 + uVar9)) {
              uVar9 = uVar9 + 1;
              if (bVar2 == uVar9) goto LAB_00457494;
            }
            goto LAB_004573cc;
          }
LAB_00457494:
          uVar18 = 0;
          goto LAB_00457684;
        }
LAB_004573cc:
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
  plVar15 = (long *)operator_new(0x38);
  lVar20 = param_3[1];
  lVar19 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  lVar10 = param_3[2];
  param_3[2] = 0;
  lVar23 = param_4[1];
  lVar22 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
  lVar11 = param_1[3];
  plVar15[3] = lVar20;
  plVar15[2] = lVar19;
  plVar15[4] = lVar10;
  plVar15[6] = lVar23;
  plVar15[5] = lVar22;
  fVar21 = *(float *)(param_1 + 4);
  *plVar15 = 0;
  plVar15[1] = uVar6;
  plVar7 = plVar15;
  if ((uVar16 == 0) || (fVar21 * (float)uVar16 < (float)(lVar11 + 1))) {
    if (uVar16 < 3) {
      uVar12 = 1;
    }
    else {
      uVar12 = (ulong)((uVar16 & uVar16 - 1) != 0);
    }
    plVar13 = (long *)(uVar12 | uVar16 << 1);
    plVar14 = (long *)(long)((float)(lVar11 + 1) / fVar21);
    if (plVar13 <= plVar14) {
      plVar13 = plVar14;
    }
    if ((long)plVar13 - 1U == 0) {
      plVar13 = (long *)0x2;
    }
    else if (((ulong)plVar13 & (long)plVar13 - 1U) != 0) {
      plVar7 = (long *)FUN_005204f8(plVar13);
      plVar13 = plVar7;
    }
    plVar14 = (long *)param_1[1];
    if (plVar14 < plVar13) {
LAB_00457560:
      plVar7 = (long *)FUN_004576bc(param_1,plVar13);
    }
    else if (plVar13 < plVar14) {
      plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (plVar14 < (long *)0x3) {
LAB_004575c8:
        plVar7 = (long *)FUN_005204f8();
      }
      else {
        uVar18 = NEON_cnt(plVar14,1);
        uVar17 = NEON_uaddlv(uVar18,1);
        if (1 < (CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar17) & 0xffffffff)) goto LAB_004575c8;
        if ((long *)0x1 < plVar7) {
          plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
        }
      }
      if (plVar13 <= plVar7) {
        plVar13 = plVar7;
      }
      if (plVar13 < plVar14) goto LAB_00457560;
    }
    uVar16 = param_1[1];
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_x28 = uVar16 - 1 & uVar6;
    }
    else {
      unaff_x28 = uVar6;
      if (uVar16 <= uVar6) {
        uVar12 = 0;
        if (uVar16 != 0) {
          uVar12 = uVar6 / uVar16;
        }
        unaff_x28 = uVar6 - uVar12 * uVar16;
      }
    }
  }
  lVar10 = *param_1;
  plVar13 = *(long **)(lVar10 + unaff_x28 * 8);
  if (plVar13 == (long *)0x0) {
    plVar13 = param_1 + 2;
    lVar11 = *plVar13;
    *plVar13 = (long)plVar15;
    *plVar15 = lVar11;
    *(long **)(lVar10 + unaff_x28 * 8) = plVar13;
    if (*plVar15 == 0) goto LAB_00457674;
    uVar6 = *(ulong *)(*plVar15 + 8);
    if ((uVar16 & uVar16 - 1) == 0) {
      uVar6 = uVar6 & uVar16 - 1;
    }
    else if (uVar16 <= uVar6) {
      uVar12 = 0;
      if (uVar16 != 0) {
        uVar12 = uVar6 / uVar16;
      }
      uVar6 = uVar6 - uVar12 * uVar16;
    }
    plVar13 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar15 = *plVar13;
  }
  *plVar13 = (long)plVar15;
LAB_00457674:
  uVar18 = 1;
  param_1[3] = param_1[3] + 1;
LAB_00457684:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar7,uVar18);
  }
  return plVar15;
}


// ===== 004576bc  FUN_004576bc =====

void FUN_004576bc(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar2 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    pvVar2 = operator_new(param_2 << 3);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)pvVar2;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar10 = NEON_cnt(param_2,1);
      uVar9 = NEON_uaddlv(uVar10,1);
      uVar6 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
      if (uVar6 < 2) {
        uVar4 = uVar4 & param_2 - 1;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar5;
      if (plVar7 != (long *)0x0) {
        do {
          uVar8 = plVar7[1];
          if (uVar6 < 2) {
            uVar8 = uVar8 & param_2 - 1;
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
              *(long **)(*param_1 + uVar8 * 8) = plVar5;
              uVar4 = uVar8;
            }
            else {
              *plVar5 = *plVar7;
              *plVar7 = **(long **)(*param_1 + uVar8 * 8);
              **(undefined8 **)(*param_1 + uVar8 * 8) = plVar7;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar7 = (long *)*plVar5;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return;
}


// ===== 00457818  FUN_00457818 =====

void FUN_00457818(void)

{
  return;
}


// ===== 0045781c  FUN_0045781c =====

undefined8 * FUN_0045781c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)FUN_00457998(param_1,param_2,&local_60,auStack_68,param_3);
  puVar7 = (undefined8 *)*puVar4;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x38);
    puVar6 = puVar7 + 4;
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      __src = (undefined8 *)*param_4;
      uVar2 = param_4[1];
      if (uVar2 < 0x17) {
        *(char *)((long)puVar7 + 0x37) = (char)uVar2;
      }
      else {
        if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar1 = (uVar2 | 0xf) + 1;
        puVar6 = (undefined8 *)operator_new(uVar1);
        puVar7[4] = puVar6;
        puVar7[5] = uVar2;
        puVar7[6] = uVar1 | 0x8000000000000000;
      }
      if ((puVar6 <= __src) && (__src < (undefined8 *)((long)puVar6 + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      memmove(puVar6,__src,uVar2 + 1);
    }
    else {
      uVar8 = *param_4;
      uVar5 = param_4[2];
      puVar7[5] = param_4[1];
      *puVar6 = uVar8;
      puVar7[6] = uVar5;
    }
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = local_60;
    *puVar4 = puVar7;
    puVar6 = puVar7;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar6 = (undefined8 *)*puVar4;
    }
    puVar4 = (undefined8 *)FUN_0041dcd0(param_1[1],puVar6);
    uVar5 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar5 = 0;
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4,uVar5);
}


// ===== 00457998  FUN_00457998 =====

long * FUN_00457998(undefined8 *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5
                   )

{
  long *plVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar1 = param_1 + 1;
  if (plVar1 != param_2) {
    uVar3 = FUN_0041d7a0(param_5,param_2 + 4);
    if ((uVar3 >> 7 & 1) == 0) {
      uVar3 = FUN_0041d7a0(param_2 + 4,param_5);
      if ((uVar3 >> 7 & 1) == 0) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                   "__x != nullptr","node shouldn\'t be null");
      }
      plVar6 = param_2 + 1;
      plVar4 = (long *)*plVar6;
      plVar7 = param_2;
      plVar5 = plVar4;
      if (plVar4 == (long *)0x0) {
        do {
          plVar8 = (long *)plVar7[2];
          bVar2 = (long *)*plVar8 != plVar7;
          plVar7 = plVar8;
        } while (bVar2);
      }
      else {
        do {
          plVar8 = plVar5;
          plVar5 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
      if (plVar8 != plVar1) {
        uVar3 = FUN_0041d7a0(param_5,plVar8 + 4);
        if ((uVar3 >> 7 & 1) == 0) {
          plVar5 = (long *)*plVar1;
          plVar8 = plVar1;
          while (plVar7 = plVar8, plVar5 != (long *)0x0) {
            while( true ) {
              plVar7 = plVar5;
              uVar3 = FUN_0041d7a0(param_5,plVar7 + 4);
              if ((uVar3 >> 7 & 1) != 0) break;
              uVar3 = FUN_0041d7a0(plVar7 + 4,param_5);
              if ((uVar3 >> 7 & 1) == 0) goto LAB_00457ae0;
              plVar8 = plVar7 + 1;
              plVar5 = (long *)*plVar8;
              if ((long *)*plVar8 == (long *)0x0) goto LAB_00457ae0;
            }
            plVar8 = plVar7;
            plVar5 = (long *)*plVar7;
          }
          goto LAB_00457ae0;
        }
        plVar4 = (long *)*plVar6;
      }
      plVar7 = plVar8;
      if (plVar4 == (long *)0x0) {
        *param_3 = (long)param_2;
        return plVar6;
      }
      goto LAB_00457ae0;
    }
  }
  plVar7 = param_2;
  if ((long *)*param_1 != param_2) {
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xd1,
                 "__x != nullptr","node shouldn\'t be null");
    }
    plVar8 = param_2;
    plVar5 = (long *)*param_2;
    if ((long *)*param_2 == (long *)0x0) {
      do {
        plVar7 = (long *)plVar8[2];
        bVar2 = (long *)*plVar7 == plVar8;
        plVar8 = plVar7;
      } while (bVar2);
    }
    else {
      do {
        plVar7 = plVar5;
        plVar5 = (long *)plVar7[1];
      } while ((long *)plVar7[1] != (long *)0x0);
    }
    uVar3 = FUN_0041d7a0(plVar7 + 4,param_5);
    if ((uVar3 >> 7 & 1) == 0) {
      plVar5 = (long *)*plVar1;
      plVar8 = plVar1;
      while (plVar7 = plVar8, plVar5 != (long *)0x0) {
        while( true ) {
          plVar7 = plVar5;
          uVar3 = FUN_0041d7a0(param_5,plVar7 + 4);
          if ((uVar3 >> 7 & 1) != 0) break;
          uVar3 = FUN_0041d7a0(plVar7 + 4,param_5);
          if ((uVar3 >> 7 & 1) == 0) goto LAB_00457ae0;
          plVar8 = plVar7 + 1;
          plVar5 = (long *)*plVar8;
          if ((long *)*plVar8 == (long *)0x0) goto LAB_00457ae0;
        }
        plVar8 = plVar7;
        plVar5 = (long *)*plVar7;
      }
      goto LAB_00457ae0;
    }
  }
  if (*param_2 == 0) {
    *param_3 = (long)param_2;
    return param_2;
  }
  plVar8 = plVar7 + 1;
LAB_00457ae0:
  *param_3 = (long)plVar7;
  return plVar8;
}


// ===== 00457bf4  FUN_00457bf4 =====

void FUN_00457bf4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 00457c00  FUN_00457c00 =====

void FUN_00457c00(undefined8 *param_1)

{
  FUN_004530b4(*param_1);
  return;
}


// ===== 00457c08  FUN_00457c08 =====

undefined8 * FUN_00457c08(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  uVar3 = param_1[2];
  puVar1 = (undefined8 *)param_1[3];
  uVar5 = *param_1;
  pcVar4 = (code *)*puVar1;
  puVar2[1] = param_1[1];
  *puVar2 = uVar5;
  puVar2[2] = uVar3;
  puVar2[3] = puVar1;
  if (pcVar4 != (code *)0x0) {
    uVar3 = (*pcVar4)(*param_1);
    *puVar2 = uVar3;
  }
  return puVar2;
}


// ===== 00457c58  FUN_00457c58 =====

void FUN_00457c58(undefined8 *param_1)

{
  if (*(code **)(param_1[3] + 8) != (code *)0x0) {
    (**(code **)(param_1[3] + 8))(*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00457c8c  FUN_00457c8c =====

void FUN_00457c8c(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 00457cb0  FUN_00457cb0 =====

void FUN_00457cb0(long param_1)

{
  FUN_00457cbc((undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x18));
  return;
}


// ===== 00457cb8  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00457cbc  FUN_00457cbc =====

void FUN_00457cbc(undefined8 param_1,void *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 *__arg;
  pthread_t pStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00514534(param_2);
  if ((uVar3 & 1) == 0) {
    FUN_00514454(param_2);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      operator_delete(param_2);
      return;
    }
  }
  else {
    pvVar4 = operator_new(8);
    FUN_0054a384();
    __arg = (undefined8 *)operator_new(0x10);
    *__arg = pvVar4;
    __arg[1] = param_2;
    iVar2 = pthread_create(&pStack_40,(pthread_attr_t *)0x0,FUN_00457d98,__arg);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0054a0b0(iVar2,"thread constructor failed");
    }
    FUN_0054a1b8(&pStack_40);
    FUN_0054a158(&pStack_40);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00457d98  FUN_00457d98 =====

undefined8 FUN_00457d98(undefined8 *param_1)

{
  pthread_key_t __key;
  pthread_key_t *ppVar1;
  void *pvVar2;
  void *__pointer;
  
  ppVar1 = (pthread_key_t *)FUN_0054a21c();
  __key = *ppVar1;
  __pointer = (void *)*param_1;
  *param_1 = 0;
  pvVar2 = pthread_getspecific(__key);
  if (pvVar2 == (void *)0x0) {
    pthread_setspecific(*ppVar1,__pointer);
    pvVar2 = (void *)param_1[1];
    if (pvVar2 != (void *)0x0) {
      FUN_00514454(pvVar2);
      operator_delete(pvVar2);
    }
    pvVar2 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar2 != (void *)0x0) {
      FUN_0054a3b8(pvVar2);
      operator_delete(pvVar2);
    }
    operator_delete(param_1);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/thread",0xc9,
             "get() == nullptr","Attempting to overwrite thread local data");
}


// ===== 00457e4c  FUN_00457e4c =====

void FUN_00457e4c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 00457e58  FUN_00457e58 =====

/* WARNING: Removing unreachable block (ram,0x00457fbc) */

void FUN_00457e58(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar2 = *param_2;
  lVar3 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  lVar12 = *param_1;
  lVar10 = *(long *)(lVar12 + 0x338);
  if (lVar3 == 0) {
    lVar11 = *(long *)(lVar10 + 0x58);
    if (lVar11 == 0) goto LAB_00457fcc;
LAB_00457ec8:
    lVar10 = *(long *)(lVar10 + 0x78);
    if (lVar10 == 0) {
      puVar9 = (undefined8 *)operator_new(0x20);
      puVar9[2] = uVar2;
      puVar9[3] = lVar3;
      *puVar9 = &PTR_FUN_00d1c628;
      puVar9[1] = lVar12;
      FUN_00512cf8(lVar11,puVar9);
    }
    else {
      uVar8 = FUN_005ce36c();
      local_98 = CONCAT17(10,(undefined7)local_98);
      if ((&local_a8 < (void **)0x1e15d0) && ("operator()" < (char *)((long)&uStack_a0 + 2U))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      uVar7 = (ulong)uStack_a0 >> 0x10;
      uStack_a0 = CONCAT62((uint6)uVar7 & 0xffffffffff00,0x2928);
      local_a8 = (void *)s_operator___001e15cf._0_8_;
      local_80 = FUN_0040e7ec;
      local_78 = &DAT_001f4e70;
      local_90 = lVar10;
      local_70 = uVar8;
      puVar9 = (undefined8 *)operator_new(0x60);
      puVar9[2] = uVar2;
      puVar9[3] = lVar3;
      puVar9[5] = uStack_a0;
      puVar9[4] = local_a8;
      *puVar9 = &PTR_FUN_00d1c600;
      puVar9[1] = lVar12;
      puVar9[9] = FUN_0040e7ec;
      puVar9[10] = &DAT_001f4e70;
      puVar9[8] = uStack_88;
      puVar9[7] = local_90;
      puVar9[6] = local_98;
      puVar9[0xb] = uVar8;
      local_a8 = (void *)0x0;
      uStack_a0 = 0;
      local_98 = 0;
      FUN_00512cf8(lVar11,puVar9);
      if (*(code **)(local_78 + 8) != (code *)0x0) {
        (**(code **)(local_78 + 8))(local_90);
      }
      if (local_98 < 0) {
        operator_delete(local_a8);
      }
    }
    if (lVar3 == 0) goto LAB_00457fcc;
  }
  else {
    plVar1 = (long *)(lVar3 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar11 = *(long *)(lVar10 + 0x58);
    if (lVar11 != 0) goto LAB_00457ec8;
    FUN_005466cc(lVar3);
  }
  FUN_005466cc(lVar3);
LAB_00457fcc:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00458054  FUN_00458054 =====

void FUN_00458054(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[10] + 8);
  *param_1 = &PTR_FUN_00d1c600;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    lVar1 = param_1[3];
  }
  else {
    lVar1 = param_1[3];
  }
  if (lVar1 != 0) {
    FUN_005466cc();
    return;
  }
  return;
}


// ===== 004580bc  FUN_004580bc =====

void FUN_004580bc(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[10] + 8);
  *param_1 = &PTR_FUN_00d1c600;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    lVar1 = param_1[3];
  }
  else {
    lVar1 = param_1[3];
  }
  if (lVar1 != 0) {
    FUN_005466cc();
  }
  operator_delete(param_1);
  return;
}


// ===== 00458124  FUN_00458124 =====

void FUN_00458124(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  FUN_0045817c(param_1 + 8);
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x00458178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x48))
            (param_1 + 0x38,param_1 + 0x20,*(undefined8 *)(param_1 + 0x58),uVar1,uVar2);
  return;
}


// ===== 0045817c  FUN_0045817c =====

void FUN_0045817c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  void *local_60;
  char local_58 [15];
  char local_49;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar9 = *param_1;
  if ((*(long *)(lVar9 + 0x1938) != 0) && (param_1[2] != 0)) {
    plVar6 = (long *)FUN_005466fc();
    lVar7 = param_1[1];
    lVar10 = *(long *)(lVar9 + 0x1938);
    lVar5 = 0;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar5 = lVar7;
      if (lVar8 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_005466cc(plVar6);
      }
    }
    if (lVar5 == lVar10) {
      local_49 = '\b';
      if ((&local_60 < "isabled") && ("disabled" < local_58)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      local_58[0] = '\0';
      local_60 = (void *)0x64656c6261736964;
      FUN_00451798(lVar9,&local_60);
      if (local_49 < '\0') {
        operator_delete(local_60);
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004582c8  FUN_004582c8 =====

void FUN_004582c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1c628;
  if (param_1[3] != 0) {
    FUN_005466cc();
    return;
  }
  return;
}


// ===== 004582e8  FUN_004582e8 =====

void FUN_004582e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1c628;
  if (param_1[3] != 0) {
    FUN_005466cc();
  }
  operator_delete(param_1);
  return;
}


// ===== 00458320  FUN_00458320 =====

void FUN_00458320(long param_1)

{
  FUN_0045817c(param_1 + 8);
  return;
}


// ===== 00458328  FUN_00458328 =====

void FUN_00458328(undefined8 *param_1)

{
  FUN_00453b5c(*param_1);
  return;
}


// ===== 00458330  FUN_00458330 =====

void FUN_00458330(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0045833c  FUN_0045833c =====

void FUN_0045833c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  pcVar4 = *(code **)(param_1[10] + 8);
  *param_1 = &PTR_FUN_00d1c650;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    plVar6 = (long *)param_1[3];
  }
  else {
    plVar6 = (long *)param_1[3];
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
      return;
    }
  }
  return;
}


// ===== 004583d4  FUN_004583d4 =====

void FUN_004583d4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  pcVar4 = *(code **)(param_1[10] + 8);
  *param_1 = &PTR_FUN_00d1c650;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    plVar6 = (long *)param_1[3];
  }
  else {
    plVar6 = (long *)param_1[3];
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 00458468  FUN_00458468 =====

void FUN_00458468(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  FUN_004584c0(param_1 + 8);
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x004584bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x48))
            (param_1 + 0x38,param_1 + 0x20,*(undefined8 *)(param_1 + 0x58),uVar1,uVar2);
  return;
}


// ===== 004584c0  FUN_004584c0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004584c0(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *******__src;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *******__dest;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *******local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined1 auStack_b8 [8];
  char *local_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  void *local_98;
  undefined8 local_90;
  long lStack_88;
  long local_80;
  long local_78;
  undefined1 local_70;
  undefined4 local_6c;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar9 = *param_1;
  plVar10 = *(long **)(lVar9 + 0x1960);
  plVar11 = *(long **)(lVar9 + 0x1968);
  if (plVar10 != plVar11) {
    do {
      if (plVar10[1] == 0) {
        plVar6 = (long *)0x0;
        lVar7 = 0;
      }
      else {
        plVar6 = (long *)FUN_005466fc();
        lVar7 = 0;
        if (plVar6 != (long *)0x0) {
          lVar7 = *plVar10;
        }
      }
      if ((lVar7 == param_1[1]) && (plVar10[10] == 0)) {
        lVar7 = FUN_005ce36c();
        plVar10[10] = lVar7 - plVar10[9];
        uVar8 = FUN_00417e08();
        if ((uVar8 & 1) == 0) {
          local_b0 = "../../discord_native_lib/src/media/engine.cpp";
          uStack_a8 = 0x53d1;
          local_a0 = auStack_b8;
          if (*(char *)((long)plVar10 + 0x27) < '\0') {
            __src = (undefined8 *******)plVar10[2];
            uVar8 = plVar10[3];
            if (uVar8 < 0x17) {
              __dest = &local_d0;
              local_c0 = CONCAT17((char)uVar8,(undefined7)local_c0);
            }
            else {
              if (0x7fffffffffffffef < uVar8) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              uVar1 = (uVar8 | 0xf) + 1;
              __dest = (undefined8 *******)operator_new(uVar1);
              local_c0 = uVar1 | 0x8000000000000000;
              local_d0 = __dest;
              uStack_c8 = uVar8;
            }
            if ((__dest <= __src) && (__src < (undefined8 *******)((long)__dest + uVar8 + 1))) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                         ,0xec,"__s2 < __s1 || __s2 >= __s1+__n",
                         "char_traits::copy overlapped range");
            }
            memmove(__dest,__src,uVar8 + 1);
          }
          else {
            uStack_c8 = plVar10[3];
            local_d0 = (undefined8 *******)plVar10[2];
            local_c0 = plVar10[4];
          }
          FUN_00623bb0(&DAT_001f64a8,local_b0,uStack_a8,"Video input device: ",&local_d0,
                       ", time to first frame: ",(ulong)plVar10[10] / 1000000," [ms]");
          if ((long)local_c0 < 0) {
            operator_delete(local_d0);
          }
        }
        *(undefined1 *)(plVar10 + 0xb) = 1;
        local_6c = 0;
        local_70 = 0;
        uStack_a8 = 0;
        local_b0 = (char *)0x0;
        local_98 = (void *)0x0;
        local_a0 = (undefined1 *)0x0;
        lStack_88 = 0;
        local_90 = 0;
        local_78 = 0;
        local_80 = 0;
        FUN_00411268(&local_b0,plVar10 + 2);
        FUN_00411268(&local_98,plVar10 + 5);
        local_80 = plVar10[8];
        local_78 = plVar10[10];
        if (*(char *)(*(long *)(lVar9 + 0x1990) + 0x10) == '\0') {
          (**(code **)(lVar9 + 0x1988))(lVar9 + 0x1978,&local_b0);
        }
        if (lStack_88 < 0) {
          operator_delete(local_98);
        }
        if ((long)local_a0 < 0) {
          operator_delete(local_b0);
        }
      }
      if (plVar6 != (long *)0x0) {
        plVar2 = plVar6 + 1;
        do {
          lVar7 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          FUN_005466cc(plVar6);
        }
      }
      plVar10 = plVar10 + 0xd;
    } while (plVar10 != plVar11);
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004587bc  FUN_004587bc =====

void FUN_004587bc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[3];
  *param_1 = &PTR_FUN_00d1c678;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
      return;
    }
  }
  return;
}


// ===== 00458820  FUN_00458820 =====

void FUN_00458820(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[3];
  *param_1 = &PTR_FUN_00d1c678;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 00458884  FUN_00458884 =====

void FUN_00458884(long param_1)

{
  FUN_004584c0(param_1 + 8);
  return;
}


// ===== 0045888c  FUN_0045888c =====

/* WARNING: Removing unreachable block (ram,0x004588f8) */
/* WARNING: Removing unreachable block (ram,0x0045890c) */

void FUN_0045888c(undefined8 *param_1)

{
  void *pvVar1;
  code *pcVar2;
  void *pvVar3;
  void *pvVar4;
  
  pcVar2 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d1c6a0;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
    pvVar3 = (void *)param_1[2];
  }
  else {
    pvVar3 = (void *)param_1[2];
  }
  if (pvVar3 == (void *)0x0) {
    return;
  }
  pvVar4 = (void *)param_1[3];
  pvVar1 = pvVar3;
  if (pvVar4 != pvVar3) {
    do {
      pvVar4 = (void *)((long)pvVar4 + -0x38);
    } while (pvVar4 != pvVar3);
    pvVar1 = (void *)param_1[2];
  }
  param_1[3] = pvVar3;
  operator_delete(pvVar1);
  return;
}


// ===== 00458950  FUN_00458950 =====

/* WARNING: Removing unreachable block (ram,0x004589d0) */
/* WARNING: Removing unreachable block (ram,0x004589e4) */

void FUN_00458950(undefined8 *param_1)

{
  void *pvVar1;
  code *pcVar2;
  void *pvVar3;
  void *pvVar4;
  
  pcVar2 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d1c6a0;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
    pvVar3 = (void *)param_1[2];
  }
  else {
    pvVar3 = (void *)param_1[2];
  }
  if (pvVar3 != (void *)0x0) {
    pvVar4 = (void *)param_1[3];
    pvVar1 = pvVar3;
    if (pvVar4 != pvVar3) {
      do {
        pvVar4 = (void *)((long)pvVar4 + -0x38);
      } while (pvVar4 != pvVar3);
      pvVar1 = (void *)param_1[2];
    }
    param_1[3] = pvVar3;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00458a10  FUN_00458a10 =====

void FUN_00458a10(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_005ce36c();
  lVar4 = *(long *)(param_1 + 8);
  if (*(long *)(param_1 + 0x18) != *(long *)(param_1 + 0x10)) {
    FUN_004bacdc(*(undefined8 *)(lVar4 + 0x1998));
  }
  if ((long *)(lVar4 + 0x1948) != (long *)(param_1 + 0x10)) {
    FUN_00410fc0((long *)(lVar4 + 0x1948),*(undefined8 *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
  }
  FUN_005467a4(lVar4 + 0x28);
  if (*(char *)(lVar4 + 0x70) != '\0') {
    local_50 = lVar4;
    FUN_007b6160(lVar4 + 0x50,&local_50,FUN_00430140);
    FUN_005467c8(lVar4 + 0x28);
    uVar3 = FUN_005ce36c();
    (**(code **)(param_1 + 0x50))
              (param_1 + 0x40,param_1 + 0x28,*(undefined8 *)(param_1 + 0x60),uVar2,uVar3);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 00458b1c  FUN_00458b1c =====

/* WARNING: Removing unreachable block (ram,0x00458b6c) */
/* WARNING: Removing unreachable block (ram,0x00458b80) */

void FUN_00458b1c(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = (void *)param_1[2];
  *param_1 = &PTR_FUN_00d1c6c8;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)param_1[3];
    pvVar1 = pvVar2;
    if (pvVar3 != pvVar2) {
      do {
        pvVar3 = (void *)((long)pvVar3 + -0x38);
      } while (pvVar3 != pvVar2);
      pvVar1 = (void *)param_1[2];
    }
    param_1[3] = pvVar2;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00458bb4  FUN_00458bb4 =====

/* WARNING: Removing unreachable block (ram,0x00458c04) */
/* WARNING: Removing unreachable block (ram,0x00458c18) */

void FUN_00458bb4(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = (void *)param_1[2];
  *param_1 = &PTR_FUN_00d1c6c8;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)param_1[3];
    pvVar1 = pvVar2;
    if (pvVar3 != pvVar2) {
      do {
        pvVar3 = (void *)((long)pvVar3 + -0x38);
      } while (pvVar3 != pvVar2);
      pvVar1 = (void *)param_1[2];
    }
    param_1[3] = pvVar2;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00458c44  FUN_00458c44 =====

void FUN_00458c44(long param_1)

{
  long lVar1;
  long lVar2;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_1 + 8);
  if (*(long *)(param_1 + 0x18) != *(long *)(param_1 + 0x10)) {
    FUN_004bacdc(*(undefined8 *)(lVar2 + 0x1998));
  }
  if ((long *)(lVar2 + 0x1948) != (long *)(param_1 + 0x10)) {
    FUN_00410fc0((long *)(lVar2 + 0x1948),*(undefined8 *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
  }
  FUN_005467a4(lVar2 + 0x28);
  if (*(char *)(lVar2 + 0x70) != '\0') {
    local_40 = lVar2;
    FUN_007b6160(lVar2 + 0x50,&local_40,FUN_00430140);
    FUN_005467c8(lVar2 + 0x28);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 00458d20  FUN_00458d20 =====

/* WARNING: Removing unreachable block (ram,0x00459748) */
/* WARNING: Removing unreachable block (ram,0x004596e0) */
/* WARNING: Removing unreachable block (ram,0x004592c8) */
/* WARNING: Removing unreachable block (ram,0x0045970c) */
/* WARNING: Removing unreachable block (ram,0x0045978c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00458d20(undefined8 *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 *param_8,long *param_9)

{
  undefined ********ppppppppuVar1;
  size_t sVar2;
  undefined ********ppppppppuVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  void *pvVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *******__dest;
  ulong uVar13;
  undefined ********ppppppppuVar14;
  code *pcVar15;
  long lVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined8 *******pppppppuVar19;
  void *pvVar20;
  ulong uVar21;
  undefined8 uVar22;
  long *plVar23;
  long *plVar24;
  undefined8 uVar25;
  undefined8 *******local_f0;
  ulong uStack_e8;
  byte local_d9;
  undefined ********local_d8;
  ulong local_d0;
  ulong uStack_c8;
  undefined ********local_c0;
  ulong uStack_b8;
  ulong local_b0;
  undefined8 *******local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined ********local_88;
  size_t local_80;
  undefined4 local_78;
  byte local_71;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  *param_1 = &PTR_FUN_00d1c780;
  pvVar9 = operator_new(0x60);
  FUN_00512b50(pvVar9,param_7);
  param_1[0x15] = 0;
  param_1[1] = pvVar9;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  param_1[0x12] = 0;
  param_1[0x11] = param_1 + 0x12;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = param_1 + 0x15;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0x3f800000;
  puVar10 = (undefined8 *)*param_4;
  param_1[0x26] = puVar10;
  if (puVar10 != (undefined8 *)0x0) {
    (**(code **)*puVar10)();
  }
  puVar11 = (undefined8 *)*param_2;
  puVar10 = param_1 + 0x1f85;
  param_1[0x27] = puVar11;
  if (puVar11 != (undefined8 *)0x0) {
    (**(code **)*puVar11)();
  }
  puVar11 = (undefined8 *)*param_3;
  param_1[0x28] = puVar11;
  if (puVar11 != (undefined8 *)0x0) {
    (**(code **)*puVar11)();
  }
  param_1[0x29] = param_6;
  FUN_005edbb0(param_1 + 0x2a);
  FUN_005edbb0(param_1 + 0x37);
  FUN_00658c48(param_1 + 0x44);
  FUN_00658c48(param_1 + 2000);
  FUN_005edbb0(param_1 + 0xf5c);
  plVar12 = param_1 + 0xf6b;
  param_1[0xf6a] = 0;
  param_1[0xf69] = 0;
  param_1[0xf6c] = 0;
  param_1[0xf6b] = 0;
  FUN_00994394(param_1 + 0xf6d,1);
  FUN_00658c48(param_1 + 0x17f9);
  *puVar10 = 0;
  param_1[0x1f9a] = 0;
  param_1[0x1f99] = 0;
  param_1[0x1f9c] = 0;
  param_1[0x1f9b] = 0;
  param_1[0x1f9e] = 0;
  param_1[0x1f9d] = 0;
  param_1[0x1fa0] = 0;
  param_1[0x1f9f] = 0;
  param_1[0x1fa1] = 0;
  *(undefined1 *)(param_1 + 0x1f86) = 0;
  *(undefined4 *)((long)param_1 + 0xfc34) = 0;
  *(undefined4 *)(param_1 + 0x1f87) = 0;
  param_1[0x1f89] = 0;
  param_1[0x1f88] = 0;
  param_1[0x1f8b] = 0;
  param_1[0x1f8a] = 0;
  param_1[0x1f8d] = 0;
  param_1[0x1f8c] = 0;
  param_1[0x1f8f] = 0;
  param_1[0x1f8e] = 0;
  param_1[0x1f91] = 0;
  param_1[0x1f90] = 0;
  param_1[0x1f93] = 0;
  param_1[0x1f92] = 0;
  param_1[0x1f95] = 0;
  param_1[0x1f94] = 0;
  param_1[0x1f97] = 0;
  param_1[0x1f96] = 0;
  *(undefined4 *)(param_1 + 0x1f98) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1fa2) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1fa3) = 0;
  puVar17 = param_1 + 0x1fa4;
  *puVar17 = 0;
  param_1[0x1fa5] = 0;
  param_1[0x1fa6] = 0;
  *(undefined4 *)(param_1 + 0x1fa9) = 0;
  param_1[0x1fa7] = &PTR_FUN_00d1c7a8;
  param_1[0x1fa8] = 0;
  param_1[0x1faa] = 0;
  *(undefined4 *)(param_1 + 0x1fab) = 0;
  param_1[0x1fad] = 0;
  param_1[0x1fac] = 0;
  param_1[0x1faf] = 0;
  param_1[0x1fae] = 0;
  puVar11 = (undefined8 *)operator_new(0x4500);
  puVar8 = PTR_DAT_00d51b08;
  puVar11[2] = 0;
  *puVar11 = &PTR_FUN_00d1c7c8;
  puVar11[1] = 0;
  plVar23 = puVar11 + 3;
  *plVar23 = (long)(puVar8 + 0x10);
  FUN_0054680c(puVar11 + 4);
  *(undefined4 *)(puVar11 + 0xf) = 0x3f800000;
  *(undefined4 *)(puVar11 + 9) = 2;
  puVar11[0xc] = 0;
  puVar11[0xb] = 0;
  puVar11[0xe] = 0;
  puVar11[0xd] = 0;
  puVar11[10] = 8;
  FUN_00994394(puVar11 + 0x10,1);
  plVar24 = (long *)param_1[0xf6a];
  param_1[0xf69] = plVar23;
  puVar11[0x89e] = FUN_0045c980;
  puVar11[0x89f] = &DAT_001f1910;
  param_1[0xf6a] = puVar11;
  if (plVar24 == (long *)0x0) {
    pvVar9 = operator_new(0x44a0);
  }
  else {
    plVar23 = plVar24 + 1;
    do {
      lVar16 = *plVar23;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *plVar23 = lVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
      FUN_005466cc(plVar24);
    }
    puVar11 = (undefined8 *)param_1[0xf6a];
    pvVar9 = operator_new(0x44a0);
    plVar23 = (long *)param_1[0xf69];
    if (puVar11 == (undefined8 *)0x0) goto LAB_00459030;
  }
  plVar24 = puVar11 + 1;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar6) {
      *plVar24 = *plVar24 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00459030:
  FUN_00425e6c(pvVar9,plVar23,puVar11);
  lVar16 = *plVar12;
  *plVar12 = (long)pvVar9;
  if (lVar16 != 0) {
    FUN_0045c8a8(plVar12);
  }
  uVar22 = param_1[1];
  pvVar9 = operator_new(0x260);
  local_88 = (undefined ********)*param_4;
  if (local_88 != (undefined ********)0x0) {
    (*(code *)**local_88)(local_88);
  }
  FUN_00433988(pvVar9,&local_88,param_5,uVar22);
  if (local_88 != (undefined ********)0x0) {
    (*(code *)(*local_88)[1])();
  }
  pvVar20 = (void *)param_1[0xf6c];
  param_1[0xf6c] = pvVar9;
  if (pvVar20 != (void *)0x0) {
    FUN_00546ab0((long)pvVar20 + 0x234);
    if (*(long **)((long)pvVar20 + 0x228) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar20 + 0x228) + 8))();
    }
    plVar12 = *(long **)((long)pvVar20 + 0x220);
    *(undefined8 *)((long)pvVar20 + 0x220) = 0;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 8))();
    }
    pcVar15 = *(code **)(*(long *)((long)pvVar20 + 0x218) + 8);
    if (pcVar15 != (code *)0x0) {
      (*pcVar15)(*(undefined8 *)((long)pvVar20 + 0x200));
    }
    FUN_004205b0((long)pvVar20 + 0x88);
    operator_delete(pvVar20);
  }
  pvVar9 = operator_new(0x28);
  FUN_00484840();
  plVar12 = (long *)*puVar10;
  *puVar10 = pvVar9;
  if (plVar12 != (long *)0x0) {
    plVar23 = (long *)*plVar12;
    *plVar12 = 0;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 8))();
    }
    operator_delete(plVar12);
  }
  if (*(char *)((long)param_1 + 0xfd37) < '\0') {
    operator_delete((void *)*puVar17);
  }
  uVar25 = param_8[1];
  uVar22 = *param_8;
  param_1[0x1fa6] = param_8[2];
  param_1[0x1fa5] = uVar25;
  *puVar17 = uVar22;
  *(undefined1 *)((long)param_8 + 0x17) = 0;
  *(undefined1 *)param_8 = 0;
  FUN_005156ac(&local_88,param_7,param_1);
  if ((undefined *********)(param_1 + 0x1fa7) == &local_88) {
    local_88 = (undefined ********)&PTR_FUN_00d193e8;
    if (local_80 != 0) {
      FUN_005ce374(local_80,PTR_free_00d51ac0);
    }
  }
  else {
    if (param_1[0x1fa8] != 0) {
      FUN_005ce374(param_1[0x1fa8],PTR_free_00d51ac0);
    }
    param_1[0x1fa8] = local_80;
    *(undefined4 *)(param_1 + 0x1fa9) = local_78;
  }
  uVar22 = (**(code **)(*param_9 + 0x10))(param_9,"aecdump",7,4);
  puVar10 = (undefined8 *)param_1[0x1faa];
  param_1[0x1faa] = uVar22;
  if (puVar10 != (undefined8 *)0x0) {
    (**(code **)*puVar10)();
  }
  bVar4 = *(byte *)((long)param_1 + 0xfd37);
  uVar21 = param_1[0x1fa5];
  uVar13 = uVar21;
  if (-1 < (char)bVar4) {
    uVar13 = (ulong)bVar4;
  }
  if (uVar13 == 0) {
    FUN_005125b4(&local_a0);
  }
  else if ((char)bVar4 < '\0') {
    pppppppuVar19 = (undefined8 *******)*puVar17;
    if (uVar21 < 0x17) {
      __dest = &local_a0;
      local_90 = CONCAT17((char)uVar21,(undefined7)local_90);
    }
    else {
      if (0x7fffffffffffffef < uVar21) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar13 = (uVar21 | 0xf) + 1;
      __dest = (undefined8 *******)operator_new(uVar13);
      local_90 = uVar13 | 0x8000000000000000;
      local_a0 = __dest;
      uStack_98 = uVar21;
    }
    if ((__dest <= pppppppuVar19) &&
       (pppppppuVar19 < (undefined8 *******)((long)__dest + uVar21 + 1))) {
LAB_004597c8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,pppppppuVar19,uVar21 + 1);
  }
  else {
    uStack_98 = param_1[0x1fa5];
    local_a0 = (undefined8 *******)*puVar17;
    local_90 = param_1[0x1fa6];
  }
  FUN_004d7b58(&local_88,&local_a0);
  sVar2 = local_80;
  if (-1 < (char)local_71) {
    sVar2 = (ulong)local_71;
  }
  if (sVar2 != 0) {
    uVar13 = FUN_004d7ae8(&local_88);
    if ((uVar13 & 1) != 0) {
      iVar18 = 0;
      do {
        bVar4 = local_71;
        sVar2 = local_80;
        if (-1 < (char)local_71) {
          sVar2 = (ulong)local_71;
        }
        uVar13 = sVar2 + 7;
        if (0x7fffffffffffffef < uVar13) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (uVar13 < 0x17) {
          uStack_b8 = 0;
          ppppppppuVar14 = (undefined ********)&local_c0;
          local_c0 = (undefined ********)0x0;
          local_b0 = uVar13 << 0x38;
        }
        else {
          uVar21 = (uVar13 | 0xf) + 1;
          ppppppppuVar14 = (undefined ********)operator_new(uVar21);
          local_b0 = uVar21 | 0x8000000000000000;
          local_c0 = ppppppppuVar14;
          uStack_b8 = uVar13;
        }
        ppppppppuVar1 = (undefined ********)((long)ppppppppuVar14 + sVar2);
        ppppppppuVar3 = local_88;
        if (-1 < (char)bVar4) {
          ppppppppuVar3 = (undefined ********)&local_88;
        }
        if ((ppppppppuVar14 <= ppppppppuVar3) && (ppppppppuVar3 < ppppppppuVar1)) goto LAB_004597c8;
        if (sVar2 != 0) {
          memmove(ppppppppuVar14,ppppppppuVar3,sVar2);
        }
        if ((ppppppppuVar1 < (undefined ********)0x1f64b9) &&
           ("aecdump" < (char *)((long)ppppppppuVar1 + 7U))) goto LAB_004597c8;
        *(char *)((long)ppppppppuVar1 + 7) = '\0';
        builtin_strncpy((char *)((long)ppppppppuVar1 + 3),"dump",4);
        *(undefined4 *)ppppppppuVar1 = 0x64636561;
        FUN_005490bc(&local_d8,iVar18);
        uVar13 = local_d0;
        ppppppppuVar14 = local_d8;
        if (-1 < (long)uStack_c8) {
          uVar13 = uStack_c8 >> 0x38;
          ppppppppuVar14 = (undefined ********)&local_d8;
        }
        puVar10 = (undefined8 *)FUN_00547cac(&local_c0,ppppppppuVar14,uVar13);
        uStack_98 = puVar10[1];
        local_a0 = (undefined8 *******)*puVar10;
        local_90 = puVar10[2];
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
        FUN_004d7e34(&local_a0);
        if ((long)uStack_c8 < 0) {
          operator_delete(local_d8);
        }
        if ((long)local_b0 < 0) {
          operator_delete(local_c0);
        }
        bVar4 = local_71;
        sVar2 = local_80;
        if (-1 < (char)local_71) {
          sVar2 = (ulong)local_71;
        }
        uVar13 = sVar2 + 7;
        if (0x7fffffffffffffef < uVar13) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (uVar13 < 0x17) {
          local_d0 = 0;
          ppppppppuVar14 = (undefined ********)&local_d8;
          local_d8 = (undefined ********)0x0;
          uStack_c8 = uVar13 << 0x38;
        }
        else {
          uVar21 = (uVar13 | 0xf) + 1;
          ppppppppuVar14 = (undefined ********)operator_new(uVar21);
          uStack_c8 = uVar21 | 0x8000000000000000;
          local_d8 = ppppppppuVar14;
          local_d0 = uVar13;
        }
        ppppppppuVar1 = (undefined ********)((long)ppppppppuVar14 + sVar2);
        ppppppppuVar3 = local_88;
        if (-1 < (char)bVar4) {
          ppppppppuVar3 = (undefined ********)&local_88;
        }
        if ((ppppppppuVar14 <= ppppppppuVar3) && (ppppppppuVar3 < ppppppppuVar1)) goto LAB_004597c8;
        if (sVar2 != 0) {
          memmove(ppppppppuVar14,ppppppppuVar3,sVar2);
        }
        if ((ppppppppuVar1 < (undefined ********)0x1f64c1) &&
           ("capture" < (char *)((long)ppppppppuVar1 + 7U))) goto LAB_004597c8;
        *(char *)((long)ppppppppuVar1 + 7) = '\0';
        builtin_strncpy((char *)((long)ppppppppuVar1 + 3),"ture",4);
        *(undefined4 *)ppppppppuVar1 = 0x74706163;
        FUN_005490bc(&local_f0,iVar18);
        uVar13 = uStack_e8;
        pppppppuVar19 = local_f0;
        if (-1 < (char)local_d9) {
          uVar13 = (ulong)local_d9;
          pppppppuVar19 = &local_f0;
        }
        puVar10 = (undefined8 *)FUN_00547cac(&local_d8,pppppppuVar19,uVar13);
        uStack_b8 = puVar10[1];
        local_c0 = (undefined ********)*puVar10;
        local_b0 = puVar10[2];
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
        puVar10 = (undefined8 *)FUN_00547cac(&local_c0,&DAT_001f64c8,4);
        uStack_98 = puVar10[1];
        local_a0 = (undefined8 *******)*puVar10;
        local_90 = puVar10[2];
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
        FUN_004d7e34(&local_a0);
        if ((long)local_b0 < 0) {
          operator_delete(local_c0);
        }
        if ((char)local_d9 < '\0') {
          operator_delete(local_f0);
        }
        if ((long)uStack_c8 < 0) {
          operator_delete(local_d8);
        }
        bVar4 = local_71;
        sVar2 = local_80;
        if (-1 < (char)local_71) {
          sVar2 = (ulong)local_71;
        }
        uVar13 = sVar2 + 10;
        if (0x7fffffffffffffef < uVar13) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (uVar13 < 0x17) {
          local_d0 = 0;
          ppppppppuVar14 = (undefined ********)&local_d8;
          local_d8 = (undefined ********)0x0;
          uStack_c8 = uVar13 << 0x38;
        }
        else {
          uVar21 = (uVar13 | 0xf) + 1;
          ppppppppuVar14 = (undefined ********)operator_new(uVar21);
          uStack_c8 = uVar21 | 0x8000000000000000;
          local_d8 = ppppppppuVar14;
          local_d0 = uVar13;
        }
        ppppppppuVar1 = (undefined ********)((long)ppppppppuVar14 + sVar2);
        ppppppppuVar3 = local_88;
        if (-1 < (char)bVar4) {
          ppppppppuVar3 = (undefined ********)&local_88;
        }
        if ((ppppppppuVar14 <= ppppppppuVar3) && (ppppppppuVar3 < ppppppppuVar1)) goto LAB_004597c8;
        if (sVar2 != 0) {
          memmove(ppppppppuVar14,ppppppppuVar3,sVar2);
        }
        if ((ppppppppuVar1 < (undefined ********)0x1f64ce) &&
           ("soundshare" < (char *)((long)ppppppppuVar1 + 10U))) goto LAB_004597c8;
        *(char *)((long)ppppppppuVar1 + 10) = '\0';
        *ppppppppuVar1 = (undefined *******)s_soundshare_001f64cd._0_8_;
        *(undefined2 *)(ppppppppuVar1 + 1) = 0x6572;
        FUN_005490bc(&local_f0,iVar18);
        uVar13 = uStack_e8;
        pppppppuVar19 = local_f0;
        if (-1 < (char)local_d9) {
          uVar13 = (ulong)local_d9;
          pppppppuVar19 = &local_f0;
        }
        puVar10 = (undefined8 *)FUN_00547cac(&local_d8,pppppppuVar19,uVar13);
        uStack_b8 = puVar10[1];
        local_c0 = (undefined ********)*puVar10;
        local_b0 = puVar10[2];
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
        puVar10 = (undefined8 *)FUN_00547cac(&local_c0,&DAT_001f64c8,4);
        uStack_98 = puVar10[1];
        local_a0 = (undefined8 *******)*puVar10;
        local_90 = puVar10[2];
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
        FUN_004d7e34(&local_a0);
        if ((long)local_b0 < 0) {
          operator_delete(local_c0);
        }
        if ((char)local_d9 < '\0') {
          operator_delete(local_f0);
        }
        if ((long)uStack_c8 < 0) {
          operator_delete(local_d8);
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 != 5);
    }
  }
  if (*(long *)(lVar7 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00459804  FUN_00459804 =====

void FUN_00459804(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  void *pvVar7;
  code *pcVar8;
  void *pvVar9;
  long lVar10;
  long *plVar11;
  int *piVar12;
  void *pvVar13;
  void *pvVar14;
  long local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  *param_1 = &PTR_FUN_00d1c780;
  FUN_00459dd8();
  if (param_1[0x1fae] != 0) {
    local_50 = param_1[0x1fae];
    FUN_005467a4(param_1 + 0x1f99);
    FUN_0045f030(param_1 + 0x1f9e,&local_50);
    FUN_005467c8(param_1 + 0x1f99);
    plVar11 = (long *)param_1[0x1faf];
    param_1[0x1faf] = 0;
    param_1[0x1fae] = 0;
    if (plVar11 != (long *)0x0) {
      plVar6 = plVar11 + 1;
      do {
        lVar10 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        FUN_005466cc(plVar11);
      }
    }
  }
  FUN_00512e5c(param_1[1]);
  plVar11 = (long *)param_1[0x1faf];
  if (plVar11 != (long *)0x0) {
    plVar6 = plVar11 + 1;
    do {
      lVar10 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      FUN_005466cc(plVar11);
    }
  }
  plVar11 = (long *)param_1[0x1fad];
  if (plVar11 != (long *)0x0) {
    plVar6 = plVar11 + 1;
    do {
      lVar10 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      FUN_005466cc(plVar11);
    }
  }
  puVar5 = (undefined8 *)param_1[0x1faa];
  param_1[0x1faa] = 0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)();
  }
  param_1[0x1fa7] = &PTR_FUN_00d193e8;
  if (param_1[0x1fa8] != 0) {
    FUN_005ce374(param_1[0x1fa8],PTR_free_00d51ac0);
    param_1[0x1fa8] = 0;
  }
  if (*(char *)((long)param_1 + 0xfd37) < '\0') {
    operator_delete((void *)param_1[0x1fa4]);
  }
  puVar5 = (undefined8 *)param_1[0x1fa0];
  while (puVar5 != (undefined8 *)0x0) {
    pvVar13 = (void *)*puVar5;
    operator_delete(puVar5);
    puVar5 = (undefined8 *)pvVar13;
  }
  pvVar13 = (void *)param_1[0x1f9e];
  param_1[0x1f9e] = 0;
  if (pvVar13 != (void *)0x0) {
    operator_delete(pvVar13);
  }
  FUN_00546ab0(param_1 + 0x1f99);
  puVar5 = (undefined8 *)param_1[0x1f96];
  while (puVar5 != (undefined8 *)0x0) {
    pvVar13 = (void *)*puVar5;
    operator_delete(puVar5);
    puVar5 = (undefined8 *)pvVar13;
  }
  pvVar13 = (void *)param_1[0x1f94];
  param_1[0x1f94] = 0;
  if (pvVar13 != (void *)0x0) {
    operator_delete(pvVar13);
  }
  FUN_00546ab0(param_1 + 0x1f8f);
  FUN_00546ab0(param_1 + 0x1f8a);
  plVar11 = (long *)param_1[0x1f85];
  param_1[0x1f85] = 0;
  if (plVar11 != (long *)0x0) {
    plVar6 = (long *)*plVar11;
    *plVar11 = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    operator_delete(plVar11);
  }
  piVar12 = (int *)param_1[0x1801];
  if (piVar12 != (int *)0x0) {
    do {
      iVar1 = *piVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar3) {
        *piVar12 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      pvVar13 = *(void **)(piVar12 + 2);
      if (pvVar13 != (void *)0x0) {
        pvVar7 = pvVar13;
        pvVar9 = *(void **)(piVar12 + 4);
        if (*(void **)(piVar12 + 4) != pvVar13) {
          do {
            pvVar7 = *(void **)((long)pvVar9 + -0x60);
            pvVar14 = (void *)((long)pvVar9 + -0x68);
            if (pvVar7 != (void *)0x0) {
              *(void **)((long)pvVar9 + -0x58) = pvVar7;
              operator_delete(pvVar7);
            }
            pvVar9 = pvVar14;
          } while (pvVar14 != pvVar13);
          pvVar7 = *(void **)(piVar12 + 2);
        }
        *(void **)(piVar12 + 4) = pvVar13;
        operator_delete(pvVar7);
      }
      operator_delete(piVar12);
    }
  }
  FUN_00994408(param_1 + 0xf6d);
  pvVar13 = (void *)param_1[0xf6c];
  param_1[0xf6c] = 0;
  if (pvVar13 != (void *)0x0) {
    FUN_00546ab0((long)pvVar13 + 0x234);
    if (*(long **)((long)pvVar13 + 0x228) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar13 + 0x228) + 8))();
    }
    plVar11 = *(long **)((long)pvVar13 + 0x220);
    *(undefined8 *)((long)pvVar13 + 0x220) = 0;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 8))();
    }
    pcVar8 = *(code **)(*(long *)((long)pvVar13 + 0x218) + 8);
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(*(undefined8 *)((long)pvVar13 + 0x200));
    }
    FUN_004205b0((long)pvVar13 + 0x88);
    operator_delete(pvVar13);
  }
  lVar10 = param_1[0xf6b];
  param_1[0xf6b] = 0;
  if (lVar10 != 0) {
    FUN_0045c8a8(param_1 + 0xf6b);
  }
  plVar11 = (long *)param_1[0xf6a];
  if (plVar11 != (long *)0x0) {
    plVar6 = plVar11 + 1;
    do {
      lVar10 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      FUN_005466cc(plVar11);
    }
  }
  FUN_005edd2c(param_1 + 0xf5c);
  piVar12 = (int *)param_1[0x7d8];
  if (piVar12 != (int *)0x0) {
    do {
      iVar1 = *piVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar3) {
        *piVar12 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      pvVar13 = *(void **)(piVar12 + 2);
      if (pvVar13 != (void *)0x0) {
        pvVar7 = pvVar13;
        pvVar9 = *(void **)(piVar12 + 4);
        if (*(void **)(piVar12 + 4) != pvVar13) {
          do {
            pvVar7 = *(void **)((long)pvVar9 + -0x60);
            pvVar14 = (void *)((long)pvVar9 + -0x68);
            if (pvVar7 != (void *)0x0) {
              *(void **)((long)pvVar9 + -0x58) = pvVar7;
              operator_delete(pvVar7);
            }
            pvVar9 = pvVar14;
          } while (pvVar14 != pvVar13);
          pvVar7 = *(void **)(piVar12 + 2);
        }
        *(void **)(piVar12 + 4) = pvVar13;
        operator_delete(pvVar7);
      }
      operator_delete(piVar12);
    }
  }
  piVar12 = (int *)param_1[0x4c];
  if (piVar12 != (int *)0x0) {
    do {
      iVar1 = *piVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar3) {
        *piVar12 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      pvVar13 = *(void **)(piVar12 + 2);
      if (pvVar13 != (void *)0x0) {
        pvVar7 = pvVar13;
        pvVar9 = *(void **)(piVar12 + 4);
        if (*(void **)(piVar12 + 4) != pvVar13) {
          do {
            pvVar7 = *(void **)((long)pvVar9 + -0x60);
            pvVar14 = (void *)((long)pvVar9 + -0x68);
            if (pvVar7 != (void *)0x0) {
              *(void **)((long)pvVar9 + -0x58) = pvVar7;
              operator_delete(pvVar7);
            }
            pvVar9 = pvVar14;
          } while (pvVar14 != pvVar13);
          pvVar7 = *(void **)(piVar12 + 2);
        }
        *(void **)(piVar12 + 4) = pvVar13;
        operator_delete(pvVar7);
      }
      operator_delete(piVar12);
    }
  }
  FUN_005edd2c(param_1 + 0x37);
  FUN_005edd2c(param_1 + 0x2a);
  if ((long *)param_1[0x28] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x28] + 8))();
  }
  if ((long *)param_1[0x27] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x27] + 8))();
  }
  if ((long *)param_1[0x26] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x26] + 8))();
  }
  puVar5 = (undefined8 *)param_1[0x23];
  while (puVar5 != (undefined8 *)0x0) {
    pvVar13 = (void *)*puVar5;
    operator_delete(puVar5);
    puVar5 = (undefined8 *)pvVar13;
  }
  pvVar13 = (void *)param_1[0x21];
  param_1[0x21] = 0;
  if (pvVar13 != (void *)0x0) {
    operator_delete(pvVar13);
  }
  puVar5 = (undefined8 *)param_1[0x1e];
  while (puVar5 != (undefined8 *)0x0) {
    pvVar13 = (void *)*puVar5;
    operator_delete(puVar5);
    puVar5 = (undefined8 *)pvVar13;
  }
  pvVar13 = (void *)param_1[0x1c];
  param_1[0x1c] = 0;
  if (pvVar13 != (void *)0x0) {
    operator_delete(pvVar13);
  }
  puVar5 = (undefined8 *)param_1[0x19];
  while (puVar5 != (undefined8 *)0x0) {
    pvVar13 = (void *)*puVar5;
    operator_delete(puVar5);
    puVar5 = (undefined8 *)pvVar13;
  }
  pvVar13 = (void *)param_1[0x17];
  param_1[0x17] = 0;
  if (pvVar13 != (void *)0x0) {
    operator_delete(pvVar13);
  }
  FUN_0045c868(param_1 + 0x14,param_1[0x15]);
  FUN_0045c868(param_1 + 0x11,param_1[0x12]);
  puVar5 = (undefined8 *)param_1[0xe];
  while (puVar5 != (undefined8 *)0x0) {
    pvVar13 = (void *)*puVar5;
    if (*(code **)(puVar5[6] + 8) != (code *)0x0) {
      (**(code **)(puVar5[6] + 8))(puVar5[3]);
    }
    operator_delete(puVar5);
    puVar5 = (undefined8 *)pvVar13;
  }
  pvVar13 = (void *)param_1[0xc];
  param_1[0xc] = 0;
  if (pvVar13 != (void *)0x0) {
    operator_delete(pvVar13);
  }
  puVar5 = (undefined8 *)param_1[9];
  while (puVar5 != (undefined8 *)0x0) {
    pvVar13 = (void *)*puVar5;
    operator_delete(puVar5);
    puVar5 = (undefined8 *)pvVar13;
  }
  pvVar13 = (void *)param_1[7];
  param_1[7] = 0;
  if (pvVar13 != (void *)0x0) {
    operator_delete(pvVar13);
  }
  FUN_00546ab0(param_1 + 2);
  pvVar13 = (void *)param_1[1];
  param_1[1] = 0;
  if (pvVar13 != (void *)0x0) {
    FUN_00512bf4(pvVar13);
    operator_delete(pvVar13);
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00459dd8  FUN_00459dd8 =====

void FUN_00459dd8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  (**(code **)(**(long **)(param_1 + 0x130) + 0xf0))();
  if (*(long *)(param_1 + 0xfd60) != 0) {
    local_40 = *(long *)(param_1 + 0xfd60);
    FUN_005467a4(param_1 + 0xfcc8);
    FUN_0045f030(param_1 + 0xfcf0,&local_40);
    FUN_005467c8(param_1 + 0xfcc8);
    plVar6 = *(long **)(param_1 + 0xfd68);
    *(undefined8 *)(param_1 + 0xfd68) = 0;
    *(undefined8 *)(param_1 + 0xfd60) = 0;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_005466cc(plVar6);
      }
    }
  }
  FUN_00515738(param_1 + 0xfd38);
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00459ebc  FUN_00459ebc =====

void FUN_00459ebc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (*(long *)(param_1 + 0xfd70) != 0) {
    local_40 = *(long *)(param_1 + 0xfd70);
    FUN_005467a4(param_1 + 0xfcc8);
    FUN_0045f030(param_1 + 0xfcf0,&local_40);
    FUN_005467c8(param_1 + 0xfcc8);
    plVar6 = *(long **)(param_1 + 0xfd78);
    *(undefined8 *)(param_1 + 0xfd78) = 0;
    *(undefined8 *)(param_1 + 0xfd70) = 0;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_005466cc(plVar6);
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00459f84  FUN_00459f84 =====

void FUN_00459f84(void *param_1)

{
  FUN_00459804();
  operator_delete(param_1);
  return;
}


// ===== 00459fa8  FUN_00459fa8 =====

undefined8
FUN_00459fa8(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,ulong param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,byte param_11)

{
  long lVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  undefined8 *puVar9;
  void *pvVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  void *pvVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  int *piVar20;
  void *pvVar21;
  undefined2 uVar22;
  undefined8 uVar23;
  long local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_6c;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  local_80 = param_6;
  local_78 = param_4;
  local_6c = param_2;
  if (param_2 == 1) {
    local_90 = param_1 + 0xfc50;
    FUN_005467a4();
  }
  else {
    local_90 = 0;
  }
  local_88 = param_7 & 0xffffffff;
  pvVar7 = (void *)FUN_0045a34c(param_1,&local_6c,param_3,&local_78,&local_80,&local_88);
  lVar1 = param_1 + 0x10;
  FUN_005467a4(lVar1);
  lVar11 = *(long *)(param_1 + 0x98);
  FUN_005467c8(lVar1);
  FUN_00433a9c(*(undefined8 *)(param_1 + 0x7b60),param_2,lVar11 == 0,param_8,param_9,param_10,
               param_11 & 1,0,pvVar7);
  plVar19 = (long *)(param_1 + 0xfc40);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar4) {
      *plVar19 = *plVar19 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  FUN_005467a4(param_1 + 0xfcc8);
  iVar2 = local_6c;
  for (plVar19 = *(long **)(param_1 + 0xfd00); plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
    (**(code **)(*(long *)plVar19[2] + 0x10))((long *)plVar19[2],iVar2,pvVar7);
  }
  FUN_005467c8(param_1 + 0xfcc8);
  FUN_005467a4(lVar1);
  iVar2 = local_6c;
  plVar19 = *(long **)(param_1 + 0x48);
  do {
    if (plVar19 == (long *)0x0) {
      FUN_005467c8(lVar1);
      piVar20 = *(int **)((long)pvVar7 + 0x40);
      if (piVar20 != (int *)0x0) {
        do {
          iVar2 = *piVar20;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar4) {
            *piVar20 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          pvVar8 = *(void **)(piVar20 + 2);
          if (pvVar8 != (void *)0x0) {
            pvVar10 = pvVar8;
            pvVar14 = *(void **)(piVar20 + 4);
            if (*(void **)(piVar20 + 4) != pvVar8) {
              do {
                pvVar10 = *(void **)((long)pvVar14 + -0x60);
                pvVar21 = (void *)((long)pvVar14 + -0x68);
                if (pvVar10 != (void *)0x0) {
                  *(void **)((long)pvVar14 + -0x58) = pvVar10;
                  operator_delete(pvVar10);
                }
                pvVar14 = pvVar21;
              } while (pvVar21 != pvVar8);
              pvVar10 = *(void **)(piVar20 + 2);
            }
            *(void **)(piVar20 + 4) = pvVar8;
            operator_delete(pvVar10);
          }
          operator_delete(piVar20);
        }
      }
      operator_delete(pvVar7);
      if (param_2 == 1) {
        FUN_005467c8(local_90);
      }
      if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return 0;
    }
    if (*(int *)(plVar19 + 3) == iVar2) {
      pvVar8 = operator_new(0x3c60);
      FUN_00658c48();
      FUN_00658e5c(pvVar8,pvVar7);
      plVar12 = *(long **)(param_1 + 0x90);
      if (plVar12 != (long *)0x0) {
        puVar9 = (undefined8 *)plVar19[2];
        do {
          if ((undefined8 *)plVar12[4] <= puVar9) {
            if (puVar9 <= (undefined8 *)plVar12[4]) {
              uVar13 = *(ulong *)(param_1 + 0x68);
              goto joined_r0x0045a1a0;
            }
            plVar12 = plVar12 + 1;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      FUN_006592d8(pvVar8);
      puVar9 = (undefined8 *)plVar19[2];
      uVar13 = *(ulong *)(param_1 + 0x68);
joined_r0x0045a1a0:
      if (uVar13 != 0) {
        uVar15 = (((ulong)puVar9 & 0xffffffff) * 8 + 8 ^ (ulong)puVar9 >> 0x20) *
                 -0x622015f714c7d297;
        uVar23 = NEON_cnt(uVar13,1);
        uVar22 = NEON_uaddlv(uVar23,1);
        uVar15 = ((ulong)puVar9 >> 0x20 ^ uVar15 >> 0x2f ^ uVar15) * -0x622015f714c7d297;
        uVar16 = CONCAT62((int6)((ulong)uVar23 >> 0x10),uVar22) & 0xffffffff;
        uVar15 = (uVar15 ^ uVar15 >> 0x2f) * -0x622015f714c7d297;
        if (uVar16 < 2) {
          uVar17 = uVar15 & uVar13 - 1;
        }
        else {
          uVar17 = uVar15;
          if (uVar13 <= uVar15) {
            uVar17 = 0;
            if (uVar13 != 0) {
              uVar17 = uVar15 / uVar13;
            }
            uVar17 = uVar15 - uVar17 * uVar13;
          }
        }
        plVar12 = *(long **)(*(long *)(param_1 + 0x60) + uVar17 * 8);
        if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
          do {
            uVar18 = plVar12[1];
            if (uVar18 == uVar15) {
              if ((undefined8 *)plVar12[2] == puVar9) {
                (*(code *)plVar12[5])(plVar12 + 3,pvVar8);
                puVar9 = (undefined8 *)plVar19[2];
                break;
              }
            }
            else {
              if (uVar16 < 2) {
                uVar18 = uVar18 & uVar13 - 1;
              }
              else if (uVar13 <= uVar18) {
                uVar5 = 0;
                if (uVar13 != 0) {
                  uVar5 = uVar18 / uVar13;
                }
                uVar18 = uVar18 - uVar5 * uVar13;
              }
              if (uVar18 != uVar17) break;
            }
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
      }
      (**(code **)*puVar9)(puVar9,pvVar8);
    }
    plVar19 = (long *)*plVar19;
  } while( true );
}


// ===== 0045a34c  FUN_0045a34c =====

void * FUN_0045a34c(long param_1,int *param_2,undefined8 param_3,long *param_4,ulong *param_5,
                   uint *param_6)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  void *pvVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong local_88;
  long lStack_80;
  undefined8 local_78;
  long lStack_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pvVar6 = operator_new(0x3c60);
  FUN_00658c48();
  FUN_005467a4(param_1 + 0x10);
  plVar7 = *(long **)(param_1 + 0x48);
  if (plVar7 == (long *)0x0) {
    uVar9 = 8000;
    uVar10 = 1;
  }
  else {
    uVar9 = 8000;
    uVar10 = 1;
    do {
      if ((int)plVar7[3] == *param_2) {
        if ((int)uVar9 <= (int)*(uint *)((long)plVar7 + 0x1c)) {
          uVar9 = *(uint *)((long)plVar7 + 0x1c);
        }
        if (uVar10 <= (ulong)plVar7[4]) {
          uVar10 = plVar7[4];
        }
      }
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
  }
  FUN_005467c8(param_1 + 0x10);
  uVar2 = *param_6;
  iVar3 = *param_2;
  if ((int)uVar2 <= (int)uVar9) {
    uVar9 = uVar2;
  }
  if (iVar3 == 0) {
    uVar4 = *(uint *)(param_1 + 0xfc34);
    uVar8 = uVar4;
    if ((int)uVar9 <= (int)uVar4) {
      uVar8 = uVar9;
    }
    if (uVar4 != 0) {
      uVar9 = uVar8;
    }
  }
  if ((int)uVar9 < 0x1f41) {
    uVar8 = 8000;
    *(undefined4 *)((long)pvVar6 + 0x20) = 8000;
  }
  else if (uVar9 < 0x3e81) {
    uVar8 = 16000;
    *(undefined4 *)((long)pvVar6 + 0x20) = 16000;
  }
  else {
    uVar8 = 48000;
    if (uVar9 < 0x7d01) {
      uVar8 = 32000;
    }
    *(uint *)((long)pvVar6 + 0x20) = uVar8;
  }
  if (((iVar3 == 0) && (uVar9 = *(uint *)(param_1 + 0xfc38), uVar9 != 0)) && (uVar9 <= uVar10)) {
    uVar10 = (ulong)uVar9;
  }
  local_88 = *param_5;
  lStack_80 = *param_4;
  if (local_88 <= uVar10) {
    uVar10 = local_88;
  }
  lStack_70 = lStack_80 * local_88;
  *(ulong *)((long)pvVar6 + 0x18) = (ulong)(uVar8 / 100);
  lVar1 = param_1 + 0x150;
  if (iVar3 != 0) {
    lVar1 = param_1 + 0x1b8;
  }
  *(ulong *)((long)pvVar6 + 0x28) = uVar10;
  local_78 = 0;
  if (lStack_70 != 0) {
    local_78 = param_3;
  }
  FUN_005dd988(&local_88,uVar2,lVar1,pvVar6);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return pvVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0045a528  FUN_0045a528 =====

undefined8
FUN_0045a528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_00459fa8(param_1,1,param_2,param_3,param_5,param_5,param_6,param_7,0,0,0);
  return 1;
}


// ===== 0045a56c  FUN_0045a56c =====

undefined8
FUN_0045a56c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5,
            undefined8 param_6,long *param_7,undefined8 *param_8,undefined8 *param_9)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *pvVar10;
  void *pvVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  void *pvVar15;
  long *plVar16;
  void *pvVar17;
  long local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  long lStack_b8;
  undefined1 auStack_b0 [32];
  int local_90 [2];
  undefined8 local_88;
  long lStack_80;
  int *local_78;
  int *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  plVar16 = (long *)(param_1 + 0xfc48);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar5) {
      *plVar16 = *plVar16 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_00471604(*(undefined8 *)(param_1 + 0x148));
  FUN_005467a4(param_1 + 0xfc78);
  for (plVar16 = *(long **)(param_1 + 0xfcb0); plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
    (**(code **)(*(long *)plVar16[2] + 0x10))
              ((long *)plVar16[2],param_2,param_3,param_4,param_5 & 0xffffffff);
  }
  FUN_005467c8(param_1 + 0xfc78);
  uVar8 = FUN_006258f0();
  *(undefined8 *)(param_1 + 600) = 0;
  lVar14 = param_1 + 0x220;
  (**(code **)(**(long **)(param_1 + 0x138) + 0x30))(*(long **)(param_1 + 0x138),param_4,lVar14);
  local_70 = *(int **)(param_1 + 0x260);
  uVar9 = *(undefined8 *)(param_1 + 0x148);
  if (local_70 != (int *)0x0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(local_70,0x10);
      if (bVar5) {
        *local_70 = *local_70 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_0047270c(uVar9,&local_70,uVar8);
  piVar7 = local_70;
  if (local_70 != (int *)0x0) {
    do {
      iVar2 = *local_70;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(local_70,0x10);
      if (bVar5) {
        *local_70 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      pvVar17 = *(void **)(local_70 + 2);
      if (pvVar17 != (void *)0x0) {
        pvVar11 = *(void **)(local_70 + 4);
        pvVar10 = pvVar17;
        if (pvVar11 != pvVar17) {
          do {
            pvVar10 = *(void **)((long)pvVar11 + -0x60);
            pvVar15 = (void *)((long)pvVar11 + -0x68);
            if (pvVar10 != (void *)0x0) {
              *(void **)((long)pvVar11 + -0x58) = pvVar10;
              operator_delete(pvVar10);
            }
            pvVar11 = pvVar15;
          } while (pvVar15 != pvVar17);
          pvVar10 = *(void **)(piVar7 + 2);
        }
        *(void **)(piVar7 + 4) = pvVar17;
        operator_delete(pvVar10);
      }
      operator_delete(piVar7);
    }
  }
  *param_8 = *(undefined8 *)(param_1 + 0x228);
  *param_9 = *(undefined8 *)(param_1 + 0x230);
  FUN_00425f24(*(undefined8 *)(param_1 + 0x7b58),lVar14);
  lVar1 = param_1 + 0x10;
  FUN_005467a4(lVar1);
  lVar13 = *(long *)(param_1 + 0xf8);
  FUN_005467c8(lVar1);
  if (lVar13 == 0) {
    FUN_00484c40(*(undefined8 *)(param_1 + 0xfc28));
  }
  else {
    *(undefined8 *)(param_1 + 0x3eb8) = 0;
    lVar13 = param_1 + 16000;
    (**(code **)(**(long **)(param_1 + 0x140) + 0x30))(*(long **)(param_1 + 0x140),param_4,lVar13);
    local_78 = *(int **)(param_1 + 0x3ec0);
    uVar9 = *(undefined8 *)(param_1 + 0x148);
    if (local_78 != (int *)0x0) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(local_78,0x10);
        if (bVar5) {
          *local_78 = *local_78 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_0047270c(uVar9,&local_78,uVar8);
    piVar7 = local_78;
    if (local_78 != (int *)0x0) {
      do {
        iVar2 = *local_78;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(local_78,0x10);
        if (bVar5) {
          *local_78 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        pvVar17 = *(void **)(local_78 + 2);
        if (pvVar17 != (void *)0x0) {
          pvVar10 = pvVar17;
          pvVar11 = *(void **)(local_78 + 4);
          if (*(void **)(local_78 + 4) != pvVar17) {
            do {
              pvVar10 = *(void **)((long)pvVar11 + -0x60);
              pvVar15 = (void *)((long)pvVar11 + -0x68);
              if (pvVar10 != (void *)0x0) {
                *(void **)((long)pvVar11 + -0x58) = pvVar10;
                operator_delete(pvVar10);
              }
              pvVar11 = pvVar15;
            } while (pvVar15 != pvVar17);
            pvVar10 = *(void **)(piVar7 + 2);
          }
          *(void **)(piVar7 + 4) = pvVar17;
          operator_delete(pvVar10);
        }
        operator_delete(piVar7);
      }
    }
    if (*(char *)(param_1 + 0xfc30) != '\0') {
      FUN_00484968(*(undefined8 *)(param_1 + 0xfc28),lVar13,lVar14);
    }
    plVar16 = (long *)operator_new(0x10);
    uVar3 = *(undefined4 *)(param_1 + 0x240);
    *plVar16 = lVar14;
    plVar16[1] = lVar13;
    lVar14 = param_1 + 0xbfc8;
    FUN_00994cf8(param_1 + 0x7b68,plVar16,2,param_4,uVar3,2,lVar14);
    operator_delete(plVar16);
  }
  local_90[0] = *(int *)(lVar14 + 0x20);
  local_88 = *(undefined8 *)(lVar14 + 0x28);
  lStack_80 = (long)(local_90[0] / 100);
  FUN_005467a4(lVar1);
  lVar13 = *(long *)(param_1 + 0xb0);
  FUN_005467c8(lVar1);
  if (lVar13 != 0) {
    plVar16 = *(long **)(param_1 + 0x130);
    uVar8 = FUN_006591a0(lVar14);
    uVar9 = FUN_006591a0(lVar14);
    (**(code **)(*plVar16 + 0x90))(plVar16,uVar8,local_90,local_90,uVar9);
  }
  FUN_0065902c(auStack_b0,lVar14);
  local_d0 = *(long *)(lVar14 + 0x28);
  uVar12 = (param_5 & 0xffffffff) / 100;
  lStack_b8 = local_d0 * uVar12;
  local_c0 = 0;
  if (lStack_b8 != 0) {
    local_c0 = param_6;
  }
  uStack_c8 = uVar12;
  FUN_005eddfc(param_1 + 0x7ae0,auStack_b0,&local_d0);
  *param_7 = uVar12 * param_4;
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0045a968  FUN_0045a968 =====

void FUN_0045a968(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004249b0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/engine_audio_transport.cpp",0xde3,
               "EngineAudioTransport::PullRenderData unimplemented");
  return;
}


// ===== 0045a9a4  FUN_0045a9a4 =====

void FUN_0045a9a4(long param_1,ulong param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong local_70;
  undefined1 auStack_68 [8];
  undefined1 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = param_2;
  FUN_005467a4(param_1 + 0x10);
  local_60 = (undefined1 *)&local_70;
  lVar3 = FUN_0045c98c(param_1 + 0x38,&local_70,&DAT_001f64d8,&local_60,auStack_68);
  uVar2 = local_70;
  *(undefined4 *)(lVar3 + 0x18) = param_3;
  *(undefined4 *)(lVar3 + 0x1c) = param_4;
  *(undefined8 *)(lVar3 + 0x20) = param_5;
  puVar6 = (undefined8 *)(param_1 + 0x90);
  puVar4 = (undefined8 *)*puVar6;
  puVar5 = puVar6;
  if ((undefined8 *)*puVar6 != (undefined8 *)0x0) {
    do {
      while (puVar6 = puVar4, local_70 < (ulong)puVar6[4]) {
        puVar4 = (undefined8 *)*puVar6;
        puVar5 = puVar6;
        if ((undefined8 *)*puVar6 == (undefined8 *)0x0) goto LAB_0045aa60;
      }
      if (local_70 <= (ulong)puVar6[4]) goto LAB_0045aaac;
      puVar4 = (undefined8 *)puVar6[1];
    } while ((undefined8 *)puVar6[1] != (undefined8 *)0x0);
    puVar5 = puVar6 + 1;
  }
LAB_0045aa60:
  puVar4 = (undefined8 *)operator_new(0x28);
  puVar4[4] = uVar2;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = puVar6;
  *puVar5 = puVar4;
  if (**(long **)(param_1 + 0x88) != 0) {
    *(long *)(param_1 + 0x88) = **(long **)(param_1 + 0x88);
    puVar4 = (undefined8 *)*puVar5;
  }
  FUN_0041dcd0(*(undefined8 *)(param_1 + 0x90),puVar4);
  *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 1;
LAB_0045aaac:
  uVar2 = local_70;
  puVar6 = (undefined8 *)(param_1 + 0xa8);
  puVar4 = (undefined8 *)*puVar6;
  puVar5 = puVar6;
  if ((undefined8 *)*puVar6 != (undefined8 *)0x0) {
    do {
      while (puVar6 = puVar4, local_70 < (ulong)puVar6[4]) {
        puVar4 = (undefined8 *)*puVar6;
        puVar5 = puVar6;
        if ((undefined8 *)*puVar6 == (undefined8 *)0x0) goto LAB_0045aaf0;
      }
      if (local_70 <= (ulong)puVar6[4]) goto LAB_0045ab38;
      puVar4 = (undefined8 *)puVar6[1];
    } while ((undefined8 *)puVar6[1] != (undefined8 *)0x0);
    puVar5 = puVar6 + 1;
  }
LAB_0045aaf0:
  puVar4 = (undefined8 *)operator_new(0x28);
  puVar4[4] = uVar2;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = puVar6;
  *puVar5 = puVar4;
  if (**(long **)(param_1 + 0xa0) != 0) {
    *(long *)(param_1 + 0xa0) = **(long **)(param_1 + 0xa0);
    puVar4 = (undefined8 *)*puVar5;
  }
  FUN_0041dcd0(*(undefined8 *)(param_1 + 0xa8),puVar4);
  *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + 1;
LAB_0045ab38:
  FUN_005467c8(param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0045ab70  FUN_0045ab70 =====

undefined4 FUN_0045ab70(long param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined2 uVar16;
  undefined8 uVar17;
  ulong local_60;
  undefined1 auStack_58 [8];
  undefined1 *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_60 = param_2;
  FUN_005467a4(param_1 + 0x10);
  uVar7 = *(ulong *)(param_1 + 0x40);
  if (uVar7 != 0) {
    uVar9 = ((param_2 & 0xffffffff) * 8 + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
    uVar17 = NEON_cnt(uVar7,1);
    uVar9 = (param_2 >> 0x20 ^ uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297;
    uVar16 = NEON_uaddlv(uVar17,1);
    uVar10 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
    uVar9 = (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
    if (uVar10 < 2) {
      uVar12 = uVar9 & uVar7 - 1;
    }
    else {
      uVar12 = uVar9;
      if (uVar7 <= uVar9) {
        uVar12 = 0;
        if (uVar7 != 0) {
          uVar12 = uVar9 / uVar7;
        }
        uVar12 = uVar9 - uVar12 * uVar7;
      }
    }
    plVar13 = *(long **)(*(long *)(param_1 + 0x38) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      do {
        uVar14 = plVar13[1];
        if (uVar14 == uVar9) {
          if (plVar13[2] == param_2) {
            local_50 = (undefined1 *)&local_60;
            lVar5 = FUN_0045cdc8(param_1 + 0x60,&local_60,&DAT_001f64d8,&local_50,auStack_58);
            uVar17 = param_3[2];
            puVar1 = (undefined8 *)param_3[3];
            uVar6 = *param_3;
            uVar2 = param_3[1];
            pcVar8 = (code *)*puVar1;
            if (pcVar8 != (code *)0x0) {
              uVar6 = (*pcVar8)();
            }
            lVar11 = *(long *)(lVar5 + 0x30);
            *(undefined8 *)(lVar5 + 0x28) = uVar17;
            *(undefined8 **)(lVar5 + 0x30) = puVar1;
            uVar17 = *(undefined8 *)(lVar5 + 0x18);
            *(undefined8 *)(lVar5 + 0x18) = uVar6;
            *(undefined8 *)(lVar5 + 0x20) = uVar2;
            pcVar8 = *(code **)(lVar11 + 8);
            if (pcVar8 != (code *)0x0) {
              (*pcVar8)(uVar17);
            }
            uVar15 = 1;
            goto LAB_0045ac90;
          }
        }
        else {
          if (uVar10 < 2) {
            uVar14 = uVar14 & uVar7 - 1;
          }
          else if (uVar7 <= uVar14) {
            uVar3 = 0;
            if (uVar7 != 0) {
              uVar3 = uVar14 / uVar7;
            }
            uVar14 = uVar14 - uVar3 * uVar7;
          }
          if (uVar14 != uVar12) break;
        }
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
  }
  uVar15 = 0;
LAB_0045ac90:
  FUN_005467c8(param_1 + 0x10);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0045ad2c  FUN_0045ad2c =====

void FUN_0045ad2c(long param_1,undefined8 param_2)

{
  FUN_0045ad38(param_1,param_2,param_1 + 0xb8,*(undefined8 *)(param_1 + 0x138));
  return;
}


// ===== 0045ad38  FUN_0045ad38 =====

void FUN_0045ad38(long param_1,ulong param_2,long *param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  ulong local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_50 = param_2;
  FUN_005467a4(param_1 + 0x10);
  uVar4 = param_3[1];
  if (uVar4 != 0) {
    uVar5 = ((param_2 & 0xffffffff) * 8 + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
    uVar11 = NEON_cnt(uVar4,1);
    uVar5 = (param_2 >> 0x20 ^ uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar6 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    uVar5 = (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
    if (uVar6 < 2) {
      uVar7 = uVar5 & uVar4 - 1;
    }
    else {
      uVar7 = uVar5;
      if (uVar4 <= uVar5) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar5 / uVar4;
        }
        uVar7 = uVar5 - uVar7 * uVar4;
      }
    }
    plVar8 = *(long **)(*param_3 + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == uVar5) {
          if (plVar8[2] == param_2) {
            FUN_0045d220(param_3,&local_50,&local_50);
            goto LAB_0045ae84;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar9 = uVar9 & uVar4 - 1;
          }
          else if (uVar4 <= uVar9) {
            uVar2 = 0;
            if (uVar4 != 0) {
              uVar2 = uVar9 / uVar4;
            }
            uVar9 = uVar9 - uVar2 * uVar4;
          }
          if (uVar9 != uVar7) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  FUN_0045d220(param_3,&local_50,&local_50);
  lVar1 = 0;
  if (local_50 != 0) {
    lVar1 = local_50 + 8;
  }
  (**(code **)(*param_4 + 0x20))(param_4,lVar1);
LAB_0045ae84:
  FUN_005467c8(param_1 + 0x10);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0045aecc  FUN_0045aecc =====

void FUN_0045aecc(long param_1,undefined8 param_2)

{
  FUN_0045ad38(param_1,param_2,param_1 + 0xe0,*(undefined8 *)(param_1 + 0x140));
  return;
}


// ===== 0045aed8  FUN_0045aed8 =====

void FUN_0045aed8(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_2;
  FUN_005467a4(param_1 + 0x10);
  FUN_0045d654(param_1 + 0x38,&local_40);
  FUN_0045d8cc(param_1 + 0x60,&local_40);
  puVar4 = (undefined8 *)(param_1 + 0x90);
  puVar3 = (undefined8 *)*puVar4;
  puVar6 = puVar3;
  puVar7 = puVar4;
  if (puVar3 != (undefined8 *)0x0) {
    do {
      puVar5 = puVar6 + 1;
      if (local_40 <= (ulong)puVar6[4]) {
        puVar7 = puVar6;
        puVar5 = puVar6;
      }
      puVar6 = (undefined8 *)*puVar5;
    } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
    if ((puVar7 != puVar4) && ((ulong)puVar7[4] <= local_40)) {
      puVar6 = puVar7;
      puVar4 = (undefined8 *)puVar7[1];
      if ((undefined8 *)puVar7[1] == (undefined8 *)0x0) {
        do {
          puVar5 = (undefined8 *)puVar6[2];
          bVar2 = (undefined8 *)*puVar5 != puVar6;
          puVar6 = puVar5;
        } while (bVar2);
      }
      else {
        do {
          puVar5 = puVar4;
          puVar4 = (undefined8 *)*puVar5;
        } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
      }
      if ((undefined8 *)*(void **)(param_1 + 0x88) == puVar7) {
        *(undefined8 **)(param_1 + 0x88) = puVar5;
      }
      *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + -1;
      FUN_0045db64(puVar3,puVar7);
      operator_delete(puVar7);
    }
  }
  puVar4 = (undefined8 *)(param_1 + 0xa8);
  puVar3 = (undefined8 *)*puVar4;
  puVar6 = puVar3;
  puVar7 = puVar4;
  if (puVar3 != (undefined8 *)0x0) {
    do {
      puVar5 = puVar6 + 1;
      if (local_40 <= (ulong)puVar6[4]) {
        puVar7 = puVar6;
        puVar5 = puVar6;
      }
      puVar6 = (undefined8 *)*puVar5;
    } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
    if ((puVar7 != puVar4) && ((ulong)puVar7[4] <= local_40)) {
      puVar6 = puVar7;
      puVar4 = (undefined8 *)puVar7[1];
      if ((undefined8 *)puVar7[1] == (undefined8 *)0x0) {
        do {
          puVar5 = (undefined8 *)puVar6[2];
          bVar2 = (undefined8 *)*puVar5 != puVar6;
          puVar6 = puVar5;
        } while (bVar2);
      }
      else {
        do {
          puVar5 = puVar4;
          puVar4 = (undefined8 *)*puVar5;
        } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
      }
      if ((undefined8 *)*(void **)(param_1 + 0xa0) == puVar7) {
        *(undefined8 **)(param_1 + 0xa0) = puVar5;
      }
      *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + -1;
      FUN_0045db64(puVar3,puVar7);
      operator_delete(puVar7);
    }
  }
  FUN_005467c8(param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0045b09c  FUN_0045b09c =====

void FUN_0045b09c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_2;
  FUN_005467a4(param_1 + 0x10);
  lVar2 = FUN_0045dfd0(param_1 + 0xb8,&local_40);
  if (lVar2 != 0) {
    lVar2 = 0;
    if (local_40 != 0) {
      lVar2 = local_40 + 8;
    }
    (**(code **)(**(long **)(param_1 + 0x138) + 0x28))(*(long **)(param_1 + 0x138),lVar2);
  }
  lVar2 = FUN_0045dfd0(param_1 + 0xe0,&local_40);
  if (lVar2 != 0) {
    lVar2 = 0;
    if (local_40 != 0) {
      lVar2 = local_40 + 8;
    }
    (**(code **)(**(long **)(param_1 + 0x140) + 0x28))(*(long **)(param_1 + 0x140),lVar2);
  }
  FUN_005467c8(param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0045b160  FUN_0045b160 =====

/* WARNING: Removing unreachable block (ram,0x0045b220) */
/* WARNING: Removing unreachable block (ram,0x0045b28c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045b160(float param_1,long param_2,undefined8 *param_3,int param_4,long *param_5,
                 undefined8 *param_6)

{
  long *plVar1;
  long lVar2;
  undefined8 ****__src;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ****__dest;
  char *pcVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  char *local_130;
  char *pcStack_128;
  undefined8 local_120;
  undefined8 ***local_110;
  ulong uStack_108;
  undefined8 local_100;
  char *local_f0;
  char *pcStack_e8;
  undefined8 local_e0;
  char *local_d8;
  undefined8 local_d0;
  long lStack_c8;
  char *local_c0;
  undefined8 local_b8;
  long lStack_b0;
  char *local_a8;
  undefined8 local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (*(long *)(param_2 + 0x7b48) == 0) {
    local_a8 = (char *)operator_new(0x20);
    uVar13 = s_Couldn_t_start_playback_001d5d4e._0_8_;
    lStack_98 = _UNK_001f3b08;
    local_a0 = _DAT_001f3b00;
    if (("Couldn\'t start playback" < local_a8) || (local_a8 + 0x17 < "ouldn\'t start playback")) {
      uVar5 = CONCAT17(s_Couldn_t_start_playback_001d5d4e[0xf],
                       s_Couldn_t_start_playback_001d5d4e._8_7_);
      local_a8[0x17] = '\0';
      uVar6 = CONCAT71(s_Couldn_t_start_playback_001d5d4e._16_7_,
                       s_Couldn_t_start_playback_001d5d4e[0xf]);
      pcVar9 = (code *)param_6[2];
      *(undefined8 *)(local_a8 + 8) = uVar5;
      *(undefined8 *)local_a8 = uVar13;
      *(undefined8 *)(local_a8 + 0xf) = uVar6;
      (*pcVar9)(param_6,1,&local_a8);
      goto LAB_0045b4c0;
    }
    goto LAB_0045b4f0;
  }
  plVar1 = (long *)*param_5;
  lVar8 = param_5[1] - (long)plVar1;
  uVar12 = (lVar8 >> 3) * -0x5555555555555555;
  if (uVar12 - 3 < 0xfffffffffffffffe) {
    local_c0 = (char *)operator_new(0x20);
    uVar13 = s_Couldn_t_start_playback_001d5d4e._0_8_;
    lStack_b0 = _UNK_001f3b08;
    local_b8 = _DAT_001f3b00;
    if ((local_c0 < "ouldn\'t start playback") && ("Couldn\'t start playback" < local_c0 + 0x17))
    goto LAB_0045b4f0;
    uVar5 = CONCAT17(s_Couldn_t_start_playback_001d5d4e[0xf],
                     s_Couldn_t_start_playback_001d5d4e._8_7_);
    local_c0[0x17] = '\0';
    uVar6 = CONCAT71(s_Couldn_t_start_playback_001d5d4e._16_7_,
                     s_Couldn_t_start_playback_001d5d4e[0xf]);
    pcVar9 = (code *)param_6[2];
    *(undefined8 *)(local_c0 + 8) = uVar5;
    *(undefined8 *)local_c0 = uVar13;
    *(undefined8 *)(local_c0 + 0xf) = uVar6;
    (*pcVar9)(param_6,1,&local_c0);
    goto LAB_0045b4c0;
  }
  uVar11 = plVar1[1] - *plVar1 >> 2;
  uVar3 = (long)param_4 * 10;
  if (uVar11 <= (ulong)((long)param_4 * 10)) {
    uVar3 = uVar11;
  }
  if ((long *)param_5[1] == plVar1) {
LAB_0045b31c:
    FUN_00433164(&local_f0,param_1 * 32768.0,param_5);
    uVar13 = *(undefined8 *)(param_2 + 0x7b48);
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      __src = (undefined8 ****)*param_3;
      uVar3 = param_3[1];
      if (uVar3 < 0x17) {
        __dest = &local_110;
        local_100 = CONCAT17((char)uVar3,(undefined7)local_100);
      }
      else {
        if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar11 = (uVar3 | 0xf) + 1;
        __dest = (undefined8 ****)operator_new(uVar11);
        local_100 = uVar11 | 0x8000000000000000;
        local_110 = __dest;
        uStack_108 = uVar3;
      }
      if ((__dest <= __src) && (__src < (undefined8 ****)((long)__dest + uVar3 + 1))) {
LAB_0045b4f0:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      memmove(__dest,__src,uVar3 + 1);
    }
    else {
      uStack_108 = param_3[1];
      local_110 = (undefined8 ***)*param_3;
      local_100 = param_3[2];
    }
    local_120 = local_e0;
    pcStack_128 = pcStack_e8;
    local_130 = local_f0;
    pcStack_e8 = (char *)0x0;
    local_e0 = 0;
    uStack_88 = param_6[1];
    local_90 = *param_6;
    local_f0 = (char *)0x0;
    local_80 = param_6[2];
    local_78 = param_6[3];
    if (*(long *)(local_78 + 8) != 0) {
      param_6[2] = FUN_00419a50;
      param_6[3] = &DAT_001f1910;
    }
    FUN_00426370(uVar13,&local_110,param_4,uVar12 & 0xffffffff,&local_130,&local_90);
    if (*(code **)(local_78 + 8) != (code *)0x0) {
      (**(code **)(local_78 + 8))(local_90);
    }
    if (local_130 != (char *)0x0) {
      pcStack_128 = local_130;
      operator_delete(local_130);
    }
    if ((long)local_100 < 0) {
      operator_delete(local_110);
    }
    if (local_f0 == (char *)0x0) goto LAB_0045b4c0;
    pcStack_e8 = local_f0;
    pcVar7 = local_f0;
  }
  else {
    lVar2 = *plVar1;
    lVar10 = plVar1[1];
    if (uVar3 < (ulong)(lVar10 - lVar2 >> 2)) {
      lVar10 = lVar2 + uVar3 * 4;
      plVar1[1] = lVar10;
    }
    if (uVar3 == lVar10 - lVar2 >> 2) {
      if (lVar8 != 0x18) {
        lVar10 = plVar1[3];
        lVar8 = plVar1[4];
        if (uVar3 < (ulong)(lVar8 - lVar10 >> 2)) {
          lVar8 = lVar10 + uVar3 * 4;
          plVar1[4] = lVar8;
        }
        if (uVar12 < 2) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x587,
                     "__n < size()","vector[] index out of bounds");
        }
        if (uVar3 != lVar8 - lVar10 >> 2) goto LAB_0045b350;
      }
      goto LAB_0045b31c;
    }
LAB_0045b350:
    local_d8 = (char *)operator_new(0x20);
    uVar13 = s_Couldn_t_start_playback_001d5d4e._0_8_;
    lStack_c8 = _UNK_001f3b08;
    local_d0 = _DAT_001f3b00;
    if ((local_d8 < "ouldn\'t start playback") && ("Couldn\'t start playback" < local_d8 + 0x17))
    goto LAB_0045b4f0;
    uVar5 = CONCAT17(s_Couldn_t_start_playback_001d5d4e[0xf],
                     s_Couldn_t_start_playback_001d5d4e._8_7_);
    local_d8[0x17] = '\0';
    uVar6 = CONCAT71(s_Couldn_t_start_playback_001d5d4e._16_7_,
                     s_Couldn_t_start_playback_001d5d4e[0xf]);
    pcVar9 = (code *)param_6[2];
    *(undefined8 *)(local_d8 + 8) = uVar5;
    *(undefined8 *)local_d8 = uVar13;
    *(undefined8 *)(local_d8 + 0xf) = uVar6;
    (*pcVar9)(param_6,1,&local_d8);
    pcVar7 = local_d8;
    if (-1 < lStack_c8) goto LAB_0045b4c0;
  }
  operator_delete(pcVar7);
LAB_0045b4c0:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0045b548  FUN_0045b548 =====

void FUN_0045b548(long param_1)

{
  if (*(long *)(param_1 + 0x7b48) != 0) {
    FUN_004262ac();
    return;
  }
  return;
}


// ===== 0045b558  FUN_0045b558 =====

void FUN_0045b558(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 *__src;
  ulong uVar2;
  long lVar3;
  undefined1 **__dest;
  long lVar4;
  undefined1 *local_60;
  ulong uStack_58;
  undefined8 local_50;
  long local_48;
  
  __dest = &local_60;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar4 = *(long *)(param_1 + 0x7b48);
  if (lVar4 != 0) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      __src = (undefined1 *)*param_2;
      uVar2 = param_2[1];
      if (uVar2 < 0x17) {
        local_50 = CONCAT17((char)uVar2,(undefined7)local_50);
      }
      else {
        if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar1 = (uVar2 | 0xf) + 1;
        __dest = (undefined1 **)operator_new(uVar1);
        local_50 = uVar1 | 0x8000000000000000;
        local_60 = (undefined1 *)__dest;
        uStack_58 = uVar2;
      }
      if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      memmove(__dest,__src,uVar2 + 1);
    }
    else {
      uStack_58 = param_2[1];
      local_60 = (undefined1 *)*param_2;
      local_50 = param_2[2];
    }
    FUN_00426248(lVar4,&local_60);
    if ((long)local_50 < 0) {
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0045b674  FUN_0045b674 =====

void FUN_0045b674(long param_1)

{
  FUN_00434748(*(undefined8 *)(param_1 + 0x7b60));
  return;
}


// ===== 0045b67c  FUN_0045b67c =====

void FUN_0045b67c(long param_1)

{
  FUN_00434884(*(undefined8 *)(param_1 + 0x7b60));
  return;
}


// ===== 0045b684  FUN_0045b684 =====

void FUN_0045b684(long param_1)

{
  FUN_0043488c(*(undefined8 *)(param_1 + 0x7b60));
  return;
}


// ===== 0045b68c  FUN_0045b68c =====

void FUN_0045b68c(long param_1)

{
  FUN_00434898(*(undefined8 *)(param_1 + 0x7b60));
  return;
}


// ===== 0045b694  FUN_0045b694 =====

void FUN_0045b694(long param_1)

{
  FUN_004348a0(*(undefined8 *)(param_1 + 0x7b60));
  return;
}


// ===== 0045b69c  FUN_0045b69c =====

void FUN_0045b69c(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  char *local_78;
  undefined1 auStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_004df230(auStack_70,*(undefined8 *)(param_1 + 0xfc40));
  local_78 = "framesCaptured";
  uVar2 = FUN_004e148c(param_2,&local_78);
  FUN_004dfa04(uVar2,auStack_70);
  FUN_004df880(auStack_70);
  FUN_004df230(auStack_70,*(undefined8 *)(param_1 + 0xfc48));
  local_78 = "framesRendered";
  uVar2 = FUN_004e148c(param_2,&local_78);
  FUN_004dfa04(uVar2,auStack_70);
  FUN_004df880(auStack_70);
  FUN_004348a8(*(undefined8 *)(param_1 + 0x7b60),param_2,param_3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0045b77c  FUN_0045b77c =====

void FUN_0045b77c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 *local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = param_2[2];
  local_38 = (undefined8 *)param_2[3];
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uVar2 = *(undefined8 *)(param_1 + 0x7b60);
  if ((code *)*local_38 != (code *)0x0) {
    local_50 = (*(code *)*local_38)(*param_2);
  }
  FUN_00434c88(uVar2,&local_50);
  if ((code *)local_38[1] != (code *)0x0) {
    (*(code *)local_38[1])(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0045b808  FUN_0045b808 =====

void FUN_0045b808(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = param_2[2];
  local_38 = param_2[3];
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uVar2 = *(undefined8 *)(param_1 + 0x7b60);
  if (*(long *)(local_38 + 8) != 0) {
    param_2[2] = FUN_00402980;
    param_2[3] = &DAT_001f1910;
  }
  FUN_00434d1c(uVar2,&local_50);
  if (*(code **)(local_38 + 8) != (code *)0x0) {
    (**(code **)(local_38 + 8))(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0045b898  FUN_0045b898 =====

void FUN_0045b898(long param_1)

{
  FUN_00434d14(*(undefined8 *)(param_1 + 0x7b60));
  return;
}


// ===== 0045b8a0  FUN_0045b8a0 =====

void FUN_0045b8a0(long param_1)

{
  FUN_00434da8(*(undefined8 *)(param_1 + 0x7b60));
  return;
}


// ===== 0045b8a8  FUN_0045b8a8 =====

void FUN_0045b8a8(long param_1,undefined4 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f6220,"../../discord_native_lib/src/media/engine_audio_transport.cpp",
                 0x1a29,"EngineAudioTransport::SetVoiceSampleRateCap ",param_2);
  }
  *(undefined4 *)(param_1 + 0xfc34) = param_2;
  return;
}


// ===== 0045b8fc  FUN_0045b8fc =====

void FUN_0045b8fc(long param_1,undefined4 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f6220,"../../discord_native_lib/src/media/engine_audio_transport.cpp",
                 0x1a59,"EngineAudioTransport::SetVoiceChannelCountCap ",param_2);
  }
  *(undefined4 *)(param_1 + 0xfc38) = param_2;
  return;
}


// ===== 0045b950  FUN_0045b950 =====

void FUN_0045b950(long param_1,byte param_2)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = param_2 & 1;
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e94,"../../discord_native_lib/src/media/engine_audio_transport.cpp",
                 0x1a89,"EngineAudioTransport::SetSidechainCompression ",bVar1);
  }
  if ((*(byte *)(param_1 + 0xfc30) != bVar1) &&
     (*(byte *)(param_1 + 0xfc30) = bVar1, (param_2 & 1) == 0)) {
    FUN_00484c40(*(undefined8 *)(param_1 + 0xfc28));
    return;
  }
  return;
}


// ===== 0045b9d4  FUN_0045b9d4 =====

void FUN_0045b9d4(long param_1,undefined4 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *local_70 [2];
  char local_59;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_0045bacc(local_70,param_2);
    FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/media/engine_audio_transport.cpp",
                 0x1ae1,"EngineAudioTransport::ApplySidechainCompressionSettings ",local_70);
    if (local_59 < '\0') {
      operator_delete(local_70[0]);
    }
  }
  local_58 = *param_2;
  local_54 = *(undefined1 *)(param_2 + 1);
  local_50 = param_2[2];
  local_4c = *(undefined1 *)(param_2 + 3);
  uVar3 = *(undefined8 *)(param_1 + 0xfc28);
  *(undefined1 *)(param_2 + 1) = 0;
  local_48 = param_2[4];
  local_44 = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)(param_2 + 3) = 0;
  local_40 = param_2[6];
  local_3c = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)(param_2 + 5) = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  FUN_00484c60(uVar3,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0045bacc  FUN_0045bacc =====

void FUN_0045bacc(undefined8 param_1,undefined4 *param_2)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *local_170;
  undefined *local_168 [8];
  void *local_128;
  undefined8 uStack_120;
  long local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined *local_100 [3];
  undefined8 uStack_e8;
  undefined4 auStack_e0 [30];
  long local_68;
  
  puVar5 = PTR_PTR_00d51b50;
  puVar4 = PTR_DAT_00d51b48;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  puVar1 = PTR_DAT_00d51b48 + 0x40;
  local_170 = *(undefined **)(PTR_PTR_00d51b50 + 8);
  local_100[0] = puVar1;
  *(undefined8 *)((long)local_168 + *(long *)(local_170 + -0x18) + -8) =
       *(undefined8 *)(PTR_PTR_00d51b50 + 0x10);
  lVar6 = *(long *)(local_170 + -0x18);
  FUN_00520e8c((long)local_168 + lVar6 + -8,local_168);
  local_170 = puVar4 + 0x18;
  *(undefined8 *)((long)&uStack_e8 + lVar6) = 0;
  *(undefined4 *)((long)auStack_e0 + lVar6) = 0xffffffff;
  local_100[0] = puVar1;
  FUN_0054a4c8(local_168);
  puVar1 = PTR_DAT_00d51b20;
  local_108 = 0x10;
  uStack_120 = 0;
  local_128 = (void *)0x0;
  uStack_110 = 0;
  local_118 = 0;
  local_168[0] = PTR_DAT_00d51b20 + 0x10;
  cVar2 = *(char *)(param_2 + 1);
  *(uint *)((long)local_168 + *(long *)(local_170 + -0x18)) =
       *(uint *)((long)local_168 + *(long *)(local_170 + -0x18)) | 1;
  if (cVar2 != '\0') {
    FUN_00428964(&local_170," threshold: ",0xc);
    FUN_0054c438(*param_2);
  }
  if (*(char *)(param_2 + 3) != '\0') {
    FUN_00428964(&local_170," ratio: ",8);
    FUN_0054c438(param_2[2]);
  }
  if (*(char *)(param_2 + 5) != '\0') {
    FUN_00428964(&local_170," attack: ",9);
    FUN_0054c438(param_2[4]);
  }
  if (*(char *)(param_2 + 7) != '\0') {
    FUN_00428964(&local_170," release: ",10);
    FUN_0054c438(param_2[6]);
  }
  FUN_0054d504(param_1,local_168);
  local_170 = *(undefined **)puVar5;
  *(undefined8 *)((long)local_168 + *(long *)(local_170 + -0x18) + -8) =
       *(undefined8 *)(puVar5 + 0x18);
  local_168[0] = puVar1 + 0x10;
  if (local_118 < 0) {
    operator_delete(local_128);
  }
  FUN_0054a488(local_168);
  FUN_0054b3d4(&local_170,puVar5 + 8);
  thunk_FUN_00520cf4(local_100);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0045bcc8  FUN_0045bcc8 =====

void FUN_0045bcc8(long param_1,uint param_2)

{
  if (((*(byte *)(param_1 + 0xfd18) & 1) != (param_2 & 1)) &&
     (*(uint *)(param_1 + 0xfd18) = param_2 & 1, (param_2 & 1) == 0)) {
    FUN_00459dd8();
    return;
  }
  return;
}


// ===== 0045bcf4  FUN_0045bcf4 =====

void FUN_0045bcf4(undefined8 *param_1)

{
  FUN_0045bcfc(*param_1);
  return;
}


// ===== 0045bcfc  FUN_0045bcfc =====

/* WARNING: Removing unreachable block (ram,0x0045c46c) */
/* WARNING: Removing unreachable block (ram,0x0045c45c) */
/* WARNING: Removing unreachable block (ram,0x0045bf48) */
/* WARNING: Removing unreachable block (ram,0x0045bdf4) */
/* WARNING: Removing unreachable block (ram,0x0045c47c) */
/* WARNING: Removing unreachable block (ram,0x0045c3bc) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0045bcfc(long param_1)

{
  long *plVar1;
  char *******pppppppcVar2;
  char *******pppppppcVar3;
  size_t sVar4;
  undefined4 uVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  undefined1 **ppuVar10;
  undefined8 *******__dest;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  char *******pppppppcVar15;
  undefined8 *******pppppppuVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  undefined1 *local_130;
  ulong uStack_128;
  byte local_119;
  char *******local_118;
  ulong local_110;
  undefined8 uStack_108;
  char *******local_100;
  ulong uStack_f8;
  ulong local_f0;
  undefined8 *******local_e0;
  ulong uStack_d8;
  ulong local_d0;
  char *******local_c0;
  ulong uStack_b8;
  ulong local_b0;
  undefined8 *******local_a0;
  ulong uStack_98;
  undefined8 local_90;
  char *******local_80;
  size_t local_78;
  byte local_69;
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  if ((*(byte *)(param_1 + 0xfd18) & 1) == 0) goto LAB_0045c3c4;
  bVar6 = *(byte *)(param_1 + 0xfd37);
  uVar17 = *(ulong *)(param_1 + 0xfd28);
  uVar11 = uVar17;
  if (-1 < (char)bVar6) {
    uVar11 = (ulong)bVar6;
  }
  if (uVar11 == 0) {
    FUN_005125b4(&local_a0);
  }
  else if ((char)bVar6 < '\0') {
    pppppppuVar16 = *(undefined8 ********)(param_1 + 0xfd20);
    if (uVar17 < 0x17) {
      __dest = &local_a0;
      local_90 = CONCAT17((char)uVar17,(undefined7)local_90);
    }
    else {
      if (0x7fffffffffffffef < uVar17) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar11 = (uVar17 | 0xf) + 1;
      __dest = (undefined8 *******)operator_new(uVar11);
      local_90 = uVar11 | 0x8000000000000000;
      local_a0 = __dest;
      uStack_98 = uVar17;
    }
    if ((__dest <= pppppppuVar16) &&
       (pppppppuVar16 < (undefined8 *******)((long)__dest + uVar17 + 1))) goto LAB_0045c480;
    memmove(__dest,pppppppuVar16,uVar17 + 1);
  }
  else {
    uStack_98 = *(ulong *)(param_1 + 0xfd28);
    local_a0 = *(undefined8 ********)(param_1 + 0xfd20);
    local_90 = *(ulong *)(param_1 + 0xfd30);
  }
  FUN_004d7b58(&local_80,&local_a0);
  sVar4 = local_78;
  if (-1 < (char)local_69) {
    sVar4 = (ulong)local_69;
  }
  if ((sVar4 == 0) || (uVar11 = FUN_004d7ae8(&local_80), bVar6 = local_69, (uVar11 & 1) == 0))
  goto LAB_0045c3c4;
  sVar4 = local_78;
  if (-1 < (char)local_69) {
    sVar4 = (ulong)local_69;
  }
  uVar11 = sVar4 + 7;
  if (0x7fffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uVar11 < 0x17) {
    uStack_b8 = 0;
    pppppppcVar15 = (char *******)&local_c0;
    local_c0 = (char *******)0x0;
    local_b0 = uVar11 << 0x38;
  }
  else {
    uVar17 = (uVar11 | 0xf) + 1;
    pppppppcVar15 = (char *******)operator_new(uVar17);
    local_b0 = uVar17 | 0x8000000000000000;
    local_c0 = pppppppcVar15;
    uStack_b8 = uVar11;
  }
  pppppppcVar2 = (char *******)((long)pppppppcVar15 + sVar4);
  pppppppcVar3 = local_80;
  if (-1 < (char)bVar6) {
    pppppppcVar3 = (char *******)&local_80;
  }
  if ((pppppppcVar15 <= pppppppcVar3) && (pppppppcVar3 < pppppppcVar2)) goto LAB_0045c480;
  if (sVar4 != 0) {
    memmove(pppppppcVar15,pppppppcVar3,sVar4);
  }
  if ((pppppppcVar2 < (char *******)0x1f64b9) && ("aecdump" < (char *)((long)pppppppcVar2 + 7U)))
  goto LAB_0045c480;
  uVar5 = *(undefined4 *)(param_1 + 0xfd58);
  *(char *)((long)pppppppcVar2 + 7) = '\0';
  builtin_strncpy((char *)((long)pppppppcVar2 + 3),"dump",4);
  *(undefined4 *)pppppppcVar2 = 0x64636561;
  FUN_005490bc(&local_e0,uVar5);
  uVar11 = uStack_d8;
  pppppppuVar16 = local_e0;
  if (-1 < (long)local_d0) {
    uVar11 = local_d0 >> 0x38;
    pppppppuVar16 = &local_e0;
  }
  plVar12 = (long *)FUN_00547cac(&local_c0,pppppppuVar16,uVar11);
  local_90 = plVar12[2];
  uStack_98 = plVar12[1];
  local_a0 = (undefined8 *******)*plVar12;
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = 0;
  if ((long)local_d0 < 0) {
    operator_delete(local_e0);
  }
  uVar11 = uStack_98;
  pppppppuVar16 = local_a0;
  if (-1 < (long)local_90) {
    uVar11 = local_90 >> 0x38;
    pppppppuVar16 = &local_a0;
  }
  if ((pppppppuVar16 == (undefined8 *******)0x0) && (uVar11 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
               "__len == 0 || __s != nullptr",
               "string_view::string_view(_CharT *, size_t): received nullptr");
  }
  lVar13 = FUN_0099d9f4(pppppppuVar16,uVar11,0xffffffffffffffff,*(undefined8 *)(param_1 + 0xfd50));
  uVar11 = FUN_00417e08();
  if ((uVar11 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/media/engine_audio_transport.cpp",
                 0x1e11,"Starting aecdump: ",&local_a0);
  }
  if (lVar13 == 0) {
    uVar11 = FUN_00417e08();
    if ((uVar11 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/engine_audio_transport.cpp",
                   0x1e49,"Failed to start dignostic audio recording");
    }
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x130) + 0xe8))(*(long **)(param_1 + 0x130),lVar13);
    FUN_00515708(param_1 + 0xfd38,FUN_0045bcf4,60000,0);
  }
  local_c0 = *(char ********)(param_1 + 0xfd60);
  if (local_c0 != (char *******)0x0) {
    FUN_005467a4(param_1 + 0xfcc8);
    FUN_0045f030(param_1 + 0xfcf0,&local_c0);
    FUN_005467c8(param_1 + 0xfcc8);
  }
  local_c0 = *(char ********)(param_1 + 8);
  auVar18 = FUN_0045e248(&local_e0,&local_c0);
  plVar12 = *(long **)(param_1 + 0xfd68);
  *(undefined1 (*) [16])(param_1 + 0xfd60) = auVar18;
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 1;
    do {
      lVar13 = *plVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      FUN_005466cc(plVar12);
    }
  }
  bVar6 = local_69;
  sVar4 = local_78;
  if (-1 < (char)local_69) {
    sVar4 = (ulong)local_69;
  }
  uVar11 = sVar4 + 7;
  if (0x7fffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uVar11 < 0x17) {
    uStack_f8 = 0;
    pppppppcVar15 = (char *******)&local_100;
    local_100 = (char *******)0x0;
    local_f0 = uVar11 << 0x38;
  }
  else {
    uVar17 = (uVar11 | 0xf) + 1;
    pppppppcVar15 = (char *******)operator_new(uVar17);
    local_f0 = uVar17 | 0x8000000000000000;
    local_100 = pppppppcVar15;
    uStack_f8 = uVar11;
  }
  pppppppcVar2 = (char *******)((long)pppppppcVar15 + sVar4);
  pppppppcVar3 = local_80;
  if (-1 < (char)bVar6) {
    pppppppcVar3 = (char *******)&local_80;
  }
  if ((pppppppcVar15 <= pppppppcVar3) && (pppppppcVar3 < pppppppcVar2)) goto LAB_0045c480;
  if (sVar4 != 0) {
    memmove(pppppppcVar15,pppppppcVar3,sVar4);
  }
  if ((pppppppcVar2 < (char *******)0x1f64c1) && ("capture" < (char *)((long)pppppppcVar2 + 7U)))
  goto LAB_0045c480;
  uVar5 = *(undefined4 *)(param_1 + 0xfd58);
  *(char *)((long)pppppppcVar2 + 7) = '\0';
  builtin_strncpy((char *)((long)pppppppcVar2 + 3),"ture",4);
  *(undefined4 *)pppppppcVar2 = 0x74706163;
  FUN_005490bc(&local_118,uVar5);
  pppppppcVar15 = local_118;
  if (-1 < (long)uStack_108) {
    local_110 = uStack_108 >> 0x38;
    pppppppcVar15 = (char *******)&local_118;
  }
  puVar14 = (undefined8 *)FUN_00547cac(&local_100,pppppppcVar15,local_110);
  uStack_d8 = puVar14[1];
  local_e0 = (undefined8 *******)*puVar14;
  local_d0 = puVar14[2];
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = 0;
  puVar14 = (undefined8 *)FUN_00547cac(&local_e0,&DAT_001f64c8,4);
  local_b0 = puVar14[2];
  uStack_b8 = puVar14[1];
  local_c0 = (char *******)*puVar14;
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = 0;
  if ((long)local_d0 < 0) {
    operator_delete(local_e0);
    if (uStack_108._7_1_ < '\0') goto LAB_0045c404;
  }
  else if ((long)uStack_108 < 0) {
LAB_0045c404:
    operator_delete(local_118);
  }
  if ((long)local_f0 < 0) {
    operator_delete(local_100);
  }
  FUN_004af888(*(undefined8 *)(param_1 + 0xfd60),&local_c0);
  sVar4 = local_78;
  if (-1 < (char)local_69) {
    sVar4 = (ulong)local_69;
  }
  uVar11 = sVar4 + 10;
  if (0x7fffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uVar11 < 0x17) {
    local_110 = 0;
    pppppppcVar15 = (char *******)&local_118;
    local_118 = (char *******)0x0;
    uStack_108 = uVar11 << 0x38;
  }
  else {
    uVar17 = (uVar11 | 0xf) + 1;
    pppppppcVar15 = (char *******)operator_new(uVar17);
    uStack_108 = uVar17 | 0x8000000000000000;
    local_118 = pppppppcVar15;
    local_110 = uVar11;
  }
  pppppppcVar2 = (char *******)((long)pppppppcVar15 + sVar4);
  if (-1 < (char)local_69) {
    local_80 = (char *******)&local_80;
  }
  if ((local_80 < pppppppcVar15) || (pppppppcVar2 <= local_80)) {
    if (sVar4 != 0) {
      memmove(pppppppcVar15,local_80,sVar4);
    }
    if (((char *******)0x1f64ce <= pppppppcVar2) ||
       ((char *)((long)pppppppcVar2 + 10U) <= "soundshare")) {
      uVar5 = *(undefined4 *)(param_1 + 0xfd58);
      *(char *)((long)pppppppcVar2 + 10) = '\0';
      *pppppppcVar2 = (char ******)s_soundshare_001f64cd._0_8_;
      *(undefined2 *)(pppppppcVar2 + 1) = 0x6572;
      FUN_005490bc(&local_130,uVar5);
      ppuVar10 = (undefined1 **)local_130;
      if (-1 < (char)local_119) {
        uStack_128 = (ulong)local_119;
        ppuVar10 = &local_130;
      }
      puVar14 = (undefined8 *)FUN_00547cac(&local_118,ppuVar10,uStack_128);
      uStack_f8 = puVar14[1];
      local_100 = (char *******)*puVar14;
      local_f0 = puVar14[2];
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = 0;
      puVar14 = (undefined8 *)FUN_00547cac(&local_100,&DAT_001f64c8,4);
      local_d0 = puVar14[2];
      uStack_d8 = puVar14[1];
      local_e0 = (undefined8 *******)*puVar14;
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = 0;
      if ((long)local_f0 < 0) {
        operator_delete(local_100);
      }
      if ((char)local_119 < '\0') {
        operator_delete(local_130);
      }
      if ((long)uStack_108 < 0) {
        operator_delete(local_118);
      }
      FUN_004af8b0(*(undefined8 *)(param_1 + 0xfd60),&local_e0);
      local_100 = *(char ********)(param_1 + 0xfd60);
      FUN_005467a4(param_1 + 0xfcc8);
      FUN_0045ebfc(param_1 + 0xfcf0,&local_100,&local_100);
      FUN_005467c8(param_1 + 0xfcc8);
      *(int *)(param_1 + 0xfd58) = (*(int *)(param_1 + 0xfd58) + 1) % 5;
      if ((long)local_d0 < 0) {
        operator_delete(local_e0);
      }
LAB_0045c3c4:
      if (*(long *)(lVar9 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
LAB_0045c480:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 0045c4e4  FUN_0045c4e4 =====

void FUN_0045c4e4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_2;
  FUN_005467a4(param_1 + 0xfcc8);
  FUN_0045f030(param_1 + 0xfcf0,&local_40);
  FUN_005467c8(param_1 + 0xfcc8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0045c55c  FUN_0045c55c =====

void FUN_0045c55c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_2;
  FUN_005467a4(param_1 + 0xfcc8);
  FUN_0045ebfc(param_1 + 0xfcf0,&local_40,&local_40);
  FUN_005467c8(param_1 + 0xfcc8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0045c5d8  FUN_0045c5d8 =====

void FUN_0045c5d8(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 (*pauVar2) [16];
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_58 [8];
  long local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  pauVar2 = (undefined1 (*) [16])(param_1 + 0xfd70);
  local_50 = *(long *)*pauVar2;
  if (local_50 != 0) {
    FUN_005467a4(param_1 + 0xfcc8);
    FUN_0045f030(param_1 + 0xfcf0,&local_50);
    FUN_005467c8(param_1 + 0xfcc8);
    plVar7 = *(long **)(param_1 + 0xfd78);
    *(undefined8 *)(param_1 + 0xfd78) = 0;
    *(undefined8 *)(param_1 + 0xfd70) = 0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        FUN_005466cc(plVar7);
      }
    }
  }
  local_50 = *(long *)(param_1 + 8);
  auVar8 = FUN_0045e38c(auStack_58,&local_50,param_2);
  plVar7 = *(long **)(param_1 + 0xfd78);
  *pauVar2 = auVar8;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  local_50 = *(long *)*pauVar2;
  FUN_005467a4(param_1 + 0xfcc8);
  FUN_0045ebfc(param_1 + 0xfcf0,&local_50,&local_50);
  FUN_005467c8(param_1 + 0xfcc8);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0045c734  FUN_0045c734 =====

void FUN_0045c734(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_2;
  FUN_005467a4(param_1 + 0xfc78);
  FUN_0045e550(param_1 + 0xfca0,&local_40,&local_40);
  FUN_005467c8(param_1 + 0xfc78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0045c7b0  FUN_0045c7b0 =====

void FUN_0045c7b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_2;
  FUN_005467a4(param_1 + 0xfc78);
  FUN_0045e984(param_1 + 0xfca0,&local_40);
  FUN_005467c8(param_1 + 0xfc78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0045c828  FUN_0045c828 =====

void FUN_0045c828(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d193e8;
  if (param_1[1] != 0) {
    FUN_005ce374(param_1[1],PTR_free_00d51ac0);
  }
  operator_delete(param_1);
  return;
}


// ===== 0045c868  FUN_0045c868 =====

void FUN_0045c868(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_0045c868(param_1,*param_2);
    FUN_0045c868(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}


// ===== 0045c8a8  FUN_0045c8a8 =====

void FUN_0045c8a8(undefined8 param_1,void *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  long lVar5;
  long *plVar6;
  
  if (param_2 != (void *)0x0) {
    pvVar4 = *(void **)((long)param_2 + 0x4488);
    if (pvVar4 != (void *)0x0) {
      *(void **)((long)param_2 + 0x4490) = pvVar4;
      operator_delete(pvVar4);
    }
    pvVar4 = *(void **)((long)param_2 + 0x4470);
    if (pvVar4 != (void *)0x0) {
      *(void **)((long)param_2 + 0x4478) = pvVar4;
      operator_delete(pvVar4);
    }
    FUN_00994408((long)param_2 + 0x10);
    plVar6 = *(long **)((long)param_2 + 8);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_005466cc(plVar6);
      }
    }
    operator_delete(param_2);
    return;
  }
  return;
}


// ===== 0045c930  FUN_0045c930 =====

void FUN_0045c930(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1c7c8;
  FUN_005466c0();
  return;
}


// ===== 0045c940  FUN_0045c940 =====

void FUN_0045c940(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1c7c8;
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 0045c970  FUN_0045c970 =====

void FUN_0045c970(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0045c978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x28))();
  return;
}


// ===== 0045c97c  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0045c980  FUN_0045c980 =====

void FUN_0045c980(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0045c98c  FUN_0045c98c =====

undefined1  [16] FUN_0045c98c(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined2 uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  
  uVar2 = *param_2;
  uVar10 = param_1[1];
  uVar6 = ((uVar2 & 0xffffffff) * 8 + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  uVar6 = (uVar2 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  if (uVar10 != 0) {
    uVar12 = NEON_cnt(uVar10,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar7 < 2) {
      unaff_x24 = uVar6 & uVar10 - 1;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar10 <= uVar6) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar6 / uVar10;
        }
        unaff_x24 = uVar6 - uVar8 * uVar10;
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_0045ca84;
        uVar8 = plVar9[1];
        if (uVar8 != uVar6) {
          if (uVar7 < 2) {
            uVar8 = uVar8 & uVar10 - 1;
          }
          else if (uVar10 <= uVar8) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = uVar8 / uVar10;
            }
            uVar8 = uVar8 - uVar1 * uVar10;
          }
          if (uVar8 != unaff_x24) goto LAB_0045ca84;
        }
      } while (plVar9[2] != uVar2);
      uVar12 = 0;
      goto LAB_0045cc54;
    }
  }
LAB_0045ca84:
  plVar9 = (long *)operator_new(0x28);
  lVar5 = param_1[3];
  fVar13 = *(float *)(param_1 + 4);
  lVar3 = *(long *)*param_4;
  plVar9[4] = 0;
  *plVar9 = 0;
  plVar9[1] = uVar6;
  plVar9[2] = lVar3;
  plVar9[3] = 0;
  if ((uVar10 == 0) || (fVar13 * (float)uVar10 < (float)(lVar5 + 1))) {
    if (uVar10 < 3) {
      uVar2 = 1;
    }
    else {
      uVar2 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar2 = uVar2 | uVar10 << 1;
    uVar7 = (ulong)((float)(lVar5 + 1) / fVar13);
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    if (uVar2 - 1 == 0) {
      uVar2 = 2;
    }
    else if ((uVar2 & uVar2 - 1) != 0) {
      uVar2 = FUN_005204f8(uVar2);
      uVar10 = param_1[1];
    }
    if (uVar10 < uVar2) {
LAB_0045cba0:
      FUN_0045cc6c(param_1,uVar2);
    }
    else if (uVar2 < uVar10) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar10 < 3) {
LAB_0045cb8c:
        uVar7 = FUN_005204f8();
      }
      else {
        uVar12 = NEON_cnt(uVar10,1);
        uVar11 = NEON_uaddlv(uVar12,1);
        if (1 < (CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff)) goto LAB_0045cb8c;
        if (1 < uVar7) {
          uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
        }
      }
      if (uVar2 <= uVar7) {
        uVar2 = uVar7;
      }
      if (uVar2 < uVar10) goto LAB_0045cba0;
    }
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = uVar10 - 1 & uVar6;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar10 <= uVar6) {
        uVar2 = 0;
        if (uVar10 != 0) {
          uVar2 = uVar6 / uVar10;
        }
        unaff_x24 = uVar6 - uVar2 * uVar10;
      }
    }
  }
  lVar3 = *param_1;
  plVar4 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    lVar5 = *plVar4;
    *plVar4 = (long)plVar9;
    *plVar9 = lVar5;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar4;
    if (*plVar9 != 0) {
      uVar2 = *(ulong *)(*plVar9 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar2 = uVar2 & uVar10 - 1;
      }
      else if (uVar10 <= uVar2) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar2 / uVar10;
        }
        uVar2 = uVar2 - uVar6 * uVar10;
      }
      plVar4 = (long *)(*param_1 + uVar2 * 8);
      goto LAB_0045cc40;
    }
  }
  else {
    *plVar9 = *plVar4;
LAB_0045cc40:
    *plVar4 = (long)plVar9;
  }
  uVar12 = 1;
  param_1[3] = param_1[3] + 1;
LAB_0045cc54:
  auVar14._8_8_ = uVar12;
  auVar14._0_8_ = plVar9;
  return auVar14;
}


// ===== 0045cc6c  FUN_0045cc6c =====

void FUN_0045cc6c(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar2 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    pvVar2 = operator_new(param_2 << 3);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)pvVar2;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar10 = NEON_cnt(param_2,1);
      uVar9 = NEON_uaddlv(uVar10,1);
      uVar6 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
      if (uVar6 < 2) {
        uVar4 = uVar4 & param_2 - 1;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar5;
      if (plVar7 != (long *)0x0) {
        do {
          uVar8 = plVar7[1];
          if (uVar6 < 2) {
            uVar8 = uVar8 & param_2 - 1;
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
              *(long **)(*param_1 + uVar8 * 8) = plVar5;
              uVar4 = uVar8;
            }
            else {
              *plVar5 = *plVar7;
              *plVar7 = **(long **)(*param_1 + uVar8 * 8);
              **(undefined8 **)(*param_1 + uVar8 * 8) = plVar7;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar7 = (long *)*plVar5;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return;
}


// ===== 0045cdc8  FUN_0045cdc8 =====

undefined1  [16] FUN_0045cdc8(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined2 uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  
  uVar2 = *param_2;
  uVar10 = param_1[1];
  uVar6 = ((uVar2 & 0xffffffff) * 8 + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  uVar6 = (uVar2 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  if (uVar10 != 0) {
    uVar12 = NEON_cnt(uVar10,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar7 < 2) {
      unaff_x24 = uVar6 & uVar10 - 1;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar10 <= uVar6) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar6 / uVar10;
        }
        unaff_x24 = uVar6 - uVar8 * uVar10;
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_0045cec0;
        uVar8 = plVar9[1];
        if (uVar8 != uVar6) {
          if (uVar7 < 2) {
            uVar8 = uVar8 & uVar10 - 1;
          }
          else if (uVar10 <= uVar8) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = uVar8 / uVar10;
            }
            uVar8 = uVar8 - uVar1 * uVar10;
          }
          if (uVar8 != unaff_x24) goto LAB_0045cec0;
        }
      } while (plVar9[2] != uVar2);
      uVar12 = 0;
      goto LAB_0045d0a0;
    }
  }
LAB_0045cec0:
  plVar9 = (long *)operator_new(0x38);
  lVar5 = param_1[3];
  lVar3 = *(long *)*param_4;
  *plVar9 = 0;
  fVar13 = *(float *)(param_1 + 4);
  plVar9[5] = (long)FUN_0045d0b8;
  plVar9[6] = (long)&DAT_001f1910;
  plVar9[1] = uVar6;
  plVar9[2] = lVar3;
  if ((uVar10 == 0) || (fVar13 * (float)uVar10 < (float)(lVar5 + 1))) {
    if (uVar10 < 3) {
      uVar2 = 1;
    }
    else {
      uVar2 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar2 = uVar2 | uVar10 << 1;
    uVar7 = (ulong)((float)(lVar5 + 1) / fVar13);
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    if (uVar2 - 1 == 0) {
      uVar2 = 2;
    }
    else if ((uVar2 & uVar2 - 1) != 0) {
      uVar2 = FUN_005204f8(uVar2);
      uVar10 = param_1[1];
    }
    if (uVar10 < uVar2) {
LAB_0045cfec:
      FUN_0045d0c4(param_1,uVar2);
    }
    else if (uVar2 < uVar10) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar10 < 3) {
LAB_0045cfd8:
        uVar7 = FUN_005204f8();
      }
      else {
        uVar12 = NEON_cnt(uVar10,1);
        uVar11 = NEON_uaddlv(uVar12,1);
        if (1 < (CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff)) goto LAB_0045cfd8;
        if (1 < uVar7) {
          uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
        }
      }
      if (uVar2 <= uVar7) {
        uVar2 = uVar7;
      }
      if (uVar2 < uVar10) goto LAB_0045cfec;
    }
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = uVar10 - 1 & uVar6;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar10 <= uVar6) {
        uVar2 = 0;
        if (uVar10 != 0) {
          uVar2 = uVar6 / uVar10;
        }
        unaff_x24 = uVar6 - uVar2 * uVar10;
      }
    }
  }
  lVar3 = *param_1;
  plVar4 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    lVar5 = *plVar4;
    *plVar4 = (long)plVar9;
    *plVar9 = lVar5;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar4;
    if (*plVar9 != 0) {
      uVar2 = *(ulong *)(*plVar9 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar2 = uVar2 & uVar10 - 1;
      }
      else if (uVar10 <= uVar2) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar2 / uVar10;
        }
        uVar2 = uVar2 - uVar6 * uVar10;
      }
      plVar4 = (long *)(*param_1 + uVar2 * 8);
      goto LAB_0045d08c;
    }
  }
  else {
    *plVar9 = *plVar4;
LAB_0045d08c:
    *plVar4 = (long)plVar9;
  }
  uVar12 = 1;
  param_1[3] = param_1[3] + 1;
LAB_0045d0a0:
  auVar14._8_8_ = uVar12;
  auVar14._0_8_ = plVar9;
  return auVar14;
}


// ===== 0045d0b8  FUN_0045d0b8 =====

void FUN_0045d0b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0045d0c4  FUN_0045d0c4 =====

void FUN_0045d0c4(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar2 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    pvVar2 = operator_new(param_2 << 3);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)pvVar2;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar10 = NEON_cnt(param_2,1);
      uVar9 = NEON_uaddlv(uVar10,1);
      uVar6 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
      if (uVar6 < 2) {
        uVar4 = uVar4 & param_2 - 1;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar5;
      if (plVar7 != (long *)0x0) {
        do {
          uVar8 = plVar7[1];
          if (uVar6 < 2) {
            uVar8 = uVar8 & param_2 - 1;
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
              *(long **)(*param_1 + uVar8 * 8) = plVar5;
              uVar4 = uVar8;
            }
            else {
              *plVar5 = *plVar7;
              *plVar7 = **(long **)(*param_1 + uVar8 * 8);
              **(undefined8 **)(*param_1 + uVar8 * 8) = plVar7;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar7 = (long *)*plVar5;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return;
}


// ===== 0045d220  FUN_0045d220 =====

undefined1  [16] FUN_0045d220(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined2 uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  
  uVar2 = *param_2;
  uVar10 = param_1[1];
  uVar6 = ((uVar2 & 0xffffffff) * 8 + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  uVar6 = (uVar2 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  if (uVar10 != 0) {
    uVar12 = NEON_cnt(uVar10,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar7 < 2) {
      unaff_x24 = uVar6 & uVar10 - 1;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar10 <= uVar6) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar6 / uVar10;
        }
        unaff_x24 = uVar6 - uVar8 * uVar10;
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_0045d318;
        uVar8 = plVar9[1];
        if (uVar8 != uVar6) {
          if (uVar7 < 2) {
            uVar8 = uVar8 & uVar10 - 1;
          }
          else if (uVar10 <= uVar8) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = uVar8 / uVar10;
            }
            uVar8 = uVar8 - uVar1 * uVar10;
          }
          if (uVar8 != unaff_x24) goto LAB_0045d318;
        }
      } while (plVar9[2] != uVar2);
      uVar12 = 0;
      goto LAB_0045d4e0;
    }
  }
LAB_0045d318:
  plVar9 = (long *)operator_new(0x18);
  lVar3 = param_1[3];
  lVar5 = *param_3;
  *plVar9 = 0;
  fVar13 = *(float *)(param_1 + 4);
  plVar9[1] = uVar6;
  plVar9[2] = lVar5;
  if ((uVar10 == 0) || (fVar13 * (float)uVar10 < (float)(lVar3 + 1))) {
    if (uVar10 < 3) {
      uVar2 = 1;
    }
    else {
      uVar2 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar2 = uVar2 | uVar10 << 1;
    uVar7 = (ulong)((float)(lVar3 + 1) / fVar13);
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    if (uVar2 - 1 == 0) {
      uVar2 = 2;
    }
    else if ((uVar2 & uVar2 - 1) != 0) {
      uVar2 = FUN_005204f8(uVar2);
      uVar10 = param_1[1];
    }
    if (uVar10 < uVar2) {
LAB_0045d42c:
      FUN_0045d4f8(param_1,uVar2);
    }
    else if (uVar2 < uVar10) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar10 < 3) {
LAB_0045d418:
        uVar7 = FUN_005204f8();
      }
      else {
        uVar12 = NEON_cnt(uVar10,1);
        uVar11 = NEON_uaddlv(uVar12,1);
        if (1 < (CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff)) goto LAB_0045d418;
        if (1 < uVar7) {
          uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
        }
      }
      if (uVar2 <= uVar7) {
        uVar2 = uVar7;
      }
      if (uVar2 < uVar10) goto LAB_0045d42c;
    }
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = uVar10 - 1 & uVar6;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar10 <= uVar6) {
        uVar2 = 0;
        if (uVar10 != 0) {
          uVar2 = uVar6 / uVar10;
        }
        unaff_x24 = uVar6 - uVar2 * uVar10;
      }
    }
  }
  lVar3 = *param_1;
  plVar4 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    lVar5 = *plVar4;
    *plVar4 = (long)plVar9;
    *plVar9 = lVar5;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar4;
    if (*plVar9 != 0) {
      uVar2 = *(ulong *)(*plVar9 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar2 = uVar2 & uVar10 - 1;
      }
      else if (uVar10 <= uVar2) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar2 / uVar10;
        }
        uVar2 = uVar2 - uVar6 * uVar10;
      }
      plVar4 = (long *)(*param_1 + uVar2 * 8);
      goto LAB_0045d4cc;
    }
  }
  else {
    *plVar9 = *plVar4;
LAB_0045d4cc:
    *plVar4 = (long)plVar9;
  }
  uVar12 = 1;
  param_1[3] = param_1[3] + 1;
LAB_0045d4e0:
  auVar14._8_8_ = uVar12;
  auVar14._0_8_ = plVar9;
  return auVar14;
}


// ===== 0045d4f8  FUN_0045d4f8 =====

void FUN_0045d4f8(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar2 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    pvVar2 = operator_new(param_2 << 3);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)pvVar2;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar10 = NEON_cnt(param_2,1);
      uVar9 = NEON_uaddlv(uVar10,1);
      uVar6 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
      if (uVar6 < 2) {
        uVar4 = uVar4 & param_2 - 1;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar5;
      if (plVar7 != (long *)0x0) {
        do {
          uVar8 = plVar7[1];
          if (uVar6 < 2) {
            uVar8 = uVar8 & param_2 - 1;
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
              *(long **)(*param_1 + uVar8 * 8) = plVar5;
              uVar4 = uVar8;
            }
            else {
              *plVar5 = *plVar7;
              *plVar7 = **(long **)(*param_1 + uVar8 * 8);
              **(undefined8 **)(*param_1 + uVar8 * 8) = plVar7;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar7 = (long *)*plVar5;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return;
}


// ===== 0045d654  FUN_0045d654 =====

void FUN_0045d654(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  void *local_40 [3];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar5 = *param_2;
    uVar12 = NEON_cnt(uVar4,1);
    uVar6 = ((uVar5 & 0xffffffff) * 8 + 8 ^ uVar5 >> 0x20) * -0x622015f714c7d297;
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = (uVar5 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    if (uVar7 < 2) {
      uVar8 = uVar6 & uVar4 - 1;
    }
    else {
      uVar8 = uVar6;
      if (uVar4 <= uVar6) {
        uVar8 = 0;
        if (uVar4 != 0) {
          uVar8 = uVar6 / uVar4;
        }
        uVar8 = uVar6 - uVar8 * uVar4;
      }
    }
    plVar9 = *(long **)(*param_1 + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar6) {
          if (plVar9[2] == uVar5) {
            FUN_0045d798(local_40);
            pvVar3 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              operator_delete(pvVar3);
            }
            uVar12 = 1;
            goto LAB_0045d754;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar10 = uVar10 & uVar4 - 1;
          }
          else if (uVar4 <= uVar10) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar10 / uVar4;
            }
            uVar10 = uVar10 - uVar1 * uVar4;
          }
          if (uVar10 != uVar8) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  uVar12 = 0;
LAB_0045d754:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar12);
}


// ===== 0045d798  FUN_0045d798 =====

void FUN_0045d798(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar5 = param_2[1];
  uVar3 = param_3[1];
  uVar11 = NEON_cnt(uVar5,1);
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  if (uVar7 < 2) {
    uVar3 = uVar5 - 1 & uVar3;
  }
  else if (uVar5 <= uVar3) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar3 / uVar5;
    }
    uVar3 = uVar3 - uVar9 * uVar5;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_3);
  if (plVar6 != param_2 + 2) {
    uVar9 = plVar6[1];
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_0045d864;
  }
  if (*param_3 != 0) {
    uVar9 = *(ulong *)(*param_3 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_0045d864;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_0045d864:
  lVar8 = *param_3;
  if (lVar8 != 0) {
    uVar9 = *(ulong *)(lVar8 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar7 * uVar5;
    }
    if (uVar9 != uVar3) {
      *(long **)(*param_2 + uVar9 * 8) = plVar6;
      lVar8 = *param_3;
    }
  }
  lVar4 = param_2[3];
  *plVar6 = lVar8;
  *param_3 = 0;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  param_2[3] = lVar4 + -1;
  return;
}


// ===== 0045d8cc  FUN_0045d8cc =====

void FUN_0045d8cc(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  void *local_40 [2];
  char local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar6 = *param_2;
    uVar13 = NEON_cnt(uVar4,1);
    uVar7 = ((uVar6 & 0xffffffff) * 8 + 8 ^ uVar6 >> 0x20) * -0x622015f714c7d297;
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar7 = (uVar6 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
    uVar8 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    if (uVar8 < 2) {
      uVar9 = uVar7 & uVar4 - 1;
    }
    else {
      uVar9 = uVar7;
      if (uVar4 <= uVar7) {
        uVar9 = 0;
        if (uVar4 != 0) {
          uVar9 = uVar7 / uVar4;
        }
        uVar9 = uVar7 - uVar9 * uVar4;
      }
    }
    plVar10 = *(long **)(*param_1 + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      do {
        uVar11 = plVar10[1];
        if (uVar11 == uVar7) {
          if (plVar10[2] == uVar6) {
            FUN_0045da30(local_40);
            pvVar3 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              if ((local_30 != '\0') &&
                 (pcVar5 = *(code **)(*(long *)((long)pvVar3 + 0x30) + 8), pcVar5 != (code *)0x0)) {
                (*pcVar5)(*(undefined8 *)((long)pvVar3 + 0x18));
              }
              operator_delete(pvVar3);
            }
            uVar13 = 1;
            goto LAB_0045d9cc;
          }
        }
        else {
          if (uVar8 < 2) {
            uVar11 = uVar11 & uVar4 - 1;
          }
          else if (uVar4 <= uVar11) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar11 / uVar4;
            }
            uVar11 = uVar11 - uVar1 * uVar4;
          }
          if (uVar11 != uVar9) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  uVar13 = 0;
LAB_0045d9cc:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar13);
}


// ===== 0045da30  FUN_0045da30 =====

void FUN_0045da30(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar5 = param_2[1];
  uVar3 = param_3[1];
  uVar11 = NEON_cnt(uVar5,1);
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  if (uVar7 < 2) {
    uVar3 = uVar5 - 1 & uVar3;
  }
  else if (uVar5 <= uVar3) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar3 / uVar5;
    }
    uVar3 = uVar3 - uVar9 * uVar5;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_3);
  if (plVar6 != param_2 + 2) {
    uVar9 = plVar6[1];
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_0045dafc;
  }
  if (*param_3 != 0) {
    uVar9 = *(ulong *)(*param_3 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_0045dafc;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_0045dafc:
  lVar8 = *param_3;
  if (lVar8 != 0) {
    uVar9 = *(ulong *)(lVar8 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar7 * uVar5;
    }
    if (uVar9 != uVar3) {
      *(long **)(*param_2 + uVar9 * 8) = plVar6;
      lVar8 = *param_3;
    }
  }
  lVar4 = param_2[3];
  *plVar6 = lVar8;
  *param_3 = 0;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  param_2[3] = lVar4 + -1;
  return;
}


// ===== 0045db64  FUN_0045db64 =====

void FUN_0045db64(long *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0x16c,
               "__root != nullptr","Root node should not be null");
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0x16d,
               "__z != nullptr","The node to remove should not be null");
  }
  plVar5 = (long *)*param_2;
  plVar7 = param_2;
  if (plVar5 == (long *)0x0) {
LAB_0045db94:
    plVar5 = (long *)plVar7[1];
    if (plVar5 == (long *)0x0) {
      bVar2 = true;
      goto LAB_0045dbb4;
    }
  }
  else {
    plVar4 = (long *)param_2[1];
    if ((long *)param_2[1] != (long *)0x0) {
      do {
        plVar7 = plVar4;
        plVar4 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
      goto LAB_0045db94;
    }
  }
  bVar2 = false;
  plVar5[2] = plVar7[2];
LAB_0045dbb4:
  puVar8 = (undefined8 *)plVar7[2];
  plVar4 = (long *)*puVar8;
  if (plVar4 == plVar7) {
    *puVar8 = plVar5;
    if (plVar7 == param_1) {
      plVar4 = (long *)0x0;
      param_1 = plVar5;
    }
    else {
      plVar4 = (long *)puVar8[1];
    }
  }
  else {
    puVar8[1] = plVar5;
  }
  lVar6 = plVar7[3];
  plVar3 = param_1;
  if (plVar7 != param_2) {
    lVar10 = param_2[2];
    plVar7[2] = lVar10;
    *(long **)(lVar10 + (ulong)(*(long **)param_2[2] != param_2) * 8) = plVar7;
    lVar10 = *param_2;
    lVar1 = param_2[1];
    *(long **)(lVar10 + 0x10) = plVar7;
    *plVar7 = lVar10;
    plVar7[1] = lVar1;
    if (lVar1 != 0) {
      *(long **)(lVar1 + 0x10) = plVar7;
    }
    plVar3 = plVar7;
    if (param_1 != param_2) {
      plVar3 = param_1;
    }
    *(char *)(plVar7 + 3) = (char)param_2[3];
  }
  if (((char)lVar6 != '\0') && (plVar3 != (long *)0x0)) {
    if (bVar2) {
      while( true ) {
        plVar7 = (long *)plVar4[2];
        if ((long *)*plVar7 == plVar4) break;
        if ((char)plVar4[3] != '\0') {
          plVar5 = (long *)*plVar4;
          plVar7 = plVar3;
          if (plVar5 == (long *)0x0) goto LAB_0045dcf4;
LAB_0045dcec:
          plVar3 = plVar7;
          if ((char)plVar5[3] != '\0') goto LAB_0045dcf4;
          plVar7 = (long *)plVar4[1];
          if (plVar7 != (long *)0x0) goto LAB_0045ddd0;
LAB_0045ddd8:
          lVar6 = plVar5[1];
          *(undefined1 *)(plVar5 + 3) = 1;
          *(undefined1 *)(plVar4 + 3) = 0;
          *plVar4 = lVar6;
          if (lVar6 != 0) {
            *(long **)(lVar6 + 0x10) = plVar4;
          }
          plVar5[2] = plVar4[2];
          ((undefined8 *)plVar4[2])[*(long **)plVar4[2] != plVar4] = plVar5;
          plVar5[1] = (long)plVar4;
          plVar4[2] = (long)plVar5;
          plVar3 = plVar5;
          plVar7 = plVar4;
LAB_0045de24:
          plVar5 = (long *)plVar3[2];
          plVar4 = (long *)plVar5[1];
          *(char *)(plVar3 + 3) = (char)plVar5[3];
          *(undefined1 *)(plVar5 + 3) = 1;
          *(undefined1 *)(plVar7 + 3) = 1;
          if (plVar4 == (long *)0x0) {
LAB_0045df80:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xf8,
                       "__x->__right_ != nullptr","node should have a right child");
          }
          lVar6 = *plVar4;
          plVar5[1] = lVar6;
          if (lVar6 != 0) {
            *(long **)(lVar6 + 0x10) = plVar5;
          }
          plVar4[2] = plVar5[2];
          ((undefined8 *)plVar5[2])[*(long **)plVar5[2] != plVar5] = plVar4;
          *plVar4 = (long)plVar5;
          goto LAB_0045df24;
        }
        plVar5 = (long *)plVar7[1];
        *(undefined1 *)(plVar4 + 3) = 1;
        *(undefined1 *)(plVar7 + 3) = 0;
        if (plVar5 == (long *)0x0) goto LAB_0045df80;
        lVar6 = *plVar5;
        plVar7[1] = lVar6;
        if (lVar6 != 0) {
          *(long **)(lVar6 + 0x10) = plVar7;
        }
        plVar5[2] = plVar7[2];
        ((undefined8 *)plVar7[2])[*(long **)plVar7[2] != plVar7] = plVar5;
        *plVar5 = (long)plVar7;
        plVar9 = (long *)*plVar4;
        plVar7[2] = (long)plVar5;
        plVar7 = plVar4;
        if (plVar3 != plVar9) {
          plVar7 = plVar3;
        }
        plVar4 = (long *)plVar9[1];
        plVar5 = (long *)*plVar4;
        plVar3 = plVar7;
        if (plVar5 != (long *)0x0) goto LAB_0045dcec;
LAB_0045dcf4:
        plVar7 = (long *)plVar4[1];
        if ((plVar7 != (long *)0x0) && ((char)plVar7[3] == '\0')) {
LAB_0045ddd0:
          plVar3 = plVar4;
          if ((char)plVar7[3] != '\0') goto LAB_0045ddd8;
          goto LAB_0045de24;
        }
        plVar5 = (long *)plVar4[2];
        *(undefined1 *)(plVar4 + 3) = 0;
        plVar7 = plVar3;
        if ((plVar5 == plVar3) || (plVar7 = plVar5, (char)plVar5[3] == '\0')) goto LAB_0045ddb8;
LAB_0045dc48:
        plVar4 = (long *)((undefined8 *)plVar7[2])[*(long **)plVar7[2] == plVar7];
      }
      if ((char)plVar4[3] == '\0') {
        lVar6 = plVar4[1];
        *(undefined1 *)(plVar4 + 3) = 1;
        *(undefined1 *)(plVar7 + 3) = 0;
        *plVar7 = lVar6;
        if (lVar6 != 0) {
          *(long **)(lVar6 + 0x10) = plVar7;
        }
        plVar4[2] = plVar7[2];
        plVar5 = plVar4;
        if (plVar3 != plVar7) {
          plVar5 = plVar3;
        }
        ((undefined8 *)plVar7[2])[*(long **)plVar7[2] != plVar7] = plVar4;
        plVar4[1] = (long)plVar7;
        plVar7[2] = (long)plVar4;
        plVar4 = (long *)*plVar7;
        plVar7 = (long *)*plVar4;
        plVar3 = plVar5;
        if (plVar7 == (long *)0x0) goto LAB_0045dd78;
LAB_0045dd70:
        plVar3 = plVar5;
        plVar9 = plVar4;
        if ((char)plVar7[3] != '\0') goto LAB_0045dd78;
      }
      else {
        plVar7 = (long *)*plVar4;
        plVar5 = plVar3;
        if (plVar7 != (long *)0x0) goto LAB_0045dd70;
LAB_0045dd78:
        plVar9 = (long *)plVar4[1];
        if ((plVar9 == (long *)0x0) || ((char)plVar9[3] != '\0')) {
          plVar7 = (long *)plVar4[2];
          *(undefined1 *)(plVar4 + 3) = 0;
          if (((char)plVar7[3] != '\0') && (plVar7 != plVar3)) goto LAB_0045dc48;
LAB_0045ddb8:
          *(undefined1 *)(plVar7 + 3) = 1;
          return;
        }
        if (plVar7 != (long *)0x0) {
          plVar9 = plVar4;
          if ((char)plVar7[3] == '\0') goto LAB_0045ded4;
          plVar9 = (long *)plVar4[1];
        }
        lVar6 = *plVar9;
        *(undefined1 *)(plVar9 + 3) = 1;
        *(undefined1 *)(plVar4 + 3) = 0;
        plVar4[1] = lVar6;
        if (lVar6 != 0) {
          *(long **)(lVar6 + 0x10) = plVar4;
        }
        plVar9[2] = plVar4[2];
        ((undefined8 *)plVar4[2])[*(long **)plVar4[2] != plVar4] = plVar9;
        *plVar9 = (long)plVar4;
        plVar4[2] = (long)plVar9;
        plVar7 = plVar4;
      }
LAB_0045ded4:
      plVar5 = (long *)plVar9[2];
      plVar4 = (long *)*plVar5;
      *(char *)(plVar9 + 3) = (char)plVar5[3];
      *(undefined1 *)(plVar5 + 3) = 1;
      *(undefined1 *)(plVar7 + 3) = 1;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0x10d,
                   "__x->__left_ != nullptr","node should have a left child");
      }
      lVar6 = plVar4[1];
      *plVar5 = lVar6;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 0x10) = plVar5;
      }
      plVar4[2] = plVar5[2];
      ((undefined8 *)plVar5[2])[*(long **)plVar5[2] != plVar5] = plVar4;
      plVar4[1] = (long)plVar5;
LAB_0045df24:
      plVar5[2] = (long)plVar4;
      return;
    }
    *(undefined1 *)(plVar5 + 3) = 1;
  }
  return;
}


// ===== 0045dfd0  FUN_0045dfd0 =====

void FUN_0045dfd0(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  void *local_40 [3];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar5 = *param_2;
    uVar12 = NEON_cnt(uVar4,1);
    uVar6 = ((uVar5 & 0xffffffff) * 8 + 8 ^ uVar5 >> 0x20) * -0x622015f714c7d297;
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = (uVar5 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    if (uVar7 < 2) {
      uVar8 = uVar6 & uVar4 - 1;
    }
    else {
      uVar8 = uVar6;
      if (uVar4 <= uVar6) {
        uVar8 = 0;
        if (uVar4 != 0) {
          uVar8 = uVar6 / uVar4;
        }
        uVar8 = uVar6 - uVar8 * uVar4;
      }
    }
    plVar9 = *(long **)(*param_1 + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar6) {
          if (plVar9[2] == uVar5) {
            FUN_0045e114(local_40);
            pvVar3 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              operator_delete(pvVar3);
            }
            uVar12 = 1;
            goto LAB_0045e0d0;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar10 = uVar10 & uVar4 - 1;
          }
          else if (uVar4 <= uVar10) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar10 / uVar4;
            }
            uVar10 = uVar10 - uVar1 * uVar4;
          }
          if (uVar10 != uVar8) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  uVar12 = 0;
LAB_0045e0d0:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar12);
}


// ===== 0045e114  FUN_0045e114 =====

void FUN_0045e114(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar5 = param_2[1];
  uVar3 = param_3[1];
  uVar11 = NEON_cnt(uVar5,1);
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  if (uVar7 < 2) {
    uVar3 = uVar5 - 1 & uVar3;
  }
  else if (uVar5 <= uVar3) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar3 / uVar5;
    }
    uVar3 = uVar3 - uVar9 * uVar5;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_3);
  if (plVar6 != param_2 + 2) {
    uVar9 = plVar6[1];
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_0045e1e0;
  }
  if (*param_3 != 0) {
    uVar9 = *(ulong *)(*param_3 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_0045e1e0;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_0045e1e0:
  lVar8 = *param_3;
  if (lVar8 != 0) {
    uVar9 = *(ulong *)(lVar8 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar7 * uVar5;
    }
    if (uVar9 != uVar3) {
      *(long **)(*param_2 + uVar9 * 8) = plVar6;
      lVar8 = *param_3;
    }
  }
  lVar4 = param_2[3];
  *plVar6 = lVar8;
  *param_3 = 0;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  param_2[3] = lVar4 + -1;
  return;
}


// ===== 0045e248  FUN_0045e248 =====

undefined1  [16] FUN_0045e248(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  plVar4 = (long *)operator_new(200);
  uVar5 = *param_2;
  plVar1 = plVar4 + 3;
  *plVar4 = (long)&PTR_FUN_00d1c800;
  plVar7 = plVar4 + 1;
  *plVar7 = 0;
  plVar8 = plVar4 + 2;
  *plVar8 = 0;
  FUN_004af840(plVar1,uVar5);
  if (plVar4[5] == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4[4] = (long)plVar1;
    plVar4[5] = (long)plVar4;
  }
  else {
    if (*(long *)(plVar4[5] + 8) != -1) goto LAB_0045e324;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4[4] = (long)plVar1;
    plVar4[5] = (long)plVar4;
    FUN_005466cc();
  }
  do {
    lVar6 = *plVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_005466cc(plVar4);
  }
LAB_0045e324:
  auVar9._8_8_ = plVar4;
  auVar9._0_8_ = plVar1;
  return auVar9;
}


// ===== 0045e33c  FUN_0045e33c =====

void FUN_0045e33c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1c800;
  FUN_005466c0();
  return;
}


// ===== 0045e34c  FUN_0045e34c =====

void FUN_0045e34c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1c800;
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 0045e37c  FUN_0045e37c =====

void FUN_0045e37c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0045e384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0045e388  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0045e38c  FUN_0045e38c =====

undefined1  [16] FUN_0045e38c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  plVar4 = (long *)operator_new(0x98);
  uStack_78 = param_3[1];
  local_80 = *param_3;
  uVar5 = *param_2;
  plVar7 = plVar4 + 3;
  *plVar4 = (long)&PTR_FUN_00d1c838;
  local_70 = param_3[2];
  local_68 = param_3[3];
  plVar8 = plVar4 + 1;
  *plVar8 = 0;
  plVar9 = plVar4 + 2;
  *plVar9 = 0;
  if (*(long *)(local_68 + 8) != 0) {
    param_3[2] = FUN_0041a918;
    param_3[3] = &DAT_001f1910;
  }
  FUN_004b0198(plVar7,uVar5,&local_80);
  if (*(code **)(local_68 + 8) != (code *)0x0) {
    (**(code **)(local_68 + 8))(local_80);
  }
  if (plVar4[5] == 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = *plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4[4] = (long)plVar7;
    plVar4[5] = (long)plVar4;
  }
  else {
    if (*(long *)(plVar4[5] + 8) != -1) goto LAB_0045e4c8;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = *plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4[4] = (long)plVar7;
    plVar4[5] = (long)plVar4;
    FUN_005466cc();
  }
  do {
    lVar6 = *plVar8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_005466cc(plVar4);
  }
LAB_0045e4c8:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    auVar10._8_8_ = plVar4;
    auVar10._0_8_ = plVar7;
    return auVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0045e500  FUN_0045e500 =====

void FUN_0045e500(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1c838;
  FUN_005466c0();
  return;
}


// ===== 0045e510  FUN_0045e510 =====

void FUN_0045e510(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1c838;
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 0045e540  FUN_0045e540 =====

void FUN_0045e540(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0045e548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0045e54c  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0045e550  FUN_0045e550 =====

undefined1  [16] FUN_0045e550(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined2 uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  
  uVar2 = *param_2;
  uVar10 = param_1[1];
  uVar6 = ((uVar2 & 0xffffffff) * 8 + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  uVar6 = (uVar2 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  if (uVar10 != 0) {
    uVar12 = NEON_cnt(uVar10,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar7 < 2) {
      unaff_x24 = uVar6 & uVar10 - 1;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar10 <= uVar6) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar6 / uVar10;
        }
        unaff_x24 = uVar6 - uVar8 * uVar10;
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_0045e648;
        uVar8 = plVar9[1];
        if (uVar8 != uVar6) {
          if (uVar7 < 2) {
            uVar8 = uVar8 & uVar10 - 1;
          }
          else if (uVar10 <= uVar8) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = uVar8 / uVar10;
            }
            uVar8 = uVar8 - uVar1 * uVar10;
          }
          if (uVar8 != unaff_x24) goto LAB_0045e648;
        }
      } while (plVar9[2] != uVar2);
      uVar12 = 0;
      goto LAB_0045e810;
    }
  }
LAB_0045e648:
  plVar9 = (long *)operator_new(0x18);
  lVar3 = param_1[3];
  lVar5 = *param_3;
  *plVar9 = 0;
  fVar13 = *(float *)(param_1 + 4);
  plVar9[1] = uVar6;
  plVar9[2] = lVar5;
  if ((uVar10 == 0) || (fVar13 * (float)uVar10 < (float)(lVar3 + 1))) {
    if (uVar10 < 3) {
      uVar2 = 1;
    }
    else {
      uVar2 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar2 = uVar2 | uVar10 << 1;
    uVar7 = (ulong)((float)(lVar3 + 1) / fVar13);
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    if (uVar2 - 1 == 0) {
      uVar2 = 2;
    }
    else if ((uVar2 & uVar2 - 1) != 0) {
      uVar2 = FUN_005204f8(uVar2);
      uVar10 = param_1[1];
    }
    if (uVar10 < uVar2) {
LAB_0045e75c:
      FUN_0045e828(param_1,uVar2);
    }
    else if (uVar2 < uVar10) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar10 < 3) {
LAB_0045e748:
        uVar7 = FUN_005204f8();
      }
      else {
        uVar12 = NEON_cnt(uVar10,1);
        uVar11 = NEON_uaddlv(uVar12,1);
        if (1 < (CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff)) goto LAB_0045e748;
        if (1 < uVar7) {
          uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
        }
      }
      if (uVar2 <= uVar7) {
        uVar2 = uVar7;
      }
      if (uVar2 < uVar10) goto LAB_0045e75c;
    }
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = uVar10 - 1 & uVar6;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar10 <= uVar6) {
        uVar2 = 0;
        if (uVar10 != 0) {
          uVar2 = uVar6 / uVar10;
        }
        unaff_x24 = uVar6 - uVar2 * uVar10;
      }
    }
  }
  lVar3 = *param_1;
  plVar4 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    lVar5 = *plVar4;
    *plVar4 = (long)plVar9;
    *plVar9 = lVar5;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar4;
    if (*plVar9 != 0) {
      uVar2 = *(ulong *)(*plVar9 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar2 = uVar2 & uVar10 - 1;
      }
      else if (uVar10 <= uVar2) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar2 / uVar10;
        }
        uVar2 = uVar2 - uVar6 * uVar10;
      }
      plVar4 = (long *)(*param_1 + uVar2 * 8);
      goto LAB_0045e7fc;
    }
  }
  else {
    *plVar9 = *plVar4;
LAB_0045e7fc:
    *plVar4 = (long)plVar9;
  }
  uVar12 = 1;
  param_1[3] = param_1[3] + 1;
LAB_0045e810:
  auVar14._8_8_ = uVar12;
  auVar14._0_8_ = plVar9;
  return auVar14;
}


// ===== 0045e828  FUN_0045e828 =====

void FUN_0045e828(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar2 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    pvVar2 = operator_new(param_2 << 3);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)pvVar2;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar10 = NEON_cnt(param_2,1);
      uVar9 = NEON_uaddlv(uVar10,1);
      uVar6 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
      if (uVar6 < 2) {
        uVar4 = uVar4 & param_2 - 1;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar5;
      if (plVar7 != (long *)0x0) {
        do {
          uVar8 = plVar7[1];
          if (uVar6 < 2) {
            uVar8 = uVar8 & param_2 - 1;
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
              *(long **)(*param_1 + uVar8 * 8) = plVar5;
              uVar4 = uVar8;
            }
            else {
              *plVar5 = *plVar7;
              *plVar7 = **(long **)(*param_1 + uVar8 * 8);
              **(undefined8 **)(*param_1 + uVar8 * 8) = plVar7;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar7 = (long *)*plVar5;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return;
}


// ===== 0045e984  FUN_0045e984 =====

void FUN_0045e984(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  void *local_40 [3];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar5 = *param_2;
    uVar12 = NEON_cnt(uVar4,1);
    uVar6 = ((uVar5 & 0xffffffff) * 8 + 8 ^ uVar5 >> 0x20) * -0x622015f714c7d297;
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = (uVar5 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    if (uVar7 < 2) {
      uVar8 = uVar6 & uVar4 - 1;
    }
    else {
      uVar8 = uVar6;
      if (uVar4 <= uVar6) {
        uVar8 = 0;
        if (uVar4 != 0) {
          uVar8 = uVar6 / uVar4;
        }
        uVar8 = uVar6 - uVar8 * uVar4;
      }
    }
    plVar9 = *(long **)(*param_1 + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar6) {
          if (plVar9[2] == uVar5) {
            FUN_0045eac8(local_40);
            pvVar3 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              operator_delete(pvVar3);
            }
            uVar12 = 1;
            goto LAB_0045ea84;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar10 = uVar10 & uVar4 - 1;
          }
          else if (uVar4 <= uVar10) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar10 / uVar4;
            }
            uVar10 = uVar10 - uVar1 * uVar4;
          }
          if (uVar10 != uVar8) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  uVar12 = 0;
LAB_0045ea84:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar12);
}


// ===== 0045eac8  FUN_0045eac8 =====

void FUN_0045eac8(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar5 = param_2[1];
  uVar3 = param_3[1];
  uVar11 = NEON_cnt(uVar5,1);
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  if (uVar7 < 2) {
    uVar3 = uVar5 - 1 & uVar3;
  }
  else if (uVar5 <= uVar3) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar3 / uVar5;
    }
    uVar3 = uVar3 - uVar9 * uVar5;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_3);
  if (plVar6 != param_2 + 2) {
    uVar9 = plVar6[1];
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_0045eb94;
  }
  if (*param_3 != 0) {
    uVar9 = *(ulong *)(*param_3 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_0045eb94;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_0045eb94:
  lVar8 = *param_3;
  if (lVar8 != 0) {
    uVar9 = *(ulong *)(lVar8 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar7 * uVar5;
    }
    if (uVar9 != uVar3) {
      *(long **)(*param_2 + uVar9 * 8) = plVar6;
      lVar8 = *param_3;
    }
  }
  lVar4 = param_2[3];
  *plVar6 = lVar8;
  *param_3 = 0;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  param_2[3] = lVar4 + -1;
  return;
}


// ===== 0045ebfc  FUN_0045ebfc =====

undefined1  [16] FUN_0045ebfc(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined2 uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  
  uVar2 = *param_2;
  uVar10 = param_1[1];
  uVar6 = ((uVar2 & 0xffffffff) * 8 + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  uVar6 = (uVar2 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  if (uVar10 != 0) {
    uVar12 = NEON_cnt(uVar10,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar7 < 2) {
      unaff_x24 = uVar6 & uVar10 - 1;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar10 <= uVar6) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar6 / uVar10;
        }
        unaff_x24 = uVar6 - uVar8 * uVar10;
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_0045ecf4;
        uVar8 = plVar9[1];
        if (uVar8 != uVar6) {
          if (uVar7 < 2) {
            uVar8 = uVar8 & uVar10 - 1;
          }
          else if (uVar10 <= uVar8) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = uVar8 / uVar10;
            }
            uVar8 = uVar8 - uVar1 * uVar10;
          }
          if (uVar8 != unaff_x24) goto LAB_0045ecf4;
        }
      } while (plVar9[2] != uVar2);
      uVar12 = 0;
      goto LAB_0045eebc;
    }
  }
LAB_0045ecf4:
  plVar9 = (long *)operator_new(0x18);
  lVar3 = param_1[3];
  lVar5 = *param_3;
  *plVar9 = 0;
  fVar13 = *(float *)(param_1 + 4);
  plVar9[1] = uVar6;
  plVar9[2] = lVar5;
  if ((uVar10 == 0) || (fVar13 * (float)uVar10 < (float)(lVar3 + 1))) {
    if (uVar10 < 3) {
      uVar2 = 1;
    }
    else {
      uVar2 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar2 = uVar2 | uVar10 << 1;
    uVar7 = (ulong)((float)(lVar3 + 1) / fVar13);
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    if (uVar2 - 1 == 0) {
      uVar2 = 2;
    }
    else if ((uVar2 & uVar2 - 1) != 0) {
      uVar2 = FUN_005204f8(uVar2);
      uVar10 = param_1[1];
    }
    if (uVar10 < uVar2) {
LAB_0045ee08:
      FUN_0045eed4(param_1,uVar2);
    }
    else if (uVar2 < uVar10) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar10 < 3) {
LAB_0045edf4:
        uVar7 = FUN_005204f8();
      }
      else {
        uVar12 = NEON_cnt(uVar10,1);
        uVar11 = NEON_uaddlv(uVar12,1);
        if (1 < (CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff)) goto LAB_0045edf4;
        if (1 < uVar7) {
          uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
        }
      }
      if (uVar2 <= uVar7) {
        uVar2 = uVar7;
      }
      if (uVar2 < uVar10) goto LAB_0045ee08;
    }
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = uVar10 - 1 & uVar6;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar10 <= uVar6) {
        uVar2 = 0;
        if (uVar10 != 0) {
          uVar2 = uVar6 / uVar10;
        }
        unaff_x24 = uVar6 - uVar2 * uVar10;
      }
    }
  }
  lVar3 = *param_1;
  plVar4 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    lVar5 = *plVar4;
    *plVar4 = (long)plVar9;
    *plVar9 = lVar5;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar4;
    if (*plVar9 != 0) {
      uVar2 = *(ulong *)(*plVar9 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar2 = uVar2 & uVar10 - 1;
      }
      else if (uVar10 <= uVar2) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar2 / uVar10;
        }
        uVar2 = uVar2 - uVar6 * uVar10;
      }
      plVar4 = (long *)(*param_1 + uVar2 * 8);
      goto LAB_0045eea8;
    }
  }
  else {
    *plVar9 = *plVar4;
LAB_0045eea8:
    *plVar4 = (long)plVar9;
  }
  uVar12 = 1;
  param_1[3] = param_1[3] + 1;
LAB_0045eebc:
  auVar14._8_8_ = uVar12;
  auVar14._0_8_ = plVar9;
  return auVar14;
}


// ===== 0045eed4  FUN_0045eed4 =====

void FUN_0045eed4(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar2 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    pvVar2 = operator_new(param_2 << 3);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)pvVar2;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar10 = NEON_cnt(param_2,1);
      uVar9 = NEON_uaddlv(uVar10,1);
      uVar6 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
      if (uVar6 < 2) {
        uVar4 = uVar4 & param_2 - 1;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar5;
      if (plVar7 != (long *)0x0) {
        do {
          uVar8 = plVar7[1];
          if (uVar6 < 2) {
            uVar8 = uVar8 & param_2 - 1;
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
              *(long **)(*param_1 + uVar8 * 8) = plVar5;
              uVar4 = uVar8;
            }
            else {
              *plVar5 = *plVar7;
              *plVar7 = **(long **)(*param_1 + uVar8 * 8);
              **(undefined8 **)(*param_1 + uVar8 * 8) = plVar7;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar7 = (long *)*plVar5;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return;
}


// ===== 0045f030  FUN_0045f030 =====

void FUN_0045f030(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  void *local_40 [3];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar5 = *param_2;
    uVar12 = NEON_cnt(uVar4,1);
    uVar6 = ((uVar5 & 0xffffffff) * 8 + 8 ^ uVar5 >> 0x20) * -0x622015f714c7d297;
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = (uVar5 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    if (uVar7 < 2) {
      uVar8 = uVar6 & uVar4 - 1;
    }
    else {
      uVar8 = uVar6;
      if (uVar4 <= uVar6) {
        uVar8 = 0;
        if (uVar4 != 0) {
          uVar8 = uVar6 / uVar4;
        }
        uVar8 = uVar6 - uVar8 * uVar4;
      }
    }
    plVar9 = *(long **)(*param_1 + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar6) {
          if (plVar9[2] == uVar5) {
            FUN_0045f174(local_40);
            pvVar3 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              operator_delete(pvVar3);
            }
            uVar12 = 1;
            goto LAB_0045f130;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar10 = uVar10 & uVar4 - 1;
          }
          else if (uVar4 <= uVar10) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar10 / uVar4;
            }
            uVar10 = uVar10 - uVar1 * uVar4;
          }
          if (uVar10 != uVar8) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  uVar12 = 0;
LAB_0045f130:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar12);
}


// ===== 0045f174  FUN_0045f174 =====

void FUN_0045f174(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar5 = param_2[1];
  uVar3 = param_3[1];
  uVar11 = NEON_cnt(uVar5,1);
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  if (uVar7 < 2) {
    uVar3 = uVar5 - 1 & uVar3;
  }
  else if (uVar5 <= uVar3) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar3 / uVar5;
    }
    uVar3 = uVar3 - uVar9 * uVar5;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_3);
  if (plVar6 != param_2 + 2) {
    uVar9 = plVar6[1];
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_0045f240;
  }
  if (*param_3 != 0) {
    uVar9 = *(ulong *)(*param_3 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_0045f240;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_0045f240:
  lVar8 = *param_3;
  if (lVar8 != 0) {
    uVar9 = *(ulong *)(lVar8 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar7 * uVar5;
    }
    if (uVar9 != uVar3) {
      *(long **)(*param_2 + uVar9 * 8) = plVar6;
      lVar8 = *param_3;
    }
  }
  lVar4 = param_2[3];
  *plVar6 = lVar8;
  *param_3 = 0;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  param_2[3] = lVar4 + -1;
  return;
}


// ===== 0045f2a8  FUN_0045f2a8 =====

/* WARNING: Removing unreachable block (ram,0x0045f3d0) */
/* WARNING: Removing unreachable block (ram,0x0045f3e8) */
/* WARNING: Removing unreachable block (ram,0x0045f4e8) */
/* WARNING: Removing unreachable block (ram,0x0045f3f0) */
/* WARNING: Removing unreachable block (ram,0x0045f3dc) */
/* WARNING: Removing unreachable block (ram,0x0045f40c) */
/* WARNING: Removing unreachable block (ram,0x0045f418) */
/* WARNING: Removing unreachable block (ram,0x0045f424) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0045f2a8(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 ****__src;
  undefined8 ****__dest;
  undefined1 auVar4 [16];
  undefined1 auStack_b8 [8];
  char *local_b0;
  char **ppcStack_a8;
  undefined8 ***local_a0;
  ulong uStack_98;
  ulong local_90;
  char **local_88;
  int local_7c;
  undefined8 ***local_78;
  ulong uStack_70;
  undefined8 local_68;
  char *local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_7c = (int)param_1;
  if ((local_7c != 0) && (local_7c != 1)) {
    uVar3 = FUN_004249b0();
    if ((uVar3 & 1) == 0) {
      local_50 = auStack_b8;
      local_a0 = (undefined8 ***)0x0;
      uStack_98 = 0;
      local_60 = "../../discord_native_lib/src/media/frame_cryptors.cpp";
      uStack_58 = 0x83;
      ppcStack_a8 = &local_60;
      local_90 = 0;
      local_b0 = "Unsupported media type: ";
      auVar4 = FUN_0045fb70(&local_a0,&local_7c);
      uVar3 = auVar4._8_8_;
      __src = auVar4._0_8_;
      if ((__src == (undefined8 ****)0x0) && (uVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string",0x37e,
                   "__n == 0 || __s != nullptr","basic_string(const char*, n) detected nullptr");
      }
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (uVar3 < 0x17) {
        __dest = &local_78;
        local_68 = CONCAT17(auVar4[8],(undefined7)local_68);
      }
      else {
        uVar1 = (uVar3 | 0xf) + 1;
        __dest = (undefined8 ****)operator_new(uVar1);
        local_68 = uVar1 | 0x8000000000000000;
        local_78 = __dest;
        uStack_70 = uVar3;
      }
      if ((__dest <= __src) && (__src < (undefined8 ****)((long)__dest + uVar3))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      if (uVar3 != 0) {
        memmove(__dest,__src,uVar3);
      }
      *(undefined1 *)((long)__dest + uVar3) = 0;
      if ((long)local_90 < 0) {
        operator_delete(local_a0);
      }
      local_88 = &local_b0;
      uStack_98 = uStack_70;
      local_a0 = local_78;
      local_90 = local_68;
      FUN_00623bb0(&DAT_001f6510,*ppcStack_a8,ppcStack_a8[1],local_b0,&local_a0);
      if ((long)local_90 < 0) {
        operator_delete(local_a0);
      }
    }
    param_1 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0045f4f0  FUN_0045f4f0 =====

void FUN_0045f4f0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *local_48 [2];
  code *local_38;
  undefined *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_00d1c870;
  uVar2 = FUN_004eda50();
  param_1[2] = uVar2;
  param_1[5] = FUN_0040dec4;
  param_1[6] = &DAT_001f1910;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((long)param_1 + 0x79) = 0;
  *(undefined8 *)((long)param_1 + 0x71) = 0;
  FUN_007b5d10(param_1 + 0xc);
  local_38 = FUN_0045fc4c;
  lVar3 = *(long *)param_1[2];
  *(undefined1 *)(param_1 + 0x10) = 1;
  local_30 = &DAT_001f64f0;
  local_48[0] = param_1;
  (**(code **)(lVar3 + 0x58))((long *)param_1[2],local_48);
  if (*(code **)(local_30 + 8) != (code *)0x0) {
    (**(code **)(local_30 + 8))(local_48[0]);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0045f5d0  FUN_0045f5d0 =====

void FUN_0045f5d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0045f5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  return;
}


// ===== 0045f5e0  FUN_0045f5e0 =====

void FUN_0045f5e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0045f5ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))();
  return;
}


// ===== 0045f5f0  FUN_0045f5f0 =====

void FUN_0045f5f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0045f5fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}


// ===== 0045f600  FUN_0045f600 =====

void FUN_0045f600(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0045f60c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x60))();
  return;
}


// ===== 0045f610  FUN_0045f610 =====

undefined8
FUN_0045f610(long param_1,int param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined2 *param_9,
            undefined8 param_10,undefined8 *param_11)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  if (((uVar2 & 1) == 0) &&
     (uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(), (uVar2 & 1) == 0)) {
    uVar3 = 0;
    *(undefined1 *)(param_9 + 1) = 0xfe;
    *param_9 = 0xfff8;
    *param_11 = 3;
  }
  else {
    plVar4 = *(long **)(param_1 + 0x10);
    uVar1 = FUN_0045f2a8(param_2);
    uVar3 = (**(code **)(*plVar4 + 0x40))
                      (plVar4,uVar1,param_3,param_6,param_7,param_9,param_10,param_11);
    if ((param_2 == 1) && ((int)uVar3 == 0)) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
      if (((uVar2 & 1) == 0) && (*(char *)(*(long *)(param_1 + 0x30) + 0x10) == '\0')) {
        (**(code **)(param_1 + 0x28))(param_1 + 0x18);
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}


// ===== 0045f724  FUN_0045f724 =====

void FUN_0045f724(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  uVar1 = FUN_0045f2a8(param_2);
                    /* WARNING: Could not recover jumptable at 0x0045f75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x48))(plVar2,uVar1,param_3);
  return;
}


// ===== 0045f760  FUN_0045f760 =====

void FUN_0045f760(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined1 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_2 + 0x10);
  uVar1 = FUN_0045f2a8(param_3);
                    /* WARNING: Could not recover jumptable at 0x0045f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x50))(param_1,plVar2,uVar1);
  return;
}


// ===== 0045f79c  FUN_0045f79c =====

void FUN_0045f79c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0045f7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  return;
}


// ===== 0045f7ac  FUN_0045f7ac =====

void FUN_0045f7ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0045f7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))();
  return;
}


// ===== 0045f7bc  FUN_0045f7bc =====

long FUN_0045f7bc(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 in_x5;
  undefined8 in_x6;
  long *plVar5;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar5 = *(long **)(param_1 + 0x10);
  local_60 = 0;
  uVar3 = FUN_0045f2a8(param_2);
  lVar4 = (**(code **)(*plVar5 + 0x20))
                    (plVar5,uVar3,in_x5,in_x6,in_stack_00000000,in_stack_00000008,&local_60);
  iVar2 = (int)lVar4;
  if (((iVar2 == 0) && (param_2 == 1)) && (*(char *)(param_1 + 0x20) == '\0')) {
    lVar4 = FUN_005183d8();
    if (*(char *)(param_1 + 0x20) == '\0') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    *(long *)(param_1 + 0x18) = lVar4 / 1000000;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return (ulong)(iVar2 != 0) << 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4,local_60);
}


// ===== 0045f8bc  FUN_0045f8bc =====

void FUN_0045f8bc(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  uVar1 = FUN_0045f2a8(param_2);
                    /* WARNING: Could not recover jumptable at 0x0045f8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2,uVar1,param_3);
  return;
}


// ===== 0045f8f8  FUN_0045f8f8 =====

void FUN_0045f8f8(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined1 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_2 + 0x10);
  uVar1 = FUN_0045f2a8(param_3);
                    /* WARNING: Could not recover jumptable at 0x0045f930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(param_1,plVar2,uVar1);
  return;
}


// ===== 0045f934  FUN_0045f934 =====

void FUN_0045f934(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


// ===== 0045f94c  FUN_0045f94c =====

bool FUN_0045f94c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  plVar1 = param_1 + 1;
  do {
    lVar5 = *plVar1;
    iVar4 = (int)lVar5 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*param_1 + 0x18))();
  }
  return (int)lVar5 != 1;
}


// ===== 0045f990  FUN_0045f990 =====

void FUN_0045f990(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_00d1c870;
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN_007b5d24(param_1 + 0xc);
  }
  FUN_00546ab0(param_1 + 7);
  if (*(code **)(param_1[6] + 8) != (code *)0x0) {
    (**(code **)(param_1[6] + 8))(param_1[3]);
  }
  plVar1 = (long *)param_1[2];
  param_1[2] = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0045f9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 0045fa08  FUN_0045fa08 =====

void FUN_0045fa08(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_00d1c870;
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN_007b5d24(param_1 + 0xc);
  }
  FUN_00546ab0(param_1 + 7);
  if (*(code **)(param_1[6] + 8) != (code *)0x0) {
    (**(code **)(param_1[6] + 8))(param_1[3]);
  }
  plVar1 = (long *)param_1[2];
  param_1[2] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 0045fa7c  FUN_0045fa7c =====

bool FUN_0045fa7c(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 8) == 1;
}


// ===== 0045fa90  FUN_0045fa90 =====

void FUN_0045fa90(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


// ===== 0045faa8  FUN_0045faa8 =====

bool FUN_0045faa8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  plVar1 = param_1 + 1;
  do {
    lVar5 = *plVar1;
    iVar4 = (int)lVar5 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*param_1 + 0x18))();
  }
  return (int)lVar5 != 1;
}


// ===== 0045faec  FUN_0045faec =====

void FUN_0045faec(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[2];
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00d1c8b8;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0045fb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 0045fb18  FUN_0045fb18 =====

void FUN_0045fb18(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[2];
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00d1c8b8;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 0045fb5c  FUN_0045fb5c =====

bool FUN_0045fb5c(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 8) == 1;
}


// ===== 0045fb70  FUN_0045fb70 =====

void FUN_0045fb70(undefined8 *param_1,undefined4 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 **ppuVar3;
  undefined8 *puVar4;
  undefined1 *local_50;
  ulong uStack_48;
  byte local_39;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00667e40(&local_50,*param_2);
  ppuVar3 = (undefined1 **)local_50;
  if (-1 < (char)local_39) {
    uStack_48 = (ulong)local_39;
    ppuVar3 = &local_50;
  }
  if ((ppuVar3 != (undefined1 **)0x0) || (uStack_48 == 0)) {
    thunk_FUN_00547cac(param_1);
    if ((char)local_39 < '\0') {
      operator_delete(local_50);
    }
    uVar1 = param_1[1];
    puVar4 = (undefined8 *)*param_1;
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
      puVar4 = param_1;
    }
    if ((puVar4 != (undefined8 *)0x0) || (uVar1 == 0)) {
      if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
             "__len == 0 || __s != nullptr",
             "string_view::string_view(_CharT *, size_t): received nullptr");
}


// ===== 0045fc4c  FUN_0045fc4c =====

void FUN_0045fc4c(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *param_1;
  FUN_005467a4(lVar2 + 0x38);
  if (*(char *)(lVar2 + 0x80) == '\0') {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
               "this->has_value()","optional operator-> called on a disengaged value");
  }
  FUN_007b6160(lVar2 + 0x60,auStack_40,FUN_00441e10);
  FUN_005467c8(lVar2 + 0x38);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0045fcf0  FUN_0045fcf0 =====

void FUN_0045fcf0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined4 param_6,int param_7,undefined8 param_8,
                 undefined8 *param_9)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  int *piVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  code *pcVar20;
  void *pvVar21;
  long lVar22;
  void *pvVar23;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  void *local_128;
  undefined8 uStack_120;
  long local_118;
  long *local_110;
  long *local_108;
  void *local_100;
  undefined8 uStack_f8;
  long local_f0;
  int local_e0;
  undefined4 uStack_dc;
  undefined8 *local_d8;
  undefined8 uStack_d0;
  code *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  code *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined8 *local_80;
  long local_78;
  
  lVar9 = tpidr_el0;
  local_78 = *(long *)(lVar9 + 0x28);
  uStack_f8 = param_5[1];
  local_100 = (void *)*param_5;
  *param_5 = 0;
  param_5[1] = 0;
  local_f0 = param_5[2];
  param_5[2] = 0;
  local_e0 = param_7;
  uStack_dc = param_6;
  FUN_00485cd0();
  if (local_f0 < 0) {
    operator_delete(local_100);
  }
  *param_1 = &PTR_FUN_00d1c900;
  param_1[0x3a8] = &PTR_FUN_00d1c960;
  param_1[0x3a9] = &PTR_FUN_00d1c988;
  param_1[0x3aa] = &PTR_FUN_00d1c9b8;
  puVar14 = (undefined8 *)operator_new(0x10);
  param_1[0x3ab] = puVar14;
  uVar18 = *(undefined8 *)(param_2 + 0xa8);
  *puVar14 = &PTR_FUN_00d1cb38;
  puVar14[1] = 0;
  uVar18 = FUN_0051452c(uVar18);
  FUN_005156ac(param_1 + 0x3ac,uVar18,param_1);
  puVar11 = PTR_DAT_00d51bc8;
  puVar10 = PTR_DAT_00d51bc0;
  *(undefined2 *)(param_1 + 0x3af) = 1;
  param_1[0x3b0] = 0;
  uVar5 = *puVar10;
  param_1[0x3b2] = 0;
  uVar18 = *(undefined8 *)puVar11;
  param_1[0x3b1] = 0;
  uVar13 = *(undefined4 *)(puVar11 + 8);
  *(undefined1 *)(param_1 + 0x3b5) = uVar5;
  uVar5 = puVar10[1];
  param_1[0x3b3] = uVar18;
  *(undefined4 *)(param_1 + 0x3b4) = uVar13;
  *(undefined1 *)((long)param_1 + 0x1da9) = uVar5;
  *(undefined2 *)((long)param_1 + 0x1daa) = *(undefined2 *)(puVar10 + 2);
  uVar5 = puVar10[0x10];
  param_1[0x3b6] = *(undefined8 *)(puVar10 + 8);
  *(undefined1 *)(param_1 + 0x3b7) = uVar5;
  FUN_004426bc(param_1 + 0x3b8,PTR_DAT_00d51ba0);
  puVar10 = PTR_DAT_00d51bd0;
  param_1[0x3e2] = 0;
  *(undefined1 *)(param_1 + 0x3e0) = 0;
  param_1[0x3e4] = 0;
  uVar5 = puVar10[4];
  param_1[0x3e3] = 0;
  uVar13 = *(undefined4 *)puVar10;
  param_1[0x3d9] = 0;
  param_1[0x3d8] = 0;
  param_1[0x3db] = 0;
  param_1[0x3da] = 0;
  *(undefined1 *)((long)param_1 + 0x1eb4) = uVar5;
  *(undefined4 *)(param_1 + 0x3d6) = uVar13;
  uVar6 = *(undefined2 *)(puVar10 + 8);
  param_1[0x3dd] = 0;
  param_1[0x3dc] = 0;
  param_1[0x3df] = 0;
  param_1[0x3de] = 0;
  *(undefined2 *)(param_1 + 0x3d7) = uVar6;
  uVar6 = *(undefined2 *)(puVar10 + 10);
  *(undefined4 *)(param_1 + 0x3e1) = 0;
  *(undefined4 *)((long)param_1 + 0x1f04) = 0;
  *(undefined2 *)((long)param_1 + 0x1eba) = uVar6;
  *(undefined8 *)((long)param_1 + 0x1f26) = 0;
  puVar14 = (undefined8 *)operator_new(0x88);
  FUN_0045f4f0();
  puVar19 = (undefined8 *)*puVar14;
  param_1[0x3e6] = puVar14;
  (*(code *)*puVar19)(puVar14);
  *(undefined8 *)((long)param_1 + 0x1f79) = 0;
  *(undefined8 *)((long)param_1 + 0x1f71) = 0;
  param_1[1000] = 0;
  param_1[999] = 0;
  param_1[0x3ea] = 0;
  param_1[0x3e9] = 0;
  param_1[0x3ec] = 0;
  param_1[0x3eb] = 0;
  param_1[0x3ee] = 0;
  param_1[0x3ed] = 0;
  FUN_007b5d10(param_1 + 0x3ec);
  puVar10 = PTR_DAT_00d51bb0;
  *(undefined1 *)(param_1 + 0x3f0) = 1;
  param_1[0x3f3] = 0;
  param_1[0x3f2] = 0;
  param_1[0x3f1] = puVar10 + 0x10;
  uVar18 = FUN_0051452c(*(undefined8 *)(param_2 + 0xa8));
  FUN_005156ac(param_1 + 0x3f4,uVar18,param_1);
  *(undefined8 *)((long)param_1 + 0x1ff9) = 0;
  *(undefined8 *)((long)param_1 + 0x1ff1) = 0;
  param_1[0x3f8] = 0;
  param_1[0x3f7] = 0;
  param_1[0x3fa] = 0;
  param_1[0x3f9] = 0;
  param_1[0x3fc] = 0;
  param_1[0x3fb] = 0;
  param_1[0x3fe] = 0;
  param_1[0x3fd] = 0;
  FUN_007b5d10(param_1 + 0x3fc);
  *(undefined1 *)(param_1 + 0x400) = 1;
  param_1[0x402] = 0;
  param_1[0x401] = 0;
  param_1[0x404] = 0;
  param_1[0x403] = 0;
  param_1[0x406] = 0;
  param_1[0x405] = 0;
  param_1[0x408] = 0;
  param_1[0x407] = 0;
  *(undefined8 *)((long)param_1 + 0x2049) = 0;
  *(undefined8 *)((long)param_1 + 0x2041) = 0;
  FUN_007b5d10(param_1 + 0x406);
  *(undefined1 *)(param_1 + 0x40a) = 1;
  param_1[0x40c] = 0;
  param_1[0x40b] = 0;
  param_1[0x40e] = 0;
  param_1[0x40d] = 0;
  param_1[0x410] = 0;
  param_1[0x40f] = 0;
  param_1[0x412] = 0;
  param_1[0x411] = 0;
  *(undefined8 *)((long)param_1 + 0x2099) = 0;
  *(undefined8 *)((long)param_1 + 0x2091) = 0;
  FUN_007b5d10(param_1 + 0x410);
  *(undefined1 *)(param_1 + 0x414) = 1;
  param_1[0x416] = 0;
  param_1[0x415] = 0;
  param_1[0x418] = 0;
  param_1[0x417] = 0;
  param_1[0x41a] = 0;
  param_1[0x419] = 0;
  param_1[0x41c] = 0;
  param_1[0x41b] = 0;
  *(undefined8 *)((long)param_1 + 0x20e9) = 0;
  *(undefined8 *)((long)param_1 + 0x20e1) = 0;
  FUN_007b5d10(param_1 + 0x41a);
  *(undefined1 *)(param_1 + 0x41e) = 1;
  param_1[0x420] = 0;
  param_1[0x41f] = 0;
  param_1[0x422] = 0;
  param_1[0x421] = 0;
  param_1[0x424] = 0;
  param_1[0x423] = 0;
  param_1[0x426] = 0;
  param_1[0x425] = 0;
  *(undefined8 *)((long)param_1 + 0x2139) = 0;
  *(undefined8 *)((long)param_1 + 0x2131) = 0;
  FUN_007b5d10(param_1 + 0x424);
  *(undefined1 *)(param_1 + 0x428) = 1;
  *(undefined2 *)(param_1 + 0x429) = 0;
  param_1[0x42b] = 0;
  param_1[0x42a] = 0;
  param_1[0x42d] = 0;
  param_1[0x42c] = 0;
  FUN_0084951c(param_1 + 0x42e);
  param_1[0x448] = &PTR_FUN_00d1cb00;
  *(undefined1 *)(param_1 + 0x44f) = 0;
  puVar14 = param_1 + 0x45a;
  *(undefined1 *)(param_1 + 0x450) = 0;
  *(undefined1 *)(param_1 + 0x451) = 0;
  *(undefined1 *)(param_1 + 0x452) = 0;
  *(undefined1 *)(param_1 + 0x453) = 0;
  *(undefined1 *)(param_1 + 0x454) = 0;
  *(undefined1 *)(param_1 + 0x455) = 0;
  *(undefined1 *)(param_1 + 0x456) = 0;
  *(undefined1 *)(param_1 + 0x457) = 0;
  *(undefined1 *)(param_1 + 0x458) = 0;
  *(undefined1 *)(param_1 + 0x459) = 0;
  param_1[0x44a] = 0;
  param_1[0x449] = 0;
  param_1[0x44c] = 0;
  param_1[1099] = 0;
  *(undefined8 *)((long)param_1 + 0x2269) = 0;
  *(undefined8 *)((long)param_1 + 0x2261) = 0;
  param_1[0x45b] = 0;
  param_1[0x45a] = 0;
  param_1[0x45d] = 0;
  param_1[0x45c] = 0;
  param_1[0x45f] = 0;
  param_1[0x45e] = 0;
  FUN_00515708(param_1 + 0x3ac,FUN_00460878,10,10);
  iVar12 = FUN_00485f7c(param_1);
  if (iVar12 == 0) {
    FUN_0042e290(param_1[3],param_1 + 0x3aa);
    FUN_0045c734(*(undefined8 *)(param_1[3] + 0xb8),param_1 + 0x3a8);
    lVar17 = *(long *)(param_1[2] + 0x1940);
    uVar18 = *(undefined8 *)(param_1[2] + 0x1938);
    if (lVar17 != 0) {
      plVar1 = (long *)(lVar17 + 8);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = *plVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    FUN_00460888(param_1,uVar18);
    lVar17 = param_1[2];
    FUN_005467a4(lVar17 + 0x1888);
    if (*(char *)(lVar17 + 0x18d0) == '\0') goto LAB_00460824;
    FUN_007b5a0c(lVar17 + 0x18b0,param_1,param_1,FUN_0046bcfc);
    FUN_005467c8(lVar17 + 0x1888);
    puVar19 = (undefined8 *)param_1[0x45b];
    local_88 = FUN_0046bd04;
    local_80 = (undefined8 *)&DAT_001f6530;
    local_98 = param_1;
    if (puVar19 < (undefined8 *)param_1[0x45c]) {
      if (puVar19 == (undefined8 *)0x0) goto LAB_0046084c;
      puVar19[1] = uStack_90;
      *puVar19 = param_1;
      puVar19[2] = FUN_0046bd04;
      puVar19[3] = &DAT_001f6530;
      if (DAT_001f6538 != 0) {
        local_88 = FUN_0040dec4;
        local_80 = &DAT_001f1910;
      }
      param_1[0x45b] = puVar19 + 4;
    }
    else {
      FUN_004313e8(puVar14,&local_98);
    }
    if ((code *)local_80[1] != (code *)0x0) {
      (*(code *)local_80[1])(local_98);
    }
  }
  lVar17 = param_1[2];
  FUN_005467a4(lVar17 + 0x78);
  if (*(char *)(lVar17 + 0xc0) != '\0') {
    FUN_007b5a0c(lVar17 + 0xa0,param_1,param_1,FUN_0046bd80);
    FUN_005467c8(lVar17 + 0x78);
    puVar19 = (undefined8 *)param_1[0x45b];
    local_a8 = FUN_0046bdd8;
    local_a0 = (undefined8 *)&DAT_001f6550;
    local_b8 = param_1;
    if (puVar19 < (undefined8 *)param_1[0x45c]) {
      if (puVar19 == (undefined8 *)0x0) goto LAB_0046084c;
      puVar19[1] = uStack_b0;
      *puVar19 = param_1;
      puVar19[2] = FUN_0046bdd8;
      puVar19[3] = &DAT_001f6550;
      if (DAT_001f6558 != 0) {
        local_a8 = FUN_0040dec4;
        local_a0 = &DAT_001f1910;
      }
      param_1[0x45b] = puVar19 + 4;
    }
    else {
      FUN_004313e8(puVar14,&local_b8);
    }
    if ((code *)local_a0[1] != (code *)0x0) {
      (*(code *)local_a0[1])(local_b8);
    }
    lVar17 = param_1[0x3e6];
    FUN_005467a4(lVar17 + 0x38);
    if (*(char *)(lVar17 + 0x80) != '\0') {
      FUN_007b5a0c(lVar17 + 0x60,param_1,param_1,FUN_0046be4c);
      FUN_005467c8(lVar17 + 0x38);
      puVar19 = (undefined8 *)param_1[0x45b];
      local_c8 = FUN_0046bef8;
      local_c0 = (undefined8 *)&DAT_001f6570;
      local_d8 = param_1;
      if (puVar19 < (undefined8 *)param_1[0x45c]) {
        if (puVar19 == (undefined8 *)0x0) {
LAB_0046084c:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        puVar19[1] = uStack_d0;
        *puVar19 = param_1;
        puVar19[2] = FUN_0046bef8;
        puVar19[3] = &DAT_001f6570;
        if (DAT_001f6578 != 0) {
          local_c8 = FUN_0040dec4;
          local_c0 = &DAT_001f1910;
        }
        param_1[0x45b] = puVar19 + 4;
      }
      else {
        FUN_004313e8(puVar14,&local_d8);
      }
      plVar1 = param_1 + 0x42a;
      if ((code *)local_c0[1] != (code *)0x0) {
        (*(code *)local_c0[1])(local_d8);
      }
      piVar4 = (int *)param_9[1];
      for (piVar3 = (int *)*param_9; piVar3 != piVar4; piVar3 = piVar3 + 0x12) {
        if (*piVar3 == 1) {
          uVar15 = param_1[0x42b];
          if (uVar15 < (ulong)param_1[0x42c]) {
            FUN_0046aa28(uVar15);
            lVar17 = uVar15 + 0x40;
            param_1[0x42b] = lVar17;
          }
          else {
            FUN_0046a880(plVar1,piVar3 + 8,piVar3 + 9,piVar3 + 2,piVar3 + 0xb,piVar3 + 0xc,
                         piVar3 + 0xd,piVar3 + 0xe,piVar3 + 0xf,piVar3 + 0x10);
            lVar17 = param_1[0x42b];
          }
          if (*plVar1 == lVar17) goto LAB_004607fc;
        }
        else if (*piVar3 == 0) {
          if (param_1[0x3b0] == 0) {
            uVar18 = *(undefined8 *)(param_2 + 0xf8);
            lVar17 = *(long *)(param_2 + 0x100);
            if (lVar17 != 0) {
              plVar16 = (long *)(lVar17 + 8);
              do {
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar8) {
                  *plVar16 = *plVar16 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
            lVar22 = param_1[2] + 0x17e8;
            uVar13 = FUN_0046a4cc(lVar22,param_1[2] + 0x460,lVar22);
            puVar14 = (undefined8 *)operator_new(0x118);
            puVar14[1] = 0;
            puVar14[2] = 0;
            *puVar14 = &PTR_FUN_00d1cb68;
            FUN_004317e0(puVar14 + 3,uVar18,lVar17,uVar13,piVar3 + 2);
            pvVar21 = operator_new(0x40);
            FUN_0046bfcc(pvVar21,piVar3[8],piVar3 + 2,piVar3[0xb],puVar14 + 3,puVar14);
            pvVar23 = (void *)param_1[0x3b0];
            param_1[0x3b0] = pvVar21;
            if (pvVar23 != (void *)0x0) {
              plVar16 = *(long **)((long)pvVar23 + 0x38);
              if (plVar16 == (long *)0x0) {
LAB_004604f0:
                cVar7 = *(char *)((long)pvVar23 + 0x1f);
              }
              else {
                plVar2 = plVar16 + 1;
                do {
                  lVar17 = *plVar2;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar8) {
                    *plVar2 = lVar17 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (lVar17 != 0) goto LAB_004604f0;
                (**(code **)(*plVar16 + 0x10))(plVar16);
                FUN_005466cc(plVar16);
                cVar7 = *(char *)((long)pvVar23 + 0x1f);
              }
              if (cVar7 < '\0') {
                operator_delete(*(void **)((long)pvVar23 + 8));
              }
              operator_delete(pvVar23);
            }
          }
          else {
            uVar15 = FUN_004022fc();
            if ((uVar15 & 1) == 0) {
              FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/local_user.cpp",0x952,
                           "Multiple audio streams not supported");
            }
          }
        }
      }
      if (param_1[0x3b0] == 0) {
        uVar18 = *(undefined8 *)(param_2 + 0xf8);
        lVar17 = *(long *)(param_2 + 0x100);
        if (lVar17 != 0) {
          plVar16 = (long *)(lVar17 + 8);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar8) {
              *plVar16 = *plVar16 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        lVar22 = param_1[2] + 0x17e8;
        uVar13 = FUN_0046a4cc(lVar22,param_1[2] + 0x460,lVar22);
        local_128 = (void *)0x0;
        uStack_120 = 0;
        local_118 = 0;
        plVar16 = (long *)operator_new(0x118);
        plVar16[1] = 0;
        plVar16[2] = 0;
        *plVar16 = (long)&PTR_FUN_00d1cb68;
        FUN_004317e0(plVar16 + 3,uVar18,lVar17,uVar13,&local_128);
        local_110 = plVar16 + 3;
        local_108 = plVar16;
        uVar18 = FUN_00460984(&uStack_dc,&DAT_001b3348,&DAT_001f6528,&local_110);
        pvVar21 = (void *)param_1[0x3b0];
        param_1[0x3b0] = uVar18;
        if (pvVar21 != (void *)0x0) {
          plVar16 = *(long **)((long)pvVar21 + 0x38);
          if (plVar16 != (long *)0x0) {
            plVar2 = plVar16 + 1;
            do {
              lVar17 = *plVar2;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *plVar2 = lVar17 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar17 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
              FUN_005466cc(plVar16);
            }
          }
          if (*(char *)((long)pvVar21 + 0x1f) < '\0') {
            operator_delete(*(void **)((long)pvVar21 + 8));
          }
          operator_delete(pvVar21);
        }
        plVar16 = local_108;
        if (local_108 != (long *)0x0) {
          plVar2 = local_108 + 1;
          do {
            lVar17 = *plVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = lVar17 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*local_108 + 0x10))(local_108);
            FUN_005466cc(plVar16);
          }
        }
        if (local_118 < 0) {
          operator_delete(local_128);
        }
      }
      uVar15 = param_1[0x42a];
      if (uVar15 == param_1[0x42b]) {
        local_110 = (long *)CONCAT44(local_110._4_4_,2500000);
        local_130 = 0;
        uStack_12c = 600000;
        local_138 = 0xe1000;
        uStack_134 = 100;
        local_128 = (void *)CONCAT44(local_128._4_4_,local_e0 + 1);
        local_13c = 0x1e;
        if (uVar15 < (ulong)param_1[0x42c]) {
          FUN_0046ad18(uVar15);
          lVar17 = uVar15 + 0x40;
          param_1[0x42b] = lVar17;
        }
        else {
          FUN_0046ab70(plVar1,&local_e0,&local_128,&DAT_001b3348,&local_110,&uStack_12c,&local_130,
                       &uStack_134,&local_138,&local_13c);
          lVar17 = param_1[0x42b];
        }
        if (*plVar1 == lVar17) {
LAB_004607fc:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
      }
      lVar17 = FUN_005183d8();
      if (*(char *)(param_1 + 0x44f) == '\0') {
        *(undefined1 *)(param_1 + 0x44f) = 1;
      }
      lVar22 = param_1[0x3e6];
      param_1[0x44e] = lVar17 / 1000000;
      lVar17 = *(long *)(lVar22 + 0x30);
      *(code **)(lVar22 + 0x28) = FUN_0040dec4;
      *(undefined8 **)(lVar22 + 0x30) = &DAT_001f1910;
      pcVar20 = *(code **)(lVar17 + 8);
      if (pcVar20 != (code *)0x0) {
        (*pcVar20)(*(undefined8 *)(lVar22 + 0x18));
      }
      *(undefined8 **)(lVar22 + 0x18) = param_1;
      *(code **)(lVar22 + 0x28) = FUN_0046c118;
      *(undefined **)(lVar22 + 0x30) = &DAT_001f6590;
      FUN_00460ac8(param_1);
      FUN_0045bcfc(*(undefined8 *)(param_1[3] + 0xb8));
      if (*(long *)(lVar9 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
LAB_00460824:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 00460878  FUN_00460878 =====

void FUN_00460878(long *param_1)

{
  if (*param_1 != 0) {
    FUN_004622dc();
    return;
  }
  return;
}


// ===== 00460888  FUN_00460888 =====

void FUN_00460888(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(param_1 + 0x2248);
  if ((plVar5 != (long *)0x0) && (plVar5 != param_2)) {
    FUN_004523fc(*(undefined8 *)(param_1 + 0x10),plVar5);
    uVar4 = (**(code **)(**(long **)(param_1 + 0x2248) + 0x40))();
    if ((uVar4 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x2248) + 0x48))(*(long **)(param_1 + 0x2248),0);
      *(undefined1 *)(param_1 + 0x1f00) = 0;
    }
    FUN_0042ff48(*(undefined8 *)(param_1 + 0x18),0);
  }
  plVar5 = *(long **)(param_1 + 0x2250);
  *(long **)(param_1 + 0x2248) = param_2;
  *(undefined8 *)(param_1 + 0x2250) = param_3;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
    param_2 = *(long **)(param_1 + 0x2248);
  }
  *(long *)(param_1 + 0x2258) = *(long *)(param_1 + 0x2258) + 1;
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00460970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x30))(param_2,*(undefined4 *)(*(long *)(param_1 + 8) + 0x508));
    return;
  }
  return;
}


// ===== 00460984  FUN_00460984 =====

void * FUN_00460984(undefined4 *param_1,char *param_2,undefined4 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  void *pvVar7;
  size_t __n;
  char **__dest;
  char *local_70;
  size_t local_68;
  undefined8 uStack_60;
  long local_58;
  
  __dest = &local_70;
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  pvVar7 = operator_new(0x40);
  uVar4 = *param_1;
  __n = strlen(param_2);
  if (0x7fffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (__n < 0x17) {
    uStack_60 = CONCAT17((char)__n,(undefined7)uStack_60);
  }
  else {
    uVar1 = (__n | 0xf) + 1;
    __dest = (char **)operator_new(uVar1);
    uStack_60 = uVar1 | 0x8000000000000000;
    local_70 = (char *)__dest;
    local_68 = __n;
  }
  if ((__dest <= param_2) && (param_2 < (char *)((long)__dest + __n))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  if (__n != 0) {
    memcpy(__dest,param_2,__n);
  }
  uVar2 = *param_4;
  uVar3 = param_4[1];
  uVar5 = *param_3;
  *(char *)((long)__dest + __n) = '\0';
  *param_4 = 0;
  param_4[1] = 0;
  FUN_0046bfcc(pvVar7,uVar4,&local_70,uVar5,uVar2,uVar3);
  if ((long)uStack_60 < 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return pvVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00460ac8  FUN_00460ac8 =====

/* WARNING: Removing unreachable block (ram,0x00460fb8) */
/* WARNING: Removing unreachable block (ram,0x00461018) */
/* WARNING: Removing unreachable block (ram,0x00460ff8) */
/* WARNING: Removing unreachable block (ram,0x00460fd8) */
/* WARNING: Removing unreachable block (ram,0x00460fc8) */
/* WARNING: Removing unreachable block (ram,0x00460fe8) */
/* WARNING: Removing unreachable block (ram,0x00461008) */
/* WARNING: Removing unreachable block (ram,0x00461028) */

void FUN_00460ac8(long param_1)

{
  char *__s;
  undefined *puVar1;
  undefined1 uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  size_t sVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  double dVar12;
  void *local_598;
  undefined8 uStack_590;
  long local_588;
  void *local_580;
  undefined8 uStack_578;
  long local_570;
  void *local_568;
  undefined8 uStack_560;
  long local_558;
  undefined8 *local_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined1 auStack_538 [64];
  undefined1 auStack_4f8 [408];
  undefined4 local_360 [2];
  undefined1 auStack_358 [64];
  undefined8 local_318;
  undefined1 uStack_310;
  undefined7 uStack_30f;
  char cStack_308;
  undefined8 uStack_307;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined2 local_2f0;
  undefined2 local_2ee;
  undefined1 local_2ec;
  undefined4 local_2e8;
  undefined2 local_2e4;
  undefined2 local_2e2;
  undefined1 local_2e0;
  undefined8 local_2dc;
  undefined8 auStack_2a0 [9];
  undefined4 local_258;
  int local_254;
  undefined4 local_220;
  undefined1 auStack_218 [64];
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  char local_1c8;
  undefined8 uStack_1c7;
  char local_1b8;
  long *local_1b0;
  undefined1 local_18c;
  long *local_170;
  long local_160 [2];
  code *local_150;
  undefined *local_148;
  undefined1 local_140 [48];
  char local_110 [8];
  undefined4 local_108;
  char local_104 [11];
  undefined1 local_f9;
  void *local_f8;
  undefined8 uStack_f0;
  long local_e8;
  undefined4 local_e0;
  undefined2 uStack_dc;
  char acStack_da [17];
  undefined1 local_c9;
  void *local_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined4 local_b0;
  undefined2 uStack_ac;
  char acStack_aa [17];
  undefined1 local_99;
  void *local_98;
  undefined8 uStack_90;
  long local_88;
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  uVar5 = FUN_004503f0(*(undefined8 *)(param_1 + 0x10));
  if ((uVar5 & 1) == 0) goto LAB_00461290;
  FUN_0042f120(*(undefined8 *)(param_1 + 0x18),param_1);
  if (**(int **)(param_1 + 0x1d80) == 0) {
LAB_004611e4:
    plVar11 = *(long **)(*(long *)(param_1 + 8) + 0xe0);
    if (plVar11 != (long *)0x0) {
      local_2f4 = 0;
      local_2f0 = 0;
      local_2f8 = CONCAT31(local_2f8._1_3_,1);
      local_2ee = *(undefined2 *)(param_1 + 0x1f28);
      local_2dc = 0xffffffff;
      local_2ec = 0;
      local_2e8 = 0;
      local_2e4 = 0;
      local_2e0 = 0;
      local_2e2 = local_2ee;
      plVar11 = (long *)(**(code **)(*plVar11 + 0x68))();
      (**(code **)(*plVar11 + 0x78))(plVar11,"transport",9,&local_2f8);
      *(short *)(param_1 + 0x1f28) = *(short *)(param_1 + 0x1f28) + 1;
    }
    FUN_00463b68(param_1);
    plVar11 = *(long **)(*(long *)(param_1 + 0x1d80) + 0x28);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x40))
                (plVar11,*(char *)(param_1 + 0x1d78) == '\0' && *(char *)(param_1 + 0x1f00) == '\0')
      ;
    }
  }
  else {
    if (*(char *)(param_1 + 0x1f00) != '\0') {
      uVar5 = FUN_0044f25c(*(undefined8 *)(param_1 + 0x10));
      if ((uVar5 & 1) == 0) {
        uVar10 = *(undefined8 *)(param_1 + 0x18);
        uVar6 = FUN_0051452c(*(undefined8 *)(*(long *)(param_1 + 8) + 0xa8));
        FUN_0042e364(uVar10,uVar6);
      }
LAB_00460b78:
      uVar5 = FUN_00417e08();
      if ((uVar5 & 1) == 0) {
        FUN_00623bb0(&DAT_001f6220,"../../discord_native_lib/src/media/local_user.cpp",0x4a61,
                     "Creating AudioSendStream for ",**(undefined4 **)(param_1 + 0x1d80));
      }
      FUN_00842718(&local_2f8,*(undefined8 *)(*(long *)(param_1 + 0x1d80) + 0x30));
      local_2f8 = **(undefined4 **)(param_1 + 0x1d80);
      puVar7 = (undefined8 *)FUN_00484518();
      if (auStack_2a0 != puVar7) {
        FUN_0046b598(auStack_2a0,*puVar7,puVar7[1]);
      }
      plVar11 = *(long **)(*(long *)(param_1 + 0x18) + 0x90);
      if (plVar11 != (long *)0x0) {
        (**(code **)*plVar11)(plVar11);
      }
      if (local_1b0 != (long *)0x0) {
        lVar9 = *local_1b0;
        local_1b0 = plVar11;
        (**(code **)(lVar9 + 8))();
        plVar11 = local_1b0;
      }
      local_1b0 = plVar11;
      plVar11 = *(long **)(param_1 + 0x1f30);
      if (plVar11 != (long *)0x0) {
        (**(code **)*plVar11)(plVar11);
      }
      if (local_170 != (long *)0x0) {
        (**(code **)(*local_170 + 8))();
      }
      local_18c = 1;
      local_170 = plVar11;
      FUN_0045f5f0(*(undefined8 *)(param_1 + 0x1f30),**(undefined4 **)(param_1 + 0x1d80),1);
      local_258 = 6000;
      local_254 = *(int *)(*(long *)(param_1 + 0x1d80) + 0x20);
      if (local_254 < 1) {
        local_254 = 64000;
      }
      __s = *(char **)(param_1 + 0xd0);
      if (-1 < *(char *)(param_1 + 0xe7)) {
        __s = (char *)(param_1 + 0xd0);
      }
      if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0xff,
                   "__s != nullptr",
                   "null pointer passed to non-null argument of char_traits<...>::length");
      }
      dVar12 = *(double *)(param_1 + 0x1db0);
      uVar2 = *(undefined1 *)(param_1 + 200);
      sVar8 = strlen(__s);
      puVar1 = &DAT_001a8867;
      if (*(uint *)(param_1 + 0xf0) < 2) {
        puVar1 = &DAT_0019cb7e;
      }
      FUN_00465d60(local_140,"stereo",puVar1);
      FUN_005490bc(&local_568,*(undefined1 *)(param_1 + 0x1da8));
      local_f9 = 0xc;
      if ((local_110 < "seinbandfec") && ("useinbandfec" < local_104)) {
LAB_00461324:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      local_110[0] = s_useinbandfec_001b0912[0];
      local_110[1] = s_useinbandfec_001b0912[1];
      local_110[2] = s_useinbandfec_001b0912[2];
      local_110[3] = s_useinbandfec_001b0912[3];
      local_110[4] = s_useinbandfec_001b0912[4];
      local_110[5] = s_useinbandfec_001b0912[5];
      local_110[6] = s_useinbandfec_001b0912[6];
      local_110[7] = s_useinbandfec_001b0912[7];
      local_104[0] = '\0';
      uStack_f0 = uStack_560;
      local_f8 = local_568;
      local_108 = 0x63656664;
      local_e8 = local_558;
      local_568 = (void *)0x0;
      uStack_560 = 0;
      local_558 = 0;
      FUN_005490bc(&local_580,(int)(dVar12 * 100.0));
      local_c9 = 6;
      if ((&local_e0 < "inplr") && ("minplr" < acStack_da)) goto LAB_00461324;
      uStack_dc = 0x726c;
      acStack_da[0] = '\0';
      local_e0 = 0x706e696d;
      uStack_c0 = uStack_578;
      local_c8 = local_580;
      local_b8 = local_570;
      local_580 = (void *)0x0;
      uStack_578 = 0;
      local_570 = 0;
      FUN_005490bc(&local_598,*(undefined1 *)(param_1 + 0x1daa));
      local_99 = 6;
      if ((&local_b0 < "sedtx") && ("usedtx" < acStack_aa)) goto LAB_00461324;
      uStack_ac = 0x7874;
      uStack_90 = uStack_590;
      local_98 = local_598;
      local_b0 = 0x64657375;
      local_88 = local_588;
      acStack_aa[0] = '\0';
      local_598 = (void *)0x0;
      uStack_590 = 0;
      local_588 = 0;
      local_548 = 0;
      uStack_540 = 0;
      local_550 = &local_548;
      FUN_004414e0(&local_550,&local_548,local_140,local_140);
      FUN_004414e0(&local_550,&local_548,local_110,local_110);
      FUN_004414e0(&local_550,&local_548,&local_e0,&local_e0);
      FUN_004414e0(&local_550,&local_548,&local_b0,&local_b0);
      FUN_006676e8(auStack_538,__s,sVar8,48000,2,&local_550);
      FUN_00843440(local_360,uVar2,auStack_538);
      local_220 = local_360[0];
      if (local_1b8 == '\0') {
        FUN_00667388(auStack_218,auStack_358);
        local_1d8 = local_318;
        uStack_1c7 = uStack_307;
        uStack_1d0._1_3_ = (undefined3)uStack_30f;
        uStack_1d0 = CONCAT31(uStack_1d0._1_3_,uStack_310);
        uStack_1cc = (uint)((uint7)uStack_30f >> 0x18);
        local_1c8 = cStack_308;
        local_1b8 = '\x01';
      }
      else {
        FUN_006678fc();
        local_1d8 = local_318;
        uStack_1c7 = uStack_307;
        uStack_1d0._1_3_ = (undefined3)uStack_30f;
        uStack_1d0 = CONCAT31(uStack_1d0._1_3_,uStack_310);
        uStack_1cc = (uint)((uint7)uStack_30f >> 0x18);
        local_1c8 = cStack_308;
      }
      FUN_0084348c(local_360);
      FUN_006678ac(auStack_538);
      FUN_00441e1c(&local_550,local_548);
      if (local_588 < 0) {
        operator_delete(local_598);
      }
      if (local_570 < 0) {
        operator_delete(local_580);
      }
      if (local_558 < 0) {
        operator_delete(local_568);
      }
      if (local_1b8 == '\0') {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
                   "this->has_value()","optional operator-> called on a disengaged value");
      }
      if (local_1c8 == *(char *)(param_1 + 0xf9)) {
        if (local_1c8 != '\0') {
          uStack_1cc = (uint)*(byte *)(param_1 + 0xf8);
        }
      }
      else if (local_1c8 == '\0') {
        uStack_1cc = (uint)*(byte *)(param_1 + 0xf8);
        local_1c8 = '\x01';
      }
      else {
        local_1c8 = '\0';
      }
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x1d80) + 0x30) + 0xf8) =
           *(undefined1 *)(param_1 + 200);
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      uVar10 = *(undefined8 *)(*(long *)(param_1 + 8) + 0xe0);
      FUN_00465350(auStack_4f8,&local_2f8);
      uVar6 = FUN_0042f880(uVar6,uVar10,auStack_4f8,*(undefined1 *)(param_1 + 0x1f2b),48000,2);
      *(undefined8 *)(*(long *)(param_1 + 0x1d80) + 0x28) = uVar6;
      FUN_008427b0(auStack_4f8);
      uVar5 = FUN_00417e08();
      if ((uVar5 & 1) == 0) {
        FUN_00623bb0(&DAT_001f6220,"../../discord_native_lib/src/media/local_user.cpp",0x4bd1,
                     "CreateAudioSendStream complete for ",**(undefined4 **)(param_1 + 0x1d80));
      }
      local_150 = FUN_0046daec;
      local_148 = &DAT_001f65f8;
      local_160[0] = param_1;
      FUN_0045ab70(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb8),
                   *(undefined8 *)(*(long *)(param_1 + 0x1d80) + 0x28),local_160);
      if (*(code **)(local_148 + 8) != (code *)0x0) {
        (**(code **)(local_148 + 8))(local_160[0]);
      }
      uVar5 = FUN_00417e08();
      if ((uVar5 & 1) == 0) {
        FUN_00623bb0(&DAT_001f6220,"../../discord_native_lib/src/media/local_user.cpp",0x4d01,
                     "AudioSendStream Start begin for ",**(undefined4 **)(param_1 + 0x1d80));
      }
      (**(code **)(**(long **)(*(long *)(param_1 + 0x1d80) + 0x28) + 0x28))();
      uVar5 = FUN_00417e08();
      if ((uVar5 & 1) == 0) {
        FUN_00623bb0(&DAT_001f6220,"../../discord_native_lib/src/media/local_user.cpp",0x4d11,
                     "AudioSendStream Start completed for ",**(undefined4 **)(param_1 + 0x1d80));
      }
      FUN_008427b0(&local_2f8);
      goto LAB_004611e4;
    }
    iVar4 = FUN_00485f7c(param_1);
    if (iVar4 != 1) {
      uVar5 = FUN_0044f25c(*(undefined8 *)(param_1 + 0x10));
      if ((uVar5 & 1) != 0) goto LAB_00460b78;
      uVar5 = FUN_00417e08();
      if ((uVar5 & 1) == 0) {
        if (*(long *)(lVar3 + 0x28) == local_80) {
          FUN_00623bb0(&DAT_001f6220,"../../discord_native_lib/src/media/local_user.cpp",0x4a39,
                       "No devices, skipping AudioSendStream for ",
                       **(undefined4 **)(param_1 + 0x1d80));
          return;
        }
        goto LAB_00461374;
      }
    }
  }
LAB_00461290:
  if (*(long *)(lVar3 + 0x28) == local_80) {
    return;
  }
LAB_00461374:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00461378  FUN_00461378 =====

/* WARNING: Removing unreachable block (ram,0x004615f4) */
/* WARNING: Removing unreachable block (ram,0x00461858) */

void FUN_00461378(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  void *pvVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  void *pvVar10;
  void *pvVar11;
  
  puVar2 = (undefined8 *)(param_1 + 0x22d0);
  FUN_004312b4(puVar2);
  puVar3 = (undefined8 *)(param_1 + 0x22e8);
  FUN_004312b4(puVar3);
  FUN_00459dd8(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb8));
  FUN_0045c7b0(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb8),param_1 + 0x1d40);
  FUN_0042e2fc(*(undefined8 *)(param_1 + 0x18),param_1 + 0x1d50);
  FUN_00515738(param_1 + 0x1d60);
  if (*(long *)(param_1 + 0x1d68) != 0) {
    FUN_005ce374(*(long *)(param_1 + 0x1d68),PTR_free_00d51ac0);
    *(undefined8 *)(param_1 + 0x1d68) = 0;
  }
  if ((*(long *)(param_1 + 0x1ec8) != 0) || (*(long *)(param_1 + 0x1ed8) != 0)) {
    FUN_00461950(param_1);
  }
  FUN_00461f0c(param_1,1);
  FUN_004620a0(param_1);
  FUN_0042f234(*(undefined8 *)(param_1 + 0x18),param_1);
  if (*(long *)(*(long *)(param_1 + 0x1d80) + 0x28) != 0) {
    FUN_0042f8ec(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(*(long *)(param_1 + 8) + 0xe0));
    *(undefined8 *)(*(long *)(param_1 + 0x1d80) + 0x28) = 0;
  }
  FUN_0042e374(*(undefined8 *)(param_1 + 0x18));
  FUN_00515738(param_1 + 0x1fa0);
  if (*(long *)(param_1 + 0x1fa8) != 0) {
    FUN_005ce374(*(long *)(param_1 + 0x1fa8),PTR_free_00d51ac0);
    *(undefined8 *)(param_1 + 0x1fa8) = 0;
  }
  FUN_004312b4(puVar3);
  pvVar10 = (void *)*puVar3;
  if (pvVar10 != (void *)0x0) {
    pvVar11 = pvVar10;
    pvVar6 = *(void **)(param_1 + 0x22f0);
    if (*(void **)(param_1 + 0x22f0) != pvVar10) {
      do {
        pvVar11 = (void *)((long)pvVar6 + -0x20);
        pcVar7 = *(code **)(*(long *)((long)pvVar6 + -8) + 8);
        if (pcVar7 != (code *)0x0) {
          (*pcVar7)(*(undefined8 *)((long)pvVar6 + -0x20));
        }
        pvVar6 = pvVar11;
      } while (pvVar11 != pvVar10);
      pvVar11 = (void *)*puVar3;
    }
    *(void **)(param_1 + 0x22f0) = pvVar10;
    operator_delete(pvVar11);
  }
  FUN_004312b4(puVar2);
  pvVar10 = (void *)*puVar2;
  if (pvVar10 != (void *)0x0) {
    pvVar11 = pvVar10;
    pvVar6 = *(void **)(param_1 + 0x22d8);
    if (*(void **)(param_1 + 0x22d8) != pvVar10) {
      do {
        pvVar11 = (void *)((long)pvVar6 + -0x20);
        pcVar7 = *(code **)(*(long *)((long)pvVar6 + -8) + 8);
        if (pcVar7 != (code *)0x0) {
          (*pcVar7)(*(undefined8 *)((long)pvVar6 + -0x20));
        }
        pvVar6 = pvVar11;
      } while (pvVar11 != pvVar10);
      pvVar11 = (void *)*puVar2;
    }
    *(void **)(param_1 + 0x22d8) = pvVar10;
    operator_delete(pvVar11);
  }
  plVar9 = *(long **)(param_1 + 0x2268);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_005466cc(plVar9);
    }
  }
  plVar9 = *(long **)(param_1 + 0x2250);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_005466cc(plVar9);
    }
  }
  FUN_0084966c(param_1 + 0x2170);
  pvVar10 = *(void **)(param_1 + 0x2150);
  if (pvVar10 != (void *)0x0) {
    pvVar6 = *(void **)(param_1 + 0x2158);
    pvVar11 = pvVar10;
    if (pvVar6 != pvVar10) {
      do {
        pvVar6 = (void *)((long)pvVar6 + -0x40);
      } while (pvVar6 != pvVar10);
      pvVar11 = *(void **)(param_1 + 0x2150);
    }
    *(void **)(param_1 + 0x2158) = pvVar10;
    operator_delete(pvVar11);
  }
  if (*(char *)(param_1 + 0x2140) != '\0') {
    FUN_007b5d24(param_1 + 0x2120);
  }
  FUN_00546ab0(param_1 + 0x20f8);
  if (*(char *)(param_1 + 0x20f0) != '\0') {
    FUN_007b5d24(param_1 + 0x20d0);
  }
  FUN_00546ab0(param_1 + 0x20a8);
  if (*(char *)(param_1 + 0x20a0) != '\0') {
    FUN_007b5d24(param_1 + 0x2080);
  }
  FUN_00546ab0(param_1 + 0x2058);
  if (*(char *)(param_1 + 0x2050) != '\0') {
    FUN_007b5d24(param_1 + 0x2030);
  }
  FUN_00546ab0(param_1 + 0x2008);
  if (*(char *)(param_1 + 0x2000) != '\0') {
    FUN_007b5d24(param_1 + 0x1fe0);
  }
  FUN_00546ab0(param_1 + 0x1fb8);
  *(undefined ***)(param_1 + 0x1fa0) = &PTR_FUN_00d193e8;
  if (*(long *)(param_1 + 0x1fa8) != 0) {
    FUN_005ce374(*(long *)(param_1 + 0x1fa8),PTR_free_00d51ac0);
    *(undefined8 *)(param_1 + 0x1fa8) = 0;
  }
  if (*(char *)(param_1 + 0x1f80) != '\0') {
    FUN_007b5d24(param_1 + 0x1f60);
  }
  FUN_00546ab0(param_1 + 0x1f38);
  if (*(long **)(param_1 + 0x1f30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1f30) + 8))();
  }
  if (*(char *)(param_1 + 0x1f27) < '\0') {
    operator_delete(*(void **)(param_1 + 0x1f10));
  }
  plVar9 = *(long **)(param_1 + 0x1ef8);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_005466cc(plVar9);
    }
  }
  pvVar10 = *(void **)(param_1 + 0x1ee8);
  *(undefined8 *)(param_1 + 0x1ee8) = 0;
  if (pvVar10 != (void *)0x0) {
    FUN_004bef7c(pvVar10);
    operator_delete(pvVar10);
  }
  plVar9 = *(long **)(param_1 + 0x1ee0);
  if (plVar9 == (long *)0x0) {
LAB_004617a0:
    plVar9 = *(long **)(param_1 + 0x1ed0);
  }
  else {
    plVar1 = plVar9 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 != 0) goto LAB_004617a0;
    (**(code **)(*plVar9 + 0x10))(plVar9);
    FUN_005466cc(plVar9);
    plVar9 = *(long **)(param_1 + 0x1ed0);
  }
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_005466cc(plVar9);
    }
  }
  plVar9 = *(long **)(param_1 + 0x1ec0);
  *(undefined8 *)(param_1 + 0x1ec0) = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  if (*(char *)(param_1 + 0x1e9f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x1e88));
  }
  pvVar10 = *(void **)(param_1 + 0x1e60);
  if (pvVar10 != (void *)0x0) {
    pvVar6 = *(void **)(param_1 + 0x1e68);
    pvVar11 = pvVar10;
    if (pvVar6 != pvVar10) {
      do {
        pvVar6 = (void *)((long)pvVar6 + -0x18);
      } while (pvVar6 != pvVar10);
      pvVar11 = *(void **)(param_1 + 0x1e60);
    }
    *(void **)(param_1 + 0x1e68) = pvVar10;
    operator_delete(pvVar11);
  }
  if (*(char *)(param_1 + 0x1e57) < '\0') {
    operator_delete(*(void **)(param_1 + 0x1e40));
    cVar4 = *(char *)(param_1 + 0x1e37);
  }
  else {
    cVar4 = *(char *)(param_1 + 0x1e37);
  }
  if (cVar4 < '\0') {
    operator_delete(*(void **)(param_1 + 0x1e20));
  }
  pvVar10 = *(void **)(param_1 + 0x1d80);
  *(undefined8 *)(param_1 + 0x1d80) = 0;
  if (pvVar10 == (void *)0x0) goto LAB_004618cc;
  plVar9 = *(long **)((long)pvVar10 + 0x38);
  if (plVar9 == (long *)0x0) {
LAB_004618b4:
    cVar4 = *(char *)((long)pvVar10 + 0x1f);
  }
  else {
    plVar1 = plVar9 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 != 0) goto LAB_004618b4;
    (**(code **)(*plVar9 + 0x10))(plVar9);
    FUN_005466cc(plVar9);
    cVar4 = *(char *)((long)pvVar10 + 0x1f);
  }
  if (cVar4 < '\0') {
    operator_delete(*(void **)((long)pvVar10 + 8));
  }
  operator_delete(pvVar10);
LAB_004618cc:
  *(undefined ***)(param_1 + 0x1d60) = &PTR_FUN_00d193e8;
  if (*(long *)(param_1 + 0x1d68) != 0) {
    FUN_005ce374(*(long *)(param_1 + 0x1d68),PTR_free_00d51ac0);
    *(undefined8 *)(param_1 + 0x1d68) = 0;
  }
  plVar9 = *(long **)(param_1 + 0x1d58);
  *(undefined8 *)(param_1 + 0x1d58) = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  FUN_00485d58(param_1);
  return;
}


// ===== 00461950  FUN_00461950 =====

/* WARNING: Removing unreachable block (ram,0x00461a70) */
/* WARNING: Removing unreachable block (ram,0x00461a7c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00461950(long param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  void *pvVar11;
  double dVar12;
  char *local_c0 [2];
  char local_a9;
  char *local_a8;
  char *local_a0;
  undefined **local_98;
  void *local_90;
  char local_79;
  long local_70;
  long lStack_68;
  undefined7 uStack_60;
  char local_59;
  undefined3 uStack_58;
  undefined5 uStack_55;
  undefined3 uStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar5 = FUN_00417e08();
  if ((uVar5 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/local_user.cpp",0x1db1,
                 "Screenshare: ClearScreenshareSource");
  }
  FUN_004312b4(param_1 + 0x22e8);
  if (*(long **)(param_1 + 0x2248) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2248) + 0x38))(&local_70);
    if ((&stack0x00000000 == (undefined1 *)0x70) && (local_59 != '\0')) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
                 "__len == 0 || __s != nullptr",
                 "string_view::string_view(_CharT *, size_t): received nullptr");
    }
    if (local_59 == '#') {
      bVar4 = (((local_70 == 0x3a64726f63736964 && lStack_68 == 0x3a3a616964656d3a) &&
               CONCAT17(0x23,uStack_60) == 0x6c616e7265747845) &&
              CONCAT53(uStack_55,uStack_58) == 0x756f536f65646956) &&
              CONCAT35(uStack_50,uStack_55) == 0x656372756f536f65;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      *(undefined1 *)(param_1 + 0x1f2b) = 0;
      *(undefined1 *)(param_1 + 0x1f2d) = 0;
      if (*(char *)(param_1 + 0x1f00) != '\0') {
        (**(code **)(**(long **)(param_1 + 0x2248) + 0x48))(*(long **)(param_1 + 0x2248),0);
      }
      FUN_0042ff48(*(undefined8 *)(param_1 + 0x18),0);
      *(undefined1 *)(param_1 + 0x1f00) = 0;
      FUN_0042f234(*(undefined8 *)(param_1 + 0x18),param_1);
      if (*(long *)(*(long *)(param_1 + 0x1d80) + 0x28) != 0) {
        FUN_0042f8ec(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(*(long *)(param_1 + 8) + 0xe0))
        ;
        *(undefined8 *)(*(long *)(param_1 + 0x1d80) + 0x28) = 0;
      }
      FUN_0042e374(*(undefined8 *)(param_1 + 0x18));
      FUN_00460ac8(param_1);
    }
  }
  FUN_004df134(&local_70,7);
  local_c0[0] = "screenshare_finish";
  FUN_004df590(&local_98,local_c0);
  local_a0 = "type";
  uVar6 = FUN_004e148c(&local_70,&local_a0);
  FUN_004dfa04(uVar6,&local_98);
  FUN_004df880(&local_98);
  plVar7 = *(long **)(param_1 + 0x2248);
  if (plVar7 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1f04) == 3) {
      FUN_004df134(&local_98,7);
      (**(code **)(**(long **)(param_1 + 0x2248) + 0x58))(*(long **)(param_1 + 0x2248),&local_98);
      local_c0[0] = "capturedFramesTotal";
      uVar6 = FUN_004e148c(&local_98,local_c0);
      local_a0 = "goLiveCameraFrames";
      uVar8 = FUN_004e148c(&local_70,&local_a0);
      FUN_004df948(uVar8,uVar6);
      FUN_004df880(&local_98);
    }
    else {
      (**(code **)(*plVar7 + 0x58))(plVar7,&local_70);
    }
  }
  pcVar9 = "window";
  local_a8 = "window";
  switch(*(undefined4 *)(param_1 + 0x1f04)) {
  case 0:
  case 1:
    pcVar9 = "screen";
    break;
  case 2:
    break;
  case 3:
    pcVar9 = "camera";
    break;
  case 4:
    pcVar9 = "prepicked";
    break;
  default:
    goto switchD_00461bfc_default;
  }
  local_a8 = pcVar9;
switchD_00461bfc_default:
  FUN_004df590(&local_98,&local_a8);
  local_c0[0] = "desktopCapturerType";
  uVar6 = FUN_004e148c(&local_70,local_c0);
  FUN_004dfa04(uVar6,&local_98);
  FUN_004df880(&local_98);
  uVar5 = FUN_004b53e4(param_1 + 0x1f88);
  dVar12 = -1.0;
  if ((uVar5 & 0xff00000000) != 0) {
    dVar12 = (double)(float)uVar5;
  }
  FUN_004df250(dVar12,&local_98);
  local_c0[0] = "activity";
  uVar6 = FUN_004e148c(&local_70,local_c0);
  FUN_004dfa04(uVar6,&local_98);
  FUN_004df880(&local_98);
  FUN_004e36c8(&local_98);
  FUN_004e36e0(local_c0,&local_98,&local_70);
  FUN_005467a4(param_1 + 0x20f8);
  if (*(char *)(param_1 + 0x2140) == '\0') {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
               "this->has_value()","optional operator-> called on a disengaged value");
  }
  local_a0 = (char *)local_c0;
  FUN_007b6160(param_1 + 0x2120,&local_a0,FUN_0046af44);
  FUN_005467c8(param_1 + 0x20f8);
  if (local_a9 < '\0') {
    operator_delete(local_c0[0]);
  }
  local_98 = &PTR_FUN_00d1f540;
  if (local_79 < '\0') {
    operator_delete(local_90);
  }
  FUN_004e36c0(&local_98);
  FUN_00461f0c(param_1,1);
  FUN_004620a0(param_1);
  FUN_00460888(param_1,0,0);
  plVar7 = *(long **)(param_1 + 0x1ed0);
  *(undefined8 *)(param_1 + 0x1ec8) = 0;
  *(undefined8 *)(param_1 + 0x1ed0) = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  plVar7 = *(long **)(param_1 + 0x1ee0);
  *(undefined8 *)(param_1 + 0x1ed8) = 0;
  *(undefined8 *)(param_1 + 0x1ee0) = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  plVar7 = *(long **)(param_1 + 0x1ef8);
  *(undefined8 *)(param_1 + 0x1ef8) = 0;
  *(undefined8 *)(param_1 + 0x1ef0) = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  pvVar11 = *(void **)(param_1 + 0x1ee8);
  *(undefined8 *)(param_1 + 0x1ee8) = 0;
  if (pvVar11 != (void *)0x0) {
    FUN_004bef7c(pvVar11);
    operator_delete(pvVar11);
  }
  *(undefined1 *)(param_1 + 0x2149) = 0;
  *(undefined4 *)(param_1 + 0x1f08) = 0;
  if ((*(char *)(param_1 + 0x2148) == '\0') || (*(long *)(param_1 + 0x2248) == 0)) {
    if (*(long *)(param_1 + 0x2168) != 0) {
      FUN_00461f0c(param_1,1);
    }
  }
  else if (*(long *)(param_1 + 0x2168) == 0) {
    FUN_00468084(param_1);
  }
  FUN_00462d5c(param_1,0,0);
  FUN_004bfc1c();
  FUN_00450b2c(*(undefined8 *)(param_1 + 0x10));
  FUN_004df880(&local_70);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00461f0c  FUN_00461f0c =====

/* WARNING: Removing unreachable block (ram,0x0046205c) */

void FUN_00461f0c(long param_1,ulong param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  void *local_118;
  void *local_110;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar3 = *(long **)(param_1 + 0x2248);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,param_1 + 0x2240);
    (**(code **)(**(long **)(param_1 + 0x2248) + 0x18))
              (*(long **)(param_1 + 0x2248),param_1 + 0x1f88);
    FUN_00515738(param_1 + 0x1fa0);
  }
  if (*(long **)(param_1 + 0x2168) != (long *)0x0) {
    puVar1 = (undefined1 *)(param_1 + 0x1f10);
    (**(code **)(**(long **)(param_1 + 0x2168) + 8))();
    FUN_00453338(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(*(long *)(param_1 + 8) + 0xe0),
                 *(undefined8 *)(param_1 + 0x2168));
    *(undefined8 *)(param_1 + 0x2168) = 0;
    FUN_0084951c(&local_118);
    FUN_00469824(param_1 + 0x2170,&local_118);
    FUN_0084966c(&local_118);
    FUN_0045138c(*(undefined8 *)(param_1 + 0x10),puVar1);
    if (*(char *)(param_1 + 0x1f27) < '\0') {
      **(undefined1 **)(param_1 + 0x1f10) = 0;
      *(undefined8 *)(param_1 + 0x1f18) = 0;
    }
    else {
      *puVar1 = 0;
      *(undefined1 *)(param_1 + 0x1f27) = 0;
    }
    if ((param_2 & 1) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      FUN_00469548(&local_118,param_1);
      FUN_0043abc4(uVar4,param_1 + 0x20,0,puVar1,&local_118);
      if (local_118 != (void *)0x0) {
        for (; local_110 != local_118; local_110 = (void *)((long)local_110 + -0x48)) {
        }
        local_110 = local_118;
        operator_delete(local_118);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004620a0  FUN_004620a0 =====

void FUN_004620a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_58 [2];
  code *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x1ec0) == 0) {
LAB_004621bc:
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  FUN_004d7250();
  FUN_004d71c0(*(undefined8 *)(param_1 + 0x1ec0),0,0);
  lVar3 = *(long *)(param_1 + 0x1ec0);
  FUN_005467a4(lVar3 + 0x10);
  if (*(char *)(lVar3 + 0x58) != '\0') {
    FUN_007b5df8(lVar3 + 0x38,param_1);
    FUN_005467c8(lVar3 + 0x10);
    lVar3 = *(long *)(param_1 + 0x1ec0);
    FUN_005467a4(lVar3 + 0x60);
    if (*(char *)(lVar3 + 0xa8) != '\0') {
      FUN_007b5df8(lVar3 + 0x88,param_1);
      FUN_005467c8(lVar3 + 0x60);
      lVar3 = *(long *)(param_1 + 0x1ec0);
      FUN_005467a4(lVar3 + 0xb0);
      if (*(char *)(lVar3 + 0xf8) != '\0') {
        FUN_007b5df8(lVar3 + 0xd8,param_1);
        FUN_005467c8(lVar3 + 0xb0);
        local_48 = FUN_0046dd48;
        local_40 = &DAT_001f1910;
        FUN_004d7244(*(undefined8 *)(param_1 + 0x1ec0),local_58);
        if ((code *)local_40[1] != (code *)0x0) {
          (*(code *)local_40[1])(local_58[0]);
        }
        FUN_004d71b4(*(undefined8 *)(param_1 + 0x1ec0),0);
        uVar2 = *(undefined8 *)(param_1 + 0x1ec0);
        *(undefined8 *)(param_1 + 0x1ec0) = 0;
        FUN_0043009c(*(undefined8 *)(param_1 + 0x18),uVar2);
        *(undefined1 *)(param_1 + 0x1f00) = 0;
        goto LAB_004621bc;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 0046220c  FUN_0046220c =====

void FUN_0046220c(void)

{
  return;
}


// ===== 00462210  FUN_00462210 =====

void FUN_00462210(long param_1)

{
  FUN_00461378(param_1 + -0x1d40);
  return;
}


// ===== 0046221c  FUN_0046221c =====

void FUN_0046221c(long param_1)

{
  FUN_00461378(param_1 + -0x1d48);
  return;
}


// ===== 00462228  FUN_00462228 =====

void FUN_00462228(long param_1)

{
  FUN_00461378(param_1 + -0x1d50);
  return;
}


// ===== 00462234  FUN_00462234 =====

void FUN_00462234(void *param_1)

{
  FUN_00461378();
  operator_delete(param_1);
  return;
}


// ===== 00462258  FUN_00462258 =====

void FUN_00462258(long param_1)

{
  FUN_00461378((void *)(param_1 + -0x1d40));
  operator_delete((void *)(param_1 + -0x1d40));
  return;
}


// ===== 00462284  FUN_00462284 =====

void FUN_00462284(long param_1)

{
  FUN_00461378((void *)(param_1 + -0x1d48));
  operator_delete((void *)(param_1 + -0x1d48));
  return;
}


// ===== 004622b0  FUN_004622b0 =====

void FUN_004622b0(long param_1)

{
  FUN_00461378((void *)(param_1 + -0x1d50));
  operator_delete((void *)(param_1 + -0x1d50));
  return;
}


// ===== 004622dc  FUN_004622dc =====

void FUN_004622dc(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  auVar12 = FUN_0044127c(*(undefined8 *)(param_1 + 8));
  plVar8 = auVar12._8_8_;
  plVar6 = auVar12._0_8_;
  if (plVar6 == (long *)0x0) {
    bVar4 = 0;
    uVar10 = (uint)*(byte *)(param_1 + 0x1f2b) << 1;
  }
  else {
    bVar4 = (**(code **)(*plVar6 + 0x28))();
    uVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
    if ((bVar4 & 1) == 0) {
      uVar5 = (uint)*(byte *)(param_1 + 0x1f2b) << 1;
      if ((uVar7 & 1) != 0) goto LAB_0046236c;
      bVar4 = 0;
      uVar10 = uVar5;
    }
    else {
      if (*(char *)(param_1 + 0x1d78) == '\0') {
        if (*(char *)(param_1 + 0x1f2a) == '\0') {
          FUN_0043f2c0(*(undefined8 *)(param_1 + 8));
        }
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      if ((uVar7 & 1) == 0) {
        bVar4 = 1;
        uVar10 = uVar5;
      }
      else {
LAB_0046236c:
        uVar10 = uVar5 | 4;
        if (*(char *)(param_1 + 0x1f2b) != '\0') {
          uVar10 = uVar5;
        }
      }
    }
  }
  uVar5 = uVar10 & 4;
  if ((uint)*(byte *)(param_1 + 0x3d) != uVar5 >> 2) {
    uVar1 = **(undefined4 **)(param_1 + 0x1d80);
    *(char *)(param_1 + 0x3d) = (char)(uVar5 >> 2);
    FUN_004385e8(*(undefined8 *)(param_1 + 8),uVar1,uVar5 != 0);
  }
  if (uVar10 == 0 || *(char *)(param_1 + 0x3c) == '\0') {
    FUN_00485dc0(param_1,uVar10);
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x1d80) + 0x30);
    if (uVar10 == 0) goto LAB_0046241c;
  }
  else {
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x1d80) + 0x30);
  }
  FUN_00431e1c(uVar11);
LAB_0046241c:
  FUN_00431e0c(uVar11,uVar10);
  lVar9 = *(long *)(param_1 + 0x1d58);
  uVar5 = FUN_00431dec(uVar11);
  *(uint *)(lVar9 + 8) = uVar10 != 0 & uVar5;
  *(byte *)(param_1 + 0x1f2a) = bVar4 & 1;
  if (plVar8 != (long *)0x0) {
    plVar6 = plVar8 + 1;
    do {
      lVar9 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_005466cc(plVar8);
      return;
    }
  }
  return;
}


// ===== 004624b0  FUN_004624b0 =====

void FUN_004624b0(long param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)(param_1 + 0x3c) != '\0')) {
    return;
  }
  FUN_00485dc0();
  return;
}


// ===== 004624c4  FUN_004624c4 =====

undefined4 FUN_004624c4(long param_1)

{
  return **(undefined4 **)(param_1 + 0x1d80);
}


// ===== 004624d0  FUN_004624d0 =====

void FUN_004624d0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  
  plVar2 = *(long **)(*(long *)(param_1 + 8) + 0xf8);
  plVar3 = *(long **)(*(long *)(param_1 + 8) + 0x100);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))(plVar2,**(undefined4 **)(param_1 + 0x1d80));
  }
  if (plVar3 != (long *)0x0) {
    plVar2 = plVar3 + 1;
    do {
      lVar6 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_005466cc(plVar3);
      return;
    }
  }
  return;
}


// ===== 00462560  FUN_00462560 =====

void FUN_00462560(long param_1,byte param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e94,"../../discord_native_lib/src/media/local_user.cpp",0xf61,
                 "Set Video Broadcast ",param_2 & 1);
  }
  *(byte *)(param_1 + 0x2148) = param_2 & 1;
  if (((param_2 & 1) == 0) || (*(long *)(param_1 + 0x2248) == 0)) {
    if (*(long *)(param_1 + 0x2168) != 0) {
      FUN_00461f0c(param_1,1);
      return;
    }
  }
  else if (*(long *)(param_1 + 0x2168) == 0) {
    FUN_00468084(param_1);
    return;
  }
  return;
}


// ===== 00462608  FUN_00462608 =====

void FUN_00462608(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  int local_5c;
  int *local_58;
  undefined8 *puStack_50;
  undefined4 *local_48;
  undefined1 local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (*(long *)(param_1 + 0x1ec0) != 0) {
    FUN_004d7250();
  }
  plVar6 = *(long **)(param_1 + 0x2250);
  local_5c = 0;
  lVar5 = *(long *)(param_1 + 0x2248);
  local_48 = (int *)0x0;
  local_40 = 0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lVar5 != 0) {
    local_58 = (int *)0x0;
    local_5c = (**(code **)(**(long **)(param_1 + 0x2248) + 0x88))
                         (*(long **)(param_1 + 0x2248),&local_58);
    if (local_5c == 2) {
      local_48 = local_58;
      local_40 = 1;
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  FUN_005467a4(param_1 + 0x1fb8);
  if (*(char *)(param_1 + 0x2000) != '\0') {
    local_58 = &local_5c;
    puStack_50 = &local_48;
    FUN_007b6160(param_1 + 0x1fe0,&local_58,FUN_0046c1a0);
    FUN_005467c8(param_1 + 0x1fb8);
    if (*(long *)(lVar4 + 0x28) == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 00462764  FUN_00462764 =====

void FUN_00462764(long param_1,undefined1 param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 local_44 [4];
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_1 + 0x1f00) = param_2;
  local_44[0] = param_2;
  FUN_005467a4(param_1 + 0x2008);
  if (*(char *)(param_1 + 0x2050) == '\0') {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
               "this->has_value()","optional operator-> called on a disengaged value");
  }
  local_40 = local_44;
  FUN_007b6160(param_1 + 0x2030,&local_40,FUN_0046bccc);
  FUN_005467c8(param_1 + 0x2008);
  plVar2 = *(long **)(*(long *)(param_1 + 0x1d80) + 0x28);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))
              (plVar2,*(char *)(param_1 + 0x1d78) == '\0' && *(char *)(param_1 + 0x1f00) == '\0');
  }
  FUN_0042f234(*(undefined8 *)(param_1 + 0x18),param_1);
  if (*(long *)(*(long *)(param_1 + 0x1d80) + 0x28) != 0) {
    FUN_0042f8ec(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(*(long *)(param_1 + 8) + 0xe0));
    *(undefined8 *)(*(long *)(param_1 + 0x1d80) + 0x28) = 0;
  }
  FUN_0042e374(*(undefined8 *)(param_1 + 0x18));
  FUN_00460ac8(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00462894  FUN_00462894 =====

void FUN_00462894(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_1 + 0x1f00) = 0;
  FUN_005467a4(param_1 + 0x2058);
  if (*(char *)(param_1 + 0x20a0) == '\0') {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
               "this->has_value()","optional operator-> called on a disengaged value");
  }
  FUN_007b6160(param_1 + 0x2080,auStack_40,FUN_00441e10);
  FUN_005467c8(param_1 + 0x2058);
  plVar2 = *(long **)(*(long *)(param_1 + 0x1d80) + 0x28);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))
              (plVar2,*(char *)(param_1 + 0x1d78) == '\0' && *(char *)(param_1 + 0x1f00) == '\0');
  }
  FUN_0042f234(*(undefined8 *)(param_1 + 0x18),param_1);
  if (*(long *)(*(long *)(param_1 + 0x1d80) + 0x28) != 0) {
    FUN_0042f8ec(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(*(long *)(param_1 + 8) + 0xe0));
    *(undefined8 *)(*(long *)(param_1 + 0x1d80) + 0x28) = 0;
  }
  FUN_0042e374(*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004629b0  FUN_004629b0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004629b0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *******__src;
  undefined1 *__src_00;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *******__dest;
  undefined1 **__dest_00;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 *local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 *******local_70;
  ulong uStack_68;
  undefined8 local_60;
  long local_58;
  
  __dest_00 = &local_90;
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar6 = FUN_00417e08();
  if ((uVar6 & 1) == 0) {
    FUN_00623bb0("\r\t\n\t\n","../../discord_native_lib/src/media/local_user.cpp",0x1131,
                 "SetGoLiveDevices video: ",param_2," audio: ",param_3);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    __src = (undefined8 *******)*param_3;
    uVar6 = param_3[1];
    if (uVar6 < 0x17) {
      __dest = &local_70;
      local_60 = CONCAT17((char)uVar6,(undefined7)local_60);
    }
    else {
      if (0x7fffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar6 | 0xf) + 1;
      __dest = (undefined8 *******)operator_new(uVar1);
      local_60 = uVar1 | 0x8000000000000000;
      local_70 = __dest;
      uStack_68 = uVar6;
    }
    if ((__dest <= __src) && (__src < (undefined8 *******)((long)__dest + uVar6 + 1)))
    goto LAB_00462c30;
    memmove(__dest,__src,uVar6 + 1);
  }
  else {
    uStack_68 = param_3[1];
    local_70 = (undefined8 *******)*param_3;
    local_60 = param_3[2];
  }
  FUN_0042e9f4(uVar9,&local_70);
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x1f2b) = 1;
  *(undefined4 *)(param_1 + 0x1f04) = 3;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src_00 = (undefined1 *)*param_2;
    uVar6 = param_2[1];
    if (uVar6 < 0x17) {
      local_80 = CONCAT17((char)uVar6,(undefined7)local_80);
    }
    else {
      if (0x7fffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar6 | 0xf) + 1;
      __dest_00 = (undefined1 **)operator_new(uVar1);
      local_80 = uVar1 | 0x8000000000000000;
      local_90 = (undefined1 *)__dest_00;
      uStack_88 = uVar6;
    }
    if ((__dest_00 <= __src_00) && (__src_00 < (undefined1 *)((long)__dest_00 + uVar6 + 1))) {
LAB_00462c30:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest_00,__src_00,uVar6 + 1);
  }
  else {
    uStack_88 = param_2[1];
    local_90 = (undefined1 *)*param_2;
    local_80 = param_2[2];
  }
  auVar10 = FUN_004538bc(uVar9,&local_90);
  plVar7 = auVar10._8_8_;
  if ((long)local_80 < 0) {
    operator_delete(local_90);
  }
  if (auVar10._0_8_ == 0) {
    *(undefined1 *)(param_1 + 0x1f00) = 0;
    *(undefined1 *)(param_1 + 0x1f2b) = 0;
    FUN_0042ec90(*(undefined8 *)(param_1 + 0x18));
  }
  else {
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_00460888(param_1,auVar10._0_8_,plVar7);
    *(undefined1 *)(param_1 + 0x1f00) = 1;
    *(undefined1 *)(param_1 + 0x2149) = 1;
  }
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 1;
    do {
      lVar8 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00462c64  FUN_00462c64 =====

void FUN_00462c64(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/local_user.cpp",0x12c1,
                 "ClearGoLiveDevices");
  }
  FUN_00461f0c(param_1,1);
  FUN_0042f234(*(undefined8 *)(param_1 + 0x18),param_1);
  if (*(long *)(*(long *)(param_1 + 0x1d80) + 0x28) != 0) {
    FUN_0042f8ec(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(*(long *)(param_1 + 8) + 0xe0));
    *(undefined8 *)(*(long *)(param_1 + 0x1d80) + 0x28) = 0;
  }
  FUN_0042e374(*(undefined8 *)(param_1 + 0x18));
  FUN_0042ec90(*(undefined8 *)(param_1 + 0x18));
  FUN_00460888(param_1,0,0);
  *(undefined1 *)(param_1 + 0x1f00) = 0;
  *(undefined1 *)(param_1 + 0x1f2b) = 0;
  *(undefined1 *)(param_1 + 0x2149) = 0;
  if ((*(char *)(param_1 + 0x2148) == '\0') || (*(long *)(param_1 + 0x2248) == 0)) {
    if (*(long *)(param_1 + 0x2168) != 0) {
      FUN_00461f0c(param_1,1);
      return;
    }
  }
  else if (*(long *)(param_1 + 0x2168) == 0) {
    FUN_00468084(param_1);
    return;
  }
  return;
}


// ===== 00462d5c  FUN_00462d5c =====

/* WARNING: Removing unreachable block (ram,0x00462de4) */
/* WARNING: Removing unreachable block (ram,0x00462dfc) */
/* WARNING: Removing unreachable block (ram,0x004630f0) */
/* WARNING: Removing unreachable block (ram,0x00462e08) */
/* WARNING: Removing unreachable block (ram,0x00462df0) */
/* WARNING: Removing unreachable block (ram,0x00462e24) */
/* WARNING: Removing unreachable block (ram,0x00462e30) */
/* WARNING: Removing unreachable block (ram,0x004630c8) */
/* WARNING: Removing unreachable block (ram,0x00462e3c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00462d5c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  char cVar4;
  long lVar5;
  long *****ppppplVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  undefined1 auStack_c8 [8];
  char *local_c0;
  char **ppcStack_b8;
  long ****local_b0;
  ulong uStack_a8;
  ulong local_a0;
  char **local_98;
  long *local_88;
  long *local_80;
  long ****local_78;
  ulong uStack_70;
  ulong local_68;
  char *local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  local_88 = param_2;
  local_80 = param_3;
  uVar7 = FUN_00417e08();
  if ((uVar7 & 1) == 0) {
    local_50 = auStack_c8;
    local_60 = "../../discord_native_lib/src/media/local_user.cpp";
    uStack_58 = 0x2169;
    ppcStack_b8 = &local_60;
    local_c0 = "SetScreenshare: ";
    FUN_0046c700(&local_78,&local_88);
    local_98 = &local_c0;
    uStack_a8 = uStack_70;
    local_b0 = local_78;
    local_a0 = local_68;
    FUN_00623bb0(&DAT_001f6510,*ppcStack_b8,ppcStack_b8[1],local_c0,&local_b0);
    if ((long)local_a0 < 0) {
      operator_delete(local_b0);
    }
  }
  FUN_00461f0c(param_1,1);
  if (local_88 != (long *)0x0) {
    if (local_80 != (long *)0x0) {
      plVar1 = local_80 + 1;
      do {
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_00460888(param_1);
    *(undefined1 *)(param_1 + 0x2149) = 1;
    (**(code **)(*local_88 + 0x38))(&local_b0);
    uVar7 = uStack_a8;
    ppppplVar6 = (long *****)local_b0;
    if (-1 < (long)local_a0) {
      uVar7 = local_a0 >> 0x38;
      ppppplVar6 = &local_b0;
    }
    if ((ppppplVar6 == (long *****)0x0) && (uVar7 != 0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
                 "__len == 0 || __s != nullptr",
                 "string_view::string_view(_CharT *, size_t): received nullptr");
    }
    if (uVar7 == 0x23) {
      bVar9 = (((*ppppplVar6 != (long ****)0x3a64726f63736964 ||
                ppppplVar6[1] != (long ****)0x3a3a616964656d3a) ||
               ppppplVar6[2] != (long ****)0x6c616e7265747845) ||
              ppppplVar6[3] != (long ****)0x756f536f65646956) ||
              *(long *)((long)ppppplVar6 + 0x1b) != 0x656372756f536f65;
    }
    else {
      bVar9 = true;
    }
    if ((long)local_a0 < 0) {
      operator_delete(local_b0);
    }
    cVar4 = *(char *)(param_1 + 0x1f2c);
    bVar3 = bVar9;
    if (cVar4 != '\0') {
      bVar3 = true;
    }
    FUN_004b540c(param_1 + 0x1f88);
    if ((bool)*(char *)(param_1 + 0x1f2b) != bVar3) {
      *(bool *)(param_1 + 0x1f2b) = bVar3;
      FUN_00463b68(param_1);
    }
    if ((*(char *)(param_1 + 0x1eb4) == '\0') || (*(int *)(param_1 + 0x1eb0) == 0)) {
      if (cVar4 == '\0') {
        bVar9 = true;
      }
      if (bVar9 == false) {
        FUN_00463640(param_1);
      }
    }
    else {
      FUN_00463640(param_1);
      if (*(long *)(param_1 + 0x1ec0) != 0) {
        FUN_004d724c(*(long *)(param_1 + 0x1ec0),*(undefined4 *)(param_1 + 0x1eb0));
      }
    }
    FUN_00450b28(*(undefined8 *)(param_1 + 0x10));
  }
  if ((*(char *)(param_1 + 0x2148) == '\0') || (*(long *)(param_1 + 0x2248) == 0)) {
    if (*(long *)(param_1 + 0x2168) != 0) {
      FUN_00461f0c(param_1,1);
    }
  }
  else if (*(long *)(param_1 + 0x2168) == 0) {
    FUN_00468084(param_1);
  }
  plVar1 = local_80;
  if (local_80 != (long *)0x0) {
    plVar2 = local_80 + 1;
    do {
      lVar8 = *plVar2;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar9) {
        *plVar2 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*local_80 + 0x10))(local_80);
      FUN_005466cc(plVar1);
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004630f8  FUN_004630f8 =====

void FUN_004630f8(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 ****__dest;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 auStack_e8 [8];
  char *local_e0;
  char **ppcStack_d8;
  undefined8 ***local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  char **local_b8;
  long *local_a8;
  long *local_a0;
  undefined8 ***local_98;
  ulong uStack_90;
  undefined7 local_88;
  char cStack_81;
  char *local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  long *local_68;
  undefined8 uStack_60;
  code *local_58;
  undefined **local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  local_a8 = param_2;
  local_a0 = param_3;
  uVar7 = FUN_00417e08();
  if ((uVar7 & 1) == 0) {
    local_70 = auStack_e8;
    local_80 = "../../discord_native_lib/src/media/local_user.cpp";
    uStack_78 = 0x1901;
    ppcStack_d8 = &local_80;
    local_e0 = "SetVideoSource: ";
    FUN_0046c700(&local_98,&local_a8);
    if (cStack_81 < '\0') {
      if (uStack_90 < 0x17) {
        __dest = &local_d0;
        local_c0 = CONCAT17((char)uStack_90,(undefined7)local_c0);
      }
      else {
        if (0x7fffffffffffffef < uStack_90) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar7 = (uStack_90 | 0xf) + 1;
        __dest = (undefined8 ****)operator_new(uVar7);
        local_c0 = uVar7 | 0x8000000000000000;
        uStack_c8 = uStack_90;
        local_d0 = __dest;
      }
      if ((__dest <= local_98) && (local_98 < (undefined8 ****)((long)__dest + uStack_90 + 1))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      memmove(__dest,local_98,uStack_90 + 1);
      local_b8 = &local_e0;
      operator_delete(local_98);
    }
    else {
      local_c0 = CONCAT17(cStack_81,local_88);
      uStack_c8 = uStack_90;
      local_d0 = local_98;
      local_b8 = &local_e0;
    }
    FUN_00623bb0(&DAT_001f6510,*(undefined8 *)local_b8[1],*(undefined8 *)(local_b8[1] + 8),*local_b8
                 ,&local_d0);
    if ((long)local_c0 < 0) {
      operator_delete(local_d0);
    }
  }
  FUN_004312b4(param_1 + 0x22e8);
  if (local_a8 == (long *)0x0) {
    FUN_00461950(param_1);
  }
  else {
    (**(code **)(*local_a8 + 0x28))
              (local_a8,*(undefined4 *)(param_1 + 0x1dd8),*(undefined4 *)(param_1 + 0x1de0),
               *(undefined4 *)(param_1 + 0x1de8));
    plVar3 = local_a8;
    plVar1 = local_a8 + 0xd;
    FUN_005467a4(plVar1);
    if ((char)plVar3[0x16] == '\0') {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
                 "this->has_value()","optional operator-> called on a disengaged value");
    }
    FUN_007b5a0c(plVar3 + 0x12,param_1,param_1,FUN_0046c854);
    FUN_005467c8(plVar1);
    plVar3 = local_a0;
    plVar1 = local_a8;
    if (local_a0 != (long *)0x0) {
      plVar2 = local_a0 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = *plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = *plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_58 = FUN_0046c85c;
    local_50 = &PTR_FUN_00d1cab0;
    local_68 = (long *)operator_new(0x18);
    puVar8 = *(undefined8 **)(param_1 + 0x22f0);
    *local_68 = param_1;
    local_68[1] = (long)plVar1;
    puVar9 = *(undefined8 **)(param_1 + 0x22f8);
    local_68[2] = (long)plVar3;
    if (puVar8 < puVar9) {
      if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x23,"__location != nullptr","null pointer given to construct_at");
      }
      puVar8[1] = uStack_60;
      *puVar8 = local_68;
      puVar8[2] = local_58;
      puVar8[3] = local_50;
      if (local_50[1] != (undefined *)0x0) {
        local_58 = FUN_0040dec4;
        local_50 = (undefined **)&DAT_001f1910;
      }
      *(undefined8 **)(param_1 + 0x22f0) = puVar8 + 4;
    }
    else {
      FUN_004313e8(param_1 + 0x22e8,&local_68);
    }
    if ((code *)local_50[1] != (code *)0x0) {
      (*(code *)local_50[1])(local_68);
    }
    plVar2 = local_a0;
    plVar1 = local_a8;
    local_a8 = (long *)0x0;
    local_a0 = (long *)0x0;
    *(undefined1 *)(param_1 + 0x2149) = 1;
    FUN_00462d5c(param_1,plVar1,plVar2);
    if (plVar3 != (long *)0x0) {
      plVar1 = plVar3 + 1;
      do {
        lVar10 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        FUN_005466cc(plVar3);
      }
    }
  }
  plVar1 = local_a0;
  if (local_a0 != (long *)0x0) {
    plVar3 = local_a0 + 1;
    do {
      lVar10 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_a0 + 0x10))(local_a0);
      FUN_005466cc(plVar1);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00463488  FUN_00463488 =====

void FUN_00463488(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  *(undefined1 *)(param_1 + 0x1f2c) = param_4;
  FUN_004630f8();
  return;
}


// ===== 00463494  FUN_00463494 =====

uint FUN_00463494(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + 0x2250);
  plVar5 = *(long **)(param_1 + 0x2248);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (plVar5 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar5 + 0x50))();
  }
  if (plVar7 != (long *)0x0) {
    plVar5 = plVar7 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  return uVar4 & 1;
}


// ===== 00463524  FUN_00463524 =====

void FUN_00463524(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_3 == (long *)0x0) {
    FUN_00462d5c(param_1,param_2,0);
    return;
  }
  plVar1 = param_3 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_00462d5c(param_1,param_2,param_3);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 != 0) {
    return;
  }
  (**(code **)(*param_3 + 0x10))(param_3);
  FUN_005466cc(param_3);
  return;
}


// ===== 004635a4  FUN_004635a4 =====

void FUN_004635a4(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  FUN_00463640();
  lVar4 = *(long *)(param_1 + 0x1ec0);
  if (lVar4 != 0) {
    if (param_3 != (long *)0x0) {
      plVar1 = param_3 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_004d71c0(lVar4,param_2,param_3);
  }
  if (param_3 != (long *)0x0) {
    plVar1 = param_3 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*param_3 + 0x10))(param_3);
      FUN_005466cc(param_3);
      return;
    }
  }
  return;
}


// ===== 00463640  FUN_00463640 =====

void FUN_00463640(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long local_58 [2];
  code *local_48;
  undefined *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(long **)(param_1 + 0x2248) == (long *)0x0) ||
     (uVar2 = (**(code **)(**(long **)(param_1 + 0x2248) + 0x40))(), (uVar2 & 1) == 0)) {
    if ((*(long *)(param_1 + 0x1ec0) == 0) &&
       (lVar4 = FUN_00430018(*(undefined8 *)(param_1 + 0x18)), lVar4 != 0)) {
      FUN_005467a4(lVar4 + 0x10);
      if (*(char *)(lVar4 + 0x58) == '\0') {
LAB_00463878:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
                   "this->has_value()","optional operator-> called on a disengaged value");
      }
      FUN_007b5a0c(lVar4 + 0x38,param_1,param_1,FUN_0046db9c);
      FUN_005467c8(lVar4 + 0x10);
      FUN_005467a4(lVar4 + 0x60);
      if (*(char *)(lVar4 + 0xa8) == '\0') goto LAB_00463878;
      FUN_007b5a0c(lVar4 + 0x88,param_1,param_1,FUN_0046dba4);
      FUN_005467c8(lVar4 + 0x60);
      FUN_005467a4(lVar4 + 0xb0);
      if (*(char *)(lVar4 + 0xf8) == '\0') goto LAB_00463878;
      FUN_007b5a0c(lVar4 + 0xd8,param_1,param_1,FUN_0046dbac);
      FUN_005467c8(lVar4 + 0xb0);
      local_48 = FUN_0046dd54;
      local_40 = &DAT_001f6618;
      local_58[0] = param_1;
      FUN_004d7244(lVar4,local_58);
      if (*(code **)(local_40 + 8) != (code *)0x0) {
        (**(code **)(local_40 + 8))(local_58[0]);
      }
      FUN_004d71b4(lVar4,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb8));
      plVar3 = *(long **)(param_1 + 0x1ec0);
      *(long *)(param_1 + 0x1ec0) = lVar4;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
  }
  else {
    FUN_004620a0(param_1);
    if (*(char *)(param_1 + 0x1f00) == '\0') {
      (**(code **)(**(long **)(param_1 + 0x2248) + 0x48))
                (*(long **)(param_1 + 0x2248),*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb8));
      FUN_0042ff48(*(undefined8 *)(param_1 + 0x18),1);
      *(char *)(param_1 + 0x1f00) = '\x01';
      plVar3 = *(long **)(*(long *)(param_1 + 0x1d80) + 0x28);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x40))(plVar3,0);
      }
      FUN_0042f234(*(undefined8 *)(param_1 + 0x18),param_1);
      if (*(long *)(*(long *)(param_1 + 0x1d80) + 0x28) != 0) {
        FUN_0042f8ec(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(*(long *)(param_1 + 8) + 0xe0))
        ;
        *(undefined8 *)(*(long *)(param_1 + 0x1d80) + 0x28) = 0;
      }
      FUN_0042e374(*(undefined8 *)(param_1 + 0x18));
      if (*(long *)(lVar1 + 0x28) == local_38) {
        FUN_00460ac8(param_1);
        return;
      }
      goto LAB_004638a0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_004638a0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004638a4  FUN_004638a4 =====

void FUN_004638a4(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,undefined4 param_7)

{
  long lVar1;
  undefined8 uVar2;
  char *local_c8 [2];
  char local_b1;
  char **local_b0;
  undefined **local_a8;
  void *local_a0;
  char local_89;
  undefined1 auStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_004df134(auStack_80,7);
  local_c8[0] = "videohook_initialize";
  FUN_004df590(&local_a8,local_c8);
  local_b0 = (char **)&DAT_001ab396;
  uVar2 = FUN_004e148c(auStack_80,&local_b0);
  FUN_004dfa04(uVar2,&local_a8);
  FUN_004df880(&local_a8);
  FUN_004df1ec(&local_a8,param_2);
  local_c8[0] = "backend";
  uVar2 = FUN_004e148c(auStack_80,local_c8);
  FUN_004dfa04(uVar2,&local_a8);
  FUN_004df880(&local_a8);
  FUN_004df1ec(&local_a8,param_3);
  local_c8[0] = "format";
  uVar2 = FUN_004e148c(auStack_80,local_c8);
  FUN_004dfa04(uVar2,&local_a8);
  FUN_004df880(&local_a8);
  FUN_004df1ec(&local_a8,param_4);
  local_c8[0] = "framebufferFormat";
  uVar2 = FUN_004e148c(auStack_80,local_c8);
  FUN_004dfa04(uVar2,&local_a8);
  FUN_004df880(&local_a8);
  FUN_004df1ec(&local_a8,param_5);
  local_c8[0] = "sampleCount";
  uVar2 = FUN_004e148c(auStack_80,local_c8);
  FUN_004dfa04(uVar2,&local_a8);
  FUN_004df880(&local_a8);
  FUN_004df5b4(&local_a8,param_6);
  local_c8[0] = "success";
  uVar2 = FUN_004e148c(auStack_80,local_c8);
  FUN_004dfa04(uVar2,&local_a8);
  FUN_004df880(&local_a8);
  FUN_004df5b4(&local_a8,param_7);
  local_c8[0] = "reinitialization";
  uVar2 = FUN_004e148c(auStack_80,local_c8);
  FUN_004dfa04(uVar2,&local_a8);
  FUN_004df880(&local_a8);
  FUN_004e36c8(&local_a8);
  FUN_004e36e0(local_c8,&local_a8,auStack_80);
  FUN_005467a4(param_1 + 0x20f8);
  if (*(char *)(param_1 + 0x2140) == '\0') {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
               "this->has_value()","optional operator-> called on a disengaged value");
  }
  local_b0 = local_c8;
  FUN_007b6160(param_1 + 0x2120,&local_b0,FUN_0046af44);
  FUN_005467c8(param_1 + 0x20f8);
  if (local_b1 < '\0') {
    operator_delete(local_c8[0]);
  }
  local_a8 = &PTR_FUN_00d1f540;
  if (local_89 < '\0') {
    operator_delete(local_a0);
  }
  FUN_004e36c0(&local_a8);
  if ((param_6 & 1) == 0) {
    param_2 = 0;
  }
  *(undefined4 *)(param_1 + 0x1f08) = param_2;
  FUN_004df880(auStack_80);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00463b68  FUN_00463b68 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00463b68(long param_1)

{
  char *__s;
  undefined *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  size_t sVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  double dVar13;
  undefined1 auStack_500 [16];
  code *local_4f0;
  code *pcStack_4e8;
  undefined1 auStack_4e0 [16];
  code *local_4d0;
  code *pcStack_4c8;
  void *local_4c0;
  undefined8 uStack_4b8;
  long local_4b0;
  void *local_4a8;
  undefined8 uStack_4a0;
  long local_498;
  void *local_490;
  undefined8 uStack_488;
  long local_480;
  undefined8 *local_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined1 auStack_460 [64];
  undefined4 local_420 [2];
  undefined1 auStack_418 [64];
  undefined8 local_3d8;
  undefined1 uStack_3d0;
  undefined7 uStack_3cf;
  char cStack_3c8;
  undefined8 uStack_3c7;
  undefined1 auStack_3b8 [216];
  undefined4 local_2e0;
  undefined1 auStack_2d8 [64];
  undefined8 local_298;
  undefined4 uStack_290;
  uint uStack_28c;
  char local_288;
  undefined8 uStack_287;
  char local_278;
  void *local_220 [2];
  char local_209;
  void *local_208;
  char local_1f1;
  void *local_1f0;
  undefined4 local_1e8;
  char local_1e4 [11];
  char local_1d9;
  void *local_1d8;
  undefined8 uStack_1d0;
  long local_1c8;
  undefined4 local_1c0;
  undefined2 uStack_1bc;
  char cStack_1ba;
  undefined1 uStack_1b9;
  char local_1a9;
  void *local_1a8;
  undefined8 uStack_1a0;
  long local_198;
  undefined4 local_190;
  undefined2 uStack_18c;
  char cStack_18a;
  undefined1 uStack_189;
  char local_179;
  void *local_178;
  undefined8 uStack_170;
  long local_168;
  undefined4 local_ec;
  undefined1 local_e8;
  char local_e0;
  long local_88;
  
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  plVar7 = *(long **)(*(long *)(param_1 + 0x1d80) + 0x28);
  if (plVar7 == (long *)0x0) {
LAB_00464190:
    if (*(long *)(lVar4 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if ((*(char *)(param_1 + 0x1f2b) != '\0') && (*(char *)(param_1 + 0x1f2d) == '\0')) {
    *(undefined1 *)(param_1 + 0x1f2d) = 1;
    FUN_0042f234(*(undefined8 *)(param_1 + 0x18),param_1);
    if (*(long *)(*(long *)(param_1 + 0x1d80) + 0x28) != 0) {
      FUN_0042f8ec(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(*(long *)(param_1 + 8) + 0xe0));
      *(undefined8 *)(*(long *)(param_1 + 0x1d80) + 0x28) = 0;
    }
    FUN_0042e374(*(undefined8 *)(param_1 + 0x18));
    FUN_00460ac8(param_1);
    plVar7 = *(long **)(*(long *)(param_1 + 0x1d80) + 0x28);
  }
  uVar8 = (**(code **)(*plVar7 + 0x18))();
  FUN_00465350(auStack_3b8,uVar8);
  __s = *(char **)(param_1 + 0xd0);
  if (-1 < *(char *)(param_1 + 0xe7)) {
    __s = (char *)(param_1 + 0xd0);
  }
  if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0xff,
               "__s != nullptr",
               "null pointer passed to non-null argument of char_traits<...>::length");
  }
  dVar13 = *(double *)(param_1 + 0x1db0);
  uVar3 = *(undefined1 *)(param_1 + 200);
  sVar9 = strlen(__s);
  puVar1 = &DAT_001a8867;
  if (*(uint *)(param_1 + 0xf0) < 2) {
    puVar1 = &DAT_0019cb7e;
  }
  uVar2 = *(undefined4 *)(param_1 + 0xe8);
  FUN_00465d60(local_220,"stereo",puVar1);
  FUN_005490bc(&local_490,*(undefined1 *)(param_1 + 0x1da8));
  local_1d9 = '\f';
  if (((void **)0x1b0913 <= &local_1f0) || (local_1e4 <= "useinbandfec")) {
    local_1f0 = (void *)s_useinbandfec_001b0912._0_8_;
    local_1e4[0] = '\0';
    local_1e8 = 0x63656664;
    uStack_1d0 = uStack_488;
    local_1d8 = local_490;
    local_1c8 = local_480;
    local_490 = (void *)0x0;
    uStack_488 = 0;
    local_480 = 0;
    FUN_005490bc(&local_4a8,(int)(dVar13 * 100.0));
    local_1a9 = '\x06';
    if (("inplr" <= &local_1c0) || (&cStack_1ba <= "minplr")) {
      cStack_1ba = '\0';
      uStack_1bc = 0x726c;
      local_1c0 = 0x706e696d;
      uStack_1a0 = uStack_4a0;
      local_1a8 = local_4a8;
      local_198 = local_498;
      local_4a8 = (void *)0x0;
      uStack_4a0 = 0;
      local_498 = 0;
      FUN_005490bc(&local_4c0,*(undefined1 *)(param_1 + 0x1daa));
      local_179 = '\x06';
      if (("sedtx" <= &local_190) || (&cStack_18a <= "usedtx")) {
        uStack_18c = 0x7874;
        uStack_170 = uStack_4b8;
        local_178 = local_4c0;
        local_190 = 0x64657375;
        local_168 = local_4b0;
        cStack_18a = '\0';
        local_4c0 = (void *)0x0;
        uStack_4b8 = 0;
        local_4b0 = 0;
        local_470 = 0;
        uStack_468 = 0;
        local_478 = &local_470;
        FUN_004414e0(&local_478,&local_470,local_220,local_220);
        FUN_004414e0(&local_478,&local_470,&local_1f0,&local_1f0);
        FUN_004414e0(&local_478,&local_470,&local_1c0,&local_1c0);
        FUN_004414e0(&local_478,&local_470,&local_190,&local_190);
        FUN_006676e8(auStack_460,__s,sVar9,uVar2,2,&local_478);
        FUN_00843440(local_420,uVar3,auStack_460);
        local_2e0 = local_420[0];
        if (local_278 == '\0') {
          FUN_00667388(auStack_2d8,auStack_418);
          local_298 = local_3d8;
          uStack_287 = uStack_3c7;
          uStack_290._1_3_ = (undefined3)uStack_3cf;
          uStack_290 = CONCAT31(uStack_290._1_3_,uStack_3d0);
          uStack_28c = (uint)((uint7)uStack_3cf >> 0x18);
          local_288 = cStack_3c8;
          local_278 = '\x01';
        }
        else {
          FUN_006678fc();
          local_298 = local_3d8;
          uStack_287 = uStack_3c7;
          uStack_290._1_3_ = (undefined3)uStack_3cf;
          uStack_290 = CONCAT31(uStack_290._1_3_,uStack_3d0);
          uStack_28c = (uint)((uint7)uStack_3cf >> 0x18);
          local_288 = cStack_3c8;
        }
        FUN_0084348c(local_420);
        FUN_006678ac(auStack_460);
        FUN_00441e1c(&local_478,local_470);
        if (local_168 < 0) {
          operator_delete(local_178);
        }
        if (local_179 < '\0') {
          operator_delete((void *)CONCAT17(uStack_189,
                                           CONCAT16(cStack_18a,CONCAT24(uStack_18c,local_190))));
        }
        if (local_198 < 0) {
          operator_delete(local_1a8);
        }
        if (local_1a9 < '\0') {
          operator_delete((void *)CONCAT17(uStack_1b9,
                                           CONCAT16(cStack_1ba,CONCAT24(uStack_1bc,local_1c0))));
        }
        if (local_1c8 < 0) {
          operator_delete(local_1d8);
        }
        if (local_1d9 < '\0') {
          operator_delete(local_1f0);
        }
        if (local_1f1 < '\0') {
          operator_delete(local_208);
        }
        if (local_209 < '\0') {
          operator_delete(local_220[0]);
        }
        if (local_4b0 < 0) {
          operator_delete(local_4c0);
        }
        if (local_498 < 0) {
          operator_delete(local_4a8);
        }
        if (local_480 < 0) {
          operator_delete(local_490);
        }
        if (local_278 == '\0') {
LAB_004641ec:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
                     "this->has_value()","optional operator-> called on a disengaged value");
        }
        if (local_288 == *(char *)(param_1 + 0xf9)) {
          if (local_288 != '\0') {
            uStack_28c = (uint)*(byte *)(param_1 + 0xf8);
          }
        }
        else if (local_288 == '\0') {
          uStack_28c = (uint)*(byte *)(param_1 + 0xf8);
          local_288 = '\x01';
        }
        else {
          local_288 = '\0';
        }
        plVar7 = *(long **)(*(long *)(param_1 + 0x1d80) + 0x28);
        local_4d0 = FUN_004473ec;
        pcStack_4c8 = FUN_0046cc70;
        (**(code **)(*plVar7 + 0x20))(plVar7,auStack_3b8,auStack_4e0);
        (*local_4d0)(0,auStack_4e0,auStack_4e0);
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x1d80) + 0x30) + 0xf8) =
             *(undefined1 *)(param_1 + 200);
        uVar10 = FUN_00417e08();
        if ((uVar10 & 1) == 0) {
          FUN_00623bb0(&DAT_001f1906,"../../discord_native_lib/src/media/local_user.cpp",0x2dd1,
                       "Setting voice bitrate to: ",
                       *(undefined4 *)(*(long *)(param_1 + 0x1d80) + 0x20)," [bps]");
        }
        lVar11 = *(long *)(param_1 + 0x1d80);
        if (0 < *(int *)(lVar11 + 0x20)) {
          uVar8 = (**(code **)(**(long **)(lVar11 + 0x28) + 0x18))();
          FUN_00465350(local_220,uVar8);
          if (local_e0 == '\0') goto LAB_004641ec;
          local_ec = *(undefined4 *)(*(long *)(param_1 + 0x1d80) + 0x20);
          local_e8 = 1;
          plVar7 = *(long **)(*(long *)(param_1 + 0x1d80) + 0x28);
          local_4f0 = FUN_004473ec;
          pcStack_4e8 = FUN_0046cd9c;
          (**(code **)(*plVar7 + 0x20))(plVar7,local_220,auStack_500);
          (*local_4f0)(0,auStack_500,auStack_500);
          FUN_008427b0(local_220);
          lVar11 = *(long *)(param_1 + 0x1d80);
        }
        uVar8 = *(undefined8 *)(lVar11 + 0x28);
        uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb8);
        if (*(char *)(param_1 + 0x1f2b) == '\0') {
          iVar6 = FUN_00485f7c(param_1);
          bVar5 = iVar6 == 1;
        }
        else {
          bVar5 = true;
        }
        FUN_0045a9a4(uVar12,uVar8,bVar5,*(undefined4 *)(param_1 + 0xe8),
                     *(undefined4 *)(param_1 + 0xf0));
        FUN_008427b0(auStack_3b8);
        goto LAB_00464190;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 00464240  FUN_00464240 =====

void FUN_00464240(long param_1)

{
  short *psVar1;
  ulong uVar2;
  short *psVar3;
  
  if (*(char *)(param_1 + 0xa0) != '\0') {
    psVar3 = (short *)(param_1 + 0x70);
    uVar2 = *(ulong *)(param_1 + 0x78);
    psVar1 = *(short **)psVar3;
    if (-1 < (char)*(byte *)(param_1 + 0x87)) {
      uVar2 = (ulong)*(byte *)(param_1 + 0x87);
      psVar1 = psVar3;
    }
    if (psVar1 == (short *)0x0 && uVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
                 "__len == 0 || __s != nullptr",
                 "string_view::string_view(_CharT *, size_t): received nullptr");
    }
    if ((uVar2 != 3) || (*psVar1 != 0x5056 || (char)psVar1[1] != '8')) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4eff,"../../discord_native_lib/src/media/local_user.cpp",0x2362,
                     "Request to fallback from: ",psVar3," to other video encoders");
      }
      FUN_0043b21c(*(undefined8 *)(param_1 + 8),psVar3);
      return;
    }
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/local_user.cpp",0x234a,
                   "Request to fallback from: VP8, ignoring");
      return;
    }
  }
  return;
}


// ===== 00464354  FUN_00464354 =====

void FUN_00464354(long param_1)

{
  FUN_00464240(param_1 + -0x1d48);
  return;
}


// ===== 00464360  FUN_00464360 =====

void FUN_00464360(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  if ((param_3 & 1) != 0) {
    FUN_00464240();
    return;
  }
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00623bb0(&DAT_001f4eff,"../../discord_native_lib/src/media/local_user.cpp",0x23ca,
               "Webrtc request to fallback to video encoder: ",param_2,
               " We currently don\'t support fallback to a designated encoder. No-op");
  return;
}


// ===== 004643c8  FUN_004643c8 =====

void FUN_004643c8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  if ((param_3 & 1) != 0) {
    FUN_00464240(param_1 + -0x1d48);
    return;
  }
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00623bb0(&DAT_001f4eff,"../../discord_native_lib/src/media/local_user.cpp",0x23ca,
               "Webrtc request to fallback to video encoder: ",param_2,
               " We currently don\'t support fallback to a designated encoder. No-op");
  return;
}


// ===== 00464438  FUN_00464438 =====

/* WARNING: Removing unreachable block (ram,0x00464c3c) */
/* WARNING: Removing unreachable block (ram,0x00464f9c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00464438(long param_1,undefined4 *param_2)

{
  long lVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  size_t sVar4;
  int *__s1;
  size_t sVar5;
  undefined8 *******pppppppuVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  long lVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 uVar18;
  int *piVar19;
  undefined8 *puVar20;
  undefined8 *******__dest;
  void *pvVar21;
  undefined4 *puVar22;
  int *__s2;
  long lVar23;
  ulong uVar24;
  bool bVar25;
  bool bVar26;
  int *piVar27;
  undefined4 *puVar28;
  undefined8 *puVar29;
  int *piVar30;
  int *piVar31;
  bool bVar32;
  undefined8 *puVar33;
  int *piVar34;
  long lVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  void *local_2b8;
  void *local_2b0;
  void *local_2a8;
  undefined1 auStack_2a0 [16];
  code *local_290;
  code *pcStack_288;
  undefined1 auStack_280 [16];
  code *local_270;
  code *pcStack_268;
  int local_258;
  undefined8 *******local_250;
  ulong uStack_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined5 uStack_220;
  undefined3 local_21b;
  undefined5 uStack_218;
  undefined4 local_210;
  int iStack_20c;
  int iStack_208;
  undefined4 uStack_204;
  undefined8 local_200;
  undefined4 local_170;
  int local_16c;
  undefined4 local_dc;
  undefined1 local_d8;
  char local_d0;
  long local_78;
  
  lVar11 = tpidr_el0;
  local_78 = *(long *)(lVar11 + 0x28);
  cVar7 = *(char *)((long)param_2 + 9);
  pbVar2 = (byte *)(param_1 + 0x1d78);
  if (cVar7 != '\0') {
    *pbVar2 = *(byte *)(param_2 + 2) ^ 1;
  }
  if (*(char *)(param_2 + 1) != '\0') {
    *(undefined4 *)(*(long *)(param_1 + 0x1d80) + 0x20) = *param_2;
    uVar16 = FUN_00417e08();
    if ((uVar16 & 1) == 0) {
      FUN_00623bb0(&DAT_001f1906,"../../discord_native_lib/src/media/local_user.cpp",0x2471,
                   "Setting voice bitrate to: ",*(undefined4 *)(*(long *)(param_1 + 0x1d80) + 0x20),
                   " [bps]");
    }
    plVar17 = *(long **)(*(long *)(param_1 + 0x1d80) + 0x28);
    if (plVar17 != (long *)0x0) {
      uVar18 = (**(code **)(*plVar17 + 0x18))();
      FUN_00465350(&local_210,uVar18);
      lVar23 = *(long *)(param_1 + 0x1d80);
      local_170 = 6000;
      local_16c = *(int *)(lVar23 + 0x20);
      if (local_16c < 1) {
        local_16c = 64000;
      }
      if (local_d0 == '\0') {
LAB_0046530c:
        local_170 = 6000;
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
                   "this->has_value()","optional operator-> called on a disengaged value");
      }
      local_dc = *(undefined4 *)(lVar23 + 0x20);
      local_d8 = 1;
      local_270 = FUN_004473ec;
      pcStack_268 = FUN_0046ca18;
      (**(code **)(**(long **)(lVar23 + 0x28) + 0x20))
                (*(long **)(lVar23 + 0x28),&local_210,auStack_280);
      (*local_270)(0,auStack_280,auStack_280);
      FUN_008427b0(&local_210);
    }
  }
  if (*(char *)(param_2 + 6) != '\0') {
    uVar18 = *(undefined8 *)(param_2 + 3);
    *(undefined4 *)(param_1 + 0x1da0) = param_2[5];
    *(undefined8 *)(param_1 + 0x1d98) = uVar18;
    FUN_004a2258(*(undefined4 *)(param_1 + 0x1d9c),
                 *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x450),(uint)uVar18 & 0xff,
                 *(undefined4 *)(param_1 + 0x1da0),*(undefined4 *)(param_1 + 0x38));
  }
  bVar12 = *(char *)(param_2 + 0xe) != '\0';
  if (*(char *)(param_2 + 0xe) != '\0') {
    FUN_004899c4(param_1 + 0x1da8,param_2 + 8);
  }
  if (*(char *)(param_2 + 0x58) == '\0') {
    bVar25 = false;
    bVar32 = false;
    bVar26 = false;
  }
  else {
    lVar23 = *(long *)(param_2 + 0x52);
    puVar28 = *(undefined4 **)(param_2 + 0x54);
    uVar16 = (long)puVar28 - lVar23;
    if (uVar16 == 0) {
      bVar26 = false;
      bVar32 = false;
      bVar25 = false;
    }
    else {
      if (0x38e38e38e38e38e < (ulong)(((long)uVar16 >> 3) * -0x71c71c71c71c71c7)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      piVar19 = (int *)operator_new(uVar16);
      lVar1 = 0;
      do {
        lVar35 = lVar1;
        puVar22 = (undefined4 *)(lVar23 + lVar35);
        puVar3 = (undefined4 *)((long)piVar19 + lVar35);
        puVar29 = (undefined8 *)(puVar3 + 2);
        *puVar3 = *puVar22;
        if (*(char *)((long)puVar22 + 0x1f) < '\0') {
          uVar16 = *(ulong *)(puVar22 + 4);
          puVar33 = *(undefined8 **)(puVar22 + 2);
          if (uVar16 < 0x17) {
            *(char *)((long)piVar19 + lVar35 + 0x1f) = (char)uVar16;
            puVar20 = puVar29;
          }
          else {
            if (0x7fffffffffffffef < uVar16) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar24 = (uVar16 | 0xf) + 1;
            puVar20 = (undefined8 *)operator_new(uVar24);
            *puVar29 = puVar20;
            *(ulong *)((long)piVar19 + lVar35 + 0x10) = uVar16;
            *(ulong *)((long)piVar19 + lVar35 + 0x18) = uVar24 | 0x8000000000000000;
          }
          if ((puVar20 <= puVar33) && (puVar33 < (undefined8 *)((long)puVar20 + uVar16 + 1)))
          goto LAB_004652e4;
          memmove(puVar20,puVar33,uVar16 + 1);
        }
        else {
          uVar36 = *(undefined8 *)(puVar22 + 4);
          uVar18 = *(undefined8 *)(puVar22 + 2);
          *(undefined8 *)(puVar3 + 6) = *(undefined8 *)(puVar22 + 6);
          *(undefined8 *)(puVar3 + 4) = uVar36;
          *puVar29 = uVar18;
        }
        uVar38 = *(undefined8 *)(puVar22 + 10);
        uVar37 = *(undefined8 *)(puVar22 + 8);
        uVar36 = *(undefined8 *)(puVar22 + 0xe);
        uVar18 = *(undefined8 *)(puVar22 + 0xc);
        lVar1 = lVar35 + 0x48;
        *(undefined8 *)((long)piVar19 + lVar35 + 0x3d) = *(undefined8 *)((long)puVar22 + 0x3d);
        *(undefined8 *)((long)piVar19 + lVar35 + 0x28) = uVar38;
        *(undefined8 *)((long)piVar19 + lVar35 + 0x20) = uVar37;
        *(undefined8 *)((long)piVar19 + lVar35 + 0x38) = uVar36;
        *(undefined8 *)((long)piVar19 + lVar35 + 0x30) = uVar18;
      } while (puVar22 + 0x12 != puVar28);
      if (lVar1 == 0) {
        bVar26 = false;
        bVar32 = false;
        bVar25 = false;
      }
      else {
        bVar32 = false;
        bVar26 = false;
        bVar25 = false;
        piVar27 = piVar19;
        do {
          piVar30 = *(int **)(param_1 + 0x1d80);
          piVar31 = piVar27 + 2;
          bVar8 = *(byte *)((long)piVar27 + 0x1f);
          bVar9 = *(byte *)((long)piVar30 + 0x1f);
          uVar16 = (ulong)bVar9;
          sVar4 = *(size_t *)(piVar30 + 4);
          if (-1 < (char)bVar9) {
            sVar4 = uVar16;
          }
          sVar5 = *(size_t *)(piVar27 + 4);
          if (-1 < (char)bVar8) {
            sVar5 = (ulong)bVar8;
          }
          if (sVar4 == sVar5) {
            piVar34 = piVar30 + 2;
            __s1 = *(int **)piVar34;
            if (-1 < (char)bVar9) {
              __s1 = piVar34;
            }
            __s2 = *(int **)piVar31;
            if (-1 < (char)bVar8) {
              __s2 = piVar31;
            }
            if ((char)bVar9 < '\0') {
              if ((sVar4 != 0) && (iVar14 = memcmp(__s1,__s2,sVar4), iVar14 != 0))
              goto LAB_00464948;
            }
            else if (bVar9 != 0) {
              do {
                if ((char)*piVar34 != (char)*__s2) goto LAB_00464948;
                uVar16 = uVar16 - 1;
                piVar34 = (int *)((long)piVar34 + 1);
                __s2 = (int *)((long)__s2 + 1);
              } while (uVar16 != 0);
            }
            if (*piVar27 == 0) {
              iVar14 = piVar27[8];
              if ((iVar14 != 0) && (*piVar30 != iVar14)) {
                *piVar30 = iVar14;
                bVar26 = true;
              }
              iVar14 = piVar27[0xb];
              if ((0 < iVar14) && (piVar30[8] != iVar14)) {
                piVar30[8] = iVar14;
                uVar16 = FUN_00417e08();
                if ((uVar16 & 1) == 0) {
                  FUN_00623bb0(&DAT_001f1906,"../../discord_native_lib/src/media/local_user.cpp",
                               0x25c9,"Setting voice bitrate to: ",
                               *(undefined4 *)(*(long *)(param_1 + 0x1d80) + 0x20)," [bps]");
                }
                plVar17 = *(long **)(*(long *)(param_1 + 0x1d80) + 0x28);
                if (plVar17 != (long *)0x0) {
                  uVar18 = (**(code **)(*plVar17 + 0x18))();
                  FUN_00465350(&local_210,uVar18);
                  lVar23 = *(long *)(param_1 + 0x1d80);
                  local_170 = 6000;
                  local_16c = *(int *)(lVar23 + 0x20);
                  if (local_16c < 1) {
                    local_16c = 64000;
                  }
                  if (local_d0 == '\0') goto LAB_0046530c;
                  local_dc = *(undefined4 *)(lVar23 + 0x20);
                  local_d8 = 1;
                  local_290 = FUN_004473ec;
                  pcStack_288 = FUN_0046cb44;
                  (**(code **)(**(long **)(lVar23 + 0x28) + 0x20))
                            (*(long **)(lVar23 + 0x28),&local_210,auStack_2a0);
                  (*local_290)(0,auStack_2a0,auStack_2a0);
                  FUN_008427b0(&local_210);
                }
              }
              bVar13 = *(long *)(*(long *)(param_1 + 0x1d80) + 0x28) == 0;
              if ((char)piVar27[10] == '\0') {
                if (!bVar13) {
                  bVar26 = true;
                }
              }
              else if (bVar13) {
                bVar26 = true;
              }
            }
          }
LAB_00464948:
          piVar30 = *(int **)(param_1 + 0x2150);
          iVar14 = *piVar27;
          piVar34 = *(int **)(param_1 + 0x2158);
          local_258 = iVar14;
          if (*(char *)((long)piVar27 + 0x1f) < '\0') {
            pppppppuVar6 = *(undefined8 ********)(piVar27 + 2);
            uVar16 = *(ulong *)(piVar27 + 4);
            if (uVar16 < 0x17) {
              local_240 = CONCAT17((char)uVar16,(undefined7)local_240);
              __dest = &local_250;
            }
            else {
              if (0x7fffffffffffffef < uVar16) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              uVar24 = (uVar16 | 0xf) + 1;
              __dest = (undefined8 *******)operator_new(uVar24);
              local_240 = uVar24 | 0x8000000000000000;
              local_250 = __dest;
              uStack_248 = uVar16;
            }
            if ((__dest <= pppppppuVar6) &&
               (pppppppuVar6 < (undefined8 *******)((long)__dest + uVar16 + 1))) goto LAB_004652e4;
            memmove(__dest,pppppppuVar6,uVar16 + 1);
          }
          else {
            uStack_248 = *(ulong *)(piVar27 + 4);
            local_250 = *(undefined8 ********)piVar31;
            local_240 = *(ulong *)(piVar27 + 6);
          }
          uVar16 = local_240;
          uStack_230 = *(undefined8 *)(piVar27 + 10);
          local_238 = *(undefined8 *)(piVar27 + 8);
          uStack_220 = (undefined5)*(undefined8 *)(piVar27 + 0xe);
          uStack_228 = *(undefined8 *)(piVar27 + 0xc);
          local_21b = (undefined3)*(undefined8 *)((long)piVar27 + 0x3d);
          uStack_218 = (undefined5)((ulong)*(undefined8 *)((long)piVar27 + 0x3d) >> 0x18);
          piVar31 = piVar30;
          if (piVar30 != piVar34) {
            sVar4 = uStack_248;
            pppppppuVar6 = local_250;
            if (-1 < (long)local_240) {
              sVar4 = local_240 >> 0x38;
              pppppppuVar6 = &local_250;
            }
            do {
              bVar8 = *(byte *)((long)piVar30 + 0x1f);
              sVar5 = *(size_t *)(piVar30 + 4);
              if (-1 < (char)bVar8) {
                sVar5 = (ulong)bVar8;
              }
              if (sVar5 == sVar4) {
                if ((char)bVar8 < '\0') {
                  if ((sVar4 != 0) &&
                     (iVar15 = memcmp(*(void **)(piVar30 + 2),pppppppuVar6,sVar4), iVar15 != 0))
                  goto LAB_00464a2c;
                }
                else if (bVar8 != 0) {
                  uVar24 = 0;
                  do {
                    if (*(char *)((long)piVar30 + uVar24 + 8) !=
                        *(char *)((long)pppppppuVar6 + uVar24)) goto LAB_00464a2c;
                    uVar24 = uVar24 + 1;
                  } while (bVar8 != uVar24);
                }
                piVar31 = piVar30;
                if (iVar14 == 1) break;
              }
LAB_00464a2c:
              piVar30 = piVar30 + 0x10;
              piVar31 = piVar34;
            } while (piVar30 != piVar34);
          }
          if ((long)uVar16 < 0) {
            operator_delete(local_250);
            piVar34 = *(int **)(param_1 + 0x2158);
          }
          if (piVar31 != piVar34) {
            iVar14 = piVar27[8];
            if (((iVar14 != 0) && (*piVar31 != iVar14)) &&
               (*piVar31 = iVar14, *(long *)(param_1 + 0x2168) != 0)) {
              bVar32 = true;
            }
            iVar14 = piVar27[0xb];
            if (((0 < iVar14) && (piVar31[8] != iVar14)) &&
               (piVar31[8] = iVar14, *(long *)(param_1 + 0x2168) != 0)) {
              bVar25 = true;
            }
            iVar14 = piVar27[0xc];
            if (((0 < iVar14) && (piVar31[9] != iVar14)) &&
               (piVar31[9] = iVar14, *(long *)(param_1 + 0x2168) != 0)) {
              bVar25 = true;
            }
            iVar14 = piVar27[0xd];
            if (((0 < iVar14) && (piVar31[10] != iVar14)) &&
               (piVar31[10] = iVar14, *(long *)(param_1 + 0x2168) != 0)) {
              bVar25 = true;
            }
            iVar14 = piVar27[0xe];
            if ((0 < iVar14) && (iVar14 != piVar31[0xb])) {
              piVar31[0xb] = iVar14;
            }
            iVar14 = piVar27[0x10];
            if ((0 < iVar14) &&
               (iVar15 = piVar31[0xd], lVar23 = *(long *)(param_1 + 0x2168), piVar31[0xd] = iVar14,
               iVar14 != iVar15 && lVar23 != 0)) {
              bVar32 = true;
            }
            if ((piVar27[0xf] != piVar31[0xc]) &&
               (piVar31[0xc] = piVar27[0xf], *(long *)(param_1 + 0x2168) != 0)) {
              bVar32 = true;
            }
          }
          bVar13 = (int *)((long)piVar19 + lVar35) != piVar27;
          piVar27 = piVar27 + 0x12;
        } while (bVar13);
        for (; lVar1 != 0; lVar1 = lVar1 + -0x48) {
        }
      }
      operator_delete(piVar19);
    }
  }
  if (*(char *)(param_2 + 0x4c) == '\0') {
    bVar13 = false;
    cVar10 = *(char *)(param_2 + 0x51);
  }
  else {
    if ((((((*(char *)(param_2 + 0x19) == '\0') ||
           ((*(char *)(param_2 + 0x19) == *(char *)(param_1 + 0x1de4) &&
            (param_2[0x18] == *(int *)(param_1 + 0x1de0))))) &&
          ((*(char *)(param_2 + 0x17) == '\0' ||
           ((*(char *)(param_2 + 0x17) == *(char *)(param_1 + 0x1ddc) &&
            (param_2[0x16] == *(int *)(param_1 + 0x1dd8))))))) &&
         ((*(char *)(param_2 + 0x25) == '\0' ||
          ((*(char *)(param_2 + 0x25) == *(char *)(param_1 + 0x1e14) &&
           (param_2[0x24] == *(int *)(param_1 + 0x1e10))))))) &&
        ((*(char *)(param_2 + 0x1b) == '\0' ||
         ((*(char *)(param_2 + 0x1b) == *(char *)(param_1 + 0x1dec) &&
          (param_2[0x1a] == *(int *)(param_1 + 0x1de8))))))) &&
       ((*(char *)(param_2 + 0x1d) == '\0' ||
        ((*(char *)(param_2 + 0x1d) == *(char *)(param_1 + 0x1df4) &&
         (param_2[0x1c] == *(int *)(param_1 + 0x1df0))))))) {
      if ((*(char *)(param_2 + 0x15) != '\0' || *(char *)(param_2 + 0x13) != '\0') &&
         (*(long *)(param_1 + 0x2168) != 0)) {
        bVar25 = true;
      }
      FUN_00489a10(param_1 + 0x1dc0,param_2 + 0x10);
      FUN_007bfa40(&local_210);
      if ((*(char *)(param_1 + 0x1dfc) != '\0') &&
         (iVar14 = *(int *)(param_1 + 0x1df8), iVar14 != 0)) {
        uStack_204 = CONCAT31(uStack_204._1_3_,1);
        iStack_20c = iVar14;
        iStack_208 = iVar14;
      }
      if (*(char *)(param_1 + 0x1e04) != '\0') {
        local_200 = CONCAT44(local_200._4_4_,*(undefined4 *)(param_1 + 0x1e00));
      }
      plVar17 = *(long **)(param_1 + 0x2248);
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 0x10))(plVar17,param_1 + 0x2240,&local_210);
      }
      FUN_007bfb14(&local_210);
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    FUN_00489a10(param_1 + 0x1dc0,param_2 + 0x10);
    if (*(char *)(param_2 + 0x3e) != '\0') {
      lVar23 = *(long *)(param_2 + 0x38);
      lVar1 = *(long *)(param_2 + 0x3a);
      local_2b0 = (void *)0x0;
      local_2a8 = (void *)0x0;
      local_2b8 = (void *)0x0;
      uVar18 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x17f0);
      uVar16 = lVar1 - lVar23;
      if (uVar16 != 0) {
        if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar16 >> 3) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        pvVar21 = operator_new(uVar16);
        lVar35 = 0;
        local_2a8 = (void *)((long)pvVar21 + ((long)uVar16 >> 3) * 8);
        local_2b8 = pvVar21;
        local_2b0 = pvVar21;
        do {
          puVar29 = (undefined8 *)(lVar23 + lVar35);
          puVar33 = (undefined8 *)((long)pvVar21 + lVar35);
          if (*(char *)((long)puVar29 + 0x17) < '\0') {
            puVar20 = (undefined8 *)*puVar29;
            uVar16 = puVar29[1];
            if (uVar16 < 0x17) {
              *(char *)((long)pvVar21 + lVar35 + 0x17) = (char)uVar16;
            }
            else {
              if (0x7fffffffffffffef < uVar16) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              uVar24 = (uVar16 | 0xf) + 1;
              puVar33 = (undefined8 *)operator_new(uVar24);
              puVar29 = (undefined8 *)((long)pvVar21 + lVar35);
              puVar29[1] = uVar16;
              puVar29[2] = uVar24 | 0x8000000000000000;
              *puVar29 = puVar33;
            }
            if ((puVar33 <= puVar20) && (puVar20 < (undefined8 *)((long)puVar33 + uVar16 + 1)))
            goto LAB_004652e4;
            memmove(puVar33,puVar20,uVar16 + 1);
          }
          else {
            uVar37 = puVar29[1];
            uVar36 = *puVar29;
            puVar33[2] = puVar29[2];
            puVar33[1] = uVar37;
            *puVar33 = uVar36;
          }
          lVar35 = lVar35 + 0x18;
        } while (lVar23 + lVar35 != lVar1);
        local_2b0 = (void *)((long)pvVar21 + lVar35);
      }
      FUN_0044bdc4(uVar18,&local_2b8);
      if (local_2b8 != (void *)0x0) {
        for (; local_2b0 != local_2b8; local_2b0 = (void *)((long)local_2b0 + -0x18)) {
        }
        local_2b0 = local_2b8;
        operator_delete(local_2b8);
      }
      bVar13 = true;
      bVar12 = true;
    }
    if ((*(char *)(param_2 + 0x48) != '\0') && (lVar23 = *(long *)(param_1 + 0x1ef0), lVar23 != 0))
    {
      if (*(char *)(param_1 + 0x1ea0) == '\0') {
        local_210 = 0;
        iStack_20c = 0;
        iStack_208 = 0;
        uStack_204 = 0;
        local_200 = 0;
      }
      else if (*(char *)(param_1 + 0x1e9f) < '\0') {
        uVar16 = *(ulong *)(param_1 + 0x1e90);
        puVar28 = *(undefined4 **)(param_1 + 0x1e88);
        if (uVar16 < 0x17) {
          puVar22 = &local_210;
          local_200 = CONCAT17((char)uVar16,(undefined7)local_200);
        }
        else {
          if (0x7fffffffffffffef < uVar16) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar24 = (uVar16 | 0xf) + 1;
          puVar22 = (undefined4 *)operator_new(uVar24);
          local_200 = uVar24 | 0x8000000000000000;
          local_210 = SUB84(puVar22,0);
          iStack_20c = (int)((ulong)puVar22 >> 0x20);
          iStack_208 = (int)uVar16;
          uStack_204 = (undefined4)(uVar16 >> 0x20);
        }
        if ((puVar22 <= puVar28) && (puVar28 < (undefined4 *)((long)puVar22 + uVar16 + 1))) {
LAB_004652e4:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                     ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
        }
        memmove(puVar22,puVar28,uVar16 + 1);
      }
      else {
        local_200 = *(ulong *)(param_1 + 0x1e98);
        iStack_208 = (int)*(undefined8 *)(param_1 + 0x1e90);
        uStack_204 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x1e90) >> 0x20);
        local_210 = (undefined4)*(undefined8 *)(param_1 + 0x1e88);
        iStack_20c = (int)((ulong)*(undefined8 *)(param_1 + 0x1e88) >> 0x20);
      }
      FUN_00515884(lVar23 + 0xb8,&local_210);
      if ((long)local_200 < 0) {
        operator_delete((void *)CONCAT44(iStack_20c,local_210));
      }
    }
    if (*(char *)((long)param_2 + 0x129) != '\0') {
      bVar13 = true;
      *(undefined2 *)(param_1 + 0x1ea8) = 0;
    }
    cVar10 = *(char *)(param_2 + 0x51);
  }
  if (cVar10 != '\0') {
    FUN_00489bf8(param_1 + 0x1eb0,param_2 + 0x4e);
    if ((*(char *)(param_1 + 0x1eb4) == '\0') || (*(int *)(param_1 + 0x1eb0) == 0)) {
      if (*(long *)(param_1 + 0x1ec0) == 0) {
        if ((*(long **)(param_1 + 0x2248) != (long *)0x0) &&
           (uVar16 = (**(code **)(**(long **)(param_1 + 0x2248) + 0x40))(), (uVar16 & 1) != 0)) {
          *(undefined1 *)(param_1 + 0x1f2b) = 0;
          (**(code **)(**(long **)(param_1 + 0x2248) + 0x48))(*(long **)(param_1 + 0x2248),0);
          FUN_0042ff48(*(undefined8 *)(param_1 + 0x18),0);
          *(undefined1 *)(param_1 + 0x1f00) = 0;
          plVar17 = *(long **)(*(long *)(param_1 + 0x1d80) + 0x28);
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 0x40))(plVar17,*pbVar2 == 0);
          }
          FUN_0042f234(*(undefined8 *)(param_1 + 0x18),param_1);
          if (*(long *)(*(long *)(param_1 + 0x1d80) + 0x28) != 0) {
            FUN_0042f8ec(*(undefined8 *)(param_1 + 0x18),
                         *(undefined8 *)(*(long *)(param_1 + 8) + 0xe0));
            *(undefined8 *)(*(long *)(param_1 + 0x1d80) + 0x28) = 0;
          }
          FUN_0042e374(*(undefined8 *)(param_1 + 0x18));
          FUN_00460ac8(param_1);
          bVar12 = true;
        }
      }
      else {
        FUN_004d7250();
      }
    }
    else {
      FUN_00463640(param_1);
      if ((((*(long *)(param_1 + 0x1ec0) != 0) &&
           (FUN_004d724c(*(long *)(param_1 + 0x1ec0),*(undefined4 *)(param_1 + 0x1eb0)),
           *(long *)(param_1 + 0x1ec0) != 0)) ||
          ((*(long **)(param_1 + 0x2248) != (long *)0x0 &&
           (uVar16 = (**(code **)(**(long **)(param_1 + 0x2248) + 0x40))(), (uVar16 & 1) != 0)))) &&
         (*(char *)(param_1 + 0x1f2b) == '\0')) {
        bVar12 = true;
        *(undefined1 *)(param_1 + 0x1f2b) = 1;
      }
    }
  }
  if ((cVar7 != '\0') &&
     (plVar17 = *(long **)(*(long *)(param_1 + 0x1d80) + 0x28), plVar17 != (long *)0x0)) {
    (**(code **)(*plVar17 + 0x40))(plVar17,*pbVar2 == 0 && *(char *)(param_1 + 0x1f00) == '\0');
  }
  if (bVar26) {
    FUN_0042f234(*(undefined8 *)(param_1 + 0x18),param_1);
    if (*(long *)(*(long *)(param_1 + 0x1d80) + 0x28) != 0) {
      FUN_0042f8ec(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(*(long *)(param_1 + 8) + 0xe0));
      *(undefined8 *)(*(long *)(param_1 + 0x1d80) + 0x28) = 0;
    }
    FUN_0042e374(*(undefined8 *)(param_1 + 0x18));
    FUN_00460ac8(param_1);
  }
  if (bVar12) {
    FUN_00463b68(param_1);
  }
  if (bVar13) {
    if (((*(char *)(param_1 + 0x2148) != '\0') && (*(long *)(param_1 + 0x2248) != 0)) &&
       (*(long *)(param_1 + 0x2168) != 0)) {
      FUN_00468084(param_1);
    }
  }
  else if (bVar32) {
    if (*(long *)(param_1 + 0x2168) != 0) {
      FUN_004681f0(param_1);
    }
  }
  else if (bVar25) {
    FUN_004655d0(param_1);
  }
  if (*(long *)(lVar11 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00465350  FUN_00465350 =====

void FUN_00465350(long param_1,long param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  ulong uVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined2 *puVar12;
  
  FUN_0046af58();
  uVar16 = *(undefined8 *)(param_2 + 0x98);
  uVar15 = *(undefined8 *)(param_2 + 0x90);
  uVar18 = *(undefined8 *)(param_2 + 0xa8);
  uVar17 = *(undefined8 *)(param_2 + 0xa0);
  uVar4 = *(undefined2 *)(param_2 + 0xb0);
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xa8) = uVar18;
  *(undefined8 *)(param_1 + 0xa0) = uVar17;
  *(undefined2 *)(param_1 + 0xb0) = uVar4;
  *(undefined8 *)(param_1 + 0x98) = uVar16;
  *(undefined8 *)(param_1 + 0x90) = uVar15;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  if (*(char *)(param_2 + 0xd0) != '\0') {
    FUN_004244a8((undefined1 *)(param_1 + 0xb8),param_2 + 0xb8);
  }
  *(undefined1 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  if (*(char *)(param_2 + 0x140) != '\0') {
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
    FUN_00667388(param_1 + 0xe0,param_2 + 0xe0);
    uVar15 = *(undefined8 *)(param_2 + 0x129);
    uVar17 = *(undefined8 *)(param_2 + 0x128);
    uVar16 = *(undefined8 *)(param_2 + 0x120);
    *(undefined8 *)(param_1 + 0x131) = *(undefined8 *)(param_2 + 0x131);
    *(undefined8 *)(param_1 + 0x129) = uVar15;
    *(undefined8 *)(param_1 + 0x128) = uVar17;
    *(undefined8 *)(param_1 + 0x120) = uVar16;
    *(undefined1 *)(param_1 + 0x140) = 1;
  }
  puVar6 = *(undefined8 **)(param_2 + 0x148);
  *(undefined8 **)(param_1 + 0x148) = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)();
  }
  puVar6 = (undefined8 *)(param_1 + 0x150);
  if (*(char *)(param_2 + 0x167) < '\0') {
    puVar10 = *(undefined8 **)(param_2 + 0x150);
    uVar8 = *(ulong *)(param_2 + 0x158);
    if (uVar8 < 0x17) {
      *(char *)(param_1 + 0x167) = (char)uVar8;
    }
    else {
      if (0x7fffffffffffffef < uVar8) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar14 = (uVar8 | 0xf) + 1;
      puVar6 = (undefined8 *)operator_new(uVar14);
      *(undefined8 **)(param_1 + 0x150) = puVar6;
      *(ulong *)(param_1 + 0x158) = uVar8;
      *(ulong *)(param_1 + 0x160) = uVar14 | 0x8000000000000000;
    }
    if ((puVar6 <= puVar10) && (puVar10 < (undefined8 *)((long)puVar6 + uVar8 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(puVar6,puVar10,uVar8 + 1);
  }
  else {
    uVar16 = *(undefined8 *)(param_2 + 0x158);
    uVar15 = *(undefined8 *)(param_2 + 0x150);
    *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
    *(undefined8 *)(param_1 + 0x158) = uVar16;
    *puVar6 = uVar15;
  }
  uVar3 = *(undefined1 *)(param_2 + 0x16c);
  uVar2 = *(undefined4 *)(param_2 + 0x168);
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined1 *)(param_1 + 0x16c) = uVar3;
  *(undefined4 *)(param_1 + 0x168) = uVar2;
  uVar8 = *(long *)(param_2 + 0x178) - *(long *)(param_2 + 0x170);
  if (uVar8 == 0) goto LAB_0046554c;
  if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar7 = (undefined2 *)operator_new(uVar8);
  *(undefined2 **)(param_1 + 0x170) = puVar7;
  *(undefined2 **)(param_1 + 0x178) = puVar7;
  *(undefined2 **)(param_1 + 0x180) = puVar7 + ((long)uVar8 >> 1);
  puVar12 = *(undefined2 **)(param_2 + 0x170);
  puVar1 = *(undefined2 **)(param_2 + 0x178);
  puVar9 = puVar7;
  if (puVar12 != puVar1) {
    uVar8 = (long)puVar1 + (-2 - (long)puVar12);
    puVar11 = puVar12;
    if ((0x1d < uVar8) && (0x1f < (ulong)((long)puVar7 - (long)puVar12))) {
      puVar6 = (undefined8 *)(puVar7 + 8);
      uVar8 = (uVar8 >> 1) + 1;
      uVar13 = uVar8 & 0xfffffffffffffff0;
      puVar7 = puVar7 + uVar13;
      puVar11 = puVar12 + uVar13;
      puVar10 = (undefined8 *)(puVar12 + 8);
      uVar14 = uVar13;
      do {
        puVar5 = puVar10 + -1;
        uVar15 = puVar10[-2];
        uVar17 = puVar10[1];
        uVar16 = *puVar10;
        puVar10 = puVar10 + 4;
        uVar14 = uVar14 - 0x10;
        puVar6[-1] = *puVar5;
        puVar6[-2] = uVar15;
        puVar6[1] = uVar17;
        *puVar6 = uVar16;
        puVar6 = puVar6 + 4;
      } while (uVar14 != 0);
      puVar9 = puVar7;
      if (uVar8 == uVar13) goto LAB_00465548;
    }
    do {
      puVar12 = puVar11 + 1;
      puVar9 = puVar7 + 1;
      *puVar7 = *puVar11;
      puVar7 = puVar9;
      puVar11 = puVar12;
    } while (puVar12 != puVar1);
  }
LAB_00465548:
  *(undefined2 **)(param_1 + 0x178) = puVar9;
LAB_0046554c:
  puVar6 = *(undefined8 **)(param_2 + 0x188);
  *(undefined8 **)(param_1 + 0x188) = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)();
  }
  puVar6 = *(undefined8 **)(param_2 + 400);
  *(undefined8 **)(param_1 + 400) = puVar6;
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00465588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar6)();
  return;
}


// ===== 004655d0  FUN_004655d0 =====

/* WARNING: Removing unreachable block (ram,0x00465874) */

void FUN_004655d0(long param_1)

{
  ulong uVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 *__dest;
  void *pvVar13;
  int iVar14;
  undefined **ppuVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  void *pvVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined8 *__src;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  void *local_178;
  void *local_170;
  void *local_168;
  undefined1 auStack_160 [208];
  long local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined *local_78;
  long local_70;
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  puVar22 = *(undefined8 **)(param_1 + 0x2150);
  puVar23 = *(undefined8 **)(param_1 + 0x2158);
  iVar6 = *(int *)(param_1 + 0x1dc8);
  if (puVar22 == puVar23) {
    iVar14 = 0;
    iVar17 = iVar6;
  }
  else {
    iVar14 = 0;
    bVar9 = *(char *)(param_1 + 0x1e19) != '\0';
    bVar10 = *(int *)(param_1 + 0x1e10) != 0;
    puVar11 = puVar22;
    iVar16 = iVar6;
    do {
      if (*(char *)(param_1 + 0x1e14) == '\0') {
LAB_004656a8:
        if ((*(char *)(puVar11 + 7) != '\0') ||
           (iVar17 = iVar16, *(int *)((long)puVar11 + 0x2c) == 100)) goto LAB_00465658;
      }
      else {
        if (bVar10 && bVar9) {
          if (*(char *)(param_1 + 0x1e18) != '\0') goto LAB_00465698;
          goto LAB_004656a8;
        }
        if (!bVar10 || bVar9) goto LAB_004656a8;
LAB_00465698:
        if ((*(char *)(param_1 + 0x2149) != '\0') && (*(int *)((long)puVar11 + 0x2c) != 100))
        goto LAB_004656a8;
LAB_00465658:
        iVar5 = *(int *)(puVar11 + 4);
        if (*(int *)(puVar11 + 4) < 1) {
          iVar5 = *(int *)(param_1 + 0x1dd0);
        }
        iVar17 = *(int *)((long)puVar11 + 0x24);
        if (*(int *)((long)puVar11 + 0x24) < 1) {
          iVar17 = iVar6;
        }
        iVar14 = iVar5 + iVar14;
        if (iVar16 <= iVar17) {
          iVar17 = iVar16;
        }
      }
      puVar11 = puVar11 + 8;
      iVar16 = iVar17;
    } while (puVar11 != puVar23);
  }
  *(int *)(param_1 + 0x220c) = iVar14;
  *(int *)(param_1 + 0x2208) = iVar17;
  puVar11 = (undefined8 *)operator_new(0x138);
  uVar18 = (long)puVar23 - (long)puVar22;
  local_170 = (void *)0x0;
  local_168 = (void *)0x0;
  local_178 = (void *)0x0;
  if (uVar18 != 0) {
    if ((long)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar12 = operator_new(uVar18);
    lVar24 = 0;
    local_168 = (void *)((long)pvVar12 + ((long)uVar18 >> 6) * 0x40);
    local_178 = pvVar12;
    local_170 = pvVar12;
    do {
      puVar3 = (undefined8 *)((long)puVar22 + lVar24);
      puVar4 = (undefined8 *)((long)pvVar12 + lVar24);
      puVar21 = puVar4 + 1;
      *puVar4 = *puVar3;
      if (*(char *)((long)puVar3 + 0x1f) < '\0') {
        uVar18 = puVar3[2];
        __src = (undefined8 *)puVar3[1];
        if (uVar18 < 0x17) {
          *(char *)((long)pvVar12 + lVar24 + 0x1f) = (char)uVar18;
          __dest = puVar21;
        }
        else {
          if (0x7fffffffffffffef < uVar18) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar1 = (uVar18 | 0xf) + 1;
          __dest = (undefined8 *)operator_new(uVar1);
          *puVar21 = __dest;
          *(ulong *)((long)pvVar12 + lVar24 + 0x10) = uVar18;
          *(ulong *)((long)pvVar12 + lVar24 + 0x18) = uVar1 | 0x8000000000000000;
        }
        if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar18 + 1))) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                     ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
        }
        memmove(__dest,__src,uVar18 + 1);
      }
      else {
        uVar26 = puVar3[2];
        uVar25 = puVar3[1];
        puVar4[3] = puVar3[3];
        puVar4[2] = uVar26;
        *puVar21 = uVar25;
      }
      uVar25 = *(undefined8 *)((long)puVar3 + 0x29);
      lVar24 = lVar24 + 0x40;
      uVar27 = puVar3[5];
      uVar26 = puVar3[4];
      *(undefined8 *)((long)puVar4 + 0x31) = *(undefined8 *)((long)puVar3 + 0x31);
      *(undefined8 *)((long)puVar4 + 0x29) = uVar25;
      puVar4[5] = uVar27;
      puVar4[4] = uVar26;
    } while (puVar3 + 8 != puVar23);
    local_170 = (void *)((long)pvVar12 + lVar24);
  }
  local_80 = FUN_0046dae4;
  local_78 = &DAT_001f65d8;
  local_90 = param_1;
  FUN_004b55f4(puVar11,param_1 + 0x1dc0,&local_178,&local_90);
  if (*(code **)(local_78 + 8) != (code *)0x0) {
    (**(code **)(local_78 + 8))(local_90);
  }
  if (local_178 != (void *)0x0) {
    for (; local_170 != local_178; local_170 = (void *)((long)local_170 + -0x40)) {
    }
    local_170 = local_178;
    operator_delete(local_178);
  }
  piVar2 = (int *)(puVar11 + 0x26);
  *(undefined4 *)(puVar11 + 0x26) = 0;
  *puVar11 = &PTR_FUN_00d1ce28;
  do {
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar9) {
      *piVar2 = *piVar2 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (*(long **)(param_1 + 0x21d8) == (long *)0x0) {
    ppuVar15 = &PTR_FUN_00d1ce28;
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x21d8) + 8))();
    ppuVar15 = (undefined **)*puVar11;
  }
  *(undefined8 **)(param_1 + 0x21d8) = puVar11;
  (*(code *)ppuVar15[4])
            (&local_90,puVar11,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x17f0),
             *(undefined4 *)(param_1 + 0x1dd8),*(undefined4 *)(param_1 + 0x1de0),param_1 + 0x2170);
  pvVar12 = *(void **)(param_1 + 0x2218);
  if (pvVar12 != (void *)0x0) {
    pvVar19 = *(void **)(param_1 + 0x2220);
    pvVar13 = pvVar12;
    if (pvVar19 != pvVar12) {
      do {
        pvVar19 = (void *)((long)pvVar19 + -200);
        FUN_008492a8(pvVar19);
      } while (pvVar19 != pvVar12);
      pvVar13 = *(void **)(param_1 + 0x2218);
    }
    *(void **)(param_1 + 0x2220) = pvVar12;
    operator_delete(pvVar13);
  }
  plVar20 = *(long **)(param_1 + 0x2168);
  *(undefined8 *)(param_1 + 0x2220) = uStack_88;
  *(long *)(param_1 + 0x2218) = local_90;
  *(code **)(param_1 + 0x2228) = local_80;
  if (plVar20 != (long *)0x0) {
    FUN_00849b38(auStack_160,param_1 + 0x2170);
    (**(code **)(*plVar20 + 0x30))(plVar20,auStack_160);
    FUN_0084966c(auStack_160);
  }
  if (*(long *)(lVar8 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004659d8  FUN_004659d8 =====

void FUN_004659d8(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  long *plVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  ulong uVar12;
  char *pcVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  
  if (*(char *)(param_2 + 0x58) == '\0') {
LAB_00465ae0:
    uVar9 = 0;
    cVar6 = *(char *)(param_2 + 0xb8);
  }
  else {
    if ((*(char *)(param_2 + 0x20) == *(char *)(param_1 + 0x68)) &&
       (*(char *)(param_2 + 0x21) == *(char *)(param_1 + 0x69))) {
      bVar4 = *(byte *)(param_2 + 0x3f);
      uVar12 = (ulong)bVar4;
      bVar5 = *(byte *)(param_1 + 0x87);
      sVar1 = *(size_t *)(param_2 + 0x30);
      if (-1 < (char)bVar4) {
        sVar1 = uVar12;
      }
      sVar2 = *(size_t *)(param_1 + 0x78);
      if (-1 < (char)bVar5) {
        sVar2 = (ulong)bVar5;
      }
      if (sVar1 == sVar2) {
        pcVar13 = (char *)(param_2 + 0x28);
        pcVar3 = *(char **)pcVar13;
        if (-1 < (char)bVar4) {
          pcVar3 = pcVar13;
        }
        pcVar11 = *(char **)(param_1 + 0x70);
        if (-1 < (char)bVar5) {
          pcVar11 = (char *)(param_1 + 0x70);
        }
        if ((char)bVar4 < '\0') {
          if ((sVar1 != 0) && (iVar10 = memcmp(pcVar3,pcVar11,sVar1), iVar10 != 0))
          goto LAB_00465ad0;
        }
        else if (bVar4 != 0) {
          do {
            if (*pcVar13 != *pcVar11) goto LAB_00465ad0;
            uVar12 = uVar12 - 1;
            pcVar13 = pcVar13 + 1;
            pcVar11 = pcVar11 + 1;
          } while (uVar12 != 0);
        }
        if (*(long *)(param_2 + 0x50) == *(long *)(param_1 + 0x98)) {
          plVar15 = *(long **)(param_2 + 0x40);
          if (plVar15 == (long *)(param_2 + 0x48)) goto LAB_00465ae0;
          plVar16 = *(long **)(param_1 + 0x88);
          do {
            uVar9 = FUN_0046b450(plVar15 + 4,plVar16 + 4);
            if ((uVar9 & 1) == 0) break;
            if (plVar15 == (long *)0x0) {
LAB_00465d38:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                         "__x != nullptr","node shouldn\'t be null");
            }
            plVar7 = (long *)plVar15[1];
            plVar14 = plVar15;
            if ((long *)plVar15[1] == (long *)0x0) {
              do {
                plVar15 = (long *)plVar14[2];
                bVar8 = (long *)*plVar15 != plVar14;
                plVar14 = plVar15;
              } while (bVar8);
            }
            else {
              do {
                plVar15 = plVar7;
                plVar7 = (long *)*plVar15;
              } while ((long *)*plVar15 != (long *)0x0);
            }
            if (plVar16 == (long *)0x0) goto LAB_00465d38;
            plVar7 = (long *)plVar16[1];
            plVar14 = plVar16;
            if ((long *)plVar16[1] == (long *)0x0) {
              do {
                plVar16 = (long *)plVar14[2];
                bVar8 = (long *)*plVar16 != plVar14;
                plVar14 = plVar16;
              } while (bVar8);
            }
            else {
              do {
                plVar16 = plVar7;
                plVar7 = (long *)*plVar16;
              } while ((long *)*plVar16 != (long *)0x0);
            }
          } while (plVar15 != (long *)(param_2 + 0x48));
          uVar9 = uVar9 ^ 1;
          cVar6 = *(char *)(param_2 + 0xb8);
          goto joined_r0x00465ae8;
        }
      }
    }
LAB_00465ad0:
    uVar9 = 1;
    cVar6 = *(char *)(param_2 + 0xb8);
  }
joined_r0x00465ae8:
  if (cVar6 == '\0') {
    bVar8 = false;
    goto LAB_00465c9c;
  }
  if (*(char *)(param_2 + 0x80) == *(char *)(param_1 + 200)) {
    bVar4 = *(byte *)(param_2 + 0x9f);
    uVar12 = (ulong)bVar4;
    bVar5 = *(byte *)(param_1 + 0xe7);
    sVar1 = *(size_t *)(param_2 + 0x90);
    if (-1 < (char)bVar4) {
      sVar1 = uVar12;
    }
    sVar2 = *(size_t *)(param_1 + 0xd8);
    if (-1 < (char)bVar5) {
      sVar2 = (ulong)bVar5;
    }
    if (sVar1 == sVar2) {
      pcVar13 = (char *)(param_2 + 0x88);
      pcVar3 = *(char **)pcVar13;
      if (-1 < (char)bVar4) {
        pcVar3 = pcVar13;
      }
      pcVar11 = *(char **)(param_1 + 0xd0);
      if (-1 < (char)bVar5) {
        pcVar11 = (char *)(param_1 + 0xd0);
      }
      if ((char)bVar4 < '\0') {
        if ((sVar1 != 0) && (iVar10 = memcmp(pcVar3,pcVar11,sVar1), iVar10 != 0)) goto LAB_00465c84;
      }
      else if (bVar4 != 0) {
        do {
          if (*pcVar13 != *pcVar11) goto LAB_00465c84;
          uVar12 = uVar12 - 1;
          pcVar13 = pcVar13 + 1;
          pcVar11 = pcVar11 + 1;
        } while (uVar12 != 0);
      }
      if ((((*(int *)(param_2 + 0xa0) == *(int *)(param_1 + 0xe8)) &&
           (*(int *)(param_2 + 0xa4) == *(int *)(param_1 + 0xec))) &&
          (*(int *)(param_2 + 0xa8) == *(int *)(param_1 + 0xf0))) &&
         (*(int *)(param_2 + 0xac) == *(int *)(param_1 + 0xf4))) {
        bVar8 = (*(char *)(param_2 + 0xb1) != '\0') != (*(char *)(param_1 + 0xf9) != '\0');
        if ((*(char *)(param_2 + 0xb1) != '\0') && (*(char *)(param_1 + 0xf9) != '\0')) {
          bVar8 = *(char *)(param_2 + 0xb0) != *(char *)(param_1 + 0xf8);
        }
        goto LAB_00465c9c;
      }
    }
  }
LAB_00465c84:
  bVar8 = true;
LAB_00465c9c:
  FUN_00485ea4(param_1,param_2);
  if ((((uVar9 & 1) != 0) && (*(char *)(param_1 + 0x2148) != '\0')) &&
     ((*(long *)(param_1 + 0x2248) != 0 && (*(long *)(param_1 + 0x2168) != 0)))) {
    FUN_00468084(param_1);
  }
  if (bVar8) {
    FUN_0042f234(*(undefined8 *)(param_1 + 0x18),param_1);
    if (*(long *)(*(long *)(param_1 + 0x1d80) + 0x28) != 0) {
      FUN_0042f8ec(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(*(long *)(param_1 + 8) + 0xe0));
      *(undefined8 *)(*(long *)(param_1 + 0x1d80) + 0x28) = 0;
    }
    FUN_0042e374(*(undefined8 *)(param_1 + 0x18));
    FUN_00460ac8(param_1);
    return;
  }
  return;
}


// ===== 00465d60  FUN_00465d60 =====

void FUN_00465d60(char *param_1,char *param_2,char *param_3)

{
  ulong uVar1;
  size_t sVar2;
  char *pcVar3;
  
  sVar2 = strlen(param_2);
  if (0x7fffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (sVar2 < 0x17) {
    param_1[0x17] = (char)sVar2;
    pcVar3 = param_1;
  }
  else {
    uVar1 = (sVar2 | 0xf) + 1;
    pcVar3 = (char *)operator_new(uVar1);
    *(char **)param_1 = pcVar3;
    *(size_t *)(param_1 + 8) = sVar2;
    *(ulong *)(param_1 + 0x10) = uVar1 | 0x8000000000000000;
  }
  if ((param_2 < pcVar3) || (pcVar3 + sVar2 <= param_2)) {
    if (sVar2 != 0) {
      memmove(pcVar3,param_2,sVar2);
    }
    pcVar3[sVar2] = '\0';
    sVar2 = strlen(param_3);
    if (0x7fffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (sVar2 < 0x17) {
      pcVar3 = param_1 + 0x18;
      param_1[0x2f] = (char)sVar2;
    }
    else {
      uVar1 = (sVar2 | 0xf) + 1;
      pcVar3 = (char *)operator_new(uVar1);
      *(char **)(param_1 + 0x18) = pcVar3;
      *(size_t *)(param_1 + 0x20) = sVar2;
      *(ulong *)(param_1 + 0x28) = uVar1 | 0x8000000000000000;
    }
    if ((param_3 < pcVar3) || (pcVar3 + sVar2 <= param_3)) {
      if (sVar2 != 0) {
        memmove(pcVar3,param_3,sVar2);
      }
      pcVar3[sVar2] = '\0';
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 00465ea4  FUN_00465ea4 =====

void FUN_00465ea4(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_1f0 [16];
  code *local_1e0;
  code *pcStack_1d8;
  undefined1 auStack_1d0 [88];
  undefined8 auStack_178 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(*(long *)(param_1 + 0x1d80) + 0x28);
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x18))();
    FUN_00465350(auStack_1d0,uVar3);
    puVar4 = (undefined8 *)FUN_00484518();
    if (auStack_178 != puVar4) {
      FUN_0046b598(auStack_178,*puVar4,puVar4[1]);
    }
    plVar2 = *(long **)(*(long *)(param_1 + 0x1d80) + 0x28);
    local_1e0 = FUN_004473ec;
    pcStack_1d8 = FUN_0046cec8;
    (**(code **)(*plVar2 + 0x20))(plVar2,auStack_1d0,auStack_1f0);
    (*local_1e0)(0,auStack_1f0,auStack_1f0);
    FUN_008427b0(auStack_1d0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00465f80  FUN_00465f80 =====

void FUN_00465f80(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  double dVar18;
  undefined1 auVar19 [16];
  char *local_310;
  char *local_308 [5];
  char *local_2e0;
  char local_2d8;
  ulong local_2d0;
  char local_2c8;
  char *local_2c0 [5];
  char *local_298 [5];
  char *local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined1 local_238 [40];
  char *local_210 [3];
  char local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  int iStack_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  float local_1d4;
  undefined1 auStack_1d0 [20];
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined1 uStack_1a4;
  undefined1 uStack_1a3;
  undefined1 uStack_1a2;
  undefined1 uStack_1a1;
  short local_1a0;
  undefined4 local_17c;
  undefined4 local_178;
  undefined8 *local_170;
  undefined8 auStack_168 [4];
  undefined8 local_148;
  char local_140;
  undefined8 local_138;
  char local_130;
  undefined4 local_118;
  char local_114;
  undefined4 local_110;
  char local_10c;
  undefined8 local_108;
  char local_100;
  undefined8 local_f8;
  char local_f0;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 auStack_a8 [40];
  long local_80;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  FUN_004df134(auStack_a8,7);
  FUN_004df478(local_210,param_1 + 0x20);
  local_270 = "id";
  uVar8 = FUN_004e148c(auStack_a8,&local_270);
  FUN_004dfa04(uVar8,local_210);
  FUN_004df880(local_210);
  plVar9 = *(long **)(*(long *)(param_1 + 0x1d80) + 0x28);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x48))(local_210);
    lVar15 = *(long *)(*(long *)(param_1 + 0x1d80) + 0x30);
    FUN_004df134(local_238,7);
    FUN_004df1ec(&local_270,*(undefined4 *)(param_1 + 0x40));
    local_298[0] = "speaking";
    uVar8 = FUN_004e148c(local_238,local_298);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df1ec(&local_270,(ulong)local_210[0] & 0xffffffff);
    local_298[0] = "ssrc";
    uVar8 = FUN_004e148c(local_238,local_298);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df230(&local_270,*(undefined8 *)(lVar15 + 0x90));
    local_298[0] = "bytesSent";
    uVar8 = FUN_004e148c(local_238,local_298);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df230(&local_270,*(undefined8 *)(lVar15 + 0x88));
    local_298[0] = "packetsSent";
    uVar8 = FUN_004e148c(local_238,local_298);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df230(&local_270,*(undefined8 *)(lVar15 + 0x98));
    local_298[0] = "packetsSkipped";
    uVar8 = FUN_004e148c(local_238,local_298);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df230(&local_270,*(undefined8 *)(lVar15 + 0xa0));
    local_298[0] = "packetsFailedToSend";
    uVar8 = FUN_004e148c(local_238,local_298);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df1c8(&local_270,local_1d8);
    local_298[0] = "packetsLost";
    uVar8 = FUN_004e148c(local_238,local_298);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df250((double)local_1d4,&local_270);
    local_298[0] = "fractionLost";
    uVar8 = FUN_004e148c(local_238,local_298);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df478(&local_270,auStack_1d0);
    local_298[0] = "codecName";
    uVar8 = FUN_004e148c(local_238,local_298);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    uVar2 = local_1b8;
    if ((char)local_1b4 == '\0') {
      uVar2 = 0xffffffff;
    }
    FUN_004df1c8(&local_270,uVar2);
    local_298[0] = "codecPayloadType";
    uVar8 = FUN_004e148c(local_238,local_298);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df1c8(&local_270,local_1b0);
    local_298[0] = "jitter";
    uVar8 = FUN_004e148c(local_238,local_298);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df210(&local_270,
                 CONCAT17(uStack_1a1,
                          CONCAT16(uStack_1a2,CONCAT15(uStack_1a3,CONCAT14(uStack_1a4,local_1a8)))))
    ;
    local_298[0] = "rtt";
    uVar8 = FUN_004e148c(local_238,local_298);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df1c8(&local_270,(long)local_1a0);
    local_298[0] = "audioLevel";
    uVar8 = FUN_004e148c(local_238,local_298);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    if (local_114 == '\0') {
      local_118 = 0xffffffff;
    }
    FUN_004df1c8(&local_270,local_118);
    local_298[0] = "delayMedian";
    uVar8 = FUN_004e148c(local_238,local_298);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    if (local_10c == '\0') {
      local_110 = 0xffffffff;
    }
    FUN_004df1c8(&local_270,local_110);
    local_298[0] = "delayStd";
    uVar8 = FUN_004e148c(local_238,local_298);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df210(&local_270,local_e0);
    local_298[0] = "totalSendDelayMs";
    uVar8 = FUN_004e148c(local_238,local_298);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df210(&local_270,local_d8);
    local_298[0] = "sendDelaySamples";
    uVar8 = FUN_004e148c(local_238,local_298);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    uVar14 = CONCAT44(iStack_1e4,local_1e8);
    if (iStack_1e4 < 0) {
      uVar12 = -(-uVar14 / 1000) - (ulong)(500 < -uVar14 % 1000);
    }
    else {
      uVar12 = uVar14 / 1000;
      if (499 < uVar14 % 1000) {
        uVar12 = uVar12 + 1;
      }
    }
    FUN_004df210(&local_270,uVar12);
    local_298[0] = "totalPacketSendDelayMs";
    uVar8 = FUN_004e148c(local_238,local_298);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    uVar8 = 0xbff0000000000000;
    if (local_140 != '\0') {
      uVar8 = local_148;
    }
    FUN_004df250(uVar8,&local_270);
    local_298[0] = "echoReturnLoss";
    uVar8 = FUN_004e148c(local_238,local_298);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    uVar8 = 0xbff0000000000000;
    if (local_130 != '\0') {
      uVar8 = local_138;
    }
    FUN_004df250(uVar8,&local_270);
    local_298[0] = "echoReturnLossEnhancement";
    uVar8 = FUN_004e148c(local_238,local_298);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    uVar8 = 0xbff0000000000000;
    if (local_100 != '\0') {
      uVar8 = local_108;
    }
    FUN_004df250(uVar8,&local_270);
    local_298[0] = "residualEchoLikelihood";
    uVar8 = FUN_004e148c(local_238,local_298);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    uVar8 = 0xbff0000000000000;
    if (local_f0 != '\0') {
      uVar8 = local_f8;
    }
    FUN_004df250(uVar8,&local_270);
    local_298[0] = "residualEchoLikelihoodRecentMax";
    uVar8 = FUN_004e148c(local_238,local_298);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_0045f760(&local_270,*(undefined8 *)(param_1 + 0x1f30),0);
    FUN_004df210(local_298,local_270);
    local_2c0[0] = "passthroughCount";
    uVar8 = FUN_004e148c(local_238,local_2c0);
    FUN_004dfa04(uVar8,local_298);
    FUN_004df880(local_298);
    FUN_004df210(local_298,local_268);
    local_2c0[0] = "encryptSuccessCount";
    uVar8 = FUN_004e148c(local_238,local_2c0);
    FUN_004dfa04(uVar8,local_298);
    FUN_004df880(local_298);
    FUN_004df210(local_298,local_260);
    local_2c0[0] = "encryptFailureCount";
    uVar8 = FUN_004e148c(local_238,local_2c0);
    FUN_004dfa04(uVar8,local_298);
    FUN_004df880(local_298);
    FUN_004df210(local_298,local_258);
    local_2c0[0] = "encryptDuration";
    uVar8 = FUN_004e148c(local_238,local_2c0);
    FUN_004dfa04(uVar8,local_298);
    FUN_004df880(local_298);
    FUN_004df210(local_298,local_250);
    local_2c0[0] = "encryptAttempts";
    uVar8 = FUN_004e148c(local_238,local_2c0);
    FUN_004dfa04(uVar8,local_298);
    FUN_004df880(local_298);
    FUN_004df210(local_298,local_248);
    local_2c0[0] = "encryptMaxAttempts";
    uVar8 = FUN_004e148c(local_238,local_2c0);
    FUN_004dfa04(uVar8,local_298);
    FUN_004df880(local_298);
    FUN_004df210(local_298,local_240);
    local_2c0[0] = "encryptMissingKeyCount";
    uVar8 = FUN_004e148c(local_238,local_2c0);
    FUN_004dfa04(uVar8,local_298);
    FUN_004df880(local_298);
    FUN_004df210(local_298,local_d0);
    local_2c0[0] = "targetMediaBitrate";
    uVar8 = FUN_004e148c(local_238,local_2c0);
    FUN_004dfa04(uVar8,local_298);
    FUN_004df880(local_298);
    uVar8 = FUN_006258f0();
    dVar18 = (double)FUN_0099234c((long *)(lVar15 + 0xa8),uVar8,
                                  *(long *)(lVar15 + 0xa8) * *(long *)(lVar15 + 0xb0) * 1000);
    FUN_004df1c8(local_298,(int)(dVar18 * 8.0));
    local_2c0[0] = "mediaBitrate";
    uVar8 = FUN_004e148c(local_238,local_2c0);
    FUN_004dfa04(uVar8,local_298);
    FUN_004df880(local_298);
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb8);
    if (*(char *)(param_1 + 0x1f2b) == '\0') {
      iVar7 = FUN_00485f7c(param_1);
      bVar6 = iVar7 == 1;
    }
    else {
      bVar6 = true;
    }
    FUN_0045b69c(uVar8,local_238,bVar6);
    auVar19 = FUN_0044127c(*(undefined8 *)(param_1 + 8));
    plVar9 = auVar19._8_8_;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
      do {
        lVar15 = *plVar1;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        FUN_005466cc(plVar9);
      }
    }
    if (auVar19._0_8_ != 0) {
      auVar19 = FUN_0044127c(*(undefined8 *)(param_1 + 8));
      plVar9 = auVar19._8_8_;
      (**(code **)(*auVar19._0_8_ + 0x50))(auVar19._0_8_,local_238);
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 1;
        do {
          lVar15 = *plVar1;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          FUN_005466cc(plVar9);
        }
      }
    }
    FUN_004df134(local_298,7);
    local_2c0[0] = "audioDevice";
    uVar8 = FUN_004e148c(param_2,local_2c0);
    FUN_004dfa04(uVar8,local_298);
    FUN_004df880(local_298);
    iVar7 = FUN_00485f7c(param_1);
    if (iVar7 == 0) {
      FUN_00430114(*(undefined8 *)(param_1 + 0x18),param_2);
    }
    if (*(long *)(param_1 + 0x1d88) != 0) {
      FUN_004df210(local_298,
                   (*(long *)(param_1 + 0x1d88) - *(long *)(*(long *)(param_1 + 8) + 0x80)) /
                   1000000);
      local_2c0[0] = "audioDevice";
      uVar8 = FUN_004e148c(param_2,local_2c0);
      local_308[0] = "input";
      uVar8 = FUN_004e148c(uVar8,local_308);
      local_2e0 = "timeFromConnectToFirstCallbackMs";
      uVar8 = FUN_004e148c(uVar8,&local_2e0);
      FUN_004dfa04(uVar8,local_298);
      FUN_004df880(local_298);
    }
    if (*(long *)(param_1 + 0x1d90) != 0) {
      FUN_004df210(local_298,
                   (*(long *)(param_1 + 0x1d90) - *(long *)(*(long *)(param_1 + 8) + 0x80)) /
                   1000000);
      local_2c0[0] = "audioDevice";
      uVar8 = FUN_004e148c(param_2,local_2c0);
      local_308[0] = "output";
      uVar8 = FUN_004e148c(uVar8,local_308);
      local_2e0 = "timeFromConnectToFirstCallbackMs";
      uVar8 = FUN_004e148c(uVar8,&local_2e0);
      FUN_004dfa04(uVar8,local_298);
      FUN_004df880(local_298);
    }
    local_298[0] = "audio";
    uVar8 = FUN_004e148c(auStack_a8,local_298);
    FUN_004df948(uVar8,local_238);
    FUN_004df880(local_238);
    FUN_00842630(local_210);
  }
  FUN_004df134(local_238,6);
  if (*(long **)(param_1 + 0x2168) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2168) + 0x40))(local_210);
    FUN_004df134(local_298,7);
    FUN_004df478(&local_270,param_1 + 0x70);
    local_2c0[0] = "codecName";
    uVar8 = FUN_004e148c(local_298,local_2c0);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df1c8(&local_270,*(undefined1 *)(param_1 + 0x68));
    local_2c0[0] = "codecPayloadType";
    uVar8 = FUN_004e148c(local_298,local_2c0);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    uVar2 = 0;
    if (*(char *)(param_1 + 0x1e14) != '\0') {
      uVar2 = *(undefined4 *)(param_1 + 0x1e10);
    }
    FUN_004df1ec(&local_270,uVar2);
    local_2c0[0] = "keyFrameInterval";
    uVar8 = FUN_004e148c(local_298,local_2c0);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    if (local_1f8 != '\0') {
      FUN_004df478(&local_270,local_210);
      local_2c0[0] = "encoderImplementationName";
      uVar8 = FUN_004e148c(local_298,local_2c0);
      FUN_004dfa04(uVar8,&local_270);
      FUN_004df880(&local_270);
    }
    FUN_004df250(local_1f0,&local_270);
    local_2c0[0] = "inputFrameRate";
    uVar8 = FUN_004e148c(local_298,local_2c0);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df1c8(&local_270,local_1e8);
    local_2c0[0] = "encodeFrameRate";
    uVar8 = FUN_004e148c(local_298,local_2c0);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df1c8(&local_270,iStack_1e4);
    local_2c0[0] = "avgEncodeTime";
    uVar8 = FUN_004e148c(local_298,local_2c0);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df1c8(&local_270,local_1e0);
    local_2c0[0] = "encodeUsage";
    uVar8 = FUN_004e148c(local_298,local_2c0);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df1ec(&local_270,local_1dc);
    local_2c0[0] = "framesEncoded";
    uVar8 = FUN_004e148c(local_298,local_2c0);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df1c8(&local_270,local_1ac);
    local_2c0[0] = "targetMediaBitrate";
    uVar8 = FUN_004e148c(local_298,local_2c0);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df1c8(&local_270,local_1a8);
    local_2c0[0] = "mediaBitrate";
    uVar8 = FUN_004e148c(local_298,local_2c0);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df5b4(&local_270,uStack_1a4);
    local_2c0[0] = "suspended";
    uVar8 = FUN_004e148c(local_298,local_2c0);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df5b4(&local_270,uStack_1a3);
    local_2c0[0] = "bwLimitedResolution";
    uVar8 = FUN_004e148c(local_298,local_2c0);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df5b4(&local_270,uStack_1a2);
    local_2c0[0] = "cpuLimitedResolution";
    uVar8 = FUN_004e148c(local_298,local_2c0);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df5b4(&local_270,uStack_1a1);
    local_2c0[0] = "bwLimitedFrameRate";
    uVar8 = FUN_004e148c(local_298,local_2c0);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df5b4(&local_270,(undefined1)local_1a0);
    local_2c0[0] = "cpuLimitedFrameRate";
    uVar8 = FUN_004e148c(local_298,local_2c0);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df1c8(&local_270,local_17c);
    local_2c0[0] = "numberOfCPUAdaptChanges";
    uVar8 = FUN_004e148c(local_298,local_2c0);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df1c8(&local_270,local_178);
    local_2c0[0] = "numberOfQualityAdaptChanges";
    uVar8 = FUN_004e148c(local_298,local_2c0);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df1ec(&local_270,local_1b8);
    local_2c0[0] = "framesDroppedRateLimiter";
    uVar8 = FUN_004e148c(local_298,local_2c0);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df1ec(&local_270,local_1bc);
    local_2c0[0] = "framesDroppedEncoderQueue";
    uVar8 = FUN_004e148c(local_298,local_2c0);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df1ec(&local_270,local_1b4);
    local_2c0[0] = "framesDroppedCongestionWindow";
    uVar8 = FUN_004e148c(local_298,local_2c0);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_004df1ec(&local_270,local_1b0);
    local_2c0[0] = "framesDroppedEncoder";
    uVar8 = FUN_004e148c(local_298,local_2c0);
    FUN_004dfa04(uVar8,&local_270);
    FUN_004df880(&local_270);
    FUN_0045f760(&local_270,*(undefined8 *)(param_1 + 0x1f30),1);
    FUN_004df210(local_2c0,local_270);
    local_308[0] = "passthroughCount";
    uVar8 = FUN_004e148c(local_298,local_308);
    FUN_004dfa04(uVar8,local_2c0);
    FUN_004df880(local_2c0);
    FUN_004df210(local_2c0,local_268);
    local_308[0] = "encryptSuccessCount";
    uVar8 = FUN_004e148c(local_298,local_308);
    FUN_004dfa04(uVar8,local_2c0);
    FUN_004df880(local_2c0);
    FUN_004df210(local_2c0,local_260);
    local_308[0] = "encryptFailureCount";
    uVar8 = FUN_004e148c(local_298,local_308);
    FUN_004dfa04(uVar8,local_2c0);
    FUN_004df880(local_2c0);
    FUN_004df210(local_2c0,local_258);
    local_308[0] = "encryptDuration";
    uVar8 = FUN_004e148c(local_298,local_308);
    FUN_004dfa04(uVar8,local_2c0);
    FUN_004df880(local_2c0);
    FUN_004df210(local_2c0,local_250);
    local_308[0] = "encryptAttempts";
    uVar8 = FUN_004e148c(local_298,local_308);
    FUN_004dfa04(uVar8,local_2c0);
    FUN_004df880(local_2c0);
    FUN_004df210(local_2c0,local_248);
    local_308[0] = "encryptMaxAttempts";
    uVar8 = FUN_004e148c(local_298,local_308);
    FUN_004dfa04(uVar8,local_2c0);
    FUN_004df880(local_2c0);
    FUN_004df210(local_2c0,local_240);
    local_308[0] = "encryptMissingKeyCount";
    uVar8 = FUN_004e148c(local_298,local_308);
    FUN_004dfa04(uVar8,local_2c0);
    FUN_004df880(local_2c0);
    FUN_004df210(local_2c0,0xffffffffffffffff);
    local_308[0] = "qpSum";
    uVar8 = FUN_004e148c(local_298,local_308);
    FUN_004dfa04(uVar8,local_2c0);
    FUN_004df880(local_2c0);
    FUN_004df134(local_2c0,6);
    local_308[0] = "substreams";
    uVar8 = FUN_004e148c(local_298,local_308);
    FUN_004dfa04(uVar8,local_2c0);
    uVar8 = FUN_004df880(local_2c0);
    if (*(long *)(param_1 + 0x2248) != 0) {
      uVar8 = FUN_00453d90(*(undefined8 *)(param_1 + 0x10),local_298);
    }
    FUN_004677a4(&local_2e0,uVar8,param_1 + 0x2218);
    if (local_2d8 == '\0') {
      bVar6 = false;
    }
    else {
      pcVar13 = (char *)((*(long *)(param_1 + 0x2220) - *(long *)(param_1 + 0x2218) >> 3) *
                        -0x70a3d70a3d70a3d7);
      if (pcVar13 < local_2e0 || (long)pcVar13 - (long)local_2e0 == 0) goto LAB_00467778;
      bVar6 = *(char *)(*(long *)(param_1 + 0x2218) + (long)local_2e0 * 200 + 0x52) != '\0';
    }
    FUN_004df5b4(local_2c0,bVar6);
    local_308[0] = "lqSimulcastStreamEncoded";
    uVar8 = FUN_004e148c(local_298,local_308);
    FUN_004dfa04(uVar8,local_2c0);
    FUN_004df880(local_2c0);
    if (local_2c8 == '\0') {
      bVar6 = false;
    }
    else {
      uVar14 = (*(long *)(param_1 + 0x2220) - *(long *)(param_1 + 0x2218) >> 3) *
               -0x70a3d70a3d70a3d7;
      if (uVar14 < local_2d0 || uVar14 - local_2d0 == 0) {
LAB_00467778:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x591,
                   "__n < size()","vector[] index out of bounds");
      }
      bVar6 = *(char *)(*(long *)(param_1 + 0x2218) + local_2d0 * 200 + 0x52) != '\0';
    }
    FUN_004df5b4(local_2c0,bVar6);
    local_308[0] = "hqSimulcastStreamEncoded";
    uVar8 = FUN_004e148c(local_298,local_308);
    FUN_004dfa04(uVar8,local_2c0);
    FUN_004df880(local_2c0);
    puVar11 = local_170;
    while (puVar11 != auStack_168) {
      if (*(int *)(puVar11 + 5) == 0) {
        FUN_004e1494(local_238,local_298);
      }
      uVar14 = FUN_004e0534(local_238);
      if ((uVar14 & 1) == 0) {
        iVar7 = FUN_004e04c8(local_238);
        uVar8 = FUN_004e05e4(local_238,iVar7 + -1);
        FUN_004df134(local_2c0,7);
        FUN_004df1ec(local_308,*(undefined4 *)(puVar11 + 4));
        local_310 = "ssrc";
        uVar10 = FUN_004e148c(local_2c0,&local_310);
        FUN_004dfa04(uVar10,local_308);
        FUN_004df880(local_308);
        FUN_00485eac(local_308,param_1,(long)puVar11 + 0x34);
        local_310 = "frameCounts";
        uVar10 = FUN_004e148c(local_2c0,&local_310);
        FUN_004dfa04(uVar10,local_308);
        FUN_004df880(local_308);
        FUN_004df5b4(local_308,*(int *)(puVar11 + 5) == 1);
        local_310 = "isRTX";
        uVar10 = FUN_004e148c(local_2c0,&local_310);
        FUN_004dfa04(uVar10,local_308);
        FUN_004df880(local_308);
        FUN_004df5b4(local_308,*(int *)(puVar11 + 5) == 2);
        local_310 = "isFlexFEC";
        uVar10 = FUN_004e148c(local_2c0,&local_310);
        FUN_004dfa04(uVar10,local_308);
        FUN_004df880(local_308);
        FUN_004df1c8(local_308,*(undefined4 *)((long)puVar11 + 0x3c));
        local_310 = "width";
        uVar10 = FUN_004e148c(local_2c0,&local_310);
        FUN_004dfa04(uVar10,local_308);
        FUN_004df880(local_308);
        FUN_004df1c8(local_308,*(undefined4 *)(puVar11 + 8));
        local_310 = "height";
        uVar10 = FUN_004e148c(local_2c0,&local_310);
        FUN_004dfa04(uVar10,local_308);
        FUN_004df880(local_308);
        FUN_004df1c8(local_308,*(undefined4 *)((long)puVar11 + 0x44));
        local_310 = "totalBitrate";
        uVar10 = FUN_004e148c(local_2c0,&local_310);
        FUN_004dfa04(uVar10,local_308);
        FUN_004df880(local_308);
        FUN_004df1c8(local_308,*(undefined4 *)(puVar11 + 9));
        local_310 = "retransmitBitrate";
        uVar10 = FUN_004e148c(local_2c0,&local_310);
        FUN_004dfa04(uVar10,local_308);
        FUN_004df880(local_308);
        FUN_004df1c8(local_308,*(undefined4 *)(puVar11 + 10));
        local_310 = "avgDelay";
        uVar10 = FUN_004e148c(local_2c0,&local_310);
        FUN_004dfa04(uVar10,local_308);
        FUN_004df880(local_308);
        FUN_004df1c8(local_308,*(undefined4 *)((long)puVar11 + 0x54));
        local_310 = "maxDelay";
        uVar10 = FUN_004e148c(local_2c0,&local_310);
        FUN_004dfa04(uVar10,local_308);
        FUN_004df880(local_308);
        FUN_00467a90(local_308,param_1,puVar11 + 0xb);
        local_310 = "rtpStats";
        uVar10 = FUN_004e148c(local_2c0,&local_310);
        FUN_004dfa04(uVar10,local_308);
        uVar10 = FUN_004df880(local_308);
        if (*(char *)(puVar11 + 0x2c) != '\0') {
          FUN_00467b9c(local_308,uVar10,puVar11 + 0x24,puVar11 + 0x21);
          local_310 = "rtcpStats";
          uVar10 = FUN_004e148c(local_2c0,&local_310);
          FUN_004dfa04(uVar10,local_308);
          FUN_004df880(local_308);
        }
        FUN_004df210(local_308,0xffffffffffffffff);
        local_310 = "qpSum";
        uVar10 = FUN_004e148c(local_2c0,&local_310);
        FUN_004dfa04(uVar10,local_308);
        FUN_004df880(local_308);
        if (*(int *)(puVar11 + 5) == 0) {
          if (*(char *)(puVar11 + 0x30) != '\0') {
            uVar16 = puVar11[0x2f];
            FUN_004df210(local_308,uVar16);
            local_310 = "qpSum";
            uVar10 = FUN_004e148c(local_2c0,&local_310);
            FUN_004dfa04(uVar10,local_308);
            FUN_004df880(local_308);
            FUN_004df210(local_308,uVar16);
            local_310 = "qpSum";
            uVar10 = FUN_004e148c(uVar8,&local_310);
            FUN_004dfa04(uVar10,local_308);
            FUN_004df880(local_308);
          }
          FUN_004df1c8(local_308,*(undefined4 *)(puVar11 + 0x2e));
          local_310 = "framesEncoded";
          uVar10 = FUN_004e148c(uVar8,&local_310);
          FUN_004dfa04(uVar10,local_308);
          FUN_004df880(local_308);
          FUN_004df1c8(local_308,*(undefined4 *)((long)puVar11 + 0x44));
          local_310 = "targetMediaBitrate";
          uVar10 = FUN_004e148c(uVar8,&local_310);
          FUN_004dfa04(uVar10,local_308);
          FUN_004df880(local_308);
          FUN_004df1c8(local_308,*(int *)((long)puVar11 + 0x44) - *(int *)(puVar11 + 9));
          local_310 = "mediaBitrate";
          uVar10 = FUN_004e148c(uVar8,&local_310);
          FUN_004dfa04(uVar10,local_308);
          FUN_004df880(local_308);
        }
        local_308[0] = "substreams";
        uVar8 = FUN_004e148c(uVar8,local_308);
        FUN_004e1494(uVar8,local_2c0);
        FUN_004df880(local_2c0);
      }
      puVar5 = (undefined8 *)puVar11[1];
      puVar17 = puVar11;
      if ((undefined8 *)puVar11[1] == (undefined8 *)0x0) {
        do {
          puVar11 = (undefined8 *)puVar17[2];
          bVar6 = (undefined8 *)*puVar11 != puVar17;
          puVar17 = puVar11;
        } while (bVar6);
      }
      else {
        do {
          puVar11 = puVar5;
          puVar5 = (undefined8 *)*puVar11;
        } while ((undefined8 *)*puVar11 != (undefined8 *)0x0);
      }
    }
    uVar14 = FUN_004e0534(local_238);
    if ((uVar14 & 1) != 0) {
      FUN_004e1494(local_238,local_298);
    }
    FUN_004df880(local_298);
    FUN_008480a4(local_210);
  }
  uVar14 = FUN_004e0534(local_238);
  if ((uVar14 & 1) == 0) {
    local_210[0] = "videos";
    uVar8 = FUN_004e148c(auStack_a8,local_210);
    FUN_004df948(uVar8,local_238);
    uVar8 = FUN_004e0998(local_238,0);
    local_210[0] = "video";
    uVar10 = FUN_004e148c(auStack_a8,local_210);
    FUN_004df948(uVar10,uVar8);
  }
  iVar7 = FUN_00485f7c(param_1);
  if (iVar7 == 1) {
    if (*(char *)(param_1 + 0x2149) == '\0') goto LAB_00467714;
    FUN_004df134(local_210,7);
    (**(code **)(**(long **)(param_1 + 0x2248) + 0x58))(*(long **)(param_1 + 0x2248),local_210);
    local_270 = "screenshare";
  }
  else {
    if ((*(long **)(param_1 + 0x2248) == (long *)0x0) ||
       (uVar14 = (**(code **)(**(long **)(param_1 + 0x2248) + 0x90))(), (uVar14 & 1) == 0))
    goto LAB_00467714;
    FUN_004df134(local_210,7);
    (**(code **)(**(long **)(param_1 + 0x2248) + 0x58))(*(long **)(param_1 + 0x2248),local_210);
    local_270 = "camera";
  }
  uVar8 = FUN_004e148c(param_2,&local_270);
  FUN_004df948(uVar8,local_210);
  FUN_004df880(local_210);
LAB_00467714:
  local_210[0] = "outbound";
  uVar8 = FUN_004e148c(param_2,local_210);
  FUN_004df948(uVar8,auStack_a8);
  FUN_004df880(local_238);
  FUN_004df880(auStack_a8);
  if (*(long *)(lVar4 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004677a4  FUN_004677a4 =====

void FUN_004677a4(long *param_1,undefined8 param_2,long *param_3)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  
  plVar3 = (long *)*param_3;
  plVar6 = (long *)param_3[1];
  lVar13 = ((long)plVar6 - (long)plVar3 >> 3) * -0x70a3d70a3d70a3d7;
  if (lVar13 != 1) {
    if (lVar13 == 0) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 0;
      *(undefined1 *)(param_1 + 2) = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      return;
    }
    if (plVar3 != plVar6) {
      lVar13 = *plVar3;
      plVar14 = plVar3;
      do {
        plVar15 = plVar3;
        if (((*plVar14 != lVar13) || (plVar14[1] != plVar3[1])) ||
           (*(int *)((long)plVar14 + 0x1c) != *(int *)((long)plVar3 + 0x1c))) {
          bVar9 = false;
          goto LAB_0046783c;
        }
        plVar14 = plVar14 + 0x19;
      } while (plVar14 != plVar6);
      bVar9 = true;
LAB_0046783c:
      do {
        plVar14 = plVar15 + 0x19;
        pcVar1 = (char *)((long)plVar15 + 0x52);
        if (*pcVar1 != '\0') break;
        plVar15 = plVar14;
      } while (plVar14 != plVar6);
      if (!bVar9) {
        plVar14 = plVar3 + 0x19;
        plVar15 = plVar3;
        plVar16 = plVar3;
        if (plVar14 != plVar6) {
          lVar4 = plVar3[0x19];
          bVar10 = (ulong)(plVar3[1] * lVar13) <= (ulong)(plVar3[0x1a] * lVar4);
          plVar17 = plVar3 + 0x32;
          bVar9 = *(int *)((long)plVar3 + 0x1c) <= *(int *)((long)plVar3 + 0xe4);
          if (bVar10 && bVar9) {
            plVar15 = plVar14;
            plVar14 = plVar3;
          }
          plVar16 = plVar14;
          if (plVar17 != plVar6) {
            lVar19 = lVar4;
            if (bVar10 && bVar9) {
              lVar19 = lVar13;
              lVar13 = lVar4;
            }
            do {
              plVar2 = plVar17 + 0x19;
              plVar16 = plVar17;
              if (plVar2 == plVar6) {
                if ((((ulong)(plVar14[1] * *plVar14) <= (ulong)(plVar17[1] * *plVar17)) &&
                    (*(int *)((long)plVar14 + 0x1c) <= *(int *)((long)plVar17 + 0x1c))) &&
                   (plVar16 = plVar14,
                   *(int *)((long)plVar15 + 0x1c) <= *(int *)((long)plVar17 + 0x1c) &&
                   (ulong)(plVar15[1] * *plVar15) <= (ulong)(plVar17[1] * *plVar17))) {
                  plVar15 = plVar17;
                }
                break;
              }
              lVar4 = plVar17[0x19];
              lVar5 = *plVar17;
              iVar7 = *(int *)((long)plVar17 + 0xe4);
              uVar11 = plVar17[0x1a] * lVar4;
              iVar8 = *(int *)((long)plVar17 + 0x1c);
              uVar12 = plVar17[1] * lVar5;
              if ((uVar11 < uVar12) || (iVar7 < iVar8)) {
                plVar16 = plVar2;
                lVar18 = lVar4;
                if ((ulong)(plVar14[1] * *plVar14) <= uVar11 &&
                    *(int *)((long)plVar14 + 0x1c) <= iVar7) {
                  plVar16 = plVar14;
                  lVar18 = *plVar14;
                }
                lVar13 = *plVar15;
                if ((ulong)(plVar15[1] * *plVar15) <= uVar12 &&
                    *(int *)((long)plVar15 + 0x1c) <= iVar8) {
                  plVar15 = plVar17;
                  lVar13 = lVar5;
                }
              }
              else {
                lVar18 = lVar5;
                if ((ulong)(plVar14[1] * lVar19) <= uVar12 &&
                    *(int *)((long)plVar14 + 0x1c) <= iVar8) {
                  plVar16 = plVar14;
                  lVar18 = lVar19;
                }
                if ((ulong)(plVar15[1] * lVar13) <= uVar11 &&
                    *(int *)((long)plVar15 + 0x1c) <= iVar7) {
                  plVar15 = plVar2;
                  lVar13 = lVar4;
                }
              }
              plVar17 = plVar17 + 0x32;
              plVar14 = plVar16;
              lVar19 = lVar18;
            } while (plVar17 != plVar6);
          }
        }
        *(undefined1 *)(param_1 + 1) = 1;
        *(undefined1 *)(param_1 + 3) = 1;
        *param_1 = ((long)plVar16 - (long)plVar3 >> 3) * -0x70a3d70a3d70a3d7;
        param_1[2] = ((long)plVar15 - (long)plVar3 >> 3) * -0x70a3d70a3d70a3d7;
        return;
      }
      if (*pcVar1 != '\0') {
        lVar13 = 0;
        do {
          if (*(char *)((long)plVar3 + lVar13 + 0x52) != '\0') {
            if ((long *)((long)plVar3 + lVar13) != plVar6) {
              *(undefined1 *)param_1 = 0;
              *(undefined1 *)(param_1 + 1) = 0;
              *(undefined1 *)(param_1 + 3) = 1;
              param_1[2] = (lVar13 >> 3) * -0x70a3d70a3d70a3d7;
              return;
            }
            break;
          }
          lVar13 = lVar13 + 200;
        } while ((long *)((long)plVar3 + lVar13) != plVar6);
      }
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}


// ===== 00467a90  FUN_00467a90 =====

void FUN_00467a90(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  char *local_90;
  undefined1 auStack_88 [40];
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004df134(param_1,7);
  uVar2 = FUN_004df134(auStack_60,7);
  FUN_0046a23c(auStack_88,uVar2,param_3 + 8);
  local_90 = "transmitted";
  uVar2 = FUN_004e148c(param_1,&local_90);
  FUN_004dfa04(uVar2,auStack_88);
  uVar2 = FUN_004df880(auStack_88);
  FUN_0046a23c(auStack_88,uVar2,param_3 + 0x40);
  local_90 = "retransmitted";
  uVar2 = FUN_004e148c(param_1,&local_90);
  FUN_004dfa04(uVar2,auStack_88);
  uVar2 = FUN_004df880(auStack_88);
  FUN_0046a23c(auStack_88,uVar2,param_3 + 0x78);
  local_90 = "fec";
  uVar2 = FUN_004e148c(param_1,&local_90);
  FUN_004dfa04(uVar2,auStack_88);
  FUN_004df880(auStack_88);
  FUN_004df880(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00467b9c  FUN_00467b9c =====

void FUN_00467b9c(undefined8 param_1,undefined8 param_2,long param_3,undefined4 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  char *local_68;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004df134(param_1,7);
  fVar3 = (float)NEON_ucvtf((uint)*(byte *)(param_3 + 8));
  FUN_004df250((double)(fVar3 * 0.00390625),auStack_60);
  local_68 = "fractionLost";
  uVar2 = FUN_004e148c(param_1,&local_68);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df1c8(auStack_60,*(undefined4 *)(param_3 + 0xc));
  local_68 = "packetsLost";
  uVar2 = FUN_004e148c(param_1,&local_68);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df1ec(auStack_60,*(undefined4 *)(param_3 + 0x14));
  local_68 = "jitter";
  uVar2 = FUN_004e148c(param_1,&local_68);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df1ec(auStack_60,*param_4);
  local_68 = "nackPackets";
  uVar2 = FUN_004e148c(param_1,&local_68);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df1ec(auStack_60,param_4[1]);
  local_68 = "firPackets";
  uVar2 = FUN_004e148c(param_1,&local_68);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df1ec(auStack_60,param_4[2]);
  local_68 = "pliPackets";
  uVar2 = FUN_004e148c(param_1,&local_68);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df1ec(auStack_60,param_4[3]);
  local_68 = "nackRequests";
  uVar2 = FUN_004e148c(param_1,&local_68);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df1ec(auStack_60,param_4[4]);
  local_68 = "uniqueNackRequests";
  uVar2 = FUN_004e148c(param_1,&local_68);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00467db0  FUN_00467db0 =====

void FUN_00467db0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
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
  undefined1 auStack_100 [160];
  undefined8 *local_60;
  undefined8 auStack_58 [4];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  plVar6 = *(long **)(param_2 + 0x2168);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x40))(auStack_100);
    if (local_60 != auStack_58) {
      lVar8 = 0;
      lVar10 = 0;
      lVar9 = 0;
      lVar11 = 0;
      lVar12 = 0;
      lVar13 = 0;
      do {
        lVar18 = local_60[0xe];
        lVar15 = local_60[0xf];
        lVar14 = local_60[0x16];
        lVar19 = local_60[0x13];
        lVar1 = local_60[0x1c];
        lVar2 = local_60[0x1d];
        lVar17 = local_60[0xd];
        lVar16 = local_60[0xc];
        lVar23 = local_60[0x15];
        lVar22 = local_60[0x14];
        lVar21 = local_60[0x1b];
        lVar20 = local_60[0x1a];
        if (*(int *)(local_60 + 5) == 0) {
          if (*(char *)(local_60 + 0x2c) != '\0') {
            lVar9 = lVar9 + *(int *)((long)local_60 + 300);
            param_1[2] = lVar9;
          }
          lVar11 = lVar11 + (ulong)*(uint *)(local_60 + 0x21);
          param_1[3] = lVar11;
          lVar12 = lVar12 + (ulong)*(uint *)(local_60 + 0x22);
          param_1[4] = lVar12;
          lVar13 = lVar13 + (long)*(int *)((long)local_60 + 0x3c) +
                            (long)*(int *)((long)local_60 + 0x34);
          param_1[5] = lVar13;
          *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)(local_60 + 8);
          puVar4 = (undefined8 *)local_60[1];
          if ((undefined8 *)local_60[1] == (undefined8 *)0x0) goto LAB_00467ef0;
LAB_00467ee0:
          do {
            puVar7 = puVar4;
            puVar4 = (undefined8 *)*puVar7;
          } while ((undefined8 *)*puVar7 != (undefined8 *)0x0);
        }
        else {
          puVar4 = (undefined8 *)local_60[1];
          if ((undefined8 *)local_60[1] != (undefined8 *)0x0) goto LAB_00467ee0;
LAB_00467ef0:
          do {
            puVar7 = (undefined8 *)local_60[2];
            bVar5 = (undefined8 *)*puVar7 != local_60;
            local_60 = puVar7;
          } while (bVar5);
        }
        lVar10 = lVar2 + lVar14 + lVar10 + lVar15;
        lVar8 = lVar16 + lVar22 + lVar18 + lVar20 + lVar17 + lVar23 + lVar19 + lVar21 + lVar1 +
                lVar8;
        local_60 = puVar7;
      } while (puVar7 != auStack_58);
      *param_1 = lVar8;
      param_1[1] = lVar10;
    }
    FUN_008480a4(auStack_100);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00467f3c  FUN_00467f3c =====

undefined1  [16] FUN_00467f3c(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_1a0 [56];
  uint local_168;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(*(long *)(param_1 + 0x1d80) + 0x28);
  if (plVar2 == (long *)0x0) {
    uVar3 = 0;
    uVar4 = 0xffffffff;
  }
  else {
    (**(code **)(*plVar2 + 0x48))(auStack_1a0);
    uVar4 = (ulong)local_168;
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1d80) + 0x30) + 0x88);
    FUN_00842630(auStack_1a0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    auVar5._8_8_ = uVar4;
    auVar5._0_8_ = uVar3;
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00467fd0  FUN_00467fd0 =====

void FUN_00467fd0(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = FUN_00485f7c();
  if (iVar4 != 1) {
    FUN_00461f0c(param_1,1);
    uVar5 = *(undefined8 *)(param_2 + 0x1938);
    if (*(long *)(param_2 + 0x1940) != 0) {
      plVar1 = (long *)(*(long *)(param_2 + 0x1940) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_00460888(param_1,uVar5);
    if ((*(char *)(param_1 + 0x2148) == '\0') || (*(long *)(param_1 + 0x2248) == 0)) {
      if (*(long *)(param_1 + 0x2168) != 0) {
        FUN_00461f0c(param_1,1);
        return;
      }
    }
    else if (*(long *)(param_1 + 0x2168) == 0) {
      FUN_00468084(param_1);
      return;
    }
  }
  return;
}


// ===== 00468078  FUN_00468078 =====

void FUN_00468078(long param_1)

{
  FUN_00431e14(*(undefined8 *)(*(long *)(param_1 + 0x1d80) + 0x30));
  return;
}


// ===== 00468084  FUN_00468084 =====

/* WARNING: Removing unreachable block (ram,0x004681ac) */

void FUN_00468084(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  void *local_60;
  void *pvStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  FUN_00461f0c(param_1,0);
  (**(code **)(**(long **)(param_1 + 0x2248) + 0x28))
            (*(long **)(param_1 + 0x2248),*(undefined4 *)(param_1 + 0x1dd8),
             *(undefined4 *)(param_1 + 0x1de0),*(undefined4 *)(param_1 + 0x1df0));
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 0x2248);
  if (*(long *)(param_1 + 0x2250) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x2250) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_00451174(&local_60,uVar6,uVar7);
  puVar2 = (undefined8 *)(param_1 + 0x1f10);
  if (*(char *)(param_1 + 0x1f27) < '\0') {
    operator_delete((void *)*puVar2);
  }
  *(void **)(param_1 + 0x1f18) = pvStack_58;
  *puVar2 = local_60;
  *(undefined8 *)(param_1 + 0x1f20) = local_50;
  FUN_004681f0(param_1);
  uVar6 = *(undefined8 *)(param_1 + 8);
  if (*(undefined4 **)(param_1 + 0x2158) == *(undefined4 **)(param_1 + 0x2150)) {
    uVar8 = 0;
  }
  else {
    uVar8 = **(undefined4 **)(param_1 + 0x2150);
  }
  FUN_00469548(&local_60,param_1);
  FUN_0043abc4(uVar6,param_1 + 0x20,uVar8,puVar2,&local_60);
  if (local_60 != (void *)0x0) {
    for (; pvStack_58 != local_60; pvStack_58 = (void *)((long)pvStack_58 + -0x48)) {
    }
    pvStack_58 = local_60;
    operator_delete(local_60);
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004681f0  FUN_004681f0 =====

/* WARNING: Removing unreachable block (ram,0x0046909c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004681f0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  byte bVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 *puVar15;
  undefined1 __src [8];
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  char cVar22;
  bool bVar23;
  bool bVar24;
  undefined4 uVar25;
  ulong uVar26;
  long lVar27;
  size_t sVar28;
  undefined8 *******pppppppuVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  char *__dest;
  void *pvVar32;
  undefined8 *******__dest_00;
  long extraout_x1;
  int iVar33;
  int *piVar34;
  code *pcVar35;
  undefined **ppuVar36;
  char cVar37;
  long lVar38;
  void *pvVar39;
  uint uVar40;
  long *plVar41;
  long *plVar42;
  char *pcVar43;
  undefined8 *puVar44;
  char *pcVar45;
  long lVar46;
  undefined8 uVar47;
  void *pvVar48;
  undefined8 uVar49;
  int iVar50;
  int iVar51;
  char *pcVar52;
  int iVar53;
  undefined8 uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [12];
  undefined8 ******ppppppuStack_6c0;
  char *local_6b8;
  undefined8 *puStack_6b0;
  char *local_6a8;
  char **ppcStack_6a0;
  ulong local_698;
  char **ppcStack_690;
  char *local_688;
  ulong *puStack_680;
  ulong local_678;
  char **ppcStack_670;
  char *local_668;
  ulong *puStack_660;
  ulong local_658;
  char **ppcStack_650;
  char *local_648;
  ulong *puStack_640;
  undefined8 ******local_638;
  char **ppcStack_630;
  void *local_628;
  void *local_620;
  undefined8 local_618;
  undefined4 *local_610;
  undefined4 *local_608;
  undefined8 local_600;
  undefined1 local_5f8 [8];
  undefined8 uStack_5f0;
  undefined8 *******local_5e8;
  undefined1 auStack_5e0 [424];
  undefined8 local_438;
  undefined8 ******local_430;
  char **local_428;
  undefined1 auStack_420 [208];
  undefined8 local_350;
  undefined1 uStack_348;
  undefined1 uStack_347;
  undefined1 uStack_346;
  char cStack_345;
  uint uStack_344;
  undefined8 local_340;
  undefined8 local_338;
  undefined4 uStack_330;
  undefined8 *******local_280;
  size_t sStack_278;
  undefined8 local_270;
  undefined4 local_238;
  undefined8 local_230;
  undefined8 auStack_220 [3];
  undefined1 auStack_208 [24];
  uint local_1f0;
  undefined4 local_1cc;
  undefined1 auStack_198 [24];
  uint local_180;
  long local_150;
  long local_148;
  undefined8 local_140;
  long *local_110;
  undefined1 local_fc;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [72];
  long local_78;
  
  lVar9 = tpidr_el0;
  local_78 = *(long *)(lVar9 + 0x28);
  uVar26 = FUN_00417e08();
  if ((uVar26 & 1) == 0) {
    FUN_00623bb0(&DAT_001f6643,"../../discord_native_lib/src/media/local_user.cpp",0x3bd1,
                 "CreateVideoSendStream, number of streams: ",
                 *(long *)(param_1 + 0x2158) - *(long *)(param_1 + 0x2150) >> 6);
  }
  local_610 = (undefined4 *)0x0;
  local_608 = (undefined4 *)0x0;
  local_600 = 0;
  local_628 = (void *)0x0;
  local_620 = (void *)0x0;
  local_618 = 0;
  if (*(long **)(param_1 + 0x2168) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2168) + 8))();
    FUN_00453338(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(*(long *)(param_1 + 8) + 0xe0),
                 *(undefined8 *)(param_1 + 0x2168));
    *(undefined8 *)(param_1 + 0x2168) = 0;
    FUN_0084951c(&local_280);
    FUN_00469824(param_1 + 0x2170,&local_280);
    FUN_0084966c(&local_280);
  }
  FUN_00465ea4(param_1);
  pcVar43 = *(char **)(param_1 + 0x2158);
  iVar51 = *(int *)(param_1 + 0x1dc8);
  if (*(char **)(param_1 + 0x2150) == pcVar43) {
    iVar50 = 0;
    bVar24 = false;
    iVar53 = 0;
  }
  else {
    iVar53 = 0;
    bVar24 = false;
    iVar50 = 0;
    pcVar45 = *(char **)(param_1 + 0x2150) + 0x38;
    do {
      if (*(int *)(pcVar45 + -0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_004d7934("../../discord_native_lib/src/media/local_user.cpp",0x788,
                     "videoStream.ssrc_ > 0",&DAT_001f6647);
      }
      if (*(int *)(pcVar45 + -0x34) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_004d7934("../../discord_native_lib/src/media/local_user.cpp",0x789,
                     "videoStream.rtxSsrc_ > 0",&DAT_001f6647);
      }
      FUN_00441e88(&local_610,pcVar45 + -0x38);
      FUN_00441e88(&local_628,pcVar45 + -0x34);
      if (*(char *)(param_1 + 0x1e14) == '\0') {
LAB_004683b0:
        cVar37 = *pcVar45;
        iVar33 = *(int *)(pcVar45 + -0xc);
        if ((cVar37 != '\0') || (iVar33 == 100)) goto LAB_004682f0;
        cVar37 = '\0';
        iVar6 = iVar51;
      }
      else {
        if ((*(char *)(param_1 + 0x1e19) == '\0') || (*(int *)(param_1 + 0x1e10) == 0)) {
          if ((*(char *)(param_1 + 0x1e19) == '\0') && (*(int *)(param_1 + 0x1e10) != 0))
          goto LAB_0046839c;
          goto LAB_004683b0;
        }
        if (*(char *)(param_1 + 0x1e18) == '\0') goto LAB_004683b0;
LAB_0046839c:
        iVar33 = *(int *)(pcVar45 + -0xc);
        if ((*(char *)(param_1 + 0x2149) != '\0') && (iVar33 != 100)) goto LAB_004683b0;
        cVar37 = *pcVar45;
LAB_004682f0:
        iVar5 = *(int *)(pcVar45 + -0x18);
        if (*(int *)(pcVar45 + -0x18) < 1) {
          iVar5 = *(int *)(param_1 + 0x1dd0);
        }
        iVar6 = *(int *)(pcVar45 + -0x14);
        if (*(int *)(pcVar45 + -0x14) < 1) {
          iVar6 = *(int *)(param_1 + 0x1dc8);
        }
        iVar53 = iVar5 + iVar53;
        if (iVar51 <= iVar6) {
          iVar6 = iVar51;
        }
      }
      iVar51 = iVar6;
      if (iVar50 <= iVar33) {
        iVar50 = iVar33;
      }
      bVar24 = cVar37 != '\0' || bVar24;
      pcVar52 = pcVar45 + 8;
      pcVar45 = pcVar45 + 0x40;
    } while (pcVar52 != pcVar43);
  }
  plVar41 = (long *)(param_1 + 0x70);
  bVar8 = *(byte *)(param_1 + 0x87);
  plVar42 = (long *)*plVar41;
  if (-1 < (char)bVar8) {
    plVar42 = plVar41;
  }
  uVar26 = *(ulong *)(param_1 + 0x78);
  if (-1 < (char)bVar8) {
    uVar26 = (ulong)bVar8;
  }
  if ((plVar42 == (long *)0x0) && (uVar26 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
               "__len == 0 || __s != nullptr",
               "string_view::string_view(_CharT *, size_t): received nullptr");
  }
  uVar26 = FUN_0061ff84(plVar42,uVar26,&DAT_001f6638,4);
  if ((uVar26 & 1) != 0) {
    FUN_00547bf8(plVar41,PTR_DAT_00d51bd8);
  }
  FUN_007b687c(auStack_d8,plVar41);
  if (auStack_c0 != (undefined1 *)(param_1 + 0x88)) {
    FUN_0046cff4(auStack_c0,*(undefined8 *)(param_1 + 0x88),param_1 + 0x90);
  }
  FUN_0054923c(&local_280,*(undefined4 *)(param_1 + 0x1e10));
  local_340 = (code *)CONCAT17(0xb,(undefined7)local_340);
  if ((&local_350 < (undefined8 *******)0x1e7345) && ("discord-fki" < &cStack_345)) {
LAB_00469480:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  cStack_345 = '\0';
  uStack_348 = 0x66;
  uStack_347 = 0x6b;
  uStack_346 = 0x69;
  local_350._0_4_ = (uint)s_discord_fki_001e7344._0_8_;
  local_350._4_4_ = SUB84(s_discord_fki_001e7344._0_8_,4);
  local_5f8 = (undefined1  [8])&local_350;
  lVar27 = FUN_0046d384(auStack_c0,&local_350,&DAT_001f65b0,local_5f8,&local_438);
  if (*(char *)(lVar27 + 0x4f) < '\0') {
    operator_delete(*(void **)(lVar27 + 0x38));
  }
  uVar26 = local_270;
  pppppppuVar29 = local_280;
  local_280 = (undefined8 *******)((ulong)local_280 & 0xffffffffffffff00);
  local_270 = local_270 & 0xffffffffffffff;
  *(size_t *)(lVar27 + 0x40) = sStack_278;
  *(undefined8 ********)(lVar27 + 0x38) = pppppppuVar29;
  *(ulong *)(lVar27 + 0x48) = uVar26;
  if (((long)local_340 < 0) &&
     (operator_delete((void *)CONCAT44(local_350._4_4_,(uint)local_350)), (long)local_270 < 0)) {
    operator_delete(local_280);
    pppppppuVar29 = (undefined8 *******)CONCAT44(local_350._4_4_,(uint)local_350);
    cVar37 = *(char *)(param_1 + 0x1e38);
  }
  else {
    pppppppuVar29 = (undefined8 *******)CONCAT44(local_350._4_4_,(uint)local_350);
    cVar37 = *(char *)(param_1 + 0x1e38);
  }
  if (cVar37 != '\0') {
    sVar28 = strlen("video-quality-measurement");
    if (0x7fffffffffffffef < sVar28) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (sVar28 < 0x17) {
      pppppppuVar29 = &local_280;
      local_270 = CONCAT17((char)sVar28,(undefined7)local_270);
    }
    else {
      uVar26 = (sVar28 | 0xf) + 1;
      pppppppuVar29 = (undefined8 *******)operator_new(uVar26);
      local_270 = uVar26 | 0x8000000000000000;
      local_280 = pppppppuVar29;
      sStack_278 = sVar28;
    }
    if ((pppppppuVar29 < (undefined8 *******)0x1f709d) &&
       ("video-quality-measurement" < (char *)((long)pppppppuVar29 + sVar28))) goto LAB_00469480;
    if (sVar28 != 0) {
      memcpy(pppppppuVar29,PTR_s_video_quality_measurement_00d51be0,sVar28);
    }
    local_350 = (undefined1  [8])&local_280;
    *(char *)((long)pppppppuVar29 + sVar28) = '\0';
    lVar27 = FUN_0046d384(auStack_c0,&local_280,&DAT_001f65b0,&local_350,local_5f8);
    FUN_00411268(lVar27 + 0x38,param_1 + 0x1e20);
    pppppppuVar29 = (undefined8 *******)local_350;
    if ((long)local_270 < 0) {
      operator_delete(local_280);
      pppppppuVar29 = (undefined8 *******)local_350;
    }
  }
  local_350 = (undefined1  [8])pppppppuVar29;
  if (*(char *)(param_1 + 0x1e58) != '\0') {
    sVar28 = strlen("video-encoder-experiments");
    if (0x7fffffffffffffef < sVar28) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (sVar28 < 0x17) {
      pppppppuVar29 = &local_280;
      local_270 = CONCAT17((char)sVar28,(undefined7)local_270);
    }
    else {
      uVar26 = (sVar28 | 0xf) + 1;
      pppppppuVar29 = (undefined8 *******)operator_new(uVar26);
      local_270 = uVar26 | 0x8000000000000000;
      local_280 = pppppppuVar29;
      sStack_278 = sVar28;
    }
    if ((pppppppuVar29 < (undefined8 *******)0x1f7083) &&
       ("video-encoder-experiments" < (char *)((long)pppppppuVar29 + sVar28))) goto LAB_00469480;
    if (sVar28 != 0) {
      memcpy(pppppppuVar29,PTR_s_video_encoder_experiments_00d51be8,sVar28);
    }
    local_350 = (undefined1  [8])&local_280;
    *(char *)((long)pppppppuVar29 + sVar28) = '\0';
    lVar27 = FUN_0046d384(auStack_c0,&local_280,&DAT_001f65b0,&local_350,local_5f8);
    FUN_00411268(lVar27 + 0x38,param_1 + 0x1e40);
    if ((long)local_270 < 0) {
      operator_delete(local_280);
    }
  }
  uVar47 = *(undefined8 *)(*(long *)(param_1 + 8) + 0xf8);
  plVar42 = *(long **)(*(long *)(param_1 + 8) + 0x100);
  if (plVar42 == (long *)0x0) {
    FUN_00848a14(&local_280,uVar47);
  }
  else {
    plVar1 = plVar42 + 1;
    do {
      cVar37 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar23) {
        *plVar1 = *plVar1 + 1;
        cVar37 = ExclusiveMonitorsStatus();
      }
    } while (cVar37 != '\0');
    FUN_00848a14(&local_280,uVar47);
    do {
      lVar27 = *plVar1;
      cVar37 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar23) {
        *plVar1 = lVar27 + -1;
        cVar37 = ExclusiveMonitorsStatus();
      }
    } while (cVar37 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar42 + 0x10))(plVar42);
      FUN_005466cc(plVar42);
    }
  }
  local_148 = param_1 + 0x1d48;
  local_140 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x6d0);
  local_150 = *(long *)(param_1 + 8) + 0x690;
  FUN_00411268(auStack_208,plVar41);
  local_1f0 = (uint)*(byte *)(param_1 + 0x68);
  FUN_0046b760(&local_280,local_610,local_608);
  local_238 = 1;
  puVar30 = (undefined8 *)FUN_004842e8();
  if (auStack_220 != puVar30) {
    FUN_0046b598(auStack_220,*puVar30,puVar30[1]);
  }
  local_1cc = 1000;
  local_230 = 0x4b0;
  FUN_0046b760(auStack_198,local_628,local_620);
  plVar42 = *(long **)(param_1 + 0x1f30);
  local_180 = (uint)*(byte *)(param_1 + 0x69);
  if (plVar42 != (long *)0x0) {
    (**(code **)*plVar42)(plVar42);
  }
  puVar30 = (undefined8 *)(param_1 + 0x2218);
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 8))();
  }
  local_fc = 1;
  local_110 = plVar42;
  FUN_0084951c(&local_350);
  puVar3 = (undefined4 *)(param_1 + 0x2170);
  FUN_00469824(puVar3,&local_350);
  FUN_0084966c(&local_350);
  lVar46 = *(long *)(param_1 + 0x2220);
  lVar27 = lVar46 - *(long *)(param_1 + 0x2218) >> 3;
  uVar26 = *(long *)(param_1 + 0x2158) - *(long *)(param_1 + 0x2150) >> 6;
  bVar23 = uVar26 < (ulong)(lVar27 * -0x70a3d70a3d70a3d7);
  lVar27 = uVar26 + lVar27 * 0x70a3d70a3d70a3d7;
  *(ulong *)(param_1 + 0x2230) = uVar26;
  if (bVar23 || lVar27 == 0) {
    if (bVar23) {
      lVar38 = *(long *)(param_1 + 0x2218) + uVar26 * 200;
      while (lVar46 != lVar38) {
        lVar46 = lVar46 + -200;
        FUN_008492a8(lVar46,lVar27);
        lVar27 = extraout_x1;
      }
      *(long *)(param_1 + 0x2220) = lVar38;
    }
  }
  else {
    FUN_0046b8e4(puVar30);
  }
  iVar33 = 4;
  if (iVar50 != 100) {
    iVar33 = 1;
  }
  *(int *)(param_1 + 0x220c) = iVar53;
  *(int *)(param_1 + 0x2208) = iVar51;
  *(uint *)(param_1 + 0x21f8) = (uint)*(byte *)(param_1 + 0x2149);
  *(double *)(param_1 + 0x2210) = (double)iVar33;
  uVar25 = FUN_007b8cec(auStack_d8);
  *(undefined4 *)(param_1 + 0x2170) = uVar25;
  FUN_007b6b54(param_1 + 0x2178,auStack_d8);
  if ((*(char *)(param_1 + 0x1e14) == '\0') || (*(int *)(param_1 + 0x1e10) == 0)) {
    uVar40 = 0;
  }
  else {
    uVar40 = (uint)(*(int *)(param_1 + 0x1de8) * *(int *)(param_1 + 0x1e10)) / 1000;
  }
  switch(*puVar3) {
  case 1:
    uVar47 = FUN_007b9400();
    local_438._2_6_ = (undefined6)((ulong)uVar47 >> 0x10);
    local_438._0_2_ = CONCAT11(1,(char)uVar47);
    if (uVar40 != 0) {
      local_438 = (char *)CONCAT44(uVar40,(undefined4)local_438);
    }
    puVar31 = (undefined8 *)operator_new(0x18);
    FUN_00849fbc(puVar31,&local_438);
    piVar34 = (int *)(puVar31 + 2);
    *piVar34 = 0;
    *puVar31 = &PTR_FUN_00d1cd08;
    do {
      cVar37 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(piVar34,0x10);
      if (bVar23) {
        *piVar34 = *piVar34 + 1;
        cVar37 = ExclusiveMonitorsStatus();
      }
    } while (cVar37 != '\0');
    if (*(long **)(param_1 + 0x2200) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x2200) + 8))();
    }
    *(undefined8 **)(param_1 + 0x2200) = puVar31;
    uVar26 = FUN_00417e08();
    if ((uVar26 & 1) == 0) {
      local_340 = (code *)&local_638;
      uStack_348 = 0xe9;
      uStack_347 = 0x3f;
      uStack_346 = 0;
      cStack_345 = '\0';
      uStack_344 = 0;
      uStack_5f0 = (undefined8 *******)&local_350;
      local_5f8 = (undefined1  [8])0x1e7350;
      local_350._0_4_ = 0x1e4315;
      local_350._4_4_ = 0;
      FUN_00623bb0(&DAT_001f6648,"../../discord_native_lib/src/media/local_user.cpp",0x3fe9,
                   "VP8 settings",", numberOfTemporalLayers: ",(ulong)local_438 & 0xff,
                   ", denoisingOn: ",local_438._1_1_,", automaticResizeOn: ",local_438._2_1_,
                   ", keyFrameInterval: ",local_438._4_4_);
    }
    uVar47 = 2;
    puVar10 = local_610;
    puVar11 = local_608;
    break;
  case 2:
    auVar55 = FUN_007b9410();
    uStack_5f0 = auVar55._8_8_;
    local_5f8._2_6_ = auVar55._2_6_;
    local_5f8[0] = auVar55[0];
    local_5f8[1] = 0;
    if (uVar40 != 0) {
      local_5f8._4_4_ = uVar40;
    }
    puVar31 = (undefined8 *)operator_new(0x20);
    FUN_00849fe8(puVar31,local_5f8);
    piVar34 = (int *)(puVar31 + 3);
    *piVar34 = 0;
    *puVar31 = &PTR_FUN_00d1cd68;
    do {
      cVar37 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(piVar34,0x10);
      if (bVar23) {
        *piVar34 = *piVar34 + 1;
        cVar37 = ExclusiveMonitorsStatus();
      }
    } while (cVar37 != '\0');
    if (*(long **)(param_1 + 0x2200) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x2200) + 8))();
    }
    *(undefined8 **)(param_1 + 0x2200) = puVar31;
    uVar26 = FUN_00417e08();
    if ((uVar26 & 1) == 0) {
      local_698 = (ulong)local_5f8 & 0xff;
      local_350._0_4_ = 0x1e4315;
      local_350._4_4_ = 0;
      puStack_6b0 = &local_350;
      uStack_348 = 0x81;
      uStack_347 = 0x40;
      uStack_346 = 0;
      cStack_345 = '\0';
      uStack_344 = 0;
      local_678 = (ulong)local_5f8 >> 8 & 0xff;
      local_340 = (code *)&ppppppuStack_6c0;
      local_638 = (undefined8 ******)((ulong)uStack_5f0 & 0xff);
      local_6b8 = "VP9 settings";
      ppcStack_6a0 = &local_6b8;
      local_658 = (ulong)local_5f8 >> 0x20;
      local_6a8 = ", numberOfTemporalLayers: ";
      ppcStack_690 = &local_6a8;
      puStack_680 = &local_698;
      ppcStack_630 = &local_648;
      ppcStack_670 = &local_688;
      local_688 = ", denoisingOn: ";
      local_430 = &local_638;
      puStack_660 = &local_678;
      local_668 = ", keyFrameInterval: ";
      ppcStack_650 = &local_668;
      local_438 = ", automaticResizeOn: ";
      puStack_640 = &local_658;
      local_648 = ", adaptiveQpMode: ";
      FUN_00623bb0(&DAT_001f665c,"../../discord_native_lib/src/media/local_user.cpp",0x4081,
                   "VP9 settings",", numberOfTemporalLayers: ");
    }
    uVar47 = 3;
    puVar10 = local_610;
    puVar11 = local_608;
    break;
  case 3:
    local_350._0_4_ = 0;
    local_350._4_4_ = 0;
    if (uVar40 != 0) {
      local_350._4_4_ = uVar40;
    }
    puVar31 = (undefined8 *)operator_new(0x18);
    FUN_0084a014(puVar31,&local_350);
    piVar34 = (int *)(puVar31 + 2);
    *piVar34 = 0;
    *puVar31 = &PTR_FUN_00d1cdc8;
    do {
      cVar37 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(piVar34,0x10);
      if (bVar23) {
        *piVar34 = *piVar34 + 1;
        cVar37 = ExclusiveMonitorsStatus();
      }
    } while (cVar37 != '\0');
    if (*(long **)(param_1 + 0x2200) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x2200) + 8))();
    }
    *(undefined8 **)(param_1 + 0x2200) = puVar31;
    uVar26 = FUN_00417e08();
    if ((uVar26 & 1) == 0) {
      FUN_00623bb0(&DAT_001f666f,"../../discord_native_lib/src/media/local_user.cpp",0x4131,
                   "AV1 settings",", automatic_resize_on: ",(undefined1)local_350,
                   ", key_frame_interval: ",local_350._4_4_);
    }
    uVar47 = 6;
    puVar10 = local_610;
    puVar11 = local_608;
    break;
  case 4:
    auVar55 = FUN_007b942c();
    uVar47 = auVar55._8_8_;
    _local_5f8 = auVar55;
    if (uVar40 != 0) {
      local_5f8._4_4_ = *(int *)(param_1 + 0x1e10);
      local_5f8._0_4_ = uVar40;
      auVar14._8_8_ = uVar47;
      auVar14._0_8_ = local_5f8;
      auVar13._8_8_ = uVar47;
      auVar13._0_8_ = local_5f8;
      auVar12._8_8_ = uVar47;
      auVar12._0_8_ = local_5f8;
      uStack_5f0 = (undefined8 *******)uVar47;
      if (*(char *)(param_1 + 0x1e14) != '\0') {
        if ((*(char *)(param_1 + 0x1e19) == '\0') || (local_5f8._4_4_ == 0)) {
          _local_5f8 = auVar12;
          if ((*(char *)(param_1 + 0x1e19) == '\0') && (_local_5f8 = auVar13, local_5f8._4_4_ != 0))
          goto LAB_00468de4;
        }
        else {
          _local_5f8 = auVar14;
          if (*(char *)(param_1 + 0x1e18) != '\0') {
LAB_00468de4:
            uStack_5f0 = (undefined8 *******)CONCAT44(2,auVar55._8_4_);
          }
        }
      }
    }
    uVar26 = FUN_00417e08();
    if ((uVar26 & 1) == 0) {
      local_340 = (code *)&local_638;
      uStack_348 = 0xa9;
      uStack_347 = 0x3e;
      uStack_346 = 0;
      cStack_345 = '\0';
      uStack_344 = 0;
      local_430 = (undefined8 ******)&local_350;
      uVar26 = (ulong)local_5f8 & 0xffffffff;
      local_350._0_4_ = 0x1e4315;
      local_350._4_4_ = 0;
      local_438 = "H.264 settings";
      FUN_00623bb0(&DAT_001f6648,"../../discord_native_lib/src/media/local_user.cpp",0x3ea9,
                   "H.264 settings",", keyFrameInterval: ",uVar26,", keyFrameIntervalMs: ",
                   local_5f8._4_4_,", numberOfTemporalLayers: ",(undefined1)uStack_5f0,", latency: "
                   ,uStack_5f0._4_4_);
    }
    puVar31 = (undefined8 *)operator_new(0x20);
    FUN_00849f4c(puVar31,local_5f8);
    piVar34 = (int *)(puVar31 + 3);
    *piVar34 = 0;
    *puVar31 = &PTR_FUN_00d1cc48;
    do {
      cVar37 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(piVar34,0x10);
      if (bVar23) {
        *piVar34 = *piVar34 + 1;
        cVar37 = ExclusiveMonitorsStatus();
      }
    } while (cVar37 != '\0');
    if (*(long **)(param_1 + 0x2200) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x2200) + 8))();
    }
    uVar47 = 4;
    *(undefined8 **)(param_1 + 0x2200) = puVar31;
    puVar10 = local_610;
    puVar11 = local_608;
    break;
  case 5:
    auVar56 = FUN_007b9444();
    local_350._0_4_ = auVar56._0_4_;
    local_350._4_4_ = auVar56._4_4_;
    uStack_348 = auVar56[8];
    uStack_347 = auVar56[9];
    uStack_346 = auVar56[10];
    cStack_345 = auVar56[0xb];
    if (uVar40 != 0) {
      local_350._4_4_ = *(undefined4 *)(param_1 + 0x1e10);
      local_350._0_4_ = uVar40;
    }
    puVar31 = (undefined8 *)operator_new(0x18);
    FUN_00849f78(puVar31,&local_350);
    piVar34 = (int *)((long)puVar31 + 0x14);
    *piVar34 = 0;
    *puVar31 = &PTR_FUN_00d1cca8;
    do {
      cVar37 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(piVar34,0x10);
      if (bVar23) {
        *piVar34 = *piVar34 + 1;
        cVar37 = ExclusiveMonitorsStatus();
      }
    } while (cVar37 != '\0');
    if (*(long **)(param_1 + 0x2200) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x2200) + 8))();
    }
    *(undefined8 **)(param_1 + 0x2200) = puVar31;
    uVar26 = FUN_00417e08();
    if ((uVar26 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6653,"../../discord_native_lib/src/media/local_user.cpp",0x3f59,
                   "H.265 settings",", keyFrameInterval: ",(uint)local_350,", keyFrameIntervalMs: ",
                   local_350._4_4_,", numberOfTemporalLayers: ",uStack_348);
    }
    uVar47 = 5;
    puVar10 = local_610;
    puVar11 = local_608;
    break;
  default:
    uVar26 = FUN_004249b0();
    if ((uVar26 & 1) == 0) {
      local_428 = &local_648;
      local_438 = "../../discord_native_lib/src/media/local_user.cpp";
      ppcStack_630 = (char **)&local_438;
      local_430 = (undefined8 ******)0x4173;
      local_638 = (undefined8 ******)0x199e0b;
      FUN_0046d6dc(local_5f8,puVar3);
      uVar40 = uStack_344;
      cVar37 = cStack_345;
      uVar20 = uStack_346;
      uVar18 = uStack_347;
      uVar16 = uStack_348;
      pppppppuVar29 = uStack_5f0;
      __src = local_5f8;
      uStack_348 = SUB81(uStack_5f0,0);
      uVar17 = uStack_348;
      uStack_347 = (undefined1)((ulong)uStack_5f0 >> 8);
      uVar19 = uStack_347;
      uStack_346 = (undefined1)((ulong)uStack_5f0 >> 0x10);
      uVar21 = uStack_346;
      cStack_345 = (char)((ulong)uStack_5f0 >> 0x18);
      cVar22 = cStack_345;
      uStack_344 = (uint)((ulong)uStack_5f0 >> 0x20);
      if ((long)local_5e8 < 0) {
        uStack_347 = uVar18;
        uStack_346 = uVar20;
        cStack_345 = cVar37;
        if (uStack_5f0 < (undefined8 *******)0x17) {
          __dest_00 = (undefined8 *******)&local_350;
          local_340 = (code *)CONCAT17(uStack_348,(undefined7)local_340);
          uStack_348 = uVar16;
          uStack_344 = uVar40;
        }
        else {
          if ((undefined8 *******)0x7fffffffffffffef < uStack_5f0) {
            uStack_348 = uVar16;
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar26 = ((ulong)uStack_5f0 | 0xf) + 1;
          uStack_348 = uVar16;
          __dest_00 = (undefined8 *******)operator_new(uVar26);
          local_340 = (code *)(uVar26 | 0x8000000000000000);
          uStack_348 = uVar17;
          uStack_347 = uVar19;
          uStack_346 = uVar21;
          cStack_345 = cVar22;
          local_350 = (undefined1  [8])__dest_00;
        }
        if ((__dest_00 <= (ulong)__src) &&
           ((ulong)__src < (undefined8 *******)((long)__dest_00 + (long)((long)pppppppuVar29 + 1U)))
           ) goto LAB_00469480;
        memmove(__dest_00,(void *)__src,(size_t)((long)pppppppuVar29 + 1U));
        local_338 = &local_638;
        operator_delete((void *)__src);
      }
      else {
        local_340 = (code *)local_5e8;
        local_350._0_4_ = local_5f8._0_4_;
        local_350._4_4_ = local_5f8._4_4_;
        local_338._0_4_ = (uint)&local_638;
        local_338._4_4_ = (undefined4)((ulong)&local_638 >> 0x20);
        local_338 = &local_638;
        local_350 = local_5f8;
      }
      FUN_00623bb0(&DAT_001f6510,*local_338[1],local_338[1][1],*local_338,&local_350);
      if ((long)local_340 < 0) {
        operator_delete((void *)local_350);
      }
    }
    goto LAB_00469378;
  }
  for (; puVar15 = local_608, puVar10 != local_608; puVar10 = puVar10 + 1) {
    local_608 = puVar11;
    FUN_0045f5f0(*(undefined8 *)(param_1 + 0x1f30),*puVar10,uVar47);
    puVar11 = local_608;
    local_608 = puVar15;
  }
  local_608 = puVar11;
  puVar31 = (undefined8 *)operator_new(0x138);
  puVar44 = *(undefined8 **)(param_1 + 0x2158);
  lVar27 = *(long *)(param_1 + 0x2150);
  uStack_5f0 = (undefined8 *******)0x0;
  local_5e8 = (undefined8 *******)0x0;
  local_5f8 = (undefined1  [8])0x0;
  uVar26 = (long)puVar44 - lVar27;
  if (uVar26 != 0) {
    if ((long)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pppppppuVar29 = (undefined8 *******)operator_new(uVar26);
    lVar46 = 0;
    local_5e8 = pppppppuVar29 + ((long)uVar26 >> 6) * 8;
    local_5f8 = (undefined1  [8])pppppppuVar29;
    uStack_5f0 = pppppppuVar29;
    do {
      puVar4 = (undefined8 *)(lVar27 + lVar46);
      pcVar43 = (char *)((long)pppppppuVar29 + lVar46);
      pcVar45 = pcVar43 + 8;
      *(undefined8 *)pcVar43 = *puVar4;
      if (*(char *)((long)puVar4 + 0x1f) < '\0') {
        uVar26 = puVar4[2];
        pcVar52 = (char *)puVar4[1];
        if (uVar26 < 0x17) {
          *(char *)((long)pppppppuVar29 + lVar46 + 0x1f) = (char)uVar26;
          __dest = pcVar45;
        }
        else {
          if (0x7fffffffffffffef < uVar26) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar2 = (uVar26 | 0xf) + 1;
          __dest = (char *)operator_new(uVar2);
          *(char **)pcVar45 = __dest;
          *(ulong *)((long)pppppppuVar29 + lVar46 + 0x10) = uVar26;
          *(ulong *)((long)pppppppuVar29 + lVar46 + 0x18) = uVar2 | 0x8000000000000000;
        }
        if ((__dest <= pcVar52) && (pcVar52 < __dest + uVar26 + 1)) goto LAB_00469480;
        memmove(__dest,pcVar52,uVar26 + 1);
      }
      else {
        uVar49 = puVar4[2];
        uVar47 = puVar4[1];
        *(undefined8 *)(pcVar43 + 0x18) = puVar4[3];
        *(undefined8 *)(pcVar43 + 0x10) = uVar49;
        *(undefined8 *)pcVar45 = uVar47;
      }
      uVar47 = *(undefined8 *)((long)puVar4 + 0x29);
      lVar46 = lVar46 + 0x40;
      uVar54 = puVar4[5];
      uVar49 = puVar4[4];
      *(undefined8 *)(pcVar43 + 0x31) = *(undefined8 *)((long)puVar4 + 0x31);
      *(undefined8 *)(pcVar43 + 0x29) = uVar47;
      *(undefined8 *)(pcVar43 + 0x28) = uVar54;
      *(undefined8 *)(pcVar43 + 0x20) = uVar49;
    } while (puVar4 + 8 != puVar44);
    uStack_5f0 = (undefined8 *******)((long)pppppppuVar29 + lVar46);
  }
  local_340 = FUN_0046dadc;
  local_338._0_4_ = 0x1f65b8;
  local_338._4_4_ = 0;
  local_350._0_4_ = (uint)param_1;
  local_350._4_4_ = (uint)((ulong)param_1 >> 0x20);
  FUN_004b55f4(puVar31,param_1 + 0x1dc0,local_5f8,&local_350);
  pcVar35 = *(code **)(CONCAT44(local_338._4_4_,(uint)local_338) + 8);
  if (pcVar35 != (code *)0x0) {
    (*pcVar35)(CONCAT44(local_350._4_4_,(uint)local_350));
  }
  if (local_5f8 != (undefined1  [8])0x0) {
    for (; (undefined1  [8])uStack_5f0 != local_5f8; uStack_5f0 = uStack_5f0 + -8) {
    }
    uStack_5f0 = (undefined8 *******)local_5f8;
    operator_delete((void *)local_5f8);
  }
  piVar34 = (int *)(puVar31 + 0x26);
  *(undefined4 *)(puVar31 + 0x26) = 0;
  *puVar31 = &PTR_FUN_00d1ce28;
  do {
    cVar37 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(piVar34,0x10);
    if (bVar23) {
      *piVar34 = *piVar34 + 1;
      cVar37 = ExclusiveMonitorsStatus();
    }
  } while (cVar37 != '\0');
  if (*(long **)(param_1 + 0x21d8) == (long *)0x0) {
    ppuVar36 = &PTR_FUN_00d1ce28;
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x21d8) + 8))();
    ppuVar36 = (undefined **)*puVar31;
  }
  *(undefined8 **)(param_1 + 0x21d8) = puVar31;
  (*(code *)ppuVar36[4])
            (&local_350,puVar31,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x17f0),
             *(undefined4 *)(param_1 + 0x1dd8),*(undefined4 *)(param_1 + 0x1de0),puVar3);
  pvVar39 = *(void **)(param_1 + 0x2218);
  if (pvVar39 != (void *)0x0) {
    pvVar48 = *(void **)(param_1 + 0x2220);
    pvVar32 = pvVar39;
    if (pvVar48 != pvVar39) {
      do {
        pvVar48 = (void *)((long)pvVar48 + -200);
        FUN_008492a8(pvVar48);
      } while (pvVar48 != pvVar39);
      pvVar32 = (void *)*puVar30;
    }
    *(void **)(param_1 + 0x2220) = pvVar39;
    operator_delete(pvVar32);
  }
  *(undefined1 *)(param_1 + 0x21fc) = 1;
  *(code **)(param_1 + 0x2228) = local_340;
  *(ulong *)(param_1 + 0x2220) =
       CONCAT44(uStack_344,CONCAT13(cStack_345,CONCAT12(uStack_346,CONCAT11(uStack_347,uStack_348)))
               );
  *puVar30 = CONCAT44(local_350._4_4_,(uint)local_350);
  uVar26 = FUN_00417e08();
  if ((uVar26 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/local_user.cpp",0x4239,
                 "Creating video send stream ");
  }
  uVar47 = *(undefined8 *)(param_1 + 0x10);
  uVar49 = *(undefined8 *)(*(long *)(param_1 + 8) + 0xe0);
  FUN_00848970(auStack_5e0,&local_280);
  FUN_00849b38(auStack_420,puVar3);
  uVar47 = FUN_004532a0(uVar47,uVar49,auStack_5e0,auStack_420);
  *(undefined8 *)(param_1 + 0x2168) = uVar47;
  FUN_0084966c(auStack_420);
  FUN_00848a78(auStack_5e0);
  if (*(uint *)(param_1 + 0x1e08) < 4) {
    uVar25 = *(undefined4 *)(&DAT_001f6858 + (long)(int)*(uint *)(param_1 + 0x1e08) * 4);
  }
  else {
    uVar25 = 3;
  }
  local_5f8._0_4_ = uVar25;
  (**(code **)(**(long **)(param_1 + 0x2168) + 0x28))
            (*(long **)(param_1 + 0x2168),*(undefined8 *)(param_1 + 0x2248),local_5f8);
  FUN_007bfa40(&local_350);
  if ((*(char *)(param_1 + 0x1dfc) != '\0') && (iVar51 = *(int *)(param_1 + 0x1df8), iVar51 != 0)) {
    uStack_344 = CONCAT31(uStack_344._1_3_,1);
    uStack_348 = (undefined1)iVar51;
    uStack_347 = (undefined1)((uint)iVar51 >> 8);
    uStack_346 = (undefined1)((uint)iVar51 >> 0x10);
    cStack_345 = (char)((uint)iVar51 >> 0x18);
    local_350._4_4_ = iVar51;
  }
  if (*(char *)(param_1 + 0x1e04) != '\0') {
    local_340 = (code *)CONCAT44(local_340._4_4_,*(undefined4 *)(param_1 + 0x1e00));
  }
  plVar42 = *(long **)(param_1 + 0x2248);
  if (plVar42 != (long *)0x0) {
    (**(code **)(*plVar42 + 0x10))(plVar42,param_1 + 0x2240,&local_350);
  }
  FUN_007bfb14(&local_350);
  if (bVar24) goto LAB_00469294;
  if (*(char *)(param_1 + 0x1e14) != '\0') {
    if ((*(char *)(param_1 + 0x1e19) == '\0') || (*(int *)(param_1 + 0x1e10) == 0)) {
      if ((*(char *)(param_1 + 0x1e19) == '\0') && (*(int *)(param_1 + 0x1e10) != 0))
      goto LAB_00469294;
    }
    else if (*(char *)(param_1 + 0x1e18) != '\0') {
LAB_00469294:
      uVar26 = FUN_00417e08();
      if ((uVar26 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/local_user.cpp",0x4281,
                     "Starting video send stream");
      }
      (**(code **)**(undefined8 **)(param_1 + 0x2168))();
    }
  }
  FUN_004699a8(param_1);
  plVar42 = *(long **)(*(long *)(param_1 + 8) + 0xe0);
  if (plVar42 != (long *)0x0) {
    local_350._4_4_ = 0;
    uStack_348 = 0;
    uStack_347 = 0;
    local_350._0_4_ = CONCAT31(local_350._1_3_,1);
    uVar7 = *(ushort *)(param_1 + 0x1f28);
    local_338._4_4_ = 0xffffffff;
    uStack_330 = 0;
    uStack_344 = uStack_344 & 0xffffff00;
    uStack_346 = (undefined1)uVar7;
    cStack_345 = (char)(uVar7 >> 8);
    local_340 = (code *)((ulong)uVar7 << 0x30);
    local_338._0_4_ = (uint)local_338 & 0xffffff00;
    plVar42 = (long *)(**(code **)(*plVar42 + 0x68))();
    (**(code **)(*plVar42 + 0x78))(plVar42,"transport",9,&local_350);
    *(short *)(param_1 + 0x1f28) = *(short *)(param_1 + 0x1f28) + 1;
  }
LAB_00469378:
  FUN_00848a78(&local_280);
  FUN_007b6d78(auStack_d8);
  if (local_628 != (void *)0x0) {
    local_620 = local_628;
    operator_delete(local_628);
  }
  if (local_610 != (undefined4 *)0x0) {
    local_608 = local_610;
    operator_delete(local_610);
  }
  if (*(long *)(lVar9 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00469528  FUN_00469528 =====

undefined4 FUN_00469528(long param_1)

{
  if (*(undefined4 **)(param_1 + 0x2158) != *(undefined4 **)(param_1 + 0x2150)) {
    return **(undefined4 **)(param_1 + 0x2150);
  }
  return 0;
}


// ===== 00469548  FUN_00469548 =====

void FUN_00469548(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 ***__dest;
  long lVar6;
  undefined8 ***__src;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 local_b0 [2];
  undefined8 **local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined1 local_6c;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar6 = *(long *)(param_2 + 0x2158);
  *param_1 = 0;
  param_1[1] = 0;
  lVar7 = *(long *)(param_2 + 0x2150);
  param_1[2] = 0;
  if (lVar6 != lVar7) {
    lVar6 = 0;
    uVar8 = 0;
    do {
      lVar2 = lVar7 + lVar6;
      local_b0[0] = 1;
      if (*(char *)(lVar2 + 0x1f) < '\0') {
        uVar9 = *(ulong *)(lVar2 + 0x10);
        __src = *(undefined8 ****)(lVar2 + 8);
        if (uVar9 < 0x17) {
          local_98 = CONCAT17((char)uVar9,(undefined7)local_98);
          __dest = &local_a8;
        }
        else {
          if (0x7fffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar1 = (uVar9 | 0xf) + 1;
          __dest = (undefined8 ***)operator_new(uVar1);
          local_98 = uVar1 | 0x8000000000000000;
          local_a8 = __dest;
          uStack_a0 = uVar9;
        }
        if ((__dest <= __src) && (__src < (undefined8 ***)((long)__dest + uVar9 + 1))) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                     ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
        }
        memmove(__dest,__src,uVar9 + 1);
      }
      else {
        local_98 = *(ulong *)(lVar2 + 0x18);
        uStack_a0 = *(ulong *)(lVar2 + 0x10);
        local_a8 = *(undefined8 ***)(lVar2 + 8);
      }
      puVar3 = (undefined8 *)(lVar7 + lVar6);
      local_90 = *puVar3;
      uStack_88 = CONCAT31(uStack_88._1_3_,*(long *)(param_2 + 0x2168) != 0);
      uStack_7c = (undefined4)puVar3[5];
      uStack_78 = (undefined4)((ulong)puVar3[5] >> 0x20);
      uStack_84 = (undefined4)puVar3[4];
      uStack_80 = (undefined4)((ulong)puVar3[4] >> 0x20);
      uVar9 = puVar3[6];
      local_6c = 0;
      puVar4 = (undefined4 *)param_1[1];
      local_74 = (undefined4)uVar9;
      uStack_70 = (undefined4)(uVar9 >> 0x20);
      if (puVar4 < (undefined4 *)param_1[2]) {
        if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        *puVar4 = 1;
        *(ulong *)(puVar4 + 6) = local_98;
        *(ulong *)(puVar4 + 4) = uStack_a0;
        *(undefined8 ***)(puVar4 + 2) = local_a8;
        uStack_a0 = 0;
        local_98 = 0;
        local_a8 = (undefined8 ***)0x0;
        *(ulong *)(puVar4 + 10) = CONCAT44(uStack_84,uStack_88);
        *(undefined8 *)(puVar4 + 8) = local_90;
        *(ulong *)(puVar4 + 0xe) = CONCAT44(local_74,uStack_78);
        *(ulong *)(puVar4 + 0xc) = CONCAT44(uStack_7c,uStack_80);
        *(ulong *)((long)puVar4 + 0x3d) = uVar9 >> 8;
        param_1[1] = puVar4 + 0x12;
      }
      else {
        FUN_0046bae4(param_1,local_b0);
        if ((long)local_98 < 0) {
          operator_delete(local_a8);
        }
      }
      uVar8 = uVar8 + 1;
      lVar7 = *(long *)(param_2 + 0x2150);
      lVar6 = lVar6 + 0x40;
    } while (uVar8 < (ulong)(*(long *)(param_2 + 0x2158) - lVar7 >> 6));
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00469784  FUN_00469784 =====

void FUN_00469784(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_108 [208];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x2168);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
    FUN_00453338(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(*(long *)(param_1 + 8) + 0xe0),
                 *(undefined8 *)(param_1 + 0x2168));
    *(undefined8 *)(param_1 + 0x2168) = 0;
    FUN_0084951c(auStack_108);
    FUN_00469824(param_1 + 0x2170,auStack_108);
    FUN_0084966c(auStack_108);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar2 != (long *)0x0);
}


// ===== 00469824  FUN_00469824 =====

undefined4 * FUN_00469824(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  void *pvVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  void *pvVar7;
  
  *param_1 = *param_2;
  FUN_007b6c74(param_1 + 2,param_2 + 2);
  uVar4 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_2 + 0x1a) = 0;
  plVar2 = *(long **)(param_1 + 0x1a);
  *(undefined8 *)(param_1 + 0x1a) = uVar4;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  puVar6 = (undefined8 *)(param_1 + 0x1c);
  pvVar7 = (void *)*puVar6;
  if (pvVar7 != (void *)0x0) {
    pvVar3 = pvVar7;
    pvVar5 = *(void **)(param_1 + 0x1e);
    if (*(void **)(param_1 + 0x1e) != pvVar7) {
      do {
        pvVar3 = (void *)((long)pvVar5 + -0xa0);
        if (*(char *)((long)pvVar5 + -0x18) != '\0') {
          FUN_007b6d78((long)pvVar5 + -0x78);
        }
        pvVar5 = pvVar3;
      } while (pvVar3 != pvVar7);
      pvVar3 = (void *)*puVar6;
    }
    *(void **)(param_1 + 0x1e) = pvVar7;
    operator_delete(pvVar3);
    *puVar6 = 0;
    *(undefined8 *)(param_1 + 0x1e) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1c) = uVar4;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x1e) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  uVar1 = param_2[0x22];
  *(undefined8 *)(param_2 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 0x23);
  param_1[0x22] = uVar1;
  uVar4 = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_2 + 0x24) = 0;
  plVar2 = *(long **)(param_1 + 0x24);
  *(undefined8 *)(param_1 + 0x24) = uVar4;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  uVar4 = *(undefined8 *)(param_2 + 0x26);
  puVar6 = (undefined8 *)(param_1 + 0x2a);
  pvVar7 = (void *)*puVar6;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x26) = uVar4;
  if (pvVar7 != (void *)0x0) {
    pvVar5 = *(void **)(param_1 + 0x2c);
    pvVar3 = pvVar7;
    if (pvVar5 != pvVar7) {
      do {
        pvVar5 = (void *)((long)pvVar5 + -200);
        FUN_008492a8(pvVar5);
      } while (pvVar5 != pvVar7);
      pvVar3 = (void *)*puVar6;
    }
    *(void **)(param_1 + 0x2c) = pvVar7;
    operator_delete(pvVar3);
    *puVar6 = 0;
    *(undefined8 *)(param_1 + 0x2c) = 0;
    *(undefined8 *)(param_1 + 0x2e) = 0;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x2a);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x2a) = uVar4;
  *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_2 + 0x2e);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x2e) = 0;
  *(undefined8 *)(param_2 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  return param_1;
}


// ===== 00469998  FUN_00469998 =====

undefined4 FUN_00469998(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if (param_1 != 100) {
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 004699a8  FUN_004699a8 =====

void FUN_004699a8(long param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  undefined1 auStack_108 [208];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  plVar11 = *(long **)(param_1 + 0x2168);
  if (plVar11 != (long *)0x0) {
    lVar9 = *(long *)(param_1 + 0x2150);
    uVar7 = *(long *)(param_1 + 0x2158) - lVar9 >> 6;
    if (uVar7 != (*(long *)(param_1 + 0x2220) - *(long *)(param_1 + 0x2218) >> 3) *
                 -0x70a3d70a3d70a3d7) {
                    /* WARNING: Subroutine does not return */
      FUN_004d7934("../../discord_native_lib/src/media/local_user.cpp",0x8d0,
                   "videoStreams_.size() == encoderConfig_.simulcast_layers.size()",&DAT_001f6647);
    }
    if (*(long *)(param_1 + 0x2158) != lVar9) {
      piVar10 = (int *)(lVar9 + 0x2c);
      lVar9 = *(long *)(param_1 + 0x2218) + 0x52;
      cVar1 = *(char *)(param_1 + 0x2149);
      bVar4 = *(char *)(param_1 + 0x1e19) != '\0';
      cVar2 = *(char *)(param_1 + 0x1e14);
      bVar5 = *(int *)(param_1 + 0x1e10) != 0;
      uVar8 = uVar7;
      if (uVar7 < 2) {
        uVar8 = 1;
      }
      do {
        if (cVar2 == '\0') {
LAB_00469a80:
          bVar6 = (char)piVar10[3] != '\0';
        }
        else {
          if (bVar5 && bVar4) {
            if (*(char *)(param_1 + 0x1e18) != '\0') goto LAB_00469a6c;
            goto LAB_00469a80;
          }
          if (!bVar5 || bVar4) goto LAB_00469a80;
LAB_00469a6c:
          bVar6 = true;
          if ((cVar1 != '\0') && (*piVar10 != 100)) goto LAB_00469a80;
        }
        if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x587,
                     "__n < size()","vector[] index out of bounds");
        }
        uVar7 = uVar7 - 1;
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 0x10;
        *(bool *)lVar9 = bVar6;
        lVar9 = lVar9 + 200;
      } while (uVar8 != 0);
    }
    FUN_00849b38(auStack_108,param_1 + 0x2170);
    (**(code **)(*plVar11 + 0x30))(plVar11,auStack_108);
    FUN_0084966c(auStack_108);
    (**(code **)**(undefined8 **)(param_1 + 0x2168))();
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00469b50  FUN_00469b50 =====

void FUN_00469b50(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 local_80;
  undefined8 local_78;
  void *local_70;
  void *local_68;
  undefined8 local_60;
  ulong local_58;
  char local_50;
  ulong local_48;
  char local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_004677a4(&local_58);
  if (local_50 == '\0') {
    local_70 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
    plVar3 = *(long **)(param_1 + 0x2248);
    goto joined_r0x00469c98;
  }
  lVar1 = *param_2;
  uVar5 = (param_2[1] - lVar1 >> 3) * -0x70a3d70a3d70a3d7;
  if (local_40 == '\0') goto LAB_00469c14;
  if ((uVar5 < local_58 || uVar5 - local_58 == 0) || (uVar5 < local_48 || uVar5 - local_48 == 0))
  goto LAB_00469ca0;
  if (*(long *)(lVar1 + local_58 * 200) == *(long *)(lVar1 + local_48 * 200)) {
    local_70 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
    if (*(long *)(lVar1 + local_58 * 200 + 8) != *(long *)(lVar1 + local_48 * 200 + 8))
    goto LAB_00469c14;
  }
  else {
LAB_00469c14:
    local_60 = 0;
    local_68 = (void *)0x0;
    local_70 = (void *)0x0;
    if (uVar5 < local_58 || uVar5 - local_58 == 0) {
LAB_00469ca0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x591,
                 "__n < size()","vector[] index out of bounds");
    }
    puVar4 = (undefined8 *)(lVar1 + local_58 * 200);
    local_80 = *puVar4;
    local_78 = puVar4[1];
    FUN_00469ccc(&local_70,&local_80);
  }
  plVar3 = *(long **)(param_1 + 0x2248);
joined_r0x00469c98:
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x80))(plVar3,&local_70);
  }
  if (local_70 != (void *)0x0) {
    local_68 = local_70;
    operator_delete(local_70);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00469ccc  FUN_00469ccc =====

void FUN_00469ccc(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 < (undefined8 *)param_1[2]) {
    if (puVar8 == (undefined8 *)0x0) {
LAB_00469dd4:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
    uVar11 = *param_2;
    puVar8[1] = param_2[1];
    *puVar8 = uVar11;
    param_1[1] = (ulong)(puVar8 + 2);
  }
  else {
    puVar9 = (undefined8 *)*param_1;
    lVar10 = (long)puVar8 - (long)puVar9 >> 4;
    uVar1 = lVar10 + 1;
    if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar6 = (long)param_1[2] - (long)puVar9;
    uVar7 = uVar6 >> 3;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffef < uVar6) {
      uVar7 = 0xfffffffffffffff;
    }
    if (uVar7 == 0) goto LAB_00469dd4;
    if (uVar7 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    pvVar5 = operator_new(uVar7 * 0x10);
    puVar2 = (undefined8 *)((long)pvVar5 + lVar10 * 0x10);
    uVar11 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar11;
    puVar3 = puVar8;
    puVar4 = puVar2;
    for (; puVar8 != puVar9; puVar8 = puVar8 + -2) {
      uVar11 = puVar8[-2];
      puVar4[-1] = puVar8[-1];
      puVar4[-2] = uVar11;
      puVar3 = puVar9;
      puVar4 = puVar4 + -2;
    }
    *param_1 = (ulong)puVar4;
    param_1[1] = (ulong)(puVar2 + 2);
    param_1[2] = (ulong)((long)pvVar5 + uVar7 * 0x10);
    if (puVar3 != (undefined8 *)0x0) {
      operator_delete(puVar3);
      return;
    }
  }
  return;
}


// ===== 00469e04  FUN_00469e04 =====

void FUN_00469e04(long param_1,int param_2,byte param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  undefined1 auStack_88 [8];
  char *local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  piVar7 = *(int **)(param_1 + 0x2150);
  piVar6 = *(int **)(param_1 + 0x2158);
  if (piVar7 != piVar6) {
    bVar1 = param_3 & 1;
    do {
      if (*piVar7 == param_2) {
        if (*(byte *)(piVar7 + 0xe) == bVar1) break;
        uVar3 = FUN_00417e08();
        if ((uVar3 & 1) == 0) {
          local_80 = "../../discord_native_lib/src/media/local_user.cpp";
          uStack_78 = 0x47b9;
          local_70 = auStack_88;
          FUN_00623bb0(&DAT_001f6676,"../../discord_native_lib/src/media/local_user.cpp",0x47b9,
                       "Video receivers for ssrc: ",param_2,&DAT_001c4dc3,(char)piVar7[0xe],
                       &DAT_00199e3f,bVar1,"Video receivers for ssrc: ",&local_80);
        }
        *(byte *)(piVar7 + 0xe) = bVar1;
        if ((param_3 & 1) == 0) {
          if (*(char *)(param_1 + 0x1e14) == '\0') {
LAB_00469f7c:
            if (*(long **)(param_1 + 0x2168) != (long *)0x0) {
              lVar4 = *(long *)(param_1 + 0x2150);
              lVar5 = *(long *)(param_1 + 0x2158);
              if (lVar4 == lVar5) {
LAB_00469fac:
                if (lVar4 != lVar5) goto LAB_00469e78;
              }
              else {
                do {
                  if (*(char *)(lVar4 + 0x38) != '\0') goto LAB_00469fac;
                  lVar4 = lVar4 + 0x40;
                } while (lVar4 != lVar5);
              }
              (**(code **)(**(long **)(param_1 + 0x2168) + 8))();
            }
          }
          else if ((*(char *)(param_1 + 0x1e19) == '\0') || (*(int *)(param_1 + 0x1e10) == 0)) {
            if ((*(char *)(param_1 + 0x1e19) != '\0') || (*(int *)(param_1 + 0x1e10) == 0))
            goto LAB_00469f7c;
          }
          else if (*(char *)(param_1 + 0x1e18) == '\0') goto LAB_00469f7c;
LAB_00469e78:
          FUN_004699a8(param_1);
        }
        else {
          if ((*(char *)(param_1 + 0x2148) != '\0') && (*(long *)(param_1 + 0x2248) != 0)) {
            FUN_004681f0(param_1);
          }
          lVar4 = FUN_005183d8();
          if (*(char *)(param_1 + 0x2288) == '\0') {
            *(undefined1 *)(param_1 + 0x2288) = 1;
          }
          *(long *)(param_1 + 0x2280) = lVar4 / 1000000;
        }
      }
      piVar7 = piVar7 + 0x10;
    } while (piVar7 != piVar6);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00469fec  FUN_00469fec =====

uint FUN_00469fec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  auVar8 = FUN_0044127c(*(undefined8 *)(param_1 + 8));
  plVar5 = auVar8._8_8_;
  uVar7 = auVar8._0_8_;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  if (uVar7 != 0) {
    auVar8 = FUN_0044127c(*(undefined8 *)(param_1 + 8));
    plVar5 = auVar8._8_8_;
    uVar4 = (**(code **)(*auVar8._0_8_ + 0x10))();
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN_005466cc(plVar5);
      }
    }
    uVar7 = (ulong)(uVar4 & 1);
  }
  uVar4 = (**(code **)(**(long **)(param_1 + 0x1d58) + 0x10))();
  return (uint)uVar7 | uVar4 & 1;
}


// ===== 0046a0cc  FUN_0046a0cc =====

void FUN_0046a0cc(long param_1)

{
  FUN_00469fec(param_1 + -0x1d50);
  return;
}


// ===== 0046a0d8  FUN_0046a0d8 =====

void FUN_0046a0d8(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = FUN_005183d8();
  plVar1 = (long *)(param_1 + 0x1d88);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      break;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_0043a900(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4,param_5);
  return;
}


// ===== 0046a14c  FUN_0046a14c =====

void FUN_0046a14c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = FUN_005183d8();
  plVar1 = (long *)(param_1 + 0x38);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      break;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_0043a900(*(undefined8 *)(param_1 + -0x1d48),param_2,param_3,param_4,param_5);
  return;
}


// ===== 0046a1c0  FUN_0046a1c0 =====

void FUN_0046a1c0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = FUN_005183d8();
  plVar1 = (long *)(param_1 + 0x1d90);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      return;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


// ===== 0046a200  FUN_0046a200 =====

void FUN_0046a200(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = FUN_005183d8();
  plVar1 = (long *)(param_1 + 0x50);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      return;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


// ===== 0046a23c  FUN_0046a23c =====

void FUN_0046a23c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  char *local_68;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004df134(param_1,7);
  FUN_004df230(auStack_60,*param_3);
  local_68 = "headerBytes";
  uVar2 = FUN_004e148c(param_1,&local_68);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df230(auStack_60,param_3[1]);
  local_68 = "payloadBytes";
  uVar2 = FUN_004e148c(param_1,&local_68);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df230(auStack_60,param_3[2]);
  local_68 = "paddingBytes";
  uVar2 = FUN_004e148c(param_1,&local_68);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df230(auStack_60,param_3[3]);
  local_68 = "packets";
  uVar2 = FUN_004e148c(param_1,&local_68);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0046a368  FUN_0046a368 =====

void FUN_0046a368(long param_1,long param_2)

{
  long lVar1;
  
  if ((*(char *)(param_1 + 0x120) == '\0') && (param_2 != 0)) {
    lVar1 = FUN_005183d8();
    if (*(char *)(param_1 + 0x120) == '\0') {
      *(undefined1 *)(param_1 + 0x120) = 1;
    }
    *(long *)(param_1 + 0x118) = lVar1 / 1000000;
  }
  FUN_0045f5d0(*(undefined8 *)(param_1 + 0x1f30),param_2);
  return;
}


// ===== 0046a3d0  FUN_0046a3d0 =====

void FUN_0046a3d0(long param_1)

{
  FUN_0045f5e0(*(undefined8 *)(param_1 + 0x1f30));
  return;
}


// ===== 0046a3d8  FUN_0046a3d8 =====

void FUN_0046a3d8(long param_1)

{
  FUN_0045f600(*(undefined8 *)(param_1 + 0x1f30));
  return;
}


// ===== 0046a3e0  FUN_0046a3e0 =====

/* WARNING: Removing unreachable block (ram,0x0046a454) */

void FUN_0046a3e0(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  void *local_50;
  void *local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x2168);
  if (plVar2 != (long *)0x0) {
    local_48 = (void *)0x0;
    uStack_40 = 0;
    local_50 = (void *)0x0;
    (**(code **)(*plVar2 + 0x58))(plVar2,&local_50);
    if (local_50 != (void *)0x0) {
      for (; local_48 != local_50; local_48 = (void *)((long)local_48 + -0x18)) {
      }
      local_48 = local_50;
      operator_delete(local_50);
    }
    uVar3 = FUN_00417e08();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/local_user.cpp",0x5b61,
                   "LocalUser: requested a key frame");
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0046a4bc  FUN_0046a4bc =====

void FUN_0046a4bc(void)

{
  return;
}


// ===== 0046a4c0  FUN_0046a4c0 =====

void FUN_0046a4c0(void)

{
  return;
}


// ===== 0046a4c4  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0046a4c8  FUN_0046a4c8 =====

void FUN_0046a4c8(void)

{
  return;
}


// ===== 0046a4cc  FUN_0046a4cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046a4cc(undefined8 param_1,undefined8 param_2,ushort *param_3)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 local_80;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  long lStack_60;
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  ulong uStack_40;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  uVar7 = (ulong)param_3[1];
  iVar4 = (uint)param_3[1] - (uint)*param_3;
  if (iVar4 == 0) goto LAB_0046a654;
  uVar2 = iVar4 + 1;
  local_80 = param_2;
  if (uVar2 == 0) {
    uStack_70 = 0x20;
    local_78 = 0x20;
    lStack_60 = 1;
    local_68 = 1;
    uStack_50 = _UNK_001f4488;
    local_58 = _DAT_001f4480;
    uStack_40 = _UNK_001f4ca8;
    local_48 = _DAT_001f4ca0;
    uVar7 = FUN_0046a67c(&local_80);
    goto LAB_0046a654;
  }
  lVar3 = 0x1f;
  if ((uVar2 << (ulong)((uint)LZCOUNT(uVar2) & 0x1f) & 0x7fffffff) != 0) {
    lVar3 = 0x20;
  }
  local_78 = lVar3 - LZCOUNT(uVar2);
  local_68 = local_78 >> 5;
  if ((local_78 & 0x1f) != 0) {
    local_68 = local_68 + 1;
  }
  uStack_70 = 0;
  if (local_68 != 0) {
    uStack_70 = local_78 / local_68;
  }
  local_58 = -1L << (uStack_70 & 0x3f) & 0x100000000;
  if (0x3f < uStack_70) {
    local_58 = 0;
  }
  uVar7 = 0;
  if (local_68 != 0) {
    uVar7 = local_58 / local_68;
  }
  if (uVar7 < (local_58 ^ 0x100000000)) {
    local_68 = local_68 + 1;
    uStack_70 = 0;
    if (local_68 != 0) {
      uStack_70 = local_78 / local_68;
    }
    if (uStack_70 < 0x40) {
      local_58 = -1L << (uStack_70 & 0x3f) & 0x100000000;
      goto LAB_0046a584;
    }
    bVar1 = false;
    local_58 = 0;
    lStack_60 = local_68 + (uStack_70 * local_68 - local_78);
    uStack_50 = 0;
  }
  else {
LAB_0046a584:
    uVar7 = 0;
    if (local_68 != 0) {
      uVar7 = local_78 / local_68;
    }
    bVar1 = uStack_70 < 0x3f;
    lStack_60 = local_68 + (uVar7 * local_68 - local_78);
    uStack_50 = 0;
    if (uStack_70 < 0x3f) {
      uStack_50 = -2L << (uStack_70 & 0x3f) & 0x100000000;
    }
  }
  local_48 = 0;
  if (uStack_70 != 0) {
    local_48 = 0xffffffffffffffff >> (-uStack_70 & 0x3f);
  }
  uStack_40 = 0xffffffffffffffff >> (~uStack_70 & 0x3f);
  if (!bVar1) {
    uStack_40 = 0xffffffffffffffff;
  }
  do {
    uVar6 = FUN_0046a67c(&local_80);
  } while (uVar2 <= uVar6);
  uVar7 = (ulong)(*param_3 + uVar6);
LAB_0046a654:
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


// ===== 0046a67c  FUN_0046a67c =====

int FUN_0046a67c(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_1[4] == 0) {
    uVar2 = 0;
    iVar4 = 0;
  }
  else {
    lVar6 = *param_1;
    iVar4 = 0;
    uVar5 = 0;
    uVar7 = *(ulong *)(lVar6 + 0x1380);
    do {
      do {
        uVar2 = uVar7 + 0x18d;
        lVar3 = uVar7 * 8;
        uVar7 = (uVar7 + 1) % 0x270;
        uVar1 = *(ulong *)(lVar6 + uVar7 * 8);
        *(ulong *)(lVar6 + lVar3) =
             *(ulong *)(lVar6 + (uVar2 % 0x270) * 8) ^
             (uVar1 & 0x7ffffffe | *(ulong *)(lVar6 + lVar3) & 0xffffffff80000000) >> 1 ^
             -(uVar1 & 1) & 0x9908b0df;
        uVar2 = param_1[5];
        uVar1 = *(ulong *)(lVar6 + *(long *)(lVar6 + 0x1380) * 8);
        *(ulong *)(lVar6 + 0x1380) = uVar7;
        uVar1 = uVar1 >> 0xb & 0xffffffff ^ uVar1;
        uVar1 = ((uint)uVar1 & 0x13a58ad) << 7 ^ uVar1;
        uVar1 = (ulong)(uint)((int)uVar1 << 0xf) & 0xefc60000 ^ uVar1;
        uVar1 = uVar1 ^ uVar1 >> 0x12;
      } while (uVar2 <= uVar1);
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 << (ulong)((uint)param_1[2] & 0x1f);
      uVar2 = param_1[4];
      if (0x1f < (ulong)param_1[2]) {
        iVar4 = 0;
      }
      iVar4 = iVar4 + (*(uint *)(param_1 + 7) & (uint)uVar1);
    } while (uVar5 < uVar2);
  }
  if (uVar2 < (ulong)param_1[3]) {
    lVar6 = *param_1;
    uVar5 = *(ulong *)(lVar6 + 0x1380);
    do {
      do {
        uVar7 = uVar5 + 0x18d;
        lVar3 = uVar5 * 8;
        uVar5 = (uVar5 + 1) % 0x270;
        uVar1 = *(ulong *)(lVar6 + uVar5 * 8);
        *(ulong *)(lVar6 + lVar3) =
             *(ulong *)(lVar6 + (uVar7 % 0x270) * 8) ^
             (uVar1 & 0x7ffffffe | *(ulong *)(lVar6 + lVar3) & 0xffffffff80000000) >> 1 ^
             -(uVar1 & 1) & 0x9908b0df;
        uVar7 = *(ulong *)(lVar6 + *(long *)(lVar6 + 0x1380) * 8);
        *(ulong *)(lVar6 + 0x1380) = uVar5;
        uVar7 = uVar7 >> 0xb & 0xffffffff ^ uVar7;
        uVar7 = ((uint)uVar7 & 0x13a58ad) << 7 ^ uVar7;
        uVar7 = (ulong)(uint)((int)uVar7 << 0xf) & 0xefc60000 ^ uVar7;
        uVar7 = uVar7 ^ uVar7 >> 0x12;
      } while ((ulong)param_1[6] <= uVar7);
      uVar2 = uVar2 + 1;
      iVar4 = iVar4 << (ulong)((int)param_1[2] + 1U & 0x1f);
      if (0x1e < (ulong)param_1[2]) {
        iVar4 = 0;
      }
      iVar4 = iVar4 + (*(uint *)(param_1 + 8) & (uint)uVar7);
    } while (uVar2 < (ulong)param_1[3]);
  }
  return iVar4;
}


// ===== 0046a880  FUN_0046a880 =====

/* WARNING: Removing unreachable block (ram,0x0046a9e8) */

void FUN_0046a880(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar8;
  
  lVar9 = param_1[1] - *param_1 >> 6;
  uVar1 = lVar9 + 1;
  if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = uVar4 >> 5;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7fffffffffffffbf < uVar4) {
    uVar5 = 0x3ffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    pvVar3 = operator_new(uVar5 << 6);
  }
  puVar2 = (undefined8 *)((long)pvVar3 + lVar9 * 0x40);
  pvVar3 = (void *)((long)pvVar3 + uVar5 * 0x40);
  FUN_0046aa28(puVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  puVar6 = (undefined8 *)*param_1;
  puVar7 = (undefined8 *)param_1[1];
  puVar10 = puVar2;
  if (puVar7 == puVar6) {
    *param_1 = (long)puVar2;
    param_1[1] = (long)(puVar2 + 8);
    param_1[2] = (long)pvVar3;
  }
  else {
    do {
      puVar8 = puVar7 + -8;
      puVar11 = puVar10 + -8;
      *puVar11 = *puVar8;
      uVar13 = puVar7[-6];
      uVar12 = puVar7[-7];
      puVar10[-5] = puVar7[-5];
      puVar10[-6] = uVar13;
      puVar10[-7] = uVar12;
      uVar12 = *(undefined8 *)((long)puVar7 + -0x17);
      puVar7[-6] = 0;
      puVar7[-5] = 0;
      uVar14 = puVar7[-3];
      uVar13 = puVar7[-4];
      puVar7[-7] = 0;
      *(undefined8 *)((long)puVar10 + -0xf) = *(undefined8 *)((long)puVar7 + -0xf);
      *(undefined8 *)((long)puVar10 + -0x17) = uVar12;
      puVar10[-3] = uVar14;
      puVar10[-4] = uVar13;
      puVar7 = puVar8;
      puVar10 = puVar11;
    } while (puVar8 != puVar6);
    puVar7 = (undefined8 *)*param_1;
    puVar6 = (undefined8 *)param_1[1];
    *param_1 = (long)puVar11;
    param_1[1] = (long)(puVar2 + 8);
    param_1[2] = (long)pvVar3;
    for (; puVar6 != puVar7; puVar6 = puVar6 + -8) {
    }
  }
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar7);
  return;
}


// ===== 0046aa28  FUN_0046aa28 =====

undefined4 *
FUN_0046aa28(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4,
            undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
            undefined4 *param_9,undefined4 *param_10)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *__dest;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  uVar3 = *param_3;
  uVar4 = *param_5;
  uVar5 = *param_6;
  uVar6 = *param_7;
  uVar7 = *param_8;
  uVar8 = *param_9;
  uVar9 = *param_10;
  __dest = (undefined8 *)(param_1 + 2);
  *param_1 = *param_2;
  param_1[1] = uVar3;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    __src = (undefined8 *)*param_4;
    uVar2 = param_4[1];
    if (uVar2 < 0x17) {
      *(char *)((long)param_1 + 0x1f) = (char)uVar2;
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 *)operator_new(uVar1);
      *(undefined8 **)(param_1 + 2) = __dest;
      *(ulong *)(param_1 + 4) = uVar2;
      *(ulong *)(param_1 + 6) = uVar1 | 0x8000000000000000;
    }
    if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uVar11 = param_4[1];
    uVar10 = *param_4;
    *(undefined8 *)(param_1 + 6) = param_4[2];
    *(undefined8 *)(param_1 + 4) = uVar11;
    *__dest = uVar10;
  }
  param_1[8] = uVar4;
  param_1[9] = uVar5;
  param_1[10] = uVar6;
  param_1[0xb] = uVar7;
  param_1[0xc] = uVar8;
  param_1[0xd] = uVar9;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return param_1;
}


// ===== 0046ab70  FUN_0046ab70 =====

/* WARNING: Removing unreachable block (ram,0x0046acd8) */

void FUN_0046ab70(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar8;
  
  lVar9 = param_1[1] - *param_1 >> 6;
  uVar1 = lVar9 + 1;
  if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = uVar4 >> 5;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7fffffffffffffbf < uVar4) {
    uVar5 = 0x3ffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    pvVar3 = operator_new(uVar5 << 6);
  }
  puVar2 = (undefined8 *)((long)pvVar3 + lVar9 * 0x40);
  pvVar3 = (void *)((long)pvVar3 + uVar5 * 0x40);
  FUN_0046ad18(puVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  puVar6 = (undefined8 *)*param_1;
  puVar7 = (undefined8 *)param_1[1];
  puVar10 = puVar2;
  if (puVar7 == puVar6) {
    *param_1 = (long)puVar2;
    param_1[1] = (long)(puVar2 + 8);
    param_1[2] = (long)pvVar3;
  }
  else {
    do {
      puVar8 = puVar7 + -8;
      puVar11 = puVar10 + -8;
      *puVar11 = *puVar8;
      uVar13 = puVar7[-6];
      uVar12 = puVar7[-7];
      puVar10[-5] = puVar7[-5];
      puVar10[-6] = uVar13;
      puVar10[-7] = uVar12;
      uVar12 = *(undefined8 *)((long)puVar7 + -0x17);
      puVar7[-6] = 0;
      puVar7[-5] = 0;
      uVar14 = puVar7[-3];
      uVar13 = puVar7[-4];
      puVar7[-7] = 0;
      *(undefined8 *)((long)puVar10 + -0xf) = *(undefined8 *)((long)puVar7 + -0xf);
      *(undefined8 *)((long)puVar10 + -0x17) = uVar12;
      puVar10[-3] = uVar14;
      puVar10[-4] = uVar13;
      puVar7 = puVar8;
      puVar10 = puVar11;
    } while (puVar8 != puVar6);
    puVar7 = (undefined8 *)*param_1;
    puVar6 = (undefined8 *)param_1[1];
    *param_1 = (long)puVar11;
    param_1[1] = (long)(puVar2 + 8);
    param_1[2] = (long)pvVar3;
    for (; puVar6 != puVar7; puVar6 = puVar6 + -8) {
    }
  }
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar7);
  return;
}


// ===== 0046ad18  FUN_0046ad18 =====

undefined4 *
FUN_0046ad18(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,char ****param_4,
            undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
            undefined4 *param_9,undefined4 *param_10)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  char ***__src;
  size_t sVar12;
  char ****ppppcVar13;
  char ***local_80;
  size_t sStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar11 = tpidr_el0;
  local_68 = *(long *)(lVar11 + 0x28);
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  uVar3 = *param_2;
  uVar4 = *param_3;
  sVar12 = strlen((char *)param_4);
  if (0x7fffffffffffffef < sVar12) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (sVar12 < 0x17) {
    ppppcVar13 = &local_80;
    local_70 = CONCAT17((char)sVar12,(undefined7)local_70);
  }
  else {
    uVar1 = (sVar12 | 0xf) + 1;
    ppppcVar13 = (char ****)operator_new(uVar1);
    local_70 = uVar1 | 0x8000000000000000;
    local_80 = (char ***)ppppcVar13;
    sStack_78 = sVar12;
  }
  if ((ppppcVar13 <= param_4) && (param_4 < (char ****)((long)ppppcVar13 + sVar12))) {
LAB_0046aee8:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  if (sVar12 != 0) {
    memcpy(ppppcVar13,param_4,sVar12);
  }
  *(undefined1 *)((long)ppppcVar13 + sVar12) = 0;
  uVar1 = local_70;
  sVar12 = sStack_78;
  __src = local_80;
  uVar5 = *param_5;
  uVar6 = *param_6;
  ppppcVar13 = (char ****)(param_1 + 2);
  uVar7 = *param_7;
  uVar8 = *param_8;
  uVar9 = *param_9;
  uVar10 = *param_10;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  if ((long)local_70 < 0) {
    if (sStack_78 < 0x17) {
      *(char *)((long)param_1 + 0x1f) = (char)sStack_78;
    }
    else {
      if (0x7fffffffffffffef < sStack_78) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar2 = (sStack_78 | 0xf) + 1;
      ppppcVar13 = (char ****)operator_new(uVar2);
      *(char *****)(param_1 + 2) = ppppcVar13;
      *(size_t *)(param_1 + 4) = sVar12;
      *(ulong *)(param_1 + 6) = uVar2 | 0x8000000000000000;
    }
    sVar12 = sVar12 + 1;
    if ((ppppcVar13 <= __src) && (__src < (char ****)((long)ppppcVar13 + sVar12)))
    goto LAB_0046aee8;
    memmove(ppppcVar13,__src,sVar12);
  }
  else {
    *(size_t *)(param_1 + 4) = sStack_78;
    *ppppcVar13 = local_80;
    *(ulong *)(param_1 + 6) = local_70;
  }
  param_1[8] = uVar5;
  param_1[9] = uVar6;
  param_1[10] = uVar7;
  param_1[0xb] = uVar8;
  param_1[0xc] = uVar9;
  param_1[0xd] = uVar10;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if ((long)uVar1 < 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar11 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0046af44  FUN_0046af44 =====

void FUN_0046af44(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0046af54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*param_1);
  return;
}


// ===== 0046af58  FUN_0046af58 =====

void FUN_0046af58(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined4 *puVar8;
  void *pvVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined4 *puVar15;
  
  puVar11 = (undefined8 *)(param_1 + 2);
  *param_1 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    puVar10 = *(undefined8 **)(param_2 + 2);
    uVar12 = *(ulong *)(param_2 + 4);
    if (uVar12 < 0x17) {
      *(char *)((long)param_1 + 0x1f) = (char)uVar12;
    }
    else {
      if (0x7fffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar17 = (uVar12 | 0xf) + 1;
      puVar11 = (undefined8 *)operator_new(uVar17);
      *(undefined8 **)(param_1 + 2) = puVar11;
      *(ulong *)(param_1 + 4) = uVar12;
      *(ulong *)(param_1 + 6) = uVar17 | 0x8000000000000000;
    }
    if ((puVar11 <= puVar10) && (puVar10 < (undefined8 *)((long)puVar11 + uVar12 + 1)))
    goto LAB_0046b2f8;
    memmove(puVar11,puVar10,uVar12 + 1);
  }
  else {
    uVar20 = *(undefined8 *)(param_2 + 4);
    uVar19 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar20;
    *puVar11 = uVar19;
  }
  puVar11 = (undefined8 *)(param_1 + 8);
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    puVar10 = *(undefined8 **)(param_2 + 8);
    uVar12 = *(ulong *)(param_2 + 10);
    if (uVar12 < 0x17) {
      *(char *)((long)param_1 + 0x37) = (char)uVar12;
    }
    else {
      if (0x7fffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar17 = (uVar12 | 0xf) + 1;
      puVar11 = (undefined8 *)operator_new(uVar17);
      *(undefined8 **)(param_1 + 8) = puVar11;
      *(ulong *)(param_1 + 10) = uVar12;
      *(ulong *)(param_1 + 0xc) = uVar17 | 0x8000000000000000;
    }
    if ((puVar11 <= puVar10) && (puVar10 < (undefined8 *)((long)puVar11 + uVar12 + 1)))
    goto LAB_0046b2f8;
    memmove(puVar11,puVar10,uVar12 + 1);
  }
  else {
    uVar20 = *(undefined8 *)(param_2 + 10);
    uVar19 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 10) = uVar20;
    *puVar11 = uVar19;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  uVar12 = *(long *)(param_2 + 0x10) - *(long *)(param_2 + 0xe);
  if (uVar12 != 0) {
    if ((long)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar8 = (undefined4 *)operator_new(uVar12);
    *(undefined4 **)(param_1 + 0xe) = puVar8;
    *(undefined4 **)(param_1 + 0x10) = puVar8;
    *(undefined4 **)(param_1 + 0x12) = puVar8 + ((long)uVar12 >> 2);
    puVar15 = *(undefined4 **)(param_2 + 0xe);
    puVar4 = *(undefined4 **)(param_2 + 0x10);
    puVar13 = puVar8;
    if (puVar15 != puVar4) {
      uVar12 = (long)puVar4 + (-4 - (long)puVar15);
      puVar14 = puVar15;
      if ((0x1b < uVar12) && (0x1f < (ulong)((long)puVar8 - (long)puVar15))) {
        puVar11 = (undefined8 *)(puVar8 + 4);
        uVar12 = (uVar12 >> 2) + 1;
        uVar16 = uVar12 & 0x7ffffffffffffff8;
        puVar8 = puVar8 + uVar16;
        puVar14 = puVar15 + uVar16;
        puVar10 = (undefined8 *)(puVar15 + 4);
        uVar17 = uVar16;
        do {
          puVar3 = puVar10 + -1;
          uVar19 = puVar10[-2];
          uVar21 = puVar10[1];
          uVar20 = *puVar10;
          puVar10 = puVar10 + 4;
          uVar17 = uVar17 - 8;
          puVar11[-1] = *puVar3;
          puVar11[-2] = uVar19;
          puVar11[1] = uVar21;
          *puVar11 = uVar20;
          puVar11 = puVar11 + 4;
        } while (uVar17 != 0);
        puVar13 = puVar8;
        if (uVar12 == uVar16) goto LAB_0046b144;
      }
      do {
        puVar15 = puVar14 + 1;
        puVar13 = puVar8 + 1;
        *puVar8 = *puVar14;
        puVar8 = puVar13;
        puVar14 = puVar15;
      } while (puVar15 != puVar4);
    }
LAB_0046b144:
    *(undefined4 **)(param_1 + 0x10) = puVar13;
  }
  uVar7 = *(undefined1 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  lVar2 = *(long *)(param_2 + 0x16);
  lVar5 = *(long *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x14) = uVar7;
  uVar12 = lVar5 - lVar2;
  if (uVar12 != 0) {
    if ((long)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar9 = operator_new(uVar12);
    *(void **)(param_1 + 0x16) = pvVar9;
    *(void **)(param_1 + 0x18) = pvVar9;
    *(void **)(param_1 + 0x1a) = (void *)((long)pvVar9 + ((long)uVar12 >> 5) * 0x20);
    lVar2 = *(long *)(param_2 + 0x16);
    lVar5 = *(long *)(param_2 + 0x18);
    if (lVar2 != lVar5) {
      lVar18 = 0;
      do {
        puVar11 = (undefined8 *)(lVar2 + lVar18);
        puVar10 = (undefined8 *)((long)pvVar9 + lVar18);
        if (*(char *)((long)puVar11 + 0x17) < '\0') {
          puVar3 = (undefined8 *)*puVar11;
          uVar12 = puVar11[1];
          if (uVar12 < 0x17) {
            *(char *)((long)pvVar9 + lVar18 + 0x17) = (char)uVar12;
          }
          else {
            if (0x7fffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar17 = (uVar12 | 0xf) + 1;
            puVar10 = (undefined8 *)operator_new(uVar17);
            puVar11 = (undefined8 *)((long)pvVar9 + lVar18);
            puVar11[1] = uVar12;
            puVar11[2] = uVar17 | 0x8000000000000000;
            *puVar11 = puVar10;
          }
          if ((puVar10 <= puVar3) && (puVar3 < (undefined8 *)((long)puVar10 + uVar12 + 1)))
          goto LAB_0046b2f8;
          memmove(puVar10,puVar3,uVar12 + 1);
        }
        else {
          uVar20 = puVar11[1];
          uVar19 = *puVar11;
          puVar10[2] = puVar11[2];
          puVar10[1] = uVar20;
          *puVar10 = uVar19;
        }
        lVar1 = lVar18 + 0x20;
        uVar6 = *(undefined4 *)(lVar2 + lVar18 + 0x18);
        *(undefined1 *)((long)pvVar9 + lVar18 + 0x1c) = *(undefined1 *)(lVar2 + lVar18 + 0x1c);
        *(undefined4 *)((long)pvVar9 + lVar18 + 0x18) = uVar6;
        lVar18 = lVar1;
      } while (lVar2 + lVar1 != lVar5);
      pvVar9 = (void *)((long)pvVar9 + lVar1);
    }
    *(void **)(param_1 + 0x18) = pvVar9;
  }
  puVar11 = (undefined8 *)(param_1 + 0x1c);
  if (*(char *)((long)param_2 + 0x87) < '\0') {
    puVar10 = *(undefined8 **)(param_2 + 0x1c);
    uVar12 = *(ulong *)(param_2 + 0x1e);
    if (uVar12 < 0x17) {
      *(char *)((long)param_1 + 0x87) = (char)uVar12;
    }
    else {
      if (0x7fffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar17 = (uVar12 | 0xf) + 1;
      puVar11 = (undefined8 *)operator_new(uVar17);
      *(undefined8 **)(param_1 + 0x1c) = puVar11;
      *(ulong *)(param_1 + 0x1e) = uVar12;
      *(ulong *)(param_1 + 0x20) = uVar17 | 0x8000000000000000;
    }
    if ((puVar11 <= puVar10) && (puVar10 < (undefined8 *)((long)puVar11 + uVar12 + 1))) {
LAB_0046b2f8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(puVar11,puVar10,uVar12 + 1);
  }
  else {
    uVar20 = *(undefined8 *)(param_2 + 0x1e);
    uVar19 = *(undefined8 *)(param_2 + 0x1c);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x1e) = uVar20;
    *puVar11 = uVar19;
  }
  param_1[0x22] = param_2[0x22];
  return;
}


// ===== 0046b338  FUN_0046b338 =====

undefined8 * FUN_0046b338(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 *__dest;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src = (undefined8 *)*param_2;
    uVar2 = param_2[1];
    if (uVar2 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar2;
      __dest = param_1;
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 *)operator_new(uVar1);
      *param_1 = __dest;
      param_1[1] = uVar2;
      param_1[2] = uVar1 | 0x8000000000000000;
    }
    if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uVar5 = param_2[1];
    uVar4 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar5;
    *param_1 = uVar4;
  }
  uVar3 = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x1c) = *(undefined1 *)((long)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 3) = uVar3;
  return param_1;
}


// ===== 0046b450  FUN_0046b450 =====

bool FUN_0046b450(char *param_1,char *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  ulong uVar8;
  char *pcVar9;
  
  bVar3 = param_1[0x17];
  uVar8 = (ulong)bVar3;
  bVar4 = param_2[0x17];
  sVar1 = *(size_t *)(param_1 + 8);
  if (-1 < (char)bVar3) {
    sVar1 = uVar8;
  }
  sVar2 = *(size_t *)(param_2 + 8);
  if (-1 < (char)bVar4) {
    sVar2 = (ulong)bVar4;
  }
  if (sVar1 == sVar2) {
    pcVar9 = *(char **)param_1;
    if (-1 < (char)bVar3) {
      pcVar9 = param_1;
    }
    pcVar7 = *(char **)param_2;
    if (-1 < (char)bVar4) {
      pcVar7 = param_2;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 != 0) && (iVar6 = memcmp(pcVar9,pcVar7,sVar1), iVar6 != 0)) {
        return false;
      }
    }
    else {
      pcVar9 = param_1;
      if (bVar3 != 0) {
        do {
          if (*pcVar9 != *pcVar7) {
            return false;
          }
          uVar8 = uVar8 - 1;
          pcVar7 = pcVar7 + 1;
          pcVar9 = pcVar9 + 1;
        } while (uVar8 != 0);
      }
    }
    bVar3 = param_1[0x2f];
    uVar8 = (ulong)bVar3;
    bVar4 = param_2[0x2f];
    sVar1 = *(size_t *)(param_1 + 0x20);
    if (-1 < (char)bVar3) {
      sVar1 = uVar8;
    }
    sVar2 = *(size_t *)(param_2 + 0x20);
    if (-1 < (char)bVar4) {
      sVar2 = (ulong)bVar4;
    }
    if (sVar1 == sVar2) {
      param_1 = param_1 + 0x18;
      pcVar9 = *(char **)param_1;
      if (-1 < (char)bVar3) {
        pcVar9 = param_1;
      }
      pcVar7 = *(char **)(param_2 + 0x18);
      if (-1 < (char)bVar4) {
        pcVar7 = param_2 + 0x18;
      }
      if ((char)bVar3 < '\0') {
        if (sVar1 != 0) {
          iVar6 = memcmp(pcVar9,pcVar7,sVar1);
          return iVar6 == 0;
        }
      }
      else if (bVar3 != 0) {
        do {
          uVar8 = uVar8 - 1;
          bVar5 = *param_1 == *pcVar7;
          if (!bVar5) {
            return bVar5;
          }
          pcVar7 = pcVar7 + 1;
          param_1 = param_1 + 1;
        } while (uVar8 != 0);
        return bVar5;
      }
      return true;
    }
  }
  return false;
}


// ===== 0046b598  FUN_0046b598 =====

void FUN_0046b598(undefined8 *param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined1 uVar5;
  void *pvVar6;
  ulong uVar7;
  void *pvVar8;
  void *pvVar9;
  ulong uVar10;
  
  uVar7 = param_1[2];
  pvVar8 = (void *)*param_1;
  uVar10 = param_3 - param_2 >> 5;
  if ((ulong)((long)(uVar7 - (long)pvVar8) >> 5) < uVar10) {
    if (pvVar8 != (void *)0x0) {
      pvVar9 = (void *)param_1[1];
      pvVar6 = pvVar8;
      if (pvVar9 != pvVar8) {
        do {
          pvVar9 = (void *)((long)pvVar9 + -0x20);
          FUN_00668f8c(pvVar9);
        } while (pvVar9 != pvVar8);
        pvVar6 = (void *)*param_1;
      }
      param_1[1] = pvVar8;
      operator_delete(pvVar6);
      uVar7 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (param_3 - param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar3 = uVar7 >> 4;
    if (uVar7 >> 4 <= uVar10) {
      uVar3 = uVar10;
    }
    if (0x7fffffffffffffdf < uVar7) {
      uVar3 = 0x7ffffffffffffff;
    }
    if (uVar3 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar8 = operator_new(uVar3 * 0x20);
    *param_1 = pvVar8;
    param_1[1] = pvVar8;
    param_1[2] = (void *)((long)pvVar8 + uVar3 * 0x20);
    if (param_2 != param_3) {
      do {
        FUN_0046b338(pvVar8,param_2);
        param_2 = param_2 + 0x20;
        pvVar8 = (void *)((long)pvVar8 + 0x20);
      } while (param_2 != param_3);
    }
    param_1[1] = pvVar8;
  }
  else {
    uVar7 = param_1[1] - (long)pvVar8 >> 5;
    lVar2 = param_2 + (param_1[1] - (long)pvVar8);
    lVar4 = lVar2;
    if (uVar10 <= uVar7) {
      lVar4 = param_3;
    }
    pvVar6 = pvVar8;
    if (lVar4 != param_2) {
      do {
        FUN_00411268(pvVar8,param_2);
        puVar1 = (undefined4 *)(param_2 + 0x18);
        pvVar6 = (void *)((long)pvVar6 + 0x20);
        uVar5 = *(undefined1 *)(param_2 + 0x1c);
        param_2 = param_2 + 0x20;
        *(undefined4 *)((long)pvVar8 + 0x18) = *puVar1;
        *(undefined1 *)((long)pvVar8 + 0x1c) = uVar5;
        pvVar8 = (void *)((long)pvVar8 + 0x20);
      } while (param_2 != lVar4);
    }
    pvVar8 = (void *)param_1[1];
    if (uVar7 < uVar10) {
      while (lVar4 != param_3) {
        FUN_0046b338(pvVar8,lVar2);
        pvVar8 = (void *)((long)pvVar8 + 0x20);
        lVar2 = lVar2 + 0x20;
        lVar4 = lVar2;
      }
      param_1[1] = pvVar8;
    }
    else {
      while (pvVar8 != pvVar6) {
        pvVar8 = (void *)((long)pvVar8 + -0x20);
        FUN_00668f8c(pvVar8);
      }
      param_1[1] = pvVar6;
    }
  }
  return;
}


// ===== 0046b760  FUN_0046b760 =====

void FUN_0046b760(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  size_t sVar1;
  ulong uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  void *pvVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  
  uVar4 = param_1[2];
  lVar7 = (long)param_3 - (long)param_2;
  pvVar6 = (void *)*param_1;
  uVar9 = lVar7 >> 2;
  if ((ulong)((long)(uVar4 - (long)pvVar6) >> 2) < uVar9) {
    if (pvVar6 != (void *)0x0) {
      param_1[1] = pvVar6;
      operator_delete(pvVar6);
      uVar4 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (lVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar2 = uVar4 >> 1;
    if (uVar4 >> 1 <= uVar9) {
      uVar2 = uVar9;
    }
    if (0x7ffffffffffffffb < uVar4) {
      uVar2 = 0x3fffffffffffffff;
    }
    if (uVar2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar6 = operator_new(uVar2 * 4);
    *param_1 = pvVar6;
    param_1[2] = (void *)((long)pvVar6 + uVar2 * 4);
    if (param_2 != param_3) {
      sVar1 = (lVar7 - 4U & 0xfffffffffffffffc) + 4;
      memcpy(pvVar6,param_2,sVar1);
      pvVar6 = (void *)((long)pvVar6 + sVar1);
    }
    param_1[1] = pvVar6;
  }
  else {
    uVar4 = param_1[1] - (long)pvVar6 >> 2;
    puVar8 = (undefined4 *)((long)param_2 + (param_1[1] - (long)pvVar6));
    puVar3 = puVar8;
    if (uVar9 <= uVar4) {
      puVar3 = param_3;
    }
    sVar1 = (long)puVar3 - (long)param_2;
    if (sVar1 != 0) {
      memmove(pvVar6,param_2,sVar1);
    }
    if (uVar4 < uVar9) {
      puVar5 = (undefined4 *)param_1[1];
      while (puVar3 != param_3) {
        if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        *puVar5 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar5 = puVar5 + 1;
        puVar3 = puVar8;
      }
    }
    else {
      puVar5 = (undefined4 *)((long)pvVar6 + sVar1);
    }
    param_1[1] = puVar5;
  }
  return;
}


// ===== 0046b8e4  FUN_0046b8e4 =====

void FUN_0046b8e4(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  
  lVar5 = param_1[1];
  if ((ulong)((param_1[2] - lVar5 >> 3) * -0x70a3d70a3d70a3d7) < param_2) {
    lVar5 = lVar5 - *param_1 >> 3;
    uVar1 = lVar5 * -0x70a3d70a3d70a3d7 + param_2;
    if (0x147ae147ae147ae < uVar1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar6 = lVar4 * 0x1eb851eb851eb852;
    if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
      uVar6 = uVar1;
    }
    if (0xa3d70a3d70a3d6 < (ulong)(lVar4 * -0x70a3d70a3d70a3d7)) {
      uVar6 = 0x147ae147ae147ae;
    }
    if (uVar6 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0x147ae147ae147ae < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      pvVar3 = operator_new(uVar6 * 200);
    }
    pvVar9 = (void *)((long)pvVar3 + lVar5 * 8);
    lVar5 = param_2 * 200;
    pvVar3 = (void *)((long)pvVar3 + uVar6 * 200);
    pvVar2 = (void *)((long)pvVar9 + lVar5);
    pvVar10 = pvVar9;
    do {
      if (pvVar10 == (void *)0x0) goto LAB_0046bab4;
      FUN_008491f0(pvVar10);
      pvVar10 = (void *)((long)pvVar10 + 200);
      lVar5 = lVar5 + -200;
    } while (lVar5 != 0);
    pvVar10 = (void *)*param_1;
    pvVar8 = (void *)param_1[1];
    if (pvVar8 == pvVar10) {
      *param_1 = (long)pvVar9;
      param_1[1] = (long)pvVar2;
      param_1[2] = (long)pvVar3;
    }
    else {
      do {
        pvVar9 = (void *)((long)pvVar9 + -200);
        pvVar8 = (void *)((long)pvVar8 + -200);
        FUN_00849240(pvVar9,pvVar8);
      } while (pvVar8 != pvVar10);
      pvVar8 = (void *)*param_1;
      pvVar10 = (void *)param_1[1];
      *param_1 = (long)pvVar9;
      param_1[1] = (long)pvVar2;
      param_1[2] = (long)pvVar3;
      while (pvVar10 != pvVar8) {
        pvVar10 = (void *)((long)pvVar10 + -200);
        FUN_008492a8(pvVar10);
      }
    }
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
      return;
    }
  }
  else {
    lVar4 = lVar5;
    if (param_2 != 0) {
      lVar4 = lVar5 + param_2 * 200;
      lVar7 = param_2 * 200;
      do {
        if (lVar5 == 0) {
LAB_0046bab4:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        FUN_008491f0(lVar5);
        lVar5 = lVar5 + 200;
        lVar7 = lVar7 + -200;
      } while (lVar7 != 0);
    }
    param_1[1] = lVar4;
  }
  return;
}


// ===== 0046bae4  FUN_0046bae4 =====

/* WARNING: Removing unreachable block (ram,0x0046bc74) */

void FUN_0046bae4(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar5 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar5 * -0x71c71c71c71c71c7 + 1;
  if (0x38e38e38e38e38e < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = param_1[2] - *param_1 >> 3;
  uVar8 = lVar7 * 0x1c71c71c71c71c72;
  if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
    uVar8 = uVar1;
  }
  if (0x1c71c71c71c71c6 < (ulong)(lVar7 * -0x71c71c71c71c71c7)) {
    uVar8 = 0x38e38e38e38e38e;
  }
  if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  if (0x38e38e38e38e38e < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  pvVar4 = operator_new(uVar8 * 0x48);
  uVar11 = *(undefined8 *)(param_2 + 4);
  uVar10 = *(undefined8 *)(param_2 + 2);
  uVar9 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  puVar6 = (undefined4 *)((long)pvVar4 + lVar5 * 8);
  *(undefined8 *)(param_2 + 6) = 0;
  pvVar4 = (void *)((long)pvVar4 + uVar8 * 0x48);
  uVar13 = *(undefined8 *)(param_2 + 10);
  uVar12 = *(undefined8 *)(param_2 + 8);
  uVar15 = *(undefined8 *)(param_2 + 0xe);
  uVar14 = *(undefined8 *)(param_2 + 0xc);
  *puVar6 = *param_2;
  *(undefined8 *)(puVar6 + 6) = uVar9;
  *(undefined8 *)(puVar6 + 4) = uVar11;
  *(undefined8 *)(puVar6 + 2) = uVar10;
  uVar9 = *(undefined8 *)((long)param_2 + 0x3d);
  *(undefined8 *)(puVar6 + 10) = uVar13;
  *(undefined8 *)(puVar6 + 8) = uVar12;
  *(undefined8 *)(puVar6 + 0xe) = uVar15;
  *(undefined8 *)(puVar6 + 0xc) = uVar14;
  pvVar2 = (void *)*param_1;
  pvVar3 = (void *)param_1[1];
  *(undefined8 *)((long)puVar6 + 0x3d) = uVar9;
  if (pvVar3 == pvVar2) {
    *param_1 = (long)puVar6;
    param_1[1] = (long)(puVar6 + 0x12);
    param_1[2] = (long)pvVar4;
  }
  else {
    lVar5 = 0;
    do {
      lVar7 = lVar5 + -0x48;
      *(undefined4 *)((long)puVar6 + lVar5 + -0x48) = *(undefined4 *)((long)pvVar3 + lVar5 + -0x48);
      uVar10 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x38);
      uVar9 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x40);
      *(undefined8 *)((long)puVar6 + lVar5 + -0x30) = *(undefined8 *)((long)pvVar3 + lVar5 + -0x30);
      *(undefined8 *)((long)puVar6 + lVar5 + -0x38) = uVar10;
      *(undefined8 *)((long)puVar6 + lVar5 + -0x40) = uVar9;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x38) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x30) = 0;
      uVar10 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x18);
      uVar12 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x20);
      uVar11 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x28);
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x40) = 0;
      uVar9 = *(undefined8 *)((long)pvVar3 + lVar5 + -0xb);
      *(undefined8 *)((long)puVar6 + lVar5 + -0x10) = *(undefined8 *)((long)pvVar3 + lVar5 + -0x10);
      *(undefined8 *)((long)puVar6 + lVar5 + -0x18) = uVar10;
      *(undefined8 *)((long)puVar6 + lVar5 + -0x20) = uVar12;
      *(undefined8 *)((long)puVar6 + lVar5 + -0x28) = uVar11;
      *(undefined8 *)((long)puVar6 + lVar5 + -0xb) = uVar9;
      lVar5 = lVar7;
    } while ((void *)((long)pvVar3 + lVar7) != pvVar2);
    param_1[2] = (long)pvVar4;
    pvVar3 = (void *)*param_1;
    pvVar4 = (void *)param_1[1];
    *param_1 = (long)puVar6 + lVar7;
    param_1[1] = (long)(puVar6 + 0x12);
    for (; pvVar4 != pvVar3; pvVar4 = (void *)((long)pvVar4 + -0x48)) {
    }
  }
  if (pvVar3 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar3);
  return;
}


// ===== 0046bccc  FUN_0046bccc =====

void FUN_0046bccc(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0046bcdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined1 *)*param_1);
  return;
}


// ===== 0046bce0  FUN_0046bce0 =====

void FUN_0046bce0(void)

{
  return;
}


// ===== 0046bce4  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0046bce8  FUN_0046bce8 =====

byte FUN_0046bce8(long param_1)

{
  return *(byte *)(param_1 + 8) & 1;
}


// ===== 0046bcf8  FUN_0046bcf8 =====

void FUN_0046bcf8(void)

{
  return;
}


// ===== 0046bcfc  FUN_0046bcfc =====

void FUN_0046bcfc(undefined8 *param_1)

{
  FUN_00467fd0(*param_1);
  return;
}


// ===== 0046bd04  FUN_0046bd04 =====

void FUN_0046bd04(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = *(long *)(lVar1 + 0x10);
  FUN_005467a4(lVar2 + 0x1888);
  if (*(char *)(lVar2 + 0x18d0) != '\0') {
    FUN_007b5df8(lVar2 + 0x18b0,lVar1);
    FUN_005467c8(lVar2 + 0x1888);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 0046bd80  FUN_0046bd80 =====

void FUN_0046bd80(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_0042f234(*(undefined8 *)(lVar1 + 0x18),lVar1);
  if (*(long *)(*(long *)(lVar1 + 0x1d80) + 0x28) != 0) {
    FUN_0042f8ec(*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(*(long *)(lVar1 + 8) + 0xe0));
    *(undefined8 *)(*(long *)(lVar1 + 0x1d80) + 0x28) = 0;
  }
  FUN_0042e374(*(undefined8 *)(lVar1 + 0x18));
  FUN_00460ac8(lVar1);
  return;
}


// ===== 0046bdd8  FUN_0046bdd8 =====

void FUN_0046bdd8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = *(long *)(lVar1 + 0x10);
  FUN_005467a4(lVar2 + 0x78);
  if (*(char *)(lVar2 + 0xc0) != '\0') {
    FUN_007b5df8(lVar2 + 0xa0,lVar1);
    FUN_005467c8(lVar2 + 0x78);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 0046be4c  FUN_0046be4c =====

void FUN_0046be4c(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *param_1;
  FUN_005467a4(lVar2 + 0x1f38);
  if (*(char *)(lVar2 + 0x1f80) == '\0') {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
               "this->has_value()","optional operator-> called on a disengaged value");
  }
  FUN_007b6160(lVar2 + 0x1f60,auStack_40,FUN_00441e10);
  FUN_005467c8(lVar2 + 0x1f38);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0046bef8  FUN_0046bef8 =====

void FUN_0046bef8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = *(long *)(lVar1 + 0x1f30);
  if (lVar2 == 0) {
    return;
  }
  FUN_005467a4(lVar2 + 0x38);
  if (*(char *)(lVar2 + 0x80) != '\0') {
    FUN_007b5df8(lVar2 + 0x60,lVar1);
    FUN_005467c8(lVar2 + 0x38);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 0046bf80  FUN_0046bf80 =====

void FUN_0046bf80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1cb68;
  FUN_005466c0();
  return;
}


// ===== 0046bf90  FUN_0046bf90 =====

void FUN_0046bf90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1cb68;
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 0046bfc0  FUN_0046bfc0 =====

void FUN_0046bfc0(long param_1)

{
  FUN_00431e24(param_1 + 0x18);
  return;
}


// ===== 0046bfc8  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0046bfcc  FUN_0046bfcc =====

void FUN_0046bfcc(undefined4 *param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4,
                 undefined8 param_5,long *param_6)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *__src;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *__dest;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  __dest = (undefined8 *)(param_1 + 2);
  *param_1 = param_2;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    __src = (undefined8 *)*param_3;
    uVar3 = param_3[1];
    if (uVar3 < 0x17) {
      *(char *)((long)param_1 + 0x1f) = (char)uVar3;
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      __dest = (undefined8 *)operator_new(uVar1);
      *(undefined8 **)(param_1 + 2) = __dest;
      *(ulong *)(param_1 + 4) = uVar3;
      *(ulong *)(param_1 + 6) = uVar1 | 0x8000000000000000;
    }
    if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar3 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar3 + 1);
  }
  else {
    uVar8 = param_3[1];
    uVar7 = *param_3;
    *(undefined8 *)(param_1 + 6) = param_3[2];
    *(undefined8 *)(param_1 + 4) = uVar8;
    *__dest = uVar7;
  }
  param_1[8] = param_4;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = param_5;
  *(long **)(param_1 + 0xe) = param_6;
  if (param_6 != (long *)0x0) {
    plVar2 = param_6 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      lVar6 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*param_6 + 0x10))(param_6);
      FUN_005466cc(param_6);
      return;
    }
  }
  return;
}


// ===== 0046c118  FUN_0046c118 =====

void FUN_0046c118(long *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  pcVar1 = (char *)(lVar3 + 0x22c8);
  if (*pcVar1 != '\0') {
    return;
  }
  lVar2 = FUN_005183d8();
  if (*pcVar1 == '\0') {
    *pcVar1 = '\x01';
  }
  *(long *)(lVar3 + 0x22c0) = lVar2 / 1000000;
  FUN_0043ae60(*(undefined8 *)(lVar3 + 8),lVar3 + 0x2270);
  return;
}


// ===== 0046c1a0  FUN_0046c1a0 =====

void FUN_0046c1a0(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 local_38;
  undefined1 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = *(undefined8 *)param_1[1];
  local_30 = *(undefined1 *)((undefined8 *)param_1[1] + 1);
  (**(code **)(param_2 + 0x20))(param_2,*(undefined4 *)*param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0046c20c  FUN_0046c20c =====

void FUN_0046c20c(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0046c228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))
            (param_2,*(undefined4 *)*param_1,param_1[1],*(undefined1 *)param_1[2]);
  return;
}


// ===== 0046c22c  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0046c230  FUN_0046c230 =====

void FUN_0046c230(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 8) + 0x2258) == *(long *)(param_1 + 0x10)) {
    FUN_00462608();
    return;
  }
  return;
}


// ===== 0046c250  FUN_0046c250 =====

void FUN_0046c250(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)operator_new(0x20);
  uVar6 = *param_1;
  lVar5 = param_1[2];
  puVar4[1] = param_1[1];
  *puVar4 = uVar6;
  puVar4[2] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[3] = param_1[3];
  return;
}


// ===== 0046c2a4  FUN_0046c2a4 =====

void FUN_0046c2a4(void *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)((long)param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 0046c2fc  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0046c300  FUN_0046c300 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046c300(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  char *local_58;
  undefined8 local_50;
  long lStack_48;
  char **local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar8 = *(long *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) == 2) {
    if (*(long *)(lVar8 + 0x1ec0) != 0) {
      FUN_004d7248(*(long *)(lVar8 + 0x1ec0),1);
    }
    local_58 = (char *)operator_new(0x30);
    uVar6 = s___type____video_state____state___00199e44._16_8_;
    uVar5 = s___type____video_state____state___00199e44._8_8_;
    uVar4 = s___type____video_state____state___00199e44._0_8_;
    lStack_48 = _UNK_001f4478;
    local_50 = _DAT_001f4470;
    if ((local_58 < "\"type\": \"video_state\", \"state\": \"paused\"}") &&
       ("{\"type\": \"video_state\", \"state\": \"paused\"}" < local_58 + 0x2a)) {
LAB_0046c468:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar2 = CONCAT62(s___type____video_state____state___00199e44._26_6_,
                     s___type____video_state____state___00199e44._24_2_);
    local_58[0x2a] = '\0';
    uVar7 = s___type____video_state____state___00199e44._34_8_;
    uVar3 = CONCAT26(s___type____video_state____state___00199e44._32_2_,
                     s___type____video_state____state___00199e44._26_6_);
    *(undefined8 *)(local_58 + 8) = uVar5;
    *(undefined8 *)local_58 = uVar4;
    *(undefined8 *)(local_58 + 0x18) = uVar2;
    *(undefined8 *)(local_58 + 0x10) = uVar6;
    *(undefined8 *)(local_58 + 0x22) = uVar7;
    *(undefined8 *)(local_58 + 0x1a) = uVar3;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 1) goto LAB_0046c444;
    if (*(long *)(lVar8 + 0x1ec0) != 0) {
      FUN_004d7248(*(long *)(lVar8 + 0x1ec0),0);
    }
    local_58 = (char *)operator_new(0x30);
    uVar6 = s___type____video_state____state___001d8bd3._16_8_;
    uVar5 = s___type____video_state____state___001d8bd3._8_8_;
    uVar4 = s___type____video_state____state___001d8bd3._0_8_;
    lStack_48 = _UNK_001f27d8;
    local_50 = _DAT_001f27d0;
    if ((local_58 < "\"type\": \"video_state\", \"state\": \"playing\"}") &&
       ("{\"type\": \"video_state\", \"state\": \"playing\"}" < local_58 + 0x2b)) goto LAB_0046c468;
    uVar2 = CONCAT53(s___type____video_state____state___001d8bd3._27_5_,
                     s___type____video_state____state___001d8bd3._24_3_);
    local_58[0x2b] = '\0';
    uVar7 = s___type____video_state____state___001d8bd3._35_8_;
    uVar3 = CONCAT35(s___type____video_state____state___001d8bd3._32_3_,
                     s___type____video_state____state___001d8bd3._27_5_);
    *(undefined8 *)(local_58 + 8) = uVar5;
    *(undefined8 *)local_58 = uVar4;
    *(undefined8 *)(local_58 + 0x18) = uVar2;
    *(undefined8 *)(local_58 + 0x10) = uVar6;
    *(undefined8 *)(local_58 + 0x23) = uVar7;
    *(undefined8 *)(local_58 + 0x1b) = uVar3;
  }
  FUN_005467a4(lVar8 + 0x20f8);
  if (*(char *)(lVar8 + 0x2140) == '\0') {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
               "this->has_value()","optional operator-> called on a disengaged value");
  }
  local_40 = &local_58;
  FUN_007b6160(lVar8 + 0x2120,&local_40,FUN_0046af44);
  FUN_005467c8(lVar8 + 0x20f8);
  if (lStack_48 < 0) {
    operator_delete(local_58);
  }
LAB_0046c444:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0046c4bc  FUN_0046c4bc =====

void FUN_0046c4bc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)operator_new(0x18);
  uVar6 = *param_1;
  lVar5 = param_1[2];
  puVar4[1] = param_1[1];
  *puVar4 = uVar6;
  puVar4[2] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


// ===== 0046c508  FUN_0046c508 =====

void FUN_0046c508(void *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)((long)param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 0046c560  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0046c564  FUN_0046c564 =====

void FUN_0046c564(long param_1)

{
  FUN_004638a4(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
               *(undefined4 *)(param_1 + 0x1c),*(char *)(param_1 + 0x20) != '\0',
               *(char *)(param_1 + 0x21) != '\0');
  return;
}


// ===== 0046c590  FUN_0046c590 =====

void FUN_0046c590(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)operator_new(0x18);
  uVar6 = *param_1;
  lVar5 = param_1[2];
  puVar4[1] = param_1[1];
  *puVar4 = uVar6;
  puVar4[2] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


// ===== 0046c5dc  FUN_0046c5dc =====

void FUN_0046c5dc(void *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)((long)param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 0046c634  FUN_0046c634 =====

void FUN_0046c634(void)

{
  return;
}


// ===== 0046c638  FUN_0046c638 =====

void FUN_0046c638(void)

{
  return;
}


// ===== 0046c63c  FUN_0046c63c =====

undefined8 FUN_0046c63c(void)

{
  return 0;
}


// ===== 0046c644  FUN_0046c644 =====

void FUN_0046c644(void)

{
  return;
}


// ===== 0046c648  FUN_0046c648 =====

undefined8 FUN_0046c648(void)

{
  return 0;
}


// ===== 0046c650  FUN_0046c650 =====

undefined8 FUN_0046c650(void)

{
  return 0;
}


// ===== 0046c658  FUN_0046c658 =====

void FUN_0046c658(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


// ===== 0046c664  FUN_0046c664 =====

void FUN_0046c664(void)

{
  return;
}


// ===== 0046c668  FUN_0046c668 =====

void FUN_0046c668(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x38] = 0;
  return;
}


// ===== 0046c674  FUN_0046c674 =====

undefined8 FUN_0046c674(void)

{
  return 1;
}


// ===== 0046c67c  FUN_0046c67c =====

undefined8 FUN_0046c67c(void)

{
  return 1;
}


// ===== 0046c684  FUN_0046c684 =====

void FUN_0046c684(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1cba0;
  if (*(char *)(param_1 + 0x16) != '\0') {
    FUN_007b5d24(param_1 + 0x12);
  }
  FUN_00546ab0(param_1 + 0xd);
  if (*(char *)(param_1 + 0xc) != '\0') {
    FUN_007b5d24(param_1 + 8);
  }
  FUN_00546ab0(param_1 + 3);
  if (param_1[2] != 0) {
    FUN_005466cc();
    return;
  }
  return;
}


// ===== 0046c6f8  FUN_0046c6f8 =====

void FUN_0046c6f8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x46c6fc);
  (*pcVar1)();
}


// ===== 0046c6fc  FUN_0046c6fc =====

void FUN_0046c6fc(void)

{
  return;
}


// ===== 0046c700  FUN_0046c700 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0046c700(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *local_178 [9];
  void *local_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108 [3];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [30];
  long local_70;
  
  puVar5 = PTR_PTR_00d51b50;
  puVar4 = PTR_DAT_00d51b48;
  lVar2 = tpidr_el0;
  ppuVar3 = local_178 + 1;
  local_70 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_DAT_00d51b48 + 0x40;
  local_178[0] = *(undefined **)(PTR_PTR_00d51b50 + 8);
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_00d51b50 + 0x10);
  lVar6 = *(long *)(local_178[0] + -0x18);
  FUN_00520e8c((long)local_178 + lVar6,ppuVar3);
  local_178[0] = puVar4 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar6) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar6) = 0xffffffff;
  local_108[0] = puVar1;
  FUN_0054a4c8(ppuVar3);
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_118 = 0;
  lStack_120 = 0;
  puVar1 = PTR_DAT_00d51b20 + 0x10;
  local_110 = 0x10;
  local_178[1] = puVar1;
  FUN_0054c7e8(local_178,*param_2);
  FUN_0054d504(param_1,ppuVar3);
  local_178[0] = *(undefined **)puVar5;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(puVar5 + 0x18);
  local_178[1] = puVar1;
  if (lStack_120 < 0) {
    operator_delete(local_130);
  }
  FUN_0054a488(ppuVar3);
  FUN_0054b3d4(local_178,puVar5 + 8);
  thunk_FUN_00520cf4(local_108);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0046c854  FUN_0046c854 =====

void FUN_0046c854(undefined8 *param_1)

{
  FUN_00462608(*param_1);
  return;
}


// ===== 0046c85c  FUN_0046c85c =====

void FUN_0046c85c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)*param_1;
  lVar2 = ((undefined8 *)*param_1)[1];
  FUN_005467a4(lVar2 + 0x68);
  if (*(char *)(lVar2 + 0xb0) != '\0') {
    FUN_007b5df8(lVar2 + 0x90,uVar1);
    FUN_005467c8(lVar2 + 0x68);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 0046c8d0  FUN_0046c8d0 =====

void FUN_0046c8d0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)operator_new(0x18);
  uVar6 = *param_1;
  lVar5 = param_1[2];
  puVar4[1] = param_1[1];
  *puVar4 = uVar6;
  puVar4[2] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


// ===== 0046c91c  FUN_0046c91c =====

void FUN_0046c91c(void *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)((long)param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 0046c974  FUN_0046c974 =====

void FUN_0046c974(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)operator_new(0x18);
  uVar6 = *param_1;
  lVar5 = param_1[2];
  puVar4[1] = param_1[1];
  *puVar4 = uVar6;
  puVar4[2] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


// ===== 0046c9c0  FUN_0046c9c0 =====

void FUN_0046c9c0(void *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)((long)param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 0046ca18  FUN_0046ca18 =====

void FUN_0046ca18(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***__src;
  ulong uVar2;
  long lVar3;
  undefined8 ***__dest;
  undefined8 **local_68;
  ulong uStack_60;
  undefined8 local_58;
  undefined3 local_50;
  undefined1 uStack_4d;
  undefined3 uStack_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  __dest = &local_68;
  if (*(char *)(param_2 + 0x1f) < '\0') {
    __src = *(undefined8 ****)(param_2 + 8);
    uVar2 = *(ulong *)(param_2 + 0x10);
    if (uVar2 < 0x17) {
      local_58 = CONCAT17((char)uVar2,(undefined7)local_58);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 ***)operator_new(uVar1);
      local_58 = uVar1 | 0x8000000000000000;
      local_68 = __dest;
      uStack_60 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined8 ***)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uStack_60 = *(ulong *)(param_2 + 0x10);
    local_68 = *(undefined8 ***)(param_2 + 8);
    local_58 = *(ulong *)(param_2 + 0x18);
  }
  local_50 = (undefined3)*(undefined4 *)(param_2 + 0x20);
  uStack_4d = (undefined1)*(undefined4 *)(param_2 + 0x23);
  uStack_4c = (undefined3)((uint)*(undefined4 *)(param_2 + 0x23) >> 8);
  if ((long)local_58 < 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0046cb44  FUN_0046cb44 =====

void FUN_0046cb44(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***__src;
  ulong uVar2;
  long lVar3;
  undefined8 ***__dest;
  undefined8 **local_68;
  ulong uStack_60;
  undefined8 local_58;
  undefined3 local_50;
  undefined1 uStack_4d;
  undefined3 uStack_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  __dest = &local_68;
  if (*(char *)(param_2 + 0x1f) < '\0') {
    __src = *(undefined8 ****)(param_2 + 8);
    uVar2 = *(ulong *)(param_2 + 0x10);
    if (uVar2 < 0x17) {
      local_58 = CONCAT17((char)uVar2,(undefined7)local_58);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 ***)operator_new(uVar1);
      local_58 = uVar1 | 0x8000000000000000;
      local_68 = __dest;
      uStack_60 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined8 ***)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uStack_60 = *(ulong *)(param_2 + 0x10);
    local_68 = *(undefined8 ***)(param_2 + 8);
    local_58 = *(ulong *)(param_2 + 0x18);
  }
  local_50 = (undefined3)*(undefined4 *)(param_2 + 0x20);
  uStack_4d = (undefined1)*(undefined4 *)(param_2 + 0x23);
  uStack_4c = (undefined3)((uint)*(undefined4 *)(param_2 + 0x23) >> 8);
  if ((long)local_58 < 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0046cc70  FUN_0046cc70 =====

void FUN_0046cc70(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***__src;
  ulong uVar2;
  long lVar3;
  undefined8 ***__dest;
  undefined8 **local_68;
  ulong uStack_60;
  undefined8 local_58;
  undefined3 local_50;
  undefined1 uStack_4d;
  undefined3 uStack_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  __dest = &local_68;
  if (*(char *)(param_2 + 0x1f) < '\0') {
    __src = *(undefined8 ****)(param_2 + 8);
    uVar2 = *(ulong *)(param_2 + 0x10);
    if (uVar2 < 0x17) {
      local_58 = CONCAT17((char)uVar2,(undefined7)local_58);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 ***)operator_new(uVar1);
      local_58 = uVar1 | 0x8000000000000000;
      local_68 = __dest;
      uStack_60 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined8 ***)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uStack_60 = *(ulong *)(param_2 + 0x10);
    local_68 = *(undefined8 ***)(param_2 + 8);
    local_58 = *(ulong *)(param_2 + 0x18);
  }
  local_50 = (undefined3)*(undefined4 *)(param_2 + 0x20);
  uStack_4d = (undefined1)*(undefined4 *)(param_2 + 0x23);
  uStack_4c = (undefined3)((uint)*(undefined4 *)(param_2 + 0x23) >> 8);
  if ((long)local_58 < 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0046cd9c  FUN_0046cd9c =====

void FUN_0046cd9c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***__src;
  ulong uVar2;
  long lVar3;
  undefined8 ***__dest;
  undefined8 **local_68;
  ulong uStack_60;
  undefined8 local_58;
  undefined3 local_50;
  undefined1 uStack_4d;
  undefined3 uStack_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  __dest = &local_68;
  if (*(char *)(param_2 + 0x1f) < '\0') {
    __src = *(undefined8 ****)(param_2 + 8);
    uVar2 = *(ulong *)(param_2 + 0x10);
    if (uVar2 < 0x17) {
      local_58 = CONCAT17((char)uVar2,(undefined7)local_58);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 ***)operator_new(uVar1);
      local_58 = uVar1 | 0x8000000000000000;
      local_68 = __dest;
      uStack_60 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined8 ***)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uStack_60 = *(ulong *)(param_2 + 0x10);
    local_68 = *(undefined8 ***)(param_2 + 8);
    local_58 = *(ulong *)(param_2 + 0x18);
  }
  local_50 = (undefined3)*(undefined4 *)(param_2 + 0x20);
  uStack_4d = (undefined1)*(undefined4 *)(param_2 + 0x23);
  uStack_4c = (undefined3)((uint)*(undefined4 *)(param_2 + 0x23) >> 8);
  if ((long)local_58 < 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0046cec8  FUN_0046cec8 =====

void FUN_0046cec8(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***__src;
  ulong uVar2;
  long lVar3;
  undefined8 ***__dest;
  undefined8 **local_68;
  ulong uStack_60;
  undefined8 local_58;
  undefined3 local_50;
  undefined1 uStack_4d;
  undefined3 uStack_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  __dest = &local_68;
  if (*(char *)(param_2 + 0x1f) < '\0') {
    __src = *(undefined8 ****)(param_2 + 8);
    uVar2 = *(ulong *)(param_2 + 0x10);
    if (uVar2 < 0x17) {
      local_58 = CONCAT17((char)uVar2,(undefined7)local_58);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 ***)operator_new(uVar1);
      local_58 = uVar1 | 0x8000000000000000;
      local_68 = __dest;
      uStack_60 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined8 ***)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uStack_60 = *(ulong *)(param_2 + 0x10);
    local_68 = *(undefined8 ***)(param_2 + 8);
    local_58 = *(ulong *)(param_2 + 0x18);
  }
  local_50 = (undefined3)*(undefined4 *)(param_2 + 0x20);
  uStack_4d = (undefined1)*(undefined4 *)(param_2 + 0x23);
  uStack_4c = (undefined3)((uint)*(undefined4 *)(param_2 + 0x23) >> 8);
  if ((long)local_58 < 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0046cff4  FUN_0046cff4 =====

void FUN_0046cff4(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  if (param_1[2] != 0) {
    puVar6 = (undefined8 *)*param_1;
    plVar8 = param_1 + 1;
    *param_1 = (long)plVar8;
    *(undefined8 *)(*plVar8 + 0x10) = 0;
    param_1[2] = 0;
    *plVar8 = 0;
    puVar3 = (undefined8 *)puVar6[1];
    if (puVar3 != (undefined8 *)0x0) {
      puVar6 = puVar3;
    }
    if (puVar6 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      puVar3 = (undefined8 *)puVar6[2];
      if (puVar3 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)*puVar3;
        if (puVar4 == puVar6) {
          puVar4 = (undefined8 *)puVar3[1];
          *puVar3 = 0;
          while (puVar4 != (undefined8 *)0x0) {
            do {
              puVar3 = puVar4;
              puVar4 = (undefined8 *)*puVar3;
            } while ((undefined8 *)*puVar3 != (undefined8 *)0x0);
            puVar4 = (undefined8 *)puVar3[1];
          }
        }
        else {
          puVar3[1] = 0;
          while (puVar4 != (undefined8 *)0x0) {
            do {
              puVar3 = puVar4;
              puVar4 = (undefined8 *)*puVar3;
            } while ((undefined8 *)*puVar3 != (undefined8 *)0x0);
            puVar4 = (undefined8 *)puVar3[1];
          }
        }
      }
      puVar4 = puVar6;
      if (param_2 != param_3) {
        do {
          puVar6 = puVar3;
          FUN_00411268(puVar4 + 4,param_2 + 4);
          FUN_00411268(puVar4 + 7,param_2 + 7);
          plVar5 = plVar8;
          plVar9 = (long *)*plVar8;
          plVar7 = plVar8;
          if ((long *)*plVar8 != (long *)0x0) {
            do {
              while (plVar7 = plVar9, uVar2 = FUN_0041d7a0(puVar4 + 4,plVar7 + 4),
                    (uVar2 >> 7 & 1) != 0) {
                plVar5 = plVar7;
                plVar9 = (long *)*plVar7;
                if ((long *)*plVar7 == (long *)0x0) goto LAB_0046d120;
              }
              plVar9 = (long *)plVar7[1];
            } while ((long *)plVar7[1] != (long *)0x0);
            plVar5 = plVar7 + 1;
          }
LAB_0046d120:
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = plVar7;
          *plVar5 = (long)puVar4;
          if (*(long *)*param_1 != 0) {
            *param_1 = *(long *)*param_1;
            puVar4 = (undefined8 *)*plVar5;
          }
          FUN_0041dcd0(param_1[1],puVar4);
          param_1[2] = param_1[2] + 1;
          if (puVar6 == (undefined8 *)0x0) {
            puVar3 = (undefined8 *)0x0;
          }
          else {
            puVar3 = (undefined8 *)puVar6[2];
            if (puVar3 != (undefined8 *)0x0) {
              puVar4 = (undefined8 *)*puVar3;
              if (puVar4 == puVar6) {
                puVar4 = (undefined8 *)puVar3[1];
                *puVar3 = 0;
                while (puVar4 != (undefined8 *)0x0) {
                  do {
                    puVar3 = puVar4;
                    puVar4 = (undefined8 *)*puVar3;
                  } while ((undefined8 *)*puVar3 != (undefined8 *)0x0);
                  puVar4 = (undefined8 *)puVar3[1];
                }
              }
              else {
                puVar3[1] = 0;
                while (puVar4 != (undefined8 *)0x0) {
                  do {
                    puVar3 = puVar4;
                    puVar4 = (undefined8 *)*puVar3;
                  } while ((undefined8 *)*puVar3 != (undefined8 *)0x0);
                  puVar4 = (undefined8 *)puVar3[1];
                }
              }
            }
          }
          if (param_2 == (long *)0x0) goto LAB_0046d29c;
          plVar5 = (long *)param_2[1];
          plVar9 = param_2;
          if ((long *)param_2[1] == (long *)0x0) {
            do {
              param_2 = (long *)plVar9[2];
              bVar1 = (long *)*param_2 != plVar9;
              plVar9 = param_2;
            } while (bVar1);
          }
          else {
            do {
              param_2 = plVar5;
              plVar5 = (long *)*param_2;
            } while ((long *)*param_2 != (long *)0x0);
          }
        } while ((puVar6 != (undefined8 *)0x0) && (puVar4 = puVar6, param_2 != param_3));
      }
      FUN_00441e1c(param_1,puVar6);
      if (puVar3 == (undefined8 *)0x0) goto joined_r0x0046d234;
      puVar6 = (undefined8 *)puVar3[2];
      while (puVar4 = puVar6, puVar4 != (undefined8 *)0x0) {
        puVar3 = puVar4;
        puVar6 = (undefined8 *)puVar4[2];
      }
    }
    FUN_00441e1c(param_1,puVar3);
  }
joined_r0x0046d234:
  while( true ) {
    if (param_2 == param_3) {
      return;
    }
    FUN_0046d2c4(param_1,param_2 + 4);
    if (param_2 == (long *)0x0) break;
    plVar8 = (long *)param_2[1];
    plVar5 = param_2;
    if ((long *)param_2[1] == (long *)0x0) {
      do {
        param_2 = (long *)plVar5[2];
        bVar1 = (long *)*param_2 != plVar5;
        plVar5 = param_2;
      } while (bVar1);
    }
    else {
      do {
        param_2 = plVar8;
        plVar8 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
LAB_0046d29c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
             "__x != nullptr","node shouldn\'t be null");
}


// ===== 0046d2c4  FUN_0046d2c4 =====

undefined8 * FUN_0046d2c4(long *param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  
  puVar3 = (undefined8 *)operator_new(0x50);
  FUN_00441814(puVar3 + 4,param_2);
  plVar5 = param_1 + 1;
  plVar1 = (long *)*plVar5;
  plVar6 = plVar5;
  if ((long *)*plVar5 != (long *)0x0) {
    do {
      while (plVar6 = plVar1, uVar2 = FUN_0041d7a0(puVar3 + 4,plVar6 + 4), (uVar2 >> 7 & 1) != 0) {
        plVar5 = plVar6;
        plVar1 = (long *)*plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_0046d338;
      }
      plVar1 = (long *)plVar6[1];
    } while ((long *)plVar6[1] != (long *)0x0);
    plVar5 = plVar6 + 1;
  }
LAB_0046d338:
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = plVar6;
  *plVar5 = (long)puVar3;
  puVar4 = puVar3;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    puVar4 = (undefined8 *)*plVar5;
  }
  FUN_0041dcd0(param_1[1],puVar4);
  param_1[2] = param_1[2] + 1;
  return puVar3;
}


// ===== 0046d384  FUN_0046d384 =====

undefined1  [16]
FUN_0046d384(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  plVar4 = (long *)param_1[1];
  plVar6 = param_1 + 1;
  while (plVar7 = plVar6, plVar4 != (long *)0x0) {
    while( true ) {
      plVar7 = plVar4;
      uVar1 = FUN_0041d7a0(param_2,plVar7 + 4);
      if ((uVar1 >> 7 & 1) != 0) break;
      uVar1 = FUN_0041d7a0(plVar7 + 4,param_2);
      if ((uVar1 >> 7 & 1) == 0) {
        puVar2 = (undefined8 *)*plVar6;
        if (puVar2 == (undefined8 *)0x0) goto LAB_0046d410;
        uVar5 = 0;
        goto LAB_0046d47c;
      }
      plVar6 = plVar7 + 1;
      plVar4 = (long *)*plVar6;
      if ((long *)*plVar6 == (long *)0x0) goto LAB_0046d410;
    }
    plVar6 = plVar7;
    plVar4 = (long *)*plVar7;
  }
LAB_0046d410:
  puVar2 = (undefined8 *)operator_new(0x50);
  param_4 = (undefined8 *)*param_4;
  uVar8 = *param_4;
  uVar5 = param_4[2];
  puVar2[5] = param_4[1];
  puVar2[4] = uVar8;
  puVar2[6] = uVar5;
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = plVar7;
  *plVar6 = (long)puVar2;
  puVar3 = puVar2;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    puVar3 = (undefined8 *)*plVar6;
  }
  FUN_0041dcd0(param_1[1],puVar3);
  uVar5 = 1;
  param_1[2] = param_1[2] + 1;
LAB_0046d47c:
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = puVar2;
  return auVar9;
}


// ===== 0046d494  FUN_0046d494 =====

void FUN_0046d494(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0x18);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


// ===== 0046d4ac  FUN_0046d4ac =====

bool FUN_0046d4ac(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  plVar1 = param_1 + 3;
  do {
    lVar5 = *plVar1;
    iVar4 = (int)lVar5 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*param_1 + 0x18))();
  }
  return (int)lVar5 != 1;
}


// ===== 0046d4f0  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0046d4f4  FUN_0046d4f4 =====

bool FUN_0046d4f4(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x18) == 1;
}


// ===== 0046d508  FUN_0046d508 =====

void FUN_0046d508(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0x14);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


// ===== 0046d520  FUN_0046d520 =====

bool FUN_0046d520(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  
  piVar1 = (int *)((long)param_1 + 0x14);
  do {
    iVar2 = *piVar1;
    iVar5 = iVar2 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*param_1 + 0x18))();
  }
  return iVar2 != 1;
}


// ===== 0046d564  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0046d568  FUN_0046d568 =====

bool FUN_0046d568(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x14) == 1;
}


// ===== 0046d57c  FUN_0046d57c =====

void FUN_0046d57c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0x10);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


// ===== 0046d594  FUN_0046d594 =====

bool FUN_0046d594(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  plVar1 = param_1 + 2;
  do {
    lVar5 = *plVar1;
    iVar4 = (int)lVar5 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*param_1 + 0x18))();
  }
  return (int)lVar5 != 1;
}


// ===== 0046d5d8  FUN_0046d5d8 =====

void FUN_0046d5d8(void)

{
  return;
}


// ===== 0046d5dc  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0046d5e0  FUN_0046d5e0 =====

bool FUN_0046d5e0(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x10) == 1;
}


// ===== 0046d5f4  FUN_0046d5f4 =====

void FUN_0046d5f4(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0x18);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


// ===== 0046d60c  FUN_0046d60c =====

bool FUN_0046d60c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  plVar1 = param_1 + 3;
  do {
    lVar5 = *plVar1;
    iVar4 = (int)lVar5 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*param_1 + 0x18))();
  }
  return (int)lVar5 != 1;
}


// ===== 0046d650  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0046d654  FUN_0046d654 =====

bool FUN_0046d654(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x18) == 1;
}


// ===== 0046d668  FUN_0046d668 =====

void FUN_0046d668(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0x10);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


// ===== 0046d680  FUN_0046d680 =====

bool FUN_0046d680(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  plVar1 = param_1 + 2;
  do {
    lVar5 = *plVar1;
    iVar4 = (int)lVar5 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*param_1 + 0x18))();
  }
  return (int)lVar5 != 1;
}


