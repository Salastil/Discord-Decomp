// ===== 00bf7168  FUN_00bf7168 =====

void FUN_00bf7168(undefined4 *param_1,undefined8 *param_2,long *param_3)

{
  undefined4 uVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar3 = FUN_007e18fc(param_3);
  if ((uVar3 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00bf733c;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318(param_2 + 9,0x7fffffffffffffff,3000000);
  }
  else {
    FUN_00bf7264(param_2 + 3,*param_2,param_2[1],param_2[2],param_2[8]);
  }
  cVar2 = *(char *)((long)param_2 + 0x37);
  *param_1 = *(undefined4 *)(param_2 + 3);
  if (cVar2 < '\0') {
    FUN_005478d8(param_1 + 2,param_2[4],param_2[5]);
  }
  else {
    uVar5 = param_2[4];
    uVar4 = param_2[6];
    *(undefined8 *)(param_1 + 4) = param_2[5];
    *(undefined8 *)(param_1 + 2) = uVar5;
    *(undefined8 *)(param_1 + 6) = uVar4;
  }
  uVar1 = *(undefined4 *)((long)param_2 + 0x3b);
  param_1[8] = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((long)param_1 + 0x23) = uVar1;
  return;
}


// ===== 00bf7264  FUN_00bf7264 =====

void FUN_00bf7264(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined4 *param_5)

{
  undefined8 ***pppuVar1;
  long *plVar2;
  undefined4 local_48 [2];
  undefined8 **local_40;
  ulong uStack_38;
  undefined7 local_30;
  byte bStack_29;
  undefined4 local_28;
  undefined3 uStack_24;
  
  plVar2 = (long *)(param_2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(param_3 + *plVar2);
  }
  (*param_3)(local_48,plVar2,*param_5);
  plVar2 = (long *)(param_1 + 2);
  *param_1 = local_48[0];
  if (param_1 != local_48) {
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      pppuVar1 = (undefined8 ***)local_40;
      if (-1 < (char)bStack_29) {
        uStack_38 = (ulong)bStack_29;
        pppuVar1 = &local_40;
      }
      FUN_00547f08(plVar2,pppuVar1,uStack_38);
    }
    else if ((char)bStack_29 < '\0') {
      FUN_00547fc0(plVar2,local_40,uStack_38);
    }
    else {
      *(ulong *)(param_1 + 4) = uStack_38;
      *plVar2 = (long)local_40;
      *(ulong *)(param_1 + 6) = CONCAT17(bStack_29,local_30);
    }
  }
  param_1[8] = local_28;
  *(uint *)((long)param_1 + 0x23) = CONCAT31(uStack_24,local_28._3_1_);
  if ((char)bStack_29 < '\0') {
    operator_delete(local_40);
  }
  return;
}


// ===== 00bf733c  FUN_00bf733c =====

void FUN_00bf733c(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_00bf7264(param_1 + 3,*param_1,param_1[1],param_1[2],param_1[8]);
  FUN_0066f2dc(param_1 + 9);
  return;
}


// ===== 00bf7378  FUN_00bf7378 =====

void FUN_00bf7378(undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(*plVar3 + (plVar3[2] >> 1)));
  }
  uVar1 = (*pcVar2)();
  *(int *)(plVar3 + 3) = (int)uVar1;
  *(char *)((long)plVar3 + 0x1c) = (char)((ulong)uVar1 >> 0x20);
  FUN_0066f2dc((long)plVar3 + 0x24);
  return;
}


// ===== 00bf73cc  FUN_00bf73cc =====

void FUN_00bf73cc(undefined4 *param_1,undefined8 *param_2,long *param_3)

{
  undefined4 uVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar3 = FUN_007e18fc(param_3);
  if ((uVar3 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00bf7598;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318((long)param_2 + 0x44,0x7fffffffffffffff,3000000);
  }
  else {
    FUN_00bf74c4(param_2 + 3,*param_2,param_2[1],param_2[2]);
  }
  cVar2 = *(char *)((long)param_2 + 0x37);
  *param_1 = *(undefined4 *)(param_2 + 3);
  if (cVar2 < '\0') {
    FUN_005478d8(param_1 + 2,param_2[4],param_2[5]);
  }
  else {
    uVar5 = param_2[4];
    uVar4 = param_2[6];
    *(undefined8 *)(param_1 + 4) = param_2[5];
    *(undefined8 *)(param_1 + 2) = uVar5;
    *(undefined8 *)(param_1 + 6) = uVar4;
  }
  uVar1 = *(undefined4 *)((long)param_2 + 0x3b);
  param_1[8] = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((long)param_1 + 0x23) = uVar1;
  return;
}


// ===== 00bf74c4  FUN_00bf74c4 =====

void FUN_00bf74c4(undefined4 *param_1,long param_2,code *param_3,ulong param_4)

{
  undefined8 ***pppuVar1;
  long *plVar2;
  undefined4 local_48 [2];
  undefined8 **local_40;
  ulong uStack_38;
  undefined7 local_30;
  byte bStack_29;
  undefined4 local_28;
  undefined3 uStack_24;
  
  plVar2 = (long *)(param_2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(param_3 + *plVar2);
  }
  (*param_3)(local_48,plVar2);
  plVar2 = (long *)(param_1 + 2);
  *param_1 = local_48[0];
  if (param_1 != local_48) {
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      pppuVar1 = (undefined8 ***)local_40;
      if (-1 < (char)bStack_29) {
        uStack_38 = (ulong)bStack_29;
        pppuVar1 = &local_40;
      }
      FUN_00547f08(plVar2,pppuVar1,uStack_38);
    }
    else if ((char)bStack_29 < '\0') {
      FUN_00547fc0(plVar2,local_40,uStack_38);
    }
    else {
      *(ulong *)(param_1 + 4) = uStack_38;
      *plVar2 = (long)local_40;
      *(ulong *)(param_1 + 6) = CONCAT17(bStack_29,local_30);
    }
  }
  param_1[8] = local_28;
  *(uint *)((long)param_1 + 0x23) = CONCAT31(uStack_24,local_28._3_1_);
  if ((char)bStack_29 < '\0') {
    operator_delete(local_40);
  }
  return;
}


// ===== 00bf7598  FUN_00bf7598 =====

void FUN_00bf7598(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_00bf74c4(param_1 + 3,*param_1,param_1[1],param_1[2]);
  FUN_0066f2dc((long)param_1 + 0x44);
  return;
}


// ===== 00bf75d0  FUN_00bf75d0 =====

void FUN_00bf75d0(undefined8 *param_1)

{
  code *pcVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  pcVar1 = (code *)plVar2[1];
  if ((plVar2[2] & 1U) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(*plVar2 + (plVar2[2] >> 1)));
  }
  (*pcVar1)();
  FUN_0066f2dc((long)plVar2 + 0x1c);
  return;
}


// ===== 00bf7614  FUN_00bf7614 =====

void FUN_00bf7614(undefined4 *param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar3 = FUN_007e18fc(param_3);
  if ((uVar3 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00bf77f8;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318(param_2 + 0x48,0x7fffffffffffffff,3000000);
  }
  else {
    FUN_00bf7708(param_2,0);
  }
  cVar2 = *(char *)(param_2 + 0x37);
  *param_1 = *(undefined4 *)(param_2 + 0x18);
  if (cVar2 < '\0') {
    FUN_005478d8(param_1 + 2,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 2) = uVar5;
    *(undefined8 *)(param_1 + 6) = uVar4;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x3b);
  param_1[8] = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((long)param_1 + 0x23) = uVar1;
  return;
}


// ===== 00bf7708  FUN_00bf7708 =====

void FUN_00bf7708(long *param_1)

{
  long *plVar1;
  undefined8 ***pppuVar2;
  code *pcVar3;
  undefined4 local_58 [2];
  undefined8 **local_50;
  ulong uStack_48;
  undefined7 local_40;
  byte bStack_39;
  undefined4 local_38;
  undefined3 uStack_34;
  
  pcVar3 = (code *)param_1[1];
  plVar1 = (long *)(*param_1 + (param_1[2] >> 1));
  if ((param_1[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  (*pcVar3)(local_58,plVar1,*(undefined8 *)param_1[8],((undefined8 *)param_1[8])[1]);
  *(undefined4 *)(param_1 + 3) = local_58[0];
  if (param_1 + 3 != (long *)local_58) {
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      pppuVar2 = (undefined8 ***)local_50;
      if (-1 < (char)bStack_39) {
        uStack_48 = (ulong)bStack_39;
        pppuVar2 = &local_50;
      }
      FUN_00547f08(param_1 + 4,pppuVar2,uStack_48);
    }
    else if ((char)bStack_39 < '\0') {
      FUN_00547fc0(param_1 + 4,local_50,uStack_48);
    }
    else {
      param_1[5] = uStack_48;
      param_1[4] = (long)local_50;
      param_1[6] = CONCAT17(bStack_39,local_40);
    }
  }
  *(undefined4 *)(param_1 + 7) = local_38;
  *(uint *)((long)param_1 + 0x3b) = CONCAT31(uStack_34,local_38._3_1_);
  if ((char)bStack_39 < '\0') {
    operator_delete(local_50);
  }
  return;
}


// ===== 00bf77f8  FUN_00bf77f8 =====

void FUN_00bf77f8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_00bf7708(lVar1,0);
  FUN_0066f2dc(lVar1 + 0x48);
  return;
}


// ===== 00bf782c  FUN_00bf782c =====

void FUN_00bf782c(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long local_50;
  long lStack_48;
  long local_40;
  
  pcVar3 = (code *)param_1[1];
  if ((param_1[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(*param_1 + (param_1[2] >> 1)));
  }
  (*pcVar3)(&local_50);
  puVar4 = (undefined8 *)param_1[3];
  if (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[4];
    puVar1 = puVar4;
    if (puVar4 != puVar2) {
      do {
        puVar2 = puVar2 + -0x14;
        if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        (**(code **)*puVar2)(puVar2);
      } while (puVar2 != puVar4);
      puVar1 = (undefined8 *)param_1[3];
    }
    param_1[4] = (long)puVar4;
    operator_delete(puVar1);
  }
  param_1[4] = lStack_48;
  param_1[3] = local_50;
  param_1[5] = local_40;
  return;
}


// ===== 00bf78f8  FUN_00bf78f8 =====

void FUN_00bf78f8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_00bf782c(lVar1,0);
  FUN_0066f2dc(lVar1 + 0x34);
  return;
}


// ===== 00bf792c  FUN_00bf792c =====

void FUN_00bf792c(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar1 = FUN_007e18fc(param_3);
  if ((uVar1 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00bf7b5c;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318((long)param_2 + 0x34,0x7fffffffffffffff,3000000);
  }
  else {
    FUN_00bf79fc(param_2 + 3,*param_2,param_2[1],param_2[2]);
  }
  uVar4 = param_2[4];
  uVar3 = param_2[3];
  uVar2 = param_2[5];
  param_2[4] = 0;
  param_2[5] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[2] = uVar2;
  param_2[3] = 0;
  return;
}


// ===== 00bf79fc  FUN_00bf79fc =====

void FUN_00bf79fc(undefined8 param_1,long param_2,code *param_3,ulong param_4)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_38;
  void *local_30;
  
  plVar1 = (long *)(param_2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(param_3 + *plVar1);
  }
  (*param_3)(&local_38,plVar1);
  FUN_00bf7aa8(param_1,&local_38);
  pvVar3 = local_38;
  if (local_38 != (void *)0x0) {
    while (pvVar3 != local_30) {
      pvVar2 = (void *)((long)local_30 + -0x28);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_00668d5c(pvVar2);
      local_30 = pvVar2;
    }
    local_30 = pvVar3;
    operator_delete(local_38);
  }
  return;
}


// ===== 00bf7aa8  FUN_00bf7aa8 =====

undefined8 * FUN_00bf7aa8(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[1];
    pvVar1 = pvVar3;
    if (pvVar3 != pvVar2) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0x28);
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_00668d5c(pvVar2);
      } while (pvVar2 != pvVar3);
      pvVar1 = (void *)*param_1;
    }
    param_1[1] = pvVar3;
    operator_delete(pvVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_1;
}


// ===== 00bf7b5c  FUN_00bf7b5c =====

void FUN_00bf7b5c(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_00bf79fc(param_1 + 3,*param_1,param_1[1],param_1[2]);
  FUN_0066f2dc((long)param_1 + 0x34);
  return;
}


// ===== 00bf7b94  FUN_00bf7b94 =====

void FUN_00bf7b94(undefined4 *param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar3 = FUN_007e18fc(param_3);
  if ((uVar3 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00bf7d78;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318(param_2 + 0x48,0x7fffffffffffffff,3000000);
  }
  else {
    FUN_00bf7c88(param_2,0);
  }
  cVar2 = *(char *)(param_2 + 0x37);
  *param_1 = *(undefined4 *)(param_2 + 0x18);
  if (cVar2 < '\0') {
    FUN_005478d8(param_1 + 2,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 2) = uVar5;
    *(undefined8 *)(param_1 + 6) = uVar4;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x3b);
  param_1[8] = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((long)param_1 + 0x23) = uVar1;
  return;
}


// ===== 00bf7c88  FUN_00bf7c88 =====

void FUN_00bf7c88(long *param_1)

{
  long *plVar1;
  undefined8 ***pppuVar2;
  code *pcVar3;
  undefined4 local_58 [2];
  undefined8 **local_50;
  ulong uStack_48;
  undefined7 local_40;
  byte bStack_39;
  undefined4 local_38;
  undefined3 uStack_34;
  
  pcVar3 = (code *)param_1[1];
  plVar1 = (long *)(*param_1 + (param_1[2] >> 1));
  if ((param_1[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  (*pcVar3)(local_58,plVar1,*(undefined8 *)param_1[8],((undefined8 *)param_1[8])[1]);
  *(undefined4 *)(param_1 + 3) = local_58[0];
  if (param_1 + 3 != (long *)local_58) {
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      pppuVar2 = (undefined8 ***)local_50;
      if (-1 < (char)bStack_39) {
        uStack_48 = (ulong)bStack_39;
        pppuVar2 = &local_50;
      }
      FUN_00547f08(param_1 + 4,pppuVar2,uStack_48);
    }
    else if ((char)bStack_39 < '\0') {
      FUN_00547fc0(param_1 + 4,local_50,uStack_48);
    }
    else {
      param_1[5] = uStack_48;
      param_1[4] = (long)local_50;
      param_1[6] = CONCAT17(bStack_39,local_40);
    }
  }
  *(undefined4 *)(param_1 + 7) = local_38;
  *(uint *)((long)param_1 + 0x3b) = CONCAT31(uStack_34,local_38._3_1_);
  if ((char)bStack_39 < '\0') {
    operator_delete(local_50);
  }
  return;
}


// ===== 00bf7d78  FUN_00bf7d78 =====

void FUN_00bf7d78(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_00bf7c88(lVar1,0);
  FUN_0066f2dc(lVar1 + 0x48);
  return;
}


// ===== 00bf7dac  FUN_00bf7dac =====

void FUN_00bf7dac(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x200);
  return;
}


// ===== 00bf7dd0  FUN_00bf7dd0 =====

bool FUN_00bf7dd0(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 0x40);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00bf7e28  FUN_00bf7e28 =====

void FUN_00bf7e28(void *param_1)

{
  FUN_00c0b2ec();
  operator_delete(param_1);
  return;
}


// ===== 00bf7e58  FUN_00bf7e58 =====

bool FUN_00bf7e58(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x200) == 1;
}


// ===== 00bf7e70  FUN_00bf7e70 =====

void FUN_00bf7e70(long *param_1)

{
  FUN_00ce1c58(*param_1 + 0x3d0,*(undefined8 *)(*param_1 + 0x58));
  return;
}


// ===== 00bf7e84  FUN_00bf7e84 =====

void FUN_00bf7e84(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  void *pvVar6;
  
  lVar1 = *param_1;
  lVar3 = ((long *)param_1[1])[1];
  for (lVar2 = *(long *)param_1[1]; lVar2 != lVar3; lVar2 = lVar2 + 0x20) {
    (**(code **)(lVar2 + 0x18))(lVar2);
    (**(code **)(lVar2 + 0x10))(0,lVar2,lVar2);
    *(code **)(lVar2 + 0x10) = FUN_00433984;
    *(undefined8 *)(lVar2 + 0x18) = 0;
  }
  FUN_007ebdcc(*(undefined8 *)(lVar1 + 0x260));
  plVar5 = *(long **)(lVar1 + 0x240);
  *(undefined8 *)(lVar1 + 0x240) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0xe8))();
  }
  plVar5 = *(long **)(lVar1 + 0x248);
  *(undefined8 *)(lVar1 + 0x248) = 0;
  if (plVar5 != (long *)0x0) {
    pvVar6 = (void *)*plVar5;
    if (*(long *)((long)pvVar6 + 0x40) != 0) {
      FUN_00b970c4(pvVar6);
      pvVar6 = (void *)*plVar5;
    }
    if ((pvVar6 != (void *)0x0) && (iVar4 = FUN_00d0f7a0(0xffffffff,pvVar6), iVar4 == 1)) {
      FUN_00b96ecc(pvVar6);
      operator_delete(pvVar6);
    }
    operator_delete(plVar5);
    return;
  }
  return;
}


// ===== 00bf7f80  FUN_00bf7f80 =====

void FUN_00bf7f80(long *param_1,undefined4 param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  uVar1 = FUN_009881a4(lVar2);
  if (((uVar1 & 1) != 0) && (*(long *)(lVar2 + 8) != 0)) {
    FUN_009881a4(lVar2);
    lVar2 = FUN_0066631c("WebRTC.PeerConnection.DtlsHandshakeError",0x28,2);
    if (lVar2 != 0) {
      FUN_00666568(lVar2,param_2);
      return;
    }
  }
  return;
}


// ===== 00bf7ff0  FUN_00bf7ff0 =====

void FUN_00bf7ff0(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xbf8058);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      FUN_00988344(pvVar2);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00bf8058  FUN_00bf8058 =====

void FUN_00bf8058(long *param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 ****__src;
  ulong uVar3;
  long lVar4;
  undefined8 ****__dest;
  void *pvVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  undefined1 uStack_b1;
  long local_b0;
  undefined8 ***local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  undefined1 uStack_71;
  long *local_70 [2];
  code *local_60;
  code *pcStack_58;
  
  lVar10 = *param_1;
  __src = (undefined8 ****)*param_2;
  uVar3 = param_2[1];
  lVar8 = *(long *)(lVar10 + 0x250);
  plVar7 = *(long **)(*(long *)(lVar10 + 0x40) + 0x38);
  if (lVar8 != 0) {
    FUN_00d0f740(1,lVar8);
  }
  local_b0 = lVar10;
  if (0x7ffffffffffffff6 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  __dest = &local_a8;
  if (uVar3 < 0x17) {
    local_98 = CONCAT17((char)uVar3,(undefined7)local_98);
  }
  else {
    uVar1 = (uVar3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 ****)operator_new(uVar2);
    local_98 = uVar2 | 0x8000000000000000;
    local_a8 = __dest;
    uStack_a0 = uVar3;
  }
  if ((undefined8 ****)((long)__dest + uVar3) < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= __src) && (__src < (undefined8 ****)((long)__dest + uVar3))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(__dest,__src,uVar3);
  lVar10 = *param_3;
  lVar4 = param_3[1];
  *(undefined1 *)((long)__dest + uVar3) = 0;
  uVar3 = lVar4 - lVar10;
  if (uVar3 == 0) {
    lVar11 = 0;
    pvVar5 = (void *)0x0;
    pvVar9 = (void *)0x0;
  }
  else {
    if (0xa0a0a0a0a0a0a0 < (ulong)(((long)uVar3 >> 3) * -0x505050505050505)) {
                    /* WARNING: Subroutine does not return */
      FUN_00b07624();
    }
    pvVar5 = operator_new(uVar3);
    lVar11 = (long)pvVar5 + uVar3;
    pvVar9 = pvVar5;
    do {
      if (pvVar9 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00afef10(pvVar9,lVar10);
      lVar10 = lVar10 + 0x198;
      pvVar9 = (void *)((long)pvVar9 + 0x198);
    } while (lVar10 != lVar4);
  }
  plVar6 = (long *)operator_new(0x38);
  plVar6[5] = (long)pvVar9;
  plVar6[6] = lVar11;
  *plVar6 = local_b0;
  plVar6[2] = uStack_a0;
  plVar6[1] = (long)local_a8;
  plVar6[3] = local_98;
  plVar6[4] = (long)pvVar5;
  local_70[0] = (long *)operator_new(0x30);
  *local_70[0] = lVar8;
  local_70[0][4] = (long)FUN_00bf82d4;
  local_70[0][5] = (long)FUN_00bf82a0;
  local_70[0][2] = (long)plVar6;
  local_60 = FUN_005db390;
  pcStack_58 = FUN_005db348;
  (**(code **)(*plVar7 + 8))(plVar7,local_70,&uStack_71,&uStack_b1);
  (*local_60)(0,local_70,local_70);
  return;
}


// ===== 00bf82a0  FUN_00bf82a0 =====

void FUN_00bf82a0(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = param_1[2];
  puVar2 = (undefined8 *)param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x1f)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x1f);
    puVar2 = param_1 + 1;
  }
  FUN_00bf1200(*param_1,puVar2,uVar1,param_1 + 4);
  return;
}


// ===== 00bf82d4  FUN_00bf82d4 =====

void FUN_00bf82d4(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xbf83b0);
      (*pcVar1)();
    }
    pvVar3 = (void *)*param_2;
    if (pvVar3 != (void *)0x0) {
      pvVar5 = *(void **)((long)pvVar3 + 0x20);
      if (pvVar5 != (void *)0x0) {
        pvVar4 = *(void **)((long)pvVar3 + 0x28);
        pvVar2 = pvVar5;
        if (pvVar5 != pvVar4) {
          do {
            pvVar4 = (void *)((long)pvVar4 + -0x198);
            if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            FUN_00aff0f8(pvVar4);
          } while (pvVar4 != pvVar5);
          pvVar2 = *(void **)((long)pvVar3 + 0x20);
        }
        *(void **)((long)pvVar3 + 0x28) = pvVar5;
        operator_delete(pvVar2);
      }
      if (*(char *)((long)pvVar3 + 0x1f) < '\0') {
        operator_delete(*(void **)((long)pvVar3 + 8));
      }
      operator_delete(pvVar3);
      return;
    }
  }
  return;
}


// ===== 00bf83b0  FUN_00bf83b0 =====

void FUN_00bf83b0(long *param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 uStack_52;
  undefined1 uStack_51;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  lVar3 = *param_1;
  lVar2 = *(long *)(lVar3 + 0x250);
  plVar1 = *(long **)(*(long *)(lVar3 + 0x40) + 0x38);
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2);
  }
  local_50[0] = (long *)operator_new(0x30);
  *local_50[0] = lVar2;
  local_50[0][4] = (long)FUN_004473ec;
  local_50[0][5] = (long)FUN_00bf8474;
  local_50[0][2] = lVar3;
  *(undefined4 *)(local_50[0] + 3) = param_2;
  local_40 = FUN_005db390;
  pcStack_38 = FUN_005db348;
  (**(code **)(*plVar1 + 8))(plVar1,local_50,&uStack_51,&uStack_52);
  (*local_40)(0,local_50,local_50);
  return;
}


// ===== 00bf8474  FUN_00bf8474 =====

void FUN_00bf8474(undefined8 *param_1)

{
  FUN_00bf0d8c(*param_1,*(undefined4 *)(param_1 + 1));
  return;
}


// ===== 00bf8488  FUN_00bf8488 =====

void FUN_00bf8488(long *param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 uStack_52;
  undefined1 uStack_51;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  lVar3 = *param_1;
  lVar2 = *(long *)(lVar3 + 0x250);
  plVar1 = *(long **)(*(long *)(lVar3 + 0x40) + 0x38);
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2);
  }
  local_50[0] = (long *)operator_new(0x30);
  *local_50[0] = lVar2;
  local_50[0][4] = (long)FUN_004473ec;
  local_50[0][5] = (long)FUN_00bf854c;
  local_50[0][2] = lVar3;
  *(undefined4 *)(local_50[0] + 3) = param_2;
  local_40 = FUN_005db390;
  pcStack_38 = FUN_005db348;
  (**(code **)(*plVar1 + 8))(plVar1,local_50,&uStack_51,&uStack_52);
  (*local_40)(0,local_50,local_50);
  return;
}


// ===== 00bf854c  FUN_00bf854c =====

void FUN_00bf854c(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  int *local_50 [2];
  code *local_40;
  code *pcStack_38;
  int local_24;
  
  iVar1 = *(int *)(param_1 + 1);
  plVar3 = (long *)*param_1;
  if ((*(int *)((long)plVar3 + 0x6c) != iVar1) &&
     (local_24 = iVar1, uVar2 = (**(code **)(*plVar3 + 0x2b0))(plVar3), (uVar2 & 1) == 0)) {
    local_50[0] = &local_24;
    *(int *)((long)plVar3 + 0x6c) = iVar1;
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00bfcf90;
    (**(code **)(*plVar3 + 0x2a8))(plVar3,local_50);
    (*local_40)(0,local_50,local_50);
    if ((local_24 == 2) && ((*(byte *)((long)plVar3 + 0x62) & 1) == 0)) {
      *(undefined1 *)((long)plVar3 + 0x62) = 1;
      FUN_00bef110(plVar3);
    }
  }
  return;
}


// ===== 00bf860c  FUN_00bf860c =====

void FUN_00bf860c(long *param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 uStack_52;
  undefined1 uStack_51;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  lVar3 = *param_1;
  lVar2 = *(long *)(lVar3 + 0x250);
  plVar1 = *(long **)(*(long *)(lVar3 + 0x40) + 0x38);
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2);
  }
  local_50[0] = (long *)operator_new(0x30);
  *local_50[0] = lVar2;
  local_50[0][4] = (long)FUN_004473ec;
  local_50[0][5] = (long)FUN_00bf86d0;
  local_50[0][2] = lVar3;
  *(undefined4 *)(local_50[0] + 3) = param_2;
  local_40 = FUN_005db390;
  pcStack_38 = FUN_005db348;
  (**(code **)(*plVar1 + 8))(plVar1,local_50,&uStack_51,&uStack_52);
  (*local_40)(0,local_50,local_50);
  return;
}


// ===== 00bf86d0  FUN_00bf86d0 =====

void FUN_00bf86d0(undefined8 *param_1)

{
  FUN_00beef20(*param_1,*(undefined4 *)(param_1 + 1));
  return;
}


// ===== 00bf86e4  FUN_00bf86e4 =====

void FUN_00bf86e4(long *param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 uStack_52;
  undefined1 uStack_51;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  lVar3 = *param_1;
  lVar2 = *(long *)(lVar3 + 0x250);
  plVar1 = *(long **)(*(long *)(lVar3 + 0x40) + 0x38);
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2);
  }
  local_50[0] = (long *)operator_new(0x30);
  *local_50[0] = lVar2;
  local_50[0][4] = (long)FUN_004473ec;
  local_50[0][5] = (long)FUN_00bf87a8;
  local_50[0][2] = lVar3;
  *(undefined4 *)(local_50[0] + 3) = param_2;
  local_40 = FUN_005db390;
  pcStack_38 = FUN_005db348;
  (**(code **)(*plVar1 + 8))(plVar1,local_50,&uStack_51,&uStack_52);
  (*local_40)(0,local_50,local_50);
  return;
}


// ===== 00bf87a8  FUN_00bf87a8 =====

void FUN_00bf87a8(undefined8 *param_1)

{
  FUN_00bf1e38(*param_1,*(undefined4 *)(param_1 + 1));
  return;
}


// ===== 00bf87bc  FUN_00bf87bc =====

void FUN_00bf87bc(long *param_1,long *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  void *local_c8;
  long lStack_c0;
  long local_b8;
  undefined4 local_b0;
  void *local_a8;
  long lStack_a0;
  long local_98;
  undefined4 local_90;
  void *local_88;
  long lStack_80;
  long local_78;
  long *local_70 [2];
  code *local_60;
  code *pcStack_58;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  lVar5 = *param_1;
  lVar4 = *(long *)(lVar5 + 0x250);
  plVar3 = *(long **)(*(long *)(lVar5 + 0x40) + 0x38);
  if (lVar4 != 0) {
    FUN_00d0f740(1,lVar4);
  }
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_005478d8(&local_c8,*param_2,param_2[1]);
  }
  else {
    lStack_c0 = param_2[1];
    local_c8 = (void *)*param_2;
    local_b8 = param_2[2];
  }
  local_b0 = (undefined4)param_2[3];
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    FUN_005478d8(&local_a8,param_2[4],param_2[5]);
  }
  else {
    lStack_a0 = param_2[5];
    local_a8 = (void *)param_2[4];
    local_98 = param_2[6];
  }
  local_90 = (undefined4)param_2[7];
  if (*(char *)((long)param_2 + 0x57) < '\0') {
    FUN_005478d8(&local_88,param_2[8],param_2[9]);
  }
  else {
    lStack_80 = param_2[9];
    local_88 = (void *)param_2[8];
    local_78 = param_2[10];
  }
  uVar1 = local_90;
  plVar2 = (long *)operator_new(0x60);
  *(undefined4 *)(plVar2 + 8) = uVar1;
  *plVar2 = lVar5;
  plVar2[2] = lStack_c0;
  plVar2[1] = (long)local_c8;
  plVar2[3] = local_b8;
  plVar2[6] = lStack_a0;
  plVar2[5] = (long)local_a8;
  *(undefined4 *)(plVar2 + 4) = local_b0;
  plVar2[10] = lStack_80;
  plVar2[9] = (long)local_88;
  plVar2[7] = local_98;
  local_c8 = (void *)0x0;
  lStack_c0 = 0;
  plVar2[0xb] = local_78;
  local_b8 = 0;
  lStack_a0 = 0;
  local_98 = 0;
  local_a8 = (void *)0x0;
  local_88 = (void *)0x0;
  lStack_80 = 0;
  local_78 = 0;
  local_70[0] = (long *)operator_new(0x30);
  *local_70[0] = lVar4;
  local_70[0][4] = (long)FUN_00bf8ab8;
  local_70[0][5] = (long)FUN_00bf89ec;
  local_70[0][2] = (long)plVar2;
  local_60 = FUN_005db390;
  pcStack_58 = FUN_005db348;
  (**(code **)(*plVar3 + 8))(plVar3,local_70,&uStack_31,&uStack_32);
  (*local_60)(0,local_70,local_70);
  if (local_78 < 0) {
    operator_delete(local_88);
  }
  if (local_98 < 0) {
    operator_delete(local_a8);
  }
  if (local_b8 < 0) {
    operator_delete(local_c8);
  }
  return;
}


// ===== 00bf89ec  FUN_00bf89ec =====

void FUN_00bf89ec(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *local_60;
  undefined8 uStack_58;
  code *local_50;
  code *pcStack_48;
  undefined4 local_28;
  undefined4 uStack_24;
  
  param_1 = (undefined8 *)*param_1;
  plVar2 = (long *)*param_1;
  uStack_24 = *(undefined4 *)(param_1 + 4);
  local_28 = *(undefined4 *)(param_1 + 8);
  uVar1 = (**(code **)(*plVar2 + 0x2b0))(plVar2);
  if ((uVar1 & 1) == 0) {
    local_60 = (long *)operator_new(0x28);
    *local_60 = (long)(param_1 + 1);
    local_60[1] = (long)&uStack_24;
    local_60[2] = (long)(param_1 + 5);
    local_60[3] = (long)&local_28;
    local_60[4] = (long)(param_1 + 9);
    uStack_58 = 0x28;
    local_50 = FUN_005ea56c;
    pcStack_48 = FUN_00bfd160;
    (**(code **)(*plVar2 + 0x2a8))(plVar2,&local_60);
    (*local_50)(0,&local_60,&local_60);
  }
  return;
}


// ===== 00bf8ab8  FUN_00bf8ab8 =====

void FUN_00bf8ab8(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  code *pcVar2;
  void *pvVar3;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xbf8b74);
      (*pcVar2)();
    }
    pvVar3 = (void *)*param_2;
    if (pvVar3 != (void *)0x0) {
      if (*(char *)((long)pvVar3 + 0x5f) < '\0') {
        operator_delete(*(void **)((long)pvVar3 + 0x48));
        cVar1 = *(char *)((long)pvVar3 + 0x3f);
      }
      else {
        cVar1 = *(char *)((long)pvVar3 + 0x3f);
      }
      if (cVar1 < '\0') {
        operator_delete(*(void **)((long)pvVar3 + 0x28));
        cVar1 = *(char *)((long)pvVar3 + 0x1f);
      }
      else {
        cVar1 = *(char *)((long)pvVar3 + 0x1f);
      }
      if (cVar1 < '\0') {
        operator_delete(*(void **)((long)pvVar3 + 8));
      }
      operator_delete(pvVar3);
      return;
    }
  }
  return;
}


// ===== 00bf8b74  FUN_00bf8b74 =====

void FUN_00bf8b74(long *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined1 uStack_c9;
  long local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  void *local_a8;
  void *local_a0;
  long local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 uStack_71;
  long *local_70 [2];
  code *local_60;
  code *pcStack_58;
  
  lVar9 = *param_1;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puVar4 = (undefined8 *)(**(code **)*param_2)(param_2);
  if (*(char *)((long)puVar4 + 0x17) < '\0') {
    FUN_005478d8(&local_90,*puVar4,puVar4[1]);
  }
  else {
    local_80 = (undefined1 *)puVar4[2];
    puStack_88 = (undefined1 *)puVar4[1];
    local_90 = (undefined1 *)*puVar4;
  }
  lVar8 = *(long *)(lVar9 + 0x250);
  plVar7 = *(long **)(*(long *)(lVar9 + 0x40) + 0x38);
  if (lVar8 != 0) {
    FUN_00d0f740(1,lVar8);
  }
  local_c8 = lVar9;
  if ((long)local_80 < 0) {
    FUN_005478d8(&local_c0,local_90,puStack_88);
  }
  else {
    puStack_b8 = puStack_88;
    local_c0 = local_90;
    local_b0 = local_80;
  }
  lVar9 = *param_3;
  lVar1 = param_3[1];
  local_a8 = (void *)0x0;
  local_a0 = (void *)0x0;
  local_98 = 0;
  uVar2 = lVar1 - lVar9;
  if (uVar2 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if (0xa0a0a0a0a0a0a0 < (ulong)(((long)uVar2 >> 3) * -0x505050505050505)) {
                    /* WARNING: Subroutine does not return */
      FUN_00b07624();
    }
    pvVar5 = operator_new(uVar2);
    local_98 = (long)pvVar5 + uVar2;
    local_a8 = pvVar5;
    local_a0 = pvVar5;
    do {
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00afef10(pvVar5,lVar9);
      lVar9 = lVar9 + 0x198;
      pvVar5 = (void *)((long)pvVar5 + 0x198);
    } while (lVar9 != lVar1);
  }
  lVar9 = local_98;
  pvVar3 = local_a8;
  plVar6 = (long *)operator_new(0x38);
  plVar6[5] = (long)pvVar5;
  plVar6[6] = lVar9;
  *plVar6 = local_c8;
  plVar6[2] = (long)puStack_b8;
  plVar6[1] = (long)local_c0;
  plVar6[3] = (long)local_b0;
  plVar6[4] = (long)pvVar3;
  local_c0 = (undefined1 *)0x0;
  puStack_b8 = (undefined1 *)0x0;
  local_b0 = (undefined1 *)0x0;
  local_a0 = (void *)0x0;
  local_98 = 0;
  local_a8 = (void *)0x0;
  local_70[0] = (long *)operator_new(0x30);
  *local_70[0] = lVar8;
  local_70[0][4] = (long)FUN_00bf8ea4;
  local_70[0][5] = (long)FUN_00bf8e30;
  local_70[0][2] = (long)plVar6;
  local_60 = FUN_005db390;
  pcStack_58 = FUN_005db348;
  (**(code **)(*plVar7 + 8))(plVar7,local_70,&uStack_71,&uStack_c9);
  (*local_60)(0,local_70,local_70);
  pvVar3 = local_a8;
  pvVar5 = local_a0;
  if (local_a8 != (void *)0x0) {
    while (pvVar3 != pvVar5) {
      pvVar5 = (void *)((long)pvVar5 + -0x198);
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_00aff0f8(pvVar5);
    }
    local_a0 = pvVar3;
    operator_delete(local_a8);
  }
  if ((long)local_b0 < 0) {
    operator_delete(local_c0);
  }
  if ((long)local_80 < 0) {
    operator_delete(local_90);
  }
  return;
}


// ===== 00bf8e30  FUN_00bf8e30 =====

void FUN_00bf8e30(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  lVar3 = *plVar4;
  uVar1 = plVar4[2];
  plVar2 = (long *)plVar4[1];
  if (-1 < (char)*(byte *)((long)plVar4 + 0x1f)) {
    uVar1 = (ulong)*(byte *)((long)plVar4 + 0x1f);
    plVar2 = plVar4 + 1;
  }
  FUN_00cb3de0(*(undefined8 *)(lVar3 + 0x4a8),plVar2,uVar1,plVar4 + 4);
  FUN_00befa30(lVar3,plVar2,uVar1,plVar4 + 4);
  return;
}


// ===== 00bf8ea4  FUN_00bf8ea4 =====

void FUN_00bf8ea4(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xbf8f80);
      (*pcVar1)();
    }
    pvVar3 = (void *)*param_2;
    if (pvVar3 != (void *)0x0) {
      pvVar5 = *(void **)((long)pvVar3 + 0x20);
      if (pvVar5 != (void *)0x0) {
        pvVar4 = *(void **)((long)pvVar3 + 0x28);
        pvVar2 = pvVar5;
        if (pvVar5 != pvVar4) {
          do {
            pvVar4 = (void *)((long)pvVar4 + -0x198);
            if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            FUN_00aff0f8(pvVar4);
          } while (pvVar4 != pvVar5);
          pvVar2 = *(void **)((long)pvVar3 + 0x20);
        }
        *(void **)((long)pvVar3 + 0x28) = pvVar5;
        operator_delete(pvVar2);
      }
      if (*(char *)((long)pvVar3 + 0x1f) < '\0') {
        operator_delete(*(void **)((long)pvVar3 + 8));
      }
      operator_delete(pvVar3);
      return;
    }
  }
  return;
}


// ===== 00bf8f80  FUN_00bf8f80 =====

void FUN_00bf8f80(long *param_1,long *param_2)

{
  void *pvVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 uStack_3f9;
  long local_3f8;
  void *local_3f0;
  long lStack_3e8;
  long local_3e0;
  undefined **local_3d8;
  undefined1 auStack_3d0 [408];
  undefined1 auStack_238 [408];
  long local_a0;
  void *local_98;
  long lStack_90;
  long local_88;
  long local_80;
  undefined1 uStack_71;
  long *local_70 [2];
  code *local_60;
  code *local_58;
  
  lVar5 = *param_1;
  lVar4 = *(long *)(lVar5 + 0x250);
  plVar3 = *(long **)(*(long *)(lVar5 + 0x40) + 0x38);
  if (lVar4 != 0) {
    FUN_00d0f740(1,lVar4);
  }
  local_3f8 = lVar5;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_005478d8(&local_3f0,*param_2,param_2[1]);
  }
  else {
    lStack_3e8 = param_2[1];
    local_3f0 = (void *)*param_2;
    local_3e0 = param_2[2];
  }
  local_3d8 = &PTR_FUN_00d499b0;
  FUN_00afef10(auStack_3d0,param_2 + 4);
  FUN_00afef10(auStack_238,param_2 + 0x37);
  local_a0 = param_2[0x6a];
  if (*(char *)((long)param_2 + 0x36f) < '\0') {
    FUN_005478d8(&local_98,param_2[0x6b],param_2[0x6c]);
  }
  else {
    lStack_90 = param_2[0x6c];
    local_98 = (void *)param_2[0x6b];
    local_88 = param_2[0x6d];
  }
  local_80 = param_2[0x6e];
  plVar2 = (long *)operator_new(0x380);
  lVar5 = lStack_3e8;
  pvVar1 = local_3f0;
  local_3f0 = (void *)0x0;
  lStack_3e8 = 0;
  *plVar2 = local_3f8;
  plVar2[2] = lVar5;
  plVar2[1] = (long)pvVar1;
  plVar2[3] = local_3e0;
  plVar2[4] = (long)&PTR_FUN_00d499b0;
  local_3e0 = 0;
  FUN_00afef10(plVar2 + 5,auStack_3d0);
  FUN_00afef10(plVar2 + 0x38,auStack_238);
  lVar5 = lStack_90;
  pvVar1 = local_98;
  local_98 = (void *)0x0;
  lStack_90 = 0;
  plVar2[0x6b] = local_a0;
  plVar2[0x6d] = lVar5;
  plVar2[0x6c] = (long)pvVar1;
  plVar2[0x6e] = local_88;
  local_88 = 0;
  plVar2[0x6f] = local_80;
  local_70[0] = (long *)operator_new(0x30);
  *local_70[0] = lVar4;
  local_70[0][4] = (long)FUN_00bf92c4;
  local_70[0][5] = (long)FUN_00bf9208;
  local_60 = FUN_005db390;
  local_70[0][2] = (long)plVar2;
  local_58 = FUN_005db348;
  (**(code **)(*plVar3 + 8))(plVar3,local_70,&uStack_71,&uStack_3f9);
  (*local_60)(0,local_70,local_70);
  if (local_88 < 0) {
    operator_delete(local_98);
  }
  FUN_00aff0f8(auStack_238);
  FUN_00aff0f8(auStack_3d0);
  if (local_3e0 < 0) {
    operator_delete(local_3f0);
  }
  return;
}


// ===== 00bf919c  FUN_00bf919c =====

void FUN_00bf919c(long param_1)

{
  FUN_00aff0f8(param_1 + 0x1a0);
  FUN_00aff0f8(param_1 + 8);
  return;
}


// ===== 00bf91cc  FUN_00bf91cc =====

void FUN_00bf91cc(void *param_1)

{
  FUN_00aff0f8((long)param_1 + 0x1a0);
  FUN_00aff0f8((long)param_1 + 8);
  operator_delete(param_1);
  return;
}


// ===== 00bf9208  FUN_00bf9208 =====

void FUN_00bf9208(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  param_1 = (undefined8 *)*param_1;
  plVar2 = (long *)*param_1;
  uVar1 = (**(code **)(*plVar2 + 0x2b0))(plVar2);
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_00aff2e0(param_1 + 5);
    if (((uVar1 & 1) != 0) && (uVar1 = FUN_00aff2e0(param_1 + 0x38), (uVar1 & 1) != 0)) {
      (**(code **)(*plVar2 + 0x328))(plVar2,0x40000);
    }
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00bfd1ac;
    local_50[0] = param_1 + 1;
    (**(code **)(*plVar2 + 0x2a8))(plVar2,local_50);
    (*local_40)(0,local_50,local_50);
  }
  return;
}


// ===== 00bf92c4  FUN_00bf92c4 =====

void FUN_00bf92c4(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xbf9364);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      if (*(char *)((long)pvVar2 + 0x377) < '\0') {
        operator_delete(*(void **)((long)pvVar2 + 0x360));
      }
      FUN_00aff0f8((long)pvVar2 + 0x1c0);
      FUN_00aff0f8((long)pvVar2 + 0x28);
      if (*(char *)((long)pvVar2 + 0x1f) < '\0') {
        operator_delete(*(void **)((long)pvVar2 + 8));
      }
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00bf9364  FUN_00bf9364 =====

void FUN_00bf9364(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  uVar1 = *(undefined4 *)(param_2 + 1);
  uVar2 = *(undefined1 *)((long)param_2 + 0xc);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined1 *)((long)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 1) = uVar1;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  uVar3 = param_2[9];
  uVar5 = param_2[8];
  uVar4 = param_2[7];
  uVar7 = param_2[6];
  uVar6 = param_2[5];
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_1[10] = param_2[10];
  param_1[9] = uVar3;
  param_1[8] = uVar5;
  param_1[7] = uVar4;
  param_1[6] = uVar7;
  param_1[5] = uVar6;
  (*(code *)param_2[0xe])(1,param_2 + 0xc,param_1 + 0xc);
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_2[0xe] = FUN_00433984;
  param_2[0xf] = 0;
  (*(code *)param_2[0x12])(1,param_2 + 0x10,param_1 + 0x10);
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_2[0x12] = FUN_00433984;
  param_2[0x13] = 0;
  param_1[0x14] = param_2[0x14];
  (*(code *)param_2[0x18])(1,param_2 + 0x16,param_1 + 0x16);
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_2[0x18] = FUN_00433984;
  param_2[0x19] = 0;
  (*(code *)param_2[0x1c])(1,param_2 + 0x1a,param_1 + 0x1a);
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_2[0x1c] = FUN_00433984;
  param_2[0x1d] = 0;
  (*(code *)param_2[0x20])(1,param_2 + 0x1e,param_1 + 0x1e);
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  param_2[0x20] = FUN_00433984;
  param_2[0x21] = 0;
  (*(code *)param_2[0x24])(1,param_2 + 0x22,param_1 + 0x22);
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  param_2[0x24] = FUN_00433984;
  param_2[0x25] = 0;
  (*(code *)param_2[0x28])(1,param_2 + 0x26,param_1 + 0x26);
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  param_2[0x28] = FUN_00433984;
  param_2[0x29] = 0;
  (*(code *)param_2[0x2c])(1,param_2 + 0x2a,param_1 + 0x2a);
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = param_2[0x2d];
  param_2[0x2c] = FUN_00433984;
  param_2[0x2d] = 0;
  (*(code *)param_2[0x30])(1,param_2 + 0x2e,param_1 + 0x2e);
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = param_2[0x31];
  param_2[0x30] = FUN_00433984;
  param_2[0x31] = 0;
  (*(code *)param_2[0x34])(1,param_2 + 0x32,param_1 + 0x32);
  param_1[0x34] = param_2[0x34];
  param_1[0x35] = param_2[0x35];
  param_2[0x34] = FUN_00433984;
  param_2[0x35] = 0;
  (*(code *)param_2[0x38])(1,param_2 + 0x36,param_1 + 0x36);
  param_1[0x38] = param_2[0x38];
  param_1[0x39] = param_2[0x39];
  param_2[0x38] = FUN_00433984;
  param_2[0x39] = 0;
  return;
}


// ===== 00bf95b4  FUN_00bf95b4 =====

void FUN_00bf95b4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)param_1[1];
  uVar4 = puVar5[2];
  uVar2 = FUN_00beff6c(uVar4,puVar5[3],puVar5[4],*puVar5);
  lVar3 = FUN_0066631c("WebRTC.PeerConnection.IPMetrics",0x1f,4);
  if (lVar3 != 0) {
    FUN_00666568(lVar3,uVar2);
  }
  uVar1 = puVar5[1];
  puVar5[1] = 0;
  uVar4 = FUN_00be6fc0(uVar4,uVar1,*puVar5);
  *(undefined8 *)*param_1 = uVar4;
  return;
}


// ===== 00bf9634  FUN_00bf9634 =====

void FUN_00bf9634(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  void *pvVar6;
  undefined1 auStack_58 [8];
  void *local_50;
  char cStack_39;
  
  lVar1 = *param_1;
  lVar3 = ((long *)param_1[1])[1];
  for (lVar2 = *(long *)param_1[1]; lVar2 != lVar3; lVar2 = lVar2 + 0x20) {
    (**(code **)(lVar2 + 0x18))(lVar2);
    (**(code **)(lVar2 + 0x10))(0,lVar2,lVar2);
    *(code **)(lVar2 + 0x10) = FUN_00433984;
    *(undefined8 *)(lVar2 + 0x18) = 0;
  }
  uVar4 = FUN_007ebde8(*(undefined8 *)(lVar1 + 600));
  if ((uVar4 & 1) != 0) {
    FUN_005ecd48(auStack_58);
    FUN_00bf176c(lVar1,auStack_58);
    if (cStack_39 < '\0') {
      operator_delete(local_50);
    }
    (**(code **)(**(long **)(lVar1 + 0x210) + 0x38))();
    pvVar6 = *(void **)(lVar1 + 0x498);
    *(undefined8 *)(lVar1 + 0x498) = 0;
    if (pvVar6 != (void *)0x0) {
      FUN_00c33f1c(pvVar6);
      operator_delete(pvVar6);
    }
    plVar5 = *(long **)(lVar1 + 0x210);
    *(undefined8 *)(lVar1 + 0x210) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    FUN_007ebdcc(*(undefined8 *)(lVar1 + 600));
  }
  return;
}


// ===== 00bf9734  FUN_00bf9734 =====

void FUN_00bf9734(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x20);
  return;
}


// ===== 00bf9758  FUN_00bf9758 =====

bool FUN_00bf9758(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 4);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00bf97b0  FUN_00bf97b0 =====

void FUN_00bf97b0(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *local_c8;
  code *local_c0;
  ulong local_b8;
  undefined8 local_b0;
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
  undefined8 **local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  *param_1 = &PTR_FUN_00d49ae0;
  param_1[1] = &PTR_FUN_00d49bb0;
  local_c0 = FUN_00bfaa04;
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
  local_b8 = 0;
  local_c8 = param_1;
  FUN_0066f1ac((long)&local_b0 + 4);
  plVar3 = (long *)param_1[2];
  uVar1 = FUN_007e18fc(plVar3);
  if ((uVar1 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00bfaa40;
    local_50[0] = &local_c8;
    (**(code **)(*plVar3 + 8))(plVar3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318((long)&local_b0 + 4,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar2 = local_c0;
    if ((local_b8 & 1) != 0) {
      pcVar2 = *(code **)(local_c0 + *(long *)((long)local_c8 + ((long)local_b8 >> 1)));
    }
    (*pcVar2)();
  }
  FUN_0066f2b0((long)&local_b0 + 4);
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  return;
}


// ===== 00bf98c8  FUN_00bf98c8 =====

void FUN_00bf98c8(void *param_1)

{
  FUN_00bf97b0();
  operator_delete(param_1);
  return;
}


// ===== 00bf98f8  FUN_00bf98f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00bf98f8(long param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  long local_d8;
  code *local_d0;
  ulong uStack_c8;
  undefined1 *local_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
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
  undefined8 local_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_d8 = *(long *)(param_1 + 0x18);
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &local_50;
  uStack_c8 = _UNK_001f31d8;
  local_d0 = _DAT_001f31d0;
  local_50 = param_2;
  FUN_0066f1ac(&puStack_b0);
  plVar4 = *(long **)(param_1 + 0x10);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00bfaa84;
    local_40[0] = &local_d8;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(&puStack_b0,0x7fffffffffffffff,3000000);
    bVar1 = (byte)local_c0;
  }
  else {
    plVar4 = (long *)(local_d8 + ((long)uStack_c8 >> 1));
    pcVar3 = local_d0;
    if ((uStack_c8 & 1) != 0) {
      pcVar3 = *(code **)(local_d0 + *plVar4);
    }
    bVar1 = (*pcVar3)(plVar4,*puStack_b8);
    local_c0 = (undefined1 *)(CONCAT71(local_c0._1_7_,bVar1) & 0xffffffffffffff01);
  }
  FUN_0066f2b0(&puStack_b0);
  return bVar1 & 1;
}


// ===== 00bf9a14  FUN_00bf9a14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf9a14(undefined8 param_1,long param_2)

{
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long *local_98;
  undefined8 local_90;
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
  
  local_b0 = *(undefined8 *)(param_2 + 0x18);
  local_98 = (long *)0x0;
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
  uStack_a0 = _UNK_001f46e8;
  local_a8 = _DAT_001f46e0;
  FUN_0066f1ac((long)&local_90 + 4);
  FUN_00bfaadc(param_1,&local_b0,*(undefined8 *)(param_2 + 0x10));
  FUN_0066f2b0((long)&local_90 + 4);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 8))();
  }
  return;
}


// ===== 00bf9aac  FUN_00bf9aac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf9aac(undefined8 param_1,long param_2)

{
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long *local_98;
  undefined8 local_90;
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
  
  local_b0 = *(undefined8 *)(param_2 + 0x18);
  local_98 = (long *)0x0;
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
  uStack_a0 = _UNK_001f4c48;
  local_a8 = _DAT_001f4c40;
  FUN_0066f1ac((long)&local_90 + 4);
  FUN_00bfac64(param_1,&local_b0,*(undefined8 *)(param_2 + 0x10));
  FUN_0066f2b0((long)&local_90 + 4);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 8))();
  }
  return;
}


// ===== 00bf9b44  FUN_00bf9b44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00bf9b44(long param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long *plVar4;
  long local_c8;
  code *local_c0;
  ulong uStack_b8;
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
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_c8 = *(long *)(param_1 + 0x18);
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
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b8 = _UNK_001f46f8;
  local_c0 = _DAT_001f46f0;
  FUN_0066f1ac(&puStack_a8);
  plVar4 = *(long **)(param_1 + 0x10);
  uVar1 = FUN_007e18fc(plVar4);
  if ((uVar1 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00bfadec;
    local_40[0] = &local_c8;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(&puStack_a8,0x7fffffffffffffff,3000000);
    puVar2 = local_b0;
  }
  else {
    pcVar3 = local_c0;
    if ((uStack_b8 & 1) != 0) {
      pcVar3 = *(code **)(local_c0 + *(long *)(local_c8 + ((long)uStack_b8 >> 1)));
    }
    puVar2 = (undefined1 *)(*pcVar3)();
    local_b0 = (undefined1 *)CONCAT44(local_b0._4_4_,(int)puVar2);
  }
  FUN_0066f2b0(&puStack_a8);
  return (ulong)puVar2 & 0xffffffff;
}


// ===== 00bf9c48  FUN_00bf9c48 =====

void FUN_00bf9c48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bf9c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x40))();
  return;
}


// ===== 00bf9c5c  FUN_00bf9c5c =====

void FUN_00bf9c5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bf9c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x48))();
  return;
}


// ===== 00bf9c70  FUN_00bf9c70 =====

/* WARNING: Removing unreachable block (ram,0x00bf9d3c) */
/* WARNING: Removing unreachable block (ram,0x00bf9e24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf9c70(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  long local_e8;
  code *local_e0;
  ulong uStack_d8;
  long *local_d0;
  long *plStack_c8;
  code *local_c0;
  undefined8 local_b8;
  undefined1 *puStack_b0;
  undefined1 *local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 uStack_52;
  undefined1 uStack_51;
  long *local_50;
  long *plStack_48;
  code *local_40;
  code *pcStack_38;
  
  local_e8 = *(long *)(param_2 + 0x18);
  local_d0 = (long *)0x0;
  plStack_c8 = (long *)0x0;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = (code *)0x0;
  uStack_d8 = _UNK_001f3ab8;
  local_e0 = _DAT_001f3ab0;
  FUN_0066f1ac((long)&local_b8 + 4);
  plVar4 = *(long **)(param_2 + 0x10);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00bfaf10;
    local_50 = &local_e8;
    (**(code **)(*plVar4 + 8))(plVar4,&local_50,&uStack_51,&uStack_52);
    (*local_40)(0,&local_50,&local_50);
    FUN_0066f318((long)&local_b8 + 4,0x7fffffffffffffff,3000000);
    pcVar3 = local_c0;
    plVar4 = local_d0;
    plStack_48 = plStack_c8;
  }
  else {
    pcVar3 = local_e0;
    if ((uStack_d8 & 1) != 0) {
      pcVar3 = *(code **)(local_e0 + *(long *)(local_e8 + ((long)uStack_d8 >> 1)));
    }
    (*pcVar3)(&local_50);
    pcVar3 = local_40;
    plVar4 = local_50;
    plVar1 = plStack_c8;
    if (local_d0 != (long *)0x0) {
      do {
        if (local_d0 == plVar1) {
          plStack_c8 = local_d0;
          operator_delete(local_d0);
          pcVar3 = local_40;
          plVar4 = local_50;
          goto LAB_00bf9dd4;
        }
        plVar1 = plVar1 + -3;
      } while (plVar1 != (long *)0x0);
      goto LAB_00bf9e64;
    }
  }
LAB_00bf9dd4:
  param_1[1] = (long)plStack_48;
  *param_1 = (long)plVar4;
  param_1[2] = (long)pcVar3;
  plStack_c8 = (long *)0x0;
  local_c0 = (code *)0x0;
  local_d0 = (long *)0x0;
  FUN_0066f2b0((long)&local_b8 + 4);
  plVar4 = plStack_c8;
  if (local_d0 == (long *)0x0) {
    return;
  }
  do {
    if (local_d0 == plVar4) {
      plStack_c8 = local_d0;
      operator_delete(local_d0);
      return;
    }
    plVar4 = plVar4 + -3;
  } while (plVar4 != (long *)0x0);
LAB_00bf9e64:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bf9e78  FUN_00bf9e78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf9e78(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = *(long *)(param_1 + 0x18);
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f3d98;
  local_b8 = _DAT_001f3d90;
  uStack_a0 = param_2;
  FUN_0066f1ac(&local_98);
  plVar4 = *(long **)(param_1 + 0x10);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00bfaf44;
    local_e0[0] = &local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_e0,&uStack_e1,&uStack_e2);
    (*local_d0)(0,local_e0,local_e0);
    FUN_0066f318(&local_98,0x7fffffffffffffff,3000000);
  }
  else {
    plVar4 = (long *)(local_c0 + ((long)uStack_b0 >> 1));
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *plVar4);
    }
    (*pcVar3)(plVar4,uStack_a0);
  }
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00bf9fa8  FUN_00bf9fa8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf9fa8(undefined8 param_1,long param_2)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined8 local_90;
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
  
  local_c0 = *(undefined8 *)(param_2 + 0x18);
  local_a8 = (void *)0x0;
  local_a0 = (void *)0x0;
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
  local_98 = 0;
  uStack_b0 = _UNK_001f1cc8;
  local_b8 = _DAT_001f1cc0;
  FUN_0066f1ac((long)&local_90 + 4);
  FUN_00bfaf8c(param_1,&local_c0,*(undefined8 *)(param_2 + 0x10));
  FUN_0066f2b0((long)&local_90 + 4);
  pvVar2 = local_a8;
  pvVar1 = local_a0;
  if (local_a8 != (void *)0x0) {
    while (pvVar2 != pvVar1) {
      pvVar1 = (void *)((long)pvVar1 + -0x130);
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_0066919c(pvVar1);
    }
    local_a0 = pvVar2;
    operator_delete(local_a8);
  }
  return;
}


// ===== 00bfa088  FUN_00bfa088 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bfa088(undefined8 param_1,long param_2)

{
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 *local_148;
  undefined1 *puStack_140;
  undefined1 *local_138;
  undefined1 *puStack_130;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined1 *puStack_110;
  undefined1 *local_108;
  undefined1 *puStack_100;
  undefined1 *local_f8;
  undefined1 *puStack_f0;
  undefined1 *local_e8;
  undefined1 *puStack_e0;
  undefined1 *local_d8;
  undefined1 *puStack_d0;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
  undefined1 *local_b8;
  undefined1 *puStack_b0;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  
  local_160 = *(undefined8 *)(param_2 + 0x18);
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
  local_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  local_d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
  local_f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
  local_108 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
  local_118 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
  local_128 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
  local_138 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_140 = &DAT_aaaaaaaaaaaaaaaa;
  local_148 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_150 = _UNK_001f2918;
  local_158 = _DAT_001f2910;
  FUN_00669500(&local_148);
  FUN_0066f1ac((long)&uStack_a0 + 4);
  FUN_00bfb1f4(param_1,&local_160,*(undefined8 *)(param_2 + 0x10));
  FUN_0066f2b0((long)&uStack_a0 + 4);
  FUN_0066981c(&local_148);
  return;
}


// ===== 00bfa15c  FUN_00bfa15c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bfa15c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  void *pvStack_b8;
  undefined8 uStack_b0;
  undefined5 local_a8;
  undefined2 uStack_a3;
  char cStack_a1;
  undefined5 local_a0;
  undefined1 uStack_9b;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  
  local_d8 = *(undefined8 *)(param_2 + 0x18);
  uStack_9b = 0xaa;
  uStack_99 = 0xaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = 0xaaaaaaaa00000000;
  uStack_c8 = _UNK_001f1ac8;
  local_d0 = _DAT_001f1ac0;
  uStack_9a = 0;
  pvStack_b8 = (void *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a3 = 0;
  cStack_a1 = '\0';
  local_a0 = 0;
  uStack_98 = param_3;
  FUN_0066f1ac(&puStack_90);
  FUN_00bfb344(param_1,&local_d8,*(undefined8 *)(param_2 + 0x10));
  FUN_0066f2b0(&puStack_90);
  if (cStack_a1 < '\0') {
    operator_delete(pvStack_b8);
  }
  return;
}


// ===== 00bfa218  FUN_00bfa218 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bfa218(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
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
  undefined1 *puStack_48;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_c8 = *(undefined8 *)(param_1 + 0x18);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
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
  uStack_b8 = _UNK_001f4898;
  local_c0 = _DAT_001f4890;
  uStack_a8 = param_2;
  uStack_a0 = param_3;
  FUN_0066f1ac(&puStack_98);
  FUN_00bfb554(&local_c8,*(undefined8 *)(param_1 + 0x10));
  FUN_0066f2b0(&puStack_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00bfa2bc  FUN_00bfa2bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bfa2bc(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 local_f0;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  undefined8 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  puStack_a0 = &local_f0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = *(long *)(param_1 + 0x18);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f42b8;
  local_b8 = _DAT_001f42b0;
  local_f0 = param_2;
  FUN_0066f1ac(&local_98);
  plVar4 = *(long **)(param_1 + 0x10);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00bfb70c;
    local_e0[0] = &local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_e0,&uStack_e1,&uStack_e2);
    (*local_d0)(0,local_e0,local_e0);
    FUN_0066f318(&local_98,0x7fffffffffffffff,3000000);
  }
  else {
    plVar4 = (long *)(local_c0 + ((long)uStack_b0 >> 1));
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *plVar4);
    }
    (*pcVar3)(plVar4,*puStack_a0);
  }
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00bfa3f8  FUN_00bfa3f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bfa3f8(undefined8 param_1,long param_2)

{
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long *local_98;
  undefined8 local_90;
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
  
  local_b0 = *(undefined8 *)(param_2 + 0x18);
  local_98 = (long *)0x0;
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
  uStack_a0 = _UNK_001f3508;
  local_a8 = _DAT_001f3500;
  FUN_0066f1ac((long)&local_90 + 4);
  FUN_00bfb758(param_1,&local_b0,*(undefined8 *)(param_2 + 0x10));
  FUN_0066f2b0((long)&local_90 + 4);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 8))();
  }
  return;
}


// ===== 00bfa490  FUN_00bfa490 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bfa490(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = *(undefined8 *)(param_1 + 0x18);
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f3008;
  local_b8 = _DAT_001f3000;
  uStack_a0 = param_2;
  FUN_0066f1ac(&local_98);
  FUN_00bfb8e0(&local_c0,*(undefined8 *)(param_1 + 0x10));
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00bfa53c  FUN_00bfa53c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bfa53c(undefined8 param_1,long param_2)

{
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long *local_98;
  undefined8 local_90;
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
  
  local_b0 = *(undefined8 *)(param_2 + 0x18);
  local_98 = (long *)0x0;
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
  uStack_a0 = _UNK_001f2e88;
  local_a8 = _DAT_001f2e80;
  FUN_0066f1ac((long)&local_90 + 4);
  FUN_00bfba30(param_1,&local_b0,*(undefined8 *)(param_2 + 0x10));
  FUN_0066f2b0((long)&local_90 + 4);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 8))();
  }
  return;
}


// ===== 00bfa5d4  FUN_00bfa5d4 =====

void FUN_00bfa5d4(long *param_1,undefined8 *param_2)

{
  long *local_18;
  
  local_18 = (long *)*param_2;
  *param_2 = 0;
  (**(code **)(*param_1 + 0xb0))(param_1,&local_18);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  return;
}


// ===== 00bfa624  FUN_00bfa624 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bfa624(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long *plVar5;
  long *local_f0;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  undefined8 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  puStack_a0 = &local_f0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = *(long *)(param_1 + 0x18);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f3ad8;
  local_b8 = _DAT_001f3ad0;
  local_f0 = param_2;
  FUN_0066f1ac(&local_98);
  plVar5 = *(long **)(param_1 + 0x10);
  uVar2 = FUN_007e18fc(plVar5);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00bfbbb8;
    local_e0[0] = &local_c0;
    (**(code **)(*plVar5 + 8))(plVar5,local_e0,&uStack_e1,&uStack_e2);
    (*local_d0)(0,local_e0,local_e0);
    FUN_0066f318(&local_98,0x7fffffffffffffff,3000000);
  }
  else {
    plVar5 = (long *)(local_c0 + ((long)uStack_b0 >> 1));
    pcVar4 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar4 = *(code **)(local_b8 + *plVar5);
    }
    uVar3 = *puStack_a0;
    *puStack_a0 = 0;
    (*pcVar4)(plVar5,uVar3);
  }
  FUN_0066f2b0(&local_98);
  plVar5 = local_f0;
  local_f0 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00bfa77c  FUN_00bfa77c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bfa77c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = *(undefined8 *)(param_1 + 0x18);
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f3f38;
  local_b8 = _DAT_001f3f30;
  uStack_a0 = param_2;
  FUN_0066f1ac(&local_98);
  FUN_00bfbc08(&local_c0,*(undefined8 *)(param_1 + 0x10));
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00bfa828  FUN_00bfa828 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bfa828(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  void *pvStack_b8;
  undefined8 uStack_b0;
  undefined5 local_a8;
  undefined2 uStack_a3;
  char cStack_a1;
  undefined5 local_a0;
  undefined1 uStack_9b;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  
  local_d8 = *(undefined8 *)(param_2 + 0x18);
  uStack_9b = 0xaa;
  uStack_99 = 0xaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = 0xaaaaaaaa00000000;
  uStack_c8 = _UNK_001f4a88;
  local_d0 = _DAT_001f4a80;
  uStack_9a = 0;
  pvStack_b8 = (void *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a3 = 0;
  cStack_a1 = '\0';
  local_a0 = 0;
  uStack_98 = param_3;
  FUN_0066f1ac(&puStack_90);
  FUN_00bfbd58(param_1,&local_d8,*(undefined8 *)(param_2 + 0x10));
  FUN_0066f2b0(&puStack_90);
  if (cStack_a1 < '\0') {
    operator_delete(pvStack_b8);
  }
  return;
}


// ===== 00bfa8e4  FUN_00bfa8e4 =====

bool FUN_00bfa8e4(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x20) == 1;
}


// ===== 00bfa8fc  FUN_00bfa8fc =====

void FUN_00bfa8fc(long param_1)

{
  FUN_00bf97b0(param_1 + -8);
  return;
}


// ===== 00bfa908  FUN_00bfa908 =====

void FUN_00bfa908(long param_1)

{
  FUN_00bf97b0((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 00bfa93c  FUN_00bfa93c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bfa93c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = *(undefined8 *)(param_1 + 0x10);
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f3f38;
  local_b8 = _DAT_001f3f30;
  uStack_a0 = param_2;
  FUN_0066f1ac(&local_98);
  FUN_00bfbc08(&local_c0,*(undefined8 *)(param_1 + 8));
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00bfa9e8  FUN_00bfa9e8 =====

void FUN_00bfa9e8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbfa9f0);
  (*pcVar1)();
}


// ===== 00bfa9f0  FUN_00bfa9f0 =====

void FUN_00bfa9f0(long param_1)

{
  FUN_00bf97b0(param_1 + -8);
  return;
}


// ===== 00bfa9fc  FUN_00bfa9fc =====

void FUN_00bfa9fc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbfaa04);
  (*pcVar1)();
}


// ===== 00bfaa04  FUN_00bfaa04 =====

void FUN_00bfaa04(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}


// ===== 00bfaa40  FUN_00bfaa40 =====

void FUN_00bfaa40(undefined8 *param_1)

{
  code *pcVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  pcVar1 = (code *)plVar2[1];
  if ((plVar2[2] & 1U) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(*plVar2 + (plVar2[2] >> 1)));
  }
  (*pcVar1)();
  FUN_0066f2dc((long)plVar2 + 0x1c);
  return;
}


// ===== 00bfaa84  FUN_00bfaa84 =====

void FUN_00bfaa84(undefined8 *param_1)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  plVar1 = (long *)(*plVar4 + (plVar4[2] >> 1));
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  bVar2 = (*pcVar3)(plVar1,*(undefined8 *)plVar4[4]);
  *(byte *)(plVar4 + 3) = bVar2 & 1;
  FUN_0066f2dc(plVar4 + 5);
  return;
}


// ===== 00bfaadc  FUN_00bfaadc =====

void FUN_00bfaadc(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar2 = FUN_007e18fc(param_3);
  if ((uVar2 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00bfabe4;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318((long)param_2 + 0x24,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar5 = (code *)param_2[1];
    if ((param_2[2] & 1U) != 0) {
      pcVar5 = *(code **)(pcVar5 + *(long *)(*param_2 + (param_2[2] >> 1)));
    }
    (*pcVar5)(local_50);
    plVar1 = local_50[0];
    plVar3 = (long *)param_2[3];
    local_50[0] = (long *)0x0;
    param_2[3] = (long)plVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      if (local_50[0] != (long *)0x0) {
        (**(code **)(*local_50[0] + 8))();
      }
    }
  }
  lVar4 = param_2[3];
  param_2[3] = 0;
  *param_1 = lVar4;
  return;
}


// ===== 00bfabe4  FUN_00bfabe4 =====

void FUN_00bfabe4(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long *local_8;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(*plVar4 + (plVar4[2] >> 1)));
  }
  (*pcVar3)(&local_8);
  plVar1 = local_8;
  local_8 = (long *)0x0;
  plVar2 = (long *)plVar4[3];
  plVar4[3] = (long)plVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    if (local_8 != (long *)0x0) {
      (**(code **)(*local_8 + 8))();
    }
  }
  FUN_0066f2dc((long)plVar4 + 0x24);
  return;
}


// ===== 00bfac64  FUN_00bfac64 =====

void FUN_00bfac64(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar2 = FUN_007e18fc(param_3);
  if ((uVar2 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00bfad6c;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318((long)param_2 + 0x24,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar5 = (code *)param_2[1];
    if ((param_2[2] & 1U) != 0) {
      pcVar5 = *(code **)(pcVar5 + *(long *)(*param_2 + (param_2[2] >> 1)));
    }
    (*pcVar5)(local_50);
    plVar1 = local_50[0];
    plVar3 = (long *)param_2[3];
    local_50[0] = (long *)0x0;
    param_2[3] = (long)plVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      if (local_50[0] != (long *)0x0) {
        (**(code **)(*local_50[0] + 8))();
      }
    }
  }
  lVar4 = param_2[3];
  param_2[3] = 0;
  *param_1 = lVar4;
  return;
}


// ===== 00bfad6c  FUN_00bfad6c =====

void FUN_00bfad6c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long *local_8;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(*plVar4 + (plVar4[2] >> 1)));
  }
  (*pcVar3)(&local_8);
  plVar1 = local_8;
  local_8 = (long *)0x0;
  plVar2 = (long *)plVar4[3];
  plVar4[3] = (long)plVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    if (local_8 != (long *)0x0) {
      (**(code **)(*local_8 + 8))();
    }
  }
  FUN_0066f2dc((long)plVar4 + 0x24);
  return;
}


// ===== 00bfadec  FUN_00bfadec =====

void FUN_00bfadec(undefined8 *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(*plVar3 + (plVar3[2] >> 1)));
  }
  uVar1 = (*pcVar2)();
  *(undefined4 *)(plVar3 + 3) = uVar1;
  FUN_0066f2dc(plVar3 + 4);
  return;
}


// ===== 00bfae38  FUN_00bfae38 =====

/* WARNING: Removing unreachable block (ram,0x00bfaeac) */

void FUN_00bfae38(long *param_1)

{
  void *pvVar1;
  void *pvVar2;
  code *pcVar3;
  void *pvVar4;
  long local_50;
  long lStack_48;
  long local_40;
  
  pcVar3 = (code *)param_1[1];
  if ((param_1[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(*param_1 + (param_1[2] >> 1)));
  }
  (*pcVar3)(&local_50);
  pvVar4 = (void *)param_1[3];
  if (pvVar4 != (void *)0x0) {
    pvVar2 = (void *)param_1[4];
    pvVar1 = pvVar4;
    if (pvVar4 != pvVar2) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0x18);
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      } while (pvVar2 != pvVar4);
      pvVar1 = (void *)param_1[3];
    }
    param_1[4] = (long)pvVar4;
    operator_delete(pvVar1);
  }
  param_1[4] = lStack_48;
  param_1[3] = local_50;
  param_1[5] = local_40;
  return;
}


// ===== 00bfaf10  FUN_00bfaf10 =====

void FUN_00bfaf10(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_00bfae38(lVar1,0);
  FUN_0066f2dc(lVar1 + 0x34);
  return;
}


// ===== 00bfaf44  FUN_00bfaf44 =====

void FUN_00bfaf44(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  plVar1 = (long *)(*plVar3 + (plVar3[2] >> 1));
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  (*pcVar2)(plVar1,plVar3[4]);
  FUN_0066f2dc(plVar3 + 5);
  return;
}


// ===== 00bfaf8c  FUN_00bfaf8c =====

void FUN_00bfaf8c(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar1 = FUN_007e18fc(param_3);
  if ((uVar1 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00bfb1bc;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318((long)param_2 + 0x34,0x7fffffffffffffff,3000000);
  }
  else {
    FUN_00bfb05c(param_2 + 3,*param_2,param_2[1],param_2[2]);
  }
  uVar4 = param_2[4];
  uVar3 = param_2[3];
  uVar2 = param_2[5];
  param_2[4] = 0;
  param_2[5] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[2] = uVar2;
  param_2[3] = 0;
  return;
}


// ===== 00bfb05c  FUN_00bfb05c =====

void FUN_00bfb05c(undefined8 param_1,long param_2,code *param_3,ulong param_4)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_38;
  void *local_30;
  
  plVar1 = (long *)(param_2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(param_3 + *plVar1);
  }
  (*param_3)(&local_38,plVar1);
  FUN_00bfb108(param_1,&local_38);
  pvVar3 = local_38;
  if (local_38 != (void *)0x0) {
    while (pvVar3 != local_30) {
      pvVar2 = (void *)((long)local_30 + -0x130);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_0066919c(pvVar2);
      local_30 = pvVar2;
    }
    local_30 = pvVar3;
    operator_delete(local_38);
  }
  return;
}


// ===== 00bfb108  FUN_00bfb108 =====

undefined8 * FUN_00bfb108(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[1];
    pvVar1 = pvVar3;
    if (pvVar3 != pvVar2) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0x130);
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_0066919c(pvVar2);
      } while (pvVar2 != pvVar3);
      pvVar1 = (void *)*param_1;
    }
    param_1[1] = pvVar3;
    operator_delete(pvVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_1;
}


// ===== 00bfb1bc  FUN_00bfb1bc =====

void FUN_00bfb1bc(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_00bfb05c(param_1 + 3,*param_1,param_1[1],param_1[2]);
  FUN_0066f2dc((long)param_1 + 0x34);
  return;
}


// ===== 00bfb1f4  FUN_00bfb1f4 =====

void FUN_00bfb1f4(undefined8 param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar1 = FUN_007e18fc(param_3);
  if ((uVar1 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00bfb2dc;
    local_e0[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_e0,&uStack_11,&uStack_12);
    (*local_d0)(0,local_e0,local_e0);
    FUN_0066f318((long)param_2 + 0xc4,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar2 = (code *)param_2[1];
    if ((param_2[2] & 1U) != 0) {
      pcVar2 = *(code **)(pcVar2 + *(long *)(*param_2 + (param_2[2] >> 1)));
    }
    (*pcVar2)(local_e0);
    FUN_00b618b4(param_2 + 3,local_e0);
    FUN_0066981c(local_e0);
  }
  FUN_0066953c(param_1,param_2 + 3);
  return;
}


// ===== 00bfb2dc  FUN_00bfb2dc =====

void FUN_00bfb2dc(undefined8 *param_1)

{
  code *pcVar1;
  long *plVar2;
  undefined1 auStack_c8 [168];
  
  plVar2 = (long *)*param_1;
  pcVar1 = (code *)plVar2[1];
  if ((plVar2[2] & 1U) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(*plVar2 + (plVar2[2] >> 1)));
  }
  (*pcVar1)(auStack_c8);
  FUN_00b618b4(plVar2 + 3,auStack_c8);
  FUN_0066981c(auStack_c8);
  FUN_0066f2dc((long)plVar2 + 0xc4);
  return;
}


// ===== 00bfb344  FUN_00bfb344 =====

void FUN_00bfb344(undefined4 *param_1,undefined8 *param_2,long *param_3)

{
  undefined4 uVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar3 = FUN_007e18fc(param_3);
  if ((uVar3 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00bfb518;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318(param_2 + 9,0x7fffffffffffffff,3000000);
  }
  else {
    FUN_00bfb440(param_2 + 3,*param_2,param_2[1],param_2[2],param_2[8]);
  }
  cVar2 = *(char *)((long)param_2 + 0x37);
  *param_1 = *(undefined4 *)(param_2 + 3);
  if (cVar2 < '\0') {
    FUN_005478d8(param_1 + 2,param_2[4],param_2[5]);
  }
  else {
    uVar5 = param_2[4];
    uVar4 = param_2[6];
    *(undefined8 *)(param_1 + 4) = param_2[5];
    *(undefined8 *)(param_1 + 2) = uVar5;
    *(undefined8 *)(param_1 + 6) = uVar4;
  }
  uVar1 = *(undefined4 *)((long)param_2 + 0x3b);
  param_1[8] = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((long)param_1 + 0x23) = uVar1;
  return;
}


// ===== 00bfb440  FUN_00bfb440 =====

void FUN_00bfb440(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5)

{
  undefined8 ***pppuVar1;
  long *plVar2;
  undefined4 local_48 [2];
  undefined8 **local_40;
  ulong uStack_38;
  undefined7 local_30;
  byte bStack_29;
  undefined4 local_28;
  undefined3 uStack_24;
  
  plVar2 = (long *)(param_2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(param_3 + *plVar2);
  }
  (*param_3)(local_48,plVar2,param_5);
  plVar2 = (long *)(param_1 + 2);
  *param_1 = local_48[0];
  if (param_1 != local_48) {
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      pppuVar1 = (undefined8 ***)local_40;
      if (-1 < (char)bStack_29) {
        uStack_38 = (ulong)bStack_29;
        pppuVar1 = &local_40;
      }
      FUN_00547f08(plVar2,pppuVar1,uStack_38);
    }
    else if ((char)bStack_29 < '\0') {
      FUN_00547fc0(plVar2,local_40,uStack_38);
    }
    else {
      *(ulong *)(param_1 + 4) = uStack_38;
      *plVar2 = (long)local_40;
      *(ulong *)(param_1 + 6) = CONCAT17(bStack_29,local_30);
    }
  }
  param_1[8] = local_28;
  *(uint *)((long)param_1 + 0x23) = CONCAT31(uStack_24,local_28._3_1_);
  if ((char)bStack_29 < '\0') {
    operator_delete(local_40);
  }
  return;
}


// ===== 00bfb518  FUN_00bfb518 =====

void FUN_00bfb518(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_00bfb440(param_1 + 3,*param_1,param_1[1],param_1[2],param_1[8]);
  FUN_0066f2dc(param_1 + 9);
  return;
}


// ===== 00bfb554  FUN_00bfb554 =====

void FUN_00bfb554(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  undefined1 uStack_52;
  undefined1 uStack_51;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  uVar4 = FUN_007e18fc(param_2);
  if ((uVar4 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00bfb660;
    local_50[0] = param_1;
    (**(code **)(*param_2 + 8))(param_2,local_50,&uStack_51,&uStack_52);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318(param_1 + 6,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar5 = (code *)param_1[1];
    lVar2 = param_1[4];
    lVar3 = param_1[5];
    plVar1 = (long *)(*param_1 + (param_1[2] >> 1));
    if ((param_1[2] & 1U) != 0) {
      pcVar5 = *(code **)(pcVar5 + *plVar1);
    }
    (**(code **)(lVar3 + 0x10))(1,lVar3,local_50);
    pcStack_38 = *(code **)(lVar3 + 0x18);
    local_40 = *(code **)(lVar3 + 0x10);
    *(code **)(lVar3 + 0x10) = FUN_00433984;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    (*pcVar5)(plVar1,lVar2,local_50);
    (*local_40)(0,local_50,local_50);
  }
  return;
}


// ===== 00bfb660  FUN_00bfb660 =====

void FUN_00bfb660(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  undefined1 auStack_60 [16];
  code *local_50;
  undefined8 uStack_48;
  
  plVar4 = (long *)*param_1;
  pcVar5 = (code *)plVar4[1];
  lVar2 = plVar4[4];
  lVar3 = plVar4[5];
  plVar1 = (long *)(*plVar4 + (plVar4[2] >> 1));
  if ((plVar4[2] & 1U) != 0) {
    pcVar5 = *(code **)(pcVar5 + *plVar1);
  }
  (**(code **)(lVar3 + 0x10))(1,lVar3,auStack_60);
  uStack_48 = *(undefined8 *)(lVar3 + 0x18);
  local_50 = *(code **)(lVar3 + 0x10);
  *(code **)(lVar3 + 0x10) = FUN_00433984;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  (*pcVar5)(plVar1,lVar2,auStack_60);
  (*local_50)(0,auStack_60,auStack_60);
  FUN_0066f2dc(plVar4 + 6);
  return;
}


// ===== 00bfb70c  FUN_00bfb70c =====

void FUN_00bfb70c(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  plVar1 = (long *)(*plVar3 + (plVar3[2] >> 1));
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  (*pcVar2)(plVar1,*(undefined8 *)plVar3[4]);
  FUN_0066f2dc(plVar3 + 5);
  return;
}


// ===== 00bfb758  FUN_00bfb758 =====

void FUN_00bfb758(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar2 = FUN_007e18fc(param_3);
  if ((uVar2 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00bfb860;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318((long)param_2 + 0x24,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar5 = (code *)param_2[1];
    if ((param_2[2] & 1U) != 0) {
      pcVar5 = *(code **)(pcVar5 + *(long *)(*param_2 + (param_2[2] >> 1)));
    }
    (*pcVar5)(local_50);
    plVar1 = local_50[0];
    plVar3 = (long *)param_2[3];
    local_50[0] = (long *)0x0;
    param_2[3] = (long)plVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      if (local_50[0] != (long *)0x0) {
        (**(code **)(*local_50[0] + 8))();
      }
    }
  }
  lVar4 = param_2[3];
  param_2[3] = 0;
  *param_1 = lVar4;
  return;
}


// ===== 00bfb860  FUN_00bfb860 =====

void FUN_00bfb860(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long *local_8;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(*plVar4 + (plVar4[2] >> 1)));
  }
  (*pcVar3)(&local_8);
  plVar1 = local_8;
  local_8 = (long *)0x0;
  plVar2 = (long *)plVar4[3];
  plVar4[3] = (long)plVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    if (local_8 != (long *)0x0) {
      (**(code **)(*local_8 + 8))();
    }
  }
  FUN_0066f2dc((long)plVar4 + 0x24);
  return;
}


// ===== 00bfb8e0  FUN_00bfb8e0 =====

void FUN_00bfb8e0(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  uVar2 = FUN_007e18fc(param_2);
  if ((uVar2 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00bfb9c0;
    local_40[0] = param_1;
    (**(code **)(*param_2 + 8))(param_2,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(param_1 + 5,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar3 = (code *)param_1[1];
    plVar1 = (long *)(*param_1 + (param_1[2] >> 1));
    if ((param_1[2] & 1U) != 0) {
      pcVar3 = *(code **)(pcVar3 + *plVar1);
    }
    local_40[0] = *(long **)param_1[4];
    *(undefined8 *)param_1[4] = 0;
    (*pcVar3)(plVar1,local_40);
    if (local_40[0] != (long *)0x0) {
      (**(code **)(*local_40[0] + 8))();
    }
  }
  return;
}


// ===== 00bfb9c0  FUN_00bfb9c0 =====

void FUN_00bfb9c0(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long *local_8;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  plVar1 = (long *)(*plVar3 + (plVar3[2] >> 1));
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  local_8 = *(long **)plVar3[4];
  *(undefined8 *)plVar3[4] = 0;
  (*pcVar2)(plVar1,&local_8);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  FUN_0066f2dc(plVar3 + 5);
  return;
}


// ===== 00bfba30  FUN_00bfba30 =====

void FUN_00bfba30(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar2 = FUN_007e18fc(param_3);
  if ((uVar2 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00bfbb38;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318((long)param_2 + 0x24,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar5 = (code *)param_2[1];
    if ((param_2[2] & 1U) != 0) {
      pcVar5 = *(code **)(pcVar5 + *(long *)(*param_2 + (param_2[2] >> 1)));
    }
    (*pcVar5)(local_50);
    plVar1 = local_50[0];
    plVar3 = (long *)param_2[3];
    local_50[0] = (long *)0x0;
    param_2[3] = (long)plVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      if (local_50[0] != (long *)0x0) {
        (**(code **)(*local_50[0] + 8))();
      }
    }
  }
  lVar4 = param_2[3];
  param_2[3] = 0;
  *param_1 = lVar4;
  return;
}


// ===== 00bfbb38  FUN_00bfbb38 =====

void FUN_00bfbb38(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long *local_8;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(*plVar4 + (plVar4[2] >> 1)));
  }
  (*pcVar3)(&local_8);
  plVar1 = local_8;
  local_8 = (long *)0x0;
  plVar2 = (long *)plVar4[3];
  plVar4[3] = (long)plVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    if (local_8 != (long *)0x0) {
      (**(code **)(*local_8 + 8))();
    }
  }
  FUN_0066f2dc((long)plVar4 + 0x24);
  return;
}


// ===== 00bfbbb8  FUN_00bfbbb8 =====

void FUN_00bfbbb8(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  plVar1 = (long *)(*plVar4 + (plVar4[2] >> 1));
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  uVar2 = *(undefined8 *)plVar4[4];
  *(undefined8 *)plVar4[4] = 0;
  (*pcVar3)(plVar1,uVar2);
  FUN_0066f2dc(plVar4 + 5);
  return;
}


// ===== 00bfbc08  FUN_00bfbc08 =====

void FUN_00bfbc08(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  uVar2 = FUN_007e18fc(param_2);
  if ((uVar2 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00bfbce8;
    local_40[0] = param_1;
    (**(code **)(*param_2 + 8))(param_2,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(param_1 + 5,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar3 = (code *)param_1[1];
    plVar1 = (long *)(*param_1 + (param_1[2] >> 1));
    if ((param_1[2] & 1U) != 0) {
      pcVar3 = *(code **)(pcVar3 + *plVar1);
    }
    local_40[0] = *(long **)param_1[4];
    *(undefined8 *)param_1[4] = 0;
    (*pcVar3)(plVar1,local_40);
    if (local_40[0] != (long *)0x0) {
      (**(code **)(*local_40[0] + 8))();
    }
  }
  return;
}


// ===== 00bfbce8  FUN_00bfbce8 =====

void FUN_00bfbce8(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long *local_8;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  plVar1 = (long *)(*plVar3 + (plVar3[2] >> 1));
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  local_8 = *(long **)plVar3[4];
  *(undefined8 *)plVar3[4] = 0;
  (*pcVar2)(plVar1,&local_8);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  FUN_0066f2dc(plVar3 + 5);
  return;
}


// ===== 00bfbd58  FUN_00bfbd58 =====

void FUN_00bfbd58(undefined4 *param_1,undefined8 *param_2,long *param_3)

{
  undefined4 uVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar3 = FUN_007e18fc(param_3);
  if ((uVar3 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00bfbf2c;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318(param_2 + 9,0x7fffffffffffffff,3000000);
  }
  else {
    FUN_00bfbe54(param_2 + 3,*param_2,param_2[1],param_2[2],param_2[8]);
  }
  cVar2 = *(char *)((long)param_2 + 0x37);
  *param_1 = *(undefined4 *)(param_2 + 3);
  if (cVar2 < '\0') {
    FUN_005478d8(param_1 + 2,param_2[4],param_2[5]);
  }
  else {
    uVar5 = param_2[4];
    uVar4 = param_2[6];
    *(undefined8 *)(param_1 + 4) = param_2[5];
    *(undefined8 *)(param_1 + 2) = uVar5;
    *(undefined8 *)(param_1 + 6) = uVar4;
  }
  uVar1 = *(undefined4 *)((long)param_2 + 0x3b);
  param_1[8] = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((long)param_1 + 0x23) = uVar1;
  return;
}


// ===== 00bfbe54  FUN_00bfbe54 =====

void FUN_00bfbe54(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5)

{
  undefined8 ***pppuVar1;
  long *plVar2;
  undefined4 local_48 [2];
  undefined8 **local_40;
  ulong uStack_38;
  undefined7 local_30;
  byte bStack_29;
  undefined4 local_28;
  undefined3 uStack_24;
  
  plVar2 = (long *)(param_2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(param_3 + *plVar2);
  }
  (*param_3)(local_48,plVar2,param_5);
  plVar2 = (long *)(param_1 + 2);
  *param_1 = local_48[0];
  if (param_1 != local_48) {
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      pppuVar1 = (undefined8 ***)local_40;
      if (-1 < (char)bStack_29) {
        uStack_38 = (ulong)bStack_29;
        pppuVar1 = &local_40;
      }
      FUN_00547f08(plVar2,pppuVar1,uStack_38);
    }
    else if ((char)bStack_29 < '\0') {
      FUN_00547fc0(plVar2,local_40,uStack_38);
    }
    else {
      *(ulong *)(param_1 + 4) = uStack_38;
      *plVar2 = (long)local_40;
      *(ulong *)(param_1 + 6) = CONCAT17(bStack_29,local_30);
    }
  }
  param_1[8] = local_28;
  *(uint *)((long)param_1 + 0x23) = CONCAT31(uStack_24,local_28._3_1_);
  if ((char)bStack_29 < '\0') {
    operator_delete(local_40);
  }
  return;
}


// ===== 00bfbf2c  FUN_00bfbf2c =====

void FUN_00bfbf2c(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_00bfbe54(param_1 + 3,*param_1,param_1[1],param_1[2],param_1[8]);
  FUN_0066f2dc(param_1 + 9);
  return;
}


// ===== 00bfbf68  FUN_00bfbf68 =====

void FUN_00bfbf68(undefined8 *param_1)

{
  long *plVar1;
  undefined4 local_48 [2];
  void *local_40;
  undefined8 uStack_38;
  long local_30;
  undefined3 local_28;
  undefined1 uStack_25;
  undefined3 uStack_24;
  
  param_1 = (undefined8 *)*param_1;
  local_48[0] = *(undefined4 *)(param_1 + 1);
  plVar1 = (long *)*param_1;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    FUN_005478d8(&local_40,param_1[2],param_1[3]);
  }
  else {
    local_30 = param_1[4];
    uStack_38 = param_1[3];
    local_40 = (void *)param_1[2];
  }
  local_28 = (undefined3)*(undefined4 *)(param_1 + 5);
  uStack_25 = (undefined1)*(undefined4 *)((long)param_1 + 0x2b);
  uStack_24 = (undefined3)((uint)*(undefined4 *)((long)param_1 + 0x2b) >> 8);
  (**(code **)(*plVar1 + 0x28))(plVar1,local_48);
  if (local_30 < 0) {
    operator_delete(local_40);
  }
  return;
}


// ===== 00bfc008  FUN_00bfc008 =====

void FUN_00bfc008(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xbfc094);
      (*pcVar1)();
    }
    plVar2 = (long *)*param_2;
    if (plVar2 != (long *)0x0) {
      if (*(char *)((long)plVar2 + 0x27) < '\0') {
        operator_delete((void *)plVar2[2]);
      }
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
      operator_delete(plVar2);
      return;
    }
  }
  return;
}


// ===== 00bfc094  FUN_00bfc094 =====

void FUN_00bfc094(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  FUN_00ca32e8(*(undefined8 *)(*plVar1 + 0x4a8),plVar1[2],plVar1[1]);
  return;
}


// ===== 00bfc0ac  FUN_00bfc0ac =====

void FUN_00bfc0ac(undefined8 *param_1)

{
  long *plVar1;
  undefined4 local_48 [2];
  void *local_40;
  undefined8 uStack_38;
  long local_30;
  undefined3 local_28;
  undefined1 uStack_25;
  undefined3 uStack_24;
  
  param_1 = (undefined8 *)*param_1;
  local_48[0] = *(undefined4 *)(param_1 + 1);
  plVar1 = (long *)*param_1;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    FUN_005478d8(&local_40,param_1[2],param_1[3]);
  }
  else {
    local_30 = param_1[4];
    uStack_38 = param_1[3];
    local_40 = (void *)param_1[2];
  }
  local_28 = (undefined3)*(undefined4 *)(param_1 + 5);
  uStack_25 = (undefined1)*(undefined4 *)((long)param_1 + 0x2b);
  uStack_24 = (undefined3)((uint)*(undefined4 *)((long)param_1 + 0x2b) >> 8);
  (**(code **)(*plVar1 + 0x20))(plVar1,local_48);
  if (local_30 < 0) {
    operator_delete(local_40);
  }
  return;
}


// ===== 00bfc14c  FUN_00bfc14c =====

void FUN_00bfc14c(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xbfc1d8);
      (*pcVar1)();
    }
    plVar2 = (long *)*param_2;
    if (plVar2 != (long *)0x0) {
      if (*(char *)((long)plVar2 + 0x27) < '\0') {
        operator_delete((void *)plVar2[2]);
      }
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
      operator_delete(plVar2);
      return;
    }
  }
  return;
}


// ===== 00bfc1d8  FUN_00bfc1d8 =====

void FUN_00bfc1d8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *local_28;
  
  plVar2 = (long *)*param_1;
  lVar1 = plVar2[1];
  local_28 = (long *)plVar2[2];
  uVar3 = *(undefined8 *)(*plVar2 + 0x4a8);
  plVar2[1] = 0;
  if (local_28 != (long *)0x0) {
    (**(code **)*local_28)();
  }
  FUN_00ca3528(uVar3,lVar1,&local_28);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  return;
}


// ===== 00bfc24c  FUN_00bfc24c =====

void FUN_00bfc24c(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xbfc2e0);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      if (*(long **)((long)pvVar2 + 0x10) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar2 + 0x10) + 8))();
      }
      pvVar3 = *(void **)((long)pvVar2 + 8);
      *(undefined8 *)((long)pvVar2 + 8) = 0;
      if (pvVar3 != (void *)0x0) {
        FUN_00afbecc(pvVar3);
        operator_delete(pvVar3);
      }
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00bfc2e0  FUN_00bfc2e0 =====

void FUN_00bfc2e0(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  FUN_00ca7bec(*(undefined8 *)(*plVar1 + 0x4a8),plVar1[2],plVar1[1]);
  return;
}


// ===== 00bfc2f8  FUN_00bfc2f8 =====

void FUN_00bfc2f8(undefined8 *param_1)

{
  long *plVar1;
  undefined4 local_48 [2];
  void *local_40;
  undefined8 uStack_38;
  long local_30;
  undefined3 local_28;
  undefined1 uStack_25;
  undefined3 uStack_24;
  
  param_1 = (undefined8 *)*param_1;
  local_48[0] = *(undefined4 *)(param_1 + 1);
  plVar1 = (long *)*param_1;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    FUN_005478d8(&local_40,param_1[2],param_1[3]);
  }
  else {
    local_30 = param_1[4];
    uStack_38 = param_1[3];
    local_40 = (void *)param_1[2];
  }
  local_28 = (undefined3)*(undefined4 *)(param_1 + 5);
  uStack_25 = (undefined1)*(undefined4 *)((long)param_1 + 0x2b);
  uStack_24 = (undefined3)((uint)*(undefined4 *)((long)param_1 + 0x2b) >> 8);
  (**(code **)(*plVar1 + 0x20))(plVar1,local_48);
  if (local_30 < 0) {
    operator_delete(local_40);
  }
  return;
}


// ===== 00bfc398  FUN_00bfc398 =====

void FUN_00bfc398(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xbfc424);
      (*pcVar1)();
    }
    plVar2 = (long *)*param_2;
    if (plVar2 != (long *)0x0) {
      if (*(char *)((long)plVar2 + 0x27) < '\0') {
        operator_delete((void *)plVar2[2]);
      }
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
      operator_delete(plVar2);
      return;
    }
  }
  return;
}


// ===== 00bfc424  FUN_00bfc424 =====

void FUN_00bfc424(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *local_28;
  
  plVar2 = (long *)*param_1;
  lVar1 = plVar2[1];
  local_28 = (long *)plVar2[2];
  uVar3 = *(undefined8 *)(*plVar2 + 0x4a8);
  plVar2[1] = 0;
  if (local_28 != (long *)0x0) {
    (**(code **)*local_28)();
  }
  FUN_00ca7e2c(uVar3,lVar1,&local_28);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  return;
}


// ===== 00bfc498  FUN_00bfc498 =====

void FUN_00bfc498(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xbfc52c);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      if (*(long **)((long)pvVar2 + 0x10) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar2 + 0x10) + 8))();
      }
      pvVar3 = *(void **)((long)pvVar2 + 8);
      *(undefined8 *)((long)pvVar2 + 8) = 0;
      if (pvVar3 != (void *)0x0) {
        FUN_00afbecc(pvVar3);
        operator_delete(pvVar3);
      }
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00bfc52c  FUN_00bfc52c =====

void FUN_00bfc52c(undefined8 *param_1)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  lVar4 = *plVar5;
  if ((char)plVar5[1] == '\x01') {
    FUN_00c35994(*(undefined8 *)(lVar4 + 0x498));
  }
  FUN_00c35830(*(undefined8 *)(lVar4 + 0x498),plVar5[2]);
  lVar1 = plVar5[5];
  if ((*(byte *)(lVar1 + 0x9c) & 1) == 0) {
    uVar3 = *(undefined4 *)(lVar1 + 0xa0);
  }
  else {
    uVar3 = 1;
  }
  bVar2 = FUN_00bf033c(lVar4,plVar5[3],plVar5[4],*(undefined4 *)(lVar1 + 0x18),
                       *(undefined4 *)(lVar1 + 0x40),uVar3,*(undefined8 *)(lVar1 + 0xe0),
                       *(undefined8 *)(lVar1 + 0xd8),0);
  *(byte *)*param_1 = bVar2 & 1;
  return;
}


// ===== 00bfc5c8  FUN_00bfc5c8 =====

void FUN_00bfc5c8(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  undefined4 local_60;
  undefined3 uStack_5c;
  undefined4 local_58 [2];
  void *local_50;
  undefined8 uStack_48;
  long local_40;
  undefined4 local_38;
  undefined3 uStack_34;
  
  uVar1 = *param_2;
  param_1 = (undefined8 *)*param_1;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    FUN_005478d8(&local_78,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
  }
  else {
    uStack_70 = *(undefined8 *)(param_2 + 4);
    local_78 = *(void **)(param_2 + 2);
    local_68 = *(long *)(param_2 + 6);
  }
  local_60._0_3_ = (undefined3)param_2[8];
  local_60._3_1_ = (undefined1)*(undefined4 *)((long)param_2 + 0x23);
  uStack_5c = (undefined3)((uint)*(undefined4 *)((long)param_2 + 0x23) >> 8);
  (**(code **)(*(long *)*param_1 + 0xb8))();
  local_58[0] = uVar1;
  if (local_68 < 0) {
    FUN_005478d8(&local_50,local_78,uStack_70);
  }
  else {
    uStack_48 = uStack_70;
    local_50 = local_78;
    local_40 = local_68;
  }
  local_38 = local_60;
  uStack_34 = uStack_5c;
  (*(code *)param_1[3])(param_1 + 1,local_58);
  if (local_40 < 0) {
    operator_delete(local_50);
  }
  if (local_68 < 0) {
    operator_delete(local_78);
  }
  return;
}


// ===== 00bfc6ec  FUN_00bfc6ec =====

undefined8 * FUN_00bfc6ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  puVar4 = (undefined8 *)param_1[4];
  uVar5 = param_1[2];
  uVar2 = param_1[1];
  uVar7 = param_1[4];
  uVar6 = param_1[3];
  *puVar1 = *param_1;
  pcVar3 = (code *)*puVar4;
  puVar1[2] = uVar5;
  puVar1[1] = uVar2;
  puVar1[4] = uVar7;
  puVar1[3] = uVar6;
  if (pcVar3 != (code *)0x0) {
    uVar2 = (*pcVar3)(param_1[1]);
    puVar1[1] = uVar2;
  }
  return puVar1;
}


// ===== 00bfc750  FUN_00bfc750 =====

void FUN_00bfc750(void *param_1)

{
  code *pcVar1;
  
  if (param_1 != (void *)0x0) {
    pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
    }
    operator_delete(param_1);
    return;
  }
  return;
}


// ===== 00bfc79c  FUN_00bfc79c =====

void FUN_00bfc79c(undefined8 *param_1)

{
  undefined8 ***pppuVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined4 local_48 [2];
  undefined8 **local_40;
  ulong uStack_38;
  undefined7 local_30;
  byte bStack_29;
  undefined4 uStack_28;
  undefined3 uStack_24;
  
  plVar3 = *(long **)param_1[1];
  (**(code **)(*plVar3 + 0x170))(local_48,plVar3,((undefined8 *)param_1[1])[1]);
  puVar2 = (undefined4 *)*param_1;
  plVar3 = (long *)(puVar2 + 2);
  *puVar2 = local_48[0];
  if (puVar2 != local_48) {
    if (*(char *)((long)puVar2 + 0x1f) < '\0') {
      pppuVar1 = (undefined8 ***)local_40;
      if (-1 < (char)bStack_29) {
        uStack_38 = (ulong)bStack_29;
        pppuVar1 = &local_40;
      }
      FUN_00547f08(plVar3,pppuVar1,uStack_38);
    }
    else if ((char)bStack_29 < '\0') {
      FUN_00547fc0(plVar3,local_40,uStack_38);
    }
    else {
      *(ulong *)(puVar2 + 6) = CONCAT17(bStack_29,local_30);
      *(ulong *)(puVar2 + 4) = uStack_38;
      *plVar3 = (long)local_40;
    }
  }
  *(uint *)((long)puVar2 + 0x23) = CONCAT31(uStack_24,uStack_28._3_1_);
  puVar2[8] = uStack_28;
  if ((char)bStack_29 < '\0') {
    operator_delete(local_40);
  }
  return;
}


// ===== 00bfc870  FUN_00bfc870 =====

void FUN_00bfc870(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(**(long **)(*param_1 + 0x240) + 0x68))();
                    /* WARNING: Could not recover jumptable at 0x00bfc8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x50))(plVar1,param_1 + 1);
  return;
}


// ===== 00bfc8b4  FUN_00bfc8b4 =====

void FUN_00bfc8b4(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bfc8cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x180))((long *)*param_1,*(undefined1 *)(param_1 + 1));
  return;
}


// ===== 00bfc8d0  FUN_00bfc8d0 =====

void FUN_00bfc8d0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bfc8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x188))((long *)*param_1,*(undefined1 *)(param_1 + 1));
  return;
}


// ===== 00bfc8ec  FUN_00bfc8ec =====

void FUN_00bfc8ec(undefined8 *param_1)

{
  long *plVar1;
  long *local_8;
  
  local_8 = (long *)param_1[1];
  plVar1 = (long *)*param_1;
  if (local_8 != (long *)0x0) {
    (**(code **)*local_8)();
  }
  (**(code **)(*plVar1 + 0x1d0))(plVar1,&local_8);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  return;
}


// ===== 00bfc954  FUN_00bfc954 =====

void FUN_00bfc954(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  byte bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)param_1[1];
  lVar1 = *plVar5;
  plVar2 = (long *)plVar5[1];
  plVar5[1] = 0;
  lVar6 = plVar5[2];
  uVar4 = FUN_007ebde8(*(undefined8 *)(lVar1 + 0x260));
  if ((uVar4 & 1) == 0) {
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    bVar3 = 0;
  }
  else {
    plVar5 = *(long **)(lVar1 + 0x38);
    bVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,plVar2,lVar6);
  }
  *(byte *)*param_1 = bVar3 & 1;
  return;
}


// ===== 00bfc9dc  FUN_00bfc9dc =====

void FUN_00bfc9dc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bfc9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*param_1 + 0x38) + 0x18))();
  return;
}


// ===== 00bfc9f4  FUN_00bfc9f4 =====

void FUN_00bfc9f4(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  param_1[1] = 0;
  FUN_00c98500(*param_1 + 0x3d8,lVar1);
  return;
}


// ===== 00bfca0c  FUN_00bfca0c =====

void FUN_00bfca0c(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
    uVar3 = param_2[1];
    param_2[1] = 0;
    param_3[1] = uVar3;
  }
  else if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xbfca5c);
    (*pcVar1)();
  }
  plVar2 = (long *)param_2[1];
  param_2[1] = 0;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00bfca50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}


// ===== 00bfca5c  FUN_00bfca5c =====

void FUN_00bfca5c(long *param_1)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = (**(code **)(**(long **)(*param_1 + 0x4a8) + 0x18))();
  if (lVar1 != 0) {
    lVar1 = FUN_00afc42c();
  }
  pvVar2 = *(void **)param_1[1];
  *(long *)param_1[1] = lVar1;
  if (pvVar2 != (void *)0x0) {
    FUN_00afbecc(pvVar2);
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 00bfcacc  FUN_00bfcacc =====

void FUN_00bfcacc(long *param_1)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = (**(code **)(**(long **)(*param_1 + 0x4a8) + 0x20))();
  if (lVar1 != 0) {
    lVar1 = FUN_00afc42c();
  }
  pvVar2 = *(void **)param_1[1];
  *(long *)param_1[1] = lVar1;
  if (pvVar2 != (void *)0x0) {
    FUN_00afbecc(pvVar2);
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 00bfcb3c  FUN_00bfcb3c =====

void FUN_00bfcb3c(long *param_1)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = (**(code **)(**(long **)(*param_1 + 0x4a8) + 0x28))();
  if (lVar1 != 0) {
    lVar1 = FUN_00afc42c();
  }
  pvVar2 = *(void **)param_1[1];
  *(long *)param_1[1] = lVar1;
  if (pvVar2 != (void *)0x0) {
    FUN_00afbecc(pvVar2);
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 00bfcbac  FUN_00bfcbac =====

void FUN_00bfcbac(long *param_1)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = (**(code **)(**(long **)(*param_1 + 0x4a8) + 0x30))();
  if (lVar1 != 0) {
    lVar1 = FUN_00afc42c();
  }
  pvVar2 = *(void **)param_1[1];
  *(long *)param_1[1] = lVar1;
  if (pvVar2 != (void *)0x0) {
    FUN_00afbecc(pvVar2);
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 00bfcc1c  FUN_00bfcc1c =====

void FUN_00bfcc1c(long *param_1)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = (**(code **)(**(long **)(*param_1 + 0x4a8) + 0x38))();
  if (lVar1 != 0) {
    lVar1 = FUN_00afc42c();
  }
  pvVar2 = *(void **)param_1[1];
  *(long *)param_1[1] = lVar1;
  if (pvVar2 != (void *)0x0) {
    FUN_00afbecc(pvVar2);
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 00bfcc8c  FUN_00bfcc8c =====

void FUN_00bfcc8c(long *param_1)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = (**(code **)(**(long **)(*param_1 + 0x4a8) + 0x40))();
  if (lVar1 != 0) {
    lVar1 = FUN_00afc42c();
  }
  pvVar2 = *(void **)param_1[1];
  *(long *)param_1[1] = lVar1;
  if (pvVar2 != (void *)0x0) {
    FUN_00afbecc(pvVar2);
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 00bfccfc  FUN_00bfccfc =====

void FUN_00bfccfc(long *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00bfcd18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x40))(param_2,*(undefined4 *)(*param_1 + 100));
  return;
}


// ===== 00bfcd1c  FUN_00bfcd1c =====

void FUN_00bfcd1c(long *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00bfcd38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x50))(param_2,*(undefined4 *)(*param_1 + 0x6c));
  return;
}


// ===== 00bfcd3c  FUN_00bfcd3c =====

void FUN_00bfcd3c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = *param_1;
  lVar3 = ((long *)param_1[1])[1];
  for (lVar2 = *(long *)param_1[1]; lVar2 != lVar3; lVar2 = lVar2 + 0x20) {
    (**(code **)(lVar2 + 0x18))(lVar2);
    (**(code **)(lVar2 + 0x10))(0,lVar2,lVar2);
    *(code **)(lVar2 + 0x10) = FUN_00433984;
    *(undefined8 *)(lVar2 + 0x18) = 0;
  }
  FUN_007ebdcc(*(undefined8 *)(lVar1 + 0x260));
  plVar4 = *(long **)(lVar1 + 0x240);
  *(undefined8 *)(lVar1 + 0x240) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0xe8))();
  }
                    /* WARNING: Could not recover jumptable at 0x00bfcdd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 0x38) + 0x18))();
  return;
}


// ===== 00bfcdd8  FUN_00bfcdd8 =====

void FUN_00bfcdd8(undefined8 ****param_1,uint *param_2)

{
  ulong uVar1;
  undefined8 ***__n;
  ulong uVar2;
  uint uVar3;
  undefined8 ****__src;
  undefined8 ***pppuVar4;
  ulong uVar5;
  undefined8 ****__dest;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 ***local_58;
  undefined8 **ppuStack_50;
  ulong local_48;
  
  uVar3 = *param_2;
  local_58 = (undefined8 ****)0x0;
  ppuStack_50 = (undefined8 ***)0x0;
  local_48 = 0;
  if (uVar3 < 7) {
    uVar7 = *(undefined8 *)(&DAT_00258190 + (ulong)uVar3 * 8);
    puVar6 = &DAT_002581c8 + *(int *)(&DAT_002581c8 + (ulong)uVar3 * 4);
  }
  else {
    uVar7 = 0;
    puVar6 = &DAT_001b3348;
  }
  thunk_FUN_00547cac(&local_58,puVar6,uVar7);
  uVar5 = local_48;
  pppuVar4 = local_58;
  __n = (undefined8 ***)ppuStack_50;
  __src = (undefined8 ****)local_58;
  if (-1 < (long)local_48) {
    __n = (undefined8 ***)(local_48 >> 0x38);
    __src = &local_58;
  }
  if ((__src == (undefined8 ****)0x0) && (__n != (undefined8 ***)0x0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:1081: libc++ Hardening assertion __n == 0 || __s != nullptr failed: basic_string(const char*, n) detected nullptr\n"
              );
  }
  if ((undefined8 ***)0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (__n < (undefined8 ***)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)__n;
    __dest = param_1;
  }
  else {
    uVar1 = ((ulong)__n & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 ****)operator_new(uVar2);
    *param_1 = __dest;
    param_1[1] = __n;
    param_1[2] = (undefined8 ***)(uVar2 | 0x8000000000000000);
  }
  if ((undefined8 ****)((long)__dest + (long)__n) < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= __src) && (__src < (undefined8 ****)((long)__dest + (long)__n))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(__dest,__src,(size_t)__n);
  *(undefined1 *)((long)__dest + (long)__n) = 0;
  if ((long)uVar5 < 0) {
    operator_delete(pppuVar4);
  }
  return;
}


// ===== 00bfcf50  FUN_00bfcf50 =====

void FUN_00bfcf50(long *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00bfcf6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x40))(param_2,*(undefined4 *)(*param_1 + 100));
  return;
}


// ===== 00bfcf70  FUN_00bfcf70 =====

void FUN_00bfcf70(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00bfcf8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x48))(param_2,*(undefined4 *)*param_1);
  return;
}


// ===== 00bfcf90  FUN_00bfcf90 =====

void FUN_00bfcf90(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00bfcfac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x50))(param_2,*(undefined4 *)*param_1);
  return;
}


// ===== 00bfcfb0  FUN_00bfcfb0 =====

void FUN_00bfcfb0(undefined8 ***param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined8 **__n;
  ulong uVar2;
  undefined8 ***__src;
  undefined8 **ppuVar3;
  ulong uVar4;
  char *__s;
  size_t sVar5;
  undefined8 ***__dest;
  undefined8 **local_58;
  undefined8 *puStack_50;
  ulong local_48;
  
  local_58 = (undefined8 ***)0x0;
  puStack_50 = (undefined8 **)0x0;
  local_48 = 0;
  __s = (char *)FUN_00afbbec(*param_2);
  if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
              );
  }
  sVar5 = strlen(__s);
  thunk_FUN_00547cac(&local_58,__s,sVar5);
  uVar4 = local_48;
  ppuVar3 = local_58;
  __n = (undefined8 **)puStack_50;
  __src = (undefined8 ***)local_58;
  if (-1 < (long)local_48) {
    __n = (undefined8 **)(local_48 >> 0x38);
    __src = &local_58;
  }
  if ((__src == (undefined8 ***)0x0) && (__n != (undefined8 **)0x0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:1081: libc++ Hardening assertion __n == 0 || __s != nullptr failed: basic_string(const char*, n) detected nullptr\n"
              );
  }
  if ((undefined8 **)0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (__n < (undefined8 **)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)__n;
    __dest = param_1;
  }
  else {
    uVar1 = ((ulong)__n & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 ***)operator_new(uVar2);
    *param_1 = __dest;
    param_1[1] = __n;
    param_1[2] = (undefined8 **)(uVar2 | 0x8000000000000000);
  }
  if ((undefined8 ***)((long)__dest + (long)__n) < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= __src) && (__src < (undefined8 ***)((long)__dest + (long)__n))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(__dest,__src,(size_t)__n);
  *(undefined1 *)((long)__dest + (long)__n) = 0;
  if ((long)uVar4 < 0) {
    operator_delete(ppuVar3);
  }
  return;
}


// ===== 00bfd120  FUN_00bfd120 =====

void FUN_00bfd120(long *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00bfd13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x58))(param_2,*(undefined4 *)(*param_1 + 0x70));
  return;
}


// ===== 00bfd140  FUN_00bfd140 =====

void FUN_00bfd140(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00bfd15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x60))(param_2,*(undefined8 *)*param_1);
  return;
}


// ===== 00bfd160  FUN_00bfd160 =====

void FUN_00bfd160(undefined8 *param_1,long *param_2)

{
  param_1 = (undefined8 *)*param_1;
                    /* WARNING: Could not recover jumptable at 0x00bfd18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x68))
            (param_2,*param_1,*(undefined4 *)param_1[1],param_1[2],*(undefined4 *)param_1[3],
             param_1[4]);
  return;
}


// ===== 00bfd190  FUN_00bfd190 =====

void FUN_00bfd190(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00bfd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x70))(param_2,*param_1);
  return;
}


// ===== 00bfd1ac  FUN_00bfd1ac =====

void FUN_00bfd1ac(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00bfd1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x80))(param_2,*param_1);
  return;
}


// ===== 00bfd1c8  FUN_00bfd1c8 =====

void FUN_00bfd1c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  ulong *puVar3;
  void *local_40;
  ulong uStack_38;
  ulong local_30;
  char local_28;
  
  puVar1 = (undefined8 *)((undefined8 *)param_1[1])[1];
  FUN_00bf14dc(&local_40,*(undefined8 *)param_1[1],*puVar1,puVar1[1]);
  puVar3 = (ulong *)*param_1;
  cVar2 = (char)puVar3[3];
  if (cVar2 == local_28) {
    if (cVar2 != '\0') {
      if (*(char *)((long)puVar3 + 0x17) < '\0') {
        operator_delete((void *)*puVar3);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
      puVar3[2] = local_30;
      puVar3[1] = uStack_38;
      *puVar3 = (ulong)local_40;
      local_30 = local_30 & 0xffffffffffffff;
      local_40 = (void *)((ulong)local_40 & 0xffffffffffffff00);
    }
  }
  else if (cVar2 == '\0') {
    if (puVar3 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar3[2] = local_30;
    puVar3[1] = uStack_38;
    *puVar3 = (ulong)local_40;
    uStack_38 = 0;
    local_30 = 0;
    local_40 = (void *)0x0;
    *(undefined1 *)(puVar3 + 3) = 1;
  }
  else {
    if (*(char *)((long)puVar3 + 0x17) < '\0') {
      operator_delete((void *)*puVar3);
    }
    *(undefined1 *)(puVar3 + 3) = 0;
  }
  if ((local_28 == '\x01') && ((long)local_30 < 0)) {
    operator_delete(local_40);
  }
  return;
}


// ===== 00bfd2dc  FUN_00bfd2dc =====

void FUN_00bfd2dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 local_48 [2];
  void *local_40;
  undefined8 uStack_38;
  long local_30;
  undefined4 uStack_28;
  undefined3 uStack_24;
  
  uVar1 = *param_1;
  puVar2 = (undefined4 *)param_1[1];
  local_48[0] = *puVar2;
  if (*(char *)((long)puVar2 + 0x1f) < '\0') {
    FUN_005478d8(&local_40,*(undefined8 *)(puVar2 + 2),*(undefined8 *)(puVar2 + 4));
  }
  else {
    local_30 = *(long *)(puVar2 + 6);
    uStack_38 = *(undefined8 *)(puVar2 + 4);
    local_40 = *(void **)(puVar2 + 2);
  }
  uStack_28 = puVar2[8];
  uStack_24 = (undefined3)((uint)*(undefined4 *)((long)puVar2 + 0x23) >> 8);
  FUN_00bf176c(uVar1,local_48);
  if (local_30 < 0) {
    operator_delete(local_40);
  }
  return;
}


// ===== 00bfd370  FUN_00bfd370 =====

undefined1  [16]
FUN_00bfd370(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

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
          goto LAB_00bfd4b0;
        }
        if (uVar2 <= uVar1) goto LAB_00bfd3b8;
LAB_00bfd408:
        plVar6 = (long *)*plVar4;
        plVar10 = plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_00bfd424;
      }
      if (iVar3 < 0) goto LAB_00bfd408;
LAB_00bfd3b8:
      plVar6 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar10 = plVar4 + 1;
  }
LAB_00bfd424:
  plVar4 = (long *)operator_new(0x68);
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
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = (long)plVar9;
      plVar4[0xc] = 0;
      plVar4[0xb] = 0;
      plVar4[10] = 0;
      plVar4[9] = 0;
      plVar4[8] = 0;
      plVar4[7] = 0;
      *plVar10 = (long)plVar4;
      plVar6 = plVar4;
      if (*(long *)*plVar8 != 0) {
        *plVar8 = *(long *)*plVar8;
        plVar6 = (long *)*plVar10;
      }
      FUN_005d5b94(plVar8[1],plVar6);
      uVar5 = 1;
      plVar8[2] = plVar8[2] + 1;
LAB_00bfd4b0:
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


// ===== 00bfd4ec  FUN_00bfd4ec =====

void FUN_00bfd4ec(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  uint uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 *extraout_x1;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  void *local_58;
  undefined8 *local_50;
  long local_48;
  
  puVar8 = (undefined8 *)*param_1;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  local_58 = (void *)0x0;
  lVar11 = puVar8[1];
  lVar2 = puVar8[2];
  uVar10 = *puVar8;
  uVar3 = lVar2 - lVar11;
  if (uVar3 == 0) {
    FUN_00bf1f70(uVar10,&local_58);
  }
  else {
    if ((long)uVar3 < 0) {
      uVar5 = FUN_00bf4c6c();
      if ((uVar5 & 0xff) - 1 < 2) {
        *param_3 = *extraout_x1;
      }
      else {
        if ((uVar5 & 0xff) != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0xbfd748);
          (*pcVar4)();
        }
        pvVar6 = (void *)*extraout_x1;
        if (pvVar6 != (void *)0x0) {
          puVar8 = *(undefined8 **)((long)pvVar6 + 8);
          if (puVar8 != (undefined8 *)0x0) {
            puVar9 = *(undefined8 **)((long)pvVar6 + 0x10);
            puVar7 = puVar8;
            if (puVar8 != puVar9) {
              do {
                puVar7 = puVar9 + -4;
                if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  std::__Cr::__libcpp_verbose_abort
                            ("%s",
                             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                            );
                }
                if (*(char *)((long)puVar9 + -9) < '\0') {
                  operator_delete((void *)*puVar7);
                }
                puVar9 = puVar7;
              } while (puVar7 != puVar8);
              puVar7 = *(undefined8 **)((long)pvVar6 + 8);
            }
            *(undefined8 **)((long)pvVar6 + 0x10) = puVar8;
            operator_delete(puVar7);
          }
          operator_delete(pvVar6);
          return;
        }
      }
      return;
    }
    pvVar6 = operator_new(uVar3);
    local_48 = (long)pvVar6 + uVar3;
    lVar12 = 0;
    local_58 = pvVar6;
    do {
      puVar8 = (undefined8 *)((long)pvVar6 + lVar12);
      if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar9 = (undefined8 *)(lVar11 + lVar12);
      if (*(char *)((long)puVar9 + 0x17) < '\0') {
        FUN_005478d8(puVar8,*(undefined8 *)(lVar11 + lVar12),((undefined8 *)(lVar11 + lVar12))[1]);
      }
      else {
        uVar14 = puVar9[1];
        uVar13 = *puVar9;
        puVar8[2] = puVar9[2];
        puVar8[1] = uVar14;
        *puVar8 = uVar13;
      }
      lVar1 = lVar12 + 0x20;
      *(undefined4 *)((long)pvVar6 + lVar12 + 0x18) = *(undefined4 *)(lVar11 + lVar12 + 0x18);
      lVar12 = lVar1;
    } while (lVar11 + lVar1 != lVar2);
    local_50 = (undefined8 *)((long)pvVar6 + lVar1);
    FUN_00bf1f70(uVar10,&local_58);
    if (pvVar6 != (void *)0x0) {
      if (lVar1 != 0) {
        lVar11 = -lVar1;
        puVar8 = (undefined8 *)((long)pvVar6 + lVar1);
        do {
          puVar9 = puVar8 + -4;
          if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          if (*(char *)((long)puVar8 + -9) < '\0') {
            operator_delete((void *)*puVar9);
          }
          lVar11 = lVar11 + 0x20;
          puVar8 = puVar9;
        } while (lVar11 != 0);
      }
      operator_delete(pvVar6);
      return;
    }
  }
  return;
}


// ===== 00bfd668  FUN_00bfd668 =====

void FUN_00bfd668(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xbfd748);
      (*pcVar1)();
    }
    pvVar4 = (void *)*param_2;
    if (pvVar4 != (void *)0x0) {
      puVar5 = *(undefined8 **)((long)pvVar4 + 8);
      if (puVar5 != (undefined8 *)0x0) {
        puVar3 = *(undefined8 **)((long)pvVar4 + 0x10);
        puVar2 = puVar5;
        if (puVar5 != puVar3) {
          do {
            puVar2 = puVar3 + -4;
            if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            if (*(char *)((long)puVar3 + -9) < '\0') {
              operator_delete((void *)*puVar2);
            }
            puVar3 = puVar2;
          } while (puVar2 != puVar5);
          puVar2 = *(undefined8 **)((long)pvVar4 + 8);
        }
        *(undefined8 **)((long)pvVar4 + 0x10) = puVar5;
        operator_delete(puVar2);
      }
      operator_delete(pvVar4);
      return;
    }
  }
  return;
}


// ===== 00bfd748  FUN_00bfd748 =====

void FUN_00bfd748(long *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  void *local_60;
  void *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  (**(code **)(**(long **)param_1[1] + 0x248))(&local_90);
  puVar5 = (undefined8 *)*param_1;
  pvVar1 = (void *)puVar5[6];
  *(undefined8 *)((long)puVar5 + 0x21) = uStack_6f;
  *(ulong *)((long)puVar5 + 0x19) = CONCAT17(uStack_70,local_77);
  puVar5[1] = uStack_88;
  *puVar5 = local_90;
  puVar5[3] = CONCAT71(local_77,uStack_78);
  puVar5[2] = uStack_80;
  if (pvVar1 == (void *)0x0) {
LAB_00bfd830:
    puVar5[6] = local_60;
    puVar5[7] = local_58;
    puVar5[8] = local_50;
    local_60 = (void *)0x0;
    local_58 = (void *)0x0;
    local_50 = 0;
    pvVar1 = (void *)puVar5[9];
    if (pvVar1 == (void *)0x0) {
LAB_00bfd8ec:
      puVar5[9] = local_48;
      puVar5[10] = local_40;
      puVar5[0xb] = local_38;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      if (local_60 == (void *)0x0) {
        return;
      }
      uVar3 = (ulong)(((long)local_60 - (long)local_58) * 0x1555555555555555) >> 3;
      uVar4 = (long)local_58 * -0x1555555555555555 - 8U >> 3;
      if (uVar4 <= uVar3) {
        uVar3 = uVar4;
      }
      pvVar1 = local_58;
      if ((1 < uVar3) && ((((int)local_60 - (int)local_58 | -(int)local_58) & 7U) == 0)) {
        uVar3 = uVar3 & 0x1ffffffffffffffe;
        pvVar1 = (void *)((long)local_58 + uVar3 * -0x18);
        do {
          uVar3 = uVar3 - 2;
        } while (uVar3 != 0);
      }
      do {
        if (pvVar1 == local_60) {
          local_58 = local_60;
          operator_delete(local_60);
          return;
        }
        pvVar1 = (void *)((long)pvVar1 + -0x18);
      } while (pvVar1 != (void *)0x0);
    }
    else {
      pvVar2 = (void *)puVar5[10];
      uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x555555555555555) >> 4;
      uVar4 = (long)pvVar2 * -0x555555555555555 - 0x10U >> 4;
      if (uVar4 <= uVar3) {
        uVar3 = uVar4;
      }
      if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 0xfU) == 0)) {
        uVar3 = uVar3 & 0xffffffffffffffe;
        pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x30);
        do {
          uVar3 = uVar3 - 2;
        } while (uVar3 != 0);
      }
      do {
        if (pvVar2 == pvVar1) {
          puVar5[10] = pvVar1;
          operator_delete(pvVar1);
          puVar5[9] = 0;
          puVar5[10] = 0;
          puVar5[0xb] = 0;
          goto LAB_00bfd8ec;
        }
        pvVar2 = (void *)((long)pvVar2 + -0x30);
      } while (pvVar2 != (void *)0x0);
    }
  }
  else {
    pvVar2 = (void *)puVar5[7];
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
        puVar5[7] = pvVar1;
        operator_delete(pvVar1);
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        goto LAB_00bfd830;
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


// ===== 00bfd9c4  FUN_00bfd9c4 =====

undefined1  [16] FUN_00bfd9c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *__s1;
  ulong uVar1;
  undefined8 *puVar2;
  size_t sVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  puVar9 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)param_1[1];
  lVar5 = (long)puVar4 - (long)puVar9;
  if (lVar5 != 0) {
    uVar10 = lVar5 >> 5;
    puVar8 = (undefined8 *)*param_2;
    uVar1 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      puVar8 = param_2;
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    do {
      uVar11 = uVar10 >> 1;
      puVar2 = puVar9 + uVar11 * 4;
      __s1 = (undefined8 *)*puVar2;
      uVar6 = puVar2[1];
      if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
        __s1 = puVar2;
        uVar6 = (ulong)*(byte *)((long)puVar2 + 0x17);
      }
      sVar3 = uVar1;
      if (uVar6 <= uVar1) {
        sVar3 = uVar6;
      }
      iVar7 = memcmp(__s1,puVar8,sVar3);
      if (iVar7 == 0) {
        if (uVar6 < uVar1) goto LAB_00bfda14;
      }
      else if (iVar7 < 0) {
LAB_00bfda14:
        puVar9 = puVar2 + 4;
        uVar11 = uVar10 + ~uVar11;
      }
      uVar10 = uVar11;
    } while (uVar10 != 0);
  }
  puVar8 = puVar9;
  if (puVar9 != puVar4) {
    uVar1 = param_2[1];
    puVar4 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar4 = param_2;
    }
    puVar2 = (undefined8 *)*puVar9;
    uVar10 = puVar9[1];
    if (-1 < (char)*(byte *)((long)puVar9 + 0x17)) {
      puVar2 = puVar9;
      uVar10 = (ulong)*(byte *)((long)puVar9 + 0x17);
    }
    sVar3 = uVar10;
    if (uVar1 <= uVar10) {
      sVar3 = uVar1;
    }
    iVar7 = memcmp(puVar4,puVar2,sVar3);
    if (iVar7 == 0) {
      if (uVar1 < uVar10) goto LAB_00bfdad0;
    }
    else if (iVar7 < 0) goto LAB_00bfdad0;
    puVar8 = puVar9 + 4;
  }
LAB_00bfdad0:
  auVar12._8_8_ = puVar8;
  auVar12._0_8_ = puVar9;
  return auVar12;
}


// ===== 00bfdaf4  FUN_00bfdaf4 =====

/* WARNING: Removing unreachable block (ram,0x00bfdc7c) */
/* WARNING: Removing unreachable block (ram,0x00bfdcac) */

void FUN_00bfdaf4(long *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined1 uStack_251;
  long local_250;
  undefined1 auStack_248 [408];
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  void *local_80;
  void *local_78;
  void *local_70;
  undefined1 uStack_61;
  long *local_60 [2];
  code *local_50;
  code *pcStack_48;
  
  param_1 = (long *)*param_1;
  lVar8 = *param_1;
  FUN_00afef10(&local_250,param_1 + 4);
  local_80 = operator_new(0x198);
  pvVar1 = (void *)((long)local_80 + 0x198);
  local_70 = pvVar1;
  if (local_80 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  FUN_00afef10(local_80,&local_250);
  local_78 = pvVar1;
  FUN_00aff0f8(&local_250);
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  uVar3 = param_1[2];
  plVar6 = (long *)param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x1f)) {
    uVar3 = (ulong)*(byte *)((long)param_1 + 0x1f);
    plVar6 = param_1 + 1;
  }
  FUN_00c35eb0(&local_b0,*(undefined8 *)(lVar8 + 0x498),plVar6,uVar3,&local_80);
  if ((int)local_b0 == 0) {
    lVar7 = *(long *)(lVar8 + 0x250);
    plVar6 = *(long **)(*(long *)(lVar8 + 0x40) + 0x38);
    if (lVar7 != 0) {
      FUN_00d0f740(1,lVar7);
    }
    local_250 = lVar8;
    FUN_00afef10(auStack_248,param_1 + 4);
    plVar4 = (long *)operator_new(0x1a0);
    *plVar4 = local_250;
    FUN_00afef10(plVar4 + 1,auStack_248);
    local_60[0] = (long *)operator_new(0x30);
    *local_60[0] = lVar7;
    local_60[0][4] = (long)FUN_00bfdebc;
    local_60[0][5] = (long)FUN_00bfddc4;
    local_60[0][2] = (long)plVar4;
    local_50 = FUN_005db390;
    pcStack_48 = FUN_005db348;
    (**(code **)(*plVar6 + 8))(plVar6,local_60,&uStack_61,&uStack_251);
    (*local_50)(0,local_60,local_60);
    FUN_00aff0f8(auStack_248);
  }
  else {
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) == 0) {
      uVar5 = FUN_005ecd5c(&local_b0);
      FUN_00623bb0(&DAT_001f4e98,"../../pc/peer_connection.cc",0x5952,uVar5);
    }
  }
  pvVar2 = local_80;
  pvVar1 = local_78;
  if (local_80 != (void *)0x0) {
    while (pvVar2 != pvVar1) {
      pvVar1 = (void *)((long)pvVar1 + -0x198);
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_00aff0f8(pvVar1);
    }
    local_78 = pvVar2;
    operator_delete(local_80);
  }
  return;
}


// ===== 00bfdd44  FUN_00bfdd44 =====

void FUN_00bfdd44(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xbfddc4);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      FUN_00aff0f8((long)pvVar2 + 0x20);
      if (*(char *)((long)pvVar2 + 0x1f) < '\0') {
        operator_delete(*(void **)((long)pvVar2 + 8));
      }
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00bfddc4  FUN_00bfddc4 =====

void FUN_00bfddc4(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  param_1 = (undefined8 *)*param_1;
  plVar3 = (long *)*param_1;
  (**(code **)(*plVar3 + 0x328))(plVar3,0x20000);
  uVar2 = FUN_007e9674(param_1 + 0xb);
  if ((uVar2 & 1) != 0) {
    (**(code **)(*plVar3 + 0x328))(plVar3,0x1000);
  }
  uVar2 = FUN_007e95a4(param_1 + 0xb);
  if ((uVar2 & 1) != 0) {
    (**(code **)(*plVar3 + 0x328))(plVar3,0x4000);
  }
  if (*(int *)(param_1 + 0xf) == 10) {
    (**(code **)(*plVar3 + 0x328))(plVar3,0x10000);
  }
  iVar1 = (**(code **)(*plVar3 + 0x1a8))(plVar3);
  if ((iVar1 != 0) && (iVar1 = (**(code **)(*plVar3 + 0x1a8))(plVar3), iVar1 != 5)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00bfdea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 800))(plVar3,1);
  return;
}


// ===== 00bfdebc  FUN_00bfdebc =====

void FUN_00bfdebc(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xbfdf24);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      FUN_00aff0f8((long)pvVar2 + 8);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00bfdf24  FUN_00bfdf24 =====

undefined8 * FUN_00bfdf24(long *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  void **ppvVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  void **ppvVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  void *local_80;
  void **ppvStack_78;
  void **local_70;
  void *local_68;
  long local_60;
  long *plStack_58;
  void ***local_48;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    if (param_2 == puVar2) {
      if (param_2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar10 = *param_3;
      puVar2[1] = param_3[1];
      *puVar2 = uVar10;
      puVar2[2] = *param_4;
      plVar3 = param_4 + 1;
      lVar6 = *plVar3;
      plVar4 = puVar2 + 3;
      *plVar4 = lVar6;
      lVar9 = param_4[2];
      puVar2[4] = lVar9;
      if (lVar9 == 0) {
        puVar2[2] = plVar4;
      }
      else {
        *(long **)(lVar6 + 0x10) = plVar4;
        *param_4 = (long)plVar3;
        *plVar3 = 0;
        param_4[2] = 0;
      }
      param_1[1] = (long)(puVar2 + 5);
    }
    else {
      ppvVar7 = (void **)*param_4;
      ppvStack_78 = (void **)param_3[1];
      local_80 = (void *)*param_3;
      plVar3 = param_4 + 1;
      local_68 = (void *)*plVar3;
      local_60 = param_4[2];
      local_70 = &local_68;
      if (local_60 != 0) {
        *(void ***)((long)local_68 + 0x10) = &local_68;
        *param_4 = (long)plVar3;
        *plVar3 = 0;
        param_4[2] = 0;
        puVar2 = (undefined8 *)param_1[1];
        local_70 = ppvVar7;
      }
      plStack_58 = param_1;
      FUN_00bfe1cc(param_1,param_2,puVar2,param_2 + 5);
      ppvVar7 = (void **)(param_2 + 3);
      param_2[1] = ppvStack_78;
      *param_2 = local_80;
      local_48 = (void ***)(param_2 + 2);
      FUN_00bf4c84(&local_48,*ppvVar7);
      param_2[2] = local_70;
      *ppvVar7 = local_68;
      param_2[4] = local_60;
      if (local_60 == 0) {
        param_2[2] = ppvVar7;
      }
      else {
        *(void ***)((long)local_68 + 0x10) = ppvVar7;
        local_68 = (void *)0x0;
        local_60 = 0;
        local_70 = &local_68;
      }
      local_48 = &local_70;
      FUN_00bf4c84(&local_48,local_68);
    }
  }
  else {
    lVar6 = *param_1;
    uVar5 = ((long)puVar2 - lVar6 >> 3) * -0x3333333333333333 + 1;
    if (0x666666666666666 < uVar5) {
      FUN_00bfe7dc();
LAB_00bfe1c8:
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    local_80 = (void *)0x0;
    lVar9 = param_1[2] - lVar6 >> 3;
    uVar8 = lVar9 * -0x6666666666666666;
    if (uVar8 < uVar5 || uVar8 - uVar5 == 0) {
      uVar8 = uVar5;
    }
    if (0x333333333333332 < (ulong)(lVar9 * -0x3333333333333333)) {
      uVar8 = 0x666666666666666;
    }
    if (uVar8 != 0) {
      if (0x666666666666666 < uVar8) goto LAB_00bfe1c8;
      local_80 = operator_new(uVar8 * 0x28);
    }
    local_68 = (void *)((long)local_80 + uVar8 * 0x28);
    ppvStack_78 = (void **)((long)local_80 + ((long)param_2 - lVar6));
    local_70 = ppvStack_78;
    FUN_00bfe318(&local_80,param_3,param_4);
    param_2 = (undefined8 *)FUN_00bfe5e0(param_1,&local_80,param_2);
    ppvVar1 = ppvStack_78;
    ppvVar7 = local_70;
    while (ppvVar1 != ppvVar7) {
      if (ppvVar7 + -5 == (void **)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      local_48 = (void ***)(ppvVar7 + -3);
      FUN_00bf4c84(&local_48,ppvVar7[-2]);
      ppvVar7 = ppvVar7 + -5;
    }
    if (local_80 != (void *)0x0) {
      local_70 = ppvVar7;
      operator_delete(local_80);
    }
  }
  return param_2;
}


// ===== 00bfe1cc  FUN_00bfe1cc =====

void FUN_00bfe1cc(long param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *local_38;
  
  lVar11 = *(long *)(param_1 + 8);
  uVar1 = param_2 + (lVar11 - param_4);
  lVar5 = lVar11;
  if (uVar1 < param_3) {
    lVar5 = 0;
    do {
      puVar2 = (undefined8 *)(lVar11 + lVar5);
      if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar3 = (undefined8 *)(uVar1 + lVar5);
      lVar4 = lVar11 + lVar5;
      uVar12 = *puVar3;
      puVar2[1] = puVar3[1];
      *puVar2 = uVar12;
      *(undefined8 *)(lVar4 + 0x10) = puVar3[2];
      plVar6 = (long *)(uVar1 + lVar5 + 0x18);
      lVar9 = *plVar6;
      plVar8 = (long *)(lVar11 + lVar5 + 0x18);
      *plVar8 = lVar9;
      lVar10 = puVar3[4];
      *(long *)(lVar4 + 0x20) = lVar10;
      if (lVar10 == 0) {
        *(long **)(lVar4 + 0x10) = plVar8;
      }
      else {
        *(long **)(lVar9 + 0x10) = plVar8;
        puVar3[2] = plVar6;
        *plVar6 = 0;
        *(undefined8 *)(uVar1 + lVar5 + 0x20) = 0;
      }
      lVar5 = lVar5 + 0x28;
    } while (uVar1 + lVar5 < param_3);
    lVar5 = lVar11 + lVar5;
  }
  *(long *)(param_1 + 8) = lVar5;
  if (lVar11 != param_4) {
    lVar5 = 0;
    do {
      lVar4 = uVar1 + lVar5;
      lVar9 = lVar11 + lVar5;
      uVar12 = *(undefined8 *)(lVar4 + -0x28);
      plVar8 = (long *)(lVar9 + -0x10);
      *(undefined8 *)(lVar9 + -0x20) = *(undefined8 *)(lVar4 + -0x20);
      *(undefined8 *)(lVar9 + -0x28) = uVar12;
      local_38 = (undefined8 *)(lVar9 + -0x18);
      FUN_00bf4c84(&local_38,*plVar8);
      *(undefined8 *)(lVar9 + -0x18) = *(undefined8 *)(lVar4 + -0x18);
      plVar6 = (long *)(uVar1 + lVar5 + -0x10);
      lVar10 = *plVar6;
      *plVar8 = lVar10;
      lVar7 = *(long *)(lVar4 + -8);
      *(long *)(lVar9 + -8) = lVar7;
      if (lVar7 == 0) {
        *(undefined8 *)(lVar9 + -0x18) = plVar8;
      }
      else {
        *(long **)(lVar10 + 0x10) = plVar8;
        *(long **)(lVar4 + -0x18) = plVar6;
        *plVar6 = 0;
        *(undefined8 *)(uVar1 + lVar5 + -8) = 0;
      }
      lVar5 = lVar5 + -0x28;
    } while (param_4 - lVar11 != lVar5);
  }
  return;
}


// ===== 00bfe318  FUN_00bfe318 =====

void FUN_00bfe318(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  void *pvVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 *local_68;
  
  puVar14 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar14) {
    pvVar4 = (void *)*param_1;
    puVar15 = (undefined8 *)param_1[1];
    if ((long)puVar15 - (long)pvVar4 == 0) {
      uVar8 = (param_1[3] - (long)pvVar4 >> 3) * -0x6666666666666666;
      if (puVar14 == puVar15) {
        uVar8 = 1;
      }
      if (0x666666666666666 < uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar5 = operator_new(uVar8 * 0x28);
      lVar7 = (long)puVar14 - (long)puVar15;
      pvVar1 = (void *)((long)pvVar5 + uVar8 * 0x28);
      pvVar9 = (void *)((long)pvVar5 + (uVar8 >> 2) * 0x28);
      if (lVar7 == 0) {
        *param_1 = (long)pvVar5;
        param_1[1] = (long)pvVar9;
        param_1[2] = (long)pvVar9;
        param_1[3] = (long)pvVar1;
      }
      else {
        lVar6 = 0;
        do {
          puVar2 = (undefined8 *)((long)pvVar9 + lVar6);
          if (puVar2 == (undefined8 *)0x0) goto LAB_00bfe5b4;
          puVar3 = (undefined8 *)((long)puVar15 + lVar6);
          uVar16 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar16;
          *(undefined8 *)((long)pvVar9 + lVar6 + 0x10) = puVar3[2];
          plVar11 = (long *)((long)puVar15 + lVar6 + 0x18);
          lVar13 = *plVar11;
          plVar12 = (long *)((long)pvVar9 + lVar6 + 0x18);
          *plVar12 = lVar13;
          lVar10 = puVar3[4];
          *(long *)((long)pvVar9 + lVar6 + 0x20) = lVar10;
          if (lVar10 == 0) {
            *(long **)((long)pvVar9 + lVar6 + 0x10) = plVar12;
          }
          else {
            *(long **)(lVar13 + 0x10) = plVar12;
            puVar3[2] = plVar11;
            *plVar11 = 0;
            *(undefined8 *)((long)puVar15 + lVar6 + 0x20) = 0;
          }
          lVar6 = lVar6 + 0x28;
        } while (lVar7 != lVar6);
        pvVar4 = (void *)*param_1;
        lVar10 = param_1[1];
        *param_1 = (long)pvVar5;
        param_1[1] = (long)pvVar9;
        lVar6 = param_1[2];
        param_1[2] = (long)pvVar9 + lVar7;
        param_1[3] = (long)pvVar1;
        while (lVar10 != lVar6) {
          if (lVar6 + -0x28 == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          local_68 = (undefined8 *)(lVar6 + -0x18);
          FUN_00bf4c84(&local_68,*(undefined8 *)(lVar6 + -0x10));
          lVar6 = lVar6 + -0x28;
        }
      }
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
    }
    else {
      lVar7 = (((long)puVar15 - (long)pvVar4 >> 3) * -0x3333333333333333 + 1) / 2;
      if (puVar15 == puVar14) {
        puVar14 = puVar15 + lVar7 * -5;
      }
      else {
        do {
          puVar2 = puVar15 + lVar7 * -5;
          uVar16 = *puVar15;
          plVar12 = puVar15 + lVar7 * -5 + 3;
          lVar6 = *plVar12;
          puVar2[1] = puVar15[1];
          *puVar2 = uVar16;
          local_68 = puVar2 + 2;
          FUN_00bf4c84(&local_68,lVar6);
          puVar2[2] = puVar15[2];
          plVar11 = puVar15 + 3;
          lVar6 = *plVar11;
          *plVar12 = lVar6;
          lVar10 = puVar15[4];
          puVar2[4] = lVar10;
          if (lVar10 == 0) {
            puVar2[2] = plVar12;
          }
          else {
            *(long **)(lVar6 + 0x10) = plVar12;
            puVar15[2] = plVar11;
            *plVar11 = 0;
            puVar15[4] = 0;
          }
          puVar15 = puVar15 + 5;
        } while (puVar15 != puVar14);
        puVar14 = puVar15 + lVar7 * -5;
        puVar15 = (undefined8 *)param_1[1];
      }
      param_1[1] = (long)(puVar15 + lVar7 * -5);
      param_1[2] = (long)puVar14;
    }
  }
  if (puVar14 != (undefined8 *)0x0) {
    uVar16 = *param_2;
    puVar14[1] = param_2[1];
    *puVar14 = uVar16;
    puVar14[2] = *param_3;
    plVar11 = param_3 + 1;
    lVar7 = *plVar11;
    plVar12 = puVar14 + 3;
    *plVar12 = lVar7;
    lVar6 = param_3[2];
    puVar14[4] = lVar6;
    if (lVar6 == 0) {
      puVar14[2] = plVar12;
    }
    else {
      *(long **)(lVar7 + 0x10) = plVar12;
      *param_3 = plVar11;
      *plVar11 = 0;
      param_3[2] = 0;
    }
    param_1[2] = (long)(puVar14 + 5);
    return;
  }
LAB_00bfe5b4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00bfe5e0  FUN_00bfe5e0 =====

long FUN_00bfe5e0(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long local_48;
  
  lVar10 = param_1[1];
  lVar3 = param_2[1];
  lVar4 = param_2[2];
  lVar5 = param_3;
  if (param_3 != lVar10) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(lVar4 + lVar5);
      if (puVar1 == (undefined8 *)0x0) goto LAB_00bfe7b4;
      puVar2 = (undefined8 *)(param_3 + lVar5);
      lVar12 = lVar4 + lVar5;
      uVar11 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar11;
      *(undefined8 *)(lVar12 + 0x10) = puVar2[2];
      plVar6 = (long *)(param_3 + lVar5 + 0x18);
      lVar8 = *plVar6;
      plVar7 = (long *)(lVar4 + lVar5 + 0x18);
      *plVar7 = lVar8;
      lVar9 = puVar2[4];
      *(long *)(lVar12 + 0x20) = lVar9;
      if (lVar9 == 0) {
        *(long **)(lVar12 + 0x10) = plVar7;
      }
      else {
        *(long **)(lVar8 + 0x10) = plVar7;
        puVar2[2] = plVar6;
        *plVar6 = 0;
        *(undefined8 *)(param_3 + lVar5 + 0x20) = 0;
      }
      lVar5 = lVar5 + 0x28;
      lVar12 = param_3;
    } while (param_3 + lVar5 != lVar10);
    do {
      if (lVar12 == 0) goto LAB_00bfe7c8;
      local_48 = lVar12 + 0x10;
      FUN_00bf4c84(&local_48,*(undefined8 *)(lVar12 + 0x18));
      lVar12 = lVar12 + 0x28;
    } while (lVar12 != lVar10);
    lVar4 = param_2[2];
    lVar5 = param_1[1];
  }
  param_2[2] = lVar4 + (lVar5 - param_3);
  param_1[1] = param_3;
  lVar4 = *param_1;
  lVar5 = param_2[1] + (lVar4 - param_3);
  if (lVar4 - param_3 != 0) {
    lVar10 = 0;
    do {
      puVar1 = (undefined8 *)(lVar5 + lVar10);
      if (puVar1 == (undefined8 *)0x0) {
LAB_00bfe7b4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar2 = (undefined8 *)(lVar4 + lVar10);
      lVar12 = lVar5 + lVar10;
      uVar11 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar11;
      *(undefined8 *)(lVar12 + 0x10) = puVar2[2];
      plVar6 = (long *)(lVar4 + lVar10 + 0x18);
      lVar8 = *plVar6;
      plVar7 = (long *)(lVar5 + lVar10 + 0x18);
      *plVar7 = lVar8;
      lVar9 = puVar2[4];
      *(long *)(lVar12 + 0x20) = lVar9;
      if (lVar9 == 0) {
        *(long **)(lVar12 + 0x10) = plVar7;
      }
      else {
        *(long **)(lVar8 + 0x10) = plVar7;
        puVar2[2] = plVar6;
        *plVar6 = 0;
        *(undefined8 *)(lVar4 + lVar10 + 0x20) = 0;
      }
      lVar10 = lVar10 + 0x28;
    } while (lVar4 + lVar10 != param_3);
    do {
      if (lVar4 == 0) {
LAB_00bfe7c8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      local_48 = lVar4 + 0x10;
      FUN_00bf4c84(&local_48,*(undefined8 *)(lVar4 + 0x18));
      lVar4 = lVar4 + 0x28;
    } while (lVar4 != param_3);
  }
  param_2[1] = lVar5;
  lVar4 = *param_1;
  lVar10 = param_1[2];
  param_1[1] = lVar4;
  lVar12 = param_2[1];
  lVar5 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = lVar12;
  param_1[2] = lVar5;
  param_2[1] = lVar4;
  param_2[2] = lVar4;
  param_2[3] = lVar10;
  *param_2 = lVar4;
  return lVar3;
}


// ===== 00bfe7dc  FUN_00bfe7dc =====

void FUN_00bfe7dc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00bfe7f4  FUN_00bfe7f4 =====

undefined1  [16] FUN_00bfe7f4(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  plVar4 = param_2 + 1;
  plVar6 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, *param_4 < *(int *)((long)plVar3 + 0x1c)) {
        plVar2 = (long *)*plVar3;
        plVar6 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_00bfe860;
      }
      if (*param_4 <= *(int *)((long)plVar3 + 0x1c)) {
        uVar5 = 0;
        goto LAB_00bfe8c0;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar6 = plVar3 + 1;
  }
LAB_00bfe860:
  plVar3 = (long *)operator_new(0x20);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  iVar1 = *param_4;
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = (long)plVar4;
  *(int *)((long)plVar3 + 0x1c) = iVar1;
  *plVar6 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar4 = (long *)*plVar6;
  }
  FUN_005d5b94(param_2[1],plVar4);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00bfe8c0:
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = plVar3;
  return auVar7;
}


// ===== 00bfe8f0  FUN_00bfe8f0 =====

undefined1  [16] FUN_00bfe8f0(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  plVar4 = param_2 + 1;
  plVar6 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, *param_4 < *(int *)((long)plVar3 + 0x1c)) {
        plVar2 = (long *)*plVar3;
        plVar6 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_00bfe95c;
      }
      if (*param_4 <= *(int *)((long)plVar3 + 0x1c)) {
        uVar5 = 0;
        goto LAB_00bfe9bc;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar6 = plVar3 + 1;
  }
LAB_00bfe95c:
  plVar3 = (long *)operator_new(0x20);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  iVar1 = *param_4;
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = (long)plVar4;
  *(int *)((long)plVar3 + 0x1c) = iVar1;
  *plVar6 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar4 = (long *)*plVar6;
  }
  FUN_005d5b94(param_2[1],plVar4);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00bfe9bc:
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = plVar3;
  return auVar7;
}


// ===== 00bfe9ec  FUN_00bfe9ec =====

void FUN_00bfe9ec(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  void *local_40;
  long lStack_38;
  ulong local_30;
  
  puVar1 = (undefined8 *)*param_1;
  plVar2 = (long *)*puVar1;
  if (*(char *)((long)puVar1 + 0x1f) < '\0') {
    FUN_005478d8(&local_40,puVar1[1],puVar1[2]);
  }
  else {
    local_30 = puVar1[3];
    lStack_38 = puVar1[2];
    local_40 = (void *)puVar1[1];
  }
  if (*(char *)((long)plVar2 + 0x3cf) < '\0') {
    operator_delete((void *)plVar2[0x77]);
  }
  plVar2[0x79] = local_30;
  plVar2[0x78] = lStack_38;
  plVar2[0x77] = (long)local_40;
  local_30 = local_30 & 0xffffffffffffff;
  local_40 = (void *)((ulong)local_40 & 0xffffffffffffff00);
  (**(code **)(*plVar2 + 0xb8))(plVar2);
  if ((long)local_30 < 0) {
    operator_delete(local_40);
  }
  return;
}


// ===== 00bfeaa0  FUN_00bfeaa0 =====

void FUN_00bfeaa0(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xbfeb18);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      if (*(char *)((long)pvVar2 + 0x1f) < '\0') {
        operator_delete(*(void **)((long)pvVar2 + 8));
      }
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00bfeb18  FUN_00bfeb18 =====

void FUN_00bfeb18(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *local_8;
  
  param_1 = (undefined8 *)*param_1;
  local_8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  uVar3 = (**(code **)(*(long *)*param_1 + 0x300))();
  uVar1 = param_1[2];
  puVar2 = (undefined8 *)param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x1f)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x1f);
    puVar2 = param_1 + 1;
  }
  FUN_00c357d8(&local_8,uVar3,puVar2,uVar1);
  if ((local_8 != (long *)0x0) && (FUN_00c41618(local_8,param_1 + 4), local_8 != (long *)0x0)) {
    (**(code **)(*local_8 + 8))();
  }
  return;
}


// ===== 00bfeba0  FUN_00bfeba0 =====

void FUN_00bfeba0(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xbfec08);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      FUN_00bf3210(pvVar2);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00bfec08  FUN_00bfec08 =====

void FUN_00bfec08(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined1 uStack_79;
  long local_78;
  undefined1 auStack_70 [31];
  undefined1 uStack_51;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  lVar4 = *param_1;
  lVar3 = *(long *)(lVar4 + 0x260);
  plVar2 = *(long **)(*(long *)(lVar4 + 0x40) + 0x30);
  if (lVar3 != 0) {
    FUN_00d0f740(1,lVar3);
  }
  local_78 = lVar4;
  FUN_007b53e4(auStack_70,param_2);
  plVar1 = (long *)operator_new(0x20);
  *plVar1 = local_78;
  FUN_007b53e4(plVar1 + 1,auStack_70);
  local_50[0] = (long *)operator_new(0x30);
  *local_50[0] = lVar3;
  local_50[0][4] = (long)FUN_00bfed6c;
  local_50[0][5] = (long)FUN_00bfed00;
  local_50[0][2] = (long)plVar1;
  local_40 = FUN_005db390;
  pcStack_38 = FUN_005db348;
  (**(code **)(*plVar2 + 8))(plVar2,local_50,&uStack_51,&uStack_79);
  (*local_40)(0,local_50,local_50);
  FUN_007b5554(auStack_70);
  return;
}


// ===== 00bfed00  FUN_00bfed00 =====

void FUN_00bfed00(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 auStack_38 [24];
  
  plVar2 = (long *)*param_1;
  puVar1 = (undefined8 *)(**(code **)(**(long **)(*plVar2 + 0x268) + 0x60))();
  FUN_007b53e4(auStack_38,plVar2 + 1);
  (**(code **)*puVar1)(puVar1,auStack_38);
  FUN_007b5554(auStack_38);
  return;
}


// ===== 00bfed6c  FUN_00bfed6c =====

void FUN_00bfed6c(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xbfedd4);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      FUN_007b5554((long)pvVar2 + 8);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00bfedd4  FUN_00bfedd4 =====

void FUN_00bfedd4(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 uStack_102;
  undefined1 uStack_101;
  long *local_100 [2];
  code *local_f0;
  code *pcStack_e8;
  long local_e0;
  undefined1 auStack_d8 [144];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar5 = *param_1;
  lVar4 = *(long *)(lVar5 + 0x260);
  plVar3 = *(long **)(*(long *)(lVar5 + 0x40) + 0x30);
  if (lVar4 != 0) {
    FUN_00d0f740(1,lVar4);
  }
  local_e0 = lVar5;
  FUN_007dc0a0(auStack_d8,param_2);
  plVar2 = (long *)operator_new(0x98);
  *plVar2 = local_e0;
  FUN_007dc0a0(plVar2 + 1,auStack_d8);
  local_100[0] = (long *)operator_new(0x30);
  *local_100[0] = lVar4;
  local_100[0][4] = (long)FUN_00bfefb8;
  local_100[0][5] = (long)FUN_00bfeef4;
  local_100[0][2] = (long)plVar2;
  local_f0 = FUN_005db390;
  pcStack_e8 = FUN_005db348;
  (**(code **)(*plVar3 + 8))(plVar3,local_100,&uStack_101,&uStack_102);
  (*local_f0)(0,local_100,local_100);
  FUN_007dc1b4(auStack_d8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00bfeef4  FUN_00bfeef4 =====

void FUN_00bfeef4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 auStack_f0 [16];
  code *local_e0;
  code *pcStack_d8;
  undefined1 auStack_c8 [144];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)*param_1;
  plVar2 = (long *)(**(code **)(**(long **)(*plVar3 + 0x268) + 0x60))();
  FUN_007dc0a0(auStack_c8,plVar3 + 1);
  local_e0 = FUN_004473ec;
  pcStack_d8 = FUN_00bff020;
  (**(code **)(*plVar2 + 8))(plVar2,4,auStack_c8,auStack_f0);
  (*local_e0)(0,auStack_f0,auStack_f0);
  FUN_007dc1b4(auStack_c8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00bfefb8  FUN_00bfefb8 =====

void FUN_00bfefb8(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xbff020);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      FUN_007dc1b4((long)pvVar2 + 8);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00bff020  FUN_00bff020 =====

undefined8 FUN_00bff020(void)

{
  return 0;
}


// ===== 00bff02c  FUN_00bff02c =====

void FUN_00bff02c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bff038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 00bff03c  FUN_00bff03c =====

void FUN_00bff03c(char *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char *__src;
  char *__dest;
  undefined1 auVar4 [16];
  
  uVar3 = FUN_00aff2e0();
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_00aff2f4(param_2);
    if ((uVar3 & 1) == 0) {
      auVar4 = FUN_00aff330(param_2);
      uVar3 = auVar4._8_8_;
      __src = auVar4._0_8_;
      if (0x7ffffffffffffff6 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_005d45ec();
      }
      if (uVar3 < 0x17) {
        param_1[0x17] = auVar4[8];
        __dest = param_1;
      }
      else {
        uVar1 = (uVar3 & 0x7ffffffffffffff8) + 8;
        uVar2 = 0x19;
        if (uVar1 != 0x18) {
          uVar2 = uVar1;
        }
        __dest = (char *)operator_new(uVar2);
        *(char **)param_1 = __dest;
        *(ulong *)(param_1 + 8) = uVar3;
        *(ulong *)(param_1 + 0x10) = uVar2 | 0x8000000000000000;
      }
      if (__dest + uVar3 < __dest) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                  );
      }
      if ((__dest <= __src) && (__src < __dest + uVar3)) goto LAB_00bff180;
      memmove(__dest,__src,uVar3);
      __dest[uVar3] = '\0';
    }
    else {
      param_1[0x17] = '\x04';
      if ((param_1 < "tun") && ("stun" < param_1 + 4)) {
LAB_00bff180:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                  );
      }
      builtin_strncpy(param_1,"stun",5);
    }
  }
  else {
    param_1[0x17] = '\x05';
    if ((param_1 < "ocal") && ("local" < param_1 + 5)) goto LAB_00bff180;
    builtin_strncpy(param_1,"local",6);
  }
  return;
}


// ===== 00bff1ac  FUN_00bff1ac =====

void FUN_00bff1ac(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  int *****pppppiVar1;
  bool bVar2;
  long *plVar3;
  int ****local_48;
  ulong local_40;
  byte bStack_31;
  
  *param_1 = &PTR_FUN_00d49bf8;
  FUN_00c09108(param_1 + 1);
  param_1[6] = 0;
  param_1[5] = param_1 + 6;
  param_1[7] = 0;
  param_1[8] = param_2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = param_3;
  plVar3 = (long *)(**(code **)(*(long *)(param_2 + 8) + 0x118))((long *)(param_2 + 8));
  (**(code **)(*plVar3 + 0x10))(&local_48,plVar3,"WebRTC-UseStandardBytesStats",0x1c);
  if (-1 < (char)bStack_31) {
    local_40 = (ulong)bStack_31;
  }
  if (local_40 < 7) {
    bVar2 = false;
  }
  else {
    pppppiVar1 = (int *****)local_48;
    if (-1 < (char)bStack_31) {
      pppppiVar1 = &local_48;
    }
    bVar2 = *(int *)pppppiVar1 == 0x62616e45 && *(int *)((long)pppppiVar1 + 3) == 0x64656c62;
  }
  if ((char)bStack_31 < '\0') {
    operator_delete(local_48);
  }
  *(bool *)(param_1 + 0xc) = bVar2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  (**(code **)(param_4 + 0x10))(1,param_4,param_1 + 0x10);
  param_1[0x12] = *(undefined8 *)(param_4 + 0x10);
  param_1[0x13] = *(undefined8 *)(param_4 + 0x18);
  *(code **)(param_4 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_4 + 0x18) = 0;
  return;
}


// ===== 00bff2ec  FUN_00bff2ec =====

void FUN_00bff2ec(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *local_8;
  
  *param_1 = &PTR_FUN_00d49bf8;
  (*(code *)param_1[0x12])(0,param_1 + 0x10,param_1 + 0x10);
  pvVar1 = (void *)param_1[0xd];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0xe];
    uVar4 = (ulong)((long)pvVar2 + (-0x10 - ((long)pvVar2 << 0x3c))) >> 4;
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3c) - ((long)pvVar1 - (long)pvVar2)) >> 4;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 0xfU) == 0)) {
      uVar3 = uVar3 & 0xffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x10);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -0x10);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[0xe] = pvVar1;
    operator_delete(pvVar1);
  }
  local_8 = param_1 + 5;
  FUN_00c06e84(&local_8,param_1[6]);
  FUN_00c09118(param_1 + 1);
  return;
}


// ===== 00bff3dc  FUN_00bff3dc =====

void FUN_00bff3dc(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *local_8;
  
  *param_1 = &PTR_FUN_00d49bf8;
  (*(code *)param_1[0x12])(0,param_1 + 0x10,param_1 + 0x10);
  pvVar1 = (void *)param_1[0xd];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0xe];
    uVar4 = (ulong)((long)pvVar2 + (-0x10 - ((long)pvVar2 << 0x3c))) >> 4;
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3c) - ((long)pvVar1 - (long)pvVar2)) >> 4;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 0xfU) == 0)) {
      uVar3 = uVar3 & 0xffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x10);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -0x10);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[0xe] = pvVar1;
    operator_delete(pvVar1);
  }
  local_8 = param_1 + 5;
  FUN_00c06e84(&local_8,param_1[6]);
  FUN_00c09118(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 00bff4d8  FUN_00bff4d8 =====

void FUN_00bff4d8(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *local_48;
  long *local_40;
  
  (**(code **)(*param_2 + 0x28))(&local_48,param_2);
  plVar2 = local_40;
  plVar1 = local_48;
  for (plVar3 = local_48; local_48 = plVar1, plVar3 != plVar2; plVar3 = plVar3 + 1) {
    FUN_00bff804(*plVar3,param_1 + 8,param_1 + 0x28);
    plVar1 = local_48;
  }
  plVar3 = local_40;
  if (plVar1 != (long *)0x0) {
    while (plVar1 != plVar3) {
      plVar3 = plVar3 + -1;
      if (plVar3 == (long *)0x0) goto LAB_00bff638;
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 8))();
      }
    }
    local_40 = plVar1;
    operator_delete(local_48);
  }
  (**(code **)(*param_2 + 0x30))(&local_48,param_2);
  plVar2 = local_40;
  plVar1 = local_48;
  for (plVar3 = local_48; local_48 = plVar1, plVar3 != plVar2; plVar3 = plVar3 + 1) {
    FUN_00bff8d8(*plVar3,param_1 + 8,param_1 + 0x28);
    plVar1 = local_48;
  }
  plVar3 = local_40;
  if (plVar1 != (long *)0x0) {
    while (plVar1 != plVar3) {
      plVar3 = plVar3 + -1;
      if (plVar3 == (long *)0x0) {
LAB_00bff638:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 8))();
      }
    }
    operator_delete(local_48);
  }
  return;
}


// ===== 00bff64c  FUN_00bff64c =====

void FUN_00bff64c(long param_1,long *param_2)

{
  undefined *puVar1;
  void *pvVar2;
  int iVar3;
  size_t sVar4;
  void *local_48;
  size_t local_40;
  char cStack_31;
  
  (**(code **)(*param_2 + 0x20))(&local_48,param_2);
  puVar1 = PTR_s_audio_00d48a78;
  if (PTR_s_audio_00d48a78 == (undefined *)0x0) goto LAB_00bff7ec;
  sVar4 = strlen(PTR_s_audio_00d48a78);
  pvVar2 = local_48;
  if ((long)cStack_31 < 0) {
    if (sVar4 == local_40) {
      if (sVar4 == 0xffffffffffffffff) goto LAB_00bff800;
      iVar3 = memcmp(local_48,puVar1,sVar4);
      operator_delete(pvVar2);
      goto joined_r0x00bff6f8;
    }
    operator_delete(local_48);
  }
  else if (sVar4 == (long)cStack_31) {
    iVar3 = memcmp(&local_48,puVar1,sVar4);
joined_r0x00bff6f8:
    if (iVar3 == 0) {
      FUN_00bff804(param_2,param_1 + 8,param_1 + 0x28);
      return;
    }
  }
  (**(code **)(*param_2 + 0x20))(&local_48,param_2);
  puVar1 = PTR_s_video_00d48a70;
  if (PTR_s_video_00d48a70 != (undefined *)0x0) {
    sVar4 = strlen(PTR_s_video_00d48a70);
    if ((long)cStack_31 < 0) {
      if (sVar4 != local_40) {
        operator_delete(local_48);
        return;
      }
      if (sVar4 == 0xffffffffffffffff) {
LAB_00bff800:
                    /* WARNING: Subroutine does not return */
        FUN_005f5590();
      }
      iVar3 = memcmp(local_48,puVar1,sVar4);
      operator_delete(local_48);
    }
    else {
      if (sVar4 != (long)cStack_31) {
        return;
      }
      iVar3 = memcmp(&local_48,puVar1,sVar4);
    }
    if (iVar3 == 0) {
      FUN_00bff8d8(param_2,param_1 + 8,param_1 + 0x28);
    }
    return;
  }
LAB_00bff7ec:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/string:3571: libc++ Hardening assertion __rhs != nullptr failed: operator==(basic_string, char*): received nullptr\n"
            );
}


// ===== 00bff804  FUN_00bff804 =====

void FUN_00bff804(long *param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  void *local_58 [2];
  char cStack_41;
  undefined1 uStack_39;
  void **local_38;
  long *local_18;
  
  (**(code **)(*param_1 + 0x28))(local_58);
  local_18 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00c08418(&local_18,7,local_58);
  uVar1 = FUN_00c093d8(param_2,&local_18);
  FUN_00c087e8(uVar1,0x87,local_58);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  local_38 = local_58;
  local_18 = param_3;
  lVar2 = FUN_00c06f18(&local_18,local_58,&DAT_001f94c3,&local_38,&uStack_39);
  *(undefined8 *)(lVar2 + 0x38) = uVar1;
  if (cStack_41 < '\0') {
    operator_delete(local_58[0]);
  }
  return;
}


// ===== 00bff8d8  FUN_00bff8d8 =====

void FUN_00bff8d8(long *param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  void *local_58 [2];
  char cStack_41;
  undefined1 uStack_39;
  void **local_38;
  long *local_18;
  
  (**(code **)(*param_1 + 0x28))(local_58);
  local_18 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00c08418(&local_18,7,local_58);
  uVar1 = FUN_00c093d8(param_2,&local_18);
  FUN_00c087e8(uVar1,0x87,local_58);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  local_38 = local_58;
  local_18 = param_3;
  lVar2 = FUN_00c06f18(&local_18,local_58,&DAT_001f94c3,&local_38,&uStack_39);
  *(undefined8 *)(lVar2 + 0x38) = uVar1;
  if (cStack_41 < '\0') {
    operator_delete(local_58[0]);
  }
  return;
}


// ===== 00bff9ac  FUN_00bff9ac =====

void FUN_00bff9ac(long param_1,long *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  char cStack_29;
  long *local_28;
  
  puVar1 = *(undefined8 **)(param_1 + 0x70);
  local_40 = param_2;
  uStack_38 = param_3;
  if (puVar1 < *(undefined8 **)(param_1 + 0x78)) {
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar4 = puVar1 + 2;
    puVar1[1] = CONCAT44(uStack_34,param_3);
    *puVar1 = param_2;
  }
  else {
    puVar4 = (undefined8 *)FUN_00c02f6c(param_1 + 0x68,&local_40);
  }
  *(undefined8 **)(param_1 + 0x70) = puVar4;
  local_28 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_2 + 0x28))(&local_40,param_2);
  FUN_00c08418(&local_28,7,&local_40);
  if (cStack_29 < '\0') {
    operator_delete(local_40);
  }
  lVar2 = FUN_00c0935c(param_1 + 8,&local_28);
  if (lVar2 == 0) {
    uVar3 = FUN_00c09220(param_1 + 8,&local_28);
    (**(code **)(*param_2 + 0x28))(&local_40,param_2);
    FUN_00c087e8(uVar3,0x87,&local_40);
    if (cStack_29 < '\0') {
      operator_delete(local_40);
    }
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  return;
}


// ===== 00bffadc  FUN_00bffadc =====

/* WARNING: Removing unreachable block (ram,0x00bffb84) */
/* WARNING: Removing unreachable block (ram,0x00bffb88) */
/* WARNING: Removing unreachable block (ram,0x00bffba8) */

void FUN_00bffadc(long param_1,long param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  
  plVar1 = *(long **)(param_1 + 0x68);
  plVar2 = *(long **)(param_1 + 0x70);
  if (plVar1 == plVar2) {
LAB_00bffb1c:
    if ((plVar1 != plVar2) && (plVar3 = plVar1 + 2, plVar3 != plVar2)) {
      do {
        if ((*plVar3 != param_2) || ((int)plVar3[1] != param_3)) {
          *plVar1 = *plVar3;
          *(int *)(plVar1 + 1) = (int)plVar3[1];
          plVar1 = plVar1 + 2;
        }
        plVar3 = plVar3 + 2;
      } while (plVar3 != plVar2);
      plVar2 = *(long **)(param_1 + 0x70);
    }
    if (plVar2 < plVar1) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
                );
    }
    if (plVar1 != plVar2) {
      uVar5 = (ulong)((long)plVar2 + (-0x10 - ((long)plVar2 << 0x3c))) >> 4;
      uVar4 = (ulong)(((long)plVar1 - (long)plVar2 << 0x3c) - ((long)plVar1 - (long)plVar2)) >> 4;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      if ((1 < uVar4) && ((((int)plVar1 - (int)plVar2 | -(int)plVar2) & 0xfU) == 0)) {
        uVar4 = uVar4 & 0xffffffffffffffe;
        plVar2 = plVar2 + uVar4 * -2;
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (plVar2 != plVar1) {
        plVar2 = plVar2 + -2;
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      *(long **)(param_1 + 0x70) = plVar1;
    }
  }
  else {
    do {
      if ((*plVar1 == param_2) && ((int)plVar1[1] == param_3)) goto LAB_00bffb1c;
      plVar1 = plVar1 + 2;
    } while (plVar1 != plVar2);
  }
  return;
}


// ===== 00bffc44  FUN_00bffc44 =====

void FUN_00bffc44(long param_1,long *param_2,undefined8 *param_3)

{
  size_t __n;
  size_t sVar1;
  undefined8 *******__s2;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  void *__dest;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  void *__src;
  undefined8 uVar16;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  void *pvStack_90;
  undefined8 *puStack_88;
  long *local_80;
  undefined8 ******local_78;
  size_t local_70;
  byte bStack_61;
  long *local_60;
  undefined1 local_54 [4];
  
  local_54[0] = 0xaa;
  FUN_007e0b10(local_54);
  if (param_2 == (long *)0x0) {
    uVar7 = FUN_00c09214(param_1 + 8);
    __src = (void *)*param_3;
    if ((ulong)(param_3[2] - (long)__src >> 3) < uVar7) {
      if (uVar7 >> 0x3d != 0) {
        lVar8 = FUN_00c03078();
        pcStack_98 = FUN_00bfffec;
        puStack_a0 = &stack0xffffffffffffffb0;
        pvStack_90 = __src;
        puStack_88 = param_3;
        uVar15 = (**(code **)(**(long **)(lVar8 + 0x48) + 0x10))();
        uVar7 = uVar15 / 1000;
        if (499 < uVar15 % 1000) {
          uVar7 = uVar7 + 1;
        }
        if ((uVar15 & 0x8000000000000000) != 0) {
          uVar7 = -(-uVar15 / 1000) - (ulong)(500 < -uVar15 % 1000);
        }
        if ((*(long *)(lVar8 + 0x50) == 0) || (*(long *)(lVar8 + 0x50) + 0x32 <= (long)uVar7)) {
          *(ulong *)(lVar8 + 0x50) = uVar7;
          lVar9 = (**(code **)(lVar8 + 0x98))(lVar8 + 0x80);
          puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
          *(double *)(lVar8 + 0x58) = (double)lVar9;
          puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
          FUN_00c00164(&puStack_c0,lVar8);
          FUN_00c006c4(lVar8);
          FUN_00c00b00(lVar8,&puStack_c0);
          FUN_00c011dc(lVar8);
          puStack_a8 = (undefined1 *)CONCAT71(puStack_a8._1_7_,0xaa);
          FUN_007e0b10(&puStack_a8);
          plVar6 = *(long **)(lVar8 + 0x28);
          if (plVar6 != (long *)(lVar8 + 0x30)) {
            uVar16 = *(undefined8 *)(lVar8 + 0x58);
            do {
              *(undefined8 *)(plVar6[7] + 8) = uVar16;
              plVar14 = plVar6;
              plVar13 = (long *)plVar6[1];
              if ((long *)plVar6[1] == (long *)0x0) {
                do {
                  plVar6 = (long *)plVar14[2];
                  bVar4 = plVar14 != (long *)*plVar6;
                  plVar14 = plVar6;
                } while (bVar4);
              }
              else {
                do {
                  plVar6 = plVar13;
                  plVar13 = (long *)*plVar6;
                } while ((long *)*plVar6 != (long *)0x0);
              }
            } while (plVar6 != (long *)(lVar8 + 0x30));
          }
          FUN_007e0b18(&puStack_a8);
          puStack_a8 = (undefined1 *)&puStack_c0;
          FUN_0060b2cc(&puStack_a8,puStack_b8);
        }
        return;
      }
      lVar8 = param_3[1];
      __dest = operator_new(uVar7 * 8);
      memcpy(__dest,__src,lVar8 - (long)__src);
      *param_3 = __dest;
      param_3[1] = (long)__dest + (lVar8 - (long)__src);
      param_3[2] = (void *)((long)__dest + uVar7 * 8);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    lVar8 = FUN_00c09200(param_1 + 8);
    lVar9 = FUN_00c0920c(param_1 + 8);
    if (lVar8 != lVar9) {
      puVar12 = (undefined8 *)param_3[1];
      do {
        local_78 = *(undefined8 *******)(lVar8 + 0x10);
        if (puVar12 < (undefined8 *)param_3[2]) {
          if (puVar12 == (undefined8 *)0x0) goto LAB_00bfffb4;
          puVar10 = puVar12 + 1;
          *puVar12 = local_78;
        }
        else {
          puVar10 = (undefined8 *)FUN_00c03090(param_3,&local_78);
        }
        param_3[1] = puVar10;
        lVar8 = *(long *)(lVar8 + 8);
        puVar12 = puVar10;
      } while (lVar8 != lVar9);
    }
  }
  else {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x10))(&local_78);
    FUN_00c08418(&local_60,0,&local_78);
    plVar6 = (long *)FUN_00c0935c(param_1 + 8,&local_60);
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 8))(local_60);
    }
    if ((char)bStack_61 < '\0') {
      operator_delete(local_78);
    }
    local_60 = plVar6;
    if (plVar6 != (long *)0x0) {
      plVar14 = (long *)param_3[1];
      if (plVar14 < (long *)param_3[2]) {
        if (plVar14 == (long *)0x0) goto LAB_00bfffb4;
        plVar13 = plVar14 + 1;
        *plVar14 = (long)plVar6;
      }
      else {
        plVar13 = (long *)FUN_00c03090(param_3,&local_60);
      }
      param_3[1] = plVar13;
    }
    (**(code **)(*param_2 + 0x28))(&local_78,param_2);
    FUN_00c08418(&local_80,7,&local_78);
    local_60 = (long *)FUN_00c0935c(param_1 + 8,&local_80);
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 8))(local_80);
    }
    if ((char)bStack_61 < '\0') {
      operator_delete(local_78);
    }
    if (local_60 != (long *)0x0) {
      plVar6 = (long *)param_3[1];
      if (plVar6 < (long *)param_3[2]) {
        if (plVar6 == (long *)0x0) {
LAB_00bfffb4:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        plVar14 = plVar6 + 1;
        *plVar6 = (long)local_60;
      }
      else {
        plVar14 = (long *)FUN_00c03090(param_3,&local_60);
      }
      param_3[1] = plVar14;
      lVar8 = FUN_00c09200(param_1 + 8);
      lVar9 = FUN_00c0920c(param_1 + 8);
      if (lVar8 != lVar9) {
        do {
          local_80 = *(long **)(lVar8 + 0x10);
          iVar5 = FUN_00c08014(*local_80);
          if ((iVar5 == 5) && (lVar11 = FUN_00c0892c(local_80,0x87), lVar11 != 0)) {
            puVar12 = (undefined8 *)FUN_00c08274();
            (**(code **)(*param_2 + 0x28))(&local_78,param_2);
            bVar3 = bStack_61;
            bVar2 = *(byte *)((long)puVar12 + 0x17);
            __n = puVar12[1];
            if (-1 < (char)bVar2) {
              __n = (ulong)bVar2;
            }
            sVar1 = local_70;
            if (-1 < (char)bStack_61) {
              sVar1 = (ulong)bStack_61;
            }
            if (__n == sVar1) {
              puVar10 = (undefined8 *)*puVar12;
              if (-1 < (char)bVar2) {
                puVar10 = puVar12;
              }
              __s2 = (undefined8 *******)local_78;
              if (-1 < (char)bStack_61) {
                __s2 = &local_78;
              }
              iVar5 = memcmp(puVar10,__s2,__n);
              bVar4 = iVar5 == 0;
            }
            else {
              bVar4 = false;
            }
            if ((char)bVar3 < '\0') {
              operator_delete(local_78);
            }
            if (bVar4) {
              puVar12 = (undefined8 *)param_3[1];
              if (puVar12 < (undefined8 *)param_3[2]) {
                if (puVar12 == (undefined8 *)0x0) goto LAB_00bfffb4;
                puVar10 = puVar12 + 1;
                *puVar12 = local_80;
              }
              else {
                puVar10 = (undefined8 *)FUN_00c03090(param_3,&local_80);
              }
              param_3[1] = puVar10;
            }
          }
          lVar8 = *(long *)(lVar8 + 8);
        } while (lVar8 != lVar9);
      }
    }
  }
  FUN_007e0b18(local_54);
  return;
}


// ===== 00bfffec  FUN_00bfffec =====

void FUN_00bfffec(long param_1)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  undefined1 *local_28;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
  uVar5 = uVar3 / 1000;
  if (499 < uVar3 % 1000) {
    uVar5 = uVar5 + 1;
  }
  if ((uVar3 & 0x8000000000000000) != 0) {
    uVar5 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
  }
  if ((*(long *)(param_1 + 0x50) == 0) || (*(long *)(param_1 + 0x50) + 0x32 <= (long)uVar5)) {
    *(ulong *)(param_1 + 0x50) = uVar5;
    lVar4 = (**(code **)(param_1 + 0x98))(param_1 + 0x80);
    local_30 = &DAT_aaaaaaaaaaaaaaaa;
    *(double *)(param_1 + 0x58) = (double)lVar4;
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00c00164(&local_40,param_1);
    FUN_00c006c4(param_1);
    FUN_00c00b00(param_1,&local_40);
    FUN_00c011dc(param_1);
    local_28 = (undefined1 *)CONCAT71(local_28._1_7_,0xaa);
    FUN_007e0b10(&local_28);
    plVar6 = *(long **)(param_1 + 0x28);
    if (plVar6 != (long *)(param_1 + 0x30)) {
      uVar8 = *(undefined8 *)(param_1 + 0x58);
      do {
        *(undefined8 *)(plVar6[7] + 8) = uVar8;
        plVar7 = plVar6;
        plVar1 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) {
          do {
            plVar6 = (long *)plVar7[2];
            bVar2 = plVar7 != (long *)*plVar6;
            plVar7 = plVar6;
          } while (bVar2);
        }
        else {
          do {
            plVar6 = plVar1;
            plVar1 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
      } while (plVar6 != (long *)(param_1 + 0x30));
    }
    FUN_007e0b18(&local_28);
    local_28 = (undefined1 *)&local_40;
    FUN_0060b2cc(&local_28,puStack_38);
  }
  return;
}


// ===== 00c00164  FUN_00c00164 =====

/* WARNING: Removing unreachable block (ram,0x00c00528) */

void FUN_00c00164(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *******ppppppplVar4;
  undefined8 *puVar5;
  long ******pppppplVar6;
  long ******pppppplVar7;
  long *******ppppppplVar8;
  long ******local_188;
  long ******local_180;
  long local_178;
  undefined1 uStack_169;
  void *local_168;
  undefined8 uStack_160;
  long local_158;
  byte local_150;
  void *local_148 [2];
  char cStack_131;
  char local_130;
  long local_128;
  long ******pppppplStack_120;
  undefined8 **local_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 **local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  long *local_b0;
  long *plStack_a8;
  undefined1 *local_a0;
  long ******local_90;
  long ******local_88;
  long local_80;
  char **local_78;
  char *local_70;
  char *pcStack_68;
  undefined1 **local_60;
  void **ppvStack_58;
  
  if (((DAT_00dbae08 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00dbae08), iVar2 != 0)) {
    DAT_00dbae00 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbae08);
  }
  local_78 = (char **)0x0;
  pcStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbae00 != '\0') {
    FUN_0066d348(0x42,DAT_00dbae00,"LegacyStatsCollector::ExtractSessionAndDataInfo",0,0,0,0,0,0);
    local_70 = DAT_00dbae00;
    pcStack_68 = "LegacyStatsCollector::ExtractSessionAndDataInfo";
    local_78 = &local_70;
  }
  local_80 = 0;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  plStack_a8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_b0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_90 = (long ******)&local_90;
  local_88 = (long ******)&local_90;
  (**(code **)(**(long **)(param_2 + 0x40) + 0x220))(&local_b0);
  plVar1 = plStack_a8;
  local_c8 = (undefined8 *)0x0;
  local_c0 = (undefined8 *)0x0;
  local_b8 = (undefined8 *)0x0;
  for (plVar3 = local_b0; plVar3 != plVar1; plVar3 = plVar3 + 1) {
    (**(code **)(*(long *)*plVar3 + 0x28))(&local_168);
    if (local_150 == 1) {
      if (local_158 < 0) {
        operator_delete(local_168);
      }
      (**(code **)(*(long *)*plVar3 + 0x28))(&local_168);
      if ((local_150 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1074: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      if (local_c0 < local_b8) {
        if (local_c0 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar5 = local_c0 + 3;
        local_c0[2] = local_158;
        local_c0[1] = uStack_160;
        *local_c0 = local_168;
        uStack_160 = 0;
        local_158 = 0;
        local_168 = (void *)0x0;
      }
      else {
        puVar5 = (undefined8 *)FUN_00ad3390(&local_c8,&local_168);
      }
      local_c0 = puVar5;
      if ((local_150 == 1) && (local_158 < 0)) {
        operator_delete(local_168);
      }
    }
  }
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  local_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  plVar3 = (long *)(**(code **)(**(long **)(param_2 + 0x40) + 0x208))();
  (**(code **)(**(long **)(param_2 + 0x40) + 0x230))(&local_168,*(long **)(param_2 + 0x40));
  (**(code **)(*(long *)(*(long *)(param_2 + 0x40) + 8) + 0x20))(local_148);
  local_118 = &local_c8;
  local_60 = &local_110;
  local_d8 = (undefined1 *)0x0;
  local_d0 = (undefined1 *)0x0;
  puStack_f8 = (undefined1 *)0x0;
  local_100 = (undefined1 *)0x0;
  puStack_e8 = (undefined1 *)0x0;
  local_f0 = (undefined1 *)0x0;
  puStack_108 = (undefined1 *)0x0;
  local_110 = (undefined1 *)0x0;
  local_128 = param_2;
  pppppplStack_120 = (long ******)&local_90;
  local_e0 = &local_d8;
  ppvStack_58 = &local_168;
  (**(code **)(*plVar3 + 0x60))(plVar3,&local_60,FUN_00c07604,&uStack_169);
  if ((local_130 == '\x01') && (cStack_131 < '\0')) {
    operator_delete(local_148[0]);
  }
  if ((local_150 == 1) && (local_158 < 0)) {
    operator_delete(local_168);
  }
  pppppplVar6 = local_90;
  local_178 = 0;
  local_188 = (long ******)&local_188;
  local_180 = (long ******)&local_188;
  if (local_80 != 0) {
    pppppplVar7 = (long ******)local_90[1];
    (*local_88)[1] = (long ****)pppppplVar7;
    *pppppplVar7 = *local_88;
    local_180 = local_88;
    *local_88 = (long *****)&local_188;
    local_188 = pppppplVar6;
    pppppplVar6[1] = (long *****)&local_188;
    local_178 = local_80;
    local_80 = 0;
  }
  FUN_00c09564(param_2 + 8,&local_188);
  if (local_178 != 0) {
    pppppplVar6 = (long ******)local_188[1];
    (*local_180)[1] = (long ****)pppppplVar6;
    *pppppplVar6 = *local_180;
    local_178 = 0;
    if ((long *******)local_180 != &local_188) {
      ppppppplVar4 = (long *******)local_180;
      do {
        if ((ppppppplVar4 == (long *******)0xfffffffffffffff0) ||
           (ppppppplVar4 == (long *******)0x0)) goto LAB_00c00658;
        ppppppplVar8 = (long *******)ppppppplVar4[1];
        operator_delete(ppppppplVar4);
        ppppppplVar4 = ppppppplVar8;
      } while (ppppppplVar8 != &local_188);
    }
  }
  FUN_00c01da8(param_2,&local_110);
  *param_1 = (long)local_e0;
  plVar3 = param_1 + 1;
  *plVar3 = (long)local_d8;
  param_1[2] = (long)local_d0;
  if (local_d0 == (undefined1 *)0x0) {
    *param_1 = (long)plVar3;
  }
  else {
    *(long **)(local_d8 + 0x10) = plVar3;
    local_d8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_e0 = &local_d8;
  }
  FUN_00c02234(&local_110);
  puVar5 = local_c0;
  if (local_c8 == (undefined8 *)0x0) {
LAB_00c00550:
    plVar1 = local_b0;
    plVar3 = plStack_a8;
    if (local_b0 != (long *)0x0) {
      while (plVar1 != plVar3) {
        plVar3 = plVar3 + -1;
        if (plVar3 == (long *)0x0) goto LAB_00c00658;
        if ((long *)*plVar3 != (long *)0x0) {
          (**(code **)(*(long *)*plVar3 + 8))();
        }
      }
      plStack_a8 = plVar1;
      operator_delete(local_b0);
    }
    if (local_80 != 0) {
      pppppplVar6 = (long ******)local_90[1];
      (*local_88)[1] = (long ****)pppppplVar6;
      *pppppplVar6 = *local_88;
      local_80 = 0;
      ppppppplVar4 = (long *******)local_88;
      while (ppppppplVar4 != &local_90) {
        if ((ppppppplVar4 == (long *******)0xfffffffffffffff0) ||
           (ppppppplVar4 == (long *******)0x0)) goto LAB_00c00658;
        ppppppplVar8 = (long *******)ppppppplVar4[1];
        operator_delete(ppppppplVar4);
        ppppppplVar4 = ppppppplVar8;
      }
    }
    if ((local_78 != (char **)0x0) && (**local_78 != '\0')) {
      FUN_0066d348(0x45,*local_78,local_78[1],0,0,0,0,0,0);
    }
    return;
  }
  do {
    if (local_c8 == puVar5) {
      local_c0 = local_c8;
      operator_delete(local_c8);
      goto LAB_00c00550;
    }
    puVar5 = puVar5 + -3;
  } while (puVar5 != (undefined8 *)0x0);
LAB_00c00658:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c006c4  FUN_00c006c4 =====

void FUN_00c006c4(long param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 uStack_f9;
  undefined8 **local_f8;
  undefined4 *puStack_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  long *local_d0;
  long *plStack_c8;
  undefined1 *local_c0;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  iVar2 = (**(code **)(**(long **)(param_1 + 0x40) + 0x1a0))();
  if (iVar2 == 5) {
    return;
  }
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(**(long **)(param_1 + 0x40) + 0x248))(&local_90);
  local_a8 = 0;
  local_a0 = 0;
  local_b0 = local_90._0_4_;
  local_ac = puStack_88._0_4_;
  local_98 = local_80;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  plStack_c8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_d0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(**(long **)(param_1 + 0x40) + 0x220))(&local_d0);
  plVar1 = plStack_c8;
  local_e8 = (undefined8 *)0x0;
  local_e0 = (undefined8 *)0x0;
  local_d8 = (undefined8 *)0x0;
  plVar3 = local_d0;
  if (local_d0 != plStack_c8) {
    do {
      iVar2 = (**(code **)(*(long *)*plVar3 + 0x20))();
      if ((iVar2 == 1) && (*(long *)(*(long *)(*plVar3 + 0x10) + 0xf0) != 0)) {
        local_f8 = (undefined8 **)FUN_00c0f220();
        if (local_e0 < local_d8) {
          if (local_e0 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *local_e0 = local_f8;
          local_e0 = local_e0 + 1;
        }
        else {
          local_e0 = (undefined8 *)FUN_00c036b8(&local_e8,&local_f8);
        }
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
    if (local_e8 != local_e0) {
      plVar3 = (long *)(**(code **)(**(long **)(param_1 + 0x40) + 0x210))();
      local_f8 = &local_e8;
      puStack_f0 = &local_b0;
      (**(code **)(*plVar3 + 0x60))(plVar3,&local_f8,FUN_00c07acc,&uStack_f9);
    }
  }
  local_f8 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00c083bc(&local_f8);
  lVar4 = FUN_00c092c8(param_1 + 8,&local_f8);
  *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(param_1 + 0x58);
  FUN_00c08c64(lVar4,0x28,local_b0);
  FUN_00c08c64(lVar4,0x27,local_ac);
  FUN_00c08c64(lVar4,0x85,local_a8 & 0xffffffff);
  FUN_00c08c64(lVar4,0x25,local_a8._4_4_);
  FUN_00c08c64(lVar4,0x7d,local_a0 & 0xffffffff);
  FUN_00c08c64(lVar4,0x88,local_a0._4_4_);
  FUN_00c08b3c(lVar4,0x2b,local_98);
  if (local_f8 != (undefined8 **)0x0) {
    (*(code *)(*local_f8)[1])();
  }
  if (local_e8 == (undefined8 *)0x0) {
LAB_00c0095c:
    plVar1 = local_d0;
    plVar3 = plStack_c8;
    if (local_d0 != (long *)0x0) {
      while (plVar1 != plVar3) {
        plVar3 = plVar3 + -1;
        if (plVar3 == (long *)0x0) goto LAB_00c00ac4;
        if ((long *)*plVar3 != (long *)0x0) {
          (**(code **)(*(long *)*plVar3 + 8))();
        }
      }
      plStack_c8 = plVar1;
      operator_delete(local_d0);
    }
    if (puStack_48 == (undefined1 *)0x0) {
LAB_00c00a48:
      if (local_60 == (undefined1 *)0x0) {
        return;
      }
      uVar7 = (ulong)(((long)local_60 - (long)local_58) * 0x1555555555555555) >> 3;
      uVar8 = (long)local_58 * -0x1555555555555555 - 8U >> 3;
      if (uVar8 <= uVar7) {
        uVar7 = uVar8;
      }
      puVar6 = local_58;
      if ((1 < uVar7) && ((((int)local_60 - (int)local_58 | -(int)local_58) & 7U) == 0)) {
        uVar7 = uVar7 & 0x1ffffffffffffffe;
        puVar6 = local_58 + uVar7 * -0x18;
        do {
          uVar7 = uVar7 - 2;
        } while (uVar7 != 0);
      }
      do {
        if (puVar6 == local_60) {
          local_58 = local_60;
          operator_delete(local_60);
          return;
        }
        puVar6 = puVar6 + -0x18;
      } while (puVar6 != (undefined1 *)0x0);
    }
    else {
      uVar7 = (ulong)(((long)puStack_48 - (long)local_40) * 0x555555555555555) >> 4;
      uVar8 = (long)local_40 * -0x555555555555555 - 0x10U >> 4;
      if (uVar8 <= uVar7) {
        uVar7 = uVar8;
      }
      puVar6 = local_40;
      if ((1 < uVar7) && ((((int)puStack_48 - (int)local_40 | -(int)local_40) & 0xfU) == 0)) {
        uVar7 = uVar7 & 0xffffffffffffffe;
        puVar6 = local_40 + uVar7 * -0x30;
        do {
          uVar7 = uVar7 - 2;
        } while (uVar7 != 0);
      }
      do {
        if (puVar6 == puStack_48) {
          local_40 = puStack_48;
          operator_delete(puStack_48);
          goto LAB_00c00a48;
        }
        puVar6 = puVar6 + -0x30;
      } while (puVar6 != (undefined1 *)0x0);
    }
  }
  else {
    uVar8 = (ulong)((long)local_e0 + (-8 - ((long)local_e0 << 0x3d))) >> 3;
    uVar7 = (ulong)(((long)local_e8 - (long)local_e0 << 0x3d) - ((long)local_e8 - (long)local_e0))
            >> 3;
    if (uVar8 <= uVar7) {
      uVar7 = uVar8;
    }
    puVar5 = local_e0;
    if ((1 < uVar7) && ((((int)local_e8 - (int)local_e0 | -(int)local_e0) & 7U) == 0)) {
      uVar7 = uVar7 & 0x1ffffffffffffffe;
      puVar5 = local_e0 + -uVar7;
      do {
        uVar7 = uVar7 - 2;
      } while (uVar7 != 0);
    }
    do {
      if (puVar5 == local_e8) {
        local_e0 = local_e8;
        operator_delete(local_e8);
        goto LAB_00c0095c;
      }
      puVar5 = puVar5 + -1;
    } while (puVar5 != (undefined8 *)0x0);
  }
LAB_00c00ac4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c00b00  FUN_00c00b00 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00c00b00(long param_1,long param_2)

{
  long ******pppppplVar1;
  long lVar2;
  long *****__n;
  long **pplVar3;
  byte bVar4;
  ulong uVar5;
  long ******pppppplVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  long ******pppppplVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *******ppppppplVar17;
  long *******ppppppplVar18;
  long *****ppppplVar19;
  long lVar20;
  long *****ppppplVar21;
  long *******ppppppplVar22;
  uint uVar23;
  long **pplVar24;
  long *plVar25;
  long *****ppppplVar26;
  long *****ppppplVar27;
  long *******local_e0;
  long *******ppppppplStack_d8;
  undefined1 *local_d0;
  long *local_c8;
  long *******local_c0;
  long *******ppppppplStack_b8;
  long *******local_b0;
  undefined1 *local_a8;
  long ******local_a0;
  undefined1 local_94 [4];
  long *****local_90;
  long *****ppppplStack_88;
  undefined1 *local_80;
  long *******local_78;
  long *******local_70;
  long *******local_68;
  
  local_78 = (long *******)0x0;
  local_70 = (long *******)0x0;
  local_68 = (long *******)0x0;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  ppppplStack_88 = (long *****)&DAT_aaaaaaaaaaaaaaaa;
  local_90 = (long *****)&DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(**(long **)(param_1 + 0x40) + 0x220))(&local_90);
  local_94[0] = 0xaa;
  FUN_007e0b10(local_94);
  ppppplVar21 = ppppplStack_88;
  if (local_90 != ppppplStack_88) {
    ppppplVar26 = local_90;
    do {
      if ((*ppppplVar26)[2][0x1e] != (long **)0x0) {
        local_a0 = (long ******)&DAT_aaaaaaaaaaaaaaaa;
        ppppplVar19 = (long *****)(*ppppplVar26)[2];
        iVar10 = (*(code *)(*ppppplVar19)[4])(ppppplVar19);
        if (iVar10 == 0) {
          pppppplVar13 = (long ******)operator_new(0xd8);
          pppppplVar13[8] = (long *****)0x0;
          pppppplVar13[7] = (long *****)(pppppplVar13 + 8);
          pppppplVar13[0xb] = (long *****)0x0;
          pppppplVar13[9] = (long *****)0x0;
          pppppplVar13[10] = (long *****)(pppppplVar13 + 0xb);
          pppppplVar13[2] = (long *****)0x0;
          pppppplVar13[1] = (long *****)0x0;
          pppppplVar13[4] = (long *****)0x0;
          pppppplVar13[3] = (long *****)0x0;
          pppppplVar13[6] = (long *****)0x0;
          pppppplVar13[5] = (long *****)0x0;
          pppppplVar13[0xc] = (long *****)0x0;
          pppppplVar13[0xd] = ppppplVar19;
          *pppppplVar13 = (long *****)&PTR_FUN_00d49c30;
          FUN_0088b118(pppppplVar13 + 0xe);
        }
        else {
          pppppplVar13 = (long ******)operator_new(0xe8);
          pppppplVar13[8] = (long *****)0x0;
          pppppplVar13[7] = (long *****)(pppppplVar13 + 8);
          pppppplVar13[0xb] = (long *****)0x0;
          pppppplVar13[9] = (long *****)0x0;
          pppppplVar13[10] = (long *****)(pppppplVar13 + 0xb);
          pppppplVar13[2] = (long *****)0x0;
          pppppplVar13[1] = (long *****)0x0;
          pppppplVar13[4] = (long *****)0x0;
          pppppplVar13[3] = (long *****)0x0;
          pppppplVar13[6] = (long *****)0x0;
          pppppplVar13[5] = (long *****)0x0;
          pppppplVar13[0xc] = (long *****)0x0;
          pppppplVar13[0xd] = ppppplVar19;
          *pppppplVar13 = (long *****)&PTR_FUN_00d49ca0;
          FUN_0088b258(pppppplVar13 + 0xe);
        }
        local_a0 = pppppplVar13;
        (*(code *)(**ppppplVar26)[5])(&local_c0);
        if ((char)local_a8 == '\x01') {
          if ((long)local_b0 < 0) {
            operator_delete(local_c0);
          }
          (*(code *)(**ppppplVar26)[5])(&local_c0);
          pppppplVar13 = local_a0;
          if (((ulong)local_a8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/optional:1074: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                      );
          }
          if (*(char *)((long)local_a0 + 0x1f) < '\0') {
            operator_delete(local_a0[1]);
            pppppplVar13[1] = (long *****)0x0;
            pppppplVar13[2] = (long *****)0x0;
            pppppplVar13[3] = (long *****)0x0;
          }
          pppppplVar13[3] = (long *****)local_b0;
          pppppplVar13[2] = (long *****)ppppppplStack_b8;
          pppppplVar13[1] = (long *****)local_c0;
        }
        pppppplVar13 = local_a0;
        plVar16 = *(long **)(param_2 + 8);
        if (plVar16 != (long *)0x0) {
          pppppplVar6 = (long ******)local_a0[1];
          ppppplVar19 = local_a0[2];
          if (-1 < (char)*(byte *)((long)local_a0 + 0x1f)) {
            pppppplVar6 = local_a0 + 1;
            ppppplVar19 = (long *****)(ulong)*(byte *)((long)local_a0 + 0x1f);
          }
          do {
            while( true ) {
              plVar14 = (long *)plVar16[4];
              ppppplVar27 = (long *****)plVar16[5];
              if (-1 < (char)*(byte *)((long)plVar16 + 0x37)) {
                plVar14 = plVar16 + 4;
                ppppplVar27 = (long *****)(ulong)*(byte *)((long)plVar16 + 0x37);
              }
              __n = ppppplVar27;
              if (ppppplVar19 <= ppppplVar27) {
                __n = ppppplVar19;
              }
              iVar10 = memcmp(pppppplVar6,plVar14,(size_t)__n);
              if (iVar10 != 0) break;
              if (ppppplVar19 == ppppplVar27) {
                if (plVar16 != (long *)(param_2 + 8)) {
                  pppppplVar6 = (long ******)(plVar16 + 7);
                  pppppplVar1 = pppppplVar13 + 4;
                  if (pppppplVar1 != pppppplVar6) {
                    bVar4 = *(byte *)((long)plVar16 + 0x4f);
                    if (*(char *)((long)pppppplVar13 + 0x37) < '\0') {
                      uVar5 = plVar16[8];
                      pppppplVar13 = (long ******)plVar16[7];
                      if (-1 < (char)bVar4) {
                        uVar5 = (ulong)bVar4;
                        pppppplVar13 = pppppplVar6;
                      }
                      FUN_00547f08(pppppplVar1,pppppplVar13,uVar5);
                    }
                    else if ((char)bVar4 < '\0') {
                      FUN_00547fc0(pppppplVar1,plVar16[7],plVar16[8]);
                    }
                    else {
                      ppppplVar27 = (long *****)plVar16[8];
                      ppppplVar19 = *pppppplVar6;
                      pppppplVar13[6] = (long *****)plVar16[9];
                      pppppplVar13[5] = ppppplVar27;
                      *pppppplVar1 = ppppplVar19;
                    }
                  }
                }
                goto LAB_00c00dd0;
              }
              if (ppppplVar27 <= ppppplVar19) goto LAB_00c00d10;
LAB_00c00d60:
              plVar16 = (long *)*plVar16;
              if (plVar16 == (long *)0x0) goto LAB_00c00dd0;
            }
            if (iVar10 < 0) goto LAB_00c00d60;
LAB_00c00d10:
            plVar16 = (long *)plVar16[1];
          } while (plVar16 != (long *)0x0);
        }
LAB_00c00dd0:
        pplVar24 = (*ppppplVar26)[2][10];
        pplVar3 = (*ppppplVar26)[2][0xb];
        uVar5 = (long)pplVar3 - (long)pplVar24;
        if (uVar5 != 0) {
          if ((long)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00bf4944();
          }
          plVar14 = (long *)operator_new(uVar5);
          lVar9 = 8;
          plVar16 = plVar14;
          lVar2 = 0;
          do {
            lVar20 = lVar2;
            plVar25 = plVar16;
            lVar15 = lVar9;
            if ((long *)((long)plVar14 + lVar20) == (long *)0x0) goto LAB_00c0119c;
            plVar16 = *pplVar24;
            *(long *)((long)plVar14 + lVar20) = (long)plVar16;
            if (plVar16 != (long *)0x0) {
              (**(code **)*plVar16)();
            }
            pplVar24 = pplVar24 + 1;
            lVar2 = lVar20 + 8;
            lVar9 = lVar15 + 8;
            plVar16 = plVar25 + 1;
            plVar7 = plVar14;
            lVar8 = lVar2;
          } while (pplVar24 != pplVar3);
          while (lVar8 != 0) {
            local_c8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
            (**(code **)(*(long *)*plVar7 + 0x28))(&local_c8);
            local_d0 = &DAT_aaaaaaaaaaaaaaaa;
            ppppppplStack_d8 = (long *******)&DAT_aaaaaaaaaaaaaaaa;
            local_e0 = (long *******)&DAT_aaaaaaaaaaaaaaaa;
            if (local_c8 == (long *)0x0) {
              local_d0 = (undefined1 *)0xaaaaaaaaaaaaaa;
              local_e0 = (long *******)0xaaaaaaaaaaaaaa00;
            }
            else {
              (**(code **)(*local_c8 + 0x28))(&local_e0);
            }
            pppppplVar13 = local_a0;
            uVar11 = (**(code **)(*(long *)*plVar7 + 0x38))();
            local_c0 = (long *******)CONCAT44(local_c0._4_4_,uVar11);
            if ((long)local_d0 < 0) {
              FUN_005478d8(&ppppppplStack_b8,local_e0,ppppppplStack_d8);
            }
            else {
              local_b0 = ppppppplStack_d8;
              ppppppplStack_b8 = local_e0;
              local_a8 = local_d0;
            }
            FUN_00c07b24(0,pppppplVar13 + 7,pppppplVar13 + 7,&local_c0);
            if ((long)local_a8 < 0) {
              operator_delete(ppppppplStack_b8);
            }
            if ((long)local_d0 < 0) {
              operator_delete(local_e0);
            }
            if (local_c8 != (long *)0x0) {
              (**(code **)(*local_c8 + 8))();
            }
            lVar15 = lVar15 + -8;
            plVar7 = plVar7 + 1;
            lVar8 = lVar15;
          }
          if (plVar14 != (long *)0x0) {
            if (lVar2 != 0) {
              lVar20 = -8 - lVar20;
              do {
                if (plVar25 == (long *)0x0) goto LAB_00c011b0;
                if ((long *)*plVar25 != (long *)0x0) {
                  (**(code **)(*(long *)*plVar25 + 8))();
                }
                lVar20 = lVar20 + 8;
                plVar25 = plVar25 + -1;
              } while (lVar20 != 0);
            }
            operator_delete(plVar14);
          }
        }
        pppppplVar13 = local_a0;
        local_c0 = (long *******)&local_e0;
        ppppppplStack_b8 = &local_a0;
        local_b0 = (long *******)&local_78;
        local_e0 = local_70;
        if (local_70 < local_68) {
          if (local_70 == (long *******)0x0) {
LAB_00c0119c:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          local_a0 = (long ******)0x0;
          local_e0 = local_70 + 1;
          *local_70 = pppppplVar13;
        }
        else {
          FUN_00c06d64(&local_c0);
        }
        pppppplVar13 = local_a0;
        local_70 = local_e0;
        local_a0 = (long ******)0x0;
        if (pppppplVar13 != (long ******)0x0) {
          (*(code *)(*pppppplVar13)[1])();
        }
      }
      ppppplVar26 = ppppplVar26 + 1;
    } while (ppppplVar26 != ppppplVar21);
  }
  FUN_007e0b18(local_94);
  plVar16 = (long *)(**(code **)(**(long **)(param_1 + 0x40) + 0x210))();
  ppppppplStack_b8 = (long *******)&local_78;
  local_c0 = (long *******)&local_90;
  (**(code **)(*plVar16 + 0x60))(plVar16,&local_c0,FUN_00c07c40,&local_e0);
  local_c0 = (long *******)CONCAT71(local_c0._1_7_,0xaa);
  FUN_007e0b10(&local_c0);
  ppppppplVar22 = local_70;
  if (local_78 == local_70) {
    uVar23 = 0;
  }
  else {
    uVar23 = 0;
    ppppppplVar17 = local_78;
    do {
      (*(code *)(**ppppppplVar17)[3])(*ppppppplVar17,param_1);
      ppppppplVar18 = ppppppplVar17 + 1;
      uVar12 = (*(code *)(**ppppppplVar17)[4])();
      uVar23 = uVar23 | uVar12;
      ppppppplVar17 = ppppppplVar18;
    } while (ppppppplVar18 != ppppppplVar22);
  }
  FUN_00c02978(param_1,uVar23 & 1);
  FUN_007e0b18(&local_c0);
  ppppplVar26 = local_90;
  ppppplVar21 = ppppplStack_88;
  if (local_90 != (long *****)0x0) {
    while (ppppplVar26 != ppppplVar21) {
      ppppplVar21 = ppppplVar21 + -1;
      if (ppppplVar21 == (long *****)0x0) goto LAB_00c011b0;
      if (*ppppplVar21 != (long ****)0x0) {
        (*(code *)(**ppppplVar21)[1])();
      }
    }
    ppppplStack_88 = ppppplVar26;
    operator_delete(local_90);
  }
  ppppppplVar17 = local_78;
  ppppppplVar22 = local_70;
  if (local_78 != (long *******)0x0) {
    while (ppppppplVar17 != ppppppplVar22) {
      ppppppplVar22 = ppppppplVar22 + -1;
      if (ppppppplVar22 == (long *******)0x0) {
LAB_00c011b0:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pppppplVar13 = *ppppppplVar22;
      *ppppppplVar22 = (long ******)0x0;
      if (pppppplVar13 != (long ******)0x0) {
        (*(code *)(*pppppplVar13)[1])();
      }
    }
    local_70 = ppppppplVar17;
    operator_delete(local_78);
  }
  return;
}


// ===== 00c011dc  FUN_00c011dc =====

void FUN_00c011dc(long param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  size_t __n;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  char *__s;
  long *plVar8;
  long *local_98;
  undefined8 local_90;
  void *local_88;
  size_t local_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  
  (**(code **)(**(long **)(param_1 + 0x40) + 0x80))(&local_68);
  plVar7 = local_60;
  if (local_68 != local_60) {
    __s = *(char **)PTR_PTR_s_video_00d52d38;
    plVar8 = local_68;
    do {
      iVar2 = (**(code **)(*(long *)*plVar8 + 0x38))();
      if (iVar2 != 0) {
        local_70 = (long *)&DAT_aaaaaaaaaaaaaaaa;
        (**(code **)(*(long *)*plVar8 + 0x28))(&local_70);
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))(&local_88);
          if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/string:3571: libc++ Hardening assertion __rhs != nullptr failed: operator==(basic_string, char*): received nullptr\n"
                      );
          }
          __n = strlen(__s);
          pvVar1 = local_88;
          if ((long)local_78._7_1_ < 0) {
            if (__n == local_80) {
              if (__n == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                FUN_005f5590();
              }
              iVar2 = memcmp(local_88,__s,__n);
              operator_delete(pvVar1);
              goto joined_r0x00c012f8;
            }
            operator_delete(local_88);
          }
          else if (__n == (long)local_78._7_1_) {
            iVar2 = memcmp(&local_88,__s,__n);
joined_r0x00c012f8:
            if (iVar2 == 0) {
              plVar4 = (long *)(**(code **)(*local_70 + 0x58))();
              local_90 = &DAT_aaaaaaaaaaaaaaaa;
              uVar5 = (**(code **)(*plVar4 + 0x40))(plVar4,&local_90);
              if ((uVar5 & 1) != 0) {
                local_98 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                uVar3 = (**(code **)(*(long *)*plVar8 + 0x38))();
                local_88 = (void *)0x0;
                local_80 = 0;
                local_78 = 0;
                FUN_005fa03c(&local_88,0x16,uVar3);
                FUN_00c0851c(&local_98,5,&local_88,0);
                if (local_78 < 0) {
                  operator_delete(local_88);
                }
                uVar6 = FUN_00c092c8(param_1 + 8,&local_98);
                FUN_00c08c64(uVar6,0x58,(ulong)local_90 & 0xffffffff);
                FUN_00c08c64(uVar6,0x50,local_90._4_4_);
                if (local_98 != (long *)0x0) {
                  (**(code **)(*local_98 + 8))();
                }
              }
            }
          }
          if (local_70 != (long *)0x0) {
            (**(code **)(*local_70 + 8))();
          }
        }
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar7);
  }
  plVar8 = local_68;
  plVar7 = local_60;
  if (local_68 != (long *)0x0) {
    while (plVar8 != plVar7) {
      plVar7 = plVar7 + -1;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((long *)*plVar7 != (long *)0x0) {
        (**(code **)(*(long *)*plVar7 + 8))();
      }
    }
    local_60 = plVar8;
    operator_delete(local_68);
  }
  return;
}


// ===== 00c01494  FUN_00c01494 =====

long FUN_00c01494(long param_1,ulong param_2,undefined4 param_3,long param_4,undefined8 param_5,
                 undefined4 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  void *local_60;
  undefined8 uStack_58;
  long local_50;
  long *local_48;
  
  local_48 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_60 = (void *)0x0;
  uStack_58 = 0;
  uVar3 = 5;
  if ((param_2 & 1) == 0) {
    uVar3 = 6;
  }
  local_50 = 0;
  FUN_005fa03c(&local_60,0x16,param_3);
  FUN_00c0851c(&local_48,uVar3,&local_60,param_6);
  if (local_50 < 0) {
    operator_delete(local_60);
  }
  lVar2 = FUN_00c0935c(param_1 + 8,&local_48);
  if (lVar2 == 0) {
    lVar2 = FUN_00c09220(param_1 + 8,&local_48);
  }
  *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(param_1 + 0x58);
  FUN_00c08b3c(lVar2,0x15,param_3);
  uVar1 = *(ulong *)(param_4 + 8);
  if ((*(byte *)(param_4 + 0x17) & 0x80) == 0) {
    uVar1 = (ulong)*(byte *)(param_4 + 0x17);
  }
  if (uVar1 != 0) {
    FUN_00c087e8(lVar2,0x87,param_4);
  }
  FUN_00c08fbc(lVar2,0x1a,param_5);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 8))();
  }
  return lVar2;
}


// ===== 00c015c0  FUN_00c015c0 =====

bool FUN_00c015c0(long param_1)

{
  long lVar1;
  long *local_8;
  
  FUN_00c08418(&local_8,7);
  lVar1 = FUN_00c0935c(param_1 + 8,&local_8);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return lVar1 != 0;
}


// ===== 00c01620  FUN_00c01620 =====

long FUN_00c01620(long param_1,void *param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *local_98 [2];
  char local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined8 *local_48;
  
  local_80 = 0;
  uStack_78 = 0;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  if (param_2 == (void *)0x0) {
    FUN_00c03184(&local_80);
    lVar5 = 0;
  }
  else {
    pvVar2 = param_2;
    lVar3 = 0;
    lVar5 = 0;
    do {
      local_48 = &local_80;
      FUN_00c07088(local_98,&local_48,pvVar2,pvVar2);
      if (local_88 != '\x01') break;
      local_98[0] = (long *)&DAT_aaaaaaaaaaaaaaaa;
      FUN_00c08418(local_98,10,pvVar2);
      lVar1 = FUN_00c093d8(param_1 + 8,local_98);
      *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_1 + 0x58);
      FUN_00c087e8(lVar1,0x4b,pvVar2);
      FUN_00c087e8(lVar1,0x4c,(long)pvVar2 + 0x18);
      FUN_00c087e8(lVar1,0x43,(long)pvVar2 + 0x30);
      lVar4 = lVar1;
      if (lVar5 != 0) {
        FUN_00c08fbc(lVar3,0x5f,local_98);
        lVar4 = lVar5;
      }
      if (local_98[0] != (long *)0x0) {
        (**(code **)(*local_98[0] + 8))();
      }
      pvVar2 = *(void **)((long)pvVar2 + 0x48);
      lVar3 = lVar1;
      lVar5 = lVar4;
    } while (pvVar2 != (void *)0x0);
    FUN_00c03184(&local_80);
    FUN_0083267c(param_2);
    operator_delete(param_2);
  }
  return lVar5;
}


// ===== 00c0178c  FUN_00c0178c =====

long FUN_00c0178c(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined1 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  void *local_728 [2];
  char cStack_711;
  undefined1 auStack_710 [408];
  undefined1 auStack_578 [408];
  undefined1 local_3e0;
  undefined1 local_3c8;
  undefined1 auStack_3c0 [408];
  undefined1 auStack_228 [408];
  undefined1 local_90;
  undefined1 local_78;
  long *local_70 [2];
  
  local_70[0] = (long *)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00c0870c(local_70,param_2,param_3,param_4);
  lVar7 = FUN_00c093d8(param_1 + 8,local_70);
  *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(param_1 + 0x58);
  FUN_00c08ea0(lVar7,0,*param_6);
  FUN_00c08ea0(lVar7,0x13,param_6[2]);
  FUN_00c08ea0(lVar7,0x8a,param_6[1]);
  FUN_00c08fbc(lVar7,0x33,param_5);
  memcpy(auStack_228,&DAT_00258230,0x1b8);
  FUN_00afef10(auStack_3c0,param_6 + 0x78);
  FUN_00afef10(auStack_228,auStack_3c0);
  local_90 = 0;
  local_78 = 0;
  FUN_00aff0f8(auStack_3c0);
  memcpy(auStack_578,&DAT_00258230,0x1b8);
  FUN_00afef10(auStack_710,param_6 + 0x210);
  FUN_00afef10(auStack_578,auStack_710);
  local_3e0 = 0;
  local_3c8 = 0;
  FUN_00aff0f8(auStack_710);
  uVar8 = FUN_00c01ad8(param_1,auStack_228,1);
  FUN_00c08fbc(lVar7,100,uVar8);
  uVar8 = FUN_00c01ad8(param_1,auStack_578,0);
  FUN_00c08fbc(lVar7,0x70,uVar8);
  uVar8 = *(undefined8 *)(param_6 + 0x48);
  uVar1 = *(undefined8 *)(param_6 + 0x68);
  uVar4 = *(undefined8 *)(param_6 + 0x70);
  uVar2 = *(undefined8 *)(param_6 + 0x28);
  uVar5 = *(undefined8 *)(param_6 + 0x30);
  uVar9 = *(undefined8 *)(param_6 + 0x18);
  uVar3 = *(undefined8 *)(param_6 + 0x38);
  uVar6 = *(undefined8 *)(param_6 + 0x40);
  uVar10 = *(undefined8 *)(param_6 + 8);
  FUN_00c08b3c(lVar7,4,*(undefined8 *)(param_6 + 0x50));
  FUN_00c08b3c(lVar7,5,uVar9);
  FUN_00c08b3c(lVar7,0x10,uVar5);
  FUN_00c08b3c(lVar7,0x7e,uVar10);
  FUN_00c08b3c(lVar7,0x81,uVar2);
  FUN_00c08b3c(lVar7,0x1b,uVar3);
  FUN_00c08b3c(lVar7,0x1c,uVar6);
  FUN_00c08b3c(lVar7,0x1d,uVar8);
  FUN_00c08b3c(lVar7,0x1e,uVar1);
  FUN_00c08b3c(lVar7,0x1f,uVar4);
  FUN_007e9154(local_728,param_6 + 200);
  FUN_00c087e8(lVar7,99,local_728);
  if (cStack_711 < '\0') {
    operator_delete(local_728[0]);
  }
  FUN_00bff03c(local_728,param_6 + 0x78);
  FUN_00c087e8(lVar7,0x65,local_728);
  if (cStack_711 < '\0') {
    operator_delete(local_728[0]);
  }
  FUN_007e9154(local_728,param_6 + 0x260);
  FUN_00c087e8(lVar7,0x6f,local_728);
  if (cStack_711 < '\0') {
    operator_delete(local_728[0]);
  }
  FUN_00bff03c(local_728,param_6 + 0x210);
  FUN_00c087e8(lVar7,0x71,local_728);
  if (cStack_711 < '\0') {
    operator_delete(local_728[0]);
  }
  FUN_00c087e8(lVar7,0x89,param_6 + 0x98);
  FUN_00c087e8(lVar7,0x8c,param_6 + 0xb0);
  FUN_00aff0f8(auStack_578);
  FUN_00aff0f8(auStack_228);
  if (local_70[0] != (long *)0x0) {
    (**(code **)(*local_70[0] + 8))();
  }
  return lVar7;
}


// ===== 00c01ad8  FUN_00c01ad8 =====

long FUN_00c01ad8(long param_1,long param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  void *local_50 [2];
  char cStack_39;
  long *local_38;
  
  local_38 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00c085c4(&local_38,param_3);
  lVar2 = FUN_00c0935c(param_1 + 8,&local_38);
  if (lVar2 != 0) goto LAB_00c01cc8;
  lVar2 = FUN_00c09220(param_1 + 8,&local_38);
  *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(param_1 + 0x58);
  if ((param_3 & 1) != 0) {
    iVar1 = *(int *)(param_2 + 0xf0);
    if (iVar1 < 0x10) {
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          pcVar4 = "unknown";
        }
        else {
          if (iVar1 != 1) goto LAB_00c01d9c;
          pcVar4 = "lan";
        }
      }
      else if (iVar1 == 2) {
        pcVar4 = "wlan";
      }
      else {
        if (iVar1 == 4) goto LAB_00c01bb4;
        if (iVar1 != 8) goto LAB_00c01d9c;
        pcVar4 = "vpn";
      }
    }
    else if (iVar1 < 0x80) {
      if (iVar1 == 0x10) {
        pcVar4 = "loopback";
      }
      else {
        if (iVar1 != 0x20) {
          if (iVar1 == 0x40) goto LAB_00c01bb4;
          goto LAB_00c01d9c;
        }
        pcVar4 = "wildcard";
      }
    }
    else if (((iVar1 == 0x80) || (iVar1 == 0x100)) || (iVar1 == 0x200)) {
LAB_00c01bb4:
      pcVar4 = "wwan";
    }
    else {
LAB_00c01d9c:
      pcVar4 = "";
    }
    FUN_00c08a34(lVar2,0x2e,pcVar4);
  }
  FUN_007e8ea8(param_2 + 0x50);
  FUN_007e9e64(local_50);
  FUN_00c087e8(lVar2,0x2d,local_50);
  if (cStack_39 < '\0') {
    operator_delete(local_50[0]);
  }
  FUN_007e9148(local_50,param_2 + 0x50);
  FUN_00c087e8(lVar2,0x2f,local_50);
  if (cStack_39 < '\0') {
    operator_delete(local_50[0]);
  }
  FUN_00c08c64(lVar2,0x30,*(undefined4 *)(param_2 + 0x98));
  uVar3 = FUN_00aff2e0(param_2);
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_00aff2f4(param_2);
    if ((uVar3 & 1) == 0) {
      uVar3 = FUN_00aff308(param_2);
      if ((uVar3 & 1) == 0) {
        uVar3 = FUN_00aff31c(param_2);
        pcVar4 = "relayed";
        if ((uVar3 & 1) == 0) {
          pcVar4 = "unknown";
        }
      }
      else {
        pcVar4 = "peerreflexive";
      }
    }
    else {
      pcVar4 = "serverreflexive";
    }
  }
  else {
    pcVar4 = "host";
  }
  FUN_00c08a34(lVar2,0x32,pcVar4);
  FUN_00c087e8(lVar2,0x31,param_2 + 0x20);
LAB_00c01cc8:
  *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(param_1 + 0x58);
  if (((param_3 & 1) != 0) && ((*(byte *)(param_2 + 0x1b0) & 1) != 0)) {
    FUN_00c08b3c(lVar2,0x20,(long)*(int *)(param_2 + 0x198));
    FUN_00c08b3c(lVar2,0x21,(long)*(int *)(param_2 + 0x19c));
    FUN_00c08d84((float)*(double *)(param_2 + 0x1a0),lVar2,0x22);
    FUN_00c08d84((float)*(double *)(param_2 + 0x1a8),lVar2,0x23);
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 8))();
  }
  return lVar2;
}


// ===== 00c01da8  FUN_00c01da8 =====

void FUN_00c01da8(long param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  char *pcVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *******__dest;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  char *pcVar15;
  int iVar16;
  undefined8 *******__src;
  undefined4 *puVar17;
  long *local_a0;
  long *local_98;
  long *local_90;
  undefined8 ******local_88;
  ulong local_80;
  undefined8 local_78;
  long *local_70;
  undefined1 local_64 [4];
  
  local_64[0] = 0xaa;
  FUN_007e0b10(local_64);
  local_70 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x10))(&local_88);
  FUN_00c08418(&local_70,0,&local_88);
  if ((long)local_78 < 0) {
    operator_delete(local_88);
  }
  lVar9 = FUN_00c093d8(param_1 + 8,&local_70);
  *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(param_1 + 0x58);
  uVar8 = (**(code **)(**(long **)(param_1 + 0x40) + 0x218))();
  FUN_00c08ea0(lVar9,0x5d,uVar8 & 1);
  lVar4 = param_2[1];
  for (lVar9 = *param_2; lVar9 != lVar4; lVar9 = lVar9 + 0x1b8) {
    FUN_00c01ad8(param_1,lVar9,1);
  }
  lVar9 = param_2[3];
  lVar4 = param_2[4];
  do {
    if (lVar9 == lVar4) {
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 8))();
      }
      FUN_007e0b18(local_64);
      return;
    }
    local_98 = (long *)0x0;
    local_90 = (long *)0x0;
    plVar13 = local_90;
    if (*(long *)(lVar9 + 0x48) != 0) {
      *(undefined8 *)(lVar9 + 0x48) = 0;
      puVar10 = (undefined8 *)FUN_00c01620(param_1);
      plVar13 = local_90;
      if (puVar10 != (undefined8 *)0x0) {
        plVar13 = (long *)*puVar10;
        if (plVar13 != (long *)0x0) {
          (**(code **)*plVar13)(plVar13);
        }
        if (local_90 != (long *)0x0) {
          (**(code **)(*local_90 + 8))();
        }
      }
    }
    local_90 = plVar13;
    plVar13 = local_98;
    if (*(long *)(lVar9 + 0x50) != 0) {
      *(undefined8 *)(lVar9 + 0x50) = 0;
      puVar10 = (undefined8 *)FUN_00c01620(param_1);
      plVar13 = local_98;
      if (puVar10 != (undefined8 *)0x0) {
        plVar13 = (long *)*puVar10;
        if (plVar13 != (long *)0x0) {
          (**(code **)*plVar13)(plVar13);
        }
        if (local_98 != (long *)0x0) {
          (**(code **)(*local_98 + 8))();
        }
      }
    }
    local_98 = plVar13;
    puVar5 = *(undefined4 **)(lVar9 + 0x38);
    for (puVar17 = *(undefined4 **)(lVar9 + 0x30); puVar17 != puVar5; puVar17 = puVar17 + 0x30) {
      local_a0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
      FUN_00c0866c(&local_a0,lVar9,*puVar17);
      lVar11 = FUN_00c093d8(param_1 + 8,&local_a0);
      *(undefined8 *)(lVar11 + 8) = *(undefined8 *)(param_1 + 0x58);
      FUN_00c08c64(lVar11,0x35,*puVar17);
      if (local_90 != (long *)0x0) {
        FUN_00c08fbc(lVar11,0x66,&local_90);
      }
      if (local_98 != (long *)0x0) {
        FUN_00c08fbc(lVar11,0x72,&local_98);
      }
      iVar16 = puVar17[2];
      if (iVar16 != 0) {
        FUN_0083e1fc(&local_88,iVar16);
        uVar14 = local_80;
        if (-1 < (long)local_78) {
          uVar14 = (long)local_78._7_1_;
        }
        if ((long)local_78._7_1_ < 0) {
          operator_delete(local_88);
        }
        if (uVar14 != 0) {
          FUN_0083e1fc(&local_88,iVar16);
          FUN_00c087e8(lVar11,0x83,&local_88);
          if ((long)local_78 < 0) {
            operator_delete(local_88);
          }
        }
      }
      if (*(char *)(puVar17 + 8) == '\x01') {
        uVar14 = *(ulong *)(puVar17 + 6);
        if (0x7ffffffffffffff6 < uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_005d45ec();
        }
        __src = *(undefined8 ********)(puVar17 + 4);
        if (uVar14 < 0x17) {
          local_78 = CONCAT17((char)uVar14,(undefined7)local_78);
          __dest = &local_88;
        }
        else {
          uVar1 = (uVar14 & 0x7ffffffffffffff8) + 8;
          uVar2 = 0x19;
          if (uVar1 != 0x18) {
            uVar2 = uVar1;
          }
          __dest = (undefined8 *******)operator_new(uVar2);
          local_78 = uVar2 | 0x8000000000000000;
          local_88 = __dest;
          local_80 = uVar14;
        }
        if ((undefined8 *******)((long)__dest + uVar14) < __dest) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                    );
        }
        if ((__dest <= __src) && (__src < (undefined8 *******)((long)__dest + uVar14))) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                    );
        }
        memmove(__dest,__src,uVar14);
        *(undefined1 *)((long)__dest + uVar14) = 0;
        FUN_00c087e8(lVar11,0x44,&local_88);
        if ((long)local_78 < 0) {
          operator_delete(local_88);
        }
      }
      lVar6 = *(long *)(puVar17 + 0x10);
      for (lVar3 = *(long *)(puVar17 + 0xe); lVar3 != lVar6; lVar3 = lVar3 + 0x1b8) {
        FUN_00c01ad8(param_1,lVar3,1);
      }
      pcVar15 = *(char **)(puVar17 + 0x14);
      pcVar7 = *(char **)(puVar17 + 0x16);
      if (pcVar15 != pcVar7) {
        iVar16 = 0;
        do {
          uVar12 = FUN_00c0178c(param_1,lVar9,*puVar17,iVar16,lVar11,pcVar15);
          if (*pcVar15 == '\x01') {
            FUN_00c08fbc(lVar11,0x14,uVar12);
          }
          pcVar15 = pcVar15 + 0x3f8;
          iVar16 = iVar16 + 1;
        } while (pcVar15 != pcVar7);
      }
      if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 8))();
      }
    }
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 8))();
    }
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 8))();
    }
    lVar9 = lVar9 + 0x58;
  } while( true );
}


// ===== 00c02234  FUN_00c02234 =====

void FUN_00c02234(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 *local_18;
  
  local_18 = param_1 + 6;
  FUN_0060b2cc(&local_18,param_1[7]);
  pvVar3 = (void *)param_1[3];
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[4];
    pvVar1 = pvVar3;
    if (pvVar3 != pvVar2) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0x58);
        if (pvVar2 == (void *)0x0) goto LAB_00c022fc;
        FUN_00c03278(pvVar2);
      } while (pvVar2 != pvVar3);
      pvVar1 = (void *)param_1[3];
    }
    param_1[4] = pvVar3;
    operator_delete(pvVar1);
  }
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[1];
    pvVar1 = pvVar3;
    if (pvVar3 != pvVar2) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0x1b8);
        if (pvVar2 == (void *)0x0) {
LAB_00c022fc:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_00aff0f8(pvVar2);
      } while (pvVar2 != pvVar3);
      pvVar1 = (void *)*param_1;
    }
    param_1[1] = pvVar3;
    operator_delete(pvVar1);
  }
  return;
}


// ===== 00c02310  FUN_00c02310 =====

void FUN_00c02310(undefined8 *param_1,long param_2,long *param_3,undefined8 *param_4,long ***param_5
                 )

{
  long ****pppplVar1;
  long **pplVar2;
  byte bVar3;
  long ****pppplVar4;
  long ***ppplVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  void *pvVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long *plVar15;
  void *pvVar16;
  long ***ppplVar17;
  long ***ppplVar18;
  void *pvVar19;
  long **pplVar20;
  long ***ppplVar21;
  long **pplVar22;
  long ****pppplVar23;
  long *plVar24;
  undefined8 uVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long *local_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  long ***local_c8;
  long *local_c0;
  undefined8 uStack_b8;
  long ***local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 local_84 [4];
  char **local_80;
  char *local_78;
  char *pcStack_70;
  undefined1 uStack_61;
  
  if (((DAT_00dbae18 & 1) == 0) && (iVar7 = FUN_0054fdd4(&DAT_00dbae18), iVar7 != 0)) {
    DAT_00dbae10 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbae18);
  }
  local_80 = (char **)0x0;
  pcStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbae10 != '\0') {
    FUN_0066d348(0x42,DAT_00dbae10,"LegacyStatsCollector::ExtractSessionInfo_n",0,0,0,0,0,0);
    local_78 = DAT_00dbae10;
    pcStack_70 = "LegacyStatsCollector::ExtractSessionInfo_n";
    local_80 = &local_78;
  }
  local_84[0] = 0xaa;
  FUN_007e0b10(local_84);
  plVar8 = *(long **)(param_2 + 0x40);
  param_1[8] = 0;
  ppplVar21 = (long ***)(param_1 + 7);
  *ppplVar21 = (long **)0x0;
  pppplVar23 = (long ****)(param_1 + 6);
  *pppplVar23 = ppplVar21;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  (**(code **)(*plVar8 + 0x238))(&local_b0);
  pvVar16 = (void *)*param_1;
  if (pvVar16 != (void *)0x0) {
    pvVar19 = (void *)param_1[1];
    pvVar9 = pvVar16;
    if (pvVar16 != pvVar19) {
      do {
        pvVar19 = (void *)((long)pvVar19 + -0x1b8);
        if (pvVar19 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_00aff0f8(pvVar19);
      } while (pvVar19 != pvVar16);
      pvVar9 = (void *)*param_1;
    }
    param_1[1] = pvVar16;
    operator_delete(pvVar9);
  }
  pplVar22 = (long **)*param_3;
  pplVar2 = (long **)param_3[1];
  param_1[1] = puStack_a8;
  *param_1 = local_b0;
  param_1[2] = local_a0;
  if (pplVar22 != pplVar2) {
    do {
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_b0 = (long ***)&DAT_aaaaaaaaaaaaaaaa;
      local_98 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      plVar8 = (long *)(long)*(char *)((long)pplVar22 + 0x17);
      pplVar20 = pplVar22;
      if ((long)plVar8 < 0) {
        plVar8 = pplVar22[1];
        pplVar20 = (long **)*pplVar22;
      }
      lVar10 = (**(code **)(*(long *)(*(long *)(param_2 + 0x40) + 8) + 0x70))();
      if (((lVar10 == 0) ||
          (plVar8 = (long *)FUN_00c35754(lVar10,pplVar20,plVar8), plVar8 == (long *)0x0)) ||
         (puVar11 = (undefined8 *)(**(code **)(*plVar8 + 0xd0))(), puVar11 == (undefined8 *)0x0)) {
        local_b0 = (long ***)((ulong)local_b0 & 0xffffffffffffff00);
        local_98 = (undefined1 *)((ulong)local_98 & 0xffffffffffffff00);
      }
      else {
        puVar11 = (undefined8 *)(**(code **)*puVar11)();
        if (*(char *)((long)puVar11 + 0x17) < '\0') {
          FUN_005478d8(&local_b0,*puVar11,puVar11[1]);
        }
        else {
          local_a0 = (undefined1 *)puVar11[2];
          puStack_a8 = (undefined1 *)puVar11[1];
          local_b0 = (long ***)*puVar11;
        }
        local_98 = (undefined1 *)CONCAT71(local_98._1_7_,1);
        local_e0 = (long *)pplVar22;
        local_c8 = (long ***)pppplVar23;
        lVar10 = FUN_0066d1b4(&local_c8,pplVar22,&DAT_001f94c3,&local_e0,&uStack_61);
        pppplVar1 = (long ****)(lVar10 + 0x38);
        if (pppplVar1 != &local_b0) {
          if (*(char *)(lVar10 + 0x4f) < '\0') {
            plVar8 = (long *)puStack_a8;
            pppplVar4 = (long ****)local_b0;
            if (-1 < (long)local_a0) {
              plVar8 = (long *)((ulong)local_a0 >> 0x38);
              pppplVar4 = &local_b0;
            }
            FUN_00547f08(pppplVar1,pppplVar4,plVar8);
          }
          else if ((long)local_a0 < 0) {
            FUN_00547fc0(pppplVar1,local_b0,puStack_a8);
          }
          else {
            *(undefined1 **)(lVar10 + 0x48) = local_a0;
            *(undefined1 **)(lVar10 + 0x40) = puStack_a8;
            *pppplVar1 = local_b0;
          }
        }
      }
      if (((char)local_98 == '\x01') && ((long)local_a0 < 0)) {
        operator_delete(local_b0);
      }
      pplVar22 = pplVar22 + 3;
    } while (pplVar22 != pplVar2);
  }
  if ((*(byte *)(param_4 + 3) & 1) != 0) {
    if (((ulong)param_5[3] & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    local_c8 = param_5;
    local_b0 = (long ***)pppplVar23;
    lVar10 = FUN_0066d1b4(&local_b0,param_5,&DAT_001f94c3,&local_c8,&local_e0);
    puVar11 = (undefined8 *)(lVar10 + 0x38);
    if (puVar11 != param_4) {
      bVar3 = *(byte *)((long)param_4 + 0x17);
      if (*(char *)(lVar10 + 0x4f) < '\0') {
        uVar12 = param_4[1];
        puVar14 = (undefined8 *)*param_4;
        if (-1 < (char)bVar3) {
          uVar12 = (ulong)bVar3;
          puVar14 = param_4;
        }
        FUN_00547f08(puVar11,puVar14,uVar12);
      }
      else if ((char)bVar3 < '\0') {
        FUN_00547fc0(puVar11,*param_4,param_4[1]);
      }
      else {
        uVar25 = param_4[1];
        uVar13 = *param_4;
        *(undefined8 *)(lVar10 + 0x48) = param_4[2];
        *(undefined8 *)(lVar10 + 0x40) = uVar25;
        *puVar11 = uVar13;
      }
    }
  }
  ppplVar17 = *pppplVar23;
  local_c0 = (long *)0x0;
  uStack_b8 = 0;
  local_c8 = (long ***)&local_c0;
  while (ppplVar17 != ppplVar21) {
    local_b0 = (long ***)&local_c8;
    FUN_00b07310(&local_b0,ppplVar17 + 7,ppplVar17 + 7);
    ppplVar5 = (long ***)ppplVar17[1];
    ppplVar18 = ppplVar17;
    if ((long ***)ppplVar17[1] == (long ***)0x0) {
      do {
        ppplVar17 = (long ***)ppplVar18[2];
        bVar6 = ppplVar18 != (long ***)*ppplVar17;
        ppplVar18 = ppplVar17;
      } while (bVar6);
    }
    else {
      do {
        ppplVar17 = ppplVar5;
        ppplVar5 = (long ***)*ppplVar17;
      } while ((long ***)*ppplVar17 != (long ***)0x0);
    }
  }
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(**(long **)(param_2 + 0x40) + 0x240))(&local_e0,*(long **)(param_2 + 0x40),&local_c8)
  ;
  pplVar22 = (long **)local_e0;
  while( true ) {
    if (pplVar22 == (long **)((ulong)&local_e0 | 8)) {
      local_b0 = (long ***)&local_e0;
      FUN_00c079c8(&local_b0,puStack_d8);
      local_b0 = (long ***)&local_c8;
      FUN_00b16af4(&local_b0,local_c0);
      FUN_007e0b18(local_84);
      if ((local_80 != (char **)0x0) && (**local_80 != '\0')) {
        FUN_0066d348(0x45,*local_80,local_80[1],0,0,0,0,0,0);
      }
      return;
    }
    puVar11 = (undefined8 *)param_1[4];
    if (puVar11 < (undefined8 *)param_1[5]) {
      if (puVar11 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      if (*(char *)((long)pplVar22 + 0x37) < '\0') {
        FUN_005478d8(&local_b0,pplVar22[4],pplVar22[5]);
      }
      else {
        local_a0 = (undefined1 *)pplVar22[6];
        puStack_a8 = (undefined1 *)pplVar22[5];
        local_b0 = (long ***)pplVar22[4];
      }
      plVar8 = pplVar22[7];
      plVar26 = pplVar22[9];
      plVar24 = pplVar22[8];
      plVar28 = pplVar22[0xb];
      plVar27 = pplVar22[10];
      pplVar22[7] = (long *)0x0;
      pplVar22[8] = (long *)0x0;
      puVar14 = puVar11 + 0xb;
      plVar15 = pplVar22[0xc];
      pplVar22[0xb] = (long *)0x0;
      pplVar22[0xc] = (long *)0x0;
      pplVar22[9] = (long *)0x0;
      pplVar22[10] = (long *)0x0;
      puVar11[5] = plVar26;
      puVar11[4] = plVar24;
      puVar11[7] = plVar28;
      puVar11[6] = plVar27;
      puVar11[8] = plVar15;
      puVar11[9] = 0;
      puVar11[1] = puStack_a8;
      *puVar11 = local_b0;
      puVar11[2] = local_a0;
      puVar11[3] = plVar8;
      puVar11[10] = 0;
    }
    else {
      puVar14 = (undefined8 *)FUN_00c03384(param_1 + 3,pplVar22 + 4,pplVar22 + 7);
    }
    param_1[4] = puVar14;
    if ((undefined8 *)param_1[3] == puVar14) break;
    local_b0 = (long ***)0x0;
    uVar12 = (**(code **)(**(long **)(param_2 + 0x40) + 600))
                       (*(long **)(param_2 + 0x40),puVar14 + -0xb,&local_b0);
    if ((uVar12 & 1) != 0) {
      FUN_00833e50(local_b0);
      uVar13 = FUN_00832ca8();
      pvVar16 = (void *)puVar14[-2];
      puVar14[-2] = uVar13;
      if (pvVar16 != (void *)0x0) {
        FUN_0083267c(pvVar16);
        operator_delete(pvVar16);
      }
    }
    pvVar16 = (void *)(**(code **)(**(long **)(param_2 + 0x40) + 0x260))
                                (*(long **)(param_2 + 0x40),puVar14 + -0xb);
    if (pvVar16 != (void *)0x0) {
      uVar13 = FUN_00832ca8();
      pvVar19 = (void *)puVar14[-1];
      puVar14[-1] = uVar13;
      if (pvVar19 != (void *)0x0) {
        FUN_0083267c(pvVar19);
        operator_delete(pvVar19);
      }
      FUN_00832ab8(pvVar16);
      operator_delete(pvVar16);
    }
    ppplVar21 = local_b0;
    if (((long ****)local_b0 != (long ****)0x0) &&
       (iVar7 = FUN_00d0f7a0(0xffffffff,local_b0), iVar7 == 1)) {
      FUN_00833e18(ppplVar21);
      operator_delete(ppplVar21);
    }
    pplVar2 = (long **)pplVar22[1];
    pplVar20 = pplVar22;
    if ((long **)pplVar22[1] == (long **)0x0) {
      do {
        pplVar22 = (long **)pplVar20[2];
        bVar6 = pplVar20 != (long **)*pplVar22;
        pplVar20 = pplVar22;
      } while (bVar6);
    }
    else {
      do {
        pplVar22 = pplVar2;
        pplVar2 = (long **)*pplVar22;
      } while ((long **)*pplVar22 != (long **)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
            );
}


// ===== 00c02978  FUN_00c02978 =====

void FUN_00c02978(long param_1)

{
  size_t __n;
  size_t sVar1;
  undefined8 *__s1;
  void **__s2;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  void *local_80;
  size_t local_78;
  ulong local_70;
  long *local_68;
  
  puVar2 = *(undefined8 **)(param_1 + 0x68);
  puVar3 = *(undefined8 **)(param_1 + 0x70);
  do {
    if (puVar2 == puVar3) {
      return;
    }
    uVar4 = *(undefined4 *)(puVar2 + 1);
    plVar12 = (long *)*puVar2;
    local_80 = (void *)0x0;
    local_78 = 0;
    local_70 = 0;
    FUN_005fa03c(&local_80,0x16,uVar4);
    FUN_00c0851c(&local_68,5,&local_80,0);
    lVar8 = FUN_00c0935c(param_1 + 8,&local_68);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 8))(local_68);
    }
    if ((long)local_70 < 0) {
      operator_delete(local_80);
      if (lVar8 == 0) goto LAB_00c02ad0;
LAB_00c02a34:
      lVar9 = FUN_00c0892c(lVar8,0x87);
      if (lVar9 != 0) {
        puVar10 = (undefined8 *)FUN_00c08274();
        (**(code **)(*plVar12 + 0x28))(&local_80,plVar12);
        uVar11 = local_70;
        bVar5 = *(byte *)((long)puVar10 + 0x17);
        __n = puVar10[1];
        if (-1 < (char)bVar5) {
          __n = (ulong)bVar5;
        }
        sVar1 = local_78;
        if (-1 < (long)local_70) {
          sVar1 = local_70 >> 0x38;
        }
        if (__n == sVar1) {
          __s1 = (undefined8 *)*puVar10;
          if (-1 < (char)bVar5) {
            __s1 = puVar10;
          }
          __s2 = (void **)local_80;
          if (-1 < (long)local_70) {
            __s2 = &local_80;
          }
          iVar7 = memcmp(__s1,__s2,__n);
          bVar6 = iVar7 != 0;
        }
        else {
          bVar6 = true;
        }
        if ((long)uVar11 < 0) {
          operator_delete(local_80);
        }
        if (!bVar6) {
          *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(param_1 + 0x58);
          FUN_00c02d58();
        }
      }
    }
    else {
      if (lVar8 != 0) goto LAB_00c02a34;
LAB_00c02ad0:
      uVar11 = FUN_004249b0();
      if ((uVar11 & 1) == 0) {
        FUN_00623bb0(&DAT_001f6220,"../../pc/legacy_stats_collector.cc",0x2d03,
                     "Stats report does not exist for ssrc ",uVar4);
      }
    }
    puVar2 = puVar2 + 2;
  } while( true );
}


// ===== 00c02b58  FUN_00c02b58 =====

/* WARNING: Removing unreachable block (ram,0x00c02cb0) */
/* WARNING: Removing unreachable block (ram,0x00c02ccc) */

void FUN_00c02b58(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long *local_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 local_34 [4];
  
  local_34[0] = 0xaa;
  FUN_007e0b10(local_34);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(**(long **)(param_1 + 0x40) + 0x228))(&local_70);
  puVar1 = puStack_68;
  puVar4 = local_70;
  puVar2 = local_70;
  while( true ) {
    local_70 = puVar2;
    if (puVar4 == puVar1) {
      if (puVar2 != (undefined1 *)0x0) {
        if (puVar2 != puStack_68) {
          puVar4 = puStack_68 + -0x28;
          do {
            puVar1 = puVar4 + -0x30;
            if (puVar4 == (undefined1 *)0x30) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            if ((char)puVar4[7] < '\0') {
              operator_delete(*(void **)(puVar4 + -0x10));
            }
            puVar4 = puVar4 + -0x58;
          } while (puVar1 != puVar2);
        }
        puStack_68 = puVar2;
        operator_delete(local_70);
      }
      FUN_007e0b18(local_34);
      return;
    }
    local_78 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    FUN_00c084b4(&local_78,0xb,*(undefined4 *)(puVar4 + 4));
    lVar3 = FUN_00c093d8(param_2,&local_78);
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(param_1 + 0x58);
    FUN_00c087e8(lVar3,0x62,puVar4 + 8);
    if (-1 < *(int *)(puVar4 + 4)) {
      FUN_00c08c64(lVar3,9);
    }
    FUN_00c087e8(lVar3,0x11,puVar4 + 0x20);
    if (3 < *(uint *)(puVar4 + 0x38)) break;
    FUN_00c08a34(lVar3,0x16,
                 &DAT_00258484 + *(int *)(&DAT_00258484 + (ulong)*(uint *)(puVar4 + 0x38) * 4));
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 8))();
    }
    puVar4 = puVar4 + 0x58;
    puVar2 = local_70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../api/data_channel_interface.h",0x91,"false",&DAT_0025847f,
               "Unknown DataChannel state: ");
}


// ===== 00c02d58  FUN_00c02d58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c02d58(undefined8 param_1,long *param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
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
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  long *local_40;
  undefined4 local_34;
  
  local_34 = 0xaaaaaaaa;
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2,&local_34);
  if ((uVar1 & 1) != 0) {
    FUN_00c08c64(param_3,2,local_34);
  }
  local_40 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_2 + 0x68))(&local_40,param_2);
  if (local_40 != (long *)0x0) {
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_b8 = _UNK_002583f0;
    local_c0 = _DAT_002583e8;
    uStack_a8 = _UNK_00258400;
    uStack_b0 = _DAT_002583f8;
    uStack_98 = _UNK_00258410;
    local_a0 = _DAT_00258408;
    uStack_88 = _UNK_00258420;
    uStack_90 = _DAT_00258418;
    uStack_68 = _UNK_00258440;
    local_70 = _DAT_00258438;
    uStack_58 = _UNK_00258450;
    uStack_60 = _DAT_00258448;
    uStack_78 = _UNK_00258430;
    local_80 = _DAT_00258428;
    (**(code **)(*local_40 + 0x20))(&local_c0,local_40,param_4 & 1);
    FUN_00c02e54(param_3,(ulong)&local_c0 | 8);
    FUN_0065f0c8((ulong)&local_c0 | 8);
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 8))();
    }
  }
  return;
}


// ===== 00c02e54  FUN_00c02e54 =====

void FUN_00c02e54(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x3c) == '\x01') {
    FUN_00c08c64(param_1,0x45,*(undefined4 *)(param_2 + 0x38));
  }
  if (*(char *)(param_2 + 0x44) == '\x01') {
    FUN_00c08c64(param_1,0x46,*(undefined4 *)(param_2 + 0x40));
  }
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_00c08c64(param_1,0x47,(int)*(double *)(param_2 + 8));
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_00c08c64(param_1,0x48,(int)*(double *)(param_2 + 0x18));
  }
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_00c08d84((float)*(double *)(param_2 + 0x48),param_1,0x74);
  }
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_00c08d84((float)*(double *)(param_2 + 0x58),param_1,0x75);
  }
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_00c08d84((float)*(double *)(param_2 + 0x28),param_1,1);
    return;
  }
  return;
}


// ===== 00c02f60  FUN_00c02f60 =====

void FUN_00c02f60(long param_1)

{
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}


// ===== 00c02f6c  FUN_00c02f6c =====

undefined8 * FUN_00c02f6c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__dest;
  undefined8 uVar7;
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar6 >> 4) + 1;
  if (uVar1 >> 0x3c != 0) {
    FUN_00c03060();
LAB_00c0305c:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 3;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7fffffffffffffef < uVar4) {
    uVar5 = 0xfffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3c != 0) goto LAB_00c0305c;
    pvVar2 = operator_new(uVar5 << 4);
    puVar6 = (undefined8 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    uVar7 = *param_2;
    puVar6[1] = param_2[1];
    *puVar6 = uVar7;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 2);
    param_1[2] = (long)((long)pvVar2 + uVar5 * 0x10);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar6 + 2;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c03060  FUN_00c03060 =====

void FUN_00c03060(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c03078  FUN_00c03078 =====

void FUN_00c03078(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c03090  FUN_00c03090 =====

undefined8 * FUN_00c03090(long *param_1,undefined8 *param_2)

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
    FUN_00c03078();
LAB_00c03180:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00c03180;
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


// ===== 00c03184  FUN_00c03184 =====

void FUN_00c03184(long *param_1)

{
  undefined8 *puVar1;
  long *local_8;
  
  if (*param_1 != 0) {
    if (*param_1 == 1) {
      if (0x1ffff < (ulong)param_1[1]) {
        puVar1 = (undefined8 *)param_1[3];
        if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if (*(char *)((long)puVar1 + 0x17) < '\0') {
          operator_delete((void *)*puVar1);
        }
      }
    }
    else {
      local_8 = param_1;
      FUN_0070fd4c(param_1,0x18,&local_8,FUN_00c03234);
    }
    FUN_0070fd04(param_1,*param_1,param_1[2],0x18,8,(ulong)param_1[1] >> 0x10 & 1);
  }
  return;
}


// ===== 00c03234  FUN_00c03234 =====

void FUN_00c03234(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  if (param_3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    return;
  }
  operator_delete((void *)*param_3);
  return;
}


// ===== 00c03278  FUN_00c03278 =====

void FUN_00c03278(undefined8 *param_1)

{
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar3 = (void *)param_1[10];
  param_1[10] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_0083267c(pvVar3);
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[9];
  param_1[9] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_0083267c(pvVar3);
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[6];
  if (pvVar3 != (void *)0x0) {
    pvVar4 = (void *)param_1[7];
    pvVar2 = pvVar3;
    if (pvVar3 != pvVar4) {
      do {
        pvVar4 = (void *)((long)pvVar4 + -0xc0);
        if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_00c720b0(pvVar4);
      } while (pvVar4 != pvVar3);
      pvVar2 = (void *)param_1[6];
    }
    param_1[7] = pvVar3;
    operator_delete(pvVar2);
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


// ===== 00c03384  FUN_00c03384 =====

long FUN_00c03384(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  void *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  void *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  lVar8 = param_1[1] - *param_1;
  uVar4 = (lVar8 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (uVar4 < 0x2e8ba2e8ba2e8bb) {
    local_80 = (void *)0x0;
    lVar6 = param_1[2] - *param_1 >> 3;
    uVar7 = lVar6 * 0x5d1745d1745d1746;
    if (uVar7 < uVar4 || uVar7 - uVar4 == 0) {
      uVar7 = uVar4;
    }
    if (0x1745d1745d1745c < (ulong)(lVar6 * 0x2e8ba2e8ba2e8ba3)) {
      uVar7 = 0x2e8ba2e8ba2e8ba;
    }
    if (uVar7 != 0) {
      if (0x2e8ba2e8ba2e8ba < uVar7) goto LAB_00c0355c;
      local_80 = operator_new(uVar7 * 0x58);
    }
    puVar1 = (undefined8 *)((long)local_80 + lVar8);
    local_68 = (void *)((long)local_80 + uVar7 * 0x58);
    local_78 = puVar1;
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_005478d8(&local_60,*param_2,param_2[1]);
    }
    else {
      uStack_58 = param_2[1];
      local_60 = *param_2;
      local_50 = param_2[2];
    }
    uVar3 = *param_3;
    uVar10 = param_3[2];
    uVar9 = param_3[1];
    uVar12 = param_3[4];
    uVar11 = param_3[3];
    uVar5 = param_3[5];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    puVar1[2] = local_50;
    puVar1[3] = uVar3;
    local_70 = puVar1 + 0xb;
    puVar1[1] = uStack_58;
    *puVar1 = local_60;
    puVar1[5] = uVar10;
    puVar1[4] = uVar9;
    puVar1[7] = uVar12;
    puVar1[6] = uVar11;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[8] = uVar5;
    FUN_00c03560(param_1,&local_80);
    puVar2 = local_78;
    lVar8 = param_1[1];
    puVar1 = local_70;
    while( true ) {
      if (puVar2 == puVar1) {
        if (local_80 != (void *)0x0) {
          local_70 = puVar1;
          operator_delete(local_80);
        }
        return lVar8;
      }
      puVar1 = puVar1 + -0xb;
      if (puVar1 == (undefined8 *)0x0) break;
      FUN_00c03278(puVar1);
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  FUN_00c036a0();
LAB_00c0355c:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00c03560  FUN_00c03560 =====

void FUN_00c03560(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar8 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar8 + (param_2[1] - (long)puVar2));
  puVar3 = puVar8;
  puVar4 = puVar1;
  if (puVar2 != puVar8) {
    do {
      if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar5 = puVar3[1];
      uVar6 = *puVar3;
      puVar4[2] = puVar3[2];
      puVar4[1] = uVar5;
      *puVar4 = uVar6;
      uVar5 = puVar3[4];
      uVar6 = puVar3[3];
      puVar3[2] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar4[5] = puVar3[5];
      puVar4[4] = uVar5;
      puVar4[3] = uVar6;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar4[8] = 0;
      puVar4[7] = 0;
      puVar4[6] = 0;
      puVar4[6] = puVar3[6];
      puVar4[7] = puVar3[7];
      puVar4[8] = puVar3[8];
      uVar6 = puVar3[9];
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar4[9] = uVar6;
      uVar6 = puVar3[10];
      puVar3[10] = 0;
      puVar3 = puVar3 + 0xb;
      puVar4[10] = uVar6;
      puVar4 = puVar4 + 0xb;
    } while (puVar3 != puVar2);
    do {
      if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_00c03278(puVar8);
      puVar8 = puVar8 + 0xb;
    } while (puVar8 != puVar2);
  }
  param_2[1] = puVar1;
  uVar6 = *param_1;
  uVar7 = param_1[2];
  param_1[1] = uVar6;
  uVar9 = param_2[1];
  uVar5 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = uVar9;
  param_1[2] = uVar5;
  param_2[2] = uVar6;
  param_2[3] = uVar7;
  *param_2 = uVar6;
  param_2[1] = uVar6;
  return;
}


// ===== 00c036a0  FUN_00c036a0 =====

void FUN_00c036a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c036b8  FUN_00c036b8 =====

undefined8 * FUN_00c036b8(long *param_1,undefined8 *param_2)

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
    FUN_00c037ac();
LAB_00c037a8:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00c037a8;
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


// ===== 00c037ac  FUN_00c037ac =====

void FUN_00c037ac(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c037c4  FUN_00c037c4 =====

void FUN_00c037c4(undefined8 *param_1)

{
  char cVar1;
  undefined8 *local_8;
  
  FUN_0088b14c(param_1 + 0xe);
  *param_1 = &PTR_FUN_00d49c68;
  local_8 = param_1 + 10;
  FUN_00c041d8(&local_8,param_1[0xb]);
  local_8 = param_1 + 7;
  FUN_00c041d8(&local_8,param_1[8]);
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    cVar1 = *(char *)((long)param_1 + 0x1f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x1f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[1]);
  }
  return;
}


// ===== 00c03860  FUN_00c03860 =====

void FUN_00c03860(undefined8 *param_1)

{
  char cVar1;
  undefined8 *local_8;
  
  FUN_0088b14c(param_1 + 0xe);
  *param_1 = &PTR_FUN_00d49c68;
  local_8 = param_1 + 10;
  FUN_00c041d8(&local_8,param_1[0xb]);
  local_8 = param_1 + 7;
  FUN_00c041d8(&local_8,param_1[8]);
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    cVar1 = *(char *)((long)param_1 + 0x1f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x1f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00c03908  FUN_00c03908 =====

uint FUN_00c03908(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined1 *puStack_f0;
  undefined1 *local_e8;
  undefined1 **local_e0;
  undefined1 *local_d8;
  undefined1 *puStack_d0;
  undefined1 **local_c8;
  undefined1 *puStack_c0;
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 **ppuStack_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 **ppuStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  
  ppuStack_48 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0088b4bc(&local_60);
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  ppuStack_88 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0088b640(&local_a0);
  plVar9 = (long *)FUN_00c0f23c(*(undefined8 *)(param_1 + 0x68));
  uVar7 = (**(code **)(*plVar9 + 0xd8))(plVar9,&local_60);
  plVar9 = (long *)FUN_00c0f274(*(undefined8 *)(param_1 + 0x68));
  uVar8 = (**(code **)(*plVar9 + 0xd8))(plVar9,&local_a0,1);
  puVar5 = local_50;
  puVar4 = puStack_58;
  puVar3 = local_60;
  puVar2 = puStack_98;
  puVar1 = local_a0;
  if ((uVar7 & uVar8 & 1) != 0) {
    local_60 = (undefined1 *)0x0;
    puStack_58 = (undefined1 *)0x0;
    local_50 = (undefined1 *)0x0;
    local_100 = puVar5;
    local_e8 = local_90;
    local_e0 = ppuStack_48;
    puStack_108 = puVar4;
    local_110 = puVar3;
    local_a0 = (undefined1 *)0x0;
    puStack_98 = (undefined1 *)0x0;
    puStack_f0 = puVar2;
    local_f8 = puVar1;
    local_90 = (undefined1 *)0x0;
    local_d8 = local_40;
    puStack_d0 = puStack_38;
    ppuVar6 = &local_d8;
    if (puStack_38 != (undefined1 *)0x0) {
      ppuStack_48 = &local_40;
      *(undefined1 ***)(local_40 + 0x10) = &local_d8;
      local_40 = (undefined1 *)0x0;
      puStack_38 = (undefined1 *)0x0;
      ppuVar6 = local_e0;
    }
    local_e0 = ppuVar6;
    local_b8 = local_78;
    local_c8 = ppuStack_88;
    puStack_c0 = local_80;
    ppuVar6 = &puStack_c0;
    if (local_78 != (undefined1 *)0x0) {
      *(undefined1 ***)(local_80 + 0x10) = &puStack_c0;
      ppuStack_88 = &local_80;
      local_80 = (undefined1 *)0x0;
      local_78 = (undefined1 *)0x0;
      ppuVar6 = local_c8;
    }
    local_c8 = ppuVar6;
    local_b0 = local_70._0_4_;
    FUN_00c0426c(param_1 + 0x70,&local_110);
    FUN_0088b14c(&local_110);
  }
  FUN_0088b660(&local_a0);
  FUN_0088b4d8(&local_60);
  return uVar7 & uVar8 & 1;
}


// ===== 00c03a74  FUN_00c03a74 =====

void FUN_00c03a74(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 uVar7;
  uint uVar8;
  long *plVar9;
  double dVar10;
  double dVar11;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  long *local_48;
  
  local_48 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00c0866c(&local_48,param_1 + 0x20,*(undefined4 *)PTR_DAT_00d52638);
  plVar2 = *(long **)(param_1 + 0x90);
  for (plVar9 = *(long **)(param_1 + 0x88); plVar9 != plVar2; plVar9 = plVar9 + 0x48) {
    if ((undefined4 *)plVar9[0x17] == (undefined4 *)plVar9[0x18]) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)plVar9[0x17];
    }
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00c057e8(&local_90,uVar7,1,param_1 + 0x50);
    lVar4 = FUN_00c01494(param_2,1,uVar7,&local_90,&local_48,1);
    if (lVar4 != 0) {
      cVar3 = *(char *)(param_2 + 0x60);
      FUN_00c087e8(lVar4,0x34,plVar9 + 0x13);
      dVar10 = (double)plVar9[0x33];
      dVar11 = (double)plVar9[0x35];
      FUN_00c08d84((int)plVar9[0x3c],lVar4,0x4a);
      FUN_00c08d84((int)plVar9[0x3d],lVar4,0x7f);
      FUN_00c08d84(*(undefined4 *)((long)plVar9 + 0x1ec),lVar4,0x80);
      FUN_00c08d84(*(undefined4 *)((long)plVar9 + 0x1e4),lVar4,0x82);
      FUN_00c08d84((int)plVar9[0x3e],lVar4,0x24);
      FUN_00c08d84(*(undefined4 *)((long)plVar9 + 500),lVar4,0x6d);
      FUN_00c08d84((float)dVar10,lVar4,0x17);
      FUN_00c08d84((float)dVar11,lVar4,0x18);
      FUN_00c08c64(lVar4,0x39,(int)plVar9[0x32]);
      FUN_00c08c64(lVar4,0x3b,*(undefined4 *)((long)plVar9 + 0x20c));
      FUN_00c08c64(lVar4,0x3c,*(undefined4 *)((long)plVar9 + 0x1fc));
      FUN_00c08c64(lVar4,0x3d,(int)plVar9[0x3f]);
      FUN_00c08c64(lVar4,0x3e,*(undefined4 *)((long)plVar9 + 0x214));
      FUN_00c08c64(lVar4,0x3f,(int)plVar9[0x40]);
      FUN_00c08c64(lVar4,0x40,*(undefined4 *)((long)plVar9 + 0x204));
      FUN_00c08c64(lVar4,0x42,(int)plVar9[0x42]);
      FUN_00c08c64(lVar4,0x60,(int)plVar9[0x31]);
      FUN_00c08c64(lVar4,0x61,*(undefined4 *)((long)plVar9 + 0x184));
      FUN_00c08c64(lVar4,0xe,(int)plVar9[5]);
      FUN_00c08c64(lVar4,0xf,(int)plVar9[2]);
      FUN_00c08c64(lVar4,0x6e,*(undefined4 *)((long)plVar9 + 0x18c));
      if (-1 < *(int *)((long)plVar9 + 0x194)) {
        FUN_00c08c64(lVar4,3);
      }
      if ((int)plVar9[0x41] != 0) {
        FUN_00c08c64(lVar4,0x41);
      }
      lVar1 = 0;
      if (cVar3 == '\0') {
        lVar1 = plVar9[1];
      }
      FUN_00c08b3c(lVar4,4,lVar1 + *plVar9);
      if (-1 < plVar9[0x43]) {
        FUN_00c08b3c(lVar4,0x2c);
      }
      FUN_00c08a34(lVar4,0xd,"audio");
    }
    if ((plVar9[0x1a] != plVar9[0x1b]) &&
       (lVar4 = FUN_00c01494(param_2,0,uVar7,&local_90,&local_48,1), lVar4 != 0)) {
      if (plVar9[0x1b] == plVar9[0x1a]) goto LAB_00c04114;
      *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(plVar9[0x1a] + 8);
    }
    if ((long)local_80 < 0) {
      operator_delete(local_90);
    }
  }
  plVar9 = *(long **)(param_1 + 0x70);
  plVar2 = *(long **)(param_1 + 0x78);
  if (plVar9 != plVar2) {
    do {
      if ((uint *)plVar9[0xf] == (uint *)plVar9[0x10]) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(uint *)plVar9[0xf];
      }
      plVar6 = *(long **)(param_1 + 0x40);
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        while (*(uint *)(plVar6 + 4) <= uVar8) {
          if (uVar8 == *(uint *)(plVar6 + 4)) {
            if (plVar6 == (long *)(param_1 + 0x40)) goto LAB_00c03e18;
            if (*(char *)((long)plVar6 + 0x3f) < '\0') {
              FUN_005478d8(&local_90,plVar6[5],plVar6[6]);
            }
            else {
              local_80 = (undefined1 *)plVar6[7];
              puStack_88 = (undefined1 *)plVar6[6];
              local_90 = (undefined1 *)plVar6[5];
            }
            goto LAB_00c03e20;
          }
          plVar6 = (long *)plVar6[1];
          if (plVar6 == (long *)0x0) goto LAB_00c03e18;
        }
      }
LAB_00c03e18:
      local_80 = (undefined1 *)0xaaaaaaaaaaaaaa;
      local_90 = (undefined1 *)0xaaaaaaaaaaaaaa00;
LAB_00c03e20:
      lVar4 = FUN_00c01494(param_2,1,uVar8,&local_90,&local_48,0);
      if (lVar4 != 0) {
        cVar3 = *(char *)(param_2 + 0x60);
        FUN_00c087e8(lVar4,0x34,plVar9 + 0xb);
        lVar1 = 0;
        if (cVar3 == '\0') {
          lVar1 = plVar9[1];
        }
        FUN_00c08b3c(lVar4,5,lVar1 + *plVar9);
        if (-1 < plVar9[10]) {
          FUN_00c08b3c(lVar4,0x7e);
        }
        FUN_00c02e54(lVar4,plVar9 + 0x24);
        dVar10 = (double)plVar9[0x1c];
        FUN_00c08d84((float)(double)plVar9[0x1b],lVar4,0x17);
        FUN_00c08d84((float)dVar10,lVar4,0x18);
        if (-1 < *(int *)((long)plVar9 + 0xd4)) {
          FUN_00c08c64(lVar4,2);
        }
        if (-1 < (int)plVar9[0x1a]) {
          FUN_00c08c64(lVar4,0x61);
        }
        if (-1 < (int)plVar9[9]) {
          FUN_00c08c64(lVar4,0xe);
        }
        if (-1 < (int)plVar9[3]) {
          FUN_00c08c64(lVar4,0x10);
        }
        FUN_00c08a34(lVar4,0xd,"audio");
        if (*(char *)((long)plVar9 + 0xec) == '\x01') {
          FUN_00c08c64(lVar4,0x76,(int)plVar9[0x1d]);
        }
        if (*(char *)((long)plVar9 + 0xf4) == '\x01') {
          FUN_00c08c64(lVar4,0x77,(int)plVar9[0x1e]);
        }
        if (*(char *)((long)plVar9 + 0xfc) == '\x01') {
          FUN_00c08c64(lVar4,0x78,(int)plVar9[0x1f]);
        }
        if (*(char *)((long)plVar9 + 0x104) == '\x01') {
          FUN_00c08c64(lVar4,0x79,(int)plVar9[0x20]);
        }
        if (*(char *)((long)plVar9 + 0x10c) == '\x01') {
          FUN_00c08c64(lVar4,0x7a,(int)plVar9[0x21]);
        }
        if (*(char *)((long)plVar9 + 0x114) == '\x01') {
          FUN_00c08c64(lVar4,0x7b,(int)plVar9[0x22]);
        }
        if (*(char *)((long)plVar9 + 0x11c) == '\x01') {
          FUN_00c08d84((int)plVar9[0x23],lVar4,0x7c);
        }
      }
      if ((plVar9[0x12] != plVar9[0x13]) &&
         (lVar4 = FUN_00c01494(param_2,0,uVar8,&local_90,&local_48,0), lVar4 != 0)) {
        if (plVar9[0x13] == plVar9[0x12]) {
LAB_00c04114:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
        *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(plVar9[0x12] + 8);
      }
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      plVar9 = plVar9 + 0x32;
    } while (plVar9 != plVar2);
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 8))();
  }
  if ((*(int *)(param_1 + 0xd0) == -2) || (0 < *(int *)(param_1 + 0xd0))) {
    local_48 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    (**(code **)(*(long *)(*(long *)(param_2 + 0x40) + 8) + 0x10))(&local_90);
    FUN_00c08418(&local_48,0,&local_90);
    if ((long)local_80 < 0) {
      operator_delete(local_90);
    }
    uVar5 = FUN_00c092c8(param_2 + 8,&local_48);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 8))(local_48);
    }
    FUN_00c08c64(uVar5,0x8b,*(undefined4 *)(param_1 + 0xd0));
  }
  return;
}


// ===== 00c04128  FUN_00c04128 =====

bool FUN_00c04128(long param_1)

{
  return *(long *)(param_1 + 0x88) != *(long *)(param_1 + 0x90);
}


// ===== 00c0413c  FUN_00c0413c =====

void FUN_00c0413c(undefined8 *param_1)

{
  char cVar1;
  undefined8 *local_8;
  
  *param_1 = &PTR_FUN_00d49c68;
  local_8 = param_1 + 10;
  FUN_00c041d8(&local_8,param_1[0xb]);
  local_8 = param_1 + 7;
  FUN_00c041d8(&local_8,param_1[8]);
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    cVar1 = *(char *)((long)param_1 + 0x1f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x1f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[1]);
  }
  return;
}


// ===== 00c041d0  FUN_00c041d0 =====

void FUN_00c041d0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc041d8);
  (*pcVar1)();
}


// ===== 00c041d8  FUN_00c041d8 =====

void FUN_00c041d8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00c041d8(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar1 = (undefined8 *)param_2[1];
      if (*(char *)((long)param_2 + 0x3f) < '\0') {
        operator_delete((void *)param_2[5]);
      }
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00c0426c  FUN_00c0426c =====

long * FUN_00c0426c(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1 == param_2) goto LAB_00c043c4;
  FUN_00c043e0(param_1,*param_2,param_2[1],(param_2[1] - *param_2 >> 4) * -0x70a3d70a3d70a3d7);
  FUN_00c04e7c(param_1 + 3,param_2[3],param_2[4],
               (param_2[4] - param_2[3] >> 6) * -0x71c71c71c71c71c7);
  if (param_1[8] == 0) {
    lVar2 = FUN_00c05714(param_1 + 6,param_2[7],param_1 + 6);
    plVar3 = param_1 + 7;
    *plVar3 = lVar2;
    if (lVar2 != 0) {
      *(long **)(lVar2 + 0x10) = plVar3;
      plVar1 = (long *)*plVar3;
      goto joined_r0x00c0432c;
    }
  }
  else {
    plVar1 = (long *)FUN_00c05610(param_1 + 6,param_1[7],param_2[7],0,param_1 + 6);
    param_1[7] = (long)plVar1;
joined_r0x00c0432c:
    if (plVar1 == (long *)0x0) {
      plVar3 = param_1 + 7;
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  param_1[6] = (long)plVar3;
  param_1[8] = param_2[8];
  if (param_1[0xb] == 0) {
    lVar2 = FUN_00c05714(param_1 + 9,param_2[10],param_1 + 9);
    plVar3 = param_1 + 10;
    *plVar3 = lVar2;
    if (lVar2 != 0) {
      *(long **)(lVar2 + 0x10) = plVar3;
      plVar1 = (long *)*plVar3;
      goto joined_r0x00c043a0;
    }
  }
  else {
    plVar1 = (long *)FUN_00c05610(param_1 + 9,param_1[10],param_2[10],0,param_1 + 9);
    param_1[10] = (long)plVar1;
joined_r0x00c043a0:
    if (plVar1 == (long *)0x0) {
      plVar3 = param_1 + 10;
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  param_1[9] = (long)plVar3;
  param_1[0xb] = param_2[0xb];
LAB_00c043c4:
  *(int *)(param_1 + 0xc) = (int)param_2[0xc];
  return param_1;
}


// ===== 00c043e0  FUN_00c043e0 =====

undefined8 * FUN_00c043e0(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  undefined4 uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  
  lVar6 = param_1[2];
  puVar8 = (undefined8 *)*param_1;
  if (param_4 <= (ulong)((lVar6 - (long)puVar8 >> 4) * -0x70a3d70a3d70a3d7)) {
    puVar9 = (undefined8 *)param_1[1];
    if ((ulong)(((long)puVar9 - (long)puVar8 >> 4) * -0x70a3d70a3d70a3d7) < param_4) {
      puVar4 = param_1;
      lVar6 = param_2;
      puVar3 = puVar9;
      if (puVar9 != puVar8) {
        lVar6 = param_2 + ((long)puVar9 - (long)puVar8);
        do {
          puVar4 = (undefined8 *)FUN_00c046f4(puVar8,param_2);
          uVar11 = *(undefined8 *)(param_2 + 0xf0);
          uVar10 = *(undefined8 *)(param_2 + 0x108);
          uVar5 = *(undefined8 *)(param_2 + 0x100);
          uVar15 = *(undefined8 *)(param_2 + 0xd8);
          uVar14 = *(undefined8 *)(param_2 + 0xd0);
          uVar13 = *(undefined8 *)(param_2 + 0xe8);
          uVar12 = *(undefined8 *)(param_2 + 0xe0);
          puVar8[0x1f] = *(undefined8 *)(param_2 + 0xf8);
          puVar8[0x1e] = uVar11;
          puVar8[0x21] = uVar10;
          puVar8[0x20] = uVar5;
          puVar8[0x1b] = uVar15;
          puVar8[0x1a] = uVar14;
          puVar8[0x1d] = uVar13;
          puVar8[0x1c] = uVar12;
          uVar11 = *(undefined8 *)(param_2 + 0x130);
          uVar10 = *(undefined8 *)(param_2 + 0x148);
          uVar5 = *(undefined8 *)(param_2 + 0x140);
          uVar15 = *(undefined8 *)(param_2 + 0x118);
          uVar14 = *(undefined8 *)(param_2 + 0x110);
          uVar13 = *(undefined8 *)(param_2 + 0x128);
          uVar12 = *(undefined8 *)(param_2 + 0x120);
          puVar8[0x27] = *(undefined8 *)(param_2 + 0x138);
          puVar8[0x26] = uVar11;
          puVar8[0x29] = uVar10;
          puVar8[0x28] = uVar5;
          puVar8[0x23] = uVar15;
          puVar8[0x22] = uVar14;
          puVar8[0x25] = uVar13;
          puVar8[0x24] = uVar12;
          puVar9 = (undefined8 *)(param_2 + 0x178);
          uVar11 = *(undefined8 *)(param_2 + 0x170);
          uVar10 = *(undefined8 *)(param_2 + 0x188);
          uVar5 = *(undefined8 *)(param_2 + 0x180);
          uVar15 = *(undefined8 *)(param_2 + 0x158);
          uVar14 = *(undefined8 *)(param_2 + 0x150);
          uVar13 = *(undefined8 *)(param_2 + 0x168);
          uVar12 = *(undefined8 *)(param_2 + 0x160);
          param_2 = param_2 + 400;
          puVar8[0x2f] = *puVar9;
          puVar8[0x2e] = uVar11;
          puVar8[0x31] = uVar10;
          puVar8[0x30] = uVar5;
          puVar8[0x2b] = uVar15;
          puVar8[0x2a] = uVar14;
          puVar8[0x2d] = uVar13;
          puVar8[0x2c] = uVar12;
          puVar8 = puVar8 + 0x32;
        } while (param_2 != lVar6);
        puVar9 = (undefined8 *)param_1[1];
        puVar3 = puVar9;
      }
      while( true ) {
        if (lVar6 == param_3) {
          param_1[1] = puVar9;
          return puVar4;
        }
        if (puVar3 == (undefined8 *)0x0) break;
        FUN_00b63298(puVar3,lVar6);
        uVar10 = *(undefined8 *)(lVar6 + 0xd8);
        uVar5 = *(undefined8 *)(lVar6 + 0xd0);
        puVar3[0x1c] = *(undefined8 *)(lVar6 + 0xe0);
        puVar3[0x1b] = uVar10;
        puVar3[0x1a] = uVar5;
        FUN_00666a7c(puVar3 + 0x1d,lVar6 + 0xe8);
        puVar4 = (undefined8 *)FUN_0065f0a0(puVar3 + 0x24,lVar6 + 0x120);
        puVar9 = puVar9 + 0x32;
        lVar6 = lVar6 + 400;
        puVar3 = puVar3 + 0x32;
      }
LAB_00c046c8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar4 = param_1;
    if (param_2 != param_3) {
      do {
        puVar4 = (undefined8 *)FUN_00c046f4(puVar8,param_2);
        uVar11 = *(undefined8 *)(param_2 + 0xf0);
        uVar10 = *(undefined8 *)(param_2 + 0x108);
        uVar5 = *(undefined8 *)(param_2 + 0x100);
        uVar15 = *(undefined8 *)(param_2 + 0xd8);
        uVar14 = *(undefined8 *)(param_2 + 0xd0);
        uVar13 = *(undefined8 *)(param_2 + 0xe8);
        uVar12 = *(undefined8 *)(param_2 + 0xe0);
        puVar8[0x1f] = *(undefined8 *)(param_2 + 0xf8);
        puVar8[0x1e] = uVar11;
        puVar8[0x21] = uVar10;
        puVar8[0x20] = uVar5;
        puVar8[0x1b] = uVar15;
        puVar8[0x1a] = uVar14;
        puVar8[0x1d] = uVar13;
        puVar8[0x1c] = uVar12;
        uVar11 = *(undefined8 *)(param_2 + 0x130);
        uVar10 = *(undefined8 *)(param_2 + 0x148);
        uVar5 = *(undefined8 *)(param_2 + 0x140);
        uVar15 = *(undefined8 *)(param_2 + 0x118);
        uVar14 = *(undefined8 *)(param_2 + 0x110);
        uVar13 = *(undefined8 *)(param_2 + 0x128);
        uVar12 = *(undefined8 *)(param_2 + 0x120);
        puVar8[0x27] = *(undefined8 *)(param_2 + 0x138);
        puVar8[0x26] = uVar11;
        puVar8[0x29] = uVar10;
        puVar8[0x28] = uVar5;
        puVar8[0x23] = uVar15;
        puVar8[0x22] = uVar14;
        puVar8[0x25] = uVar13;
        puVar8[0x24] = uVar12;
        puVar9 = (undefined8 *)(param_2 + 0x178);
        uVar11 = *(undefined8 *)(param_2 + 0x170);
        uVar10 = *(undefined8 *)(param_2 + 0x188);
        uVar5 = *(undefined8 *)(param_2 + 0x180);
        uVar15 = *(undefined8 *)(param_2 + 0x158);
        uVar14 = *(undefined8 *)(param_2 + 0x150);
        uVar13 = *(undefined8 *)(param_2 + 0x168);
        uVar12 = *(undefined8 *)(param_2 + 0x160);
        param_2 = param_2 + 400;
        puVar8[0x2f] = *puVar9;
        puVar8[0x2e] = uVar11;
        puVar8[0x31] = uVar10;
        puVar8[0x30] = uVar5;
        puVar8[0x2b] = uVar15;
        puVar8[0x2a] = uVar14;
        puVar8[0x2d] = uVar13;
        puVar8[0x2c] = uVar12;
        puVar8 = puVar8 + 0x32;
      } while (param_2 != param_3);
      puVar9 = (undefined8 *)param_1[1];
    }
    while (puVar8 != puVar9) {
      puVar9 = puVar9 + -0x32;
      if (puVar9 == (undefined8 *)0x0) goto LAB_00c046dc;
      puVar4 = (undefined8 *)FUN_0088ac70(puVar9);
    }
LAB_00c046a8:
    param_1[1] = puVar8;
    return puVar4;
  }
  if (puVar8 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)param_1[1];
    puVar4 = puVar8;
    if (puVar8 != puVar9) {
      do {
        puVar9 = puVar9 + -0x32;
        if (puVar9 == (undefined8 *)0x0) {
LAB_00c046dc:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_0088ac70(puVar9);
      } while (puVar9 != puVar8);
      puVar4 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar8;
    operator_delete(puVar4);
    lVar6 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 < 0xa3d70a3d70a3d8) {
    uVar7 = (lVar6 >> 4) * 0x1eb851eb851eb852;
    if (uVar7 < param_4 || uVar7 - param_4 == 0) {
      uVar7 = param_4;
    }
    if (0x51eb851eb851ea < (ulong)((lVar6 >> 4) * -0x70a3d70a3d70a3d7)) {
      uVar7 = 0xa3d70a3d70a3d7;
    }
    if (uVar7 < 0xa3d70a3d70a3d8) {
      puVar4 = (undefined8 *)operator_new(uVar7 * 400);
      *param_1 = puVar4;
      param_1[1] = puVar4;
      param_1[2] = puVar4 + uVar7 * 0x32;
      puVar8 = puVar4;
      if (param_2 != param_3) {
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_00c046c8;
          FUN_00b63298(puVar8,param_2);
          uVar10 = *(undefined8 *)(param_2 + 0xd0);
          uVar5 = *(undefined8 *)(param_2 + 0xe0);
          puVar8[0x1b] = *(undefined8 *)(param_2 + 0xd8);
          puVar8[0x1a] = uVar10;
          puVar8[0x1c] = uVar5;
          FUN_00666a7c(puVar8 + 0x1d,param_2 + 0xe8);
          puVar4 = (undefined8 *)FUN_0065f0a0(puVar8 + 0x24,param_2 + 0x120);
          param_2 = param_2 + 400;
          puVar8 = puVar8 + 0x32;
        } while (param_2 != param_3);
      }
      goto LAB_00c046a8;
    }
  }
  auVar16 = FUN_00b63558();
  puVar9 = auVar16._8_8_;
  puVar8 = auVar16._0_8_;
  uVar11 = puVar9[4];
  uVar10 = puVar9[7];
  uVar5 = puVar9[6];
  uVar13 = puVar9[1];
  uVar12 = *puVar9;
  uVar15 = puVar9[3];
  uVar14 = puVar9[2];
  puVar8[5] = puVar9[5];
  puVar8[4] = uVar11;
  puVar8[7] = uVar10;
  puVar8[6] = uVar5;
  puVar8[1] = uVar13;
  *puVar8 = uVar12;
  puVar8[3] = uVar15;
  puVar8[2] = uVar14;
  uVar10 = puVar9[9];
  uVar5 = puVar9[8];
  puVar8[10] = puVar9[10];
  puVar8[9] = uVar10;
  puVar8[8] = uVar5;
  if (puVar8 == puVar9) {
    uVar1 = *(undefined4 *)(puVar9 + 0xe);
    *(undefined1 *)((long)puVar8 + 0x74) = *(undefined1 *)((long)puVar9 + 0x74);
    *(undefined4 *)(puVar8 + 0xe) = uVar1;
  }
  else {
    bVar2 = *(byte *)((long)puVar9 + 0x6f);
    if (*(char *)((long)puVar8 + 0x6f) < '\0') {
      uVar7 = puVar9[0xc];
      puVar4 = (undefined8 *)puVar9[0xb];
      if (-1 < (char)bVar2) {
        uVar7 = (ulong)bVar2;
        puVar4 = puVar9 + 0xb;
      }
      FUN_00547f08(puVar8 + 0xb,puVar4,uVar7);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(puVar8 + 0xb,puVar9[0xb],puVar9[0xc]);
    }
    else {
      uVar10 = puVar9[0xc];
      uVar5 = puVar9[0xb];
      puVar8[0xd] = puVar9[0xd];
      puVar8[0xc] = uVar10;
      puVar8[0xb] = uVar5;
    }
    uVar1 = *(undefined4 *)(puVar9 + 0xe);
    *(undefined1 *)((long)puVar8 + 0x74) = *(undefined1 *)((long)puVar9 + 0x74);
    *(undefined4 *)(puVar8 + 0xe) = uVar1;
    FUN_00c04804(puVar8 + 0xf,puVar9[0xf],puVar9[0x10],(long)(puVar9[0x10] - puVar9[0xf]) >> 4);
    FUN_00c04a2c(puVar8 + 0x12,puVar9[0x12],puVar9[0x13],(long)(puVar9[0x13] - puVar9[0x12]) >> 4);
    FUN_00c04c54(puVar8 + 0x15,puVar9[0x15],puVar9[0x16],(long)(puVar9[0x16] - puVar9[0x15]) >> 6);
  }
  uVar5 = puVar9[0x18];
  puVar8[0x19] = puVar9[0x19];
  puVar8[0x18] = uVar5;
  return puVar8;
}


// ===== 00c046f4  FUN_00c046f4 =====

undefined8 * FUN_00c046f4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar7 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  uVar9 = param_2[1];
  uVar8 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[1] = uVar9;
  *param_1 = uVar8;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar6 = param_2[9];
  uVar5 = param_2[8];
  param_1[10] = param_2[10];
  param_1[9] = uVar6;
  param_1[8] = uVar5;
  if (param_1 == param_2) {
    uVar2 = *(undefined4 *)(param_2 + 0xe);
    *(undefined1 *)((long)param_1 + 0x74) = *(undefined1 *)((long)param_2 + 0x74);
    *(undefined4 *)(param_1 + 0xe) = uVar2;
  }
  else {
    bVar3 = *(byte *)((long)param_2 + 0x6f);
    if (*(char *)((long)param_1 + 0x6f) < '\0') {
      uVar1 = param_2[0xc];
      puVar4 = (undefined8 *)param_2[0xb];
      if (-1 < (char)bVar3) {
        uVar1 = (ulong)bVar3;
        puVar4 = param_2 + 0xb;
      }
      FUN_00547f08(param_1 + 0xb,puVar4,uVar1);
    }
    else if ((char)bVar3 < '\0') {
      FUN_00547fc0(param_1 + 0xb,param_2[0xb],param_2[0xc]);
    }
    else {
      uVar6 = param_2[0xc];
      uVar5 = param_2[0xb];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar6;
      param_1[0xb] = uVar5;
    }
    uVar2 = *(undefined4 *)(param_2 + 0xe);
    *(undefined1 *)((long)param_1 + 0x74) = *(undefined1 *)((long)param_2 + 0x74);
    *(undefined4 *)(param_1 + 0xe) = uVar2;
    FUN_00c04804(param_1 + 0xf,param_2[0xf],param_2[0x10],(long)(param_2[0x10] - param_2[0xf]) >> 4)
    ;
    FUN_00c04a2c(param_1 + 0x12,param_2[0x12],param_2[0x13],
                 (long)(param_2[0x13] - param_2[0x12]) >> 4);
    FUN_00c04c54(param_1 + 0x15,param_2[0x15],param_2[0x16],
                 (long)(param_2[0x16] - param_2[0x15]) >> 6);
  }
  uVar5 = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar5;
  return param_1;
}


// ===== 00c04804  FUN_00c04804 =====

void FUN_00c04804(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  size_t sVar11;
  void *pvVar12;
  undefined1 auVar13 [16];
  
  uVar5 = param_1[2];
  pvVar12 = (void *)*param_1;
  if ((ulong)((long)(uVar5 - (long)pvVar12) >> 4) < param_4) {
    lVar3 = param_3;
    uVar9 = param_4;
    if (pvVar12 == (void *)0x0) {
LAB_00c049a8:
      if (param_4 >> 0x3c == 0) {
        uVar10 = (long)uVar5 >> 3;
        if ((ulong)((long)uVar5 >> 3) <= param_4) {
          uVar10 = param_4;
        }
        if (0x7fffffffffffffef < uVar5) {
          uVar10 = 0xfffffffffffffff;
        }
        if (uVar10 >> 0x3c == 0) {
          pvVar12 = operator_new(uVar10 * 0x10);
          *param_1 = pvVar12;
          param_1[1] = pvVar12;
          param_1[2] = (void *)((long)pvVar12 + uVar10 * 0x10);
          memcpy(pvVar12,param_2,param_3 - (long)param_2);
          lVar3 = (long)pvVar12 + (param_3 - (long)param_2);
          goto LAB_00c04a04;
        }
      }
      auVar13 = FUN_00b63280();
      pvVar12 = auVar13._8_8_;
      puVar1 = auVar13._0_8_;
      uVar5 = puVar1[2];
      pvVar6 = (void *)*puVar1;
      if ((ulong)((long)(uVar5 - (long)pvVar6) >> 4) < uVar9) {
        if (pvVar6 == (void *)0x0) {
LAB_00c04bd0:
          if (uVar9 >> 0x3c == 0) {
            uVar10 = (long)uVar5 >> 3;
            if ((ulong)((long)uVar5 >> 3) <= uVar9) {
              uVar10 = uVar9;
            }
            if (0x7fffffffffffffef < uVar5) {
              uVar10 = 0xfffffffffffffff;
            }
            if (uVar10 >> 0x3c == 0) {
              pvVar6 = operator_new(uVar10 * 0x10);
              *puVar1 = pvVar6;
              puVar1[1] = pvVar6;
              puVar1[2] = (void *)((long)pvVar6 + uVar10 * 0x10);
              memcpy(pvVar6,pvVar12,lVar3 - (long)pvVar12);
              lVar3 = (long)pvVar6 + (lVar3 - (long)pvVar12);
              goto LAB_00c04c2c;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_00b633e4();
        }
        pvVar7 = (void *)puVar1[1];
        uVar10 = (ulong)((long)pvVar7 + (-0x10 - ((long)pvVar7 << 0x3c))) >> 4;
        uVar5 = (ulong)(((long)pvVar6 - (long)pvVar7 << 0x3c) - ((long)pvVar6 - (long)pvVar7)) >> 4;
        if (uVar10 <= uVar5) {
          uVar5 = uVar10;
        }
        if ((1 < uVar5) && ((((int)pvVar6 - (int)pvVar7 | -(int)pvVar7) & 0xfU) == 0)) {
          uVar5 = uVar5 & 0xffffffffffffffe;
          pvVar7 = (void *)((long)pvVar7 + uVar5 * -0x10);
          do {
            uVar5 = uVar5 - 2;
          } while (uVar5 != 0);
        }
        do {
          if (pvVar7 == pvVar6) {
            puVar1[1] = pvVar6;
            operator_delete(pvVar6);
            uVar5 = 0;
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1[2] = 0;
            goto LAB_00c04bd0;
          }
          pvVar7 = (void *)((long)pvVar7 + -0x10);
        } while (pvVar7 != (void *)0x0);
      }
      else {
        sVar2 = puVar1[1] - (long)pvVar6;
        if ((ulong)((long)sVar2 >> 4) < uVar9) {
          memmove(pvVar6,pvVar12,sVar2);
          pvVar6 = (void *)puVar1[1];
          sVar11 = lVar3 - (long)((long)pvVar12 + sVar2);
          memmove(pvVar6,(void *)((long)pvVar12 + sVar2),sVar11);
          lVar3 = (long)pvVar6 + sVar11;
LAB_00c04c2c:
          puVar1[1] = lVar3;
          return;
        }
        memmove(pvVar6,pvVar12,lVar3 - (long)pvVar12);
        lVar4 = puVar1[1];
        lVar8 = (long)pvVar6 + (lVar3 - (lVar4 + (long)pvVar12));
        uVar5 = (ulong)((lVar8 << 0x3c) - lVar8) >> 4;
        uVar9 = (lVar4 - (lVar4 << 0x3c)) - 0x10U >> 4;
        if (uVar9 <= uVar5) {
          uVar5 = uVar9;
        }
        lVar8 = (long)pvVar6 + (lVar3 - (long)pvVar12);
        if ((1 < uVar5) &&
           (((((int)pvVar6 + (int)lVar3) - ((int)lVar4 + auVar13._8_4_) | -(int)lVar4) & 0xfU) == 0)
           ) {
          uVar5 = uVar5 & 0xffffffffffffffe;
          lVar4 = lVar4 + uVar5 * -0x10;
          do {
            uVar5 = uVar5 - 2;
          } while (uVar5 != 0);
        }
        do {
          if (lVar4 == lVar8) {
            puVar1[1] = lVar8;
            return;
          }
          lVar4 = lVar4 + -0x10;
        } while (lVar4 != 0);
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    pvVar6 = (void *)param_1[1];
    uVar10 = (ulong)((long)pvVar6 + (-0x10 - ((long)pvVar6 << 0x3c))) >> 4;
    uVar5 = (ulong)(((long)pvVar12 - (long)pvVar6 << 0x3c) - ((long)pvVar12 - (long)pvVar6)) >> 4;
    if (uVar10 <= uVar5) {
      uVar5 = uVar10;
    }
    if ((1 < uVar5) && ((((int)pvVar12 - (int)pvVar6 | -(int)pvVar6) & 0xfU) == 0)) {
      uVar5 = uVar5 & 0xffffffffffffffe;
      pvVar6 = (void *)((long)pvVar6 + uVar5 * -0x10);
      do {
        uVar5 = uVar5 - 2;
      } while (uVar5 != 0);
    }
    do {
      if (pvVar6 == pvVar12) {
        param_1[1] = pvVar12;
        operator_delete(pvVar12);
        uVar5 = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        goto LAB_00c049a8;
      }
      pvVar6 = (void *)((long)pvVar6 + -0x10);
    } while (pvVar6 != (void *)0x0);
  }
  else {
    sVar2 = param_1[1] - (long)pvVar12;
    if ((ulong)((long)sVar2 >> 4) < param_4) {
      memmove(pvVar12,param_2,sVar2);
      pvVar12 = (void *)param_1[1];
      sVar11 = param_3 - (long)((long)param_2 + sVar2);
      memmove(pvVar12,(void *)((long)param_2 + sVar2),sVar11);
      lVar3 = (long)pvVar12 + sVar11;
LAB_00c04a04:
      param_1[1] = lVar3;
      return;
    }
    memmove(pvVar12,param_2,param_3 - (long)param_2);
    lVar3 = param_1[1];
    lVar4 = (long)pvVar12 + (param_3 - (lVar3 + (long)param_2));
    uVar5 = (ulong)((lVar4 << 0x3c) - lVar4) >> 4;
    uVar9 = (lVar3 - (lVar3 << 0x3c)) - 0x10U >> 4;
    if (uVar9 <= uVar5) {
      uVar5 = uVar9;
    }
    lVar4 = (long)pvVar12 + (param_3 - (long)param_2);
    if ((1 < uVar5) &&
       (((((int)pvVar12 + (int)param_3) - ((int)lVar3 + (int)param_2) | -(int)lVar3) & 0xfU) == 0))
    {
      uVar5 = uVar5 & 0xffffffffffffffe;
      lVar3 = lVar3 + uVar5 * -0x10;
      do {
        uVar5 = uVar5 - 2;
      } while (uVar5 != 0);
    }
    do {
      if (lVar3 == lVar4) {
        param_1[1] = lVar4;
        return;
      }
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c04a2c  FUN_00c04a2c =====

void FUN_00c04a2c(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

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
  if ((ulong)((long)(uVar2 - (long)pvVar6) >> 4) < param_4) {
    if (pvVar6 == (void *)0x0) {
LAB_00c04bd0:
      if (param_4 >> 0x3c == 0) {
        uVar5 = (long)uVar2 >> 3;
        if ((ulong)((long)uVar2 >> 3) <= param_4) {
          uVar5 = param_4;
        }
        if (0x7fffffffffffffef < uVar2) {
          uVar5 = 0xfffffffffffffff;
        }
        if (uVar5 >> 0x3c == 0) {
          pvVar6 = operator_new(uVar5 * 0x10);
          *param_1 = pvVar6;
          param_1[1] = pvVar6;
          param_1[2] = (void *)((long)pvVar6 + uVar5 * 0x10);
          memcpy(pvVar6,param_2,param_3 - (long)param_2);
          lVar1 = (long)pvVar6 + (param_3 - (long)param_2);
          goto LAB_00c04c2c;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00b633e4();
    }
    pvVar3 = (void *)param_1[1];
    uVar5 = (ulong)((long)pvVar3 + (-0x10 - ((long)pvVar3 << 0x3c))) >> 4;
    uVar2 = (ulong)(((long)pvVar6 - (long)pvVar3 << 0x3c) - ((long)pvVar6 - (long)pvVar3)) >> 4;
    if (uVar5 <= uVar2) {
      uVar2 = uVar5;
    }
    if ((1 < uVar2) && ((((int)pvVar6 - (int)pvVar3 | -(int)pvVar3) & 0xfU) == 0)) {
      uVar2 = uVar2 & 0xffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar2 * -0x10);
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
        goto LAB_00c04bd0;
      }
      pvVar3 = (void *)((long)pvVar3 + -0x10);
    } while (pvVar3 != (void *)0x0);
  }
  else {
    __n = param_1[1] - (long)pvVar6;
    if ((ulong)((long)__n >> 4) < param_4) {
      memmove(pvVar6,param_2,__n);
      pvVar6 = (void *)param_1[1];
      __n_00 = param_3 - (long)((long)param_2 + __n);
      memmove(pvVar6,(void *)((long)param_2 + __n),__n_00);
      lVar1 = (long)pvVar6 + __n_00;
LAB_00c04c2c:
      param_1[1] = lVar1;
      return;
    }
    memmove(pvVar6,param_2,param_3 - (long)param_2);
    lVar1 = param_1[1];
    lVar4 = (long)pvVar6 + (param_3 - (lVar1 + (long)param_2));
    uVar2 = (ulong)((lVar4 << 0x3c) - lVar4) >> 4;
    uVar5 = (lVar1 - (lVar1 << 0x3c)) - 0x10U >> 4;
    if (uVar5 <= uVar2) {
      uVar2 = uVar5;
    }
    lVar4 = (long)pvVar6 + (param_3 - (long)param_2);
    if ((1 < uVar2) &&
       (((((int)pvVar6 + (int)param_3) - ((int)lVar1 + (int)param_2) | -(int)lVar1) & 0xfU) == 0)) {
      uVar2 = uVar2 & 0xffffffffffffffe;
      lVar1 = lVar1 + uVar2 * -0x10;
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    do {
      if (lVar1 == lVar4) {
        param_1[1] = lVar4;
        return;
      }
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c04c54  FUN_00c04c54 =====

void FUN_00c04c54(undefined8 *param_1,void *param_2,undefined8 *param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  byte bVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  size_t __n;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  void *pvVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  size_t __n_00;
  void *pvVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  
  uVar11 = param_1[2];
  pvVar16 = (void *)*param_1;
  if ((ulong)((long)(uVar11 - (long)pvVar16) >> 6) < param_4) {
    puVar9 = param_3;
    uVar10 = param_4;
    if (pvVar16 == (void *)0x0) {
LAB_00c04df8:
      if (param_4 >> 0x3a == 0) {
        uVar15 = (long)uVar11 >> 5;
        if ((ulong)((long)uVar11 >> 5) <= param_4) {
          uVar15 = param_4;
        }
        if (0x7fffffffffffffbf < uVar11) {
          uVar15 = 0x3ffffffffffffff;
        }
        if (uVar15 >> 0x3a == 0) {
          pvVar16 = operator_new(uVar15 * 0x40);
          *param_1 = pvVar16;
          param_1[1] = pvVar16;
          param_1[2] = (void *)((long)pvVar16 + uVar15 * 0x40);
          memcpy(pvVar16,param_2,(long)param_3 - (long)param_2);
          lVar14 = (long)pvVar16 + ((long)param_3 - (long)param_2);
          goto LAB_00c04e54;
        }
      }
      auVar26 = FUN_0085d8a8();
      puVar7 = auVar26._8_8_;
      plVar6 = auVar26._0_8_;
      lVar14 = plVar6[2];
      puVar17 = (undefined8 *)*plVar6;
      if ((ulong)((lVar14 - (long)puVar17 >> 6) * -0x71c71c71c71c71c7) < uVar10) {
        if (puVar17 != (undefined8 *)0x0) {
          puVar18 = (undefined8 *)plVar6[1];
          puVar8 = puVar17;
          if (puVar17 != puVar18) {
            do {
              puVar18 = puVar18 + -0x48;
              if (puVar18 == (undefined8 *)0x0) goto LAB_00c051f8;
              FUN_0088aa9c(puVar18);
            } while (puVar18 != puVar17);
            puVar8 = (undefined8 *)*plVar6;
          }
          plVar6[1] = (long)puVar17;
          operator_delete(puVar8);
          lVar14 = 0;
          *plVar6 = 0;
          plVar6[1] = 0;
          plVar6[2] = 0;
        }
        if (uVar10 < 0x71c71c71c71c72) {
          uVar11 = (lVar14 >> 6) * 0x1c71c71c71c71c72;
          if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
            uVar11 = uVar10;
          }
          if (0x38e38e38e38e37 < (ulong)((lVar14 >> 6) * -0x71c71c71c71c71c7)) {
            uVar11 = 0x71c71c71c71c71;
          }
          if (uVar11 < 0x71c71c71c71c72) {
            pvVar16 = operator_new(uVar11 * 0x240);
            *plVar6 = (long)pvVar16;
            plVar6[1] = (long)pvVar16;
            plVar6[2] = (long)((long)pvVar16 + uVar11 * 0x240);
            goto LAB_00c051d8;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_00b63e54();
      }
      puVar18 = (undefined8 *)plVar6[1];
      uVar11 = ((long)puVar18 - (long)puVar17 >> 6) * -0x71c71c71c71c71c7;
      if (uVar10 <= uVar11) {
        if (puVar7 != puVar9) {
          lVar14 = 0;
          do {
            puVar18 = (undefined8 *)((long)puVar7 + lVar14);
            puVar8 = (undefined8 *)((long)puVar17 + lVar14);
            uVar21 = puVar18[4];
            uVar20 = puVar18[7];
            uVar19 = puVar18[6];
            uVar23 = puVar18[1];
            uVar22 = *puVar18;
            uVar25 = puVar18[3];
            uVar24 = puVar18[2];
            puVar8[5] = puVar18[5];
            puVar8[4] = uVar21;
            puVar8[7] = uVar20;
            puVar8[6] = uVar19;
            puVar8[1] = uVar23;
            *puVar8 = uVar22;
            puVar8[3] = uVar25;
            puVar8[2] = uVar24;
            uVar21 = puVar18[0xc];
            uVar20 = puVar18[0xf];
            uVar19 = puVar18[0xe];
            uVar23 = puVar18[9];
            uVar22 = puVar18[8];
            uVar25 = puVar18[0xb];
            uVar24 = puVar18[10];
            puVar8[0xd] = puVar18[0xd];
            puVar8[0xc] = uVar21;
            puVar8[0xf] = uVar20;
            puVar8[0xe] = uVar19;
            puVar8[9] = uVar23;
            puVar8[8] = uVar22;
            puVar8[0xb] = uVar25;
            puVar8[10] = uVar24;
            uVar20 = puVar18[0x11];
            uVar19 = puVar18[0x10];
            *(undefined1 *)(puVar8 + 0x12) = *(undefined1 *)(puVar18 + 0x12);
            puVar8[0x11] = uVar20;
            puVar8[0x10] = uVar19;
            if (puVar17 == puVar7) {
              uVar3 = *(undefined4 *)(puVar18 + 0x16);
              *(undefined1 *)((long)puVar8 + 0xb4) = *(undefined1 *)((long)puVar18 + 0xb4);
              *(undefined4 *)(puVar8 + 0x16) = uVar3;
            }
            else {
              bVar4 = *(byte *)((long)puVar18 + 0xaf);
              plVar1 = puVar18 + 0x13;
              if (*(char *)((long)puVar8 + 0xaf) < '\0') {
                uVar11 = *(ulong *)((long)puVar7 + lVar14 + 0xa0);
                plVar5 = (long *)*plVar1;
                if (-1 < (char)bVar4) {
                  uVar11 = (ulong)bVar4;
                  plVar5 = plVar1;
                }
                FUN_00547f08(puVar8 + 0x13,plVar5,uVar11);
              }
              else if ((char)bVar4 < '\0') {
                FUN_00547fc0(puVar8 + 0x13,*plVar1,*(undefined8 *)((long)puVar7 + lVar14 + 0xa0));
              }
              else {
                uVar20 = puVar18[0x14];
                uVar19 = *plVar1;
                puVar8[0x15] = puVar18[0x15];
                puVar8[0x14] = uVar20;
                puVar8[0x13] = uVar19;
              }
              uVar3 = *(undefined4 *)((long)puVar7 + lVar14 + 0xb0);
              *(undefined1 *)((long)puVar17 + lVar14 + 0xb4) =
                   *(undefined1 *)((long)puVar7 + lVar14 + 0xb4);
              *(undefined4 *)((long)puVar17 + lVar14 + 0xb0) = uVar3;
              lVar13 = *(long *)((long)puVar7 + lVar14 + 0xb8);
              lVar2 = *(long *)((long)puVar7 + lVar14 + 0xc0);
              FUN_00c04a2c((long)puVar17 + lVar14 + 0xb8,lVar13,lVar2,lVar2 - lVar13 >> 4);
              lVar13 = *(long *)((long)puVar7 + lVar14 + 0xd0);
              lVar2 = *(long *)((long)puVar7 + lVar14 + 0xd8);
              FUN_00c04804((long)puVar17 + lVar14 + 0xd0,lVar13,lVar2,lVar2 - lVar13 >> 4);
            }
            uVar19 = puVar18[0x1f];
            uVar21 = puVar18[0x1e];
            uVar20 = puVar18[0x1d];
            uVar23 = puVar18[0x22];
            uVar22 = puVar18[0x21];
            uVar25 = puVar18[0x24];
            uVar24 = puVar18[0x23];
            puVar8[0x20] = puVar18[0x20];
            puVar8[0x1f] = uVar19;
            lVar14 = lVar14 + 0x240;
            puVar8[0x1e] = uVar21;
            puVar8[0x1d] = uVar20;
            puVar8[0x22] = uVar23;
            puVar8[0x21] = uVar22;
            puVar8[0x24] = uVar25;
            puVar8[0x23] = uVar24;
            uVar21 = puVar18[0x29];
            uVar20 = puVar18[0x2c];
            uVar19 = puVar18[0x2b];
            uVar23 = puVar18[0x26];
            uVar22 = puVar18[0x25];
            uVar25 = puVar18[0x28];
            uVar24 = puVar18[0x27];
            puVar8[0x2a] = puVar18[0x2a];
            puVar8[0x29] = uVar21;
            puVar8[0x2c] = uVar20;
            puVar8[0x2b] = uVar19;
            puVar8[0x26] = uVar23;
            puVar8[0x25] = uVar22;
            puVar8[0x28] = uVar25;
            puVar8[0x27] = uVar24;
            uVar19 = *(undefined8 *)((long)puVar18 + 0x174);
            uVar21 = puVar18[0x2e];
            uVar20 = puVar18[0x2d];
            *(undefined8 *)((long)puVar8 + 0x17c) = *(undefined8 *)((long)puVar18 + 0x17c);
            *(undefined8 *)((long)puVar8 + 0x174) = uVar19;
            puVar8[0x2e] = uVar21;
            puVar8[0x2d] = uVar20;
            uVar21 = *(undefined8 *)((long)puVar18 + 0x1a4);
            uVar20 = *(undefined8 *)((long)puVar18 + 0x1bc);
            uVar19 = *(undefined8 *)((long)puVar18 + 0x1b4);
            uVar23 = *(undefined8 *)((long)puVar18 + 0x18c);
            uVar22 = *(undefined8 *)((long)puVar18 + 0x184);
            uVar25 = *(undefined8 *)((long)puVar18 + 0x19c);
            uVar24 = *(undefined8 *)((long)puVar18 + 0x194);
            *(undefined8 *)((long)puVar8 + 0x1ac) = *(undefined8 *)((long)puVar18 + 0x1ac);
            *(undefined8 *)((long)puVar8 + 0x1a4) = uVar21;
            *(undefined8 *)((long)puVar8 + 0x1bc) = uVar20;
            *(undefined8 *)((long)puVar8 + 0x1b4) = uVar19;
            *(undefined8 *)((long)puVar8 + 0x18c) = uVar23;
            *(undefined8 *)((long)puVar8 + 0x184) = uVar22;
            *(undefined8 *)((long)puVar8 + 0x19c) = uVar25;
            *(undefined8 *)((long)puVar8 + 0x194) = uVar24;
            uVar21 = *(undefined8 *)((long)puVar18 + 0x1e4);
            uVar20 = *(undefined8 *)((long)puVar18 + 0x1fc);
            uVar19 = *(undefined8 *)((long)puVar18 + 500);
            uVar23 = *(undefined8 *)((long)puVar18 + 0x1cc);
            uVar22 = *(undefined8 *)((long)puVar18 + 0x1c4);
            uVar25 = *(undefined8 *)((long)puVar18 + 0x1dc);
            uVar24 = *(undefined8 *)((long)puVar18 + 0x1d4);
            *(undefined8 *)((long)puVar8 + 0x1ec) = *(undefined8 *)((long)puVar18 + 0x1ec);
            *(undefined8 *)((long)puVar8 + 0x1e4) = uVar21;
            *(undefined8 *)((long)puVar8 + 0x1fc) = uVar20;
            *(undefined8 *)((long)puVar8 + 500) = uVar19;
            *(undefined8 *)((long)puVar8 + 0x1cc) = uVar23;
            *(undefined8 *)((long)puVar8 + 0x1c4) = uVar22;
            *(undefined8 *)((long)puVar8 + 0x1dc) = uVar25;
            *(undefined8 *)((long)puVar8 + 0x1d4) = uVar24;
            uVar25 = *(undefined8 *)((long)puVar18 + 0x21c);
            uVar24 = *(undefined8 *)((long)puVar18 + 0x214);
            uVar21 = *(undefined8 *)((long)puVar18 + 0x22c);
            uVar20 = *(undefined8 *)((long)puVar18 + 0x224);
            uVar19 = puVar18[0x46];
            uVar23 = *(undefined8 *)((long)puVar18 + 0x20c);
            uVar22 = *(undefined8 *)((long)puVar18 + 0x204);
            puVar8[0x47] = puVar18[0x47];
            puVar8[0x46] = uVar19;
            *(undefined8 *)((long)puVar8 + 0x21c) = uVar25;
            *(undefined8 *)((long)puVar8 + 0x214) = uVar24;
            *(undefined8 *)((long)puVar8 + 0x22c) = uVar21;
            *(undefined8 *)((long)puVar8 + 0x224) = uVar20;
            *(undefined8 *)((long)puVar8 + 0x20c) = uVar23;
            *(undefined8 *)((long)puVar8 + 0x204) = uVar22;
          } while (puVar18 + 0x48 != puVar9);
          puVar18 = (undefined8 *)plVar6[1];
          puVar17 = (undefined8 *)((long)puVar17 + lVar14);
        }
        while( true ) {
          if (puVar17 == puVar18) {
            plVar6[1] = (long)puVar17;
            return;
          }
          puVar18 = puVar18 + -0x48;
          if (puVar18 == (undefined8 *)0x0) break;
          FUN_0088aa9c(puVar18);
        }
LAB_00c051f8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar7 = (undefined8 *)FUN_00c05210(puVar7,uVar11,puVar17);
      uVar10 = uVar10 + (plVar6[1] - *plVar6 >> 6) * 0x71c71c71c71c71c7;
LAB_00c051d8:
      FUN_00c05404(plVar6,puVar7,puVar9,uVar10);
      return;
    }
    pvVar12 = (void *)param_1[1];
    uVar15 = (ulong)((long)pvVar12 + (-0x40 - ((long)pvVar12 << 0x3a))) >> 6;
    uVar11 = (ulong)(((long)pvVar16 - (long)pvVar12 << 0x3a) - ((long)pvVar16 - (long)pvVar12)) >> 6
    ;
    if (uVar15 <= uVar11) {
      uVar11 = uVar15;
    }
    if ((1 < uVar11) && ((((int)pvVar16 - (int)pvVar12 | -(int)pvVar12) & 0x3fU) == 0)) {
      uVar11 = uVar11 & 0x3fffffffffffffe;
      pvVar12 = (void *)((long)pvVar12 + uVar11 * -0x40);
      do {
        uVar11 = uVar11 - 2;
      } while (uVar11 != 0);
    }
    do {
      if (pvVar12 == pvVar16) {
        param_1[1] = pvVar16;
        operator_delete(pvVar16);
        uVar11 = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        goto LAB_00c04df8;
      }
      pvVar12 = (void *)((long)pvVar12 + -0x40);
    } while (pvVar12 != (void *)0x0);
  }
  else {
    __n = param_1[1] - (long)pvVar16;
    if ((ulong)((long)__n >> 6) < param_4) {
      memmove(pvVar16,param_2,__n);
      pvVar16 = (void *)param_1[1];
      __n_00 = (long)param_3 - (long)((long)param_2 + __n);
      memmove(pvVar16,(void *)((long)param_2 + __n),__n_00);
      lVar14 = (long)pvVar16 + __n_00;
LAB_00c04e54:
      param_1[1] = lVar14;
      return;
    }
    memmove(pvVar16,param_2,(long)param_3 - (long)param_2);
    lVar14 = param_1[1];
    lVar13 = ((long)pvVar16 + (long)param_3) - (lVar14 + (long)param_2);
    uVar11 = (ulong)((lVar13 << 0x3a) - lVar13) >> 6;
    uVar10 = (lVar14 - (lVar14 << 0x3a)) - 0x40U >> 6;
    if (uVar10 <= uVar11) {
      uVar11 = uVar10;
    }
    lVar13 = (long)pvVar16 + ((long)param_3 - (long)param_2);
    if ((1 < uVar11) &&
       (((((int)pvVar16 + (int)param_3) - ((int)lVar14 + (int)param_2) | -(int)lVar14) & 0x3fU) == 0
       )) {
      uVar11 = uVar11 & 0x3fffffffffffffe;
      lVar14 = lVar14 + uVar11 * -0x40;
      do {
        uVar11 = uVar11 - 2;
      } while (uVar11 != 0);
    }
    do {
      if (lVar14 == lVar13) {
        param_1[1] = lVar13;
        return;
      }
      lVar14 = lVar14 + -0x40;
    } while (lVar14 != 0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c04e7c  FUN_00c04e7c =====

void FUN_00c04e7c(long *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  byte bVar5;
  long *plVar6;
  undefined8 *puVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar9 = param_1[2];
  puVar11 = (undefined8 *)*param_1;
  if (param_4 <= (ulong)((lVar9 - (long)puVar11 >> 6) * -0x71c71c71c71c71c7)) {
    puVar12 = (undefined8 *)param_1[1];
    uVar10 = ((long)puVar12 - (long)puVar11 >> 6) * -0x71c71c71c71c71c7;
    if (param_4 <= uVar10) {
      if (param_2 != param_3) {
        lVar9 = 0;
        do {
          puVar12 = (undefined8 *)((long)param_2 + lVar9);
          puVar7 = (undefined8 *)((long)puVar11 + lVar9);
          uVar15 = puVar12[4];
          uVar14 = puVar12[7];
          uVar13 = puVar12[6];
          uVar17 = puVar12[1];
          uVar16 = *puVar12;
          uVar19 = puVar12[3];
          uVar18 = puVar12[2];
          puVar7[5] = puVar12[5];
          puVar7[4] = uVar15;
          puVar7[7] = uVar14;
          puVar7[6] = uVar13;
          puVar7[1] = uVar17;
          *puVar7 = uVar16;
          puVar7[3] = uVar19;
          puVar7[2] = uVar18;
          uVar15 = puVar12[0xc];
          uVar14 = puVar12[0xf];
          uVar13 = puVar12[0xe];
          uVar17 = puVar12[9];
          uVar16 = puVar12[8];
          uVar19 = puVar12[0xb];
          uVar18 = puVar12[10];
          puVar7[0xd] = puVar12[0xd];
          puVar7[0xc] = uVar15;
          puVar7[0xf] = uVar14;
          puVar7[0xe] = uVar13;
          puVar7[9] = uVar17;
          puVar7[8] = uVar16;
          puVar7[0xb] = uVar19;
          puVar7[10] = uVar18;
          uVar14 = puVar12[0x11];
          uVar13 = puVar12[0x10];
          *(undefined1 *)(puVar7 + 0x12) = *(undefined1 *)(puVar12 + 0x12);
          puVar7[0x11] = uVar14;
          puVar7[0x10] = uVar13;
          if (puVar11 == param_2) {
            uVar4 = *(undefined4 *)(puVar12 + 0x16);
            *(undefined1 *)((long)puVar7 + 0xb4) = *(undefined1 *)((long)puVar12 + 0xb4);
            *(undefined4 *)(puVar7 + 0x16) = uVar4;
          }
          else {
            bVar5 = *(byte *)((long)puVar12 + 0xaf);
            plVar1 = puVar12 + 0x13;
            if (*(char *)((long)puVar7 + 0xaf) < '\0') {
              uVar10 = *(ulong *)((long)param_2 + lVar9 + 0xa0);
              plVar6 = (long *)*plVar1;
              if (-1 < (char)bVar5) {
                uVar10 = (ulong)bVar5;
                plVar6 = plVar1;
              }
              FUN_00547f08(puVar7 + 0x13,plVar6,uVar10);
            }
            else if ((char)bVar5 < '\0') {
              FUN_00547fc0(puVar7 + 0x13,*plVar1,*(undefined8 *)((long)param_2 + lVar9 + 0xa0));
            }
            else {
              uVar14 = puVar12[0x14];
              uVar13 = *plVar1;
              puVar7[0x15] = puVar12[0x15];
              puVar7[0x14] = uVar14;
              puVar7[0x13] = uVar13;
            }
            uVar4 = *(undefined4 *)((long)param_2 + lVar9 + 0xb0);
            *(undefined1 *)((long)puVar11 + lVar9 + 0xb4) =
                 *(undefined1 *)((long)param_2 + lVar9 + 0xb4);
            *(undefined4 *)((long)puVar11 + lVar9 + 0xb0) = uVar4;
            lVar2 = *(long *)((long)param_2 + lVar9 + 0xb8);
            lVar3 = *(long *)((long)param_2 + lVar9 + 0xc0);
            FUN_00c04a2c((long)puVar11 + lVar9 + 0xb8,lVar2,lVar3,lVar3 - lVar2 >> 4);
            lVar2 = *(long *)((long)param_2 + lVar9 + 0xd0);
            lVar3 = *(long *)((long)param_2 + lVar9 + 0xd8);
            FUN_00c04804((long)puVar11 + lVar9 + 0xd0,lVar2,lVar3,lVar3 - lVar2 >> 4);
          }
          uVar13 = puVar12[0x1f];
          uVar15 = puVar12[0x1e];
          uVar14 = puVar12[0x1d];
          uVar17 = puVar12[0x22];
          uVar16 = puVar12[0x21];
          uVar19 = puVar12[0x24];
          uVar18 = puVar12[0x23];
          puVar7[0x20] = puVar12[0x20];
          puVar7[0x1f] = uVar13;
          lVar9 = lVar9 + 0x240;
          puVar7[0x1e] = uVar15;
          puVar7[0x1d] = uVar14;
          puVar7[0x22] = uVar17;
          puVar7[0x21] = uVar16;
          puVar7[0x24] = uVar19;
          puVar7[0x23] = uVar18;
          uVar15 = puVar12[0x29];
          uVar14 = puVar12[0x2c];
          uVar13 = puVar12[0x2b];
          uVar17 = puVar12[0x26];
          uVar16 = puVar12[0x25];
          uVar19 = puVar12[0x28];
          uVar18 = puVar12[0x27];
          puVar7[0x2a] = puVar12[0x2a];
          puVar7[0x29] = uVar15;
          puVar7[0x2c] = uVar14;
          puVar7[0x2b] = uVar13;
          puVar7[0x26] = uVar17;
          puVar7[0x25] = uVar16;
          puVar7[0x28] = uVar19;
          puVar7[0x27] = uVar18;
          uVar13 = *(undefined8 *)((long)puVar12 + 0x174);
          uVar15 = puVar12[0x2e];
          uVar14 = puVar12[0x2d];
          *(undefined8 *)((long)puVar7 + 0x17c) = *(undefined8 *)((long)puVar12 + 0x17c);
          *(undefined8 *)((long)puVar7 + 0x174) = uVar13;
          puVar7[0x2e] = uVar15;
          puVar7[0x2d] = uVar14;
          uVar15 = *(undefined8 *)((long)puVar12 + 0x1a4);
          uVar14 = *(undefined8 *)((long)puVar12 + 0x1bc);
          uVar13 = *(undefined8 *)((long)puVar12 + 0x1b4);
          uVar17 = *(undefined8 *)((long)puVar12 + 0x18c);
          uVar16 = *(undefined8 *)((long)puVar12 + 0x184);
          uVar19 = *(undefined8 *)((long)puVar12 + 0x19c);
          uVar18 = *(undefined8 *)((long)puVar12 + 0x194);
          *(undefined8 *)((long)puVar7 + 0x1ac) = *(undefined8 *)((long)puVar12 + 0x1ac);
          *(undefined8 *)((long)puVar7 + 0x1a4) = uVar15;
          *(undefined8 *)((long)puVar7 + 0x1bc) = uVar14;
          *(undefined8 *)((long)puVar7 + 0x1b4) = uVar13;
          *(undefined8 *)((long)puVar7 + 0x18c) = uVar17;
          *(undefined8 *)((long)puVar7 + 0x184) = uVar16;
          *(undefined8 *)((long)puVar7 + 0x19c) = uVar19;
          *(undefined8 *)((long)puVar7 + 0x194) = uVar18;
          uVar15 = *(undefined8 *)((long)puVar12 + 0x1e4);
          uVar14 = *(undefined8 *)((long)puVar12 + 0x1fc);
          uVar13 = *(undefined8 *)((long)puVar12 + 500);
          uVar17 = *(undefined8 *)((long)puVar12 + 0x1cc);
          uVar16 = *(undefined8 *)((long)puVar12 + 0x1c4);
          uVar19 = *(undefined8 *)((long)puVar12 + 0x1dc);
          uVar18 = *(undefined8 *)((long)puVar12 + 0x1d4);
          *(undefined8 *)((long)puVar7 + 0x1ec) = *(undefined8 *)((long)puVar12 + 0x1ec);
          *(undefined8 *)((long)puVar7 + 0x1e4) = uVar15;
          *(undefined8 *)((long)puVar7 + 0x1fc) = uVar14;
          *(undefined8 *)((long)puVar7 + 500) = uVar13;
          *(undefined8 *)((long)puVar7 + 0x1cc) = uVar17;
          *(undefined8 *)((long)puVar7 + 0x1c4) = uVar16;
          *(undefined8 *)((long)puVar7 + 0x1dc) = uVar19;
          *(undefined8 *)((long)puVar7 + 0x1d4) = uVar18;
          uVar19 = *(undefined8 *)((long)puVar12 + 0x21c);
          uVar18 = *(undefined8 *)((long)puVar12 + 0x214);
          uVar15 = *(undefined8 *)((long)puVar12 + 0x22c);
          uVar14 = *(undefined8 *)((long)puVar12 + 0x224);
          uVar13 = puVar12[0x46];
          uVar17 = *(undefined8 *)((long)puVar12 + 0x20c);
          uVar16 = *(undefined8 *)((long)puVar12 + 0x204);
          puVar7[0x47] = puVar12[0x47];
          puVar7[0x46] = uVar13;
          *(undefined8 *)((long)puVar7 + 0x21c) = uVar19;
          *(undefined8 *)((long)puVar7 + 0x214) = uVar18;
          *(undefined8 *)((long)puVar7 + 0x22c) = uVar15;
          *(undefined8 *)((long)puVar7 + 0x224) = uVar14;
          *(undefined8 *)((long)puVar7 + 0x20c) = uVar17;
          *(undefined8 *)((long)puVar7 + 0x204) = uVar16;
        } while (puVar12 + 0x48 != param_3);
        puVar12 = (undefined8 *)param_1[1];
        puVar11 = (undefined8 *)((long)puVar11 + lVar9);
      }
      while( true ) {
        if (puVar11 == puVar12) {
          param_1[1] = (long)puVar11;
          return;
        }
        puVar12 = puVar12 + -0x48;
        if (puVar12 == (undefined8 *)0x0) break;
        FUN_0088aa9c(puVar12);
      }
LAB_00c051f8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    param_2 = (undefined8 *)FUN_00c05210(param_2,uVar10,puVar11);
    param_4 = param_4 + (param_1[1] - *param_1 >> 6) * 0x71c71c71c71c71c7;
LAB_00c051d8:
    FUN_00c05404(param_1,param_2,param_3,param_4);
    return;
  }
  if (puVar11 != (undefined8 *)0x0) {
    puVar12 = (undefined8 *)param_1[1];
    puVar7 = puVar11;
    if (puVar11 != puVar12) {
      do {
        puVar12 = puVar12 + -0x48;
        if (puVar12 == (undefined8 *)0x0) goto LAB_00c051f8;
        FUN_0088aa9c(puVar12);
      } while (puVar12 != puVar11);
      puVar7 = (undefined8 *)*param_1;
    }
    param_1[1] = (long)puVar11;
    operator_delete(puVar7);
    lVar9 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 < 0x71c71c71c71c72) {
    uVar10 = (lVar9 >> 6) * 0x1c71c71c71c71c72;
    if (uVar10 < param_4 || uVar10 - param_4 == 0) {
      uVar10 = param_4;
    }
    if (0x38e38e38e38e37 < (ulong)((lVar9 >> 6) * -0x71c71c71c71c71c7)) {
      uVar10 = 0x71c71c71c71c71;
    }
    if (uVar10 < 0x71c71c71c71c72) {
      pvVar8 = operator_new(uVar10 * 0x240);
      *param_1 = (long)pvVar8;
      param_1[1] = (long)pvVar8;
      param_1[2] = (long)((long)pvVar8 + uVar10 * 0x240);
      goto LAB_00c051d8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00b63e54();
}


// ===== 00c05210  FUN_00c05210 =====

undefined1  [16] FUN_00c05210(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  byte bVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  
  if (param_2 * 0x240 != 0) {
    lVar10 = 0;
    do {
      puVar2 = (undefined8 *)((long)param_1 + lVar10);
      puVar3 = (undefined8 *)((long)param_3 + lVar10);
      uVar13 = puVar2[4];
      uVar12 = puVar2[7];
      uVar11 = puVar2[6];
      uVar15 = puVar2[1];
      uVar14 = *puVar2;
      uVar17 = puVar2[3];
      uVar16 = puVar2[2];
      puVar3[5] = puVar2[5];
      puVar3[4] = uVar13;
      puVar3[7] = uVar12;
      puVar3[6] = uVar11;
      puVar3[1] = uVar15;
      *puVar3 = uVar14;
      puVar3[3] = uVar17;
      puVar3[2] = uVar16;
      uVar13 = puVar2[0xc];
      uVar12 = puVar2[0xf];
      uVar11 = puVar2[0xe];
      uVar15 = puVar2[9];
      uVar14 = puVar2[8];
      uVar17 = puVar2[0xb];
      uVar16 = puVar2[10];
      puVar3[0xd] = puVar2[0xd];
      puVar3[0xc] = uVar13;
      puVar3[0xf] = uVar12;
      puVar3[0xe] = uVar11;
      puVar3[9] = uVar15;
      puVar3[8] = uVar14;
      puVar3[0xb] = uVar17;
      puVar3[10] = uVar16;
      uVar12 = puVar2[0x11];
      uVar11 = puVar2[0x10];
      *(undefined1 *)(puVar3 + 0x12) = *(undefined1 *)(puVar2 + 0x12);
      puVar3[0x11] = uVar12;
      puVar3[0x10] = uVar11;
      if (param_3 == param_1) {
        uVar7 = *(undefined4 *)(puVar2 + 0x16);
        *(undefined1 *)((long)puVar3 + 0xb4) = *(undefined1 *)((long)puVar2 + 0xb4);
        *(undefined4 *)(puVar3 + 0x16) = uVar7;
      }
      else {
        bVar8 = *(byte *)((long)puVar2 + 0xaf);
        plVar1 = puVar2 + 0x13;
        if (*(char *)((long)puVar3 + 0xaf) < '\0') {
          uVar4 = *(ulong *)((long)param_1 + lVar10 + 0xa0);
          plVar9 = (long *)*plVar1;
          if (-1 < (char)bVar8) {
            uVar4 = (ulong)bVar8;
            plVar9 = plVar1;
          }
          FUN_00547f08(puVar3 + 0x13,plVar9,uVar4);
        }
        else if ((char)bVar8 < '\0') {
          FUN_00547fc0(puVar3 + 0x13,*plVar1,*(undefined8 *)((long)param_1 + lVar10 + 0xa0));
        }
        else {
          uVar12 = puVar2[0x14];
          uVar11 = *plVar1;
          puVar3[0x15] = puVar2[0x15];
          puVar3[0x14] = uVar12;
          puVar3[0x13] = uVar11;
        }
        uVar7 = *(undefined4 *)((long)param_1 + lVar10 + 0xb0);
        *(undefined1 *)((long)param_3 + lVar10 + 0xb4) =
             *(undefined1 *)((long)param_1 + lVar10 + 0xb4);
        *(undefined4 *)((long)param_3 + lVar10 + 0xb0) = uVar7;
        lVar5 = *(long *)((long)param_1 + lVar10 + 0xb8);
        lVar6 = *(long *)((long)param_1 + lVar10 + 0xc0);
        FUN_00c04a2c((long)param_3 + lVar10 + 0xb8,lVar5,lVar6,lVar6 - lVar5 >> 4);
        lVar5 = *(long *)((long)param_1 + lVar10 + 0xd0);
        lVar6 = *(long *)((long)param_1 + lVar10 + 0xd8);
        FUN_00c04804((long)param_3 + lVar10 + 0xd0,lVar5,lVar6,lVar6 - lVar5 >> 4);
      }
      uVar11 = puVar2[0x1f];
      uVar13 = puVar2[0x1e];
      uVar12 = puVar2[0x1d];
      uVar15 = puVar2[0x22];
      uVar14 = puVar2[0x21];
      uVar17 = puVar2[0x24];
      uVar16 = puVar2[0x23];
      puVar3[0x20] = puVar2[0x20];
      puVar3[0x1f] = uVar11;
      lVar10 = lVar10 + 0x240;
      puVar3[0x1e] = uVar13;
      puVar3[0x1d] = uVar12;
      puVar3[0x22] = uVar15;
      puVar3[0x21] = uVar14;
      puVar3[0x24] = uVar17;
      puVar3[0x23] = uVar16;
      uVar13 = puVar2[0x29];
      uVar12 = puVar2[0x2c];
      uVar11 = puVar2[0x2b];
      uVar15 = puVar2[0x26];
      uVar14 = puVar2[0x25];
      uVar17 = puVar2[0x28];
      uVar16 = puVar2[0x27];
      puVar3[0x2a] = puVar2[0x2a];
      puVar3[0x29] = uVar13;
      puVar3[0x2c] = uVar12;
      puVar3[0x2b] = uVar11;
      puVar3[0x26] = uVar15;
      puVar3[0x25] = uVar14;
      puVar3[0x28] = uVar17;
      puVar3[0x27] = uVar16;
      uVar11 = *(undefined8 *)((long)puVar2 + 0x174);
      uVar13 = puVar2[0x2e];
      uVar12 = puVar2[0x2d];
      *(undefined8 *)((long)puVar3 + 0x17c) = *(undefined8 *)((long)puVar2 + 0x17c);
      *(undefined8 *)((long)puVar3 + 0x174) = uVar11;
      puVar3[0x2e] = uVar13;
      puVar3[0x2d] = uVar12;
      uVar13 = *(undefined8 *)((long)puVar2 + 0x1a4);
      uVar12 = *(undefined8 *)((long)puVar2 + 0x1bc);
      uVar11 = *(undefined8 *)((long)puVar2 + 0x1b4);
      uVar15 = *(undefined8 *)((long)puVar2 + 0x18c);
      uVar14 = *(undefined8 *)((long)puVar2 + 0x184);
      uVar17 = *(undefined8 *)((long)puVar2 + 0x19c);
      uVar16 = *(undefined8 *)((long)puVar2 + 0x194);
      *(undefined8 *)((long)puVar3 + 0x1ac) = *(undefined8 *)((long)puVar2 + 0x1ac);
      *(undefined8 *)((long)puVar3 + 0x1a4) = uVar13;
      *(undefined8 *)((long)puVar3 + 0x1bc) = uVar12;
      *(undefined8 *)((long)puVar3 + 0x1b4) = uVar11;
      *(undefined8 *)((long)puVar3 + 0x18c) = uVar15;
      *(undefined8 *)((long)puVar3 + 0x184) = uVar14;
      *(undefined8 *)((long)puVar3 + 0x19c) = uVar17;
      *(undefined8 *)((long)puVar3 + 0x194) = uVar16;
      uVar13 = *(undefined8 *)((long)puVar2 + 0x1e4);
      uVar12 = *(undefined8 *)((long)puVar2 + 0x1fc);
      uVar11 = *(undefined8 *)((long)puVar2 + 500);
      uVar15 = *(undefined8 *)((long)puVar2 + 0x1cc);
      uVar14 = *(undefined8 *)((long)puVar2 + 0x1c4);
      uVar17 = *(undefined8 *)((long)puVar2 + 0x1dc);
      uVar16 = *(undefined8 *)((long)puVar2 + 0x1d4);
      *(undefined8 *)((long)puVar3 + 0x1ec) = *(undefined8 *)((long)puVar2 + 0x1ec);
      *(undefined8 *)((long)puVar3 + 0x1e4) = uVar13;
      *(undefined8 *)((long)puVar3 + 0x1fc) = uVar12;
      *(undefined8 *)((long)puVar3 + 500) = uVar11;
      *(undefined8 *)((long)puVar3 + 0x1cc) = uVar15;
      *(undefined8 *)((long)puVar3 + 0x1c4) = uVar14;
      *(undefined8 *)((long)puVar3 + 0x1dc) = uVar17;
      *(undefined8 *)((long)puVar3 + 0x1d4) = uVar16;
      uVar17 = *(undefined8 *)((long)puVar2 + 0x21c);
      uVar16 = *(undefined8 *)((long)puVar2 + 0x214);
      uVar13 = *(undefined8 *)((long)puVar2 + 0x22c);
      uVar12 = *(undefined8 *)((long)puVar2 + 0x224);
      uVar11 = puVar2[0x46];
      uVar15 = *(undefined8 *)((long)puVar2 + 0x20c);
      uVar14 = *(undefined8 *)((long)puVar2 + 0x204);
      puVar3[0x47] = puVar2[0x47];
      puVar3[0x46] = uVar11;
      *(undefined8 *)((long)puVar3 + 0x21c) = uVar17;
      *(undefined8 *)((long)puVar3 + 0x214) = uVar16;
      *(undefined8 *)((long)puVar3 + 0x22c) = uVar13;
      *(undefined8 *)((long)puVar3 + 0x224) = uVar12;
      *(undefined8 *)((long)puVar3 + 0x20c) = uVar15;
      *(undefined8 *)((long)puVar3 + 0x204) = uVar14;
    } while (puVar2 + 0x48 != param_1 + param_2 * 0x48);
    param_3 = (undefined8 *)((long)param_3 + lVar10);
    param_1 = param_1 + param_2 * 0x48;
  }
  auVar18._8_8_ = param_3;
  auVar18._0_8_ = param_1;
  return auVar18;
}


// ===== 00c05404  FUN_00c05404 =====

void FUN_00c05404(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar7 = *(long *)(param_1 + 8);
  if (param_2 != param_3) {
    lVar8 = 0;
    do {
      puVar9 = (undefined8 *)(lVar7 + lVar8);
      if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar1 = (undefined8 *)((long)param_2 + lVar8);
      uVar11 = puVar1[4];
      uVar10 = puVar1[7];
      uVar6 = puVar1[6];
      uVar13 = puVar1[1];
      uVar12 = *puVar1;
      uVar15 = puVar1[3];
      uVar14 = puVar1[2];
      puVar9[5] = puVar1[5];
      puVar9[4] = uVar11;
      puVar9[7] = uVar10;
      puVar9[6] = uVar6;
      puVar9[1] = uVar13;
      *puVar9 = uVar12;
      puVar9[3] = uVar15;
      puVar9[2] = uVar14;
      uVar11 = puVar1[0xc];
      uVar10 = puVar1[0xf];
      uVar6 = puVar1[0xe];
      uVar13 = puVar1[9];
      uVar12 = puVar1[8];
      uVar15 = puVar1[0xb];
      uVar14 = puVar1[10];
      puVar9[0xd] = puVar1[0xd];
      puVar9[0xc] = uVar11;
      puVar9[0xf] = uVar10;
      puVar9[0xe] = uVar6;
      puVar9[9] = uVar13;
      puVar9[8] = uVar12;
      puVar9[0xb] = uVar15;
      puVar9[10] = uVar14;
      uVar10 = puVar1[0x11];
      uVar6 = puVar1[0x10];
      *(undefined1 *)(puVar9 + 0x12) = *(undefined1 *)(puVar1 + 0x12);
      puVar9[0x11] = uVar10;
      puVar9[0x10] = uVar6;
      lVar2 = lVar7 + lVar8;
      if (*(char *)((long)puVar1 + 0xaf) < '\0') {
        FUN_005478d8(lVar2 + 0x98,puVar1[0x13],*(undefined8 *)((long)param_2 + lVar8 + 0xa0));
      }
      else {
        uVar10 = puVar1[0x14];
        uVar6 = puVar1[0x13];
        *(undefined8 *)(lVar2 + 0xa8) = puVar1[0x15];
        *(undefined8 *)(lVar2 + 0xa0) = uVar10;
        *(undefined8 *)(lVar2 + 0x98) = uVar6;
      }
      uVar6 = puVar1[0x16];
      lVar2 = lVar7 + lVar8;
      *(undefined8 *)(lVar2 + 0xc0) = 0;
      *(undefined8 *)(lVar2 + 200) = 0;
      *(undefined8 *)(lVar2 + 0xb0) = uVar6;
      *(undefined8 *)(lVar2 + 0xb8) = 0;
      pvVar3 = (void *)puVar1[0x17];
      uVar4 = puVar1[0x18] - (long)pvVar3;
      if (uVar4 != 0) {
        if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00b633e4();
        }
        pvVar5 = operator_new(uVar4);
        *(void **)(lVar2 + 0xb8) = pvVar5;
        *(void **)(lVar2 + 0xc0) = pvVar5;
        *(ulong *)(lVar2 + 200) = (long)pvVar5 + uVar4;
        memcpy(pvVar5,pvVar3,uVar4);
        *(ulong *)(lVar2 + 0xc0) = (long)pvVar5 + uVar4;
      }
      *(undefined8 *)(lVar2 + 0xd8) = 0;
      *(undefined8 *)(lVar2 + 0xe0) = 0;
      puVar9 = (undefined8 *)(lVar7 + lVar8 + 0xd0);
      *puVar9 = 0;
      pvVar3 = (void *)puVar1[0x1a];
      uVar4 = puVar1[0x1b] - (long)pvVar3;
      if (uVar4 != 0) {
        if ((long)uVar4 < 0) {
          FUN_00b63280();
          break;
        }
        pvVar5 = operator_new(uVar4);
        *puVar9 = pvVar5;
        *(void **)(lVar2 + 0xd8) = pvVar5;
        *(ulong *)(lVar2 + 0xe0) = (long)pvVar5 + uVar4;
        memcpy(pvVar5,pvVar3,uVar4);
        *(ulong *)(lVar2 + 0xd8) = (long)pvVar5 + uVar4;
      }
      uVar6 = puVar1[0x1f];
      lVar2 = lVar7 + lVar8;
      uVar13 = puVar1[0x22];
      uVar12 = puVar1[0x21];
      uVar15 = puVar1[0x24];
      uVar14 = puVar1[0x23];
      uVar11 = puVar1[0x1e];
      uVar10 = puVar1[0x1d];
      *(undefined8 *)(lVar2 + 0x100) = puVar1[0x20];
      *(undefined8 *)(lVar2 + 0xf8) = uVar6;
      lVar8 = lVar8 + 0x240;
      *(undefined8 *)(lVar2 + 0xf0) = uVar11;
      *(undefined8 *)(lVar2 + 0xe8) = uVar10;
      *(undefined8 *)(lVar2 + 0x110) = uVar13;
      *(undefined8 *)(lVar2 + 0x108) = uVar12;
      *(undefined8 *)(lVar2 + 0x120) = uVar15;
      *(undefined8 *)(lVar2 + 0x118) = uVar14;
      uVar11 = puVar1[0x29];
      uVar10 = puVar1[0x2c];
      uVar6 = puVar1[0x2b];
      uVar13 = puVar1[0x26];
      uVar12 = puVar1[0x25];
      uVar15 = puVar1[0x28];
      uVar14 = puVar1[0x27];
      *(undefined8 *)(lVar2 + 0x150) = puVar1[0x2a];
      *(undefined8 *)(lVar2 + 0x148) = uVar11;
      *(undefined8 *)(lVar2 + 0x160) = uVar10;
      *(undefined8 *)(lVar2 + 0x158) = uVar6;
      *(undefined8 *)(lVar2 + 0x130) = uVar13;
      *(undefined8 *)(lVar2 + 0x128) = uVar12;
      *(undefined8 *)(lVar2 + 0x140) = uVar15;
      *(undefined8 *)(lVar2 + 0x138) = uVar14;
      uVar6 = *(undefined8 *)((long)puVar1 + 0x174);
      uVar11 = puVar1[0x2e];
      uVar10 = puVar1[0x2d];
      *(undefined8 *)(lVar2 + 0x17c) = *(undefined8 *)((long)puVar1 + 0x17c);
      *(undefined8 *)(lVar2 + 0x174) = uVar6;
      *(undefined8 *)(lVar2 + 0x170) = uVar11;
      *(undefined8 *)(lVar2 + 0x168) = uVar10;
      uVar11 = *(undefined8 *)((long)puVar1 + 0x1a4);
      uVar10 = *(undefined8 *)((long)puVar1 + 0x1bc);
      uVar6 = *(undefined8 *)((long)puVar1 + 0x1b4);
      uVar13 = *(undefined8 *)((long)puVar1 + 0x18c);
      uVar12 = *(undefined8 *)((long)puVar1 + 0x184);
      uVar15 = *(undefined8 *)((long)puVar1 + 0x19c);
      uVar14 = *(undefined8 *)((long)puVar1 + 0x194);
      *(undefined8 *)(lVar2 + 0x1ac) = *(undefined8 *)((long)puVar1 + 0x1ac);
      *(undefined8 *)(lVar2 + 0x1a4) = uVar11;
      *(undefined8 *)(lVar2 + 0x1bc) = uVar10;
      *(undefined8 *)(lVar2 + 0x1b4) = uVar6;
      *(undefined8 *)(lVar2 + 0x18c) = uVar13;
      *(undefined8 *)(lVar2 + 0x184) = uVar12;
      *(undefined8 *)(lVar2 + 0x19c) = uVar15;
      *(undefined8 *)(lVar2 + 0x194) = uVar14;
      uVar11 = *(undefined8 *)((long)puVar1 + 0x1e4);
      uVar10 = *(undefined8 *)((long)puVar1 + 0x1fc);
      uVar6 = *(undefined8 *)((long)puVar1 + 500);
      uVar13 = *(undefined8 *)((long)puVar1 + 0x1cc);
      uVar12 = *(undefined8 *)((long)puVar1 + 0x1c4);
      uVar15 = *(undefined8 *)((long)puVar1 + 0x1dc);
      uVar14 = *(undefined8 *)((long)puVar1 + 0x1d4);
      *(undefined8 *)(lVar2 + 0x1ec) = *(undefined8 *)((long)puVar1 + 0x1ec);
      *(undefined8 *)(lVar2 + 0x1e4) = uVar11;
      *(undefined8 *)(lVar2 + 0x1fc) = uVar10;
      *(undefined8 *)(lVar2 + 500) = uVar6;
      *(undefined8 *)(lVar2 + 0x1cc) = uVar13;
      *(undefined8 *)(lVar2 + 0x1c4) = uVar12;
      *(undefined8 *)(lVar2 + 0x1dc) = uVar15;
      *(undefined8 *)(lVar2 + 0x1d4) = uVar14;
      uVar6 = puVar1[0x46];
      uVar15 = *(undefined8 *)((long)puVar1 + 0x21c);
      uVar14 = *(undefined8 *)((long)puVar1 + 0x214);
      uVar11 = *(undefined8 *)((long)puVar1 + 0x22c);
      uVar10 = *(undefined8 *)((long)puVar1 + 0x224);
      uVar13 = *(undefined8 *)((long)puVar1 + 0x20c);
      uVar12 = *(undefined8 *)((long)puVar1 + 0x204);
      *(undefined8 *)(lVar2 + 0x238) = puVar1[0x47];
      *(undefined8 *)(lVar2 + 0x230) = uVar6;
      *(undefined8 *)(lVar2 + 0x21c) = uVar15;
      *(undefined8 *)(lVar2 + 0x214) = uVar14;
      *(undefined8 *)(lVar2 + 0x22c) = uVar11;
      *(undefined8 *)(lVar2 + 0x224) = uVar10;
      *(undefined8 *)(lVar2 + 0x20c) = uVar13;
      *(undefined8 *)(lVar2 + 0x204) = uVar12;
    } while (puVar1 + 0x48 != param_3);
    lVar7 = lVar7 + lVar8;
  }
  *(long *)(param_1 + 8) = lVar7;
  return;
}


// ===== 00c05610  FUN_00c05610 =====

long * FUN_00c05610(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                   undefined8 param_5)

{
  long lVar1;
  undefined8 local_38;
  
  if (param_3 == (long *)0x0) {
    local_38 = param_1;
    FUN_0088c818(&local_38,param_2);
    param_2 = (long *)0x0;
  }
  else {
    *(int *)(param_2 + 4) = (int)param_3[4];
    FUN_00b61d90(param_2 + 5,param_3 + 5);
    *(int *)(param_2 + 0x12) = (int)param_3[0x12];
    *(char *)(param_2 + 3) = (char)param_3[3];
    lVar1 = *param_3;
    if (*param_2 == 0) {
      if (lVar1 != 0) {
        lVar1 = FUN_00c05714(param_5,lVar1,param_5);
        *param_2 = lVar1;
        *(long **)(lVar1 + 0x10) = param_2;
      }
    }
    else {
      lVar1 = FUN_00c05610(param_1,*param_2,lVar1,0,param_5);
      *param_2 = lVar1;
    }
    lVar1 = param_3[1];
    if (param_2[1] == 0) {
      if (lVar1 != 0) {
        lVar1 = FUN_00c05714(param_5,lVar1,param_5);
        param_2[1] = lVar1;
        *(long **)(lVar1 + 0x10) = param_2;
      }
    }
    else {
      lVar1 = FUN_00c05610(param_1,param_2[1],lVar1,0,param_5);
      param_2[1] = lVar1;
    }
  }
  return param_2;
}


// ===== 00c05714  FUN_00c05714 =====

long * FUN_00c05714(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 == (undefined8 *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = (long *)operator_new(0x98);
    if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(undefined4 *)(plVar2 + 4) = *(undefined4 *)(param_2 + 4);
    FUN_006692f8(plVar2 + 5,param_2 + 5);
    lVar3 = FUN_00c05714(param_1,*param_2,param_3);
    lVar4 = FUN_00c05714(param_1,param_2[1],param_3);
    uVar1 = *(undefined1 *)(param_2 + 3);
    *plVar2 = lVar3;
    plVar2[1] = lVar4;
    *(undefined1 *)(plVar2 + 3) = uVar1;
    if (lVar3 != 0) {
      *(long **)(lVar3 + 0x10) = plVar2;
      lVar4 = plVar2[1];
    }
    if (lVar4 != 0) {
      *(long **)(lVar4 + 0x10) = plVar2;
    }
  }
  return plVar2;
}


// ===== 00c057e8  FUN_00c057e8 =====

void FUN_00c057e8(long *param_1,uint param_2,int param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  plVar3 = (long *)(param_4 + 8);
  plVar5 = (long *)*plVar3;
  plVar4 = plVar5;
  if (plVar5 != (long *)0x0) {
    do {
      while (*(uint *)(plVar4 + 4) <= param_2) {
        if (param_2 == *(uint *)(plVar4 + 4)) {
          if (plVar4 != plVar3) {
            if (-1 < *(char *)((long)plVar4 + 0x3f)) {
              lVar7 = plVar4[6];
              lVar6 = plVar4[5];
              param_1[2] = plVar4[7];
              param_1[1] = lVar7;
              *param_1 = lVar6;
              return;
            }
            FUN_005478d8(param_1,plVar4[5],plVar4[6]);
            return;
          }
          goto LAB_00c05860;
        }
        plVar1 = plVar4 + 1;
        plVar4 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_00c05860;
      }
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
LAB_00c05860:
    if (param_3 != 0) {
      do {
        if ((int)plVar5[4] == 0) {
          if (plVar5 != plVar3) {
            uVar2 = FUN_00417e08();
            if ((uVar2 & 1) == 0) {
              FUN_00623bb0(&DAT_001f6130,"../../pc/legacy_stats_collector.cc",0xfd9,"Assuming SSRC="
                           ,param_2,
                           " is an unsignalled receive stream corresponding to the RtpReceiver with track ID \""
                           ,plVar5 + 5,&DAT_001e2244);
            }
            if (-1 < *(char *)((long)plVar5 + 0x3f)) {
              lVar7 = plVar5[6];
              lVar6 = plVar5[5];
              param_1[2] = plVar5[7];
              param_1[1] = lVar7;
              *param_1 = lVar6;
              return;
            }
            FUN_005478d8(param_1,plVar5[5],plVar5[6]);
            return;
          }
          break;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  *(undefined1 *)((long)param_1 + 0x17) = 0;
  *(undefined1 *)param_1 = 0;
  return;
}


// ===== 00c0593c  FUN_00c0593c =====

void FUN_00c0593c(undefined8 *param_1)

{
  char cVar1;
  undefined8 *local_8;
  
  FUN_0088b288(param_1 + 0xe);
  *param_1 = &PTR_FUN_00d49c68;
  local_8 = param_1 + 10;
  FUN_00c041d8(&local_8,param_1[0xb]);
  local_8 = param_1 + 7;
  FUN_00c041d8(&local_8,param_1[8]);
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    cVar1 = *(char *)((long)param_1 + 0x1f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x1f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[1]);
  }
  return;
}


// ===== 00c059d8  FUN_00c059d8 =====

void FUN_00c059d8(undefined8 *param_1)

{
  char cVar1;
  undefined8 *local_8;
  
  FUN_0088b288(param_1 + 0xe);
  *param_1 = &PTR_FUN_00d49c68;
  local_8 = param_1 + 10;
  FUN_00c041d8(&local_8,param_1[0xb]);
  local_8 = param_1 + 7;
  FUN_00c041d8(&local_8,param_1[8]);
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    cVar1 = *(char *)((long)param_1 + 0x1f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x1f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00c05a80  FUN_00c05a80 =====

uint FUN_00c05a80(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 **local_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 **local_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 **ppuStack_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 **local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0088b3bc(&local_90);
  ppuStack_a8 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0088b58c(&local_c0);
  plVar7 = (long *)FUN_00c0f220(*(undefined8 *)(param_1 + 0x68));
  uVar5 = (**(code **)(*plVar7 + 0xd8))(plVar7,&local_90);
  plVar7 = (long *)FUN_00c0f258(*(undefined8 *)(param_1 + 0x68));
  uVar6 = (**(code **)(*plVar7 + 0xe0))(plVar7,&local_c0);
  puVar3 = puStack_78;
  puVar2 = puStack_88;
  puVar1 = local_90;
  if ((uVar5 & uVar6 & 1) != 0) {
    local_90 = (undefined1 *)0x0;
    puStack_88 = (undefined1 *)0x0;
    local_130 = local_80;
    puStack_138 = puVar2;
    local_140 = puVar1;
    local_80 = (undefined1 *)0x0;
    puStack_78 = (undefined1 *)0x0;
    local_118 = puStack_68;
    local_100 = local_b0;
    local_f8 = local_60;
    puStack_120 = local_70;
    local_128 = puVar3;
    local_70 = (undefined1 *)0x0;
    puStack_68 = (undefined1 *)0x0;
    puStack_108 = puStack_b8;
    local_110 = local_c0;
    puStack_b8 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_f0 = local_58;
    puStack_e8 = local_50;
    ppuVar4 = &local_f0;
    if (local_50 != (undefined1 *)0x0) {
      local_60 = &local_58;
      *(undefined1 ***)(local_58 + 0x10) = &local_f0;
      local_58 = (undefined1 *)0x0;
      local_50 = (undefined1 *)0x0;
      ppuVar4 = local_f8;
    }
    local_f8 = ppuVar4;
    local_d0 = local_98;
    local_e0 = ppuStack_a8;
    puStack_d8 = local_a0;
    ppuVar4 = &puStack_d8;
    if (local_98 != (undefined1 *)0x0) {
      ppuStack_a8 = &local_a0;
      *(undefined1 ***)(local_a0 + 0x10) = &puStack_d8;
      local_a0 = (undefined1 *)0x0;
      local_98 = (undefined1 *)0x0;
      ppuVar4 = local_e0;
    }
    local_e0 = ppuVar4;
    FUN_00c062f4(param_1 + 0x70,&local_140);
    FUN_0088b288(&local_140);
  }
  FUN_0088b5a8(&local_c0);
  FUN_0088b3e0(&local_90);
  return uVar5 & uVar6 & 1;
}


// ===== 00c05bfc  FUN_00c05bfc =====

/* WARNING: Removing unreachable block (ram,0x00c05ee8) */
/* WARNING: Removing unreachable block (ram,0x00c05d08) */
/* WARNING: Removing unreachable block (ram,0x00c060ac) */

void FUN_00c05bfc(long param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  uint uVar9;
  undefined4 uVar10;
  long *plVar11;
  double dVar12;
  long *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 local_78 [24];
  
  local_98 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00c0866c(&local_98,param_1 + 0x20,*(undefined4 *)PTR_DAT_00d52638);
  plVar1 = *(long **)(param_1 + 0xa8);
  for (plVar11 = *(long **)(param_1 + 0xa0); plVar11 != plVar1; plVar11 = plVar11 + 0x66) {
    if ((undefined4 *)plVar11[0x17] == (undefined4 *)plVar11[0x18]) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined4 *)plVar11[0x17];
    }
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00c057e8(&local_90,uVar10,1,param_1 + 0x50);
    lVar6 = FUN_00c01494(param_2,1,uVar10,&local_90,&local_98,1);
    if (lVar6 != 0) {
      cVar3 = *(char *)(param_2 + 0x60);
      FUN_00c087e8(lVar6,0x34,plVar11 + 0x13);
      FUN_00c06c24(local_78,plVar11 + 0x34,"unknown");
      FUN_00c087e8(lVar6,6,local_78);
      lVar4 = 0;
      if (cVar3 == '\0') {
        lVar4 = plVar11[1];
      }
      FUN_00c08b3c(lVar6,4,lVar4 + *plVar11);
      if (-1 < plVar11[0x55]) {
        FUN_00c08b3c(lVar6,0x2c);
      }
      if (-1 < plVar11[0x56]) {
        FUN_00c08b3c(lVar6,0x4f);
      }
      if ((char)plVar11[0x41] == '\x01') {
        FUN_00c08b3c(lVar6,0x12,plVar11[0x40]);
      }
      if (*(char *)((long)plVar11 + 0x54) == '\x01') {
        FUN_00c08c64(lVar6,0x6a,(int)plVar11[10]);
      }
      uVar2 = *(undefined4 *)((long)plVar11 + 500);
      FUN_00c08c64(lVar6,0x39,(int)plVar11[0x54]);
      FUN_00c08c64(lVar6,0x3a,(int)plVar11[0x51]);
      FUN_00c08c64(lVar6,0x4e,(int)plVar11[0x39]);
      FUN_00c08c64(lVar6,0x51,*(undefined4 *)((long)plVar11 + 0x1d4));
      FUN_00c08c64(lVar6,0x53,*(undefined4 *)((long)plVar11 + 0x1dc));
      FUN_00c08c64(lVar6,0x55,(int)plVar11[0x3c]);
      FUN_00c08c64(lVar6,0x56,(int)plVar11[0x3b]);
      FUN_00c08c64(lVar6,0x59,(int)plVar11[0x3a]);
      FUN_00c08c64(lVar6,0x60,(int)plVar11[0x52]);
      FUN_00c08c64(lVar6,0x67,*(undefined4 *)((long)plVar11 + 0x28c));
      FUN_00c08c64(lVar6,0x68,*(undefined4 *)((long)plVar11 + 0x294));
      FUN_00c08c64(lVar6,0xe,(int)plVar11[5]);
      FUN_00c08c64(lVar6,0xf,(int)plVar11[2]);
      FUN_00c08c64(lVar6,0x6c,*(undefined4 *)((long)plVar11 + 0x1cc));
      FUN_00c08c64(lVar6,0x73,(int)plVar11[0x53]);
      FUN_00c08c64(lVar6,0x84,*(undefined4 *)((long)plVar11 + 0x29c));
      FUN_00c08c64(lVar6,10,uVar2);
      FUN_00c08a34(lVar6,0xd,&DAT_00199d61);
      if ((char)plVar11[0x65] == '\x01') {
        FUN_00659ef4(local_78,plVar11 + 0x57);
        FUN_00c087e8(lVar6,0x86,local_78);
      }
      FUN_00c08b3c(lVar6,0x5e,plVar11[0x4d]);
      uVar7 = FUN_00659d60((long)plVar11 + 0x284);
      FUN_00c08a34(lVar6,0x37,uVar7);
    }
    if ((plVar11[0x1a] != plVar11[0x1b]) &&
       (lVar6 = FUN_00c01494(param_2,0,uVar10,&local_90,&local_98,1), lVar6 != 0)) {
      if (plVar11[0x1b] == plVar11[0x1a]) goto LAB_00c062d4;
      *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(plVar11[0x1a] + 8);
    }
    if ((long)local_80 < 0) {
      operator_delete(local_90);
    }
  }
  plVar11 = *(long **)(param_1 + 0x88);
  plVar1 = *(long **)(param_1 + 0x90);
  if (plVar11 != plVar1) {
    do {
      if ((uint *)plVar11[0xf] == (uint *)plVar11[0x10]) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(uint *)plVar11[0xf];
      }
      plVar8 = *(long **)(param_1 + 0x40);
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        while (*(uint *)(plVar8 + 4) <= uVar9) {
          if (uVar9 == *(uint *)(plVar8 + 4)) {
            if (plVar8 == (long *)(param_1 + 0x40)) goto LAB_00c06014;
            if (*(char *)((long)plVar8 + 0x3f) < '\0') {
              FUN_005478d8(&local_90,plVar8[5],plVar8[6]);
            }
            else {
              local_80 = (undefined1 *)plVar8[7];
              puStack_88 = (undefined1 *)plVar8[6];
              local_90 = (undefined1 *)plVar8[5];
            }
            goto LAB_00c0601c;
          }
          plVar8 = (long *)plVar8[1];
          if (plVar8 == (long *)0x0) goto LAB_00c06014;
        }
      }
LAB_00c06014:
      local_80 = (undefined1 *)0xaaaaaaaaaaaaaa;
      local_90 = (undefined1 *)0xaaaaaaaaaaaaaa00;
LAB_00c0601c:
      lVar6 = FUN_00c01494(param_2,1,uVar9,&local_90,&local_98,0);
      if (lVar6 != 0) {
        cVar3 = *(char *)(param_2 + 0x60);
        FUN_00c087e8(lVar6,0x34,plVar11 + 0xb);
        lVar4 = 0;
        if (cVar3 == '\0') {
          lVar4 = plVar11[1];
        }
        FUN_00c08b3c(lVar6,5,lVar4 + *plVar11);
        if (-1 < plVar11[10]) {
          FUN_00c08b3c(lVar6,0x7e);
        }
        FUN_00c06c24(local_78,plVar11 + 0x1f,"unknown");
        FUN_00c087e8(lVar6,6,local_78);
        FUN_00c08ea0(lVar6,0x2a,*(uint *)((long)plVar11 + 0x144) >> 1 & 1);
        FUN_00c08ea0(lVar6,0x38,*(uint *)((long)plVar11 + 0x144) & 1);
        FUN_00c08ea0(lVar6,0x5b,(char)plVar11[0x32]);
        if ((char)plVar11[0x34] == '\x01') {
          FUN_00c08c64(lVar6,0x12,(int)plVar11[0x33]);
        }
        dVar12 = (double)plVar11[0x26];
        lVar4 = plVar11[6];
        uVar10 = *(undefined4 *)((long)plVar11 + 0x174);
        lVar5 = plVar11[0x3a];
        FUN_00c08c64(lVar6,0x26,(int)plVar11[0x29]);
        FUN_00c08c64(lVar6,0x29,*(undefined4 *)((long)plVar11 + 0x16c));
        FUN_00c08c64(lVar6,0x49,(int)plVar11[0x2e]);
        FUN_00c08c64(lVar6,0x4d,(int)plVar11[0x23]);
        FUN_00c08c64(lVar6,0x52,*(undefined4 *)((long)plVar11 + 0x124));
        FUN_00c08c64(lVar6,0x54,(int)dVar12);
        FUN_00c08c64(lVar6,0x57,(int)plVar11[0x27]);
        FUN_00c08c64(lVar6,0x5a,(int)plVar11[0x24]);
        FUN_00c08c64(lVar6,0x69,(int)lVar4);
        FUN_00c08c64(lVar6,0xe,(int)plVar11[9]);
        FUN_00c08c64(lVar6,0x10,(int)plVar11[3]);
        FUN_00c08c64(lVar6,0x6b,*(undefined4 *)((long)plVar11 + 0x11c));
        FUN_00c08c64(lVar6,0xb,uVar10);
        FUN_00c08c64(lVar6,0x5c,(int)lVar5);
        FUN_00c08a34(lVar6,0xd,&DAT_00199d61);
        uVar7 = FUN_00659d60(plVar11 + 0x35);
        FUN_00c08a34(lVar6,0x37,uVar7);
      }
      if ((plVar11[0x12] != plVar11[0x13]) &&
         (lVar6 = FUN_00c01494(param_2,0,uVar9,&local_90,&local_98,0), lVar6 != 0)) {
        if (plVar11[0x13] == plVar11[0x12]) {
LAB_00c062d4:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
        *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(plVar11[0x12] + 8);
      }
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      plVar11 = plVar11 + 0x40;
    } while (plVar11 != plVar1);
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 8))();
  }
  return;
}


// ===== 00c062e8  FUN_00c062e8 =====

undefined8 FUN_00c062e8(void)

{
  return 0;
}


// ===== 00c062f4  FUN_00c062f4 =====

long * FUN_00c062f4(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1 == param_2) {
    return param_1;
  }
  FUN_00c06464(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 9);
  FUN_00c06464(param_1 + 3,param_2[3],param_2[4],param_2[4] - param_2[3] >> 9);
  FUN_00c067fc(param_1 + 6,param_2[6],param_2[7],(param_2[7] - param_2[6] >> 4) * -0x505050505050505
              );
  if (param_1[0xb] == 0) {
    lVar2 = FUN_00c05714(param_1 + 9,param_2[10],param_1 + 9);
    plVar3 = param_1 + 10;
    *plVar3 = lVar2;
    if (lVar2 != 0) {
      *(long **)(lVar2 + 0x10) = plVar3;
      plVar1 = (long *)*plVar3;
      goto joined_r0x00c063b8;
    }
  }
  else {
    plVar1 = (long *)FUN_00c05610(param_1 + 9,param_1[10],param_2[10],0,param_1 + 9);
    param_1[10] = (long)plVar1;
joined_r0x00c063b8:
    if (plVar1 == (long *)0x0) {
      plVar3 = param_1 + 10;
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  param_1[9] = (long)plVar3;
  param_1[0xb] = param_2[0xb];
  if (param_1[0xe] == 0) {
    lVar2 = FUN_00c05714(param_1 + 0xc,param_2[0xd],param_1 + 0xc);
    plVar3 = param_1 + 0xd;
    *plVar3 = lVar2;
    if (lVar2 == 0) goto LAB_00c06444;
    *(long **)(lVar2 + 0x10) = plVar3;
    plVar1 = (long *)*plVar3;
  }
  else {
    plVar1 = (long *)FUN_00c05610(param_1 + 0xc,param_1[0xd],param_2[0xd],0,param_1 + 0xc);
    param_1[0xd] = (long)plVar1;
  }
  if (plVar1 == (long *)0x0) {
    plVar3 = param_1 + 0xd;
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
LAB_00c06444:
  param_1[0xc] = (long)plVar3;
  param_1[0xe] = param_2[0xe];
  return param_1;
}


// ===== 00c06464  FUN_00c06464 =====

undefined8 * FUN_00c06464(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  
  uVar9 = param_1[2];
  puVar10 = (undefined8 *)*param_1;
  if (param_4 <= (ulong)((long)(uVar9 - (long)puVar10) >> 9)) {
    puVar11 = (undefined8 *)param_1[1];
    lVar7 = (long)puVar11 - (long)puVar10;
    if ((ulong)(lVar7 >> 9) < param_4) {
      puVar5 = param_1;
      lVar1 = param_2;
      puVar4 = puVar11;
      if (puVar11 != puVar10) {
        lVar1 = param_2 + lVar7;
        do {
          puVar5 = (undefined8 *)FUN_00c06688(puVar10,param_2);
          lVar7 = lVar7 + -0x200;
          param_2 = param_2 + 0x200;
          puVar10 = puVar10 + 0x40;
        } while (lVar7 != 0);
        puVar11 = (undefined8 *)param_1[1];
        puVar4 = puVar11;
      }
      while( true ) {
        if (lVar1 == param_3) {
          param_1[1] = puVar4;
          return puVar5;
        }
        if (puVar11 == (undefined8 *)0x0) break;
        puVar5 = (undefined8 *)FUN_00b7aabc(puVar11,lVar1);
        puVar11 = puVar11 + 0x40;
        lVar1 = lVar1 + 0x200;
        puVar4 = puVar4 + 0x40;
      }
LAB_00c0665c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar5 = param_1;
    if (param_2 != param_3) {
      do {
        puVar5 = (undefined8 *)FUN_00c06688(puVar10,param_2);
        param_2 = param_2 + 0x200;
        puVar10 = puVar10 + 0x40;
      } while (param_2 != param_3);
      puVar11 = (undefined8 *)param_1[1];
    }
    while (puVar10 != puVar11) {
      puVar11 = puVar11 + -0x40;
      if (puVar11 == (undefined8 *)0x0) goto LAB_00c06670;
      puVar5 = (undefined8 *)FUN_0088ae28(puVar11);
    }
LAB_00c0663c:
    param_1[1] = puVar10;
    return puVar5;
  }
  if (puVar10 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)param_1[1];
    puVar5 = puVar10;
    if (puVar10 != puVar11) {
      do {
        puVar11 = puVar11 + -0x40;
        if (puVar11 == (undefined8 *)0x0) {
LAB_00c06670:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_0088ae28(puVar11);
      } while (puVar11 != puVar10);
      puVar5 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar10;
    operator_delete(puVar5);
    uVar9 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 >> 0x37 == 0) {
    uVar2 = (long)uVar9 >> 8;
    if ((ulong)((long)uVar9 >> 8) <= param_4) {
      uVar2 = param_4;
    }
    if (0x7ffffffffffffdff < uVar9) {
      uVar2 = 0x7fffffffffffff;
    }
    if (uVar2 >> 0x37 == 0) {
      puVar5 = (undefined8 *)operator_new(uVar2 * 0x200);
      *param_1 = puVar5;
      param_1[1] = puVar5;
      param_1[2] = puVar5 + uVar2 * 0x40;
      puVar10 = puVar5;
      if (param_2 != param_3) {
        do {
          if (puVar10 == (undefined8 *)0x0) goto LAB_00c0665c;
          puVar5 = (undefined8 *)FUN_00b7aabc(puVar10,param_2);
          param_2 = param_2 + 0x200;
          puVar10 = puVar10 + 0x40;
        } while (param_2 != param_3);
      }
      goto LAB_00c0663c;
    }
  }
  auVar19 = FUN_00b82d24();
  puVar11 = auVar19._8_8_;
  puVar10 = auVar19._0_8_;
  FUN_00c046f4();
  uVar3 = *(undefined1 *)(puVar11 + 0x1b);
  puVar10[0x1a] = puVar11[0x1a];
  *(undefined1 *)(puVar10 + 0x1b) = uVar3;
  if (puVar10 == puVar11) {
    FUN_005e7520(puVar10 + 0x1f,puVar11 + 0x1f);
    uVar17 = puVar11[0x26];
    uVar16 = puVar11[0x25];
    uVar13 = puVar11[0x28];
    uVar12 = puVar11[0x27];
    uVar15 = puVar11[0x24];
    uVar14 = puVar11[0x23];
    puVar10[0x29] = puVar11[0x29];
    puVar10[0x24] = uVar15;
    puVar10[0x23] = uVar14;
    puVar10[0x26] = uVar17;
    puVar10[0x25] = uVar16;
    puVar10[0x28] = uVar13;
    puVar10[0x27] = uVar12;
    goto LAB_00c067ac;
  }
  FUN_0088e978(puVar10 + 0x1c,puVar11[0x1c],puVar11[0x1d],
               ((long)(puVar11[0x1d] - puVar11[0x1c]) >> 4) * -0x5555555555555555);
  FUN_005e7520(puVar10 + 0x1f,puVar11 + 0x1f);
  uVar17 = puVar11[0x26];
  uVar16 = puVar11[0x25];
  uVar13 = puVar11[0x28];
  uVar12 = puVar11[0x27];
  uVar15 = puVar11[0x24];
  uVar14 = puVar11[0x23];
  puVar10[0x29] = puVar11[0x29];
  puVar10[0x24] = uVar15;
  puVar10[0x23] = uVar14;
  puVar10[0x26] = uVar17;
  puVar10[0x25] = uVar16;
  puVar10[0x28] = uVar13;
  puVar10[0x27] = uVar12;
  if (puVar10[0x2c] == 0) {
    lVar7 = FUN_0061b1ec(puVar10 + 0x2a,puVar11[0x2b],puVar10 + 0x2a);
    plVar8 = puVar10 + 0x2b;
    puVar10[0x2b] = lVar7;
    if (lVar7 != 0) {
      *(long **)(lVar7 + 0x10) = plVar8;
      plVar6 = (long *)*plVar8;
      goto joined_r0x00c06788;
    }
  }
  else {
    plVar6 = (long *)FUN_0061b0f4(puVar10 + 0x2a,puVar10[0x2b],puVar11[0x2b],0,puVar10 + 0x2a);
    puVar10[0x2b] = plVar6;
joined_r0x00c06788:
    if (plVar6 == (long *)0x0) {
      plVar8 = puVar10 + 0x2b;
    }
    else {
      do {
        plVar8 = plVar6;
        plVar6 = (long *)*plVar8;
      } while ((long *)*plVar8 != (long *)0x0);
    }
  }
  puVar10[0x2a] = plVar8;
  puVar10[0x2c] = puVar11[0x2c];
LAB_00c067ac:
  uVar14 = puVar11[0x31];
  uVar13 = puVar11[0x34];
  uVar12 = puVar11[0x33];
  uVar16 = puVar11[0x2e];
  uVar15 = puVar11[0x2d];
  uVar18 = puVar11[0x30];
  uVar17 = puVar11[0x2f];
  puVar10[0x32] = puVar11[0x32];
  puVar10[0x31] = uVar14;
  puVar10[0x34] = uVar13;
  puVar10[0x33] = uVar12;
  puVar10[0x2e] = uVar16;
  puVar10[0x2d] = uVar15;
  puVar10[0x30] = uVar18;
  puVar10[0x2f] = uVar17;
  uVar15 = puVar11[0x38];
  uVar14 = puVar11[0x37];
  uVar13 = puVar11[0x3a];
  uVar12 = puVar11[0x39];
  uVar16 = puVar11[0x35];
  puVar10[0x36] = puVar11[0x36];
  puVar10[0x35] = uVar16;
  puVar10[0x38] = uVar15;
  puVar10[0x37] = uVar14;
  puVar10[0x3a] = uVar13;
  puVar10[0x39] = uVar12;
  FUN_005e7520(puVar10 + 0x3b,puVar11 + 0x3b);
  *(undefined4 *)(puVar10 + 0x3f) = *(undefined4 *)(puVar11 + 0x3f);
  return puVar10;
}


// ===== 00c06688  FUN_00c06688 =====

long FUN_00c06688(long param_1,long param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  FUN_00c046f4();
  uVar1 = *(undefined1 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined1 *)(param_1 + 0xd8) = uVar1;
  if (param_1 == param_2) {
    FUN_005e7520(param_1 + 0xf8,param_2 + 0xf8);
    uVar10 = *(undefined8 *)(param_2 + 0x130);
    uVar9 = *(undefined8 *)(param_2 + 0x128);
    uVar6 = *(undefined8 *)(param_2 + 0x140);
    uVar5 = *(undefined8 *)(param_2 + 0x138);
    uVar8 = *(undefined8 *)(param_2 + 0x120);
    uVar7 = *(undefined8 *)(param_2 + 0x118);
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
    *(undefined8 *)(param_1 + 0x120) = uVar8;
    *(undefined8 *)(param_1 + 0x118) = uVar7;
    *(undefined8 *)(param_1 + 0x130) = uVar10;
    *(undefined8 *)(param_1 + 0x128) = uVar9;
    *(undefined8 *)(param_1 + 0x140) = uVar6;
    *(undefined8 *)(param_1 + 0x138) = uVar5;
    goto LAB_00c067ac;
  }
  FUN_0088e978(param_1 + 0xe0,*(long *)(param_2 + 0xe0),*(long *)(param_2 + 0xe8),
               (*(long *)(param_2 + 0xe8) - *(long *)(param_2 + 0xe0) >> 4) * -0x5555555555555555);
  FUN_005e7520(param_1 + 0xf8,param_2 + 0xf8);
  uVar10 = *(undefined8 *)(param_2 + 0x130);
  uVar9 = *(undefined8 *)(param_2 + 0x128);
  uVar6 = *(undefined8 *)(param_2 + 0x140);
  uVar5 = *(undefined8 *)(param_2 + 0x138);
  uVar8 = *(undefined8 *)(param_2 + 0x120);
  uVar7 = *(undefined8 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x120) = uVar8;
  *(undefined8 *)(param_1 + 0x118) = uVar7;
  *(undefined8 *)(param_1 + 0x130) = uVar10;
  *(undefined8 *)(param_1 + 0x128) = uVar9;
  *(undefined8 *)(param_1 + 0x140) = uVar6;
  *(undefined8 *)(param_1 + 0x138) = uVar5;
  if (*(long *)(param_1 + 0x160) == 0) {
    lVar3 = FUN_0061b1ec(param_1 + 0x150,*(undefined8 *)(param_2 + 0x158),param_1 + 0x150);
    plVar4 = (long *)(param_1 + 0x158);
    *(long *)(param_1 + 0x158) = lVar3;
    if (lVar3 != 0) {
      *(long **)(lVar3 + 0x10) = plVar4;
      plVar2 = (long *)*plVar4;
      goto joined_r0x00c06788;
    }
  }
  else {
    plVar2 = (long *)FUN_0061b0f4(param_1 + 0x150,*(undefined8 *)(param_1 + 0x158),
                                  *(undefined8 *)(param_2 + 0x158),0,param_1 + 0x150);
    *(long **)(param_1 + 0x158) = plVar2;
joined_r0x00c06788:
    if (plVar2 == (long *)0x0) {
      plVar4 = (long *)(param_1 + 0x158);
    }
    else {
      do {
        plVar4 = plVar2;
        plVar2 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  *(long **)(param_1 + 0x150) = plVar4;
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
LAB_00c067ac:
  uVar7 = *(undefined8 *)(param_2 + 0x188);
  uVar6 = *(undefined8 *)(param_2 + 0x1a0);
  uVar5 = *(undefined8 *)(param_2 + 0x198);
  uVar9 = *(undefined8 *)(param_2 + 0x170);
  uVar8 = *(undefined8 *)(param_2 + 0x168);
  uVar11 = *(undefined8 *)(param_2 + 0x180);
  uVar10 = *(undefined8 *)(param_2 + 0x178);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_2 + 400);
  *(undefined8 *)(param_1 + 0x188) = uVar7;
  *(undefined8 *)(param_1 + 0x1a0) = uVar6;
  *(undefined8 *)(param_1 + 0x198) = uVar5;
  *(undefined8 *)(param_1 + 0x170) = uVar9;
  *(undefined8 *)(param_1 + 0x168) = uVar8;
  *(undefined8 *)(param_1 + 0x180) = uVar11;
  *(undefined8 *)(param_1 + 0x178) = uVar10;
  uVar8 = *(undefined8 *)(param_2 + 0x1c0);
  uVar7 = *(undefined8 *)(param_2 + 0x1b8);
  uVar6 = *(undefined8 *)(param_2 + 0x1d0);
  uVar5 = *(undefined8 *)(param_2 + 0x1c8);
  uVar9 = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_2 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar9;
  *(undefined8 *)(param_1 + 0x1c0) = uVar8;
  *(undefined8 *)(param_1 + 0x1b8) = uVar7;
  *(undefined8 *)(param_1 + 0x1d0) = uVar6;
  *(undefined8 *)(param_1 + 0x1c8) = uVar5;
  FUN_005e7520(param_1 + 0x1d8,param_2 + 0x1d8);
  *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0x1f8);
  return param_1;
}


// ===== 00c067fc  FUN_00c067fc =====

void FUN_00c067fc(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  void *pvVar6;
  
  lVar3 = param_1[2];
  pvVar5 = (void *)*param_1;
  if (param_4 <= (ulong)((lVar3 - (long)pvVar5 >> 4) * -0x505050505050505)) {
    pvVar6 = (void *)param_1[1];
    lVar3 = (long)pvVar6 - (long)pvVar5;
    if ((ulong)((lVar3 >> 4) * -0x505050505050505) < param_4) {
      lVar1 = param_2;
      pvVar2 = pvVar6;
      if (pvVar6 != pvVar5) {
        lVar1 = param_2 + lVar3;
        do {
          FUN_00c06a64(pvVar5,param_2);
          lVar3 = lVar3 + -0x330;
          param_2 = param_2 + 0x330;
          pvVar5 = (void *)((long)pvVar5 + 0x330);
        } while (lVar3 != 0);
        pvVar6 = (void *)param_1[1];
        pvVar2 = pvVar6;
      }
      while( true ) {
        if (lVar1 == param_3) {
          param_1[1] = pvVar2;
          return;
        }
        if (pvVar6 == (void *)0x0) break;
        FUN_00b84f10(pvVar6,lVar1);
        pvVar6 = (void *)((long)pvVar6 + 0x330);
        lVar1 = lVar1 + 0x330;
        pvVar2 = (void *)((long)pvVar2 + 0x330);
      }
LAB_00c06a38:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    if (param_2 != param_3) {
      do {
        FUN_00c06a64(pvVar5,param_2);
        param_2 = param_2 + 0x330;
        pvVar5 = (void *)((long)pvVar5 + 0x330);
      } while (param_2 != param_3);
      pvVar6 = (void *)param_1[1];
    }
    while (pvVar5 != pvVar6) {
      pvVar6 = (void *)((long)pvVar6 + -0x330);
      if (pvVar6 == (void *)0x0) goto LAB_00c06a4c;
      FUN_0088b060(pvVar6);
    }
LAB_00c06a18:
    param_1[1] = pvVar5;
    return;
  }
  if (pvVar5 != (void *)0x0) {
    pvVar6 = (void *)param_1[1];
    pvVar2 = pvVar5;
    if (pvVar5 != pvVar6) {
      do {
        pvVar6 = (void *)((long)pvVar6 + -0x330);
        if (pvVar6 == (void *)0x0) {
LAB_00c06a4c:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_0088b060(pvVar6);
      } while (pvVar6 != pvVar5);
      pvVar2 = (void *)*param_1;
    }
    param_1[1] = pvVar5;
    operator_delete(pvVar2);
    lVar3 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 < 0x50505050505051) {
    uVar4 = (lVar3 >> 4) * -0xa0a0a0a0a0a0a0a;
    if (uVar4 < param_4 || uVar4 - param_4 == 0) {
      uVar4 = param_4;
    }
    if (0x28282828282827 < (ulong)((lVar3 >> 4) * -0x505050505050505)) {
      uVar4 = 0x50505050505050;
    }
    if (uVar4 < 0x50505050505051) {
      pvVar5 = operator_new(uVar4 * 0x330);
      *param_1 = pvVar5;
      param_1[1] = pvVar5;
      param_1[2] = (void *)((long)pvVar5 + uVar4 * 0x330);
      if (param_2 != param_3) {
        do {
          if (pvVar5 == (void *)0x0) goto LAB_00c06a38;
          FUN_00b84f10(pvVar5,param_2);
          param_2 = param_2 + 0x330;
          pvVar5 = (void *)((long)pvVar5 + 0x330);
        } while (param_2 != param_3);
      }
      goto LAB_00c06a18;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00b852e8();
}


// ===== 00c06a64  FUN_00c06a64 =====

undefined8 * FUN_00c06a64(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar7 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  uVar9 = param_2[1];
  uVar8 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[1] = uVar9;
  *param_1 = uVar8;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar7 = param_2[0xc];
  uVar6 = param_2[0xf];
  uVar5 = param_2[0xe];
  uVar9 = param_2[9];
  uVar8 = param_2[8];
  uVar11 = param_2[0xb];
  uVar10 = param_2[10];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar7;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  param_1[9] = uVar9;
  param_1[8] = uVar8;
  param_1[0xb] = uVar11;
  param_1[10] = uVar10;
  uVar6 = param_2[0x11];
  uVar5 = param_2[0x10];
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  param_1[0x11] = uVar6;
  param_1[0x10] = uVar5;
  if (param_1 == param_2) {
    uVar2 = *(undefined4 *)(param_2 + 0x16);
    *(undefined1 *)((long)param_1 + 0xb4) = *(undefined1 *)((long)param_2 + 0xb4);
    *(undefined4 *)(param_1 + 0x16) = uVar2;
    uVar7 = param_2[0x29];
    uVar6 = param_2[0x2c];
    uVar5 = param_2[0x2b];
    uVar11 = param_2[0x26];
    uVar10 = param_2[0x25];
    uVar9 = param_2[0x28];
    uVar8 = param_2[0x27];
    param_1[0x2a] = param_2[0x2a];
    param_1[0x29] = uVar7;
    param_1[0x2c] = uVar6;
    param_1[0x2b] = uVar5;
    param_1[0x26] = uVar11;
    param_1[0x25] = uVar10;
    param_1[0x28] = uVar9;
    param_1[0x27] = uVar8;
    uVar5 = param_2[0x2d];
    uVar7 = *(undefined8 *)((long)param_2 + 0x17c);
    uVar6 = *(undefined8 *)((long)param_2 + 0x174);
    param_1[0x2e] = param_2[0x2e];
    param_1[0x2d] = uVar5;
    *(undefined8 *)((long)param_1 + 0x17c) = uVar7;
    *(undefined8 *)((long)param_1 + 0x174) = uVar6;
    uVar8 = param_2[0x22];
    uVar7 = param_2[0x21];
    uVar6 = param_2[0x24];
    uVar5 = param_2[0x23];
    uVar9 = param_2[0x1d];
    uVar11 = param_2[0x20];
    uVar10 = param_2[0x1f];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1d] = uVar9;
    param_1[0x22] = uVar8;
    param_1[0x21] = uVar7;
    param_1[0x24] = uVar6;
    param_1[0x23] = uVar5;
    param_1[0x20] = uVar11;
    param_1[0x1f] = uVar10;
  }
  else {
    bVar3 = *(byte *)((long)param_2 + 0xaf);
    if (*(char *)((long)param_1 + 0xaf) < '\0') {
      uVar1 = param_2[0x14];
      puVar4 = (undefined8 *)param_2[0x13];
      if (-1 < (char)bVar3) {
        uVar1 = (ulong)bVar3;
        puVar4 = param_2 + 0x13;
      }
      FUN_00547f08(param_1 + 0x13,puVar4,uVar1);
    }
    else if ((char)bVar3 < '\0') {
      FUN_00547fc0(param_1 + 0x13,param_2[0x13],param_2[0x14]);
    }
    else {
      uVar6 = param_2[0x14];
      uVar5 = param_2[0x13];
      param_1[0x15] = param_2[0x15];
      param_1[0x14] = uVar6;
      param_1[0x13] = uVar5;
    }
    uVar2 = *(undefined4 *)(param_2 + 0x16);
    *(undefined1 *)((long)param_1 + 0xb4) = *(undefined1 *)((long)param_2 + 0xb4);
    *(undefined4 *)(param_1 + 0x16) = uVar2;
    FUN_00c04a2c(param_1 + 0x17,param_2[0x17],param_2[0x18],
                 (long)(param_2[0x18] - param_2[0x17]) >> 4);
    FUN_00c04804(param_1 + 0x1a,param_2[0x1a],param_2[0x1b],
                 (long)(param_2[0x1b] - param_2[0x1a]) >> 4);
    uVar5 = param_2[0x1f];
    uVar7 = param_2[0x1e];
    uVar6 = param_2[0x1d];
    uVar9 = param_2[0x22];
    uVar8 = param_2[0x21];
    uVar11 = param_2[0x24];
    uVar10 = param_2[0x23];
    param_1[0x20] = param_2[0x20];
    param_1[0x1f] = uVar5;
    param_1[0x1e] = uVar7;
    param_1[0x1d] = uVar6;
    param_1[0x22] = uVar9;
    param_1[0x21] = uVar8;
    param_1[0x24] = uVar11;
    param_1[0x23] = uVar10;
    uVar7 = param_2[0x29];
    uVar6 = param_2[0x2c];
    uVar5 = param_2[0x2b];
    uVar9 = param_2[0x26];
    uVar8 = param_2[0x25];
    uVar11 = param_2[0x28];
    uVar10 = param_2[0x27];
    param_1[0x2a] = param_2[0x2a];
    param_1[0x29] = uVar7;
    param_1[0x2c] = uVar6;
    param_1[0x2b] = uVar5;
    param_1[0x26] = uVar9;
    param_1[0x25] = uVar8;
    param_1[0x28] = uVar11;
    param_1[0x27] = uVar10;
    uVar5 = *(undefined8 *)((long)param_2 + 0x174);
    uVar7 = param_2[0x2e];
    uVar6 = param_2[0x2d];
    *(undefined8 *)((long)param_1 + 0x17c) = *(undefined8 *)((long)param_2 + 0x17c);
    *(undefined8 *)((long)param_1 + 0x174) = uVar5;
    param_1[0x2e] = uVar7;
    param_1[0x2d] = uVar6;
    FUN_0088e978(param_1 + 0x31,param_2[0x31],param_2[0x32],
                 ((long)(param_2[0x32] - param_2[0x31]) >> 4) * -0x5555555555555555);
  }
  FUN_005e7520(param_1 + 0x34,param_2 + 0x34);
  memcpy(param_1 + 0x38,param_2 + 0x38,0x169);
  return param_1;
}


// ===== 00c06c24  FUN_00c06c24 =====

void FUN_00c06c24(char *param_1,undefined8 *param_2,char *param_3)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  char *__dest;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_005478d8(param_1,*param_2,param_2[1]);
      return;
    }
    uVar4 = *param_2;
    uVar3 = param_2[2];
    *(undefined8 *)(param_1 + 8) = param_2[1];
    *(undefined8 *)param_1 = uVar4;
    *(undefined8 *)(param_1 + 0x10) = uVar3;
  }
  else {
    if (param_3 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string:1063: libc++ Hardening assertion __s != nullptr failed: basic_string(const char*) detected nullptr\n"
                );
    }
    __n = strlen(param_3);
    if (0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
      FUN_005d45ec();
    }
    if (__n < 0x17) {
      param_1[0x17] = (char)__n;
      __dest = param_1;
    }
    else {
      uVar1 = (__n & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      __dest = (char *)operator_new(uVar2);
      *(char **)param_1 = __dest;
      *(size_t *)(param_1 + 8) = __n;
      *(ulong *)(param_1 + 0x10) = uVar2 | 0x8000000000000000;
    }
    if (__dest + __n < __dest) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((__dest <= param_3) && (param_3 < __dest + __n)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memcpy(__dest,param_3,__n);
    __dest[__n] = '\0';
  }
  return;
}


// ===== 00c06d64  FUN_00c06d64 =====

void FUN_00c06d64(undefined8 *param_1)

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
  long *plVar8;
  undefined8 *puVar9;
  
  plVar8 = (long *)param_1[2];
  puVar7 = (undefined8 *)(plVar8[1] - *plVar8);
  uVar1 = ((long)puVar7 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_00c06e6c();
LAB_00c06e68:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  puVar9 = (undefined8 *)param_1[1];
  uVar4 = plVar8[2] - *plVar8;
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
    if (uVar6 >> 0x3d != 0) goto LAB_00c06e68;
    pvVar2 = operator_new(uVar6 << 3);
    puVar7 = (undefined8 *)((long)pvVar2 + (long)puVar7);
  }
  if (puVar7 != (undefined8 *)0x0) {
    uVar5 = *puVar9;
    *puVar9 = 0;
    *puVar7 = uVar5;
    __n = plVar8[1] - *plVar8;
    __dest = (void *)((long)puVar7 - __n);
    memcpy(__dest,(void *)*plVar8,__n);
    pvVar3 = (void *)*plVar8;
    *plVar8 = (long)__dest;
    plVar8[1] = (long)(puVar7 + 1);
    plVar8[2] = (long)((long)pvVar2 + uVar6 * 8);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    *(undefined8 **)*param_1 = puVar7 + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c06e6c  FUN_00c06e6c =====

void FUN_00c06e6c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c06e84  FUN_00c06e84 =====

void FUN_00c06e84(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00c06e84(param_1,*param_2);
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


// ===== 00c06f18  FUN_00c06f18 =====

undefined1  [16]
FUN_00c06f18(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

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
          goto LAB_00c0704c;
        }
        if (uVar2 <= uVar1) goto LAB_00c06f60;
LAB_00c06fb0:
        plVar6 = (long *)*plVar4;
        plVar10 = plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_00c06fcc;
      }
      if (iVar3 < 0) goto LAB_00c06fb0;
LAB_00c06f60:
      plVar6 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar10 = plVar4 + 1;
  }
LAB_00c06fcc:
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
LAB_00c0704c:
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


// ===== 00c07088  FUN_00c07088 =====

void FUN_00c07088(undefined1 (*param_1) [16],undefined8 *param_2,undefined8 *param_3,
                 undefined8 *param_4)

{
  size_t __n;
  size_t sVar1;
  undefined8 *__s2;
  undefined8 *__s1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  ulong *local_50;
  undefined8 *puStack_48;
  
  puVar5 = (ulong *)*param_2;
  *(undefined1 **)(*param_1 + 8) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)*param_1 = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  if (*puVar5 < 2) {
    if (0x1ffff < puVar5[1]) {
      puVar6 = (undefined8 *)puVar5[3];
      bVar2 = *(byte *)((long)param_3 + 0x17);
      bVar3 = *(byte *)((long)puVar6 + 0x17);
      __n = puVar6[1];
      if (-1 < (char)bVar3) {
        __n = (ulong)bVar3;
      }
      sVar1 = param_3[1];
      if (-1 < (char)bVar2) {
        sVar1 = (ulong)bVar2;
      }
      if (__n == sVar1) {
        __s2 = (undefined8 *)*param_3;
        if (-1 < (char)bVar2) {
          __s2 = param_3;
        }
        __s1 = (undefined8 *)*puVar6;
        if (-1 < (char)bVar3) {
          __s1 = puVar6;
        }
        iVar4 = memcmp(__s1,__s2,__n);
        if (iVar4 == 0) {
          param_1[1][0] = 0;
          *(undefined1 **)*param_1 = &DAT_002085f4;
          *(undefined8 **)(*param_1 + 8) = puVar6;
          return;
        }
      }
    }
    local_50 = puVar5;
    puStack_48 = param_3;
    auVar9 = FUN_0070fe5c(puVar5,&DAT_00d49cc8,&local_50,FUN_00c075d8);
    puVar6 = auVar9._8_8_;
    *param_1 = auVar9;
    param_1[1][0] = 1;
  }
  else {
    FUN_00c071f0(param_1,puVar5,param_3);
    if (param_1[1][0] != '\x01') {
      return;
    }
    puVar6 = *(undefined8 **)(*param_1 + 8);
  }
  if (puVar6 != (undefined8 *)0x0) {
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      FUN_005478d8(puVar6,*param_4,param_4[1]);
    }
    else {
      uVar8 = param_4[1];
      uVar7 = *param_4;
      puVar6[2] = param_4[2];
      puVar6[1] = uVar8;
      *puVar6 = uVar7;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c071f0  FUN_00c071f0 =====

void FUN_00c071f0(long *param_1,ulong *param_2,undefined8 *param_3)

{
  size_t sVar1;
  undefined8 *__s1;
  byte bVar2;
  undefined8 *puVar3;
  size_t __n;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined1 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  
  Hint_Prefetch(param_2[2],0,2,0);
  uVar13 = param_3[1];
  puVar3 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar13 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar3 = param_3;
  }
  uVar5 = FUN_006df52c((long)(short)param_2[1],puVar3,uVar13);
  uVar13 = param_2[2];
  uVar14 = param_2[3];
  uVar11 = *param_2;
  bVar10 = (byte)(uVar5 >> 0x39);
  lVar6 = 0;
  uVar12 = uVar5;
  __n = param_3[1];
  puVar3 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    __n = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar3 = param_3;
  }
  do {
    uVar12 = uVar12 & uVar11;
    uVar8 = uVar12 * 0x18;
    Hint_Prefetch(uVar14 + uVar8,0,0,0);
    uVar17 = *(undefined8 *)(uVar13 + uVar12);
    uVar15 = NEON_cmeq(uVar17,CONCAT17(bVar10,CONCAT16(bVar10,CONCAT15(bVar10,CONCAT14(bVar10,
                                                  CONCAT13(bVar10,CONCAT12(bVar10,CONCAT11(bVar10,
                                                  bVar10))))))),1);
    while (uVar15 != 0) {
      uVar8 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar12 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar11;
      puVar9 = (undefined8 *)(uVar14 + uVar8 * 0x18);
      bVar2 = *(byte *)((long)puVar9 + 0x17);
      sVar1 = puVar9[1];
      if (-1 < (char)bVar2) {
        sVar1 = (ulong)bVar2;
      }
      if (sVar1 == __n) {
        __s1 = (undefined8 *)*puVar9;
        if (-1 < (char)bVar2) {
          __s1 = puVar9;
        }
        iVar4 = memcmp(__s1,puVar3,__n);
        if (iVar4 == 0) {
          uVar7 = 0;
          goto LAB_00c07354;
        }
      }
      uVar8 = uVar15 & 0x8080808080808080;
      uVar15 = uVar8 - 1 & uVar8;
    }
    lVar16 = NEON_cmeq(uVar17,0x8080808080808080,1);
    if (lVar16 != 0) {
      uVar8 = FUN_0071028c(uVar8,param_2,&DAT_00d49cc8,uVar5,lVar16,uVar12);
      uVar13 = param_2[2];
      uVar14 = param_2[3];
      uVar7 = 1;
LAB_00c07354:
      *param_1 = uVar13 + uVar8;
      param_1[1] = uVar14 + uVar8 * 0x18;
      *(undefined1 *)(param_1 + 2) = uVar7;
      return;
    }
    lVar6 = lVar6 + 8;
    uVar12 = lVar6 + uVar12;
  } while( true );
}


// ===== 00c07398  FUN_00c07398 =====

void FUN_00c07398(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  FUN_006df52c(param_3,puVar2,uVar1);
  return;
}


// ===== 00c073bc  FUN_00c073bc =====

void FUN_00c073bc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_4 != 0) {
    do {
      if (param_2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar2 = param_3[1];
      uVar1 = *param_3;
      param_2[2] = param_3[2];
      param_2[1] = uVar2;
      *param_2 = uVar1;
      param_3[1] = 0;
      param_3[2] = 0;
      *param_3 = 0;
      if (param_3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 3;
      param_2 = param_2 + 3;
    } while (param_4 != 0);
  }
  return;
}


// ===== 00c0742c  FUN_00c0742c =====

void FUN_00c0742c(ulong *param_1,long param_2,long param_3,undefined8 param_4,code *param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  uVar10 = *param_1;
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar9 = 0;
  uVar6 = uVar10 >> 1;
  do {
    uVar4 = *(ulong *)(param_2 + uVar9);
    *(undefined8 *)(uVar1 + uVar9) = 0x8080808080808080;
    *(undefined8 *)((long)(uVar1 + uVar9) + uVar6 + 1) = 0x8080808080808080;
    uVar4 = uVar4 & 0x8080808080808080;
    if (uVar4 != 0x8080808080808080) {
      uVar4 = uVar4 ^ 0x8080808080808080;
      do {
        uVar3 = (uVar4 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar4 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar9 | (ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3;
        puVar7 = (undefined8 *)(param_3 + uVar8 * 0x18);
        uVar3 = puVar7[1];
        puVar5 = (undefined8 *)*puVar7;
        if (-1 < (char)*(byte *)((long)puVar7 + 0x17)) {
          uVar3 = (ulong)*(byte *)((long)puVar7 + 0x17);
          puVar5 = puVar7;
        }
        uVar3 = FUN_006df52c((long)(short)param_1[1],puVar5,uVar3);
        if ((uVar6 & 0x7ffffffffffffff8 & uVar8 - uVar3) == 0) {
          uVar8 = (uVar8 - uVar3 & 7) + uVar3 & uVar10;
LAB_00c07510:
          puVar5 = (undefined8 *)(uVar2 + uVar8 * 0x18);
          *(byte *)(uVar1 + uVar8) = (byte)(uVar3 >> 0x39);
          if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          uVar13 = puVar7[1];
          uVar11 = *puVar7;
          puVar5[2] = puVar7[2];
          puVar5[1] = uVar13;
          *puVar5 = uVar11;
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        else {
          if ((uVar3 & uVar6) < uVar8) {
            uVar12 = NEON_cmlt(*(undefined8 *)(uVar1 + (uVar3 & uVar10)),0,1);
            if (uVar12 != 0) {
              uVar8 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
              uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
              uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
              uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
              uVar8 = (uVar3 & uVar10) + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3);
              goto LAB_00c07510;
            }
          }
          (*param_5)(param_4,uVar3 >> 0x39,uVar8);
        }
        uVar4 = uVar4 - 1 & uVar4;
      } while (uVar4 != 0);
    }
    uVar9 = uVar9 + 8;
    if (uVar6 <= uVar9) {
      return;
    }
  } while( true );
}


// ===== 00c075d8  FUN_00c075d8 =====

void FUN_00c075d8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  uVar1 = puVar3[1];
  puVar2 = (undefined8 *)*puVar3;
  if (-1 < (char)*(byte *)((long)puVar3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)puVar3 + 0x17);
    puVar2 = puVar3;
  }
  FUN_006df52c(param_2,puVar2,uVar1);
  return;
}


// ===== 00c07604  FUN_00c07604 =====

/* WARNING: Removing unreachable block (ram,0x00c077c8) */

void FUN_00c07604(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong *puVar5;
  long *plVar6;
  long local_108;
  long *plStack_100;
  long local_f8;
  void *local_c0;
  ulong uStack_b8;
  ulong local_b0;
  char local_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  undefined1 local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar5 = (ulong *)param_1[1];
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  uVar4 = puVar5[8];
  FUN_00c09108(&local_80);
  FUN_00c02b58(uVar4,&local_80);
  FUN_00c094e0(&local_108,&local_80);
  plVar6 = (long *)puVar5[9];
  if (plVar6[2] != 0) {
    plVar3 = (long *)plVar6[1];
    plVar2 = *(long **)(*plVar6 + 8);
    *(long **)(*plVar3 + 8) = plVar2;
    *plVar2 = *plVar3;
    plVar6[2] = 0;
    while (plVar3 != plVar6) {
      if ((plVar3 == (long *)0xfffffffffffffff0) || (plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar2 = (long *)plVar3[1];
      operator_delete(plVar3);
      plVar3 = plVar2;
    }
  }
  if (plVar6 == &local_108) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/list:1500: libc++ Hardening assertion this != std::addressof(__c) failed: list::splice(iterator, list) called with this == &list\n"
              );
  }
  if (local_f8 != 0) {
    plVar3 = *(long **)(local_108 + 8);
    *(long **)(*plStack_100 + 8) = plVar3;
    *plVar3 = *plStack_100;
    *(long **)(*plVar6 + 8) = plStack_100;
    *plStack_100 = *plVar6;
    *plVar6 = local_108;
    *(long **)(local_108 + 8) = plVar6;
    plVar6[2] = plVar6[2] + local_f8;
  }
  local_a0 = local_a0 & 0xffffffffffffff00;
  local_88 = (char)puVar5[3] == '\x01';
  if ((bool)local_88) {
    local_90 = puVar5[2];
    uStack_98 = puVar5[1];
    local_a0 = *puVar5;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
  }
  local_c0 = (void *)((ulong)local_c0 & 0xffffffffffffff00);
  local_a8 = (char)puVar5[7] == '\x01';
  if ((bool)local_a8) {
    local_b0 = puVar5[6];
    uStack_b8 = puVar5[5];
    local_c0 = (void *)puVar5[4];
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[4] = 0;
  }
  FUN_00c02310(&local_108,uVar4,puVar5[10],&local_a0,&local_c0);
  if ((local_a8 == '\x01') && ((long)local_b0 < 0)) {
    operator_delete(local_c0);
  }
  FUN_00c09118(&local_80);
  FUN_00c07850(*param_1,&local_108);
  FUN_00c02234(&local_108);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c07850  FUN_00c07850 =====

undefined8 * FUN_00c07850(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *local_28;
  
  pvVar7 = (void *)*param_1;
  if (pvVar7 != (void *)0x0) {
    pvVar5 = (void *)param_1[1];
    pvVar1 = pvVar7;
    if (pvVar7 != pvVar5) {
      do {
        pvVar5 = (void *)((long)pvVar5 + -0x1b8);
        if (pvVar5 == (void *)0x0) goto LAB_00c079b4;
        FUN_00aff0f8(pvVar5);
      } while (pvVar5 != pvVar7);
      pvVar1 = (void *)*param_1;
    }
    param_1[1] = pvVar7;
    operator_delete(pvVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  puVar8 = param_1 + 3;
  pvVar7 = (void *)*puVar8;
  if (pvVar7 != (void *)0x0) {
    pvVar5 = (void *)param_1[4];
    pvVar1 = pvVar7;
    if (pvVar7 != pvVar5) {
      do {
        pvVar5 = (void *)((long)pvVar5 + -0x58);
        if (pvVar5 == (void *)0x0) {
LAB_00c079b4:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_00c03278(pvVar5);
      } while (pvVar5 != pvVar7);
      pvVar1 = (void *)*puVar8;
    }
    param_1[4] = pvVar7;
    operator_delete(pvVar1);
    *puVar8 = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  plVar6 = param_1 + 7;
  local_28 = param_1 + 6;
  FUN_0060b2cc(&local_28,*plVar6);
  param_1[6] = param_2[6];
  plVar2 = param_2 + 7;
  lVar3 = *plVar2;
  *plVar6 = lVar3;
  lVar4 = param_2[8];
  param_1[8] = lVar4;
  if (lVar4 == 0) {
    param_1[6] = plVar6;
  }
  else {
    *(long **)(lVar3 + 0x10) = plVar6;
    param_2[6] = plVar2;
    *plVar2 = 0;
    param_2[8] = 0;
  }
  return param_1;
}


// ===== 00c079c8  FUN_00c079c8 =====

void FUN_00c079c8(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 *puVar4;
  void *pvVar5;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00c079c8(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
LAB_00c07ab8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar5 = (void *)param_2[10];
      puVar4 = (undefined8 *)param_2[1];
      if (pvVar5 != (void *)0x0) {
        pvVar3 = (void *)param_2[0xb];
        pvVar2 = pvVar5;
        if (pvVar5 != pvVar3) {
          do {
            pvVar3 = (void *)((long)pvVar3 + -0xc0);
            if (pvVar3 == (void *)0x0) goto LAB_00c07ab8;
            FUN_00c720b0(pvVar3);
          } while (pvVar3 != pvVar5);
          pvVar2 = (void *)param_2[10];
        }
        param_2[0xb] = pvVar5;
        operator_delete(pvVar2);
      }
      if (*(char *)((long)param_2 + 0x4f) < '\0') {
        operator_delete((void *)param_2[7]);
        cVar1 = *(char *)((long)param_2 + 0x37);
      }
      else {
        cVar1 = *(char *)((long)param_2 + 0x37);
      }
      if (cVar1 < '\0') {
        operator_delete((void *)param_2[4]);
      }
      operator_delete(param_2);
      param_2 = puVar4;
    } while (puVar4 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00c07acc  FUN_00c07acc =====

void FUN_00c07acc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)((long *)*param_1)[1];
  for (puVar2 = *(undefined8 **)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0xe0))((long *)*puVar2,param_1[1]);
  }
  return;
}


// ===== 00c07b24  FUN_00c07b24 =====

undefined1  [16] FUN_00c07b24(undefined8 param_1,long *param_2,undefined8 param_3,uint *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  plVar3 = param_2 + 1;
  plVar6 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, *param_4 < *(uint *)(plVar2 + 4)) {
        plVar1 = (long *)*plVar2;
        plVar6 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_00c07b8c;
      }
      if (*param_4 == *(uint *)(plVar2 + 4)) {
        uVar4 = 0;
        goto LAB_00c07c10;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar6 = plVar2 + 1;
  }
LAB_00c07b8c:
  plVar2 = (long *)operator_new(0x40);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  lVar8 = *(long *)(param_4 + 4);
  lVar7 = *(long *)(param_4 + 2);
  param_4[2] = 0;
  param_4[3] = 0;
  param_4[4] = 0;
  param_4[5] = 0;
  *(uint *)(plVar2 + 4) = *param_4;
  lVar5 = *(long *)(param_4 + 6);
  plVar2[6] = lVar8;
  plVar2[5] = lVar7;
  plVar2[7] = lVar5;
  param_4[6] = 0;
  param_4[7] = 0;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar3;
  *plVar6 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar3 = (long *)*plVar6;
  }
  FUN_005d5b94(param_2[1],plVar3);
  uVar4 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00c07c10:
  auVar9._8_8_ = uVar4;
  auVar9._0_8_ = plVar2;
  return auVar9;
}


// ===== 00c07c40  FUN_00c07c40 =====

/* WARNING: Removing unreachable block (ram,0x00c07e08) */

ulong FUN_00c07c40(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *local_a8;
  void *local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined4 local_88 [2];
  void *local_80;
  undefined8 uStack_78;
  long local_70;
  undefined1 local_64 [4];
  
  local_64[0] = 0xaa;
  FUN_007e0b10(local_64);
  plVar11 = *(long **)*param_1;
  plVar12 = (long *)((long *)*param_1)[1];
  if (plVar11 != plVar12) {
    iVar9 = 0;
    do {
      lVar8 = *(long *)(*plVar11 + 0x10);
      if (*(long *)(lVar8 + 0xf0) != 0) {
        uVar7 = (ulong)iVar9;
        lVar15 = *(long *)param_1[1];
        if ((ulong)(((long *)param_1[1])[1] - lVar15 >> 3) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
        plVar6 = *(long **)(lVar8 + 0x68);
        plVar13 = *(long **)(lVar8 + 0x70);
        iVar9 = iVar9 + 1;
        uVar1 = (long)plVar13 - (long)plVar6;
        if (uVar1 != 0) {
          if ((long)uVar1 < 0) {
            lVar8 = FUN_00bf495c();
            return (ulong)*(uint *)(lVar8 + 8);
          }
          lVar15 = *(long *)(lVar15 + uVar7 * 8);
          plVar4 = (long *)operator_new(uVar1);
          lVar8 = 0;
          plVar2 = plVar4;
          do {
            plVar14 = plVar2;
            lVar10 = lVar8;
            if ((long *)((long)plVar4 + lVar10) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            puVar5 = (undefined8 *)*plVar6;
            *(long *)((long)plVar4 + lVar10) = (long)puVar5;
            if (puVar5 != (undefined8 *)0x0) {
              (**(code **)*puVar5)();
            }
            plVar6 = plVar6 + 1;
            lVar8 = lVar10 + 8;
            plVar2 = plVar14 + 1;
          } while (plVar6 != plVar13);
          if (lVar10 + 8 == 0) {
            if (plVar4 != (long *)0x0) goto LAB_00c07c9c;
          }
          else {
            lVar8 = 0;
            do {
              uVar7 = (**(code **)(**(long **)(*(long *)((long)plVar4 + lVar8) + 0x20) + 0xc0))();
              uVar3 = 0;
              if ((uVar7 & 0x100000000) != 0) {
                uVar3 = (undefined4)uVar7;
              }
              (**(code **)(**(long **)((long)plVar4 + lVar8) + 0x20))
                        (&local_a8,*(long **)((long)plVar4 + lVar8));
              (**(code **)(*local_a8 + 0x28))(&local_a0);
              uStack_78 = uStack_98;
              local_80 = local_a0;
              local_70 = local_90;
              local_a0 = (void *)0x0;
              uStack_98 = 0;
              local_90 = 0;
              local_88[0] = uVar3;
              FUN_00c07b24(0,lVar15 + 0x50,lVar15 + 0x50,local_88);
              if (local_90 < 0) {
                operator_delete(local_a0);
              }
              if (local_a8 != (long *)0x0) {
                (**(code **)(*local_a8 + 8))();
              }
              lVar8 = lVar8 + 8;
            } while (lVar10 + 8 != lVar8);
            if (plVar4 != (long *)0x0) {
              lVar10 = -8 - lVar10;
              do {
                if (plVar14 == (long *)0x0) goto LAB_00c07fc0;
                if ((long *)*plVar14 != (long *)0x0) {
                  (**(code **)(*(long *)*plVar14 + 8))();
                }
                lVar10 = lVar10 + 8;
                plVar14 = plVar14 + -1;
              } while (lVar10 != 0);
LAB_00c07c9c:
              operator_delete(plVar4);
            }
          }
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar12);
  }
  plVar11 = *(long **)param_1[1];
  if (plVar11 != (long *)((undefined8 *)param_1[1])[1]) {
    do {
      plVar12 = (long *)*plVar11;
      uVar7 = (**(code **)(*plVar12 + 0x10))(plVar12);
      if ((uVar7 & 1) == 0) {
        uVar7 = FUN_004249b0();
        if ((uVar7 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e90,"../../pc/legacy_stats_collector.cc",0x2a03,
                       "Failed to get media channel stats for mid=",plVar12 + 1);
        }
        lVar8 = param_1[1];
        plVar12 = *(long **)(lVar8 + 8);
        if (plVar11 == plVar12) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
                    );
        }
        plVar6 = plVar11 + 1;
        if (plVar11 + 1 == plVar12) {
          plVar13 = plVar11;
          if (plVar11 != plVar12) {
LAB_00c07f6c:
            do {
              plVar12 = plVar12 + -1;
              if (plVar12 == (long *)0x0) {
LAB_00c07fc0:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                          );
              }
              plVar6 = (long *)*plVar12;
              *plVar12 = 0;
              if (plVar6 != (long *)0x0) {
                (**(code **)(*plVar6 + 8))();
              }
            } while (plVar12 != plVar13);
          }
        }
        else {
          do {
            plVar13 = plVar6;
            plVar6 = (long *)plVar13[-1];
            plVar13[-1] = *plVar13;
            *plVar13 = 0;
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 8))();
            }
            plVar6 = plVar13 + 1;
          } while (plVar13 + 1 != plVar12);
          plVar12 = *(long **)(lVar8 + 8);
          if (plVar13 != plVar12) goto LAB_00c07f6c;
        }
        *(long **)(lVar8 + 8) = plVar13;
      }
      else {
        plVar11 = plVar11 + 1;
      }
    } while (plVar11 != *(long **)(param_1[1] + 8));
  }
  uVar7 = FUN_007e0b18(local_64);
  return uVar7;
}


// ===== 00c08014  FUN_00c08014 =====

undefined4 FUN_00c08014(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


// ===== 00c08020  FUN_00c08020 =====

bool FUN_00c08020(long param_1,long param_2)

{
  return *(int *)(param_2 + 8) == *(int *)(param_1 + 8);
}


// ===== 00c08038  FUN_00c08038 =====

void FUN_00c08038(long param_1)

{
  long *plVar1;
  
  if (*(int *)(param_1 + 0xc) == 6) {
    plVar1 = *(long **)(param_1 + 0x10);
    if (plVar1 == (long *)0x0) {
      return;
    }
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 8))();
    }
  }
  else {
    if ((*(int *)(param_1 + 0xc) != 3) ||
       (plVar1 = *(long **)(param_1 + 0x10), plVar1 == (long *)0x0)) {
      return;
    }
    if (*(char *)((long)plVar1 + 0x17) < '\0') {
      operator_delete((void *)*plVar1);
    }
  }
  operator_delete(plVar1);
  return;
}


// ===== 00c080cc  FUN_00c080cc =====

bool FUN_00c080cc(long param_1,undefined8 *param_2)

{
  size_t __n;
  ulong uVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  size_t sVar6;
  ulong uVar7;
  char *__s;
  
  if (*(int *)(param_1 + 0xc) == 4) {
    __s = *(char **)(param_1 + 0x10);
    if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string:2071: libc++ Hardening assertion __s != nullptr failed: string::compare(): received nullptr\n"
                );
    }
    sVar6 = strlen(__s);
    uVar7 = (ulong)*(char *)((long)param_2 + 0x17);
    if ((long)uVar7 < 0) {
      if (sVar6 == 0xffffffffffffffff) goto LAB_00c081b4;
      puVar5 = (undefined8 *)*param_2;
      uVar7 = param_2[1];
    }
    else {
      puVar5 = param_2;
      if (sVar6 == 0xffffffffffffffff) {
LAB_00c081b4:
                    /* WARNING: Subroutine does not return */
        FUN_005f5590();
      }
    }
    __n = sVar6;
    if (uVar7 <= sVar6) {
      __n = uVar7;
    }
    iVar3 = memcmp(puVar5,__s,__n);
    bVar2 = uVar7 == sVar6;
  }
  else {
    if (*(int *)(param_1 + 0xc) != 3) {
      return false;
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = (ulong)*(char *)((long)puVar4 + 0x17);
    puVar5 = puVar4;
    if ((long)uVar7 < 0) {
      puVar5 = (undefined8 *)*puVar4;
      uVar7 = puVar4[1];
    }
    puVar4 = (undefined8 *)*param_2;
    uVar1 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      puVar4 = param_2;
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    sVar6 = uVar1;
    if (uVar7 <= uVar1) {
      sVar6 = uVar7;
    }
    iVar3 = memcmp(puVar5,puVar4,sVar6);
    bVar2 = uVar7 == uVar1;
  }
  return bVar2 && iVar3 == 0;
}


// ===== 00c081b8  FUN_00c081b8 =====

bool FUN_00c081b8(long param_1,char *param_2)

{
  size_t __n;
  bool bVar1;
  int iVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *__s1;
  ulong uVar5;
  
  if (*(int *)(param_1 + 0xc) == 4) {
    bVar1 = param_2 == *(char **)(param_1 + 0x10);
  }
  else if (*(int *)(param_1 + 0xc) == 3) {
    if (param_2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string:2071: libc++ Hardening assertion __s != nullptr failed: string::compare(): received nullptr\n"
                );
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    sVar3 = strlen(param_2);
    uVar5 = (ulong)*(char *)((long)puVar4 + 0x17);
    if ((long)uVar5 < 0) {
      if (sVar3 == 0xffffffffffffffff) goto LAB_00c08270;
      __s1 = (undefined8 *)*puVar4;
      uVar5 = puVar4[1];
    }
    else {
      __s1 = puVar4;
      if (sVar3 == 0xffffffffffffffff) {
LAB_00c08270:
                    /* WARNING: Subroutine does not return */
        FUN_005f5590();
      }
    }
    __n = sVar3;
    if (uVar5 <= sVar3) {
      __n = uVar5;
    }
    iVar2 = memcmp(__s1,param_2,__n);
    bVar1 = false;
    if (uVar5 == sVar3) {
      bVar1 = iVar2 == 0;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// ===== 00c08274  FUN_00c08274 =====

undefined8 FUN_00c08274(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 00c08280  FUN_00c08280 =====

undefined * FUN_00c08280(uint *param_1)

{
  if (*param_1 < 0x8d) {
    return &DAT_00258f54 + *(int *)(&DAT_00258f54 + (ulong)*param_1 * 4);
  }
  return (undefined *)0x0;
}


// ===== 00c082ac  FUN_00c082ac =====

void FUN_00c082ac(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  iVar2 = *(int *)(param_2 + 0xc);
  if (iVar2 < 3) {
    if (iVar2 == 0) {
      uVar5 = *(undefined4 *)(param_2 + 0x10);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      FUN_005f55c4(param_1,0x16,uVar5);
      return;
    }
    if (iVar2 == 1) {
      uVar3 = *(undefined8 *)(param_2 + 0x10);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      FUN_005f5410(param_1,0x16,uVar3);
      return;
    }
    if (iVar2 == 2) {
      uVar5 = *(undefined4 *)(param_2 + 0x10);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      FUN_00c09690(uVar5,param_1,0x10);
      return;
    }
  }
  else if (iVar2 < 5) {
    if (iVar2 == 3) {
      puVar4 = *(undefined8 **)(param_2 + 0x10);
      if (-1 < *(char *)((long)puVar4 + 0x17)) {
        uVar6 = puVar4[1];
        uVar3 = *puVar4;
        param_1[2] = puVar4[2];
        param_1[1] = uVar6;
        *param_1 = uVar3;
        return;
      }
      FUN_005478d8(param_1,*puVar4,puVar4[1]);
      return;
    }
    if (iVar2 == 4) {
      FUN_005d3510(param_1,*(undefined8 *)(param_2 + 0x10));
      return;
    }
  }
  else {
    if (iVar2 == 5) {
      pcVar1 = "true";
      if (*(char *)(param_2 + 0x10) == '\0') {
        pcVar1 = "false";
      }
      FUN_005d3510(param_1,pcVar1);
      return;
    }
    if (iVar2 == 6) {
                    /* WARNING: Could not recover jumptable at 0x00c0832c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)**(undefined8 **)(param_2 + 0x10) + 0x20))();
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 00c083bc  FUN_00c083bc =====

void FUN_00c083bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = DAT_001f4f28;
  *puVar2 = &PTR_FUN_00d49d20;
  puVar2[1] = uVar1;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d0f740(1,(long)puVar2 + 0xc);
  }
  *param_1 = puVar2;
  return;
}


// ===== 00c08418  FUN_00c08418 =====

void FUN_00c08418(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  cVar1 = *(char *)((long)param_3 + 0x17);
  *(undefined4 *)(puVar2 + 1) = param_2;
  *puVar2 = &PTR_FUN_00d49db0;
  if (cVar1 < '\0') {
    FUN_005478d8(puVar2 + 2,*param_3,param_3[1]);
  }
  else {
    uVar4 = *param_3;
    uVar3 = param_3[2];
    puVar2[3] = param_3[1];
    puVar2[2] = uVar4;
    puVar2[4] = uVar3;
  }
  *(undefined4 *)(puVar2 + 5) = 0;
  *puVar2 = &PTR_FUN_00d49d68;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d0f740(1,puVar2 + 5);
  }
  *param_1 = puVar2;
  return;
}


// ===== 00c084b4  FUN_00c084b4 =====

void FUN_00c084b4(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  *(undefined4 *)(puVar1 + 1) = param_2;
  *(undefined4 *)((long)puVar1 + 0xc) = param_3;
  *puVar1 = &PTR_FUN_00d49df0;
  *(undefined4 *)(puVar1 + 2) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d0f740(1,puVar1 + 2);
  }
  *param_1 = puVar1;
  return;
}


// ===== 00c0851c  FUN_00c0851c =====

void FUN_00c0851c(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  cVar1 = *(char *)((long)param_3 + 0x17);
  *(undefined4 *)(puVar2 + 1) = param_2;
  *puVar2 = &PTR_FUN_00d49db0;
  if (cVar1 < '\0') {
    FUN_005478d8(puVar2 + 2,*param_3,param_3[1]);
  }
  else {
    uVar4 = *param_3;
    uVar3 = param_3[2];
    puVar2[3] = param_3[1];
    puVar2[2] = uVar4;
    puVar2[4] = uVar3;
  }
  *(undefined4 *)(puVar2 + 5) = param_4;
  *(undefined4 *)((long)puVar2 + 0x2c) = 0;
  *puVar2 = &PTR_FUN_00d49e38;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d0f740(1,(long)puVar2 + 0x2c);
  }
  *param_1 = puVar2;
  return;
}


// ===== 00c085c4  FUN_00c085c4 =====

void FUN_00c085c4(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  cVar1 = *(char *)((long)param_3 + 0x17);
  uVar3 = 8;
  if ((param_2 & 1) == 0) {
    uVar3 = 9;
  }
  *(undefined4 *)(puVar2 + 1) = uVar3;
  *puVar2 = &PTR_FUN_00d49db0;
  if (cVar1 < '\0') {
    FUN_005478d8(puVar2 + 2,*param_3,param_3[1]);
  }
  else {
    uVar5 = *param_3;
    uVar4 = param_3[2];
    puVar2[3] = param_3[1];
    puVar2[2] = uVar5;
    puVar2[4] = uVar4;
  }
  *(undefined4 *)(puVar2 + 5) = 0;
  *puVar2 = &PTR_FUN_00d49e80;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d0f740(1,puVar2 + 5);
  }
  *param_1 = puVar2;
  return;
}


// ===== 00c0866c  FUN_00c0866c =====

void FUN_00c0866c(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  cVar1 = *(char *)((long)param_2 + 0x17);
  *(undefined4 *)(puVar2 + 1) = 2;
  *puVar2 = &PTR_FUN_00d49f10;
  if (cVar1 < '\0') {
    FUN_005478d8(puVar2 + 2,*param_2,param_2[1]);
  }
  else {
    uVar4 = *param_2;
    uVar3 = param_2[2];
    puVar2[3] = param_2[1];
    puVar2[2] = uVar4;
    puVar2[4] = uVar3;
  }
  *(undefined4 *)(puVar2 + 5) = param_3;
  *(undefined4 *)((long)puVar2 + 0x2c) = 0;
  *puVar2 = &PTR_FUN_00d49ec8;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d0f740(1,(long)puVar2 + 0x2c);
  }
  *param_1 = puVar2;
  return;
}


// ===== 00c0870c  FUN_00c0870c =====

void FUN_00c0870c(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  cVar1 = *(char *)((long)param_2 + 0x17);
  *(undefined4 *)(puVar2 + 1) = 3;
  *puVar2 = &PTR_FUN_00d49f10;
  if (cVar1 < '\0') {
    FUN_005478d8(puVar2 + 2,*param_2,param_2[1]);
  }
  else {
    uVar4 = *param_2;
    uVar3 = param_2[2];
    puVar2[3] = param_2[1];
    puVar2[2] = uVar4;
    puVar2[4] = uVar3;
  }
  *(undefined4 *)(puVar2 + 5) = param_3;
  *(undefined4 *)((long)puVar2 + 0x2c) = param_4;
  *puVar2 = &PTR_FUN_00d49f50;
  *(undefined4 *)(puVar2 + 6) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d0f740(1,puVar2 + 6);
  }
  *param_1 = puVar2;
  return;
}


// ===== 00c087bc  FUN_00c087bc =====

undefined * FUN_00c087bc(long *param_1)

{
  if (*(uint *)(*param_1 + 8) < 0xc) {
    return (&PTR_s_googLibjingleSession_00d49f88)[*(uint *)(*param_1 + 8)];
  }
  return (undefined *)0x0;
}


// ===== 00c087e8  FUN_00c087e8 =====

void FUN_00c087e8(long param_1,int param_2,undefined8 *param_3)

{
  ulong uVar1;
  int *piVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_48;
  int local_3c;
  int *local_38;
  
  for (plVar5 = *(long **)(param_1 + 0x18); local_3c = param_2, plVar5 != (long *)0x0;
      plVar5 = (long *)*plVar5) {
    while ((int)plVar5[4] <= param_2) {
      if (param_2 <= (int)plVar5[4]) {
        if (((plVar5 != (long *)(param_1 + 0x18)) && (plVar5[5] != 0)) &&
           (uVar1 = FUN_00c080cc(plVar5[5],param_3), (uVar1 & 1) != 0)) {
          return;
        }
        goto LAB_00c08864;
      }
      plVar5 = (long *)plVar5[1];
      if (plVar5 == (long *)0x0) goto LAB_00c08864;
    }
  }
LAB_00c08864:
  piVar2 = (int *)operator_new(0x18);
  *piVar2 = param_2;
  *(undefined8 *)(piVar2 + 2) = DAT_001f55d0;
  puVar3 = (undefined8 *)operator_new(0x18);
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    FUN_005478d8(puVar3,*param_3,param_3[1]);
    *(undefined8 **)(piVar2 + 4) = puVar3;
  }
  else {
    uVar7 = *param_3;
    uVar6 = param_3[2];
    puVar3[1] = param_3[1];
    *puVar3 = uVar7;
    puVar3[2] = uVar6;
    *(undefined8 **)(piVar2 + 4) = puVar3;
  }
  if (piVar2 != (int *)0x0) {
    piVar2[2] = 1;
  }
  local_38 = &local_3c;
  lVar4 = FUN_00c0a88c(0,param_1 + 0x10,param_1 + 0x10,&DAT_001f94c3,&local_38,&local_48);
  local_48 = 0;
  local_38 = *(int **)(lVar4 + 0x28);
  *(int **)(lVar4 + 0x28) = piVar2;
  FUN_00c0897c(&local_38);
  FUN_00c0897c(&local_48);
  return;
}


// ===== 00c0892c  FUN_00c0892c =====

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00c0892c(long param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  while( true ) {
    while( true ) {
      if (plVar1 == (long *)0x0) {
        return 0;
      }
      if (*(int *)(plVar1 + 4) <= param_2) break;
      plVar1 = (long *)*plVar1;
    }
    if (param_2 <= *(int *)(plVar1 + 4)) break;
    plVar1 = (long *)plVar1[1];
  }
  if (plVar1 == (undefined8 *)(param_1 + 0x18)) {
    return 0;
  }
  return plVar1[5];
}


// ===== 00c0897c  FUN_00c0897c =====

void FUN_00c0897c(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  long *plVar3;
  
  pvVar2 = (void *)*param_1;
  if ((pvVar2 == (void *)0x0) ||
     (iVar1 = *(int *)((long)pvVar2 + 8) + -1, *(int *)((long)pvVar2 + 8) = iVar1, iVar1 != 0)) {
    return;
  }
  if (*(int *)((long)pvVar2 + 0xc) == 6) {
    plVar3 = *(long **)((long)pvVar2 + 0x10);
    if (plVar3 == (long *)0x0) goto LAB_00c08a1c;
    if ((long *)*plVar3 != (long *)0x0) {
      (**(code **)(*(long *)*plVar3 + 8))();
    }
  }
  else {
    if ((*(int *)((long)pvVar2 + 0xc) != 3) ||
       (plVar3 = *(long **)((long)pvVar2 + 0x10), plVar3 == (long *)0x0)) goto LAB_00c08a1c;
    if (*(char *)((long)plVar3 + 0x17) < '\0') {
      operator_delete((void *)*plVar3);
    }
  }
  operator_delete(plVar3);
LAB_00c08a1c:
  operator_delete(pvVar2);
  return;
}


// ===== 00c08a34  FUN_00c08a34 =====

void FUN_00c08a34(long param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_48;
  int local_3c;
  int *local_38;
  
  for (plVar5 = *(long **)(param_1 + 0x18); local_3c = param_2, plVar5 != (long *)0x0;
      plVar5 = (long *)*plVar5) {
    while ((int)plVar5[4] <= param_2) {
      if (param_2 <= (int)plVar5[4]) {
        if (((plVar5 != (long *)(param_1 + 0x18)) && (plVar5[5] != 0)) &&
           (uVar2 = FUN_00c081b8(plVar5[5],param_3), (uVar2 & 1) != 0)) {
          return;
        }
        goto LAB_00c08ab0;
      }
      plVar5 = (long *)plVar5[1];
      if (plVar5 == (long *)0x0) goto LAB_00c08ab0;
    }
  }
LAB_00c08ab0:
  piVar3 = (int *)operator_new(0x18);
  *piVar3 = param_2;
  uVar1 = DAT_001f5728;
  *(undefined8 *)(piVar3 + 4) = param_3;
  *(undefined8 *)(piVar3 + 2) = uVar1;
  if (piVar3 != (int *)0x0) {
    piVar3[2] = 1;
  }
  local_38 = &local_3c;
  lVar4 = FUN_00c0a88c(0,param_1 + 0x10,param_1 + 0x10,&DAT_001f94c3,&local_38,&local_48);
  local_48 = 0;
  local_38 = *(int **)(lVar4 + 0x28);
  *(int **)(lVar4 + 0x28) = piVar3;
  FUN_00c0897c(&local_38);
  FUN_00c0897c(&local_48);
  return;
}


// ===== 00c08b3c  FUN_00c08b3c =====

void FUN_00c08b3c(long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_48;
  int local_3c;
  int *local_38;
  
  for (plVar4 = *(long **)(param_1 + 0x18); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    while ((int)plVar4[4] <= param_2) {
      if (param_2 <= (int)plVar4[4]) {
        if ((plVar4 != (long *)(param_1 + 0x18)) && (lVar3 = plVar4[5], lVar3 != 0)) {
          if (*(int *)(lVar3 + 0xc) == 1) {
            if (*(long *)(lVar3 + 0x10) == param_3) {
              return;
            }
          }
          else if ((*(int *)(lVar3 + 0xc) == 0) && (*(int *)(lVar3 + 0x10) == (int)param_3)) {
            return;
          }
        }
        goto LAB_00c08bd8;
      }
      plVar4 = (long *)plVar4[1];
      if (plVar4 == (long *)0x0) goto LAB_00c08bd8;
    }
  }
LAB_00c08bd8:
  local_3c = param_2;
  piVar2 = (int *)operator_new(0x18);
  *piVar2 = param_2;
  uVar1 = DAT_001f5170;
  *(long *)(piVar2 + 4) = param_3;
  *(undefined8 *)(piVar2 + 2) = uVar1;
  if (piVar2 != (int *)0x0) {
    piVar2[2] = 1;
  }
  local_38 = &local_3c;
  lVar3 = FUN_00c0a88c(0,param_1 + 0x10,param_1 + 0x10,&DAT_001f94c3,&local_38,&local_48);
  local_48 = 0;
  local_38 = *(int **)(lVar3 + 0x28);
  *(int **)(lVar3 + 0x28) = piVar2;
  FUN_00c0897c(&local_38);
  FUN_00c0897c(&local_48);
  return;
}


// ===== 00c08c64  FUN_00c08c64 =====

void FUN_00c08c64(long param_1,int param_2,int param_3)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_48;
  int local_3c;
  int *local_38;
  
  for (plVar3 = *(long **)(param_1 + 0x18); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    while ((int)plVar3[4] <= param_2) {
      if (param_2 <= (int)plVar3[4]) {
        if ((plVar3 != (long *)(param_1 + 0x18)) && (lVar2 = plVar3[5], lVar2 != 0)) {
          if (*(int *)(lVar2 + 0xc) == 1) {
            if (*(long *)(lVar2 + 0x10) == (long)param_3) {
              return;
            }
          }
          else if ((*(int *)(lVar2 + 0xc) == 0) && (*(int *)(lVar2 + 0x10) == param_3)) {
            return;
          }
        }
        goto LAB_00c08d00;
      }
      plVar3 = (long *)plVar3[1];
      if (plVar3 == (long *)0x0) goto LAB_00c08d00;
    }
  }
LAB_00c08d00:
  local_3c = param_2;
  piVar1 = (int *)operator_new(0x18);
  *piVar1 = param_2;
  piVar1[2] = 0;
  piVar1[3] = 0;
  piVar1[4] = param_3;
  if (piVar1 != (int *)0x0) {
    piVar1[2] = 1;
  }
  local_38 = &local_3c;
  lVar2 = FUN_00c0a88c(0,param_1 + 0x10,param_1 + 0x10,&DAT_001f94c3,&local_38,&local_48);
  local_48 = 0;
  local_38 = *(int **)(lVar2 + 0x28);
  *(int **)(lVar2 + 0x28) = piVar1;
  FUN_00c0897c(&local_38);
  FUN_00c0897c(&local_48);
  return;
}


// ===== 00c08d84  FUN_00c08d84 =====

void FUN_00c08d84(float param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_48;
  int local_3c;
  int *local_38;
  
  for (plVar4 = *(long **)(param_2 + 0x18); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    while ((int)plVar4[4] <= param_3) {
      if (param_3 <= (int)plVar4[4]) {
        if ((((plVar4 != (long *)(param_2 + 0x18)) && (lVar3 = plVar4[5], lVar3 != 0)) &&
            (*(int *)(lVar3 + 0xc) == 2)) && (*(float *)(lVar3 + 0x10) == param_1)) {
          return;
        }
        goto LAB_00c08e10;
      }
      plVar4 = (long *)plVar4[1];
      if (plVar4 == (long *)0x0) goto LAB_00c08e10;
    }
  }
LAB_00c08e10:
  local_3c = param_3;
  piVar2 = (int *)operator_new(0x18);
  *piVar2 = param_3;
  uVar1 = DAT_001f5200;
  piVar2[4] = (int)param_1;
  *(undefined8 *)(piVar2 + 2) = uVar1;
  if (piVar2 != (int *)0x0) {
    piVar2[2] = 1;
  }
  local_38 = &local_3c;
  lVar3 = FUN_00c0a88c(0,param_2 + 0x10,param_2 + 0x10,&DAT_001f94c3,&local_38,&local_48);
  local_48 = 0;
  local_38 = *(int **)(lVar3 + 0x28);
  *(int **)(lVar3 + 0x28) = piVar2;
  FUN_00c0897c(&local_38);
  FUN_00c0897c(&local_48);
  return;
}


// ===== 00c08ea0  FUN_00c08ea0 =====

void FUN_00c08ea0(long param_1,int param_2,byte param_3)

{
  undefined8 uVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_48;
  int local_3c;
  int *local_38;
  
  for (plVar4 = *(long **)(param_1 + 0x18); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    while ((int)plVar4[4] <= param_2) {
      if (param_2 <= (int)plVar4[4]) {
        if ((((plVar4 != (long *)(param_1 + 0x18)) && (lVar3 = plVar4[5], lVar3 != 0)) &&
            (*(int *)(lVar3 + 0xc) == 5)) && (*(byte *)(lVar3 + 0x10) == (param_3 & 1))) {
          return;
        }
        goto LAB_00c08f2c;
      }
      plVar4 = (long *)plVar4[1];
      if (plVar4 == (long *)0x0) goto LAB_00c08f2c;
    }
  }
LAB_00c08f2c:
  local_3c = param_2;
  piVar2 = (int *)operator_new(0x18);
  *piVar2 = param_2;
  uVar1 = DAT_001f53c0;
  *(byte *)(piVar2 + 4) = param_3 & 1;
  *(undefined8 *)(piVar2 + 2) = uVar1;
  if (piVar2 != (int *)0x0) {
    piVar2[2] = 1;
  }
  local_38 = &local_3c;
  lVar3 = FUN_00c0a88c(0,param_1 + 0x10,param_1 + 0x10,&DAT_001f94c3,&local_38,&local_48);
  local_48 = 0;
  local_38 = *(int **)(lVar3 + 0x28);
  *(int **)(lVar3 + 0x28) = piVar2;
  FUN_00c0897c(&local_38);
  FUN_00c0897c(&local_48);
  return;
}


// ===== 00c08fbc  FUN_00c08fbc =====

void FUN_00c08fbc(long param_1,int param_2,long *param_3)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 local_48;
  int local_3c;
  int *local_38;
  
  for (plVar4 = *(long **)(param_1 + 0x18); local_3c = param_2, plVar4 != (long *)0x0;
      plVar4 = (long *)*plVar4) {
    while ((int)plVar4[4] <= param_2) {
      if (param_2 <= (int)plVar4[4]) {
        if ((((plVar4 != (long *)(param_1 + 0x18)) && (lVar3 = plVar4[5], lVar3 != 0)) &&
            (*(int *)(lVar3 + 0xc) == 6)) &&
           (uVar1 = (**(code **)(*(long *)**(undefined8 **)(lVar3 + 0x10) + 0x28))
                              ((long *)**(undefined8 **)(lVar3 + 0x10),*param_3), (uVar1 & 1) != 0))
        {
          return;
        }
        goto LAB_00c09054;
      }
      plVar4 = (long *)plVar4[1];
      if (plVar4 == (long *)0x0) goto LAB_00c09054;
    }
  }
LAB_00c09054:
  piVar2 = (int *)operator_new(0x18);
  *piVar2 = param_2;
  *(undefined8 *)(piVar2 + 2) = DAT_001f5b60;
  plVar4 = (long *)operator_new(8);
  puVar5 = (undefined8 *)*param_3;
  *plVar4 = (long)puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
  }
  *(long **)(piVar2 + 4) = plVar4;
  if (piVar2 != (int *)0x0) {
    piVar2[2] = 1;
  }
  local_38 = &local_3c;
  lVar3 = FUN_00c0a88c(0,param_1 + 0x10,param_1 + 0x10,&DAT_001f94c3,&local_38,&local_48);
  local_48 = 0;
  local_38 = *(int **)(lVar3 + 0x28);
  *(int **)(lVar3 + 0x28) = piVar2;
  FUN_00c0897c(&local_38);
  FUN_00c0897c(&local_48);
  return;
}


// ===== 00c09108  FUN_00c09108 =====

void FUN_00c09108(long param_1)

{
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


// ===== 00c09118  FUN_00c09118 =====

void FUN_00c09118(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *local_18;
  
  for (plVar2 = (long *)param_1[1]; plVar2 != param_1; plVar2 = (long *)plVar2[1]) {
    plVar1 = (long *)plVar2[2];
    if (plVar1 != (long *)0x0) {
      local_18 = plVar1 + 2;
      FUN_00c09810(&local_18,plVar1[3]);
      if ((long *)*plVar1 != (long *)0x0) {
        (**(code **)(*(long *)*plVar1 + 8))();
      }
      operator_delete(plVar1);
    }
  }
  if (param_1[2] != 0) {
    plVar2 = (long *)param_1[1];
    plVar1 = *(long **)(*param_1 + 8);
    *(long **)(*plVar2 + 8) = plVar1;
    *plVar1 = *plVar2;
    param_1[2] = 0;
    while (plVar2 != param_1) {
      if ((plVar2 == (long *)0xfffffffffffffff0) || (plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar1 = (long *)plVar2[1];
      operator_delete(plVar2);
      plVar2 = plVar1;
    }
  }
  return;
}


// ===== 00c09200  FUN_00c09200 =====

undefined8 FUN_00c09200(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 00c0920c  FUN_00c0920c =====

void FUN_00c0920c(void)

{
  return;
}


// ===== 00c09214  FUN_00c09214 =====

undefined8 FUN_00c09214(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 00c09220  FUN_00c09220 =====

long * FUN_00c09220(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  plVar1 = (long *)operator_new(0x28);
  puVar3 = (undefined8 *)*param_2;
  *plVar1 = (long)puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
  }
  plVar1[3] = 0;
  plVar1[4] = 0;
  plVar1[1] = 0;
  plVar1[2] = (long)(plVar1 + 3);
  plVar2 = (long *)operator_new(0x18);
  if ((plVar2 != (long *)0x0) && (plVar2 != (long *)0xfffffffffffffff0)) {
    lVar4 = *param_1;
    plVar2[1] = (long)param_1;
    plVar2[2] = (long)plVar1;
    *plVar2 = lVar4;
    *(long **)(lVar4 + 8) = plVar2;
    *param_1 = (long)plVar2;
    param_1[2] = param_1[2] + 1;
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c092c8  FUN_00c092c8 =====

void FUN_00c092c8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  do {
    if (lVar2 == param_1) {
LAB_00c09340:
      FUN_00c09220(param_1,param_2);
      return;
    }
    uVar1 = (**(code **)(*(long *)**(undefined8 **)(lVar2 + 0x10) + 0x28))
                      ((long *)**(undefined8 **)(lVar2 + 0x10),*param_2);
    if ((uVar1 & 1) != 0) {
      if ((lVar2 != param_1) && (*(long *)(lVar2 + 0x10) != 0)) {
        return;
      }
      goto LAB_00c09340;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}


// ===== 00c0935c  FUN_00c0935c =====

undefined8 FUN_00c0935c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  while( true ) {
    if (lVar2 == param_1) {
      return 0;
    }
    uVar1 = (**(code **)(*(long *)**(undefined8 **)(lVar2 + 0x10) + 0x28))
                      ((long *)**(undefined8 **)(lVar2 + 0x10),*param_2);
    if ((uVar1 & 1) != 0) break;
    lVar2 = *(long *)(lVar2 + 8);
  }
  if (lVar2 == param_1) {
    return 0;
  }
  return *(undefined8 *)(lVar2 + 0x10);
}


// ===== 00c093d8  FUN_00c093d8 =====

long * FUN_00c093d8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *local_18;
  
  lVar5 = *(long *)(param_1 + 8);
  do {
    if (lVar5 == param_1) {
LAB_00c094c4:
      plVar2 = (long *)FUN_00c09220(param_1,param_2);
      return plVar2;
    }
    uVar1 = (**(code **)(*(long *)**(undefined8 **)(lVar5 + 0x10) + 0x28))
                      ((long *)**(undefined8 **)(lVar5 + 0x10),*param_2);
    if ((uVar1 & 1) != 0) {
      if (lVar5 != param_1) {
        plVar2 = (long *)operator_new(0x28);
        plVar4 = *(long **)(lVar5 + 0x10);
        puVar3 = (undefined8 *)*plVar4;
        *plVar2 = (long)puVar3;
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3);
          plVar4 = *(long **)(lVar5 + 0x10);
        }
        plVar2[3] = 0;
        plVar2[4] = 0;
        plVar2[1] = 0;
        plVar2[2] = (long)(plVar2 + 3);
        if (plVar4 != (long *)0x0) {
          local_18 = plVar4 + 2;
          FUN_00c09810(&local_18,plVar4[3]);
          if ((long *)*plVar4 != (long *)0x0) {
            (**(code **)(*(long *)*plVar4 + 8))();
          }
          operator_delete(plVar4);
        }
        *(long **)(lVar5 + 0x10) = plVar2;
        return plVar2;
      }
      goto LAB_00c094c4;
    }
    lVar5 = *(long *)(lVar5 + 8);
  } while( true );
}


// ===== 00c094e0  FUN_00c094e0 =====

void FUN_00c094e0(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  *param_1 = (long)param_1;
  param_1[1] = (long)param_1;
  param_1[2] = 0;
  if (param_1 != param_2) {
    if (param_2[2] != 0) {
      lVar2 = *param_2;
      plVar1 = (long *)param_2[1];
      plVar4 = *(long **)(lVar2 + 8);
      *(long **)(*plVar1 + 8) = plVar4;
      *plVar4 = *plVar1;
      *(long **)(*param_1 + 8) = plVar1;
      *plVar1 = *param_1;
      *param_1 = lVar2;
      *(long **)(lVar2 + 8) = param_1;
      lVar2 = param_2[2];
      lVar3 = param_1[2];
      param_2[2] = 0;
      param_1[2] = lVar3 + lVar2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/list:1500: libc++ Hardening assertion this != std::addressof(__c) failed: list::splice(iterator, list) called with this == &list\n"
            );
}


// ===== 00c09564  FUN_00c09564 =====

void FUN_00c09564(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *local_48;
  
  lVar4 = *(long *)(param_2 + 8);
  do {
    if (lVar4 == param_2) {
      return;
    }
    puVar5 = *(undefined8 **)(lVar4 + 0x10);
    for (plVar6 = (long *)param_1[1]; plVar6 != param_1; plVar6 = (long *)plVar6[1]) {
      uVar1 = (**(code **)(**(long **)plVar6[2] + 0x28))(*(long **)plVar6[2],*puVar5);
      if ((uVar1 & 1) != 0) {
        if (plVar6 != param_1) {
          plVar3 = (long *)plVar6[2];
          if (plVar3 != (long *)0x0) {
            local_48 = plVar3 + 2;
            FUN_00c09810(&local_48,plVar3[3]);
            if ((long *)*plVar3 != (long *)0x0) {
              (**(code **)(*(long *)*plVar3 + 8))();
            }
            operator_delete(plVar3);
          }
          plVar6[2] = (long)puVar5;
          goto LAB_00c095a8;
        }
        break;
      }
    }
    plVar6 = (long *)operator_new(0x18);
    if ((plVar6 == (long *)0x0) || (plVar6 == (long *)0xfffffffffffffff0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    lVar2 = *param_1;
    plVar6[1] = (long)param_1;
    plVar6[2] = (long)puVar5;
    *plVar6 = lVar2;
    *(long **)(lVar2 + 8) = plVar6;
    *param_1 = (long)plVar6;
    param_1[2] = param_1[2] + 1;
LAB_00c095a8:
    lVar4 = *(long *)(lVar4 + 8);
  } while( true );
}


// ===== 00c09690  FUN_00c09690 =====

void FUN_00c09690(float param_1,long *param_2,ulong param_3)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  if (0x7ffffffffffffff6 < param_3) {
    FUN_00621ff8("absl::StringResizeAndOverwrite");
    goto LAB_00c0980c;
  }
  uVar6 = (ulong)*(char *)((long)param_2 + 0x17);
  if ((long)uVar6 < 0) {
    uVar6 = param_2[1];
    if (uVar6 < param_3) {
      uVar4 = (ulong)param_2[2] >> 0x38;
      lVar3 = (param_2[2] & 0x7fffffffffffffffU) - 1;
      goto LAB_00c09700;
    }
    plVar7 = (long *)*param_2;
LAB_00c09774:
    param_2[1] = param_3;
  }
  else if (uVar6 < param_3) {
    lVar3 = 0x16;
    uVar4 = uVar6 & 0xffffffff;
LAB_00c09700:
    if (lVar3 - uVar6 < param_3 - uVar6) {
      FUN_0054774c(param_2,lVar3,param_3 - lVar3,uVar6,uVar6,0,0);
      uVar4 = (ulong)*(byte *)((long)param_2 + 0x17);
      param_2[1] = uVar6;
    }
    plVar7 = (long *)*param_2;
    if ((uVar4 & 0x80) == 0) {
      plVar7 = param_2;
    }
    memset((void *)((long)plVar7 + uVar6),0,param_3 - uVar6);
    if (*(char *)((long)param_2 + 0x17) < '\0') goto LAB_00c09774;
    *(byte *)((long)param_2 + 0x17) = (byte)param_3 & 0x7f;
  }
  else {
    *(byte *)((long)param_2 + 0x17) = (byte)param_3;
    plVar7 = param_2;
  }
  *(undefined1 *)((long)plVar7 + param_3) = 0;
  plVar7 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar7 = param_2;
  }
  uVar6 = FUN_00621398((double)param_1,plVar7);
  if (uVar6 <= param_3) {
    bVar1 = *(byte *)((long)param_2 + 0x17);
    plVar5 = (long *)*param_2;
    plVar7 = plVar5;
    if ((bVar1 & 0x80) == 0) {
      plVar7 = param_2;
    }
    if (*(char *)((long)plVar7 + param_3) == '\0') {
      if ((char)bVar1 < '\0') {
        if ((ulong)param_2[1] < uVar6) goto LAB_00c0980c;
        param_2[1] = uVar6;
      }
      else {
        if (bVar1 < uVar6) {
LAB_00c0980c:
                    /* WARNING: Subroutine does not return */
          FUN_005f5590();
        }
        *(char *)((long)param_2 + 0x17) = (char)uVar6;
        plVar5 = param_2;
      }
      *(undefined1 *)((long)plVar5 + uVar6) = 0;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0xc09800);
  (*pcVar2)();
}


// ===== 00c09810  FUN_00c09810 =====

void FUN_00c09810(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00c09810(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar1 = (undefined8 *)param_2[1];
      FUN_00c0897c(param_2 + 5);
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00c0988c  FUN_00c0988c =====

void FUN_00c0988c(long param_1)

{
  FUN_00d0f740(1,param_1 + 0xc);
  return;
}


// ===== 00c098b0  FUN_00c098b0 =====

bool FUN_00c098b0(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,(long)param_1 + 0xc);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00c09908  FUN_00c09908 =====

void FUN_00c09908(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00c09914  FUN_00c09914 =====

void FUN_00c09914(undefined8 param_1)

{
  FUN_005d3510(param_1,"bweforvideo");
  return;
}


// ===== 00c09928  FUN_00c09928 =====

bool FUN_00c09928(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0xc) == 1;
}


// ===== 00c09940  FUN_00c09940 =====

void FUN_00c09940(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x28);
  return;
}


// ===== 00c09964  FUN_00c09964 =====

bool FUN_00c09964(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 5);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00c099bc  FUN_00c099bc =====

void FUN_00c099bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d49db0;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00c09a0c  FUN_00c09a0c =====

void FUN_00c09a0c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 **local_68;
  ulong uStack_60;
  undefined8 local_58;
  undefined8 **local_50;
  ulong uStack_48;
  ulong local_40;
  
  if (*(uint *)(param_2 + 8) < 0xc) {
    puVar2 = (&PTR_s_googLibjingleSession_00d49f88)[*(uint *)(param_2 + 8)];
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  FUN_005d3510(&local_68,puVar2);
  if ((long)local_58 < 0) {
    uVar6 = (local_58 & 0x7fffffffffffffff) - 1;
    uVar3 = uStack_60;
    if (uStack_60 == uVar6) goto LAB_00c09a84;
  }
  else {
    if (local_58._7_1_ != 0x16) {
      uVar3 = (ulong)local_58._7_1_;
      local_58 = CONCAT17(local_58._7_1_ + 1,(undefined7)local_58) & 0x7fffffffffffffff;
      pppuVar5 = &local_68;
      goto LAB_00c09acc;
    }
    uVar6 = 0x16;
LAB_00c09a84:
    FUN_0054774c(&local_68,uVar6,1,uVar6,uVar6,0,0);
    uVar3 = uVar6;
  }
  uStack_60 = uVar3 + 1;
  pppuVar5 = (undefined8 ***)local_68;
LAB_00c09acc:
  *(undefined2 *)((long)pppuVar5 + uVar3) = 0x5f;
  local_40 = local_58;
  uStack_48 = uStack_60;
  local_50 = local_68;
  uStack_60 = 0;
  local_58 = 0;
  local_68 = (undefined8 **)0x0;
  uVar3 = *(ulong *)(param_2 + 0x18);
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  if (-1 < (char)*(byte *)(param_2 + 0x27)) {
    uVar3 = (ulong)*(byte *)(param_2 + 0x27);
    puVar1 = (undefined8 *)(param_2 + 0x10);
  }
  puVar1 = (undefined8 *)FUN_00547cac(&local_50,puVar1,uVar3);
  uVar8 = puVar1[1];
  uVar7 = *puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  uVar4 = puVar1[2];
  puVar1[2] = 0;
  param_1[1] = uVar8;
  *param_1 = uVar7;
  param_1[2] = uVar4;
  if ((long)local_40 < 0) {
    operator_delete(local_50);
  }
  if ((long)local_58 < 0) {
    operator_delete(local_68);
  }
  return;
}


// ===== 00c09b7c  FUN_00c09b7c =====

bool FUN_00c09b7c(long param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  undefined8 *__s1;
  undefined8 *__s2;
  byte bVar2;
  byte bVar3;
  int iVar4;
  
  if (*(int *)(param_2 + 8) == *(int *)(param_1 + 8)) {
    bVar2 = *(byte *)(param_2 + 0x27);
    bVar3 = *(byte *)(param_1 + 0x27);
    __n = *(size_t *)(param_2 + 0x18);
    if (-1 < (char)bVar2) {
      __n = (ulong)bVar2;
    }
    sVar1 = *(size_t *)(param_1 + 0x18);
    if (-1 < (char)bVar3) {
      sVar1 = (ulong)bVar3;
    }
    if (__n == sVar1) {
      __s1 = (undefined8 *)*(void **)(param_2 + 0x10);
      if (-1 < (char)bVar2) {
        __s1 = (undefined8 *)(param_2 + 0x10);
      }
      __s2 = (undefined8 *)*(void **)(param_1 + 0x10);
      if (-1 < (char)bVar3) {
        __s2 = (undefined8 *)(param_1 + 0x10);
      }
      iVar4 = memcmp(__s1,__s2,__n);
      return iVar4 == 0;
    }
  }
  return false;
}


// ===== 00c09c08  FUN_00c09c08 =====

bool FUN_00c09c08(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x28) == 1;
}


// ===== 00c09c20  FUN_00c09c20 =====

void FUN_00c09c20(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc09c28);
  (*pcVar1)();
}


// ===== 00c09c28  FUN_00c09c28 =====

void FUN_00c09c28(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x10);
  return;
}


// ===== 00c09c4c  FUN_00c09c4c =====

bool FUN_00c09c4c(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 2);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00c09ca4  FUN_00c09ca4 =====

void FUN_00c09ca4(void)

{
  return;
}


// ===== 00c09cac  FUN_00c09cac =====

void FUN_00c09cac(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00c09cb8  FUN_00c09cb8 =====

/* WARNING: Removing unreachable block (ram,0x00c09e30) */

void FUN_00c09cb8(undefined8 *param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 ***pppuVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *local_80;
  ulong uStack_78;
  ulong local_70;
  undefined8 **local_68;
  ulong uStack_60;
  undefined8 local_58;
  undefined8 **local_50;
  ulong uStack_48;
  ulong local_40;
  
  if (*(uint *)(param_2 + 8) < 0xc) {
    puVar3 = (&PTR_s_googLibjingleSession_00d49f88)[*(uint *)(param_2 + 8)];
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  FUN_005d3510(&local_68,puVar3);
  if ((long)local_58 < 0) {
    uVar7 = (local_58 & 0x7fffffffffffffff) - 1;
    uVar4 = uStack_60;
    if (uStack_60 == uVar7) goto LAB_00c09d30;
  }
  else {
    if (local_58._7_1_ != 0x16) {
      uVar4 = (ulong)local_58._7_1_;
      local_58 = CONCAT17(local_58._7_1_ + 1,(undefined7)local_58) & 0x7fffffffffffffff;
      pppuVar6 = &local_68;
      goto LAB_00c09d78;
    }
    uVar7 = 0x16;
LAB_00c09d30:
    FUN_0054774c(&local_68,uVar7,1,uVar7,uVar7,0,0);
    uVar4 = uVar7;
  }
  uStack_60 = uVar4 + 1;
  pppuVar6 = (undefined8 ***)local_68;
LAB_00c09d78:
  *(undefined2 *)((long)pppuVar6 + uVar4) = 0x5f;
  local_40 = local_58;
  uStack_48 = uStack_60;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = local_68;
  local_70 = 0;
  local_68 = (undefined8 **)0x0;
  local_80 = (undefined1 *)0x0;
  uStack_78 = 0;
  FUN_005f55c4(&local_80,0x16,*(undefined4 *)(param_2 + 0xc));
  uVar4 = uStack_78;
  ppuVar1 = (undefined1 **)local_80;
  if (-1 < (long)local_70) {
    uVar4 = local_70 >> 0x38;
    ppuVar1 = &local_80;
  }
  puVar2 = (undefined8 *)FUN_00547cac(&local_50,ppuVar1,uVar4);
  uVar9 = puVar2[1];
  uVar8 = *puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar5 = puVar2[2];
  puVar2[2] = 0;
  param_1[1] = uVar9;
  *param_1 = uVar8;
  param_1[2] = uVar5;
  if ((long)local_70 < 0) {
    operator_delete(local_80);
  }
  if ((long)local_58 < 0) {
    operator_delete(local_68);
  }
  return;
}


// ===== 00c09e5c  FUN_00c09e5c =====

bool FUN_00c09e5c(long param_1,long param_2)

{
  if (*(int *)(param_2 + 8) == *(int *)(param_1 + 8)) {
    return *(int *)(param_2 + 0xc) == *(int *)(param_1 + 0xc);
  }
  return false;
}


// ===== 00c09e8c  FUN_00c09e8c =====

bool FUN_00c09e8c(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x10) == 1;
}


// ===== 00c09ea4  FUN_00c09ea4 =====

void FUN_00c09ea4(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x2c);
  return;
}


// ===== 00c09ec8  FUN_00c09ec8 =====

bool FUN_00c09ec8(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,(long)param_1 + 0x2c);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00c09f20  FUN_00c09f20 =====

void FUN_00c09f20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d49db0;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00c09f70  FUN_00c09f70 =====

void FUN_00c09f70(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  FUN_00c09a0c();
  bVar2 = *(byte *)((long)param_1 + 0x17);
  if ((char)bVar2 < '\0') {
    uVar3 = param_1[1];
    uVar5 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if (uVar3 == uVar5) goto LAB_00c09fc0;
  }
  else {
    if (bVar2 != 0x16) {
      uVar3 = (ulong)bVar2;
      *(byte *)((long)param_1 + 0x17) = bVar2 + 1 & 0x7f;
      puVar4 = param_1;
      goto LAB_00c0a008;
    }
    uVar5 = 0x16;
LAB_00c09fc0:
    uVar3 = uVar5;
    FUN_0054774c(param_1,uVar3,1,uVar3,uVar3,0,0);
  }
  param_1[1] = uVar3 + 1;
  puVar4 = (undefined8 *)*param_1;
LAB_00c0a008:
  *(undefined2 *)((long)puVar4 + uVar3) = 0x5f;
  puVar1 = &UNK_001a5411;
  if (*(int *)(param_2 + 0x28) != 0) {
    puVar1 = &DAT_001b8bbd;
  }
  FUN_00547cac(param_1,puVar1,4);
  return;
}


// ===== 00c0a048  FUN_00c0a048 =====

bool FUN_00c0a048(long param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  undefined8 *__s1;
  undefined8 *__s2;
  byte bVar2;
  byte bVar3;
  int iVar4;
  
  if (*(int *)(param_2 + 8) != *(int *)(param_1 + 8)) {
    return false;
  }
  bVar2 = *(byte *)(param_2 + 0x27);
  bVar3 = *(byte *)(param_1 + 0x27);
  __n = *(size_t *)(param_2 + 0x18);
  if (-1 < (char)bVar2) {
    __n = (ulong)bVar2;
  }
  sVar1 = *(size_t *)(param_1 + 0x18);
  if (-1 < (char)bVar3) {
    sVar1 = (ulong)bVar3;
  }
  if (__n == sVar1) {
    __s1 = (undefined8 *)*(void **)(param_2 + 0x10);
    if (-1 < (char)bVar2) {
      __s1 = (undefined8 *)(param_2 + 0x10);
    }
    __s2 = (undefined8 *)*(void **)(param_1 + 0x10);
    if (-1 < (char)bVar3) {
      __s2 = (undefined8 *)(param_1 + 0x10);
    }
    iVar4 = memcmp(__s1,__s2,__n);
    if (iVar4 == 0) {
      return *(int *)(param_2 + 0x28) == *(int *)(param_1 + 0x28);
    }
  }
  return false;
}


// ===== 00c0a0fc  FUN_00c0a0fc =====

bool FUN_00c0a0fc(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x2c) == 1;
}


// ===== 00c0a114  FUN_00c0a114 =====

undefined8 * FUN_00c0a114(undefined8 *param_1,undefined1 param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  bVar1 = *(byte *)((long)param_1 + 0x17);
  if ((char)bVar1 < '\0') {
    uVar2 = param_1[1];
    uVar4 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if (uVar2 == uVar4) goto LAB_00c0a160;
  }
  else {
    if (bVar1 != 0x16) {
      uVar2 = (ulong)bVar1;
      *(byte *)((long)param_1 + 0x17) = bVar1 + 1 & 0x7f;
      puVar3 = param_1;
      goto LAB_00c0a1a8;
    }
    uVar4 = 0x16;
LAB_00c0a160:
    uVar2 = uVar4;
    FUN_0054774c(param_1,uVar2,1,uVar2,uVar2,0,0);
  }
  param_1[1] = uVar2 + 1;
  puVar3 = (undefined8 *)*param_1;
LAB_00c0a1a8:
  *(undefined1 *)((long)puVar3 + uVar2) = param_2;
  ((undefined1 *)((long)puVar3 + uVar2))[1] = 0;
  return param_1;
}


// ===== 00c0a1cc  FUN_00c0a1cc =====

void FUN_00c0a1cc(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x28);
  return;
}


// ===== 00c0a1f0  FUN_00c0a1f0 =====

bool FUN_00c0a1f0(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 5);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00c0a248  FUN_00c0a248 =====

void FUN_00c0a248(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d49db0;
  if (-1 < *(char *)((long)param_1 + 0x27)) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 00c0a278  FUN_00c0a278 =====

void FUN_00c0a278(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d49db0;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00c0a2c8  FUN_00c0a2c8 =====

void FUN_00c0a2c8(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined1 uStack_11;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  plVar2 = (long *)*(long *)(param_1 + 0x10);
  if (-1 < (char)*(byte *)(param_1 + 0x27)) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x27);
    plVar2 = (long *)(param_1 + 0x10);
  }
  FUN_005ff514(&uStack_11,"Cand-",5,plVar2,uVar1);
  return;
}


// ===== 00c0a318  FUN_00c0a318 =====

bool FUN_00c0a318(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x28) == 1;
}


// ===== 00c0a330  FUN_00c0a330 =====

void FUN_00c0a330(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x2c);
  return;
}


// ===== 00c0a354  FUN_00c0a354 =====

bool FUN_00c0a354(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,(long)param_1 + 0x2c);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00c0a3ac  FUN_00c0a3ac =====

void FUN_00c0a3ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d49f10;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00c0a3fc  FUN_00c0a3fc =====

void FUN_00c0a3fc(undefined8 param_1)

{
  FUN_00c0a4c8(param_1,"Channel-");
  return;
}


// ===== 00c0a40c  FUN_00c0a40c =====

bool FUN_00c0a40c(long param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  undefined8 *__s1;
  undefined8 *__s2;
  byte bVar2;
  byte bVar3;
  int iVar4;
  
  if ((*(int *)(param_2 + 8) == *(int *)(param_1 + 8)) &&
     (*(int *)(param_2 + 0x28) == *(int *)(param_1 + 0x28))) {
    bVar2 = *(byte *)(param_2 + 0x27);
    bVar3 = *(byte *)(param_1 + 0x27);
    __n = *(size_t *)(param_2 + 0x18);
    if (-1 < (char)bVar2) {
      __n = (ulong)bVar2;
    }
    sVar1 = *(size_t *)(param_1 + 0x18);
    if (-1 < (char)bVar3) {
      sVar1 = (ulong)bVar3;
    }
    if (__n == sVar1) {
      __s1 = (undefined8 *)*(void **)(param_2 + 0x10);
      if (-1 < (char)bVar2) {
        __s1 = (undefined8 *)(param_2 + 0x10);
      }
      __s2 = (undefined8 *)*(void **)(param_1 + 0x10);
      if (-1 < (char)bVar3) {
        __s2 = (undefined8 *)(param_1 + 0x10);
      }
      iVar4 = memcmp(__s1,__s2,__n);
      return iVar4 == 0;
    }
  }
  return false;
}


// ===== 00c0a4a8  FUN_00c0a4a8 =====

bool FUN_00c0a4a8(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x2c) == 1;
}


// ===== 00c0a4c0  FUN_00c0a4c0 =====

void FUN_00c0a4c0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc0a4c8);
  (*pcVar1)();
}


// ===== 00c0a4c8  FUN_00c0a4c8 =====

void FUN_00c0a4c8(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 ***pppuVar3;
  undefined8 **local_38;
  ulong local_30;
  ulong local_28;
  
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  FUN_005d3510(param_1);
  uVar1 = *(ulong *)(param_2 + 0x18);
  puVar2 = *(undefined8 **)(param_2 + 0x10);
  if (-1 < (char)*(byte *)(param_2 + 0x27)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x27);
    puVar2 = (undefined8 *)(param_2 + 0x10);
  }
  FUN_00547cac(param_1,puVar2,uVar1);
  FUN_00c0a114(param_1,0x2d);
  local_30 = 0;
  local_28 = 0;
  local_38 = (undefined8 ***)0x0;
  FUN_005f55c4(&local_38,0x16,*(undefined4 *)(param_2 + 0x28));
  uVar1 = local_30;
  pppuVar3 = (undefined8 ***)local_38;
  if (-1 < (long)local_28) {
    uVar1 = local_28 >> 0x38;
    pppuVar3 = &local_38;
  }
  FUN_00547cac(param_1,pppuVar3,uVar1);
  if ((long)local_28 < 0) {
    operator_delete(local_38);
  }
  return;
}


// ===== 00c0a590  FUN_00c0a590 =====

void FUN_00c0a590(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x30);
  return;
}


// ===== 00c0a5b4  FUN_00c0a5b4 =====

bool FUN_00c0a5b4(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 6);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00c0a60c  FUN_00c0a60c =====

void FUN_00c0a60c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d49f10;
  if (-1 < *(char *)((long)param_1 + 0x27)) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 00c0a63c  FUN_00c0a63c =====

void FUN_00c0a63c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d49f10;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00c0a68c  FUN_00c0a68c =====

void FUN_00c0a68c(undefined8 *param_1,long param_2)

{
  byte bVar1;
  undefined8 ***pppuVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 **local_48;
  ulong local_40;
  ulong local_38;
  
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c0a4c8(param_2,"Conn-");
  bVar1 = *(byte *)((long)param_1 + 0x17);
  if ((char)bVar1 < '\0') {
    uVar3 = param_1[1];
    uVar5 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if (uVar3 == uVar5) goto LAB_00c0a6f4;
  }
  else {
    if (bVar1 != 0x16) {
      uVar3 = (ulong)bVar1;
      *(byte *)((long)param_1 + 0x17) = bVar1 + 1 & 0x7f;
      puVar4 = param_1;
      goto LAB_00c0a73c;
    }
    uVar5 = 0x16;
LAB_00c0a6f4:
    uVar3 = uVar5;
    FUN_0054774c(param_1,uVar3,1,uVar3,uVar3,0,0);
  }
  param_1[1] = uVar3 + 1;
  puVar4 = (undefined8 *)*param_1;
LAB_00c0a73c:
  *(undefined2 *)((long)puVar4 + uVar3) = 0x2d;
  local_40 = 0;
  local_38 = 0;
  local_48 = (undefined8 ***)0x0;
  FUN_005f55c4(&local_48,0x16,*(undefined4 *)(param_2 + 0x2c));
  uVar3 = local_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar3 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(param_1,pppuVar2,uVar3);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  return;
}


// ===== 00c0a7b0  FUN_00c0a7b0 =====

bool FUN_00c0a7b0(long param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  undefined8 *__s1;
  undefined8 *__s2;
  byte bVar2;
  byte bVar3;
  int iVar4;
  
  if (*(int *)(param_2 + 8) != *(int *)(param_1 + 8)) {
    return false;
  }
  if (*(int *)(param_2 + 0x28) == *(int *)(param_1 + 0x28)) {
    bVar2 = *(byte *)(param_2 + 0x27);
    bVar3 = *(byte *)(param_1 + 0x27);
    __n = *(size_t *)(param_2 + 0x18);
    if (-1 < (char)bVar2) {
      __n = (ulong)bVar2;
    }
    sVar1 = *(size_t *)(param_1 + 0x18);
    if (-1 < (char)bVar3) {
      sVar1 = (ulong)bVar3;
    }
    if (__n == sVar1) {
      __s1 = (undefined8 *)*(void **)(param_2 + 0x10);
      if (-1 < (char)bVar2) {
        __s1 = (undefined8 *)(param_2 + 0x10);
      }
      __s2 = (undefined8 *)*(void **)(param_1 + 0x10);
      if (-1 < (char)bVar3) {
        __s2 = (undefined8 *)(param_1 + 0x10);
      }
      iVar4 = memcmp(__s1,__s2,__n);
      if (iVar4 == 0) {
        return *(int *)(param_2 + 0x2c) == *(int *)(param_1 + 0x2c);
      }
    }
  }
  return false;
}


// ===== 00c0a874  FUN_00c0a874 =====

bool FUN_00c0a874(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x30) == 1;
}


// ===== 00c0a88c  FUN_00c0a88c =====

undefined1  [16]
FUN_00c0a88c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  int *piVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  piVar6 = (int *)*param_5;
  plVar4 = param_2 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    iVar1 = *piVar6;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, iVar1 < (int)plVar3[4]) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_00c0a8f8;
      }
      if (iVar1 <= (int)plVar3[4]) {
        uVar5 = 0;
        goto LAB_00c0a968;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_00c0a8f8:
  plVar3 = (long *)operator_new(0x30);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  iVar1 = *piVar6;
  plVar3[5] = 0;
  *plVar3 = 0;
  plVar3[1] = 0;
  *(int *)(plVar3 + 4) = iVar1;
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
LAB_00c0a968:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 00c0a998  FUN_00c0a998 =====

void FUN_00c0a998(undefined8 *param_1,long *param_2,undefined4 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_00d49ff8;
  lVar1 = *param_2;
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00d0f740(1,lVar1 + 8);
  }
  lVar3 = param_2[4];
  lVar1 = param_2[3];
  lVar4 = param_2[1];
  param_1[3] = param_2[2];
  param_1[2] = lVar4;
  param_1[5] = lVar3;
  param_1[4] = lVar1;
  uVar2 = *(undefined8 *)(param_4 + 0x38);
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = param_3;
  param_1[6] = uVar2;
  param_1[8] = 0;
  FUN_007ebd38(param_1 + 9,1,*(undefined8 *)(param_4 + 0x20));
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 3;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((long)param_1 + 0x8c) = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
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
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((long)param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined2 *)((long)param_1 + 0xec) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = param_4;
  param_1[0x21] = param_5;
  param_1[0x22] = param_6;
  param_1[0x3c] = FUN_00433984;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  return;
}


// ===== 00c0aab4  FUN_00c0aab4 =====

void FUN_00c0aab4(long *param_1,long *param_2)

{
  size_t sVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  if ((lVar3 - lVar2 == 0) || (*(char *)(lVar2 + 0x88) != '\x01')) {
    bVar6 = false;
  }
  else {
    auVar10 = FUN_007b8248(0);
    if (*(char *)(lVar2 + 0x88) != '\x01') goto LAB_00c0ab60;
    bVar5 = *(byte *)(lVar2 + 0x87);
    sVar1 = *(size_t *)(lVar2 + 0x78);
    if (-1 < (char)bVar5) {
      sVar1 = (ulong)bVar5;
    }
    if (auVar10._8_8_ != sVar1) goto LAB_00c0ab60;
    puVar8 = (undefined8 *)*(void **)(lVar2 + 0x70);
    if (-1 < (char)bVar5) {
      puVar8 = (undefined8 *)(lVar2 + 0x70);
    }
    iVar7 = memcmp(auVar10._0_8_,puVar8,auVar10._8_8_);
    bVar6 = iVar7 != 0;
  }
  if ((ulong)((lVar3 - lVar2 >> 4) * -0x79435e50d79435e5) < 2 && !bVar6) {
    return;
  }
LAB_00c0ab60:
  puVar9 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)param_2[1];
  puVar8 = puVar9;
  if (puVar9 != puVar4) {
    do {
      if ((((*(char *)((long)puVar8 + 0x17) < '\0') && (puVar8[1] == 0x48)) &&
          (iVar7 = memcmp((void *)*puVar8,
                          "http://www.webrtc.org/experiments/rtp-hdrext/generic-frame-descriptor-00"
                          ,0x48), iVar7 == 0)) && (*(int *)((long)puVar8 + 0x24) != 4)) {
        return;
      }
      puVar8 = puVar8 + 5;
    } while (puVar8 != puVar4);
    do {
      if (*(char *)((long)puVar9 + 0x17) < '\0') {
        if (puVar9[1] == 0x57) {
          iVar7 = memcmp((void *)*puVar9,
                         "https://aomediacodec.github.io/av1-rtp-spec/#dependency-descriptor-rtp-header-extension"
                         ,0x57);
        }
        else {
          if (puVar9[1] != 0x46) goto LAB_00c0abe8;
          iVar7 = memcmp((void *)*puVar9,
                         "http://www.webrtc.org/experiments/rtp-hdrext/video-layers-allocation00",
                         0x46);
        }
        if (iVar7 == 0) {
          *(undefined4 *)((long)puVar9 + 0x24) = 0;
        }
      }
LAB_00c0abe8:
      puVar9 = puVar9 + 5;
    } while (puVar9 != puVar4);
  }
  return;
}


// ===== 00c0ac40  FUN_00c0ac40 =====

/* WARNING: Removing unreachable block (ram,0x00c0b03c) */
/* WARNING: Removing unreachable block (ram,0x00c0af38) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00c0ac40(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 *******param_7,ulong param_8,
                 undefined4 param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                 long param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                 undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                 undefined8 *param_21,long param_22)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *******local_100;
  ulong uStack_f8;
  byte bStack_e9;
  long *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined8 *puStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long lStack_80;
  undefined8 *******local_78;
  ulong uStack_70;
  
  lVar1 = param_22;
  puVar3 = param_21;
  *param_1 = &PTR_FUN_00d49ff8;
  lVar7 = *param_2;
  param_1[1] = lVar7;
  local_a0 = param_3;
  local_98 = param_5;
  uStack_90 = param_6;
  if (lVar7 != 0) {
    FUN_00d0f740(1,lVar7 + 8);
  }
  lVar10 = param_2[4];
  lVar7 = param_2[3];
  lVar11 = param_2[1];
  param_1[3] = param_2[2];
  param_1[2] = lVar11;
  param_1[5] = lVar10;
  param_1[4] = lVar7;
  uVar8 = *(undefined8 *)(param_13 + 0x38);
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined4 *)((long)param_1 + 0x3c) = param_9;
  param_1[6] = uVar8;
  param_1[8] = 0;
  FUN_007ebd38(param_1 + 9,1,*(undefined8 *)(param_13 + 0x20));
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 3;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((long)param_1 + 0x8c) = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((long)param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined2 *)((long)param_1 + 0xec) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = param_13;
  param_1[0x21] = param_14;
  param_1[0x22] = param_15;
  param_1[0x23] = param_16;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x32] = 0;
  param_1[0x30] = *puVar3;
  param_1[0x31] = puVar3[1];
  param_1[0x32] = puVar3[2];
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  (**(code **)(lVar1 + 0x10))(1,lVar1,param_1 + 0x3a);
  param_1[0x3c] = *(undefined8 *)(lVar1 + 0x10);
  param_1[0x3d] = *(undefined8 *)(lVar1 + 0x18);
  *(code **)(lVar1 + 0x10) = FUN_00433984;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  if (*(int *)((long)param_1 + 0x3c) == 1) {
    FUN_00c0aab4(param_12,param_1 + 0x30);
  }
  local_d8 = &local_a0;
  puStack_a8 = &local_98;
  local_c0 = param_18;
  uStack_b8 = param_19;
  uStack_c8 = param_17;
  local_b0 = (undefined1 *)&param_20;
  local_e0 = param_1;
  local_d0 = param_4;
  (**(code **)(**(long **)(param_1[0x20] + 0x30) + 0x60))
            (*(long **)(param_1[0x20] + 0x30),&local_e0,FUN_00c12efc,&local_100);
  lVar1 = param_1[0xb];
  if (param_1[10] == lVar1) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
              );
  }
  uVar9 = *param_10;
  uVar8 = (**(code **)(*(long *)param_1[0x21] + 0x18))();
  FUN_00c0b124(lVar1 + -8,uVar9,param_11,param_12,uVar8);
  iVar2 = *(int *)((long)param_1 + 0x3c);
  lVar1 = *(long *)(param_1[0x20] + 0x30);
  lVar7 = *(long *)(param_1[0x20] + 0x38);
  if (param_8 == 0) {
    FUN_00835cc0(&local_100);
    uStack_70 = uStack_f8;
    local_78 = local_100;
    if (-1 < (char)bStack_e9) {
      uStack_70 = (ulong)bStack_e9;
      local_78 = &local_100;
    }
    local_88 = param_1[0x3f];
  }
  else {
    local_88 = param_1[0x3f];
    uStack_70 = param_8;
    local_78 = param_7;
  }
  lStack_80 = lVar1;
  if (iVar2 == 0) {
    local_e0 = (undefined8 *)0x0;
    local_d8 = (undefined8 *)0x0;
    local_d0 = 0;
    pvVar5 = operator_new(0xd0);
    FUN_00c11528(pvVar5,&lStack_80,&local_78,&local_e0,&local_88);
    if (pvVar5 != (void *)0x0) {
      (*(code *)**(undefined8 **)((long)pvVar5 + 0x10))();
    }
    lVar10 = 0;
    if (pvVar5 != (void *)0x0) {
      lVar10 = (long)pvVar5 + 0x10;
    }
    plVar4 = (long *)operator_new(0x30);
    plVar4[2] = lVar7;
    plVar4[3] = lVar1;
    plVar4[4] = lVar10;
    *plVar4 = (long)&PTR_FUN_00d4a0c8;
    plVar4[1] = (long)&PTR_FUN_00d4a178;
    *(undefined4 *)(plVar4 + 5) = 0;
    local_e8 = plVar4;
    if (plVar4 != (long *)0x0) {
      FUN_00d0f740(1,plVar4 + 5);
    }
    puVar3 = local_d8;
    if (local_e0 != (undefined8 *)0x0) {
      do {
        if (local_e0 == puVar3) goto LAB_00c0b054;
        puVar3 = puVar3 + -3;
      } while (puVar3 != (undefined8 *)0x0);
LAB_00c0b0d8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  else {
    local_e0 = (undefined8 *)0x0;
    local_d8 = (undefined8 *)0x0;
    local_d0 = 0;
    puVar3 = (undefined8 *)operator_new(0xb8);
    FUN_00c118ec(puVar3,&lStack_80,&local_78,&local_e0,&local_88);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
    }
    plVar4 = (long *)operator_new(0x30);
    plVar4[2] = lVar7;
    plVar4[3] = lVar1;
    plVar4[4] = (long)puVar3;
    *plVar4 = (long)&PTR_FUN_00d4a0c8;
    plVar4[1] = (long)&PTR_FUN_00d4a178;
    *(undefined4 *)(plVar4 + 5) = 0;
    local_e8 = plVar4;
    if (plVar4 != (long *)0x0) {
      FUN_00d0f740(1,plVar4 + 5);
    }
    puVar3 = local_d8;
    if (local_e0 != (undefined8 *)0x0) {
      do {
        if (local_e0 == puVar3) goto LAB_00c0b054;
        puVar3 = puVar3 + -3;
      } while (puVar3 != (undefined8 *)0x0);
      goto LAB_00c0b0d8;
    }
  }
LAB_00c0b064:
  puVar3 = (undefined8 *)param_1[0xe];
  if (puVar3 < (undefined8 *)param_1[0xf]) {
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    local_e8 = (long *)0x0;
    puVar6 = puVar3 + 1;
    *puVar3 = plVar4;
  }
  else {
    puVar6 = (undefined8 *)FUN_00c0f6c0(param_1 + 0xd,&local_e8);
  }
  param_1[0xe] = puVar6;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 8))(local_e8);
  }
  if ((param_8 == 0) && ((char)bStack_e9 < '\0')) {
    operator_delete(local_100);
  }
  return;
LAB_00c0b054:
  local_d8 = local_e0;
  operator_delete(local_e0);
  goto LAB_00c0b064;
}


// ===== 00c0b124  FUN_00c0b124 =====

void FUN_00c0b124(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *local_58;
  undefined8 *local_50;
  long local_48;
  
  (**(code **)(*(long *)*param_1 + 0x20))();
  plVar7 = *(long **)(*param_1 + 0x18);
  (**(code **)(*plVar7 + 0xd0))(plVar7,param_3);
  (**(code **)(*plVar7 + 0xd8))(plVar7,param_4);
  iVar4 = (**(code **)(*(long *)*param_1 + 0x40))();
  if (iVar4 == 1) {
    plVar5 = (long *)FUN_00bd76f0(param_5);
  }
  else {
    plVar5 = (long *)FUN_00bd76dc(param_5);
  }
  local_58 = (undefined8 *)0x0;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  lVar8 = *plVar5;
  lVar1 = plVar5[1];
  uVar2 = lVar1 - lVar8;
  puVar6 = local_50;
  if (uVar2 != 0) {
    if (0x12f684bda12f684 < (ulong)(((long)uVar2 >> 3) * -0x7b425ed097b425ed)) {
                    /* WARNING: Subroutine does not return */
      FUN_0088fd20();
    }
    puVar6 = (undefined8 *)operator_new(uVar2);
    local_48 = (long)puVar6 + uVar2;
    local_58 = puVar6;
    do {
      if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00890830(puVar6,lVar8);
      lVar8 = lVar8 + 0xd8;
      puVar6 = puVar6 + 0x1b;
    } while (lVar8 != lVar1);
  }
  local_50 = puVar6;
  (**(code **)(*plVar7 + 0x130))(plVar7,&local_58);
  puVar3 = local_58;
  puVar6 = local_50;
  if (local_58 != (undefined8 *)0x0) {
    while (puVar3 != puVar6) {
      puVar6 = puVar6 + -0x1b;
      if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      (**(code **)*puVar6)(puVar6);
    }
    local_50 = puVar3;
    operator_delete(local_58);
  }
  return;
}


// ===== 00c0b2ec  FUN_00c0b2ec =====

void FUN_00c0b2ec(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  void *pvVar8;
  void *pvVar9;
  undefined8 *puVar10;
  
  *param_1 = &PTR_FUN_00d49ff8;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    if ((*(byte *)((long)param_1 + 0x81) & 1) == 0) {
      FUN_00c0d390(param_1);
    }
    *(undefined1 *)((long)param_1 + 0xeb) = 0;
    *(undefined1 *)(param_1 + 0x10) = 1;
    if (*(char *)((long)param_1 + 0x8c) == '\x01') {
      *(undefined1 *)((long)param_1 + 0x8c) = 0;
    }
  }
  if (param_1[0x1e] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../pc/rtp_transceiver.cc",0x1a7,"!channel_",&DAT_001fbee0,
                 "Missing call to ClearChannel?");
  }
  plVar2 = (long *)param_1[0x3f];
  param_1[0x3f] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[0x3e];
  param_1[0x3e] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  (*(code *)param_1[0x3c])(0,param_1 + 0x3a,param_1 + 0x3a);
  pvVar9 = (void *)param_1[0x36];
  if (pvVar9 != (void *)0x0) {
    pvVar8 = (void *)param_1[0x37];
    pvVar3 = pvVar9;
    if (pvVar9 != pvVar8) {
      do {
        pvVar8 = (void *)((long)pvVar8 + -0x20);
        if (pvVar8 == (void *)0x0) goto LAB_00c0b7cc;
        FUN_00668f8c(pvVar8);
      } while (pvVar8 != pvVar9);
      pvVar3 = (void *)param_1[0x36];
    }
    param_1[0x37] = pvVar9;
    operator_delete(pvVar3);
  }
  pvVar9 = (void *)param_1[0x33];
  if (pvVar9 != (void *)0x0) {
    pvVar8 = (void *)param_1[0x34];
    pvVar3 = pvVar9;
    if (pvVar9 != pvVar8) {
      do {
        pvVar8 = (void *)((long)pvVar8 + -0x28);
        if (pvVar8 == (void *)0x0) goto LAB_00c0b7cc;
        FUN_00668d5c(pvVar8);
      } while (pvVar8 != pvVar9);
      pvVar3 = (void *)param_1[0x33];
    }
    param_1[0x34] = pvVar9;
    operator_delete(pvVar3);
  }
  pvVar9 = (void *)param_1[0x30];
  if (pvVar9 != (void *)0x0) {
    pvVar8 = (void *)param_1[0x31];
    pvVar3 = pvVar9;
    if (pvVar9 != pvVar8) {
      do {
        pvVar8 = (void *)((long)pvVar8 + -0x28);
        if (pvVar8 == (void *)0x0) goto LAB_00c0b7cc;
        FUN_00668d5c(pvVar8);
      } while (pvVar8 != pvVar9);
      pvVar3 = (void *)param_1[0x30];
    }
    param_1[0x31] = pvVar9;
    operator_delete(pvVar3);
  }
  puVar10 = (undefined8 *)param_1[0x2d];
  if (puVar10 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)param_1[0x2e];
    puVar4 = puVar10;
    if (puVar10 != puVar6) {
      do {
        puVar6 = puVar6 + -0x14;
        if (puVar6 == (undefined8 *)0x0) goto LAB_00c0b7cc;
        (**(code **)*puVar6)(puVar6);
      } while (puVar6 != puVar10);
      puVar4 = (undefined8 *)param_1[0x2d];
    }
    param_1[0x2e] = puVar10;
    operator_delete(puVar4);
  }
  puVar10 = (undefined8 *)param_1[0x2a];
  if (puVar10 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)param_1[0x2b];
    puVar4 = puVar10;
    if (puVar10 != puVar6) {
      do {
        puVar6 = puVar6 + -0x14;
        if (puVar6 == (undefined8 *)0x0) goto LAB_00c0b7cc;
        (**(code **)*puVar6)(puVar6);
      } while (puVar6 != puVar10);
      puVar4 = (undefined8 *)param_1[0x2a];
    }
    param_1[0x2b] = puVar10;
    operator_delete(puVar4);
  }
  puVar10 = (undefined8 *)param_1[0x27];
  if (puVar10 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)param_1[0x28];
    puVar4 = puVar10;
    if (puVar10 != puVar6) {
      do {
        puVar6 = puVar6 + -0x14;
        if (puVar6 == (undefined8 *)0x0) goto LAB_00c0b7cc;
        (**(code **)*puVar6)(puVar6);
      } while (puVar6 != puVar10);
      puVar4 = (undefined8 *)param_1[0x27];
    }
    param_1[0x28] = puVar10;
    operator_delete(puVar4);
  }
  puVar10 = (undefined8 *)param_1[0x24];
  if (puVar10 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)param_1[0x25];
    puVar4 = puVar10;
    if (puVar10 != puVar6) {
      do {
        puVar6 = puVar6 + -0x14;
        if (puVar6 == (undefined8 *)0x0) goto LAB_00c0b7cc;
        (**(code **)*puVar6)(puVar6);
      } while (puVar6 != puVar10);
      puVar4 = (undefined8 *)param_1[0x24];
    }
    param_1[0x25] = puVar10;
    operator_delete(puVar4);
  }
  plVar2 = (long *)param_1[0x1f];
  param_1[0x1f] = 0;
  if (plVar2 != (long *)0x0) {
    pvVar9 = (void *)*plVar2;
    if (*(long *)((long)pvVar9 + 0x40) != 0) {
      FUN_00b970c4(pvVar9);
      pvVar9 = (void *)*plVar2;
    }
    if ((pvVar9 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar9), iVar1 == 1)) {
      FUN_00b96ecc(pvVar9);
      operator_delete(pvVar9);
    }
    operator_delete(plVar2);
  }
  plVar2 = (long *)param_1[0x1e];
  param_1[0x1e] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if ((*(char *)(param_1 + 0x1a) == '\x01') && (*(char *)((long)param_1 + 0xcf) < '\0')) {
    operator_delete((void *)param_1[0x17]);
  }
  if ((*(char *)(param_1 + 0x16) == '\x01') && (*(char *)((long)param_1 + 0xaf) < '\0')) {
    operator_delete((void *)param_1[0x13]);
    plVar2 = (long *)param_1[0xd];
  }
  else {
    plVar2 = (long *)param_1[0xd];
  }
  if (plVar2 != (long *)0x0) {
    plVar7 = (long *)param_1[0xe];
    plVar5 = plVar2;
    if (plVar2 != plVar7) {
      do {
        plVar7 = plVar7 + -1;
        if (plVar7 == (long *)0x0) goto LAB_00c0b7cc;
        if ((long *)*plVar7 != (long *)0x0) {
          (**(code **)(*(long *)*plVar7 + 8))();
        }
      } while (plVar7 != plVar2);
      plVar5 = (long *)param_1[0xd];
    }
    param_1[0xe] = plVar2;
    operator_delete(plVar5);
  }
  plVar2 = (long *)param_1[10];
  if (plVar2 != (long *)0x0) {
    plVar7 = (long *)param_1[0xb];
    plVar5 = plVar2;
    if (plVar2 != plVar7) {
      do {
        plVar7 = plVar7 + -1;
        if (plVar7 == (long *)0x0) {
LAB_00c0b7cc:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((long *)*plVar7 != (long *)0x0) {
          (**(code **)(*(long *)*plVar7 + 8))();
        }
      } while (plVar7 != plVar2);
      plVar5 = (long *)param_1[10];
    }
    param_1[0xb] = plVar2;
    operator_delete(plVar5);
  }
  pvVar9 = (void *)param_1[9];
  if ((pvVar9 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar9), iVar1 == 1)) {
    operator_delete(pvVar9);
  }
  pvVar9 = (void *)param_1[8];
  if ((pvVar9 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar9), iVar1 == 1)) {
    operator_delete(pvVar9);
  }
  plVar2 = (long *)param_1[1];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00c0b798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 00c0b808  FUN_00c0b808 =====

void FUN_00c0b808(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc0b810);
  (*pcVar1)();
}


// ===== 00c0b810  FUN_00c0b810 =====

void FUN_00c0b810(undefined8 param_1,long param_2,void *param_3,ulong param_4,undefined8 param_5,
                 undefined8 param_6,undefined1 param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,undefined8 param_11,long param_12)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *local_100 [2];
  code *local_f0;
  code *pcStack_e8;
  undefined1 uStack_d9;
  long local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 *local_a8;
  long **pplStack_a0;
  void **local_98;
  undefined1 *puStack_90;
  long *local_88;
  undefined1 local_7c [4];
  undefined8 local_78;
  void *pvStack_70;
  ulong local_68;
  
  pvVar5 = (void *)(param_2 + 0x98);
  local_7c[0] = param_7;
  local_78 = param_5;
  pvStack_70 = param_3;
  local_68 = param_4;
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    if ((param_4 != 0) && (param_3 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string:2845: libc++ Hardening assertion __n == 0 || __s != nullptr failed: string::assign received nullptr\n"
                );
    }
    FUN_00547b08(param_2 + 0x98,param_3,param_4);
  }
  else {
    if (0x7ffffffffffffff6 < param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_005d45ec();
    }
    if (param_4 < 0x17) {
      *(char *)(param_2 + 0xaf) = (char)param_4;
    }
    else {
      uVar1 = (param_4 & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      pvVar5 = operator_new(uVar2);
      *(void **)(param_2 + 0x98) = pvVar5;
      *(ulong *)(param_2 + 0xa0) = param_4;
      *(ulong *)(param_2 + 0xa8) = uVar2 | 0x8000000000000000;
    }
    if ((void *)((long)pvVar5 + param_4) < pvVar5) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((pvVar5 <= param_3) && (param_3 < (void *)((long)pvVar5 + param_4))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(pvVar5,param_3,param_4);
    *(undefined1 *)((long)pvVar5 + param_4) = 0;
    *(undefined1 *)(param_2 + 0xb0) = 1;
  }
  lVar3 = param_12;
  local_88 = (long *)0x0;
  plVar4 = *(long **)(*(long *)(param_2 + 0x100) + 0x30);
  puStack_c0 = &local_78;
  local_c8 = param_10;
  local_a8 = (undefined1 *)&param_11;
  pplStack_a0 = &local_88;
  local_98 = &pvStack_70;
  puStack_90 = local_7c;
  local_d8 = param_2;
  uStack_d0 = param_9;
  local_b8 = param_6;
  uStack_b0 = param_8;
  (**(code **)(*plVar4 + 0x60))(plVar4,&local_d8,FUN_00c131a0,&uStack_d9);
  plVar4 = local_88;
  pcStack_e8 = *(code **)(lVar3 + 0x18);
  local_f0 = FUN_00433984;
  local_88 = (long *)0x0;
  if (pcStack_e8 != (code *)0x0) {
    pvVar5 = operator_new(0x20);
    (**(code **)(lVar3 + 0x10))(1,lVar3,pvVar5);
    uVar7 = *(undefined8 *)(lVar3 + 0x18);
    uVar6 = *(undefined8 *)(lVar3 + 0x10);
    *(code **)(lVar3 + 0x10) = FUN_00433984;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    pcStack_e8 = FUN_00c13828;
    local_f0 = FUN_00c13874;
    *(undefined8 *)((long)pvVar5 + 0x18) = uVar7;
    *(undefined8 *)((long)pvVar5 + 0x10) = uVar6;
    local_100[0] = pvVar5;
  }
  FUN_00c0ba68(param_1,param_2,plVar4,local_100,0);
  (*local_f0)(0,local_100,local_100);
  plVar4 = local_88;
  local_88 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  return;
}


// ===== 00c0ba68  FUN_00c0ba68 =====

void FUN_00c0ba68(int *param_1,long param_2,long *param_3,undefined8 param_4,ulong param_5)

{
  char cVar1;
  void *pvVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  long *plVar6;
  void *pvVar7;
  undefined1 uStack_99;
  void *local_98;
  long local_90;
  undefined8 uStack_88;
  void **local_80;
  long lStack_78;
  void *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined8 local_58;
  int *local_50;
  void **ppvStack_48;
  
  if ((*(byte *)(param_2 + 0x80) & 1) == 0) {
    FUN_007ebca0(&local_98);
    pvVar2 = local_98;
    pvVar7 = *(void **)(param_2 + 0x40);
    local_98 = (void *)0x0;
    *(void **)(param_2 + 0x40) = pvVar2;
    if (pvVar7 != (void *)0x0) {
      iVar5 = FUN_00d0f7a0(0xffffffff,pvVar7);
      if (iVar5 == 1) {
        operator_delete(pvVar7);
      }
      pvVar2 = local_98;
      if ((local_98 != (void *)0x0) && (iVar5 = FUN_00d0f7a0(0xffffffff,local_98), iVar5 == 1)) {
        operator_delete(pvVar2);
      }
    }
    plVar6 = *(long **)(param_2 + 0xf0);
    *(long **)(param_2 + 0xf0) = param_3;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    if (*(char *)(param_2 + 0xd0) == '\x01') {
      if (*(char *)(param_2 + 0xcf) < '\0') {
        operator_delete(*(void **)(param_2 + 0xb8));
      }
      *(undefined1 *)(param_2 + 0xd0) = 0;
    }
    local_98 = *(void **)(param_2 + 0x40);
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = (void *)0xaaaaaaaaaaaaaa00;
    local_58 = 0xaaaaaaaaaaaaaa00;
    plVar6 = *(long **)(*(long *)(param_2 + 0x100) + 0x20);
    if (local_98 != (void *)0x0) {
      FUN_00d0f740(1);
    }
    local_90 = *(long *)(param_2 + 0xf0);
    *(undefined1 **)(param_1 + 8) = &DAT_aaaaaaaaaaaaaaaa;
    *(undefined1 **)(param_1 + 2) = &DAT_aaaaaaaaaaaaaaaa;
    *(undefined1 **)param_1 = &DAT_aaaaaaaaaaaaaaaa;
    *(undefined1 **)(param_1 + 6) = &DAT_aaaaaaaaaaaaaaaa;
    *(undefined1 **)(param_1 + 4) = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &local_70;
    ppvStack_48 = &local_98;
    *param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x26) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined8 *)((long)param_1 + 0x1d) = 0;
    uStack_88 = param_4;
    lStack_78 = param_2;
    local_50 = param_1;
    (**(code **)(*plVar6 + 0x60))(plVar6,&local_50,FUN_00c138e8,&uStack_99);
    pvVar2 = local_98;
    if ((local_98 != (void *)0x0) && (iVar5 = FUN_00d0f7a0(0xffffffff,local_98), iVar5 == 1)) {
      operator_delete(pvVar2);
    }
    puVar4 = local_60;
    puVar3 = puStack_68;
    pvVar2 = local_70;
    if (*param_1 == 0) {
      cVar1 = *(char *)(param_2 + 0xd0);
      if (cVar1 == (char)local_58) {
        if (cVar1 != '\0') {
          if (*(char *)(param_2 + 0xcf) < '\0') {
            operator_delete(*(void **)(param_2 + 0xb8));
          }
          puVar3 = local_60;
          pvVar2 = local_70;
          local_60 = (undefined1 *)((ulong)local_60 & 0xffffffffffffff);
          local_70 = (void *)((ulong)local_70 & 0xffffffffffffff00);
          *(undefined1 **)(param_2 + 0xc0) = puStack_68;
          *(void **)(param_2 + 0xb8) = pvVar2;
          *(undefined1 **)(param_2 + 200) = puVar3;
        }
      }
      else if (cVar1 == '\0') {
        puStack_68 = (undefined1 *)0x0;
        local_60 = (undefined1 *)0x0;
        local_70 = (void *)0x0;
        *(undefined1 **)(param_2 + 200) = puVar4;
        *(undefined1 **)(param_2 + 0xc0) = puVar3;
        *(void **)(param_2 + 0xb8) = pvVar2;
        *(undefined1 *)(param_2 + 0xd0) = 1;
      }
      else {
        if (*(char *)(param_2 + 0xcf) < '\0') {
          operator_delete(*(void **)(param_2 + 0xb8));
        }
        *(undefined1 *)(param_2 + 0xd0) = 0;
      }
      if (((param_5 & 1) != 0) &&
         ((*(long *)(param_2 + 0x50) != *(long *)(param_2 + 0x58) ||
          (*(long *)(param_2 + 0x68) != *(long *)(param_2 + 0x70))))) {
        local_98 = *(void **)(param_2 + 0xf0);
        plVar6 = *(long **)(*(long *)(param_2 + 0x100) + 0x30);
        local_90 = param_2;
        (**(code **)(*plVar6 + 0x60))(plVar6,&local_98,FUN_00c14444,&local_50);
      }
    }
    if (((char)local_58 == '\x01') && ((long)local_60 < 0)) {
      operator_delete(local_70);
    }
  }
  else {
    *(undefined1 *)((long)param_1 + 0x26) = 0;
    *param_1 = 6;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined8 *)((long)param_1 + 0x1d) = 0;
    if (param_3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c0bad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 8))(param_3);
      return;
    }
  }
  return;
}


// ===== 00c0bd58  FUN_00c0bd58 =====

void FUN_00c0bd58(undefined8 *param_1,long param_2)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_2 + 0xf0) == 0) {
    param_1[2] = FUN_00433984;
    param_1[3] = 0;
  }
  else {
    FUN_007ebdcc(*(undefined8 *)(param_2 + 0x40));
    pvVar2 = *(void **)(param_2 + 0x40);
    if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
      operator_delete(pvVar2);
    }
    lVar3 = *(long *)(param_2 + 0x48);
    uVar4 = *(undefined8 *)(param_2 + 0xf0);
    *(undefined8 *)(param_2 + 0x40) = 0;
    if (lVar3 != 0) {
      FUN_00d0f740(1,lVar3);
    }
    *param_1 = uVar4;
    param_1[1] = lVar3;
    param_1[2] = FUN_00c14178;
    param_1[3] = FUN_00c140a4;
  }
  return;
}


// ===== 00c0be04  FUN_00c0be04 =====

void FUN_00c0be04(undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  undefined8 *extraout_x8;
  code *pcVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  code *pcStack_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  ulong uStack_d0;
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  long local_a0;
  long local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  
  if (*(long *)(param_2 + 0xf0) == 0) {
    pcVar8 = (code *)0x0;
    pcVar9 = FUN_00433984;
  }
  else {
    if ((param_3 & 1) == 0) {
      local_80 = 0;
      lStack_78 = 0;
      lVar7 = 0;
    }
    else {
      FUN_00c0bff0(&local_80,param_2 + 0x50);
      lVar7 = local_70;
    }
    local_90 = local_80;
    lStack_88 = lStack_78;
    if (*(char *)(param_2 + 0xd0) == '\x01') {
      if (*(char *)(param_2 + 0xcf) < '\0') {
        operator_delete(*(void **)(param_2 + 0xb8));
      }
      *(undefined1 *)(param_2 + 0xd0) = 0;
    }
    plVar5 = *(long **)(param_2 + 0x50);
    plVar6 = *(long **)(param_2 + 0x58);
    local_98 = *(long *)(param_2 + 0xf0);
    *(undefined8 *)(param_2 + 0xf0) = 0;
    uVar1 = (long)plVar6 - (long)plVar5;
    if (uVar1 == 0) {
      plVar2 = (long *)0x0;
      plVar11 = (long *)0x0;
      local_a0 = 0;
      lVar10 = local_a0;
    }
    else {
      if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00bf4944();
      }
      plVar2 = (long *)operator_new(uVar1);
      plVar11 = plVar2;
      do {
        if (plVar11 == (long *)0x0) goto LAB_00c0bfd4;
        puVar3 = (undefined8 *)*plVar5;
        *plVar11 = (long)puVar3;
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)();
        }
        plVar5 = plVar5 + 1;
        plVar11 = plVar11 + 1;
        lVar10 = (long)plVar2 + uVar1;
      } while (plVar5 != plVar6);
    }
    local_a0 = lVar10;
    lVar10 = local_a0;
    plVar5 = *(long **)(param_2 + 0x68);
    plVar6 = *(long **)(param_2 + 0x70);
    uVar1 = (long)plVar6 - (long)plVar5;
    if (uVar1 == 0) {
      plVar4 = (long *)0x0;
      plVar12 = (long *)0x0;
      lVar10 = 0;
    }
    else {
      if ((long)uVar1 < 0) {
        plVar6 = (long *)FUN_00bf495c();
        pcStack_d8 = FUN_00c0bff0;
        plVar5 = (long *)*plVar6;
        plVar6 = (long *)plVar6[1];
        *extraout_x8 = 0;
        extraout_x8[1] = 0;
        extraout_x8[2] = 0;
        puStack_e0 = &stack0xffffffffffffffa0;
        uStack_d0 = uVar1;
        plStack_b8 = plVar2;
        lStack_b0 = param_2;
        puStack_a8 = param_1;
        lStack_c0 = lVar10;
        do {
          if (plVar5 == plVar6) {
            return;
          }
          puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
          pcStack_f0 = (code *)&DAT_aaaaaaaaaaaaaaaa;
          (**(code **)(**(long **)(*plVar5 + 0x18) + 0xf0))(&puStack_100);
          if (puStack_e8 != (undefined1 *)0x0) {
            uVar1 = extraout_x8[1];
            if (uVar1 < (ulong)extraout_x8[2]) {
              if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              (*pcStack_f0)(1,&puStack_100,uVar1);
              lVar7 = uVar1 + 0x20;
              *(code **)(uVar1 + 0x10) = pcStack_f0;
              *(undefined1 **)(uVar1 + 0x18) = puStack_e8;
              pcStack_f0 = FUN_00433984;
              puStack_e8 = (undefined1 *)0x0;
            }
            else {
              lVar7 = FUN_00c11b44(extraout_x8,&puStack_100);
            }
            extraout_x8[1] = lVar7;
          }
          (*pcStack_f0)(0,&puStack_100,&puStack_100);
          plVar5 = plVar5 + 1;
        } while( true );
      }
      plVar4 = (long *)operator_new(uVar1);
      lVar10 = (long)plVar4 + uVar1;
      plVar12 = plVar4;
      do {
        if (plVar12 == (long *)0x0) {
LAB_00c0bfd4:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar3 = (undefined8 *)*plVar5;
        *plVar12 = (long)puVar3;
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)();
        }
        plVar5 = plVar5 + 1;
        plVar12 = plVar12 + 1;
      } while (plVar5 != plVar6);
    }
    plVar5 = (long *)operator_new(0x58);
    pcVar8 = FUN_00c141fc;
    plVar5[2] = (long)plVar2;
    plVar5[3] = (long)plVar11;
    plVar5[6] = (long)plVar12;
    plVar5[7] = lVar10;
    plVar5[4] = local_a0;
    plVar5[5] = (long)plVar4;
    pcVar9 = FUN_00c14280;
    *plVar5 = param_2;
    plVar5[1] = local_98;
    plVar5[9] = lStack_88;
    plVar5[8] = local_90;
    plVar5[10] = lVar7;
    *param_1 = plVar5;
  }
  param_1[2] = pcVar9;
  param_1[3] = pcVar8;
  return;
}


// ===== 00c0bff0  FUN_00c0bff0 =====

void FUN_00c0bff0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined1 *local_60;
  undefined1 *puStack_58;
  code *local_50;
  undefined1 *local_48;
  
  plVar1 = (long *)*param_2;
  plVar3 = (long *)param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    if (plVar1 == plVar3) {
      return;
    }
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    (**(code **)(**(long **)(*plVar1 + 0x18) + 0xf0))(&local_60);
    if (local_48 != (undefined1 *)0x0) {
      uVar2 = param_1[1];
      if (uVar2 < (ulong)param_1[2]) {
        if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        (*local_50)(1,&local_60,uVar2);
        lVar4 = uVar2 + 0x20;
        *(code **)(uVar2 + 0x10) = local_50;
        *(undefined1 **)(uVar2 + 0x18) = local_48;
        local_50 = FUN_00433984;
        local_48 = (undefined1 *)0x0;
      }
      else {
        lVar4 = FUN_00c11b44(param_1,&local_60);
      }
      param_1[1] = lVar4;
    }
    (*local_50)(0,&local_60,&local_60);
    plVar1 = plVar1 + 1;
  } while( true );
}


// ===== 00c0c0f8  FUN_00c0c0f8 =====

void FUN_00c0c0f8(long param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 uStack_71;
  undefined1 **local_70;
  undefined1 *puStack_68;
  code *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  code *local_40;
  code *pcStack_38;
  undefined8 **local_18;
  
  if (*(long *)(param_1 + 0xf0) != 0) {
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    pcStack_38 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    local_40 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    FUN_007ebdcc(*(undefined8 *)(param_1 + 0x40));
    pvVar3 = *(void **)(param_1 + 0x40);
    if ((pvVar3 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar3), iVar1 == 1)) {
      operator_delete(pvVar3);
    }
    lVar4 = *(long *)(param_1 + 0x48);
    puVar5 = *(undefined1 **)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (lVar4 != 0) {
      FUN_00d0f740(1,lVar4);
    }
    local_40 = FUN_00c14178;
    pcStack_38 = FUN_00c140a4;
    local_70 = &local_50;
    plVar2 = *(long **)(*(long *)(param_1 + 0x100) + 0x20);
    local_50 = puVar5;
    puStack_48 = (undefined1 *)lVar4;
    (**(code **)(*plVar2 + 0x60))(plVar2,&local_70,FUN_00c14424,&local_18);
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
    local_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    FUN_00c0be04(&local_70,param_1,0);
    if (local_58 != (undefined1 *)0x0) {
      plVar2 = *(long **)(*(long *)(param_1 + 0x100) + 0x30);
      local_18 = &local_70;
      (**(code **)(*plVar2 + 0x60))(plVar2,&local_18,FUN_00c14434,&uStack_71);
    }
    (*local_60)(0,&local_70,&local_70);
    (*local_40)(0,&local_50,&local_50);
  }
  return;
}


// ===== 00c0c244  FUN_00c0c244 =====

void FUN_00c0c244(long param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  void *pvVar4;
  
  plVar1 = *(long **)(param_1 + 0x58);
  for (plVar3 = *(long **)(param_1 + 0x50); plVar3 != plVar1; plVar3 = plVar3 + 1) {
    (**(code **)(**(long **)(*plVar3 + 0x18) + 0xc0))(*(long **)(*plVar3 + 0x18),0);
  }
  plVar1 = *(long **)(param_1 + 0x70);
  for (plVar3 = *(long **)(param_1 + 0x68); plVar3 != plVar1; plVar3 = plVar3 + 1) {
    (**(code **)(**(long **)(*plVar3 + 0x20) + 0xa0))(*(long **)(*plVar3 + 0x20),0);
  }
  plVar3 = *(long **)(param_1 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = *(long **)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = *(long **)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (plVar3 == (long *)0x0) {
    return;
  }
  pvVar4 = (void *)*plVar3;
  if (*(long *)((long)pvVar4 + 0x40) != 0) {
    FUN_00b970c4(pvVar4);
    pvVar4 = (void *)*plVar3;
  }
  if ((pvVar4 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar2 == 1)) {
    FUN_00b96ecc(pvVar4);
    operator_delete(pvVar4);
  }
  operator_delete(plVar3);
  return;
}


// ===== 00c0c364  FUN_00c0c364 =====

void FUN_00c0c364(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 *local_68;
  undefined8 *local_60;
  long local_58;
  
  uVar5 = (**(code **)(*(long *)param_1[0x21] + 0x18))();
  iVar4 = (**(code **)(*param_1 + 0x20))(param_1);
  plVar8 = *(long **)(*param_2 + 0x18);
  if (iVar4 == 1) {
    plVar6 = (long *)FUN_00bd76f0();
  }
  else {
    plVar6 = (long *)FUN_00bd76dc(uVar5);
  }
  local_68 = (undefined8 *)0x0;
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  lVar9 = *plVar6;
  lVar1 = plVar6[1];
  uVar2 = lVar1 - lVar9;
  puVar7 = local_60;
  if (uVar2 != 0) {
    if (0x12f684bda12f684 < (ulong)(((long)uVar2 >> 3) * -0x7b425ed097b425ed)) {
                    /* WARNING: Subroutine does not return */
      FUN_0088fd20();
    }
    puVar7 = (undefined8 *)operator_new(uVar2);
    local_58 = (long)puVar7 + uVar2;
    local_68 = puVar7;
    do {
      if (puVar7 == (undefined8 *)0x0) goto LAB_00c0c508;
      FUN_00890830(puVar7,lVar9);
      lVar9 = lVar9 + 0xd8;
      puVar7 = puVar7 + 0x1b;
    } while (lVar9 != lVar1);
  }
  local_60 = puVar7;
  (**(code **)(*plVar8 + 0x130))(plVar8,&local_68);
  puVar3 = local_68;
  puVar7 = local_60;
  if (local_68 != (undefined8 *)0x0) {
    while (puVar3 != puVar7) {
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
    local_60 = puVar3;
    operator_delete(local_68);
  }
  plVar8 = (long *)param_1[0xb];
  if (plVar8 < (long *)param_1[0xc]) {
    if (plVar8 == (long *)0x0) {
LAB_00c0c508:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar7 = (undefined8 *)*param_2;
    *plVar8 = (long)puVar7;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)();
    }
    plVar8 = plVar8 + 1;
  }
  else {
    plVar8 = (long *)FUN_00c11df0(param_1 + 10,param_2);
  }
  param_1[0xb] = (long)plVar8;
  return;
}


// ===== 00c0c544  FUN_00c0c544 =====

void FUN_00c0c544(long *param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 uStack_61;
  long local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  plVar2 = *(long **)(*(long *)(param_2 + 0x100) + 0x30);
  puStack_58 = &local_50;
  local_60 = param_2;
  local_50 = param_4;
  uStack_48 = param_5;
  (**(code **)(*plVar2 + 0x60))(plVar2,&local_60,FUN_00c14500,&uStack_61);
  lVar1 = *(long *)(param_2 + 0x58);
  if (*(long *)(param_2 + 0x50) != lVar1) {
    uVar5 = *param_3;
    uVar3 = (**(code **)(**(long **)(param_2 + 0x108) + 0x18))();
    FUN_00c0b124(lVar1 + -8,uVar5,param_6,param_7,uVar3);
    if (*(long *)(param_2 + 0x50) != *(long *)(param_2 + 0x58)) {
      puVar4 = *(undefined8 **)(*(long *)(param_2 + 0x58) + -8);
      *param_1 = (long)puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
            );
}


// ===== 00c0c634  FUN_00c0c634 =====

undefined8 FUN_00c0c634(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = *(long **)(param_1 + 0x50);
  plVar6 = *(long **)(param_1 + 0x58);
  if (plVar5 != plVar6) {
    uVar3 = (long)plVar6 + (-8 - (long)plVar5);
    uVar2 = (uint)uVar3;
    if ((~uVar2 & 0x18) != 0) {
      uVar4 = (ulong)((uVar2 >> 3) + 1) & 3;
      do {
        if (*plVar5 == param_2) goto joined_r0x00c0c6e8;
        uVar4 = uVar4 - 1;
        plVar5 = plVar5 + 1;
      } while (uVar4 != 0);
    }
    if (0x17 < uVar3) {
      plVar5 = plVar5 + 2;
      do {
        if (plVar5[-2] == param_2) {
          plVar5 = plVar5 + -2;
          goto joined_r0x00c0c6e8;
        }
        if (plVar5[-1] == param_2) {
          plVar5 = plVar5 + -1;
          goto joined_r0x00c0c6e8;
        }
        if (*plVar5 == param_2) goto joined_r0x00c0c6e8;
        if (plVar5[1] == param_2) {
          plVar5 = plVar5 + 1;
          goto joined_r0x00c0c6e8;
        }
        plVar1 = plVar5 + 2;
        plVar5 = plVar5 + 4;
      } while (plVar1 != plVar6);
    }
    return 0;
  }
joined_r0x00c0c6e8:
  if (plVar5 == plVar6) {
    return 0;
  }
  (**(code **)(**(long **)(*plVar5 + 0x18) + 0xe8))();
  plVar6 = *(long **)(param_1 + 0x58);
  if (plVar5 == plVar6) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
              );
  }
  plVar1 = plVar5 + 1;
  if (plVar5 + 1 == plVar6) {
    if (plVar5 == plVar6) goto LAB_00c0c7a0;
  }
  else {
    do {
      plVar5 = plVar1;
      plVar1 = (long *)plVar5[-1];
      plVar5[-1] = *plVar5;
      *plVar5 = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plVar5 + 1;
    } while (plVar5 + 1 != plVar6);
    plVar6 = *(long **)(param_1 + 0x58);
    if (plVar5 == plVar6) goto LAB_00c0c7a0;
  }
  do {
    plVar6 = plVar6 + -1;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    if ((long *)*plVar6 != (long *)0x0) {
      (**(code **)(*(long *)*plVar6 + 8))();
    }
  } while (plVar6 != plVar5);
LAB_00c0c7a0:
  *(long **)(param_1 + 0x58) = plVar5;
  return 1;
}


// ===== 00c0c7f4  FUN_00c0c7f4 =====

void FUN_00c0c7f4(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x70);
  if (plVar2 < *(long **)(param_1 + 0x78)) {
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar1 = (undefined8 *)*param_2;
    *plVar2 = (long)puVar1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)();
    }
    plVar2 = plVar2 + 1;
  }
  else {
    plVar2 = (long *)FUN_00c12094(param_1 + 0x68);
  }
  *(long **)(param_1 + 0x70) = plVar2;
  return;
}


// ===== 00c0c868  FUN_00c0c868 =====

undefined8 FUN_00c0c868(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 uStack_41;
  long **local_40;
  long *local_38;
  
  local_38 = *(long **)(param_1 + 0x68);
  plVar2 = *(long **)(param_1 + 0x70);
  if (local_38 != plVar2) {
    uVar4 = (long)plVar2 + (-8 - (long)local_38);
    uVar3 = (uint)uVar4;
    if ((~uVar3 & 0x18) != 0) {
      uVar5 = (ulong)((uVar3 >> 3) + 1) & 3;
      do {
        if (*local_38 == param_2) goto LAB_00c0c92c;
        uVar5 = uVar5 - 1;
        local_38 = local_38 + 1;
      } while (uVar5 != 0);
    }
    if (0x17 < uVar4) {
      local_38 = local_38 + 2;
      do {
        if (local_38[-2] == param_2) {
          local_38 = local_38 + -2;
          goto LAB_00c0c92c;
        }
        if (local_38[-1] == param_2) {
          local_38 = local_38 + -1;
          goto LAB_00c0c92c;
        }
        if (*local_38 == param_2) goto LAB_00c0c92c;
        if (local_38[1] == param_2) {
          local_38 = local_38 + 1;
          goto LAB_00c0c92c;
        }
        plVar1 = local_38 + 2;
        local_38 = local_38 + 4;
      } while (plVar1 != plVar2);
    }
    return 0;
  }
LAB_00c0c92c:
  if (local_38 == plVar2) {
    return 0;
  }
  (**(code **)(**(long **)(*local_38 + 0x20) + 0x98))();
  plVar2 = *(long **)(*(long *)(param_1 + 0x100) + 0x30);
  local_40 = &local_38;
  (**(code **)(*plVar2 + 0x60))(plVar2,&local_40,FUN_00c145e8,&uStack_41);
  plVar2 = *(long **)(param_1 + 0x70);
  if (local_38 == plVar2) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
              );
  }
  plVar1 = local_38 + 1;
  if (local_38 + 1 == plVar2) {
    plVar6 = local_38;
    if (local_38 == plVar2) goto LAB_00c0ca10;
  }
  else {
    do {
      plVar6 = plVar1;
      plVar1 = (long *)plVar6[-1];
      plVar6[-1] = *plVar6;
      *plVar6 = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plVar6 + 1;
    } while (plVar6 + 1 != plVar2);
    plVar2 = *(long **)(param_1 + 0x70);
    if (plVar6 == plVar2) goto LAB_00c0ca10;
  }
  do {
    plVar2 = plVar2 + -1;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    if ((long *)*plVar2 != (long *)0x0) {
      (**(code **)(*(long *)*plVar2 + 8))();
    }
  } while (plVar2 != plVar6);
LAB_00c0ca10:
  *(long **)(param_1 + 0x70) = plVar6;
  return 1;
}


// ===== 00c0ca58  FUN_00c0ca58 =====

void FUN_00c0ca58(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x58) - (long)*(long **)(param_2 + 0x50);
  if (lVar2 != 8) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../pc/rtp_transceiver.cc",0x2f8,"1u == senders_.size()",&DAT_00259188,1,
                 lVar2 >> 3);
  }
  puVar1 = *(undefined8 **)(**(long **)(param_2 + 0x50) + 0x18);
  *param_1 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c0ca84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  return;
}


// ===== 00c0cac0  FUN_00c0cac0 =====

void FUN_00c0cac0(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x70) - (long)*(long **)(param_2 + 0x68);
  if (lVar2 != 8) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../pc/rtp_transceiver.cc",0x2fe,"1u == receivers_.size()",&DAT_00259188,1,
                 lVar2 >> 3);
  }
  puVar1 = *(undefined8 **)(**(long **)(param_2 + 0x68) + 0x20);
  *param_1 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c0caec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  return;
}


// ===== 00c0cb28  FUN_00c0cb28 =====

undefined4 FUN_00c0cb28(long param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}


// ===== 00c0cb34  FUN_00c0cb34 =====

void FUN_00c0cb34(undefined8 *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_2 + 0xb0);
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (cVar1 == '\x01') {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    if (*(char *)(param_2 + 0xaf) < '\0') {
      FUN_005478d8(param_1,*(undefined8 *)(param_2 + 0x98),*(undefined8 *)(param_2 + 0xa0));
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + 0x98);
      uVar2 = *(undefined8 *)(param_2 + 0xa8);
      param_1[1] = *(undefined8 *)(param_2 + 0xa0);
      *param_1 = uVar3;
      param_1[2] = uVar2;
    }
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return;
}


// ===== 00c0cbb4  FUN_00c0cbb4 =====

void FUN_00c0cbb4(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  void *pvVar5;
  
  plVar4 = *(long **)(param_1 + 0xf8);
  if (plVar4 == (long *)0x0) {
    lVar2 = *(long *)(param_1 + 0x100);
    if (lVar2 != 0) {
      FUN_00d0f740(1,lVar2);
    }
    plVar4 = (long *)operator_new(8);
    *plVar4 = lVar2;
    if (*(long *)(lVar2 + 0x40) != 0) {
      FUN_00b9709c(lVar2);
    }
    plVar3 = *(long **)(param_1 + 0xf8);
    *(long **)(param_1 + 0xf8) = plVar4;
    if (plVar3 != (long *)0x0) {
      pvVar5 = (void *)*plVar3;
      if (*(long *)((long)pvVar5 + 0x40) != 0) {
        FUN_00b970c4(pvVar5);
        pvVar5 = (void *)*plVar3;
      }
      if ((pvVar5 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar5), iVar1 == 1)) {
        FUN_00b96ecc(pvVar5);
        operator_delete(pvVar5);
      }
      operator_delete(plVar3);
      plVar4 = *(long **)(param_1 + 0xf8);
    }
  }
  FUN_00b96b10(plVar4);
  return;
}


// ===== 00c0cc80  FUN_00c0cc80 =====

void FUN_00c0cc80(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x58) - (long)*(long **)(param_2 + 0x50);
  if (lVar2 != 8) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../pc/rtp_transceiver.cc",0x337,"1u == senders_.size()",&DAT_00259188,1,
                 lVar2 >> 3);
  }
  puVar1 = (undefined8 *)**(long **)(param_2 + 0x50);
  *param_1 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c0cca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  return;
}


// ===== 00c0cce4  FUN_00c0cce4 =====

void FUN_00c0cce4(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x70) - (long)*(long **)(param_2 + 0x68);
  if (lVar2 != 8) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../pc/rtp_transceiver.cc",0x33d,"1u == receivers_.size()",&DAT_00259188,1,
                 lVar2 >> 3);
  }
  puVar1 = (undefined8 *)**(long **)(param_2 + 0x68);
  *param_1 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c0cd0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  return;
}


// ===== 00c0cd48  FUN_00c0cd48 =====

void FUN_00c0cd48(long param_1,int param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  void *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined1 *local_58;
  char *local_50;
  char **ppcStack_48;
  void **local_40;
  char **ppcStack_38;
  undefined1 uStack_11;
  
  if ((*(char *)(param_1 + 0x8c) != '\x01') || (*(int *)(param_1 + 0x88) != param_2)) {
    uVar1 = FUN_00417e08();
    if ((uVar1 & 1) == 0) {
      local_68 = "../../pc/rtp_transceiver.cc";
      local_60 = 0x1a21;
      local_58 = &uStack_11;
      ppcStack_48 = &local_68;
      local_50 = "Changing transceiver (MID=";
      if (*(char *)(param_1 + 0xb0) == '\x01') {
        if (*(char *)(param_1 + 0xaf) < '\0') {
          FUN_005478d8(&local_80,*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0));
        }
        else {
          uStack_78 = *(undefined8 *)(param_1 + 0xa0);
          local_80 = *(void **)(param_1 + 0x98);
          local_70 = *(long *)(param_1 + 0xa8);
        }
      }
      else {
        local_70 = CONCAT17(9,(undefined7)local_70);
        if ((&local_80 < (void **)0x1e4a3b) && ("<not set>" < (char *)((long)&uStack_78 + 1U))) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                    );
        }
        uStack_78 = CONCAT62(uStack_78._2_6_,0x3e);
        local_80 = (void *)s_<not_set>_001e4a3a._0_8_;
      }
      local_40 = &local_80;
      ppcStack_38 = &local_50;
      if (*(char *)(param_1 + 0x8c) == '\x01') {
        pcVar2 = (char *)FUN_00bde30c(*(undefined4 *)(param_1 + 0x88));
      }
      else {
        pcVar2 = "<not set>";
      }
      uVar3 = FUN_00bde30c(param_2);
      FUN_00623bb0("\r\t\n\t\t\t\t",*(undefined8 *)ppcStack_38[1],
                   *(undefined4 *)(ppcStack_38[1] + 8),*ppcStack_38,local_40,
                   ") current direction from ",pcVar2,&DAT_0019fec4,uVar3);
      if (local_70 < 0) {
        operator_delete(local_80);
      }
    }
    *(int *)(param_1 + 0x88) = param_2;
    *(undefined1 *)(param_1 + 0x8c) = 1;
    uVar1 = FUN_00bde288(param_2);
    if ((uVar1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0xea) = 1;
    }
  }
  return;
}


// ===== 00c0cef0  FUN_00c0cef0 =====

void FUN_00c0cef0(long param_1,undefined8 param_2)

{
  *(int *)(param_1 + 0x90) = (int)param_2;
  *(char *)(param_1 + 0x94) = (char)((ulong)param_2 >> 0x20);
  return;
}


// ===== 00c0cf04  FUN_00c0cf04 =====

undefined1 FUN_00c0cf04(long param_1)

{
  return *(undefined1 *)(param_1 + 0x80);
}


// ===== 00c0cf10  FUN_00c0cf10 =====

undefined1 FUN_00c0cf10(long param_1)

{
  return *(undefined1 *)(param_1 + 0x81);
}


// ===== 00c0cf1c  FUN_00c0cf1c =====

undefined4 FUN_00c0cf1c(long *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  
  if (((char)param_1[7] == '\x01') &&
     (uVar2 = (**(code **)(*param_1 + 0x48))(param_1), (uVar2 & 1) != 0)) {
    uVar1 = 4;
  }
  else {
    uVar1 = *(undefined4 *)((long)param_1 + 0x84);
  }
  return uVar1;
}


// ===== 00c0cf6c  FUN_00c0cf6c =====

/* WARNING: Removing unreachable block (ram,0x00c0d120) */
/* WARNING: Removing unreachable block (ram,0x00c0d140) */

void FUN_00c0cf6c(undefined4 *param_1,long *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 local_b8 [2];
  void *local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined4 local_98;
  undefined3 uStack_94;
  undefined4 local_90;
  void *local_88;
  undefined8 uStack_80;
  undefined5 local_78;
  undefined2 uStack_73;
  undefined4 uStack_71;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined4 local_68 [2];
  void *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined3 local_48;
  undefined1 uStack_45;
  undefined3 uStack_44;
  undefined1 local_40 [16];
  
  if (((char)param_2[7] == '\x01') &&
     (uVar3 = (**(code **)(*param_2 + 0x48))(param_2), (uVar3 & 1) != 0)) {
    uStack_6a = 0;
    local_90 = 6;
    uStack_80 = 0;
    local_78 = 0;
    local_88 = (void *)0x0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    FUN_00547cac(&local_88,"Cannot set direction on a stopping transceiver.",0x2f);
    puVar5 = local_68;
    local_68[0] = local_90;
    if ((char)uStack_71 < '\0') {
      FUN_005478d8(&local_60,local_88,uStack_80);
    }
    else {
      local_50 = CONCAT17((char)uStack_71,CONCAT25(uStack_73,local_78));
      uStack_58 = uStack_80;
      local_60 = local_88;
    }
    puVar6 = local_68;
    _local_48 = CONCAT13(uStack_6d,uStack_71._1_3_);
    uStack_44 = (undefined3)
                (CONCAT13(uStack_6a,CONCAT12(uStack_6b,CONCAT11(uStack_6c,uStack_6d))) >> 8);
    uVar4 = FUN_005ecd5c(local_68);
    local_40 = FUN_005eceec(local_68[0]);
    FUN_00623bb0(&DAT_00255ab0,"../../pc/rtp_transceiver.cc",0x1b53,uVar4,&DAT_001a2df6,local_40,
                 &DAT_001ca519);
    *param_1 = local_68[0];
  }
  else {
    if (param_3 == *(int *)((long)param_2 + 0x84)) {
LAB_00c0d084:
      FUN_005ecd48(param_1);
      return;
    }
    if (param_3 != 4) {
      *(int *)((long)param_2 + 0x84) = param_3;
      (*(code *)param_2[0x3d])(param_2 + 0x3a);
      goto LAB_00c0d084;
    }
    uStack_6a = 0;
    local_90 = 3;
    uStack_80 = 0;
    local_78 = 0;
    local_88 = (void *)0x0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    FUN_00547cac(&local_88,"The set direction \'stopped\' is invalid.",0x27);
    puVar5 = local_b8;
    local_b8[0] = local_90;
    if ((char)uStack_71 < '\0') {
      FUN_005478d8(&local_b0,local_88,uStack_80);
    }
    else {
      local_a0 = CONCAT17((char)uStack_71,CONCAT25(uStack_73,local_78));
      uStack_a8 = uStack_80;
      local_b0 = local_88;
    }
    puVar6 = local_b8;
    local_98 = CONCAT13(uStack_6d,uStack_71._1_3_);
    uStack_94 = (undefined3)
                (CONCAT13(uStack_6a,CONCAT12(uStack_6b,CONCAT11(uStack_6c,uStack_6d))) >> 8);
    uVar4 = FUN_005ecd5c(local_b8);
    local_40 = FUN_005eceec(local_b8[0]);
    FUN_00623bb0(&DAT_00255ab0,"../../pc/rtp_transceiver.cc",0x1b8b,uVar4,&DAT_001a2df6,local_40,
                 &DAT_001ca519);
    *param_1 = local_b8[0];
    if (local_a0 < 0) {
      FUN_005478d8(param_1 + 2,local_b0,uStack_a8);
      param_1[8] = local_98;
      *(uint *)((long)param_1 + 0x23) = CONCAT31(uStack_94,local_98._3_1_);
      if (local_a0 < 0) {
        operator_delete(local_b0);
      }
      goto LAB_00c0d1ec;
    }
  }
  uVar7 = *(undefined8 *)(puVar5 + 2);
  uVar4 = *(undefined8 *)(puVar5 + 6);
  uVar1 = puVar6[8];
  uVar2 = *(undefined4 *)((long)puVar6 + 0x23);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar5 + 4);
  *(undefined8 *)(param_1 + 2) = uVar7;
  *(undefined8 *)(param_1 + 6) = uVar4;
  param_1[8] = uVar1;
  *(undefined4 *)((long)param_1 + 0x23) = uVar2;
LAB_00c0d1ec:
  if ((char)uStack_71 < '\0') {
    operator_delete(local_88);
  }
  return;
}


// ===== 00c0d250  FUN_00c0d250 =====

long FUN_00c0d250(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  if (((char)param_1[7] == '\x01') &&
     (uVar1 = (**(code **)(*param_1 + 0x40))(param_1), (uVar1 & 1) != 0)) {
    lVar2 = 0x100000004;
  }
  else {
    lVar2 = param_1[0x11];
  }
  return lVar2;
}


// ===== 00c0d2a4  FUN_00c0d2a4 =====

undefined8 FUN_00c0d2a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}


