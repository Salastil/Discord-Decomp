// ===== 00533050  FUN_00533050 =====

long * FUN_00533050(long *param_1,long *param_2,long *param_3,undefined8 param_4,uint *param_5,
                   undefined8 param_6,undefined4 *param_7,undefined4 *param_8)

{
  long lVar1;
  undefined4 *puVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *local_98;
  undefined8 *local_90;
  code *pcStack_88;
  undefined8 local_80;
  undefined8 ***local_78;
  undefined8 **local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00520ce8(&local_98,param_4);
  plVar16 = local_98;
  local_80 = 0;
  local_90 = &DAT_00d61be8;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61be8 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 005330e0 to 005330f7 has its CatchHandler @ 00533580 */
    FUN_0054698c(&DAT_00d61be8,&local_78,FUN_005459e0);
  }
  lVar14 = plVar16[2];
  if (((ulong)(plVar16[3] - lVar14 >> 3) <= (long)DAT_00d61bf0 - 1U) ||
     (plVar16 = *(long **)(lVar14 + ((long)DAT_00d61bf0 - 1U) * 8), plVar16 == (long *)0x0)) {
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 0053357c to 0053357f has its CatchHandler @ 00533580 */
      uVar12 = FUN_0053cd4c();
                    /* catch() { ... } // from try @ 005330e0 with catch @ 00533580
                       catch() { ... } // from try @ 0053357c with catch @ 00533580 */
      plVar16 = local_98 + 1;
      do {
        lVar14 = *plVar16;
        cVar5 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*local_98 + 0x10))();
      }
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00d0fa5c(uVar12);
      }
    }
    goto LAB_005335c8;
  }
  plVar15 = local_98 + 1;
  do {
    lVar14 = *plVar15;
    cVar5 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar3) {
      *plVar15 = lVar14 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar14 == 0) {
    (**(code **)(*local_98 + 0x10))();
  }
  *param_5 = 0;
  if (param_7 != param_8) {
    while (param_2 == (long *)0x0) {
      bVar3 = true;
      if (param_3 != (long *)0x0) goto LAB_00533198;
LAB_00533170:
      if (bVar3) goto LAB_005334a0;
LAB_005331d0:
      cVar5 = (**(code **)(*plVar16 + 0x68))(plVar16,*param_7,0);
      if (cVar5 == '%') {
        if (param_7 + 1 == param_8) goto LAB_005334a0;
        uVar6 = (**(code **)(*plVar16 + 0x68))(plVar16,param_7[1],0);
        if (((uVar6 & 0xff) == 0x45) || ((uVar6 & 0xff) == 0x30)) {
          if (param_7 + 2 == param_8) goto LAB_005334a0;
          uVar7 = (**(code **)(*plVar16 + 0x68))(plVar16,param_7[2],0);
          lVar14 = 2;
          uVar13 = uVar6;
        }
        else {
          uVar13 = 0;
          lVar14 = 1;
          uVar7 = uVar6;
        }
        param_7 = param_7 + lVar14;
        param_2 = (long *)(**(code **)(*param_1 + 0x48))
                                    (param_1,param_2,param_3,param_4,param_5,param_6,uVar7,uVar13);
LAB_00533300:
        param_7 = param_7 + 1;
      }
      else {
        uVar11 = (**(code **)(*plVar16 + 0x18))(plVar16,1,*param_7);
        if ((uVar11 & 1) == 0) {
          if ((undefined4 *)param_2[3] == (undefined4 *)param_2[4]) {
            uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          else {
            uVar8 = *(undefined4 *)param_2[3];
          }
          iVar10 = (**(code **)(*plVar16 + 0x38))(plVar16,uVar8);
          iVar9 = (**(code **)(*plVar16 + 0x38))(plVar16,*param_7);
          if (iVar10 == iVar9) {
            if (param_2[3] == param_2[4]) {
              (**(code **)(*param_2 + 0x50))(param_2);
              goto LAB_00533300;
            }
            param_2[3] = param_2[3] + 4;
            param_7 = param_7 + 1;
          }
          else {
            *param_5 = 4;
          }
        }
        else {
          do {
            param_7 = param_7 + 1;
            puVar2 = param_8;
            if (param_7 == param_8) break;
            uVar11 = (**(code **)(*plVar16 + 0x18))(plVar16,1,*param_7);
            puVar2 = param_7;
          } while ((uVar11 & 1) != 0);
          plVar15 = param_2;
          param_7 = puVar2;
          if (param_2 != (long *)0x0) goto LAB_00533330;
LAB_005333ac:
          bVar4 = true;
          plVar15 = param_3;
          bVar3 = true;
          if (param_3 != (long *)0x0) goto LAB_00533364;
          while (!bVar3) {
            while( true ) {
              if ((undefined4 *)param_2[3] == (undefined4 *)param_2[4]) {
                uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
              }
              else {
                uVar8 = *(undefined4 *)param_2[3];
              }
              uVar11 = (**(code **)(*plVar16 + 0x18))(plVar16,1,uVar8);
              if ((uVar11 & 1) == 0) goto joined_r0x00533468;
              if (param_2[3] == param_2[4]) {
                (**(code **)(*param_2 + 0x50))(param_2);
              }
              else {
                param_2[3] = param_2[3] + 4;
              }
              plVar15 = param_2;
              if (param_2 == (long *)0x0) goto LAB_005333ac;
LAB_00533330:
              if ((int *)plVar15[3] == (int *)plVar15[4]) {
                iVar10 = (**(code **)(*plVar15 + 0x48))(plVar15);
              }
              else {
                iVar10 = *(int *)plVar15[3];
              }
              bVar4 = iVar10 == -1;
              param_2 = (long *)0x0;
              if (!bVar4) {
                param_2 = plVar15;
              }
              plVar15 = param_3;
              bVar3 = bVar4;
              if (param_3 == (long *)0x0) break;
LAB_00533364:
              if ((int *)plVar15[3] == (int *)plVar15[4]) {
                iVar10 = (**(code **)(*plVar15 + 0x48))(plVar15);
              }
              else {
                iVar10 = *(int *)plVar15[3];
              }
              param_3 = (long *)0x0;
              if (iVar10 != -1) {
                param_3 = plVar15;
              }
              if (bVar4 == (iVar10 == -1)) goto joined_r0x00533468;
            }
          }
        }
      }
joined_r0x00533468:
      if ((param_7 == param_8) || (*param_5 != 0)) goto LAB_005334a8;
    }
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar10 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar10 = *(int *)param_2[3];
    }
    bVar3 = iVar10 == -1;
    plVar15 = (long *)0x0;
    if (!bVar3) {
      plVar15 = param_2;
    }
    param_2 = plVar15;
    if (param_3 == (long *)0x0) goto LAB_00533170;
LAB_00533198:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar10 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar10 = *(int *)param_3[3];
    }
    plVar15 = (long *)0x0;
    if (iVar10 != -1) {
      plVar15 = param_3;
    }
    param_3 = plVar15;
    if (bVar3 != (iVar10 == -1)) goto LAB_005331d0;
LAB_005334a0:
    *param_5 = 4;
  }
LAB_005334a8:
  if (param_2 == (long *)0x0) {
    bVar3 = true;
    if (param_3 != (long *)0x0) goto LAB_005334f0;
LAB_005334c8:
    if (bVar3) {
LAB_00533524:
      *param_5 = *param_5 | 2;
    }
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar10 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar10 = *(int *)param_2[3];
    }
    bVar3 = iVar10 == -1;
    plVar16 = (long *)0x0;
    if (!bVar3) {
      plVar16 = param_2;
    }
    param_2 = plVar16;
    if (param_3 == (long *)0x0) goto LAB_005334c8;
LAB_005334f0:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar10 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar10 = *(int *)param_3[3];
    }
    if (bVar3 == (iVar10 == -1)) goto LAB_00533524;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return param_2;
  }
LAB_005335c8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005335cc  FUN_005335cc =====

undefined8 FUN_005335cc(void)

{
  return 2;
}


// ===== 005335d4  FUN_005335d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005335d4(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00533050();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00533634  FUN_00533634 =====

void FUN_00533634(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(**(code **)(*(long *)(param_1 + 0x10) + 0x28))();
  uVar1 = puVar3[1];
  puVar2 = (undefined8 *)*puVar3;
  if (-1 < (char)*(byte *)((long)puVar3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)puVar3 + 0x17);
    puVar2 = puVar3;
  }
  FUN_00533050(param_1,param_2,param_3,param_4,param_5,param_6,puVar2,(long)puVar2 + uVar1 * 4);
  return;
}


// ===== 005336b8  FUN_005336b8 =====

void FUN_005336b8(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  long *plVar1;
  undefined1 auVar2 [16];
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *local_80;
  long *local_78;
  undefined8 *local_70;
  code *pcStack_68;
  undefined8 local_60;
  undefined8 **local_58;
  undefined8 **local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  local_78 = param_2;
  plVar6 = (long *)FUN_00520ce8(&local_80,param_4);
  plVar1 = local_80;
  local_60 = 0;
  local_70 = &DAT_00d61be8;
  pcStack_68 = FUN_0053d0c8;
  if (DAT_00d61be8 != -1) {
    local_50 = &local_70;
    local_58 = &local_50;
                    /* try { // try from 00533730 to 00533747 has its CatchHandler @ 00533850 */
    plVar6 = (long *)FUN_0054698c(&DAT_00d61be8,&local_58,FUN_005459e0);
  }
  lVar9 = plVar1[2];
  if (((long)DAT_00d61bf0 - 1U < (ulong)(plVar1[3] - lVar9 >> 3)) &&
     (lVar9 = *(long *)(lVar9 + ((long)DAT_00d61bf0 - 1U) * 8), lVar9 != 0)) {
    plVar1 = local_80 + 1;
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
      (**(code **)(*local_80 + 0x10))();
    }
    lVar8 = (*(code *)**(undefined8 **)(param_1 + 0x10))((undefined8 *)(param_1 + 0x10));
    lVar9 = FUN_00527328(&local_78,param_3,lVar8,lVar8 + 0x150,lVar9,param_5,0);
    if (lVar9 - lVar8 < 0x150) {
      lVar9 = (lVar9 - lVar8 >> 3) * -0x5555555555555555;
      auVar2 = SEXT816(lVar9) * SEXT816(0x4924924924924925);
      *(int *)(param_6 + 0x18) =
           (int)lVar9 + ((int)(auVar2._8_8_ >> 1) - (auVar2._12_4_ >> 0x1f)) * -7;
    }
    plVar6 = local_78;
    if (*(long *)(lVar5 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar5 + 0x28) == local_48) {
                    /* try { // try from 0053384c to 0053384f has its CatchHandler @ 00533850 */
    uVar7 = FUN_0053cd4c();
                    /* catch() { ... } // from try @ 00533730 with catch @ 00533850
                       catch() { ... } // from try @ 0053384c with catch @ 00533850 */
    plVar1 = local_80 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar6 = local_80;
    if (lVar9 == 0) {
      plVar6 = (long *)(**(code **)(*local_80 + 0x10))();
    }
    if (*(long *)(lVar5 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00d0fa5c(uVar7);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar6);
}


// ===== 00533898  FUN_00533898 =====

void FUN_00533898(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *local_80;
  long *local_78;
  undefined8 *local_70;
  code *pcStack_68;
  undefined8 local_60;
  undefined8 **local_58;
  undefined8 **local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_78 = param_2;
  plVar5 = (long *)FUN_00520ce8(&local_80,param_4);
  plVar1 = local_80;
  local_60 = 0;
  local_70 = &DAT_00d61be8;
  pcStack_68 = FUN_0053d0c8;
  if (DAT_00d61be8 != -1) {
    local_50 = &local_70;
    local_58 = &local_50;
                    /* try { // try from 00533910 to 00533927 has its CatchHandler @ 00533a2c */
    plVar5 = (long *)FUN_0054698c(&DAT_00d61be8,&local_58,FUN_005459e0);
  }
  lVar8 = plVar1[2];
  if (((long)DAT_00d61bf0 - 1U < (ulong)(plVar1[3] - lVar8 >> 3)) &&
     (lVar8 = *(long *)(lVar8 + ((long)DAT_00d61bf0 - 1U) * 8), lVar8 != 0)) {
    plVar1 = local_80 + 1;
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
      (**(code **)(*local_80 + 0x10))();
    }
    lVar7 = (**(code **)(*(long *)(param_1 + 0x10) + 8))((long *)(param_1 + 0x10));
    lVar8 = FUN_00527328(&local_78,param_3,lVar7,lVar7 + 0x240,lVar8,param_5,0);
    if (lVar8 - lVar7 < 0x240) {
      lVar8 = (lVar8 - lVar7 >> 3) * -0x5555555555555555;
      *(int *)(param_6 + 0x10) =
           (int)lVar8 +
           ((int)((ulong)(lVar8 / 6 + (lVar8 >> 0x3f)) >> 1) -
           (SUB164(SEXT816(lVar8) * SEXT816(0x2aaaaaaaaaaaaaab),0xc) >> 0x1f)) * -0xc;
    }
    plVar5 = local_78;
    if (*(long *)(lVar4 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 00533a28 to 00533a2b has its CatchHandler @ 00533a2c */
    uVar6 = FUN_0053cd4c();
                    /* catch() { ... } // from try @ 00533910 with catch @ 00533a2c
                       catch() { ... } // from try @ 00533a28 with catch @ 00533a2c */
    plVar1 = local_80 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar5 = local_80;
    if (lVar8 == 0) {
      plVar5 = (long *)(**(code **)(*local_80 + 0x10))();
    }
    if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00d0fa5c(uVar6);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar5);
}


// ===== 00533a74  FUN_00533a74 =====

void FUN_00533a74(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 byte *param_5,long param_6)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *local_80;
  long *local_78;
  undefined8 *local_70;
  code *pcStack_68;
  undefined8 local_60;
  undefined8 **local_58;
  undefined8 **local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  local_78 = param_2;
  plVar8 = (long *)FUN_00520ce8(&local_80,param_4);
  plVar1 = local_80;
  local_60 = 0;
  local_70 = &DAT_00d61be8;
  pcStack_68 = FUN_0053d0c8;
  if (DAT_00d61be8 != -1) {
    local_50 = &local_70;
    local_58 = &local_50;
                    /* try { // try from 00533ae8 to 00533aff has its CatchHandler @ 00533bcc */
    plVar8 = (long *)FUN_0054698c(&DAT_00d61be8,&local_58,FUN_005459e0);
  }
  lVar11 = plVar1[2];
  if (((long)DAT_00d61bf0 - 1U < (ulong)(plVar1[3] - lVar11 >> 3)) &&
     (lVar11 = *(long *)(lVar11 + ((long)DAT_00d61bf0 - 1U) * 8), lVar11 != 0)) {
    plVar1 = local_80 + 1;
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
      (**(code **)(*local_80 + 0x10))();
    }
    iVar7 = FUN_00534694(&local_78,param_3,param_5,lVar11,4);
    if ((*param_5 >> 2 & 1) == 0) {
      iVar2 = iVar7 + 0x76c;
      if (99 < iVar7) {
        iVar2 = iVar7;
      }
      iVar3 = iVar7 + 2000;
      if (0x44 < iVar7) {
        iVar3 = iVar2;
      }
      *(int *)(param_6 + 0x14) = iVar3 + -0x76c;
    }
    plVar8 = local_78;
    if (*(long *)(lVar6 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar6 + 0x28) == local_48) {
                    /* try { // try from 00533bc8 to 00533bcb has its CatchHandler @ 00533bcc */
    uVar9 = FUN_0053cd4c();
                    /* catch() { ... } // from try @ 00533ae8 with catch @ 00533bcc
                       catch() { ... } // from try @ 00533bc8 with catch @ 00533bcc */
    plVar1 = local_80 + 1;
    do {
      lVar11 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar8 = local_80;
    if (lVar11 == 0) {
      plVar8 = (long *)(**(code **)(*local_80 + 0x10))();
    }
    if (*(long *)(lVar6 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00d0fa5c(uVar9);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar8);
}


// ===== 00533c14  FUN_00533c14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00533c14(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,uint *param_5,
                 int *param_6,undefined1 param_7)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  char cVar7;
  bool bVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  undefined8 **ppuVar12;
  undefined8 uVar13;
  undefined8 **ppuVar14;
  undefined4 *puVar15;
  uint uVar16;
  code *pcVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long *local_b0;
  long *local_a8;
  undefined8 ***local_a0;
  undefined8 **local_98;
  undefined8 *local_90;
  code *pcStack_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined4 auStack_64 [3];
  long local_58;
  
  lVar9 = tpidr_el0;
  local_58 = *(long *)(lVar9 + 0x28);
  *param_5 = 0;
  local_a8 = param_2;
  plVar11 = (long *)FUN_00520ce8(&local_b0,param_4);
  plVar1 = local_b0;
  local_80 = 0;
  local_90 = &DAT_00d61be8;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61be8 != -1) {
    local_98 = &local_90;
    local_a0 = &local_98;
                    /* try { // try from 00533c9c to 00533cb3 has its CatchHandler @ 00534258 */
    plVar11 = (long *)FUN_0054698c(&DAT_00d61be8,&local_a0,FUN_005459e0);
  }
  lVar20 = plVar1[2];
  if (((ulong)(plVar1[3] - lVar20 >> 3) <= (long)DAT_00d61bf0 - 1U) ||
     (lVar20 = *(long *)(lVar20 + ((long)DAT_00d61bf0 - 1U) * 8), lVar20 == 0)) {
    if (*(long *)(lVar9 + 0x28) == local_58) {
                    /* try { // try from 00534254 to 00534257 has its CatchHandler @ 00534258 */
      uVar13 = FUN_0053cd4c();
                    /* catch() { ... } // from try @ 00533c9c with catch @ 00534258
                       catch() { ... } // from try @ 00534254 with catch @ 00534258 */
      plVar1 = local_b0 + 1;
      do {
        lVar20 = *plVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar20 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      plVar11 = local_b0;
      if (lVar20 == 0) {
        plVar11 = (long *)(**(code **)(*local_b0 + 0x10))();
      }
      if (*(long *)(lVar9 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00d0fa5c(uVar13);
      }
    }
    goto LAB_0053429c;
  }
  plVar1 = local_b0 + 1;
  do {
    lVar19 = *plVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar19 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (lVar19 == 0) {
    (**(code **)(*local_b0 + 0x10))();
  }
  switch(param_7) {
  case 0x25:
    FUN_00534494(param_1,&local_a8,param_3,param_5,lVar20);
    plVar11 = local_a8;
    break;
  default:
switchD_00533d24_caseD_26:
    uVar16 = *param_5;
    goto LAB_0053417c;
  case 0x41:
  case 0x61:
    lVar19 = (**(code **)param_1[2])(param_1 + 2);
    lVar20 = FUN_00527328(&local_a8,param_3,lVar19,lVar19 + 0x150,lVar20,param_5,0);
    plVar11 = local_a8;
    if (lVar20 - lVar19 < 0x150) {
      lVar20 = (lVar20 - lVar19 >> 3) * -0x5555555555555555;
      auVar6 = SEXT816(lVar20) * SEXT816(0x4924924924924925);
      param_6[6] = (int)lVar20 + ((int)(auVar6._8_8_ >> 1) - (auVar6._12_4_ >> 0x1f)) * -7;
    }
    break;
  case 0x42:
  case 0x62:
  case 0x68:
    lVar19 = (**(code **)(param_1[2] + 8))(param_1 + 2);
    lVar20 = FUN_00527328(&local_a8,param_3,lVar19,lVar19 + 0x240,lVar20,param_5,0);
    plVar11 = local_a8;
    if (lVar20 - lVar19 < 0x240) {
      lVar20 = (lVar20 - lVar19 >> 3) * -0x5555555555555555;
      param_6[4] = (int)lVar20 +
                   ((int)((ulong)(lVar20 / 6 + (lVar20 >> 0x3f)) >> 1) -
                   (SUB164(SEXT816(lVar20) * SEXT816(0x2aaaaaaaaaaaaaab),0xc) >> 0x1f)) * -0xc;
    }
    break;
  case 0x44:
    puVar18 = (undefined8 *)&DAT_001f8a48;
    goto LAB_00534060;
  case 0x46:
    puVar18 = (undefined8 *)&DAT_001f8ac8;
    goto LAB_00534060;
  case 0x48:
    iVar10 = FUN_00534694(&local_a8,param_3,param_5,lVar20,2);
    uVar16 = *param_5;
    if (iVar10 < 0x18) {
LAB_00534000:
      if ((uVar16 >> 2 & 1) == 0) {
        param_6[2] = iVar10;
        plVar11 = local_a8;
        break;
      }
    }
    goto LAB_0053417c;
  case 0x49:
    iVar10 = FUN_00534694(&local_a8,param_3,param_5,lVar20,2);
    uVar16 = *param_5;
    if (iVar10 - 1U < 0xc) goto LAB_00534000;
LAB_0053417c:
    *param_5 = uVar16 | 4;
    plVar11 = local_a8;
    break;
  case 0x4d:
    iVar10 = FUN_00534694(&local_a8,param_3,param_5,lVar20,2);
    uVar16 = *param_5;
    if ((0x3b < iVar10) || ((uVar16 >> 2 & 1) != 0)) goto LAB_0053417c;
    param_6[1] = iVar10;
    plVar11 = local_a8;
    break;
  case 0x52:
    puVar15 = (undefined4 *)((long)&local_80 + 4);
    local_80 = CONCAT44(local_80._4_4_,0x4d);
    pcStack_88 = _UNK_001f7c98;
    local_90 = _DAT_001f7c90;
    goto LAB_00534074;
  case 0x53:
    iVar10 = FUN_00534694(&local_a8,param_3,param_5,lVar20,2);
    uVar16 = *param_5;
    if ((0x3c < iVar10) || ((uVar16 >> 2 & 1) != 0)) goto LAB_0053417c;
    *param_6 = iVar10;
    plVar11 = local_a8;
    break;
  case 0x54:
    puVar18 = (undefined8 *)&DAT_001f89e8;
LAB_00534060:
    pcStack_88 = (code *)puVar18[1];
    local_90 = (undefined8 *)*puVar18;
    local_80 = puVar18[2];
    puVar15 = &uStack_70;
    uStack_78 = (undefined4)puVar18[3];
    local_74 = (undefined4)((ulong)puVar18[3] >> 0x20);
LAB_00534074:
    ppuVar14 = &local_90;
LAB_00534078:
    local_a8 = (long *)FUN_00533050(param_1,local_a8,param_3,param_4,param_5,param_6,ppuVar14,
                                    puVar15);
    plVar11 = local_a8;
    break;
  case 0x58:
    pcVar17 = *(code **)(param_1[2] + 0x30);
    goto LAB_00533f14;
  case 0x59:
    iVar10 = FUN_00534694(&local_a8,param_3,param_5,lVar20,4);
    plVar11 = local_a8;
    if (((byte)*param_5 >> 2 & 1) == 0) {
      param_6[5] = iVar10 + -0x76c;
    }
    break;
  case 99:
    pcVar17 = *(code **)(param_1[2] + 0x18);
LAB_00533f14:
    ppuVar12 = (undefined8 **)(*pcVar17)();
    puVar18 = ppuVar12[1];
    ppuVar14 = (undefined8 **)*ppuVar12;
    if (-1 < (char)*(byte *)((long)ppuVar12 + 0x17)) {
      puVar18 = (undefined8 *)(ulong)*(byte *)((long)ppuVar12 + 0x17);
      ppuVar14 = ppuVar12;
    }
    puVar15 = (undefined4 *)((long)ppuVar14 + (long)puVar18 * 4);
    goto LAB_00534078;
  case 100:
  case 0x65:
    iVar10 = FUN_00534694(&local_a8,param_3,param_5,lVar20,2);
    uVar16 = *param_5;
    if ((0x1e < iVar10 - 1U) || ((uVar16 >> 2 & 1) != 0)) goto LAB_0053417c;
    param_6[3] = iVar10;
    plVar11 = local_a8;
    break;
  case 0x6a:
    iVar10 = FUN_00534694(&local_a8,param_3,param_5,lVar20,3);
    uVar16 = *param_5;
    if ((0x16d < iVar10) || ((uVar16 >> 2 & 1) != 0)) goto LAB_0053417c;
    param_6[7] = iVar10;
    plVar11 = local_a8;
    break;
  case 0x6d:
    iVar10 = FUN_00534694(&local_a8,param_3,param_5,lVar20,2);
    uVar16 = *param_5;
    if ((0xb < iVar10 - 1U) || ((uVar16 >> 2 & 1) != 0)) goto LAB_0053417c;
    param_6[4] = iVar10 - 1U;
    plVar11 = local_a8;
    break;
  case 0x6e:
  case 0x74:
    FUN_005342a0(param_1,&local_a8,param_3,param_5,lVar20);
    plVar11 = local_a8;
    break;
  case 0x70:
    lVar19 = (**(code **)(param_1[2] + 0x10))(param_1 + 2);
    uVar4 = *(ulong *)(lVar19 + 8);
    if (-1 < (char)*(byte *)(lVar19 + 0x17)) {
      uVar4 = (ulong)*(byte *)(lVar19 + 0x17);
    }
    uVar5 = *(ulong *)(lVar19 + 0x20);
    if (-1 < (char)*(byte *)(lVar19 + 0x2f)) {
      uVar5 = (ulong)*(byte *)(lVar19 + 0x2f);
    }
    if (uVar4 + uVar5 == 0) goto switchD_00533d24_caseD_26;
    lVar20 = FUN_00527328(&local_a8,param_3,lVar19,lVar19 + 0x30,lVar20,param_5,0);
    iVar10 = param_6[2];
    plVar11 = local_a8;
    if ((lVar20 == lVar19) && (iVar10 == 0xc)) {
      param_6[2] = 0;
    }
    else if ((lVar20 - lVar19 == 0x18) && (iVar10 < 0xc)) {
      param_6[2] = iVar10 + 0xc;
    }
    break;
  case 0x72:
    puVar15 = auStack_64;
    pcStack_88 = _UNK_001f7c6c;
    local_90 = _DAT_001f7c64;
    uStack_78 = _UNK_001f7c7c;
    local_80 = _DAT_001f7c74;
    uStack_6c = _UNK_001f7c88;
    local_74 = _DAT_001f7c80;
    uStack_70 = _UNK_001f7c84;
    goto LAB_00534074;
  case 0x77:
    iVar10 = FUN_00534694(&local_a8,param_3,param_5,lVar20,1);
    uVar16 = *param_5;
    if ((6 < iVar10) || ((uVar16 >> 2 & 1) != 0)) goto LAB_0053417c;
    param_6[6] = iVar10;
    plVar11 = local_a8;
    break;
  case 0x78:
    plVar11 = (long *)(**(code **)(*param_1 + 0x28))
                                (param_1,local_a8,param_3,param_4,param_5,param_6);
    break;
  case 0x79:
    iVar10 = FUN_00534694(&local_a8,param_3,param_5,lVar20,4);
    plVar11 = local_a8;
    if (((byte)*param_5 >> 2 & 1) == 0) {
      iVar2 = iVar10 + 0x76c;
      if (99 < iVar10) {
        iVar2 = iVar10;
      }
      iVar3 = iVar10 + 2000;
      if (0x44 < iVar10) {
        iVar3 = iVar2;
      }
      param_6[5] = iVar3 + -0x76c;
    }
  }
  if (*(long *)(lVar9 + 0x28) == local_58) {
    return;
  }
LAB_0053429c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar11);
}


// ===== 005342a0  FUN_005342a0 =====

void FUN_005342a0(undefined8 param_1,long *param_2,long *param_3,uint *param_4,long *param_5)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  
  plVar5 = (long *)*param_2;
  if (plVar5 != (long *)0x0) goto LAB_005342e0;
LAB_00534334:
  bVar1 = true;
  plVar5 = param_3;
  bVar2 = true;
  if (param_3 == (long *)0x0) goto LAB_0053432c;
LAB_0053433c:
  if ((int *)plVar5[3] == (int *)plVar5[4]) {
    iVar4 = (**(code **)(*plVar5 + 0x48))(plVar5);
  }
  else {
    iVar4 = *(int *)plVar5[3];
  }
  param_3 = (long *)0x0;
  if (iVar4 != -1) {
    param_3 = plVar5;
  }
  if (bVar1 != (iVar4 == -1)) {
    do {
      plVar5 = (long *)*param_2;
      if ((undefined4 *)plVar5[3] == (undefined4 *)plVar5[4]) {
        uVar3 = (**(code **)(*plVar5 + 0x48))();
      }
      else {
        uVar3 = *(undefined4 *)plVar5[3];
      }
      uVar6 = (**(code **)(*param_5 + 0x18))(param_5,1,uVar3);
      if ((uVar6 & 1) == 0) break;
      plVar5 = (long *)*param_2;
      if (plVar5[3] == plVar5[4]) {
        (**(code **)(*plVar5 + 0x50))();
        plVar5 = (long *)*param_2;
      }
      else {
        plVar5[3] = plVar5[3] + 4;
        plVar5 = (long *)*param_2;
      }
      if (plVar5 == (long *)0x0) goto LAB_00534334;
LAB_005342e0:
      if ((int *)plVar5[3] == (int *)plVar5[4]) {
        iVar4 = (**(code **)(*plVar5 + 0x48))();
        if (iVar4 != -1) goto LAB_005342f8;
LAB_00534320:
        bVar1 = true;
        *param_2 = 0;
      }
      else {
        if (*(int *)plVar5[3] == -1) goto LAB_00534320;
LAB_005342f8:
        bVar1 = *param_2 == 0;
      }
      plVar5 = param_3;
      bVar2 = bVar1;
      if (param_3 != (long *)0x0) goto LAB_0053433c;
LAB_0053432c:
      if (bVar2) break;
    } while( true );
  }
  plVar5 = (long *)*param_2;
  if (plVar5 != (long *)0x0) {
    if ((int *)plVar5[3] == (int *)plVar5[4]) {
      iVar4 = (**(code **)(*plVar5 + 0x48))();
    }
    else {
      iVar4 = *(int *)plVar5[3];
    }
    if (iVar4 != -1) {
      bVar2 = *param_2 == 0;
      goto joined_r0x00534414;
    }
    *param_2 = 0;
  }
  bVar2 = true;
joined_r0x00534414:
  if (param_3 == (long *)0x0) {
    if (!bVar2) {
      return;
    }
  }
  else {
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar4 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar4 = *(int *)param_3[3];
    }
    if (bVar2 != (iVar4 == -1)) {
      return;
    }
  }
  *param_4 = *param_4 | 2;
  return;
}


// ===== 00534494  FUN_00534494 =====

void FUN_00534494(undefined8 param_1,long *param_2,long *param_3,uint *param_4,long *param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  
  plVar6 = (long *)*param_2;
  if (plVar6 == (long *)0x0) {
joined_r0x005344f8:
    bVar2 = true;
    bVar1 = true;
    if (param_3 != (long *)0x0) goto LAB_005344fc;
LAB_005344e8:
    if (bVar2) goto LAB_00534570;
    plVar6 = (long *)0x0;
  }
  else {
    if ((int *)plVar6[3] == (int *)plVar6[4]) {
      iVar5 = (**(code **)(*plVar6 + 0x48))();
    }
    else {
      iVar5 = *(int *)plVar6[3];
    }
    if (iVar5 == -1) {
      *param_2 = 0;
      goto joined_r0x005344f8;
    }
    bVar1 = *param_2 == 0;
    bVar2 = bVar1;
    if (param_3 == (long *)0x0) goto LAB_005344e8;
LAB_005344fc:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar5 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar5 = *(int *)param_3[3];
    }
    plVar6 = (long *)0x0;
    if (iVar5 != -1) {
      plVar6 = param_3;
    }
    if (bVar1 == (iVar5 == -1)) {
LAB_00534570:
      uVar8 = 6;
      goto LAB_00534668;
    }
  }
  plVar7 = (long *)*param_2;
  if ((undefined4 *)plVar7[3] == (undefined4 *)plVar7[4]) {
    uVar4 = (**(code **)(*plVar7 + 0x48))();
  }
  else {
    uVar4 = *(undefined4 *)plVar7[3];
  }
  cVar3 = (**(code **)(*param_5 + 0x68))(param_5,uVar4,0);
  if (cVar3 != '%') {
    uVar8 = 4;
    goto LAB_00534668;
  }
  plVar7 = (long *)*param_2;
  if (plVar7[3] == plVar7[4]) {
    (**(code **)(*plVar7 + 0x50))();
    plVar7 = (long *)*param_2;
    if (plVar7 != (long *)0x0) goto LAB_005345e0;
    bVar2 = true;
    if (plVar6 == (long *)0x0) goto LAB_0053463c;
LAB_00534608:
    if ((int *)plVar6[3] == (int *)plVar6[4]) {
      iVar5 = (**(code **)(*plVar6 + 0x48))(plVar6);
    }
    else {
      iVar5 = *(int *)plVar6[3];
    }
    if (bVar2 != (iVar5 == -1)) {
      return;
    }
  }
  else {
    plVar7[3] = plVar7[3] + 4;
LAB_005345e0:
    if ((int *)plVar7[3] == (int *)plVar7[4]) {
      iVar5 = (**(code **)(*plVar7 + 0x48))();
      if (iVar5 != -1) goto LAB_005345f8;
LAB_00534630:
      bVar2 = true;
      *param_2 = 0;
    }
    else {
      if (*(int *)plVar7[3] == -1) goto LAB_00534630;
LAB_005345f8:
      bVar2 = *param_2 == 0;
    }
    if (plVar6 != (long *)0x0) goto LAB_00534608;
LAB_0053463c:
    if (!bVar2) {
      return;
    }
  }
  uVar8 = 2;
LAB_00534668:
  *param_4 = *param_4 | uVar8;
  return;
}


// ===== 00534694  FUN_00534694 =====

int FUN_00534694(long *param_1,long *param_2,uint *param_3,long *param_4,int param_5)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
  plVar7 = (long *)*param_1;
  if (plVar7 == (long *)0x0) {
joined_r0x005346f8:
    bVar1 = true;
    if (param_2 != (long *)0x0) goto LAB_005346fc;
LAB_00534730:
    if (bVar1 != false) goto LAB_00534778;
    plVar7 = (long *)0x0;
  }
  else {
    if ((int *)plVar7[3] == (int *)plVar7[4]) {
      iVar4 = (**(code **)(*plVar7 + 0x48))();
    }
    else {
      iVar4 = *(int *)plVar7[3];
    }
    if (iVar4 == -1) {
      *param_1 = 0;
      goto joined_r0x005346f8;
    }
    bVar1 = *param_1 == 0;
    if (param_2 == (long *)0x0) goto LAB_00534730;
LAB_005346fc:
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar4 = *(int *)param_2[3];
    }
    plVar7 = (long *)0x0;
    if (iVar4 != -1) {
      plVar7 = param_2;
    }
    if (bVar1 == (iVar4 == -1)) {
LAB_00534778:
      iVar4 = 0;
      uVar3 = 6;
      goto LAB_005349ec;
    }
  }
  plVar8 = (long *)*param_1;
  if ((undefined4 *)plVar8[3] == (undefined4 *)plVar8[4]) {
    uVar5 = (**(code **)(*plVar8 + 0x48))();
  }
  else {
    uVar5 = *(undefined4 *)plVar8[3];
  }
  uVar9 = (**(code **)(*param_4 + 0x18))(param_4,0x40,uVar5);
  if ((uVar9 & 1) != 0) {
    uVar3 = (**(code **)(*param_4 + 0x68))(param_4,uVar5,0);
    plVar8 = (long *)*param_1;
    uVar3 = uVar3 & 0xff;
    if (plVar8[3] == plVar8[4]) {
      (**(code **)(*plVar8 + 0x50))(plVar8);
    }
    else {
      plVar8[3] = plVar8[3] + 4;
    }
    do {
      plVar8 = (long *)*param_1;
      if (plVar8 == (long *)0x0) {
joined_r0x00534868:
        bVar1 = true;
        if (plVar7 != (long *)0x0) goto LAB_0053486c;
LAB_005348a4:
        bVar2 = true;
        plVar8 = plVar7;
      }
      else {
        if ((int *)plVar8[3] == (int *)plVar8[4]) {
          iVar4 = (**(code **)(*plVar8 + 0x48))();
        }
        else {
          iVar4 = *(int *)plVar8[3];
        }
        if (iVar4 == -1) {
          *param_1 = 0;
          goto joined_r0x00534868;
        }
        bVar1 = *param_1 == 0;
        if (plVar7 == (long *)0x0) goto LAB_005348a4;
LAB_0053486c:
        if ((int *)plVar7[3] == (int *)plVar7[4]) {
          iVar4 = (**(code **)(*plVar7 + 0x48))(plVar7);
        }
        else {
          iVar4 = *(int *)plVar7[3];
        }
        bVar2 = iVar4 == -1;
        plVar8 = (long *)0x0;
        if (!bVar2) {
          plVar8 = plVar7;
        }
      }
      iVar4 = uVar3 - 0x30;
      plVar7 = (long *)*param_1;
      if ((bVar1 == bVar2) || (param_5 < 2)) {
        if (plVar7 == (long *)0x0) {
joined_r0x00534988:
          bVar1 = true;
          if (plVar8 != (long *)0x0) goto LAB_0053498c;
LAB_005349c0:
          if (!bVar1) {
            return iVar4;
          }
        }
        else {
          if ((int *)plVar7[3] == (int *)plVar7[4]) {
            iVar6 = (**(code **)(*plVar7 + 0x48))();
          }
          else {
            iVar6 = *(int *)plVar7[3];
          }
          if (iVar6 == -1) {
            *param_1 = 0;
            goto joined_r0x00534988;
          }
          bVar1 = *param_1 == 0;
          if (plVar8 == (long *)0x0) goto LAB_005349c0;
LAB_0053498c:
          if ((int *)plVar8[3] == (int *)plVar8[4]) {
            iVar6 = (**(code **)(*plVar8 + 0x48))(plVar8);
          }
          else {
            iVar6 = *(int *)plVar8[3];
          }
          if (bVar1 != (iVar6 == -1)) {
            return iVar4;
          }
        }
        uVar3 = 2;
        goto LAB_005349ec;
      }
      if ((undefined4 *)plVar7[3] == (undefined4 *)plVar7[4]) {
        uVar5 = (**(code **)(*plVar7 + 0x48))();
      }
      else {
        uVar5 = *(undefined4 *)plVar7[3];
      }
      uVar9 = (**(code **)(*param_4 + 0x18))(param_4,0x40,uVar5);
      if ((uVar9 & 1) == 0) {
        return iVar4;
      }
      uVar3 = (**(code **)(*param_4 + 0x68))(param_4,uVar5,0);
      plVar7 = (long *)*param_1;
      if (plVar7[3] == plVar7[4]) {
        (**(code **)(*plVar7 + 0x50))(plVar7);
      }
      else {
        plVar7[3] = plVar7[3] + 4;
      }
      param_5 = param_5 + -1;
      uVar3 = iVar4 * 10 + (uVar3 & 0xff);
      plVar7 = plVar8;
    } while( true );
  }
  iVar4 = 0;
  uVar3 = 4;
LAB_005349ec:
  *param_3 = *param_3 | uVar3;
  return iVar4;
}


// ===== 00534a14  FUN_00534a14 =====

long * FUN_00534a14(long *param_1,long *param_2,undefined8 param_3,undefined4 param_4,
                   undefined8 param_5,undefined1 *param_6,undefined1 *param_7)

{
  bool bVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined1 *puVar9;
  long lVar10;
  long *plVar11;
  undefined1 *puVar12;
  long *plVar13;
  uint uVar14;
  long *local_98;
  undefined8 *local_90;
  code *pcStack_88;
  undefined8 local_80;
  undefined8 ***local_78;
  undefined8 **local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_00520ce8(&local_98,param_3);
  plVar13 = local_98;
  local_80 = 0;
  local_90 = &DAT_00d61bf8;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61bf8 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 00534a9c to 00534ab3 has its CatchHandler @ 00534cfc */
    FUN_0054698c(&DAT_00d61bf8,&local_78,FUN_005459e0);
  }
  lVar10 = plVar13[2];
  if (((long)DAT_00d61c00 - 1U < (ulong)(plVar13[3] - lVar10 >> 3)) &&
     (plVar13 = *(long **)(lVar10 + ((long)DAT_00d61c00 - 1U) * 8), plVar13 != (long *)0x0)) {
    plVar11 = local_98 + 1;
    do {
      lVar10 = *plVar11;
      cVar3 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar1) {
        *plVar11 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_98 + 0x10))();
    }
LAB_00534b20:
    do {
      plVar11 = param_2;
      if (param_6 == param_7) goto LAB_00534ca4;
      cVar3 = (**(code **)(*plVar13 + 0x48))(plVar13,*param_6,0);
      if (cVar3 != '%') {
        if (param_2 != (long *)0x0) {
          puVar12 = (undefined1 *)param_2[6];
          uVar8 = *param_6;
          if (puVar12 != (undefined1 *)param_2[7]) {
            param_6 = param_6 + 1;
            param_2[6] = (long)(puVar12 + 1);
            *puVar12 = uVar8;
            goto LAB_00534b20;
          }
          iVar6 = (**(code **)(*param_2 + 0x68))(param_2);
          plVar11 = (long *)0x0;
          if (iVar6 != -1) {
            plVar11 = param_2;
          }
        }
        param_6 = param_6 + 1;
        param_2 = plVar11;
        goto LAB_00534b20;
      }
      puVar12 = param_6 + 1;
      if (puVar12 == param_7) {
        if (param_2 != (long *)0x0) {
          puVar9 = (undefined1 *)param_2[6];
          uVar8 = *param_6;
          if (puVar9 == (undefined1 *)param_2[7]) {
LAB_00534c8c:
            iVar6 = (**(code **)(*param_2 + 0x68))(param_2);
            plVar11 = (long *)0x0;
            if (iVar6 != -1) {
              plVar11 = param_2;
            }
          }
          else {
LAB_00534c30:
            param_2[6] = (long)(puVar9 + 1);
            *puVar9 = uVar8;
          }
        }
        goto LAB_00534ca4;
      }
      uVar4 = (**(code **)(*plVar13 + 0x48))(plVar13,*puVar12,0);
      if (((uVar4 & 0xff) == 0x4f) || ((uVar4 & 0xff) == 0x45)) {
        puVar9 = param_6 + 2;
        if (puVar9 == param_7) {
          if (param_2 == (long *)0x0) goto LAB_00534ca4;
          puVar9 = (undefined1 *)param_2[6];
          uVar8 = *param_6;
          if (puVar9 == (undefined1 *)param_2[7]) {
            iVar6 = (**(code **)(*param_2 + 0x68))(param_2);
            if (iVar6 == -1) {
              plVar11 = (long *)0x0;
              goto LAB_00534ca4;
            }
          }
          else {
            param_2[6] = (long)(puVar9 + 1);
            *puVar9 = uVar8;
          }
          puVar9 = (undefined1 *)param_2[6];
          uVar8 = *puVar12;
          if (puVar9 != (undefined1 *)param_2[7]) goto LAB_00534c30;
          goto LAB_00534c8c;
        }
        uVar5 = (**(code **)(*plVar13 + 0x48))(plVar13,*puVar9,0);
        puVar12 = puVar9;
        uVar14 = uVar4;
        uVar4 = uVar5;
      }
      else {
        uVar14 = 0;
      }
      param_2 = (long *)(**(code **)(*param_1 + 0x18))
                                  (param_1,param_2,param_3,param_4,param_5,uVar4,uVar14);
      param_6 = puVar12 + 1;
    } while( true );
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00534cf8 to 00534cfb has its CatchHandler @ 00534cfc */
    uVar7 = FUN_0053cd4c();
                    /* catch() { ... } // from try @ 00534a9c with catch @ 00534cfc
                       catch() { ... } // from try @ 00534cf8 with catch @ 00534cfc */
    plVar13 = local_98 + 1;
    do {
      lVar10 = *plVar13;
      cVar3 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar1) {
        *plVar13 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_98 + 0x10))();
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00d0fa5c(uVar7);
    }
  }
LAB_00534d44:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00534ca4:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return plVar11;
  }
  goto LAB_00534d44;
}


// ===== 00534d48  FUN_00534d48 =====

long * FUN_00534d48(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,tm *param_5,
                   char param_6,char param_7)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  size_t sVar5;
  long *plVar6;
  char *pcVar7;
  char local_a0;
  char local_9f;
  char local_9e;
  undefined1 local_9d;
  char local_9c [100];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_a0 = '%';
  local_9d = 0;
  local_9f = param_6;
  local_9e = param_7;
  if (param_7 != '\0') {
    local_9f = param_7;
    local_9e = param_6;
  }
  sVar5 = strftime_l(local_9c,100,&local_a0,param_5,*(__locale_t *)(param_1 + 0x10));
  if (sVar5 != 0) {
    pcVar7 = local_9c;
    plVar6 = param_2;
    do {
      param_2 = plVar6;
      if (plVar6 != (long *)0x0) {
        pcVar1 = (char *)plVar6[6];
        cVar2 = *pcVar7;
        if (pcVar1 == (char *)plVar6[7]) {
          iVar4 = (**(code **)(*plVar6 + 0x68))(plVar6);
          param_2 = (long *)0x0;
          if (iVar4 != -1) {
            param_2 = plVar6;
          }
        }
        else {
          plVar6[6] = (long)(pcVar1 + 1);
          *pcVar1 = cVar2;
        }
      }
      pcVar7 = pcVar7 + 1;
      sVar5 = sVar5 - 1;
      plVar6 = param_2;
    } while (sVar5 != 0);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}


// ===== 00534e2c  FUN_00534e2c =====

long * FUN_00534e2c(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *local_1e0;
  long local_1d8 [50];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_1e0 = &local_48;
  FUN_00534f08(param_1 + 0x10,local_1d8,&local_1e0,param_5,param_6,param_7);
  plVar3 = local_1e0;
  if (local_1d8 != local_1e0) {
    plVar6 = local_1d8;
    plVar5 = param_2;
    do {
      param_2 = plVar5;
      if (plVar5 != (long *)0x0) {
        piVar1 = (int *)plVar5[6];
        iVar4 = (int)*plVar6;
        if (piVar1 == (int *)plVar5[7]) {
          iVar4 = (**(code **)(*plVar5 + 0x68))(plVar5);
        }
        else {
          *piVar1 = iVar4;
          plVar5[6] = (long)(piVar1 + 1);
        }
        param_2 = (long *)0x0;
        if (iVar4 != -1) {
          param_2 = plVar5;
        }
      }
      plVar6 = (long *)((long)plVar6 + 4);
      plVar5 = param_2;
    } while (plVar6 != plVar3);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}


// ===== 00534f08  FUN_00534f08 =====

void FUN_00534f08(undefined8 *param_1,wchar_t *param_2,long *param_3,tm *param_4,undefined1 param_5,
                 char param_6)

{
  long lVar1;
  undefined8 uVar2;
  __locale_t __dataset;
  size_t sVar3;
  long lVar4;
  char *local_c8;
  mbstate_t mStack_c0;
  undefined8 local_b8;
  char acStack_ac [100];
  long local_48;
  
  uVar2 = local_b8;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_b8._0_2_ = CONCAT11(param_5,0x25);
  local_b8._0_3_ = CONCAT12(param_6,(undefined2)local_b8);
  local_b8._4_4_ = SUB84(uVar2,4);
  local_b8._0_4_ = (uint)(uint3)local_b8;
  uVar2 = local_b8;
  if (param_6 != '\0') {
    local_b8._0_2_ = CONCAT11(param_6,0x25);
    local_b8._3_5_ = SUB85(uVar2,3);
    local_b8._0_3_ = CONCAT12(param_5,(undefined2)local_b8);
  }
  strftime_l(acStack_ac,100,(char *)&local_b8,param_4,(__locale_t)*param_1);
  lVar4 = *param_3;
  mStack_c0.__count = 0;
  mStack_c0.__value = (_union_27)0x0;
  local_c8 = acStack_ac;
  __dataset = uselocale((__locale_t)*param_1);
                    /* try { // try from 00534f94 to 00534fa7 has its CatchHandler @ 00535010 */
  local_b8 = __dataset;
  sVar3 = mbsrtowcs(param_2,&local_c8,lVar4 - (long)param_2 >> 2,&mStack_c0);
  if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 00534fb0 to 00534fb7 has its CatchHandler @ 0053500c */
    uselocale(__dataset);
  }
  if (sVar3 == 0xffffffffffffffff) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      FUN_00536bb4("locale not supported");
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00534fb0 with catch @ 0053500c
                        */
      FUN_004e7ed8();
    }
  }
  else {
    *param_3 = (long)(param_2 + sVar3);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00535038  FUN_00535038 =====

undefined8 FUN_00535038(void)

{
  return 0xff;
}


// ===== 00535040  FUN_00535040 =====

undefined8 FUN_00535040(void)

{
  return 0xff;
}


// ===== 00535048  FUN_00535048 =====

void FUN_00535048(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 00535054  FUN_00535054 =====

void FUN_00535054(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 00535060  FUN_00535060 =====

void FUN_00535060(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 0053506c  FUN_0053506c =====

void FUN_0053506c(undefined2 *param_1)

{
  *(undefined1 *)((long)param_1 + 0x17) = 1;
  *param_1 = 0x2d;
  return;
}


// ===== 00535080  FUN_00535080 =====

undefined8 FUN_00535080(void)

{
  return 0;
}


// ===== 00535088  FUN_00535088 =====

undefined8 FUN_00535088(void)

{
  return 0x4000302;
}


// ===== 00535094  FUN_00535094 =====

undefined8 FUN_00535094(void)

{
  return 0x4000302;
}


// ===== 005350a0  FUN_005350a0 =====

undefined8 FUN_005350a0(void)

{
  return 0xff;
}


// ===== 005350a8  FUN_005350a8 =====

undefined8 FUN_005350a8(void)

{
  return 0xff;
}


// ===== 005350b0  FUN_005350b0 =====

void FUN_005350b0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 005350bc  FUN_005350bc =====

void FUN_005350bc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 005350c8  FUN_005350c8 =====

void FUN_005350c8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 005350d4  FUN_005350d4 =====

void FUN_005350d4(undefined2 *param_1)

{
  *(undefined1 *)((long)param_1 + 0x17) = 1;
  *param_1 = 0x2d;
  return;
}


// ===== 005350e8  FUN_005350e8 =====

undefined8 FUN_005350e8(void)

{
  return 0;
}


// ===== 005350f0  FUN_005350f0 =====

undefined8 FUN_005350f0(void)

{
  return 0x4000302;
}


// ===== 005350fc  FUN_005350fc =====

undefined8 FUN_005350fc(void)

{
  return 0x4000302;
}


// ===== 00535108  FUN_00535108 =====

undefined8 FUN_00535108(void)

{
  return 0xffffffff;
}


// ===== 00535110  FUN_00535110 =====

undefined8 FUN_00535110(void)

{
  return 0xffffffff;
}


// ===== 00535118  FUN_00535118 =====

void FUN_00535118(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 00535124  FUN_00535124 =====

void FUN_00535124(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 00535130  FUN_00535130 =====

void FUN_00535130(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 0053513c  FUN_0053513c =====

void FUN_0053513c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_001f5518;
  *(undefined1 *)((long)param_1 + 0x17) = 1;
  *param_1 = uVar1;
  return;
}


// ===== 00535154  FUN_00535154 =====

undefined8 FUN_00535154(void)

{
  return 0;
}


// ===== 0053515c  FUN_0053515c =====

undefined8 FUN_0053515c(void)

{
  return 0x4000302;
}


// ===== 00535168  FUN_00535168 =====

undefined8 FUN_00535168(void)

{
  return 0x4000302;
}


// ===== 00535174  FUN_00535174 =====

undefined8 FUN_00535174(void)

{
  return 0xffffffff;
}


// ===== 0053517c  FUN_0053517c =====

undefined8 FUN_0053517c(void)

{
  return 0xffffffff;
}


// ===== 00535184  FUN_00535184 =====

void FUN_00535184(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 00535190  FUN_00535190 =====

void FUN_00535190(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 0053519c  FUN_0053519c =====

void FUN_0053519c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 005351a8  FUN_005351a8 =====

void FUN_005351a8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_001f5518;
  *(undefined1 *)((long)param_1 + 0x17) = 1;
  *param_1 = uVar1;
  return;
}


// ===== 005351c0  FUN_005351c0 =====

undefined8 FUN_005351c0(void)

{
  return 0;
}


// ===== 005351c8  FUN_005351c8 =====

undefined8 FUN_005351c8(void)

{
  return 0x4000302;
}


// ===== 005351d4  FUN_005351d4 =====

undefined8 FUN_005351d4(void)

{
  return 0x4000302;
}


// ===== 005351e0  FUN_005351e0 =====

long * FUN_005351e0(undefined8 param_1,long *param_2,long *param_3,uint param_4,long param_5,
                   uint *param_6,undefined8 param_7)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 **__ptr;
  undefined8 uVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  long lVar11;
  undefined1 *puVar12;
  char *pcVar13;
  long *plVar14;
  char local_17c [4];
  long *local_178;
  char *local_170;
  char *local_168;
  code *local_160;
  long *local_158;
  undefined8 *local_150;
  code *pcStack_148;
  undefined8 local_140;
  undefined8 local_e8;
  char local_e0;
  char local_df;
  undefined1 auStack_de [6];
  undefined7 local_d8;
  undefined4 uStack_d1;
  char local_cc [100];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_168 = local_cc;
  local_160 = FUN_00535690;
                    /* try { // try from 00535234 to 0053523f has its CatchHandler @ 00535624 */
  local_158 = param_2;
  FUN_00520ce8(&local_178,param_5);
  plVar14 = local_178;
  local_140 = 0;
  local_150 = &DAT_00d61bf8;
  pcStack_148 = FUN_0053d0c8;
  if (DAT_00d61bf8 != -1) {
    local_e8 = &local_d8;
    local_d8 = SUB87(&local_150,0);
    uStack_d1._0_1_ = (char)((ulong)&local_150 >> 0x38);
                    /* try { // try from 0053527c to 00535293 has its CatchHandler @ 00535630 */
    FUN_0054698c(&DAT_00d61bf8,&local_e8,FUN_005459e0);
  }
  lVar11 = plVar14[2];
  if (((ulong)(plVar14[3] - lVar11 >> 3) <= (long)DAT_00d61c00 - 1U) ||
     (plVar14 = *(long **)(lVar11 + ((long)DAT_00d61c00 - 1U) * 8), plVar14 == (long *)0x0)) {
    if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_00535688;
                    /* try { // try from 005355d0 to 005355d3 has its CatchHandler @ 00535630 */
    FUN_0053cd4c();
LAB_005355d4:
    if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_00535688;
                    /* try { // try from 005355e4 to 005355ef has its CatchHandler @ 00535608 */
    FUN_00536bb4("money_get error");
LAB_005355f0:
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00535600 to 00535603 has its CatchHandler @ 00535604 */
      uVar8 = FUN_00546ac8();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00535600 with catch @ 00535604
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0053527c with catch @ 00535630
                       catch(type#1 @ 00000000) { ... } // from try @ 005355d0 with catch @ 00535630
                        */
      plVar14 = local_178 + 1;
      do {
        lVar11 = *plVar14;
        cVar1 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *plVar14 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*local_178 + 0x10))();
      }
      pcVar13 = local_168;
      local_168 = (char *)0x0;
      if (pcVar13 != (char *)0x0) {
                    /* try { // try from 0053566c to 0053566f has its CatchHandler @ 0053568c */
        (*local_160)();
      }
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00d0fa5c(uVar8);
      }
    }
    goto LAB_00535688;
  }
  local_17c[0] = '\0';
                    /* try { // try from 005352c4 to 005352f3 has its CatchHandler @ 0053562c */
  uVar7 = FUN_00535694(&local_158,param_3,param_4 & 1,&local_178,*(undefined4 *)(param_5 + 8),
                       param_6,local_17c,plVar14,&local_168,&local_170,&local_68);
  if ((uVar7 & 1) != 0) {
    local_d8 = (undefined7)s_0123456789_001d320c._0_8_;
    uStack_d1._0_1_ = SUB81(s_0123456789_001d320c._0_8_,7);
    uStack_d1 = CONCAT31(0x3938,(char)uStack_d1);
                    /* try { // try from 00535324 to 00535333 has its CatchHandler @ 0053561c */
    (**(code **)(*plVar14 + 0x40))(plVar14,&local_d8,(long)&uStack_d1 + 3,&local_e8);
    pcVar13 = local_168;
    pcVar3 = local_170;
    if (0x62 < (long)local_170 - (long)local_168) {
      __ptr = (undefined8 **)malloc(((long)local_170 - (long)local_168) + 2);
      ppuVar10 = __ptr;
      if (__ptr != (undefined8 **)0x0) goto joined_r0x0053535c;
      goto LAB_005355f0;
    }
    __ptr = (undefined8 **)0x0;
    ppuVar10 = &local_150;
joined_r0x0053535c:
    ppuVar9 = ppuVar10;
    if (local_17c[0] != '\0') {
      ppuVar9 = (undefined8 **)((long)ppuVar10 + 1);
      *(undefined1 *)ppuVar10 = 0x2d;
    }
    if (pcVar13 < pcVar3) {
      ppuVar10 = ppuVar9;
      do {
        cVar1 = *pcVar13;
        if ((char)local_e8 == cVar1) {
          lVar11 = 0;
LAB_00535448:
          puVar12 = (undefined1 *)((long)&local_e8 + lVar11);
        }
        else {
          if (local_e8._1_1_ == cVar1) {
            lVar11 = 1;
            goto LAB_00535448;
          }
          if (local_e8._2_1_ == cVar1) {
            lVar11 = 2;
            goto LAB_00535448;
          }
          if (local_e8._3_1_ == cVar1) {
            lVar11 = 3;
            goto LAB_00535448;
          }
          if (local_e8._4_1_ == cVar1) {
            lVar11 = 4;
            goto LAB_00535448;
          }
          if (local_e8._5_1_ == cVar1) {
            lVar11 = 5;
            goto LAB_00535448;
          }
          if (local_e8._6_1_ == cVar1) {
            lVar11 = 6;
            goto LAB_00535448;
          }
          if (local_e8._7_1_ == cVar1) {
            lVar11 = 7;
            goto LAB_00535448;
          }
          if (local_e0 == cVar1) {
            lVar11 = 8;
            goto LAB_00535448;
          }
          puVar12 = auStack_de;
          if (local_df == cVar1) {
            lVar11 = 9;
            goto LAB_00535448;
          }
        }
        pcVar13 = pcVar13 + 1;
        ppuVar9 = (undefined8 **)((long)ppuVar10 + 1);
        *(undefined1 *)ppuVar10 = puVar12[(long)&local_d8 - (long)&local_e8];
        ppuVar10 = ppuVar9;
      } while (pcVar13 < local_170);
    }
    *(undefined1 *)ppuVar9 = 0;
    iVar6 = sscanf((char *)&local_150,"%Lf",param_7);
    if (iVar6 != 1) goto LAB_005355d4;
    if (__ptr != (undefined8 **)0x0) {
      free(__ptr);
    }
  }
  if (local_158 == (long *)0x0) {
    bVar5 = true;
joined_r0x005354b8:
    if (param_3 != (long *)0x0) goto LAB_005354f8;
LAB_005355b8:
    if (bVar5 != false) goto LAB_00535508;
  }
  else {
    if (local_158[3] != local_158[4]) {
      bVar5 = false;
      goto joined_r0x005354b8;
    }
                    /* try { // try from 005354dc to 005354df has its CatchHandler @ 0053562c */
    iVar6 = (**(code **)(*local_158 + 0x48))();
    if (iVar6 != -1) {
      bVar5 = local_158 == (long *)0x0;
      goto joined_r0x005354b8;
    }
    bVar5 = true;
    local_158 = (long *)0x0;
    if (param_3 == (long *)0x0) goto LAB_005355b8;
LAB_005354f8:
    if (param_3[3] == param_3[4]) {
                    /* try { // try from 00535590 to 00535597 has its CatchHandler @ 0053562c */
      iVar6 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar5 == (iVar6 == -1)) goto LAB_00535508;
    }
    else if (bVar5 == false) {
LAB_00535508:
      *param_6 = *param_6 | 2;
    }
  }
  plVar4 = local_158;
  plVar14 = local_178 + 1;
  do {
    lVar11 = *plVar14;
    cVar1 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar5) {
      *plVar14 = lVar11 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar11 == 0) {
    (**(code **)(*local_178 + 0x10))();
  }
  pcVar13 = local_168;
  local_168 = (char *)0x0;
  if (pcVar13 != (char *)0x0) {
                    /* try { // try from 00535550 to 00535553 has its CatchHandler @ 00535620 */
    (*local_160)();
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return plVar4;
  }
LAB_00535688:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00535690  FUN_00535690 =====

void FUN_00535690(void)

{
  return;
}


// ===== 00535694  FUN_00535694 =====

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_00535694(long *param_1,long *param_2,uint param_3,undefined8 param_4,uint param_5,uint *param_6,
            undefined1 *param_7,long param_8,long *param_9,long *param_10,code *param_11)

{
  byte *******pppppppbVar1;
  byte ******ppppppbVar2;
  size_t sVar3;
  undefined1 *puVar4;
  long lVar5;
  bool bVar6;
  byte bVar7;
  code cVar8;
  undefined1 uVar9;
  char cVar10;
  int iVar11;
  long *plVar12;
  uint *puVar13;
  void *pvVar14;
  long *plVar15;
  undefined8 uVar16;
  byte *******pppppppbVar17;
  ulong uVar18;
  code *pcVar19;
  undefined8 *******pppppppuVar20;
  byte *******pppppppbVar21;
  byte *******pppppppbVar22;
  byte *******pppppppbVar23;
  uint *puVar24;
  uint *puVar25;
  ulong uVar26;
  uint *puVar27;
  ulong uVar28;
  byte ******ppppppbVar29;
  undefined4 uVar30;
  uint *puVar31;
  ulong uVar32;
  code *pcVar33;
  uint *puVar34;
  uint uVar35;
  byte *******local_2c0;
  code *local_298;
  int local_28c;
  undefined8 *******local_288;
  ulong local_280;
  undefined8 local_278;
  byte *******local_270;
  ulong local_268;
  ulong local_260;
  byte *******local_258;
  ulong local_250;
  ulong local_248;
  byte *******local_240;
  ulong local_238;
  undefined8 local_230;
  byte *******local_228;
  ulong local_220;
  undefined8 local_218;
  byte local_210 [4];
  byte local_20c [4];
  byte local_208 [8];
  uint local_200 [100];
  long local_70 [2];
  
  lVar5 = tpidr_el0;
  local_70[0] = *(long *)(lVar5 + 0x28);
  plVar12 = (long *)*param_1;
  if (plVar12 == (long *)0x0) {
    bVar6 = true;
joined_r0x00535714:
    if (param_2 != (long *)0x0) goto LAB_005356fc;
LAB_00535718:
    if (bVar6 != false) goto LAB_0053580c;
    param_2 = (long *)0x0;
  }
  else {
    if (plVar12[3] != plVar12[4]) {
      bVar6 = false;
      goto joined_r0x00535714;
    }
    iVar11 = (**(code **)(*plVar12 + 0x48))();
    if (iVar11 == -1) {
      bVar6 = true;
      *param_1 = 0;
      goto joined_r0x00535714;
    }
    bVar6 = *param_1 == 0;
    if (param_2 == (long *)0x0) goto LAB_00535718;
LAB_005356fc:
    if (param_2[3] == param_2[4]) {
      iVar11 = (**(code **)(*param_2 + 0x48))(param_2);
      plVar12 = (long *)0x0;
      if (iVar11 != -1) {
        plVar12 = param_2;
      }
      param_2 = plVar12;
      if (bVar6 == (iVar11 == -1)) goto LAB_0053580c;
    }
    else if (bVar6 == false) {
LAB_0053580c:
      uVar30 = 0;
      *param_6 = *param_6 | 4;
LAB_00536968:
      if (*(long *)(lVar5 + 0x28) == local_70[0]) {
        return uVar30;
      }
LAB_00536ba0:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  local_228 = (byte *******)0x0;
  local_220 = 0;
  local_218 = 0;
  local_240 = (byte *******)0x0;
  local_238 = 0;
  local_230 = 0;
  local_258 = (byte *******)0x0;
  local_250 = 0;
  local_248 = 0;
  local_270 = (byte *******)0x0;
  local_268 = 0;
  local_260 = 0;
  local_288 = (undefined8 *******)0x0;
  local_280 = 0;
  local_278 = 0;
                    /* try { // try from 0053579c to 005357cb has its CatchHandler @ 00536ab0 */
  FUN_005372b0(param_3 & 1,param_4,local_208,local_20c,local_210,&local_228,&local_240,&local_258,
               &local_270,&local_28c);
  puVar13 = local_200;
  uVar32 = 0;
  puVar27 = (uint *)local_70;
  pcVar33 = FUN_00535690;
  puVar31 = local_200;
  local_2c0 = (byte *******)0x0;
  local_298 = param_11;
  *param_10 = *param_9;
LAB_00535844:
  plVar12 = (long *)*param_1;
  if (plVar12 == (long *)0x0) {
    bVar6 = true;
joined_r0x00535878:
    if (param_2 != (long *)0x0) goto LAB_00535860;
LAB_0053587c:
    if (bVar6 != false) goto LAB_0053661c;
  }
  else {
    if (plVar12[3] != plVar12[4]) {
      bVar6 = false;
      goto joined_r0x00535878;
    }
                    /* try { // try from 0053588c to 005358bb has its CatchHandler @ 00536ad8 */
    iVar11 = (**(code **)(*plVar12 + 0x48))();
    if (iVar11 == -1) {
      bVar6 = true;
      *param_1 = 0;
      goto joined_r0x00535878;
    }
    bVar6 = *param_1 == 0;
    if (param_2 == (long *)0x0) goto LAB_0053587c;
LAB_00535860:
    if (param_2[3] == param_2[4]) {
      iVar11 = (**(code **)(*param_2 + 0x48))(param_2);
      plVar12 = (long *)0x0;
      if (iVar11 != -1) {
        plVar12 = param_2;
      }
      param_2 = plVar12;
      if (bVar6 == (iVar11 == -1)) goto LAB_0053661c;
    }
    else if (bVar6 == false) goto LAB_0053661c;
  }
  switch(local_208[uVar32]) {
  case 0:
    if (uVar32 != 3) {
      do {
        plVar12 = (long *)*param_1;
        bVar6 = true;
        if ((plVar12 == (long *)0x0) || (bVar6 = false, plVar12[3] != plVar12[4])) {
joined_r0x005364d4:
          if (param_2 != (long *)0x0) goto LAB_005364d8;
LAB_00536510:
          if (bVar6 != false) goto switchD_005358f4_default;
        }
        else {
                    /* try { // try from 005364f4 to 00536563 has its CatchHandler @ 00536acc */
          iVar11 = (**(code **)(*plVar12 + 0x48))();
          if (iVar11 == -1) {
            bVar6 = true;
            *param_1 = 0;
            goto joined_r0x005364d4;
          }
          bVar6 = *param_1 == 0;
          if (param_2 == (long *)0x0) goto LAB_00536510;
LAB_005364d8:
          if (param_2[3] == param_2[4]) {
            iVar11 = (**(code **)(*param_2 + 0x48))(param_2);
            plVar12 = (long *)0x0;
            if (iVar11 != -1) {
              plVar12 = param_2;
            }
            param_2 = plVar12;
            if (bVar6 == (iVar11 == -1)) goto switchD_005358f4_default;
          }
          else if (bVar6 == false) goto switchD_005358f4_default;
        }
        plVar12 = (long *)*param_1;
        if ((byte *)plVar12[3] == (byte *)plVar12[4]) {
          uVar18 = (**(code **)(*plVar12 + 0x48))();
          uVar18 = uVar18 & 0xff;
          if ((uint)uVar18 >> 7 != 0) goto switchD_005358f4_default;
        }
        else {
          bVar7 = *(byte *)plVar12[3];
          uVar18 = (ulong)bVar7;
          if ((char)bVar7 < '\0') goto switchD_005358f4_default;
        }
        if ((*(ulong *)(*(long *)(param_8 + 0x10) + uVar18 * 8) & 1) == 0)
        goto switchD_005358f4_default;
        plVar12 = (long *)*param_1;
        puVar4 = (undefined1 *)plVar12[3];
        if (puVar4 == (undefined1 *)plVar12[4]) {
                    /* try { // try from 005365d0 to 00536613 has its CatchHandler @ 00536aa0 */
          uVar9 = (**(code **)(*plVar12 + 0x50))();
          if ((long)local_278 < 0) goto LAB_005365e0;
LAB_005365a0:
          uVar26 = 0x16;
          if (local_278._7_1_ == 0x16) {
LAB_005365f4:
            FUN_0054774c(&local_288,uVar26,1,uVar26,uVar26,0,0);
            uVar18 = uVar26;
            goto LAB_00536488;
          }
          bVar7 = local_278._7_1_;
          if (0x15 < local_278._7_1_) {
            if (*(long *)(lVar5 + 0x28) == local_70[0]) {
                    /* try { // try from 00536a24 to 00536a4b has its CatchHandler @ 00536ba8 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                         "__s < __min_cap",
                         "__s should never be greater than or equal to the short string capacity");
            }
            goto LAB_00536ba0;
          }
LAB_00536498:
          uVar18 = (ulong)bVar7;
          pppppppuVar20 = &local_288;
          local_278 = CONCAT17(bVar7 + 1,(undefined7)local_278);
        }
        else {
          plVar12[3] = (long)(puVar4 + 1);
          uVar9 = *puVar4;
          if (-1 < (long)local_278) goto LAB_005365a0;
LAB_005365e0:
          uVar26 = (local_278 & 0x7fffffffffffffff) - 1;
          uVar18 = local_280;
          if (local_280 == uVar26) goto LAB_005365f4;
LAB_00536488:
          local_280 = uVar18 + 1;
          pppppppuVar20 = local_288;
        }
        *(undefined1 *)((long)pppppppuVar20 + uVar18) = uVar9;
        ((undefined1 *)((long)pppppppuVar20 + uVar18))[1] = 0;
      } while( true );
    }
    goto LAB_0053661c;
  case 1:
    if (uVar32 != 3) {
      plVar12 = (long *)*param_1;
      if ((byte *)plVar12[3] == (byte *)plVar12[4]) {
                    /* try { // try from 00535ca0 to 00535ca3 has its CatchHandler @ 00536ad8 */
        uVar18 = (**(code **)(*plVar12 + 0x48))();
        uVar18 = uVar18 & 0xff;
        if ((uint)uVar18 >> 7 != 0) goto LAB_005368e8;
      }
      else {
        bVar7 = *(byte *)plVar12[3];
        uVar18 = (ulong)bVar7;
        if ((char)bVar7 < '\0') goto LAB_005368e8;
      }
      if ((*(ulong *)(*(long *)(param_8 + 0x10) + uVar18 * 8) & 1) == 0) goto LAB_005368e8;
      plVar12 = (long *)*param_1;
      puVar4 = (undefined1 *)plVar12[3];
      if (puVar4 == (undefined1 *)plVar12[4]) {
                    /* try { // try from 00535cfc to 00535d3f has its CatchHandler @ 00536aac */
        uVar9 = (**(code **)(*plVar12 + 0x50))();
        bVar7 = local_278._7_1_;
        uVar18 = local_280;
      }
      else {
        plVar12[3] = (long)(puVar4 + 1);
        uVar9 = *puVar4;
        bVar7 = local_278._7_1_;
        uVar18 = local_280;
      }
      local_280 = uVar18;
      if ((long)local_278 < 0) {
        uVar26 = (local_278 & 0x7fffffffffffffff) - 1;
        if (uVar18 != uVar26) goto LAB_00536488;
      }
      else {
        if (bVar7 != 0x16) {
          if (bVar7 < 0x16) goto LAB_00536498;
          if (*(long *)(lVar5 + 0x28) == local_70[0]) {
                    /* try { // try from 005369e8 to 00536a0f has its CatchHandler @ 00536bac */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00536ba0;
        }
        uVar26 = 0x16;
      }
      FUN_0054774c(&local_288,uVar26,1,uVar26,uVar26,0,0);
      uVar18 = uVar26;
      goto LAB_00536488;
    }
    goto LAB_0053661c;
  case 2:
    if ((local_2c0 == (byte *******)0x0) && (1 < uVar32)) {
      if (((param_5 >> 9 & 1) == 0) && (uVar32 != 2 || local_208[3] == '\0')) {
        local_2c0 = (byte *******)0x0;
        break;
      }
      pppppppbVar17 = local_240;
      if (-1 < (long)local_230) {
        pppppppbVar17 = (byte *******)&local_240;
      }
LAB_00535d70:
      pppppppbVar21 = pppppppbVar17;
      if (local_208[(int)uVar32 - 1] < 2) {
        uVar18 = local_238;
        if (-1 < (long)local_230) {
          uVar18 = (ulong)local_230._7_1_;
        }
        pppppppbVar23 = pppppppbVar17;
        if (uVar18 != 0) {
          pppppppbVar1 = (byte *******)((long)pppppppbVar17 + uVar18);
          pppppppbVar22 = pppppppbVar17;
          do {
            pppppppbVar23 = pppppppbVar22;
            if (((char)*(byte *)pppppppbVar22 < '\0') ||
               ((*(ulong *)(*(long *)(param_8 + 0x10) + (ulong)*(byte *)pppppppbVar22 * 8) & 1) == 0
               )) break;
            pppppppbVar22 = (byte *******)((long)pppppppbVar22 + 1);
            uVar18 = uVar18 - 1;
            pppppppbVar23 = pppppppbVar1;
          } while (uVar18 != 0);
        }
        uVar26 = (long)pppppppbVar23 - (long)pppppppbVar17;
        uVar18 = local_280;
        if (-1 < (long)local_278) {
          uVar18 = local_278 >> 0x38;
        }
        if (uVar26 <= uVar18) {
          pppppppuVar20 = local_288;
          if (-1 < (long)local_278) {
            pppppppuVar20 = &local_288;
          }
          if (pppppppbVar23 != pppppppbVar17) {
            uVar28 = 0;
            do {
              pppppppbVar21 = pppppppbVar17;
              if (*(byte *)((long)pppppppuVar20 + uVar28 + (uVar18 - uVar26)) !=
                  *(byte *)((long)pppppppbVar17 + uVar28)) break;
              uVar28 = uVar28 + 1;
              pppppppbVar21 = pppppppbVar23;
            } while (uVar26 != uVar28);
          }
        }
      }
    }
    else {
      pppppppbVar21 = local_240;
      if (-1 < (long)local_230) {
        pppppppbVar21 = (byte *******)&local_240;
      }
      pppppppbVar17 = pppppppbVar21;
      if (uVar32 != 0) goto LAB_00535d70;
    }
    uVar18 = local_238;
    pppppppbVar17 = local_240;
    if (-1 < (long)local_230) {
      uVar18 = (ulong)local_230._7_1_;
      pppppppbVar17 = (byte *******)&local_240;
    }
    for (pppppppbVar17 = (byte *******)((long)pppppppbVar17 + uVar18);
        pppppppbVar21 != pppppppbVar17; pppppppbVar17 = (byte *******)((long)pppppppbVar17 + uVar18)
        ) {
      plVar12 = (long *)*param_1;
      if (plVar12 == (long *)0x0) {
        bVar6 = true;
joined_r0x00536010:
        if (param_2 != (long *)0x0) goto LAB_00535ff8;
LAB_00536014:
        if (bVar6 != false) break;
      }
      else {
        if (plVar12[3] != plVar12[4]) {
          bVar6 = false;
          goto joined_r0x00536010;
        }
                    /* try { // try from 00536024 to 0053608b has its CatchHandler @ 00536adc */
        iVar11 = (**(code **)(*plVar12 + 0x48))();
        if (iVar11 == -1) {
          bVar6 = true;
          *param_1 = 0;
          goto joined_r0x00536010;
        }
        bVar6 = *param_1 == 0;
        if (param_2 == (long *)0x0) goto LAB_00536014;
LAB_00535ff8:
        if (param_2[3] == param_2[4]) {
          iVar11 = (**(code **)(*param_2 + 0x48))(param_2);
          plVar12 = (long *)0x0;
          if (iVar11 != -1) {
            plVar12 = param_2;
          }
          param_2 = plVar12;
          if (bVar6 == (iVar11 == -1)) break;
        }
        else if (bVar6 == false) break;
      }
      plVar12 = (long *)*param_1;
      if ((byte *)plVar12[3] == (byte *)plVar12[4]) {
        bVar7 = (**(code **)(*plVar12 + 0x48))();
      }
      else {
        bVar7 = *(byte *)plVar12[3];
      }
      if (bVar7 != *(byte *)pppppppbVar21) break;
      plVar12 = (long *)*param_1;
      if (plVar12[3] == plVar12[4]) {
                    /* try { // try from 005360b4 to 005360b7 has its CatchHandler @ 00536ad4 */
        (**(code **)(*plVar12 + 0x50))();
      }
      else {
        plVar12[3] = plVar12[3] + 1;
      }
      pppppppbVar21 = (byte *******)((long)pppppppbVar21 + 1);
      uVar18 = local_238;
      pppppppbVar17 = local_240;
      if (-1 < (long)local_230) {
        uVar18 = local_230 >> 0x38;
        pppppppbVar17 = (byte *******)&local_240;
      }
    }
    if ((param_5 >> 9 & 1) == 0) break;
    uVar18 = local_238;
    pppppppbVar17 = local_240;
    if (-1 < (long)local_230) {
      uVar18 = local_230 >> 0x38;
      pppppppbVar17 = (byte *******)&local_240;
    }
    if (pppppppbVar21 != (byte *******)((long)pppppppbVar17 + uVar18)) goto LAB_005368e8;
    break;
  case 3:
    uVar26 = local_248 >> 0x38;
    uVar18 = local_250;
    if (-1 < (long)local_248) {
      uVar18 = uVar26;
    }
    if (uVar18 != 0) {
      plVar12 = (long *)*param_1;
      if ((char *)plVar12[3] == (char *)plVar12[4]) {
                    /* try { // try from 00535dd0 to 00535eeb has its CatchHandler @ 00536ad8 */
        cVar10 = (**(code **)(*plVar12 + 0x48))();
        uVar26 = local_248 >> 0x38;
      }
      else {
        cVar10 = *(char *)plVar12[3];
      }
      pppppppbVar21 = local_258;
      if (-1 < (char)uVar26) {
        pppppppbVar21 = (byte *******)&local_258;
      }
      if (cVar10 == *(char *)pppppppbVar21) {
        plVar12 = (long *)*param_1;
        if (plVar12[3] == plVar12[4]) {
          (**(code **)(*plVar12 + 0x50))();
          uVar26 = local_248 >> 0x38;
        }
        else {
          plVar12[3] = plVar12[3] + 1;
        }
        uVar18 = local_250;
        if (-1 < (char)uVar26) {
          uVar18 = uVar26;
        }
        pppppppbVar21 = (byte *******)&local_258;
        if (uVar18 < 2) {
          pppppppbVar21 = local_2c0;
        }
        *param_7 = 0;
        local_2c0 = pppppppbVar21;
        break;
      }
    }
    uVar28 = local_260 >> 0x38;
    uVar18 = local_268;
    if (-1 < (long)local_260) {
      uVar18 = uVar28;
    }
    if (uVar18 != 0) {
      plVar12 = (long *)*param_1;
      if ((char *)plVar12[3] == (char *)plVar12[4]) {
        cVar10 = (**(code **)(*plVar12 + 0x48))();
        uVar28 = local_260 >> 0x38;
      }
      else {
        cVar10 = *(char *)plVar12[3];
      }
      pppppppbVar21 = local_270;
      if (-1 < (char)uVar28) {
        pppppppbVar21 = (byte *******)&local_270;
      }
      if (cVar10 == *(char *)pppppppbVar21) {
        plVar12 = (long *)*param_1;
        if (plVar12[3] == plVar12[4]) {
                    /* try { // try from 00536114 to 00536117 has its CatchHandler @ 00536ad8 */
          (**(code **)(*plVar12 + 0x50))();
          uVar28 = local_260 >> 0x38;
        }
        else {
          plVar12[3] = plVar12[3] + 1;
        }
        uVar18 = local_268;
        if (-1 < (char)uVar28) {
          uVar18 = uVar28;
        }
        pppppppbVar21 = (byte *******)&local_270;
        if (uVar18 < 2) {
          pppppppbVar21 = local_2c0;
        }
        *param_7 = 1;
        local_2c0 = pppppppbVar21;
        break;
      }
      uVar26 = local_248 >> 0x38;
    }
    uVar18 = local_250;
    if (-1 < (char)uVar26) {
      uVar18 = uVar26;
    }
    uVar26 = local_268;
    if (-1 < (char)uVar28) {
      uVar26 = uVar28;
    }
    if (uVar18 == 0) {
      if (uVar26 == 0) break;
    }
    else if (uVar26 != 0) goto LAB_005368e8;
    *param_7 = uVar26 == 0;
    break;
  case 4:
    uVar35 = 0;
    puVar25 = puVar31;
    pcVar19 = pcVar33;
    puVar34 = puVar13;
LAB_00535914:
    plVar12 = (long *)*param_1;
    pcVar33 = pcVar19;
    if (plVar12 == (long *)0x0) {
      bVar6 = true;
joined_r0x0053592c:
      if (param_2 == (long *)0x0) goto LAB_0053594c;
LAB_00535930:
      if (param_2[3] == param_2[4]) {
        iVar11 = (**(code **)(*param_2 + 0x48))(param_2);
        plVar12 = (long *)0x0;
        if (iVar11 != -1) {
          plVar12 = param_2;
        }
        param_2 = plVar12;
        if (bVar6 == (iVar11 == -1)) goto LAB_00535c04;
      }
      else if (bVar6 == false) goto LAB_00535c04;
    }
    else {
      if (plVar12[3] != plVar12[4]) {
        bVar6 = false;
        goto joined_r0x0053592c;
      }
                    /* try { // try from 0053595c to 0053598b has its CatchHandler @ 00536aec */
      iVar11 = (**(code **)(*plVar12 + 0x48))();
      if (iVar11 != -1) {
        bVar6 = *param_1 == 0;
        goto joined_r0x0053592c;
      }
      bVar6 = true;
      *param_1 = 0;
      if (param_2 != (long *)0x0) goto LAB_00535930;
LAB_0053594c:
      if (bVar6 != false) goto LAB_00535c04;
    }
    plVar12 = (long *)*param_1;
    if ((byte *)plVar12[3] == (byte *)plVar12[4]) {
                    /* try { // try from 005359c8 to 005359cb has its CatchHandler @ 00536ae8 */
      uVar18 = (**(code **)(*plVar12 + 0x48))();
      uVar18 = uVar18 & 0xff;
      if ((uint)uVar18 >> 7 == 0) goto LAB_005359d8;
LAB_005359e4:
      uVar26 = local_220;
      if (-1 < (long)local_218) {
        uVar26 = local_218 >> 0x38;
      }
      if (((uVar26 != 0) && (uVar35 != 0)) && (uVar18 == local_210[0])) {
        puVar13 = puVar34;
        if (puVar25 != puVar27) {
LAB_00535af4:
          *puVar25 = uVar35;
          uVar35 = 0;
          puVar25 = puVar25 + 1;
          puVar34 = puVar13;
          goto LAB_00535b60;
        }
        uVar18 = (long)puVar27 - (long)puVar34;
        sVar3 = 4;
        if (uVar18 != 0) {
          sVar3 = uVar18 * 2;
        }
        if (0x7ffffffffffffffe < uVar18) {
          sVar3 = 0xffffffffffffffff;
        }
        if (pcVar19 == FUN_00535690) {
          puVar13 = (uint *)malloc(sVar3);
          pcVar19 = (code *)PTR_free_00d51ac0;
        }
        else {
          puVar13 = (uint *)realloc(puVar34,sVar3);
          pcVar19 = (code *)PTR_free_00d51ac0;
        }
        puVar24 = puVar34;
        PTR_free_00d51ac0 = pcVar19;
        if (puVar13 != (uint *)0x0) {
          puVar25 = (uint *)((long)puVar13 + uVar18);
          puVar27 = (uint *)((long)puVar13 + (sVar3 & 0xfffffffffffffffc));
          goto LAB_00535af4;
        }
LAB_00536a4c:
        if (*(long *)(lVar5 + 0x28) == local_70[0]) {
                    /* try { // try from 00536a60 to 00536a63 has its CatchHandler @ 00536ae4 */
          FUN_00546ac8();
LAB_00536a64:
          if (*(long *)(lVar5 + 0x28) != local_70[0]) goto LAB_00536ba0;
                    /* try { // try from 00536a78 to 00536a9f has its CatchHandler @ 00536ac8 */
          FUN_00546ac8();
          pcVar19 = pcVar33;
          puVar34 = puVar24;
          goto LAB_00536a80;
        }
        goto LAB_00536ba0;
      }
      goto LAB_00535c04;
    }
    bVar7 = *(byte *)plVar12[3];
    uVar18 = (ulong)bVar7;
    if ((char)bVar7 < '\0') goto LAB_005359e4;
LAB_005359d8:
    if (((uint)*(undefined8 *)(*(long *)(param_8 + 0x10) + uVar18 * 8) >> 6 & 1) == 0)
    goto LAB_005359e4;
    pcVar33 = (code *)*param_10;
    if (pcVar33 == local_298) {
      pcVar33 = local_298 + -*param_9;
      puVar24 = (uint *)((long)pcVar33 * 2);
      if (pcVar33 == (code *)0x0) {
        puVar24 = (uint *)0x1;
      }
      if ((code *)0x7ffffffffffffffe < pcVar33) {
        puVar24 = (uint *)0xffffffffffffffff;
      }
      if ((code *)param_9[1] == FUN_00535690) {
        pvVar14 = malloc((size_t)puVar24);
      }
      else {
        pvVar14 = realloc((void *)*param_9,(size_t)puVar24);
      }
      if (pvVar14 != (void *)0x0) {
        pcVar33 = (code *)((long)pvVar14 + (long)pcVar33);
        *param_9 = (long)pvVar14;
        param_9[1] = (long)PTR_free_00d51ac0;
        *param_10 = (long)pcVar33;
        local_298 = (code *)(*param_9 + (long)puVar24);
        goto LAB_00535b50;
      }
      goto LAB_00536a4c;
    }
LAB_00535b50:
    uVar35 = uVar35 + 1;
    *param_10 = (long)(pcVar33 + 1);
    *pcVar33 = SUB81(uVar18,0);
LAB_00535b60:
    plVar12 = (long *)*param_1;
    if (plVar12[3] == plVar12[4]) {
                    /* try { // try from 00535b78 to 00535b7b has its CatchHandler @ 00536aec */
      (**(code **)(*plVar12 + 0x50))();
    }
    else {
      plVar12[3] = plVar12[3] + 1;
    }
    goto LAB_00535914;
  }
switchD_005358f4_default:
  uVar32 = uVar32 + 1;
  if (uVar32 == 4) goto LAB_0053661c;
  goto LAB_00535844;
LAB_00535c04:
  puVar31 = puVar25;
  puVar13 = puVar34;
  if ((puVar34 != puVar25) && (uVar35 != 0)) {
    if (puVar25 == puVar27) {
      uVar18 = (long)puVar27 - (long)puVar34;
      sVar3 = 4;
      if (uVar18 != 0) {
        sVar3 = uVar18 * 2;
      }
      if (0x7ffffffffffffffe < uVar18) {
        sVar3 = 0xffffffffffffffff;
      }
      if (pcVar19 == FUN_00535690) {
        puVar13 = (uint *)malloc(sVar3);
        pcVar33 = (code *)PTR_free_00d51ac0;
      }
      else {
        puVar13 = (uint *)realloc(puVar34,sVar3);
        pcVar33 = (code *)PTR_free_00d51ac0;
      }
      PTR_free_00d51ac0 = pcVar33;
      if (puVar13 == (uint *)0x0) {
LAB_00536a80:
        if (*(long *)(lVar5 + 0x28) == local_70[0]) {
          uVar16 = FUN_00546ac8();
                    /* catch() { ... } // from try @ 005365d0 with catch @ 00536aa0 */
          if ((long)local_278 < 0) {
            operator_delete(local_288);
          }
          if ((long)local_260 < 0) {
            operator_delete(local_270);
          }
          if ((long)local_248 < 0) {
            operator_delete(local_258);
          }
          if ((long)local_230 < 0) {
            operator_delete(local_240);
          }
          if ((long)local_218 < 0) {
            operator_delete(local_228);
          }
          if (puVar34 != (uint *)0x0) {
                    /* try { // try from 00536b7c to 00536b83 has its CatchHandler @ 00536ba4 */
            (*pcVar19)(puVar34);
          }
          if (*(long *)(lVar5 + 0x28) == local_70[0]) {
                    /* WARNING: Subroutine does not return */
            FUN_00d0fa5c(uVar16);
          }
        }
        goto LAB_00536ba0;
      }
      puVar25 = (uint *)((long)puVar13 + uVar18);
      puVar27 = (uint *)((long)puVar13 + (sVar3 & 0xfffffffffffffffc));
    }
    puVar31 = puVar25 + 1;
    *puVar25 = uVar35;
  }
  if (0 < local_28c) {
    plVar12 = (long *)*param_1;
    if (plVar12 == (long *)0x0) {
      bVar6 = true;
    }
    else if (plVar12[3] == plVar12[4]) {
                    /* try { // try from 005361d4 to 00536273 has its CatchHandler @ 00536aa8 */
      iVar11 = (**(code **)(*plVar12 + 0x48))();
      if (iVar11 == -1) {
        bVar6 = true;
        *param_1 = 0;
      }
      else {
        bVar6 = *param_1 == 0;
      }
    }
    else {
      bVar6 = false;
    }
    if (param_2 == (long *)0x0) {
      if (bVar6 != false) goto LAB_005368e8;
      plVar12 = (long *)0x0;
    }
    else if (param_2[3] == param_2[4]) {
      iVar11 = (**(code **)(*param_2 + 0x48))(param_2);
      plVar12 = (long *)0x0;
      if (iVar11 != -1) {
        plVar12 = param_2;
      }
      if (bVar6 == (iVar11 == -1)) goto LAB_005368e8;
    }
    else {
      plVar12 = param_2;
      if (bVar6 == false) goto LAB_005368e8;
    }
    plVar15 = (long *)*param_1;
    if ((byte *)plVar15[3] == (byte *)plVar15[4]) {
      bVar7 = (**(code **)(*plVar15 + 0x48))();
    }
    else {
      bVar7 = *(byte *)plVar15[3];
    }
    if (bVar7 == local_20c[0]) {
      plVar15 = (long *)*param_1;
      param_2 = plVar12;
      if (plVar15[3] == plVar15[4]) {
        (**(code **)(*plVar15 + 0x50))();
      }
      else {
        plVar15[3] = plVar15[3] + 1;
      }
joined_r0x0053627c:
      plVar12 = param_2;
      if (0 < local_28c) {
        do {
          plVar15 = (long *)*param_1;
          if (plVar15 == (long *)0x0) {
            bVar6 = true;
joined_r0x005362c8:
            if (plVar12 != (long *)0x0) goto LAB_005362b0;
LAB_005362cc:
            if (bVar6 != false) goto LAB_005368e8;
            param_2 = (long *)0x0;
          }
          else {
            if (plVar15[3] != plVar15[4]) {
              bVar6 = false;
              goto joined_r0x005362c8;
            }
                    /* try { // try from 005362e0 to 00536457 has its CatchHandler @ 00536ae0 */
            iVar11 = (**(code **)(*plVar15 + 0x48))();
            if (iVar11 == -1) {
              bVar6 = true;
              *param_1 = 0;
              goto joined_r0x005362c8;
            }
            bVar6 = *param_1 == 0;
            if (plVar12 == (long *)0x0) goto LAB_005362cc;
LAB_005362b0:
            if (plVar12[3] == plVar12[4]) {
              iVar11 = (**(code **)(*plVar12 + 0x48))(plVar12);
              param_2 = (long *)0x0;
              if (iVar11 != -1) {
                param_2 = plVar12;
              }
              if (bVar6 == (iVar11 == -1)) goto LAB_005368e8;
            }
            else {
              param_2 = plVar12;
              if (bVar6 == false) goto LAB_005368e8;
            }
          }
          plVar12 = (long *)*param_1;
          if ((byte *)plVar12[3] == (byte *)plVar12[4]) {
            uVar18 = (**(code **)(*plVar12 + 0x48))();
            uVar18 = uVar18 & 0xff;
            if ((uint)uVar18 >> 7 != 0) goto LAB_005368e8;
          }
          else {
            bVar7 = *(byte *)plVar12[3];
            uVar18 = (ulong)bVar7;
            if ((char)bVar7 < '\0') goto LAB_005368e8;
          }
          if (((uint)*(undefined8 *)(*(long *)(param_8 + 0x10) + uVar18 * 8) >> 6 & 1) == 0)
          goto LAB_005368e8;
          pcVar19 = (code *)*param_10;
          if (pcVar19 == local_298) {
            uVar18 = (long)local_298 - *param_9;
            puVar24 = (uint *)(uVar18 * 2);
            if (uVar18 == 0) {
              puVar24 = (uint *)0x1;
            }
            if (0x7ffffffffffffffe < uVar18) {
              puVar24 = (uint *)0xffffffffffffffff;
            }
            if ((code *)param_9[1] == FUN_00535690) {
              pvVar14 = malloc((size_t)puVar24);
            }
            else {
              pvVar14 = realloc((void *)*param_9,(size_t)puVar24);
            }
            if (pvVar14 == (void *)0x0) goto LAB_00536a64;
            pcVar19 = (code *)((long)pvVar14 + uVar18);
            *param_9 = (long)pvVar14;
            param_9[1] = (long)PTR_free_00d51ac0;
            *param_10 = (long)pcVar19;
            local_298 = (code *)(*param_9 + (long)puVar24);
          }
          plVar12 = (long *)*param_1;
          if ((code *)plVar12[3] == (code *)plVar12[4]) {
            cVar8 = (code)(**(code **)(*plVar12 + 0x48))();
            pcVar19 = (code *)*param_10;
          }
          else {
            cVar8 = *(code *)plVar12[3];
          }
          *param_10 = (long)(pcVar19 + 1);
          *pcVar19 = cVar8;
          plVar12 = (long *)*param_1;
          local_28c = local_28c + -1;
          if (plVar12[3] == plVar12[4]) goto code_r0x0053644c;
          plVar12[3] = plVar12[3] + 1;
          plVar12 = param_2;
          if (local_28c < 1) break;
        } while( true );
      }
      goto LAB_00535820;
    }
    goto LAB_005368e8;
  }
LAB_00535820:
  if (*param_10 == *param_9) goto LAB_005368e8;
  goto switchD_005358f4_default;
code_r0x0053644c:
  (**(code **)(*plVar12 + 0x50))();
  goto joined_r0x0053627c;
LAB_0053661c:
  if (local_2c0 != (byte *******)0x0) {
    ppppppbVar29 = local_2c0[1];
    if (-1 < (char)*(byte *)((long)local_2c0 + 0x17)) {
      ppppppbVar29 = (byte ******)(ulong)*(byte *)((long)local_2c0 + 0x17);
    }
    if ((byte ******)0x1 < ppppppbVar29) {
      ppppppbVar29 = (byte ******)0x1;
      do {
        plVar12 = (long *)*param_1;
        if (plVar12 == (long *)0x0) {
          bVar6 = true;
joined_r0x005366ac:
          if (param_2 != (long *)0x0) goto LAB_00536694;
LAB_005366b0:
          if (bVar6 != false) goto LAB_005368e8;
          plVar12 = (long *)0x0;
        }
        else {
          if (plVar12[3] != plVar12[4]) {
            bVar6 = false;
            goto joined_r0x005366ac;
          }
                    /* try { // try from 005366c4 to 0053677f has its CatchHandler @ 00536ad0 */
          iVar11 = (**(code **)(*plVar12 + 0x48))();
          if (iVar11 == -1) {
            bVar6 = true;
            *param_1 = 0;
            goto joined_r0x005366ac;
          }
          bVar6 = *param_1 == 0;
          if (param_2 == (long *)0x0) goto LAB_005366b0;
LAB_00536694:
          if (param_2[3] == param_2[4]) {
            iVar11 = (**(code **)(*param_2 + 0x48))(param_2);
            plVar12 = (long *)0x0;
            if (iVar11 != -1) {
              plVar12 = param_2;
            }
            if (bVar6 == (iVar11 == -1)) goto LAB_005368e8;
          }
          else {
            plVar12 = param_2;
            if (bVar6 == false) goto LAB_005368e8;
          }
        }
        plVar15 = (long *)*param_1;
        if ((char *)plVar15[3] == (char *)plVar15[4]) {
          cVar10 = (**(code **)(*plVar15 + 0x48))();
        }
        else {
          cVar10 = *(char *)plVar15[3];
        }
        bVar7 = *(byte *)((long)local_2c0 + 0x17);
        ppppppbVar2 = local_2c0[1];
        if (-1 < (char)bVar7) {
          ppppppbVar2 = (byte ******)(ulong)bVar7;
        }
        if (ppppppbVar2 < ppppppbVar29) {
          if (*(long *)(lVar5 + 0x28) == local_70[0]) {
                    /* try { // try from 005369ac to 005369d3 has its CatchHandler @ 00536bb0 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0xd4e,
                       "__pos <= size()","string index out of bounds");
          }
          goto LAB_00536ba0;
        }
        pppppppbVar21 = (byte *******)*local_2c0;
        if (-1 < (char)bVar7) {
          pppppppbVar21 = local_2c0;
        }
        if (cVar10 != *(char *)((long)pppppppbVar21 + (long)ppppppbVar29)) goto LAB_005368e8;
        plVar15 = (long *)*param_1;
        if (plVar15[3] == plVar15[4]) {
          (**(code **)(*plVar15 + 0x50))();
        }
        else {
          plVar15[3] = plVar15[3] + 1;
        }
        ppppppbVar29 = (byte ******)((long)ppppppbVar29 + 1U & 0xffffffff);
        ppppppbVar2 = local_2c0[1];
        if (-1 < (char)*(byte *)((long)local_2c0 + 0x17)) {
          ppppppbVar2 = (byte ******)(ulong)*(byte *)((long)local_2c0 + 0x17);
        }
        param_2 = plVar12;
      } while (ppppppbVar29 < ppppppbVar2);
    }
  }
  if (puVar13 == puVar31) {
    uVar30 = 1;
    puVar13 = puVar31;
  }
  else {
    uVar32 = local_220;
    if (-1 < (long)local_218) {
      uVar32 = (ulong)local_218._7_1_;
    }
    if ((4 < (long)puVar31 - (long)puVar13) && (uVar32 != 0)) {
      puVar31 = puVar31 + -1;
      puVar25 = puVar31;
      puVar27 = puVar13;
      if (puVar13 < puVar31) {
        do {
          puVar34 = puVar27 + 1;
          uVar35 = *puVar27;
          *puVar27 = *puVar25;
          puVar24 = puVar25 + -1;
          *puVar25 = uVar35;
          puVar25 = puVar24;
          puVar27 = puVar34;
        } while (puVar34 < puVar24);
        pppppppbVar17 = local_228;
        if (-1 < (long)local_218) {
          pppppppbVar17 = (byte *******)&local_228;
        }
        pppppppbVar21 = pppppppbVar17;
        if (puVar13 < puVar31) {
          puVar27 = puVar13;
          uVar32 = local_220;
          if (-1 < (long)local_218) {
            uVar32 = (ulong)local_218._7_1_;
          }
          do {
            bVar7 = *(byte *)pppppppbVar21;
            if (((bVar7 != 0) && (bVar7 != 0xff)) && (*puVar27 != (uint)bVar7)) goto LAB_005368e8;
            puVar27 = puVar27 + 1;
            if (1 < (long)((long)pppppppbVar17 + (uVar32 - (long)pppppppbVar21))) {
              pppppppbVar21 = (byte *******)((long)pppppppbVar21 + 1);
            }
          } while (puVar27 < puVar31);
        }
      }
      else {
        pppppppbVar21 = local_228;
        if (-1 < (long)local_218) {
          pppppppbVar21 = (byte *******)&local_228;
        }
      }
      bVar7 = *(byte *)pppppppbVar21;
      if (((bVar7 != 0) && (bVar7 != 0xff)) && ((uint)bVar7 <= *puVar31 - 1)) {
LAB_005368e8:
        uVar30 = 0;
        *param_6 = *param_6 | 4;
        goto joined_r0x00536884;
      }
    }
    uVar30 = 1;
  }
joined_r0x00536884:
  if ((long)local_278 < 0) {
    operator_delete(local_288);
  }
  if ((long)local_260 < 0) {
    operator_delete(local_270);
  }
  if ((long)local_248 < 0) {
    operator_delete(local_258);
  }
  if ((long)local_230 < 0) {
    operator_delete(local_240);
  }
  if ((long)local_218 < 0) {
    operator_delete(local_228);
  }
  if (puVar13 != (uint *)0x0) {
                    /* try { // try from 00536960 to 00536967 has its CatchHandler @ 00536aa4 */
    (*pcVar33)(puVar13);
  }
  goto LAB_00536968;
}


// ===== 00536bb4  FUN_00536bb4 =====

void FUN_00536bb4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0054f64c(0x10);
                    /* try { // try from 00536bd0 to 00536bd7 has its CatchHandler @ 00536bf0 */
  FUN_0054723c(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar1,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
}


// ===== 00536c04  FUN_00536c04 =====

long * FUN_00536c04(undefined8 param_1,long *param_2,long *param_3,uint param_4,long param_5,
                   uint *param_6,undefined8 *param_7)

{
  char *pcVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  char *pcVar11;
  char *pcVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long *local_120;
  long local_118;
  char *local_110;
  code *local_108;
  long *local_100;
  undefined8 *local_f8;
  code *pcStack_f0;
  undefined8 local_e8;
  undefined8 ***local_e0;
  undefined8 **local_d8;
  char local_cc [100];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_110 = local_cc;
  local_108 = FUN_00535690;
                    /* try { // try from 00536c58 to 00536c63 has its CatchHandler @ 00536fa8 */
  local_100 = param_2;
  FUN_00520ce8(&local_120,param_5);
  plVar15 = local_120;
  local_e8 = 0;
  local_f8 = &DAT_00d61bf8;
  pcStack_f0 = FUN_0053d0c8;
  if (DAT_00d61bf8 != -1) {
    local_d8 = &local_f8;
    local_e0 = &local_d8;
                    /* try { // try from 00536c98 to 00536caf has its CatchHandler @ 00536fb4 */
    FUN_0054698c(&DAT_00d61bf8,&local_e0,FUN_005459e0);
  }
  lVar14 = plVar15[2];
  if (((ulong)(plVar15[3] - lVar14 >> 3) <= (long)DAT_00d61c00 - 1U) ||
     (plVar15 = *(long **)(lVar14 + ((long)DAT_00d61c00 - 1U) * 8), plVar15 == (long *)0x0)) {
    if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 00536f98 to 00536f9b has its CatchHandler @ 00536fb4 */
      uVar10 = FUN_0053cd4c();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00536e2c with catch @ 00536f9c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00536c98 with catch @ 00536fb4
                       catch(type#1 @ 00000000) { ... } // from try @ 00536f98 with catch @ 00536fb4
                        */
      plVar15 = local_120 + 1;
      do {
        lVar14 = *plVar15;
        cVar7 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = lVar14 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*local_120 + 0x10))();
      }
      pcVar12 = local_110;
      local_110 = (char *)0x0;
      if (pcVar12 != (char *)0x0) {
                    /* try { // try from 00536ff0 to 00536ff3 has its CatchHandler @ 00537010 */
        (*local_108)();
      }
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00d0fa5c(uVar10);
      }
    }
    goto LAB_0053700c;
  }
  local_f8 = (undefined8 *)((ulong)local_f8 & 0xffffffffffffff00);
                    /* try { // try from 00536ce0 to 00536dab has its CatchHandler @ 00536fb0 */
  uVar9 = FUN_00535694(&local_100,param_3,param_4 & 1,&local_120,*(undefined4 *)(param_5 + 8),
                       param_6,&local_f8,plVar15,&local_110,&local_118,&local_68);
  if ((uVar9 & 1) != 0) {
    if (*(char *)((long)param_7 + 0x17) < '\0') {
      *(undefined1 *)*param_7 = 0;
      param_7[1] = 0;
    }
    else {
      *(undefined1 *)param_7 = 0;
      *(undefined1 *)((long)param_7 + 0x17) = 0;
    }
    if ((char)local_f8 != '\0') {
      uVar6 = (**(code **)(*plVar15 + 0x38))(plVar15,0x2d);
      bVar2 = *(byte *)((long)param_7 + 0x17);
      if ((char)bVar2 < '\0') {
        uVar9 = param_7[1];
        uVar16 = (param_7[2] & 0x7fffffffffffffff) - 1;
        if (uVar9 == uVar16) goto LAB_00536d8c;
LAB_00536db0:
        param_7[1] = uVar9 + 1;
        puVar13 = (undefined8 *)*param_7;
      }
      else {
        if (bVar2 == 0x16) {
          uVar16 = 0x16;
LAB_00536d8c:
          uVar9 = uVar16;
          FUN_0054774c(param_7,uVar9,1,uVar9,uVar9,0,0);
          goto LAB_00536db0;
        }
        if (0x15 < bVar2) {
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 00536f60 to 00536f87 has its CatchHandler @ 00537014 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_0053700c;
        }
        uVar9 = (ulong)bVar2;
        *(byte *)((long)param_7 + 0x17) = bVar2 + 1;
        puVar13 = param_7;
      }
      *(undefined1 *)((long)puVar13 + uVar9) = uVar6;
      ((undefined1 *)((long)puVar13 + uVar9))[1] = 0;
    }
                    /* try { // try from 00536de8 to 00536df3 has its CatchHandler @ 00536fa0 */
    cVar7 = (**(code **)(*plVar15 + 0x38))(plVar15,0x30);
    pcVar12 = local_110;
    if (local_110 < (char *)(local_118 + -1)) {
      local_118 = ~(ulong)local_110 + local_118;
      pcVar1 = local_110 + local_118;
      pcVar11 = local_110;
      do {
        pcVar12 = pcVar11;
        if (*pcVar11 != cVar7) break;
        pcVar11 = pcVar11 + 1;
        local_118 = local_118 + -1;
        pcVar12 = pcVar1;
      } while (local_118 != 0);
    }
                    /* try { // try from 00536e2c to 00536e37 has its CatchHandler @ 00536f9c */
    FUN_00537018(param_7,pcVar12);
  }
  if (local_100 == (long *)0x0) {
    bVar5 = true;
joined_r0x00536e5c:
    if (param_3 != (long *)0x0) goto LAB_00536e88;
LAB_00536f48:
    if (bVar5 != false) goto LAB_00536e98;
  }
  else {
    if (local_100[3] != local_100[4]) {
      bVar5 = false;
      goto joined_r0x00536e5c;
    }
                    /* try { // try from 00536e6c to 00536e6f has its CatchHandler @ 00536fb0 */
    iVar8 = (**(code **)(*local_100 + 0x48))();
    if (iVar8 != -1) {
      bVar5 = local_100 == (long *)0x0;
      goto joined_r0x00536e5c;
    }
    bVar5 = true;
    local_100 = (long *)0x0;
    if (param_3 == (long *)0x0) goto LAB_00536f48;
LAB_00536e88:
    if (param_3[3] == param_3[4]) {
                    /* try { // try from 00536f20 to 00536f27 has its CatchHandler @ 00536fb0 */
      iVar8 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar5 == (iVar8 == -1)) goto LAB_00536e98;
    }
    else if (bVar5 == false) {
LAB_00536e98:
      *param_6 = *param_6 | 2;
    }
  }
  plVar4 = local_100;
  plVar15 = local_120 + 1;
  do {
    lVar14 = *plVar15;
    cVar7 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar5) {
      *plVar15 = lVar14 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (lVar14 == 0) {
    (**(code **)(*local_120 + 0x10))();
  }
  pcVar12 = local_110;
  local_110 = (char *)0x0;
  if (pcVar12 != (char *)0x0) {
                    /* try { // try from 00536ee0 to 00536ee3 has its CatchHandler @ 00536fa4 */
    (*local_108)();
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return plVar4;
  }
LAB_0053700c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00537018  FUN_00537018 =====

ulong * FUN_00537018(ulong *param_1,undefined1 *param_2,undefined1 *param_3)

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
  if (__n != 0) {
    puVar7 = (ulong *)*param_1;
    puVar2 = puVar7;
    if (-1 < (char)bVar3) {
      puVar2 = param_1;
    }
    if ((param_2 < puVar2) || ((undefined1 *)((long)puVar2 + uVar1) < param_2)) {
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
LAB_005371cc:
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
        puVar14 = (undefined8 *)((long)puVar7 + uVar1 + 0x10);
        puVar8 = puVar8 + uVar12;
        puVar15 = (undefined8 *)(param_2 + 0x10);
        uVar16 = uVar12;
        do {
          puVar5 = puVar15 + -1;
          uVar17 = puVar15[-2];
          uVar19 = puVar15[1];
          uVar18 = *puVar15;
          puVar15 = puVar15 + 4;
          uVar16 = uVar16 - 0x20;
          puVar14[-1] = *puVar5;
          puVar14[-2] = uVar17;
          puVar14[1] = uVar19;
          *puVar14 = uVar18;
          puVar14 = puVar14 + 4;
        } while (uVar16 != 0);
        param_2 = param_2 + uVar12;
        if (__n != uVar12) goto LAB_005371cc;
      }
      *puVar8 = 0;
      uVar1 = uVar1 + __n;
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        param_1[1] = uVar1;
      }
      else {
        if (0x16 < uVar1) {
          if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 0053723c to 00537263 has its CatchHandler @ 005372ac */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_005372a8;
        }
        *(char *)((long)param_1 + 0x17) = (char)uVar1;
      }
    }
    else {
      if (0x7fffffffffffffef < __n) {
        if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_004e823c(&local_60);
        }
        goto LAB_005372a8;
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
                    /* try { // try from 00537178 to 0053717f has its CatchHandler @ 0053727c */
      FUN_00547cac(param_1,ppuVar6,uVar1);
      if ((long)uStack_50 < 0) {
        operator_delete(local_60);
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return param_1;
  }
LAB_005372a8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005372b0  FUN_005372b0 =====

void FUN_005372b0(ulong param_1,long *param_2,undefined4 *param_3,undefined1 *param_4,
                 undefined1 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                 undefined8 *param_9,undefined4 *param_10)

{
  int iVar1;
  long lVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *local_90;
  code *pcStack_88;
  undefined8 local_80;
  undefined1 **local_78;
  undefined1 *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar6 = *param_2;
  if ((param_1 & 1) == 0) {
    local_80 = 0;
    local_90 = &DAT_00d61b00;
    pcStack_88 = FUN_0053d0c8;
    if (DAT_00d61b00 != -1) {
      local_78 = &local_70;
      local_70 = (undefined1 *)&local_90;
      FUN_0054698c(&DAT_00d61b00,&local_78,FUN_005459e0);
    }
    lVar5 = *(long *)(lVar6 + 0x10);
    lVar6 = *(long *)(lVar6 + 0x18);
    iVar1 = DAT_00d61b08;
  }
  else {
    local_80 = 0;
    local_90 = &DAT_00d61b10;
    pcStack_88 = FUN_0053d0c8;
    if (DAT_00d61b10 != -1) {
      local_78 = &local_70;
      local_70 = (undefined1 *)&local_90;
      FUN_0054698c(&DAT_00d61b10,&local_78,FUN_005459e0);
    }
    lVar5 = *(long *)(lVar6 + 0x10);
    lVar6 = *(long *)(lVar6 + 0x18);
    iVar1 = DAT_00d61b18;
  }
  if (((long)iVar1 - 1U < (ulong)(lVar6 - lVar5 >> 3)) &&
     (plVar7 = *(long **)(lVar5 + ((long)iVar1 - 1U) * 8), plVar7 != (long *)0x0)) {
    uVar4 = (**(code **)(*plVar7 + 0x58))(plVar7);
    *param_3 = uVar4;
    (**(code **)(*plVar7 + 0x40))(&local_90,plVar7);
    if (*(char *)((long)param_9 + 0x17) < '\0') {
      operator_delete((void *)*param_9);
    }
    param_9[1] = pcStack_88;
    *param_9 = local_90;
    param_9[2] = local_80;
    (**(code **)(*plVar7 + 0x38))(&local_90,plVar7);
    if (*(char *)((long)param_8 + 0x17) < '\0') {
      operator_delete((void *)*param_8);
    }
    param_8[1] = pcStack_88;
    *param_8 = local_90;
    param_8[2] = local_80;
    uVar3 = (**(code **)(*plVar7 + 0x18))(plVar7);
    *param_4 = uVar3;
    uVar3 = (**(code **)(*plVar7 + 0x20))(plVar7);
    *param_5 = uVar3;
    (**(code **)(*plVar7 + 0x28))(&local_90,plVar7);
    if (*(char *)((long)param_6 + 0x17) < '\0') {
      operator_delete((void *)*param_6);
    }
    param_6[1] = pcStack_88;
    *param_6 = local_90;
    param_6[2] = local_80;
    (**(code **)(*plVar7 + 0x30))(&local_90,plVar7);
    if (*(char *)((long)param_7 + 0x17) < '\0') {
      operator_delete((void *)*param_7);
    }
    param_7[1] = pcStack_88;
    *param_7 = local_90;
    param_7[2] = local_80;
    uVar4 = (**(code **)(*plVar7 + 0x48))(plVar7);
    *param_10 = uVar4;
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_68) {
    FUN_0053cd4c();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00537538  FUN_00537538 =====

long * FUN_00537538(undefined8 param_1,long *param_2,long *param_3,uint param_4,long param_5,
                   uint *param_6,undefined8 param_7)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  int *piVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 **__ptr;
  undefined8 uVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  long lVar12;
  undefined7 *puVar13;
  int *piVar14;
  long *plVar15;
  char local_2c4 [4];
  long *local_2c0;
  int *local_2b8;
  int *local_2b0;
  code *local_2a8;
  long *local_2a0;
  undefined8 *local_298;
  code *pcStack_290;
  undefined8 local_288;
  undefined8 local_230;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  int local_20c;
  undefined7 local_208;
  undefined4 uStack_201;
  int local_1f8 [100];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_2b0 = local_1f8;
  local_2a8 = FUN_00535690;
                    /* try { // try from 0053758c to 00537597 has its CatchHandler @ 0053797c */
  local_2a0 = param_2;
  FUN_00520ce8(&local_2c0,param_5);
  plVar15 = local_2c0;
  local_288 = 0;
  local_298 = &DAT_00d61be8;
  pcStack_290 = FUN_0053d0c8;
  if (DAT_00d61be8 != -1) {
    local_230 = &local_298;
    local_208 = SUB87(&local_230,0);
    uStack_201._0_1_ = (char)((ulong)&local_230 >> 0x38);
                    /* try { // try from 005375d0 to 005375e7 has its CatchHandler @ 00537988 */
    FUN_0054698c(&DAT_00d61be8,&local_208,FUN_005459e0);
  }
  lVar12 = plVar15[2];
  if (((ulong)(plVar15[3] - lVar12 >> 3) <= (long)DAT_00d61bf0 - 1U) ||
     (plVar15 = *(long **)(lVar12 + ((long)DAT_00d61bf0 - 1U) * 8), plVar15 == (long *)0x0)) {
    if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_005379e0;
                    /* try { // try from 00537928 to 0053792b has its CatchHandler @ 00537988 */
    FUN_0053cd4c();
LAB_0053792c:
    if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_005379e0;
                    /* try { // try from 0053793c to 00537947 has its CatchHandler @ 00537960 */
    FUN_00536bb4("money_get error");
LAB_00537948:
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00537958 to 0053795b has its CatchHandler @ 0053795c */
      uVar9 = FUN_00546ac8();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00537958 with catch @ 0053795c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005375d0 with catch @ 00537988
                       catch(type#1 @ 00000000) { ... } // from try @ 00537928 with catch @ 00537988
                        */
      plVar15 = local_2c0 + 1;
      do {
        lVar12 = *plVar15;
        cVar1 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *plVar15 = lVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*local_2c0 + 0x10))();
      }
      piVar14 = local_2b0;
      local_2b0 = (int *)0x0;
      if (piVar14 != (int *)0x0) {
                    /* try { // try from 005379c4 to 005379c7 has its CatchHandler @ 005379e4 */
        (*local_2a8)();
      }
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00d0fa5c(uVar9);
      }
    }
    goto LAB_005379e0;
  }
  local_2c4[0] = '\0';
                    /* try { // try from 00537618 to 00537647 has its CatchHandler @ 00537984 */
  uVar8 = FUN_005379e8(&local_2a0,param_3,param_4 & 1,&local_2c0,*(undefined4 *)(param_5 + 8),
                       param_6,local_2c4,plVar15,&local_2b0,&local_2b8,&local_68);
  if ((uVar8 & 1) != 0) {
    local_208 = (undefined7)s_0123456789_001d320c._0_8_;
    uStack_201._0_1_ = SUB81(s_0123456789_001d320c._0_8_,7);
    uStack_201 = CONCAT31(0x3938,(char)uStack_201);
                    /* try { // try from 00537678 to 00537687 has its CatchHandler @ 00537974 */
    (**(code **)(*plVar15 + 0x60))(plVar15,&local_208,(long)&uStack_201 + 3,&local_230);
    piVar14 = local_2b0;
    piVar4 = local_2b8;
    if (0x188 < (long)local_2b8 - (long)local_2b0) {
      __ptr = (undefined8 **)malloc(((ulong)((long)local_2b8 - (long)local_2b0) >> 2) + 2);
      ppuVar11 = __ptr;
      if (__ptr != (undefined8 **)0x0) goto joined_r0x005376b4;
      goto LAB_00537948;
    }
    __ptr = (undefined8 **)0x0;
    ppuVar11 = &local_298;
joined_r0x005376b4:
    ppuVar10 = ppuVar11;
    if (local_2c4[0] != '\0') {
      ppuVar10 = (undefined8 **)((long)ppuVar11 + 1);
      *(undefined1 *)ppuVar11 = 0x2d;
    }
    if (piVar14 < piVar4) {
      ppuVar11 = ppuVar10;
      do {
        iVar7 = *piVar14;
        if ((int)local_230 == iVar7) {
          lVar12 = 0;
LAB_005377a0:
          puVar13 = (undefined7 *)((long)&local_230 + lVar12 * 4);
        }
        else {
          if (local_230._4_4_ == iVar7) {
            lVar12 = 1;
            goto LAB_005377a0;
          }
          if (local_228 == iVar7) {
            lVar12 = 2;
            goto LAB_005377a0;
          }
          if (local_224 == iVar7) {
            lVar12 = 3;
            goto LAB_005377a0;
          }
          if (local_220 == iVar7) {
            lVar12 = 4;
            goto LAB_005377a0;
          }
          if (local_21c == iVar7) {
            lVar12 = 5;
            goto LAB_005377a0;
          }
          if (local_218 == iVar7) {
            lVar12 = 6;
            goto LAB_005377a0;
          }
          if (local_214 == iVar7) {
            lVar12 = 7;
            goto LAB_005377a0;
          }
          if (local_210 == iVar7) {
            lVar12 = 8;
            goto LAB_005377a0;
          }
          puVar13 = &local_208;
          if (local_20c == iVar7) {
            lVar12 = 9;
            goto LAB_005377a0;
          }
        }
        piVar14 = piVar14 + 1;
        ppuVar10 = (undefined8 **)((long)ppuVar11 + 1);
        *(undefined1 *)ppuVar11 =
             *(undefined1 *)((long)&local_208 + ((long)puVar13 - (long)&local_230 >> 2));
        ppuVar11 = ppuVar10;
      } while (piVar14 < local_2b8);
    }
    *(undefined1 *)ppuVar10 = 0;
    iVar7 = sscanf((char *)&local_298,"%Lf",param_7);
    if (iVar7 != 1) goto LAB_0053792c;
    if (__ptr != (undefined8 **)0x0) {
      free(__ptr);
    }
  }
  if (local_2a0 == (long *)0x0) {
joined_r0x00537810:
    bVar6 = true;
    bVar3 = true;
    if (param_3 == (long *)0x0) goto LAB_00537910;
LAB_00537850:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    if (!(bool)(bVar6 ^ iVar7 == -1)) goto LAB_00537884;
  }
  else {
    if ((int *)local_2a0[3] == (int *)local_2a0[4]) {
                    /* try { // try from 00537834 to 00537873 has its CatchHandler @ 00537984 */
      iVar7 = (**(code **)(*local_2a0 + 0x48))();
    }
    else {
      iVar7 = *(int *)local_2a0[3];
    }
    if (iVar7 == -1) {
      local_2a0 = (long *)0x0;
      goto joined_r0x00537810;
    }
    bVar6 = local_2a0 == (long *)0x0;
    bVar3 = bVar6;
    if (param_3 != (long *)0x0) goto LAB_00537850;
LAB_00537910:
    if (bVar3) {
LAB_00537884:
      *param_6 = *param_6 | 2;
    }
  }
  plVar5 = local_2a0;
  plVar15 = local_2c0 + 1;
  do {
    lVar12 = *plVar15;
    cVar1 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar6) {
      *plVar15 = lVar12 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar12 == 0) {
    (**(code **)(*local_2c0 + 0x10))();
  }
  piVar14 = local_2b0;
  local_2b0 = (int *)0x0;
  if (piVar14 != (int *)0x0) {
                    /* try { // try from 005378cc to 005378cf has its CatchHandler @ 00537978 */
    (*local_2a8)();
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return plVar5;
  }
LAB_005379e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005379e8  FUN_005379e8 =====

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_005379e8(long *param_1,long *param_2,uint param_3,undefined8 param_4,uint param_5,uint *param_6,
            undefined1 *param_7,long *param_8,long *param_9,long *param_10,int *param_11)

{
  int *******pppppppiVar1;
  int ******ppppppiVar2;
  byte *******pppppppbVar3;
  size_t sVar4;
  undefined4 *puVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  void *pvVar14;
  uint *__ptr;
  ulong uVar15;
  long *plVar16;
  int *piVar17;
  byte bVar18;
  int *******pppppppiVar19;
  undefined8 *******pppppppuVar20;
  uint *puVar21;
  byte *******pppppppbVar22;
  uint *puVar23;
  uint *puVar24;
  int *******pppppppiVar25;
  long lVar26;
  uint *puVar27;
  ulong uVar28;
  uint uVar29;
  int ******ppppppiVar30;
  uint *puVar31;
  ulong uVar32;
  int *******local_2c0;
  code *local_2b0;
  uint *local_2a0;
  int *local_298;
  int local_28c;
  undefined8 *******local_288;
  ulong local_280;
  undefined8 local_278;
  int *******local_270;
  ulong local_268;
  ulong local_260;
  int *******local_258;
  ulong local_250;
  ulong local_248;
  int *******local_240;
  ulong local_238;
  undefined8 local_230;
  byte *******local_228;
  ulong local_220;
  undefined8 local_218;
  int local_210;
  int local_20c;
  byte local_208 [8];
  uint local_200 [100];
  long local_70 [2];
  
  lVar6 = tpidr_el0;
  local_70[0] = *(long *)(lVar6 + 0x28);
  plVar11 = (long *)*param_1;
  if (plVar11 == (long *)0x0) {
joined_r0x00537a7c:
    bVar7 = true;
    if (param_2 != (long *)0x0) goto LAB_00537a64;
LAB_00537a80:
    if (bVar7) goto LAB_00537b6c;
    plVar11 = (long *)0x0;
  }
  else {
    if ((int *)plVar11[3] == (int *)plVar11[4]) {
      iVar10 = (**(code **)(*plVar11 + 0x48))();
    }
    else {
      iVar10 = *(int *)plVar11[3];
    }
    if (iVar10 == -1) {
      *param_1 = 0;
      goto joined_r0x00537a7c;
    }
    bVar7 = *param_1 == 0;
    if (param_2 == (long *)0x0) goto LAB_00537a80;
LAB_00537a64:
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar10 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar10 = *(int *)param_2[3];
    }
    plVar11 = (long *)0x0;
    if (iVar10 != -1) {
      plVar11 = param_2;
    }
    if (bVar7 == (iVar10 == -1)) {
LAB_00537b6c:
      uVar9 = 0;
      *param_6 = *param_6 | 4;
LAB_00538c9c:
      if (*(long *)(lVar6 + 0x28) == local_70[0]) {
        return uVar9;
      }
LAB_00538ec8:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  local_228 = (byte *******)0x0;
  local_220 = 0;
  local_218 = 0;
  local_240 = (int *******)0x0;
  local_238 = 0;
  local_230 = 0;
  local_258 = (int *******)0x0;
  local_250 = 0;
  local_248 = 0;
  local_270 = (int *******)0x0;
  local_268 = 0;
  local_260 = 0;
  local_288 = (undefined8 *******)0x0;
  local_280 = 0;
  local_278 = 0;
                    /* try { // try from 00537b00 to 00537b2f has its CatchHandler @ 00538dd8 */
  FUN_00539598(param_3 & 1,param_4,local_208,&local_20c,&local_210,&local_228,&local_240,&local_258,
               &local_270,&local_28c);
  __ptr = local_200;
  uVar32 = 0;
  local_2a0 = (uint *)local_70;
  puVar31 = local_200;
  local_2c0 = (int *******)0x0;
  local_298 = param_11;
  *param_10 = *param_9;
  local_2b0 = FUN_00535690;
LAB_00537ba0:
  plVar12 = (long *)*param_1;
  if (plVar12 == (long *)0x0) {
joined_r0x00537bc0:
    bVar7 = true;
    if (plVar11 != (long *)0x0) goto LAB_00537bf0;
LAB_00537bc4:
    if (bVar7) goto LAB_0053896c;
  }
  else {
    if ((int *)plVar12[3] == (int *)plVar12[4]) {
                    /* try { // try from 00537bd4 to 00537c13 has its CatchHandler @ 00538e0c */
      iVar10 = (**(code **)(*plVar12 + 0x48))();
    }
    else {
      iVar10 = *(int *)plVar12[3];
    }
    if (iVar10 == -1) {
      *param_1 = 0;
      goto joined_r0x00537bc0;
    }
    bVar7 = *param_1 == 0;
    if (plVar11 == (long *)0x0) goto LAB_00537bc4;
LAB_00537bf0:
    if ((int *)plVar11[3] == (int *)plVar11[4]) {
      iVar10 = (**(code **)(*plVar11 + 0x48))(plVar11);
    }
    else {
      iVar10 = *(int *)plVar11[3];
    }
    plVar12 = (long *)0x0;
    if (iVar10 != -1) {
      plVar12 = plVar11;
    }
    plVar11 = plVar12;
    if (bVar7 == (iVar10 == -1)) goto LAB_0053896c;
  }
  switch(local_208[uVar32]) {
  case 0:
    if (uVar32 != 3) {
      do {
        plVar12 = (long *)*param_1;
        bVar8 = true;
        bVar7 = true;
        if (plVar12 == (long *)0x0) {
LAB_00538858:
          bVar7 = bVar8;
          if (plVar11 != (long *)0x0) goto LAB_0053885c;
LAB_005388a0:
          if (bVar7 != false) goto switchD_00537c4c_default;
        }
        else {
          if ((int *)plVar12[3] == (int *)plVar12[4]) {
                    /* try { // try from 00538840 to 005388df has its CatchHandler @ 00538e04 */
            iVar10 = (**(code **)(*plVar12 + 0x48))();
          }
          else {
            iVar10 = *(int *)plVar12[3];
          }
          if (iVar10 != -1) {
            bVar8 = *param_1 == 0;
            goto LAB_00538858;
          }
          *param_1 = 0;
          if (plVar11 == (long *)0x0) goto LAB_005388a0;
LAB_0053885c:
          if ((int *)plVar11[3] == (int *)plVar11[4]) {
            iVar10 = (**(code **)(*plVar11 + 0x48))(plVar11);
          }
          else {
            iVar10 = *(int *)plVar11[3];
          }
          plVar12 = (long *)0x0;
          if (iVar10 != -1) {
            plVar12 = plVar11;
          }
          plVar11 = plVar12;
          if (bVar7 == (iVar10 == -1)) goto switchD_00537c4c_default;
        }
        plVar12 = (long *)*param_1;
        if ((undefined4 *)plVar12[3] == (undefined4 *)plVar12[4]) {
          uVar9 = (**(code **)(*plVar12 + 0x48))();
        }
        else {
          uVar9 = *(undefined4 *)plVar12[3];
        }
        uVar13 = (**(code **)(*param_8 + 0x18))(param_8,1,uVar9);
        if ((uVar13 & 1) == 0) goto switchD_00537c4c_default;
        plVar12 = (long *)*param_1;
        puVar5 = (undefined4 *)plVar12[3];
        if (puVar5 == (undefined4 *)plVar12[4]) {
                    /* try { // try from 00538908 to 00538963 has its CatchHandler @ 00538dd0 */
          uVar9 = (**(code **)(*plVar12 + 0x50))();
        }
        else {
          uVar9 = *puVar5;
          plVar12[3] = (long)(puVar5 + 1);
        }
        if ((long)local_278 < 0) {
          uVar15 = (local_278 & 0x7fffffffffffffff) - 1;
          uVar13 = local_280;
          if (local_280 == uVar15) goto LAB_00538944;
LAB_005387f0:
          local_280 = uVar13 + 1;
          pppppppuVar20 = local_288;
        }
        else {
          uVar15 = 4;
          if (local_278._7_1_ == 4) {
LAB_00538944:
            FUN_00548618(&local_288,uVar15,1,uVar15,uVar15,0,0);
            uVar13 = uVar15;
            goto LAB_005387f0;
          }
          bVar18 = local_278._7_1_;
          if (3 < local_278._7_1_) {
            if (*(long *)(lVar6 + 0x28) == local_70[0]) {
                    /* try { // try from 00538d58 to 00538d7f has its CatchHandler @ 00538ed0 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                         "__s < __min_cap",
                         "__s should never be greater than or equal to the short string capacity");
            }
            goto LAB_00538ec8;
          }
LAB_00538800:
          uVar13 = (ulong)bVar18;
          pppppppuVar20 = &local_288;
          local_278 = CONCAT17(bVar18 + 1,(undefined7)local_278);
        }
        puVar5 = (undefined4 *)((long)pppppppuVar20 + uVar13 * 4);
        *puVar5 = uVar9;
        puVar5[1] = 0;
      } while( true );
    }
    goto LAB_0053896c;
  case 1:
    if (uVar32 != 3) {
      plVar12 = (long *)*param_1;
      if ((undefined4 *)plVar12[3] == (undefined4 *)plVar12[4]) {
                    /* try { // try from 00537ffc to 00538017 has its CatchHandler @ 00538e0c */
        uVar9 = (**(code **)(*plVar12 + 0x48))();
      }
      else {
        uVar9 = *(undefined4 *)plVar12[3];
      }
      uVar13 = (**(code **)(*param_8 + 0x18))(param_8,1,uVar9);
      if ((uVar13 & 1) == 0) goto LAB_00538c08;
      plVar12 = (long *)*param_1;
      puVar5 = (undefined4 *)plVar12[3];
      if (puVar5 == (undefined4 *)plVar12[4]) {
                    /* try { // try from 00538058 to 0053809b has its CatchHandler @ 00538df0 */
        uVar9 = (**(code **)(*plVar12 + 0x50))();
        bVar18 = local_278._7_1_;
        uVar13 = local_280;
      }
      else {
        uVar9 = *puVar5;
        plVar12[3] = (long)(puVar5 + 1);
        bVar18 = local_278._7_1_;
        uVar13 = local_280;
      }
      local_280 = uVar13;
      if ((long)local_278 < 0) {
        uVar15 = (local_278 & 0x7fffffffffffffff) - 1;
        if (uVar13 != uVar15) goto LAB_005387f0;
      }
      else {
        if (bVar18 != 4) {
          if (bVar18 < 4) goto LAB_00538800;
          if (*(long *)(lVar6 + 0x28) == local_70[0]) {
                    /* try { // try from 00538d1c to 00538d43 has its CatchHandler @ 00538ed4 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00538ec8;
        }
        uVar15 = 4;
      }
      FUN_00548618(&local_288,uVar15,1,uVar15,uVar15,0,0);
      uVar13 = uVar15;
      goto LAB_005387f0;
    }
    goto LAB_0053896c;
  case 2:
    if ((local_2c0 == (int *******)0x0) && (1 < uVar32)) {
      if (((param_5 >> 9 & 1) == 0) && (uVar32 != 2 || local_208[3] == '\0')) {
        local_2c0 = (int *******)0x0;
        break;
      }
      pppppppiVar19 = local_240;
      if (-1 < (long)local_230) {
        pppppppiVar19 = (int *******)&local_240;
      }
LAB_005380c4:
      uVar13 = (ulong)local_230._7_1_;
      pppppppiVar25 = pppppppiVar19;
      if (local_208[(int)uVar32 - 1] < 2) {
        uVar15 = local_238;
        pppppppiVar25 = local_240;
        if (-1 < (long)local_230) {
          uVar15 = uVar13;
          pppppppiVar25 = (int *******)&local_240;
        }
        while (pppppppiVar19 != (int *******)((long)pppppppiVar25 + uVar15 * 4)) {
                    /* try { // try from 00538108 to 00538113 has its CatchHandler @ 00538e00 */
          uVar15 = (**(code **)(*param_8 + 0x18))(param_8,1,*(int *)pppppppiVar19);
          uVar13 = local_230 >> 0x38;
          if ((uVar15 & 1) == 0) break;
          pppppppiVar19 = (int *******)((long)pppppppiVar19 + 4);
          uVar15 = local_238;
          pppppppiVar25 = local_240;
          if (-1 < (long)local_230) {
            uVar15 = uVar13;
            pppppppiVar25 = (int *******)&local_240;
          }
        }
        pppppppiVar1 = local_240;
        if (-1 < (char)uVar13) {
          pppppppiVar1 = (int *******)&local_240;
        }
        uVar28 = (long)pppppppiVar19 - (long)pppppppiVar1 >> 2;
        uVar15 = local_280;
        if (-1 < (long)local_278) {
          uVar15 = local_278 >> 0x38;
        }
        pppppppiVar25 = pppppppiVar1;
        if (uVar28 <= uVar15) {
          pppppppuVar20 = local_288;
          if (-1 < (long)local_278) {
            pppppppuVar20 = &local_288;
          }
          pppppppiVar25 = pppppppiVar19;
          if (pppppppiVar19 != pppppppiVar1) {
            lVar26 = 0;
            do {
              pppppppiVar25 = pppppppiVar1;
              if (*(int *)((long)pppppppuVar20 + lVar26 + uVar28 * -4 + uVar15 * 4) !=
                  *(int *)((long)pppppppiVar1 + lVar26)) break;
              lVar26 = lVar26 + 4;
              pppppppiVar25 = pppppppiVar19;
            } while (uVar28 * 4 - lVar26 != 0);
          }
        }
      }
    }
    else {
      uVar13 = (ulong)local_230._7_1_;
      pppppppiVar25 = local_240;
      if (-1 < (long)local_230) {
        pppppppiVar25 = (int *******)&local_240;
      }
      pppppppiVar19 = pppppppiVar25;
      if (uVar32 != 0) goto LAB_005380c4;
    }
    bVar7 = -1 < (char)uVar13;
    uVar15 = local_238;
    if (bVar7) {
      uVar15 = uVar13;
    }
    pppppppiVar19 = local_240;
    if (bVar7) {
      pppppppiVar19 = (int *******)&local_240;
    }
    while (pppppppiVar25 != (int *******)((long)pppppppiVar19 + uVar15 * 4)) {
      plVar12 = (long *)*param_1;
      if (plVar12 == (long *)0x0) {
joined_r0x00538380:
        bVar7 = true;
        if (plVar11 != (long *)0x0) goto LAB_005383b0;
LAB_00538384:
        if (bVar7 != false) break;
      }
      else {
        if ((int *)plVar12[3] == (int *)plVar12[4]) {
                    /* try { // try from 00538394 to 0053840b has its CatchHandler @ 00538e08 */
          iVar10 = (**(code **)(*plVar12 + 0x48))();
        }
        else {
          iVar10 = *(int *)plVar12[3];
        }
        if (iVar10 == -1) {
          *param_1 = 0;
          goto joined_r0x00538380;
        }
        bVar7 = *param_1 == 0;
        if (plVar11 == (long *)0x0) goto LAB_00538384;
LAB_005383b0:
        if ((int *)plVar11[3] == (int *)plVar11[4]) {
          iVar10 = (**(code **)(*plVar11 + 0x48))(plVar11);
        }
        else {
          iVar10 = *(int *)plVar11[3];
        }
        plVar12 = (long *)0x0;
        if (iVar10 != -1) {
          plVar12 = plVar11;
        }
        plVar11 = plVar12;
        if (bVar7 == (iVar10 == -1)) break;
      }
      plVar12 = (long *)*param_1;
      if ((int *)plVar12[3] == (int *)plVar12[4]) {
        iVar10 = (**(code **)(*plVar12 + 0x48))();
      }
      else {
        iVar10 = *(int *)plVar12[3];
      }
      if (iVar10 != *(int *)pppppppiVar25) break;
      plVar12 = (long *)*param_1;
      if (plVar12[3] == plVar12[4]) {
                    /* try { // try from 00538430 to 00538433 has its CatchHandler @ 00538dfc */
        (**(code **)(*plVar12 + 0x50))();
      }
      else {
        plVar12[3] = plVar12[3] + 4;
      }
      pppppppiVar25 = (int *******)((long)pppppppiVar25 + 4);
      uVar15 = local_238;
      if (-1 < (long)local_230) {
        uVar15 = local_230 >> 0x38;
      }
      pppppppiVar19 = local_240;
      if (-1 < (long)local_230) {
        pppppppiVar19 = (int *******)&local_240;
      }
    }
    if ((param_5 >> 9 & 1) != 0) {
      uVar13 = local_238;
      if (-1 < (long)local_230) {
        uVar13 = local_230 >> 0x38;
      }
      pppppppiVar19 = local_240;
      if (-1 < (long)local_230) {
        pppppppiVar19 = (int *******)&local_240;
      }
      if (pppppppiVar25 == (int *******)((long)pppppppiVar19 + uVar13 * 4)) break;
      goto LAB_00538c08;
    }
    break;
  case 3:
    uVar15 = local_248 >> 0x38;
    uVar13 = local_250;
    if (-1 < (long)local_248) {
      uVar13 = uVar15;
    }
    if (uVar13 != 0) {
      plVar12 = (long *)*param_1;
      if ((int *)plVar12[3] == (int *)plVar12[4]) {
                    /* try { // try from 00538144 to 00538257 has its CatchHandler @ 00538e0c */
        iVar10 = (**(code **)(*plVar12 + 0x48))();
        uVar15 = local_248 >> 0x38;
      }
      else {
        iVar10 = *(int *)plVar12[3];
      }
      pppppppiVar25 = local_258;
      if (-1 < (char)uVar15) {
        pppppppiVar25 = (int *******)&local_258;
      }
      if (iVar10 == *(int *)pppppppiVar25) {
        plVar12 = (long *)*param_1;
        if (plVar12[3] == plVar12[4]) {
          (**(code **)(*plVar12 + 0x50))();
          uVar15 = local_248 >> 0x38;
        }
        else {
          plVar12[3] = plVar12[3] + 4;
        }
        uVar13 = local_250;
        if (-1 < (char)uVar15) {
          uVar13 = uVar15;
        }
        pppppppiVar25 = (int *******)&local_258;
        if (uVar13 < 2) {
          pppppppiVar25 = local_2c0;
        }
        *param_7 = 0;
        local_2c0 = pppppppiVar25;
        break;
      }
    }
    uVar28 = local_260 >> 0x38;
    uVar13 = local_268;
    if (-1 < (long)local_260) {
      uVar13 = uVar28;
    }
    if (uVar13 != 0) {
      plVar12 = (long *)*param_1;
      if ((int *)plVar12[3] == (int *)plVar12[4]) {
        iVar10 = (**(code **)(*plVar12 + 0x48))();
        uVar28 = local_260 >> 0x38;
      }
      else {
        iVar10 = *(int *)plVar12[3];
      }
      pppppppiVar25 = local_270;
      if (-1 < (char)uVar28) {
        pppppppiVar25 = (int *******)&local_270;
      }
      if (iVar10 == *(int *)pppppppiVar25) {
        plVar12 = (long *)*param_1;
        if (plVar12[3] == plVar12[4]) {
                    /* try { // try from 00538484 to 00538487 has its CatchHandler @ 00538e0c */
          (**(code **)(*plVar12 + 0x50))();
          uVar28 = local_260 >> 0x38;
        }
        else {
          plVar12[3] = plVar12[3] + 4;
        }
        uVar13 = local_268;
        if (-1 < (char)uVar28) {
          uVar13 = uVar28;
        }
        pppppppiVar25 = (int *******)&local_270;
        if (uVar13 < 2) {
          pppppppiVar25 = local_2c0;
        }
        *param_7 = 1;
        local_2c0 = pppppppiVar25;
        break;
      }
      uVar15 = local_248 >> 0x38;
    }
    uVar13 = local_250;
    if (-1 < (char)uVar15) {
      uVar13 = uVar15;
    }
    uVar15 = local_268;
    if (-1 < (char)uVar28) {
      uVar15 = uVar28;
    }
    if (uVar13 == 0) {
      if (uVar15 == 0) break;
    }
    else if (uVar15 != 0) goto LAB_00538c08;
    *param_7 = uVar15 == 0;
    break;
  case 4:
    uVar29 = 0;
    puVar27 = puVar31;
LAB_00537c7c:
    plVar12 = (long *)*param_1;
    if (plVar12 == (long *)0x0) {
joined_r0x00537e34:
      bVar7 = true;
      if (plVar11 == (long *)0x0) goto LAB_00537ca0;
LAB_00537ccc:
      if ((int *)plVar11[3] == (int *)plVar11[4]) {
        iVar10 = (**(code **)(*plVar11 + 0x48))(plVar11);
      }
      else {
        iVar10 = *(int *)plVar11[3];
      }
      plVar12 = (long *)0x0;
      if (iVar10 != -1) {
        plVar12 = plVar11;
      }
      plVar11 = plVar12;
      if (bVar7 == (iVar10 == -1)) goto LAB_00537f6c;
    }
    else {
      if ((int *)plVar12[3] == (int *)plVar12[4]) {
                    /* try { // try from 00537cb0 to 00537cef has its CatchHandler @ 00538e18 */
        iVar10 = (**(code **)(*plVar12 + 0x48))();
      }
      else {
        iVar10 = *(int *)plVar12[3];
      }
      if (iVar10 == -1) {
        *param_1 = 0;
        goto joined_r0x00537e34;
      }
      bVar7 = *param_1 == 0;
      if (plVar11 != (long *)0x0) goto LAB_00537ccc;
LAB_00537ca0:
      if (bVar7 != false) goto LAB_00537f6c;
    }
    plVar12 = (long *)*param_1;
    if ((int *)plVar12[3] == (int *)plVar12[4]) {
                    /* try { // try from 00537d24 to 00537d43 has its CatchHandler @ 00538e1c */
      iVar10 = (**(code **)(*plVar12 + 0x48))();
    }
    else {
      iVar10 = *(int *)plVar12[3];
    }
    uVar13 = (**(code **)(*param_8 + 0x18))(param_8,0x40,iVar10);
    if ((uVar13 & 1) != 0) {
      piVar17 = (int *)*param_10;
      if (piVar17 != local_298) {
LAB_00537e7c:
        uVar29 = uVar29 + 1;
        *piVar17 = iVar10;
        *param_10 = (long)(piVar17 + 1);
        puVar31 = puVar27;
        goto LAB_00537ecc;
      }
      uVar13 = (long)local_298 - *param_9;
      sVar4 = 4;
      if (uVar13 != 0) {
        sVar4 = uVar13 * 2;
      }
      if (0x7ffffffffffffffe < uVar13) {
        sVar4 = 0xffffffffffffffff;
      }
      if ((code *)param_9[1] == FUN_00535690) {
        pvVar14 = malloc(sVar4);
      }
      else {
        pvVar14 = realloc((void *)*param_9,sVar4);
      }
      if (pvVar14 != (void *)0x0) {
        piVar17 = (int *)((long)pvVar14 + uVar13);
        *param_9 = (long)pvVar14;
        param_9[1] = (long)PTR_free_00d51ac0;
        *param_10 = (long)piVar17;
        local_298 = (int *)(*param_9 + (sVar4 & 0xfffffffffffffffc));
        goto LAB_00537e7c;
      }
LAB_00538d80:
      if (*(long *)(lVar6 + 0x28) == local_70[0]) {
                    /* try { // try from 00538d94 to 00538d97 has its CatchHandler @ 00538e10 */
        FUN_00546ac8();
LAB_00538d98:
        if (*(long *)(lVar6 + 0x28) != local_70[0]) goto LAB_00538ec8;
                    /* try { // try from 00538dac to 00538dcb has its CatchHandler @ 00538df4 */
        FUN_00546ac8();
        goto LAB_00538db4;
      }
      goto LAB_00538ec8;
    }
    uVar13 = local_220;
    if (-1 < (long)local_218) {
      uVar13 = local_218 >> 0x38;
    }
    if (((uVar13 == 0) || (uVar29 == 0)) || (iVar10 != local_210)) goto LAB_00537f6c;
    if (puVar27 == local_2a0) {
      uVar13 = (long)local_2a0 - (long)__ptr;
      sVar4 = 4;
      if (uVar13 != 0) {
        sVar4 = uVar13 * 2;
      }
      if (0x7ffffffffffffffe < uVar13) {
        sVar4 = 0xffffffffffffffff;
      }
      if (local_2b0 == FUN_00535690) {
        __ptr = (uint *)malloc(sVar4);
      }
      else {
        __ptr = (uint *)realloc(__ptr,sVar4);
      }
      if (__ptr == (uint *)0x0) goto LAB_00538d80;
      puVar27 = (uint *)((long)__ptr + uVar13);
      local_2a0 = (uint *)((long)__ptr + (sVar4 & 0xfffffffffffffffc));
      local_2b0 = (code *)PTR_free_00d51ac0;
    }
    puVar31 = puVar27 + 1;
    *puVar27 = uVar29;
    uVar29 = 0;
LAB_00537ecc:
    plVar12 = (long *)*param_1;
    puVar27 = puVar31;
    if (plVar12[3] == plVar12[4]) {
                    /* try { // try from 00537ee4 to 00537ee7 has its CatchHandler @ 00538e18 */
      (**(code **)(*plVar12 + 0x50))();
    }
    else {
      plVar12[3] = plVar12[3] + 4;
    }
    goto LAB_00537c7c;
  }
switchD_00537c4c_default:
  uVar32 = uVar32 + 1;
  if (uVar32 == 4) goto LAB_0053896c;
  goto LAB_00537ba0;
LAB_00537f6c:
  puVar31 = puVar27;
  if ((__ptr != puVar27) && (uVar29 != 0)) {
    if (puVar27 == local_2a0) {
      uVar13 = (long)local_2a0 - (long)__ptr;
      sVar4 = 4;
      if (uVar13 != 0) {
        sVar4 = uVar13 * 2;
      }
      if (0x7ffffffffffffffe < uVar13) {
        sVar4 = 0xffffffffffffffff;
      }
      if (local_2b0 == FUN_00535690) {
        __ptr = (uint *)malloc(sVar4);
      }
      else {
        __ptr = (uint *)realloc(__ptr,sVar4);
      }
      if (__ptr == (uint *)0x0) {
LAB_00538db4:
        if (*(long *)(lVar6 + 0x28) == local_70[0]) {
          FUN_00546ac8();
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00538c90 with catch @ 00538dcc */
          FUN_004e7ed8();
        }
        goto LAB_00538ec8;
      }
      puVar27 = (uint *)((long)__ptr + uVar13);
      local_2a0 = (uint *)((long)__ptr + (sVar4 & 0xfffffffffffffffc));
      local_2b0 = (code *)PTR_free_00d51ac0;
    }
    puVar31 = puVar27 + 1;
    *puVar27 = uVar29;
  }
  if (0 < local_28c) {
    plVar12 = (long *)*param_1;
    if (plVar12 != (long *)0x0) {
      if ((int *)plVar12[3] == (int *)plVar12[4]) {
                    /* try { // try from 0053853c to 005385e7 has its CatchHandler @ 00538dd4 */
        iVar10 = (**(code **)(*plVar12 + 0x48))();
      }
      else {
        iVar10 = *(int *)plVar12[3];
      }
      if (iVar10 != -1) {
        bVar7 = *param_1 == 0;
        goto joined_r0x00538524;
      }
      *param_1 = 0;
    }
    bVar7 = true;
joined_r0x00538524:
    if (plVar11 == (long *)0x0) {
      if (bVar7 != false) goto LAB_00538c08;
      plVar12 = (long *)0x0;
    }
    else {
      if ((int *)plVar11[3] == (int *)plVar11[4]) {
        iVar10 = (**(code **)(*plVar11 + 0x48))(plVar11);
      }
      else {
        iVar10 = *(int *)plVar11[3];
      }
      plVar12 = (long *)0x0;
      if (iVar10 != -1) {
        plVar12 = plVar11;
      }
      if (bVar7 == (iVar10 == -1)) goto LAB_00538c08;
    }
    plVar11 = (long *)*param_1;
    if ((int *)plVar11[3] == (int *)plVar11[4]) {
      iVar10 = (**(code **)(*plVar11 + 0x48))();
    }
    else {
      iVar10 = *(int *)plVar11[3];
    }
    if (iVar10 == local_20c) {
      plVar16 = (long *)*param_1;
      plVar11 = plVar12;
      if (plVar16[3] == plVar16[4]) {
        (**(code **)(*plVar16 + 0x50))();
      }
      else {
        plVar16[3] = plVar16[3] + 4;
      }
joined_r0x005385f0:
      plVar12 = plVar11;
      if (0 < local_28c) {
        do {
          plVar11 = (long *)*param_1;
          if (plVar11 == (long *)0x0) {
joined_r0x00538628:
            bVar7 = true;
            if (plVar12 != (long *)0x0) goto LAB_0053865c;
LAB_0053862c:
            if (bVar7 != false) goto LAB_00538c08;
            plVar11 = (long *)0x0;
          }
          else {
            if ((int *)plVar11[3] == (int *)plVar11[4]) {
                    /* try { // try from 00538640 to 005387cf has its CatchHandler @ 00538e14 */
              iVar10 = (**(code **)(*plVar11 + 0x48))();
            }
            else {
              iVar10 = *(int *)plVar11[3];
            }
            if (iVar10 == -1) {
              *param_1 = 0;
              goto joined_r0x00538628;
            }
            bVar7 = *param_1 == 0;
            if (plVar12 == (long *)0x0) goto LAB_0053862c;
LAB_0053865c:
            if ((int *)plVar12[3] == (int *)plVar12[4]) {
              iVar10 = (**(code **)(*plVar12 + 0x48))(plVar12);
            }
            else {
              iVar10 = *(int *)plVar12[3];
            }
            plVar11 = (long *)0x0;
            if (iVar10 != -1) {
              plVar11 = plVar12;
            }
            if (bVar7 == (iVar10 == -1)) goto LAB_00538c08;
          }
          plVar12 = (long *)*param_1;
          if ((undefined4 *)plVar12[3] == (undefined4 *)plVar12[4]) {
            uVar9 = (**(code **)(*plVar12 + 0x48))();
          }
          else {
            uVar9 = *(undefined4 *)plVar12[3];
          }
          uVar13 = (**(code **)(*param_8 + 0x18))(param_8,0x40,uVar9);
          if ((uVar13 & 1) == 0) goto LAB_00538c08;
          piVar17 = (int *)*param_10;
          if (piVar17 == local_298) {
            uVar13 = (long)local_298 - *param_9;
            sVar4 = 4;
            if (uVar13 != 0) {
              sVar4 = uVar13 * 2;
            }
            if (0x7ffffffffffffffe < uVar13) {
              sVar4 = 0xffffffffffffffff;
            }
            if ((code *)param_9[1] == FUN_00535690) {
              pvVar14 = malloc(sVar4);
            }
            else {
              pvVar14 = realloc((void *)*param_9,sVar4);
            }
            if (pvVar14 == (void *)0x0) goto LAB_00538d98;
            piVar17 = (int *)((long)pvVar14 + uVar13);
            *param_9 = (long)pvVar14;
            param_9[1] = (long)PTR_free_00d51ac0;
            *param_10 = (long)piVar17;
            local_298 = (int *)(*param_9 + (sVar4 & 0xfffffffffffffffc));
          }
          plVar12 = (long *)*param_1;
          if ((int *)plVar12[3] == (int *)plVar12[4]) {
            iVar10 = (**(code **)(*plVar12 + 0x48))();
            piVar17 = (int *)*param_10;
          }
          else {
            iVar10 = *(int *)plVar12[3];
          }
          *piVar17 = iVar10;
          *param_10 = (long)(piVar17 + 1);
          plVar12 = (long *)*param_1;
          local_28c = local_28c + -1;
          if (plVar12[3] == plVar12[4]) goto code_r0x005387c4;
          plVar12[3] = plVar12[3] + 4;
          plVar12 = plVar11;
          if (local_28c < 1) break;
        } while( true );
      }
      goto LAB_00537b80;
    }
    goto LAB_00538c08;
  }
LAB_00537b80:
  if (*param_10 == *param_9) goto LAB_00538c08;
  goto switchD_00537c4c_default;
code_r0x005387c4:
  (**(code **)(*plVar12 + 0x50))();
  goto joined_r0x005385f0;
LAB_0053896c:
  if (local_2c0 != (int *******)0x0) {
    ppppppiVar30 = local_2c0[1];
    if (-1 < (char)*(byte *)((long)local_2c0 + 0x17)) {
      ppppppiVar30 = (int ******)(ulong)*(byte *)((long)local_2c0 + 0x17);
    }
    if ((int ******)0x1 < ppppppiVar30) {
      ppppppiVar30 = (int ******)0x1;
      do {
        plVar12 = (long *)*param_1;
        if (plVar12 == (long *)0x0) {
joined_r0x005389e8:
          bVar7 = true;
          if (plVar11 != (long *)0x0) goto LAB_00538a1c;
LAB_005389ec:
          if (bVar7 != false) goto LAB_00538c08;
          plVar12 = (long *)0x0;
        }
        else {
          if ((int *)plVar12[3] == (int *)plVar12[4]) {
                    /* try { // try from 00538a00 to 00538ac7 has its CatchHandler @ 00538df8 */
            iVar10 = (**(code **)(*plVar12 + 0x48))();
          }
          else {
            iVar10 = *(int *)plVar12[3];
          }
          if (iVar10 == -1) {
            *param_1 = 0;
            goto joined_r0x005389e8;
          }
          bVar7 = *param_1 == 0;
          if (plVar11 == (long *)0x0) goto LAB_005389ec;
LAB_00538a1c:
          if ((int *)plVar11[3] == (int *)plVar11[4]) {
            iVar10 = (**(code **)(*plVar11 + 0x48))(plVar11);
          }
          else {
            iVar10 = *(int *)plVar11[3];
          }
          plVar12 = (long *)0x0;
          if (iVar10 != -1) {
            plVar12 = plVar11;
          }
          if (bVar7 == (iVar10 == -1)) goto LAB_00538c08;
        }
        plVar11 = (long *)*param_1;
        if ((int *)plVar11[3] == (int *)plVar11[4]) {
          iVar10 = (**(code **)(*plVar11 + 0x48))();
        }
        else {
          iVar10 = *(int *)plVar11[3];
        }
        bVar18 = *(byte *)((long)local_2c0 + 0x17);
        ppppppiVar2 = local_2c0[1];
        if (-1 < (char)bVar18) {
          ppppppiVar2 = (int ******)(ulong)bVar18;
        }
        if (ppppppiVar2 < ppppppiVar30) {
          if (*(long *)(lVar6 + 0x28) == local_70[0]) {
                    /* try { // try from 00538ce0 to 00538d07 has its CatchHandler @ 00538ed8 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0xd4e,
                       "__pos <= size()","string index out of bounds");
          }
          goto LAB_00538ec8;
        }
        pppppppiVar25 = (int *******)*local_2c0;
        if (-1 < (char)bVar18) {
          pppppppiVar25 = local_2c0;
        }
        if (iVar10 != *(int *)((long)pppppppiVar25 + (long)ppppppiVar30 * 4)) goto LAB_00538c08;
        plVar11 = (long *)*param_1;
        if (plVar11[3] == plVar11[4]) {
          (**(code **)(*plVar11 + 0x50))();
        }
        else {
          plVar11[3] = plVar11[3] + 4;
        }
        ppppppiVar30 = (int ******)((long)ppppppiVar30 + 1U & 0xffffffff);
        ppppppiVar2 = local_2c0[1];
        if (-1 < (char)*(byte *)((long)local_2c0 + 0x17)) {
          ppppppiVar2 = (int ******)(ulong)*(byte *)((long)local_2c0 + 0x17);
        }
        plVar11 = plVar12;
      } while (ppppppiVar30 < ppppppiVar2);
    }
  }
  if (__ptr == puVar31) {
    uVar9 = 1;
    __ptr = puVar31;
  }
  else {
    uVar32 = local_220;
    if (-1 < (long)local_218) {
      uVar32 = (ulong)local_218._7_1_;
    }
    if ((4 < (long)puVar31 - (long)__ptr) && (uVar32 != 0)) {
      puVar31 = puVar31 + -1;
      puVar23 = puVar31;
      puVar27 = __ptr;
      if (__ptr < puVar31) {
        do {
          puVar21 = puVar27 + 1;
          uVar29 = *puVar27;
          *puVar27 = *puVar23;
          puVar24 = puVar23 + -1;
          *puVar23 = uVar29;
          puVar23 = puVar24;
          puVar27 = puVar21;
        } while (puVar21 < puVar24);
        pppppppbVar3 = local_228;
        if (-1 < (long)local_218) {
          pppppppbVar3 = (byte *******)&local_228;
        }
        pppppppbVar22 = pppppppbVar3;
        if (__ptr < puVar31) {
          puVar27 = __ptr;
          uVar32 = local_220;
          if (-1 < (long)local_218) {
            uVar32 = (ulong)local_218._7_1_;
          }
          do {
            bVar18 = *(byte *)pppppppbVar22;
            if (((bVar18 != 0) && (bVar18 != 0xff)) && (*puVar27 != (uint)bVar18))
            goto LAB_00538c08;
            puVar27 = puVar27 + 1;
            if (1 < (long)((long)pppppppbVar3 + (uVar32 - (long)pppppppbVar22))) {
              pppppppbVar22 = (byte *******)((long)pppppppbVar22 + 1);
            }
          } while (puVar27 < puVar31);
        }
      }
      else {
        pppppppbVar22 = local_228;
        if (-1 < (long)local_218) {
          pppppppbVar22 = (byte *******)&local_228;
        }
      }
      bVar18 = *(byte *)pppppppbVar22;
      if (((bVar18 != 0) && (bVar18 != 0xff)) && ((uint)bVar18 <= *puVar31 - 1)) {
LAB_00538c08:
        uVar9 = 0;
        *param_6 = *param_6 | 4;
        goto joined_r0x00538bbc;
      }
    }
    uVar9 = 1;
  }
joined_r0x00538bbc:
  if ((long)local_278 < 0) {
    operator_delete(local_288);
  }
  if ((long)local_260 < 0) {
    operator_delete(local_270);
  }
  if ((long)local_248 < 0) {
    operator_delete(local_258);
  }
  if ((long)local_230 < 0) {
    operator_delete(local_240);
  }
  if ((long)local_218 < 0) {
    operator_delete(local_228);
  }
  if (__ptr != (uint *)0x0) {
                    /* try { // try from 00538c90 to 00538c9b has its CatchHandler @ 00538dcc */
    (*local_2b0)(__ptr);
  }
  goto LAB_00538c9c;
}


// ===== 00538edc  FUN_00538edc =====

long * FUN_00538edc(undefined8 param_1,long *param_2,long *param_3,uint param_4,long param_5,
                   uint *param_6,undefined8 *param_7)

{
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  int *piVar6;
  long *plVar7;
  bool bVar8;
  undefined4 uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long *local_248;
  long local_240;
  int *local_238;
  code *local_230;
  long *local_228;
  undefined8 *local_220;
  code *pcStack_218;
  undefined8 local_210;
  undefined8 ***local_208;
  undefined8 **local_200;
  int local_1f8 [100];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_238 = local_1f8;
  local_230 = FUN_00535690;
                    /* try { // try from 00538f30 to 00538f3b has its CatchHandler @ 00539268 */
  local_228 = param_2;
  FUN_00520ce8(&local_248,param_5);
  plVar15 = local_248;
  local_210 = 0;
  local_220 = &DAT_00d61be8;
  pcStack_218 = FUN_0053d0c8;
  if (DAT_00d61be8 != -1) {
    local_200 = &local_220;
    local_208 = &local_200;
                    /* try { // try from 00538f70 to 00538f87 has its CatchHandler @ 00539274 */
    FUN_0054698c(&DAT_00d61be8,&local_208,FUN_005459e0);
  }
  lVar14 = plVar15[2];
  if (((ulong)(plVar15[3] - lVar14 >> 3) <= (long)DAT_00d61bf0 - 1U) ||
     (plVar15 = *(long **)(lVar14 + ((long)DAT_00d61bf0 - 1U) * 8), plVar15 == (long *)0x0)) {
    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 00539258 to 0053925b has its CatchHandler @ 00539274 */
      uVar12 = FUN_0053cd4c();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005390f0 with catch @ 0053925c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00538f70 with catch @ 00539274
                       catch(type#1 @ 00000000) { ... } // from try @ 00539258 with catch @ 00539274
                        */
      plVar15 = local_248 + 1;
      do {
        lVar14 = *plVar15;
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar8) {
          *plVar15 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*local_248 + 0x10))();
      }
      piVar6 = local_238;
      local_238 = (int *)0x0;
      if (piVar6 != (int *)0x0) {
                    /* try { // try from 005392b0 to 005392b3 has its CatchHandler @ 005392d0 */
        (*local_230)();
      }
      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00d0fa5c(uVar12);
      }
    }
    goto LAB_005392cc;
  }
  local_220 = (undefined8 *)((ulong)local_220 & 0xffffffffffffff00);
                    /* try { // try from 00538fb8 to 00539083 has its CatchHandler @ 00539270 */
  uVar11 = FUN_005379e8(&local_228,param_3,param_4 & 1,&local_248,*(undefined4 *)(param_5 + 8),
                        param_6,&local_220,plVar15,&local_238,&local_240,&local_68);
  if ((uVar11 & 1) != 0) {
    if (*(char *)((long)param_7 + 0x17) < '\0') {
      *(undefined4 *)*param_7 = 0;
      param_7[1] = 0;
    }
    else {
      *(undefined4 *)param_7 = 0;
      *(undefined1 *)((long)param_7 + 0x17) = 0;
    }
    if ((char)local_220 != '\0') {
      uVar9 = (**(code **)(*plVar15 + 0x58))(plVar15,0x2d);
      bVar2 = *(byte *)((long)param_7 + 0x17);
      if ((char)bVar2 < '\0') {
        uVar11 = param_7[1];
        uVar16 = (param_7[2] & 0x7fffffffffffffff) - 1;
        if (uVar11 == uVar16) goto LAB_00539064;
LAB_00539088:
        param_7[1] = uVar11 + 1;
        puVar13 = (undefined8 *)*param_7;
      }
      else {
        if (bVar2 == 4) {
          uVar16 = 4;
LAB_00539064:
          uVar11 = uVar16;
          FUN_00548618(param_7,uVar11,1,uVar11,uVar11,0,0);
          goto LAB_00539088;
        }
        if (3 < bVar2) {
          if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 00539220 to 00539247 has its CatchHandler @ 005392d4 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_005392cc;
        }
        uVar11 = (ulong)bVar2;
        *(byte *)((long)param_7 + 0x17) = bVar2 + 1;
        puVar13 = param_7;
      }
      puVar1 = (undefined4 *)((long)puVar13 + uVar11 * 4);
      *puVar1 = uVar9;
      puVar1[1] = 0;
    }
                    /* try { // try from 005390bc to 005390c7 has its CatchHandler @ 00539260 */
    iVar10 = (**(code **)(*plVar15 + 0x58))(plVar15,0x30);
    for (piVar6 = local_238; (piVar6 < (int *)(local_240 + -4) && (*piVar6 == iVar10));
        piVar6 = piVar6 + 1) {
    }
                    /* try { // try from 005390f0 to 005390fb has its CatchHandler @ 0053925c */
    FUN_005392d8(param_7,piVar6);
  }
  if (local_228 == (long *)0x0) {
joined_r0x0053911c:
    bVar8 = true;
    bVar5 = true;
    if (param_3 != (long *)0x0) goto LAB_00539148;
LAB_00539208:
    if (bVar5) goto LAB_0053917c;
  }
  else {
    if ((int *)local_228[3] == (int *)local_228[4]) {
                    /* try { // try from 0053912c to 0053916b has its CatchHandler @ 00539270 */
      iVar10 = (**(code **)(*local_228 + 0x48))();
    }
    else {
      iVar10 = *(int *)local_228[3];
    }
    if (iVar10 == -1) {
      local_228 = (long *)0x0;
      goto joined_r0x0053911c;
    }
    bVar8 = local_228 == (long *)0x0;
    bVar5 = bVar8;
    if (param_3 == (long *)0x0) goto LAB_00539208;
LAB_00539148:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar10 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar10 = *(int *)param_3[3];
    }
    if (!(bool)(bVar8 ^ iVar10 == -1)) {
LAB_0053917c:
      *param_6 = *param_6 | 2;
    }
  }
  plVar7 = local_228;
  plVar15 = local_248 + 1;
  do {
    lVar14 = *plVar15;
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar8) {
      *plVar15 = lVar14 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar14 == 0) {
    (**(code **)(*local_248 + 0x10))();
  }
  piVar6 = local_238;
  local_238 = (int *)0x0;
  if (piVar6 != (int *)0x0) {
                    /* try { // try from 005391c4 to 005391c7 has its CatchHandler @ 00539264 */
    (*local_230)();
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return plVar7;
  }
LAB_005392cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005392d8  FUN_005392d8 =====

ulong * FUN_005392d8(ulong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  size_t __n;
  ulong *puVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 **ppuVar7;
  undefined8 uVar8;
  ulong *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  char cVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 *local_70;
  ulong local_68;
  undefined8 uStack_60;
  long local_58;
  
  ppuVar7 = &local_70;
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  bVar3 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
  }
  lVar14 = (param_1[2] & 0x7fffffffffffffff) - 1;
  if (-1 < (char)bVar3) {
    lVar14 = 4;
  }
  uVar4 = (long)param_3 - (long)param_2;
  if (uVar4 != 0) {
    puVar9 = (ulong *)*param_1;
    uVar19 = (long)uVar4 >> 2;
    puVar2 = puVar9;
    if (-1 < (char)bVar3) {
      puVar2 = param_1;
    }
    if ((param_2 < puVar2) || ((undefined4 *)((long)puVar2 + uVar1 * 4) < param_2)) {
      if (lVar14 - uVar1 < uVar19) {
        FUN_00548618(param_1,lVar14,(uVar1 + uVar19) - lVar14,uVar1,uVar1,0,0);
        cVar12 = *(char *)((long)param_1 + 0x17);
        puVar9 = (ulong *)*param_1;
      }
      else {
        cVar12 = (char)(param_1[2] >> 0x38);
      }
      if (-1 < cVar12) {
        puVar9 = param_1;
      }
      puVar10 = (undefined4 *)((long)puVar9 + uVar1 * 4);
      if ((uVar4 - 4 < 0x1c) || ((long)puVar9 + (uVar1 * 4 - (long)param_2) < 0x20)) {
LAB_005394b0:
        do {
          puVar13 = param_2 + 1;
          puVar11 = puVar10 + 1;
          *puVar10 = *param_2;
          puVar10 = puVar11;
          param_2 = puVar13;
        } while (puVar13 != param_3);
      }
      else {
        puVar16 = (undefined8 *)((long)puVar9 + uVar1 * 4 + 0x10);
        uVar4 = (uVar4 - 4 >> 2) + 1;
        uVar15 = uVar4 & 0x7ffffffffffffff8;
        puVar10 = puVar10 + uVar15;
        puVar17 = (undefined8 *)(param_2 + 4);
        uVar18 = uVar15;
        do {
          puVar6 = puVar17 + -1;
          uVar8 = puVar17[-2];
          uVar21 = puVar17[1];
          uVar20 = *puVar17;
          puVar17 = puVar17 + 4;
          uVar18 = uVar18 - 8;
          puVar16[-1] = *puVar6;
          puVar16[-2] = uVar8;
          puVar16[1] = uVar21;
          *puVar16 = uVar20;
          puVar16 = puVar16 + 4;
        } while (uVar18 != 0);
        param_2 = param_2 + uVar15;
        if (uVar4 != uVar15) goto LAB_005394b0;
      }
      *puVar10 = 0;
      uVar1 = uVar1 + uVar19;
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        param_1[1] = uVar1;
      }
      else {
        if (4 < uVar1) {
          if (*(long *)(lVar5 + 0x28) == local_58) {
                    /* try { // try from 00539524 to 0053954b has its CatchHandler @ 00539594 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00539590;
        }
        *(char *)((long)param_1 + 0x17) = (char)uVar1;
      }
    }
    else {
      if ((long)uVar4 < 0) {
        if (*(long *)(lVar5 + 0x28) == local_58) {
          uVar8 = FUN_00545334(&local_70);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00539450 with catch @ 00539564
                        */
          if ((long)uStack_60 < 0) {
            operator_delete(local_70);
          }
          if (*(long *)(lVar5 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
            FUN_00d0fa5c(uVar8);
          }
        }
        goto LAB_00539590;
      }
      if (uVar4 < 0x14) {
        uStack_60 = CONCAT17((char)(uVar4 >> 2),(undefined7)uStack_60);
      }
      else {
        uVar1 = (uVar19 | 3) + 1;
        ppuVar7 = (undefined1 **)operator_new(uVar1 * 4);
        uStack_60 = uVar1 | 0x8000000000000000;
        local_70 = (undefined1 *)ppuVar7;
        local_68 = uVar19;
      }
      __n = (uVar4 - 4 & 0xfffffffffffffffc) + 4;
      memcpy(ppuVar7,param_2,__n);
      *(undefined4 *)((long)ppuVar7 + __n) = 0;
      uVar1 = local_68;
      ppuVar7 = (undefined1 **)local_70;
      if (-1 < (long)uStack_60) {
        uVar1 = uStack_60 >> 0x38;
        ppuVar7 = &local_70;
      }
                    /* try { // try from 00539450 to 00539457 has its CatchHandler @ 00539564 */
      FUN_00548978(param_1,ppuVar7,uVar1);
      if ((long)uStack_60 < 0) {
        operator_delete(local_70);
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return param_1;
  }
LAB_00539590:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00539598  FUN_00539598 =====

void FUN_00539598(ulong param_1,long *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                 undefined8 *param_9,undefined4 *param_10)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *local_90;
  code *pcStack_88;
  undefined8 local_80;
  undefined1 **local_78;
  undefined1 *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar5 = *param_2;
  if ((param_1 & 1) == 0) {
    local_80 = 0;
    local_90 = &DAT_00d61b20;
    pcStack_88 = FUN_0053d0c8;
    if (DAT_00d61b20 != -1) {
      local_78 = &local_70;
      local_70 = (undefined1 *)&local_90;
      FUN_0054698c(&DAT_00d61b20,&local_78,FUN_005459e0);
    }
    lVar4 = *(long *)(lVar5 + 0x10);
    lVar5 = *(long *)(lVar5 + 0x18);
    iVar1 = DAT_00d61b28;
  }
  else {
    local_80 = 0;
    local_90 = &DAT_00d61b30;
    pcStack_88 = FUN_0053d0c8;
    if (DAT_00d61b30 != -1) {
      local_78 = &local_70;
      local_70 = (undefined1 *)&local_90;
      FUN_0054698c(&DAT_00d61b30,&local_78,FUN_005459e0);
    }
    lVar4 = *(long *)(lVar5 + 0x10);
    lVar5 = *(long *)(lVar5 + 0x18);
    iVar1 = DAT_00d61b38;
  }
  if (((long)iVar1 - 1U < (ulong)(lVar5 - lVar4 >> 3)) &&
     (plVar6 = *(long **)(lVar4 + ((long)iVar1 - 1U) * 8), plVar6 != (long *)0x0)) {
    uVar3 = (**(code **)(*plVar6 + 0x58))(plVar6);
    *param_3 = uVar3;
    (**(code **)(*plVar6 + 0x40))(&local_90,plVar6);
    if (*(char *)((long)param_9 + 0x17) < '\0') {
      operator_delete((void *)*param_9);
    }
    param_9[1] = pcStack_88;
    *param_9 = local_90;
    param_9[2] = local_80;
    (**(code **)(*plVar6 + 0x38))(&local_90,plVar6);
    if (*(char *)((long)param_8 + 0x17) < '\0') {
      operator_delete((void *)*param_8);
    }
    param_8[1] = pcStack_88;
    *param_8 = local_90;
    param_8[2] = local_80;
    uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6);
    *param_4 = uVar3;
    uVar3 = (**(code **)(*plVar6 + 0x20))(plVar6);
    *param_5 = uVar3;
    (**(code **)(*plVar6 + 0x28))(&local_90,plVar6);
    if (*(char *)((long)param_6 + 0x17) < '\0') {
      operator_delete((void *)*param_6);
    }
    param_6[1] = pcStack_88;
    *param_6 = local_90;
    param_6[2] = local_80;
    (**(code **)(*plVar6 + 0x30))(&local_90,plVar6);
    if (*(char *)((long)param_7 + 0x17) < '\0') {
      operator_delete((void *)*param_7);
    }
    param_7[1] = pcStack_88;
    *param_7 = local_90;
    param_7[2] = local_80;
    uVar3 = (**(code **)(*plVar6 + 0x48))(plVar6);
    *param_10 = uVar3;
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_68) {
    FUN_0053cd4c();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00539820  FUN_00539820 =====

undefined8
FUN_00539820(char *param_1,undefined8 param_2,undefined8 param_3,uint param_4,long param_5,
            undefined4 param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  __locale_t p_Var11;
  undefined *unaff_x19;
  long lVar12;
  undefined8 **__ptr;
  long *plVar13;
  undefined8 **ppuVar14;
  undefined1 *local_240;
  char *local_230;
  undefined8 local_220;
  undefined8 uStack_218;
  int local_20c;
  void *local_208;
  ulong local_200;
  undefined8 local_1f8;
  undefined8 ***local_1f0;
  ulong local_1e8;
  undefined8 local_1e0;
  undefined8 **local_1d8;
  undefined8 uStack_1d0;
  long local_1c8;
  undefined1 local_1c0 [4];
  undefined1 local_1bc [4];
  long *local_1b8;
  char *local_1b0;
  undefined1 auStack_1a8 [8];
  undefined8 *local_1a0;
  code *pcStack_198;
  undefined8 local_190;
  undefined1 auStack_138 [100];
  char local_d4 [100];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_1b0 = local_d4;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar6 = snprintf(local_d4,100,"%.0Lf");
  if (uVar6 < 100) {
    puVar8 = auStack_138;
    local_240 = (undefined1 *)0x0;
    local_230 = (char *)0x0;
    goto LAB_005398f4;
  }
  unaff_x19 = &DAT_00d61000;
  local_230 = param_1;
  if ((DAT_00d61ba8 & 1) == 0) goto LAB_00539bfc;
  do {
    puVar1 = (undefined8 *)(unaff_x19 + 0xba0);
                    /* try { // try from 005398a0 to 005398b7 has its CatchHandler @ 00539cd4 */
    unaff_x19 = (undefined *)0x0;
    uVar6 = FUN_00539db0(local_230,&local_1b0,*puVar1,"%.0Lf");
    if (uVar6 == 0xffffffff) {
      if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 00539c48 to 00539c6b has its CatchHandler @ 00539cd4 */
        FUN_00546ac8();
LAB_00539c50:
        if (*(long *)(lVar4 + 0x28) == local_70) {
          FUN_00546ac8();
LAB_00539c6c:
          if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 00539c80 to 00539c83 has its CatchHandler @ 00539c98 */
            uVar10 = FUN_00546ac8();
                    /* catch() { ... } // from try @ 00539c0c with catch @ 00539c84 */
            FUN_0054ffbc(&DAT_00d61ba8);
            if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
              FUN_00d0fa5c(uVar10);
            }
          }
        }
      }
LAB_00539dac:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_230 = local_1b0;
    puVar8 = (undefined1 *)malloc((long)(int)uVar6);
    local_240 = puVar8;
    if (puVar8 == (undefined1 *)0x0) goto LAB_00539c50;
LAB_005398f4:
                    /* try { // try from 005398f4 to 005398ff has its CatchHandler @ 00539cc4 */
    FUN_00520ce8(&local_1b8,param_5);
    plVar13 = local_1b8;
    local_190 = 0;
    local_1a0 = &DAT_00d61bf8;
    pcStack_198 = FUN_0053d0c8;
    if (DAT_00d61bf8 != -1) {
      local_1d8 = &local_1a0;
      local_1f0 = &local_1d8;
                    /* try { // try from 00539938 to 00539993 has its CatchHandler @ 00539d30 */
      FUN_0054698c(&DAT_00d61bf8,&local_1f0,FUN_005459e0);
    }
    lVar12 = plVar13[2];
    if (((long)DAT_00d61c00 - 1U < (ulong)(plVar13[3] - lVar12 >> 3)) &&
       (plVar13 = *(long **)(lVar12 + ((long)DAT_00d61c00 - 1U) * 8), plVar13 != (long *)0x0)) {
      lVar12 = (long)(int)uVar6;
      (**(code **)(*plVar13 + 0x40))(plVar13,local_1b0,local_1b0 + lVar12,puVar8);
      if ((int)uVar6 < 1) {
        bVar5 = false;
      }
      else {
        bVar5 = *local_1b0 == '-';
      }
      local_1d8 = (undefined8 **)0x0;
      uStack_1d0 = 0;
      local_1c8 = 0;
      local_1f0 = (undefined8 ***)0x0;
      local_1e8 = 0;
      local_1e0 = 0;
      local_208 = (void *)0x0;
      local_200 = 0;
      local_1f8 = 0;
                    /* try { // try from 005399d0 to 005399ff has its CatchHandler @ 00539c9c */
      FUN_00539eb0(param_4 & 1,bVar5,&local_1b8,auStack_1a8,local_1bc,local_1c0,&local_1d8,
                   &local_1f0,&local_208,&local_20c);
      if (local_20c < (int)uVar6) {
        uVar9 = local_200;
        if (-1 < local_1f8) {
          uVar9 = (ulong)local_1f8._7_1_;
        }
        uVar2 = local_1e8;
        if (-1 < local_1e0) {
          uVar2 = (ulong)local_1e0._7_1_;
        }
        uVar9 = (lVar12 * 2 - (long)local_20c) + uVar9 + uVar2 + 1;
        if (uVar9 < 0x65) goto LAB_00539a50;
LAB_00539a98:
        __ptr = (undefined8 **)malloc(uVar9);
        ppuVar14 = __ptr;
        if (__ptr == (undefined8 **)0x0) goto LAB_00539c6c;
      }
      else {
        uVar9 = local_200;
        if (-1 < local_1f8) {
          uVar9 = (ulong)local_1f8._7_1_;
        }
        uVar2 = local_1e8;
        if (-1 < local_1e0) {
          uVar2 = (ulong)local_1e0._7_1_;
        }
        uVar9 = (long)local_20c + uVar9 + uVar2 + 2;
        if (100 < uVar9) goto LAB_00539a98;
LAB_00539a50:
        __ptr = (undefined8 **)0x0;
        ppuVar14 = &local_1a0;
      }
                    /* try { // try from 00539ab8 to 00539b13 has its CatchHandler @ 00539ce8 */
      FUN_0053a124(ppuVar14,&uStack_218,&local_220,*(undefined4 *)(param_5 + 8),puVar8,
                   puVar8 + lVar12,plVar13,bVar5,auStack_1a8,local_1bc[0],local_1c0[0],&local_1d8,
                   &local_1f0,&local_208,local_20c);
      uVar10 = FUN_00428a94(param_3,ppuVar14,uStack_218,local_220,param_5,param_6);
      if (__ptr != (undefined8 **)0x0) {
        free(__ptr);
      }
      if (local_1f8 < 0) {
        operator_delete(local_208);
      }
      if (local_1e0 < 0) {
        operator_delete(local_1f0);
      }
      if (local_1c8 < 0) {
        operator_delete(local_1d8);
      }
      plVar13 = local_1b8 + 1;
      do {
        lVar12 = *plVar13;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*local_1b8 + 0x10))();
      }
      if (local_240 != (undefined1 *)0x0) {
        free(local_240);
      }
      if (local_230 != (char *)0x0) {
        free(local_230);
      }
      if (*(long *)(lVar4 + 0x28) == local_70) {
        return uVar10;
      }
      goto LAB_00539dac;
    }
    if (*(long *)(lVar4 + 0x28) != local_70) goto LAB_00539dac;
                    /* try { // try from 00539bf8 to 00539bfb has its CatchHandler @ 00539d30 */
    FUN_0053cd4c();
LAB_00539bfc:
    iVar7 = FUN_0054fdd4(&DAT_00d61ba8);
    if (iVar7 != 0) {
                    /* try { // try from 00539c0c to 00539c1f has its CatchHandler @ 00539c84 */
      p_Var11 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      *(__locale_t *)(unaff_x19 + 0xba0) = p_Var11;
      FUN_0054ff1c(&DAT_00d61ba8);
    }
  } while( true );
}


// ===== 00539db0  FUN_00539db0 =====

int FUN_00539db0(char **param_1,__locale_t param_2,char *param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  __locale_t __dataset;
  long lVar3;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  __locale_t local_70;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  local_b8 = param_4;
  uStack_b0 = param_5;
  local_a8 = param_6;
  uStack_a0 = param_7;
  local_98 = param_8;
  __dataset = uselocale(param_2);
  uStack_78 = 0xffffff80ffffffd8;
                    /* try { // try from 00539e38 to 00539e47 has its CatchHandler @ 00539e88 */
  local_90 = (undefined1 *)register0x00000008;
  ppuStack_88 = &local_90;
  puStack_80 = auStack_c0;
  local_70 = __dataset;
  iVar2 = vasprintf(param_1,param_3,&local_90);
  if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 00539e50 to 00539e57 has its CatchHandler @ 00539e84 */
    uselocale(__dataset);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00539eb0  FUN_00539eb0 =====

void FUN_00539eb0(ulong param_1,ulong param_2,long *param_3,undefined4 *param_4,undefined1 *param_5,
                 undefined1 *param_6,undefined8 *param_7,undefined8 *param_8,undefined8 *param_9,
                 undefined4 *param_10)

{
  int iVar1;
  long lVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  undefined8 *local_90;
  code *pcStack_88;
  undefined8 local_80;
  undefined1 **local_78;
  undefined1 *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar7 = *param_3;
  if ((param_1 & 1) == 0) {
    local_80 = 0;
    local_90 = &DAT_00d61b00;
    pcStack_88 = FUN_0053d0c8;
    if (DAT_00d61b00 != -1) {
      local_78 = &local_70;
      local_70 = (undefined1 *)&local_90;
      FUN_0054698c(&DAT_00d61b00,&local_78,FUN_005459e0);
    }
    lVar5 = *(long *)(lVar7 + 0x10);
    lVar7 = *(long *)(lVar7 + 0x18);
    iVar1 = DAT_00d61b08;
  }
  else {
    local_80 = 0;
    local_90 = &DAT_00d61b10;
    pcStack_88 = FUN_0053d0c8;
    if (DAT_00d61b10 != -1) {
      local_78 = &local_70;
      local_70 = (undefined1 *)&local_90;
      FUN_0054698c(&DAT_00d61b10,&local_78,FUN_005459e0);
    }
    lVar5 = *(long *)(lVar7 + 0x10);
    lVar7 = *(long *)(lVar7 + 0x18);
    iVar1 = DAT_00d61b18;
  }
  if (((long)iVar1 - 1U < (ulong)(lVar7 - lVar5 >> 3)) &&
     (plVar8 = *(long **)(lVar5 + ((long)iVar1 - 1U) * 8), plVar8 != (long *)0x0)) {
    if ((param_2 & 1) == 0) {
      uVar4 = (**(code **)(*plVar8 + 0x50))(plVar8);
      *param_4 = uVar4;
      pcVar6 = *(code **)(*plVar8 + 0x38);
    }
    else {
      uVar4 = (**(code **)(*plVar8 + 0x58))(plVar8);
      *param_4 = uVar4;
      pcVar6 = *(code **)(*plVar8 + 0x40);
    }
    (*pcVar6)(&local_90,plVar8);
    if (*(char *)((long)param_9 + 0x17) < '\0') {
      operator_delete((void *)*param_9);
    }
    param_9[1] = pcStack_88;
    *param_9 = local_90;
    param_9[2] = local_80;
    uVar3 = (**(code **)(*plVar8 + 0x18))(plVar8);
    *param_5 = uVar3;
    uVar3 = (**(code **)(*plVar8 + 0x20))(plVar8);
    *param_6 = uVar3;
    (**(code **)(*plVar8 + 0x28))(&local_90,plVar8);
    if (*(char *)((long)param_7 + 0x17) < '\0') {
      operator_delete((void *)*param_7);
    }
    param_7[1] = pcStack_88;
    *param_7 = local_90;
    param_7[2] = local_80;
    (**(code **)(*plVar8 + 0x30))(&local_90,plVar8);
    if (*(char *)((long)param_8 + 0x17) < '\0') {
      operator_delete((void *)*param_8);
    }
    param_8[1] = pcStack_88;
    *param_8 = local_90;
    param_8[2] = local_80;
    uVar4 = (**(code **)(*plVar8 + 0x48))(plVar8);
    *param_10 = uVar4;
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_68) {
    FUN_0053cd4c();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0053a124  FUN_0053a124 =====

void FUN_0053a124(long param_1,long *param_2,long *param_3,uint param_4,byte *param_5,byte *param_6,
                 long *param_7,ulong param_8,long param_9,undefined1 param_10,undefined1 param_11,
                 byte *param_12,undefined8 *param_13,long *param_14,int param_15)

{
  undefined8 *__src;
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  size_t sVar4;
  int iVar5;
  undefined1 uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  uint uVar14;
  byte *pbVar15;
  long lVar16;
  int iVar17;
  void *pvVar18;
  undefined1 *puVar19;
  
  lVar16 = 0;
  *param_3 = param_1;
  do {
    switch(*(undefined1 *)(param_9 + lVar16)) {
    case 0:
      *param_2 = *param_3;
      break;
    case 1:
      lVar11 = *param_7;
      *param_2 = *param_3;
      uVar6 = (**(code **)(lVar11 + 0x38))(param_7,0x20);
      puVar19 = (undefined1 *)*param_3;
      *param_3 = (long)(puVar19 + 1);
      *puVar19 = uVar6;
      break;
    case 2:
      bVar3 = *(byte *)((long)param_13 + 0x17);
      sVar4 = param_13[1];
      if (-1 < (char)bVar3) {
        sVar4 = (ulong)bVar3;
      }
      if (((param_4 >> 9 & 1) != 0) && (sVar4 != 0)) {
        pvVar18 = (void *)*param_3;
        __src = (undefined8 *)*param_13;
        if (-1 < (char)bVar3) {
          __src = param_13;
        }
        memmove(pvVar18,__src,sVar4);
        *param_3 = (long)pvVar18 + sVar4;
      }
      break;
    case 3:
      bVar3 = *(byte *)((long)param_14 + 0x17);
      uVar13 = param_14[1];
      if (-1 < (char)bVar3) {
        uVar13 = (ulong)bVar3;
      }
      if (uVar13 != 0) {
        puVar19 = (undefined1 *)*param_3;
        plVar2 = (long *)*param_14;
        if (-1 < (char)bVar3) {
          plVar2 = param_14;
        }
        lVar11 = *plVar2;
        *param_3 = (long)(puVar19 + 1);
        *puVar19 = (char)lVar11;
      }
      break;
    case 4:
      param_5 = param_5 + (param_8 & 1);
      pbVar8 = param_5;
      if (param_5 < param_6) {
        pbVar15 = param_5;
        do {
          pbVar8 = pbVar15;
          if (((char)*pbVar15 < '\0') ||
             (((uint)*(undefined8 *)(param_7[2] + (ulong)*pbVar15 * 8) >> 6 & 1) == 0)) break;
          pbVar15 = pbVar15 + 1;
          pbVar8 = param_6;
        } while (pbVar15 < param_6);
      }
      puVar19 = (undefined1 *)*param_3;
      if (0 < param_15) {
        iVar5 = param_15;
        if (param_5 < pbVar8) {
          do {
            iVar17 = iVar5;
            pbVar8 = pbVar8 + -1;
            pbVar15 = (byte *)*param_3;
            bVar3 = *pbVar8;
            *param_3 = (long)(pbVar15 + 1);
            *pbVar15 = bVar3;
            if (pbVar8 <= param_5) break;
            iVar5 = iVar17 + -1;
          } while (iVar17 != 1);
          iVar5 = iVar17 + -1;
          if (iVar17 != 1) goto LAB_0053a354;
        }
        else {
LAB_0053a354:
          uVar6 = (**(code **)(*param_7 + 0x38))(param_7,0x30);
          if (0 < iVar5) {
            uVar7 = iVar5 + 1;
            do {
              puVar9 = (undefined1 *)*param_3;
              uVar7 = uVar7 - 1;
              *param_3 = (long)(puVar9 + 1);
              *puVar9 = uVar6;
            } while (1 < uVar7);
          }
        }
        puVar9 = (undefined1 *)*param_3;
        *param_3 = (long)(puVar9 + 1);
        *puVar9 = param_10;
      }
      if (pbVar8 == param_5) {
        uVar6 = (**(code **)(*param_7 + 0x38))(param_7,0x30);
        puVar9 = (undefined1 *)*param_3;
        *param_3 = (long)(puVar9 + 1);
        *puVar9 = uVar6;
      }
      else {
        bVar3 = param_12[0x17];
        uVar13 = *(ulong *)(param_12 + 8);
        if (-1 < (char)bVar3) {
          uVar13 = (ulong)bVar3;
        }
        if (uVar13 == 0) {
          uVar7 = 0xffffffff;
        }
        else {
          pbVar15 = *(byte **)param_12;
          if (-1 < (char)bVar3) {
            pbVar15 = param_12;
          }
          uVar7 = (uint)*pbVar15;
        }
        uVar13 = 0;
        uVar14 = 0;
        do {
          if (uVar14 == uVar7) {
            puVar9 = (undefined1 *)*param_3;
            uVar13 = (ulong)((int)uVar13 + 1);
            *param_3 = (long)(puVar9 + 1);
            *puVar9 = param_11;
            bVar3 = param_12[0x17];
            uVar1 = *(ulong *)(param_12 + 8);
            if (-1 < (char)bVar3) {
              uVar1 = (ulong)bVar3;
            }
            if (uVar13 < uVar1) {
              uVar14 = 0;
              pbVar15 = *(byte **)param_12;
              if (-1 < (char)bVar3) {
                pbVar15 = param_12;
              }
              uVar7 = (uint)pbVar15[uVar13];
              if (uVar7 == 0xff) {
                uVar7 = 0xffffffff;
              }
            }
            else {
              uVar14 = 0;
            }
          }
          pbVar15 = (byte *)*param_3;
          uVar14 = uVar14 + 1;
          pbVar8 = pbVar8 + -1;
          bVar3 = *pbVar8;
          *param_3 = (long)(pbVar15 + 1);
          *pbVar15 = bVar3;
        } while (pbVar8 != param_5);
      }
      if ((puVar19 != (undefined1 *)*param_3) &&
         (puVar9 = (undefined1 *)*param_3 + -1, puVar19 < puVar9)) {
        do {
          puVar12 = puVar19 + 1;
          uVar6 = *puVar19;
          *puVar19 = *puVar9;
          puVar10 = puVar9 + -1;
          *puVar9 = uVar6;
          puVar9 = puVar10;
          puVar19 = puVar12;
        } while (puVar12 < puVar10);
      }
    }
    lVar16 = lVar16 + 1;
    if (lVar16 == 4) {
      bVar3 = *(byte *)((long)param_14 + 0x17);
      uVar13 = param_14[1];
      if (-1 < (char)bVar3) {
        uVar13 = (ulong)bVar3;
      }
      sVar4 = uVar13 - 1;
      if (uVar13 != 0 && sVar4 != 0) {
        pvVar18 = (void *)*param_3;
        plVar2 = (long *)*param_14;
        if (-1 < (char)bVar3) {
          plVar2 = param_14;
        }
        memmove(pvVar18,(void *)((long)plVar2 + 1),sVar4);
        *param_3 = (long)pvVar18 + sVar4;
      }
      if ((param_4 & 0xb0) != 0x10) {
        if ((param_4 & 0xb0) == 0x20) {
          param_1 = *param_3;
        }
        *param_2 = param_1;
      }
      return;
    }
  } while( true );
}


// ===== 0053a560  FUN_0053a560 =====

undefined8
FUN_0053a560(undefined8 param_1,undefined8 param_2,uint param_3,long param_4,undefined4 param_5,
            long *param_6)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  char cVar7;
  ulong uVar8;
  undefined8 **__ptr;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 **ppuVar12;
  undefined8 local_150;
  undefined8 uStack_148;
  int local_13c;
  void *local_138;
  ulong local_130;
  undefined8 local_128;
  undefined8 ***local_120;
  ulong local_118;
  undefined8 local_110;
  undefined8 **local_108;
  undefined8 uStack_100;
  long local_f8;
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  long *local_e8;
  undefined1 auStack_e0 [8];
  undefined8 *local_d8;
  code *pcStack_d0;
  undefined8 local_c8;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  FUN_00520ce8(&local_e8,param_4);
  plVar11 = local_e8;
  local_c8 = 0;
  local_d8 = &DAT_00d61bf8;
  pcStack_d0 = FUN_0053d0c8;
  if (DAT_00d61bf8 != -1) {
    local_108 = &local_d8;
    local_120 = &local_108;
                    /* try { // try from 0053a5e8 to 0053a5ff has its CatchHandler @ 0053a944 */
    FUN_0054698c(&DAT_00d61bf8,&local_120,FUN_005459e0);
  }
  lVar10 = plVar11[2];
  if (((ulong)(plVar11[3] - lVar10 >> 3) <= (long)DAT_00d61c00 - 1U) ||
     (plVar11 = *(long **)(lVar10 + ((long)DAT_00d61c00 - 1U) * 8), plVar11 == (long *)0x0)) {
    if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* try { // try from 0053a8c8 to 0053a8cb has its CatchHandler @ 0053a944 */
      uVar9 = FUN_0053cd4c();
                    /* catch() { ... } // from try @ 0053a780 with catch @ 0053a8cc */
                    /* catch() { ... } // from try @ 0053a688 with catch @ 0053a8d4 */
      if (local_128 < 0) {
        operator_delete(local_138);
      }
      if (local_110 < 0) {
        operator_delete(local_120);
      }
      if (local_f8 < 0) {
        operator_delete(local_108);
      }
      plVar11 = local_e8 + 1;
      do {
        lVar10 = *plVar11;
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar10 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*local_e8 + 0x10))();
      }
      if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00d0fa5c(uVar9);
      }
    }
    goto LAB_0053a98c;
  }
  bVar4 = *(byte *)((long)param_6 + 0x17);
  uVar1 = param_6[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  if (uVar1 == 0) {
    bVar6 = false;
  }
  else {
    plVar3 = (long *)*param_6;
    if (-1 < (char)bVar4) {
      plVar3 = param_6;
    }
    lVar10 = *plVar3;
                    /* try { // try from 0053a654 to 0053a65f has its CatchHandler @ 0053a8d0 */
    cVar7 = (**(code **)(*plVar11 + 0x38))(plVar11,0x2d);
    bVar6 = (char)lVar10 == cVar7;
  }
  local_108 = (undefined8 **)0x0;
  uStack_100 = 0;
  local_f8 = 0;
  local_120 = (undefined8 ***)0x0;
  local_118 = 0;
  local_110 = 0;
  local_138 = (void *)0x0;
  local_130 = 0;
  local_128 = 0;
                    /* try { // try from 0053a688 to 0053a6b7 has its CatchHandler @ 0053a8d4 */
  FUN_00539eb0(param_3 & 1,bVar6,&local_e8,auStack_e0,local_ec,local_f0,&local_108,&local_120,
               &local_138,&local_13c);
  bVar4 = *(byte *)((long)param_6 + 0x17);
  uVar1 = param_6[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  if (local_13c < (int)uVar1) {
    uVar8 = local_130;
    if (-1 < local_128) {
      uVar8 = (ulong)local_128._7_1_;
    }
    uVar2 = local_118;
    if (-1 < local_110) {
      uVar2 = (ulong)local_110._7_1_;
    }
    uVar8 = (uVar1 * 2 - (long)local_13c) + uVar8 + uVar2 + 1;
  }
  else {
    uVar8 = local_130;
    if (-1 < local_128) {
      uVar8 = (ulong)local_128._7_1_;
    }
    uVar2 = local_118;
    if (-1 < local_110) {
      uVar2 = (ulong)local_110._7_1_;
    }
    uVar8 = (long)local_13c + uVar8 + uVar2 + 2;
  }
  if (uVar8 < 0x65) {
LAB_0053a784:
    __ptr = (undefined8 **)0x0;
    ppuVar12 = &local_d8;
  }
  else {
    __ptr = (undefined8 **)malloc(uVar8);
    ppuVar12 = __ptr;
    if (__ptr == (undefined8 **)0x0) {
      if (*(long *)(lVar5 + 0x28) != local_70) goto LAB_0053a98c;
                    /* try { // try from 0053a780 to 0053a783 has its CatchHandler @ 0053a8cc */
      FUN_00546ac8();
      goto LAB_0053a784;
    }
  }
  plVar3 = (long *)*param_6;
  if (-1 < (char)bVar4) {
    plVar3 = param_6;
  }
                    /* try { // try from 0053a7a8 to 0053a7ff has its CatchHandler @ 0053a8fc */
  FUN_0053a124(ppuVar12,&uStack_148,&local_150,*(undefined4 *)(param_4 + 8),plVar3,
               (long)plVar3 + uVar1,plVar11,bVar6,auStack_e0,local_ec[0],local_f0[0],&local_108,
               &local_120,&local_138,local_13c);
  uVar9 = FUN_00428a94(param_2,ppuVar12,uStack_148,local_150,param_4,param_5);
  if (__ptr != (undefined8 **)0x0) {
    free(__ptr);
  }
  if (local_128 < 0) {
    operator_delete(local_138);
  }
  if (local_110 < 0) {
    operator_delete(local_120);
  }
  if (local_f8 < 0) {
    operator_delete(local_108);
  }
  plVar11 = local_e8 + 1;
  do {
    lVar10 = *plVar11;
    cVar7 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar6) {
      *plVar11 = lVar10 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (lVar10 == 0) {
    (**(code **)(*local_e8 + 0x10))();
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return uVar9;
  }
LAB_0053a98c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0053a990  FUN_0053a990 =====

undefined8
FUN_0053a990(char *param_1,undefined8 param_2,undefined8 param_3,uint param_4,long param_5,
            undefined4 param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  __locale_t p_Var10;
  ulong uVar11;
  undefined *unaff_x19;
  long lVar12;
  undefined8 **__ptr;
  long *plVar13;
  undefined8 **ppuVar14;
  undefined1 *local_4a0;
  char *local_490;
  undefined8 local_478;
  undefined8 uStack_470;
  int local_464;
  void *local_460;
  ulong local_458;
  undefined8 local_450;
  undefined8 ***local_448;
  ulong local_440;
  undefined8 local_438;
  undefined8 **local_430;
  undefined8 uStack_428;
  long local_420;
  undefined4 local_418;
  undefined4 uStack_414;
  long *local_410;
  char *local_408;
  undefined1 auStack_400 [8];
  undefined8 *local_3f8;
  code *pcStack_3f0;
  undefined8 local_3e8;
  undefined1 auStack_264 [400];
  char local_d4 [100];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_408 = local_d4;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar6 = snprintf(local_d4,100,"%.0Lf");
  if (uVar6 < 100) {
    puVar8 = auStack_264;
    local_4a0 = (undefined1 *)0x0;
    local_490 = (char *)0x0;
    goto LAB_0053aa64;
  }
  unaff_x19 = &DAT_00d61000;
  local_490 = param_1;
  if ((DAT_00d61ba8 & 1) == 0) goto LAB_0053ad6c;
  do {
    puVar1 = (undefined8 *)(unaff_x19 + 0xba0);
                    /* try { // try from 0053aa10 to 0053aa27 has its CatchHandler @ 0053ae44 */
    unaff_x19 = (undefined *)0x0;
    uVar6 = FUN_00539db0(local_490,&local_408,*puVar1,"%.0Lf");
    if (uVar6 == 0xffffffff) {
      if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 0053adb8 to 0053addb has its CatchHandler @ 0053ae44 */
        FUN_00546ac8();
LAB_0053adc0:
        if (*(long *)(lVar4 + 0x28) == local_70) {
          FUN_00546ac8();
LAB_0053addc:
          if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 0053adf0 to 0053adf3 has its CatchHandler @ 0053ae08 */
            uVar9 = FUN_00546ac8();
                    /* catch() { ... } // from try @ 0053ad7c with catch @ 0053adf4 */
            FUN_0054ffbc(&DAT_00d61ba8);
            if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
              FUN_00d0fa5c(uVar9);
            }
          }
        }
      }
LAB_0053af1c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_490 = local_408;
    puVar8 = (undefined1 *)malloc(-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2);
    local_4a0 = puVar8;
    if (puVar8 == (undefined1 *)0x0) goto LAB_0053adc0;
LAB_0053aa64:
                    /* try { // try from 0053aa64 to 0053aa6f has its CatchHandler @ 0053ae34 */
    FUN_00520ce8(&local_410,param_5);
    plVar13 = local_410;
    local_3e8 = 0;
    local_3f8 = &DAT_00d61be8;
    pcStack_3f0 = FUN_0053d0c8;
    if (DAT_00d61be8 != -1) {
      local_430 = &local_3f8;
      local_448 = &local_430;
                    /* try { // try from 0053aaa8 to 0053ab03 has its CatchHandler @ 0053aea0 */
      FUN_0054698c(&DAT_00d61be8,&local_448,FUN_005459e0);
    }
    lVar12 = plVar13[2];
    if (((long)DAT_00d61bf0 - 1U < (ulong)(plVar13[3] - lVar12 >> 3)) &&
       (plVar13 = *(long **)(lVar12 + ((long)DAT_00d61bf0 - 1U) * 8), plVar13 != (long *)0x0)) {
      lVar12 = (long)(int)uVar6;
      (**(code **)(*plVar13 + 0x60))(plVar13,local_408,local_408 + lVar12,puVar8);
      if ((int)uVar6 < 1) {
        bVar5 = false;
      }
      else {
        bVar5 = *local_408 == '-';
      }
      local_430 = (undefined8 **)0x0;
      uStack_428 = 0;
      local_420 = 0;
      local_448 = (undefined8 ***)0x0;
      local_440 = 0;
      local_438 = 0;
      local_460 = (void *)0x0;
      local_458 = 0;
      local_450 = 0;
                    /* try { // try from 0053ab40 to 0053ab6f has its CatchHandler @ 0053ae0c */
      FUN_0053af20(param_4 & 1,bVar5,&local_410,auStack_400,&uStack_414,&local_418,&local_430,
                   &local_448,&local_460,&local_464);
      if (local_464 < (int)uVar6) {
        uVar11 = local_458;
        if (-1 < local_450) {
          uVar11 = (ulong)local_450._7_1_;
        }
        uVar2 = local_440;
        if (-1 < local_438) {
          uVar2 = (ulong)local_438._7_1_;
        }
        uVar11 = (lVar12 * 2 - (long)local_464) + uVar11 + uVar2 + 1;
        if (uVar11 < 0x65) goto LAB_0053abc0;
LAB_0053ac08:
        __ptr = (undefined8 **)malloc(uVar11 << 2);
        ppuVar14 = __ptr;
        if (__ptr == (undefined8 **)0x0) goto LAB_0053addc;
      }
      else {
        uVar11 = local_458;
        if (-1 < local_450) {
          uVar11 = (ulong)local_450._7_1_;
        }
        uVar2 = local_440;
        if (-1 < local_438) {
          uVar2 = (ulong)local_438._7_1_;
        }
        uVar11 = (long)local_464 + uVar11 + uVar2 + 2;
        if (100 < uVar11) goto LAB_0053ac08;
LAB_0053abc0:
        __ptr = (undefined8 **)0x0;
        ppuVar14 = &local_3f8;
      }
                    /* try { // try from 0053ac28 to 0053ac83 has its CatchHandler @ 0053ae58 */
      FUN_0053b194(ppuVar14,&uStack_470,&local_478,*(undefined4 *)(param_5 + 8),puVar8,
                   puVar8 + lVar12 * 4,plVar13,bVar5,auStack_400,uStack_414,local_418,&local_430,
                   &local_448,&local_460,local_464);
      uVar9 = FUN_0052fde0(param_3,ppuVar14,uStack_470,local_478,param_5,param_6);
      if (__ptr != (undefined8 **)0x0) {
        free(__ptr);
      }
      if (local_450 < 0) {
        operator_delete(local_460);
      }
      if (local_438 < 0) {
        operator_delete(local_448);
      }
      if (local_420 < 0) {
        operator_delete(local_430);
      }
      plVar13 = local_410 + 1;
      do {
        lVar12 = *plVar13;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*local_410 + 0x10))();
      }
      if (local_4a0 != (undefined1 *)0x0) {
        free(local_4a0);
      }
      if (local_490 != (char *)0x0) {
        free(local_490);
      }
      if (*(long *)(lVar4 + 0x28) == local_70) {
        return uVar9;
      }
      goto LAB_0053af1c;
    }
    if (*(long *)(lVar4 + 0x28) != local_70) goto LAB_0053af1c;
                    /* try { // try from 0053ad68 to 0053ad6b has its CatchHandler @ 0053aea0 */
    FUN_0053cd4c();
LAB_0053ad6c:
    iVar7 = FUN_0054fdd4(&DAT_00d61ba8);
    if (iVar7 != 0) {
                    /* try { // try from 0053ad7c to 0053ad8f has its CatchHandler @ 0053adf4 */
      p_Var10 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      *(__locale_t *)(unaff_x19 + 0xba0) = p_Var10;
      FUN_0054ff1c(&DAT_00d61ba8);
    }
  } while( true );
}


// ===== 0053af20  FUN_0053af20 =====

void FUN_0053af20(ulong param_1,ulong param_2,long *param_3,undefined4 *param_4,undefined4 *param_5,
                 undefined4 *param_6,undefined8 *param_7,undefined8 *param_8,undefined8 *param_9,
                 undefined4 *param_10)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined8 *local_90;
  code *pcStack_88;
  undefined8 local_80;
  undefined1 **local_78;
  undefined1 *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar6 = *param_3;
  if ((param_1 & 1) == 0) {
    local_80 = 0;
    local_90 = &DAT_00d61b20;
    pcStack_88 = FUN_0053d0c8;
    if (DAT_00d61b20 != -1) {
      local_78 = &local_70;
      local_70 = (undefined1 *)&local_90;
      FUN_0054698c(&DAT_00d61b20,&local_78,FUN_005459e0);
    }
    lVar4 = *(long *)(lVar6 + 0x10);
    lVar6 = *(long *)(lVar6 + 0x18);
    iVar1 = DAT_00d61b28;
  }
  else {
    local_80 = 0;
    local_90 = &DAT_00d61b30;
    pcStack_88 = FUN_0053d0c8;
    if (DAT_00d61b30 != -1) {
      local_78 = &local_70;
      local_70 = (undefined1 *)&local_90;
      FUN_0054698c(&DAT_00d61b30,&local_78,FUN_005459e0);
    }
    lVar4 = *(long *)(lVar6 + 0x10);
    lVar6 = *(long *)(lVar6 + 0x18);
    iVar1 = DAT_00d61b38;
  }
  if (((long)iVar1 - 1U < (ulong)(lVar6 - lVar4 >> 3)) &&
     (plVar7 = *(long **)(lVar4 + ((long)iVar1 - 1U) * 8), plVar7 != (long *)0x0)) {
    if ((param_2 & 1) == 0) {
      uVar3 = (**(code **)(*plVar7 + 0x50))(plVar7);
      *param_4 = uVar3;
      pcVar5 = *(code **)(*plVar7 + 0x38);
    }
    else {
      uVar3 = (**(code **)(*plVar7 + 0x58))(plVar7);
      *param_4 = uVar3;
      pcVar5 = *(code **)(*plVar7 + 0x40);
    }
    (*pcVar5)(&local_90,plVar7);
    if (*(char *)((long)param_9 + 0x17) < '\0') {
      operator_delete((void *)*param_9);
    }
    param_9[1] = pcStack_88;
    *param_9 = local_90;
    param_9[2] = local_80;
    uVar3 = (**(code **)(*plVar7 + 0x18))(plVar7);
    *param_5 = uVar3;
    uVar3 = (**(code **)(*plVar7 + 0x20))(plVar7);
    *param_6 = uVar3;
    (**(code **)(*plVar7 + 0x28))(&local_90,plVar7);
    if (*(char *)((long)param_7 + 0x17) < '\0') {
      operator_delete((void *)*param_7);
    }
    param_7[1] = pcStack_88;
    *param_7 = local_90;
    param_7[2] = local_80;
    (**(code **)(*plVar7 + 0x30))(&local_90,plVar7);
    if (*(char *)((long)param_8 + 0x17) < '\0') {
      operator_delete((void *)*param_8);
    }
    param_8[1] = pcStack_88;
    *param_8 = local_90;
    param_8[2] = local_80;
    uVar3 = (**(code **)(*plVar7 + 0x48))(plVar7);
    *param_10 = uVar3;
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_68) {
    FUN_0053cd4c();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0053b194  FUN_0053b194 =====

void FUN_0053b194(long param_1,long *param_2,long *param_3,uint param_4,undefined4 *param_5,
                 undefined4 *param_6,long *param_7,ulong param_8,long param_9,undefined4 param_10,
                 undefined4 param_11,byte *param_12,undefined8 *param_13,long *param_14,
                 uint param_15)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  uint uVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined4 *puVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  void *pvVar20;
  size_t __n;
  
  lVar19 = 0;
  *param_3 = param_1;
  do {
    switch(*(undefined1 *)(param_9 + lVar19)) {
    case 0:
      *param_2 = *param_3;
      break;
    case 1:
      lVar13 = *param_7;
      *param_2 = *param_3;
      uVar5 = (**(code **)(lVar13 + 0x58))(param_7,0x20);
      puVar14 = (undefined4 *)*param_3 + 1;
      *(undefined4 *)*param_3 = uVar5;
LAB_0053b390:
      *param_3 = (long)puVar14;
      break;
    case 2:
      bVar3 = *(byte *)((long)param_13 + 0x17);
      uVar6 = param_13[1];
      if (-1 < (char)bVar3) {
        uVar6 = (ulong)bVar3;
      }
      if (((param_4 >> 9 & 1) != 0) && (uVar6 != 0)) {
        pvVar20 = (void *)*param_3;
        puVar12 = (undefined8 *)*param_13;
        if (-1 < (char)bVar3) {
          puVar12 = param_13;
        }
        memmove(pvVar20,puVar12,uVar6 * 4);
        puVar14 = (undefined4 *)((long)pvVar20 + uVar6 * 4);
        goto LAB_0053b390;
      }
      break;
    case 3:
      bVar3 = *(byte *)((long)param_14 + 0x17);
      uVar6 = param_14[1];
      if (-1 < (char)bVar3) {
        uVar6 = (ulong)bVar3;
      }
      if (uVar6 != 0) {
        puVar14 = (undefined4 *)*param_3;
        plVar2 = (long *)*param_14;
        if (-1 < (char)bVar3) {
          plVar2 = param_14;
        }
        *puVar14 = (int)*plVar2;
        *param_3 = (long)(puVar14 + 1);
      }
      break;
    case 4:
      param_5 = param_5 + (param_8 & 1);
      puVar8 = (undefined4 *)*param_3;
      puVar14 = param_5;
      while ((puVar14 < param_6 &&
             (uVar6 = (**(code **)(*param_7 + 0x18))(param_7,0x40,*puVar14), (uVar6 & 1) != 0))) {
        puVar14 = puVar14 + 1;
      }
      if (0 < (int)param_15) {
        uVar7 = param_15;
        if (param_5 < puVar14) {
          lVar13 = 0;
          lVar15 = 0;
          lVar9 = *param_3;
          do {
            lVar15 = lVar15 + -4;
            *(undefined4 *)(lVar9 + lVar13 * 4) = *(undefined4 *)(lVar15 + (long)puVar14);
            iVar4 = (int)lVar13;
            lVar13 = lVar13 + 1;
            if ((undefined4 *)(lVar15 + (long)puVar14) <= param_5) break;
          } while (param_15 - 1 != iVar4);
          puVar10 = (undefined4 *)(lVar9 - lVar15);
          puVar14 = (undefined4 *)((long)puVar14 + lVar15);
          *param_3 = (long)puVar10;
          if (param_15 - 1 != iVar4) {
            uVar7 = param_15 - (int)lVar13;
            goto LAB_0053b3d0;
          }
        }
        else {
LAB_0053b3d0:
          uVar5 = (**(code **)(*param_7 + 0x58))(param_7,0x30);
          puVar11 = (undefined4 *)*param_3;
          puVar10 = puVar11;
          if (0 < (int)uVar7) {
            if (7 < uVar7) {
              uVar6 = (ulong)(uVar7 - 1) + 1;
              uVar17 = uVar6 & 0x1fffffff8;
              uVar7 = uVar7 - (int)uVar17;
              puVar10 = puVar11 + uVar17;
              puVar12 = (undefined8 *)(puVar11 + 4);
              uVar18 = uVar17;
              do {
                puVar12[-1] = CONCAT44(uVar5,uVar5);
                puVar12[-2] = CONCAT44(uVar5,uVar5);
                puVar12[1] = CONCAT44(uVar5,uVar5);
                *puVar12 = CONCAT44(uVar5,uVar5);
                puVar12 = puVar12 + 4;
                uVar18 = uVar18 - 8;
              } while (uVar18 != 0);
              puVar11 = puVar10;
              if (uVar6 == uVar17) goto LAB_0053b458;
            }
            uVar7 = uVar7 + 1;
            do {
              uVar7 = uVar7 - 1;
              puVar10 = puVar11 + 1;
              *puVar11 = uVar5;
              puVar11 = puVar10;
            } while (1 < uVar7);
          }
        }
LAB_0053b458:
        *puVar10 = param_10;
        *param_3 = (long)(puVar10 + 1);
      }
      if (puVar14 == param_5) {
        uVar5 = (**(code **)(*param_7 + 0x58))(param_7,0x30);
        puVar10 = (undefined4 *)*param_3 + 1;
        *(undefined4 *)*param_3 = uVar5;
        *param_3 = (long)puVar10;
      }
      else {
        bVar3 = param_12[0x17];
        uVar6 = *(ulong *)(param_12 + 8);
        if (-1 < (char)bVar3) {
          uVar6 = (ulong)bVar3;
        }
        if (uVar6 == 0) {
          uVar7 = 0xffffffff;
        }
        else {
          pbVar1 = *(byte **)param_12;
          if (-1 < (char)bVar3) {
            pbVar1 = param_12;
          }
          uVar7 = (uint)*pbVar1;
        }
        uVar6 = 0;
        uVar16 = 0;
        do {
          puVar11 = (undefined4 *)*param_3;
          puVar10 = puVar11;
          if (uVar16 == uVar7) {
            puVar10 = puVar11 + 1;
            *puVar11 = param_11;
            *param_3 = (long)puVar10;
            uVar6 = (ulong)((int)uVar6 + 1);
            bVar3 = param_12[0x17];
            uVar18 = *(ulong *)(param_12 + 8);
            if (-1 < (char)bVar3) {
              uVar18 = (ulong)bVar3;
            }
            if (uVar6 < uVar18) {
              uVar16 = 0;
              pbVar1 = *(byte **)param_12;
              if (-1 < (char)bVar3) {
                pbVar1 = param_12;
              }
              uVar7 = (uint)pbVar1[uVar6];
              if (uVar7 == 0xff) {
                uVar7 = 0xffffffff;
              }
            }
            else {
              uVar16 = 0;
            }
          }
          puVar14 = puVar14 + -1;
          uVar16 = uVar16 + 1;
          *puVar10 = *puVar14;
          *param_3 = (long)(puVar10 + 1);
        } while (puVar14 != param_5);
        puVar10 = puVar10 + 1;
      }
      if ((puVar8 != puVar10) && (puVar10 = puVar10 + -1, puVar8 < puVar10)) {
        do {
          puVar11 = puVar8 + 1;
          uVar5 = *puVar8;
          *puVar8 = *puVar10;
          puVar14 = puVar10 + -1;
          *puVar10 = uVar5;
          puVar10 = puVar14;
          puVar8 = puVar11;
        } while (puVar11 < puVar14);
      }
    }
    lVar19 = lVar19 + 1;
    if (lVar19 == 4) {
      bVar3 = *(byte *)((long)param_14 + 0x17);
      uVar6 = param_14[1];
      if (-1 < (char)bVar3) {
        uVar6 = (ulong)bVar3;
      }
      if (1 < uVar6) {
        pvVar20 = (void *)*param_3;
        __n = uVar6 * 4 - 4;
        plVar2 = (long *)*param_14;
        if (-1 < (char)bVar3) {
          plVar2 = param_14;
        }
        memmove(pvVar20,(void *)((long)plVar2 + 4),__n);
        *param_3 = (long)pvVar20 + __n;
      }
      if ((param_4 & 0xb0) != 0x10) {
        if ((param_4 & 0xb0) == 0x20) {
          param_1 = *param_3;
        }
        *param_2 = param_1;
      }
      return;
    }
  } while( true );
}


// ===== 0053b62c  FUN_0053b62c =====

undefined8
FUN_0053b62c(undefined8 param_1,undefined8 param_2,uint param_3,long param_4,undefined4 param_5,
            long *param_6)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  long lVar6;
  bool bVar7;
  int iVar8;
  undefined8 **__ptr;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 **ppuVar13;
  undefined8 local_278;
  undefined8 uStack_270;
  int local_264;
  void *local_260;
  ulong local_258;
  undefined8 local_250;
  undefined8 ***local_248;
  ulong local_240;
  undefined8 local_238;
  undefined8 **local_230;
  undefined8 uStack_228;
  long local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  long *local_210;
  undefined1 auStack_208 [8];
  undefined8 *local_200;
  code *pcStack_1f8;
  undefined8 local_1f0;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  FUN_00520ce8(&local_210,param_4);
  plVar12 = local_210;
  local_1f0 = 0;
  local_200 = &DAT_00d61be8;
  pcStack_1f8 = FUN_0053d0c8;
  if (DAT_00d61be8 != -1) {
    local_230 = &local_200;
    local_248 = &local_230;
                    /* try { // try from 0053b6b4 to 0053b6cb has its CatchHandler @ 0053ba10 */
    FUN_0054698c(&DAT_00d61be8,&local_248,FUN_005459e0);
  }
  lVar11 = plVar12[2];
  if (((ulong)(plVar12[3] - lVar11 >> 3) <= (long)DAT_00d61bf0 - 1U) ||
     (plVar12 = *(long **)(lVar11 + ((long)DAT_00d61bf0 - 1U) * 8), plVar12 == (long *)0x0)) {
    if (*(long *)(lVar6 + 0x28) == local_70) {
                    /* try { // try from 0053b994 to 0053b997 has its CatchHandler @ 0053ba10 */
      uVar9 = FUN_0053cd4c();
                    /* catch() { ... } // from try @ 0053b850 with catch @ 0053b998 */
                    /* catch() { ... } // from try @ 0053b754 with catch @ 0053b9a0 */
      if (local_250 < 0) {
        operator_delete(local_260);
      }
      if (local_238 < 0) {
        operator_delete(local_248);
      }
      if (local_220 < 0) {
        operator_delete(local_230);
      }
      plVar12 = local_210 + 1;
      do {
        lVar11 = *plVar12;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar7) {
          *plVar12 = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*local_210 + 0x10))();
      }
      if (*(long *)(lVar6 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00d0fa5c(uVar9);
      }
    }
    goto LAB_0053ba58;
  }
  bVar4 = *(byte *)((long)param_6 + 0x17);
  uVar1 = param_6[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  if (uVar1 == 0) {
    bVar7 = false;
  }
  else {
    plVar3 = (long *)*param_6;
    if (-1 < (char)bVar4) {
      plVar3 = param_6;
    }
    lVar11 = *plVar3;
                    /* try { // try from 0053b720 to 0053b72b has its CatchHandler @ 0053b99c */
    iVar8 = (**(code **)(*plVar12 + 0x58))(plVar12,0x2d);
    bVar7 = (int)lVar11 == iVar8;
  }
  local_230 = (undefined8 **)0x0;
  uStack_228 = 0;
  local_220 = 0;
  local_248 = (undefined8 ***)0x0;
  local_240 = 0;
  local_238 = 0;
  local_260 = (void *)0x0;
  local_258 = 0;
  local_250 = 0;
                    /* try { // try from 0053b754 to 0053b783 has its CatchHandler @ 0053b9a0 */
  FUN_0053af20(param_3 & 1,bVar7,&local_210,auStack_208,&uStack_214,&local_218,&local_230,&local_248
               ,&local_260,&local_264);
  bVar4 = *(byte *)((long)param_6 + 0x17);
  uVar1 = param_6[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  if (local_264 < (int)uVar1) {
    uVar10 = local_258;
    if (-1 < local_250) {
      uVar10 = (ulong)local_250._7_1_;
    }
    uVar2 = local_240;
    if (-1 < local_238) {
      uVar2 = (ulong)local_238._7_1_;
    }
    uVar10 = (uVar1 * 2 - (long)local_264) + uVar10 + uVar2 + 1;
  }
  else {
    uVar10 = local_258;
    if (-1 < local_250) {
      uVar10 = (ulong)local_250._7_1_;
    }
    uVar2 = local_240;
    if (-1 < local_238) {
      uVar2 = (ulong)local_238._7_1_;
    }
    uVar10 = (long)local_264 + uVar10 + uVar2 + 2;
  }
  if (uVar10 < 0x65) {
LAB_0053b854:
    __ptr = (undefined8 **)0x0;
    ppuVar13 = &local_200;
  }
  else {
    __ptr = (undefined8 **)malloc(uVar10 << 2);
    ppuVar13 = __ptr;
    if (__ptr == (undefined8 **)0x0) {
      if (*(long *)(lVar6 + 0x28) != local_70) goto LAB_0053ba58;
                    /* try { // try from 0053b850 to 0053b853 has its CatchHandler @ 0053b998 */
      FUN_00546ac8();
      goto LAB_0053b854;
    }
  }
  plVar3 = (long *)*param_6;
  if (-1 < (char)bVar4) {
    plVar3 = param_6;
  }
                    /* try { // try from 0053b874 to 0053b8cb has its CatchHandler @ 0053b9c8 */
  FUN_0053b194(ppuVar13,&uStack_270,&local_278,*(undefined4 *)(param_4 + 8),plVar3,
               (long)plVar3 + uVar1 * 4,plVar12,bVar7,auStack_208,uStack_214,local_218,&local_230,
               &local_248,&local_260,local_264);
  uVar9 = FUN_0052fde0(param_2,ppuVar13,uStack_270,local_278,param_4,param_5);
  if (__ptr != (undefined8 **)0x0) {
    free(__ptr);
  }
  if (local_250 < 0) {
    operator_delete(local_260);
  }
  if (local_238 < 0) {
    operator_delete(local_248);
  }
  if (local_220 < 0) {
    operator_delete(local_230);
  }
  plVar12 = local_210 + 1;
  do {
    lVar11 = *plVar12;
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar7) {
      *plVar12 = lVar11 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar11 == 0) {
    (**(code **)(*local_210 + 0x10))();
  }
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return uVar9;
  }
LAB_0053ba58:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0053ba5c  FUN_0053ba5c =====

undefined8 FUN_0053ba5c(void)

{
  return 0xffffffffffffffff;
}


// ===== 0053ba64  FUN_0053ba64 =====

void FUN_0053ba64(undefined8 param_1)

{
  undefined8 in_x4;
  
  FUN_004c55b4(param_1,in_x4);
  return;
}


// ===== 0053ba70  FUN_0053ba70 =====

void FUN_0053ba70(void)

{
  return;
}


// ===== 0053ba74  FUN_0053ba74 =====

undefined8 FUN_0053ba74(void)

{
  return 0xffffffffffffffff;
}


// ===== 0053ba7c  FUN_0053ba7c =====

void FUN_0053ba7c(undefined8 *param_1)

{
  undefined8 *in_x4;
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (-1 < *(char *)((long)in_x4 + 0x17)) {
    uVar2 = *in_x4;
    uVar1 = in_x4[2];
    param_1[1] = in_x4[1];
    *param_1 = uVar2;
    param_1[2] = uVar1;
    return;
  }
  FUN_005487b8(param_1,*in_x4,in_x4[1]);
  return;
}


// ===== 0053baa4  FUN_0053baa4 =====

void FUN_0053baa4(void)

{
  return;
}


// ===== 0053baa8  FUN_0053baa8 =====

void FUN_0053baa8(undefined8 *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *local_90;
  code *pcStack_88;
  undefined8 local_80;
  undefined1 **local_78;
  undefined1 *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00d20478;
  param_1[1] = param_2 + -1;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0x24) = 1;
  param_1[3] = param_1 + 0x24;
  param_1[4] = param_1 + 0x24;
  param_1[9] = 0;
  param_1[8] = 0;
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
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[2] = param_1 + 6;
                    /* try { // try from 0053bb28 to 0053bb37 has its CatchHandler @ 0053caac */
  FUN_004a3cf4(param_1 + 0x26,&DAT_001ecde3);
  param_1[3] = param_1[2];
  DAT_00d625a0 = &PTR_thunk_FUN_005466c0_00d21528;
  DAT_00d625a8 = 0;
  local_80 = 0;
  local_90 = &DAT_00d61a60;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61a60 != -1) {
    local_78 = &local_70;
                    /* try { // try from 0053bb88 to 0053c973 has its CatchHandler @ 0053cab4 */
    local_70 = (undefined1 *)&local_90;
    FUN_0054698c(&DAT_00d61a60,&local_78,FUN_005459e0);
  }
  FUN_0053cb0c(param_1,&DAT_00d625a0,(long)DAT_00d61a68 + -1);
  local_80 = 0;
  DAT_00d625b0 = &PTR_thunk_FUN_005466c0_00d21568;
  DAT_00d625b8 = 0;
  local_90 = &DAT_00d61a70;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61a70 != -1) {
    local_78 = &local_70;
    local_70 = (undefined1 *)&local_90;
    FUN_0054698c(&DAT_00d61a70,&local_78,FUN_005459e0);
  }
  FUN_0053cb0c(param_1,&DAT_00d625b0,(long)DAT_00d61a78 + -1);
  local_80 = 0;
  DAT_00d625d8 = 0;
  DAT_00d625c0 = &PTR_FUN_00d20520;
  DAT_00d625c8 = 0;
  DAT_00d625d0 = &DAT_001f7d30;
  local_90 = &DAT_00d61bf8;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61bf8 != -1) {
    local_78 = &local_70;
    local_70 = (undefined1 *)&local_90;
    FUN_0054698c(&DAT_00d61bf8,&local_78,FUN_005459e0);
  }
  FUN_0053cb0c(param_1,&DAT_00d625c0,(long)DAT_00d61c00 + -1);
  local_80 = 0;
  DAT_00d625e0 = &PTR_thunk_FUN_005466c0_00d20858;
  DAT_00d625e8 = 0;
  local_90 = &DAT_00d61be8;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61be8 != -1) {
    local_78 = &local_70;
    local_70 = (undefined1 *)&local_90;
    FUN_0054698c(&DAT_00d61be8,&local_78,FUN_005459e0);
  }
  FUN_0053cb0c(param_1,&DAT_00d625e0,(long)DAT_00d61bf0 + -1);
  local_80 = 0;
  DAT_00d625f0 = &PTR_thunk_FUN_005466c0_00d20918;
  DAT_00d625f8 = 0;
  local_90 = &DAT_00d61c08;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61c08 != -1) {
    local_78 = &local_70;
    local_70 = (undefined1 *)&local_90;
    FUN_0054698c(&DAT_00d61c08,&local_78,FUN_005459e0);
  }
  FUN_0053cb0c(param_1,&DAT_00d625f0,(long)DAT_00d61c10 + -1);
  DAT_00d62600 = &PTR_FUN_00d20678;
  DAT_00d62608 = 0;
  if (((DAT_00d61ba8 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d61ba8), iVar2 != 0)) {
                    /* try { // try from 0053c9b4 to 0053c9c7 has its CatchHandler @ 0053ca8c */
    DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_0054ff1c(&DAT_00d61ba8);
  }
  local_80 = 0;
  DAT_00d62610 = DAT_00d61ba0;
  local_90 = &DAT_00d61c18;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61c18 != -1) {
    local_78 = &local_70;
    local_70 = (undefined1 *)&local_90;
    FUN_0054698c(&DAT_00d61c18,&local_78,FUN_005459e0);
  }
  FUN_0053cb0c(param_1,&DAT_00d62600,(long)DAT_00d61c20 + -1);
  local_80 = 0;
  DAT_00d62620 = &PTR_thunk_FUN_005466c0_00d209b0;
  DAT_00d62628 = 0;
  local_90 = &DAT_00d61c28;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61c28 != -1) {
    local_78 = &local_70;
    local_70 = (undefined1 *)&local_90;
    FUN_0054698c(&DAT_00d61c28,&local_78,FUN_005459e0);
  }
  FUN_0053cb0c(param_1,&DAT_00d62620,(long)DAT_00d61c30 + -1);
  local_80 = 0;
  DAT_00d62630 = &PTR_thunk_FUN_005466c0_00d20ae0;
  DAT_00d62638 = 0;
  local_90 = &DAT_00d61c48;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61c48 != -1) {
    local_78 = &local_70;
    local_70 = (undefined1 *)&local_90;
    FUN_0054698c(&DAT_00d61c48,&local_78,FUN_005459e0);
  }
  FUN_0053cb0c(param_1,&DAT_00d62630,(long)DAT_00d61c50 + -1);
  local_80 = 0;
  DAT_00d62640 = &PTR_thunk_FUN_005466c0_00d20a48;
  DAT_00d62648 = 0;
  local_90 = &DAT_00d61c38;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61c38 != -1) {
    local_78 = &local_70;
    local_70 = (undefined1 *)&local_90;
    FUN_0054698c(&DAT_00d61c38,&local_78,FUN_005459e0);
  }
  FUN_0053cb0c(param_1,&DAT_00d62640,(long)DAT_00d61c40 + -1);
  local_80 = 0;
  DAT_00d62650 = &PTR_thunk_FUN_005466c0_00d20b78;
  DAT_00d62658 = 0;
  local_90 = &DAT_00d61c58;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61c58 != -1) {
    local_78 = &local_70;
    local_70 = (undefined1 *)&local_90;
    FUN_0054698c(&DAT_00d61c58,&local_78,FUN_005459e0);
  }
  FUN_0053cb0c(param_1,&DAT_00d62650,(long)DAT_00d61c60 + -1);
  local_80 = 0;
  DAT_00d62680 = 0;
  DAT_00d62688 = 0;
  DAT_00d62660 = &PTR_FUN_00d206d8;
  DAT_00d62668 = 0;
  DAT_00d62670 = 0x2c2e;
  DAT_00d62678 = 0;
  local_90 = &DAT_00d61c68;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61c68 != -1) {
    local_78 = &local_70;
    local_70 = (undefined1 *)&local_90;
    FUN_0054698c(&DAT_00d61c68,&local_78,FUN_005459e0);
  }
  FUN_0053cb0c(param_1,&DAT_00d62660,(long)DAT_00d61c70 + -1);
  local_80 = 0;
  DAT_00d626b0 = 0;
  DAT_00d626b8 = 0;
  DAT_00d62690 = &PTR_FUN_00d20728;
  DAT_00d62698 = 0;
  DAT_00d626a8 = 0;
  DAT_00d626a0 = DAT_001f5430;
  local_90 = &DAT_00d61c78;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61c78 != -1) {
    local_78 = &local_70;
    local_70 = (undefined1 *)&local_90;
    FUN_0054698c(&DAT_00d61c78,&local_78,FUN_005459e0);
  }
  FUN_0053cb0c(param_1,&DAT_00d62690,(long)DAT_00d61c80 + -1);
  local_80 = 0;
  DAT_00d626c0 = &PTR_thunk_FUN_005466c0_00d215a8;
  DAT_00d626c8 = 0;
  local_90 = &DAT_00d61a80;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61a80 != -1) {
    local_78 = &local_70;
    local_70 = (undefined1 *)&local_90;
    FUN_0054698c(&DAT_00d61a80,&local_78,FUN_005459e0);
  }
  FUN_0053cb0c(param_1,&DAT_00d626c0,(long)DAT_00d61a88 + -1);
  local_80 = 0;
  DAT_00d626d0 = &PTR_thunk_FUN_005466c0_00d21698;
  DAT_00d626d8 = 0;
  local_90 = &DAT_00d61a90;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61a90 != -1) {
    local_78 = &local_70;
    local_70 = (undefined1 *)&local_90;
    FUN_0054698c(&DAT_00d61a90,&local_78,FUN_005459e0);
  }
  FUN_0053cb0c(param_1,&DAT_00d626d0,(long)DAT_00d61a98 + -1);
  local_80 = 0;
  DAT_00d626e0 = &PTR_thunk_FUN_005466c0_00d21778;
  DAT_00d626e8 = 0;
  local_90 = &DAT_00d61aa0;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61aa0 != -1) {
    local_78 = &local_70;
    local_70 = (undefined1 *)&local_90;
    FUN_0054698c(&DAT_00d61aa0,&local_78,FUN_005459e0);
  }
  FUN_0053cb0c(param_1,&DAT_00d626e0,(long)DAT_00d61aa8 + -1);
  local_80 = 0;
  DAT_00d626f0 = &PTR_thunk_FUN_005466c0_00d21850;
  DAT_00d626f8 = 0;
  local_90 = &DAT_00d61ab0;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61ab0 != -1) {
    local_78 = &local_70;
    local_70 = (undefined1 *)&local_90;
    FUN_0054698c(&DAT_00d61ab0,&local_78,FUN_005459e0);
  }
  FUN_0053cb0c(param_1,&DAT_00d626f0,(long)DAT_00d61ab8 + -1);
  local_80 = 0;
  DAT_00d62700 = &PTR_thunk_FUN_005466c0_00d21c08;
  DAT_00d62708 = 0;
  local_90 = &DAT_00d61b00;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61b00 != -1) {
    local_78 = &local_70;
    local_70 = (undefined1 *)&local_90;
    FUN_0054698c(&DAT_00d61b00,&local_78,FUN_005459e0);
  }
  FUN_0053cb0c(param_1,&DAT_00d62700,(long)DAT_00d61b08 + -1);
  local_80 = 0;
  DAT_00d62710 = &PTR_thunk_FUN_005466c0_00d21cc0;
  DAT_00d62718 = 0;
  local_90 = &DAT_00d61b10;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61b10 != -1) {
    local_78 = &local_70;
    local_70 = (undefined1 *)&local_90;
    FUN_0054698c(&DAT_00d61b10,&local_78,FUN_005459e0);
  }
  FUN_0053cb0c(param_1,&DAT_00d62710,(long)DAT_00d61b18 + -1);
  local_80 = 0;
  DAT_00d62720 = &PTR_thunk_FUN_005466c0_00d21d68;
  DAT_00d62728 = 0;
  local_90 = &DAT_00d61b20;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61b20 != -1) {
    local_78 = &local_70;
    local_70 = (undefined1 *)&local_90;
    FUN_0054698c(&DAT_00d61b20,&local_78,FUN_005459e0);
  }
  FUN_0053cb0c(param_1,&DAT_00d62720,(long)DAT_00d61b28 + -1);
  local_80 = 0;
  DAT_00d62730 = &PTR_thunk_FUN_005466c0_00d21e10;
  DAT_00d62738 = 0;
  local_90 = &DAT_00d61b30;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61b30 != -1) {
    local_78 = &local_70;
    local_70 = (undefined1 *)&local_90;
    FUN_0054698c(&DAT_00d61b30,&local_78,FUN_005459e0);
  }
  FUN_0053cb0c(param_1,&DAT_00d62730,(long)DAT_00d61b38 + -1);
  local_80 = 0;
  DAT_00d62740 = &PTR_thunk_FUN_005466c0_00d21eb8;
  DAT_00d62748 = 0;
  local_90 = &DAT_00d61b40;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61b40 != -1) {
    local_78 = &local_70;
    local_70 = (undefined1 *)&local_90;
    FUN_0054698c(&DAT_00d61b40,&local_78,FUN_005459e0);
  }
  FUN_0053cb0c(param_1,&DAT_00d62740,(long)DAT_00d61b48 + -1);
  local_80 = 0;
  DAT_00d62750 = &PTR_thunk_FUN_005466c0_00d21f38;
  DAT_00d62758 = 0;
  local_90 = &DAT_00d61b50;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61b50 != -1) {
    local_78 = &local_70;
    local_70 = (undefined1 *)&local_90;
    FUN_0054698c(&DAT_00d61b50,&local_78,FUN_005459e0);
  }
  FUN_0053cb0c(param_1,&DAT_00d62750,(long)DAT_00d61b58 + -1);
  local_80 = 0;
  DAT_00d62760 = &PTR_thunk_FUN_005466c0_00d21fb8;
  DAT_00d62768 = 0;
  local_90 = &DAT_00d61b60;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61b60 != -1) {
    local_78 = &local_70;
    local_70 = (undefined1 *)&local_90;
    FUN_0054698c(&DAT_00d61b60,&local_78,FUN_005459e0);
  }
  FUN_0053cb0c(param_1,&DAT_00d62760,(long)DAT_00d61b68 + -1);
  local_80 = 0;
  DAT_00d62770 = &PTR_thunk_FUN_005466c0_00d22038;
  DAT_00d62778 = 0;
  local_90 = &DAT_00d61b70;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61b70 != -1) {
    local_78 = &local_70;
    local_70 = (undefined1 *)&local_90;
    FUN_0054698c(&DAT_00d61b70,&local_78,FUN_005459e0);
  }
  FUN_0053cb0c(param_1,&DAT_00d62770,(long)DAT_00d61b78 + -1);
  local_80 = 0;
  DAT_00d62780 = &PTR_thunk_FUN_005466c0_00d21918;
  DAT_00d62788 = 0;
  DAT_00d62790 = &PTR_FUN_00d21978;
  local_90 = &DAT_00d61ac0;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61ac0 != -1) {
    local_78 = &local_70;
    local_70 = (undefined1 *)&local_90;
    FUN_0054698c(&DAT_00d61ac0,&local_78,FUN_005459e0);
  }
  FUN_0053cb0c(param_1,&DAT_00d62780,(long)DAT_00d61ac8 + -1);
  local_80 = 0;
  DAT_00d627a0 = &PTR_thunk_FUN_005466c0_00d21a28;
  DAT_00d627a8 = 0;
  DAT_00d627b0 = &PTR_FUN_00d21a88;
  local_90 = &DAT_00d61ad0;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61ad0 != -1) {
    local_78 = &local_70;
    local_70 = (undefined1 *)&local_90;
    FUN_0054698c(&DAT_00d61ad0,&local_78,FUN_005459e0);
  }
  FUN_0053cb0c(param_1,&DAT_00d627a0,(long)DAT_00d61ad8 + -1);
  DAT_00d627c0 = &PTR_thunk_FUN_005466c0_00d20818;
  DAT_00d627c8 = 0;
  if (((DAT_00d61ba8 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d61ba8), iVar2 != 0)) {
                    /* try { // try from 0053c9ec to 0053c9ff has its CatchHandler @ 0053ca6c */
    DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_0054ff1c(&DAT_00d61ba8);
  }
  local_80 = 0;
  DAT_00d627c0 = &PTR_FUN_00d21b28;
  DAT_00d627d0 = DAT_00d61ba0;
  local_90 = &DAT_00d61ae0;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61ae0 != -1) {
    local_78 = &local_70;
    local_70 = (undefined1 *)&local_90;
    FUN_0054698c(&DAT_00d61ae0,&local_78,FUN_005459e0);
  }
  FUN_0053cb0c(param_1,&DAT_00d627c0,(long)DAT_00d61ae8 + -1);
  DAT_00d627e0 = &PTR_thunk_FUN_005466c0_00d20818;
  DAT_00d627e8 = 0;
  if (((DAT_00d61ba8 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d61ba8), iVar2 != 0)) {
                    /* try { // try from 0053ca24 to 0053ca37 has its CatchHandler @ 0053ca4c */
    DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_0054ff1c(&DAT_00d61ba8);
  }
  local_80 = 0;
  DAT_00d627e0 = &PTR_FUN_00d21ba0;
  DAT_00d627f0 = DAT_00d61ba0;
  local_90 = &DAT_00d61af0;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61af0 != -1) {
    local_78 = &local_70;
    local_70 = (undefined1 *)&local_90;
    FUN_0054698c(&DAT_00d61af0,&local_78,FUN_005459e0);
  }
  FUN_0053cb0c(param_1,&DAT_00d627e0,(long)DAT_00d61af8 + -1);
  local_80 = 0;
  DAT_00d62800 = &PTR_thunk_FUN_005466c0_00d220b8;
  DAT_00d62808 = 0;
  local_90 = &DAT_00d61b80;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61b80 != -1) {
    local_78 = &local_70;
    local_70 = (undefined1 *)&local_90;
    FUN_0054698c(&DAT_00d61b80,&local_78,FUN_005459e0);
  }
  FUN_0053cb0c(param_1,&DAT_00d62800,(long)DAT_00d61b88 + -1);
  local_80 = 0;
  DAT_00d62810 = &PTR_thunk_FUN_005466c0_00d22140;
  DAT_00d62818 = 0;
  local_90 = &DAT_00d61b90;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61b90 != -1) {
    local_78 = &local_70;
    local_70 = (undefined1 *)&local_90;
    FUN_0054698c(&DAT_00d61b90,&local_78,FUN_005459e0);
  }
  FUN_0053cb0c(param_1,&DAT_00d62810,(long)DAT_00d61b98 + -1);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0053cb0c  FUN_0053cb0c =====

void FUN_0053cb0c(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  plVar5 = (long *)(param_2 + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar4) {
      *plVar5 = *plVar5 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar6 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(param_1 + 0x18);
  uVar8 = lVar7 - lVar6 >> 3;
  if (uVar8 <= param_3) {
    uVar1 = param_3 + 1;
    if (uVar1 < uVar8 || uVar1 - uVar8 == 0) {
      if (uVar1 < uVar8) {
        lVar7 = lVar6 + uVar1 * 8;
        *(long *)(param_1 + 0x18) = lVar7;
      }
    }
    else {
                    /* try { // try from 0053cb60 to 0053cb63 has its CatchHandler @ 0053cc24 */
      FUN_0054537c((long *)(param_1 + 0x10),uVar1 - uVar8);
      lVar6 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(param_1 + 0x18);
    }
  }
  if ((ulong)(lVar7 - lVar6 >> 3) <= param_3) {
                    /* try { // try from 0053cbd4 to 0053cbfb has its CatchHandler @ 0053cc5c */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x587,
               "__n < size()","vector[] index out of bounds");
  }
  plVar5 = *(long **)(lVar6 + param_3 * 8);
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  if (param_3 < (ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 3)) {
    *(long *)(*(long *)(param_1 + 0x10) + param_3 * 8) = param_2;
    return;
  }
                    /* try { // try from 0053cbfc to 0053cc23 has its CatchHandler @ 0053cc58 */
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x587,
             "__n < size()","vector[] index out of bounds");
}


// ===== 0053cc60  FUN_0053cc60 =====

void FUN_0053cc60(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  puVar4 = (undefined8 *)param_1[3];
  *param_1 = &PTR_FUN_00d20478;
  if (puVar4 != (undefined8 *)param_1[2]) {
    uVar7 = 0;
    puVar4 = (undefined8 *)param_1[2];
    do {
      plVar5 = (long *)puVar4[uVar7];
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
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      puVar4 = (undefined8 *)param_1[2];
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (uVar7 < (ulong)(param_1[3] - (long)puVar4 >> 3));
  }
  if (*(char *)((long)param_1 + 0x147) < '\0') {
    operator_delete((void *)param_1[0x26]);
    puVar4 = (undefined8 *)param_1[2];
  }
  if (puVar4 != (undefined8 *)0x0) {
    param_1[3] = puVar4;
    if (puVar4 == param_1 + 6) {
      *(undefined1 *)(puVar4 + 0x1e) = 0;
    }
    else {
      operator_delete(puVar4);
    }
  }
  FUN_005466c0(param_1);
  return;
}


// ===== 0053cd28  FUN_0053cd28 =====

void FUN_0053cd28(void *param_1)

{
  FUN_0053cc60();
  operator_delete(param_1);
  return;
}


// ===== 0053cd4c  FUN_0053cd4c =====

void FUN_0053cd4c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0054f64c(8);
  FUN_00552770();
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar1,PTR_PTR_00d51d50,PTR_thunk_FUN_0055234c_00d51df8);
}


// ===== 0053cd80  FUN_0053cd80 =====

undefined8 * FUN_0053cd80(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (((DAT_00d61bc0 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00d61bc0), iVar4 != 0)) {
                    /* try { // try from 0053cde4 to 0053cdf7 has its CatchHandler @ 0053ce1c */
    FUN_0053baa8(&DAT_00d62820,1);
    DAT_00d61bb0 = &DAT_00d62820;
    DAT_00d61bb8 = &DAT_00d61bb0;
    FUN_0054ff1c(&DAT_00d61bc0);
  }
  plVar1 = (long *)(DAT_00d61bb0 + 8);
  DAT_00d61bc8 = DAT_00d61bb0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return &DAT_00d61bc8;
}


// ===== 0053ce34  FUN_0053ce34 =====

void FUN_0053ce34(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (((DAT_00d61bd8 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00d61bd8), iVar4 != 0)) {
                    /* try { // try from 0053ce90 to 0053ce93 has its CatchHandler @ 0053ceb4 */
    FUN_0053cd80();
    DAT_00d61bd0 = &DAT_00d61bc8;
    FUN_0054ff1c(&DAT_00d61bd8);
  }
  plVar1 = (long *)(DAT_00d61bc8 + 8);
  *param_1 = DAT_00d61bc8;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


// ===== 0053cecc  FUN_0053cecc =====

void FUN_0053cecc(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  plVar1 = (long *)(*param_2 + 8);
  *param_1 = *param_2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


// ===== 0053ceec  FUN_0053ceec =====

void FUN_0053ceec(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  param_1 = (long *)*param_1;
  plVar1 = param_1 + 1;
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
                    /* WARNING: Could not recover jumptable at 0x0053cf14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}


// ===== 0053cf18  FUN_0053cf18 =====

void FUN_0053cf18(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *local_60;
  code *pcStack_58;
  undefined8 local_50;
  undefined1 **local_48;
  undefined1 *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pcStack_58 = FUN_0053d0c8;
  lVar5 = *param_1;
  local_50 = 0;
  local_60 = param_2;
  if (*param_2 != -1) {
    local_48 = &local_40;
    local_40 = (undefined1 *)&local_60;
    FUN_0054698c(param_2,&local_48,FUN_005459e0);
  }
  lVar1 = *(long *)(lVar5 + 0x10);
  uVar4 = (long)(int)param_2[1] - 1;
  if (uVar4 < (ulong)(*(long *)(lVar5 + 0x18) - lVar1 >> 3)) {
    bVar3 = *(long *)(lVar1 + uVar4 * 8) != 0;
  }
  else {
    bVar3 = false;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


// ===== 0053cfd4  FUN_0053cfd4 =====

void FUN_0053cfd4(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *local_60;
  code *pcStack_58;
  undefined8 local_50;
  undefined1 **local_48;
  undefined1 *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pcStack_58 = FUN_0053d0c8;
  lVar4 = *param_1;
  local_50 = 0;
  local_60 = param_2;
  if (*param_2 != -1) {
    local_48 = &local_40;
    local_40 = (undefined1 *)&local_60;
    FUN_0054698c(param_2,&local_48,FUN_005459e0);
  }
  lVar1 = *(long *)(lVar4 + 0x10);
  uVar3 = (long)(int)param_2[1] - 1;
  if ((uVar3 < (ulong)(*(long *)(lVar4 + 0x18) - lVar1 >> 3)) && (*(long *)(lVar1 + uVar3 * 8) != 0)
     ) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_38) {
    FUN_0053cd4c();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0053d098  FUN_0053d098 =====

void FUN_0053d098(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 0053d0bc  FUN_0053d0bc =====

void FUN_0053d0bc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0053d0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}


// ===== 0053d0c8  FUN_0053d0c8 =====

void FUN_0053d0c8(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  do {
    iVar1 = DAT_00d61be0 + 1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0xd61be0,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      DAT_00d61be0 = iVar1;
    }
  } while (cVar2 != '\0');
  *(int *)(param_1 + 8) = iVar1;
  return;
}


// ===== 0053d0e8  FUN_0053d0e8 =====

void FUN_0053d0e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d204a0;
                    /* try { // try from 0053d108 to 0053d10b has its CatchHandler @ 0053d11c */
  freelocale((__locale_t)param_1[2]);
  FUN_005466c0(param_1);
  return;
}


// ===== 0053d120  FUN_0053d120 =====

void FUN_0053d120(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d204a0;
                    /* try { // try from 0053d140 to 0053d143 has its CatchHandler @ 0053d15c */
  freelocale((__locale_t)param_1[2]);
  FUN_005466c0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0053d160  FUN_0053d160 =====

void FUN_0053d160(char ****param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  ulong uVar1;
  long lVar2;
  char ***pppcVar3;
  char ***pppcVar4;
  int iVar5;
  char ****ppppcVar6;
  char ****ppppcVar7;
  uint uVar8;
  ulong uVar9;
  char ***local_98;
  ulong local_90;
  undefined8 uStack_88;
  char ***local_80;
  ulong local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar9 = (long)param_3 - (long)param_2;
  if (uVar9 < 0x7ffffffffffffff0) {
    if (uVar9 < 0x17) {
      ppppcVar7 = &local_80;
      uStack_70 = CONCAT17((char)uVar9,(undefined7)uStack_70);
      ppppcVar6 = param_1;
    }
    else {
      uVar1 = (uVar9 | 0xf) + 1;
      ppppcVar7 = (char ****)operator_new(uVar1);
      uStack_70 = uVar1 | 0x8000000000000000;
      local_78 = uVar9;
      ppppcVar6 = ppppcVar7;
      local_80 = (char ***)ppppcVar7;
    }
    if (param_2 != param_3) {
      ppppcVar6 = (char ****)memcpy(ppppcVar7,param_2,uVar9);
      ppppcVar7 = (char ****)((long)ppppcVar7 + uVar9);
    }
    uVar9 = (long)param_5 - (long)param_4;
    *(char *)ppppcVar7 = '\0';
    if (uVar9 < 0x7ffffffffffffff0) {
      if (uVar9 < 0x17) {
        ppppcVar7 = &local_98;
        uStack_88 = CONCAT17((char)uVar9,(undefined7)uStack_88);
      }
      else {
        uVar1 = (uVar9 | 0xf) + 1;
                    /* try { // try from 0053d2cc to 0053d2d3 has its CatchHandler @ 0053d338 */
        ppppcVar7 = (char ****)operator_new(uVar1);
        uStack_88 = uVar1 | 0x8000000000000000;
        local_90 = uVar9;
        local_98 = (char ***)ppppcVar7;
      }
      if (param_4 != param_5) {
        memcpy(ppppcVar7,param_4,uVar9);
        ppppcVar7 = (char ****)((long)ppppcVar7 + uVar9);
      }
      uVar1 = uStack_70;
      *(char *)ppppcVar7 = '\0';
      pppcVar4 = local_80;
      uVar9 = uStack_88;
      pppcVar3 = local_98;
      ppppcVar7 = (char ****)local_80;
      if (-1 < (long)uVar1) {
        ppppcVar7 = &local_80;
      }
      ppppcVar6 = (char ****)local_98;
      if (-1 < (long)uStack_88) {
        ppppcVar6 = &local_98;
      }
      iVar5 = strcoll_l((char *)ppppcVar7,(char *)ppppcVar6,(__locale_t)param_1[2]);
      if ((long)uVar9 < 0) {
        operator_delete(pppcVar3);
      }
      if ((long)uVar1 < 0) {
        operator_delete(pppcVar4);
      }
      uVar8 = (uint)(iVar5 != 0);
      if (iVar5 < 0) {
        uVar8 = 0xffffffff;
      }
      param_1 = (char ****)(ulong)uVar8;
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return;
      }
    }
    else {
      param_1 = ppppcVar6;
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0053d330 to 0053d337 has its CatchHandler @ 0053d338 */
                    /* WARNING: Subroutine does not return */
        FUN_004e823c(&local_98);
      }
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_004e823c(&local_80);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0053d368  FUN_0053d368 =====

void FUN_0053d368(char *param_1,long param_2,void *param_3,void *param_4)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  char *pcVar3;
  ulong uVar4;
  char **ppcVar5;
  char *local_80;
  ulong local_78;
  undefined8 uStack_70;
  long local_68;
  
  ppcVar5 = &local_80;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar4 = (long)param_4 - (long)param_3;
  if (0x7fffffffffffffef < uVar4) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_004e823c(&local_80);
    }
    goto LAB_0053d57c;
  }
  if (uVar4 < 0x17) {
    uStack_70 = CONCAT17((char)uVar4,(undefined7)uStack_70);
  }
  else {
    uVar1 = (uVar4 | 0xf) + 1;
    local_80 = (char *)operator_new(uVar1);
    uStack_70 = uVar1 | 0x8000000000000000;
    local_78 = uVar4;
    ppcVar5 = (char **)local_80;
  }
  if (param_3 != param_4) {
    memcpy(ppcVar5,param_3,uVar4);
    ppcVar5 = (char **)((long)ppcVar5 + uVar4);
  }
  *(char *)ppcVar5 = '\0';
  ppcVar5 = (char **)local_80;
  if (-1 < (long)uStack_70) {
    ppcVar5 = &local_80;
  }
                    /* try { // try from 0053d42c to 0053d46b has its CatchHandler @ 0053d550 */
  __n = strxfrm_l((char *)0x0,(char *)ppcVar5,0,*(__locale_t *)(param_2 + 0x10));
  if (0x7fffffffffffffef < __n) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0053d530 to 0053d537 has its CatchHandler @ 0053d550 */
                    /* WARNING: Subroutine does not return */
      FUN_004e823c(param_1);
    }
    goto LAB_0053d57c;
  }
  if (__n < 0x17) {
    param_1[0x17] = (char)__n;
    pcVar3 = param_1;
    if (__n != 0) goto LAB_0053d47c;
  }
  else {
    uVar4 = (__n | 0xf) + 1;
    pcVar3 = (char *)operator_new(uVar4);
    *(char **)param_1 = pcVar3;
    *(size_t *)(param_1 + 8) = __n;
    *(ulong *)(param_1 + 0x10) = uVar4 | 0x8000000000000000;
LAB_0053d47c:
    memset(pcVar3,0,__n);
  }
  pcVar3[__n] = '\0';
  ppcVar5 = (char **)local_80;
  if (-1 < (long)uStack_70) {
    ppcVar5 = &local_80;
  }
  uVar4 = *(ulong *)(param_1 + 8);
  pcVar3 = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    uVar4 = (ulong)(byte)param_1[0x17];
    pcVar3 = param_1;
  }
                    /* try { // try from 0053d4c4 to 0053d4c7 has its CatchHandler @ 0053d538 */
  strxfrm_l(pcVar3,(char *)ppcVar5,uVar4 + 1,*(__locale_t *)(param_2 + 0x10));
  if ((long)uStack_70 < 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0053d57c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0053d580  FUN_0053d580 =====

void FUN_0053d580(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d204e0;
                    /* try { // try from 0053d5a0 to 0053d5a3 has its CatchHandler @ 0053d5b4 */
  freelocale((__locale_t)param_1[2]);
  FUN_005466c0(param_1);
  return;
}


// ===== 0053d5b8  FUN_0053d5b8 =====

void FUN_0053d5b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d204e0;
                    /* try { // try from 0053d5d8 to 0053d5db has its CatchHandler @ 0053d5f4 */
  freelocale((__locale_t)param_1[2]);
  FUN_005466c0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0053d5f8  FUN_0053d5f8 =====

uint FUN_0053d5f8(long param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  size_t sVar1;
  ulong uVar2;
  wchar_t ****__s2;
  ulong uVar3;
  long lVar4;
  wchar_t ***pppwVar5;
  wchar_t ***pppwVar6;
  int iVar7;
  wchar_t ****ppppwVar8;
  undefined8 uVar9;
  uint uVar10;
  wchar_t ***local_98;
  ulong local_90;
  undefined8 uStack_88;
  wchar_t ***local_80;
  ulong local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar3 = (long)param_3 - (long)param_2;
  if ((long)uVar3 < 0) {
    if (*(long *)(lVar4 + 0x28) != local_68) goto LAB_0053d814;
    FUN_00545334(&local_80);
  }
  else {
    if (uVar3 < 0x14) {
      ppppwVar8 = &local_80;
      uStack_70 = CONCAT17((char)(uVar3 >> 2),(undefined7)uStack_70);
    }
    else {
      uVar2 = ((long)uVar3 >> 2 | 3U) + 1;
      ppppwVar8 = (wchar_t ****)operator_new(uVar2 * 4);
      uStack_70 = uVar2 | 0x8000000000000000;
      local_78 = (long)uVar3 >> 2;
      local_80 = (wchar_t ***)ppppwVar8;
    }
    if (param_2 != param_3) {
      sVar1 = (uVar3 - 4 & 0xfffffffffffffffc) + 4;
      memcpy(ppppwVar8,param_2,sVar1);
      ppppwVar8 = (wchar_t ****)((long)ppppwVar8 + sVar1);
    }
    uVar3 = (long)param_5 - (long)param_4;
    *(wchar_t *)ppppwVar8 = L'\0';
    if (-1 < (long)uVar3) {
      if (uVar3 < 0x14) {
        ppppwVar8 = &local_98;
        uStack_88 = CONCAT17((char)(uVar3 >> 2),(undefined7)uStack_88);
      }
      else {
        uVar2 = ((long)uVar3 >> 2 | 3U) + 1;
                    /* try { // try from 0053d780 to 0053d783 has its CatchHandler @ 0053d7e8 */
        ppppwVar8 = (wchar_t ****)operator_new(uVar2 * 4);
        uStack_88 = uVar2 | 0x8000000000000000;
        local_90 = (long)uVar3 >> 2;
        local_98 = (wchar_t ***)ppppwVar8;
      }
      if (param_4 != param_5) {
        sVar1 = (uVar3 - 4 & 0xfffffffffffffffc) + 4;
        memcpy(ppppwVar8,param_4,sVar1);
        ppppwVar8 = (wchar_t ****)((long)ppppwVar8 + sVar1);
      }
      uVar2 = uStack_70;
      *(wchar_t *)ppppwVar8 = L'\0';
      pppwVar6 = local_80;
      uVar3 = uStack_88;
      pppwVar5 = local_98;
      ppppwVar8 = (wchar_t ****)local_80;
      if (-1 < (long)uVar2) {
        ppppwVar8 = &local_80;
      }
      __s2 = (wchar_t ****)local_98;
      if (-1 < (long)uStack_88) {
        __s2 = &local_98;
      }
      iVar7 = wcscoll_l((wchar_t *)ppppwVar8,(wchar_t *)__s2,*(__locale_t *)(param_1 + 0x10));
      if ((long)uVar3 < 0) {
        operator_delete(pppwVar5);
      }
      if ((long)uVar2 < 0) {
        operator_delete(pppwVar6);
      }
      uVar10 = (uint)(iVar7 != 0);
      if (iVar7 < 0) {
        uVar10 = 0xffffffff;
      }
      if (*(long *)(lVar4 + 0x28) == local_68) {
        return uVar10;
      }
      goto LAB_0053d814;
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 0053d7e0 to 0053d7e7 has its CatchHandler @ 0053d7e8 */
    uVar9 = FUN_00545334(&local_98);
                    /* catch() { ... } // from try @ 0053d780 with catch @ 0053d7e8
                       catch() { ... } // from try @ 0053d7e0 with catch @ 0053d7e8 */
    if ((long)uStack_70 < 0) {
      operator_delete(local_80);
    }
    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00d0fa5c(uVar9);
    }
  }
LAB_0053d814:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0053d818  FUN_0053d818 =====

void FUN_0053d818(wchar_t *param_1,long param_2,void *param_3,void *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  size_t sVar4;
  wchar_t *pwVar5;
  wchar_t **ppwVar6;
  wchar_t *local_80;
  ulong local_78;
  undefined8 uStack_70;
  long local_68;
  
  ppwVar6 = &local_80;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar2 = (long)param_4 - (long)param_3;
  if ((long)uVar2 < 0) {
    if (*(long *)(lVar3 + 0x28) != local_68) goto LAB_0053da58;
    FUN_00545334(&local_80);
LAB_0053d9e8:
    if (*(long *)(lVar3 + 0x28) != local_68) goto LAB_0053da58;
                    /* try { // try from 0053d9f8 to 0053da13 has its CatchHandler @ 0053da2c */
    FUN_00545334(param_1);
  }
  else {
    if (uVar2 < 0x14) {
      uStack_70 = CONCAT17((char)(uVar2 >> 2),(undefined7)uStack_70);
    }
    else {
      uVar1 = ((long)uVar2 >> 2 | 3U) + 1;
      local_80 = (wchar_t *)operator_new(uVar1 * 4);
      uStack_70 = uVar1 | 0x8000000000000000;
      local_78 = (long)uVar2 >> 2;
      ppwVar6 = (wchar_t **)local_80;
    }
    if (param_3 != param_4) {
      sVar4 = (uVar2 - 4 & 0xfffffffffffffffc) + 4;
      memcpy(ppwVar6,param_3,sVar4);
      ppwVar6 = (wchar_t **)((long)ppwVar6 + sVar4);
    }
    *(wchar_t *)ppwVar6 = L'\0';
    ppwVar6 = (wchar_t **)local_80;
    if (-1 < (long)uStack_70) {
      ppwVar6 = &local_80;
    }
                    /* try { // try from 0053d8e4 to 0053d933 has its CatchHandler @ 0053da2c */
    sVar4 = wcsxfrm_l((wchar_t *)0x0,(wchar_t *)ppwVar6,0,*(__locale_t *)(param_2 + 0x10));
    if (0x3fffffffffffffef < sVar4) goto LAB_0053d9e8;
    if (sVar4 < 5) {
      *(char *)((long)param_1 + 0x17) = (char)sVar4;
      pwVar5 = param_1;
      if (sVar4 != 0) goto LAB_0053d944;
LAB_0053d954:
      pwVar5[sVar4] = L'\0';
      ppwVar6 = (wchar_t **)local_80;
      if (-1 < (long)uStack_70) {
        ppwVar6 = &local_80;
      }
      uVar2 = *(ulong *)(param_1 + 2);
      pwVar5 = *(wchar_t **)param_1;
      if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
        uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
        pwVar5 = param_1;
      }
                    /* try { // try from 0053d98c to 0053d98f has its CatchHandler @ 0053da14 */
      wcsxfrm_l(pwVar5,(wchar_t *)ppwVar6,uVar2 + 1,*(__locale_t *)(param_2 + 0x10));
      if ((long)uStack_70 < 0) {
        operator_delete(local_80);
      }
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return;
      }
      goto LAB_0053da58;
    }
    if ((sVar4 | 3) < 0x3fffffffffffffff) {
      uVar2 = (sVar4 | 3) + 1;
      pwVar5 = (wchar_t *)operator_new(uVar2 * 4);
      *(wchar_t **)param_1 = pwVar5;
      *(size_t *)(param_1 + 2) = sVar4;
      *(ulong *)(param_1 + 4) = uVar2 | 0x8000000000000000;
LAB_0053d944:
      memset(pwVar5,0,sVar4 << 2);
      goto LAB_0053d954;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
LAB_0053da58:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0053da5c  FUN_0053da5c =====

void FUN_0053da5c(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 0053da80  FUN_0053da80 =====

bool FUN_0053da80(undefined8 param_1,ulong param_2,uint param_3)

{
  if (0x7f < param_3) {
    return false;
  }
  return (*(ulong *)(&DAT_001f7d30 + (ulong)param_3 * 8) & param_2) != 0;
}


// ===== 0053daa8  FUN_0053daa8 =====

uint * FUN_0053daa8(undefined8 param_1,uint *param_2,uint *param_3,undefined8 *param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_2;
  if (param_2 != param_3) {
    do {
      if (*param_2 < 0x80) {
        uVar2 = *(undefined8 *)(&DAT_001f7d30 + (ulong)*param_2 * 8);
      }
      else {
        uVar2 = 0;
      }
      param_2 = param_2 + 1;
      *param_4 = uVar2;
      puVar1 = param_3;
      param_4 = param_4 + 1;
    } while (param_2 != param_3);
  }
  return puVar1;
}


// ===== 0053daf0  FUN_0053daf0 =====

uint * FUN_0053daf0(undefined8 param_1,ulong param_2,uint *param_3,uint *param_4)

{
  if (param_3 != param_4) {
    while ((0x7f < *param_3 || ((*(ulong *)(&DAT_001f7d30 + (ulong)*param_3 * 8) & param_2) == 0)))
    {
      param_3 = param_3 + 1;
      if (param_3 == param_4) {
        return param_4;
      }
    }
  }
  return param_3;
}


// ===== 0053db38  FUN_0053db38 =====

uint * FUN_0053db38(undefined8 param_1,ulong param_2,uint *param_3,uint *param_4)

{
  uint *puVar1;
  
  puVar1 = param_3;
  if (param_3 != param_4) {
    do {
      if (0x7f < *param_3) {
        return param_3;
      }
      if ((*(ulong *)(&DAT_001f7d30 + (ulong)*param_3 * 8) & param_2) == 0) {
        return param_3;
      }
      param_3 = param_3 + 1;
      puVar1 = param_4;
    } while (param_3 != param_4);
  }
  return puVar1;
}


// ===== 0053db78  FUN_0053db78 =====

uint FUN_0053db78(undefined8 param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 0x80) {
    if (((DAT_00d61ba8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d61ba8), iVar1 != 0)) {
                    /* try { // try from 0053dbdc to 0053dbef has its CatchHandler @ 0053dc04 */
      DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_0054ff1c(&DAT_00d61ba8);
    }
    iVar1 = iswlower_l(param_2,DAT_00d61ba0);
    if (iVar1 != 0) {
      param_2 = param_2 - 0x20;
    }
  }
  return param_2;
}


// ===== 0053dc1c  FUN_0053dc1c =====

uint * FUN_0053dc1c(undefined8 param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  
  puVar3 = param_2;
  if (param_2 != param_3) {
    do {
      uVar4 = *param_2;
      if (uVar4 < 0x80) {
        if (((DAT_00d61ba8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d61ba8), iVar1 != 0)) {
                    /* try { // try from 0053dcac to 0053dcbb has its CatchHandler @ 0053dcdc */
          DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          FUN_0054ff1c(&DAT_00d61ba8);
        }
        iVar1 = islower_l(uVar4,DAT_00d61ba0);
        uVar4 = *param_2;
        if (iVar1 != 0) {
          uVar4 = *param_2 - 0x20;
        }
      }
      puVar2 = param_2 + 1;
      *param_2 = uVar4;
      puVar3 = param_3;
      param_2 = puVar2;
    } while (puVar2 != param_3);
  }
  return puVar3;
}


// ===== 0053dcf4  FUN_0053dcf4 =====

uint FUN_0053dcf4(undefined8 param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 0x80) {
    if (((DAT_00d61ba8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d61ba8), iVar1 != 0)) {
                    /* try { // try from 0053dd58 to 0053dd6b has its CatchHandler @ 0053dd80 */
      DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_0054ff1c(&DAT_00d61ba8);
    }
    iVar1 = isupper_l(param_2,DAT_00d61ba0);
    if (iVar1 != 0) {
      param_2 = param_2 + 0x20;
    }
  }
  return param_2;
}


// ===== 0053dd98  FUN_0053dd98 =====

uint * FUN_0053dd98(undefined8 param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  
  puVar3 = param_2;
  if (param_2 != param_3) {
    do {
      uVar4 = *param_2;
      if (uVar4 < 0x80) {
        if (((DAT_00d61ba8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d61ba8), iVar1 != 0)) {
                    /* try { // try from 0053de28 to 0053de37 has its CatchHandler @ 0053de58 */
          DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          FUN_0054ff1c(&DAT_00d61ba8);
        }
        iVar1 = isupper_l(uVar4,DAT_00d61ba0);
        uVar4 = *param_2;
        if (iVar1 != 0) {
          uVar4 = *param_2 + 0x20;
        }
      }
      puVar2 = param_2 + 1;
      *param_2 = uVar4;
      puVar3 = param_3;
      param_2 = puVar2;
    } while (puVar2 != param_3);
  }
  return puVar3;
}


// ===== 0053de70  FUN_0053de70 =====

undefined1 FUN_0053de70(undefined8 param_1,undefined1 param_2)

{
  return param_2;
}


// ===== 0053de78  FUN_0053de78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_0053de78(undefined8 param_1,uint *param_2,uint *param_3,uint *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  ulong *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  auVar12 = _DAT_001f45d0;
  auVar11 = _DAT_001f3040;
  auVar3 = _DAT_001f2b30;
  auVar2 = _DAT_001f25a0;
  if (param_2 == param_3) {
    return param_2;
  }
  uVar5 = (long)param_3 - (long)param_2;
  if ((7 < uVar5) && ((param_3 <= param_4 || (param_4 + uVar5 <= param_2)))) {
    if (uVar5 < 0x20) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar5 & 0xffffffffffffffe0;
      pauVar8 = (undefined1 (*) [16])(param_2 + 4);
      puVar4 = param_4 + 0x10;
      uVar9 = uVar7;
      do {
        auVar13 = pauVar8[-1];
        auVar1 = *pauVar8;
        pauVar8 = pauVar8 + 2;
        uVar9 = uVar9 - 0x20;
        auVar14 = a64_TBL(ZEXT816(0),auVar13,auVar2);
        auVar15 = a64_TBL(ZEXT816(0),auVar13,auVar3);
        auVar16 = a64_TBL(ZEXT816(0),auVar13,auVar11);
        auVar13 = a64_TBL(ZEXT816(0),auVar13,auVar12);
        auVar17 = a64_TBL(ZEXT816(0),auVar1,auVar2);
        *(long *)(puVar4 + -6) = auVar15._8_8_;
        *(long *)(puVar4 + -8) = auVar15._0_8_;
        *(long *)(puVar4 + -2) = auVar14._8_8_;
        *(long *)(puVar4 + -4) = auVar14._0_8_;
        auVar14 = a64_TBL(ZEXT816(0),auVar1,auVar3);
        auVar15 = a64_TBL(ZEXT816(0),auVar1,auVar11);
        *(long *)(puVar4 + -0xe) = auVar13._8_8_;
        *(long *)(puVar4 + -0x10) = auVar13._0_8_;
        *(long *)(puVar4 + -10) = auVar16._8_8_;
        *(long *)(puVar4 + -0xc) = auVar16._0_8_;
        auVar13 = a64_TBL(ZEXT816(0),auVar1,auVar12);
        *(long *)(puVar4 + 10) = auVar14._8_8_;
        *(long *)(puVar4 + 8) = auVar14._0_8_;
        *(long *)(puVar4 + 0xe) = auVar17._8_8_;
        *(long *)(puVar4 + 0xc) = auVar17._0_8_;
        *(long *)(puVar4 + 2) = auVar13._8_8_;
        *(long *)puVar4 = auVar13._0_8_;
        *(long *)(puVar4 + 6) = auVar15._8_8_;
        *(long *)(puVar4 + 4) = auVar15._0_8_;
        puVar4 = puVar4 + 0x20;
      } while (uVar9 != 0);
      if (uVar5 == uVar7) {
        return param_3;
      }
      if ((uVar5 & 0x18) == 0) {
        param_2 = (uint *)((long)param_2 + uVar7);
        param_4 = param_4 + uVar7;
        goto LAB_0053df80;
      }
    }
    auVar3 = _DAT_001f45d0;
    auVar2 = _DAT_001f3040;
    uVar9 = uVar5 & 0xfffffffffffffff8;
    lVar6 = uVar7 - uVar9;
    puVar10 = (ulong *)((long)param_2 + uVar7);
    puVar4 = param_4 + uVar7;
    do {
      auVar11._0_8_ = *puVar10;
      auVar11._8_8_ = 0;
      lVar6 = lVar6 + 8;
      auVar12 = a64_TBL(ZEXT816(0),auVar11,auVar2);
      auVar11 = a64_TBL(ZEXT816(0),auVar11,auVar3);
      *(long *)(puVar4 + 2) = auVar11._8_8_;
      *(long *)puVar4 = auVar11._0_8_;
      *(long *)(puVar4 + 6) = auVar12._8_8_;
      *(long *)(puVar4 + 4) = auVar12._0_8_;
      puVar10 = puVar10 + 1;
      puVar4 = puVar4 + 8;
    } while (lVar6 != 0);
    param_2 = (uint *)((long)param_2 + uVar9);
    param_4 = param_4 + uVar9;
    if (uVar5 == uVar9) {
      return param_3;
    }
  }
LAB_0053df80:
  do {
    puVar4 = (uint *)((long)param_2 + 1);
    *param_4 = (uint)(byte)*param_2;
    param_2 = puVar4;
    param_4 = param_4 + 1;
  } while (puVar4 != param_3);
  return param_3;
}


// ===== 0053df98  FUN_0053df98 =====

uint FUN_0053df98(undefined8 param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x80) {
    param_3 = param_2;
  }
  return param_3;
}


// ===== 0053dfa4  FUN_0053dfa4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_0053dfa4(undefined8 param_1,uint *param_2,uint *param_3,uint param_4,undefined1 *param_5)

{
  undefined1 (*pauVar1) [16];
  ulong uVar2;
  uint uVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint7 uVar10;
  uint7 uVar11;
  uint7 uVar12;
  uint7 uVar13;
  uint7 uVar14;
  uint7 uVar15;
  undefined4 uVar16;
  uint *puVar17;
  undefined1 uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined1 (*pauVar22) [16];
  undefined8 *puVar23;
  undefined1 uVar24;
  undefined8 uVar25;
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
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  uVar16 = _UNK_001f25bc;
  if (param_2 == param_3) {
    return param_2;
  }
  uVar19 = (long)param_3 + (-4 - (long)param_2);
  if ((0x1b < uVar19) &&
     (((undefined1 *)((long)param_2 + (uVar19 & 0xfffffffffffffffc) + 4) <= param_5 ||
      (param_5 + (uVar19 >> 2) + 1 <= param_2)))) {
    uVar2 = (uVar19 >> 2) + 1;
    uVar18 = (undefined1)param_4;
    if (uVar19 < 0x7c) {
      uVar20 = 0;
    }
    else {
      uVar20 = uVar2 & 0x7fffffffffffffe0;
      pauVar22 = (undefined1 (*) [16])(param_2 + 0x10);
      puVar23 = (undefined8 *)(param_5 + 0x10);
      auVar28._8_4_ = _UNK_001f25b8;
      auVar28._0_8_ = _DAT_001f25b0;
      auVar27._8_4_ = _UNK_001f25b8;
      auVar27._0_8_ = _DAT_001f25b0;
      uVar19 = uVar20;
      do {
        uVar19 = uVar19 - 0x20;
        auVar29._8_4_ = 0x7f;
        auVar29._0_8_ = 0x7f0000007f;
        auVar29._12_4_ = 0x7f;
        auVar36 = NEON_cmhi(pauVar22[-4],auVar29,4);
        auVar26._8_4_ = 0x7f;
        auVar26._0_8_ = 0x7f0000007f;
        auVar26._12_4_ = 0x7f;
        auVar35 = NEON_cmhi(pauVar22[-3],auVar26,4);
        auVar30._8_4_ = 0x7f;
        auVar30._0_8_ = 0x7f0000007f;
        auVar30._12_4_ = 0x7f;
        auVar32 = NEON_cmhi(pauVar22[-2],auVar30,4);
        auVar29 = *pauVar22;
        pauVar4 = pauVar22 + 1;
        auVar33._8_4_ = 0x7f;
        auVar33._0_8_ = 0x7f0000007f;
        auVar33._12_4_ = 0x7f;
        auVar30 = NEON_cmhi(pauVar22[-1],auVar33,4);
        auVar27._12_4_ = uVar16;
        auVar26 = a64_TBL(ZEXT816(0),pauVar22[-4],pauVar22[-3],pauVar22[-2],pauVar22[-1],auVar27);
        auVar37._8_4_ = 0x7f;
        auVar37._0_8_ = 0x7f0000007f;
        auVar37._12_4_ = 0x7f;
        auVar37 = NEON_cmhi(*pauVar22,auVar37,4);
        pauVar1 = pauVar22 + 2;
        pauVar5 = pauVar22 + 3;
        auVar38._8_4_ = 0x7f;
        auVar38._0_8_ = 0x7f0000007f;
        auVar38._12_4_ = 0x7f;
        auVar33 = NEON_cmhi(*pauVar4,auVar38,4);
        pauVar22 = pauVar22 + 8;
        auVar31[1] = auVar36[4];
        auVar31[0] = auVar36[0];
        auVar31[2] = auVar36[8];
        auVar31[3] = auVar36[0xc];
        auVar31[4] = auVar35[0];
        auVar31[5] = auVar35[4];
        auVar31[6] = auVar35[8];
        auVar31[7] = auVar35[0xc];
        auVar31[8] = auVar32[0];
        auVar31[9] = auVar32[4];
        auVar31[10] = auVar32[8];
        auVar31[0xb] = auVar32[0xc];
        auVar31[0xc] = auVar30[0];
        auVar31[0xd] = auVar30[4];
        auVar31[0xe] = auVar30[8];
        auVar31[0xf] = auVar30[0xc];
        auVar32._8_4_ = 0x7f;
        auVar32._0_8_ = 0x7f0000007f;
        auVar32._12_4_ = 0x7f;
        auVar32 = NEON_cmhi(*pauVar1,auVar32,4);
        auVar35._8_4_ = 0x7f;
        auVar35._0_8_ = 0x7f0000007f;
        auVar35._12_4_ = 0x7f;
        auVar38 = NEON_cmhi(*pauVar5,auVar35,4);
        auVar28._12_4_ = uVar16;
        auVar30 = a64_TBL(ZEXT816(0),auVar29,*pauVar4,*pauVar1,*pauVar5,auVar28);
        auVar36[1] = uVar18;
        auVar36[0] = uVar18;
        auVar36[2] = uVar18;
        auVar36[3] = uVar18;
        auVar36[4] = uVar18;
        auVar36[5] = uVar18;
        auVar36[6] = uVar18;
        auVar36[7] = uVar18;
        auVar36[8] = uVar18;
        auVar36[9] = uVar18;
        auVar36[10] = uVar18;
        auVar36[0xb] = uVar18;
        auVar36[0xc] = uVar18;
        auVar36[0xd] = uVar18;
        auVar36[0xe] = uVar18;
        auVar36[0xf] = uVar18;
        auVar29 = NEON_bit(auVar26,auVar36,auVar31,1);
        auVar34[1] = auVar37[4];
        auVar34[0] = auVar37[0];
        auVar34[2] = auVar37[8];
        auVar34[3] = auVar37[0xc];
        auVar34[4] = auVar33[0];
        auVar34[5] = auVar33[4];
        auVar34[6] = auVar33[8];
        auVar34[7] = auVar33[0xc];
        auVar34[8] = auVar32[0];
        auVar34[9] = auVar32[4];
        auVar34[10] = auVar32[8];
        auVar34[0xb] = auVar32[0xc];
        auVar34[0xc] = auVar38[0];
        auVar34[0xd] = auVar38[4];
        auVar34[0xe] = auVar38[8];
        auVar34[0xf] = auVar38[0xc];
        auVar9[1] = uVar18;
        auVar9[0] = uVar18;
        auVar9[2] = uVar18;
        auVar9[3] = uVar18;
        auVar9[4] = uVar18;
        auVar9[5] = uVar18;
        auVar9[6] = uVar18;
        auVar9[7] = uVar18;
        auVar9[8] = uVar18;
        auVar9[9] = uVar18;
        auVar9[10] = uVar18;
        auVar9[0xb] = uVar18;
        auVar9[0xc] = uVar18;
        auVar9[0xd] = uVar18;
        auVar9[0xe] = uVar18;
        auVar9[0xf] = uVar18;
        auVar26 = NEON_bit(auVar30,auVar9,auVar34,1);
        puVar23[-1] = auVar29._8_8_;
        puVar23[-2] = auVar29._0_8_;
        puVar23[1] = auVar26._8_8_;
        *puVar23 = auVar26._0_8_;
        puVar23 = puVar23 + 4;
      } while (uVar19 != 0);
      if (uVar2 == uVar20) {
        return param_3;
      }
      if ((uVar2 & 0x18) == 0) {
        param_2 = param_2 + uVar20;
        param_5 = param_5 + uVar20;
        goto LAB_0053e10c;
      }
    }
    uVar19 = uVar2 & 0x7ffffffffffffff8;
    pauVar22 = (undefined1 (*) [16])(param_2 + uVar20);
    param_2 = param_2 + uVar19;
    lVar21 = uVar20 - uVar19;
    uVar24 = (undefined1)_UNK_001f36e9;
    uVar10 = (uint7)_UNK_001f36e9 >> 8;
    uVar11 = (uint7)_UNK_001f36e9 >> 0x10;
    uVar12 = (uint7)_UNK_001f36e9 >> 0x18;
    uVar13 = (uint7)_UNK_001f36e9 >> 0x20;
    uVar14 = (uint7)_UNK_001f36e9 >> 0x28;
    uVar15 = (uint7)_UNK_001f36e9 >> 0x30;
    auVar8[8] = UNK_001f36e8;
    auVar8._0_8_ = _DAT_001f36e0;
    puVar23 = (undefined8 *)(param_5 + uVar20);
    do {
      lVar21 = lVar21 + 8;
      auVar6._8_4_ = 0x7f;
      auVar6._0_8_ = 0x7f0000007f;
      auVar6._12_4_ = 0x7f;
      auVar29 = NEON_cmhi(*pauVar22,auVar6,4);
      auVar7._8_4_ = 0x7f;
      auVar7._0_8_ = 0x7f0000007f;
      auVar7._12_4_ = 0x7f;
      auVar28 = NEON_cmhi(pauVar22[1],auVar7,4);
      auVar8[9] = uVar24;
      auVar8[10] = (char)uVar10;
      auVar8[0xb] = (char)uVar11;
      auVar8[0xc] = (char)uVar12;
      auVar8[0xd] = (char)uVar13;
      auVar8[0xe] = (char)uVar14;
      auVar8[0xf] = (char)uVar15;
      auVar27 = a64_TBL(ZEXT816(0),*pauVar22,pauVar22[1],auVar8);
      uVar25 = NEON_bit(auVar27._0_8_,
                        CONCAT17(uVar18,CONCAT16(uVar18,CONCAT15(uVar18,CONCAT14(uVar18,CONCAT13(
                                                  uVar18,CONCAT12(uVar18,CONCAT11(uVar18,uVar18)))))
                                                )),
                        CONCAT17(auVar28[0xc],
                                 CONCAT16(auVar28[8],
                                          CONCAT15(auVar28[4],
                                                   CONCAT14(auVar28[0],
                                                            CONCAT13(auVar29[0xc],
                                                                     CONCAT12(auVar29[8],
                                                                              CONCAT11(auVar29[4],
                                                                                       auVar29[0])))
                                                           )))),1);
      *puVar23 = uVar25;
      pauVar22 = pauVar22 + 2;
      puVar23 = puVar23 + 1;
    } while (lVar21 != 0);
    param_5 = param_5 + uVar19;
    if (uVar2 == uVar19) {
      return param_3;
    }
  }
LAB_0053e10c:
  do {
    puVar17 = param_2 + 1;
    uVar3 = param_4;
    if (*param_2 < 0x80) {
      uVar3 = *param_2;
    }
    *param_5 = (char)uVar3;
    param_2 = puVar17;
    param_5 = param_5 + 1;
  } while (puVar17 != param_3);
  return param_3;
}


// ===== 0053e12c  FUN_0053e12c =====

void FUN_0053e12c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d20520;
  if (((void *)param_1[2] != (void *)0x0) && (*(char *)(param_1 + 3) != '\0')) {
    operator_delete__((void *)param_1[2]);
  }
  FUN_005466c0(param_1);
  return;
}


// ===== 0053e16c  FUN_0053e16c =====

void FUN_0053e16c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d20520;
  if (((void *)param_1[2] != (void *)0x0) && (*(char *)(param_1 + 3) != '\0')) {
    operator_delete__((void *)param_1[2]);
  }
  FUN_005466c0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0053e1b4  FUN_0053e1b4 =====

uint FUN_0053e1b4(undefined8 param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 >> 7 & 1) == 0) {
    if (((DAT_00d61ba8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d61ba8), iVar1 != 0)) {
                    /* try { // try from 0053e214 to 0053e227 has its CatchHandler @ 0053e23c */
      DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_0054ff1c(&DAT_00d61ba8);
    }
    iVar1 = islower_l(param_2 & 0xff,DAT_00d61ba0);
    if (iVar1 != 0) {
      param_2 = param_2 - 0x20;
    }
  }
  return param_2;
}


// ===== 0053e254  FUN_0053e254 =====

byte * FUN_0053e254(undefined8 param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  
  pbVar3 = param_2;
  if (param_2 != param_3) {
    do {
      bVar4 = *param_2;
      if (-1 < (char)bVar4) {
        if (((DAT_00d61ba8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d61ba8), iVar1 != 0)) {
                    /* try { // try from 0053e2e0 to 0053e2ef has its CatchHandler @ 0053e310 */
          DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          FUN_0054ff1c(&DAT_00d61ba8);
        }
        iVar1 = islower_l((uint)bVar4,DAT_00d61ba0);
        bVar4 = *param_2;
        if (iVar1 != 0) {
          bVar4 = *param_2 - 0x20;
        }
      }
      pbVar2 = param_2 + 1;
      *param_2 = bVar4;
      pbVar3 = param_3;
      param_2 = pbVar2;
    } while (pbVar2 != param_3);
  }
  return pbVar3;
}


// ===== 0053e328  FUN_0053e328 =====

uint FUN_0053e328(undefined8 param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 >> 7 & 1) == 0) {
    if (((DAT_00d61ba8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d61ba8), iVar1 != 0)) {
                    /* try { // try from 0053e388 to 0053e39b has its CatchHandler @ 0053e3b0 */
      DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_0054ff1c(&DAT_00d61ba8);
    }
    iVar1 = isupper_l(param_2 & 0xff,DAT_00d61ba0);
    if (iVar1 != 0) {
      param_2 = param_2 + 0x20;
    }
  }
  return param_2;
}


// ===== 0053e3c8  FUN_0053e3c8 =====

byte * FUN_0053e3c8(undefined8 param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  
  pbVar3 = param_2;
  if (param_2 != param_3) {
    do {
      bVar4 = *param_2;
      if (-1 < (char)bVar4) {
        if (((DAT_00d61ba8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d61ba8), iVar1 != 0)) {
                    /* try { // try from 0053e454 to 0053e463 has its CatchHandler @ 0053e484 */
          DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          FUN_0054ff1c(&DAT_00d61ba8);
        }
        iVar1 = isupper_l((uint)bVar4,DAT_00d61ba0);
        bVar4 = *param_2;
        if (iVar1 != 0) {
          bVar4 = *param_2 + 0x20;
        }
      }
      pbVar2 = param_2 + 1;
      *param_2 = bVar4;
      pbVar3 = param_3;
      param_2 = pbVar2;
    } while (pbVar2 != param_3);
  }
  return pbVar3;
}


// ===== 0053e49c  FUN_0053e49c =====

undefined4 FUN_0053e49c(undefined8 param_1,undefined4 param_2)

{
  return param_2;
}


// ===== 0053e4a4  FUN_0053e4a4 =====

undefined1 *
FUN_0053e4a4(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_2 == param_3) {
    return param_2;
  }
  uVar3 = (long)param_3 - (long)param_2;
  if ((7 < uVar3) && (0x1f < (ulong)((long)param_4 - (long)param_2))) {
    if (uVar3 < 0x20) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar3 & 0xffffffffffffffe0;
      puVar4 = (undefined8 *)(param_2 + 0x10);
      puVar7 = (undefined8 *)(param_4 + 0x10);
      uVar8 = uVar5;
      do {
        puVar1 = puVar4 + -1;
        uVar9 = puVar4[-2];
        uVar11 = puVar4[1];
        uVar10 = *puVar4;
        puVar4 = puVar4 + 4;
        uVar8 = uVar8 - 0x20;
        puVar7[-1] = *puVar1;
        puVar7[-2] = uVar9;
        puVar7[1] = uVar11;
        *puVar7 = uVar10;
        puVar7 = puVar7 + 4;
      } while (uVar8 != 0);
      if (uVar3 == uVar5) {
        return param_3;
      }
      if ((uVar3 & 0x18) == 0) {
        param_2 = param_2 + uVar5;
        param_4 = param_4 + uVar5;
        goto LAB_0053e55c;
      }
    }
    uVar8 = uVar3 & 0xfffffffffffffff8;
    lVar6 = uVar5 - uVar8;
    puVar4 = (undefined8 *)(param_2 + uVar5);
    puVar7 = (undefined8 *)(param_4 + uVar5);
    do {
      lVar6 = lVar6 + 8;
      *puVar7 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar6 != 0);
    param_2 = param_2 + uVar8;
    param_4 = param_4 + uVar8;
    if (uVar3 == uVar8) {
      return param_3;
    }
  }
LAB_0053e55c:
  do {
    puVar2 = param_2 + 1;
    *param_4 = *param_2;
    param_2 = puVar2;
    param_4 = param_4 + 1;
  } while (puVar2 != param_3);
  return param_3;
}


// ===== 0053e574  FUN_0053e574 =====

undefined4 FUN_0053e574(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  if (-1 < (char)param_2) {
    param_3 = param_2;
  }
  return param_3;
}


// ===== 0053e584  FUN_0053e584 =====

char * FUN_0053e584(undefined8 param_1,char *param_2,char *param_3,char param_4,char *param_5)

{
  undefined1 (*pauVar1) [16];
  char cVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if (param_2 == param_3) {
    return param_2;
  }
  uVar4 = (long)param_3 - (long)param_2;
  if ((7 < uVar4) && (0x1f < (ulong)((long)param_5 - (long)param_2))) {
    if (uVar4 < 0x20) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar4 & 0xffffffffffffffe0;
      pauVar5 = (undefined1 (*) [16])(param_2 + 0x10);
      pcVar6 = param_5 + 0x10;
      uVar9 = uVar7;
      do {
        pauVar1 = pauVar5 + -1;
        auVar3 = *pauVar5;
        pauVar5 = pauVar5 + 2;
        uVar9 = uVar9 - 0x20;
        auVar13 = NEON_cmlt(*pauVar1,0,1);
        auVar14 = NEON_cmlt(auVar3,0,1);
        auVar11[1] = param_4;
        auVar11[0] = param_4;
        auVar11[2] = param_4;
        auVar11[3] = param_4;
        auVar11[4] = param_4;
        auVar11[5] = param_4;
        auVar11[6] = param_4;
        auVar11[7] = param_4;
        auVar11[8] = param_4;
        auVar11[9] = param_4;
        auVar11[10] = param_4;
        auVar11[0xb] = param_4;
        auVar11[0xc] = param_4;
        auVar11[0xd] = param_4;
        auVar11[0xe] = param_4;
        auVar11[0xf] = param_4;
        auVar11 = NEON_bit(*pauVar1,auVar11,auVar13,1);
        auVar13[1] = param_4;
        auVar13[0] = param_4;
        auVar13[2] = param_4;
        auVar13[3] = param_4;
        auVar13[4] = param_4;
        auVar13[5] = param_4;
        auVar13[6] = param_4;
        auVar13[7] = param_4;
        auVar13[8] = param_4;
        auVar13[9] = param_4;
        auVar13[10] = param_4;
        auVar13[0xb] = param_4;
        auVar13[0xc] = param_4;
        auVar13[0xd] = param_4;
        auVar13[0xe] = param_4;
        auVar13[0xf] = param_4;
        auVar13 = NEON_bit(auVar3,auVar13,auVar14,1);
        *(long *)(pcVar6 + -8) = auVar11._8_8_;
        *(long *)(pcVar6 + -0x10) = auVar11._0_8_;
        *(long *)(pcVar6 + 8) = auVar13._8_8_;
        *(long *)pcVar6 = auVar13._0_8_;
        pcVar6 = pcVar6 + 0x20;
      } while (uVar9 != 0);
      if (uVar4 == uVar7) {
        return param_3;
      }
      if ((uVar4 & 0x18) == 0) {
        param_2 = param_2 + uVar7;
        param_5 = param_5 + uVar7;
        goto LAB_0053e658;
      }
    }
    uVar9 = uVar4 & 0xfffffffffffffff8;
    lVar8 = uVar7 - uVar9;
    pcVar6 = param_2 + uVar7;
    pcVar10 = param_5 + uVar7;
    do {
      lVar8 = lVar8 + 8;
      uVar12 = NEON_cmlt(*(undefined8 *)pcVar6,0,1);
      uVar12 = NEON_bit(*(undefined8 *)pcVar6,
                        CONCAT17(param_4,CONCAT16(param_4,CONCAT15(param_4,CONCAT14(param_4,CONCAT13
                                                  (param_4,CONCAT12(param_4,CONCAT11(param_4,param_4
                                                                                    ))))))),uVar12,1
                       );
      *(undefined8 *)pcVar10 = uVar12;
      pcVar6 = pcVar6 + 8;
      pcVar10 = pcVar10 + 8;
    } while (lVar8 != 0);
    param_5 = param_5 + uVar9;
    param_2 = param_2 + uVar9;
    if (uVar4 == uVar9) {
      return param_3;
    }
  }
LAB_0053e658:
  do {
    pcVar6 = param_2 + 1;
    cVar2 = param_4;
    if (-1 < *param_2) {
      cVar2 = *param_2;
    }
    *param_5 = cVar2;
    param_5 = param_5 + 1;
    param_2 = pcVar6;
  } while (pcVar6 != param_3);
  return param_3;
}


// ===== 0053e678  FUN_0053e678 =====

void FUN_0053e678(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d20588;
                    /* try { // try from 0053e698 to 0053e69b has its CatchHandler @ 0053e6d4 */
  freelocale((__locale_t)param_1[4]);
  *param_1 = &PTR_FUN_00d20520;
  if (((void *)param_1[2] != (void *)0x0) && (*(char *)(param_1 + 3) != '\0')) {
    operator_delete__((void *)param_1[2]);
  }
  FUN_005466c0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0053e6d8  FUN_0053e6d8 =====

int FUN_0053e6d8(long param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = toupper_l(param_2 & 0xff,*(__locale_t *)(param_1 + 0x20));
  return iVar1;
}


// ===== 0053e6f8  FUN_0053e6f8 =====

byte * FUN_0053e6f8(long param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar3 = param_2;
  if (param_2 != param_3) {
    do {
      iVar1 = toupper_l((uint)*param_2,*(__locale_t *)(param_1 + 0x20));
      pbVar2 = param_2 + 1;
      *param_2 = (byte)iVar1;
      pbVar3 = param_3;
      param_2 = pbVar2;
    } while (pbVar2 != param_3);
  }
  return pbVar3;
}


// ===== 0053e74c  FUN_0053e74c =====

int FUN_0053e74c(long param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = tolower_l(param_2 & 0xff,*(__locale_t *)(param_1 + 0x20));
  return iVar1;
}


// ===== 0053e76c  FUN_0053e76c =====

byte * FUN_0053e76c(long param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar3 = param_2;
  if (param_2 != param_3) {
    do {
      iVar1 = tolower_l((uint)*param_2,*(__locale_t *)(param_1 + 0x20));
      pbVar2 = param_2 + 1;
      *param_2 = (byte)iVar1;
      pbVar3 = param_3;
      param_2 = pbVar2;
    } while (pbVar2 != param_3);
  }
  return pbVar3;
}


// ===== 0053e7c0  FUN_0053e7c0 =====

void FUN_0053e7c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d205f0;
                    /* try { // try from 0053e7e0 to 0053e7e3 has its CatchHandler @ 0053e7fc */
  freelocale((__locale_t)param_1[2]);
  FUN_005466c0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0053e800  FUN_0053e800 =====

/* WARNING: Type propagation algorithm not settling */

bool FUN_0053e800(long param_1,uint param_2,wint_t param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((param_2 & 1) == 0) {
    uVar1 = false;
  }
  else {
    iVar2 = iswspace_l(param_3,*(__locale_t *)(param_1 + 0x10));
    uVar1 = iVar2 != 0;
  }
  if (((param_2 >> 1 & 1) != 0) &&
     (iVar2 = iswprint_l(param_3,*(__locale_t *)(param_1 + 0x10)), iVar2 != 0)) {
    uVar1 = true;
  }
  if (((param_2 >> 2 & 1) != 0) &&
     (iVar2 = iswcntrl_l(param_3,*(__locale_t *)(param_1 + 0x10)), iVar2 != 0)) {
    uVar1 = true;
  }
  if (((param_2 >> 3 & 1) != 0) &&
     (iVar2 = iswupper_l(param_3,*(__locale_t *)(param_1 + 0x10)), iVar2 != 0)) {
    uVar1 = true;
  }
  if (((param_2 >> 4 & 1) != 0) &&
     (iVar2 = iswlower_l(param_3,*(__locale_t *)(param_1 + 0x10)), iVar2 != 0)) {
    uVar1 = true;
  }
  if (((param_2 >> 5 & 1) != 0) &&
     (iVar2 = iswalpha_l(param_3,*(__locale_t *)(param_1 + 0x10)), iVar2 != 0)) {
    uVar1 = true;
  }
  if (((param_2 >> 6 & 1) != 0) &&
     (iVar2 = iswdigit_l(param_3,*(__locale_t *)(param_1 + 0x10)), iVar2 != 0)) {
    uVar1 = true;
  }
  if (((param_2 >> 7 & 1) != 0) &&
     (iVar2 = iswpunct_l(param_3,*(__locale_t *)(param_1 + 0x10)), iVar2 != 0)) {
    uVar1 = true;
  }
  if (((param_2 >> 8 & 1) != 0) &&
     (iVar2 = iswxdigit_l(param_3,*(__locale_t *)(param_1 + 0x10)), iVar2 != 0)) {
    uVar1 = true;
  }
  if (((param_2 >> 9 & 1) != 0) &&
     (iVar2 = iswblank_l(param_3,*(__locale_t *)(param_1 + 0x10)), iVar2 != 0)) {
    uVar1 = true;
  }
  return (bool)uVar1;
}


// ===== 0053e94c  FUN_0053e94c =====

uint * FUN_0053e94c(long param_1,uint *param_2,uint *param_3,ulong *param_4)

{
  uint __wc;
  int iVar1;
  __locale_t __locale;
  ulong uVar2;
  uint *puVar3;
  
  puVar3 = param_2;
  if (param_2 != param_3) {
    do {
      __wc = *param_2;
      if (__wc < 0x80) {
        uVar2 = *(ulong *)(&DAT_001f7d30 + (ulong)__wc * 8);
LAB_0053e988:
        *param_4 = uVar2;
      }
      else {
        __locale = *(__locale_t *)(param_1 + 0x10);
        *param_4 = 0;
        iVar1 = iswspace_l(__wc,__locale);
        if (iVar1 != 0) {
          *param_4 = *param_4 | 1;
        }
        iVar1 = iswprint_l(__wc,*(__locale_t *)(param_1 + 0x10));
        if (iVar1 != 0) {
          *param_4 = *param_4 | 2;
        }
        iVar1 = iswcntrl_l(__wc,*(__locale_t *)(param_1 + 0x10));
        if (iVar1 != 0) {
          *param_4 = *param_4 | 4;
        }
        iVar1 = iswupper_l(__wc,*(__locale_t *)(param_1 + 0x10));
        if (iVar1 != 0) {
          *param_4 = *param_4 | 8;
        }
        iVar1 = iswlower_l(__wc,*(__locale_t *)(param_1 + 0x10));
        if (iVar1 != 0) {
          *param_4 = *param_4 | 0x10;
        }
        iVar1 = iswalpha_l(__wc,*(__locale_t *)(param_1 + 0x10));
        if (iVar1 != 0) {
          *param_4 = *param_4 | 0x20;
        }
        iVar1 = iswdigit_l(__wc,*(__locale_t *)(param_1 + 0x10));
        if (iVar1 != 0) {
          *param_4 = *param_4 | 0x40;
        }
        iVar1 = iswpunct_l(__wc,*(__locale_t *)(param_1 + 0x10));
        if (iVar1 != 0) {
          *param_4 = *param_4 | 0x80;
        }
        iVar1 = iswxdigit_l(__wc,*(__locale_t *)(param_1 + 0x10));
        if (iVar1 != 0) {
          *param_4 = *param_4 | 0x100;
        }
        iVar1 = iswblank_l(__wc,*(__locale_t *)(param_1 + 0x10));
        if (iVar1 != 0) {
          uVar2 = *param_4 | 0x200;
          goto LAB_0053e988;
        }
      }
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
      puVar3 = param_3;
    } while (param_2 != param_3);
  }
  return puVar3;
}


// ===== 0053eae0  FUN_0053eae0 =====

wint_t * FUN_0053eae0(long param_1,uint param_2,wint_t *param_3,wint_t *param_4)

{
  wint_t __wc;
  int iVar1;
  
  if (param_3 != param_4) {
    while (((((__wc = *param_3, (param_2 & 1) == 0 ||
              (iVar1 = iswspace_l(__wc,*(__locale_t *)(param_1 + 0x10)), iVar1 == 0)) &&
             (((param_2 >> 1 & 1) == 0 ||
              (iVar1 = iswprint_l(__wc,*(__locale_t *)(param_1 + 0x10)), iVar1 == 0)))) &&
            (((param_2 >> 2 & 1) == 0 ||
             (iVar1 = iswcntrl_l(__wc,*(__locale_t *)(param_1 + 0x10)), iVar1 == 0)))) &&
           (((param_2 >> 3 & 1) == 0 ||
            (iVar1 = iswupper_l(__wc,*(__locale_t *)(param_1 + 0x10)), iVar1 == 0))))) {
      if (((param_2 >> 4 & 1) != 0) &&
         (iVar1 = iswlower_l(__wc,*(__locale_t *)(param_1 + 0x10)), iVar1 != 0)) {
        return param_3;
      }
      if (((param_2 >> 5 & 1) != 0) &&
         (iVar1 = iswalpha_l(__wc,*(__locale_t *)(param_1 + 0x10)), iVar1 != 0)) {
        return param_3;
      }
      if (((param_2 >> 6 & 1) != 0) &&
         (iVar1 = iswdigit_l(__wc,*(__locale_t *)(param_1 + 0x10)), iVar1 != 0)) {
        return param_3;
      }
      if (((param_2 >> 7 & 1) != 0) &&
         (iVar1 = iswpunct_l(__wc,*(__locale_t *)(param_1 + 0x10)), iVar1 != 0)) {
        return param_3;
      }
      if (((param_2 >> 8 & 1) != 0) &&
         (iVar1 = iswxdigit_l(__wc,*(__locale_t *)(param_1 + 0x10)), iVar1 != 0)) {
        return param_3;
      }
      if (((param_2 >> 9 & 1) != 0) &&
         (iVar1 = iswblank_l(__wc,*(__locale_t *)(param_1 + 0x10)), iVar1 != 0)) {
        return param_3;
      }
      param_3 = param_3 + 1;
      if (param_3 == param_4) {
        return param_4;
      }
    }
  }
  return param_3;
}


// ===== 0053ec08  FUN_0053ec08 =====

wint_t * FUN_0053ec08(long param_1,uint param_2,wint_t *param_3,wint_t *param_4)

{
  wint_t __wc;
  int iVar1;
  wint_t *pwVar2;
  
  pwVar2 = param_3;
  if (param_3 != param_4) {
    do {
      __wc = *param_3;
      if (((((((param_2 & 1) == 0) ||
             (iVar1 = iswspace_l(__wc,*(__locale_t *)(param_1 + 0x10)), iVar1 == 0)) &&
            (((param_2 >> 1 & 1) == 0 ||
             (iVar1 = iswprint_l(__wc,*(__locale_t *)(param_1 + 0x10)), iVar1 == 0)))) &&
           (((param_2 >> 2 & 1) == 0 ||
            (iVar1 = iswcntrl_l(__wc,*(__locale_t *)(param_1 + 0x10)), iVar1 == 0)))) &&
          (((param_2 >> 3 & 1) == 0 ||
           (iVar1 = iswupper_l(__wc,*(__locale_t *)(param_1 + 0x10)), iVar1 == 0)))) &&
         ((((((param_2 >> 4 & 1) == 0 ||
             (iVar1 = iswlower_l(__wc,*(__locale_t *)(param_1 + 0x10)), iVar1 == 0)) &&
            (((param_2 >> 5 & 1) == 0 ||
             (iVar1 = iswalpha_l(__wc,*(__locale_t *)(param_1 + 0x10)), iVar1 == 0)))) &&
           (((param_2 >> 6 & 1) == 0 ||
            (iVar1 = iswdigit_l(__wc,*(__locale_t *)(param_1 + 0x10)), iVar1 == 0)))) &&
          ((((param_2 >> 7 & 1) == 0 ||
            (iVar1 = iswpunct_l(__wc,*(__locale_t *)(param_1 + 0x10)), iVar1 == 0)) &&
           (((param_2 >> 8 & 1) == 0 ||
            (iVar1 = iswxdigit_l(__wc,*(__locale_t *)(param_1 + 0x10)), iVar1 == 0)))))))) {
        if ((param_2 >> 9 & 1) == 0) {
          return param_3;
        }
        iVar1 = iswblank_l(__wc,*(__locale_t *)(param_1 + 0x10));
        if (iVar1 == 0) {
          return param_3;
        }
      }
      param_3 = param_3 + 1;
      pwVar2 = param_4;
    } while (param_3 != param_4);
  }
  return pwVar2;
}


// ===== 0053ed30  FUN_0053ed30 =====

wint_t FUN_0053ed30(long param_1,wint_t param_2)

{
  wint_t wVar1;
  
  wVar1 = towupper_l(param_2,*(__locale_t *)(param_1 + 0x10));
  return wVar1;
}


// ===== 0053ed40  FUN_0053ed40 =====

wint_t * FUN_0053ed40(long param_1,wint_t *param_2,wint_t *param_3)

{
  wint_t wVar1;
  wint_t *pwVar2;
  wint_t *pwVar3;
  
  pwVar3 = param_2;
  if (param_2 != param_3) {
    do {
      wVar1 = towupper_l(*param_2,*(__locale_t *)(param_1 + 0x10));
      pwVar2 = param_2 + 1;
      *param_2 = wVar1;
      pwVar3 = param_3;
      param_2 = pwVar2;
    } while (pwVar2 != param_3);
  }
  return pwVar3;
}


// ===== 0053ed94  FUN_0053ed94 =====

wint_t FUN_0053ed94(long param_1,wint_t param_2)

{
  wint_t wVar1;
  
  wVar1 = towlower_l(param_2,*(__locale_t *)(param_1 + 0x10));
  return wVar1;
}


// ===== 0053eda4  FUN_0053eda4 =====

wint_t * FUN_0053eda4(long param_1,wint_t *param_2,wint_t *param_3)

{
  wint_t wVar1;
  wint_t *pwVar2;
  wint_t *pwVar3;
  
  pwVar3 = param_2;
  if (param_2 != param_3) {
    do {
      wVar1 = towlower_l(*param_2,*(__locale_t *)(param_1 + 0x10));
      pwVar2 = param_2 + 1;
      *param_2 = wVar1;
      pwVar3 = param_3;
      param_2 = pwVar2;
    } while (pwVar2 != param_3);
  }
  return pwVar3;
}


// ===== 0053edf8  FUN_0053edf8 =====

wint_t FUN_0053edf8(long param_1,uint param_2)

{
  wint_t wVar1;
  __locale_t __dataset;
  
  __dataset = uselocale(*(__locale_t *)(param_1 + 0x10));
                    /* try { // try from 0053ee14 to 0053ee1b has its CatchHandler @ 0053ee40 */
  wVar1 = btowc(param_2 & 0xff);
  if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 0053ee24 to 0053ee2b has its CatchHandler @ 0053ee3c */
    uselocale(__dataset);
  }
  return wVar1;
}


// ===== 0053ee5c  FUN_0053ee5c =====

byte * FUN_0053ee5c(long param_1,byte *param_2,byte *param_3,wint_t *param_4)

{
  byte bVar1;
  wint_t wVar2;
  __locale_t __dataset;
  byte *pbVar3;
  
  pbVar3 = param_2;
  if (param_2 != param_3) {
    do {
      bVar1 = *param_2;
      __dataset = uselocale(*(__locale_t *)(param_1 + 0x10));
                    /* try { // try from 0053eeac to 0053eeb3 has its CatchHandler @ 0053eee8 */
      wVar2 = btowc((uint)bVar1);
      if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 0053eebc to 0053eec3 has its CatchHandler @ 0053eee4 */
        uselocale(__dataset);
      }
      param_2 = param_2 + 1;
      *param_4 = wVar2;
      pbVar3 = param_3;
      param_4 = param_4 + 1;
    } while (param_2 != param_3);
  }
  return pbVar3;
}


// ===== 0053ef04  FUN_0053ef04 =====

int FUN_0053ef04(long param_1,wint_t param_2,int param_3)

{
  int iVar1;
  __locale_t __dataset;
  
  __dataset = uselocale(*(__locale_t *)(param_1 + 0x10));
                    /* try { // try from 0053ef28 to 0053ef2f has its CatchHandler @ 0053ef5c */
  iVar1 = wctob(param_2);
  if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 0053ef38 to 0053ef3f has its CatchHandler @ 0053ef58 */
    uselocale(__dataset);
  }
  if (iVar1 != -1) {
    param_3 = iVar1;
  }
  return param_3;
}


// ===== 0053ef78  FUN_0053ef78 =====

wint_t * FUN_0053ef78(long param_1,wint_t *param_2,wint_t *param_3,int param_4,undefined1 *param_5)

{
  int iVar1;
  wint_t __c;
  int iVar2;
  __locale_t __dataset;
  wint_t *pwVar3;
  
  pwVar3 = param_2;
  if (param_2 != param_3) {
    do {
      __c = *param_2;
      __dataset = uselocale(*(__locale_t *)(param_1 + 0x10));
                    /* try { // try from 0053efd8 to 0053efdf has its CatchHandler @ 0053f018 */
      iVar2 = wctob(__c);
      if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 0053efe8 to 0053efef has its CatchHandler @ 0053f014 */
        uselocale(__dataset);
      }
      param_2 = param_2 + 1;
      iVar1 = param_4;
      if (iVar2 != -1) {
        iVar1 = iVar2;
      }
      *param_5 = (char)iVar1;
      pwVar3 = param_3;
      param_5 = param_5 + 1;
    } while (param_2 != param_3);
  }
  return pwVar3;
}


// ===== 0053f034  FUN_0053f034 =====

void FUN_0053f034(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 0053f058  FUN_0053f058 =====

undefined8
FUN_0053f058(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  *param_5 = param_3;
  *param_8 = param_6;
  return 3;
}


// ===== 0053f068  FUN_0053f068 =====

undefined8
FUN_0053f068(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  *param_5 = param_3;
  *param_8 = param_6;
  return 3;
}


// ===== 0053f078  FUN_0053f078 =====

undefined8
FUN_0053f078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// ===== 0053f084  FUN_0053f084 =====

undefined8 FUN_0053f084(void)

{
  return 1;
}


// ===== 0053f08c  FUN_0053f08c =====

undefined8 FUN_0053f08c(void)

{
  return 1;
}


// ===== 0053f094  FUN_0053f094 =====

ulong FUN_0053f094(undefined8 param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  
  uVar1 = param_4 - param_3;
  if (param_5 <= (ulong)(param_4 - param_3)) {
    uVar1 = param_5;
  }
  return uVar1;
}


// ===== 0053f0a4  FUN_0053f0a4 =====

undefined8 FUN_0053f0a4(void)

{
  return 1;
}


// ===== 0053f0ac  FUN_0053f0ac =====

void FUN_0053f0ac(undefined8 *param_1,long param_2)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_00d20678;
  param_1[1] = param_2 + -1;
  if (((DAT_00d61ba8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d61ba8), iVar1 != 0)) {
                    /* try { // try from 0053f104 to 0053f117 has its CatchHandler @ 0053f12c */
    DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_0054ff1c(&DAT_00d61ba8);
  }
  param_1[2] = DAT_00d61ba0;
  return;
}


// ===== 0053f14c  FUN_0053f14c =====

void FUN_0053f14c(void *param_1)

{
  FUN_00544dd4();
  operator_delete(param_1);
  return;
}


// ===== 0053f170  FUN_0053f170 =====

void FUN_0053f170(long param_1,mbstate_t *param_2,wchar_t *param_3,wchar_t *param_4,
                 wchar_t **param_5,char *param_6,char *param_7,long *param_8)

{
  wchar_t __wc;
  char cVar1;
  long lVar2;
  undefined1 uVar3;
  __locale_t p_Var4;
  size_t sVar5;
  char *pcVar6;
  char *pcVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  char acStack_74 [4];
  mbstate_t local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pwVar9 = param_3;
  pwVar8 = param_3;
  if (param_3 != param_4) {
    do {
      pwVar9 = pwVar8;
      if (*pwVar8 == L'\0') break;
      pwVar8 = pwVar8 + 1;
      pwVar9 = param_4;
    } while (pwVar8 != param_4);
  }
  *param_8 = (long)param_6;
  *param_5 = param_3;
  if (param_3 != param_4) {
LAB_0053f20c:
    do {
      if (param_6 == param_7) break;
      local_70 = *param_2;
      p_Var4 = uselocale(*(__locale_t *)(param_1 + 0x10));
                    /* try { // try from 0053f238 to 0053f24f has its CatchHandler @ 0053f458 */
      sVar5 = wcsnrtombs(param_6,param_5,(long)pwVar9 - (long)param_3 >> 2,
                         (long)param_7 - (long)param_6,param_2);
      if (p_Var4 != (__locale_t)0x0) {
                    /* try { // try from 0053f258 to 0053f25f has its CatchHandler @ 0053f454 */
        uselocale(p_Var4);
      }
      if (sVar5 == 0) {
LAB_0053f348:
        uVar3 = 1;
        goto LAB_0053f3e0;
      }
      if (sVar5 == 0xffffffffffffffff) {
        *param_8 = (long)param_6;
        if (param_3 != *param_5) goto LAB_0053f364;
        goto LAB_0053f3c0;
      }
      param_6 = (char *)(*param_8 + sVar5);
      *param_8 = (long)param_6;
      if (param_6 == param_7) {
        param_3 = *param_5;
        break;
      }
      if (pwVar9 != param_4) {
        p_Var4 = uselocale(*(__locale_t *)(param_1 + 0x10));
                    /* try { // try from 0053f298 to 0053f2a7 has its CatchHandler @ 0053f43c */
        sVar5 = wcrtomb(acStack_74,L'\0',param_2);
        if (p_Var4 != (__locale_t)0x0) {
                    /* try { // try from 0053f2b0 to 0053f2b7 has its CatchHandler @ 0053f438 */
          uselocale(p_Var4);
        }
        if (sVar5 == 0xffffffffffffffff) {
          uVar3 = 2;
          goto LAB_0053f3e0;
        }
        if ((ulong)((long)param_7 - *param_8) < sVar5) goto LAB_0053f348;
        if (sVar5 != 0) {
          pcVar6 = acStack_74;
          do {
            pcVar7 = (char *)*param_8;
            sVar5 = sVar5 - 1;
            cVar1 = *pcVar6;
            *param_8 = (long)(pcVar7 + 1);
            *pcVar7 = cVar1;
            pcVar6 = pcVar6 + 1;
          } while (sVar5 != 0);
        }
        param_3 = *param_5 + 1;
        *param_5 = param_3;
        for (pwVar8 = param_3;
            (pwVar9 = param_4, pwVar8 != param_4 && (pwVar9 = pwVar8, *pwVar8 != L'\0'));
            pwVar8 = pwVar8 + 1) {
        }
        param_6 = (char *)*param_8;
        if (param_3 == param_4) break;
        goto LAB_0053f20c;
      }
      param_3 = *param_5;
      pwVar9 = param_4;
    } while (param_3 != param_4);
  }
  uVar3 = param_3 != param_4;
  goto LAB_0053f3e0;
  while( true ) {
    param_3 = param_3 + 1;
    param_6 = (char *)(*param_8 + sVar5);
    *param_8 = (long)param_6;
    if (param_3 == *param_5) break;
LAB_0053f364:
    __wc = *param_3;
    p_Var4 = uselocale(*(__locale_t *)(param_1 + 0x10));
                    /* try { // try from 0053f378 to 0053f387 has its CatchHandler @ 0053f420 */
    sVar5 = wcrtomb(param_6,__wc,&local_70);
    if (p_Var4 != (__locale_t)0x0) {
                    /* try { // try from 0053f390 to 0053f397 has its CatchHandler @ 0053f41c */
      uselocale(p_Var4);
    }
    if (sVar5 == 0xffffffffffffffff) break;
  }
LAB_0053f3c0:
  uVar3 = 2;
  *param_5 = param_3;
LAB_0053f3e0:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 0053f48c  FUN_0053f48c =====

void FUN_0053f48c(long param_1,mbstate_t *param_2,char *param_3,char *param_4,char **param_5,
                 wchar_t *param_6,wchar_t *param_7,long *param_8)

{
  wchar_t *__pwc;
  long lVar1;
  bool bVar2;
  undefined1 uVar3;
  __locale_t p_Var4;
  size_t sVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  mbstate_t local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pcVar8 = param_4;
  pcVar6 = param_3;
  if (param_3 != param_4) {
    do {
      pcVar8 = pcVar6;
      if (*pcVar6 == '\0') break;
      pcVar6 = pcVar6 + 1;
      pcVar8 = param_4;
    } while (pcVar6 != param_4);
  }
  *param_8 = (long)param_6;
  *param_5 = param_3;
  if ((param_3 != param_4) && (param_6 != param_7)) {
    while( true ) {
      local_70 = *param_2;
      p_Var4 = uselocale(*(__locale_t *)(param_1 + 0x10));
                    /* try { // try from 0053f540 to 0053f557 has its CatchHandler @ 0053f758 */
      sVar5 = mbsnrtowcs(param_6,param_5,(long)pcVar8 - (long)param_3,
                         (long)param_7 - (long)param_6 >> 2,param_2);
      if (p_Var4 != (__locale_t)0x0) {
                    /* try { // try from 0053f560 to 0053f567 has its CatchHandler @ 0053f754 */
        uselocale(p_Var4);
      }
      if (sVar5 == 0xffffffffffffffff) {
        *param_8 = (long)param_6;
        pcVar6 = *param_5;
        goto LAB_0053f650;
      }
      __pwc = (wchar_t *)(*param_8 + sVar5 * 4);
      *param_8 = (long)__pwc;
      if (__pwc == param_7) break;
      bVar2 = pcVar8 != param_4;
      param_3 = *param_5;
      pcVar8 = param_4;
      if (bVar2) {
        p_Var4 = uselocale(*(__locale_t *)(param_1 + 0x10));
                    /* try { // try from 0053f5a4 to 0053f5b7 has its CatchHandler @ 0053f73c */
        sVar5 = mbrtowc(__pwc,param_3,1,param_2);
        if (p_Var4 != (__locale_t)0x0) {
                    /* try { // try from 0053f5c0 to 0053f5c7 has its CatchHandler @ 0053f738 */
          uselocale(p_Var4);
        }
        if (sVar5 != 0) {
          uVar3 = 2;
          goto LAB_0053f6e0;
        }
        *param_8 = *param_8 + 4;
        pcVar6 = *param_5 + 1;
        *param_5 = pcVar6;
        pcVar7 = pcVar6;
        param_3 = param_4;
        if (pcVar6 == param_4) goto LAB_0053f6d8;
        do {
          pcVar8 = pcVar7;
          param_3 = pcVar6;
          if (*pcVar7 == '\0') break;
          pcVar7 = pcVar7 + 1;
          pcVar8 = param_4;
        } while (pcVar7 != param_4);
      }
      if ((param_3 == param_4) || (param_6 = (wchar_t *)*param_8, param_6 == param_7))
      goto LAB_0053f6d8;
    }
    param_3 = *param_5;
  }
LAB_0053f6d8:
  uVar3 = param_3 != param_4;
  goto LAB_0053f6e0;
LAB_0053f650:
  if (param_3 == pcVar6) goto LAB_0053f6b8;
  p_Var4 = uselocale(*(__locale_t *)(param_1 + 0x10));
                    /* try { // try from 0053f66c to 0053f67f has its CatchHandler @ 0053f720 */
  sVar5 = mbrtowc(param_6,param_3,(long)pcVar8 - (long)param_3,&local_70);
  if (p_Var4 != (__locale_t)0x0) {
                    /* try { // try from 0053f688 to 0053f68f has its CatchHandler @ 0053f71c */
    uselocale(p_Var4);
  }
  if (sVar5 == 0) {
    sVar5 = 1;
  }
  else {
    if (sVar5 == 0xfffffffffffffffe) {
      uVar3 = 1;
      goto LAB_0053f6c0;
    }
    if (sVar5 == 0xffffffffffffffff) {
      uVar3 = 2;
      goto LAB_0053f6c0;
    }
  }
  param_3 = param_3 + sVar5;
  param_6 = (wchar_t *)(*param_8 + 4);
  *param_8 = (long)param_6;
  pcVar6 = *param_5;
  goto LAB_0053f650;
LAB_0053f6b8:
  uVar3 = param_3 != param_4;
LAB_0053f6c0:
  *param_5 = param_3;
LAB_0053f6e0:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


// ===== 0053f78c  FUN_0053f78c =====

void FUN_0053f78c(long param_1,mbstate_t *param_2,long param_3,long param_4,long *param_5)

{
  char cVar1;
  long lVar2;
  __locale_t __dataset;
  size_t sVar3;
  undefined8 uVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  char acStack_4c [4];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *param_5 = param_3;
  __dataset = uselocale(*(__locale_t *)(param_1 + 0x10));
                    /* try { // try from 0053f7cc to 0053f7db has its CatchHandler @ 0053f870 */
  sVar3 = wcrtomb(acStack_4c,L'\0',param_2);
  if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 0053f7e4 to 0053f7eb has its CatchHandler @ 0053f86c */
    uselocale(__dataset);
  }
  if (sVar3 + 1 < 2) {
    uVar4 = 2;
  }
  else {
    uVar5 = sVar3 - 1;
    if ((ulong)(param_4 - *param_5) < uVar5) {
      uVar4 = 1;
    }
    else {
      if (uVar5 != 0) {
        pcVar6 = acStack_4c;
        do {
          pcVar7 = (char *)*param_5;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar6;
          *param_5 = (long)(pcVar7 + 1);
          *pcVar7 = cVar1;
          pcVar6 = pcVar6 + 1;
        } while (uVar5 != 0);
      }
      uVar4 = 0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 0053f8a0  FUN_0053f8a0 =====

void FUN_0053f8a0(long param_1)

{
  long lVar1;
  int iVar2;
  __locale_t p_Var3;
  ulong uVar4;
  size_t sVar5;
  long lVar6;
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0053f8c8 to 0053f8cb has its CatchHandler @ 0053f980 */
  p_Var3 = uselocale(*(__locale_t *)(param_1 + 0x10));
                    /* try { // try from 0053f8d4 to 0053f8e3 has its CatchHandler @ 0053f96c */
  iVar2 = mbtowc((wchar_t *)0x0,(char *)0x0,4);
  if (p_Var3 != (__locale_t)0x0) {
                    /* try { // try from 0053f8ec to 0053f8f3 has its CatchHandler @ 0053f968 */
    uselocale(p_Var3);
  }
  if (iVar2 == 0) {
    if (*(__locale_t *)(param_1 + 0x10) == (__locale_t)0x0) {
      uVar4 = 1;
    }
    else {
                    /* try { // try from 0053f908 to 0053f90b has its CatchHandler @ 0053f980 */
      p_Var3 = uselocale(*(__locale_t *)(param_1 + 0x10));
                    /* try { // try from 0053f914 to 0053f917 has its CatchHandler @ 0053f964 */
      sVar5 = __ctype_get_mb_cur_max();
      if (p_Var3 != (__locale_t)0x0) {
                    /* try { // try from 0053f920 to 0053f927 has its CatchHandler @ 0053f960 */
        uselocale(p_Var3);
      }
      uVar4 = (ulong)(sVar5 == 1);
    }
  }
  else {
    uVar4 = 0xffffffff;
  }
  if (*(long *)(lVar1 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 0053f984  FUN_0053f984 =====

undefined8 FUN_0053f984(void)

{
  return 0;
}


// ===== 0053f98c  FUN_0053f98c =====

int FUN_0053f98c(long param_1,mbstate_t *param_2,char *param_3,char *param_4,ulong param_5)

{
  __locale_t __dataset;
  size_t sVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  iVar3 = 0;
  if ((param_5 != 0) && (param_3 != param_4)) {
    iVar3 = 0;
    uVar4 = 1;
    do {
      __dataset = uselocale(*(__locale_t *)(param_1 + 0x10));
                    /* try { // try from 0053f9e4 to 0053f9f3 has its CatchHandler @ 0053fa64 */
      sVar1 = mbrlen(param_3,(long)param_4 - (long)param_3,param_2);
      if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 0053f9fc to 0053fa03 has its CatchHandler @ 0053fa60 */
        uselocale(__dataset);
      }
      if (sVar1 == 0) {
        sVar1 = 1;
        iVar2 = 1;
      }
      else {
        if (sVar1 + 2 < 2) {
          return iVar3;
        }
        iVar2 = (int)sVar1;
      }
      iVar3 = iVar2 + iVar3;
      if (param_5 <= uVar4) {
        return iVar3;
      }
      param_3 = param_3 + sVar1;
      uVar4 = uVar4 + 1;
    } while (param_3 != param_4);
  }
  return iVar3;
}


// ===== 0053fa80  FUN_0053fa80 =====

ulong FUN_0053fa80(long param_1)

{
  long lVar1;
  __locale_t __dataset;
  size_t sVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (*(__locale_t *)(param_1 + 0x10) == (__locale_t)0x0) {
    sVar2 = 1;
  }
  else {
                    /* try { // try from 0053faa8 to 0053faab has its CatchHandler @ 0053fb14 */
    __dataset = uselocale(*(__locale_t *)(param_1 + 0x10));
                    /* try { // try from 0053fab4 to 0053fab7 has its CatchHandler @ 0053fb00 */
    sVar2 = __ctype_get_mb_cur_max();
    if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 0053fac0 to 0053fac7 has its CatchHandler @ 0053fafc */
      uselocale(__dataset);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return sVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0053fb18  FUN_0053fb18 =====

void FUN_0053fb18(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 0053fb3c  FUN_0053fb3c =====

void FUN_0053fb3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  long lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_6;
  uStack_40 = param_3;
  FUN_0053fbc4(param_3,param_4,&uStack_40,param_6,param_7,&local_48,0x10ffff,0);
  *param_5 = uStack_40;
  *param_8 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0053fbc4  FUN_0053fbc4 =====

undefined8
FUN_0053fbc4(long param_1,ushort *param_2,long *param_3,undefined1 *param_4,long param_5,
            long *param_6,ulong param_7,uint param_8)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 *puVar4;
  uint uVar5;
  ushort *puVar6;
  byte *pbVar7;
  byte bVar8;
  
  *param_3 = param_1;
  *param_6 = (long)param_4;
  if ((param_8 >> 1 & 1) != 0) {
    if (param_5 - (long)param_4 < 3) {
      return 1;
    }
    *param_6 = (long)(param_4 + 1);
    *param_4 = 0xef;
    puVar4 = (undefined1 *)*param_6;
    *param_6 = (long)(puVar4 + 1);
    *puVar4 = 0xbb;
    puVar4 = (undefined1 *)*param_6;
    *param_6 = (long)(puVar4 + 1);
    *puVar4 = 0xbf;
  }
  puVar6 = (ushort *)*param_3;
  do {
    if (param_2 <= puVar6) {
      return 0;
    }
    uVar2 = *puVar6;
    if (param_7 < uVar2) {
      return 2;
    }
    uVar5 = (uint)uVar2;
    if (uVar2 < 0x80) {
      pbVar7 = (byte *)*param_6;
      if (param_5 - (long)pbVar7 < 1) {
        return 1;
      }
      *param_6 = (long)(pbVar7 + 1);
      *pbVar7 = (byte)uVar2;
    }
    else {
      if (uVar2 < 0x800) {
        pbVar7 = (byte *)*param_6;
        if (param_5 - (long)pbVar7 < 2) {
          return 1;
        }
        bVar8 = (byte)(uVar2 >> 6) | 0xc0;
      }
      else {
        if (0x1a < uVar2 >> 0xb) {
          if (uVar2 >> 10 < 0x37) {
            if ((long)param_2 - (long)puVar6 < 4) {
              return 1;
            }
            uVar3 = puVar6[1];
            if ((uVar3 & 0xfc00) != 0xdc00) {
              return 2;
            }
            if (param_5 - *param_6 < 4) {
              return 1;
            }
            if (param_7 < ((ulong)uVar3 & 0x3ff | ((ulong)uVar5 & 0x3ff) << 10) + 0x10000) {
              return 2;
            }
            *param_3 = (long)(puVar6 + 1);
            pbVar7 = (byte *)*param_6;
            uVar1 = (uVar2 >> 6 & 0xf) + 1;
            *param_6 = (long)(pbVar7 + 1);
            *pbVar7 = (byte)(uVar1 >> 2) | 0xf0;
            pbVar7 = (byte *)*param_6;
            *param_6 = (long)(pbVar7 + 1);
            *pbVar7 = (byte)((uVar1 & 3) << 4) | (byte)(uVar2 >> 2) & 0xf | 0x80;
            pbVar7 = (byte *)*param_6;
            *param_6 = (long)(pbVar7 + 1);
            *pbVar7 = (byte)((uVar5 & 3) << 4) | (byte)(uVar3 >> 6) & 0xf | 0x80;
            pbVar7 = (byte *)*param_6;
            *param_6 = (long)(pbVar7 + 1);
            *pbVar7 = (byte)uVar3 & 0x3f | 0x80;
            goto LAB_0053fc6c;
          }
          if (uVar5 < 0xe000) {
            return 2;
          }
        }
        pbVar7 = (byte *)*param_6;
        if (param_5 - (long)pbVar7 < 3) {
          return 1;
        }
        *param_6 = (long)(pbVar7 + 1);
        *pbVar7 = (byte)(uVar2 >> 0xc) | 0xe0;
        pbVar7 = (byte *)*param_6;
        bVar8 = (byte)(uVar2 >> 6) & 0x3f | 0x80;
      }
      *param_6 = (long)(pbVar7 + 1);
      *pbVar7 = bVar8;
      pbVar7 = (byte *)*param_6;
      *param_6 = (long)(pbVar7 + 1);
      *pbVar7 = (byte)uVar2 & 0x3f | 0x80;
    }
LAB_0053fc6c:
    puVar6 = (ushort *)(*param_3 + 2);
    *param_3 = (long)puVar6;
  } while( true );
}


// ===== 0053fde0  FUN_0053fde0 =====

void FUN_0053fde0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  long lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_6;
  uStack_40 = param_3;
  FUN_0053fe68(param_3,param_4,&uStack_40,param_6,param_7,&local_48,0x10ffff,0);
  *param_5 = uStack_40;
  *param_8 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0053fe68  FUN_0053fe68 =====

undefined8
FUN_0053fe68(long param_1,byte *param_2,long *param_3,long param_4,ushort *param_5,long *param_6,
            ulong param_7,uint param_8)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  ushort *puVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  
  *param_3 = param_1;
  *param_6 = param_4;
  pbVar9 = (byte *)*param_3;
  if (((((param_8 >> 2 & 1) != 0) && (2 < (long)param_2 - (long)pbVar9)) && (*pbVar9 == 0xef)) &&
     ((pbVar9[1] == 0xbb && (pbVar9[2] == 0xbf)))) {
    pbVar9 = pbVar9 + 3;
    *param_3 = (long)pbVar9;
  }
  if (pbVar9 < param_2) {
    puVar8 = (ushort *)*param_6;
    do {
      if (param_5 <= puVar8) {
        return 1;
      }
      bVar4 = *pbVar9;
      uVar11 = (ulong)bVar4;
      if (param_7 < uVar11) {
        return 2;
      }
      if ((char)bVar4 < '\0') {
        if (bVar4 < 0xc2) {
          return 2;
        }
        if (bVar4 < 0xe0) {
          if ((long)param_2 - (long)pbVar9 < 2) {
            return 1;
          }
          if ((pbVar9[1] & 0xc0) != 0x80) {
            return 2;
          }
          uVar11 = (ulong)pbVar9[1] & 0x3f | (uVar11 & 0x1f) << 6;
          if (param_7 < uVar11) {
            return 2;
          }
          pbVar9 = pbVar9 + 2;
          goto LAB_0053fff0;
        }
        uVar10 = (uint)bVar4;
        if (bVar4 < 0xf0) {
          if ((long)param_2 - (long)pbVar9 < 3) {
            return 1;
          }
          bVar4 = pbVar9[1];
          if (uVar10 == 0xed) {
            bVar5 = bVar4 & 0xe0;
joined_r0x0053ffb8:
            if (bVar5 != 0x80) {
              return 2;
            }
          }
          else {
            if (uVar10 != 0xe0) {
              bVar5 = bVar4 & 0xc0;
              goto joined_r0x0053ffb8;
            }
            if ((bVar4 & 0xe0) != 0xa0) {
              return 2;
            }
          }
          if (((pbVar9[2] & 0xc0) != 0x80) ||
             (uVar7 = uVar11 << 0xc, uVar2 = ((ulong)bVar4 & 0x3f) << 6,
             uVar3 = (ulong)pbVar9[2] & 0x3f, uVar11 = uVar7 | uVar2 | uVar3,
             param_7 < (uVar7 & 0xffc0 | uVar2 | uVar3))) {
            return 2;
          }
          pbVar9 = pbVar9 + 3;
          goto LAB_0053fff0;
        }
        if (0xf4 < uVar10) {
          return 2;
        }
        if ((long)param_2 - (long)pbVar9 < 4) {
          return 1;
        }
        bVar4 = pbVar9[1];
        bVar5 = pbVar9[2];
        bVar6 = pbVar9[3];
        uVar12 = (uint)bVar4;
        if (uVar10 == 0xf4) {
          uVar1 = uVar12 & 0xf0;
joined_r0x0054001c:
          if (uVar1 != 0x80) {
            return 2;
          }
        }
        else {
          if (uVar10 != 0xf0) {
            uVar1 = uVar12 & 0xc0;
            goto joined_r0x0054001c;
          }
          if (0x2f < (uVar12 + 0x70 & 0xff)) {
            return 2;
          }
        }
        if ((bVar5 & 0xc0) != 0x80) {
          return 2;
        }
        if ((bVar6 & 0xc0) != 0x80) {
          return 2;
        }
        if ((long)param_5 - (long)puVar8 < 4) {
          return 1;
        }
        if (param_7 < (((ulong)uVar10 & 7) << 0x12 | ((ulong)bVar4 & 0x3f) << 0xc |
                       ((ulong)bVar5 & 0x3f) << 6 | (ulong)bVar6 & 0x3f)) {
          return 2;
        }
        *puVar8 = ((ushort)((uVar12 & 0xf) << 2) |
                   (ushort)(((uVar10 & 7) << 2 | bVar4 >> 4 & 3) << 6) | bVar5 >> 4 & 3) + 0x3fc0 |
                  0xd800;
        puVar8[1] = bVar6 & 0x3f | (ushort)((bVar5 & 0xf) << 6) | 0xdc00;
        *param_6 = (long)(puVar8 + 1);
        pbVar9 = (byte *)(*param_3 + 4);
      }
      else {
        pbVar9 = pbVar9 + 1;
LAB_0053fff0:
        *puVar8 = (ushort)uVar11;
      }
      *param_3 = (long)pbVar9;
      puVar8 = (ushort *)(*param_6 + 2);
      *param_6 = (long)puVar8;
      pbVar9 = (byte *)*param_3;
    } while (pbVar9 < param_2);
  }
  return 0;
}


// ===== 005400c8  FUN_005400c8 =====

undefined8
FUN_005400c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// ===== 005400d4  FUN_005400d4 =====

undefined8 FUN_005400d4(void)

{
  return 0;
}


// ===== 005400dc  FUN_005400dc =====

undefined8 FUN_005400dc(void)

{
  return 0;
}


// ===== 005400e4  FUN_005400e4 =====

void FUN_005400e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_005400fc(param_3,param_4,param_5,0x10ffff,0);
  return;
}


// ===== 005400fc  FUN_005400fc =====

int FUN_005400fc(byte *param_1,byte *param_2,ulong param_3,ulong param_4,uint param_5)

{
  long lVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  
  pbVar3 = param_1;
  if ((((2 < (long)param_2 - (long)param_1) && ((param_5 >> 2 & 1) != 0)) && (*param_1 == 0xef)) &&
     (param_1[1] == 0xbb)) {
    lVar1 = 3;
    if (param_1[2] != 0xbf) {
      lVar1 = 0;
    }
    pbVar3 = param_1 + lVar1;
  }
  if ((pbVar3 < param_2) && (param_3 != 0)) {
    uVar4 = 0;
    while( true ) {
      bVar6 = *pbVar3;
      uVar5 = (ulong)bVar6;
      if (param_4 < uVar5) break;
      if ((char)bVar6 < '\0') {
        if (bVar6 < 0xc2) break;
        if (bVar6 < 0xe0) {
          if ((((long)param_2 - (long)pbVar3 < 2) || ((pbVar3[1] & 0xc0) != 0x80)) ||
             (param_4 < ((ulong)pbVar3[1] & 0x3f | (uVar5 & 0x1f) << 6))) break;
          pbVar3 = pbVar3 + 2;
        }
        else if (bVar6 < 0xf0) {
          if ((long)param_2 - (long)pbVar3 < 3) break;
          bVar2 = pbVar3[1];
          if (bVar6 == 0xed) {
            bVar6 = bVar2 & 0xe0;
LAB_0054025c:
            if (bVar6 != 0x80) break;
          }
          else {
            if (bVar6 != 0xe0) {
              bVar6 = bVar2 & 0xc0;
              goto LAB_0054025c;
            }
            if ((bVar2 & 0xe0) != 0xa0) break;
          }
          if (((pbVar3[2] & 0xc0) != 0x80) ||
             (param_4 < ((uVar5 & 0xf) << 0xc | ((ulong)bVar2 & 0x3f) << 6 | (ulong)pbVar3[2] & 0x3f
                        ))) break;
          pbVar3 = pbVar3 + 3;
        }
        else {
          if (((0xf4 < bVar6) || ((long)param_2 - (long)pbVar3 < 4)) || (param_3 - uVar4 < 2))
          break;
          bVar2 = pbVar3[1];
          if (bVar6 == 0xf4) {
            bVar6 = bVar2 & 0xf0;
joined_r0x0054029c:
            if (bVar6 != 0x80) break;
          }
          else {
            if (bVar6 != 0xf0) {
              bVar6 = bVar2 & 0xc0;
              goto joined_r0x0054029c;
            }
            if (0x2f < (byte)(bVar2 + 0x70)) break;
          }
          if ((((pbVar3[2] & 0xc0) != 0x80) || ((pbVar3[3] & 0xc0) != 0x80)) ||
             (param_4 < ((uVar5 & 7) << 0x12 | ((ulong)bVar2 & 0x3f) << 0xc |
                         ((ulong)pbVar3[2] & 0x3f) << 6 | (ulong)pbVar3[3] & 0x3f))) break;
          uVar4 = uVar4 + 1;
          pbVar3 = pbVar3 + 4;
        }
      }
      else {
        pbVar3 = pbVar3 + 1;
      }
      if ((param_2 <= pbVar3) || (uVar4 = uVar4 + 1, param_3 <= uVar4)) break;
    }
  }
  return (int)pbVar3 - (int)param_1;
}


// ===== 00540304  FUN_00540304 =====

undefined8 FUN_00540304(void)

{
  return 4;
}


// ===== 0054030c  FUN_0054030c =====

void FUN_0054030c(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 00540330  FUN_00540330 =====

void FUN_00540330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  long lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_6;
  uStack_40 = param_3;
  FUN_0053fbc4(param_3,param_4,&uStack_40,param_6,param_7,&local_48,0x10ffff,0);
  *param_5 = uStack_40;
  *param_8 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005403b8  FUN_005403b8 =====

void FUN_005403b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  long lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_6;
  uStack_40 = param_3;
  FUN_0053fe68(param_3,param_4,&uStack_40,param_6,param_7,&local_48,0x10ffff,0);
  *param_5 = uStack_40;
  *param_8 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00540440  FUN_00540440 =====

undefined8
FUN_00540440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// ===== 0054044c  FUN_0054044c =====

undefined8 FUN_0054044c(void)

{
  return 0;
}


// ===== 00540454  FUN_00540454 =====

undefined8 FUN_00540454(void)

{
  return 0;
}


// ===== 0054045c  FUN_0054045c =====

void FUN_0054045c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_005400fc(param_3,param_4,param_5,0x10ffff,0);
  return;
}


// ===== 00540474  FUN_00540474 =====

undefined8 FUN_00540474(void)

{
  return 4;
}


// ===== 0054047c  FUN_0054047c =====

void FUN_0054047c(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 005404a0  FUN_005404a0 =====

undefined8
FUN_005404a0(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4,ulong *param_5,
            byte *param_6,long param_7,long *param_8)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  
  pbVar4 = param_6;
  if (param_3 < param_4) {
    do {
      uVar1 = *param_3;
      if (0x10 < uVar1 >> 0x10 || (uVar1 & 0xfffff800) == 0xd800) {
        uVar3 = 2;
        goto LAB_005405b8;
      }
      bVar2 = (byte)uVar1;
      if (uVar1 < 0x80) {
        if (param_7 - (long)pbVar4 < 1) goto LAB_005405b4;
        param_6 = pbVar4 + 1;
        *pbVar4 = bVar2;
      }
      else if (uVar1 < 0x800) {
        if (param_7 - (long)pbVar4 < 2) goto LAB_005405b4;
        param_6 = pbVar4 + 2;
        *pbVar4 = (byte)(uVar1 >> 6) | 0xc0;
        pbVar4[1] = bVar2 & 0x3f | 0x80;
      }
      else if (uVar1 >> 0x10 == 0) {
        if (param_7 - (long)pbVar4 < 3) {
LAB_005405b4:
          uVar3 = 1;
          goto LAB_005405b8;
        }
        param_6 = pbVar4 + 3;
        *pbVar4 = (byte)(uVar1 >> 0xc) | 0xe0;
        pbVar4[1] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
        pbVar4[2] = bVar2 & 0x3f | 0x80;
      }
      else {
        if (param_7 - (long)pbVar4 < 4) goto LAB_005405b4;
        param_6 = pbVar4 + 4;
        *pbVar4 = (byte)(uVar1 >> 0x12) | 0xf0;
        pbVar4[1] = (byte)(uVar1 >> 0xc) & 0x3f | 0x80;
        pbVar4[2] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
        pbVar4[3] = bVar2 & 0x3f | 0x80;
      }
      param_3 = param_3 + 1;
      pbVar4 = param_6;
    } while (param_3 < param_4);
  }
  uVar3 = 0;
  pbVar4 = param_6;
LAB_005405b8:
  *param_5 = (ulong)param_3;
  *param_8 = (long)pbVar4;
  return uVar3;
}


// ===== 005405c4  FUN_005405c4 =====

undefined8
FUN_005405c4(long param_1,uint *param_2,long *param_3,undefined1 *param_4,long param_5,long *param_6
            ,ulong param_7,uint param_8)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  byte *pbVar4;
  byte bVar5;
  
  *param_3 = param_1;
  *param_6 = (long)param_4;
  if ((param_8 >> 1 & 1) != 0) {
    if (param_5 - (long)param_4 < 3) {
      return 1;
    }
    *param_6 = (long)(param_4 + 1);
    *param_4 = 0xef;
    puVar2 = (undefined1 *)*param_6;
    *param_6 = (long)(puVar2 + 1);
    *puVar2 = 0xbb;
    puVar2 = (undefined1 *)*param_6;
    *param_6 = (long)(puVar2 + 1);
    *puVar2 = 0xbf;
  }
  puVar3 = (uint *)*param_3;
  while( true ) {
    if (param_2 <= puVar3) {
      return 0;
    }
    uVar1 = *puVar3;
    if (uVar1 >> 0xb == 0x1b || param_7 < uVar1) break;
    if (uVar1 < 0x80) {
      pbVar4 = (byte *)*param_6;
      if (param_5 - (long)pbVar4 < 1) {
        return 1;
      }
      *param_6 = (long)(pbVar4 + 1);
      *pbVar4 = (byte)uVar1;
    }
    else {
      if (uVar1 < 0x800) {
        pbVar4 = (byte *)*param_6;
        if (param_5 - (long)pbVar4 < 2) {
          return 1;
        }
        bVar5 = (byte)(uVar1 >> 6) | 0xc0;
      }
      else {
        pbVar4 = (byte *)*param_6;
        if (uVar1 >> 0x10 == 0) {
          if (param_5 - (long)pbVar4 < 3) {
            return 1;
          }
          bVar5 = (byte)(uVar1 >> 0xc) | 0xe0;
        }
        else {
          if (param_5 - (long)pbVar4 < 4) {
            return 1;
          }
          *param_6 = (long)(pbVar4 + 1);
          *pbVar4 = (byte)(uVar1 >> 0x12) | 0xf0;
          pbVar4 = (byte *)*param_6;
          bVar5 = (byte)(uVar1 >> 0xc) & 0x3f | 0x80;
        }
        *param_6 = (long)(pbVar4 + 1);
        *pbVar4 = bVar5;
        pbVar4 = (byte *)*param_6;
        bVar5 = (byte)(uVar1 >> 6) & 0x3f | 0x80;
      }
      *param_6 = (long)(pbVar4 + 1);
      *pbVar4 = bVar5;
      pbVar4 = (byte *)*param_6;
      *param_6 = (long)(pbVar4 + 1);
      *pbVar4 = (byte)uVar1 & 0x3f | 0x80;
    }
    puVar3 = (uint *)(*param_3 + 4);
    *param_3 = (long)puVar3;
  }
  return 2;
}


// ===== 00540740  FUN_00540740 =====

void FUN_00540740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  long lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_6;
  uStack_40 = param_3;
  FUN_005407c8(param_3,param_4,&uStack_40,param_6,param_7,&local_48,0x10ffff,0);
  *param_5 = uStack_40;
  *param_8 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005407c8  FUN_005407c8 =====

undefined8
FUN_005407c8(long param_1,byte *param_2,long *param_3,ulong param_4,undefined4 *param_5,
            ulong *param_6,ulong param_7,uint param_8)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  *param_3 = param_1;
  *param_6 = param_4;
  pbVar5 = (byte *)*param_3;
  if (((((param_8 >> 2 & 1) != 0) && (2 < (long)param_2 - (long)pbVar5)) && (*pbVar5 == 0xef)) &&
     ((pbVar5[1] == 0xbb && (pbVar5[2] == 0xbf)))) {
    pbVar5 = pbVar5 + 3;
    *param_3 = (long)pbVar5;
  }
  if (pbVar5 < param_2) {
    puVar6 = (undefined4 *)*param_6;
    do {
      if (param_5 <= puVar6) {
        return 1;
      }
      bVar3 = *pbVar5;
      uVar7 = (ulong)bVar3;
      uVar2 = (uint)bVar3;
      uVar8 = (ulong)uVar2;
      if ((char)bVar3 < '\0') {
        if (uVar2 < 0xc2) {
          return 2;
        }
        if (uVar2 < 0xe0) {
          if ((long)param_2 - (long)pbVar5 < 2) {
            return 1;
          }
          if ((pbVar5[1] & 0xc0) != 0x80) {
            return 2;
          }
          lVar4 = 2;
          uVar8 = (ulong)pbVar5[1] & 0x3f | (uVar7 & 0x1f) << 6;
          if (param_7 < uVar8) {
            return 2;
          }
        }
        else if (uVar2 < 0xf0) {
          if ((long)param_2 - (long)pbVar5 < 3) {
            return 1;
          }
          bVar3 = pbVar5[1];
          if (uVar2 == 0xed) {
            bVar1 = bVar3 & 0xe0;
joined_r0x00540938:
            if (bVar1 != 0x80) {
              return 2;
            }
          }
          else {
            if (uVar2 != 0xe0) {
              bVar1 = bVar3 & 0xc0;
              goto joined_r0x00540938;
            }
            if ((bVar3 & 0xe0) != 0xa0) {
              return 2;
            }
          }
          if (((pbVar5[2] & 0xc0) != 0x80) ||
             (uVar8 = (uVar7 & 0xf) << 0xc | ((ulong)bVar3 & 0x3f) << 6 | (ulong)pbVar5[2] & 0x3f,
             param_7 < uVar8)) {
            return 2;
          }
          lVar4 = 3;
        }
        else {
          if (0xf4 < uVar2) {
            return 2;
          }
          if ((long)param_2 - (long)pbVar5 < 4) {
            return 1;
          }
          bVar3 = pbVar5[1];
          if (uVar2 == 0xf4) {
            bVar1 = bVar3 & 0xf0;
joined_r0x0054097c:
            if (bVar1 != 0x80) {
              return 2;
            }
          }
          else {
            if (uVar2 != 0xf0) {
              bVar1 = bVar3 & 0xc0;
              goto joined_r0x0054097c;
            }
            if (0x2f < (byte)(bVar3 + 0x70)) {
              return 2;
            }
          }
          if ((pbVar5[2] & 0xc0) != 0x80) {
            return 2;
          }
          if ((pbVar5[3] & 0xc0) != 0x80) {
            return 2;
          }
          uVar8 = (uVar7 & 7) << 0x12 | ((ulong)bVar3 & 0x3f) << 0xc |
                  ((ulong)pbVar5[2] & 0x3f) << 6 | (ulong)pbVar5[3] & 0x3f;
          if (param_7 < uVar8) {
            return 2;
          }
          lVar4 = 4;
        }
      }
      else {
        if (param_7 < uVar7) {
          return 2;
        }
        lVar4 = 1;
      }
      *puVar6 = (int)uVar8;
      *param_3 = (long)(pbVar5 + lVar4);
      puVar6 = (undefined4 *)(*param_6 + 4);
      *param_6 = (ulong)puVar6;
      pbVar5 = (byte *)*param_3;
    } while (pbVar5 < param_2);
  }
  return 0;
}


// ===== 005409e0  FUN_005409e0 =====

undefined8
FUN_005409e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// ===== 005409ec  FUN_005409ec =====

undefined8 FUN_005409ec(void)

{
  return 0;
}


// ===== 005409f4  FUN_005409f4 =====

undefined8 FUN_005409f4(void)

{
  return 0;
}


// ===== 005409fc  FUN_005409fc =====

void FUN_005409fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00540a14(param_3,param_4,param_5,0x10ffff,0);
  return;
}


// ===== 00540a14  FUN_00540a14 =====

int FUN_00540a14(byte *param_1,byte *param_2,ulong param_3,ulong param_4,uint param_5)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  
  pbVar3 = param_1;
  if ((((2 < (long)param_2 - (long)param_1) && ((param_5 >> 2 & 1) != 0)) && (*param_1 == 0xef)) &&
     (param_1[1] == 0xbb)) {
    lVar6 = 3;
    if (param_1[2] != 0xbf) {
      lVar6 = 0;
    }
    pbVar3 = param_1 + lVar6;
  }
  if ((pbVar3 < param_2) && (param_3 != 0)) {
    uVar4 = 1;
    do {
      bVar7 = *pbVar3;
      uVar5 = (ulong)bVar7;
      if ((char)bVar7 < '\0') {
        if (bVar7 < 0xc2) break;
        if (bVar7 < 0xe0) {
          if ((((long)param_2 - (long)pbVar3 < 2) || ((pbVar3[1] & 0xc0) != 0x80)) ||
             (param_4 < ((ulong)pbVar3[1] & 0x3f | (uVar5 & 0x1f) << 6))) break;
          lVar6 = 2;
        }
        else if (bVar7 < 0xf0) {
          if ((long)param_2 - (long)pbVar3 < 3) break;
          bVar1 = pbVar3[1];
          if (bVar7 == 0xed) {
            bVar7 = bVar1 & 0xe0;
LAB_00540b60:
            if (bVar7 != 0x80) break;
          }
          else {
            if (bVar7 != 0xe0) {
              bVar7 = bVar1 & 0xc0;
              goto LAB_00540b60;
            }
            if ((bVar1 & 0xe0) != 0xa0) break;
          }
          if (((pbVar3[2] & 0xc0) != 0x80) ||
             (param_4 < ((uVar5 & 0xf) << 0xc | ((ulong)bVar1 & 0x3f) << 6 | (ulong)pbVar3[2] & 0x3f
                        ))) break;
          lVar6 = 3;
        }
        else {
          if ((0xf4 < bVar7) || ((long)param_2 - (long)pbVar3 < 4)) break;
          bVar1 = pbVar3[1];
          if (bVar7 == 0xf4) {
            bVar7 = bVar1 & 0xf0;
LAB_00540b9c:
            if (bVar7 != 0x80) break;
          }
          else {
            if (bVar7 != 0xf0) {
              bVar7 = bVar1 & 0xc0;
              goto LAB_00540b9c;
            }
            if (0x2f < (byte)(bVar1 + 0x70)) break;
          }
          if ((((pbVar3[2] & 0xc0) != 0x80) || ((pbVar3[3] & 0xc0) != 0x80)) ||
             (param_4 < ((uVar5 & 7) << 0x12 | ((ulong)bVar1 & 0x3f) << 0xc |
                         ((ulong)pbVar3[2] & 0x3f) << 6 | (ulong)pbVar3[3] & 0x3f))) break;
          lVar6 = 4;
        }
      }
      else {
        if (param_4 < uVar5) break;
        lVar6 = 1;
      }
      pbVar3 = pbVar3 + lVar6;
      if ((param_2 <= pbVar3) || (bVar2 = param_3 <= uVar4, uVar4 = uVar4 + 1, bVar2)) break;
    } while( true );
  }
  return (int)pbVar3 - (int)param_1;
}


// ===== 00540bfc  FUN_00540bfc =====

undefined8 FUN_00540bfc(void)

{
  return 4;
}


// ===== 00540c04  FUN_00540c04 =====

void FUN_00540c04(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 00540c28  FUN_00540c28 =====

undefined8
FUN_00540c28(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4,ulong *param_5,
            byte *param_6,long param_7,long *param_8)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  
  pbVar4 = param_6;
  if (param_3 < param_4) {
    do {
      uVar1 = *param_3;
      if (0x10 < uVar1 >> 0x10 || (uVar1 & 0xfffff800) == 0xd800) {
        uVar3 = 2;
        goto LAB_00540d40;
      }
      bVar2 = (byte)uVar1;
      if (uVar1 < 0x80) {
        if (param_7 - (long)pbVar4 < 1) goto LAB_00540d3c;
        param_6 = pbVar4 + 1;
        *pbVar4 = bVar2;
      }
      else if (uVar1 < 0x800) {
        if (param_7 - (long)pbVar4 < 2) goto LAB_00540d3c;
        param_6 = pbVar4 + 2;
        *pbVar4 = (byte)(uVar1 >> 6) | 0xc0;
        pbVar4[1] = bVar2 & 0x3f | 0x80;
      }
      else if (uVar1 >> 0x10 == 0) {
        if (param_7 - (long)pbVar4 < 3) {
LAB_00540d3c:
          uVar3 = 1;
          goto LAB_00540d40;
        }
        param_6 = pbVar4 + 3;
        *pbVar4 = (byte)(uVar1 >> 0xc) | 0xe0;
        pbVar4[1] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
        pbVar4[2] = bVar2 & 0x3f | 0x80;
      }
      else {
        if (param_7 - (long)pbVar4 < 4) goto LAB_00540d3c;
        param_6 = pbVar4 + 4;
        *pbVar4 = (byte)(uVar1 >> 0x12) | 0xf0;
        pbVar4[1] = (byte)(uVar1 >> 0xc) & 0x3f | 0x80;
        pbVar4[2] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
        pbVar4[3] = bVar2 & 0x3f | 0x80;
      }
      param_3 = param_3 + 1;
      pbVar4 = param_6;
    } while (param_3 < param_4);
  }
  uVar3 = 0;
  pbVar4 = param_6;
LAB_00540d40:
  *param_5 = (ulong)param_3;
  *param_8 = (long)pbVar4;
  return uVar3;
}


// ===== 00540d4c  FUN_00540d4c =====

void FUN_00540d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  long lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_6;
  uStack_40 = param_3;
  FUN_005407c8(param_3,param_4,&uStack_40,param_6,param_7,&local_48,0x10ffff,0);
  *param_5 = uStack_40;
  *param_8 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00540dd4  FUN_00540dd4 =====

undefined8
FUN_00540dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// ===== 00540de0  FUN_00540de0 =====

undefined8 FUN_00540de0(void)

{
  return 0;
}


// ===== 00540de8  FUN_00540de8 =====

undefined8 FUN_00540de8(void)

{
  return 0;
}


// ===== 00540df0  FUN_00540df0 =====

void FUN_00540df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00540a14(param_3,param_4,param_5,0x10ffff,0);
  return;
}


// ===== 00540e08  FUN_00540e08 =====

undefined8 FUN_00540e08(void)

{
  return 4;
}


// ===== 00540e10  FUN_00540e10 =====

void FUN_00540e10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  long lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_6;
  uStack_40 = param_3;
  FUN_005405c4(param_3,param_4,&uStack_40,param_6,param_7,&local_48,*(undefined8 *)(param_1 + 0x18),
               *(undefined4 *)(param_1 + 0x20));
  *param_5 = uStack_40;
  *param_8 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00540ea0  FUN_00540ea0 =====

void FUN_00540ea0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  long lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_6;
  uStack_40 = param_3;
  FUN_005407c8(param_3,param_4,&uStack_40,param_6,param_7,&local_48,*(undefined8 *)(param_1 + 0x18),
               *(undefined4 *)(param_1 + 0x20));
  *param_5 = uStack_40;
  *param_8 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00540f30  FUN_00540f30 =====

undefined8
FUN_00540f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// ===== 00540f3c  FUN_00540f3c =====

undefined8 FUN_00540f3c(void)

{
  return 0;
}


// ===== 00540f44  FUN_00540f44 =====

undefined8 FUN_00540f44(void)

{
  return 0;
}


// ===== 00540f4c  FUN_00540f4c =====

void FUN_00540f4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00540a14(param_3,param_4,param_5,*(undefined8 *)(param_1 + 0x18),
               *(undefined4 *)(param_1 + 0x20));
  return;
}


// ===== 00540f68  FUN_00540f68 =====

undefined4 FUN_00540f68(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if ((*(byte *)(param_1 + 0x20) & 4) != 0) {
    uVar1 = 7;
  }
  return uVar1;
}


// ===== 00540f80  FUN_00540f80 =====

undefined8
FUN_00540f80(long param_1,undefined8 param_2,ushort *param_3,ushort *param_4,ulong *param_5,
            byte *param_6,long param_7,undefined8 *param_8)

{
  ushort uVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  pbVar4 = param_6;
  if ((*(byte *)(param_1 + 0x18) >> 1 & 1) != 0) {
    if (param_7 - (long)param_6 < 3) {
LAB_00540f98:
      uVar3 = 1;
      goto LAB_00541078;
    }
    pbVar4 = param_6 + 3;
    param_6[0] = 0xef;
    param_6[1] = 0xbb;
    param_6[2] = 0xbf;
  }
  param_6 = pbVar4;
  if (param_3 < param_4) {
    do {
      uVar1 = *param_3;
      if ((uVar1 & 0xf800) == 0xd800 || uVar5 < uVar1) {
        uVar3 = 2;
        goto LAB_00541078;
      }
      lVar6 = param_7 - (long)param_6;
      bVar2 = (byte)uVar1;
      if (uVar1 < 0x80) {
        if (lVar6 < 1) goto LAB_00540f98;
        pbVar4 = param_6 + 1;
        *param_6 = bVar2;
      }
      else if (uVar1 < 0x800) {
        if (lVar6 < 2) goto LAB_00540f98;
        pbVar4 = param_6 + 2;
        *param_6 = (byte)(uVar1 >> 6) | 0xc0;
        param_6[1] = bVar2 & 0x3f | 0x80;
      }
      else {
        if (lVar6 < 3) goto LAB_00540f98;
        pbVar4 = param_6 + 3;
        *param_6 = (byte)(uVar1 >> 0xc) | 0xe0;
        param_6[1] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
        param_6[2] = bVar2 & 0x3f | 0x80;
      }
      param_3 = param_3 + 1;
      param_6 = pbVar4;
    } while (param_3 < param_4);
  }
  uVar3 = 0;
  param_6 = pbVar4;
LAB_00541078:
  *param_5 = (ulong)param_3;
  *param_8 = param_6;
  return uVar3;
}


// ===== 00541084  FUN_00541084 =====

undefined8
FUN_00541084(long param_1,undefined8 param_2,byte *param_3,byte *param_4,ulong *param_5,
            undefined2 *param_6,undefined2 *param_7,long *param_8)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined2 *puVar11;
  long lVar12;
  
  if ((((2 < (long)param_4 - (long)param_3) && ((*(uint *)(param_1 + 0x18) >> 2 & 1) != 0)) &&
      (*param_3 == 0xef)) && (param_3[1] == 0xbb)) {
    lVar12 = 3;
    if (param_3[2] != 0xbf) {
      lVar12 = 0;
    }
    param_3 = param_3 + lVar12;
  }
  if (param_3 < param_4) {
    if (param_6 < param_7) {
      uVar8 = *(ulong *)(param_1 + 0x10);
      do {
        bVar6 = *param_3;
        uVar2 = (uint)bVar6;
        uVar9 = (ulong)uVar2;
        if ((char)bVar6 < '\0') {
          if (0xc1 < uVar2) {
            if (uVar2 < 0xe0) {
              if ((long)param_4 - (long)param_3 < 2) goto LAB_005411f0;
              if (((param_3[1] & 0xc0) == 0x80) &&
                 (uVar9 = (ulong)param_3[1] & 0x3f | (uVar9 & 0x1f) << 6, uVar9 <= uVar8)) {
                lVar12 = 2;
                goto LAB_005411bc;
              }
            }
            else if (uVar2 < 0xf0) {
              if ((long)param_4 - (long)param_3 < 3) goto LAB_005411f0;
              bVar5 = param_3[1];
              if (uVar2 == 0xed) {
                bVar1 = bVar5 & 0xe0;
joined_r0x00541184:
                if (bVar1 != 0x80) goto LAB_005411f8;
              }
              else {
                if (uVar2 != 0xe0) {
                  bVar1 = bVar5 & 0xc0;
                  goto joined_r0x00541184;
                }
                if ((bVar5 & 0xe0) != 0xa0) goto LAB_005411f8;
              }
              if (((param_3[2] & 0xc0) == 0x80) &&
                 (uVar10 = (ulong)bVar6 << 0xc, uVar3 = ((ulong)bVar5 & 0x3f) << 6,
                 uVar4 = (ulong)param_3[2] & 0x3f, uVar9 = uVar10 | uVar3 | uVar4,
                 (uVar10 & 0xffc0 | uVar3 | uVar4) <= uVar8)) {
                lVar12 = 3;
                goto LAB_005411bc;
              }
            }
          }
LAB_005411f8:
          uVar7 = 2;
          goto LAB_00541208;
        }
        if (uVar8 < bVar6) goto LAB_005411f8;
        lVar12 = 1;
LAB_005411bc:
        param_3 = param_3 + lVar12;
        puVar11 = param_6 + 1;
        *param_6 = (short)uVar9;
        if (param_4 <= param_3) {
          uVar7 = 0;
          param_6 = param_6 + 1;
          goto LAB_00541208;
        }
        param_6 = puVar11;
      } while (puVar11 < param_7);
      uVar7 = 1;
    }
    else {
LAB_005411f0:
      uVar7 = 1;
    }
  }
  else {
    uVar7 = 0;
  }
LAB_00541208:
  *param_5 = (ulong)param_3;
  *param_8 = (long)param_6;
  return uVar7;
}


// ===== 00541214  FUN_00541214 =====

undefined8
FUN_00541214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// ===== 00541220  FUN_00541220 =====

undefined8 FUN_00541220(void)

{
  return 0;
}


// ===== 00541228  FUN_00541228 =====

undefined8 FUN_00541228(void)

{
  return 0;
}


// ===== 00541230  FUN_00541230 =====

int FUN_00541230(long param_1,undefined8 param_2,byte *param_3,byte *param_4,ulong param_5)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  
  iVar4 = (int)param_3;
  if ((((2 < (long)param_4 - (long)param_3) && ((*(uint *)(param_1 + 0x18) >> 2 & 1) != 0)) &&
      (*param_3 == 0xef)) && (param_3[1] == 0xbb)) {
    lVar7 = 3;
    if (param_3[2] != 0xbf) {
      lVar7 = 0;
    }
    param_3 = param_3 + lVar7;
  }
  if ((param_5 != 0) && (param_3 < param_4)) {
    uVar5 = *(ulong *)(param_1 + 0x10);
    uVar6 = 1;
    do {
      bVar2 = *param_3;
      if ((char)bVar2 < '\0') {
        if (bVar2 < 0xc2) break;
        if (bVar2 < 0xe0) {
          if ((((long)param_4 - (long)param_3 < 2) || ((param_3[1] & 0xc0) != 0x80)) ||
             (uVar5 < ((ulong)param_3[1] & 0x3f | ((ulong)bVar2 & 0x1f) << 6))) break;
          lVar7 = 2;
        }
        else {
          if ((0xef < bVar2) || ((long)param_4 - (long)param_3 < 3)) break;
          bVar1 = param_3[1];
          if (bVar2 == 0xed) {
            bVar8 = bVar1 & 0xe0;
LAB_00541340:
            if (bVar8 != 0x80) break;
          }
          else {
            if (bVar2 != 0xe0) {
              bVar8 = bVar1 & 0xc0;
              goto LAB_00541340;
            }
            if ((bVar1 & 0xe0) != 0xa0) break;
          }
          if (((param_3[2] & 0xc0) != 0x80) ||
             (uVar5 < (((ulong)bVar2 & 0xf) << 0xc | ((ulong)bVar1 & 0x3f) << 6 |
                      (ulong)param_3[2] & 0x3f))) break;
          lVar7 = 3;
        }
      }
      else {
        if (uVar5 < bVar2) break;
        lVar7 = 1;
      }
      param_3 = param_3 + lVar7;
      if ((param_4 <= param_3) || (bVar3 = param_5 <= uVar6, uVar6 = uVar6 + 1, bVar3)) break;
    } while( true );
  }
  return (int)param_3 - iVar4;
}


// ===== 00541390  FUN_00541390 =====

undefined4 FUN_00541390(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 3;
  if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
    uVar1 = 6;
  }
  return uVar1;
}


// ===== 005413a8  FUN_005413a8 =====

void FUN_005413a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  long lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_6;
  uStack_40 = param_3;
  FUN_005405c4(param_3,param_4,&uStack_40,param_6,param_7,&local_48,*(undefined8 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x18));
  *param_5 = uStack_40;
  *param_8 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00541438  FUN_00541438 =====

void FUN_00541438(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  long lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_6;
  uStack_40 = param_3;
  FUN_005407c8(param_3,param_4,&uStack_40,param_6,param_7,&local_48,*(undefined8 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x18));
  *param_5 = uStack_40;
  *param_8 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005414c8  FUN_005414c8 =====

undefined8
FUN_005414c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// ===== 005414d4  FUN_005414d4 =====

undefined8 FUN_005414d4(void)

{
  return 0;
}


// ===== 005414dc  FUN_005414dc =====

undefined8 FUN_005414dc(void)

{
  return 0;
}


// ===== 005414e4  FUN_005414e4 =====

void FUN_005414e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00540a14(param_3,param_4,param_5,*(undefined8 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x18));
  return;
}


// ===== 00541500  FUN_00541500 =====

undefined4 FUN_00541500(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
    uVar1 = 7;
  }
  return uVar1;
}


// ===== 00541518  FUN_00541518 =====

undefined8
FUN_00541518(long param_1,undefined8 param_2,uint *param_3,uint *param_4,ulong *param_5,
            byte *param_6,long param_7,undefined8 *param_8)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  
  uVar5 = *(ulong *)(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x20) >> 1 & 1) != 0) {
    if (param_7 - (long)param_6 < 2) {
LAB_00541530:
      uVar4 = 1;
      goto LAB_005415ec;
    }
    param_6[0] = 0xfe;
    param_6[1] = 0xff;
    param_6 = param_6 + 2;
  }
  if (param_3 < param_4) {
    do {
      uVar2 = *param_3;
      if (uVar2 >> 0xb == 0x1b || uVar5 < uVar2) {
        uVar4 = 2;
        goto LAB_005415ec;
      }
      bVar3 = (byte)(uVar2 >> 8);
      if (uVar2 >> 0x10 == 0) {
        if (param_7 - (long)param_6 < 2) goto LAB_00541530;
        lVar7 = 2;
        pbVar6 = param_6 + 1;
        *param_6 = bVar3;
      }
      else {
        if (param_7 - (long)param_6 < 4) goto LAB_00541530;
        iVar1 = (uVar2 >> 10 & 0x7c0) + 0x3fc0;
        pbVar6 = param_6 + 3;
        lVar7 = 4;
        param_6[2] = bVar3 & 3 | 0xdc;
        *param_6 = (byte)((uint)iVar1 >> 8) | 0xd8;
        param_6[1] = (byte)iVar1 | (byte)(uVar2 >> 10) & 0x3f;
      }
      param_6 = param_6 + lVar7;
      param_3 = param_3 + 1;
      *pbVar6 = (byte)uVar2;
    } while (param_3 < param_4);
  }
  uVar4 = 0;
LAB_005415ec:
  *param_5 = (ulong)param_3;
  *param_8 = param_6;
  return uVar4;
}


// ===== 005415f8  FUN_005415f8 =====

ulong FUN_005415f8(long param_1,undefined8 param_2,byte *param_3,byte *param_4,ulong *param_5,
                  undefined4 *param_6,undefined4 *param_7,ulong *param_8)

{
  byte bVar1;
  ulong uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (((1 < (long)param_4 - (long)param_3) && ((*(uint *)(param_1 + 0x20) >> 2 & 1) != 0)) &&
     (*param_3 == 0xfe)) {
    param_3 = param_3 + (ulong)(param_3[1] == 0xff) * 2;
  }
  if (param_3 < param_4 + -1) {
    uVar4 = *(ulong *)(param_1 + 0x18);
    puVar3 = param_6;
    do {
      param_6 = puVar3;
      if (param_7 <= puVar3) break;
      uVar5 = (ulong)CONCAT11(*param_3,param_3[1]);
      bVar1 = *param_3 & 0xfc;
      if (bVar1 == 0xd8) {
        if ((long)param_4 - (long)param_3 < 4) {
          uVar2 = 1;
          goto LAB_005416d4;
        }
        if (((param_3[2] & 0xfc) != 0xdc) ||
           (uVar5 = ((ulong)param_3[3] | ((ulong)param_3[2] & 3) << 8 | (uVar5 & 0x3ff) << 10) +
                    0x10000, uVar4 < uVar5)) {
          uVar2 = 2;
          goto LAB_005416d4;
        }
        uVar2 = 4;
      }
      else {
        uVar2 = 2;
        if ((bVar1 == 0xdc) || (uVar4 < uVar5)) goto LAB_005416d4;
      }
      param_3 = param_3 + uVar2;
      param_6 = puVar3 + 1;
      *puVar3 = (int)uVar5;
      puVar3 = param_6;
    } while (param_3 < param_4 + -1);
  }
  uVar2 = (ulong)(param_3 < param_4);
  puVar3 = param_6;
LAB_005416d4:
  *param_5 = (ulong)param_3;
  *param_8 = (ulong)puVar3;
  return uVar2;
}


// ===== 005416f0  FUN_005416f0 =====

undefined8
FUN_005416f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// ===== 005416fc  FUN_005416fc =====

undefined8 FUN_005416fc(void)

{
  return 0;
}


// ===== 00541704  FUN_00541704 =====

undefined8 FUN_00541704(void)

{
  return 0;
}


// ===== 0054170c  FUN_0054170c =====

int FUN_0054170c(long param_1,undefined8 param_2,byte *param_3,long param_4,ulong param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  iVar3 = (int)param_3;
  if (((1 < param_4 - (long)param_3) && ((*(uint *)(param_1 + 0x20) >> 2 & 1) != 0)) &&
     (*param_3 == 0xfe)) {
    param_3 = param_3 + (ulong)(param_3[1] == 0xff) * 2;
  }
  if ((param_5 != 0) && (param_3 < (byte *)(param_4 + -1))) {
    uVar4 = 1;
    do {
      uVar5 = (ulong)CONCAT11(*param_3,param_3[1]);
      bVar1 = *param_3 & 0xfc;
      if (bVar1 == 0xd8) {
        if (((param_4 - (long)param_3 < 4) || ((param_3[2] & 0xfc) != 0xdc)) ||
           (*(ulong *)(param_1 + 0x18) <
            ((ulong)param_3[3] | ((ulong)param_3[2] & 3) << 8 | (uVar5 & 0x3ff) << 10) + 0x10000))
        break;
        param_3 = param_3 + 4;
      }
      else {
        if ((bVar1 == 0xdc) || (*(ulong *)(param_1 + 0x18) < uVar5)) break;
        param_3 = param_3 + 2;
      }
      if (((byte *)(param_4 + -1) <= param_3) ||
         (bVar2 = param_5 <= uVar4, uVar4 = uVar4 + 1, bVar2)) break;
    } while( true );
  }
  return (int)param_3 - iVar3;
}


// ===== 005417fc  FUN_005417fc =====

undefined4 FUN_005417fc(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if ((*(byte *)(param_1 + 0x20) & 4) != 0) {
    uVar1 = 6;
  }
  return uVar1;
}


// ===== 00541814  FUN_00541814 =====

undefined8
FUN_00541814(long param_1,undefined8 param_2,uint *param_3,uint *param_4,ulong *param_5,
            byte *param_6,long param_7,undefined8 *param_8)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 0x18);
  pbVar4 = param_6;
  if ((*(byte *)(param_1 + 0x20) >> 1 & 1) != 0) {
    if (param_7 - (long)param_6 < 2) {
LAB_0054182c:
      uVar3 = 1;
      goto LAB_005418d8;
    }
    pbVar4 = param_6 + 2;
    param_6[0] = 0xff;
    param_6[1] = 0xfe;
  }
  param_6 = pbVar4;
  if (param_3 < param_4) {
    do {
      uVar2 = *param_3;
      if (uVar2 >> 0xb == 0x1b || uVar5 < uVar2) {
        uVar3 = 2;
        goto LAB_005418d8;
      }
      if ((uVar2 & 0xffff0000) == 0) {
        if (param_7 - (long)param_6 < 2) goto LAB_0054182c;
        pbVar4 = param_6 + 2;
        *(short *)param_6 = (short)uVar2;
      }
      else {
        if (param_7 - (long)param_6 < 4) goto LAB_0054182c;
        iVar1 = (uVar2 >> 10 & 0x7c0) + 0x3fc0;
        param_6[2] = (byte)uVar2;
        param_6[3] = (byte)(uVar2 >> 8) & 3 | 0xdc;
        *param_6 = (byte)iVar1 | (byte)(uVar2 >> 10) & 0x3f;
        pbVar4 = param_6 + 4;
        param_6[1] = (byte)((uint)iVar1 >> 8) | 0xd8;
      }
      param_3 = param_3 + 1;
      param_6 = pbVar4;
    } while (param_3 < param_4);
  }
  uVar3 = 0;
  param_6 = pbVar4;
LAB_005418d8:
  *param_5 = (ulong)param_3;
  *param_8 = param_6;
  return uVar3;
}


// ===== 005418e4  FUN_005418e4 =====

ulong FUN_005418e4(long param_1,undefined8 param_2,ushort *param_3,ushort *param_4,ulong *param_5,
                  undefined4 *param_6,undefined4 *param_7,ulong *param_8)

{
  byte bVar1;
  ulong uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (((1 < (long)param_4 - (long)param_3) && ((*(uint *)(param_1 + 0x20) >> 2 & 1) != 0)) &&
     ((char)*param_3 == -1)) {
    param_3 = param_3 + (*(char *)((long)param_3 + 1) == -2);
  }
  if (param_3 < (ushort *)((long)param_4 + -1)) {
    uVar4 = *(ulong *)(param_1 + 0x18);
    puVar3 = param_6;
    do {
      param_6 = puVar3;
      if (param_7 <= puVar3) break;
      uVar5 = (ulong)*param_3;
      bVar1 = *(byte *)((long)param_3 + 1) & 0xfc;
      if (bVar1 == 0xd8) {
        if ((long)param_4 - (long)param_3 < 4) {
          uVar2 = 1;
          goto LAB_005419c0;
        }
        if (((*(byte *)((long)param_3 + 3) & 0xfc) != 0xdc) ||
           (uVar5 = ((ulong)(byte)param_3[1] | ((ulong)*(byte *)((long)param_3 + 3) & 3) << 8 |
                    (uVar5 & 0x3ff) << 10) + 0x10000, uVar4 < uVar5)) {
          uVar2 = 2;
          goto LAB_005419c0;
        }
        uVar2 = 4;
      }
      else {
        uVar2 = 2;
        if ((bVar1 == 0xdc) || (uVar4 < uVar5)) goto LAB_005419c0;
      }
      param_3 = (ushort *)((long)param_3 + uVar2);
      param_6 = puVar3 + 1;
      *puVar3 = (int)uVar5;
      puVar3 = param_6;
    } while (param_3 < (ushort *)((long)param_4 + -1));
  }
  uVar2 = (ulong)(param_3 < param_4);
  puVar3 = param_6;
LAB_005419c0:
  *param_5 = (ulong)param_3;
  *param_8 = (ulong)puVar3;
  return uVar2;
}


// ===== 005419dc  FUN_005419dc =====

undefined8
FUN_005419dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// ===== 005419e8  FUN_005419e8 =====

undefined8 FUN_005419e8(void)

{
  return 0;
}


// ===== 005419f0  FUN_005419f0 =====

undefined8 FUN_005419f0(void)

{
  return 0;
}


// ===== 005419f8  FUN_005419f8 =====

int FUN_005419f8(long param_1,undefined8 param_2,ushort *param_3,long param_4,ulong param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  
  iVar3 = (int)param_3;
  if (((1 < param_4 - (long)param_3) && ((*(uint *)(param_1 + 0x20) >> 2 & 1) != 0)) &&
     ((char)*param_3 == -1)) {
    param_3 = param_3 + (*(char *)((long)param_3 + 1) == -2);
  }
  if ((param_5 != 0) && (param_3 < (ushort *)(param_4 + -1))) {
    uVar4 = 1;
    do {
      bVar1 = *(byte *)((long)param_3 + 1) & 0xfc;
      if (bVar1 == 0xd8) {
        if (((param_4 - (long)param_3 < 4) || ((*(byte *)((long)param_3 + 3) & 0xfc) != 0xdc)) ||
           (*(ulong *)(param_1 + 0x18) <
            ((ulong)(byte)param_3[1] | ((ulong)*(byte *)((long)param_3 + 3) & 3) << 8 |
            ((ulong)*param_3 & 0x3ff) << 10) + 0x10000)) break;
        param_3 = param_3 + 2;
      }
      else {
        if ((bVar1 == 0xdc) || (*(ulong *)(param_1 + 0x18) < (ulong)*param_3)) break;
        param_3 = param_3 + 1;
      }
      if (((ushort *)(param_4 + -1) <= param_3) ||
         (bVar2 = param_5 <= uVar4, uVar4 = uVar4 + 1, bVar2)) break;
    } while( true );
  }
  return (int)param_3 - iVar3;
}


// ===== 00541ae8  FUN_00541ae8 =====

undefined4 FUN_00541ae8(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if ((*(byte *)(param_1 + 0x20) & 4) != 0) {
    uVar1 = 6;
  }
  return uVar1;
}


// ===== 00541b00  FUN_00541b00 =====

undefined8
FUN_00541b00(long param_1,undefined8 param_2,ushort *param_3,ushort *param_4,ulong *param_5,
            undefined2 *param_6,long param_7,undefined8 *param_8)

{
  undefined2 *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  if ((*(byte *)(param_1 + 0x18) >> 1 & 1) != 0) {
    if (param_7 - (long)param_6 < 2) {
LAB_00541b18:
      uVar3 = 1;
      goto LAB_00541b8c;
    }
    *param_6 = 0xfffe;
    param_6 = param_6 + 1;
  }
  if (param_3 < param_4) {
    lVar5 = param_7 - (long)param_6;
    do {
      uVar2 = *param_3;
      if ((uVar2 & 0xf800) == 0xd800 || uVar4 < uVar2) {
        uVar3 = 2;
        goto LAB_00541b8c;
      }
      if (lVar5 < 2) goto LAB_00541b18;
      puVar1 = param_6 + 1;
      *(char *)((long)param_6 + 1) = (char)uVar2;
      param_3 = param_3 + 1;
      *(char *)param_6 = (char)(uVar2 >> 8);
      param_6 = puVar1;
      lVar5 = lVar5 + -2;
    } while (param_3 < param_4);
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
  }
LAB_00541b8c:
  *param_5 = (ulong)param_3;
  *param_8 = param_6;
  return uVar3;
}


// ===== 00541b98  FUN_00541b98 =====

undefined1
FUN_00541b98(long param_1,undefined8 param_2,byte *param_3,byte *param_4,ulong *param_5,
            ushort *param_6,ushort *param_7,undefined8 *param_8)

{
  ushort uVar1;
  undefined1 uVar2;
  ushort *puVar3;
  ulong uVar4;
  
  if (((1 < (long)param_4 - (long)param_3) && ((*(uint *)(param_1 + 0x18) >> 2 & 1) != 0)) &&
     (*param_3 == 0xfe)) {
    param_3 = param_3 + (ulong)(param_3[1] == 0xff) * 2;
  }
  if (param_3 < param_4 + -1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    uVar2 = 2;
    puVar3 = param_6;
    while (param_6 = puVar3, puVar3 < param_7) {
      if (((*param_3 & 0xf8) == 0xd8) || (uVar1 = CONCAT11(*param_3,param_3[1]), uVar4 < uVar1))
      goto LAB_00541c1c;
      param_3 = param_3 + 2;
      param_6 = puVar3 + 1;
      *puVar3 = uVar1;
      puVar3 = param_6;
      if (param_4 + -1 <= param_3) break;
    }
  }
  uVar2 = param_3 < param_4;
LAB_00541c1c:
  *param_5 = (ulong)param_3;
  *param_8 = param_6;
  return uVar2;
}


// ===== 00541c28  FUN_00541c28 =====

undefined8
FUN_00541c28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// ===== 00541c34  FUN_00541c34 =====

undefined8 FUN_00541c34(void)

{
  return 0;
}


// ===== 00541c3c  FUN_00541c3c =====

undefined8 FUN_00541c3c(void)

{
  return 0;
}


// ===== 00541c44  FUN_00541c44 =====

int FUN_00541c44(long param_1,undefined8 param_2,byte *param_3,long param_4,ulong param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  
  iVar3 = (int)param_3;
  if (((1 < param_4 - (long)param_3) && ((*(uint *)(param_1 + 0x18) >> 2 & 1) != 0)) &&
     (*param_3 == 0xfe)) {
    param_3 = param_3 + (ulong)(param_3[1] == 0xff) * 2;
  }
  if ((param_5 != 0) && (param_3 < (byte *)(param_4 + -1))) {
    uVar4 = 1;
    do {
      if ((*param_3 & 0xf8) == 0xd8) break;
      bVar1 = (ulong)CONCAT11(*param_3,param_3[1]) <= *(ulong *)(param_1 + 0x10);
      param_3 = param_3 + (ulong)bVar1 * 2;
      bVar2 = uVar4 < param_5;
      uVar4 = uVar4 + 1;
    } while ((bVar1 && param_3 < (byte *)(param_4 + -1)) && bVar2);
  }
  return (int)param_3 - iVar3;
}


// ===== 00541cd8  FUN_00541cd8 =====

undefined4 FUN_00541cd8(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
    uVar1 = 4;
  }
  return uVar1;
}


// ===== 00541cf0  FUN_00541cf0 =====

undefined8
FUN_00541cf0(long param_1,undefined8 param_2,ushort *param_3,ushort *param_4,ulong *param_5,
            undefined2 *param_6,long param_7,undefined8 *param_8)

{
  undefined2 *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  if ((*(byte *)(param_1 + 0x18) >> 1 & 1) != 0) {
    if (param_7 - (long)param_6 < 2) {
LAB_00541d08:
      uVar3 = 1;
      goto LAB_00541d7c;
    }
    *param_6 = 0xfeff;
    param_6 = param_6 + 1;
  }
  if (param_3 < param_4) {
    lVar5 = param_7 - (long)param_6;
    do {
      uVar2 = *param_3;
      if ((uVar2 & 0xf800) == 0xd800 || uVar4 < uVar2) {
        uVar3 = 2;
        goto LAB_00541d7c;
      }
      if (lVar5 < 2) goto LAB_00541d08;
      puVar1 = param_6 + 1;
      *(char *)param_6 = (char)uVar2;
      param_3 = param_3 + 1;
      *(char *)((long)param_6 + 1) = (char)(uVar2 >> 8);
      param_6 = puVar1;
      lVar5 = lVar5 + -2;
    } while (param_3 < param_4);
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
  }
LAB_00541d7c:
  *param_5 = (ulong)param_3;
  *param_8 = param_6;
  return uVar3;
}


// ===== 00541d88  FUN_00541d88 =====

undefined1
FUN_00541d88(long param_1,undefined8 param_2,char *param_3,char *param_4,ulong *param_5,
            ushort *param_6,ushort *param_7,undefined8 *param_8)

{
  ushort uVar1;
  undefined1 uVar2;
  ushort *puVar3;
  ulong uVar4;
  
  if (((1 < (long)param_4 - (long)param_3) && ((*(uint *)(param_1 + 0x18) >> 2 & 1) != 0)) &&
     (*param_3 == -1)) {
    param_3 = param_3 + (ulong)(param_3[1] == -2) * 2;
  }
  if (param_3 < param_4 + -1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    uVar2 = 2;
    puVar3 = param_6;
    while (param_6 = puVar3, puVar3 < param_7) {
      if (((param_3[1] & 0xf8U) == 0xd8) || (uVar1 = CONCAT11(param_3[1],*param_3), uVar4 < uVar1))
      goto LAB_00541e0c;
      param_3 = param_3 + 2;
      param_6 = puVar3 + 1;
      *puVar3 = uVar1;
      puVar3 = param_6;
      if (param_4 + -1 <= param_3) break;
    }
  }
  uVar2 = param_3 < param_4;
LAB_00541e0c:
  *param_5 = (ulong)param_3;
  *param_8 = param_6;
  return uVar2;
}


// ===== 00541e18  FUN_00541e18 =====

undefined8
FUN_00541e18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// ===== 00541e24  FUN_00541e24 =====

undefined8 FUN_00541e24(void)

{
  return 0;
}


// ===== 00541e2c  FUN_00541e2c =====

undefined8 FUN_00541e2c(void)

{
  return 0;
}


// ===== 00541e34  FUN_00541e34 =====

int FUN_00541e34(long param_1,undefined8 param_2,char *param_3,long param_4,ulong param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  
  iVar3 = (int)param_3;
  if (((1 < param_4 - (long)param_3) && ((*(uint *)(param_1 + 0x18) >> 2 & 1) != 0)) &&
     (*param_3 == -1)) {
    param_3 = param_3 + (ulong)(param_3[1] == -2) * 2;
  }
  if ((param_5 != 0) && (param_3 < (char *)(param_4 + -1))) {
    uVar4 = 1;
    do {
      if ((param_3[1] & 0xf8U) == 0xd8) break;
      bVar1 = (ulong)CONCAT11(param_3[1],*param_3) <= *(ulong *)(param_1 + 0x10);
      param_3 = param_3 + (ulong)bVar1 * 2;
      bVar2 = uVar4 < param_5;
      uVar4 = uVar4 + 1;
    } while ((bVar1 && param_3 < (char *)(param_4 + -1)) && bVar2);
  }
  return (int)param_3 - iVar3;
}


// ===== 00541ec8  FUN_00541ec8 =====

undefined4 FUN_00541ec8(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
    uVar1 = 4;
  }
  return uVar1;
}


// ===== 00541ee0  FUN_00541ee0 =====

undefined8
FUN_00541ee0(long param_1,undefined8 param_2,uint *param_3,uint *param_4,ulong *param_5,
            byte *param_6,long param_7,undefined8 *param_8)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  if ((*(byte *)(param_1 + 0x18) >> 1 & 1) != 0) {
    if (param_7 - (long)param_6 < 2) {
LAB_00541ef8:
      uVar4 = 1;
      goto LAB_00541fb4;
    }
    param_6[0] = 0xfe;
    param_6[1] = 0xff;
    param_6 = param_6 + 2;
  }
  if (param_3 < param_4) {
    do {
      uVar2 = *param_3;
      if (uVar2 >> 0xb == 0x1b || uVar5 < uVar2) {
        uVar4 = 2;
        goto LAB_00541fb4;
      }
      bVar3 = (byte)(uVar2 >> 8);
      if (uVar2 >> 0x10 == 0) {
        if (param_7 - (long)param_6 < 2) goto LAB_00541ef8;
        lVar7 = 2;
        pbVar6 = param_6 + 1;
        *param_6 = bVar3;
      }
      else {
        if (param_7 - (long)param_6 < 4) goto LAB_00541ef8;
        iVar1 = (uVar2 >> 10 & 0x7c0) + 0x3fc0;
        pbVar6 = param_6 + 3;
        lVar7 = 4;
        param_6[2] = bVar3 & 3 | 0xdc;
        *param_6 = (byte)((uint)iVar1 >> 8) | 0xd8;
        param_6[1] = (byte)iVar1 | (byte)(uVar2 >> 10) & 0x3f;
      }
      param_6 = param_6 + lVar7;
      param_3 = param_3 + 1;
      *pbVar6 = (byte)uVar2;
    } while (param_3 < param_4);
  }
  uVar4 = 0;
LAB_00541fb4:
  *param_5 = (ulong)param_3;
  *param_8 = param_6;
  return uVar4;
}


// ===== 00541fc0  FUN_00541fc0 =====

ulong FUN_00541fc0(long param_1,undefined8 param_2,byte *param_3,byte *param_4,ulong *param_5,
                  undefined4 *param_6,undefined4 *param_7,ulong *param_8)

{
  byte bVar1;
  ulong uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (((1 < (long)param_4 - (long)param_3) && ((*(uint *)(param_1 + 0x18) >> 2 & 1) != 0)) &&
     (*param_3 == 0xfe)) {
    param_3 = param_3 + (ulong)(param_3[1] == 0xff) * 2;
  }
  if (param_3 < param_4 + -1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar3 = param_6;
    do {
      param_6 = puVar3;
      if (param_7 <= puVar3) break;
      uVar5 = (ulong)CONCAT11(*param_3,param_3[1]);
      bVar1 = *param_3 & 0xfc;
      if (bVar1 == 0xd8) {
        if ((long)param_4 - (long)param_3 < 4) {
          uVar2 = 1;
          goto LAB_0054209c;
        }
        if (((param_3[2] & 0xfc) != 0xdc) ||
           (uVar5 = ((ulong)param_3[3] | ((ulong)param_3[2] & 3) << 8 | (uVar5 & 0x3ff) << 10) +
                    0x10000, uVar4 < uVar5)) {
          uVar2 = 2;
          goto LAB_0054209c;
        }
        uVar2 = 4;
      }
      else {
        uVar2 = 2;
        if ((bVar1 == 0xdc) || (uVar4 < uVar5)) goto LAB_0054209c;
      }
      param_3 = param_3 + uVar2;
      param_6 = puVar3 + 1;
      *puVar3 = (int)uVar5;
      puVar3 = param_6;
    } while (param_3 < param_4 + -1);
  }
  uVar2 = (ulong)(param_3 < param_4);
  puVar3 = param_6;
LAB_0054209c:
  *param_5 = (ulong)param_3;
  *param_8 = (ulong)puVar3;
  return uVar2;
}


// ===== 005420b8  FUN_005420b8 =====

undefined8
FUN_005420b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// ===== 005420c4  FUN_005420c4 =====

undefined8 FUN_005420c4(void)

{
  return 0;
}


// ===== 005420cc  FUN_005420cc =====

undefined8 FUN_005420cc(void)

{
  return 0;
}


// ===== 005420d4  FUN_005420d4 =====

int FUN_005420d4(long param_1,undefined8 param_2,byte *param_3,long param_4,ulong param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  iVar3 = (int)param_3;
  if (((1 < param_4 - (long)param_3) && ((*(uint *)(param_1 + 0x18) >> 2 & 1) != 0)) &&
     (*param_3 == 0xfe)) {
    param_3 = param_3 + (ulong)(param_3[1] == 0xff) * 2;
  }
  if ((param_5 != 0) && (param_3 < (byte *)(param_4 + -1))) {
    uVar4 = 1;
    do {
      uVar5 = (ulong)CONCAT11(*param_3,param_3[1]);
      bVar1 = *param_3 & 0xfc;
      if (bVar1 == 0xd8) {
        if (((param_4 - (long)param_3 < 4) || ((param_3[2] & 0xfc) != 0xdc)) ||
           (*(ulong *)(param_1 + 0x10) <
            ((ulong)param_3[3] | ((ulong)param_3[2] & 3) << 8 | (uVar5 & 0x3ff) << 10) + 0x10000))
        break;
        param_3 = param_3 + 4;
      }
      else {
        if ((bVar1 == 0xdc) || (*(ulong *)(param_1 + 0x10) < uVar5)) break;
        param_3 = param_3 + 2;
      }
      if (((byte *)(param_4 + -1) <= param_3) ||
         (bVar2 = param_5 <= uVar4, uVar4 = uVar4 + 1, bVar2)) break;
    } while( true );
  }
  return (int)param_3 - iVar3;
}


// ===== 005421c4  FUN_005421c4 =====

undefined4 FUN_005421c4(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
    uVar1 = 6;
  }
  return uVar1;
}


// ===== 005421dc  FUN_005421dc =====

undefined8
FUN_005421dc(long param_1,undefined8 param_2,uint *param_3,uint *param_4,ulong *param_5,
            byte *param_6,long param_7,undefined8 *param_8)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  pbVar4 = param_6;
  if ((*(byte *)(param_1 + 0x18) >> 1 & 1) != 0) {
    if (param_7 - (long)param_6 < 2) {
LAB_005421f4:
      uVar3 = 1;
      goto LAB_005422a0;
    }
    pbVar4 = param_6 + 2;
    param_6[0] = 0xff;
    param_6[1] = 0xfe;
  }
  param_6 = pbVar4;
  if (param_3 < param_4) {
    do {
      uVar2 = *param_3;
      if (uVar2 >> 0xb == 0x1b || uVar5 < uVar2) {
        uVar3 = 2;
        goto LAB_005422a0;
      }
      if ((uVar2 & 0xffff0000) == 0) {
        if (param_7 - (long)param_6 < 2) goto LAB_005421f4;
        pbVar4 = param_6 + 2;
        *(short *)param_6 = (short)uVar2;
      }
      else {
        if (param_7 - (long)param_6 < 4) goto LAB_005421f4;
        iVar1 = (uVar2 >> 10 & 0x7c0) + 0x3fc0;
        param_6[2] = (byte)uVar2;
        param_6[3] = (byte)(uVar2 >> 8) & 3 | 0xdc;
        *param_6 = (byte)iVar1 | (byte)(uVar2 >> 10) & 0x3f;
        pbVar4 = param_6 + 4;
        param_6[1] = (byte)((uint)iVar1 >> 8) | 0xd8;
      }
      param_3 = param_3 + 1;
      param_6 = pbVar4;
    } while (param_3 < param_4);
  }
  uVar3 = 0;
  param_6 = pbVar4;
LAB_005422a0:
  *param_5 = (ulong)param_3;
  *param_8 = param_6;
  return uVar3;
}


// ===== 005422ac  FUN_005422ac =====

ulong FUN_005422ac(long param_1,undefined8 param_2,ushort *param_3,ushort *param_4,ulong *param_5,
                  undefined4 *param_6,undefined4 *param_7,ulong *param_8)

{
  byte bVar1;
  ulong uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (((1 < (long)param_4 - (long)param_3) && ((*(uint *)(param_1 + 0x18) >> 2 & 1) != 0)) &&
     ((char)*param_3 == -1)) {
    param_3 = param_3 + (*(char *)((long)param_3 + 1) == -2);
  }
  if (param_3 < (ushort *)((long)param_4 + -1)) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar3 = param_6;
    do {
      param_6 = puVar3;
      if (param_7 <= puVar3) break;
      uVar5 = (ulong)*param_3;
      bVar1 = *(byte *)((long)param_3 + 1) & 0xfc;
      if (bVar1 == 0xd8) {
        if ((long)param_4 - (long)param_3 < 4) {
          uVar2 = 1;
          goto LAB_00542388;
        }
        if (((*(byte *)((long)param_3 + 3) & 0xfc) != 0xdc) ||
           (uVar5 = ((ulong)(byte)param_3[1] | ((ulong)*(byte *)((long)param_3 + 3) & 3) << 8 |
                    (uVar5 & 0x3ff) << 10) + 0x10000, uVar4 < uVar5)) {
          uVar2 = 2;
          goto LAB_00542388;
        }
        uVar2 = 4;
      }
      else {
        uVar2 = 2;
        if ((bVar1 == 0xdc) || (uVar4 < uVar5)) goto LAB_00542388;
      }
      param_3 = (ushort *)((long)param_3 + uVar2);
      param_6 = puVar3 + 1;
      *puVar3 = (int)uVar5;
      puVar3 = param_6;
    } while (param_3 < (ushort *)((long)param_4 + -1));
  }
  uVar2 = (ulong)(param_3 < param_4);
  puVar3 = param_6;
LAB_00542388:
  *param_5 = (ulong)param_3;
  *param_8 = (ulong)puVar3;
  return uVar2;
}


// ===== 005423a4  FUN_005423a4 =====

undefined8
FUN_005423a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// ===== 005423b0  FUN_005423b0 =====

undefined8 FUN_005423b0(void)

{
  return 0;
}


// ===== 005423b8  FUN_005423b8 =====

undefined8 FUN_005423b8(void)

{
  return 0;
}


// ===== 005423c0  FUN_005423c0 =====

int FUN_005423c0(long param_1,undefined8 param_2,ushort *param_3,long param_4,ulong param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  
  iVar3 = (int)param_3;
  if (((1 < param_4 - (long)param_3) && ((*(uint *)(param_1 + 0x18) >> 2 & 1) != 0)) &&
     ((char)*param_3 == -1)) {
    param_3 = param_3 + (*(char *)((long)param_3 + 1) == -2);
  }
  if ((param_5 != 0) && (param_3 < (ushort *)(param_4 + -1))) {
    uVar4 = 1;
    do {
      bVar1 = *(byte *)((long)param_3 + 1) & 0xfc;
      if (bVar1 == 0xd8) {
        if (((param_4 - (long)param_3 < 4) || ((*(byte *)((long)param_3 + 3) & 0xfc) != 0xdc)) ||
           (*(ulong *)(param_1 + 0x10) <
            ((ulong)(byte)param_3[1] | ((ulong)*(byte *)((long)param_3 + 3) & 3) << 8 |
            ((ulong)*param_3 & 0x3ff) << 10) + 0x10000)) break;
        param_3 = param_3 + 2;
      }
      else {
        if ((bVar1 == 0xdc) || (*(ulong *)(param_1 + 0x10) < (ulong)*param_3)) break;
        param_3 = param_3 + 1;
      }
      if (((ushort *)(param_4 + -1) <= param_3) ||
         (bVar2 = param_5 <= uVar4, uVar4 = uVar4 + 1, bVar2)) break;
    } while( true );
  }
  return (int)param_3 - iVar3;
}


// ===== 005424b0  FUN_005424b0 =====

undefined4 FUN_005424b0(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
    uVar1 = 6;
  }
  return uVar1;
}


// ===== 005424c8  FUN_005424c8 =====

void FUN_005424c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  long lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_6;
  uStack_40 = param_3;
  FUN_00542558(param_3,param_4,&uStack_40,param_6,param_7,&local_48,*(undefined8 *)(param_1 + 0x18),
               *(undefined4 *)(param_1 + 0x20));
  *param_5 = uStack_40;
  *param_8 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00542558  FUN_00542558 =====

undefined8
FUN_00542558(long param_1,uint *param_2,long *param_3,undefined1 *param_4,long param_5,long *param_6
            ,ulong param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint *puVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  
  *param_3 = param_1;
  *param_6 = (long)param_4;
  if ((param_8 >> 1 & 1) != 0) {
    if (param_5 - (long)param_4 < 3) {
      return 1;
    }
    *param_6 = (long)(param_4 + 1);
    *param_4 = 0xef;
    puVar3 = (undefined1 *)*param_6;
    *param_6 = (long)(puVar3 + 1);
    *puVar3 = 0xbb;
    puVar3 = (undefined1 *)*param_6;
    *param_6 = (long)(puVar3 + 1);
    *puVar3 = 0xbf;
  }
  puVar4 = (uint *)*param_3;
  do {
    if (param_2 <= puVar4) {
      return 0;
    }
    uVar2 = *puVar4;
    uVar8 = (ulong)uVar2 & 0xffff;
    if (param_7 < uVar8) {
      return 2;
    }
    uVar7 = (uint)uVar8;
    if (uVar7 < 0x80) {
      pbVar5 = (byte *)*param_6;
      if (param_5 - (long)pbVar5 < 1) {
        return 1;
      }
      *param_6 = (long)(pbVar5 + 1);
      *pbVar5 = (byte)uVar2;
    }
    else {
      if (uVar7 < 0x800) {
        pbVar5 = (byte *)*param_6;
        if (param_5 - (long)pbVar5 < 2) {
          return 1;
        }
        bVar6 = (byte)(uVar2 >> 6) | 0xc0;
      }
      else {
        if (0x1a < uVar7 >> 0xb) {
          if (uVar7 >> 10 < 0x37) {
            if ((long)param_2 - (long)puVar4 < 8) {
              return 1;
            }
            uVar7 = puVar4[1];
            if ((uVar7 & 0xfc00) != 0xdc00) {
              return 2;
            }
            if (param_5 - *param_6 < 4) {
              return 1;
            }
            if (param_7 < ((ulong)uVar7 & 0x3ff | ((ulong)uVar2 & 0x3ff) << 10) + 0x10000) {
              return 2;
            }
            *param_3 = (long)(puVar4 + 1);
            pbVar5 = (byte *)*param_6;
            uVar1 = (uVar2 >> 6 & 0xf) + 1;
            *param_6 = (long)(pbVar5 + 1);
            *pbVar5 = (byte)(uVar1 >> 2) | 0xf0;
            pbVar5 = (byte *)*param_6;
            *param_6 = (long)(pbVar5 + 1);
            *pbVar5 = (byte)(uVar2 >> 2) & 0xf | (byte)((uVar1 & 3) << 4) | 0x80;
            pbVar5 = (byte *)*param_6;
            *param_6 = (long)(pbVar5 + 1);
            *pbVar5 = (byte)((uVar2 & 3) << 4) | (byte)(uVar7 >> 6) & 0xf | 0x80;
            pbVar5 = (byte *)*param_6;
            *param_6 = (long)(pbVar5 + 1);
            *pbVar5 = (byte)uVar7 & 0x3f | 0x80;
            goto LAB_00542600;
          }
          if (uVar7 < 0xe000) {
            return 2;
          }
        }
        pbVar5 = (byte *)*param_6;
        if (param_5 - (long)pbVar5 < 3) {
          return 1;
        }
        *param_6 = (long)(pbVar5 + 1);
        *pbVar5 = (byte)(uVar7 >> 0xc) | 0xe0;
        pbVar5 = (byte *)*param_6;
        bVar6 = (byte)(uVar2 >> 6) & 0x3f | 0x80;
      }
      *param_6 = (long)(pbVar5 + 1);
      *pbVar5 = bVar6;
      pbVar5 = (byte *)*param_6;
      *param_6 = (long)(pbVar5 + 1);
      *pbVar5 = (byte)uVar2 & 0x3f | 0x80;
    }
LAB_00542600:
    puVar4 = (uint *)(*param_3 + 4);
    *param_3 = (long)puVar4;
  } while( true );
}


// ===== 00542774  FUN_00542774 =====

void FUN_00542774(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  long lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_6;
  uStack_40 = param_3;
  FUN_00542804(param_3,param_4,&uStack_40,param_6,param_7,&local_48,*(undefined8 *)(param_1 + 0x18),
               *(undefined4 *)(param_1 + 0x20));
  *param_5 = uStack_40;
  *param_8 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00542804  FUN_00542804 =====

undefined8
FUN_00542804(long param_1,byte *param_2,long *param_3,long param_4,uint *param_5,long *param_6,
            ulong param_7,uint param_8)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint *puVar5;
  byte *pbVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  
  *param_3 = param_1;
  *param_6 = param_4;
  pbVar6 = (byte *)*param_3;
  if (((((param_8 >> 2 & 1) != 0) && (2 < (long)param_2 - (long)pbVar6)) && (*pbVar6 == 0xef)) &&
     ((pbVar6[1] == 0xbb && (pbVar6[2] == 0xbf)))) {
    pbVar6 = pbVar6 + 3;
    *param_3 = (long)pbVar6;
  }
  if (pbVar6 < param_2) {
    puVar5 = (uint *)*param_6;
    do {
      if (param_5 <= puVar5) {
        return 1;
      }
      bVar2 = *pbVar6;
      uVar8 = (ulong)bVar2;
      if (param_7 < uVar8) {
        return 2;
      }
      if ((char)bVar2 < '\0') {
        if (bVar2 < 0xc2) {
          return 2;
        }
        if (bVar2 < 0xe0) {
          if ((long)param_2 - (long)pbVar6 < 2) {
            return 1;
          }
          if ((pbVar6[1] & 0xc0) != 0x80) {
            return 2;
          }
          uVar8 = (ulong)pbVar6[1] & 0x3f | (uVar8 & 0x1f) << 6;
          if (param_7 < uVar8) {
            return 2;
          }
          pbVar6 = pbVar6 + 2;
          goto LAB_00542988;
        }
        uVar7 = (uint)bVar2;
        if (bVar2 < 0xf0) {
          if ((long)param_2 - (long)pbVar6 < 3) {
            return 1;
          }
          bVar2 = pbVar6[1];
          if (uVar7 == 0xed) {
            bVar3 = bVar2 & 0xe0;
joined_r0x00542950:
            if (bVar3 != 0x80) {
              return 2;
            }
          }
          else {
            if (uVar7 != 0xe0) {
              bVar3 = bVar2 & 0xc0;
              goto joined_r0x00542950;
            }
            if ((bVar2 & 0xe0) != 0xa0) {
              return 2;
            }
          }
          if (((pbVar6[2] & 0xc0) != 0x80) ||
             (uVar8 = (uVar8 & 0xf) << 0xc | ((ulong)bVar2 & 0x3f) << 6 | (ulong)pbVar6[2] & 0x3f,
             param_7 < uVar8)) {
            return 2;
          }
          pbVar6 = pbVar6 + 3;
          goto LAB_00542988;
        }
        if (0xf4 < uVar7) {
          return 2;
        }
        if ((long)param_2 - (long)pbVar6 < 4) {
          return 1;
        }
        bVar2 = pbVar6[1];
        bVar3 = pbVar6[2];
        bVar4 = pbVar6[3];
        uVar9 = (uint)bVar2;
        if (uVar7 == 0xf4) {
          uVar1 = uVar9 & 0xf0;
joined_r0x005429b4:
          if (uVar1 != 0x80) {
            return 2;
          }
        }
        else {
          if (uVar7 != 0xf0) {
            uVar1 = uVar9 & 0xc0;
            goto joined_r0x005429b4;
          }
          if (0x2f < (uVar9 + 0x70 & 0xff)) {
            return 2;
          }
        }
        if ((bVar3 & 0xc0) != 0x80) {
          return 2;
        }
        if ((bVar4 & 0xc0) != 0x80) {
          return 2;
        }
        if ((long)param_5 - (long)puVar5 < 8) {
          return 1;
        }
        if (param_7 < (((ulong)uVar7 & 7) << 0x12 | ((ulong)bVar2 & 0x3f) << 0xc |
                       ((ulong)bVar3 & 0x3f) << 6 | (ulong)bVar4 & 0x3f)) {
          return 2;
        }
        *puVar5 = ((uVar9 & 0xf) << 2 | ((uVar7 & 7) << 2 | bVar2 >> 4 & 3) << 6 | bVar3 >> 4 & 3) -
                  0x40 | 0xd800;
        puVar5[1] = bVar4 & 0x3f | (bVar3 & 0xf) << 6 | 0xdc00;
        *param_6 = (long)(puVar5 + 1);
        pbVar6 = (byte *)(*param_3 + 4);
      }
      else {
        pbVar6 = pbVar6 + 1;
LAB_00542988:
        *puVar5 = (uint)uVar8;
      }
      *param_3 = (long)pbVar6;
      puVar5 = (uint *)(*param_6 + 4);
      *param_6 = (long)puVar5;
      pbVar6 = (byte *)*param_3;
    } while (pbVar6 < param_2);
  }
  return 0;
}


// ===== 00542a60  FUN_00542a60 =====

undefined8
FUN_00542a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// ===== 00542a6c  FUN_00542a6c =====

undefined8 FUN_00542a6c(void)

{
  return 0;
}


// ===== 00542a74  FUN_00542a74 =====

undefined8 FUN_00542a74(void)

{
  return 0;
}


// ===== 00542a7c  FUN_00542a7c =====

void FUN_00542a7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_005400fc(param_3,param_4,param_5,*(undefined8 *)(param_1 + 0x18),
               *(undefined4 *)(param_1 + 0x20));
  return;
}


// ===== 00542a98  FUN_00542a98 =====

undefined4 FUN_00542a98(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if ((*(byte *)(param_1 + 0x20) & 4) != 0) {
    uVar1 = 7;
  }
  return uVar1;
}


// ===== 00542ab0  FUN_00542ab0 =====

void FUN_00542ab0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  long lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_6;
  uStack_40 = param_3;
  FUN_0053fbc4(param_3,param_4,&uStack_40,param_6,param_7,&local_48,*(undefined8 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x18));
  *param_5 = uStack_40;
  *param_8 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00542b40  FUN_00542b40 =====

void FUN_00542b40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  long lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_6;
  uStack_40 = param_3;
  FUN_0053fe68(param_3,param_4,&uStack_40,param_6,param_7,&local_48,*(undefined8 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x18));
  *param_5 = uStack_40;
  *param_8 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00542bd0  FUN_00542bd0 =====

undefined8
FUN_00542bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// ===== 00542bdc  FUN_00542bdc =====

undefined8 FUN_00542bdc(void)

{
  return 0;
}


// ===== 00542be4  FUN_00542be4 =====

undefined8 FUN_00542be4(void)

{
  return 0;
}


// ===== 00542bec  FUN_00542bec =====

void FUN_00542bec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_005400fc(param_3,param_4,param_5,*(undefined8 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x18));
  return;
}


// ===== 00542c08  FUN_00542c08 =====

undefined4 FUN_00542c08(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
    uVar1 = 7;
  }
  return uVar1;
}


// ===== 00542c20  FUN_00542c20 =====

void FUN_00542c20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  long lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_6;
  uStack_40 = param_3;
  FUN_00542558(param_3,param_4,&uStack_40,param_6,param_7,&local_48,*(undefined8 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x18));
  *param_5 = uStack_40;
  *param_8 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00542cb0  FUN_00542cb0 =====

void FUN_00542cb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  long lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_6;
  uStack_40 = param_3;
  FUN_00542804(param_3,param_4,&uStack_40,param_6,param_7,&local_48,*(undefined8 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x18));
  *param_5 = uStack_40;
  *param_8 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00542d40  FUN_00542d40 =====

undefined8
FUN_00542d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// ===== 00542d4c  FUN_00542d4c =====

undefined8 FUN_00542d4c(void)

{
  return 0;
}


// ===== 00542d54  FUN_00542d54 =====

undefined8 FUN_00542d54(void)

{
  return 0;
}


// ===== 00542d5c  FUN_00542d5c =====

void FUN_00542d5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_005400fc(param_3,param_4,param_5,*(undefined8 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x18));
  return;
}


// ===== 00542d78  FUN_00542d78 =====

undefined4 FUN_00542d78(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
    uVar1 = 7;
  }
  return uVar1;
}


// ===== 00542d90  FUN_00542d90 =====

void FUN_00542d90(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 00542db4  FUN_00542db4 =====

void FUN_00542db4(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 00542dd8  FUN_00542dd8 =====

void FUN_00542dd8(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 00542dfc  FUN_00542dfc =====

void FUN_00542dfc(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 00542e20  FUN_00542e20 =====

void FUN_00542e20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d206d8;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  FUN_005466c0(param_1);
  return;
}


// ===== 00542e5c  FUN_00542e5c =====

void FUN_00542e5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d206d8;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  FUN_005466c0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00542ea0  FUN_00542ea0 =====

void FUN_00542ea0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d20728;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  FUN_005466c0(param_1);
  return;
}


// ===== 00542edc  FUN_00542edc =====

void FUN_00542edc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d20728;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  FUN_005466c0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00542f20  FUN_00542f20 =====

undefined1 FUN_00542f20(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}


// ===== 00542f28  FUN_00542f28 =====

undefined4 FUN_00542f28(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


// ===== 00542f30  FUN_00542f30 =====

undefined1 FUN_00542f30(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}


// ===== 00542f38  FUN_00542f38 =====

undefined4 FUN_00542f38(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 00542f40  FUN_00542f40 =====

void FUN_00542f40(undefined8 param_1,long param_2)

{
  FUN_004c55b4(param_1,param_2 + 0x18);
  return;
}


// ===== 00542f4c  FUN_00542f4c =====

void FUN_00542f4c(undefined8 param_1,long param_2)

{
  FUN_004c55b4(param_1,param_2 + 0x18);
  return;
}


// ===== 00542f58  FUN_00542f58 =====

void FUN_00542f58(undefined8 param_1)

{
  FUN_004a3cf4(param_1,&DAT_001b0c62);
  return;
}


// ===== 00542f68  FUN_00542f68 =====

void FUN_00542f68(undefined8 param_1)

{
  FUN_00542f78(param_1,&DAT_001f6990);
  return;
}


// ===== 00542f78  FUN_00542f78 =====

void FUN_00542f78(wchar_t *param_1,wchar_t *param_2)

{
  ulong uVar1;
  size_t sVar2;
  wchar_t *__dest;
  
  if (param_2 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string",0x370,
               "__s != nullptr","basic_string(const char*) detected nullptr");
  }
  sVar2 = wcslen(param_2);
  if (sVar2 < 0x3ffffffffffffff0) {
    if (sVar2 < 5) {
      *(char *)((long)param_1 + 0x17) = (char)sVar2;
      __dest = param_1;
    }
    else {
      if (0x3ffffffffffffffe < (sVar2 | 3)) goto LAB_0054307c;
      uVar1 = (sVar2 | 3) + 1;
      __dest = (wchar_t *)operator_new(uVar1 * 4);
      *(wchar_t **)param_1 = __dest;
      *(size_t *)(param_1 + 2) = sVar2;
      *(ulong *)(param_1 + 4) = uVar1 | 0x8000000000000000;
    }
    if ((__dest <= param_2) && (param_2 < __dest + sVar2)) {
                    /* try { // try from 0054304c to 00543073 has its CatchHandler @ 00543080 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0x154,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    if (sVar2 != 0) {
      memmove(__dest,param_2,sVar2 << 2);
    }
    __dest[sVar2] = L'\0';
    return;
  }
  FUN_00545334(param_1);
LAB_0054307c:
                    /* WARNING: Subroutine does not return */
  FUN_00401ad4();
}


// ===== 00543084  FUN_00543084 =====

void FUN_00543084(undefined8 param_1)

{
  FUN_004a3cf4(param_1,"false");
  return;
}


// ===== 00543094  FUN_00543094 =====

void FUN_00543094(undefined8 param_1)

{
  FUN_00542f78(param_1,L"false");
  return;
}


// ===== 005430a4  FUN_005430a4 =====

void FUN_005430a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d206d8;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  FUN_005466c0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 005430e8  FUN_005430e8 =====

void FUN_005430e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d20728;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  FUN_005466c0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0054312c  FUN_0054312c =====

undefined8 * FUN_0054312c(void)

{
  int iVar1;
  
  if (((DAT_00d61c90 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d61c90), iVar1 != 0)) {
                    /* try { // try from 0054316c to 0054316f has its CatchHandler @ 0054318c */
    FUN_005431a4();
    DAT_00d61c88 = &DAT_00d61de8;
    FUN_0054ff1c(&DAT_00d61c90);
  }
  return DAT_00d61c88;
}


// ===== 005431a4  FUN_005431a4 =====

void FUN_005431a4(void)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;
  undefined8 *puVar4;
  
  if (((DAT_00d61f38 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d61f38), iVar2 != 0)) {
    __cxa_atexit(FUN_00545600,0,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d61f38);
  }
  if (DAT_00d61dff < '\0') {
    DAT_00d61df0 = 6;
    puVar4 = DAT_00d61de8;
  }
  else {
    DAT_00d61dff = '\x06';
    puVar4 = &DAT_00d61de8;
  }
  *(undefined1 *)((long)puVar4 + 6) = 0;
  *(undefined2 *)((long)puVar4 + 4) = 0x7961;
  *(undefined4 *)puVar4 = 0x646e7553;
  if (DAT_00d61e17 < '\0') {
    DAT_00d61e08 = 6;
    puVar4 = DAT_00d61e00;
  }
  else {
    DAT_00d61e17 = '\x06';
    puVar4 = &DAT_00d61e00;
  }
  *(undefined1 *)((long)puVar4 + 6) = 0;
  *(undefined2 *)((long)puVar4 + 4) = 0x7961;
  *(undefined4 *)puVar4 = 0x646e6f4d;
  if (DAT_00d61e2f < '\0') {
    DAT_00d61e20 = 7;
    puVar4 = DAT_00d61e18;
  }
  else {
    DAT_00d61e2f = '\a';
    puVar4 = &DAT_00d61e18;
  }
  *(undefined1 *)((long)puVar4 + 7) = 0;
  *(undefined4 *)((long)puVar4 + 3) = 0x79616473;
  *(undefined4 *)puVar4 = 0x73657554;
  uVar1 = s_Wednesday_001979bf._0_8_;
  if (DAT_00d61e47 < '\0') {
    DAT_00d61e38 = 9;
    pcVar3 = DAT_00d61e30;
  }
  else {
    DAT_00d61e47 = '\t';
    pcVar3 = (char *)&DAT_00d61e30;
  }
  pcVar3[8] = 'y';
  pcVar3[9] = '\0';
  *(undefined8 *)pcVar3 = uVar1;
  if (DAT_00d61e5f < '\0') {
    DAT_00d61e50 = 8;
    puVar4 = DAT_00d61e48;
  }
  else {
    DAT_00d61e5f = '\b';
    puVar4 = &DAT_00d61e48;
  }
  *(undefined1 *)(puVar4 + 1) = 0;
  *puVar4 = 0x7961647372756854;
  if (DAT_00d61e77 < '\0') {
    DAT_00d61e68 = 6;
    puVar4 = DAT_00d61e60;
  }
  else {
    DAT_00d61e77 = '\x06';
    puVar4 = &DAT_00d61e60;
  }
  *(undefined1 *)((long)puVar4 + 6) = 0;
  *(undefined2 *)((long)puVar4 + 4) = 0x7961;
  *(undefined4 *)puVar4 = 0x64697246;
  if (DAT_00d61e8f < '\0') {
    DAT_00d61e80 = 8;
    puVar4 = DAT_00d61e78;
  }
  else {
    DAT_00d61e8f = '\b';
    puVar4 = &DAT_00d61e78;
  }
  *(undefined1 *)(puVar4 + 1) = 0;
  *puVar4 = 0x7961647275746153;
  if (DAT_00d61ea7 < '\0') {
    DAT_00d61e98 = 3;
    puVar4 = DAT_00d61e90;
  }
  else {
    DAT_00d61ea7 = '\x03';
    puVar4 = &DAT_00d61e90;
  }
  *(undefined4 *)puVar4 = 0x6e7553;
  if (DAT_00d61ebf < '\0') {
    DAT_00d61eb0 = 3;
    puVar4 = DAT_00d61ea8;
  }
  else {
    DAT_00d61ebf = '\x03';
    puVar4 = &DAT_00d61ea8;
  }
  *(undefined4 *)puVar4 = 0x6e6f4d;
  if (DAT_00d61ed7 < '\0') {
    DAT_00d61ec8 = 3;
    puVar4 = DAT_00d61ec0;
  }
  else {
    DAT_00d61ed7 = '\x03';
    puVar4 = &DAT_00d61ec0;
  }
  *(undefined4 *)puVar4 = 0x657554;
  if (DAT_00d61eef < '\0') {
    DAT_00d61ee0 = 3;
    puVar4 = DAT_00d61ed8;
  }
  else {
    DAT_00d61eef = '\x03';
    puVar4 = &DAT_00d61ed8;
  }
  *(undefined4 *)puVar4 = 0x646557;
  if (DAT_00d61f07 < '\0') {
    DAT_00d61ef8 = 3;
    puVar4 = DAT_00d61ef0;
  }
  else {
    DAT_00d61f07 = '\x03';
    puVar4 = &DAT_00d61ef0;
  }
  *(undefined4 *)puVar4 = 0x756854;
  if (DAT_00d61f1f < '\0') {
    DAT_00d61f10 = 3;
    puVar4 = DAT_00d61f08;
  }
  else {
    DAT_00d61f1f = '\x03';
    puVar4 = &DAT_00d61f08;
  }
  *(undefined4 *)puVar4 = 0x697246;
  if (DAT_00d61f37 < '\0') {
    DAT_00d61f28 = 3;
    puVar4 = DAT_00d61f20;
  }
  else {
    DAT_00d61f37 = '\x03';
    puVar4 = &DAT_00d61f20;
  }
  *(undefined4 *)puVar4 = 0x746153;
  return;
}


// ===== 005435b4  FUN_005435b4 =====

undefined8 * FUN_005435b4(void)

{
  int iVar1;
  
  if (((DAT_00d61ca0 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d61ca0), iVar1 != 0)) {
                    /* try { // try from 005435f4 to 005435f7 has its CatchHandler @ 00543614 */
    FUN_0054362c();
    DAT_00d61c98 = &DAT_00d61f40;
    FUN_0054ff1c(&DAT_00d61ca0);
  }
  return DAT_00d61c98;
}


// ===== 0054362c  FUN_0054362c =====

void FUN_0054362c(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (((DAT_00d62090 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d62090), iVar1 != 0)) {
    __cxa_atexit(FUN_00545764,0,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d62090);
  }
  FUN_00548888(&DAT_00d61f40,L"Sunday",6);
  FUN_00548888(&DAT_00d61f58,L"Monday",6);
  FUN_00548888(&DAT_00d61f70,L"Tuesday",7);
  FUN_00548888(&DAT_00d61f88,L"Wednesday",9);
  FUN_00548888(&DAT_00d61fa0,L"Thursday",8);
  FUN_00548888(&DAT_00d61fb8,L"Friday",6);
  FUN_00548888(&DAT_00d61fd0,L"Saturday",8);
  if (DAT_00d61fff < '\0') {
    DAT_00d61ff0 = 3;
    puVar2 = DAT_00d61fe8;
  }
  else {
    DAT_00d61fff = '\x03';
    puVar2 = &DAT_00d61fe8;
  }
  *puVar2 = 0x7500000053;
  puVar2[1] = 0x6e;
  if (DAT_00d62017 < '\0') {
    DAT_00d62008 = 3;
    puVar2 = DAT_00d62000;
  }
  else {
    DAT_00d62017 = '\x03';
    puVar2 = &DAT_00d62000;
  }
  *puVar2 = 0x6f0000004d;
  puVar2[1] = 0x6e;
  if (DAT_00d6202f < '\0') {
    DAT_00d62020 = 3;
    puVar2 = DAT_00d62018;
  }
  else {
    DAT_00d6202f = '\x03';
    puVar2 = &DAT_00d62018;
  }
  *puVar2 = 0x7500000054;
  puVar2[1] = 0x65;
  if (DAT_00d62047 < '\0') {
    DAT_00d62038 = 3;
    puVar2 = DAT_00d62030;
  }
  else {
    DAT_00d62047 = '\x03';
    puVar2 = &DAT_00d62030;
  }
  *puVar2 = 0x6500000057;
  puVar2[1] = 100;
  if (DAT_00d6205f < '\0') {
    DAT_00d62050 = 3;
    puVar2 = DAT_00d62048;
  }
  else {
    DAT_00d6205f = '\x03';
    puVar2 = &DAT_00d62048;
  }
  *puVar2 = 0x6800000054;
  puVar2[1] = 0x75;
  if (DAT_00d62077 < '\0') {
    DAT_00d62068 = 3;
    puVar2 = DAT_00d62060;
  }
  else {
    DAT_00d62077 = '\x03';
    puVar2 = &DAT_00d62060;
  }
  *puVar2 = 0x7200000046;
  puVar2[1] = 0x69;
  if (DAT_00d6208f < '\0') {
    DAT_00d62080 = 3;
    puVar2 = DAT_00d62078;
  }
  else {
    DAT_00d6208f = '\x03';
    puVar2 = &DAT_00d62078;
  }
  *puVar2 = 0x6100000053;
  puVar2[1] = 0x74;
  return;
}


// ===== 005438f8  FUN_005438f8 =====

undefined8 * FUN_005438f8(void)

{
  int iVar1;
  
  if (((DAT_00d61cb0 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d61cb0), iVar1 != 0)) {
                    /* try { // try from 00543938 to 0054393b has its CatchHandler @ 00543958 */
    FUN_00543970();
    DAT_00d61ca8 = &DAT_00d62098;
    FUN_0054ff1c(&DAT_00d61cb0);
  }
  return DAT_00d61ca8;
}


// ===== 00543970  FUN_00543970 =====

void FUN_00543970(void)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;
  undefined8 *puVar4;
  
  if (((DAT_00d622d8 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d622d8), iVar2 != 0)) {
    __cxa_atexit(FUN_005458c8,0,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d622d8);
  }
  if (DAT_00d620af < '\0') {
    DAT_00d620a0 = 7;
    puVar4 = DAT_00d62098;
  }
  else {
    DAT_00d620af = '\a';
    puVar4 = &DAT_00d62098;
  }
  *(undefined1 *)((long)puVar4 + 7) = 0;
  *(undefined4 *)((long)puVar4 + 3) = 0x79726175;
  *(undefined4 *)puVar4 = 0x756e614a;
  if (DAT_00d620c7 < '\0') {
    DAT_00d620b8 = 8;
    puVar4 = DAT_00d620b0;
  }
  else {
    DAT_00d620c7 = '\b';
    puVar4 = &DAT_00d620b0;
  }
  *(undefined1 *)(puVar4 + 1) = 0;
  *puVar4 = 0x7972617572626546;
  if (DAT_00d620df < '\0') {
    DAT_00d620d0 = 5;
    puVar4 = DAT_00d620c8;
  }
  else {
    DAT_00d620df = '\x05';
    puVar4 = &DAT_00d620c8;
  }
  *(undefined2 *)((long)puVar4 + 4) = 0x68;
  *(undefined4 *)puVar4 = 0x6372614d;
  if (DAT_00d620f7 < '\0') {
    DAT_00d620e8 = 5;
    puVar4 = DAT_00d620e0;
  }
  else {
    DAT_00d620f7 = '\x05';
    puVar4 = &DAT_00d620e0;
  }
  *(undefined2 *)((long)puVar4 + 4) = 0x6c;
  *(undefined4 *)puVar4 = 0x69727041;
  if (DAT_00d6210f < '\0') {
    DAT_00d62100 = 3;
    puVar4 = DAT_00d620f8;
  }
  else {
    DAT_00d6210f = '\x03';
    puVar4 = &DAT_00d620f8;
  }
  *(undefined4 *)puVar4 = 0x79614d;
  if (DAT_00d62127 < '\0') {
    DAT_00d62118 = 4;
    puVar4 = DAT_00d62110;
  }
  else {
    DAT_00d62127 = '\x04';
    puVar4 = &DAT_00d62110;
  }
  *(undefined1 *)((long)puVar4 + 4) = 0;
  *(undefined4 *)puVar4 = 0x656e754a;
  if (DAT_00d6213f < '\0') {
    DAT_00d62130 = 4;
    puVar4 = DAT_00d62128;
  }
  else {
    DAT_00d6213f = '\x04';
    puVar4 = &DAT_00d62128;
  }
  *(undefined1 *)((long)puVar4 + 4) = 0;
  *(undefined4 *)puVar4 = 0x796c754a;
  if (DAT_00d62157 < '\0') {
    DAT_00d62148 = 6;
    puVar4 = DAT_00d62140;
  }
  else {
    DAT_00d62157 = '\x06';
    puVar4 = &DAT_00d62140;
  }
  *(undefined1 *)((long)puVar4 + 6) = 0;
  *(undefined2 *)((long)puVar4 + 4) = 0x7473;
  *(undefined4 *)puVar4 = 0x75677541;
  uVar1 = s_September_001ef914._0_8_;
  if (DAT_00d6216f < '\0') {
    DAT_00d62160 = 9;
    pcVar3 = DAT_00d62158;
  }
  else {
    DAT_00d6216f = '\t';
    pcVar3 = (char *)&DAT_00d62158;
  }
  pcVar3[8] = 'r';
  pcVar3[9] = '\0';
  *(undefined8 *)pcVar3 = uVar1;
  if (DAT_00d62187 < '\0') {
    DAT_00d62178 = 7;
    puVar4 = DAT_00d62170;
  }
  else {
    DAT_00d62187 = '\a';
    puVar4 = &DAT_00d62170;
  }
  *(undefined1 *)((long)puVar4 + 7) = 0;
  *(undefined4 *)((long)puVar4 + 3) = 0x7265626f;
  *(undefined4 *)puVar4 = 0x6f74634f;
  if (DAT_00d6219f < '\0') {
    DAT_00d62190 = 8;
    puVar4 = DAT_00d62188;
  }
  else {
    DAT_00d6219f = '\b';
    puVar4 = &DAT_00d62188;
  }
  *(undefined1 *)(puVar4 + 1) = 0;
  *puVar4 = 0x7265626d65766f4e;
  if (DAT_00d621b7 < '\0') {
    DAT_00d621a8 = 8;
    puVar4 = DAT_00d621a0;
  }
  else {
    DAT_00d621b7 = '\b';
    puVar4 = &DAT_00d621a0;
  }
  *(undefined1 *)(puVar4 + 1) = 0;
  *puVar4 = 0x7265626d65636544;
  if (DAT_00d621cf < '\0') {
    DAT_00d621c0 = 3;
    puVar4 = DAT_00d621b8;
  }
  else {
    DAT_00d621cf = '\x03';
    puVar4 = &DAT_00d621b8;
  }
  *(undefined4 *)puVar4 = 0x6e614a;
  if (DAT_00d621e7 < '\0') {
    DAT_00d621d8 = 3;
    puVar4 = DAT_00d621d0;
  }
  else {
    DAT_00d621e7 = '\x03';
    puVar4 = &DAT_00d621d0;
  }
  *(undefined4 *)puVar4 = 0x626546;
  if (DAT_00d621ff < '\0') {
    DAT_00d621f0 = 3;
    puVar4 = DAT_00d621e8;
  }
  else {
    DAT_00d621ff = '\x03';
    puVar4 = &DAT_00d621e8;
  }
  *(undefined4 *)puVar4 = 0x72614d;
  if (DAT_00d62217 < '\0') {
    DAT_00d62208 = 3;
    puVar4 = DAT_00d62200;
  }
  else {
    DAT_00d62217 = '\x03';
    puVar4 = &DAT_00d62200;
  }
  *(undefined4 *)puVar4 = 0x727041;
  if (DAT_00d6222f < '\0') {
    DAT_00d62220 = 3;
    puVar4 = DAT_00d62218;
  }
  else {
    DAT_00d6222f = '\x03';
    puVar4 = &DAT_00d62218;
  }
  *(undefined4 *)puVar4 = 0x79614d;
  if (DAT_00d62247 < '\0') {
    DAT_00d62238 = 3;
    puVar4 = DAT_00d62230;
  }
  else {
    DAT_00d62247 = '\x03';
    puVar4 = &DAT_00d62230;
  }
  *(undefined4 *)puVar4 = 0x6e754a;
  if (DAT_00d6225f < '\0') {
    DAT_00d62250 = 3;
    puVar4 = DAT_00d62248;
  }
  else {
    DAT_00d6225f = '\x03';
    puVar4 = &DAT_00d62248;
  }
  *(undefined4 *)puVar4 = 0x6c754a;
  if (DAT_00d62277 < '\0') {
    DAT_00d62268 = 3;
    puVar4 = DAT_00d62260;
  }
  else {
    DAT_00d62277 = '\x03';
    puVar4 = &DAT_00d62260;
  }
  *(undefined4 *)puVar4 = 0x677541;
  if (DAT_00d6228f < '\0') {
    DAT_00d62280 = 3;
    puVar4 = DAT_00d62278;
  }
  else {
    DAT_00d6228f = '\x03';
    puVar4 = &DAT_00d62278;
  }
  *(undefined4 *)puVar4 = 0x706553;
  if (DAT_00d622a7 < '\0') {
    DAT_00d62298 = 3;
    puVar4 = DAT_00d62290;
  }
  else {
    DAT_00d622a7 = '\x03';
    puVar4 = &DAT_00d62290;
  }
  *(undefined4 *)puVar4 = 0x74634f;
  if (DAT_00d622bf < '\0') {
    DAT_00d622b0 = 3;
    puVar4 = DAT_00d622a8;
  }
  else {
    DAT_00d622bf = '\x03';
    puVar4 = &DAT_00d622a8;
  }
  *(undefined4 *)puVar4 = 0x766f4e;
  if (DAT_00d622d7 < '\0') {
    DAT_00d622c8 = 3;
    puVar4 = DAT_00d622c0;
  }
  else {
    DAT_00d622d7 = '\x03';
    puVar4 = &DAT_00d622c0;
  }
  *(undefined4 *)puVar4 = 0x636544;
  return;
}


// ===== 00543fcc  FUN_00543fcc =====

undefined * FUN_00543fcc(void)

{
  int iVar1;
  
  if (((DAT_00d61cc0 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d61cc0), iVar1 != 0)) {
                    /* try { // try from 0054400c to 0054400f has its CatchHandler @ 0054402c */
    FUN_00544044();
    DAT_00d61cb8 = &DAT_00d622e0;
    FUN_0054ff1c(&DAT_00d61cc0);
  }
  return DAT_00d61cb8;
}


// ===== 00544044  FUN_00544044 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00544044(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  
  if (((DAT_00d62520 & 1) == 0) && (iVar3 = FUN_0054fdd4(&DAT_00d62520), iVar3 != 0)) {
    __cxa_atexit(FUN_00545910,0,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d62520);
  }
  FUN_00548888(&DAT_00d622e0,L"January",7);
  FUN_00548888(&DAT_00d622f8,L"February",8);
  FUN_00548888(&DAT_00d62310,L"March",5);
  FUN_00548888(&DAT_00d62328,L"April",5);
  if (DAT_00d62357 < '\0') {
    DAT_00d62348 = 3;
    puVar4 = DAT_00d62340;
  }
  else {
    DAT_00d62357 = '\x03';
    puVar4 = &DAT_00d62340;
  }
  *puVar4 = 0x610000004d;
  puVar4[1] = 0x79;
  if (DAT_00d6236f < '\0') {
    DAT_00d62360 = 4;
    puVar4 = DAT_00d62358;
  }
  else {
    DAT_00d6236f = '\x04';
    puVar4 = &DAT_00d62358;
  }
  *(undefined4 *)(puVar4 + 2) = 0;
  uVar1 = _DAT_001f69a4;
  puVar4[1] = _UNK_001f69ac;
  *puVar4 = uVar1;
  uVar2 = _UNK_001f69c0;
  uVar1 = _DAT_001f69b8;
  if (DAT_00d62387 < '\0') {
    DAT_00d62378 = 4;
    puVar4 = DAT_00d62370;
  }
  else {
    DAT_00d62387 = '\x04';
    puVar4 = &DAT_00d62370;
  }
  *(undefined4 *)(puVar4 + 2) = 0;
  puVar4[1] = uVar2;
  *puVar4 = uVar1;
  FUN_00548888(&DAT_00d62388,L"August",6);
  FUN_00548888(&DAT_00d623a0,L"September",9);
  FUN_00548888(&DAT_00d623b8,L"October",7);
  FUN_00548888(&DAT_00d623d0,L"November",8);
  FUN_00548888(&DAT_00d623e8,L"December",8);
  if (DAT_00d62417 < '\0') {
    DAT_00d62408 = 3;
    puVar4 = DAT_00d62400;
  }
  else {
    DAT_00d62417 = '\x03';
    puVar4 = &DAT_00d62400;
  }
  *puVar4 = 0x610000004a;
  puVar4[1] = 0x6e;
  if (DAT_00d6242f < '\0') {
    DAT_00d62420 = 3;
    puVar4 = DAT_00d62418;
  }
  else {
    DAT_00d6242f = '\x03';
    puVar4 = &DAT_00d62418;
  }
  *puVar4 = 0x6500000046;
  puVar4[1] = 0x62;
  if (DAT_00d62447 < '\0') {
    DAT_00d62438 = 3;
    puVar4 = DAT_00d62430;
  }
  else {
    DAT_00d62447 = '\x03';
    puVar4 = &DAT_00d62430;
  }
  *puVar4 = 0x610000004d;
  puVar4[1] = 0x72;
  if (DAT_00d6245f < '\0') {
    DAT_00d62450 = 3;
    puVar4 = DAT_00d62448;
  }
  else {
    DAT_00d6245f = '\x03';
    puVar4 = &DAT_00d62448;
  }
  *puVar4 = 0x7000000041;
  puVar4[1] = 0x72;
  if (DAT_00d62477 < '\0') {
    DAT_00d62468 = 3;
    puVar4 = DAT_00d62460;
  }
  else {
    DAT_00d62477 = '\x03';
    puVar4 = &DAT_00d62460;
  }
  *puVar4 = 0x610000004d;
  puVar4[1] = 0x79;
  if (DAT_00d6248f < '\0') {
    DAT_00d62480 = 3;
    puVar4 = DAT_00d62478;
  }
  else {
    DAT_00d6248f = '\x03';
    puVar4 = &DAT_00d62478;
  }
  *puVar4 = 0x750000004a;
  puVar4[1] = 0x6e;
  if (DAT_00d624a7 < '\0') {
    DAT_00d62498 = 3;
    puVar4 = DAT_00d62490;
  }
  else {
    DAT_00d624a7 = '\x03';
    puVar4 = &DAT_00d62490;
  }
  *puVar4 = 0x750000004a;
  puVar4[1] = 0x6c;
  if (DAT_00d624bf < '\0') {
    DAT_00d624b0 = 3;
    puVar4 = DAT_00d624a8;
  }
  else {
    DAT_00d624bf = '\x03';
    puVar4 = &DAT_00d624a8;
  }
  *puVar4 = 0x7500000041;
  puVar4[1] = 0x67;
  if (DAT_00d624d7 < '\0') {
    DAT_00d624c8 = 3;
    puVar4 = DAT_00d624c0;
  }
  else {
    DAT_00d624d7 = '\x03';
    puVar4 = &DAT_00d624c0;
  }
  *puVar4 = 0x6500000053;
  puVar4[1] = 0x70;
  if (DAT_00d624ef < '\0') {
    DAT_00d624e0 = 3;
    puVar4 = DAT_00d624d8;
  }
  else {
    DAT_00d624ef = '\x03';
    puVar4 = &DAT_00d624d8;
  }
  *puVar4 = 0x630000004f;
  puVar4[1] = 0x74;
  if (DAT_00d62507 < '\0') {
    DAT_00d624f8 = 3;
    puVar4 = DAT_00d624f0;
  }
  else {
    DAT_00d62507 = '\x03';
    puVar4 = &DAT_00d624f0;
  }
  *puVar4 = 0x6f0000004e;
  puVar4[1] = 0x76;
  if (DAT_00d6251f < '\0') {
    DAT_00d62510 = 3;
    puVar4 = DAT_00d62508;
  }
  else {
    DAT_00d6251f = '\x03';
    puVar4 = &DAT_00d62508;
  }
  *puVar4 = 0x6500000044;
  puVar4[1] = 99;
  return;
}


// ===== 0054453c  FUN_0054453c =====

undefined8 * FUN_0054453c(void)

{
  int iVar1;
  
  if (((DAT_00d61cd0 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d61cd0), iVar1 != 0)) {
                    /* try { // try from 0054457c to 0054457f has its CatchHandler @ 0054459c */
    FUN_005445b4();
    DAT_00d61cc8 = &DAT_00d62528;
    FUN_0054ff1c(&DAT_00d61cd0);
  }
  return DAT_00d61cc8;
}


// ===== 005445b4  FUN_005445b4 =====

void FUN_005445b4(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (((DAT_00d62558 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d62558), iVar1 != 0)) {
    __cxa_atexit(FUN_00545958,0,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d62558);
  }
  if (DAT_00d6253f < '\0') {
    DAT_00d62530 = 2;
    puVar2 = DAT_00d62528;
  }
  else {
    DAT_00d6253f = '\x02';
    puVar2 = &DAT_00d62528;
  }
  *(undefined1 *)((long)puVar2 + 2) = 0;
  *(undefined2 *)puVar2 = 0x4d41;
  if (DAT_00d62557 < '\0') {
    DAT_00d62548 = 2;
    puVar2 = DAT_00d62540;
  }
  else {
    DAT_00d62557 = '\x02';
    puVar2 = &DAT_00d62540;
  }
  *(undefined2 *)puVar2 = 0x4d50;
  *(undefined1 *)((long)puVar2 + 2) = 0;
  return;
}


// ===== 0054468c  FUN_0054468c =====

undefined8 * FUN_0054468c(void)

{
  int iVar1;
  
  if (((DAT_00d61ce0 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d61ce0), iVar1 != 0)) {
                    /* try { // try from 005446cc to 005446cf has its CatchHandler @ 005446ec */
    FUN_00544704();
    DAT_00d61cd8 = &DAT_00d62560;
    FUN_0054ff1c(&DAT_00d61ce0);
  }
  return DAT_00d61cd8;
}


// ===== 00544704  FUN_00544704 =====

void FUN_00544704(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (((DAT_00d62590 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d62590), iVar1 != 0)) {
    __cxa_atexit(FUN_0054599c,0,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d62590);
  }
  if (DAT_00d62577 < '\0') {
    DAT_00d62568 = 2;
    puVar2 = DAT_00d62560;
  }
  else {
    DAT_00d62577 = '\x02';
    puVar2 = &DAT_00d62560;
  }
  *(undefined4 *)(puVar2 + 1) = 0;
  *puVar2 = 0x4d00000041;
  if (DAT_00d6258f < '\0') {
    DAT_00d62580 = 2;
    puVar2 = DAT_00d62578;
  }
  else {
    DAT_00d6258f = '\x02';
    puVar2 = &DAT_00d62578;
  }
  *puVar2 = 0x4d00000050;
  *(undefined4 *)(puVar2 + 1) = 0;
  return;
}


// ===== 005447e0  FUN_005447e0 =====

undefined * FUN_005447e0(void)

{
  int iVar1;
  
  if (((DAT_00d61d00 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d61d00), iVar1 != 0)) {
                    /* try { // try from 00544820 to 00544833 has its CatchHandler @ 00544860 */
    FUN_004a3cf4(&DAT_00d61ce8,"%m/%d/%y");
    __cxa_atexit(PTR_FUN_00d51c00,&DAT_00d61ce8,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d61d00);
  }
  return &DAT_00d61ce8;
}


// ===== 00544878  FUN_00544878 =====

undefined * FUN_00544878(void)

{
  int iVar1;
  
  if (((DAT_00d61d20 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d61d20), iVar1 != 0)) {
                    /* try { // try from 005448b8 to 005448cb has its CatchHandler @ 005448f8 */
    FUN_00542f78(&DAT_00d61d08,&DAT_001f6790);
    __cxa_atexit(PTR_FUN_00d51c50,&DAT_00d61d08,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d61d20);
  }
  return &DAT_00d61d08;
}


// ===== 00544910  FUN_00544910 =====

undefined * FUN_00544910(void)

{
  int iVar1;
  
  if (((DAT_00d61d40 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d61d40), iVar1 != 0)) {
                    /* try { // try from 00544950 to 00544963 has its CatchHandler @ 00544990 */
    FUN_004a3cf4(&DAT_00d61d28,"%H:%M:%S");
    __cxa_atexit(PTR_FUN_00d51c00,&DAT_00d61d28,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d61d40);
  }
  return &DAT_00d61d28;
}


// ===== 005449a8  FUN_005449a8 =====

undefined * FUN_005449a8(void)

{
  int iVar1;
  
  if (((DAT_00d61d60 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d61d60), iVar1 != 0)) {
                    /* try { // try from 005449e8 to 005449fb has its CatchHandler @ 00544a28 */
    FUN_00542f78(&DAT_00d61d48,&DAT_001f6700);
    __cxa_atexit(PTR_FUN_00d51c50,&DAT_00d61d48,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d61d60);
  }
  return &DAT_00d61d48;
}


// ===== 00544a40  FUN_00544a40 =====

undefined * FUN_00544a40(void)

{
  int iVar1;
  
  if (((DAT_00d61d80 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d61d80), iVar1 != 0)) {
                    /* try { // try from 00544a80 to 00544a93 has its CatchHandler @ 00544ac0 */
    FUN_004a3cf4(&DAT_00d61d68,"%a %b %d %H:%M:%S %Y");
    __cxa_atexit(PTR_FUN_00d51c00,&DAT_00d61d68,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d61d80);
  }
  return &DAT_00d61d68;
}


// ===== 00544ad8  FUN_00544ad8 =====

undefined * FUN_00544ad8(void)

{
  int iVar1;
  
  if (((DAT_00d61da0 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d61da0), iVar1 != 0)) {
                    /* try { // try from 00544b18 to 00544b2b has its CatchHandler @ 00544b58 */
    FUN_00542f78(&DAT_00d61d88,L"%a %b %d %H:%M:%S %Y");
    __cxa_atexit(PTR_FUN_00d51c50,&DAT_00d61d88,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d61da0);
  }
  return &DAT_00d61d88;
}


// ===== 00544b70  FUN_00544b70 =====

undefined * FUN_00544b70(void)

{
  int iVar1;
  
  if (((DAT_00d61dc0 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d61dc0), iVar1 != 0)) {
                    /* try { // try from 00544bb0 to 00544bc3 has its CatchHandler @ 00544bf0 */
    FUN_004a3cf4(&DAT_00d61da8,"%I:%M:%S %p");
    __cxa_atexit(PTR_FUN_00d51c00,&DAT_00d61da8,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d61dc0);
  }
  return &DAT_00d61da8;
}


// ===== 00544c08  FUN_00544c08 =====

undefined * FUN_00544c08(void)

{
  int iVar1;
  
  if (((DAT_00d61de0 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d61de0), iVar1 != 0)) {
                    /* try { // try from 00544c48 to 00544c5b has its CatchHandler @ 00544c88 */
    FUN_00542f78(&DAT_00d61dc8,&DAT_001f6828);
    __cxa_atexit(PTR_FUN_00d51c50,&DAT_00d61dc8,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d61de0);
  }
  return &DAT_00d61dc8;
}


// ===== 00544ca0  FUN_00544ca0 =====

void FUN_00544ca0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d20588;
                    /* try { // try from 00544cc0 to 00544cc3 has its CatchHandler @ 00544cf4 */
  freelocale((__locale_t)param_1[4]);
  *param_1 = &PTR_FUN_00d20520;
  if (((void *)param_1[2] != (void *)0x0) && (*(char *)(param_1 + 3) != '\0')) {
    operator_delete__((void *)param_1[2]);
  }
  FUN_005466c0(param_1);
  return;
}


// ===== 00544cf8  FUN_00544cf8 =====

void FUN_00544cf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d205f0;
                    /* try { // try from 00544d18 to 00544d1b has its CatchHandler @ 00544d2c */
  freelocale((__locale_t)param_1[2]);
  FUN_005466c0(param_1);
  return;
}


// ===== 00544d30  FUN_00544d30 =====

void FUN_00544d30(undefined8 *param_1)

{
  int iVar1;
  __locale_t p_Var2;
  
  p_Var2 = (__locale_t)*param_1;
  if (((DAT_00d61ba8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d61ba8), iVar1 != 0)) {
                    /* try { // try from 00544d90 to 00544da3 has its CatchHandler @ 00544db8 */
    DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_0054ff1c(&DAT_00d61ba8);
  }
  if (p_Var2 != DAT_00d61ba0) {
                    /* try { // try from 00544d6c to 00544d6f has its CatchHandler @ 00544dd0 */
    freelocale((__locale_t)*param_1);
  }
  return;
}


// ===== 00544dd4  FUN_00544dd4 =====

void FUN_00544dd4(undefined8 *param_1)

{
  int iVar1;
  __locale_t p_Var2;
  
  p_Var2 = (__locale_t)param_1[2];
  *param_1 = &PTR_FUN_00d20678;
  if (((DAT_00d61ba8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d61ba8), iVar1 != 0)) {
                    /* try { // try from 00544e44 to 00544e57 has its CatchHandler @ 00544e6c */
    DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_0054ff1c(&DAT_00d61ba8);
  }
  if (p_Var2 != DAT_00d61ba0) {
                    /* try { // try from 00544e1c to 00544e1f has its CatchHandler @ 00544e84 */
    freelocale((__locale_t)param_1[2]);
  }
  FUN_005466c0(param_1);
  return;
}


// ===== 00544e88  FUN_00544e88 =====

void FUN_00544e88(void *param_1)

{
  FUN_00544dd4();
  operator_delete(param_1);
  return;
}


// ===== 00544eac  thunk_FUN_005466c0 =====

void thunk_FUN_005466c0(void)

{
  return;
}


// ===== 00544eb0  FUN_00544eb0 =====

void FUN_00544eb0(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 00544ed4  FUN_00544ed4 =====

void FUN_00544ed4(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 00544ef8  FUN_00544ef8 =====

void FUN_00544ef8(void *param_1)

{
  FUN_00544dd4();
  operator_delete(param_1);
  return;
}


// ===== 00544f1c  FUN_00544f1c =====

void FUN_00544f1c(void *param_1)

{
  FUN_00544dd4();
  operator_delete(param_1);
  return;
}


// ===== 00544f40  FUN_00544f40 =====

void FUN_00544f40(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 00544f64  FUN_00544f64 =====

void FUN_00544f64(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 00544f88  FUN_00544f88 =====

void FUN_00544f88(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 00544fac  FUN_00544fac =====

void FUN_00544fac(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 00544fd0  FUN_00544fd0 =====

void FUN_00544fd0(void *param_1)

{
  FUN_00544dd4();
  operator_delete(param_1);
  return;
}


// ===== 00544ff4  FUN_00544ff4 =====

void FUN_00544ff4(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 00545018  FUN_00545018 =====

void FUN_00545018(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 0054503c  FUN_0054503c =====

void FUN_0054503c(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 00545060  FUN_00545060 =====

void FUN_00545060(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 00545084  FUN_00545084 =====

void FUN_00545084(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 005450a8  FUN_005450a8 =====

void FUN_005450a8(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 005450cc  thunk_FUN_005466c0 =====

void thunk_FUN_005466c0(void)

{
  return;
}


// ===== 005450d0  FUN_005450d0 =====

void FUN_005450d0(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 005450f4  thunk_FUN_005466c0 =====

void thunk_FUN_005466c0(void)

{
  return;
}


// ===== 005450f8  FUN_005450f8 =====

void FUN_005450f8(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 0054511c  FUN_0054511c =====

void FUN_0054511c(long param_1)

{
  FUN_00544d30(param_1 + 0x10);
  FUN_005466c0(param_1);
  return;
}


// ===== 00545144  FUN_00545144 =====

void FUN_00545144(void *param_1)

{
  FUN_00544d30((long)param_1 + 0x10);
  FUN_005466c0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00545174  FUN_00545174 =====

void FUN_00545174(long param_1)

{
  FUN_00544d30(param_1 + 0x10);
  FUN_005466c0(param_1);
  return;
}


// ===== 0054519c  FUN_0054519c =====

void FUN_0054519c(void *param_1)

{
  FUN_00544d30((long)param_1 + 0x10);
  FUN_005466c0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 005451cc  FUN_005451cc =====

void FUN_005451cc(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 005451f0  FUN_005451f0 =====

void FUN_005451f0(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 00545214  FUN_00545214 =====

void FUN_00545214(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 00545238  FUN_00545238 =====

void FUN_00545238(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 0054525c  FUN_0054525c =====

void FUN_0054525c(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 00545280  FUN_00545280 =====

void FUN_00545280(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 005452a4  FUN_005452a4 =====

void FUN_005452a4(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 005452c8  FUN_005452c8 =====

void FUN_005452c8(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 005452ec  FUN_005452ec =====

void FUN_005452ec(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 00545310  FUN_00545310 =====

void FUN_00545310(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 00545334  FUN_00545334 =====

void FUN_00545334(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("basic_string");
}


// ===== 00545348  FUN_00545348 =====

void FUN_00545348(undefined8 *param_1)

{
  if ((__locale_t)*param_1 != (__locale_t)0x0) {
                    /* try { // try from 00545358 to 0054535b has its CatchHandler @ 00545364 */
    uselocale((__locale_t)*param_1);
  }
  return;
}


// ===== 00545368  FUN_00545368 =====

void FUN_00545368(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("vector");
}


// ===== 0054537c  FUN_0054537c =====

void FUN_0054537c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  size_t __n;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  void *__dest;
  long lVar11;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  puVar7 = (undefined8 *)param_1[1];
  if ((ulong)(param_1[2] - (long)puVar7 >> 3) < param_2) {
    lVar11 = (long)puVar7 - *param_1 >> 3;
    uVar1 = lVar11 + param_2;
    if (uVar1 >> 0x3d != 0) {
      if (*(long *)(lVar3 + 0x28) != lVar6) goto LAB_005455b8;
      FUN_00545368(param_1);
LAB_00545570:
      if (*(long *)(lVar3 + 0x28) == lVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      goto LAB_005455b8;
    }
    uVar9 = param_1[2] - *param_1;
    uVar10 = uVar9 >> 2;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar9) {
      uVar10 = 0x1fffffffffffffff;
    }
    if (uVar10 == 0) {
      plVar4 = (long *)0x0;
    }
    else if ((uVar10 < 0x1f) && ((char)param_1[0x22] == '\0')) {
      *(undefined1 *)(param_1 + 0x22) = 1;
      plVar4 = param_1 + 4;
    }
    else {
      if (uVar10 >> 0x3d != 0) goto LAB_00545570;
      plVar4 = (long *)operator_new(uVar10 << 3);
    }
    plVar2 = plVar4 + lVar11;
    lVar11 = param_2 * 8;
    plVar5 = plVar2;
    do {
      if (plVar5 == (long *)0x0) {
        if (*(long *)(lVar3 + 0x28) == lVar6) {
                    /* try { // try from 005454f8 to 0054551f has its CatchHandler @ 00545590 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        goto LAB_005455b8;
      }
      lVar11 = lVar11 + -8;
      *plVar5 = 0;
      plVar5 = plVar5 + 1;
    } while (lVar11 != 0);
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)plVar2 - __n);
    memmove(__dest,(void *)*param_1,__n);
    plVar5 = (long *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(plVar2 + param_2);
    param_1[2] = (long)(plVar4 + uVar10);
    if (plVar5 != (long *)0x0) {
      if (plVar5 == param_1 + 4) {
        *(undefined1 *)(param_1 + 0x22) = 0;
      }
      else {
        operator_delete(plVar5);
      }
    }
  }
  else {
    puVar8 = puVar7;
    if (param_2 != 0) {
      puVar8 = puVar7 + param_2;
      lVar11 = param_2 << 3;
      do {
        if (puVar7 == (undefined8 *)0x0) {
          if (*(long *)(lVar3 + 0x28) == lVar6) {
                    /* try { // try from 00545530 to 00545557 has its CatchHandler @ 00545584 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                       ,0x23,"__location != nullptr","null pointer given to construct_at");
          }
          goto LAB_005455b8;
        }
        lVar11 = lVar11 + -8;
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      } while (lVar11 != 0);
    }
    param_1[1] = (long)puVar8;
  }
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    return;
  }
LAB_005455b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005455bc  FUN_005455bc =====

void FUN_005455bc(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  pvVar2 = (void *)*param_1;
  if (pvVar2 != (void *)0x0) {
    if (pvVar2 != (void *)param_1[4]) {
      operator_delete(pvVar2);
      return;
    }
    *(undefined1 *)((long)pvVar2 + 0xf0) = 0;
  }
  return;
}


// ===== 00545600  FUN_00545600 =====

void FUN_00545600(void)

{
  if (DAT_00d61f37 < '\0') {
    operator_delete(DAT_00d61f20);
  }
  if (DAT_00d61f1f < '\0') {
    operator_delete(DAT_00d61f08);
  }
  if (DAT_00d61f07 < '\0') {
    operator_delete(DAT_00d61ef0);
  }
  if (DAT_00d61eef < '\0') {
    operator_delete(DAT_00d61ed8);
  }
  if (DAT_00d61ed7 < '\0') {
    operator_delete(DAT_00d61ec0);
  }
  if (DAT_00d61ebf < '\0') {
    operator_delete(DAT_00d61ea8);
  }
  if (DAT_00d61ea7 < '\0') {
    operator_delete(DAT_00d61e90);
  }
  if (DAT_00d61e8f < '\0') {
    operator_delete(DAT_00d61e78);
  }
  if (DAT_00d61e77 < '\0') {
    operator_delete(DAT_00d61e60);
  }
  if (DAT_00d61e5f < '\0') {
    operator_delete(DAT_00d61e48);
  }
  if (DAT_00d61e47 < '\0') {
    operator_delete(DAT_00d61e30);
  }
  if (DAT_00d61e2f < '\0') {
    operator_delete(DAT_00d61e18);
  }
  if (DAT_00d61e17 < '\0') {
    operator_delete(DAT_00d61e00);
  }
  if (-1 < DAT_00d61dff) {
    return;
  }
  operator_delete(DAT_00d61de8);
  return;
}


// ===== 00545764  FUN_00545764 =====

void FUN_00545764(void)

{
  if (DAT_00d6208f < '\0') {
    operator_delete(DAT_00d62078);
  }
  if (DAT_00d62077 < '\0') {
    operator_delete(DAT_00d62060);
  }
  if (DAT_00d6205f < '\0') {
    operator_delete(DAT_00d62048);
  }
  if (DAT_00d62047 < '\0') {
    operator_delete(DAT_00d62030);
  }
  if (DAT_00d6202f < '\0') {
    operator_delete(DAT_00d62018);
  }
  if (DAT_00d62017 < '\0') {
    operator_delete(DAT_00d62000);
  }
  if (DAT_00d61fff < '\0') {
    operator_delete(DAT_00d61fe8);
  }
  if (DAT_00d61fe7 < '\0') {
    operator_delete(DAT_00d61fd0);
  }
  if (DAT_00d61fcf < '\0') {
    operator_delete(DAT_00d61fb8);
  }
  if (DAT_00d61fb7 < '\0') {
    operator_delete(DAT_00d61fa0);
  }
  if (DAT_00d61f9f < '\0') {
    operator_delete(DAT_00d61f88);
  }
  if (DAT_00d61f87 < '\0') {
    operator_delete(DAT_00d61f70);
  }
  if (DAT_00d61f6f < '\0') {
    operator_delete(DAT_00d61f58);
  }
  if (-1 < DAT_00d61f57) {
    return;
  }
  operator_delete(DAT_00d61f40);
  return;
}


// ===== 005458c8  FUN_005458c8 =====

/* WARNING: Removing unreachable block (ram,0x005458f8) */

void FUN_005458c8(void)

{
  long lVar1;
  
  lVar1 = 0x240;
  do {
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0);
  return;
}


// ===== 00545910  FUN_00545910 =====

/* WARNING: Removing unreachable block (ram,0x00545940) */

void FUN_00545910(void)

{
  long lVar1;
  
  lVar1 = 0x240;
  do {
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0);
  return;
}


// ===== 00545958  FUN_00545958 =====

void FUN_00545958(void)

{
  if (DAT_00d62557 < '\0') {
    operator_delete(DAT_00d62540);
  }
  if (-1 < DAT_00d6253f) {
    return;
  }
  operator_delete(DAT_00d62528);
  return;
}


// ===== 0054599c  FUN_0054599c =====

void FUN_0054599c(void)

{
  if (DAT_00d6258f < '\0') {
    operator_delete(DAT_00d62578);
  }
  if (-1 < DAT_00d62577) {
    return;
  }
  operator_delete(DAT_00d62560);
  return;
}


// ===== 005459e0  FUN_005459e0 =====

void FUN_005459e0(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  
  plVar1 = *(long **)*param_1;
  UNRECOVERED_JUMPTABLE = (code *)plVar1[1];
  if ((plVar1[2] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*plVar1 + (plVar1[2] >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x00545a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ===== 00545a04  FUN_00545a04 =====

void FUN_00545a04(char *param_1,char *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1 == param_2) {
LAB_00545abc:
    lVar6 = 0;
  }
  else {
    piVar4 = (int *)__errno();
    iVar1 = *piVar4;
    *piVar4 = 0;
    if (((DAT_00d61ba8 & 1) == 0) && (iVar3 = FUN_0054fdd4(&DAT_00d61ba8), iVar3 != 0)) {
                    /* try { // try from 00545b04 to 00545b17 has its CatchHandler @ 00545b2c */
      DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_0054ff1c(&DAT_00d61ba8);
    }
    lVar5 = strtoll_l(param_1,&local_60,param_4,DAT_00d61ba0);
    if (*piVar4 == 0) {
      *piVar4 = iVar1;
      if (local_60 == param_2) goto LAB_00545ac8;
      goto LAB_00545abc;
    }
    if (local_60 != param_2) goto LAB_00545abc;
    if (*piVar4 != 0x22) goto LAB_00545ac8;
    lVar6 = 0x7fffffffffffffff;
    if (lVar5 < 1) {
      lVar6 = -0x8000000000000000;
    }
  }
  *param_3 = 4;
  lVar5 = lVar6;
LAB_00545ac8:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar5);
  }
  return;
}


// ===== 00545b58  FUN_00545b58 =====

void FUN_00545b58(char *param_1,char *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1 == param_2) {
LAB_00545c10:
    lVar6 = 0;
  }
  else {
    piVar4 = (int *)__errno();
    iVar1 = *piVar4;
    *piVar4 = 0;
    if (((DAT_00d61ba8 & 1) == 0) && (iVar3 = FUN_0054fdd4(&DAT_00d61ba8), iVar3 != 0)) {
                    /* try { // try from 00545c58 to 00545c6b has its CatchHandler @ 00545c80 */
      DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_0054ff1c(&DAT_00d61ba8);
    }
    lVar5 = strtoll_l(param_1,&local_60,param_4,DAT_00d61ba0);
    if (*piVar4 == 0) {
      *piVar4 = iVar1;
      if (local_60 == param_2) goto LAB_00545c1c;
      goto LAB_00545c10;
    }
    if (local_60 != param_2) goto LAB_00545c10;
    if (*piVar4 != 0x22) goto LAB_00545c1c;
    lVar6 = 0x7fffffffffffffff;
    if (lVar5 < 1) {
      lVar6 = -0x8000000000000000;
    }
  }
  *param_3 = 4;
  lVar5 = lVar6;
LAB_00545c1c:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar5);
  }
  return;
}


// ===== 00545cac  FUN_00545cac =====

void FUN_00545cac(char *param_1,char *param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  char *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((param_1 == param_2) ||
     ((cVar1 = *param_1, cVar1 == '-' && (param_1 = param_1 + 1, param_1 == param_2)))) {
LAB_00545d80:
    iVar3 = 0;
  }
  else {
    piVar5 = (int *)__errno();
    iVar3 = *piVar5;
    *piVar5 = 0;
    if (((DAT_00d61ba8 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00d61ba8), iVar4 != 0)) {
                    /* try { // try from 00545de0 to 00545df3 has its CatchHandler @ 00545e08 */
      DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_0054ff1c(&DAT_00d61ba8);
    }
    uVar6 = strtoull_l(param_1,&local_70,param_4,DAT_00d61ba0);
    if (*piVar5 == 0) {
      *piVar5 = iVar3;
      if (local_70 != param_2) goto LAB_00545d80;
      if (uVar6 < 0x10000) goto LAB_00545d64;
    }
    else {
      if (local_70 != param_2) goto LAB_00545d80;
      if ((*piVar5 != 0x22) && (uVar6 >> 0x10 == 0)) {
LAB_00545d64:
        iVar3 = -(int)uVar6;
        if (cVar1 != '-') {
          iVar3 = (int)uVar6;
        }
        goto LAB_00545d8c;
      }
    }
    iVar3 = 0xffff;
  }
  *param_3 = 4;
LAB_00545d8c:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}


// ===== 00545e34  FUN_00545e34 =====

void FUN_00545e34(char *param_1,char *param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  char *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((param_1 == param_2) ||
     ((cVar1 = *param_1, cVar1 == '-' && (param_1 = param_1 + 1, param_1 == param_2)))) {
LAB_00545ef8:
    iVar3 = 0;
  }
  else {
    piVar5 = (int *)__errno();
    iVar3 = *piVar5;
    *piVar5 = 0;
    if (((DAT_00d61ba8 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00d61ba8), iVar4 != 0)) {
                    /* try { // try from 00545f64 to 00545f77 has its CatchHandler @ 00545f8c */
      DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_0054ff1c(&DAT_00d61ba8);
    }
    uVar6 = strtoull_l(param_1,&local_70,param_4,DAT_00d61ba0);
    if (*piVar5 == 0) {
      *piVar5 = iVar3;
      if (local_70 != param_2) goto LAB_00545ef8;
LAB_00545f34:
      if (uVar6 >> 0x20 == 0) {
        iVar3 = -(int)uVar6;
        if (cVar1 != '-') {
          iVar3 = (int)uVar6;
        }
        goto LAB_00545f04;
      }
    }
    else {
      if (local_70 != param_2) goto LAB_00545ef8;
      if (*piVar5 != 0x22) goto LAB_00545f34;
    }
    iVar3 = -1;
  }
  *param_3 = 4;
LAB_00545f04:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}


// ===== 00545fb8  FUN_00545fb8 =====

void FUN_00545fb8(char *param_1,char *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((param_1 == param_2) ||
     ((cVar2 = *param_1, cVar2 == '-' && (param_1 = param_1 + 1, param_1 == param_2)))) {
LAB_00546084:
    uVar7 = 0;
  }
  else {
    piVar5 = (int *)__errno();
    iVar1 = *piVar5;
    *piVar5 = 0;
    if (((DAT_00d61ba8 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00d61ba8), iVar4 != 0)) {
                    /* try { // try from 005460dc to 005460ef has its CatchHandler @ 00546104 */
      DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_0054ff1c(&DAT_00d61ba8);
    }
    uVar6 = strtoull_l(param_1,&local_70,param_4,DAT_00d61ba0);
    if (*piVar5 == 0) {
      *piVar5 = iVar1;
      if (local_70 == param_2) {
LAB_005460c0:
        uVar7 = -uVar6;
        if (cVar2 != '-') {
          uVar7 = uVar6;
        }
        goto LAB_00546090;
      }
      goto LAB_00546084;
    }
    if (local_70 != param_2) goto LAB_00546084;
    if (*piVar5 != 0x22) goto LAB_005460c0;
    uVar7 = 0xffffffffffffffff;
  }
  *param_3 = 4;
LAB_00546090:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


// ===== 00546130  FUN_00546130 =====

void FUN_00546130(char *param_1,char *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((param_1 == param_2) ||
     ((cVar2 = *param_1, cVar2 == '-' && (param_1 = param_1 + 1, param_1 == param_2)))) {
LAB_005461fc:
    uVar7 = 0;
  }
  else {
    piVar5 = (int *)__errno();
    iVar1 = *piVar5;
    *piVar5 = 0;
    if (((DAT_00d61ba8 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00d61ba8), iVar4 != 0)) {
                    /* try { // try from 00546254 to 00546267 has its CatchHandler @ 0054627c */
      DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_0054ff1c(&DAT_00d61ba8);
    }
    uVar6 = strtoull_l(param_1,&local_70,param_4,DAT_00d61ba0);
    if (*piVar5 == 0) {
      *piVar5 = iVar1;
      if (local_70 == param_2) {
LAB_00546238:
        uVar7 = -uVar6;
        if (cVar2 != '-') {
          uVar7 = uVar6;
        }
        goto LAB_00546208;
      }
      goto LAB_005461fc;
    }
    if (local_70 != param_2) goto LAB_005461fc;
    if (*piVar5 != 0x22) goto LAB_00546238;
    uVar7 = 0xffffffffffffffff;
  }
  *param_3 = 4;
LAB_00546208:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


// ===== 005462a8  FUN_005462a8 =====

void FUN_005462a8(char *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_1 == param_2) {
    fVar3 = 0.0;
  }
  else {
    piVar5 = (int *)__errno();
    iVar1 = *piVar5;
    *piVar5 = 0;
    if (((DAT_00d61ba8 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00d61ba8), iVar4 != 0)) {
                    /* try { // try from 00546398 to 005463ab has its CatchHandler @ 005463c4 */
      DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_0054ff1c(&DAT_00d61ba8);
    }
    fVar6 = strtof(param_1,&local_50);
    if (*piVar5 == 0) {
      *piVar5 = iVar1;
      fVar3 = 0.0;
      if (local_50 == param_2) goto LAB_00546360;
    }
    else {
      fVar3 = 0.0;
      if ((local_50 == param_2) && (fVar3 = fVar6, *piVar5 != 0x22)) goto LAB_00546360;
    }
  }
  fVar6 = fVar3;
  *param_3 = 4;
LAB_00546360:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(fVar6);
  }
  return;
}


// ===== 005463f0  FUN_005463f0 =====

void FUN_005463f0(char *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  double dVar5;
  double dVar6;
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_1 == param_2) {
    dVar6 = 0.0;
  }
  else {
    piVar4 = (int *)__errno();
    iVar1 = *piVar4;
    *piVar4 = 0;
    if (((DAT_00d61ba8 & 1) == 0) && (iVar3 = FUN_0054fdd4(&DAT_00d61ba8), iVar3 != 0)) {
                    /* try { // try from 005464e0 to 005464f3 has its CatchHandler @ 0054650c */
      DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_0054ff1c(&DAT_00d61ba8);
    }
    dVar5 = strtod(param_1,&local_50);
    if (*piVar4 == 0) {
      dVar6 = 0.0;
      *piVar4 = iVar1;
      if (local_50 == param_2) goto LAB_005464a8;
    }
    else {
      dVar6 = 0.0;
      if ((local_50 == param_2) && (dVar6 = dVar5, *piVar4 != 0x22)) goto LAB_005464a8;
    }
  }
  *param_3 = 4;
  dVar5 = dVar6;
LAB_005464a8:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(dVar5);
  }
  return;
}


// ===== 00546538  FUN_00546538 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00546538(char *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  double dVar5;
  double dVar6;
  char *local_60;
  long local_58;
  
  dVar5 = _DAT_001f1d10;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1 == param_2) {
    *param_3 = 4;
  }
  else {
    piVar4 = (int *)__errno();
    iVar1 = *piVar4;
    *piVar4 = 0;
    if (((DAT_00d61ba8 & 1) == 0) && (iVar3 = FUN_0054fdd4(&DAT_00d61ba8), iVar3 != 0)) {
                    /* try { // try from 00546638 to 0054664b has its CatchHandler @ 00546660 */
      DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_0054ff1c(&DAT_00d61ba8);
    }
    dVar5 = strtold_l(param_1,&local_60,DAT_00d61ba0);
    if (*piVar4 == 0) {
      *piVar4 = iVar1;
      dVar6 = _DAT_001f1d10;
      if (local_60 == param_2) goto LAB_005465fc;
    }
    else {
      dVar6 = _DAT_001f1d10;
      if ((local_60 == param_2) && (dVar6 = dVar5, *piVar4 != 0x22)) goto LAB_005465fc;
    }
    *param_3 = 4;
    dVar5 = dVar6;
  }
LAB_005465fc:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(dVar5);
  }
  return;
}


// ===== 0054668c  thunk_FUN_0055234c =====

void thunk_FUN_0055234c(void)

{
  return;
}


// ===== 00546690  FUN_00546690 =====

void FUN_00546690(void *param_1)

{
  FUN_0055234c();
  operator_delete(param_1);
  return;
}


// ===== 005466b4  FUN_005466b4 =====

char * FUN_005466b4(void)

{
  return "bad_weak_ptr";
}


// ===== 005466c0  FUN_005466c0 =====

void FUN_005466c0(void)

{
  return;
}


// ===== 005466c4  FUN_005466c4 =====

void FUN_005466c4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x5466c8);
  (*pcVar1)();
}


// ===== 005466c8  FUN_005466c8 =====

void FUN_005466c8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x5466cc);
  (*pcVar1)();
}


// ===== 005466cc  FUN_005466cc =====

void FUN_005466cc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 2;
  if (*plVar1 != 0) {
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
  }
                    /* WARNING: Could not recover jumptable at 0x005466f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}


// ===== 005466fc  FUN_005466fc =====

long FUN_005466fc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  plVar1 = (long *)(param_1 + 8);
  lVar4 = *plVar1;
  do {
    if (lVar4 == -1) {
      return 0;
    }
    lVar5 = *plVar1;
    if (lVar5 == lVar4) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 != '\0') goto LAB_00546730;
      bVar3 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00546730:
      bVar3 = false;
    }
    lVar4 = lVar5;
    if (bVar3) {
      return param_1;
    }
  } while( true );
}


// ===== 0054674c  FUN_0054674c =====

undefined8 FUN_0054674c(void)

{
  return 0;
}


// ===== 00546754  FUN_00546754 =====

ulong FUN_00546754(long param_1,ulong param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *param_4;
  if (uVar3 < param_2) {
    return 0;
  }
  uVar2 = (param_1 + *param_3) - 1 & -param_1;
  uVar4 = uVar2 - *param_3;
  uVar1 = 0;
  if (uVar4 <= uVar3 - param_2) {
    *param_3 = uVar2;
    *param_4 = uVar3 - uVar4;
    uVar1 = uVar2;
  }
  return uVar1;
}


// ===== 005467a4  FUN_005467a4 =====

void FUN_005467a4(pthread_mutex_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock(param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0054a0b0(iVar1,"mutex lock failed");
}


// ===== 005467c8  FUN_005467c8 =====

void FUN_005467c8(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    /* try { // try from 005467d0 to 00546807 has its CatchHandler @ 00546808 */
  iVar1 = pthread_mutex_unlock(param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/src/mutex.cpp",0x36,"ec == 0",
             "call to mutex::unlock failed");
}


// ===== 0054680c  FUN_0054680c =====

void FUN_0054680c(pthread_mutex_t *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int local_44;
  pthread_mutexattr_t apStack_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_44 = pthread_mutexattr_init(apStack_40);
  iVar2 = local_44;
  if (local_44 == 0) {
    local_44 = pthread_mutexattr_settype(apStack_40,1);
    if (local_44 == 0) {
      local_44 = pthread_mutex_init(param_1,apStack_40);
      iVar2 = pthread_mutexattr_destroy(apStack_40);
      if (local_44 == 0) {
        if (iVar2 == 0) {
          if (*(long *)(lVar1 + 0x28) == local_38) {
            return;
          }
          goto LAB_005468dc;
        }
        iVar3 = pthread_mutex_destroy(param_1);
        local_44 = iVar2;
        iVar2 = iVar3;
      }
    }
    else {
      iVar2 = pthread_mutexattr_destroy(apStack_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_0054a0b0(local_44,"recursive_mutex constructor failed");
  }
LAB_005468dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


// ===== 005468e0  FUN_005468e0 =====

void FUN_005468e0(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    /* try { // try from 005468e8 to 0054691f has its CatchHandler @ 00546920 */
  iVar1 = pthread_mutex_destroy(param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/src/mutex.cpp",0x46,"e == 0",
             "call to ~recursive_mutex() failed");
}


// ===== 00546924  FUN_00546924 =====

void FUN_00546924(pthread_mutex_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock(param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0054a0b0(iVar1,"recursive_mutex lock failed");
}


// ===== 00546948  FUN_00546948 =====

void FUN_00546948(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    /* try { // try from 00546950 to 00546987 has its CatchHandler @ 00546988 */
  iVar1 = pthread_mutex_unlock(param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/src/mutex.cpp",0x56,"e == 0",
             "call to recursive_mutex::unlock() failed");
}


// ===== 0054698c  FUN_0054698c =====

int FUN_0054698c(long *param_1,undefined8 param_2,code *param_3)

{
  int iVar1;
  long lVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00d62970);
  lVar2 = *param_1;
  while (lVar2 == 1) {
    pthread_cond_wait((pthread_cond_t *)&DAT_00d62998,(pthread_mutex_t *)&DAT_00d62970);
    lVar2 = *param_1;
  }
  if (*param_1 != 0) {
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00d62970);
    return iVar1;
  }
  *param_1 = 1;
                    /* try { // try from 00546a18 to 00546a57 has its CatchHandler @ 00546a6c */
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00d62970);
  (*param_3)(param_2);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00d62970);
  *param_1 = -1;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00d62970);
  iVar1 = pthread_cond_broadcast((pthread_cond_t *)&DAT_00d62998);
  return iVar1;
}


