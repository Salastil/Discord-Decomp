// ===== 0049ec60  FUN_0049ec60 =====

void FUN_0049ec60(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined8 *__dest;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *__src;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar7 = param_2[1] - *param_2;
  if (uVar7 != 0) {
    if (0x38e38e38e38e38e < (ulong)(((long)uVar7 >> 3) * -0x71c71c71c71c71c7)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar6 = operator_new(uVar7);
    *param_1 = pvVar6;
    param_1[1] = pvVar6;
    param_1[2] = (void *)((long)pvVar6 + ((long)uVar7 >> 3) * 8);
    puVar4 = (undefined4 *)*param_2;
    puVar5 = (undefined4 *)param_2[1];
    if (puVar4 != puVar5) {
      lVar9 = 0;
      do {
        puVar2 = (undefined4 *)((long)puVar4 + lVar9);
        puVar3 = (undefined4 *)((long)pvVar6 + lVar9);
        puVar8 = (undefined8 *)(puVar3 + 2);
        *puVar3 = *puVar2;
        if (*(char *)((long)puVar2 + 0x1f) < '\0') {
          uVar7 = *(ulong *)(puVar2 + 4);
          __src = *(undefined8 **)(puVar2 + 2);
          if (uVar7 < 0x17) {
            *(char *)((long)pvVar6 + lVar9 + 0x1f) = (char)uVar7;
            __dest = puVar8;
          }
          else {
            if (0x7fffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar1 = (uVar7 | 0xf) + 1;
            __dest = (undefined8 *)operator_new(uVar1);
            *puVar8 = __dest;
            *(ulong *)((long)pvVar6 + lVar9 + 0x10) = uVar7;
            *(ulong *)((long)pvVar6 + lVar9 + 0x18) = uVar1 | 0x8000000000000000;
          }
          if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar7 + 1))) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                       ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range")
            ;
          }
          memmove(__dest,__src,uVar7 + 1);
        }
        else {
          uVar11 = *(undefined8 *)(puVar2 + 4);
          uVar10 = *(undefined8 *)(puVar2 + 2);
          *(undefined8 *)(puVar3 + 6) = *(undefined8 *)(puVar2 + 6);
          *(undefined8 *)(puVar3 + 4) = uVar11;
          *puVar8 = uVar10;
        }
        uVar13 = *(undefined8 *)(puVar2 + 10);
        uVar12 = *(undefined8 *)(puVar2 + 8);
        uVar11 = *(undefined8 *)(puVar2 + 0xe);
        uVar10 = *(undefined8 *)(puVar2 + 0xc);
        lVar9 = lVar9 + 0x48;
        *(undefined8 *)((long)puVar3 + 0x3d) = *(undefined8 *)((long)puVar2 + 0x3d);
        *(undefined8 *)(puVar3 + 10) = uVar13;
        *(undefined8 *)(puVar3 + 8) = uVar12;
        *(undefined8 *)(puVar3 + 0xe) = uVar11;
        *(undefined8 *)(puVar3 + 0xc) = uVar10;
      } while (puVar2 + 0x12 != puVar5);
      pvVar6 = (void *)((long)pvVar6 + lVar9);
    }
    param_1[1] = pvVar6;
  }
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}


// ===== 0049ee24  FUN_0049ee24 =====

void FUN_0049ee24(undefined8 *param_1)

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


// ===== 0049ee58  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0049ee5c  FUN_0049ee5c =====

void FUN_0049ee5c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_50;
  long lStack_48;
  long local_40;
  undefined8 *local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  param_1 = (long *)*param_1;
  local_40 = param_1[3];
  local_38 = (undefined8 *)param_1[4];
  lStack_48 = param_1[2];
  local_50 = param_1[1];
  uVar2 = *(undefined8 *)(*param_1 + 0x20);
  if ((code *)*local_38 != (code *)0x0) {
    local_50 = (*(code *)*local_38)(param_1[1]);
  }
  FUN_0043af34(uVar2,&local_50);
  if ((code *)local_38[1] != (code *)0x0) {
    (*(code *)local_38[1])(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049eeec  FUN_0049eeec =====

undefined8 * FUN_0049eeec(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  uVar3 = param_1[3];
  puVar1 = (undefined8 *)param_1[4];
  uVar6 = param_1[2];
  uVar5 = param_1[1];
  *puVar2 = *param_1;
  pcVar4 = (code *)*puVar1;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = uVar3;
  puVar2[4] = puVar1;
  if (pcVar4 != (code *)0x0) {
    uVar3 = (*pcVar4)(param_1[1]);
    puVar2[1] = uVar3;
  }
  return puVar2;
}


// ===== 0049ef4c  FUN_0049ef4c =====

void FUN_0049ef4c(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049ef80  FUN_0049ef80 =====

void FUN_0049ef80(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  void *local_a0 [2];
  char local_89;
  undefined **local_88;
  void *local_80;
  char local_69;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)*param_1;
  lVar2 = *plVar3;
  FUN_004df134(auStack_60,7);
  FUN_0043bcdc(*(undefined8 *)(lVar2 + 0x20),auStack_60,(int)plVar3[5]);
  FUN_004e36c8(&local_88);
  FUN_004e36e0(local_a0,&local_88,auStack_60);
  (*(code *)plVar3[3])(plVar3 + 1,local_a0);
  if (local_89 < '\0') {
    operator_delete(local_a0[0]);
  }
  local_88 = &PTR_FUN_00d1f540;
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
  FUN_004e36c0(&local_88);
  FUN_004df880(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049f058  FUN_0049f058 =====

undefined8 * FUN_0049f058(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  uVar3 = param_1[3];
  puVar1 = (undefined8 *)param_1[4];
  uVar6 = param_1[2];
  uVar5 = param_1[1];
  *puVar2 = *param_1;
  pcVar4 = (code *)*puVar1;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = uVar3;
  puVar2[4] = puVar1;
  if (pcVar4 != (code *)0x0) {
    uVar3 = (*pcVar4)(param_1[1]);
    puVar2[1] = uVar3;
  }
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_1 + 5);
  return puVar2;
}


// ===== 0049f0c8  FUN_0049f0c8 =====

void FUN_0049f0c8(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049f0fc  FUN_0049f0fc =====

void FUN_0049f0fc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0049f108  FUN_0049f108 =====

void FUN_0049f108(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)*param_1;
  FUN_0043ebb0(auStack_68,*(undefined8 *)(*plVar2 + 0x20));
  (*(code *)plVar2[3])(plVar2 + 1,auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049f178  FUN_0049f178 =====

undefined8 * FUN_0049f178(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  uVar3 = param_1[3];
  puVar1 = (undefined8 *)param_1[4];
  uVar6 = param_1[2];
  uVar5 = param_1[1];
  *puVar2 = *param_1;
  pcVar4 = (code *)*puVar1;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = uVar3;
  puVar2[4] = puVar1;
  if (pcVar4 != (code *)0x0) {
    uVar3 = (*pcVar4)(param_1[1]);
    puVar2[1] = uVar3;
  }
  return puVar2;
}


// ===== 0049f1d8  FUN_0049f1d8 =====

void FUN_0049f1d8(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049f20c  FUN_0049f20c =====

void FUN_0049f20c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0049f218  FUN_0049f218 =====

void FUN_0049f218(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_70 [56];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)*param_1;
  FUN_0043ec98(auStack_70,*(undefined8 *)(*plVar2 + 0x20));
  (*(code *)plVar2[3])(plVar2 + 1,auStack_70);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049f288  FUN_0049f288 =====

undefined8 * FUN_0049f288(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  uVar3 = param_1[3];
  puVar1 = (undefined8 *)param_1[4];
  uVar6 = param_1[2];
  uVar5 = param_1[1];
  *puVar2 = *param_1;
  pcVar4 = (code *)*puVar1;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = uVar3;
  puVar2[4] = puVar1;
  if (pcVar4 != (code *)0x0) {
    uVar3 = (*pcVar4)(param_1[1]);
    puVar2[1] = uVar3;
  }
  return puVar2;
}


// ===== 0049f2e8  FUN_0049f2e8 =====

void FUN_0049f2e8(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049f31c  FUN_0049f31c =====

void FUN_0049f31c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  pcVar4 = *(code **)(param_1[0xd] + 8);
  *param_1 = &PTR_FUN_00d1e2d8;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
    plVar6 = (long *)param_1[6];
  }
  else {
    plVar6 = (long *)param_1[6];
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
      plVar6 = (long *)param_1[4];
      goto joined_r0x0049f3e0;
    }
  }
  plVar6 = (long *)param_1[4];
joined_r0x0049f3e0:
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
  plVar6 = (long *)param_1[2];
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


// ===== 0049f430  FUN_0049f430 =====

void FUN_0049f430(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  pcVar4 = *(code **)(param_1[0xd] + 8);
  *param_1 = &PTR_FUN_00d1e2d8;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
    plVar6 = (long *)param_1[6];
  }
  else {
    plVar6 = (long *)param_1[6];
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
      plVar6 = (long *)param_1[4];
      goto joined_r0x0049f4f4;
    }
  }
  plVar6 = (long *)param_1[4];
joined_r0x0049f4f4:
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
  plVar6 = (long *)param_1[2];
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


// ===== 0049f540  FUN_0049f540 =====

void FUN_0049f540(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  uVar4 = FUN_005ce36c();
  plVar7 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
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
  plVar7 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
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
  plVar7 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
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
  uVar5 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x0049f63c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x60))
            (param_1 + 0x50,param_1 + 0x38,*(undefined8 *)(param_1 + 0x70),uVar4,uVar5);
  return;
}


// ===== 0049f640  FUN_0049f640 =====

void FUN_0049f640(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[6];
  *param_1 = &PTR_FUN_00d1e300;
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
      plVar5 = (long *)param_1[4];
      goto joined_r0x0049f6d4;
    }
  }
  plVar5 = (long *)param_1[4];
joined_r0x0049f6d4:
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
  plVar5 = (long *)param_1[2];
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


// ===== 0049f724  FUN_0049f724 =====

void FUN_0049f724(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[6];
  *param_1 = &PTR_FUN_00d1e300;
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
      plVar5 = (long *)param_1[4];
      goto joined_r0x0049f7b8;
    }
  }
  plVar5 = (long *)param_1[4];
joined_r0x0049f7b8:
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
  plVar5 = (long *)param_1[2];
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


// ===== 0049f804  FUN_0049f804 =====

void FUN_0049f804(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
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
  plVar5 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
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
  plVar5 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
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


// ===== 0049f8dc  FUN_0049f8dc =====

void FUN_0049f8dc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0049f8e8  FUN_0049f8e8 =====

void FUN_0049f8e8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)*param_1;
  FUN_0043ed78(auStack_78,*(undefined8 *)(*plVar2 + 0x20));
  (*(code *)plVar2[3])(plVar2 + 1,auStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049f958  FUN_0049f958 =====

undefined8 * FUN_0049f958(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  uVar3 = param_1[3];
  puVar1 = (undefined8 *)param_1[4];
  uVar6 = param_1[2];
  uVar5 = param_1[1];
  *puVar2 = *param_1;
  pcVar4 = (code *)*puVar1;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = uVar3;
  puVar2[4] = puVar1;
  if (pcVar4 != (code *)0x0) {
    uVar3 = (*pcVar4)(param_1[1]);
    puVar2[1] = uVar3;
  }
  return puVar2;
}


// ===== 0049f9b8  FUN_0049f9b8 =====

void FUN_0049f9b8(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049f9ec  FUN_0049f9ec =====

void FUN_0049f9ec(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 0049fa10  FUN_0049fa10 =====

void FUN_0049fa10(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    FUN_004984f4(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 0049fa48  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0049fa4c  FUN_0049fa4c =====

void FUN_0049fa4c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0x30] + 8);
  *param_1 = &PTR_FUN_00d1e348;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[0x2d]);
  }
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    operator_delete((void *)param_1[0x2a]);
  }
  FUN_00499634(param_1 + 1);
  return;
}


// ===== 0049fa9c  FUN_0049fa9c =====

void FUN_0049fa9c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0x30] + 8);
  *param_1 = &PTR_FUN_00d1e348;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[0x2d]);
  }
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    operator_delete((void *)param_1[0x2a]);
  }
  FUN_00499634(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 0049faf4  FUN_0049faf4 =====

void FUN_0049faf4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  FUN_0049fb4c(param_1 + 8);
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x0049fb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x178))
            (param_1 + 0x168,param_1 + 0x150,*(undefined8 *)(param_1 + 0x188),uVar1,uVar2);
  return;
}


// ===== 0049fb4c  FUN_0049fb4c =====

/* WARNING: Removing unreachable block (ram,0x0049fd78) */
/* WARNING: Removing unreachable block (ram,0x0049fcb0) */
/* WARNING: Removing unreachable block (ram,0x0049fd14) */
/* WARNING: Removing unreachable block (ram,0x0049fddc) */

void FUN_0049fb4c(int *param_1)

{
  long *plVar1;
  int *piVar2;
  undefined8 uVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  long lVar10;
  int iVar11;
  bool bVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined1 auVar25 [16];
  void *local_1b8;
  void *local_1b0;
  undefined8 local_1a8;
  char *local_1a0;
  char **ppcStack_198;
  undefined8 local_190;
  long *local_180 [2];
  code *local_170;
  undefined **local_168;
  char *local_160;
  undefined8 uStack_158;
  void **local_150;
  int local_148;
  undefined8 local_144;
  char *local_138;
  char **ppcStack_130;
  undefined8 local_128;
  char *pcStack_120;
  void *local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  code *local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  code *local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  code *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_88;
  long local_78;
  
  lVar10 = tpidr_el0;
  local_78 = *(long *)(lVar10 + 0x28);
  uVar13 = FUN_00417e08();
  if ((uVar13 & 1) == 0) {
    local_150 = &local_1b8;
    local_160 = "../../discord_native_lib/src/voice_connection.cpp";
    uStack_158 = 0x1621;
    local_1a0 = "Create connection to ";
    ppcStack_198 = &local_160;
    FUN_00623bb0(&DAT_001f6e20,"../../discord_native_lib/src/voice_connection.cpp",0x1621,
                 "Create connection to ",param_1 + 2,&DAT_001ca603,(short)param_1[8]," with ssrc: ",
                 *param_1);
  }
  uStack_110 = 0;
  local_118 = (void *)0x0;
  pcStack_120 = (char *)0x0;
  local_128 = 0;
  ppcStack_130 = (char **)0x0;
  local_138 = (char *)0x0;
  local_f0 = FUN_004a06b0;
  local_e8 = (undefined8 *)&DAT_001f6f98;
  local_148 = *param_1;
  uStack_158 = *(undefined8 *)(param_1 + 0x4a);
  local_160 = *(char **)(param_1 + 0x48);
  local_150 = *(void ***)(param_1 + 0x4c);
  local_108 = 0;
  local_d0 = FUN_0040eaac;
  local_c8 = &DAT_001f1910;
  local_144 = CONCAT44(local_148 + (int)((ulong)DAT_001f50d0 >> 0x20),local_148 + (int)DAT_001f50d0)
  ;
  local_b0 = FUN_0040eab8;
  local_a8 = &DAT_001f1910;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  local_88 = 0;
  *(undefined1 *)((long)param_1 + 0x137) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  local_1b8 = (void *)0x0;
  local_1b0 = (void *)0x0;
  local_1a8 = 0;
  FUN_004a0230(&local_1a0,param_1 + 10,&local_1b8);
  if (local_138 != (char *)0x0) {
    for (; ppcStack_130 != (char **)local_138; ppcStack_130 = (char **)((long)ppcStack_130 + -0x18))
    {
    }
    ppcStack_130 = (char **)local_138;
    operator_delete(local_138);
  }
  local_128 = local_190;
  ppcStack_130 = ppcStack_198;
  local_138 = local_1a0;
  local_1a0 = (char *)0x0;
  ppcStack_198 = (char **)0x0;
  local_190 = 0;
  if (local_1b8 != (void *)0x0) {
    for (; local_1b0 != local_1b8; local_1b0 = (void *)((long)local_1b0 + -0x18)) {
    }
    local_1b0 = local_1b8;
    operator_delete(local_1b8);
  }
  local_1b8 = (void *)0x0;
  local_1b0 = (void *)0x0;
  local_1a8 = 0;
  FUN_004a03b8(&local_1a0,param_1 + 0x12,&local_1b8);
  if (pcStack_120 != (char *)0x0) {
    for (; (char *)local_118 != pcStack_120; local_118 = (void *)((long)local_118 + -0x48)) {
    }
    local_118 = pcStack_120;
    operator_delete(pcStack_120);
  }
  uStack_110 = local_190;
  local_118 = ppcStack_198;
  pcStack_120 = local_1a0;
  local_1a0 = (char *)0x0;
  ppcStack_198 = (char **)0x0;
  local_190 = 0;
  if (local_1b8 != (void *)0x0) {
    for (; local_1b0 != local_1b8; local_1b0 = (void *)((long)local_1b0 + -0x48)) {
    }
    local_1b0 = local_1b8;
    operator_delete(local_1b8);
  }
  puVar14 = local_e8;
  local_f0 = FUN_0040eaa0;
  local_e8 = &DAT_001f1910;
  if (*(code **)((long)puVar14 + 8) != (code *)0x0) {
    (**(code **)((long)puVar14 + 8))(local_100);
  }
  puVar14 = local_c8;
  local_f0 = *(code **)(param_1 + 0x34);
  local_e8 = *(undefined8 **)(param_1 + 0x36);
  *(code **)(param_1 + 0x34) = FUN_0040eaa0;
  *(undefined8 **)(param_1 + 0x36) = &DAT_001f1910;
  uStack_f8 = *(undefined8 *)(param_1 + 0x32);
  local_100 = *(undefined8 *)(param_1 + 0x30);
  local_d0 = FUN_0040eaac;
  local_c8 = &DAT_001f1910;
  if ((code *)puVar14[1] != (code *)0x0) {
    (*(code *)puVar14[1])(local_e0);
  }
  puVar14 = local_a8;
  local_d0 = *(code **)(param_1 + 0x3c);
  local_c8 = *(undefined8 **)(param_1 + 0x3e);
  *(code **)(param_1 + 0x3c) = FUN_0040eaac;
  *(undefined8 **)(param_1 + 0x3e) = &DAT_001f1910;
  uStack_d8 = *(undefined8 *)(param_1 + 0x3a);
  local_e0 = *(undefined8 *)(param_1 + 0x38);
  local_b0 = FUN_0040eab8;
  local_a8 = &DAT_001f1910;
  if ((code *)puVar14[1] != (code *)0x0) {
    (*(code *)puVar14[1])(local_c0);
  }
  local_b0 = *(code **)(param_1 + 0x44);
  local_a8 = *(undefined8 **)(param_1 + 0x46);
  uStack_b8 = *(undefined8 *)(param_1 + 0x42);
  local_c0 = *(undefined8 *)(param_1 + 0x40);
  *(code **)(param_1 + 0x44) = FUN_0040eab8;
  *(undefined8 **)(param_1 + 0x46) = &DAT_001f1910;
  FUN_00411268(&local_a0,param_1 + 0x1a);
  bVar7 = *(byte *)((long)param_1 + 0x97);
  uVar13 = *(ulong *)(param_1 + 0x22);
  if (-1 < (char)bVar7) {
    uVar13 = (ulong)bVar7;
  }
  if (uVar13 == 0) {
    piVar4 = *(int **)(param_1 + 0x14);
    piVar2 = *(int **)(param_1 + 0x12);
    piVar16 = piVar2;
    for (; (piVar2 != piVar4 && ((*piVar2 != 0 || (piVar16 = piVar2, (char)piVar2[0x11] == '\0'))));
        piVar2 = piVar2 + 0x12) {
      piVar16 = piVar4;
    }
    bVar12 = piVar16 == piVar4;
  }
  else {
    plVar19 = (long *)*(long *)(param_1 + 0x20);
    if (-1 < (char)bVar7) {
      plVar19 = (long *)(param_1 + 0x20);
    }
    if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
                 "__len == 0 || __s != nullptr",
                 "string_view::string_view(_CharT *, size_t): received nullptr");
    }
    if (uVar13 != 7) {
      local_88 = 1;
      goto LAB_0049ff44;
    }
    bVar12 = (int)*plVar19 == 0x61666564 && *(int *)((long)plVar19 + 3) == 0x746c7561;
  }
  local_88 = (uint)!bVar12;
LAB_0049ff44:
  lVar18 = *(long *)(param_1 + 0x4e);
  puVar14 = (undefined8 *)operator_new(0x200);
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &PTR_FUN_00d1e508;
  uVar21 = *(undefined8 *)(lVar18 + 0x30);
  lVar18 = *(long *)(lVar18 + 0x38);
  if (lVar18 != 0) {
    plVar19 = (long *)(lVar18 + 8);
    do {
      cVar8 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar12) {
        *plVar19 = *plVar19 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  FUN_00486704(puVar14 + 3,uVar21);
  lVar18 = *(long *)(param_1 + 0x4e);
  plVar19 = *(long **)(lVar18 + 0x48);
  *(undefined8 **)(lVar18 + 0x40) = puVar14 + 3;
  *(undefined8 **)(lVar18 + 0x48) = puVar14;
  if (plVar19 != (long *)0x0) {
    plVar20 = plVar19 + 1;
    do {
      lVar18 = *plVar20;
      cVar8 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar12) {
        *plVar20 = lVar18 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      FUN_005466cc(plVar19);
    }
  }
  lVar18 = FUN_005183d8();
  plVar20 = *(long **)(param_1 + 0x2e);
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  puVar14 = (undefined8 *)FUN_004a0700(plVar20);
  plVar19 = plVar20 + 1;
  do {
    lVar17 = *plVar19;
    cVar8 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar12) {
      *plVar19 = lVar17 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (lVar17 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
  }
  uVar21 = *puVar14;
  plVar19 = (long *)puVar14[1];
  if (plVar19 != (long *)0x0) {
    plVar20 = plVar19 + 1;
    do {
      cVar8 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar12) {
        *plVar20 = *plVar20 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x4e) + 0x10);
  lVar17 = *(long *)(*(long *)(param_1 + 0x4e) + 0x18);
  if (lVar17 != 0) {
    plVar20 = (long *)(lVar17 + 8);
    do {
      cVar8 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar12) {
        *plVar20 = *plVar20 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  auVar25 = FUN_0044e6b8(uVar21,&local_160,uVar3);
  plVar20 = *(long **)(*(long *)(param_1 + 0x4e) + 0x28);
  *(undefined1 (*) [16])(*(long *)(param_1 + 0x4e) + 0x20) = auVar25;
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 1;
    do {
      lVar17 = *plVar1;
      cVar8 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar17 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      FUN_005466cc(plVar20);
    }
  }
  if (plVar19 != (long *)0x0) {
    plVar20 = plVar19 + 1;
    do {
      lVar17 = *plVar20;
      cVar8 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar12) {
        *plVar20 = lVar17 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      FUN_005466cc(plVar19);
    }
  }
  lVar15 = FUN_005183d8();
  lVar17 = *(long *)(param_1 + 0x4e);
  lVar5 = *(long *)(param_1 + 0x50);
  iVar6 = *param_1;
  iVar11 = param_1[8];
  uVar21 = *(undefined8 *)(lVar17 + 0x40);
  cVar8 = *(char *)((long)param_1 + 0x22);
  if (lVar5 != 0) {
    plVar19 = (long *)(lVar5 + 0x10);
    do {
      cVar9 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar12) {
        *plVar19 = *plVar19 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  puVar14 = *(undefined8 **)(param_1 + 0x2c);
  lVar22 = *(long *)(param_1 + 0x26);
  lVar24 = *(long *)(param_1 + 0x2a);
  lVar23 = *(long *)(param_1 + 0x28);
  if (puVar14[1] != 0) {
    *(code **)(param_1 + 0x2a) = FUN_0040ea94;
    *(undefined8 **)(param_1 + 0x2c) = &DAT_001f1910;
  }
  local_170 = FUN_004a07b0;
  local_168 = &PTR_FUN_00d1e360;
  local_180[0] = (long *)operator_new(0x40);
  *local_180[0] = lVar17;
  local_180[0][1] = lVar5;
  local_180[0][2] = lVar22;
  local_180[0][5] = (long)puVar14;
  local_180[0][4] = lVar24;
  local_180[0][3] = lVar23;
  if (puVar14[1] != 0) {
    puVar14 = &DAT_001f1910;
  }
  local_180[0][6] = lVar18;
  local_180[0][7] = lVar15;
  FUN_00487034(uVar21,iVar6,param_1 + 2,(short)iVar11,cVar8 != '\0',local_180);
  if ((code *)local_168[1] != (code *)0x0) {
    (*(code *)local_168[1])(local_180[0]);
  }
  if ((code *)puVar14[1] != (code *)0x0) {
    (*(code *)puVar14[1])(lVar22);
  }
  FUN_004a058c(&local_160);
  if (*(long *)(lVar10 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a0230  FUN_004a0230 =====

void FUN_004a0230(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *__src;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 *__dest;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if ((char)param_2[3] == '\0') {
    uVar10 = param_3[1];
    uVar9 = *param_3;
    uVar7 = param_3[2];
    param_3[1] = 0;
    param_3[2] = 0;
    param_1[1] = uVar10;
    *param_1 = uVar9;
    param_1[2] = uVar7;
    *param_3 = 0;
  }
  else {
    lVar3 = *param_2;
    lVar4 = param_2[1];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar5 = lVar4 - lVar3;
    if (uVar5 != 0) {
      if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar5 >> 3) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pvVar6 = operator_new(uVar5);
      lVar8 = 0;
      *param_1 = pvVar6;
      param_1[2] = (void *)((long)pvVar6 + ((long)uVar5 >> 3) * 8);
      do {
        puVar2 = (undefined8 *)(lVar3 + lVar8);
        __dest = (undefined8 *)((long)pvVar6 + lVar8);
        if (*(char *)((long)puVar2 + 0x17) < '\0') {
          __src = (undefined8 *)*puVar2;
          uVar5 = puVar2[1];
          if (uVar5 < 0x17) {
            *(char *)((long)pvVar6 + lVar8 + 0x17) = (char)uVar5;
          }
          else {
            if (0x7fffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar1 = (uVar5 | 0xf) + 1;
            __dest = (undefined8 *)operator_new(uVar1);
            puVar2 = (undefined8 *)((long)pvVar6 + lVar8);
            puVar2[1] = uVar5;
            puVar2[2] = uVar1 | 0x8000000000000000;
            *puVar2 = __dest;
          }
          if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar5 + 1))) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                       ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range")
            ;
          }
          memmove(__dest,__src,uVar5 + 1);
        }
        else {
          uVar9 = puVar2[1];
          uVar7 = *puVar2;
          __dest[2] = puVar2[2];
          __dest[1] = uVar9;
          *__dest = uVar7;
        }
        lVar8 = lVar8 + 0x18;
      } while (lVar3 + lVar8 != lVar4);
      param_1[1] = (long)pvVar6 + lVar8;
    }
  }
  return;
}


// ===== 004a03b8  FUN_004a03b8 =====

void FUN_004a03b8(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined8 *__dest;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *__src;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if ((char)param_2[3] == '\0') {
    uVar12 = param_3[1];
    uVar11 = *param_3;
    uVar7 = param_3[2];
    param_3[1] = 0;
    param_3[2] = 0;
    param_1[1] = uVar12;
    *param_1 = uVar11;
    param_1[2] = uVar7;
    *param_3 = 0;
  }
  else {
    lVar4 = *param_2;
    puVar5 = (undefined4 *)param_2[1];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar8 = (long)puVar5 - lVar4;
    if (uVar8 != 0) {
      if (0x38e38e38e38e38e < (ulong)(((long)uVar8 >> 3) * -0x71c71c71c71c71c7)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pvVar6 = operator_new(uVar8);
      lVar10 = 0;
      *param_1 = pvVar6;
      param_1[1] = pvVar6;
      param_1[2] = (void *)((long)pvVar6 + ((long)uVar8 >> 3) * 8);
      do {
        puVar2 = (undefined4 *)(lVar4 + lVar10);
        puVar3 = (undefined4 *)((long)pvVar6 + lVar10);
        puVar9 = (undefined8 *)(puVar3 + 2);
        *puVar3 = *puVar2;
        if (*(char *)((long)puVar2 + 0x1f) < '\0') {
          uVar8 = *(ulong *)(puVar2 + 4);
          __src = *(undefined8 **)(puVar2 + 2);
          if (uVar8 < 0x17) {
            *(char *)((long)pvVar6 + lVar10 + 0x1f) = (char)uVar8;
            __dest = puVar9;
          }
          else {
            if (0x7fffffffffffffef < uVar8) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar1 = (uVar8 | 0xf) + 1;
            __dest = (undefined8 *)operator_new(uVar1);
            *puVar9 = __dest;
            *(ulong *)((long)pvVar6 + lVar10 + 0x10) = uVar8;
            *(ulong *)((long)pvVar6 + lVar10 + 0x18) = uVar1 | 0x8000000000000000;
          }
          if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar8 + 1))) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                       ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range")
            ;
          }
          memmove(__dest,__src,uVar8 + 1);
        }
        else {
          uVar11 = *(undefined8 *)(puVar2 + 4);
          uVar7 = *(undefined8 *)(puVar2 + 2);
          *(undefined8 *)(puVar3 + 6) = *(undefined8 *)(puVar2 + 6);
          *(undefined8 *)(puVar3 + 4) = uVar11;
          *puVar9 = uVar7;
        }
        uVar13 = *(undefined8 *)(puVar2 + 10);
        uVar12 = *(undefined8 *)(puVar2 + 8);
        uVar11 = *(undefined8 *)(puVar2 + 0xe);
        uVar7 = *(undefined8 *)(puVar2 + 0xc);
        lVar10 = lVar10 + 0x48;
        *(undefined8 *)((long)puVar3 + 0x3d) = *(undefined8 *)((long)puVar2 + 0x3d);
        *(undefined8 *)(puVar3 + 10) = uVar13;
        *(undefined8 *)(puVar3 + 8) = uVar12;
        *(undefined8 *)(puVar3 + 0xe) = uVar11;
        *(undefined8 *)(puVar3 + 0xc) = uVar7;
      } while (puVar2 + 0x12 != puVar5);
      param_1[1] = (long)pvVar6 + lVar10;
    }
  }
  return;
}


// ===== 004a058c  FUN_004a058c =====

/* WARNING: Removing unreachable block (ram,0x004a0620) */
/* WARNING: Removing unreachable block (ram,0x004a066c) */

void FUN_004a058c(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  if (*(char *)((long)param_1 + 0xd7) < '\0') {
    operator_delete((void *)param_1[0x18]);
  }
  if (*(code **)(param_1[0x17] + 8) != (code *)0x0) {
    (**(code **)(param_1[0x17] + 8))(param_1[0x14]);
  }
  if (*(code **)(param_1[0x13] + 8) != (code *)0x0) {
    (**(code **)(param_1[0x13] + 8))(param_1[0x10]);
  }
  if (*(code **)(param_1[0xf] + 8) != (code *)0x0) {
    (**(code **)(param_1[0xf] + 8))(param_1[0xc]);
  }
  pvVar3 = (void *)param_1[8];
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[9];
    pvVar1 = pvVar3;
    if (pvVar2 != pvVar3) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0x48);
      } while (pvVar2 != pvVar3);
      pvVar1 = (void *)param_1[8];
    }
    param_1[9] = pvVar3;
    operator_delete(pvVar1);
  }
  pvVar3 = (void *)param_1[5];
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[6];
    pvVar1 = pvVar3;
    if (pvVar2 != pvVar3) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0x18);
      } while (pvVar2 != pvVar3);
      pvVar1 = (void *)param_1[5];
    }
    param_1[6] = pvVar3;
    operator_delete(pvVar1);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}


// ===== 004a06b0  FUN_004a06b0 =====

void FUN_004a06b0(void)

{
  return;
}


// ===== 004a06b4  FUN_004a06b4 =====

void FUN_004a06b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1e508;
  FUN_005466c0();
  return;
}


// ===== 004a06c4  FUN_004a06c4 =====

void FUN_004a06c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1e508;
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 004a06f4  FUN_004a06f4 =====

void FUN_004a06f4(long param_1)

{
  FUN_00486da8(param_1 + 0x18);
  return;
}


// ===== 004a06fc  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004a0700  FUN_004a0700 =====

undefined8 FUN_004a0700(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  long local_48;
  char local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_1 + 0x18;
  local_40 = '\x01';
  FUN_005467a4();
  FUN_0051ffe8(param_1,&local_48);
  local_50 = 0;
  lVar3 = *(long *)(param_1 + 0x10);
  FUN_00518508(&local_50);
  if (lVar3 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    if (local_40 != '\0') {
      FUN_005467c8(local_48);
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return uVar2;
    }
  }
  else {
    FUN_00518510(auStack_58,(long *)(param_1 + 0x10));
    FUN_00518590(auStack_58);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a07b0  FUN_004a07b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a07b0(long *param_1,char *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  char *local_b0;
  undefined8 local_a8;
  long lStack_a0;
  undefined1 local_98 [8];
  void *local_90;
  undefined8 uStack_88;
  long lStack_80;
  void *local_78;
  undefined8 local_70;
  long lStack_68;
  uint local_5c;
  char local_58;
  uint local_54;
  char local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  param_1 = (long *)*param_1;
  if (param_1[1] == 0) {
    plVar10 = (long *)0x0;
LAB_004a08c4:
    local_5c = local_5c & 0xffffff00;
    local_58 = '\0';
    local_54 = local_54 & 0xffffff00;
    local_50 = '\0';
    uStack_88 = 0;
    local_90 = (void *)0x0;
    local_78 = (void *)0x0;
    lStack_80 = 0;
    lStack_68 = 0;
    local_70 = 0;
    local_98[0] = 0;
    local_b0 = (char *)operator_new(0x30);
    uVar8 = s_Disconnected_before_we_managed_t_00197703._16_8_;
    uVar12 = s_Disconnected_before_we_managed_t_00197703._8_8_;
    uVar2 = s_Disconnected_before_we_managed_t_00197703._0_8_;
    lStack_a0 = _UNK_001f3ca8;
    local_a8 = _DAT_001f3ca0;
    if ((local_b0 < "isconnected before we managed to connect") &&
       ("Disconnected before we managed to connect" < local_b0 + 0x29)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar6 = CONCAT71(s_Disconnected_before_we_managed_t_00197703._25_7_,
                     s_Disconnected_before_we_managed_t_00197703[0x18]);
    local_b0[0x29] = '\0';
    uVar9 = s_Disconnected_before_we_managed_t_00197703._33_8_;
    uVar7 = CONCAT17(s_Disconnected_before_we_managed_t_00197703[0x20],
                     s_Disconnected_before_we_managed_t_00197703._25_7_);
    *(undefined8 *)(local_b0 + 8) = uVar12;
    *(undefined8 *)local_b0 = uVar2;
    *(undefined8 *)(local_b0 + 0x18) = uVar6;
    *(undefined8 *)(local_b0 + 0x10) = uVar8;
    *(undefined8 *)(local_b0 + 0x21) = uVar9;
    *(undefined8 *)(local_b0 + 0x19) = uVar7;
    (*(code *)param_1[4])(param_1 + 2,local_98,&local_b0);
    if (lStack_a0 < 0) {
      operator_delete(local_b0);
    }
    if (lStack_68 < 0) {
      operator_delete(local_78);
    }
    if (lStack_80 < 0) {
      operator_delete(local_90);
    }
    if (plVar10 == (long *)0x0) goto LAB_004a09d8;
  }
  else {
    plVar10 = (long *)FUN_005466fc();
    if ((plVar10 == (long *)0x0) || (lVar13 = *param_1, lVar13 == 0)) goto LAB_004a08c4;
    FUN_004880fc(local_98,param_2);
    if (*param_2 != '\0') {
      if (local_58 == '\0') {
        local_58 = '\x01';
      }
      local_5c = (uint)((param_1[7] - param_1[6]) / 1000000);
      lVar11 = FUN_005183d8();
      if (local_50 == '\0') {
        local_50 = '\x01';
      }
      local_54 = (uint)((lVar11 - param_1[7]) / 1000000);
      uVar2 = *(undefined8 *)(lVar13 + 0x40);
      uVar12 = *(undefined8 *)(lVar13 + 0x20);
      if (*(long *)(lVar13 + 0x48) != 0) {
        plVar1 = (long *)(*(long *)(lVar13 + 0x48) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_0043efa8(uVar12,uVar2);
    }
    (*(code *)param_1[4])(param_1 + 2,local_98,param_3);
    if (lStack_68 < 0) {
      operator_delete(local_78);
    }
    if (lStack_80 < 0) {
      operator_delete(local_90);
    }
  }
  plVar1 = plVar10 + 1;
  do {
    lVar13 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar13 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar13 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_005466cc(plVar10);
  }
LAB_004a09d8:
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a0a2c  FUN_004a0a2c =====

undefined8 * FUN_004a0a2c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  
  puVar6 = (undefined8 *)operator_new(0x40);
  lVar2 = param_1[1];
  *puVar6 = *param_1;
  puVar6[1] = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar7 = param_1[4];
  puVar3 = (undefined8 *)param_1[5];
  uVar9 = param_1[2];
  pcVar8 = (code *)*puVar3;
  puVar6[3] = param_1[3];
  puVar6[2] = uVar9;
  puVar6[4] = uVar7;
  puVar6[5] = puVar3;
  if (pcVar8 != (code *)0x0) {
    uVar7 = (*pcVar8)(param_1[2]);
    puVar6[2] = uVar7;
  }
  uVar7 = param_1[6];
  puVar6[7] = param_1[7];
  puVar6[6] = uVar7;
  return puVar6;
}


// ===== 004a0ab4  FUN_004a0ab4 =====

void FUN_004a0ab4(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x28) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 0x10));
  }
  if (*(long *)((long)param_1 + 8) != 0) {
    FUN_005466cc();
  }
  operator_delete(param_1);
  return;
}


// ===== 004a0af4  FUN_004a0af4 =====

void FUN_004a0af4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1e390;
  FUN_00499634(param_1 + 1);
  return;
}


// ===== 004a0b04  FUN_004a0b04 =====

void FUN_004a0b04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1e390;
  FUN_00499634(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 004a0b34  FUN_004a0b34 =====

void FUN_004a0b34(long param_1)

{
  FUN_0049fb4c(param_1 + 8);
  return;
}


// ===== 004a0b3c  FUN_004a0b3c =====

void FUN_004a0b3c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  pcVar4 = *(code **)(param_1[0x11] + 8);
  *param_1 = &PTR_FUN_00d1e3b8;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(param_1[0xe]);
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    operator_delete((void *)param_1[0xb]);
  }
  if (*(code **)(param_1[10] + 8) != (code *)0x0) {
    (**(code **)(param_1[10] + 8))(param_1[7]);
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
      plVar6 = (long *)param_1[1];
      goto joined_r0x004a0c1c;
    }
  }
  plVar6 = (long *)param_1[1];
joined_r0x004a0c1c:
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
                    /* WARNING: Could not recover jumptable at 0x004a0bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x10))();
      return;
    }
  }
  return;
}


// ===== 004a0c2c  FUN_004a0c2c =====

void FUN_004a0c2c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  pcVar4 = *(code **)(param_1[0x11] + 8);
  *param_1 = &PTR_FUN_00d1e3b8;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(param_1[0xe]);
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    operator_delete((void *)param_1[0xb]);
  }
  if (*(code **)(param_1[10] + 8) != (code *)0x0) {
    (**(code **)(param_1[10] + 8))(param_1[7]);
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
      plVar6 = (long *)param_1[1];
      goto joined_r0x004a0d08;
    }
  }
  plVar6 = (long *)param_1[1];
joined_r0x004a0d08:
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
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 004a0d1c  FUN_004a0d1c =====

void FUN_004a0d1c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  FUN_004a0d74(param_1 + 8);
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x004a0d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x80))
            (param_1 + 0x70,param_1 + 0x58,*(undefined8 *)(param_1 + 0x90),uVar1,uVar2);
  return;
}


// ===== 004a0d74  FUN_004a0d74 =====

void FUN_004a0d74(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 local_1a8;
  undefined7 uStack_1a7;
  char local_191;
  undefined1 local_190 [8];
  void *local_188;
  undefined8 uStack_180;
  long local_178;
  void *pvStack_170;
  undefined8 local_168;
  undefined7 uStack_160;
  char cStack_159;
  undefined2 local_158;
  undefined1 local_154;
  undefined1 local_150;
  undefined1 local_14c;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8;
  code *local_d0;
  undefined *puStack_c8;
  code *local_b0;
  undefined8 *puStack_a8;
  code *local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  lVar9 = param_1[1];
  puVar6 = (undefined8 *)operator_new(0x200);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_00d1e508;
  uVar2 = *(undefined8 *)(lVar9 + 0x30);
  lVar9 = *(long *)(lVar9 + 0x38);
  if (lVar9 != 0) {
    plVar10 = (long *)(lVar9 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_00486704(puVar6 + 3,uVar2);
  lVar9 = param_1[1];
  plVar10 = *(long **)(lVar9 + 0x48);
  *(undefined8 **)(lVar9 + 0x40) = puVar6 + 3;
  *(undefined8 **)(lVar9 + 0x48) = puVar6;
  if (plVar10 != (long *)0x0) {
    plVar8 = plVar10 + 1;
    do {
      lVar9 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_005466cc(plVar10);
    }
  }
  plVar8 = (long *)*param_1;
  local_120 = 0;
  local_e8 = 0;
  local_d0 = FUN_004a06b0;
  puStack_c8 = &DAT_001f6f98;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_110 = 0;
  local_118 = 0;
  local_b0 = FUN_0040eaac;
  puStack_a8 = &DAT_001f1910;
  uStack_100 = 0;
  local_108 = 0;
  uStack_f0 = 0;
  local_f8 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_90 = FUN_0040eab8;
  puStack_88 = &DAT_001f1910;
  local_80 = 0;
  local_68 = 0;
  *param_1 = 0;
  puVar6 = (undefined8 *)FUN_004a0700(plVar8);
  plVar10 = plVar8 + 1;
  do {
    lVar9 = *plVar10;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  uVar2 = *puVar6;
  plVar10 = (long *)puVar6[1];
  if (plVar10 != (long *)0x0) {
    plVar8 = plVar10 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar7 = *(undefined8 *)(param_1[1] + 0x10);
  lVar9 = *(long *)(param_1[1] + 0x18);
  if (lVar9 != 0) {
    plVar8 = (long *)(lVar9 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  auVar11 = FUN_0044e8c4(uVar2,param_1 + 3,&local_140,uVar7);
  plVar8 = *(long **)(param_1[1] + 0x28);
  *(undefined1 (*) [16])(param_1[1] + 0x20) = auVar11;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_005466cc(plVar8);
    }
  }
  if (plVar10 != (long *)0x0) {
    plVar8 = plVar10 + 1;
    do {
      lVar9 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_005466cc(plVar10);
    }
  }
  lVar9 = param_1[1];
  uVar2 = *(undefined8 *)(lVar9 + 0x40);
  uVar7 = *(undefined8 *)(lVar9 + 0x20);
  if (*(long *)(lVar9 + 0x48) != 0) {
    plVar10 = (long *)(*(long *)(lVar9 + 0x48) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_0043efa8(uVar7,uVar2);
  local_190[0] = 1;
  local_154 = 0;
  uStack_180 = 0;
  uStack_160 = 0;
  cStack_159 = '\t';
  local_178 = 0x300000000000000;
  local_188 = (void *)0x706475;
  local_168 = 0x31;
  local_150 = 0;
  local_14c = 0;
  local_158 = 0x7a69;
  local_148 = 0;
  pvStack_170 = (void *)s_127_0_0_1_001e442f._0_8_;
  local_191 = '\0';
  local_1a8 = 0;
  (*(code *)param_1[8])(param_1 + 6,local_190,&local_1a8);
  if (local_191 < '\0') {
    operator_delete((void *)CONCAT71(uStack_1a7,local_1a8));
  }
  if (cStack_159 < '\0') {
    operator_delete(pvStack_170);
  }
  if (local_178 < 0) {
    operator_delete(local_188);
  }
  FUN_004a058c(&local_140);
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004a10a8  FUN_004a10a8 =====

void FUN_004a10a8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  pcVar4 = *(code **)(param_1[10] + 8);
  *param_1 = &PTR_FUN_00d1e3e0;
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
      plVar6 = (long *)param_1[1];
      goto joined_r0x004a1164;
    }
  }
  plVar6 = (long *)param_1[1];
joined_r0x004a1164:
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
                    /* WARNING: Could not recover jumptable at 0x004a1144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x10))();
      return;
    }
  }
  return;
}


// ===== 004a1174  FUN_004a1174 =====

void FUN_004a1174(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  pcVar4 = *(code **)(param_1[10] + 8);
  *param_1 = &PTR_FUN_00d1e3e0;
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
      plVar6 = (long *)param_1[1];
      goto joined_r0x004a122c;
    }
  }
  plVar6 = (long *)param_1[1];
joined_r0x004a122c:
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
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 004a1240  FUN_004a1240 =====

void FUN_004a1240(long param_1)

{
  FUN_004a0d74(param_1 + 8);
  return;
}


// ===== 004a1248  FUN_004a1248 =====

void FUN_004a1248(long *param_1)

{
  FUN_00437bf0(*(undefined8 *)(*param_1 + 0x20));
  return;
}


// ===== 004a1254  FUN_004a1254 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004a1254(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *******__src;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *******__dest;
  void *pvVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined4 uVar10;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *******local_a0;
  ulong uStack_98;
  undefined8 local_90;
  long local_80;
  long lStack_78;
  long local_70;
  undefined8 *local_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  plVar9 = (long *)*param_1;
  uVar8 = *(undefined8 *)(*plVar9 + 0x20);
  if (*(char *)((long)plVar9 + 0x57) < '\0') {
    __src = (undefined8 *******)plVar9[8];
    uVar2 = plVar9[9];
    if (uVar2 < 0x17) {
      __dest = &local_a0;
      local_90 = CONCAT17((char)uVar2,(undefined7)local_90);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 *******)operator_new(uVar1);
      local_90 = uVar1 | 0x8000000000000000;
      local_a0 = __dest;
      uStack_98 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined8 *******)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uStack_98 = plVar9[9];
    local_a0 = (undefined8 *******)plVar9[8];
    local_90 = plVar9[10];
  }
  lVar5 = plVar9[0xb];
  uVar10 = *(undefined4 *)((long)plVar9 + 0x5c);
  FUN_0042fb14(&local_b8,plVar9 + 1);
  local_70 = plVar9[6];
  local_68 = (undefined8 *)plVar9[7];
  lStack_78 = plVar9[5];
  local_80 = plVar9[4];
  if ((code *)*local_68 != (code *)0x0) {
    local_80 = (*(code *)*local_68)(plVar9[4]);
  }
  FUN_00437c2c(uVar10,uVar8,&local_a0,(int)lVar5,&local_b8,&local_80);
  if ((code *)local_68[1] != (code *)0x0) {
    (*(code *)local_68[1])(local_80);
  }
  puVar6 = local_b8;
  if (local_b8 != (undefined8 *)0x0) {
    while (puVar4 = local_b0, puVar4 != puVar6) {
      local_b0 = puVar4 + -3;
      pvVar7 = (void *)*local_b0;
      if (pvVar7 != (void *)0x0) {
        puVar4[-2] = pvVar7;
        operator_delete(pvVar7);
      }
    }
    local_b0 = puVar6;
    operator_delete(local_b8);
  }
  if ((long)local_90 < 0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004a142c  FUN_004a142c =====

undefined8 * FUN_004a142c(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  
  puVar3 = (undefined8 *)operator_new(0x60);
  *puVar3 = *param_1;
  FUN_0042fb14(puVar3 + 1,param_1 + 1);
  puVar5 = (undefined8 *)param_1[7];
  uVar7 = param_1[5];
  uVar4 = param_1[4];
  puVar3[6] = param_1[6];
  puVar3[5] = uVar7;
  puVar3[4] = uVar4;
  pcVar6 = (code *)*puVar5;
  puVar3[7] = puVar5;
  if (pcVar6 != (code *)0x0) {
    uVar4 = (*pcVar6)(param_1[4]);
    puVar3[4] = uVar4;
  }
  puVar5 = puVar3 + 8;
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    __src = (undefined8 *)param_1[8];
    uVar2 = param_1[9];
    if (uVar2 < 0x17) {
      *(char *)((long)puVar3 + 0x57) = (char)uVar2;
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      puVar5 = (undefined8 *)operator_new(uVar1);
      puVar3[8] = puVar5;
      puVar3[9] = uVar2;
      puVar3[10] = uVar1 | 0x8000000000000000;
    }
    if ((puVar5 <= __src) && (__src < (undefined8 *)((long)puVar5 + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(puVar5,__src,uVar2 + 1);
  }
  else {
    uVar7 = param_1[8];
    uVar4 = param_1[10];
    puVar3[9] = param_1[9];
    *puVar5 = uVar7;
    puVar3[10] = uVar4;
  }
  puVar3[0xb] = param_1[0xb];
  return puVar3;
}


// ===== 004a1560  FUN_004a1560 =====

void FUN_004a1560(void *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete(*(void **)((long)param_1 + 0x40));
  }
  pcVar3 = *(code **)(*(long *)((long)param_1 + 0x38) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(*(undefined8 *)((long)param_1 + 0x20));
  }
  puVar5 = *(undefined8 **)((long)param_1 + 8);
  if (puVar5 != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)((long)param_1 + 0x10);
    puVar2 = puVar5;
    if (puVar4 != puVar5) {
      do {
        puVar2 = puVar4 + -3;
        pvVar1 = (void *)*puVar2;
        if (pvVar1 != (void *)0x0) {
          puVar4[-2] = pvVar1;
          operator_delete(pvVar1);
        }
        puVar4 = puVar2;
      } while (puVar2 != puVar5);
      puVar2 = *(undefined8 **)((long)param_1 + 8);
    }
    *(undefined8 **)((long)param_1 + 0x10) = puVar5;
    operator_delete(puVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 004a15f8  FUN_004a15f8 =====

void FUN_004a15f8(long *param_1)

{
  ulong uVar1;
  undefined1 *__src;
  ulong uVar2;
  long lVar3;
  undefined1 **__dest;
  undefined8 uVar4;
  undefined1 *local_60;
  ulong uStack_58;
  undefined8 local_50;
  long local_48;
  
  __dest = &local_60;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  param_1 = (long *)*param_1;
  uVar4 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __src = (undefined1 *)param_1[1];
    uVar2 = param_1[2];
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
    local_50 = param_1[3];
    uStack_58 = param_1[2];
    local_60 = (undefined1 *)param_1[1];
  }
  FUN_00437e38(uVar4,&local_60);
  if ((long)local_50 < 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a171c  FUN_004a171c =====

undefined8 * FUN_004a171c(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *__dest;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)operator_new(0x20);
  cVar3 = *(char *)((long)param_1 + 0x1f);
  __dest = puVar4 + 1;
  *puVar4 = *param_1;
  if (cVar3 < '\0') {
    __src = (undefined8 *)param_1[1];
    uVar2 = param_1[2];
    if (uVar2 < 0x17) {
      *(char *)((long)puVar4 + 0x1f) = (char)uVar2;
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 *)operator_new(uVar1);
      puVar4[1] = __dest;
      puVar4[2] = uVar2;
      puVar4[3] = uVar1 | 0x8000000000000000;
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
    uVar6 = param_1[1];
    uVar5 = param_1[3];
    puVar4[2] = param_1[2];
    *__dest = uVar6;
    puVar4[3] = uVar5;
  }
  return puVar4;
}


// ===== 004a1800  FUN_004a1800 =====

void FUN_004a1800(void *param_1)

{
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete(*(void **)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 004a1830  FUN_004a1830 =====

void FUN_004a1830(long *param_1)

{
  FUN_004379ec(*(undefined8 *)(*param_1 + 0x20));
  return;
}


// ===== 004a183c  FUN_004a183c =====

void FUN_004a183c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xd] + 8);
  *param_1 = &PTR_FUN_00d1e448;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  if (*(code **)(param_1[6] + 8) != (code *)0x0) {
    (**(code **)(param_1[6] + 8))(param_1[3]);
  }
  if (param_1[2] != 0) {
    FUN_005466cc();
    return;
  }
  return;
}


// ===== 004a18b0  FUN_004a18b0 =====

void FUN_004a18b0(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xd] + 8);
  *param_1 = &PTR_FUN_00d1e448;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  if (*(code **)(param_1[6] + 8) != (code *)0x0) {
    (**(code **)(param_1[6] + 8))(param_1[3]);
  }
  if (param_1[2] != 0) {
    FUN_005466cc();
  }
  operator_delete(param_1);
  return;
}


// ===== 004a1920  FUN_004a1920 =====

void FUN_004a1920(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar4 = FUN_005ce36c();
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar5 = (long *)FUN_005466fc(*(long *)(param_1 + 0x10));
    if ((plVar5 == (long *)0x0) || (*(long *)(param_1 + 8) == 0)) {
      if (plVar5 == (long *)0x0) goto LAB_004a19a0;
    }
    else {
      (**(code **)(param_1 + 0x28))(param_1 + 0x18);
    }
    plVar1 = plVar5 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
LAB_004a19a0:
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x004a19cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x60))
            (param_1 + 0x50,param_1 + 0x38,*(undefined8 *)(param_1 + 0x70),uVar4,uVar6);
  return;
}


// ===== 004a19d0  FUN_004a19d0 =====

void FUN_004a19d0(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[6] + 8);
  *param_1 = &PTR_FUN_00d1e470;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[3]);
  }
  if (param_1[2] != 0) {
    FUN_005466cc();
    return;
  }
  return;
}


// ===== 004a1a20  FUN_004a1a20 =====

void FUN_004a1a20(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[6] + 8);
  *param_1 = &PTR_FUN_00d1e470;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[3]);
  }
  if (param_1[2] != 0) {
    FUN_005466cc();
  }
  operator_delete(param_1);
  return;
}


// ===== 004a1a6c  FUN_004a1a6c =====

void FUN_004a1a6c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar4 = (long *)FUN_005466fc();
    if ((plVar4 == (long *)0x0) || (*(long *)(param_1 + 8) == 0)) {
      if (plVar4 == (long *)0x0) {
        return;
      }
    }
    else {
      (**(code **)(param_1 + 0x28))(param_1 + 0x18);
    }
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
      return;
    }
  }
  return;
}


// ===== 004a1af0  FUN_004a1af0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a1af0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  long lVar7;
  double dVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0x3dcccccd;
  memset((void *)((long)param_1 + 0xc),0,0x1c04);
  uVar1 = FUN_005527e8(0x100,0,0,0);
  lVar9 = _UNK_001f1d08;
  lVar7 = _DAT_001f1d00;
  auVar10 = NEON_fmov(0xbfe0000000000000,8);
  lVar2 = 0;
  *param_1 = uVar1;
  do {
    auVar5._8_8_ = lVar9;
    auVar5._0_8_ = lVar7;
    auVar5 = NEON_ucvtf(auVar5,8);
    dVar6 = auVar5._0_8_ * 0.001953125;
    dVar8 = auVar5._8_8_ * 0.001953125;
    dVar3 = cos(dVar8 * 6.283185307179586);
    dVar4 = cos(dVar6 * 6.283185307179586);
    dVar8 = cos(dVar8 * 12.566370614359172);
    dVar6 = cos(dVar6 * 12.566370614359172);
    lVar7 = lVar7 + 2;
    lVar9 = lVar9 + 2;
    *(ulong *)((long)param_1 + lVar2 + 0x1010) =
         CONCAT44((float)(auVar10._8_8_ * dVar3 + 0.42 + dVar8 * 0.08),
                  (float)(auVar10._0_8_ * dVar4 + 0.42 + dVar6 * 0.08));
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x800);
  return;
}


// ===== 004a1c80  FUN_004a1c80 =====

void FUN_004a1c80(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    *param_1 = 0;
  }
  return;
}


// ===== 004a1cac  FUN_004a1cac =====

void FUN_004a1cac(undefined8 *param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  short *psVar8;
  ulong uVar9;
  long lVar10;
  short *psVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  long local_878 [257];
  
  lVar1 = tpidr_el0;
  local_878[0x100] = *(long *)(lVar1 + 0x28);
  if (param_3 < 0x201) {
    if (param_3 == 0x200) {
      lVar12 = 0;
    }
    else {
      lVar12 = 0x200 - param_3;
      memmove(param_1 + 2,(void *)((long)(param_1 + 2) + param_3 * 4),lVar12 * 4);
      if (param_3 == 0) goto LAB_004a1eb0;
    }
  }
  else {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4ef8,"../../discord_native_lib/src/volume_analyzer.cpp",0x13a,
                   "VolumeAnalyzer::AddSamples: sampleCount ",param_3,
                   " is greater than BufferSize, ",0x200,", clamping to BufferSize");
    }
    lVar12 = 0;
    param_3 = 0x200;
  }
  lVar6 = 0;
  uVar5 = 0;
  psVar8 = (short *)(param_2 + 0x10);
  uVar7 = param_4 & 0xfffffffffffffff0;
  do {
    fVar14 = 0.0;
    fVar17 = 0.0;
    if (param_4 != 0) {
      uVar9 = uVar7;
      psVar11 = psVar8;
      if (param_4 < 0x10) {
        uVar9 = 0;
        fVar17 = fVar14;
      }
      else {
        do {
          uVar9 = uVar9 - 0x10;
          auVar21._0_4_ = (int)psVar11[-8];
          auVar21._4_4_ = (int)psVar11[-7];
          auVar21._8_4_ = (int)psVar11[-6];
          auVar21._12_4_ = (int)psVar11[-5];
          auVar20._0_4_ = (int)psVar11[-4];
          auVar20._4_4_ = (int)psVar11[-3];
          auVar20._8_4_ = (int)psVar11[-2];
          auVar20._12_4_ = (int)psVar11[-1];
          auVar21 = NEON_scvtf(auVar21,4);
          auVar20 = NEON_scvtf(auVar20,4);
          auVar23._0_4_ = (int)*psVar11;
          auVar23._4_4_ = (int)psVar11[1];
          auVar23._8_4_ = (int)psVar11[2];
          auVar23._12_4_ = (int)psVar11[3];
          auVar22._0_4_ = (int)psVar11[4];
          auVar22._4_4_ = (int)psVar11[5];
          auVar22._8_4_ = (int)psVar11[6];
          auVar22._12_4_ = (int)psVar11[7];
          auVar23 = NEON_scvtf(auVar23,4);
          auVar22 = NEON_scvtf(auVar22,4);
          fVar17 = fVar14 + auVar21._0_4_ + auVar21._4_4_ + auVar21._8_4_ + auVar21._12_4_ +
                   auVar20._0_4_ + auVar20._4_4_ + auVar20._8_4_ + auVar20._12_4_ + auVar23._0_4_ +
                   auVar23._4_4_ + auVar23._8_4_ + auVar23._12_4_ + auVar22._0_4_ + auVar22._4_4_ +
                   auVar22._8_4_ + auVar22._12_4_;
          psVar11 = psVar11 + 0x10;
          fVar14 = fVar17;
        } while (uVar9 != 0);
        uVar9 = uVar7;
        if (uVar7 == param_4) goto LAB_004a1d9c;
      }
      lVar10 = param_4 - uVar9;
      psVar11 = (short *)(param_2 + (uVar9 + lVar6) * 2);
      do {
        lVar10 = lVar10 + -1;
        fVar17 = fVar17 + (float)(int)*psVar11;
        psVar11 = psVar11 + 1;
      } while (lVar10 != 0);
    }
LAB_004a1d9c:
    lVar10 = uVar5 + lVar12;
    uVar5 = uVar5 + 1;
    psVar8 = psVar8 + param_4;
    lVar6 = lVar6 + param_4;
    *(float *)((long)param_1 + lVar10 * 4 + 0x10) = (1.0 / (float)(param_4 + 0x7fff)) * fVar17;
  } while (uVar5 != param_3);
LAB_004a1eb0:
  lVar12 = 0;
  do {
    uVar16 = *(undefined8 *)((long)param_1 + lVar12 + 0x18);
    uVar15 = *(undefined8 *)((long)param_1 + lVar12 + 0x10);
    uVar19 = *(undefined8 *)((long)param_1 + lVar12 + 0x28);
    uVar18 = *(undefined8 *)((long)param_1 + lVar12 + 0x20);
    auVar20 = *(undefined1 (*) [16])((long)param_1 + lVar12 + 0x1010);
    auVar21 = *(undefined1 (*) [16])((long)param_1 + lVar12 + 0x1020);
    lVar6 = lVar12 + 0x20;
    *(ulong *)((long)local_878 + lVar12 + 8) =
         CONCAT44((float)((ulong)uVar16 >> 0x20) * auVar20._12_4_,(float)uVar16 * auVar20._8_4_);
    *(ulong *)((long)local_878 + lVar12) =
         CONCAT44((float)((ulong)uVar15 >> 0x20) * auVar20._4_4_,(float)uVar15 * auVar20._0_4_);
    *(ulong *)((long)local_878 + lVar12 + 0x18) =
         CONCAT44((float)((ulong)uVar19 >> 0x20) * auVar21._12_4_,(float)uVar19 * auVar21._8_4_);
    *(ulong *)((long)local_878 + lVar12 + 0x10) =
         CONCAT44((float)((ulong)uVar18 >> 0x20) * auVar21._4_4_,(float)uVar18 * auVar21._0_4_);
    lVar12 = lVar6;
  } while (lVar6 != 0x800);
  FUN_00553140(*param_1,local_878,param_1 + 0x102);
  fVar17 = *(float *)(param_1 + 1);
  fVar14 = 1e-05;
  lVar12 = 0x1810;
  uVar5 = 0;
  do {
    fVar13 = hypotf(*(float *)((long)param_1 + uVar5 * 4 + 0x810),
                    *(float *)((long)param_1 + uVar5 * 4 + 0x814));
    fVar13 = (float)NEON_fmadd(fVar17,*(undefined4 *)((long)param_1 + lVar12),
                               fVar13 * 0.001953125 * (1.0 - fVar17));
    *(float *)((long)param_1 + lVar12) = fVar13;
    lVar12 = lVar12 + 4;
    bVar2 = false;
    bVar3 = true;
    bVar4 = false;
    if (fVar13 < 1.0) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar13) && !NAN(fVar14)) {
        bVar2 = fVar13 < fVar14;
        bVar3 = fVar13 == fVar14;
        bVar4 = false;
      }
    }
    if ((bVar3 || bVar2 != bVar4) || uVar5 < 8) {
      fVar13 = fVar14;
    }
    fVar14 = fVar13;
    bVar2 = uVar5 < 0x1fe;
    uVar5 = uVar5 + 2;
  } while (bVar2);
  fVar14 = log10f(fVar14);
  *(float *)((long)param_1 + 0xc) = fVar14 * 20.0;
  if (*(long *)(lVar1 + 0x28) == local_878[0x100]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a1fb0  FUN_004a1fb0 =====

undefined4 FUN_004a1fb0(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


// ===== 004a1fb8  FUN_004a1fb8 =====

void FUN_004a1fb8(void)

{
  long lVar1;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_004a2000(auStack_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a2000  FUN_004a2000 =====

undefined1  [16] FUN_004a2000(void)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  plVar3 = (long *)operator_new(0x80);
  *plVar3 = (long)&PTR_FUN_00d1e540;
  plVar3[5] = 0;
  plVar3[4] = 0;
  plVar3[7] = 0;
  plVar3[6] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar6 = plVar3 + 1;
  *plVar6 = 0;
  plVar7 = plVar3 + 2;
  *plVar7 = 0;
  plVar5 = plVar3 + 3;
  *plVar5 = (long)&PTR_FUN_00d1e5b0;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  *(undefined8 *)((long)plVar3 + 0x71) = 0;
  *(undefined8 *)((long)plVar3 + 0x69) = 0;
  FUN_007b5d10(plVar3 + 0xb);
  *(undefined1 *)(plVar3 + 0xf) = 1;
  *plVar5 = (long)&PTR_FUN_00d1e578;
  if (plVar3[5] == 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3[4] = (long)plVar5;
    plVar3[5] = (long)plVar3;
  }
  else {
    if (*(long *)(plVar3[5] + 8) != -1) goto LAB_004a2108;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3[4] = (long)plVar5;
    plVar3[5] = (long)plVar3;
    FUN_005466cc();
  }
  do {
    lVar4 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_005466cc(plVar3);
  }
LAB_004a2108:
  auVar8._8_8_ = plVar3;
  auVar8._0_8_ = plVar5;
  return auVar8;
}


// ===== 004a2120  FUN_004a2120 =====

void FUN_004a2120(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1e540;
  FUN_005466c0();
  return;
}


// ===== 004a2130  FUN_004a2130 =====

void FUN_004a2130(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1e540;
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 004a2160  FUN_004a2160 =====

void FUN_004a2160(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004a2168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 004a216c  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004a2170  FUN_004a2170 =====

void FUN_004a2170(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1e5b0;
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


// ===== 004a21c8  FUN_004a21c8 =====

void FUN_004a21c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1e5b0;
  if (*(char *)(param_1 + 0xc) != '\0') {
    FUN_007b5d24(param_1 + 8);
  }
  FUN_00546ab0(param_1 + 3);
  if (param_1[2] != 0) {
    FUN_005466cc();
  }
  operator_delete(param_1);
  return;
}


// ===== 004a221c  FUN_004a221c =====

void FUN_004a221c(void)

{
  return;
}


// ===== 004a2220  FUN_004a2220 =====

void FUN_004a2220(void)

{
  return;
}


// ===== 004a2224  FUN_004a2224 =====

undefined8 FUN_004a2224(void)

{
  return 0x100000000;
}


// ===== 004a222c  FUN_004a222c =====

void FUN_004a222c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4a2230);
  (*pcVar1)();
}


// ===== 004a2230  FUN_004a2230 =====

void FUN_004a2230(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 004a2238  FUN_004a2238 =====

void FUN_004a2238(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 004a2250  FUN_004a2250 =====

void FUN_004a2250(void)

{
  return;
}


// ===== 004a2254  FUN_004a2254 =====

void FUN_004a2254(void)

{
  return;
}


// ===== 004a2258  FUN_004a2258 =====

void FUN_004a2258(void)

{
  return;
}


// ===== 004a225c  FUN_004a225c =====

void FUN_004a225c(void)

{
  return;
}


// ===== 004a2260  FUN_004a2260 =====

void FUN_004a2260(void)

{
  return;
}


// ===== 004a2264  FUN_004a2264 =====

void FUN_004a2264(void)

{
  return;
}


// ===== 004a2268  FUN_004a2268 =====

void FUN_004a2268(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_00d1c7a8;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  return;
}


// ===== 004a2288  FUN_004a2288 =====

void FUN_004a2288(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[5];
  param_1[5] = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  *param_1 = &PTR_FUN_00d193e8;
  if (param_1[1] != 0) {
    FUN_005ce374(param_1[1],PTR_free_00d51ac0);
    param_1[1] = 0;
  }
  return;
}


// ===== 004a22d8  FUN_004a22d8 =====

void FUN_004a22d8(void)

{
  return;
}


// ===== 004a22dc  FUN_004a22dc =====

void FUN_004a22dc(void)

{
  return;
}


// ===== 004a22e0  FUN_004a22e0 =====

undefined4 FUN_004a22e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 10;
  if (param_1 != 3) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 004a22f0  FUN_004a22f0 =====

void FUN_004a22f0(void)

{
  return;
}


// ===== 004a22f4  FUN_004a22f4 =====

void FUN_004a22f4(void)

{
  return;
}


// ===== 004a22f8  FUN_004a22f8 =====

void FUN_004a22f8(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = param_2;
  plVar1 = (long *)FUN_004a2934();
  if (plVar1 == (long *)0x0) {
    __android_log_print(6,"DiscordJNI","Unable to access JNIEnv while registering %s",param_2);
  }
  lVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
  if (lVar2 == 0) {
    __android_log_print(6,"DiscordJNI","Failed to lookup class %s",param_2);
  }
  lVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1,lVar2);
  if (lVar2 == 0) {
    __android_log_print(6,"DiscordJNI","Failed to create global reference for class %s",param_2);
  }
  param_1[1] = lVar2;
  return;
}


// ===== 004a23c0  FUN_004a23c0 =====

void FUN_004a23c0(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_004a2934();
                    /* WARNING: Could not recover jumptable at 0x004a23e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xb0))(plVar1,*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 004a23ec  FUN_004a23ec =====

void FUN_004a23ec(long *param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_004a2934();
  plVar1 = (long *)*param_4;
  if (-1 < *(char *)((long)param_4 + 0x17)) {
    plVar1 = param_4;
  }
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,param_2[1],param_3,plVar1);
  *param_1 = lVar3;
  if (lVar3 != 0) {
    return;
  }
  plVar1 = (long *)*param_4;
  if (-1 < *(char *)((long)param_4 + 0x17)) {
    plVar1 = param_4;
  }
  __android_log_print(6,"DiscordJNI","Failed to lookup method %s.%s of type %s",*param_2,param_3,
                      plVar1);
  return;
}


// ===== 004a2488  FUN_004a2488 =====

void FUN_004a2488(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  *param_1 = param_2[1];
  plVar2 = (long *)FUN_004a2934();
  plVar1 = (long *)*param_4;
  if (-1 < *(char *)((long)param_4 + 0x17)) {
    plVar1 = param_4;
  }
  lVar3 = (**(code **)(*plVar2 + 0x388))(plVar2,*param_1,param_3,plVar1);
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    return;
  }
  plVar1 = (long *)*param_4;
  if (-1 < *(char *)((long)param_4 + 0x17)) {
    plVar1 = param_4;
  }
  __android_log_print(6,"DiscordJNI","Failed to lookup static method %s.%s of type %s",*param_2,
                      param_3,plVar1);
  return;
}


// ===== 004a252c  FUN_004a252c =====

void FUN_004a252c(long *param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_004a2934();
  plVar1 = (long *)*param_4;
  if (-1 < *(char *)((long)param_4 + 0x17)) {
    plVar1 = param_4;
  }
  lVar3 = (**(code **)(*plVar2 + 0x2f0))(plVar2,param_2[1],param_3,plVar1);
  *param_1 = lVar3;
  if (lVar3 != 0) {
    return;
  }
  plVar1 = (long *)*param_4;
  if (-1 < *(char *)((long)param_4 + 0x17)) {
    plVar1 = param_4;
  }
  __android_log_print(6,"DiscordJNI","Failed to lookup field %s.%s of type %s",*param_2,param_3,
                      plVar1);
  return;
}


// ===== 004a25c8  FUN_004a25c8 =====

void FUN_004a25c8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  *param_1 = param_2[1];
  plVar2 = (long *)FUN_004a2934();
  plVar1 = (long *)*param_4;
  if (-1 < *(char *)((long)param_4 + 0x17)) {
    plVar1 = param_4;
  }
  lVar3 = (**(code **)(*plVar2 + 0x480))(plVar2,param_2[1],param_3,plVar1);
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    return;
  }
  plVar1 = (long *)*param_4;
  if (-1 < *(char *)((long)param_4 + 0x17)) {
    plVar1 = param_4;
  }
  __android_log_print(6,"DiscordJNI","Failed to lookup static field %s.%s of type %s",*param_2,
                      param_3,plVar1);
  return;
}


// ===== 004a266c  FUN_004a266c =====

void FUN_004a266c(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
    *param_1 = 0;
  }
  return;
}


// ===== 004a26a8  FUN_004a26a8 =====

void FUN_004a26a8(undefined8 *param_1)

{
  void *pvVar1;
  code *pcVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar3 = (void *)*param_1;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  pvVar4 = pvVar3;
  pvVar1 = (void *)param_1[1];
  if ((void *)param_1[1] != pvVar3) {
    do {
      pvVar4 = (void *)((long)pvVar1 + -0x20);
      pcVar2 = *(code **)(*(long *)((long)pvVar1 + -8) + 8);
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(*(undefined8 *)((long)pvVar1 + -0x20));
      }
      pvVar1 = pvVar4;
    } while (pvVar4 != pvVar3);
    pvVar4 = (void *)*param_1;
  }
  param_1[1] = pvVar3;
  operator_delete(pvVar4);
  return;
}


// ===== 004a2728  JNI_OnLoad =====

undefined8 JNI_OnLoad(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  void *__s;
  
  if (DAT_00d60ca8 != 0) {
    plVar4 = (long *)FUN_004a2934();
    lVar5 = (**(code **)(*plVar4 + 0x30))(plVar4,"com/discord/socialsdk/DiscordSocialSdkInit");
    cVar2 = (**(code **)(*plVar4 + 0x720))(plVar4);
    if (cVar2 != '\0') {
      (**(code **)(*plVar4 + 0x88))(plVar4);
    }
    if (lVar5 != 0) {
      return 0x10004;
    }
    if (DAT_00d60ca8 != 0) {
      __android_log_print(6,"DiscordJNI","JNI_OnLoad called more than once!");
    }
  }
  DAT_00d60ca8 = param_1;
  FUN_0089fcd8(param_1);
  iVar3 = pthread_key_create(&DAT_00d60cb0,FUN_004a2a00);
  plVar4 = (long *)FUN_004a2934(iVar3);
  lVar5 = (**(code **)(*plVar4 + 0x30))(plVar4,"com/discord/MainApplication");
  cVar2 = (**(code **)(*plVar4 + 0x720))(plVar4);
  if (cVar2 != '\0') {
    (**(code **)(*plVar4 + 0x88))(plVar4);
  }
  lVar6 = (**(code **)(*plVar4 + 0x30))(plVar4,"com/discord/socialsdk/DiscordSocialSdkInit");
  cVar2 = (**(code **)(*plVar4 + 0x720))(plVar4);
  if (cVar2 != '\0') {
    (**(code **)(*plVar4 + 0x88))(plVar4);
  }
  if (lVar5 == 0 && lVar6 == 0) {
    __android_log_print(6,"DiscordJNI","Apparently not hosted in a known app or Social SDK");
    lVar6 = DAT_00d60c78;
    lVar1 = DAT_00d60c80;
  }
  else {
    lVar6 = DAT_00d60c78;
    lVar1 = DAT_00d60c80;
    if (lVar5 != 0) {
      __android_log_print(4,"DiscordJNI","loading ClassMapRN");
      __s = operator_new(0x7c8);
      memset(__s,0,0x7c8);
      FUN_004a2a48(__s);
      lVar6 = DAT_00d60c78;
      lVar1 = DAT_00d60c80;
      DAT_00d60cb8 = __s;
    }
  }
  for (; lVar5 = DAT_00d60c80, lVar6 != DAT_00d60c80; lVar6 = lVar6 + 0x20) {
    DAT_00d60c80 = lVar1;
    (**(code **)(lVar6 + 0x10))(lVar6,param_1,param_2);
    lVar1 = DAT_00d60c80;
    DAT_00d60c80 = lVar5;
  }
  DAT_00d60c80 = lVar1;
  FUN_00ad9e60(param_1);
  thunk_FUN_007ec9b4();
  FUN_00ad9d70();
  FUN_00adb298();
  return 0x10004;
}


// ===== 004a2934  FUN_004a2934 =====

void FUN_004a2934(void)

{
  long lVar1;
  int iVar2;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = pthread_getspecific(DAT_00d60cb0);
  if (local_40 == (void *)0x0) {
    iVar2 = (**(code **)(*DAT_00d60ca8 + 0x30))(DAT_00d60ca8,&local_40,0x10004);
    if (iVar2 == -2) {
      (**(code **)(*DAT_00d60ca8 + 0x20))(DAT_00d60ca8,&local_40,0);
      pthread_setspecific(DAT_00d60cb0,local_40);
    }
    if (local_40 == (void *)0x0) {
      __android_log_print(6,"DiscordJNI","Unable to get JNIEnv; Failed to attach.");
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_40);
}


// ===== 004a2a00  FUN_004a2a00 =====

void FUN_004a2a00(void)

{
  if (DAT_00d60ca8 == (long *)0x0) {
    __android_log_print(6,"DiscordJNI","Attached thread exiting after VM is unloaded!");
  }
                    /* WARNING: Could not recover jumptable at 0x004a2a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_00d60ca8 + 0x28))();
  return;
}


// ===== 004a2a48  FUN_004a2a48 =====

void FUN_004a2a48(long param_1)

{
  long lVar1;
  long lVar2;
  undefined2 local_60;
  undefined6 uStack_5e;
  char local_49;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_004a4578();
  lVar1 = param_1 + 0x168;
  FUN_004a22f8(lVar1,"com/discord/native/engine/VideoInputDeviceFacing");
  DAT_00d60d10 = param_1 + 0x178;
  *(long *)(param_1 + 0x178) = lVar1;
  FUN_004a54dc(&local_60);
  FUN_004a23ec(param_1 + 0x180,lVar1,&DAT_001b0a79,&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  FUN_004a7834(param_1 + 0x188,lVar1,"Front");
  FUN_004a7834(param_1 + 0x1a0,lVar1,&DAT_001d2ec6);
  FUN_004a7834(param_1 + 0x1b8,lVar1,"Unknown");
  FUN_004a4794(param_1 + 0x1d0);
  FUN_004a4920(param_1 + 0x208);
  FUN_004a4a78(param_1 + 0x240);
  FUN_004a4c04(param_1 + 0x278);
  FUN_004a4dc4(param_1 + 0x2b8);
  lVar1 = param_1 + 0x310;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeEngine");
  DAT_00d60d40 = param_1 + 800;
  *(long *)(param_1 + 800) = lVar1;
  local_49 = '\x01';
  if ((&local_60 < &UNK_001b9790) && (&UNK_001b978f < (undefined *)((ulong)&local_60 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_60 = 0x4a;
  FUN_004a252c(param_1 + 0x328,lVar1,"nativeInstance",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x330;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeEngine$GetAudioInputDevicesCallback");
  DAT_00d60d48 = param_1 + 0x340;
  *(long *)(param_1 + 0x340) = lVar1;
  FUN_004a8f70(&local_60);
  FUN_004a23ec(param_1 + 0x348,lVar1,"onDevices",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x350;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeEngine$GetAudioOutputDevicesCallback");
  DAT_00d60d50 = param_1 + 0x360;
  *(long *)(param_1 + 0x360) = lVar1;
  FUN_004a92b4(&local_60);
  FUN_004a23ec(param_1 + 0x368,lVar1,"onDevices",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x370;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeEngine$GetVideoInputDevicesCallback");
  DAT_00d60d58 = param_1 + 0x380;
  *(long *)(param_1 + 0x380) = lVar1;
  FUN_004a9718(&local_60);
  FUN_004a23ec(param_1 + 0x388,lVar1,"onDevices",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x390;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeEngine$DeviceChangeCallback");
  DAT_00d60d60 = param_1 + 0x3a0;
  *(long *)(param_1 + 0x3a0) = lVar1;
  FUN_004a9b7c(&local_60);
  FUN_004a23ec(param_1 + 0x3a8,lVar1,"onChange",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x3b0;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeEngine$VideoFrameCallback");
  DAT_00d60d68 = param_1 + 0x3c0;
  *(long *)(param_1 + 0x3c0) = lVar1;
  FUN_004a9f2c(&local_60);
  FUN_004a23ec(param_1 + 0x3c8,lVar1,"onFrame",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x3d0;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeEngine$OnNoInputCallback");
  DAT_00d60d70 = param_1 + 0x3e0;
  *(long *)(param_1 + 0x3e0) = lVar1;
  FUN_004aa428(&local_60);
  FUN_004a23ec(param_1 + 1000,lVar1,"onNoInput",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x3f0;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeEngine$OnVoiceCallback");
  DAT_00d60d78 = param_1 + 0x400;
  *(long *)(param_1 + 0x400) = lVar1;
  FUN_004aa648(&local_60);
  FUN_004a23ec(param_1 + 0x408,lVar1,"onVoice",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x410;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeEngine$GetAudioSubsystemCallback");
  DAT_00d60d80 = param_1 + 0x420;
  *(long *)(param_1 + 0x420) = lVar1;
  FUN_004a7a18(&local_60);
  FUN_004a23ec(param_1 + 0x428,lVar1,"onAudioSubsystem",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x430;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeEngine$GetCodecCapabilitiesCallback");
  DAT_00d60d88 = param_1 + 0x440;
  *(long *)(param_1 + 0x440) = lVar1;
  FUN_004aa97c(&local_60);
  FUN_004a23ec(param_1 + 0x448,lVar1,"onCodecCapabilities",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x450;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeEngine$GetCodecSurveyCallback");
  DAT_00d60d90 = param_1 + 0x460;
  *(long *)(param_1 + 0x460) = lVar1;
  FUN_004aa97c(&local_60);
  FUN_004a23ec(param_1 + 0x468,lVar1,"onCodecSurvey",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x470;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeEngine$GetRankedRtcRegionsCallback");
  DAT_00d60d98 = param_1 + 0x480;
  *(long *)(param_1 + 0x480) = lVar1;
  FUN_004aab9c(&local_60);
  FUN_004a23ec(param_1 + 0x488,lVar1,"onRankedRtcRegions",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x490;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeEngine$ConnectToServerCallback");
  DAT_00d60da0 = param_1 + 0x4a0;
  *(long *)(param_1 + 0x4a0) = lVar1;
  FUN_004aaef8(&local_60);
  FUN_004a23ec(param_1 + 0x4a8,lVar1,"onConnectToServer",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x4b0;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeEngine$StartLocalAudioRecordingCallback");
  DAT_00d60da8 = param_1 + 0x4c0;
  *(long *)(param_1 + 0x4c0) = lVar1;
  FUN_004aa428(&local_60);
  FUN_004a23ec(param_1 + 0x4c8,lVar1,"onStartLocalAudioRecording",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x4d0;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeEngine$StopLocalAudioRecordingCallback");
  DAT_00d60db0 = param_1 + 0x4e0;
  *(long *)(param_1 + 0x4e0) = lVar1;
  FUN_004ab2fc(&local_60);
  FUN_004a23ec(param_1 + 0x4e8,lVar1,"onStopLocalAudioRecording",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x4f0;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeEngine$MLSSigningKeyCallback");
  DAT_00d60db8 = param_1 + 0x500;
  *(long *)(param_1 + 0x500) = lVar1;
  FUN_004a7a18(&local_60);
  FUN_004a23ec(param_1 + 0x508,lVar1,"onMLSSigningKey",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x510;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeEngine$AudioInputInitializationCallback");
  DAT_00d60dc0 = param_1 + 0x520;
  *(long *)(param_1 + 0x520) = lVar1;
  FUN_004ab63c(&local_60);
  FUN_004a23ec(param_1 + 0x528,lVar1,"onAudioInputInitialized",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x530;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeEngine$VoiceProcessingErrorCallback");
  DAT_00d60dc8 = param_1 + 0x540;
  *(long *)(param_1 + 0x540) = lVar1;
  FUN_004ab98c(&local_60);
  FUN_004a23ec(param_1 + 0x548,lVar1,"onVoiceProcessingError",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  FUN_004a50c8(param_1 + 0x550);
  lVar1 = param_1 + 0x580;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeConnection$GetEncryptionModesCallback");
  DAT_00d60dd8 = param_1 + 0x590;
  *(long *)(param_1 + 0x590) = lVar1;
  FUN_004aab9c(&local_60);
  FUN_004a23ec(param_1 + 0x598,lVar1,"onEncryptionModes",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x5a0;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeConnection$GetStatsCallback");
  DAT_00d60de0 = param_1 + 0x5b0;
  *(long *)(param_1 + 0x5b0) = lVar1;
  FUN_004aa97c(&local_60);
  FUN_004a23ec(param_1 + 0x5b8,lVar1,"onStats",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x5c0;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeConnection$OnSpeakingCallback");
  DAT_00d60de8 = param_1 + 0x5d0;
  *(long *)(param_1 + 0x5d0) = lVar1;
  FUN_004abbac(&local_60);
  FUN_004a23ec(param_1 + 0x5d8,lVar1,"onSpeaking",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x5e0;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeConnection$OnSpeakingWhileMutedCallback");
  DAT_00d60df0 = param_1 + 0x5f0;
  *(long *)(param_1 + 0x5f0) = lVar1;
  FUN_004a6a90(&local_60);
  FUN_004a23ec(param_1 + 0x5f8,lVar1,"onSpeakingWhileMuted",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x600;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeConnection$OnPingCallback");
  DAT_00d60df8 = param_1 + 0x610;
  *(long *)(param_1 + 0x610) = lVar1;
  FUN_004ac0f8(&local_60);
  FUN_004a23ec(param_1 + 0x618,lVar1,"onPing",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x620;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeConnection$OnFirstFrameCallback");
  DAT_00d60e00 = param_1 + 0x630;
  *(long *)(param_1 + 0x630) = lVar1;
  FUN_004ac54c(&local_60);
  FUN_004a23ec(param_1 + 0x638,lVar1,"onFirstFrame",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x640;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeConnection$OnPingTimeoutCallback");
  DAT_00d60e08 = param_1 + 0x650;
  *(long *)(param_1 + 0x650) = lVar1;
  FUN_004ac9a0(&local_60);
  FUN_004a23ec(param_1 + 0x658,lVar1,"onPingTimeout",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x660;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeConnection$OnVideoCallback");
  DAT_00d60e10 = param_1 + 0x670;
  *(long *)(param_1 + 0x670) = lVar1;
  FUN_004acce0(&local_60);
  FUN_004a23ec(param_1 + 0x678,lVar1,"onVideo",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x680;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeConnection$MLSFailureCallback");
  DAT_00d60e18 = param_1 + 0x690;
  *(long *)(param_1 + 0x690) = lVar1;
  FUN_004a7a18(&local_60);
  FUN_004a23ec(param_1 + 0x698,lVar1,"onMLSFailureCallback",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x6a0;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeConnection$ConnectionFailedCallback");
  DAT_00d60e20 = param_1 + 0x6b0;
  *(long *)(param_1 + 0x6b0) = lVar1;
  FUN_004aa97c(&local_60);
  FUN_004a23ec(param_1 + 0x6b8,lVar1,"onConnectionFailed",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x6c0;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeConnection$SecureFramesStateUpdateCallback");
  DAT_00d60e28 = param_1 + 0x6d0;
  *(long *)(param_1 + 0x6d0) = lVar1;
  FUN_004aa97c(&local_60);
  FUN_004a23ec(param_1 + 0x6d8,lVar1,"onSecureFramesStateUpdateCallback",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x6e0;
  FUN_004a22f8(lVar1,
               "com/discord/native/engine/NativeConnection$SecureFramesTransitionReadyCallback");
  DAT_00d60e30 = param_1 + 0x6f0;
  *(long *)(param_1 + 0x6f0) = lVar1;
  FUN_004a6a90(&local_60);
  FUN_004a23ec(param_1 + 0x6f8,lVar1,"onTransitionReady",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x700;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeConnection$MLSKeyPackageCallback");
  DAT_00d60e38 = param_1 + 0x710;
  *(long *)(param_1 + 0x710) = lVar1;
  FUN_004aa97c(&local_60);
  FUN_004a23ec(param_1 + 0x718,lVar1,"onMLSKeyPackage",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x720;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeConnection$MLSProcessProposalsCallback");
  DAT_00d60e40 = param_1 + 0x730;
  *(long *)(param_1 + 0x730) = lVar1;
  FUN_004aa97c(&local_60);
  FUN_004a23ec(param_1 + 0x738,lVar1,"onMLSCommitWelcome",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x740;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeConnection$MLSCommitTransitionCallback");
  DAT_00d60e48 = param_1 + 0x750;
  *(long *)(param_1 + 0x750) = lVar1;
  FUN_004ad134(&local_60);
  FUN_004a23ec(param_1 + 0x758,lVar1,"onMLSProcessedCommit",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x760;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeConnection$MLSWelcomeCallback");
  DAT_00d60e50 = param_1 + 0x770;
  *(long *)(param_1 + 0x770) = lVar1;
  FUN_004ad134(&local_60);
  FUN_004a23ec(param_1 + 0x778,lVar1,"onMLSProcessedWelcome",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x780;
  FUN_004a22f8(lVar1,"com/discord/native/engine/NativeConnection$MLSPairwiseFingerprintCallback");
  DAT_00d60e58 = param_1 + 0x790;
  *(long *)(param_1 + 0x790) = lVar1;
  FUN_004aa97c(&local_60);
  FUN_004a23ec(param_1 + 0x798,lVar1,"onMLSPairwiseFingerprint",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  lVar1 = param_1 + 0x7a0;
  FUN_004a22f8(lVar1,"com/discord/play_delivery/PlayAssetDeliveryNativeWrapper");
  DAT_00d60e60 = param_1 + 0x7b0;
  *(long *)(param_1 + 0x7b0) = lVar1;
  FUN_004a54dc(&local_60);
  FUN_004a2488(param_1 + 0x7b8,lVar1,"getKrispAssetPackLocation",&local_60);
  if (local_49 < '\0') {
    operator_delete((void *)CONCAT62(uStack_5e,local_60));
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a3810  JNI_OnUnload =====

void JNI_OnUnload(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)FUN_004a2934();
  if (DAT_00d60cc0 != 0) {
    (**(code **)(*plVar5 + 0xb0))();
    DAT_00d60cc0 = 0;
  }
  thunk_FUN_007ec9e0();
  lVar1 = DAT_00d60c90;
  lVar2 = DAT_00d60c98;
  pvVar3 = DAT_00d60cb8;
  if (DAT_00d60ca8 != param_1) {
    __android_log_print(6,"DiscordJNI","JNI_OnUnload called with a different VM!");
    lVar1 = DAT_00d60c90;
    lVar2 = DAT_00d60c98;
    pvVar3 = DAT_00d60cb8;
  }
  for (; lVar4 = DAT_00d60c98, DAT_00d60cb8 = pvVar3, lVar1 != DAT_00d60c98; lVar1 = lVar1 + 0x20) {
    DAT_00d60c98 = lVar2;
    (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
    lVar2 = DAT_00d60c98;
    pvVar3 = DAT_00d60cb8;
    DAT_00d60c98 = lVar4;
  }
  DAT_00d60c98 = lVar2;
  if (pvVar3 != (void *)0x0) {
    FUN_004a394c(pvVar3);
    operator_delete(pvVar3);
  }
  DAT_00d60cb8 = (void *)0x0;
  DAT_00d60ca8 = 0;
  return;
}


// ===== 004a38e4  FUN_004a38e4 =====

void FUN_004a38e4(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_004a2934();
  if (DAT_00d60cc0 != 0) {
    (**(code **)(*plVar1 + 0xb0))(plVar1);
    DAT_00d60cc0 = 0;
  }
  if (param_1 != 0) {
    DAT_00d60cc0 = (**(code **)(*plVar1 + 0xa8))(plVar1,param_1);
  }
  return;
}


// ===== 004a394c  FUN_004a394c =====

void FUN_004a394c(long param_1)

{
  long *plVar1;
  
  FUN_004a23c0(param_1 + 0x7a0);
  FUN_004a23c0(param_1 + 0x780);
  FUN_004a23c0(param_1 + 0x760);
  FUN_004a23c0(param_1 + 0x740);
  FUN_004a23c0(param_1 + 0x720);
  FUN_004a23c0(param_1 + 0x700);
  FUN_004a23c0(param_1 + 0x6e0);
  FUN_004a23c0(param_1 + 0x6c0);
  FUN_004a23c0(param_1 + 0x6a0);
  FUN_004a23c0(param_1 + 0x680);
  FUN_004a23c0(param_1 + 0x660);
  FUN_004a23c0(param_1 + 0x640);
  FUN_004a23c0(param_1 + 0x620);
  FUN_004a23c0(param_1 + 0x600);
  FUN_004a23c0(param_1 + 0x5e0);
  FUN_004a23c0(param_1 + 0x5c0);
  FUN_004a23c0(param_1 + 0x5a0);
  FUN_004a23c0(param_1 + 0x580);
  FUN_004a23c0(param_1 + 0x550);
  FUN_004a23c0(param_1 + 0x530);
  FUN_004a23c0(param_1 + 0x510);
  FUN_004a23c0(param_1 + 0x4f0);
  FUN_004a23c0(param_1 + 0x4d0);
  FUN_004a23c0(param_1 + 0x4b0);
  FUN_004a23c0(param_1 + 0x490);
  FUN_004a23c0(param_1 + 0x470);
  FUN_004a23c0(param_1 + 0x450);
  FUN_004a23c0(param_1 + 0x430);
  FUN_004a23c0(param_1 + 0x410);
  FUN_004a23c0(param_1 + 0x3f0);
  FUN_004a23c0(param_1 + 0x3d0);
  FUN_004a23c0(param_1 + 0x3b0);
  FUN_004a23c0(param_1 + 0x390);
  FUN_004a23c0(param_1 + 0x370);
  FUN_004a23c0(param_1 + 0x350);
  FUN_004a23c0(param_1 + 0x330);
  FUN_004a23c0(param_1 + 0x310);
  FUN_004a23c0(param_1 + 0x2b8);
  FUN_004a23c0(param_1 + 0x278);
  FUN_004a23c0(param_1 + 0x240);
  FUN_004a23c0(param_1 + 0x208);
  FUN_004a23c0(param_1 + 0x1d0);
  plVar1 = (long *)FUN_004a2934();
  (**(code **)(*plVar1 + 0xb0))(plVar1,*(undefined8 *)(param_1 + 0x1c8));
  plVar1 = (long *)FUN_004a2934();
  (**(code **)(*plVar1 + 0xb0))(plVar1,*(undefined8 *)(param_1 + 0x1b0));
  plVar1 = (long *)FUN_004a2934();
  (**(code **)(*plVar1 + 0xb0))(plVar1,*(undefined8 *)(param_1 + 0x198));
  FUN_004a23c0(param_1 + 0x168);
  FUN_004a23c0(param_1 + 0x118);
  FUN_004a23c0(param_1 + 0xd0);
  FUN_004a23c0(param_1 + 0xb8);
  FUN_004a23c0(param_1 + 0x90);
  FUN_004a23c0(param_1 + 0x68);
  FUN_004a23c0(param_1 + 0x48);
  FUN_004a23c0(param_1 + 0x30);
  FUN_004a23c0(param_1 + 0x18);
  FUN_004a23c0(param_1);
  return;
}


// ===== 004a3b44  FUN_004a3b44 =====

long FUN_004a3b44(void)

{
  if (DAT_00d60cc0 == 0) {
    __android_log_print(6,"DiscordJNI","Android Context has not been set!");
  }
  return DAT_00d60cc0;
}


// ===== 004a3b84  FUN_004a3b84 =====

void FUN_004a3b84(long param_1)

{
  long *plVar1;
  
  if (param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    param_1 = (**(code **)(*plVar1 + 0xa8))(plVar1,param_1);
  }
  DAT_00d60c68 = param_1;
  return;
}


// ===== 004a3bc0  FUN_004a3bc0 =====

bool FUN_004a3bc0(void)

{
  return DAT_00d60cb8 != 0;
}


// ===== 004a3bd4  FUN_004a3bd4 =====

long FUN_004a3bd4(void)

{
  if (DAT_00d60cb8 == 0) {
    __android_log_print(6,"DiscordJNI","Class Map RN has not been initialized!");
  }
  return DAT_00d60cb8;
}


// ===== 004a3c14  FUN_004a3c14 =====

long FUN_004a3c14(void)

{
  if (DAT_00d60cb8 == 0) {
    __android_log_print(6,"DiscordJNI","No Class Map has been initialized!");
  }
  return DAT_00d60cb8;
}


// ===== 004a3c54  FUN_004a3c54 =====

void FUN_004a3c54(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 == 0) {
    __android_log_print(6,"DiscordJNI","cannot StringFromJString a null java String");
  }
  plVar1 = (long *)FUN_004a2934();
  lVar2 = (**(code **)(*plVar1 + 0x548))(plVar1,param_2,0);
  if (lVar2 == 0) {
    __android_log_print(6,"DiscordJNI","Failed converting Java String to C string.");
  }
  FUN_004a3cf4(param_1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x004a3cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x550))(plVar1,param_2,lVar2);
  return;
}


// ===== 004a3cf4  FUN_004a3cf4 =====

void FUN_004a3cf4(char *param_1,char *param_2)

{
  ulong uVar1;
  size_t __n;
  char *__dest;
  
  if (param_2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string",0x370,
               "__s != nullptr","basic_string(const char*) detected nullptr");
  }
  __n = strlen(param_2);
  if (__n < 0x7ffffffffffffff0) {
    if (__n < 0x17) {
      param_1[0x17] = (char)__n;
      __dest = param_1;
    }
    else {
      uVar1 = (__n | 0xf) + 1;
      __dest = (char *)operator_new(uVar1);
      *(char **)param_1 = __dest;
      *(size_t *)(param_1 + 8) = __n;
      *(ulong *)(param_1 + 0x10) = uVar1 | 0x8000000000000000;
    }
    if ((__dest <= param_2) && (param_2 < __dest + __n)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    if (__n != 0) {
      memmove(__dest,param_2,__n);
    }
    __dest[__n] = '\0';
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 004a3de8  FUN_004a3de8 =====

long FUN_004a3de8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_004a2934();
  plVar1 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
  }
  lVar3 = (**(code **)(*plVar2 + 0x538))(plVar2,plVar1);
  if (lVar3 == 0) {
    __android_log_print(6,"DiscordJNI","Failed converting C string to Java String.");
  }
  return lVar3;
}


// ===== 004a3e48  FUN_004a3e48 =====

undefined8 FUN_004a3e48(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  void *local_50 [2];
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) {
    __android_log_print(6,"DiscordJNI","cannot StringFromJString a null java String");
  }
  plVar2 = (long *)FUN_004a2934();
  lVar3 = (**(code **)(*plVar2 + 0x548))(plVar2,param_1,0);
  if (lVar3 == 0) {
    __android_log_print(6,"DiscordJNI","Failed converting Java String to C string.");
  }
  FUN_004a3cf4(local_50,lVar3);
  (**(code **)(*plVar2 + 0x550))(plVar2,param_1,lVar3);
  uVar4 = FUN_00548ec4(local_50,0,10);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a3f38  FUN_004a3f38 =====

void FUN_004a3f38(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = DAT_00d60cb8;
  if (DAT_00d60cb8 != 0) {
    if (DAT_00d60cc0 == 0) {
      __android_log_print(6,"DiscordJNI","Android Context has not been set!");
    }
    lVar1 = DAT_00d60cc0;
    uVar5 = *(undefined8 *)(lVar4 + 0x80);
    uVar2 = FUN_004a2934();
    uVar2 = FUN_004a41b4(uVar2,lVar1,uVar5);
    FUN_004a40fc(param_1,lVar4 + 0x60,uVar2);
    return;
  }
  plVar3 = (long *)FUN_004a2934();
  if (DAT_00d60cc0 == 0) {
    __android_log_print(6,"DiscordJNI","Android Context has not been set!");
  }
  lVar4 = DAT_00d60cc0;
  uVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3,DAT_00d60cc0);
  uVar2 = (**(code **)(*plVar3 + 0x108))(plVar3,uVar2,"getFilesDir","()Ljava/io/File;");
  lVar4 = FUN_004a41b4(plVar3,lVar4,uVar2);
  if (lVar4 == 0) {
    __android_log_print(6,"DiscordJNI","getFilesDir() returned null");
  }
  uVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3,lVar4);
  uVar2 = (**(code **)(*plVar3 + 0x108))(plVar3,uVar2,"getAbsolutePath","()Ljava/lang/String;");
  lVar4 = FUN_004a41b4(plVar3,lVar4,uVar2);
  if (lVar4 == 0) {
    __android_log_print(6,"DiscordJNI","getAbsolutePath() returned null");
  }
  uVar2 = (**(code **)(*plVar3 + 0x548))(plVar3,lVar4,0);
  FUN_004a3cf4(param_1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x004a40f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x550))(plVar3,lVar4,uVar2);
  return;
}


// ===== 004a40fc  FUN_004a40fc =====

void FUN_004a40fc(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  uVar1 = FUN_004a2934();
  lVar2 = FUN_004a41b4(uVar1,param_3,uVar5);
  if (lVar2 == 0) {
    __android_log_print(6,"DiscordJNI","cannot StringFromJString a null java String");
  }
  plVar3 = (long *)FUN_004a2934();
  lVar4 = (**(code **)(*plVar3 + 0x548))(plVar3,lVar2,0);
  if (lVar4 == 0) {
    __android_log_print(6,"DiscordJNI","Failed converting Java String to C string.");
  }
  FUN_004a3cf4(param_1,lVar4);
                    /* WARNING: Could not recover jumptable at 0x004a41b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x550))(plVar3,lVar2,lVar4);
  return;
}


// ===== 004a41b4  FUN_004a41b4 =====

void FUN_004a41b4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
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
  
  ppuStack_68 = &local_70;
  puStack_60 = auStack_a0;
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uStack_58 = 0xffffff80ffffffd8;
  local_98 = param_4;
  uStack_90 = param_5;
  local_88 = param_6;
  uStack_80 = param_7;
  local_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  (**(code **)(*param_1 + 0x118))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a4250  FUN_004a4250 =====

void FUN_004a4250(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = DAT_00d60cb8;
  if (DAT_00d60cb8 == 0) {
    plVar3 = (long *)FUN_004a2934();
    if (DAT_00d60cc0 == 0) {
      __android_log_print(6,"DiscordJNI","Android Context has not been set!");
    }
    lVar4 = DAT_00d60cc0;
    uVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3,DAT_00d60cc0);
    uVar1 = (**(code **)(*plVar3 + 0x108))
                      (plVar3,uVar1,"getAssets","()Landroid/content/res/AssetManager;");
    lVar4 = FUN_004a41b4(plVar3,lVar4,uVar1);
    if (lVar4 == 0) {
      __android_log_print(6,"DiscordJNI","getAssets() returned null");
    }
  }
  else {
    lVar2 = DAT_00d60c70;
    if (DAT_00d60c70 == 0) {
      if (DAT_00d60cc0 == 0) {
        __android_log_print(6,"DiscordJNI","Android Context has not been set!");
      }
      lVar2 = DAT_00d60cc0;
      uVar5 = *(undefined8 *)(lVar4 + 0x88);
      uVar1 = FUN_004a2934();
      lVar2 = FUN_004a41b4(uVar1,lVar2,uVar5);
      if (lVar2 != 0) {
        plVar3 = (long *)FUN_004a2934();
        lVar2 = (**(code **)(*plVar3 + 0xa8))(plVar3,lVar2);
      }
    }
    DAT_00d60c70 = lVar2;
    plVar3 = (long *)FUN_004a2934();
    lVar4 = DAT_00d60c70;
  }
  AAssetManager_fromJava(plVar3,lVar4);
  return;
}


// ===== 004a4390  FUN_004a4390 =====

void FUN_004a4390(uint param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  
  plVar2 = (long *)FUN_004a2934();
  lVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,"com/discord/DiscordDecoderStreamManager");
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 0x88))(plVar2);
    pcVar5 = "SetSurfaceDirectDecoderPathEnabled: DiscordDecoderStreamManager class not found";
  }
  else {
    lVar4 = (**(code **)(*plVar2 + 0x388))(plVar2,lVar3,"setSurfaceDirectPathEnabled",&DAT_001e74ea)
    ;
    if (lVar4 != 0) {
      FUN_004a44dc(plVar2,lVar3,lVar4,param_1 & 1);
      cVar1 = (**(code **)(*plVar2 + 0x720))(plVar2);
      if (cVar1 != '\0') {
        (**(code **)(*plVar2 + 0x80))(plVar2);
        (**(code **)(*plVar2 + 0x88))(plVar2);
        __android_log_print(5,"DiscordNative",
                            "SetSurfaceDirectDecoderPathEnabled: exception while calling setSurfaceDirectPathEnabled"
                           );
      }
                    /* WARNING: Could not recover jumptable at 0x004a4470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0xb8))(plVar2,lVar3);
      return;
    }
    (**(code **)(*plVar2 + 0x88))(plVar2);
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar3);
    pcVar5 = "SetSurfaceDirectDecoderPathEnabled: setSurfaceDirectPathEnabled not found";
  }
  __android_log_print(5,"DiscordNative",pcVar5);
  return;
}


// ===== 004a44dc  FUN_004a44dc =====

void FUN_004a44dc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
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
  
  ppuStack_68 = &local_70;
  puStack_60 = auStack_a0;
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uStack_58 = 0xffffff80ffffffd8;
  local_98 = param_4;
  uStack_90 = param_5;
  local_88 = param_6;
  uStack_80 = param_7;
  local_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  (**(code **)(*param_1 + 0x470))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a4578  FUN_004a4578 =====

void FUN_004a4578(long param_1)

{
  long lVar1;
  long lVar2;
  void *local_50 [2];
  char local_39;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_004a22f8(param_1,"java/lang/String");
  DAT_00d60cc8 = param_1 + 0x10;
  *(long *)(param_1 + 0x10) = param_1;
  FUN_004a22f8(param_1 + 0x18,"org/webrtc/VideoFrame");
  DAT_00d60cd0 = (long *)(param_1 + 0x28);
  *DAT_00d60cd0 = param_1 + 0x18;
  FUN_004a22f8(param_1 + 0x30,"android/content/res/AssetManager");
  lVar1 = param_1 + 0x48;
  DAT_00d60cd8 = (long *)(param_1 + 0x40);
  *DAT_00d60cd8 = param_1 + 0x30;
  FUN_004a22f8(lVar1,"java/io/File");
  DAT_00d60ce0 = (long *)(param_1 + 0x58);
  *DAT_00d60ce0 = lVar1;
  FUN_004a54dc(local_50);
  FUN_004a23ec(param_1 + 0x60,lVar1,"getAbsolutePath",local_50);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  lVar1 = param_1 + 0x68;
  FUN_004a22f8(lVar1,"android/content/Context");
  DAT_00d60ce8 = (long *)(param_1 + 0x78);
  *DAT_00d60ce8 = lVar1;
  FUN_004a56f4(local_50);
  FUN_004a23ec(param_1 + 0x80,lVar1,"getFilesDir",local_50);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  FUN_004a5a0c(local_50);
  FUN_004a23ec(param_1 + 0x88,lVar1,"getAssets",local_50);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  lVar1 = param_1 + 0x90;
  FUN_004a22f8(lVar1,"org/webrtc/ContextUtils");
  DAT_00d60cf0 = (long *)(param_1 + 0xa0);
  *DAT_00d60cf0 = lVar1;
  FUN_004a5d24(local_50);
  FUN_004a2488(param_1 + 0xa8,lVar1,"initialize",local_50);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  FUN_004a22f8(param_1 + 0xb8,"org/webrtc/VideoCapturer");
  DAT_00d60cf8 = (long *)(param_1 + 200);
  *DAT_00d60cf8 = param_1 + 0xb8;
  FUN_004a51ec(param_1 + 0xd0);
  FUN_004a5334(param_1 + 0x118);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a4794  FUN_004a4794 =====

void FUN_004a4794(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *local_50;
  char acStack_48 [8];
  undefined2 local_40;
  char local_3e [5];
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004a22f8(param_1,"com/discord/native/engine/AudioInputDeviceDescription");
  DAT_00d60d18 = param_1 + 0x10;
  *(long *)(param_1 + 0x10) = param_1;
  FUN_004a7a18(&local_50);
  FUN_004a23ec(param_1 + 0x18,param_1,"<init>",&local_50);
  if (local_39 < '\0') {
    operator_delete(local_50);
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 8);
  uVar3 = s_Ljava_lang_String__001db71a._8_8_;
  uVar2 = s_Ljava_lang_String__001db71a._0_8_;
  local_39 = '\x12';
  if (("Ljava/lang/String;" < &local_50) || (local_3e < "java/lang/String;")) {
    local_40 = 0x3b67;
    acStack_48[0] = s_Ljava_lang_String__001db71a[8];
    acStack_48[1] = s_Ljava_lang_String__001db71a[9];
    acStack_48[2] = s_Ljava_lang_String__001db71a[10];
    acStack_48[3] = s_Ljava_lang_String__001db71a[0xb];
    acStack_48[4] = s_Ljava_lang_String__001db71a[0xc];
    acStack_48[5] = s_Ljava_lang_String__001db71a[0xd];
    acStack_48[6] = s_Ljava_lang_String__001db71a[0xe];
    acStack_48[7] = s_Ljava_lang_String__001db71a[0xf];
    local_50 = (void *)s_Ljava_lang_String__001db71a._0_8_;
    local_3e[0] = '\0';
    FUN_004a252c(param_1 + 0x28,param_1,&DAT_001b0a79,&local_50);
    if (local_39 < '\0') {
      operator_delete(local_50);
    }
    uVar4 = s_Ljava_lang_String__001db71a._8_8_;
    local_39 = '\x12';
    if (("Ljava/lang/String;" < &local_50) || (local_3e < "java/lang/String;")) {
      local_40 = 0x3b67;
      s_Ljava_lang_String__001db71a[8] = (char)uVar3;
      s_Ljava_lang_String__001db71a[9] = SUB81(uVar3,1);
      s_Ljava_lang_String__001db71a[10] = SUB81(uVar3,2);
      s_Ljava_lang_String__001db71a[0xb] = SUB81(uVar3,3);
      s_Ljava_lang_String__001db71a[0xc] = SUB81(uVar3,4);
      s_Ljava_lang_String__001db71a[0xd] = SUB81(uVar3,5);
      s_Ljava_lang_String__001db71a[0xe] = SUB81(uVar3,6);
      s_Ljava_lang_String__001db71a[0xf] = SUB81(uVar3,7);
      acStack_48[0] = s_Ljava_lang_String__001db71a[8];
      acStack_48[1] = s_Ljava_lang_String__001db71a[9];
      acStack_48[2] = s_Ljava_lang_String__001db71a[10];
      acStack_48[3] = s_Ljava_lang_String__001db71a[0xb];
      acStack_48[4] = s_Ljava_lang_String__001db71a[0xc];
      acStack_48[5] = s_Ljava_lang_String__001db71a[0xd];
      acStack_48[6] = s_Ljava_lang_String__001db71a[0xe];
      acStack_48[7] = s_Ljava_lang_String__001db71a[0xf];
      local_50 = (void *)uVar2;
      local_3e[0] = '\0';
      s_Ljava_lang_String__001db71a._8_8_ = uVar4;
      FUN_004a252c(param_1 + 0x30,param_1,&DAT_001bf0aa,&local_50);
      if (local_39 < '\0') {
        operator_delete(local_50);
      }
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  local_39 = 0x12;
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004a4920  FUN_004a4920 =====

void FUN_004a4920(long param_1)

{
  long lVar1;
  undefined2 local_50;
  undefined6 uStack_4e;
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004a22f8(param_1,"com/discord/native/engine/AudioInputInitializationInfo");
  DAT_00d60d20 = param_1 + 0x10;
  *(long *)(param_1 + 0x10) = param_1;
  FUN_004a7d58(&local_50);
  FUN_004a23ec(param_1 + 0x18,param_1,"<init>",&local_50);
  if (local_39 < '\0') {
    operator_delete((void *)CONCAT62(uStack_4e,local_50));
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 8);
  FUN_004a803c(&local_50);
  FUN_004a252c(param_1 + 0x28,param_1,"description",&local_50);
  if (local_39 < '\0') {
    operator_delete((void *)CONCAT62(uStack_4e,local_50));
  }
  local_39 = '\x01';
  if ((&local_50 < &UNK_001b9790) && (&UNK_001b978f < (undefined *)((ulong)&local_50 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_50 = 0x4a;
  FUN_004a252c(param_1 + 0x30,param_1,"timeToInitializedNanos",&local_50);
  if (local_39 < '\0') {
    operator_delete((void *)CONCAT62(uStack_4e,local_50));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a4a78  FUN_004a4a78 =====

void FUN_004a4a78(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *local_50;
  char acStack_48 [8];
  undefined2 local_40;
  char local_3e [5];
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004a22f8(param_1,"com/discord/native/engine/AudioOutputDeviceDescription");
  DAT_00d60d28 = param_1 + 0x10;
  *(long *)(param_1 + 0x10) = param_1;
  FUN_004a7a18(&local_50);
  FUN_004a23ec(param_1 + 0x18,param_1,"<init>",&local_50);
  if (local_39 < '\0') {
    operator_delete(local_50);
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 8);
  uVar3 = s_Ljava_lang_String__001db71a._8_8_;
  uVar2 = s_Ljava_lang_String__001db71a._0_8_;
  local_39 = '\x12';
  if (("Ljava/lang/String;" < &local_50) || (local_3e < "java/lang/String;")) {
    local_40 = 0x3b67;
    acStack_48[0] = s_Ljava_lang_String__001db71a[8];
    acStack_48[1] = s_Ljava_lang_String__001db71a[9];
    acStack_48[2] = s_Ljava_lang_String__001db71a[10];
    acStack_48[3] = s_Ljava_lang_String__001db71a[0xb];
    acStack_48[4] = s_Ljava_lang_String__001db71a[0xc];
    acStack_48[5] = s_Ljava_lang_String__001db71a[0xd];
    acStack_48[6] = s_Ljava_lang_String__001db71a[0xe];
    acStack_48[7] = s_Ljava_lang_String__001db71a[0xf];
    local_50 = (void *)s_Ljava_lang_String__001db71a._0_8_;
    local_3e[0] = '\0';
    FUN_004a252c(param_1 + 0x28,param_1,&DAT_001b0a79,&local_50);
    if (local_39 < '\0') {
      operator_delete(local_50);
    }
    uVar4 = s_Ljava_lang_String__001db71a._8_8_;
    local_39 = '\x12';
    if (("Ljava/lang/String;" < &local_50) || (local_3e < "java/lang/String;")) {
      local_40 = 0x3b67;
      s_Ljava_lang_String__001db71a[8] = (char)uVar3;
      s_Ljava_lang_String__001db71a[9] = SUB81(uVar3,1);
      s_Ljava_lang_String__001db71a[10] = SUB81(uVar3,2);
      s_Ljava_lang_String__001db71a[0xb] = SUB81(uVar3,3);
      s_Ljava_lang_String__001db71a[0xc] = SUB81(uVar3,4);
      s_Ljava_lang_String__001db71a[0xd] = SUB81(uVar3,5);
      s_Ljava_lang_String__001db71a[0xe] = SUB81(uVar3,6);
      s_Ljava_lang_String__001db71a[0xf] = SUB81(uVar3,7);
      acStack_48[0] = s_Ljava_lang_String__001db71a[8];
      acStack_48[1] = s_Ljava_lang_String__001db71a[9];
      acStack_48[2] = s_Ljava_lang_String__001db71a[10];
      acStack_48[3] = s_Ljava_lang_String__001db71a[0xb];
      acStack_48[4] = s_Ljava_lang_String__001db71a[0xc];
      acStack_48[5] = s_Ljava_lang_String__001db71a[0xd];
      acStack_48[6] = s_Ljava_lang_String__001db71a[0xe];
      acStack_48[7] = s_Ljava_lang_String__001db71a[0xf];
      local_50 = (void *)uVar2;
      local_3e[0] = '\0';
      s_Ljava_lang_String__001db71a._8_8_ = uVar4;
      FUN_004a252c(param_1 + 0x30,param_1,&DAT_001bf0aa,&local_50);
      if (local_39 < '\0') {
        operator_delete(local_50);
      }
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  local_39 = 0x12;
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004a4c04  FUN_004a4c04 =====

void FUN_004a4c04(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *local_50;
  char acStack_48 [8];
  undefined2 local_40;
  char local_3e [5];
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004a22f8(param_1,"com/discord/native/engine/VideoInputDeviceDescription");
  DAT_00d60d30 = param_1 + 0x10;
  *(long *)(param_1 + 0x10) = param_1;
  FUN_004a8254(&local_50);
  FUN_004a23ec(param_1 + 0x18,param_1,"<init>",&local_50);
  if (local_39 < '\0') {
    operator_delete(local_50);
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 8);
  uVar3 = s_Ljava_lang_String__001db71a._8_8_;
  uVar2 = s_Ljava_lang_String__001db71a._0_8_;
  local_39 = '\x12';
  if (("Ljava/lang/String;" < &local_50) || (local_3e < "java/lang/String;")) {
    local_40 = 0x3b67;
    acStack_48[0] = s_Ljava_lang_String__001db71a[8];
    acStack_48[1] = s_Ljava_lang_String__001db71a[9];
    acStack_48[2] = s_Ljava_lang_String__001db71a[10];
    acStack_48[3] = s_Ljava_lang_String__001db71a[0xb];
    acStack_48[4] = s_Ljava_lang_String__001db71a[0xc];
    acStack_48[5] = s_Ljava_lang_String__001db71a[0xd];
    acStack_48[6] = s_Ljava_lang_String__001db71a[0xe];
    acStack_48[7] = s_Ljava_lang_String__001db71a[0xf];
    local_50 = (void *)s_Ljava_lang_String__001db71a._0_8_;
    local_3e[0] = '\0';
    FUN_004a252c(param_1 + 0x28,param_1,&DAT_001b0a79,&local_50);
    if (local_39 < '\0') {
      operator_delete(local_50);
    }
    uVar4 = s_Ljava_lang_String__001db71a._8_8_;
    local_39 = '\x12';
    if (("Ljava/lang/String;" < &local_50) || (local_3e < "java/lang/String;")) {
      local_40 = 0x3b67;
      s_Ljava_lang_String__001db71a[8] = (char)uVar3;
      s_Ljava_lang_String__001db71a[9] = SUB81(uVar3,1);
      s_Ljava_lang_String__001db71a[10] = SUB81(uVar3,2);
      s_Ljava_lang_String__001db71a[0xb] = SUB81(uVar3,3);
      s_Ljava_lang_String__001db71a[0xc] = SUB81(uVar3,4);
      s_Ljava_lang_String__001db71a[0xd] = SUB81(uVar3,5);
      s_Ljava_lang_String__001db71a[0xe] = SUB81(uVar3,6);
      s_Ljava_lang_String__001db71a[0xf] = SUB81(uVar3,7);
      acStack_48[0] = s_Ljava_lang_String__001db71a[8];
      acStack_48[1] = s_Ljava_lang_String__001db71a[9];
      acStack_48[2] = s_Ljava_lang_String__001db71a[10];
      acStack_48[3] = s_Ljava_lang_String__001db71a[0xb];
      acStack_48[4] = s_Ljava_lang_String__001db71a[0xc];
      acStack_48[5] = s_Ljava_lang_String__001db71a[0xd];
      acStack_48[6] = s_Ljava_lang_String__001db71a[0xe];
      acStack_48[7] = s_Ljava_lang_String__001db71a[0xf];
      local_50 = (void *)uVar2;
      local_3e[0] = '\0';
      s_Ljava_lang_String__001db71a._8_8_ = uVar4;
      FUN_004a252c(param_1 + 0x30,param_1,&DAT_001bf0aa,&local_50);
      if (local_39 < '\0') {
        operator_delete(local_50);
      }
      FUN_004a78f8(&local_50);
      FUN_004a252c(param_1 + 0x38,param_1,"facing",&local_50);
      if (local_39 < '\0') {
        operator_delete(local_50);
      }
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  local_39 = 0x12;
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004a4dc4  FUN_004a4dc4 =====

void FUN_004a4dc4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined7 uVar3;
  char cVar4;
  void *local_50;
  undefined7 uStack_48;
  char cStack_41;
  undefined2 uStack_40;
  char acStack_3e [5];
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004a22f8(param_1,"com/discord/native/engine/ConnectionInfo");
  DAT_00d60d38 = param_1 + 0x10;
  *(long *)(param_1 + 0x10) = param_1;
  FUN_004a86bc(&local_50);
  FUN_004a23ec(param_1 + 0x18,param_1,"<init>",&local_50);
  if (local_39 < '\0') {
    operator_delete(local_50);
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 8);
  local_39 = '\x01';
  if ((&UNK_001b679e < &local_50) || ((undefined *)((ulong)&local_50 | 1) < &UNK_001b679f)) {
    local_50 = (void *)CONCAT62(local_50._2_6_,0x5a);
    FUN_004a252c(param_1 + 0x28,param_1,"isConnected",&local_50);
    if (local_39 < '\0') {
      operator_delete(local_50);
    }
    uVar2 = s_Ljava_lang_String__001db71a._0_8_;
    local_39 = '\x12';
    if (("Ljava/lang/String;" < &local_50) || (acStack_3e < "java/lang/String;")) {
      uStack_40 = 0x3b67;
      uStack_48 = (undefined7)s_Ljava_lang_String__001db71a._8_8_;
      uVar3 = uStack_48;
      cStack_41 = SUB81(s_Ljava_lang_String__001db71a._8_8_,7);
      cVar4 = cStack_41;
      local_50 = (void *)s_Ljava_lang_String__001db71a._0_8_;
      acStack_3e[0] = '\0';
      FUN_004a252c(param_1 + 0x30,param_1,"protocol",&local_50);
      if (local_39 < '\0') {
        operator_delete(local_50);
      }
      local_39 = '\x12';
      if (("Ljava/lang/String;" < &local_50) || (acStack_3e < "java/lang/String;")) {
        uStack_40 = 0x3b67;
        local_50 = (void *)uVar2;
        acStack_3e[0] = '\0';
        uStack_48 = uVar3;
        cStack_41 = cVar4;
        FUN_004a252c(param_1 + 0x38,param_1,"localAddress",&local_50);
        if (local_39 < '\0') {
          operator_delete(local_50);
        }
        local_39 = '\x01';
        if ((&DAT_0019fcd7 < &local_50) || ((undefined *)((ulong)&local_50 | 1) < &UNK_0019fcd8)) {
          local_50 = (void *)CONCAT62(local_50._2_6_,0x49);
          FUN_004a252c(param_1 + 0x40,param_1,"localPort",&local_50);
          if (local_39 < '\0') {
            operator_delete(local_50);
          }
          uVar2 = s_Ljava_lang_Integer__001b0ab5._0_8_;
          local_39 = '\x13';
          if (("Ljava/lang/Integer;" < &local_50) || (acStack_3e + 1 < "java/lang/Integer;")) {
            uStack_40 = 0x7265;
            acStack_3e[0] = ';';
            uStack_48 = (undefined7)s_Ljava_lang_Integer__001b0ab5._8_8_;
            uVar3 = uStack_48;
            cStack_41 = SUB81(s_Ljava_lang_Integer__001b0ab5._8_8_,7);
            cVar4 = cStack_41;
            local_50 = (void *)s_Ljava_lang_Integer__001b0ab5._0_8_;
            acStack_3e[1] = 0;
            FUN_004a252c(param_1 + 0x48,param_1,"createConnectionTime",&local_50);
            if (local_39 < '\0') {
              operator_delete(local_50);
            }
            local_39 = '\x13';
            if (("Ljava/lang/Integer;" < &local_50) || (acStack_3e + 1 < "java/lang/Integer;")) {
              uStack_40 = 0x7265;
              acStack_3e[0] = ';';
              local_50 = (void *)uVar2;
              acStack_3e[1] = 0;
              uStack_48 = uVar3;
              cStack_41 = cVar4;
              FUN_004a252c(param_1 + 0x50,param_1,"connectTime",&local_50);
              if (local_39 < '\0') {
                operator_delete(local_50);
              }
              if (*(long *)(lVar1 + 0x28) == local_38) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
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


// ===== 004a50c8  FUN_004a50c8 =====

void FUN_004a50c8(long param_1)

{
  long lVar1;
  undefined2 local_50;
  undefined6 uStack_4e;
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004a22f8(param_1,"com/discord/native/engine/NativeConnection");
  DAT_00d60dd0 = param_1 + 0x10;
  *(long *)(param_1 + 0x10) = param_1;
  FUN_004a6a90(&local_50);
  FUN_004a23ec(param_1 + 0x18,param_1,"<init>",&local_50);
  if (local_39 < '\0') {
    operator_delete((void *)CONCAT62(uStack_4e,local_50));
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 8);
  local_39 = '\x01';
  if ((&local_50 < &UNK_001b9790) && (&UNK_001b978f < (undefined *)((ulong)&local_50 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_50 = 0x4a;
  FUN_004a252c(param_1 + 0x28,param_1,"nativeInstance",&local_50);
  if (local_39 < '\0') {
    operator_delete((void *)CONCAT62(uStack_4e,local_50));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a51ec  FUN_004a51ec =====

void FUN_004a51ec(long param_1)

{
  long lVar1;
  void *local_50 [2];
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004a22f8(param_1,"co/discord/media_engine/NativeCapturerObserver");
  DAT_00d60d00 = param_1 + 0x10;
  *(long *)(param_1 + 0x10) = param_1;
  FUN_004a6074(local_50);
  FUN_004a23ec(param_1 + 0x18,param_1,"<init>",local_50);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 8);
  FUN_004a6570(local_50);
  FUN_004a23ec(param_1 + 0x28,param_1,"<init>",local_50);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 8);
  FUN_004a6a90(local_50);
  FUN_004a23ec(param_1 + 0x38,param_1,"dispose",local_50);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  FUN_004a6c9c(local_50);
  FUN_004a23ec(param_1 + 0x40,param_1,"reconfigure",local_50);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a5334  FUN_004a5334 =====

void FUN_004a5334(long param_1)

{
  long lVar1;
  void *local_50 [2];
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004a22f8(param_1,"co/discord/media_engine/internal/DeviceInfo");
  DAT_00d60d08 = param_1 + 0x10;
  *(long *)(param_1 + 0x10) = param_1;
  FUN_004a6a90(local_50);
  FUN_004a23ec(param_1 + 0x18,param_1,"<init>",local_50);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 8);
  FUN_004a71dc(local_50);
  FUN_004a23ec(param_1 + 0x28,param_1,"numberOfDevices",local_50);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  FUN_004a73e8(local_50);
  FUN_004a23ec(param_1 + 0x30,param_1,"getDeviceName",local_50);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  FUN_004a73e8(local_50);
  FUN_004a23ec(param_1 + 0x38,param_1,"getDeviceGuid",local_50);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  FUN_004a7614(local_50);
  FUN_004a23ec(param_1 + 0x40,param_1,"getDeviceFrontFacing",local_50);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  FUN_004a7614(local_50);
  FUN_004a23ec(param_1 + 0x48,param_1,"getDeviceBackFacing",local_50);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a54dc  FUN_004a54dc =====

/* WARNING: Removing unreachable block (ram,0x004a567c) */
/* WARNING: Removing unreachable block (ram,0x004a569c) */

void FUN_004a54dc(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *local_d0;
  char acStack_c8 [8];
  undefined2 local_c0;
  char local_be [5];
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined1 local_a0;
  undefined7 uStack_9f;
  char local_89;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_89 = '\0';
    local_88 = 0x28;
    local_a0 = 0;
    puVar2 = (undefined8 *)FUN_00547cac(&local_88,&local_a0,0);
    uStack_68 = puVar2[1];
    local_70 = *puVar2;
    local_60 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      puVar2 = (undefined8 *)FUN_00547cac(&local_70,&local_b8,1);
      local_40 = puVar2[2];
      uStack_48 = puVar2[1];
      local_50 = *puVar2;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      local_b9 = '\x12';
      if (("Ljava/lang/String;" < &local_d0) || (local_be < "java/lang/String;")) {
        local_be[0] = '\0';
        local_c0 = 0x3b67;
        acStack_c8[0] = s_Ljava_lang_String__001db71a[8];
        acStack_c8[1] = s_Ljava_lang_String__001db71a[9];
        acStack_c8[2] = s_Ljava_lang_String__001db71a[10];
        acStack_c8[3] = s_Ljava_lang_String__001db71a[0xb];
        acStack_c8[4] = s_Ljava_lang_String__001db71a[0xc];
        acStack_c8[5] = s_Ljava_lang_String__001db71a[0xd];
        acStack_c8[6] = s_Ljava_lang_String__001db71a[0xe];
        acStack_c8[7] = s_Ljava_lang_String__001db71a[0xf];
        local_d0 = (void *)s_Ljava_lang_String__001db71a._0_8_;
        puVar2 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,0x12);
        uVar5 = puVar2[1];
        uVar4 = *puVar2;
        *puVar2 = 0;
        puVar2[1] = 0;
        uVar3 = puVar2[2];
        puVar2[2] = 0;
        param_1[1] = uVar5;
        *param_1 = uVar4;
        param_1[2] = uVar3;
        if (local_b9 < '\0') {
          operator_delete(local_d0);
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if (local_89 < '\0') {
          operator_delete((void *)CONCAT71(uStack_9f,local_a0));
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004a56f4  FUN_004a56f4 =====

/* WARNING: Removing unreachable block (ram,0x004a5874) */
/* WARNING: Removing unreachable block (ram,0x004a5894) */

void FUN_004a56f4(undefined8 *param_1)

{
  long lVar1;
  undefined1 **ppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *local_d0;
  ulong uStack_c8;
  byte local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined1 local_a0;
  undefined7 uStack_9f;
  char local_89;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_89 = '\0';
    local_88 = 0x28;
    local_a0 = 0;
    puVar3 = (undefined8 *)FUN_00547cac(&local_88,&local_a0,0);
    uStack_68 = puVar3[1];
    local_70 = *puVar3;
    local_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      puVar3 = (undefined8 *)FUN_00547cac(&local_70,&local_b8,1);
      local_40 = puVar3[2];
      uStack_48 = puVar3[1];
      local_50 = *puVar3;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      FUN_004a58ec(&local_d0);
      ppuVar2 = (undefined1 **)local_d0;
      if (-1 < (char)local_b9) {
        uStack_c8 = (ulong)local_b9;
        ppuVar2 = &local_d0;
      }
      puVar3 = (undefined8 *)FUN_00547cac(&local_50,ppuVar2,uStack_c8);
      uVar6 = puVar3[1];
      uVar5 = *puVar3;
      *puVar3 = 0;
      puVar3[1] = 0;
      uVar4 = puVar3[2];
      puVar3[2] = 0;
      param_1[1] = uVar6;
      *param_1 = uVar5;
      param_1[2] = uVar4;
      if ((char)local_b9 < '\0') {
        operator_delete(local_d0);
      }
      if (local_a1 < '\0') {
        operator_delete((void *)CONCAT62(uStack_b6,local_b8));
      }
      if (local_89 < '\0') {
        operator_delete((void *)CONCAT71(uStack_9f,local_a0));
      }
      if (local_71 < '\0') {
        operator_delete((void *)CONCAT62(uStack_86,local_88));
      }
      if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004a58ec  FUN_004a58ec =====

void FUN_004a58ec(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 local_58;
  undefined6 uStack_56;
  char local_41;
  void *local_40;
  undefined8 uStack_38;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_41 = '\x01';
  if ((&local_58 < &UNK_001a3137) && (&DAT_001a3136 < (undefined *)((ulong)&local_58 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_58 = 0x4c;
  puVar2 = (undefined8 *)FUN_00547cac(&local_58,"java/io/File",0xc);
  uStack_38 = puVar2[1];
  local_40 = (void *)*puVar2;
  local_30 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  puVar2 = (undefined8 *)FUN_00547cac(&local_40,&DAT_001a5eba,1);
  uVar5 = puVar2[1];
  uVar4 = *puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar3 = puVar2[2];
  puVar2[2] = 0;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[2] = uVar3;
  if (local_30 < 0) {
    operator_delete(local_40);
  }
  if (local_41 < '\0') {
    operator_delete((void *)CONCAT62(uStack_56,local_58));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a5a0c  FUN_004a5a0c =====

/* WARNING: Removing unreachable block (ram,0x004a5b8c) */
/* WARNING: Removing unreachable block (ram,0x004a5bac) */

void FUN_004a5a0c(undefined8 *param_1)

{
  long lVar1;
  undefined1 **ppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *local_d0;
  ulong uStack_c8;
  byte local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined1 local_a0;
  undefined7 uStack_9f;
  char local_89;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_89 = '\0';
    local_88 = 0x28;
    local_a0 = 0;
    puVar3 = (undefined8 *)FUN_00547cac(&local_88,&local_a0,0);
    uStack_68 = puVar3[1];
    local_70 = *puVar3;
    local_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      puVar3 = (undefined8 *)FUN_00547cac(&local_70,&local_b8,1);
      local_40 = puVar3[2];
      uStack_48 = puVar3[1];
      local_50 = *puVar3;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      FUN_004a5c04(&local_d0);
      ppuVar2 = (undefined1 **)local_d0;
      if (-1 < (char)local_b9) {
        uStack_c8 = (ulong)local_b9;
        ppuVar2 = &local_d0;
      }
      puVar3 = (undefined8 *)FUN_00547cac(&local_50,ppuVar2,uStack_c8);
      uVar6 = puVar3[1];
      uVar5 = *puVar3;
      *puVar3 = 0;
      puVar3[1] = 0;
      uVar4 = puVar3[2];
      puVar3[2] = 0;
      param_1[1] = uVar6;
      *param_1 = uVar5;
      param_1[2] = uVar4;
      if ((char)local_b9 < '\0') {
        operator_delete(local_d0);
      }
      if (local_a1 < '\0') {
        operator_delete((void *)CONCAT62(uStack_b6,local_b8));
      }
      if (local_89 < '\0') {
        operator_delete((void *)CONCAT71(uStack_9f,local_a0));
      }
      if (local_71 < '\0') {
        operator_delete((void *)CONCAT62(uStack_86,local_88));
      }
      if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004a5c04  FUN_004a5c04 =====

void FUN_004a5c04(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 local_58;
  undefined6 uStack_56;
  char local_41;
  void *local_40;
  undefined8 uStack_38;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_41 = '\x01';
  if ((&local_58 < &UNK_001a3137) && (&DAT_001a3136 < (undefined *)((ulong)&local_58 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_58 = 0x4c;
  puVar2 = (undefined8 *)FUN_00547cac(&local_58,"android/content/res/AssetManager",0x20);
  uStack_38 = puVar2[1];
  local_40 = (void *)*puVar2;
  local_30 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  puVar2 = (undefined8 *)FUN_00547cac(&local_40,&DAT_001a5eba,1);
  uVar5 = puVar2[1];
  uVar4 = *puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar3 = puVar2[2];
  puVar2[2] = 0;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[2] = uVar3;
  if (local_30 < 0) {
    operator_delete(local_40);
  }
  if (local_41 < '\0') {
    operator_delete((void *)CONCAT62(uStack_56,local_58));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a5d24  FUN_004a5d24 =====

/* WARNING: Removing unreachable block (ram,0x004a5edc) */
/* WARNING: Removing unreachable block (ram,0x004a5efc) */

void FUN_004a5d24(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 ****ppppuVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 local_d0;
  undefined6 uStack_ce;
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined8 ***local_a0;
  ulong uStack_98;
  ulong local_90;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 ***local_50;
  ulong uStack_48;
  ulong local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_88 = 0x28;
    FUN_004a5f54(&local_50);
    uStack_98 = uStack_48;
    local_a0 = local_50;
    local_90 = local_40;
    uVar1 = uStack_48;
    ppppuVar3 = (undefined8 ****)local_50;
    if (-1 < (long)local_40) {
      uVar1 = local_40 >> 0x38;
      ppppuVar3 = &local_a0;
    }
    puVar4 = (undefined8 *)FUN_00547cac(&local_88,ppppuVar3,uVar1);
    uStack_68 = puVar4[1];
    local_70 = *puVar4;
    local_60 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      plVar5 = (long *)FUN_00547cac(&local_70,&local_b8,1);
      uStack_48 = plVar5[1];
      local_50 = (undefined8 ***)*plVar5;
      local_40 = plVar5[2];
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = 0;
      local_b9 = '\x01';
      if ((&UNK_001c7e75 < &local_d0) || ((undefined *)((ulong)&local_d0 | 1) < &UNK_001c7e76)) {
        local_d0 = 0x56;
        puVar4 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,1);
        uVar8 = puVar4[1];
        uVar7 = *puVar4;
        *puVar4 = 0;
        puVar4[1] = 0;
        uVar6 = puVar4[2];
        puVar4[2] = 0;
        param_1[1] = uVar8;
        *param_1 = uVar7;
        param_1[2] = uVar6;
        if (local_b9 < '\0') {
          operator_delete((void *)CONCAT62(uStack_ce,local_d0));
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if ((long)local_90 < 0) {
          operator_delete(local_a0);
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004a5f54  FUN_004a5f54 =====

void FUN_004a5f54(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 local_58;
  undefined6 uStack_56;
  char local_41;
  void *local_40;
  undefined8 uStack_38;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_41 = '\x01';
  if ((&local_58 < &UNK_001a3137) && (&DAT_001a3136 < (undefined *)((ulong)&local_58 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_58 = 0x4c;
  puVar2 = (undefined8 *)FUN_00547cac(&local_58,"android/content/Context",0x17);
  uStack_38 = puVar2[1];
  local_40 = (void *)*puVar2;
  local_30 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  puVar2 = (undefined8 *)FUN_00547cac(&local_40,&DAT_001a5eba,1);
  uVar5 = puVar2[1];
  uVar4 = *puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar3 = puVar2[2];
  puVar2[2] = 0;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[2] = uVar3;
  if (local_30 < 0) {
    operator_delete(local_40);
  }
  if (local_41 < '\0') {
    operator_delete((void *)CONCAT62(uStack_56,local_58));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a6074  FUN_004a6074 =====

/* WARNING: Removing unreachable block (ram,0x004a621c) */
/* WARNING: Removing unreachable block (ram,0x004a623c) */

void FUN_004a6074(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 local_d0;
  undefined6 uStack_ce;
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined8 ***local_a0;
  ulong uStack_98;
  byte local_89;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_88 = 0x28;
    FUN_004a6294(&local_a0);
    ppppuVar2 = (undefined8 ****)local_a0;
    if (-1 < (char)local_89) {
      uStack_98 = (ulong)local_89;
      ppppuVar2 = &local_a0;
    }
    puVar3 = (undefined8 *)FUN_00547cac(&local_88,ppppuVar2,uStack_98);
    uStack_68 = puVar3[1];
    local_70 = *puVar3;
    local_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      puVar3 = (undefined8 *)FUN_00547cac(&local_70,&local_b8,1);
      uStack_48 = puVar3[1];
      local_50 = *puVar3;
      local_40 = puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      local_b9 = '\x01';
      if ((&UNK_001c7e75 < &local_d0) || ((undefined *)((ulong)&local_d0 | 1) < &UNK_001c7e76)) {
        local_d0 = 0x56;
        puVar3 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,1);
        uVar6 = puVar3[1];
        uVar5 = *puVar3;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar4 = puVar3[2];
        puVar3[2] = 0;
        param_1[1] = uVar6;
        *param_1 = uVar5;
        param_1[2] = uVar4;
        if (local_b9 < '\0') {
          operator_delete((void *)CONCAT62(uStack_ce,local_d0));
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if ((char)local_89 < '\0') {
          operator_delete(local_a0);
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004a6294  FUN_004a6294 =====

void FUN_004a6294(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  undefined2 local_50;
  undefined6 uStack_4e;
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_39 = '\x01';
  if ((&local_50 < &UNK_001b9790) && (&UNK_001b978f < (undefined *)((ulong)&local_50 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_50 = 0x4a;
  FUN_004a63a8(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete((void *)CONCAT62(uStack_4e,local_50));
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004a63a8  FUN_004a63a8 =====

void FUN_004a63a8(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  void *local_50 [2];
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004a5f54(local_50);
  FUN_004a646c(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004a646c  FUN_004a646c =====

void FUN_004a646c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_58;
  undefined7 uStack_57;
  char local_41;
  void *local_40;
  char acStack_38 [8];
  undefined2 local_30;
  char local_2e [5];
  char local_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_29 = '\x12';
  if ((&local_40 < (void **)0x1db71b) && ("Ljava/lang/String;" < local_2e)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_2e[0] = '\0';
  local_41 = '\0';
  local_30 = 0x3b67;
  acStack_38 = (char  [8])s_Ljava_lang_String__001db71a._8_8_;
  local_40 = (void *)s_Ljava_lang_String__001db71a._0_8_;
  local_58 = 0;
  puVar2 = (undefined8 *)FUN_00547cac(&local_40,&local_58,0);
  uVar5 = puVar2[1];
  uVar4 = *puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar3 = puVar2[2];
  puVar2[2] = 0;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[2] = uVar3;
  if (local_41 < '\0') {
    operator_delete((void *)CONCAT71(uStack_57,local_58));
  }
  if (local_29 < '\0') {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a6570  FUN_004a6570 =====

/* WARNING: Removing unreachable block (ram,0x004a6718) */
/* WARNING: Removing unreachable block (ram,0x004a6738) */

void FUN_004a6570(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 local_d0;
  undefined6 uStack_ce;
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined8 ***local_a0;
  ulong uStack_98;
  byte local_89;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_88 = 0x28;
    FUN_004a6790(&local_a0);
    ppppuVar2 = (undefined8 ****)local_a0;
    if (-1 < (char)local_89) {
      uStack_98 = (ulong)local_89;
      ppppuVar2 = &local_a0;
    }
    puVar3 = (undefined8 *)FUN_00547cac(&local_88,ppppuVar2,uStack_98);
    uStack_68 = puVar3[1];
    local_70 = *puVar3;
    local_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      puVar3 = (undefined8 *)FUN_00547cac(&local_70,&local_b8,1);
      uStack_48 = puVar3[1];
      local_50 = *puVar3;
      local_40 = puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      local_b9 = '\x01';
      if ((&UNK_001c7e75 < &local_d0) || ((undefined *)((ulong)&local_d0 | 1) < &UNK_001c7e76)) {
        local_d0 = 0x56;
        puVar3 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,1);
        uVar6 = puVar3[1];
        uVar5 = *puVar3;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar4 = puVar3[2];
        puVar3[2] = 0;
        param_1[1] = uVar6;
        *param_1 = uVar5;
        param_1[2] = uVar4;
        if (local_b9 < '\0') {
          operator_delete((void *)CONCAT62(uStack_ce,local_d0));
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if ((char)local_89 < '\0') {
          operator_delete(local_a0);
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004a6790  FUN_004a6790 =====

void FUN_004a6790(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  undefined2 local_50;
  undefined6 uStack_4e;
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_39 = '\x01';
  if ((&local_50 < &UNK_001b9790) && (&UNK_001b978f < (undefined *)((ulong)&local_50 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_50 = 0x4a;
  FUN_004a68a4(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete((void *)CONCAT62(uStack_4e,local_50));
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004a68a4  FUN_004a68a4 =====

void FUN_004a68a4(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *local_70;
  ulong uStack_68;
  ulong local_60;
  void *local_58 [2];
  char local_41;
  undefined1 *local_40;
  ulong uStack_38;
  ulong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_004a5f54(local_58);
  FUN_004a6970(&local_40);
  uStack_68 = uStack_38;
  local_70 = local_40;
  local_60 = local_30;
  if (-1 < (long)local_30) {
    uStack_38 = local_30 >> 0x38;
    local_40 = (undefined1 *)&local_70;
  }
  puVar2 = (undefined8 *)FUN_00547cac(local_58,local_40,uStack_38);
  uVar5 = puVar2[1];
  uVar4 = *puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar3 = puVar2[2];
  puVar2[2] = 0;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[2] = uVar3;
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004a6970  FUN_004a6970 =====

void FUN_004a6970(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 local_58;
  undefined6 uStack_56;
  char local_41;
  void *local_40;
  undefined8 uStack_38;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_41 = '\x01';
  if ((&local_58 < &UNK_001a3137) && (&DAT_001a3136 < (undefined *)((ulong)&local_58 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_58 = 0x4c;
  puVar2 = (undefined8 *)FUN_00547cac(&local_58,"org/webrtc/VideoCapturer",0x18);
  uStack_38 = puVar2[1];
  local_40 = (void *)*puVar2;
  local_30 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  puVar2 = (undefined8 *)FUN_00547cac(&local_40,&DAT_001a5eba,1);
  uVar5 = puVar2[1];
  uVar4 = *puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar3 = puVar2[2];
  puVar2[2] = 0;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[2] = uVar3;
  if (local_30 < 0) {
    operator_delete(local_40);
  }
  if (local_41 < '\0') {
    operator_delete((void *)CONCAT62(uStack_56,local_58));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a6a90  FUN_004a6a90 =====

/* WARNING: Removing unreachable block (ram,0x004a6c24) */
/* WARNING: Removing unreachable block (ram,0x004a6c44) */

void FUN_004a6a90(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 local_d0;
  undefined6 uStack_ce;
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined1 local_a0;
  undefined7 uStack_9f;
  char local_89;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_89 = '\0';
    local_88 = 0x28;
    local_a0 = 0;
    puVar2 = (undefined8 *)FUN_00547cac(&local_88,&local_a0,0);
    uStack_68 = puVar2[1];
    local_70 = *puVar2;
    local_60 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      puVar2 = (undefined8 *)FUN_00547cac(&local_70,&local_b8,1);
      uStack_48 = puVar2[1];
      local_50 = *puVar2;
      local_40 = puVar2[2];
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      local_b9 = '\x01';
      if ((&UNK_001c7e75 < &local_d0) || ((undefined *)((ulong)&local_d0 | 1) < &UNK_001c7e76)) {
        local_d0 = 0x56;
        puVar2 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,1);
        uVar5 = puVar2[1];
        uVar4 = *puVar2;
        *puVar2 = 0;
        puVar2[1] = 0;
        uVar3 = puVar2[2];
        puVar2[2] = 0;
        param_1[1] = uVar5;
        *param_1 = uVar4;
        param_1[2] = uVar3;
        if (local_b9 < '\0') {
          operator_delete((void *)CONCAT62(uStack_ce,local_d0));
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if (local_89 < '\0') {
          operator_delete((void *)CONCAT71(uStack_9f,local_a0));
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004a6c9c  FUN_004a6c9c =====

/* WARNING: Removing unreachable block (ram,0x004a6e44) */
/* WARNING: Removing unreachable block (ram,0x004a6e64) */

void FUN_004a6c9c(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 local_d0;
  undefined6 uStack_ce;
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined8 ***local_a0;
  ulong uStack_98;
  byte local_89;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_88 = 0x28;
    FUN_004a6ebc(&local_a0);
    ppppuVar2 = (undefined8 ****)local_a0;
    if (-1 < (char)local_89) {
      uStack_98 = (ulong)local_89;
      ppppuVar2 = &local_a0;
    }
    puVar3 = (undefined8 *)FUN_00547cac(&local_88,ppppuVar2,uStack_98);
    uStack_68 = puVar3[1];
    local_70 = *puVar3;
    local_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      puVar3 = (undefined8 *)FUN_00547cac(&local_70,&local_b8,1);
      uStack_48 = puVar3[1];
      local_50 = *puVar3;
      local_40 = puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      local_b9 = '\x01';
      if ((&UNK_001c7e75 < &local_d0) || ((undefined *)((ulong)&local_d0 | 1) < &UNK_001c7e76)) {
        local_d0 = 0x56;
        puVar3 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,1);
        uVar6 = puVar3[1];
        uVar5 = *puVar3;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar4 = puVar3[2];
        puVar3[2] = 0;
        param_1[1] = uVar6;
        *param_1 = uVar5;
        param_1[2] = uVar4;
        if (local_b9 < '\0') {
          operator_delete((void *)CONCAT62(uStack_ce,local_d0));
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if ((char)local_89 < '\0') {
          operator_delete(local_a0);
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004a6ebc  FUN_004a6ebc =====

void FUN_004a6ebc(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  undefined2 local_50;
  undefined6 uStack_4e;
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_39 = '\x01';
  if ((&local_50 < &UNK_0019fcd8) && (&DAT_0019fcd7 < (undefined *)((ulong)&local_50 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_50 = 0x49;
  FUN_004a6fd0(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete((void *)CONCAT62(uStack_4e,local_50));
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004a6fd0  FUN_004a6fd0 =====

void FUN_004a6fd0(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  undefined2 local_50;
  undefined6 uStack_4e;
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_39 = '\x01';
  if ((&local_50 < &UNK_0019fcd8) && (&DAT_0019fcd7 < (undefined *)((ulong)&local_50 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_50 = 0x49;
  FUN_004a70e4(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete((void *)CONCAT62(uStack_4e,local_50));
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004a70e4  FUN_004a70e4 =====

void FUN_004a70e4(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_58;
  undefined7 uStack_57;
  char local_41;
  undefined2 local_40;
  undefined6 uStack_3e;
  char local_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_29 = '\x01';
  if ((&local_40 < &UNK_0019fcd8) && (&DAT_0019fcd7 < (undefined *)((ulong)&local_40 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_41 = '\0';
  local_40 = 0x49;
  local_58 = 0;
  puVar2 = (undefined8 *)FUN_00547cac(&local_40,&local_58,0);
  uVar5 = puVar2[1];
  uVar4 = *puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar3 = puVar2[2];
  puVar2[2] = 0;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[2] = uVar3;
  if (local_41 < '\0') {
    operator_delete((void *)CONCAT71(uStack_57,local_58));
  }
  if (local_29 < '\0') {
    operator_delete((void *)CONCAT62(uStack_3e,local_40));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a71dc  FUN_004a71dc =====

/* WARNING: Removing unreachable block (ram,0x004a7370) */
/* WARNING: Removing unreachable block (ram,0x004a7390) */

void FUN_004a71dc(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 local_d0;
  undefined6 uStack_ce;
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined1 local_a0;
  undefined7 uStack_9f;
  char local_89;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_89 = '\0';
    local_88 = 0x28;
    local_a0 = 0;
    puVar2 = (undefined8 *)FUN_00547cac(&local_88,&local_a0,0);
    uStack_68 = puVar2[1];
    local_70 = *puVar2;
    local_60 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      puVar2 = (undefined8 *)FUN_00547cac(&local_70,&local_b8,1);
      uStack_48 = puVar2[1];
      local_50 = *puVar2;
      local_40 = puVar2[2];
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      local_b9 = '\x01';
      if ((&DAT_0019fcd7 < &local_d0) || ((undefined *)((ulong)&local_d0 | 1) < &UNK_0019fcd8)) {
        local_d0 = 0x49;
        puVar2 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,1);
        uVar5 = puVar2[1];
        uVar4 = *puVar2;
        *puVar2 = 0;
        puVar2[1] = 0;
        uVar3 = puVar2[2];
        puVar2[2] = 0;
        param_1[1] = uVar5;
        *param_1 = uVar4;
        param_1[2] = uVar3;
        if (local_b9 < '\0') {
          operator_delete((void *)CONCAT62(uStack_ce,local_d0));
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if (local_89 < '\0') {
          operator_delete((void *)CONCAT71(uStack_9f,local_a0));
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004a73e8  FUN_004a73e8 =====

/* WARNING: Removing unreachable block (ram,0x004a759c) */
/* WARNING: Removing unreachable block (ram,0x004a75bc) */

void FUN_004a73e8(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *local_d0;
  char acStack_c8 [8];
  undefined2 local_c0;
  char local_be [5];
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined8 ***local_a0;
  ulong uStack_98;
  byte local_89;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_88 = 0x28;
    FUN_004a70e4(&local_a0);
    ppppuVar2 = (undefined8 ****)local_a0;
    if (-1 < (char)local_89) {
      uStack_98 = (ulong)local_89;
      ppppuVar2 = &local_a0;
    }
    puVar3 = (undefined8 *)FUN_00547cac(&local_88,ppppuVar2,uStack_98);
    uStack_68 = puVar3[1];
    local_70 = *puVar3;
    local_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      puVar3 = (undefined8 *)FUN_00547cac(&local_70,&local_b8,1);
      local_40 = puVar3[2];
      uStack_48 = puVar3[1];
      local_50 = *puVar3;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      local_b9 = '\x12';
      if (("Ljava/lang/String;" < &local_d0) || (local_be < "java/lang/String;")) {
        local_be[0] = '\0';
        local_c0 = 0x3b67;
        acStack_c8[0] = s_Ljava_lang_String__001db71a[8];
        acStack_c8[1] = s_Ljava_lang_String__001db71a[9];
        acStack_c8[2] = s_Ljava_lang_String__001db71a[10];
        acStack_c8[3] = s_Ljava_lang_String__001db71a[0xb];
        acStack_c8[4] = s_Ljava_lang_String__001db71a[0xc];
        acStack_c8[5] = s_Ljava_lang_String__001db71a[0xd];
        acStack_c8[6] = s_Ljava_lang_String__001db71a[0xe];
        acStack_c8[7] = s_Ljava_lang_String__001db71a[0xf];
        local_d0 = (void *)s_Ljava_lang_String__001db71a._0_8_;
        puVar3 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,0x12);
        uVar6 = puVar3[1];
        uVar5 = *puVar3;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar4 = puVar3[2];
        puVar3[2] = 0;
        param_1[1] = uVar6;
        *param_1 = uVar5;
        param_1[2] = uVar4;
        if (local_b9 < '\0') {
          operator_delete(local_d0);
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if ((char)local_89 < '\0') {
          operator_delete(local_a0);
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004a7614  FUN_004a7614 =====

/* WARNING: Removing unreachable block (ram,0x004a77bc) */
/* WARNING: Removing unreachable block (ram,0x004a77dc) */

void FUN_004a7614(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 local_d0;
  undefined6 uStack_ce;
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined8 ***local_a0;
  ulong uStack_98;
  byte local_89;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_88 = 0x28;
    FUN_004a70e4(&local_a0);
    ppppuVar2 = (undefined8 ****)local_a0;
    if (-1 < (char)local_89) {
      uStack_98 = (ulong)local_89;
      ppppuVar2 = &local_a0;
    }
    puVar3 = (undefined8 *)FUN_00547cac(&local_88,ppppuVar2,uStack_98);
    uStack_68 = puVar3[1];
    local_70 = *puVar3;
    local_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      puVar3 = (undefined8 *)FUN_00547cac(&local_70,&local_b8,1);
      uStack_48 = puVar3[1];
      local_50 = *puVar3;
      local_40 = puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      local_b9 = '\x01';
      if ((&UNK_001b679e < &local_d0) || ((undefined *)((ulong)&local_d0 | 1) < &UNK_001b679f)) {
        local_d0 = 0x5a;
        puVar3 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,1);
        uVar6 = puVar3[1];
        uVar5 = *puVar3;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar4 = puVar3[2];
        puVar3[2] = 0;
        param_1[1] = uVar6;
        *param_1 = uVar5;
        param_1[2] = uVar4;
        if (local_b9 < '\0') {
          operator_delete((void *)CONCAT62(uStack_ce,local_d0));
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if ((char)local_89 < '\0') {
          operator_delete(local_a0);
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004a7834  FUN_004a7834 =====

void FUN_004a7834(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  void *local_60 [2];
  char local_49;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_004a78f8(local_60);
  FUN_004a25c8(param_1,param_2,param_3,local_60);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  plVar3 = (long *)FUN_004a2934();
  uVar5 = *param_1;
  uVar1 = param_1[1];
  plVar4 = (long *)FUN_004a2934();
  uVar5 = (**(code **)(*plVar4 + 0x488))(plVar4,uVar5,uVar1);
  uVar5 = (**(code **)(*plVar3 + 0xa8))(plVar3,uVar5);
  param_1[2] = uVar5;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a78f8  FUN_004a78f8 =====

void FUN_004a78f8(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 local_58;
  undefined6 uStack_56;
  char local_41;
  void *local_40;
  undefined8 uStack_38;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_41 = '\x01';
  if ((&local_58 < &UNK_001a3137) && (&DAT_001a3136 < (undefined *)((ulong)&local_58 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_58 = 0x4c;
  puVar2 = (undefined8 *)
           FUN_00547cac(&local_58,"com/discord/native/engine/VideoInputDeviceFacing",0x30);
  uStack_38 = puVar2[1];
  local_40 = (void *)*puVar2;
  local_30 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  puVar2 = (undefined8 *)FUN_00547cac(&local_40,&DAT_001a5eba,1);
  uVar5 = puVar2[1];
  uVar4 = *puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar3 = puVar2[2];
  puVar2[2] = 0;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[2] = uVar3;
  if (local_30 < 0) {
    operator_delete(local_40);
  }
  if (local_41 < '\0') {
    operator_delete((void *)CONCAT62(uStack_56,local_58));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a7a18  FUN_004a7a18 =====

/* WARNING: Removing unreachable block (ram,0x004a7bc0) */
/* WARNING: Removing unreachable block (ram,0x004a7be0) */

void FUN_004a7a18(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 local_d0;
  undefined6 uStack_ce;
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined8 ***local_a0;
  ulong uStack_98;
  byte local_89;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_88 = 0x28;
    FUN_004a7c38(&local_a0);
    ppppuVar2 = (undefined8 ****)local_a0;
    if (-1 < (char)local_89) {
      uStack_98 = (ulong)local_89;
      ppppuVar2 = &local_a0;
    }
    puVar3 = (undefined8 *)FUN_00547cac(&local_88,ppppuVar2,uStack_98);
    uStack_68 = puVar3[1];
    local_70 = *puVar3;
    local_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      puVar3 = (undefined8 *)FUN_00547cac(&local_70,&local_b8,1);
      uStack_48 = puVar3[1];
      local_50 = *puVar3;
      local_40 = puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      local_b9 = '\x01';
      if ((&UNK_001c7e75 < &local_d0) || ((undefined *)((ulong)&local_d0 | 1) < &UNK_001c7e76)) {
        local_d0 = 0x56;
        puVar3 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,1);
        uVar6 = puVar3[1];
        uVar5 = *puVar3;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar4 = puVar3[2];
        puVar3[2] = 0;
        param_1[1] = uVar6;
        *param_1 = uVar5;
        param_1[2] = uVar4;
        if (local_b9 < '\0') {
          operator_delete((void *)CONCAT62(uStack_ce,local_d0));
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if ((char)local_89 < '\0') {
          operator_delete(local_a0);
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004a7c38  FUN_004a7c38 =====

void FUN_004a7c38(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  void *local_50;
  char acStack_48 [8];
  undefined2 local_40;
  char local_3e [5];
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_39 = '\x12';
  if ((&local_50 < (void **)0x1db71b) && ("Ljava/lang/String;" < local_3e)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_3e[0] = '\0';
  local_40 = 0x3b67;
  acStack_48 = (char  [8])s_Ljava_lang_String__001db71a._8_8_;
  local_50 = (void *)s_Ljava_lang_String__001db71a._0_8_;
  FUN_004a646c(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004a7d58  FUN_004a7d58 =====

/* WARNING: Removing unreachable block (ram,0x004a7f00) */
/* WARNING: Removing unreachable block (ram,0x004a7f20) */

void FUN_004a7d58(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 local_d0;
  undefined6 uStack_ce;
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined8 ***local_a0;
  ulong uStack_98;
  byte local_89;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_88 = 0x28;
    FUN_004a7f78(&local_a0);
    ppppuVar2 = (undefined8 ****)local_a0;
    if (-1 < (char)local_89) {
      uStack_98 = (ulong)local_89;
      ppppuVar2 = &local_a0;
    }
    puVar3 = (undefined8 *)FUN_00547cac(&local_88,ppppuVar2,uStack_98);
    uStack_68 = puVar3[1];
    local_70 = *puVar3;
    local_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      puVar3 = (undefined8 *)FUN_00547cac(&local_70,&local_b8,1);
      uStack_48 = puVar3[1];
      local_50 = *puVar3;
      local_40 = puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      local_b9 = '\x01';
      if ((&UNK_001c7e75 < &local_d0) || ((undefined *)((ulong)&local_d0 | 1) < &UNK_001c7e76)) {
        local_d0 = 0x56;
        puVar3 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,1);
        uVar6 = puVar3[1];
        uVar5 = *puVar3;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar4 = puVar3[2];
        puVar3[2] = 0;
        param_1[1] = uVar6;
        *param_1 = uVar5;
        param_1[2] = uVar4;
        if (local_b9 < '\0') {
          operator_delete((void *)CONCAT62(uStack_ce,local_d0));
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if ((char)local_89 < '\0') {
          operator_delete(local_a0);
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004a7f78  FUN_004a7f78 =====

void FUN_004a7f78(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  void *local_50 [2];
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004a803c(local_50);
  FUN_004a815c(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004a803c  FUN_004a803c =====

void FUN_004a803c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 local_58;
  undefined6 uStack_56;
  char local_41;
  void *local_40;
  undefined8 uStack_38;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_41 = '\x01';
  if ((&local_58 < &UNK_001a3137) && (&DAT_001a3136 < (undefined *)((ulong)&local_58 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_58 = 0x4c;
  puVar2 = (undefined8 *)
           FUN_00547cac(&local_58,"com/discord/native/engine/AudioInputDeviceDescription",0x35);
  uStack_38 = puVar2[1];
  local_40 = (void *)*puVar2;
  local_30 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  puVar2 = (undefined8 *)FUN_00547cac(&local_40,&DAT_001a5eba,1);
  uVar5 = puVar2[1];
  uVar4 = *puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar3 = puVar2[2];
  puVar2[2] = 0;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[2] = uVar3;
  if (local_30 < 0) {
    operator_delete(local_40);
  }
  if (local_41 < '\0') {
    operator_delete((void *)CONCAT62(uStack_56,local_58));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a815c  FUN_004a815c =====

void FUN_004a815c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_58;
  undefined7 uStack_57;
  char local_41;
  undefined2 local_40;
  undefined6 uStack_3e;
  char local_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_29 = '\x01';
  if ((&local_40 < &UNK_001b9790) && (&UNK_001b978f < (undefined *)((ulong)&local_40 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_41 = '\0';
  local_40 = 0x4a;
  local_58 = 0;
  puVar2 = (undefined8 *)FUN_00547cac(&local_40,&local_58,0);
  uVar5 = puVar2[1];
  uVar4 = *puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar3 = puVar2[2];
  puVar2[2] = 0;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[2] = uVar3;
  if (local_41 < '\0') {
    operator_delete((void *)CONCAT71(uStack_57,local_58));
  }
  if (local_29 < '\0') {
    operator_delete((void *)CONCAT62(uStack_3e,local_40));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a8254  FUN_004a8254 =====

/* WARNING: Removing unreachable block (ram,0x004a83fc) */
/* WARNING: Removing unreachable block (ram,0x004a841c) */

void FUN_004a8254(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 local_d0;
  undefined6 uStack_ce;
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined8 ***local_a0;
  ulong uStack_98;
  byte local_89;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_88 = 0x28;
    FUN_004a8474(&local_a0);
    ppppuVar2 = (undefined8 ****)local_a0;
    if (-1 < (char)local_89) {
      uStack_98 = (ulong)local_89;
      ppppuVar2 = &local_a0;
    }
    puVar3 = (undefined8 *)FUN_00547cac(&local_88,ppppuVar2,uStack_98);
    uStack_68 = puVar3[1];
    local_70 = *puVar3;
    local_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      puVar3 = (undefined8 *)FUN_00547cac(&local_70,&local_b8,1);
      uStack_48 = puVar3[1];
      local_50 = *puVar3;
      local_40 = puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      local_b9 = '\x01';
      if ((&UNK_001c7e75 < &local_d0) || ((undefined *)((ulong)&local_d0 | 1) < &UNK_001c7e76)) {
        local_d0 = 0x56;
        puVar3 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,1);
        uVar6 = puVar3[1];
        uVar5 = *puVar3;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar4 = puVar3[2];
        puVar3[2] = 0;
        param_1[1] = uVar6;
        *param_1 = uVar5;
        param_1[2] = uVar4;
        if (local_b9 < '\0') {
          operator_delete((void *)CONCAT62(uStack_ce,local_d0));
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if ((char)local_89 < '\0') {
          operator_delete(local_a0);
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004a8474  FUN_004a8474 =====

void FUN_004a8474(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  void *local_50;
  char acStack_48 [8];
  undefined2 local_40;
  char local_3e [5];
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_39 = '\x12';
  if ((&local_50 < (void **)0x1db71b) && ("Ljava/lang/String;" < local_3e)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_3e[0] = '\0';
  local_40 = 0x3b67;
  acStack_48 = (char  [8])s_Ljava_lang_String__001db71a._8_8_;
  local_50 = (void *)s_Ljava_lang_String__001db71a._0_8_;
  FUN_004a8594(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004a8594  FUN_004a8594 =====

void FUN_004a8594(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *local_80;
  ulong uStack_78;
  ulong local_70;
  void *local_60;
  char acStack_58 [8];
  undefined2 local_50;
  char local_4e [5];
  char local_49;
  undefined1 *local_40;
  ulong uStack_38;
  ulong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_49 = '\x12';
  if ((&local_60 < (void **)0x1db71b) && ("Ljava/lang/String;" < local_4e)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_4e[0] = '\0';
  local_50 = 0x3b67;
  acStack_58 = (char  [8])s_Ljava_lang_String__001db71a._8_8_;
  local_60 = (void *)s_Ljava_lang_String__001db71a._0_8_;
  FUN_004a78f8(&local_40);
  uStack_78 = uStack_38;
  local_80 = local_40;
  local_70 = local_30;
  if (-1 < (long)local_30) {
    uStack_38 = local_30 >> 0x38;
    local_40 = (undefined1 *)&local_80;
  }
  puVar2 = (undefined8 *)FUN_00547cac(&local_60,local_40,uStack_38);
  uVar5 = puVar2[1];
  uVar4 = *puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar3 = puVar2[2];
  puVar2[2] = 0;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[2] = uVar3;
  if ((long)local_70 < 0) {
    operator_delete(local_80);
  }
  if (local_49 < '\0') {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004a86bc  FUN_004a86bc =====

/* WARNING: Removing unreachable block (ram,0x004a8864) */
/* WARNING: Removing unreachable block (ram,0x004a8884) */

void FUN_004a86bc(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 local_d0;
  undefined6 uStack_ce;
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined8 ***local_a0;
  ulong uStack_98;
  byte local_89;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_88 = 0x28;
    FUN_004a88dc(&local_a0);
    ppppuVar2 = (undefined8 ****)local_a0;
    if (-1 < (char)local_89) {
      uStack_98 = (ulong)local_89;
      ppppuVar2 = &local_a0;
    }
    puVar3 = (undefined8 *)FUN_00547cac(&local_88,ppppuVar2,uStack_98);
    uStack_68 = puVar3[1];
    local_70 = *puVar3;
    local_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      puVar3 = (undefined8 *)FUN_00547cac(&local_70,&local_b8,1);
      uStack_48 = puVar3[1];
      local_50 = *puVar3;
      local_40 = puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      local_b9 = '\x01';
      if ((&UNK_001c7e75 < &local_d0) || ((undefined *)((ulong)&local_d0 | 1) < &UNK_001c7e76)) {
        local_d0 = 0x56;
        puVar3 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,1);
        uVar6 = puVar3[1];
        uVar5 = *puVar3;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar4 = puVar3[2];
        puVar3[2] = 0;
        param_1[1] = uVar6;
        *param_1 = uVar5;
        param_1[2] = uVar4;
        if (local_b9 < '\0') {
          operator_delete((void *)CONCAT62(uStack_ce,local_d0));
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if ((char)local_89 < '\0') {
          operator_delete(local_a0);
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004a88dc  FUN_004a88dc =====

void FUN_004a88dc(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  undefined2 local_50;
  undefined6 uStack_4e;
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_39 = '\x01';
  if ((&local_50 < &UNK_001b679f) && (&UNK_001b679e < (undefined *)((ulong)&local_50 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_50 = 0x5a;
  FUN_004a89f0(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete((void *)CONCAT62(uStack_4e,local_50));
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004a89f0  FUN_004a89f0 =====

void FUN_004a89f0(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  void *local_50;
  char acStack_48 [8];
  undefined2 local_40;
  char local_3e [5];
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_39 = '\x12';
  if ((&local_50 < (void **)0x1db71b) && ("Ljava/lang/String;" < local_3e)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_3e[0] = '\0';
  local_40 = 0x3b67;
  acStack_48 = (char  [8])s_Ljava_lang_String__001db71a._8_8_;
  local_50 = (void *)s_Ljava_lang_String__001db71a._0_8_;
  FUN_004a8b10(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004a8b10  FUN_004a8b10 =====

void FUN_004a8b10(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  void *local_50;
  char acStack_48 [8];
  undefined2 local_40;
  char local_3e [5];
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_39 = '\x12';
  if ((&local_50 < (void **)0x1db71b) && ("Ljava/lang/String;" < local_3e)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_3e[0] = '\0';
  local_40 = 0x3b67;
  acStack_48 = (char  [8])s_Ljava_lang_String__001db71a._8_8_;
  local_50 = (void *)s_Ljava_lang_String__001db71a._0_8_;
  FUN_004a8c30(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004a8c30  FUN_004a8c30 =====

void FUN_004a8c30(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  undefined2 local_50;
  undefined6 uStack_4e;
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_39 = '\x01';
  if ((&local_50 < &UNK_0019fcd8) && (&DAT_0019fcd7 < (undefined *)((ulong)&local_50 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_50 = 0x49;
  FUN_004a8d44(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete((void *)CONCAT62(uStack_4e,local_50));
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004a8d44  FUN_004a8d44 =====

void FUN_004a8d44(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  void *local_50;
  undefined7 uStack_48;
  undefined4 uStack_41;
  char local_3d [4];
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_39 = '\x13';
  if ((&local_50 < (void **)0x1b0ab6) && ("Ljava/lang/Integer;" < local_3d)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_3d[0] = '\0';
  uStack_48 = (undefined7)s_Ljava_lang_Integer__001b0ab5._8_8_;
  uStack_41 = CONCAT31(0x3b7265,SUB81(s_Ljava_lang_Integer__001b0ab5._8_8_,7));
  local_50 = (void *)s_Ljava_lang_Integer__001b0ab5._0_8_;
  FUN_004a8e68(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004a8e68  FUN_004a8e68 =====

void FUN_004a8e68(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_58;
  undefined7 uStack_57;
  char local_41;
  void *local_40;
  undefined7 uStack_38;
  undefined4 uStack_31;
  char local_2d [4];
  char local_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_29 = '\x13';
  if ((&local_40 < (void **)0x1b0ab6) && ("Ljava/lang/Integer;" < local_2d)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_2d[0] = '\0';
  local_41 = '\0';
  uStack_38 = (undefined7)s_Ljava_lang_Integer__001b0ab5._8_8_;
  uStack_31 = CONCAT31(0x3b7265,SUB81(s_Ljava_lang_Integer__001b0ab5._8_8_,7));
  local_40 = (void *)s_Ljava_lang_Integer__001b0ab5._0_8_;
  local_58 = 0;
  puVar2 = (undefined8 *)FUN_00547cac(&local_40,&local_58,0);
  uVar5 = puVar2[1];
  uVar4 = *puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar3 = puVar2[2];
  puVar2[2] = 0;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[2] = uVar3;
  if (local_41 < '\0') {
    operator_delete((void *)CONCAT71(uStack_57,local_58));
  }
  if (local_29 < '\0') {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a8f70  FUN_004a8f70 =====

/* WARNING: Removing unreachable block (ram,0x004a9128) */
/* WARNING: Removing unreachable block (ram,0x004a9148) */

void FUN_004a8f70(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 ****ppppuVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 local_d0;
  undefined6 uStack_ce;
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined8 ***local_a0;
  ulong uStack_98;
  ulong local_90;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 ***local_50;
  ulong uStack_48;
  ulong local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_88 = 0x28;
    FUN_004a91a0(&local_50);
    uStack_98 = uStack_48;
    local_a0 = local_50;
    local_90 = local_40;
    uVar1 = uStack_48;
    ppppuVar3 = (undefined8 ****)local_50;
    if (-1 < (long)local_40) {
      uVar1 = local_40 >> 0x38;
      ppppuVar3 = &local_a0;
    }
    puVar4 = (undefined8 *)FUN_00547cac(&local_88,ppppuVar3,uVar1);
    uStack_68 = puVar4[1];
    local_70 = *puVar4;
    local_60 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      plVar5 = (long *)FUN_00547cac(&local_70,&local_b8,1);
      uStack_48 = plVar5[1];
      local_50 = (undefined8 ***)*plVar5;
      local_40 = plVar5[2];
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = 0;
      local_b9 = '\x01';
      if ((&UNK_001c7e75 < &local_d0) || ((undefined *)((ulong)&local_d0 | 1) < &UNK_001c7e76)) {
        local_d0 = 0x56;
        puVar4 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,1);
        uVar8 = puVar4[1];
        uVar7 = *puVar4;
        *puVar4 = 0;
        puVar4[1] = 0;
        uVar6 = puVar4[2];
        puVar4[2] = 0;
        param_1[1] = uVar8;
        *param_1 = uVar7;
        param_1[2] = uVar6;
        if (local_b9 < '\0') {
          operator_delete((void *)CONCAT62(uStack_ce,local_d0));
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if ((long)local_90 < 0) {
          operator_delete(local_a0);
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004a91a0  FUN_004a91a0 =====

void FUN_004a91a0(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  undefined2 local_50;
  undefined6 uStack_4e;
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_39 = '\x01';
  if ((&local_50 < &UNK_0019769b) && (&DAT_0019769a < (undefined *)((ulong)&local_50 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_50 = 0x5b;
  FUN_004a803c(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete((void *)CONCAT62(uStack_4e,local_50));
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004a92b4  FUN_004a92b4 =====

/* WARNING: Removing unreachable block (ram,0x004a946c) */
/* WARNING: Removing unreachable block (ram,0x004a948c) */

void FUN_004a92b4(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 ****ppppuVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 local_d0;
  undefined6 uStack_ce;
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined8 ***local_a0;
  ulong uStack_98;
  ulong local_90;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 ***local_50;
  ulong uStack_48;
  ulong local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_88 = 0x28;
    FUN_004a94e4(&local_50);
    uStack_98 = uStack_48;
    local_a0 = local_50;
    local_90 = local_40;
    uVar1 = uStack_48;
    ppppuVar3 = (undefined8 ****)local_50;
    if (-1 < (long)local_40) {
      uVar1 = local_40 >> 0x38;
      ppppuVar3 = &local_a0;
    }
    puVar4 = (undefined8 *)FUN_00547cac(&local_88,ppppuVar3,uVar1);
    uStack_68 = puVar4[1];
    local_70 = *puVar4;
    local_60 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      plVar5 = (long *)FUN_00547cac(&local_70,&local_b8,1);
      uStack_48 = plVar5[1];
      local_50 = (undefined8 ***)*plVar5;
      local_40 = plVar5[2];
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = 0;
      local_b9 = '\x01';
      if ((&UNK_001c7e75 < &local_d0) || ((undefined *)((ulong)&local_d0 | 1) < &UNK_001c7e76)) {
        local_d0 = 0x56;
        puVar4 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,1);
        uVar8 = puVar4[1];
        uVar7 = *puVar4;
        *puVar4 = 0;
        puVar4[1] = 0;
        uVar6 = puVar4[2];
        puVar4[2] = 0;
        param_1[1] = uVar8;
        *param_1 = uVar7;
        param_1[2] = uVar6;
        if (local_b9 < '\0') {
          operator_delete((void *)CONCAT62(uStack_ce,local_d0));
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if ((long)local_90 < 0) {
          operator_delete(local_a0);
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004a94e4  FUN_004a94e4 =====

void FUN_004a94e4(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  undefined2 local_50;
  undefined6 uStack_4e;
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_39 = '\x01';
  if ((&local_50 < &UNK_0019769b) && (&DAT_0019769a < (undefined *)((ulong)&local_50 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_50 = 0x5b;
  FUN_004a95f8(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete((void *)CONCAT62(uStack_4e,local_50));
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004a95f8  FUN_004a95f8 =====

void FUN_004a95f8(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 local_58;
  undefined6 uStack_56;
  char local_41;
  void *local_40;
  undefined8 uStack_38;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_41 = '\x01';
  if ((&local_58 < &UNK_001a3137) && (&DAT_001a3136 < (undefined *)((ulong)&local_58 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_58 = 0x4c;
  puVar2 = (undefined8 *)
           FUN_00547cac(&local_58,"com/discord/native/engine/AudioOutputDeviceDescription",0x36);
  uStack_38 = puVar2[1];
  local_40 = (void *)*puVar2;
  local_30 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  puVar2 = (undefined8 *)FUN_00547cac(&local_40,&DAT_001a5eba,1);
  uVar5 = puVar2[1];
  uVar4 = *puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar3 = puVar2[2];
  puVar2[2] = 0;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[2] = uVar3;
  if (local_30 < 0) {
    operator_delete(local_40);
  }
  if (local_41 < '\0') {
    operator_delete((void *)CONCAT62(uStack_56,local_58));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a9718  FUN_004a9718 =====

/* WARNING: Removing unreachable block (ram,0x004a98d0) */
/* WARNING: Removing unreachable block (ram,0x004a98f0) */

void FUN_004a9718(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 ****ppppuVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 local_d0;
  undefined6 uStack_ce;
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined8 ***local_a0;
  ulong uStack_98;
  ulong local_90;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 ***local_50;
  ulong uStack_48;
  ulong local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_88 = 0x28;
    FUN_004a9948(&local_50);
    uStack_98 = uStack_48;
    local_a0 = local_50;
    local_90 = local_40;
    uVar1 = uStack_48;
    ppppuVar3 = (undefined8 ****)local_50;
    if (-1 < (long)local_40) {
      uVar1 = local_40 >> 0x38;
      ppppuVar3 = &local_a0;
    }
    puVar4 = (undefined8 *)FUN_00547cac(&local_88,ppppuVar3,uVar1);
    uStack_68 = puVar4[1];
    local_70 = *puVar4;
    local_60 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      plVar5 = (long *)FUN_00547cac(&local_70,&local_b8,1);
      uStack_48 = plVar5[1];
      local_50 = (undefined8 ***)*plVar5;
      local_40 = plVar5[2];
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = 0;
      local_b9 = '\x01';
      if ((&UNK_001c7e75 < &local_d0) || ((undefined *)((ulong)&local_d0 | 1) < &UNK_001c7e76)) {
        local_d0 = 0x56;
        puVar4 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,1);
        uVar8 = puVar4[1];
        uVar7 = *puVar4;
        *puVar4 = 0;
        puVar4[1] = 0;
        uVar6 = puVar4[2];
        puVar4[2] = 0;
        param_1[1] = uVar8;
        *param_1 = uVar7;
        param_1[2] = uVar6;
        if (local_b9 < '\0') {
          operator_delete((void *)CONCAT62(uStack_ce,local_d0));
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if ((long)local_90 < 0) {
          operator_delete(local_a0);
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004a9948  FUN_004a9948 =====

void FUN_004a9948(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  undefined2 local_50;
  undefined6 uStack_4e;
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_39 = '\x01';
  if ((&local_50 < &UNK_0019769b) && (&DAT_0019769a < (undefined *)((ulong)&local_50 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_50 = 0x5b;
  FUN_004a9a5c(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete((void *)CONCAT62(uStack_4e,local_50));
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004a9a5c  FUN_004a9a5c =====

void FUN_004a9a5c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 local_58;
  undefined6 uStack_56;
  char local_41;
  void *local_40;
  undefined8 uStack_38;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_41 = '\x01';
  if ((&local_58 < &UNK_001a3137) && (&DAT_001a3136 < (undefined *)((ulong)&local_58 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_58 = 0x4c;
  puVar2 = (undefined8 *)
           FUN_00547cac(&local_58,"com/discord/native/engine/VideoInputDeviceDescription",0x35);
  uStack_38 = puVar2[1];
  local_40 = (void *)*puVar2;
  local_30 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  puVar2 = (undefined8 *)FUN_00547cac(&local_40,&DAT_001a5eba,1);
  uVar5 = puVar2[1];
  uVar4 = *puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar3 = puVar2[2];
  puVar2[2] = 0;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[2] = uVar3;
  if (local_30 < 0) {
    operator_delete(local_40);
  }
  if (local_41 < '\0') {
    operator_delete((void *)CONCAT62(uStack_56,local_58));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a9b7c  FUN_004a9b7c =====

/* WARNING: Removing unreachable block (ram,0x004a9d24) */
/* WARNING: Removing unreachable block (ram,0x004a9d44) */

void FUN_004a9b7c(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 local_d0;
  undefined6 uStack_ce;
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined8 ***local_a0;
  ulong uStack_98;
  byte local_89;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_88 = 0x28;
    FUN_004a9d9c(&local_a0);
    ppppuVar2 = (undefined8 ****)local_a0;
    if (-1 < (char)local_89) {
      uStack_98 = (ulong)local_89;
      ppppuVar2 = &local_a0;
    }
    puVar3 = (undefined8 *)FUN_00547cac(&local_88,ppppuVar2,uStack_98);
    uStack_68 = puVar3[1];
    local_70 = *puVar3;
    local_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      puVar3 = (undefined8 *)FUN_00547cac(&local_70,&local_b8,1);
      uStack_48 = puVar3[1];
      local_50 = *puVar3;
      local_40 = puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      local_b9 = '\x01';
      if ((&UNK_001c7e75 < &local_d0) || ((undefined *)((ulong)&local_d0 | 1) < &UNK_001c7e76)) {
        local_d0 = 0x56;
        puVar3 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,1);
        uVar6 = puVar3[1];
        uVar5 = *puVar3;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar4 = puVar3[2];
        puVar3[2] = 0;
        param_1[1] = uVar6;
        *param_1 = uVar5;
        param_1[2] = uVar4;
        if (local_b9 < '\0') {
          operator_delete((void *)CONCAT62(uStack_ce,local_d0));
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if ((char)local_89 < '\0') {
          operator_delete(local_a0);
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004a9d9c  FUN_004a9d9c =====

void FUN_004a9d9c(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  void *local_50 [2];
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004a91a0(local_50);
  FUN_004a9e60(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004a9e60  FUN_004a9e60 =====

void FUN_004a9e60(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *local_70;
  ulong uStack_68;
  ulong local_60;
  void *local_58 [2];
  char local_41;
  undefined1 *local_40;
  ulong uStack_38;
  ulong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_004a94e4(local_58);
  FUN_004a9948(&local_40);
  uStack_68 = uStack_38;
  local_70 = local_40;
  local_60 = local_30;
  if (-1 < (long)local_30) {
    uStack_38 = local_30 >> 0x38;
    local_40 = (undefined1 *)&local_70;
  }
  puVar2 = (undefined8 *)FUN_00547cac(local_58,local_40,uStack_38);
  uVar5 = puVar2[1];
  uVar4 = *puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar3 = puVar2[2];
  puVar2[2] = 0;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[2] = uVar3;
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004a9f2c  FUN_004a9f2c =====

/* WARNING: Removing unreachable block (ram,0x004aa0d4) */
/* WARNING: Removing unreachable block (ram,0x004aa0f4) */

void FUN_004a9f2c(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 local_d0;
  undefined6 uStack_ce;
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined8 ***local_a0;
  ulong uStack_98;
  byte local_89;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_88 = 0x28;
    FUN_004aa14c(&local_a0);
    ppppuVar2 = (undefined8 ****)local_a0;
    if (-1 < (char)local_89) {
      uStack_98 = (ulong)local_89;
      ppppuVar2 = &local_a0;
    }
    puVar3 = (undefined8 *)FUN_00547cac(&local_88,ppppuVar2,uStack_98);
    uStack_68 = puVar3[1];
    local_70 = *puVar3;
    local_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      puVar3 = (undefined8 *)FUN_00547cac(&local_70,&local_b8,1);
      uStack_48 = puVar3[1];
      local_50 = *puVar3;
      local_40 = puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      local_b9 = '\x01';
      if ((&UNK_001b679e < &local_d0) || ((undefined *)((ulong)&local_d0 | 1) < &UNK_001b679f)) {
        local_d0 = 0x5a;
        puVar3 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,1);
        uVar6 = puVar3[1];
        uVar5 = *puVar3;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar4 = puVar3[2];
        puVar3[2] = 0;
        param_1[1] = uVar6;
        *param_1 = uVar5;
        param_1[2] = uVar4;
        if (local_b9 < '\0') {
          operator_delete((void *)CONCAT62(uStack_ce,local_d0));
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if ((char)local_89 < '\0') {
          operator_delete(local_a0);
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004aa14c  FUN_004aa14c =====

void FUN_004aa14c(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  void *local_50 [2];
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004aa210(local_50);
  FUN_004aa330(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004aa210  FUN_004aa210 =====

void FUN_004aa210(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 local_58;
  undefined6 uStack_56;
  char local_41;
  void *local_40;
  undefined8 uStack_38;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_41 = '\x01';
  if ((&local_58 < &UNK_001a3137) && (&DAT_001a3136 < (undefined *)((ulong)&local_58 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_58 = 0x4c;
  puVar2 = (undefined8 *)FUN_00547cac(&local_58,"org/webrtc/VideoFrame",0x15);
  uStack_38 = puVar2[1];
  local_40 = (void *)*puVar2;
  local_30 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  puVar2 = (undefined8 *)FUN_00547cac(&local_40,&DAT_001a5eba,1);
  uVar5 = puVar2[1];
  uVar4 = *puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar3 = puVar2[2];
  puVar2[2] = 0;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[2] = uVar3;
  if (local_30 < 0) {
    operator_delete(local_40);
  }
  if (local_41 < '\0') {
    operator_delete((void *)CONCAT62(uStack_56,local_58));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004aa330  FUN_004aa330 =====

void FUN_004aa330(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_58;
  undefined7 uStack_57;
  char local_41;
  undefined2 local_40;
  undefined6 uStack_3e;
  char local_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_29 = '\x01';
  if ((&local_40 < &UNK_001b679f) && (&UNK_001b679e < (undefined *)((ulong)&local_40 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_41 = '\0';
  local_40 = 0x5a;
  local_58 = 0;
  puVar2 = (undefined8 *)FUN_00547cac(&local_40,&local_58,0);
  uVar5 = puVar2[1];
  uVar4 = *puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar3 = puVar2[2];
  puVar2[2] = 0;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[2] = uVar3;
  if (local_41 < '\0') {
    operator_delete((void *)CONCAT71(uStack_57,local_58));
  }
  if (local_29 < '\0') {
    operator_delete((void *)CONCAT62(uStack_3e,local_40));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004aa428  FUN_004aa428 =====

/* WARNING: Removing unreachable block (ram,0x004aa5d0) */
/* WARNING: Removing unreachable block (ram,0x004aa5f0) */

void FUN_004aa428(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 local_d0;
  undefined6 uStack_ce;
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined8 ***local_a0;
  ulong uStack_98;
  byte local_89;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_88 = 0x28;
    FUN_004aa330(&local_a0);
    ppppuVar2 = (undefined8 ****)local_a0;
    if (-1 < (char)local_89) {
      uStack_98 = (ulong)local_89;
      ppppuVar2 = &local_a0;
    }
    puVar3 = (undefined8 *)FUN_00547cac(&local_88,ppppuVar2,uStack_98);
    uStack_68 = puVar3[1];
    local_70 = *puVar3;
    local_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      puVar3 = (undefined8 *)FUN_00547cac(&local_70,&local_b8,1);
      uStack_48 = puVar3[1];
      local_50 = *puVar3;
      local_40 = puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      local_b9 = '\x01';
      if ((&UNK_001c7e75 < &local_d0) || ((undefined *)((ulong)&local_d0 | 1) < &UNK_001c7e76)) {
        local_d0 = 0x56;
        puVar3 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,1);
        uVar6 = puVar3[1];
        uVar5 = *puVar3;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar4 = puVar3[2];
        puVar3[2] = 0;
        param_1[1] = uVar6;
        *param_1 = uVar5;
        param_1[2] = uVar4;
        if (local_b9 < '\0') {
          operator_delete((void *)CONCAT62(uStack_ce,local_d0));
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if ((char)local_89 < '\0') {
          operator_delete(local_a0);
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004aa648  FUN_004aa648 =====

/* WARNING: Removing unreachable block (ram,0x004aa7f0) */
/* WARNING: Removing unreachable block (ram,0x004aa810) */

void FUN_004aa648(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 local_d0;
  undefined6 uStack_ce;
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined8 ***local_a0;
  ulong uStack_98;
  byte local_89;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_88 = 0x28;
    FUN_004aa868(&local_a0);
    ppppuVar2 = (undefined8 ****)local_a0;
    if (-1 < (char)local_89) {
      uStack_98 = (ulong)local_89;
      ppppuVar2 = &local_a0;
    }
    puVar3 = (undefined8 *)FUN_00547cac(&local_88,ppppuVar2,uStack_98);
    uStack_68 = puVar3[1];
    local_70 = *puVar3;
    local_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      puVar3 = (undefined8 *)FUN_00547cac(&local_70,&local_b8,1);
      uStack_48 = puVar3[1];
      local_50 = *puVar3;
      local_40 = puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      local_b9 = '\x01';
      if ((&UNK_001c7e75 < &local_d0) || ((undefined *)((ulong)&local_d0 | 1) < &UNK_001c7e76)) {
        local_d0 = 0x56;
        puVar3 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,1);
        uVar6 = puVar3[1];
        uVar5 = *puVar3;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar4 = puVar3[2];
        puVar3[2] = 0;
        param_1[1] = uVar6;
        *param_1 = uVar5;
        param_1[2] = uVar4;
        if (local_b9 < '\0') {
          operator_delete((void *)CONCAT62(uStack_ce,local_d0));
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if ((char)local_89 < '\0') {
          operator_delete(local_a0);
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004aa868  FUN_004aa868 =====

void FUN_004aa868(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  undefined2 local_50;
  undefined6 uStack_4e;
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_39 = '\x01';
  if ((&local_50 < &UNK_001a8a08) && (&UNK_001a8a07 < (undefined *)((ulong)&local_50 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_50 = 0x46;
  FUN_004a70e4(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete((void *)CONCAT62(uStack_4e,local_50));
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004aa97c  FUN_004aa97c =====

/* WARNING: Removing unreachable block (ram,0x004aab24) */
/* WARNING: Removing unreachable block (ram,0x004aab44) */

void FUN_004aa97c(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 local_d0;
  undefined6 uStack_ce;
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined8 ***local_a0;
  ulong uStack_98;
  byte local_89;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_88 = 0x28;
    FUN_004a646c(&local_a0);
    ppppuVar2 = (undefined8 ****)local_a0;
    if (-1 < (char)local_89) {
      uStack_98 = (ulong)local_89;
      ppppuVar2 = &local_a0;
    }
    puVar3 = (undefined8 *)FUN_00547cac(&local_88,ppppuVar2,uStack_98);
    uStack_68 = puVar3[1];
    local_70 = *puVar3;
    local_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      puVar3 = (undefined8 *)FUN_00547cac(&local_70,&local_b8,1);
      uStack_48 = puVar3[1];
      local_50 = *puVar3;
      local_40 = puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      local_b9 = '\x01';
      if ((&UNK_001c7e75 < &local_d0) || ((undefined *)((ulong)&local_d0 | 1) < &UNK_001c7e76)) {
        local_d0 = 0x56;
        puVar3 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,1);
        uVar6 = puVar3[1];
        uVar5 = *puVar3;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar4 = puVar3[2];
        puVar3[2] = 0;
        param_1[1] = uVar6;
        *param_1 = uVar5;
        param_1[2] = uVar4;
        if (local_b9 < '\0') {
          operator_delete((void *)CONCAT62(uStack_ce,local_d0));
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if ((char)local_89 < '\0') {
          operator_delete(local_a0);
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004aab9c  FUN_004aab9c =====

/* WARNING: Removing unreachable block (ram,0x004aad54) */
/* WARNING: Removing unreachable block (ram,0x004aad74) */

void FUN_004aab9c(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 ****ppppuVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 local_d0;
  undefined6 uStack_ce;
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined8 ***local_a0;
  ulong uStack_98;
  ulong local_90;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 ***local_50;
  ulong uStack_48;
  ulong local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_88 = 0x28;
    FUN_004aadcc(&local_50);
    uStack_98 = uStack_48;
    local_a0 = local_50;
    local_90 = local_40;
    uVar1 = uStack_48;
    ppppuVar3 = (undefined8 ****)local_50;
    if (-1 < (long)local_40) {
      uVar1 = local_40 >> 0x38;
      ppppuVar3 = &local_a0;
    }
    puVar4 = (undefined8 *)FUN_00547cac(&local_88,ppppuVar3,uVar1);
    uStack_68 = puVar4[1];
    local_70 = *puVar4;
    local_60 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      plVar5 = (long *)FUN_00547cac(&local_70,&local_b8,1);
      uStack_48 = plVar5[1];
      local_50 = (undefined8 ***)*plVar5;
      local_40 = plVar5[2];
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = 0;
      local_b9 = '\x01';
      if ((&UNK_001c7e75 < &local_d0) || ((undefined *)((ulong)&local_d0 | 1) < &UNK_001c7e76)) {
        local_d0 = 0x56;
        puVar4 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,1);
        uVar8 = puVar4[1];
        uVar7 = *puVar4;
        *puVar4 = 0;
        puVar4[1] = 0;
        uVar6 = puVar4[2];
        puVar4[2] = 0;
        param_1[1] = uVar8;
        *param_1 = uVar7;
        param_1[2] = uVar6;
        if (local_b9 < '\0') {
          operator_delete((void *)CONCAT62(uStack_ce,local_d0));
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if ((long)local_90 < 0) {
          operator_delete(local_a0);
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004aadcc  FUN_004aadcc =====

void FUN_004aadcc(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *local_60;
  char acStack_58 [8];
  undefined2 local_50;
  char local_4e [5];
  char local_49;
  undefined2 local_40;
  undefined6 uStack_3e;
  char local_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_29 = '\x01';
  if ((&DAT_0019769a < &local_40) || ((undefined *)((ulong)&local_40 | 1) < &UNK_0019769b)) {
    local_40 = 0x5b;
    local_49 = '\x12';
    if (("Ljava/lang/String;" < &local_60) || (local_4e < "java/lang/String;")) {
      local_4e[0] = '\0';
      local_50 = 0x3b67;
      acStack_58 = (char  [8])s_Ljava_lang_String__001db71a._8_8_;
      local_60 = (void *)s_Ljava_lang_String__001db71a._0_8_;
      puVar2 = (undefined8 *)FUN_00547cac(&local_40,&local_60,0x12);
      uVar5 = puVar2[1];
      uVar4 = *puVar2;
      *puVar2 = 0;
      puVar2[1] = 0;
      uVar3 = puVar2[2];
      puVar2[2] = 0;
      param_1[1] = uVar5;
      *param_1 = uVar4;
      param_1[2] = uVar3;
      if (local_49 < '\0') {
        operator_delete(local_60);
      }
      if (local_29 < '\0') {
        operator_delete((void *)CONCAT62(uStack_3e,local_40));
      }
      if (*(long *)(lVar1 + 0x28) == local_28) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004aaef8  FUN_004aaef8 =====

/* WARNING: Removing unreachable block (ram,0x004ab0a0) */
/* WARNING: Removing unreachable block (ram,0x004ab0c0) */

void FUN_004aaef8(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 local_d0;
  undefined6 uStack_ce;
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined8 ***local_a0;
  ulong uStack_98;
  byte local_89;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_88 = 0x28;
    FUN_004ab118(&local_a0);
    ppppuVar2 = (undefined8 ****)local_a0;
    if (-1 < (char)local_89) {
      uStack_98 = (ulong)local_89;
      ppppuVar2 = &local_a0;
    }
    puVar3 = (undefined8 *)FUN_00547cac(&local_88,ppppuVar2,uStack_98);
    uStack_68 = puVar3[1];
    local_70 = *puVar3;
    local_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      puVar3 = (undefined8 *)FUN_00547cac(&local_70,&local_b8,1);
      uStack_48 = puVar3[1];
      local_50 = *puVar3;
      local_40 = puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      local_b9 = '\x01';
      if ((&UNK_001c7e75 < &local_d0) || ((undefined *)((ulong)&local_d0 | 1) < &UNK_001c7e76)) {
        local_d0 = 0x56;
        puVar3 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,1);
        uVar6 = puVar3[1];
        uVar5 = *puVar3;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar4 = puVar3[2];
        puVar3[2] = 0;
        param_1[1] = uVar6;
        *param_1 = uVar5;
        param_1[2] = uVar4;
        if (local_b9 < '\0') {
          operator_delete((void *)CONCAT62(uStack_ce,local_d0));
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if ((char)local_89 < '\0') {
          operator_delete(local_a0);
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004ab118  FUN_004ab118 =====

void FUN_004ab118(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  void *local_50 [2];
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004ab1dc(local_50);
  FUN_004a646c(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004ab1dc  FUN_004ab1dc =====

void FUN_004ab1dc(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 local_58;
  undefined6 uStack_56;
  char local_41;
  void *local_40;
  undefined8 uStack_38;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_41 = '\x01';
  if ((&local_58 < &UNK_001a3137) && (&DAT_001a3136 < (undefined *)((ulong)&local_58 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_58 = 0x4c;
  puVar2 = (undefined8 *)FUN_00547cac(&local_58,"com/discord/native/engine/ConnectionInfo",0x28);
  uStack_38 = puVar2[1];
  local_40 = (void *)*puVar2;
  local_30 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  puVar2 = (undefined8 *)FUN_00547cac(&local_40,&DAT_001a5eba,1);
  uVar5 = puVar2[1];
  uVar4 = *puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar3 = puVar2[2];
  puVar2[2] = 0;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[2] = uVar3;
  if (local_30 < 0) {
    operator_delete(local_40);
  }
  if (local_41 < '\0') {
    operator_delete((void *)CONCAT62(uStack_56,local_58));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ab2fc  FUN_004ab2fc =====

/* WARNING: Removing unreachable block (ram,0x004ab4a4) */
/* WARNING: Removing unreachable block (ram,0x004ab4c4) */

void FUN_004ab2fc(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 local_d0;
  undefined6 uStack_ce;
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined8 ***local_a0;
  ulong uStack_98;
  byte local_89;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_88 = 0x28;
    FUN_004ab51c(&local_a0);
    ppppuVar2 = (undefined8 ****)local_a0;
    if (-1 < (char)local_89) {
      uStack_98 = (ulong)local_89;
      ppppuVar2 = &local_a0;
    }
    puVar3 = (undefined8 *)FUN_00547cac(&local_88,ppppuVar2,uStack_98);
    uStack_68 = puVar3[1];
    local_70 = *puVar3;
    local_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      puVar3 = (undefined8 *)FUN_00547cac(&local_70,&local_b8,1);
      uStack_48 = puVar3[1];
      local_50 = *puVar3;
      local_40 = puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      local_b9 = '\x01';
      if ((&UNK_001c7e75 < &local_d0) || ((undefined *)((ulong)&local_d0 | 1) < &UNK_001c7e76)) {
        local_d0 = 0x56;
        puVar3 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,1);
        uVar6 = puVar3[1];
        uVar5 = *puVar3;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar4 = puVar3[2];
        puVar3[2] = 0;
        param_1[1] = uVar6;
        *param_1 = uVar5;
        param_1[2] = uVar4;
        if (local_b9 < '\0') {
          operator_delete((void *)CONCAT62(uStack_ce,local_d0));
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if ((char)local_89 < '\0') {
          operator_delete(local_a0);
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004ab51c  FUN_004ab51c =====

void FUN_004ab51c(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  void *local_50;
  char acStack_48 [8];
  undefined2 local_40;
  char local_3e [5];
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_39 = '\x12';
  if ((&local_50 < (void **)0x1db71b) && ("Ljava/lang/String;" < local_3e)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_3e[0] = '\0';
  local_40 = 0x3b67;
  acStack_48 = (char  [8])s_Ljava_lang_String__001db71a._8_8_;
  local_50 = (void *)s_Ljava_lang_String__001db71a._0_8_;
  FUN_004a70e4(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004ab63c  FUN_004ab63c =====

/* WARNING: Removing unreachable block (ram,0x004ab7f4) */
/* WARNING: Removing unreachable block (ram,0x004ab814) */

void FUN_004ab63c(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 ****ppppuVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 local_d0;
  undefined6 uStack_ce;
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined8 ***local_a0;
  ulong uStack_98;
  ulong local_90;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 ***local_50;
  ulong uStack_48;
  ulong local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_88 = 0x28;
    FUN_004ab86c(&local_50);
    uStack_98 = uStack_48;
    local_a0 = local_50;
    local_90 = local_40;
    uVar1 = uStack_48;
    ppppuVar3 = (undefined8 ****)local_50;
    if (-1 < (long)local_40) {
      uVar1 = local_40 >> 0x38;
      ppppuVar3 = &local_a0;
    }
    puVar4 = (undefined8 *)FUN_00547cac(&local_88,ppppuVar3,uVar1);
    uStack_68 = puVar4[1];
    local_70 = *puVar4;
    local_60 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      plVar5 = (long *)FUN_00547cac(&local_70,&local_b8,1);
      uStack_48 = plVar5[1];
      local_50 = (undefined8 ***)*plVar5;
      local_40 = plVar5[2];
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = 0;
      local_b9 = '\x01';
      if ((&UNK_001c7e75 < &local_d0) || ((undefined *)((ulong)&local_d0 | 1) < &UNK_001c7e76)) {
        local_d0 = 0x56;
        puVar4 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,1);
        uVar8 = puVar4[1];
        uVar7 = *puVar4;
        *puVar4 = 0;
        puVar4[1] = 0;
        uVar6 = puVar4[2];
        puVar4[2] = 0;
        param_1[1] = uVar8;
        *param_1 = uVar7;
        param_1[2] = uVar6;
        if (local_b9 < '\0') {
          operator_delete((void *)CONCAT62(uStack_ce,local_d0));
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if ((long)local_90 < 0) {
          operator_delete(local_a0);
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004ab86c  FUN_004ab86c =====

void FUN_004ab86c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 local_58;
  undefined6 uStack_56;
  char local_41;
  void *local_40;
  undefined8 uStack_38;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_41 = '\x01';
  if ((&local_58 < &UNK_001a3137) && (&DAT_001a3136 < (undefined *)((ulong)&local_58 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_58 = 0x4c;
  puVar2 = (undefined8 *)
           FUN_00547cac(&local_58,"com/discord/native/engine/AudioInputInitializationInfo",0x36);
  uStack_38 = puVar2[1];
  local_40 = (void *)*puVar2;
  local_30 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  puVar2 = (undefined8 *)FUN_00547cac(&local_40,&DAT_001a5eba,1);
  uVar5 = puVar2[1];
  uVar4 = *puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar3 = puVar2[2];
  puVar2[2] = 0;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[2] = uVar3;
  if (local_30 < 0) {
    operator_delete(local_40);
  }
  if (local_41 < '\0') {
    operator_delete((void *)CONCAT62(uStack_56,local_58));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ab98c  FUN_004ab98c =====

/* WARNING: Removing unreachable block (ram,0x004abb34) */
/* WARNING: Removing unreachable block (ram,0x004abb54) */

void FUN_004ab98c(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 local_d0;
  undefined6 uStack_ce;
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined8 ***local_a0;
  ulong uStack_98;
  byte local_89;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_88 = 0x28;
    FUN_004a70e4(&local_a0);
    ppppuVar2 = (undefined8 ****)local_a0;
    if (-1 < (char)local_89) {
      uStack_98 = (ulong)local_89;
      ppppuVar2 = &local_a0;
    }
    puVar3 = (undefined8 *)FUN_00547cac(&local_88,ppppuVar2,uStack_98);
    uStack_68 = puVar3[1];
    local_70 = *puVar3;
    local_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      puVar3 = (undefined8 *)FUN_00547cac(&local_70,&local_b8,1);
      uStack_48 = puVar3[1];
      local_50 = *puVar3;
      local_40 = puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      local_b9 = '\x01';
      if ((&UNK_001c7e75 < &local_d0) || ((undefined *)((ulong)&local_d0 | 1) < &UNK_001c7e76)) {
        local_d0 = 0x56;
        puVar3 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,1);
        uVar6 = puVar3[1];
        uVar5 = *puVar3;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar4 = puVar3[2];
        puVar3[2] = 0;
        param_1[1] = uVar6;
        *param_1 = uVar5;
        param_1[2] = uVar4;
        if (local_b9 < '\0') {
          operator_delete((void *)CONCAT62(uStack_ce,local_d0));
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if ((char)local_89 < '\0') {
          operator_delete(local_a0);
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004abbac  FUN_004abbac =====

/* WARNING: Removing unreachable block (ram,0x004abd54) */
/* WARNING: Removing unreachable block (ram,0x004abd74) */

void FUN_004abbac(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 local_d0;
  undefined6 uStack_ce;
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined8 ***local_a0;
  ulong uStack_98;
  byte local_89;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_88 = 0x28;
    FUN_004abdcc(&local_a0);
    ppppuVar2 = (undefined8 ****)local_a0;
    if (-1 < (char)local_89) {
      uStack_98 = (ulong)local_89;
      ppppuVar2 = &local_a0;
    }
    puVar3 = (undefined8 *)FUN_00547cac(&local_88,ppppuVar2,uStack_98);
    uStack_68 = puVar3[1];
    local_70 = *puVar3;
    local_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      puVar3 = (undefined8 *)FUN_00547cac(&local_70,&local_b8,1);
      uStack_48 = puVar3[1];
      local_50 = *puVar3;
      local_40 = puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      local_b9 = '\x01';
      if ((&UNK_001c7e75 < &local_d0) || ((undefined *)((ulong)&local_d0 | 1) < &UNK_001c7e76)) {
        local_d0 = 0x56;
        puVar3 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,1);
        uVar6 = puVar3[1];
        uVar5 = *puVar3;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar4 = puVar3[2];
        puVar3[2] = 0;
        param_1[1] = uVar6;
        *param_1 = uVar5;
        param_1[2] = uVar4;
        if (local_b9 < '\0') {
          operator_delete((void *)CONCAT62(uStack_ce,local_d0));
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if ((char)local_89 < '\0') {
          operator_delete(local_a0);
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004abdcc  FUN_004abdcc =====

void FUN_004abdcc(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  void *local_50;
  char acStack_48 [8];
  undefined2 local_40;
  char local_3e [5];
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_39 = '\x12';
  if ((&local_50 < (void **)0x1db71b) && ("Ljava/lang/String;" < local_3e)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_3e[0] = '\0';
  local_40 = 0x3b67;
  acStack_48 = (char  [8])s_Ljava_lang_String__001db71a._8_8_;
  local_50 = (void *)s_Ljava_lang_String__001db71a._0_8_;
  FUN_004abeec(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004abeec  FUN_004abeec =====

void FUN_004abeec(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  undefined2 local_50;
  undefined6 uStack_4e;
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_39 = '\x01';
  if ((&local_50 < &UNK_0019fcd8) && (&DAT_0019fcd7 < (undefined *)((ulong)&local_50 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_50 = 0x49;
  FUN_004ac000(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete((void *)CONCAT62(uStack_4e,local_50));
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004ac000  FUN_004ac000 =====

void FUN_004ac000(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_58;
  undefined7 uStack_57;
  char local_41;
  undefined2 local_40;
  undefined6 uStack_3e;
  char local_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_29 = '\x01';
  if ((&local_40 < &UNK_001a8a08) && (&UNK_001a8a07 < (undefined *)((ulong)&local_40 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_41 = '\0';
  local_40 = 0x46;
  local_58 = 0;
  puVar2 = (undefined8 *)FUN_00547cac(&local_40,&local_58,0);
  uVar5 = puVar2[1];
  uVar4 = *puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar3 = puVar2[2];
  puVar2[2] = 0;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[2] = uVar3;
  if (local_41 < '\0') {
    operator_delete((void *)CONCAT71(uStack_57,local_58));
  }
  if (local_29 < '\0') {
    operator_delete((void *)CONCAT62(uStack_3e,local_40));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ac0f8  FUN_004ac0f8 =====

/* WARNING: Removing unreachable block (ram,0x004ac2a0) */
/* WARNING: Removing unreachable block (ram,0x004ac2c0) */

void FUN_004ac0f8(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 local_d0;
  undefined6 uStack_ce;
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined8 ***local_a0;
  ulong uStack_98;
  byte local_89;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_88 = 0x28;
    FUN_004ac318(&local_a0);
    ppppuVar2 = (undefined8 ****)local_a0;
    if (-1 < (char)local_89) {
      uStack_98 = (ulong)local_89;
      ppppuVar2 = &local_a0;
    }
    puVar3 = (undefined8 *)FUN_00547cac(&local_88,ppppuVar2,uStack_98);
    uStack_68 = puVar3[1];
    local_70 = *puVar3;
    local_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      puVar3 = (undefined8 *)FUN_00547cac(&local_70,&local_b8,1);
      uStack_48 = puVar3[1];
      local_50 = *puVar3;
      local_40 = puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      local_b9 = '\x01';
      if ((&UNK_001c7e75 < &local_d0) || ((undefined *)((ulong)&local_d0 | 1) < &UNK_001c7e76)) {
        local_d0 = 0x56;
        puVar3 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,1);
        uVar6 = puVar3[1];
        uVar5 = *puVar3;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar4 = puVar3[2];
        puVar3[2] = 0;
        param_1[1] = uVar6;
        *param_1 = uVar5;
        param_1[2] = uVar4;
        if (local_b9 < '\0') {
          operator_delete((void *)CONCAT62(uStack_ce,local_d0));
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if ((char)local_89 < '\0') {
          operator_delete(local_a0);
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004ac318  FUN_004ac318 =====

void FUN_004ac318(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  undefined2 local_50;
  undefined6 uStack_4e;
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_39 = '\x01';
  if ((&local_50 < &UNK_0019fcd8) && (&DAT_0019fcd7 < (undefined *)((ulong)&local_50 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_50 = 0x49;
  FUN_004ac42c(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete((void *)CONCAT62(uStack_4e,local_50));
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004ac42c  FUN_004ac42c =====

void FUN_004ac42c(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  void *local_50;
  char acStack_48 [8];
  undefined2 local_40;
  char local_3e [5];
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_39 = '\x12';
  if ((&local_50 < (void **)0x1db71b) && ("Ljava/lang/String;" < local_3e)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_3e[0] = '\0';
  local_40 = 0x3b67;
  acStack_48 = (char  [8])s_Ljava_lang_String__001db71a._8_8_;
  local_50 = (void *)s_Ljava_lang_String__001db71a._0_8_;
  FUN_004a6fd0(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004ac54c  FUN_004ac54c =====

/* WARNING: Removing unreachable block (ram,0x004ac6f4) */
/* WARNING: Removing unreachable block (ram,0x004ac714) */

void FUN_004ac54c(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 local_d0;
  undefined6 uStack_ce;
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined8 ***local_a0;
  ulong uStack_98;
  byte local_89;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_88 = 0x28;
    FUN_004ac76c(&local_a0);
    ppppuVar2 = (undefined8 ****)local_a0;
    if (-1 < (char)local_89) {
      uStack_98 = (ulong)local_89;
      ppppuVar2 = &local_a0;
    }
    puVar3 = (undefined8 *)FUN_00547cac(&local_88,ppppuVar2,uStack_98);
    uStack_68 = puVar3[1];
    local_70 = *puVar3;
    local_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      puVar3 = (undefined8 *)FUN_00547cac(&local_70,&local_b8,1);
      uStack_48 = puVar3[1];
      local_50 = *puVar3;
      local_40 = puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      local_b9 = '\x01';
      if ((&UNK_001c7e75 < &local_d0) || ((undefined *)((ulong)&local_d0 | 1) < &UNK_001c7e76)) {
        local_d0 = 0x56;
        puVar3 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,1);
        uVar6 = puVar3[1];
        uVar5 = *puVar3;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar4 = puVar3[2];
        puVar3[2] = 0;
        param_1[1] = uVar6;
        *param_1 = uVar5;
        param_1[2] = uVar4;
        if (local_b9 < '\0') {
          operator_delete((void *)CONCAT62(uStack_ce,local_d0));
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if ((char)local_89 < '\0') {
          operator_delete(local_a0);
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004ac76c  FUN_004ac76c =====

void FUN_004ac76c(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  void *local_50;
  char acStack_48 [8];
  undefined2 local_40;
  char local_3e [5];
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_39 = '\x12';
  if ((&local_50 < (void **)0x1db71b) && ("Ljava/lang/String;" < local_3e)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_3e[0] = '\0';
  local_40 = 0x3b67;
  acStack_48 = (char  [8])s_Ljava_lang_String__001db71a._8_8_;
  local_50 = (void *)s_Ljava_lang_String__001db71a._0_8_;
  FUN_004ac88c(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004ac88c  FUN_004ac88c =====

void FUN_004ac88c(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  undefined2 local_50;
  undefined6 uStack_4e;
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_39 = '\x01';
  if ((&local_50 < &UNK_001b9790) && (&UNK_001b978f < (undefined *)((ulong)&local_50 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_50 = 0x4a;
  FUN_004a646c(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete((void *)CONCAT62(uStack_4e,local_50));
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004ac9a0  FUN_004ac9a0 =====

/* WARNING: Removing unreachable block (ram,0x004acb48) */
/* WARNING: Removing unreachable block (ram,0x004acb68) */

void FUN_004ac9a0(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 local_d0;
  undefined6 uStack_ce;
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined8 ***local_a0;
  ulong uStack_98;
  byte local_89;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_88 = 0x28;
    FUN_004acbc0(&local_a0);
    ppppuVar2 = (undefined8 ****)local_a0;
    if (-1 < (char)local_89) {
      uStack_98 = (ulong)local_89;
      ppppuVar2 = &local_a0;
    }
    puVar3 = (undefined8 *)FUN_00547cac(&local_88,ppppuVar2,uStack_98);
    uStack_68 = puVar3[1];
    local_70 = *puVar3;
    local_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      puVar3 = (undefined8 *)FUN_00547cac(&local_70,&local_b8,1);
      uStack_48 = puVar3[1];
      local_50 = *puVar3;
      local_40 = puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      local_b9 = '\x01';
      if ((&UNK_001c7e75 < &local_d0) || ((undefined *)((ulong)&local_d0 | 1) < &UNK_001c7e76)) {
        local_d0 = 0x56;
        puVar3 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,1);
        uVar6 = puVar3[1];
        uVar5 = *puVar3;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar4 = puVar3[2];
        puVar3[2] = 0;
        param_1[1] = uVar6;
        *param_1 = uVar5;
        param_1[2] = uVar4;
        if (local_b9 < '\0') {
          operator_delete((void *)CONCAT62(uStack_ce,local_d0));
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if ((char)local_89 < '\0') {
          operator_delete(local_a0);
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004acbc0  FUN_004acbc0 =====

void FUN_004acbc0(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  void *local_50;
  char acStack_48 [8];
  undefined2 local_40;
  char local_3e [5];
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_39 = '\x12';
  if ((&local_50 < (void **)0x1db71b) && ("Ljava/lang/String;" < local_3e)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_3e[0] = '\0';
  local_40 = 0x3b67;
  acStack_48 = (char  [8])s_Ljava_lang_String__001db71a._8_8_;
  local_50 = (void *)s_Ljava_lang_String__001db71a._0_8_;
  FUN_004a6ebc(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004acce0  FUN_004acce0 =====

/* WARNING: Removing unreachable block (ram,0x004ace88) */
/* WARNING: Removing unreachable block (ram,0x004acea8) */

void FUN_004acce0(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 local_d0;
  undefined6 uStack_ce;
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined8 ***local_a0;
  ulong uStack_98;
  byte local_89;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_88 = 0x28;
    FUN_004acf00(&local_a0);
    ppppuVar2 = (undefined8 ****)local_a0;
    if (-1 < (char)local_89) {
      uStack_98 = (ulong)local_89;
      ppppuVar2 = &local_a0;
    }
    puVar3 = (undefined8 *)FUN_00547cac(&local_88,ppppuVar2,uStack_98);
    uStack_68 = puVar3[1];
    local_70 = *puVar3;
    local_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      puVar3 = (undefined8 *)FUN_00547cac(&local_70,&local_b8,1);
      uStack_48 = puVar3[1];
      local_50 = *puVar3;
      local_40 = puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      local_b9 = '\x01';
      if ((&UNK_001c7e75 < &local_d0) || ((undefined *)((ulong)&local_d0 | 1) < &UNK_001c7e76)) {
        local_d0 = 0x56;
        puVar3 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,1);
        uVar6 = puVar3[1];
        uVar5 = *puVar3;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar4 = puVar3[2];
        puVar3[2] = 0;
        param_1[1] = uVar6;
        *param_1 = uVar5;
        param_1[2] = uVar4;
        if (local_b9 < '\0') {
          operator_delete((void *)CONCAT62(uStack_ce,local_d0));
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if ((char)local_89 < '\0') {
          operator_delete(local_a0);
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004acf00  FUN_004acf00 =====

void FUN_004acf00(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  void *local_50;
  char acStack_48 [8];
  undefined2 local_40;
  char local_3e [5];
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_39 = '\x12';
  if ((&local_50 < (void **)0x1db71b) && ("Ljava/lang/String;" < local_3e)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_3e[0] = '\0';
  local_40 = 0x3b67;
  acStack_48 = (char  [8])s_Ljava_lang_String__001db71a._8_8_;
  local_50 = (void *)s_Ljava_lang_String__001db71a._0_8_;
  FUN_004ad020(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004ad020  FUN_004ad020 =====

void FUN_004ad020(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  undefined2 local_50;
  undefined6 uStack_4e;
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_39 = '\x01';
  if ((&local_50 < &UNK_001b9790) && (&UNK_001b978f < (undefined *)((ulong)&local_50 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_50 = 0x4a;
  FUN_004a7c38(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete((void *)CONCAT62(uStack_4e,local_50));
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004ad134  FUN_004ad134 =====

/* WARNING: Removing unreachable block (ram,0x004ad2dc) */
/* WARNING: Removing unreachable block (ram,0x004ad2fc) */

void FUN_004ad134(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 local_d0;
  undefined6 uStack_ce;
  char local_b9;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_a1;
  undefined8 ***local_a0;
  ulong uStack_98;
  byte local_89;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_71 = '\x01';
  if ((&DAT_0019fcd5 < &local_88) || ((undefined *)((ulong)&local_88 | 1) < &UNK_0019fcd6)) {
    local_88 = 0x28;
    FUN_004ad354(&local_a0);
    ppppuVar2 = (undefined8 ****)local_a0;
    if (-1 < (char)local_89) {
      uStack_98 = (ulong)local_89;
      ppppuVar2 = &local_a0;
    }
    puVar3 = (undefined8 *)FUN_00547cac(&local_88,ppppuVar2,uStack_98);
    uStack_68 = puVar3[1];
    local_70 = *puVar3;
    local_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    local_a1 = '\x01';
    if ((&DAT_001ca519 < &local_b8) || ((undefined *)((ulong)&local_b8 | 1) < &UNK_001ca51a)) {
      local_b8 = 0x29;
      puVar3 = (undefined8 *)FUN_00547cac(&local_70,&local_b8,1);
      uStack_48 = puVar3[1];
      local_50 = *puVar3;
      local_40 = puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      local_b9 = '\x01';
      if ((&UNK_001c7e75 < &local_d0) || ((undefined *)((ulong)&local_d0 | 1) < &UNK_001c7e76)) {
        local_d0 = 0x56;
        puVar3 = (undefined8 *)FUN_00547cac(&local_50,&local_d0,1);
        uVar6 = puVar3[1];
        uVar5 = *puVar3;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar4 = puVar3[2];
        puVar3[2] = 0;
        param_1[1] = uVar6;
        *param_1 = uVar5;
        param_1[2] = uVar4;
        if (local_b9 < '\0') {
          operator_delete((void *)CONCAT62(uStack_ce,local_d0));
        }
        if (local_a1 < '\0') {
          operator_delete((void *)CONCAT62(uStack_b6,local_b8));
        }
        if ((char)local_89 < '\0') {
          operator_delete(local_a0);
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT62(uStack_86,local_88));
        }
        if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004ad354  FUN_004ad354 =====

void FUN_004ad354(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  undefined2 local_50;
  undefined6 uStack_4e;
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_39 = '\x01';
  if ((&local_50 < &UNK_001b679f) && (&UNK_001b679e < (undefined *)((ulong)&local_50 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_50 = 0x5a;
  FUN_004ad468(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete((void *)CONCAT62(uStack_4e,local_50));
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004ad468  FUN_004ad468 =====

void FUN_004ad468(undefined8 *param_1)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_68;
  ulong uStack_60;
  byte local_51;
  undefined2 local_50;
  undefined6 uStack_4e;
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_39 = '\x01';
  if ((&local_50 < &UNK_0019fcd8) && (&DAT_0019fcd7 < (undefined *)((ulong)&local_50 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_50 = 0x49;
  FUN_004a646c(&local_68);
  ppppuVar2 = (undefined8 ****)local_68;
  if (-1 < (char)local_51) {
    uStack_60 = (ulong)local_51;
    ppppuVar2 = &local_68;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_50,ppppuVar2,uStack_60);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_39 < '\0') {
    operator_delete((void *)CONCAT62(uStack_4e,local_50));
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004ad57c  _INIT_3 =====

void _INIT_3(void)

{
  DAT_00d60c68 = 0;
  __cxa_atexit(FUN_004a266c,&DAT_00d60c68,&PTR_LOOP_00d19390);
  DAT_00d60c70 = 0;
  __cxa_atexit(FUN_004a266c,&DAT_00d60c70,&PTR_LOOP_00d19390);
  __cxa_atexit(FUN_004a26a8,&DAT_00d60c78,&PTR_LOOP_00d19390);
  __cxa_atexit(FUN_004a26a8,&DAT_00d60c90,&PTR_LOOP_00d19390);
  return;
}


// ===== 004ad600  FUN_004ad600 =====

float FUN_004ad600(float param_1)

{
  float fVar1;
  
  fVar1 = logf(param_1);
  return (float)((double)fVar1 * DAT_001f5a80);
}


// ===== 004ad628  FUN_004ad628 =====

/* WARNING: Removing unreachable block (ram,0x004ad66c) */
/* WARNING: Removing unreachable block (ram,0x004ad680) */

void FUN_004ad628(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = (void *)*param_1;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)param_1[1];
    pvVar1 = pvVar2;
    if (pvVar3 != pvVar2) {
      do {
        pvVar3 = (void *)((long)pvVar3 + -0x38);
      } while (pvVar3 != pvVar2);
      pvVar1 = (void *)*param_1;
    }
    param_1[1] = pvVar2;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 004ad6b4  FUN_004ad6b4 =====

/* WARNING: Removing unreachable block (ram,0x004adc7c) */
/* WARNING: Removing unreachable block (ram,0x004ada04) */
/* WARNING: Removing unreachable block (ram,0x004ada18) */
/* WARNING: Removing unreachable block (ram,0x004adea4) */
/* WARNING: Removing unreachable block (ram,0x004aded8) */
/* WARNING: Removing unreachable block (ram,0x004adc8c) */
/* WARNING: Removing unreachable block (ram,0x004adec8) */

void FUN_004ad6b4(long param_1)

{
  ulong uVar1;
  char ****ppppcVar2;
  size_t __n;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  char ****ppppcVar9;
  char *pcVar10;
  char cVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 *local_f0;
  ulong uStack_e8;
  ulong local_e0;
  undefined8 *local_d8;
  void **ppvStack_d0;
  char ***local_c8;
  char ***local_c0;
  ulong local_b8;
  ulong uStack_b0;
  void *local_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 local_90;
  undefined1 local_88 [24];
  char ***local_70;
  size_t local_68;
  byte local_59;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_005467a4(&DAT_00d60e98);
  cVar11 = DAT_00d60ec0;
  if (DAT_00d60ec0 != '\0') goto LAB_004adafc;
  cVar11 = *PTR_DAT_00d51ad0;
  lVar6 = dlopen("libkrisp-audio-sdk.so",1);
  if (lVar6 == 0) {
    uVar8 = dlerror();
    __android_log_print(6,"DiscordKrisp","dlopen(libkrisp-audio-sdk.so) FAILED: %s",uVar8);
    cVar11 = '\0';
    goto LAB_004adafc;
  }
  DAT_00d60ec8 = (code *)dlsym(lVar6,"krispGlobalInit");
  if (DAT_00d60ec8 == (code *)0x0) {
    uVar8 = dlerror();
    pcVar10 = "dlsym FAILED for krispGlobalInit: %s";
  }
  else {
    DAT_00d60ed0 = dlsym(lVar6,"krispGlobalDestroy");
    if (DAT_00d60ed0 == 0) {
      uVar8 = dlerror();
      pcVar10 = "dlsym FAILED for krispGlobalDestroy: %s";
    }
    else {
      DAT_00d60ed8 = dlsym(lVar6,"krispCreateNcInt16");
      if (DAT_00d60ed8 == 0) {
        uVar8 = dlerror();
        pcVar10 = "dlsym FAILED for krispCreateNcInt16: %s";
      }
      else {
        DAT_00d60ee0 = dlsym(lVar6,"krispCreateNcFloat");
        if (DAT_00d60ee0 == 0) {
          uVar8 = dlerror();
          pcVar10 = "dlsym FAILED for krispCreateNcFloat: %s";
        }
        else {
          DAT_00d60ee8 = dlsym(lVar6,"krispDestroyNc");
          if (DAT_00d60ee8 == 0) {
            uVar8 = dlerror();
            pcVar10 = "dlsym FAILED for krispDestroyNc: %s";
          }
          else {
            DAT_00d60ef0 = dlsym(lVar6,"krispProcessNcInt16");
            if (DAT_00d60ef0 == 0) {
              uVar8 = dlerror();
              pcVar10 = "dlsym FAILED for krispProcessNcInt16: %s";
            }
            else {
              DAT_00d60ef8 = dlsym(lVar6,"krispProcessNcFloat");
              if (DAT_00d60ef8 == 0) {
                uVar8 = dlerror();
                pcVar10 = "dlsym FAILED for krispProcessNcFloat: %s";
              }
              else {
                DAT_00d60f00 = dlsym(lVar6,"krispGetNcSessionStats");
                if (DAT_00d60f00 == 0) {
                  uVar8 = dlerror();
                  pcVar10 = "dlsym FAILED for krispGetNcSessionStats: %s";
                }
                else {
                  DAT_00d60f08 = dlsym(lVar6,"krispCreateVadInt16");
                  if (DAT_00d60f08 == 0) {
                    uVar8 = dlerror();
                    pcVar10 = "dlsym FAILED for krispCreateVadInt16: %s";
                  }
                  else {
                    DAT_00d60f10 = dlsym(lVar6,"krispCreateVadFloat");
                    if (DAT_00d60f10 == 0) {
                      uVar8 = dlerror();
                      pcVar10 = "dlsym FAILED for krispCreateVadFloat: %s";
                    }
                    else {
                      DAT_00d60f18 = dlsym(lVar6,"krispDestroyVad");
                      if (DAT_00d60f18 == 0) {
                        uVar8 = dlerror();
                        pcVar10 = "dlsym FAILED for krispDestroyVad: %s";
                      }
                      else {
                        DAT_00d60f20 = dlsym(lVar6,"krispProcessVadInt16");
                        if (DAT_00d60f20 == 0) {
                          uVar8 = dlerror();
                          pcVar10 = "dlsym FAILED for krispProcessVadInt16: %s";
                        }
                        else {
                          DAT_00d60f28 = dlsym(lVar6,"krispProcessVadFloat");
                          if (DAT_00d60f28 != 0) {
                            DAT_00d60f30 = lVar6;
                            FUN_004a3f38(&local_70);
                            FUN_00511e50(local_88,&local_70);
                            iVar4 = (*DAT_00d60ec8)(local_88,0,6);
                            if (iVar4 != 0) {
                              __android_log_print(6,"DiscordKrisp","krispGlobalInit FAILED: %d",
                                                  iVar4);
                              for (; DAT_00d60e70 != DAT_00d60e68;
                                  DAT_00d60e70 = DAT_00d60e70 + -0x38) {
                              }
                              DAT_00d60e70 = DAT_00d60e68;
                              if ((long)DAT_00d60e90 < 0) {
                                *DAT_00d60e80 = 0;
                                DAT_00d60e88 = 0;
                              }
                              else {
                                DAT_00d60e80 = (undefined4 *)
                                               ((ulong)DAT_00d60e80 & 0xffffffff00000000);
                                DAT_00d60e90 = DAT_00d60e90 & 0xffffffffffffff;
                              }
                              if (DAT_00d60f30 == 0) {
                                cVar11 = '\0';
                              }
                              else {
                                dlclose();
                                DAT_00d60f30 = 0;
                                cVar11 = '\0';
                              }
                              goto LAB_004adafc;
                            }
                            local_90 = FUN_004a4250();
                            local_a8 = (void *)0x0;
                            uStack_a0 = 0;
                            local_98 = 0;
                            uVar7 = FUN_004a3bc0();
                            if ((uVar7 & 1) != 0) {
                              lVar6 = FUN_004a3bd4();
                              uVar12 = *(undefined8 *)(lVar6 + 0x7b8);
                              uVar13 = *(undefined8 *)(lVar6 + 0x7c0);
                              uVar8 = FUN_004a2934();
                              FUN_004aecec(uVar8,uVar12,uVar13);
                              FUN_004a3c54(&local_a8);
                            }
                            __n = local_68;
                            if (-1 < (char)local_59) {
                              __n = (ulong)local_59;
                            }
                            uVar7 = __n + 4;
                            if (0x7fffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
                              abort();
                            }
                            if (uVar7 < 0x17) {
                              local_b8 = 0;
                              ppppcVar9 = &local_c0;
                              local_c0 = (char ***)0x0;
                              uStack_b0 = uVar7 << 0x38;
                            }
                            else {
                              uVar1 = (uVar7 | 0xf) + 1;
                              ppppcVar9 = (char ****)operator_new(uVar1);
                              uStack_b0 = uVar1 | 0x8000000000000000;
                              local_c0 = (char ***)ppppcVar9;
                              local_b8 = uVar7;
                            }
                            ppppcVar2 = (char ****)((long)ppppcVar9 + __n);
                            if (-1 < (char)local_59) {
                              local_70 = (char ***)&local_70;
                            }
                            if ((ppppcVar9 <= local_70) && (local_70 < ppppcVar2)) {
LAB_004adee4:
                    /* WARNING: Subroutine does not return */
                              std::__Cr::__libcpp_verbose_abort
                                        ("%s:%d: assertion %s failed: %s",
                                         "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                                         ,0xec,"__s2 < __s1 || __s2 >= __s1+__n",
                                         "char_traits::copy overlapped range");
                            }
                            if (__n != 0) {
                              memmove(ppppcVar9,local_70,__n);
                            }
                            if ((ppppcVar2 < &UNK_001e7560) &&
                               ("/thz" < (char *)((long)ppppcVar2 + 4))) goto LAB_004adee4;
                            *(char *)((long)ppppcVar2 + 4) = '\0';
                            local_c8 = (char ***)&local_c0;
                            *(undefined4 *)ppppcVar2 = 0x7a68742f;
                            ppppcVar9 = (char ****)local_c0;
                            if (-1 < (long)uStack_b0) {
                              ppppcVar9 = (char ****)local_c8;
                            }
                            mkdir((char *)ppppcVar9,0x1c0);
                            local_d8 = &local_90;
                            ppvStack_d0 = &local_a8;
                            uVar7 = FUN_004ae180(&local_d8,"krisp-nc-o-nb-v2.kef",8000,"small_NC_8k"
                                                );
                            uVar5 = 0;
                            if ((((uVar7 & 1) != 0) &&
                                (uVar5 = FUN_004ae180(&local_d8,"krisp-nc-o-lite-v1.kef",16000,
                                                      "small_NC"), cVar11 != '\0')) &&
                               ((uVar5 & 1) != 0)) {
                              uVar5 = FUN_004ae180(&local_d8,"krisp-nc-o-med-v7.kef",96000,"full_NC"
                                                  );
                            }
                            FUN_004ae4ec(&local_f0,local_90,&local_a8,&local_c0,"krisp-vad-o-v2.kef"
                                        );
                            if ((long)DAT_00d60e90 < 0) {
                              operator_delete(DAT_00d60e80);
                            }
                            DAT_00d60e90 = local_e0;
                            DAT_00d60e88 = uStack_e8;
                            DAT_00d60e80 = local_f0;
                            if ((uVar5 & 1) == 0) {
LAB_004ade20:
                              if (-1 < (long)local_e0) {
                                uStack_e8 = local_e0 >> 0x38;
                              }
                              __android_log_print(6,"DiscordKrisp",
                                                  "Initialize FAILED to load models (ncModelsOk=%d ncModelCount=%zu vadMissing=%d)"
                                                  ,uVar5 & 1,
                                                  (DAT_00d60e70 - DAT_00d60e68 >> 3) *
                                                  0x6db6db6db6db6db7,uStack_e8 == 0);
                              FUN_004ae0ac(1);
                              cVar11 = '\0';
                            }
                            else {
                              uVar7 = uStack_e8;
                              if (-1 < (long)local_e0) {
                                uVar7 = local_e0 >> 0x38;
                              }
                              if (uVar7 == 0) goto LAB_004ade20;
                              cVar11 = '\x01';
                            }
                            if ((long)uStack_b0 < 0) {
                              operator_delete(local_c0);
                            }
                            if (local_98 < 0) {
                              operator_delete(local_a8);
                            }
                            goto LAB_004adafc;
                          }
                          uVar8 = dlerror();
                          pcVar10 = "dlsym FAILED for krispProcessVadFloat: %s";
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
  __android_log_print(6,"DiscordKrisp",pcVar10,uVar8);
  dlclose(lVar6);
  cVar11 = '\0';
LAB_004adafc:
  DAT_00d60ec0 = cVar11;
  FUN_005467c8(&DAT_00d60e98);
  cVar11 = DAT_00d60ec0;
  if (DAT_00d60ec0 == '\0') {
    __android_log_print(6,"DiscordKrisp","Krisp SDK not initialized");
  }
  else {
    *(code **)(param_1 + 8) = FUN_004adf14;
    *(code **)(param_1 + 0x10) = thunk_FUN_004aed88;
    *(code **)(param_1 + 0x18) = FUN_004adf20;
    *(code **)(param_1 + 0x20) = FUN_004adf2c;
    *(code **)(param_1 + 0x28) = FUN_004adf44;
    *(code **)(param_1 + 0x30) = FUN_004adf5c;
    *(code **)(param_1 + 0x38) = FUN_004adfcc;
    *(code **)(param_1 + 0x40) = thunk_FUN_004af158;
    *(code **)(param_1 + 0x48) = FUN_004adfd8;
    *(code **)(param_1 + 0x50) = FUN_004adfe4;
    *(code **)(param_1 + 0x58) = FUN_004ae048;
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar11 != '\0');
  }
  return;
}


// ===== 004adf14  FUN_004adf14 =====

void FUN_004adf14(void)

{
  FUN_004aed88();
  return;
}


// ===== 004adf1c  thunk_FUN_004aed88 =====

long thunk_FUN_004aed88(int param_1,undefined4 param_2,byte param_3,ulong param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  long *plStack_88;
  byte bStack_80;
  undefined8 uStack_78;
  long alStack_70 [4];
  
  lVar1 = tpidr_el0;
  alStack_70[3] = *(long *)(lVar1 + 0x28);
  puVar2 = DAT_00d60e68;
  if (DAT_00d60e68 != DAT_00d60e70) {
    do {
      if (param_1 <= *(int *)(puVar2 + 3)) goto LAB_004aee3c;
      puVar2 = puVar2 + 7;
      puVar3 = DAT_00d60e68;
      puVar5 = DAT_00d60e68;
    } while (puVar2 != DAT_00d60e70);
    do {
      puVar2 = puVar3;
      if (*(int *)(puVar3 + 3) <= *(int *)(puVar5 + 3)) {
        puVar2 = puVar5;
      }
      puVar3 = puVar3 + 7;
      puVar5 = puVar2;
    } while (puVar3 != DAT_00d60e70);
    if (puVar2 != (undefined8 *)0x0) {
LAB_004aee3c:
      lVar4 = (long)param_1;
      alStack_70[1] = 0;
      alStack_70[2] = 0;
      alStack_70[0] = puVar2[4];
      if (-1 < *(char *)((long)puVar2 + 0x37)) {
        alStack_70[0] = (long)(puVar2 + 4);
      }
      if (lVar4 < 0xac44) {
        if (lVar4 < 24000) {
          if (lVar4 == 8000) {
            uStack_98 = 8000;
          }
          else {
            if (lVar4 != 16000) {
LAB_004aef30:
              __android_log_print(5,"DiscordKrisp","Unsupported sampling rate %zu; using default",
                                  lVar4);
            }
            uStack_98 = 16000;
          }
        }
        else if (lVar4 == 24000) {
          uStack_98 = 24000;
        }
        else {
          if (lVar4 != 32000) goto LAB_004aef30;
          uStack_98 = 32000;
        }
      }
      else if (lVar4 < 0x15888) {
        if (lVar4 == 0xac44) {
          uStack_98 = 0xac44;
        }
        else {
          if (lVar4 != 48000) goto LAB_004aef30;
          uStack_98 = 48000;
        }
      }
      else if (lVar4 == 0x15888) {
        uStack_98 = 0x15888;
      }
      else {
        if (lVar4 != 96000) goto LAB_004aef30;
        uStack_98 = 96000;
      }
      uStack_94 = 10;
      switch(param_2) {
      case 10:
        break;
      default:
        __android_log_print(5,"DiscordKrisp","Unsupported frame duration %zu; using default");
        uStack_94 = 10;
        break;
      case 0xf:
        uStack_94 = 0xf;
        break;
      case 0x14:
        uStack_94 = 0x14;
        break;
      case 0x1e:
        uStack_94 = 0x1e;
        break;
      case 0x20:
        uStack_94 = 0x20;
      }
      if (lVar4 < 0xac44) {
        if (lVar4 < 24000) {
          if (lVar4 == 8000) {
            uStack_90 = 8000;
          }
          else {
            if (lVar4 != 16000) {
LAB_004af098:
              __android_log_print(5,"DiscordKrisp","Unsupported sampling rate %zu; using default",
                                  lVar4);
            }
            uStack_90 = 16000;
          }
        }
        else if (lVar4 == 24000) {
          uStack_90 = 24000;
        }
        else {
          if (lVar4 != 32000) goto LAB_004af098;
          uStack_90 = 32000;
        }
      }
      else if (lVar4 < 0x15888) {
        if (lVar4 == 0xac44) {
          uStack_90 = 0xac44;
        }
        else {
          if (lVar4 != 48000) goto LAB_004af098;
          uStack_90 = 48000;
        }
      }
      else if (lVar4 == 0x15888) {
        uStack_90 = 0x15888;
      }
      else {
        if (lVar4 != 96000) goto LAB_004af098;
        uStack_90 = 96000;
      }
      plStack_88 = alStack_70;
      puVar3 = &DAT_00d60ee0;
      if ((param_4 & 1) == 0) {
        puVar3 = &DAT_00d60ed8;
      }
      uStack_78 = 0;
      bStack_80 = param_3 & 1;
      lVar4 = (*(code *)*puVar3)(&uStack_98);
      if (lVar4 == 0) {
        puVar3 = (undefined8 *)*puVar2;
        if (-1 < *(char *)((long)puVar2 + 0x17)) {
          puVar3 = puVar2;
        }
        __android_log_print(6,"DiscordKrisp","NcSetup: krispCreateNc FAILED (model=%s rate=%d)",
                            puVar3,param_1);
      }
      goto LAB_004af124;
    }
  }
  __android_log_print(6,"DiscordKrisp","NcSetup: no NC model for requested sample rate %d",param_1);
  lVar4 = 0;
LAB_004af124:
  if (*(long *)(lVar1 + 0x28) == alStack_70[3]) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004adf20  FUN_004adf20 =====

void FUN_004adf20(void)

{
                    /* WARNING: Could not recover jumptable at 0x004adf28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00d60ee8)();
  return;
}


// ===== 004adf2c  FUN_004adf2c =====

void FUN_004adf2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x004adf40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00d60ef0)(0x42c80000);
  return;
}


// ===== 004adf44  FUN_004adf44 =====

void FUN_004adf44(void)

{
                    /* WARNING: Could not recover jumptable at 0x004adf58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00d60ef8)(0x42c80000);
  return;
}


// ===== 004adf5c  FUN_004adf5c =====

void FUN_004adf5c(undefined4 param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  local_40 = 0;
  iVar2 = (*DAT_00d60f00)(param_1,&local_50);
  if (iVar2 == 0) {
    param_2[1] = uStack_48;
    *param_2 = local_50;
    *(undefined4 *)(param_2 + 2) = (undefined4)local_40;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004adfcc  FUN_004adfcc =====

void FUN_004adfcc(undefined8 param_1,undefined8 param_2)

{
  FUN_004af158(param_1,param_2,0);
  return;
}


// ===== 004adfd4  thunk_FUN_004af158 =====

long thunk_FUN_004af158(int param_1,undefined4 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 **ppuStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar3 = tpidr_el0;
  lStack_38 = *(long *)(lVar3 + 0x28);
  uVar1 = DAT_00d60e88;
  if (-1 < (char)DAT_00d60e90._7_1_) {
    uVar1 = (ulong)DAT_00d60e90._7_1_;
  }
  if (uVar1 == 0) {
    __android_log_print(6,"DiscordKrisp","VadSetup: VAD model not loaded");
    lVar4 = 0;
    goto LAB_004af394;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  puStack_50 = DAT_00d60e80;
  if (-1 < (char)DAT_00d60e90._7_1_) {
    puStack_50 = &DAT_00d60e80;
  }
  if (param_1 < 0xac44) {
    if (param_1 < 24000) {
      if (param_1 == 8000) {
        uStack_60 = 8000;
      }
      else {
        if (param_1 != 16000) {
LAB_004af2b8:
          __android_log_print(5,"DiscordKrisp","Unsupported sampling rate %zu; using default");
        }
        uStack_60 = 16000;
      }
    }
    else if (param_1 == 24000) {
      uStack_60 = 24000;
    }
    else {
      if (param_1 != 32000) goto LAB_004af2b8;
      uStack_60 = 32000;
    }
  }
  else if (param_1 < 0x15888) {
    if (param_1 == 0xac44) {
      uStack_60 = 0xac44;
    }
    else {
      if (param_1 != 48000) goto LAB_004af2b8;
      uStack_60 = 48000;
    }
  }
  else if (param_1 == 0x15888) {
    uStack_60 = 0x15888;
  }
  else {
    if (param_1 != 96000) goto LAB_004af2b8;
    uStack_60 = 96000;
  }
  uStack_5c = 10;
  switch(param_2) {
  case 10:
    break;
  default:
    __android_log_print(5,"DiscordKrisp","Unsupported frame duration %zu; using default");
    uStack_5c = 10;
    break;
  case 0xf:
    uStack_5c = 0xf;
    break;
  case 0x14:
    uStack_5c = 0x14;
    break;
  case 0x1e:
    uStack_5c = 0x1e;
    break;
  case 0x20:
    uStack_5c = 0x20;
  }
  ppuStack_58 = &puStack_50;
  puVar2 = &DAT_00d60f10;
  if ((param_3 & 1) == 0) {
    puVar2 = &DAT_00d60f08;
  }
  lVar4 = (*(code *)*puVar2)(&uStack_60);
  if (lVar4 == 0) {
    __android_log_print(6,"DiscordKrisp","VadSetup: krispCreateVad FAILED (rate=%d)",param_1);
  }
LAB_004af394:
  if (*(long *)(lVar3 + 0x28) == lStack_38) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004adfd8  FUN_004adfd8 =====

void FUN_004adfd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x004adfe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00d60f18)();
  return;
}


// ===== 004adfe4  FUN_004adfe4 =====

void FUN_004adfe4(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  iVar2 = (*DAT_00d60f20)();
  uVar4 = 0;
  if (iVar2 != 0) {
    uVar4 = 0xbf800000;
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 004ae048  FUN_004ae048 =====

void FUN_004ae048(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  iVar2 = (*DAT_00d60f28)();
  uVar4 = 0;
  if (iVar2 != 0) {
    uVar4 = 0xbf800000;
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 004ae0ac  FUN_004ae0ac =====

/* WARNING: Removing unreachable block (ram,0x004ae114) */
/* WARNING: Removing unreachable block (ram,0x004ae128) */

void FUN_004ae0ac(ulong param_1)

{
  if (DAT_00d60e70 != DAT_00d60e68) {
    do {
      DAT_00d60e70 = DAT_00d60e70 + -0x38;
    } while (DAT_00d60e70 != DAT_00d60e68);
  }
  DAT_00d60e70 = DAT_00d60e68;
  if (DAT_00d60e90._7_1_ < '\0') {
    *(undefined4 *)CONCAT44(DAT_00d60e80._4_4_,(undefined4)DAT_00d60e80) = 0;
    DAT_00d60e88 = 0;
  }
  else {
    DAT_00d60e80._0_4_ = 0;
    DAT_00d60e90._7_1_ = '\0';
  }
  if (((param_1 & 1) != 0) && (DAT_00d60ed0 != (code *)0x0)) {
    (*DAT_00d60ed0)();
  }
  if (DAT_00d60f30 != 0) {
    dlclose();
    DAT_00d60f30 = 0;
  }
  return;
}


// ===== 004ae180  FUN_004ae180 =====

/* WARNING: Removing unreachable block (ram,0x004ae418) */
/* WARNING: Removing unreachable block (ram,0x004ae404) */
/* WARNING: Removing unreachable block (ram,0x004ae4b4) */
/* WARNING: Removing unreachable block (ram,0x004ae29c) */
/* WARNING: Removing unreachable block (ram,0x004ae458) */

void FUN_004ae180(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 *puVar6;
  void *pvVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  void *local_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined4 local_90;
  void *local_88;
  ulong uStack_80;
  ulong local_78;
  undefined8 local_70;
  ulong uStack_68;
  ulong local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_004ae4ec(&local_70,*(undefined8 *)*param_1,param_1[1],param_1[2],param_2);
  uVar2 = uStack_68;
  if (-1 < (long)local_60) {
    uVar2 = local_60 >> 0x38;
  }
  if (uVar2 == 0) {
    __android_log_print(6,"DiscordKrisp","NC model \'%s\' NOT loaded",param_2);
  }
  else {
    FUN_004a3cf4(&local_a8,param_4);
    uVar11 = local_60;
    uVar1 = uStack_68;
    uVar13 = local_70;
    puVar12 = DAT_00d60e70;
    puVar4 = DAT_00d60e68;
    uStack_80 = uStack_68;
    local_88 = (void *)local_70;
    local_78 = local_60;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_90 = param_3;
    if (DAT_00d60e70 < DAT_00d60e78) {
      if (DAT_00d60e70 == (undefined8 *)0x0) {
LAB_004ae4b8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x23,"__location != nullptr","null pointer given to construct_at");
      }
      DAT_00d60e70[2] = local_98;
      DAT_00d60e70[1] = uStack_a0;
      *DAT_00d60e70 = local_a8;
      uStack_a0 = 0;
      local_98 = 0;
      local_a8 = (void *)0x0;
      *(undefined4 *)(DAT_00d60e70 + 3) = param_3;
      DAT_00d60e70[6] = uVar11;
      DAT_00d60e70[5] = uVar1;
      DAT_00d60e70[4] = uVar13;
      uStack_80 = 0;
      local_78 = 0;
      local_88 = (void *)0x0;
      DAT_00d60e70 = DAT_00d60e70 + 7;
    }
    else {
      lVar10 = (long)DAT_00d60e70 - (long)DAT_00d60e68 >> 3;
      uVar1 = lVar10 * 0x6db6db6db6db6db7 + 1;
      if (0x492492492492492 < uVar1) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar8 = (long)DAT_00d60e78 - (long)DAT_00d60e68 >> 3;
      uVar11 = lVar8 * -0x2492492492492492;
      if (uVar11 < uVar1 || uVar11 - uVar1 == 0) {
        uVar11 = uVar1;
      }
      if (0x249249249249248 < (ulong)(lVar8 * 0x6db6db6db6db6db7)) {
        uVar11 = 0x492492492492492;
      }
      if (uVar11 == 0) goto LAB_004ae4b8;
      if (0x492492492492492 < uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      pvVar7 = operator_new(uVar11 * 0x38);
      uVar1 = local_78;
      lVar8 = local_98;
      uVar13 = uStack_a0;
      pvVar5 = local_a8;
      puVar9 = (undefined8 *)((long)pvVar7 + lVar10 * 8);
      local_a8 = (void *)0x0;
      uStack_a0 = 0;
      local_98 = 0;
      local_78 = 0;
      puVar9[1] = uVar13;
      *puVar9 = pvVar5;
      puVar9[2] = lVar8;
      DAT_00d60e78 = (undefined8 *)((long)pvVar7 + uVar11 * 0x38);
      puVar9[6] = uVar1;
      *(undefined4 *)(puVar9 + 3) = param_3;
      puVar9[5] = uStack_80;
      puVar9[4] = local_88;
      local_88 = (void *)0x0;
      uStack_80 = 0;
      puVar6 = puVar9;
      if (puVar12 != puVar4) {
        lVar10 = 0;
        do {
          lVar8 = lVar10 + -0x38;
          uVar14 = *(undefined8 *)((long)puVar12 + lVar10 + -0x30);
          uVar13 = *(undefined8 *)((long)puVar12 + lVar10 + -0x38);
          *(undefined8 *)((long)puVar9 + lVar10 + -0x28) =
               *(undefined8 *)((long)puVar12 + lVar10 + -0x28);
          *(undefined8 *)((long)puVar9 + lVar10 + -0x30) = uVar14;
          *(undefined8 *)((long)puVar9 + lVar10 + -0x38) = uVar13;
          *(undefined8 *)((long)puVar12 + lVar10 + -0x30) = 0;
          *(undefined8 *)((long)puVar12 + lVar10 + -0x28) = 0;
          *(undefined8 *)((long)puVar12 + lVar10 + -0x38) = 0;
          *(undefined4 *)((long)puVar9 + lVar10 + -0x20) =
               *(undefined4 *)((long)puVar12 + lVar10 + -0x20);
          uVar14 = *(undefined8 *)((long)puVar12 + lVar10 + -0x10);
          uVar13 = *(undefined8 *)((long)puVar12 + lVar10 + -0x18);
          *(undefined8 *)((long)puVar9 + lVar10 + -8) = *(undefined8 *)((long)puVar12 + lVar10 + -8)
          ;
          *(undefined8 *)((long)puVar9 + lVar10 + -0x10) = uVar14;
          *(undefined8 *)((long)puVar9 + lVar10 + -0x18) = uVar13;
          *(undefined8 *)((long)puVar12 + lVar10 + -0x10) = 0;
          *(undefined8 *)((long)puVar12 + lVar10 + -8) = 0;
          *(undefined8 *)((long)puVar12 + lVar10 + -0x18) = 0;
          lVar10 = lVar8;
        } while ((undefined8 *)((long)puVar12 + lVar8) != puVar4);
        for (; puVar12 = DAT_00d60e68, puVar6 = (undefined8 *)((long)puVar9 + lVar8),
            DAT_00d60e70 != DAT_00d60e68; DAT_00d60e70 = DAT_00d60e70 + -7) {
        }
      }
      DAT_00d60e68 = puVar6;
      DAT_00d60e70 = puVar9 + 7;
      if (puVar12 != (undefined8 *)0x0) {
        operator_delete(puVar12);
      }
    }
    if ((long)local_78 < 0) {
      operator_delete(local_88);
    }
    if (local_98 < 0) {
      operator_delete(local_a8);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2 != 0);
}


// ===== 004ae4ec  FUN_004ae4ec =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004ae4ec(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                 char *param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *******pppppppuVar5;
  byte bVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  size_t sVar10;
  long *plVar11;
  void *__src;
  ulong uVar12;
  void *__s;
  undefined8 *puVar13;
  ulong __n;
  long lVar14;
  void *pvVar15;
  undefined8 *******local_200;
  long lStack_1f8;
  long local_1f0;
  undefined8 *******local_1e0;
  ulong uStack_1d8;
  ulong local_1d0;
  undefined8 local_1c0;
  ulong local_1b8;
  undefined8 uStack_1b0;
  uint auStack_1a0 [26];
  undefined8 uStack_138;
  undefined4 auStack_130 [8];
  undefined *local_110;
  undefined *local_108 [19];
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  uStack_1b0 = CONCAT17(4,(undefined7)uStack_1b0);
  if ((&local_1c0 < &UNK_001b683b) && (&UNK_001b683a < (undefined *)((ulong)&local_1c0 | 4)))
  goto LAB_004aec88;
  uVar12 = (ulong)local_1c0 >> 0x20;
  local_1c0 = (undefined8 *)CONCAT44((uint)uVar12 & 0xffffff00,0x2f7a6874);
  if (param_5 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string",0xad0,
               "__s != nullptr","string::append received nullptr");
  }
  sVar10 = strlen(param_5);
  plVar11 = (long *)FUN_00547cac(&local_1c0,param_5,sVar10);
  local_1d0 = plVar11[2];
  uStack_1d8 = plVar11[1];
  local_1e0 = (undefined8 *******)*plVar11;
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = 0;
  if ((long)uStack_1b0 < 0) {
    operator_delete(local_1c0);
  }
  bVar6 = *(byte *)((long)param_3 + 0x17);
  sVar10 = param_3[1];
  if (-1 < (char)bVar6) {
    sVar10 = (ulong)bVar6;
  }
  if (sVar10 == 0) {
LAB_004ae7cc:
    if (param_2 != 0) {
      pppppppuVar5 = local_1e0;
      if (-1 < (long)local_1d0) {
        pppppppuVar5 = &local_1e0;
      }
      lVar14 = AAssetManager_open(param_2,pppppppuVar5,3);
      if (lVar14 != 0) {
        __src = (void *)AAsset_getBuffer();
        uVar12 = AAsset_getLength(lVar14);
        if (uVar12 == 0) {
          __s = (void *)0x0;
          pvVar15 = (void *)0x0;
        }
        else {
          if ((long)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          __s = operator_new(uVar12);
          pvVar15 = (void *)((long)__s + uVar12);
          memcpy(__s,__src,uVar12);
        }
        AAsset_close(lVar14);
        goto joined_r0x004ae874;
      }
    }
    pppppppuVar5 = local_1e0;
    if (-1 < (long)local_1d0) {
      pppppppuVar5 = &local_1e0;
    }
    __android_log_print(6,"DiscordKrisp","asset \'%s\' NOT FOUND (path \'%s\', assetManager=%p)",
                        param_5,pppppppuVar5,param_2);
    __s = (void *)0x0;
    pvVar15 = (void *)0x0;
  }
  else {
    uVar12 = sVar10 + 1;
    if (0x7fffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (uVar12 < 0x17) {
      local_1b8 = 0;
      puVar13 = &local_1c0;
      local_1c0 = (undefined8 *)0x0;
      uStack_1b0 = uVar12 << 0x38;
    }
    else {
      uVar2 = (uVar12 | 0xf) + 1;
      puVar13 = (undefined8 *)operator_new(uVar2);
      uStack_1b0 = uVar2 | 0x8000000000000000;
      local_1c0 = puVar13;
      local_1b8 = uVar12;
    }
    puVar3 = (undefined8 *)((long)puVar13 + sVar10);
    puVar4 = (undefined8 *)*param_3;
    if (-1 < (char)bVar6) {
      puVar4 = param_3;
    }
    if (((puVar13 <= puVar4) && (puVar4 < puVar3)) ||
       ((memmove(puVar13,puVar4,sVar10), puVar3 < &UNK_001c7bbc &&
        (&DAT_001c7bbb < (undefined *)((long)puVar3 + 1))))) goto LAB_004aec88;
    *(undefined2 *)puVar3 = 0x2f;
    uVar12 = uStack_1d8;
    pppppppuVar5 = local_1e0;
    if (-1 < (long)local_1d0) {
      uVar12 = local_1d0 >> 0x38;
      pppppppuVar5 = &local_1e0;
    }
    plVar11 = (long *)FUN_00547cac(&local_1c0,pppppppuVar5,uVar12);
    local_1f0 = plVar11[2];
    lStack_1f8 = plVar11[1];
    local_200 = (undefined8 *******)*plVar11;
    plVar11[1] = 0;
    plVar11[2] = 0;
    *plVar11 = 0;
    if ((long)uStack_1b0 < 0) {
      operator_delete(local_1c0);
    }
    puVar9 = PTR_PTR_00d51c38;
    puVar8 = PTR_DAT_00d51c30;
    puVar1 = PTR_DAT_00d51c30 + 0x40;
    local_1c0 = *(undefined8 **)(PTR_PTR_00d51c38 + 8);
    local_108[0] = puVar1;
    *(undefined8 *)((long)&local_1c0 + *(long *)((long)local_1c0 + -0x18)) =
         *(undefined8 *)(PTR_PTR_00d51c38 + 0x10);
    local_1b8 = 0;
    lVar14 = *(long *)((long)local_1c0 + -0x18);
    pppppppuVar5 = local_200;
    if (-1 < local_1f0) {
      pppppppuVar5 = &local_200;
    }
    FUN_00520e8c((long)&local_1c0 + lVar14,&uStack_1b0);
    local_1c0 = (undefined8 *)(puVar8 + 0x18);
    *(undefined8 *)((long)&uStack_138 + lVar14) = 0;
    *(undefined4 *)((long)auStack_130 + lVar14) = 0xffffffff;
    local_108[0] = puVar1;
    FUN_0054de58(&uStack_1b0);
    lVar14 = FUN_0054dcd4(&uStack_1b0,pppppppuVar5,0xe);
    if (lVar14 == 0) {
      FUN_00520d98((long)&local_1c0 + *(long *)((long)local_1c0 + -0x18),
                   *(uint *)((long)auStack_1a0 + *(long *)((long)local_1c0 + -0x18)) | 4);
    }
    if ((*(byte *)((long)auStack_1a0 + *(long *)((long)local_1c0 + -0x18)) & 5) != 0) {
LAB_004ae780:
      local_1c0 = *(undefined8 **)puVar9;
      *(undefined8 *)((long)&local_1c0 + *(long *)((long)local_1c0 + -0x18)) =
           *(undefined8 *)(puVar9 + 0x18);
      FUN_0054dfb0(&uStack_1b0);
      FUN_0054a7a4(&local_1c0,puVar9 + 8);
      thunk_FUN_00520cf4(local_108);
      if (local_1f0 < 0) {
        operator_delete(local_200);
      }
      goto LAB_004ae7cc;
    }
    FUN_0054b08c(&local_1c0);
    FUN_0054b2b8(&local_1c0,0,0);
    if (__n == 0) {
      __s = (void *)0x0;
      pvVar15 = (void *)0x0;
    }
    else {
      if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      __s = operator_new(__n);
      pvVar15 = (void *)((long)__s + __n);
      memset(__s,0,__n);
    }
    plVar11 = (long *)FUN_0054af80(&local_1c0,__s,__n);
    if ((*(byte *)((long)plVar11 + *(long *)(*plVar11 + -0x18) + 0x20) & 5) != 0) {
      pppppppuVar5 = local_200;
      if (-1 < local_1f0) {
        pppppppuVar5 = &local_200;
      }
      __android_log_print(6,"DiscordKrisp","asset \'%s\' read error from storage \'%s\'",param_5,
                          pppppppuVar5);
      if (__s != (void *)0x0) {
        operator_delete(__s);
      }
      goto LAB_004ae780;
    }
    local_1c0 = *(undefined8 **)puVar9;
    *(undefined8 *)((long)&local_1c0 + *(long *)((long)local_1c0 + -0x18)) =
         *(undefined8 *)(puVar9 + 0x18);
    FUN_0054dfb0(&uStack_1b0);
    FUN_0054a7a4(&local_1c0,puVar9 + 8);
    thunk_FUN_00520cf4(local_108);
    if (local_1f0 < 0) {
      operator_delete(local_200);
    }
  }
joined_r0x004ae874:
  if ((long)local_1d0 < 0) {
    operator_delete(local_1e0);
  }
  if (__s != pvVar15) {
    bVar6 = *(byte *)((long)param_4 + 0x17);
    sVar10 = param_4[1];
    if (-1 < (char)bVar6) {
      sVar10 = (ulong)bVar6;
    }
    uVar12 = sVar10 + 1;
    if (0x7fffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (uVar12 < 0x17) {
      local_1b8 = 0;
      puVar13 = &local_1c0;
      local_1c0 = (undefined8 *)0x0;
      uStack_1b0 = uVar12 << 0x38;
    }
    else {
      uVar2 = (uVar12 | 0xf) + 1;
      puVar13 = (undefined8 *)operator_new(uVar2);
      uStack_1b0 = uVar2 | 0x8000000000000000;
      local_1c0 = puVar13;
      local_1b8 = uVar12;
    }
    puVar3 = (undefined8 *)((long)puVar13 + sVar10);
    puVar4 = (undefined8 *)*param_4;
    if (-1 < (char)bVar6) {
      puVar4 = param_4;
    }
    if ((puVar4 < puVar13) || (puVar3 <= puVar4)) {
      if (sVar10 != 0) {
        memmove(puVar13,puVar4,sVar10);
      }
      if ((&DAT_001c7bbb < puVar3) || ((undefined *)((long)puVar3 + 1) < &UNK_001c7bbc)) {
        *(undefined2 *)puVar3 = 0x2f;
        sVar10 = strlen(param_5);
        plVar11 = (long *)FUN_00547cac(&local_1c0,param_5,sVar10);
        local_1d0 = plVar11[2];
        uStack_1d8 = plVar11[1];
        local_1e0 = (undefined8 *******)*plVar11;
        plVar11[1] = 0;
        plVar11[2] = 0;
        *plVar11 = 0;
        if ((long)uStack_1b0 < 0) {
          operator_delete(local_1c0);
        }
        puVar9 = PTR_PTR_00d51c48;
        puVar8 = PTR_DAT_00d51c40;
        puVar1 = PTR_DAT_00d51c40 + 0x40;
        local_1c0 = *(undefined8 **)(PTR_PTR_00d51c48 + 8);
        local_110 = puVar1;
        *(undefined8 *)((long)&local_1c0 + *(long *)((long)local_1c0 + -0x18)) =
             *(undefined8 *)(PTR_PTR_00d51c48 + 0x10);
        lVar14 = *(long *)((long)local_1c0 + -0x18);
        pppppppuVar5 = local_1e0;
        if (-1 < (long)local_1d0) {
          pppppppuVar5 = &local_1e0;
        }
        FUN_00520e8c((long)&local_1c0 + lVar14,&local_1b8);
        local_1c0 = (undefined8 *)(puVar8 + 0x18);
        *(undefined8 *)((long)&uStack_138 + lVar14) = 0;
        *(undefined4 *)((long)auStack_130 + lVar14) = 0xffffffff;
        local_110 = puVar1;
        FUN_0054de58(&local_1b8);
        lVar14 = FUN_0054dcd4(&local_1b8,pppppppuVar5,0x34);
        if (lVar14 == 0) {
          FUN_00520d98((long)&local_1c0 + *(long *)((long)local_1c0 + -0x18),
                       *(uint *)((long)auStack_1a0 + *(long *)((long)local_1c0 + -0x18)) | 4);
        }
        plVar11 = (long *)FUN_0054cd18(&local_1c0,__s,(long)pvVar15 - (long)__s);
        if ((*(byte *)((long)plVar11 + *(long *)(*plVar11 + -0x18) + 0x20) & 5) == 0) {
          lVar14 = FUN_0054e074(&local_1b8);
          if (lVar14 == 0) {
            FUN_00520d98((long)&local_1c0 + *(long *)((long)local_1c0 + -0x18),
                         *(uint *)((long)auStack_1a0 + *(long *)((long)local_1c0 + -0x18)) | 4);
          }
          FUN_00511e50(param_1,&local_1e0);
        }
        else {
          pppppppuVar5 = local_1e0;
          if (-1 < (long)local_1d0) {
            pppppppuVar5 = &local_1e0;
          }
          __android_log_print(6,"DiscordKrisp","failed to write model \'%s\' to \'%s\'",param_5,
                              pppppppuVar5);
          param_1[1] = 0;
          param_1[2] = 0;
          *param_1 = 0;
        }
        local_1c0 = *(undefined8 **)puVar9;
        *(undefined8 *)((long)&local_1c0 + *(long *)((long)local_1c0 + -0x18)) =
             *(undefined8 *)(puVar9 + 0x18);
        FUN_0054dfb0(&local_1b8);
        FUN_0054b3d4(&local_1c0,puVar9 + 8);
        thunk_FUN_00520cf4(&local_110);
        if ((long)local_1d0 < 0) {
          operator_delete(local_1e0);
        }
        goto LAB_004aeb7c;
      }
    }
LAB_004aec88:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_004aeb7c:
  if (__s != (void *)0x0) {
    operator_delete(__s);
  }
  if (*(long *)(lVar7 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004aecec  FUN_004aecec =====

void FUN_004aecec(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
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
  
  ppuStack_68 = &local_70;
  puStack_60 = auStack_a0;
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uStack_58 = 0xffffff80ffffffd8;
  local_98 = param_4;
  uStack_90 = param_5;
  local_88 = param_6;
  uStack_80 = param_7;
  local_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  (**(code **)(*param_1 + 0x398))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004aed88  FUN_004aed88 =====

long FUN_004aed88(int param_1,undefined4 param_2,byte param_3,ulong param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  long *local_88;
  byte local_80;
  undefined8 local_78;
  long local_70 [4];
  
  lVar1 = tpidr_el0;
  local_70[3] = *(long *)(lVar1 + 0x28);
  puVar2 = DAT_00d60e68;
  if (DAT_00d60e68 != DAT_00d60e70) {
    do {
      if (param_1 <= *(int *)(puVar2 + 3)) goto LAB_004aee3c;
      puVar2 = puVar2 + 7;
      puVar3 = DAT_00d60e68;
      puVar5 = DAT_00d60e68;
    } while (puVar2 != DAT_00d60e70);
    do {
      puVar2 = puVar3;
      if (*(int *)(puVar3 + 3) <= *(int *)(puVar5 + 3)) {
        puVar2 = puVar5;
      }
      puVar3 = puVar3 + 7;
      puVar5 = puVar2;
    } while (puVar3 != DAT_00d60e70);
    if (puVar2 != (undefined8 *)0x0) {
LAB_004aee3c:
      lVar4 = (long)param_1;
      local_70[1] = 0;
      local_70[2] = 0;
      local_70[0] = puVar2[4];
      if (-1 < *(char *)((long)puVar2 + 0x37)) {
        local_70[0] = (long)(puVar2 + 4);
      }
      if (lVar4 < 0xac44) {
        if (lVar4 < 24000) {
          if (lVar4 == 8000) {
            local_98 = 8000;
          }
          else {
            if (lVar4 != 16000) {
LAB_004aef30:
              __android_log_print(5,"DiscordKrisp","Unsupported sampling rate %zu; using default",
                                  lVar4);
            }
            local_98 = 16000;
          }
        }
        else if (lVar4 == 24000) {
          local_98 = 24000;
        }
        else {
          if (lVar4 != 32000) goto LAB_004aef30;
          local_98 = 32000;
        }
      }
      else if (lVar4 < 0x15888) {
        if (lVar4 == 0xac44) {
          local_98 = 0xac44;
        }
        else {
          if (lVar4 != 48000) goto LAB_004aef30;
          local_98 = 48000;
        }
      }
      else if (lVar4 == 0x15888) {
        local_98 = 0x15888;
      }
      else {
        if (lVar4 != 96000) goto LAB_004aef30;
        local_98 = 96000;
      }
      local_94 = 10;
      switch(param_2) {
      case 10:
        break;
      default:
        __android_log_print(5,"DiscordKrisp","Unsupported frame duration %zu; using default");
        local_94 = 10;
        break;
      case 0xf:
        local_94 = 0xf;
        break;
      case 0x14:
        local_94 = 0x14;
        break;
      case 0x1e:
        local_94 = 0x1e;
        break;
      case 0x20:
        local_94 = 0x20;
      }
      if (lVar4 < 0xac44) {
        if (lVar4 < 24000) {
          if (lVar4 == 8000) {
            local_90 = 8000;
          }
          else {
            if (lVar4 != 16000) {
LAB_004af098:
              __android_log_print(5,"DiscordKrisp","Unsupported sampling rate %zu; using default",
                                  lVar4);
            }
            local_90 = 16000;
          }
        }
        else if (lVar4 == 24000) {
          local_90 = 24000;
        }
        else {
          if (lVar4 != 32000) goto LAB_004af098;
          local_90 = 32000;
        }
      }
      else if (lVar4 < 0x15888) {
        if (lVar4 == 0xac44) {
          local_90 = 0xac44;
        }
        else {
          if (lVar4 != 48000) goto LAB_004af098;
          local_90 = 48000;
        }
      }
      else if (lVar4 == 0x15888) {
        local_90 = 0x15888;
      }
      else {
        if (lVar4 != 96000) goto LAB_004af098;
        local_90 = 96000;
      }
      local_88 = local_70;
      puVar3 = &DAT_00d60ee0;
      if ((param_4 & 1) == 0) {
        puVar3 = &DAT_00d60ed8;
      }
      local_78 = 0;
      local_80 = param_3 & 1;
      lVar4 = (*(code *)*puVar3)(&local_98);
      if (lVar4 == 0) {
        puVar3 = (undefined8 *)*puVar2;
        if (-1 < *(char *)((long)puVar2 + 0x17)) {
          puVar3 = puVar2;
        }
        __android_log_print(6,"DiscordKrisp","NcSetup: krispCreateNc FAILED (model=%s rate=%d)",
                            puVar3,param_1);
      }
      goto LAB_004af124;
    }
  }
  __android_log_print(6,"DiscordKrisp","NcSetup: no NC model for requested sample rate %d",param_1);
  lVar4 = 0;
LAB_004af124:
  if (*(long *)(lVar1 + 0x28) == local_70[3]) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004af158  FUN_004af158 =====

long FUN_004af158(int param_1,undefined4 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 **local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar1 = DAT_00d60e88;
  if (-1 < (char)DAT_00d60e90._7_1_) {
    uVar1 = (ulong)DAT_00d60e90._7_1_;
  }
  if (uVar1 == 0) {
    __android_log_print(6,"DiscordKrisp","VadSetup: VAD model not loaded");
    lVar4 = 0;
    goto LAB_004af394;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_50 = DAT_00d60e80;
  if (-1 < (char)DAT_00d60e90._7_1_) {
    local_50 = &DAT_00d60e80;
  }
  if (param_1 < 0xac44) {
    if (param_1 < 24000) {
      if (param_1 == 8000) {
        local_60 = 8000;
      }
      else {
        if (param_1 != 16000) {
LAB_004af2b8:
          __android_log_print(5,"DiscordKrisp","Unsupported sampling rate %zu; using default");
        }
        local_60 = 16000;
      }
    }
    else if (param_1 == 24000) {
      local_60 = 24000;
    }
    else {
      if (param_1 != 32000) goto LAB_004af2b8;
      local_60 = 32000;
    }
  }
  else if (param_1 < 0x15888) {
    if (param_1 == 0xac44) {
      local_60 = 0xac44;
    }
    else {
      if (param_1 != 48000) goto LAB_004af2b8;
      local_60 = 48000;
    }
  }
  else if (param_1 == 0x15888) {
    local_60 = 0x15888;
  }
  else {
    if (param_1 != 96000) goto LAB_004af2b8;
    local_60 = 96000;
  }
  local_5c = 10;
  switch(param_2) {
  case 10:
    break;
  default:
    __android_log_print(5,"DiscordKrisp","Unsupported frame duration %zu; using default");
    local_5c = 10;
    break;
  case 0xf:
    local_5c = 0xf;
    break;
  case 0x14:
    local_5c = 0x14;
    break;
  case 0x1e:
    local_5c = 0x1e;
    break;
  case 0x20:
    local_5c = 0x20;
  }
  local_58 = &local_50;
  puVar2 = &DAT_00d60f10;
  if ((param_3 & 1) == 0) {
    puVar2 = &DAT_00d60f08;
  }
  lVar4 = (*(code *)*puVar2)(&local_60);
  if (lVar4 == 0) {
    __android_log_print(6,"DiscordKrisp","VadSetup: krispCreateVad FAILED (rate=%d)",param_1);
  }
LAB_004af394:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004af3c0  _INIT_4 =====

void _INIT_4(void)

{
  __cxa_atexit(FUN_004ad628,&DAT_00d60e68,&PTR_LOOP_00d19390);
  __cxa_atexit(PTR_FUN_00d51c50,&DAT_00d60e80,&PTR_LOOP_00d19390);
  __cxa_atexit(PTR_FUN_00d51ac8,&DAT_00d60e98,&PTR_LOOP_00d19390);
  return;
}


// ===== 004af424  FUN_004af424 =====

void FUN_004af424(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_58 [8];
  char *local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar3 != 0) {
    uVar5 = *param_2;
    uVar8 = param_2[3];
    uVar7 = param_2[2];
    param_1[5] = param_2[1];
    param_1[4] = uVar5;
    param_1[7] = uVar8;
    param_1[6] = uVar7;
    if (param_1[3] != 0) {
      FUN_005efa64();
      pvVar6 = (void *)param_1[3];
      param_1[3] = 0;
      if (pvVar6 != (void *)0x0) {
        uVar3 = FUN_005efa64(pvVar6);
        if ((uVar3 & 1) == 0) goto LAB_004af5e0;
        FUN_0065a730((long)pvVar6 + 0x28);
        operator_delete(pvVar6);
      }
    }
    uVar3 = FUN_00417e08();
    if ((uVar3 & 1) == 0) {
      local_40 = auStack_58;
      local_50 = "../../discord_native_lib/src/audio_recorder.cpp";
      uStack_48 = 0xa9;
      FUN_00623bb0(&DAT_001f6fe6,"../../discord_native_lib/src/audio_recorder.cpp",0xa9,
                   "Opening WAV file: ",param_1,", channels: ",param_1[5],", rate: ",
                   *(undefined4 *)(param_1 + 4),"Opening WAV file: ",&local_50);
    }
    uVar3 = param_1[1];
    puVar2 = (undefined8 *)*param_1;
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar3 = (ulong)*(byte *)((long)param_1 + 0x17);
      puVar2 = param_1;
    }
    if ((puVar2 == (undefined8 *)0x0) && (uVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
                 "__len == 0 || __s != nullptr",
                 "string_view::string_view(_CharT *, size_t): received nullptr");
    }
    lVar4 = FUN_005ef6ec(puVar2,uVar3,*(undefined4 *)(param_1 + 4),param_1[5],0);
    pvVar6 = (void *)param_1[3];
    param_1[3] = lVar4;
    if (pvVar6 != (void *)0x0) {
      uVar3 = FUN_005efa64(pvVar6);
      if ((uVar3 & 1) == 0) {
LAB_004af5e0:
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../discord_common/native/third_party/webrtc/platform/android/release/arm64/23d8d00745598609952488468ea08f1a9a309a52-m146/include/webrtc/common_audio/wav_file.h"
                     ,0x3b,"Close()",&DAT_001f5fa0);
      }
      FUN_0065a730((long)pvVar6 + 0x28);
      operator_delete(pvVar6);
      lVar4 = param_1[3];
    }
    if (lVar4 != 0) {
      uVar5 = 1;
      goto LAB_004af594;
    }
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/audio_recorder.cpp",0xea,
                   "Failed to open WAV file: ",param_1);
    }
  }
  uVar5 = 0;
LAB_004af594:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


// ===== 004af604  FUN_004af604 =====

void FUN_004af604(long param_1)

{
  ulong uVar1;
  void *pvVar2;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_005efa64();
    pvVar2 = *(void **)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (pvVar2 != (void *)0x0) {
      uVar1 = FUN_005efa64(pvVar2);
      if ((uVar1 & 1) != 0) {
        FUN_0065a730((long)pvVar2 + 0x28);
        operator_delete(pvVar2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../discord_common/native/third_party/webrtc/platform/android/release/arm64/23d8d00745598609952488468ea08f1a9a309a52-m146/include/webrtc/common_audio/wav_file.h"
                   ,0x3b,"Close()",&DAT_001f5fa0);
    }
  }
  return;
}


// ===== 004af67c  FUN_004af67c =====

undefined8 FUN_004af67c(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  void *pvVar5;
  
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    return 0;
  }
  if (*(long *)(lVar4 + 0x28) == 0) {
    return 0;
  }
  if (((*(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20)) &&
      (*(long *)(param_1 + 0x28) == *(long *)(param_2 + 0x28))) &&
     (*(long *)(param_1 + 0x30) == *(long *)(param_2 + 0x18))) {
    if ((*(int *)(param_1 + 0x40) == -1) ||
       ((*(ulong *)(lVar4 + 0x18) <=
         (ulong)(*(long *)(param_1 + 0x28) * (long)*(int *)(param_1 + 0x20) *
                (long)*(int *)(param_1 + 0x40)) && (*(ulong *)(lVar4 + 0x18) << 1 < 0x2faf081)))) {
      uVar1 = FUN_00659108(param_2);
      uVar2 = FUN_005ef824(lVar4,uVar1,*(long *)(param_2 + 0x28) * *(long *)(param_2 + 0x18));
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_004022fc();
        if ((uVar2 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/audio_recorder.cpp",0x1d2,
                       "Failed to write WAV file, closing");
        }
        FUN_004af604(param_1);
        return 0;
      }
      return 1;
    }
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) != 0) goto LAB_004af75c;
    pcVar3 = "Closing WAV file";
    uVar1 = 0x18a;
  }
  else {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) != 0) goto LAB_004af75c;
    pcVar3 = "Parameter mismatch, closing WAV file";
    uVar1 = 0x152;
  }
  FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/audio_recorder.cpp",uVar1,pcVar3);
LAB_004af75c:
  if (*(long *)(param_1 + 0x18) == 0) {
    return 0;
  }
  FUN_005efa64();
  pvVar5 = *(void **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (pvVar5 != (void *)0x0) {
    uVar2 = FUN_005efa64(pvVar5);
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../discord_common/native/third_party/webrtc/platform/android/release/arm64/23d8d00745598609952488468ea08f1a9a309a52-m146/include/webrtc/common_audio/wav_file.h"
                   ,0x3b,"Close()",&DAT_001f5fa0);
    }
    FUN_0065a730((long)pvVar5 + 0x28);
    operator_delete(pvVar5);
  }
  return 0;
}


// ===== 004af820  FUN_004af820 =====

bool FUN_004af820(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    return *(long *)(*(long *)(param_1 + 0x18) + 0x28) != 0;
  }
  return false;
}


// ===== 004af840  FUN_004af840 =====

void FUN_004af840(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_00d1e5e8;
  param_1[1] = 0;
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 300;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x15) = 300;
  return;
}


// ===== 004af888  FUN_004af888 =====

void FUN_004af888(long param_1)

{
  FUN_00411268(param_1 + 0x20);
  FUN_004af604(param_1 + 0x20);
  return;
}


// ===== 004af8b0  FUN_004af8b0 =====

void FUN_004af8b0(long param_1)

{
  FUN_00411268(param_1 + 0x68);
  FUN_004af604(param_1 + 0x68);
  return;
}


// ===== 004af8d8  FUN_004af8d8 =====

void FUN_004af8d8(long param_1,undefined4 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  pvVar6 = operator_new(0x3c60);
  FUN_00658c48();
  FUN_00658e5c(pvVar6,param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar7 = (undefined8 *)operator_new(0x28);
  puVar7[2] = lVar3;
  *puVar7 = &PTR_FUN_00d1e610;
  puVar7[1] = uVar2;
  *(undefined4 *)(puVar7 + 3) = param_2;
  puVar7[4] = pvVar6;
  FUN_00512cf8(uVar8);
  return;
}


// ===== 004af970  FUN_004af970 =====

void FUN_004af970(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1e5e8;
  FUN_004afa04(param_1 + 0xd);
  FUN_004afa04(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_005466cc();
    return;
  }
  return;
}


// ===== 004af9bc  FUN_004af9bc =====

void FUN_004af9bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1e5e8;
  FUN_004afa04(param_1 + 0xd);
  FUN_004afa04(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_005466cc();
  }
  operator_delete(param_1);
  return;
}


// ===== 004afa04  FUN_004afa04 =====

void FUN_004afa04(undefined8 *param_1)

{
  ulong uVar1;
  void *pvVar2;
  
  FUN_004af604();
  pvVar2 = (void *)param_1[3];
  param_1[3] = 0;
  if (pvVar2 != (void *)0x0) {
    uVar1 = FUN_005efa64(pvVar2);
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../discord_common/native/third_party/webrtc/platform/android/release/arm64/23d8d00745598609952488468ea08f1a9a309a52-m146/include/webrtc/common_audio/wav_file.h"
                   ,0x3b,"Close()",&DAT_001f5fa0);
    }
    FUN_0065a730((long)pvVar2 + 0x28);
    operator_delete(pvVar2);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}


// ===== 004afa84  FUN_004afa84 =====

void FUN_004afa84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1e610;
  FUN_00434698(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_005466cc();
    return;
  }
  return;
}


// ===== 004afac8  FUN_004afac8 =====

void FUN_004afac8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1e610;
  FUN_00434698(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_005466cc();
  }
  operator_delete(param_1);
  return;
}


// ===== 004afb08  FUN_004afb08 =====

void FUN_004afb08(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar6 = (long *)FUN_005466fc();
    if ((plVar6 == (long *)0x0) || (lVar8 = *(long *)(param_1 + 8), lVar8 == 0)) {
      if (plVar6 == (long *)0x0) goto LAB_004afbfc;
    }
    else {
      lVar2 = lVar8 + 0x20;
      if (*(int *)(param_1 + 0x18) != 0) {
        lVar2 = lVar8 + 0x68;
      }
      uVar7 = FUN_004af820(lVar2);
      if ((uVar7 & 1) == 0) {
        lVar8 = *(long *)(param_1 + 0x20);
        local_58[0] = *(int *)(lVar8 + 0x20);
        local_50 = *(undefined8 *)(lVar8 + 0x28);
        uStack_48 = *(undefined8 *)(lVar8 + 0x18);
        local_40 = (long)(local_58[0] / 100);
        FUN_004af424(lVar2,local_58);
      }
      uVar7 = FUN_004af67c(lVar2,*(undefined8 *)(param_1 + 0x20));
      if ((uVar7 & 1) == 0) {
        FUN_004af604(lVar2);
      }
    }
    plVar1 = plVar6 + 1;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
LAB_004afbfc:
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004afc24  FUN_004afc24 =====

undefined8 FUN_004afc24(char *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *local_50;
  void *pvStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*param_1 != '\0') {
    *param_1 = '\0';
    if (*(char *)(*(long *)(param_1 + 0x58) + 0x10) == '\0') {
      local_40 = *(undefined8 *)(param_1 + 0x18);
      pvStack_48 = *(void **)(param_1 + 0x10);
      local_50 = *(void **)(param_1 + 8);
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      (**(code **)(param_1 + 0x50))
                (param_1 + 0x40,&local_50,*(undefined8 *)(param_1 + 0x28),
                 *(undefined4 *)(param_1 + 0x20));
      if (local_50 != (void *)0x0) {
        pvStack_48 = local_50;
        operator_delete(local_50);
      }
    }
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
  }
  uVar6 = param_2[1];
  uVar5 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *param_1 = '\x01';
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/audio_samples_recorder.cpp",0xa1,
                 "AudioSamplesRecorder::Open");
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004afd10  FUN_004afd10 =====

undefined1 FUN_004afd10(undefined1 *param_1)

{
  return *param_1;
}


// ===== 004afd18  FUN_004afd18 =====

void FUN_004afd18(undefined1 *param_1)

{
  long lVar1;
  void *local_40;
  void *pvStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *param_1 = 0;
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x10) == '\0') {
    local_30 = *(undefined8 *)(param_1 + 0x18);
    pvStack_38 = *(void **)(param_1 + 0x10);
    local_40 = *(void **)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    (**(code **)(param_1 + 0x50))
              (param_1 + 0x40,&local_40,*(undefined8 *)(param_1 + 0x28),
               *(undefined4 *)(param_1 + 0x20));
    if (local_40 != (void *)0x0) {
      pvStack_38 = local_40;
      operator_delete(local_40);
    }
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004afdb4  FUN_004afdb4 =====

void FUN_004afdb4(char *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  void *local_60;
  void *pvStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = 0;
  if ((param_2 == 0) || (*param_1 == '\0')) goto LAB_004aff20;
  if ((*(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20)) &&
     ((lVar5 = *(long *)(param_1 + 0x28), lVar5 == *(long *)(param_2 + 0x28) &&
      (*(long *)(param_1 + 0x30) == *(long *)(param_2 + 0x18))))) {
    plVar6 = (long *)(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x10);
    if ((ulong)(*(long *)(param_1 + 0x30) * lVar5 + (lVar1 - *plVar6 >> 1)) <=
        lVar5 * (ulong)(uint)(*(int *)(param_1 + 0x20) * 0x1e)) {
      uVar3 = FUN_00659108(param_2);
      lVar5 = FUN_00659108(param_2);
      FUN_004aff88(plVar6,lVar1,uVar3,
                   lVar5 + *(long *)(param_2 + 0x28) * *(long *)(param_2 + 0x18) * 2);
      uVar3 = 1;
      goto LAB_004aff20;
    }
    uVar4 = FUN_004022fc(0);
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/audio_samples_recorder.cpp",0x14a,
                   "Max duration reached, closing memory recording");
    }
    *param_1 = '\0';
    if (*(char *)(*(long *)(param_1 + 0x58) + 0x10) == '\0') {
      local_50 = *(undefined8 *)(param_1 + 0x18);
      pvStack_58 = *(void **)(param_1 + 0x10);
      local_60 = *(void **)(param_1 + 8);
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      *plVar6 = 0;
      goto LAB_004afeec;
    }
  }
  else {
    uVar4 = FUN_004022fc(0);
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/audio_samples_recorder.cpp",0x112,
                   "Parameter mismatch, closing memory recording");
    }
    *param_1 = '\0';
    if (*(char *)(*(long *)(param_1 + 0x58) + 0x10) == '\0') {
      local_50 = *(undefined8 *)(param_1 + 0x18);
      pvStack_58 = *(void **)(param_1 + 0x10);
      local_60 = *(void **)(param_1 + 8);
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
LAB_004afeec:
      (**(code **)(param_1 + 0x50))(param_1 + 0x40,&local_60,uVar3,*(undefined4 *)(param_1 + 0x20));
      if (local_60 != (void *)0x0) {
        pvStack_58 = local_60;
        operator_delete(local_60);
      }
    }
  }
  uVar3 = 0;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
LAB_004aff20:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 004aff88  FUN_004aff88 =====

undefined2 *
FUN_004aff88(undefined8 *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined2 *__dest;
  undefined2 *puVar3;
  void *__dest_00;
  size_t sVar4;
  ulong uVar5;
  long lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  void *__src;
  long lVar10;
  
  puVar9 = param_2;
  if (0 < (long)param_4 - (long)param_3) {
    __dest = (undefined2 *)param_1[1];
    lVar10 = (long)param_4 - (long)param_3 >> 1;
    if (param_1[2] - (long)__dest >> 1 < lVar10) {
      __src = (void *)*param_1;
      uVar1 = lVar10 + ((long)__dest - (long)__src >> 1);
      if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar5 = param_1[2] - (long)__src;
      uVar2 = uVar5;
      if (uVar5 <= uVar1) {
        uVar2 = uVar1;
      }
      if (0x7ffffffffffffffd < uVar5) {
        uVar2 = 0x7fffffffffffffff;
      }
      if (uVar2 == 0) {
        __dest_00 = (void *)0x0;
      }
      else {
        if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00401ad4();
        }
        __dest_00 = operator_new(uVar2 << 1);
      }
      puVar9 = (undefined2 *)((long)__dest_00 + ((long)param_2 - (long)__src >> 1) * 2);
      puVar7 = puVar9;
      if (param_4 != param_3) {
        puVar7 = puVar9 + lVar10;
        lVar10 = lVar10 << 1;
        puVar8 = puVar9;
        do {
          if (puVar8 == (undefined2 *)0x0) {
LAB_004b0168:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                       ,0x23,"__location != nullptr","null pointer given to construct_at");
          }
          lVar10 = lVar10 + -2;
          *puVar8 = *param_3;
          puVar8 = puVar8 + 1;
          param_3 = param_3 + 1;
        } while (lVar10 != 0);
      }
      memmove(__dest_00,__src,(long)param_2 - (long)__src);
      memmove(puVar7,param_2,(long)__dest - (long)param_2);
      param_1[2] = (void *)((long)__dest_00 + uVar2 * 2);
      *param_1 = __dest_00;
      param_1[1] = (long)puVar7 + ((long)__dest - (long)param_2);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    else {
      lVar6 = (long)__dest - (long)param_2 >> 1;
      puVar7 = __dest;
      if (lVar6 < lVar10) {
        puVar8 = param_3 + lVar6;
        sVar4 = (long)param_4 - (long)puVar8;
        if (sVar4 != 0) {
          memmove(__dest,puVar8,sVar4);
        }
        param_1[1] = (undefined2 *)((long)__dest + sVar4);
        puVar7 = (undefined2 *)((long)__dest + sVar4);
        param_4 = puVar8;
        if ((long)__dest - (long)param_2 < 1) {
          return param_2;
        }
      }
      puVar3 = puVar7;
      for (puVar8 = puVar7 + -lVar10; puVar8 < __dest; puVar8 = puVar8 + 1) {
        if (puVar3 == (undefined2 *)0x0) goto LAB_004b0168;
        *puVar3 = *puVar8;
        puVar3 = puVar3 + 1;
      }
      param_1[1] = puVar3;
      if (puVar7 != param_2 + lVar10) {
        sVar4 = (long)puVar7 - (long)(param_2 + lVar10);
        memmove(puVar7 + -((long)sVar4 >> 1),param_2,sVar4);
      }
      if ((long)param_4 - (long)param_3 != 0) {
        memmove(param_2,param_3,(long)param_4 - (long)param_3);
      }
    }
  }
  return puVar9;
}


// ===== 004b0198  FUN_004b0198 =====

void FUN_004b0198(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  param_1[0xe] = FUN_0041a918;
  param_1[0xf] = &DAT_001f1910;
  puVar4 = (undefined8 *)param_3[3];
  param_1[3] = param_2;
  *param_1 = &PTR_FUN_00d1e638;
  uVar5 = param_3[2];
  *(undefined1 *)(param_1 + 4) = 0;
  uVar3 = *param_3;
  if (puVar4[1] != 0) {
    param_3[2] = FUN_0041a918;
    param_3[3] = &DAT_001f1910;
  }
  uVar6 = param_3[1];
  uVar1 = uVar3;
  if ((code *)*puVar4 != (code *)0x0) {
    uVar1 = (*(code *)*puVar4)(uVar3);
  }
  lVar2 = param_1[0xf];
  param_1[0xe] = uVar5;
  param_1[0xf] = puVar4;
  uVar5 = param_1[0xc];
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar6;
  if (*(code **)(lVar2 + 8) != (code *)0x0) {
    (**(code **)(lVar2 + 8))(uVar5);
  }
  if ((code *)puVar4[1] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004b025c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar4[1])(uVar3);
    return;
  }
  return;
}


// ===== 004b0274  FUN_004b0274 =====

void FUN_004b0274(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  pvVar6 = operator_new(0x3c60);
  FUN_00658c48();
  FUN_00658e5c(pvVar6,param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar7 = (undefined8 *)operator_new(0x20);
  puVar7[2] = lVar3;
  puVar7[3] = pvVar6;
  *puVar7 = &PTR_FUN_00d1e660;
  puVar7[1] = uVar2;
  FUN_00512cf8(uVar8);
  return;
}


// ===== 004b0300  FUN_004b0300 =====

void FUN_004b0300(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_00d1e638;
  FUN_004afd18(param_1 + 4);
  if (*(code **)(param_1[0xf] + 8) != (code *)0x0) {
    (**(code **)(param_1[0xf] + 8))(param_1[0xc]);
  }
  pvVar1 = (void *)param_1[5];
  if (pvVar1 != (void *)0x0) {
    param_1[6] = pvVar1;
    operator_delete(pvVar1);
  }
  if (param_1[2] != 0) {
    FUN_005466cc();
    return;
  }
  return;
}


// ===== 004b0368  FUN_004b0368 =====

void FUN_004b0368(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_00d1e638;
  FUN_004afd18(param_1 + 4);
  if (*(code **)(param_1[0xf] + 8) != (code *)0x0) {
    (**(code **)(param_1[0xf] + 8))(param_1[0xc]);
  }
  pvVar1 = (void *)param_1[5];
  if (pvVar1 != (void *)0x0) {
    param_1[6] = pvVar1;
    operator_delete(pvVar1);
  }
  if (param_1[2] != 0) {
    FUN_005466cc();
  }
  operator_delete(param_1);
  return;
}


// ===== 004b03cc  FUN_004b03cc =====

void FUN_004b03cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1e660;
  FUN_00434698(param_1 + 3);
  if (param_1[2] != 0) {
    FUN_005466cc();
    return;
  }
  return;
}


// ===== 004b0410  FUN_004b0410 =====

void FUN_004b0410(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1e660;
  FUN_00434698(param_1 + 3);
  if (param_1[2] != 0) {
    FUN_005466cc();
  }
  operator_delete(param_1);
  return;
}


// ===== 004b0450  FUN_004b0450 =====

void FUN_004b0450(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar5 = (long *)FUN_005466fc();
    if ((plVar5 == (long *)0x0) || (*(long *)(param_1 + 8) == 0)) {
      if (plVar5 == (long *)0x0) goto LAB_004b0528;
    }
    else {
      lVar8 = *(long *)(param_1 + 8) + 0x20;
      uVar6 = FUN_004afd10(lVar8);
      if ((uVar6 & 1) == 0) {
        lVar7 = *(long *)(param_1 + 0x18);
        local_58[0] = *(int *)(lVar7 + 0x20);
        local_50 = *(undefined8 *)(lVar7 + 0x28);
        uStack_48 = *(undefined8 *)(lVar7 + 0x18);
        local_40 = (long)(local_58[0] / 100);
        FUN_004afc24(lVar8,local_58);
      }
      FUN_004afdb4(lVar8,*(undefined8 *)(param_1 + 0x18));
    }
    plVar1 = plVar5 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
LAB_004b0528:
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b0550  FUN_004b0550 =====

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xfffffffffffffd00 */
/* WARNING: Removing unreachable block (ram,0x004b1964) */
/* WARNING: Removing unreachable block (ram,0x004b0e98) */
/* WARNING: Removing unreachable block (ram,0x004b148c) */
/* WARNING: Removing unreachable block (ram,0x004b14a4) */
/* WARNING: Removing unreachable block (ram,0x004b1d4c) */
/* WARNING: Removing unreachable block (ram,0x004b14ac) */
/* WARNING: Removing unreachable block (ram,0x004b1498) */
/* WARNING: Removing unreachable block (ram,0x004b14c8) */
/* WARNING: Removing unreachable block (ram,0x004b14d4) */
/* WARNING: Removing unreachable block (ram,0x004b14e0) */
/* WARNING: Removing unreachable block (ram,0x004b1058) */
/* WARNING: Removing unreachable block (ram,0x004b11cc) */
/* WARNING: Removing unreachable block (ram,0x004b11ec) */
/* WARNING: Removing unreachable block (ram,0x004b1d44) */
/* WARNING: Removing unreachable block (ram,0x004b11fc) */
/* WARNING: Removing unreachable block (ram,0x004b11d8) */
/* WARNING: Removing unreachable block (ram,0x004b1218) */
/* WARNING: Removing unreachable block (ram,0x004b1224) */
/* WARNING: Removing unreachable block (ram,0x004b1230) */
/* WARNING: Removing unreachable block (ram,0x004b19ac) */
/* WARNING: Removing unreachable block (ram,0x004b1c38) */
/* WARNING: Removing unreachable block (ram,0x004b1984) */
/* WARNING: Removing unreachable block (ram,0x004b1078) */
/* WARNING: Removing unreachable block (ram,0x004b1088) */
/* WARNING: Removing unreachable block (ram,0x004b1ab0) */
/* WARNING: Removing unreachable block (ram,0x004b1ac0) */
/* WARNING: Removing unreachable block (ram,0x004b19cc) */
/* WARNING: Removing unreachable block (ram,0x004b1acc) */
/* WARNING: Removing unreachable block (ram,0x004b1d54) */
/* WARNING: Removing unreachable block (ram,0x004b1ad4) */
/* WARNING: Removing unreachable block (ram,0x004b19d8) */
/* WARNING: Removing unreachable block (ram,0x004b1af0) */
/* WARNING: Removing unreachable block (ram,0x004b1afc) */
/* WARNING: Removing unreachable block (ram,0x004b1b08) */
/* WARNING: Removing unreachable block (ram,0x004b1b30) */
/* WARNING: Removing unreachable block (ram,0x004b16d8) */
/* WARNING: Removing unreachable block (ram,0x004b16ec) */
/* WARNING: Removing unreachable block (ram,0x004b1a50) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004b0550(byte *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 long param_5,long param_6)

{
  size_t sVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
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
  byte bVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined ********ppppppppuVar26;
  undefined8 *puVar27;
  undefined ********ppppppppuVar28;
  long *plVar29;
  long lVar30;
  void *__s;
  undefined *******pppppppuVar32;
  ulong uVar33;
  undefined1 (*pauVar34) [16];
  undefined ********ppppppppuVar35;
  ulong *puVar36;
  ulong uVar37;
  uint uVar38;
  int iVar39;
  int iVar40;
  undefined8 *puVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined8 *in_stack_fffffffffffffba0;
  ulong in_stack_fffffffffffffba8;
  uint in_stack_fffffffffffffbb0;
  undefined8 *local_3a0;
  undefined8 *local_398;
  undefined8 *local_390;
  int local_388 [2];
  undefined8 local_380;
  undefined ********local_378;
  undefined ********local_370;
  undefined8 local_368;
  undefined ********local_360;
  undefined ********local_358;
  ulong uStack_350;
  undefined *******local_348;
  undefined ********local_340;
  char local_331;
  undefined ********local_330;
  undefined ********ppppppppuStack_328;
  undefined ********local_320;
  undefined ********local_310;
  undefined ********ppppppppuStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined4 local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined **local_2c8;
  undefined ********local_2c0;
  byte local_2b8;
  undefined ********local_2b0;
  undefined ********ppppppppuStack_2a8;
  undefined8 local_2a0;
  undefined4 local_110;
  undefined3 uStack_10c;
  undefined ********local_108;
  undefined ********ppppppppuStack_100;
  undefined ********local_f8;
  undefined ********local_f0;
  undefined ********ppppppppuStack_e8;
  undefined8 local_e0;
  undefined ********local_d0;
  undefined ********ppppppppuStack_c8;
  undefined8 local_c0;
  undefined ********local_b0;
  undefined ********ppppppppuStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined7 uStack_90;
  long local_88;
  undefined ********ppppppppuVar25;
  undefined ********ppppppppuVar31;
  
  lVar6 = tpidr_el0;
  local_88 = *(long *)(lVar6 + 0x28);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar24 = FUN_004d7ae8(param_3);
  if ((uVar24 & 1) == 0) {
    uVar24 = FUN_004249b0();
    if ((uVar24 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/batch_audio_file_processor.cpp",0x3db
                   ,"BatchAudioFileProcessor: input directory does not exist: ",param_3);
    }
    if (*(char *)(*(long *)(param_6 + 0x18) + 0x10) == '\0') {
      if (*(long *)(lVar6 + 0x28) == local_88) {
                    /* WARNING: Could not recover jumptable at 0x004b06fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_6 + 0x10))(param_6,0,0);
        return;
      }
      goto LAB_004b1d5c;
    }
  }
  else {
    local_388[0] = 0;
    local_380 = FUN_00549d28();
    local_2b0 = (undefined ********)0x0;
    ppppppppuStack_2a8 = (undefined ********)0x0;
    local_2a0 = (undefined ********)0x0;
    uVar24 = param_4[1];
    puVar27 = (undefined8 *)*param_4;
    if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
      uVar24 = (ulong)*(byte *)((long)param_4 + 0x17);
      puVar27 = param_4;
    }
    FUN_004b2050(&local_2b0,puVar27,(long)puVar27 + uVar24);
    FUN_0051bca4(&local_2b0,local_388);
    if ((long)local_2a0 < 0) {
      operator_delete(local_2b0);
    }
    if (local_388[0] == 0) {
      local_3a0 = (undefined8 *)0x0;
      local_398 = (undefined8 *)0x0;
      local_390 = (undefined8 *)0x0;
      local_f0 = (undefined ********)((ulong)local_f0 & 0xffffffff00000000);
      ppppppppuStack_e8 = (undefined ********)FUN_00549d28();
      local_2b0 = (undefined ********)0x0;
      ppppppppuStack_2a8 = (undefined ********)0x0;
      local_2a0 = (undefined ********)0x0;
      uVar24 = param_3[1];
      puVar27 = (undefined8 *)*param_3;
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        uVar24 = (ulong)*(byte *)((long)param_3 + 0x17);
        puVar27 = param_3;
      }
      FUN_004b2050(&local_2b0,puVar27,(long)puVar27 + uVar24);
      FUN_00518c38(&local_310,&local_2b0,0,&local_f0);
      if ((long)local_2a0 < 0) {
        operator_delete(local_2b0);
      }
      ppppppppuVar25 = ppppppppuStack_308;
      local_b0 = local_310;
      if (ppppppppuStack_308 == (undefined ********)0x0) {
        ppppppppuStack_a8 = (undefined ********)0x0;
        local_a0 = (undefined ********)CONCAT71(local_a0._1_7_,(undefined1)local_300);
        uVar18 = _DAT_001f25a0;
        uVar19 = _UNK_001f25a8;
        auVar65 = _DAT_001f2b30;
        uVar20 = _DAT_001f3040;
        uVar21 = _UNK_001f3048;
        uVar22 = _DAT_001f45d0;
        uVar23 = _UNK_001f45d8;
      }
      else {
        ppppppppuVar31 = ppppppppuStack_308 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppppppuVar31,0x10);
          if (bVar5) {
            *ppppppppuVar31 = (undefined *******)((long)*ppppppppuVar31 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        ppppppppuStack_a8 = ppppppppuStack_308;
        local_a0 = (undefined ********)CONCAT71(local_a0._1_7_,(undefined1)local_300);
        uVar18 = _DAT_001f25a0;
        uVar19 = _UNK_001f25a8;
        auVar65 = _DAT_001f2b30;
        uVar20 = _DAT_001f3040;
        uVar21 = _UNK_001f3048;
        uVar22 = _DAT_001f45d0;
        uVar23 = _UNK_001f45d8;
        if (ppppppppuStack_308 != (undefined ********)0x0) {
          ppppppppuVar31 = ppppppppuStack_308 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppppppppuVar31,0x10);
            if (bVar5) {
              *ppppppppuVar31 = (undefined *******)((long)*ppppppppuVar31 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            pppppppuVar32 = *ppppppppuVar31;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppppppppuVar31,0x10);
            if (bVar5) {
              *ppppppppuVar31 = (undefined *******)((long)pppppppuVar32 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          uVar18 = _DAT_001f25a0;
          uVar19 = _UNK_001f25a8;
          auVar65 = _DAT_001f2b30;
          uVar20 = _DAT_001f3040;
          uVar21 = _UNK_001f3048;
          uVar22 = _DAT_001f45d0;
          uVar23 = _UNK_001f45d8;
          if (pppppppuVar32 == (undefined *******)0x0) {
            (*(code *)(*ppppppppuStack_308)[2])(ppppppppuStack_308);
            FUN_005466cc(ppppppppuVar25);
            uVar18 = _DAT_001f25a0;
            uVar19 = _UNK_001f25a8;
            auVar65 = _DAT_001f2b30;
            uVar20 = _DAT_001f3040;
            uVar21 = _UNK_001f3048;
            uVar22 = _DAT_001f45d0;
            uVar23 = _UNK_001f45d8;
          }
        }
      }
      _DAT_001f25a0 = uVar18;
      _UNK_001f25a8 = uVar19;
      _DAT_001f2b30 = auVar65;
      _DAT_001f3040 = uVar20;
      _UNK_001f3048 = uVar21;
      _DAT_001f45d0 = uVar22;
      _UNK_001f45d8 = uVar23;
      if (local_b0 != (undefined ********)0x0) {
        do {
          puVar27 = (undefined8 *)FUN_005192bc(&local_b0);
          if ((1 << (ulong)(*(byte *)((long)puVar27 + 0x49) & 0x1f) & 0x13U) == 0) {
            cVar4 = *(char *)(puVar27 + 9);
          }
          else {
            FUN_0051c50c(&local_2b0,puVar27,0);
            cVar4 = (char)local_2b0;
          }
          if (cVar4 == '\x01') {
            auVar64 = FUN_0051dd48(puVar27);
            ppppppppuVar31 = auVar64._8_8_;
            ppppppppuVar25 = auVar64._0_8_;
            if ((undefined ********)0x7fffffffffffffef < ppppppppuVar31) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (ppppppppuVar31 < (undefined ********)0x17) {
              ppppppppuVar28 = (undefined ********)&local_2b0;
              local_2a0 = (undefined ********)CONCAT17(auVar64[8],(undefined7)local_2a0);
            }
            else {
              uVar24 = ((ulong)ppppppppuVar31 | 0xf) + 1;
              ppppppppuVar28 = (undefined ********)operator_new(uVar24);
              local_2b0 = ppppppppuVar28;
              ppppppppuStack_2a8 = ppppppppuVar31;
              local_2a0 = (undefined ********)(uVar24 | 0x8000000000000000);
            }
            if ((ppppppppuVar28 <= ppppppppuVar25) &&
               (ppppppppuVar25 < (undefined ********)((long)ppppppppuVar28 + (long)ppppppppuVar31)))
            goto LAB_004b1c84;
            if (ppppppppuVar31 != (undefined ********)0x0) {
              memmove(ppppppppuVar28,ppppppppuVar25,(size_t)ppppppppuVar31);
            }
            *(byte *)((long)ppppppppuVar28 + (long)ppppppppuVar31) = 0;
            ppppppppuVar31 = ppppppppuStack_2a8;
            ppppppppuVar25 = local_2b0;
            local_108._0_7_ = SUB87(local_2a0,0);
            if ((long)local_2a0 < 0) {
              if (ppppppppuStack_2a8 < (undefined ********)0x17) {
                ppppppppuVar28 = (undefined ********)&local_d0;
                local_c0 = (undefined ********)
                           CONCAT17((char)ppppppppuStack_2a8,(undefined7)local_c0);
              }
              else {
                if ((undefined ********)0x7fffffffffffffef < ppppppppuStack_2a8) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                uVar24 = ((ulong)ppppppppuStack_2a8 | 0xf) + 1;
                ppppppppuVar28 = (undefined ********)operator_new(uVar24);
                local_c0 = (undefined ********)(uVar24 | 0x8000000000000000);
                ppppppppuStack_c8 = ppppppppuVar31;
                local_d0 = ppppppppuVar28;
              }
              sVar1 = (long)ppppppppuVar31 + 1;
              if ((ppppppppuVar28 <= ppppppppuVar25) &&
                 (ppppppppuVar25 < (undefined ********)((long)ppppppppuVar28 + sVar1)))
              goto LAB_004b1c84;
              memmove(ppppppppuVar28,ppppppppuVar25,sVar1);
              operator_delete(ppppppppuVar25);
              bVar17 = local_c0._7_1_;
            }
            else {
              local_d0 = local_2b0;
              ppppppppuStack_c8 = ppppppppuStack_2a8;
              local_c0 = local_2a0;
              bVar17 = local_2a0._7_1_;
            }
            ppppppppuVar28 = (undefined ********)(ulong)bVar17;
            ppppppppuVar25 = local_d0;
            ppppppppuVar31 = ppppppppuStack_c8;
            if (-1 < (char)bVar17) {
              ppppppppuVar25 = (undefined ********)&local_d0;
              ppppppppuVar31 = ppppppppuVar28;
            }
            if (ppppppppuVar31 != (undefined ********)0x0) {
              ppppppppuVar28 = ppppppppuVar25;
              if (ppppppppuVar31 < (undefined ********)0x8) {
LAB_004b0b94:
                do {
                  bVar3 = *(byte *)ppppppppuVar28;
                  bVar17 = bVar3 | 0x20;
                  if (0x19 < bVar3 - 0x41) {
                    bVar17 = bVar3;
                  }
                  ppppppppuVar26 = (undefined ********)((long)ppppppppuVar28 + 1);
                  *(byte *)ppppppppuVar28 = bVar17;
                  ppppppppuVar28 = ppppppppuVar26;
                } while (ppppppppuVar26 !=
                         (undefined ********)((long)ppppppppuVar25 + (long)ppppppppuVar31));
              }
              else if (ppppppppuVar31 < (undefined ********)0x20) {
                ppppppppuVar26 = (undefined ********)0x0;
LAB_004b0b30:
                ppppppppuVar35 = (undefined ********)((ulong)ppppppppuVar31 & 0xfffffffffffffff8);
                ppppppppuVar28 = (undefined ********)((long)ppppppppuVar25 + (long)ppppppppuVar35);
                lVar30 = (long)ppppppppuVar26 - (long)ppppppppuVar35;
                puVar36 = (ulong *)((long)ppppppppuVar25 + (long)ppppppppuVar26);
                do {
                  auVar42._0_8_ = *puVar36;
                  auVar42._8_8_ = 0;
                  lVar30 = lVar30 + 8;
                  auVar7._8_8_ = uVar21;
                  auVar7._0_8_ = uVar20;
                  auVar64 = a64_TBL(ZEXT816(0),auVar42,auVar7);
                  auVar8._8_8_ = uVar23;
                  auVar8._0_8_ = uVar22;
                  auVar47 = a64_TBL(ZEXT816(0),auVar42,auVar8);
                  auVar43._0_4_ = auVar64._0_4_ + -0x41;
                  auVar43._4_4_ = auVar64._4_4_ + -0x41;
                  auVar43._8_4_ = auVar64._8_4_ + -0x41;
                  auVar43._12_4_ = auVar64._12_4_ + -0x41;
                  auVar48._0_4_ = auVar47._0_4_ + -0x41;
                  auVar48._4_4_ = auVar47._4_4_ + -0x41;
                  auVar48._8_4_ = auVar47._8_4_ + -0x41;
                  auVar48._12_4_ = auVar47._12_4_ + -0x41;
                  auVar9._8_4_ = 0x1a;
                  auVar9._0_8_ = 0x1a0000001a;
                  auVar9._12_4_ = 0x1a;
                  auVar64 = NEON_cmhi(auVar9,auVar43,4);
                  auVar10._8_4_ = 0x1a;
                  auVar10._0_8_ = 0x1a0000001a;
                  auVar10._12_4_ = 0x1a;
                  auVar47 = NEON_cmhi(auVar10,auVar48,4);
                  uVar24 = NEON_bit(auVar42._0_8_,auVar42._0_8_ | 0x2020202020202020,
                                    CONCAT17(auVar64[0xc],
                                             CONCAT16(auVar64[8],
                                                      CONCAT15(auVar64[4],
                                                               CONCAT14(auVar64[0],
                                                                        CONCAT13(auVar47[0xc],
                                                                                 CONCAT12(auVar47[8]
                                                                                          ,CONCAT11(
                                                  auVar47[4],auVar47[0]))))))),1);
                  *puVar36 = uVar24;
                  puVar36 = puVar36 + 1;
                } while (lVar30 != 0);
                if (ppppppppuVar31 != ppppppppuVar35) goto LAB_004b0b94;
              }
              else {
                ppppppppuVar26 = (undefined ********)((ulong)ppppppppuVar31 & 0xffffffffffffffe0);
                pauVar34 = (undefined1 (*) [16])(ppppppppuVar25 + 2);
                ppppppppuVar28 = ppppppppuVar26;
                do {
                  auVar7 = pauVar34[-1];
                  auVar8 = *pauVar34;
                  ppppppppuVar28 = ppppppppuVar28 + -4;
                  auVar15._8_8_ = uVar19;
                  auVar15._0_8_ = uVar18;
                  auVar44 = a64_TBL(ZEXT816(0),auVar7,auVar15);
                  auVar49 = a64_TBL(ZEXT816(0),auVar7,auVar65);
                  auVar64._8_8_ = uVar21;
                  auVar64._0_8_ = uVar20;
                  auVar64 = a64_TBL(ZEXT816(0),auVar7,auVar64);
                  auVar54._8_8_ = uVar23;
                  auVar54._0_8_ = uVar22;
                  auVar54 = a64_TBL(ZEXT816(0),auVar7,auVar54);
                  auVar16._8_8_ = uVar19;
                  auVar16._0_8_ = uVar18;
                  auVar57 = a64_TBL(ZEXT816(0),auVar8,auVar16);
                  auVar59 = a64_TBL(ZEXT816(0),auVar8,auVar65);
                  auVar47._8_8_ = uVar21;
                  auVar47._0_8_ = uVar20;
                  auVar47 = a64_TBL(ZEXT816(0),auVar8,auVar47);
                  auVar62._8_8_ = uVar23;
                  auVar62._0_8_ = uVar22;
                  auVar62 = a64_TBL(ZEXT816(0),auVar8,auVar62);
                  auVar55._0_4_ = auVar54._0_4_ + -0x41;
                  auVar55._4_4_ = auVar54._4_4_ + -0x41;
                  auVar55._8_4_ = auVar54._8_4_ + -0x41;
                  auVar55._12_4_ = auVar54._12_4_ + -0x41;
                  auVar52._0_4_ = auVar64._0_4_ + -0x41;
                  auVar52._4_4_ = auVar64._4_4_ + -0x41;
                  auVar52._8_4_ = auVar64._8_4_ + -0x41;
                  auVar52._12_4_ = auVar64._12_4_ + -0x41;
                  auVar50._0_4_ = auVar49._0_4_ + -0x41;
                  auVar50._4_4_ = auVar49._4_4_ + -0x41;
                  auVar50._8_4_ = auVar49._8_4_ + -0x41;
                  auVar50._12_4_ = auVar49._12_4_ + -0x41;
                  auVar45._0_4_ = auVar44._0_4_ + -0x41;
                  auVar45._4_4_ = auVar44._4_4_ + -0x41;
                  auVar45._8_4_ = auVar44._8_4_ + -0x41;
                  auVar45._12_4_ = auVar44._12_4_ + -0x41;
                  auVar63._0_4_ = auVar62._0_4_ + -0x41;
                  auVar63._4_4_ = auVar62._4_4_ + -0x41;
                  auVar63._8_4_ = auVar62._8_4_ + -0x41;
                  auVar63._12_4_ = auVar62._12_4_ + -0x41;
                  auVar61._0_4_ = auVar47._0_4_ + -0x41;
                  auVar61._4_4_ = auVar47._4_4_ + -0x41;
                  auVar61._8_4_ = auVar47._8_4_ + -0x41;
                  auVar61._12_4_ = auVar47._12_4_ + -0x41;
                  auVar60._0_4_ = auVar59._0_4_ + -0x41;
                  auVar60._4_4_ = auVar59._4_4_ + -0x41;
                  auVar60._8_4_ = auVar59._8_4_ + -0x41;
                  auVar60._12_4_ = auVar59._12_4_ + -0x41;
                  auVar58._0_4_ = auVar57._0_4_ + -0x41;
                  auVar58._4_4_ = auVar57._4_4_ + -0x41;
                  auVar58._8_4_ = auVar57._8_4_ + -0x41;
                  auVar58._12_4_ = auVar57._12_4_ + -0x41;
                  auVar44._8_4_ = 0x1a;
                  auVar44._0_8_ = 0x1a0000001a;
                  auVar44._12_4_ = 0x1a;
                  auVar64 = NEON_cmhi(auVar44,auVar45,4);
                  auVar49._8_4_ = 0x1a;
                  auVar49._0_8_ = 0x1a0000001a;
                  auVar49._12_4_ = 0x1a;
                  auVar47 = NEON_cmhi(auVar49,auVar50,4);
                  auVar57._8_4_ = 0x1a;
                  auVar57._0_8_ = 0x1a0000001a;
                  auVar57._12_4_ = 0x1a;
                  auVar54 = NEON_cmhi(auVar57,auVar52,4);
                  auVar59._8_4_ = 0x1a;
                  auVar59._0_8_ = 0x1a0000001a;
                  auVar59._12_4_ = 0x1a;
                  auVar44 = NEON_cmhi(auVar59,auVar55,4);
                  auVar11._8_4_ = 0x1a;
                  auVar11._0_8_ = 0x1a0000001a;
                  auVar11._12_4_ = 0x1a;
                  auVar62 = NEON_cmhi(auVar11,auVar58,4);
                  auVar12._8_4_ = 0x1a;
                  auVar12._0_8_ = 0x1a0000001a;
                  auVar12._12_4_ = 0x1a;
                  auVar49 = NEON_cmhi(auVar12,auVar60,4);
                  auVar13._8_4_ = 0x1a;
                  auVar13._0_8_ = 0x1a0000001a;
                  auVar13._12_4_ = 0x1a;
                  auVar57 = NEON_cmhi(auVar13,auVar61,4);
                  auVar14._8_4_ = 0x1a;
                  auVar14._0_8_ = 0x1a0000001a;
                  auVar14._12_4_ = 0x1a;
                  auVar59 = NEON_cmhi(auVar14,auVar63,4);
                  auVar46[1] = auVar44[4];
                  auVar46[0] = auVar44[0];
                  auVar46[2] = auVar44[8];
                  auVar46[3] = auVar44[0xc];
                  auVar46[4] = auVar54[0];
                  auVar46[5] = auVar54[4];
                  auVar46[6] = auVar54[8];
                  auVar46[7] = auVar54[0xc];
                  auVar46[8] = auVar47[0];
                  auVar46[9] = auVar47[4];
                  auVar46[10] = auVar47[8];
                  auVar46[0xb] = auVar47[0xc];
                  auVar46[0xc] = auVar64[0];
                  auVar46[0xd] = auVar64[4];
                  auVar46[0xe] = auVar64[8];
                  auVar46[0xf] = auVar64[0xc];
                  auVar51[1] = auVar59[4];
                  auVar51[0] = auVar59[0];
                  auVar51[2] = auVar59[8];
                  auVar51[3] = auVar59[0xc];
                  auVar51[4] = auVar57[0];
                  auVar51[5] = auVar57[4];
                  auVar51[6] = auVar57[8];
                  auVar51[7] = auVar57[0xc];
                  auVar51[8] = auVar49[0];
                  auVar51[9] = auVar49[4];
                  auVar51[10] = auVar49[8];
                  auVar51[0xb] = auVar49[0xc];
                  auVar51[0xc] = auVar62[0];
                  auVar51[0xd] = auVar62[4];
                  auVar51[0xe] = auVar62[8];
                  auVar51[0xf] = auVar62[0xc];
                  auVar53._0_8_ = auVar7._0_8_ | 0x2020202020202020;
                  auVar53[8] = auVar7[8] | 0x20;
                  auVar53[9] = auVar7[9] | 0x20;
                  auVar53[10] = auVar7[10] | 0x20;
                  auVar53[0xb] = auVar7[0xb] | 0x20;
                  auVar53[0xc] = auVar7[0xc] | 0x20;
                  auVar53[0xd] = auVar7[0xd] | 0x20;
                  auVar53[0xe] = auVar7[0xe] | 0x20;
                  auVar53[0xf] = auVar7[0xf] | 0x20;
                  auVar56._0_8_ = auVar8._0_8_ | 0x2020202020202020;
                  auVar56[8] = auVar8[8] | 0x20;
                  auVar56[9] = auVar8[9] | 0x20;
                  auVar56[10] = auVar8[10] | 0x20;
                  auVar56[0xb] = auVar8[0xb] | 0x20;
                  auVar56[0xc] = auVar8[0xc] | 0x20;
                  auVar56[0xd] = auVar8[0xd] | 0x20;
                  auVar56[0xe] = auVar8[0xe] | 0x20;
                  auVar56[0xf] = auVar8[0xf] | 0x20;
                  auVar64 = NEON_bit(auVar7,auVar53,auVar46,1);
                  auVar47 = NEON_bit(auVar8,auVar56,auVar51,1);
                  *(long *)(pauVar34[-1] + 8) = auVar64._8_8_;
                  *(long *)pauVar34[-1] = auVar64._0_8_;
                  *(long *)(*pauVar34 + 8) = auVar47._8_8_;
                  *(long *)*pauVar34 = auVar47._0_8_;
                  pauVar34 = pauVar34 + 2;
                } while (ppppppppuVar28 != (undefined ********)0x0);
                if (ppppppppuVar31 != ppppppppuVar26) {
                  if (((ulong)ppppppppuVar31 & 0x18) == 0) {
                    ppppppppuVar28 =
                         (undefined ********)((long)ppppppppuVar25 + (long)ppppppppuVar26);
                    goto LAB_004b0b94;
                  }
                  goto LAB_004b0b30;
                }
              }
              ppppppppuVar28 = (undefined ********)((ulong)local_c0 >> 0x38);
            }
            ppppppppuVar25 = ppppppppuStack_c8;
            ppppppppuVar31 = local_d0;
            if (-1 < (char)ppppppppuVar28) {
              ppppppppuVar25 = ppppppppuVar28;
              ppppppppuVar31 = (undefined ********)&local_d0;
            }
            if ((ppppppppuVar31 == (undefined ********)0x0) &&
               (ppppppppuVar25 != (undefined ********)0x0)) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/string_view",
                         0x131,"__len == 0 || __s != nullptr",
                         "string_view::string_view(_CharT *, size_t): received nullptr");
            }
            if ((ppppppppuVar25 == (undefined ********)0x4) &&
               (*(int *)ppppppppuVar31 == 0x7661772e)) {
              if (*(char *)((long)puVar27 + 0x17) < '\0') {
                ppppppppuVar25 = (undefined ********)*puVar27;
                ppppppppuVar31 = (undefined ********)puVar27[1];
                if (ppppppppuVar31 < (undefined ********)0x17) {
                  ppppppppuVar28 = (undefined ********)&local_2b0;
                  local_2a0 = (undefined ********)
                              CONCAT17((char)ppppppppuVar31,(undefined7)local_2a0);
                }
                else {
                  if ((undefined ********)0x7fffffffffffffef < ppppppppuVar31) {
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  uVar24 = ((ulong)ppppppppuVar31 | 0xf) + 1;
                  ppppppppuVar28 = (undefined ********)operator_new(uVar24);
                  local_2a0 = (undefined ********)(uVar24 | 0x8000000000000000);
                  local_2b0 = ppppppppuVar28;
                  ppppppppuStack_2a8 = ppppppppuVar31;
                }
                if ((ppppppppuVar28 <= ppppppppuVar25) &&
                   (ppppppppuVar25 <
                    (undefined ********)((long)ppppppppuVar28 + (long)ppppppppuVar31 + 1U)))
                goto LAB_004b1c84;
                memmove(ppppppppuVar28,ppppppppuVar25,(long)ppppppppuVar31 + 1U);
              }
              else {
                local_2b0 = (undefined ********)*puVar27;
                ppppppppuStack_2a8 = (undefined ********)puVar27[1];
                local_2a0 = (undefined ********)puVar27[2];
              }
              if (local_398 < local_390) {
                if (local_398 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  std::__Cr::__libcpp_verbose_abort
                            ("%s:%d: assertion %s failed: %s",
                             "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                             ,0x23,"__location != nullptr","null pointer given to construct_at");
                }
                local_398[2] = local_2a0;
                local_398[1] = ppppppppuStack_2a8;
                *local_398 = local_2b0;
                local_398 = local_398 + 3;
              }
              else {
                FUN_0047a79c(&local_3a0,&local_2b0);
                if ((long)local_2a0 < 0) {
                  operator_delete(local_2b0);
                }
              }
              ppppppppuVar28 = (undefined ********)((ulong)local_c0 >> 0x38);
            }
            if ((uint)ppppppppuVar28 >> 7 != 0) {
              operator_delete(local_d0);
            }
          }
          FUN_00519308(&local_b0,0);
        } while (local_b0 != (undefined ********)0x0);
      }
      ppppppppuVar25 = ppppppppuStack_a8;
      if (ppppppppuStack_a8 != (undefined ********)0x0) {
        ppppppppuVar31 = ppppppppuStack_a8 + 1;
        do {
          pppppppuVar32 = *ppppppppuVar31;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppppppuVar31,0x10);
          if (bVar5) {
            *ppppppppuVar31 = (undefined *******)((long)pppppppuVar32 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (pppppppuVar32 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuStack_a8)[2])(ppppppppuStack_a8);
          FUN_005466cc(ppppppppuVar25);
        }
      }
      ppppppppuVar25 = ppppppppuStack_308;
      if (ppppppppuStack_308 != (undefined ********)0x0) {
        ppppppppuVar31 = ppppppppuStack_308 + 1;
        do {
          pppppppuVar32 = *ppppppppuVar31;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppppppuVar31,0x10);
          if (bVar5) {
            *ppppppppuVar31 = (undefined *******)((long)pppppppuVar32 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (pppppppuVar32 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuStack_308)[2])(ppppppppuStack_308);
          FUN_005466cc(ppppppppuVar25);
        }
      }
      if (((int)local_f0 != 0) && (uVar24 = FUN_004249b0(), (uVar24 & 1) == 0)) {
        FUN_00549d70(&local_2b0,&local_f0);
        FUN_00623bb0("\r\t\n\t\n","../../discord_native_lib/src/batch_audio_file_processor.cpp",
                     0x2f3,"Failed to enumerate directory: ",param_3," error: ",&local_2b0);
        if ((long)local_2a0 < 0) {
          operator_delete(local_2b0);
        }
      }
      uVar37 = ((long)local_398 - (long)local_3a0 >> 3) * -0x5555555555555555;
      uVar24 = FUN_00417e08();
      if ((uVar24 & 1) == 0) {
        local_2a0 = (undefined ********)&local_b0;
        local_2b0 = (undefined ********)0x1b0b98;
        ppppppppuStack_2a8 = (undefined ********)0x499;
        ppppppppuStack_308 = (undefined ********)&local_2b0;
        local_310 = (undefined ********)0x1addc3;
        in_stack_fffffffffffffba0 = param_4;
        FUN_00623bb0(&DAT_001f6fee,"../../discord_native_lib/src/batch_audio_file_processor.cpp",
                     0x499,"BatchAudioFileProcessor: processing ",uVar37 & 0xffffffff," files from "
                     ,param_3,&DAT_0019fec4,param_4);
      }
      local_2b0 = (undefined ********)&PTR_FUN_00d1e688;
      FUN_00842718(&ppppppppuStack_2a8,0);
      FUN_0045a9a4(param_2,&local_2b0,0,48000,1);
      local_2b8 = 0;
      local_2c8 = &PTR_FUN_00d1e6f0;
      local_2c0 = (undefined ********)0x0;
      FUN_0045c55c(param_2,&local_2c8);
      if ((int)(uint)uVar37 < 1) {
        iVar40 = 0;
        iVar2 = 0;
      }
      else {
        uVar24 = 0;
        iVar40 = 0;
        iVar2 = 0;
        do {
          iVar39 = (int)uVar24;
          if ((*param_1 & 1) != 0) {
            uVar24 = FUN_00417e08();
            if ((uVar24 & 1) == 0) {
              FUN_00623bb0(&DAT_001f6148,
                           "../../discord_native_lib/src/batch_audio_file_processor.cpp",0x511,
                           "BatchAudioFileProcessor: cancelled at file ",iVar39 + 1,&DAT_001c7bbb,
                           uVar37);
            }
            break;
          }
          uVar33 = ((long)local_398 - (long)local_3a0 >> 3) * -0x5555555555555555;
          if (uVar33 < uVar24 || uVar33 - uVar24 == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x587,
                       "__n < size()","vector[] index out of bounds");
          }
          ppppppppuStack_e8 = (undefined ********)0x0;
          local_e0 = (undefined ********)0x0;
          puVar41 = local_3a0 + uVar24 * 3;
          local_f0 = (undefined ********)0x0;
          uVar33 = puVar41[1];
          puVar27 = (undefined8 *)*puVar41;
          if (-1 < (char)*(byte *)((long)puVar41 + 0x17)) {
            uVar33 = (ulong)*(byte *)((long)puVar41 + 0x17);
            puVar27 = puVar41;
          }
          FUN_004b2050(&local_f0,puVar27,(long)puVar27 + uVar33);
          local_108 = (undefined ********)0x0;
          ppppppppuStack_100 = (undefined ********)0x0;
          local_f8 = (undefined ********)0x0;
          uVar33 = param_3[1];
          puVar27 = (undefined8 *)*param_3;
          if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
            uVar33 = (ulong)*(byte *)((long)param_3 + 0x17);
            puVar27 = param_3;
          }
          FUN_004b2050(&local_108,puVar27,(long)puVar27 + uVar33);
          FUN_0051c5a4(&local_310,&local_f0,0);
          FUN_0051c5a4(&local_b0,&local_108,0);
          FUN_0051dda0(&local_d0,&local_310,&local_b0);
          if ((long)local_300 < 0) {
            operator_delete(local_310);
          }
          auVar65 = FUN_0051db8c(&local_d0);
          ppppppppuVar31 = auVar65._8_8_;
          ppppppppuVar25 = auVar65._0_8_;
          if ((undefined ********)0x7fffffffffffffef < ppppppppuVar31) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (ppppppppuVar31 < (undefined ********)0x17) {
            ppppppppuVar28 = (undefined ********)&local_310;
            local_300 = (undefined ********)CONCAT17(auVar65[8],(undefined7)local_300);
          }
          else {
            uVar33 = ((ulong)ppppppppuVar31 | 0xf) + 1;
            ppppppppuVar28 = (undefined ********)operator_new(uVar33);
            local_300 = (undefined ********)(uVar33 | 0x8000000000000000);
            local_310 = ppppppppuVar28;
            ppppppppuStack_308 = ppppppppuVar31;
          }
          if ((ppppppppuVar28 <= ppppppppuVar25) &&
             (ppppppppuVar25 < (undefined ********)((long)ppppppppuVar28 + (long)ppppppppuVar31))) {
LAB_004b1c84:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                       ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range")
            ;
          }
          if (ppppppppuVar31 != (undefined ********)0x0) {
            memmove(ppppppppuVar28,ppppppppuVar25,(size_t)ppppppppuVar31);
          }
          *(byte *)((long)ppppppppuVar28 + (long)ppppppppuVar31) = 0;
          ppppppppuVar31 = ppppppppuStack_308;
          ppppppppuVar25 = local_310;
          local_f0._0_7_ = SUB87(local_300,0);
          ppppppppuVar28 = local_f0;
          if ((long)local_300 < 0) {
            if (ppppppppuStack_308 < (undefined ********)0x17) {
              ppppppppuVar28 = (undefined ********)&local_b0;
              local_a0 = (undefined ********)CONCAT17((char)ppppppppuStack_308,(undefined7)local_a0)
              ;
            }
            else {
              if ((undefined ********)0x7fffffffffffffef < ppppppppuStack_308) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              uVar33 = ((ulong)ppppppppuStack_308 | 0xf) + 1;
              ppppppppuVar28 = (undefined ********)operator_new(uVar33);
              local_a0 = (undefined ********)(uVar33 | 0x8000000000000000);
              ppppppppuStack_a8 = ppppppppuVar31;
              local_b0 = ppppppppuVar28;
            }
            sVar1 = (long)ppppppppuVar31 + 1;
            if ((ppppppppuVar28 <= ppppppppuVar25) &&
               (ppppppppuVar25 < (undefined ********)((long)ppppppppuVar28 + sVar1)))
            goto LAB_004b1c84;
            memmove(ppppppppuVar28,ppppppppuVar25,sVar1);
            operator_delete(ppppppppuVar25);
          }
          else {
            local_f0._0_4_ = (int)local_300;
            local_b0 = local_310;
            ppppppppuStack_a8 = ppppppppuStack_308;
            local_a0 = (undefined ********)CONCAT17(local_300._7_1_,(undefined7)local_a0);
                    /* WARNING: Ignoring partial resolution of indirect */
            local_a0._0_4_ = (int)local_f0;
            local_f0 = ppppppppuVar28;
          }
          local_108 = (undefined ********)0x0;
          ppppppppuStack_100 = (undefined ********)0x0;
          local_f8 = (undefined ********)0x0;
          uVar33 = param_4[1];
          puVar27 = (undefined8 *)*param_4;
          if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
            uVar33 = (ulong)*(byte *)((long)param_4 + 0x17);
            puVar27 = param_4;
          }
          FUN_004b2050(&local_108,puVar27,(long)puVar27 + uVar33);
          auVar65 = FUN_0051d6f0(&local_d0);
          ppppppppuVar31 = auVar65._8_8_;
          ppppppppuVar25 = auVar65._0_8_;
          if ((undefined ********)0x7fffffffffffffef < ppppppppuVar31) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (ppppppppuVar31 < (undefined ********)0x17) {
            ppppppppuVar28 = (undefined ********)&local_310;
            local_300 = (undefined ********)CONCAT17(auVar65[8],(undefined7)local_300);
          }
          else {
            uVar33 = ((ulong)ppppppppuVar31 | 0xf) + 1;
            ppppppppuVar28 = (undefined ********)operator_new(uVar33);
            local_300 = (undefined ********)(uVar33 | 0x8000000000000000);
            local_310 = ppppppppuVar28;
            ppppppppuStack_308 = ppppppppuVar31;
          }
          if ((ppppppppuVar28 <= ppppppppuVar25) &&
             (ppppppppuVar25 < (undefined ********)((long)ppppppppuVar28 + (long)ppppppppuVar31)))
          goto LAB_004b1c84;
          if (ppppppppuVar31 != (undefined ********)0x0) {
            memmove(ppppppppuVar28,ppppppppuVar25,(size_t)ppppppppuVar31);
          }
          *(byte *)((long)ppppppppuVar28 + (long)ppppppppuVar31) = 0;
          ppppppppuStack_328 = ppppppppuStack_308;
          local_330 = local_310;
          local_320 = local_300;
          ppppppppuStack_e8 = ppppppppuStack_100;
          local_f0 = local_108;
          local_e0 = local_f8;
          FUN_004b1f38(&local_f0,&local_330);
          ppppppppuVar31 = local_a0;
          ppppppppuVar25 = ppppppppuStack_a8;
          if (-1 < (long)local_a0) {
            ppppppppuVar25 = (undefined ********)((ulong)local_a0 >> 0x38);
          }
          ppppppppuVar28 = (undefined ********)((long)ppppppppuVar25 + 10);
          if ((undefined ********)0x7fffffffffffffef < ppppppppuVar28) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (ppppppppuVar28 < (undefined ********)0x17) {
            local_358 = (undefined ********)0x0;
            ppppppppuVar26 = (undefined ********)&local_360;
            local_360 = (undefined ********)0x0;
            uStack_350 = (long)ppppppppuVar28 << 0x38;
          }
          else {
            uVar33 = ((ulong)ppppppppuVar28 | 0xf) + 1;
            ppppppppuVar26 = (undefined ********)operator_new(uVar33);
            uStack_350 = uVar33 | 0x8000000000000000;
            local_360 = ppppppppuVar26;
            local_358 = ppppppppuVar28;
          }
          ppppppppuVar28 = (undefined ********)((long)ppppppppuVar26 + (long)ppppppppuVar25);
          ppppppppuVar35 = local_b0;
          if (-1 < (long)ppppppppuVar31) {
            ppppppppuVar35 = (undefined ********)&local_b0;
          }
          if ((ppppppppuVar26 <= ppppppppuVar35) && (ppppppppuVar35 < ppppppppuVar28))
          goto LAB_004b1c84;
          if (ppppppppuVar25 != (undefined ********)0x0) {
            memmove(ppppppppuVar26,ppppppppuVar35,(size_t)ppppppppuVar25);
          }
          if ((ppppppppuVar28 < (undefined ********)0x1b0bd5) &&
             ("_processed" < (byte *)((long)ppppppppuVar28 + 10))) goto LAB_004b1c84;
          *(byte *)((long)ppppppppuVar28 + 10) = 0;
          *(undefined2 *)(ppppppppuVar28 + 1) = 0x6465;
          *ppppppppuVar28 = (undefined *******)s__processed_001b0bd4._0_8_;
          auVar65 = FUN_0051dd48(&local_d0);
          ppppppppuVar31 = auVar65._8_8_;
          ppppppppuVar25 = auVar65._0_8_;
          if ((undefined ********)0x7fffffffffffffef < ppppppppuVar31) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (ppppppppuVar31 < (undefined ********)0x17) {
            ppppppppuVar28 = (undefined ********)&local_310;
            local_300 = (undefined ********)CONCAT17(auVar65[8],(undefined7)local_300);
          }
          else {
            uVar33 = ((ulong)ppppppppuVar31 | 0xf) + 1;
            ppppppppuVar28 = (undefined ********)operator_new(uVar33);
            local_300 = (undefined ********)(uVar33 | 0x8000000000000000);
            local_310 = ppppppppuVar28;
            ppppppppuStack_308 = ppppppppuVar31;
          }
          if ((ppppppppuVar28 <= ppppppppuVar25) &&
             (ppppppppuVar25 < (undefined ********)((long)ppppppppuVar28 + (long)ppppppppuVar31)))
          goto LAB_004b1c84;
          if (ppppppppuVar31 != (undefined ********)0x0) {
            memmove(ppppppppuVar28,ppppppppuVar25,(size_t)ppppppppuVar31);
          }
          *(byte *)((long)ppppppppuVar28 + (long)ppppppppuVar31) = 0;
          ppppppppuVar28 = local_300;
          ppppppppuVar31 = ppppppppuStack_308;
          ppppppppuVar25 = local_310;
          uStack_10c = (undefined3)((ulong)local_300 >> 0x20);
          local_110 = (undefined4)local_300;
          if ((long)local_300 < 0) {
            if (ppppppppuStack_308 < (undefined ********)0x17) {
              ppppppppuVar26 = (undefined ********)&local_378;
              local_368 = CONCAT17((char)ppppppppuStack_308,(undefined7)local_368);
            }
            else {
              if ((undefined ********)0x7fffffffffffffef < ppppppppuStack_308) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              uVar33 = ((ulong)ppppppppuStack_308 | 0xf) + 1;
              ppppppppuVar26 = (undefined ********)operator_new(uVar33);
              local_368 = uVar33 | 0x8000000000000000;
              local_370 = ppppppppuVar31;
              local_378 = ppppppppuVar26;
            }
            sVar1 = (long)ppppppppuVar31 + 1;
            if ((ppppppppuVar26 <= ppppppppuVar25) &&
               (ppppppppuVar25 < (undefined ********)((long)ppppppppuVar26 + sVar1)))
            goto LAB_004b1c84;
            memmove(ppppppppuVar26,ppppppppuVar25,sVar1);
            bVar17 = local_368._7_1_;
          }
          else {
            local_378 = local_310;
            local_370 = ppppppppuStack_308;
            local_368 = CONCAT17(local_300._7_1_,(undefined7)local_368);
                    /* WARNING (jumptable): Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
            local_368._0_4_ = (undefined4)local_300;
            bVar17 = local_300._7_1_;
          }
          ppppppppuVar31 = local_370;
          ppppppppuVar26 = local_378;
          if (-1 < (char)bVar17) {
            ppppppppuVar31 = (undefined ********)(ulong)bVar17;
            ppppppppuVar26 = (undefined ********)&local_378;
          }
          puVar27 = (undefined8 *)FUN_00547cac(&local_360,ppppppppuVar26,ppppppppuVar31);
          local_98._0_7_ = (undefined7)puVar27[1];
          local_348 = (undefined *******)*puVar27;
          local_98._7_1_ = (undefined1)*(undefined8 *)((long)puVar27 + 0xf);
          uStack_90 = (undefined7)((ulong)*(undefined8 *)((long)puVar27 + 0xf) >> 8);
          local_331 = *(char *)((long)puVar27 + 0x17);
          *puVar27 = 0;
          puVar27[1] = 0;
          puVar27[2] = 0;
          ppppppppuStack_308 = ppppppppuStack_e8;
          local_310 = local_f0;
          local_300 = local_e0;
          FUN_004b1f38(&local_310,&local_348);
          if (local_331 < '\0') {
            operator_delete(local_348);
          }
          if ((long)local_368 < 0) {
            operator_delete(local_378);
          }
          if ((long)ppppppppuVar28 < 0) {
            operator_delete(ppppppppuVar25);
          }
          if ((long)uStack_350 < 0) {
            operator_delete(local_360);
          }
          if ((long)local_320 < 0) {
            operator_delete(local_330);
          }
          ppppppppuVar31 = ppppppppuStack_308;
          ppppppppuVar25 = local_310;
          if ((long)local_300 < 0) {
            if (ppppppppuStack_308 < (undefined ********)0x17) {
              ppppppppuVar28 = (undefined ********)&local_f0;
              local_e0 = (undefined ********)CONCAT17((char)ppppppppuStack_308,(undefined7)local_e0)
              ;
            }
            else {
              if ((undefined ********)0x7fffffffffffffef < ppppppppuStack_308) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              uVar33 = ((ulong)ppppppppuStack_308 | 0xf) + 1;
              ppppppppuVar28 = (undefined ********)operator_new(uVar33);
              local_e0 = (undefined ********)(uVar33 | 0x8000000000000000);
              ppppppppuStack_e8 = ppppppppuVar31;
              local_f0 = ppppppppuVar28;
            }
            sVar1 = (long)ppppppppuVar31 + 1;
            if ((ppppppppuVar28 <= ppppppppuVar25) &&
               (ppppppppuVar25 < (undefined ********)((long)ppppppppuVar28 + sVar1)))
            goto LAB_004b1c84;
            memmove(ppppppppuVar28,ppppppppuVar25,sVar1);
            operator_delete(ppppppppuVar25);
          }
          else {
            ppppppppuStack_e8 = ppppppppuStack_308;
            local_f0 = local_310;
            local_e0 = local_300;
          }
          ppppppppuStack_100 = (undefined ********)0x0;
          local_f8 = (undefined ********)0x0;
          local_108 = (undefined ********)0x0;
          uVar33 = puVar41[1];
          puVar27 = (undefined8 *)*puVar41;
          if (-1 < (char)*(byte *)((long)puVar41 + 0x17)) {
            uVar33 = (ulong)*(byte *)((long)puVar41 + 0x17);
            puVar27 = puVar41;
          }
          FUN_004b2050(&local_108,puVar27,(long)puVar27 + uVar33);
          local_330 = (undefined ********)0x0;
          ppppppppuStack_328 = (undefined ********)0x0;
          local_320 = (undefined ********)0x0;
          uVar33 = param_3[1];
          puVar27 = (undefined8 *)*param_3;
          if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
            uVar33 = (ulong)*(byte *)((long)param_3 + 0x17);
            puVar27 = param_3;
          }
          FUN_004b2050(&local_330,puVar27,(long)puVar27 + uVar33);
          FUN_0051c5a4(&local_310,&local_108,0);
          FUN_0051c5a4(&local_b0,&local_330,0);
          FUN_0051dda0(&local_d0,&local_310,&local_b0);
          if ((long)local_300 < 0) {
            operator_delete(local_310);
          }
          if ((long)local_320 < 0) {
            local_a0 = local_c0;
            ppppppppuStack_a8 = ppppppppuStack_c8;
            local_b0 = local_d0;
            operator_delete(local_330);
          }
          else {
            local_a0 = local_c0;
            ppppppppuStack_a8 = ppppppppuStack_c8;
            local_b0 = local_d0;
          }
          local_108 = (undefined ********)0x0;
          ppppppppuStack_100 = (undefined ********)0x0;
          local_f8 = (undefined ********)0x0;
          ppppppppuVar25 = ppppppppuStack_e8;
          ppppppppuVar31 = local_f0;
          if (-1 < (long)local_e0) {
            ppppppppuVar25 = (undefined ********)((ulong)local_e0 >> 0x38);
            ppppppppuVar31 = (undefined ********)&local_f0;
          }
          FUN_004b2050(&local_108,ppppppppuVar31,
                       (byte *)((long)ppppppppuVar31 + (long)ppppppppuVar25));
          auVar65 = FUN_0051d6f0(&local_108);
          ppppppppuVar31 = auVar65._8_8_;
          ppppppppuVar25 = auVar65._0_8_;
          if ((undefined ********)0x7fffffffffffffef < ppppppppuVar31) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (ppppppppuVar31 < (undefined ********)0x17) {
            ppppppppuVar28 = (undefined ********)&local_310;
            local_300 = (undefined ********)CONCAT17(auVar65[8],(undefined7)local_300);
          }
          else {
            uVar33 = ((ulong)ppppppppuVar31 | 0xf) + 1;
            ppppppppuVar28 = (undefined ********)operator_new(uVar33);
            local_300 = (undefined ********)(uVar33 | 0x8000000000000000);
            local_310 = ppppppppuVar28;
            ppppppppuStack_308 = ppppppppuVar31;
          }
          if ((ppppppppuVar28 <= ppppppppuVar25) &&
             (ppppppppuVar25 < (undefined ********)((long)ppppppppuVar28 + (long)ppppppppuVar31)))
          goto LAB_004b1c84;
          if (ppppppppuVar31 != (undefined ********)0x0) {
            memmove(ppppppppuVar28,ppppppppuVar25,(size_t)ppppppppuVar31);
          }
          *(byte *)((long)ppppppppuVar28 + (long)ppppppppuVar31) = 0;
          ppppppppuStack_c8 = ppppppppuStack_308;
          local_d0 = local_310;
          local_c0 = local_300;
          FUN_0051bca4(&local_d0,local_388);
          plVar29 = (long *)FUN_00428e48(puVar41,0);
          if (plVar29 == (long *)0x0) {
            uVar33 = FUN_004249b0();
            if ((uVar33 & 1) == 0) {
              FUN_00623bb0(&DAT_001f4e90,
                           "../../discord_native_lib/src/batch_audio_file_processor.cpp",0x57b,
                           "BatchAudioFileProcessor: failed to open: ",puVar41);
            }
            if (*(char *)(*(long *)(param_5 + 0x18) + 0x10) == '\0') {
              (**(code **)(param_5 + 0x10))(param_5,&local_b0,iVar39 + 1,uVar37,0);
            }
            uVar38 = 1;
          }
          else {
            local_2f0 = 0;
            local_2e8 = 0;
            uStack_2e0 = 0;
            local_2d8 = 0;
            ppppppppuStack_308 = (undefined ********)0x0;
            local_310 = (undefined ********)0x0;
            uStack_2f8 = 0;
            local_300 = (undefined ********)0x0;
            local_2d0 = 300;
            FUN_00411268(&local_310,&local_f0);
            local_2d0 = 0xffffffff;
            local_2c0 = (undefined ********)&local_310;
            lVar30 = (**(code **)(*plVar29 + 0x10))(plVar29);
            uVar33 = lVar30 * 0x3c0;
            if (lVar30 * 0x1e0 < 0) {
              uVar33 = 0xffffffffffffffff;
            }
            __s = operator_new__(uVar33);
            memset(__s,0,uVar33);
            if ((*param_1 & 1) == 0) {
              do {
                uVar33 = (**(code **)*plVar29)(plVar29,0x1e0,48000,__s);
                if ((uVar33 & 1) == 0) break;
                local_d0 = (undefined ********)((ulong)local_d0 & 0xffffffff00000000);
                in_stack_fffffffffffffbb0 = in_stack_fffffffffffffbb0 & 0xffffff00;
                in_stack_fffffffffffffba8 = in_stack_fffffffffffffba8 & 0xffffffff00000000;
                in_stack_fffffffffffffba0 =
                     (undefined8 *)((ulong)in_stack_fffffffffffffba0 & 0xffffffff00000000);
                FUN_00459fa8(param_2,0,__s,0x1e0,lVar30 << 1,lVar30,48000,0,
                             in_stack_fffffffffffffba0,in_stack_fffffffffffffba8,
                             in_stack_fffffffffffffbb0,&local_d0);
              } while ((*param_1 & 1) == 0);
            }
            bVar17 = local_2b8;
            local_2c0 = (undefined ********)0x0;
            local_2b8 = 0;
            uVar38 = (uint)(bVar17 == 0);
            FUN_004af604(&local_310);
            uVar33 = FUN_00417e08();
            if ((uVar33 & 1) == 0) {
              local_d0 = (undefined ********)0x1b0b98;
              ppppppppuStack_c8 = (undefined ********)0x6c9;
              local_c0 = (undefined ********)&local_98;
              local_360 = (undefined ********)"processed";
              if (bVar17 == 0) {
                local_360 = (undefined ********)"failed";
              }
              local_358 = (undefined ********)&local_378;
              ppppppppuStack_100 = (undefined ********)&local_330;
              local_340 = (undefined ********)&local_360;
              local_108 = (undefined ********)&DAT_001a2df6;
              local_378 = (undefined ********)0x1a8b51;
              local_348 = (undefined *******)&DAT_001d5e07;
              local_330 = (undefined ********)&local_b0;
              ppppppppuStack_328 = &local_348;
              in_stack_fffffffffffffba8 = 0;
              in_stack_fffffffffffffba0 =
                   (undefined8 *)((ulong)in_stack_fffffffffffffba0 & 0xffffffff00000000);
              in_stack_fffffffffffffbb0 = (uint)uVar37;
              local_370 = (undefined ********)&local_d0;
              FUN_00623bb0(&DAT_001f6ff6,
                           "../../discord_native_lib/src/batch_audio_file_processor.cpp",0x6c9);
            }
            if (*(char *)(*(long *)(param_5 + 0x18) + 0x10) == '\0') {
              (**(code **)(param_5 + 0x10))(param_5,&local_b0,iVar39 + 1,uVar37,bVar17 != 0);
            }
            iVar2 = iVar2 + (uint)bVar17;
            operator_delete__(__s);
            FUN_004afa04(&local_310);
            (**(code **)(*plVar29 + 0x30))(plVar29);
          }
          iVar40 = uVar38 + iVar40;
          uVar24 = uVar24 + 1;
        } while (uVar24 != (uVar37 & 0xffffffff));
      }
      FUN_0045c4e4(param_2,&local_2c8);
      FUN_0045aed8(param_2,&local_2b0);
      uVar24 = FUN_00417e08();
      if ((uVar24 & 1) == 0) {
        FUN_00623bb0(&DAT_001f6148,"../../discord_native_lib/src/batch_audio_file_processor.cpp",
                     0x721,"BatchAudioFileProcessor: complete. processed=",iVar2," failed=",iVar40);
      }
      if (*(char *)(*(long *)(param_6 + 0x18) + 0x10) == '\0') {
        (**(code **)(param_6 + 0x10))(param_6,iVar2,iVar40);
      }
      local_2b0 = (undefined ********)&PTR_FUN_00d1e688;
      FUN_008427b0(&ppppppppuStack_2a8);
      if (local_3a0 != (undefined8 *)0x0) {
        for (; local_398 != local_3a0; local_398 = local_398 + -3) {
        }
        local_398 = local_3a0;
        operator_delete(local_3a0);
      }
    }
    else {
      uVar24 = FUN_004249b0();
      if ((uVar24 & 1) == 0) {
        local_2a0 = (undefined ********)&local_b0;
        local_2b0 = (undefined ********)0x1b0b98;
        ppppppppuStack_2a8 = (undefined ********)0x433;
        FUN_00549d70(&local_310,local_388);
        FUN_00623bb0("\r\t\n\t\n",local_2b0,ppppppppuStack_2a8,
                     "BatchAudioFileProcessor: failed to create output directory: ",param_4,
                     " error: ",&local_310);
        if ((long)local_300 < 0) {
          operator_delete(local_310);
        }
      }
      if (*(char *)(*(long *)(param_6 + 0x18) + 0x10) == '\0') {
        (**(code **)(param_6 + 0x10))(param_6,0,0);
      }
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_88) {
    return;
  }
LAB_004b1d5c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b1d60  FUN_004b1d60 =====

void FUN_004b1d60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1e688;
  FUN_008427b0(param_1 + 1);
  return;
}


// ===== 004b1d70  FUN_004b1d70 =====

void FUN_004b1d70(undefined4 *param_1)

{
  *param_1 = 1;
  return;
}


// ===== 004b1d7c  FUN_004b1d7c =====

void FUN_004b1d7c(undefined8 param_1,void *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  void *pvVar5;
  int *piVar6;
  void *pvVar7;
  void *pvVar8;
  
  if (param_2 == (void *)0x0) {
    return;
  }
  piVar6 = *(int **)((long)param_2 + 0x40);
  if (piVar6 != (int *)0x0) {
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      pvVar7 = *(void **)(piVar6 + 2);
      if (pvVar7 != (void *)0x0) {
        pvVar4 = pvVar7;
        pvVar5 = *(void **)(piVar6 + 4);
        if (*(void **)(piVar6 + 4) != pvVar7) {
          do {
            pvVar4 = *(void **)((long)pvVar5 + -0x60);
            pvVar8 = (void *)((long)pvVar5 + -0x68);
            if (pvVar4 != (void *)0x0) {
              *(void **)((long)pvVar5 + -0x58) = pvVar4;
              operator_delete(pvVar4);
            }
            pvVar5 = pvVar8;
          } while (pvVar8 != pvVar7);
          pvVar4 = *(void **)(piVar6 + 2);
        }
        *(void **)(piVar6 + 4) = pvVar7;
        operator_delete(pvVar4);
      }
      operator_delete(piVar6);
    }
  }
  operator_delete(param_2);
  return;
}


// ===== 004b1e1c  FUN_004b1e1c =====

void FUN_004b1e1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1e688;
  FUN_008427b0(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 004b1e4c  FUN_004b1e4c =====

long FUN_004b1e4c(long param_1)

{
  return param_1 + 8;
}


// ===== 004b1e54  FUN_004b1e54 =====

void FUN_004b1e54(void)

{
  return;
}


// ===== 004b1e58  FUN_004b1e58 =====

void FUN_004b1e58(void)

{
  return;
}


// ===== 004b1e5c  FUN_004b1e5c =====

void FUN_004b1e5c(void)

{
  return;
}


// ===== 004b1e60  FUN_004b1e60 =====

undefined8 FUN_004b1e60(void)

{
  return 0;
}


// ===== 004b1e68  FUN_004b1e68 =====

void FUN_004b1e68(void)

{
  return;
}


// ===== 004b1e6c  FUN_004b1e6c =====

void FUN_004b1e6c(undefined8 param_1)

{
  FUN_008425a8(param_1);
  return;
}


// ===== 004b1e74  FUN_004b1e74 =====

void FUN_004b1e74(undefined8 param_1)

{
  FUN_008425a8(param_1);
  return;
}


// ===== 004b1e7c  FUN_004b1e7c =====

void FUN_004b1e7c(void)

{
  return;
}


// ===== 004b1e80  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004b1e84  FUN_004b1e84 =====

void FUN_004b1e84(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 != 0) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      local_58[0] = *(int *)(param_3 + 0x20);
      local_50 = *(undefined8 *)(param_3 + 0x28);
      uStack_48 = *(undefined8 *)(param_3 + 0x18);
      local_40 = (long)(local_58[0] / 100);
      bVar2 = FUN_004af424(lVar3,local_58);
      *(byte *)(param_1 + 0x10) = bVar2 & 1;
      if ((bVar2 & 1) == 0) goto LAB_004b1f10;
      lVar3 = *(long *)(param_1 + 8);
    }
    FUN_004af67c(lVar3,param_3);
  }
LAB_004b1f10:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b1f38  FUN_004b1f38 =====

undefined8 * FUN_004b1f38(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  long extraout_x1;
  long extraout_x1_00;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  FUN_0051d5a4(param_2);
  if (extraout_x1 != 0) {
    FUN_00411268(param_1,param_2);
    return param_1;
  }
  FUN_0051d984(param_1);
  if (extraout_x1_00 == 0) goto LAB_004b1ff4;
  bVar1 = *(byte *)((long)param_1 + 0x17);
  if ((char)bVar1 < '\0') {
    uVar2 = param_1[1];
    uVar4 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if (uVar2 == uVar4) goto LAB_004b1fa4;
LAB_004b1fc8:
    param_1[1] = uVar2 + 1;
    puVar3 = (undefined8 *)*param_1;
  }
  else {
    if (bVar1 == 0x16) {
      uVar4 = 0x16;
LAB_004b1fa4:
      uVar2 = uVar4;
      FUN_0054774c(param_1,uVar2,1,uVar2,uVar2,0,0);
      goto LAB_004b1fc8;
    }
    if (0x15 < bVar1) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                 "__s < __min_cap",
                 "__s should never be greater than or equal to the short string capacity");
    }
    uVar2 = (ulong)bVar1;
    *(byte *)((long)param_1 + 0x17) = bVar1 + 1;
    puVar3 = param_1;
  }
  *(undefined2 *)((long)puVar3 + uVar2) = 0x2f;
LAB_004b1ff4:
  uVar2 = param_2[1];
  puVar3 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar3 = param_2;
  }
  FUN_00547cac(param_1,puVar3,uVar2);
  return param_1;
}


// ===== 004b2050  FUN_004b2050 =====

ulong * FUN_004b2050(ulong *param_1,undefined1 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  byte bVar3;
  ulong __n;
  long lVar4;
  undefined8 *puVar5;
  undefined1 **ppuVar6;
  ulong *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  char cVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 *local_60;
  ulong local_58;
  undefined8 uStack_50;
  long local_48;
  
  ppuVar6 = &local_60;
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  bVar3 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
  }
  lVar13 = (param_1[2] & 0x7fffffffffffffff) - 1;
  if (-1 < (char)bVar3) {
    lVar13 = 0x16;
  }
  __n = (long)param_3 - (long)param_2;
  if (__n == 0) goto LAB_004b2238;
  puVar7 = (ulong *)*param_1;
  puVar2 = puVar7;
  if (-1 < (char)bVar3) {
    puVar2 = param_1;
  }
  if ((puVar2 <= param_2) && (param_2 <= (undefined1 *)((long)puVar2 + uVar1))) {
    if (0x7fffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (__n < 0x17) {
      uStack_50 = CONCAT17((char)__n,(undefined7)uStack_50);
    }
    else {
      uVar1 = (__n | 0xf) + 1;
      ppuVar6 = (undefined1 **)operator_new(uVar1);
      uStack_50 = uVar1 | 0x8000000000000000;
      local_60 = (undefined1 *)ppuVar6;
      local_58 = __n;
    }
    memcpy(ppuVar6,param_2,__n);
    *(undefined1 *)((long)ppuVar6 + __n) = 0;
    uVar1 = local_58;
    ppuVar6 = (undefined1 **)local_60;
    if (-1 < (long)uStack_50) {
      uVar1 = uStack_50 >> 0x38;
      ppuVar6 = &local_60;
    }
    FUN_00547cac(param_1,ppuVar6,uVar1);
    if ((long)uStack_50 < 0) {
      operator_delete(local_60);
    }
    goto LAB_004b2238;
  }
  if (lVar13 - uVar1 < __n) {
    FUN_0054774c(param_1,lVar13,(uVar1 + __n) - lVar13,uVar1,uVar1,0,0);
    cVar10 = *(char *)((long)param_1 + 0x17);
    puVar7 = (ulong *)*param_1;
  }
  else {
    cVar10 = (char)(param_1[2] >> 0x38);
  }
  if (-1 < cVar10) {
    puVar7 = param_1;
  }
  puVar8 = (undefined1 *)((long)puVar7 + uVar1);
  if ((__n < 0x20) || ((long)puVar7 + (uVar1 - (long)param_2) < 0x20)) {
LAB_004b2204:
    do {
      puVar11 = param_2 + 1;
      puVar9 = puVar8 + 1;
      *puVar8 = *param_2;
      puVar8 = puVar9;
      param_2 = puVar11;
    } while (puVar11 != param_3);
  }
  else {
    uVar12 = __n & 0xffffffffffffffe0;
    puVar14 = (undefined8 *)(param_2 + 0x10);
    puVar8 = puVar8 + uVar12;
    param_2 = param_2 + uVar12;
    puVar15 = (undefined8 *)((long)puVar7 + uVar1 + 0x10);
    uVar16 = uVar12;
    do {
      puVar5 = puVar14 + -1;
      uVar17 = puVar14[-2];
      uVar19 = puVar14[1];
      uVar18 = *puVar14;
      puVar14 = puVar14 + 4;
      uVar16 = uVar16 - 0x20;
      puVar15[-1] = *puVar5;
      puVar15[-2] = uVar17;
      puVar15[1] = uVar19;
      *puVar15 = uVar18;
      puVar15 = puVar15 + 4;
    } while (uVar16 != 0);
    if (__n != uVar12) goto LAB_004b2204;
  }
  *puVar8 = 0;
  uVar1 = uVar1 + __n;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1[1] = uVar1;
  }
  else {
    if (0x16 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                 "__s < __min_cap",
                 "__s should never be greater than or equal to the short string capacity");
    }
    *(char *)((long)param_1 + 0x17) = (char)uVar1;
  }
LAB_004b2238:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b2294  FUN_004b2294 =====

void FUN_004b2294(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_2 + 3) != '\0') {
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      operator_delete((void *)*param_1);
    }
    uVar5 = param_2[1];
    uVar4 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar5;
    *param_1 = uVar4;
    *(undefined1 *)((long)param_2 + 0x17) = 0;
    *(undefined1 *)param_2 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    *(undefined1 *)(param_2 + 3) = 0;
  }
  if (*(char *)(param_2 + 0xf) != '\0') {
    pvVar3 = (void *)param_1[10];
    *(undefined1 *)(param_1 + 0x13) = 0;
    if (pvVar3 != (void *)0x0) {
      param_1[0xb] = pvVar3;
      operator_delete(pvVar3);
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
    }
    uVar4 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar4;
    param_1[0xc] = param_2[0xc];
    uVar1 = *(undefined4 *)(param_2 + 0xe);
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    uVar4 = param_2[0xd];
    param_2[10] = 0;
    *(undefined1 *)(param_1 + 0xf) = 1;
    *(undefined4 *)(param_1 + 0xe) = uVar1;
    param_1[0xd] = uVar4;
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  if (*(char *)(param_2 + 0x13) != '\0') {
    pvVar3 = (void *)param_1[0x10];
    *(undefined1 *)(param_1 + 0xf) = 0;
    if (pvVar3 != (void *)0x0) {
      param_1[0x11] = pvVar3;
      operator_delete(pvVar3);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
    }
    uVar4 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar4;
    param_1[0x12] = param_2[0x12];
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x10] = 0;
    *(undefined1 *)(param_1 + 0x13) = 1;
    *(undefined1 *)(param_2 + 0x13) = 0;
  }
  if (*(char *)(param_2 + 9) != '\0') {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    if (*(char *)((long)param_1 + 0x3f) < '\0') {
      operator_delete((void *)param_1[5]);
    }
    uVar5 = param_2[6];
    uVar4 = param_2[5];
    param_1[7] = param_2[7];
    param_1[6] = uVar5;
    param_1[5] = uVar4;
    uVar2 = *(undefined1 *)(param_2 + 8);
    *(undefined1 *)((long)param_2 + 0x3f) = 0;
    *(undefined1 *)(param_2 + 5) = 0;
    *(undefined1 *)(param_1 + 9) = 1;
    *(undefined1 *)(param_1 + 8) = uVar2;
    *(undefined1 *)(param_2 + 8) = 0;
    *(undefined1 *)(param_2 + 9) = 0;
  }
  if (*(char *)((long)param_2 + 0xa4) != '\0') {
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    *(undefined1 *)((long)param_1 + 0xa4) = 1;
  }
  if (*(char *)((long)param_2 + 0xac) != '\0') {
    *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
    *(undefined1 *)((long)param_1 + 0xac) = 1;
  }
  if (*(char *)((long)param_2 + 0xb4) != '\0') {
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
    *(undefined1 *)((long)param_1 + 0xb4) = 1;
  }
  return;
}


// ===== 004b2444  FUN_004b2444 =====

void FUN_004b2444(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = (undefined8 *)param_1[2];
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    if (*(code **)(puVar1[8] + 8) != (code *)0x0) {
      (**(code **)(puVar1[8] + 8))(puVar1[5]);
    }
    if (*(char *)((long)puVar1 + 0x27) < '\0') {
      operator_delete((void *)puVar1[2]);
    }
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}


// ===== 004b24c8  FUN_004b24c8 =====

void FUN_004b24c8(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_48;
  char local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(long **)(param_1 + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xd8) + 0x68))(&local_48);
    (**(code **)(**(long **)(param_1 + 0xd8) + 0x70))(*(long **)(param_1 + 0xd8),0,&local_48);
    puVar1 = *(undefined8 **)(param_2 + 8);
    if (puVar1 < *(undefined8 **)(param_2 + 0x10)) {
      if (puVar1 == (undefined8 *)0x0) goto LAB_004b2648;
      *puVar1 = local_48;
      *(char *)(puVar1 + 1) = local_40;
      *(undefined8 **)(param_2 + 8) = puVar1 + 2;
      *(undefined8 *)(param_1 + 0xd8) = 0;
    }
    else {
      FUN_004b3a9c(param_2,&local_48);
      *(undefined8 *)(param_1 + 0xd8) = 0;
      if (local_40 != '\0') {
        FUN_00546948(local_48);
      }
    }
  }
  if (*(long *)(param_1 + 0xe0) != 0) {
    FUN_004bbba0(&local_48);
    FUN_004bbbb4(*(undefined8 *)(param_1 + 0xe0),0,&local_48);
    puVar1 = *(undefined8 **)(param_2 + 8);
    if (puVar1 < *(undefined8 **)(param_2 + 0x10)) {
      if (puVar1 == (undefined8 *)0x0) goto LAB_004b2648;
      *puVar1 = local_48;
      *(char *)(puVar1 + 1) = local_40;
      *(undefined8 **)(param_2 + 8) = puVar1 + 2;
      *(undefined8 *)(param_1 + 0xe0) = 0;
    }
    else {
      FUN_004b3a9c(param_2,&local_48);
      *(undefined8 *)(param_1 + 0xe0) = 0;
      if (local_40 != '\0') {
        FUN_00546948(local_48);
      }
    }
  }
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  if (puVar1 < *(undefined8 **)(param_2 + 0x28)) {
    if (puVar1 == (undefined8 *)0x0) {
LAB_004b2648:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    puVar3 = puVar1 + 1;
    *puVar1 = uVar4;
    *(undefined8 **)(param_2 + 0x20) = puVar3;
  }
  else {
    FUN_004b3bf0((undefined8 *)(param_2 + 0x18));
    puVar3 = *(undefined8 **)(param_2 + 0x20);
  }
  if (*(undefined8 **)(param_2 + 0x18) == puVar3) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,"!empty()"
               ,"back() called on an empty vector");
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b269c  FUN_004b269c =====

void FUN_004b269c(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  *(code **)(param_1 + 0x68) = FUN_0041a404;
  pcVar1 = *(code **)(*(long *)(param_1 + 0x70) + 8);
  *(undefined8 **)(param_1 + 0x70) = &DAT_001f1910;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x58));
  }
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x60) = param_2[1];
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  *(undefined8 *)(param_1 + 0x68) = param_2[2];
  *(undefined8 *)(param_1 + 0x70) = param_2[3];
  param_2[2] = FUN_0041a404;
  param_2[3] = &DAT_001f1910;
  return;
}


// ===== 004b2718  FUN_004b2718 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004b2718(long param_1,long param_2)

{
  ulong uVar1;
  undefined1 *__src;
  code *******pppppppcVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  undefined1 **__dest;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  code *******pppppppcVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined1 *local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  char local_a8;
  ulong local_a0;
  code *******pppppppcStack_98;
  code *pcStack_90;
  undefined8 local_88;
  char local_80;
  char local_78;
  long local_68;
  
  __dest = &local_c0;
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  iVar4 = *(int *)(param_1 + 0x40);
  local_a0 = CONCAT44(local_a0._4_4_,iVar4);
  if (*(char *)(param_1 + 0x5f) < '\0') {
    pppppppcVar2 = *(code ********)(param_1 + 0x48);
    pcVar3 = *(code **)(param_1 + 0x50);
    if (pcVar3 < (code *)0x17) {
      local_88 = (undefined8 *)CONCAT17((char)pcVar3,(undefined7)local_88);
      pppppppcVar9 = (code *******)&pppppppcStack_98;
    }
    else {
      if ((code *)0x7fffffffffffffef < pcVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar7 = ((ulong)pcVar3 | 0xf) + 1;
      pppppppcVar9 = (code *******)operator_new(uVar7);
      local_88 = (undefined8 *)(uVar7 | 0x8000000000000000);
      pppppppcStack_98 = pppppppcVar9;
      pcStack_90 = pcVar3;
    }
    if ((pppppppcVar9 <= pppppppcVar2) &&
       (pppppppcVar2 < (code *******)((long)pppppppcVar9 + (long)(pcVar3 + 1)))) goto LAB_004b2c7c;
    memmove(pppppppcVar9,pppppppcVar2,(size_t)(pcVar3 + 1));
  }
  else {
    pcStack_90 = *(code **)(param_1 + 0x50);
    pppppppcStack_98 = *(code ********)(param_1 + 0x48);
    local_88 = *(undefined8 **)(param_1 + 0x58);
  }
  local_80 = *(char *)(param_1 + 0x60);
  local_78 = *(char *)(param_1 + 0x68);
  if (local_78 == '\0') {
LAB_004b2840:
    if ((long)local_88 < 0) {
      operator_delete(pppppppcStack_98);
    }
    goto LAB_004b2c4c;
  }
  if (iVar4 == 1) {
    if (local_80 == '\0') goto LAB_004b2840;
    lVar6 = FUN_004b3dc0(param_2 + 0x28,&pppppppcStack_98);
    if ((long)local_88 < 0) {
      operator_delete(pppppppcStack_98);
    }
    if (lVar6 == 0) goto LAB_004b2c4c;
  }
  else {
    if ((iVar4 != 0) || (*(long *)(param_2 + 0x50) == 0)) goto LAB_004b2840;
    if ((long)local_88 < 0) {
      operator_delete(pppppppcStack_98);
    }
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    __src = *(undefined1 **)(param_1 + 0x20);
    uVar7 = *(ulong *)(param_1 + 0x28);
    if (uVar7 < 0x17) {
      local_b0 = CONCAT17((char)uVar7,(undefined7)local_b0);
    }
    else {
      if (0x7fffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar7 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_b0 = uVar1 | 0x8000000000000000;
      local_c0 = (undefined1 *)__dest;
      uStack_b8 = uVar7;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar7 + 1))) goto LAB_004b2c7c;
    memmove(__dest,__src,uVar7 + 1);
  }
  else {
    uStack_b8 = *(ulong *)(param_1 + 0x28);
    local_c0 = *(undefined1 **)(param_1 + 0x20);
    local_b0 = *(ulong *)(param_1 + 0x30);
  }
  local_a8 = *(char *)(param_1 + 0x38);
  if (local_a8 == '\0') {
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_004b402c(&DAT_00d60f38,&local_c0);
    if (lVar6 == 0) {
      local_a0 = local_a0 & 0xffffffffffffff00;
      local_80 = '\0';
      uVar7 = FUN_004249b0();
      if ((uVar7 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4eff,
                     "../../discord_native_lib/src/media/filters/media_filter_manager.cpp",0x343,
                     "Invalid filter graph name `",&local_c0,&DAT_001ef742);
      }
      lVar6 = 0;
    }
    else {
      pcStack_90 = *(code **)(lVar6 + 0x38);
      local_88 = *(undefined8 **)(lVar6 + 0x40);
      pppppppcStack_98 = *(code ********)(lVar6 + 0x30);
      local_a0 = *(ulong *)(lVar6 + 0x28);
      if ((code *)*local_88 != (code *)0x0) {
        local_a0 = (*(code *)*local_88)(*(undefined8 *)(lVar6 + 0x28));
      }
      local_80 = '\x01';
      uVar7 = FUN_00417e08();
      if ((uVar7 & 1) == 0) {
        FUN_00623bb0("\r\t\n\t\n",
                     "../../discord_native_lib/src/media/filters/media_filter_manager.cpp",0x319,
                     "Instantiating filter graph `",&local_c0,"` for filter ",param_1);
      }
      if (local_80 == '\0') {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3c2,
                   "this->has_value()","optional operator* called on a disengaged value");
      }
      lVar6 = (*pcStack_90)(&local_a0);
    }
    if ((local_80 != '\0') && ((code *)local_88[1] != (code *)0x0)) {
      (*(code *)local_88[1])(local_a0);
    }
  }
  if ((long)local_b0 < 0) {
    operator_delete(local_c0);
  }
  if (lVar6 == 0) goto LAB_004b2c4c;
  plVar8 = *(long **)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar6;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  local_a0 = CONCAT44(local_a0._4_4_,*(undefined4 *)(param_1 + 0x40));
  if (*(char *)(param_1 + 0x5f) < '\0') {
    pppppppcVar2 = *(code ********)(param_1 + 0x48);
    pcVar3 = *(code **)(param_1 + 0x50);
    if (pcVar3 < (code *)0x17) {
      local_88 = (undefined8 *)CONCAT17((char)pcVar3,(undefined7)local_88);
      pppppppcVar9 = (code *******)&pppppppcStack_98;
    }
    else {
      if ((code *)0x7fffffffffffffef < pcVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar7 = ((ulong)pcVar3 | 0xf) + 1;
      pppppppcVar9 = (code *******)operator_new(uVar7);
      local_88 = (undefined8 *)(uVar7 | 0x8000000000000000);
      pppppppcStack_98 = pppppppcVar9;
      pcStack_90 = pcVar3;
    }
    if ((pppppppcVar9 <= pppppppcVar2) &&
       (pppppppcVar2 < (code *******)((long)pppppppcVar9 + (long)(pcVar3 + 1)))) {
LAB_004b2c7c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(pppppppcVar9,pppppppcVar2,(size_t)(pcVar3 + 1));
  }
  else {
    pcStack_90 = *(code **)(param_1 + 0x50);
    pppppppcStack_98 = *(code ********)(param_1 + 0x48);
    local_88 = *(undefined8 **)(param_1 + 0x58);
  }
  local_80 = *(char *)(param_1 + 0x60);
  local_78 = *(char *)(param_1 + 0x68);
  if (local_78 != '\0') {
    uVar7 = FUN_00417e08();
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,
                   "../../discord_native_lib/src/media/filters/media_filter_manager.cpp",0x3a1,
                   "Trying to attach to filter target.");
    }
    if ((int)local_a0 == 1) {
      if ((local_80 != '\0') && (lVar6 = FUN_004b3dc0(param_2 + 0x28,&pppppppcStack_98), lVar6 != 0)
         ) {
        *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(lVar6 + 0x28);
        FUN_004bbba0(&local_c0);
        FUN_004bbbb4(*(undefined8 *)(lVar6 + 0x28),*(undefined8 *)(param_1 + 0x18),&local_c0);
        uVar7 = FUN_00417e08();
        if ((uVar7 & 1) == 0) {
          pcVar11 = "Attached to output stream.";
          uVar10 = 0x461;
          goto LAB_004b2bc0;
        }
        goto LAB_004b2bc4;
      }
    }
    else if (((int)local_a0 == 0) && (plVar8 = *(long **)(param_2 + 0x50), plVar8 != (long *)0x0)) {
      *(long **)(param_1 + 0xd8) = plVar8;
      (**(code **)(*plVar8 + 0x68))(&local_c0);
      (**(code **)(**(long **)(param_2 + 0x50) + 0x70))
                (*(long **)(param_2 + 0x50),*(undefined8 *)(param_1 + 0x18),&local_c0);
      uVar7 = FUN_00417e08();
      if ((uVar7 & 1) == 0) {
        pcVar11 = "Attached to video input device.";
        uVar10 = 0x3c9;
LAB_004b2bc0:
        FUN_00623bb0(&DAT_001f4e98,
                     "../../discord_native_lib/src/media/filters/media_filter_manager.cpp",uVar10,
                     pcVar11);
      }
LAB_004b2bc4:
      if ((char)uStack_b8 != '\0') {
        FUN_00546948(local_c0);
      }
    }
  }
  if ((long)local_88 < 0) {
    operator_delete(pppppppcStack_98);
  }
  uVar7 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))
                    (*(long **)(param_1 + 0x18),(undefined8 *)(param_1 + 0x20));
  if ((uVar7 & 1) == 0) {
    uVar7 = FUN_00417e08();
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,
                   "../../discord_native_lib/src/media/filters/media_filter_manager.cpp",0x491,
                   "Failed to initialize filter graph.");
    }
    if (*(char *)(*(long *)(param_2 + 0x70) + 0x10) == '\0') {
      (**(code **)(param_2 + 0x68))(param_2 + 0x58,1,*(int *)(param_1 + 0x40) != 0);
    }
  }
LAB_004b2c4c:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004b2cdc  FUN_004b2cdc =====

void FUN_004b2cdc(undefined8 *param_1)

{
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[0xd] = FUN_0041a404;
  param_1[0xe] = &DAT_001f1910;
  return;
}


// ===== 004b2d14  FUN_004b2d14 =====

void FUN_004b2d14(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long *plVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    FUN_004b24c8(plVar4 + 5,&local_70);
  }
  FUN_004b2e18(&local_70);
  if (*(code **)(param_1[0xe] + 8) != (code *)0x0) {
    (**(code **)(param_1[0xe] + 8))(param_1[0xb]);
  }
  puVar2 = (undefined8 *)param_1[7];
  while (puVar2 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar2;
    if (*(char *)((long)puVar2 + 0x27) < '\0') {
      operator_delete((void *)puVar2[2]);
    }
    operator_delete(puVar2);
    puVar2 = (undefined8 *)pvVar3;
  }
  pvVar3 = (void *)param_1[5];
  param_1[5] = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  puVar2 = (undefined8 *)param_1[2];
  while (puVar2 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar2;
    FUN_004b3f7c(puVar2 + 2);
    operator_delete(puVar2);
    puVar2 = (undefined8 *)pvVar3;
  }
  pvVar3 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004b2e18  FUN_004b2e18 =====

void FUN_004b2e18(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  void *pvVar6;
  long *plVar7;
  void *pvVar8;
  long *plVar9;
  
  lVar1 = *param_1;
  lVar3 = param_1[1];
  while (lVar2 = lVar3, lVar2 != lVar1) {
    lVar3 = lVar2 + -0x10;
    if (*(char *)(lVar2 + -8) != '\0') {
      FUN_00546948(*(undefined8 *)(lVar2 + -0x10));
    }
  }
  plVar7 = (long *)param_1[3];
  plVar9 = (long *)param_1[4];
  param_1[1] = lVar1;
  if (plVar9 == plVar7) {
    param_1[4] = (long)plVar7;
  }
  else {
    do {
      plVar9 = plVar9 + -1;
      plVar4 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
    } while (plVar9 != plVar7);
    plVar9 = (long *)param_1[3];
    param_1[4] = (long)plVar7;
  }
  if (plVar9 == (long *)0x0) {
    pvVar6 = (void *)*param_1;
  }
  else {
    if (plVar7 != plVar9) {
      do {
        plVar7 = plVar7 + -1;
        plVar4 = (long *)*plVar7;
        *plVar7 = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
      } while (plVar7 != plVar9);
      plVar7 = (long *)param_1[3];
    }
    param_1[4] = (long)plVar9;
    operator_delete(plVar7);
    pvVar6 = (void *)*param_1;
  }
  if (pvVar6 == (void *)0x0) {
    return;
  }
  pvVar8 = pvVar6;
  pvVar5 = (void *)param_1[1];
  if ((void *)param_1[1] != pvVar6) {
    do {
      pvVar8 = (void *)((long)pvVar5 + -0x10);
      if (*(char *)((long)pvVar5 + -8) != '\0') {
        FUN_00546948(*(undefined8 *)((long)pvVar5 + -0x10));
      }
      pvVar5 = pvVar8;
    } while (pvVar8 != pvVar6);
    pvVar8 = (void *)*param_1;
  }
  param_1[1] = (long)pvVar6;
  operator_delete(pvVar8);
  return;
}


// ===== 004b2f54  FUN_004b2f54 =====

void FUN_004b2f54(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/filters/media_filter_manager.cpp"
                 ,0x7e9,"Updating video input device");
  }
  plVar3 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x50) = param_2;
  for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    if (((*(char *)(plVar3 + 0x12) != '\0') && (*(int *)(plVar3 + 0xd) == 0)) &&
       (*(char *)(plVar3 + 0x11) == '\0')) {
      FUN_004b24c8(plVar3 + 5,&local_70);
      FUN_004b2718(plVar3 + 5,param_1);
    }
  }
  FUN_004b2e18(&local_70);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004b302c  FUN_004b302c =====

/* WARNING: Removing unreachable block (ram,0x004b31b0) */
/* WARNING: Removing unreachable block (ram,0x004b31c8) */
/* WARNING: Removing unreachable block (ram,0x004b33dc) */
/* WARNING: Removing unreachable block (ram,0x004b31d0) */
/* WARNING: Removing unreachable block (ram,0x004b31bc) */
/* WARNING: Removing unreachable block (ram,0x004b31ec) */
/* WARNING: Removing unreachable block (ram,0x004b31f8) */
/* WARNING: Removing unreachable block (ram,0x004b3204) */
/* WARNING: Removing unreachable block (ram,0x004b3328) */
/* WARNING: Type propagation algorithm not settling */

void FUN_004b302c(long param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  size_t __n;
  size_t sVar2;
  long *__s1;
  char *******__src;
  byte bVar3;
  long lVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  char *******pppppppcVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  undefined8 *local_c8;
  char *******local_c0;
  size_t sStack_b8;
  ulong local_b0;
  char local_a8;
  undefined1 local_a0;
  int local_98;
  char *******local_90;
  size_t sStack_88;
  undefined8 local_80;
  char local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  pppppppcVar8 = (char *******)&local_90;
  local_98 = 1;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src = (char *******)*param_2;
    uVar9 = param_2[1];
    if (uVar9 < 0x17) {
      local_80 = CONCAT17((char)uVar9,(undefined7)local_80);
    }
    else {
      if (0x7fffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar9 | 0xf) + 1;
      pppppppcVar8 = (char *******)operator_new(uVar1);
      local_80 = uVar1 | 0x8000000000000000;
      local_90 = pppppppcVar8;
      sStack_88 = uVar9;
    }
    if ((pppppppcVar8 <= __src) && (__src < (char *******)((long)pppppppcVar8 + uVar9 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(pppppppcVar8,__src,uVar9 + 1);
  }
  else {
    sStack_88 = param_2[1];
    local_90 = (char *******)*param_2;
    local_80 = param_2[2];
  }
  local_78 = '\x01';
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uVar9 = FUN_00417e08();
  if ((uVar9 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/media/filters/media_filter_manager.cpp"
                 ,0x869,"Updating video output stream ",param_2);
  }
  lVar10 = param_1 + 0x28;
  if (param_3 == 0) {
    lVar11 = FUN_004b3dc0(lVar10,param_2);
    if (lVar11 != 0) {
      FUN_004b478c(&local_c8,lVar10,lVar11);
      puVar5 = local_c8;
      local_c8 = (undefined8 *)0x0;
      if (puVar5 != (undefined8 *)0x0) {
        if (((char)sStack_b8 != '\0') && (*(char *)((long)puVar5 + 0x27) < '\0')) {
          operator_delete((void *)puVar5[2]);
        }
        operator_delete(puVar5);
      }
    }
  }
  else {
    local_c8 = param_2;
    lVar10 = FUN_004b41e8(lVar10,param_2,&DAT_001f7001,&local_c8,auStack_d0);
    *(long *)(lVar10 + 0x28) = param_3;
  }
  plVar13 = *(long **)(param_1 + 0x10);
  if (plVar13 != (long *)0x0) {
    do {
      local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_98);
      sStack_b8 = sStack_88;
      local_c0 = local_90;
      local_b0 = local_80;
      local_a0 = 1;
      local_a8 = local_78;
      if ((((char)plVar13[0x12] == '\0') || ((int)plVar13[0xd] != local_98)) ||
         ((char)plVar13[0x11] != local_78)) {
LAB_004b32bc:
        bVar6 = false;
      }
      else {
        if (local_78 == '\0') goto LAB_004b3310;
        bVar3 = *(byte *)((long)plVar13 + 0x87);
        uVar9 = (ulong)bVar3;
        __n = plVar13[0xf];
        if (-1 < (char)bVar3) {
          __n = uVar9;
        }
        sVar2 = sStack_88;
        if (-1 < (long)local_80) {
          sVar2 = local_80 >> 0x38;
        }
        if (__n != sVar2) goto LAB_004b32bc;
        plVar12 = plVar13 + 0xe;
        __s1 = (long *)*plVar12;
        if (-1 < (char)bVar3) {
          __s1 = plVar12;
        }
        pppppppcVar8 = local_90;
        if (-1 < (long)local_80) {
          pppppppcVar8 = (char *******)&local_c0;
        }
        if ((char)bVar3 < '\0') {
          if (__n == 0) goto LAB_004b3310;
          iVar7 = memcmp(__s1,pppppppcVar8,__n);
          bVar6 = iVar7 == 0;
        }
        else if (bVar3 == 0) {
LAB_004b3310:
          bVar6 = true;
        }
        else {
          do {
            uVar9 = uVar9 - 1;
            bVar6 = (char)*plVar12 == *(char *)pppppppcVar8;
            if (!bVar6) break;
            pppppppcVar8 = (char *******)((long)pppppppcVar8 + 1);
            plVar12 = (long *)((long)plVar12 + 1);
          } while (uVar9 != 0);
        }
      }
      if ((long)local_b0 < 0) {
        operator_delete(local_c0);
      }
      if (bVar6) {
        FUN_004b24c8(plVar13 + 5,&local_100);
        FUN_004b2718(plVar13 + 5,param_1);
      }
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  FUN_004b2e18(&local_100);
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b33e8  FUN_004b33e8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004b33e8(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *******pppppppuVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *******__dest;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *******local_1d0;
  ulong uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *******local_180;
  ulong uStack_178;
  ulong local_170;
  long *local_168;
  void *local_160;
  undefined7 uStack_158;
  undefined1 local_151;
  undefined7 uStack_150;
  char local_149;
  undefined1 local_148;
  undefined4 local_140;
  void *local_138;
  undefined7 uStack_130;
  undefined1 local_129;
  undefined7 uStack_128;
  char local_121;
  undefined1 local_120;
  undefined1 local_118;
  void *local_110;
  void *pvStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_e8;
  void *local_e0;
  void *pvStack_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined7 local_98;
  undefined1 uStack_91;
  undefined7 uStack_90;
  undefined7 local_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  plVar9 = (long *)*param_2;
  do {
    while( true ) {
      if (plVar9 == param_2 + 1) {
        FUN_004b2e18(&local_1b0);
        if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      puVar1 = plVar9 + 4;
      uVar5 = FUN_00417e08();
      if ((uVar5 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e90,
                     "../../discord_native_lib/src/media/filters/media_filter_manager.cpp",0xa01,
                     "Applying settings for filter ",puVar1);
      }
      lVar6 = FUN_004b48c0(param_1,puVar1);
      if (lVar6 == 0) break;
      FUN_004b24c8(lVar6 + 0x28,&local_1b0);
      if (*(char *)(plVar9 + 10) == '\0') {
LAB_004b34e4:
        FUN_004b2294(lVar6 + 0x48,plVar9 + 7);
        goto LAB_004b37fc;
      }
      uVar7 = plVar9[8];
      uVar5 = (ulong)*(byte *)((long)plVar9 + 0x4f);
      if ((((char)*(byte *)((long)plVar9 + 0x4f) < '\0') && (uVar5 = uVar7, plVar9[7] == 0)) &&
         (uVar7 != 0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
                   "__len == 0 || __s != nullptr",
                   "string_view::string_view(_CharT *, size_t): received nullptr");
      }
      if (uVar5 != 0) goto LAB_004b34e4;
      FUN_004b4a7c(&local_180,param_1,lVar6);
      pppppppuVar2 = local_180;
      local_180 = (undefined8 *******)0x0;
      if (pppppppuVar2 != (undefined8 *******)0x0) {
        if ((char)local_170 != '\0') {
          FUN_004b3f7c(pppppppuVar2 + 2);
        }
        operator_delete(pppppppuVar2);
      }
      uVar5 = FUN_00417e08();
      if ((uVar5 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e90,
                     "../../discord_native_lib/src/media/filters/media_filter_manager.cpp",0xa49,
                     "Removing filter ",puVar1);
      }
      plVar8 = (long *)plVar9[1];
      if ((long *)plVar9[1] == (long *)0x0) goto LAB_004b3820;
LAB_004b3810:
      do {
        plVar9 = plVar8;
        plVar8 = (long *)*plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
    }
    uVar5 = FUN_00417e08();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e90,
                   "../../discord_native_lib/src/media/filters/media_filter_manager.cpp",0xa81,
                   "Creating new filter record for ",puVar1);
    }
    if (*(char *)((long)plVar9 + 0x37) < '\0') {
      pppppppuVar2 = (undefined8 *******)plVar9[4];
      uVar5 = plVar9[5];
      if (uVar5 < 0x17) {
        __dest = &local_1d0;
        local_1c0 = CONCAT17((char)uVar5,(undefined7)local_1c0);
      }
      else {
        if (0x7fffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar7 = (uVar5 | 0xf) + 1;
        __dest = (undefined8 *******)operator_new(uVar7);
        local_1c0 = uVar7 | 0x8000000000000000;
        local_1d0 = __dest;
        uStack_1c8 = uVar5;
      }
      if ((__dest <= pppppppuVar2) &&
         (pppppppuVar2 < (undefined8 *******)((long)__dest + uVar5 + 1))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      memmove(__dest,pppppppuVar2,uVar5 + 1);
    }
    else {
      uStack_1c8 = plVar9[5];
      local_1d0 = (undefined8 *******)*puVar1;
      local_1c0 = plVar9[6];
    }
    local_88 = (undefined7)plVar9[8];
    local_149 = *(char *)((long)plVar9 + 0x4f);
    uStack_81 = (undefined1)*(undefined8 *)((long)plVar9 + 0x47);
    local_100 = plVar9[0x13];
    local_f8 = plVar9[0x14];
    local_98 = (undefined7)plVar9[0xd];
    local_160 = (void *)plVar9[7];
    uStack_91 = (undefined1)*(undefined8 *)((long)plVar9 + 0x6f);
    pvStack_108 = (void *)plVar9[0x12];
    local_110 = (void *)plVar9[0x11];
    local_f0 = *(undefined4 *)(plVar9 + 0x15);
    plVar9[8] = 0;
    plVar9[9] = 0;
    local_140 = *(undefined4 *)(plVar9 + 0xb);
    plVar9[7] = 0;
    pvStack_d8 = (void *)plVar9[0x18];
    local_e0 = (void *)plVar9[0x17];
    plVar9[0x11] = 0;
    plVar9[0x12] = 0;
    local_c8 = *(undefined1 *)(plVar9 + 0x1a);
    plVar9[0x13] = 0;
    local_bc = *(undefined1 *)((long)plVar9 + 0xdc);
    plVar9[0x17] = 0;
    plVar9[0x18] = 0;
    local_b4 = *(undefined1 *)((long)plVar9 + 0xe4);
    local_148 = *(undefined1 *)(plVar9 + 10);
    *(undefined1 *)(plVar9 + 10) = 0;
    local_138 = (void *)plVar9[0xc];
    plVar9[0xc] = 0;
    plVar9[0xd] = 0;
    local_121 = *(char *)((long)plVar9 + 0x77);
    plVar9[0xe] = 0;
    local_120 = *(undefined1 *)(plVar9 + 0xf);
    *(undefined1 *)(plVar9 + 0xf) = 0;
    local_118 = *(undefined1 *)(plVar9 + 0x10);
    *(undefined1 *)(plVar9 + 0x10) = 0;
    local_e8 = *(undefined1 *)(plVar9 + 0x16);
    local_d0 = plVar9[0x19];
    *(undefined1 *)(plVar9 + 0x16) = 0;
    plVar9[0x19] = 0;
    local_ac = *(undefined1 *)((long)plVar9 + 0xec);
    local_170 = local_1c0;
    local_168 = (long *)0x0;
    uStack_128 = (undefined7)((ulong)*(undefined8 *)((long)plVar9 + 0x6f) >> 8);
    local_c0 = *(undefined4 *)(plVar9 + 0x1b);
    local_b8 = *(undefined4 *)(plVar9 + 0x1c);
    local_b0 = *(undefined4 *)(plVar9 + 0x1d);
    *(undefined1 *)(plVar9 + 0x1a) = 0;
    *(undefined1 *)((long)plVar9 + 0xdc) = 0;
    *(undefined1 *)((long)plVar9 + 0xe4) = 0;
    *(undefined1 *)((long)plVar9 + 0xec) = 0;
    uStack_178 = uStack_1c8;
    local_180 = local_1d0;
    local_1d0 = (undefined8 *******)0x0;
    uStack_1c8 = 0;
    local_1c0 = 0;
    uStack_150 = (undefined7)((ulong)*(undefined8 *)((long)plVar9 + 0x47) >> 8);
    uStack_158 = local_88;
    local_151 = uStack_81;
    local_88 = 0;
    uStack_81 = 0;
    uStack_80 = 0;
    uStack_130 = local_98;
    local_129 = uStack_91;
    local_98 = 0;
    uStack_91 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    lVar6 = FUN_004b4bb0(param_1,puVar1,puVar1,&local_180);
    if (local_e0 != (void *)0x0) {
      pvStack_d8 = local_e0;
      operator_delete(local_e0);
    }
    if (local_110 != (void *)0x0) {
      pvStack_108 = local_110;
      operator_delete(local_110);
    }
    if (local_121 < '\0') {
      operator_delete(local_138);
    }
    if (local_149 < '\0') {
      operator_delete(local_160);
    }
    plVar8 = local_168;
    local_168 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    if ((long)local_170 < 0) {
      operator_delete(local_180);
    }
    if ((long)local_1c0 < 0) {
      operator_delete(local_1d0);
    }
LAB_004b37fc:
    FUN_004b2718(lVar6 + 0x28,param_1);
    plVar8 = (long *)plVar9[1];
    if ((long *)plVar9[1] != (long *)0x0) goto LAB_004b3810;
LAB_004b3820:
    do {
      plVar8 = (long *)plVar9[2];
      bVar4 = (long *)*plVar8 != plVar9;
      plVar9 = plVar8;
    } while (bVar4);
  } while( true );
}


// ===== 004b3904  FUN_004b3904 =====

void FUN_004b3904(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 *****__src;
  ulong uVar2;
  long lVar3;
  undefined8 *****__dest;
  undefined8 uVar4;
  long *plVar5;
  char *local_b0;
  undefined1 auStack_a8 [40];
  undefined8 ****local_80;
  ulong uStack_78;
  undefined8 local_70;
  char local_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  plVar5 = *(long **)(param_1 + 0x10);
  do {
    if (plVar5 == (long *)0x0) {
LAB_004b3a40:
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if ((plVar5[0x20] == param_3) && (plVar5[8] != 0)) {
      if (*(char *)((long)plVar5 + 0x5f) < '\0') {
        __src = (undefined8 *****)plVar5[9];
        uVar2 = plVar5[10];
        if (uVar2 < 0x17) {
          __dest = &local_80;
          local_70 = CONCAT17((char)uVar2,(undefined7)local_70);
        }
        else {
          if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar1 = (uVar2 | 0xf) + 1;
          __dest = (undefined8 *****)operator_new(uVar1);
          local_70 = uVar1 | 0x8000000000000000;
          local_80 = __dest;
          uStack_78 = uVar2;
        }
        if ((__dest <= __src) && (__src < (undefined8 *****)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                     ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
        }
        memmove(__dest,__src,uVar2 + 1);
      }
      else {
        uStack_78 = plVar5[10];
        local_80 = (undefined8 ****)plVar5[9];
        local_70 = plVar5[0xb];
      }
      local_68 = *(char *)(plVar5 + 0xc);
      if (local_68 != '\0') {
        FUN_004df478(auStack_a8,&local_80);
        local_b0 = "filter";
        uVar4 = FUN_004e148c(param_2,&local_b0);
        FUN_004dfa04(uVar4,auStack_a8);
        FUN_004df880(auStack_a8);
        if ((long)local_70 < 0) {
          operator_delete(local_80);
        }
        goto LAB_004b3a40;
      }
      if ((long)local_70 < 0) {
        operator_delete(local_80);
      }
    }
    plVar5 = (long *)*plVar5;
  } while( true );
}


// ===== 004b3a9c  FUN_004b3a9c =====

void FUN_004b3a9c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  void *pvVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  
  puVar3 = (undefined8 *)*param_1;
  puVar5 = (undefined8 *)param_1[1];
  lVar13 = (long)puVar5 - (long)puVar3 >> 4;
  uVar1 = lVar13 + 1;
  if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar10 = (ulong)(param_1[2] - (long)puVar3) >> 3;
  if (uVar10 <= uVar1) {
    uVar10 = uVar1;
  }
  if (0x7fffffffffffffef < (ulong)(param_1[2] - (long)puVar3)) {
    uVar10 = 0xfffffffffffffff;
  }
  if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  if (uVar10 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  pvVar9 = operator_new(uVar10 * 0x10);
  puVar2 = (undefined8 *)((long)pvVar9 + lVar13 * 0x10);
  uVar11 = *param_2;
  uVar7 = *(undefined1 *)(param_2 + 1);
  *param_2 = 0;
  *puVar2 = uVar11;
  *(undefined1 *)(puVar2 + 1) = uVar7;
  *(undefined1 *)(param_2 + 1) = 0;
  puVar8 = puVar2;
  while (puVar5 != puVar3) {
    puVar12 = puVar5 + -2;
    uVar7 = *(undefined1 *)(puVar5 + -1);
    puVar8[-2] = *puVar12;
    *(undefined1 *)(puVar8 + -1) = uVar7;
    *puVar12 = 0;
    *(undefined1 *)(puVar5 + -1) = 0;
    puVar5 = puVar12;
    puVar8 = puVar8 + -2;
  }
  pvVar4 = (void *)*param_1;
  pvVar6 = (void *)param_1[1];
  *param_1 = (long)puVar8;
  param_1[1] = (long)(puVar2 + 2);
  param_1[2] = (long)((long)pvVar9 + uVar10 * 0x10);
  while (pvVar9 = pvVar6, pvVar9 != pvVar4) {
    pvVar6 = (void *)((long)pvVar9 + -0x10);
    if (*(char *)((long)pvVar9 + -8) != '\0') {
      FUN_00546948(*(undefined8 *)((long)pvVar9 + -0x10));
    }
  }
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
    return;
  }
  return;
}


// ===== 004b3bf0  FUN_004b3bf0 =====

void FUN_004b3bf0(ulong *param_1,long *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar14 = param_1[1] - *param_1;
  lVar13 = lVar14 >> 3;
  uVar7 = lVar13 + 1;
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = uVar4 >> 2;
  if (uVar5 <= uVar7) {
    uVar5 = uVar7;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  pvVar2 = operator_new(uVar5 * 8);
  lVar8 = *param_2;
  *param_2 = 0;
  plVar12 = (long *)*param_1;
  plVar11 = (long *)param_1[1];
  plVar3 = (long *)((long)pvVar2 + lVar13 * 8);
  pvVar1 = (void *)((long)pvVar2 + uVar5 * 8);
  lVar15 = (long)plVar11 - (long)plVar12;
  plVar6 = plVar3 + 1;
  *plVar3 = lVar8;
  if (lVar15 == 0) {
    *param_1 = (ulong)plVar3;
    param_1[1] = (ulong)plVar6;
    param_1[2] = (ulong)pvVar1;
    goto joined_r0x004b3d78;
  }
  uVar7 = lVar15 - 8;
  if ((uVar7 < 0x78) ||
     (((long *)((long)plVar11 + (-8 - (uVar7 & 0xfffffffffffffff8))) < plVar3 &&
      ((long *)((long)pvVar2 + (lVar14 - (uVar7 & 0xfffffffffffffff8)) + -8) < plVar11)))) {
LAB_004b3d08:
    do {
      plVar11 = plVar11 + -1;
      lVar13 = *plVar11;
      *plVar11 = 0;
      plVar3 = plVar3 + -1;
      *plVar3 = lVar13;
    } while (plVar11 != plVar12);
  }
  else {
    uVar7 = (uVar7 >> 3) + 1;
    plVar9 = plVar11 + -2;
    uVar4 = uVar7 & 0x3ffffffffffffffc;
    plVar10 = (long *)((long)pvVar2 + lVar13 * 8 + -0x10);
    plVar3 = plVar3 + -uVar4;
    plVar11 = plVar11 + -uVar4;
    uVar5 = uVar4;
    do {
      lVar8 = plVar9[-1];
      lVar15 = plVar9[-2];
      lVar14 = plVar9[1];
      lVar13 = *plVar9;
      plVar9[-1] = 0;
      plVar9[-2] = 0;
      plVar9[1] = 0;
      *plVar9 = 0;
      plVar9 = plVar9 + -4;
      uVar5 = uVar5 - 4;
      plVar10[-1] = lVar8;
      plVar10[-2] = lVar15;
      plVar10[1] = lVar14;
      *plVar10 = lVar13;
      plVar10 = plVar10 + -4;
    } while (uVar5 != 0);
    if (uVar7 != uVar4) goto LAB_004b3d08;
  }
  plVar11 = (long *)*param_1;
  plVar12 = (long *)param_1[1];
  *param_1 = (ulong)plVar3;
  param_1[1] = (ulong)plVar6;
  param_1[2] = (ulong)pvVar1;
  while (plVar12 != plVar11) {
    plVar12 = plVar12 + -1;
    plVar3 = (long *)*plVar12;
    *plVar12 = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
joined_r0x004b3d78:
  if (plVar11 == (long *)0x0) {
    return;
  }
  operator_delete(plVar11);
  return;
}


// ===== 004b3dc0  FUN_004b3dc0 =====

long * FUN_004b3dc0(long *param_1,undefined8 *param_2)

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
                  if (bVar2 == uVar9) goto LAB_004b3f44;
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
            if (uVar9 != uVar12) goto LAB_004b3f40;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      goto LAB_004b3f44;
    }
  }
LAB_004b3f40:
  plVar8 = (long *)0x0;
LAB_004b3f44:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return plVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b3f7c  FUN_004b3f7c =====

void FUN_004b3f7c(undefined8 *param_1)

{
  char cVar1;
  void *pvVar2;
  long *plVar3;
  
  pvVar2 = (void *)param_1[0x17];
  if (pvVar2 != (void *)0x0) {
    param_1[0x18] = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x11];
  if (pvVar2 != (void *)0x0) {
    param_1[0x12] = pvVar2;
    operator_delete(pvVar2);
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete((void *)param_1[0xc]);
    cVar1 = *(char *)((long)param_1 + 0x4f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x4f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[7]);
  }
  plVar3 = (long *)param_1[6];
  param_1[6] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  if (-1 < cVar1) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}


// ===== 004b402c  FUN_004b402c =====

long * FUN_004b402c(long *param_1,undefined8 *param_2)

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
                  if (bVar2 == uVar9) goto LAB_004b41b0;
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
            if (uVar9 != uVar12) goto LAB_004b41ac;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      goto LAB_004b41b0;
    }
  }
LAB_004b41ac:
  plVar8 = (long *)0x0;
LAB_004b41b0:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return plVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b41e8  FUN_004b41e8 =====

long * FUN_004b41e8(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

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
  plVar5 = (long *)FUN_00427058(auStack_70,puVar6,uVar10);
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
              if (uVar4 != 0) goto LAB_004b42c0;
            }
          }
          else if (bVar2 != 0) {
            uVar9 = 0;
            while (*(char *)((long)plVar14 + uVar9 + 0x10) == *(char *)((long)puVar6 + uVar9)) {
              uVar9 = uVar9 + 1;
              if (bVar2 == uVar9) goto LAB_004b4380;
            }
            goto LAB_004b42c0;
          }
LAB_004b4380:
          uVar17 = 0;
          goto LAB_004b45cc;
        }
LAB_004b42c0:
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
  plVar14 = (long *)operator_new(0x30);
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
  fVar18 = *(float *)(param_1 + 4);
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
LAB_004b44a8:
      plVar7 = (long *)FUN_004b4630(param_1,plVar11);
    }
    else if (plVar11 < plVar15) {
      plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (plVar15 < (long *)0x3) {
LAB_004b4510:
        plVar7 = (long *)FUN_005204f8();
      }
      else {
        uVar17 = NEON_cnt(plVar15,1);
        uVar16 = NEON_uaddlv(uVar17,1);
        if (1 < (CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff)) goto LAB_004b4510;
        if ((long *)0x1 < plVar7) {
          plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
        }
      }
      if (plVar11 <= plVar7) {
        plVar11 = plVar7;
      }
      if (plVar11 < plVar15) goto LAB_004b44a8;
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
    if (*plVar14 == 0) goto LAB_004b45bc;
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
LAB_004b45bc:
  uVar17 = 1;
  param_1[3] = param_1[3] + 1;
LAB_004b45cc:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar7,uVar17);
  }
  return plVar14;
}


// ===== 004b4630  FUN_004b4630 =====

void FUN_004b4630(long *param_1,ulong param_2)

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


// ===== 004b478c  FUN_004b478c =====

void FUN_004b478c(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar9 == uVar3) goto LAB_004b4858;
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
    if (uVar9 == uVar3) goto LAB_004b4858;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_004b4858:
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


// ===== 004b48c0  FUN_004b48c0 =====

long * FUN_004b48c0(long *param_1,undefined8 *param_2)

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
                  if (bVar2 == uVar9) goto LAB_004b4a44;
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
            if (uVar9 != uVar12) goto LAB_004b4a40;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      goto LAB_004b4a44;
    }
  }
LAB_004b4a40:
  plVar8 = (long *)0x0;
LAB_004b4a44:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return plVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b4a7c  FUN_004b4a7c =====

void FUN_004b4a7c(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar9 == uVar3) goto LAB_004b4b48;
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
    if (uVar9 == uVar3) goto LAB_004b4b48;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_004b4b48:
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


// ===== 004b4bb0  FUN_004b4bb0 =====

long * FUN_004b4bb0(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

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
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  ulong unaff_x28;
  undefined2 uVar17;
  undefined8 uVar18;
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
    uVar11 = CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar17) & 0xffffffff;
    if (uVar11 < 2) {
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
          if (uVar11 < 2) {
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
          plVar12 = (long *)*plVar7;
          if ((char)bVar2 < '\0') {
            plVar7 = plVar12;
            if (__n != 0) {
              uVar5 = memcmp(plVar12,puVar8,__n);
              plVar7 = (long *)(ulong)uVar5;
              if (uVar5 != 0) goto LAB_004b4c8c;
            }
          }
          else if (bVar2 != 0) {
            uVar9 = 0;
            while (*(char *)((long)plVar15 + uVar9 + 0x10) == *(char *)((long)puVar8 + uVar9)) {
              uVar9 = uVar9 + 1;
              if (bVar2 == uVar9) goto LAB_004b4d5c;
            }
            goto LAB_004b4c8c;
          }
LAB_004b4d5c:
          uVar18 = 0;
          goto LAB_004b4f38;
        }
LAB_004b4c8c:
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
  plVar15 = (long *)operator_new(0x110);
  plVar7 = (long *)FUN_004b4f70(plVar15 + 2,param_3,param_4);
  lVar10 = param_1[3];
  *plVar15 = 0;
  plVar15[1] = uVar6;
  if ((uVar16 == 0) || (*(float *)(param_1 + 4) * (float)uVar16 < (float)(lVar10 + 1))) {
    if (uVar16 < 3) {
      uVar11 = 1;
    }
    else {
      uVar11 = (ulong)((uVar16 & uVar16 - 1) != 0);
    }
    plVar12 = (long *)(uVar11 | uVar16 << 1);
    plVar13 = (long *)(long)((float)(lVar10 + 1) / *(float *)(param_1 + 4));
    if (plVar12 <= plVar13) {
      plVar12 = plVar13;
    }
    if ((long)plVar12 - 1U == 0) {
      plVar12 = (long *)0x2;
    }
    else if (((ulong)plVar12 & (long)plVar12 - 1U) != 0) {
      plVar7 = (long *)FUN_005204f8(plVar12);
      plVar12 = plVar7;
    }
    plVar13 = (long *)param_1[1];
    if (plVar13 < plVar12) {
LAB_004b4e14:
      plVar7 = (long *)FUN_004b5170(param_1,plVar12);
    }
    else if (plVar12 < plVar13) {
      plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (plVar13 < (long *)0x3) {
LAB_004b4e7c:
        plVar7 = (long *)FUN_005204f8();
      }
      else {
        uVar18 = NEON_cnt(plVar13,1);
        uVar17 = NEON_uaddlv(uVar18,1);
        if (1 < (CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar17) & 0xffffffff)) goto LAB_004b4e7c;
        if ((long *)0x1 < plVar7) {
          plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
        }
      }
      if (plVar12 <= plVar7) {
        plVar12 = plVar7;
      }
      if (plVar12 < plVar13) goto LAB_004b4e14;
    }
    uVar16 = param_1[1];
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_x28 = uVar16 - 1 & uVar6;
    }
    else {
      unaff_x28 = uVar6;
      if (uVar16 <= uVar6) {
        uVar11 = 0;
        if (uVar16 != 0) {
          uVar11 = uVar6 / uVar16;
        }
        unaff_x28 = uVar6 - uVar11 * uVar16;
      }
    }
  }
  lVar10 = *param_1;
  plVar12 = *(long **)(lVar10 + unaff_x28 * 8);
  if (plVar12 == (long *)0x0) {
    plVar12 = param_1 + 2;
    lVar14 = *plVar12;
    *plVar12 = (long)plVar15;
    *plVar15 = lVar14;
    *(long **)(lVar10 + unaff_x28 * 8) = plVar12;
    if (*plVar15 == 0) goto LAB_004b4f28;
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
LAB_004b4f28:
  uVar18 = 1;
  param_1[3] = param_1[3] + 1;
LAB_004b4f38:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar7,uVar18);
  }
  return plVar15;
}


// ===== 004b4f70  FUN_004b4f70 =====

void FUN_004b4f70(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 *__dest;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
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
    uVar8 = param_2[1];
    uVar6 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar8;
    *param_1 = uVar6;
  }
  uVar8 = param_3[1];
  uVar6 = *param_3;
  param_1[5] = param_3[2];
  param_1[4] = uVar8;
  param_1[3] = uVar6;
  uVar6 = param_3[3];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_1[6] = uVar6;
  uVar8 = param_3[5];
  uVar6 = param_3[4];
  param_1[9] = param_3[6];
  param_1[8] = uVar8;
  param_1[7] = uVar6;
  param_3[5] = 0;
  param_3[6] = 0;
  uVar3 = *(undefined4 *)(param_3 + 8);
  param_3[4] = 0;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_3 + 7);
  *(undefined4 *)(param_1 + 0xb) = uVar3;
  *(undefined1 *)(param_3 + 7) = 0;
  uVar8 = param_3[10];
  uVar6 = param_3[9];
  param_1[0xe] = param_3[0xb];
  param_1[0xd] = uVar8;
  param_1[0xc] = uVar6;
  param_3[10] = 0;
  param_3[0xb] = 0;
  uVar4 = *(undefined1 *)(param_3 + 0xd);
  param_3[9] = 0;
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_3 + 0xc);
  *(undefined1 *)(param_3 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x10) = uVar4;
  *(undefined1 *)(param_3 + 0xd) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  uVar6 = param_3[0xe];
  param_1[0x12] = param_3[0xf];
  param_1[0x11] = uVar6;
  param_1[0x13] = param_3[0x10];
  param_3[0xf] = 0;
  param_3[0x10] = 0;
  uVar6 = param_3[0x11];
  param_3[0xe] = 0;
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_3 + 0x12);
  param_1[0x14] = uVar6;
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_3 + 0x13);
  *(undefined1 *)(param_3 + 0x13) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  uVar6 = param_3[0x14];
  uVar4 = *(undefined1 *)((long)param_3 + 0xc4);
  param_1[0x18] = param_3[0x15];
  param_1[0x17] = uVar6;
  uVar7 = *(undefined4 *)(param_3 + 0x18);
  param_1[0x19] = param_3[0x16];
  param_3[0x15] = 0;
  param_3[0x16] = 0;
  param_3[0x14] = 0;
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_3 + 0x17);
  uVar3 = *(undefined4 *)(param_3 + 0x1a);
  *(undefined4 *)(param_1 + 0x1b) = uVar7;
  *(undefined1 *)((long)param_1 + 0xdc) = uVar4;
  uVar7 = *(undefined4 *)(param_3 + 0x19);
  *(undefined4 *)(param_1 + 0x1d) = uVar3;
  uVar4 = *(undefined1 *)((long)param_3 + 0xcc);
  uVar5 = *(undefined1 *)((long)param_3 + 0xd4);
  *(undefined1 *)((long)param_3 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x1c) = uVar7;
  *(undefined1 *)((long)param_1 + 0xe4) = uVar4;
  *(undefined1 *)((long)param_1 + 0xec) = uVar5;
  uVar6 = param_3[0x1b];
  *(undefined1 *)(param_3 + 0x17) = 0;
  *(undefined1 *)((long)param_3 + 0xcc) = 0;
  *(undefined1 *)((long)param_3 + 0xd4) = 0;
  param_1[0x1f] = param_3[0x1c];
  param_1[0x1e] = uVar6;
  return;
}


// ===== 004b5170  FUN_004b5170 =====

void FUN_004b5170(long *param_1,ulong param_2)

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


// ===== 004b52cc  _INIT_5 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_5(void)

{
  uRam0000000000d60f40 = 0;
  _DAT_00d60f38 = 0;
  uRam0000000000d60f50 = 0;
  _DAT_00d60f48 = 0;
  DAT_00d60f58 = 0x3f800000;
  __cxa_atexit(FUN_004b2444,&DAT_00d60f38,&PTR_LOOP_00d19390);
  return;
}


// ===== 004b52f8  FUN_004b52f8 =====

void FUN_004b52f8(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  
  piVar1 = (int *)(param_1 + 0x10);
  if ((((uint)*(undefined8 *)piVar1 < 10) && (iVar4 = FUN_007bf3cc(param_2), iVar4 != 0)) &&
     (iVar4 = FUN_007bf3e8(param_2), iVar4 != 0)) {
    lVar5 = FUN_005ce36c();
    if (1000000000 < (ulong)(lVar5 - *(long *)(param_1 + 8))) {
      *(long *)(param_1 + 8) = lVar5;
      fVar7 = (float)FUN_004b542c(param_2);
      if (0.0 <= fVar7) {
        if (((int)*(undefined8 *)piVar1 == 0) && (uVar6 = FUN_00417e08(), (uVar6 & 1) == 0)) {
          FUN_00623bb0((double)fVar7,&DAT_001f667e,
                       "../../discord_native_lib/src/media/frame_activity_detector.cpp",0x129,
                       "First video frame entropy: ");
        }
        *(float *)(param_1 + 0x14) = fVar7 + (float)*(undefined8 *)(param_1 + 0x14);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
  }
  return;
}


// ===== 004b53e4  FUN_004b53e4 =====

ulong FUN_004b53e4(long param_1)

{
  if (9 < (uint)*(undefined8 *)(param_1 + 0x10)) {
    return *(ulong *)(param_1 + 0x14) | 0x100000000;
  }
  return 0;
}


// ===== 004b540c  FUN_004b540c =====

void FUN_004b540c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


// ===== 004b5428  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004b542c  FUN_004b542c =====

undefined4 FUN_004b542c(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  long *local_488;
  long *local_480;
  int local_478 [256];
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  FUN_007bf464(&local_480);
  (**(code **)(*local_480 + 0x40))(&local_488);
  if (local_488 == (long *)0x0) {
    uVar10 = 0xbf800000;
  }
  else {
    uVar2 = (**(code **)(*local_480 + 0x30))();
    iVar3 = (**(code **)(*local_480 + 0x38))();
    if (iVar3 * uVar2 == 0) {
      uVar10 = 0xbf800000;
    }
    else {
      memset(local_478,0,0x400);
      lVar5 = (**(code **)(*local_488 + 0x98))();
      if (0 < iVar3) {
        iVar8 = 0;
        do {
          iVar4 = (**(code **)(*local_488 + 0x80))();
          if (0 < (int)uVar2) {
            pbVar6 = (byte *)(lVar5 + iVar4 * iVar8);
            uVar7 = (ulong)uVar2;
            do {
              uVar7 = uVar7 - 1;
              local_478[*pbVar6] = local_478[*pbVar6] + 1;
              pbVar6 = pbVar6 + 1;
            } while (uVar7 != 0);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 != iVar3);
      }
      uVar10 = 0;
      lVar5 = 0;
      do {
        if (0 < *(int *)((long)local_478 + lVar5)) {
          fVar11 = (float)*(int *)((long)local_478 + lVar5) / (float)(int)(iVar3 * uVar2);
          uVar9 = FUN_004ad600(fVar11);
          uVar10 = NEON_fmsub(fVar11,uVar9,uVar10);
        }
        lVar5 = lVar5 + 4;
      } while (lVar5 != 0x400);
    }
    if (local_488 != (long *)0x0) {
      (**(code **)(*local_488 + 8))();
    }
  }
  if (local_480 != (long *)0x0) {
    (**(code **)(*local_480 + 8))();
  }
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}


// ===== 004b55f4  FUN_004b55f4 =====

void FUN_004b55f4(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 *__dest;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *__src;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  *param_1 = &PTR_FUN_00d1e750;
  FUN_004426bc(param_1 + 1);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  uVar7 = param_3[1] - *param_3;
  if (uVar7 != 0) {
    if ((long)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar6 = operator_new(uVar7);
    param_1[0x1f] = pvVar6;
    param_1[0x20] = pvVar6;
    param_1[0x21] = (void *)((long)pvVar6 + ((long)uVar7 >> 6) * 0x40);
    puVar4 = (undefined8 *)*param_3;
    puVar5 = (undefined8 *)param_3[1];
    if (puVar4 != puVar5) {
      lVar9 = 0;
      do {
        puVar2 = (undefined8 *)((long)puVar4 + lVar9);
        puVar3 = (undefined8 *)((long)pvVar6 + lVar9);
        puVar8 = puVar3 + 1;
        *puVar3 = *puVar2;
        if (*(char *)((long)puVar2 + 0x1f) < '\0') {
          uVar7 = puVar2[2];
          __src = (undefined8 *)puVar2[1];
          if (uVar7 < 0x17) {
            *(char *)((long)pvVar6 + lVar9 + 0x1f) = (char)uVar7;
            __dest = puVar8;
          }
          else {
            if (0x7fffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar1 = (uVar7 | 0xf) + 1;
            __dest = (undefined8 *)operator_new(uVar1);
            *puVar8 = __dest;
            *(ulong *)((long)pvVar6 + lVar9 + 0x10) = uVar7;
            *(ulong *)((long)pvVar6 + lVar9 + 0x18) = uVar1 | 0x8000000000000000;
          }
          if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar7 + 1))) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                       ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range")
            ;
          }
          memmove(__dest,__src,uVar7 + 1);
        }
        else {
          uVar11 = puVar2[2];
          uVar10 = puVar2[1];
          puVar3[3] = puVar2[3];
          puVar3[2] = uVar11;
          *puVar8 = uVar10;
        }
        uVar10 = *(undefined8 *)((long)puVar2 + 0x29);
        lVar9 = lVar9 + 0x40;
        uVar12 = puVar2[5];
        uVar11 = puVar2[4];
        *(undefined8 *)((long)puVar3 + 0x31) = *(undefined8 *)((long)puVar2 + 0x31);
        *(undefined8 *)((long)puVar3 + 0x29) = uVar10;
        puVar3[5] = uVar12;
        puVar3[4] = uVar11;
      } while (puVar2 + 8 != puVar5);
      pvVar6 = (void *)((long)pvVar6 + lVar9);
    }
    param_1[0x20] = pvVar6;
  }
  uVar10 = *param_4;
  param_1[0x23] = param_4[1];
  param_1[0x22] = uVar10;
  param_1[0x24] = param_4[2];
  lVar9 = *(long *)(param_4[3] + 8);
  param_1[0x25] = param_4[3];
  if (lVar9 != 0) {
    param_4[2] = FUN_004b5e9c;
    param_4[3] = &DAT_001f1910;
  }
  return;
}


// ===== 004b57d0  FUN_004b57d0 =====

/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffe00 : 0x004b5b08 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004b57d0(long *param_1,long param_2,undefined8 param_3,int param_4,int param_5,long param_6
                 )

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStack_268 [8];
  char *local_260;
  char **local_258;
  long local_250;
  char **local_248;
  undefined *local_240;
  long *plStack_238;
  long local_230;
  undefined **local_228;
  char *local_220;
  long *plStack_218;
  ulong local_210;
  char **local_208;
  char *local_200;
  ulong *puStack_1f8;
  long local_1f0;
  char **ppcStack_1e8;
  undefined *local_1e0;
  long *plStack_1d8;
  long local_1d0;
  undefined **ppuStack_1c8;
  char *local_1c0;
  long *plStack_1b8;
  ulong local_1b0;
  char **ppcStack_1a8;
  char *local_1a0;
  ulong *puStack_198;
  ulong local_190;
  char **local_188;
  char *pcStack_180;
  ulong *local_178;
  ulong local_170;
  char **local_168;
  char *local_160;
  ulong *local_158;
  char *local_150;
  undefined8 uStack_148;
  undefined1 *local_140;
  long local_138;
  long lStack_130;
  uint local_128;
  uint uStack_124;
  uint local_120;
  uint local_11c;
  undefined4 local_110;
  double local_f8;
  char local_f0;
  undefined1 local_e6;
  long local_70;
  
  lVar12 = tpidr_el0;
  local_70 = *(long *)(lVar12 + 0x28);
  puVar17 = *(uint **)(param_2 + 0xf8);
  puVar5 = *(uint **)(param_2 + 0x100);
  lVar15 = *(long *)(param_6 + 0xc0);
  if (lVar15 != (long)puVar5 - (long)puVar17 >> 6) {
                    /* WARNING: Subroutine does not return */
    FUN_004d7934("../../discord_native_lib/src/media/simulcast_video_stream_factory.cpp",0x1c,
                 "encoder_config.number_of_streams == streams_.size()",&DAT_001f6647);
  }
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004d7934("../../discord_native_lib/src/media/simulcast_video_stream_factory.cpp",0x1d,
                 "encoder_config.number_of_streams > 0",&DAT_001f6647);
  }
  if (lVar15 != (*(long *)(param_6 + 0xb0) - *(long *)(param_6 + 0xa8) >> 3) * -0x70a3d70a3d70a3d7)
  {
                    /* WARNING: Subroutine does not return */
    FUN_004d7934("../../discord_native_lib/src/media/simulcast_video_stream_factory.cpp",0x1e,
                 "encoder_config.number_of_streams == encoder_config.simulcast_layers.size()",
                 &DAT_001f6647);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  uVar18 = *(uint *)(param_6 + 0x9c);
  *param_1 = 0;
  if (puVar17 != puVar5) {
    puVar17 = puVar17 + 0xd;
    do {
      lVar15 = *param_1;
      lVar6 = param_1[1];
      uVar14 = FUN_004bc634(param_4,param_5,puVar17[-1]);
      uVar2 = (uint)uVar14 & 0xfffffffe;
      if (param_4 < (int)uVar2) {
LAB_004b5c98:
                    /* WARNING: Subroutine does not return */
        FUN_004d7934("../../discord_native_lib/src/media/simulcast_video_stream_factory.cpp",0x33,
                     "newWidth <= frame_width && newHeight <= frame_height",&DAT_001f6647);
      }
      uVar3 = (uint)((ulong)uVar14 >> 0x20) & 0xfffffffe;
      if (param_5 < (int)uVar3) goto LAB_004b5c98;
      FUN_008491f0(&local_138);
      local_138 = (long)(int)uVar2;
      lStack_130 = (long)(int)uVar3;
      local_11c = uVar18;
      if ((int)puVar17[-5] <= (int)uVar18) {
        local_11c = puVar17[-5];
      }
      uVar2 = *(uint *)(param_2 + 8);
      if ((int)*(uint *)(param_2 + 8) <= (int)puVar17[-3]) {
        uVar2 = puVar17[-3];
      }
      local_120 = local_11c;
      if ((int)uVar2 <= (int)local_11c) {
        local_120 = uVar2;
      }
      uStack_124 = local_120;
      if ((int)puVar17[-4] <= (int)local_120) {
        uStack_124 = puVar17[-4];
      }
      local_128 = *(uint *)(param_2 + 0x30);
      if (0 < (int)*puVar17) {
        puVar4 = puVar17;
        if ((int)local_128 <= (int)*puVar17) {
          puVar4 = &local_128;
        }
        local_128 = *puVar4;
      }
      lVar15 = lVar6 - lVar15 >> 3;
      if ((int)local_128 < 0x10) {
        local_128 = 0xf;
      }
      uVar16 = (*(long *)(param_6 + 0xb0) - *(long *)(param_6 + 0xa8) >> 3) * -0x70a3d70a3d70a3d7;
      if (uVar16 < (ulong)(lVar15 * -0x70a3d70a3d70a3d7) ||
          uVar16 + lVar15 * 0x70a3d70a3d70a3d7 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x591,
                   "__n < size()","vector[] index out of bounds");
      }
      local_e6 = *(undefined1 *)(*(long *)(param_6 + 0xa8) + lVar15 * 8 + 0x52);
      local_110 = 0x38;
      iVar13 = FUN_00469998(puVar17[-2]);
      if (local_f0 == '\0') {
        local_f0 = '\x01';
      }
      local_f8 = (double)iVar13;
      uVar16 = FUN_00417e08();
      if ((uVar16 & 1) == 0) {
        ppcStack_1a8 = &local_1c0;
        local_150 = "../../discord_native_lib/src/media/simulcast_video_stream_factory.cpp";
        uStack_148 = 0x259;
        local_140 = auStack_268;
        local_250 = lVar15 * -0x70a3d70a3d70a3d7 + 1;
        local_260 = "Creating simulcast encoder stream ";
        local_258 = &local_150;
        local_248 = &local_260;
        local_190 = (ulong)uVar18;
        local_158 = &local_170;
        local_230 = *(long *)(param_2 + 0x100) - *(long *)(param_2 + 0xf8) >> 6;
        plStack_238 = &local_250;
        local_228 = &local_240;
        local_240 = &DAT_001c7bbb;
        plStack_218 = &local_230;
        local_220 = " max pixel count: ";
        local_208 = &local_220;
        local_210 = (ulong)puVar17[-1];
        ppcStack_1e8 = &local_200;
        local_188 = &local_1a0;
        local_160 = " target bitrate: ";
        pcStack_180 = " max bitrate: ";
        local_200 = " resolution: ";
        local_1f0 = local_138;
        plStack_1d8 = &local_1f0;
        local_1e0 = &DAT_001c4fee;
        ppuStack_1c8 = &local_1e0;
        local_1d0 = lStack_130;
        plStack_1b8 = &local_1d0;
        local_1c0 = " max framerate: ";
        local_1b0 = (ulong)local_128;
        puStack_198 = &local_1b0;
        local_1a0 = " remaining bitrate: ";
        local_178 = &local_190;
        local_168 = &pcStack_180;
        local_170 = (ulong)local_11c;
        puVar1 = puStack_1f8 + 1;
        uVar16 = *puStack_1f8;
        puVar7 = (undefined8 *)((undefined8 *)*puVar1)[1];
        puVar8 = (undefined8 *)puVar7[1];
        puVar9 = (undefined8 *)puVar8[1];
        puVar10 = (undefined8 *)puVar9[1];
        puVar11 = (undefined8 *)puVar10[1];
        puStack_1f8 = &local_210;
        FUN_00623bb0(&DAT_001f7002,*puVar11,puVar11[1],*puVar10,*puVar9,*puVar8,*puVar7,
                     *(undefined8 *)*puVar1,(int)uVar16," resolution: ",local_138,&DAT_001c4fee,
                     lStack_130," max framerate: ",local_128," remaining bitrate: ",uVar18,
                     " max bitrate: ",local_11c," target bitrate: ",local_120," min bitrate: ",
                     uStack_124," active: ",local_e6);
      }
      uVar2 = local_11c;
      uVar16 = param_1[1];
      if (uVar16 < (ulong)param_1[2]) {
        if (uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        FUN_00849240(uVar16,&local_138);
        param_1[1] = uVar16 + 200;
      }
      else {
        FUN_004b5d20(param_1,&local_138);
      }
      uVar18 = uVar18 - uVar2;
      FUN_008492a8(&local_138);
      puVar4 = puVar17 + 3;
      puVar17 = puVar17 + 0x10;
    } while (puVar4 != puVar5);
    lVar15 = param_1[1];
    if (*param_1 != lVar15) {
      *(uint *)(lVar15 + -0xac) = *(int *)(lVar15 + -0xac) + uVar18;
      if (*(char *)(*(long *)(param_2 + 0x128) + 0x10) == '\0') {
        (**(code **)(param_2 + 0x120))(param_2 + 0x110,param_1);
      }
      if (*(long *)(lVar12 + 0x28) == local_70) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,"!empty()",
             "back() called on an empty vector");
}


// ===== 004b5d1c  FUN_004b5d1c =====

void FUN_004b5d1c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4b5d20);
  (*pcVar1)();
}


// ===== 004b5d20  FUN_004b5d20 =====

void FUN_004b5d20(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  
  lVar3 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar3 * -0x70a3d70a3d70a3d7 + 1;
  if (0x147ae147ae147ae < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar4 = param_1[2] - *param_1 >> 3;
  uVar5 = lVar4 * 0x1eb851eb851eb852;
  if (uVar5 < uVar1 || uVar5 - uVar1 == 0) {
    uVar5 = uVar1;
  }
  if (0xa3d70a3d70a3d6 < (ulong)(lVar4 * -0x70a3d70a3d70a3d7)) {
    uVar5 = 0x147ae147ae147ae;
  }
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  if (0x147ae147ae147ae < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  pvVar2 = operator_new(uVar5 * 200);
  pvVar7 = (void *)((long)pvVar2 + lVar3 * 8);
  pvVar2 = (void *)((long)pvVar2 + uVar5 * 200);
  FUN_00849240(pvVar7,param_2);
  pvVar8 = (void *)*param_1;
  pvVar6 = (void *)param_1[1];
  lVar3 = (long)pvVar7 + 200;
  if (pvVar6 == pvVar8) {
    *param_1 = (long)pvVar7;
    param_1[1] = lVar3;
    param_1[2] = (long)pvVar2;
  }
  else {
    do {
      pvVar7 = (void *)((long)pvVar7 + -200);
      pvVar6 = (void *)((long)pvVar6 + -200);
      FUN_00849240(pvVar7,pvVar6);
    } while (pvVar6 != pvVar8);
    pvVar6 = (void *)*param_1;
    pvVar8 = (void *)param_1[1];
    *param_1 = (long)pvVar7;
    param_1[1] = lVar3;
    param_1[2] = (long)pvVar2;
    while (pvVar8 != pvVar6) {
      pvVar8 = (void *)((long)pvVar8 + -200);
      FUN_008492a8(pvVar8);
    }
  }
  if (pvVar6 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar6);
  return;
}


// ===== 004b5e9c  FUN_004b5e9c =====

void FUN_004b5e9c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 004b5ea8  FUN_004b5ea8 =====

undefined1  [16] FUN_004b5ea8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined1 auVar3 [16];
  void *local_50;
  undefined8 local_48;
  long lStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  iVar2 = (int)param_2;
  local_38 = *(long *)(lVar1 + 0x28);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 1;
  }
  local_48 = 0;
  lStack_40 = 0;
  local_50 = (void *)0x0;
  auVar3 = FUN_004b5f2c(param_1,param_2,iVar2 >> 1,&local_50);
  if (lStack_40 < 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b5f2c  FUN_004b5f2c =====

undefined1  [16]
FUN_004b5f2c(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  void *local_60;
  undefined8 uStack_58;
  long local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  auVar8._0_8_ = operator_new(0x480);
  uStack_58 = param_4[1];
  local_60 = (void *)*param_4;
  local_50 = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  FUN_004b60a4(auVar8._0_8_,param_1,param_2,param_3,&local_60);
  plVar4 = (long *)operator_new(0x20);
  lVar5 = *(long *)((long)auVar8._0_8_ + 0x10);
  plVar4[3] = (long)auVar8._0_8_;
  *plVar4 = (long)&PTR_FUN_00d1e8c0;
  plVar7 = plVar4 + 1;
  *plVar7 = 0;
  plVar6 = plVar4 + 2;
  *plVar6 = 0;
  if (lVar5 == 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(void **)((long)auVar8._0_8_ + 8) = auVar8._0_8_;
    *(long **)((long)auVar8._0_8_ + 0x10) = plVar4;
  }
  else {
    if (*(long *)(lVar5 + 8) != -1) goto joined_r0x004b6098;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(void **)((long)auVar8._0_8_ + 8) = auVar8._0_8_;
    *(long **)((long)auVar8._0_8_ + 0x10) = plVar4;
    FUN_005466cc();
  }
  do {
    lVar5 = *plVar7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_005466cc(plVar4);
  }
joined_r0x004b6098:
  if (local_50 < 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar8._8_8_ = plVar4;
  return auVar8;
}


// ===== 004b60a4  FUN_004b60a4 =====

void FUN_004b60a4(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 *param_5)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *local_78 [2];
  code *local_68;
  undefined *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0048288c();
  *(undefined1 *)(param_1 + 0x89) = 0;
  *param_1 = &PTR_FUN_00d1e788;
  param_1[0x88] = &PTR_FUN_00d1e848;
  param_1[0x8a] = 0;
  pvVar4 = operator_new(0x50);
  FUN_00489274(pvVar4,param_2,param_3);
  param_1[0x8b] = pvVar4;
  *(undefined4 *)(param_1 + 0x8c) = param_3;
  *(undefined4 *)((long)param_1 + 0x464) = param_4;
  uVar7 = param_5[1];
  uVar6 = *param_5;
  param_1[0x8f] = param_5[2];
  param_1[0x8e] = uVar7;
  param_1[0x8d] = uVar6;
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  uVar1 = param_1[0x8e];
  if (-1 < (char)*(byte *)((long)param_1 + 0x47f)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x47f);
  }
  if (uVar1 == 0) {
    pcVar2 = "Blank Video Source";
    if (*(int *)((long)param_1 + 0x464) != 0) {
      pcVar2 = "Strobe Video Source";
    }
    FUN_00547bf8(param_1 + 0x8d,pcVar2);
  }
  local_68 = FUN_004b6d60;
  local_60 = &DAT_001f7048;
  local_78[0] = param_1;
  FUN_004891f8(param_1[0x8b],local_78);
  if (*(code **)(local_60 + 8) != (code *)0x0) {
    (**(code **)(local_60 + 8))(local_78[0]);
  }
  if (*(char *)(param_1 + 0x89) != '\0') {
    (**(code **)(*(long *)param_1[0x8b] + 0x18))();
    param_1[0x8a] = 0;
  }
  lVar5 = *(long *)param_1[0x8b];
  *(undefined1 *)(param_1 + 0x89) = 1;
  (**(code **)(lVar5 + 0x10))();
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b6214  FUN_004b6214 =====

void FUN_004b6214(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *__dest;
  undefined8 uVar2;
  undefined8 *__src;
  ulong uVar3;
  undefined8 uVar4;
  
  if (-1 < *(char *)(param_2 + 0x47f)) {
    uVar4 = *(undefined8 *)(param_2 + 0x468);
    uVar2 = *(undefined8 *)(param_2 + 0x478);
    param_1[1] = *(undefined8 *)(param_2 + 0x470);
    *param_1 = uVar4;
    param_1[2] = uVar2;
    return;
  }
  uVar3 = *(ulong *)(param_2 + 0x470);
  __src = *(undefined8 **)(param_2 + 0x468);
  if (uVar3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar3;
    __dest = param_1;
  }
  else {
    if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar1 = (uVar3 | 0xf) + 1;
    __dest = (undefined8 *)operator_new(uVar1);
    *param_1 = __dest;
    param_1[1] = uVar3;
    param_1[2] = uVar1 | 0x8000000000000000;
  }
  if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar3 + 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  memmove(__dest,__src,uVar3 + 1);
  return;
}


// ===== 004b62f4  FUN_004b62f4 =====

void FUN_004b62f4(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x448) != '\0') {
    (**(code **)(**(long **)(param_1 + 0x458) + 0x18))();
    *(undefined8 *)(param_1 + 0x450) = 0;
    lVar1 = **(long **)(param_1 + 0x458);
    *(undefined1 *)(param_1 + 0x448) = 1;
                    /* WARNING: Could not recover jumptable at 0x004b633c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))();
    return;
  }
  return;
}


// ===== 004b634c  FUN_004b634c =====

void FUN_004b634c(void)

{
  return;
}


// ===== 004b6350  FUN_004b6350 =====

void FUN_004b6350(void)

{
  return;
}


// ===== 004b6354  FUN_004b6354 =====

void FUN_004b6354(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  void *pvVar9;
  ulong uVar10;
  long *local_160;
  long *local_158;
  long local_150;
  undefined4 local_148;
  undefined1 local_140;
  undefined1 auStack_138 [224];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if ((*(int *)(param_1 + 0x390) != 0) && (*(int *)(param_1 + 0x394) != 0)) {
    FUN_007bcfd8(&local_160);
    local_158 = local_160;
    if (local_160 != (long *)0x0) {
      (**(code **)*local_160)();
    }
    uVar8 = FUN_0062589c();
    FUN_007bef7c(auStack_138,&local_158,0,uVar8,0);
    if (local_158 != (long *)0x0) {
      (**(code **)(*local_158 + 8))();
    }
    uVar10 = (ulong)*(int *)(param_1 + 0x460);
    uVar1 = *(long *)(param_1 + 0x450) + 1;
    iVar6 = *(int *)(param_1 + 0x464);
    uVar2 = 0;
    if (uVar10 != 0) {
      uVar2 = uVar1 / uVar10;
    }
    *(ulong *)(param_1 + 0x450) = uVar1;
    pvVar9 = (void *)FUN_007bd0fc(local_160);
    iVar4 = (**(code **)(*local_160 + 0x38))();
    iVar5 = (**(code **)(*local_160 + 0x80))();
    iVar7 = 0x3f;
    if ((ulong)(long)iVar6 <= uVar1 - uVar2 * uVar10) {
      iVar7 = 0;
    }
    memset(pvVar9,iVar7,(long)(iVar5 * iVar4));
    pvVar9 = (void *)FUN_007bd10c(local_160);
    iVar6 = FUN_007bf72c(local_160);
    iVar7 = (**(code **)(*local_160 + 0x88))();
    memset(pvVar9,0x7e,(long)(iVar7 * iVar6));
    pvVar9 = (void *)FUN_007bd11c(local_160);
    iVar6 = FUN_007bf72c(local_160);
    iVar7 = (**(code **)(*local_160 + 0x90))();
    memset(pvVar9,0xdb,(long)(iVar7 * iVar6));
    iVar6 = *(int *)(param_1 + 0x398);
    local_158 = *(long **)(param_1 + 0x390);
    if (iVar6 == 0) {
      local_150 = 100000;
    }
    else {
      iVar7 = 0;
      if (iVar6 != 0) {
        iVar7 = 1000000000 / iVar6;
      }
      local_150 = (long)iVar7;
    }
    local_148 = 0;
    local_140 = 1;
    FUN_0089ed2c(param_1 + 0xc0,&local_158);
    FUN_004bd05c(param_1,auStack_138);
    FUN_007bf020(auStack_138);
    if (local_160 != (long *)0x0) {
      (**(code **)(*local_160 + 8))();
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b6564  FUN_004b6564 =====

void FUN_004b6564(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_00d1e880;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[3] = param_2[2];
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return;
}


// ===== 004b658c  FUN_004b658c =====

undefined8 FUN_004b658c(void)

{
  return 1;
}


// ===== 004b6594  FUN_004b6594 =====

void FUN_004b6594(undefined8 *param_1,long param_2,int param_3)

{
  if (param_3 == 0) {
    param_1[6] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    FUN_00411268(param_1,param_2 + 8);
    FUN_00411268(param_1 + 3,param_2 + 8);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  else {
    param_1[6] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  return;
}


// ===== 004b6600  FUN_004b6600 =====

void FUN_004b6600(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return;
  }
  operator_delete(*(void **)(param_1 + 8));
  return;
}


// ===== 004b6614  FUN_004b6614 =====

void FUN_004b6614(void *param_1)

{
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete(*(void **)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 004b6644  FUN_004b6644 =====

undefined8 FUN_004b6644(void)

{
  return 0;
}


// ===== 004b664c  FUN_004b664c =====

void FUN_004b664c(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  void *local_80;
  undefined8 uStack_78;
  long local_70;
  void *local_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar4 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar3 = (**(code **)(lVar4 + 0x10))();
  FUN_004b69dc(param_1,(ulong)uVar3);
  if (uVar3 != 0) {
    uVar6 = 0;
    do {
      (**(code **)(*param_2 + 0x18))(&local_80,param_2,uVar6 & 0xffffffff);
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 < (undefined8 *)param_1[2]) {
        if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        puVar1[2] = local_70;
        puVar1[1] = uStack_78;
        *puVar1 = local_80;
        uStack_78 = 0;
        local_70 = 0;
        local_80 = (void *)0x0;
        puVar1[4] = uStack_60;
        puVar1[3] = local_68;
        puVar1[5] = local_58;
        puVar5 = puVar1 + 7;
        uStack_60 = 0;
        local_58 = 0;
        local_68 = (void *)0x0;
        puVar1[6] = local_50;
        param_1[1] = puVar5;
      }
      else {
        FUN_004b6b2c(param_1,&local_80);
        puVar5 = (undefined8 *)param_1[1];
      }
      if ((undefined8 *)*param_1 == puVar5) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                   "!empty()","back() called on an empty vector");
      }
      if (local_58 < 0) {
        operator_delete(local_68);
      }
      if (local_70 < 0) {
        operator_delete(local_80);
      }
      uVar6 = uVar6 + 1;
    } while (uVar3 != uVar6);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004b67f4  FUN_004b67f4 =====

void FUN_004b67f4(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_00d1e788;
  param_1[0x88] = &PTR_FUN_00d1e848;
  (**(code **)(*(long *)param_1[0x8b] + 0x18))();
  *(undefined1 *)(param_1 + 0x89) = 0;
  param_1[0x8a] = 0;
  if (*(char *)((long)param_1 + 0x47f) < '\0') {
    operator_delete((void *)param_1[0x8d]);
  }
  plVar1 = (long *)param_1[0x8b];
  param_1[0x8b] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_004bc7c8(param_1);
  return;
}


// ===== 004b6868  FUN_004b6868 =====

void FUN_004b6868(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_00d1e788;
  param_1[0x88] = &PTR_FUN_00d1e848;
  (**(code **)(*(long *)param_1[0x8b] + 0x18))();
  *(undefined1 *)(param_1 + 0x89) = 0;
  param_1[0x8a] = 0;
  if (*(char *)((long)param_1 + 0x47f) < '\0') {
    operator_delete((void *)param_1[0x8d]);
  }
  plVar1 = (long *)param_1[0x8b];
  param_1[0x8b] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_004bc7c8(param_1);
  operator_delete(param_1);
  return;
}


// ===== 004b68e4  FUN_004b68e4 =====

void FUN_004b68e4(undefined8 *param_1)

{
  long *plVar1;
  
  param_1[-0x88] = &PTR_FUN_00d1e788;
  *param_1 = &PTR_FUN_00d1e848;
  (**(code **)(*(long *)param_1[3] + 0x18))();
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  plVar1 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_004bc7c8(param_1 + -0x88);
  return;
}


// ===== 004b695c  FUN_004b695c =====

void FUN_004b695c(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1 + -0x88;
  *puVar2 = &PTR_FUN_00d1e788;
  *param_1 = &PTR_FUN_00d1e848;
  (**(code **)(*(long *)param_1[3] + 0x18))();
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  plVar1 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_004bc7c8(puVar2);
  operator_delete(puVar2);
  return;
}


// ===== 004b69dc  FUN_004b69dc =====

/* WARNING: Removing unreachable block (ram,0x004b6aec) */
/* WARNING: Removing unreachable block (ram,0x004b6b00) */

void FUN_004b69dc(long *param_1,ulong param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  pvVar6 = (void *)*param_1;
  if ((ulong)((param_1[2] - (long)pvVar6 >> 3) * 0x6db6db6db6db6db7) < param_2) {
    if (0x492492492492492 < param_2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar7 = (void *)param_1[1];
    pvVar2 = operator_new(param_2 * 0x38);
    lVar1 = (long)pvVar2 + ((long)pvVar7 - (long)pvVar6);
    pvVar2 = (void *)((long)pvVar2 + param_2 * 0x38);
    lVar3 = lVar1;
    if ((long)pvVar7 - (long)pvVar6 == 0) {
      *param_1 = lVar1;
      param_1[1] = lVar1;
      param_1[2] = (long)pvVar2;
    }
    else {
      do {
        uVar9 = *(undefined8 *)((long)pvVar7 + -0x30);
        uVar8 = *(undefined8 *)((long)pvVar7 + -0x38);
        pvVar5 = (void *)((long)pvVar7 + -0x38);
        *(undefined8 *)(lVar3 + -0x28) = *(undefined8 *)((long)pvVar7 + -0x28);
        *(undefined8 *)(lVar3 + -0x30) = uVar9;
        *(undefined8 *)(lVar3 + -0x38) = uVar8;
        *(undefined8 *)((long)pvVar7 + -0x30) = 0;
        *(undefined8 *)((long)pvVar7 + -0x28) = 0;
        uVar9 = *(undefined8 *)((long)pvVar7 + -0x18);
        uVar8 = *(undefined8 *)((long)pvVar7 + -0x20);
        *(undefined8 *)((long)pvVar7 + -0x38) = 0;
        *(undefined8 *)(lVar3 + -0x10) = *(undefined8 *)((long)pvVar7 + -0x10);
        lVar4 = lVar3 + -0x38;
        *(undefined8 *)(lVar3 + -0x18) = uVar9;
        *(undefined8 *)(lVar3 + -0x20) = uVar8;
        *(undefined8 *)((long)pvVar7 + -0x18) = 0;
        *(undefined8 *)((long)pvVar7 + -0x10) = 0;
        *(undefined8 *)((long)pvVar7 + -0x20) = 0;
        *(undefined8 *)(lVar3 + -8) = *(undefined8 *)((long)pvVar7 + -8);
        lVar3 = lVar4;
        pvVar7 = pvVar5;
      } while (pvVar5 != pvVar6);
      pvVar6 = (void *)*param_1;
      pvVar7 = (void *)param_1[1];
      *param_1 = lVar4;
      param_1[1] = lVar1;
      param_1[2] = (long)pvVar2;
      for (; pvVar7 != pvVar6; pvVar7 = (void *)((long)pvVar7 + -0x38)) {
      }
    }
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
      return;
    }
  }
  return;
}


// ===== 004b6b2c  FUN_004b6b2c =====

/* WARNING: Removing unreachable block (ram,0x004b6cb4) */
/* WARNING: Removing unreachable block (ram,0x004b6cc8) */

void FUN_004b6b2c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar3 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar3 * 0x6db6db6db6db6db7 + 1;
  if (0x492492492492492 < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar8 = param_1[2] - *param_1 >> 3;
  uVar9 = lVar8 * -0x2492492492492492;
  if (uVar9 < uVar1 || uVar9 - uVar1 == 0) {
    uVar9 = uVar1;
  }
  if (0x249249249249248 < (ulong)(lVar8 * 0x6db6db6db6db6db7)) {
    uVar9 = 0x492492492492492;
  }
  if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  if (0x492492492492492 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  pvVar2 = operator_new(uVar9 * 0x38);
  uVar15 = param_2[1];
  uVar14 = *param_2;
  uVar4 = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  puVar5 = (undefined8 *)((long)pvVar2 + lVar3 * 8);
  uVar17 = param_2[4];
  uVar16 = param_2[3];
  param_2[2] = 0;
  param_2[3] = 0;
  uVar10 = param_2[5];
  param_2[4] = 0;
  param_2[5] = 0;
  pvVar2 = (void *)((long)pvVar2 + uVar9 * 0x38);
  pvVar12 = (void *)*param_1;
  pvVar13 = (void *)param_1[1];
  puVar5[1] = uVar15;
  *puVar5 = uVar14;
  uVar14 = param_2[6];
  puVar5[2] = uVar4;
  puVar5[4] = uVar17;
  puVar5[3] = uVar16;
  puVar5[5] = uVar10;
  puVar5[6] = uVar14;
  puVar6 = puVar5;
  if (pvVar13 == pvVar12) {
    *param_1 = (long)puVar5;
    param_1[1] = (long)(puVar5 + 7);
    param_1[2] = (long)pvVar2;
  }
  else {
    do {
      uVar10 = *(undefined8 *)((long)pvVar13 + -0x30);
      uVar4 = *(undefined8 *)((long)pvVar13 + -0x38);
      pvVar11 = (void *)((long)pvVar13 + -0x38);
      puVar6[-5] = *(undefined8 *)((long)pvVar13 + -0x28);
      puVar6[-6] = uVar10;
      puVar6[-7] = uVar4;
      *(undefined8 *)((long)pvVar13 + -0x30) = 0;
      *(undefined8 *)((long)pvVar13 + -0x28) = 0;
      uVar10 = *(undefined8 *)((long)pvVar13 + -0x18);
      uVar4 = *(undefined8 *)((long)pvVar13 + -0x20);
      *(undefined8 *)((long)pvVar13 + -0x38) = 0;
      puVar6[-2] = *(undefined8 *)((long)pvVar13 + -0x10);
      puVar7 = puVar6 + -7;
      puVar6[-3] = uVar10;
      puVar6[-4] = uVar4;
      *(undefined8 *)((long)pvVar13 + -0x18) = 0;
      *(undefined8 *)((long)pvVar13 + -0x10) = 0;
      *(undefined8 *)((long)pvVar13 + -0x20) = 0;
      puVar6[-1] = *(undefined8 *)((long)pvVar13 + -8);
      puVar6 = puVar7;
      pvVar13 = pvVar11;
    } while (pvVar11 != pvVar12);
    pvVar13 = (void *)*param_1;
    pvVar12 = (void *)param_1[1];
    *param_1 = (long)puVar7;
    param_1[1] = (long)(puVar5 + 7);
    param_1[2] = (long)pvVar2;
    for (; pvVar12 != pvVar13; pvVar12 = (void *)((long)pvVar12 + -0x38)) {
    }
  }
  if (pvVar13 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar13);
  return;
}


// ===== 004b6d20  FUN_004b6d20 =====

void FUN_004b6d20(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 004b6d44  FUN_004b6d44 =====

void FUN_004b6d44(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004b6d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 004b6d5c  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004b6d60  FUN_004b6d60 =====

void FUN_004b6d60(undefined8 *param_1)

{
  FUN_004b6354(*param_1);
  return;
}


// ===== 004b6d68  FUN_004b6d68 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b6d68(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  char *local_a0;
  char acStack_98 [8];
  undefined8 uStack_90;
  long *local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  *param_1 = &PTR_FUN_00d1e8f8;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar12 = param_1 + 1;
  *puVar12 = 0;
  local_a0 = (char *)operator_new(0x20);
  uVar8 = s_SimulcastAndroidEncoderFactory_001c4ff0._0_8_;
  uStack_90 = _UNK_001f4c98;
  acStack_98[0] = DAT_001f4c90;
  acStack_98[1] = UNK_001f4c91;
  acStack_98[2] = UNK_001f4c92;
  acStack_98[3] = UNK_001f4c93;
  acStack_98[4] = UNK_001f4c94;
  acStack_98[5] = UNK_001f4c95;
  acStack_98[6] = UNK_001f4c96;
  acStack_98[7] = UNK_001f4c97;
  if ((local_a0 < "imulcastAndroidEncoderFactory") &&
     ("SimulcastAndroidEncoderFactory" < local_a0 + 0x1e)) {
LAB_004b7094:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  uVar10 = CONCAT26(s_SimulcastAndroidEncoderFactory_001c4ff0._14_2_,
                    s_SimulcastAndroidEncoderFactory_001c4ff0._8_6_);
  local_a0[0x1e] = '\0';
  uVar6 = s_SimulcastAndroidEncoderFactory_001c4ff0._22_8_;
  uVar4 = CONCAT62(s_SimulcastAndroidEncoderFactory_001c4ff0._16_6_,
                   s_SimulcastAndroidEncoderFactory_001c4ff0._14_2_);
  *(undefined8 *)(local_a0 + 8) = uVar10;
  *(undefined8 *)local_a0 = uVar8;
  *(undefined8 *)(local_a0 + 0x16) = uVar6;
  *(undefined8 *)(local_a0 + 0xe) = uVar4;
  plVar7 = (long *)FUN_004a2934();
  FUN_00adb510(&local_78,plVar7,"co/discord/media_engine/DiscordVideoEncoderFactory");
  uVar8 = (**(code **)(*plVar7 + 0x108))(plVar7,local_78,"<init>","(Lorg/webrtc/EglBase$Context;)V")
  ;
  plVar9 = (long *)FUN_004a2934();
  FUN_00adb510(&local_58,plVar9,"co/discord/media_engine/SharedEglBaseContext");
  FUN_00adb510(auStack_68,plVar9,"org/webrtc/EglBase");
  uVar10 = (**(code **)(*plVar9 + 0x388))
                     (plVar9,local_58,"getEglContext","()Lorg/webrtc/EglBase$Context;");
  uVar10 = FUN_004aecec(plVar9,local_58,uVar10);
  FUN_00ada608(auStack_68,local_60);
  FUN_00ada608(&local_58,local_50);
  local_58 = FUN_004b8418(plVar7,local_78,uVar8,uVar10);
  local_50 = plVar7;
  uVar8 = FUN_00d0ee9c(plVar7,local_58);
  FUN_00ada608(&local_58,plVar7);
  FUN_00ada608(&local_78,local_70);
  plVar7 = (long *)operator_new(0x10);
  FUN_004b8cd8(plVar7,uVar8);
  puVar2 = (undefined8 *)param_1[2];
  local_88 = plVar7;
  if (puVar2 < (undefined8 *)param_1[3]) {
    if (puVar2 == (undefined8 *)0x0) goto LAB_004b70e4;
    puVar2[2] = uStack_90;
    puVar11 = puVar2 + 4;
    puVar2[1] = acStack_98;
    *puVar2 = local_a0;
    local_a0 = (char *)0x0;
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    uStack_90 = 0;
    local_88 = (long *)0x0;
    puVar2[3] = plVar7;
    param_1[2] = puVar11;
  }
  else {
    FUN_004b8290(puVar12,&local_a0);
    puVar11 = (undefined8 *)param_1[2];
  }
  plVar7 = local_88;
  if ((undefined8 *)*puVar12 != puVar11) {
    local_88 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x30))();
    }
    if (uStack_90 < 0) {
      operator_delete(local_a0);
    }
    uStack_90 = CONCAT17(0x14,(undefined7)uStack_90);
    if ((&local_a0 < "ebRtcEncoderFactory") &&
       ("WebRtcEncoderFactory" < (char *)((long)&uStack_90 + 4U))) goto LAB_004b7094;
    uVar5 = (ulong)uStack_90 >> 0x20;
    acStack_98[0] = s_WebRtcEncoderFactory_001c500f[8];
    acStack_98[1] = s_WebRtcEncoderFactory_001c500f[9];
    acStack_98[2] = s_WebRtcEncoderFactory_001c500f[10];
    acStack_98[3] = s_WebRtcEncoderFactory_001c500f[0xb];
    acStack_98[4] = s_WebRtcEncoderFactory_001c500f[0xc];
    acStack_98[5] = s_WebRtcEncoderFactory_001c500f[0xd];
    acStack_98[6] = s_WebRtcEncoderFactory_001c500f[0xe];
    acStack_98[7] = s_WebRtcEncoderFactory_001c500f[0xf];
    local_a0 = (char *)s_WebRtcEncoderFactory_001c500f._0_8_;
    uStack_90 = CONCAT44((uint)uVar5 & 0xffffff00,0x79726f74);
    plVar7 = (long *)operator_new(0x10);
    puVar2 = (undefined8 *)param_1[2];
    puVar11 = (undefined8 *)param_1[3];
    puVar1 = PTR_DAT_00d51c60 + 0x10;
    *plVar7 = (long)(PTR_DAT_00d51c58 + 0x10);
    plVar7[1] = (long)puVar1;
    local_88 = plVar7;
    if (puVar2 < puVar11) {
      if (puVar2 == (undefined8 *)0x0) {
LAB_004b70e4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x23,"__location != nullptr","null pointer given to construct_at");
      }
      puVar2[2] = uStack_90;
      puVar11 = puVar2 + 4;
      puVar2[1] = acStack_98;
      *puVar2 = local_a0;
      local_a0 = (char *)0x0;
      acStack_98[0] = '\0';
      acStack_98[1] = '\0';
      acStack_98[2] = '\0';
      acStack_98[3] = '\0';
      acStack_98[4] = '\0';
      acStack_98[5] = '\0';
      acStack_98[6] = '\0';
      acStack_98[7] = '\0';
      uStack_90 = 0;
      local_88 = (long *)0x0;
      puVar2[3] = plVar7;
      param_1[2] = puVar11;
    }
    else {
      FUN_004b8290(puVar12,&local_a0);
      puVar11 = (undefined8 *)param_1[2];
    }
    plVar7 = local_88;
    if ((undefined8 *)*puVar12 != puVar11) {
      local_88 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x30))();
      }
      if (uStack_90 < 0) {
        operator_delete(local_a0);
      }
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,"!empty()",
             "back() called on an empty vector");
}


// ===== 004b7110  FUN_004b7110 =====

void FUN_004b7110(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  void *local_60;
  void *local_58;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar1 = *(long *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x10);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x20) {
    (**(code **)**(undefined8 **)(lVar1 + 0x18))(&local_60);
    FUN_004b71e4(param_1,param_1[1],local_60,local_58);
    pvVar5 = local_60;
    pvVar4 = local_58;
    if (local_60 != (void *)0x0) {
      while (pvVar4 != pvVar5) {
        FUN_007b6d78((void *)((long)pvVar4 + -0x60));
        pvVar4 = (void *)((long)pvVar4 + -0x60);
      }
      local_58 = pvVar5;
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b71e4  FUN_004b71e4 =====

void * FUN_004b71e4(long *param_1,long param_2,long param_3,long param_4)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  long lVar12;
  long lVar13;
  
  pvVar11 = (void *)*param_1;
  lVar2 = (param_2 - (long)pvVar11) / 0x60;
  pvVar7 = (void *)((long)pvVar11 + lVar2 * 0x60);
  if (0 < param_4 - param_3) {
    pvVar3 = (void *)param_1[1];
    lVar12 = (param_4 - param_3) / 0x60;
    if ((param_1[2] - (long)pvVar3 >> 5) * -0x5555555555555555 < lVar12) {
      uVar5 = lVar12 + ((long)pvVar3 - (long)pvVar11 >> 5) * -0x5555555555555555;
      if (0x2aaaaaaaaaaaaaa < uVar5) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_1[2] - (long)pvVar11 >> 5;
      uVar6 = lVar4 * 0x5555555555555556;
      if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
        uVar6 = uVar5;
      }
      if (0x155555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
        uVar6 = 0x2aaaaaaaaaaaaaa;
      }
      if (uVar6 == 0) {
        pvVar3 = (void *)0x0;
      }
      else {
        if (0x2aaaaaaaaaaaaaa < uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_00401ad4();
        }
        pvVar3 = operator_new(uVar6 * 0x60);
      }
      pvVar8 = (void *)((long)pvVar3 + lVar2 * 0x60);
      pvVar9 = pvVar7;
      pvVar1 = pvVar8;
      pvVar10 = pvVar8;
      if (param_4 != param_3) {
        pvVar10 = (void *)((long)pvVar8 + lVar12 * 0x60);
        lVar12 = lVar12 * 0x60;
        pvVar11 = pvVar8;
        do {
          if (pvVar11 == (void *)0x0) goto LAB_004b7528;
          FUN_007b69e0(pvVar11,param_3);
          pvVar11 = (void *)((long)pvVar11 + 0x60);
          param_3 = param_3 + 0x60;
          lVar12 = lVar12 + -0x60;
        } while (lVar12 != 0);
        pvVar11 = (void *)*param_1;
      }
      while (pvVar11 != pvVar9) {
        FUN_007b6ad4((void *)((long)pvVar1 + -0x60),(void *)((long)pvVar9 + -0x60));
        pvVar9 = (void *)((long)pvVar9 + -0x60);
        pvVar1 = (void *)((long)pvVar1 + -0x60);
      }
      pvVar11 = (void *)param_1[1];
      if (pvVar11 != pvVar7) {
        do {
          if (pvVar10 == (void *)0x0) goto LAB_004b7528;
          FUN_007b6ad4(pvVar10,pvVar7);
          pvVar7 = (void *)((long)pvVar7 + 0x60);
          pvVar10 = (void *)((long)pvVar10 + 0x60);
        } while (pvVar7 != pvVar11);
        pvVar7 = (void *)param_1[1];
      }
      pvVar11 = (void *)*param_1;
      *param_1 = (long)pvVar1;
      param_1[1] = (long)pvVar10;
      param_1[2] = (long)((long)pvVar3 + uVar6 * 0x60);
      while (pvVar7 != pvVar11) {
        pvVar7 = (void *)((long)pvVar7 + -0x60);
        FUN_007b6d78(pvVar7);
      }
      pvVar7 = pvVar8;
      if (pvVar11 != (void *)0x0) {
        operator_delete(pvVar11);
      }
    }
    else {
      lVar4 = (long)pvVar3 - (long)pvVar7 >> 5;
      pvVar10 = pvVar3;
      if (lVar4 * -0x5555555555555555 < lVar12) {
        lVar13 = param_3 + lVar4 * 0x20;
        for (lVar4 = lVar13; lVar4 != param_4; lVar4 = lVar4 + 0x60) {
          if (pvVar10 == (void *)0x0) goto LAB_004b7528;
          FUN_007b69e0(pvVar10,lVar4);
          pvVar10 = (void *)((long)pvVar10 + 0x60);
        }
        param_1[1] = (long)pvVar10;
        param_4 = lVar13;
        if ((long)pvVar3 - (long)pvVar7 < 1) {
          return pvVar7;
        }
      }
      pvVar1 = pvVar10;
      for (pvVar9 = (void *)((long)pvVar10 + lVar12 * -0x60); pvVar9 < pvVar3;
          pvVar9 = (void *)((long)pvVar9 + 0x60)) {
        if (pvVar1 == (void *)0x0) {
LAB_004b7528:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        FUN_007b6ad4(pvVar1,pvVar9);
        pvVar1 = (void *)((long)pvVar1 + 0x60);
      }
      pvVar3 = (void *)((long)pvVar7 + lVar12 * 0x60);
      param_1[1] = (long)pvVar1;
      if (pvVar10 != pvVar3) {
        lVar12 = ((long)pvVar10 - (long)pvVar3 >> 5) * 0x20;
        do {
          pvVar10 = (void *)((long)pvVar10 - 0x60);
          FUN_007b6c74(pvVar10,(long)pvVar11 + lVar12 + lVar2 * 0x60 + -0x60);
          lVar12 = lVar12 + -0x60;
        } while (lVar12 != 0);
      }
      pvVar11 = pvVar7;
      if (param_4 != param_3) {
        do {
          FUN_007b6b54(pvVar11,param_3);
          param_3 = param_3 + 0x60;
          pvVar11 = (void *)((long)pvVar11 + 0x60);
        } while (param_3 != param_4);
      }
    }
  }
  return pvVar7;
}


// ===== 004b7558  FUN_004b7558 =====

/* WARNING: Type propagation algorithm not settling */

long * FUN_004b7558(long param_1,undefined8 param_2,undefined8 param_3)

{
  size_t __n;
  undefined8 *******__s2;
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 auStack_238 [8];
  char *local_230;
  char **ppcStack_228;
  undefined8 local_220;
  char **ppcStack_218;
  undefined8 *local_210;
  undefined8 *local_208;
  char *local_1f8;
  undefined8 uStack_1f0;
  undefined1 *local_1e8;
  void *local_1e0;
  ulong local_1d8;
  ulong local_1d0;
  undefined1 auStack_1c8 [25];
  undefined1 local_1af;
  undefined8 *******local_d0;
  size_t sStack_c8;
  byte local_b9;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  lVar10 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar10 == lVar2) {
    local_1e0 = (void *)0x0;
    local_1d8 = 0;
    local_1d0 = 0;
  }
  else {
    do {
      (**(code **)**(undefined8 **)(lVar10 + 0x18))(&local_210);
      puVar3 = local_208;
      puVar11 = local_210;
      FUN_007b69e0(&local_d0,param_3);
      if (puVar11 != puVar3) {
        __n = sStack_c8;
        if (-1 < (char)local_b9) {
          __n = (ulong)local_b9;
        }
        __s2 = local_d0;
        if (-1 < (char)local_b9) {
          __s2 = &local_d0;
        }
        do {
          bVar4 = *(byte *)((long)puVar11 + 0x17);
          sVar1 = puVar11[1];
          if (-1 < (char)bVar4) {
            sVar1 = (ulong)bVar4;
          }
          if (sVar1 == __n) {
            if ((char)bVar4 < '\0') {
              if ((__n == 0) || (iVar7 = memcmp((void *)*puVar11,__s2,__n), iVar7 == 0)) {
LAB_004b76d0:
                FUN_007b6d78(&local_d0);
                plVar8 = (long *)(**(code **)(**(long **)(lVar10 + 0x18) + 0x18))
                                           (*(long **)(lVar10 + 0x18),param_2,param_3);
                (**(code **)(*plVar8 + 0x60))(&local_1e0);
                uVar9 = FUN_00417e08();
                if ((uVar9 & 1) == 0) {
                  local_1e8 = auStack_238;
                  local_1f8 = "../../discord_native_lib/src/media/video_coding.cpp";
                  uStack_1f0 = 0x689;
                  ppcStack_228 = &local_1f8;
                  local_230 = "Created video encoder, format: ";
                  ppcStack_218 = &local_230;
                  local_220 = param_3;
                  FUN_00623bb0(&DAT_001f7068,"../../discord_native_lib/src/media/video_coding.cpp",
                               0x689,"Created video encoder, format: ",param_3,", from factory: ",
                               lVar10,", encoder name: ",auStack_1c8,", is hardware: ",local_1af,
                               ", from factory: ",&local_220);
                }
                FUN_007b9754(&local_1e0);
                puVar3 = local_210;
                puVar11 = local_208;
                if (local_210 != (undefined8 *)0x0) {
                  while (puVar11 != puVar3) {
                    FUN_007b6d78(puVar11 + -0xc);
                    puVar11 = puVar11 + -0xc;
                  }
                  local_208 = puVar3;
                  operator_delete(local_210);
                }
                goto LAB_004b7820;
              }
            }
            else {
              if (bVar4 == 0) goto LAB_004b76d0;
              uVar9 = 0;
              while (*(char *)((long)puVar11 + uVar9) == *(char *)((long)__s2 + uVar9)) {
                uVar9 = uVar9 + 1;
                if (bVar4 == uVar9) goto LAB_004b76d0;
              }
            }
          }
          puVar11 = puVar11 + 0xc;
        } while (puVar11 != puVar3);
      }
      FUN_007b6d78(&local_d0);
      puVar3 = local_210;
      puVar11 = local_208;
      if (local_210 != (undefined8 *)0x0) {
        while (puVar11 != puVar3) {
          FUN_007b6d78(puVar11 + -0xc);
          puVar11 = puVar11 + -0xc;
        }
        local_208 = puVar3;
        operator_delete(local_210);
      }
      lVar10 = lVar10 + 0x20;
    } while (lVar10 != lVar2);
    puVar11 = *(undefined8 **)(param_1 + 8);
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    local_1e0 = (void *)0x0;
    local_1d8 = 0;
    local_1d0 = 0;
    for (; puVar11 != puVar3; puVar11 = puVar11 + 4) {
      uVar9 = local_1d8;
      if (-1 < (long)local_1d0) {
        uVar9 = local_1d0 >> 0x38;
      }
      if (uVar9 != 0) {
        FUN_00547cac(&local_1e0,&DAT_001e1644,2);
      }
      uVar9 = puVar11[1];
      puVar6 = (undefined8 *)*puVar11;
      if (-1 < (char)*(byte *)((long)puVar11 + 0x17)) {
        uVar9 = (ulong)*(byte *)((long)puVar11 + 0x17);
        puVar6 = puVar11;
      }
      FUN_00547cac(&local_1e0,puVar6,uVar9);
    }
  }
  uVar9 = FUN_004022fc();
  if ((uVar9 & 1) == 0) {
    FUN_00623bb0("\r\t\n\t\n","../../discord_native_lib/src/media/video_coding.cpp",0x702,
                 "Could not create any video encoder, format: ",param_3,", from factories: ",
                 &local_1e0);
  }
  if ((long)local_1d0 < 0) {
    operator_delete(local_1e0);
  }
  plVar8 = (long *)0x0;
LAB_004b7820:
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return plVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b78b0  FUN_004b78b0 =====

void FUN_004b78b0(undefined8 *param_1)

{
  undefined *puVar1;
  char *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  void *local_a0;
  char acStack_98 [8];
  undefined4 uStack_90;
  char cStack_8c;
  char cStack_8b;
  undefined1 uStack_8a;
  char cStack_89;
  long *local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  *param_1 = &PTR_FUN_00d1e940;
  cStack_89 = '\x15';
  param_1[2] = 0;
  param_1[3] = 0;
  puVar9 = param_1 + 1;
  *puVar9 = 0;
  if ((&local_a0 < "ndroidDecoderFactory") && ("AndroidDecoderFactory" < &cStack_8b)) {
LAB_004b7bbc:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  cStack_8b = '\0';
  acStack_98[0] = s_AndroidDecoderFactory_001e196a[8];
  acStack_98[1] = s_AndroidDecoderFactory_001e196a[9];
  acStack_98[2] = s_AndroidDecoderFactory_001e196a[10];
  acStack_98[3] = s_AndroidDecoderFactory_001e196a[0xb];
  acStack_98[4] = s_AndroidDecoderFactory_001e196a[0xc];
  local_a0 = (void *)s_AndroidDecoderFactory_001e196a._0_8_;
  acStack_98[5] = s_AndroidDecoderFactory_001e196a[0xd];
  acStack_98[6] = s_AndroidDecoderFactory_001e196a[0xe];
  acStack_98[7] = s_AndroidDecoderFactory_001e196a[0xf];
  uStack_90 = (undefined4)s_AndroidDecoderFactory_001e196a._16_5_;
  cStack_8c = SUB51(s_AndroidDecoderFactory_001e196a._16_5_,4);
  plVar4 = (long *)FUN_004a2934();
  FUN_00adb510(&local_78,plVar4,"co/discord/media_engine/DiscordVideoDecoderFactory");
  uVar5 = (**(code **)(*plVar4 + 0x108))(plVar4,local_78,"<init>","(Lorg/webrtc/EglBase$Context;)V")
  ;
  plVar6 = (long *)FUN_004a2934();
  FUN_00adb510(&local_58,plVar6,"co/discord/media_engine/SharedEglBaseContext");
  FUN_00adb510(auStack_68,plVar6,"org/webrtc/EglBase");
  uVar7 = (**(code **)(*plVar6 + 0x388))
                    (plVar6,local_58,"getEglContext","()Lorg/webrtc/EglBase$Context;");
  uVar7 = FUN_004aecec(plVar6,local_58,uVar7);
  FUN_00ada608(auStack_68,local_60);
  FUN_00ada608(&local_58,local_50);
  local_58 = FUN_004b8418(plVar4,local_78,uVar5,uVar7);
  local_50 = plVar4;
  plVar6 = (long *)FUN_00d0ee50(plVar4,local_58);
  FUN_00ada608(&local_58,plVar4);
  FUN_00ada608(&local_78,local_70);
  pcVar2 = (char *)param_1[2];
  local_88 = plVar6;
  if (pcVar2 < (char *)param_1[3]) {
    if (pcVar2 == (char *)0x0) goto LAB_004b7c0c;
    *(ulong *)(pcVar2 + 0x10) =
         CONCAT17(cStack_89,CONCAT16(uStack_8a,CONCAT15(cStack_8b,CONCAT14(cStack_8c,uStack_90))));
    pcVar8 = pcVar2 + 0x20;
    *(ulong *)(pcVar2 + 8) = CONCAT35(acStack_98._5_3_,acStack_98._0_5_);
    *(void **)pcVar2 = local_a0;
    local_a0 = (void *)0x0;
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    uStack_90 = 0;
    cStack_8c = '\0';
    cStack_8b = '\0';
    uStack_8a = 0;
    cStack_89 = '\0';
    local_88 = (long *)0x0;
    *(long **)(pcVar2 + 0x18) = plVar6;
    param_1[2] = pcVar8;
  }
  else {
    FUN_004b84b4(puVar9,&local_a0);
    pcVar8 = (char *)param_1[2];
  }
  plVar4 = local_88;
  if ((char *)*puVar9 != pcVar8) {
    local_88 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    if (cStack_89 < '\0') {
      operator_delete(local_a0);
    }
    cStack_89 = '\x14';
    if ((&local_a0 < "ebRtcDecoderFactory") && ("WebRtcDecoderFactory" < &cStack_8c))
    goto LAB_004b7bbc;
    cStack_8c = '\0';
    acStack_98._0_5_ = (undefined5)s_WebRtcDecoderFactory_001d04fe._8_8_;
    acStack_98._5_3_ = SUB83(s_WebRtcDecoderFactory_001d04fe._8_8_,5);
    local_a0 = (void *)s_WebRtcDecoderFactory_001d04fe._0_8_;
    uStack_90 = 0x79726f74;
    plVar4 = (long *)operator_new(0x10);
    pcVar2 = (char *)param_1[2];
    pcVar8 = (char *)param_1[3];
    puVar1 = PTR_DAT_00d51c70 + 0x10;
    *plVar4 = (long)(PTR_DAT_00d51c68 + 0x10);
    plVar4[1] = (long)puVar1;
    local_88 = plVar4;
    if (pcVar2 < pcVar8) {
      if (pcVar2 == (char *)0x0) {
LAB_004b7c0c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x23,"__location != nullptr","null pointer given to construct_at");
      }
      *(ulong *)(pcVar2 + 0x10) =
           CONCAT17(cStack_89,CONCAT16(uStack_8a,CONCAT15(cStack_8b,CONCAT14(cStack_8c,uStack_90))))
      ;
      pcVar8 = pcVar2 + 0x20;
      *(ulong *)(pcVar2 + 8) = CONCAT35(acStack_98._5_3_,acStack_98._0_5_);
      *(void **)pcVar2 = local_a0;
      local_a0 = (void *)0x0;
      acStack_98[0] = '\0';
      acStack_98[1] = '\0';
      acStack_98[2] = '\0';
      acStack_98[3] = '\0';
      acStack_98[4] = '\0';
      acStack_98[5] = '\0';
      acStack_98[6] = '\0';
      acStack_98[7] = '\0';
      uStack_90 = 0;
      cStack_8c = '\0';
      cStack_8b = '\0';
      uStack_8a = 0;
      cStack_89 = '\0';
      local_88 = (long *)0x0;
      *(long **)(pcVar2 + 0x18) = plVar4;
      param_1[2] = pcVar8;
    }
    else {
      FUN_004b84b4(puVar9,&local_a0);
      pcVar8 = (char *)param_1[2];
    }
    plVar4 = local_88;
    if ((char *)*puVar9 != pcVar8) {
      local_88 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if (cStack_89 < '\0') {
        operator_delete(local_a0);
      }
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,"!empty()",
             "back() called on an empty vector");
}


// ===== 004b7c38  FUN_004b7c38 =====

void FUN_004b7c38(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  void *local_60;
  void *local_58;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar1 = *(long *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x10);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x20) {
    (**(code **)(**(long **)(lVar1 + 0x18) + 0x10))(&local_60);
    FUN_004b71e4(param_1,param_1[1],local_60,local_58);
    pvVar5 = local_60;
    pvVar4 = local_58;
    if (local_60 != (void *)0x0) {
      while (pvVar4 != pvVar5) {
        FUN_007b6d78((void *)((long)pvVar4 + -0x60));
        pvVar4 = (void *)((long)pvVar4 + -0x60);
      }
      local_58 = pvVar5;
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b7d0c  FUN_004b7d0c =====

/* WARNING: Removing unreachable block (ram,0x004b7e34) */
/* WARNING: Removing unreachable block (ram,0x004b7f00) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void * FUN_004b7d0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  void *pvVar9;
  void *local_c0 [2];
  char local_a9;
  undefined1 auStack_a8 [8];
  char *local_a0;
  char **ppcStack_98;
  char *local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined8 local_78;
  ulong local_70;
  ulong local_68;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar8 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar8 == lVar2) {
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
  }
  else {
    do {
      plVar6 = (long *)(**(code **)(**(long **)(lVar8 + 0x18) + 0x20))
                                 (*(long **)(lVar8 + 0x18),param_2,param_3);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(&local_78);
        uVar7 = FUN_00417e08();
        if ((uVar7 & 1) == 0) {
          local_80 = auStack_a8;
          local_90 = "../../discord_native_lib/src/media/video_coding.cpp";
          uStack_88 = 0x929;
          ppcStack_98 = &local_90;
          local_a0 = "Created video decoder, format: ";
          FUN_007b9088(local_c0,&local_78);
          FUN_00623bb0("\r\t\n\t\n\t\n",*ppcStack_98,ppcStack_98[1],local_a0,param_3,
                       " from factory: ",lVar8,&DAT_001e1644,local_c0);
          if (local_a9 < '\0') {
            operator_delete(local_c0[0]);
          }
        }
        pvVar9 = operator_new(0x60);
        FUN_004d62b0(pvVar9,plVar6,param_3);
        goto LAB_004b7f08;
      }
      lVar8 = lVar8 + 0x20;
    } while (lVar8 != lVar2);
    puVar1 = *(undefined8 **)(param_1 + 8);
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    for (; puVar1 != puVar3; puVar1 = puVar1 + 4) {
      uVar7 = local_70;
      if (-1 < (long)local_68) {
        uVar7 = local_68 >> 0x38;
      }
      if (uVar7 != 0) {
        FUN_00547cac(&local_78,&DAT_001e1644,2);
      }
      uVar7 = puVar1[1];
      puVar5 = (undefined8 *)*puVar1;
      if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
        uVar7 = (ulong)*(byte *)((long)puVar1 + 0x17);
        puVar5 = puVar1;
      }
      FUN_00547cac(&local_78,puVar5,uVar7);
    }
  }
  uVar7 = FUN_004249b0();
  if ((uVar7 & 1) == 0) {
    FUN_00623bb0("\r\t\n\t\n","../../discord_native_lib/src/media/video_coding.cpp",0x9bb,
                 "Could not create any video decoder, format: ",param_3,", from factories: ",
                 &local_78);
  }
  pvVar9 = (void *)0x0;
LAB_004b7f08:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pvVar9;
}


// ===== 004b7f3c  FUN_004b7f3c =====

/* WARNING: Removing unreachable block (ram,0x004b7fa8) */

void FUN_004b7f3c(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar3 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d1e940;
  if (pvVar3 != (void *)0x0) {
    pvVar4 = (void *)param_1[2];
    pvVar2 = pvVar3;
    if (pvVar4 != pvVar3) {
      do {
        plVar1 = *(long **)((long)pvVar4 + -8);
        *(undefined8 *)((long)pvVar4 + -8) = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        pvVar4 = (void *)((long)pvVar4 + -0x20);
      } while (pvVar4 != pvVar3);
      pvVar2 = (void *)param_1[1];
    }
    param_1[2] = pvVar3;
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 004b7fdc  FUN_004b7fdc =====

/* WARNING: Removing unreachable block (ram,0x004b8048) */

void FUN_004b7fdc(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar3 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d1e940;
  if (pvVar3 != (void *)0x0) {
    pvVar4 = (void *)param_1[2];
    pvVar2 = pvVar3;
    if (pvVar4 != pvVar3) {
      do {
        plVar1 = *(long **)((long)pvVar4 + -8);
        *(undefined8 *)((long)pvVar4 + -8) = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        pvVar4 = (void *)((long)pvVar4 + -0x20);
      } while (pvVar4 != pvVar3);
      pvVar2 = (void *)param_1[1];
    }
    param_1[2] = pvVar3;
    operator_delete(pvVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 004b8074  FUN_004b8074 =====

void FUN_004b8074(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b807c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}


// ===== 004b8080  FUN_004b8080 =====

uint FUN_004b8080(undefined8 *param_1,undefined8 param_2,long param_3)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  void *local_50;
  void *local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(char *)(param_3 + 0x18) == '\0') {
    (**(code **)*param_1)(&local_50);
    pvVar1 = (void *)0x0;
    if ((long)local_48 - (long)local_50 != 0) {
      pvVar1 = local_50;
    }
    uVar3 = FUN_007b7244(param_2,pvVar1,((long)local_48 - (long)local_50 >> 5) * -0x5555555555555555
                        );
    pvVar1 = local_50;
    uVar3 = uVar3 & 1;
    if (local_50 != (void *)0x0) {
      while (local_48 != pvVar1) {
        FUN_007b6d78((void *)((long)local_48 + -0x60));
        local_48 = (void *)((long)local_48 + -0x60);
      }
      local_48 = pvVar1;
      operator_delete(local_50);
    }
  }
  else {
    uVar3 = 0;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


// ===== 004b8150  FUN_004b8150 =====

undefined8 FUN_004b8150(void)

{
  return 0;
}


// ===== 004b8158  FUN_004b8158 =====

/* WARNING: Removing unreachable block (ram,0x004b81c4) */

void FUN_004b8158(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar3 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d1e8f8;
  if (pvVar3 != (void *)0x0) {
    pvVar4 = (void *)param_1[2];
    pvVar2 = pvVar3;
    if (pvVar4 != pvVar3) {
      do {
        plVar1 = *(long **)((long)pvVar4 + -8);
        *(undefined8 *)((long)pvVar4 + -8) = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x30))();
        }
        pvVar4 = (void *)((long)pvVar4 + -0x20);
      } while (pvVar4 != pvVar3);
      pvVar2 = (void *)param_1[1];
    }
    param_1[2] = pvVar3;
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 004b81f8  FUN_004b81f8 =====

/* WARNING: Removing unreachable block (ram,0x004b8264) */

void FUN_004b81f8(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar3 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d1e8f8;
  if (pvVar3 != (void *)0x0) {
    pvVar4 = (void *)param_1[2];
    pvVar2 = pvVar3;
    if (pvVar4 != pvVar3) {
      do {
        plVar1 = *(long **)((long)pvVar4 + -8);
        *(undefined8 *)((long)pvVar4 + -8) = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x30))();
        }
        pvVar4 = (void *)((long)pvVar4 + -0x20);
      } while (pvVar4 != pvVar3);
      pvVar2 = (void *)param_1[1];
    }
    param_1[2] = pvVar3;
    operator_delete(pvVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 004b8290  FUN_004b8290 =====

/* WARNING: Removing unreachable block (ram,0x004b83c0) */

void FUN_004b8290(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *pvVar9;
  undefined8 uVar10;
  void *pvVar11;
  void *pvVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar13 = param_1[1] - *param_1 >> 5;
  uVar1 = lVar13 + 1;
  if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar5 = param_1[2] - *param_1;
  uVar6 = uVar5 >> 4;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  if (0x7fffffffffffffdf < uVar5) {
    uVar6 = 0x7ffffffffffffff;
  }
  if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  if (uVar6 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  pvVar3 = operator_new(uVar6 * 0x20);
  uVar15 = param_2[1];
  uVar14 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uVar10 = param_2[2];
  uVar16 = param_2[3];
  param_2[2] = 0;
  param_2[3] = 0;
  puVar2 = (undefined8 *)((long)pvVar3 + lVar13 * 0x20);
  pvVar11 = (void *)*param_1;
  pvVar12 = (void *)param_1[1];
  pvVar3 = (void *)((long)pvVar3 + uVar6 * 0x20);
  puVar2[1] = uVar15;
  *puVar2 = uVar14;
  puVar2[2] = uVar10;
  puVar2[3] = uVar16;
  puVar7 = puVar2;
  if (pvVar12 == pvVar11) {
    *param_1 = (long)puVar2;
    param_1[1] = (long)(puVar2 + 4);
    param_1[2] = (long)pvVar3;
  }
  else {
    do {
      uVar16 = *(undefined8 *)((long)pvVar12 + -0x18);
      uVar10 = *(undefined8 *)((long)pvVar12 + -0x20);
      pvVar9 = (void *)((long)pvVar12 + -0x20);
      puVar7[-2] = *(undefined8 *)((long)pvVar12 + -0x10);
      puVar8 = puVar7 + -4;
      puVar7[-3] = uVar16;
      puVar7[-4] = uVar10;
      *(undefined8 *)((long)pvVar12 + -0x20) = 0;
      *(undefined8 *)((long)pvVar12 + -0x18) = 0;
      uVar10 = *(undefined8 *)((long)pvVar12 + -8);
      *(undefined8 *)((long)pvVar12 + -0x10) = 0;
      *(undefined8 *)((long)pvVar12 + -8) = 0;
      puVar7[-1] = uVar10;
      puVar7 = puVar8;
      pvVar12 = pvVar9;
    } while (pvVar9 != pvVar11);
    pvVar12 = (void *)*param_1;
    pvVar11 = (void *)param_1[1];
    *param_1 = (long)puVar8;
    param_1[1] = (long)(puVar2 + 4);
    param_1[2] = (long)pvVar3;
    for (; pvVar11 != pvVar12; pvVar11 = (void *)((long)pvVar11 + -0x20)) {
      plVar4 = *(long **)((long)pvVar11 + -8);
      *(undefined8 *)((long)pvVar11 + -8) = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x30))();
      }
    }
  }
  if (pvVar12 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar12);
  return;
}


// ===== 004b8418  FUN_004b8418 =====

void FUN_004b8418(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
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
  
  ppuStack_68 = &local_70;
  puStack_60 = auStack_a0;
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uStack_58 = 0xffffff80ffffffd8;
  local_98 = param_4;
  uStack_90 = param_5;
  local_88 = param_6;
  uStack_80 = param_7;
  local_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  (**(code **)(*param_1 + 0xe8))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b84b4  FUN_004b84b4 =====

/* WARNING: Removing unreachable block (ram,0x004b85e4) */

void FUN_004b84b4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *pvVar9;
  undefined8 uVar10;
  void *pvVar11;
  void *pvVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar13 = param_1[1] - *param_1 >> 5;
  uVar1 = lVar13 + 1;
  if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar5 = param_1[2] - *param_1;
  uVar6 = uVar5 >> 4;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  if (0x7fffffffffffffdf < uVar5) {
    uVar6 = 0x7ffffffffffffff;
  }
  if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  if (uVar6 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  pvVar3 = operator_new(uVar6 * 0x20);
  uVar15 = param_2[1];
  uVar14 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uVar10 = param_2[2];
  uVar16 = param_2[3];
  param_2[2] = 0;
  param_2[3] = 0;
  puVar2 = (undefined8 *)((long)pvVar3 + lVar13 * 0x20);
  pvVar11 = (void *)*param_1;
  pvVar12 = (void *)param_1[1];
  pvVar3 = (void *)((long)pvVar3 + uVar6 * 0x20);
  puVar2[1] = uVar15;
  *puVar2 = uVar14;
  puVar2[2] = uVar10;
  puVar2[3] = uVar16;
  puVar7 = puVar2;
  if (pvVar12 == pvVar11) {
    *param_1 = (long)puVar2;
    param_1[1] = (long)(puVar2 + 4);
    param_1[2] = (long)pvVar3;
  }
  else {
    do {
      uVar16 = *(undefined8 *)((long)pvVar12 + -0x18);
      uVar10 = *(undefined8 *)((long)pvVar12 + -0x20);
      pvVar9 = (void *)((long)pvVar12 + -0x20);
      puVar7[-2] = *(undefined8 *)((long)pvVar12 + -0x10);
      puVar8 = puVar7 + -4;
      puVar7[-3] = uVar16;
      puVar7[-4] = uVar10;
      *(undefined8 *)((long)pvVar12 + -0x20) = 0;
      *(undefined8 *)((long)pvVar12 + -0x18) = 0;
      uVar10 = *(undefined8 *)((long)pvVar12 + -8);
      *(undefined8 *)((long)pvVar12 + -0x10) = 0;
      *(undefined8 *)((long)pvVar12 + -8) = 0;
      puVar7[-1] = uVar10;
      puVar7 = puVar8;
      pvVar12 = pvVar9;
    } while (pvVar9 != pvVar11);
    pvVar12 = (void *)*param_1;
    pvVar11 = (void *)param_1[1];
    *param_1 = (long)puVar8;
    param_1[1] = (long)(puVar2 + 4);
    param_1[2] = (long)pvVar3;
    for (; pvVar11 != pvVar12; pvVar11 = (void *)((long)pvVar11 + -0x20)) {
      plVar4 = *(long **)((long)pvVar11 + -8);
      *(undefined8 *)((long)pvVar11 + -8) = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  if (pvVar12 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar12);
  return;
}


// ===== 004b863c  FUN_004b863c =====

void FUN_004b863c(long *param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  void *__src;
  ulong uVar3;
  ulong uVar4;
  void *__dest;
  undefined8 uVar5;
  char *pcVar6;
  ulong __n;
  long lVar7;
  long lVar8;
  long *local_80;
  long local_78 [2];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((long *)*param_2 == (long *)0x0) {
LAB_004b8804:
    *param_1 = 0;
  }
  else {
    __src = (void *)(**(code **)(*(long *)*param_2 + 0x20))();
    uVar3 = (**(code **)(*(long *)*param_2 + 0x28))();
    if (uVar3 != 0) {
      __n = 0;
      do {
        bVar1 = *(byte *)((long)__src + __n);
        if ((char)bVar1 < '\0') {
          uVar3 = FUN_004022fc();
          if ((uVar3 & 1) == 0) {
            pcVar6 = "Malformed OBU stream: sync bit flipped at ";
            uVar5 = 0x1d2;
LAB_004b87fc:
            FUN_00623bb0(&DAT_001f6643,"../../discord_native_lib/src/media/video_coding/av1.cpp",
                         uVar5,pcVar6,__n);
          }
          goto LAB_004b8804;
        }
        lVar7 = __n + 1;
        lVar8 = lVar7;
        if ((bVar1 >> 2 & 1) != 0) {
          if (uVar3 - lVar7 < 2) {
            uVar3 = FUN_004022fc();
            if ((uVar3 & 1) == 0) {
              pcVar6 = "Malformed OBU stream: header overflows buffer at ";
              uVar5 = 0x22a;
              goto LAB_004b87fc;
            }
            goto LAB_004b8804;
          }
          lVar8 = __n + 2;
        }
        if ((bVar1 >> 1 & 1) == 0) {
          uVar4 = FUN_0050df74(uVar3 - lVar8,local_78);
          if (CARRY8(uVar4,uVar3)) {
            uVar3 = FUN_004022fc();
            if ((uVar3 & 1) == 0) {
              pcVar6 = "Malformed OBU stream: payload overflows frame at ";
              uVar5 = 0x31a;
              goto LAB_004b87fc;
            }
            goto LAB_004b8804;
          }
          FUN_007bc600(&local_80,uVar4 + uVar3);
          if (local_80 != (long *)0x0) {
            __dest = (void *)FUN_007bc78c();
            memcpy(__dest,__src,__n);
            *(byte *)((long)__dest + __n) = bVar1 | 2;
            if ((bVar1 >> 2 & 1) != 0) {
              *(undefined1 *)((long)__dest + lVar7) = *(undefined1 *)((long)__src + lVar7);
              lVar7 = __n + 2;
            }
            memcpy((void *)((long)__dest + lVar7),local_78,uVar4);
            memcpy((void *)((long)__dest + lVar7 + uVar4),(void *)((long)__src + lVar7),
                   uVar3 - lVar8);
            goto LAB_004b8718;
          }
          uVar3 = FUN_004022fc();
          if ((uVar3 & 1) == 0) {
            FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/video_coding/av1.cpp",
                         0x34a,"Failed to create OBU stream output buffer");
          }
          *param_1 = 0;
          if (local_80 != (long *)0x0) {
            (**(code **)(*local_80 + 8))();
          }
          goto LAB_004b8808;
        }
        local_78[0] = (long)__src + lVar8;
        uVar4 = FUN_0050defc(local_78,(long)__src + uVar3);
        if (local_78[0] == 0) {
          uVar3 = FUN_004022fc();
          if ((uVar3 & 1) == 0) {
            pcVar6 = "Malformed OBU stream: invalid Leb128 value at ";
            uVar5 = 0x292;
            goto LAB_004b87fc;
          }
          goto LAB_004b8804;
        }
        lVar8 = (local_78[0] - ((long)__src + lVar8)) + lVar8;
        if (uVar3 - lVar8 < uVar4) {
          uVar3 = FUN_004022fc();
          if ((uVar3 & 1) == 0) {
            pcVar6 = "Malformed OBU stream: payload overflows frame at ";
            uVar5 = 0x3f2;
            goto LAB_004b87fc;
          }
          goto LAB_004b8804;
        }
        __n = lVar8 + uVar4;
      } while (__n < uVar3);
    }
    local_80 = (long *)*param_2;
    *param_2 = 0;
LAB_004b8718:
    *param_1 = (long)local_80;
  }
LAB_004b8808:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b88f0  FUN_004b88f0 =====

void FUN_004b88f0(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  FUN_009cf448(param_2 + 8);
  uVar3 = *param_1;
  uVar1 = param_1[1];
  do {
    uVar2 = uVar1;
    if (uVar3 == uVar1) {
LAB_004b8934:
      uVar3 = param_1[1];
      if (uVar2 <= uVar3) {
        if (uVar2 != uVar3) {
          if (uVar2 + (uVar3 - uVar2) != uVar3) {
            lVar5 = ((long)(uVar3 - uVar2) >> 5) * 0x20;
            do {
              FUN_007b6c74(uVar2,uVar2 + lVar5);
              uVar2 = uVar2 + 0x60;
            } while (uVar2 + lVar5 != uVar3);
            uVar3 = param_1[1];
          }
          while (uVar3 != uVar2) {
            uVar3 = uVar3 - 0x60;
            FUN_007b6d78(uVar3);
          }
          param_1[1] = uVar2;
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x644,
                 "__first <= __last","vector::erase(first, last) called with invalid range");
    }
    uVar2 = FUN_004b9100(uVar3);
    if ((uVar2 & 1) != 0) {
      uVar2 = uVar3;
      uVar4 = uVar3;
      if (uVar3 != uVar1) {
        while (uVar4 = uVar4 + 0x60, uVar2 = uVar3, uVar4 != uVar1) {
          uVar2 = FUN_004b9100(uVar4);
          if ((uVar2 & 1) == 0) {
            FUN_007b6c74(uVar3,uVar4);
            uVar3 = uVar3 + 0x60;
          }
        }
      }
      goto LAB_004b8934;
    }
    uVar3 = uVar3 + 0x60;
  } while( true );
}


// ===== 004b8a1c  FUN_004b8a1c =====

void FUN_004b8a1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  void *local_50 [2];
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_007b8cec(param_3);
  if (iVar2 == 3) {
    uVar3 = 0;
  }
  else {
    uVar4 = FUN_00417e08();
    if ((uVar4 & 1) == 0) {
      FUN_007b6dd8(local_50,param_3);
      FUN_00623bb0(&DAT_001f4e90,
                   "../../discord_native_lib/src/media/video_coding/decoding/webrtc_decoder_factory.cpp"
                   ,0x389,"Creating webrtc based video decoder, format: ",local_50);
      if (local_39 < '\0') {
        operator_delete(local_50[0]);
      }
    }
    uVar3 = FUN_009cf7b4(param_1 + 8,param_2,param_3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 004b8ae0  FUN_004b8ae0 =====

void FUN_004b8ae0(void)

{
  return;
}


// ===== 004b8ae4  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004b8ae8  FUN_004b8ae8 =====

undefined8 FUN_004b8ae8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 004b8af0  FUN_004b8af0 =====

undefined8 FUN_004b8af0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 004b8af8  FUN_004b8af8 =====

void FUN_004b8af8(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  
  if ((*(long **)(param_2 + 0x88) == (long *)0x0) ||
     (lVar3 = (**(code **)(**(long **)(param_2 + 0x88) + 0x20))(), lVar3 == 0)) {
    *param_1 = 0;
  }
  else {
    plVar8 = *(long **)(param_2 + 0x88);
    if (plVar8 == (long *)0x0) {
      uVar4 = *(undefined8 *)(param_2 + 0x90);
      puVar5 = (undefined8 *)operator_new(0x28);
      puVar5[1] = 0;
      puVar5[2] = uVar4;
      puVar5[3] = 0;
    }
    else {
      (**(code **)*plVar8)(plVar8);
      if (*(long **)(param_2 + 0x88) == (long *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(**(long **)(param_2 + 0x88) + 0x20))();
      }
      uVar9 = *(undefined8 *)(param_2 + 0x90);
      puVar5 = (undefined8 *)operator_new(0x28);
      puVar6 = (undefined8 *)*plVar8;
      puVar5[1] = plVar8;
      (*(code *)*puVar6)(plVar8);
      lVar3 = *plVar8;
      puVar5[2] = uVar9;
      puVar5[3] = uVar4;
      (**(code **)(lVar3 + 8))(plVar8);
    }
    *param_1 = puVar5;
    piVar7 = (int *)(puVar5 + 4);
    *piVar7 = 0;
    *puVar5 = &PTR_FUN_00d1e9f0;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return;
}


// ===== 004b8bfc  FUN_004b8bfc =====

void FUN_004b8bfc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1e9b0;
  if ((long *)param_1[1] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004b8c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 8))();
    return;
  }
  return;
}


// ===== 004b8c24  FUN_004b8c24 =====

void FUN_004b8c24(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4b8c28);
  (*pcVar1)();
}


// ===== 004b8c28  FUN_004b8c28 =====

void FUN_004b8c28(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0x20);
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


// ===== 004b8c40  FUN_004b8c40 =====

bool FUN_004b8c40(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  plVar1 = param_1 + 4;
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


// ===== 004b8c84  FUN_004b8c84 =====

void FUN_004b8c84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1e9b0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 004b8cc4  FUN_004b8cc4 =====

bool FUN_004b8cc4(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x20) == 1;
}


// ===== 004b8cd8  FUN_004b8cd8 =====

void FUN_004b8cd8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d1ea38;
  param_1[1] = param_2;
  return;
}


// ===== 004b8ce8  FUN_004b8ce8 =====

void FUN_004b8ce8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b8cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 8))();
  return;
}


// ===== 004b8cf8  FUN_004b8cf8 =====

void * FUN_004b8cf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  pvVar1 = operator_new(0x750);
  FUN_009d1220(pvVar1,param_2,uVar2,0,param_3);
  return pvVar1;
}


// ===== 004b8d48  FUN_004b8d48 =====

void FUN_004b8d48(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[1];
  *param_1 = &PTR_FUN_00d1ea38;
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004b8d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  return;
}


// ===== 004b8d70  FUN_004b8d70 =====

void FUN_004b8d70(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[1];
  *param_1 = &PTR_FUN_00d1ea38;
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  operator_delete(param_1);
  return;
}


// ===== 004b8db0  FUN_004b8db0 =====

void FUN_004b8db0(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  FUN_009cfa14(param_2 + 8);
  uVar2 = param_1[1];
  uVar3 = *param_1;
  uVar1 = uVar3;
  for (; uVar3 != uVar2; uVar3 = uVar3 + 0x60) {
    uVar1 = FUN_004b9100(uVar3);
    if ((uVar1 & 1) != 0) {
      uVar1 = uVar3;
      uVar5 = uVar3;
      if (uVar3 != uVar2) {
        while (uVar5 = uVar5 + 0x60, uVar1 = uVar3, uVar5 != uVar2) {
          uVar1 = FUN_004b9100(uVar5);
          if ((uVar1 & 1) == 0) {
            FUN_007b6c74(uVar3,uVar5);
            uVar3 = uVar3 + 0x60;
          }
        }
      }
      break;
    }
    uVar1 = uVar2;
  }
  uVar3 = param_1[1];
  if (uVar1 <= uVar3) {
    if (uVar1 == uVar3) {
      uVar3 = *param_1;
    }
    else {
      if (uVar1 + (uVar3 - uVar1) != uVar3) {
        lVar4 = ((long)(uVar3 - uVar1) >> 5) * 0x20;
        do {
          FUN_007b6c74(uVar1,uVar1 + lVar4);
          uVar1 = uVar1 + 0x60;
        } while (uVar1 + lVar4 != uVar3);
        uVar3 = param_1[1];
      }
      while (uVar3 != uVar1) {
        uVar3 = uVar3 - 0x60;
        FUN_007b6d78(uVar3);
      }
      uVar3 = *param_1;
      param_1[1] = uVar1;
    }
    for (; uVar2 = uVar1, uVar3 != uVar1; uVar3 = uVar3 + 0x60) {
      uVar2 = FUN_004b918c(uVar3);
      if ((uVar2 & 1) != 0) {
        uVar2 = uVar3;
        uVar5 = uVar3;
        if (uVar3 != uVar1) {
          while (uVar5 = uVar5 + 0x60, uVar2 = uVar3, uVar5 != uVar1) {
            uVar2 = FUN_004b918c(uVar5);
            if ((uVar2 & 1) == 0) {
              FUN_007b6c74(uVar3,uVar5);
              uVar3 = uVar3 + 0x60;
            }
          }
        }
        break;
      }
    }
    uVar3 = param_1[1];
    if (uVar2 <= uVar3) {
      if (uVar2 != uVar3) {
        if (uVar2 + (uVar3 - uVar2) != uVar3) {
          lVar4 = ((long)(uVar3 - uVar2) >> 5) * 0x20;
          do {
            FUN_007b6c74(uVar2,uVar2 + lVar4);
            uVar2 = uVar2 + 0x60;
          } while (uVar2 + lVar4 != uVar3);
          uVar3 = param_1[1];
        }
        while (uVar3 != uVar2) {
          uVar3 = uVar3 - 0x60;
          FUN_007b6d78(uVar3);
        }
        param_1[1] = uVar2;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x644,
             "__first <= __last","vector::erase(first, last) called with invalid range");
}


// ===== 004b8fbc  FUN_004b8fbc =====

void FUN_004b8fbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *local_50 [2];
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_007b6dd8(local_50,param_3);
    FUN_00623bb0(&DAT_001f4e90,
                 "../../discord_native_lib/src/media/video_coding/encoding/webrtc_encoder_factory.cpp"
                 ,0x139,"Creating video encoder for: ",local_50);
    if (local_39 < '\0') {
      operator_delete(local_50[0]);
    }
  }
  uVar2 = FUN_004b9100(param_3);
  if (((uVar2 & 1) == 0) && (uVar2 = FUN_004b918c(param_3), (uVar2 & 1) == 0)) {
    uVar3 = FUN_009cfa50(param_1 + 8,param_2,param_3);
  }
  else {
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 004b9088  FUN_004b9088 =====

void FUN_004b9088(void)

{
  return;
}


// ===== 004b908c  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004b9090  FUN_004b9090 =====

void FUN_004b9090(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = (undefined8 *)param_1[2];
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    if (*(char *)((long)puVar1 + 0x27) < '\0') {
      operator_delete((void *)puVar1[2]);
    }
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}


// ===== 004b9100  FUN_004b9100 =====

void FUN_004b9100(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  size_t sVar3;
  
  uVar1 = param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar2 = param_1;
  }
  if (puVar2 == (undefined8 *)0x0 && uVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
               "__len == 0 || __s != nullptr",
               "string_view::string_view(_CharT *, size_t): received nullptr");
  }
  sVar3 = strlen("AV1");
  FUN_0061ff84(puVar2,uVar1,&DAT_001ff30f,sVar3);
  return;
}


// ===== 004b918c  FUN_004b918c =====

void FUN_004b918c(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  size_t sVar3;
  
  uVar1 = param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar2 = param_1;
  }
  if (puVar2 == (undefined8 *)0x0 && uVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
               "__len == 0 || __s != nullptr",
               "string_view::string_view(_CharT *, size_t): received nullptr");
  }
  sVar3 = strlen("VP9");
  FUN_0061ff84(puVar2,uVar1,&DAT_001ff30b,sVar3);
  return;
}


// ===== 004b9218  _INIT_6 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_6(void)

{
  __cxa_atexit(PTR_FUN_00d51ac8,&DAT_00d60f60,&PTR_LOOP_00d19390);
  uRam0000000000d60f90 = 0;
  _DAT_00d60f88 = 0;
  uRam0000000000d60fa0 = 0;
  _DAT_00d60f98 = 0;
  DAT_00d60fa8 = 0x3f800000;
  __cxa_atexit(FUN_004b9090,&DAT_00d60f88,&PTR_LOOP_00d19390);
  uRam0000000000d60fb8 = 0;
  _DAT_00d60fb0 = 0;
  uRam0000000000d60fc8 = 0;
  _DAT_00d60fc0 = 0;
  DAT_00d60fd0 = 0x3f800000;
  __cxa_atexit(FUN_004b9090,&DAT_00d60fb0,&PTR_LOOP_00d19390);
  return;
}


// ===== 004b92a0  FUN_004b92a0 =====

void FUN_004b92a0(ulong *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar3 = FUN_007bf3cc(param_2);
  uVar4 = FUN_007bf3e8(param_2);
  if ((0 < (int)uVar3) && (0 < (int)uVar4)) {
    uVar6 = *param_1;
    do {
      while( true ) {
        uVar5 = (uint)uVar6;
        if ((int)uVar5 <= (int)uVar3) goto LAB_004b9318;
        uVar6 = (ulong)(uint)*param_1;
        if ((uint)*param_1 == uVar5) break;
        ClearExclusiveLocal();
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *(uint *)param_1 = uVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_004b9318:
    param_1 = (ulong *)((long)param_1 + 4);
    uVar6 = *param_1;
    do {
      while( true ) {
        uVar3 = (uint)uVar6;
        if ((int)uVar3 <= (int)uVar4) {
          return;
        }
        uVar6 = (ulong)*(uint *)param_1;
        if (*(uint *)param_1 == uVar3) break;
        ClearExclusiveLocal();
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *(uint *)param_1 = uVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return;
}


