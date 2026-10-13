// ===== 0030bb38  FUN_0030bb38 =====

void FUN_0030bb38(long *param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00715bcc((long)param_1 + 0x44);
                    /* try { // try from 0030bb7c to 0030bbeb has its CatchHandler @ 0030bbec */
  if ((param_1[6] != 0) &&
     (uVar2 = (**(code **)(*param_1 + 0x20))(param_1,param_2), (uVar2 & 1) != 0)) {
    plVar3 = (long *)param_1[6];
    local_3c = param_2;
    if (plVar3 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
        uVar4 = FUN_0030be88();
                    /* catch() { ... } // from try @ 0030bb7c with catch @ 0030bbec */
        FUN_00715bf8((long)param_1 + 0x44);
        if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00755eac(uVar4);
        }
      }
      goto LAB_0030bc10;
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,param_3,&local_3c);
  }
  FUN_00715bf8((long)param_1 + 0x44);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0030bc10:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030bc14  FUN_0030bc14 =====

void FUN_0030bc14(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)(PTR_DAT_007a11c8 + 0x10);
  FUN_00715bac((long)param_1 + 0x44);
  plVar1 = (long *)param_1[6];
  param_1 = param_1 + 2;
  if (plVar1 == param_1) {
                    /* WARNING: Could not recover jumptable at 0x0030bc7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1);
    return;
  }
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0030bc60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))();
    return;
  }
  return;
}


// ===== 0030bc8c  FUN_0030bc8c =====

void FUN_0030bc8c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  *param_1 = (long)(PTR_DAT_007a11c8 + 0x10);
  FUN_00715bac((long)param_1 + 0x44);
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0030bce0;
    lVar3 = 0x28;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_0030bce0:
  free(param_1);
  return;
}


// ===== 0030bcf0  FUN_0030bcf0 =====

void FUN_0030bcf0(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long local_60 [5];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 != param_1) {
    plVar2 = (long *)param_1[4];
    plVar3 = (long *)param_2[4];
    if (plVar2 == param_1) {
      if (plVar3 == param_2) {
                    /* try { // try from 0030bdfc to 0030be07 has its CatchHandler @ 0030be84 */
        (**(code **)(*param_1 + 0x18))(param_1,local_60);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = 0;
                    /* try { // try from 0030be28 to 0030be2f has its CatchHandler @ 0030be84 */
        (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],param_1);
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = 0;
        param_1[4] = (long)param_1;
                    /* try { // try from 0030be50 to 0030be5b has its CatchHandler @ 0030be84 */
        (**(code **)(local_60[0] + 0x18))(local_60,param_2);
        (**(code **)(local_60[0] + 0x20))(local_60);
        param_2[4] = (long)param_2;
        if (*(long *)(lVar1 + 0x28) == local_38) {
          return;
        }
      }
      else {
                    /* try { // try from 0030bd64 to 0030bd6f has its CatchHandler @ 0030be84 */
        (**(code **)(*param_1 + 0x18))(param_1,param_2);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = param_2[4];
        param_2[4] = (long)param_2;
        if (*(long *)(lVar1 + 0x28) == local_38) {
          return;
        }
      }
      goto LAB_0030be80;
    }
    if (plVar3 != param_2) {
      param_1[4] = (long)plVar3;
      param_2[4] = (long)plVar2;
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
      goto LAB_0030be80;
    }
                    /* try { // try from 0030bda8 to 0030bdb3 has its CatchHandler @ 0030be84 */
    (**(code **)(*param_2 + 0x18))(param_2,param_1);
    (**(code **)(*(long *)param_2[4] + 0x20))();
    param_2[4] = param_1[4];
    param_1[4] = (long)param_1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0030be80:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030be88  FUN_0030be88 =====

void FUN_0030be88(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00753a74(8);
  *plVar1 = (long)(PTR_DAT_007a11d0 + 0x10);
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(plVar1,PTR_PTR_007a11d8,PTR_FUN_007a11e0);
}


// ===== 0030bebc  FUN_0030bebc =====

void FUN_0030bebc(void *param_1)

{
  FUN_0073a174();
  free(param_1);
  return;
}


// ===== 0030bee0  FUN_0030bee0 =====

void FUN_0030bee0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}


// ===== 0030bee8  FUN_0030bee8 =====

void FUN_0030bee8(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = tpidr_el0;
  lVar7 = *(long *)(lVar5 + 0x28);
  plVar3 = *(long **)(*param_1 + 0x10);
  for (plVar1 = *(long **)(*param_1 + 8); plVar1 != plVar3; plVar1 = plVar1 + 2) {
    plVar2 = (long *)*plVar1;
    plVar4 = (long *)plVar1[1];
    if (plVar4 != (long *)0x0) {
      FUN_00755c20(1,plVar4 + 1);
    }
    if ((int)plVar2[1] == 1) {
                    /* try { // try from 0030bf5c to 0030bf67 has its CatchHandler @ 0030bfc0 */
      (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
    }
    if ((plVar4 != (long *)0x0) && (lVar6 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar6 == 0)
       ) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0071245c(plVar4);
    }
  }
  if (*(long *)(lVar5 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030bfe8  FUN_0030bfe8 =====

void FUN_0030bfe8(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  void *__dest;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  void *__src;
  undefined8 *puVar11;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar6 = (long *)FUN_00759c3c(0x28);
  puVar5 = PTR_DAT_007a11e8;
  lVar9 = *param_2;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[1] = 0;
  plVar6[4] = lVar9;
  *plVar6 = (long)(puVar5 + 0x10);
                    /* try { // try from 0030c048 to 0030c04f has its CatchHandler @ 0030c168 */
  FUN_0030e320(param_2);
  uVar7 = FUN_00715bcc(param_1 + 0xe);
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)param_1[2]) {
    puVar11 = puVar3 + 1;
    *puVar3 = plVar6;
  }
  else {
    __src = (void *)*param_1;
    lVar9 = (long)puVar3 - (long)__src >> 3;
    uVar1 = lVar9 + 1;
    if (uVar1 >> 0x3d != 0) {
      if (*(long *)(lVar4 + 0x28) != local_58) goto LAB_0030c1b4;
                    /* try { // try from 0030c14c to 0030c167 has its CatchHandler @ 0030c180 */
      uVar7 = FUN_0030ea08(param_1);
LAB_0030c154:
      if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_002f9ee0();
      }
      goto LAB_0030c1b4;
    }
    uVar8 = (long)param_1[2] - (long)__src;
    uVar10 = (long)uVar8 >> 2;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      uVar10 = 0x1fffffffffffffff;
    }
    if (uVar10 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar10 >> 0x3d != 0) goto LAB_0030c154;
                    /* try { // try from 0030c0b4 to 0030c0b7 has its CatchHandler @ 0030c180 */
      __dest = (void *)FUN_00759c3c(uVar10 << 3);
    }
    puVar2 = (undefined8 *)((long)__dest + lVar9 * 8);
    puVar11 = puVar2 + 1;
    *puVar2 = plVar6;
    memcpy(__dest,__src,(long)puVar3 - (long)__src);
    *param_1 = __dest;
    param_1[1] = puVar11;
    param_1[2] = (void *)((long)__dest + uVar10 * 8);
    if (__src != (void *)0x0) {
      free(__src);
    }
  }
  param_1[1] = puVar11;
  FUN_00715bf8(param_1 + 0xe);
  FUN_0030bee0(&local_60,plVar6);
  uVar7 = local_60;
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
LAB_0030c1b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


// ===== 0030c1b8  FUN_0030c1b8 =====

void FUN_0030c1b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long local_48;
  long *plStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00715bcc(param_1 + 0x98);
                    /* try { // try from 0030c1ec to 0030c1fb has its CatchHandler @ 0030c260 */
  FUN_0030c288(&local_48,param_2,param_3);
  *(undefined4 *)(local_48 + 8) = 1;
  if ((plStack_40 != (long *)0x0) &&
     (lVar2 = FUN_00755c50(0xffffffffffffffff,plStack_40 + 1), lVar2 == 0)) {
    (**(code **)(*plStack_40 + 0x10))(plStack_40);
    FUN_0071245c(plStack_40);
  }
  FUN_00715bf8(param_1 + 0x98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030c288  FUN_0030c288 =====

void FUN_0030c288(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auStack_70 [24];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  plVar6 = *(long **)(param_2 + 8);
  plVar2 = *(long **)(param_2 + 0x10);
  if (plVar6 != plVar2) {
    do {
      lVar1 = *plVar6;
      plVar7 = (long *)plVar6[1];
      if (plVar7 != (long *)0x0) {
        FUN_00755c20(1,plVar7 + 1);
        lVar4 = FUN_00755c50(0xffffffffffffffff,plVar7 + 1);
        if (lVar4 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          FUN_0071245c(plVar7);
        }
      }
      plVar7 = plVar6;
    } while ((lVar1 != param_3) && (plVar6 = plVar6 + 2, plVar7 = plVar2, plVar6 != plVar2));
    if (*(long **)(param_2 + 0x10) != plVar7) {
      lVar1 = plVar7[1];
      *param_1 = *plVar7;
      param_1[1] = lVar1;
      if (lVar1 != 0) {
        FUN_00755c20(1,lVar1 + 8);
      }
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
      goto LAB_0030c40c;
    }
  }
  uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 0030c378 to 0030c387 has its CatchHandler @ 0030c3e8 */
  FUN_002fd2b0(auStack_70,"Wrong frame processor handle");
  FUN_00374b08(uVar5,auStack_70,
               "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/include/krisp_streamframeprocessors.hpp"
               ,0x53,"getProcessor");
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 0030c3b8 to 0030c3cf has its CatchHandler @ 0030c3d0 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar5,PTR_PTR_007a11f0,PTR_FUN_007a11f8);
  }
LAB_0030c40c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030c410  FUN_0030c410 =====

void FUN_0030c410(long param_1)

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


// ===== 0030c460  FUN_0030c460 =====

void FUN_0030c460(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long local_48;
  long *plStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00715bcc(param_1 + 0x98);
                    /* try { // try from 0030c494 to 0030c4a3 has its CatchHandler @ 0030c504 */
  FUN_0030c288(&local_48,param_2,param_3);
  *(undefined4 *)(local_48 + 8) = 0;
  if ((plStack_40 != (long *)0x0) &&
     (lVar2 = FUN_00755c50(0xffffffffffffffff,plStack_40 + 1), lVar2 == 0)) {
    (**(code **)(*plStack_40 + 0x10))(plStack_40);
    FUN_0071245c(plStack_40);
  }
  FUN_00715bf8(param_1 + 0x98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030c52c  FUN_0030c52c =====

void FUN_0030c52c(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00715bcc(param_1 + 0x98);
                    /* try { // try from 0030c550 to 0030c55b has its CatchHandler @ 0030c570 */
  FUN_0030c584(param_2,param_3);
  FUN_00715bf8(param_1 + 0x98);
  return;
}


// ===== 0030c584  FUN_0030c584 =====

void FUN_0030c584(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auStack_70 [24];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar5 = *(long **)(param_1 + 8);
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar5 != plVar7) {
    do {
      lVar3 = *plVar5;
      plVar6 = (long *)plVar5[1];
      if (plVar6 != (long *)0x0) {
        FUN_00755c20(1,plVar6 + 1);
        lVar2 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1);
        if (lVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          FUN_0071245c(plVar6);
        }
      }
      plVar6 = plVar5;
    } while ((lVar3 != param_2) && (plVar5 = plVar5 + 2, plVar6 = plVar7, plVar5 != plVar7));
    if (*(long **)(param_1 + 0x10) != plVar6) {
      plVar5 = plVar6 + 2;
      (**(code **)(*(long *)*plVar6 + 0x18))();
      plVar7 = *(long **)(param_1 + 0x10);
      if (plVar5 == plVar7) {
LAB_0030c6dc:
        do {
          plVar7 = (long *)plVar5[-1];
          if ((plVar7 != (long *)0x0) &&
             (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar7 + 1), lVar3 == 0)) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            FUN_0071245c(plVar7);
          }
          plVar5 = plVar5 + -2;
        } while (plVar5 != plVar6);
      }
      else {
        do {
          lVar2 = plVar6[3];
          lVar3 = plVar6[2];
          plVar5 = (long *)plVar6[1];
          plVar6[2] = 0;
          plVar6[3] = 0;
          plVar6[1] = lVar2;
          *plVar6 = lVar3;
          if ((plVar5 != (long *)0x0) &&
             (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar3 == 0)) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            FUN_0071245c(plVar5);
          }
          plVar5 = plVar6 + 4;
          plVar6 = plVar6 + 2;
        } while (plVar5 != plVar7);
        plVar5 = *(long **)(param_1 + 0x10);
        if (plVar6 != plVar5) goto LAB_0030c6dc;
      }
      *(long **)(param_1 + 0x10) = plVar6;
      if (*(long *)(lVar1 + 0x28) == local_58) {
        return;
      }
      goto LAB_0030c7b0;
    }
  }
  uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 0030c71c to 0030c72b has its CatchHandler @ 0030c78c */
  FUN_002fd2b0(auStack_70,"Wrong frame processor handle");
  FUN_00374b08(uVar4,auStack_70,
               "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/include/krisp_streamframeprocessors.hpp"
               ,0x42,"removeProcessor");
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 0030c75c to 0030c773 has its CatchHandler @ 0030c774 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar4,PTR_PTR_007a11f0,PTR_FUN_007a11f8);
  }
LAB_0030c7b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030c7b4  FUN_0030c7b4 =====

void FUN_0030c7b4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}


// ===== 0030c7bc  FUN_0030c7bc =====

void FUN_0030c7bc(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = tpidr_el0;
  lVar7 = *(long *)(lVar5 + 0x28);
  plVar3 = *(long **)(*param_1 + 0x10);
  for (plVar1 = *(long **)(*param_1 + 8); plVar1 != plVar3; plVar1 = plVar1 + 2) {
    plVar2 = (long *)*plVar1;
    plVar4 = (long *)plVar1[1];
    if (plVar4 != (long *)0x0) {
      FUN_00755c20(1,plVar4 + 1);
    }
    if ((int)plVar2[1] == 1) {
                    /* try { // try from 0030c830 to 0030c83b has its CatchHandler @ 0030c894 */
      (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
    }
    if ((plVar4 != (long *)0x0) && (lVar6 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar6 == 0)
       ) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0071245c(plVar4);
    }
  }
  if (*(long *)(lVar5 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030c8bc  FUN_0030c8bc =====

void FUN_0030c8bc(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  void *__dest;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  void *__src;
  undefined8 *puVar11;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar6 = (long *)FUN_00759c3c(0x28);
  puVar5 = PTR_DAT_007a1200;
  lVar9 = *param_2;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[1] = 0;
  plVar6[4] = lVar9;
  *plVar6 = (long)(puVar5 + 0x10);
                    /* try { // try from 0030c91c to 0030c923 has its CatchHandler @ 0030ca3c */
  FUN_0030e320(param_2);
  uVar7 = FUN_00715bcc(param_1 + 0xe);
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)param_1[2]) {
    puVar11 = puVar3 + 1;
    *puVar3 = plVar6;
  }
  else {
    __src = (void *)*param_1;
    lVar9 = (long)puVar3 - (long)__src >> 3;
    uVar1 = lVar9 + 1;
    if (uVar1 >> 0x3d != 0) {
      if (*(long *)(lVar4 + 0x28) != local_58) goto LAB_0030ca88;
                    /* try { // try from 0030ca20 to 0030ca3b has its CatchHandler @ 0030ca54 */
      uVar7 = FUN_0030ea08(param_1);
LAB_0030ca28:
      if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_002f9ee0();
      }
      goto LAB_0030ca88;
    }
    uVar8 = (long)param_1[2] - (long)__src;
    uVar10 = (long)uVar8 >> 2;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      uVar10 = 0x1fffffffffffffff;
    }
    if (uVar10 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar10 >> 0x3d != 0) goto LAB_0030ca28;
                    /* try { // try from 0030c988 to 0030c98b has its CatchHandler @ 0030ca54 */
      __dest = (void *)FUN_00759c3c(uVar10 << 3);
    }
    puVar2 = (undefined8 *)((long)__dest + lVar9 * 8);
    puVar11 = puVar2 + 1;
    *puVar2 = plVar6;
    memcpy(__dest,__src,(long)puVar3 - (long)__src);
    *param_1 = __dest;
    param_1[1] = puVar11;
    param_1[2] = (void *)((long)__dest + uVar10 * 8);
    if (__src != (void *)0x0) {
      free(__src);
    }
  }
  param_1[1] = puVar11;
  FUN_00715bf8(param_1 + 0xe);
  FUN_0030c7b4(&local_60,plVar6);
  uVar7 = local_60;
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
LAB_0030ca88:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


// ===== 0030ca8c  FUN_0030ca8c =====

void FUN_0030ca8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long local_48;
  long *plStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00715bcc(param_1 + 0x98);
                    /* try { // try from 0030cac0 to 0030cacf has its CatchHandler @ 0030cb34 */
  FUN_0030cb5c(&local_48,param_2,param_3);
  *(undefined4 *)(local_48 + 8) = 1;
  if ((plStack_40 != (long *)0x0) &&
     (lVar2 = FUN_00755c50(0xffffffffffffffff,plStack_40 + 1), lVar2 == 0)) {
    (**(code **)(*plStack_40 + 0x10))(plStack_40);
    FUN_0071245c(plStack_40);
  }
  FUN_00715bf8(param_1 + 0x98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030cb5c  FUN_0030cb5c =====

void FUN_0030cb5c(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auStack_70 [24];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  plVar6 = *(long **)(param_2 + 8);
  plVar2 = *(long **)(param_2 + 0x10);
  if (plVar6 != plVar2) {
    do {
      lVar1 = *plVar6;
      plVar7 = (long *)plVar6[1];
      if (plVar7 != (long *)0x0) {
        FUN_00755c20(1,plVar7 + 1);
        lVar4 = FUN_00755c50(0xffffffffffffffff,plVar7 + 1);
        if (lVar4 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          FUN_0071245c(plVar7);
        }
      }
      plVar7 = plVar6;
    } while ((lVar1 != param_3) && (plVar6 = plVar6 + 2, plVar7 = plVar2, plVar6 != plVar2));
    if (*(long **)(param_2 + 0x10) != plVar7) {
      lVar1 = plVar7[1];
      *param_1 = *plVar7;
      param_1[1] = lVar1;
      if (lVar1 != 0) {
        FUN_00755c20(1,lVar1 + 8);
      }
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
      goto LAB_0030cce0;
    }
  }
  uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 0030cc4c to 0030cc5b has its CatchHandler @ 0030ccbc */
  FUN_002fd2b0(auStack_70,"Wrong frame processor handle");
  FUN_00374b08(uVar5,auStack_70,
               "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/include/krisp_streamframeprocessors.hpp"
               ,0x53,"getProcessor");
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 0030cc8c to 0030cca3 has its CatchHandler @ 0030cca4 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar5,PTR_PTR_007a11f0,PTR_FUN_007a11f8);
  }
LAB_0030cce0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030cce4  FUN_0030cce4 =====

void FUN_0030cce4(long param_1)

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


// ===== 0030cd34  FUN_0030cd34 =====

void FUN_0030cd34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long local_48;
  long *plStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00715bcc(param_1 + 0x98);
                    /* try { // try from 0030cd68 to 0030cd77 has its CatchHandler @ 0030cdd8 */
  FUN_0030cb5c(&local_48,param_2,param_3);
  *(undefined4 *)(local_48 + 8) = 0;
  if ((plStack_40 != (long *)0x0) &&
     (lVar2 = FUN_00755c50(0xffffffffffffffff,plStack_40 + 1), lVar2 == 0)) {
    (**(code **)(*plStack_40 + 0x10))(plStack_40);
    FUN_0071245c(plStack_40);
  }
  FUN_00715bf8(param_1 + 0x98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030ce00  FUN_0030ce00 =====

void FUN_0030ce00(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00715bcc(param_1 + 0x98);
                    /* try { // try from 0030ce24 to 0030ce2f has its CatchHandler @ 0030ce44 */
  FUN_0030ce58(param_2,param_3);
  FUN_00715bf8(param_1 + 0x98);
  return;
}


// ===== 0030ce58  FUN_0030ce58 =====

void FUN_0030ce58(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auStack_70 [24];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar5 = *(long **)(param_1 + 8);
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar5 != plVar7) {
    do {
      lVar3 = *plVar5;
      plVar6 = (long *)plVar5[1];
      if (plVar6 != (long *)0x0) {
        FUN_00755c20(1,plVar6 + 1);
        lVar2 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1);
        if (lVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          FUN_0071245c(plVar6);
        }
      }
      plVar6 = plVar5;
    } while ((lVar3 != param_2) && (plVar5 = plVar5 + 2, plVar6 = plVar7, plVar5 != plVar7));
    if (*(long **)(param_1 + 0x10) != plVar6) {
      plVar5 = plVar6 + 2;
      (**(code **)(*(long *)*plVar6 + 0x18))();
      plVar7 = *(long **)(param_1 + 0x10);
      if (plVar5 == plVar7) {
LAB_0030cfb0:
        do {
          plVar7 = (long *)plVar5[-1];
          if ((plVar7 != (long *)0x0) &&
             (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar7 + 1), lVar3 == 0)) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            FUN_0071245c(plVar7);
          }
          plVar5 = plVar5 + -2;
        } while (plVar5 != plVar6);
      }
      else {
        do {
          lVar2 = plVar6[3];
          lVar3 = plVar6[2];
          plVar5 = (long *)plVar6[1];
          plVar6[2] = 0;
          plVar6[3] = 0;
          plVar6[1] = lVar2;
          *plVar6 = lVar3;
          if ((plVar5 != (long *)0x0) &&
             (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar3 == 0)) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            FUN_0071245c(plVar5);
          }
          plVar5 = plVar6 + 4;
          plVar6 = plVar6 + 2;
        } while (plVar5 != plVar7);
        plVar5 = *(long **)(param_1 + 0x10);
        if (plVar6 != plVar5) goto LAB_0030cfb0;
      }
      *(long **)(param_1 + 0x10) = plVar6;
      if (*(long *)(lVar1 + 0x28) == local_58) {
        return;
      }
      goto LAB_0030d084;
    }
  }
  uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 0030cff0 to 0030cfff has its CatchHandler @ 0030d060 */
  FUN_002fd2b0(auStack_70,"Wrong frame processor handle");
  FUN_00374b08(uVar4,auStack_70,
               "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/include/krisp_streamframeprocessors.hpp"
               ,0x42,"removeProcessor");
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 0030d030 to 0030d047 has its CatchHandler @ 0030d048 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar4,PTR_PTR_007a11f0,PTR_FUN_007a11f8);
  }
LAB_0030d084:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030d088  FUN_0030d088 =====

void FUN_0030d088(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 6;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  return;
}


// ===== 0030d0b8  FUN_0030d0b8 =====

void FUN_0030d0b8(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  while (plVar2 != plVar4) {
    plVar2 = plVar2 + -1;
    plVar1 = (long *)*plVar2;
    *plVar2 = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  param_1[1] = plVar4;
  FUN_00715bac(param_1 + 0x13);
  FUN_00715bac(param_1 + 0xe);
  plVar2 = (long *)param_1[0xc];
  plVar4 = param_1 + 8;
  if (plVar2 == plVar4) {
    lVar3 = 0x20;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_0030d138;
    lVar3 = 0x28;
    plVar4 = plVar2;
  }
  (**(code **)(*plVar4 + lVar3))();
LAB_0030d138:
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    free((void *)param_1[6]);
  }
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    plVar2 = (long *)param_1[1];
    if (plVar2 == plVar4) {
      param_1[1] = plVar4;
      free(plVar4);
      return;
    }
    do {
      plVar2 = plVar2 + -1;
      plVar1 = (long *)*plVar2;
      *plVar2 = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    } while (plVar2 != plVar4);
    param_1[1] = plVar4;
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 0030d1c0  FUN_0030d1c0 =====

void FUN_0030d1c0(long param_1,long param_2)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  byte *pbVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong local_e8 [2];
  void *local_d8;
  ulong local_d0 [2];
  void *local_c0;
  byte local_b8 [16];
  void *local_a8;
  long local_a0 [4];
  long *local_80;
  byte local_70;
  undefined7 uStack_6f;
  long *local_68;
  void *local_60;
  byte *local_50;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00714378(param_1 + 0x20);
  plVar8 = (long *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x18);
  plVar9 = *(long **)(param_2 + 0x40);
  if (plVar9 == (long *)0x0) {
    local_50 = (byte *)0x0;
  }
  else {
    plVar1 = (long *)(param_2 + 0x20);
    if (plVar9 == plVar1) {
      local_50 = &local_70;
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_70);
    }
    else {
      local_50 = (byte *)(**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  FUN_0030bcf0(&local_70,plVar8);
  if (local_50 == &local_70) {
    lVar10 = 0x20;
    pbVar6 = &local_70;
LAB_0030d278:
    (**(code **)(*(long *)pbVar6 + lVar10))();
  }
  else if (local_50 != (byte *)0x0) {
    lVar10 = 0x28;
    pbVar6 = local_50;
    goto LAB_0030d278;
  }
  uVar7 = FUN_00373b14();
  FUN_00373bb8(uVar7,param_1 + 0x20);
  FUN_00375240(&local_70);
                    /* try { // try from 0030d2a8 to 0030d2ab has its CatchHandler @ 0030d6b0 */
  (**(code **)(*(long *)CONCAT71(uStack_6f,local_70) + 0x18))
            ((long *)CONCAT71(uStack_6f,local_70),*(undefined4 *)(param_1 + 0x3c));
  plVar9 = local_68;
  if ((local_68 == (long *)0x0) ||
     (lVar10 = FUN_00755c50(0xffffffffffffffff,local_68 + 1), lVar10 != 0)) {
    FUN_00375240(&local_70);
    local_80 = *(long **)(param_1 + 0x60);
    plVar9 = (long *)CONCAT71(uStack_6f,local_70);
    if (local_80 != (long *)0x0) goto LAB_0030d2d8;
  }
  else {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    FUN_0071245c(plVar9);
    FUN_00375240(&local_70);
    local_80 = *(long **)(param_1 + 0x60);
    plVar9 = (long *)CONCAT71(uStack_6f,local_70);
    if (local_80 == (long *)0x0) {
      local_80 = (long *)0x0;
    }
    else {
LAB_0030d2d8:
      if (local_80 == plVar8) {
        local_80 = local_a0;
                    /* try { // try from 0030d334 to 0030d33f has its CatchHandler @ 0030d674 */
        (**(code **)(*plVar8 + 0x18))(plVar8,local_a0);
      }
      else {
                    /* try { // try from 0030d2e8 to 0030d2eb has its CatchHandler @ 0030d674 */
        local_80 = (long *)(**(code **)(*local_80 + 0x10))();
      }
    }
  }
                    /* try { // try from 0030d348 to 0030d357 has its CatchHandler @ 0030d678 */
  (**(code **)(*plVar9 + 0x10))(plVar9,local_a0);
  if (local_80 == local_a0) {
    lVar10 = 0x20;
    plVar8 = local_a0;
LAB_0030d378:
    (**(code **)(*plVar8 + lVar10))();
  }
  else if (local_80 != (long *)0x0) {
    lVar10 = 0x28;
    plVar8 = local_80;
    goto LAB_0030d378;
  }
  plVar8 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar10 = FUN_00755c50(0xffffffffffffffff,local_68 + 1), lVar10 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0071245c(plVar8);
  }
  FUN_00373b14();
  FUN_00373bb0(&local_70);
  plVar8 = (long *)(ulong)(local_70 >> 1);
  if ((local_70 & 1) != 0) {
    plVar8 = local_68;
  }
  if (plVar8 != (long *)0x0) {
    local_d0[0] = 0;
    local_d0[1] = 0;
    pvVar2 = (void *)((ulong)&local_70 | 4);
    if ((local_70 & 1) != 0) {
      pvVar2 = local_60;
    }
    local_c0 = (void *)0x0;
                    /* try { // try from 0030d3f8 to 0030d3ff has its CatchHandler @ 0030d65c */
    FUN_0030dbb8(local_d0,pvVar2,(void *)((long)pvVar2 + (long)plVar8 * 4));
    local_e8[0] = 0;
    local_e8[1] = 0;
    local_d8 = (void *)0x0;
                    /* try { // try from 0030d408 to 0030d41b has its CatchHandler @ 0030d63c */
    FUN_0030dd04(local_e8,&DAT_001bbc23,&DAT_001bbc27);
                    /* try { // try from 0030d41c to 0030d42b has its CatchHandler @ 0030d638 */
    FUN_0030d708(local_b8,local_d0,local_e8);
    if ((local_e8[0] & 1) != 0) {
      free(local_d8);
    }
    if ((local_d0[0] & 1) != 0) {
      free(local_c0);
    }
                    /* try { // try from 0030d44c to 0030d45b has its CatchHandler @ 0030d6c0 */
    FUN_00738988(local_d0,local_b8,0);
    if (((char)local_d0[0] == -1) || ((char)local_d0[0] == '\0')) {
                    /* try { // try from 0030d46c to 0030d477 has its CatchHandler @ 0030d560 */
      FUN_007383e8(local_b8,0);
    }
                    /* try { // try from 0030d478 to 0030d487 has its CatchHandler @ 0030d6c0 */
    FUN_00738988(local_d0,local_b8,0);
    if ((local_b8[0] & 1) != 0) {
      free(local_a8);
    }
  }
  puVar4 = PTR_DAT_007a1210;
  if (((*PTR_DAT_007a1208 & 1) == 0) && (iVar5 = FUN_00739c1c(PTR_DAT_007a1208), iVar5 != 0)) {
    *(undefined8 *)(puVar4 + 0x18) = 0;
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(undefined8 *)(puVar4 + 0x28) = 0;
    *(undefined8 *)(puVar4 + 0x20) = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    *(undefined8 *)puVar4 = 0;
    __cxa_atexit(PTR_FUN_007a1218,puVar4,&PTR_LOOP_0075ec90);
    FUN_00739d60(PTR_DAT_007a1208);
    puVar12 = *(undefined8 **)puVar4;
    puVar11 = *(undefined8 **)(puVar4 + 8);
    if (puVar12 == puVar11) goto LAB_0030d4dc;
  }
  else {
    puVar12 = *(undefined8 **)puVar4;
    puVar11 = *(undefined8 **)(puVar4 + 8);
    if (puVar12 == puVar11) goto LAB_0030d4dc;
  }
  do {
                    /* try { // try from 0030d4c8 to 0030d4cf has its CatchHandler @ 0030d6d8 */
    (*(code *)**(undefined8 **)*puVar12)((undefined8 *)*puVar12,param_1);
    puVar12 = puVar12 + 2;
  } while (puVar12 != puVar11);
LAB_0030d4dc:
  if ((local_70 & 1) != 0) {
    free(local_60);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0030d708  FUN_0030d708 =====

void FUN_0030d708(undefined8 *param_1,byte *param_2,byte *param_3)

{
  ulong uVar1;
  byte *pbVar2;
  long extraout_x1;
  long extraout_x1_00;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((*param_2 & 1) == 0) {
    uVar4 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    param_1[1] = *(undefined8 *)(param_2 + 8);
    *param_1 = uVar4;
    param_1[2] = uVar3;
  }
  else {
    FUN_002fb36c(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
  }
                    /* try { // try from 0030d744 to 0030d797 has its CatchHandler @ 0030d7a4 */
  FUN_007112cc(param_3);
  if (extraout_x1 == 0) {
    FUN_007114a8(param_1);
    if (extraout_x1_00 != 0) {
      FUN_007132e8(param_1,0x2f);
    }
    uVar1 = *(ulong *)(param_3 + 8);
    pbVar2 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar2 = param_3 + 1;
      uVar1 = (ulong)(*param_3 >> 1);
    }
    FUN_0071302c(param_1,pbVar2,uVar1);
  }
  else {
    FUN_007139b0(param_1,param_3);
  }
  return;
}


// ===== 0030d7c0  FUN_0030d7c0 =====

void FUN_0030d7c0(long *param_1,undefined4 param_2,char *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_98;
  size_t local_90;
  void *local_88;
  byte local_80 [16];
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  __n = strlen(param_3);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_98);
    }
    goto LAB_0030d98c;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_98 | 1);
    local_98 = CONCAT71(local_98._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_0030d864;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_98 = uVar1 + 1 | 1;
    local_90 = __n;
    local_88 = __dest;
LAB_0030d864:
    memcpy(__dest,param_3,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 0030d878 to 0030d88b has its CatchHandler @ 0030d968 */
  FUN_0030df98(local_80,&local_98,param_4,param_5);
                    /* try { // try from 0030d894 to 0030d8a3 has its CatchHandler @ 0030d928 */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,local_80);
  if ((local_80[0] & 1) != 0) {
    free(local_70);
  }
  if ((local_98 & 1) == 0) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
    free(local_88);
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
LAB_0030d98c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030d990  FUN_0030d990 =====

void FUN_0030d990(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar5;
  
  if (((*PTR_DAT_007a1208 & 1) == 0) &&
     (iVar2 = FUN_00739c1c(PTR_DAT_007a1208), puVar1 = PTR_DAT_007a1210, iVar2 != 0)) {
    puVar4 = (undefined8 *)(PTR_DAT_007a1210 + 0x10);
    *(undefined8 *)(PTR_DAT_007a1210 + 0x18) = 0;
    *puVar4 = 0;
    *(undefined8 *)(puVar1 + 0x28) = 0;
    *(undefined8 *)(puVar1 + 0x20) = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    *(undefined8 *)puVar1 = 0;
    __cxa_atexit(PTR_FUN_007a1218,PTR_DAT_007a1210,&PTR_LOOP_0075ec90);
    FUN_00739d60(PTR_DAT_007a1208);
    puVar4 = *(undefined8 **)(PTR_DAT_007a1210 + 0x18);
    puVar7 = *(undefined8 **)(PTR_DAT_007a1210 + 0x20);
    if (puVar4 == puVar7) goto LAB_0030d9e4;
  }
  else {
    puVar7 = *(undefined8 **)(PTR_DAT_007a1210 + 0x20);
    puVar4 = *(undefined8 **)(PTR_DAT_007a1210 + 0x18);
    if (*(undefined8 **)(PTR_DAT_007a1210 + 0x18) == puVar7) goto LAB_0030d9e4;
  }
  do {
    puVar5 = puVar4 + 2;
    (*(code *)**(undefined8 **)*puVar4)((undefined8 *)*puVar4,param_1);
    puVar4 = puVar5;
  } while (puVar5 != puVar7);
LAB_0030d9e4:
  plVar6 = (long *)*param_1;
  plVar8 = (long *)param_1[1];
  if (plVar6 != plVar8) {
    do {
      plVar3 = plVar6 + 1;
      (**(code **)(*(long *)*plVar6 + 0x18))();
      plVar6 = plVar3;
    } while (plVar3 != plVar8);
    plVar6 = (long *)*param_1;
    plVar8 = (long *)param_1[1];
    while (plVar8 != plVar6) {
      plVar8 = plVar8 + -1;
      plVar3 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
  }
  param_1[1] = plVar6;
  return;
}


// ===== 0030daa8  FUN_0030daa8 =====

void FUN_0030daa8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar3 = (void *)param_1[3];
  if (pvVar3 != (void *)0x0) {
    pvVar4 = (void *)param_1[4];
    pvVar5 = pvVar3;
    if (pvVar4 != pvVar3) {
      do {
        plVar2 = *(long **)((long)pvVar4 + -8);
        if ((plVar2 != (long *)0x0) &&
           (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        pvVar4 = (void *)((long)pvVar4 + -0x10);
      } while (pvVar4 != pvVar3);
      pvVar5 = (void *)param_1[3];
    }
    param_1[4] = pvVar3;
    free(pvVar5);
  }
  pvVar3 = (void *)*param_1;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  pvVar5 = (void *)param_1[1];
  if (pvVar5 != pvVar3) {
    do {
      plVar2 = *(long **)((long)pvVar5 + -8);
      if ((plVar2 != (long *)0x0) &&
         (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0)) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        FUN_0071245c(plVar2);
      }
      pvVar5 = (void *)((long)pvVar5 + -0x10);
    } while (pvVar5 != pvVar3);
    param_1[1] = pvVar3;
    free((void *)*param_1);
    return;
  }
  param_1[1] = pvVar3;
  free(pvVar3);
  return;
}


// ===== 0030dbb8  FUN_0030dbb8 =====

void FUN_0030dbb8(undefined8 param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined1 *local_78;
  undefined1 auStack_70 [8];
  undefined1 local_68 [32];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_90 = PTR_DAT_007a1220 + 0x10;
  uStack_88 = 0;
  if (param_2 < param_3) {
    do {
                    /* try { // try from 0030dc20 to 0030dc43 has its CatchHandler @ 0030dcd8 */
      local_80 = param_2;
      iVar2 = (**(code **)(local_90 + 0x18))
                        (&local_90,auStack_70,param_2,param_3,&local_80,local_68,&local_48,&local_78
                        );
      if (iVar2 == 2 || local_80 == param_2) {
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 0030dcc8 to 0030dcd3 has its CatchHandler @ 0030dcd4 */
          uVar3 = FUN_0071280c("locale not supported");
                    /* catch() { ... } // from try @ 0030dcc8 with catch @ 0030dcd4 */
                    /* catch() { ... } // from try @ 0030dc6c with catch @ 0030dcdc */
          thunk_FUN_00712454(&local_90);
          if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
            FUN_00755eac(uVar3);
          }
        }
        goto LAB_0030dd00;
      }
      if (local_68 < local_78) {
        puVar4 = local_68;
        do {
                    /* try { // try from 0030dc6c to 0030dc73 has its CatchHandler @ 0030dcdc */
          FUN_007132e8(param_1,*puVar4);
          puVar4 = puVar4 + 1;
        } while (puVar4 < local_78);
      }
      param_2 = local_80;
    } while (local_80 < param_3);
  }
  thunk_FUN_00712454(&local_90);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_0030dd00:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030dd04  FUN_0030dd04 =====

ulong * FUN_0030dd04(ulong *param_1,undefined1 *param_2,undefined1 *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong __n;
  long lVar3;
  undefined8 *puVar4;
  bool bVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  void *pvVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 local_70;
  ulong local_68;
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar10 = *param_1;
  uVar13 = param_1[1];
  bVar5 = ((byte)*param_1 & 1) != 0;
  uVar2 = (ulong)(byte)((byte)*param_1 >> 1);
  if (bVar5) {
    uVar2 = uVar13;
  }
  lVar1 = 0x16;
  if (bVar5) {
    lVar1 = (uVar10 & 0xfffffffffffffffe) - 1;
  }
  __n = (long)param_3 - (long)param_2;
  if (__n != 0) {
    puVar8 = (undefined1 *)param_1[2];
    uVar6 = (uint)uVar10;
    puVar7 = puVar8;
    if ((uVar10 & 1) == 0) {
      uVar13 = uVar10 >> 1 & 0x7f;
      puVar7 = (undefined1 *)((long)param_1 + 1);
    }
    if ((param_2 < puVar7) || (puVar7 + uVar13 + 1 <= param_2)) {
      if (lVar1 - uVar2 < __n) {
        FUN_007131bc(param_1,lVar1,(uVar2 + __n) - lVar1,uVar2,uVar2,0,0);
        puVar8 = (undefined1 *)param_1[2];
        param_1[1] = uVar2;
        uVar6 = (uint)(byte)*param_1;
      }
      puVar7 = (undefined1 *)((long)param_1 + 1);
      if ((uVar6 & 1) != 0) {
        puVar7 = puVar8;
      }
      puVar8 = puVar7 + uVar2;
      if ((__n < 0x20) || (puVar7 + (uVar2 - (long)param_2) < (undefined1 *)0x20)) {
LAB_0030def0:
        do {
          puVar9 = param_2 + 1;
          puVar7 = puVar8 + 1;
          *puVar8 = *param_2;
          puVar8 = puVar7;
          param_2 = puVar9;
        } while (puVar9 != param_3);
      }
      else {
        uVar10 = __n & 0xffffffffffffffe0;
        puVar11 = (undefined8 *)(puVar7 + uVar2 + 0x10);
        puVar12 = (undefined8 *)(param_2 + 0x10);
        param_2 = param_2 + uVar10;
        puVar8 = puVar8 + uVar10;
        uVar13 = uVar10;
        do {
          puVar4 = puVar12 + -1;
          uVar15 = puVar12[-2];
          uVar17 = puVar12[1];
          uVar16 = *puVar12;
          uVar13 = uVar13 - 0x20;
          puVar12 = puVar12 + 4;
          puVar11[-1] = *puVar4;
          puVar11[-2] = uVar15;
          puVar11[1] = uVar17;
          *puVar11 = uVar16;
          puVar11 = puVar11 + 4;
        } while (uVar13 != 0);
        if (__n != uVar10) goto LAB_0030def0;
      }
      *puVar8 = 0;
      if ((*param_1 & 1) == 0) {
        *(char *)param_1 = (char)((int)(uVar2 + __n) << 1);
      }
      else {
        param_1[1] = uVar2 + __n;
      }
    }
    else {
      if (0xfffffffffffffff7 < __n) {
        if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_002fb400(&local_70);
        }
        goto LAB_0030df94;
      }
      if (__n < 0x17) {
        pvVar14 = (void *)((ulong)&local_70 | 1);
        local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
      }
      else {
        uVar2 = (__n & 0xfffffffffffffff8) + 8;
        if ((__n | 7) != 0x17) {
          uVar2 = __n | 7;
        }
        pvVar14 = (void *)FUN_00759c3c(uVar2 + 1);
        local_70 = uVar2 + 1 | 1;
        local_68 = __n;
        local_60 = pvVar14;
      }
      memcpy(pvVar14,param_2,__n);
      *(undefined1 *)((long)pvVar14 + __n) = 0;
      uVar2 = local_68;
      pvVar14 = local_60;
      if ((local_70 & 1) == 0) {
        uVar2 = local_70 >> 1 & 0x7f;
        pvVar14 = (void *)((long)&local_70 + 1);
      }
                    /* try { // try from 0030de9c to 0030dea3 has its CatchHandler @ 0030df68 */
      FUN_0071302c(param_1,pvVar14,uVar2);
      if ((local_70 & 1) != 0) {
        free(local_60);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return param_1;
  }
LAB_0030df94:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030df98  FUN_0030df98 =====

void FUN_0030df98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *local_98;
  byte *local_90;
  undefined1 uStack_79;
  byte local_78 [16];
  void *local_68;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0030dfc8 to 0030dfd7 has its CatchHandler @ 0030e0e4 */
  FUN_0030e104(local_78,&uStack_79);
                    /* try { // try from 0030dfd8 to 0030dfe7 has its CatchHandler @ 0030e0cc */
  FUN_0030e214(local_60,&uStack_79,param_4);
                    /* try { // try from 0030dfe8 to 0030dff7 has its CatchHandler @ 0030e0ac */
  FUN_00303a84(&local_98,local_78,2);
  if ((local_60[0] & 1) != 0) {
    free(local_50);
  }
  if ((local_78[0] & 1) != 0) {
    free(local_68);
  }
                    /* try { // try from 0030e018 to 0030e027 has its CatchHandler @ 0030e09c */
  FUN_0030b424(param_1,param_2,&local_98);
  pbVar3 = local_98;
  if (local_98 != (byte *)0x0) {
    while (pbVar2 = local_90, pbVar2 != pbVar3) {
      local_90 = pbVar2 + -0x18;
      if ((*local_90 & 1) != 0) {
        free(*(void **)(pbVar2 + -8));
      }
    }
    local_90 = pbVar3;
    free(local_98);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0030e104  FUN_0030e104 =====

void FUN_0030e104(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  ulong uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long local_160 [3];
  undefined **appuStack_148 [8];
  byte local_108;
  void *local_f8;
  undefined1 auStack_e0 [152];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_00303c58(local_160);
  uVar1 = *(ulong *)(param_3 + 8);
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
    uVar1 = (ulong)(*param_3 >> 1);
  }
                    /* try { // try from 0030e154 to 0030e167 has its CatchHandler @ 0030e1ec */
  FUN_00303e0c(local_160 + 2,pbVar2,uVar1);
  FUN_00718470(param_1,appuStack_148);
  puVar5 = PTR_PTR_007a10f0;
  local_160[0] = *(long *)PTR_PTR_007a10f0;
  uVar3 = *(undefined8 *)(PTR_PTR_007a10f0 + 0x48);
  *(undefined8 *)((long)local_160 + *(long *)(local_160[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a10f0 + 0x40);
  appuStack_148[0] = &PTR_FUN_0079be30;
  local_160[2] = uVar3;
  if ((local_108 & 1) != 0) {
    free(local_f8);
  }
  FUN_00716098(appuStack_148);
  FUN_00717d80(local_160,puVar5 + 8);
  thunk_FUN_00715e00(auStack_e0);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030e214  FUN_0030e214 =====

void FUN_0030e214(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  size_t sVar4;
  char *__s;
  long local_160 [3];
  undefined **appuStack_148 [8];
  byte local_108;
  void *local_f8;
  undefined1 auStack_e0 [152];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00303c58(local_160);
  __s = (char *)*param_3;
  sVar4 = strlen(__s);
                    /* try { // try from 0030e25c to 0030e273 has its CatchHandler @ 0030e2f8 */
  FUN_00303e0c(local_160 + 2,__s,sVar4);
  FUN_00718470(param_1,appuStack_148);
  puVar3 = PTR_PTR_007a10f0;
  local_160[0] = *(long *)PTR_PTR_007a10f0;
  uVar1 = *(undefined8 *)(PTR_PTR_007a10f0 + 0x48);
  *(undefined8 *)((long)local_160 + *(long *)(local_160[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a10f0 + 0x40);
  appuStack_148[0] = &PTR_FUN_0079be30;
  local_160[2] = uVar1;
  if ((local_108 & 1) != 0) {
    free(local_f8);
  }
  FUN_00716098(appuStack_148);
  FUN_00717d80(local_160,puVar3 + 8);
  thunk_FUN_00715e00(auStack_e0);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030e320  FUN_0030e320 =====

void FUN_0030e320(uint *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (0x28 < *param_1 || (1L << ((ulong)*param_1 & 0x3f) & 0x10140108400U) == 0) {
    uVar3 = FUN_00753a74(0x20);
                    /* try { // try from 0030e42c to 0030e43b has its CatchHandler @ 0030e510 */
    FUN_002fd2b0(auStack_50,"Wrong input frame duration.");
                    /* try { // try from 0030e440 to 0030e47b has its CatchHandler @ 0030e4f4 */
    FUN_00374df0(uVar3,auStack_50);
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1228,PTR_FUN_007a11f8);
    }
    goto LAB_0030e538;
  }
  uVar1 = param_1[1];
  if ((int)uVar1 < 32000) {
    if ((int)uVar1 < 16000) {
      if (uVar1 != 8000) {
        uVar4 = 12000;
        goto LAB_0030e3f0;
      }
    }
    else if (uVar1 != 16000) {
      uVar4 = 24000;
      goto LAB_0030e3f0;
    }
  }
  else if ((int)uVar1 < 48000) {
    if (uVar1 != 32000) {
      uVar4 = 0xac44;
      goto LAB_0030e3f0;
    }
  }
  else if ((uVar1 != 48000) && (uVar1 != 0x15888)) {
    uVar4 = 96000;
LAB_0030e3f0:
    if (uVar1 != uVar4) {
      uVar3 = FUN_00753a74(0x20);
                    /* try { // try from 0030e490 to 0030e49f has its CatchHandler @ 0030e4f0 */
      FUN_002fd2b0(auStack_50,"Wrong input sampling rate.");
                    /* try { // try from 0030e4a4 to 0030e4df has its CatchHandler @ 0030e4e0 */
      FUN_00374df0(uVar3,auStack_50);
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar3,PTR_PTR_007a1228,PTR_FUN_007a11f8);
      }
      goto LAB_0030e538;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_0030e538:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030e53c  FUN_0030e53c =====

void FUN_0030e53c(undefined8 *param_1)

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
    plVar2 = *(long **)((long)pvVar3 + -8);
    if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0)
       ) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_0071245c(plVar2);
    }
    pvVar3 = (void *)((long)pvVar3 + -0x10);
  } while (pvVar3 != __ptr);
  param_1[1] = __ptr;
  free((void *)*param_1);
  return;
}


// ===== 0030e5e4  FUN_0030e5e4 =====

void FUN_0030e5e4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  void *__ptr;
  void *pvVar3;
  
  __ptr = (void *)param_1[1];
  *param_1 = &PTR_FUN_0075fda0;
  if (__ptr == (void *)0x0) {
    return;
  }
  pvVar3 = (void *)param_1[2];
  if (pvVar3 == __ptr) {
    param_1[2] = __ptr;
    free(__ptr);
    return;
  }
  do {
    plVar2 = *(long **)((long)pvVar3 + -8);
    if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0)
       ) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_0071245c(plVar2);
    }
    pvVar3 = (void *)((long)pvVar3 + -0x10);
  } while (pvVar3 != __ptr);
  param_1[2] = __ptr;
  free((void *)param_1[1]);
  return;
}


// ===== 0030e69c  FUN_0030e69c =====

void FUN_0030e69c(long *param_1)

{
  long lVar1;
  void *__ptr;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar3 = (void *)param_1[1];
  *param_1 = (long)(PTR_DAT_007a11e8 + 0x10);
  if (pvVar3 != (void *)0x0) {
    pvVar4 = (void *)param_1[2];
    __ptr = pvVar3;
    if (pvVar4 != pvVar3) {
      do {
        plVar2 = *(long **)((long)pvVar4 + -8);
        if ((plVar2 != (long *)0x0) &&
           (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        pvVar4 = (void *)((long)pvVar4 + -0x10);
      } while (pvVar4 != pvVar3);
      __ptr = (void *)param_1[1];
    }
    param_1[2] = (long)pvVar3;
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0030e73c  FUN_0030e73c =====

void FUN_0030e73c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  plVar2 = *(long **)(param_1 + 0x10);
  for (plVar7 = *(long **)(param_1 + 8); plVar7 != plVar2; plVar7 = plVar7 + 2) {
    plVar1 = (long *)*plVar7;
    plVar3 = (long *)plVar7[1];
    if (plVar3 != (long *)0x0) {
      FUN_00755c20(1,plVar3 + 1);
    }
    if ((int)plVar1[1] == 1) {
                    /* try { // try from 0030e7a0 to 0030e7a7 has its CatchHandler @ 0030e800 */
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    if ((plVar3 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_0071245c(plVar3);
    }
  }
  if (*(long *)(lVar4 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030e828  FUN_0030e828 =====

void FUN_0030e828(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (puVar7 = *(undefined8 **)(param_1 + 8); puVar7 != puVar2; puVar7 = puVar7 + 2) {
    plVar1 = (long *)*puVar7;
    plVar3 = (long *)puVar7[1];
    if (plVar3 != (long *)0x0) {
      FUN_00755c20(1,plVar3 + 1);
    }
                    /* try { // try from 0030e880 to 0030e887 has its CatchHandler @ 0030e8e0 */
    (**(code **)(*plVar1 + 0x18))(plVar1);
    if ((plVar3 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_0071245c(plVar3);
    }
  }
  if (*(long *)(lVar4 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030e908  FUN_0030e908 =====

void FUN_0030e908(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = tpidr_el0;
  lVar7 = *(long *)(lVar5 + 0x28);
  FUN_0030e320(param_2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  for (; puVar1 != puVar3; puVar1 = puVar1 + 2) {
    plVar2 = (long *)*puVar1;
    plVar4 = (long *)puVar1[1];
    if (plVar4 != (long *)0x0) {
      FUN_00755c20(1,plVar4 + 1);
    }
                    /* try { // try from 0030e9a4 to 0030e9af has its CatchHandler @ 0030e9e0 */
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
    if ((plVar4 != (long *)0x0) && (lVar6 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar6 == 0)
       ) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0071245c(plVar4);
    }
  }
  if (*(long *)(lVar5 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0030ea08  FUN_0030ea08 =====

void FUN_0030ea08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 0030ea1c  FUN_0030ea1c =====

void FUN_0030ea1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007626d0;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    free((void *)param_1[3]);
  }
  FUN_0073a174(param_1);
  return;
}


// ===== 0030ea60  FUN_0030ea60 =====

void FUN_0030ea60(undefined8 *param_1)

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
    plVar2 = *(long **)((long)pvVar3 + -8);
    if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0)
       ) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_0071245c(plVar2);
    }
    pvVar3 = (void *)((long)pvVar3 + -0x10);
  } while (pvVar3 != __ptr);
  param_1[1] = __ptr;
  free((void *)*param_1);
  return;
}


// ===== 0030eb08  FUN_0030eb08 =====

void FUN_0030eb08(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  void *__ptr;
  void *pvVar3;
  
  __ptr = (void *)param_1[1];
  *param_1 = &PTR_FUN_0075fe18;
  if (__ptr == (void *)0x0) {
    return;
  }
  pvVar3 = (void *)param_1[2];
  if (pvVar3 == __ptr) {
    param_1[2] = __ptr;
    free(__ptr);
    return;
  }
  do {
    plVar2 = *(long **)((long)pvVar3 + -8);
    if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0)
       ) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_0071245c(plVar2);
    }
    pvVar3 = (void *)((long)pvVar3 + -0x10);
  } while (pvVar3 != __ptr);
  param_1[2] = __ptr;
  free((void *)param_1[1]);
  return;
}


// ===== 0030ebc0  FUN_0030ebc0 =====

void FUN_0030ebc0(long *param_1)

{
  long lVar1;
  void *__ptr;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar3 = (void *)param_1[1];
  *param_1 = (long)(PTR_DAT_007a1200 + 0x10);
  if (pvVar3 != (void *)0x0) {
    pvVar4 = (void *)param_1[2];
    __ptr = pvVar3;
    if (pvVar4 != pvVar3) {
      do {
        plVar2 = *(long **)((long)pvVar4 + -8);
        if ((plVar2 != (long *)0x0) &&
           (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        pvVar4 = (void *)((long)pvVar4 + -0x10);
      } while (pvVar4 != pvVar3);
      __ptr = (void *)param_1[1];
    }
    param_1[2] = (long)pvVar3;
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0030ec60  FUN_0030ec60 =====

void FUN_0030ec60(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  plVar2 = *(long **)(param_1 + 0x10);
  for (plVar7 = *(long **)(param_1 + 8); plVar7 != plVar2; plVar7 = plVar7 + 2) {
    plVar1 = (long *)*plVar7;
    plVar3 = (long *)plVar7[1];
    if (plVar3 != (long *)0x0) {
      FUN_00755c20(1,plVar3 + 1);
    }
    if ((int)plVar1[1] == 1) {
                    /* try { // try from 0030ecc4 to 0030eccb has its CatchHandler @ 0030ed24 */
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    if ((plVar3 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_0071245c(plVar3);
    }
  }
  if (*(long *)(lVar4 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030ed4c  FUN_0030ed4c =====

void FUN_0030ed4c(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (puVar7 = *(undefined8 **)(param_1 + 8); puVar7 != puVar2; puVar7 = puVar7 + 2) {
    plVar1 = (long *)*puVar7;
    plVar3 = (long *)puVar7[1];
    if (plVar3 != (long *)0x0) {
      FUN_00755c20(1,plVar3 + 1);
    }
                    /* try { // try from 0030eda4 to 0030edab has its CatchHandler @ 0030ee04 */
    (**(code **)(*plVar1 + 0x18))(plVar1);
    if ((plVar3 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_0071245c(plVar3);
    }
  }
  if (*(long *)(lVar4 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030ee2c  FUN_0030ee2c =====

void FUN_0030ee2c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = tpidr_el0;
  lVar7 = *(long *)(lVar5 + 0x28);
  FUN_0030e320(param_2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  for (; puVar1 != puVar3; puVar1 = puVar1 + 2) {
    plVar2 = (long *)*puVar1;
    plVar4 = (long *)puVar1[1];
    if (plVar4 != (long *)0x0) {
      FUN_00755c20(1,plVar4 + 1);
    }
                    /* try { // try from 0030eec8 to 0030eed3 has its CatchHandler @ 0030ef04 */
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
    if ((plVar4 != (long *)0x0) && (lVar6 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar6 == 0)
       ) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0071245c(plVar4);
    }
  }
  if (*(long *)(lVar5 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0030ef2c  FUN_0030ef2c =====

undefined8
FUN_0030ef2c(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 local_c8;
  long *local_c0;
  undefined8 local_b8;
  long *plStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *plStack_88;
  ulong local_80;
  undefined8 uStack_78;
  void *local_70;
  undefined4 local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x28);
    local_80 = *(ulong *)(param_1 + 0x20);
    local_70 = *(void **)(param_1 + 0x30);
  }
  else {
    FUN_00310244(&local_80,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  }
  local_68 = *(undefined4 *)(param_1 + 0x38);
  uStack_98 = *(undefined8 *)(param_2 + 0x20);
  local_a8 = *param_4;
  local_a0 = (long *)param_4[1];
  if (local_a0 != (long *)0x0) {
    FUN_00755c20(1,local_a0 + 1);
  }
  local_b8 = *param_5;
  plVar5 = (long *)param_5[1];
  plStack_b0 = plVar5;
  if (plVar5 != (long *)0x0) {
    FUN_00755c20(1,plVar5 + 1);
  }
                    /* try { // try from 0030efd4 to 0030efef has its CatchHandler @ 0030f19c */
  FUN_0030f1dc(&local_90,&local_80,&uStack_98,param_3,&local_a8,&local_b8);
  if ((plVar5 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  plVar5 = local_a0;
  if ((local_a0 != (long *)0x0) &&
     (lVar3 = FUN_00755c50(0xffffffffffffffff,local_a0 + 1), lVar3 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
                    /* try { // try from 0030f04c to 0030f053 has its CatchHandler @ 0030f18c */
  FUN_00715bcc(param_1 + 0x98);
  plVar5 = plStack_88;
  uVar2 = local_90;
  local_c8 = local_90;
  local_c0 = plStack_88;
  if (plStack_88 == (long *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x10);
    if (puVar4 < *(undefined8 **)(param_2 + 0x18)) {
      *puVar4 = local_90;
      puVar4[1] = 0;
      puVar4 = puVar4 + 2;
      goto LAB_0030f0c0;
    }
  }
  else {
    FUN_00755c20(1,plStack_88 + 1);
    puVar4 = *(undefined8 **)(param_2 + 0x10);
    if (puVar4 < *(undefined8 **)(param_2 + 0x18)) {
      *puVar4 = uVar2;
      puVar4[1] = plVar5;
      FUN_00755c20(1,plVar5 + 1);
      puVar4 = puVar4 + 2;
      goto LAB_0030f0c0;
    }
  }
                    /* try { // try from 0030f0b0 to 0030f0bb has its CatchHandler @ 0030f174 */
  puVar4 = (undefined8 *)FUN_00310b40(param_2 + 8,&local_c8);
  plVar5 = local_c0;
LAB_0030f0c0:
  *(undefined8 **)(param_2 + 0x10) = puVar4;
  if ((plVar5 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  FUN_00715bf8(param_1 + 0x98);
  if ((plStack_88 != (long *)0x0) &&
     (lVar3 = FUN_00755c50(0xffffffffffffffff,plStack_88 + 1), lVar3 == 0)) {
    (**(code **)(*plStack_88 + 0x10))(plStack_88);
    FUN_0071245c(plStack_88);
  }
  if ((local_80 & 1) != 0) {
    free(local_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_90;
}


// ===== 0030f1dc  FUN_0030f1dc =====

void FUN_0030f1dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_78;
  long *local_70;
  undefined8 local_68;
  long *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00759c3c(0x58);
  local_68 = *param_5;
  local_60 = (long *)param_5[1];
  if (local_60 != (long *)0x0) {
    FUN_00755c20(1,local_60 + 1);
  }
  local_78 = *param_6;
  local_70 = (long *)param_6[1];
  if (local_70 != (long *)0x0) {
    FUN_00755c20(1,local_70 + 1);
  }
                    /* try { // try from 0030f258 to 0030f273 has its CatchHandler @ 0030f340 */
  FUN_0030f7d4(uVar3,param_2,param_3,param_4,&local_68,&local_78);
  *param_1 = uVar3;
                    /* try { // try from 0030f278 to 0030f27f has its CatchHandler @ 0030f324 */
  puVar4 = (undefined8 *)FUN_00759c3c(0x20);
  plVar2 = local_70;
  puVar4[2] = 0;
  puVar4[3] = uVar3;
  param_1[1] = puVar4;
  *puVar4 = &PTR_FUN_00760060;
  puVar4[1] = 0;
  if ((local_70 != (long *)0x0) &&
     (lVar5 = FUN_00755c50(0xffffffffffffffff,local_70 + 1), lVar5 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  plVar2 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar5 = FUN_00755c50(0xffffffffffffffff,local_60 + 1), lVar5 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030f380  FUN_0030f380 =====

undefined8
FUN_0030f380(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 local_c8;
  long *local_c0;
  undefined8 local_b8;
  long *plStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *plStack_88;
  ulong local_80;
  undefined8 uStack_78;
  void *local_70;
  undefined4 local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x28);
    local_80 = *(ulong *)(param_1 + 0x20);
    local_70 = *(void **)(param_1 + 0x30);
  }
  else {
    FUN_00310244(&local_80,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  }
  local_68 = *(undefined4 *)(param_1 + 0x38);
  uStack_98 = *(undefined8 *)(param_2 + 0x20);
  local_a8 = *param_4;
  local_a0 = (long *)param_4[1];
  if (local_a0 != (long *)0x0) {
    FUN_00755c20(1,local_a0 + 1);
  }
  local_b8 = *param_5;
  plVar5 = (long *)param_5[1];
  plStack_b0 = plVar5;
  if (plVar5 != (long *)0x0) {
    FUN_00755c20(1,plVar5 + 1);
  }
                    /* try { // try from 0030f428 to 0030f443 has its CatchHandler @ 0030f5f0 */
  FUN_0030f630(&local_90,&local_80,&uStack_98,param_3,&local_a8,&local_b8);
  if ((plVar5 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  plVar5 = local_a0;
  if ((local_a0 != (long *)0x0) &&
     (lVar3 = FUN_00755c50(0xffffffffffffffff,local_a0 + 1), lVar3 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
                    /* try { // try from 0030f4a0 to 0030f4a7 has its CatchHandler @ 0030f5e0 */
  FUN_00715bcc(param_1 + 0x98);
  plVar5 = plStack_88;
  uVar2 = local_90;
  local_c8 = local_90;
  local_c0 = plStack_88;
  if (plStack_88 == (long *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x10);
    if (puVar4 < *(undefined8 **)(param_2 + 0x18)) {
      *puVar4 = local_90;
      puVar4[1] = 0;
      puVar4 = puVar4 + 2;
      goto LAB_0030f514;
    }
  }
  else {
    FUN_00755c20(1,plStack_88 + 1);
    puVar4 = *(undefined8 **)(param_2 + 0x10);
    if (puVar4 < *(undefined8 **)(param_2 + 0x18)) {
      *puVar4 = uVar2;
      puVar4[1] = plVar5;
      FUN_00755c20(1,plVar5 + 1);
      puVar4 = puVar4 + 2;
      goto LAB_0030f514;
    }
  }
                    /* try { // try from 0030f504 to 0030f50f has its CatchHandler @ 0030f5c8 */
  puVar4 = (undefined8 *)FUN_00310cc4(param_2 + 8,&local_c8);
  plVar5 = local_c0;
LAB_0030f514:
  *(undefined8 **)(param_2 + 0x10) = puVar4;
  if ((plVar5 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  FUN_00715bf8(param_1 + 0x98);
  if ((plStack_88 != (long *)0x0) &&
     (lVar3 = FUN_00755c50(0xffffffffffffffff,plStack_88 + 1), lVar3 == 0)) {
    (**(code **)(*plStack_88 + 0x10))(plStack_88);
    FUN_0071245c(plStack_88);
  }
  if ((local_80 & 1) != 0) {
    free(local_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_90;
}


// ===== 0030f630  FUN_0030f630 =====

void FUN_0030f630(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_78;
  long *local_70;
  undefined8 local_68;
  long *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00759c3c(0x58);
  local_68 = *param_5;
  local_60 = (long *)param_5[1];
  if (local_60 != (long *)0x0) {
    FUN_00755c20(1,local_60 + 1);
  }
  local_78 = *param_6;
  local_70 = (long *)param_6[1];
  if (local_70 != (long *)0x0) {
    FUN_00755c20(1,local_70 + 1);
  }
                    /* try { // try from 0030f6ac to 0030f6c7 has its CatchHandler @ 0030f794 */
  FUN_0030fd0c(uVar3,param_2,param_3,param_4,&local_68,&local_78);
  *param_1 = uVar3;
                    /* try { // try from 0030f6cc to 0030f6d3 has its CatchHandler @ 0030f778 */
  puVar4 = (undefined8 *)FUN_00759c3c(0x20);
  plVar2 = local_70;
  puVar4[2] = 0;
  puVar4[3] = uVar3;
  param_1[1] = puVar4;
  *puVar4 = &PTR_FUN_00760228;
  puVar4[1] = 0;
  if ((local_70 != (long *)0x0) &&
     (lVar5 = FUN_00755c50(0xffffffffffffffff,local_70 + 1), lVar5 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  plVar2 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar5 = FUN_00755c50(0xffffffffffffffff,local_60 + 1), lVar5 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030f7d4  FUN_0030f7d4 =====

void FUN_0030f7d4(long *param_1,undefined8 param_2,long param_3,undefined4 *param_4,long *param_5,
                 undefined8 *param_6)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined8 local_110;
  long *local_108;
  long *local_100;
  long *local_f8;
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  void *local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long local_c0;
  long *plStack_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long *plStack_98;
  long *local_90;
  long *local_88;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_DAT_007a1248 + 0x10;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = param_3;
  *param_1 = (long)puVar1;
  param_1[3] = *param_5;
  lVar6 = param_5[1];
  param_1[4] = lVar6;
  if (lVar6 != 0) {
    FUN_00755c20(1,lVar6 + 8);
  }
  plVar7 = param_1 + 5;
  *plVar7 = 0x42c8000000000000;
  uVar9 = param_4[1];
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 6) = uVar9;
  param_1[10] = 0;
  param_1[9] = 0;
                    /* try { // try from 0030f884 to 0030f88b has its CatchHandler @ 0030fd04 */
  plVar5 = (long *)FUN_00759c3c(0x20);
  *(undefined4 *)(plVar5 + 2) = uVar9;
  puVar1 = PTR_DAT_007a1250;
  plVar5[3] = (long)(param_1 + 3);
  *plVar5 = (long)(puVar1 + 0x10);
  plVar5[1] = (long)plVar7;
  local_90 = plVar5;
                    /* try { // try from 0030f8ac to 0030f8b3 has its CatchHandler @ 0030fcf4 */
  local_a8 = (long *)FUN_00759c3c(0x20);
  puVar1 = PTR_DAT_007a1258;
  uVar3 = *(ulong *)(param_4 + 2);
  local_a8[2] = 0;
  local_a8[3] = (long)plVar5;
  *local_a8 = (long)(puVar1 + 0x10);
  local_a8[1] = 0;
  local_88 = local_a8;
  if ((uVar3 & 1) == 0) {
    uStack_e8 = *(ulong *)(param_4 + 4);
    local_f0 = *(ulong *)(param_4 + 2);
    local_e0 = *(void **)(param_4 + 6);
  }
  else {
                    /* try { // try from 0030f8f4 to 0030f8fb has its CatchHandler @ 0030fc4c */
    FUN_00310244(&local_f0,*(undefined8 *)(param_4 + 6),*(undefined8 *)(param_4 + 4));
  }
  uStack_d0 = *(undefined8 *)(param_4 + 0x10);
  local_d8 = *(void **)(param_4 + 0xe);
  local_b0 = plVar5;
  FUN_00755c20(1,local_a8 + 1);
                    /* try { // try from 0030f914 to 0030f92b has its CatchHandler @ 0030fc98 */
  FUN_00335334(&local_a0,param_2,param_3,&local_f0,&local_b0);
  plVar4 = plStack_98;
  plVar5 = local_a0;
  plVar8 = (long *)param_1[8];
  local_a0 = (long *)0x0;
  plStack_98 = (long *)0x0;
  param_1[8] = (long)plVar4;
  param_1[7] = (long)plVar5;
  if ((plVar8 != (long *)0x0) && (lVar6 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar6 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0071245c(plVar8);
  }
  plVar4 = plStack_98;
  plVar5 = local_a8;
  if ((plStack_98 != (long *)0x0) &&
     (lVar6 = FUN_00755c50(0xffffffffffffffff,plStack_98 + 1), plVar5 = local_a8, lVar6 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
    plVar5 = local_a8;
  }
  local_a8 = plVar5;
  if ((plVar5 != (long *)0x0) && (lVar6 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar6 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  if ((local_f0 & 1) != 0) {
    free(local_e0);
  }
                    /* try { // try from 0030f9a8 to 0030f9af has its CatchHandler @ 0030fc90 */
  plVar5 = (long *)FUN_00759c3c(0x10);
  *plVar5 = (long)(PTR_DAT_007a1260 + 0x10);
  plVar5[1] = (long)plVar7;
  local_a0 = plVar5;
                    /* try { // try from 0030f9c8 to 0030f9cf has its CatchHandler @ 0030fc84 */
  local_f8 = (long *)FUN_00759c3c(0x20);
  puVar1 = PTR_DAT_007a1268;
  uVar9 = *param_4;
  local_f8[2] = 0;
  local_f8[3] = (long)plVar5;
  uVar3 = *(ulong *)(param_4 + 8);
  local_f0 = CONCAT44(local_f0._4_4_,uVar9);
  *local_f8 = (long)(puVar1 + 0x10);
  local_f8[1] = 0;
  plStack_98 = local_f8;
  if ((uVar3 & 1) == 0) {
    local_e0 = *(void **)(param_4 + 10);
    uStack_e8 = *(ulong *)(param_4 + 8);
    local_d8 = *(void **)(param_4 + 0xc);
  }
  else {
                    /* try { // try from 0030fa1c to 0030fa23 has its CatchHandler @ 0030fc44 */
    FUN_00310244(&uStack_e8,*(undefined8 *)(param_4 + 0xc),*(undefined8 *)(param_4 + 10));
  }
  uStack_c8 = *(undefined8 *)(param_4 + 0x14);
  uStack_d0 = *(undefined8 *)(param_4 + 0x12);
  local_100 = plVar5;
  FUN_00755c20(1,local_f8 + 1);
  local_110 = *param_6;
  local_108 = (long *)param_6[1];
  if (local_108 != (long *)0x0) {
    FUN_00755c20(1,local_108 + 1);
  }
                    /* try { // try from 0030fa54 to 0030fa6f has its CatchHandler @ 0030fc54 */
  FUN_003110f4(&local_c0,param_2,param_3,&local_f0,&local_100,&local_110);
  plVar5 = plStack_b8;
  lVar6 = local_c0;
  plVar7 = (long *)param_1[10];
  local_c0 = 0;
  plStack_b8 = (long *)0x0;
  param_1[10] = (long)plVar5;
  param_1[9] = lVar6;
  if ((plVar7 != (long *)0x0) && (lVar6 = FUN_00755c50(0xffffffffffffffff,plVar7 + 1), lVar6 == 0))
  {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_0071245c(plVar7);
  }
  plVar5 = plStack_b8;
  if ((plStack_b8 != (long *)0x0) &&
     (lVar6 = FUN_00755c50(0xffffffffffffffff,plStack_b8 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  plVar7 = local_108;
  plVar5 = local_f8;
  if ((local_108 != (long *)0x0) &&
     (lVar6 = FUN_00755c50(0xffffffffffffffff,local_108 + 1), plVar5 = local_f8, lVar6 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_0071245c(plVar7);
    plVar5 = local_f8;
  }
  local_f8 = plVar5;
  if ((plVar5 != (long *)0x0) && (lVar6 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar6 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  if ((uStack_e8 & 1) != 0) {
    free(local_d8);
  }
  plVar5 = plStack_98;
  if ((plStack_98 != (long *)0x0) &&
     (lVar6 = FUN_00755c50(0xffffffffffffffff,plStack_98 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar6 = FUN_00755c50(0xffffffffffffffff,local_88 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  if (*(long *)(lVar2 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0030fd0c  FUN_0030fd0c =====

void FUN_0030fd0c(long *param_1,undefined8 param_2,long param_3,undefined4 *param_4,long *param_5,
                 undefined8 *param_6)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined8 local_110;
  long *local_108;
  long *local_100;
  long *local_f8;
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  void *local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long local_c0;
  long *plStack_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long *plStack_98;
  long *local_90;
  long *local_88;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_DAT_007a1270 + 0x10;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = param_3;
  *param_1 = (long)puVar1;
  param_1[3] = *param_5;
  lVar6 = param_5[1];
  param_1[4] = lVar6;
  if (lVar6 != 0) {
    FUN_00755c20(1,lVar6 + 8);
  }
  plVar7 = param_1 + 5;
  *plVar7 = 0x42c8000000000000;
  uVar9 = param_4[1];
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 6) = uVar9;
  param_1[10] = 0;
  param_1[9] = 0;
                    /* try { // try from 0030fdbc to 0030fdc3 has its CatchHandler @ 0031023c */
  plVar5 = (long *)FUN_00759c3c(0x20);
  *(undefined4 *)(plVar5 + 2) = uVar9;
  puVar1 = PTR_DAT_007a1278;
  plVar5[3] = (long)(param_1 + 3);
  *plVar5 = (long)(puVar1 + 0x10);
  plVar5[1] = (long)plVar7;
  local_90 = plVar5;
                    /* try { // try from 0030fde4 to 0030fdeb has its CatchHandler @ 0031022c */
  local_a8 = (long *)FUN_00759c3c(0x20);
  puVar1 = PTR_DAT_007a1280;
  uVar3 = *(ulong *)(param_4 + 2);
  local_a8[2] = 0;
  local_a8[3] = (long)plVar5;
  *local_a8 = (long)(puVar1 + 0x10);
  local_a8[1] = 0;
  local_88 = local_a8;
  if ((uVar3 & 1) == 0) {
    uStack_e8 = *(ulong *)(param_4 + 4);
    local_f0 = *(ulong *)(param_4 + 2);
    local_e0 = *(void **)(param_4 + 6);
  }
  else {
                    /* try { // try from 0030fe2c to 0030fe33 has its CatchHandler @ 00310184 */
    FUN_00310244(&local_f0,*(undefined8 *)(param_4 + 6),*(undefined8 *)(param_4 + 4));
  }
  uStack_d0 = *(undefined8 *)(param_4 + 0x10);
  local_d8 = *(void **)(param_4 + 0xe);
  local_b0 = plVar5;
  FUN_00755c20(1,local_a8 + 1);
                    /* try { // try from 0030fe4c to 0030fe63 has its CatchHandler @ 003101d0 */
  FUN_0033546c(&local_a0,param_2,param_3,&local_f0,&local_b0);
  plVar4 = plStack_98;
  plVar5 = local_a0;
  plVar8 = (long *)param_1[8];
  local_a0 = (long *)0x0;
  plStack_98 = (long *)0x0;
  param_1[8] = (long)plVar4;
  param_1[7] = (long)plVar5;
  if ((plVar8 != (long *)0x0) && (lVar6 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar6 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0071245c(plVar8);
  }
  plVar4 = plStack_98;
  plVar5 = local_a8;
  if ((plStack_98 != (long *)0x0) &&
     (lVar6 = FUN_00755c50(0xffffffffffffffff,plStack_98 + 1), plVar5 = local_a8, lVar6 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
    plVar5 = local_a8;
  }
  local_a8 = plVar5;
  if ((plVar5 != (long *)0x0) && (lVar6 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar6 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  if ((local_f0 & 1) != 0) {
    free(local_e0);
  }
                    /* try { // try from 0030fee0 to 0030fee7 has its CatchHandler @ 003101c8 */
  plVar5 = (long *)FUN_00759c3c(0x10);
  *plVar5 = (long)(PTR_DAT_007a1288 + 0x10);
  plVar5[1] = (long)plVar7;
  local_a0 = plVar5;
                    /* try { // try from 0030ff00 to 0030ff07 has its CatchHandler @ 003101bc */
  local_f8 = (long *)FUN_00759c3c(0x20);
  puVar1 = PTR_DAT_007a1290;
  uVar9 = *param_4;
  local_f8[2] = 0;
  local_f8[3] = (long)plVar5;
  uVar3 = *(ulong *)(param_4 + 8);
  local_f0 = CONCAT44(local_f0._4_4_,uVar9);
  *local_f8 = (long)(puVar1 + 0x10);
  local_f8[1] = 0;
  plStack_98 = local_f8;
  if ((uVar3 & 1) == 0) {
    local_e0 = *(void **)(param_4 + 10);
    uStack_e8 = *(ulong *)(param_4 + 8);
    local_d8 = *(void **)(param_4 + 0xc);
  }
  else {
                    /* try { // try from 0030ff54 to 0030ff5b has its CatchHandler @ 0031017c */
    FUN_00310244(&uStack_e8,*(undefined8 *)(param_4 + 0xc),*(undefined8 *)(param_4 + 10));
  }
  uStack_c8 = *(undefined8 *)(param_4 + 0x14);
  uStack_d0 = *(undefined8 *)(param_4 + 0x12);
  local_100 = plVar5;
  FUN_00755c20(1,local_f8 + 1);
  local_110 = *param_6;
  local_108 = (long *)param_6[1];
  if (local_108 != (long *)0x0) {
    FUN_00755c20(1,local_108 + 1);
  }
                    /* try { // try from 0030ff8c to 0030ffa7 has its CatchHandler @ 0031018c */
  FUN_0031153c(&local_c0,param_2,param_3,&local_f0,&local_100,&local_110);
  plVar5 = plStack_b8;
  lVar6 = local_c0;
  plVar7 = (long *)param_1[10];
  local_c0 = 0;
  plStack_b8 = (long *)0x0;
  param_1[10] = (long)plVar5;
  param_1[9] = lVar6;
  if ((plVar7 != (long *)0x0) && (lVar6 = FUN_00755c50(0xffffffffffffffff,plVar7 + 1), lVar6 == 0))
  {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_0071245c(plVar7);
  }
  plVar5 = plStack_b8;
  if ((plStack_b8 != (long *)0x0) &&
     (lVar6 = FUN_00755c50(0xffffffffffffffff,plStack_b8 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  plVar7 = local_108;
  plVar5 = local_f8;
  if ((local_108 != (long *)0x0) &&
     (lVar6 = FUN_00755c50(0xffffffffffffffff,local_108 + 1), plVar5 = local_f8, lVar6 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_0071245c(plVar7);
    plVar5 = local_f8;
  }
  local_f8 = plVar5;
  if ((plVar5 != (long *)0x0) && (lVar6 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar6 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  if ((uStack_e8 & 1) != 0) {
    free(local_d8);
  }
  plVar5 = plStack_98;
  if ((plStack_98 != (long *)0x0) &&
     (lVar6 = FUN_00755c50(0xffffffffffffffff,plStack_98 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar6 = FUN_00755c50(0xffffffffffffffff,local_88 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  if (*(long *)(lVar2 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00310244  FUN_00310244 =====

void FUN_00310244(ulong *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  void *__dest;
  
  if (param_3 < 5) {
    *(char *)param_1 = (char)((int)param_3 << 1);
    memmove((undefined1 *)((long)param_1 + 4),param_2,param_3 * 4 + 4);
    return;
  }
  if (param_3 < 0x3ffffffffffffff8) {
    uVar1 = (param_3 & 0x3ffffffffffffffe) + 2;
    if ((param_3 | 1) != 5) {
      uVar1 = param_3 | 1;
    }
    if (uVar1 < 0x3fffffffffffffff) {
      __dest = (void *)FUN_00759c3c((uVar1 + 1) * 4);
      param_1[1] = param_3;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar1 + 1 | 1;
      memmove(__dest,param_2,param_3 * 4 + 4);
      return;
    }
  }
  else {
    FUN_002f9e4c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_002f9ee0();
}


// ===== 003102f0  FUN_003102f0 =====

void FUN_003102f0(long param_1)

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


// ===== 00310340  FUN_00310340 =====

void FUN_00310340(void)

{
  return;
}


// ===== 00310344  FUN_00310344 =====

void FUN_00310344(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[10];
  *param_1 = (long)(PTR_DAT_007a1248 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  plVar2 = (long *)param_1[8];
  if ((plVar2 == (long *)0x0) || (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 != 0))
  {
    plVar2 = (long *)param_1[4];
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    plVar2 = (long *)param_1[4];
  }
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 00310414  FUN_00310414 =====

void FUN_00310414(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[10];
  *param_1 = (long)(PTR_DAT_007a1248 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  plVar2 = (long *)param_1[8];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  plVar2 = (long *)param_1[4];
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


// ===== 003104e4  FUN_003104e4 =====

void FUN_003104e4(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x38) + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x00310518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x48) + 0x18))();
  return;
}


// ===== 0031051c  FUN_0031051c =====

void FUN_0031051c(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  (**(code **)(**(long **)(param_1 + 0x38) + 0x20))();
  if (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) {
    uVar1 = (**(code **)**(undefined8 **)(param_1 + 0x18))();
    *(byte *)(param_1 + 0x29) = (byte)uVar1 & 1;
    *(byte *)(param_1 + 0x2a) = (byte)((uint)uVar1 >> 8) & 1;
    *(byte *)(param_1 + 0x2b) = (byte)((uint)uVar1 >> 0x10) & 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00310584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x48) + 0x20))(*(long **)(param_1 + 0x48),param_2);
  return;
}


// ===== 00310588  FUN_00310588 =====

void FUN_00310588(long param_1,undefined8 param_2)

{
  (**(code **)(**(long **)(param_1 + 0x38) + 0x28))();
                    /* WARNING: Could not recover jumptable at 0x003105c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x48) + 0x28))(*(long **)(param_1 + 0x48),param_2);
  return;
}


// ===== 003105c8  FUN_003105c8 =====

void FUN_003105c8(float param_1,long param_2)

{
  undefined4 extraout_var;
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)**(undefined8 **)(param_2 + 0x18);
  *(bool *)*(undefined8 *)(param_2 + 8) = *(float *)(param_2 + 0x10) < param_1;
  (*(code *)*puVar1)();
  *(undefined4 *)(*(long *)(param_2 + 8) + 4) = extraout_var;
  return;
}


// ===== 00310618  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0031061c  FUN_0031061c =====

void FUN_0031061c(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00310640  FUN_00310640 =====

void FUN_00310640(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00310650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}


// ===== 00310658  FUN_00310658 =====

long FUN_00310658(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP5A_007a1298) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00310674  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00310678  FUN_00310678 =====

undefined8 FUN_00310678(long param_1)

{
  return **(undefined8 **)(param_1 + 8);
}


// ===== 00310684  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00310688  FUN_00310688 =====

void FUN_00310688(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 003106ac  FUN_003106ac =====

void FUN_003106ac(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003106bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}


// ===== 003106c4  FUN_003106c4 =====

long FUN_003106c4(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP5A_007a12a0) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 003106e0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 003106e4  FUN_003106e4 =====

void FUN_003106e4(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00310708  FUN_00310708 =====

void FUN_00310708(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00310718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 00310720  FUN_00310720 =====

long FUN_00310720(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP34_007a12a8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0031073c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00310740  FUN_00310740 =====

void FUN_00310740(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[10];
  *param_1 = (long)(PTR_DAT_007a1270 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  plVar2 = (long *)param_1[8];
  if ((plVar2 == (long *)0x0) || (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 != 0))
  {
    plVar2 = (long *)param_1[4];
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    plVar2 = (long *)param_1[4];
  }
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 00310810  FUN_00310810 =====

void FUN_00310810(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[10];
  *param_1 = (long)(PTR_DAT_007a1270 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  plVar2 = (long *)param_1[8];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  plVar2 = (long *)param_1[4];
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


// ===== 003108e0  FUN_003108e0 =====

void FUN_003108e0(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x38) + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x00310914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x48) + 0x18))();
  return;
}


// ===== 00310918  FUN_00310918 =====

void FUN_00310918(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  (**(code **)(**(long **)(param_1 + 0x38) + 0x20))();
  if (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) {
    uVar1 = (**(code **)**(undefined8 **)(param_1 + 0x18))();
    *(byte *)(param_1 + 0x29) = (byte)uVar1 & 1;
    *(byte *)(param_1 + 0x2a) = (byte)((uint)uVar1 >> 8) & 1;
    *(byte *)(param_1 + 0x2b) = (byte)((uint)uVar1 >> 0x10) & 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00310980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x48) + 0x20))(*(long **)(param_1 + 0x48),param_2);
  return;
}


// ===== 00310984  FUN_00310984 =====

void FUN_00310984(long param_1,undefined8 param_2)

{
  (**(code **)(**(long **)(param_1 + 0x38) + 0x28))();
                    /* WARNING: Could not recover jumptable at 0x003109c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x48) + 0x28))(*(long **)(param_1 + 0x48),param_2);
  return;
}


// ===== 003109c4  FUN_003109c4 =====

void FUN_003109c4(float param_1,long param_2)

{
  undefined4 extraout_var;
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)**(undefined8 **)(param_2 + 0x18);
  *(bool *)*(undefined8 *)(param_2 + 8) = *(float *)(param_2 + 0x10) < param_1;
  (*(code *)*puVar1)();
  *(undefined4 *)(*(long *)(param_2 + 8) + 4) = extraout_var;
  return;
}


// ===== 00310a14  FUN_00310a14 =====

void FUN_00310a14(void)

{
  return;
}


// ===== 00310a18  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00310a1c  FUN_00310a1c =====

void FUN_00310a1c(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00310a40  FUN_00310a40 =====

void FUN_00310a40(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00310a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}


// ===== 00310a58  FUN_00310a58 =====

long FUN_00310a58(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP5A_007a12b0) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00310a74  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00310a78  FUN_00310a78 =====

undefined8 FUN_00310a78(long param_1)

{
  return **(undefined8 **)(param_1 + 8);
}


// ===== 00310a84  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00310a88  FUN_00310a88 =====

void FUN_00310a88(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00310aac  FUN_00310aac =====

void FUN_00310aac(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00310abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}


// ===== 00310ac4  FUN_00310ac4 =====

long FUN_00310ac4(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP5A_007a12b8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00310ae0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00310ae4  FUN_00310ae4 =====

void FUN_00310ae4(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00310b08  FUN_00310b08 =====

void FUN_00310b08(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00310b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 00310b20  FUN_00310b20 =====

long FUN_00310b20(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP34_007a12c0) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00310b3c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00310b40  FUN_00310b40 =====

undefined8 * FUN_00310b40(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *__ptr;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  
  __ptr = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  lVar11 = (long)puVar10 - (long)__ptr >> 4;
  uVar1 = lVar11 + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar8 = param_1[2] - (long)__ptr >> 3;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - (long)__ptr)) {
      uVar8 = 0xfffffffffffffff;
    }
    if (uVar8 == 0) {
      lVar3 = 0;
      lVar4 = param_2[1];
      uVar12 = *param_2;
      puVar2 = (undefined8 *)(lVar11 * 0x10);
      puVar2[1] = lVar4;
      *puVar2 = uVar12;
    }
    else {
      if (uVar8 >> 0x3c != 0) goto LAB_00310cac;
      lVar3 = FUN_00759c3c(uVar8 << 4);
      lVar4 = param_2[1];
      uVar12 = *param_2;
      puVar2 = (undefined8 *)(lVar3 + lVar11 * 0x10);
      puVar2[1] = lVar4;
      *puVar2 = uVar12;
    }
    if (lVar4 != 0) {
      FUN_00755c20(1,lVar4 + 8);
      __ptr = (undefined8 *)*param_1;
      puVar10 = (undefined8 *)param_1[1];
      lVar11 = (long)puVar10 - (long)__ptr >> 4;
    }
    puVar5 = puVar2 + lVar11 * -2;
    puVar6 = __ptr;
    if (__ptr != puVar10) {
      do {
        uVar12 = *puVar6;
        puVar5[1] = puVar6[1];
        *puVar5 = uVar12;
        puVar7 = puVar6 + 2;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar5 = puVar5 + 2;
        puVar6 = puVar7;
      } while (puVar7 != puVar10);
      do {
        plVar9 = (long *)__ptr[1];
        if ((plVar9 != (long *)0x0) &&
           (lVar4 = FUN_00755c50(0xffffffffffffffff,plVar9 + 1), lVar4 == 0)) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          FUN_0071245c(plVar9);
        }
        __ptr = __ptr + 2;
      } while (__ptr != puVar10);
      __ptr = (undefined8 *)*param_1;
    }
    *param_1 = (long)(puVar2 + lVar11 * -2);
    param_1[1] = (long)(puVar2 + 2);
    param_1[2] = lVar3 + uVar8 * 0x10;
    if (__ptr != (undefined8 *)0x0) {
      free(__ptr);
    }
    return puVar2 + 2;
  }
  FUN_00310cb0(param_1);
LAB_00310cac:
                    /* WARNING: Subroutine does not return */
  FUN_002f9ee0();
}


// ===== 00310cb0  FUN_00310cb0 =====

void FUN_00310cb0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 00310cc4  FUN_00310cc4 =====

undefined8 * FUN_00310cc4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *__ptr;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  
  __ptr = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  lVar11 = (long)puVar10 - (long)__ptr >> 4;
  uVar1 = lVar11 + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar8 = param_1[2] - (long)__ptr >> 3;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - (long)__ptr)) {
      uVar8 = 0xfffffffffffffff;
    }
    if (uVar8 == 0) {
      lVar3 = 0;
      lVar4 = param_2[1];
      uVar12 = *param_2;
      puVar2 = (undefined8 *)(lVar11 * 0x10);
      puVar2[1] = lVar4;
      *puVar2 = uVar12;
    }
    else {
      if (uVar8 >> 0x3c != 0) goto LAB_00310e30;
      lVar3 = FUN_00759c3c(uVar8 << 4);
      lVar4 = param_2[1];
      uVar12 = *param_2;
      puVar2 = (undefined8 *)(lVar3 + lVar11 * 0x10);
      puVar2[1] = lVar4;
      *puVar2 = uVar12;
    }
    if (lVar4 != 0) {
      FUN_00755c20(1,lVar4 + 8);
      __ptr = (undefined8 *)*param_1;
      puVar10 = (undefined8 *)param_1[1];
      lVar11 = (long)puVar10 - (long)__ptr >> 4;
    }
    puVar5 = puVar2 + lVar11 * -2;
    puVar6 = __ptr;
    if (__ptr != puVar10) {
      do {
        uVar12 = *puVar6;
        puVar5[1] = puVar6[1];
        *puVar5 = uVar12;
        puVar7 = puVar6 + 2;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar5 = puVar5 + 2;
        puVar6 = puVar7;
      } while (puVar7 != puVar10);
      do {
        plVar9 = (long *)__ptr[1];
        if ((plVar9 != (long *)0x0) &&
           (lVar4 = FUN_00755c50(0xffffffffffffffff,plVar9 + 1), lVar4 == 0)) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          FUN_0071245c(plVar9);
        }
        __ptr = __ptr + 2;
      } while (__ptr != puVar10);
      __ptr = (undefined8 *)*param_1;
    }
    *param_1 = (long)(puVar2 + lVar11 * -2);
    param_1[1] = (long)(puVar2 + 2);
    param_1[2] = lVar3 + uVar8 * 0x10;
    if (__ptr != (undefined8 *)0x0) {
      free(__ptr);
    }
    return puVar2 + 2;
  }
  FUN_00310e34(param_1);
LAB_00310e30:
                    /* WARNING: Subroutine does not return */
  FUN_002f9ee0();
}


// ===== 00310e34  FUN_00310e34 =====

void FUN_00310e34(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 00310e48  FUN_00310e48 =====

undefined8
FUN_00310e48(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 local_c8;
  long *local_c0;
  undefined8 local_b8;
  long *plStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *plStack_88;
  ulong local_80;
  undefined8 uStack_78;
  void *local_70;
  undefined4 local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x28);
    local_80 = *(ulong *)(param_1 + 0x20);
    local_70 = *(void **)(param_1 + 0x30);
    lVar3 = param_1;
  }
  else {
    lVar3 = FUN_00310244(&local_80,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  }
  local_68 = *(undefined4 *)(param_1 + 0x38);
  uStack_98 = *(undefined8 *)(param_2 + 0x20);
  local_a8 = *param_4;
  local_a0 = (long *)param_4[1];
  if (local_a0 != (long *)0x0) {
    lVar3 = FUN_00755c20(1,local_a0 + 1);
  }
  local_b8 = *param_5;
  plVar5 = (long *)param_5[1];
  plStack_b0 = plVar5;
  if (plVar5 != (long *)0x0) {
    lVar3 = FUN_00755c20(1,plVar5 + 1);
  }
                    /* try { // try from 00310ef0 to 00310f07 has its CatchHandler @ 003110b4 */
  FUN_003110f4(&local_90,lVar3,&uStack_98,param_3,&local_a8,&local_b8);
  if ((plVar5 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  plVar5 = local_a0;
  if ((local_a0 != (long *)0x0) &&
     (lVar3 = FUN_00755c50(0xffffffffffffffff,local_a0 + 1), lVar3 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
                    /* try { // try from 00310f64 to 00310f6b has its CatchHandler @ 003110a4 */
  FUN_00715bcc(param_1 + 0x98);
  plVar5 = plStack_88;
  uVar2 = local_90;
  local_c8 = local_90;
  local_c0 = plStack_88;
  if (plStack_88 == (long *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x10);
    if (puVar4 < *(undefined8 **)(param_2 + 0x18)) {
      *puVar4 = local_90;
      puVar4[1] = 0;
      puVar4 = puVar4 + 2;
      goto LAB_00310fd8;
    }
  }
  else {
    FUN_00755c20(1,plStack_88 + 1);
    puVar4 = *(undefined8 **)(param_2 + 0x10);
    if (puVar4 < *(undefined8 **)(param_2 + 0x18)) {
      *puVar4 = uVar2;
      puVar4[1] = plVar5;
      FUN_00755c20(1,plVar5 + 1);
      puVar4 = puVar4 + 2;
      goto LAB_00310fd8;
    }
  }
                    /* try { // try from 00310fc8 to 00310fd3 has its CatchHandler @ 0031108c */
  puVar4 = (undefined8 *)FUN_00310b40(param_2 + 8,&local_c8);
  plVar5 = local_c0;
LAB_00310fd8:
  *(undefined8 **)(param_2 + 0x10) = puVar4;
  if ((plVar5 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  FUN_00715bf8(param_1 + 0x98);
  if ((plStack_88 != (long *)0x0) &&
     (lVar3 = FUN_00755c50(0xffffffffffffffff,plStack_88 + 1), lVar3 == 0)) {
    (**(code **)(*plStack_88 + 0x10))(plStack_88);
    FUN_0071245c(plStack_88);
  }
  if ((local_80 & 1) != 0) {
    free(local_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_90;
}


// ===== 003110f4  FUN_003110f4 =====

void FUN_003110f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_78;
  long *local_70;
  undefined8 local_68;
  long *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00759c3c(0xb8);
  local_68 = *param_5;
  local_60 = (long *)param_5[1];
  if (local_60 != (long *)0x0) {
    FUN_00755c20(1,local_60 + 1);
  }
  local_78 = *param_6;
  local_70 = (long *)param_6[1];
  if (local_70 != (long *)0x0) {
    FUN_00755c20(1,local_70 + 1);
  }
                    /* try { // try from 0031116c to 00311183 has its CatchHandler @ 00311250 */
  FUN_003116d8(uVar3,param_3,param_4,&local_68,&local_78);
  *param_1 = uVar3;
                    /* try { // try from 00311188 to 0031118f has its CatchHandler @ 00311234 */
  puVar4 = (undefined8 *)FUN_00759c3c(0x20);
  plVar2 = local_70;
  puVar4[2] = 0;
  puVar4[3] = uVar3;
  param_1[1] = puVar4;
  *puVar4 = &PTR_FUN_007603a8;
  puVar4[1] = 0;
  if ((local_70 != (long *)0x0) &&
     (lVar5 = FUN_00755c50(0xffffffffffffffff,local_70 + 1), lVar5 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  plVar2 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar5 = FUN_00755c50(0xffffffffffffffff,local_60 + 1), lVar5 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00311290  FUN_00311290 =====

undefined8
FUN_00311290(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 local_c8;
  long *local_c0;
  undefined8 local_b8;
  long *plStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *plStack_88;
  ulong local_80;
  undefined8 uStack_78;
  void *local_70;
  undefined4 local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x28);
    local_80 = *(ulong *)(param_1 + 0x20);
    local_70 = *(void **)(param_1 + 0x30);
    lVar3 = param_1;
  }
  else {
    lVar3 = FUN_00310244(&local_80,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  }
  local_68 = *(undefined4 *)(param_1 + 0x38);
  uStack_98 = *(undefined8 *)(param_2 + 0x20);
  local_a8 = *param_4;
  local_a0 = (long *)param_4[1];
  if (local_a0 != (long *)0x0) {
    lVar3 = FUN_00755c20(1,local_a0 + 1);
  }
  local_b8 = *param_5;
  plVar5 = (long *)param_5[1];
  plStack_b0 = plVar5;
  if (plVar5 != (long *)0x0) {
    lVar3 = FUN_00755c20(1,plVar5 + 1);
  }
                    /* try { // try from 00311338 to 0031134f has its CatchHandler @ 003114fc */
  FUN_0031153c(&local_90,lVar3,&uStack_98,param_3,&local_a8,&local_b8);
  if ((plVar5 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  plVar5 = local_a0;
  if ((local_a0 != (long *)0x0) &&
     (lVar3 = FUN_00755c50(0xffffffffffffffff,local_a0 + 1), lVar3 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
                    /* try { // try from 003113ac to 003113b3 has its CatchHandler @ 003114ec */
  FUN_00715bcc(param_1 + 0x98);
  plVar5 = plStack_88;
  uVar2 = local_90;
  local_c8 = local_90;
  local_c0 = plStack_88;
  if (plStack_88 == (long *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x10);
    if (puVar4 < *(undefined8 **)(param_2 + 0x18)) {
      *puVar4 = local_90;
      puVar4[1] = 0;
      puVar4 = puVar4 + 2;
      goto LAB_00311420;
    }
  }
  else {
    FUN_00755c20(1,plStack_88 + 1);
    puVar4 = *(undefined8 **)(param_2 + 0x10);
    if (puVar4 < *(undefined8 **)(param_2 + 0x18)) {
      *puVar4 = uVar2;
      puVar4[1] = plVar5;
      FUN_00755c20(1,plVar5 + 1);
      puVar4 = puVar4 + 2;
      goto LAB_00311420;
    }
  }
                    /* try { // try from 00311410 to 0031141b has its CatchHandler @ 003114d4 */
  puVar4 = (undefined8 *)FUN_00310cc4(param_2 + 8,&local_c8);
  plVar5 = local_c0;
LAB_00311420:
  *(undefined8 **)(param_2 + 0x10) = puVar4;
  if ((plVar5 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  FUN_00715bf8(param_1 + 0x98);
  if ((plStack_88 != (long *)0x0) &&
     (lVar3 = FUN_00755c50(0xffffffffffffffff,plStack_88 + 1), lVar3 == 0)) {
    (**(code **)(*plStack_88 + 0x10))(plStack_88);
    FUN_0071245c(plStack_88);
  }
  if ((local_80 & 1) != 0) {
    free(local_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_90;
}


// ===== 0031153c  FUN_0031153c =====

void FUN_0031153c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_78;
  long *local_70;
  undefined8 local_68;
  long *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00759c3c(0xb8);
  local_68 = *param_5;
  local_60 = (long *)param_5[1];
  if (local_60 != (long *)0x0) {
    FUN_00755c20(1,local_60 + 1);
  }
  local_78 = *param_6;
  local_70 = (long *)param_6[1];
  if (local_70 != (long *)0x0) {
    FUN_00755c20(1,local_70 + 1);
  }
                    /* try { // try from 003115b4 to 003115cb has its CatchHandler @ 00311698 */
  FUN_00311ba8(uVar3,param_3,param_4,&local_68,&local_78);
  *param_1 = uVar3;
                    /* try { // try from 003115d0 to 003115d7 has its CatchHandler @ 0031167c */
  puVar4 = (undefined8 *)FUN_00759c3c(0x20);
  plVar2 = local_70;
  puVar4[2] = 0;
  puVar4[3] = uVar3;
  param_1[1] = puVar4;
  *puVar4 = &PTR_FUN_00760450;
  puVar4[1] = 0;
  if ((local_70 != (long *)0x0) &&
     (lVar5 = FUN_00755c50(0xffffffffffffffff,local_70 + 1), lVar5 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  plVar2 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar5 = FUN_00755c50(0xffffffffffffffff,local_60 + 1), lVar5 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003116d8  FUN_003116d8 =====

void FUN_003116d8(long *param_1,int *param_2,int *param_3,long *param_4,long *param_5)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auStack_a0 [8];
  long *local_98;
  undefined1 auStack_90 [8];
  long *local_88;
  undefined1 auStack_80 [8];
  long *local_78;
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  puVar1 = PTR_DAT_007a1368 + 0x10;
  param_1[2] = (long)param_2;
  *param_1 = (long)puVar1;
  lVar7 = *param_5;
  lVar8 = param_5[1];
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[3] = lVar7;
  param_1[4] = lVar8;
  if (lVar8 != 0) {
    FUN_00755c20(1,lVar8 + 8);
  }
  lVar7 = param_4[1];
  param_1[5] = *param_4;
  param_1[6] = lVar7;
  if (lVar7 != 0) {
    FUN_00755c20(1,lVar7 + 8);
  }
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  plVar10 = param_1 + 0x13;
  param_1[0x14] = 0;
  *plVar10 = 0;
  plVar11 = param_1 + 0x16;
  *plVar11 = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
                    /* try { // try from 00311794 to 0031179b has its CatchHandler @ 00311b40 */
  bVar6 = FUN_00312078(param_3);
  *(byte *)(param_1 + 0x15) = bVar6 & 1;
  if ((bVar6 & 1) == 0) {
    lVar7 = *(long *)(param_3 + 8);
    local_70 = (void *)0x0;
    if ((lVar7 == 0) || (lVar8 = *(long *)(param_3 + 10), lVar8 == 0)) {
                    /* try { // try from 00311840 to 00311847 has its CatchHandler @ 00311ab4 */
      pvVar9 = (void *)FUN_00759c3c(0x208);
                    /* try { // try from 00311848 to 00311853 has its CatchHandler @ 00311aa4 */
      FUN_0032c628(pvVar9,param_3 + 2);
    }
    else {
                    /* try { // try from 00311824 to 0031182b has its CatchHandler @ 00311aa0 */
      pvVar9 = (void *)FUN_00759c3c(0x208);
                    /* try { // try from 0031182c to 0031183b has its CatchHandler @ 00311a9c */
      FUN_0032c914(pvVar9,lVar7,lVar8);
    }
    local_70 = pvVar9;
                    /* try { // try from 00311858 to 0031185f has its CatchHandler @ 00311b24 */
    FUN_0032cad4(pvVar9);
                    /* try { // try from 00311860 to 00311867 has its CatchHandler @ 00311b4c */
    lVar7 = FUN_0032ca54(pvVar9);
    iVar2 = param_2[2];
                    /* try { // try from 00311870 to 00311877 has its CatchHandler @ 00311b20 */
    lVar8 = FUN_00345618((long)*param_2,(long)iVar2);
    iVar3 = *param_2;
    param_1[7] = (long)iVar2;
    param_1[8] = lVar8;
    iVar2 = *param_3;
    param_1[9] = (long)iVar3;
                    /* try { // try from 00311888 to 00311893 has its CatchHandler @ 00311b1c */
    lVar8 = FUN_00345618((long)iVar3,(long)iVar2);
    iVar3 = *param_2;
    param_1[0xd] = (long)iVar2;
    param_1[0xe] = lVar8;
    iVar2 = *(int *)(lVar7 + 0x18c);
    iVar4 = *(int *)(lVar7 + 400);
    param_1[0xf] = (long)iVar3;
                    /* try { // try from 003118a8 to 003118af has its CatchHandler @ 00311b18 */
    lVar8 = FUN_00345618((long)iVar4,(long)iVar2);
    iVar3 = *(int *)(lVar7 + 400);
    param_1[10] = (long)iVar2;
    param_1[0xb] = lVar8;
    iVar2 = *param_2;
    iVar4 = *(int *)(lVar7 + 0x18c);
    param_1[0xc] = (long)iVar3;
                    /* try { // try from 003118c4 to 003118df has its CatchHandler @ 00311b4c */
    lVar8 = FUN_00345618((long)iVar2,(long)iVar4);
    iVar2 = *param_2;
    iVar3 = *(int *)(lVar7 + 0x18c);
    param_1[0x10] = lVar8;
    lVar8 = FUN_00343f1c((long)iVar2,param_1[0xc],(long)iVar3);
    param_1[0x11] = lVar8;
                    /* try { // try from 003118e4 to 003118ef has its CatchHandler @ 00311b14 */
    FUN_0032ca5c(auStack_80,pvVar9);
                    /* try { // try from 003118f0 to 003118fb has its CatchHandler @ 00311b04 */
    FUN_0032ca84(auStack_90,pvVar9);
                    /* try { // try from 003118fc to 00311907 has its CatchHandler @ 00311af4 */
    FUN_0032caac(auStack_a0,pvVar9);
                    /* try { // try from 00311908 to 0031190f has its CatchHandler @ 00311ae4 */
    lVar8 = FUN_00759c3c(0x4e0);
                    /* try { // try from 00311910 to 0031192b has its CatchHandler @ 00311ad4 */
    FUN_003305b0(lVar8,param_1 + 7,lVar7,auStack_80,auStack_90,auStack_a0);
    pvVar9 = (void *)param_1[0x12];
    param_1[0x12] = lVar8;
    if (pvVar9 != (void *)0x0) {
      FUN_00313bf0(pvVar9);
      free(pvVar9);
    }
    if ((local_98 != (long *)0x0) &&
       (lVar7 = FUN_00755c50(0xffffffffffffffff,local_98 + 1), lVar7 == 0)) {
      (**(code **)(*local_98 + 0x10))(local_98);
      FUN_0071245c(local_98);
    }
    if ((local_88 != (long *)0x0) &&
       (lVar7 = FUN_00755c50(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
      (**(code **)(*local_88 + 0x10))(local_88);
      FUN_0071245c(local_88);
    }
    if ((local_78 != (long *)0x0) &&
       (lVar7 = FUN_00755c50(0xffffffffffffffff,local_78 + 1), lVar7 == 0)) {
      (**(code **)(*local_78 + 0x10))(local_78);
      FUN_0071245c(local_78);
    }
                    /* try { // try from 003119d8 to 003119df has its CatchHandler @ 00311ad0 */
    lVar7 = FUN_00759c3c(8);
                    /* try { // try from 003119ec to 003119f7 has its CatchHandler @ 00311ac0 */
    FUN_00349cd8(lVar7,param_1[8],param_1[0x10],0,2);
    pvVar9 = (void *)*plVar10;
    *plVar10 = lVar7;
    if (pvVar9 != (void *)0x0) {
      FUN_00349ee0(pvVar9);
      free(pvVar9);
    }
                    /* try { // try from 00311a14 to 00311a1b has its CatchHandler @ 00311abc */
    lVar7 = FUN_00759c3c(8);
                    /* try { // try from 00311a28 to 00311a33 has its CatchHandler @ 00311ab8 */
    FUN_00349cd8(lVar7,param_1[0x10],param_1[0xe],0,2);
    pvVar9 = (void *)param_1[0x14];
    param_1[0x14] = lVar7;
    if (pvVar9 != (void *)0x0) {
      FUN_00349ee0(pvVar9);
      free(pvVar9);
    }
    pvVar9 = local_70;
    if (local_70 != (void *)0x0) {
      FUN_00313a70(local_70);
      free(pvVar9);
    }
  }
  else {
                    /* try { // try from 003117a8 to 003117af has its CatchHandler @ 00311b3c */
    lVar7 = FUN_00759c3c(0x130);
                    /* try { // try from 003117b0 to 003117bf has its CatchHandler @ 00311b28 */
    FUN_00316af4(lVar7,param_2,param_3);
    pvVar9 = (void *)*plVar11;
    *plVar11 = lVar7;
    if (pvVar9 != (void *)0x0) {
      FUN_00313768(pvVar9);
      if (*(long *)(lVar5 + 0x28) == local_68) {
        free(pvVar9);
        return;
      }
      goto LAB_00311ba4;
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
LAB_00311ba4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00311ba8  FUN_00311ba8 =====

void FUN_00311ba8(long *param_1,int *param_2,int *param_3,long *param_4,long *param_5)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auStack_a0 [8];
  long *local_98;
  undefined1 auStack_90 [8];
  long *local_88;
  undefined1 auStack_80 [8];
  long *local_78;
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  puVar1 = PTR_DAT_007a1370 + 0x10;
  param_1[2] = (long)param_2;
  *param_1 = (long)puVar1;
  lVar7 = *param_5;
  lVar8 = param_5[1];
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[3] = lVar7;
  param_1[4] = lVar8;
  if (lVar8 != 0) {
    FUN_00755c20(1,lVar8 + 8);
  }
  lVar7 = param_4[1];
  param_1[5] = *param_4;
  param_1[6] = lVar7;
  if (lVar7 != 0) {
    FUN_00755c20(1,lVar7 + 8);
  }
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  plVar10 = param_1 + 0x13;
  param_1[0x14] = 0;
  *plVar10 = 0;
  plVar11 = param_1 + 0x16;
  *plVar11 = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
                    /* try { // try from 00311c64 to 00311c6b has its CatchHandler @ 00312010 */
  bVar6 = FUN_00312078(param_3);
  *(byte *)(param_1 + 0x15) = bVar6 & 1;
  if ((bVar6 & 1) == 0) {
    lVar7 = *(long *)(param_3 + 8);
    local_70 = (void *)0x0;
    if ((lVar7 == 0) || (lVar8 = *(long *)(param_3 + 10), lVar8 == 0)) {
                    /* try { // try from 00311d10 to 00311d17 has its CatchHandler @ 00311f84 */
      pvVar9 = (void *)FUN_00759c3c(0x208);
                    /* try { // try from 00311d18 to 00311d23 has its CatchHandler @ 00311f74 */
      FUN_0032c628(pvVar9,param_3 + 2);
    }
    else {
                    /* try { // try from 00311cf4 to 00311cfb has its CatchHandler @ 00311f70 */
      pvVar9 = (void *)FUN_00759c3c(0x208);
                    /* try { // try from 00311cfc to 00311d0b has its CatchHandler @ 00311f6c */
      FUN_0032c914(pvVar9,lVar7,lVar8);
    }
    local_70 = pvVar9;
                    /* try { // try from 00311d28 to 00311d2f has its CatchHandler @ 00311ff4 */
    FUN_0032cad4(pvVar9);
                    /* try { // try from 00311d30 to 00311d37 has its CatchHandler @ 0031201c */
    lVar7 = FUN_0032ca54(pvVar9);
    iVar2 = param_2[2];
                    /* try { // try from 00311d40 to 00311d47 has its CatchHandler @ 00311ff0 */
    lVar8 = FUN_00345618((long)*param_2,(long)iVar2);
    iVar3 = *param_2;
    param_1[7] = (long)iVar2;
    param_1[8] = lVar8;
    iVar2 = *param_3;
    param_1[9] = (long)iVar3;
                    /* try { // try from 00311d58 to 00311d63 has its CatchHandler @ 00311fec */
    lVar8 = FUN_00345618((long)iVar3,(long)iVar2);
    iVar3 = *param_2;
    param_1[0xd] = (long)iVar2;
    param_1[0xe] = lVar8;
    iVar2 = *(int *)(lVar7 + 0x18c);
    iVar4 = *(int *)(lVar7 + 400);
    param_1[0xf] = (long)iVar3;
                    /* try { // try from 00311d78 to 00311d7f has its CatchHandler @ 00311fe8 */
    lVar8 = FUN_00345618((long)iVar4,(long)iVar2);
    iVar3 = *(int *)(lVar7 + 400);
    param_1[10] = (long)iVar2;
    param_1[0xb] = lVar8;
    iVar2 = *param_2;
    iVar4 = *(int *)(lVar7 + 0x18c);
    param_1[0xc] = (long)iVar3;
                    /* try { // try from 00311d94 to 00311daf has its CatchHandler @ 0031201c */
    lVar8 = FUN_00345618((long)iVar2,(long)iVar4);
    iVar2 = *param_2;
    iVar3 = *(int *)(lVar7 + 0x18c);
    param_1[0x10] = lVar8;
    lVar8 = FUN_00343f1c((long)iVar2,param_1[0xc],(long)iVar3);
    param_1[0x11] = lVar8;
                    /* try { // try from 00311db4 to 00311dbf has its CatchHandler @ 00311fe4 */
    FUN_0032ca5c(auStack_80,pvVar9);
                    /* try { // try from 00311dc0 to 00311dcb has its CatchHandler @ 00311fd4 */
    FUN_0032ca84(auStack_90,pvVar9);
                    /* try { // try from 00311dcc to 00311dd7 has its CatchHandler @ 00311fc4 */
    FUN_0032caac(auStack_a0,pvVar9);
                    /* try { // try from 00311dd8 to 00311ddf has its CatchHandler @ 00311fb4 */
    lVar8 = FUN_00759c3c(0x4e0);
                    /* try { // try from 00311de0 to 00311dfb has its CatchHandler @ 00311fa4 */
    FUN_003305b0(lVar8,param_1 + 7,lVar7,auStack_80,auStack_90,auStack_a0);
    pvVar9 = (void *)param_1[0x12];
    param_1[0x12] = lVar8;
    if (pvVar9 != (void *)0x0) {
      FUN_00313bf0(pvVar9);
      free(pvVar9);
    }
    if ((local_98 != (long *)0x0) &&
       (lVar7 = FUN_00755c50(0xffffffffffffffff,local_98 + 1), lVar7 == 0)) {
      (**(code **)(*local_98 + 0x10))(local_98);
      FUN_0071245c(local_98);
    }
    if ((local_88 != (long *)0x0) &&
       (lVar7 = FUN_00755c50(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
      (**(code **)(*local_88 + 0x10))(local_88);
      FUN_0071245c(local_88);
    }
    if ((local_78 != (long *)0x0) &&
       (lVar7 = FUN_00755c50(0xffffffffffffffff,local_78 + 1), lVar7 == 0)) {
      (**(code **)(*local_78 + 0x10))(local_78);
      FUN_0071245c(local_78);
    }
                    /* try { // try from 00311ea8 to 00311eaf has its CatchHandler @ 00311fa0 */
    lVar7 = FUN_00759c3c(8);
                    /* try { // try from 00311ebc to 00311ec7 has its CatchHandler @ 00311f90 */
    FUN_00349cd8(lVar7,param_1[8],param_1[0x10],0,2);
    pvVar9 = (void *)*plVar10;
    *plVar10 = lVar7;
    if (pvVar9 != (void *)0x0) {
      FUN_00349ee0(pvVar9);
      free(pvVar9);
    }
                    /* try { // try from 00311ee4 to 00311eeb has its CatchHandler @ 00311f8c */
    lVar7 = FUN_00759c3c(8);
                    /* try { // try from 00311ef8 to 00311f03 has its CatchHandler @ 00311f88 */
    FUN_00349cd8(lVar7,param_1[0x10],param_1[0xe],0,2);
    pvVar9 = (void *)param_1[0x14];
    param_1[0x14] = lVar7;
    if (pvVar9 != (void *)0x0) {
      FUN_00349ee0(pvVar9);
      free(pvVar9);
    }
    pvVar9 = local_70;
    if (local_70 != (void *)0x0) {
      FUN_00313a70(local_70);
      free(pvVar9);
    }
  }
  else {
                    /* try { // try from 00311c78 to 00311c7f has its CatchHandler @ 0031200c */
    lVar7 = FUN_00759c3c(0x130);
                    /* try { // try from 00311c80 to 00311c8f has its CatchHandler @ 00311ff8 */
    FUN_00316af4(lVar7,param_2,param_3);
    pvVar9 = (void *)*plVar11;
    *plVar11 = lVar7;
    if (pvVar9 != (void *)0x0) {
      FUN_00313768(pvVar9);
      if (*(long *)(lVar5 + 0x28) == local_68) {
        free(pvVar9);
        return;
      }
      goto LAB_00312074;
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
LAB_00312074:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00312078  FUN_00312078 =====

undefined1 FUN_00312078(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined1 local_60 [8];
  undefined1 auStack_58 [12];
  undefined1 local_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar6 = *(long *)(param_1 + 0x20);
  if ((lVar6 == 0) || (lVar7 = *(long *)(param_1 + 0x28), lVar7 == 0)) {
                    /* try { // try from 003120d0 to 003120d7 has its CatchHandler @ 003121b4 */
    plVar3 = (long *)FUN_00759c3c(0x70);
                    /* try { // try from 003120d8 to 003120e7 has its CatchHandler @ 003121a4 */
    FUN_0033be5c(plVar3,param_1 + 8,0);
  }
  else {
                    /* try { // try from 003120b0 to 003120b7 has its CatchHandler @ 0031219c */
    plVar3 = (long *)FUN_00759c3c(0x70);
                    /* try { // try from 003120b8 to 003120cb has its CatchHandler @ 00312198 */
    FUN_0033bd64(plVar3,lVar6,lVar7,0);
  }
  uVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
                    /* try { // try from 003120fc to 00312103 has its CatchHandler @ 003121dc */
  plVar5 = (long *)FUN_00759c3c(0x18);
                    /* try { // try from 00312104 to 0031210f has its CatchHandler @ 003121cc */
  FUN_00342408(plVar5,uVar4);
                    /* try { // try from 00312110 to 0031211b has its CatchHandler @ 003121c0 */
  FUN_0034241c(local_60,plVar5);
                    /* try { // try from 0031211c to 00312137 has its CatchHandler @ 0031220c */
  uVar4 = FUN_003123d4(local_60,"isDeepFilterNet");
  local_4c[0] = 0;
  FUN_00312e94(uVar4,local_4c);
  uVar2 = local_4c[0];
                    /* try { // try from 00312144 to 0031214b has its CatchHandler @ 003121bc */
  FUN_00313038(auStack_58,local_60[0]);
  (**(code **)(*plVar5 + 8))(plVar5);
  (**(code **)(*plVar3 + 8))(plVar3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00312250  FUN_00312250 =====

void FUN_00312250(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_00313768(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 0031228c  FUN_0031228c =====

void FUN_0031228c(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_00313a70(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 003122c8  FUN_003122c8 =====

void FUN_003122c8(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_00313bf0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 00312304  FUN_00312304 =====

void FUN_00312304(long param_1)

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


// ===== 00312354  FUN_00312354 =====

void FUN_00312354(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_00349ee0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 00312390  FUN_00312390 =====

void FUN_00312390(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_00349ee0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 003123cc  FUN_003123cc =====

void FUN_003123cc(void)

{
  return;
}


// ===== 003123d0  FUN_003123d0 =====

void FUN_003123d0(void)

{
  return;
}


// ===== 003123d4  FUN_003123d4 =====

long * FUN_003123d4(char *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 local_78 [3];
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*param_1 == '\x01') {
    plVar5 = (long *)(*(long *)(param_1 + 8) + 8);
    plVar7 = (long *)*plVar5;
    plVar6 = plVar5;
    if (plVar7 != (long *)0x0) {
      do {
        uVar3 = FUN_00713804(plVar7 + 4,param_2);
        if (-1 < (int)uVar3) {
          plVar6 = plVar7;
        }
        plVar7 = *(long **)((long)plVar7 + (uVar3 >> 0x1c & 8));
      } while (plVar7 != (long *)0x0);
      if ((plVar6 != plVar5) && (iVar2 = FUN_00713804(plVar6 + 4,param_2), iVar2 < 1)) {
        plVar5 = plVar6;
      }
    }
    if (plVar5 == (long *)(*(long *)(param_1 + 8) + 8)) {
      uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 0031251c to 00312523 has its CatchHandler @ 003125c0 */
      FUN_002fd2b0(local_78,param_2);
                    /* try { // try from 00312524 to 0031253f has its CatchHandler @ 003125a8 */
      FUN_00312ab4(auStack_60,"key \'",local_78,"\' not found");
                    /* try { // try from 00312544 to 00312583 has its CatchHandler @ 00312584 */
      FUN_003128c4(uVar4,0x193,auStack_60,param_1);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar4,PTR_PTR_007a1318,PTR_FUN_007a12f0);
      }
    }
    else if (*(long *)(lVar1 + 0x28) == local_48) {
      return plVar5 + 7;
    }
  }
  else {
    uVar4 = FUN_00753a74(0x20);
    local_78[0] = FUN_00312898(param_1);
                    /* try { // try from 003124b0 to 003124c3 has its CatchHandler @ 003125e0 */
    FUN_00312810(auStack_60,"cannot use at() with ",local_78);
                    /* try { // try from 003124c8 to 00312507 has its CatchHandler @ 003125c4 */
    FUN_00312624(uVar4,0x130,auStack_60,param_1);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a12e8,PTR_FUN_007a12f0);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00312608  FUN_00312608 =====

void FUN_00312608(undefined1 *param_1)

{
                    /* try { // try from 00312614 to 00312617 has its CatchHandler @ 00312620 */
  FUN_00313038(param_1 + 8,*param_1);
  return;
}


// ===== 00312624  FUN_00312624 =====

void FUN_00312624(long *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  byte local_a0;
  char local_9f [8];
  undefined2 local_97;
  undefined1 local_95;
  void *local_90;
  byte local_88 [16];
  void *local_78;
  byte local_70;
  undefined1 auStack_6f [15];
  undefined1 *local_60;
  ushort local_58 [8];
  void *local_48;
  undefined1 local_3c [4];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_a0 = 0x14;
  local_97 = 0x726f;
  local_95 = 0;
  local_9f = (char  [8])s_type_error_001c2bbe._0_8_;
  local_3c[0] = 0x2e;
                    /* try { // try from 0031267c to 00312683 has its CatchHandler @ 003127e0 */
  FUN_00714798(local_58);
                    /* try { // try from 00312684 to 003126a7 has its CatchHandler @ 003127c8 */
  FUN_00312cb0(local_88,"[json.exception.",&local_a0,local_3c,local_58,&DAT_001e03c5);
  if (((byte)local_58[0] & 1) != 0) {
    free(local_48);
  }
  local_58[0] = 0;
                    /* try { // try from 003126bc to 003126cf has its CatchHandler @ 003127a4 */
  FUN_00312bb0(&local_70,local_88,local_58,param_3);
  if ((local_58[0] & 1) != 0) {
    free(local_48);
  }
  if ((local_88[0] & 1) != 0) {
    free(local_78);
  }
  if ((local_a0 & 1) != 0) {
    free(local_90);
  }
  puVar3 = PTR_DAT_007a12f8;
  *(undefined4 *)(param_1 + 1) = param_2;
  puVar1 = local_60;
  if ((local_70 & 1) == 0) {
    puVar1 = auStack_6f;
  }
  *param_1 = (long)(puVar3 + 0x10);
                    /* try { // try from 00312718 to 0031271f has its CatchHandler @ 00312788 */
  FUN_0071274c(param_1 + 2,puVar1);
  *param_1 = (long)&PTR_FUN_007602c0;
  if ((local_70 & 1) != 0) {
    free(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00312810  FUN_00312810 =====

void FUN_00312810(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  size_t sVar1;
  size_t sVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  sVar1 = strlen(param_2);
  sVar2 = strlen((char *)*param_3);
                    /* try { // try from 00312848 to 0031286b has its CatchHandler @ 0031287c */
  FUN_00712ea8(param_1,sVar2 + sVar1);
  FUN_00713bdc(param_1,param_2);
  FUN_00713bdc(param_1,*param_3);
  return;
}


// ===== 00312898  FUN_00312898 =====

char * FUN_00312898(byte *param_1)

{
  if ((ulong)*param_1 < 10) {
    return &DAT_00200088 + *(int *)(&DAT_00200088 + (ulong)*param_1 * 4);
  }
  return "number";
}


// ===== 003128c4  FUN_003128c4 =====

void FUN_003128c4(long *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  byte local_a0;
  char local_9f [8];
  undefined4 local_97;
  undefined1 local_93;
  void *local_90;
  byte local_88 [16];
  void *local_78;
  byte local_70;
  undefined1 auStack_6f [15];
  undefined1 *local_60;
  ushort local_58 [8];
  void *local_48;
  undefined1 local_3c [4];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_a0 = 0x18;
  local_93 = 0;
  local_97 = 0x65676e61;
  local_9f = (char  [8])s_out_of_range_001ec99d._0_8_;
  local_3c[0] = 0x2e;
                    /* try { // try from 00312920 to 00312927 has its CatchHandler @ 00312a84 */
  FUN_00714798(local_58);
                    /* try { // try from 00312928 to 0031294b has its CatchHandler @ 00312a6c */
  FUN_00312cb0(local_88,"[json.exception.",&local_a0,local_3c,local_58,&DAT_001e03c5);
  if (((byte)local_58[0] & 1) != 0) {
    free(local_48);
  }
  local_58[0] = 0;
                    /* try { // try from 00312960 to 00312973 has its CatchHandler @ 00312a48 */
  FUN_00312bb0(&local_70,local_88,local_58,param_3);
  if ((local_58[0] & 1) != 0) {
    free(local_48);
  }
  if ((local_88[0] & 1) != 0) {
    free(local_78);
  }
  if ((local_a0 & 1) != 0) {
    free(local_90);
  }
  puVar3 = PTR_DAT_007a12f8;
  *(undefined4 *)(param_1 + 1) = param_2;
  puVar1 = local_60;
  if ((local_70 & 1) == 0) {
    puVar1 = auStack_6f;
  }
  *param_1 = (long)(puVar3 + 0x10);
                    /* try { // try from 003129bc to 003129c3 has its CatchHandler @ 00312a2c */
  FUN_0071274c(param_1 + 2,puVar1);
  *param_1 = (long)&PTR_FUN_00760310;
  if ((local_70 & 1) != 0) {
    free(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00312ab4  FUN_00312ab4 =====

void FUN_00312ab4(undefined8 *param_1,char *param_2,byte *param_3,char *param_4)

{
  ulong uVar1;
  byte *pbVar2;
  size_t sVar3;
  size_t sVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  sVar3 = strlen(param_2);
  uVar1 = (ulong)(*param_3 >> 1);
  if ((*param_3 & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
  }
  sVar4 = strlen(param_4);
                    /* try { // try from 00312b08 to 00312b4b has its CatchHandler @ 00312b60 */
  FUN_00712ea8(param_1,sVar4 + sVar3 + uVar1);
  FUN_00713bdc(param_1,param_2);
  uVar1 = *(ulong *)(param_3 + 8);
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
    uVar1 = (ulong)(*param_3 >> 1);
  }
  FUN_0071302c(param_1,pbVar2,uVar1);
  FUN_00713bdc(param_1,param_4);
  return;
}


// ===== 00312b7c  FUN_00312b7c =====

void FUN_00312b7c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a12f8 + 0x10);
  FUN_0073a2c4(param_1 + 2);
  FUN_0073a174(param_1);
  return;
}


// ===== 00312bb0  FUN_00312bb0 =====

void FUN_00312bb0(undefined8 *param_1,byte *param_2,byte *param_3,byte *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte bVar5;
  ulong uVar6;
  
  bVar5 = *param_4;
  uVar3 = (ulong)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar3 = *(ulong *)(param_2 + 8);
  }
  uVar6 = *(ulong *)(param_4 + 8);
  uVar1 = (ulong)(*param_3 >> 1);
  if ((*param_3 & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar2 = uVar6;
  }
                    /* try { // try from 00312c18 to 00312c83 has its CatchHandler @ 00312c94 */
  FUN_00712ea8(param_1,uVar1 + uVar3 + uVar2);
  uVar3 = *(ulong *)(param_2 + 8);
  pbVar4 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar4 = param_2 + 1;
    uVar3 = (ulong)(*param_2 >> 1);
  }
  FUN_0071302c(param_1,pbVar4,uVar3);
  uVar3 = *(ulong *)(param_3 + 8);
  pbVar4 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar4 = param_3 + 1;
    uVar3 = (ulong)(*param_3 >> 1);
  }
  FUN_0071302c(param_1,pbVar4,uVar3);
  uVar3 = *(ulong *)(param_4 + 8);
  pbVar4 = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    pbVar4 = param_4 + 1;
    uVar3 = (ulong)(*param_4 >> 1);
  }
  FUN_0071302c(param_1,pbVar4,uVar3);
  return;
}


// ===== 00312cb0  FUN_00312cb0 =====

void FUN_00312cb0(undefined8 *param_1,char *param_2,byte *param_3,undefined1 *param_4,byte *param_5,
                 char *param_6)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  size_t sVar4;
  size_t sVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  sVar4 = strlen(param_2);
  uVar2 = (ulong)(*param_3 >> 1);
  if ((*param_3 & 1) != 0) {
    uVar2 = *(ulong *)(param_3 + 8);
  }
  uVar1 = (ulong)(*param_5 >> 1);
  if ((*param_5 & 1) != 0) {
    uVar1 = *(ulong *)(param_5 + 8);
  }
  sVar5 = strlen(param_6);
                    /* try { // try from 00312d30 to 00312d9f has its CatchHandler @ 00312dbc */
  FUN_00712ea8(param_1,sVar4 + sVar5 + uVar2 + uVar1 + 1);
  FUN_00713bdc(param_1,param_2);
  uVar2 = *(ulong *)(param_3 + 8);
  pbVar3 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar3 = param_3 + 1;
    uVar2 = (ulong)(*param_3 >> 1);
  }
  FUN_0071302c(param_1,pbVar3,uVar2);
  FUN_007132e8(param_1,*param_4);
  uVar2 = *(ulong *)(param_5 + 8);
  pbVar3 = *(byte **)(param_5 + 0x10);
  if ((*param_5 & 1) == 0) {
    pbVar3 = param_5 + 1;
    uVar2 = (ulong)(*param_5 >> 1);
  }
  FUN_0071302c(param_1,pbVar3,uVar2);
  FUN_00713bdc(param_1,param_6);
  return;
}


// ===== 00312dd8  FUN_00312dd8 =====

void FUN_00312dd8(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a12f8 + 0x10);
  FUN_0073a2c4(param_1 + 2);
  FUN_0073a174(param_1);
  free(param_1);
  return;
}


// ===== 00312e14  FUN_00312e14 =====

void FUN_00312e14(long param_1)

{
  FUN_0073a348(param_1 + 0x10);
  return;
}


// ===== 00312e1c  FUN_00312e1c =====

void FUN_00312e1c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a12f8 + 0x10);
  FUN_0073a2c4(param_1 + 2);
  FUN_0073a174(param_1);
  free(param_1);
  return;
}


// ===== 00312e58  FUN_00312e58 =====

void FUN_00312e58(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a12f8 + 0x10);
  FUN_0073a2c4(param_1 + 2);
  FUN_0073a174(param_1);
  free(param_1);
  return;
}


// ===== 00312e94  FUN_00312e94 =====

void FUN_00312e94(char *param_1,char *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*param_1 == '\x04') {
    *param_2 = param_1[8];
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
    uVar2 = FUN_00753a74(0x20);
    local_58 = FUN_00312898(param_1);
                    /* try { // try from 00312f0c to 00312f1f has its CatchHandler @ 00312f88 */
    FUN_00312fb0(auStack_50,"type must be boolean, but is ",&local_58);
                    /* try { // try from 00312f24 to 00312f63 has its CatchHandler @ 00312f64 */
    FUN_00312624(uVar2,0x12e,auStack_50,param_1);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a12e8,PTR_FUN_007a12f0);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00312fb0  FUN_00312fb0 =====

void FUN_00312fb0(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  size_t sVar1;
  size_t sVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  sVar1 = strlen(param_2);
  sVar2 = strlen((char *)*param_3);
                    /* try { // try from 00312fe8 to 0031300b has its CatchHandler @ 0031301c */
  FUN_00712ea8(param_1,sVar2 + sVar1);
  FUN_00713bdc(param_1,param_2);
  FUN_00713bdc(param_1,*param_3);
  return;
}


// ===== 00313038  FUN_00313038 =====

void FUN_00313038(long *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  void *__ptr;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  byte *__ptr_00;
  long *plVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  char local_80;
  undefined8 *puStack_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  uVar1 = param_2 & 0xff;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar8 = (long *)*param_1;
  if (((uVar1 == 1) && (plVar8 == (long *)0x0)) ||
     (((param_2 & 0xfe) == 2 || uVar1 == 8 && (plVar8 == (long *)0x0)))) goto LAB_0031340c;
  if (uVar1 - 1 < 2) {
    local_70 = (long *)0x0;
    local_68 = (long *)0x0;
    local_60 = (long *)0x0;
    if (uVar1 == 2) {
                    /* try { // try from 003130b0 to 003130b7 has its CatchHandler @ 00313438 */
      FUN_0031348c(&local_70,plVar8[1] - *plVar8 >> 4);
      plVar7 = (long *)((undefined8 *)*param_1)[1];
      for (plVar8 = *(long **)*param_1; plVar8 != plVar7; plVar8 = plVar8 + 2) {
        if (local_68 < local_60) {
          lVar9 = *plVar8;
          plVar6 = local_68 + 2;
          local_68[1] = plVar8[1];
          *local_68 = lVar9;
          *(undefined1 *)plVar8 = 0;
          plVar8[1] = 0;
        }
        else {
                    /* try { // try from 003130fc to 00313107 has its CatchHandler @ 00313440 */
          plVar6 = (long *)FUN_003135dc(&local_70,plVar8);
        }
        local_68 = plVar6;
      }
    }
    else {
                    /* try { // try from 00313110 to 00313117 has its CatchHandler @ 00313438 */
      FUN_0031348c(&local_70,plVar8[2]);
      plVar7 = (long *)*param_1;
      plVar8 = (long *)*plVar7;
      while (plVar8 != plVar7 + 1) {
        if (local_68 < local_60) {
          lVar9 = plVar8[7];
          plVar6 = local_68 + 2;
          local_68[1] = plVar8[8];
          *local_68 = lVar9;
          *(undefined1 *)(plVar8 + 7) = 0;
          plVar8[8] = 0;
        }
        else {
                    /* try { // try from 0031315c to 00313167 has its CatchHandler @ 0031343c */
          plVar6 = (long *)FUN_003135dc(&local_70,plVar8 + 7);
        }
        plVar4 = (long *)plVar8[1];
        plVar11 = plVar8;
        local_68 = plVar6;
        if ((long *)plVar8[1] == (long *)0x0) {
          do {
            plVar8 = (long *)plVar11[2];
            bVar5 = (long *)*plVar8 != plVar11;
            plVar11 = plVar8;
          } while (bVar5);
        }
        else {
          do {
            plVar8 = plVar4;
            plVar4 = (long *)*plVar8;
          } while ((long *)*plVar8 != (long *)0x0);
        }
      }
    }
    if (local_70 != local_68) {
      do {
        plVar7 = local_68;
        puStack_78 = (undefined8 *)local_68[-1];
        uVar16 = local_68[-2];
        local_68[-1] = 0;
        *(undefined1 *)(local_68 + -2) = 0;
        plVar8 = local_68 + -2;
        for (lVar9 = 0; lVar9 != -0x10; lVar9 = lVar9 + -0x10) {
                    /* try { // try from 003131e0 to 003131e3 has its CatchHandler @ 00313488 */
          FUN_00313038((long)plVar7 + lVar9 + -8,*(undefined1 *)((long)plVar7 + lVar9 + -0x10));
        }
        local_80 = (char)uVar16;
        local_68 = plVar8;
        if (local_80 == '\x01') {
          puVar14 = puStack_78 + 1;
          puVar15 = (undefined8 *)*puStack_78;
          puVar10 = puStack_78;
          while (puStack_78 = puVar10, puVar15 != puVar14) {
            if (plVar8 < local_60) {
              lVar9 = puVar15[7];
              plVar7 = plVar8 + 2;
              plVar8[1] = puVar15[8];
              *plVar8 = lVar9;
              *(undefined1 *)(puVar15 + 7) = 0;
              puVar15[8] = 0;
              puVar3 = (undefined8 *)puVar15[1];
              local_68 = plVar7;
              if ((undefined8 *)puVar15[1] != (undefined8 *)0x0) goto LAB_003132f4;
LAB_00313304:
              do {
                puVar10 = (undefined8 *)puVar15[2];
                bVar5 = (undefined8 *)*puVar10 != puVar15;
                puVar15 = puVar10;
                plVar8 = plVar7;
                puVar10 = puStack_78;
              } while (bVar5);
            }
            else {
                    /* try { // try from 003132d8 to 003132e3 has its CatchHandler @ 00313450 */
              plVar7 = (long *)FUN_003135dc(&local_70,puVar15 + 7);
              puVar3 = (undefined8 *)puVar15[1];
              local_68 = plVar7;
              if ((undefined8 *)puVar15[1] == (undefined8 *)0x0) goto LAB_00313304;
LAB_003132f4:
              do {
                puVar15 = puVar3;
                puVar3 = (undefined8 *)*puVar15;
                plVar8 = plVar7;
                puVar10 = puStack_78;
              } while ((undefined8 *)*puVar15 != (undefined8 *)0x0);
            }
          }
          puVar15 = puVar10 + 1;
          FUN_00313700(puVar10,*puVar15);
          *puVar10 = puVar15;
          puVar10[2] = 0;
          *puVar15 = 0;
        }
        else if (local_80 == '\x02') {
          plVar8 = (long *)*puStack_78;
          plVar7 = (long *)puStack_78[1];
          plVar6 = plVar8;
          puVar15 = puStack_78;
          if (plVar8 != plVar7) {
            do {
              while (local_68 < local_60) {
                lVar9 = *plVar8;
                plVar6 = local_68 + 2;
                local_68[1] = plVar8[1];
                *local_68 = lVar9;
                *(undefined1 *)plVar8 = 0;
                plVar8[1] = 0;
                plVar8 = plVar8 + 2;
                local_68 = plVar6;
                if (plVar8 == plVar7) goto LAB_00313268;
              }
                    /* try { // try from 00313248 to 00313253 has its CatchHandler @ 00313454 */
              local_68 = (long *)FUN_003135dc(&local_70,plVar8);
              plVar8 = plVar8 + 2;
            } while (plVar8 != plVar7);
LAB_00313268:
            plVar8 = (long *)puStack_78[1];
            plVar6 = (long *)*puStack_78;
            puVar15 = puStack_78;
          }
          while (plVar8 != plVar6) {
                    /* try { // try from 0031327c to 00313283 has its CatchHandler @ 00313484 */
            FUN_00313038(plVar8 + -1,(char)plVar8[-2]);
            plVar8 = plVar8 + -2;
          }
          puVar15[1] = plVar6;
        }
                    /* try { // try from 00313348 to 0031334f has its CatchHandler @ 0031344c */
        FUN_00313038(&puStack_78,uVar16 & 0xff);
      } while (local_70 != local_68);
    }
    if (local_70 != (long *)0x0) {
      local_68 = local_70;
      free(local_70);
    }
  }
  if (uVar1 < 3) {
    if (uVar1 == 1) {
      FUN_00313700(*param_1,*(undefined8 *)(*param_1 + 8));
LAB_00313400:
      __ptr_00 = (byte *)*param_1;
    }
    else {
      if (uVar1 != 2) goto LAB_0031340c;
      __ptr_00 = (byte *)*param_1;
      puVar12 = *(undefined1 **)__ptr_00;
      if (puVar12 != (undefined1 *)0x0) {
        puVar13 = *(undefined1 **)(__ptr_00 + 8);
        while (puVar13 != puVar12) {
                    /* try { // try from 003133a0 to 003133a7 has its CatchHandler @ 00313448 */
          FUN_00313038(puVar13 + -8,puVar13[-0x10]);
          puVar13 = puVar13 + -0x10;
        }
        __ptr = *(void **)__ptr_00;
        *(undefined1 **)(__ptr_00 + 8) = puVar12;
        goto LAB_003133fc;
      }
    }
  }
  else if (uVar1 == 3) {
    __ptr_00 = (byte *)*param_1;
    if ((*__ptr_00 & 1) != 0) {
      __ptr = *(void **)(__ptr_00 + 0x10);
LAB_003133fc:
      free(__ptr);
      goto LAB_00313400;
    }
  }
  else {
    if (uVar1 != 8) goto LAB_0031340c;
    __ptr_00 = (byte *)*param_1;
    __ptr = *(void **)__ptr_00;
    if (__ptr != (void *)0x0) {
      *(void **)(__ptr_00 + 8) = __ptr;
      goto LAB_003133fc;
    }
  }
  free(__ptr_00);
LAB_0031340c:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0031348c  FUN_0031348c =====

void FUN_0031348c(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  void *__ptr;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar5 = (undefined8 *)*param_1;
  if ((ulong)(param_1[2] - (long)puVar5 >> 4) < param_2) {
    if (param_2 >> 0x3c != 0) {
      FUN_003135c8(param_1);
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00313504 with catch @ 00313560
                        */
      FUN_002fb198();
    }
    puVar6 = (undefined8 *)param_1[1];
    puVar2 = (undefined8 *)FUN_00759c3c(param_2 * 0x10);
    lVar1 = (long)puVar6 - (long)puVar5;
    puVar3 = puVar5;
    puVar4 = puVar2;
    if (lVar1 != 0) {
      do {
        uVar7 = *puVar3;
        puVar4[1] = puVar3[1];
        *puVar4 = uVar7;
        *(undefined1 *)puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = puVar3 + 2;
        puVar4 = puVar4 + 2;
      } while (puVar3 != puVar6);
      do {
                    /* try { // try from 00313504 to 0031350b has its CatchHandler @ 00313560 */
        FUN_00313038(puVar5 + 1,*(undefined1 *)puVar5);
        puVar5 = puVar5 + 2;
      } while (puVar5 != puVar6);
    }
    __ptr = (void *)*param_1;
    *param_1 = (long)puVar2;
    param_1[1] = (long)puVar2 + lVar1;
    param_1[2] = (long)(puVar2 + param_2 * 2);
    if (__ptr != (void *)0x0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00313564  FUN_00313564 =====

void FUN_00313564(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (undefined1 *)*param_1;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)param_1[1];
    while (puVar2 != puVar1) {
                    /* try { // try from 00313590 to 00313597 has its CatchHandler @ 003135c4 */
      FUN_00313038(puVar2 + -8,puVar2[-0x10]);
      puVar2 = puVar2 + -0x10;
    }
    param_1[1] = puVar1;
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 003135c8  FUN_003135c8 =====

void FUN_003135c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 003135dc  FUN_003135dc =====

undefined8 * FUN_003135dc(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  void *__ptr;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar10 = param_1[1] - *param_1 >> 4;
  uVar1 = lVar10 + 1;
  if (uVar1 >> 0x3c != 0) {
    FUN_003135c8(param_1);
LAB_003136f8:
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  uVar7 = param_1[2] - *param_1;
  uVar9 = (long)uVar7 >> 3;
  if (uVar9 <= uVar1) {
    uVar9 = uVar1;
  }
  if (0x7fffffffffffffef < uVar7) {
    uVar9 = 0xfffffffffffffff;
  }
  if (uVar9 == 0) {
    lVar5 = 0;
  }
  else {
    if (uVar9 >> 0x3c != 0) goto LAB_003136f8;
    lVar5 = FUN_00759c3c(uVar9 << 4);
  }
  uVar13 = param_2[1];
  uVar12 = *param_2;
  param_2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + lVar10 * 0x10);
  puVar11 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)param_1[1];
  *(undefined1 *)param_2 = 0;
  puVar2[1] = uVar13;
  *puVar2 = uVar12;
  puVar3 = (undefined8 *)((long)puVar2 + ((long)puVar11 - (long)puVar4));
  puVar6 = puVar11;
  puVar8 = puVar3;
  if ((long)puVar11 - (long)puVar4 != 0) {
    do {
      uVar12 = *puVar6;
      puVar8[1] = puVar6[1];
      *puVar8 = uVar12;
      *(undefined1 *)puVar6 = 0;
      puVar6[1] = 0;
      puVar6 = puVar6 + 2;
      puVar8 = puVar8 + 2;
    } while (puVar6 != puVar4);
    do {
                    /* try { // try from 003136a4 to 003136ab has its CatchHandler @ 003136fc */
      FUN_00313038(puVar11 + 1,*(undefined1 *)puVar11);
      puVar11 = puVar11 + 2;
    } while (puVar11 != puVar4);
  }
  __ptr = (void *)*param_1;
  *param_1 = (long)puVar3;
  param_1[1] = (long)(puVar2 + 2);
  param_1[2] = lVar5 + uVar9 * 0x10;
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  return puVar2 + 2;
}


// ===== 00313700  FUN_00313700 =====

void FUN_00313700(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00313700(param_1,*param_2);
    FUN_00313700(param_1,param_2[1]);
                    /* try { // try from 00313730 to 00313737 has its CatchHandler @ 00313764 */
    FUN_00313038(param_2 + 8,*(undefined1 *)(param_2 + 7));
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      free((void *)param_2[6]);
    }
    free(param_2);
    return;
  }
  return;
}


// ===== 00313768  FUN_00313768 =====

void FUN_00313768(long param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  plVar3 = *(long **)(param_1 + 0x120);
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
  }
  plVar3 = *(long **)(param_1 + 0x110);
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar4;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    if (pvVar2 != (void *)0x0) {
      free(pvVar2);
      pvVar2 = (void *)*puVar4;
      if (pvVar2 != (void *)0x0) {
        puVar4[1] = pvVar2;
        free(pvVar2);
      }
    }
    free(puVar4);
  }
  puVar4 = *(undefined8 **)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar4;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    if (pvVar2 != (void *)0x0) {
      free(pvVar2);
      pvVar2 = (void *)*puVar4;
      if (pvVar2 != (void *)0x0) {
        puVar4[1] = pvVar2;
        free(pvVar2);
      }
    }
    free(puVar4);
  }
  puVar4 = *(undefined8 **)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar4;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    if (pvVar2 != (void *)0x0) {
      free(pvVar2);
      pvVar2 = (void *)*puVar4;
      if (pvVar2 != (void *)0x0) {
        puVar4[1] = pvVar2;
        free(pvVar2);
      }
    }
    free(puVar4);
  }
  pvVar2 = *(void **)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_00349ee0(pvVar2);
    free(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_00349ee0(pvVar2);
    free(pvVar2);
  }
  FUN_00313904(param_1 + 0xd8,0);
  pvVar2 = *(void **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_0031a524(pvVar2);
    free(pvVar2);
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  free(*(void **)(param_1 + 0x18));
  return;
}


// ===== 00313904  FUN_00313904 =====

void FUN_00313904(undefined8 *param_1,undefined8 param_2)

{
  void *__ptr;
  long lVar1;
  void *__ptr_00;
  long *plVar2;
  
  __ptr_00 = (void *)*param_1;
  *param_1 = param_2;
  if (__ptr_00 == (void *)0x0) {
    return;
  }
  FUN_003139a0((long)__ptr_00 + 0x88);
  FUN_003139a0((long)__ptr_00 + 0x58);
  __ptr = *(void **)((long)__ptr_00 + 0x40);
  if (__ptr != (void *)0x0) {
    *(void **)((long)__ptr_00 + 0x48) = __ptr;
    free(__ptr);
  }
  FUN_0034653c((long)__ptr_00 + 0x28);
  plVar2 = *(long **)((long)__ptr_00 + 0x20);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    free(__ptr_00);
    return;
  }
  free(__ptr_00);
  return;
}


// ===== 003139a0  FUN_003139a0 =====

void FUN_003139a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar5;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    free((void *)*puVar5);
    puVar1 = (undefined8 *)param_1[2];
    puVar5 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = puVar5;
    lVar3 = (long)puVar1 - (long)puVar5;
  }
  if (uVar2 == 1) {
    uVar4 = 0x100;
  }
  else {
    if (uVar2 != 2) goto LAB_00313a10;
    uVar4 = 0x200;
  }
  param_1[4] = uVar4;
LAB_00313a10:
  if (puVar5 != puVar1) {
    do {
      puVar6 = puVar5 + 1;
      free((void *)*puVar5);
      puVar5 = puVar6;
    } while (puVar6 != puVar1);
    lVar3 = param_1[2];
    if (lVar3 != param_1[1]) {
      param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
    }
  }
  if ((void *)*param_1 == (void *)0x0) {
    return;
  }
  free((void *)*param_1);
  return;
}


// ===== 00313a70  FUN_00313a70 =====

void FUN_00313a70(long param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x200);
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
  }
  plVar3 = *(long **)(param_1 + 0x1f0);
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
  }
  plVar3 = *(long **)(param_1 + 0x1e0);
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
  }
  pvVar2 = *(void **)(param_1 + 0x178);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x180) = pvVar2;
    free(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x160);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x168) = pvVar2;
    free(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0xf8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x100) = pvVar2;
    free(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0xe0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0xe8) = pvVar2;
    free(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x70);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x78) = pvVar2;
    free(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x58);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x60) = pvVar2;
    free(pvVar2);
  }
  plVar3 = *(long **)(param_1 + 0x18);
  if ((plVar3 == (long *)0x0) || (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 != 0))
  {
    plVar3 = *(long **)(param_1 + 8);
  }
  else {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
    plVar3 = *(long **)(param_1 + 8);
  }
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
    return;
  }
  return;
}


// ===== 00313bf0  FUN_00313bf0 =====

void FUN_00313bf0(long param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  pvVar3 = *(void **)(param_1 + 0x4d8);
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_00313fd8(pvVar3);
    free(pvVar3);
  }
  pvVar3 = *(void **)(param_1 + 0x4c0);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x4c8) = pvVar3;
    free(pvVar3);
  }
  pvVar3 = *(void **)(param_1 + 0x4a8);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x4b0) = pvVar3;
    free(pvVar3);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x4a0);
  *(undefined8 *)(param_1 + 0x4a0) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar4;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    if (pvVar3 != (void *)0x0) {
      free(pvVar3);
      pvVar3 = (void *)*puVar4;
      if (pvVar3 != (void *)0x0) {
        puVar4[1] = pvVar3;
        free(pvVar3);
      }
    }
    free(puVar4);
  }
  pvVar3 = *(void **)(param_1 + 0x498);
  *(undefined8 *)(param_1 + 0x498) = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_00349ee0(pvVar3);
    free(pvVar3);
  }
  pvVar3 = *(void **)(param_1 + 0x490);
  *(undefined8 *)(param_1 + 0x490) = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_0031410c(pvVar3);
    free(pvVar3);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x488);
  *(undefined8 *)(param_1 + 0x488) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar4;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    if (pvVar3 != (void *)0x0) {
      free(pvVar3);
      pvVar3 = (void *)*puVar4;
      if (pvVar3 != (void *)0x0) {
        puVar4[1] = pvVar3;
        free(pvVar3);
      }
    }
    free(puVar4);
  }
  pvVar3 = *(void **)(param_1 + 0x480);
  *(undefined8 *)(param_1 + 0x480) = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_00349ee0(pvVar3);
    free(pvVar3);
  }
  pvVar3 = *(void **)(param_1 + 0x478);
  *(undefined8 *)(param_1 + 0x478) = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_0031410c(pvVar3);
    free(pvVar3);
  }
  plVar5 = *(long **)(param_1 + 0x470);
  if ((plVar5 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  pvVar3 = *(void **)(param_1 + 0x450);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x458) = pvVar3;
    free(pvVar3);
  }
  pvVar3 = *(void **)(param_1 + 0x420);
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(undefined8 *)(param_1 + 0x428) = 0;
  *(undefined8 *)(param_1 + 0x420) = 0;
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
    pvVar3 = *(void **)(param_1 + 0x420);
    if (pvVar3 != (void *)0x0) {
      *(void **)(param_1 + 0x428) = pvVar3;
      free(pvVar3);
    }
  }
  pvVar3 = *(void **)(param_1 + 0x408);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x410) = pvVar3;
    free(pvVar3);
  }
  if (*(long *)(param_1 + 1000) != 0) {
    plVar5 = *(long **)(param_1 + 0x3e0);
    *(undefined8 *)(param_1 + 1000) = 0;
    plVar2 = *(long **)(*(long *)(param_1 + 0x3d8) + 8);
    lVar1 = *plVar5;
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    while (plVar5 != (long *)(param_1 + 0x3d8)) {
      plVar2 = (long *)plVar5[1];
      free(plVar5);
      plVar5 = plVar2;
    }
  }
  plVar5 = *(long **)(param_1 + 0x3a8);
  if ((plVar5 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  pvVar3 = *(void **)(param_1 + 0x360);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x368) = pvVar3;
    free(pvVar3);
  }
  if (*(long *)(param_1 + 0x358) != 0) {
    plVar5 = *(long **)(param_1 + 0x350);
    *(undefined8 *)(param_1 + 0x358) = 0;
    plVar2 = *(long **)(*(long *)(param_1 + 0x348) + 8);
    lVar1 = *plVar5;
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    while (plVar5 != (long *)(param_1 + 0x348)) {
      plVar2 = (long *)plVar5[1];
      free(plVar5);
      plVar5 = plVar2;
    }
  }
  FUN_0034653c(param_1 + 0x308);
  if (*(long *)(param_1 + 0x2d8) != 0) {
    plVar5 = *(long **)(param_1 + 0x2d0);
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    plVar2 = *(long **)(*(long *)(param_1 + 0x2c8) + 8);
    lVar1 = *plVar5;
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    while (plVar5 != (long *)(param_1 + 0x2c8)) {
      plVar2 = (long *)plVar5[1];
      free(plVar5);
      plVar5 = plVar2;
    }
  }
  if (*(long *)(param_1 + 0x2c0) != 0) {
    plVar5 = *(long **)(param_1 + 0x2b8);
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    plVar2 = *(long **)(*(long *)(param_1 + 0x2b0) + 8);
    lVar1 = *plVar5;
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    while (plVar5 != (long *)(param_1 + 0x2b0)) {
      plVar2 = (long *)plVar5[1];
      free(plVar5);
      plVar5 = plVar2;
    }
  }
  pvVar3 = *(void **)(param_1 + 0x280);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x288) = pvVar3;
    free(pvVar3);
  }
  pvVar3 = *(void **)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
    pvVar3 = *(void **)(param_1 + 0x248);
    if (pvVar3 != (void *)0x0) {
      *(void **)(param_1 + 0x250) = pvVar3;
      free(pvVar3);
    }
  }
  pvVar3 = *(void **)(param_1 + 0x220);
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
    pvVar3 = *(void **)(param_1 + 0x220);
    if (pvVar3 != (void *)0x0) {
      *(void **)(param_1 + 0x228) = pvVar3;
      free(pvVar3);
    }
  }
  pvVar3 = *(void **)(param_1 + 0x158);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x160) = pvVar3;
    free(pvVar3);
  }
  pvVar3 = *(void **)(param_1 + 0x140);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x148) = pvVar3;
    free(pvVar3);
  }
  pvVar3 = *(void **)(param_1 + 0xd8);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0xe0) = pvVar3;
    free(pvVar3);
  }
  pvVar3 = *(void **)(param_1 + 0xc0);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 200) = pvVar3;
    free(pvVar3);
  }
  pvVar3 = *(void **)(param_1 + 0x50);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x58) = pvVar3;
    free(pvVar3);
  }
  pvVar3 = *(void **)(param_1 + 0x38);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  *(void **)(param_1 + 0x40) = pvVar3;
  free(pvVar3);
  return;
}


// ===== 00313fd8  FUN_00313fd8 =====

void FUN_00313fd8(long param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = (undefined8 *)*(void **)(param_1 + 0x120);
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    free(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = *(void **)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (pvVar2 != (void *)0x0) {
    free(pvVar2);
  }
  puVar1 = (undefined8 *)*(void **)(param_1 + 200);
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    free(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = *(void **)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (pvVar2 != (void *)0x0) {
    free(pvVar2);
  }
  puVar1 = (undefined8 *)*(void **)(param_1 + 0x70);
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    free(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = *(void **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  free(pvVar2);
  return;
}


// ===== 00314074  FUN_00314074 =====

void FUN_00314074(long param_1)

{
  undefined8 *__ptr;
  void *pvVar1;
  
  __ptr = (undefined8 *)*(void **)(param_1 + 0x30);
  while (__ptr != (undefined8 *)0x0) {
    pvVar1 = (void *)*__ptr;
    free(__ptr);
    __ptr = (undefined8 *)pvVar1;
  }
  pvVar1 = *(void **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  free(pvVar1);
  return;
}


// ===== 003140c0  FUN_003140c0 =====

void FUN_003140c0(undefined8 *param_1)

{
  undefined8 *__ptr;
  void *pvVar1;
  
  __ptr = (undefined8 *)param_1[2];
  while (__ptr != (undefined8 *)0x0) {
    pvVar1 = (void *)*__ptr;
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


// ===== 0031410c  FUN_0031410c =====

void FUN_0031410c(long param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  plVar4 = *(long **)(param_1 + 0x238);
  if ((plVar4 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
  }
  pvVar2 = *(void **)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  if (pvVar2 != (void *)0x0) {
    free(pvVar2);
    pvVar2 = *(void **)(param_1 + 0x200);
    if (pvVar2 != (void *)0x0) {
      *(void **)(param_1 + 0x208) = pvVar2;
      free(pvVar2);
    }
  }
  pvVar2 = *(void **)(param_1 + 0x1e8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x1f0) = pvVar2;
    free(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x1a8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x1b0) = pvVar2;
    free(pvVar2);
  }
  if (*(long *)(param_1 + 0x1a0) != 0) {
    plVar4 = *(long **)(param_1 + 0x198);
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    plVar3 = *(long **)(*(long *)(param_1 + 400) + 8);
    lVar1 = *plVar4;
    *(long **)(lVar1 + 8) = plVar3;
    *plVar3 = lVar1;
    while (plVar4 != (long *)(param_1 + 400)) {
      plVar3 = (long *)plVar4[1];
      free(plVar4);
      plVar4 = plVar3;
    }
  }
  FUN_0034653c(param_1 + 0x150);
  if (*(long *)(param_1 + 0x120) != 0) {
    plVar4 = *(long **)(param_1 + 0x118);
    *(undefined8 *)(param_1 + 0x120) = 0;
    plVar3 = *(long **)(*(long *)(param_1 + 0x110) + 8);
    lVar1 = *plVar4;
    *(long **)(lVar1 + 8) = plVar3;
    *plVar3 = lVar1;
    while (plVar4 != (long *)(param_1 + 0x110)) {
      plVar3 = (long *)plVar4[1];
      free(plVar4);
      plVar4 = plVar3;
    }
  }
  if (*(long *)(param_1 + 0x108) != 0) {
    plVar4 = *(long **)(param_1 + 0x100);
    *(undefined8 *)(param_1 + 0x108) = 0;
    plVar3 = *(long **)(*(long *)(param_1 + 0xf8) + 8);
    lVar1 = *plVar4;
    *(long **)(lVar1 + 8) = plVar3;
    *plVar3 = lVar1;
    while (plVar4 != (long *)(param_1 + 0xf8)) {
      plVar3 = (long *)plVar4[1];
      free(plVar4);
      plVar4 = plVar3;
    }
  }
  pvVar2 = *(void **)(param_1 + 200);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0xd0) = pvVar2;
    free(pvVar2);
  }
  puVar5 = (undefined8 *)(param_1 + 0xa0);
  pvVar2 = (void *)*puVar5;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *puVar5 = 0;
  if (pvVar2 != (void *)0x0) {
    free(pvVar2);
    pvVar2 = (void *)*puVar5;
    if (pvVar2 != (void *)0x0) {
      *(void **)(param_1 + 0xa8) = pvVar2;
      free(pvVar2);
    }
  }
  pvVar2 = *(void **)(param_1 + 0x58);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x60) = pvVar2;
    free(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x40);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x48) = pvVar2;
    free(pvVar2);
  }
  plVar4 = *(long **)(param_1 + 8);
  if ((plVar4 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
    return;
  }
  return;
}


// ===== 00314308  FUN_00314308 =====

void FUN_00314308(long *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long lVar11;
  void *pvVar12;
  undefined8 uVar13;
  float *pfVar14;
  float *pfVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 (*pauVar18) [16];
  ulong uVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float *local_60;
  float *local_58;
  long lStack_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar1 = *param_3;
  lVar2 = param_3[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar3 = lVar2 - lVar1;
  if (lVar3 != 0) {
    if ((ulong)(lVar3 >> 1) >> 0x3e != 0) {
      if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 003144c0 to 003144c7 has its CatchHandler @ 003144cc */
        uVar13 = FUN_002febf0(param_1);
                    /* catch() { ... } // from try @ 0031437c with catch @ 003144c8 */
                    /* catch() { ... } // from try @ 00314358 with catch @ 003144cc
                       catch() { ... } // from try @ 003144c0 with catch @ 003144cc */
        pvVar12 = (void *)*param_1;
        if (pvVar12 != (void *)0x0) {
          param_1[1] = (long)pvVar12;
          free(pvVar12);
        }
        if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00755eac(uVar13);
        }
      }
      goto LAB_003144fc;
    }
                    /* try { // try from 00314358 to 0031437b has its CatchHandler @ 003144cc */
    lVar11 = FUN_00759c3c(lVar3 * 2);
    *param_1 = lVar11;
    param_1[1] = lVar11;
    param_1[2] = lVar11 + (lVar3 >> 1) * 4;
  }
  FUN_003146fc(&local_60,lVar1,lVar2,param_1);
                    /* try { // try from 0031437c to 0031438b has its CatchHandler @ 003144c8 */
  FUN_00349f00(&local_60,param_2,param_1);
  pvVar12 = (void *)*param_1;
  if (pvVar12 != (void *)0x0) {
    param_1[1] = (long)pvVar12;
    free(pvVar12);
  }
  param_1[2] = lStack_50;
  param_1[1] = (long)local_58;
  *param_1 = (long)local_60;
  if (local_60 != local_58) {
    uVar16 = (long)local_58 + (-4 - (long)local_60);
    pfVar15 = local_60;
    if (0x1b < uVar16) {
      uVar16 = (uVar16 >> 2) + 1;
      uVar17 = uVar16 & 0x7ffffffffffffff8;
      pfVar15 = local_60 + uVar17;
      pauVar18 = (undefined1 (*) [16])(local_60 + 4);
      uVar19 = uVar17;
      do {
        auVar9 = pauVar18[-1];
        auVar10 = *pauVar18;
        uVar19 = uVar19 - 8;
        auVar22._8_4_ = 0xc7000000;
        auVar22._0_8_ = 0xc7000000c7000000;
        auVar22._12_4_ = 0xc7000000;
        auVar22 = NEON_fcmgt(auVar22,auVar9,4);
        auVar5._8_4_ = 0x46fffe00;
        auVar5._0_8_ = 0x46fffe0046fffe00;
        auVar5._12_4_ = 0x46fffe00;
        auVar24 = NEON_fcmgt(auVar9,auVar5,4);
        auVar26._8_4_ = 0xc7000000;
        auVar26._0_8_ = 0xc7000000c7000000;
        auVar26._12_4_ = 0xc7000000;
        auVar26 = NEON_fcmgt(auVar26,auVar10,4);
        auVar6._8_4_ = 0x46fffe00;
        auVar6._0_8_ = 0x46fffe0046fffe00;
        auVar6._12_4_ = 0x46fffe00;
        auVar28 = NEON_fcmgt(auVar10,auVar6,4);
        auVar29[0] = auVar24[0] & ~auVar22[0];
        auVar29[1] = auVar24[1] & ~auVar22[1];
        auVar29[2] = auVar24[2] & ~auVar22[2];
        auVar29[3] = auVar24[3] & ~auVar22[3];
        auVar29[4] = auVar24[4] & ~auVar22[4];
        auVar29[5] = auVar24[5] & ~auVar22[5];
        auVar29[6] = auVar24[6] & ~auVar22[6];
        auVar29[7] = auVar24[7] & ~auVar22[7];
        auVar29[8] = auVar24[8] & ~auVar22[8];
        auVar29[9] = auVar24[9] & ~auVar22[9];
        auVar29[10] = auVar24[10] & ~auVar22[10];
        auVar29[0xb] = auVar24[0xb] & ~auVar22[0xb];
        auVar29[0xc] = auVar24[0xc] & ~auVar22[0xc];
        auVar29[0xd] = auVar24[0xd] & ~auVar22[0xd];
        auVar29[0xe] = auVar24[0xe] & ~auVar22[0xe];
        auVar29[0xf] = auVar24[0xf] & ~auVar22[0xf];
        auVar23[0] = ~auVar22[0] & ~auVar24[0];
        auVar23[1] = ~auVar22[1] & ~auVar24[1];
        auVar23[2] = ~auVar22[2] & ~auVar24[2];
        auVar23[3] = ~auVar22[3] & ~auVar24[3];
        auVar23[4] = ~auVar22[4] & ~auVar24[4];
        auVar23[5] = ~auVar22[5] & ~auVar24[5];
        auVar23[6] = ~auVar22[6] & ~auVar24[6];
        auVar23[7] = ~auVar22[7] & ~auVar24[7];
        auVar23[8] = ~auVar22[8] & ~auVar24[8];
        auVar23[9] = ~auVar22[9] & ~auVar24[9];
        auVar23[10] = ~auVar22[10] & ~auVar24[10];
        auVar23[0xb] = ~auVar22[0xb] & ~auVar24[0xb];
        auVar23[0xc] = ~auVar22[0xc] & ~auVar24[0xc];
        auVar23[0xd] = ~auVar22[0xd] & ~auVar24[0xd];
        auVar23[0xe] = ~auVar22[0xe] & ~auVar24[0xe];
        auVar23[0xf] = ~auVar22[0xf] & ~auVar24[0xf];
        auVar24._8_4_ = 0xc7000000;
        auVar24._0_8_ = 0xc7000000c7000000;
        auVar24._12_4_ = 0xc7000000;
        auVar7._8_4_ = 0x46fffe00;
        auVar7._0_8_ = 0x46fffe0046fffe00;
        auVar7._12_4_ = 0x46fffe00;
        auVar22 = NEON_bsl(auVar29,auVar7,auVar24,1);
        auVar25[9] = auVar28[9] & ~auVar26[9];
        auVar25[8] = auVar28[8] & ~auVar26[8];
        auVar25[10] = auVar28[10] & ~auVar26[10];
        auVar25[0xb] = auVar28[0xb] & ~auVar26[0xb];
        auVar25[0xc] = auVar28[0xc] & ~auVar26[0xc];
        auVar25[0xd] = auVar28[0xd] & ~auVar26[0xd];
        auVar25[0xe] = auVar28[0xe] & ~auVar26[0xe];
        auVar25[0xf] = auVar28[0xf] & ~auVar26[0xf];
        auVar25[1] = auVar28[1] & ~auVar26[1];
        auVar25[0] = auVar28[0] & ~auVar26[0];
        auVar25[2] = auVar28[2] & ~auVar26[2];
        auVar25[3] = auVar28[3] & ~auVar26[3];
        auVar25[4] = auVar28[4] & ~auVar26[4];
        auVar25[5] = auVar28[5] & ~auVar26[5];
        auVar25[6] = auVar28[6] & ~auVar26[6];
        auVar25[7] = auVar28[7] & ~auVar26[7];
        auVar27[0] = ~auVar26[0] & ~auVar28[0];
        auVar27[1] = ~auVar26[1] & ~auVar28[1];
        auVar27[2] = ~auVar26[2] & ~auVar28[2];
        auVar27[3] = ~auVar26[3] & ~auVar28[3];
        auVar27[4] = ~auVar26[4] & ~auVar28[4];
        auVar27[5] = ~auVar26[5] & ~auVar28[5];
        auVar27[6] = ~auVar26[6] & ~auVar28[6];
        auVar27[7] = ~auVar26[7] & ~auVar28[7];
        auVar27[8] = ~auVar26[8] & ~auVar28[8];
        auVar27[9] = ~auVar26[9] & ~auVar28[9];
        auVar27[10] = ~auVar26[10] & ~auVar28[10];
        auVar27[0xb] = ~auVar26[0xb] & ~auVar28[0xb];
        auVar27[0xc] = ~auVar26[0xc] & ~auVar28[0xc];
        auVar27[0xd] = ~auVar26[0xd] & ~auVar28[0xd];
        auVar27[0xe] = ~auVar26[0xe] & ~auVar28[0xe];
        auVar27[0xf] = ~auVar26[0xf] & ~auVar28[0xf];
        auVar28._8_4_ = 0xc7000000;
        auVar28._0_8_ = 0xc7000000c7000000;
        auVar28._12_4_ = 0xc7000000;
        auVar8._8_4_ = 0x46fffe00;
        auVar8._0_8_ = 0x46fffe0046fffe00;
        auVar8._12_4_ = 0x46fffe00;
        auVar26 = NEON_bsl(auVar25,auVar8,auVar28,1);
        auVar22 = NEON_bif(auVar9,auVar22,auVar23,1);
        auVar26 = NEON_bif(auVar10,auVar26,auVar27,1);
        *(long *)(pauVar18[-1] + 8) = auVar22._8_8_;
        *(long *)pauVar18[-1] = auVar22._0_8_;
        *(long *)(*pauVar18 + 8) = auVar26._8_8_;
        *(long *)*pauVar18 = auVar26._0_8_;
        pauVar18 = pauVar18 + 2;
      } while (uVar19 != 0);
      if (uVar16 == uVar17) goto LAB_0031444c;
    }
    do {
      fVar21 = *pfVar15;
      fVar20 = -32768.0;
      if ((-32768.0 <= fVar21) &&
         (fVar20 = 32767.0, fVar21 == 32767.0 || fVar21 < 32767.0 != NAN(fVar21))) {
        fVar20 = fVar21;
      }
      pfVar14 = pfVar15 + 1;
      *pfVar15 = fVar20;
      pfVar15 = pfVar14;
    } while (pfVar14 != local_58);
  }
LAB_0031444c:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
LAB_003144fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00314500  FUN_00314500 =====

void FUN_00314500(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float *pfVar9;
  float *pfVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  void *__ptr;
  float *pfVar14;
  float *pfVar15;
  ulong uVar16;
  undefined1 (*pauVar17) [16];
  ulong uVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float *local_68;
  float *local_60;
  undefined1 uStack_49;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00349f00(&local_68);
  pfVar10 = local_60;
  pfVar9 = local_68;
  if (local_68 == local_60) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uVar13 = (long)local_60 - (long)local_68;
    pfVar15 = local_68;
    if (uVar13 - 4 < 0x1c) {
LAB_003145f8:
      do {
        fVar20 = *pfVar15;
        fVar19 = -32768.0;
        if ((-32768.0 <= fVar20) &&
           (fVar19 = 32767.0, fVar20 == 32767.0 || fVar20 < 32767.0 != NAN(fVar20))) {
          fVar19 = fVar20;
        }
        pfVar14 = pfVar15 + 1;
        *pfVar15 = fVar19;
        pfVar15 = pfVar14;
      } while (pfVar14 != local_60);
    }
    else {
      pauVar17 = (undefined1 (*) [16])(local_68 + 4);
      uVar1 = (uVar13 - 4 >> 2) + 1;
      uVar16 = uVar1 & 0x7ffffffffffffff8;
      pfVar15 = local_68 + uVar16;
      uVar18 = uVar16;
      do {
        auVar7 = pauVar17[-1];
        auVar8 = *pauVar17;
        uVar18 = uVar18 - 8;
        auVar21._8_4_ = 0xc7000000;
        auVar21._0_8_ = 0xc7000000c7000000;
        auVar21._12_4_ = 0xc7000000;
        auVar21 = NEON_fcmgt(auVar21,auVar7,4);
        auVar3._8_4_ = 0x46fffe00;
        auVar3._0_8_ = 0x46fffe0046fffe00;
        auVar3._12_4_ = 0x46fffe00;
        auVar23 = NEON_fcmgt(auVar7,auVar3,4);
        auVar25._8_4_ = 0xc7000000;
        auVar25._0_8_ = 0xc7000000c7000000;
        auVar25._12_4_ = 0xc7000000;
        auVar25 = NEON_fcmgt(auVar25,auVar8,4);
        auVar4._8_4_ = 0x46fffe00;
        auVar4._0_8_ = 0x46fffe0046fffe00;
        auVar4._12_4_ = 0x46fffe00;
        auVar27 = NEON_fcmgt(auVar8,auVar4,4);
        auVar28[0] = auVar23[0] & ~auVar21[0];
        auVar28[1] = auVar23[1] & ~auVar21[1];
        auVar28[2] = auVar23[2] & ~auVar21[2];
        auVar28[3] = auVar23[3] & ~auVar21[3];
        auVar28[4] = auVar23[4] & ~auVar21[4];
        auVar28[5] = auVar23[5] & ~auVar21[5];
        auVar28[6] = auVar23[6] & ~auVar21[6];
        auVar28[7] = auVar23[7] & ~auVar21[7];
        auVar28[8] = auVar23[8] & ~auVar21[8];
        auVar28[9] = auVar23[9] & ~auVar21[9];
        auVar28[10] = auVar23[10] & ~auVar21[10];
        auVar28[0xb] = auVar23[0xb] & ~auVar21[0xb];
        auVar28[0xc] = auVar23[0xc] & ~auVar21[0xc];
        auVar28[0xd] = auVar23[0xd] & ~auVar21[0xd];
        auVar28[0xe] = auVar23[0xe] & ~auVar21[0xe];
        auVar28[0xf] = auVar23[0xf] & ~auVar21[0xf];
        auVar22[0] = ~auVar21[0] & ~auVar23[0];
        auVar22[1] = ~auVar21[1] & ~auVar23[1];
        auVar22[2] = ~auVar21[2] & ~auVar23[2];
        auVar22[3] = ~auVar21[3] & ~auVar23[3];
        auVar22[4] = ~auVar21[4] & ~auVar23[4];
        auVar22[5] = ~auVar21[5] & ~auVar23[5];
        auVar22[6] = ~auVar21[6] & ~auVar23[6];
        auVar22[7] = ~auVar21[7] & ~auVar23[7];
        auVar22[8] = ~auVar21[8] & ~auVar23[8];
        auVar22[9] = ~auVar21[9] & ~auVar23[9];
        auVar22[10] = ~auVar21[10] & ~auVar23[10];
        auVar22[0xb] = ~auVar21[0xb] & ~auVar23[0xb];
        auVar22[0xc] = ~auVar21[0xc] & ~auVar23[0xc];
        auVar22[0xd] = ~auVar21[0xd] & ~auVar23[0xd];
        auVar22[0xe] = ~auVar21[0xe] & ~auVar23[0xe];
        auVar22[0xf] = ~auVar21[0xf] & ~auVar23[0xf];
        auVar23._8_4_ = 0xc7000000;
        auVar23._0_8_ = 0xc7000000c7000000;
        auVar23._12_4_ = 0xc7000000;
        auVar5._8_4_ = 0x46fffe00;
        auVar5._0_8_ = 0x46fffe0046fffe00;
        auVar5._12_4_ = 0x46fffe00;
        auVar21 = NEON_bsl(auVar28,auVar5,auVar23,1);
        auVar24[9] = auVar27[9] & ~auVar25[9];
        auVar24[8] = auVar27[8] & ~auVar25[8];
        auVar24[10] = auVar27[10] & ~auVar25[10];
        auVar24[0xb] = auVar27[0xb] & ~auVar25[0xb];
        auVar24[0xc] = auVar27[0xc] & ~auVar25[0xc];
        auVar24[0xd] = auVar27[0xd] & ~auVar25[0xd];
        auVar24[0xe] = auVar27[0xe] & ~auVar25[0xe];
        auVar24[0xf] = auVar27[0xf] & ~auVar25[0xf];
        auVar24[1] = auVar27[1] & ~auVar25[1];
        auVar24[0] = auVar27[0] & ~auVar25[0];
        auVar24[2] = auVar27[2] & ~auVar25[2];
        auVar24[3] = auVar27[3] & ~auVar25[3];
        auVar24[4] = auVar27[4] & ~auVar25[4];
        auVar24[5] = auVar27[5] & ~auVar25[5];
        auVar24[6] = auVar27[6] & ~auVar25[6];
        auVar24[7] = auVar27[7] & ~auVar25[7];
        auVar26[0] = ~auVar25[0] & ~auVar27[0];
        auVar26[1] = ~auVar25[1] & ~auVar27[1];
        auVar26[2] = ~auVar25[2] & ~auVar27[2];
        auVar26[3] = ~auVar25[3] & ~auVar27[3];
        auVar26[4] = ~auVar25[4] & ~auVar27[4];
        auVar26[5] = ~auVar25[5] & ~auVar27[5];
        auVar26[6] = ~auVar25[6] & ~auVar27[6];
        auVar26[7] = ~auVar25[7] & ~auVar27[7];
        auVar26[8] = ~auVar25[8] & ~auVar27[8];
        auVar26[9] = ~auVar25[9] & ~auVar27[9];
        auVar26[10] = ~auVar25[10] & ~auVar27[10];
        auVar26[0xb] = ~auVar25[0xb] & ~auVar27[0xb];
        auVar26[0xc] = ~auVar25[0xc] & ~auVar27[0xc];
        auVar26[0xd] = ~auVar25[0xd] & ~auVar27[0xd];
        auVar26[0xe] = ~auVar25[0xe] & ~auVar27[0xe];
        auVar26[0xf] = ~auVar25[0xf] & ~auVar27[0xf];
        auVar27._8_4_ = 0xc7000000;
        auVar27._0_8_ = 0xc7000000c7000000;
        auVar27._12_4_ = 0xc7000000;
        auVar6._8_4_ = 0x46fffe00;
        auVar6._0_8_ = 0x46fffe0046fffe00;
        auVar6._12_4_ = 0x46fffe00;
        auVar25 = NEON_bsl(auVar24,auVar6,auVar27,1);
        auVar21 = NEON_bif(auVar7,auVar21,auVar22,1);
        auVar25 = NEON_bif(auVar8,auVar25,auVar26,1);
        *(long *)(pauVar17[-1] + 8) = auVar21._8_8_;
        *(long *)pauVar17[-1] = auVar21._0_8_;
        *(long *)(*pauVar17 + 8) = auVar25._8_8_;
        *(long *)*pauVar17 = auVar25._0_8_;
        pauVar17 = pauVar17 + 2;
      } while (uVar18 != 0);
      if (uVar1 != uVar16) goto LAB_003145f8;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if ((long)uVar13 >> 2 < 0) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
        uVar12 = FUN_002ff308(param_1);
                    /* catch() { ... } // from try @ 003145e4 with catch @ 003146a0 */
        __ptr = (void *)*param_1;
        pfVar10 = local_68;
        pfVar9 = local_60;
        if (__ptr != (void *)0x0) {
          param_1[1] = (long)__ptr;
          free(__ptr);
          pfVar10 = local_68;
          pfVar9 = local_60;
        }
        local_60 = pfVar10;
        if (local_60 == (float *)0x0) {
          local_60 = pfVar9;
          if (*(long *)(lVar2 + 0x28) == local_48) {
LAB_003146c4:
                    /* WARNING: Subroutine does not return */
            FUN_00755eac(uVar12);
          }
        }
        else {
          free(local_60);
          if (*(long *)(lVar2 + 0x28) == local_48) goto LAB_003146c4;
        }
      }
      goto LAB_003146f8;
    }
                    /* try { // try from 003145e4 to 0031469f has its CatchHandler @ 003146a0 */
    lVar11 = FUN_00759c3c(uVar13 >> 1);
    *param_1 = lVar11;
    param_1[1] = lVar11;
    param_1[2] = lVar11 + ((long)uVar13 >> 2) * 2;
  }
  FUN_00314824(&uStack_49,pfVar9,pfVar10,param_1);
  if (local_68 != (float *)0x0) {
    local_60 = local_68;
    free(local_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_003146f8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003146fc  FUN_003146fc =====

undefined1  [16] FUN_003146fc(undefined8 param_1,short *param_2,short *param_3,undefined8 *param_4)

{
  ulong uVar1;
  float *pfVar2;
  short sVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  short *psVar6;
  void *__src;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  psVar6 = param_2;
  if (param_2 != param_3) {
    pfVar8 = (float *)param_4[1];
    do {
      sVar3 = *param_2;
      if (pfVar8 < (float *)param_4[2]) {
        pfVar7 = pfVar8 + 1;
        *pfVar8 = (float)(int)sVar3;
      }
      else {
        __src = (void *)*param_4;
        lVar9 = (long)pfVar8 - (long)__src >> 2;
        uVar1 = lVar9 + 1;
        if (uVar1 >> 0x3e != 0) {
          FUN_002febf0(param_4);
LAB_00314820:
                    /* WARNING: Subroutine does not return */
          FUN_002f9ee0();
        }
        uVar4 = (long)param_4[2] - (long)__src;
        uVar5 = (long)uVar4 >> 1;
        if (uVar5 <= uVar1) {
          uVar5 = uVar1;
        }
        if (0x7ffffffffffffffb < uVar4) {
          uVar5 = 0x3fffffffffffffff;
        }
        if (uVar5 == 0) {
          __dest = (void *)0x0;
        }
        else {
          if (uVar5 >> 0x3e != 0) goto LAB_00314820;
          __dest = (void *)FUN_00759c3c(uVar5 << 2);
        }
        pfVar2 = (float *)((long)__dest + lVar9 * 4);
        pfVar7 = pfVar2 + 1;
        *pfVar2 = (float)(int)sVar3;
        memcpy(__dest,__src,(long)pfVar8 - (long)__src);
        *param_4 = __dest;
        param_4[1] = pfVar7;
        param_4[2] = (void *)((long)__dest + uVar5 * 4);
        if (__src != (void *)0x0) {
          free(__src);
        }
      }
      param_2 = param_2 + 1;
      param_4[1] = pfVar7;
      psVar6 = param_3;
      pfVar8 = pfVar7;
    } while (param_2 != param_3);
  }
  auVar10._8_8_ = param_4;
  auVar10._0_8_ = psVar6;
  return auVar10;
}


// ===== 00314824  FUN_00314824 =====

undefined1  [16] FUN_00314824(undefined8 param_1,float *param_2,float *param_3,undefined8 *param_4)

{
  undefined2 *puVar1;
  ulong uVar2;
  void *__dest;
  ulong uVar3;
  float *pfVar4;
  void *__src;
  undefined2 *puVar5;
  undefined2 *puVar6;
  long lVar7;
  float fVar8;
  undefined1 auVar9 [16];
  
  pfVar4 = param_2;
  if (param_2 != param_3) {
    puVar6 = (undefined2 *)param_4[1];
    do {
      fVar8 = *param_2;
      if (puVar6 < (undefined2 *)param_4[2]) {
        puVar5 = puVar6 + 1;
        *puVar6 = (short)(int)fVar8;
      }
      else {
        __src = (void *)*param_4;
        lVar7 = (long)puVar6 - (long)__src >> 1;
        if (lVar7 == -2 || lVar7 + 2 < 0 != SCARRY8(lVar7,2)) {
          FUN_002ff308(param_4);
LAB_00314938:
                    /* WARNING: Subroutine does not return */
          FUN_002f9ee0();
        }
        uVar3 = (long)param_4[2] - (long)__src;
        uVar2 = uVar3;
        if (uVar3 <= lVar7 + 1U) {
          uVar2 = lVar7 + 1;
        }
        if (0x7ffffffffffffffd < uVar3) {
          uVar2 = 0x7fffffffffffffff;
        }
        if (uVar2 == 0) {
          __dest = (void *)0x0;
        }
        else {
          if ((long)uVar2 < 0) goto LAB_00314938;
          __dest = (void *)FUN_00759c3c(uVar2 << 1);
        }
        puVar1 = (undefined2 *)((long)__dest + lVar7 * 2);
        puVar5 = puVar1 + 1;
        *puVar1 = (short)(int)fVar8;
        memcpy(__dest,__src,(long)puVar6 - (long)__src);
        *param_4 = __dest;
        param_4[1] = puVar5;
        param_4[2] = (void *)((long)__dest + uVar2 * 2);
        if (__src != (void *)0x0) {
          free(__src);
        }
      }
      param_2 = param_2 + 1;
      param_4[1] = puVar5;
      pfVar4 = param_3;
      puVar6 = puVar5;
    } while (param_2 != param_3);
  }
  auVar9._8_8_ = param_4;
  auVar9._0_8_ = pfVar4;
  return auVar9;
}


// ===== 0031493c  FUN_0031493c =====

void FUN_0031493c(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00753a74(8);
  *plVar1 = (long)(PTR_DAT_007a1378 + 0x10);
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(plVar1,PTR_PTR_007a1380,PTR_thunk_FUN_0073a174_007a1388);
}


// ===== 00314970  FUN_00314970 =====

void FUN_00314970(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_00349ee0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 003149ac  FUN_003149ac =====

void FUN_003149ac(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_00349ee0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 003149e8  FUN_003149e8 =====

void FUN_003149e8(void)

{
  return;
}


// ===== 003149ec  FUN_003149ec =====

void FUN_003149ec(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  size_t __n;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  void *__dest;
  void *pvVar9;
  undefined8 uVar10;
  undefined1 (*pauVar11) [16];
  float *pfVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float *local_60;
  float *local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pvVar9 = (void *)*param_3;
  lVar1 = param_3[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  __n = lVar1 - (long)pvVar9;
  if (__n != 0) {
    if ((long)__n < 0) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 00314bf8 to 00314bff has its CatchHandler @ 00314c04 */
        uVar10 = FUN_002febf0(param_1);
                    /* catch() { ... } // from try @ 00314a54 with catch @ 00314c00 */
                    /* catch() { ... } // from try @ 00314a30 with catch @ 00314c04
                       catch() { ... } // from try @ 00314bf8 with catch @ 00314c04 */
        pvVar9 = (void *)*param_1;
        if (pvVar9 != (void *)0x0) {
          param_1[1] = pvVar9;
          free(pvVar9);
        }
        if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00755eac(uVar10);
        }
      }
      goto LAB_00314c34;
    }
                    /* try { // try from 00314a30 to 00314a37 has its CatchHandler @ 00314c04 */
    __dest = (void *)FUN_00759c3c(__n);
    *param_1 = __dest;
    param_1[2] = (long)__dest + __n;
    memcpy(__dest,pvVar9,__n);
    param_1[1] = (long)__dest + __n;
  }
                    /* try { // try from 00314a54 to 00314a63 has its CatchHandler @ 00314c00 */
  FUN_00349f00(&local_60,param_2,param_1);
  pvVar9 = (void *)*param_1;
  if (pvVar9 != (void *)0x0) {
    param_1[1] = pvVar9;
    free(pvVar9);
  }
  param_1[2] = uStack_50;
  param_1[1] = local_58;
  *param_1 = local_60;
  if (local_60 != local_58) {
    uVar13 = (long)local_58 + (-4 - (long)local_60);
    pfVar12 = local_60;
    if (uVar13 < 0x1c) {
LAB_00314ae8:
      do {
        pfVar17 = pfVar12 + 1;
        *pfVar12 = *pfVar12 * 32768.0;
        pfVar12 = pfVar17;
      } while (pfVar17 != local_58);
    }
    else {
      uVar15 = (uVar13 >> 2) + 1;
      pfVar17 = local_60 + 4;
      uVar16 = uVar15 & 0x7ffffffffffffff8;
      pfVar12 = local_60 + uVar16;
      uVar14 = uVar16;
      do {
        uVar14 = uVar14 - 8;
        *(ulong *)(pfVar17 + -2) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar17 + -2) >> 0x20) * 32768.0,
                      (float)*(undefined8 *)(pfVar17 + -2) * 32768.0);
        *(ulong *)(pfVar17 + -4) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar17 + -4) >> 0x20) * 32768.0,
                      (float)*(undefined8 *)(pfVar17 + -4) * 32768.0);
        pfVar17[4] = pfVar17[2] * 32768.0;
        pfVar17[5] = pfVar17[3] * 32768.0;
        *pfVar17 = *pfVar17 * 32768.0;
        pfVar17[1] = pfVar17[1] * 32768.0;
        pfVar17 = pfVar17 + 8;
      } while (uVar14 != 0);
      if (uVar15 != uVar16) goto LAB_00314ae8;
    }
    pfVar12 = local_60;
    if (0x1b < uVar13) {
      uVar13 = (uVar13 >> 2) + 1;
      uVar14 = uVar13 & 0x7ffffffffffffff8;
      pfVar12 = local_60 + uVar14;
      pauVar11 = (undefined1 (*) [16])(local_60 + 4);
      uVar15 = uVar14;
      do {
        auVar7 = pauVar11[-1];
        auVar8 = *pauVar11;
        uVar15 = uVar15 - 8;
        auVar20._8_4_ = 0xc7000000;
        auVar20._0_8_ = 0xc7000000c7000000;
        auVar20._12_4_ = 0xc7000000;
        auVar20 = NEON_fcmgt(auVar20,auVar7,4);
        auVar3._8_4_ = 0x46fffe00;
        auVar3._0_8_ = 0x46fffe0046fffe00;
        auVar3._12_4_ = 0x46fffe00;
        auVar22 = NEON_fcmgt(auVar7,auVar3,4);
        auVar24._8_4_ = 0xc7000000;
        auVar24._0_8_ = 0xc7000000c7000000;
        auVar24._12_4_ = 0xc7000000;
        auVar24 = NEON_fcmgt(auVar24,auVar8,4);
        auVar4._8_4_ = 0x46fffe00;
        auVar4._0_8_ = 0x46fffe0046fffe00;
        auVar4._12_4_ = 0x46fffe00;
        auVar26 = NEON_fcmgt(auVar8,auVar4,4);
        auVar27[0] = auVar22[0] & ~auVar20[0];
        auVar27[1] = auVar22[1] & ~auVar20[1];
        auVar27[2] = auVar22[2] & ~auVar20[2];
        auVar27[3] = auVar22[3] & ~auVar20[3];
        auVar27[4] = auVar22[4] & ~auVar20[4];
        auVar27[5] = auVar22[5] & ~auVar20[5];
        auVar27[6] = auVar22[6] & ~auVar20[6];
        auVar27[7] = auVar22[7] & ~auVar20[7];
        auVar27[8] = auVar22[8] & ~auVar20[8];
        auVar27[9] = auVar22[9] & ~auVar20[9];
        auVar27[10] = auVar22[10] & ~auVar20[10];
        auVar27[0xb] = auVar22[0xb] & ~auVar20[0xb];
        auVar27[0xc] = auVar22[0xc] & ~auVar20[0xc];
        auVar27[0xd] = auVar22[0xd] & ~auVar20[0xd];
        auVar27[0xe] = auVar22[0xe] & ~auVar20[0xe];
        auVar27[0xf] = auVar22[0xf] & ~auVar20[0xf];
        auVar21[0] = ~auVar20[0] & ~auVar22[0];
        auVar21[1] = ~auVar20[1] & ~auVar22[1];
        auVar21[2] = ~auVar20[2] & ~auVar22[2];
        auVar21[3] = ~auVar20[3] & ~auVar22[3];
        auVar21[4] = ~auVar20[4] & ~auVar22[4];
        auVar21[5] = ~auVar20[5] & ~auVar22[5];
        auVar21[6] = ~auVar20[6] & ~auVar22[6];
        auVar21[7] = ~auVar20[7] & ~auVar22[7];
        auVar21[8] = ~auVar20[8] & ~auVar22[8];
        auVar21[9] = ~auVar20[9] & ~auVar22[9];
        auVar21[10] = ~auVar20[10] & ~auVar22[10];
        auVar21[0xb] = ~auVar20[0xb] & ~auVar22[0xb];
        auVar21[0xc] = ~auVar20[0xc] & ~auVar22[0xc];
        auVar21[0xd] = ~auVar20[0xd] & ~auVar22[0xd];
        auVar21[0xe] = ~auVar20[0xe] & ~auVar22[0xe];
        auVar21[0xf] = ~auVar20[0xf] & ~auVar22[0xf];
        auVar22._8_4_ = 0xc7000000;
        auVar22._0_8_ = 0xc7000000c7000000;
        auVar22._12_4_ = 0xc7000000;
        auVar5._8_4_ = 0x46fffe00;
        auVar5._0_8_ = 0x46fffe0046fffe00;
        auVar5._12_4_ = 0x46fffe00;
        auVar20 = NEON_bsl(auVar27,auVar5,auVar22,1);
        auVar23[9] = auVar26[9] & ~auVar24[9];
        auVar23[8] = auVar26[8] & ~auVar24[8];
        auVar23[10] = auVar26[10] & ~auVar24[10];
        auVar23[0xb] = auVar26[0xb] & ~auVar24[0xb];
        auVar23[0xc] = auVar26[0xc] & ~auVar24[0xc];
        auVar23[0xd] = auVar26[0xd] & ~auVar24[0xd];
        auVar23[0xe] = auVar26[0xe] & ~auVar24[0xe];
        auVar23[0xf] = auVar26[0xf] & ~auVar24[0xf];
        auVar23[1] = auVar26[1] & ~auVar24[1];
        auVar23[0] = auVar26[0] & ~auVar24[0];
        auVar23[2] = auVar26[2] & ~auVar24[2];
        auVar23[3] = auVar26[3] & ~auVar24[3];
        auVar23[4] = auVar26[4] & ~auVar24[4];
        auVar23[5] = auVar26[5] & ~auVar24[5];
        auVar23[6] = auVar26[6] & ~auVar24[6];
        auVar23[7] = auVar26[7] & ~auVar24[7];
        auVar25[0] = ~auVar24[0] & ~auVar26[0];
        auVar25[1] = ~auVar24[1] & ~auVar26[1];
        auVar25[2] = ~auVar24[2] & ~auVar26[2];
        auVar25[3] = ~auVar24[3] & ~auVar26[3];
        auVar25[4] = ~auVar24[4] & ~auVar26[4];
        auVar25[5] = ~auVar24[5] & ~auVar26[5];
        auVar25[6] = ~auVar24[6] & ~auVar26[6];
        auVar25[7] = ~auVar24[7] & ~auVar26[7];
        auVar25[8] = ~auVar24[8] & ~auVar26[8];
        auVar25[9] = ~auVar24[9] & ~auVar26[9];
        auVar25[10] = ~auVar24[10] & ~auVar26[10];
        auVar25[0xb] = ~auVar24[0xb] & ~auVar26[0xb];
        auVar25[0xc] = ~auVar24[0xc] & ~auVar26[0xc];
        auVar25[0xd] = ~auVar24[0xd] & ~auVar26[0xd];
        auVar25[0xe] = ~auVar24[0xe] & ~auVar26[0xe];
        auVar25[0xf] = ~auVar24[0xf] & ~auVar26[0xf];
        auVar26._8_4_ = 0xc7000000;
        auVar26._0_8_ = 0xc7000000c7000000;
        auVar26._12_4_ = 0xc7000000;
        auVar6._8_4_ = 0x46fffe00;
        auVar6._0_8_ = 0x46fffe0046fffe00;
        auVar6._12_4_ = 0x46fffe00;
        auVar24 = NEON_bsl(auVar23,auVar6,auVar26,1);
        auVar20 = NEON_bif(auVar7,auVar20,auVar21,1);
        auVar24 = NEON_bif(auVar8,auVar24,auVar25,1);
        *(long *)(pauVar11[-1] + 8) = auVar20._8_8_;
        *(long *)pauVar11[-1] = auVar20._0_8_;
        *(long *)(*pauVar11 + 8) = auVar24._8_8_;
        *(long *)*pauVar11 = auVar24._0_8_;
        pauVar11 = pauVar11 + 2;
      } while (uVar15 != 0);
      if (uVar13 == uVar14) goto LAB_00314b84;
    }
    do {
      fVar19 = *pfVar12;
      fVar18 = -32768.0;
      if ((-32768.0 <= fVar19) &&
         (fVar18 = 32767.0, fVar19 == 32767.0 || fVar19 < 32767.0 != NAN(fVar19))) {
        fVar18 = fVar19;
      }
      pfVar17 = pfVar12 + 1;
      *pfVar12 = fVar18;
      pfVar12 = pfVar17;
    } while (pfVar17 != local_58);
  }
LAB_00314b84:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_00314c34:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00314c38  FUN_00314c38 =====

void FUN_00314c38(undefined8 *param_1)

{
  size_t __n;
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  void *pvVar8;
  undefined8 uVar9;
  ulong uVar10;
  float *pfVar11;
  ulong uVar12;
  float *pfVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 (*pauVar16) [16];
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float *local_60;
  float *local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00349f00(&local_60);
  if (local_60 == local_58) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uVar10 = (long)local_58 + (-4 - (long)local_60);
    pfVar11 = local_60;
    if (uVar10 < 0x1c) {
LAB_00314dd4:
      do {
        fVar18 = *pfVar11;
        fVar17 = -32768.0;
        if ((-32768.0 <= fVar18) &&
           (fVar17 = 32767.0, fVar18 == 32767.0 || fVar18 < 32767.0 != NAN(fVar18))) {
          fVar17 = fVar18;
        }
        pfVar13 = pfVar11 + 1;
        *pfVar11 = fVar17;
        pfVar11 = pfVar13;
      } while (pfVar13 != local_58);
    }
    else {
      uVar15 = (uVar10 >> 2) + 1;
      uVar14 = uVar15 & 0x7ffffffffffffff8;
      pauVar16 = (undefined1 (*) [16])(local_60 + 4);
      pfVar11 = local_60 + uVar14;
      uVar12 = uVar14;
      do {
        auVar6 = pauVar16[-1];
        auVar7 = *pauVar16;
        uVar12 = uVar12 - 8;
        auVar19._8_4_ = 0xc7000000;
        auVar19._0_8_ = 0xc7000000c7000000;
        auVar19._12_4_ = 0xc7000000;
        auVar19 = NEON_fcmgt(auVar19,auVar6,4);
        auVar2._8_4_ = 0x46fffe00;
        auVar2._0_8_ = 0x46fffe0046fffe00;
        auVar2._12_4_ = 0x46fffe00;
        auVar21 = NEON_fcmgt(auVar6,auVar2,4);
        auVar23._8_4_ = 0xc7000000;
        auVar23._0_8_ = 0xc7000000c7000000;
        auVar23._12_4_ = 0xc7000000;
        auVar23 = NEON_fcmgt(auVar23,auVar7,4);
        auVar3._8_4_ = 0x46fffe00;
        auVar3._0_8_ = 0x46fffe0046fffe00;
        auVar3._12_4_ = 0x46fffe00;
        auVar25 = NEON_fcmgt(auVar7,auVar3,4);
        auVar26[0] = auVar21[0] & ~auVar19[0];
        auVar26[1] = auVar21[1] & ~auVar19[1];
        auVar26[2] = auVar21[2] & ~auVar19[2];
        auVar26[3] = auVar21[3] & ~auVar19[3];
        auVar26[4] = auVar21[4] & ~auVar19[4];
        auVar26[5] = auVar21[5] & ~auVar19[5];
        auVar26[6] = auVar21[6] & ~auVar19[6];
        auVar26[7] = auVar21[7] & ~auVar19[7];
        auVar26[8] = auVar21[8] & ~auVar19[8];
        auVar26[9] = auVar21[9] & ~auVar19[9];
        auVar26[10] = auVar21[10] & ~auVar19[10];
        auVar26[0xb] = auVar21[0xb] & ~auVar19[0xb];
        auVar26[0xc] = auVar21[0xc] & ~auVar19[0xc];
        auVar26[0xd] = auVar21[0xd] & ~auVar19[0xd];
        auVar26[0xe] = auVar21[0xe] & ~auVar19[0xe];
        auVar26[0xf] = auVar21[0xf] & ~auVar19[0xf];
        auVar20[0] = ~auVar19[0] & ~auVar21[0];
        auVar20[1] = ~auVar19[1] & ~auVar21[1];
        auVar20[2] = ~auVar19[2] & ~auVar21[2];
        auVar20[3] = ~auVar19[3] & ~auVar21[3];
        auVar20[4] = ~auVar19[4] & ~auVar21[4];
        auVar20[5] = ~auVar19[5] & ~auVar21[5];
        auVar20[6] = ~auVar19[6] & ~auVar21[6];
        auVar20[7] = ~auVar19[7] & ~auVar21[7];
        auVar20[8] = ~auVar19[8] & ~auVar21[8];
        auVar20[9] = ~auVar19[9] & ~auVar21[9];
        auVar20[10] = ~auVar19[10] & ~auVar21[10];
        auVar20[0xb] = ~auVar19[0xb] & ~auVar21[0xb];
        auVar20[0xc] = ~auVar19[0xc] & ~auVar21[0xc];
        auVar20[0xd] = ~auVar19[0xd] & ~auVar21[0xd];
        auVar20[0xe] = ~auVar19[0xe] & ~auVar21[0xe];
        auVar20[0xf] = ~auVar19[0xf] & ~auVar21[0xf];
        auVar21._8_4_ = 0xc7000000;
        auVar21._0_8_ = 0xc7000000c7000000;
        auVar21._12_4_ = 0xc7000000;
        auVar4._8_4_ = 0x46fffe00;
        auVar4._0_8_ = 0x46fffe0046fffe00;
        auVar4._12_4_ = 0x46fffe00;
        auVar19 = NEON_bsl(auVar26,auVar4,auVar21,1);
        auVar22[9] = auVar25[9] & ~auVar23[9];
        auVar22[8] = auVar25[8] & ~auVar23[8];
        auVar22[10] = auVar25[10] & ~auVar23[10];
        auVar22[0xb] = auVar25[0xb] & ~auVar23[0xb];
        auVar22[0xc] = auVar25[0xc] & ~auVar23[0xc];
        auVar22[0xd] = auVar25[0xd] & ~auVar23[0xd];
        auVar22[0xe] = auVar25[0xe] & ~auVar23[0xe];
        auVar22[0xf] = auVar25[0xf] & ~auVar23[0xf];
        auVar22[1] = auVar25[1] & ~auVar23[1];
        auVar22[0] = auVar25[0] & ~auVar23[0];
        auVar22[2] = auVar25[2] & ~auVar23[2];
        auVar22[3] = auVar25[3] & ~auVar23[3];
        auVar22[4] = auVar25[4] & ~auVar23[4];
        auVar22[5] = auVar25[5] & ~auVar23[5];
        auVar22[6] = auVar25[6] & ~auVar23[6];
        auVar22[7] = auVar25[7] & ~auVar23[7];
        auVar24[0] = ~auVar23[0] & ~auVar25[0];
        auVar24[1] = ~auVar23[1] & ~auVar25[1];
        auVar24[2] = ~auVar23[2] & ~auVar25[2];
        auVar24[3] = ~auVar23[3] & ~auVar25[3];
        auVar24[4] = ~auVar23[4] & ~auVar25[4];
        auVar24[5] = ~auVar23[5] & ~auVar25[5];
        auVar24[6] = ~auVar23[6] & ~auVar25[6];
        auVar24[7] = ~auVar23[7] & ~auVar25[7];
        auVar24[8] = ~auVar23[8] & ~auVar25[8];
        auVar24[9] = ~auVar23[9] & ~auVar25[9];
        auVar24[10] = ~auVar23[10] & ~auVar25[10];
        auVar24[0xb] = ~auVar23[0xb] & ~auVar25[0xb];
        auVar24[0xc] = ~auVar23[0xc] & ~auVar25[0xc];
        auVar24[0xd] = ~auVar23[0xd] & ~auVar25[0xd];
        auVar24[0xe] = ~auVar23[0xe] & ~auVar25[0xe];
        auVar24[0xf] = ~auVar23[0xf] & ~auVar25[0xf];
        auVar25._8_4_ = 0xc7000000;
        auVar25._0_8_ = 0xc7000000c7000000;
        auVar25._12_4_ = 0xc7000000;
        auVar5._8_4_ = 0x46fffe00;
        auVar5._0_8_ = 0x46fffe0046fffe00;
        auVar5._12_4_ = 0x46fffe00;
        auVar23 = NEON_bsl(auVar22,auVar5,auVar25,1);
        auVar19 = NEON_bif(auVar6,auVar19,auVar20,1);
        auVar23 = NEON_bif(auVar7,auVar23,auVar24,1);
        *(long *)(pauVar16[-1] + 8) = auVar19._8_8_;
        *(long *)pauVar16[-1] = auVar19._0_8_;
        *(long *)(*pauVar16 + 8) = auVar23._8_8_;
        *(long *)*pauVar16 = auVar23._0_8_;
        pauVar16 = pauVar16 + 2;
      } while (uVar12 != 0);
      if (uVar15 != uVar14) goto LAB_00314dd4;
    }
    pfVar11 = local_60;
    if (uVar10 < 0x1c) {
LAB_00314d54:
      do {
        pfVar13 = pfVar11 + 1;
        *pfVar11 = *pfVar11 * 3.0517578e-05;
        pfVar11 = pfVar13;
      } while (pfVar13 != local_58);
    }
    else {
      uVar10 = (uVar10 >> 2) + 1;
      pfVar13 = local_60 + 4;
      uVar12 = uVar10 & 0x7ffffffffffffff8;
      pfVar11 = local_60 + uVar12;
      uVar15 = uVar12;
      do {
        uVar15 = uVar15 - 8;
        *(ulong *)(pfVar13 + -2) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar13 + -2) >> 0x20) * 3.0517578e-05,
                      (float)*(undefined8 *)(pfVar13 + -2) * 3.0517578e-05);
        *(ulong *)(pfVar13 + -4) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar13 + -4) >> 0x20) * 3.0517578e-05,
                      (float)*(undefined8 *)(pfVar13 + -4) * 3.0517578e-05);
        pfVar13[4] = pfVar13[2] * 3.0517578e-05;
        pfVar13[5] = pfVar13[3] * 3.0517578e-05;
        *pfVar13 = *pfVar13 * 3.0517578e-05;
        pfVar13[1] = pfVar13[1] * 3.0517578e-05;
        pfVar13 = pfVar13 + 8;
      } while (uVar15 != 0);
      if (uVar10 != uVar12) goto LAB_00314d54;
    }
    __n = (long)local_58 - (long)local_60;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if ((long)__n < 0) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00314e30 to 00314e37 has its CatchHandler @ 00314e38 */
        uVar9 = FUN_002febf0(param_1);
                    /* catch() { ... } // from try @ 00314d78 with catch @ 00314e38
                       catch() { ... } // from try @ 00314e30 with catch @ 00314e38 */
        pvVar8 = (void *)*param_1;
        pfVar13 = local_60;
        pfVar11 = local_58;
        if (pvVar8 != (void *)0x0) {
          param_1[1] = pvVar8;
          free(pvVar8);
          pfVar13 = local_60;
          pfVar11 = local_58;
        }
        local_58 = pfVar13;
        if (local_58 == (float *)0x0) {
          local_58 = pfVar11;
          if (*(long *)(lVar1 + 0x28) == local_48) {
LAB_00314e5c:
                    /* WARNING: Subroutine does not return */
            FUN_00755eac(uVar9);
          }
        }
        else {
          free(local_58);
          if (*(long *)(lVar1 + 0x28) == local_48) goto LAB_00314e5c;
        }
      }
      goto LAB_00314e90;
    }
                    /* try { // try from 00314d78 to 00314d7f has its CatchHandler @ 00314e38 */
    pvVar8 = (void *)FUN_00759c3c(__n);
    *param_1 = pvVar8;
    param_1[2] = (long)pvVar8 + __n;
    memcpy(pvVar8,local_60,__n);
    param_1[1] = (long)pvVar8 + __n;
  }
  if (local_60 != (float *)0x0) {
    local_58 = local_60;
    free(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00314e90:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00314e94  FUN_00314e94 =====

void FUN_00314e94(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_007a1368;
  pvVar3 = (void *)param_1[0x16];
  param_1[0x16] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (pvVar3 != (void *)0x0) {
    FUN_00313768(pvVar3);
    free(pvVar3);
  }
  pvVar3 = (void *)param_1[0x14];
  param_1[0x14] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_00349ee0(pvVar3);
    free(pvVar3);
  }
  pvVar3 = (void *)param_1[0x13];
  param_1[0x13] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_00349ee0(pvVar3);
    free(pvVar3);
  }
  pvVar3 = (void *)param_1[0x12];
  param_1[0x12] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_00313bf0(pvVar3);
    free(pvVar3);
  }
  plVar4 = (long *)param_1[6];
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    plVar4 = (long *)param_1[4];
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
    plVar4 = (long *)param_1[4];
  }
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
    return;
  }
  return;
}


// ===== 00314fa4  FUN_00314fa4 =====

void FUN_00314fa4(void *param_1)

{
  FUN_00314e94();
  free(param_1);
  return;
}


// ===== 00314fc8  FUN_00314fc8 =====

void FUN_00314fc8(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float *pfVar11;
  void *pvVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  float *pfVar18;
  float *pfVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 (*pauVar22) [16];
  void *pvVar23;
  uint unaff_w21;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  void *local_120;
  void *pvStack_118;
  void *local_110;
  byte local_100;
  undefined7 uStack_ff;
  float *local_f8;
  void *local_f0;
  ulong local_e8;
  undefined1 auStack_e0 [40];
  void *local_b8;
  void *pvStack_b0;
  void *local_a8;
  void *local_a0;
  void *pvStack_98;
  void *local_90;
  uint local_88;
  void *local_80 [2];
  void *local_70;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_b8 = (void *)0x0;
  pvStack_b0 = (void *)0x0;
  local_a8 = (void *)0x0;
  local_e8 = 0x42c8000000000100;
  if (*(undefined8 **)(param_1 + 0x28) == (undefined8 *)0x0) {
    uVar20 = 0;
    uVar16 = 0;
    uVar17 = 0x42c8000000000000;
    uVar21 = 0x100;
    uVar13 = 0;
    if (*(char *)(param_1 + 0xa8) != '\0') goto LAB_00315038;
LAB_003151dc:
    if (*(long *)(param_1 + 0x40) == param_2[1] - *param_2 >> 1) {
      *(ulong *)(*(long *)(param_1 + 0x90) + 0x270) =
           uVar21 & 0xff00 | uVar13 & 0xff | uVar16 & 0xff0000 | uVar20 & 0xff000000 | uVar17;
                    /* try { // try from 00315218 to 00315223 has its CatchHandler @ 0031552c */
      FUN_00314308(&local_100,*(undefined8 *)(param_1 + 0x98),param_2);
                    /* try { // try from 00315228 to 00315233 has its CatchHandler @ 00315518 */
      FUN_00331180(&local_a0,*(undefined8 *)(param_1 + 0x90),&local_100);
      if ((local_88 & 1) != 0) {
        pvStack_118 = pvStack_98;
        local_120 = local_a0;
        local_110 = local_90;
                    /* try { // try from 00315250 to 0031525b has its CatchHandler @ 00315500 */
        FUN_00314500(&local_a0,*(undefined8 *)(param_1 + 0xa0),&local_120);
        if (local_b8 != (void *)0x0) {
          pvStack_b0 = local_b8;
          free(local_b8);
        }
        pvStack_b0 = pvStack_98;
        local_b8 = local_a0;
        local_a8 = local_90;
        if ((local_e8 & 0x100) == 0) {
                    /* try { // try from 0031528c to 003152bb has its CatchHandler @ 003154dc */
          puVar15 = (undefined8 *)FUN_0033429c(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x4d8));
          local_90 = (void *)puVar15[2];
          pvStack_98 = (void *)puVar15[1];
          local_a0 = (void *)*puVar15;
          local_88 = *(uint *)(puVar15 + 3);
          FUN_00315c18(local_80,puVar15 + 4);
          local_50 = *(undefined4 *)(puVar15 + 10);
          local_58 = puVar15[9];
                    /* try { // try from 003152cc to 003152d7 has its CatchHandler @ 003154a4 */
          FUN_003155b4(auStack_e0,&local_a0);
          pvVar12 = local_80[0];
          while (local_70 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
            pvVar23 = *local_70;
            local_80[0] = pvVar12;
            free(local_70);
            pvVar12 = local_80[0];
            local_70 = pvVar23;
          }
          local_80[0] = (void *)0x0;
          if (pvVar12 != (void *)0x0) {
            free(pvVar12);
          }
        }
                    /* try { // try from 0031530c to 00315313 has its CatchHandler @ 003154e0 */
        (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18),auStack_e0);
        if (local_120 != (void *)0x0) {
          pvStack_118 = local_120;
          free(local_120);
        }
        if ((void *)CONCAT71(uStack_ff,local_100) != (void *)0x0) {
          free((void *)CONCAT71(uStack_ff,local_100));
        }
LAB_00315334:
        if (local_b8 != (void *)0x0) {
          pvStack_b0 = local_b8;
          free(local_b8);
        }
        if (*(long *)(lVar4 + 0x28) == local_48) {
          return;
        }
        goto LAB_003155b0;
      }
      if (*(long *)(lVar4 + 0x28) != local_48) goto LAB_003155b0;
                    /* try { // try from 00315454 to 00315457 has its CatchHandler @ 003154e4 */
      uVar14 = FUN_0031493c();
                    /* catch() { ... } // from try @ 0031540c with catch @ 00315458 */
      if (((ulong)local_a0 & 1) != 0) {
        free(local_90);
      }
      if ((local_100 & 1) == 0) {
        if (unaff_w21 != 0) {
LAB_003154b8:
          FUN_00753b60(param_2);
        }
      }
      else {
        free(local_f0);
        if ((unaff_w21 & 1) != 0) goto LAB_003154b8;
      }
      if (local_b8 != (void *)0x0) {
        pvStack_b0 = local_b8;
        free(local_b8);
      }
      if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00755eac(uVar14);
      }
      goto LAB_003155b0;
    }
  }
  else {
                    /* try { // try from 00315018 to 0031501b has its CatchHandler @ 00315568 */
    uVar13 = (**(code **)**(undefined8 **)(param_1 + 0x28))();
    uVar21 = uVar13 & 0xffffffffffffff00;
    uVar16 = uVar13 & 0xffffffffffff0000;
    uVar20 = uVar13 & 0xffffffffff000000;
    uVar17 = uVar13 & 0xffffffff00000000;
    local_e8 = uVar13;
    if (*(char *)(param_1 + 0xa8) == '\0') goto LAB_003151dc;
LAB_00315038:
    lVar1 = *param_2;
    lVar2 = param_2[1];
    local_a0 = (void *)0x0;
    pvStack_98 = (void *)0x0;
    local_90 = (void *)0x0;
    lVar3 = lVar2 - lVar1;
    if (lVar3 == 0) {
LAB_0031506c:
      local_a0 = pvStack_98;
      FUN_003146fc(&local_100,lVar1,lVar2,&local_a0);
                    /* try { // try from 00315084 to 00315093 has its CatchHandler @ 00315558 */
      FUN_00317a24(&local_100,*(undefined8 *)(param_1 + 0xb0),&local_a0,&local_e8);
      pfVar11 = (float *)CONCAT71(uStack_ff,local_100);
      if (pfVar11 != local_f8) {
        uVar13 = (long)local_f8 + (-4 - (long)pfVar11);
        pfVar19 = pfVar11;
        if (0x1b < uVar13) {
          pauVar22 = (undefined1 (*) [16])(pfVar11 + 4);
          uVar13 = (uVar13 >> 2) + 1;
          uVar17 = uVar13 & 0x7ffffffffffffff8;
          pfVar19 = pfVar11 + uVar17;
          uVar16 = uVar17;
          do {
            auVar9 = pauVar22[-1];
            auVar10 = *pauVar22;
            uVar16 = uVar16 - 8;
            auVar26._8_4_ = 0xc7000000;
            auVar26._0_8_ = 0xc7000000c7000000;
            auVar26._12_4_ = 0xc7000000;
            auVar26 = NEON_fcmgt(auVar26,auVar9,4);
            auVar5._8_4_ = 0x46fffe00;
            auVar5._0_8_ = 0x46fffe0046fffe00;
            auVar5._12_4_ = 0x46fffe00;
            auVar28 = NEON_fcmgt(auVar9,auVar5,4);
            auVar30._8_4_ = 0xc7000000;
            auVar30._0_8_ = 0xc7000000c7000000;
            auVar30._12_4_ = 0xc7000000;
            auVar30 = NEON_fcmgt(auVar30,auVar10,4);
            auVar6._8_4_ = 0x46fffe00;
            auVar6._0_8_ = 0x46fffe0046fffe00;
            auVar6._12_4_ = 0x46fffe00;
            auVar32 = NEON_fcmgt(auVar10,auVar6,4);
            auVar33[0] = auVar28[0] & ~auVar26[0];
            auVar33[1] = auVar28[1] & ~auVar26[1];
            auVar33[2] = auVar28[2] & ~auVar26[2];
            auVar33[3] = auVar28[3] & ~auVar26[3];
            auVar33[4] = auVar28[4] & ~auVar26[4];
            auVar33[5] = auVar28[5] & ~auVar26[5];
            auVar33[6] = auVar28[6] & ~auVar26[6];
            auVar33[7] = auVar28[7] & ~auVar26[7];
            auVar33[8] = auVar28[8] & ~auVar26[8];
            auVar33[9] = auVar28[9] & ~auVar26[9];
            auVar33[10] = auVar28[10] & ~auVar26[10];
            auVar33[0xb] = auVar28[0xb] & ~auVar26[0xb];
            auVar33[0xc] = auVar28[0xc] & ~auVar26[0xc];
            auVar33[0xd] = auVar28[0xd] & ~auVar26[0xd];
            auVar33[0xe] = auVar28[0xe] & ~auVar26[0xe];
            auVar33[0xf] = auVar28[0xf] & ~auVar26[0xf];
            auVar27[0] = ~auVar26[0] & ~auVar28[0];
            auVar27[1] = ~auVar26[1] & ~auVar28[1];
            auVar27[2] = ~auVar26[2] & ~auVar28[2];
            auVar27[3] = ~auVar26[3] & ~auVar28[3];
            auVar27[4] = ~auVar26[4] & ~auVar28[4];
            auVar27[5] = ~auVar26[5] & ~auVar28[5];
            auVar27[6] = ~auVar26[6] & ~auVar28[6];
            auVar27[7] = ~auVar26[7] & ~auVar28[7];
            auVar27[8] = ~auVar26[8] & ~auVar28[8];
            auVar27[9] = ~auVar26[9] & ~auVar28[9];
            auVar27[10] = ~auVar26[10] & ~auVar28[10];
            auVar27[0xb] = ~auVar26[0xb] & ~auVar28[0xb];
            auVar27[0xc] = ~auVar26[0xc] & ~auVar28[0xc];
            auVar27[0xd] = ~auVar26[0xd] & ~auVar28[0xd];
            auVar27[0xe] = ~auVar26[0xe] & ~auVar28[0xe];
            auVar27[0xf] = ~auVar26[0xf] & ~auVar28[0xf];
            auVar28._8_4_ = 0xc7000000;
            auVar28._0_8_ = 0xc7000000c7000000;
            auVar28._12_4_ = 0xc7000000;
            auVar7._8_4_ = 0x46fffe00;
            auVar7._0_8_ = 0x46fffe0046fffe00;
            auVar7._12_4_ = 0x46fffe00;
            auVar26 = NEON_bsl(auVar33,auVar7,auVar28,1);
            auVar29[9] = auVar32[9] & ~auVar30[9];
            auVar29[8] = auVar32[8] & ~auVar30[8];
            auVar29[10] = auVar32[10] & ~auVar30[10];
            auVar29[0xb] = auVar32[0xb] & ~auVar30[0xb];
            auVar29[0xc] = auVar32[0xc] & ~auVar30[0xc];
            auVar29[0xd] = auVar32[0xd] & ~auVar30[0xd];
            auVar29[0xe] = auVar32[0xe] & ~auVar30[0xe];
            auVar29[0xf] = auVar32[0xf] & ~auVar30[0xf];
            auVar29[1] = auVar32[1] & ~auVar30[1];
            auVar29[0] = auVar32[0] & ~auVar30[0];
            auVar29[2] = auVar32[2] & ~auVar30[2];
            auVar29[3] = auVar32[3] & ~auVar30[3];
            auVar29[4] = auVar32[4] & ~auVar30[4];
            auVar29[5] = auVar32[5] & ~auVar30[5];
            auVar29[6] = auVar32[6] & ~auVar30[6];
            auVar29[7] = auVar32[7] & ~auVar30[7];
            auVar31[0] = ~auVar30[0] & ~auVar32[0];
            auVar31[1] = ~auVar30[1] & ~auVar32[1];
            auVar31[2] = ~auVar30[2] & ~auVar32[2];
            auVar31[3] = ~auVar30[3] & ~auVar32[3];
            auVar31[4] = ~auVar30[4] & ~auVar32[4];
            auVar31[5] = ~auVar30[5] & ~auVar32[5];
            auVar31[6] = ~auVar30[6] & ~auVar32[6];
            auVar31[7] = ~auVar30[7] & ~auVar32[7];
            auVar31[8] = ~auVar30[8] & ~auVar32[8];
            auVar31[9] = ~auVar30[9] & ~auVar32[9];
            auVar31[10] = ~auVar30[10] & ~auVar32[10];
            auVar31[0xb] = ~auVar30[0xb] & ~auVar32[0xb];
            auVar31[0xc] = ~auVar30[0xc] & ~auVar32[0xc];
            auVar31[0xd] = ~auVar30[0xd] & ~auVar32[0xd];
            auVar31[0xe] = ~auVar30[0xe] & ~auVar32[0xe];
            auVar31[0xf] = ~auVar30[0xf] & ~auVar32[0xf];
            auVar32._8_4_ = 0xc7000000;
            auVar32._0_8_ = 0xc7000000c7000000;
            auVar32._12_4_ = 0xc7000000;
            auVar8._8_4_ = 0x46fffe00;
            auVar8._0_8_ = 0x46fffe0046fffe00;
            auVar8._12_4_ = 0x46fffe00;
            auVar30 = NEON_bsl(auVar29,auVar8,auVar32,1);
            auVar26 = NEON_bif(auVar9,auVar26,auVar27,1);
            auVar30 = NEON_bif(auVar10,auVar30,auVar31,1);
            *(long *)(pauVar22[-1] + 8) = auVar26._8_8_;
            *(long *)pauVar22[-1] = auVar26._0_8_;
            *(long *)(*pauVar22 + 8) = auVar30._8_8_;
            *(long *)*pauVar22 = auVar30._0_8_;
            pauVar22 = pauVar22 + 2;
          } while (uVar16 != 0);
          if (uVar13 == uVar17) goto LAB_00315138;
        }
        do {
          fVar25 = *pfVar19;
          fVar24 = -32768.0;
          if ((-32768.0 <= fVar25) &&
             (fVar24 = 32767.0, fVar25 == 32767.0 || fVar25 < 32767.0 != NAN(fVar25))) {
            fVar24 = fVar25;
          }
          pfVar18 = pfVar19 + 1;
          *pfVar19 = fVar24;
          pfVar19 = pfVar18;
        } while (pfVar18 != local_f8);
      }
LAB_00315138:
                    /* try { // try from 00315138 to 00315143 has its CatchHandler @ 0031553c */
      FUN_00314824(&local_120,pfVar11,local_f8,&local_b8);
      if ((void *)CONCAT71(uStack_ff,local_100) != (void *)0x0) {
        free((void *)CONCAT71(uStack_ff,local_100));
      }
      if (local_a0 != (void *)0x0) {
        pvStack_98 = local_a0;
        free(local_a0);
      }
      if ((local_e8 & 0x100) == 0) {
                    /* try { // try from 00315170 to 00315177 has its CatchHandler @ 003154d4 */
        FUN_00318fa8(&local_a0,*(undefined8 *)(param_1 + 0xb0));
                    /* try { // try from 00315178 to 00315183 has its CatchHandler @ 003154c4 */
        FUN_003155b4(auStack_e0,&local_a0);
        pvVar12 = local_80[0];
        while (local_70 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
          pvVar23 = *local_70;
          local_80[0] = pvVar12;
          free(local_70);
          pvVar12 = local_80[0];
          local_70 = pvVar23;
        }
        local_80[0] = (void *)0x0;
        if (pvVar12 != (void *)0x0) {
          free(pvVar12);
        }
      }
                    /* try { // try from 003151b8 to 003151bf has its CatchHandler @ 00315534 */
      (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18),auStack_e0);
      goto LAB_00315334;
    }
    if ((ulong)(lVar3 >> 1) >> 0x3e == 0) {
                    /* try { // try from 0031505c to 0031507f has its CatchHandler @ 00315570 */
      pvStack_98 = (void *)FUN_00759c3c(lVar3 * 2);
      local_90 = (void *)((long)pvStack_98 + (lVar3 >> 1) * 4);
      goto LAB_0031506c;
    }
    if (*(long *)(lVar4 + 0x28) != local_48) goto LAB_003155b0;
                    /* try { // try from 003153b8 to 003153bf has its CatchHandler @ 00315570 */
    FUN_002febf0(&local_a0);
  }
  uVar14 = FUN_00753a74(0x20);
                    /* try { // try from 003153d0 to 003153db has its CatchHandler @ 003154b4 */
  FUN_00714ba0(&local_100,*(undefined8 *)(param_1 + 0x40));
                    /* try { // try from 003153dc to 003153ef has its CatchHandler @ 0031548c */
  puVar15 = (undefined8 *)
            FUN_00713170(&local_100,0,
                         "ERROR input dataSize or output dataSize is wrong \n input size must be ");
  local_90 = (void *)puVar15[2];
  pvStack_98 = (void *)puVar15[1];
  local_a0 = (void *)*puVar15;
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = 0;
                    /* try { // try from 0031540c to 00315443 has its CatchHandler @ 00315458 */
  FUN_00374ee0(uVar14,&local_a0);
  if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar14,PTR_PTR_007a1338,PTR_FUN_007a11f8);
  }
LAB_003155b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003155b4  FUN_003155b4 =====

void FUN_003155b4(undefined1 *param_1,double *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 uVar5;
  double dVar6;
  undefined4 local_58;
  undefined1 uStack_51;
  undefined4 *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_58 = 0;
  *param_1 = (char)(int)*param_2;
  param_1[1] = (char)(int)param_2[1];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 3);
  puVar3 = PTR_DAT_007a10e8;
  local_50 = &local_58;
  lVar4 = FUN_00315718(param_2 + 4,&local_58,PTR_DAT_007a10e8,&local_50,&uStack_51);
  local_58 = 1;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar4 + 0x14);
  local_50 = &local_58;
  lVar4 = FUN_00315718(param_2 + 4,&local_58,puVar3,&local_50,&uStack_51);
  uVar5 = 2;
  local_58 = 2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar4 + 0x14);
  local_50 = &local_58;
  lVar4 = FUN_00315718(param_2 + 4,&local_58,puVar3,&local_50,&uStack_51);
  local_58 = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(lVar4 + 0x14);
  local_50 = &local_58;
  lVar4 = FUN_00315718(param_2 + 4,&local_58,puVar3,&local_50,&uStack_51);
  uVar1 = *(undefined4 *)(lVar4 + 0x14);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  dVar6 = param_2[2];
  if (dVar6 != -1.0 && dVar6 < -1.0 == NAN(dVar6)) {
    if (dVar6 != 0.5 && dVar6 < 0.5 == NAN(dVar6)) {
      uVar5 = 1;
    }
    *(undefined4 *)(param_1 + 4) = uVar5;
  }
  *(double *)(param_1 + 0x1c) = param_2[9];
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 10);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00315718  FUN_00315718 =====

undefined1  [16] FUN_00315718(long *param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x24;
  undefined2 uVar10;
  undefined8 uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  uVar8 = param_1[1];
  iVar1 = *param_2;
  uVar9 = (ulong)iVar1;
  if (uVar8 != 0) {
    uVar11 = NEON_cnt(uVar8,1);
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar5 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar5 < 2) {
      unaff_x24 = uVar8 - 1 & uVar9;
    }
    else {
      unaff_x24 = uVar9;
      if (uVar8 <= uVar9) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar9 / uVar8;
        }
        unaff_x24 = uVar9 - uVar6 * uVar8;
      }
    }
    plVar3 = *(long **)(*param_1 + unaff_x24 * 8);
    if ((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar3[1] == uVar9) {
            if ((int)plVar3[2] == iVar1) {
LAB_0031580c:
              auVar13._8_8_ = 0;
              auVar13._0_8_ = plVar3;
              return auVar13;
            }
          }
          else if ((plVar3[1] & uVar8 - 1) != unaff_x24) break;
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar3[1];
          if (uVar5 == uVar9) {
            if ((int)plVar3[2] == iVar1) goto LAB_0031580c;
          }
          else {
            if (uVar8 <= uVar5) {
              uVar6 = 0;
              if (uVar8 != 0) {
                uVar6 = uVar5 / uVar8;
              }
              uVar5 = uVar5 - uVar6 * uVar8;
            }
            if (uVar5 != unaff_x24) break;
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
    }
  }
  auVar14._0_8_ = (long *)FUN_00759c3c(0x18);
  lVar2 = param_1[3];
  puVar4 = (undefined4 *)*param_4;
  fVar12 = *(float *)(param_1 + 4);
  *auVar14._0_8_ = 0;
  auVar14._0_8_[1] = uVar9;
  *(undefined4 *)(auVar14._0_8_ + 2) = *puVar4;
  *(undefined4 *)((long)auVar14._0_8_ + 0x14) = 0;
  if ((uVar8 == 0) || (fVar12 * (float)uVar8 < (float)(lVar2 + 1))) {
    if (uVar8 < 3) {
      uVar5 = 1;
    }
    else {
      uVar5 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar5 = uVar5 | uVar8 << 1;
    uVar6 = (ulong)((float)(lVar2 + 1) / fVar12);
    if (uVar5 <= uVar6) {
      uVar5 = uVar6;
    }
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
                    /* try { // try from 003158cc to 0031594f has its CatchHandler @ 00315a2c */
      uVar5 = FUN_00711ce0(uVar5);
      uVar8 = param_1[1];
    }
    if (uVar8 < uVar5) {
LAB_003158e4:
      FUN_00315a40(param_1,uVar5);
    }
    else if (uVar5 < uVar8) {
      uVar6 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar8 < 3) {
LAB_0031594c:
        uVar6 = FUN_00711ce0();
      }
      else {
        uVar11 = NEON_cnt(uVar8,1);
        uVar10 = NEON_uaddlv(uVar11,1);
        if (1 < (CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff)) goto LAB_0031594c;
        if (1 < uVar6) {
          uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
        }
      }
      if (uVar5 <= uVar6) {
        uVar5 = uVar6;
      }
      if (uVar5 < uVar8) goto LAB_003158e4;
    }
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar9;
      lVar2 = *param_1;
      plVar3 = *(long **)(lVar2 + unaff_x24 * 8);
      goto joined_r0x003159c8;
    }
    if (uVar9 < uVar8) {
      lVar2 = *param_1;
      plVar3 = *(long **)(lVar2 + uVar9 * 8);
      unaff_x24 = uVar9;
      goto joined_r0x003159c8;
    }
    uVar5 = 0;
    if (uVar8 != 0) {
      uVar5 = uVar9 / uVar8;
    }
    unaff_x24 = uVar9 - uVar5 * uVar8;
    lVar2 = *param_1;
    plVar3 = *(long **)(lVar2 + unaff_x24 * 8);
    if (plVar3 == (long *)0x0) goto LAB_00315980;
LAB_00315874:
    *auVar14._0_8_ = *plVar3;
  }
  else {
    lVar2 = *param_1;
    plVar3 = *(long **)(lVar2 + unaff_x24 * 8);
joined_r0x003159c8:
    if (plVar3 != (long *)0x0) goto LAB_00315874;
LAB_00315980:
    plVar3 = param_1 + 2;
    lVar7 = *plVar3;
    *plVar3 = (long)auVar14._0_8_;
    *auVar14._0_8_ = lVar7;
    *(long **)(lVar2 + unaff_x24 * 8) = plVar3;
    if (*auVar14._0_8_ == 0) goto LAB_00315a04;
    uVar9 = *(ulong *)(*auVar14._0_8_ + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar9 = uVar9 & uVar8 - 1;
    }
    else if (uVar8 <= uVar9) {
      uVar5 = 0;
      if (uVar8 != 0) {
        uVar5 = uVar9 / uVar8;
      }
      uVar9 = uVar9 - uVar5 * uVar8;
    }
    plVar3 = (long *)(*param_1 + uVar9 * 8);
  }
  *plVar3 = (long)auVar14._0_8_;
LAB_00315a04:
  param_1[3] = param_1[3] + 1;
  auVar14._8_8_ = 1;
  return auVar14;
}


// ===== 00315a40  FUN_00315a40 =====

void FUN_00315a40(long *param_1,ulong param_2)

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
LAB_00315bc4:
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
          goto LAB_00315bc4;
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


// ===== 00315c18  FUN_00315c18 =====

void FUN_00315c18(undefined8 *param_1,long param_2)

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
LAB_00315c84:
      if (bVar1) goto LAB_00315cfc;
      uVar2 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar5 < 3) {
LAB_00315cdc:
        uVar2 = FUN_00711ce0();
      }
      else {
        uVar7 = NEON_cnt(uVar5,1);
        uVar6 = NEON_uaddlv(uVar7,1);
        if (1 < (CONCAT62((int6)((ulong)uVar7 >> 0x10),uVar6) & 0xffffffff)) goto LAB_00315cdc;
        if (1 < uVar2) {
          uVar2 = 1L << (-LZCOUNT(uVar2 - 1) & 0x3fU);
        }
      }
      if (uVar4 <= uVar2) {
        uVar4 = uVar2;
      }
      if (uVar5 <= uVar4) goto LAB_00315cfc;
    }
  }
  else {
                    /* try { // try from 00315c6c to 00315cfb has its CatchHandler @ 00315d2c */
    uVar4 = FUN_00711ce0(uVar4);
    uVar5 = param_1[1];
    bVar1 = uVar5 <= uVar4;
    if (uVar4 <= uVar5) goto LAB_00315c84;
  }
  FUN_00315a40(param_1,uVar4);
LAB_00315cfc:
  for (plVar3 = *(long **)(param_2 + 0x10); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
                    /* try { // try from 00315d04 to 00315d13 has its CatchHandler @ 00315d40 */
    FUN_00315d54(param_1,plVar3 + 2,plVar3 + 2);
  }
  return;
}


// ===== 00315d54  FUN_00315d54 =====

undefined1  [16] FUN_00315d54(long *param_1,int *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x24;
  undefined2 uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  uVar7 = param_1[1];
  iVar1 = *param_2;
  uVar8 = (ulong)iVar1;
  if (uVar7 != 0) {
    uVar10 = NEON_cnt(uVar7,1);
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar4 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    if (uVar4 < 2) {
      unaff_x24 = uVar7 - 1 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar7 <= uVar8) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar8 / uVar7;
        }
        unaff_x24 = uVar8 - uVar5 * uVar7;
      }
    }
    plVar3 = *(long **)(*param_1 + unaff_x24 * 8);
    if ((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar3[1] == uVar8) {
            if ((int)plVar3[2] == iVar1) {
LAB_00315e48:
              auVar12._8_8_ = 0;
              auVar12._0_8_ = plVar3;
              return auVar12;
            }
          }
          else if ((plVar3[1] & uVar7 - 1) != unaff_x24) break;
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar3[1];
          if (uVar4 == uVar8) {
            if ((int)plVar3[2] == iVar1) goto LAB_00315e48;
          }
          else {
            if (uVar7 <= uVar4) {
              uVar5 = 0;
              if (uVar7 != 0) {
                uVar5 = uVar4 / uVar7;
              }
              uVar4 = uVar4 - uVar5 * uVar7;
            }
            if (uVar4 != unaff_x24) break;
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
    }
  }
  auVar13._0_8_ = (long *)FUN_00759c3c(0x18);
  lVar2 = param_1[3];
  fVar11 = *(float *)(param_1 + 4);
  *auVar13._0_8_ = 0;
  auVar13._0_8_[1] = uVar8;
  auVar13._0_8_[2] = *param_3;
  if ((uVar7 == 0) || (fVar11 * (float)uVar7 < (float)(lVar2 + 1))) {
    if (uVar7 < 3) {
      uVar4 = 1;
    }
    else {
      uVar4 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar4 = uVar4 | uVar7 << 1;
    uVar5 = (ulong)((float)(lVar2 + 1) / fVar11);
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    if (uVar4 - 1 == 0) {
      uVar4 = 2;
    }
    else if ((uVar4 & uVar4 - 1) != 0) {
                    /* try { // try from 00315f04 to 00315f87 has its CatchHandler @ 00316064 */
      uVar4 = FUN_00711ce0(uVar4);
      uVar7 = param_1[1];
    }
    if (uVar7 < uVar4) {
LAB_00315f1c:
      FUN_00315a40(param_1,uVar4);
    }
    else if (uVar4 < uVar7) {
      uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar7 < 3) {
LAB_00315f84:
        uVar5 = FUN_00711ce0();
      }
      else {
        uVar10 = NEON_cnt(uVar7,1);
        uVar9 = NEON_uaddlv(uVar10,1);
        if (1 < (CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff)) goto LAB_00315f84;
        if (1 < uVar5) {
          uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
        }
      }
      if (uVar4 <= uVar5) {
        uVar4 = uVar5;
      }
      if (uVar4 < uVar7) goto LAB_00315f1c;
    }
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar8;
      lVar2 = *param_1;
      plVar3 = *(long **)(lVar2 + unaff_x24 * 8);
      goto joined_r0x00316000;
    }
    if (uVar8 < uVar7) {
      lVar2 = *param_1;
      plVar3 = *(long **)(lVar2 + uVar8 * 8);
      unaff_x24 = uVar8;
      goto joined_r0x00316000;
    }
    uVar4 = 0;
    if (uVar7 != 0) {
      uVar4 = uVar8 / uVar7;
    }
    unaff_x24 = uVar8 - uVar4 * uVar7;
    lVar2 = *param_1;
    plVar3 = *(long **)(lVar2 + unaff_x24 * 8);
    if (plVar3 == (long *)0x0) goto LAB_00315fb8;
LAB_00315eac:
    *auVar13._0_8_ = *plVar3;
  }
  else {
    lVar2 = *param_1;
    plVar3 = *(long **)(lVar2 + unaff_x24 * 8);
joined_r0x00316000:
    if (plVar3 != (long *)0x0) goto LAB_00315eac;
LAB_00315fb8:
    plVar3 = param_1 + 2;
    lVar6 = *plVar3;
    *plVar3 = (long)auVar13._0_8_;
    *auVar13._0_8_ = lVar6;
    *(long **)(lVar2 + unaff_x24 * 8) = plVar3;
    if (*auVar13._0_8_ == 0) goto LAB_0031603c;
    uVar8 = *(ulong *)(*auVar13._0_8_ + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar8 = uVar8 & uVar7 - 1;
    }
    else if (uVar7 <= uVar8) {
      uVar4 = 0;
      if (uVar7 != 0) {
        uVar4 = uVar8 / uVar7;
      }
      uVar8 = uVar8 - uVar4 * uVar7;
    }
    plVar3 = (long *)(*param_1 + uVar8 * 8);
  }
  *plVar3 = (long)auVar13._0_8_;
LAB_0031603c:
  param_1[3] = param_1[3] + 1;
  auVar13._8_8_ = 1;
  return auVar13;
}


// ===== 00316078  FUN_00316078 =====

void FUN_00316078(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 0031609c  FUN_0031609c =====

void FUN_0031609c(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003160ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 003160b4  FUN_003160b4 =====

long FUN_003160b4(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP34_007a1390) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 003160d0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 003160d4  FUN_003160d4 =====

void FUN_003160d4(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_007a1370;
  pvVar3 = (void *)param_1[0x16];
  param_1[0x16] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (pvVar3 != (void *)0x0) {
    FUN_00313768(pvVar3);
    free(pvVar3);
  }
  pvVar3 = (void *)param_1[0x14];
  param_1[0x14] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_00349ee0(pvVar3);
    free(pvVar3);
  }
  pvVar3 = (void *)param_1[0x13];
  param_1[0x13] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_00349ee0(pvVar3);
    free(pvVar3);
  }
  pvVar3 = (void *)param_1[0x12];
  param_1[0x12] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_00313bf0(pvVar3);
    free(pvVar3);
  }
  plVar4 = (long *)param_1[6];
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    plVar4 = (long *)param_1[4];
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
    plVar4 = (long *)param_1[4];
  }
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
    return;
  }
  return;
}


// ===== 003161e4  FUN_003161e4 =====

void FUN_003161e4(void *param_1)

{
  FUN_003160d4();
  free(param_1);
  return;
}


// ===== 00316208  FUN_00316208 =====

void FUN_00316208(long param_1,long *param_2)

{
  void *pvVar1;
  long lVar2;
  size_t __n;
  long lVar3;
  ulong uVar4;
  float *pfVar5;
  undefined8 uVar6;
  undefined1 (*pauVar7) [16];
  ulong uVar8;
  ulong uVar9;
  float *pfVar10;
  ulong uVar11;
  ulong uVar12;
  float *pfVar13;
  void *pvVar14;
  uint unaff_w21;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float *local_130;
  float *pfStack_128;
  float *local_120;
  byte local_110;
  undefined7 uStack_10f;
  float *local_108;
  float *pfStack_100;
  ulong local_f8;
  undefined1 auStack_f0 [40];
  float *local_c8;
  float *pfStack_c0;
  float *pfStack_b8;
  byte local_b0;
  undefined7 uStack_af;
  float *pfStack_a8;
  float *local_a0;
  uint local_98;
  void *local_90 [2];
  void *local_80;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_c8 = (float *)0x0;
  pfStack_c0 = (float *)0x0;
  pfStack_b8 = (float *)0x0;
  local_f8 = 0x42c8000000000100;
  if (*(undefined8 **)(param_1 + 0x28) == (undefined8 *)0x0) {
    uVar11 = 0;
    uVar8 = 0;
    uVar9 = 0x42c8000000000000;
    uVar12 = 0x100;
    uVar4 = 0;
    if (*(char *)(param_1 + 0xa8) != '\0') goto LAB_0031627c;
LAB_00316510:
    if (*(long *)(param_1 + 0x40) == param_2[1] - *param_2 >> 2) {
      *(ulong *)(*(long *)(param_1 + 0x90) + 0x270) =
           uVar12 & 0xff00 | uVar4 & 0xff | uVar8 & 0xff0000 | uVar11 & 0xff000000 | uVar9;
                    /* try { // try from 0031654c to 00316557 has its CatchHandler @ 00316828 */
      FUN_003149ec(&local_110,*(undefined8 *)(param_1 + 0x98),param_2);
                    /* try { // try from 0031655c to 00316567 has its CatchHandler @ 00316814 */
      FUN_00331180(&local_b0,*(undefined8 *)(param_1 + 0x90),&local_110);
      if ((local_98 & 1) != 0) {
        local_130 = (float *)CONCAT71(uStack_af,local_b0);
        pfStack_128 = pfStack_a8;
        local_120 = local_a0;
                    /* try { // try from 00316584 to 0031658f has its CatchHandler @ 003167fc */
        FUN_00314c38(&local_b0,*(undefined8 *)(param_1 + 0xa0),&local_130);
        if (local_c8 != (float *)0x0) {
          pfStack_c0 = local_c8;
          free(local_c8);
        }
        local_c8 = (float *)CONCAT71(uStack_af,local_b0);
        pfStack_c0 = pfStack_a8;
        pfStack_b8 = local_a0;
        if ((local_f8 & 0x100) == 0) {
                    /* try { // try from 003165c0 to 003165ef has its CatchHandler @ 003167d8 */
          pauVar7 = (undefined1 (*) [16])
                    FUN_0033429c(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x4d8));
          local_a0 = *(float **)pauVar7[1];
          auVar16 = *pauVar7;
          local_98 = *(uint *)(pauVar7[1] + 8);
          pfStack_a8 = auVar16._8_8_;
          local_b0 = auVar16[0];
          uStack_af = auVar16._1_7_;
          FUN_00315c18(local_90,pauVar7 + 2);
          local_60 = *(undefined4 *)pauVar7[5];
          local_68 = *(undefined8 *)(pauVar7[4] + 8);
                    /* try { // try from 00316600 to 0031660b has its CatchHandler @ 003167a0 */
          FUN_00316888(auStack_f0,&local_b0);
          pvVar1 = local_90[0];
          while (local_80 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
            pvVar14 = *local_80;
            local_90[0] = pvVar1;
            free(local_80);
            pvVar1 = local_90[0];
            local_80 = pvVar14;
          }
          local_90[0] = (void *)0x0;
          if (pvVar1 != (void *)0x0) {
            free(pvVar1);
          }
        }
                    /* try { // try from 00316640 to 00316647 has its CatchHandler @ 003167dc */
        (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18),auStack_f0);
        if (local_130 != (float *)0x0) {
          pfStack_128 = local_130;
          free(local_130);
        }
        if ((void *)CONCAT71(uStack_10f,local_110) != (void *)0x0) {
          free((void *)CONCAT71(uStack_10f,local_110));
        }
LAB_00316668:
        if (local_c8 != (float *)0x0) {
          pfStack_c0 = local_c8;
          free(local_c8);
        }
        if (*(long *)(lVar3 + 0x28) == local_58) {
          return;
        }
        goto LAB_00316884;
      }
      if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_00316884;
                    /* try { // try from 00316750 to 00316753 has its CatchHandler @ 003167e0 */
      uVar6 = FUN_0031493c();
                    /* catch() { ... } // from try @ 00316708 with catch @ 00316754 */
      if ((local_b0 & 1) != 0) {
        free(local_a0);
      }
      if ((local_110 & 1) == 0) {
        if (unaff_w21 != 0) {
LAB_003167b4:
          FUN_00753b60(param_2);
        }
      }
      else {
        free(pfStack_100);
        if ((unaff_w21 & 1) != 0) goto LAB_003167b4;
      }
      if (local_c8 != (float *)0x0) {
        pfStack_c0 = local_c8;
        free(local_c8);
      }
      if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00755eac(uVar6);
      }
      goto LAB_00316884;
    }
  }
  else {
                    /* try { // try from 0031625c to 0031625f has its CatchHandler @ 0031683c */
    uVar4 = (**(code **)**(undefined8 **)(param_1 + 0x28))();
    uVar12 = uVar4 & 0xffffffffffffff00;
    uVar8 = uVar4 & 0xffffffffffff0000;
    uVar11 = uVar4 & 0xffffffffff000000;
    uVar9 = uVar4 & 0xffffffff00000000;
    local_f8 = uVar4;
    if (*(char *)(param_1 + 0xa8) == '\0') goto LAB_00316510;
LAB_0031627c:
    pvVar1 = (void *)*param_2;
    lVar2 = param_2[1];
    local_b0 = 0;
    uStack_af = 0;
    pfStack_a8 = (float *)0x0;
    local_a0 = (float *)0x0;
    __n = lVar2 - (long)pvVar1;
    if (__n == 0) {
LAB_0031632c:
                    /* try { // try from 00316330 to 0031633f has its CatchHandler @ 00316838 */
      FUN_00317a24(&local_110,*(undefined8 *)(param_1 + 0xb0),&local_b0,&local_f8);
      if (local_c8 != (float *)0x0) {
        pfStack_c0 = local_c8;
        free(local_c8);
      }
      local_c8 = (float *)CONCAT71(uStack_10f,local_110);
      pfStack_b8 = pfStack_100;
      pfStack_c0 = local_108;
      if (local_c8 != local_108) {
        uVar4 = (long)local_108 + (-4 - (long)local_c8);
        pfVar10 = local_c8;
        if (uVar4 < 0x1c) {
LAB_003163c4:
          do {
            pfVar5 = pfVar10 + 1;
            *pfVar10 = *pfVar10 * 3.0517578e-05;
            pfVar10 = pfVar5;
          } while (pfVar5 != local_108);
        }
        else {
          uVar8 = (uVar4 >> 2) + 1;
          pfVar5 = local_c8 + 4;
          uVar11 = uVar8 & 0x7ffffffffffffff8;
          pfVar10 = local_c8 + uVar11;
          uVar9 = uVar11;
          do {
            fVar15 = *pfVar5;
            fVar17 = pfVar5[1];
            uVar9 = uVar9 - 8;
            *pfVar5 = pfVar5[-2] * 3.0517578e-05;
            pfVar5[1] = pfVar5[-1] * 3.0517578e-05;
            pfVar5[-4] = pfVar5[-4] * 3.0517578e-05;
            pfVar5[-3] = pfVar5[-3] * 3.0517578e-05;
            pfVar5[4] = pfVar5[2] * 3.0517578e-05;
            pfVar5[5] = pfVar5[3] * 3.0517578e-05;
            *pfVar5 = fVar15 * 3.0517578e-05;
            pfVar5[1] = fVar17 * 3.0517578e-05;
            pfVar5 = pfVar5 + 8;
          } while (uVar9 != 0);
          if (uVar8 != uVar11) goto LAB_003163c4;
        }
        pfVar10 = local_c8;
        if (0x1b < uVar4) {
          uVar4 = (uVar4 >> 2) + 1;
          auVar16 = NEON_fmov(0xbf800000,4);
          auVar18 = NEON_fmov(0x3f800000,4);
          uVar9 = uVar4 & 0x7ffffffffffffff8;
          pauVar7 = (undefined1 (*) [16])(local_c8 + 4);
          uVar8 = uVar9;
          do {
            auVar19 = pauVar7[-1];
            auVar20 = *pauVar7;
            uVar8 = uVar8 - 8;
            auVar21 = NEON_fcmgt(auVar16,auVar19,4);
            auVar23 = NEON_fcmgt(auVar19,auVar18,4);
            auVar24 = NEON_fcmgt(auVar16,auVar20,4);
            auVar25 = NEON_fcmgt(auVar20,auVar18,4);
            auVar26[0] = auVar23[0] & ~auVar21[0];
            auVar26[1] = auVar23[1] & ~auVar21[1];
            auVar26[2] = auVar23[2] & ~auVar21[2];
            auVar26[3] = auVar23[3] & ~auVar21[3];
            auVar26[4] = auVar23[4] & ~auVar21[4];
            auVar26[5] = auVar23[5] & ~auVar21[5];
            auVar26[6] = auVar23[6] & ~auVar21[6];
            auVar26[7] = auVar23[7] & ~auVar21[7];
            auVar26[8] = auVar23[8] & ~auVar21[8];
            auVar26[9] = auVar23[9] & ~auVar21[9];
            auVar26[10] = auVar23[10] & ~auVar21[10];
            auVar26[0xb] = auVar23[0xb] & ~auVar21[0xb];
            auVar26[0xc] = auVar23[0xc] & ~auVar21[0xc];
            auVar26[0xd] = auVar23[0xd] & ~auVar21[0xd];
            auVar26[0xe] = auVar23[0xe] & ~auVar21[0xe];
            auVar26[0xf] = auVar23[0xf] & ~auVar21[0xf];
            auVar22[0] = ~auVar21[0] & ~auVar23[0];
            auVar22[1] = ~auVar21[1] & ~auVar23[1];
            auVar22[2] = ~auVar21[2] & ~auVar23[2];
            auVar22[3] = ~auVar21[3] & ~auVar23[3];
            auVar22[4] = ~auVar21[4] & ~auVar23[4];
            auVar22[5] = ~auVar21[5] & ~auVar23[5];
            auVar22[6] = ~auVar21[6] & ~auVar23[6];
            auVar22[7] = ~auVar21[7] & ~auVar23[7];
            auVar22[8] = ~auVar21[8] & ~auVar23[8];
            auVar22[9] = ~auVar21[9] & ~auVar23[9];
            auVar22[10] = ~auVar21[10] & ~auVar23[10];
            auVar22[0xb] = ~auVar21[0xb] & ~auVar23[0xb];
            auVar22[0xc] = ~auVar21[0xc] & ~auVar23[0xc];
            auVar22[0xd] = ~auVar21[0xd] & ~auVar23[0xd];
            auVar22[0xe] = ~auVar21[0xe] & ~auVar23[0xe];
            auVar22[0xf] = ~auVar21[0xf] & ~auVar23[0xf];
            auVar26 = NEON_bsl(auVar26,auVar18,auVar16,1);
            auVar21[9] = auVar25[9] & ~auVar24[9];
            auVar21[8] = auVar25[8] & ~auVar24[8];
            auVar21[10] = auVar25[10] & ~auVar24[10];
            auVar21[0xb] = auVar25[0xb] & ~auVar24[0xb];
            auVar21[0xc] = auVar25[0xc] & ~auVar24[0xc];
            auVar21[0xd] = auVar25[0xd] & ~auVar24[0xd];
            auVar21[0xe] = auVar25[0xe] & ~auVar24[0xe];
            auVar21[0xf] = auVar25[0xf] & ~auVar24[0xf];
            auVar21[1] = auVar25[1] & ~auVar24[1];
            auVar21[0] = auVar25[0] & ~auVar24[0];
            auVar21[2] = auVar25[2] & ~auVar24[2];
            auVar21[3] = auVar25[3] & ~auVar24[3];
            auVar21[4] = auVar25[4] & ~auVar24[4];
            auVar21[5] = auVar25[5] & ~auVar24[5];
            auVar21[6] = auVar25[6] & ~auVar24[6];
            auVar21[7] = auVar25[7] & ~auVar24[7];
            auVar23[0] = ~auVar24[0] & ~auVar25[0];
            auVar23[1] = ~auVar24[1] & ~auVar25[1];
            auVar23[2] = ~auVar24[2] & ~auVar25[2];
            auVar23[3] = ~auVar24[3] & ~auVar25[3];
            auVar23[4] = ~auVar24[4] & ~auVar25[4];
            auVar23[5] = ~auVar24[5] & ~auVar25[5];
            auVar23[6] = ~auVar24[6] & ~auVar25[6];
            auVar23[7] = ~auVar24[7] & ~auVar25[7];
            auVar23[8] = ~auVar24[8] & ~auVar25[8];
            auVar23[9] = ~auVar24[9] & ~auVar25[9];
            auVar23[10] = ~auVar24[10] & ~auVar25[10];
            auVar23[0xb] = ~auVar24[0xb] & ~auVar25[0xb];
            auVar23[0xc] = ~auVar24[0xc] & ~auVar25[0xc];
            auVar23[0xd] = ~auVar24[0xd] & ~auVar25[0xd];
            auVar23[0xe] = ~auVar24[0xe] & ~auVar25[0xe];
            auVar23[0xf] = ~auVar24[0xf] & ~auVar25[0xf];
            auVar21 = NEON_bsl(auVar21,auVar18,auVar16,1);
            auVar19 = NEON_bif(auVar19,auVar26,auVar22,1);
            auVar20 = NEON_bif(auVar20,auVar21,auVar23,1);
            *(long *)(pauVar7[-1] + 8) = auVar19._8_8_;
            *(long *)pauVar7[-1] = auVar19._0_8_;
            *(long *)(*pauVar7 + 8) = auVar20._8_8_;
            *(long *)*pauVar7 = auVar20._0_8_;
            pauVar7 = pauVar7 + 2;
          } while (uVar8 != 0);
          pfVar10 = local_c8 + uVar9;
          if (uVar4 == uVar9) goto LAB_00316458;
        }
        do {
          fVar17 = *pfVar10;
          fVar15 = -1.0;
          if ((-1.0 <= fVar17) && (fVar15 = 1.0, fVar17 == 1.0 || fVar17 < 1.0 != NAN(fVar17))) {
            fVar15 = fVar17;
          }
          pfVar5 = pfVar10 + 1;
          *pfVar10 = fVar15;
          pfVar10 = pfVar5;
        } while (pfVar5 != local_108);
      }
LAB_00316458:
      pfVar10 = (float *)CONCAT71(uStack_af,local_b0);
      if (pfVar10 != (float *)0x0) {
        pfStack_a8 = pfVar10;
        free(pfVar10);
      }
      if ((local_f8 & 0x100) == 0) {
                    /* try { // try from 00316474 to 0031647b has its CatchHandler @ 003167d0 */
        FUN_00318fa8(&local_b0,*(undefined8 *)(param_1 + 0xb0));
                    /* try { // try from 0031647c to 00316487 has its CatchHandler @ 003167c0 */
        FUN_00316888(auStack_f0,&local_b0);
        pvVar1 = local_90[0];
        while (local_80 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
          pvVar14 = *local_80;
          local_90[0] = pvVar1;
          free(local_80);
          pvVar1 = local_90[0];
          local_80 = pvVar14;
        }
        local_90[0] = (void *)0x0;
        if (pvVar1 != (void *)0x0) {
          free(pvVar1);
        }
      }
                    /* try { // try from 003164bc to 003164c3 has its CatchHandler @ 00316830 */
      (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18),auStack_f0);
      goto LAB_00316668;
    }
    if (-1 < (long)__n) {
                    /* try { // try from 00316294 to 0031629b has its CatchHandler @ 00316844 */
      pfVar5 = (float *)FUN_00759c3c(__n);
      pfVar10 = (float *)((long)pfVar5 + __n);
      local_b0 = (byte)pfVar5;
      uStack_af = (undefined7)((ulong)pfVar5 >> 8);
      local_a0 = pfVar10;
      memcpy(pfVar5,pvVar1,__n);
      lVar2 = lVar2 - (long)pvVar1;
      pfStack_a8 = pfVar10;
      if (lVar2 != 0) {
        uVar4 = lVar2 - 4;
        if (0x1b < uVar4) {
          pfVar13 = pfVar5 + 4;
          uVar4 = (uVar4 >> 2) + 1;
          uVar9 = uVar4 & 0x7ffffffffffffff8;
          pfVar5 = pfVar5 + uVar9;
          uVar8 = uVar9;
          do {
            fVar15 = *pfVar13;
            fVar17 = pfVar13[1];
            uVar8 = uVar8 - 8;
            *pfVar13 = pfVar13[-2] * 32768.0;
            pfVar13[1] = pfVar13[-1] * 32768.0;
            pfVar13[-4] = pfVar13[-4] * 32768.0;
            pfVar13[-3] = pfVar13[-3] * 32768.0;
            pfVar13[4] = pfVar13[2] * 32768.0;
            pfVar13[5] = pfVar13[3] * 32768.0;
            *pfVar13 = fVar15 * 32768.0;
            pfVar13[1] = fVar17 * 32768.0;
            pfVar13 = pfVar13 + 8;
          } while (uVar8 != 0);
          if (uVar4 == uVar9) goto LAB_0031632c;
        }
        do {
          pfVar13 = pfVar5 + 1;
          *pfVar5 = *pfVar5 * 32768.0;
          pfVar5 = pfVar13;
        } while (pfVar13 != pfVar10);
      }
      goto LAB_0031632c;
    }
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_00316884;
                    /* try { // try from 003166b4 to 003166bb has its CatchHandler @ 00316844 */
    FUN_002febf0(&local_b0);
  }
  uVar6 = FUN_00753a74(0x20);
                    /* try { // try from 003166cc to 003166d7 has its CatchHandler @ 003167b0 */
  FUN_00714ba0(&local_110,*(undefined8 *)(param_1 + 0x40));
                    /* try { // try from 003166d8 to 003166eb has its CatchHandler @ 00316788 */
  pauVar7 = (undefined1 (*) [16])
            FUN_00713170(&local_110,0,
                         "ERROR input dataSize or output dataSize is wrong \n input size must be ");
  local_a0 = *(float **)pauVar7[1];
  auVar16 = *pauVar7;
  pfStack_a8 = auVar16._8_8_;
  local_b0 = auVar16[0];
  uStack_af = auVar16._1_7_;
  *(undefined8 *)(*pauVar7 + 8) = 0;
  *(undefined8 *)pauVar7[1] = 0;
  *(undefined8 *)*pauVar7 = 0;
                    /* try { // try from 00316708 to 0031673f has its CatchHandler @ 00316754 */
  FUN_00374ee0(uVar6,&local_b0);
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar6,PTR_PTR_007a1338,PTR_FUN_007a11f8);
  }
LAB_00316884:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00316888  FUN_00316888 =====

void FUN_00316888(undefined1 *param_1,double *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 uVar5;
  double dVar6;
  undefined4 local_58;
  undefined1 uStack_51;
  undefined4 *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_58 = 0;
  *param_1 = (char)(int)*param_2;
  param_1[1] = (char)(int)param_2[1];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 3);
  puVar3 = PTR_DAT_007a10e8;
  local_50 = &local_58;
  lVar4 = FUN_00315718(param_2 + 4,&local_58,PTR_DAT_007a10e8,&local_50,&uStack_51);
  local_58 = 1;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar4 + 0x14);
  local_50 = &local_58;
  lVar4 = FUN_00315718(param_2 + 4,&local_58,puVar3,&local_50,&uStack_51);
  uVar5 = 2;
  local_58 = 2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar4 + 0x14);
  local_50 = &local_58;
  lVar4 = FUN_00315718(param_2 + 4,&local_58,puVar3,&local_50,&uStack_51);
  local_58 = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(lVar4 + 0x14);
  local_50 = &local_58;
  lVar4 = FUN_00315718(param_2 + 4,&local_58,puVar3,&local_50,&uStack_51);
  uVar1 = *(undefined4 *)(lVar4 + 0x14);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  dVar6 = param_2[2];
  if (dVar6 != -1.0 && dVar6 < -1.0 == NAN(dVar6)) {
    if (dVar6 != 0.5 && dVar6 < 0.5 == NAN(dVar6)) {
      uVar5 = 1;
    }
    *(undefined4 *)(param_1 + 4) = uVar5;
  }
  *(double *)(param_1 + 0x1c) = param_2[9];
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 10);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003169ec  FUN_003169ec =====

void FUN_003169ec(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00316a10  FUN_00316a10 =====

void FUN_00316a10(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00316a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 00316a28  FUN_00316a28 =====

long FUN_00316a28(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP34_007a1398) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00316a44  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00316a48  _INIT_8 =====

void _INIT_8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_FUN_007a13a0;
  DAT_007aad18 = 4;
  DAT_007aad19 = 0x636e;
  DAT_007aad1b = 0;
  __cxa_atexit(PTR_FUN_007a13a0,&DAT_007aad18,&PTR_LOOP_0075ec90);
  DAT_007aad31 = 0x636e;
  DAT_007aad30 = 4;
  DAT_007aad33 = 0;
  __cxa_atexit(puVar1,&DAT_007aad30,&PTR_LOOP_0075ec90);
  DAT_007aad48 = 0xc;
  DAT_007aad49 = 0x6974616e;
  DAT_007aad4d = 0x6576;
  DAT_007aad4f = 0;
  __cxa_atexit(puVar1,&DAT_007aad48,&PTR_LOOP_0075ec90);
  return;
}


// ===== 00316af4  FUN_00316af4 =====

void FUN_00316af4(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *__s;
  undefined8 uVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  void *pvVar15;
  size_t sVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 local_90;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  long *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pbVar9 = (byte *)(param_1 + 2);
  *param_1 = *param_3;
  if ((*(byte *)(param_3 + 2) & 1) == 0) {
    uVar18 = *(undefined8 *)(param_3 + 4);
    uVar8 = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)(param_1 + 4) = uVar18;
    *(undefined8 *)pbVar9 = uVar8;
  }
  else {
    FUN_00310244(pbVar9,*(undefined8 *)(param_3 + 6),*(undefined8 *)(param_3 + 4));
  }
  uVar18 = *(undefined8 *)(param_3 + 10);
  uVar8 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 10) = uVar18;
  *(undefined8 *)(param_1 + 8) = uVar8;
  puVar10 = (undefined8 *)(param_1 + 0x34);
  *(undefined8 *)(param_1 + 0x36) = 0;
  *puVar10 = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  puVar13 = (undefined8 *)(param_1 + 0x3c);
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *puVar13 = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  iVar2 = *param_2;
  iVar3 = param_2[2];
  *(long *)(param_1 + 0x20) = (long)iVar3;
  *(long *)(param_1 + 0x22) = (long)iVar2;
  *(ulong *)(param_1 + 0x24) = (ulong)((long)iVar2 * (long)iVar3) / 1000;
                    /* try { // try from 00316bc0 to 00316bcb has its CatchHandler @ 00317104 */
  FUN_003171bc(&local_78,param_1);
                    /* try { // try from 00316bcc to 00316bd7 has its CatchHandler @ 003170fc */
  FUN_00317488(param_1,param_2);
  local_88 = local_78;
  local_80 = local_70;
  if (local_70 != (long *)0x0) {
    FUN_00755c20(1,local_70 + 1);
  }
                    /* try { // try from 00316bf0 to 00316bfb has its CatchHandler @ 003170ec */
  FUN_00317678(param_1,&local_88);
  plVar7 = local_80;
  if ((local_80 != (long *)0x0) &&
     (lVar6 = FUN_00755c50(0xffffffffffffffff,local_80 + 1), lVar6 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_0071245c(plVar7);
  }
                    /* try { // try from 00316c2c to 00316c33 has its CatchHandler @ 003170e8 */
  plVar7 = (long *)FUN_00759c3c(0x168);
  puVar5 = PTR_DAT_007a1340;
  uVar8 = *(undefined8 *)(param_1 + 0x22);
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)(puVar5 + 0x10);
                    /* try { // try from 00316c54 to 00316c5b has its CatchHandler @ 003170d8 */
  FUN_00333b9c(plVar7 + 3,uVar8);
  plVar14 = *(long **)(param_1 + 0x48);
  *(long **)(param_1 + 0x46) = plVar7 + 3;
  *(long **)(param_1 + 0x48) = plVar7;
  if ((plVar14 != (long *)0x0) && (lVar6 = FUN_00755c50(0xffffffffffffffff,plVar14 + 1), lVar6 == 0)
     ) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    FUN_0071245c(plVar14);
  }
                    /* try { // try from 00316c90 to 00316c97 has its CatchHandler @ 003170d4 */
  uVar8 = FUN_00759c3c(0x80);
                    /* try { // try from 00316c98 to 00316ca3 has its CatchHandler @ 003170cc */
  FUN_00319878(uVar8,param_1 + 0xc);
  pvVar15 = (void *)*puVar10;
  *puVar10 = uVar8;
  if (pvVar15 != (void *)0x0) {
    FUN_0031a524(pvVar15);
    free(pvVar15);
  }
                    /* try { // try from 00316cc0 to 00316cc7 has its CatchHandler @ 003170c8 */
  uVar8 = FUN_00759c3c(0xc0);
                    /* try { // try from 00316cc8 to 00316cd3 has its CatchHandler @ 003170c0 */
  FUN_0031bd10(uVar8,param_1 + 0x1a);
  local_90 = 0;
  FUN_00313904(param_1 + 0x36,uVar8);
  FUN_00313904(&local_90,0);
  lVar6 = *(long *)(param_1 + 0x30);
                    /* try { // try from 00316cf4 to 00316cfb has its CatchHandler @ 003170bc */
  plVar7 = (long *)FUN_00759c3c(0x28);
  *plVar7 = 0;
  plVar7[1] = 0;
  plVar7[2] = 0;
  if ((ulong)(lVar6 * 10) < 0x3fffffffffffffff) {
    uVar1 = lVar6 * 10 | 1;
    sVar16 = uVar1 * 4;
                    /* try { // try from 00316d28 to 00316d2f has its CatchHandler @ 00317114 */
    pvVar15 = (void *)FUN_00759c3c(sVar16);
    *plVar7 = (long)pvVar15;
    plVar7[2] = (long)((long)pvVar15 + uVar1 * 4);
    memset(pvVar15,0,sVar16);
    puVar17 = (undefined8 *)*puVar13;
    plVar7[3] = 0;
    plVar7[4] = 0;
    plVar7[1] = (long)((long)pvVar15 + sVar16);
    *puVar13 = plVar7;
    if (puVar17 != (undefined8 *)0x0) {
      pvVar15 = (void *)*puVar17;
      puVar17[1] = 0;
      puVar17[2] = 0;
      *puVar17 = 0;
      if (pvVar15 != (void *)0x0) {
        free(pvVar15);
        pvVar15 = (void *)*puVar17;
        if (pvVar15 != (void *)0x0) {
          puVar17[1] = pvVar15;
          free(pvVar15);
        }
      }
      free(puVar17);
      lVar6 = *(long *)(param_1 + 0x30);
    }
                    /* try { // try from 00316d94 to 00316d9b has its CatchHandler @ 003170b8 */
    plVar7 = (long *)FUN_00759c3c(0x28);
    *plVar7 = 0;
    plVar7[1] = 0;
    plVar7[2] = 0;
    if (0x3ffffffffffffffe < (ulong)(lVar6 * 10)) goto LAB_0031707c;
    uVar1 = lVar6 * 10 | 1;
    sVar16 = uVar1 * 4;
                    /* try { // try from 00316dc8 to 00316dcf has its CatchHandler @ 00317110 */
    pvVar15 = (void *)FUN_00759c3c(sVar16);
    *plVar7 = (long)pvVar15;
    plVar7[2] = (long)((long)pvVar15 + uVar1 * 4);
    memset(pvVar15,0,sVar16);
    puVar17 = *(undefined8 **)(param_1 + 0x3e);
    plVar7[3] = 0;
    plVar7[4] = 0;
    plVar7[1] = (long)((long)pvVar15 + sVar16);
    *(long **)(param_1 + 0x3e) = plVar7;
    if (puVar17 != (undefined8 *)0x0) {
      pvVar15 = (void *)*puVar17;
      puVar17[1] = 0;
      puVar17[2] = 0;
      *puVar17 = 0;
      if (pvVar15 != (void *)0x0) {
        free(pvVar15);
        pvVar15 = (void *)*puVar17;
        if (pvVar15 != (void *)0x0) {
          puVar17[1] = pvVar15;
          free(pvVar15);
        }
      }
      free(puVar17);
      lVar6 = *(long *)(param_1 + 0x30);
    }
                    /* try { // try from 00316e34 to 00316e3b has its CatchHandler @ 003170b4 */
    plVar7 = (long *)FUN_00759c3c(0x28);
    *plVar7 = 0;
    plVar7[1] = 0;
    plVar7[2] = 0;
    if ((ulong)(lVar6 * 10) < 0x3fffffffffffffff) {
      uVar1 = lVar6 * 10 | 1;
      sVar16 = uVar1 * 4;
                    /* try { // try from 00316e68 to 00316e6f has its CatchHandler @ 0031710c */
      __s = (void *)FUN_00759c3c(sVar16);
      *plVar7 = (long)__s;
      plVar7[2] = (long)((long)__s + uVar1 * 4);
      memset(__s,0,sVar16);
      puVar10 = *(undefined8 **)(param_1 + 0x40);
      pvVar15 = (void *)((long)__s + sVar16);
      plVar7[3] = 0;
      plVar7[4] = 0;
      plVar7[1] = (long)pvVar15;
      *(long **)(param_1 + 0x40) = plVar7;
      if (puVar10 != (undefined8 *)0x0) {
        pvVar15 = (void *)*puVar10;
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
        if (pvVar15 != (void *)0x0) {
          free(pvVar15);
          pvVar15 = (void *)*puVar10;
          if (pvVar15 != (void *)0x0) {
            puVar10[1] = pvVar15;
            free(pvVar15);
          }
        }
        free(puVar10);
        plVar7 = *(long **)(param_1 + 0x40);
        __s = (void *)*plVar7;
        pvVar15 = (void *)plVar7[1];
      }
      lVar11 = *(long *)(param_1 + 0x32);
      lVar6 = plVar7[4];
      if ((ulong)((long)pvVar15 - (long)__s >> 2) < (ulong)(lVar6 + lVar11)) {
        memcpy(__s,(void *)((long)__s + plVar7[3] * 4),(lVar6 - plVar7[3]) * 4);
        lVar6 = plVar7[3];
        plVar7[3] = 0;
        lVar6 = plVar7[4] - lVar6;
      }
      if (lVar11 != 0) {
        memset((void *)(*plVar7 + lVar6 * 4),0,lVar11 << 2);
      }
      plVar14 = *(long **)(param_1 + 0x3c);
      lVar12 = *(long *)(param_1 + 0x30);
      plVar7[4] = lVar6 + lVar11;
      pvVar15 = (void *)*plVar14;
      lVar6 = plVar14[4];
      if ((ulong)(plVar14[1] - (long)pvVar15 >> 2) < (ulong)(lVar6 + lVar12)) {
        memcpy(pvVar15,(void *)((long)pvVar15 + plVar14[3] * 4),(lVar6 - plVar14[3]) * 4);
        lVar6 = plVar14[3];
        plVar14[3] = 0;
        lVar6 = plVar14[4] - lVar6;
      }
      if (lVar12 != 0) {
        memset((void *)(*plVar14 + lVar6 * 4),0,lVar12 << 2);
      }
      plVar7 = *(long **)(param_1 + 0x3e);
      plVar14[4] = lVar6 + lVar12;
      lVar11 = *(long *)(param_1 + 0x32);
      pvVar15 = (void *)*plVar7;
      lVar6 = plVar7[4];
      if ((ulong)(plVar7[1] - (long)pvVar15 >> 2) < (ulong)(lVar6 + lVar11)) {
        memcpy(pvVar15,(void *)((long)pvVar15 + plVar7[3] * 4),(lVar6 - plVar7[3]) * 4);
        lVar6 = plVar7[3];
        plVar7[3] = 0;
        lVar6 = plVar7[4] - lVar6;
      }
      if (lVar11 != 0) {
        memset((void *)(*plVar7 + lVar6 * 4),0,lVar11 << 2);
      }
      plVar7[4] = lVar6 + lVar11;
      *(undefined1 *)(param_1 + 0x4a) = 1;
      if ((local_70 != (long *)0x0) &&
         (lVar6 = FUN_00755c50(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
        (**(code **)(*local_70 + 0x10))(local_70);
        FUN_0071245c(local_70);
      }
      if (*(long *)(lVar4 + 0x28) == local_68) {
        return;
      }
      goto LAB_003171b8;
    }
  }
  else {
    if (*(long *)(lVar4 + 0x28) != local_68) goto LAB_003171b8;
                    /* try { // try from 00317074 to 0031707b has its CatchHandler @ 00317114 */
    FUN_002febf0(plVar7);
LAB_0031707c:
    if (*(long *)(lVar4 + 0x28) != local_68) goto LAB_003171b8;
                    /* try { // try from 00317090 to 00317097 has its CatchHandler @ 00317110 */
    FUN_002febf0(plVar7);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 003170ac to 003170b3 has its CatchHandler @ 0031710c */
    uVar8 = FUN_002febf0(plVar7);
                    /* catch() { ... } // from try @ 00316e34 with catch @ 003170b4 */
                    /* catch() { ... } // from try @ 00316bcc with catch @ 003170fc */
    FUN_00312304(&local_78);
    FUN_00317864(param_1 + 0x46);
    FUN_00317948(param_1 + 0x42);
    FUN_003178f0(param_1 + 0x40);
    FUN_003178f0(param_1 + 0x3e);
    FUN_003178f0(puVar13);
    FUN_00317998(param_1 + 0x3a);
    FUN_00317998(param_1 + 0x38);
    FUN_00313904(param_1 + 0x36,0);
    FUN_003178b4(puVar10);
    if ((*pbVar9 & 1) != 0) {
      free(*(void **)(param_1 + 6));
    }
    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar8);
    }
  }
LAB_003171b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003171bc  FUN_003171bc =====

void FUN_003171bc(undefined8 *param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_148 [24];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  long local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(param_2 + 8);
  local_60 = 0;
  if ((lVar5 == 0) || (lVar6 = *(long *)(param_2 + 10), lVar6 == 0)) {
                    /* try { // try from 00317228 to 0031722f has its CatchHandler @ 0031743c */
    lVar2 = FUN_00759c3c(0x98);
                    /* try { // try from 00317230 to 0031723b has its CatchHandler @ 0031742c */
    FUN_0031fc08(lVar2,param_2 + 2);
    lVar5 = local_60;
  }
  else {
                    /* try { // try from 00317200 to 00317207 has its CatchHandler @ 003173f4 */
    lVar2 = FUN_00759c3c(0x98);
                    /* try { // try from 00317208 to 00317217 has its CatchHandler @ 003173e4 */
    FUN_0031fecc(lVar2,lVar5,lVar6);
    lVar5 = local_60;
  }
  local_60 = lVar2;
  if (lVar5 != 0) {
    FUN_00319058(&local_60);
  }
                    /* try { // try from 00317254 to 00317257 has its CatchHandler @ 00317454 */
  FUN_00320010(local_60);
                    /* try { // try from 0031725c to 00317263 has its CatchHandler @ 00317450 */
  FUN_0031ffc8(&local_d8,local_60);
  uStack_e8 = uStack_90;
  local_f0 = local_98;
  *(undefined8 *)(param_2 + 0x18) = local_a8;
  uStack_108 = uStack_b0;
  local_110 = local_b8;
  uStack_f8 = uStack_a0;
  uStack_100 = local_a8;
  *(undefined8 *)(param_2 + 0x1e) = uStack_90;
  *(undefined8 *)(param_2 + 0x16) = uStack_b0;
  *(undefined8 *)(param_2 + 0x14) = local_b8;
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  uStack_128 = uStack_d0;
  local_130 = local_d8;
  uStack_118 = uStack_c0;
  uStack_120 = local_c8;
  *(undefined8 *)(param_2 + 0xe) = uStack_d0;
  *(undefined8 *)(param_2 + 0xc) = local_d8;
  *(undefined8 *)(param_2 + 0x12) = uStack_c0;
  *(undefined8 *)(param_2 + 0x10) = local_c8;
  *(undefined8 *)(param_2 + 0x1c) = local_98;
  *(undefined8 *)(param_2 + 0x1a) = uStack_a0;
  *(undefined8 *)(param_2 + 0x28) = local_88;
  *(undefined8 *)(param_2 + 0x2a) = local_80;
  *(long *)(param_2 + 0x26) = (long)*param_2;
  if (*(long *)(param_2 + 0x20) == (long)*param_2) {
                    /* try { // try from 003172cc to 003172cf has its CatchHandler @ 00317440 */
    uVar3 = FUN_00343f1c(*(undefined8 *)(param_2 + 0x22));
    *(undefined8 *)(param_2 + 0x32) = uVar3;
    uVar4 = (ulong)(*(long *)(param_2 + 0x28) * *(long *)(param_2 + 0x2a)) / 1000;
    *(ulong *)(param_2 + 0x2c) = uVar4;
    *(ulong *)(param_2 + 0x16) = uVar4;
    *(ulong *)(param_2 + 0x1a) = uVar4;
    *param_1 = local_70;
    param_1[1] = local_68;
    if (((local_68 != (long *)0x0) && (FUN_00755c20(1,local_68 + 1), local_68 != (long *)0x0)) &&
       (lVar5 = FUN_00755c50(0xffffffffffffffff,local_68 + 1), lVar5 == 0)) {
      (**(code **)(*local_68 + 0x10))(local_68);
      FUN_0071245c(local_68);
    }
    lVar5 = local_60;
    local_60 = 0;
    if (lVar5 != 0) {
      FUN_00319058(&local_60);
    }
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
  else {
    uVar3 = FUN_00753a74(0x20);
                    /* try { // try from 00317398 to 003173a7 has its CatchHandler @ 0031741c */
    FUN_002fd2b0(auStack_148,
                 "DfProcessor::readAndInitParams(): Input and output sample rates must be equal");
                    /* try { // try from 003173ac to 003173e3 has its CatchHandler @ 003173f8 */
    FUN_00374df0(uVar3,auStack_148);
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1228,PTR_FUN_007a11f8);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00317488  FUN_00317488 =====

void FUN_00317488(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  iVar1 = *param_2;
  iVar2 = param_2[1];
  *(long *)(param_1 + 0x80) = (long)iVar2;
  *(long *)(param_1 + 0x88) = (long)iVar1;
  uVar5 = (ulong)(*(long *)(param_1 + 0xa0) * (long)iVar1) / 1000;
  *(ulong *)(param_1 + 0xb8) = uVar5;
  if (*(long *)(param_1 + 0x98) == (long)iVar2) {
    uVar6 = (ulong)((long)iVar1 * (long)iVar2) / 1000;
    uVar4 = FUN_00759c3c(8);
                    /* try { // try from 00317508 to 0031751b has its CatchHandler @ 00317650 */
    FUN_00349cd8(uVar4,uVar6,uVar5,0,2);
    pvVar7 = *(void **)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe0) = uVar4;
    if (pvVar7 != (void *)0x0) {
      FUN_00349ee0(pvVar7);
      free(pvVar7);
    }
    uVar4 = FUN_00759c3c(8);
                    /* try { // try from 00317544 to 00317557 has its CatchHandler @ 0031764c */
    FUN_00349cd8(uVar4,uVar5,uVar6,0,2);
    pvVar7 = *(void **)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe8) = uVar4;
    if (pvVar7 == (void *)0x0) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return;
      }
    }
    else {
      FUN_00349ee0(pvVar7);
      if (*(long *)(lVar3 + 0x28) == local_48) {
        free(pvVar7);
        return;
      }
    }
  }
  else {
    uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 003175cc to 003175db has its CatchHandler @ 0031763c */
    FUN_002fd2b0(auStack_60,
                 "DfProcessor::initProcessor(): Input and output sample rates must be equal");
                    /* try { // try from 003175e0 to 00317617 has its CatchHandler @ 00317618 */
    FUN_00374df0(uVar4,auStack_60);
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a1228,PTR_FUN_007a11f8);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00317678  FUN_00317678 =====

void FUN_00317678(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_50;
  long *plStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 003176a0 to 003176af has its CatchHandler @ 00317744 */
  uVar3 = FUN_0034b7c4();
  FUN_0034ad20(&local_50,uVar3,param_2);
  plVar2 = plStack_48;
  uVar3 = local_50;
  plVar5 = *(long **)(param_1 + 0x110);
  local_50 = 0;
  plStack_48 = (long *)0x0;
  *(long **)(param_1 + 0x110) = plVar2;
  *(undefined8 *)(param_1 + 0x108) = uVar3;
  if ((plVar5 != (long *)0x0) && (lVar4 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar4 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  plVar2 = plStack_48;
  if ((plStack_48 != (long *)0x0) &&
     (lVar4 = FUN_00755c50(0xffffffffffffffff,plStack_48 + 1), lVar4 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00317864  FUN_00317864 =====

void FUN_00317864(long param_1)

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


// ===== 003178b4  FUN_003178b4 =====

void FUN_003178b4(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_0031a524(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 003178f0  FUN_003178f0 =====

void FUN_003178f0(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)*param_1;
  *param_1 = 0;
  if (__ptr != (undefined8 *)0x0) {
    pvVar1 = (void *)*__ptr;
    __ptr[1] = 0;
    __ptr[2] = 0;
    *__ptr = 0;
    if (pvVar1 != (void *)0x0) {
      free(pvVar1);
      pvVar1 = (void *)*__ptr;
      if (pvVar1 != (void *)0x0) {
        __ptr[1] = pvVar1;
        free(pvVar1);
      }
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 00317948  FUN_00317948 =====

void FUN_00317948(long param_1)

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


// ===== 00317998  FUN_00317998 =====

void FUN_00317998(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_00349ee0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 003179d4  FUN_003179d4 =====

void FUN_003179d4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x70);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 00317a24  FUN_00317a24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00317a24(undefined8 param_1,long param_2,long *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  byte bVar7;
  long lVar8;
  undefined8 *puVar9;
  float *pfVar10;
  undefined8 *puVar11;
  float *pfVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  undefined1 (*pauVar25) [16];
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float *pfVar29;
  undefined4 *__src;
  bool bVar30;
  void *pvVar31;
  undefined4 *__dest;
  undefined1 (*pauVar32) [16];
  double *pdVar33;
  float *pfVar34;
  undefined8 uVar35;
  float *pfVar36;
  undefined1 (*pauVar37) [16];
  long lVar38;
  long lVar39;
  float *pfVar40;
  char cVar41;
  char *pcVar42;
  float *pfVar43;
  ulong uVar44;
  ulong uVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  ulong uVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  undefined8 *puVar53;
  long lVar54;
  long *plVar55;
  undefined4 *puVar56;
  size_t sVar57;
  undefined4 *puVar58;
  long lVar59;
  float fVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  double dVar72;
  double dVar73;
  float fVar74;
  undefined1 auVar75 [16];
  float *local_190;
  float *pfStack_188;
  float *local_180;
  void *local_170;
  void *local_168;
  void *local_158;
  void *local_150;
  void **local_140;
  void **ppvStack_138;
  char *local_130;
  void *local_128;
  void *local_120;
  void *local_110;
  void *pvStack_108;
  char *local_100;
  void *local_f8;
  void *local_f0;
  void *local_e0;
  void *local_d8;
  undefined4 *local_c0;
  undefined4 *local_b8;
  undefined4 *local_b0;
  float *local_a8;
  float *local_a0;
  long local_90;
  
  lVar8 = tpidr_el0;
  local_90 = *(long *)(lVar8 + 0x28);
  if (*(long *)(param_2 + 0x90) != param_3[1] - *param_3 >> 2) {
LAB_003187e4:
    uVar35 = FUN_00753a74(0x20);
                    /* try { // try from 003187f0 to 003187ff has its CatchHandler @ 003188b8 */
    FUN_002fd2b0(&local_110,"DfProcessor::process(): Invalid frame size.");
                    /* try { // try from 00318804 to 0031883f has its CatchHandler @ 00318894 */
    FUN_00374ee0(uVar35,&local_110);
    if (*(long *)(lVar8 + 0x28) == local_90) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar35,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_003189ac;
  }
  FUN_00349f00(&local_a8,*(undefined8 *)(param_2 + 0xe0));
  pfVar29 = local_a8;
  if (local_a8 != local_a0) {
    uVar44 = (long)local_a0 + (-4 - (long)local_a8);
    pfVar43 = local_a8;
    if (0x1b < uVar44) {
      pauVar37 = (undefined1 (*) [16])(local_a8 + 4);
      uVar44 = (uVar44 >> 2) + 1;
      uVar49 = uVar44 & 0x7ffffffffffffff8;
      pfVar43 = local_a8 + uVar49;
      uVar45 = uVar49;
      do {
        auVar21 = pauVar37[-1];
        auVar22 = *pauVar37;
        uVar45 = uVar45 - 8;
        auVar65._8_4_ = 0xc7000000;
        auVar65._0_8_ = 0xc7000000c7000000;
        auVar65._12_4_ = 0xc7000000;
        auVar65 = NEON_fcmgt(auVar65,auVar21,4);
        auVar14._8_4_ = 0x46fffe00;
        auVar14._0_8_ = 0x46fffe0046fffe00;
        auVar14._12_4_ = 0x46fffe00;
        auVar67 = NEON_fcmgt(auVar21,auVar14,4);
        auVar69._8_4_ = 0xc7000000;
        auVar69._0_8_ = 0xc7000000c7000000;
        auVar69._12_4_ = 0xc7000000;
        auVar69 = NEON_fcmgt(auVar69,auVar22,4);
        auVar15._8_4_ = 0x46fffe00;
        auVar15._0_8_ = 0x46fffe0046fffe00;
        auVar15._12_4_ = 0x46fffe00;
        auVar71 = NEON_fcmgt(auVar22,auVar15,4);
        auVar75[0] = auVar67[0] & ~auVar65[0];
        auVar75[1] = auVar67[1] & ~auVar65[1];
        auVar75[2] = auVar67[2] & ~auVar65[2];
        auVar75[3] = auVar67[3] & ~auVar65[3];
        auVar75[4] = auVar67[4] & ~auVar65[4];
        auVar75[5] = auVar67[5] & ~auVar65[5];
        auVar75[6] = auVar67[6] & ~auVar65[6];
        auVar75[7] = auVar67[7] & ~auVar65[7];
        auVar75[8] = auVar67[8] & ~auVar65[8];
        auVar75[9] = auVar67[9] & ~auVar65[9];
        auVar75[10] = auVar67[10] & ~auVar65[10];
        auVar75[0xb] = auVar67[0xb] & ~auVar65[0xb];
        auVar75[0xc] = auVar67[0xc] & ~auVar65[0xc];
        auVar75[0xd] = auVar67[0xd] & ~auVar65[0xd];
        auVar75[0xe] = auVar67[0xe] & ~auVar65[0xe];
        auVar75[0xf] = auVar67[0xf] & ~auVar65[0xf];
        auVar66[0] = ~auVar65[0] & ~auVar67[0];
        auVar66[1] = ~auVar65[1] & ~auVar67[1];
        auVar66[2] = ~auVar65[2] & ~auVar67[2];
        auVar66[3] = ~auVar65[3] & ~auVar67[3];
        auVar66[4] = ~auVar65[4] & ~auVar67[4];
        auVar66[5] = ~auVar65[5] & ~auVar67[5];
        auVar66[6] = ~auVar65[6] & ~auVar67[6];
        auVar66[7] = ~auVar65[7] & ~auVar67[7];
        auVar66[8] = ~auVar65[8] & ~auVar67[8];
        auVar66[9] = ~auVar65[9] & ~auVar67[9];
        auVar66[10] = ~auVar65[10] & ~auVar67[10];
        auVar66[0xb] = ~auVar65[0xb] & ~auVar67[0xb];
        auVar66[0xc] = ~auVar65[0xc] & ~auVar67[0xc];
        auVar66[0xd] = ~auVar65[0xd] & ~auVar67[0xd];
        auVar66[0xe] = ~auVar65[0xe] & ~auVar67[0xe];
        auVar66[0xf] = ~auVar65[0xf] & ~auVar67[0xf];
        auVar67._8_4_ = 0xc7000000;
        auVar67._0_8_ = 0xc7000000c7000000;
        auVar67._12_4_ = 0xc7000000;
        auVar16._8_4_ = 0x46fffe00;
        auVar16._0_8_ = 0x46fffe0046fffe00;
        auVar16._12_4_ = 0x46fffe00;
        auVar65 = NEON_bsl(auVar75,auVar16,auVar67,1);
        auVar68[9] = auVar71[9] & ~auVar69[9];
        auVar68[8] = auVar71[8] & ~auVar69[8];
        auVar68[10] = auVar71[10] & ~auVar69[10];
        auVar68[0xb] = auVar71[0xb] & ~auVar69[0xb];
        auVar68[0xc] = auVar71[0xc] & ~auVar69[0xc];
        auVar68[0xd] = auVar71[0xd] & ~auVar69[0xd];
        auVar68[0xe] = auVar71[0xe] & ~auVar69[0xe];
        auVar68[0xf] = auVar71[0xf] & ~auVar69[0xf];
        auVar68[1] = auVar71[1] & ~auVar69[1];
        auVar68[0] = auVar71[0] & ~auVar69[0];
        auVar68[2] = auVar71[2] & ~auVar69[2];
        auVar68[3] = auVar71[3] & ~auVar69[3];
        auVar68[4] = auVar71[4] & ~auVar69[4];
        auVar68[5] = auVar71[5] & ~auVar69[5];
        auVar68[6] = auVar71[6] & ~auVar69[6];
        auVar68[7] = auVar71[7] & ~auVar69[7];
        auVar70[0] = ~auVar69[0] & ~auVar71[0];
        auVar70[1] = ~auVar69[1] & ~auVar71[1];
        auVar70[2] = ~auVar69[2] & ~auVar71[2];
        auVar70[3] = ~auVar69[3] & ~auVar71[3];
        auVar70[4] = ~auVar69[4] & ~auVar71[4];
        auVar70[5] = ~auVar69[5] & ~auVar71[5];
        auVar70[6] = ~auVar69[6] & ~auVar71[6];
        auVar70[7] = ~auVar69[7] & ~auVar71[7];
        auVar70[8] = ~auVar69[8] & ~auVar71[8];
        auVar70[9] = ~auVar69[9] & ~auVar71[9];
        auVar70[10] = ~auVar69[10] & ~auVar71[10];
        auVar70[0xb] = ~auVar69[0xb] & ~auVar71[0xb];
        auVar70[0xc] = ~auVar69[0xc] & ~auVar71[0xc];
        auVar70[0xd] = ~auVar69[0xd] & ~auVar71[0xd];
        auVar70[0xe] = ~auVar69[0xe] & ~auVar71[0xe];
        auVar70[0xf] = ~auVar69[0xf] & ~auVar71[0xf];
        auVar71._8_4_ = 0xc7000000;
        auVar71._0_8_ = 0xc7000000c7000000;
        auVar71._12_4_ = 0xc7000000;
        auVar17._8_4_ = 0x46fffe00;
        auVar17._0_8_ = 0x46fffe0046fffe00;
        auVar17._12_4_ = 0x46fffe00;
        auVar69 = NEON_bsl(auVar68,auVar17,auVar71,1);
        auVar65 = NEON_bif(auVar21,auVar65,auVar66,1);
        auVar69 = NEON_bif(auVar22,auVar69,auVar70,1);
        *(long *)(pauVar37[-1] + 8) = auVar65._8_8_;
        *(long *)pauVar37[-1] = auVar65._0_8_;
        *(long *)(*pauVar37 + 8) = auVar69._8_8_;
        *(long *)*pauVar37 = auVar69._0_8_;
        pauVar37 = pauVar37 + 2;
      } while (uVar45 != 0);
      if (uVar44 == uVar49) goto LAB_00317b28;
    }
    do {
      fVar60 = *pfVar43;
      fVar74 = -32768.0;
      if ((-32768.0 <= fVar60) &&
         (fVar74 = 32767.0, fVar60 == 32767.0 || fVar60 < 32767.0 != NAN(fVar60))) {
        fVar74 = fVar60;
      }
      pfVar40 = pfVar43 + 1;
      *pfVar43 = fVar74;
      pfVar43 = pfVar40;
    } while (pfVar40 != local_a0);
  }
LAB_00317b28:
  puVar53 = *(undefined8 **)(param_2 + 0xf0);
  sVar57 = (long)local_a0 - (long)local_a8;
  lVar54 = (long)sVar57 >> 2;
  pvVar31 = (void *)*puVar53;
  lVar38 = puVar53[4];
  if ((ulong)(puVar53[1] - (long)pvVar31 >> 2) < (ulong)(lVar38 + lVar54)) {
    memcpy(pvVar31,(void *)((long)pvVar31 + puVar53[3] * 4),(lVar38 - puVar53[3]) * 4);
    pvVar31 = (void *)*puVar53;
    lVar38 = puVar53[4] - puVar53[3];
    puVar53[3] = 0;
    puVar53[4] = lVar38;
  }
  memcpy((void *)((long)pvVar31 + lVar38 * 4),pfVar29,sVar57);
  puVar53[4] = puVar53[4] + lVar54;
                    /* try { // try from 00317b9c to 00317bbf has its CatchHandler @ 003188c8 */
  if (((param_4[1] & 1) == 0) &&
     (FUN_00334284(*(undefined8 *)(param_2 + 0x118)),
     (ulong)(*(long *)(param_2 + 0xc0) << 1) <=
     (ulong)(*(long *)(*(long *)(param_2 + 0xf0) + 0x20) -
            *(long *)(*(long *)(param_2 + 0xf0) + 0x18)))) {
    FUN_00334290(*(undefined8 *)(param_2 + 0x118));
  }
  pfVar43 = _UNK_002001f8;
  pfVar29 = _DAT_002001f0;
  plVar55 = *(long **)(param_2 + 0xf0);
  lVar38 = *(long *)(param_2 + 0xc0);
  if ((ulong)(lVar38 << 1) <= (ulong)(plVar55[4] - plVar55[3])) {
    do {
      uVar44 = *(ulong *)(param_2 + 0xb0);
      local_c0 = (undefined4 *)0x0;
      local_b8 = (undefined4 *)0x0;
      local_b0 = (undefined4 *)0x0;
      if (uVar44 != 0) {
        if (uVar44 >> 0x3e == 0) {
          lVar38 = uVar44 * 4;
                    /* try { // try from 00317d24 to 00317d2b has its CatchHandler @ 00318900 */
          local_c0 = (undefined4 *)FUN_00759c3c(lVar38);
          local_b0 = local_c0 + uVar44;
          puVar56 = (undefined4 *)(*plVar55 + plVar55[3] * 4);
          local_b8 = local_c0;
          do {
            __src = local_c0;
            if (local_b8 < local_b0) {
              puVar58 = local_b8 + 1;
              *local_b8 = *puVar56;
            }
            else {
              sVar57 = (long)local_b8 - (long)local_c0;
              lVar54 = (long)sVar57 >> 2;
              uVar44 = lVar54 + 1;
              if (uVar44 >> 0x3e != 0) {
                if (*(long *)(lVar8 + 0x28) == local_90) {
                    /* try { // try from 00318758 to 00318777 has its CatchHandler @ 0031896c */
                  FUN_002febf0(&local_c0);
LAB_00318760:
                  if (*(long *)(lVar8 + 0x28) == local_90) {
                    /* WARNING: Subroutine does not return */
                    FUN_002f9ee0();
                  }
                }
                goto LAB_003189ac;
              }
              uVar45 = (long)local_b0 - (long)local_c0 >> 1;
              if (uVar45 <= uVar44) {
                uVar45 = uVar44;
              }
              if (0x7ffffffffffffffb < (ulong)((long)local_b0 - (long)local_c0)) {
                uVar45 = 0x3fffffffffffffff;
              }
              if (uVar45 == 0) {
                __dest = (undefined4 *)0x0;
              }
              else {
                if (uVar45 >> 0x3e != 0) goto LAB_00318760;
                    /* try { // try from 00317db4 to 00317db7 has its CatchHandler @ 00318968 */
                __dest = (undefined4 *)FUN_00759c3c(uVar45 << 2);
              }
              puVar58 = __dest + lVar54 + 1;
              __dest[lVar54] = *puVar56;
              memcpy(__dest,__src,sVar57);
              local_c0 = __dest;
              local_b0 = __dest + uVar45;
              if (__src != (undefined4 *)0x0) {
                local_b8 = puVar58;
                free(__src);
              }
            }
            lVar38 = lVar38 + -4;
            puVar56 = puVar56 + 1;
            local_b8 = puVar58;
          } while (lVar38 != 0);
          goto LAB_00317dfc;
        }
        if (*(long *)(lVar8 + 0x28) != local_90) goto LAB_003189ac;
                    /* try { // try from 003187c0 to 003187c7 has its CatchHandler @ 00318904 */
        FUN_002febf0(&local_c0);
LAB_003187c8:
        if (*(long *)(lVar8 + 0x28) != local_90) goto LAB_003189ac;
                    /* try { // try from 003187dc to 003187e3 has its CatchHandler @ 003188f0 */
        FUN_002febf0(&local_190);
        goto LAB_003187e4;
      }
LAB_00317dfc:
                    /* try { // try from 00317e00 to 00317e0b has its CatchHandler @ 0031890c */
      FUN_0031a4e8(&local_110,*(undefined8 *)(param_2 + 0xd0),&local_c0);
                    /* try { // try from 00317e0c to 00317e23 has its CatchHandler @ 00318910 */
      FUN_003189b0(&local_140,param_2,&local_f8,&local_e0);
                    /* try { // try from 00317e38 to 00317e4f has its CatchHandler @ 00318918 */
      FUN_0031bff0(&local_170,*(undefined4 *)(param_4 + 4),*(undefined8 *)(param_2 + 0xd8),
                   &local_110,&local_140,&local_128,*param_4,param_4[1]);
      plVar55 = *(long **)(param_2 + 0xf8);
      lVar54 = *(long *)(param_2 + 0xc0);
      pvVar31 = (void *)*plVar55;
      lVar38 = plVar55[4];
      if ((ulong)(plVar55[1] - (long)pvVar31 >> 2) < (ulong)(lVar38 + lVar54)) {
        memcpy(pvVar31,(void *)((long)pvVar31 + plVar55[3] * 4),(lVar38 - plVar55[3]) * 4);
        lVar38 = plVar55[3];
        plVar55[3] = 0;
        lVar38 = plVar55[4] - lVar38;
      }
      if (lVar54 != 0) {
        memset((void *)(*plVar55 + lVar38 * 4),0,lVar54 << 2);
      }
      plVar55[4] = lVar38 + lVar54;
      if ((param_4[1] & 1) == 0) {
        if (local_150 == local_158) {
                    /* try { // try from 00317ed0 to 00317ed7 has its CatchHandler @ 003188ec */
          local_180 = (float *)FUN_00759c3c(0x28);
          uVar28 = s_Invalid_postProcessedForEnergyCa_001d35fe._16_8_;
          uVar27 = s_Invalid_postProcessedForEnergyCa_001d35fe._8_8_;
          uVar26 = s_Invalid_postProcessedForEnergyCa_001d35fe._0_8_;
          pfStack_188 = pfVar43;
          local_190 = pfVar29;
          uVar35 = CONCAT17(s_Invalid_postProcessedForEnergyCa_001d35fe[0x1f],
                            s_Invalid_postProcessedForEnergyCa_001d35fe._24_7_);
          uVar18 = CONCAT71(s_Invalid_postProcessedForEnergyCa_001d35fe._32_7_,
                            s_Invalid_postProcessedForEnergyCa_001d35fe[0x1f]);
          *(char *)((long)local_180 + 0x27) = '\0';
          *(undefined8 *)(local_180 + 2) = uVar27;
          *(undefined8 *)local_180 = uVar26;
          *(undefined8 *)(local_180 + 6) = uVar35;
          *(undefined8 *)(local_180 + 4) = uVar28;
          *(undefined8 *)((long)local_180 + 0x1f) = uVar18;
                    /* try { // try from 00317f00 to 00317f1b has its CatchHandler @ 003188d8 */
          FUN_00372794(&local_190,
                       "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/nc/src/deep_filter_net/krisp_nc_df_processor.cpp"
                       ,0xa5,"process");
          if (((ulong)local_190 & 1) != 0) {
            free(local_180);
          }
        }
        plVar55 = *(long **)(param_2 + 0x100);
        lVar54 = *(long *)(param_2 + 0xc0);
        pvVar31 = (void *)*plVar55;
        lVar38 = plVar55[4];
        if ((ulong)(plVar55[1] - (long)pvVar31 >> 2) < (ulong)(lVar38 + lVar54)) {
          memcpy(pvVar31,(void *)((long)pvVar31 + plVar55[3] * 4),(lVar38 - plVar55[3]) * 4);
          lVar38 = plVar55[3];
          plVar55[3] = 0;
          lVar38 = plVar55[4] - lVar38;
        }
        if (lVar54 != 0) {
          memset((void *)(*plVar55 + lVar38 * 4),0,lVar54 << 2);
        }
        plVar55[4] = lVar38 + lVar54;
        cVar41 = param_4[1];
      }
      else {
        cVar41 = '\x01';
      }
      plVar55 = *(long **)(param_2 + 0xf8);
      lVar59 = *(long *)(param_2 + 0xc0);
      lVar38 = plVar55[3];
      lVar54 = plVar55[4];
      uVar44 = lVar59 * 2;
      lVar39 = lVar54 - (lVar38 + uVar44);
      if (uVar44 != 0) {
        lVar50 = *plVar55;
        if (cVar41 == '\0') {
          lVar51 = (*(long **)(param_2 + 0x100))[3];
          lVar46 = **(long **)(param_2 + 0x100);
          if (uVar44 < 0xc) {
            uVar45 = 0;
          }
          else {
            pvVar31 = (void *)(lVar46 + lVar51 * 4 + lVar39 * 4);
            pvVar2 = (void *)(lVar46 + ((lVar51 + lVar54) - lVar38) * 4);
            pvVar3 = (void *)((long)local_158 + lVar59 * 8);
            pvVar4 = (void *)((long)local_170 + lVar59 * 8);
            pvVar5 = (void *)(lVar50 + lVar54 * 4);
            pvVar6 = (void *)(lVar50 + lVar54 * 4 + lVar59 * -8);
            uVar45 = 0;
            if ((((pvVar2 <= pvVar6 || pvVar5 <= pvVar31) &&
                 (pvVar3 <= pvVar31 || pvVar2 <= local_158)) &&
                (pvVar4 <= pvVar31 || pvVar2 <= local_170)) &&
               ((pvVar3 <= pvVar6 || pvVar5 <= local_158 &&
                (pvVar4 <= pvVar6 || pvVar5 <= local_170)))) {
              pauVar37 = (undefined1 (*) [16])((long)local_170 + 0x10);
              uVar45 = uVar44 & 0xfffffffffffffff8;
              pfVar40 = (float *)((long)local_158 + 0x10);
              pauVar32 = (undefined1 (*) [16])(lVar50 + lVar59 * -8 + lVar54 * 4 + 0x10);
              pfVar36 = (float *)(lVar46 + lVar51 * 4 + lVar39 * 4 + 0x10);
              uVar49 = uVar45;
              do {
                uVar49 = uVar49 - 8;
                pfVar34 = pfVar40 + -2;
                uVar35 = *(undefined8 *)(pfVar40 + -4);
                fVar74 = *pfVar40;
                fVar60 = pfVar40[1];
                fVar23 = pfVar40[2];
                fVar24 = pfVar40[3];
                pfVar40 = pfVar40 + 8;
                *(ulong *)(pfVar36 + -2) =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar34 >> 0x20) +
                              (float)((ulong)*(undefined8 *)(pfVar36 + -2) >> 0x20),
                              (float)*(undefined8 *)pfVar34 + (float)*(undefined8 *)(pfVar36 + -2));
                *(ulong *)(pfVar36 + -4) =
                     CONCAT44((float)((ulong)uVar35 >> 0x20) +
                              (float)((ulong)*(undefined8 *)(pfVar36 + -4) >> 0x20),
                              (float)uVar35 + (float)*(undefined8 *)(pfVar36 + -4));
                *(ulong *)(pfVar36 + 2) = CONCAT44(fVar24 + pfVar36[3],fVar23 + pfVar36[2]);
                *(ulong *)pfVar36 = CONCAT44(fVar60 + pfVar36[1],fVar74 + *pfVar36);
                pfVar36 = pfVar36 + 8;
                uVar35 = *(undefined8 *)pauVar32[-1];
                auVar65 = *pauVar32;
                pauVar25 = pauVar37 + -1;
                uVar18 = *(undefined8 *)pauVar37[-1];
                auVar69 = *pauVar37;
                pauVar37 = pauVar37 + 2;
                *(ulong *)(pauVar32[-1] + 8) =
                     CONCAT44((float)((ulong)*(undefined8 *)(*pauVar25 + 8) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(pauVar32[-1] + 8) >> 0x20),
                              (float)*(undefined8 *)(*pauVar25 + 8) +
                              (float)*(undefined8 *)(pauVar32[-1] + 8));
                *(ulong *)pauVar32[-1] =
                     CONCAT44((float)((ulong)uVar18 >> 0x20) + (float)((ulong)uVar35 >> 0x20),
                              (float)uVar18 + (float)uVar35);
                *(ulong *)(*pauVar32 + 8) =
                     CONCAT44(auVar69._12_4_ + auVar65._12_4_,auVar69._8_4_ + auVar65._8_4_);
                *(ulong *)*pauVar32 =
                     CONCAT44(auVar69._4_4_ + auVar65._4_4_,auVar69._0_4_ + auVar65._0_4_);
                pauVar32 = pauVar32 + 2;
              } while (uVar49 != 0);
              if (uVar44 - uVar45 == 0) goto LAB_00318084;
            }
          }
          lVar52 = uVar45 * 4;
          lVar50 = lVar50 + lVar54 * 4;
          lVar47 = uVar45 + lVar59 * -2;
          pfVar40 = (float *)((long)local_170 + lVar52);
          pfVar36 = (float *)((long)local_158 + lVar52);
          pfVar34 = (float *)(lVar46 + lVar52 + lVar51 * 4 + lVar39 * 4);
          do {
            lVar46 = lVar47 * 4;
            bVar30 = lVar47 != -1;
            lVar47 = lVar47 + 1;
            *pfVar34 = *pfVar36 + *pfVar34;
            *(float *)(lVar50 + lVar46) = *pfVar40 + *(float *)(lVar50 + lVar46);
            pfVar40 = pfVar40 + 1;
            pfVar36 = pfVar36 + 1;
            pfVar34 = pfVar34 + 1;
          } while (bVar30);
        }
        else {
          if ((uVar44 < 8) ||
             (((void *)(lVar50 + lVar54 * 4 + lVar59 * -8) < (void *)((long)local_170 + lVar59 * 8)
              && (local_170 < (void *)(lVar50 + lVar54 * 4))))) {
            uVar45 = 0;
          }
          else {
            pauVar37 = (undefined1 (*) [16])((long)local_170 + 0x10);
            uVar45 = uVar44 & 0xfffffffffffffff8;
            pauVar32 = (undefined1 (*) [16])(lVar50 + lVar59 * -8 + lVar54 * 4 + 0x10);
            uVar49 = uVar45;
            do {
              uVar35 = *(undefined8 *)pauVar32[-1];
              auVar65 = *pauVar32;
              uVar49 = uVar49 - 8;
              pauVar25 = pauVar37 + -1;
              uVar18 = *(undefined8 *)pauVar37[-1];
              auVar69 = *pauVar37;
              pauVar37 = pauVar37 + 2;
              *(ulong *)(pauVar32[-1] + 8) =
                   CONCAT44((float)((ulong)*(undefined8 *)(*pauVar25 + 8) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(pauVar32[-1] + 8) >> 0x20),
                            (float)*(undefined8 *)(*pauVar25 + 8) +
                            (float)*(undefined8 *)(pauVar32[-1] + 8));
              *(ulong *)pauVar32[-1] =
                   CONCAT44((float)((ulong)uVar18 >> 0x20) + (float)((ulong)uVar35 >> 0x20),
                            (float)uVar18 + (float)uVar35);
              *(ulong *)(*pauVar32 + 8) =
                   CONCAT44(auVar69._12_4_ + auVar65._12_4_,auVar69._8_4_ + auVar65._8_4_);
              *(ulong *)*pauVar32 =
                   CONCAT44(auVar69._4_4_ + auVar65._4_4_,auVar69._0_4_ + auVar65._0_4_);
              pauVar32 = pauVar32 + 2;
            } while (uVar49 != 0);
            if (uVar44 - uVar45 == 0) goto LAB_00318084;
          }
          lVar50 = lVar50 + lVar54 * 4;
          lVar46 = uVar45 + lVar59 * -2;
          pfVar40 = (float *)((long)local_170 + uVar45 * 4);
          do {
            lVar51 = lVar46 * 4;
            bVar30 = lVar46 != -1;
            lVar46 = lVar46 + 1;
            *(float *)(lVar50 + lVar51) = *pfVar40 + *(float *)(lVar50 + lVar51);
            pfVar40 = pfVar40 + 1;
          } while (bVar30);
        }
      }
LAB_00318084:
      if (cVar41 == '\0') {
        if (lVar59 == 0) {
          dVar72 = 0.0;
        }
        else {
          uVar44 = lVar59 - 1U & 0x3fffffffffffffff;
          lVar50 = (*(long **)(param_2 + 0x100))[3];
          lVar46 = **(long **)(param_2 + 0x100);
          pfVar40 = (float *)(lVar46 + lVar50 * 4 + lVar39 * 4);
          if (uVar44 < 7) {
            dVar72 = 0.0;
            pfVar36 = pfVar40;
          }
          else {
            uVar44 = uVar44 + 1;
            dVar72 = 0.0;
            uVar49 = uVar44 & 0x7ffffffffffffff8;
            pfVar36 = pfVar40 + uVar49;
            puVar53 = (undefined8 *)(lVar46 + lVar50 * 4 + lVar39 * 4 + 0x10);
            uVar45 = uVar49;
            do {
              puVar1 = puVar53 + -2;
              puVar9 = puVar53 + -1;
              puVar11 = puVar53 + 1;
              uVar35 = *puVar53;
              uVar45 = uVar45 - 8;
              puVar53 = puVar53 + 4;
              dVar61 = (double)((float)*puVar1 * 3.0517578e-05);
              dVar62 = (double)((float)((ulong)*puVar1 >> 0x20) * 3.0517578e-05);
              dVar73 = (double)((float)*puVar9 * 3.0517578e-05);
              dVar13 = (double)((float)((ulong)*puVar9 >> 0x20) * 3.0517578e-05);
              dVar63 = (double)((float)uVar35 * 3.0517578e-05);
              dVar64 = (double)((float)((ulong)uVar35 >> 0x20) * 3.0517578e-05);
              dVar19 = (double)((float)*puVar11 * 3.0517578e-05);
              dVar20 = (double)((float)((ulong)*puVar11 >> 0x20) * 3.0517578e-05);
              dVar72 = dVar72 + dVar61 * dVar61 + dVar62 * dVar62 + dVar73 * dVar73 +
                       dVar13 * dVar13 + dVar63 * dVar63 + dVar64 * dVar64 + dVar19 * dVar19 +
                       dVar20 * dVar20;
            } while (uVar45 != 0);
            if (uVar44 == uVar49) goto LAB_00318308;
          }
          do {
            pfVar34 = pfVar36 + 1;
            dVar72 = dVar72 + (double)(*pfVar36 * 3.0517578e-05) *
                              (double)(*pfVar36 * 3.0517578e-05);
            pfVar36 = pfVar34;
          } while (pfVar34 != pfVar40 + lVar59);
        }
LAB_00318308:
                    /* try { // try from 0031830c to 0031830f has its CatchHandler @ 003188f8 */
        pdVar33 = (double *)FUN_0033429c(*(undefined8 *)(param_2 + 0x118));
        local_190 = (float *)0x0;
        pfStack_188 = (float *)0x0;
        local_180 = (float *)0x0;
        dVar73 = 0.0;
        *pdVar33 = dVar72 / (double)lVar59;
        uVar44 = *(ulong *)(param_2 + 0xc0);
        if (uVar44 != 0) {
          if (uVar44 >> 0x3e != 0) goto LAB_003187c8;
                    /* try { // try from 0031833c to 0031833f has its CatchHandler @ 003188f4 */
          local_190 = (float *)FUN_00759c3c(uVar44 << 2);
          local_180 = local_190 + uVar44;
          uVar45 = 0;
          pfStack_188 = local_190;
          do {
            pfVar40 = local_190;
            fVar74 = *(float *)(**(long **)(param_2 + 0xf0) + (*(long **)(param_2 + 0xf0))[3] * 4 +
                               uVar45 * 4) -
                     *(float *)(**(long **)(param_2 + 0x100) + (*(long **)(param_2 + 0x100))[3] * 4
                                + lVar54 * 4 + lVar38 * -4 + lVar59 * -8 + uVar45 * 4);
            if (pfStack_188 < local_180) {
              pfVar36 = pfStack_188 + 1;
              *pfStack_188 = fVar74;
            }
            else {
              sVar57 = (long)pfStack_188 - (long)local_190;
              lVar39 = (long)sVar57 >> 2;
              uVar49 = lVar39 + 1;
              if (uVar49 >> 0x3e != 0) {
                if (*(long *)(lVar8 + 0x28) == local_90) {
                    /* try { // try from 0031878c to 003187ab has its CatchHandler @ 00318938 */
                  FUN_002febf0(&local_190);
LAB_00318794:
                  if (*(long *)(lVar8 + 0x28) == local_90) {
                    /* WARNING: Subroutine does not return */
                    FUN_002f9ee0();
                  }
                }
                goto LAB_003189ac;
              }
              uVar48 = (long)local_180 - (long)local_190 >> 1;
              if (uVar48 <= uVar49) {
                uVar48 = uVar49;
              }
              if (0x7ffffffffffffffb < (ulong)((long)local_180 - (long)local_190)) {
                uVar48 = 0x3fffffffffffffff;
              }
              if (uVar48 == 0) {
                pfVar34 = (float *)0x0;
              }
              else {
                if (uVar48 >> 0x3e != 0) goto LAB_00318794;
                    /* try { // try from 003183fc to 003183ff has its CatchHandler @ 00318934 */
                pfVar34 = (float *)FUN_00759c3c(uVar48 << 2);
              }
              pfVar36 = pfVar34 + lVar39 + 1;
              pfVar34[lVar39] = fVar74;
              memcpy(pfVar34,pfVar40,sVar57);
              local_190 = pfVar34;
              local_180 = pfVar34 + uVar48;
              if (pfVar40 != (float *)0x0) {
                pfStack_188 = pfVar36;
                free(pfVar40);
                uVar44 = *(ulong *)(param_2 + 0xc0);
              }
            }
            uVar45 = uVar45 + 1;
            pfStack_188 = pfVar36;
          } while (uVar45 < uVar44);
          if (local_190 != pfVar36) {
            dVar73 = 0.0;
            pcVar42 = (char *)((long)pfVar36 + (-4 - (long)local_190));
            pfVar40 = local_190;
            if ((char *)0x1b < pcVar42) {
              pfVar40 = local_190 + 4;
              uVar44 = ((ulong)pcVar42 >> 2) + 1;
              uVar49 = uVar44 & 0x7ffffffffffffff8;
              uVar45 = uVar49;
              do {
                pfVar34 = pfVar40 + -4;
                pfVar10 = pfVar40 + -2;
                pfVar12 = pfVar40 + 2;
                uVar35 = *(undefined8 *)pfVar40;
                uVar45 = uVar45 - 8;
                pfVar40 = pfVar40 + 8;
                dVar61 = (double)((float)*(undefined8 *)pfVar34 * 3.0517578e-05);
                dVar62 = (double)((float)((ulong)*(undefined8 *)pfVar34 >> 0x20) * 3.0517578e-05);
                dVar72 = (double)((float)*(undefined8 *)pfVar10 * 3.0517578e-05);
                dVar13 = (double)((float)((ulong)*(undefined8 *)pfVar10 >> 0x20) * 3.0517578e-05);
                dVar63 = (double)((float)uVar35 * 3.0517578e-05);
                dVar64 = (double)((float)((ulong)uVar35 >> 0x20) * 3.0517578e-05);
                dVar19 = (double)((float)*(undefined8 *)pfVar12 * 3.0517578e-05);
                dVar20 = (double)((float)((ulong)*(undefined8 *)pfVar12 >> 0x20) * 3.0517578e-05);
                dVar73 = dVar73 + dVar61 * dVar61 + dVar62 * dVar62 + dVar72 * dVar72 +
                         dVar13 * dVar13 + dVar63 * dVar63 + dVar64 * dVar64 + dVar19 * dVar19 +
                         dVar20 * dVar20;
              } while (uVar45 != 0);
              pfVar40 = local_190 + uVar49;
              if (uVar44 == uVar49) goto LAB_0031851c;
            }
            do {
              pfVar34 = pfVar40 + 1;
              dVar73 = dVar73 + (double)(*pfVar40 * 3.0517578e-05) *
                                (double)(*pfVar40 * 3.0517578e-05);
              pfVar40 = pfVar34;
            } while (pfVar34 != pfVar36);
          }
        }
LAB_0031851c:
        pfVar36 = pfStack_188;
        pfVar40 = local_190;
                    /* try { // try from 00318520 to 0031853f has its CatchHandler @ 00318908 */
        lVar38 = FUN_0033429c(*(undefined8 *)(param_2 + 0x118));
        *(double *)(lVar38 + 8) = dVar73 / (double)((long)pfVar36 - (long)pfVar40 >> 2);
        FUN_003342ac(*(undefined8 *)(param_2 + 0x118));
        if (local_190 != (float *)0x0) {
          pfStack_188 = local_190;
          free(local_190);
        }
        *(long *)(*(long *)(param_2 + 0xf0) + 0x18) =
             *(long *)(*(long *)(param_2 + 0xf0) + 0x18) + *(long *)(param_2 + 0xc0);
      }
      else {
        *(long *)(*(long *)(param_2 + 0xf0) + 0x18) =
             *(long *)(*(long *)(param_2 + 0xf0) + 0x18) + lVar59;
      }
      if (local_158 != (void *)0x0) {
        local_150 = local_158;
        free(local_158);
      }
      if (local_170 != (void *)0x0) {
        local_168 = local_170;
        free(local_170);
      }
      if (local_128 != (void *)0x0) {
        local_120 = local_128;
        free(local_128);
      }
      if (local_140 != (void **)0x0) {
        ppvStack_138 = local_140;
        free(local_140);
      }
      if (local_e0 != (void *)0x0) {
        local_d8 = local_e0;
        free(local_e0);
      }
      if (local_f8 != (void *)0x0) {
        local_f0 = local_f8;
        free(local_f8);
      }
      if (local_110 != (void *)0x0) {
        pvStack_108 = local_110;
        free(local_110);
      }
      if (local_c0 != (undefined4 *)0x0) {
        local_b8 = local_c0;
        free(local_c0);
      }
      plVar55 = *(long **)(param_2 + 0xf0);
      lVar38 = *(long *)(param_2 + 0xc0);
    } while ((ulong)(lVar38 << 1) <= (ulong)(plVar55[4] - plVar55[3]));
  }
  uVar44 = *(ulong *)(param_2 + 0xb8);
  if ((ulong)(*(long *)(*(long *)(param_2 + 0xf8) + 0x20) -
             *(long *)(*(long *)(param_2 + 0xf8) + 0x18)) < uVar44 + lVar38) {
                    /* try { // try from 00317bf4 to 00317bfb has its CatchHandler @ 0031888c */
    local_100 = (char *)FUN_00759c3c(0x20);
    auVar65 = _DAT_00200660;
    uVar26 = s_invalid_output_buffer_size_001d3626._18_8_;
    uVar18 = s_invalid_output_buffer_size_001d3626._0_8_;
    uVar35 = CONCAT26(s_invalid_output_buffer_size_001d3626._16_2_,
                      s_invalid_output_buffer_size_001d3626._10_6_);
    *(ulong *)(local_100 + 8) =
         CONCAT62(s_invalid_output_buffer_size_001d3626._10_6_,
                  s_invalid_output_buffer_size_001d3626._8_2_);
    *(undefined8 *)local_100 = uVar18;
    *(undefined8 *)(local_100 + 0x12) = uVar26;
    *(undefined8 *)(local_100 + 10) = uVar35;
    pvStack_108 = auVar65._8_8_;
    local_110 = auVar65._0_8_;
    local_100[0x1a] = '\0';
                    /* try { // try from 00317c28 to 00317c43 has its CatchHandler @ 00318878 */
    FUN_00372794(&local_110,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/nc/src/deep_filter_net/krisp_nc_df_processor.cpp"
                 ,0xce,"process");
    if (((ulong)local_110 & 1) != 0) {
      free(local_100);
    }
    uVar44 = *(ulong *)(param_2 + 0xb8);
  }
  local_110 = (void *)0x0;
  pvStack_108 = (void *)0x0;
  local_100 = (char *)0x0;
  if (uVar44 == 0) {
    *(undefined8 *)(*(long *)(param_2 + 0xf8) + 0x18) =
         *(undefined8 *)(*(long *)(param_2 + 0xf8) + 0x18);
    bVar7 = param_4[1];
    lVar38 = 0;
  }
  else {
    if (uVar44 >> 0x3e != 0) {
      if (*(long *)(lVar8 + 0x28) == local_90) {
                    /* try { // try from 00318854 to 0031885b has its CatchHandler @ 003188d0 */
        uVar35 = FUN_002febf0(&local_110);
                    /* catch() { ... } // from try @ 00318660 with catch @ 0031885c */
        if (((ulong)local_140 & 1) != 0) {
          free(local_130);
        }
        if (local_110 != (void *)0x0) {
          pvStack_108 = local_110;
          free(local_110);
        }
        if (local_a8 != (float *)0x0) {
          local_a0 = local_a8;
          free(local_a8);
        }
        if (*(long *)(lVar8 + 0x28) == local_90) {
                    /* WARNING: Subroutine does not return */
          FUN_00755eac(uVar35);
        }
      }
      goto LAB_003189ac;
    }
    lVar54 = uVar44 * 4;
                    /* try { // try from 00317c70 to 00317c77 has its CatchHandler @ 003188d0 */
    local_110 = (void *)FUN_00759c3c(lVar54);
    local_100 = (char *)((long)local_110 + lVar54);
    lVar38 = **(long **)(param_2 + 0xf8) + (*(long **)(param_2 + 0xf8))[3] * 4;
    local_140 = &local_110;
    pvStack_108 = local_110;
    do {
                    /* try { // try from 00317c9c to 00317ca7 has its CatchHandler @ 00318920 */
      FUN_00319120(&local_140,lVar38);
      lVar54 = lVar54 + -4;
      lVar38 = lVar38 + 4;
    } while (lVar54 != 0);
    lVar38 = *(long *)(param_2 + 0xb8);
    *(long *)(*(long *)(param_2 + 0xf8) + 0x18) =
         *(long *)(*(long *)(param_2 + 0xf8) + 0x18) + lVar38;
    bVar7 = param_4[1];
  }
  if ((bVar7 & 1) == 0) {
    lVar54 = *(long *)(param_2 + 0x100);
    if ((ulong)(*(long *)(lVar54 + 0x20) - *(long *)(lVar54 + 0x18)) <
        (ulong)(*(long *)(param_2 + 0xc0) + lVar38)) {
                    /* try { // try from 0031862c to 00318633 has its CatchHandler @ 00318874 */
      local_130 = (char *)FUN_00759c3c(0x30);
      uVar26 = s_invalid_energy_calculation_outpu_001e8905._16_8_;
      uVar18 = s_invalid_energy_calculation_outpu_001e8905._0_8_;
      uVar35 = CONCAT35(s_invalid_energy_calculation_outpu_001e8905._29_3_,
                        s_invalid_energy_calculation_outpu_001e8905._24_5_);
      ppvStack_138 = SUB168(_DAT_00200970,8);
      local_140 = SUB168(_DAT_00200970,0);
      *(undefined8 *)(local_130 + 8) = s_invalid_energy_calculation_outpu_001e8905._8_8_;
      *(undefined8 *)local_130 = uVar18;
      *(undefined8 *)(local_130 + 0x18) = uVar35;
      *(undefined8 *)(local_130 + 0x10) = uVar26;
      uVar18 = s_invalid_energy_calculation_outpu_001e8905._37_8_;
      uVar35 = CONCAT53(s_invalid_energy_calculation_outpu_001e8905._32_5_,
                        s_invalid_energy_calculation_outpu_001e8905._29_3_);
      local_130[0x2d] = '\0';
      *(undefined8 *)(local_130 + 0x25) = uVar18;
      *(undefined8 *)(local_130 + 0x1d) = uVar35;
                    /* try { // try from 00318660 to 0031867b has its CatchHandler @ 0031885c */
      FUN_00372794(&local_140,
                   "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/nc/src/deep_filter_net/krisp_nc_df_processor.cpp"
                   ,0xda,"process");
      if (((ulong)local_140 & 1) != 0) {
        free(local_130);
      }
      cVar41 = param_4[1];
      *(long *)(*(long *)(param_2 + 0x100) + 0x18) =
           *(long *)(*(long *)(param_2 + 0x100) + 0x18) + *(long *)(param_2 + 0xb8);
      if (cVar41 != '\0') goto LAB_003186d8;
    }
    else {
      *(long *)(lVar54 + 0x18) = *(long *)(lVar54 + 0x18) + lVar38;
    }
                    /* try { // try from 003186bc to 003186e7 has its CatchHandler @ 003188d4 */
    lVar38 = FUN_0033429c(*(undefined8 *)(param_2 + 0x118));
    *(undefined8 *)(lVar38 + 0x10) = 0xbff0000000000000;
    FUN_00334008(*(undefined8 *)(param_2 + 0x118),param_4[3]);
  }
LAB_003186d8:
  FUN_00349f00(param_1,*(undefined8 *)(param_2 + 0xe8),&local_110);
  if (local_110 != (void *)0x0) {
    pvStack_108 = local_110;
    free(local_110);
  }
  if (local_a8 != (float *)0x0) {
    local_a0 = local_a8;
    free(local_a8);
  }
  if (*(long *)(lVar8 + 0x28) == local_90) {
    return;
  }
LAB_003189ac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003189b0  FUN_003189b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003189b0(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  void *__dest;
  void *pvVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  size_t sVar21;
  void *pvVar22;
  long lVar23;
  undefined8 uVar24;
  void *local_c0;
  undefined8 *puStack_b8;
  undefined8 *local_b0;
  void *local_a0;
  void *pvStack_98;
  char *local_90;
  void **local_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  plVar12 = (long *)(**(code **)(**(long **)(param_2 + 0x108) + 0x10))();
  plVar13 = (long *)(**(code **)(**(long **)(param_2 + 0x108) + 0x18))(*(long **)(param_2 + 0x108));
  puVar19 = (undefined8 *)*plVar12;
  sVar21 = param_3[1] - (long)*param_3;
  if (sVar21 != 0) {
    memmove((void *)*puVar19,(void *)*param_3,sVar21);
  }
  sVar21 = param_4[1] - (long)*param_4;
  if (sVar21 != 0) {
    memmove((void *)puVar19[8],(void *)*param_4,sVar21);
  }
  uVar24 = _UNK_00200828;
  pvVar22 = _DAT_00200820;
  if ((*(byte *)(param_2 + 0x128) & 1) == 0) {
    lVar14 = *plVar12;
    if (0x80 < (ulong)(plVar12[1] - lVar14)) {
      uVar20 = 2;
      lVar23 = 0x80;
      do {
        puVar19 = (undefined8 *)(*plVar13 + lVar23);
        lVar17 = FUN_0034cd58((undefined8 *)(lVar14 + lVar23) + 1);
        lVar15 = FUN_0034cd58(puVar19 + 1);
        if (lVar17 != lVar15) {
          local_90 = (char *)FUN_00759c3c(0x50);
          uVar11 = s_DfProcessor__infer____input_tens_001be44c._67_8_;
          uVar7 = CONCAT35(s_DfProcessor__infer____input_tens_001be44c._64_3_,
                           s_DfProcessor__infer____input_tens_001be44c._59_5_);
          local_90[0x4b] = '\0';
          uVar9 = s_DfProcessor__infer____input_tens_001be44c._48_8_;
          uVar8 = s_DfProcessor__infer____input_tens_001be44c._32_8_;
          pvStack_98 = (void *)uVar24;
          local_a0 = pvVar22;
          uVar6 = CONCAT53(s_DfProcessor__infer____input_tens_001be44c._59_5_,
                           s_DfProcessor__infer____input_tens_001be44c._56_3_);
          *(undefined8 *)(local_90 + 0x28) = s_DfProcessor__infer____input_tens_001be44c._40_8_;
          *(undefined8 *)(local_90 + 0x20) = uVar8;
          *(undefined8 *)(local_90 + 0x38) = uVar6;
          *(undefined8 *)(local_90 + 0x30) = uVar9;
          uVar10 = s_DfProcessor__infer____input_tens_001be44c._24_8_;
          uVar9 = s_DfProcessor__infer____input_tens_001be44c._16_8_;
          uVar8 = s_DfProcessor__infer____input_tens_001be44c._8_8_;
          uVar6 = s_DfProcessor__infer____input_tens_001be44c._0_8_;
          *(undefined8 *)(local_90 + 0x43) = uVar11;
          *(undefined8 *)(local_90 + 0x3b) = uVar7;
          *(undefined8 *)(local_90 + 8) = uVar8;
          *(undefined8 *)local_90 = uVar6;
          *(undefined8 *)(local_90 + 0x18) = uVar10;
          *(undefined8 *)(local_90 + 0x10) = uVar9;
                    /* try { // try from 00318b5c to 00318b73 has its CatchHandler @ 00318e68 */
          FUN_00372794(&local_a0,
                       "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/nc/src/deep_filter_net/krisp_nc_df_processor.cpp"
                       ,0x118,"infer");
          if (((ulong)local_a0 & 1) != 0) {
            free(local_90);
          }
        }
        pvVar16 = (void *)*puVar19;
        lVar17 = FUN_0034cd58(puVar19 + 1);
        if (lVar17 != 0) {
          memmove(*(void **)(lVar14 + lVar23),pvVar16,lVar17 << 2);
        }
        lVar14 = *plVar12;
        uVar20 = uVar20 + 1;
        lVar23 = lVar23 + 0x40;
      } while (uVar20 < (ulong)(plVar12[1] - lVar14 >> 6));
    }
  }
  else {
    *(undefined1 *)(param_2 + 0x128) = 0;
    lVar14 = *plVar12;
    if (0x80 < (ulong)(plVar12[1] - lVar14)) {
      uVar20 = 2;
      lVar23 = 0x80;
      do {
        pvVar22 = *(void **)(lVar14 + lVar23);
        lVar14 = FUN_0034cd58((undefined8 *)(lVar14 + lVar23) + 1);
        if (0 < lVar14) {
          memset(pvVar22,0,lVar14 << 2);
        }
        lVar14 = *plVar12;
        uVar20 = uVar20 + 1;
        lVar23 = lVar23 + 0x40;
      } while (uVar20 < (ulong)(plVar12[1] - lVar14 >> 6));
    }
  }
  plVar13 = (long *)*plVar13;
  (**(code **)(**(long **)(param_2 + 0x108) + 0x28))();
  local_a0 = (void *)0x0;
  pvStack_98 = (void *)0x0;
  local_90 = (char *)0x0;
                    /* try { // try from 00318bc4 to 00318bf7 has its CatchHandler @ 00318e5c */
  uVar20 = FUN_0034cd58(plVar13 + 1);
  pvVar16 = pvStack_98;
  pvVar22 = local_a0;
  if ((ulong)((long)local_90 - (long)local_a0 >> 2) < uVar20) {
    if (uVar20 >> 0x3e == 0) {
      __dest = (void *)FUN_00759c3c(uVar20 << 2);
      pvVar1 = (void *)((long)__dest + uVar20 * 4);
      pvVar2 = (void *)((long)__dest + ((long)pvVar16 - (long)pvVar22));
      memcpy(__dest,pvVar22,(long)pvVar16 - (long)pvVar22);
      local_a0 = __dest;
      pvStack_98 = pvVar2;
      local_90 = (char *)pvVar1;
      if (pvVar22 != (void *)0x0) {
        free(pvVar22);
      }
      goto LAB_00318c24;
    }
    if (*(long *)(lVar5 + 0x28) != local_78) goto LAB_00318ec8;
                    /* try { // try from 00318e38 to 00318e3f has its CatchHandler @ 00318e5c */
    FUN_002febf0(&local_a0);
LAB_00318e40:
    if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* try { // try from 00318e54 to 00318e5b has its CatchHandler @ 00318e64 */
      uVar24 = FUN_0031921c(&local_c0);
                    /* catch() { ... } // from try @ 00318bc4 with catch @ 00318e5c
                       catch() { ... } // from try @ 00318e38 with catch @ 00318e5c */
      if (local_a0 != (void *)0x0) {
        pvStack_98 = local_a0;
        free(local_a0);
      }
      if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_00755eac(uVar24);
      }
    }
  }
  else {
LAB_00318c24:
    local_c0 = (void *)0x0;
    puStack_b8 = (undefined8 *)0x0;
    local_b0 = (undefined8 *)0x0;
                    /* try { // try from 00318c2c to 00318c67 has its CatchHandler @ 00318e64 */
    lVar14 = FUN_0034cd58(plVar13 + 9);
    puVar19 = puStack_b8;
    pvVar22 = local_c0;
    if (lVar14 < 0) {
      lVar14 = lVar14 + 1;
    }
    uVar20 = lVar14 >> 1;
    if ((ulong)((long)local_b0 - (long)local_c0 >> 3) < uVar20) {
      if (uVar20 >> 0x3d != 0) goto LAB_00318e40;
      pvVar16 = (void *)FUN_00759c3c(uVar20 << 3);
      puVar3 = (undefined8 *)((long)pvVar16 + uVar20 * 8);
      puVar4 = (undefined8 *)((long)pvVar16 + ((long)puVar19 - (long)pvVar22));
      memcpy(pvVar16,pvVar22,(long)puVar19 - (long)pvVar22);
      local_c0 = pvVar16;
      puStack_b8 = puVar4;
      local_b0 = puVar3;
      if (pvVar22 != (void *)0x0) {
        free(pvVar22);
      }
    }
    lVar14 = *plVar13;
                    /* try { // try from 00318c98 to 00318c9f has its CatchHandler @ 00318e64 */
    lVar23 = FUN_0034cd58(plVar13 + 1);
    local_80 = &local_a0;
    if (lVar23 != 0) {
      lVar23 = lVar23 << 2;
      do {
                    /* try { // try from 00318cb0 to 00318cbb has its CatchHandler @ 00318e80 */
        FUN_00319120(&local_80,lVar14);
        lVar23 = lVar23 + -4;
        lVar14 = lVar14 + 4;
      } while (lVar23 != 0);
    }
    lVar23 = 0;
                    /* try { // try from 00318cec to 00318cf3 has its CatchHandler @ 00318e88 */
    for (lVar14 = 0; lVar17 = FUN_0034cd58(plVar13 + 9), pvVar22 = local_c0, lVar14 < lVar17;
        lVar14 = lVar14 + 2) {
      uVar24 = *(undefined8 *)(plVar13[8] + lVar23);
      if (puStack_b8 < local_b0) {
        puVar19 = puStack_b8 + 1;
        *puStack_b8 = uVar24;
      }
      else {
        sVar21 = (long)puStack_b8 - (long)local_c0;
        lVar17 = (long)sVar21 >> 3;
        uVar20 = lVar17 + 1;
        if (uVar20 >> 0x3d != 0) {
          if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* try { // try from 00318e04 to 00318e23 has its CatchHandler @ 00318e84 */
            FUN_0031921c(&local_c0);
LAB_00318e0c:
            if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
              FUN_002f9ee0();
            }
          }
          goto LAB_00318ec8;
        }
        uVar18 = (long)local_b0 - (long)local_c0 >> 2;
        if (uVar18 <= uVar20) {
          uVar18 = uVar20;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)local_b0 - (long)local_c0)) {
          uVar18 = 0x1fffffffffffffff;
        }
        if (uVar18 == 0) {
          pvVar16 = (void *)0x0;
        }
        else {
          if (uVar18 >> 0x3d != 0) goto LAB_00318e0c;
                    /* try { // try from 00318d50 to 00318d53 has its CatchHandler @ 00318e7c */
          pvVar16 = (void *)FUN_00759c3c(uVar18 << 3);
        }
        puVar3 = (undefined8 *)((long)pvVar16 + lVar17 * 8);
        puVar4 = (undefined8 *)((long)pvVar16 + uVar18 * 8);
        puVar19 = puVar3 + 1;
        *puVar3 = uVar24;
        memcpy(pvVar16,pvVar22,sVar21);
        local_c0 = pvVar16;
        local_b0 = puVar4;
        if (pvVar22 != (void *)0x0) {
          puStack_b8 = puVar19;
          free(pvVar22);
        }
      }
      lVar23 = lVar23 + 8;
      puStack_b8 = puVar19;
    }
    param_1[2] = local_90;
    param_1[1] = pvStack_98;
    *param_1 = local_a0;
    param_1[4] = puStack_b8;
    param_1[3] = local_c0;
    param_1[5] = local_b0;
    if (*(long *)(lVar5 + 0x28) == local_78) {
      return;
    }
  }
LAB_00318ec8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00318ecc  FUN_00318ecc =====

void FUN_00318ecc(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    param_1[4] = pvVar1;
    free(pvVar1);
  }
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    param_1[1] = pvVar1;
    free(pvVar1);
    return;
  }
  return;
}


// ===== 00318f10  FUN_00318f10 =====

void FUN_00318f10(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    param_1[4] = pvVar1;
    free(pvVar1);
  }
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    param_1[1] = pvVar1;
    free(pvVar1);
    return;
  }
  return;
}


// ===== 00318f54  FUN_00318f54 =====

void FUN_00318f54(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[6];
  if (pvVar1 != (void *)0x0) {
    param_1[7] = pvVar1;
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    param_1[4] = pvVar1;
    free(pvVar1);
  }
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    param_1[1] = pvVar1;
    free(pvVar1);
    return;
  }
  return;
}


// ===== 00318fa8  FUN_00318fa8 =====

void FUN_00318fa8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_0033429c(*(undefined8 *)(param_2 + 0x118));
  uVar3 = puVar1[1];
  uVar2 = *puVar1;
  param_1[2] = puVar1[2];
  param_1[1] = uVar3;
  *param_1 = uVar2;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(puVar1 + 3);
  FUN_00315c18(param_1 + 4,puVar1 + 4);
  uVar2 = puVar1[9];
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(puVar1 + 10);
  param_1[9] = uVar2;
  return;
}


// ===== 00319004  FUN_00319004 =====

void FUN_00319004(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007604b8;
  FUN_00712454();
  return;
}


// ===== 00319018  FUN_00319018 =====

void FUN_00319018(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1340 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 0031904c  FUN_0031904c =====

void FUN_0031904c(long param_1)

{
  FUN_00313fd8(param_1 + 0x18);
  return;
}


// ===== 00319054  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00319058  FUN_00319058 =====

void FUN_00319058(undefined8 param_1,void *param_2)

{
  long lVar1;
  long *plVar2;
  
  if (param_2 == (void *)0x0) {
    return;
  }
  plVar2 = *(long **)((long)param_2 + 0x90);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  plVar2 = *(long **)((long)param_2 + 0x18);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  plVar2 = *(long **)((long)param_2 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    free(param_2);
    return;
  }
  free(param_2);
  return;
}


// ===== 00319120  FUN_00319120 =====

long * FUN_00319120(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__src;
  long lVar7;
  undefined4 *puVar8;
  
  puVar6 = (undefined8 *)*param_1;
  puVar3 = (undefined4 *)puVar6[1];
  if (puVar3 < (undefined4 *)puVar6[2]) {
    puVar8 = puVar3 + 1;
    *puVar3 = *param_2;
  }
  else {
    __src = (void *)*puVar6;
    lVar7 = (long)puVar3 - (long)__src >> 2;
    uVar1 = lVar7 + 1;
    if (uVar1 >> 0x3e != 0) {
      FUN_002febf0(puVar6);
LAB_00319218:
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    uVar4 = (long)puVar6[2] - (long)__src;
    uVar5 = (long)uVar4 >> 1;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar4) {
      uVar5 = 0x3fffffffffffffff;
    }
    if (uVar5 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar5 >> 0x3e != 0) goto LAB_00319218;
      __dest = (void *)FUN_00759c3c(uVar5 << 2);
    }
    puVar2 = (undefined4 *)((long)__dest + lVar7 * 4);
    puVar8 = puVar2 + 1;
    *puVar2 = *param_2;
    memcpy(__dest,__src,(long)puVar3 - (long)__src);
    *puVar6 = __dest;
    puVar6[1] = puVar8;
    puVar6[2] = (void *)((long)__dest + uVar5 * 4);
    if (__src != (void *)0x0) {
      free(__src);
    }
  }
  puVar6[1] = puVar8;
  return param_1;
}


// ===== 0031921c  FUN_0031921c =====

void FUN_0031921c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 00319230  FUN_00319230 =====

void FUN_00319230(long param_1)

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


// ===== 00319280  FUN_00319280 =====

void FUN_00319280(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = param_2;
  lVar3 = *(long *)(param_2 + 8);
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (lVar3 != 0) {
                    /* try { // try from 003192c8 to 003192d3 has its CatchHandler @ 00319418 */
    FUN_0031a5ac(param_1 + 1,lVar3);
    param_2 = *param_1;
  }
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(ulong *)(param_2 + 0x10) == 0) {
    uVar2 = FUN_00753a74(0x20);
                    /* try { // try from 00319328 to 00319337 has its CatchHandler @ 00319400 */
    FUN_002fd2b0(auStack_60,
                 "RescaledCoeffBuffer::RescaledCoeffBuffer:: maxBufferSize should be >= 1.");
                    /* try { // try from 0031933c to 00319373 has its CatchHandler @ 003193e4 */
    FUN_00374ee0(uVar2,auStack_60);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
  else if (*(ulong *)(param_2 + 0x10) < *(ulong *)(param_2 + 8)) {
    uVar2 = FUN_00753a74(0x20);
                    /* try { // try from 00319384 to 00319393 has its CatchHandler @ 003193e0 */
    FUN_002fd2b0(auStack_60,
                 "RescaledCoeffBuffer::RescaledCoeffBuffer: initialBufferSize should be <= than maxBufferSize."
                );
                    /* try { // try from 00319398 to 003193cf has its CatchHandler @ 003193d0 */
    FUN_00374ee0(uVar2,auStack_60);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00319440  FUN_00319440 =====

void FUN_00319440(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar5;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    free((void *)*puVar5);
    puVar1 = (undefined8 *)param_1[2];
    puVar5 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = puVar5;
    lVar3 = (long)puVar1 - (long)puVar5;
  }
  if (uVar2 == 1) {
    uVar4 = 0x200;
  }
  else {
    if (uVar2 != 2) goto LAB_003194b0;
    uVar4 = 0x400;
  }
  param_1[4] = uVar4;
LAB_003194b0:
  if (puVar5 != puVar1) {
    do {
      puVar6 = puVar5 + 1;
      free((void *)*puVar5);
      puVar5 = puVar6;
    } while (puVar6 != puVar1);
    lVar3 = param_1[2];
    if (lVar3 != param_1[1]) {
      param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
    }
  }
  if ((void *)*param_1 == (void *)0x0) {
    return;
  }
  free((void *)*param_1);
  return;
}


// ===== 00319510  FUN_00319510 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00319510(float param_1,long *param_2)

{
  float *pfVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  ulong uVar14;
  float fVar15;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar6 = *param_2;
  uVar14 = param_2[6];
  if (*(ulong *)(lVar6 + 0x10) < uVar14) {
    local_50 = (char *)FUN_00759c3c(0x30);
    uVar5 = s_bufferLen_should_be_<__than_maxB_001d7b20._16_8_;
    uVar4 = s_bufferLen_should_be_<__than_maxB_001d7b20._0_8_;
    uVar3 = CONCAT62(s_bufferLen_should_be_<__than_maxB_001d7b20._26_6_,
                     s_bufferLen_should_be_<__than_maxB_001d7b20._24_2_);
    uStack_58 = _UNK_00200118;
    local_60 = _DAT_00200110;
    *(undefined8 *)(local_50 + 8) = s_bufferLen_should_be_<__than_maxB_001d7b20._8_8_;
    *(undefined8 *)local_50 = uVar4;
    *(undefined8 *)(local_50 + 0x18) = uVar3;
    *(undefined8 *)(local_50 + 0x10) = uVar5;
    uVar4 = s_bufferLen_should_be_<__than_maxB_001d7b20._34_8_;
    uVar3 = CONCAT26(s_bufferLen_should_be_<__than_maxB_001d7b20._32_2_,
                     s_bufferLen_should_be_<__than_maxB_001d7b20._26_6_);
    local_50[0x2a] = '\0';
    *(undefined8 *)(local_50 + 0x22) = uVar4;
    *(undefined8 *)(local_50 + 0x1a) = uVar3;
                    /* try { // try from 00319584 to 0031959f has its CatchHandler @ 00319848 */
    FUN_00372794(&local_60,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/nc/src/deep_filter_net/krisp_nc_df_preprocessor.cpp"
                 ,0x6e,&DAT_001b99c7);
    if ((local_60 & 1) != 0) {
      free(local_50);
    }
    lVar6 = *param_2;
  }
  if (uVar14 < *(ulong *)(lVar6 + 8)) {
    local_50 = (char *)FUN_00759c3c(0x30);
    uVar5 = s_bufferLen_should_be_>__than_init_001ec9aa._16_8_;
    uVar4 = s_bufferLen_should_be_>__than_init_001ec9aa._0_8_;
    uVar3 = CONCAT26(s_bufferLen_should_be_>__than_init_001ec9aa._30_2_,
                     s_bufferLen_should_be_>__than_init_001ec9aa._24_6_);
    uStack_58 = _UNK_00200388;
    local_60 = _DAT_00200380;
    *(undefined8 *)(local_50 + 8) = s_bufferLen_should_be_>__than_init_001ec9aa._8_8_;
    *(undefined8 *)local_50 = uVar4;
    *(undefined8 *)(local_50 + 0x18) = uVar3;
    *(undefined8 *)(local_50 + 0x10) = uVar5;
    uVar4 = s_bufferLen_should_be_>__than_init_001ec9aa._38_8_;
    uVar3 = CONCAT62(s_bufferLen_should_be_>__than_init_001ec9aa._32_6_,
                     s_bufferLen_should_be_>__than_init_001ec9aa._30_2_);
    local_50[0x2e] = '\0';
    *(undefined8 *)(local_50 + 0x26) = uVar4;
    *(undefined8 *)(local_50 + 0x1e) = uVar3;
                    /* try { // try from 003195f4 to 0031960f has its CatchHandler @ 00319844 */
    FUN_00372794(&local_60,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/nc/src/deep_filter_net/krisp_nc_df_preprocessor.cpp"
                 ,0x6f,&DAT_001b99c7);
    if ((local_60 & 1) != 0) {
      free(local_50);
    }
  }
  if (param_2[7] == 0) {
    fVar15 = 0.0;
    if ((uVar14 != 0) && (lVar6 = param_2[2], param_2[3] != lVar6)) {
      uVar7 = param_2[5];
      plVar9 = (long *)(lVar6 + (uVar7 >> 10) * 8);
      pfVar11 = (float *)(*plVar9 + (uVar7 & 0x3ff) * 4);
      pfVar1 = (float *)(*(long *)(lVar6 + (param_2[6] + uVar7 >> 7 & 0x1fffffffffffff8)) +
                        (param_2[6] + uVar7 & 0x3ff) * 4);
      if (pfVar11 != pfVar1) {
        pfVar12 = (float *)*plVar9;
        do {
          pfVar13 = pfVar11 + 1;
          if ((long)pfVar13 - (long)pfVar12 == 0x1000) {
            plVar9 = plVar9 + 1;
            pfVar13 = (float *)*plVar9;
            pfVar12 = pfVar13;
          }
          fVar15 = fVar15 + *pfVar11;
          pfVar11 = pfVar13;
        } while (pfVar13 != pfVar1);
      }
    }
    *(float *)(param_2 + 8) = fVar15;
    uVar7 = *(ulong *)(*param_2 + 0x10);
  }
  else {
    uVar7 = *(ulong *)(*param_2 + 0x10);
  }
  if (uVar14 < uVar7) {
    lVar8 = param_2[2];
    lVar6 = param_2[6];
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) + param_1;
    uVar14 = 0;
    if (param_2[3] != lVar8) {
      uVar14 = (param_2[3] - lVar8) * 0x80 - 1;
    }
    uVar7 = lVar6 + param_2[5];
    if (uVar14 == uVar7) {
      FUN_0031b458(param_2 + 1);
      lVar6 = param_2[6];
      lVar8 = param_2[2];
      uVar7 = param_2[5] + lVar6;
    }
    *(float *)(*(long *)(lVar8 + (uVar7 >> 7 & 0x1fffffffffffff8)) + (uVar7 & 0x3ff) * 4) = param_1;
    param_2[6] = lVar6 + 1;
  }
  else {
    uVar7 = param_2[5];
    puVar10 = (undefined8 *)param_2[2];
    uVar14 = uVar7 + _DAT_00200980;
    lVar6 = param_2[6] + _UNK_00200988;
    fVar15 = *(float *)(*(long *)((long)puVar10 + (uVar7 >> 7 & 0x1fffffffffffff8)) +
                       (uVar7 & 0x3ff) * 4);
    param_2[6] = lVar6;
    param_2[5] = uVar14;
    if (0x7ff < uVar14) {
      free((void *)*puVar10);
      lVar6 = param_2[6];
      puVar10 = (undefined8 *)(param_2[2] + 8);
      uVar14 = param_2[5] - 0x400;
      param_2[2] = (long)puVar10;
      param_2[5] = uVar14;
    }
    uVar14 = lVar6 + uVar14;
    uVar7 = 0;
    if ((undefined8 *)param_2[3] != puVar10) {
      uVar7 = (param_2[3] - (long)puVar10) * 0x80 - 1;
    }
    if (uVar7 == uVar14) {
      FUN_0031b458(param_2 + 1);
      lVar6 = param_2[6];
      puVar10 = (undefined8 *)param_2[2];
      uVar14 = param_2[5] + lVar6;
    }
    *(float *)(*(long *)((long)puVar10 + (uVar14 >> 7 & 0x1fffffffffffff8)) + (uVar14 & 0x3ff) * 4)
         = param_1;
    param_2[6] = lVar6 + 1;
    *(float *)(param_2 + 8) = (*(float *)(param_2 + 8) - fVar15) + param_1;
  }
  uVar7 = *(ulong *)(*param_2 + 0x20);
  uVar14 = 0;
  if (uVar7 != 0) {
    uVar14 = (param_2[7] + 1U) / uVar7;
  }
  param_2[7] = (param_2[7] + 1U) - uVar14 * uVar7;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00319878  FUN_00319878 =====

void FUN_00319878(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  void *__ptr;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  uVar6 = param_2[5];
  uVar2 = param_2[4];
  uVar8 = param_2[1];
  uVar7 = *param_2;
  param_1[6] = param_2[6];
  param_1[3] = uVar10;
  param_1[2] = uVar9;
  param_1[5] = uVar6;
  param_1[4] = uVar2;
  param_1[1] = uVar8;
  *param_1 = uVar7;
  FUN_0036c290(param_1 + 7);
                    /* try { // try from 003198c8 to 003198d3 has its CatchHandler @ 00319a40 */
  FUN_003460fc(param_1 + 9,param_2[5],1);
  puVar5 = param_1 + 0xc;
  param_1[0xd] = 0;
  *puVar5 = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  if (((ulong)param_1[5] >> 1) + 1 < (ulong)param_1[6]) {
    uVar2 = FUN_00753a74(0x20);
                    /* try { // try from 003199a8 to 003199b7 has its CatchHandler @ 00319a18 */
    FUN_002fd2b0(auStack_60,
                 "DfPreprocessor::DfPreprocessor: ndDf should be <= than frameLength / 2 + 1.");
                    /* try { // try from 003199bc to 003199f3 has its CatchHandler @ 003199f4 */
    FUN_00374ee0(uVar2,auStack_60);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
  else {
                    /* try { // try from 003198f8 to 003198ff has its CatchHandler @ 00319a3c */
    uVar2 = FUN_00759c3c(0x48);
                    /* try { // try from 00319900 to 0031990b has its CatchHandler @ 00319a2c */
    FUN_00319280(uVar2,param_1);
    __ptr = (void *)param_1[0xf];
    param_1[0xf] = uVar2;
    if (__ptr != (void *)0x0) {
      FUN_00319440((long)__ptr + 8);
      free(__ptr);
      uVar2 = param_1[0xf];
    }
                    /* try { // try from 0031992c to 00319957 has its CatchHandler @ 00319a48 */
    FUN_00319510(0x3f800000,uVar2);
    uVar3 = param_1[5];
    uVar4 = (long)(param_1[0xd] - param_1[0xc]) >> 2;
    if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
      if (uVar3 < uVar4) {
        param_1[0xd] = param_1[0xc] + uVar3 * 4;
      }
    }
    else {
      FUN_002feac4(puVar5,uVar3 - uVar4);
    }
                    /* try { // try from 00319968 to 00319973 has its CatchHandler @ 00319a28 */
    FUN_0034ad0c(auStack_60,puVar5);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00319a90  FUN_00319a90 =====

void FUN_00319a90(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_00319440((long)__ptr + 8);
    free(__ptr);
    return;
  }
  return;
}


// ===== 00319acc  FUN_00319acc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00319acc(float *param_1,long *param_2)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  ulong uVar11;
  float *pfVar12;
  ulong uVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  ulong local_50;
  undefined8 uStack_48;
  char *local_40;
  long local_38;
  undefined4 *puVar10;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  puVar2 = (undefined4 *)*param_2;
  puVar3 = (undefined4 *)param_2[1];
  if (puVar2 == puVar3) {
    fVar15 = 0.0;
  }
  else {
    uVar8 = (long)puVar3 + (-4 - (long)puVar2);
    if (uVar8 < 4) {
      fVar15 = 0.0;
      puVar9 = puVar2;
    }
    else {
      fVar15 = 0.0;
      pfVar12 = (float *)(puVar2 + 1);
      uVar8 = (uVar8 >> 2) + 1;
      uVar11 = uVar8 & 0x7ffffffffffffffe;
      puVar9 = puVar2 + uVar11;
      uVar13 = uVar11;
      do {
        pfVar1 = pfVar12 + -1;
        fVar16 = *pfVar12;
        uVar13 = uVar13 - 2;
        pfVar12 = pfVar12 + 2;
        fVar15 = fVar15 + *pfVar1 * *pfVar1 + fVar16 * fVar16;
      } while (uVar13 != 0);
      if (uVar8 == uVar11) goto LAB_00319b78;
    }
    do {
      puVar10 = puVar9 + 1;
      fVar15 = (float)NEON_fmadd(*puVar9,*puVar9,fVar15);
      puVar9 = puVar10;
    } while (puVar10 != puVar3);
  }
LAB_00319b78:
  if (param_1[6] <=
      (fVar15 / (*param_1 * *param_1)) / (float)(ulong)((long)puVar3 - (long)puVar2 >> 2)) {
    FUN_00319510(*(undefined8 *)(param_1 + 0x1e));
  }
  lVar14 = *(long *)(param_1 + 0x1e);
  uVar8 = *(ulong *)(lVar14 + 0x30);
  if (uVar8 == 0) {
    local_40 = (char *)FUN_00759c3c(0x40);
    uVar7 = s_RescaledCoeffBuffer__getMean____b_001ea9cb._24_8_;
    uVar6 = s_RescaledCoeffBuffer__getMean____b_001ea9cb._16_8_;
    uVar5 = s_RescaledCoeffBuffer__getMean____b_001ea9cb._0_8_;
    uStack_48 = _UNK_002006d8;
    local_50 = _DAT_002006d0;
    *(undefined8 *)(local_40 + 8) = s_RescaledCoeffBuffer__getMean____b_001ea9cb._8_8_;
    *(undefined8 *)local_40 = uVar5;
    *(undefined8 *)(local_40 + 0x18) = uVar7;
    *(undefined8 *)(local_40 + 0x10) = uVar6;
    uVar7 = s_RescaledCoeffBuffer__getMean____b_001ea9cb._48_8_;
    uVar6 = s_RescaledCoeffBuffer__getMean____b_001ea9cb._40_8_;
    uVar5 = s_RescaledCoeffBuffer__getMean____b_001ea9cb._32_8_;
    local_40[0x38] = '\0';
    *(undefined8 *)(local_40 + 0x28) = uVar6;
    *(undefined8 *)(local_40 + 0x20) = uVar5;
    *(undefined8 *)(local_40 + 0x30) = uVar7;
                    /* try { // try from 00319bf8 to 00319c13 has its CatchHandler @ 00319c60 */
    FUN_00372794(&local_50,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/nc/src/deep_filter_net/krisp_nc_df_preprocessor.cpp"
                 ,0x94,"getMean");
    if ((local_50 & 1) != 0) {
      free(local_40);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return 1.0 / SQRT(*(float *)(lVar14 + 0x40) / (float)uVar8);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00319c90  FUN_00319c90 =====

void FUN_00319c90(undefined8 *param_1,float param_2,long param_3,long *param_4)

{
  void *pvVar1;
  float *pfVar2;
  long lVar3;
  double dVar4;
  undefined4 *puVar5;
  void *pvVar6;
  bool bVar7;
  float *pfVar8;
  float *pfVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  float *pfVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  float *pfVar19;
  size_t sVar20;
  float *pfVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  float fVar26;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 *local_120;
  undefined4 *local_118;
  undefined4 *local_110;
  undefined4 *local_108;
  undefined4 *local_100;
  undefined4 *local_f8;
  float *local_f0;
  float *pfStack_e8;
  float *local_e0;
  float *local_d8;
  float *local_d0;
  float *local_c8;
  void *local_c0;
  void *pvStack_b8;
  undefined8 local_b0;
  void *local_a8;
  void *local_a0;
  void *local_98;
  long local_90;
  
  lVar3 = tpidr_el0;
  local_90 = *(long *)(lVar3 + 0x28);
  sVar20 = param_4[1] - *param_4;
  if ((long)sVar20 >> 2 != *(ulong *)(param_3 + 0x28)) {
    uVar12 = FUN_00753a74(0x20);
                    /* try { // try from 0031a2c4 to 0031a2d3 has its CatchHandler @ 0031a3a8 */
    FUN_002fd2b0(&local_a8,
                 "DfPreprocessor::calcFeatures: input.size() should be equal to frameLength.");
                    /* try { // try from 0031a2d8 to 0031a313 has its CatchHandler @ 0031a384 */
    FUN_00374ee0(uVar12,&local_a8);
    if (*(long *)(lVar3 + 0x28) == local_90) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar12,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_0031a4e4;
  }
  local_a8 = (void *)0x0;
  local_a0 = (void *)0x0;
  local_98 = (void *)0x0;
  if (param_4[1] == *param_4) {
LAB_00319d2c:
                    /* try { // try from 00319d30 to 00319d3f has its CatchHandler @ 0031a3c4 */
    FUN_0036cee8(*(undefined8 *)(param_3 + 0x38),param_4,param_3 + 0x60,&local_a8);
    local_c0 = (void *)0x0;
    pvStack_b8 = (void *)0x0;
    local_b0 = 0;
                    /* try { // try from 00319d4c to 00319d5b has its CatchHandler @ 0031a3bc */
    FUN_00346588(param_3 + 0x48,&local_a8,&local_c0);
    pvVar6 = pvStack_b8;
    pvVar1 = local_c0;
    local_d8 = (float *)0x0;
    local_d0 = (float *)0x0;
    local_c8 = (float *)0x0;
    uVar18 = (long)pvStack_b8 - (long)local_c0;
    if (uVar18 == 0) {
      pfVar8 = (float *)0x0;
      local_f0 = (float *)0x0;
      pfStack_e8 = (float *)0x0;
      local_e0 = (float *)0x0;
    }
    else {
      if ((long)uVar18 < 0) goto LAB_0031a32c;
                    /* try { // try from 00319d74 to 00319d7b has its CatchHandler @ 0031a3e0 */
      pfVar8 = (float *)FUN_00759c3c(uVar18);
      pfVar2 = (float *)((long)pfVar8 + uVar18);
      local_d8 = pfVar8;
      local_c8 = pfVar2;
      memcpy(pfVar8,pvVar1,uVar18);
      bVar7 = (long)pvVar6 - (long)pvVar1 == 0;
      pfVar19 = pfVar8;
      local_d0 = pfVar2;
      if (bVar7) {
        bVar7 = true;
        if (pvVar6 != pvVar1) goto LAB_00319e34;
LAB_00319e7c:
        local_e0 = (float *)0x0;
        pfStack_e8 = (float *)0x0;
        local_f0 = (float *)0x0;
        pfVar13 = pfStack_e8;
        dVar4 = DAT_001b7060;
        if (bVar7) goto LAB_00319f70;
      }
      else {
        uVar14 = ((long)pvVar6 - (long)pvVar1) - 8;
        pfVar13 = pfVar8;
        if (uVar14 < 0x38) {
LAB_00319e10:
          do {
            pfVar9 = pfVar13 + 2;
            *(ulong *)pfVar13 =
                 CONCAT44((float)((ulong)*(undefined8 *)pfVar13 >> 0x20) * param_2,
                          (float)*(undefined8 *)pfVar13 * param_2);
            pfVar13 = pfVar9;
          } while (pfVar9 != pfVar2);
        }
        else {
          pfVar9 = pfVar8 + 8;
          uVar14 = (uVar14 >> 3) + 1;
          uVar15 = uVar14 & 0x3ffffffffffffff8;
          pfVar13 = pfVar8 + uVar15 * 2;
          uVar16 = uVar15;
          do {
            uVar16 = uVar16 - 8;
            pfVar9[-8] = pfVar9[-8] * param_2;
            pfVar9[-7] = pfVar9[-7] * param_2;
            pfVar9[-6] = pfVar9[-6] * param_2;
            pfVar9[-5] = pfVar9[-5] * param_2;
            pfVar9[-4] = pfVar9[-4] * param_2;
            pfVar9[-3] = pfVar9[-3] * param_2;
            pfVar9[-2] = pfVar9[-2] * param_2;
            pfVar9[-1] = pfVar9[-1] * param_2;
            *pfVar9 = *pfVar9 * param_2;
            pfVar9[1] = pfVar9[1] * param_2;
            pfVar9[2] = pfVar9[2] * param_2;
            pfVar9[3] = pfVar9[3] * param_2;
            pfVar9[4] = pfVar9[4] * param_2;
            pfVar9[5] = pfVar9[5] * param_2;
            pfVar9[6] = pfVar9[6] * param_2;
            pfVar9[7] = pfVar9[7] * param_2;
            pfVar9 = pfVar9 + 0x10;
          } while (uVar16 != 0);
          if (uVar14 != uVar15) goto LAB_00319e10;
        }
        if (pvVar6 == pvVar1) goto LAB_00319e7c;
LAB_00319e34:
        local_e0 = (float *)0x0;
        pfStack_e8 = (float *)0x0;
        local_f0 = (float *)0x0;
                    /* try { // try from 00319e38 to 00319e3b has its CatchHandler @ 0031a374 */
        local_f0 = (float *)FUN_00759c3c(uVar18 >> 1);
        local_e0 = local_f0 + (uVar18 >> 3);
        pfVar13 = local_f0;
        pfStack_e8 = local_f0;
        dVar4 = DAT_001b7060;
        if (bVar7) goto LAB_00319f70;
      }
      do {
        local_f0 = pfVar13;
        pfVar9 = pfStack_e8;
        fVar26 = hypotf(*pfVar19,pfVar19[1]);
        dVar27 = log((double)fVar26 * (double)fVar26 + dVar4);
        pfVar13 = local_f0;
        if (pfVar9 < local_e0) {
          pfVar21 = pfVar9 + 1;
          *pfVar9 = (float)(dVar27 * 10.0);
        }
        else {
          sVar20 = (long)pfVar9 - (long)local_f0;
          lVar17 = (long)sVar20 >> 2;
          uVar18 = lVar17 + 1;
          if (uVar18 >> 0x3e != 0) {
            if (*(long *)(lVar3 + 0x28) == local_90) {
                    /* try { // try from 0031a298 to 0031a2b7 has its CatchHandler @ 0031a430 */
              FUN_002febf0(&local_f0);
LAB_0031a2a0:
              if (*(long *)(lVar3 + 0x28) == local_90) {
                    /* WARNING: Subroutine does not return */
                FUN_002f9ee0();
              }
            }
            goto LAB_0031a4e4;
          }
          uVar14 = (long)local_e0 - (long)local_f0 >> 1;
          if (uVar14 <= uVar18) {
            uVar14 = uVar18;
          }
          if (0x7ffffffffffffffb < (ulong)((long)local_e0 - (long)local_f0)) {
            uVar14 = 0x3fffffffffffffff;
          }
          if (uVar14 == 0) {
            pfVar9 = (float *)0x0;
          }
          else {
            if (uVar14 >> 0x3e != 0) goto LAB_0031a2a0;
                    /* try { // try from 00319f24 to 00319f27 has its CatchHandler @ 0031a40c */
            pfVar9 = (float *)FUN_00759c3c(uVar14 << 2);
          }
          pfVar21 = pfVar9 + lVar17 + 1;
          pfVar9[lVar17] = (float)(dVar27 * 10.0);
          memcpy(pfVar9,pfVar13,sVar20);
          local_f0 = pfVar9;
          local_e0 = pfVar9 + uVar14;
          if (pfVar13 != (float *)0x0) {
            pfStack_e8 = pfVar21;
            free(pfVar13);
          }
        }
        pfVar19 = pfVar19 + 2;
        pfVar13 = local_f0;
        pfStack_e8 = pfVar21;
      } while (pfVar19 != pfVar2);
    }
LAB_00319f70:
    uVar18 = *(ulong *)(param_3 + 0x30);
    local_108 = (undefined4 *)0x0;
    local_100 = (undefined4 *)0x0;
    local_f8 = (undefined4 *)0x0;
    if (uVar18 != 0) {
      if (uVar18 >> 0x3d != 0) goto LAB_0031a344;
                    /* try { // try from 00319f8c to 00319f93 has its CatchHandler @ 0031a3d0 */
      local_100 = (undefined4 *)FUN_00759c3c(uVar18 << 3);
      local_f8 = local_100 + uVar18 * 2;
    }
                    /* try { // try from 00319fac to 00319fbb has its CatchHandler @ 0031a3b8 */
    local_108 = local_100;
    FUN_0031ba30(&local_108,local_100,pfVar8,pfVar8 + uVar18 * 2,uVar18);
    puVar5 = local_100;
    puVar23 = local_108;
    local_120 = (undefined4 *)0x0;
    local_118 = (undefined4 *)0x0;
    local_110 = (undefined4 *)0x0;
    lVar17 = (long)local_100 - (long)local_108;
    if (lVar17 == 0) {
      puVar22 = (undefined4 *)0x0;
      puVar25 = (undefined4 *)0x0;
      puVar10 = (undefined4 *)0x0;
      puVar11 = local_100;
    }
    else {
      if (lVar17 < 0) goto LAB_0031a35c;
                    /* try { // try from 00319fd4 to 00319fdb has its CatchHandler @ 0031a3cc */
      puVar10 = (undefined4 *)FUN_00759c3c(lVar17);
      puVar22 = (undefined4 *)((long)puVar10 + lVar17);
      puVar25 = puVar10;
      do {
        while( true ) {
          uVar29 = *puVar23;
          uVar28 = puVar23[1];
          if (puVar25 < puVar22) break;
          lVar17 = (long)puVar25 - (long)puVar10 >> 2;
          uVar18 = lVar17 + 1;
          if (uVar18 >> 0x3e != 0) {
LAB_0031a220:
            local_120 = puVar10;
            local_118 = puVar25;
            local_110 = puVar22;
            if (*(long *)(lVar3 + 0x28) == local_90) {
                    /* try { // try from 0031a23c to 0031a243 has its CatchHandler @ 0031a440 */
              FUN_002febf0(&local_120);
LAB_0031a244:
              local_120 = puVar10;
              local_118 = puVar25;
              local_110 = puVar22;
              if (*(long *)(lVar3 + 0x28) == local_90) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0031a260 to 0031a263 has its CatchHandler @ 0031a444 */
                FUN_002f9ee0();
              }
            }
            goto LAB_0031a4e4;
          }
          uVar14 = (long)puVar22 - (long)puVar10 >> 1;
          if (uVar14 <= uVar18) {
            uVar14 = uVar18;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar22 - (long)puVar10)) {
            uVar14 = 0x3fffffffffffffff;
          }
          if (uVar14 == 0) {
            puVar11 = (undefined4 *)0x0;
          }
          else {
            if (uVar14 >> 0x3e != 0) {
              local_120 = puVar10;
              local_118 = puVar25;
              local_110 = puVar22;
              if (*(long *)(lVar3 + 0x28) == local_90) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0031a280 to 0031a283 has its CatchHandler @ 0031a440 */
                FUN_002f9ee0();
              }
              goto LAB_0031a4e4;
            }
                    /* try { // try from 0031a05c to 0031a05f has its CatchHandler @ 0031a420 */
            puVar11 = (undefined4 *)FUN_00759c3c(uVar14 << 2);
          }
          puVar22 = puVar11 + uVar14;
          puVar24 = puVar11 + lVar17 + 1;
          puVar11[lVar17] = uVar29;
          memcpy(puVar11,puVar10,(long)puVar25 - (long)puVar10);
          if (puVar10 != (undefined4 *)0x0) {
            free(puVar10);
          }
          puVar10 = puVar11;
          if (puVar22 <= puVar24) goto LAB_0031a0a0;
LAB_00319ff0:
          puVar25 = puVar24 + 1;
          *puVar24 = uVar28;
          puVar23 = puVar23 + 2;
          puVar11 = local_108;
          if (puVar23 == puVar5) goto LAB_0031a140;
        }
        puVar24 = puVar25 + 1;
        *puVar25 = uVar29;
        puVar11 = puVar10;
        if (puVar24 < puVar22) goto LAB_00319ff0;
LAB_0031a0a0:
        lVar17 = (long)puVar24 - (long)puVar11 >> 2;
        uVar18 = lVar17 + 1;
        puVar10 = puVar11;
        puVar25 = puVar24;
        if (uVar18 >> 0x3e != 0) {
          local_120 = puVar11;
          local_118 = puVar24;
          local_110 = puVar22;
          if (*(long *)(lVar3 + 0x28) == local_90) {
                    /* try { // try from 0031a218 to 0031a21f has its CatchHandler @ 0031a444 */
            FUN_002febf0(&local_120);
            goto LAB_0031a220;
          }
          goto LAB_0031a4e4;
        }
        uVar14 = (long)puVar22 - (long)puVar11 >> 1;
        if (uVar14 <= uVar18) {
          uVar14 = uVar18;
        }
        if (0x7ffffffffffffffb < (ulong)((long)puVar22 - (long)puVar11)) {
          uVar14 = 0x3fffffffffffffff;
        }
        if (uVar14 == 0) {
          puVar10 = (undefined4 *)0x0;
        }
        else {
          if (uVar14 >> 0x3e != 0) goto LAB_0031a244;
                    /* try { // try from 0031a0e0 to 0031a0e3 has its CatchHandler @ 0031a41c */
          puVar10 = (undefined4 *)FUN_00759c3c(uVar14 << 2);
        }
        puVar22 = puVar10 + uVar14;
        puVar25 = puVar10 + lVar17 + 1;
        puVar10[lVar17] = uVar28;
        memcpy(puVar10,puVar11,(long)puVar24 - (long)puVar11);
        if (puVar11 != (undefined4 *)0x0) {
          free(puVar11);
        }
        puVar23 = puVar23 + 2;
        puVar11 = local_108;
      } while (puVar23 != puVar5);
    }
LAB_0031a140:
    uVar12 = local_b0;
    pvVar1 = pvStack_b8;
    pfVar8 = local_e0;
    pvStack_b8 = (void *)0x0;
    local_b0 = 0;
    param_1[1] = pvVar1;
    *param_1 = local_c0;
    param_1[2] = uVar12;
    local_c0 = (void *)0x0;
    param_1[4] = pfStack_e8;
    param_1[3] = local_f0;
    local_f0 = (float *)0x0;
    pfStack_e8 = (float *)0x0;
    local_e0 = (float *)0x0;
    param_1[5] = pfVar8;
    param_1[6] = puVar10;
    param_1[7] = puVar25;
    param_1[8] = puVar22;
    if ((puVar11 != (undefined4 *)0x0) &&
       (local_100 = puVar11, free(puVar11), local_f0 != (float *)0x0)) {
      pfStack_e8 = local_f0;
      free(local_f0);
    }
    if (local_d8 != (float *)0x0) {
      free(local_d8);
    }
    if (local_c0 != (void *)0x0) {
      pvStack_b8 = local_c0;
      free(local_c0);
    }
    if (local_a8 != (void *)0x0) {
      local_a0 = local_a8;
      free(local_a8);
    }
    if (*(long *)(lVar3 + 0x28) == local_90) {
      return;
    }
  }
  else {
    if ((ulong)((long)sVar20 >> 2) >> 0x3e == 0) {
                    /* try { // try from 00319d08 to 00319d0f has its CatchHandler @ 0031a3f4 */
      local_a8 = (void *)FUN_00759c3c(sVar20);
      pvVar1 = (void *)((long)local_a8 + sVar20);
      local_98 = pvVar1;
      memset(local_a8,0,sVar20);
      local_a0 = pvVar1;
      goto LAB_00319d2c;
    }
    if (*(long *)(lVar3 + 0x28) != local_90) goto LAB_0031a4e4;
                    /* try { // try from 0031a324 to 0031a32b has its CatchHandler @ 0031a3f4 */
    FUN_002febf0(&local_a8);
LAB_0031a32c:
    if (*(long *)(lVar3 + 0x28) != local_90) goto LAB_0031a4e4;
                    /* try { // try from 0031a33c to 0031a343 has its CatchHandler @ 0031a3e0 */
    FUN_0031921c(&local_d8);
LAB_0031a344:
    if (*(long *)(lVar3 + 0x28) != local_90) goto LAB_0031a4e4;
                    /* try { // try from 0031a354 to 0031a35b has its CatchHandler @ 0031a3d0 */
    FUN_0031921c(&local_108);
LAB_0031a35c:
    if (*(long *)(lVar3 + 0x28) == local_90) {
                    /* try { // try from 0031a36c to 0031a373 has its CatchHandler @ 0031a3cc */
      uVar12 = FUN_002febf0(&local_120);
                    /* catch() { ... } // from try @ 00319e38 with catch @ 0031a374 */
      if (local_f0 != (float *)0x0) {
        pfStack_e8 = local_f0;
        free(local_f0);
      }
      if (local_d8 != (float *)0x0) {
        free(local_d8);
      }
      if (local_c0 != (void *)0x0) {
        pvStack_b8 = local_c0;
        free(local_c0);
      }
      if (local_a8 != (void *)0x0) {
        local_a0 = local_a8;
        free(local_a8);
      }
      if (*(long *)(lVar3 + 0x28) == local_90) {
                    /* WARNING: Subroutine does not return */
        FUN_00755eac(uVar12);
      }
    }
  }
LAB_0031a4e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031a4e8  FUN_0031a4e8 =====

void FUN_0031a4e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00319acc();
  FUN_00319c90(param_1,param_2,param_3);
  return;
}


// ===== 0031a524  FUN_0031a524 =====

void FUN_0031a524(long param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_00319440((long)pvVar3 + 8);
    free(pvVar3);
  }
  pvVar3 = *(void **)(param_1 + 0x60);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x68) = pvVar3;
    free(pvVar3);
  }
  FUN_0034653c(param_1 + 0x48);
  plVar2 = *(long **)(param_1 + 0x40);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 0031a5ac  FUN_0031a5ac =====

void FUN_0031a5ac(long param_1,ulong param_2)

{
  long lVar1;
  size_t __n;
  void *pvVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  void *__s;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  lVar4 = *(long *)(param_1 + 8);
  lVar7 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(param_1 + 0x28);
  lVar1 = 0;
  if (lVar7 != lVar4) {
    lVar1 = (lVar7 - lVar4) * 0x80 + -1;
  }
  uVar5 = lVar8 + *(long *)(param_1 + 0x20);
  lVar3 = param_2 - (lVar1 - uVar5);
  if (lVar1 - uVar5 <= param_2 && lVar3 != 0) {
    FUN_0031a764(param_1,lVar3);
    lVar8 = *(long *)(param_1 + 0x28);
    lVar4 = *(long *)(param_1 + 8);
    lVar7 = *(long *)(param_1 + 0x10);
    uVar5 = *(long *)(param_1 + 0x20) + lVar8;
  }
  plVar9 = (long *)(lVar4 + (uVar5 >> 10) * 8);
  if (lVar7 == lVar4) {
    __s = (void *)0x0;
  }
  else {
    __s = (void *)(*plVar9 + (uVar5 & 0x3ff) * 4);
  }
  if (param_2 != 0) {
    param_2 = param_2 + ((long)__s - *plVar9 >> 2);
    if ((long)param_2 < 1) {
      uVar5 = 0x3ff - param_2;
      param_2 = (ulong)~(uint)uVar5;
      lVar1 = (uVar5 >> 10) * -8;
    }
    else {
      lVar1 = (param_2 >> 10) << 3;
    }
    plVar10 = (long *)((long)plVar9 + lVar1);
    pvVar2 = (void *)(*plVar10 + (param_2 & 0x3ff) * 4);
    if (__s != pvVar2) {
      do {
        pvVar6 = pvVar2;
        if (plVar9 != plVar10) {
          pvVar6 = (void *)(*plVar9 + 0x1000);
        }
        if (__s != pvVar6) {
          __n = ((long)pvVar6 + (-4 - (long)__s) & 0xfffffffffffffffcU) + 4;
          memset(__s,0,__n);
          lVar8 = lVar8 + ((long)__n >> 2);
        }
        if (plVar9 == plVar10) break;
        plVar9 = plVar9 + 1;
        __s = (void *)*plVar9;
      } while (__s != pvVar2);
      *(long *)(param_1 + 0x28) = lVar8;
      return;
    }
  }
  return;
}


// ===== 0031a734  FUN_0031a734 =====

void FUN_0031a734(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 0031a764  FUN_0031a764 =====

void FUN_0031a764(long *param_1,ulong param_2)

{
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  void *__ptr;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar4 = (undefined8 *)param_1[2];
  uVar11 = param_1[4];
  if ((long)puVar4 - param_1[1] == 0) {
    param_2 = param_2 + 1;
  }
  uVar10 = param_2 >> 10;
  uVar9 = uVar11 >> 10;
  if ((param_2 & 0x3ff) != 0) {
    uVar10 = uVar10 + 1;
  }
  uVar21 = uVar10;
  if (uVar9 <= uVar10) {
    uVar21 = uVar9;
  }
  if (uVar9 < uVar10) {
    lVar17 = (long)puVar4 - param_1[1] >> 3;
    uVar9 = uVar10 - uVar21;
    if ((ulong)((param_1[3] - *param_1 >> 3) - lVar17) < uVar9) {
      uVar10 = param_1[3] - *param_1 >> 2;
      if (uVar10 <= uVar9 + lVar17) {
        uVar10 = uVar9 + lVar17;
      }
      if (uVar10 == 0) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        if (uVar10 >> 0x3d != 0) {
LAB_0031b054:
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_002f9ee0();
          }
          goto LAB_0031b13c;
        }
        puVar4 = (undefined8 *)FUN_00759c3c(uVar10 << 3);
      }
      puVar18 = puVar4 + uVar10;
      puVar19 = puVar4 + (lVar17 - uVar21);
      puVar20 = puVar4 + (lVar17 - uVar21);
      do {
                    /* try { // try from 0031aa10 to 0031aa17 has its CatchHandler @ 0031b0d4 */
        uVar5 = FUN_00759c3c(0x1000);
        puVar6 = puVar4;
        puVar8 = puVar19;
        if (puVar20 == puVar18) {
          if (puVar19 < puVar4 || (long)puVar19 - (long)puVar4 == 0) {
            uVar10 = (long)puVar18 - (long)puVar4 >> 2;
            if ((long)puVar18 - (long)puVar4 == 0) {
              uVar10 = 1;
            }
            if (uVar10 >> 0x3d != 0) {
              if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0031b07c to 0031b07f has its CatchHandler @ 0031b0c4 */
                FUN_002f9ee0();
              }
              goto LAB_0031b13c;
            }
                    /* try { // try from 0031aa84 to 0031aa8b has its CatchHandler @ 0031b0d4 */
            puVar6 = (undefined8 *)FUN_00759c3c(uVar10 << 3);
            uVar14 = uVar10 >> 2;
            lVar17 = (long)puVar18 - (long)puVar19;
            puVar8 = puVar6 + uVar14;
            puVar20 = puVar8;
            if (lVar17 != 0) {
              puVar20 = (undefined8 *)((long)puVar8 + lVar17);
              puVar18 = puVar8;
              if ((0x17 < lVar17 - 8U) && (0x1f < (long)puVar6 + (uVar14 * 8 - (long)puVar19))) {
                puVar18 = puVar19 + 2;
                puVar15 = puVar6 + uVar14 + 2;
                uVar14 = (lVar17 - 8U >> 3) + 1;
                uVar12 = uVar14 & 0x3ffffffffffffffc;
                puVar19 = puVar19 + uVar12;
                uVar13 = uVar12;
                do {
                  puVar16 = puVar18 + -1;
                  uVar22 = puVar18[-2];
                  uVar24 = puVar18[1];
                  uVar23 = *puVar18;
                  uVar13 = uVar13 - 4;
                  puVar18 = puVar18 + 4;
                  puVar15[-1] = *puVar16;
                  puVar15[-2] = uVar22;
                  puVar15[1] = uVar24;
                  *puVar15 = uVar23;
                  puVar15 = puVar15 + 4;
                } while (uVar13 != 0);
                puVar18 = puVar8 + uVar12;
                if (uVar14 == uVar12) goto LAB_0031aae4;
              }
              do {
                puVar15 = puVar18 + 1;
                *puVar18 = *puVar19;
                puVar18 = puVar15;
                puVar19 = puVar19 + 1;
              } while (puVar15 != puVar20);
            }
LAB_0031aae4:
            puVar18 = puVar6 + uVar10;
            if (puVar4 != (undefined8 *)0x0) {
              free(puVar4);
            }
          }
          else {
            lVar7 = (long)puVar19 - (long)puVar4 >> 3;
            lVar17 = lVar7 + 2;
            if (lVar7 + 1 < 0 == SCARRY8(lVar7,1)) {
              lVar17 = lVar7 + 1;
            }
            sVar1 = (long)puVar18 - (long)puVar19;
            puVar8 = puVar18;
            if (sVar1 != 0) {
              memmove(puVar19 + -(lVar17 >> 1),puVar19,sVar1);
              puVar8 = puVar19;
            }
            puVar20 = (undefined8 *)((long)(puVar19 + -(lVar17 >> 1)) + sVar1);
            puVar8 = puVar8 + -(lVar17 >> 1);
          }
        }
        uVar9 = uVar9 - 1;
        puVar15 = puVar20 + 1;
        *puVar20 = uVar5;
        puVar4 = puVar6;
        puVar19 = puVar8;
        puVar20 = puVar15;
      } while (uVar9 != 0);
      puVar4 = (undefined8 *)param_1[1];
      puVar16 = puVar6;
      uVar10 = uVar21;
      if (0x3ff < uVar11) {
        do {
          puVar6 = puVar16;
          puVar8 = puVar19;
          if (puVar20 == puVar18) {
            if (puVar19 < puVar16 || (long)puVar19 - (long)puVar16 == 0) {
              uVar11 = (long)puVar18 - (long)puVar16 >> 2;
              if ((long)puVar18 - (long)puVar16 == 0) {
                uVar11 = 1;
              }
              if (uVar11 >> 0x3d != 0) {
                if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0031b0ac to 0031b0af has its CatchHandler @ 0031b0b0 */
                  FUN_002f9ee0();
                }
                goto LAB_0031b13c;
              }
                    /* try { // try from 0031ac58 to 0031ac5b has its CatchHandler @ 0031b0b4 */
              puVar6 = (undefined8 *)FUN_00759c3c(uVar11 << 3);
              uVar9 = uVar11 >> 2;
              lVar17 = (long)puVar18 - (long)puVar19;
              puVar8 = puVar6 + uVar9;
              puVar20 = puVar8;
              if (lVar17 != 0) {
                puVar20 = (undefined8 *)((long)puVar8 + lVar17);
                puVar18 = puVar8;
                if ((0x17 < lVar17 - 8U) && (0x1f < (long)puVar6 + (uVar9 * 8 - (long)puVar19))) {
                  puVar18 = puVar19 + 2;
                  puVar15 = puVar6 + uVar9 + 2;
                  uVar9 = (lVar17 - 8U >> 3) + 1;
                  uVar13 = uVar9 & 0x3ffffffffffffffc;
                  puVar19 = puVar19 + uVar13;
                  uVar14 = uVar13;
                  do {
                    puVar3 = puVar18 + -1;
                    uVar5 = puVar18[-2];
                    uVar23 = puVar18[1];
                    uVar22 = *puVar18;
                    uVar14 = uVar14 - 4;
                    puVar18 = puVar18 + 4;
                    puVar15[-1] = *puVar3;
                    puVar15[-2] = uVar5;
                    puVar15[1] = uVar23;
                    *puVar15 = uVar22;
                    puVar15 = puVar15 + 4;
                  } while (uVar14 != 0);
                  puVar18 = puVar8 + uVar13;
                  if (uVar9 == uVar13) goto LAB_0031acb0;
                }
                do {
                  puVar15 = puVar18 + 1;
                  *puVar18 = *puVar19;
                  puVar18 = puVar15;
                  puVar19 = puVar19 + 1;
                } while (puVar15 != puVar20);
              }
LAB_0031acb0:
              puVar18 = puVar6 + uVar11;
              if (puVar16 != (undefined8 *)0x0) {
                free(puVar16);
              }
            }
            else {
              lVar7 = (long)puVar19 - (long)puVar16 >> 3;
              lVar17 = lVar7 + 2;
              if (lVar7 + 1 < 0 == SCARRY8(lVar7,1)) {
                lVar17 = lVar7 + 1;
              }
              sVar1 = (long)puVar18 - (long)puVar19;
              puVar8 = puVar18;
              if (sVar1 != 0) {
                memmove(puVar19 + -(lVar17 >> 1),puVar19,sVar1);
                puVar8 = puVar19;
              }
              puVar20 = (undefined8 *)((long)(puVar19 + -(lVar17 >> 1)) + sVar1);
              puVar8 = puVar8 + -(lVar17 >> 1);
            }
          }
          uVar10 = uVar10 - 1;
          puVar15 = puVar20 + 1;
          *puVar20 = *puVar4;
          puVar4 = (undefined8 *)(param_1[1] + 8);
          param_1[1] = (long)puVar4;
          puVar16 = puVar6;
          puVar19 = puVar8;
          puVar20 = puVar15;
        } while (uVar10 != 0);
      }
      puVar19 = (undefined8 *)param_1[2];
      puVar20 = puVar6;
      if (puVar19 != puVar4) {
        do {
          puVar6 = puVar20;
          if (puVar8 == puVar20) {
            if (puVar15 < puVar18) {
              lVar7 = (long)puVar18 - (long)puVar15 >> 3;
              lVar17 = lVar7 + 2;
              if (lVar7 + 1 < 0 == SCARRY8(lVar7,1)) {
                lVar17 = lVar7 + 1;
              }
              puVar8 = puVar20 + (lVar17 >> 1);
              if ((long)puVar15 - (long)puVar20 != 0) {
                memmove(puVar8,puVar20,(long)puVar15 - (long)puVar20);
                puVar20 = puVar15;
              }
              puVar15 = puVar20 + (lVar17 >> 1);
            }
            else {
              uVar11 = (long)puVar18 - (long)puVar20 >> 2;
              if ((long)puVar18 - (long)puVar20 == 0) {
                uVar11 = 1;
              }
              if (uVar11 >> 0x3d != 0) {
                if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0031b094 to 0031b097 has its CatchHandler @ 0031b0b8 */
                  FUN_002f9ee0();
                }
                goto LAB_0031b13c;
              }
                    /* try { // try from 0031ada0 to 0031ada3 has its CatchHandler @ 0031b0bc */
              puVar6 = (undefined8 *)FUN_00759c3c(uVar11 << 3);
              uVar10 = uVar11 + 3 >> 2;
              lVar17 = (long)puVar15 - (long)puVar20;
              puVar8 = puVar6 + uVar10;
              puVar15 = puVar8;
              if (lVar17 != 0) {
                puVar15 = (undefined8 *)((long)puVar8 + lVar17);
                puVar4 = puVar8;
                puVar18 = puVar20;
                if ((0x17 < lVar17 - 8U) && (0x1f < (long)puVar6 + (uVar10 * 8 - (long)puVar20))) {
                  puVar4 = puVar20 + 2;
                  puVar18 = puVar6 + uVar10 + 2;
                  uVar10 = (lVar17 - 8U >> 3) + 1;
                  uVar14 = uVar10 & 0x3ffffffffffffffc;
                  uVar9 = uVar14;
                  do {
                    puVar16 = puVar4 + -1;
                    uVar5 = puVar4[-2];
                    uVar23 = puVar4[1];
                    uVar22 = *puVar4;
                    uVar9 = uVar9 - 4;
                    puVar4 = puVar4 + 4;
                    puVar18[-1] = *puVar16;
                    puVar18[-2] = uVar5;
                    puVar18[1] = uVar23;
                    *puVar18 = uVar22;
                    puVar18 = puVar18 + 4;
                  } while (uVar9 != 0);
                  puVar4 = puVar8 + uVar14;
                  puVar18 = puVar20 + uVar14;
                  if (uVar10 == uVar14) goto LAB_0031ae4c;
                }
                do {
                  puVar16 = puVar4 + 1;
                  *puVar4 = *puVar18;
                  puVar4 = puVar16;
                  puVar18 = puVar18 + 1;
                } while (puVar16 != puVar15);
              }
LAB_0031ae4c:
              puVar18 = puVar6 + uVar11;
              if (puVar20 != (undefined8 *)0x0) {
                free(puVar20);
              }
            }
          }
          puVar19 = puVar19 + -1;
          puVar8 = puVar8 + -1;
          *puVar8 = *puVar19;
          puVar20 = puVar6;
        } while (puVar19 != (undefined8 *)param_1[1]);
      }
      __ptr = (void *)*param_1;
      param_1[2] = (long)puVar15;
      param_1[3] = (long)puVar18;
      *param_1 = (long)puVar6;
      param_1[1] = (long)puVar8;
      param_1[4] = param_1[4] + uVar21 * -0x400;
      if (__ptr != (void *)0x0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
          free(__ptr);
          return;
        }
        goto LAB_0031b13c;
      }
    }
    else {
      if (uVar9 != 0) {
LAB_0031a98c:
        if (param_1[3] != param_1[2]) goto code_r0x0031a998;
        uVar11 = 0;
        do {
          local_70 = FUN_00759c3c(0x1000);
          FUN_0031b2cc(param_1,&local_70);
          uVar11 = uVar11 + 1;
          lVar7 = param_1[4];
          lVar17 = 0x3ff;
          if (param_1[2] - param_1[1] != 8) {
            lVar17 = 0x400;
          }
          param_1[4] = lVar17 + lVar7;
        } while (uVar9 != uVar11);
        param_1[4] = lVar17 + lVar7 + uVar10 * -0x400;
        uVar21 = uVar10;
        goto joined_r0x0031aeb4;
      }
LAB_0031a9bc:
      param_1[4] = param_1[4] + uVar21 * -0x400;
joined_r0x0031aeb4:
      if (uVar21 != 0) {
        puVar4 = (undefined8 *)param_1[2];
        do {
          puVar20 = (undefined8 *)param_1[1];
          puVar19 = puVar20 + 1;
          uVar5 = *puVar20;
          param_1[1] = (long)puVar19;
          if (puVar4 == (undefined8 *)param_1[3]) {
            puVar18 = (undefined8 *)*param_1;
            if (puVar19 < puVar18 || (long)puVar19 - (long)puVar18 == 0) {
              uVar11 = (long)puVar4 - (long)puVar18 >> 2;
              if ((long)puVar4 - (long)puVar18 == 0) {
                uVar11 = 1;
              }
              if (uVar11 >> 0x3d != 0) goto LAB_0031b054;
              lVar17 = FUN_00759c3c(uVar11 * 8);
              puVar8 = (undefined8 *)(lVar17 + (uVar11 >> 2) * 8);
              puVar6 = puVar8;
              if ((long)puVar4 - (long)puVar19 != 0) {
                uVar10 = (long)puVar4 + (-0x10 - (long)puVar20);
                puVar6 = (undefined8 *)((long)puVar8 + ((long)puVar4 - (long)puVar19));
                puVar4 = puVar8;
                if ((0x17 < uVar10) &&
                   (lVar7 = lVar17 + (uVar11 >> 2) * 8, 0x1f < (lVar7 - (long)puVar20) - 8U)) {
                  puVar4 = (undefined8 *)(lVar7 + 0x10);
                  uVar10 = (uVar10 >> 3) + 1;
                  uVar14 = uVar10 & 0x3ffffffffffffffc;
                  puVar19 = puVar19 + uVar14;
                  puVar20 = puVar20 + 3;
                  uVar9 = uVar14;
                  do {
                    puVar15 = puVar20 + -1;
                    uVar22 = puVar20[-2];
                    uVar24 = puVar20[1];
                    uVar23 = *puVar20;
                    uVar9 = uVar9 - 4;
                    puVar20 = puVar20 + 4;
                    puVar4[-1] = *puVar15;
                    puVar4[-2] = uVar22;
                    puVar4[1] = uVar24;
                    *puVar4 = uVar23;
                    puVar4 = puVar4 + 4;
                  } while (uVar9 != 0);
                  puVar4 = puVar8 + uVar14;
                  if (uVar10 == uVar14) goto LAB_0031aec0;
                }
                do {
                  puVar20 = puVar4 + 1;
                  *puVar4 = *puVar19;
                  puVar4 = puVar20;
                  puVar19 = puVar19 + 1;
                } while (puVar20 != puVar6);
              }
LAB_0031aec0:
              *param_1 = lVar17;
              param_1[1] = (long)puVar8;
              param_1[2] = (long)puVar6;
              param_1[3] = lVar17 + uVar11 * 8;
              free(puVar18);
              puVar4 = (undefined8 *)param_1[2];
            }
            else {
              lVar7 = (long)puVar19 - (long)puVar18 >> 3;
              lVar17 = lVar7 + 2;
              if (lVar7 + 1 < 0 == SCARRY8(lVar7,1)) {
                lVar17 = lVar7 + 1;
              }
              sVar1 = (long)puVar4 - (long)puVar19;
              if (sVar1 != 0) {
                memmove(puVar19 + -(lVar17 >> 1),puVar19,sVar1);
                puVar4 = (undefined8 *)param_1[1];
              }
              puVar20 = puVar4 + -(lVar17 >> 1);
              puVar4 = (undefined8 *)((long)(puVar19 + -(lVar17 >> 1)) + sVar1);
              param_1[1] = (long)puVar20;
              param_1[2] = (long)puVar4;
            }
          }
          *puVar4 = uVar5;
          uVar21 = uVar21 - 1;
          puVar4 = (undefined8 *)(param_1[2] + 8);
          param_1[2] = (long)puVar4;
        } while (uVar21 != 0);
      }
    }
  }
  else {
    param_1[4] = uVar11 + uVar21 * -0x400;
    for (; uVar21 != 0; uVar21 = uVar21 - 1) {
      puVar20 = (undefined8 *)param_1[1];
      puVar19 = puVar20 + 1;
      uVar5 = *puVar20;
      param_1[1] = (long)puVar19;
      if (puVar4 == (undefined8 *)param_1[3]) {
        puVar18 = (undefined8 *)*param_1;
        if (puVar19 < puVar18 || (long)puVar19 - (long)puVar18 == 0) {
          uVar11 = (long)puVar4 - (long)puVar18 >> 2;
          if ((long)puVar4 - (long)puVar18 == 0) {
            uVar11 = 1;
          }
          if (uVar11 >> 0x3d != 0) goto LAB_0031b054;
          lVar17 = FUN_00759c3c(uVar11 * 8);
          puVar8 = (undefined8 *)(lVar17 + (uVar11 >> 2) * 8);
          puVar6 = puVar8;
          if ((long)puVar4 - (long)puVar19 != 0) {
            uVar10 = (long)puVar4 + (-0x10 - (long)puVar20);
            puVar6 = (undefined8 *)((long)puVar8 + ((long)puVar4 - (long)puVar19));
            puVar4 = puVar8;
            if ((0x17 < uVar10) &&
               (lVar7 = lVar17 + (uVar11 >> 2) * 8, 0x1f < (lVar7 - (long)puVar20) - 8U)) {
              puVar4 = (undefined8 *)(lVar7 + 0x10);
              uVar10 = (uVar10 >> 3) + 1;
              uVar14 = uVar10 & 0x3ffffffffffffffc;
              puVar19 = puVar19 + uVar14;
              puVar20 = puVar20 + 3;
              uVar9 = uVar14;
              do {
                puVar15 = puVar20 + -1;
                uVar22 = puVar20[-2];
                uVar24 = puVar20[1];
                uVar23 = *puVar20;
                uVar9 = uVar9 - 4;
                puVar20 = puVar20 + 4;
                puVar4[-1] = *puVar15;
                puVar4[-2] = uVar22;
                puVar4[1] = uVar24;
                *puVar4 = uVar23;
                puVar4 = puVar4 + 4;
              } while (uVar9 != 0);
              puVar4 = puVar8 + uVar14;
              if (uVar10 == uVar14) goto LAB_0031a824;
            }
            do {
              puVar20 = puVar4 + 1;
              *puVar4 = *puVar19;
              puVar4 = puVar20;
              puVar19 = puVar19 + 1;
            } while (puVar20 != puVar6);
          }
LAB_0031a824:
          *param_1 = lVar17;
          param_1[1] = (long)puVar8;
          param_1[2] = (long)puVar6;
          param_1[3] = lVar17 + uVar11 * 8;
          free(puVar18);
          puVar4 = (undefined8 *)param_1[2];
        }
        else {
          lVar7 = (long)puVar19 - (long)puVar18 >> 3;
          lVar17 = lVar7 + 2;
          if (lVar7 + 1 < 0 == SCARRY8(lVar7,1)) {
            lVar17 = lVar7 + 1;
          }
          sVar1 = (long)puVar4 - (long)puVar19;
          if (sVar1 != 0) {
            memmove(puVar19 + -(lVar17 >> 1),puVar19,sVar1);
            puVar4 = (undefined8 *)param_1[1];
          }
          puVar20 = puVar4 + -(lVar17 >> 1);
          puVar4 = (undefined8 *)((long)(puVar19 + -(lVar17 >> 1)) + sVar1);
          param_1[1] = (long)puVar20;
          param_1[2] = (long)puVar4;
        }
      }
      *puVar4 = uVar5;
      puVar4 = (undefined8 *)(param_1[2] + 8);
      param_1[2] = (long)puVar4;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0031b13c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0031a998:
  local_70 = FUN_00759c3c(0x1000);
  FUN_0031b144(param_1,&local_70);
  uVar9 = uVar9 - 1;
  uVar10 = uVar10 - 1;
  if (uVar9 == 0) goto LAB_0031a9bc;
  goto LAB_0031a98c;
}


// ===== 0031b144  FUN_0031b144 =====

void FUN_0031b144(long *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  size_t __n;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *__src;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar13 = (undefined8 *)param_1[2];
  if (puVar13 != (undefined8 *)param_1[3]) goto LAB_0031b29c;
  puVar5 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (puVar5 <= __src && (long)__src - (long)puVar5 != 0) {
    lVar7 = (long)__src - (long)puVar5 >> 3;
    lVar1 = lVar7 + 2;
    if (lVar7 + 1 < 0 == SCARRY8(lVar7,1)) {
      lVar1 = lVar7 + 1;
    }
    __n = (long)puVar13 - (long)__src;
    if (__n != 0) {
      memmove(__src + -(lVar1 >> 1),__src,__n);
      puVar13 = (undefined8 *)param_1[1];
    }
    puVar5 = puVar13 + -(lVar1 >> 1);
    puVar13 = (undefined8 *)((long)(__src + -(lVar1 >> 1)) + __n);
    param_1[1] = (long)puVar5;
    param_1[2] = (long)puVar13;
    goto LAB_0031b29c;
  }
  uVar8 = (long)puVar13 - (long)puVar5 >> 2;
  if ((long)puVar13 - (long)puVar5 == 0) {
    uVar8 = 1;
  }
  if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  lVar7 = FUN_00759c3c(uVar8 * 8);
  puVar3 = (undefined8 *)(lVar7 + (uVar8 >> 2) * 8);
  lVar1 = (long)puVar13 - (long)__src;
  puVar13 = puVar3;
  if (lVar1 != 0) {
    puVar13 = (undefined8 *)((long)puVar3 + lVar1);
    puVar9 = puVar3;
    if ((0x37 < lVar1 - 8U) &&
       (lVar4 = (uVar8 >> 2) * 8 + lVar7, 0x1f < (ulong)(lVar4 - (long)__src))) {
      puVar9 = __src + 2;
      puVar11 = (undefined8 *)(lVar4 + 0x10);
      uVar2 = (lVar1 - 8U >> 3) + 1;
      uVar10 = uVar2 & 0x3ffffffffffffffc;
      __src = __src + uVar10;
      uVar12 = uVar10;
      do {
        puVar6 = puVar9 + -1;
        uVar14 = puVar9[-2];
        uVar16 = puVar9[1];
        uVar15 = *puVar9;
        uVar12 = uVar12 - 4;
        puVar9 = puVar9 + 4;
        puVar11[-1] = *puVar6;
        puVar11[-2] = uVar14;
        puVar11[1] = uVar16;
        *puVar11 = uVar15;
        puVar11 = puVar11 + 4;
      } while (uVar12 != 0);
      puVar9 = puVar3 + uVar10;
      if (uVar2 == uVar10) goto LAB_0031b284;
    }
    do {
      puVar11 = puVar9 + 1;
      *puVar9 = *__src;
      puVar9 = puVar11;
      __src = __src + 1;
    } while (puVar11 != puVar13);
  }
LAB_0031b284:
  *param_1 = lVar7;
  param_1[1] = (long)puVar3;
  param_1[2] = (long)puVar13;
  param_1[3] = lVar7 + uVar8 * 8;
  if (puVar5 != (undefined8 *)0x0) {
    free(puVar5);
    puVar13 = (undefined8 *)param_1[2];
  }
LAB_0031b29c:
  *puVar13 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}


// ===== 0031b2cc  FUN_0031b2cc =====

void FUN_0031b2cc(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *__ptr;
  undefined8 *__dest;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  __ptr = (undefined8 *)param_1[1];
  __dest = __ptr;
  if (__ptr != (undefined8 *)*param_1) goto LAB_0031b42c;
  uVar3 = param_1[2];
  uVar11 = param_1[3];
  if (uVar3 < uVar11) {
    lVar4 = (long)(uVar11 - uVar3) >> 3;
    lVar1 = lVar4 + 2;
    if (lVar4 + 1 < 0 == SCARRY8(lVar4,1)) {
      lVar1 = lVar4 + 1;
    }
    __dest = __ptr + (lVar1 >> 1);
    if (uVar3 - (long)__ptr != 0) {
      memmove(__dest,__ptr,uVar3 - (long)__ptr);
      __ptr = (undefined8 *)param_1[2];
    }
    param_1[1] = (long)__dest;
    param_1[2] = (long)(__ptr + (lVar1 >> 1));
    goto LAB_0031b42c;
  }
  uVar5 = (long)(uVar11 - (long)__ptr) >> 2;
  if (uVar11 - (long)__ptr == 0) {
    uVar5 = 1;
  }
  if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  uVar11 = uVar5 + 3 >> 2;
  lVar4 = FUN_00759c3c(uVar5 * 8);
  lVar1 = uVar3 - (long)__ptr;
  __dest = (undefined8 *)(lVar4 + uVar11 * 8);
  puVar6 = __dest;
  if (lVar1 != 0) {
    puVar6 = (undefined8 *)((long)__dest + lVar1);
    puVar7 = __dest;
    puVar9 = __ptr;
    if ((0x37 < lVar1 - 8U) && (lVar2 = uVar11 * 8 + lVar4, 0x1f < (ulong)(lVar2 - (long)__ptr))) {
      puVar7 = __ptr + 2;
      puVar9 = (undefined8 *)(lVar2 + 0x10);
      uVar3 = (lVar1 - 8U >> 3) + 1;
      uVar10 = uVar3 & 0x3ffffffffffffffc;
      uVar11 = uVar10;
      do {
        puVar8 = puVar7 + -1;
        uVar12 = puVar7[-2];
        uVar14 = puVar7[1];
        uVar13 = *puVar7;
        uVar11 = uVar11 - 4;
        puVar7 = puVar7 + 4;
        puVar9[-1] = *puVar8;
        puVar9[-2] = uVar12;
        puVar9[1] = uVar14;
        *puVar9 = uVar13;
        puVar9 = puVar9 + 4;
      } while (uVar11 != 0);
      puVar7 = __dest + uVar10;
      puVar9 = __ptr + uVar10;
      if (uVar3 == uVar10) goto LAB_0031b414;
    }
    do {
      puVar8 = puVar7 + 1;
      *puVar7 = *puVar9;
      puVar7 = puVar8;
      puVar9 = puVar9 + 1;
    } while (puVar8 != puVar6);
  }
LAB_0031b414:
  *param_1 = lVar4;
  param_1[1] = (long)__dest;
  param_1[2] = (long)puVar6;
  param_1[3] = lVar4 + uVar5 * 8;
  if (__ptr != (undefined8 *)0x0) {
    free(__ptr);
    __dest = (undefined8 *)param_1[1];
  }
LAB_0031b42c:
  __dest[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}


// ===== 0031b458  FUN_0031b458 =====

void FUN_0031b458(long *param_1)

{
  long lVar1;
  size_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  void *__ptr;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((ulong)param_1[4] < 0x400) {
    puVar14 = (undefined8 *)param_1[2];
    puVar18 = (undefined8 *)param_1[3];
    puVar15 = (undefined8 *)param_1[1];
    uVar12 = (long)puVar14 - (long)puVar15;
    uVar8 = (long)puVar18 - *param_1;
    if (uVar12 < uVar8) {
      if (puVar18 == puVar14) {
        local_70 = FUN_00759c3c(0x1000);
        FUN_0031b2cc(param_1,&local_70);
        puVar14 = (undefined8 *)param_1[1];
        puVar18 = (undefined8 *)param_1[2];
        puVar15 = puVar14 + 1;
        uVar17 = *puVar14;
        param_1[1] = (long)puVar15;
        if (puVar18 != (undefined8 *)param_1[3]) goto LAB_0031b8f8;
        puVar16 = (undefined8 *)*param_1;
        lVar7 = (long)puVar15 - (long)puVar16;
        if (puVar16 <= puVar15 && lVar7 != 0) goto LAB_0031b4c0;
        uVar8 = (long)puVar18 - (long)puVar16 >> 2;
        if ((long)puVar18 - (long)puVar16 == 0) {
          uVar8 = 1;
        }
        if (uVar8 >> 0x3d != 0) goto LAB_0031b9c0;
        lVar5 = FUN_00759c3c(uVar8 * 8);
        puVar4 = (undefined8 *)(lVar5 + (uVar8 >> 2) * 8);
        lVar7 = lVar5 + uVar8 * 8;
        puVar10 = puVar4;
        if ((long)puVar18 - (long)puVar15 != 0) {
          uVar12 = (long)puVar18 + (-0x10 - (long)puVar14);
          puVar10 = (undefined8 *)((long)puVar4 + ((long)puVar18 - (long)puVar15));
          puVar18 = puVar4;
          if ((0x47 < uVar12) &&
             (lVar1 = (uVar8 >> 2) * 8 + lVar5, 0x1f < (lVar1 - (long)puVar14) - 8U)) {
            puVar18 = (undefined8 *)(lVar1 + 0x10);
            uVar8 = (uVar12 >> 3) + 1;
            uVar13 = uVar8 & 0x3ffffffffffffffc;
            puVar15 = puVar15 + uVar13;
            puVar14 = puVar14 + 3;
            uVar12 = uVar13;
            do {
              puVar6 = puVar14 + -1;
              uVar19 = puVar14[-2];
              uVar21 = puVar14[1];
              uVar20 = *puVar14;
              uVar12 = uVar12 - 4;
              puVar14 = puVar14 + 4;
              puVar18[-1] = *puVar6;
              puVar18[-2] = uVar19;
              puVar18[1] = uVar21;
              *puVar18 = uVar20;
              puVar18 = puVar18 + 4;
            } while (uVar12 != 0);
            puVar18 = puVar4 + uVar13;
            if (uVar8 == uVar13) goto LAB_0031b8e4;
          }
          do {
            puVar14 = puVar18 + 1;
            *puVar18 = *puVar15;
            puVar18 = puVar14;
            puVar15 = puVar15 + 1;
          } while (puVar14 != puVar10);
        }
        goto LAB_0031b8e4;
      }
      local_70 = FUN_00759c3c(0x1000);
      FUN_0031b144(param_1,&local_70);
    }
    else {
      uVar8 = (long)uVar8 >> 2;
      if (puVar18 == (undefined8 *)*param_1) {
        uVar8 = 1;
      }
      if (uVar8 >> 0x3d != 0) {
LAB_0031b9c0:
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_002f9ee0();
        }
        goto LAB_0031ba2c;
      }
      puVar4 = (undefined8 *)FUN_00759c3c(uVar8 * 8);
                    /* try { // try from 0031b568 to 0031b56f has its CatchHandler @ 0031b9f8 */
      uVar17 = FUN_00759c3c(0x1000);
      puVar18 = (undefined8 *)((long)puVar4 + uVar12);
      puVar16 = puVar4 + uVar8;
      if (uVar12 == uVar8 * 8) {
        if (0 < (long)uVar12) {
          puVar18 = (undefined8 *)((long)puVar18 - ((uVar12 >> 1) + 4 & 0xfffffffffffffff8));
          goto LAB_0031b598;
        }
        uVar12 = (long)uVar12 >> 2;
        if (puVar14 == puVar15) {
          uVar12 = 1;
        }
        if (uVar12 >> 0x3d != 0) {
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0031b9e4 to 0031b9e7 has its CatchHandler @ 0031b9e8 */
            FUN_002f9ee0();
          }
          goto LAB_0031ba2c;
        }
                    /* try { // try from 0031b6ec to 0031b6ef has its CatchHandler @ 0031b9e8 */
        puVar6 = (undefined8 *)FUN_00759c3c(uVar12 << 3);
        puVar16 = puVar6 + uVar12;
        puVar18 = puVar6 + (uVar12 >> 2);
        free(puVar4);
        puVar15 = (undefined8 *)param_1[1];
        puVar14 = (undefined8 *)param_1[2];
        puVar10 = puVar18 + 1;
        *puVar18 = uVar17;
        if (puVar14 != puVar15) goto LAB_0031b744;
      }
      else {
LAB_0031b598:
        puVar10 = puVar18 + 1;
        *puVar18 = uVar17;
        puVar6 = puVar4;
        if (puVar14 != puVar15) {
LAB_0031b744:
          do {
            puVar15 = puVar18;
            if (puVar18 == puVar6) {
              if (puVar10 < puVar16) {
                lVar7 = (long)puVar16 - (long)puVar10 >> 3;
                uVar8 = lVar7 + 2;
                if (lVar7 + 1 < 0 == SCARRY8(lVar7,1)) {
                  uVar8 = lVar7 + 1;
                }
                lVar7 = (long)puVar10 - (long)puVar18;
                sVar2 = (long)puVar10 - (long)puVar18;
                puVar10 = puVar10 + (uVar8 >> 1);
                puVar15 = (undefined8 *)((long)puVar10 - lVar7);
                puVar6 = puVar18;
                if (sVar2 != 0) {
                  memmove(puVar15,puVar18,sVar2);
                }
              }
              else {
                uVar8 = (long)puVar16 - (long)puVar18 >> 2;
                if ((long)puVar16 - (long)puVar18 == 0) {
                  uVar8 = 1;
                }
                if (uVar8 >> 0x3d != 0) {
                  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0031b9bc to 0031b9bf has its CatchHandler @ 0031ba00 */
                    FUN_002f9ee0();
                  }
                  goto LAB_0031ba2c;
                }
                    /* try { // try from 0031b7b0 to 0031b7b3 has its CatchHandler @ 0031ba04 */
                puVar6 = (undefined8 *)FUN_00759c3c(uVar8 << 3);
                uVar12 = uVar8 + 3 >> 2;
                lVar7 = (long)puVar10 - (long)puVar18;
                puVar15 = puVar6 + uVar12;
                puVar10 = puVar15;
                if (lVar7 != 0) {
                  puVar10 = (undefined8 *)((long)puVar15 + lVar7);
                  puVar16 = puVar15;
                  puVar4 = puVar18;
                  if ((0x17 < lVar7 - 8U) && (0x1f < (long)puVar6 + (uVar12 * 8 - (long)puVar18))) {
                    puVar16 = puVar18 + 2;
                    puVar4 = puVar6 + uVar12 + 2;
                    uVar12 = (lVar7 - 8U >> 3) + 1;
                    uVar11 = uVar12 & 0x3ffffffffffffffc;
                    uVar13 = uVar11;
                    do {
                      puVar9 = puVar16 + -1;
                      uVar17 = puVar16[-2];
                      uVar20 = puVar16[1];
                      uVar19 = *puVar16;
                      uVar13 = uVar13 - 4;
                      puVar16 = puVar16 + 4;
                      puVar4[-1] = *puVar9;
                      puVar4[-2] = uVar17;
                      puVar4[1] = uVar20;
                      *puVar4 = uVar19;
                      puVar4 = puVar4 + 4;
                    } while (uVar13 != 0);
                    puVar16 = puVar15 + uVar11;
                    puVar4 = puVar18 + uVar11;
                    if (uVar12 == uVar11) goto LAB_0031b85c;
                  }
                  do {
                    puVar9 = puVar16 + 1;
                    *puVar16 = *puVar4;
                    puVar16 = puVar9;
                    puVar4 = puVar4 + 1;
                  } while (puVar9 != puVar10);
                }
LAB_0031b85c:
                puVar16 = puVar6 + uVar8;
                free(puVar18);
              }
            }
            puVar14 = puVar14 + -1;
            puVar18 = puVar15 + -1;
            *puVar18 = *puVar14;
          } while (puVar14 != (undefined8 *)param_1[1]);
        }
      }
      __ptr = (void *)*param_1;
      *param_1 = (long)puVar6;
      param_1[1] = (long)puVar18;
      param_1[2] = (long)puVar10;
      param_1[3] = (long)puVar16;
      if (__ptr != (void *)0x0) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
          free(__ptr);
          return;
        }
        goto LAB_0031ba2c;
      }
    }
  }
  else {
    puVar14 = (undefined8 *)param_1[1];
    puVar18 = (undefined8 *)param_1[2];
    param_1[4] = param_1[4] - 0x400;
    puVar15 = puVar14 + 1;
    uVar17 = *puVar14;
    param_1[1] = (long)puVar15;
    if (puVar18 == (undefined8 *)param_1[3]) {
      puVar16 = (undefined8 *)*param_1;
      lVar7 = (long)puVar15 - (long)puVar16;
      if (puVar15 < puVar16 || lVar7 == 0) {
        uVar8 = (long)puVar18 - (long)puVar16 >> 2;
        if ((long)puVar18 - (long)puVar16 == 0) {
          uVar8 = 1;
        }
        if (uVar8 >> 0x3d != 0) goto LAB_0031b9c0;
        lVar5 = FUN_00759c3c(uVar8 * 8);
        puVar4 = (undefined8 *)(lVar5 + (uVar8 >> 2) * 8);
        lVar7 = lVar5 + uVar8 * 8;
        puVar10 = puVar4;
        if ((long)puVar18 - (long)puVar15 != 0) {
          uVar12 = (long)puVar18 + (-0x10 - (long)puVar14);
          puVar10 = (undefined8 *)((long)puVar4 + ((long)puVar18 - (long)puVar15));
          puVar18 = puVar4;
          if ((0x47 < uVar12) &&
             (lVar1 = (uVar8 >> 2) * 8 + lVar5, 0x1f < (lVar1 - (long)puVar14) - 8U)) {
            puVar18 = (undefined8 *)(lVar1 + 0x10);
            uVar8 = (uVar12 >> 3) + 1;
            uVar13 = uVar8 & 0x3ffffffffffffffc;
            puVar15 = puVar15 + uVar13;
            puVar14 = puVar14 + 3;
            uVar12 = uVar13;
            do {
              puVar6 = puVar14 + -1;
              uVar19 = puVar14[-2];
              uVar21 = puVar14[1];
              uVar20 = *puVar14;
              uVar12 = uVar12 - 4;
              puVar14 = puVar14 + 4;
              puVar18[-1] = *puVar6;
              puVar18[-2] = uVar19;
              puVar18[1] = uVar21;
              *puVar18 = uVar20;
              puVar18 = puVar18 + 4;
            } while (uVar12 != 0);
            puVar18 = puVar4 + uVar13;
            if (uVar8 == uVar13) goto LAB_0031b8e4;
          }
          do {
            puVar14 = puVar18 + 1;
            *puVar18 = *puVar15;
            puVar18 = puVar14;
            puVar15 = puVar15 + 1;
          } while (puVar14 != puVar10);
        }
LAB_0031b8e4:
        *param_1 = lVar5;
        param_1[1] = (long)puVar4;
        param_1[2] = (long)puVar10;
        param_1[3] = lVar7;
        free(puVar16);
        puVar18 = (undefined8 *)param_1[2];
      }
      else {
LAB_0031b4c0:
        lVar7 = lVar7 >> 3;
        lVar5 = lVar7 + 2;
        if (lVar7 + 1 < 0 == SCARRY8(lVar7,1)) {
          lVar5 = lVar7 + 1;
        }
        sVar2 = (long)puVar18 - (long)puVar15;
        puVar18 = puVar15 + -(lVar5 >> 1);
        if (sVar2 != 0) {
          memmove(puVar18,puVar15,sVar2);
          puVar15 = (undefined8 *)param_1[1];
        }
        puVar18 = (undefined8 *)((long)puVar18 + sVar2);
        param_1[1] = (long)(puVar15 + -(lVar5 >> 1));
        param_1[2] = (long)puVar18;
      }
    }
LAB_0031b8f8:
    *puVar18 = uVar17;
    param_1[2] = param_1[2] + 8;
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_0031ba2c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031ba30  FUN_0031ba30 =====

undefined8 *
FUN_0031ba30(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *__dest;
  long lVar3;
  size_t sVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  void *__dest_00;
  void *__src;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (param_5 < 1) {
    return param_2;
  }
  __dest = (undefined8 *)param_1[1];
  if (param_5 <= param_1[2] - (long)__dest >> 3) {
    lVar13 = (long)__dest - (long)param_2 >> 3;
    if (lVar13 < param_5) {
      puVar1 = (undefined8 *)((long)param_3 + ((long)__dest - (long)param_2));
      sVar4 = param_4 - (long)puVar1;
      if (sVar4 != 0) {
        memmove(__dest,puVar1,sVar4);
      }
      puVar2 = (undefined8 *)((long)__dest + sVar4);
      param_1[1] = (long)puVar2;
      if (lVar13 < 1) {
        return param_2;
      }
      puVar6 = puVar2 + -param_5;
    }
    else {
      puVar1 = param_3 + param_5;
      puVar6 = __dest + -param_5;
      puVar2 = __dest;
    }
    puVar10 = puVar2;
    if (puVar6 < __dest) {
      puVar10 = __dest;
      if (__dest <= puVar6 + 1) {
        puVar10 = puVar6 + 1;
      }
      uVar8 = (long)puVar10 + param_5 * 8 + ~(ulong)puVar2;
      puVar9 = puVar2;
      if ((0x37 < uVar8) && (0x1f < (ulong)(param_5 * 8))) {
        puVar10 = puVar2 + 2;
        uVar8 = (uVar8 >> 3) + 1;
        uVar5 = uVar8 & 0x3ffffffffffffffc;
        puVar9 = puVar6 + 2;
        uVar7 = uVar5;
        do {
          puVar12 = puVar9 + -1;
          uVar14 = puVar9[-2];
          uVar16 = puVar9[1];
          uVar15 = *puVar9;
          uVar7 = uVar7 - 4;
          puVar9 = puVar9 + 4;
          puVar10[-1] = *puVar12;
          puVar10[-2] = uVar14;
          puVar10[1] = uVar16;
          *puVar10 = uVar15;
          puVar10 = puVar10 + 4;
        } while (uVar7 != 0);
        puVar10 = puVar2 + uVar5;
        puVar9 = puVar2 + uVar5;
        puVar6 = puVar6 + uVar5;
        if (uVar8 == uVar5) goto LAB_0031bcb8;
      }
      do {
        puVar12 = puVar6 + 1;
        *puVar9 = *puVar6;
        puVar10 = puVar9 + 1;
        puVar9 = puVar9 + 1;
        puVar6 = puVar12;
      } while (puVar12 < __dest);
    }
LAB_0031bcb8:
    param_1[1] = (long)puVar10;
    if (puVar2 != param_2 + param_5) {
      sVar4 = (long)puVar2 - (long)(param_2 + param_5);
      memmove((void *)((long)puVar2 - sVar4),param_2,sVar4);
    }
    if ((long)puVar1 - (long)param_3 == 0) {
      return param_2;
    }
    memmove(param_2,param_3,(long)puVar1 - (long)param_3);
    return param_2;
  }
  lVar13 = *param_1;
  uVar8 = param_5 + ((long)__dest - lVar13 >> 3);
  if (uVar8 >> 0x3d != 0) {
    FUN_0031921c(param_1);
LAB_0031bd0c:
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  uVar5 = param_1[2] - lVar13;
  uVar7 = (long)uVar5 >> 2;
  if (uVar7 <= uVar8) {
    uVar7 = uVar8;
  }
  if (0x7ffffffffffffff7 < uVar5) {
    uVar7 = 0x1fffffffffffffff;
  }
  if (uVar7 == 0) {
    lVar3 = 0;
  }
  else {
    if (uVar7 >> 0x3d != 0) goto LAB_0031bd0c;
    lVar3 = FUN_00759c3c(uVar7 << 3);
  }
  uVar8 = param_5 - 1U & 0x1fffffffffffffff;
  puVar2 = (undefined8 *)(lVar3 + ((long)param_2 - lVar13 >> 3) * 8);
  puVar1 = puVar2 + param_5;
  puVar6 = puVar2;
  if ((6 < uVar8) && (0x1f < (ulong)((((long)param_2 - lVar13) + lVar3) - (long)param_3))) {
    uVar8 = uVar8 + 1;
    puVar6 = param_3 + 2;
    puVar10 = puVar2 + 2;
    uVar11 = uVar8 & 0x3ffffffffffffffc;
    uVar5 = uVar11;
    do {
      puVar9 = puVar6 + -1;
      uVar14 = puVar6[-2];
      uVar16 = puVar6[1];
      uVar15 = *puVar6;
      uVar5 = uVar5 - 4;
      puVar6 = puVar6 + 4;
      puVar10[-1] = *puVar9;
      puVar10[-2] = uVar14;
      puVar10[1] = uVar16;
      *puVar10 = uVar15;
      puVar10 = puVar10 + 4;
    } while (uVar5 != 0);
    puVar6 = puVar2 + uVar11;
    param_3 = param_3 + uVar11;
    if (uVar8 == uVar11) goto LAB_0031bbf8;
  }
  do {
    puVar10 = puVar6 + 1;
    *puVar6 = *param_3;
    puVar6 = puVar10;
    param_3 = param_3 + 1;
  } while (puVar10 != puVar1);
LAB_0031bbf8:
  memcpy(puVar1,param_2,(long)__dest - (long)param_2);
  __src = (void *)*param_1;
  param_1[1] = (long)param_2;
  __dest_00 = (void *)((long)puVar2 - ((long)param_2 - (long)__src));
  memcpy(__dest_00,__src,(long)param_2 - (long)__src);
  *param_1 = (long)__dest_00;
  param_1[1] = (long)puVar1 + ((long)__dest - (long)param_2);
  param_1[2] = lVar3 + uVar7 * 8;
  if (__src != (void *)0x0) {
    free(__src);
  }
  return puVar2;
}


// ===== 0031bd10  FUN_0031bd10 =====

void FUN_0031bd10(ulong *param_1,ulong *param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 local_48;
  undefined1 uStack_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar4;
  *param_1 = uVar3;
  FUN_0036c290(param_1 + 3);
                    /* try { // try from 0031bd54 to 0031bd5f has its CatchHandler @ 0031be40 */
  FUN_003460fc(param_1 + 5,*param_2,1);
  param_1[0x16] = 0;
  puVar2 = param_1 + 8;
  param_1[9] = 0;
  *puVar2 = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  if (*param_1 != 0) {
                    /* try { // try from 0031bd84 to 0031bd8b has its CatchHandler @ 0031be04 */
    FUN_002feac4(puVar2);
  }
                    /* try { // try from 0031bd8c to 0031bd97 has its CatchHandler @ 0031be10 */
  FUN_0034ad0c(&uStack_39,puVar2);
  local_48 = 0;
  param_1[0x17] = (*param_1 >> 1) + 1;
                    /* try { // try from 0031bdb8 to 0031bdc3 has its CatchHandler @ 0031be0c */
  FUN_0031be68(param_1 + 0xb,(param_1[2] - 1) * param_1[1],&local_48);
  local_48 = 0;
                    /* try { // try from 0031bdd4 to 0031bddf has its CatchHandler @ 0031be08 */
  FUN_0031be68(param_1 + 0x11,(param_1[2] - 1) * param_1[1],&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031be68  FUN_0031be68 =====

void FUN_0031be68(long param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = *(ulong *)(param_1 + 0x28);
  if (uVar4 <= param_2 && param_2 - uVar4 != 0) {
    FUN_0031d2b0(param_1,param_2 - uVar4);
    return;
  }
  if (uVar4 <= param_2) {
    return;
  }
  uVar5 = *(ulong *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  plVar6 = (long *)(lVar1 + (uVar5 >> 9) * 8);
  if (lVar3 == lVar1) {
    lVar7 = 0;
  }
  else {
    lVar7 = *plVar6 + (uVar5 & 0x1ff) * 8;
  }
  if (param_2 != 0) {
    param_2 = param_2 + (lVar7 - *plVar6 >> 3);
    if ((long)param_2 < 1) {
      uVar8 = 0x1ff - param_2;
      param_2 = (ulong)~(uint)uVar8;
      lVar7 = (uVar8 >> 9) * -8;
    }
    else {
      lVar7 = (param_2 >> 9) << 3;
    }
    plVar6 = (long *)((long)plVar6 + lVar7);
    lVar7 = *plVar6 + (param_2 & 0x1ff) * 8;
  }
  plVar2 = (long *)(lVar1 + (uVar5 + uVar4 >> 9) * 8);
  if (lVar3 - lVar1 == 0) {
    lVar9 = 0;
    if (lVar7 == 0) {
      return;
    }
  }
  else {
    lVar9 = *plVar2 + (uVar5 + uVar4 & 0x1ff) * 8;
    if (lVar7 == lVar9) {
      return;
    }
  }
  lVar7 = ((lVar9 - *plVar2 >> 3) + ((long)plVar2 - (long)plVar6) * 0x40) - (lVar7 - *plVar6 >> 3);
  if (0 < lVar7) {
    lVar7 = uVar4 - lVar7;
    *(long *)(param_1 + 0x28) = lVar7;
    lVar9 = 0;
    if (lVar3 != lVar1) {
      lVar9 = (lVar3 - lVar1) * 0x40 + -1;
    }
    uVar4 = (lVar9 - uVar5) - lVar7;
    while (0x3ff < uVar4) {
      free(*(void **)(lVar3 + -8));
      lVar3 = *(long *)(param_1 + 0x10) + -8;
      *(long *)(param_1 + 0x10) = lVar3;
      lVar1 = 0;
      if (lVar3 != *(long *)(param_1 + 8)) {
        lVar1 = (lVar3 - *(long *)(param_1 + 8)) * 0x40 + -1;
      }
      uVar4 = lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
    }
  }
  return;
}


// ===== 0031bff0  FUN_0031bff0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0031bff0(undefined8 *param_1,float param_2,long *param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,ulong param_7,uint param_8)

{
  ulong uVar1;
  long lVar2;
  undefined4 *__ptr;
  size_t __n;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *__dest;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined4 *__src;
  undefined4 *puVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  ulong local_130;
  undefined8 uStack_128;
  char *local_120;
  void *local_110;
  void *pvStack_108;
  char *local_100;
  void *local_f0;
  void *local_e8;
  void *local_d8;
  long local_d0;
  long local_c8;
  void *local_c0;
  void *pvStack_b8;
  undefined8 local_b0;
  void *local_a0;
  void *pvStack_98;
  undefined8 local_90;
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  local_a0 = (void *)0x0;
  pvStack_98 = (void *)0x0;
  local_90 = 0;
  local_c0 = (void *)0x0;
  pvStack_b8 = (void *)0x0;
  local_b0 = 0;
  if ((param_7 & 1) == 0) {
    __src = (undefined4 *)*param_5;
    __ptr = (undefined4 *)param_5[1];
    local_d8 = (void *)0x0;
    local_d0 = 0;
    local_c8 = 0;
    __n = (long)__ptr - (long)__src;
    if (__n == 0) {
      __dest = (void *)0x0;
    }
    else {
      if ((long)__n < 0) {
        if (*(long *)(lVar3 + 0x28) == local_80) {
                    /* try { // try from 0031c4a8 to 0031c4af has its CatchHandler @ 0031c554 */
          uVar9 = FUN_002febf0(&local_d8);
                    /* catch() { ... } // from try @ 0031c330 with catch @ 0031c4b0 */
                    /* catch() { ... } // from try @ 0031c2a4 with catch @ 0031c4b8 */
          if ((local_130 & 1) != 0) {
            free(local_120);
          }
          if (local_110 != (void *)0x0) {
            pvStack_108 = local_110;
            free(local_110);
          }
          if (local_f0 != (void *)0x0) {
            local_e8 = local_f0;
            free(local_f0);
          }
          if (__ptr != (undefined4 *)0x0) {
            free(__ptr);
          }
          if (local_c0 != (void *)0x0) {
            pvStack_b8 = local_c0;
            free(local_c0);
          }
          if (local_a0 == (void *)0x0) {
            if (*(long *)(lVar3 + 0x28) == local_80) {
LAB_0031c598:
                    /* WARNING: Subroutine does not return */
              FUN_00755eac(uVar9);
            }
          }
          else {
            pvStack_98 = local_a0;
            free(local_a0);
            if (*(long *)(lVar3 + 0x28) == local_80) goto LAB_0031c598;
          }
        }
        goto LAB_0031c5cc;
      }
                    /* try { // try from 0031c098 to 0031c0a3 has its CatchHandler @ 0031c554 */
      __dest = (void *)FUN_00759c3c(__n);
      lVar2 = (long)__dest + __n;
      local_d8 = __dest;
      local_c8 = lVar2;
      memcpy(__dest,__src,__n);
      local_d0 = lVar2;
      if (param_2 < 99.99999) {
        fVar14 = param_2 / 100.0;
        fVar15 = (100.0 - param_2) / 100.0;
        if (0x1b < __n - 4) {
          puVar11 = (undefined8 *)(__src + 4);
          uVar1 = (__n - 4 >> 2) + 1;
          uVar10 = uVar1 & 0x7ffffffffffffff8;
          uVar12 = uVar10;
          do {
            uVar12 = uVar12 - 8;
            puVar11[-1] = CONCAT44(fVar15 + (float)((ulong)puVar11[-1] >> 0x20) * fVar14,
                                   fVar15 + (float)puVar11[-1] * fVar14);
            puVar11[-2] = CONCAT44(fVar15 + (float)((ulong)puVar11[-2] >> 0x20) * fVar14,
                                   fVar15 + (float)puVar11[-2] * fVar14);
            puVar11[1] = CONCAT44(fVar15 + (float)((ulong)puVar11[1] >> 0x20) * fVar14,
                                  fVar15 + (float)puVar11[1] * fVar14);
            *puVar11 = CONCAT44(fVar15 + (float)((ulong)*puVar11 >> 0x20) * fVar14,
                                fVar15 + (float)*puVar11 * fVar14);
            puVar11 = puVar11 + 4;
          } while (uVar12 != 0);
          __src = __src + uVar10;
          if (uVar1 == uVar10) goto LAB_0031c174;
        }
        do {
          uVar16 = NEON_fmadd(fVar14,*__src,fVar15);
          puVar13 = __src + 1;
          *__src = uVar16;
          __src = puVar13;
        } while (puVar13 != __ptr);
      }
    }
LAB_0031c174:
                    /* try { // try from 0031c174 to 0031c193 has its CatchHandler @ 0031c53c */
    FUN_0031c5d0(&local_f0,param_2,param_3,param_4,param_5,param_6,param_3 + 0xb);
    if (((long)local_e8 - (long)local_f0 >> 2) + -2 != *param_3) {
                    /* try { // try from 0031c1b0 to 0031c1b7 has its CatchHandler @ 0031c51c */
      local_100 = (char *)FUN_00759c3c(0x40);
      uVar5 = s_DfPostprocessor__process__Invali_001f2ee5._24_8_;
      uVar4 = s_DfPostprocessor__process__Invali_001f2ee5._16_8_;
      uVar9 = s_DfPostprocessor__process__Invali_001f2ee5._0_8_;
      pvStack_108 = _UNK_002009e8;
      local_110 = _DAT_002009e0;
      *(undefined8 *)(local_100 + 8) = s_DfPostprocessor__process__Invali_001f2ee5._8_8_;
      *(undefined8 *)local_100 = uVar9;
      *(undefined8 *)(local_100 + 0x18) = uVar5;
      *(undefined8 *)(local_100 + 0x10) = uVar4;
      uVar6 = s_DfPostprocessor__process__Invali_001f2ee5._53_8_;
      uVar5 = s_DfPostprocessor__process__Invali_001f2ee5._32_8_;
      uVar9 = CONCAT35(s_DfPostprocessor__process__Invali_001f2ee5._45_3_,
                       s_DfPostprocessor__process__Invali_001f2ee5._40_5_);
      uVar4 = CONCAT53(s_DfPostprocessor__process__Invali_001f2ee5._48_5_,
                       s_DfPostprocessor__process__Invali_001f2ee5._45_3_);
      local_100[0x3d] = '\0';
      *(undefined8 *)(local_100 + 0x28) = uVar9;
      *(undefined8 *)(local_100 + 0x20) = uVar5;
      *(undefined8 *)(local_100 + 0x35) = uVar6;
      *(undefined8 *)(local_100 + 0x2d) = uVar4;
                    /* try { // try from 0031c1ec to 0031c207 has its CatchHandler @ 0031c500 */
      FUN_00372794(&local_110,
                   "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/nc/src/deep_filter_net/krisp_nc_df_postprocessor.cpp"
                   ,0x4b,"process");
      if (((ulong)local_110 & 1) != 0) {
        free(local_100);
      }
    }
    if ((param_8 & 1) == 0) {
                    /* try { // try from 0031c21c to 0031c23f has its CatchHandler @ 0031c4fc */
      FUN_0031c5d0(&local_110,0x42c80000,param_3,param_4,&local_d8,param_6,param_3 + 0x11);
      if (((long)pvStack_108 - (long)local_110 >> 2) + -2 != *param_3) {
                    /* try { // try from 0031c25c to 0031c263 has its CatchHandler @ 0031c4d4 */
        local_120 = (char *)FUN_00759c3c(0x58);
        uVar8 = s_DfPostprocessor__process__Invali_001bbca3._72_8_;
        uVar7 = s_DfPostprocessor__process__Invali_001bbca3._64_8_;
        uVar6 = s_DfPostprocessor__process__Invali_001bbca3._56_8_;
        uVar5 = s_DfPostprocessor__process__Invali_001bbca3._48_8_;
        uVar4 = s_DfPostprocessor__process__Invali_001bbca3._40_8_;
        uVar9 = s_DfPostprocessor__process__Invali_001bbca3._32_8_;
        uStack_128 = _UNK_002008e8;
        local_130 = _DAT_002008e0;
        local_120[0x50] = 'i';
        local_120[0x51] = 'o';
        local_120[0x52] = 'n';
        local_120[0x53] = '.';
        *(undefined8 *)(local_120 + 0x28) = uVar4;
        *(undefined8 *)(local_120 + 0x20) = uVar9;
        *(undefined8 *)(local_120 + 0x38) = uVar6;
        *(undefined8 *)(local_120 + 0x30) = uVar5;
        *(undefined8 *)(local_120 + 0x48) = uVar8;
        *(undefined8 *)(local_120 + 0x40) = uVar7;
        uVar6 = s_DfPostprocessor__process__Invali_001bbca3._24_8_;
        uVar5 = s_DfPostprocessor__process__Invali_001bbca3._16_8_;
        uVar4 = s_DfPostprocessor__process__Invali_001bbca3._8_8_;
        uVar9 = s_DfPostprocessor__process__Invali_001bbca3._0_8_;
        local_120[0x54] = '\0';
        *(undefined8 *)(local_120 + 8) = uVar4;
        *(undefined8 *)local_120 = uVar9;
        *(undefined8 *)(local_120 + 0x18) = uVar6;
        *(undefined8 *)(local_120 + 0x10) = uVar5;
                    /* try { // try from 0031c2a4 to 0031c2bf has its CatchHandler @ 0031c4b8 */
        FUN_00372794(&local_130,
                     "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/nc/src/deep_filter_net/krisp_nc_df_postprocessor.cpp"
                     ,0x55,"process");
        if ((local_130 & 1) != 0) {
          free(local_120);
        }
      }
                    /* try { // try from 0031c2d0 to 0031c2df has its CatchHandler @ 0031c4e0 */
      FUN_003466e4(param_3 + 5,&local_110,&local_c0);
      if (*param_3 != (long)pvStack_b8 - (long)local_c0 >> 2) {
                    /* try { // try from 0031c2f4 to 0031c2fb has its CatchHandler @ 0031c4b4 */
        local_120 = (char *)FUN_00759c3c(0x50);
        uVar5 = s_DfPostprocessor__process__Invali_001f0c96._48_8_;
        uVar4 = s_DfPostprocessor__process__Invali_001f0c96._32_8_;
        uVar9 = CONCAT62(s_DfPostprocessor__process__Invali_001f0c96._58_6_,
                         s_DfPostprocessor__process__Invali_001f0c96._56_2_);
        uStack_128 = _UNK_00200628;
        local_130 = _DAT_00200620;
        *(undefined8 *)(local_120 + 0x28) = s_DfPostprocessor__process__Invali_001f0c96._40_8_;
        *(undefined8 *)(local_120 + 0x20) = uVar4;
        *(undefined8 *)(local_120 + 0x38) = uVar9;
        *(undefined8 *)(local_120 + 0x30) = uVar5;
        uVar4 = s_DfPostprocessor__process__Invali_001f0c96._66_8_;
        uVar9 = CONCAT26(s_DfPostprocessor__process__Invali_001f0c96._64_2_,
                         s_DfPostprocessor__process__Invali_001f0c96._58_6_);
        local_120[0x4a] = '\0';
        *(undefined8 *)(local_120 + 0x42) = uVar4;
        *(undefined8 *)(local_120 + 0x3a) = uVar9;
        uVar5 = s_DfPostprocessor__process__Invali_001f0c96._24_8_;
        uVar4 = s_DfPostprocessor__process__Invali_001f0c96._16_8_;
        uVar9 = s_DfPostprocessor__process__Invali_001f0c96._0_8_;
        *(undefined8 *)(local_120 + 8) = s_DfPostprocessor__process__Invali_001f0c96._8_8_;
        *(undefined8 *)local_120 = uVar9;
        *(undefined8 *)(local_120 + 0x18) = uVar5;
        *(undefined8 *)(local_120 + 0x10) = uVar4;
                    /* try { // try from 0031c330 to 0031c34b has its CatchHandler @ 0031c4b0 */
        FUN_00372794(&local_130,
                     "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/nc/src/deep_filter_net/krisp_nc_df_postprocessor.cpp"
                     ,0x5b,"process");
        if ((local_130 & 1) != 0) {
          free(local_120);
        }
      }
      if (local_110 != (void *)0x0) {
        pvStack_108 = local_110;
        free(local_110);
      }
    }
                    /* try { // try from 0031c36c to 0031c37b has its CatchHandler @ 0031c520 */
    FUN_003466e4(param_3 + 5,&local_f0,&local_a0);
    if (*param_3 != (long)pvStack_98 - (long)local_a0 >> 2) {
                    /* try { // try from 0031c390 to 0031c397 has its CatchHandler @ 0031c4dc */
      local_100 = (char *)FUN_00759c3c(0x38);
      uVar8 = s_DfPostprocessor__process__Invali_001ec9d9._40_8_;
      uVar7 = s_DfPostprocessor__process__Invali_001ec9d9._32_8_;
      uVar6 = s_DfPostprocessor__process__Invali_001ec9d9._24_8_;
      uVar5 = s_DfPostprocessor__process__Invali_001ec9d9._16_8_;
      uVar4 = s_DfPostprocessor__process__Invali_001ec9d9._8_8_;
      uVar9 = s_DfPostprocessor__process__Invali_001ec9d9._0_8_;
      pvStack_108 = _UNK_002000e8;
      local_110 = _DAT_002000e0;
      local_100[0x2f] = 'i';
      local_100[0x30] = 'z';
      local_100[0x31] = 'e';
      local_100[0x32] = '.';
      *(undefined8 *)(local_100 + 8) = uVar4;
      *(undefined8 *)local_100 = uVar9;
      *(undefined8 *)(local_100 + 0x18) = uVar6;
      *(undefined8 *)(local_100 + 0x10) = uVar5;
      *(undefined8 *)(local_100 + 0x28) = uVar8;
      *(undefined8 *)(local_100 + 0x20) = uVar7;
      local_100[0x33] = '\0';
                    /* try { // try from 0031c3d0 to 0031c3eb has its CatchHandler @ 0031c4d8 */
      FUN_00372794(&local_110,
                   "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/nc/src/deep_filter_net/krisp_nc_df_postprocessor.cpp"
                   ,0x60,"process");
      if (((ulong)local_110 & 1) != 0) {
        free(local_100);
      }
    }
    if (local_f0 != (void *)0x0) {
      local_e8 = local_f0;
      free(local_f0);
    }
    if (__dest != (void *)0x0) {
      free(__dest);
    }
  }
  else {
                    /* try { // try from 0031c044 to 0031c06b has its CatchHandler @ 0031c56c */
    FUN_003466e4(param_3 + 5,param_4,&local_a0);
    if ((param_8 & 1) == 0) {
      FUN_0031e170(&local_c0,local_a0,pvStack_98,(long)pvStack_98 - (long)local_a0 >> 2);
    }
  }
                    /* try { // try from 0031c41c to 0031c443 has its CatchHandler @ 0031c56c */
  FUN_0036cee8(param_3[3],&local_a0,param_3 + 8,&local_a0);
  if ((param_8 & 1) == 0) {
    FUN_0036cee8(param_3[3],&local_c0,param_3 + 8,&local_c0);
  }
  param_1[1] = pvStack_98;
  *param_1 = local_a0;
  param_1[2] = local_90;
  param_1[4] = pvStack_b8;
  param_1[3] = local_c0;
  param_1[5] = local_b0;
  if (*(long *)(lVar3 + 0x28) == local_80) {
    return;
  }
LAB_0031c5cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031c5d0  FUN_0031c5d0 =====

void FUN_0031c5d0(ulong *param_1,float param_2,ulong param_3,long param_4,long *param_5,
                 long *param_6,long *param_7,long param_8)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined4 *puVar3;
  void *pvVar4;
  float *__src;
  float *pfVar5;
  long lVar6;
  undefined8 *puVar7;
  void *pvVar8;
  void *pvVar9;
  float *pfVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  void *pvVar16;
  long lVar17;
  ulong uVar18;
  float *pfVar19;
  long lVar20;
  float *pfVar21;
  undefined8 *puVar22;
  ulong uVar23;
  size_t sVar24;
  long lVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  void *local_b8;
  long local_b0;
  long local_a8;
  void *local_a0;
  void *local_98;
  long local_90;
  float local_88;
  undefined4 local_84;
  float local_80;
  undefined4 local_7c;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  FUN_0031cd38();
  lVar25 = *param_5;
  lVar14 = param_5[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar17 = lVar14 - lVar25;
  if (lVar17 == 0) {
    puVar7 = (undefined8 *)0x0;
joined_r0x0031c670:
    if (lVar14 != lVar25) {
      uVar23 = 0;
      do {
        uVar11 = *(undefined8 *)(lVar25 + uVar23 * 8);
        fVar30 = *(float *)(*param_6 + uVar23 * 4);
        param_3 = (ulong)(uint)fVar30;
        uVar11 = CONCAT44((float)((ulong)uVar11 >> 0x20) * fVar30,(float)uVar11 * fVar30);
        if (puVar7 < (undefined8 *)param_1[2]) {
          puVar22 = puVar7 + 1;
          *puVar7 = uVar11;
        }
        else {
          pvVar9 = (void *)*param_1;
          lVar17 = (long)puVar7 - (long)pvVar9 >> 3;
          uVar18 = lVar17 + 1;
          if (uVar18 >> 0x3d != 0) {
            if (*(long *)(lVar6 + 0x28) == local_78) {
                    /* try { // try from 0031cbec to 0031cc0b has its CatchHandler @ 0031ccb4 */
              FUN_0031921c(param_1);
LAB_0031cbf4:
              if (*(long *)(lVar6 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                FUN_002f9ee0();
              }
            }
            goto LAB_0031cd34;
          }
          uVar13 = (long)param_1[2] - (long)pvVar9;
          uVar15 = (long)uVar13 >> 2;
          if (uVar15 <= uVar18) {
            uVar15 = uVar18;
          }
          if (0x7ffffffffffffff7 < uVar13) {
            uVar15 = 0x1fffffffffffffff;
          }
          if (uVar15 == 0) {
            pvVar8 = (void *)0x0;
          }
          else {
            if (uVar15 >> 0x3d != 0) goto LAB_0031cbf4;
                    /* try { // try from 0031c6f8 to 0031c6fb has its CatchHandler @ 0031cca4 */
            pvVar8 = (void *)FUN_00759c3c(uVar15 << 3);
          }
          puVar1 = (undefined8 *)((long)pvVar8 + lVar17 * 8);
          puVar22 = puVar1 + 1;
          *puVar1 = uVar11;
          memcpy(pvVar8,pvVar9,(long)puVar7 - (long)pvVar9);
          *param_1 = (ulong)pvVar8;
          param_1[1] = (ulong)puVar22;
          param_1[2] = (ulong)((long)pvVar8 + uVar15 * 8);
          if (pvVar9 != (void *)0x0) {
            free(pvVar9);
            lVar25 = *param_5;
            lVar14 = param_5[1];
          }
        }
        uVar23 = uVar23 + 1;
        param_1[1] = (ulong)puVar22;
        puVar7 = puVar22;
      } while (uVar23 < (ulong)(lVar14 - lVar25 >> 3));
    }
    local_a0 = (void *)0x0;
    local_98 = (void *)0x0;
    local_90 = 0;
    lVar25 = param_7[1] - *param_7;
    if (lVar25 != 0) {
      if (lVar25 < 0) goto LAB_0031cc28;
                    /* try { // try from 0031c768 to 0031c83b has its CatchHandler @ 0031cc9c */
      local_98 = (void *)FUN_00759c3c(lVar25);
      local_90 = (long)local_98 + lVar25;
    }
    local_a0 = local_98;
    FUN_0031e2a0(&local_a0,local_98);
                    /* try { // try from 0031c84c to 0031c853 has its CatchHandler @ 0031cc70 */
    FUN_0031ba30(&local_a0,local_98,*param_1,*param_1 + *(long *)(param_4 + 8) * 8);
    plVar2 = (long *)(*(long *)(param_8 + 8) + (*(ulong *)(param_8 + 0x20) >> 9) * 8);
    if (*(long *)(param_8 + 0x10) == *(long *)(param_8 + 8)) {
      lVar25 = 0;
      lVar14 = *(long *)(param_4 + 8);
    }
    else {
      lVar25 = *plVar2 + (*(ulong *)(param_8 + 0x20) & 0x1ff) * 8;
      lVar14 = *(long *)(param_4 + 8);
    }
    plVar12 = plVar2;
    lVar17 = lVar25;
    if (lVar14 != 0) {
      uVar23 = lVar14 + (lVar25 - *plVar2 >> 3);
      if ((long)uVar23 < 1) {
        uVar18 = 0x1ff - uVar23;
        uVar23 = (ulong)~(uint)uVar18;
        lVar14 = (uVar18 >> 9) * -8;
      }
      else {
        lVar14 = (uVar23 >> 9) << 3;
      }
      plVar12 = (long *)((long)plVar2 + lVar14);
      lVar17 = *(long *)((long)plVar2 + lVar14) + (uVar23 & 0x1ff) * 8;
    }
                    /* try { // try from 0031c8d8 to 0031c8df has its CatchHandler @ 0031cc68 */
    FUN_0031cf54(param_8,plVar2,lVar25,plVar12,lVar17);
    uVar23 = *(long *)(param_8 + 0x20) + *(long *)(param_8 + 0x28);
    plVar2 = (long *)(*(long *)(param_8 + 8) + (uVar23 >> 9) * 8);
    if (*(long *)(param_8 + 0x10) == *(long *)(param_8 + 8)) {
      lVar25 = 0;
    }
    else {
      lVar25 = *plVar2 + (uVar23 & 0x1ff) * 8;
    }
                    /* try { // try from 0031c91c to 0031c923 has its CatchHandler @ 0031cc60 */
    FUN_0031eb4c(param_8,plVar2,lVar25,*param_1,*param_1 + *(long *)(param_4 + 8) * 8);
    lVar25 = *param_7;
    if (param_7[1] != lVar25) {
      lVar14 = 0;
      uVar23 = 0;
      do {
        local_b8 = *(void **)(lVar25 + uVar23 * 8);
        puVar3 = (undefined4 *)((long)local_a0 + lVar14);
                    /* try { // try from 0031c948 to 0031c953 has its CatchHandler @ 0031ccc4 */
        uVar26 = FUN_0031fa70(puVar3,&local_b8);
        *puVar3 = uVar26;
        puVar3[1] = (int)param_3;
        uVar23 = uVar23 + 1;
        lVar14 = lVar14 + 8;
        lVar25 = *param_7;
      } while (uVar23 < (ulong)(param_7[1] - lVar25 >> 3));
    }
    __src = (float *)*param_1;
    pfVar5 = (float *)param_1[1];
    local_b8 = (void *)0x0;
    local_b0 = 0;
    local_a8 = 0;
    sVar24 = (long)pfVar5 - (long)__src;
    if (sVar24 == 0) {
      pvVar9 = (void *)0x0;
      uVar23 = *(ulong *)(param_4 + 8);
    }
    else {
      if ((long)sVar24 < 0) goto LAB_0031cc44;
                    /* try { // try from 0031c988 to 0031c98f has its CatchHandler @ 0031cc78 */
      pvVar9 = (void *)FUN_00759c3c(sVar24);
      local_b8 = pvVar9;
      local_a8 = (long)pvVar9 + sVar24;
      memcpy(pvVar9,__src,sVar24);
      uVar23 = *(ulong *)(param_4 + 8);
      local_b0 = (long)pvVar9 + sVar24;
    }
    if (uVar23 != 0) {
      sVar24 = uVar23 * 8;
      memset(pvVar9,0,sVar24);
      lVar25 = *(long *)(param_4 + 0x10);
      if (lVar25 != 0) {
        lVar17 = (uVar23 - 1) * 8;
        pvVar8 = (void *)((long)pvVar9 + 4);
        lVar14 = 0;
        pvVar4 = (void *)((long)local_a0 + lVar25 * uVar23 * 8);
        pfVar19 = (float *)((long)local_a0 + 0x20);
        uVar18 = uVar23 & 0x3ffffffffffffff8;
        pvVar16 = local_a0;
        do {
          pfVar10 = pfVar19;
          uVar15 = uVar18;
          pfVar21 = (float *)((long)pvVar9 + 0x20);
          if ((uVar23 < 0xc ||
              (((void *)((long)pvVar8 + lVar17) < pvVar8 || (void *)((long)pvVar9 + lVar17) < pvVar9
               ) || uVar23 - 1 >> 0x3d != 0)) ||
              ((pvVar8 < pvVar4 && (void *)((long)local_a0 + 4U) < (void *)((long)pvVar9 + sVar24)
               || (long)sVar24 < 0) ||
              pvVar9 < (void *)((long)pvVar4 - 4U) &&
              local_a0 < (void *)((long)((long)pvVar9 + sVar24) - 4U))) {
            uVar15 = 0;
LAB_0031cae4:
            lVar20 = uVar23 - uVar15;
            puVar7 = (undefined8 *)((long)pvVar16 + uVar15 * 8);
            puVar22 = (undefined8 *)((long)pvVar9 + uVar15 * 8);
            do {
              lVar20 = lVar20 + -1;
              *puVar22 = CONCAT44((float)((ulong)*puVar7 >> 0x20) + (float)((ulong)*puVar22 >> 0x20)
                                  ,(float)*puVar7 + (float)*puVar22);
              puVar7 = puVar7 + 1;
              puVar22 = puVar22 + 1;
            } while (lVar20 != 0);
          }
          else {
            do {
              fVar34 = *pfVar10;
              fVar38 = pfVar10[1];
              fVar35 = pfVar10[2];
              fVar39 = pfVar10[3];
              fVar36 = pfVar10[4];
              fVar40 = pfVar10[5];
              fVar37 = pfVar10[6];
              fVar41 = pfVar10[7];
              uVar15 = uVar15 - 8;
              fVar28 = pfVar10[-7];
              fVar30 = pfVar10[-6];
              fVar31 = pfVar10[-5];
              fVar29 = pfVar10[-4];
              fVar32 = pfVar10[-3];
              fVar27 = pfVar10[-2];
              fVar33 = pfVar10[-1];
              pfVar21[-8] = pfVar10[-8] + pfVar21[-8];
              pfVar21[-7] = fVar28 + pfVar21[-7];
              pfVar21[-6] = fVar30 + pfVar21[-6];
              pfVar21[-5] = fVar31 + pfVar21[-5];
              pfVar21[-4] = fVar29 + pfVar21[-4];
              pfVar21[-3] = fVar32 + pfVar21[-3];
              pfVar21[-2] = fVar27 + pfVar21[-2];
              pfVar21[-1] = fVar33 + pfVar21[-1];
              *pfVar21 = fVar34 + *pfVar21;
              pfVar21[1] = fVar38 + pfVar21[1];
              pfVar21[2] = fVar35 + pfVar21[2];
              pfVar21[3] = fVar39 + pfVar21[3];
              pfVar21[4] = fVar36 + pfVar21[4];
              pfVar21[5] = fVar40 + pfVar21[5];
              pfVar21[6] = fVar37 + pfVar21[6];
              pfVar21[7] = fVar41 + pfVar21[7];
              pfVar10 = pfVar10 + 0x10;
              pfVar21 = pfVar21 + 0x10;
            } while (uVar15 != 0);
            uVar15 = uVar18;
            if (uVar23 != uVar18) goto LAB_0031cae4;
          }
          lVar14 = lVar14 + 1;
          pfVar19 = pfVar19 + uVar23 * 2;
          pvVar16 = (void *)((long)pvVar16 + sVar24);
        } while (lVar14 != lVar25);
      }
    }
    local_84 = 0;
    local_7c = 0;
    fVar30 = param_2 / 100.0;
    local_88 = (100.0 - param_2) / 100.0;
    local_80 = fVar30;
    if (pfVar5 != __src) {
      lVar25 = 0;
      do {
        pfVar19 = (float *)((long)__src + lVar25);
                    /* try { // try from 0031cb48 to 0031cb67 has its CatchHandler @ 0031cccc */
        fVar27 = (float)FUN_0031fa70(&local_88,pfVar19);
        fVar29 = fVar30;
        fVar28 = (float)FUN_0031fa70(&local_80,(long)pvVar9 + lVar25);
        fVar30 = fVar30 + fVar29;
        lVar25 = lVar25 + 8;
        *pfVar19 = fVar27 + fVar28;
        pfVar19[1] = fVar30;
      } while (pfVar19 + 2 != pfVar5);
    }
    if (pvVar9 != (void *)0x0) {
      free(pvVar9);
    }
    if (local_a0 != (void *)0x0) {
      local_98 = local_a0;
      free(local_a0);
    }
    if (*(long *)(lVar6 + 0x28) == local_78) {
      return;
    }
  }
  else {
    if (-1 < lVar17) {
                    /* try { // try from 0031c644 to 0031c64b has its CatchHandler @ 0031cc8c */
      puVar7 = (undefined8 *)FUN_00759c3c(lVar17);
      *param_1 = (ulong)puVar7;
      param_1[1] = (ulong)puVar7;
      param_1[2] = (long)puVar7 + lVar17;
      goto joined_r0x0031c670;
    }
    if (*(long *)(lVar6 + 0x28) != local_78) goto LAB_0031cd34;
                    /* try { // try from 0031cc20 to 0031cc27 has its CatchHandler @ 0031cc8c */
    FUN_0031921c(param_1);
LAB_0031cc28:
    if (*(long *)(lVar6 + 0x28) != local_78) goto LAB_0031cd34;
                    /* try { // try from 0031cc3c to 0031cc43 has its CatchHandler @ 0031cc9c */
    FUN_0031921c(&local_a0);
LAB_0031cc44:
    if (*(long *)(lVar6 + 0x28) == local_78) {
                    /* try { // try from 0031cc58 to 0031cc5f has its CatchHandler @ 0031cc78 */
      uVar11 = FUN_0031921c(&local_b8);
                    /* catch() { ... } // from try @ 0031c91c with catch @ 0031cc60 */
      if (local_a0 == (void *)0x0) {
        pvVar9 = (void *)*param_1;
      }
      else {
        local_98 = local_a0;
        free(local_a0);
        pvVar9 = (void *)*param_1;
      }
      if (pvVar9 == (void *)0x0) {
        if (*(long *)(lVar6 + 0x28) == local_78) {
LAB_0031cd00:
                    /* WARNING: Subroutine does not return */
          FUN_00755eac(uVar11);
        }
      }
      else {
        param_1[1] = (ulong)pvVar9;
        free(pvVar9);
        if (*(long *)(lVar6 + 0x28) == local_78) goto LAB_0031cd00;
      }
    }
  }
LAB_0031cd34:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031cd38  FUN_0031cd38 =====

void FUN_0031cd38(long param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = param_2[1] - *param_2 >> 3;
  if (lVar3 == *(long *)(param_1 + 0xb8)) {
    if (lVar3 == param_3[1] - *param_3 >> 2) {
      if (*(long *)(param_1 + 8) * *(long *)(param_1 + 0x10) - (param_4[1] - *param_4 >> 3) == 0) {
        if (*(long *)(lVar1 + 0x28) == local_38) {
          return;
        }
      }
      else {
        uVar2 = FUN_00753a74(0x20);
                    /* try { // try from 0031ce94 to 0031cea3 has its CatchHandler @ 0031cef4 */
        FUN_002fd2b0(auStack_50,
                     "DfPostprocessor::applyDfOperation: _params.dfOrder * _params.numFreqs.");
                    /* try { // try from 0031cea8 to 0031cee3 has its CatchHandler @ 0031cee4 */
        FUN_00374ee0(uVar2,auStack_50);
        if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar2,PTR_PTR_007a1338,PTR_FUN_007a11f8);
        }
      }
    }
    else {
      uVar2 = FUN_00753a74(0x20);
                    /* try { // try from 0031ce30 to 0031ce3f has its CatchHandler @ 0031cf08 */
      FUN_002fd2b0(auStack_50,"DfPostprocessor::applyDfOperation: fftCoeffs.size() != mask.size().")
      ;
                    /* try { // try from 0031ce44 to 0031ce7f has its CatchHandler @ 0031cef8 */
      FUN_00374ee0(uVar2,auStack_50);
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar2,PTR_PTR_007a1338,PTR_FUN_007a11f8);
      }
    }
  }
  else {
    uVar2 = FUN_00753a74(0x20);
                    /* try { // try from 0031cdcc to 0031cddb has its CatchHandler @ 0031cf28 */
    FUN_002fd2b0(auStack_50,"DfPostprocessor::applyDfOperation: fftCoeffs.size() != _specSize");
                    /* try { // try from 0031cde0 to 0031ce1b has its CatchHandler @ 0031cf0c */
    FUN_00374ee0(uVar2,auStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031cf54  FUN_0031cf54 =====

void FUN_0031cf54(long param_1,long *param_2,long param_3,long *param_4,long param_5)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined1 uStack_69;
  long *local_68;
  long lStack_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_5 == param_3) {
    lVar12 = 0;
    uVar10 = *(ulong *)(param_1 + 0x20);
    puVar9 = *(undefined8 **)(param_1 + 8);
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    plVar4 = puVar9 + (uVar10 >> 9);
    if (puVar6 != puVar9) goto LAB_0031cfc4;
LAB_0031d02c:
    lVar3 = 0;
    if (param_3 == 0) {
LAB_0031d038:
      uVar7 = 0;
      bVar2 = true;
      goto LAB_0031d07c;
    }
  }
  else {
    lVar12 = ((param_5 - *param_4 >> 3) + ((long)param_4 - (long)param_2) * 0x40) -
             (param_3 - *param_2 >> 3);
    uVar10 = *(ulong *)(param_1 + 0x20);
    puVar9 = *(undefined8 **)(param_1 + 8);
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    plVar4 = puVar9 + (uVar10 >> 9);
    if (puVar6 == puVar9) goto LAB_0031d02c;
LAB_0031cfc4:
    lVar3 = *plVar4 + (uVar10 & 0x1ff) * 8;
    if (param_3 == lVar3) goto LAB_0031d038;
  }
  uVar8 = (param_3 - *param_2 >> 3) + ((long)param_2 - (long)plVar4) * 0x40;
  uVar7 = uVar8 - (lVar3 - *plVar4 >> 3);
  if (uVar7 == 0) {
    bVar2 = true;
    param_3 = lVar3;
  }
  else {
    if ((long)uVar8 < 1) {
      uVar11 = 0x1ff - uVar8;
      uVar8 = (ulong)~(uint)uVar11;
      lVar3 = (uVar11 >> 9) * -8;
    }
    else {
      lVar3 = (uVar8 >> 9) * 8;
    }
    plVar4 = (long *)((long)plVar4 + lVar3);
    bVar2 = false;
    param_3 = *plVar4 + (uVar8 & 0x1ff) * 8;
  }
LAB_0031d07c:
  if (0 < lVar12) {
    uVar8 = lVar12 + (param_3 - *plVar4 >> 3);
    if ((ulong)(*(long *)(param_1 + 0x28) - lVar12) >> 1 < uVar7) {
      if ((long)uVar8 < 1) {
        uVar11 = 0x1ff - uVar8;
        uVar8 = (ulong)~(uint)uVar11;
        lVar3 = (uVar11 >> 9) * -8;
      }
      else {
        lVar3 = (uVar8 >> 9) * 8;
      }
      uVar10 = *(long *)(param_1 + 0x28) + uVar10;
      if (puVar6 == puVar9) {
        lVar5 = 0;
      }
      else {
        lVar5 = puVar9[uVar10 >> 9] + (uVar10 & 0x1ff) * 8;
      }
      local_68 = plVar4;
      lStack_60 = param_3;
      FUN_0031e8bc((long *)((long)plVar4 + lVar3),
                   *(long *)((long)plVar4 + lVar3) + (uVar8 & 0x1ff) * 8,puVar9 + (uVar10 >> 9),
                   lVar5,&local_68);
      puVar9 = *(undefined8 **)(param_1 + 8);
      puVar6 = *(undefined8 **)(param_1 + 0x10);
      uVar10 = *(ulong *)(param_1 + 0x20);
      lVar12 = *(long *)(param_1 + 0x28) - lVar12;
      *(long *)(param_1 + 0x28) = lVar12;
      lVar3 = 0;
      if (puVar6 != puVar9) {
        lVar3 = ((long)puVar6 - (long)puVar9) * 0x40 + -1;
      }
      uVar8 = lVar3 - (lVar12 + uVar10);
      while (0x3ff < uVar8) {
        free((void *)puVar6[-1]);
        puVar9 = *(undefined8 **)(param_1 + 8);
        uVar10 = *(ulong *)(param_1 + 0x20);
        puVar6 = (undefined8 *)(*(long *)(param_1 + 0x10) + -8);
        *(undefined8 **)(param_1 + 0x10) = puVar6;
        lVar12 = 0;
        if (puVar6 != puVar9) {
          lVar12 = ((long)puVar6 - (long)puVar9) * 0x40 + -1;
        }
        uVar8 = lVar12 - (*(long *)(param_1 + 0x28) + uVar10);
      }
    }
    else {
      FUN_0031e68c(&local_68,&uStack_69);
      puVar9 = *(undefined8 **)(param_1 + 8);
      uVar10 = *(long *)(param_1 + 0x20) + lVar12;
      *(ulong *)(param_1 + 0x20) = uVar10;
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) - lVar12;
      while (0x3ff < uVar10) {
        free((void *)*puVar9);
        uVar10 = *(long *)(param_1 + 0x20) - 0x200;
        puVar9 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
        *(undefined8 **)(param_1 + 8) = puVar9;
        *(ulong *)(param_1 + 0x20) = uVar10;
      }
    }
  }
  plVar4 = puVar9 + (uVar10 >> 9);
  if (*(undefined8 **)(param_1 + 0x10) == puVar9) {
    lVar12 = 0;
  }
  else {
    lVar12 = *plVar4 + (uVar10 & 0x1ff) * 8;
  }
  if (!bVar2) {
    uVar7 = uVar7 + (lVar12 - *plVar4 >> 3);
    if ((long)uVar7 < 1) {
      uVar10 = 0x1ff - uVar7;
      uVar7 = (ulong)~(uint)uVar10;
      lVar12 = (uVar10 >> 9) * -8;
    }
    else {
      lVar12 = (uVar7 >> 9) << 3;
    }
    plVar4 = (long *)((long)plVar4 + lVar12);
    lVar12 = *plVar4 + (uVar7 & 0x1ff) * 8;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar4,lVar12);
  }
  return;
}


// ===== 0031d2b0  FUN_0031d2b0 =====

void FUN_0031d2b0(long param_1,ulong param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  
  lVar6 = *(long *)(param_1 + 8);
  lVar11 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(param_1 + 0x28);
  uVar14 = lVar8 + *(long *)(param_1 + 0x20);
  lVar1 = 0;
  if (lVar11 != lVar6) {
    lVar1 = (lVar11 - lVar6) * 0x40 + -1;
  }
  lVar3 = param_2 - (lVar1 - uVar14);
  if (lVar1 - uVar14 <= param_2 && lVar3 != 0) {
    FUN_0031d47c(param_1,lVar3);
    lVar8 = *(long *)(param_1 + 0x28);
    lVar6 = *(long *)(param_1 + 8);
    lVar11 = *(long *)(param_1 + 0x10);
    uVar14 = *(long *)(param_1 + 0x20) + lVar8;
  }
  puVar5 = (ulong *)(lVar6 + (uVar14 >> 9) * 8);
  if (lVar11 == lVar6) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar7 = (undefined8 *)(*puVar5 + (uVar14 & 0x1ff) * 8);
  }
  if (param_2 != 0) {
    param_2 = param_2 + ((long)((long)puVar7 - *puVar5) >> 3);
    if ((long)param_2 < 1) {
      uVar14 = 0x1ff - param_2;
      param_2 = (ulong)~(uint)uVar14;
      lVar1 = (uVar14 >> 9) * -8;
    }
    else {
      lVar1 = (param_2 >> 9) << 3;
    }
    puVar12 = (ulong *)((long)puVar5 + lVar1);
    puVar2 = (undefined8 *)(*puVar12 + (param_2 & 0x1ff) * 8);
    if (puVar7 != puVar2) {
      do {
        puVar13 = puVar2;
        if (puVar5 != puVar12) {
          puVar13 = (undefined8 *)(*puVar5 + 0x1000);
        }
        if (puVar7 == puVar13) {
          *(long *)(param_1 + 0x28) = lVar8;
        }
        else {
          uVar14 = (long)puVar13 + (-8 - (long)puVar7);
          puVar9 = puVar7;
          if ((uVar14 < 0x28) ||
             ((puVar7 < param_3 + 1 &&
              (param_3 < (undefined8 *)((long)puVar7 + (uVar14 & 0xfffffffffffffff8) + 8))))) {
LAB_0031d41c:
            do {
              puVar10 = puVar9 + 1;
              *puVar9 = *param_3;
              puVar9 = puVar10;
            } while (puVar10 != puVar13);
          }
          else {
            puVar9 = puVar7 + 2;
            uVar14 = (uVar14 >> 3) + 1;
            uVar15 = uVar14 & 0x3ffffffffffffffc;
            uVar4 = uVar15;
            do {
              uVar16 = *param_3;
              uVar4 = uVar4 - 4;
              puVar9[-1] = uVar16;
              puVar9[-2] = uVar16;
              puVar9[1] = uVar16;
              *puVar9 = uVar16;
              puVar9 = puVar9 + 4;
            } while (uVar4 != 0);
            puVar9 = puVar7 + uVar15;
            if (uVar14 != uVar15) goto LAB_0031d41c;
          }
          lVar8 = *(long *)(param_1 + 0x28) + ((long)puVar13 - (long)puVar7 >> 3);
          *(long *)(param_1 + 0x28) = lVar8;
        }
        if (puVar5 == puVar12) {
          return;
        }
        puVar5 = puVar5 + 1;
        puVar7 = (undefined8 *)*puVar5;
      } while (puVar7 != puVar2);
    }
  }
  return;
}


// ===== 0031d47c  FUN_0031d47c =====

void FUN_0031d47c(long *param_1,ulong param_2)

{
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  void *__ptr;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar4 = (undefined8 *)param_1[2];
  uVar11 = param_1[4];
  if ((long)puVar4 - param_1[1] == 0) {
    param_2 = param_2 + 1;
  }
  uVar10 = param_2 >> 9;
  uVar9 = uVar11 >> 9;
  if ((param_2 & 0x1ff) != 0) {
    uVar10 = uVar10 + 1;
  }
  uVar21 = uVar10;
  if (uVar9 <= uVar10) {
    uVar21 = uVar9;
  }
  if (uVar9 < uVar10) {
    lVar17 = (long)puVar4 - param_1[1] >> 3;
    uVar9 = uVar10 - uVar21;
    if ((ulong)((param_1[3] - *param_1 >> 3) - lVar17) < uVar9) {
      uVar10 = param_1[3] - *param_1 >> 2;
      if (uVar10 <= uVar9 + lVar17) {
        uVar10 = uVar9 + lVar17;
      }
      if (uVar10 == 0) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        if (uVar10 >> 0x3d != 0) {
LAB_0031dd6c:
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_002f9ee0();
          }
          goto LAB_0031de54;
        }
        puVar4 = (undefined8 *)FUN_00759c3c(uVar10 << 3);
      }
      puVar18 = puVar4 + uVar10;
      puVar19 = puVar4 + (lVar17 - uVar21);
      puVar20 = puVar4 + (lVar17 - uVar21);
      do {
                    /* try { // try from 0031d728 to 0031d72f has its CatchHandler @ 0031ddec */
        uVar5 = FUN_00759c3c(0x1000);
        puVar6 = puVar4;
        puVar8 = puVar19;
        if (puVar20 == puVar18) {
          if (puVar19 < puVar4 || (long)puVar19 - (long)puVar4 == 0) {
            uVar10 = (long)puVar18 - (long)puVar4 >> 2;
            if ((long)puVar18 - (long)puVar4 == 0) {
              uVar10 = 1;
            }
            if (uVar10 >> 0x3d != 0) {
              if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0031dd94 to 0031dd97 has its CatchHandler @ 0031dddc */
                FUN_002f9ee0();
              }
              goto LAB_0031de54;
            }
                    /* try { // try from 0031d79c to 0031d7a3 has its CatchHandler @ 0031ddec */
            puVar6 = (undefined8 *)FUN_00759c3c(uVar10 << 3);
            uVar14 = uVar10 >> 2;
            lVar17 = (long)puVar18 - (long)puVar19;
            puVar8 = puVar6 + uVar14;
            puVar20 = puVar8;
            if (lVar17 != 0) {
              puVar20 = (undefined8 *)((long)puVar8 + lVar17);
              puVar18 = puVar8;
              if ((0x17 < lVar17 - 8U) && (0x1f < (long)puVar6 + (uVar14 * 8 - (long)puVar19))) {
                puVar18 = puVar19 + 2;
                puVar15 = puVar6 + uVar14 + 2;
                uVar14 = (lVar17 - 8U >> 3) + 1;
                uVar12 = uVar14 & 0x3ffffffffffffffc;
                puVar19 = puVar19 + uVar12;
                uVar13 = uVar12;
                do {
                  puVar16 = puVar18 + -1;
                  uVar22 = puVar18[-2];
                  uVar24 = puVar18[1];
                  uVar23 = *puVar18;
                  uVar13 = uVar13 - 4;
                  puVar18 = puVar18 + 4;
                  puVar15[-1] = *puVar16;
                  puVar15[-2] = uVar22;
                  puVar15[1] = uVar24;
                  *puVar15 = uVar23;
                  puVar15 = puVar15 + 4;
                } while (uVar13 != 0);
                puVar18 = puVar8 + uVar12;
                if (uVar14 == uVar12) goto LAB_0031d7fc;
              }
              do {
                puVar15 = puVar18 + 1;
                *puVar18 = *puVar19;
                puVar18 = puVar15;
                puVar19 = puVar19 + 1;
              } while (puVar15 != puVar20);
            }
LAB_0031d7fc:
            puVar18 = puVar6 + uVar10;
            if (puVar4 != (undefined8 *)0x0) {
              free(puVar4);
            }
          }
          else {
            lVar7 = (long)puVar19 - (long)puVar4 >> 3;
            lVar17 = lVar7 + 2;
            if (lVar7 + 1 < 0 == SCARRY8(lVar7,1)) {
              lVar17 = lVar7 + 1;
            }
            sVar1 = (long)puVar18 - (long)puVar19;
            puVar8 = puVar18;
            if (sVar1 != 0) {
              memmove(puVar19 + -(lVar17 >> 1),puVar19,sVar1);
              puVar8 = puVar19;
            }
            puVar20 = (undefined8 *)((long)(puVar19 + -(lVar17 >> 1)) + sVar1);
            puVar8 = puVar8 + -(lVar17 >> 1);
          }
        }
        uVar9 = uVar9 - 1;
        puVar15 = puVar20 + 1;
        *puVar20 = uVar5;
        puVar4 = puVar6;
        puVar19 = puVar8;
        puVar20 = puVar15;
      } while (uVar9 != 0);
      puVar4 = (undefined8 *)param_1[1];
      puVar16 = puVar6;
      uVar10 = uVar21;
      if (0x1ff < uVar11) {
        do {
          puVar6 = puVar16;
          puVar8 = puVar19;
          if (puVar20 == puVar18) {
            if (puVar19 < puVar16 || (long)puVar19 - (long)puVar16 == 0) {
              uVar11 = (long)puVar18 - (long)puVar16 >> 2;
              if ((long)puVar18 - (long)puVar16 == 0) {
                uVar11 = 1;
              }
              if (uVar11 >> 0x3d != 0) {
                if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0031ddc4 to 0031ddc7 has its CatchHandler @ 0031ddc8 */
                  FUN_002f9ee0();
                }
                goto LAB_0031de54;
              }
                    /* try { // try from 0031d970 to 0031d973 has its CatchHandler @ 0031ddcc */
              puVar6 = (undefined8 *)FUN_00759c3c(uVar11 << 3);
              uVar9 = uVar11 >> 2;
              lVar17 = (long)puVar18 - (long)puVar19;
              puVar8 = puVar6 + uVar9;
              puVar20 = puVar8;
              if (lVar17 != 0) {
                puVar20 = (undefined8 *)((long)puVar8 + lVar17);
                puVar18 = puVar8;
                if ((0x17 < lVar17 - 8U) && (0x1f < (long)puVar6 + (uVar9 * 8 - (long)puVar19))) {
                  puVar18 = puVar19 + 2;
                  puVar15 = puVar6 + uVar9 + 2;
                  uVar9 = (lVar17 - 8U >> 3) + 1;
                  uVar13 = uVar9 & 0x3ffffffffffffffc;
                  puVar19 = puVar19 + uVar13;
                  uVar14 = uVar13;
                  do {
                    puVar3 = puVar18 + -1;
                    uVar5 = puVar18[-2];
                    uVar23 = puVar18[1];
                    uVar22 = *puVar18;
                    uVar14 = uVar14 - 4;
                    puVar18 = puVar18 + 4;
                    puVar15[-1] = *puVar3;
                    puVar15[-2] = uVar5;
                    puVar15[1] = uVar23;
                    *puVar15 = uVar22;
                    puVar15 = puVar15 + 4;
                  } while (uVar14 != 0);
                  puVar18 = puVar8 + uVar13;
                  if (uVar9 == uVar13) goto LAB_0031d9c8;
                }
                do {
                  puVar15 = puVar18 + 1;
                  *puVar18 = *puVar19;
                  puVar18 = puVar15;
                  puVar19 = puVar19 + 1;
                } while (puVar15 != puVar20);
              }
LAB_0031d9c8:
              puVar18 = puVar6 + uVar11;
              if (puVar16 != (undefined8 *)0x0) {
                free(puVar16);
              }
            }
            else {
              lVar7 = (long)puVar19 - (long)puVar16 >> 3;
              lVar17 = lVar7 + 2;
              if (lVar7 + 1 < 0 == SCARRY8(lVar7,1)) {
                lVar17 = lVar7 + 1;
              }
              sVar1 = (long)puVar18 - (long)puVar19;
              puVar8 = puVar18;
              if (sVar1 != 0) {
                memmove(puVar19 + -(lVar17 >> 1),puVar19,sVar1);
                puVar8 = puVar19;
              }
              puVar20 = (undefined8 *)((long)(puVar19 + -(lVar17 >> 1)) + sVar1);
              puVar8 = puVar8 + -(lVar17 >> 1);
            }
          }
          uVar10 = uVar10 - 1;
          puVar15 = puVar20 + 1;
          *puVar20 = *puVar4;
          puVar4 = (undefined8 *)(param_1[1] + 8);
          param_1[1] = (long)puVar4;
          puVar16 = puVar6;
          puVar19 = puVar8;
          puVar20 = puVar15;
        } while (uVar10 != 0);
      }
      puVar19 = (undefined8 *)param_1[2];
      puVar20 = puVar6;
      if (puVar19 != puVar4) {
        do {
          puVar6 = puVar20;
          if (puVar8 == puVar20) {
            if (puVar15 < puVar18) {
              lVar7 = (long)puVar18 - (long)puVar15 >> 3;
              lVar17 = lVar7 + 2;
              if (lVar7 + 1 < 0 == SCARRY8(lVar7,1)) {
                lVar17 = lVar7 + 1;
              }
              puVar8 = puVar20 + (lVar17 >> 1);
              if ((long)puVar15 - (long)puVar20 != 0) {
                memmove(puVar8,puVar20,(long)puVar15 - (long)puVar20);
                puVar20 = puVar15;
              }
              puVar15 = puVar20 + (lVar17 >> 1);
            }
            else {
              uVar11 = (long)puVar18 - (long)puVar20 >> 2;
              if ((long)puVar18 - (long)puVar20 == 0) {
                uVar11 = 1;
              }
              if (uVar11 >> 0x3d != 0) {
                if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0031ddac to 0031ddaf has its CatchHandler @ 0031ddd0 */
                  FUN_002f9ee0();
                }
                goto LAB_0031de54;
              }
                    /* try { // try from 0031dab8 to 0031dabb has its CatchHandler @ 0031ddd4 */
              puVar6 = (undefined8 *)FUN_00759c3c(uVar11 << 3);
              uVar10 = uVar11 + 3 >> 2;
              lVar17 = (long)puVar15 - (long)puVar20;
              puVar8 = puVar6 + uVar10;
              puVar15 = puVar8;
              if (lVar17 != 0) {
                puVar15 = (undefined8 *)((long)puVar8 + lVar17);
                puVar4 = puVar8;
                puVar18 = puVar20;
                if ((0x17 < lVar17 - 8U) && (0x1f < (long)puVar6 + (uVar10 * 8 - (long)puVar20))) {
                  puVar4 = puVar20 + 2;
                  puVar18 = puVar6 + uVar10 + 2;
                  uVar10 = (lVar17 - 8U >> 3) + 1;
                  uVar14 = uVar10 & 0x3ffffffffffffffc;
                  uVar9 = uVar14;
                  do {
                    puVar16 = puVar4 + -1;
                    uVar5 = puVar4[-2];
                    uVar23 = puVar4[1];
                    uVar22 = *puVar4;
                    uVar9 = uVar9 - 4;
                    puVar4 = puVar4 + 4;
                    puVar18[-1] = *puVar16;
                    puVar18[-2] = uVar5;
                    puVar18[1] = uVar23;
                    *puVar18 = uVar22;
                    puVar18 = puVar18 + 4;
                  } while (uVar9 != 0);
                  puVar4 = puVar8 + uVar14;
                  puVar18 = puVar20 + uVar14;
                  if (uVar10 == uVar14) goto LAB_0031db64;
                }
                do {
                  puVar16 = puVar4 + 1;
                  *puVar4 = *puVar18;
                  puVar4 = puVar16;
                  puVar18 = puVar18 + 1;
                } while (puVar16 != puVar15);
              }
LAB_0031db64:
              puVar18 = puVar6 + uVar11;
              if (puVar20 != (undefined8 *)0x0) {
                free(puVar20);
              }
            }
          }
          puVar19 = puVar19 + -1;
          puVar8 = puVar8 + -1;
          *puVar8 = *puVar19;
          puVar20 = puVar6;
        } while (puVar19 != (undefined8 *)param_1[1]);
      }
      __ptr = (void *)*param_1;
      param_1[2] = (long)puVar15;
      param_1[3] = (long)puVar18;
      *param_1 = (long)puVar6;
      param_1[1] = (long)puVar8;
      param_1[4] = param_1[4] + uVar21 * -0x200;
      if (__ptr != (void *)0x0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
          free(__ptr);
          return;
        }
        goto LAB_0031de54;
      }
    }
    else {
      if (uVar9 != 0) {
LAB_0031d6a4:
        if (param_1[3] != param_1[2]) goto code_r0x0031d6b0;
        uVar11 = 0;
        do {
          local_70 = FUN_00759c3c(0x1000);
          FUN_0031dfe4(param_1,&local_70);
          uVar11 = uVar11 + 1;
          lVar7 = param_1[4];
          lVar17 = 0x1ff;
          if (param_1[2] - param_1[1] != 8) {
            lVar17 = 0x200;
          }
          param_1[4] = lVar17 + lVar7;
        } while (uVar9 != uVar11);
        param_1[4] = lVar17 + lVar7 + uVar10 * -0x200;
        uVar21 = uVar10;
        goto joined_r0x0031dbcc;
      }
LAB_0031d6d4:
      param_1[4] = param_1[4] + uVar21 * -0x200;
joined_r0x0031dbcc:
      if (uVar21 != 0) {
        puVar4 = (undefined8 *)param_1[2];
        do {
          puVar20 = (undefined8 *)param_1[1];
          puVar19 = puVar20 + 1;
          uVar5 = *puVar20;
          param_1[1] = (long)puVar19;
          if (puVar4 == (undefined8 *)param_1[3]) {
            puVar18 = (undefined8 *)*param_1;
            if (puVar19 < puVar18 || (long)puVar19 - (long)puVar18 == 0) {
              uVar11 = (long)puVar4 - (long)puVar18 >> 2;
              if ((long)puVar4 - (long)puVar18 == 0) {
                uVar11 = 1;
              }
              if (uVar11 >> 0x3d != 0) goto LAB_0031dd6c;
              lVar17 = FUN_00759c3c(uVar11 * 8);
              puVar8 = (undefined8 *)(lVar17 + (uVar11 >> 2) * 8);
              puVar6 = puVar8;
              if ((long)puVar4 - (long)puVar19 != 0) {
                uVar10 = (long)puVar4 + (-0x10 - (long)puVar20);
                puVar6 = (undefined8 *)((long)puVar8 + ((long)puVar4 - (long)puVar19));
                puVar4 = puVar8;
                if ((0x17 < uVar10) &&
                   (lVar7 = lVar17 + (uVar11 >> 2) * 8, 0x1f < (lVar7 - (long)puVar20) - 8U)) {
                  puVar4 = (undefined8 *)(lVar7 + 0x10);
                  uVar10 = (uVar10 >> 3) + 1;
                  uVar14 = uVar10 & 0x3ffffffffffffffc;
                  puVar19 = puVar19 + uVar14;
                  puVar20 = puVar20 + 3;
                  uVar9 = uVar14;
                  do {
                    puVar15 = puVar20 + -1;
                    uVar22 = puVar20[-2];
                    uVar24 = puVar20[1];
                    uVar23 = *puVar20;
                    uVar9 = uVar9 - 4;
                    puVar20 = puVar20 + 4;
                    puVar4[-1] = *puVar15;
                    puVar4[-2] = uVar22;
                    puVar4[1] = uVar24;
                    *puVar4 = uVar23;
                    puVar4 = puVar4 + 4;
                  } while (uVar9 != 0);
                  puVar4 = puVar8 + uVar14;
                  if (uVar10 == uVar14) goto LAB_0031dbd8;
                }
                do {
                  puVar20 = puVar4 + 1;
                  *puVar4 = *puVar19;
                  puVar4 = puVar20;
                  puVar19 = puVar19 + 1;
                } while (puVar20 != puVar6);
              }
LAB_0031dbd8:
              *param_1 = lVar17;
              param_1[1] = (long)puVar8;
              param_1[2] = (long)puVar6;
              param_1[3] = lVar17 + uVar11 * 8;
              free(puVar18);
              puVar4 = (undefined8 *)param_1[2];
            }
            else {
              lVar7 = (long)puVar19 - (long)puVar18 >> 3;
              lVar17 = lVar7 + 2;
              if (lVar7 + 1 < 0 == SCARRY8(lVar7,1)) {
                lVar17 = lVar7 + 1;
              }
              sVar1 = (long)puVar4 - (long)puVar19;
              if (sVar1 != 0) {
                memmove(puVar19 + -(lVar17 >> 1),puVar19,sVar1);
                puVar4 = (undefined8 *)param_1[1];
              }
              puVar20 = puVar4 + -(lVar17 >> 1);
              puVar4 = (undefined8 *)((long)(puVar19 + -(lVar17 >> 1)) + sVar1);
              param_1[1] = (long)puVar20;
              param_1[2] = (long)puVar4;
            }
          }
          *puVar4 = uVar5;
          uVar21 = uVar21 - 1;
          puVar4 = (undefined8 *)(param_1[2] + 8);
          param_1[2] = (long)puVar4;
        } while (uVar21 != 0);
      }
    }
  }
  else {
    param_1[4] = uVar11 + uVar21 * -0x200;
    for (; uVar21 != 0; uVar21 = uVar21 - 1) {
      puVar20 = (undefined8 *)param_1[1];
      puVar19 = puVar20 + 1;
      uVar5 = *puVar20;
      param_1[1] = (long)puVar19;
      if (puVar4 == (undefined8 *)param_1[3]) {
        puVar18 = (undefined8 *)*param_1;
        if (puVar19 < puVar18 || (long)puVar19 - (long)puVar18 == 0) {
          uVar11 = (long)puVar4 - (long)puVar18 >> 2;
          if ((long)puVar4 - (long)puVar18 == 0) {
            uVar11 = 1;
          }
          if (uVar11 >> 0x3d != 0) goto LAB_0031dd6c;
          lVar17 = FUN_00759c3c(uVar11 * 8);
          puVar8 = (undefined8 *)(lVar17 + (uVar11 >> 2) * 8);
          puVar6 = puVar8;
          if ((long)puVar4 - (long)puVar19 != 0) {
            uVar10 = (long)puVar4 + (-0x10 - (long)puVar20);
            puVar6 = (undefined8 *)((long)puVar8 + ((long)puVar4 - (long)puVar19));
            puVar4 = puVar8;
            if ((0x17 < uVar10) &&
               (lVar7 = lVar17 + (uVar11 >> 2) * 8, 0x1f < (lVar7 - (long)puVar20) - 8U)) {
              puVar4 = (undefined8 *)(lVar7 + 0x10);
              uVar10 = (uVar10 >> 3) + 1;
              uVar14 = uVar10 & 0x3ffffffffffffffc;
              puVar19 = puVar19 + uVar14;
              puVar20 = puVar20 + 3;
              uVar9 = uVar14;
              do {
                puVar15 = puVar20 + -1;
                uVar22 = puVar20[-2];
                uVar24 = puVar20[1];
                uVar23 = *puVar20;
                uVar9 = uVar9 - 4;
                puVar20 = puVar20 + 4;
                puVar4[-1] = *puVar15;
                puVar4[-2] = uVar22;
                puVar4[1] = uVar24;
                *puVar4 = uVar23;
                puVar4 = puVar4 + 4;
              } while (uVar9 != 0);
              puVar4 = puVar8 + uVar14;
              if (uVar10 == uVar14) goto LAB_0031d53c;
            }
            do {
              puVar20 = puVar4 + 1;
              *puVar4 = *puVar19;
              puVar4 = puVar20;
              puVar19 = puVar19 + 1;
            } while (puVar20 != puVar6);
          }
LAB_0031d53c:
          *param_1 = lVar17;
          param_1[1] = (long)puVar8;
          param_1[2] = (long)puVar6;
          param_1[3] = lVar17 + uVar11 * 8;
          free(puVar18);
          puVar4 = (undefined8 *)param_1[2];
        }
        else {
          lVar7 = (long)puVar19 - (long)puVar18 >> 3;
          lVar17 = lVar7 + 2;
          if (lVar7 + 1 < 0 == SCARRY8(lVar7,1)) {
            lVar17 = lVar7 + 1;
          }
          sVar1 = (long)puVar4 - (long)puVar19;
          if (sVar1 != 0) {
            memmove(puVar19 + -(lVar17 >> 1),puVar19,sVar1);
            puVar4 = (undefined8 *)param_1[1];
          }
          puVar20 = puVar4 + -(lVar17 >> 1);
          puVar4 = (undefined8 *)((long)(puVar19 + -(lVar17 >> 1)) + sVar1);
          param_1[1] = (long)puVar20;
          param_1[2] = (long)puVar4;
        }
      }
      *puVar4 = uVar5;
      puVar4 = (undefined8 *)(param_1[2] + 8);
      param_1[2] = (long)puVar4;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0031de54:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0031d6b0:
  local_70 = FUN_00759c3c(0x1000);
  FUN_0031de5c(param_1,&local_70);
  uVar9 = uVar9 - 1;
  uVar10 = uVar10 - 1;
  if (uVar9 == 0) goto LAB_0031d6d4;
  goto LAB_0031d6a4;
}


// ===== 0031de5c  FUN_0031de5c =====

void FUN_0031de5c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  size_t __n;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *__src;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar13 = (undefined8 *)param_1[2];
  if (puVar13 != (undefined8 *)param_1[3]) goto LAB_0031dfb4;
  puVar5 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (puVar5 <= __src && (long)__src - (long)puVar5 != 0) {
    lVar7 = (long)__src - (long)puVar5 >> 3;
    lVar1 = lVar7 + 2;
    if (lVar7 + 1 < 0 == SCARRY8(lVar7,1)) {
      lVar1 = lVar7 + 1;
    }
    __n = (long)puVar13 - (long)__src;
    if (__n != 0) {
      memmove(__src + -(lVar1 >> 1),__src,__n);
      puVar13 = (undefined8 *)param_1[1];
    }
    puVar5 = puVar13 + -(lVar1 >> 1);
    puVar13 = (undefined8 *)((long)(__src + -(lVar1 >> 1)) + __n);
    param_1[1] = (long)puVar5;
    param_1[2] = (long)puVar13;
    goto LAB_0031dfb4;
  }
  uVar8 = (long)puVar13 - (long)puVar5 >> 2;
  if ((long)puVar13 - (long)puVar5 == 0) {
    uVar8 = 1;
  }
  if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  lVar7 = FUN_00759c3c(uVar8 * 8);
  puVar3 = (undefined8 *)(lVar7 + (uVar8 >> 2) * 8);
  lVar1 = (long)puVar13 - (long)__src;
  puVar13 = puVar3;
  if (lVar1 != 0) {
    puVar13 = (undefined8 *)((long)puVar3 + lVar1);
    puVar9 = puVar3;
    if ((0x37 < lVar1 - 8U) &&
       (lVar4 = (uVar8 >> 2) * 8 + lVar7, 0x1f < (ulong)(lVar4 - (long)__src))) {
      puVar9 = __src + 2;
      puVar11 = (undefined8 *)(lVar4 + 0x10);
      uVar2 = (lVar1 - 8U >> 3) + 1;
      uVar10 = uVar2 & 0x3ffffffffffffffc;
      __src = __src + uVar10;
      uVar12 = uVar10;
      do {
        puVar6 = puVar9 + -1;
        uVar14 = puVar9[-2];
        uVar16 = puVar9[1];
        uVar15 = *puVar9;
        uVar12 = uVar12 - 4;
        puVar9 = puVar9 + 4;
        puVar11[-1] = *puVar6;
        puVar11[-2] = uVar14;
        puVar11[1] = uVar16;
        *puVar11 = uVar15;
        puVar11 = puVar11 + 4;
      } while (uVar12 != 0);
      puVar9 = puVar3 + uVar10;
      if (uVar2 == uVar10) goto LAB_0031df9c;
    }
    do {
      puVar11 = puVar9 + 1;
      *puVar9 = *__src;
      puVar9 = puVar11;
      __src = __src + 1;
    } while (puVar11 != puVar13);
  }
LAB_0031df9c:
  *param_1 = lVar7;
  param_1[1] = (long)puVar3;
  param_1[2] = (long)puVar13;
  param_1[3] = lVar7 + uVar8 * 8;
  if (puVar5 != (undefined8 *)0x0) {
    free(puVar5);
    puVar13 = (undefined8 *)param_1[2];
  }
LAB_0031dfb4:
  *puVar13 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}


// ===== 0031dfe4  FUN_0031dfe4 =====

void FUN_0031dfe4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *__ptr;
  undefined8 *__dest;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  __ptr = (undefined8 *)param_1[1];
  __dest = __ptr;
  if (__ptr != (undefined8 *)*param_1) goto LAB_0031e144;
  uVar3 = param_1[2];
  uVar11 = param_1[3];
  if (uVar3 < uVar11) {
    lVar4 = (long)(uVar11 - uVar3) >> 3;
    lVar1 = lVar4 + 2;
    if (lVar4 + 1 < 0 == SCARRY8(lVar4,1)) {
      lVar1 = lVar4 + 1;
    }
    __dest = __ptr + (lVar1 >> 1);
    if (uVar3 - (long)__ptr != 0) {
      memmove(__dest,__ptr,uVar3 - (long)__ptr);
      __ptr = (undefined8 *)param_1[2];
    }
    param_1[1] = (long)__dest;
    param_1[2] = (long)(__ptr + (lVar1 >> 1));
    goto LAB_0031e144;
  }
  uVar5 = (long)(uVar11 - (long)__ptr) >> 2;
  if (uVar11 - (long)__ptr == 0) {
    uVar5 = 1;
  }
  if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  uVar11 = uVar5 + 3 >> 2;
  lVar4 = FUN_00759c3c(uVar5 * 8);
  lVar1 = uVar3 - (long)__ptr;
  __dest = (undefined8 *)(lVar4 + uVar11 * 8);
  puVar6 = __dest;
  if (lVar1 != 0) {
    puVar6 = (undefined8 *)((long)__dest + lVar1);
    puVar7 = __dest;
    puVar9 = __ptr;
    if ((0x37 < lVar1 - 8U) && (lVar2 = uVar11 * 8 + lVar4, 0x1f < (ulong)(lVar2 - (long)__ptr))) {
      puVar7 = __ptr + 2;
      puVar9 = (undefined8 *)(lVar2 + 0x10);
      uVar3 = (lVar1 - 8U >> 3) + 1;
      uVar10 = uVar3 & 0x3ffffffffffffffc;
      uVar11 = uVar10;
      do {
        puVar8 = puVar7 + -1;
        uVar12 = puVar7[-2];
        uVar14 = puVar7[1];
        uVar13 = *puVar7;
        uVar11 = uVar11 - 4;
        puVar7 = puVar7 + 4;
        puVar9[-1] = *puVar8;
        puVar9[-2] = uVar12;
        puVar9[1] = uVar14;
        *puVar9 = uVar13;
        puVar9 = puVar9 + 4;
      } while (uVar11 != 0);
      puVar7 = __dest + uVar10;
      puVar9 = __ptr + uVar10;
      if (uVar3 == uVar10) goto LAB_0031e12c;
    }
    do {
      puVar8 = puVar7 + 1;
      *puVar7 = *puVar9;
      puVar7 = puVar8;
      puVar9 = puVar9 + 1;
    } while (puVar8 != puVar6);
  }
LAB_0031e12c:
  *param_1 = lVar4;
  param_1[1] = (long)__dest;
  param_1[2] = (long)puVar6;
  param_1[3] = lVar4 + uVar5 * 8;
  if (__ptr != (undefined8 *)0x0) {
    free(__ptr);
    __dest = (undefined8 *)param_1[1];
  }
LAB_0031e144:
  __dest[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}


// ===== 0031e170  FUN_0031e170 =====

undefined8 *
FUN_0031e170(undefined8 *param_1,void *param_2,long *param_3,undefined8 *param_4,undefined8 param_5,
            undefined8 *param_6,long param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  size_t sVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  void *pvVar17;
  void *__src;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  
  uVar8 = param_1[2];
  puVar18 = (undefined8 *)*param_1;
  if (param_4 <= (undefined8 *)((long)(uVar8 - (long)puVar18) >> 2)) {
    sVar6 = (long)param_1[1] - (long)puVar18;
    puVar2 = param_1;
    if ((undefined8 *)((long)sVar6 >> 2) < param_4) {
      pvVar17 = (void *)((long)param_2 + sVar6);
      if ((undefined8 *)param_1[1] != puVar18) {
        puVar2 = (undefined8 *)memmove(puVar18,param_2,sVar6);
        puVar18 = (undefined8 *)param_1[1];
      }
      lVar19 = -(long)pvVar17;
    }
    else {
      lVar19 = -(long)param_2;
      pvVar17 = param_2;
    }
    sVar6 = (long)param_3 + lVar19;
    if (sVar6 != 0) {
      puVar2 = (undefined8 *)memmove(puVar18,pvVar17,sVar6);
    }
LAB_0031e27c:
    param_1[1] = (long)puVar18 + sVar6;
    return puVar2;
  }
  plVar5 = param_3;
  if (puVar18 != (undefined8 *)0x0) {
    param_1[1] = puVar18;
    free(puVar18);
    uVar8 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if ((ulong)param_4 >> 0x3e == 0) {
    puVar2 = (undefined8 *)((long)uVar8 >> 1);
    if ((undefined8 *)((long)uVar8 >> 1) <= param_4) {
      puVar2 = param_4;
    }
    if (0x7ffffffffffffffb < uVar8) {
      puVar2 = (undefined8 *)0x3fffffffffffffff;
    }
    if ((ulong)puVar2 >> 0x3e == 0) {
      puVar18 = (undefined8 *)FUN_00759c3c((long)puVar2 * 4);
      sVar6 = (long)param_3 - (long)param_2;
      *param_1 = puVar18;
      param_1[1] = puVar18;
      param_1[2] = (long)puVar18 + (long)puVar2 * 4;
      puVar2 = puVar18;
      if (sVar6 != 0) {
        puVar2 = (undefined8 *)memcpy(puVar18,param_2,sVar6);
      }
      goto LAB_0031e27c;
    }
  }
  auVar24 = FUN_002febf0(param_1);
  puVar18 = auVar24._8_8_;
  plVar3 = auVar24._0_8_;
  if (param_7 < 1) {
    return puVar18;
  }
  puVar2 = (undefined8 *)plVar3[1];
  if (plVar3[2] - (long)puVar2 >> 3 < param_7) {
    lVar19 = *plVar3;
    uVar8 = param_7 + ((long)puVar2 - lVar19 >> 3);
    if (uVar8 >> 0x3d == 0) {
      uVar9 = plVar3[2] - lVar19;
      uVar11 = (long)uVar9 >> 2;
      if (uVar11 <= uVar8) {
        uVar11 = uVar8;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar11 = 0x1fffffffffffffff;
      }
      if (uVar11 == 0) {
        lVar4 = 0;
      }
      else {
        if (uVar11 >> 0x3d != 0) goto LAB_0031e688;
        lVar4 = FUN_00759c3c(uVar11 << 3);
      }
      puVar20 = (undefined8 *)(lVar4 + ((long)puVar18 - lVar19 >> 3) * 8);
      lVar19 = param_7 * 8;
      puVar10 = puVar20;
      do {
        puVar7 = param_4 + 1;
        *puVar10 = *param_4;
        if ((long)puVar7 - *plVar5 == 0x1000) {
          plVar5 = plVar5 + 1;
          puVar7 = (undefined8 *)*plVar5;
        }
        lVar19 = lVar19 + -8;
        param_4 = puVar7;
        puVar10 = puVar10 + 1;
      } while (lVar19 != 0);
      memcpy(puVar20 + param_7,puVar18,(long)puVar2 - (long)puVar18);
      __src = (void *)*plVar3;
      plVar3[1] = (long)puVar18;
      pvVar17 = (void *)((long)puVar20 - ((long)puVar18 - (long)__src));
      memcpy(pvVar17,__src,(long)puVar18 - (long)__src);
      *plVar3 = (long)pvVar17;
      plVar3[1] = (long)(puVar20 + param_7) + ((long)puVar2 - (long)puVar18);
      plVar3[2] = lVar4 + uVar11 * 8;
      if (__src == (void *)0x0) {
        return puVar20;
      }
      free(__src);
      return puVar20;
    }
    FUN_0031921c();
LAB_0031e688:
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  lVar19 = (long)param_4 - *plVar5 >> 3;
  uVar8 = lVar19 + param_7;
  if ((long)uVar8 < 1) {
    uVar9 = 0x1ff - uVar8 >> 6 & 0x3fffffffffffff8;
    uVar11 = -uVar9;
    puVar20 = (undefined8 *)
              (*(long *)((long)plVar5 - uVar9) + ((ulong)~(uint)(0x1ff - uVar8) & 0x1ff) * 8);
  }
  else {
    uVar11 = uVar8 >> 6 & 0x1fffffffffffff8;
    puVar20 = (undefined8 *)(*(long *)((long)plVar5 + uVar11) + (uVar8 & 0x1ff) * 8);
  }
  lVar4 = (long)puVar2 - (long)puVar18 >> 3;
  puVar10 = puVar2;
  if (lVar4 < param_7) {
    if (puVar2 == puVar18) {
      uVar11 = 0;
      puVar20 = param_4;
    }
    else {
      uVar8 = lVar19 + lVar4;
      if ((long)uVar8 < 1) {
        uVar9 = 0x1ff - uVar8 >> 6 & 0x3fffffffffffff8;
        uVar11 = -uVar9;
        puVar20 = (undefined8 *)
                  (*(long *)((long)plVar5 - uVar9) + ((ulong)~(uint)(0x1ff - uVar8) & 0x1ff) * 8);
      }
      else {
        uVar11 = uVar8 >> 6 & 0x1fffffffffffff8;
        puVar20 = (undefined8 *)(*(long *)((long)plVar5 + uVar11) + (uVar8 & 0x1ff) * 8);
      }
    }
    if (puVar20 != param_6) {
      plVar12 = (long *)((long)plVar5 + uVar11);
      puVar7 = puVar2;
      puVar14 = puVar20;
      do {
        puVar15 = puVar14 + 1;
        *puVar7 = *puVar14;
        if ((long)puVar15 - *plVar12 == 0x1000) {
          plVar12 = plVar12 + 1;
          puVar15 = (undefined8 *)*plVar12;
        }
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
        puVar14 = puVar15;
      } while (puVar15 != param_6);
    }
    plVar3[1] = (long)puVar10;
    if (lVar4 < 1) {
      return puVar18;
    }
  }
  puVar14 = puVar10 + -param_7;
  puVar7 = puVar10;
  if (puVar14 < puVar2) {
    puVar7 = puVar2;
    if (puVar2 <= puVar14 + 1) {
      puVar7 = puVar14 + 1;
    }
    uVar8 = (long)puVar7 + param_7 * 8 + ~(ulong)puVar10;
    puVar15 = puVar10;
    if ((0x37 < uVar8) && (0x1f < (ulong)(param_7 * 8))) {
      puVar15 = puVar10 + 2;
      uVar8 = (uVar8 >> 3) + 1;
      uVar16 = uVar8 & 0x3ffffffffffffffc;
      puVar7 = puVar10 + uVar16;
      puVar13 = puVar14 + 2;
      uVar9 = uVar16;
      do {
        puVar1 = puVar13 + -1;
        uVar21 = puVar13[-2];
        uVar23 = puVar13[1];
        uVar22 = *puVar13;
        uVar9 = uVar9 - 4;
        puVar13 = puVar13 + 4;
        puVar15[-1] = *puVar1;
        puVar15[-2] = uVar21;
        puVar15[1] = uVar23;
        *puVar15 = uVar22;
        puVar15 = puVar15 + 4;
      } while (uVar9 != 0);
      puVar15 = puVar7;
      puVar14 = puVar14 + uVar16;
      if (uVar8 == uVar16) goto LAB_0031e594;
    }
    do {
      puVar13 = puVar14 + 1;
      puVar7 = puVar15 + 1;
      *puVar15 = *puVar14;
      puVar15 = puVar7;
      puVar14 = puVar13;
    } while (puVar13 < puVar2);
  }
LAB_0031e594:
  plVar3[1] = (long)puVar7;
  if (puVar10 != puVar18 + param_7) {
    sVar6 = (long)puVar10 - (long)(puVar18 + param_7);
    memmove((void *)((long)puVar10 - sVar6),puVar18,sVar6);
  }
  if (uVar11 == 0) {
    sVar6 = (long)puVar20 - (long)param_4;
    puVar2 = puVar18;
    if (sVar6 == 0) {
      return puVar18;
    }
  }
  else {
    sVar6 = (*plVar5 + 0x1000) - (long)param_4;
    if (sVar6 != 0) {
      memmove(puVar18,param_4,sVar6);
    }
    puVar2 = (undefined8 *)((long)puVar18 + sVar6);
    plVar3 = plVar5;
    uVar8 = uVar11;
    while (uVar8 = uVar8 - 8, uVar8 != 0) {
      plVar3 = plVar3 + 1;
      memmove(puVar2,(void *)*plVar3,0x1000);
      puVar2 = puVar2 + 0x200;
    }
    param_4 = *(undefined8 **)((long)plVar5 + uVar11);
    if (param_4 == puVar20) {
      return puVar18;
    }
    sVar6 = (long)puVar20 - (long)param_4;
  }
  memmove(puVar2,param_4,sVar6);
  return puVar18;
}


// ===== 0031e2a0  FUN_0031e2a0 =====

undefined8 *
FUN_0031e2a0(long *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4,undefined8 param_5,
            undefined8 *param_6,long param_7)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  size_t sVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  void *__dest;
  void *__src;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  if (param_7 < 1) {
    return param_2;
  }
  puVar4 = (undefined8 *)param_1[1];
  if (param_1[2] - (long)puVar4 >> 3 < param_7) {
    lVar15 = *param_1;
    uVar1 = param_7 + ((long)puVar4 - lVar15 >> 3);
    if (uVar1 >> 0x3d == 0) {
      uVar7 = param_1[2] - lVar15;
      uVar9 = (long)uVar7 >> 2;
      if (uVar9 <= uVar1) {
        uVar9 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar7) {
        uVar9 = 0x1fffffffffffffff;
      }
      if (uVar9 == 0) {
        lVar3 = 0;
      }
      else {
        if (uVar9 >> 0x3d != 0) goto LAB_0031e688;
        lVar3 = FUN_00759c3c(uVar9 << 3);
      }
      puVar16 = (undefined8 *)(lVar3 + ((long)param_2 - lVar15 >> 3) * 8);
      lVar15 = param_7 * 8;
      puVar8 = puVar16;
      do {
        puVar6 = param_4 + 1;
        *puVar8 = *param_4;
        if ((long)puVar6 - *param_3 == 0x1000) {
          param_3 = param_3 + 1;
          puVar6 = (undefined8 *)*param_3;
        }
        lVar15 = lVar15 + -8;
        param_4 = puVar6;
        puVar8 = puVar8 + 1;
      } while (lVar15 != 0);
      memcpy(puVar16 + param_7,param_2,(long)puVar4 - (long)param_2);
      __src = (void *)*param_1;
      param_1[1] = (long)param_2;
      __dest = (void *)((long)puVar16 - ((long)param_2 - (long)__src));
      memcpy(__dest,__src,(long)param_2 - (long)__src);
      *param_1 = (long)__dest;
      param_1[1] = (long)(puVar16 + param_7) + ((long)puVar4 - (long)param_2);
      param_1[2] = lVar3 + uVar9 * 8;
      if (__src == (void *)0x0) {
        return puVar16;
      }
      free(__src);
      return puVar16;
    }
    FUN_0031921c();
LAB_0031e688:
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  lVar15 = (long)param_4 - *param_3 >> 3;
  uVar1 = lVar15 + param_7;
  if ((long)uVar1 < 1) {
    uVar7 = 0x1ff - uVar1 >> 6 & 0x3fffffffffffff8;
    uVar9 = -uVar7;
    puVar16 = (undefined8 *)
              (*(long *)((long)param_3 - uVar7) + ((ulong)~(uint)(0x1ff - uVar1) & 0x1ff) * 8);
  }
  else {
    uVar9 = uVar1 >> 6 & 0x1fffffffffffff8;
    puVar16 = (undefined8 *)(*(long *)((long)param_3 + uVar9) + (uVar1 & 0x1ff) * 8);
  }
  lVar3 = (long)puVar4 - (long)param_2 >> 3;
  puVar8 = puVar4;
  if (lVar3 < param_7) {
    if (puVar4 == param_2) {
      uVar9 = 0;
      puVar16 = param_4;
      if (param_4 != param_6) goto LAB_0031e3a4;
    }
    else {
      uVar1 = lVar15 + lVar3;
      if ((long)uVar1 < 1) {
        uVar7 = 0x1ff - uVar1 >> 6 & 0x3fffffffffffff8;
        uVar9 = -uVar7;
        puVar16 = (undefined8 *)
                  (*(long *)((long)param_3 - uVar7) + ((ulong)~(uint)(0x1ff - uVar1) & 0x1ff) * 8);
      }
      else {
        uVar9 = uVar1 >> 6 & 0x1fffffffffffff8;
        puVar16 = (undefined8 *)(*(long *)((long)param_3 + uVar9) + (uVar1 & 0x1ff) * 8);
      }
      if (puVar16 != param_6) {
LAB_0031e3a4:
        plVar10 = (long *)((long)param_3 + uVar9);
        puVar6 = puVar4;
        puVar12 = puVar16;
        do {
          puVar13 = puVar12 + 1;
          *puVar6 = *puVar12;
          if ((long)puVar13 - *plVar10 == 0x1000) {
            plVar10 = plVar10 + 1;
            puVar13 = (undefined8 *)*plVar10;
          }
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
          puVar12 = puVar13;
        } while (puVar13 != param_6);
      }
    }
    param_1[1] = (long)puVar8;
    if (lVar3 < 1) {
      return param_2;
    }
  }
  puVar12 = puVar8 + -param_7;
  puVar6 = puVar8;
  if (puVar12 < puVar4) {
    puVar6 = puVar4;
    if (puVar4 <= puVar12 + 1) {
      puVar6 = puVar12 + 1;
    }
    uVar1 = (long)puVar6 + param_7 * 8 + ~(ulong)puVar8;
    puVar13 = puVar8;
    if ((0x37 < uVar1) && (0x1f < (ulong)(param_7 * 8))) {
      puVar13 = puVar8 + 2;
      uVar1 = (uVar1 >> 3) + 1;
      uVar14 = uVar1 & 0x3ffffffffffffffc;
      puVar6 = puVar8 + uVar14;
      puVar11 = puVar12 + 2;
      uVar7 = uVar14;
      do {
        puVar2 = puVar11 + -1;
        uVar17 = puVar11[-2];
        uVar19 = puVar11[1];
        uVar18 = *puVar11;
        uVar7 = uVar7 - 4;
        puVar11 = puVar11 + 4;
        puVar13[-1] = *puVar2;
        puVar13[-2] = uVar17;
        puVar13[1] = uVar19;
        *puVar13 = uVar18;
        puVar13 = puVar13 + 4;
      } while (uVar7 != 0);
      puVar13 = puVar6;
      puVar12 = puVar12 + uVar14;
      if (uVar1 == uVar14) goto LAB_0031e594;
    }
    do {
      puVar11 = puVar12 + 1;
      puVar6 = puVar13 + 1;
      *puVar13 = *puVar12;
      puVar13 = puVar6;
      puVar12 = puVar11;
    } while (puVar11 < puVar4);
  }
LAB_0031e594:
  param_1[1] = (long)puVar6;
  if (puVar8 != param_2 + param_7) {
    sVar5 = (long)puVar8 - (long)(param_2 + param_7);
    memmove((void *)((long)puVar8 - sVar5),param_2,sVar5);
  }
  if (uVar9 == 0) {
    sVar5 = (long)puVar16 - (long)param_4;
    puVar4 = param_2;
    if (sVar5 == 0) {
      return param_2;
    }
  }
  else {
    sVar5 = (*param_3 + 0x1000) - (long)param_4;
    if (sVar5 != 0) {
      memmove(param_2,param_4,sVar5);
    }
    lVar15 = uVar9 - 8;
    puVar4 = (undefined8 *)((long)param_2 + sVar5);
    if (lVar15 != 0) {
      plVar10 = param_3 + 1;
      do {
        memmove(puVar4,(void *)*plVar10,0x1000);
        lVar15 = lVar15 + -8;
        puVar4 = puVar4 + 0x200;
        plVar10 = plVar10 + 1;
      } while (lVar15 != 0);
    }
    param_4 = *(undefined8 **)((long)param_3 + uVar9);
    if (param_4 == puVar16) {
      return param_2;
    }
    sVar5 = (long)puVar16 - (long)param_4;
  }
  memmove(puVar4,param_4,sVar5);
  return param_2;
}


// ===== 0031e68c  FUN_0031e68c =====

void FUN_0031e68c(long *param_1,undefined8 param_2,long *param_3,void *param_4,long *param_5,
                 void *param_6,long *param_7,void *param_8)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  long *plVar5;
  void *pvVar6;
  
  if (param_3 == param_5) {
    if (param_4 == param_6) goto LAB_0031e898;
    lVar1 = *param_7;
    pvVar4 = param_6;
    while( true ) {
      lVar2 = (long)param_8 - lVar1 >> 3;
      lVar1 = (long)pvVar4 - (long)param_4 >> 3;
      if (lVar2 <= lVar1) {
        lVar1 = lVar2;
      }
      pvVar4 = (void *)((long)pvVar4 + lVar1 * -8);
      param_8 = (void *)((long)param_8 + lVar1 * -8);
      if (lVar1 != 0) {
        memmove(param_8,pvVar4,lVar1 * 8);
      }
      if (pvVar4 == param_4) break;
      param_7 = param_7 + -1;
      lVar1 = *param_7;
      param_8 = (void *)(lVar1 + 0x1000);
    }
  }
  else {
    pvVar4 = (void *)*param_5;
    if (pvVar4 != param_6) {
      lVar1 = *param_7;
      pvVar3 = param_6;
      while( true ) {
        lVar2 = (long)param_8 - lVar1 >> 3;
        lVar1 = (long)pvVar3 - (long)pvVar4 >> 3;
        if (lVar2 <= lVar1) {
          lVar1 = lVar2;
        }
        pvVar3 = (void *)((long)pvVar3 + lVar1 * -8);
        param_8 = (void *)((long)param_8 + lVar1 * -8);
        if (lVar1 != 0) {
          memmove(param_8,pvVar3,lVar1 * 8);
        }
        if (pvVar3 == pvVar4) break;
        param_7 = param_7 + -1;
        lVar1 = *param_7;
        param_8 = (void *)(lVar1 + 0x1000);
      }
      if ((void *)(*param_7 + 0x1000) == param_8) {
        param_7 = param_7 + 1;
        param_8 = (void *)*param_7;
      }
    }
    plVar5 = param_5 + -1;
    if (plVar5 != param_3) {
      pvVar4 = (void *)*param_7;
      do {
        while( true ) {
          pvVar6 = (void *)*plVar5;
          pvVar3 = (void *)((long)pvVar6 + 0x1000);
          while( true ) {
            lVar2 = (long)param_8 - (long)pvVar4 >> 3;
            lVar1 = (long)pvVar3 - (long)pvVar6 >> 3;
            if (lVar2 <= lVar1) {
              lVar1 = lVar2;
            }
            pvVar3 = (void *)((long)pvVar3 + lVar1 * -8);
            param_8 = (void *)((long)param_8 + lVar1 * -8);
            if (lVar1 != 0) {
              memmove(param_8,pvVar3,lVar1 * 8);
            }
            if (pvVar3 == pvVar6) break;
            param_7 = param_7 + -1;
            pvVar4 = (void *)*param_7;
            param_8 = (void *)((long)pvVar4 + 0x1000);
          }
          pvVar4 = (void *)*param_7;
          if ((void *)((long)pvVar4 + 0x1000) == param_8) break;
          plVar5 = plVar5 + -1;
          if (plVar5 == param_3) goto LAB_0031e7d0;
        }
        param_7 = param_7 + 1;
        pvVar4 = (void *)*param_7;
        plVar5 = plVar5 + -1;
        param_8 = pvVar4;
      } while (plVar5 != param_3);
    }
LAB_0031e7d0:
    pvVar4 = (void *)(*param_3 + 0x1000);
    if (pvVar4 == param_4) goto LAB_0031e898;
    lVar1 = *param_7;
    while( true ) {
      lVar2 = (long)param_8 - lVar1 >> 3;
      lVar1 = (long)pvVar4 - (long)param_4 >> 3;
      if (lVar2 <= lVar1) {
        lVar1 = lVar2;
      }
      pvVar4 = (void *)((long)pvVar4 + lVar1 * -8);
      param_8 = (void *)((long)param_8 + lVar1 * -8);
      if (lVar1 != 0) {
        memmove(param_8,pvVar4,lVar1 * 8);
      }
      if (pvVar4 == param_4) break;
      param_7 = param_7 + -1;
      lVar1 = *param_7;
      param_8 = (void *)(lVar1 + 0x1000);
    }
  }
  if ((void *)(*param_7 + 0x1000) == param_8) {
    param_7 = param_7 + 1;
    param_8 = (void *)*param_7;
  }
LAB_0031e898:
  *param_1 = (long)param_5;
  param_1[1] = (long)param_6;
  param_1[2] = (long)param_7;
  param_1[3] = (long)param_8;
  return;
}


// ===== 0031e8bc  FUN_0031e8bc =====

void FUN_0031e8bc(long *param_1,void *param_2,long *param_3,void *param_4,undefined8 *param_5)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  void *__dest;
  size_t sVar7;
  long *plVar8;
  long *plVar9;
  
  plVar8 = (long *)*param_5;
  __dest = (void *)param_5[1];
  if (param_1 == param_3) {
    if (param_2 == param_4) goto LAB_0031eb14;
    pvVar3 = (void *)*plVar8;
    while( true ) {
      plVar9 = plVar8 + 1;
      lVar5 = (long)param_4 - (long)param_2 >> 3;
      lVar2 = (long)pvVar3 + (0x1000 - (long)__dest) >> 3;
      if (lVar2 <= lVar5) {
        lVar5 = lVar2;
      }
      sVar7 = lVar5 * 8;
      if (lVar5 != 0) {
        memmove(__dest,param_2,sVar7);
      }
      param_2 = (void *)((long)param_2 + sVar7);
      if (param_2 == param_4) break;
      pvVar3 = (void *)*plVar9;
      __dest = pvVar3;
      plVar8 = plVar9;
    }
    __dest = (void *)((long)__dest + sVar7);
    if ((void *)(*plVar8 + 0x1000) != __dest) goto LAB_0031eb14;
  }
  else {
    pvVar3 = (void *)(*param_1 + 0x1000);
    if (pvVar3 == param_2) {
LAB_0031e974:
      *param_5 = plVar8;
      param_5[1] = __dest;
      plVar9 = plVar8;
    }
    else {
      pvVar1 = (void *)*plVar8;
      while( true ) {
        plVar9 = plVar8 + 1;
        lVar5 = (long)pvVar3 - (long)param_2 >> 3;
        lVar2 = (long)pvVar1 + (0x1000 - (long)__dest) >> 3;
        if (lVar2 <= lVar5) {
          lVar5 = lVar2;
        }
        sVar7 = lVar5 * 8;
        if (lVar5 != 0) {
          memmove(__dest,param_2,sVar7);
        }
        param_2 = (void *)((long)param_2 + sVar7);
        if (param_2 == pvVar3) break;
        pvVar1 = (void *)*plVar9;
        __dest = pvVar1;
        plVar8 = plVar9;
      }
      __dest = (void *)((long)__dest + sVar7);
      if ((void *)(*plVar8 + 0x1000) != __dest) goto LAB_0031e974;
      __dest = (void *)*plVar9;
      *param_5 = plVar9;
      param_5[1] = __dest;
    }
    if (param_1 + 1 != param_3) {
      param_1 = param_1 + 1;
      do {
        while( true ) {
          lVar2 = *param_1;
          pvVar3 = (void *)*plVar9;
          lVar5 = 0;
          plVar8 = plVar9;
          while( true ) {
            plVar9 = plVar8 + 1;
            lVar6 = 0x1000 - lVar5 >> 3;
            lVar4 = (long)pvVar3 + (0x1000 - (long)__dest) >> 3;
            if (lVar4 <= lVar6) {
              lVar6 = lVar4;
            }
            sVar7 = lVar6 * 8;
            if (lVar6 != 0) {
              memmove(__dest,(void *)(lVar2 + lVar5),sVar7);
            }
            lVar5 = sVar7 + lVar5;
            if (lVar5 == 0x1000) break;
            pvVar3 = (void *)*plVar9;
            __dest = pvVar3;
            plVar8 = plVar9;
          }
          __dest = (void *)((long)__dest + sVar7);
          if ((void *)(*plVar8 + 0x1000) == __dest) break;
          param_1 = param_1 + 1;
          *param_5 = plVar8;
          param_5[1] = __dest;
          plVar9 = plVar8;
          if (param_1 == param_3) goto LAB_0031ea24;
        }
        __dest = (void *)*plVar9;
        param_1 = param_1 + 1;
        *param_5 = plVar9;
        param_5[1] = __dest;
      } while (param_1 != param_3);
    }
LAB_0031ea24:
    pvVar3 = (void *)*param_3;
    plVar8 = plVar9;
    if (pvVar3 == param_4) goto LAB_0031eb14;
    pvVar1 = (void *)*plVar9;
    while( true ) {
      plVar9 = plVar8 + 1;
      lVar5 = (long)param_4 - (long)pvVar3 >> 3;
      lVar2 = (long)pvVar1 + (0x1000 - (long)__dest) >> 3;
      if (lVar2 <= lVar5) {
        lVar5 = lVar2;
      }
      sVar7 = lVar5 * 8;
      if (lVar5 != 0) {
        memmove(__dest,pvVar3,sVar7);
      }
      pvVar3 = (void *)((long)pvVar3 + sVar7);
      if (pvVar3 == param_4) break;
      pvVar1 = (void *)*plVar9;
      __dest = pvVar1;
      plVar8 = plVar9;
    }
    __dest = (void *)((long)__dest + sVar7);
    if ((void *)(*plVar8 + 0x1000) != __dest) goto LAB_0031eb14;
  }
  __dest = (void *)*plVar9;
  plVar8 = plVar9;
LAB_0031eb14:
  *param_5 = plVar8;
  param_5[1] = __dest;
  return;
}


// ===== 0031eb4c  FUN_0031eb4c =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0031eb4c(long param_1,long *param_2,long param_3,undefined8 *param_4,undefined8 *param_5,
                 ulong param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined1 uStack_79;
  long *local_78;
  undefined8 *puStack_70;
  long *local_68;
  undefined8 *puStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar12 = *(ulong *)(param_1 + 0x20);
  lVar11 = *(long *)(param_1 + 8);
  lVar8 = *(long *)(param_1 + 0x10);
  uVar13 = uVar12 >> 9;
  plVar6 = (long *)(lVar11 + uVar13 * 8);
  if (lVar8 - lVar11 == 0) {
    lVar15 = 0;
    if (param_3 == 0) goto LAB_0031ec8c;
LAB_0031ebb0:
    uVar18 = ((param_3 - *param_2 >> 3) + ((long)param_2 - (long)plVar6) * 0x40) -
             (lVar15 - *plVar6 >> 3);
    lVar15 = *(long *)(param_1 + 0x28);
    if (lVar15 - uVar18 <= uVar18) {
LAB_0031eca0:
      uVar12 = uVar12 + lVar15;
      lVar1 = 0;
      if (lVar8 != lVar11) {
        lVar1 = (lVar8 - lVar11) * 0x40 + -1;
      }
      lVar2 = param_6 - (lVar1 - uVar12);
      if (lVar1 - uVar12 <= param_6 && lVar2 != 0) {
        FUN_0031d47c(param_1,lVar2);
        lVar15 = *(long *)(param_1 + 0x28);
        lVar11 = *(long *)(param_1 + 8);
        lVar8 = *(long *)(param_1 + 0x10);
        uVar12 = *(long *)(param_1 + 0x20) + lVar15;
      }
      plVar6 = (long *)(lVar11 + (uVar12 >> 9) * 8);
      plVar10 = plVar6;
      if (lVar8 == lVar11) {
        puVar9 = (undefined8 *)0x0;
        uVar12 = lVar15 - uVar18;
        lVar11 = uVar12 - param_6;
        if (param_6 <= uVar12) goto LAB_0031ed8c;
LAB_0031ecfc:
        puVar4 = param_4 + uVar12;
        puVar7 = puVar9;
        puVar17 = param_5;
        puVar16 = param_4 + uVar12;
        if (param_6 >> 1 <= uVar12) {
          puVar4 = param_5 + lVar11;
          puVar16 = param_5 + lVar11;
        }
        for (; puVar4 != param_5; puVar4 = puVar4 + 1) {
          puVar17 = puVar7 + 1;
          *puVar7 = *puVar4;
          if ((long)puVar17 - *plVar10 == 0x1000) {
            plVar10 = plVar10 + 1;
            puVar17 = (undefined8 *)*plVar10;
          }
          *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
          puVar7 = puVar17;
          puVar17 = puVar16;
        }
        param_6 = uVar12;
        param_5 = puVar17;
        if (uVar12 == 0) goto LAB_0031f0c0;
      }
      else {
        puVar9 = (undefined8 *)(*plVar6 + (uVar12 & 0x1ff) * 8);
        uVar12 = lVar15 - uVar18;
        lVar11 = uVar12 - param_6;
        if (uVar12 < param_6) goto LAB_0031ecfc;
LAB_0031ed8c:
        puVar7 = puVar9;
        if (param_6 == 0) goto LAB_0031f0c0;
      }
      uVar13 = ((long)puVar9 - *plVar6 >> 3) - param_6;
      if ((long)uVar13 < 1) {
        plVar14 = plVar6 + -(0x1ff - uVar13 >> 9);
        puVar16 = (undefined8 *)(*plVar14 + ((ulong)~(uint)(0x1ff - uVar13) & 0x1ff) * 8);
        plVar5 = plVar14;
        puVar4 = puVar16;
      }
      else {
        plVar14 = plVar6 + (uVar13 >> 9);
        puVar16 = (undefined8 *)(*plVar14 + (uVar13 & 0x1ff) * 8);
        plVar5 = plVar14;
        puVar4 = puVar16;
      }
      while (puVar16 != puVar9) {
        puVar17 = puVar7 + 1;
        *puVar7 = *puVar16;
        if ((long)puVar17 - *plVar10 == 0x1000) {
          plVar10 = plVar10 + 1;
          puVar17 = (undefined8 *)*plVar10;
          lVar11 = (long)(puVar16 + 1) - *plVar14;
        }
        else {
          lVar11 = (long)(puVar16 + 1) - *plVar14;
        }
        puVar16 = puVar16 + 1;
        if (lVar11 == 0x1000) {
          plVar14 = plVar14 + 1;
          puVar16 = (undefined8 *)*plVar14;
        }
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
        puVar7 = puVar17;
      }
      if (param_6 < uVar12) {
        uVar12 = ((long)puVar9 - *plVar6 >> 3) - uVar12;
        if ((long)uVar12 < 1) {
          uVar13 = 0x1ff - uVar12;
          uVar12 = (ulong)~(uint)uVar13;
          lVar11 = (uVar13 >> 9) * -8;
        }
        else {
          lVar11 = (uVar12 >> 9) << 3;
        }
        FUN_0031e68c(&local_78,&uStack_79,(long *)((long)plVar6 + lVar11),
                     *(long *)((long)plVar6 + lVar11) + (uVar12 & 0x1ff) * 8,plVar5,puVar4,plVar6);
        puVar9 = puStack_60;
        plVar6 = local_68;
      }
      if (param_5 != param_4) {
        lVar11 = *plVar6;
        while( true ) {
          plVar6 = plVar6 + -1;
          lVar8 = (long)puVar9 - lVar11 >> 3;
          lVar11 = (long)param_5 - (long)param_4 >> 3;
          if (lVar8 <= lVar11) {
            lVar11 = lVar8;
          }
          param_5 = param_5 + -lVar11;
          if (lVar11 != 0) {
            memmove(puVar9 + -lVar11,param_5,lVar11 << 3);
          }
          if (param_5 == param_4) break;
          lVar11 = *plVar6;
          puVar9 = (undefined8 *)(lVar11 + 0x1000);
        }
      }
      goto LAB_0031f0c0;
    }
  }
  else {
    lVar15 = *plVar6 + (uVar12 & 0x1ff) * 8;
    if (param_3 != lVar15) goto LAB_0031ebb0;
LAB_0031ec8c:
    uVar18 = 0;
    lVar15 = *(long *)(param_1 + 0x28);
    if (lVar15 == 0) goto LAB_0031eca0;
  }
  if (uVar12 <= param_6 && param_6 - uVar12 != 0) {
    FUN_0031f164(param_1,param_6 - uVar12);
    uVar12 = *(ulong *)(param_1 + 0x20);
    lVar11 = *(long *)(param_1 + 8);
    lVar8 = *(long *)(param_1 + 0x10);
    uVar13 = uVar12 >> 9;
  }
  lVar1 = _UNK_00200248;
  lVar15 = _DAT_00200240;
  plVar6 = (long *)(lVar11 + uVar13 * 8);
  plVar10 = plVar6;
  if (lVar8 == lVar11) {
    puVar9 = (undefined8 *)0x0;
    lVar11 = param_6 - uVar18;
    if (param_6 < uVar18 || lVar11 == 0) goto LAB_0031ed68;
LAB_0031ec1c:
    puVar4 = param_5 + -uVar18;
    puVar7 = puVar9;
    puVar17 = param_4;
    puVar16 = param_5 + -uVar18;
    if (param_6 >> 1 <= uVar18) {
      puVar4 = param_4 + lVar11;
      puVar16 = param_4 + lVar11;
    }
    while (puVar4 != param_4) {
      if (puVar7 == (undefined8 *)*plVar10) {
        plVar10 = plVar10 + -1;
        puVar7 = (undefined8 *)(*plVar10 + 0x1000);
      }
      puVar7[-1] = puVar4[-1];
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + lVar1;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + lVar15;
      puVar4 = puVar4 + -1;
      puVar7 = puVar7 + -1;
      puVar17 = puVar16;
    }
    param_6 = uVar18;
    param_4 = puVar17;
    if (uVar18 == 0) goto LAB_0031f0c0;
  }
  else {
    puVar9 = (undefined8 *)(*plVar6 + (uVar12 & 0x1ff) * 8);
    lVar11 = param_6 - uVar18;
    if (uVar18 <= param_6 && lVar11 != 0) goto LAB_0031ec1c;
LAB_0031ed68:
    puVar7 = puVar9;
    if (param_6 == 0) goto LAB_0031f0c0;
  }
  lVar8 = _UNK_00200248;
  lVar11 = _DAT_00200240;
  uVar12 = param_6 + ((long)puVar9 - *plVar6 >> 3);
  if ((long)uVar12 < 1) {
    plVar14 = plVar6 + -(0x1ff - uVar12 >> 9);
    puVar16 = (undefined8 *)(*plVar14 + ((ulong)~(uint)(0x1ff - uVar12) & 0x1ff) * 8);
    plVar5 = plVar14;
    puVar4 = puVar16;
  }
  else {
    plVar14 = plVar6 + (uVar12 >> 9);
    puVar16 = (undefined8 *)(*plVar14 + (uVar12 & 0x1ff) * 8);
    plVar5 = plVar14;
    puVar4 = puVar16;
  }
  while (puVar16 != puVar9) {
    if (puVar7 == (undefined8 *)*plVar10) {
      plVar10 = plVar10 + -1;
      puVar7 = (undefined8 *)(*plVar10 + 0x1000);
      puVar17 = (undefined8 *)*plVar14;
    }
    else {
      puVar17 = (undefined8 *)*plVar14;
    }
    if (puVar16 == puVar17) {
      plVar14 = plVar14 + -1;
      puVar16 = (undefined8 *)(*plVar14 + 0x1000);
    }
    puVar16 = puVar16 + -1;
    puVar7 = puVar7 + -1;
    *puVar7 = *puVar16;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + lVar8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + lVar11;
  }
  if (param_6 < uVar18) {
    uVar12 = uVar18 + ((long)puVar9 - *plVar6 >> 3);
    if ((long)uVar12 < 1) {
      uVar13 = 0x1ff - uVar12;
      uVar12 = (ulong)~(uint)uVar13;
      lVar11 = (uVar13 >> 9) * -8;
    }
    else {
      lVar11 = (uVar12 >> 9) << 3;
    }
    local_78 = plVar6;
    puStack_70 = puVar9;
    FUN_0031e8bc(plVar5,puVar4,(long *)((long)plVar6 + lVar11),
                 *(long *)((long)plVar6 + lVar11) + (uVar12 & 0x1ff) * 8,&local_78);
    puVar9 = puStack_70;
    plVar6 = local_78;
  }
  if (param_4 != param_5) {
    puVar7 = (undefined8 *)*plVar6;
    while( true ) {
      plVar6 = plVar6 + 1;
      lVar11 = (long)param_5 - (long)param_4 >> 3;
      lVar8 = (long)puVar7 + (0x1000 - (long)puVar9) >> 3;
      if (lVar8 <= lVar11) {
        lVar11 = lVar8;
      }
      if (lVar11 != 0) {
        memmove(puVar9,param_4,lVar11 << 3);
      }
      param_4 = param_4 + lVar11;
      if (param_4 == param_5) break;
      puVar9 = (undefined8 *)*plVar6;
      puVar7 = puVar9;
    }
  }
LAB_0031f0c0:
  plVar6 = (long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) >> 9) * 8);
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    lVar11 = 0;
  }
  else {
    lVar11 = *plVar6 + (*(ulong *)(param_1 + 0x20) & 0x1ff) * 8;
  }
  if (uVar18 != 0) {
    uVar18 = uVar18 + (lVar11 - *plVar6 >> 3);
    if ((long)uVar18 < 1) {
      uVar12 = 0x1ff - uVar18;
      uVar18 = (ulong)~(uint)uVar12;
      lVar11 = (uVar12 >> 9) * -8;
    }
    else {
      lVar11 = (uVar18 >> 9) << 3;
    }
    plVar6 = (long *)((long)plVar6 + lVar11);
    lVar11 = *plVar6 + (uVar18 & 0x1ff) * 8;
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar6,lVar11);
}


// ===== 0031f164  FUN_0031f164 =====

void FUN_0031f164(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  void *__ptr;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  lVar2 = param_1[1];
  lVar4 = param_1[2];
  lVar3 = param_1[4];
  lVar12 = lVar4 - lVar2;
  if (lVar12 == 0) {
    param_2 = param_2 + 1;
  }
  lVar1 = 0;
  if (lVar12 != 0) {
    lVar1 = (lVar4 - lVar2) * 0x40 + -1;
  }
  uVar23 = param_2 >> 9;
  uVar24 = lVar1 - (param_1[5] + lVar3);
  uVar18 = uVar24 >> 9;
  if ((param_2 & 0x1ff) != 0) {
    uVar23 = uVar23 + 1;
  }
  uVar22 = uVar23;
  if (uVar18 <= uVar23) {
    uVar22 = uVar18;
  }
  if (uVar18 < uVar23) {
    uVar18 = uVar23 - uVar22;
    if ((ulong)((param_1[3] - *param_1 >> 3) - (lVar12 >> 3)) < uVar18) {
      uVar15 = param_1[3] - *param_1 >> 2;
      uVar17 = uVar18 + (lVar12 >> 3);
      if (uVar15 <= uVar17) {
        uVar15 = uVar17;
      }
      if (uVar15 == 0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        if (uVar15 >> 0x3d != 0) {
          if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_002f9ee0();
          }
          goto LAB_0031f8dc;
        }
        puVar8 = (undefined8 *)FUN_00759c3c(uVar15 << 3);
      }
      puVar14 = puVar8 + uVar15;
      puVar25 = puVar8;
      puVar13 = puVar8;
      do {
                    /* try { // try from 0031f30c to 0031f313 has its CatchHandler @ 0031f874 */
        uVar9 = FUN_00759c3c(0x1000);
        puVar10 = puVar8;
        puVar11 = puVar25;
        if (puVar13 == puVar14) {
          if (puVar25 < puVar8 || (long)puVar25 - (long)puVar8 == 0) {
            uVar17 = (long)puVar14 - (long)puVar8 >> 2;
            if ((long)puVar14 - (long)puVar8 == 0) {
              uVar17 = 1;
            }
            if (uVar17 >> 0x3d != 0) {
              if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0031f808 to 0031f80b has its CatchHandler @ 0031f864 */
                FUN_002f9ee0();
              }
              goto LAB_0031f8dc;
            }
                    /* try { // try from 0031f380 to 0031f387 has its CatchHandler @ 0031f874 */
            puVar10 = (undefined8 *)FUN_00759c3c(uVar17 << 3);
            uVar15 = uVar17 >> 2;
            lVar3 = (long)puVar14 - (long)puVar25;
            puVar11 = puVar10 + uVar15;
            puVar13 = puVar11;
            if (lVar3 != 0) {
              puVar13 = (undefined8 *)((long)puVar11 + lVar3);
              puVar14 = puVar11;
              if ((0x17 < lVar3 - 8U) && (0x1f < (long)puVar10 + (uVar15 * 8 - (long)puVar25))) {
                puVar14 = puVar25 + 2;
                puVar19 = puVar10 + uVar15 + 2;
                uVar15 = (lVar3 - 8U >> 3) + 1;
                uVar16 = uVar15 & 0x3ffffffffffffffc;
                puVar25 = puVar25 + uVar16;
                uVar21 = uVar16;
                do {
                  puVar20 = puVar14 + -1;
                  uVar26 = puVar14[-2];
                  uVar28 = puVar14[1];
                  uVar27 = *puVar14;
                  uVar21 = uVar21 - 4;
                  puVar14 = puVar14 + 4;
                  puVar19[-1] = *puVar20;
                  puVar19[-2] = uVar26;
                  puVar19[1] = uVar28;
                  *puVar19 = uVar27;
                  puVar19 = puVar19 + 4;
                } while (uVar21 != 0);
                puVar14 = puVar11 + uVar16;
                if (uVar15 == uVar16) goto LAB_0031f3e0;
              }
              do {
                puVar19 = puVar14 + 1;
                *puVar14 = *puVar25;
                puVar14 = puVar19;
                puVar25 = puVar25 + 1;
              } while (puVar19 != puVar13);
            }
LAB_0031f3e0:
            puVar14 = puVar10 + uVar17;
            if (puVar8 != (undefined8 *)0x0) {
              free(puVar8);
            }
          }
          else {
            lVar12 = (long)puVar25 - (long)puVar8 >> 3;
            lVar3 = lVar12 + 2;
            if (lVar12 + 1 < 0 == SCARRY8(lVar12,1)) {
              lVar3 = lVar12 + 1;
            }
            sVar5 = (long)puVar14 - (long)puVar25;
            puVar11 = puVar14;
            if (sVar5 != 0) {
              memmove(puVar25 + -(lVar3 >> 1),puVar25,sVar5);
              puVar11 = puVar25;
            }
            puVar13 = (undefined8 *)((long)(puVar25 + -(lVar3 >> 1)) + sVar5);
            puVar11 = puVar11 + -(lVar3 >> 1);
          }
        }
        uVar18 = uVar18 - 1;
        puVar19 = puVar13 + 1;
        *puVar13 = uVar9;
        puVar8 = puVar10;
        puVar25 = puVar11;
        puVar13 = puVar19;
      } while (uVar18 != 0);
      puVar25 = (undefined8 *)param_1[2];
      puVar13 = puVar10;
      puVar8 = puVar19;
      if (0x1ff < uVar24) {
        do {
          puVar10 = puVar13;
          if (puVar8 == puVar14) {
            if (puVar11 < puVar13 || (long)puVar11 - (long)puVar13 == 0) {
              uVar18 = (long)puVar14 - (long)puVar13 >> 2;
              if ((long)puVar14 - (long)puVar13 == 0) {
                uVar18 = 1;
              }
              if (uVar18 >> 0x3d != 0) {
                if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0031f838 to 0031f83b has its CatchHandler @ 0031f850 */
                  FUN_002f9ee0();
                }
                goto LAB_0031f8dc;
              }
                    /* try { // try from 0031f6a8 to 0031f6ab has its CatchHandler @ 0031f854 */
              puVar10 = (undefined8 *)FUN_00759c3c(uVar18 << 3);
              uVar24 = uVar18 >> 2;
              lVar3 = (long)puVar14 - (long)puVar11;
              puVar19 = puVar10 + uVar24;
              puVar8 = puVar19;
              if (lVar3 != 0) {
                puVar8 = (undefined8 *)((long)puVar19 + lVar3);
                puVar14 = puVar19;
                if ((0x17 < lVar3 - 8U) && (0x1f < (long)puVar10 + (uVar24 * 8 - (long)puVar11))) {
                  puVar14 = puVar11 + 2;
                  puVar20 = puVar10 + uVar24 + 2;
                  uVar24 = (lVar3 - 8U >> 3) + 1;
                  uVar15 = uVar24 & 0x3ffffffffffffffc;
                  puVar11 = puVar11 + uVar15;
                  uVar17 = uVar15;
                  do {
                    puVar7 = puVar14 + -1;
                    uVar9 = puVar14[-2];
                    uVar27 = puVar14[1];
                    uVar26 = *puVar14;
                    uVar17 = uVar17 - 4;
                    puVar14 = puVar14 + 4;
                    puVar20[-1] = *puVar7;
                    puVar20[-2] = uVar9;
                    puVar20[1] = uVar27;
                    *puVar20 = uVar26;
                    puVar20 = puVar20 + 4;
                  } while (uVar17 != 0);
                  puVar14 = puVar19 + uVar15;
                  if (uVar24 == uVar15) goto LAB_0031f700;
                }
                do {
                  puVar20 = puVar14 + 1;
                  *puVar14 = *puVar11;
                  puVar14 = puVar20;
                  puVar11 = puVar11 + 1;
                } while (puVar20 != puVar8);
              }
LAB_0031f700:
              puVar14 = puVar10 + uVar18;
              puVar11 = puVar19;
              if (puVar13 != (undefined8 *)0x0) {
                free(puVar13);
              }
            }
            else {
              lVar12 = (long)puVar11 - (long)puVar13 >> 3;
              lVar3 = lVar12 + 2;
              if (lVar12 + 1 < 0 == SCARRY8(lVar12,1)) {
                lVar3 = lVar12 + 1;
              }
              sVar5 = (long)puVar14 - (long)puVar11;
              puVar13 = puVar14;
              if (sVar5 != 0) {
                memmove(puVar11 + -(lVar3 >> 1),puVar11,sVar5);
                puVar13 = puVar11;
              }
              puVar8 = (undefined8 *)((long)(puVar11 + -(lVar3 >> 1)) + sVar5);
              puVar11 = puVar13 + -(lVar3 >> 1);
            }
          }
          uVar22 = uVar22 - 1;
          puVar19 = puVar8 + 1;
          *puVar8 = puVar25[-1];
          puVar25 = (undefined8 *)(param_1[2] + -8);
          param_1[2] = (long)puVar25;
          puVar13 = puVar10;
          puVar8 = puVar19;
        } while (uVar22 != 0);
      }
      puVar13 = puVar10;
      puVar8 = puVar19;
      puVar20 = (undefined8 *)param_1[1];
      if ((undefined8 *)param_1[1] != puVar25) {
        do {
          puVar10 = puVar13;
          if (puVar8 == puVar14) {
            if (puVar11 < puVar13 || (long)puVar11 - (long)puVar13 == 0) {
              uVar18 = (long)puVar14 - (long)puVar13 >> 2;
              if ((long)puVar14 - (long)puVar13 == 0) {
                uVar18 = 1;
              }
              if (uVar18 >> 0x3d != 0) {
                if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0031f820 to 0031f823 has its CatchHandler @ 0031f858 */
                  FUN_002f9ee0();
                }
                goto LAB_0031f8dc;
              }
                    /* try { // try from 0031f550 to 0031f553 has its CatchHandler @ 0031f85c */
              puVar10 = (undefined8 *)FUN_00759c3c(uVar18 << 3);
              uVar24 = uVar18 >> 2;
              lVar3 = (long)puVar14 - (long)puVar11;
              puVar25 = puVar10 + uVar24;
              puVar8 = puVar25;
              if (lVar3 != 0) {
                puVar8 = (undefined8 *)((long)puVar25 + lVar3);
                puVar14 = puVar25;
                if ((0x17 < lVar3 - 8U) && (0x1f < (long)puVar10 + (uVar24 * 8 - (long)puVar11))) {
                  puVar14 = puVar11 + 2;
                  puVar19 = puVar10 + uVar24 + 2;
                  uVar24 = (lVar3 - 8U >> 3) + 1;
                  uVar17 = uVar24 & 0x3ffffffffffffffc;
                  puVar11 = puVar11 + uVar17;
                  uVar22 = uVar17;
                  do {
                    puVar7 = puVar14 + -1;
                    uVar9 = puVar14[-2];
                    uVar27 = puVar14[1];
                    uVar26 = *puVar14;
                    uVar22 = uVar22 - 4;
                    puVar14 = puVar14 + 4;
                    puVar19[-1] = *puVar7;
                    puVar19[-2] = uVar9;
                    puVar19[1] = uVar27;
                    *puVar19 = uVar26;
                    puVar19 = puVar19 + 4;
                  } while (uVar22 != 0);
                  puVar14 = puVar25 + uVar17;
                  if (uVar24 == uVar17) goto LAB_0031f5a8;
                }
                do {
                  puVar19 = puVar14 + 1;
                  *puVar14 = *puVar11;
                  puVar14 = puVar19;
                  puVar11 = puVar11 + 1;
                } while (puVar19 != puVar8);
              }
LAB_0031f5a8:
              puVar14 = puVar10 + uVar18;
              puVar11 = puVar25;
              if (puVar13 != (undefined8 *)0x0) {
                free(puVar13);
              }
            }
            else {
              lVar12 = (long)puVar11 - (long)puVar13 >> 3;
              lVar3 = lVar12 + 2;
              if (lVar12 + 1 < 0 == SCARRY8(lVar12,1)) {
                lVar3 = lVar12 + 1;
              }
              sVar5 = (long)puVar14 - (long)puVar11;
              puVar13 = puVar14;
              if (sVar5 != 0) {
                memmove(puVar11 + -(lVar3 >> 1),puVar11,sVar5);
                puVar13 = puVar11;
              }
              puVar8 = (undefined8 *)((long)(puVar11 + -(lVar3 >> 1)) + sVar5);
              puVar11 = puVar13 + -(lVar3 >> 1);
            }
          }
          puVar25 = puVar20 + 1;
          puVar19 = puVar8 + 1;
          *puVar8 = *puVar20;
          puVar13 = puVar10;
          puVar8 = puVar19;
          puVar20 = puVar25;
        } while (puVar25 != (undefined8 *)param_1[2]);
      }
      __ptr = (void *)*param_1;
      *param_1 = (long)puVar10;
      param_1[1] = (long)puVar11;
      param_1[2] = (long)puVar19;
      param_1[3] = (long)puVar14;
      param_1[4] = (uVar23 * 0x200 - (ulong)(lVar4 == lVar2)) + param_1[4];
      if (__ptr != (void *)0x0) {
        if (*(long *)(lVar6 + 0x28) == local_68) {
          free(__ptr);
          return;
        }
        goto LAB_0031f8dc;
      }
    }
    else {
joined_r0x0031f268:
      if (uVar18 == 0) {
        param_1[4] = lVar3 + uVar22 * 0x200;
        uVar23 = uVar22;
      }
      else {
        if (lVar2 != *param_1) goto code_r0x0031f27c;
        uVar24 = 0;
        do {
          local_70 = FUN_00759c3c(0x1000);
          FUN_0031de5c(param_1,&local_70);
          uVar24 = uVar24 + 1;
        } while (uVar18 != uVar24);
        param_1[4] = param_1[4] + uVar23 * 0x200;
      }
      for (; uVar23 != 0; uVar23 = uVar23 - 1) {
        local_70 = *(undefined8 *)(param_1[2] + -8);
        param_1[2] = param_1[2] + -8;
        FUN_0031f8e4(param_1,&local_70);
      }
    }
  }
  else {
    param_1[4] = lVar3 + uVar22 * 0x200;
    for (; uVar22 != 0; uVar22 = uVar22 - 1) {
      local_70 = *(undefined8 *)(param_1[2] + -8);
      param_1[2] = param_1[2] + -8;
      FUN_0031f8e4(param_1,&local_70);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
LAB_0031f8dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0031f27c:
  local_70 = FUN_00759c3c(0x1000);
  FUN_0031dfe4(param_1,&local_70);
  lVar2 = param_1[1];
  uVar18 = uVar18 - 1;
  uVar23 = uVar23 - 1;
  lVar3 = 0x1ff;
  if (param_1[2] - lVar2 != 8) {
    lVar3 = 0x200;
  }
  lVar3 = lVar3 + param_1[4];
  param_1[4] = lVar3;
  goto joined_r0x0031f268;
}


// ===== 0031f8e4  FUN_0031f8e4 =====

void FUN_0031f8e4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *__ptr;
  undefined8 *__dest;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  __ptr = (undefined8 *)param_1[1];
  __dest = __ptr;
  if (__ptr != (undefined8 *)*param_1) goto LAB_0031fa44;
  uVar3 = param_1[2];
  uVar11 = param_1[3];
  if (uVar3 < uVar11) {
    lVar4 = (long)(uVar11 - uVar3) >> 3;
    lVar1 = lVar4 + 2;
    if (lVar4 + 1 < 0 == SCARRY8(lVar4,1)) {
      lVar1 = lVar4 + 1;
    }
    __dest = __ptr + (lVar1 >> 1);
    if (uVar3 - (long)__ptr != 0) {
      memmove(__dest,__ptr,uVar3 - (long)__ptr);
      __ptr = (undefined8 *)param_1[2];
    }
    param_1[1] = (long)__dest;
    param_1[2] = (long)(__ptr + (lVar1 >> 1));
    goto LAB_0031fa44;
  }
  uVar5 = (long)(uVar11 - (long)__ptr) >> 2;
  if (uVar11 - (long)__ptr == 0) {
    uVar5 = 1;
  }
  if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  uVar11 = uVar5 + 3 >> 2;
  lVar4 = FUN_00759c3c(uVar5 * 8);
  lVar1 = uVar3 - (long)__ptr;
  __dest = (undefined8 *)(lVar4 + uVar11 * 8);
  puVar6 = __dest;
  if (lVar1 != 0) {
    puVar6 = (undefined8 *)((long)__dest + lVar1);
    puVar7 = __dest;
    puVar9 = __ptr;
    if ((0x37 < lVar1 - 8U) && (lVar2 = uVar11 * 8 + lVar4, 0x1f < (ulong)(lVar2 - (long)__ptr))) {
      puVar7 = __ptr + 2;
      puVar9 = (undefined8 *)(lVar2 + 0x10);
      uVar3 = (lVar1 - 8U >> 3) + 1;
      uVar10 = uVar3 & 0x3ffffffffffffffc;
      uVar11 = uVar10;
      do {
        puVar8 = puVar7 + -1;
        uVar12 = puVar7[-2];
        uVar14 = puVar7[1];
        uVar13 = *puVar7;
        uVar11 = uVar11 - 4;
        puVar7 = puVar7 + 4;
        puVar9[-1] = *puVar8;
        puVar9[-2] = uVar12;
        puVar9[1] = uVar14;
        *puVar9 = uVar13;
        puVar9 = puVar9 + 4;
      } while (uVar11 != 0);
      puVar7 = __dest + uVar10;
      puVar9 = __ptr + uVar10;
      if (uVar3 == uVar10) goto LAB_0031fa2c;
    }
    do {
      puVar8 = puVar7 + 1;
      *puVar7 = *puVar9;
      puVar7 = puVar8;
      puVar9 = puVar9 + 1;
    } while (puVar8 != puVar6);
  }
LAB_0031fa2c:
  *param_1 = lVar4;
  param_1[1] = (long)__dest;
  param_1[2] = (long)puVar6;
  param_1[3] = lVar4 + uVar5 * 8;
  if (__ptr != (undefined8 *)0x0) {
    free(__ptr);
    __dest = (undefined8 *)param_1[1];
  }
LAB_0031fa44:
  __dest[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}


// ===== 0031fa70  FUN_0031fa70 =====

void FUN_0031fa70(undefined8 *param_1,ulong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  bool bVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  ushort uVar16;
  float fVar17;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  byte bVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  uint uVar32;
  ulong uVar33;
  
  auVar19._0_8_ = *param_2;
  auVar19._8_8_ = 0;
  uVar7 = *param_1;
  fVar12 = (float)uVar7;
  fVar13 = (float)((ulong)uVar7 >> 0x20);
  auVar10 = NEON_rev64(auVar19,4);
  fVar9 = (float)(auVar19._0_8_ >> 0x20);
  fVar17 = fVar12 * (float)auVar19._0_8_;
  fVar24 = fVar13 * auVar10._0_4_;
  fVar25 = fVar12 * fVar9;
  fVar26 = fVar13 * auVar10._4_4_;
  bVar8 = false;
  if ((NAN(fVar17 - fVar24)) && (bVar8 = true, !NAN(fVar26 + fVar25))) {
    bVar8 = false;
  }
  if (bVar8) {
    uVar15 = NEON_fcmeq(CONCAT44(ABS(fVar13),ABS(fVar12)),0x7f8000007f800000,4);
    bVar27 = (byte)uVar15 | (byte)(uVar15 >> 0x20);
    auVar11 = ZEXT416((uint)fVar9);
    auVar10 = auVar19;
    if ((bVar27 & 1) != 0) {
      uVar33 = NEON_fmov(0x3f800000,4);
      auVar22._8_8_ = 0x7fffffff7fffffff;
      auVar22._0_8_ = 0x7fffffff7fffffff;
      auVar10 = NEON_bsl(auVar22,ZEXT816(0),auVar19,1);
      uVar7 = NEON_bit(uVar7,uVar33 & uVar15,0x7fffffff7fffffff,1);
      fVar12 = (float)uVar7;
      fVar13 = (float)((ulong)uVar7 >> 0x20);
      auVar10 = ZEXT416(auVar10._0_4_);
      if (!NAN((float)auVar19._0_8_)) {
        auVar10._0_8_ = auVar19._0_8_ & 0xffffffff;
        auVar10._8_8_ = 0;
      }
      if (NAN(fVar9)) {
        auVar31._8_4_ = 0x7fffffff;
        auVar31._0_8_ = 0x7fffffff7fffffff;
        auVar31._12_4_ = 0x7fffffff;
        auVar11 = NEON_bit(auVar11,ZEXT816(0),auVar31,1);
      }
    }
    fVar14 = ABS(auVar11._0_4_);
    fVar9 = auVar10._0_4_;
    fVar28 = ABS(fVar9);
    bVar8 = true;
    if ((fVar14 != INFINITY) && (bVar8 = false, !NAN(fVar28))) {
      bVar8 = fVar28 == INFINITY;
    }
    if (bVar8) {
      uVar32 = 0x3f800000;
      if (fVar28 != INFINITY) {
        uVar32 = 0;
      }
      auVar18._8_8_ = 0x7fffffff7fffffff;
      auVar18._0_8_ = 0x7fffffff7fffffff;
      auVar5._4_4_ = fVar13;
      auVar5._0_4_ = fVar12;
      auVar5._8_8_ = 0;
      auVar19 = NEON_bsl(auVar18,ZEXT816(0),auVar5,1);
      auVar22 = ZEXT816(0x3f800000);
      if (fVar14 != INFINITY) {
        auVar22 = ZEXT416(0);
      }
      auVar1._8_4_ = 0x7fffffff;
      auVar1._0_8_ = 0x7fffffff7fffffff;
      auVar1._12_4_ = 0x7fffffff;
      auVar10 = NEON_bit(auVar10,ZEXT416(uVar32),auVar1,1);
      auVar2._8_4_ = 0x7fffffff;
      auVar2._0_8_ = 0x7fffffff7fffffff;
      auVar2._12_4_ = 0x7fffffff;
      auVar11 = NEON_bit(auVar11,auVar22,auVar2,1);
      fVar14 = auVar19._0_4_;
      if (!NAN(fVar12)) {
        fVar14 = fVar12;
      }
      if (NAN(fVar13)) {
        auVar3._8_4_ = 0x7fffffff;
        auVar3._0_8_ = 0x7fffffff7fffffff;
        auVar3._12_4_ = 0x7fffffff;
        auVar19 = NEON_bit(ZEXT416((uint)fVar13),ZEXT816(0),auVar3,1);
        fVar13 = auVar19._0_4_;
      }
    }
    else {
      fVar14 = fVar12;
      if ((bVar27 & 1) == 0) {
        auVar20._0_4_ = ABS(fVar17);
        auVar20._4_4_ = ABS(fVar24);
        auVar20._8_4_ = ABS(fVar25);
        auVar20._12_4_ = ABS(fVar26);
        auVar29._8_4_ = 0x7f800000;
        auVar29._0_8_ = 0x7f8000007f800000;
        auVar29._12_4_ = 0x7f800000;
        auVar19 = NEON_fcmeq(auVar20,auVar29,4);
        uVar16 = NEON_umaxv(CONCAT26(auVar19._12_2_,
                                     CONCAT24(auVar19._8_2_,CONCAT22(auVar19._4_2_,auVar19._0_2_))),
                            2);
        if ((uVar16 & 1) == 0) {
          return;
        }
        auVar19 = ZEXT816(0);
        auVar21._8_8_ = 0x7fffffff7fffffff;
        auVar21._0_8_ = 0x7fffffff7fffffff;
        auVar30._8_8_ = 0x7fffffff7fffffff;
        auVar30._0_8_ = 0x7fffffff7fffffff;
        auVar6._4_4_ = fVar13;
        auVar6._0_4_ = fVar12;
        auVar6._8_8_ = 0;
        auVar22 = NEON_bsl(auVar21,auVar19,auVar6,1);
        auVar31 = NEON_bsl(auVar30,auVar19,ZEXT416((uint)fVar13),1);
        fVar14 = auVar22._0_4_;
        if (!NAN(fVar12)) {
          fVar14 = fVar12;
        }
        auVar23._8_8_ = 0x7fffffff7fffffff;
        auVar23._0_8_ = 0x7fffffff7fffffff;
        auVar10 = NEON_bsl(auVar23,auVar19,auVar10,1);
        fVar12 = auVar31._0_4_;
        if (!NAN(fVar13)) {
          fVar12 = fVar13;
        }
        fVar13 = fVar12;
        fVar12 = auVar10._0_4_;
        if (!NAN(fVar9)) {
          fVar12 = fVar9;
        }
        auVar10 = ZEXT416((uint)fVar12);
        if (NAN(auVar11._0_4_)) {
          auVar4._8_4_ = 0x7fffffff;
          auVar4._0_8_ = 0x7fffffff7fffffff;
          auVar4._12_4_ = 0x7fffffff;
          auVar11 = NEON_bit(auVar11,auVar19,auVar4,1);
        }
      }
    }
    NEON_fmadd(fVar14,auVar10._0_4_,-(fVar13 * auVar11._0_4_));
    NEON_fmadd(fVar14,auVar11._0_4_,auVar10._0_4_ * fVar13);
  }
  return;
}


// ===== 0031fc08  FUN_0031fc08 =====

void FUN_0031fc08(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
                    /* try { // try from 0031fc38 to 0031fc3f has its CatchHandler @ 0031fcd8 */
  plVar2 = (long *)FUN_00759c3c(0x88);
  puVar1 = PTR_DAT_007a12c8;
  plVar2[1] = 0;
  plVar2[2] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
                    /* try { // try from 0031fc5c to 0031fc6b has its CatchHandler @ 0031fcc0 */
  FUN_0033be5c(plVar2 + 3,param_2,1);
  plVar4 = (long *)param_1[1];
  *param_1 = (long)(plVar2 + 3);
  param_1[1] = (long)plVar2;
  if ((plVar4 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
  }
                    /* try { // try from 0031fca0 to 0031fca7 has its CatchHandler @ 0031fcbc */
  FUN_0031fd4c(param_1);
  return;
}


// ===== 0031fcfc  FUN_0031fcfc =====

void FUN_0031fcfc(long param_1)

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


// ===== 0031fd4c  FUN_0031fd4c =====

void FUN_0031fd4c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  uVar2 = (**(code **)(*(long *)*param_1 + 0x20))();
  plVar3 = (long *)FUN_00759c3c(0x30);
  puVar1 = PTR_DAT_007a12d0;
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)(puVar1 + 0x10);
                    /* try { // try from 0031fd98 to 0031fda3 has its CatchHandler @ 0031fe60 */
  FUN_00342408(plVar3 + 3,uVar2);
  plVar5 = (long *)param_1[3];
  param_1[2] = plVar3 + 3;
  param_1[3] = plVar3;
  if ((plVar5 != (long *)0x0) && (lVar4 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar4 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  plVar3 = (long *)FUN_00759c3c(0x60);
  puVar1 = PTR_DAT_007a12d8;
  plVar5 = (long *)param_1[0x12];
  plVar3[1] = 0;
  plVar3[2] = 0;
  plVar3[0xb] = 0;
  param_1[0x12] = plVar3;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[6] = 0;
  plVar3[5] = 0;
  plVar3[8] = 0;
  plVar3[7] = 0;
  plVar3[10] = 0;
  plVar3[9] = 0;
  plVar3[4] = 0;
  plVar3[3] = 0;
  param_1[0x11] = plVar3 + 3;
  if ((plVar5 != (long *)0x0) && (lVar4 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar4 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
    return;
  }
  return;
}


// ===== 0031fe7c  FUN_0031fe7c =====

void FUN_0031fe7c(long param_1)

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


// ===== 0031fecc  FUN_0031fecc =====

void FUN_0031fecc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
                    /* try { // try from 0031ff00 to 0031ff07 has its CatchHandler @ 0031ffa4 */
  plVar2 = (long *)FUN_00759c3c(0x88);
  puVar1 = PTR_DAT_007a12c8;
  plVar2[1] = 0;
  plVar2[2] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
                    /* try { // try from 0031ff24 to 0031ff37 has its CatchHandler @ 0031ff8c */
  FUN_0033bd64(plVar2 + 3,param_2,param_3,1);
  plVar4 = (long *)param_1[1];
  *param_1 = (long)(plVar2 + 3);
  param_1[1] = (long)plVar2;
  if ((plVar4 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
  }
                    /* try { // try from 0031ff6c to 0031ff73 has its CatchHandler @ 0031ff88 */
  FUN_0031fd4c(param_1);
  return;
}


// ===== 0031ffc8  FUN_0031ffc8 =====

void FUN_0031ffc8(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  uVar7 = *(undefined8 *)(param_2 + 0x78);
  uVar5 = *(undefined8 *)(param_2 + 0x70);
  lVar1 = *(long *)(param_2 + 0x90);
  uVar3 = *(undefined8 *)(param_2 + 0x80);
  uVar6 = *(undefined8 *)(param_2 + 0x88);
  param_1[0xe] = lVar1;
  param_1[9] = uVar4;
  param_1[8] = uVar2;
  param_1[0xb] = uVar7;
  param_1[10] = uVar5;
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar6;
  param_1[1] = uVar4;
  *param_1 = uVar2;
  param_1[3] = uVar7;
  param_1[2] = uVar5;
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  param_1[5] = *(undefined8 *)(param_2 + 0x48);
  param_1[4] = uVar3;
  param_1[7] = uVar2;
  param_1[6] = uVar6;
  if (lVar1 != 0) {
    FUN_00755c20(1,lVar1 + 8);
  }
  return;
}


// ===== 00320010  FUN_00320010 =====

void FUN_00320010(undefined8 param_1)

{
  FUN_00320034();
  FUN_003206e8(param_1);
  return;
}


// ===== 00320034  FUN_00320034 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00320034(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  byte local_120;
  char local_11f [7];
  char cStack_118;
  char acStack_117 [7];
  undefined1 local_110;
  undefined7 uStack_10f;
  byte local_108;
  char local_107 [8];
  char acStack_ff [6];
  char cStack_f9;
  char cStack_f8;
  char acStack_f7 [6];
  undefined1 uStack_f1;
  byte local_f0;
  char local_ef [8];
  undefined7 uStack_e7;
  undefined4 uStack_e0;
  uint uStack_dc;
  byte local_d8;
  char local_d7 [7];
  char cStack_d0;
  char acStack_cf [5];
  undefined2 uStack_ca;
  char cStack_c8;
  char acStack_c7 [5];
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  undefined1 local_c0 [8];
  undefined1 auStack_b8 [8];
  undefined8 *local_b0;
  long *local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  void *local_90;
  undefined8 local_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00320060 to 0032006f has its CatchHandler @ 00320538 */
  FUN_003427e0(&local_d8,param_1[2],&DAT_007aad60);
                    /* try { // try from 00320070 to 0032007f has its CatchHandler @ 00320524 */
  uVar2 = FUN_00320aec(&local_d8,"fileUid");
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = (void *)0x0;
                    /* try { // try from 00320088 to 0032008f has its CatchHandler @ 00320508 */
  FUN_00321278(uVar2,&local_a0);
                    /* try { // try from 00320098 to 0032009f has its CatchHandler @ 00320504 */
  FUN_00313038(local_d7 + 7,local_d8);
                    /* try { // try from 003200ac to 003200b7 has its CatchHandler @ 003204f8 */
  (**(code **)(*(long *)*param_1 + 0x10))(&local_b0,(long *)*param_1,&local_a0);
  local_60 = (long *)0x0;
                    /* try { // try from 003200c4 to 003200db has its CatchHandler @ 003204bc */
  FUN_00320c28(local_c0,*local_b0,local_b0[1],local_80,1,0);
  if (local_60 == local_80) {
    lVar4 = 0x20;
    plVar3 = local_80;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00320108;
    lVar4 = 0x28;
    plVar3 = local_60;
  }
  (**(code **)(*plVar3 + lVar4))();
LAB_00320108:
  local_d8 = 0x2a;
  uStack_c2 = 0;
  acStack_cf[0] = s_dfPreprocessingParams_001d9c8f[8];
  acStack_cf[1] = s_dfPreprocessingParams_001d9c8f[9];
  acStack_cf[2] = s_dfPreprocessingParams_001d9c8f[10];
  acStack_cf[3] = s_dfPreprocessingParams_001d9c8f[0xb];
  acStack_cf[4] = s_dfPreprocessingParams_001d9c8f[0xc];
  local_d7[0] = s_dfPreprocessingParams_001d9c8f[0];
  local_d7[1] = s_dfPreprocessingParams_001d9c8f[1];
  local_d7[2] = s_dfPreprocessingParams_001d9c8f[2];
  local_d7[3] = s_dfPreprocessingParams_001d9c8f[3];
  local_d7[4] = s_dfPreprocessingParams_001d9c8f[4];
  local_d7[5] = s_dfPreprocessingParams_001d9c8f[5];
  local_d7[6] = s_dfPreprocessingParams_001d9c8f[6];
  cStack_d0 = s_dfPreprocessingParams_001d9c8f[7];
  uStack_ca = (undefined2)s_dfPreprocessingParams_001d9c8f._13_3_;
  cStack_c8 = SUB31(s_dfPreprocessingParams_001d9c8f._13_3_,2);
  acStack_c7[0] = s_dfPreprocessingParams_001d9c8f[0x10];
  acStack_c7[1] = s_dfPreprocessingParams_001d9c8f[0x11];
  acStack_c7[2] = s_dfPreprocessingParams_001d9c8f[0x12];
  acStack_c7[3] = s_dfPreprocessingParams_001d9c8f[0x13];
  acStack_c7[4] = s_dfPreprocessingParams_001d9c8f[0x14];
  local_f0 = 0x26;
  uStack_e7 = (undefined7)s_rescaledCoeffParams_001de168._8_8_;
  uStack_e0 = CONCAT31(0x736d61,SUB81(s_rescaledCoeffParams_001de168._8_8_,7));
  local_ef[0] = s_rescaledCoeffParams_001de168[0];
  local_ef[1] = s_rescaledCoeffParams_001de168[1];
  local_ef[2] = s_rescaledCoeffParams_001de168[2];
  local_ef[3] = s_rescaledCoeffParams_001de168[3];
  local_ef[4] = s_rescaledCoeffParams_001de168[4];
  local_ef[5] = s_rescaledCoeffParams_001de168[5];
  local_ef[6] = s_rescaledCoeffParams_001de168[6];
  local_ef[7] = s_rescaledCoeffParams_001de168[7];
  local_108 = 0x2c;
  acStack_ff[0] = s_dfPostprocessingParams_001cd9d2[8];
  acStack_ff[1] = s_dfPostprocessingParams_001cd9d2[9];
  acStack_ff[2] = s_dfPostprocessingParams_001cd9d2[10];
  acStack_ff[3] = s_dfPostprocessingParams_001cd9d2[0xb];
  acStack_ff[4] = s_dfPostprocessingParams_001cd9d2[0xc];
  acStack_ff[5] = s_dfPostprocessingParams_001cd9d2[0xd];
  local_107[0] = s_dfPostprocessingParams_001cd9d2[0];
  local_107[1] = s_dfPostprocessingParams_001cd9d2[1];
  local_107[2] = s_dfPostprocessingParams_001cd9d2[2];
  local_107[3] = s_dfPostprocessingParams_001cd9d2[3];
  local_107[4] = s_dfPostprocessingParams_001cd9d2[4];
  local_107[5] = s_dfPostprocessingParams_001cd9d2[5];
  local_107[6] = s_dfPostprocessingParams_001cd9d2[6];
  local_107[7] = s_dfPostprocessingParams_001cd9d2[7];
  cStack_f9 = (char)s_dfPostprocessingParams_001cd9d2._14_2_;
  cStack_f8 = SUB21(s_dfPostprocessingParams_001cd9d2._14_2_,1);
  acStack_f7[0] = s_dfPostprocessingParams_001cd9d2[0x10];
  acStack_f7[1] = s_dfPostprocessingParams_001cd9d2[0x11];
  acStack_f7[2] = s_dfPostprocessingParams_001cd9d2[0x12];
  acStack_f7[3] = s_dfPostprocessingParams_001cd9d2[0x13];
  acStack_f7[4] = s_dfPostprocessingParams_001cd9d2[0x14];
  acStack_f7[5] = s_dfPostprocessingParams_001cd9d2[0x15];
  local_120 = 0x1e;
  uStack_dc = uStack_dc & 0xffffff00;
  uStack_f1 = 0;
  local_11f[0] = s_dfGeneralParams_001f5399[0];
  local_11f[1] = s_dfGeneralParams_001f5399[1];
  local_11f[2] = s_dfGeneralParams_001f5399[2];
  local_11f[3] = s_dfGeneralParams_001f5399[3];
  local_11f[4] = s_dfGeneralParams_001f5399[4];
  local_11f[5] = s_dfGeneralParams_001f5399[5];
  local_11f[6] = s_dfGeneralParams_001f5399[6];
  cStack_118 = s_dfGeneralParams_001f5399[7];
  acStack_117[0] = s_dfGeneralParams_001f5399[8];
  acStack_117[1] = s_dfGeneralParams_001f5399[9];
  acStack_117[2] = s_dfGeneralParams_001f5399[10];
  acStack_117[3] = s_dfGeneralParams_001f5399[0xb];
  acStack_117[4] = s_dfGeneralParams_001f5399[0xc];
  acStack_117[5] = s_dfGeneralParams_001f5399[0xd];
  acStack_117[6] = s_dfGeneralParams_001f5399[0xe];
  local_110 = 0;
                    /* try { // try from 0032019c to 003203cf has its CatchHandler @ 00320544 */
  uVar2 = FUN_00320eb4(local_c0,&local_d8);
  uVar2 = FUN_00320eb4(uVar2,&local_f0);
  uVar2 = FUN_00320aec(uVar2,"trainVolume");
  local_88 = (ulong)local_88._4_4_ << 0x20;
  FUN_0032c290(uVar2,&local_88);
  *(undefined4 *)(param_1 + 4) = (undefined4)local_88;
  uVar2 = FUN_00320eb4(local_c0,&local_d8);
  uVar2 = FUN_00320eb4(uVar2,&local_f0);
  uVar2 = FUN_00320aec(uVar2,"initialBufferSize");
  local_88 = 0;
  FUN_0032c40c(uVar2,&local_88);
  param_1[5] = local_88;
  uVar2 = FUN_00320eb4(local_c0,&local_d8);
  uVar2 = FUN_00320eb4(uVar2,&local_f0);
  uVar2 = FUN_00320aec(uVar2,"maxBufferSize");
  local_88 = 0;
  FUN_0032c40c(uVar2,&local_88);
  param_1[6] = local_88;
  uVar2 = FUN_00320eb4(local_c0,&local_d8);
  uVar2 = FUN_00320eb4(uVar2,&local_f0);
  uVar2 = FUN_00320aec(uVar2,"energyThreshold");
  local_88 = local_88 & 0xffffffff00000000;
  FUN_0032c290(uVar2,&local_88);
  *(undefined4 *)(param_1 + 7) = (undefined4)local_88;
  uVar2 = FUN_00320eb4(local_c0,&local_d8);
  uVar2 = FUN_00320eb4(uVar2,&local_f0);
  uVar2 = FUN_00320aec(uVar2,"nCalculateSum");
  local_88 = 0;
  FUN_0032c40c(uVar2,&local_88);
  param_1[8] = local_88;
  uVar2 = FUN_00320eb4(local_c0,&local_d8);
  uVar2 = FUN_00320aec(uVar2,"frameLength");
  local_88 = 0;
  FUN_0032c40c(uVar2,&local_88);
  param_1[9] = local_88;
  uVar2 = FUN_00320eb4(local_c0,&local_d8);
  uVar2 = FUN_00320aec(uVar2,&DAT_001c2bd7);
  local_88 = 0;
  FUN_0032c40c(uVar2,&local_88);
  param_1[10] = local_88;
  param_1[0xb] = param_1[9];
  uVar2 = FUN_00320eb4(local_c0,&local_108);
  uVar2 = FUN_00320aec(uVar2,"numFreqs");
  local_88 = 0;
  FUN_0032c40c(uVar2,&local_88);
  param_1[0xc] = local_88;
  uVar2 = FUN_00320eb4(local_c0,&local_108);
  uVar2 = FUN_00320aec(uVar2,"dfOrder");
  local_88 = 0;
  FUN_0032c40c(uVar2,&local_88);
  param_1[0xd] = local_88;
  uVar2 = FUN_00320eb4(local_c0,&local_120);
  uVar2 = FUN_00320aec(uVar2,"workingSampleRate");
  local_88 = 0;
  FUN_0032c40c(uVar2,&local_88);
  param_1[0xe] = local_88;
  uVar2 = FUN_00320eb4(local_c0,&local_120);
  uVar2 = FUN_00320aec(uVar2,"workingFrameDuration");
  local_88 = 0;
  FUN_0032c40c(uVar2,&local_88);
  param_1[0xf] = local_88;
  uVar2 = FUN_00320eb4(local_c0,&local_120);
  uVar2 = FUN_00320aec(uVar2,&DAT_001c2bdc);
  local_88 = 0;
  FUN_0032c40c(uVar2,&local_88);
  param_1[0x10] = local_88;
  if ((local_120 & 1) != 0) {
    free((void *)CONCAT71(uStack_10f,local_110));
  }
  if ((local_108 & 1) != 0) {
    free((void *)CONCAT17(uStack_f1,CONCAT61(acStack_f7,cStack_f8)));
  }
  if ((local_f0 & 1) != 0) {
    free((void *)CONCAT44(uStack_dc,uStack_e0));
  }
  if ((local_d8 & 1) != 0) {
    free((void *)CONCAT17(uStack_c1,CONCAT16(uStack_c2,CONCAT51(acStack_c7,cStack_c8))));
  }
                    /* try { // try from 00320408 to 0032040f has its CatchHandler @ 003204b8 */
  FUN_00313038(auStack_b8,local_c0[0]);
  if ((local_a8 != (long *)0x0) &&
     (lVar4 = FUN_00755c50(0xffffffffffffffff,local_a8 + 1), lVar4 == 0)) {
    (**(code **)(*local_a8 + 0x10))(local_a8);
    FUN_0071245c(local_a8);
  }
  if ((local_a0 & 1) != 0) {
    free(local_90);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 003206e8  FUN_003206e8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_003206e8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined1 local_b0;
  undefined7 uStack_af;
  long *local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  void *local_90;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  ulong local_70;
  undefined8 uStack_68;
  void *local_60;
  undefined1 local_58 [8];
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00320714 to 00320727 has its CatchHandler @ 00320990 */
  FUN_00343168(local_58,param_1[2],&DAT_007aad78);
                    /* try { // try from 00320728 to 00320737 has its CatchHandler @ 00320984 */
  uVar4 = FUN_00320aec(local_58,"engType");
  local_70 = 0;
  uStack_68 = 0;
  local_60 = (void *)0x0;
                    /* try { // try from 00320740 to 00320747 has its CatchHandler @ 00320970 */
  FUN_00321278(uVar4,&local_70);
                    /* try { // try from 00320748 to 00320757 has its CatchHandler @ 00320964 */
  uVar4 = FUN_00320aec(local_58,"deviceToRun");
  local_88 = 0;
  uStack_80 = 0;
  local_78 = (void *)0x0;
                    /* try { // try from 00320760 to 00320767 has its CatchHandler @ 00320950 */
  FUN_00321278(uVar4,&local_88);
                    /* try { // try from 00320768 to 0032077f has its CatchHandler @ 0032099c */
  uVar3 = FUN_0034b7d0(&local_70);
  *(undefined4 *)param_1[0x11] = uVar3;
  uVar3 = FUN_0034b9d4(&local_88);
  *(undefined4 *)(param_1[0x11] + 0x40) = uVar3;
                    /* try { // try from 0032078c to 0032079b has its CatchHandler @ 0032094c */
  FUN_003436ac(&local_b0,param_1[2],&DAT_007aad78,&DAT_007aad90);
                    /* try { // try from 0032079c to 003207ab has its CatchHandler @ 00320938 */
  uVar4 = FUN_00320aec(&local_b0,"fileUid");
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = (void *)0x0;
                    /* try { // try from 003207b4 to 003207bb has its CatchHandler @ 0032091c */
  FUN_00321278(uVar4,&local_a0);
                    /* try { // try from 003207c4 to 003207cb has its CatchHandler @ 00320918 */
  FUN_00313038(&local_a8,local_b0);
                    /* try { // try from 003207d0 to 003207db has its CatchHandler @ 003208fc */
  FUN_007139b0(param_1[0x11] + 8,&local_a0);
                    /* try { // try from 003207e8 to 003207f3 has its CatchHandler @ 003208f8 */
  (**(code **)(*(long *)*param_1 + 0x10))(&local_b0,(long *)*param_1,&local_a0);
  plVar2 = local_a8;
  lVar6 = param_1[0x11];
  if (local_a8 != (long *)0x0) {
    FUN_00755c20(1,local_a8 + 1);
  }
  plVar5 = *(long **)(lVar6 + 0x38);
  *(ulong *)(lVar6 + 0x30) = CONCAT71(uStack_af,local_b0);
  *(long **)(lVar6 + 0x38) = plVar2;
  if ((plVar5 != (long *)0x0) && (lVar6 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar6 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  if ((local_a8 != (long *)0x0) &&
     (lVar6 = FUN_00755c50(0xffffffffffffffff,local_a8 + 1), lVar6 == 0)) {
    (**(code **)(*local_a8 + 0x10))(local_a8);
    FUN_0071245c(local_a8);
  }
  if ((local_a0 & 1) != 0) {
    free(local_90);
  }
  if ((local_88 & 1) != 0) {
    free(local_78);
  }
  if ((local_70 & 1) != 0) {
    free(local_60);
  }
                    /* try { // try from 00320880 to 00320887 has its CatchHandler @ 003208f4 */
  FUN_00313038(auStack_50,local_58[0]);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00320aec  FUN_00320aec =====

void FUN_00320aec(undefined8 param_1,char *param_2)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_60;
  size_t local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __n = strlen(param_2);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_60);
    }
    goto LAB_00320c24;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00320b7c;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_60 = uVar1 + 1 | 1;
    local_58 = __n;
    local_50 = __dest;
LAB_00320b7c:
    memcpy(__dest,param_2,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 00320b90 to 00320b9b has its CatchHandler @ 00320bf8 */
  __n = FUN_00320eb4(param_1,&local_60);
  if ((local_60 & 1) != 0) {
    free(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_00320c24:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 00320c28  FUN_00320c28 =====

void FUN_00320c28(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 uint param_5,uint param_6)

{
  long lVar1;
  long *plVar2;
  long **pplVar3;
  long lVar4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  long local_1a0 [4];
  long *local_180 [2];
  long local_170 [4];
  long *local_150;
  void *local_f8;
  void *local_f0;
  byte local_e0;
  void *local_d0;
  long local_90 [4];
  long *local_70 [3];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)param_4[4];
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  local_1b0 = param_2;
  uStack_1a8 = param_3;
  if (plVar2 == (long *)0x0) {
    local_180[0] = (long *)0x0;
LAB_00320ca0:
    pplVar3 = local_70;
LAB_00320ce8:
    *pplVar3 = (long *)0x0;
  }
  else {
    if (plVar2 == param_4) {
      local_180[0] = local_1a0;
      (**(code **)(*param_4 + 0x18))(param_4,local_1a0);
    }
    else {
                    /* try { // try from 00320c84 to 00320cc7 has its CatchHandler @ 00320e14 */
      local_180[0] = (long *)(**(code **)(*plVar2 + 0x10))();
    }
    if (local_180[0] == (long *)0x0) goto LAB_00320ca0;
    if (local_180[0] != local_1a0) {
      pplVar3 = local_180;
      local_70[0] = local_180[0];
      goto LAB_00320ce8;
    }
    local_70[0] = local_90;
                    /* try { // try from 00320e00 to 00320e0b has its CatchHandler @ 00320e10 */
    (**(code **)(local_1a0[0] + 0x18))(local_1a0,local_90);
  }
                    /* try { // try from 00320cec to 00320d07 has its CatchHandler @ 00320e2c */
  FUN_00321d88(local_170,&local_1b0,local_90,param_5 & 1,param_6 & 1);
  if (local_70[0] == local_90) {
    lVar4 = 0x20;
    plVar2 = local_90;
LAB_00320d28:
    (**(code **)(*plVar2 + lVar4))();
  }
  else if (local_70[0] != (long *)0x0) {
    lVar4 = 0x28;
    plVar2 = local_70[0];
    goto LAB_00320d28;
  }
                    /* try { // try from 00320d34 to 00320d43 has its CatchHandler @ 00320e1c */
  FUN_00321420(local_170,1,param_1);
  if ((local_e0 & 1) != 0) {
    free(local_d0);
  }
  if (local_f8 != (void *)0x0) {
    local_f0 = local_f8;
    free(local_f8);
  }
  if (local_150 == local_170) {
    lVar4 = 0x20;
    local_150 = local_170;
LAB_00320d88:
    (**(code **)(*local_150 + lVar4))();
  }
  else if (local_150 != (long *)0x0) {
    lVar4 = 0x28;
    goto LAB_00320d88;
  }
  if (local_180[0] == local_1a0) {
    lVar4 = 0x20;
    plVar2 = local_1a0;
  }
  else {
    if (local_180[0] == (long *)0x0) goto LAB_00320dc4;
    lVar4 = 0x28;
    plVar2 = local_180[0];
  }
  (**(code **)(*plVar2 + lVar4))();
LAB_00320dc4:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00320eb4  FUN_00320eb4 =====

long FUN_00320eb4(char *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*param_1 == '\x01') {
    lVar2 = FUN_0032c168(*(undefined8 *)(param_1 + 8));
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return lVar2 + 0x38;
    }
  }
  else {
    uVar3 = FUN_00753a74(0x20);
    local_58 = FUN_00312898(param_1);
                    /* try { // try from 00320f30 to 00320f43 has its CatchHandler @ 00320fac */
    FUN_0032c0e0(auStack_50,"cannot use operator[] with a string argument with ",&local_58);
                    /* try { // try from 00320f48 to 00320f87 has its CatchHandler @ 00320f88 */
    FUN_00312624(uVar3,0x131,auStack_50,param_1);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a12e8,PTR_FUN_007a12f0);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00320fd4  FUN_00320fd4 =====

void FUN_00320fd4(long param_1)

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


// ===== 00321024  FUN_00321024 =====

void FUN_00321024(undefined1 *param_1)

{
                    /* try { // try from 00321030 to 00321033 has its CatchHandler @ 0032103c */
  FUN_00313038(param_1 + 8,*param_1);
  return;
}


// ===== 00321040  FUN_00321040 =====

void FUN_00321040(undefined8 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[1];
  while (lVar2 = param_1[2], lVar2 != lVar3) {
    uVar1 = *(undefined1 *)(lVar2 + -0x10);
    param_1[2] = (undefined1 *)(lVar2 + -0x10);
                    /* try { // try from 00321068 to 0032106f has its CatchHandler @ 00321094 */
    FUN_00313038(lVar2 + -8,uVar1);
  }
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 00321098  FUN_00321098 =====

void FUN_00321098(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    puVar2 = (undefined1 *)**(undefined8 **)(param_1 + 8);
    puVar1 = (undefined1 *)**(undefined8 **)(param_1 + 0x10);
    while (puVar1 != puVar2) {
                    /* try { // try from 003210d0 to 003210d7 has its CatchHandler @ 003210dc */
      FUN_00313038(puVar1 + -8,puVar1[-0x10]);
      puVar1 = puVar1 + -0x10;
    }
  }
  return;
}


// ===== 003210e0  FUN_003210e0 =====

void FUN_003210e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00760520;
  FUN_00712454();
  return;
}


// ===== 003210f4  FUN_003210f4 =====

void FUN_003210f4(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a12c8 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00321128  FUN_00321128 =====

void FUN_00321128(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00321130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00321134  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00321138  FUN_00321138 =====

void FUN_00321138(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00760570;
  FUN_00712454();
  return;
}


// ===== 0032114c  FUN_0032114c =====

void FUN_0032114c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a12d0 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00321180  FUN_00321180 =====

void FUN_00321180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00321188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0032118c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00321190  FUN_00321190 =====

void FUN_00321190(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007605c0;
  FUN_00712454();
  return;
}


// ===== 003211a4  FUN_003211a4 =====

void FUN_003211a4(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a12d8 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 003211d8  FUN_003211d8 =====

void FUN_003211d8(long param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x50);
  if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
  }
  plVar3 = *(long **)(param_1 + 0x40);
  if ((plVar3 == (long *)0x0) || (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar2 != 0))
  {
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  else {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  free(*(void **)(param_1 + 0x30));
  return;
}


// ===== 00321274  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00321278  FUN_00321278 =====

void FUN_00321278(char *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*param_1 == '\x03') {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      FUN_007139b0(param_2,*(undefined8 *)(param_1 + 8));
      return;
    }
  }
  else {
    uVar2 = FUN_00753a74(0x20);
    local_58 = FUN_00312898(param_1);
                    /* try { // try from 003212f4 to 00321307 has its CatchHandler @ 00321370 */
    FUN_00321398(auStack_50,"type must be string, but is ",&local_58);
                    /* try { // try from 0032130c to 0032134b has its CatchHandler @ 0032134c */
    FUN_00312624(uVar2,0x12e,auStack_50,param_1);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a12e8,PTR_FUN_007a12f0);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00321398  FUN_00321398 =====

void FUN_00321398(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  size_t sVar1;
  size_t sVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  sVar1 = strlen(param_2);
  sVar2 = strlen((char *)*param_3);
                    /* try { // try from 003213d0 to 003213f3 has its CatchHandler @ 00321404 */
  FUN_00712ea8(param_1,sVar2 + sVar1);
  FUN_00713bdc(param_1,param_2);
  FUN_00713bdc(param_1,*param_3);
  return;
}


// ===== 00321420  FUN_00321420 =====

void FUN_00321420(long *param_1,ulong param_2,char *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_1e8;
  char local_1e0;
  undefined8 local_1d8;
  char local_1d0;
  undefined8 local_1c8;
  byte local_1c0;
  undefined4 local_1bf;
  undefined2 local_1bb;
  void *local_1b0;
  byte local_1a8 [16];
  void *local_198;
  long local_190;
  long lStack_188;
  long local_180;
  ulong local_170;
  undefined8 uStack_168;
  void *local_160;
  undefined *local_158;
  uint local_150;
  undefined1 auStack_148 [16];
  long local_138;
  long local_130 [4];
  long *local_110;
  char *local_100;
  void *local_f8;
  void *pvStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  char local_d8;
  char local_d7;
  char local_a8;
  char local_70;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  plVar6 = (long *)param_1[4];
  if (plVar6 == (long *)0x0) {
    local_d7 = (char)param_1[0x1a];
    local_d8 = '\0';
    pvStack_f0 = (void *)0x0;
    local_f8 = (void *)0x0;
    uStack_e0 = 0;
    local_e8 = 0;
                    /* try { // try from 00321494 to 003214ab has its CatchHandler @ 00321a50 */
    local_100 = param_3;
    FUN_00324fb0(param_1,&local_100);
    if ((param_2 & 1) != 0) {
      iVar5 = FUN_00321efc(param_1 + 7);
      *(int *)(param_1 + 6) = iVar5;
      if (iVar5 != 0xf) {
        pbVar1 = (byte *)param_1[0xf];
        pbVar2 = (byte *)param_1[0x10];
        local_170 = 0;
        uStack_168 = 0;
        local_160 = (void *)0x0;
        for (; pbVar1 != pbVar2; pbVar1 = pbVar1 + 1) {
          if (*pbVar1 < 0x20) {
            local_150 = local_150 & 0xffffff00;
            local_158 = (undefined *)0x0;
                    /* try { // try from 003215e4 to 003215ff has its CatchHandler @ 00321ac0 */
            FUN_0032a338(&local_158,*pbVar1,9);
            FUN_00713bdc(&local_170,&local_158);
          }
          else {
                    /* try { // try from 003215bc to 003215c3 has its CatchHandler @ 00321a98 */
            FUN_007132e8(&local_170);
          }
        }
        lStack_188 = param_1[0xd];
        local_190 = param_1[0xc];
        local_180 = param_1[0xe];
        local_1c0 = 10;
        local_1bf = 0x756c6176;
        local_1bb = 0x65;
                    /* try { // try from 003214f8 to 0032150b has its CatchHandler @ 003219b0 */
        FUN_00324b5c(local_1a8,param_1,0xf,&local_1c0);
                    /* try { // try from 0032150c to 00321523 has its CatchHandler @ 00321974 */
        FUN_003248ec(&local_158,0x65,&local_190,local_1a8,0);
        local_d8 = '\x01';
        if (local_d7 != '\0') {
          plVar6 = (long *)FUN_00753a74(0x28);
          *plVar6 = (long)(PTR_DAT_007a12f8 + 0x10);
          *(uint *)(plVar6 + 1) = local_150;
          FUN_007127d4(plVar6 + 2,auStack_148);
          *plVar6 = (long)(PTR_DAT_007a1308 + 0x10);
          plVar6[4] = local_138;
          if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 0032193c to 00321953 has its CatchHandler @ 00321954 */
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(plVar6,PTR_PTR_007a1310,PTR_FUN_007a12f0);
          }
          goto LAB_00321b1c;
        }
        local_158 = PTR_DAT_007a12f8 + 0x10;
        FUN_0073a2c4(auStack_148);
        FUN_0073a174(&local_158);
        if ((local_1a8[0] & 1) != 0) {
          free(local_198);
        }
        if ((local_1c0 & 1) != 0) {
          free(local_1b0);
        }
        if ((local_170 & 1) != 0) {
          free(local_160);
        }
      }
    }
    if (local_d8 != '\0') {
      local_1e8 = *(undefined8 *)(param_3 + 8);
      param_3[8] = '\0';
      param_3[9] = '\0';
      param_3[10] = '\0';
      param_3[0xb] = '\0';
      param_3[0xc] = '\0';
      param_3[0xd] = '\0';
      param_3[0xe] = '\0';
      param_3[0xf] = '\0';
      *param_3 = '\t';
                    /* try { // try from 003215a0 to 003215a7 has its CatchHandler @ 00321a48 */
      FUN_00313038(&local_1e8);
    }
    if (local_f8 != (void *)0x0) {
      pvStack_f0 = local_f8;
      free(local_f8);
    }
  }
  else {
    if (plVar6 == param_1) {
      local_110 = local_130;
      (**(code **)(*param_1 + 0x18))(param_1,local_130);
    }
    else {
      local_110 = (long *)(**(code **)(*plVar6 + 0x10))();
    }
                    /* try { // try from 00321624 to 00321637 has its CatchHandler @ 00321a60 */
    FUN_0032371c(&local_100,param_3,local_130,(char)param_1[0x1a]);
    if (local_110 == local_130) {
      lVar7 = 0x20;
      plVar6 = local_130;
LAB_00321658:
      (**(code **)(*plVar6 + lVar7))();
    }
    else if (local_110 != (long *)0x0) {
      lVar7 = 0x28;
      plVar6 = local_110;
      goto LAB_00321658;
    }
                    /* try { // try from 00321664 to 0032167b has its CatchHandler @ 00321aa8 */
    FUN_003238dc(param_1,&local_100);
    if ((param_2 & 1) != 0) {
      iVar5 = FUN_00321efc(param_1 + 7);
      *(int *)(param_1 + 6) = iVar5;
      if (iVar5 != 0xf) {
        pbVar1 = (byte *)param_1[0xf];
        pbVar2 = (byte *)param_1[0x10];
        local_170 = 0;
        uStack_168 = 0;
        local_160 = (void *)0x0;
        for (; pbVar1 != pbVar2; pbVar1 = pbVar1 + 1) {
          if (*pbVar1 < 0x20) {
            local_150 = local_150 & 0xffffff00;
            local_158 = (undefined *)0x0;
                    /* try { // try from 003217a4 to 003217bf has its CatchHandler @ 00321ae8 */
            FUN_0032a338(&local_158,*pbVar1,9);
            FUN_00713bdc(&local_170,&local_158);
          }
          else {
                    /* try { // try from 0032177c to 00321783 has its CatchHandler @ 00321ab0 */
            FUN_007132e8(&local_170);
          }
        }
        lStack_188 = param_1[0xd];
        local_190 = param_1[0xc];
        local_180 = param_1[0xe];
        local_1c0 = 10;
        local_1bf = 0x756c6176;
        local_1bb = 0x65;
                    /* try { // try from 003216c8 to 003216db has its CatchHandler @ 00321a28 */
        FUN_00324b5c(local_1a8,param_1,0xf,&local_1c0);
                    /* try { // try from 003216dc to 003216f3 has its CatchHandler @ 003219f4 */
        FUN_003248ec(&local_158,0x65,&local_190,local_1a8,0);
        local_a8 = '\x01';
        if (local_70 != '\0') {
          plVar6 = (long *)FUN_00753a74(0x28);
          *plVar6 = (long)(PTR_DAT_007a12f8 + 0x10);
          *(uint *)(plVar6 + 1) = local_150;
          FUN_007127d4(plVar6 + 2,auStack_148);
          *plVar6 = (long)(PTR_DAT_007a1308 + 0x10);
          plVar6[4] = local_138;
          if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 003218c8 to 003218df has its CatchHandler @ 003219d4 */
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(plVar6,PTR_PTR_007a1310,PTR_FUN_007a12f0);
          }
          goto LAB_00321b1c;
        }
        local_158 = PTR_DAT_007a12f8 + 0x10;
        FUN_0073a2c4(auStack_148);
        FUN_0073a174(&local_158);
        if ((local_1a8[0] & 1) != 0) {
          free(local_198);
        }
        if ((local_1c0 & 1) != 0) {
          free(local_1b0);
        }
        if ((local_170 & 1) != 0) {
          free(local_160);
        }
      }
    }
    if (local_a8 == '\0') {
      cVar3 = *param_3;
      if (cVar3 == '\t') {
        local_1d8 = *(undefined8 *)(param_3 + 8);
        *param_3 = '\0';
        param_3[8] = '\0';
        param_3[9] = '\0';
        param_3[10] = '\0';
        param_3[0xb] = '\0';
        param_3[0xc] = '\0';
        param_3[0xd] = '\0';
        param_3[0xe] = '\0';
        param_3[0xf] = '\0';
                    /* try { // try from 003217e8 to 003217f3 has its CatchHandler @ 003219d0 */
        local_1e0 = cVar3;
        FUN_00313038(&local_1d8,9);
      }
    }
    else {
      local_1d0 = *param_3;
      local_1c8 = *(undefined8 *)(param_3 + 8);
      param_3[8] = '\0';
      param_3[9] = '\0';
      param_3[10] = '\0';
      param_3[0xb] = '\0';
      param_3[0xc] = '\0';
      param_3[0xd] = '\0';
      param_3[0xe] = '\0';
      param_3[0xf] = '\0';
      *param_3 = '\t';
                    /* try { // try from 00321770 to 00321777 has its CatchHandler @ 00321a4c */
      FUN_00313038(&local_1c8);
    }
    FUN_00324f24(&local_100);
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
LAB_00321b1c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00321b20  FUN_00321b20 =====

void FUN_00321b20(long *param_1)

{
  void *__ptr;
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
    free((void *)param_1[0x14]);
  }
  __ptr = (void *)param_1[0xf];
  if (__ptr != (void *)0x0) {
    param_1[0x10] = (long)__ptr;
    free(__ptr);
  }
  plVar1 = (long *)param_1[4];
  if (plVar1 != param_1) {
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00321b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x28))(plVar1);
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00321b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}


// ===== 00321ba8  FUN_00321ba8 =====

void FUN_00321ba8(undefined8 *param_1,byte param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_2 < 4) {
    if (param_2 < 2) {
      if ((param_2 != 0) && (param_2 == 1)) {
        puVar1 = (undefined8 *)FUN_00759c3c(0x18);
        puVar1[2] = 0;
        puVar1[1] = 0;
        *puVar1 = puVar1 + 1;
        *param_1 = puVar1;
        return;
      }
    }
    else {
      if (param_2 == 2) {
        puVar1 = (undefined8 *)FUN_00759c3c(0x18);
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        *param_1 = puVar1;
        return;
      }
      if (param_2 == 3) {
        uVar2 = FUN_00321cbc(&DAT_001c717f);
        *param_1 = uVar2;
        return;
      }
    }
  }
  else if (param_2 < 6) {
    if (param_2 == 4) {
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (((param_2 != 6) && (param_2 != 7)) && (param_2 == 8)) {
    puVar1 = (undefined8 *)FUN_00759c3c(0x28);
    *(undefined1 *)(puVar1 + 4) = 0;
    *param_1 = puVar1;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    return;
  }
  *param_1 = 0;
  return;
}


// ===== 00321cbc  FUN_00321cbc =====

ulong * FUN_00321cbc(char *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  size_t __n;
  undefined1 *__dest;
  
  puVar2 = (ulong *)FUN_00759c3c(0x18);
  __n = strlen(param_1);
  if (0xfffffffffffffff7 < __n) {
                    /* try { // try from 00321d6c to 00321d73 has its CatchHandler @ 00321d74 */
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(puVar2);
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((long)puVar2 + 1);
    *(char *)puVar2 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00321d50;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 00321d28 to 00321d2f has its CatchHandler @ 00321d74 */
    __dest = (undefined1 *)FUN_00759c3c(uVar1 + 1);
    puVar2[1] = __n;
    puVar2[2] = (ulong)__dest;
    *puVar2 = uVar1 + 1 | 1;
  }
  memcpy(__dest,param_1,__n);
LAB_00321d50:
  __dest[__n] = 0;
  return puVar2;
}


// ===== 00321d88  FUN_00321d88 =====

void FUN_00321d88(long param_1,undefined8 *param_2,long *param_3,byte param_4,byte param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  lconv *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  plVar4 = (long *)param_3[4];
  if (plVar4 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else if (plVar4 == param_3) {
    *(long *)(param_1 + 0x20) = param_1;
    (**(code **)(*(long *)param_3[4] + 0x18))((long *)param_3[4],param_1);
  }
  else {
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  uVar6 = param_2[1];
  uVar2 = *param_2;
  *(byte *)(param_1 + 0x48) = param_5 & 1;
  *(undefined8 *)(param_1 + 0x50) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined1 **)(param_1 + 0xa8) = &DAT_001c717f;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
                    /* try { // try from 00321e30 to 00321e33 has its CatchHandler @ 00321eb4 */
  plVar3 = localeconv();
  if ((byte *)plVar3->decimal_point == (byte *)0x0) {
    uVar5 = 0x2e;
  }
  else {
    uVar5 = (ulong)(byte)*plVar3->decimal_point;
  }
  *(ulong *)(param_1 + 200) = uVar5;
  *(byte *)(param_1 + 0xd0) = param_4 & 1;
                    /* try { // try from 00321e54 to 00321e5b has its CatchHandler @ 00321e70 */
  uVar1 = FUN_00321efc(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  return;
}


// ===== 00321eb8  FUN_00321eb8 =====

void FUN_00321eb8(long param_1)

{
  void *__ptr;
  
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    free(*(void **)(param_1 + 0x68));
  }
  __ptr = *(void **)(param_1 + 0x40);
  if (__ptr != (void *)0x0) {
    *(void **)(param_1 + 0x48) = __ptr;
    free(__ptr);
    return;
  }
  return;
}


// ===== 00321efc  FUN_00321efc =====

undefined8 FUN_00321efc(long param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  long *plVar6;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    lVar2 = FUN_003233a8(param_1);
    if (lVar2 == 0xef) {
      lVar2 = FUN_003233a8(param_1);
      if ((lVar2 != 0xbb) || (lVar2 = FUN_003233a8(param_1), lVar2 != 0xbf)) {
        pcVar5 = "invalid BOM; must be 0xEF 0xBB 0xBF if given";
LAB_00321f4c:
        *(char **)(param_1 + 0x70) = pcVar5;
        goto LAB_00321fc8;
      }
    }
    else {
      plVar6 = (long *)(param_1 + 0x30);
      lVar2 = *plVar6;
      *(undefined1 *)(param_1 + 0x20) = 1;
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
      if (lVar2 == 0) {
        plVar6 = (long *)(param_1 + 0x38);
        lVar2 = *plVar6;
        if (lVar2 != 0) goto LAB_00321f80;
      }
      else {
LAB_00321f80:
        *plVar6 = lVar2 + -1;
      }
      if (*(long *)(param_1 + 0x18) != -1) {
        *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
      }
    }
  }
  do {
    FUN_00322184(param_1);
    if ((*(char *)(param_1 + 0x10) == '\0') || (*(long *)(param_1 + 0x18) != 0x2f)) {
      uVar4 = 8;
      switch(*(long *)(param_1 + 0x18)) {
      case 0x22:
        uVar4 = FUN_00322434(param_1);
        return uVar4;
      case 0x2c:
        return 0xd;
      case 0x2d:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
        uVar4 = FUN_00322e38(param_1);
        return uVar4;
      case 0x3a:
        return 0xc;
      case 0x5b:
        goto switchD_00321ffc_caseD_5b;
      case 0x5d:
        return 10;
      case 0x66:
        cVar1 = FUN_003233a8(param_1);
        if (((cVar1 == 'a') && (cVar1 = FUN_003233a8(param_1), cVar1 == 'l')) &&
           ((cVar1 = FUN_003233a8(param_1), cVar1 == 's' &&
            (cVar1 = FUN_003233a8(param_1), cVar1 == 'e')))) {
          return 2;
        }
        break;
      case 0x6e:
        cVar1 = FUN_003233a8(param_1);
        if (((cVar1 == 'u') && (cVar1 = FUN_003233a8(param_1), cVar1 == 'l')) &&
           (cVar1 = FUN_003233a8(param_1), cVar1 == 'l')) {
          return 3;
        }
        break;
      case 0x74:
        cVar1 = FUN_003233a8(param_1);
        if (((cVar1 == 'r') && (cVar1 = FUN_003233a8(param_1), cVar1 == 'u')) &&
           (cVar1 = FUN_003233a8(param_1), cVar1 == 'e')) {
          return 1;
        }
        break;
      case 0x7b:
        return 9;
      case 0x7d:
        return 0xb;
      case -1:
      case 0:
        return 0xf;
      }
      pcVar5 = "invalid literal";
      goto LAB_00321f4c;
    }
    uVar3 = FUN_00322314(param_1);
  } while ((uVar3 & 1) != 0);
LAB_00321fc8:
  uVar4 = 0xe;
switchD_00321ffc_caseD_5b:
  return uVar4;
}


// ===== 00322184  FUN_00322184 =====

void FUN_00322184(long *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  void *__dest;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  size_t __n;
  ulong uVar6;
  undefined1 *puVar7;
  
  do {
    while( true ) {
      param_1[6] = param_1[6] + 1;
      param_1[5] = param_1[5] + 1;
      if ((char)param_1[4] == '\0') {
        pbVar2 = (byte *)*param_1;
        if (pbVar2 == (byte *)param_1[1]) {
          param_1[3] = -1;
          return;
        }
        uVar6 = (ulong)*pbVar2;
        *param_1 = (long)(pbVar2 + 1);
        param_1[3] = uVar6;
      }
      else {
        uVar6 = param_1[3];
        *(undefined1 *)(param_1 + 4) = 0;
      }
      if (uVar6 == 0xffffffffffffffff) {
        return;
      }
      puVar7 = (undefined1 *)param_1[9];
      if (puVar7 < (undefined1 *)param_1[10]) break;
      __src = (void *)param_1[8];
      __n = (long)puVar7 - (long)__src;
      uVar1 = __n + 1;
      if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00323508(param_1 + 8);
      }
      uVar4 = param_1[10] - (long)__src;
      uVar5 = uVar4 * 2;
      if (uVar5 < uVar1 || uVar5 - uVar1 == 0) {
        uVar5 = uVar1;
      }
      if (0x3ffffffffffffffe < uVar4) {
        uVar5 = 0x7fffffffffffffff;
      }
      if (uVar5 == 0) {
        __dest = (void *)0x0;
      }
      else {
        __dest = (void *)FUN_00759c3c(uVar5);
      }
      puVar7 = (undefined1 *)((long)__dest + __n) + 1;
      *(undefined1 *)((long)__dest + __n) = (char)uVar6;
      memcpy(__dest,__src,__n);
      param_1[8] = (long)__dest;
      param_1[9] = (long)puVar7;
      param_1[10] = (long)__dest + uVar5;
      if (__src != (void *)0x0) {
        free(__src);
      }
      lVar3 = param_1[3];
      param_1[9] = (long)puVar7;
      if (0xc < lVar3) goto LAB_003222c8;
LAB_00322224:
      if (lVar3 != 9) {
        if (lVar3 != 10) {
          return;
        }
        param_1[6] = 0;
        param_1[7] = param_1[7] + 1;
      }
    }
    *puVar7 = (char)uVar6;
    lVar3 = param_1[3];
    param_1[9] = (long)(puVar7 + 1);
    if (lVar3 < 0xd) goto LAB_00322224;
LAB_003222c8:
    if ((lVar3 != 0xd) && (lVar3 != 0x20)) {
      return;
    }
  } while( true );
}


// ===== 00322314  FUN_00322314 =====

undefined8 FUN_00322314(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_003233a8();
  if (lVar1 == 0x2a) {
    while( true ) {
      while (lVar1 = FUN_003233a8(param_1), lVar1 != 0x2a) {
        if (lVar1 + 1U < 2) {
          *(char **)(param_1 + 0x70) = "invalid comment; missing closing \'*/\'";
          return 0;
        }
      }
      lVar1 = FUN_003233a8(param_1);
      if (lVar1 == 0x2f) break;
      lVar1 = *(long *)(param_1 + 0x30);
      *(undefined1 *)(param_1 + 0x20) = 1;
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
      plVar2 = (long *)(param_1 + 0x30);
      if ((lVar1 != 0) ||
         (lVar1 = *(long *)(param_1 + 0x38), plVar2 = (long *)(param_1 + 0x38), lVar1 != 0)) {
        *plVar2 = lVar1 + -1;
      }
      if (*(long *)(param_1 + 0x18) != -1) {
        *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
      }
    }
  }
  else {
    if (lVar1 != 0x2f) {
      *(char **)(param_1 + 0x70) = "invalid comment; expecting \'/\' or \'*\' after \'/\'";
      return 0;
    }
    do {
      do {
        lVar1 = FUN_003233a8(param_1);
      } while (0xe < lVar1 + 1U);
    } while ((0x4803U >> (ulong)((uint)(lVar1 + 1U) & 0x1f) & 1) == 0);
  }
  return 1;
}


// ===== 00322434  FUN_00322434 =====

undefined8 FUN_00322434(long *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  byte *pbVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  void *pvVar14;
  size_t sVar15;
  ulong uVar16;
  undefined1 *puVar17;
  
  pbVar10 = (byte *)(param_1 + 0xb);
  if ((*pbVar10 & 1) == 0) {
    *(undefined2 *)(param_1 + 0xb) = 0;
  }
  else {
    *(undefined1 *)param_1[0xd] = 0;
    param_1[0xc] = 0;
  }
  plVar11 = param_1 + 8;
  puVar12 = (undefined1 *)*plVar11;
  lVar5 = param_1[3];
  param_1[9] = (long)puVar12;
  if (puVar12 < (undefined1 *)param_1[10]) {
    puVar13 = puVar12 + 1;
    *puVar12 = (char)lVar5;
  }
  else {
    uVar6 = param_1[10] - (long)puVar12;
    uVar16 = uVar6 * 2;
    if (uVar16 < 2) {
      uVar16 = 1;
    }
    if (0x3ffffffffffffffe < uVar6) {
      uVar16 = 0x7fffffffffffffff;
    }
                    /* try { // try from 003224c0 to 003224c7 has its CatchHandler @ 00322e34 */
    puVar17 = (undefined1 *)FUN_00759c3c(uVar16);
    puVar13 = puVar17 + 1;
    *puVar17 = (char)lVar5;
    param_1[8] = (long)puVar17;
    param_1[9] = (long)puVar13;
    param_1[10] = (long)(puVar17 + uVar16);
    if (puVar12 != (undefined1 *)0x0) {
      free(puVar12);
    }
  }
  param_1[9] = (long)puVar13;
LAB_00322530:
  param_1[6] = param_1[6] + 1;
  param_1[5] = param_1[5] + 1;
  if ((char)param_1[4] == '\0') {
    pbVar1 = (byte *)*param_1;
    if (pbVar1 == (byte *)param_1[1]) {
      param_1[3] = -1;
switchD_0032263c_caseD_ffffffff:
      pcVar8 = "invalid string: missing closing quote";
switchD_0032263c_caseD_1:
      param_1[0xe] = (long)pcVar8;
      return 0xe;
    }
    uVar16 = (ulong)*pbVar1;
    *param_1 = (long)(pbVar1 + 1);
    param_1[3] = uVar16;
  }
  else {
    uVar16 = param_1[3];
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (uVar16 == 0xffffffffffffffff) goto switchD_0032263c_caseD_ffffffff;
  puVar12 = (undefined1 *)param_1[9];
  if (puVar12 < (undefined1 *)param_1[10]) {
    puVar17 = puVar12 + 1;
    *puVar12 = (char)uVar16;
  }
  else {
    pvVar14 = (void *)*plVar11;
    sVar15 = (long)puVar12 - (long)pvVar14;
    uVar6 = sVar15 + 1;
    if ((long)uVar6 < 0) goto LAB_00322e08;
    uVar7 = param_1[10] - (long)pvVar14;
    uVar9 = uVar7 * 2;
    if (uVar9 < uVar6 || uVar9 - uVar6 == 0) {
      uVar9 = uVar6;
    }
    if (0x3ffffffffffffffe < uVar7) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = (void *)FUN_00759c3c(uVar9);
    }
    puVar17 = (undefined1 *)((long)pvVar4 + sVar15) + 1;
    *(undefined1 *)((long)pvVar4 + sVar15) = (char)uVar16;
    memcpy(pvVar4,pvVar14,sVar15);
    param_1[8] = (long)pvVar4;
    param_1[9] = (long)puVar17;
    param_1[10] = (long)pvVar4 + uVar9;
    if (pvVar14 != (void *)0x0) {
      free(pvVar14);
    }
  }
  uVar16 = param_1[3];
  param_1[9] = (long)puVar17;
  if (uVar16 == 10) {
    param_1[6] = 0;
    param_1[7] = param_1[7] + 1;
    pcVar8 = "invalid string: control character U+000A (LF) must be escaped to \\u000A or \\n";
    goto switchD_0032263c_caseD_1;
  }
  pcVar8 = "invalid string: control character U+0001 (SOH) must be escaped to \\u0001";
  switch(uVar16) {
  case 0:
    pcVar8 = "invalid string: control character U+0000 (NUL) must be escaped to \\u0000";
  case 1:
    goto switchD_0032263c_caseD_1;
  case 2:
    pcVar8 = "invalid string: control character U+0002 (STX) must be escaped to \\u0002";
    goto switchD_0032263c_caseD_1;
  case 3:
    pcVar8 = "invalid string: control character U+0003 (ETX) must be escaped to \\u0003";
    goto switchD_0032263c_caseD_1;
  case 4:
    pcVar8 = "invalid string: control character U+0004 (EOT) must be escaped to \\u0004";
    goto switchD_0032263c_caseD_1;
  case 5:
    pcVar8 = "invalid string: control character U+0005 (ENQ) must be escaped to \\u0005";
    goto switchD_0032263c_caseD_1;
  case 6:
    pcVar8 = "invalid string: control character U+0006 (ACK) must be escaped to \\u0006";
    goto switchD_0032263c_caseD_1;
  case 7:
    pcVar8 = "invalid string: control character U+0007 (BEL) must be escaped to \\u0007";
    goto switchD_0032263c_caseD_1;
  case 8:
    pcVar8 = "invalid string: control character U+0008 (BS) must be escaped to \\u0008 or \\b";
    goto switchD_0032263c_caseD_1;
  case 9:
    pcVar8 = "invalid string: control character U+0009 (HT) must be escaped to \\u0009 or \\t";
    goto switchD_0032263c_caseD_1;
  case 0xb:
    pcVar8 = "invalid string: control character U+000B (VT) must be escaped to \\u000B";
    goto switchD_0032263c_caseD_1;
  case 0xc:
    pcVar8 = "invalid string: control character U+000C (FF) must be escaped to \\u000C or \\f";
    goto switchD_0032263c_caseD_1;
  case 0xd:
    pcVar8 = "invalid string: control character U+000D (CR) must be escaped to \\u000D or \\r";
    goto switchD_0032263c_caseD_1;
  case 0xe:
    pcVar8 = "invalid string: control character U+000E (SO) must be escaped to \\u000E";
    goto switchD_0032263c_caseD_1;
  case 0xf:
    pcVar8 = "invalid string: control character U+000F (SI) must be escaped to \\u000F";
    goto switchD_0032263c_caseD_1;
  case 0x10:
    pcVar8 = "invalid string: control character U+0010 (DLE) must be escaped to \\u0010";
    goto switchD_0032263c_caseD_1;
  case 0x11:
    pcVar8 = "invalid string: control character U+0011 (DC1) must be escaped to \\u0011";
    goto switchD_0032263c_caseD_1;
  case 0x12:
    pcVar8 = "invalid string: control character U+0012 (DC2) must be escaped to \\u0012";
    goto switchD_0032263c_caseD_1;
  case 0x13:
    pcVar8 = "invalid string: control character U+0013 (DC3) must be escaped to \\u0013";
    goto switchD_0032263c_caseD_1;
  case 0x14:
    pcVar8 = "invalid string: control character U+0014 (DC4) must be escaped to \\u0014";
    goto switchD_0032263c_caseD_1;
  case 0x15:
    pcVar8 = "invalid string: control character U+0015 (NAK) must be escaped to \\u0015";
    goto switchD_0032263c_caseD_1;
  case 0x16:
    pcVar8 = "invalid string: control character U+0016 (SYN) must be escaped to \\u0016";
    goto switchD_0032263c_caseD_1;
  case 0x17:
    pcVar8 = "invalid string: control character U+0017 (ETB) must be escaped to \\u0017";
    goto switchD_0032263c_caseD_1;
  case 0x18:
    pcVar8 = "invalid string: control character U+0018 (CAN) must be escaped to \\u0018";
    goto switchD_0032263c_caseD_1;
  case 0x19:
    pcVar8 = "invalid string: control character U+0019 (EM) must be escaped to \\u0019";
    goto switchD_0032263c_caseD_1;
  case 0x1a:
    pcVar8 = "invalid string: control character U+001A (SUB) must be escaped to \\u001A";
    goto switchD_0032263c_caseD_1;
  case 0x1b:
    pcVar8 = "invalid string: control character U+001B (ESC) must be escaped to \\u001B";
    goto switchD_0032263c_caseD_1;
  case 0x1c:
    pcVar8 = "invalid string: control character U+001C (FS) must be escaped to \\u001C";
    goto switchD_0032263c_caseD_1;
  case 0x1d:
    pcVar8 = "invalid string: control character U+001D (GS) must be escaped to \\u001D";
    goto switchD_0032263c_caseD_1;
  case 0x1e:
    pcVar8 = "invalid string: control character U+001E (RS) must be escaped to \\u001E";
    goto switchD_0032263c_caseD_1;
  case 0x1f:
    pcVar8 = "invalid string: control character U+001F (US) must be escaped to \\u001F";
    goto switchD_0032263c_caseD_1;
  case 0x20:
  case 0x21:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
    goto switchD_0032263c_caseD_20;
  case 0x22:
    return 4;
  case 0x5c:
    lVar5 = FUN_003233a8(param_1);
    pcVar8 = "invalid string: forbidden character after backslash";
    if (lVar5 < 0x66) {
      if (lVar5 < 0x5c) {
        if (lVar5 == 0x22) {
          uVar16 = 0x22;
        }
        else {
          if (lVar5 != 0x2f) goto switchD_0032263c_caseD_1;
          uVar16 = 0x2f;
        }
      }
      else if (lVar5 == 0x5c) {
        uVar16 = 0x5c;
      }
      else {
        if (lVar5 != 0x62) goto switchD_0032263c_caseD_1;
        uVar16 = 8;
      }
    }
    else if (lVar5 < 0x72) {
      if (lVar5 == 0x66) {
        uVar16 = 0xc;
      }
      else {
        if (lVar5 != 0x6e) goto switchD_0032263c_caseD_1;
        uVar16 = 10;
      }
    }
    else if (lVar5 == 0x72) {
      uVar16 = 0xd;
    }
    else {
      if (lVar5 == 0x74) {
        uVar16 = 9;
        goto switchD_0032263c_caseD_20;
      }
      if (lVar5 != 0x75) goto switchD_0032263c_caseD_1;
      uVar2 = FUN_0032351c(param_1);
      if (uVar2 == 0xffffffff) {
LAB_00322e10:
        pcVar8 = "invalid string: \'\\u\' must be followed by 4 hex digits";
        goto switchD_0032263c_caseD_1;
      }
      uVar16 = (ulong)uVar2;
      if ((uVar2 & 0xfffffc00) == 0xd800) {
        lVar5 = FUN_003233a8(param_1);
        if ((lVar5 == 0x5c) && (lVar5 = FUN_003233a8(param_1), lVar5 == 0x75)) {
          uVar3 = FUN_0032351c(param_1);
          if (uVar3 == 0xffffffff) goto LAB_00322e10;
          if (uVar3 >> 10 == 0x37) {
            uVar16 = (ulong)(uVar3 + uVar2 * 0x400 + 0xfca02400);
            goto LAB_00322a80;
          }
        }
        pcVar8 = "invalid string: surrogate U+D800..U+DBFF must be followed by U+DC00..U+DFFF";
        goto switchD_0032263c_caseD_1;
      }
      if ((uVar2 & 0xfffffc00) == 0xdc00) {
        pcVar8 = "invalid string: surrogate U+DC00..U+DFFF must follow U+D800..U+DBFF";
        goto switchD_0032263c_caseD_1;
      }
      if (0x7f < (int)uVar2) {
        if (uVar2 < 0x800) {
          FUN_007132e8(pbVar10,uVar2 >> 6 | 0xffffffc0);
          uVar16 = (ulong)(uVar2 & 0x3f | 0xffffff80);
        }
        else {
          if (uVar2 >> 0x10 == 0) {
            FUN_007132e8(pbVar10,uVar2 >> 0xc | 0xffffffe0);
          }
          else {
LAB_00322a80:
            FUN_007132e8(pbVar10,(uint)(uVar16 >> 0x12) | 0xfffffff0);
            uVar2 = (uint)uVar16;
            FUN_007132e8(pbVar10,uVar2 >> 0xc & 0x3f | 0xffffff80);
          }
          FUN_007132e8(pbVar10,uVar2 >> 6 & 0x3f | 0xffffff80);
          uVar16 = (ulong)(uVar2 & 0x3f | 0xffffff80);
        }
      }
    }
switchD_0032263c_caseD_20:
    FUN_007132e8(pbVar10,uVar16 & 0xffffffff);
    goto LAB_00322530;
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 0xc5:
  case 0xc6:
  case 199:
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xd9:
  case 0xda:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
    FUN_007132e8(pbVar10,uVar16 & 0xffffffff);
    param_1[6] = param_1[6] + 1;
    param_1[5] = param_1[5] + 1;
    if ((char)param_1[4] == '\0') {
      pbVar1 = (byte *)*param_1;
      if (pbVar1 == (byte *)param_1[1]) {
        param_1[3] = -1;
        break;
      }
      uVar16 = (ulong)*pbVar1;
      *param_1 = (long)(pbVar1 + 1);
      param_1[3] = uVar16;
    }
    else {
      uVar16 = param_1[3];
      *(undefined1 *)(param_1 + 4) = 0;
    }
    if (uVar16 == 0xffffffffffffffff) break;
    puVar12 = (undefined1 *)param_1[9];
    if (puVar12 < (undefined1 *)param_1[10]) {
      puVar17 = puVar12 + 1;
      *puVar12 = (char)uVar16;
    }
    else {
      pvVar14 = (void *)*plVar11;
      sVar15 = (long)puVar12 - (long)pvVar14;
      uVar6 = sVar15 + 1;
      if ((long)uVar6 < 0) {
LAB_00322e08:
                    /* WARNING: Subroutine does not return */
        FUN_00323508(plVar11);
      }
      uVar7 = param_1[10] - (long)pvVar14;
      uVar9 = uVar7 * 2;
      if (uVar9 < uVar6 || uVar9 - uVar6 == 0) {
        uVar9 = uVar6;
      }
      if (0x3ffffffffffffffe < uVar7) {
        uVar9 = 0x7fffffffffffffff;
      }
      if (uVar9 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = (void *)FUN_00759c3c(uVar9);
      }
      puVar17 = (undefined1 *)((long)pvVar4 + sVar15) + 1;
      *(undefined1 *)((long)pvVar4 + sVar15) = (char)uVar16;
      memcpy(pvVar4,pvVar14,sVar15);
      param_1[8] = (long)pvVar4;
      param_1[9] = (long)puVar17;
      param_1[10] = (long)pvVar4 + uVar9;
      if (pvVar14 != (void *)0x0) {
        free(pvVar14);
      }
    }
    uVar16 = param_1[3];
    param_1[9] = (long)puVar17;
joined_r0x00322940:
    if (uVar16 == 10) {
LAB_00322c50:
      param_1[6] = 0;
      param_1[7] = param_1[7] + 1;
      break;
    }
    goto joined_r0x003229d0;
  case 0xe0:
    FUN_007132e8(pbVar10,0xe0);
    FUN_003233a8(param_1);
    uVar16 = param_1[3] - 0xc0;
    goto joined_r0x00322adc;
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xee:
  case 0xef:
    FUN_007132e8(pbVar10,uVar16 & 0xffffffff);
    param_1[6] = param_1[6] + 1;
    param_1[5] = param_1[5] + 1;
    if ((char)param_1[4] == '\0') {
      pbVar1 = (byte *)*param_1;
      if (pbVar1 == (byte *)param_1[1]) {
        param_1[3] = -1;
        break;
      }
      uVar16 = (ulong)*pbVar1;
      *param_1 = (long)(pbVar1 + 1);
      param_1[3] = uVar16;
    }
    else {
      uVar16 = param_1[3];
      *(undefined1 *)(param_1 + 4) = 0;
    }
    if (uVar16 != 0xffffffffffffffff) {
      puVar12 = (undefined1 *)param_1[9];
      if (puVar12 < (undefined1 *)param_1[10]) {
        puVar17 = puVar12 + 1;
        *puVar12 = (char)uVar16;
      }
      else {
        pvVar14 = (void *)*plVar11;
        sVar15 = (long)puVar12 - (long)pvVar14;
        uVar6 = sVar15 + 1;
        if ((long)uVar6 < 0) goto LAB_00322e08;
        uVar7 = param_1[10] - (long)pvVar14;
        uVar9 = uVar7 * 2;
        if (uVar9 < uVar6 || uVar9 - uVar6 == 0) {
          uVar9 = uVar6;
        }
        if (0x3ffffffffffffffe < uVar7) {
          uVar9 = 0x7fffffffffffffff;
        }
        if (uVar9 == 0) {
          pvVar4 = (void *)0x0;
        }
        else {
          pvVar4 = (void *)FUN_00759c3c(uVar9);
        }
        puVar17 = (undefined1 *)((long)pvVar4 + sVar15) + 1;
        *(undefined1 *)((long)pvVar4 + sVar15) = (char)uVar16;
        memcpy(pvVar4,pvVar14,sVar15);
        param_1[8] = (long)pvVar4;
        param_1[9] = (long)puVar17;
        param_1[10] = (long)pvVar4 + uVar9;
        if (pvVar14 != (void *)0x0) {
          free(pvVar14);
        }
      }
      param_1[9] = (long)puVar17;
      if (param_1[3] == 10) goto LAB_00322c50;
      if (0xffffffffffffffbf < param_1[3] - 0xc0U) {
        FUN_007132e8(pbVar10);
        param_1[6] = param_1[6] + 1;
        param_1[5] = param_1[5] + 1;
        if ((char)param_1[4] == '\0') {
          pbVar1 = (byte *)*param_1;
          if (pbVar1 == (byte *)param_1[1]) {
            param_1[3] = -1;
            break;
          }
          uVar16 = (ulong)*pbVar1;
          *param_1 = (long)(pbVar1 + 1);
          param_1[3] = uVar16;
        }
        else {
          uVar16 = param_1[3];
          *(undefined1 *)(param_1 + 4) = 0;
        }
        if (uVar16 != 0xffffffffffffffff) {
          puVar12 = (undefined1 *)param_1[9];
          if (puVar12 < (undefined1 *)param_1[10]) {
            puVar17 = puVar12 + 1;
            *puVar12 = (char)uVar16;
          }
          else {
            pvVar14 = (void *)*plVar11;
            sVar15 = (long)puVar12 - (long)pvVar14;
            uVar6 = sVar15 + 1;
            if ((long)uVar6 < 0) goto LAB_00322e08;
            uVar7 = param_1[10] - (long)pvVar14;
            uVar9 = uVar7 * 2;
            if (uVar9 < uVar6 || uVar9 - uVar6 == 0) {
              uVar9 = uVar6;
            }
            if (0x3ffffffffffffffe < uVar7) {
              uVar9 = 0x7fffffffffffffff;
            }
            if (uVar9 == 0) {
              pvVar4 = (void *)0x0;
            }
            else {
              pvVar4 = (void *)FUN_00759c3c(uVar9);
            }
            puVar17 = (undefined1 *)((long)pvVar4 + sVar15) + 1;
            *(undefined1 *)((long)pvVar4 + sVar15) = (char)uVar16;
            memcpy(pvVar4,pvVar14,sVar15);
            param_1[8] = (long)pvVar4;
            param_1[9] = (long)puVar17;
            param_1[10] = (long)pvVar4 + uVar9;
            if (pvVar14 != (void *)0x0) {
              free(pvVar14);
            }
          }
          uVar16 = param_1[3];
          param_1[9] = (long)puVar17;
          goto joined_r0x00322940;
        }
      }
    }
    break;
  case 0xed:
    FUN_007132e8(pbVar10,0xed);
    FUN_003233a8(param_1);
    uVar16 = param_1[3] - 0xa0;
joined_r0x00322adc:
    if (0xffffffffffffffdf < uVar16) {
LAB_003229b4:
      FUN_007132e8(pbVar10);
      FUN_003233a8(param_1);
      uVar16 = param_1[3];
joined_r0x003229d0:
      if (0xffffffffffffffbf < uVar16 - 0xc0) goto switchD_0032263c_caseD_20;
    }
    break;
  case 0xf0:
    FUN_007132e8(pbVar10,0xf0);
    FUN_003233a8(param_1);
    if (param_1[3] - 0xc0U < 0xffffffffffffffd0) break;
LAB_00322994:
    FUN_007132e8(pbVar10);
    FUN_003233a8(param_1);
    if (param_1[3] - 0xc0U < 0xffffffffffffffc0) break;
    goto LAB_003229b4;
  case 0xf1:
  case 0xf2:
  case 0xf3:
    FUN_007132e8(pbVar10,uVar16 & 0xffffffff);
    FUN_003233a8(param_1);
    if (0xffffffffffffffbf < param_1[3] - 0xc0U) goto LAB_00322994;
    break;
  case 0xf4:
    FUN_007132e8(pbVar10,0xf4);
    FUN_003233a8(param_1);
    if (0xffffffffffffffef < param_1[3] - 0x90U) goto LAB_00322994;
    break;
  case 0xffffffffffffffff:
    goto switchD_0032263c_caseD_ffffffff;
  }
  pcVar8 = "invalid string: ill-formed UTF-8 byte";
  goto switchD_0032263c_caseD_1;
}


// ===== 00322e38  FUN_00322e38 =====

void FUN_00322e38(long *param_1)

{
  byte *pbVar1;
  long lVar2;
  undefined8 uVar3;
  void *__dest;
  int *piVar4;
  ulonglong uVar5;
  longlong lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  long *plVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  void *__src;
  size_t __n;
  ulong uVar16;
  undefined1 *puVar17;
  double dVar18;
  int local_84;
  char *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pbVar13 = (byte *)(param_1 + 0xb);
  if ((*pbVar13 & 1) == 0) {
    *(undefined2 *)(param_1 + 0xb) = 0;
  }
  else {
    *(undefined1 *)param_1[0xd] = 0;
    param_1[0xc] = 0;
  }
  plVar11 = param_1 + 8;
  puVar14 = (undefined1 *)*plVar11;
  lVar7 = param_1[3];
  param_1[9] = (long)puVar14;
  if (puVar14 < (undefined1 *)param_1[10]) {
    puVar15 = puVar14 + 1;
    *puVar14 = (char)lVar7;
  }
  else {
    uVar8 = param_1[10] - (long)puVar14;
    uVar16 = uVar8 * 2;
    if (uVar16 < 2) {
      uVar16 = 1;
    }
    if (0x3ffffffffffffffe < uVar8) {
      uVar16 = 0x7fffffffffffffff;
    }
                    /* try { // try from 00322ed0 to 00322ed7 has its CatchHandler @ 003233a4 */
    puVar17 = (undefined1 *)FUN_00759c3c(uVar16);
    puVar15 = puVar17 + 1;
    *puVar17 = (char)lVar7;
    param_1[8] = (long)puVar17;
    param_1[9] = (long)puVar15;
    param_1[10] = (long)(puVar17 + uVar16);
    if (puVar14 != (undefined1 *)0x0) {
      free(puVar14);
    }
  }
  lVar7 = param_1[3];
  param_1[9] = (long)puVar15;
  local_84 = 5;
  if (lVar7 - 0x31U < 9) {
LAB_00322f18:
    uVar3 = FUN_007132e8(pbVar13,lVar7);
    param_1[6] = param_1[6] + 1;
    param_1[5] = param_1[5] + 1;
    if ((char)param_1[4] == '\0') goto LAB_00322f5c;
    do {
      uVar16 = param_1[3];
      *(undefined1 *)(param_1 + 4) = 0;
      while( true ) {
        if (uVar16 == 0xffffffffffffffff) goto LAB_003231d4;
        puVar14 = (undefined1 *)param_1[9];
        if (puVar14 < (undefined1 *)param_1[10]) {
          puVar17 = puVar14 + 1;
          *puVar14 = (char)uVar16;
        }
        else {
          __src = (void *)*plVar11;
          __n = (long)puVar14 - (long)__src;
          uVar8 = __n + 1;
          if ((long)uVar8 < 0) {
            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_00323508(plVar11);
            }
            goto LAB_003233a0;
          }
          uVar9 = param_1[10] - (long)__src;
          uVar12 = uVar9 * 2;
          if (uVar12 < uVar8 || uVar12 - uVar8 == 0) {
            uVar12 = uVar8;
          }
          if (0x3ffffffffffffffe < uVar9) {
            uVar12 = 0x7fffffffffffffff;
          }
          if (uVar12 == 0) {
            __dest = (void *)0x0;
          }
          else {
            __dest = (void *)FUN_00759c3c(uVar12);
          }
          puVar17 = (undefined1 *)((long)__dest + __n) + 1;
          *(undefined1 *)((long)__dest + __n) = (char)uVar16;
          memcpy(__dest,__src,__n);
          param_1[8] = (long)__dest;
          param_1[9] = (long)puVar17;
          param_1[10] = (long)__dest + uVar12;
          if (__src != (void *)0x0) {
            free(__src);
          }
        }
        lVar7 = param_1[3];
        param_1[9] = (long)puVar17;
        if (9 < lVar7 - 0x30U) {
          if (lVar7 < 0x45) {
            if (lVar7 == 10) {
              param_1[6] = 0;
              param_1[7] = param_1[7] + 1;
              goto LAB_003231d4;
            }
            if (lVar7 == 0x2e) goto LAB_00323078;
          }
          else if ((lVar7 == 0x45) || (lVar7 == 0x65)) goto LAB_00323174;
          goto LAB_003231d4;
        }
        uVar3 = FUN_007132e8(pbVar13);
        param_1[6] = param_1[6] + 1;
        param_1[5] = param_1[5] + 1;
        if ((char)param_1[4] != '\0') break;
LAB_00322f5c:
        pbVar1 = (byte *)*param_1;
        if (pbVar1 == (byte *)param_1[1]) {
          param_1[3] = -1;
          goto LAB_003231d4;
        }
        uVar16 = (ulong)*pbVar1;
        *param_1 = (long)(pbVar1 + 1);
        param_1[3] = uVar16;
      }
    } while( true );
  }
  if (lVar7 != 0x30) {
    if (lVar7 == 0x2d) {
      FUN_007132e8(pbVar13);
    }
    lVar7 = FUN_003233a8(param_1);
    if (lVar7 - 0x31U < 9) {
      lVar7 = param_1[3];
      local_84 = 6;
      goto LAB_00322f18;
    }
    if (lVar7 == 0x30) {
      local_84 = 6;
      FUN_007132e8(pbVar13,(char)param_1[3]);
      lVar7 = FUN_003233a8(param_1);
      if (lVar7 != 0x2e) goto LAB_00323160;
      goto LAB_00323078;
    }
    pcVar10 = "invalid number; expected digit after \'-\'";
LAB_0032334c:
    param_1[0xe] = (long)pcVar10;
    uVar3 = 0xe;
    goto LAB_00323354;
  }
  local_84 = 5;
  FUN_007132e8(pbVar13);
  lVar7 = FUN_003233a8(param_1);
  if (lVar7 == 0x2e) {
LAB_00323078:
    FUN_007132e8(pbVar13,(char)param_1[0x12]);
    lVar7 = FUN_003233a8(param_1);
    if (9 < lVar7 - 0x30U) {
      pcVar10 = "invalid number; expected digit after \'.\'";
      goto LAB_0032334c;
    }
    do {
      FUN_007132e8(pbVar13,(char)param_1[3]);
      lVar7 = FUN_003233a8(param_1);
    } while (lVar7 - 0x30U < 10);
    if ((lVar7 == 0x65) || (lVar7 == 0x45)) goto LAB_00323170;
LAB_003231d0:
    local_84 = 7;
  }
  else {
LAB_00323160:
    if ((lVar7 == 0x65) || (lVar7 == 0x45)) {
LAB_00323170:
      lVar7 = param_1[3];
LAB_00323174:
      FUN_007132e8(pbVar13,lVar7);
      lVar7 = FUN_003233a8(param_1);
      if (9 < lVar7 - 0x30U) {
        if ((lVar7 == 0x2d) || (lVar7 == 0x2b)) {
          FUN_007132e8(pbVar13,(char)param_1[3]);
          lVar7 = FUN_003233a8(param_1);
          if (lVar7 - 0x30U < 10) goto LAB_00323190;
          pcVar10 = "invalid number; expected digit after exponent sign";
        }
        else {
          pcVar10 = "invalid number; expected \'+\', \'-\', or digit after exponent";
        }
        goto LAB_0032334c;
      }
LAB_00323190:
      FUN_007132e8(pbVar13,(char)param_1[3]);
      lVar7 = FUN_003233a8(param_1);
      while (lVar7 - 0x30U < 10) {
        FUN_007132e8(pbVar13,(char)param_1[3]);
        lVar7 = FUN_003233a8(param_1);
      }
      goto LAB_003231d0;
    }
  }
LAB_003231d4:
  plVar11 = param_1 + 6;
  lVar7 = *plVar11;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[5] = param_1[5] + -1;
  if (lVar7 == 0) {
    plVar11 = param_1 + 7;
    lVar7 = *plVar11;
    if (lVar7 != 0) goto LAB_00323200;
  }
  else {
LAB_00323200:
    *plVar11 = lVar7 + -1;
  }
  if (param_1[3] != -1) {
    param_1[9] = param_1[9] + -1;
  }
  local_70 = (char *)0x0;
  piVar4 = (int *)__errno();
  *piVar4 = 0;
  if (local_84 == 6) {
    pcVar10 = (char *)((long)param_1 + 0x59);
    if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
      pcVar10 = (char *)param_1[0xd];
    }
    lVar6 = strtoll(pcVar10,&local_70,10);
    if (*piVar4 == 0) {
      param_1[0xf] = lVar6;
      uVar3 = 6;
      goto LAB_00323354;
    }
  }
  else if (local_84 == 5) {
    pcVar10 = (char *)((long)param_1 + 0x59);
    if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
      pcVar10 = (char *)param_1[0xd];
    }
    uVar5 = strtoull(pcVar10,&local_70,10);
    if (*piVar4 == 0) {
      param_1[0x10] = uVar5;
      uVar3 = 5;
      goto LAB_00323354;
    }
  }
  pcVar10 = (char *)((long)param_1 + 0x59);
  if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
    pcVar10 = (char *)param_1[0xd];
  }
  dVar18 = strtod(pcVar10,&local_70);
  uVar3 = 7;
  param_1[0x11] = (long)dVar18;
LAB_00323354:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_003233a0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 003233a8  FUN_003233a8 =====

long FUN_003233a8(long *param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  size_t __n;
  ulong uVar6;
  undefined1 *puVar7;
  
  param_1[6] = param_1[6] + 1;
  param_1[5] = param_1[5] + 1;
  if ((char)param_1[4] == '\0') {
    pbVar3 = (byte *)*param_1;
    if (pbVar3 == (byte *)param_1[1]) {
      param_1[3] = -1;
      return -1;
    }
    uVar6 = (ulong)*pbVar3;
    *param_1 = (long)(pbVar3 + 1);
    param_1[3] = uVar6;
  }
  else {
    uVar6 = param_1[3];
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (uVar6 == 0xffffffffffffffff) {
    return -1;
  }
  puVar2 = (undefined1 *)param_1[9];
  if (puVar2 < (undefined1 *)param_1[10]) {
    puVar7 = puVar2 + 1;
    *puVar2 = (char)uVar6;
  }
  else {
    __src = (void *)param_1[8];
    __n = (long)puVar2 - (long)__src;
    uVar1 = __n + 1;
    if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00323508(param_1 + 8);
    }
    uVar4 = param_1[10] - (long)__src;
    uVar5 = uVar4 * 2;
    if (uVar5 < uVar1 || uVar5 - uVar1 == 0) {
      uVar5 = uVar1;
    }
    if (0x3ffffffffffffffe < uVar4) {
      uVar5 = 0x7fffffffffffffff;
    }
    if (uVar5 == 0) {
      __dest = (void *)0x0;
    }
    else {
      __dest = (void *)FUN_00759c3c(uVar5);
    }
    puVar7 = (undefined1 *)((long)__dest + __n) + 1;
    *(undefined1 *)((long)__dest + __n) = (char)uVar6;
    memcpy(__dest,__src,__n);
    param_1[8] = (long)__dest;
    param_1[9] = (long)puVar7;
    param_1[10] = (long)__dest + uVar5;
    if (__src != (void *)0x0) {
      free(__src);
    }
  }
  param_1[9] = (long)puVar7;
  if (param_1[3] == 10) {
    param_1[6] = 0;
    param_1[7] = param_1[7] + 1;
  }
  return param_1[3];
}


// ===== 00323508  FUN_00323508 =====

void FUN_00323508(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 0032351c  FUN_0032351c =====

/* WARNING: Type propagation algorithm not settling */

int FUN_0032351c(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  
  FUN_003233a8();
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 - 0x30U < 10) {
    iVar4 = -0x30;
    FUN_003233a8(param_1);
    lVar5 = *(long *)(param_1 + 0x18);
  }
  else if (lVar3 - 0x41U < 6) {
    iVar4 = -0x37;
    FUN_003233a8(param_1);
    lVar5 = *(long *)(param_1 + 0x18);
  }
  else {
    if (5 < lVar3 - 0x61U) {
      return -1;
    }
    iVar4 = -0x57;
    FUN_003233a8(param_1);
    lVar5 = *(long *)(param_1 + 0x18);
  }
  if (lVar5 - 0x30U < 10) {
    iVar6 = -0x30;
    FUN_003233a8(param_1);
    lVar7 = *(long *)(param_1 + 0x18);
  }
  else if (lVar5 - 0x41U < 6) {
    iVar6 = -0x37;
    FUN_003233a8(param_1);
    lVar7 = *(long *)(param_1 + 0x18);
  }
  else {
    if (5 < lVar5 - 0x61U) {
      return -1;
    }
    iVar6 = -0x57;
    FUN_003233a8(param_1);
    lVar7 = *(long *)(param_1 + 0x18);
  }
  if (lVar7 - 0x30U < 10) {
    iVar8 = -0x30;
    FUN_003233a8(param_1);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  else if (lVar7 - 0x41U < 6) {
    iVar8 = -0x37;
    FUN_003233a8(param_1);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  else {
    if (5 < lVar7 - 0x61U) {
      return -1;
    }
    iVar8 = -0x57;
    FUN_003233a8(param_1);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  if (lVar1 - 0x30U < 10) {
    iVar2 = -0x30;
  }
  else if (lVar1 - 0x41U < 6) {
    iVar2 = -0x37;
  }
  else {
    if (5 < lVar1 - 0x61U) {
      return -1;
    }
    iVar2 = -0x57;
  }
  return iVar2 + (int)lVar1 +
         (iVar4 + (int)lVar3) * 0x1000 + (iVar6 + (int)lVar5) * 0x100 + (iVar8 + (int)lVar7) * 0x10;
}


// ===== 0032371c  FUN_0032371c =====

void FUN_0032371c(undefined8 *param_1,undefined8 param_2,long *param_3,byte param_4)

{
  long *plVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 0xb) = 0;
  puVar6 = param_1 + 1;
  param_1[2] = 0;
  *puVar6 = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  plVar1 = (long *)param_3[4];
  if (plVar1 != (long *)0x0) {
    if (plVar1 == param_3) {
      param_1[0x10] = param_1 + 0xc;
      (**(code **)(*(long *)param_3[4] + 0x18))((long *)param_3[4],param_1 + 0xc);
      goto LAB_0032379c;
    }
                    /* try { // try from 00323778 to 0032379b has its CatchHandler @ 00323840 */
    plVar1 = (long *)(**(code **)(*plVar1 + 0x10))();
  }
  param_1[0x10] = plVar1;
LAB_0032379c:
  *(undefined1 *)(param_1 + 0x13) = 9;
  uVar4 = param_1[5];
  *(byte *)(param_1 + 0x12) = param_4 & 1;
  param_1[0x14] = 0;
  if (uVar4 == param_1[6] * 0x40) {
    if ((long)(uVar4 + 1) < 0) {
      uVar2 = FUN_0032600c(param_1 + 4);
                    /* catch() { ... } // from try @ 00323778 with catch @ 00323840 */
      if ((void *)param_1[7] == (void *)0x0) {
        pvVar3 = (void *)param_1[4];
      }
      else {
        free((void *)param_1[7]);
        pvVar3 = (void *)param_1[4];
      }
      if (pvVar3 == (void *)0x0) {
        pvVar3 = (void *)*puVar6;
      }
      else {
        free(pvVar3);
        pvVar3 = (void *)*puVar6;
      }
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00755eac(uVar2);
      }
      param_1[2] = pvVar3;
      free(pvVar3);
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar2);
    }
    if (uVar4 < 0x3fffffffffffffff) {
      uVar5 = param_1[6] * 0x80;
      uVar4 = (uVar4 & 0x3fffffffffffffc0) + 0x40;
      if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
        uVar5 = uVar4;
      }
    }
    else {
      uVar5 = 0x7fffffffffffffff;
    }
                    /* try { // try from 003237f0 to 0032383f has its CatchHandler @ 00323850 */
    FUN_00325f08(param_1 + 4,uVar5);
    uVar4 = param_1[5];
  }
  param_1[5] = uVar4 + 1;
  uVar5 = uVar4 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(param_1[4] + uVar5) = *(ulong *)(param_1[4] + uVar5) | 1L << (uVar4 & 0x3f);
  return;
}


// ===== 003238dc  FUN_003238dc =====

/* WARNING: Type propagation algorithm not settling */

uint FUN_003238dc(long param_1,long param_2)

{
  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  ulong *puVar11;
  undefined8 uVar12;
  double dVar13;
  byte local_f0;
  undefined4 local_ef;
  undefined2 local_eb;
  void *local_e0;
  byte local_d8 [16];
  void *local_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  ulong local_a0;
  undefined8 uStack_98;
  void *local_90;
  void *local_88;
  ulong local_80;
  long local_78;
  undefined *local_70;
  uint local_68;
  undefined1 auStack_60 [16];
  long local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_88 = (void *)0x0;
  local_80 = 0;
  local_78 = 0;
LAB_0032391c:
  iVar6 = *(int *)(param_1 + 0x30);
  if (iVar6 < 6) {
    if (iVar6 < 3) {
      if (iVar6 == 1) {
        local_70 = (undefined *)CONCAT71(local_70._1_7_,1);
        FUN_003296d0(param_2,&local_70,0);
        goto LAB_00323aa4;
      }
      if (iVar6 == 2) {
        local_70 = (undefined *)((ulong)local_70._1_7_ << 8);
        FUN_003296d0(param_2,&local_70,0);
        goto LAB_00323aa4;
      }
LAB_00323f60:
      pbVar2 = *(byte **)(param_1 + 0x78);
      pbVar3 = *(byte **)(param_1 + 0x80);
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = (void *)0x0;
      for (; pbVar2 != pbVar3; pbVar2 = pbVar2 + 1) {
        if (*pbVar2 < 0x20) {
          local_68 = local_68 & 0xffffff00;
          local_70 = (undefined *)0x0;
                    /* try { // try from 00324050 to 0032406b has its CatchHandler @ 0032474c */
          FUN_0032a338(&local_70,*pbVar2,9);
          FUN_00713bdc(&local_a0,&local_70);
        }
        else {
                    /* try { // try from 00324028 to 0032402f has its CatchHandler @ 00324740 */
          FUN_007132e8(&local_a0);
        }
      }
      uStack_b8 = *(undefined8 *)(param_1 + 0x68);
      local_c0 = *(ulong *)(param_1 + 0x60);
      local_b0 = *(void **)(param_1 + 0x70);
      local_f0 = 10;
      local_ef = 0x756c6176;
      local_eb = 0x65;
                    /* try { // try from 00323fa0 to 00323fb3 has its CatchHandler @ 003246d0 */
      FUN_00324b5c(local_d8,param_1,0x10,&local_f0);
                    /* try { // try from 00323fb4 to 00323fcb has its CatchHandler @ 003246cc */
      FUN_003248ec(&local_70,0x65,&local_c0,local_d8,0);
      *(undefined1 *)(param_2 + 0x58) = 1;
      if (*(char *)(param_2 + 0x90) != '\0') {
LAB_00324538:
        plVar10 = (long *)FUN_00753a74(0x28);
        *plVar10 = (long)(PTR_DAT_007a12f8 + 0x10);
        *(uint *)(plVar10 + 1) = local_68;
        FUN_007127d4(plVar10 + 2,auStack_60);
        *plVar10 = (long)(PTR_DAT_007a1308 + 0x10);
        plVar10[4] = local_50;
        if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 00324594 to 003245ab has its CatchHandler @ 003246c8 */
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(plVar10,PTR_PTR_007a1310,PTR_FUN_007a12f0);
        }
        goto LAB_003247bc;
      }
LAB_00323fdc:
      local_70 = PTR_DAT_007a12f8 + 0x10;
      FUN_0073a2c4(auStack_60);
      FUN_0073a174(&local_70);
      if ((local_d8[0] & 1) != 0) {
        free(local_c8);
      }
      if ((local_f0 & 1) != 0) {
        free(local_e0);
      }
      if ((local_a0 & 1) != 0) {
        free(local_90);
      }
LAB_00324020:
      uVar8 = 0;
      goto LAB_00323c98;
    }
    if (iVar6 == 3) {
      local_70 = (undefined *)0x0;
      FUN_0032991c(param_2,&local_70,0);
    }
    else if (iVar6 == 4) {
      FUN_00329da8(param_2,param_1 + 0x90,0);
    }
    else {
      if (iVar6 != 5) goto LAB_00323f60;
      local_70 = *(undefined **)(param_1 + 0xb8);
                    /* try { // try from 00323950 to 003239cb has its CatchHandler @ 0032479c */
      FUN_0032a058(param_2,&local_70,0);
    }
  }
  else {
    if (7 < iVar6) {
      if (iVar6 < 9) {
                    /* try { // try from 00323a14 to 00323aa3 has its CatchHandler @ 0032479c */
        uVar9 = FUN_0032688c(param_2,0xffffffffffffffff);
        if ((uVar9 & 1) == 0) goto LAB_00324020;
        iVar6 = FUN_00321efc(param_1 + 0x38);
        *(int *)(param_1 + 0x30) = iVar6;
        if (iVar6 == 10) {
          uVar9 = FUN_00326be8(param_2);
          goto LAB_00323a40;
        }
        if (local_80 == local_78 * 0x40) {
          if (-1 < (long)(local_80 + 1)) {
            if (local_80 < 0x3fffffffffffffff) {
              uVar9 = local_78 * 0x80;
              uVar1 = (local_80 & 0x3fffffffffffffc0) + 0x40;
              if (uVar9 < uVar1 || uVar9 - uVar1 == 0) {
                uVar9 = uVar1;
              }
            }
            else {
              uVar9 = 0x7fffffffffffffff;
            }
                    /* try { // try from 00323c1c to 00323c23 has its CatchHandler @ 0032473c */
            FUN_00325f08(&local_88,uVar9);
            goto LAB_00323c28;
          }
          if (*(long *)(lVar4 + 0x28) != local_48) goto LAB_003247bc;
                    /* try { // try from 00324518 to 0032451f has its CatchHandler @ 00324738 */
          FUN_0032600c(&local_88);
LAB_00324520:
          if (*(long *)(lVar4 + 0x28) != local_48) goto LAB_003247bc;
                    /* try { // try from 00324530 to 00324537 has its CatchHandler @ 00324730 */
          FUN_0032600c(&local_88);
          goto LAB_00324538;
        }
LAB_00323c28:
        uVar9 = local_80 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)((long)local_88 + uVar9) =
             *(ulong *)((long)local_88 + uVar9) | 1L << (local_80 & 0x3f);
        local_80 = local_80 + 1;
        goto LAB_0032391c;
      }
      if (iVar6 == 9) {
        uVar9 = FUN_00326020(param_2,0xffffffffffffffff);
        if ((uVar9 & 1) == 0) goto LAB_00324020;
        iVar6 = FUN_00321efc(param_1 + 0x38);
        *(int *)(param_1 + 0x30) = iVar6;
        if (iVar6 == 0xb) {
          uVar9 = FUN_00326378(param_2);
LAB_00323a40:
          if ((uVar9 & 1) != 0) goto LAB_00323aa4;
          goto LAB_00324020;
        }
        if (iVar6 != 4) {
          uVar9 = *(ulong *)(param_1 + 0x60);
                    /* try { // try from 0032438c to 00324397 has its CatchHandler @ 00324604 */
          FUN_00324814(&local_a0,param_1 + 0x38);
          uStack_b8 = *(undefined8 *)(param_1 + 0x68);
          local_c0 = *(ulong *)(param_1 + 0x60);
          local_b0 = *(void **)(param_1 + 0x70);
                    /* try { // try from 003243a8 to 003243b7 has its CatchHandler @ 00324600 */
          FUN_002fd2b0(&local_f0,"object key");
                    /* try { // try from 003243b8 to 003243cb has its CatchHandler @ 003245fc */
          FUN_00324b5c(local_d8,param_1,4,&local_f0);
                    /* try { // try from 003243cc to 003243e3 has its CatchHandler @ 003245f8 */
          FUN_003248ec(&local_70,0x65,&local_c0,local_d8,0);
                    /* try { // try from 003243e4 to 003243fb has its CatchHandler @ 003245f4 */
          uVar8 = FUN_003247c0(param_2,uVar9,&local_a0,&local_70);
LAB_00324280:
          local_70 = PTR_DAT_007a12f8 + 0x10;
          FUN_0073a2c4(auStack_60);
          FUN_0073a174(&local_70);
          bVar5 = local_d8[0] & 1;
          local_d8[0] = local_f0;
          if (bVar5 != 0) {
            free(local_c8);
            local_d8[0] = local_f0;
          }
joined_r0x00324378:
          if ((local_d8[0] & 1) != 0) {
            free(local_e0);
          }
          if ((local_a0 & 1) != 0) {
            free(local_90);
          }
LAB_00323c98:
          if (local_88 != (void *)0x0) {
            free(local_88);
          }
          if (*(long *)(lVar4 + 0x28) == local_48) {
            return uVar8 & 1;
          }
LAB_003247bc:
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar9 = FUN_0032662c(param_2,param_1 + 0x90);
        if ((uVar9 & 1) == 0) goto LAB_00324020;
        iVar6 = FUN_00321efc(param_1 + 0x38);
        *(int *)(param_1 + 0x30) = iVar6;
        if (iVar6 != 0xc) {
          uVar9 = *(ulong *)(param_1 + 0x60);
                    /* try { // try from 00324408 to 00324413 has its CatchHandler @ 003245f0 */
          FUN_00324814(&local_a0,param_1 + 0x38);
          uStack_b8 = *(undefined8 *)(param_1 + 0x68);
          local_c0 = *(ulong *)(param_1 + 0x60);
          local_b0 = *(void **)(param_1 + 0x70);
                    /* try { // try from 00324424 to 00324433 has its CatchHandler @ 003245ec */
          FUN_002fd2b0(&local_f0,"object separator");
                    /* try { // try from 00324434 to 00324447 has its CatchHandler @ 003245e8 */
          FUN_00324b5c(local_d8,param_1,0xc,&local_f0);
                    /* try { // try from 00324448 to 0032445f has its CatchHandler @ 003245e4 */
          FUN_003248ec(&local_70,0x65,&local_c0,local_d8,0);
                    /* try { // try from 00324460 to 00324477 has its CatchHandler @ 003245e0 */
          uVar8 = FUN_003247c0(param_2,uVar9,&local_a0,&local_70);
          goto LAB_00324280;
        }
        if (local_80 == local_78 * 0x40) {
          if ((long)(local_80 + 1) < 0) goto LAB_00324520;
          if (local_80 < 0x3fffffffffffffff) {
            uVar9 = local_78 * 0x80;
            uVar1 = (local_80 & 0x3fffffffffffffc0) + 0x40;
            if (uVar9 < uVar1 || uVar9 - uVar1 == 0) {
              uVar9 = uVar1;
            }
          }
          else {
            uVar9 = 0x7fffffffffffffff;
          }
                    /* try { // try from 00323c54 to 00323c5b has its CatchHandler @ 00324734 */
          FUN_00325f08(&local_88,uVar9);
        }
        uVar9 = local_80 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)((long)local_88 + uVar9) =
             *(ulong *)((long)local_88 + uVar9) & (1L << (local_80 & 0x3f) ^ 0xffffffffffffffffU);
                    /* try { // try from 00323c84 to 00323c8b has its CatchHandler @ 0032479c */
        local_80 = local_80 + 1;
        uVar7 = FUN_00321efc(param_1 + 0x38);
        *(undefined4 *)(param_1 + 0x30) = uVar7;
        goto LAB_0032391c;
      }
      if (iVar6 != 0xe) {
        if (iVar6 != 0xf) goto LAB_00323f60;
        puVar11 = (ulong *)(param_1 + 0x60);
        if (*puVar11 != 1) {
          pbVar2 = *(byte **)(param_1 + 0x78);
          pbVar3 = *(byte **)(param_1 + 0x80);
          local_a0 = 0;
          uStack_98 = 0;
          local_90 = (void *)0x0;
          for (; pbVar2 != pbVar3; pbVar2 = pbVar2 + 1) {
            if (*pbVar2 < 0x20) {
              local_68 = local_68 & 0xffffff00;
              local_70 = (undefined *)0x0;
                    /* try { // try from 00323e08 to 00323e23 has its CatchHandler @ 00324750 */
              FUN_0032a338(&local_70,*pbVar2,9);
              FUN_00713bdc(&local_a0,&local_70);
            }
            else {
                    /* try { // try from 00323de0 to 00323de7 has its CatchHandler @ 00324744 */
              FUN_007132e8(&local_a0);
            }
          }
          uStack_b8 = *(undefined8 *)(param_1 + 0x68);
          local_c0 = *puVar11;
          local_b0 = *(void **)(param_1 + 0x70);
          local_f0 = 10;
          local_ef = 0x756c6176;
          local_eb = 0x65;
                    /* try { // try from 00323d30 to 00323d43 has its CatchHandler @ 003246dc */
          FUN_00324b5c(local_d8,param_1,0x10,&local_f0);
                    /* try { // try from 00323d44 to 00323d5b has its CatchHandler @ 003246d8 */
          FUN_003248ec(&local_70,0x65,&local_c0,local_d8,0);
          *(undefined1 *)(param_2 + 0x58) = 1;
          if (*(char *)(param_2 + 0x90) != '\0') {
            plVar10 = (long *)FUN_00753a74(0x28);
            *plVar10 = (long)(PTR_DAT_007a12f8 + 0x10);
            *(uint *)(plVar10 + 1) = local_68;
            FUN_007127d4(plVar10 + 2,auStack_60);
            *plVar10 = (long)(PTR_DAT_007a1308 + 0x10);
            plVar10[4] = local_50;
            if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 00323dc8 to 00323ddf has its CatchHandler @ 003246d4 */
                    /* WARNING: Subroutine does not return */
              FUN_00753c5c(plVar10,PTR_PTR_007a1310,PTR_FUN_007a12f0);
            }
            goto LAB_003247bc;
          }
          goto LAB_00323fdc;
        }
                    /* try { // try from 0032447c to 00324487 has its CatchHandler @ 003245dc */
        FUN_00324814(&local_a0,param_1 + 0x38);
        uStack_b8 = *(undefined8 *)(param_1 + 0x68);
        local_c0 = *puVar11;
        local_b0 = *(void **)(param_1 + 0x70);
                    /* try { // try from 00324498 to 003244a7 has its CatchHandler @ 003245d8 */
        FUN_002fd2b0(local_d8,
                     "attempting to parse an empty input; check that your input string or stream contains the expected JSON"
                    );
                    /* try { // try from 003244a8 to 003244bf has its CatchHandler @ 003245d4 */
        FUN_003248ec(&local_70,0x65,&local_c0,local_d8,0);
                    /* try { // try from 003244c0 to 003244d7 has its CatchHandler @ 003245ac */
        uVar8 = FUN_003247c0(param_2,1,&local_a0,&local_70);
        local_70 = PTR_DAT_007a12f8 + 0x10;
        FUN_0073a2c4(auStack_60);
        FUN_0073a174(&local_70);
        local_e0 = local_c8;
        goto joined_r0x00324378;
      }
      pbVar2 = *(byte **)(param_1 + 0x78);
      pbVar3 = *(byte **)(param_1 + 0x80);
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = (void *)0x0;
      for (; pbVar2 != pbVar3; pbVar2 = pbVar2 + 1) {
        if (*pbVar2 < 0x20) {
          local_68 = local_68 & 0xffffff00;
          local_70 = (undefined *)0x0;
                    /* try { // try from 00323f40 to 00323f5b has its CatchHandler @ 00324754 */
          FUN_0032a338(&local_70,*pbVar2,9);
          FUN_00713bdc(&local_a0,&local_70);
        }
        else {
                    /* try { // try from 00323f18 to 00323f1f has its CatchHandler @ 00324748 */
          FUN_007132e8(&local_a0);
        }
      }
      uStack_b8 = *(undefined8 *)(param_1 + 0x68);
      local_c0 = *(ulong *)(param_1 + 0x60);
      local_b0 = *(void **)(param_1 + 0x70);
      local_f0 = 10;
      local_ef = 0x756c6176;
      local_eb = 0x65;
                    /* try { // try from 00323e68 to 00323e7b has its CatchHandler @ 00324718 */
      FUN_00324b5c(local_d8,param_1,0,&local_f0);
                    /* try { // try from 00323e7c to 00323e93 has its CatchHandler @ 00324700 */
      FUN_003248ec(&local_70,0x65,&local_c0,local_d8,0);
      *(undefined1 *)(param_2 + 0x58) = 1;
      if (*(char *)(param_2 + 0x90) != '\0') {
        plVar10 = (long *)FUN_00753a74(0x28);
        *plVar10 = (long)(PTR_DAT_007a12f8 + 0x10);
        *(uint *)(plVar10 + 1) = local_68;
        FUN_007127d4(plVar10 + 2,auStack_60);
        *plVar10 = (long)(PTR_DAT_007a1308 + 0x10);
        plVar10[4] = local_50;
        if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 00323f00 to 00323f17 has its CatchHandler @ 003246e0 */
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(plVar10,PTR_PTR_007a1310,PTR_FUN_007a12f0);
        }
        goto LAB_003247bc;
      }
      goto LAB_00323fdc;
    }
    if (iVar6 != 6) {
      if (iVar6 != 7) goto LAB_00323f60;
      dVar13 = ABS((double)*(undefined **)(param_1 + 0xc0));
      if ((dVar13 < INFINITY) || (dVar13 != INFINITY && dVar13 < INFINITY == NAN(dVar13))) {
                    /* try { // try from 00323a00 to 00323a0f has its CatchHandler @ 00324794 */
        local_70 = *(undefined **)(param_1 + 0xc0);
        FUN_00329480(param_2,&local_70,0);
        goto LAB_00323aa4;
      }
      uVar12 = *(undefined8 *)(param_1 + 0x60);
                    /* try { // try from 003242dc to 003242e7 has its CatchHandler @ 00324660 */
      FUN_00324814(&local_a0,param_1 + 0x38);
                    /* try { // try from 003242e8 to 003242f3 has its CatchHandler @ 0032465c */
      FUN_00324814(local_d8,param_1 + 0x38);
      local_f0 = 0x27;
                    /* try { // try from 003242fc to 00324313 has its CatchHandler @ 00324648 */
      FUN_00326fbc(&local_c0,"number overflow parsing \'",local_d8,&local_f0);
                    /* try { // try from 00324314 to 00324327 has its CatchHandler @ 00324630 */
      FUN_00326dcc(&local_70,0x196,&local_c0,0);
                    /* try { // try from 00324328 to 0032433f has its CatchHandler @ 00324608 */
      uVar8 = FUN_00326d78(param_2,uVar12,&local_a0,&local_70);
      local_70 = PTR_DAT_007a12f8 + 0x10;
      FUN_0073a2c4(auStack_60);
      FUN_0073a174(&local_70);
      local_e0 = local_c8;
      if ((local_c0 & 1) != 0) {
        free(local_b0);
        local_e0 = local_c8;
      }
      goto joined_r0x00324378;
    }
    local_70 = *(undefined **)(param_1 + 0xb0);
    FUN_00329b60(param_2,&local_70,0);
  }
LAB_00323aa4:
  if (local_80 != 0) {
    do {
      if ((*(ulong *)((long)local_88 + (local_80 - 1 >> 3 & 0x1ffffffffffffff8)) >>
           (local_80 - 1 & 0x3f) & 1) == 0) {
        iVar6 = FUN_00321efc(param_1 + 0x38);
        *(int *)(param_1 + 0x30) = iVar6;
        if (iVar6 == 0xd) {
          iVar6 = FUN_00321efc(param_1 + 0x38);
          *(int *)(param_1 + 0x30) = iVar6;
          if (iVar6 != 4) {
            uVar9 = *(ulong *)(param_1 + 0x60);
                    /* try { // try from 00324194 to 0032419f has its CatchHandler @ 00324690 */
            FUN_00324814(&local_a0,param_1 + 0x38);
            uStack_b8 = *(undefined8 *)(param_1 + 0x68);
            local_c0 = *(ulong *)(param_1 + 0x60);
            local_b0 = *(void **)(param_1 + 0x70);
                    /* try { // try from 003241b0 to 003241bf has its CatchHandler @ 00324688 */
            FUN_002fd2b0(&local_f0,"object key");
                    /* try { // try from 003241c0 to 003241d3 has its CatchHandler @ 00324680 */
            FUN_00324b5c(local_d8,param_1,4,&local_f0);
                    /* try { // try from 003241d4 to 003241eb has its CatchHandler @ 0032467c */
            FUN_003248ec(&local_70,0x65,&local_c0,local_d8,0);
                    /* try { // try from 003241ec to 00324203 has its CatchHandler @ 00324678 */
            uVar8 = FUN_003247c0(param_2,uVar9,&local_a0,&local_70);
            goto LAB_00324280;
          }
          uVar9 = FUN_0032662c(param_2,param_1 + 0x90);
          if ((uVar9 & 1) == 0) goto LAB_00324020;
          iVar6 = FUN_00321efc(param_1 + 0x38);
          *(int *)(param_1 + 0x30) = iVar6;
          if (iVar6 == 0xc) {
            uVar7 = FUN_00321efc(param_1 + 0x38);
            *(undefined4 *)(param_1 + 0x30) = uVar7;
            goto LAB_0032391c;
          }
          uVar9 = *(ulong *)(param_1 + 0x60);
                    /* try { // try from 00324210 to 0032421b has its CatchHandler @ 00324674 */
          FUN_00324814(&local_a0,param_1 + 0x38);
          uStack_b8 = *(undefined8 *)(param_1 + 0x68);
          local_c0 = *(ulong *)(param_1 + 0x60);
          local_b0 = *(void **)(param_1 + 0x70);
                    /* try { // try from 0032422c to 0032423b has its CatchHandler @ 00324670 */
          FUN_002fd2b0(&local_f0,"object separator");
                    /* try { // try from 0032423c to 0032424f has its CatchHandler @ 0032466c */
          FUN_00324b5c(local_d8,param_1,0xc,&local_f0);
                    /* try { // try from 00324250 to 00324267 has its CatchHandler @ 00324668 */
          FUN_003248ec(&local_70,0x65,&local_c0,local_d8,0);
                    /* try { // try from 00324268 to 0032427f has its CatchHandler @ 00324664 */
          uVar8 = FUN_003247c0(param_2,uVar9,&local_a0,&local_70);
          goto LAB_00324280;
        }
        if (iVar6 != 0xb) {
          uVar9 = *(ulong *)(param_1 + 0x60);
                    /* try { // try from 00324118 to 00324123 has its CatchHandler @ 0032469c */
          FUN_00324814(&local_a0,param_1 + 0x38);
          uStack_b8 = *(undefined8 *)(param_1 + 0x68);
          local_c0 = *(ulong *)(param_1 + 0x60);
          local_b0 = *(void **)(param_1 + 0x70);
                    /* try { // try from 00324134 to 00324143 has its CatchHandler @ 00324698 */
          FUN_002fd2b0(&local_f0,"object");
                    /* try { // try from 00324144 to 00324157 has its CatchHandler @ 00324694 */
          FUN_00324b5c(local_d8,param_1,0xb,&local_f0);
                    /* try { // try from 00324158 to 0032416f has its CatchHandler @ 0032468c */
          FUN_003248ec(&local_70,0x65,&local_c0,local_d8,0);
                    /* try { // try from 00324170 to 00324187 has its CatchHandler @ 00324684 */
          uVar8 = FUN_003247c0(param_2,uVar9,&local_a0,&local_70);
          goto LAB_00324280;
        }
        uVar9 = FUN_00326378(param_2);
      }
      else {
                    /* try { // try from 00323ac8 to 00323b13 has its CatchHandler @ 00324798 */
        iVar6 = FUN_00321efc(param_1 + 0x38);
        *(int *)(param_1 + 0x30) = iVar6;
        if (iVar6 == 0xd) goto LAB_00323b2c;
        if (iVar6 != 10) {
          uVar9 = *(ulong *)(param_1 + 0x60);
                    /* try { // try from 0032409c to 003240a7 has its CatchHandler @ 003246c4 */
          FUN_00324814(&local_a0,param_1 + 0x38);
          uStack_b8 = *(undefined8 *)(param_1 + 0x68);
          local_c0 = *(ulong *)(param_1 + 0x60);
          local_b0 = *(void **)(param_1 + 0x70);
                    /* try { // try from 003240b8 to 003240c7 has its CatchHandler @ 003246c0 */
          FUN_002fd2b0(&local_f0,"array");
                    /* try { // try from 003240c8 to 003240db has its CatchHandler @ 003246bc */
          FUN_00324b5c(local_d8,param_1,10,&local_f0);
                    /* try { // try from 003240dc to 003240f3 has its CatchHandler @ 003246b8 */
          FUN_003248ec(&local_70,0x65,&local_c0,local_d8,0);
                    /* try { // try from 003240f4 to 0032410b has its CatchHandler @ 003246a0 */
          uVar8 = FUN_003247c0(param_2,uVar9,&local_a0,&local_70);
          goto LAB_00324280;
        }
        uVar9 = FUN_00326be8(param_2);
      }
      if ((uVar9 & 1) == 0) goto LAB_00324020;
      local_80 = local_80 - 1;
      if (local_80 == 0) break;
    } while( true );
  }
  uVar8 = 1;
  goto LAB_00323c98;
LAB_00323b2c:
                    /* try { // try from 00323b2c to 00323bd7 has its CatchHandler @ 0032479c */
  uVar7 = FUN_00321efc(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  goto LAB_0032391c;
}


// ===== 003247c0  FUN_003247c0 =====

undefined8 FUN_003247c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x58) = 1;
  if (*(char *)(param_1 + 0x90) == '\0') {
    return 0;
  }
  uVar1 = FUN_00753a74(0x28);
  FUN_0032a2a4(uVar1,param_4);
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(uVar1,PTR_PTR_007a1310,PTR_FUN_007a12f0);
}


// ===== 00324814  FUN_00324814 =====

void FUN_00324814(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  undefined8 local_48;
  undefined1 local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  pbVar1 = *(byte **)(param_2 + 0x40);
  pbVar2 = *(byte **)(param_2 + 0x48);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  for (; pbVar1 != pbVar2; pbVar1 = pbVar1 + 1) {
    bVar3 = *pbVar1;
    if (bVar3 < 0x20) {
      local_40 = 0;
      local_48 = 0;
                    /* try { // try from 00324898 to 003248b3 has its CatchHandler @ 003248bc */
      FUN_0032a338(&local_48,bVar3,9,param_5,bVar3);
      FUN_00713bdc(param_1,&local_48);
    }
    else {
                    /* try { // try from 00324870 to 00324877 has its CatchHandler @ 003248b8 */
      FUN_007132e8(param_1);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 003248ec  FUN_003248ec =====

/* WARNING: Type propagation algorithm not settling */

void FUN_003248ec(long *param_1,undefined4 param_2,long *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ushort local_c0 [8];
  void *local_b0;
  byte local_a8;
  undefined7 local_a7;
  undefined4 uStack_a0;
  undefined1 local_9c;
  void *local_98;
  byte local_90 [16];
  void *local_80;
  byte local_78;
  undefined1 auStack_77 [15];
  undefined1 *local_68;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_a8 = 0x16;
  local_9c = 0;
  local_a7 = (undefined7)s_parse_error_001e0411._0_8_;
  uStack_a0 = CONCAT31(0x726f72,SUB81(s_parse_error_001e0411._0_8_,7));
  local_c0[0] = CONCAT11(local_c0[0]._1_1_,0x2e);
                    /* try { // try from 00324950 to 00324957 has its CatchHandler @ 00324b2c */
  FUN_00714798(local_60);
                    /* try { // try from 00324958 to 0032497b has its CatchHandler @ 00324b14 */
  FUN_00312cb0(local_90,"[json.exception.",&local_a8,local_c0,local_60,&DAT_001e03c5);
  if ((local_60[0] & 1) != 0) {
    free(local_50);
  }
                    /* try { // try from 0032498c to 00324997 has its CatchHandler @ 00324b00 */
  FUN_0032a56c(local_60,param_3);
  local_c0[0] = 0;
                    /* try { // try from 0032499c to 003249c3 has its CatchHandler @ 00324abc */
  FUN_0032a3dc(&local_78,local_90,"parse error",local_60,&DAT_001f2fbc,local_c0,param_4);
  if ((local_c0[0] & 1) != 0) {
    free(local_b0);
  }
  if ((local_60[0] & 1) != 0) {
    free(local_50);
  }
  if ((local_90[0] & 1) != 0) {
    free(local_80);
  }
  if ((local_a8 & 1) != 0) {
    free(local_98);
  }
  puVar3 = PTR_DAT_007a12f8;
  lVar4 = *param_3;
  *(undefined4 *)(param_1 + 1) = param_2;
  puVar1 = local_68;
  if ((local_78 & 1) == 0) {
    puVar1 = auStack_77;
  }
  *param_1 = (long)(puVar3 + 0x10);
                    /* try { // try from 00324a18 to 00324a1f has its CatchHandler @ 00324aa0 */
  FUN_0071274c(param_1 + 2,puVar1);
  param_1[4] = lVar4;
  *param_1 = (long)&PTR_FUN_00760668;
  if ((local_78 & 1) != 0) {
    free(local_68);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00324b5c  FUN_00324b5c =====

void FUN_00324b5c(undefined1 *param_1,long param_2,uint param_3,byte *param_4)

{
  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong local_68;
  void *local_60;
  undefined8 local_58;
  undefined1 local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  uVar8 = CONCAT35(s_syntax_error_001eaa15._5_3_,s_syntax_error_001eaa15._0_5_);
  uVar9 = CONCAT53(s_syntax_error_001eaa15._8_5_,s_syntax_error_001eaa15._5_3_);
  *param_1 = 0x1a;
  bVar5 = *param_4;
  uVar11 = *(ulong *)(param_4 + 8);
  *(undefined8 *)(param_1 + 1) = uVar8;
  *(undefined8 *)(param_1 + 6) = uVar9;
  param_1[0xe] = 0;
  uVar1 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar1 = uVar11;
  }
  if (uVar1 != 0) {
    local_70 = 0;
    local_68 = 0;
    local_60 = (void *)0x0;
                    /* try { // try from 00324bd4 to 00324c1f has its CatchHandler @ 00324ecc */
    FUN_00712ea8(&local_70,uVar1 + 0xf);
    FUN_00713bdc(&local_70,"while parsing ");
    uVar1 = *(ulong *)(param_4 + 8);
    pbVar2 = *(byte **)(param_4 + 0x10);
    if ((*param_4 & 1) == 0) {
      pbVar2 = param_4 + 1;
      uVar1 = (ulong)(*param_4 >> 1);
    }
    FUN_0071302c(&local_70,pbVar2,uVar1);
    FUN_007132e8(&local_70,0x20);
    uVar1 = local_68;
    pvVar7 = local_60;
    if ((local_70 & 1) == 0) {
      uVar1 = local_70 >> 1 & 0x7f;
      pvVar7 = (void *)((long)&local_70 + 1);
    }
                    /* try { // try from 00324c38 to 00324c3f has its CatchHandler @ 00324eb8 */
    FUN_0071302c(param_1,pvVar7,uVar1);
    if ((local_70 & 1) != 0) {
      free(local_60);
    }
  }
                    /* try { // try from 00324c50 to 00324c5f has its CatchHandler @ 00324ebc */
  FUN_00713bdc(param_1,&DAT_001f5400);
  uVar4 = *(uint *)(param_2 + 0x30);
  if (uVar4 == 0xe) {
    uStack_78 = *(undefined8 *)(param_2 + 0xa8);
    pbVar2 = *(byte **)(param_2 + 0x78);
    pbVar3 = *(byte **)(param_2 + 0x80);
    local_90 = 0;
    uStack_88 = 0;
    local_80 = (void *)0x0;
    for (; pbVar2 != pbVar3; pbVar2 = pbVar2 + 1) {
      if (*pbVar2 < 0x20) {
        local_50 = 0;
        local_58 = 0;
                    /* try { // try from 00324d14 to 00324d2f has its CatchHandler @ 00324ee4 */
        FUN_0032a338(&local_58,*pbVar2,9);
        FUN_00713bdc(&local_90,&local_58);
      }
      else {
                    /* try { // try from 00324cec to 00324cf3 has its CatchHandler @ 00324ee0 */
        FUN_007132e8(&local_90);
      }
    }
    uVar1 = (ulong)local_58 >> 8;
    local_58 = CONCAT71((int7)uVar1,0x27);
                    /* try { // try from 00324c8c to 00324cab has its CatchHandler @ 00324eac */
    FUN_0032a7a4(&local_70,&uStack_78,"; last read: \'",&local_90,&local_58);
    uVar1 = local_68;
    pvVar7 = local_60;
    if ((local_70 & 1) == 0) {
      uVar1 = local_70 >> 1 & 0x7f;
      pvVar7 = (void *)((long)&local_70 + 1);
    }
                    /* try { // try from 00324cc4 to 00324ccb has its CatchHandler @ 00324e94 */
    FUN_0071302c(param_1,pvVar7,uVar1);
    pvVar7 = local_80;
    uVar1 = local_90;
    if ((local_70 & 1) != 0) {
      free(local_60);
      pvVar7 = local_80;
      uVar1 = local_90;
    }
  }
  else {
    if (uVar4 < 0x11) {
      pcVar12 = &DAT_00201088 + *(int *)(&DAT_00201088 + (ulong)uVar4 * 4);
    }
    else {
      pcVar12 = "unknown token";
    }
    local_70 = 0;
    local_68 = 0;
    local_60 = (void *)0x0;
    lVar10 = __strlen_chk(pcVar12,0x17);
                    /* try { // try from 00324d70 to 00324d9b has its CatchHandler @ 00324ec4 */
    FUN_00712ea8(&local_70,lVar10 + 0xb);
    FUN_00713bdc(&local_70,"unexpected ");
    FUN_00713bdc(&local_70,pcVar12);
    uVar1 = local_68;
    pvVar7 = local_60;
    if ((local_70 & 1) == 0) {
      uVar1 = local_70 >> 1 & 0x7f;
      pvVar7 = (void *)((long)&local_70 + 1);
    }
                    /* try { // try from 00324db4 to 00324dbb has its CatchHandler @ 00324eb0 */
    FUN_0071302c(param_1,pvVar7,uVar1);
    pvVar7 = local_60;
    uVar1 = local_70;
  }
  if ((uVar1 & 1) != 0) {
    free(pvVar7);
  }
  if (param_3 != 0) {
    if (param_3 < 0x11) {
      pcVar12 = &UNK_002010cc + *(int *)(&DAT_002010c8 + (long)(int)param_3 * 4);
    }
    else {
      pcVar12 = "unknown token";
    }
    local_70 = 0;
    local_68 = 0;
    local_60 = (void *)0x0;
    lVar10 = __strlen_chk(pcVar12,0x17);
                    /* try { // try from 00324e10 to 00324e3b has its CatchHandler @ 00324ec8 */
    FUN_00712ea8(&local_70,lVar10 + 0xb);
    FUN_00713bdc(&local_70,"; expected ");
    FUN_00713bdc(&local_70,pcVar12);
    uVar1 = local_68;
    pvVar7 = local_60;
    if ((local_70 & 1) == 0) {
      uVar1 = local_70 >> 1 & 0x7f;
      pvVar7 = (void *)((long)&local_70 + 1);
    }
                    /* try { // try from 00324e54 to 00324e5b has its CatchHandler @ 00324eb4 */
    FUN_0071302c(param_1,pvVar7,uVar1);
    if ((local_70 & 1) != 0) {
      free(local_60);
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00324f24  FUN_00324f24 =====

void FUN_00324f24(long param_1)

{
  long *plVar1;
  long *plVar2;
  void *__ptr;
  long lVar3;
  
                    /* try { // try from 00324f38 to 00324f3f has its CatchHandler @ 00324fac */
  FUN_00313038(param_1 + 0xa0,*(undefined1 *)(param_1 + 0x98));
  plVar1 = *(long **)(param_1 + 0x80);
  plVar2 = (long *)(param_1 + 0x60);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00324f70;
    lVar3 = 0x28;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_00324f70:
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    free(*(void **)(param_1 + 0x38));
  }
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    free(*(void **)(param_1 + 0x20));
  }
  __ptr = *(void **)(param_1 + 8);
  if (__ptr != (void *)0x0) {
    *(void **)(param_1 + 0x10) = __ptr;
    free(__ptr);
    return;
  }
  return;
}


// ===== 00324fb0  FUN_00324fb0 =====

/* WARNING: Type propagation algorithm not settling */

uint FUN_00324fb0(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  byte bVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  ulong *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  double dVar16;
  byte local_100;
  undefined4 local_ff;
  undefined2 local_fb;
  void *local_f0;
  byte local_e8 [16];
  void *local_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  void *local_c0;
  ulong local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  void *local_98;
  ulong local_90;
  long local_88;
  undefined *local_80;
  uint local_78;
  undefined1 auStack_70 [16];
  long local_60;
  long local_58;
  
  puVar7 = PTR_DAT_007a10e8;
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  puVar1 = (undefined *)(param_1 + 0x90);
  local_90 = 0;
  local_98 = (void *)0x0;
  local_88 = 0;
LAB_00325004:
  iVar8 = *(int *)(param_1 + 0x30);
  if (iVar8 < 6) {
    if (iVar8 < 3) {
      if (iVar8 == 1) {
        local_80 = (undefined *)CONCAT71(local_80._1_7_,1);
        FUN_0032b318(param_2,&local_80);
        goto LAB_003251e0;
      }
      if (iVar8 == 2) {
        local_80 = (undefined *)((ulong)local_80._1_7_ << 8);
        FUN_0032b318(param_2,&local_80);
        goto LAB_003251e0;
      }
LAB_00325654:
      pbVar3 = *(byte **)(param_1 + 0x78);
      pbVar4 = *(byte **)(param_1 + 0x80);
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = (void *)0x0;
      for (; pbVar3 != pbVar4; pbVar3 = pbVar3 + 1) {
        if (*pbVar3 < 0x20) {
          local_78 = local_78 & 0xffffff00;
          local_80 = (undefined *)0x0;
                    /* try { // try from 00325744 to 0032575f has its CatchHandler @ 00325e40 */
          FUN_0032a338(&local_80,*pbVar3,9);
          FUN_00713bdc(&local_b0,&local_80);
        }
        else {
                    /* try { // try from 0032571c to 00325723 has its CatchHandler @ 00325e34 */
          FUN_007132e8(&local_b0);
        }
      }
      uStack_c8 = *(undefined8 *)(param_1 + 0x68);
      local_d0 = *(ulong *)(param_1 + 0x60);
      local_c0 = *(void **)(param_1 + 0x70);
      local_100 = 10;
      local_ff = 0x756c6176;
      local_fb = 0x65;
                    /* try { // try from 00325694 to 003256a7 has its CatchHandler @ 00325dc4 */
      FUN_00324b5c(local_e8,param_1,0x10,&local_100);
                    /* try { // try from 003256a8 to 003256bf has its CatchHandler @ 00325dc0 */
      FUN_003248ec(&local_80,0x65,&local_d0,local_e8,0);
      *(undefined1 *)(param_2 + 0x28) = 1;
      if (*(char *)(param_2 + 0x29) != '\0') {
LAB_00325c2c:
        plVar12 = (long *)FUN_00753a74(0x28);
        *plVar12 = (long)(PTR_DAT_007a12f8 + 0x10);
        *(uint *)(plVar12 + 1) = local_78;
        FUN_007127d4(plVar12 + 2,auStack_70);
        *plVar12 = (long)(PTR_DAT_007a1308 + 0x10);
        plVar12[4] = local_60;
        if (*(long *)(lVar5 + 0x28) == local_58) {
                    /* try { // try from 00325c88 to 00325c9f has its CatchHandler @ 00325dbc */
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(plVar12,PTR_PTR_007a1310,PTR_FUN_007a12f0);
        }
        goto LAB_00325eb0;
      }
LAB_003256d0:
      local_80 = PTR_DAT_007a12f8 + 0x10;
      FUN_0073a2c4(auStack_70);
      FUN_0073a174(&local_80);
      if ((local_e8[0] & 1) != 0) {
        free(local_d8);
      }
      if ((local_100 & 1) != 0) {
        free(local_f0);
      }
      if ((local_b0 & 1) != 0) {
        free(local_a0);
      }
LAB_00325714:
      uVar10 = 0;
      goto LAB_00325388;
    }
    if (iVar8 == 3) {
      local_80 = (undefined *)0x0;
      FUN_0032b56c(param_2,&local_80);
    }
    else if (iVar8 == 4) {
      FUN_0032b9f0(param_2,puVar1);
    }
    else {
      if (iVar8 != 5) goto LAB_00325654;
      local_80 = *(undefined **)(param_1 + 0xb8);
                    /* try { // try from 00325038 to 0032511b has its CatchHandler @ 00325e90 */
      FUN_0032be8c(param_2,&local_80);
    }
  }
  else {
    if (7 < iVar8) {
      if (iVar8 < 9) {
                    /* try { // try from 00325160 to 003251df has its CatchHandler @ 00325e90 */
        uVar14 = FUN_0032aaec(param_2,0xffffffffffffffff);
        if ((uVar14 & 1) == 0) goto LAB_00325714;
        iVar8 = FUN_00321efc(param_1 + 0x38);
        *(int *)(param_1 + 0x30) = iVar8;
        if (iVar8 == 10) goto LAB_00325184;
        if (local_90 == local_88 * 0x40) {
          if (-1 < (long)(local_90 + 1)) {
            if (local_90 < 0x3fffffffffffffff) {
              uVar14 = local_88 * 0x80;
              uVar2 = (local_90 & 0x3fffffffffffffc0) + 0x40;
              if (uVar14 < uVar2 || uVar14 - uVar2 == 0) {
                uVar14 = uVar2;
              }
            }
            else {
              uVar14 = 0x7fffffffffffffff;
            }
                    /* try { // try from 0032530c to 00325313 has its CatchHandler @ 00325e30 */
            FUN_00325f08(&local_98,uVar14);
            goto LAB_00325318;
          }
          if (*(long *)(lVar5 + 0x28) != local_58) goto LAB_00325eb0;
                    /* try { // try from 00325c0c to 00325c13 has its CatchHandler @ 00325e2c */
          FUN_0032600c(&local_98);
LAB_00325c14:
          if (*(long *)(lVar5 + 0x28) != local_58) goto LAB_00325eb0;
                    /* try { // try from 00325c24 to 00325c2b has its CatchHandler @ 00325e24 */
          FUN_0032600c(&local_98);
          goto LAB_00325c2c;
        }
LAB_00325318:
        uVar14 = local_90 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)((long)local_98 + uVar14) =
             *(ulong *)((long)local_98 + uVar14) | 1L << (local_90 & 0x3f);
        local_90 = local_90 + 1;
        goto LAB_00325004;
      }
      if (iVar8 == 9) {
        uVar14 = FUN_0032a884(param_2,0xffffffffffffffff);
        if ((uVar14 & 1) == 0) goto LAB_00325714;
        iVar8 = FUN_00321efc(param_1 + 0x38);
        *(int *)(param_1 + 0x30) = iVar8;
        if (iVar8 == 0xb) {
LAB_00325184:
          *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -8;
          goto LAB_003251e0;
        }
        if (iVar8 != 4) {
          uVar14 = *(ulong *)(param_1 + 0x60);
                    /* try { // try from 00325a80 to 00325a8b has its CatchHandler @ 00325cf8 */
          FUN_00324814(&local_b0,param_1 + 0x38);
          uStack_c8 = *(undefined8 *)(param_1 + 0x68);
          local_d0 = *(ulong *)(param_1 + 0x60);
          local_c0 = *(void **)(param_1 + 0x70);
                    /* try { // try from 00325a9c to 00325aab has its CatchHandler @ 00325cf4 */
          FUN_002fd2b0(&local_100,"object key");
                    /* try { // try from 00325aac to 00325abf has its CatchHandler @ 00325cf0 */
          FUN_00324b5c(local_e8,param_1,4,&local_100);
                    /* try { // try from 00325ac0 to 00325ad7 has its CatchHandler @ 00325cec */
          FUN_003248ec(&local_80,0x65,&local_d0,local_e8,0);
                    /* try { // try from 00325ad8 to 00325aef has its CatchHandler @ 00325ce8 */
          uVar10 = FUN_00325eb4(param_2,uVar14,&local_b0,&local_80);
LAB_00325974:
          local_80 = PTR_DAT_007a12f8 + 0x10;
          FUN_0073a2c4(auStack_70);
          FUN_0073a174(&local_80);
          bVar6 = local_e8[0] & 1;
          local_e8[0] = local_100;
          if (bVar6 != 0) {
            free(local_d8);
            local_e8[0] = local_100;
          }
joined_r0x00325a6c:
          if ((local_e8[0] & 1) != 0) {
            free(local_f0);
          }
          if ((local_b0 & 1) != 0) {
            free(local_a0);
          }
LAB_00325388:
          if (local_98 != (void *)0x0) {
            free(local_98);
          }
          if (*(long *)(lVar5 + 0x28) == local_58) {
            return uVar10 & 1;
          }
LAB_00325eb0:
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        local_80 = puVar1;
        lVar11 = FUN_0032919c(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 8),puVar1,
                              puVar7,&local_80,&local_b0);
        *(long *)(param_2 + 0x20) = lVar11 + 0x38;
        iVar8 = FUN_00321efc(param_1 + 0x38);
        *(int *)(param_1 + 0x30) = iVar8;
        if (iVar8 != 0xc) {
          uVar14 = *(ulong *)(param_1 + 0x60);
                    /* try { // try from 00325afc to 00325b07 has its CatchHandler @ 00325ce4 */
          FUN_00324814(&local_b0,param_1 + 0x38);
          uStack_c8 = *(undefined8 *)(param_1 + 0x68);
          local_d0 = *(ulong *)(param_1 + 0x60);
          local_c0 = *(void **)(param_1 + 0x70);
                    /* try { // try from 00325b18 to 00325b27 has its CatchHandler @ 00325ce0 */
          FUN_002fd2b0(&local_100,"object separator");
                    /* try { // try from 00325b28 to 00325b3b has its CatchHandler @ 00325cdc */
          FUN_00324b5c(local_e8,param_1,0xc,&local_100);
                    /* try { // try from 00325b3c to 00325b53 has its CatchHandler @ 00325cd8 */
          FUN_003248ec(&local_80,0x65,&local_d0,local_e8,0);
                    /* try { // try from 00325b54 to 00325b6b has its CatchHandler @ 00325cd4 */
          uVar10 = FUN_00325eb4(param_2,uVar14,&local_b0,&local_80);
          goto LAB_00325974;
        }
        if (local_90 == local_88 * 0x40) {
          if ((long)(local_90 + 1) < 0) goto LAB_00325c14;
          if (local_90 < 0x3fffffffffffffff) {
            uVar14 = local_88 * 0x80;
            uVar2 = (local_90 & 0x3fffffffffffffc0) + 0x40;
            if (uVar14 < uVar2 || uVar14 - uVar2 == 0) {
              uVar14 = uVar2;
            }
          }
          else {
            uVar14 = 0x7fffffffffffffff;
          }
                    /* try { // try from 00325344 to 0032534b has its CatchHandler @ 00325e28 */
          FUN_00325f08(&local_98,uVar14);
        }
        uVar14 = local_90 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)((long)local_98 + uVar14) =
             *(ulong *)((long)local_98 + uVar14) & (1L << (local_90 & 0x3f) ^ 0xffffffffffffffffU);
                    /* try { // try from 00325374 to 0032537b has its CatchHandler @ 00325e90 */
        local_90 = local_90 + 1;
        uVar9 = FUN_00321efc(param_1 + 0x38);
        *(undefined4 *)(param_1 + 0x30) = uVar9;
        goto LAB_00325004;
      }
      if (iVar8 != 0xe) {
        if (iVar8 != 0xf) goto LAB_00325654;
        puVar13 = (ulong *)(param_1 + 0x60);
        if (*puVar13 != 1) {
          pbVar3 = *(byte **)(param_1 + 0x78);
          pbVar4 = *(byte **)(param_1 + 0x80);
          local_b0 = 0;
          uStack_a8 = 0;
          local_a0 = (void *)0x0;
          for (; pbVar3 != pbVar4; pbVar3 = pbVar3 + 1) {
            if (*pbVar3 < 0x20) {
              local_78 = local_78 & 0xffffff00;
              local_80 = (undefined *)0x0;
                    /* try { // try from 003254fc to 00325517 has its CatchHandler @ 00325e44 */
              FUN_0032a338(&local_80,*pbVar3,9);
              FUN_00713bdc(&local_b0,&local_80);
            }
            else {
                    /* try { // try from 003254d4 to 003254db has its CatchHandler @ 00325e38 */
              FUN_007132e8(&local_b0);
            }
          }
          uStack_c8 = *(undefined8 *)(param_1 + 0x68);
          local_d0 = *puVar13;
          local_c0 = *(void **)(param_1 + 0x70);
          local_100 = 10;
          local_ff = 0x756c6176;
          local_fb = 0x65;
                    /* try { // try from 00325424 to 00325437 has its CatchHandler @ 00325dd0 */
          FUN_00324b5c(local_e8,param_1,0x10,&local_100);
                    /* try { // try from 00325438 to 0032544f has its CatchHandler @ 00325dcc */
          FUN_003248ec(&local_80,0x65,&local_d0,local_e8,0);
          *(undefined1 *)(param_2 + 0x28) = 1;
          if (*(char *)(param_2 + 0x29) != '\0') {
            plVar12 = (long *)FUN_00753a74(0x28);
            *plVar12 = (long)(PTR_DAT_007a12f8 + 0x10);
            *(uint *)(plVar12 + 1) = local_78;
            FUN_007127d4(plVar12 + 2,auStack_70);
            *plVar12 = (long)(PTR_DAT_007a1308 + 0x10);
            plVar12[4] = local_60;
            if (*(long *)(lVar5 + 0x28) == local_58) {
                    /* try { // try from 003254bc to 003254d3 has its CatchHandler @ 00325dc8 */
                    /* WARNING: Subroutine does not return */
              FUN_00753c5c(plVar12,PTR_PTR_007a1310,PTR_FUN_007a12f0);
            }
            goto LAB_00325eb0;
          }
          goto LAB_003256d0;
        }
                    /* try { // try from 00325b70 to 00325b7b has its CatchHandler @ 00325cd0 */
        FUN_00324814(&local_b0,param_1 + 0x38);
        uStack_c8 = *(undefined8 *)(param_1 + 0x68);
        local_d0 = *puVar13;
        local_c0 = *(void **)(param_1 + 0x70);
                    /* try { // try from 00325b8c to 00325b9b has its CatchHandler @ 00325ccc */
        FUN_002fd2b0(local_e8,
                     "attempting to parse an empty input; check that your input string or stream contains the expected JSON"
                    );
                    /* try { // try from 00325b9c to 00325bb3 has its CatchHandler @ 00325cc8 */
        FUN_003248ec(&local_80,0x65,&local_d0,local_e8,0);
                    /* try { // try from 00325bb4 to 00325bcb has its CatchHandler @ 00325ca0 */
        uVar10 = FUN_00325eb4(param_2,1,&local_b0,&local_80);
        local_80 = PTR_DAT_007a12f8 + 0x10;
        FUN_0073a2c4(auStack_70);
        FUN_0073a174(&local_80);
        local_f0 = local_d8;
        goto joined_r0x00325a6c;
      }
      pbVar3 = *(byte **)(param_1 + 0x78);
      pbVar4 = *(byte **)(param_1 + 0x80);
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = (void *)0x0;
      for (; pbVar3 != pbVar4; pbVar3 = pbVar3 + 1) {
        if (*pbVar3 < 0x20) {
          local_78 = local_78 & 0xffffff00;
          local_80 = (undefined *)0x0;
                    /* try { // try from 00325634 to 0032564f has its CatchHandler @ 00325e48 */
          FUN_0032a338(&local_80,*pbVar3,9);
          FUN_00713bdc(&local_b0,&local_80);
        }
        else {
                    /* try { // try from 0032560c to 00325613 has its CatchHandler @ 00325e3c */
          FUN_007132e8(&local_b0);
        }
      }
      uStack_c8 = *(undefined8 *)(param_1 + 0x68);
      local_d0 = *(ulong *)(param_1 + 0x60);
      local_c0 = *(void **)(param_1 + 0x70);
      local_100 = 10;
      local_ff = 0x756c6176;
      local_fb = 0x65;
                    /* try { // try from 0032555c to 0032556f has its CatchHandler @ 00325e0c */
      FUN_00324b5c(local_e8,param_1,0,&local_100);
                    /* try { // try from 00325570 to 00325587 has its CatchHandler @ 00325df4 */
      FUN_003248ec(&local_80,0x65,&local_d0,local_e8,0);
      *(undefined1 *)(param_2 + 0x28) = 1;
      if (*(char *)(param_2 + 0x29) != '\0') {
        plVar12 = (long *)FUN_00753a74(0x28);
        *plVar12 = (long)(PTR_DAT_007a12f8 + 0x10);
        *(uint *)(plVar12 + 1) = local_78;
        FUN_007127d4(plVar12 + 2,auStack_70);
        *plVar12 = (long)(PTR_DAT_007a1308 + 0x10);
        plVar12[4] = local_60;
        if (*(long *)(lVar5 + 0x28) == local_58) {
                    /* try { // try from 003255f4 to 0032560b has its CatchHandler @ 00325dd4 */
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(plVar12,PTR_PTR_007a1310,PTR_FUN_007a12f0);
        }
        goto LAB_00325eb0;
      }
      goto LAB_003256d0;
    }
    if (iVar8 != 6) {
      if (iVar8 != 7) goto LAB_00325654;
      dVar16 = ABS((double)*(undefined **)(param_1 + 0xc0));
      if ((dVar16 < INFINITY) || (dVar16 != INFINITY && dVar16 < INFINITY == NAN(dVar16))) {
                    /* try { // try from 00325150 to 0032515b has its CatchHandler @ 00325e88 */
        local_80 = *(undefined **)(param_1 + 0xc0);
        FUN_0032b0c0(param_2,&local_80);
        goto LAB_003251e0;
      }
      uVar15 = *(undefined8 *)(param_1 + 0x60);
                    /* try { // try from 003259d0 to 003259db has its CatchHandler @ 00325d54 */
      FUN_00324814(&local_b0,param_1 + 0x38);
                    /* try { // try from 003259dc to 003259e7 has its CatchHandler @ 00325d50 */
      FUN_00324814(local_e8,param_1 + 0x38);
      local_100 = 0x27;
                    /* try { // try from 003259f0 to 00325a07 has its CatchHandler @ 00325d3c */
      FUN_00326fbc(&local_d0,"number overflow parsing \'",local_e8,&local_100);
                    /* try { // try from 00325a08 to 00325a1b has its CatchHandler @ 00325d24 */
      FUN_00326dcc(&local_80,0x196,&local_d0,0);
                    /* try { // try from 00325a1c to 00325a33 has its CatchHandler @ 00325cfc */
      uVar10 = FUN_0032ad54(param_2,uVar15,&local_b0,&local_80);
      local_80 = PTR_DAT_007a12f8 + 0x10;
      FUN_0073a2c4(auStack_70);
      FUN_0073a174(&local_80);
      local_f0 = local_d8;
      if ((local_d0 & 1) != 0) {
        free(local_c0);
        local_f0 = local_d8;
      }
      goto joined_r0x00325a6c;
    }
    local_80 = *(undefined **)(param_1 + 0xb0);
    FUN_0032b79c(param_2,&local_80);
  }
LAB_003251e0:
  if (local_90 != 0) {
    do {
      if ((*(ulong *)((long)local_98 + (local_90 - 1 >> 3 & 0x1ffffffffffffff8)) >>
           (local_90 - 1 & 0x3f) & 1) == 0) {
        iVar8 = FUN_00321efc(param_1 + 0x38);
        *(int *)(param_1 + 0x30) = iVar8;
        if (iVar8 == 0xd) {
          iVar8 = FUN_00321efc(param_1 + 0x38);
          *(int *)(param_1 + 0x30) = iVar8;
          if (iVar8 != 4) {
            uVar14 = *(ulong *)(param_1 + 0x60);
                    /* try { // try from 00325888 to 00325893 has its CatchHandler @ 00325d84 */
            FUN_00324814(&local_b0,param_1 + 0x38);
            uStack_c8 = *(undefined8 *)(param_1 + 0x68);
            local_d0 = *(ulong *)(param_1 + 0x60);
            local_c0 = *(void **)(param_1 + 0x70);
                    /* try { // try from 003258a4 to 003258b3 has its CatchHandler @ 00325d7c */
            FUN_002fd2b0(&local_100,"object key");
                    /* try { // try from 003258b4 to 003258c7 has its CatchHandler @ 00325d74 */
            FUN_00324b5c(local_e8,param_1,4,&local_100);
                    /* try { // try from 003258c8 to 003258df has its CatchHandler @ 00325d70 */
            FUN_003248ec(&local_80,0x65,&local_d0,local_e8,0);
                    /* try { // try from 003258e0 to 003258f7 has its CatchHandler @ 00325d6c */
            uVar10 = FUN_00325eb4(param_2,uVar14,&local_b0,&local_80);
            goto LAB_00325974;
          }
          local_80 = puVar1;
          lVar11 = FUN_0032919c(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 8),
                                puVar1,puVar7,&local_80,&local_b0);
          *(long *)(param_2 + 0x20) = lVar11 + 0x38;
          iVar8 = FUN_00321efc(param_1 + 0x38);
          *(int *)(param_1 + 0x30) = iVar8;
          if (iVar8 == 0xc) {
            uVar9 = FUN_00321efc(param_1 + 0x38);
            *(undefined4 *)(param_1 + 0x30) = uVar9;
            goto LAB_00325004;
          }
          uVar14 = *(ulong *)(param_1 + 0x60);
                    /* try { // try from 00325904 to 0032590f has its CatchHandler @ 00325d68 */
          FUN_00324814(&local_b0,param_1 + 0x38);
          uStack_c8 = *(undefined8 *)(param_1 + 0x68);
          local_d0 = *(ulong *)(param_1 + 0x60);
          local_c0 = *(void **)(param_1 + 0x70);
                    /* try { // try from 00325920 to 0032592f has its CatchHandler @ 00325d64 */
          FUN_002fd2b0(&local_100,"object separator");
                    /* try { // try from 00325930 to 00325943 has its CatchHandler @ 00325d60 */
          FUN_00324b5c(local_e8,param_1,0xc,&local_100);
                    /* try { // try from 00325944 to 0032595b has its CatchHandler @ 00325d5c */
          FUN_003248ec(&local_80,0x65,&local_d0,local_e8,0);
                    /* try { // try from 0032595c to 00325973 has its CatchHandler @ 00325d58 */
          uVar10 = FUN_00325eb4(param_2,uVar14,&local_b0,&local_80);
          goto LAB_00325974;
        }
        if (iVar8 != 0xb) {
          uVar14 = *(ulong *)(param_1 + 0x60);
                    /* try { // try from 0032580c to 00325817 has its CatchHandler @ 00325d90 */
          FUN_00324814(&local_b0,param_1 + 0x38);
          uStack_c8 = *(undefined8 *)(param_1 + 0x68);
          local_d0 = *(ulong *)(param_1 + 0x60);
          local_c0 = *(void **)(param_1 + 0x70);
                    /* try { // try from 00325828 to 00325837 has its CatchHandler @ 00325d8c */
          FUN_002fd2b0(&local_100,"object");
                    /* try { // try from 00325838 to 0032584b has its CatchHandler @ 00325d88 */
          FUN_00324b5c(local_e8,param_1,0xb,&local_100);
                    /* try { // try from 0032584c to 00325863 has its CatchHandler @ 00325d80 */
          FUN_003248ec(&local_80,0x65,&local_d0,local_e8,0);
                    /* try { // try from 00325864 to 0032587b has its CatchHandler @ 00325d78 */
          uVar10 = FUN_00325eb4(param_2,uVar14,&local_b0,&local_80);
          goto LAB_00325974;
        }
      }
      else {
                    /* try { // try from 00325204 to 0032522b has its CatchHandler @ 00325e8c */
        iVar8 = FUN_00321efc(param_1 + 0x38);
        *(int *)(param_1 + 0x30) = iVar8;
        if (iVar8 == 0xd) goto LAB_00325260;
        if (iVar8 != 10) {
          uVar14 = *(ulong *)(param_1 + 0x60);
                    /* try { // try from 00325790 to 0032579b has its CatchHandler @ 00325db8 */
          FUN_00324814(&local_b0,param_1 + 0x38);
          uStack_c8 = *(undefined8 *)(param_1 + 0x68);
          local_d0 = *(ulong *)(param_1 + 0x60);
          local_c0 = *(void **)(param_1 + 0x70);
                    /* try { // try from 003257ac to 003257bb has its CatchHandler @ 00325db4 */
          FUN_002fd2b0(&local_100,"array");
                    /* try { // try from 003257bc to 003257cf has its CatchHandler @ 00325db0 */
          FUN_00324b5c(local_e8,param_1,10,&local_100);
                    /* try { // try from 003257d0 to 003257e7 has its CatchHandler @ 00325dac */
          FUN_003248ec(&local_80,0x65,&local_d0,local_e8,0);
                    /* try { // try from 003257e8 to 003257ff has its CatchHandler @ 00325d94 */
          uVar10 = FUN_00325eb4(param_2,uVar14,&local_b0,&local_80);
          goto LAB_00325974;
        }
      }
      local_90 = local_90 - 1;
      *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -8;
      if (local_90 == 0) break;
    } while( true );
  }
  uVar10 = 1;
  goto LAB_00325388;
LAB_00325260:
                    /* try { // try from 00325260 to 003252cb has its CatchHandler @ 00325e90 */
  uVar9 = FUN_00321efc(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x30) = uVar9;
  goto LAB_00325004;
}


// ===== 00325eb4  FUN_00325eb4 =====

undefined8 FUN_00325eb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (*(char *)(param_1 + 0x29) == '\0') {
    return 0;
  }
  uVar1 = FUN_00753a74(0x28);
  FUN_0032a2a4(uVar1,param_4);
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(uVar1,PTR_PTR_007a1310,PTR_FUN_007a12f0);
}


// ===== 00325f08  FUN_00325f08 =====

void FUN_00325f08(long *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *__ptr;
  int iVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  
  if ((ulong)(param_1[2] * 0x40) < param_2) {
    if ((long)param_2 < 0) {
      FUN_0032600c(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_002f9e60("vector");
    }
    lVar1 = (param_2 - 1 >> 6) + 1;
    puVar4 = (ulong *)FUN_00759c3c(lVar1 * 8);
    uVar9 = param_1[1];
    __ptr = (ulong *)*param_1;
    uVar6 = 0;
    if (0x40 < uVar9) {
      uVar6 = uVar9 - 1 >> 6;
    }
    puVar4[uVar6] = 0;
    if ((0x3f < uVar9) || ((uVar9 & 0x3f) != 0)) {
      uVar6 = 0;
      uVar8 = 0;
      puVar10 = puVar4;
      puVar11 = __ptr;
      do {
        uVar12 = 1L << (uVar6 & 0x3f);
        if ((*puVar11 >> (uVar8 & 0x3f) & 1) == 0) {
          uVar12 = *puVar10 & (uVar12 ^ 0xffffffffffffffff);
        }
        else {
          uVar12 = *puVar10 | uVar12;
        }
        iVar7 = (int)uVar8;
        *puVar10 = uVar12;
        uVar2 = 0;
        if (iVar7 != 0x3f) {
          uVar2 = iVar7 + 1;
        }
        uVar8 = (ulong)uVar2;
        iVar5 = (int)uVar6;
        puVar11 = puVar11 + (iVar7 == 0x3f);
        uVar3 = 0;
        if (iVar5 != 0x3f) {
          uVar3 = iVar5 + 1;
        }
        uVar6 = (ulong)uVar3;
        puVar10 = puVar10 + (iVar5 == 0x3f);
      } while ((uVar2 != ((uint)uVar9 & 0x3f)) || (puVar11 != __ptr + (uVar9 >> 6)));
    }
    *param_1 = (long)puVar4;
    param_1[2] = lVar1;
    if (__ptr != (ulong *)0x0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0032600c  FUN_0032600c =====

void FUN_0032600c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 00326020  FUN_00326020 =====

undefined8 FUN_00326020(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  void *__dest;
  undefined8 uVar6;
  undefined8 extraout_x1;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  void *__src;
  undefined8 *puVar12;
  undefined1 local_98 [24];
  undefined4 local_80 [6];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  plVar11 = (long *)(param_1 + 8);
  plVar4 = *(long **)(param_1 + 0x80);
  local_98[0] = 0;
  local_80[0] = (undefined4)((ulong)(*(long *)(param_1 + 0x10) - *plVar11) >> 3);
  if (plVar4 == (long *)0x0) {
    if (*(long *)(lVar3 + 0x28) != local_68) goto LAB_00326374;
    FUN_0030be88();
LAB_003262c0:
    if (*(long *)(lVar3 + 0x28) != local_68) goto LAB_00326374;
    FUN_0032600c(param_1 + 0x20);
LAB_003262d8:
    if (*(long *)(lVar3 + 0x28) != local_68) goto LAB_00326374;
    FUN_00327678(plVar11);
LAB_003262f0:
    if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
  }
  else {
    uVar5 = (**(code **)(*plVar4 + 0x30))(plVar4,local_80,local_98,param_1 + 0x98);
    uVar7 = *(ulong *)(param_1 + 0x28);
    if (uVar7 == *(long *)(param_1 + 0x30) * 0x40) {
      if ((long)(uVar7 + 1) < 0) goto LAB_003262c0;
      if (uVar7 < 0x3fffffffffffffff) {
        uVar8 = *(long *)(param_1 + 0x30) * 0x80;
        uVar7 = (uVar7 & 0x3fffffffffffffc0) + 0x40;
        if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
          uVar8 = uVar7;
        }
      }
      else {
        uVar8 = 0x7fffffffffffffff;
      }
      FUN_00325f08(param_1 + 0x20,uVar8);
      uVar7 = *(ulong *)(param_1 + 0x28);
    }
    lVar9 = *(long *)(param_1 + 0x20);
    uVar10 = uVar7 >> 6;
    uVar8 = 1L << (uVar7 & 0x3f);
    *(ulong *)(param_1 + 0x28) = uVar7 + 1;
    if ((uVar5 & 1) == 0) {
      uVar8 = *(ulong *)(lVar9 + uVar10 * 8) & (uVar8 ^ 0xffffffffffffffff);
    }
    else {
      uVar8 = *(ulong *)(lVar9 + uVar10 * 8) | uVar8;
    }
    *(ulong *)(lVar9 + uVar10 * 8) = uVar8;
    local_80[0] = CONCAT31(local_80[0]._1_3_,1);
    FUN_00327070(param_1,local_80,1);
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if (puVar2 < *(undefined8 **)(param_1 + 0x18)) {
      puVar12 = puVar2 + 1;
      *puVar2 = extraout_x1;
    }
    else {
      __src = (void *)*plVar11;
      lVar9 = (long)puVar2 - (long)__src >> 3;
      uVar7 = lVar9 + 1;
      if (uVar7 >> 0x3d != 0) goto LAB_003262d8;
      uVar8 = (long)*(undefined8 **)(param_1 + 0x18) - (long)__src;
      uVar5 = (long)uVar8 >> 2;
      if (uVar5 <= uVar7) {
        uVar5 = uVar7;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar5 = 0x1fffffffffffffff;
      }
      if (uVar5 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar5 >> 0x3d != 0) goto LAB_003262f0;
        __dest = (void *)FUN_00759c3c(uVar5 << 3);
      }
      puVar1 = (undefined8 *)((long)__dest + lVar9 * 8);
      puVar12 = puVar1 + 1;
      *puVar1 = extraout_x1;
      memcpy(__dest,__src,(long)puVar2 - (long)__src);
      *(void **)(param_1 + 8) = __dest;
      *(undefined8 **)(param_1 + 0x10) = puVar12;
      *(void **)(param_1 + 0x18) = (void *)((long)__dest + uVar5 * 8);
      if (__src != (void *)0x0) {
        free(__src);
      }
    }
    *(undefined8 **)(param_1 + 0x10) = puVar12;
    if ((param_2 != 0xffffffffffffffff) && ((byte *)puVar12[-1] != (byte *)0x0)) {
      uVar7 = (ulong)*(byte *)puVar12[-1];
      if (uVar7 < 3) {
        uVar7 = *(ulong *)(&DAT_00201110 + uVar7 * 8);
      }
      else {
        uVar7 = 1;
      }
      if (uVar7 < param_2) {
        uVar6 = FUN_00753a74(0x20);
                    /* try { // try from 00326244 to 0032624f has its CatchHandler @ 00326350 */
        FUN_00714ba0(local_98,param_2);
                    /* try { // try from 00326250 to 00326263 has its CatchHandler @ 00326338 */
        FUN_003274b0(local_80,"excessive object size: ",local_98);
                    /* try { // try from 00326270 to 003262ab has its CatchHandler @ 00326304 */
        FUN_003272c0(uVar6,0x198,local_80,*(undefined8 *)(*(long *)(param_1 + 0x10) + -8));
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar6,PTR_PTR_007a1318,PTR_FUN_007a12f0);
        }
        goto LAB_00326374;
      }
    }
    if (*(long *)(lVar3 + 0x28) == local_68) {
      return 1;
    }
  }
LAB_00326374:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00326378  FUN_00326378 =====

undefined8 FUN_00326378(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  long *plVar7;
  ulong uVar8;
  char *pcVar9;
  undefined1 *puVar10;
  long lVar11;
  byte *pbVar12;
  undefined8 uVar13;
  byte *local_b8;
  long *local_b0;
  long lStack_a8;
  long local_a0;
  char *local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  byte *local_78;
  long *local_70;
  long lStack_68;
  long local_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (*(long *)(*(long *)(param_1 + 0x10) + -8) != 0) {
    plVar7 = *(long **)(param_1 + 0x80);
    local_98 = (char *)CONCAT71(local_98._1_7_,1);
    local_78 = (byte *)CONCAT44(local_78._4_4_,
                                (int)((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) >>
                                     3) + -1);
    if (plVar7 == (long *)0x0) {
      if (*(long *)(lVar4 + 0x28) == local_48) {
        FUN_0030be88();
      }
      goto LAB_00326624;
    }
    uVar8 = (**(code **)(*plVar7 + 0x30))(plVar7,&local_78,&local_98);
    if ((uVar8 & 1) == 0) {
      FUN_0032768c(local_58,param_1 + 0x98);
      puVar10 = *(undefined1 **)(*(long *)(param_1 + 0x10) + -8);
      uVar2 = *puVar10;
      *puVar10 = local_58[0];
      uVar13 = *(undefined8 *)(puVar10 + 8);
      *(undefined8 *)(puVar10 + 8) = local_50;
                    /* try { // try from 00326420 to 00326427 has its CatchHandler @ 00326628 */
      local_58[0] = uVar2;
      local_50 = uVar13;
      FUN_00313038(&local_50);
    }
  }
  lVar1 = *(long *)(param_1 + 0x10);
  lVar11 = lVar1 + -8;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  *(long *)(param_1 + 0x10) = lVar11;
  if ((*(long *)(param_1 + 8) != lVar11) &&
     (pbVar12 = *(byte **)(lVar1 + -0x10), pbVar12 != (byte *)0x0)) {
    bVar3 = *pbVar12;
    if (bVar3 - 1 < 2) {
      local_70 = (long *)0x0;
      lStack_68 = 0;
      local_60 = -0x8000000000000000;
      local_78 = pbVar12;
      if (bVar3 == 2) {
        lStack_68 = **(long **)(pbVar12 + 8);
      }
      else if (bVar3 == 1) {
        local_70 = (long *)**(long **)(pbVar12 + 8);
      }
      else {
        local_60 = 0;
      }
      while( true ) {
        local_98 = *(char **)(lVar11 + -8);
        local_90 = 0;
        local_88 = 0;
        local_80 = 0x8000000000000000;
        if (*local_98 == '\x02') {
          local_88 = *(undefined8 *)(*(long *)(local_98 + 8) + 8);
          uVar8 = FUN_0032875c(&local_78,&local_98);
        }
        else if (*local_98 == '\x01') {
          local_90 = *(long *)(local_98 + 8) + 8;
          uVar8 = FUN_0032875c(&local_78,&local_98);
        }
        else {
          local_80 = 1;
          uVar8 = FUN_0032875c(&local_78,&local_98);
        }
        if ((uVar8 & 1) != 0) goto LAB_003265e4;
        pcVar9 = (char *)FUN_003279ac(&local_78);
        if (*pcVar9 == '\t') break;
        if (*local_78 == 2) {
          lStack_68 = lStack_68 + 0x10;
          lVar11 = *(long *)(param_1 + 0x10);
        }
        else if (*local_78 == 1) {
          plVar7 = local_70;
          plVar5 = (long *)local_70[1];
          if ((long *)local_70[1] == (long *)0x0) {
            do {
              local_70 = (long *)plVar7[2];
              bVar6 = (long *)*local_70 != plVar7;
              plVar7 = local_70;
            } while (bVar6);
          }
          else {
            do {
              local_70 = plVar5;
              plVar5 = (long *)*local_70;
            } while ((long *)*local_70 != (long *)0x0);
          }
          lVar11 = *(long *)(param_1 + 0x10);
        }
        else {
          local_60 = local_60 + 1;
          lVar11 = *(long *)(param_1 + 0x10);
        }
      }
      local_b8 = local_78;
      lStack_a8 = lStack_68;
      local_b0 = local_70;
      local_a0 = local_60;
      FUN_00327ad8(&local_98,*(undefined8 *)(*(long *)(param_1 + 0x10) + -8),&local_b8);
    }
  }
LAB_003265e4:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return 1;
  }
LAB_00326624:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032662c  FUN_0032662c =====

undefined8 FUN_0032662c(long param_1,byte *param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 local_68 [8];
  undefined8 local_60;
  ulong local_58;
  undefined8 *local_50;
  undefined1 local_44 [4];
  byte *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_50 = (undefined8 *)0x0;
  local_58 = 3;
                    /* try { // try from 00326660 to 00326667 has its CatchHandler @ 00326854 */
  puVar3 = (undefined8 *)FUN_00759c3c(0x18);
  if ((*param_2 & 1) == 0) {
    uVar12 = *(undefined8 *)param_2;
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    puVar3[1] = *(undefined8 *)(param_2 + 8);
    *puVar3 = uVar12;
    puVar3[2] = uVar7;
  }
  else {
                    /* try { // try from 0032668c to 00326693 has its CatchHandler @ 00326840 */
    FUN_002fb36c(puVar3,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
  }
  plVar4 = *(long **)(param_1 + 0x80);
  local_44[0] = 4;
  local_40 = (byte *)CONCAT44(local_40._4_4_,
                              (int)((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) >> 3
                                   ));
  local_50 = puVar3;
  if (plVar4 == (long *)0x0) {
    if (*(long *)(lVar2 + 0x28) != local_38) goto LAB_00326888;
                    /* try { // try from 00326810 to 0032682b has its CatchHandler @ 00326864 */
    FUN_0030be88();
LAB_00326814:
    if (*(long *)(lVar2 + 0x28) == local_38) {
      FUN_0032600c(param_1 + 0x38);
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 003267b0 with catch @ 0032682c
                        */
      FUN_002fb198();
    }
  }
  else {
                    /* try { // try from 003266c0 to 0032675f has its CatchHandler @ 00326864 */
    uVar5 = (**(code **)(*plVar4 + 0x30))(plVar4,&local_40,local_44,&local_58);
    uVar8 = *(ulong *)(param_1 + 0x40);
    if (uVar8 == *(long *)(param_1 + 0x48) * 0x40) {
      if ((long)(uVar8 + 1) < 0) goto LAB_00326814;
      if (uVar8 < 0x3fffffffffffffff) {
        uVar9 = *(long *)(param_1 + 0x48) * 0x80;
        uVar8 = (uVar8 & 0x3fffffffffffffc0) + 0x40;
        if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
          uVar9 = uVar8;
        }
      }
      else {
        uVar9 = 0x7fffffffffffffff;
      }
      FUN_00325f08(param_1 + 0x38,uVar9);
      uVar8 = *(ulong *)(param_1 + 0x40);
    }
    lVar10 = *(long *)(param_1 + 0x38);
    uVar9 = 1L << (uVar8 & 0x3f);
    *(ulong *)(param_1 + 0x40) = uVar8 + 1;
    lVar11 = (uVar8 >> 6) * 8;
    if ((uVar5 & 1) == 0) {
      *(ulong *)(lVar10 + lVar11) = *(ulong *)(lVar10 + lVar11) & (uVar9 ^ 0xffffffffffffffff);
    }
    else {
      *(ulong *)(lVar10 + lVar11) = *(ulong *)(lVar10 + lVar11) | uVar9;
      if (*(long *)(*(long *)(param_1 + 0x10) + -8) != 0) {
        FUN_0032768c(local_68,param_1 + 0x98);
                    /* try { // try from 00326770 to 00326787 has its CatchHandler @ 00326830 */
        local_40 = param_2;
        lVar10 = FUN_0032919c(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + -8) + 8),param_2
                              ,PTR_DAT_007a10e8,&local_40,local_44);
        puVar6 = (undefined1 *)(lVar10 + 0x38);
        uVar1 = *puVar6;
        *puVar6 = local_68[0];
        uVar7 = *(undefined8 *)(lVar10 + 0x40);
        *(undefined8 *)(lVar10 + 0x40) = local_60;
        *(undefined1 **)(param_1 + 0x50) = puVar6;
                    /* try { // try from 003267b0 to 003267b7 has its CatchHandler @ 0032682c */
        local_68[0] = uVar1;
        local_60 = uVar7;
        FUN_00313038(&local_60);
      }
    }
                    /* try { // try from 003267d0 to 003267d7 has its CatchHandler @ 00326850 */
    FUN_00313038(&local_50,local_58 & 0xff);
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return 1;
    }
  }
LAB_00326888:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032688c  FUN_0032688c =====

undefined8 FUN_0032688c(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  void *__dest;
  undefined8 uVar6;
  undefined8 extraout_x1;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  void *__src;
  undefined8 *puVar12;
  undefined1 local_98 [24];
  undefined4 local_80 [6];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  plVar11 = (long *)(param_1 + 8);
  plVar4 = *(long **)(param_1 + 0x80);
  local_98[0] = 2;
  local_80[0] = (undefined4)((ulong)(*(long *)(param_1 + 0x10) - *plVar11) >> 3);
  if (plVar4 == (long *)0x0) {
    if (*(long *)(lVar3 + 0x28) != local_68) goto LAB_00326be4;
    FUN_0030be88();
LAB_00326b30:
    if (*(long *)(lVar3 + 0x28) != local_68) goto LAB_00326be4;
    FUN_0032600c(param_1 + 0x20);
LAB_00326b48:
    if (*(long *)(lVar3 + 0x28) != local_68) goto LAB_00326be4;
    FUN_00327678(plVar11);
LAB_00326b60:
    if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
  }
  else {
    uVar5 = (**(code **)(*plVar4 + 0x30))(plVar4,local_80,local_98,param_1 + 0x98);
    uVar7 = *(ulong *)(param_1 + 0x28);
    if (uVar7 == *(long *)(param_1 + 0x30) * 0x40) {
      if ((long)(uVar7 + 1) < 0) goto LAB_00326b30;
      if (uVar7 < 0x3fffffffffffffff) {
        uVar8 = *(long *)(param_1 + 0x30) * 0x80;
        uVar7 = (uVar7 & 0x3fffffffffffffc0) + 0x40;
        if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
          uVar8 = uVar7;
        }
      }
      else {
        uVar8 = 0x7fffffffffffffff;
      }
      FUN_00325f08(param_1 + 0x20,uVar8);
      uVar7 = *(ulong *)(param_1 + 0x28);
    }
    lVar9 = *(long *)(param_1 + 0x20);
    uVar10 = uVar7 >> 6;
    uVar8 = 1L << (uVar7 & 0x3f);
    *(ulong *)(param_1 + 0x28) = uVar7 + 1;
    if ((uVar5 & 1) == 0) {
      uVar8 = *(ulong *)(lVar9 + uVar10 * 8) & (uVar8 ^ 0xffffffffffffffff);
    }
    else {
      uVar8 = *(ulong *)(lVar9 + uVar10 * 8) | uVar8;
    }
    *(ulong *)(lVar9 + uVar10 * 8) = uVar8;
    local_80[0] = CONCAT31(local_80[0]._1_3_,2);
    FUN_00327070(param_1,local_80,1);
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if (puVar2 < *(undefined8 **)(param_1 + 0x18)) {
      puVar12 = puVar2 + 1;
      *puVar2 = extraout_x1;
    }
    else {
      __src = (void *)*plVar11;
      lVar9 = (long)puVar2 - (long)__src >> 3;
      uVar7 = lVar9 + 1;
      if (uVar7 >> 0x3d != 0) goto LAB_00326b48;
      uVar8 = (long)*(undefined8 **)(param_1 + 0x18) - (long)__src;
      uVar5 = (long)uVar8 >> 2;
      if (uVar5 <= uVar7) {
        uVar5 = uVar7;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar5 = 0x1fffffffffffffff;
      }
      if (uVar5 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar5 >> 0x3d != 0) goto LAB_00326b60;
        __dest = (void *)FUN_00759c3c(uVar5 << 3);
      }
      puVar1 = (undefined8 *)((long)__dest + lVar9 * 8);
      puVar12 = puVar1 + 1;
      *puVar1 = extraout_x1;
      memcpy(__dest,__src,(long)puVar2 - (long)__src);
      *(void **)(param_1 + 8) = __dest;
      *(undefined8 **)(param_1 + 0x10) = puVar12;
      *(void **)(param_1 + 0x18) = (void *)((long)__dest + uVar5 * 8);
      if (__src != (void *)0x0) {
        free(__src);
      }
    }
    *(undefined8 **)(param_1 + 0x10) = puVar12;
    if ((param_2 != 0xffffffffffffffff) && ((byte *)puVar12[-1] != (byte *)0x0)) {
      uVar7 = (ulong)*(byte *)puVar12[-1];
      if (uVar7 < 3) {
        uVar7 = *(ulong *)(&DAT_00201110 + uVar7 * 8);
      }
      else {
        uVar7 = 1;
      }
      if (uVar7 < param_2) {
        uVar6 = FUN_00753a74(0x20);
                    /* try { // try from 00326ab4 to 00326abf has its CatchHandler @ 00326bc0 */
        FUN_00714ba0(local_98,param_2);
                    /* try { // try from 00326ac0 to 00326ad3 has its CatchHandler @ 00326ba8 */
        FUN_00329394(local_80,"excessive array size: ",local_98);
                    /* try { // try from 00326ae0 to 00326b1b has its CatchHandler @ 00326b74 */
        FUN_003272c0(uVar6,0x198,local_80,*(undefined8 *)(*(long *)(param_1 + 0x10) + -8));
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar6,PTR_PTR_007a1318,PTR_FUN_007a12f0);
        }
        goto LAB_00326be4;
      }
    }
    if (*(long *)(lVar3 + 0x28) == local_68) {
      return 1;
    }
  }
LAB_00326be4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00326be8  FUN_00326be8 =====

undefined8 FUN_00326be8(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 *puVar6;
  char *pcVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined1 local_40 [4];
  int local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  plVar5 = (long *)(*(long *)(param_1 + 0x10) + -8);
  if (*plVar5 == 0) {
    *(long **)(param_1 + 0x10) = plVar5;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  }
  else {
    plVar5 = *(long **)(param_1 + 0x80);
    local_40[0] = 3;
    local_3c = (int)((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) >> 3) + -1;
    if (plVar5 == (long *)0x0) {
      if (*(long *)(lVar3 + 0x28) == local_38) {
        FUN_0030be88();
      }
      goto LAB_00326d6c;
    }
    uVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,&local_3c,local_40);
    if ((uVar4 & 1) == 0) {
      FUN_0032768c(local_50,param_1 + 0x98);
      puVar6 = *(undefined1 **)(*(long *)(param_1 + 0x10) + -8);
      uVar2 = *puVar6;
      *puVar6 = local_50[0];
      uVar9 = *(undefined8 *)(puVar6 + 8);
      *(undefined8 *)(puVar6 + 8) = local_48;
                    /* try { // try from 00326cc0 to 00326cc7 has its CatchHandler @ 00326d70 */
      local_50[0] = uVar2;
      local_48 = uVar9;
      FUN_00313038(&local_48);
      lVar8 = *(long *)(param_1 + 0x10);
      lVar10 = lVar8 + -8;
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
      *(long *)(param_1 + 0x10) = lVar10;
      if ((*(long *)(param_1 + 8) != lVar10) &&
         (pcVar7 = *(char **)(lVar8 + -0x10), *pcVar7 == '\x02')) {
        lVar10 = *(long *)(pcVar7 + 8);
        lVar11 = *(long *)(lVar10 + 8);
        for (lVar8 = 0; lVar8 != -0x10; lVar8 = lVar8 + -0x10) {
          lVar1 = lVar11 + lVar8;
                    /* try { // try from 00326d1c to 00326d1f has its CatchHandler @ 00326d74 */
          FUN_00313038(lVar1 + -8,*(undefined1 *)(lVar1 + -0x10));
        }
        *(long *)(lVar10 + 8) = lVar11 + -0x10;
      }
    }
    else {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return 1;
  }
LAB_00326d6c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00326d78  FUN_00326d78 =====

undefined8 FUN_00326d78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x58) = 1;
  if (*(char *)(param_1 + 0x90) == '\0') {
    return 0;
  }
  uVar1 = FUN_00753a74(0x20);
  FUN_00329434(uVar1,param_4);
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(uVar1,PTR_PTR_007a1318,PTR_FUN_007a12f0);
}


// ===== 00326dcc  FUN_00326dcc =====

void FUN_00326dcc(long *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  byte local_a0;
  char local_9f [8];
  undefined4 local_97;
  undefined1 local_93;
  void *local_90;
  byte local_88 [16];
  void *local_78;
  byte local_70;
  undefined1 auStack_6f [15];
  undefined1 *local_60;
  ushort local_58 [8];
  void *local_48;
  undefined1 local_3c [4];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_a0 = 0x18;
  local_93 = 0;
  local_97 = 0x65676e61;
  local_9f = (char  [8])s_out_of_range_001ec99d._0_8_;
  local_3c[0] = 0x2e;
                    /* try { // try from 00326e28 to 00326e2f has its CatchHandler @ 00326f8c */
  FUN_00714798(local_58);
                    /* try { // try from 00326e30 to 00326e53 has its CatchHandler @ 00326f74 */
  FUN_00312cb0(local_88,"[json.exception.",&local_a0,local_3c,local_58,&DAT_001e03c5);
  if (((byte)local_58[0] & 1) != 0) {
    free(local_48);
  }
  local_58[0] = 0;
                    /* try { // try from 00326e68 to 00326e7b has its CatchHandler @ 00326f50 */
  FUN_00312bb0(&local_70,local_88,local_58,param_3);
  if ((local_58[0] & 1) != 0) {
    free(local_48);
  }
  if ((local_88[0] & 1) != 0) {
    free(local_78);
  }
  if ((local_a0 & 1) != 0) {
    free(local_90);
  }
  puVar3 = PTR_DAT_007a12f8;
  *(undefined4 *)(param_1 + 1) = param_2;
  puVar1 = local_60;
  if ((local_70 & 1) == 0) {
    puVar1 = auStack_6f;
  }
  *param_1 = (long)(puVar3 + 0x10);
                    /* try { // try from 00326ec4 to 00326ecb has its CatchHandler @ 00326f34 */
  FUN_0071274c(param_1 + 2,puVar1);
  *param_1 = (long)&PTR_FUN_00760310;
  if ((local_70 & 1) != 0) {
    free(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00326fbc  FUN_00326fbc =====

void FUN_00326fbc(undefined8 *param_1,char *param_2,byte *param_3,undefined1 *param_4)

{
  ulong uVar1;
  byte *pbVar2;
  size_t sVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  sVar3 = strlen(param_2);
  uVar1 = (ulong)(*param_3 >> 1);
  if ((*param_3 & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
  }
                    /* try { // try from 00327000 to 00327043 has its CatchHandler @ 00327054 */
  FUN_00712ea8(param_1,sVar3 + uVar1 + 1);
  FUN_00713bdc(param_1,param_2);
  uVar1 = *(ulong *)(param_3 + 8);
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
    uVar1 = (ulong)(*param_3 >> 1);
  }
  FUN_0071302c(param_1,pbVar2,uVar1);
  FUN_007132e8(param_1,*param_4);
  return;
}


// ===== 00327070  FUN_00327070 =====

undefined1  [16] FUN_00327070(long *param_1,undefined1 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 uStack_48;
  undefined1 local_40 [4];
  undefined4 local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((*(ulong *)(param_1[4] + (param_1[5] - 1U >> 3 & 0x1ffffffffffffff8)) >>
       (param_1[5] - 1U & 0x3f) & 1) == 0) {
    uVar12 = 0;
    lVar13 = 0;
  }
  else {
    local_50 = *param_2;
    FUN_00321ba8(&uStack_48);
    if ((param_3 & 1) == 0) {
      plVar5 = (long *)param_1[0x10];
      local_40[0] = 5;
      local_3c = (undefined4)((ulong)(param_1[2] - param_1[1]) >> 3);
      if (plVar5 == (long *)0x0) {
        if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 00327288 to 0032728b has its CatchHandler @ 00327298 */
          FUN_0030be88();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 003271fc with catch @ 0032728c
                        */
          FUN_002fb198();
        }
        goto LAB_003272bc;
      }
                    /* try { // try from 003270f4 to 00327103 has its CatchHandler @ 00327298 */
      uVar6 = (**(code **)(*plVar5 + 0x30))(plVar5,&local_3c,local_40,&local_50);
      if ((uVar6 & 1) != 0) goto LAB_00327108;
LAB_0032720c:
      uVar12 = 0;
      lVar13 = 0;
    }
    else {
LAB_00327108:
      uVar12 = uStack_48;
      uVar4 = local_50;
      if (param_1[1] == param_1[2]) {
        puVar9 = (undefined1 *)*param_1;
        local_50 = 0;
        uStack_48 = 0;
        uVar2 = *puVar9;
        uStack_58 = *(undefined8 *)(puVar9 + 8);
        *puVar9 = uVar4;
        _local_60 = CONCAT71(uStack_4f,uVar2);
        *(undefined8 *)(puVar9 + 8) = uVar12;
                    /* try { // try from 00327194 to 0032719b has its CatchHandler @ 00327290 */
        FUN_00313038((ulong)&local_60 | 8);
        lVar13 = *param_1;
      }
      else {
        pcVar8 = *(char **)(param_1[2] + -8);
        if (pcVar8 == (char *)0x0) goto LAB_0032720c;
        if (*pcVar8 == '\x02') {
          lVar13 = *(long *)(pcVar8 + 8);
          puVar1 = *(undefined8 **)(lVar13 + 8);
          if (puVar1 < *(undefined8 **)(lVar13 + 0x10)) {
            puVar7 = puVar1 + 2;
            puVar1[1] = uStack_48;
            *puVar1 = CONCAT71(uStack_4f,local_50);
            local_50 = 0;
            uStack_48 = 0;
          }
          else {
                    /* try { // try from 00327218 to 00327223 has its CatchHandler @ 00327298 */
            puVar7 = (undefined8 *)FUN_00327550(lVar13,&local_50);
          }
          lVar10 = param_1[2];
          *(undefined8 **)(lVar13 + 8) = puVar7;
          lVar13 = *(long *)(*(long *)(*(long *)(lVar10 + -8) + 8) + 8) + -0x10;
        }
        else {
          uVar6 = param_1[8] - 1;
          uVar11 = *(ulong *)(param_1[7] + (uVar6 >> 3 & 0x1ffffffffffffff8));
          param_1[8] = uVar6;
          if ((uVar11 >> (uVar6 & 0x3f) & 1) == 0) goto LAB_0032720c;
          puVar9 = (undefined1 *)param_1[10];
          local_50 = 0;
          uStack_48 = 0;
          uVar2 = *puVar9;
          uStack_68 = *(undefined8 *)(puVar9 + 8);
          *puVar9 = uVar4;
          _local_70 = CONCAT71(uStack_4f,uVar2);
          *(undefined8 *)(puVar9 + 8) = uVar12;
                    /* try { // try from 003271fc to 00327203 has its CatchHandler @ 0032728c */
          FUN_00313038((ulong)&local_70 | 8);
          lVar13 = param_1[10];
        }
      }
      uVar12 = 1;
    }
                    /* try { // try from 00327244 to 0032724b has its CatchHandler @ 00327294 */
    FUN_00313038(&uStack_48,local_50);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    auVar14._8_8_ = lVar13;
    auVar14._0_8_ = uVar12;
    return auVar14;
  }
LAB_003272bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003272c0  FUN_003272c0 =====

void FUN_003272c0(long *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  byte local_a0;
  char local_9f [8];
  undefined4 local_97;
  undefined1 local_93;
  void *local_90;
  byte local_88 [16];
  void *local_78;
  byte local_70;
  undefined1 auStack_6f [15];
  undefined1 *local_60;
  ushort local_58 [8];
  void *local_48;
  undefined1 local_3c [4];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_a0 = 0x18;
  local_93 = 0;
  local_97 = 0x65676e61;
  local_9f = (char  [8])s_out_of_range_001ec99d._0_8_;
  local_3c[0] = 0x2e;
                    /* try { // try from 0032731c to 00327323 has its CatchHandler @ 00327480 */
  FUN_00714798(local_58);
                    /* try { // try from 00327324 to 00327347 has its CatchHandler @ 00327468 */
  FUN_00312cb0(local_88,"[json.exception.",&local_a0,local_3c,local_58,&DAT_001e03c5);
  if (((byte)local_58[0] & 1) != 0) {
    free(local_48);
  }
  local_58[0] = 0;
                    /* try { // try from 0032735c to 0032736f has its CatchHandler @ 00327444 */
  FUN_00312bb0(&local_70,local_88,local_58,param_3);
  if ((local_58[0] & 1) != 0) {
    free(local_48);
  }
  if ((local_88[0] & 1) != 0) {
    free(local_78);
  }
  if ((local_a0 & 1) != 0) {
    free(local_90);
  }
  puVar3 = PTR_DAT_007a12f8;
  *(undefined4 *)(param_1 + 1) = param_2;
  puVar1 = local_60;
  if ((local_70 & 1) == 0) {
    puVar1 = auStack_6f;
  }
  *param_1 = (long)(puVar3 + 0x10);
                    /* try { // try from 003273b8 to 003273bf has its CatchHandler @ 00327428 */
  FUN_0071274c(param_1 + 2,puVar1);
  *param_1 = (long)&PTR_FUN_00760310;
  if ((local_70 & 1) != 0) {
    free(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003274b0  FUN_003274b0 =====

void FUN_003274b0(undefined8 *param_1,char *param_2,byte *param_3)

{
  ulong uVar1;
  byte *pbVar2;
  size_t sVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  sVar3 = strlen(param_2);
  uVar1 = (ulong)(*param_3 >> 1);
  if ((*param_3 & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
  }
                    /* try { // try from 003274ec to 00327523 has its CatchHandler @ 00327534 */
  FUN_00712ea8(param_1,uVar1 + sVar3);
  FUN_00713bdc(param_1,param_2);
  uVar1 = *(ulong *)(param_3 + 8);
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
    uVar1 = (ulong)(*param_3 >> 1);
  }
  FUN_0071302c(param_1,pbVar2,uVar1);
  return;
}


// ===== 00327550  FUN_00327550 =====

undefined8 * FUN_00327550(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *__ptr;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar9 = param_1[1] - *param_1 >> 4;
  uVar1 = lVar9 + 1;
  if (uVar1 >> 0x3c != 0) {
    FUN_003135c8(param_1);
LAB_00327670:
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  uVar6 = param_1[2] - *param_1;
  uVar8 = (long)uVar6 >> 3;
  if (uVar8 <= uVar1) {
    uVar8 = uVar1;
  }
  if (0x7fffffffffffffef < uVar6) {
    uVar8 = 0xfffffffffffffff;
  }
  if (uVar8 == 0) {
    lVar4 = 0;
  }
  else {
    if (uVar8 >> 0x3c != 0) goto LAB_00327670;
    lVar4 = FUN_00759c3c(uVar8 << 4);
  }
  uVar12 = param_2[1];
  uVar11 = *param_2;
  param_2[1] = 0;
  puVar2 = (undefined8 *)(lVar4 + lVar9 * 0x10);
  puVar10 = (undefined8 *)*param_1;
  __ptr = (undefined8 *)param_1[1];
  *(undefined1 *)param_2 = 0;
  puVar2[1] = uVar12;
  *puVar2 = uVar11;
  puVar3 = (undefined8 *)((long)puVar2 + ((long)puVar10 - (long)__ptr));
  puVar5 = puVar10;
  puVar7 = puVar3;
  if ((long)puVar10 - (long)__ptr != 0) {
    do {
      uVar11 = *puVar5;
      puVar7[1] = puVar5[1];
      *puVar7 = uVar11;
      *(undefined1 *)puVar5 = 0;
      puVar5[1] = 0;
      puVar5 = puVar5 + 2;
      puVar7 = puVar7 + 2;
    } while (puVar5 != __ptr);
    do {
                    /* try { // try from 00327618 to 0032761f has its CatchHandler @ 00327674 */
      FUN_00313038(puVar10 + 1,*(undefined1 *)puVar10);
      puVar10 = puVar10 + 2;
    } while (puVar10 != __ptr);
    __ptr = (undefined8 *)*param_1;
  }
  *param_1 = (long)puVar3;
  param_1[1] = (long)(puVar2 + 2);
  param_1[2] = lVar4 + uVar8 * 0x10;
  if (__ptr != (undefined8 *)0x0) {
    free(__ptr);
  }
  return puVar2 + 2;
}


// ===== 00327678  FUN_00327678 =====

void FUN_00327678(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 0032768c  FUN_0032768c =====

void FUN_0032768c(byte *param_1,byte *param_2)

{
  void *__src;
  byte bVar1;
  size_t __n;
  long *plVar2;
  bool bVar3;
  undefined8 *puVar4;
  void *__dest;
  undefined8 uVar5;
  byte *pbVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  
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
  bVar1 = *param_2;
  *param_1 = bVar1;
  if (bVar1 < 5) {
    if (bVar1 < 3) {
      if (bVar1 == 1) {
        plVar7 = *(long **)(param_2 + 8);
                    /* try { // try from 00327810 to 00327817 has its CatchHandler @ 00327918 */
        puVar4 = (undefined8 *)FUN_00759c3c(0x18);
        puVar4[2] = 0;
        puVar8 = puVar4 + 1;
        *puVar8 = 0;
        *puVar4 = puVar8;
        plVar9 = (long *)*plVar7;
        while (plVar9 != plVar7 + 1) {
                    /* try { // try from 00327848 to 0032785b has its CatchHandler @ 00327984 */
          FUN_00327e6c(puVar4,puVar8,plVar9 + 4,plVar9 + 4);
          plVar2 = (long *)plVar9[1];
          plVar10 = plVar9;
          if ((long *)plVar9[1] == (long *)0x0) {
            do {
              plVar9 = (long *)plVar10[2];
              bVar3 = (long *)*plVar9 != plVar10;
              plVar10 = plVar9;
            } while (bVar3);
          }
          else {
            do {
              plVar9 = plVar2;
              plVar2 = (long *)*plVar9;
            } while ((long *)*plVar9 != (long *)0x0);
          }
        }
      }
      else {
        if (bVar1 != 2) {
          return;
        }
                    /* try { // try from 003276d4 to 003276db has its CatchHandler @ 00327940 */
        puVar4 = (undefined8 *)FUN_00759c3c(0x18);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
                    /* try { // try from 003276f4 to 003276f7 has its CatchHandler @ 003278e8 */
        FUN_003285b8();
      }
    }
    else {
      if (bVar1 != 3) {
        if (bVar1 != 4) {
          return;
        }
        *(ulong *)(param_1 + 8) = (ulong)param_2[8];
        return;
      }
      pbVar6 = *(byte **)(param_2 + 8);
                    /* try { // try from 00327890 to 00327897 has its CatchHandler @ 00327904 */
      puVar4 = (undefined8 *)FUN_00759c3c(0x18);
      if ((*pbVar6 & 1) == 0) {
        uVar11 = *(undefined8 *)(pbVar6 + 8);
        uVar5 = *(undefined8 *)pbVar6;
        puVar4[2] = *(undefined8 *)(pbVar6 + 0x10);
        puVar4[1] = uVar11;
        *puVar4 = uVar5;
        *(undefined8 **)(param_1 + 8) = puVar4;
        return;
      }
                    /* try { // try from 003278d0 to 003278d7 has its CatchHandler @ 003278e4 */
      FUN_002fb36c(puVar4,*(undefined8 *)(pbVar6 + 0x10),*(undefined8 *)(pbVar6 + 8));
    }
    *(undefined8 **)(param_1 + 8) = puVar4;
    return;
  }
  if (bVar1 < 7) {
    if ((bVar1 == 5) || (bVar1 == 6)) {
LAB_003277f0:
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      return;
    }
  }
  else {
    if (bVar1 == 7) goto LAB_003277f0;
    if (bVar1 == 8) {
      puVar8 = *(undefined8 **)(param_2 + 8);
                    /* try { // try from 0032776c to 00327773 has its CatchHandler @ 0032792c */
      puVar4 = (undefined8 *)FUN_00759c3c(0x28);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      __src = (void *)*puVar8;
      __n = puVar8[1] - (long)__src;
      if (__n != 0) {
        if ((long)__n < 0) {
                    /* try { // try from 003278dc to 003278e3 has its CatchHandler @ 00327954 */
                    /* WARNING: Subroutine does not return */
          FUN_00323508(puVar4);
        }
                    /* try { // try from 00327790 to 00327797 has its CatchHandler @ 00327954 */
        __dest = (void *)FUN_00759c3c(__n);
        *puVar4 = __dest;
        puVar4[2] = (long)__dest + __n;
        memcpy(__dest,__src,__n);
        puVar4[1] = (long)__dest + __n;
      }
      uVar5 = puVar8[3];
      *(undefined1 *)(puVar4 + 4) = *(undefined1 *)(puVar8 + 4);
      puVar4[3] = uVar5;
      *(undefined8 **)(param_1 + 8) = puVar4;
      return;
    }
  }
  return;
}


// ===== 003279ac  FUN_003279ac =====

void FUN_003279ac(long *param_1)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pcVar2 = (char *)*param_1;
  if (*pcVar2 == '\x02') {
    pcVar2 = (char *)param_1[2];
  }
  else if (*pcVar2 == '\x01') {
    pcVar2 = (char *)(param_1[1] + 0x38);
  }
  else if (param_1[3] != 0) {
    uVar3 = FUN_00753a74(0x20);
                    /* try { // try from 00327a38 to 00327a47 has its CatchHandler @ 00327ab0 */
    FUN_002fd2b0(auStack_50,"cannot get value");
                    /* try { // try from 00327a50 to 00327a8b has its CatchHandler @ 00327a8c */
    pcVar2 = (char *)FUN_0032889c(uVar3,0xd6,auStack_50,*param_1);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1328,PTR_FUN_007a12f0);
    }
    goto LAB_00327ad4;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_00327ad4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pcVar2);
}


// ===== 00327ad8  FUN_00327ad8 =====

void FUN_00327ad8(undefined8 *param_1,byte *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  byte *__ptr;
  void *__ptr_00;
  uint uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined8 auStack_68 [2];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if ((byte *)*param_3 != param_2) {
    uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 00327ca4 to 00327cb3 has its CatchHandler @ 00327e44 */
    FUN_002fd2b0(&local_70,"iterator does not fit current value");
                    /* try { // try from 00327cb8 to 00327cf7 has its CatchHandler @ 00327e28 */
    FUN_0032889c(uVar5,0xca,&local_70,param_2);
    if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a1328,PTR_FUN_007a12f0);
    }
    goto LAB_00327e68;
  }
  *param_1 = param_2;
  bVar2 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x8000000000000000;
  if (bVar2 == 2) {
    lVar7 = *(long *)(param_2 + 8);
    puVar8 = (undefined1 *)param_3[2];
    puVar9 = *(undefined1 **)(lVar7 + 8);
    param_1[2] = puVar9;
    puVar10 = puVar8;
    if (puVar8 + 0x10 != puVar9) {
      do {
        uVar11 = *(undefined8 *)(puVar10 + 0x18);
        uVar5 = *(undefined8 *)(puVar10 + 0x10);
        puVar10[0x10] = 0;
        uVar3 = *puVar10;
        auStack_68[0] = *(undefined8 *)(puVar10 + 8);
        *(undefined8 *)(puVar10 + 0x18) = 0;
        local_70 = (undefined1)uVar5;
        *puVar10 = local_70;
        _local_70 = CONCAT71((int7)((ulong)uVar5 >> 8),uVar3);
        *(undefined8 *)(puVar10 + 8) = uVar11;
                    /* try { // try from 00327ba0 to 00327ba7 has its CatchHandler @ 00327e0c */
        FUN_00313038(auStack_68);
        puVar1 = puVar10 + 0x20;
        puVar10 = puVar10 + 0x10;
      } while (puVar1 != puVar9);
      puVar9 = *(undefined1 **)(lVar7 + 8);
    }
    while (puVar9 != puVar10) {
                    /* try { // try from 00327c1c to 00327c23 has its CatchHandler @ 00327e10 */
      FUN_00313038(puVar9 + -8,puVar9[-0x10]);
      puVar9 = puVar9 + -0x10;
    }
    *(undefined1 **)(lVar7 + 8) = puVar10;
    param_1[2] = puVar8;
  }
  else if (bVar2 == 1) {
    uVar5 = FUN_00328d30(*(undefined8 *)(param_2 + 8),param_3[1]);
    param_1[1] = uVar5;
  }
  else {
    uVar6 = (uint)bVar2;
    param_1[3] = 1;
    if (5 < uVar6 - 3) {
      uVar5 = FUN_00753a74(0x20);
      local_78 = FUN_00312898(param_2);
                    /* try { // try from 00327d88 to 00327d9b has its CatchHandler @ 00327e04 */
      FUN_00328ca8(&local_70,"cannot use erase() with ",&local_78);
                    /* try { // try from 00327da0 to 00327de3 has its CatchHandler @ 00327de4 */
      FUN_00328abc(uVar5,0x133,&local_70,param_2);
      if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar5,PTR_PTR_007a12e8,PTR_FUN_007a12f0);
      }
      goto LAB_00327e68;
    }
    if (param_3[3] != 0) {
      uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 00327d0c to 00327d1b has its CatchHandler @ 00327e24 */
      FUN_002fd2b0(&local_70,"iterator out of range");
                    /* try { // try from 00327d20 to 00327d5f has its CatchHandler @ 00327e14 */
      FUN_0032889c(uVar5,0xcd,&local_70,param_2);
      if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar5,PTR_PTR_007a1328,PTR_FUN_007a12f0);
      }
      goto LAB_00327e68;
    }
    if (uVar6 == 8) {
      __ptr = *(byte **)(param_2 + 8);
      __ptr_00 = *(void **)__ptr;
      if (__ptr_00 != (void *)0x0) {
        *(void **)(__ptr + 8) = __ptr_00;
LAB_00327c50:
        free(__ptr_00);
        __ptr = *(byte **)(param_2 + 8);
      }
LAB_00327c58:
      free(__ptr);
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      param_2[0xe] = 0;
      param_2[0xf] = 0;
    }
    else if (uVar6 == 3) {
      __ptr = *(byte **)(param_2 + 8);
      if ((*__ptr & 1) != 0) {
        __ptr_00 = *(void **)(__ptr + 0x10);
        goto LAB_00327c50;
      }
      goto LAB_00327c58;
    }
    *param_2 = 0;
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
LAB_00327e68:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00327e6c  FUN_00327e6c =====

undefined8 * FUN_00327e6c(long *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined8 *local_60;
  long *plStack_58;
  undefined1 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00327fc4(param_1,param_2,&local_68,auStack_70,param_3);
  if ((undefined8 *)*plVar2 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_00759c3c(0x48);
    local_50 = 0;
    local_60 = puVar3;
    plStack_58 = param_1 + 1;
    if ((*param_4 & 1) == 0) {
      uVar6 = *(undefined8 *)param_4;
      uVar4 = *(undefined8 *)(param_4 + 0x10);
      puVar3[5] = *(undefined8 *)(param_4 + 8);
      puVar3[4] = uVar6;
      puVar3[6] = uVar4;
    }
    else {
                    /* try { // try from 00327f04 to 00327f0b has its CatchHandler @ 00327f84 */
      FUN_002fb36c(puVar3 + 4,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 8));
    }
                    /* try { // try from 00327f0c to 00327f17 has its CatchHandler @ 00327f8c */
    FUN_0032768c(puVar3 + 7,param_4 + 0x18);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = local_68;
    *plVar2 = (long)puVar3;
    puVar5 = puVar3;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar5 = (undefined8 *)*plVar2;
    }
    plVar2 = (long *)FUN_00328410(param_1[1],puVar5);
    uVar4 = 1;
    param_1[2] = param_1[2] + 1;
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return puVar3;
    }
  }
  else {
    uVar4 = 0;
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return (undefined8 *)*plVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar2,uVar4);
}


// ===== 00327fc4  FUN_00327fc4 =====

long * FUN_00327fc4(undefined8 *param_1,long *param_2,long *param_3,long *param_4,byte *param_5)

{
  ulong uVar1;
  void *pvVar2;
  size_t sVar3;
  ulong uVar4;
  byte *pbVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  
  plVar11 = param_1 + 1;
  if (plVar11 != param_2) {
    bVar6 = (*(byte *)(param_2 + 4) & 1) != 0;
    pvVar2 = (void *)((long)param_2 + 0x21);
    if (bVar6) {
      pvVar2 = (void *)param_2[6];
    }
    uVar1 = (ulong)(*(byte *)(param_2 + 4) >> 1);
    if (bVar6) {
      uVar1 = param_2[5];
    }
    uVar4 = *(ulong *)(param_5 + 8);
    pbVar5 = *(byte **)(param_5 + 0x10);
    if ((*param_5 & 1) == 0) {
      pbVar5 = param_5 + 1;
      uVar4 = (ulong)(*param_5 >> 1);
    }
    sVar3 = uVar1;
    if (uVar4 <= uVar1) {
      sVar3 = uVar4;
    }
    iVar7 = memcmp(pbVar5,pvVar2,sVar3);
    bVar6 = uVar4 < uVar1;
    if (iVar7 != 0) {
      bVar6 = iVar7 < 0;
    }
    if (!bVar6) {
      iVar7 = memcmp(pvVar2,pbVar5,sVar3);
      bVar6 = uVar1 < uVar4;
      if (iVar7 != 0) {
        bVar6 = iVar7 < 0;
      }
      if (!bVar6) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar12 = (long *)param_2[1];
      plVar8 = param_2;
      plVar9 = plVar12;
      if (plVar12 == (long *)0x0) {
        do {
          plVar10 = (long *)plVar8[2];
          bVar6 = (long *)*plVar10 != plVar8;
          plVar8 = plVar10;
        } while (bVar6);
      }
      else {
        do {
          plVar10 = plVar9;
          plVar9 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
      if (plVar10 != plVar11) {
        uVar1 = (ulong)(*(byte *)(plVar10 + 4) >> 1);
        pvVar2 = (void *)((long)plVar10 + 0x21);
        if ((*(byte *)(plVar10 + 4) & 1) != 0) {
          uVar1 = plVar10[5];
          pvVar2 = (void *)plVar10[6];
        }
        sVar3 = uVar1;
        if (uVar4 <= uVar1) {
          sVar3 = uVar4;
        }
        iVar7 = memcmp(pbVar5,pvVar2,sVar3);
        bVar6 = uVar4 < uVar1;
        if (iVar7 != 0) {
          bVar6 = iVar7 < 0;
        }
        if (!bVar6) {
          plVar8 = (long *)*plVar11;
          while (plVar9 = plVar11, plVar8 != (long *)0x0) {
            while( true ) {
              plVar11 = plVar8;
              pvVar2 = (void *)((long)plVar11 + 0x21);
              uVar1 = (ulong)(*(byte *)(plVar11 + 4) >> 1);
              if ((*(byte *)(plVar11 + 4) & 1) != 0) {
                pvVar2 = (void *)plVar11[6];
                uVar1 = plVar11[5];
              }
              sVar3 = uVar1;
              if (uVar4 <= uVar1) {
                sVar3 = uVar4;
              }
              iVar7 = memcmp(pbVar5,pvVar2,sVar3);
              bVar6 = uVar4 < uVar1;
              if (iVar7 != 0) {
                bVar6 = iVar7 < 0;
              }
              if (bVar6) break;
              iVar7 = memcmp(pvVar2,pbVar5,sVar3);
              bVar6 = uVar1 < uVar4;
              if (iVar7 != 0) {
                bVar6 = iVar7 < 0;
              }
              if (!bVar6) goto LAB_00328388;
              plVar9 = plVar11 + 1;
              plVar8 = (long *)*plVar9;
              if ((long *)*plVar9 == (long *)0x0) goto LAB_00328388;
            }
            plVar8 = (long *)*plVar11;
          }
LAB_00328388:
          *param_3 = (long)plVar11;
          return plVar9;
        }
      }
      if (plVar12 != (long *)0x0) {
        *param_3 = (long)plVar10;
        return plVar10;
      }
      *param_3 = (long)param_2;
      return param_2 + 1;
    }
  }
  plVar9 = (long *)*param_2;
  plVar8 = param_2;
  if ((long *)*param_1 != param_2) {
    plVar12 = param_2;
    plVar10 = plVar9;
    if (plVar9 == (long *)0x0) {
      do {
        plVar8 = (long *)plVar12[2];
        bVar6 = (long *)*plVar8 == plVar12;
        plVar12 = plVar8;
      } while (bVar6);
    }
    else {
      do {
        plVar8 = plVar10;
        plVar10 = (long *)plVar8[1];
      } while ((long *)plVar8[1] != (long *)0x0);
    }
    pbVar5 = *(byte **)(param_5 + 0x10);
    bVar6 = (*param_5 & 1) == 0;
    if (bVar6) {
      pbVar5 = param_5 + 1;
    }
    uVar1 = (ulong)(*param_5 >> 1);
    if (!bVar6) {
      uVar1 = *(ulong *)(param_5 + 8);
    }
    pvVar2 = (void *)((long)plVar8 + 0x21);
    uVar4 = (ulong)(*(byte *)(plVar8 + 4) >> 1);
    if ((*(byte *)(plVar8 + 4) & 1) != 0) {
      pvVar2 = (void *)plVar8[6];
      uVar4 = plVar8[5];
    }
    sVar3 = uVar1;
    if (uVar4 <= uVar1) {
      sVar3 = uVar4;
    }
    iVar7 = memcmp(pvVar2,pbVar5,sVar3);
    bVar6 = uVar4 < uVar1;
    if (iVar7 != 0) {
      bVar6 = iVar7 < 0;
    }
    if (!bVar6) {
      plVar8 = (long *)*plVar11;
      while (plVar9 = plVar11, plVar8 != (long *)0x0) {
        while( true ) {
          plVar11 = plVar8;
          pvVar2 = (void *)((long)plVar11 + 0x21);
          uVar4 = (ulong)(*(byte *)(plVar11 + 4) >> 1);
          if ((*(byte *)(plVar11 + 4) & 1) != 0) {
            pvVar2 = (void *)plVar11[6];
            uVar4 = plVar11[5];
          }
          sVar3 = uVar4;
          if (uVar1 <= uVar4) {
            sVar3 = uVar1;
          }
          iVar7 = memcmp(pbVar5,pvVar2,sVar3);
          bVar6 = uVar1 < uVar4;
          if (iVar7 != 0) {
            bVar6 = iVar7 < 0;
          }
          if (bVar6) break;
          iVar7 = memcmp(pvVar2,pbVar5,sVar3);
          bVar6 = uVar4 < uVar1;
          if (iVar7 != 0) {
            bVar6 = iVar7 < 0;
          }
          if (!bVar6) goto LAB_0032821c;
          plVar9 = plVar11 + 1;
          plVar8 = (long *)*plVar9;
          if ((long *)*plVar9 == (long *)0x0) goto LAB_0032821c;
        }
        plVar8 = (long *)*plVar11;
      }
LAB_0032821c:
      *param_3 = (long)plVar11;
      return plVar9;
    }
  }
  if (plVar9 == (long *)0x0) {
    *param_3 = (long)param_2;
  }
  else {
    param_2 = plVar8 + 1;
    *param_3 = (long)plVar8;
  }
  return param_2;
}


// ===== 003283b4  FUN_003283b4 =====

void FUN_003283b4(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
                    /* try { // try from 003283d8 to 003283df has its CatchHandler @ 0032840c */
    if ((*(char *)(param_1 + 2) != '\0') &&
       (FUN_00313038((long)__ptr + 0x40,*(undefined1 *)((long)__ptr + 0x38)),
       (*(byte *)((long)__ptr + 0x20) & 1) != 0)) {
      free(*(void **)((long)__ptr + 0x30));
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 00328410  FUN_00328410 =====

void FUN_00328410(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  bVar1 = param_2 == param_1;
  *(bool *)(param_2 + 3) = bVar1;
  while( true ) {
    if (bVar1) {
      return;
    }
    plVar3 = (long *)param_2[2];
    if ((*(byte *)(plVar3 + 3) & 1) != 0) break;
    plVar2 = (long *)plVar3[2];
    plVar7 = (long *)*plVar2;
    if (plVar7 == plVar3) {
      if ((plVar2[1] == 0) || (plVar7 = (long *)(plVar2[1] + 0x18), *(char *)plVar7 != '\0')) {
        if ((long *)*plVar3 == param_2) {
          lVar5 = plVar3[1];
          *(undefined1 *)(plVar3 + 3) = 1;
          *(undefined1 *)(plVar2 + 3) = 0;
          *plVar2 = lVar5;
        }
        else {
          plVar4 = (long *)plVar3[1];
          lVar5 = *plVar4;
          plVar3[1] = lVar5;
          plVar7 = plVar3;
          if (lVar5 != 0) {
            *(long **)(lVar5 + 0x10) = plVar3;
            plVar2 = (long *)plVar3[2];
            plVar7 = (long *)*plVar2;
          }
          plVar4[2] = (long)plVar2;
          plVar2[plVar7 != plVar3] = (long)plVar4;
          plVar3[2] = (long)plVar4;
          plVar2 = (long *)plVar4[2];
          *plVar4 = (long)plVar3;
          plVar3 = (long *)*plVar2;
          lVar5 = plVar3[1];
          *(undefined1 *)(plVar4 + 3) = 1;
          *(undefined1 *)(plVar2 + 3) = 0;
          *plVar2 = lVar5;
        }
        if (lVar5 != 0) {
          *(long **)(lVar5 + 0x10) = plVar2;
        }
        puVar6 = (undefined8 *)plVar2[2];
        plVar7 = (long *)*puVar6;
        plVar3[2] = (long)puVar6;
        puVar6[plVar7 != plVar2] = plVar3;
        plVar3[1] = (long)plVar2;
        plVar2[2] = (long)plVar3;
        return;
      }
    }
    else if ((plVar7 == (long *)0x0) || (plVar7 = plVar7 + 3, (char)*plVar7 != '\0')) {
      if ((long *)*plVar3 == param_2) {
        lVar5 = param_2[1];
        *plVar3 = lVar5;
        if (lVar5 != 0) {
          *(long **)(lVar5 + 0x10) = plVar3;
          plVar2 = (long *)plVar3[2];
        }
        plVar7 = (long *)*plVar2;
        param_2[2] = (long)plVar2;
        plVar2[plVar7 != plVar3] = (long)param_2;
        plVar3[2] = (long)param_2;
        plVar2 = (long *)param_2[2];
        param_2[1] = (long)plVar3;
        plVar3 = param_2;
      }
      plVar7 = (long *)plVar2[1];
      *(undefined1 *)(plVar3 + 3) = 1;
      lVar5 = *plVar7;
      *(undefined1 *)(plVar2 + 3) = 0;
      plVar2[1] = lVar5;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 0x10) = plVar2;
      }
      puVar6 = (undefined8 *)plVar2[2];
      plVar3 = (long *)*puVar6;
      plVar7[2] = (long)puVar6;
      puVar6[plVar3 != plVar2] = plVar7;
      *plVar7 = (long)plVar2;
      plVar2[2] = (long)plVar7;
      return;
    }
    bVar1 = plVar2 == param_1;
    *(undefined1 *)(plVar3 + 3) = 1;
    *(bool *)(plVar2 + 3) = bVar1;
    *(char *)plVar7 = '\x01';
    param_2 = plVar2;
  }
  return;
}


// ===== 003285b8  FUN_003285b8 =====

void FUN_003285b8(long *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  long local_88;
  long local_80;
  long *local_78;
  undefined1 local_70;
  long *local_68;
  long *plStack_60;
  long *local_58;
  undefined1 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_70 = 0;
  local_78 = param_1;
  if (param_4 != 0) {
    if (param_4 >> 0x3c != 0) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 003286a4 to 003286ab has its CatchHandler @ 003286ac */
        uVar2 = FUN_003135c8(param_1);
                    /* catch() { ... } // from try @ 00328604 with catch @ 003286ac
                       catch() { ... } // from try @ 003286a4 with catch @ 003286ac */
        FUN_003286e8(&local_78);
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00755eac(uVar2);
        }
      }
      goto LAB_003286e4;
    }
                    /* try { // try from 00328604 to 00328607 has its CatchHandler @ 003286ac */
    local_80 = FUN_00759c3c(param_4 << 4);
    *param_1 = local_80;
    param_1[1] = local_80;
    local_68 = param_1 + 2;
    *local_68 = local_80 + param_4 * 0x10;
    plStack_60 = &local_88;
    local_58 = &local_80;
    local_50 = 0;
    local_88 = local_80;
    if (param_2 != param_3) {
      do {
                    /* try { // try from 00328640 to 00328647 has its CatchHandler @ 003286b4 */
        FUN_0032768c(local_80,param_2);
        param_2 = param_2 + 0x10;
        local_80 = local_80 + 0x10;
      } while (param_2 != param_3);
    }
    param_1[1] = local_80;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_003286e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003286e8  FUN_003286e8 =====

void FUN_003286e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    puVar1 = (undefined8 *)*param_1;
    puVar2 = (undefined1 *)*puVar1;
    if (puVar2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)puVar1[1];
      while (puVar3 != puVar2) {
                    /* try { // try from 00328730 to 00328737 has its CatchHandler @ 00328758 */
        FUN_00313038(puVar3 + -8,puVar3[-0x10]);
        puVar3 = puVar3 + -0x10;
      }
      param_1 = (undefined8 *)*param_1;
      puVar1[1] = puVar2;
      free((void *)*param_1);
      return;
    }
  }
  return;
}


// ===== 0032875c  FUN_0032875c =====

void FUN_0032875c(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((char *)*param_1 == (char *)*param_2) {
    cVar1 = *(char *)*param_1;
    if (cVar1 == '\x02') {
      lVar5 = param_1[2];
      lVar6 = param_2[2];
    }
    else if (cVar1 == '\x01') {
      lVar5 = param_1[1];
      lVar6 = param_2[1];
    }
    else {
      lVar5 = param_1[3];
      lVar6 = param_2[3];
    }
    uVar3 = (ulong)(lVar5 == lVar6);
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return;
    }
  }
  else {
    uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 003287fc to 0032880b has its CatchHandler @ 00328874 */
    FUN_002fd2b0(auStack_50,"cannot compare iterators of different containers");
                    /* try { // try from 00328814 to 0032884f has its CatchHandler @ 00328850 */
    uVar3 = FUN_0032889c(uVar4,0xd4,auStack_50,*param_1);
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a1328,PTR_FUN_007a12f0);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 0032889c  FUN_0032889c =====

void FUN_0032889c(long *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  byte local_a0;
  char local_9f [8];
  undefined7 uStack_97;
  char cStack_90;
  undefined1 uStack_8f;
  undefined6 uStack_8e;
  byte local_88 [16];
  void *local_78;
  byte local_70;
  undefined1 auStack_6f [15];
  undefined1 *local_60;
  ushort local_58 [8];
  void *local_48;
  undefined1 local_3c [4];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_a0 = 0x20;
  uStack_97 = (undefined7)s_invalid_iterator_001c5180._8_8_;
  cStack_90 = SUB81(s_invalid_iterator_001c5180._8_8_,7);
  local_9f = (char  [8])s_invalid_iterator_001c5180._0_8_;
  uStack_8f = 0;
  local_3c[0] = 0x2e;
                    /* try { // try from 003288ec to 003288f3 has its CatchHandler @ 00328a50 */
  FUN_00714798(local_58);
                    /* try { // try from 003288f4 to 00328917 has its CatchHandler @ 00328a38 */
  FUN_00312cb0(local_88,"[json.exception.",&local_a0,local_3c,local_58,&DAT_001e03c5);
  if (((byte)local_58[0] & 1) != 0) {
    free(local_48);
  }
  local_58[0] = 0;
                    /* try { // try from 0032892c to 0032893f has its CatchHandler @ 00328a14 */
  FUN_00312bb0(&local_70,local_88,local_58,param_3);
  if ((local_58[0] & 1) != 0) {
    free(local_48);
  }
  if ((local_88[0] & 1) != 0) {
    free(local_78);
  }
  if ((local_a0 & 1) != 0) {
    free((void *)CONCAT62(uStack_8e,CONCAT11(uStack_8f,cStack_90)));
  }
  puVar3 = PTR_DAT_007a12f8;
  *(undefined4 *)(param_1 + 1) = param_2;
  puVar1 = local_60;
  if ((local_70 & 1) == 0) {
    puVar1 = auStack_6f;
  }
  *param_1 = (long)(puVar3 + 0x10);
                    /* try { // try from 00328988 to 0032898f has its CatchHandler @ 003289f8 */
  FUN_0071274c(param_1 + 2,puVar1);
  *param_1 = (long)&PTR_FUN_00760628;
  if ((local_70 & 1) != 0) {
    free(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00328a80  FUN_00328a80 =====

void FUN_00328a80(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a12f8 + 0x10);
  FUN_0073a2c4(param_1 + 2);
  FUN_0073a174(param_1);
  free(param_1);
  return;
}


// ===== 00328abc  FUN_00328abc =====

void FUN_00328abc(long *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  byte local_a0;
  char local_9f [8];
  undefined2 local_97;
  undefined1 local_95;
  void *local_90;
  byte local_88 [16];
  void *local_78;
  byte local_70;
  undefined1 auStack_6f [15];
  undefined1 *local_60;
  ushort local_58 [8];
  void *local_48;
  undefined1 local_3c [4];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_a0 = 0x14;
  local_97 = 0x726f;
  local_95 = 0;
  local_9f = (char  [8])s_type_error_001c2bbe._0_8_;
  local_3c[0] = 0x2e;
                    /* try { // try from 00328b14 to 00328b1b has its CatchHandler @ 00328c78 */
  FUN_00714798(local_58);
                    /* try { // try from 00328b1c to 00328b3f has its CatchHandler @ 00328c60 */
  FUN_00312cb0(local_88,"[json.exception.",&local_a0,local_3c,local_58,&DAT_001e03c5);
  if (((byte)local_58[0] & 1) != 0) {
    free(local_48);
  }
  local_58[0] = 0;
                    /* try { // try from 00328b54 to 00328b67 has its CatchHandler @ 00328c3c */
  FUN_00312bb0(&local_70,local_88,local_58,param_3);
  if ((local_58[0] & 1) != 0) {
    free(local_48);
  }
  if ((local_88[0] & 1) != 0) {
    free(local_78);
  }
  if ((local_a0 & 1) != 0) {
    free(local_90);
  }
  puVar3 = PTR_DAT_007a12f8;
  *(undefined4 *)(param_1 + 1) = param_2;
  puVar1 = local_60;
  if ((local_70 & 1) == 0) {
    puVar1 = auStack_6f;
  }
  *param_1 = (long)(puVar3 + 0x10);
                    /* try { // try from 00328bb0 to 00328bb7 has its CatchHandler @ 00328c20 */
  FUN_0071274c(param_1 + 2,puVar1);
  *param_1 = (long)&PTR_FUN_007602c0;
  if ((local_70 & 1) != 0) {
    free(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00328ca8  FUN_00328ca8 =====

void FUN_00328ca8(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  size_t sVar1;
  size_t sVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  sVar1 = strlen(param_2);
  sVar2 = strlen((char *)*param_3);
                    /* try { // try from 00328ce0 to 00328d03 has its CatchHandler @ 00328d14 */
  FUN_00712ea8(param_1,sVar2 + sVar1);
  FUN_00713bdc(param_1,param_2);
  FUN_00713bdc(param_1,*param_3);
  return;
}


// ===== 00328d30  FUN_00328d30 =====

undefined8 * FUN_00328d30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = param_2;
  puVar1 = (undefined8 *)param_2[1];
  if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
    do {
      puVar4 = (undefined8 *)puVar3[2];
      bVar2 = (undefined8 *)*puVar4 != puVar3;
      puVar3 = puVar4;
    } while (bVar2);
  }
  else {
    do {
      puVar4 = puVar1;
      puVar1 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
  if ((undefined8 *)*param_1 == param_2) {
    *param_1 = puVar4;
  }
  param_1[2] = param_1[2] + -1;
  FUN_00328dd0(param_1[1],param_2);
                    /* try { // try from 00328d9c to 00328da3 has its CatchHandler @ 00328dcc */
  FUN_00313038(param_2 + 8,*(undefined1 *)(param_2 + 7));
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    free((void *)param_2[6]);
  }
  free(param_2);
  return puVar4;
}


// ===== 00328dd0  FUN_00328dd0 =====

void FUN_00328dd0(long *param_1,long *param_2)

{
  bool bVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  plVar4 = (long *)*param_2;
  plVar6 = param_2;
  if (plVar4 == (long *)0x0) {
LAB_00328df0:
    plVar4 = (long *)plVar6[1];
    bVar1 = plVar4 == (long *)0x0;
    if (bVar1) {
      puVar8 = (undefined8 *)plVar6[2];
      plVar3 = (long *)*puVar8;
    }
    else {
      puVar8 = (undefined8 *)plVar6[2];
      plVar4[2] = (long)puVar8;
      plVar3 = (long *)*puVar8;
    }
    if (plVar3 == plVar6) {
LAB_00328e3c:
      *puVar8 = plVar4;
      if (plVar6 == param_1) {
        plVar3 = (long *)0x0;
        cVar2 = (char)plVar6[3];
        param_1 = plVar4;
      }
      else {
        plVar3 = (long *)puVar8[1];
        cVar2 = (char)plVar6[3];
      }
      goto joined_r0x00328e8c;
    }
  }
  else {
    plVar3 = (long *)param_2[1];
    if ((long *)param_2[1] != (long *)0x0) {
      do {
        plVar6 = plVar3;
        plVar3 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
      goto LAB_00328df0;
    }
    puVar8 = (undefined8 *)param_2[2];
    bVar1 = false;
    plVar4[2] = (long)puVar8;
    plVar3 = (long *)*puVar8;
    if (plVar3 == param_2) goto LAB_00328e3c;
  }
  puVar8[1] = plVar4;
  cVar2 = (char)plVar6[3];
joined_r0x00328e8c:
  if (plVar6 != param_2) {
    puVar8 = (undefined8 *)param_2[2];
    plVar9 = (long *)*puVar8;
    plVar6[2] = (long)puVar8;
    puVar8[plVar9 != param_2] = plVar6;
    lVar5 = *param_2;
    lVar7 = param_2[1];
    *(long **)(lVar5 + 0x10) = plVar6;
    *plVar6 = lVar5;
    plVar6[1] = lVar7;
    if (lVar7 != 0) {
      *(long **)(lVar7 + 0x10) = plVar6;
    }
    plVar9 = plVar6;
    if (param_1 != param_2) {
      plVar9 = param_1;
    }
    *(char *)(plVar6 + 3) = (char)param_2[3];
    param_1 = plVar9;
  }
  if ((cVar2 == '\0') || (param_1 == (long *)0x0)) {
    return;
  }
  if (!bVar1) {
    *(undefined1 *)(plVar4 + 3) = 1;
    return;
  }
  while( true ) {
    plVar4 = (long *)plVar3[2];
    if ((long *)*plVar4 != plVar3) break;
    if ((*(byte *)(plVar3 + 3) & 1) == 0) {
      lVar5 = plVar3[1];
      *(undefined1 *)(plVar3 + 3) = 1;
      *(undefined1 *)(plVar4 + 3) = 0;
      *plVar4 = lVar5;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 0x10) = plVar4;
      }
      puVar8 = (undefined8 *)plVar4[2];
      plVar6 = (long *)*puVar8;
      plVar3[2] = (long)puVar8;
      puVar8[plVar6 != plVar4] = plVar3;
      plVar6 = plVar3;
      if (param_1 != plVar4) {
        plVar6 = param_1;
      }
      plVar3[1] = (long)plVar4;
      plVar4[2] = (long)plVar3;
      plVar3 = (long *)*plVar4;
      plVar4 = (long *)*plVar3;
      param_1 = plVar6;
    }
    else {
      plVar4 = (long *)*plVar3;
    }
    if ((plVar4 != (long *)0x0) && (plVar6 = plVar3, (char)plVar4[3] == '\0')) {
LAB_0032914c:
      plVar3 = (long *)plVar6[2];
      lVar5 = *plVar3;
      *(char *)(plVar6 + 3) = (char)plVar3[3];
      lVar7 = *(long *)(lVar5 + 8);
      *(undefined1 *)(plVar3 + 3) = 1;
      *(undefined1 *)(plVar4 + 3) = 1;
      *plVar3 = lVar7;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 0x10) = plVar3;
      }
      puVar8 = (undefined8 *)plVar3[2];
      plVar4 = (long *)*puVar8;
      *(undefined8 **)(lVar5 + 0x10) = puVar8;
      puVar8[plVar4 != plVar3] = lVar5;
      *(long **)(lVar5 + 8) = plVar3;
      plVar3[2] = lVar5;
      return;
    }
    plVar6 = (long *)plVar3[1];
    if ((plVar6 != (long *)0x0) && ((char)plVar6[3] == '\0')) {
      if (plVar4 != (long *)0x0) {
        plVar6 = plVar3;
        if ((char)plVar4[3] == '\0') goto LAB_0032914c;
        plVar6 = (long *)plVar3[1];
      }
      lVar5 = *plVar6;
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(plVar3 + 3) = 0;
      plVar3[1] = lVar5;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 0x10) = plVar3;
      }
      puVar8 = (undefined8 *)plVar3[2];
      plVar4 = (long *)*puVar8;
      plVar6[2] = (long)puVar8;
      puVar8[plVar4 != plVar3] = plVar6;
      *plVar6 = (long)plVar3;
      plVar3[2] = (long)plVar6;
      plVar4 = plVar3;
      goto LAB_0032914c;
    }
    plVar4 = (long *)plVar3[2];
    *(undefined1 *)(plVar3 + 3) = 0;
    if (((char)plVar4[3] == '\0') || (plVar4 == param_1)) {
LAB_00329040:
      *(undefined1 *)(plVar4 + 3) = 1;
      return;
    }
LAB_00328ee0:
    plVar3 = (long *)((undefined8 *)plVar4[2])[*(long **)plVar4[2] == plVar4];
  }
  if ((*(byte *)(plVar3 + 3) & 1) == 0) {
    plVar6 = (long *)plVar4[1];
    *(undefined1 *)(plVar3 + 3) = 1;
    *(undefined1 *)(plVar4 + 3) = 0;
    lVar5 = *plVar6;
    plVar4[1] = lVar5;
    if (lVar5 != 0) {
      *(long **)(lVar5 + 0x10) = plVar4;
    }
    puVar8 = (undefined8 *)plVar4[2];
    plVar9 = (long *)*puVar8;
    plVar6[2] = (long)puVar8;
    puVar8[plVar9 != plVar4] = plVar6;
    *plVar6 = (long)plVar4;
    plVar9 = (long *)*plVar3;
    plVar4[2] = (long)plVar6;
    plVar4 = plVar3;
    if (param_1 != plVar9) {
      plVar4 = param_1;
    }
    plVar3 = (long *)plVar9[1];
    plVar6 = (long *)*plVar3;
    param_1 = plVar4;
    if (plVar6 == (long *)0x0) goto LAB_00328f84;
LAB_00328f7c:
    param_1 = plVar4;
    if ((char)plVar6[3] != '\0') goto LAB_00328f84;
    plVar4 = (long *)plVar3[1];
    if (plVar4 != (long *)0x0) goto LAB_00329054;
  }
  else {
    plVar6 = (long *)*plVar3;
    plVar4 = param_1;
    if (plVar6 != (long *)0x0) goto LAB_00328f7c;
LAB_00328f84:
    plVar4 = (long *)plVar3[1];
    if ((plVar4 == (long *)0x0) || ((char)plVar4[3] != '\0')) {
      plVar6 = (long *)plVar3[2];
      *(undefined1 *)(plVar3 + 3) = 0;
      plVar4 = param_1;
      if ((plVar6 != param_1) && (plVar4 = plVar6, (*(byte *)(plVar6 + 3) & 1) != 0))
      goto LAB_00328ee0;
      goto LAB_00329040;
    }
LAB_00329054:
    plVar9 = plVar3;
    if ((char)plVar4[3] == '\0') goto LAB_003290a4;
  }
  lVar5 = plVar6[1];
  *(undefined1 *)(plVar6 + 3) = 1;
  *(undefined1 *)(plVar3 + 3) = 0;
  *plVar3 = lVar5;
  if (lVar5 != 0) {
    *(long **)(lVar5 + 0x10) = plVar3;
  }
  puVar8 = (undefined8 *)plVar3[2];
  plVar4 = (long *)*puVar8;
  plVar6[2] = (long)puVar8;
  puVar8[plVar4 != plVar3] = plVar6;
  plVar6[1] = (long)plVar3;
  plVar3[2] = (long)plVar6;
  plVar9 = plVar6;
  plVar4 = plVar3;
LAB_003290a4:
  lVar5 = plVar9[2];
  plVar6 = *(long **)(lVar5 + 8);
  *(undefined1 *)(plVar9 + 3) = *(undefined1 *)(lVar5 + 0x18);
  lVar7 = *plVar6;
  *(undefined1 *)(lVar5 + 0x18) = 1;
  *(undefined1 *)(plVar4 + 3) = 1;
  *(long *)(lVar5 + 8) = lVar7;
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x10) = lVar5;
  }
  plVar4 = *(long **)(lVar5 + 0x10);
  lVar7 = *plVar4;
  plVar6[2] = (long)plVar4;
  plVar4[lVar7 != lVar5] = (long)plVar6;
  *plVar6 = lVar5;
  *(long **)(lVar5 + 0x10) = plVar6;
  return;
}


// ===== 0032919c  FUN_0032919c =====

long * FUN_0032919c(long *param_1,byte *param_2,undefined8 param_3,undefined8 *param_4)

{
  void *__s2;
  size_t __n;
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  byte *pbVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  
  lVar12 = tpidr_el0;
  lVar8 = *(long *)(lVar12 + 0x28);
  plVar13 = param_1 + 1;
  plVar9 = (long *)*plVar13;
  plVar14 = plVar13;
  if (plVar9 != (long *)0x0) {
    uVar1 = *(ulong *)(param_2 + 8);
    pbVar10 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar10 = param_2 + 1;
      uVar1 = (ulong)(*param_2 >> 1);
    }
    do {
      while( true ) {
        plVar13 = plVar9;
        __s2 = (void *)((long)plVar13 + 0x21);
        uVar3 = (ulong)(*(byte *)(plVar13 + 4) >> 1);
        if ((*(byte *)(plVar13 + 4) & 1) != 0) {
          __s2 = (void *)plVar13[6];
          uVar3 = plVar13[5];
        }
        __n = uVar3;
        if (uVar1 <= uVar3) {
          __n = uVar1;
        }
        iVar4 = memcmp(pbVar10,__s2,__n);
        bVar2 = uVar1 < uVar3;
        if (iVar4 != 0) {
          bVar2 = iVar4 < 0;
        }
        if (bVar2) break;
        uVar5 = memcmp(__s2,pbVar10,__n);
        uVar6 = (ulong)uVar5;
        bVar2 = uVar3 < uVar1;
        if (uVar5 != 0) {
          bVar2 = (int)uVar5 < 0;
        }
        if (!bVar2) {
          uVar7 = 0;
          lVar12 = *(long *)(lVar12 + 0x28);
          plVar9 = plVar13;
          goto joined_r0x00329344;
        }
        plVar9 = (long *)plVar13[1];
        if ((long *)plVar13[1] == (long *)0x0) {
          plVar14 = plVar13 + 1;
          goto LAB_00329298;
        }
      }
      plVar9 = (long *)*plVar13;
      plVar14 = plVar13;
    } while ((long *)*plVar13 != (long *)0x0);
  }
LAB_00329298:
  plVar9 = (long *)FUN_00759c3c(0x48);
  pbVar10 = (byte *)*param_4;
  if ((*pbVar10 & 1) == 0) {
    lVar16 = *(long *)(pbVar10 + 8);
    lVar15 = *(long *)pbVar10;
    plVar9[6] = *(long *)(pbVar10 + 0x10);
    plVar9[5] = lVar16;
    plVar9[4] = lVar15;
  }
  else {
                    /* try { // try from 003292d0 to 003292d7 has its CatchHandler @ 0032936c */
    FUN_002fb36c(plVar9 + 4,*(undefined8 *)(pbVar10 + 0x10),*(undefined8 *)(pbVar10 + 8));
  }
  plVar9[8] = 0;
  *plVar9 = 0;
  plVar9[1] = 0;
  plVar9[2] = (long)plVar13;
  *plVar14 = (long)plVar9;
  plVar11 = (long *)*param_1;
  *(undefined1 *)(plVar9 + 7) = 0;
  plVar13 = plVar9;
  if (*plVar11 != 0) {
    *param_1 = *plVar11;
    plVar13 = (long *)*plVar14;
  }
  uVar6 = FUN_00328410(param_1[1],plVar13);
  uVar7 = 1;
  param_1[2] = param_1[2] + 1;
  lVar12 = *(long *)(lVar12 + 0x28);
joined_r0x00329344:
  if (lVar12 != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6,uVar7);
  }
  return plVar9;
}


// ===== 00329394  FUN_00329394 =====

void FUN_00329394(undefined8 *param_1,char *param_2,byte *param_3)

{
  ulong uVar1;
  byte *pbVar2;
  size_t sVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  sVar3 = strlen(param_2);
  uVar1 = (ulong)(*param_3 >> 1);
  if ((*param_3 & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
  }
                    /* try { // try from 003293d0 to 00329407 has its CatchHandler @ 00329418 */
  FUN_00712ea8(param_1,uVar1 + sVar3);
  FUN_00713bdc(param_1,param_2);
  uVar1 = *(ulong *)(param_3 + 8);
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
    uVar1 = (ulong)(*param_3 >> 1);
  }
  FUN_0071302c(param_1,pbVar2,uVar1);
  return;
}


// ===== 00329434  FUN_00329434 =====

void FUN_00329434(long *param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_007a12f8 + 0x10;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *param_1 = (long)puVar1;
  FUN_007127d4(param_1 + 2,param_2 + 0x10);
  *param_1 = (long)&PTR_FUN_00760310;
  return;
}


// ===== 00329480  FUN_00329480 =====

undefined1  [16] FUN_00329480(long *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  undefined1 uVar2;
  long lVar3;
  uint7 uVar4;
  long *plVar5;
  ulong uVar6;
  ulong *puVar7;
  char *pcVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 local_70;
  uint7 uStack_6f;
  undefined8 uStack_68;
  undefined1 local_60;
  uint7 uStack_5f;
  undefined8 uStack_58;
  ulong local_50;
  ulong uStack_48;
  undefined1 local_40 [4];
  undefined4 local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((*(ulong *)(param_1[4] + (param_1[5] - 1U >> 3 & 0x1ffffffffffffff8)) >>
       (param_1[5] - 1U & 0x3f) & 1) == 0) {
    uVar13 = 0;
    lVar14 = 0;
  }
  else {
    uStack_48 = *param_2;
    local_50 = 7;
    if ((param_3 & 1) == 0) {
      plVar5 = (long *)param_1[0x10];
      local_40[0] = 5;
      local_3c = (undefined4)((ulong)(param_1[2] - param_1[1]) >> 3);
      if (plVar5 == (long *)0x0) {
        if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 00329698 to 0032969b has its CatchHandler @ 003296a8 */
          FUN_0030be88();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00329608 with catch @ 0032969c
                        */
          FUN_002fb198();
        }
        goto LAB_003296cc;
      }
                    /* try { // try from 00329500 to 0032950f has its CatchHandler @ 003296a8 */
      uVar6 = (**(code **)(*plVar5 + 0x30))(plVar5,&local_3c,local_40,&local_50);
      uVar13 = _local_60;
      if ((uVar6 & 1) != 0) goto LAB_00329514;
LAB_00329618:
      _local_60 = uVar13;
      uVar13 = 0;
      lVar14 = 0;
    }
    else {
LAB_00329514:
      uVar6 = uStack_48;
      uVar13 = _local_60;
      uVar4 = local_50._1_7_;
      local_60 = (undefined1)local_50;
      if (param_1[1] == param_1[2]) {
        puVar10 = (undefined1 *)*param_1;
        local_50 = (ulong)local_50._1_7_ << 8;
        uStack_48 = 0;
        uVar2 = *puVar10;
        uStack_58 = *(undefined8 *)(puVar10 + 8);
        *puVar10 = local_60;
        _local_60 = CONCAT71(uVar4,uVar2);
        *(ulong *)(puVar10 + 8) = uVar6;
                    /* try { // try from 003295a0 to 003295a7 has its CatchHandler @ 003296a0 */
        FUN_00313038((ulong)&local_60 | 8);
        lVar14 = *param_1;
      }
      else {
        pcVar8 = *(char **)(param_1[2] + -8);
        if (pcVar8 == (char *)0x0) goto LAB_00329618;
        _local_60 = uVar13;
        if (*pcVar8 == '\x02') {
          lVar14 = *(long *)(pcVar8 + 8);
          puVar1 = *(ulong **)(lVar14 + 8);
          if (puVar1 < *(ulong **)(lVar14 + 0x10)) {
            puVar7 = puVar1 + 2;
            puVar1[1] = uStack_48;
            *puVar1 = local_50;
            local_50 = local_50 & 0xffffffffffffff00;
            uStack_48 = 0;
          }
          else {
                    /* try { // try from 00329624 to 0032962f has its CatchHandler @ 003296a8 */
            puVar7 = (ulong *)FUN_00327550(lVar14,&local_50);
          }
          lVar11 = param_1[2];
          *(ulong **)(lVar14 + 8) = puVar7;
          lVar14 = *(long *)(*(long *)(*(long *)(lVar11 + -8) + 8) + 8) + -0x10;
        }
        else {
          uVar9 = param_1[8] - 1;
          uVar12 = *(ulong *)(param_1[7] + (uVar9 >> 3 & 0x1ffffffffffffff8));
          param_1[8] = uVar9;
          if ((uVar12 >> (uVar9 & 0x3f) & 1) == 0) goto LAB_00329618;
          puVar10 = (undefined1 *)param_1[10];
          local_50 = (ulong)local_50._1_7_ << 8;
          uStack_48 = 0;
          uVar2 = *puVar10;
          uStack_68 = *(undefined8 *)(puVar10 + 8);
          *puVar10 = local_60;
          _local_70 = CONCAT71(uVar4,uVar2);
          *(ulong *)(puVar10 + 8) = uVar6;
                    /* try { // try from 00329608 to 0032960f has its CatchHandler @ 0032969c */
          FUN_00313038((ulong)&local_70 | 8);
          lVar14 = param_1[10];
        }
      }
      uVar13 = 1;
    }
                    /* try { // try from 00329654 to 0032965b has its CatchHandler @ 003296a4 */
    FUN_00313038(&uStack_48,local_50 & 0xff);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    auVar15._8_8_ = lVar14;
    auVar15._0_8_ = uVar13;
    return auVar15;
  }
LAB_003296cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003296d0  FUN_003296d0 =====

undefined1  [16] FUN_003296d0(long *param_1,byte *param_2,ulong param_3)

{
  ulong *puVar1;
  undefined1 uVar2;
  long lVar3;
  uint7 uVar4;
  long *plVar5;
  ulong uVar6;
  ulong *puVar7;
  char *pcVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 local_70;
  uint7 uStack_6f;
  undefined8 uStack_68;
  undefined1 local_60;
  uint7 uStack_5f;
  undefined8 uStack_58;
  ulong local_50;
  ulong uStack_48;
  undefined1 local_40 [4];
  undefined4 local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((*(ulong *)(param_1[4] + (param_1[5] - 1U >> 3 & 0x1ffffffffffffff8)) >>
       (param_1[5] - 1U & 0x3f) & 1) == 0) {
    uVar13 = 0;
    lVar14 = 0;
  }
  else {
    uStack_48 = (ulong)*param_2;
    local_50 = 4;
    if ((param_3 & 1) == 0) {
      plVar5 = (long *)param_1[0x10];
      local_40[0] = 5;
      local_3c = (undefined4)((ulong)(param_1[2] - param_1[1]) >> 3);
      if (plVar5 == (long *)0x0) {
        if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 003298e4 to 003298e7 has its CatchHandler @ 003298f4 */
          FUN_0030be88();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00329854 with catch @ 003298e8
                        */
          FUN_002fb198();
        }
        goto LAB_00329918;
      }
                    /* try { // try from 0032974c to 0032975b has its CatchHandler @ 003298f4 */
      uVar6 = (**(code **)(*plVar5 + 0x30))(plVar5,&local_3c,local_40,&local_50);
      uVar13 = _local_60;
      if ((uVar6 & 1) != 0) goto LAB_00329760;
LAB_00329864:
      _local_60 = uVar13;
      uVar13 = 0;
      lVar14 = 0;
    }
    else {
LAB_00329760:
      uVar6 = uStack_48;
      uVar13 = _local_60;
      uVar4 = local_50._1_7_;
      local_60 = (undefined1)local_50;
      if (param_1[1] == param_1[2]) {
        puVar10 = (undefined1 *)*param_1;
        local_50 = (ulong)local_50._1_7_ << 8;
        uStack_48 = 0;
        uVar2 = *puVar10;
        uStack_58 = *(undefined8 *)(puVar10 + 8);
        *puVar10 = local_60;
        _local_60 = CONCAT71(uVar4,uVar2);
        *(ulong *)(puVar10 + 8) = uVar6;
                    /* try { // try from 003297ec to 003297f3 has its CatchHandler @ 003298ec */
        FUN_00313038((ulong)&local_60 | 8);
        lVar14 = *param_1;
      }
      else {
        pcVar8 = *(char **)(param_1[2] + -8);
        if (pcVar8 == (char *)0x0) goto LAB_00329864;
        _local_60 = uVar13;
        if (*pcVar8 == '\x02') {
          lVar14 = *(long *)(pcVar8 + 8);
          puVar1 = *(ulong **)(lVar14 + 8);
          if (puVar1 < *(ulong **)(lVar14 + 0x10)) {
            puVar7 = puVar1 + 2;
            puVar1[1] = uStack_48;
            *puVar1 = local_50;
            local_50 = local_50 & 0xffffffffffffff00;
            uStack_48 = 0;
          }
          else {
                    /* try { // try from 00329870 to 0032987b has its CatchHandler @ 003298f4 */
            puVar7 = (ulong *)FUN_00327550(lVar14,&local_50);
          }
          lVar11 = param_1[2];
          *(ulong **)(lVar14 + 8) = puVar7;
          lVar14 = *(long *)(*(long *)(*(long *)(lVar11 + -8) + 8) + 8) + -0x10;
        }
        else {
          uVar9 = param_1[8] - 1;
          uVar12 = *(ulong *)(param_1[7] + (uVar9 >> 3 & 0x1ffffffffffffff8));
          param_1[8] = uVar9;
          if ((uVar12 >> (uVar9 & 0x3f) & 1) == 0) goto LAB_00329864;
          puVar10 = (undefined1 *)param_1[10];
          local_50 = (ulong)local_50._1_7_ << 8;
          uStack_48 = 0;
          uVar2 = *puVar10;
          uStack_68 = *(undefined8 *)(puVar10 + 8);
          *puVar10 = local_60;
          _local_70 = CONCAT71(uVar4,uVar2);
          *(ulong *)(puVar10 + 8) = uVar6;
                    /* try { // try from 00329854 to 0032985b has its CatchHandler @ 003298e8 */
          FUN_00313038((ulong)&local_70 | 8);
          lVar14 = param_1[10];
        }
      }
      uVar13 = 1;
    }
                    /* try { // try from 003298a0 to 003298a7 has its CatchHandler @ 003298f0 */
    FUN_00313038(&uStack_48,local_50 & 0xff);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    auVar15._8_8_ = lVar14;
    auVar15._0_8_ = uVar13;
    return auVar15;
  }
LAB_00329918:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032991c  FUN_0032991c =====

undefined1  [16] FUN_0032991c(long *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 uStack_48;
  undefined1 local_40 [4];
  undefined4 local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((*(ulong *)(param_1[4] + (param_1[5] - 1U >> 3 & 0x1ffffffffffffff8)) >>
       (param_1[5] - 1U & 0x3f) & 1) == 0) {
    uVar12 = 0;
    lVar13 = 0;
  }
  else {
    local_50 = 0;
    uStack_48 = 0;
    if ((param_3 & 1) == 0) {
      plVar5 = (long *)param_1[0x10];
      local_40[0] = 5;
      local_3c = (undefined4)((ulong)(param_1[2] - param_1[1]) >> 3);
      if (plVar5 == (long *)0x0) {
        if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 00329b28 to 00329b2b has its CatchHandler @ 00329b38 */
          FUN_0030be88();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00329a98 with catch @ 00329b2c
                        */
          FUN_002fb198();
        }
        goto LAB_00329b5c;
      }
                    /* try { // try from 00329990 to 0032999f has its CatchHandler @ 00329b38 */
      uVar6 = (**(code **)(*plVar5 + 0x30))(plVar5,&local_3c,local_40,&local_50);
      if ((uVar6 & 1) != 0) goto LAB_003299a4;
LAB_00329aa8:
      uVar12 = 0;
      lVar13 = 0;
    }
    else {
LAB_003299a4:
      uVar12 = uStack_48;
      uVar4 = local_50;
      if (param_1[1] == param_1[2]) {
        puVar9 = (undefined1 *)*param_1;
        local_50 = 0;
        uStack_48 = 0;
        uVar2 = *puVar9;
        uStack_58 = *(undefined8 *)(puVar9 + 8);
        *puVar9 = uVar4;
        _local_60 = CONCAT71(uStack_4f,uVar2);
        *(undefined8 *)(puVar9 + 8) = uVar12;
                    /* try { // try from 00329a30 to 00329a37 has its CatchHandler @ 00329b30 */
        FUN_00313038((ulong)&local_60 | 8);
        lVar13 = *param_1;
      }
      else {
        pcVar8 = *(char **)(param_1[2] + -8);
        if (pcVar8 == (char *)0x0) goto LAB_00329aa8;
        if (*pcVar8 == '\x02') {
          lVar13 = *(long *)(pcVar8 + 8);
          puVar1 = *(undefined8 **)(lVar13 + 8);
          if (puVar1 < *(undefined8 **)(lVar13 + 0x10)) {
            puVar7 = puVar1 + 2;
            puVar1[1] = uStack_48;
            *puVar1 = CONCAT71(uStack_4f,local_50);
            local_50 = 0;
            uStack_48 = 0;
          }
          else {
                    /* try { // try from 00329ab4 to 00329abf has its CatchHandler @ 00329b38 */
            puVar7 = (undefined8 *)FUN_00327550(lVar13,&local_50);
          }
          lVar10 = param_1[2];
          *(undefined8 **)(lVar13 + 8) = puVar7;
          lVar13 = *(long *)(*(long *)(*(long *)(lVar10 + -8) + 8) + 8) + -0x10;
        }
        else {
          uVar6 = param_1[8] - 1;
          uVar11 = *(ulong *)(param_1[7] + (uVar6 >> 3 & 0x1ffffffffffffff8));
          param_1[8] = uVar6;
          if ((uVar11 >> (uVar6 & 0x3f) & 1) == 0) goto LAB_00329aa8;
          puVar9 = (undefined1 *)param_1[10];
          local_50 = 0;
          uStack_48 = 0;
          uVar2 = *puVar9;
          uStack_68 = *(undefined8 *)(puVar9 + 8);
          *puVar9 = uVar4;
          _local_70 = CONCAT71(uStack_4f,uVar2);
          *(undefined8 *)(puVar9 + 8) = uVar12;
                    /* try { // try from 00329a98 to 00329a9f has its CatchHandler @ 00329b2c */
          FUN_00313038((ulong)&local_70 | 8);
          lVar13 = param_1[10];
        }
      }
      uVar12 = 1;
    }
                    /* try { // try from 00329ae4 to 00329aeb has its CatchHandler @ 00329b34 */
    FUN_00313038(&uStack_48,local_50);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    auVar14._8_8_ = lVar13;
    auVar14._0_8_ = uVar12;
    return auVar14;
  }
LAB_00329b5c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00329b60  FUN_00329b60 =====

undefined1  [16] FUN_00329b60(long *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  undefined1 uVar2;
  long lVar3;
  uint7 uVar4;
  long *plVar5;
  ulong uVar6;
  ulong *puVar7;
  char *pcVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 local_70;
  uint7 uStack_6f;
  undefined8 uStack_68;
  undefined1 local_60;
  uint7 uStack_5f;
  undefined8 uStack_58;
  ulong local_50;
  ulong uStack_48;
  undefined1 local_40 [4];
  undefined4 local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((*(ulong *)(param_1[4] + (param_1[5] - 1U >> 3 & 0x1ffffffffffffff8)) >>
       (param_1[5] - 1U & 0x3f) & 1) == 0) {
    uVar13 = 0;
    lVar14 = 0;
  }
  else {
    uStack_48 = *param_2;
    local_50 = 5;
    if ((param_3 & 1) == 0) {
      plVar5 = (long *)param_1[0x10];
      local_40[0] = 5;
      local_3c = (undefined4)((ulong)(param_1[2] - param_1[1]) >> 3);
      if (plVar5 == (long *)0x0) {
        if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 00329d70 to 00329d73 has its CatchHandler @ 00329d80 */
          FUN_0030be88();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00329ce0 with catch @ 00329d74
                        */
          FUN_002fb198();
        }
        goto LAB_00329da4;
      }
                    /* try { // try from 00329bd8 to 00329be7 has its CatchHandler @ 00329d80 */
      uVar6 = (**(code **)(*plVar5 + 0x30))(plVar5,&local_3c,local_40,&local_50);
      uVar13 = _local_60;
      if ((uVar6 & 1) != 0) goto LAB_00329bec;
LAB_00329cf0:
      _local_60 = uVar13;
      uVar13 = 0;
      lVar14 = 0;
    }
    else {
LAB_00329bec:
      uVar6 = uStack_48;
      uVar13 = _local_60;
      uVar4 = local_50._1_7_;
      local_60 = (undefined1)local_50;
      if (param_1[1] == param_1[2]) {
        puVar10 = (undefined1 *)*param_1;
        local_50 = (ulong)local_50._1_7_ << 8;
        uStack_48 = 0;
        uVar2 = *puVar10;
        uStack_58 = *(undefined8 *)(puVar10 + 8);
        *puVar10 = local_60;
        _local_60 = CONCAT71(uVar4,uVar2);
        *(ulong *)(puVar10 + 8) = uVar6;
                    /* try { // try from 00329c78 to 00329c7f has its CatchHandler @ 00329d78 */
        FUN_00313038((ulong)&local_60 | 8);
        lVar14 = *param_1;
      }
      else {
        pcVar8 = *(char **)(param_1[2] + -8);
        if (pcVar8 == (char *)0x0) goto LAB_00329cf0;
        _local_60 = uVar13;
        if (*pcVar8 == '\x02') {
          lVar14 = *(long *)(pcVar8 + 8);
          puVar1 = *(ulong **)(lVar14 + 8);
          if (puVar1 < *(ulong **)(lVar14 + 0x10)) {
            puVar7 = puVar1 + 2;
            puVar1[1] = uStack_48;
            *puVar1 = local_50;
            local_50 = local_50 & 0xffffffffffffff00;
            uStack_48 = 0;
          }
          else {
                    /* try { // try from 00329cfc to 00329d07 has its CatchHandler @ 00329d80 */
            puVar7 = (ulong *)FUN_00327550(lVar14,&local_50);
          }
          lVar11 = param_1[2];
          *(ulong **)(lVar14 + 8) = puVar7;
          lVar14 = *(long *)(*(long *)(*(long *)(lVar11 + -8) + 8) + 8) + -0x10;
        }
        else {
          uVar9 = param_1[8] - 1;
          uVar12 = *(ulong *)(param_1[7] + (uVar9 >> 3 & 0x1ffffffffffffff8));
          param_1[8] = uVar9;
          if ((uVar12 >> (uVar9 & 0x3f) & 1) == 0) goto LAB_00329cf0;
          puVar10 = (undefined1 *)param_1[10];
          local_50 = (ulong)local_50._1_7_ << 8;
          uStack_48 = 0;
          uVar2 = *puVar10;
          uStack_68 = *(undefined8 *)(puVar10 + 8);
          *puVar10 = local_60;
          _local_70 = CONCAT71(uVar4,uVar2);
          *(ulong *)(puVar10 + 8) = uVar6;
                    /* try { // try from 00329ce0 to 00329ce7 has its CatchHandler @ 00329d74 */
          FUN_00313038((ulong)&local_70 | 8);
          lVar14 = param_1[10];
        }
      }
      uVar13 = 1;
    }
                    /* try { // try from 00329d2c to 00329d33 has its CatchHandler @ 00329d7c */
    FUN_00313038(&uStack_48,local_50 & 0xff);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    auVar15._8_8_ = lVar14;
    auVar15._0_8_ = uVar13;
    return auVar15;
  }
LAB_00329da4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00329da8  FUN_00329da8 =====

undefined1  [16] FUN_00329da8(long *param_1,byte *param_2,ulong param_3)

{
  ulong *puVar1;
  undefined1 uVar2;
  long lVar3;
  uint7 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 local_80;
  uint7 uStack_7f;
  undefined8 uStack_78;
  undefined1 local_70;
  uint7 uStack_6f;
  undefined8 uStack_68;
  ulong local_60;
  undefined8 *puStack_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((*(ulong *)(param_1[4] + (param_1[5] - 1U >> 3 & 0x1ffffffffffffff8)) >>
       (param_1[5] - 1U & 0x3f) & 1) == 0) {
    uVar9 = 0;
    lVar14 = 0;
  }
  else {
    puStack_58 = (undefined8 *)0x0;
    local_60 = 3;
                    /* try { // try from 00329e00 to 00329e07 has its CatchHandler @ 0032a020 */
    puVar5 = (undefined8 *)FUN_00759c3c(0x18);
    if ((*param_2 & 1) == 0) {
      uVar15 = *(undefined8 *)param_2;
      uVar9 = *(undefined8 *)(param_2 + 0x10);
      puVar5[1] = *(undefined8 *)(param_2 + 8);
      *puVar5 = uVar15;
      puVar5[2] = uVar9;
    }
    else {
                    /* try { // try from 00329e38 to 00329e3f has its CatchHandler @ 0032a00c */
      FUN_002fb36c(puVar5,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
    }
    puStack_58 = puVar5;
    if ((param_3 & 1) == 0) {
      plVar6 = (long *)param_1[0x10];
      local_50[0] = 5;
      local_4c = (undefined4)((ulong)(param_1[2] - param_1[1]) >> 3);
      if (plVar6 == (long *)0x0) {
        if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 0032a000 to 0032a003 has its CatchHandler @ 0032a030 */
          FUN_0030be88();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00329f6c with catch @ 0032a004
                        */
          FUN_002fb198();
        }
        goto LAB_0032a054;
      }
                    /* try { // try from 00329e70 to 00329e7f has its CatchHandler @ 0032a030 */
      uVar7 = (**(code **)(*plVar6 + 0x30))(plVar6,&local_4c,local_50,&local_60);
      uVar9 = _local_70;
      if ((uVar7 & 1) != 0) goto LAB_00329e84;
LAB_00329f7c:
      _local_70 = uVar9;
      uVar9 = 0;
      lVar14 = 0;
    }
    else {
LAB_00329e84:
      puVar5 = puStack_58;
      uVar9 = _local_70;
      uVar4 = local_60._1_7_;
      local_70 = (undefined1)local_60;
      if (param_1[1] == param_1[2]) {
        puVar11 = (undefined1 *)*param_1;
        local_60 = (ulong)local_60._1_7_ << 8;
        puStack_58 = (undefined8 *)0x0;
        uVar2 = *puVar11;
        uStack_68 = *(undefined8 *)(puVar11 + 8);
        *puVar11 = local_70;
        _local_70 = CONCAT71(uVar4,uVar2);
        *(undefined8 **)(puVar11 + 8) = puVar5;
                    /* try { // try from 00329f04 to 00329f0b has its CatchHandler @ 0032a008 */
        FUN_00313038((ulong)&local_70 | 8);
        lVar14 = *param_1;
      }
      else {
        pcVar10 = *(char **)(param_1[2] + -8);
        if (pcVar10 == (char *)0x0) goto LAB_00329f7c;
        _local_70 = uVar9;
        if (*pcVar10 == '\x02') {
          lVar14 = *(long *)(pcVar10 + 8);
          puVar1 = *(ulong **)(lVar14 + 8);
          if (puVar1 < *(ulong **)(lVar14 + 0x10)) {
            puVar8 = puVar1 + 2;
            puVar1[1] = (ulong)puStack_58;
            *puVar1 = local_60;
            local_60 = local_60 & 0xffffffffffffff00;
            puStack_58 = (undefined8 *)0x0;
          }
          else {
                    /* try { // try from 00329f88 to 00329f93 has its CatchHandler @ 0032a030 */
            puVar8 = (ulong *)FUN_00327550(lVar14,&local_60);
          }
          lVar12 = param_1[2];
          *(ulong **)(lVar14 + 8) = puVar8;
          lVar14 = *(long *)(*(long *)(*(long *)(lVar12 + -8) + 8) + 8) + -0x10;
        }
        else {
          uVar7 = param_1[8] - 1;
          uVar13 = *(ulong *)(param_1[7] + (uVar7 >> 3 & 0x1ffffffffffffff8));
          param_1[8] = uVar7;
          if ((uVar13 >> (uVar7 & 0x3f) & 1) == 0) goto LAB_00329f7c;
          puVar11 = (undefined1 *)param_1[10];
          local_60 = (ulong)local_60._1_7_ << 8;
          puStack_58 = (undefined8 *)0x0;
          uVar2 = *puVar11;
          uStack_78 = *(undefined8 *)(puVar11 + 8);
          *puVar11 = local_70;
          _local_80 = CONCAT71(uVar4,uVar2);
          *(undefined8 **)(puVar11 + 8) = puVar5;
                    /* try { // try from 00329f6c to 00329f73 has its CatchHandler @ 0032a004 */
          FUN_00313038((ulong)&local_80 | 8);
          lVar14 = param_1[10];
        }
      }
      uVar9 = 1;
    }
                    /* try { // try from 00329fb8 to 00329fbf has its CatchHandler @ 0032a01c */
    FUN_00313038(&puStack_58,local_60 & 0xff);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    auVar16._8_8_ = lVar14;
    auVar16._0_8_ = uVar9;
    return auVar16;
  }
LAB_0032a054:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032a058  FUN_0032a058 =====

undefined1  [16] FUN_0032a058(long *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  undefined1 uVar2;
  long lVar3;
  uint7 uVar4;
  long *plVar5;
  ulong uVar6;
  ulong *puVar7;
  char *pcVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 local_70;
  uint7 uStack_6f;
  undefined8 uStack_68;
  undefined1 local_60;
  uint7 uStack_5f;
  undefined8 uStack_58;
  ulong local_50;
  ulong uStack_48;
  undefined1 local_40 [4];
  undefined4 local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((*(ulong *)(param_1[4] + (param_1[5] - 1U >> 3 & 0x1ffffffffffffff8)) >>
       (param_1[5] - 1U & 0x3f) & 1) == 0) {
    uVar13 = 0;
    lVar14 = 0;
  }
  else {
    uStack_48 = *param_2;
    local_50 = 6;
    if ((param_3 & 1) == 0) {
      plVar5 = (long *)param_1[0x10];
      local_40[0] = 5;
      local_3c = (undefined4)((ulong)(param_1[2] - param_1[1]) >> 3);
      if (plVar5 == (long *)0x0) {
        if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 0032a26c to 0032a26f has its CatchHandler @ 0032a27c */
          FUN_0030be88();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0032a1dc with catch @ 0032a270
                        */
          FUN_002fb198();
        }
        goto LAB_0032a2a0;
      }
                    /* try { // try from 0032a0d4 to 0032a0e3 has its CatchHandler @ 0032a27c */
      uVar6 = (**(code **)(*plVar5 + 0x30))(plVar5,&local_3c,local_40,&local_50);
      uVar13 = _local_60;
      if ((uVar6 & 1) != 0) goto LAB_0032a0e8;
LAB_0032a1ec:
      _local_60 = uVar13;
      uVar13 = 0;
      lVar14 = 0;
    }
    else {
LAB_0032a0e8:
      uVar6 = uStack_48;
      uVar13 = _local_60;
      uVar4 = local_50._1_7_;
      local_60 = (undefined1)local_50;
      if (param_1[1] == param_1[2]) {
        puVar10 = (undefined1 *)*param_1;
        local_50 = (ulong)local_50._1_7_ << 8;
        uStack_48 = 0;
        uVar2 = *puVar10;
        uStack_58 = *(undefined8 *)(puVar10 + 8);
        *puVar10 = local_60;
        _local_60 = CONCAT71(uVar4,uVar2);
        *(ulong *)(puVar10 + 8) = uVar6;
                    /* try { // try from 0032a174 to 0032a17b has its CatchHandler @ 0032a274 */
        FUN_00313038((ulong)&local_60 | 8);
        lVar14 = *param_1;
      }
      else {
        pcVar8 = *(char **)(param_1[2] + -8);
        if (pcVar8 == (char *)0x0) goto LAB_0032a1ec;
        _local_60 = uVar13;
        if (*pcVar8 == '\x02') {
          lVar14 = *(long *)(pcVar8 + 8);
          puVar1 = *(ulong **)(lVar14 + 8);
          if (puVar1 < *(ulong **)(lVar14 + 0x10)) {
            puVar7 = puVar1 + 2;
            puVar1[1] = uStack_48;
            *puVar1 = local_50;
            local_50 = local_50 & 0xffffffffffffff00;
            uStack_48 = 0;
          }
          else {
                    /* try { // try from 0032a1f8 to 0032a203 has its CatchHandler @ 0032a27c */
            puVar7 = (ulong *)FUN_00327550(lVar14,&local_50);
          }
          lVar11 = param_1[2];
          *(ulong **)(lVar14 + 8) = puVar7;
          lVar14 = *(long *)(*(long *)(*(long *)(lVar11 + -8) + 8) + 8) + -0x10;
        }
        else {
          uVar9 = param_1[8] - 1;
          uVar12 = *(ulong *)(param_1[7] + (uVar9 >> 3 & 0x1ffffffffffffff8));
          param_1[8] = uVar9;
          if ((uVar12 >> (uVar9 & 0x3f) & 1) == 0) goto LAB_0032a1ec;
          puVar10 = (undefined1 *)param_1[10];
          local_50 = (ulong)local_50._1_7_ << 8;
          uStack_48 = 0;
          uVar2 = *puVar10;
          uStack_68 = *(undefined8 *)(puVar10 + 8);
          *puVar10 = local_60;
          _local_70 = CONCAT71(uVar4,uVar2);
          *(ulong *)(puVar10 + 8) = uVar6;
                    /* try { // try from 0032a1dc to 0032a1e3 has its CatchHandler @ 0032a270 */
          FUN_00313038((ulong)&local_70 | 8);
          lVar14 = param_1[10];
        }
      }
      uVar13 = 1;
    }
                    /* try { // try from 0032a228 to 0032a22f has its CatchHandler @ 0032a278 */
    FUN_00313038(&uStack_48,local_50 & 0xff);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    auVar15._8_8_ = lVar14;
    auVar15._0_8_ = uVar13;
    return auVar15;
  }
LAB_0032a2a0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032a2a4  FUN_0032a2a4 =====

void FUN_0032a2a4(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_007a12f8 + 0x10;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *param_1 = (long)puVar1;
  FUN_007127d4(param_1 + 2,param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x20);
  *param_1 = (long)&PTR_FUN_00760668;
  param_1[4] = lVar2;
  return;
}


// ===== 0032a2fc  FUN_0032a2fc =====

void FUN_0032a2fc(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a12f8 + 0x10);
  FUN_0073a2c4(param_1 + 2);
  FUN_0073a174(param_1);
  free(param_1);
  return;
}


// ===== 0032a338  FUN_0032a338 =====

void FUN_0032a338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ppuStack_68 = &local_70;
  puStack_60 = &local_90;
  uStack_58 = 0xffffff80ffffffe0;
  local_90 = param_6;
  uStack_88 = param_7;
  local_80 = param_8;
  uStack_78 = param_9;
  local_70 = (undefined1 *)register0x00000008;
  __vsnprintf_chk(param_2,param_4,0,9,"<U+%.4X>",&local_70,param_8,param_9,param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032a3dc  FUN_0032a3dc =====

void FUN_0032a3dc(undefined8 *param_1,byte *param_2,char *param_3,byte *param_4,char *param_5,
                 byte *param_6,byte *param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte bVar5;
  size_t sVar6;
  size_t sVar7;
  ulong uVar8;
  
  bVar5 = *param_2;
  uVar8 = *(ulong *)(param_2 + 8);
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar3 = uVar8;
  }
  param_1[2] = 0;
  sVar6 = strlen(param_3);
  uVar8 = (ulong)(*param_4 >> 1);
  if ((*param_4 & 1) != 0) {
    uVar8 = *(ulong *)(param_4 + 8);
  }
  sVar7 = strlen(param_5);
  uVar1 = (ulong)(*param_6 >> 1);
  if ((*param_6 & 1) != 0) {
    uVar1 = *(ulong *)(param_6 + 8);
  }
  uVar2 = (ulong)(*param_7 >> 1);
  if ((*param_7 & 1) != 0) {
    uVar2 = *(ulong *)(param_7 + 8);
  }
                    /* try { // try from 0032a490 to 0032a533 has its CatchHandler @ 0032a550 */
  FUN_00712ea8(param_1,uVar3 + sVar6 + sVar7 + uVar8 + uVar1 + uVar2);
  uVar3 = *(ulong *)(param_2 + 8);
  pbVar4 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar4 = param_2 + 1;
    uVar3 = (ulong)(*param_2 >> 1);
  }
  FUN_0071302c(param_1,pbVar4,uVar3);
  FUN_00713bdc(param_1,param_3);
  uVar3 = *(ulong *)(param_4 + 8);
  pbVar4 = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    pbVar4 = param_4 + 1;
    uVar3 = (ulong)(*param_4 >> 1);
  }
  FUN_0071302c(param_1,pbVar4,uVar3);
  FUN_00713bdc(param_1,param_5);
  uVar3 = *(ulong *)(param_6 + 8);
  pbVar4 = *(byte **)(param_6 + 0x10);
  if ((*param_6 & 1) == 0) {
    pbVar4 = param_6 + 1;
    uVar3 = (ulong)(*param_6 >> 1);
  }
  FUN_0071302c(param_1,pbVar4,uVar3);
  uVar3 = *(ulong *)(param_7 + 8);
  pbVar4 = *(byte **)(param_7 + 0x10);
  if ((*param_7 & 1) == 0) {
    pbVar4 = param_7 + 1;
    uVar3 = (ulong)(*param_7 >> 1);
  }
  FUN_0071302c(param_1,pbVar4,uVar3);
  return;
}


// ===== 0032a56c  FUN_0032a56c =====

void FUN_0032a56c(undefined8 param_1,long param_2)

{
  long lVar1;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00714ba0(local_50,*(long *)(param_2 + 0x10) + 1);
                    /* try { // try from 0032a5a8 to 0032a5af has its CatchHandler @ 0032a670 */
  FUN_00714ba0(local_68,*(undefined8 *)(param_2 + 8));
                    /* try { // try from 0032a5b0 to 0032a5cf has its CatchHandler @ 0032a630 */
  FUN_0032a698(param_1," at line ",local_50,", column ",local_68);
  if ((local_68[0] & 1) != 0) {
    free(local_58);
  }
  if ((local_50[0] & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
    free(local_40);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032a698  FUN_0032a698 =====

void FUN_0032a698(undefined8 *param_1,char *param_2,byte *param_3,char *param_4,byte *param_5)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  size_t sVar4;
  size_t sVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  sVar4 = strlen(param_2);
  uVar2 = (ulong)(*param_3 >> 1);
  if ((*param_3 & 1) != 0) {
    uVar2 = *(ulong *)(param_3 + 8);
  }
  sVar5 = strlen(param_4);
  uVar1 = (ulong)(*param_5 >> 1);
  if ((*param_5 & 1) != 0) {
    uVar1 = *(ulong *)(param_5 + 8);
  }
                    /* try { // try from 0032a70c to 0032a76f has its CatchHandler @ 0032a788 */
  FUN_00712ea8(param_1,sVar5 + sVar4 + uVar2 + uVar1);
  FUN_00713bdc(param_1,param_2);
  uVar2 = *(ulong *)(param_3 + 8);
  pbVar3 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar3 = param_3 + 1;
    uVar2 = (ulong)(*param_3 >> 1);
  }
  FUN_0071302c(param_1,pbVar3,uVar2);
  FUN_00713bdc(param_1,param_4);
  uVar2 = *(ulong *)(param_5 + 8);
  pbVar3 = *(byte **)(param_5 + 0x10);
  if ((*param_5 & 1) == 0) {
    pbVar3 = param_5 + 1;
    uVar2 = (ulong)(*param_5 >> 1);
  }
  FUN_0071302c(param_1,pbVar3,uVar2);
  return;
}


// ===== 0032a7a4  FUN_0032a7a4 =====

void FUN_0032a7a4(undefined8 *param_1,undefined8 *param_2,char *param_3,byte *param_4,
                 undefined1 *param_5)

{
  ulong uVar1;
  byte *pbVar2;
  char *__s;
  size_t sVar3;
  size_t sVar4;
  
  __s = (char *)*param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  sVar3 = strlen(__s);
  sVar4 = strlen(param_3);
  uVar1 = (ulong)(*param_4 >> 1);
  if ((*param_4 & 1) != 0) {
    uVar1 = *(ulong *)(param_4 + 8);
  }
                    /* try { // try from 0032a804 to 0032a853 has its CatchHandler @ 0032a868 */
  FUN_00712ea8(param_1,sVar3 + sVar4 + uVar1 + 1);
  FUN_00713bdc(param_1,*param_2);
  FUN_00713bdc(param_1,param_3);
  uVar1 = *(ulong *)(param_4 + 8);
  pbVar2 = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    pbVar2 = param_4 + 1;
    uVar1 = (ulong)(*param_4 >> 1);
  }
  FUN_0071302c(param_1,pbVar2,uVar1);
  FUN_007132e8(param_1,*param_5);
  return;
}


// ===== 0032a884  FUN_0032a884 =====

undefined8 FUN_0032a884(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  void *__dest;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  void *__src;
  long lVar8;
  undefined8 *puVar9;
  undefined1 auStack_98 [24];
  undefined1 local_80 [24];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_80[0] = 1;
  uVar4 = FUN_0032ada8(param_1,local_80);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 < *(undefined8 **)(param_1 + 0x18)) {
    puVar9 = puVar2 + 1;
    *puVar2 = uVar4;
  }
  else {
    __src = *(void **)(param_1 + 8);
    lVar8 = (long)puVar2 - (long)__src >> 3;
    uVar6 = lVar8 + 1;
    if (uVar6 >> 0x3d != 0) {
      if (*(long *)(lVar3 + 0x28) != local_68) goto LAB_0032aae8;
      FUN_00327678(param_1 + 8);
LAB_0032aa64:
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_002f9ee0();
      }
      goto LAB_0032aae8;
    }
    uVar5 = (long)*(undefined8 **)(param_1 + 0x18) - (long)__src;
    uVar7 = (long)uVar5 >> 2;
    if (uVar7 <= uVar6) {
      uVar7 = uVar6;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_0032aa64;
      __dest = (void *)FUN_00759c3c(uVar7 << 3);
    }
    puVar1 = (undefined8 *)((long)__dest + lVar8 * 8);
    puVar9 = puVar1 + 1;
    *puVar1 = uVar4;
    memcpy(__dest,__src,(long)puVar2 - (long)__src);
    *(void **)(param_1 + 8) = __dest;
    *(undefined8 **)(param_1 + 0x10) = puVar9;
    *(void **)(param_1 + 0x18) = (void *)((long)__dest + uVar7 * 8);
    if (__src != (void *)0x0) {
      free(__src);
    }
  }
  *(undefined8 **)(param_1 + 0x10) = puVar9;
  if (param_2 != 0xffffffffffffffff) {
    if ((ulong)*(byte *)puVar9[-1] < 3) {
      uVar6 = *(ulong *)(&DAT_00201110 + (ulong)*(byte *)puVar9[-1] * 8);
    }
    else {
      uVar6 = 1;
    }
    if (uVar6 < param_2) {
      uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 0032a9e4 to 0032a9ef has its CatchHandler @ 0032aac4 */
      FUN_00714ba0(auStack_98,param_2);
                    /* try { // try from 0032a9f0 to 0032aa03 has its CatchHandler @ 0032aaac */
      FUN_003274b0(local_80,"excessive object size: ",auStack_98);
                    /* try { // try from 0032aa10 to 0032aa4b has its CatchHandler @ 0032aa78 */
      FUN_003272c0(uVar4,0x198,local_80,*(undefined8 *)(*(long *)(param_1 + 0x10) + -8));
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar4,PTR_PTR_007a1318,PTR_FUN_007a12f0);
      }
      goto LAB_0032aae8;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return 1;
  }
LAB_0032aae8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032aaec  FUN_0032aaec =====

undefined8 FUN_0032aaec(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  void *__dest;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  void *__src;
  long lVar8;
  undefined8 *puVar9;
  undefined1 auStack_98 [24];
  undefined1 local_80 [24];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_80[0] = 2;
  uVar4 = FUN_0032ada8(param_1,local_80);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 < *(undefined8 **)(param_1 + 0x18)) {
    puVar9 = puVar2 + 1;
    *puVar2 = uVar4;
  }
  else {
    __src = *(void **)(param_1 + 8);
    lVar8 = (long)puVar2 - (long)__src >> 3;
    uVar6 = lVar8 + 1;
    if (uVar6 >> 0x3d != 0) {
      if (*(long *)(lVar3 + 0x28) != local_68) goto LAB_0032ad50;
      FUN_00327678(param_1 + 8);
LAB_0032accc:
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_002f9ee0();
      }
      goto LAB_0032ad50;
    }
    uVar5 = (long)*(undefined8 **)(param_1 + 0x18) - (long)__src;
    uVar7 = (long)uVar5 >> 2;
    if (uVar7 <= uVar6) {
      uVar7 = uVar6;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_0032accc;
      __dest = (void *)FUN_00759c3c(uVar7 << 3);
    }
    puVar1 = (undefined8 *)((long)__dest + lVar8 * 8);
    puVar9 = puVar1 + 1;
    *puVar1 = uVar4;
    memcpy(__dest,__src,(long)puVar2 - (long)__src);
    *(void **)(param_1 + 8) = __dest;
    *(undefined8 **)(param_1 + 0x10) = puVar9;
    *(void **)(param_1 + 0x18) = (void *)((long)__dest + uVar7 * 8);
    if (__src != (void *)0x0) {
      free(__src);
    }
  }
  *(undefined8 **)(param_1 + 0x10) = puVar9;
  if (param_2 != 0xffffffffffffffff) {
    if ((ulong)*(byte *)puVar9[-1] < 3) {
      uVar6 = *(ulong *)(&DAT_00201110 + (ulong)*(byte *)puVar9[-1] * 8);
    }
    else {
      uVar6 = 1;
    }
    if (uVar6 < param_2) {
      uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 0032ac4c to 0032ac57 has its CatchHandler @ 0032ad2c */
      FUN_00714ba0(auStack_98,param_2);
                    /* try { // try from 0032ac58 to 0032ac6b has its CatchHandler @ 0032ad14 */
      FUN_00329394(local_80,"excessive array size: ",auStack_98);
                    /* try { // try from 0032ac78 to 0032acb3 has its CatchHandler @ 0032ace0 */
      FUN_003272c0(uVar4,0x198,local_80,*(undefined8 *)(*(long *)(param_1 + 0x10) + -8));
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar4,PTR_PTR_007a1318,PTR_FUN_007a12f0);
      }
      goto LAB_0032ad50;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return 1;
  }
LAB_0032ad50:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032ad54  FUN_0032ad54 =====

undefined8 FUN_0032ad54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (*(char *)(param_1 + 0x29) == '\0') {
    return 0;
  }
  uVar1 = FUN_00753a74(0x20);
  FUN_00329434(uVar1,param_4);
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(uVar1,PTR_PTR_007a1318,PTR_FUN_007a12f0);
}


// ===== 0032ada8  FUN_0032ada8 =====

void FUN_0032ada8(long *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 *puVar3;
  char *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1[1] == param_1[2]) {
    local_48 = *param_2;
    FUN_00321ba8(&local_40);
    puVar3 = (undefined1 *)*param_1;
    uVar1 = *puVar3;
    *puVar3 = local_48;
    uVar6 = *(undefined8 *)(puVar3 + 8);
    *(undefined8 *)(puVar3 + 8) = local_40;
                    /* try { // try from 0032ae4c to 0032ae53 has its CatchHandler @ 0032af08 */
    local_48 = uVar1;
    local_40 = uVar6;
    FUN_00313038(&local_40);
    lVar7 = *param_1;
  }
  else {
    pcVar4 = *(char **)(param_1[2] + -8);
    if (*pcVar4 == '\x02') {
      lVar7 = *(long *)(pcVar4 + 8);
      puVar3 = *(undefined1 **)(lVar7 + 8);
      if (puVar3 < *(undefined1 **)(lVar7 + 0x10)) {
        *puVar3 = *param_2;
                    /* try { // try from 0032ae04 to 0032ae07 has its CatchHandler @ 0032aee8 */
        FUN_00321ba8(puVar3 + 8);
        puVar3 = puVar3 + 0x10;
        *(undefined1 **)(lVar7 + 8) = puVar3;
      }
      else {
        puVar3 = (undefined1 *)FUN_0032af0c(lVar7);
      }
      lVar5 = param_1[2];
      *(undefined1 **)(lVar7 + 8) = puVar3;
      lVar7 = *(long *)(*(long *)(*(long *)(lVar5 + -8) + 8) + 8) + -0x10;
    }
    else {
      uVar1 = *param_2;
      FUN_00321ba8(&local_50);
      puVar3 = (undefined1 *)param_1[4];
      *puVar3 = uVar1;
      uVar6 = *(undefined8 *)(puVar3 + 8);
      *(undefined8 *)(puVar3 + 8) = local_50;
                    /* try { // try from 0032ae94 to 0032ae9b has its CatchHandler @ 0032af04 */
      local_50 = uVar6;
      FUN_00313038(&local_50);
      lVar7 = param_1[4];
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar7);
}


// ===== 0032af0c  FUN_0032af0c =====

undefined1 * FUN_0032af0c(long *param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *__ptr;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar10 = param_1[1] - *param_1 >> 4;
  uVar1 = lVar10 + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar7 = param_1[2] - *param_1;
    uVar9 = (long)uVar7 >> 3;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7fffffffffffffef < uVar7) {
      uVar9 = 0xfffffffffffffff;
    }
    if (uVar9 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar9 >> 0x3c != 0) goto LAB_0032b080;
      lVar4 = FUN_00759c3c(uVar9 << 4);
    }
    puVar2 = (undefined1 *)(lVar4 + lVar10 * 0x10);
    *puVar2 = *param_2;
                    /* try { // try from 0032afb0 to 0032afb7 has its CatchHandler @ 0032b094 */
    FUN_00321ba8(puVar2 + 8);
    puVar11 = (undefined8 *)*param_1;
    __ptr = (undefined8 *)param_1[1];
    lVar10 = (long)puVar11 - (long)__ptr;
    puVar6 = puVar11;
    puVar8 = (undefined8 *)(puVar2 + lVar10);
    if (lVar10 != 0) {
      do {
        uVar12 = *puVar6;
        puVar8[1] = puVar6[1];
        *puVar8 = uVar12;
        *(undefined1 *)puVar6 = 0;
        puVar6[1] = 0;
        puVar6 = puVar6 + 2;
        puVar8 = puVar8 + 2;
      } while (puVar6 != __ptr);
      do {
                    /* try { // try from 0032affc to 0032b003 has its CatchHandler @ 0032b0bc */
        FUN_00313038(puVar11 + 1,*(undefined1 *)puVar11);
        puVar11 = puVar11 + 2;
      } while (puVar11 != __ptr);
      __ptr = (undefined8 *)*param_1;
    }
    *param_1 = (long)(puVar2 + lVar10);
    param_1[1] = (long)(puVar2 + 0x10);
    param_1[2] = lVar4 + uVar9 * 0x10;
    if (__ptr != (undefined8 *)0x0) {
      free(__ptr);
    }
    if (*(long *)(lVar3 + 0x28) == lVar5) {
      return puVar2 + 0x10;
    }
  }
  else {
    if (*(long *)(lVar3 + 0x28) != lVar5) goto LAB_0032b0b8;
    FUN_003135c8(param_1);
LAB_0032b080:
    if (*(long *)(lVar3 + 0x28) == lVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
  }
LAB_0032b0b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032b0c0  FUN_0032b0c0 =====

void FUN_0032b0c0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1[1] == param_1[2]) {
    pbVar6 = (byte *)*param_1;
    uVar10 = *param_2;
    bVar2 = *pbVar6;
    *pbVar6 = 7;
    local_40 = *(undefined8 *)(pbVar6 + 8);
    *(undefined8 *)(pbVar6 + 8) = uVar10;
    local_48 = (ulong)bVar2;
                    /* try { // try from 0032b158 to 0032b15f has its CatchHandler @ 0032b1f0 */
    FUN_00313038(&local_40);
    lVar9 = *param_1;
  }
  else {
    pcVar5 = *(char **)(param_1[2] + -8);
    if (*pcVar5 == '\x02') {
      lVar9 = *(long *)(pcVar5 + 8);
      puVar1 = *(undefined8 **)(lVar9 + 8);
      if (puVar1 < *(undefined8 **)(lVar9 + 0x10)) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar4 = puVar1 + 2;
        uVar10 = *param_2;
        *(undefined1 *)puVar1 = 7;
        puVar1[1] = uVar10;
      }
      else {
        puVar4 = (undefined8 *)FUN_0032b1f4(lVar9);
      }
      lVar8 = param_1[2];
      *(undefined8 **)(lVar9 + 8) = puVar4;
      lVar9 = *(long *)(*(long *)(*(long *)(lVar8 + -8) + 8) + 8) + -0x10;
    }
    else {
      puVar7 = (undefined1 *)param_1[4];
      uVar10 = *param_2;
      *puVar7 = 7;
      local_50 = *(undefined8 *)(puVar7 + 8);
      *(undefined8 *)(puVar7 + 8) = uVar10;
                    /* try { // try from 0032b194 to 0032b19b has its CatchHandler @ 0032b1ec */
      FUN_00313038(&local_50);
      lVar9 = param_1[4];
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar9);
}


// ===== 0032b1f4  FUN_0032b1f4 =====

undefined8 * FUN_0032b1f4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *__ptr;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar7 = (undefined8 *)*param_1;
  __ptr = (undefined8 *)param_1[1];
  lVar8 = (long)__ptr - (long)puVar7 >> 4;
  uVar1 = lVar8 + 1;
  if (uVar1 >> 0x3c != 0) {
    FUN_003135c8(param_1);
LAB_0032b310:
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  uVar6 = param_1[2] - (long)puVar7 >> 3;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  if (0x7fffffffffffffef < (ulong)(param_1[2] - (long)puVar7)) {
    uVar6 = 0xfffffffffffffff;
  }
  if (uVar6 == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    if (uVar6 >> 0x3c != 0) goto LAB_0032b310;
    puVar3 = (undefined8 *)FUN_00759c3c(uVar6 << 4);
  }
  puVar2 = puVar3 + lVar8 * 2;
  uVar9 = *param_2;
  *puVar2 = 0;
  *(undefined1 *)puVar2 = 7;
  puVar2[1] = uVar9;
  puVar4 = puVar7;
  puVar5 = puVar3;
  if (puVar7 != __ptr) {
    do {
      uVar9 = *puVar4;
      puVar5[1] = puVar4[1];
      *puVar5 = uVar9;
      *(undefined1 *)puVar4 = 0;
      puVar4[1] = 0;
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 2;
    } while (puVar4 != __ptr);
    do {
                    /* try { // try from 0032b2b8 to 0032b2bf has its CatchHandler @ 0032b314 */
      FUN_00313038(puVar7 + 1,*(undefined1 *)puVar7);
      puVar7 = puVar7 + 2;
    } while (puVar7 != __ptr);
    __ptr = (undefined8 *)*param_1;
  }
  *param_1 = (long)puVar3;
  param_1[1] = (long)(puVar2 + 2);
  param_1[2] = (long)(puVar3 + uVar6 * 2);
  if (__ptr != (undefined8 *)0x0) {
    free(__ptr);
  }
  return puVar2 + 2;
}


// ===== 0032b318  FUN_0032b318 =====

void FUN_0032b318(long *param_1,byte *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1[1] == param_1[2]) {
    pbVar7 = (byte *)*param_1;
    bVar2 = *param_2;
    bVar3 = *pbVar7;
    *pbVar7 = 4;
    local_40 = *(undefined8 *)(pbVar7 + 8);
    *(ulong *)(pbVar7 + 8) = (ulong)bVar2;
    local_48 = (ulong)bVar3;
                    /* try { // try from 0032b3b0 to 0032b3b7 has its CatchHandler @ 0032b448 */
    FUN_00313038(&local_40);
    lVar10 = *param_1;
  }
  else {
    pcVar6 = *(char **)(param_1[2] + -8);
    if (*pcVar6 == '\x02') {
      lVar10 = *(long *)(pcVar6 + 8);
      puVar1 = *(undefined8 **)(lVar10 + 8);
      if (puVar1 < *(undefined8 **)(lVar10 + 0x10)) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar5 = puVar1 + 2;
        bVar2 = *param_2;
        *(undefined1 *)puVar1 = 4;
        puVar1[1] = (ulong)bVar2;
      }
      else {
        puVar5 = (undefined8 *)FUN_0032b44c(lVar10);
      }
      lVar9 = param_1[2];
      *(undefined8 **)(lVar10 + 8) = puVar5;
      lVar10 = *(long *)(*(long *)(*(long *)(lVar9 + -8) + 8) + 8) + -0x10;
    }
    else {
      puVar8 = (undefined1 *)param_1[4];
      bVar2 = *param_2;
      *puVar8 = 4;
      local_50 = *(undefined8 *)(puVar8 + 8);
      *(ulong *)(puVar8 + 8) = (ulong)bVar2;
                    /* try { // try from 0032b3ec to 0032b3f3 has its CatchHandler @ 0032b444 */
      FUN_00313038(&local_50);
      lVar10 = param_1[4];
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar10);
}


// ===== 0032b44c  FUN_0032b44c =====

undefined8 * FUN_0032b44c(long *param_1,byte *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *__ptr;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar8 = (undefined8 *)*param_1;
  __ptr = (undefined8 *)param_1[1];
  lVar9 = (long)__ptr - (long)puVar8 >> 4;
  uVar1 = lVar9 + 1;
  if (uVar1 >> 0x3c != 0) {
    FUN_003135c8(param_1);
LAB_0032b564:
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  uVar7 = param_1[2] - (long)puVar8 >> 3;
  if (uVar7 <= uVar1) {
    uVar7 = uVar1;
  }
  if (0x7fffffffffffffef < (ulong)(param_1[2] - (long)puVar8)) {
    uVar7 = 0xfffffffffffffff;
  }
  if (uVar7 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    if (uVar7 >> 0x3c != 0) goto LAB_0032b564;
    puVar4 = (undefined8 *)FUN_00759c3c(uVar7 << 4);
  }
  puVar2 = puVar4 + lVar9 * 2;
  bVar3 = *param_2;
  *puVar2 = 0;
  puVar2[1] = (ulong)bVar3;
  *(undefined1 *)puVar2 = 4;
  puVar5 = puVar8;
  puVar6 = puVar4;
  if (puVar8 != __ptr) {
    do {
      uVar10 = *puVar5;
      puVar6[1] = puVar5[1];
      *puVar6 = uVar10;
      *(undefined1 *)puVar5 = 0;
      puVar5[1] = 0;
      puVar5 = puVar5 + 2;
      puVar6 = puVar6 + 2;
    } while (puVar5 != __ptr);
    do {
                    /* try { // try from 0032b50c to 0032b513 has its CatchHandler @ 0032b568 */
      FUN_00313038(puVar8 + 1,*(undefined1 *)puVar8);
      puVar8 = puVar8 + 2;
    } while (puVar8 != __ptr);
    __ptr = (undefined8 *)*param_1;
  }
  *param_1 = (long)puVar4;
  param_1[1] = (long)(puVar2 + 2);
  param_1[2] = (long)(puVar4 + uVar7 * 2);
  if (__ptr != (undefined8 *)0x0) {
    free(__ptr);
  }
  return puVar2 + 2;
}


// ===== 0032b56c  FUN_0032b56c =====

void FUN_0032b56c(long *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1[1] == param_1[2]) {
    puVar4 = (undefined1 *)*param_1;
    local_48 = *puVar4;
    local_40 = *(undefined8 *)(puVar4 + 8);
    *puVar4 = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
                    /* try { // try from 0032b5ec to 0032b5f3 has its CatchHandler @ 0032b678 */
    FUN_00313038(&local_40);
    lVar6 = *param_1;
  }
  else {
    pcVar3 = *(char **)(param_1[2] + -8);
    if (*pcVar3 == '\x02') {
      lVar6 = *(long *)(pcVar3 + 8);
      puVar4 = *(undefined1 **)(lVar6 + 8);
      if (puVar4 < *(undefined1 **)(lVar6 + 0x10)) {
        *puVar4 = 0;
        puVar2 = puVar4 + 0x10;
        *(undefined8 *)(puVar4 + 8) = 0;
      }
      else {
        puVar2 = (undefined1 *)FUN_0032b67c(lVar6);
      }
      lVar5 = param_1[2];
      *(undefined1 **)(lVar6 + 8) = puVar2;
      lVar6 = *(long *)(*(long *)(*(long *)(lVar5 + -8) + 8) + 8) + -0x10;
    }
    else {
      puVar4 = (undefined1 *)param_1[4];
      local_50 = *(undefined8 *)(puVar4 + 8);
      *puVar4 = 0;
      *(undefined8 *)(puVar4 + 8) = 0;
                    /* try { // try from 0032b61c to 0032b623 has its CatchHandler @ 0032b674 */
      FUN_00313038(&local_50);
      lVar6 = param_1[4];
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar6);
}


// ===== 0032b67c  FUN_0032b67c =====

undefined8 * FUN_0032b67c(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *__ptr;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar7 = (undefined8 *)*param_1;
  __ptr = (undefined8 *)param_1[1];
  lVar8 = (long)__ptr - (long)puVar7 >> 4;
  uVar2 = lVar8 + 1;
  if (uVar2 >> 0x3c == 0) {
    uVar6 = param_1[2] - (long)puVar7 >> 3;
    if (uVar6 <= uVar2) {
      uVar6 = uVar2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - (long)puVar7)) {
      uVar6 = 0xfffffffffffffff;
    }
    if (uVar6 == 0) {
      puVar3 = (undefined8 *)0x0;
      puVar1 = (undefined8 *)(lVar8 * 0x10);
      *(undefined1 *)puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      if (uVar6 >> 0x3c != 0) goto LAB_0032b794;
      puVar3 = (undefined8 *)FUN_00759c3c(uVar6 << 4);
      puVar1 = puVar3 + lVar8 * 2;
      *(undefined1 *)puVar1 = 0;
      puVar1[1] = 0;
    }
    puVar4 = puVar7;
    puVar5 = puVar3;
    if (puVar7 != __ptr) {
      do {
        uVar9 = *puVar4;
        puVar5[1] = puVar4[1];
        *puVar5 = uVar9;
        *(undefined1 *)puVar4 = 0;
        puVar4[1] = 0;
        puVar4 = puVar4 + 2;
        puVar5 = puVar5 + 2;
      } while (puVar4 != __ptr);
      do {
                    /* try { // try from 0032b740 to 0032b747 has its CatchHandler @ 0032b798 */
        FUN_00313038(puVar7 + 1,*(undefined1 *)puVar7);
        puVar7 = puVar7 + 2;
      } while (puVar7 != __ptr);
      __ptr = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar3;
    param_1[1] = (long)(puVar1 + 2);
    param_1[2] = (long)(puVar3 + uVar6 * 2);
    if (__ptr != (undefined8 *)0x0) {
      free(__ptr);
    }
    return puVar1 + 2;
  }
  FUN_003135c8(param_1);
LAB_0032b794:
                    /* WARNING: Subroutine does not return */
  FUN_002f9ee0();
}


// ===== 0032b79c  FUN_0032b79c =====

void FUN_0032b79c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1[1] == param_1[2]) {
    pbVar6 = (byte *)*param_1;
    uVar9 = *param_2;
    bVar2 = *pbVar6;
    *pbVar6 = 5;
    local_40 = *(undefined8 *)(pbVar6 + 8);
    *(undefined8 *)(pbVar6 + 8) = uVar9;
    local_48 = (ulong)bVar2;
                    /* try { // try from 0032b834 to 0032b83b has its CatchHandler @ 0032b8cc */
    FUN_00313038(&local_40);
    lVar10 = *param_1;
  }
  else {
    pcVar5 = *(char **)(param_1[2] + -8);
    if (*pcVar5 == '\x02') {
      lVar10 = *(long *)(pcVar5 + 8);
      puVar1 = *(undefined8 **)(lVar10 + 8);
      if (puVar1 < *(undefined8 **)(lVar10 + 0x10)) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar4 = puVar1 + 2;
        uVar9 = *param_2;
        *(undefined1 *)puVar1 = 5;
        puVar1[1] = uVar9;
      }
      else {
        puVar4 = (undefined8 *)FUN_0032b8d0(lVar10);
      }
      lVar8 = param_1[2];
      *(undefined8 **)(lVar10 + 8) = puVar4;
      lVar10 = *(long *)(*(long *)(*(long *)(lVar8 + -8) + 8) + 8) + -0x10;
    }
    else {
      puVar7 = (undefined1 *)param_1[4];
      uVar9 = *param_2;
      *puVar7 = 5;
      local_50 = *(undefined8 *)(puVar7 + 8);
      *(undefined8 *)(puVar7 + 8) = uVar9;
                    /* try { // try from 0032b870 to 0032b877 has its CatchHandler @ 0032b8c8 */
      FUN_00313038(&local_50);
      lVar10 = param_1[4];
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar10);
}


// ===== 0032b8d0  FUN_0032b8d0 =====

undefined8 * FUN_0032b8d0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *__ptr;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)*param_1;
  __ptr = (undefined8 *)param_1[1];
  lVar9 = (long)__ptr - (long)puVar8 >> 4;
  uVar1 = lVar9 + 1;
  if (uVar1 >> 0x3c != 0) {
    FUN_003135c8(param_1);
LAB_0032b9e8:
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  uVar7 = param_1[2] - (long)puVar8 >> 3;
  if (uVar7 <= uVar1) {
    uVar7 = uVar1;
  }
  if (0x7fffffffffffffef < (ulong)(param_1[2] - (long)puVar8)) {
    uVar7 = 0xfffffffffffffff;
  }
  if (uVar7 == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    if (uVar7 >> 0x3c != 0) goto LAB_0032b9e8;
    puVar3 = (undefined8 *)FUN_00759c3c(uVar7 << 4);
  }
  puVar2 = puVar3 + lVar9 * 2;
  uVar4 = *param_2;
  *puVar2 = 0;
  puVar2[1] = uVar4;
  *(undefined1 *)puVar2 = 5;
  puVar5 = puVar8;
  puVar6 = puVar3;
  if (puVar8 != __ptr) {
    do {
      uVar4 = *puVar5;
      puVar6[1] = puVar5[1];
      *puVar6 = uVar4;
      *(undefined1 *)puVar5 = 0;
      puVar5[1] = 0;
      puVar5 = puVar5 + 2;
      puVar6 = puVar6 + 2;
    } while (puVar5 != __ptr);
    do {
                    /* try { // try from 0032b990 to 0032b997 has its CatchHandler @ 0032b9ec */
      FUN_00313038(puVar8 + 1,*(undefined1 *)puVar8);
      puVar8 = puVar8 + 2;
    } while (puVar8 != __ptr);
    __ptr = (undefined8 *)*param_1;
  }
  *param_1 = (long)puVar3;
  param_1[1] = (long)(puVar2 + 2);
  param_1[2] = (long)(puVar3 + uVar7 * 2);
  if (__ptr != (undefined8 *)0x0) {
    free(__ptr);
  }
  return puVar2 + 2;
}


// ===== 0032b9f0  FUN_0032b9f0 =====

void FUN_0032b9f0(long *param_1,byte *param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_1[1] == param_1[2]) {
    local_50 = 0;
    local_58 = 3;
                    /* try { // try from 0032ba88 to 0032ba8f has its CatchHandler @ 0032bc3c */
    puVar4 = (undefined8 *)FUN_00759c3c(0x18);
    if ((*param_2 & 1) == 0) {
      uVar12 = *(undefined8 *)param_2;
      uVar8 = *(undefined8 *)(param_2 + 0x10);
      puVar4[1] = *(undefined8 *)(param_2 + 8);
      *puVar4 = uVar12;
      puVar4[2] = uVar8;
      uVar6 = 3;
    }
    else {
                    /* try { // try from 0032baf0 to 0032baf7 has its CatchHandler @ 0032bc18 */
      FUN_002fb36c(puVar4,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
      uVar6 = (undefined1)local_58;
    }
    puVar10 = (undefined1 *)*param_1;
    uVar1 = *puVar10;
    *puVar10 = uVar6;
    local_50 = *(undefined8 *)(puVar10 + 8);
    local_58 = CONCAT71(local_58._1_7_,uVar1);
    *(undefined8 **)(puVar10 + 8) = puVar4;
                    /* try { // try from 0032bb24 to 0032bb2b has its CatchHandler @ 0032bc38 */
    FUN_00313038(&local_50);
    lVar11 = *param_1;
  }
  else {
    pcVar7 = *(char **)(param_1[2] + -8);
    if (*pcVar7 == '\x02') {
      lVar11 = *(long *)(pcVar7 + 8);
      puVar4 = *(undefined8 **)(lVar11 + 8);
      if (puVar4 < *(undefined8 **)(lVar11 + 0x10)) {
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined1 *)puVar4 = 3;
                    /* try { // try from 0032ba54 to 0032ba5b has its CatchHandler @ 0032bc04 */
        puVar3 = (undefined8 *)FUN_00759c3c(0x18);
        if ((*param_2 & 1) == 0) {
          uVar12 = *(undefined8 *)param_2;
          uVar8 = *(undefined8 *)(param_2 + 0x10);
          puVar3[1] = *(undefined8 *)(param_2 + 8);
          *puVar3 = uVar12;
          puVar3[2] = uVar8;
        }
        else {
                    /* try { // try from 0032bb90 to 0032bb97 has its CatchHandler @ 0032bbe4 */
          FUN_002fb36c(puVar3,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
        }
        puVar5 = puVar4 + 2;
        puVar4[1] = puVar3;
        *(undefined8 **)(lVar11 + 8) = puVar5;
      }
      else {
        puVar5 = (undefined8 *)FUN_0032bc64(lVar11,param_2);
      }
      lVar9 = param_1[2];
      *(undefined8 **)(lVar11 + 8) = puVar5;
      lVar11 = *(long *)(*(long *)(*(long *)(lVar9 + -8) + 8) + 8) + -0x10;
    }
    else {
      local_60 = 0;
                    /* try { // try from 0032bac0 to 0032bac7 has its CatchHandler @ 0032bc2c */
      puVar4 = (undefined8 *)FUN_00759c3c(0x18);
      if ((*param_2 & 1) == 0) {
        uVar12 = *(undefined8 *)param_2;
        uVar8 = *(undefined8 *)(param_2 + 0x10);
        puVar4[1] = *(undefined8 *)(param_2 + 8);
        *puVar4 = uVar12;
        puVar4[2] = uVar8;
      }
      else {
                    /* try { // try from 0032bb48 to 0032bb4f has its CatchHandler @ 0032bbf4 */
        FUN_002fb36c(puVar4,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
      }
      puVar10 = (undefined1 *)param_1[4];
      *puVar10 = 3;
      local_60 = *(undefined8 *)(puVar10 + 8);
      *(undefined8 **)(puVar10 + 8) = puVar4;
                    /* try { // try from 0032bb7c to 0032bb83 has its CatchHandler @ 0032bc28 */
      FUN_00313038(&local_60);
      lVar11 = param_1[4];
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar11);
}


// ===== 0032bc64  FUN_0032bc64 =====

undefined8 * FUN_0032bc64(undefined8 *param_1,byte *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *__ptr;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  __ptr = (undefined8 *)*param_1;
  puVar11 = (undefined8 *)param_1[1];
  lVar12 = (long)puVar11 - (long)__ptr >> 4;
  uVar1 = lVar12 + 1;
  if (uVar1 >> 0x3c != 0) {
    if (*(long *)(lVar3 + 0x28) != lVar6) goto LAB_0032be84;
    FUN_003135c8(param_1);
LAB_0032be34:
    if (*(long *)(lVar3 + 0x28) == lVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    goto LAB_0032be84;
  }
  uVar9 = param_1[2] - (long)__ptr >> 3;
  if (uVar9 <= uVar1) {
    uVar9 = uVar1;
  }
  if (0x7fffffffffffffef < (ulong)(param_1[2] - (long)__ptr)) {
    uVar9 = 0xfffffffffffffff;
  }
  if (uVar9 == 0) {
    lVar4 = 0;
  }
  else {
    if (uVar9 >> 0x3c != 0) goto LAB_0032be34;
    lVar4 = FUN_00759c3c(uVar9 << 4);
  }
  puVar2 = (undefined8 *)(lVar4 + lVar12 * 0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)puVar2 = 3;
                    /* try { // try from 0032bd14 to 0032bd1b has its CatchHandler @ 0032be58 */
  puVar5 = (undefined8 *)FUN_00759c3c(0x18);
  if ((*param_2 & 1) == 0) {
    uVar13 = *(undefined8 *)param_2;
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    puVar5[1] = *(undefined8 *)(param_2 + 8);
    *puVar5 = uVar13;
    puVar5[2] = uVar7;
    puVar2[1] = puVar5;
    puVar8 = puVar2 + lVar12 * -2;
    puVar10 = puVar8;
    puVar5 = __ptr;
    if (__ptr != puVar11) {
LAB_0032bd8c:
      do {
        uVar7 = *__ptr;
        puVar8[1] = __ptr[1];
        *puVar8 = uVar7;
        *(undefined1 *)__ptr = 0;
        __ptr[1] = 0;
        __ptr = __ptr + 2;
        puVar8 = puVar8 + 2;
      } while (__ptr != puVar11);
      do {
                    /* try { // try from 0032bdac to 0032bdb3 has its CatchHandler @ 0032be88 */
        FUN_00313038(puVar5 + 1,*(undefined1 *)puVar5);
        puVar5 = puVar5 + 2;
      } while (puVar5 != puVar11);
      __ptr = (undefined8 *)*param_1;
      puVar8 = puVar10;
    }
  }
  else {
                    /* try { // try from 0032bd58 to 0032bd5f has its CatchHandler @ 0032be48 */
    FUN_002fb36c(puVar5,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
    __ptr = (undefined8 *)*param_1;
    puVar11 = (undefined8 *)param_1[1];
    puVar2[1] = puVar5;
    puVar8 = puVar2 + ((long)puVar11 - (long)__ptr >> 4) * -2;
    puVar10 = puVar8;
    puVar5 = __ptr;
    if (__ptr != puVar11) goto LAB_0032bd8c;
  }
  *param_1 = puVar8;
  param_1[1] = puVar2 + 2;
  param_1[2] = lVar4 + uVar9 * 0x10;
  if (__ptr != (undefined8 *)0x0) {
    free(__ptr);
  }
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    return puVar2 + 2;
  }
LAB_0032be84:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032be8c  FUN_0032be8c =====

void FUN_0032be8c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1[1] == param_1[2]) {
    pbVar6 = (byte *)*param_1;
    uVar9 = *param_2;
    bVar2 = *pbVar6;
    *pbVar6 = 6;
    local_40 = *(undefined8 *)(pbVar6 + 8);
    *(undefined8 *)(pbVar6 + 8) = uVar9;
    local_48 = (ulong)bVar2;
                    /* try { // try from 0032bf24 to 0032bf2b has its CatchHandler @ 0032bfbc */
    FUN_00313038(&local_40);
    lVar10 = *param_1;
  }
  else {
    pcVar5 = *(char **)(param_1[2] + -8);
    if (*pcVar5 == '\x02') {
      lVar10 = *(long *)(pcVar5 + 8);
      puVar1 = *(undefined8 **)(lVar10 + 8);
      if (puVar1 < *(undefined8 **)(lVar10 + 0x10)) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar4 = puVar1 + 2;
        uVar9 = *param_2;
        *(undefined1 *)puVar1 = 6;
        puVar1[1] = uVar9;
      }
      else {
        puVar4 = (undefined8 *)FUN_0032bfc0(lVar10);
      }
      lVar8 = param_1[2];
      *(undefined8 **)(lVar10 + 8) = puVar4;
      lVar10 = *(long *)(*(long *)(*(long *)(lVar8 + -8) + 8) + 8) + -0x10;
    }
    else {
      puVar7 = (undefined1 *)param_1[4];
      uVar9 = *param_2;
      *puVar7 = 6;
      local_50 = *(undefined8 *)(puVar7 + 8);
      *(undefined8 *)(puVar7 + 8) = uVar9;
                    /* try { // try from 0032bf60 to 0032bf67 has its CatchHandler @ 0032bfb8 */
      FUN_00313038(&local_50);
      lVar10 = param_1[4];
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar10);
}


// ===== 0032bfc0  FUN_0032bfc0 =====

undefined8 * FUN_0032bfc0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *__ptr;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)*param_1;
  __ptr = (undefined8 *)param_1[1];
  lVar9 = (long)__ptr - (long)puVar8 >> 4;
  uVar1 = lVar9 + 1;
  if (uVar1 >> 0x3c != 0) {
    FUN_003135c8(param_1);
LAB_0032c0d8:
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  uVar7 = param_1[2] - (long)puVar8 >> 3;
  if (uVar7 <= uVar1) {
    uVar7 = uVar1;
  }
  if (0x7fffffffffffffef < (ulong)(param_1[2] - (long)puVar8)) {
    uVar7 = 0xfffffffffffffff;
  }
  if (uVar7 == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    if (uVar7 >> 0x3c != 0) goto LAB_0032c0d8;
    puVar3 = (undefined8 *)FUN_00759c3c(uVar7 << 4);
  }
  puVar2 = puVar3 + lVar9 * 2;
  uVar4 = *param_2;
  *puVar2 = 0;
  puVar2[1] = uVar4;
  *(undefined1 *)puVar2 = 6;
  puVar5 = puVar8;
  puVar6 = puVar3;
  if (puVar8 != __ptr) {
    do {
      uVar4 = *puVar5;
      puVar6[1] = puVar5[1];
      *puVar6 = uVar4;
      *(undefined1 *)puVar5 = 0;
      puVar5[1] = 0;
      puVar5 = puVar5 + 2;
      puVar6 = puVar6 + 2;
    } while (puVar5 != __ptr);
    do {
                    /* try { // try from 0032c080 to 0032c087 has its CatchHandler @ 0032c0dc */
      FUN_00313038(puVar8 + 1,*(undefined1 *)puVar8);
      puVar8 = puVar8 + 2;
    } while (puVar8 != __ptr);
    __ptr = (undefined8 *)*param_1;
  }
  *param_1 = (long)puVar3;
  param_1[1] = (long)(puVar2 + 2);
  param_1[2] = (long)(puVar3 + uVar7 * 2);
  if (__ptr != (undefined8 *)0x0) {
    free(__ptr);
  }
  return puVar2 + 2;
}


// ===== 0032c0e0  FUN_0032c0e0 =====

void FUN_0032c0e0(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  size_t sVar1;
  size_t sVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  sVar1 = strlen(param_2);
  sVar2 = strlen((char *)*param_3);
                    /* try { // try from 0032c118 to 0032c13b has its CatchHandler @ 0032c14c */
  FUN_00712ea8(param_1,sVar2 + sVar1);
  FUN_00713bdc(param_1,param_2);
  FUN_00713bdc(param_1,*param_3);
  return;
}


// ===== 0032c168  FUN_0032c168 =====

long * FUN_0032c168(long param_1,byte *param_2)

{
  size_t sVar1;
  ulong uVar2;
  byte *__s2;
  byte bVar3;
  bool bVar4;
  void *__s2_00;
  int iVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  
  plVar8 = (long *)(param_1 + 8);
  plVar10 = (long *)*plVar8;
  if (plVar10 != (long *)0x0) {
    uVar2 = *(ulong *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    plVar9 = plVar8;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      uVar2 = (ulong)(*param_2 >> 1);
    }
    do {
      bVar3 = *(byte *)(plVar10 + 4);
      if ((bVar3 & 1) == 0) {
        uVar11 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) goto LAB_0032c1c0;
LAB_0032c1f4:
        sVar1 = uVar2;
        if (uVar11 <= uVar2) {
          sVar1 = uVar11;
        }
        iVar5 = memcmp((void *)((long)plVar10 + 0x21),__s2,sVar1);
        if (iVar5 != 0) goto LAB_0032c1d8;
LAB_0032c20c:
        uVar6 = (uint)(uVar11 < uVar2);
        if (uVar6 != 0) goto LAB_0032c1e0;
LAB_0032c218:
        lVar7 = 0;
      }
      else {
        uVar11 = plVar10[5];
        if ((bVar3 & 1) == 0) goto LAB_0032c1f4;
LAB_0032c1c0:
        sVar1 = uVar2;
        if (uVar11 <= uVar2) {
          sVar1 = uVar11;
        }
        iVar5 = memcmp((void *)plVar10[6],__s2,sVar1);
        if (iVar5 == 0) goto LAB_0032c20c;
LAB_0032c1d8:
        uVar6 = -(iVar5 >> 0x1f);
        if (uVar6 == 0) goto LAB_0032c218;
LAB_0032c1e0:
        lVar7 = 8;
      }
      if (uVar6 == 0) {
        plVar9 = plVar10;
      }
      plVar10 = *(long **)((long)plVar10 + lVar7);
    } while (plVar10 != (long *)0x0);
    if (plVar9 != plVar8) {
      uVar11 = (ulong)(*(byte *)(plVar9 + 4) >> 1);
      __s2_00 = (void *)((long)plVar9 + 0x21);
      if ((*(byte *)(plVar9 + 4) & 1) != 0) {
        uVar11 = plVar9[5];
        __s2_00 = (void *)plVar9[6];
      }
      sVar1 = uVar11;
      if (uVar2 <= uVar11) {
        sVar1 = uVar2;
      }
      iVar5 = memcmp(__s2,__s2_00,sVar1);
      bVar4 = uVar2 < uVar11;
      if (iVar5 != 0) {
        bVar4 = iVar5 < 0;
      }
      if (!bVar4) {
        plVar8 = plVar9;
      }
    }
  }
  return plVar8;
}


// ===== 0032c290  FUN_0032c290 =====

void FUN_0032c290(byte *param_1,float *param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  bVar1 = *param_1;
  if (bVar1 < 6) {
    if (bVar1 == 4) {
      fVar4 = 1.0;
      if (param_1[8] == 0) {
        fVar4 = 0.0;
      }
    }
    else {
      if (bVar1 != 5) {
LAB_0032c33c:
        uVar3 = FUN_00753a74(0x20);
        local_58 = FUN_00312898(param_1);
                    /* try { // try from 0032c360 to 0032c373 has its CatchHandler @ 0032c3e0 */
        FUN_00321398(auStack_50,"type must be number, but is ",&local_58);
                    /* try { // try from 0032c378 to 0032c3bb has its CatchHandler @ 0032c3bc */
        FUN_00312624(uVar3,0x12e,auStack_50,param_1);
        if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar3,PTR_PTR_007a12e8,PTR_FUN_007a12f0);
        }
        goto LAB_0032c408;
      }
      fVar4 = (float)*(long *)(param_1 + 8);
    }
  }
  else if (bVar1 == 7) {
    fVar4 = (float)*(double *)(param_1 + 8);
  }
  else {
    if (bVar1 != 6) goto LAB_0032c33c;
    fVar4 = (float)*(ulong *)(param_1 + 8);
  }
  *param_2 = fVar4;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_0032c408:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032c40c  FUN_0032c40c =====

void FUN_0032c40c(char *param_1,long *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  cVar1 = *param_1;
  if (cVar1 == '\x05') {
LAB_0032c448:
    *param_2 = *(long *)(param_1 + 8);
    lVar3 = *(long *)(lVar3 + 0x28);
  }
  else {
    if (cVar1 != '\a') {
      if (cVar1 != '\x06') {
        uVar2 = FUN_00753a74(0x20);
        local_58 = FUN_00312898(param_1);
                    /* try { // try from 0032c4b8 to 0032c4cb has its CatchHandler @ 0032c538 */
        FUN_00321398(auStack_50,"type must be number, but is ",&local_58);
                    /* try { // try from 0032c4d0 to 0032c513 has its CatchHandler @ 0032c514 */
        FUN_00312624(uVar2,0x12e,auStack_50,param_1);
        if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar2,PTR_PTR_007a12e8,PTR_FUN_007a12f0);
        }
        goto LAB_0032c560;
      }
      goto LAB_0032c448;
    }
    *param_2 = (long)*(double *)(param_1 + 8);
    lVar3 = *(long *)(lVar3 + 0x28);
  }
  if (lVar3 == local_38) {
    return;
  }
LAB_0032c560:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032c564  _INIT_9 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_9(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_FUN_007a13a0;
  DAT_007aad69 = 0;
  DAT_007aad60 = 0x10;
  DAT_007aad61 = 0x6769666e6f437066;
  __cxa_atexit(PTR_FUN_007a13a0,&DAT_007aad60,&PTR_LOOP_0075ec90);
  DAT_007aad78 = 0x16;
  DAT_007aad84 = 0;
  DAT_007aad79._0_7_ = (undefined7)s_inferConfig_001cb78c._0_8_;
  ram0x007aad80 = CONCAT31(0x676966,SUB81(s_inferConfig_001cb78c._0_8_,7));
  __cxa_atexit(puVar1,&DAT_007aad78,&PTR_LOOP_0075ec90);
  DAT_007aad90 = 8;
  DAT_007aad91 = 0x786e6e6f;
  DAT_007aad95 = 0;
  __cxa_atexit(puVar1,&DAT_007aad90,&PTR_LOOP_0075ec90);
  return;
}


// ===== 0032c628  FUN_0032c628 =====

void FUN_0032c628(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0x40000000;
  *(undefined1 *)(param_1 + 0x35) = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
                    /* try { // try from 0032c684 to 0032c68b has its CatchHandler @ 0032c724 */
  plVar2 = (long *)FUN_00759c3c(0x88);
  puVar1 = PTR_DAT_007a12c8;
  plVar2[1] = 0;
  plVar2[2] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
                    /* try { // try from 0032c6a8 to 0032c6b7 has its CatchHandler @ 0032c70c */
  FUN_0033be5c(plVar2 + 3,param_2,1);
  plVar4 = (long *)param_1[1];
  *param_1 = (long)(plVar2 + 3);
  param_1[1] = (long)plVar2;
  if ((plVar4 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
  }
                    /* try { // try from 0032c6ec to 0032c6f3 has its CatchHandler @ 0032c708 */
  FUN_0032c760(param_1);
  return;
}


// ===== 0032c760  FUN_0032c760 =====

void FUN_0032c760(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  uVar2 = (**(code **)(*(long *)*param_1 + 0x20))();
  plVar3 = (long *)FUN_00759c3c(0x30);
  puVar1 = PTR_DAT_007a12d0;
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)(puVar1 + 0x10);
                    /* try { // try from 0032c7ac to 0032c7b7 has its CatchHandler @ 0032c874 */
  FUN_00342408(plVar3 + 3,uVar2);
  plVar5 = (long *)param_1[3];
  param_1[2] = plVar3 + 3;
  param_1[3] = plVar3;
  if ((plVar5 != (long *)0x0) && (lVar4 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar4 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  plVar3 = (long *)FUN_00759c3c(0x60);
  puVar1 = PTR_DAT_007a12d8;
  plVar5 = (long *)param_1[0x3c];
  plVar3[1] = 0;
  plVar3[2] = 0;
  plVar3[0xb] = 0;
  param_1[0x3c] = plVar3;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[6] = 0;
  plVar3[5] = 0;
  plVar3[8] = 0;
  plVar3[7] = 0;
  plVar3[10] = 0;
  plVar3[9] = 0;
  plVar3[4] = 0;
  plVar3[3] = 0;
  param_1[0x3b] = plVar3 + 3;
  if ((plVar5 != (long *)0x0) && (lVar4 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar4 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
    return;
  }
  return;
}


// ===== 0032c890  FUN_0032c890 =====

void FUN_0032c890(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x158);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x160) = pvVar1;
    free(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x140);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x148) = pvVar1;
    free(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0xd8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0xe0) = pvVar1;
    free(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0xc0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 200) = pvVar1;
    free(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x50);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x58) = pvVar1;
    free(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x38);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x40) = pvVar1;
    free(pvVar1);
    return;
  }
  return;
}


// ===== 0032c914  FUN_0032c914 =====

void FUN_0032c914(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  *(undefined4 *)(param_1 + 0x25) = 0x40000000;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
                    /* try { // try from 0032c974 to 0032c97b has its CatchHandler @ 0032ca18 */
  plVar2 = (long *)FUN_00759c3c(0x88);
  puVar1 = PTR_DAT_007a12c8;
  plVar2[1] = 0;
  plVar2[2] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
                    /* try { // try from 0032c998 to 0032c9ab has its CatchHandler @ 0032ca00 */
  FUN_0033bd64(plVar2 + 3,param_2,param_3,1);
  plVar4 = (long *)param_1[1];
  *param_1 = (long)(plVar2 + 3);
  param_1[1] = (long)plVar2;
  if ((plVar4 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
  }
                    /* try { // try from 0032c9e0 to 0032c9e7 has its CatchHandler @ 0032c9fc */
  FUN_0032c760(param_1);
  return;
}


// ===== 0032ca54  FUN_0032ca54 =====

long FUN_0032ca54(long param_1)

{
  return param_1 + 0x20;
}


// ===== 0032ca5c  FUN_0032ca5c =====

void FUN_0032ca5c(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x1e0);
  *param_1 = *(undefined8 *)(param_2 + 0x1d8);
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00755c20(1,lVar1 + 8);
  }
  return;
}


// ===== 0032ca84  FUN_0032ca84 =====

void FUN_0032ca84(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x1f0);
  *param_1 = *(undefined8 *)(param_2 + 0x1e8);
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00755c20(1,lVar1 + 8);
  }
  return;
}


// ===== 0032caac  FUN_0032caac =====

void FUN_0032caac(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x200);
  *param_1 = *(undefined8 *)(param_2 + 0x1f8);
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00755c20(1,lVar1 + 8);
  }
  return;
}


// ===== 0032cad4  FUN_0032cad4 =====

void FUN_0032cad4(undefined8 param_1)

{
  FUN_0032caf8();
  FUN_0032da7c(param_1);
  return;
}


// ===== 0032caf8  FUN_0032caf8 =====

void FUN_0032caf8(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  size_t sVar6;
  ulong uVar7;
  undefined8 uVar8;
  char cVar9;
  long lVar10;
  void *pvVar11;
  long *plVar12;
  long *plVar13;
  ulong local_178;
  size_t local_170;
  void *local_168;
  undefined1 local_160 [8];
  undefined1 auStack_158 [8];
  undefined1 local_150 [8];
  undefined1 auStack_148 [8];
  undefined1 local_140 [8];
  undefined1 auStack_138 [8];
  undefined1 local_130 [8];
  undefined1 auStack_128 [8];
  undefined1 local_120 [8];
  undefined1 auStack_118 [8];
  ulong local_110;
  long local_108;
  undefined8 *local_100;
  long *local_f8;
  ulong local_f0;
  undefined8 uStack_e8;
  void *local_e0;
  ulong *local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulong *local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90 [4];
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0032cb28 to 0032cb37 has its CatchHandler @ 0032d874 */
  FUN_003427e0(&local_b0,param_1[2],&DAT_007aada8);
                    /* try { // try from 0032cb38 to 0032cb47 has its CatchHandler @ 0032d860 */
  uVar4 = FUN_00320aec(&local_b0,"fileUid");
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = (void *)0x0;
                    /* try { // try from 0032cb50 to 0032cb57 has its CatchHandler @ 0032d844 */
  FUN_00321278(uVar4,&local_f0);
                    /* try { // try from 0032cb60 to 0032cb67 has its CatchHandler @ 0032d840 */
  FUN_00313038(&local_a8,(ulong)local_b0 & 0xff);
                    /* try { // try from 0032cb74 to 0032cb7f has its CatchHandler @ 0032d834 */
  (**(code **)(*(long *)*param_1 + 0x10))(&local_100,(long *)*param_1,&local_f0);
  local_70 = (long *)0x0;
                    /* try { // try from 0032cb8c to 0032cba3 has its CatchHandler @ 0032d7f8 */
  FUN_00320c28(&local_110,*local_100,local_100[1],local_90,1,0);
  if (local_70 == local_90) {
    lVar10 = 0x20;
    plVar5 = local_90;
LAB_0032cbc4:
    (**(code **)(*plVar5 + lVar10))();
  }
  else if (local_70 != (long *)0x0) {
    lVar10 = 0x28;
    plVar5 = local_70;
    goto LAB_0032cbc4;
  }
                    /* try { // try from 0032cbd0 to 0032cbeb has its CatchHandler @ 0032d89c */
  uVar4 = FUN_00320aec(&local_110,"volumeUp");
  FUN_0032768c(local_120,uVar4);
                    /* try { // try from 0032cbec to 0032cc2b has its CatchHandler @ 0032d8e0 */
  uVar4 = FUN_0032dfc8(local_120,"apply");
  local_b0 = (ulong *)((ulong)local_b0 & 0xffffffffffffff00);
  FUN_00312e94(uVar4,&local_b0);
  *(undefined1 *)((long)param_1 + 0x24) = local_b0._0_1_;
  uVar4 = FUN_0032dfc8(local_120,&DAT_001eecb8);
  local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
  FUN_0032c290(uVar4,&local_b0);
  *(undefined4 *)(param_1 + 4) = local_b0._0_4_;
                    /* try { // try from 0032cc34 to 0032cc4f has its CatchHandler @ 0032d898 */
  uVar4 = FUN_00320aec(&local_110,"skipFrame");
  FUN_0032768c(local_130,uVar4);
                    /* try { // try from 0032cc50 to 0032cc8f has its CatchHandler @ 0032d8d4 */
  uVar4 = FUN_0032dfc8(local_130,&DAT_001d3754);
  local_b0 = (ulong *)((ulong)local_b0 & 0xffffffffffffff00);
  FUN_00312e94(uVar4,&local_b0);
  *(undefined1 *)((long)param_1 + 0x2c) = local_b0._0_1_;
  uVar4 = FUN_0032dfc8(local_130,"threshold");
  local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
  FUN_0032c290(uVar4,&local_b0);
  *(undefined4 *)(param_1 + 5) = local_b0._0_4_;
                    /* try { // try from 0032cc98 to 0032ccb3 has its CatchHandler @ 0032d894 */
  uVar4 = FUN_00320aec(&local_110,"backgroundSpeakerFix");
  FUN_0032768c(local_140,uVar4);
                    /* try { // try from 0032ccb4 to 0032cd83 has its CatchHandler @ 0032d900 */
  uVar4 = FUN_0032dfc8(local_140,"cutStartDB");
  local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
  FUN_0032c290(uVar4,&local_b0);
  *(undefined4 *)(param_1 + 0x11) = local_b0._0_4_;
  uVar4 = FUN_0032dfc8(local_140,"cutEndDB");
  local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
  FUN_0032c290(uVar4,&local_b0);
  *(undefined4 *)((long)param_1 + 0x8c) = local_b0._0_4_;
  uVar4 = FUN_0032dfc8(local_140,"runFrameCount");
  local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
  FUN_0032c290(uVar4,&local_b0);
  *(undefined4 *)(param_1 + 0x12) = local_b0._0_4_;
  uVar4 = FUN_0032dfc8(local_140,"runMinLen");
  local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
  FUN_0032f734(uVar4,&local_b0);
  *(undefined4 *)((long)param_1 + 0x94) = local_b0._0_4_;
  uVar4 = FUN_0032dfc8(local_140,"utteranceLen");
  local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
  FUN_0032c290(uVar4,&local_b0);
  *(undefined4 *)(param_1 + 0x13) = local_b0._0_4_;
  uVar4 = FUN_0032dfc8(local_140,"varWindMode");
  local_b0 = (ulong *)((ulong)local_b0 & 0xffffffffffffff00);
  FUN_00312e94(uVar4,&local_b0);
  *(undefined1 *)((long)param_1 + 0x9c) = local_b0._0_1_;
                    /* try { // try from 0032cd8c to 0032cda7 has its CatchHandler @ 0032d890 */
  uVar4 = FUN_00320aec(&local_110,"clipFix");
  FUN_0032768c(local_150,uVar4);
                    /* try { // try from 0032cda8 to 0032cde7 has its CatchHandler @ 0032d8c8 */
  uVar4 = FUN_0032dfc8(local_150,"apply");
  local_b0 = (ulong *)((ulong)local_b0 & 0xffffffffffffff00);
  FUN_00312e94(uVar4,&local_b0);
  *(undefined1 *)(param_1 + 0x14) = local_b0._0_1_;
  uVar4 = FUN_0032dfc8(local_150,"point");
  local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
  FUN_0032c290(uVar4,&local_b0);
  *(undefined4 *)((long)param_1 + 0xa4) = local_b0._0_4_;
                    /* try { // try from 0032cdf0 to 0032ce0b has its CatchHandler @ 0032d88c */
  uVar4 = FUN_00320aec(&local_110,&DAT_001c71f9);
  FUN_0032768c(local_160,uVar4);
                    /* try { // try from 0032ce0c to 0032ce6f has its CatchHandler @ 0032d90c */
  uVar4 = FUN_0032dfc8(local_160,"freezeLowEnThr");
  local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
  FUN_0032c290(uVar4,&local_b0);
  *(undefined4 *)(param_1 + 0x15) = local_b0._0_4_;
  uVar4 = FUN_0032dfc8(local_160,"freezeHighEnThr");
  local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
  FUN_0032c290(uVar4,&local_b0);
  *(undefined4 *)((long)param_1 + 0xac) = local_b0._0_4_;
  uVar4 = FUN_0032dfc8(local_160,"halfLifeInSec");
  local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
  FUN_0032c290(uVar4,&local_b0);
  *(undefined4 *)(param_1 + 0x16) = local_b0._0_4_;
  sVar6 = strlen("csdEnabled");
  if (0xfffffffffffffff7 < sVar6) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 0032d7b8 to 0032d7bf has its CatchHandler @ 0032d888 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_178);
    }
    goto LAB_0032da74;
  }
  if (sVar6 < 0x17) {
    pvVar11 = (void *)((ulong)&local_178 | 1);
    local_178 = CONCAT71(local_178._1_7_,(char)((int)sVar6 << 1));
    if (sVar6 != 0) goto LAB_0032cee0;
  }
  else {
    uVar7 = (sVar6 & 0xfffffffffffffff8) + 8;
    if ((sVar6 | 7) != 0x17) {
      uVar7 = sVar6 | 7;
    }
                    /* try { // try from 0032cec8 to 0032cecf has its CatchHandler @ 0032d888 */
    pvVar11 = (void *)FUN_00759c3c(uVar7 + 1);
    local_178 = uVar7 + 1 | 1;
    local_170 = sVar6;
    local_168 = pvVar11;
LAB_0032cee0:
    memcpy(pvVar11,"csdEnabled",sVar6);
  }
  local_b0 = &local_110;
  *(undefined1 *)((long)pvVar11 + sVar6) = 0;
  local_a8 = (long *)0x0;
  local_a0 = 0;
  local_98 = 0x8000000000000000;
  if ((char)local_110 == '\x01') {
                    /* try { // try from 0032cf40 to 0032cfc3 has its CatchHandler @ 0032d8ac */
    local_a8 = (long *)FUN_0032c168(local_108,&local_178);
    if ((char)local_110 != '\x01') goto LAB_0032cf98;
LAB_0032cf68:
    local_b8 = 0x8000000000000000;
    local_c0 = 0;
    local_c8 = local_108 + 8;
  }
  else {
    if ((char)local_110 == '\x02') {
      local_a0 = *(undefined8 *)(local_108 + 8);
    }
    else {
      local_98 = 1;
      if ((char)local_110 == '\x01') goto LAB_0032cf68;
LAB_0032cf98:
      local_c0 = 0;
      local_c8 = 0;
      if ((char)local_110 != '\x02') {
        local_b8 = 1;
        goto LAB_0032cfb8;
      }
    }
    local_b8 = 0x8000000000000000;
    local_c8 = 0;
    local_c0 = *(undefined8 *)(local_108 + 8);
  }
LAB_0032cfb8:
  local_d0 = &local_110;
  uVar7 = FUN_0032e628(&local_b0,&local_d0);
  if ((uVar7 & 1) == 0) {
                    /* try { // try from 0032d144 to 0032d157 has its CatchHandler @ 0032d8ac */
    uVar4 = FUN_0032e488(&local_b0);
    local_d0 = (ulong *)((ulong)local_d0 & 0xffffffffffffff00);
    FUN_00312e94(uVar4,&local_d0);
    *(char *)(param_1 + 0x26) = (char)local_d0;
    cVar9 = (char)local_d0;
  }
  else {
    cVar9 = '\0';
    *(undefined1 *)(param_1 + 0x26) = 0;
  }
  if ((local_178 & 1) != 0) {
    free(local_168);
    cVar9 = *(char *)(param_1 + 0x26);
  }
  if (cVar9 != '\0') {
                    /* try { // try from 0032cfe8 to 0032d003 has its CatchHandler @ 0032d880 */
    uVar4 = FUN_00320aec(&local_110,"csdConfig");
    FUN_0032768c(&local_178,uVar4);
                    /* try { // try from 0032d004 to 0032d0f7 has its CatchHandler @ 0032d8ec */
    FUN_0032ea74(&local_178,param_1 + 0x17);
    FUN_0032eb50(&local_178,param_1 + 0x18);
    FUN_0032ecbc(&local_178,param_1 + 0x1c);
    uVar4 = FUN_00320aec(&local_178,"workingSampleRate");
    local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
    FUN_0032f734(uVar4,&local_b0);
    *(undefined4 *)(param_1 + 0x22) = local_b0._0_4_;
    uVar4 = FUN_00320aec(&local_178,"workingFrameDuration");
    local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
    FUN_0032f734(uVar4,&local_b0);
    *(undefined4 *)((long)param_1 + 0x114) = local_b0._0_4_;
    uVar4 = FUN_00320aec(&local_178,&DAT_001c2bdc);
    local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
    FUN_0032f734(uVar4,&local_b0);
    *(undefined4 *)(param_1 + 0x23) = local_b0._0_4_;
    uVar4 = FUN_00320aec(&local_178,"compressRate");
    local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
    FUN_0032f734(uVar4,&local_b0);
    *(undefined4 *)((long)param_1 + 0x11c) = local_b0._0_4_;
    uVar4 = FUN_00320aec(&local_178,"lpsEps");
    local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
    FUN_0032c290(uVar4,&local_b0);
    *(undefined4 *)(param_1 + 0x24) = local_b0._0_4_;
    uVar4 = FUN_00320aec(&local_178,"frameCount");
    local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
    FUN_0032f734(uVar4,&local_b0);
    local_a8 = (long *)0x0;
    uVar2 = (uint)local_178;
    *(undefined4 *)((long)param_1 + 0x124) = local_b0._0_4_;
    local_a0 = 0;
    local_98 = 0x8000000000000000;
    local_b0 = &local_178;
    if ((char)local_178 == '\x01') {
      plVar12 = (long *)(local_170 + 8);
      plVar13 = (long *)*plVar12;
      plVar5 = plVar12;
      if (plVar13 != (long *)0x0) {
        do {
          uVar7 = FUN_00713804(plVar13 + 4,"rmPower");
          if (-1 < (int)uVar7) {
            plVar5 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + (uVar7 >> 0x1c & 8));
        } while (plVar13 != (long *)0x0);
        if ((plVar5 != plVar12) && (iVar3 = FUN_00713804(plVar5 + 4,"rmPower"), iVar3 < 1)) {
          plVar12 = plVar5;
        }
      }
      uVar2 = (uint)local_178;
      local_a8 = plVar12;
      if ((char)local_178 == '\x02') goto LAB_0032d220;
LAB_0032d1e8:
      local_b8 = 0x8000000000000000;
      local_c0 = 0;
      local_c8 = 0;
      if ((uVar2 & 0xff) == 1) {
        local_c8 = local_170 + 8;
      }
      else {
        local_b8 = 1;
      }
    }
    else {
      if ((char)local_178 == '\x02') {
        local_a0 = *(undefined8 *)(local_170 + 8);
      }
      else {
        local_98 = 1;
        if ((char)local_178 != '\x02') goto LAB_0032d1e8;
      }
LAB_0032d220:
      local_b8 = 0x8000000000000000;
      local_c8 = 0;
      local_c0 = *(undefined8 *)(local_170 + 8);
    }
                    /* try { // try from 0032d238 to 0032d243 has its CatchHandler @ 0032d7dc */
    local_d0 = &local_178;
    uVar7 = FUN_0032875c(&local_b0,&local_d0);
    if ((uVar7 & 1) == 0) {
                    /* try { // try from 0032d248 to 0032d263 has its CatchHandler @ 0032d8ec */
      uVar4 = FUN_0032dfc8(&local_178,"rmPower");
      local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
      FUN_0032c290(uVar4,&local_b0);
      *(undefined4 *)(param_1 + 0x25) = local_b0._0_4_;
    }
                    /* try { // try from 0032d274 to 0032d27b has its CatchHandler @ 0032d7d8 */
    FUN_00313038(&local_170,local_178 & 0xff);
  }
  sVar6 = strlen("vadEnabled");
  if (0xfffffffffffffff7 < sVar6) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 0032d7d0 to 0032d7d7 has its CatchHandler @ 0032d884 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_178);
    }
    goto LAB_0032da74;
  }
  if (sVar6 < 0x17) {
    pvVar11 = (void *)((ulong)&local_178 | 1);
    local_178 = CONCAT71(local_178._1_7_,(char)((int)sVar6 << 1));
    if (sVar6 != 0) goto LAB_0032d2e4;
  }
  else {
    uVar7 = (sVar6 & 0xfffffffffffffff8) + 8;
    if ((sVar6 | 7) != 0x17) {
      uVar7 = sVar6 | 7;
    }
                    /* try { // try from 0032d2cc to 0032d2d3 has its CatchHandler @ 0032d884 */
    pvVar11 = (void *)FUN_00759c3c(uVar7 + 1);
    local_178 = uVar7 + 1 | 1;
    local_170 = sVar6;
    local_168 = pvVar11;
LAB_0032d2e4:
    memcpy(pvVar11,"vadEnabled",sVar6);
  }
  local_b0 = &local_110;
  *(undefined1 *)((long)pvVar11 + sVar6) = 0;
  local_a8 = (long *)0x0;
  local_a0 = 0;
  local_98 = 0x8000000000000000;
  if ((char)local_110 == '\x01') {
                    /* try { // try from 0032d344 to 0032d3c7 has its CatchHandler @ 0032d8a8 */
    local_a8 = (long *)FUN_0032c168(local_108,&local_178);
    if ((char)local_110 != '\x01') goto LAB_0032d39c;
LAB_0032d36c:
    local_b8 = 0x8000000000000000;
    local_c0 = 0;
    local_c8 = local_108 + 8;
  }
  else {
    if ((char)local_110 == '\x02') {
      local_a0 = *(undefined8 *)(local_108 + 8);
    }
    else {
      local_98 = 1;
      if ((char)local_110 == '\x01') goto LAB_0032d36c;
LAB_0032d39c:
      local_c0 = 0;
      local_c8 = 0;
      if ((char)local_110 != '\x02') {
        local_b8 = 1;
        goto LAB_0032d3bc;
      }
    }
    local_b8 = 0x8000000000000000;
    local_c8 = 0;
    local_c0 = *(undefined8 *)(local_108 + 8);
  }
LAB_0032d3bc:
  local_d0 = &local_110;
  uVar7 = FUN_0032e628(&local_b0,&local_d0);
  if ((uVar7 & 1) == 0) {
                    /* try { // try from 0032d75c to 0032d76f has its CatchHandler @ 0032d8a8 */
    uVar4 = FUN_0032e488(&local_b0);
    local_d0 = (ulong *)((ulong)local_d0 & 0xffffffffffffff00);
    FUN_00312e94(uVar4,&local_d0);
    *(char *)(param_1 + 0x35) = (char)local_d0;
    cVar9 = (char)local_d0;
  }
  else {
    cVar9 = '\0';
    *(undefined1 *)(param_1 + 0x35) = 0;
  }
  if ((local_178 & 1) != 0) {
    free(local_168);
    cVar9 = *(char *)(param_1 + 0x35);
  }
  if (cVar9 != '\0') {
                    /* try { // try from 0032d3ec to 0032d69f has its CatchHandler @ 0032d90c */
    uVar4 = FUN_00320aec(&local_110,"vadConfig");
    FUN_0032ea74(uVar4,param_1 + 0x27);
    FUN_0032eb50(uVar4,param_1 + 0x28);
    FUN_0032ecbc(uVar4,param_1 + 0x2c);
    uVar8 = FUN_00320aec(uVar4,"workingSampleRate");
    local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
    FUN_0032f734(uVar8,&local_b0);
    *(undefined4 *)(param_1 + 0x32) = local_b0._0_4_;
    uVar8 = FUN_00320aec(uVar4,"workingFrameDuration");
    local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
    FUN_0032f734(uVar8,&local_b0);
    *(undefined4 *)((long)param_1 + 0x194) = local_b0._0_4_;
    uVar8 = FUN_00320aec(uVar4,&DAT_001c2bdc);
    local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
    FUN_0032f734(uVar8,&local_b0);
    *(undefined4 *)(param_1 + 0x33) = local_b0._0_4_;
    uVar8 = FUN_00320aec(uVar4,"compressRate");
    local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
    FUN_0032f734(uVar8,&local_b0);
    *(undefined4 *)((long)param_1 + 0x19c) = local_b0._0_4_;
    uVar8 = FUN_00320aec(uVar4,"lpsEps");
    local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
    FUN_0032c290(uVar8,&local_b0);
    *(undefined4 *)(param_1 + 0x34) = local_b0._0_4_;
    uVar4 = FUN_00320aec(uVar4,"frameCount");
    local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
    FUN_0032f734(uVar4,&local_b0);
    *(undefined4 *)((long)param_1 + 0x1a4) = local_b0._0_4_;
  }
  FUN_0032ea74(&local_110,param_1 + 6);
  FUN_0032eb50(&local_110,param_1 + 7);
  FUN_0032ecbc(&local_110,param_1 + 0xb);
  uVar4 = FUN_00320aec(&local_110,"workingSampleRate");
  local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
  FUN_0032f734(uVar4,&local_b0);
  *(undefined4 *)((long)param_1 + 0x1ac) = local_b0._0_4_;
  uVar4 = FUN_00320aec(&local_110,"workingFrameDuration");
  local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
  FUN_0032f734(uVar4,&local_b0);
  *(undefined4 *)(param_1 + 0x36) = local_b0._0_4_;
  uVar4 = FUN_00320aec(&local_110,&DAT_001c2bdc);
  local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
  FUN_0032f734(uVar4,&local_b0);
  *(undefined4 *)((long)param_1 + 0x1b4) = local_b0._0_4_;
  uVar4 = FUN_00320aec(&local_110,"compressRate");
  local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
  FUN_0032f734(uVar4,&local_b0);
  *(undefined4 *)(param_1 + 0x37) = local_b0._0_4_;
  uVar4 = FUN_00320aec(&local_110,"lpsEps");
  local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
  FUN_0032c290(uVar4,&local_b0);
  *(undefined4 *)((long)param_1 + 0x1bc) = local_b0._0_4_;
  uVar4 = FUN_00320aec(&local_110,"frameCount");
  local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
  FUN_0032f734(uVar4,&local_b0);
  *(undefined4 *)(param_1 + 0x38) = local_b0._0_4_;
  uVar4 = FUN_00320aec(&local_110,"smoothRmModify");
  local_b0 = (ulong *)((ulong)local_b0 & 0xffffffffffffff00);
  FUN_00312e94(uVar4,&local_b0);
  *(undefined1 *)((long)param_1 + 0x1c4) = local_b0._0_1_;
  uVar4 = FUN_00320aec(&local_110,"highFreqSmooth");
  local_b0 = (ulong *)((ulong)local_b0 & 0xffffffffffffff00);
  FUN_00312e94(uVar4,&local_b0);
  *(undefined1 *)((long)param_1 + 0x1c5) = local_b0._0_1_;
  uVar4 = FUN_00320aec(&local_110,"smoothCoef");
  local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
  FUN_0032c290(uVar4,&local_b0);
  *(undefined4 *)(param_1 + 0x39) = local_b0._0_4_;
  uVar4 = FUN_00320aec(&local_110,"enableRmThreshold");
  local_b0 = (ulong *)((ulong)local_b0 & 0xffffffffffffff00);
  FUN_00312e94(uVar4,&local_b0);
  *(undefined1 *)((long)param_1 + 0x1cc) = local_b0._0_1_;
  uVar4 = FUN_00320aec(&local_110,"rmThreshold");
  local_b0 = (ulong *)((ulong)local_b0 & 0xffffffff00000000);
  FUN_0032c290(uVar4,&local_b0);
  *(undefined4 *)(param_1 + 0x3a) = local_b0._0_4_;
                    /* try { // try from 0032d6b0 to 0032d6b7 has its CatchHandler @ 0032d7f4 */
  FUN_00313038(auStack_158,local_160[0]);
                    /* try { // try from 0032d6c0 to 0032d6c7 has its CatchHandler @ 0032d7f0 */
  FUN_00313038(auStack_148,local_150[0]);
                    /* try { // try from 0032d6d0 to 0032d6d7 has its CatchHandler @ 0032d7ec */
  FUN_00313038(auStack_138,local_140[0]);
                    /* try { // try from 0032d6e0 to 0032d6e7 has its CatchHandler @ 0032d7e8 */
  FUN_00313038(auStack_128,local_130[0]);
                    /* try { // try from 0032d6f0 to 0032d6f7 has its CatchHandler @ 0032d7e4 */
  FUN_00313038(auStack_118,local_120[0]);
                    /* try { // try from 0032d700 to 0032d707 has its CatchHandler @ 0032d7e0 */
  FUN_00313038(&local_108,(char)local_110);
  if ((local_f8 != (long *)0x0) &&
     (lVar10 = FUN_00755c50(0xffffffffffffffff,local_f8 + 1), lVar10 == 0)) {
    (**(code **)(*local_f8 + 0x10))(local_f8);
    FUN_0071245c(local_f8);
  }
  if ((local_f0 & 1) != 0) {
    free(local_e0);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_0032da74:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032da7c  FUN_0032da7c =====

void FUN_0032da7c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined1 local_b8 [8];
  undefined1 auStack_b0 [8];
  ulong local_a8;
  undefined8 uStack_a0;
  void *local_98;
  undefined1 local_90 [8];
  undefined1 auStack_88 [8];
  ulong local_80;
  undefined8 uStack_78;
  void *local_70;
  undefined1 **local_60;
  long local_58;
  undefined1 *puStack_50;
  undefined1 local_48 [8];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0032daa4 to 0032dabb has its CatchHandler @ 0032df38 */
  FUN_00343168(local_48,*(undefined8 *)(param_1 + 0x10),&DAT_007aadc0);
  local_60 = &puStack_50;
                    /* try { // try from 0032dacc to 0032dadb has its CatchHandler @ 0032de84 */
  local_58 = param_1;
  puStack_50 = local_48;
  FUN_003436ac(&local_a8,*(undefined8 *)(param_1 + 0x10),&DAT_007aadc0,&DAT_007aae08);
                    /* try { // try from 0032dadc to 0032daeb has its CatchHandler @ 0032de60 */
  uVar3 = FUN_00320aec(&local_a8,"fileUid");
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (void *)0x0;
                    /* try { // try from 0032daf4 to 0032dafb has its CatchHandler @ 0032de44 */
  FUN_00321278(uVar3,&local_80);
                    /* try { // try from 0032db04 to 0032db0b has its CatchHandler @ 0032de40 */
  FUN_00313038(&uStack_a0,local_a8 & 0xff);
                    /* try { // try from 0032db0c to 0032db1f has its CatchHandler @ 0032de14 */
  FUN_0032e104(&local_60,param_1 + 0x1d8,local_48,&local_80);
  if (*(char *)(param_1 + 0x1a8) == '\0') {
    if (*(char *)(param_1 + 0x130) != '\0') {
                    /* try { // try from 0032dc48 to 0032dc5b has its CatchHandler @ 0032ddb4 */
      FUN_00343168(local_90,*(undefined8 *)(param_1 + 0x10),&DAT_007aadf0);
                    /* try { // try from 0032dc60 to 0032dc6f has its CatchHandler @ 0032ddb0 */
      FUN_003436ac(local_b8,*(undefined8 *)(param_1 + 0x10),&DAT_007aadf0,&DAT_007aae38);
                    /* try { // try from 0032dc70 to 0032dc7f has its CatchHandler @ 0032ddac */
      uVar3 = FUN_00320aec(local_b8,"fileUid");
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = (void *)0x0;
                    /* try { // try from 0032dc88 to 0032dc8f has its CatchHandler @ 0032dda8 */
      FUN_00321278(uVar3,&local_a8);
      if ((local_80 & 1) != 0) {
        free(local_70);
      }
      local_80 = local_a8;
      local_a8 = local_a8 & 0xffffffffffff0000;
      uStack_78 = uStack_a0;
      local_70 = local_98;
                    /* try { // try from 0032dcbc to 0032dcc3 has its CatchHandler @ 0032dda4 */
      FUN_00313038(auStack_b0,local_b8[0]);
                    /* try { // try from 0032dcc4 to 0032dccb has its CatchHandler @ 0032dda0 */
      plVar4 = (long *)FUN_00759c3c(0x60);
      puVar2 = PTR_DAT_007a12d8;
      plVar6 = *(long **)(param_1 + 0x200);
      plVar4[1] = 0;
      plVar4[2] = 0;
      plVar4[0xb] = 0;
      *plVar4 = (long)(puVar2 + 0x10);
      plVar4[6] = 0;
      plVar4[5] = 0;
      plVar4[8] = 0;
      plVar4[7] = 0;
      plVar4[10] = 0;
      plVar4[9] = 0;
      plVar4[4] = 0;
      plVar4[3] = 0;
      *(long **)(param_1 + 0x1f8) = plVar4 + 3;
      *(long **)(param_1 + 0x200) = plVar4;
      if ((plVar6 != (long *)0x0) &&
         (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar5 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0071245c(plVar6);
      }
                    /* try { // try from 0032dd30 to 0032dd47 has its CatchHandler @ 0032dd9c */
      FUN_0032e104(&local_60,param_1 + 0x1f8,local_90,&local_80);
                    /* try { // try from 0032dd4c to 0032dd53 has its CatchHandler @ 0032dd98 */
      FUN_00313038(auStack_88,local_90[0]);
    }
  }
  else {
                    /* try { // try from 0032db2c to 0032db3f has its CatchHandler @ 0032de0c */
    FUN_00343168(local_90,*(undefined8 *)(param_1 + 0x10),&DAT_007aadd8);
                    /* try { // try from 0032db44 to 0032db53 has its CatchHandler @ 0032ddf8 */
    FUN_003436ac(local_b8,*(undefined8 *)(param_1 + 0x10),&DAT_007aadd8,&DAT_007aae20);
                    /* try { // try from 0032db54 to 0032db63 has its CatchHandler @ 0032dde4 */
    uVar3 = FUN_00320aec(local_b8,"fileUid");
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = (void *)0x0;
                    /* try { // try from 0032db6c to 0032db73 has its CatchHandler @ 0032ddc8 */
    FUN_00321278(uVar3,&local_a8);
    if ((local_80 & 1) != 0) {
      free(local_70);
    }
    local_80 = local_a8;
    local_a8 = local_a8 & 0xffffffffffff0000;
    uStack_78 = uStack_a0;
    local_70 = local_98;
                    /* try { // try from 0032dba0 to 0032dba7 has its CatchHandler @ 0032ddc4 */
    FUN_00313038(auStack_b0,local_b8[0]);
                    /* try { // try from 0032dba8 to 0032dbaf has its CatchHandler @ 0032ddc0 */
    plVar4 = (long *)FUN_00759c3c(0x60);
    puVar2 = PTR_DAT_007a12d8;
    plVar6 = *(long **)(param_1 + 0x1f0);
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[0xb] = 0;
    *plVar4 = (long)(puVar2 + 0x10);
    plVar4[6] = 0;
    plVar4[5] = 0;
    plVar4[8] = 0;
    plVar4[7] = 0;
    plVar4[10] = 0;
    plVar4[9] = 0;
    plVar4[4] = 0;
    plVar4[3] = 0;
    *(long **)(param_1 + 0x1e8) = plVar4 + 3;
    *(long **)(param_1 + 0x1f0) = plVar4;
    if ((plVar6 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0071245c(plVar6);
    }
                    /* try { // try from 0032dc14 to 0032dc2b has its CatchHandler @ 0032ddbc */
    FUN_0032e104(&local_60,param_1 + 0x1e8,local_90,&local_80);
                    /* try { // try from 0032dc30 to 0032dc37 has its CatchHandler @ 0032ddb8 */
    FUN_00313038(auStack_88,local_90[0]);
  }
  if ((local_80 & 1) != 0) {
    free(local_70);
  }
                    /* try { // try from 0032dd6c to 0032dd73 has its CatchHandler @ 0032de10 */
  FUN_00313038(auStack_40,local_48[0]);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032dfc8  FUN_0032dfc8 =====

void FUN_0032dfc8(undefined8 param_1,char *param_2)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_60;
  size_t local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __n = strlen(param_2);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_60);
    }
    goto LAB_0032e100;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_0032e058;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_60 = uVar1 + 1 | 1;
    local_58 = __n;
    local_50 = __dest;
LAB_0032e058:
    memcpy(__dest,param_2,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 0032e06c to 0032e077 has its CatchHandler @ 0032e0d4 */
  __n = FUN_0032f460(param_1,&local_60);
  if ((local_60 & 1) != 0) {
    free(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_0032e100:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 0032e104  FUN_0032e104 =====

void FUN_0032e104(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  size_t __n;
  ulong uVar7;
  long lVar8;
  void *__dest;
  long *plVar9;
  undefined8 *puVar10;
  ulong local_b0;
  size_t local_a8;
  void *local_a0;
  char *local_98;
  long local_90;
  void *local_88;
  undefined8 local_80;
  char *local_78;
  long *local_70;
  void *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  puVar10 = (undefined8 *)param_1[1];
  uVar6 = FUN_00320aec(param_3,"engType");
  local_70 = (long *)0x0;
  local_68 = (void *)0x0;
  local_78 = (char *)0x0;
                    /* try { // try from 0032e158 to 0032e15f has its CatchHandler @ 0032e444 */
  FUN_00321278(uVar6,&local_78);
                    /* try { // try from 0032e160 to 0032e167 has its CatchHandler @ 0032e440 */
  uVar5 = FUN_0034b7d0(&local_78);
  *(undefined4 *)*param_2 = uVar5;
  if (((ulong)local_78 & 1) != 0) {
    free(local_68);
  }
  uVar6 = FUN_00320aec(param_3,"deviceToRun");
  local_70 = (long *)0x0;
  local_68 = (void *)0x0;
  local_78 = (char *)0x0;
                    /* try { // try from 0032e198 to 0032e19f has its CatchHandler @ 0032e43c */
  FUN_00321278(uVar6,&local_78);
                    /* try { // try from 0032e1a0 to 0032e1a7 has its CatchHandler @ 0032e438 */
  uVar5 = FUN_0034b9d4(&local_78);
  lVar8 = *param_2;
  *(undefined4 *)(lVar8 + 0x40) = uVar5;
  if (((ulong)local_78 & 1) != 0) {
    free(local_68);
    lVar8 = *param_2;
  }
  FUN_007139b0(lVar8 + 8,param_4);
  (**(code **)(*(long *)*puVar10 + 0x10))(&local_78,(long *)*puVar10,param_4);
  plVar4 = local_70;
  pcVar3 = local_78;
  lVar8 = *param_2;
  if (local_70 != (long *)0x0) {
    FUN_00755c20(1,local_70 + 1);
  }
  plVar9 = *(long **)(lVar8 + 0x38);
  *(char **)(lVar8 + 0x30) = pcVar3;
  *(long **)(lVar8 + 0x38) = plVar4;
  if ((plVar9 != (long *)0x0) && (lVar8 = FUN_00755c50(0xffffffffffffffff,plVar9 + 1), lVar8 == 0))
  {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    FUN_0071245c(plVar9);
  }
  plVar4 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar8 = FUN_00755c50(0xffffffffffffffff,local_70 + 1), lVar8 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
  }
  param_1 = (undefined8 *)*param_1;
  lVar8 = *param_2;
  __n = strlen("threadCount");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_b0);
    }
    goto LAB_0032e484;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_b0 | 1);
    local_b0 = CONCAT71(local_b0._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_0032e2d4;
  }
  else {
    uVar7 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar7 = __n | 7;
    }
    __dest = (void *)FUN_00759c3c(uVar7 + 1);
    local_b0 = uVar7 + 1 | 1;
    local_a8 = __n;
    local_a0 = __dest;
LAB_0032e2d4:
    memcpy(__dest,"threadCount",__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  local_98 = (char *)*param_1;
  local_68 = (void *)0x0;
  local_60 = 0x8000000000000000;
  local_70 = (long *)0x0;
  cVar1 = *local_98;
  local_78 = local_98;
  if (cVar1 == '\x01') {
                    /* try { // try from 0032e330 to 0032e40b has its CatchHandler @ 0032e458 */
    local_70 = (long *)FUN_0032c168(*(undefined8 *)(local_98 + 8),&local_b0);
    local_98 = (char *)*param_1;
    cVar1 = *local_98;
    if (cVar1 != '\x01') goto LAB_0032e384;
LAB_0032e358:
    local_80 = 0x8000000000000000;
    local_88 = (void *)0x0;
    local_90 = *(long *)(local_98 + 8) + 8;
  }
  else if (cVar1 == '\x02') {
    local_88 = *(void **)(*(long *)(local_98 + 8) + 8);
    local_90 = 0;
    local_80 = 0x8000000000000000;
    local_68 = local_88;
  }
  else {
    local_60 = 1;
    if (cVar1 == '\x01') goto LAB_0032e358;
LAB_0032e384:
    local_80 = 0x8000000000000000;
    local_88 = (void *)0x0;
    local_90 = 0;
    if (cVar1 == '\x02') {
      local_88 = *(void **)(*(long *)(local_98 + 8) + 8);
    }
    else {
      local_80 = 1;
    }
  }
  uVar7 = FUN_0032e628(&local_78,&local_98);
  if ((uVar7 & 1) == 0) {
    uVar6 = FUN_0032e488(&local_78);
    local_98 = (char *)((ulong)local_98 & 0xffffffff00000000);
    FUN_0032f734(uVar6,&local_98);
    *(undefined4 *)(lVar8 + 0x44) = local_98._0_4_;
  }
  else {
    *(undefined4 *)(lVar8 + 0x44) = 1;
  }
  if ((local_b0 & 1) != 0) {
    free(local_a0);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_0032e484:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032e488  FUN_0032e488 =====

void FUN_0032e488(long *param_1)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pcVar3 = (char *)*param_1;
  cVar1 = *pcVar3;
  if (cVar1 == '\x01') {
    pcVar3 = (char *)(param_1[1] + 0x38);
  }
  else if (cVar1 == '\x02') {
    pcVar3 = (char *)param_1[2];
  }
  else {
    if (cVar1 == '\0') {
      uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 0032e57c to 0032e58b has its CatchHandler @ 0032e5e0 */
      FUN_002fd2b0(auStack_50,"cannot get value");
                    /* try { // try from 0032e594 to 0032e5cf has its CatchHandler @ 0032e5d0 */
      pcVar3 = (char *)FUN_0032e768(uVar4,0xd6,auStack_50,*param_1);
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar4,PTR_PTR_007a1328,PTR_FUN_007a12f0);
      }
      goto LAB_0032e624;
    }
    if (param_1[3] != 0) {
      uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 0032e4e0 to 0032e4ef has its CatchHandler @ 0032e600 */
      FUN_002fd2b0(auStack_50,"cannot get value");
                    /* try { // try from 0032e4f8 to 0032e533 has its CatchHandler @ 0032e5e4 */
      pcVar3 = (char *)FUN_0032e768(uVar4,0xd6,auStack_50,*param_1);
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar4,PTR_PTR_007a1328,PTR_FUN_007a12f0);
      }
      goto LAB_0032e624;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_0032e624:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pcVar3);
}


// ===== 0032e628  FUN_0032e628 =====

void FUN_0032e628(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((char *)*param_1 == (char *)*param_2) {
    cVar1 = *(char *)*param_1;
    if (cVar1 == '\x02') {
      lVar5 = param_1[2];
      lVar6 = param_2[2];
    }
    else if (cVar1 == '\x01') {
      lVar5 = param_1[1];
      lVar6 = param_2[1];
    }
    else {
      lVar5 = param_1[3];
      lVar6 = param_2[3];
    }
    uVar3 = (ulong)(lVar5 == lVar6);
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return;
    }
  }
  else {
    uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 0032e6c8 to 0032e6d7 has its CatchHandler @ 0032e740 */
    FUN_002fd2b0(auStack_50,"cannot compare iterators of different containers");
                    /* try { // try from 0032e6e0 to 0032e71b has its CatchHandler @ 0032e71c */
    uVar3 = FUN_0032e768(uVar4,0xd4,auStack_50,*param_1);
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a1328,PTR_FUN_007a12f0);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 0032e768  FUN_0032e768 =====

void FUN_0032e768(long *param_1,undefined4 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  size_t sVar5;
  void *pvVar6;
  ulong local_c0;
  size_t local_b8;
  void *local_b0;
  byte local_a8 [16];
  void *local_98;
  byte local_90;
  undefined1 auStack_8f [15];
  undefined1 *local_80;
  ulong local_78;
  size_t local_70;
  void *local_68;
  undefined1 local_5c [4];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  sVar5 = strlen("invalid_iterator");
  if (0xfffffffffffffff7 < sVar5) {
    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_c0);
    }
    goto LAB_0032ea70;
  }
  if (sVar5 < 0x17) {
    pvVar6 = (void *)((ulong)&local_c0 | 1);
    local_c0 = CONCAT71(local_c0._1_7_,(char)((int)sVar5 << 1));
    if (sVar5 != 0) goto LAB_0032e804;
  }
  else {
    uVar1 = (sVar5 & 0xfffffffffffffff8) + 8;
    if ((sVar5 | 7) != 0x17) {
      uVar1 = sVar5 | 7;
    }
    pvVar6 = (void *)FUN_00759c3c(uVar1 + 1);
    local_c0 = uVar1 + 1 | 1;
    local_b8 = sVar5;
    local_b0 = pvVar6;
LAB_0032e804:
    memcpy(pvVar6,"invalid_iterator",sVar5);
  }
  *(undefined1 *)((long)pvVar6 + sVar5) = 0;
  local_5c[0] = 0x2e;
                    /* try { // try from 0032e824 to 0032e82f has its CatchHandler @ 0032ea2c */
  FUN_00714798(&local_78,param_2);
                    /* try { // try from 0032e830 to 0032e853 has its CatchHandler @ 0032ea18 */
  FUN_00312cb0(local_a8,"[json.exception.",&local_c0,local_5c,&local_78,&DAT_001e03c5);
  if ((local_78 & 1) != 0) {
    free(local_68);
  }
  sVar5 = strlen("");
  if (0xfffffffffffffff7 < sVar5) {
    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 0032e9dc to 0032e9e3 has its CatchHandler @ 0032ea34 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_78);
    }
    goto LAB_0032ea70;
  }
  if (sVar5 < 0x17) {
    pvVar6 = (void *)((ulong)&local_78 | 1);
    local_78 = CONCAT71(local_78._1_7_,(char)((int)sVar5 << 1));
    if (sVar5 != 0) goto LAB_0032e8cc;
  }
  else {
    uVar1 = (sVar5 & 0xfffffffffffffff8) + 8;
    if ((sVar5 | 7) != 0x17) {
      uVar1 = sVar5 | 7;
    }
                    /* try { // try from 0032e8b4 to 0032e8bb has its CatchHandler @ 0032ea34 */
    pvVar6 = (void *)FUN_00759c3c(uVar1 + 1);
    local_78 = uVar1 + 1 | 1;
    local_70 = sVar5;
    local_68 = pvVar6;
LAB_0032e8cc:
    memset(pvVar6,0,sVar5);
  }
  *(undefined1 *)((long)pvVar6 + sVar5) = 0;
                    /* try { // try from 0032e8e0 to 0032e8f3 has its CatchHandler @ 0032ea00 */
  FUN_00312bb0(&local_90,local_a8,&local_78,param_3);
  if ((local_78 & 1) != 0) {
    free(local_68);
  }
  if ((local_a8[0] & 1) != 0) {
    free(local_98);
  }
  if ((local_c0 & 1) != 0) {
    free(local_b0);
  }
  puVar4 = PTR_DAT_007a12f8;
  *(undefined4 *)(param_1 + 1) = param_2;
  puVar2 = local_80;
  if ((local_90 & 1) == 0) {
    puVar2 = auStack_8f;
  }
  *param_1 = (long)(puVar4 + 0x10);
                    /* try { // try from 0032e93c to 0032e943 has its CatchHandler @ 0032e9e4 */
  FUN_0071274c(param_1 + 2,puVar2);
  *param_1 = (long)&PTR_FUN_00760628;
  if ((local_90 & 1) != 0) {
    free(local_80);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
LAB_0032ea70:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032ea74  FUN_0032ea74 =====

void FUN_0032ea74(undefined8 param_1,uint *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 local_40 [8];
  undefined1 auStack_38 [12];
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00320aec(param_1,"energyThresholdCut");
  FUN_0032768c(local_40,uVar2);
                    /* try { // try from 0032eaac to 0032eaeb has its CatchHandler @ 0032eb28 */
  uVar2 = FUN_0032dfc8(local_40,"enable");
  local_2c = local_2c & 0xffffff00;
  FUN_00312e94(uVar2,&local_2c);
  *(undefined1 *)(param_2 + 1) = (undefined1)local_2c;
  uVar2 = FUN_0032dfc8(local_40,"cutRefEn");
  local_2c = 0;
  FUN_0032c290(uVar2,&local_2c);
  *param_2 = local_2c;
                    /* try { // try from 0032eafc to 0032eb03 has its CatchHandler @ 0032eb24 */
  FUN_00313038(auStack_38,local_40[0]);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032eb50  FUN_0032eb50 =====

void FUN_0032eb50(undefined8 param_1,ulong *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 local_40 [8];
  undefined1 auStack_38 [8];
  ulong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00320aec(param_1,"rescaleRange");
  FUN_0032768c(local_40,uVar2);
                    /* try { // try from 0032eb88 to 0032ec57 has its CatchHandler @ 0032ec94 */
  uVar2 = FUN_0032dfc8(local_40,"rescale");
  local_30 = local_30 & 0xffffffffffffff00;
  FUN_00312e94(uVar2,&local_30);
  *(undefined1 *)((long)param_2 + 0x1c) = (undefined1)local_30;
  uVar2 = FUN_0032dfc8(local_40,"filterRangeStart");
  local_30 = 0;
  FUN_0032c40c(uVar2,&local_30);
  *param_2 = local_30;
  uVar2 = FUN_0032dfc8(local_40,"filterRangeEnd");
  local_30 = 0;
  FUN_0032c40c(uVar2,&local_30);
  param_2[1] = local_30;
  uVar2 = FUN_0032dfc8(local_40,"coefficientNumber");
  local_30 = local_30 & 0xffffffff00000000;
  FUN_0032f734(uVar2,&local_30);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_30;
  uVar2 = FUN_0032dfc8(local_40,&DAT_001de19b);
  local_30 = local_30 & 0xffffffff00000000;
  FUN_0032c290(uVar2,&local_30);
  *(undefined4 *)((long)param_2 + 0x14) = (undefined4)local_30;
  uVar2 = FUN_0032dfc8(local_40,&DAT_001b7677);
  local_30 = local_30 & 0xffffffff00000000;
  FUN_0032c290(uVar2,&local_30);
  *(undefined4 *)(param_2 + 3) = (undefined4)local_30;
                    /* try { // try from 0032ec68 to 0032ec6f has its CatchHandler @ 0032ec90 */
  FUN_00313038(auStack_38,local_40[0]);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032ecbc  FUN_0032ecbc =====

void FUN_0032ecbc(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00320aec(param_1,"normalizationParams");
  FUN_0032768c(local_48,uVar2);
                    /* try { // try from 0032ecf8 to 0032ed07 has its CatchHandler @ 0032ede8 */
  uVar2 = FUN_0032dfc8(local_48,"weight_MU");
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
                    /* try { // try from 0032ed10 to 0032ed17 has its CatchHandler @ 0032edcc */
  FUN_0032ee10(uVar2,&local_60);
  pvVar3 = (void *)*param_2;
  if (pvVar3 != (void *)0x0) {
    param_2[1] = pvVar3;
    free(pvVar3);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  param_2[1] = uStack_58;
  *param_2 = local_60;
  param_2[2] = local_50;
                    /* try { // try from 0032ed40 to 0032ed4f has its CatchHandler @ 0032edc8 */
  uVar2 = FUN_0032dfc8(local_48,"weight_SD");
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
                    /* try { // try from 0032ed58 to 0032ed5f has its CatchHandler @ 0032edc4 */
  FUN_0032ee10(uVar2,&local_60);
  pvVar3 = (void *)param_2[3];
  if (pvVar3 != (void *)0x0) {
    param_2[4] = pvVar3;
    free(pvVar3);
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
  }
  param_2[4] = uStack_58;
  param_2[3] = local_60;
  param_2[5] = local_50;
                    /* try { // try from 0032ed94 to 0032ed9b has its CatchHandler @ 0032edc0 */
  FUN_00313038(auStack_40,local_48[0]);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032ee10  FUN_0032ee10 =====

void FUN_0032ee10(char *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*param_1 == '\x02') {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      FUN_0032efac();
      return;
    }
  }
  else {
    uVar2 = FUN_00753a74(0x20);
    local_58 = FUN_00312898(param_1);
                    /* try { // try from 0032ee80 to 0032ee93 has its CatchHandler @ 0032eefc */
    FUN_0032ef24(auStack_50,"type must be array, but is ",&local_58);
                    /* try { // try from 0032ee98 to 0032eed7 has its CatchHandler @ 0032eed8 */
    FUN_00312624(uVar2,0x12e,auStack_50,param_1);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a12e8,PTR_FUN_007a12f0);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032ef24  FUN_0032ef24 =====

void FUN_0032ef24(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  size_t sVar1;
  size_t sVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  sVar1 = strlen(param_2);
  sVar2 = strlen((char *)*param_3);
                    /* try { // try from 0032ef5c to 0032ef7f has its CatchHandler @ 0032ef90 */
  FUN_00712ea8(param_1,sVar2 + sVar1);
  FUN_00713bdc(param_1,param_2);
  FUN_00713bdc(param_1,*param_3);
  return;
}


// ===== 0032efac  FUN_0032efac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0032efac(char *param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  void *__ptr;
  long *plVar7;
  long lVar8;
  char *local_b0;
  long *plStack_a8;
  long local_a0;
  undefined8 uStack_98;
  char *local_90;
  long *local_88;
  long local_80;
  long local_78;
  long local_70;
  long lStack_68;
  long local_60;
  undefined4 local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  cVar1 = *param_1;
  local_70 = 0;
  lStack_68 = 0;
  local_60 = 0;
  if (cVar1 == '\x02') goto LAB_0032f038;
  if (cVar1 == '\x01') {
    uVar5 = *(ulong *)(*(long *)(param_1 + 8) + 0x10);
    while (uVar5 != 0) {
      if (uVar5 >> 0x3e == 0) goto LAB_0032f070;
      if (*(long *)(lVar2 + 0x28) != local_48) goto LAB_0032f23c;
                    /* try { // try from 0032f030 to 0032f107 has its CatchHandler @ 0032f20c */
      FUN_002febf0(&local_70);
LAB_0032f038:
      uVar5 = (*(long **)(param_1 + 8))[1] - **(long **)(param_1 + 8) >> 4;
    }
    lVar8 = 0;
    if (cVar1 == '\0') goto LAB_0032f060;
LAB_0032f098:
    local_78 = -0x8000000000000000;
    local_80 = 0;
    local_88 = (long *)0x0;
    if (cVar1 == '\x02') {
      local_80 = **(long **)(param_1 + 8);
      plStack_a8 = (long *)0x0;
      uStack_98 = 0x8000000000000000;
      local_a0 = (*(long **)(param_1 + 8))[1];
      goto LAB_0032f0fc;
    }
    if (cVar1 == '\x01') {
      plStack_a8 = *(long **)(param_1 + 8) + 1;
      local_88 = (long *)**(long **)(param_1 + 8);
      uStack_98 = _UNK_002009f8;
      local_a0 = _DAT_002009f0;
      goto LAB_0032f0fc;
    }
    local_78 = 0;
  }
  else {
    if (cVar1 == '\0') {
      lVar8 = 0;
    }
    else {
      uVar5 = 1;
LAB_0032f070:
      lVar8 = FUN_00759c3c(uVar5 << 2);
      local_60 = lVar8 + uVar5 * 4;
      local_70 = lVar8;
      lStack_68 = lVar8;
      if (cVar1 != '\0') goto LAB_0032f098;
    }
LAB_0032f060:
    local_78 = 1;
  }
  local_80 = 0;
  local_88 = (long *)0x0;
  plStack_a8 = (long *)0x0;
  local_a0 = 0;
  uStack_98 = 1;
LAB_0032f0fc:
  local_b0 = param_1;
  local_90 = param_1;
  uVar5 = FUN_0032e628(&local_90,&local_b0);
  while ((uVar5 & 1) == 0) {
                    /* try { // try from 0032f10c to 0032f1b3 has its CatchHandler @ 0032f210 */
    uVar6 = FUN_0032e488(&local_90);
    local_4c = 0;
    FUN_0032c290(uVar6,&local_4c);
    lVar8 = FUN_0032f240(&local_70,lVar8,&local_4c);
    if (*local_90 == '\x02') {
      local_80 = local_80 + 0x10;
    }
    else if (*local_90 == '\x01') {
      plVar7 = local_88;
      plVar3 = (long *)local_88[1];
      if ((long *)local_88[1] == (long *)0x0) {
        do {
          local_88 = (long *)plVar7[2];
          bVar4 = (long *)*local_88 != plVar7;
          plVar7 = local_88;
        } while (bVar4);
      }
      else {
        do {
          local_88 = plVar3;
          plVar3 = (long *)*local_88;
        } while ((long *)*local_88 != (long *)0x0);
      }
    }
    else {
      local_78 = local_78 + 1;
    }
    uVar5 = FUN_0032e628(&local_90,&local_b0);
    lVar8 = lVar8 + 4;
  }
  __ptr = (void *)*param_2;
  if (__ptr != (void *)0x0) {
    param_2[1] = (long)__ptr;
    free(__ptr);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  param_2[1] = lStack_68;
  *param_2 = local_70;
  param_2[2] = local_60;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_0032f23c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032f240  FUN_0032f240 =====

undefined4 * FUN_0032f240(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  void *__dest;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *pvVar9;
  undefined4 *puVar10;
  
  puVar7 = (undefined4 *)param_1[1];
  if (puVar7 < (undefined4 *)param_1[2]) {
    if (param_2 != puVar7) {
      if (puVar7 + -1 < puVar7) {
        *puVar7 = puVar7[-1];
        param_1[1] = puVar7 + 1;
      }
      else {
        param_1[1] = puVar7;
      }
      if (puVar7 != param_2 + 1) {
        sVar3 = (long)puVar7 - (long)(param_2 + 1);
        memmove((void *)((long)puVar7 - sVar3),param_2,sVar3);
      }
      *param_2 = *param_3;
      return param_2;
    }
    *param_2 = *param_3;
    param_1[1] = param_2 + 1;
    return param_2;
  }
  puVar10 = (undefined4 *)*param_1;
  uVar5 = ((long)puVar7 - (long)puVar10 >> 2) + 1;
  if (uVar5 >> 0x3e != 0) {
    FUN_002febf0(param_1);
LAB_0032f440:
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  uVar4 = (long)param_1[2] - (long)puVar10;
  uVar6 = (long)uVar4 >> 1;
  if (uVar6 <= uVar5) {
    uVar6 = uVar5;
  }
  if (0x7ffffffffffffffb < uVar4) {
    uVar6 = 0x3fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar1 = (void *)0x0;
    uVar5 = (long)param_2 - (long)puVar10;
    pvVar9 = (void *)0x0;
    puVar8 = (undefined4 *)(((long)uVar5 >> 2) << 2);
    if ((long)uVar5 >> 2 != 0) goto LAB_0032f3c4;
  }
  else {
    if (uVar6 >> 0x3e != 0) goto LAB_0032f440;
    pvVar1 = (void *)FUN_00759c3c(uVar6 << 2);
    uVar5 = (long)param_2 - (long)puVar10;
    pvVar9 = (void *)((long)pvVar1 + uVar6 * 4);
    puVar8 = (undefined4 *)((long)pvVar1 + ((long)uVar5 >> 2) * 4);
    if ((long)uVar5 >> 2 != uVar6) goto LAB_0032f3c4;
  }
  if ((long)uVar5 < 1) {
    uVar5 = (long)uVar5 >> 1;
    if (puVar10 == param_2) {
      uVar5 = 1;
    }
    if (uVar5 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0032f444 to 0032f447 has its CatchHandler @ 0032f448 */
      FUN_002f9ee0();
    }
                    /* try { // try from 0032f3a4 to 0032f3a7 has its CatchHandler @ 0032f448 */
    lVar2 = FUN_00759c3c(uVar5 << 2);
    pvVar9 = (void *)(lVar2 + uVar5 * 4);
    puVar8 = (undefined4 *)(lVar2 + (uVar5 & 0xfffffffffffffffc));
    if (pvVar1 != (void *)0x0) {
      free(pvVar1);
      puVar7 = (undefined4 *)param_1[1];
    }
  }
  else {
    puVar8 = (undefined4 *)((long)puVar8 - ((uVar5 >> 1) + 2 & 0xfffffffffffffffc));
  }
LAB_0032f3c4:
  *puVar8 = *param_3;
  memcpy(puVar8 + 1,param_2,(long)puVar7 - (long)param_2);
  lVar2 = param_1[1];
  param_1[1] = param_2;
  sVar3 = (long)param_2 - (long)*param_1;
  __dest = (void *)((long)puVar8 - sVar3);
  memcpy(__dest,(void *)*param_1,sVar3);
  pvVar1 = (void *)*param_1;
  *param_1 = __dest;
  param_1[1] = (long)(puVar8 + 1) + (lVar2 - (long)param_2);
  param_1[2] = pvVar9;
  if (pvVar1 != (void *)0x0) {
    free(pvVar1);
  }
  return puVar8;
}


// ===== 0032f460  FUN_0032f460 =====

long FUN_0032f460(char *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_58;
  undefined8 local_50 [3];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*param_1 == '\0') {
    *param_1 = '\x01';
    puVar2 = (undefined8 *)FUN_00759c3c(0x18);
    puVar2[2] = 0;
    puVar2[1] = 0;
    *puVar2 = puVar2 + 1;
    *(undefined8 **)(param_1 + 8) = puVar2;
  }
  else if (*param_1 != '\x01') {
    uVar4 = FUN_00753a74(0x20);
    local_58 = FUN_00312898(param_1);
                    /* try { // try from 0032f518 to 0032f52b has its CatchHandler @ 0032f594 */
    FUN_0032c0e0(local_50,"cannot use operator[] with a string argument with ",&local_58);
                    /* try { // try from 0032f530 to 0032f56f has its CatchHandler @ 0032f570 */
    FUN_00328abc(uVar4,0x131,local_50,param_1);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a12e8,PTR_FUN_007a12f0);
    }
    goto LAB_0032f5b8;
  }
  local_50[0] = 0;
  lVar3 = FUN_0032f5bc(*(undefined8 *)(param_1 + 8),param_2,param_2,local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return lVar3 + 0x38;
  }
LAB_0032f5b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032f5bc  FUN_0032f5bc =====

undefined1  [16] FUN_0032f5bc(long *param_1,byte *param_2,long *param_3)

{
  void *__s2;
  size_t __n;
  ulong uVar1;
  byte *__s1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  plVar9 = param_1 + 1;
  plVar7 = (long *)*plVar9;
  plVar10 = plVar9;
  if (plVar7 != (long *)0x0) {
    uVar1 = *(ulong *)(param_2 + 8);
    __s1 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      __s1 = param_2 + 1;
      uVar1 = (ulong)(*param_2 >> 1);
    }
    do {
      while( true ) {
        plVar9 = plVar7;
        __s2 = (void *)((long)plVar9 + 0x21);
        uVar3 = (ulong)(*(byte *)(plVar9 + 4) >> 1);
        if ((*(byte *)(plVar9 + 4) & 1) != 0) {
          __s2 = (void *)plVar9[6];
          uVar3 = plVar9[5];
        }
        __n = uVar3;
        if (uVar1 <= uVar3) {
          __n = uVar1;
        }
        iVar4 = memcmp(__s1,__s2,__n);
        bVar2 = uVar1 < uVar3;
        if (iVar4 != 0) {
          bVar2 = iVar4 < 0;
        }
        if (bVar2) break;
        iVar4 = memcmp(__s2,__s1,__n);
        bVar2 = uVar3 < uVar1;
        if (iVar4 != 0) {
          bVar2 = iVar4 < 0;
        }
        if (!bVar2) {
          uVar6 = 0;
          goto LAB_0032f718;
        }
        plVar7 = (long *)plVar9[1];
        if ((long *)plVar9[1] == (long *)0x0) {
          plVar10 = plVar9 + 1;
          goto LAB_0032f6a4;
        }
      }
      plVar7 = (long *)*plVar9;
      plVar10 = plVar9;
    } while ((long *)*plVar9 != (long *)0x0);
  }
LAB_0032f6a4:
  plVar5 = (long *)FUN_00759c3c(0x48);
  lVar12 = param_3[1];
  lVar11 = *param_3;
  lVar8 = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  plVar5[5] = lVar12;
  plVar5[4] = lVar11;
  plVar5[6] = lVar8;
  param_3[2] = 0;
  plVar5[8] = 0;
  *plVar5 = 0;
  plVar5[1] = 0;
  plVar5[2] = (long)plVar9;
  *plVar10 = (long)plVar5;
  plVar9 = (long *)*param_1;
  *(undefined1 *)(plVar5 + 7) = 0;
  plVar7 = plVar5;
  if (*plVar9 != 0) {
    *param_1 = *plVar9;
    plVar7 = (long *)*plVar10;
  }
  FUN_00328410(param_1[1],plVar7);
  uVar6 = 1;
  param_1[2] = param_1[2] + 1;
  plVar9 = plVar5;
LAB_0032f718:
  auVar13._8_8_ = uVar6;
  auVar13._0_8_ = plVar9;
  return auVar13;
}


// ===== 0032f734  FUN_0032f734 =====

void FUN_0032f734(byte *param_1,uint *param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  bVar1 = *param_1;
  if (bVar1 < 6) {
    if (bVar1 == 4) {
      uVar4 = (uint)param_1[8];
    }
    else {
      if (bVar1 != 5) {
LAB_0032f788:
        uVar3 = FUN_00753a74(0x20);
        local_58 = FUN_00312898(param_1);
                    /* try { // try from 0032f7ac to 0032f7bf has its CatchHandler @ 0032f864 */
        FUN_00321398(auStack_50,"type must be number, but is ",&local_58);
                    /* try { // try from 0032f7c4 to 0032f807 has its CatchHandler @ 0032f840 */
        FUN_00312624(uVar3,0x12e,auStack_50,param_1);
        if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar3,PTR_PTR_007a12e8,PTR_FUN_007a12f0);
        }
        goto LAB_0032f88c;
      }
LAB_0032f770:
      uVar4 = *(uint *)(param_1 + 8);
    }
  }
  else {
    if (bVar1 != 7) {
      if (bVar1 != 6) goto LAB_0032f788;
      goto LAB_0032f770;
    }
    uVar4 = (uint)*(double *)(param_1 + 8);
  }
  *param_2 = uVar4;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_0032f88c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032f890  _INIT_10 =====

void _INIT_10(void)

{
  ulong uVar1;
  undefined *puVar2;
  size_t sVar3;
  void *pvVar4;
  
  sVar3 = strlen("fpConfig");
  if (0xfffffffffffffff7 < sVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(&DAT_007aada8);
  }
  if (sVar3 < 0x17) {
    pvVar4 = (void *)((long)&DAT_007aada8 + 1);
    DAT_007aada8 = CONCAT71(DAT_007aada8._1_7_,(char)((int)sVar3 << 1));
    if (sVar3 != 0) goto LAB_0032f908;
  }
  else {
    uVar1 = (sVar3 & 0xfffffffffffffff8) + 8;
    if ((sVar3 | 7) != 0x17) {
      uVar1 = sVar3 | 7;
    }
    pvVar4 = (void *)FUN_00759c3c(uVar1 + 1);
    DAT_007aada8 = uVar1 + 1 | 1;
    DAT_007aadb0 = sVar3;
    DAT_007aadb8 = pvVar4;
LAB_0032f908:
    memcpy(pvVar4,"fpConfig",sVar3);
  }
  *(undefined1 *)((long)pvVar4 + sVar3) = 0;
  __cxa_atexit(PTR_FUN_007a13a0,&DAT_007aada8,&PTR_LOOP_0075ec90);
  sVar3 = strlen("inferConfigNc");
  if (0xfffffffffffffff7 < sVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(&DAT_007aadc0);
  }
  if (sVar3 < 0x17) {
    pvVar4 = (void *)((long)&DAT_007aadc0 + 1);
    DAT_007aadc0 = CONCAT71(DAT_007aadc0._1_7_,(char)((int)sVar3 << 1));
    if (sVar3 != 0) goto LAB_0032f9a4;
  }
  else {
    uVar1 = (sVar3 & 0xfffffffffffffff8) + 8;
    if ((sVar3 | 7) != 0x17) {
      uVar1 = sVar3 | 7;
    }
    pvVar4 = (void *)FUN_00759c3c(uVar1 + 1);
    DAT_007aadc0 = uVar1 + 1 | 1;
    DAT_007aadc8 = sVar3;
    DAT_007aadd0 = pvVar4;
LAB_0032f9a4:
    memcpy(pvVar4,"inferConfigNc",sVar3);
  }
  *(undefined1 *)((long)pvVar4 + sVar3) = 0;
  __cxa_atexit(PTR_FUN_007a13a0,&DAT_007aadc0,&PTR_LOOP_0075ec90);
  sVar3 = strlen("inferConfigVad");
  if (0xfffffffffffffff7 < sVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(&DAT_007aadd8);
  }
  if (sVar3 < 0x17) {
    pvVar4 = (void *)((long)&DAT_007aadd8 + 1);
    DAT_007aadd8 = CONCAT71(DAT_007aadd8._1_7_,(char)((int)sVar3 << 1));
    if (sVar3 != 0) goto LAB_0032fa48;
  }
  else {
    uVar1 = (sVar3 & 0xfffffffffffffff8) + 8;
    if ((sVar3 | 7) != 0x17) {
      uVar1 = sVar3 | 7;
    }
    pvVar4 = (void *)FUN_00759c3c(uVar1 + 1);
    DAT_007aadd8 = uVar1 + 1 | 1;
    DAT_007aade0 = sVar3;
    DAT_007aade8 = pvVar4;
LAB_0032fa48:
    memcpy(pvVar4,"inferConfigVad",sVar3);
  }
  *(undefined1 *)((long)pvVar4 + sVar3) = 0;
  __cxa_atexit(PTR_FUN_007a13a0,&DAT_007aadd8,&PTR_LOOP_0075ec90);
  sVar3 = strlen("inferConfigCsd");
  if (0xfffffffffffffff7 < sVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(&DAT_007aadf0);
  }
  if (sVar3 < 0x17) {
    pvVar4 = (void *)((long)&DAT_007aadf0 + 1);
    DAT_007aadf0 = CONCAT71(DAT_007aadf0._1_7_,(char)((int)sVar3 << 1));
    if (sVar3 != 0) goto LAB_0032faec;
  }
  else {
    uVar1 = (sVar3 & 0xfffffffffffffff8) + 8;
    if ((sVar3 | 7) != 0x17) {
      uVar1 = sVar3 | 7;
    }
    pvVar4 = (void *)FUN_00759c3c(uVar1 + 1);
    DAT_007aadf0 = uVar1 + 1 | 1;
    DAT_007aadf8 = sVar3;
    DAT_007aae00 = pvVar4;
LAB_0032faec:
    memcpy(pvVar4,"inferConfigCsd",sVar3);
  }
  *(undefined1 *)((long)pvVar4 + sVar3) = 0;
  __cxa_atexit(PTR_FUN_007a13a0,&DAT_007aadf0,&PTR_LOOP_0075ec90);
  sVar3 = strlen("nativeModelNc");
  if (0xfffffffffffffff7 < sVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(&DAT_007aae08);
  }
  if (sVar3 < 0x17) {
    pvVar4 = (void *)((long)&DAT_007aae08 + 1);
    DAT_007aae08 = CONCAT71(DAT_007aae08._1_7_,(char)((int)sVar3 << 1));
    if (sVar3 != 0) goto LAB_0032fb90;
  }
  else {
    uVar1 = (sVar3 & 0xfffffffffffffff8) + 8;
    if ((sVar3 | 7) != 0x17) {
      uVar1 = sVar3 | 7;
    }
    pvVar4 = (void *)FUN_00759c3c(uVar1 + 1);
    DAT_007aae08 = uVar1 + 1 | 1;
    DAT_007aae10 = sVar3;
    DAT_007aae18 = pvVar4;
LAB_0032fb90:
    memcpy(pvVar4,"nativeModelNc",sVar3);
  }
  *(undefined1 *)((long)pvVar4 + sVar3) = 0;
  __cxa_atexit(PTR_FUN_007a13a0,&DAT_007aae08,&PTR_LOOP_0075ec90);
  sVar3 = strlen("nativeModelVad");
  if (0xfffffffffffffff7 < sVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(&DAT_007aae20);
  }
  if (sVar3 < 0x17) {
    pvVar4 = (void *)((long)&DAT_007aae20 + 1);
    DAT_007aae20 = CONCAT71(DAT_007aae20._1_7_,(char)((int)sVar3 << 1));
    if (sVar3 != 0) goto LAB_0032fc34;
  }
  else {
    uVar1 = (sVar3 & 0xfffffffffffffff8) + 8;
    if ((sVar3 | 7) != 0x17) {
      uVar1 = sVar3 | 7;
    }
    pvVar4 = (void *)FUN_00759c3c(uVar1 + 1);
    DAT_007aae20 = uVar1 + 1 | 1;
    DAT_007aae28 = sVar3;
    DAT_007aae30 = pvVar4;
LAB_0032fc34:
    memcpy(pvVar4,"nativeModelVad",sVar3);
  }
  *(undefined1 *)((long)pvVar4 + sVar3) = 0;
  __cxa_atexit(PTR_FUN_007a13a0,&DAT_007aae20,&PTR_LOOP_0075ec90);
  sVar3 = strlen("nativeModelCsd");
  if (0xfffffffffffffff7 < sVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(&DAT_007aae38);
  }
  if (sVar3 < 0x17) {
    pvVar4 = (void *)((long)&DAT_007aae38 + 1);
    DAT_007aae38 = CONCAT71(DAT_007aae38._1_7_,(char)((int)sVar3 << 1));
    if (sVar3 == 0) goto LAB_0032fcec;
  }
  else {
    uVar1 = (sVar3 & 0xfffffffffffffff8) + 8;
    if ((sVar3 | 7) != 0x17) {
      uVar1 = sVar3 | 7;
    }
    pvVar4 = (void *)FUN_00759c3c(uVar1 + 1);
    DAT_007aae38 = uVar1 + 1 | 1;
    DAT_007aae40 = sVar3;
    DAT_007aae48 = pvVar4;
  }
  memcpy(pvVar4,"nativeModelCsd",sVar3);
LAB_0032fcec:
  puVar2 = PTR_FUN_007a13a0;
  *(undefined1 *)((long)pvVar4 + sVar3) = 0;
  __cxa_atexit(puVar2,&DAT_007aae38,&PTR_LOOP_0075ec90);
  return;
}


// ===== 0032fd6c  FUN_0032fd6c =====

void FUN_0032fd6c(long param_1,void *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  size_t sVar9;
  undefined8 *__ptr;
  undefined4 *unaff_x26;
  long lVar10;
  undefined1 auStack_128 [24];
  long local_110;
  long local_108;
  long lStack_100;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined1 local_bc;
  void *local_b8;
  void *local_b0;
  void *local_a8;
  void *local_a0;
  void *local_98;
  void *local_90;
  int local_88;
  int iStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar1 = *(int *)(param_1 + 0x178);
  puVar4 = (undefined8 *)FUN_00759c3c(0x28);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if (iVar1 < 0) {
    if (*(long *)(lVar3 + 0x28) != local_68) goto LAB_0033014c;
                    /* try { // try from 00330070 to 00330077 has its CatchHandler @ 00330114 */
    FUN_002febf0(puVar4);
LAB_00330078:
    if (*(long *)(lVar3 + 0x28) != local_68) goto LAB_0033014c;
                    /* try { // try from 00330088 to 0033008f has its CatchHandler @ 003300fc */
    FUN_002febf0(unaff_x26 + 0xc);
LAB_00330090:
    if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 003300a0 to 003300a7 has its CatchHandler @ 003300d4 */
      uVar6 = FUN_002febf0(unaff_x26 + 0x12);
                    /* catch() { ... } // from try @ 0032ff80 with catch @ 003300a8 */
      free(param_2);
      FUN_0033018c(&local_e8);
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00755eac(uVar6);
      }
    }
  }
  else {
    lVar10 = (long)(int)(iVar1 * 10 | 1);
    sVar9 = lVar10 * 4;
                    /* try { // try from 0032fdd4 to 0032fddb has its CatchHandler @ 00330114 */
    pvVar5 = (void *)FUN_00759c3c(sVar9);
    *puVar4 = pvVar5;
    puVar4[2] = (void *)((long)pvVar5 + lVar10 * 4);
    memset(pvVar5,0,sVar9);
    __ptr = *(undefined8 **)(param_1 + 0x488);
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[1] = (void *)((long)pvVar5 + sVar9);
    *(undefined8 **)(param_1 + 0x488) = puVar4;
    if (__ptr != (undefined8 *)0x0) {
      pvVar5 = (void *)*__ptr;
      __ptr[1] = 0;
      __ptr[2] = 0;
      *__ptr = 0;
      if (pvVar5 != (void *)0x0) {
        free(pvVar5);
        pvVar5 = (void *)*__ptr;
        if (pvVar5 != (void *)0x0) {
          __ptr[1] = pvVar5;
          free(pvVar5);
        }
      }
      free(__ptr);
    }
    uVar6 = FUN_00759c3c(8);
                    /* try { // try from 0032fe50 to 0032fe5b has its CatchHandler @ 003300c8 */
    FUN_00349cd8(uVar6,(long)*(int *)((long)param_2 + 0x18c),(long)*(int *)((long)param_2 + 0x170),0
                 ,2);
    pvVar5 = *(void **)(param_1 + 0x480);
    *(undefined8 *)(param_1 + 0x480) = uVar6;
    if (pvVar5 != (void *)0x0) {
      FUN_00349ee0(pvVar5);
      free(pvVar5);
    }
    iVar1 = *(int *)(param_1 + 0x170);
    local_110 = (long)iVar1;
    iVar2 = *(int *)(param_1 + 0x174);
    lStack_100 = (long)iVar2;
    unaff_x26 = &local_e8;
    local_c8 = *(undefined4 *)(param_1 + 0x130);
    local_bc = *(undefined1 *)(param_1 + 0x13c);
    local_e8 = 0;
    local_e4 = 0;
    param_2 = *(void **)(param_1 + 0x140);
    local_a8 = (void *)0x0;
    sVar9 = *(long *)(param_1 + 0x148) - (long)param_2;
    local_dc = *(undefined1 *)(param_1 + 0x11c);
    local_b8 = (void *)0x0;
    local_b0 = (void *)0x0;
    local_e0 = *(undefined4 *)(param_1 + 0x118);
    uStack_d0 = *(undefined8 *)(param_1 + 0x128);
    local_d8 = *(undefined8 *)(param_1 + 0x120);
    local_c4 = *(undefined8 *)(param_1 + 0x134);
    local_108 = (long)((double)(iVar2 * iVar1) / 1000.0);
    if (sVar9 != 0) {
      if ((long)sVar9 < 0) goto LAB_00330078;
                    /* try { // try from 0032fefc to 0032ff03 has its CatchHandler @ 003300fc */
      local_b8 = (void *)FUN_00759c3c(sVar9);
      pvVar5 = (void *)((long)local_b8 + sVar9);
      local_a8 = pvVar5;
      memcpy(local_b8,param_2,sVar9);
      local_b0 = pvVar5;
    }
    param_2 = *(void **)(param_1 + 0x158);
    local_a0 = (void *)0x0;
    local_98 = (void *)0x0;
    local_90 = (void *)0x0;
    sVar9 = *(long *)(param_1 + 0x160) - (long)param_2;
    if (sVar9 != 0) {
      if ((long)sVar9 < 0) goto LAB_00330090;
                    /* try { // try from 0032ff38 to 0032ff3f has its CatchHandler @ 003300d4 */
      local_a0 = (void *)FUN_00759c3c(sVar9);
      pvVar5 = (void *)((long)local_a0 + sVar9);
      local_90 = pvVar5;
      memcpy(local_a0,param_2,sVar9);
      local_98 = pvVar5;
    }
    local_80 = *(undefined8 *)(param_1 + 0x178);
    local_78 = *(undefined4 *)(param_1 + 0x180);
    local_74 = *(undefined4 *)(param_1 + 0x184);
    uStack_70 = 0;
    local_88 = iVar1;
    iStack_84 = iVar2;
                    /* try { // try from 0032ff78 to 0032ff7f has its CatchHandler @ 003300b8 */
    uVar6 = FUN_00759c3c(0x240);
                    /* try { // try from 0032ff80 to 0032ff93 has its CatchHandler @ 003300a8 */
    FUN_00334644(uVar6,auStack_128,&local_e8,param_3);
    pvVar5 = *(void **)(param_1 + 0x478);
    *(undefined8 *)(param_1 + 0x478) = uVar6;
    if (pvVar5 != (void *)0x0) {
      FUN_0031410c(pvVar5);
      free(pvVar5);
    }
    plVar8 = *(long **)(param_1 + 0x488);
    iVar1 = *(int *)(param_1 + 0x178);
    lVar7 = (long)iVar1;
    pvVar5 = (void *)*plVar8;
    lVar10 = plVar8[4];
    if ((ulong)(plVar8[1] - (long)pvVar5 >> 2) < (ulong)(lVar10 + lVar7)) {
      memcpy(pvVar5,(void *)((long)pvVar5 + plVar8[3] * 4),(lVar10 - plVar8[3]) * 4);
      lVar10 = plVar8[3];
      plVar8[3] = 0;
      lVar10 = plVar8[4] - lVar10;
    }
    if (iVar1 != 0) {
      memset((void *)(*plVar8 + lVar10 * 4),0,lVar7 << 2);
    }
    plVar8[4] = lVar10 + lVar7;
    if (local_a0 != (void *)0x0) {
      local_98 = local_a0;
      free(local_a0);
    }
    if (local_b8 != (void *)0x0) {
      local_b0 = local_b8;
      free(local_b8);
    }
    if (*(long *)(lVar3 + 0x28) == local_68) {
      return;
    }
  }
LAB_0033014c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00330150  FUN_00330150 =====

void FUN_00330150(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_0031410c(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 0033018c  FUN_0033018c =====

void FUN_0033018c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x48);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x50) = pvVar1;
    free(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x30);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x38) = pvVar1;
    free(pvVar1);
    return;
  }
  return;
}


// ===== 003301d0  FUN_003301d0 =====

void FUN_003301d0(long param_1,void *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  size_t sVar9;
  undefined8 *__ptr;
  undefined4 *unaff_x26;
  long lVar10;
  undefined1 auStack_128 [24];
  long local_110;
  long local_108;
  long lStack_100;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined1 local_bc;
  void *local_b8;
  void *local_b0;
  void *local_a8;
  void *local_a0;
  void *local_98;
  void *local_90;
  int local_88;
  int iStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar2 = *(int *)(param_1 + 0xf8);
  puVar4 = (undefined8 *)FUN_00759c3c(0x28);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if (iVar2 < 0) {
    if (*(long *)(lVar3 + 0x28) != local_68) goto LAB_003305ac;
                    /* try { // try from 003304d0 to 003304d7 has its CatchHandler @ 00330574 */
    FUN_002febf0(puVar4);
LAB_003304d8:
    if (*(long *)(lVar3 + 0x28) != local_68) goto LAB_003305ac;
                    /* try { // try from 003304e8 to 003304ef has its CatchHandler @ 0033055c */
    FUN_002febf0(unaff_x26 + 0xc);
LAB_003304f0:
    if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 00330500 to 00330507 has its CatchHandler @ 00330534 */
      uVar6 = FUN_002febf0(unaff_x26 + 0x12);
                    /* catch() { ... } // from try @ 003303e0 with catch @ 00330508 */
      free(param_2);
      FUN_0033018c(&local_e8);
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00755eac(uVar6);
      }
    }
  }
  else {
    lVar10 = (long)(int)(iVar2 * 10 | 1);
    sVar9 = lVar10 * 4;
                    /* try { // try from 00330238 to 0033023f has its CatchHandler @ 00330574 */
    pvVar5 = (void *)FUN_00759c3c(sVar9);
    *puVar4 = pvVar5;
    puVar4[2] = (void *)((long)pvVar5 + lVar10 * 4);
    memset(pvVar5,0,sVar9);
    __ptr = *(undefined8 **)(param_1 + 0x4a0);
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[1] = (void *)((long)pvVar5 + sVar9);
    *(undefined8 **)(param_1 + 0x4a0) = puVar4;
    if (__ptr != (undefined8 *)0x0) {
      pvVar5 = (void *)*__ptr;
      __ptr[1] = 0;
      __ptr[2] = 0;
      *__ptr = 0;
      if (pvVar5 != (void *)0x0) {
        free(pvVar5);
        pvVar5 = (void *)*__ptr;
        if (pvVar5 != (void *)0x0) {
          __ptr[1] = pvVar5;
          free(pvVar5);
        }
      }
      free(__ptr);
    }
    uVar6 = FUN_00759c3c(8);
                    /* try { // try from 003302b4 to 003302bf has its CatchHandler @ 00330528 */
    FUN_00349cd8(uVar6,(long)*(int *)((long)param_2 + 0x18c),(long)*(int *)((long)param_2 + 0xf0),0,
                 2);
    pvVar5 = *(void **)(param_1 + 0x498);
    *(undefined8 *)(param_1 + 0x498) = uVar6;
    if (pvVar5 != (void *)0x0) {
      FUN_00349ee0(pvVar5);
      free(pvVar5);
    }
    iVar2 = *(int *)(param_1 + 0xf0);
    local_110 = (long)iVar2;
    iVar1 = *(int *)(param_1 + 0xf8);
    lStack_100 = (long)iVar1;
    local_c8 = *(undefined4 *)(param_1 + 0xb0);
    unaff_x26 = &local_e8;
    local_e8 = 0;
    local_e4 = 0;
    local_b0 = (void *)0x0;
    local_a8 = (void *)0x0;
    local_b8 = (void *)0x0;
    local_dc = *(undefined1 *)(param_1 + 0x9c);
    local_bc = *(undefined1 *)(param_1 + 0xbc);
    local_e0 = *(undefined4 *)(param_1 + 0x98);
    param_2 = *(void **)(param_1 + 0xc0);
    uStack_d0 = *(undefined8 *)(param_1 + 0xa8);
    local_d8 = *(undefined8 *)(param_1 + 0xa0);
    local_c4 = *(undefined8 *)(param_1 + 0xb4);
    sVar9 = *(long *)(param_1 + 200) - (long)param_2;
    local_108 = (long)((double)(iVar1 * iVar2) / 1000.0);
    if (sVar9 != 0) {
      if ((long)sVar9 < 0) goto LAB_003304d8;
                    /* try { // try from 00330358 to 0033035f has its CatchHandler @ 0033055c */
      local_b8 = (void *)FUN_00759c3c(sVar9);
      pvVar5 = (void *)((long)local_b8 + sVar9);
      local_a8 = pvVar5;
      memcpy(local_b8,param_2,sVar9);
      local_b0 = pvVar5;
    }
    param_2 = *(void **)(param_1 + 0xd8);
    local_a0 = (void *)0x0;
    local_98 = (void *)0x0;
    local_90 = (void *)0x0;
    sVar9 = *(long *)(param_1 + 0xe0) - (long)param_2;
    if (sVar9 != 0) {
      if ((long)sVar9 < 0) goto LAB_003304f0;
                    /* try { // try from 00330394 to 0033039b has its CatchHandler @ 00330534 */
      local_a0 = (void *)FUN_00759c3c(sVar9);
      pvVar5 = (void *)((long)local_a0 + sVar9);
      local_90 = pvVar5;
      memcpy(local_a0,param_2,sVar9);
      local_98 = pvVar5;
    }
    local_80 = *(undefined8 *)(param_1 + 0xf8);
    local_78 = *(undefined4 *)(param_1 + 0x100);
    local_74 = *(undefined4 *)(param_1 + 0x104);
    uStack_70 = 3;
    local_88 = iVar2;
    iStack_84 = iVar1;
                    /* try { // try from 003303d8 to 003303df has its CatchHandler @ 00330518 */
    uVar6 = FUN_00759c3c(0x240);
                    /* try { // try from 003303e0 to 003303f3 has its CatchHandler @ 00330508 */
    FUN_00334644(uVar6,auStack_128,&local_e8,param_3);
    pvVar5 = *(void **)(param_1 + 0x490);
    *(undefined8 *)(param_1 + 0x490) = uVar6;
    if (pvVar5 != (void *)0x0) {
      FUN_0031410c(pvVar5);
      free(pvVar5);
    }
    plVar8 = *(long **)(param_1 + 0x4a0);
    iVar2 = *(int *)(param_1 + 0xf8);
    lVar7 = (long)iVar2;
    pvVar5 = (void *)*plVar8;
    lVar10 = plVar8[4];
    if ((ulong)(plVar8[1] - (long)pvVar5 >> 2) < (ulong)(lVar10 + lVar7)) {
      memcpy(pvVar5,(void *)((long)pvVar5 + plVar8[3] * 4),(lVar10 - plVar8[3]) * 4);
      lVar10 = plVar8[3];
      plVar8[3] = 0;
      lVar10 = plVar8[4] - lVar10;
    }
    if (iVar2 != 0) {
      memset((void *)(*plVar8 + lVar10 * 4),0,lVar7 << 2);
    }
    plVar8[4] = lVar10 + lVar7;
    if (local_a0 != (void *)0x0) {
      local_98 = local_a0;
      free(local_a0);
    }
    if (local_b8 != (void *)0x0) {
      local_b0 = local_b8;
      free(local_b8);
    }
    if (*(long *)(lVar3 + 0x28) == local_68) {
      return;
    }
  }
LAB_003305ac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003305b0  FUN_003305b0 =====

void FUN_003305b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  char *pcVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined8 uVar8;
  ulong uVar9;
  size_t sVar10;
  size_t __n;
  undefined8 *unaff_x22;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  float fVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  undefined8 *local_b0;
  long *local_a8;
  long *local_98;
  undefined8 local_80;
  long *plStack_78;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar23 = param_3[3];
  uVar22 = param_3[2];
  uVar19 = param_3[5];
  uVar8 = param_3[4];
  uVar21 = param_3[1];
  uVar20 = *param_3;
  param_1[6] = param_3[6];
  param_1[3] = uVar23;
  param_1[2] = uVar22;
  param_1[5] = uVar19;
  param_1[4] = uVar8;
  param_1[1] = uVar21;
  *param_1 = uVar20;
  FUN_003332fc(param_1 + 7,param_3 + 7);
  uVar8 = *(undefined8 *)((long)param_3 + 0x84);
  uVar20 = param_3[0x10];
  uVar19 = param_3[0xf];
  uVar22 = param_3[0xe];
  uVar21 = param_3[0xd];
  *(undefined8 *)((long)param_1 + 0x8c) = *(undefined8 *)((long)param_3 + 0x8c);
  *(undefined8 *)((long)param_1 + 0x84) = uVar8;
  param_1[0x10] = uVar20;
  param_1[0xf] = uVar19;
  param_1[0xe] = uVar22;
  param_1[0xd] = uVar21;
  uVar19 = param_3[0x16];
  uVar8 = param_3[0x15];
  uVar21 = param_3[0x14];
  uVar20 = param_3[0x13];
  param_1[0x17] = param_3[0x17];
  param_1[0x16] = uVar19;
  param_1[0x15] = uVar8;
  param_1[0x14] = uVar21;
  param_1[0x13] = uVar20;
                    /* try { // try from 00330648 to 00330653 has its CatchHandler @ 00330d1c */
  FUN_003332fc(param_1 + 0x18,param_3 + 0x18);
  uVar20 = param_3[0x1e];
  uVar19 = param_3[0x21];
  uVar8 = param_3[0x20];
  param_1[0x1f] = param_3[0x1f];
  param_1[0x1e] = uVar20;
  param_1[0x21] = uVar19;
  param_1[0x20] = uVar8;
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_3 + 0x22);
  uVar21 = param_3[0x24];
  uVar20 = param_3[0x23];
  uVar19 = param_3[0x26];
  uVar8 = param_3[0x25];
  param_1[0x27] = param_3[0x27];
  param_1[0x24] = uVar21;
  param_1[0x23] = uVar20;
  param_1[0x26] = uVar19;
  param_1[0x25] = uVar8;
                    /* try { // try from 0033067c to 00330687 has its CatchHandler @ 00330d0c */
  FUN_003332fc(param_1 + 0x28,param_3 + 0x28);
  uVar19 = param_3[0x2f];
  uVar8 = param_3[0x2e];
  pcVar1 = (char *)(param_3 + 0x31);
  param_1[0x30] = param_3[0x30];
  param_1[0x2f] = uVar19;
  param_1[0x2e] = uVar8;
  uVar22 = param_3[0x32];
  uVar21 = *(undefined8 *)pcVar1;
  uVar20 = param_3[0x34];
  uVar19 = param_3[0x33];
  uVar8 = *(undefined8 *)((long)param_3 + 0x1a4);
  *(undefined8 *)((long)param_1 + 0x1ac) = *(undefined8 *)((long)param_3 + 0x1ac);
  *(undefined8 *)((long)param_1 + 0x1a4) = uVar8;
  param_1[0x32] = uVar22;
  param_1[0x31] = uVar21;
  param_1[0x34] = uVar20;
  param_1[0x33] = uVar19;
  uVar8 = *param_2;
  uVar20 = param_2[3];
  uVar19 = param_2[2];
  param_1[0x38] = param_2[1];
  param_1[0x37] = uVar8;
  param_1[0x3a] = uVar20;
  param_1[0x39] = uVar19;
  uVar23 = param_2[7];
  uVar22 = param_2[6];
  uVar19 = param_2[9];
  uVar8 = param_2[8];
  uVar21 = param_2[5];
  uVar20 = param_2[4];
  param_1[0x41] = param_2[10];
  plVar2 = param_1 + 0x44;
  param_1[0x3e] = uVar23;
  param_1[0x3d] = uVar22;
  param_1[0x40] = uVar19;
  param_1[0x3f] = uVar8;
  param_1[0x3c] = uVar21;
  param_1[0x3b] = uVar20;
  sVar10 = param_2[4];
  *(undefined2 *)(param_1 + 0x43) = 0;
  param_1[0x44] = 0;
  param_1[0x46] = 0;
  param_1[0x42] = sVar10;
  param_1[0x45] = 0;
  if (*(int *)((long)param_1 + 0x194) < 0) {
    if (*(long *)(lVar5 + 0x28) != local_68) goto LAB_00330e4c;
                    /* try { // try from 00330c58 to 00330c5f has its CatchHandler @ 00330e50 */
    FUN_002febf0(plVar2);
LAB_00330c60:
    if (*(long *)(lVar5 + 0x28) != local_68) goto LAB_00330e4c;
                    /* try { // try from 00330c74 to 00330c7b has its CatchHandler @ 00330dc4 */
    FUN_0031921c(local_b0);
  }
  else {
    lVar14 = (long)(int)(*(int *)((long)param_1 + 0x194) * 10 | 1);
    __n = lVar14 * 4;
                    /* try { // try from 00330714 to 0033071b has its CatchHandler @ 00330e50 */
    pvVar7 = (void *)FUN_00759c3c(__n);
    param_1[0x44] = pvVar7;
    param_1[0x46] = (void *)((long)pvVar7 + lVar14 * 4);
    memset(pvVar7,0,__n);
    param_1[0x45] = (void *)((long)pvVar7 + __n);
    param_1[0x4b] = 0;
    param_1[0x48] = 0;
    param_1[0x47] = 0;
    param_1[0x4a] = 0;
    param_1[0x49] = 0;
                    /* try { // try from 00330750 to 00330757 has its CatchHandler @ 00330d04 */
    pvVar7 = (void *)FUN_00759c3c(__n);
    local_98 = param_1 + 0x49;
    param_1[0x49] = pvVar7;
    param_1[0x4b] = (void *)((long)pvVar7 + lVar14 * 4);
    memset(pvVar7,0,__n);
    param_1[0x4e] = 0x42c8000000000000;
    unaff_x22 = param_1 + 0x50;
    param_1[0x4a] = (void *)((long)pvVar7 + __n);
    param_1[0x4d] = 0;
    param_1[0x4c] = 0;
    param_1[0x4f] = param_2[9];
                    /* try { // try from 003307a0 to 003307ab has its CatchHandler @ 00330cfc */
    FUN_00330e70(unaff_x22,sVar10);
    dVar18 = (double)NEON_ucvtf(param_2[5]);
                    /* try { // try from 003307cc to 003307d7 has its CatchHandler @ 00330cf4 */
    FUN_00345ff4(*(undefined4 *)(param_3 + 2),param_1 + 0x53,10,(long)(4000.0 / dVar18));
    *(undefined1 *)((long)param_1 + 0x304) = *(undefined1 *)((long)param_3 + 0x14);
                    /* try { // try from 003307e4 to 003307ef has its CatchHandler @ 00330cec */
    FUN_003460fc(param_1 + 0x61,param_1[0x42],1);
    uVar8 = param_3[3];
    iVar4 = *(int *)((long)param_3 + 0x194);
    param_1[0x65] = param_3[4];
    param_1[100] = uVar8;
    uVar16 = 0;
    if ((long)iVar4 != 0) {
      uVar16 = (ulong)(param_2[3] * 3) / (ulong)(long)iVar4;
    }
                    /* try { // try from 00330814 to 0033081f has its CatchHandler @ 00330ce4 */
    FUN_00349b60(*(undefined4 *)((long)param_3 + 0x2c),
                 *(float *)(param_3 + 6) * *(float *)(param_3 + 6),
                 *(undefined4 *)((long)param_3 + 0x8c),*(undefined4 *)(param_3 + 0x11),
                 param_1 + 0x66,10,uVar16);
    param_1[0x75] = 0;
    param_1[0x74] = 0;
    uVar24 = *(undefined4 *)(param_3 + 0x35);
    uVar8 = param_2[5];
    *(undefined4 *)(param_1 + 0x76) = *(undefined4 *)(param_3 + 5);
    *(undefined4 *)((long)param_1 + 0x3b4) = uVar24;
                    /* try { // try from 00330854 to 0033085f has its CatchHandler @ 00330cdc */
    FUN_00345a7c(*(undefined4 *)(param_1 + 0xd),*(undefined4 *)((long)param_1 + 0x6c),
                 *(undefined4 *)(param_1 + 0xf),param_1 + 0x77,(long)*(float *)(param_1 + 0xe),
                 (long)*(int *)((long)param_1 + 0x74),*(undefined1 *)((long)param_1 + 0x7c),uVar8,
                 unaff_x22);
    param_1[0x81] = 0;
    param_1[0x83] = 0;
    local_b0 = param_1 + 0x81;
    param_1[0x82] = 0;
    if (0x3ffffffffffffffd < (ulong)param_1[0x42]) goto LAB_00330c60;
    lVar14 = ((ulong)param_1[0x42] >> 1) + 1;
    sVar10 = lVar14 * 8;
                    /* try { // try from 00330890 to 00330897 has its CatchHandler @ 00330dc4 */
    pvVar7 = (void *)FUN_00759c3c(sVar10);
    param_1[0x81] = pvVar7;
    param_1[0x83] = (void *)((long)pvVar7 + lVar14 * 8);
    memset(pvVar7,0,sVar10);
    param_1[0x84] = 0;
    param_1[0x86] = 0;
    param_1[0x85] = 0;
    uVar9 = (param_1[4] - param_1[3]) * (long)(*(int *)(param_1 + 0x34) * 5 + 5);
    param_1[0x82] = (void *)((long)pvVar7 + sVar10);
    uVar16 = uVar9 + 1;
    local_a8 = param_1 + 0x84;
    if (0xfffffffffffffffe < uVar9) {
LAB_0033092c:
      param_1[0x8c] = 0;
      *(undefined1 *)(param_1 + 0x89) = 0;
      param_1[0x8b] = 0;
      param_1[0x8a] = 0;
      param_1[0x88] = 0;
      param_1[0x87] = 0;
                    /* try { // try from 00330944 to 0033094b has its CatchHandler @ 00330cd4 */
      FUN_0036c290(param_1 + 0x8d);
      param_1[0x97] = 0;
      param_1[0x90] = 0;
      param_1[0x8f] = 0;
      param_1[0x92] = 0;
      param_1[0x91] = 0;
      param_1[0x94] = 0;
      param_1[0x93] = 0;
      param_1[0x96] = 0;
      param_1[0x95] = 0;
      if (*(char *)(param_3 + 0x22) == '\0') {
        param_1[0x98] = 0;
        param_1[0x99] = 0;
        param_1[0x9a] = 0;
      }
      else {
                    /* try { // try from 00330974 to 0033097b has its CatchHandler @ 00330c98 */
        FUN_00330e70(param_1 + 0x98,(long)*(int *)(param_3 + 0x1f) << 1);
      }
      param_1[0x9b] = 0;
                    /* try { // try from 00330990 to 0033099f has its CatchHandler @ 00330d30 */
      uVar8 = FUN_0034b7c4();
      FUN_0034ad20(&local_80,uVar8,param_4);
      plVar6 = plStack_78;
      uVar8 = local_80;
      plVar11 = (long *)param_1[0x75];
      local_80 = 0;
      plStack_78 = (long *)0x0;
      param_1[0x75] = plVar6;
      param_1[0x74] = uVar8;
      if ((plVar11 != (long *)0x0) &&
         (lVar14 = FUN_00755c50(0xffffffffffffffff,plVar11 + 1), lVar14 == 0)) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        FUN_0071245c(plVar11);
      }
      plVar6 = plStack_78;
      if ((plStack_78 == (long *)0x0) ||
         (lVar14 = FUN_00755c50(0xffffffffffffffff,plStack_78 + 1), lVar14 != 0)) {
        cVar3 = *pcVar1;
      }
      else {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0071245c(plVar6);
        cVar3 = *pcVar1;
      }
      if (cVar3 != '\0') {
                    /* try { // try from 003309fc to 00330a23 has its CatchHandler @ 00330d2c */
        FUN_0032fd6c(param_1,param_3,param_5);
      }
      if (*(char *)(param_3 + 0x22) != '\0') {
        FUN_003301d0(param_1,param_3,param_6);
      }
      iVar4 = *(int *)((long)param_1 + 0x194);
      lVar15 = (long)iVar4;
      lVar14 = param_1[0x48];
      pvVar7 = (void *)param_1[0x44];
      if ((ulong)(param_1[0x45] - (long)pvVar7 >> 2) < (ulong)(lVar14 + lVar15)) {
        memcpy(pvVar7,(void *)((long)pvVar7 + param_1[0x47] * 4),(lVar14 - param_1[0x47]) * 4);
        lVar14 = param_1[0x47];
        param_1[0x47] = 0;
        lVar14 = param_1[0x48] - lVar14;
      }
      if (iVar4 != 0) {
        memset((void *)(*plVar2 + lVar14 * 4),0,lVar15 << 2);
      }
      lVar12 = param_2[10];
      lVar13 = param_1[0x4d];
      pvVar7 = (void *)param_1[0x49];
      param_1[0x48] = lVar14 + lVar15;
      if ((ulong)(param_1[0x4a] - (long)pvVar7 >> 2) < (ulong)(lVar13 + lVar12)) {
        memcpy(pvVar7,(void *)((long)pvVar7 + param_1[0x4c] * 4),(lVar13 - param_1[0x4c]) * 4);
        lVar13 = param_1[0x4c];
        param_1[0x4c] = 0;
        lVar13 = param_1[0x4d] - lVar13;
      }
      if (lVar12 != 0) {
        memset((void *)(*local_98 + lVar13 * 4),0,lVar12 << 2);
      }
      lVar14 = param_1[0x88];
      pvVar7 = (void *)param_1[0x84];
      uVar16 = (ulong)((param_1[4] - param_1[3]) * (long)*(int *)(param_1 + 0x34) *
                      ((long)*(int *)(param_1 + 0x33) + 2)) >>
               ((ulong)(*(int *)(param_1 + 0x33) + 1) & 0x3f);
      param_1[0x4d] = lVar13 + lVar12;
      if ((ulong)(param_1[0x85] - (long)pvVar7 >> 2) < uVar16 + lVar14) {
        memcpy(pvVar7,(void *)((long)pvVar7 + param_1[0x87] * 4),(lVar14 - param_1[0x87]) * 4);
        lVar14 = param_1[0x87];
        param_1[0x87] = 0;
        lVar14 = param_1[0x88] - lVar14;
      }
      if (uVar16 != 0) {
        memset((void *)(*local_a8 + lVar14 * 4),0,uVar16 << 2);
      }
      fVar17 = *(float *)(param_3 + 0x12);
      param_1[0x88] = lVar14 + uVar16;
      if (fVar17 != 0.0 && fVar17 < 0.0 == NAN(fVar17)) {
        dVar18 = exp2(-1.0 / ((double)(int)(fVar17 * (float)*(int *)((long)param_3 + 0x18c)) /
                             (double)*(int *)((long)param_3 + 0x194)));
        *(float *)(param_1 + 0x60) = (float)dVar18;
      }
                    /* try { // try from 00330bbc to 00330bc3 has its CatchHandler @ 00330cb0 */
      uVar8 = FUN_00759c3c(0x150);
                    /* try { // try from 00330bcc to 00330bcf has its CatchHandler @ 00330ca0 */
      FUN_00333b9c(uVar8,param_1[0x39]);
      pvVar7 = (void *)param_1[0x9b];
      param_1[0x9b] = uVar8;
      if (pvVar7 != (void *)0x0) {
        FUN_00313fd8(pvVar7);
        free(pvVar7);
      }
      if (*(long *)(lVar5 + 0x28) == local_68) {
        return;
      }
      goto LAB_00330e4c;
    }
    if (uVar16 >> 0x3e == 0) {
      sVar10 = uVar16 * 4;
                    /* try { // try from 00330900 to 00330907 has its CatchHandler @ 00330cb4 */
      pvVar7 = (void *)FUN_00759c3c(sVar10);
      param_1[0x84] = pvVar7;
      param_1[0x86] = (void *)((long)pvVar7 + uVar16 * 4);
      memset(pvVar7,0,sVar10);
      param_1[0x85] = (void *)((long)pvVar7 + sVar10);
      goto LAB_0033092c;
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* try { // try from 00330c90 to 00330c97 has its CatchHandler @ 00330cb4 */
    uVar8 = FUN_002febf0(local_a8);
                    /* catch() { ... } // from try @ 00330974 with catch @ 00330c98 */
    pvVar7 = (void *)param_1[0x95];
    if (pvVar7 != (void *)0x0) {
      param_1[0x96] = pvVar7;
      free(pvVar7);
    }
    FUN_003178f0(param_1 + 0x94);
    FUN_00317998(param_1 + 0x93);
    FUN_00330150(param_1 + 0x92);
    FUN_003178f0(param_1 + 0x91);
    FUN_00317998(param_1 + 0x90);
    FUN_00330150(sVar10);
    FUN_00319230(param_1 + 0x8d);
    pvVar7 = (void *)param_1[0x8a];
    if (pvVar7 != (void *)0x0) {
      param_1[0x8b] = pvVar7;
      free(pvVar7);
    }
    FUN_00330fc8(local_a8);
    pvVar7 = (void *)*local_b0;
    if (pvVar7 != (void *)0x0) {
      param_1[0x82] = pvVar7;
      free(pvVar7);
    }
    FUN_00331010(param_1 + 0x77);
    FUN_00317948(param_1 + 0x74);
    FUN_00331070(param_1 + 0x66);
    FUN_0034653c(param_1 + 0x61);
    FUN_003310dc(param_1 + 0x53);
    pvVar7 = (void *)*unaff_x22;
    if (pvVar7 != (void *)0x0) {
      param_1[0x51] = pvVar7;
      free(pvVar7);
    }
    FUN_00330fc8(local_98);
    FUN_00330fc8(plVar2);
    FUN_0032c890(param_1);
    if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar8);
    }
  }
LAB_00330e4c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00330e70  FUN_00330e70 =====

void FUN_00330e70(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  void *__s;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  void *unaff_x20;
  size_t __n;
  undefined1 uStack_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 == 0) {
    __s = (void *)0x0;
    pvVar4 = (void *)0x0;
  }
  else {
    if (param_2 >> 0x3e != 0) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00330f3c to 00330f43 has its CatchHandler @ 00330f58 */
        uVar2 = FUN_002febf0(param_1);
                    /* catch() { ... } // from try @ 00330ef4 with catch @ 00330f44 */
        if (unaff_x20 != (void *)0x0) {
          param_1[1] = unaff_x20;
          free(unaff_x20);
        }
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00755eac(uVar2);
        }
      }
      goto LAB_00330f88;
    }
    __n = param_2 * 4;
                    /* try { // try from 00330eb4 to 00330ebb has its CatchHandler @ 00330f58 */
    __s = (void *)FUN_00759c3c(__n);
    *param_1 = __s;
    param_1[2] = (void *)((long)__s + param_2 * 4);
    memset(__s,0,__n);
    pvVar4 = (void *)((long)__s + __n);
    param_1[1] = pvVar4;
  }
  lVar3 = (long)pvVar4 - (long)__s >> 2;
                    /* try { // try from 00330ef4 to 00330f03 has its CatchHandler @ 00330f44 */
  FUN_0034a9a8(&uStack_49,lVar3,__s,lVar3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00330f88:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00330f8c  FUN_00330f8c =====

void FUN_00330f8c(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_00313fd8(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 00330fc8  FUN_00330fc8 =====

void FUN_00330fc8(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    free(pvVar1);
    pvVar1 = (void *)*param_1;
    if (pvVar1 != (void *)0x0) {
      param_1[1] = pvVar1;
      free(pvVar1);
      return;
    }
  }
  return;
}


// ===== 00331010  FUN_00331010 =====

void FUN_00331010(long param_1)

{
  long *__ptr;
  long *plVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    __ptr = *(long **)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = 0;
    lVar2 = *__ptr;
    plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 8);
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    while (__ptr != (long *)(param_1 + 0x20)) {
      plVar1 = (long *)__ptr[1];
      free(__ptr);
      __ptr = plVar1;
    }
  }
  return;
}


