// ===== 0072362c  FUN_0072362c =====

void FUN_0072362c(void)

{
  FUN_0072363c();
  return;
}


// ===== 0072363c  FUN_0072363c =====

undefined8
FUN_0072363c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
            undefined4 param_5,char *param_6)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined1 *__ptr;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  char cVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 *puVar12;
  undefined1 auStack_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c9 [57];
  char *local_90;
  char local_86 [30];
  undefined8 local_68;
  
  uVar2 = *(uint *)(param_4 + 8);
  local_68 = 0x25;
  if ((uVar2 >> 0xb & 1) == 0) {
    pcVar6 = (char *)((ulong)&local_68 | 1);
  }
  else {
    pcVar6 = (char *)((ulong)&local_68 | 2);
    local_68 = 0x2b25;
  }
  if ((uVar2 >> 10 & 1) != 0) {
    *pcVar6 = '#';
    pcVar6 = pcVar6 + 1;
  }
  uVar1 = uVar2 & 0x104;
  pcVar7 = pcVar6;
  if (uVar1 != 0x104) {
    pcVar7 = pcVar6 + 2;
    pcVar6[0] = '.';
    pcVar6[1] = '*';
  }
  cVar9 = *param_6;
  if (cVar9 != '\0') {
    pcVar6 = pcVar7;
    pcVar10 = param_6 + 1;
    do {
      pcVar7 = pcVar6 + 1;
      *pcVar6 = cVar9;
      cVar9 = *pcVar10;
      pcVar6 = pcVar7;
      pcVar10 = pcVar10 + 1;
    } while (cVar9 != '\0');
  }
  if (uVar1 == 0x100) {
    bVar3 = (uVar2 & 0x4000) == 0;
    cVar8 = 'E';
    cVar9 = 'e';
LAB_00723774:
    if (!bVar3) {
      cVar9 = cVar8;
    }
    *pcVar7 = cVar9;
    local_90 = local_86;
    if (((DAT_007b0958 & 1) == 0) && (iVar4 = FUN_00739c1c(&DAT_007b0958), iVar4 != 0)) {
                    /* try { // try from 00723968 to 0072397b has its CatchHandler @ 00723a50 */
      DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_00739d60(&DAT_007b0958);
    }
    iVar4 = FUN_00724168(param_1,local_86,0x1e,DAT_007b0950,&local_68,
                         *(undefined4 *)(param_4 + 0x10));
    if (0x1d < iVar4) {
      if (uVar1 != 0x104) {
        if (((DAT_007b0958 & 1) == 0) && (iVar4 = FUN_00739c1c(&DAT_007b0958), iVar4 != 0)) {
                    /* try { // try from 007239e4 to 007239f7 has its CatchHandler @ 00723a48 */
          DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          FUN_00739d60(&DAT_007b0958);
        }
        iVar4 = FUN_0072e5e8(param_1,&local_90,DAT_007b0950,&local_68,
                             *(undefined4 *)(param_4 + 0x10));
        goto LAB_00723818;
      }
      goto code_r0x007237c8;
    }
LAB_007237f0:
    pcVar6 = (char *)0x0;
  }
  else {
    if (uVar1 == 4) {
      bVar3 = (uVar2 & 0x4000) == 0;
      cVar8 = 'F';
      cVar9 = 'f';
      goto LAB_00723774;
    }
    if (uVar1 != 0x104) {
      bVar3 = (uVar2 & 0x4000) == 0;
      cVar8 = 'G';
      cVar9 = 'g';
      goto LAB_00723774;
    }
    cVar9 = 'a';
    if ((uVar2 & 0x4000) != 0) {
      cVar9 = 'A';
    }
    local_90 = local_86;
    *pcVar7 = cVar9;
    if (((DAT_007b0958 & 1) == 0) && (iVar4 = FUN_00739c1c(&DAT_007b0958), iVar4 != 0)) {
                    /* try { // try from 00723a1c to 00723a2f has its CatchHandler @ 00723a44 */
      DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_00739d60(&DAT_007b0958);
    }
    iVar4 = FUN_00724168(param_1,local_86,0x1e,DAT_007b0950,&local_68);
    if (iVar4 < 0x1e) goto LAB_007237f0;
code_r0x007237c8:
    if ((DAT_007b0958 & 1) == 0) goto code_r0x0072399c;
    while( true ) {
                    /* try { // try from 007237dc to 00723817 has its CatchHandler @ 00723ab8 */
      iVar4 = FUN_0072e5e8(param_1,&local_90,DAT_007b0950,&local_68);
LAB_00723818:
      pcVar6 = local_90;
      if (iVar4 != -1) break;
                    /* try { // try from 00723994 to 00723997 has its CatchHandler @ 00723ab8 */
      FUN_00712520();
code_r0x0072399c:
      iVar4 = FUN_00739c1c(&DAT_007b0958);
      if (iVar4 != 0) {
                    /* try { // try from 007239a8 to 007239bb has its CatchHandler @ 00723a4c */
        DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        FUN_00739d60(&DAT_007b0958);
      }
    }
  }
  pcVar10 = local_90;
  uVar2 = *(uint *)(param_4 + 8) & 0xb0;
  pcVar7 = local_90 + iVar4;
  pcVar11 = pcVar7;
  if ((uVar2 != 0x20) && (pcVar11 = local_90, uVar2 == 0x10)) {
    cVar9 = *local_90;
    if ((cVar9 == '-') || (cVar9 == '+')) {
      pcVar11 = local_90 + 1;
    }
    else if (((1 < iVar4) && (cVar9 == '0')) && ((byte)(local_90[1] | 0x20U) == 0x78)) {
      pcVar11 = local_90 + 2;
    }
  }
  if (local_90 != local_86) {
    __ptr = (undefined1 *)malloc((long)iVar4 << 1);
    puVar12 = __ptr;
    if (__ptr != (undefined1 *)0x0) goto LAB_007238c4;
                    /* try { // try from 007238b8 to 007238bb has its CatchHandler @ 00723a68 */
    FUN_00712520();
  }
  __ptr = (undefined1 *)0x0;
  puVar12 = auStack_c9;
LAB_007238c4:
                    /* try { // try from 007238c4 to 007238cf has its CatchHandler @ 00723a88 */
  FUN_00715df0(auStack_e8,param_4);
                    /* try { // try from 007238d0 to 007238ef has its CatchHandler @ 00723a78 */
  FUN_00725e2c(pcVar10,pcVar11,pcVar7,puVar12,&uStack_d8,&local_e0,auStack_e8);
  FUN_00732094(auStack_e8);
                    /* try { // try from 007238fc to 0072390f has its CatchHandler @ 00723a74 */
  uVar5 = FUN_00303fb0(param_3,puVar12,uStack_d8,local_e0,param_4,param_5);
  if (__ptr != (undefined1 *)0x0) {
    free(__ptr);
  }
  if (pcVar6 != (char *)0x0) {
    free(pcVar6);
  }
  return uVar5;
}


// ===== 00723abc  FUN_00723abc =====

void FUN_00723abc(void)

{
  FUN_00723acc();
  return;
}


// ===== 00723acc  FUN_00723acc =====

undefined8
FUN_00723acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
            undefined4 param_5,char *param_6)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined1 *__ptr;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  char cVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 *puVar12;
  undefined1 auStack_e0 [8];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c1 [57];
  char *local_88;
  char local_7e [30];
  undefined8 local_48;
  
  uVar2 = *(uint *)(param_4 + 8);
  local_48 = 0x25;
  if ((uVar2 >> 0xb & 1) == 0) {
    pcVar6 = (char *)((ulong)&local_48 | 1);
  }
  else {
    pcVar6 = (char *)((ulong)&local_48 | 2);
    local_48 = 0x2b25;
  }
  if ((uVar2 >> 10 & 1) != 0) {
    *pcVar6 = '#';
    pcVar6 = pcVar6 + 1;
  }
  uVar1 = uVar2 & 0x104;
  pcVar7 = pcVar6;
  if (uVar1 != 0x104) {
    pcVar7 = pcVar6 + 2;
    pcVar6[0] = '.';
    pcVar6[1] = '*';
  }
  cVar9 = *param_6;
  if (cVar9 != '\0') {
    pcVar6 = pcVar7;
    pcVar10 = param_6 + 1;
    do {
      pcVar7 = pcVar6 + 1;
      *pcVar6 = cVar9;
      cVar9 = *pcVar10;
      pcVar6 = pcVar7;
      pcVar10 = pcVar10 + 1;
    } while (cVar9 != '\0');
  }
  if (uVar1 == 0x100) {
    bVar3 = (uVar2 & 0x4000) == 0;
    cVar8 = 'E';
    cVar9 = 'e';
LAB_00723c00:
    if (!bVar3) {
      cVar9 = cVar8;
    }
    *pcVar7 = cVar9;
    local_88 = local_7e;
    if (((DAT_007b0958 & 1) == 0) && (iVar4 = FUN_00739c1c(&DAT_007b0958), iVar4 != 0)) {
                    /* try { // try from 00723df0 to 00723e03 has its CatchHandler @ 00723ed8 */
      DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_00739d60(&DAT_007b0958);
    }
    iVar4 = FUN_00724168(param_1,local_7e,0x1e,DAT_007b0950,&local_48,
                         *(undefined4 *)(param_4 + 0x10));
    if (0x1d < iVar4) {
      if (uVar1 != 0x104) {
        if (((DAT_007b0958 & 1) == 0) && (iVar4 = FUN_00739c1c(&DAT_007b0958), iVar4 != 0)) {
                    /* try { // try from 00723e6c to 00723e7f has its CatchHandler @ 00723ed0 */
          DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          FUN_00739d60(&DAT_007b0958);
        }
        iVar4 = FUN_0072e5e8(param_1,&local_88,DAT_007b0950,&local_48,
                             *(undefined4 *)(param_4 + 0x10));
        goto LAB_00723ca4;
      }
      goto code_r0x00723c54;
    }
LAB_00723c7c:
    pcVar6 = (char *)0x0;
  }
  else {
    if (uVar1 == 4) {
      bVar3 = (uVar2 & 0x4000) == 0;
      cVar8 = 'F';
      cVar9 = 'f';
      goto LAB_00723c00;
    }
    if (uVar1 != 0x104) {
      bVar3 = (uVar2 & 0x4000) == 0;
      cVar8 = 'G';
      cVar9 = 'g';
      goto LAB_00723c00;
    }
    cVar9 = 'a';
    if ((uVar2 & 0x4000) != 0) {
      cVar9 = 'A';
    }
    local_88 = local_7e;
    *pcVar7 = cVar9;
    if (((DAT_007b0958 & 1) == 0) && (iVar4 = FUN_00739c1c(&DAT_007b0958), iVar4 != 0)) {
                    /* try { // try from 00723ea4 to 00723eb7 has its CatchHandler @ 00723ecc */
      DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_00739d60(&DAT_007b0958);
    }
    iVar4 = FUN_00724168(param_1,local_7e,0x1e,DAT_007b0950,&local_48);
    if (iVar4 < 0x1e) goto LAB_00723c7c;
code_r0x00723c54:
    if ((DAT_007b0958 & 1) == 0) goto code_r0x00723e24;
    while( true ) {
                    /* try { // try from 00723c68 to 00723ca3 has its CatchHandler @ 00723f40 */
      iVar4 = FUN_0072e5e8(param_1,&local_88,DAT_007b0950,&local_48);
LAB_00723ca4:
      pcVar6 = local_88;
      if (iVar4 != -1) break;
                    /* try { // try from 00723e1c to 00723e1f has its CatchHandler @ 00723f40 */
      FUN_00712520();
code_r0x00723e24:
      iVar4 = FUN_00739c1c(&DAT_007b0958);
      if (iVar4 != 0) {
                    /* try { // try from 00723e30 to 00723e43 has its CatchHandler @ 00723ed4 */
        DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        FUN_00739d60(&DAT_007b0958);
      }
    }
  }
  pcVar10 = local_88;
  uVar2 = *(uint *)(param_4 + 8) & 0xb0;
  pcVar7 = local_88 + iVar4;
  pcVar11 = pcVar7;
  if ((uVar2 != 0x20) && (pcVar11 = local_88, uVar2 == 0x10)) {
    cVar9 = *local_88;
    if ((cVar9 == '-') || (cVar9 == '+')) {
      pcVar11 = local_88 + 1;
    }
    else if (((1 < iVar4) && (cVar9 == '0')) && ((byte)(local_88[1] | 0x20U) == 0x78)) {
      pcVar11 = local_88 + 2;
    }
  }
  if (local_88 != local_7e) {
    __ptr = (undefined1 *)malloc((long)iVar4 << 1);
    puVar12 = __ptr;
    if (__ptr != (undefined1 *)0x0) goto LAB_00723d50;
                    /* try { // try from 00723d44 to 00723d47 has its CatchHandler @ 00723ef0 */
    FUN_00712520();
  }
  __ptr = (undefined1 *)0x0;
  puVar12 = auStack_c1;
LAB_00723d50:
                    /* try { // try from 00723d50 to 00723d5b has its CatchHandler @ 00723f10 */
  FUN_00715df0(auStack_e0,param_4);
                    /* try { // try from 00723d5c to 00723d7b has its CatchHandler @ 00723f00 */
  FUN_00725e2c(pcVar10,pcVar11,pcVar7,puVar12,&uStack_d0,&local_d8,auStack_e0);
  FUN_00732094(auStack_e0);
                    /* try { // try from 00723d88 to 00723d9b has its CatchHandler @ 00723efc */
  uVar5 = FUN_00303fb0(param_3,puVar12,uStack_d0,local_d8,param_4,param_5);
  if (__ptr != (undefined1 *)0x0) {
    free(__ptr);
  }
  if (pcVar6 != (char *)0x0) {
    free(pcVar6);
  }
  return uVar5;
}


// ===== 00723f44  FUN_00723f44 =====

void FUN_00723f44(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined8 param_5)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  char *pcVar7;
  long local_b0;
  char acStack_a1 [37];
  char local_7c [20];
  undefined *local_68;
  undefined ***local_60;
  undefined **local_58;
  
  if (((DAT_007b0958 & 1) == 0) && (iVar5 = FUN_00739c1c(&DAT_007b0958), iVar5 != 0)) {
                    /* try { // try from 00724114 to 00724127 has its CatchHandler @ 0072413c */
    DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_00739d60(&DAT_007b0958);
  }
  iVar5 = FUN_00724168(local_7c,0x14,DAT_007b0950,&DAT_001c7073,param_5);
  uVar2 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar1 = local_7c + iVar5;
  pcVar7 = pcVar1;
  if (uVar2 == 0x20) goto LAB_00724020;
  if (uVar2 == 0x10) {
    if ((local_7c[0] == '-') || (local_7c[0] == '+')) {
      pcVar7 = (char *)((ulong)local_7c | 1);
      goto LAB_00724020;
    }
    if ((1 < iVar5) && ((local_7c[0] == '0' && ((byte)(local_7c[1] | 0x20U) == 0x78)))) {
      pcVar7 = (char *)((ulong)local_7c | 2);
      goto LAB_00724020;
    }
  }
  pcVar7 = local_7c;
LAB_00724020:
  FUN_00715df0(&local_b0,param_3);
  puVar4 = PTR_DAT_007a1108;
  local_68 = PTR_DAT_007a1108;
  if (*(long *)PTR_DAT_007a1108 != -1) {
    local_58 = &local_68;
    local_60 = &local_58;
                    /* try { // try from 00724054 to 0072406b has its CatchHandler @ 00724154 */
    FUN_00710f84(PTR_DAT_007a1108,&local_60,FUN_007374a0);
  }
  if (((long)*(int *)(puVar4 + 8) - 1U <
       (ulong)(*(long *)(local_b0 + 0x18) - *(long *)(local_b0 + 0x10) >> 3)) &&
     (plVar6 = *(long **)(*(long *)(local_b0 + 0x10) + ((long)*(int *)(puVar4 + 8) - 1U) * 8),
     plVar6 != (long *)0x0)) {
    FUN_00732094(&local_b0);
    (**(code **)(*plVar6 + 0x40))(plVar6,local_7c,pcVar1,acStack_a1);
    pcVar3 = acStack_a1 + iVar5;
    if (pcVar7 != pcVar1) {
      pcVar3 = pcVar7 + (long)(acStack_a1 + -(long)local_7c);
    }
    FUN_00303fb0(param_2,acStack_a1,pcVar3,acStack_a1 + iVar5,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00724100 to 00724103 has its CatchHandler @ 00724154 */
  FUN_007191ac();
}


// ===== 00724168  FUN_00724168 =====

int FUN_00724168(char *param_1,size_t param_2,__locale_t param_3,char *param_4,undefined8 param_5,
                undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  __locale_t __dataset;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined1 **ppuStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  local_a0 = param_5;
  uStack_98 = param_6;
  local_90 = param_7;
  uStack_88 = param_8;
  __dataset = uselocale(param_3);
  uStack_68 = 0xffffff80ffffffe0;
  local_80 = (undefined1 *)register0x00000008;
  ppuStack_78 = &local_80;
  puStack_70 = &local_a0;
  iVar1 = vsnprintf(param_1,param_2,param_4,&local_80);
  if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 007241fc to 00724203 has its CatchHandler @ 00724224 */
    uselocale(__dataset);
  }
  return iVar1;
}


// ===== 00724228  FUN_00724228 =====

long * FUN_00724228(long *param_1,long *param_2,long param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  undefined **local_60;
  ulong local_58;
  int *piStack_50;
  long local_48;
  undefined *local_40;
  undefined1 *local_38;
  
  if ((*(byte *)(param_3 + 8) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00724274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar7 = (long *)(**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,param_4,param_5 & 1);
    return plVar7;
  }
  FUN_00715df0(&local_48,param_3);
  puVar4 = PTR_DAT_007a38e8;
  local_40 = PTR_DAT_007a38e8;
  if (*(long *)PTR_DAT_007a38e8 != -1) {
    local_60 = &local_40;
                    /* try { // try from 007242b0 to 007242c7 has its CatchHandler @ 007243c8 */
    local_38 = (undefined1 *)&local_60;
    FUN_00710f84(PTR_DAT_007a38e8,&local_38,FUN_007374a0);
  }
  if (((long)*(int *)(puVar4 + 8) - 1U <
       (ulong)(*(long *)(local_48 + 0x18) - *(long *)(local_48 + 0x10) >> 3)) &&
     (plVar7 = *(long **)(*(long *)(local_48 + 0x10) + ((long)*(int *)(puVar4 + 8) - 1U) * 8),
     plVar7 != (long *)0x0)) {
    FUN_00732094(&local_48);
    lVar1 = 0x30;
    if ((param_5 & 1) == 0) {
      lVar1 = 0x38;
    }
    (**(code **)(*plVar7 + lVar1))(&local_60,plVar7);
    uVar9 = (ulong)local_60 & 0xff;
    bVar5 = ((ulong)local_60 & 1) != 0;
    uVar10 = (ulong)local_60 >> 1 & 0x7f;
    if (bVar5) {
      uVar10 = local_58;
    }
    piVar8 = piStack_50;
    if (uVar10 != 0) {
      uVar10 = local_58;
      plVar7 = param_2;
      piVar11 = (int *)((ulong)&local_60 | 4);
      if (bVar5) {
        piVar11 = piStack_50;
      }
      do {
        param_2 = plVar7;
        if (plVar7 != (long *)0x0) {
          piVar8 = (int *)plVar7[6];
          iVar6 = *piVar11;
          if (piVar8 == (int *)plVar7[7]) {
                    /* try { // try from 00724390 to 0072439b has its CatchHandler @ 007243dc */
            iVar6 = (**(code **)(*plVar7 + 0x68))(plVar7);
          }
          else {
            *piVar8 = iVar6;
            plVar7[6] = (long)(piVar8 + 1);
          }
          uVar9 = (ulong)local_60 & 0xff;
          piVar8 = piStack_50;
          uVar10 = local_58;
          param_2 = (long *)0x0;
          if (iVar6 != -1) {
            param_2 = plVar7;
          }
        }
        piVar11 = piVar11 + 1;
        uVar2 = uVar9 >> 1;
        piVar3 = (int *)((ulong)&local_60 | 4);
        if ((uVar9 & 1) != 0) {
          uVar2 = uVar10;
          piVar3 = piVar8;
        }
        plVar7 = param_2;
      } while (piVar11 != piVar3 + uVar2);
    }
    if ((uVar9 & 1) != 0) {
      free(piVar8);
    }
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007243c4 to 007243c7 has its CatchHandler @ 007243c8 */
  FUN_007191ac();
}


// ===== 007243f8  FUN_007243f8 =====

void FUN_007243f8(void)

{
  FUN_00724408();
  return;
}


// ===== 00724408  FUN_00724408 =====

void FUN_00724408(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined8 param_5,char *param_6)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  undefined1 auStack_130 [8];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 auStack_114 [180];
  char local_60 [24];
  undefined8 local_48;
  
  uVar1 = *(uint *)(param_3 + 8);
  local_48 = 0x25;
  pcVar3 = (char *)((ulong)&local_48 | 1);
  if ((((uVar1 >> 0xb & 1) != 0) && ((uVar1 & 0x4a) != 8)) && ((uVar1 & 0x4a) != 0x40)) {
    pcVar3 = (char *)((ulong)&local_48 | 2);
    local_48 = 0x2b25;
  }
  pcVar4 = pcVar3;
  if ((uVar1 >> 9 & 1) != 0) {
    pcVar4 = pcVar3 + 1;
    *pcVar3 = '#';
  }
  cVar5 = *param_6;
  if (cVar5 != '\0') {
    pcVar3 = pcVar4;
    pcVar6 = param_6 + 1;
    do {
      pcVar4 = pcVar3 + 1;
      *pcVar3 = cVar5;
      cVar5 = *pcVar6;
      pcVar3 = pcVar4;
      pcVar6 = pcVar6 + 1;
    } while (cVar5 != '\0');
  }
  if ((uVar1 & 0x4a) == 0x40) {
    cVar5 = 'o';
  }
  else if ((uVar1 & 0x4a) == 8) {
    cVar5 = 'x';
    if ((uVar1 & 0x4000) != 0) {
      cVar5 = 'X';
    }
  }
  else {
    cVar5 = 'd';
  }
  *pcVar4 = cVar5;
  if (((DAT_007b0958 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007b0958), iVar2 != 0)) {
                    /* try { // try from 007245f0 to 00724603 has its CatchHandler @ 00724618 */
    DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_00739d60(&DAT_007b0958);
  }
  iVar2 = FUN_00724168(local_60,0x18,DAT_007b0950,&local_48,param_5);
  uVar1 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar3 = local_60 + iVar2;
  if (uVar1 == 0x20) goto LAB_00724578;
  if (uVar1 == 0x10) {
    if ((local_60[0] == '-') || (local_60[0] == '+')) {
      pcVar3 = (char *)((ulong)local_60 | 1);
      goto LAB_00724578;
    }
    if (((1 < iVar2) && (local_60[0] == '0')) && ((byte)(local_60[1] | 0x20U) == 0x78)) {
      pcVar3 = (char *)((ulong)local_60 | 2);
      goto LAB_00724578;
    }
  }
  pcVar3 = local_60;
LAB_00724578:
  FUN_00715df0(auStack_130,param_3);
                    /* try { // try from 00724584 to 007245a3 has its CatchHandler @ 00724630 */
  FUN_00726424(local_60,pcVar3,local_60 + iVar2,auStack_114,&uStack_120,&local_128,auStack_130);
  FUN_00732094(auStack_130);
  FUN_00725838(param_2,auStack_114,uStack_120,local_128,param_3,param_4);
  return;
}


// ===== 00724644  FUN_00724644 =====

void FUN_00724644(void)

{
  FUN_00724654();
  return;
}


// ===== 00724654  FUN_00724654 =====

void FUN_00724654(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined8 param_5,char *param_6)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  undefined1 auStack_130 [8];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 auStack_114 [180];
  char local_60 [24];
  undefined8 local_48;
  
  uVar1 = *(uint *)(param_3 + 8);
  local_48 = 0x25;
  pcVar3 = (char *)((ulong)&local_48 | 1);
  if ((((uVar1 >> 0xb & 1) != 0) && ((uVar1 & 0x4a) != 8)) && ((uVar1 & 0x4a) != 0x40)) {
    pcVar3 = (char *)((ulong)&local_48 | 2);
    local_48 = 0x2b25;
  }
  pcVar4 = pcVar3;
  if ((uVar1 >> 9 & 1) != 0) {
    pcVar4 = pcVar3 + 1;
    *pcVar3 = '#';
  }
  cVar5 = *param_6;
  if (cVar5 != '\0') {
    pcVar3 = pcVar4;
    pcVar6 = param_6 + 1;
    do {
      pcVar4 = pcVar3 + 1;
      *pcVar3 = cVar5;
      cVar5 = *pcVar6;
      pcVar3 = pcVar4;
      pcVar6 = pcVar6 + 1;
    } while (cVar5 != '\0');
  }
  if ((uVar1 & 0x4a) == 0x40) {
    cVar5 = 'o';
  }
  else if ((uVar1 & 0x4a) == 8) {
    cVar5 = 'x';
    if ((uVar1 & 0x4000) != 0) {
      cVar5 = 'X';
    }
  }
  else {
    cVar5 = 'd';
  }
  *pcVar4 = cVar5;
  if (((DAT_007b0958 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007b0958), iVar2 != 0)) {
                    /* try { // try from 0072483c to 0072484f has its CatchHandler @ 00724864 */
    DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_00739d60(&DAT_007b0958);
  }
  iVar2 = FUN_00724168(local_60,0x18,DAT_007b0950,&local_48,param_5);
  uVar1 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar3 = local_60 + iVar2;
  if (uVar1 == 0x20) goto LAB_007247c4;
  if (uVar1 == 0x10) {
    if ((local_60[0] == '-') || (local_60[0] == '+')) {
      pcVar3 = (char *)((ulong)local_60 | 1);
      goto LAB_007247c4;
    }
    if (((1 < iVar2) && (local_60[0] == '0')) && ((byte)(local_60[1] | 0x20U) == 0x78)) {
      pcVar3 = (char *)((ulong)local_60 | 2);
      goto LAB_007247c4;
    }
  }
  pcVar3 = local_60;
LAB_007247c4:
  FUN_00715df0(auStack_130,param_3);
                    /* try { // try from 007247d0 to 007247ef has its CatchHandler @ 0072487c */
  FUN_00726424(local_60,pcVar3,local_60 + iVar2,auStack_114,&uStack_120,&local_128,auStack_130);
  FUN_00732094(auStack_130);
  FUN_00725838(param_2,auStack_114,uStack_120,local_128,param_3,param_4);
  return;
}


// ===== 00724890  FUN_00724890 =====

void FUN_00724890(void)

{
  FUN_007248a0();
  return;
}


// ===== 007248a0  FUN_007248a0 =====

void FUN_007248a0(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined8 param_5,char *param_6)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  undefined1 auStack_130 [8];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 auStack_114 [180];
  char local_60 [24];
  undefined8 local_48;
  
  uVar1 = *(uint *)(param_3 + 8);
  local_48 = 0x25;
  if ((uVar1 >> 9 & 1) == 0) {
    pcVar3 = (char *)((ulong)&local_48 | 1);
    cVar5 = *param_6;
  }
  else {
    pcVar3 = (char *)((ulong)&local_48 | 2);
    local_48 = 0x2325;
    cVar5 = *param_6;
  }
  if (cVar5 != '\0') {
    pcVar4 = pcVar3;
    pcVar6 = param_6 + 1;
    do {
      pcVar3 = pcVar4 + 1;
      *pcVar4 = cVar5;
      cVar5 = *pcVar6;
      pcVar4 = pcVar3;
      pcVar6 = pcVar6 + 1;
    } while (cVar5 != '\0');
  }
  if ((uVar1 & 0x4a) == 0x40) {
    cVar5 = 'o';
  }
  else if ((uVar1 & 0x4a) == 8) {
    cVar5 = 'x';
    if ((uVar1 & 0x4000) != 0) {
      cVar5 = 'X';
    }
  }
  else {
    cVar5 = 'u';
  }
  *pcVar3 = cVar5;
  if (((DAT_007b0958 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007b0958), iVar2 != 0)) {
                    /* try { // try from 00724a6c to 00724a7f has its CatchHandler @ 00724a94 */
    DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_00739d60(&DAT_007b0958);
  }
  iVar2 = FUN_00724168(local_60,0x18,DAT_007b0950,&local_48,param_5);
  uVar1 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar3 = local_60 + iVar2;
  if (uVar1 == 0x20) goto LAB_007249f4;
  if (uVar1 == 0x10) {
    if ((local_60[0] == '-') || (local_60[0] == '+')) {
      pcVar3 = (char *)((ulong)local_60 | 1);
      goto LAB_007249f4;
    }
    if (((1 < iVar2) && (local_60[0] == '0')) && ((byte)(local_60[1] | 0x20U) == 0x78)) {
      pcVar3 = (char *)((ulong)local_60 | 2);
      goto LAB_007249f4;
    }
  }
  pcVar3 = local_60;
LAB_007249f4:
  FUN_00715df0(auStack_130,param_3);
                    /* try { // try from 00724a00 to 00724a1f has its CatchHandler @ 00724aac */
  FUN_00726424(local_60,pcVar3,local_60 + iVar2,auStack_114,&uStack_120,&local_128,auStack_130);
  FUN_00732094(auStack_130);
  FUN_00725838(param_2,auStack_114,uStack_120,local_128,param_3,param_4);
  return;
}


// ===== 00724ac0  FUN_00724ac0 =====

void FUN_00724ac0(void)

{
  FUN_00724ad0();
  return;
}


// ===== 00724ad0  FUN_00724ad0 =====

void FUN_00724ad0(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined8 param_5,char *param_6)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  undefined1 auStack_130 [8];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 auStack_114 [180];
  char local_60 [24];
  undefined8 local_48;
  
  uVar1 = *(uint *)(param_3 + 8);
  local_48 = 0x25;
  if ((uVar1 >> 9 & 1) == 0) {
    pcVar3 = (char *)((ulong)&local_48 | 1);
    cVar5 = *param_6;
  }
  else {
    pcVar3 = (char *)((ulong)&local_48 | 2);
    local_48 = 0x2325;
    cVar5 = *param_6;
  }
  if (cVar5 != '\0') {
    pcVar4 = pcVar3;
    pcVar6 = param_6 + 1;
    do {
      pcVar3 = pcVar4 + 1;
      *pcVar4 = cVar5;
      cVar5 = *pcVar6;
      pcVar4 = pcVar3;
      pcVar6 = pcVar6 + 1;
    } while (cVar5 != '\0');
  }
  if ((uVar1 & 0x4a) == 0x40) {
    cVar5 = 'o';
  }
  else if ((uVar1 & 0x4a) == 8) {
    cVar5 = 'x';
    if ((uVar1 & 0x4000) != 0) {
      cVar5 = 'X';
    }
  }
  else {
    cVar5 = 'u';
  }
  *pcVar3 = cVar5;
  if (((DAT_007b0958 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007b0958), iVar2 != 0)) {
                    /* try { // try from 00724c9c to 00724caf has its CatchHandler @ 00724cc4 */
    DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_00739d60(&DAT_007b0958);
  }
  iVar2 = FUN_00724168(local_60,0x18,DAT_007b0950,&local_48,param_5);
  uVar1 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar3 = local_60 + iVar2;
  if (uVar1 == 0x20) goto LAB_00724c24;
  if (uVar1 == 0x10) {
    if ((local_60[0] == '-') || (local_60[0] == '+')) {
      pcVar3 = (char *)((ulong)local_60 | 1);
      goto LAB_00724c24;
    }
    if (((1 < iVar2) && (local_60[0] == '0')) && ((byte)(local_60[1] | 0x20U) == 0x78)) {
      pcVar3 = (char *)((ulong)local_60 | 2);
      goto LAB_00724c24;
    }
  }
  pcVar3 = local_60;
LAB_00724c24:
  FUN_00715df0(auStack_130,param_3);
                    /* try { // try from 00724c30 to 00724c4f has its CatchHandler @ 00724cdc */
  FUN_00726424(local_60,pcVar3,local_60 + iVar2,auStack_114,&uStack_120,&local_128,auStack_130);
  FUN_00732094(auStack_130);
  FUN_00725838(param_2,auStack_114,uStack_120,local_128,param_3,param_4);
  return;
}


// ===== 00724cf0  FUN_00724cf0 =====

void FUN_00724cf0(void)

{
  FUN_00724d00();
  return;
}


// ===== 00724d00  FUN_00724d00 =====

undefined8
FUN_00724d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
            undefined4 param_5,char *param_6)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined1 *__ptr;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  char cVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 *puVar12;
  undefined1 auStack_198 [8];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 auStack_17c [228];
  char *local_98;
  char local_8e [30];
  undefined8 local_68;
  
  uVar2 = *(uint *)(param_4 + 8);
  local_68 = 0x25;
  if ((uVar2 >> 0xb & 1) == 0) {
    pcVar6 = (char *)((ulong)&local_68 | 1);
  }
  else {
    pcVar6 = (char *)((ulong)&local_68 | 2);
    local_68 = 0x2b25;
  }
  if ((uVar2 >> 10 & 1) != 0) {
    *pcVar6 = '#';
    pcVar6 = pcVar6 + 1;
  }
  uVar1 = uVar2 & 0x104;
  pcVar7 = pcVar6;
  if (uVar1 != 0x104) {
    pcVar7 = pcVar6 + 2;
    pcVar6[0] = '.';
    pcVar6[1] = '*';
  }
  cVar9 = *param_6;
  if (cVar9 != '\0') {
    pcVar6 = pcVar7;
    pcVar10 = param_6 + 1;
    do {
      pcVar7 = pcVar6 + 1;
      *pcVar6 = cVar9;
      cVar9 = *pcVar10;
      pcVar6 = pcVar7;
      pcVar10 = pcVar10 + 1;
    } while (cVar9 != '\0');
  }
  if (uVar1 == 0x100) {
    bVar3 = (uVar2 & 0x4000) == 0;
    cVar8 = 'E';
    cVar9 = 'e';
LAB_00724e38:
    if (!bVar3) {
      cVar9 = cVar8;
    }
    *pcVar7 = cVar9;
    local_98 = local_8e;
    if (((DAT_007b0958 & 1) == 0) && (iVar4 = FUN_00739c1c(&DAT_007b0958), iVar4 != 0)) {
                    /* try { // try from 0072502c to 0072503f has its CatchHandler @ 00725114 */
      DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_00739d60(&DAT_007b0958);
    }
    iVar4 = FUN_00724168(param_1,local_8e,0x1e,DAT_007b0950,&local_68,
                         *(undefined4 *)(param_4 + 0x10));
    if (0x1d < iVar4) {
      if (uVar1 != 0x104) {
        if (((DAT_007b0958 & 1) == 0) && (iVar4 = FUN_00739c1c(&DAT_007b0958), iVar4 != 0)) {
                    /* try { // try from 007250a8 to 007250bb has its CatchHandler @ 0072510c */
          DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          FUN_00739d60(&DAT_007b0958);
        }
        iVar4 = FUN_0072e5e8(param_1,&local_98,DAT_007b0950,&local_68,
                             *(undefined4 *)(param_4 + 0x10));
        goto LAB_00724edc;
      }
      goto code_r0x00724e8c;
    }
LAB_00724eb4:
    pcVar6 = (char *)0x0;
  }
  else {
    if (uVar1 == 4) {
      bVar3 = (uVar2 & 0x4000) == 0;
      cVar8 = 'F';
      cVar9 = 'f';
      goto LAB_00724e38;
    }
    if (uVar1 != 0x104) {
      bVar3 = (uVar2 & 0x4000) == 0;
      cVar8 = 'G';
      cVar9 = 'g';
      goto LAB_00724e38;
    }
    cVar9 = 'a';
    if ((uVar2 & 0x4000) != 0) {
      cVar9 = 'A';
    }
    local_98 = local_8e;
    *pcVar7 = cVar9;
    if (((DAT_007b0958 & 1) == 0) && (iVar4 = FUN_00739c1c(&DAT_007b0958), iVar4 != 0)) {
                    /* try { // try from 007250e0 to 007250f3 has its CatchHandler @ 00725108 */
      DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_00739d60(&DAT_007b0958);
    }
    iVar4 = FUN_00724168(param_1,local_8e,0x1e,DAT_007b0950,&local_68);
    if (iVar4 < 0x1e) goto LAB_00724eb4;
code_r0x00724e8c:
    if ((DAT_007b0958 & 1) == 0) goto code_r0x00725060;
    while( true ) {
                    /* try { // try from 00724ea0 to 00724edb has its CatchHandler @ 0072517c */
      iVar4 = FUN_0072e5e8(param_1,&local_98,DAT_007b0950,&local_68);
LAB_00724edc:
      pcVar6 = local_98;
      if (iVar4 != -1) break;
                    /* try { // try from 00725058 to 0072505b has its CatchHandler @ 0072517c */
      FUN_00712520();
code_r0x00725060:
      iVar4 = FUN_00739c1c(&DAT_007b0958);
      if (iVar4 != 0) {
                    /* try { // try from 0072506c to 0072507f has its CatchHandler @ 00725110 */
        DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        FUN_00739d60(&DAT_007b0958);
      }
    }
  }
  pcVar10 = local_98;
  uVar2 = *(uint *)(param_4 + 8) & 0xb0;
  pcVar7 = local_98 + iVar4;
  pcVar11 = pcVar7;
  if ((uVar2 != 0x20) && (pcVar11 = local_98, uVar2 == 0x10)) {
    cVar9 = *local_98;
    if ((cVar9 == '-') || (cVar9 == '+')) {
      pcVar11 = local_98 + 1;
    }
    else if (((1 < iVar4) && (cVar9 == '0')) && ((byte)(local_98[1] | 0x20U) == 0x78)) {
      pcVar11 = local_98 + 2;
    }
  }
  if (local_98 != local_8e) {
    __ptr = (undefined1 *)malloc((long)iVar4 << 3);
    puVar12 = __ptr;
    if (__ptr != (undefined1 *)0x0) goto LAB_00724f88;
                    /* try { // try from 00724f7c to 00724f7f has its CatchHandler @ 0072512c */
    FUN_00712520();
  }
  __ptr = (undefined1 *)0x0;
  puVar12 = auStack_17c;
LAB_00724f88:
                    /* try { // try from 00724f88 to 00724f93 has its CatchHandler @ 0072514c */
  FUN_00715df0(auStack_198,param_4);
                    /* try { // try from 00724f94 to 00724fb3 has its CatchHandler @ 0072513c */
  FUN_00726820(pcVar10,pcVar11,pcVar7,puVar12,&uStack_188,&local_190,auStack_198);
  FUN_00732094(auStack_198);
                    /* try { // try from 00724fc0 to 00724fd3 has its CatchHandler @ 00725138 */
  uVar5 = FUN_00725838(param_3,puVar12,uStack_188,local_190,param_4,param_5);
  if (__ptr != (undefined1 *)0x0) {
    free(__ptr);
  }
  if (pcVar6 != (char *)0x0) {
    free(pcVar6);
  }
  return uVar5;
}


// ===== 00725180  FUN_00725180 =====

void FUN_00725180(void)

{
  FUN_00725190();
  return;
}


// ===== 00725190  FUN_00725190 =====

undefined8
FUN_00725190(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
            undefined4 param_5,char *param_6)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined1 *__ptr;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  char cVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 *puVar12;
  undefined1 auStack_190 [8];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 auStack_174 [228];
  char *local_90;
  char local_86 [30];
  undefined8 local_68;
  
  uVar2 = *(uint *)(param_4 + 8);
  local_68 = 0x25;
  if ((uVar2 >> 0xb & 1) == 0) {
    pcVar6 = (char *)((ulong)&local_68 | 1);
  }
  else {
    pcVar6 = (char *)((ulong)&local_68 | 2);
    local_68 = 0x2b25;
  }
  if ((uVar2 >> 10 & 1) != 0) {
    *pcVar6 = '#';
    pcVar6 = pcVar6 + 1;
  }
  uVar1 = uVar2 & 0x104;
  pcVar7 = pcVar6;
  if (uVar1 != 0x104) {
    pcVar7 = pcVar6 + 2;
    pcVar6[0] = '.';
    pcVar6[1] = '*';
  }
  cVar9 = *param_6;
  if (cVar9 != '\0') {
    pcVar6 = pcVar7;
    pcVar10 = param_6 + 1;
    do {
      pcVar7 = pcVar6 + 1;
      *pcVar6 = cVar9;
      cVar9 = *pcVar10;
      pcVar6 = pcVar7;
      pcVar10 = pcVar10 + 1;
    } while (cVar9 != '\0');
  }
  if (uVar1 == 0x100) {
    bVar3 = (uVar2 & 0x4000) == 0;
    cVar8 = 'E';
    cVar9 = 'e';
LAB_007252c4:
    if (!bVar3) {
      cVar9 = cVar8;
    }
    *pcVar7 = cVar9;
    local_90 = local_86;
    if (((DAT_007b0958 & 1) == 0) && (iVar4 = FUN_00739c1c(&DAT_007b0958), iVar4 != 0)) {
                    /* try { // try from 007254b4 to 007254c7 has its CatchHandler @ 0072559c */
      DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_00739d60(&DAT_007b0958);
    }
    iVar4 = FUN_00724168(param_1,local_86,0x1e,DAT_007b0950,&local_68,
                         *(undefined4 *)(param_4 + 0x10));
    if (0x1d < iVar4) {
      if (uVar1 != 0x104) {
        if (((DAT_007b0958 & 1) == 0) && (iVar4 = FUN_00739c1c(&DAT_007b0958), iVar4 != 0)) {
                    /* try { // try from 00725530 to 00725543 has its CatchHandler @ 00725594 */
          DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          FUN_00739d60(&DAT_007b0958);
        }
        iVar4 = FUN_0072e5e8(param_1,&local_90,DAT_007b0950,&local_68,
                             *(undefined4 *)(param_4 + 0x10));
        goto LAB_00725368;
      }
      goto code_r0x00725318;
    }
LAB_00725340:
    pcVar6 = (char *)0x0;
  }
  else {
    if (uVar1 == 4) {
      bVar3 = (uVar2 & 0x4000) == 0;
      cVar8 = 'F';
      cVar9 = 'f';
      goto LAB_007252c4;
    }
    if (uVar1 != 0x104) {
      bVar3 = (uVar2 & 0x4000) == 0;
      cVar8 = 'G';
      cVar9 = 'g';
      goto LAB_007252c4;
    }
    cVar9 = 'a';
    if ((uVar2 & 0x4000) != 0) {
      cVar9 = 'A';
    }
    local_90 = local_86;
    *pcVar7 = cVar9;
    if (((DAT_007b0958 & 1) == 0) && (iVar4 = FUN_00739c1c(&DAT_007b0958), iVar4 != 0)) {
                    /* try { // try from 00725568 to 0072557b has its CatchHandler @ 00725590 */
      DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_00739d60(&DAT_007b0958);
    }
    iVar4 = FUN_00724168(param_1,local_86,0x1e,DAT_007b0950,&local_68);
    if (iVar4 < 0x1e) goto LAB_00725340;
code_r0x00725318:
    if ((DAT_007b0958 & 1) == 0) goto code_r0x007254e8;
    while( true ) {
                    /* try { // try from 0072532c to 00725367 has its CatchHandler @ 00725604 */
      iVar4 = FUN_0072e5e8(param_1,&local_90,DAT_007b0950,&local_68);
LAB_00725368:
      pcVar6 = local_90;
      if (iVar4 != -1) break;
                    /* try { // try from 007254e0 to 007254e3 has its CatchHandler @ 00725604 */
      FUN_00712520();
code_r0x007254e8:
      iVar4 = FUN_00739c1c(&DAT_007b0958);
      if (iVar4 != 0) {
                    /* try { // try from 007254f4 to 00725507 has its CatchHandler @ 00725598 */
        DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        FUN_00739d60(&DAT_007b0958);
      }
    }
  }
  pcVar10 = local_90;
  uVar2 = *(uint *)(param_4 + 8) & 0xb0;
  pcVar7 = local_90 + iVar4;
  pcVar11 = pcVar7;
  if ((uVar2 != 0x20) && (pcVar11 = local_90, uVar2 == 0x10)) {
    cVar9 = *local_90;
    if ((cVar9 == '-') || (cVar9 == '+')) {
      pcVar11 = local_90 + 1;
    }
    else if (((1 < iVar4) && (cVar9 == '0')) && ((byte)(local_90[1] | 0x20U) == 0x78)) {
      pcVar11 = local_90 + 2;
    }
  }
  if (local_90 != local_86) {
    __ptr = (undefined1 *)malloc((long)iVar4 << 3);
    puVar12 = __ptr;
    if (__ptr != (undefined1 *)0x0) goto LAB_00725414;
                    /* try { // try from 00725408 to 0072540b has its CatchHandler @ 007255b4 */
    FUN_00712520();
  }
  __ptr = (undefined1 *)0x0;
  puVar12 = auStack_174;
LAB_00725414:
                    /* try { // try from 00725414 to 0072541f has its CatchHandler @ 007255d4 */
  FUN_00715df0(auStack_190,param_4);
                    /* try { // try from 00725420 to 0072543f has its CatchHandler @ 007255c4 */
  FUN_00726820(pcVar10,pcVar11,pcVar7,puVar12,&uStack_180,&local_188,auStack_190);
  FUN_00732094(auStack_190);
                    /* try { // try from 0072544c to 0072545f has its CatchHandler @ 007255c0 */
  uVar5 = FUN_00725838(param_3,puVar12,uStack_180,local_188,param_4,param_5);
  if (__ptr != (undefined1 *)0x0) {
    free(__ptr);
  }
  if (pcVar6 != (char *)0x0) {
    free(pcVar6);
  }
  return uVar5;
}


// ===== 00725608  FUN_00725608 =====

void FUN_00725608(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined8 param_5)

{
  char *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  char *pcVar7;
  long local_120;
  undefined1 auStack_118 [148];
  char local_84 [20];
  undefined *local_70;
  undefined ***local_68;
  undefined **local_48;
  
  if (((DAT_007b0958 & 1) == 0) && (iVar5 = FUN_00739c1c(&DAT_007b0958), iVar5 != 0)) {
                    /* try { // try from 007257e4 to 007257f7 has its CatchHandler @ 0072580c */
    DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_00739d60(&DAT_007b0958);
  }
  iVar5 = FUN_00724168(local_84,0x14,DAT_007b0950,&DAT_001c7073,param_5);
  uVar2 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar1 = local_84 + iVar5;
  pcVar7 = pcVar1;
  if (uVar2 == 0x20) goto LAB_007256e8;
  if (uVar2 == 0x10) {
    if ((local_84[0] == '-') || (local_84[0] == '+')) {
      pcVar7 = (char *)((ulong)local_84 | 1);
      goto LAB_007256e8;
    }
    if ((1 < iVar5) && ((local_84[0] == '0' && ((byte)(local_84[1] | 0x20U) == 0x78)))) {
      pcVar7 = (char *)((ulong)local_84 | 2);
      goto LAB_007256e8;
    }
  }
  pcVar7 = local_84;
LAB_007256e8:
  FUN_00715df0(&local_120,param_3);
  puVar4 = PTR_DAT_007a2640;
  local_70 = PTR_DAT_007a2640;
  if (*(long *)PTR_DAT_007a2640 != -1) {
    local_48 = &local_70;
    local_68 = &local_48;
                    /* try { // try from 00725720 to 00725737 has its CatchHandler @ 00725824 */
    FUN_00710f84(PTR_DAT_007a2640,&local_68,FUN_007374a0);
  }
  if (((long)*(int *)(puVar4 + 8) - 1U <
       (ulong)(*(long *)(local_120 + 0x18) - *(long *)(local_120 + 0x10) >> 3)) &&
     (plVar6 = *(long **)(*(long *)(local_120 + 0x10) + ((long)*(int *)(puVar4 + 8) - 1U) * 8),
     plVar6 != (long *)0x0)) {
    FUN_00732094(&local_120);
    (**(code **)(*plVar6 + 0x60))(plVar6,local_84,pcVar1,auStack_118);
    puVar3 = auStack_118 + (long)iVar5 * 4;
    if (pcVar7 != pcVar1) {
      puVar3 = auStack_118 + ((long)pcVar7 - (long)local_84) * 4;
    }
    FUN_00725838(param_2,auStack_118,puVar3,auStack_118 + (long)iVar5 * 4,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007257d0 to 007257d3 has its CatchHandler @ 00725824 */
  FUN_007191ac();
}


// ===== 00725838  FUN_00725838 =====

long * FUN_00725838(long *param_1,long param_2,long param_3,long param_4,long param_5,
                   undefined4 param_6)

{
  ulong uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong local_68;
  ulong local_60;
  undefined4 *local_58;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar4 = param_4 - param_2 >> 2;
  lVar10 = param_3 - param_2 >> 2;
  uVar3 = *(long *)(param_5 + 0x18) - lVar4;
  uVar1 = uVar3;
  if (uVar3 == 0 || *(long *)(param_5 + 0x18) < lVar4) {
    uVar1 = 0;
  }
  if ((0 < lVar10) &&
     (lVar4 = (**(code **)(*param_1 + 0x60))(param_1,param_2,lVar10), lVar4 != lVar10)) {
    return (long *)0x0;
  }
  if ((long)uVar1 < 1) goto LAB_007259b0;
  if (0x3ffffffffffffff7 < uVar1) {
    FUN_002f9e4c(&local_68);
LAB_00725a18:
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  if (uVar1 < 5) {
    puVar2 = (undefined4 *)((ulong)&local_68 | 4);
    local_68 = CONCAT71(local_68._1_7_,(char)((int)uVar1 << 1));
  }
  else {
    uVar6 = (uVar1 & 0x3ffffffffffffffe) + 2;
    if ((uVar1 | 1) != 5) {
      uVar6 = uVar1 | 1;
    }
    if (0x3ffffffffffffffe < uVar6) goto LAB_00725a18;
    puVar2 = (undefined4 *)FUN_00759c3c((uVar6 + 1) * 4);
    local_68 = uVar6 + 1 | 1;
    local_60 = uVar1;
    local_58 = puVar2;
  }
  puVar5 = puVar2;
  uVar6 = uVar3;
  if (uVar3 < 8) {
LAB_00725958:
    do {
      uVar6 = uVar6 - 1;
      *puVar5 = param_6;
      puVar5 = puVar5 + 1;
    } while (uVar6 != 0);
  }
  else {
    uVar7 = uVar3 & 0xfffffffffffffff8;
    uVar6 = uVar3 & 7;
    puVar8 = (undefined8 *)(puVar2 + 4);
    uVar9 = uVar7;
    do {
      uVar9 = uVar9 - 8;
      puVar8[-1] = CONCAT44(param_6,param_6);
      puVar8[-2] = CONCAT44(param_6,param_6);
      puVar8[1] = CONCAT44(param_6,param_6);
      *puVar8 = CONCAT44(param_6,param_6);
      puVar8 = puVar8 + 4;
    } while (uVar9 != 0);
    puVar5 = puVar2 + uVar7;
    if (uVar3 != uVar7) goto LAB_00725958;
  }
  puVar2[uVar1] = 0;
  puVar2 = (undefined4 *)((ulong)&local_68 | 4);
  if ((local_68 & 1) != 0) {
    puVar2 = local_58;
  }
                    /* try { // try from 00725988 to 00725993 has its CatchHandler @ 00725a1c */
  uVar3 = (**(code **)(*param_1 + 0x60))(param_1,puVar2,uVar1);
  if ((local_68 & 1) != 0) {
    free(local_58);
  }
  if (uVar3 != uVar1) {
    return (long *)0x0;
  }
LAB_007259b0:
  lVar4 = param_4 - param_3 >> 2;
  if ((0 < lVar4) &&
     (lVar10 = (**(code **)(*param_1 + 0x60))(param_1,param_3,lVar4), lVar10 != lVar4)) {
    return (long *)0x0;
  }
  *(undefined8 *)(param_5 + 0x18) = 0;
  return param_1;
}


// ===== 00725a38  FUN_00725a38 =====

void FUN_00725a38(char *param_1,char *param_2,char *param_3,ulong param_4,ulong *param_5,
                 ulong *param_6,long *param_7)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  long *plVar19;
  long *plVar20;
  undefined **local_88;
  ulong local_80;
  void *local_78;
  undefined *local_70;
  undefined ***local_68;
  
  puVar5 = PTR_DAT_007a1108;
  lVar17 = *param_7;
  local_70 = PTR_DAT_007a1108;
  if (*(long *)PTR_DAT_007a1108 != -1) {
    local_88 = &local_70;
    local_68 = &local_88;
    FUN_00710f84(PTR_DAT_007a1108,&local_68,FUN_007374a0);
  }
  puVar6 = PTR_DAT_007a38d8;
  lVar3 = *(long *)(lVar17 + 0x10);
  if (((long)*(int *)(puVar5 + 8) - 1U < (ulong)(*(long *)(lVar17 + 0x18) - lVar3 >> 3)) &&
     (plVar19 = *(long **)(lVar3 + ((long)*(int *)(puVar5 + 8) - 1U) * 8), plVar19 != (long *)0x0))
  {
    lVar17 = *param_7;
    local_70 = PTR_DAT_007a38d8;
    if (*(long *)PTR_DAT_007a38d8 != -1) {
      local_88 = &local_70;
      local_68 = &local_88;
      FUN_00710f84(PTR_DAT_007a38d8,&local_68,FUN_007374a0);
    }
    lVar3 = *(long *)(lVar17 + 0x10);
    if (((long)*(int *)(puVar6 + 8) - 1U < (ulong)(*(long *)(lVar17 + 0x18) - lVar3 >> 3)) &&
       (plVar20 = *(long **)(lVar3 + ((long)*(int *)(puVar6 + 8) - 1U) * 8), plVar20 != (long *)0x0)
       ) {
      (**(code **)(*plVar20 + 0x28))(&local_88,plVar20);
      uVar12 = (ulong)local_88 >> 1 & 0x7f;
      if (((ulong)local_88 & 1) != 0) {
        uVar12 = local_80;
      }
      if (uVar12 == 0) {
                    /* try { // try from 00725d90 to 00725da3 has its CatchHandler @ 00725e04 */
        (**(code **)(*plVar19 + 0x40))(plVar19,param_1,param_3,param_4);
        pcVar15 = param_3 + (param_4 - (long)param_1);
        *param_6 = (ulong)pcVar15;
      }
      else {
        *param_6 = param_4;
        if ((*param_1 == '-') || (pcVar13 = param_1, *param_1 == '+')) {
                    /* try { // try from 00725b94 to 00725c0f has its CatchHandler @ 00725e0c */
          uVar7 = (**(code **)(*plVar19 + 0x38))(plVar19);
          puVar9 = (undefined1 *)*param_6;
          pcVar13 = param_1 + 1;
          *param_6 = (ulong)(puVar9 + 1);
          *puVar9 = uVar7;
        }
        if (((1 < (long)param_3 - (long)pcVar13) && (*pcVar13 == '0')) &&
           ((byte)(pcVar13[1] | 0x20U) == 0x78)) {
          uVar7 = (**(code **)(*plVar19 + 0x38))(plVar19,0x30);
          puVar9 = (undefined1 *)*param_6;
          *param_6 = (ulong)(puVar9 + 1);
          *puVar9 = uVar7;
          uVar7 = (**(code **)(*plVar19 + 0x38))(plVar19,pcVar13[1]);
          puVar9 = (undefined1 *)*param_6;
          pcVar13 = pcVar13 + 2;
          *param_6 = (ulong)(puVar9 + 1);
          *puVar9 = uVar7;
        }
        if ((pcVar13 != param_3) && (pcVar10 = param_3 + -1, pcVar15 = pcVar13, pcVar13 < pcVar10))
        {
          do {
            pcVar14 = pcVar15 + 1;
            cVar4 = *pcVar15;
            *pcVar15 = *pcVar10;
            pcVar11 = pcVar10 + -1;
            *pcVar10 = cVar4;
            pcVar10 = pcVar11;
            pcVar15 = pcVar14;
          } while (pcVar14 < pcVar11);
        }
                    /* try { // try from 00725c68 to 00725c6f has its CatchHandler @ 00725e08 */
        uVar7 = (**(code **)(*plVar20 + 0x20))(plVar20);
        if (pcVar13 < param_3) {
          uVar16 = 0;
          uVar18 = 0;
          lVar17 = (long)param_3 - (long)pcVar13;
          pcVar15 = pcVar13;
          do {
            uVar12 = (ulong)uVar16;
            pvVar1 = (void *)((ulong)&local_88 | 1);
            if (((ulong)local_88 & 1) != 0) {
              pvVar1 = local_78;
            }
            if (*(char *)((long)pvVar1 + uVar12) != '\0') {
              pvVar1 = (void *)((ulong)&local_88 | 1);
              if (((ulong)local_88 & 1) != 0) {
                pvVar1 = local_78;
              }
              if (uVar18 == *(byte *)((long)pvVar1 + uVar12)) {
                puVar9 = (undefined1 *)*param_6;
                uVar18 = 0;
                *param_6 = (ulong)(puVar9 + 1);
                *puVar9 = uVar7;
                uVar2 = (ulong)local_88 >> 1 & 0x7f;
                if (((ulong)local_88 & 1) != 0) {
                  uVar2 = local_80;
                }
                if (uVar12 < uVar2 - 1) {
                  uVar16 = uVar16 + 1;
                }
              }
            }
                    /* try { // try from 00725d08 to 00725d0f has its CatchHandler @ 00725e10 */
            uVar8 = (**(code **)(*plVar19 + 0x38))(plVar19,*pcVar15);
            puVar9 = (undefined1 *)*param_6;
            lVar17 = lVar17 + -1;
            uVar18 = uVar18 + 1;
            pcVar15 = pcVar15 + 1;
            *param_6 = (ulong)(puVar9 + 1);
            *puVar9 = uVar8;
          } while (lVar17 != 0);
        }
        pcVar15 = (char *)*param_6;
        if ((pcVar13 + (param_4 - (long)param_1) != pcVar15) &&
           (pcVar13 + (param_4 - (long)param_1) < pcVar15 + -1)) {
          pcVar10 = pcVar15 + -1;
          pcVar15 = pcVar13 + (param_4 - (long)param_1);
          do {
            pcVar11 = pcVar15 + 1;
            cVar4 = *pcVar15;
            *pcVar15 = *pcVar10;
            pcVar13 = pcVar10 + -1;
            *pcVar10 = cVar4;
            pcVar10 = pcVar13;
            pcVar15 = pcVar11;
          } while (pcVar11 < pcVar13);
          pcVar15 = (char *)*param_6;
        }
      }
      if (param_2 != param_3) {
        pcVar15 = param_2 + (param_4 - (long)param_1);
      }
      *param_5 = (ulong)pcVar15;
      if (((ulong)local_88 & 1) != 0) {
        free(local_78);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_007191ac();
}


// ===== 00725e2c  FUN_00725e2c =====

void FUN_00725e2c(byte *param_1,byte *param_2,byte *param_3,ulong param_4,ulong *param_5,
                 ulong *param_6,long *param_7)

{
  void *pvVar1;
  ulong uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  int iVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  long *plVar15;
  long lVar16;
  byte *pbVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  long *plVar21;
  byte *pbVar22;
  undefined **local_88;
  ulong local_80;
  void *local_78;
  undefined *local_70;
  undefined ***local_68;
  
  puVar4 = PTR_DAT_007a1108;
  lVar16 = *param_7;
  local_70 = PTR_DAT_007a1108;
  if (*(long *)PTR_DAT_007a1108 != -1) {
    local_88 = &local_70;
    local_68 = &local_88;
    FUN_00710f84(PTR_DAT_007a1108,&local_68,FUN_007374a0);
  }
  puVar5 = PTR_DAT_007a38d8;
  lVar20 = *(long *)(lVar16 + 0x10);
  if (((long)*(int *)(puVar4 + 8) - 1U < (ulong)(*(long *)(lVar16 + 0x18) - lVar20 >> 3)) &&
     (plVar21 = *(long **)(lVar20 + ((long)*(int *)(puVar4 + 8) - 1U) * 8), plVar21 != (long *)0x0))
  {
    lVar16 = *param_7;
    local_70 = PTR_DAT_007a38d8;
    if (*(long *)PTR_DAT_007a38d8 != -1) {
      local_88 = &local_70;
      local_68 = &local_88;
      FUN_00710f84(PTR_DAT_007a38d8,&local_68,FUN_007374a0);
    }
    lVar20 = *(long *)(lVar16 + 0x10);
    if (((long)*(int *)(puVar5 + 8) - 1U < (ulong)(*(long *)(lVar16 + 0x18) - lVar20 >> 3)) &&
       (plVar15 = *(long **)(lVar20 + ((long)*(int *)(puVar5 + 8) - 1U) * 8), plVar15 != (long *)0x0
       )) {
      (**(code **)(*plVar15 + 0x28))(&local_88,plVar15);
      *param_6 = param_4;
      if ((*param_1 == 0x2d) || (pbVar13 = param_1, *param_1 == 0x2b)) {
                    /* try { // try from 00725f6c to 00725f73 has its CatchHandler @ 007263fc */
        uVar6 = (**(code **)(*plVar21 + 0x38))(plVar21);
        puVar9 = (undefined1 *)*param_6;
        pbVar13 = param_1 + 1;
        *param_6 = (ulong)(puVar9 + 1);
        *puVar9 = uVar6;
      }
      lVar20 = (long)param_3 - (long)pbVar13;
      lVar16 = lVar20 + -2;
      if (((lVar20 < 2) || (*pbVar13 != 0x30)) || ((pbVar13[1] | 0x20) != 0x78)) {
        pbVar17 = pbVar13;
        pbVar22 = pbVar13;
        if (pbVar13 < param_3) {
          lVar16 = 0;
          do {
            bVar3 = pbVar13[lVar16];
            if (((DAT_007b0958 & 1) == 0) && (iVar8 = FUN_00739c1c(&DAT_007b0958), iVar8 != 0)) {
                    /* try { // try from 007260e8 to 007260f7 has its CatchHandler @ 007263e4 */
              DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
              FUN_00739d60(&DAT_007b0958);
            }
            if (bVar3 - 0x3a < 0xfffffff6) {
              pbVar22 = pbVar13 + lVar16;
              break;
            }
            lVar16 = lVar16 + 1;
            pbVar22 = pbVar13 + lVar20;
          } while (lVar20 != lVar16);
        }
      }
      else {
                    /* try { // try from 00725fc4 to 00725ff3 has its CatchHandler @ 00726400 */
        uVar6 = (**(code **)(*plVar21 + 0x38))(plVar21,0x30);
        puVar9 = (undefined1 *)*param_6;
        *param_6 = (ulong)(puVar9 + 1);
        *puVar9 = uVar6;
        uVar6 = (**(code **)(*plVar21 + 0x38))(plVar21,pbVar13[1]);
        puVar9 = (undefined1 *)*param_6;
        pbVar17 = pbVar13 + 2;
        *param_6 = (ulong)(puVar9 + 1);
        *puVar9 = uVar6;
        pbVar22 = pbVar17;
        if (pbVar17 < param_3) {
          pbVar10 = pbVar17;
          do {
            bVar3 = *pbVar10;
            if (((DAT_007b0958 & 1) == 0) && (iVar8 = FUN_00739c1c(&DAT_007b0958), iVar8 != 0)) {
                    /* try { // try from 00726074 to 0072607f has its CatchHandler @ 007263e0 */
              DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
              FUN_00739d60(&DAT_007b0958);
            }
            if ((bVar3 - 0x3a < 0xfffffff6) &&
               (pbVar22 = pbVar10, (bVar3 & 0xffffffdf) - 0x47 < 0xfffffffa)) break;
            lVar16 = lVar16 + -1;
            pbVar10 = pbVar10 + 1;
            pbVar22 = pbVar13 + lVar20;
          } while (lVar16 != 0);
        }
      }
      uVar12 = (ulong)local_88 >> 1 & 0x7f;
      if (((ulong)local_88 & 1) != 0) {
        uVar12 = local_80;
      }
      if (uVar12 == 0) {
                    /* try { // try from 007262a8 to 007262b7 has its CatchHandler @ 00726400 */
        (**(code **)(*plVar21 + 0x40))(plVar21,pbVar17,pbVar22,*param_6);
        *param_6 = (ulong)(pbVar22 + (*param_6 - (long)pbVar17));
      }
      else {
        if ((pbVar17 != pbVar22) && (pbVar10 = pbVar22 + -1, pbVar13 = pbVar17, pbVar17 < pbVar10))
        {
          do {
            pbVar14 = pbVar13 + 1;
            bVar3 = *pbVar13;
            *pbVar13 = *pbVar10;
            pbVar11 = pbVar10 + -1;
            *pbVar10 = bVar3;
            pbVar10 = pbVar11;
            pbVar13 = pbVar14;
          } while (pbVar14 < pbVar11);
        }
                    /* try { // try from 00726178 to 0072617f has its CatchHandler @ 007263f8 */
        uVar6 = (**(code **)(*plVar15 + 0x20))(plVar15);
        if (pbVar17 < pbVar22) {
          uVar18 = 0;
          uVar19 = 0;
          lVar16 = (long)pbVar22 - (long)pbVar17;
          pbVar13 = pbVar17;
          do {
            uVar12 = (ulong)uVar18;
            pvVar1 = (void *)((ulong)&local_88 | 1);
            if (((ulong)local_88 & 1) != 0) {
              pvVar1 = local_78;
            }
            if (*(char *)((long)pvVar1 + uVar12) != '\0') {
              pvVar1 = (void *)((ulong)&local_88 | 1);
              if (((ulong)local_88 & 1) != 0) {
                pvVar1 = local_78;
              }
              if (uVar19 == *(byte *)((long)pvVar1 + uVar12)) {
                puVar9 = (undefined1 *)*param_6;
                uVar19 = 0;
                *param_6 = (ulong)(puVar9 + 1);
                *puVar9 = uVar6;
                uVar2 = (ulong)local_88 >> 1 & 0x7f;
                if (((ulong)local_88 & 1) != 0) {
                  uVar2 = local_80;
                }
                if (uVar12 < uVar2 - 1) {
                  uVar18 = uVar18 + 1;
                }
              }
            }
                    /* try { // try from 00726218 to 0072621f has its CatchHandler @ 00726408 */
            uVar7 = (**(code **)(*plVar21 + 0x38))(plVar21,*pbVar13);
            puVar9 = (undefined1 *)*param_6;
            lVar16 = lVar16 + -1;
            uVar19 = uVar19 + 1;
            pbVar13 = pbVar13 + 1;
            *param_6 = (ulong)(puVar9 + 1);
            *puVar9 = uVar7;
          } while (lVar16 != 0);
        }
        if ((pbVar17 + (param_4 - (long)param_1) != (byte *)*param_6) &&
           (pbVar13 = (byte *)*param_6 + -1, pbVar17 + (param_4 - (long)param_1) < pbVar13)) {
          pbVar17 = pbVar17 + (param_4 - (long)param_1);
          do {
            pbVar11 = pbVar17 + 1;
            bVar3 = *pbVar17;
            *pbVar17 = *pbVar13;
            pbVar10 = pbVar13 + -1;
            *pbVar13 = bVar3;
            pbVar13 = pbVar10;
            pbVar17 = pbVar11;
          } while (pbVar11 < pbVar10);
        }
      }
      if (pbVar22 < param_3) {
        lVar16 = (long)param_3 - (long)pbVar22;
        pbVar13 = pbVar22;
        do {
          if (*pbVar13 == 0x2e) {
                    /* try { // try from 00726328 to 00726357 has its CatchHandler @ 00726400 */
            uVar6 = (**(code **)(*plVar15 + 0x18))(plVar15);
            puVar9 = (undefined1 *)*param_6;
            *param_6 = (ulong)(puVar9 + 1);
            *puVar9 = uVar6;
            pbVar22 = pbVar13 + 1;
            break;
          }
                    /* try { // try from 007262f0 to 007262f7 has its CatchHandler @ 00726404 */
          uVar6 = (**(code **)(*plVar21 + 0x38))(plVar21);
          puVar9 = (undefined1 *)*param_6;
          lVar16 = lVar16 + -1;
          *param_6 = (ulong)(puVar9 + 1);
          *puVar9 = uVar6;
          pbVar22 = param_3;
          pbVar13 = pbVar13 + 1;
        } while (lVar16 != 0);
      }
      (**(code **)(*plVar21 + 0x40))(plVar21,pbVar22,param_3,*param_6);
      uVar12 = *param_6;
      *param_6 = (ulong)(param_3 + (uVar12 - (long)pbVar22));
      pbVar13 = param_3 + (uVar12 - (long)pbVar22);
      if (param_2 != param_3) {
        pbVar13 = param_2 + (param_4 - (long)param_1);
      }
      *param_5 = (ulong)pbVar13;
      if (((ulong)local_88 & 1) != 0) {
        free(local_78);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_007191ac();
}


// ===== 00726424  FUN_00726424 =====

void FUN_00726424(char *param_1,char *param_2,char *param_3,ulong param_4,ulong *param_5,
                 ulong *param_6,long *param_7)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  char *pcVar15;
  undefined4 *puVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  long *plVar20;
  long *plVar21;
  char *pcVar22;
  char *pcVar23;
  undefined **local_88;
  ulong local_80;
  void *local_78;
  undefined *local_70;
  undefined ***local_68;
  
  puVar5 = PTR_DAT_007a2640;
  lVar18 = *param_7;
  local_70 = PTR_DAT_007a2640;
  if (*(long *)PTR_DAT_007a2640 != -1) {
    local_88 = &local_70;
    local_68 = &local_88;
    FUN_00710f84(PTR_DAT_007a2640,&local_68,FUN_007374a0);
  }
  puVar6 = PTR_DAT_007a38e8;
  lVar3 = *(long *)(lVar18 + 0x10);
  if (((long)*(int *)(puVar5 + 8) - 1U < (ulong)(*(long *)(lVar18 + 0x18) - lVar3 >> 3)) &&
     (plVar20 = *(long **)(lVar3 + ((long)*(int *)(puVar5 + 8) - 1U) * 8), plVar20 != (long *)0x0))
  {
    lVar18 = *param_7;
    local_70 = PTR_DAT_007a38e8;
    if (*(long *)PTR_DAT_007a38e8 != -1) {
      local_88 = &local_70;
      local_68 = &local_88;
      FUN_00710f84(PTR_DAT_007a38e8,&local_68,FUN_007374a0);
    }
    lVar3 = *(long *)(lVar18 + 0x10);
    if (((long)*(int *)(puVar6 + 8) - 1U < (ulong)(*(long *)(lVar18 + 0x18) - lVar3 >> 3)) &&
       (plVar21 = *(long **)(lVar3 + ((long)*(int *)(puVar6 + 8) - 1U) * 8), plVar21 != (long *)0x0)
       ) {
      (**(code **)(*plVar21 + 0x28))(&local_88,plVar21);
      uVar12 = (ulong)local_88 >> 1 & 0x7f;
      if (((ulong)local_88 & 1) != 0) {
        uVar12 = local_80;
      }
      if (uVar12 == 0) {
                    /* try { // try from 00726738 to 0072674b has its CatchHandler @ 007267f8 */
        (**(code **)(*plVar20 + 0x60))(plVar20,param_1,param_3,param_4);
        *param_6 = param_4 + ((long)param_3 - (long)param_1) * 4;
      }
      else {
        *param_6 = param_4;
        if ((*param_1 == '-') || (pcVar22 = param_1, *param_1 == '+')) {
                    /* try { // try from 00726580 to 007265f3 has its CatchHandler @ 00726800 */
          uVar7 = (**(code **)(*plVar20 + 0x58))(plVar20);
          puVar9 = (undefined4 *)*param_6;
          pcVar22 = param_1 + 1;
          *puVar9 = uVar7;
          *param_6 = (ulong)(puVar9 + 1);
        }
        if (((1 < (long)param_3 - (long)pcVar22) && (*pcVar22 == '0')) &&
           ((byte)(pcVar22[1] | 0x20U) == 0x78)) {
          uVar7 = (**(code **)(*plVar20 + 0x58))(plVar20,0x30);
          puVar9 = (undefined4 *)*param_6;
          *puVar9 = uVar7;
          *param_6 = (ulong)(puVar9 + 1);
          uVar7 = (**(code **)(*plVar20 + 0x58))(plVar20,pcVar22[1]);
          puVar9 = (undefined4 *)*param_6;
          pcVar22 = pcVar22 + 2;
          *puVar9 = uVar7;
          *param_6 = (ulong)(puVar9 + 1);
        }
        if ((pcVar22 != param_3) && (pcVar10 = param_3 + -1, pcVar23 = pcVar22, pcVar22 < pcVar10))
        {
          do {
            pcVar15 = pcVar23 + 1;
            cVar4 = *pcVar23;
            *pcVar23 = *pcVar10;
            pcVar11 = pcVar10 + -1;
            *pcVar10 = cVar4;
            pcVar10 = pcVar11;
            pcVar23 = pcVar15;
          } while (pcVar15 < pcVar11);
        }
                    /* try { // try from 00726654 to 0072665b has its CatchHandler @ 007267fc */
        uVar7 = (**(code **)(*plVar21 + 0x20))(plVar21);
        if (pcVar22 < param_3) {
          uVar17 = 0;
          uVar19 = 0;
          lVar18 = (long)param_3 - (long)pcVar22;
          pcVar23 = pcVar22;
          do {
            uVar12 = (ulong)uVar17;
            pvVar1 = (void *)((ulong)&local_88 | 1);
            if (((ulong)local_88 & 1) != 0) {
              pvVar1 = local_78;
            }
            if (*(char *)((long)pvVar1 + uVar12) != '\0') {
              pvVar1 = (void *)((ulong)&local_88 | 1);
              if (((ulong)local_88 & 1) != 0) {
                pvVar1 = local_78;
              }
              if (uVar19 == *(byte *)((long)pvVar1 + uVar12)) {
                puVar9 = (undefined4 *)*param_6;
                uVar19 = 0;
                *puVar9 = uVar7;
                *param_6 = (ulong)(puVar9 + 1);
                uVar2 = (ulong)local_88 >> 1 & 0x7f;
                if (((ulong)local_88 & 1) != 0) {
                  uVar2 = local_80;
                }
                if (uVar12 < uVar2 - 1) {
                  uVar17 = uVar17 + 1;
                }
              }
            }
                    /* try { // try from 007266f8 to 007266ff has its CatchHandler @ 00726804 */
            uVar8 = (**(code **)(*plVar20 + 0x58))(plVar20,*pcVar23);
            puVar9 = (undefined4 *)*param_6;
            lVar18 = lVar18 + -1;
            uVar19 = uVar19 + 1;
            pcVar23 = pcVar23 + 1;
            *puVar9 = uVar8;
            *param_6 = (ulong)(puVar9 + 1);
          } while (lVar18 != 0);
          puVar9 = puVar9 + 1;
        }
        else {
          puVar9 = (undefined4 *)*param_6;
        }
        puVar13 = (undefined4 *)(param_4 + ((long)pcVar22 - (long)param_1) * 4);
        if ((puVar13 != puVar9) && (puVar13 < puVar9 + -1)) {
          puVar13 = puVar9 + -1;
          puVar9 = (undefined4 *)(param_4 + (long)param_1 * -4 + (long)pcVar22 * 4);
          do {
            puVar16 = puVar9 + 1;
            uVar7 = *puVar9;
            *puVar9 = *puVar13;
            puVar14 = puVar13 + -1;
            *puVar13 = uVar7;
            puVar13 = puVar14;
            puVar9 = puVar16;
          } while (puVar16 < puVar14);
        }
      }
      uVar12 = *param_6;
      if (param_2 != param_3) {
        uVar12 = param_4 + ((long)param_2 - (long)param_1) * 4;
      }
      *param_5 = uVar12;
      if (((ulong)local_88 & 1) != 0) {
        free(local_78);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_007191ac();
}


// ===== 00726820  FUN_00726820 =====

void FUN_00726820(byte *param_1,byte *param_2,byte *param_3,ulong param_4,ulong *param_5,
                 ulong *param_6,long *param_7)

{
  undefined4 *puVar1;
  void *pvVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  byte *pbVar17;
  undefined4 *puVar18;
  long *plVar19;
  long lVar20;
  byte *pbVar21;
  byte *pbVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  long *plVar26;
  byte *pbVar27;
  undefined **local_88;
  ulong local_80;
  void *local_78;
  undefined *local_70;
  undefined ***local_68;
  
  puVar6 = PTR_DAT_007a2640;
  lVar20 = *param_7;
  local_70 = PTR_DAT_007a2640;
  if (*(long *)PTR_DAT_007a2640 != -1) {
    local_88 = &local_70;
    local_68 = &local_88;
    FUN_00710f84(PTR_DAT_007a2640,&local_68,FUN_007374a0);
  }
  puVar7 = PTR_DAT_007a38e8;
  lVar25 = *(long *)(lVar20 + 0x10);
  if (((long)*(int *)(puVar6 + 8) - 1U < (ulong)(*(long *)(lVar20 + 0x18) - lVar25 >> 3)) &&
     (plVar26 = *(long **)(lVar25 + ((long)*(int *)(puVar6 + 8) - 1U) * 8), plVar26 != (long *)0x0))
  {
    lVar20 = *param_7;
    local_70 = PTR_DAT_007a38e8;
    if (*(long *)PTR_DAT_007a38e8 != -1) {
      local_88 = &local_70;
      local_68 = &local_88;
      FUN_00710f84(PTR_DAT_007a38e8,&local_68,FUN_007374a0);
    }
    lVar25 = *(long *)(lVar20 + 0x10);
    if (((long)*(int *)(puVar7 + 8) - 1U < (ulong)(*(long *)(lVar20 + 0x18) - lVar25 >> 3)) &&
       (plVar19 = *(long **)(lVar25 + ((long)*(int *)(puVar7 + 8) - 1U) * 8), plVar19 != (long *)0x0
       )) {
      (**(code **)(*plVar19 + 0x28))(&local_88,plVar19);
      *param_6 = param_4;
      if ((*param_1 == 0x2d) || (pbVar21 = param_1, *param_1 == 0x2b)) {
                    /* try { // try from 00726960 to 00726967 has its CatchHandler @ 00726df0 */
        uVar8 = (**(code **)(*plVar26 + 0x58))(plVar26);
        puVar11 = (undefined4 *)*param_6;
        pbVar21 = param_1 + 1;
        *puVar11 = uVar8;
        *param_6 = (ulong)(puVar11 + 1);
      }
      lVar25 = (long)param_3 - (long)pbVar21;
      lVar20 = lVar25 + -2;
      if (((lVar25 < 2) || (*pbVar21 != 0x30)) || ((pbVar21[1] | 0x20) != 0x78)) {
        pbVar22 = pbVar21;
        pbVar27 = pbVar21;
        if (pbVar21 < param_3) {
          lVar20 = 0;
          do {
            bVar4 = pbVar21[lVar20];
            if (((DAT_007b0958 & 1) == 0) && (iVar9 = FUN_00739c1c(&DAT_007b0958), iVar9 != 0)) {
                    /* try { // try from 00726ad8 to 00726ae7 has its CatchHandler @ 00726dd8 */
              DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
              FUN_00739d60(&DAT_007b0958);
            }
            lVar5 = lVar20;
          } while ((0xfffffff5 < bVar4 - 0x3a) &&
                  (lVar20 = lVar20 + 1, lVar5 = lVar25, lVar25 != lVar20));
          pbVar27 = pbVar21 + lVar5;
        }
      }
      else {
                    /* try { // try from 007269b0 to 007269db has its CatchHandler @ 00726df4 */
        uVar8 = (**(code **)(*plVar26 + 0x58))(plVar26,0x30);
        puVar11 = (undefined4 *)*param_6;
        *puVar11 = uVar8;
        *param_6 = (ulong)(puVar11 + 1);
        uVar8 = (**(code **)(*plVar26 + 0x58))(plVar26,pbVar21[1]);
        puVar11 = (undefined4 *)*param_6;
        pbVar22 = pbVar21 + 2;
        *puVar11 = uVar8;
        *param_6 = (ulong)(puVar11 + 1);
        pbVar27 = pbVar22;
        if (pbVar22 < param_3) {
          pbVar12 = pbVar22;
          do {
            bVar4 = *pbVar12;
            if (((DAT_007b0958 & 1) == 0) && (iVar9 = FUN_00739c1c(&DAT_007b0958), iVar9 != 0)) {
                    /* try { // try from 00726a60 to 00726a6b has its CatchHandler @ 00726dd4 */
              DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
              FUN_00739d60(&DAT_007b0958);
            }
            if ((bVar4 - 0x3a < 0xfffffff6) &&
               (pbVar27 = pbVar12, (bVar4 & 0xffffffdf) - 0x47 < 0xfffffffa)) break;
            lVar20 = lVar20 + -1;
            pbVar12 = pbVar12 + 1;
            pbVar27 = pbVar21 + lVar25;
          } while (lVar20 != 0);
        }
      }
      uVar14 = (ulong)local_88 >> 1 & 0x7f;
      if (((ulong)local_88 & 1) != 0) {
        uVar14 = local_80;
      }
      if (uVar14 == 0) {
                    /* try { // try from 00726c54 to 00726c63 has its CatchHandler @ 00726df4 */
        (**(code **)(*plVar26 + 0x60))(plVar26,pbVar22,pbVar27,*param_6);
        puVar11 = (undefined4 *)(*param_6 + ((long)pbVar27 - (long)pbVar22) * 4);
        *param_6 = (ulong)puVar11;
      }
      else {
        if ((pbVar22 != pbVar27) && (pbVar12 = pbVar27 + -1, pbVar21 = pbVar22, pbVar22 < pbVar12))
        {
          do {
            pbVar17 = pbVar21 + 1;
            bVar4 = *pbVar21;
            *pbVar21 = *pbVar12;
            pbVar13 = pbVar12 + -1;
            *pbVar12 = bVar4;
            pbVar12 = pbVar13;
            pbVar21 = pbVar17;
          } while (pbVar17 < pbVar13);
        }
                    /* try { // try from 00726b6c to 00726b73 has its CatchHandler @ 00726dec */
        uVar8 = (**(code **)(*plVar19 + 0x20))(plVar19);
        if (pbVar22 < pbVar27) {
          uVar23 = 0;
          uVar24 = 0;
          lVar20 = (long)pbVar27 - (long)pbVar22;
          pbVar21 = pbVar22;
          do {
            uVar14 = (ulong)uVar23;
            pvVar2 = (void *)((ulong)&local_88 | 1);
            if (((ulong)local_88 & 1) != 0) {
              pvVar2 = local_78;
            }
            if (*(char *)((long)pvVar2 + uVar14) != '\0') {
              pvVar2 = (void *)((ulong)&local_88 | 1);
              if (((ulong)local_88 & 1) != 0) {
                pvVar2 = local_78;
              }
              if (uVar24 == *(byte *)((long)pvVar2 + uVar14)) {
                puVar11 = (undefined4 *)*param_6;
                uVar24 = 0;
                *puVar11 = uVar8;
                *param_6 = (ulong)(puVar11 + 1);
                uVar3 = (ulong)local_88 >> 1 & 0x7f;
                if (((ulong)local_88 & 1) != 0) {
                  uVar3 = local_80;
                }
                if (uVar14 < uVar3 - 1) {
                  uVar23 = uVar23 + 1;
                }
              }
            }
                    /* try { // try from 00726c10 to 00726c17 has its CatchHandler @ 00726dfc */
            uVar10 = (**(code **)(*plVar26 + 0x58))(plVar26,*pbVar21);
            puVar11 = (undefined4 *)*param_6;
            lVar20 = lVar20 + -1;
            uVar24 = uVar24 + 1;
            pbVar21 = pbVar21 + 1;
            *puVar11 = uVar10;
            *param_6 = (ulong)(puVar11 + 1);
          } while (lVar20 != 0);
          puVar11 = puVar11 + 1;
        }
        else {
          puVar11 = (undefined4 *)*param_6;
        }
        puVar1 = (undefined4 *)(param_4 + ((long)pbVar22 - (long)param_1) * 4);
        if ((puVar1 != puVar11) && (puVar1 < puVar11 + -1)) {
          puVar15 = puVar11 + -1;
          puVar1 = (undefined4 *)(param_4 + (long)param_1 * -4 + (long)pbVar22 * 4);
          do {
            puVar18 = puVar1 + 1;
            uVar8 = *puVar1;
            *puVar1 = *puVar15;
            puVar16 = puVar15 + -1;
            *puVar15 = uVar8;
            puVar15 = puVar16;
            puVar1 = puVar18;
          } while (puVar18 < puVar16);
        }
      }
      if (pbVar27 < param_3) {
        lVar20 = (long)param_3 - (long)pbVar27;
        pbVar21 = pbVar27;
        do {
          pbVar27 = pbVar21 + 1;
          if (*pbVar21 == 0x2e) {
                    /* try { // try from 00726d28 to 00726d4f has its CatchHandler @ 00726df4 */
            uVar8 = (**(code **)(*plVar19 + 0x18))(plVar19);
            puVar11 = (undefined4 *)*param_6 + 1;
            *(undefined4 *)*param_6 = uVar8;
            *param_6 = (ulong)puVar11;
            goto LAB_00726d38;
          }
                    /* try { // try from 00726cec to 00726cf3 has its CatchHandler @ 00726df8 */
          uVar8 = (**(code **)(*plVar26 + 0x58))(plVar26);
          puVar11 = (undefined4 *)*param_6;
          lVar20 = lVar20 + -1;
          *puVar11 = uVar8;
          *param_6 = (ulong)(puVar11 + 1);
          pbVar21 = pbVar27;
        } while (lVar20 != 0);
        puVar11 = puVar11 + 1;
        pbVar27 = param_3;
      }
LAB_00726d38:
      (**(code **)(*plVar26 + 0x60))(plVar26,pbVar27,param_3,puVar11);
      uVar14 = *param_6 + ((long)param_3 - (long)pbVar27) * 4;
      *param_6 = uVar14;
      if (param_2 != param_3) {
        uVar14 = param_4 + ((long)param_2 - (long)param_1) * 4;
      }
      *param_5 = uVar14;
      if (((ulong)local_88 & 1) != 0) {
        free(local_78);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_007191ac();
}


// ===== 00726e18  FUN_00726e18 =====

/* WARNING: Type propagation algorithm not settling */

long * FUN_00726e18(long *param_1,long *param_2,long *param_3,undefined8 param_4,uint *param_5,
                   undefined8 param_6,char *param_7,char *param_8)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  char *pcVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  char *pcVar14;
  long *plVar15;
  long *plVar16;
  long local_80;
  undefined *local_78;
  undefined ***local_70;
  undefined **local_68;
  
  FUN_00715df0(&local_80,param_4);
  puVar2 = PTR_DAT_007a1108;
  local_78 = PTR_DAT_007a1108;
  if (*(long *)PTR_DAT_007a1108 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
                    /* try { // try from 00726e94 to 00726eab has its CatchHandler @ 007272dc */
    FUN_00710f84(PTR_DAT_007a1108,&local_70,FUN_007374a0);
  }
  if (((ulong)(*(long *)(local_80 + 0x18) - *(long *)(local_80 + 0x10) >> 3) <=
       (long)*(int *)(puVar2 + 8) - 1U) ||
     (plVar16 = *(long **)(*(long *)(local_80 + 0x10) + ((long)*(int *)(puVar2 + 8) - 1U) * 8),
     plVar16 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007272d8 to 007272db has its CatchHandler @ 007272dc */
    FUN_007191ac();
  }
  FUN_00732094(&local_80);
  *param_5 = 0;
  plVar15 = param_3;
  if (param_7 != param_8) {
    while (param_2 != (long *)0x0) {
      if (param_2[3] == param_2[4]) {
        iVar10 = (**(code **)(*param_2 + 0x48))(param_2);
        bVar5 = iVar10 == -1;
        plVar3 = (long *)0x0;
        if (!bVar5) {
          plVar3 = param_2;
        }
        goto joined_r0x00726f38;
      }
      bVar5 = false;
      if (plVar15 != (long *)0x0) goto LAB_00726ef8;
joined_r0x00726f04:
      param_3 = plVar15;
      if (bVar5 == false) goto LAB_0072721c;
LAB_00726f64:
      cVar6 = (**(code **)(*plVar16 + 0x48))(plVar16,*param_7,0);
      if (cVar6 == '%') {
        plVar15 = param_3;
        if (param_7 + 1 == param_8) goto LAB_0072721c;
        uVar8 = (**(code **)(*plVar16 + 0x48))(plVar16,param_7[1],0);
        if (((uVar8 & 0xff) == 0x45) || ((uVar8 & 0xff) == 0x30)) {
          if (param_7 + 2 == param_8) goto LAB_0072721c;
          uVar9 = (**(code **)(*plVar16 + 0x48))(plVar16,param_7[2],0);
          lVar12 = 2;
          uVar11 = uVar8;
        }
        else {
          uVar11 = 0;
          lVar12 = 1;
          uVar9 = uVar8;
        }
        param_7 = param_7 + lVar12;
        param_2 = (long *)(**(code **)(*param_1 + 0x48))
                                    (param_1,param_2,param_3,param_4,param_5,param_6,uVar9,uVar11);
LAB_00727058:
        param_7 = param_7 + 1;
      }
      else {
        if ((-1 < (long)*param_7) &&
           (pcVar14 = param_7, (*(ulong *)(plVar16[2] + (long)*param_7 * 8) & 1) != 0)) {
          do {
            pcVar14 = pcVar14 + 1;
            pcVar4 = param_8;
            if (pcVar14 == param_8) goto joined_r0x00727128;
            pcVar4 = pcVar14;
            if ((long)*pcVar14 < 0) goto joined_r0x00727128;
            param_7 = param_7 + 1;
          } while ((*(ulong *)(plVar16[2] + (long)*pcVar14 * 8) & 1) != 0);
LAB_00727138:
          if (param_2 == (long *)0x0) goto LAB_00727210;
LAB_0072713c:
          if (param_2[3] == param_2[4]) {
            iVar10 = (**(code **)(*param_2 + 0x48))(param_2);
            bVar5 = iVar10 == -1;
            plVar15 = (long *)0x0;
            if (!bVar5) {
              plVar15 = param_2;
            }
          }
          else {
            bVar5 = false;
            plVar15 = param_2;
          }
          param_2 = plVar15;
          plVar15 = param_3;
          if (param_3 == (long *)0x0) goto LAB_007271b0;
          do {
            param_3 = plVar15;
            if (plVar15[3] == plVar15[4]) {
              iVar10 = (**(code **)(*plVar15 + 0x48))(plVar15);
              param_3 = (long *)0x0;
              if (iVar10 != -1) {
                param_3 = plVar15;
              }
              if (bVar5 == (iVar10 == -1)) goto LAB_007270f0;
            }
            else if (bVar5 == false) goto LAB_007270f0;
            while( true ) {
              if ((byte *)param_2[3] == (byte *)param_2[4]) {
                uVar13 = (**(code **)(*param_2 + 0x48))(param_2);
                uVar13 = uVar13 & 0xff;
                if ((uint)uVar13 >> 7 != 0) goto LAB_007270f0;
              }
              else {
                bVar1 = *(byte *)param_2[3];
                uVar13 = (ulong)bVar1;
                if ((char)bVar1 < '\0') goto LAB_007270f0;
              }
              if ((*(ulong *)(plVar16[2] + uVar13 * 8) & 1) == 0) goto LAB_007270f0;
              if (param_2[3] != param_2[4]) {
                param_2[3] = param_2[3] + 1;
                goto LAB_00727138;
              }
              (**(code **)(*param_2 + 0x50))(param_2);
              pcVar4 = param_7;
joined_r0x00727128:
              param_7 = pcVar4;
              if (param_2 != (long *)0x0) goto LAB_0072713c;
LAB_00727210:
              bVar5 = true;
              plVar15 = param_3;
              if (param_3 != (long *)0x0) break;
LAB_007271b0:
              if (bVar5 != false) goto LAB_007270f0;
            }
          } while( true );
        }
        if ((byte *)param_2[3] == (byte *)param_2[4]) {
          uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        else {
          uVar8 = (uint)*(byte *)param_2[3];
        }
        cVar6 = (**(code **)(*plVar16 + 0x18))(plVar16,uVar8);
        cVar7 = (**(code **)(*plVar16 + 0x18))(plVar16,*param_7);
        if (cVar6 == cVar7) {
          if (param_2[3] == param_2[4]) {
            (**(code **)(*param_2 + 0x50))(param_2);
            goto LAB_00727058;
          }
          param_7 = param_7 + 1;
          param_2[3] = param_2[3] + 1;
        }
        else {
          *param_5 = 4;
        }
      }
LAB_007270f0:
      if ((param_7 == param_8) || (plVar15 = param_3, *param_5 != 0)) goto LAB_00727224;
    }
    bVar5 = true;
    plVar3 = param_2;
joined_r0x00726f38:
    param_2 = plVar3;
    if (plVar15 == (long *)0x0) goto joined_r0x00726f04;
LAB_00726ef8:
    if (plVar15[3] != plVar15[4]) goto joined_r0x00726f04;
    iVar10 = (**(code **)(*plVar15 + 0x48))(plVar15);
    param_3 = (long *)0x0;
    if (iVar10 != -1) {
      param_3 = plVar15;
    }
    plVar15 = param_3;
    if (bVar5 != (iVar10 == -1)) goto LAB_00726f64;
LAB_0072721c:
    *param_5 = 4;
    param_3 = plVar15;
  }
LAB_00727224:
  plVar16 = param_2;
  if (param_2 == (long *)0x0) {
    bVar5 = true;
  }
  else if (param_2[3] == param_2[4]) {
    iVar10 = (**(code **)(*param_2 + 0x48))(param_2);
    bVar5 = iVar10 == -1;
    plVar16 = (long *)0x0;
    if (!bVar5) {
      plVar16 = param_2;
    }
  }
  else {
    bVar5 = false;
  }
  if (param_3 == (long *)0x0) {
    if (bVar5 == false) {
      return plVar16;
    }
  }
  else if (param_3[3] == param_3[4]) {
    iVar10 = (**(code **)(*param_3 + 0x48))(param_3);
    if (bVar5 != (iVar10 == -1)) {
      return plVar16;
    }
  }
  else if (bVar5 != false) {
    return plVar16;
  }
  *param_5 = *param_5 | 2;
  return plVar16;
}


// ===== 007272f0  FUN_007272f0 =====

undefined8 FUN_007272f0(void)

{
  return 2;
}


// ===== 007272fc  FUN_007272fc =====

void FUN_007272fc(void)

{
  FUN_00726e18();
  return;
}


// ===== 00727340  FUN_00727340 =====

void FUN_00727340(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)(**(code **)(*(long *)(param_1 + 0x10) + 0x28))();
  uVar1 = *(ulong *)(pbVar3 + 8);
  pbVar2 = *(byte **)(pbVar3 + 0x10);
  if ((*pbVar3 & 1) == 0) {
    pbVar2 = pbVar3 + 1;
    uVar1 = (ulong)(*pbVar3 >> 1);
  }
  FUN_00726e18(param_1,param_2,param_3,param_4,param_5,param_6,pbVar2,pbVar2 + uVar1);
  return;
}


// ===== 007273cc  FUN_007273cc =====

undefined8
FUN_007273cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,long param_6)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 **local_50;
  undefined **local_48;
  
  local_60 = param_2;
  FUN_00715df0(&local_68,param_4);
  puVar2 = PTR_DAT_007a1108;
  local_58 = PTR_DAT_007a1108;
  if (*(long *)PTR_DAT_007a1108 != -1) {
    local_48 = &local_58;
    local_50 = &local_48;
                    /* try { // try from 00727430 to 00727447 has its CatchHandler @ 00727510 */
    FUN_00710f84(PTR_DAT_007a1108,&local_50,FUN_007374a0);
  }
  if (((long)*(int *)(puVar2 + 8) - 1U <
       (ulong)(*(long *)(local_68 + 0x18) - *(long *)(local_68 + 0x10) >> 3)) &&
     (lVar4 = *(long *)(*(long *)(local_68 + 0x10) + ((long)*(int *)(puVar2 + 8) - 1U) * 8),
     lVar4 != 0)) {
    FUN_00732094(&local_68);
    lVar3 = (*(code *)**(undefined8 **)(param_1 + 0x10))((undefined8 *)(param_1 + 0x10));
    lVar4 = FUN_0071bb64(&local_60,param_3,lVar3,lVar3 + 0x150,lVar4,param_5,0);
    if (lVar4 - lVar3 < 0x150) {
      lVar4 = (lVar4 - lVar3 >> 3) * -0x5555555555555555;
      auVar1 = SEXT816(lVar4) * SEXT816(0x4924924924924925);
      *(int *)(param_6 + 0x18) =
           (int)lVar4 + ((int)(auVar1._8_8_ >> 1) - (auVar1._12_4_ >> 0x1f)) * -7;
    }
    return local_60;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0072750c to 0072750f has its CatchHandler @ 00727510 */
  FUN_007191ac();
}


// ===== 00727524  FUN_00727524 =====

undefined8
FUN_00727524(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 **local_50;
  undefined **local_48;
  
  local_60 = param_2;
  FUN_00715df0(&local_68,param_4);
  puVar1 = PTR_DAT_007a1108;
  local_58 = PTR_DAT_007a1108;
  if (*(long *)PTR_DAT_007a1108 != -1) {
    local_48 = &local_58;
    local_50 = &local_48;
                    /* try { // try from 00727588 to 0072759f has its CatchHandler @ 00727660 */
    FUN_00710f84(PTR_DAT_007a1108,&local_50,FUN_007374a0);
  }
  if (((long)*(int *)(puVar1 + 8) - 1U <
       (ulong)(*(long *)(local_68 + 0x18) - *(long *)(local_68 + 0x10) >> 3)) &&
     (lVar3 = *(long *)(*(long *)(local_68 + 0x10) + ((long)*(int *)(puVar1 + 8) - 1U) * 8),
     lVar3 != 0)) {
    FUN_00732094(&local_68);
    lVar2 = (**(code **)(*(long *)(param_1 + 0x10) + 8))((long *)(param_1 + 0x10));
    lVar3 = FUN_0071bb64(&local_60,param_3,lVar2,lVar2 + 0x240,lVar3,param_5,0);
    if (lVar3 - lVar2 < 0x240) {
      lVar3 = (lVar3 - lVar2 >> 3) * -0x5555555555555555;
      *(int *)(param_6 + 0x10) =
           (int)lVar3 +
           ((int)((ulong)(lVar3 / 6 + (lVar3 >> 0x3f)) >> 1) -
           (SUB164(SEXT816(lVar3) * SEXT816(0x2aaaaaaaaaaaaaab),0xc) >> 0x1f)) * -0xc;
    }
    return local_60;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0072765c to 0072765f has its CatchHandler @ 00727660 */
  FUN_007191ac();
}


// ===== 00727674  FUN_00727674 =====

undefined8
FUN_00727674(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            byte *param_5,long param_6)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 **local_48;
  undefined **local_28;
  
  local_58 = param_2;
  FUN_00715df0(&local_60,param_4);
  puVar3 = PTR_DAT_007a1108;
  local_50 = PTR_DAT_007a1108;
  if (*(long *)PTR_DAT_007a1108 != -1) {
    local_28 = &local_50;
    local_48 = &local_28;
                    /* try { // try from 007276d8 to 007276ef has its CatchHandler @ 0072777c */
    FUN_00710f84(PTR_DAT_007a1108,&local_48,FUN_007374a0);
  }
  if (((long)*(int *)(puVar3 + 8) - 1U <
       (ulong)(*(long *)(local_60 + 0x18) - *(long *)(local_60 + 0x10) >> 3)) &&
     (lVar5 = *(long *)(*(long *)(local_60 + 0x10) + ((long)*(int *)(puVar3 + 8) - 1U) * 8),
     lVar5 != 0)) {
    FUN_00732094(&local_60);
    uVar4 = FUN_007281e4(&local_58,param_3,param_5,lVar5,4);
    if ((*param_5 >> 2 & 1) == 0) {
      uVar1 = uVar4 + 0x76c;
      if (99 < uVar4) {
        uVar1 = uVar4;
      }
      uVar2 = uVar4 + 2000;
      if (0x44 < (int)uVar4) {
        uVar2 = uVar1;
      }
      *(uint *)(param_6 + 0x14) = uVar2 - 0x76c;
    }
    return local_58;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00727778 to 0072777b has its CatchHandler @ 0072777c */
  FUN_007191ac();
}


// ===== 00727790  FUN_00727790 =====

undefined8
FUN_00727790(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint *param_5,
            int *param_6,undefined1 param_7)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  code *pcVar13;
  long lVar14;
  undefined4 local_80;
  char cStack_7c;
  undefined2 uStack_7b;
  char cStack_79;
  undefined3 uStack_78;
  byte abStack_75 [5];
  long local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined1 *local_58;
  
  pbVar11 = (byte *)&local_80;
  *param_5 = 0;
  local_68 = param_2;
  FUN_00715df0(&local_70,param_4);
  puVar6 = PTR_DAT_007a1108;
  local_60 = PTR_DAT_007a1108;
  if (*(long *)PTR_DAT_007a1108 != -1) {
    local_80 = SUB84(&local_60,0);
    cStack_7c = (char)((ulong)&local_60 >> 0x20);
    uStack_7b = (undefined2)((ulong)&local_60 >> 0x28);
    cStack_79 = (char)((ulong)&local_60 >> 0x38);
                    /* try { // try from 00727808 to 0072781f has its CatchHandler @ 00727dfc */
    local_58 = (undefined1 *)&local_80;
    FUN_00710f84(PTR_DAT_007a1108,&local_58,FUN_007374a0);
  }
  if (((ulong)(*(long *)(local_70 + 0x18) - *(long *)(local_70 + 0x10) >> 3) <=
       (long)*(int *)(puVar6 + 8) - 1U) ||
     (lVar14 = *(long *)(*(long *)(local_70 + 0x10) + ((long)*(int *)(puVar6 + 8) - 1U) * 8),
     lVar14 == 0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00727df8 to 00727dfb has its CatchHandler @ 00727dfc */
    FUN_007191ac();
  }
  FUN_00732094(&local_70);
  switch(param_7) {
  case 0x25:
    FUN_00727ff8(param_1,&local_68,param_3,param_5,lVar14);
    return local_68;
  default:
    goto code_r0x00727d30;
  case 0x41:
  case 0x61:
    lVar9 = (**(code **)param_1[2])(param_1 + 2);
    lVar14 = FUN_0071bb64(&local_68,param_3,lVar9,lVar9 + 0x150,lVar14,param_5,0);
    if (0x14f < lVar14 - lVar9) {
      return local_68;
    }
    lVar14 = (lVar14 - lVar9 >> 3) * -0x5555555555555555;
    auVar5 = SEXT816(lVar14) * SEXT816(0x4924924924924925);
    param_6[6] = (int)lVar14 + ((int)(auVar5._8_8_ >> 1) - (auVar5._12_4_ >> 0x1f)) * -7;
    return local_68;
  case 0x42:
  case 0x62:
  case 0x68:
    lVar9 = (**(code **)(param_1[2] + 8))(param_1 + 2);
    lVar14 = FUN_0071bb64(&local_68,param_3,lVar9,lVar9 + 0x240,lVar14,param_5,0);
    if (0x23f < lVar14 - lVar9) {
      return local_68;
    }
    lVar14 = (lVar14 - lVar9 >> 3) * -0x5555555555555555;
    param_6[4] = (int)lVar14 +
                 ((int)((ulong)(lVar14 / 6 + (lVar14 >> 0x3f)) >> 1) -
                 (SUB164(SEXT816(lVar14) * SEXT816(0x2aaaaaaaaaaaaaab),0xc) >> 0x1f)) * -0xc;
    return local_68;
  case 0x44:
    uVar10 = 0x79252f64252f6d25;
    goto LAB_00727c0c;
  case 0x46:
    uVar10 = 0x64252d6d252d5925;
    goto LAB_00727c0c;
  case 0x48:
    iVar8 = FUN_007281e4(&local_68,param_3,param_5,lVar14,2);
    uVar7 = *param_5;
    if (0x17 < iVar8) break;
    goto LAB_00727b98;
  case 0x49:
    iVar8 = FUN_007281e4(&local_68,param_3,param_5,lVar14,2);
    uVar7 = *param_5;
    if (0xb < iVar8 - 1U) break;
LAB_00727b98:
    if ((uVar7 >> 2 & 1) == 0) {
      param_6[2] = iVar8;
      return local_68;
    }
    break;
  case 0x4d:
    iVar8 = FUN_007281e4(&local_68,param_3,param_5,lVar14,2);
    uVar7 = *param_5;
    if ((iVar8 < 0x3c) && ((uVar7 >> 2 & 1) == 0)) {
      param_6[1] = iVar8;
      return local_68;
    }
    break;
  case 0x52:
    cStack_7c = 'M';
    local_80 = 0x253a4825;
    pbVar12 = (byte *)&uStack_7b;
    goto LAB_00727c20;
  case 0x53:
    iVar8 = FUN_007281e4(&local_68,param_3,param_5,lVar14,2);
    uVar7 = *param_5;
    if ((iVar8 < 0x3d) && ((uVar7 >> 2 & 1) == 0)) {
      *param_6 = iVar8;
      return local_68;
    }
    break;
  case 0x54:
    uVar10 = 0x53253a4d253a4825;
LAB_00727c0c:
    local_80 = (undefined4)uVar10;
    cStack_7c = (char)((ulong)uVar10 >> 0x20);
    uStack_7b = (undefined2)((ulong)uVar10 >> 0x28);
    cStack_79 = (char)((ulong)uVar10 >> 0x38);
    pbVar12 = (byte *)&uStack_78;
    pbVar11 = (byte *)&local_80;
LAB_00727c20:
    uVar10 = FUN_00726e18(param_1,local_68,param_3,param_4,param_5,param_6,pbVar11,pbVar12);
    return uVar10;
  case 0x58:
    pcVar13 = *(code **)(param_1[2] + 0x30);
    goto LAB_00727a84;
  case 0x59:
    iVar8 = FUN_007281e4(&local_68,param_3,param_5,lVar14,4);
    if (((byte)*param_5 >> 2 & 1) != 0) {
      return local_68;
    }
    param_6[5] = iVar8 + -0x76c;
    return local_68;
  case 99:
    pcVar13 = *(code **)(param_1[2] + 0x18);
LAB_00727a84:
    pbVar12 = (byte *)(*pcVar13)();
    uVar4 = *(ulong *)(pbVar12 + 8);
    pbVar11 = *(byte **)(pbVar12 + 0x10);
    if ((*pbVar12 & 1) == 0) {
      pbVar11 = pbVar12 + 1;
      uVar4 = (ulong)(*pbVar12 >> 1);
    }
    pbVar12 = pbVar11 + uVar4;
    goto LAB_00727c20;
  case 100:
  case 0x65:
    iVar8 = FUN_007281e4(&local_68,param_3,param_5,lVar14,2);
    uVar7 = *param_5;
    if ((iVar8 - 1U < 0x1f) && ((uVar7 >> 2 & 1) == 0)) {
      param_6[3] = iVar8;
      return local_68;
    }
    break;
  case 0x6a:
    iVar8 = FUN_007281e4(&local_68,param_3,param_5,lVar14,3);
    uVar7 = *param_5;
    if ((iVar8 < 0x16e) && ((uVar7 >> 2 & 1) == 0)) {
      param_6[7] = iVar8;
      return local_68;
    }
    break;
  case 0x6d:
    iVar8 = FUN_007281e4(&local_68,param_3,param_5,lVar14,2);
    uVar7 = *param_5;
    if ((iVar8 - 1U < 0xc) && ((uVar7 >> 2 & 1) == 0)) {
      param_6[4] = iVar8 - 1U;
      return local_68;
    }
    break;
  case 0x6e:
  case 0x74:
    FUN_00727e10(param_1,&local_68,param_3,param_5,lVar14);
    return local_68;
  case 0x70:
    pbVar11 = (byte *)(**(code **)(param_1[2] + 0x10))(param_1 + 2);
    uVar4 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      uVar4 = *(ulong *)(pbVar11 + 8);
    }
    uVar3 = (ulong)(pbVar11[0x18] >> 1);
    if ((pbVar11[0x18] & 1) != 0) {
      uVar3 = *(ulong *)(pbVar11 + 0x20);
    }
    if (uVar4 + uVar3 != 0) {
      pbVar12 = (byte *)FUN_0071bb64(&local_68,param_3,pbVar11,pbVar11 + 0x30,lVar14,param_5,0);
      iVar8 = param_6[2];
      if ((pbVar12 == pbVar11) && (iVar8 == 0xc)) {
        param_6[2] = 0;
        return local_68;
      }
      if ((long)pbVar12 - (long)pbVar11 != 0x18) {
        return local_68;
      }
      if (0xb < iVar8) {
        return local_68;
      }
      param_6[2] = iVar8 + 0xc;
      return local_68;
    }
    goto code_r0x00727d30;
  case 0x72:
    local_80 = (undefined4)s__I__M__S__p_0021249f._0_8_;
    cStack_7c = SUB81(s__I__M__S__p_0021249f._0_8_,4);
    uStack_7b = SUB82(s__I__M__S__p_0021249f._0_8_,5);
    cStack_79 = SUB81(s__I__M__S__p_0021249f._0_8_,7);
    _cStack_79 = CONCAT31(0x702520,cStack_79);
    pbVar12 = abStack_75;
    pbVar11 = (byte *)&local_80;
    goto LAB_00727c20;
  case 0x77:
    iVar8 = FUN_007281e4(&local_68,param_3,param_5,lVar14,1);
    uVar7 = *param_5;
    if ((iVar8 < 7) && ((uVar7 >> 2 & 1) == 0)) {
      param_6[6] = iVar8;
      return local_68;
    }
    break;
  case 0x78:
    uVar10 = (**(code **)(*param_1 + 0x28))(param_1,local_68,param_3,param_4,param_5,param_6);
    return uVar10;
  case 0x79:
    uVar7 = FUN_007281e4(&local_68,param_3,param_5,lVar14,4);
    if (((byte)*param_5 >> 2 & 1) != 0) {
      return local_68;
    }
    uVar1 = uVar7 + 0x76c;
    if (99 < uVar7) {
      uVar1 = uVar7;
    }
    uVar2 = uVar7 + 2000;
    if (0x44 < (int)uVar7) {
      uVar2 = uVar1;
    }
    param_6[5] = uVar2 - 0x76c;
    return local_68;
  }
LAB_00727d38:
  *param_5 = uVar7 | 4;
  return local_68;
code_r0x00727d30:
  uVar7 = *param_5;
  goto LAB_00727d38;
}


// ===== 00727e10  FUN_00727e10 =====

void FUN_00727e10(undefined8 param_1,long *param_2,long *param_3,uint *param_4,long param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar4 = (long *)*param_2;
  if (plVar4 != (long *)0x0) goto LAB_00727e54;
LAB_00727ea0:
  bVar2 = true;
  plVar6 = param_3;
  if (param_3 == (long *)0x0) goto joined_r0x00727eb4;
LAB_00727ea8:
  param_3 = plVar6;
  if (plVar6[3] != plVar6[4]) goto joined_r0x00727eb4;
  iVar3 = (**(code **)(*plVar6 + 0x48))(plVar6);
  plVar4 = (long *)*param_2;
  param_3 = (long *)0x0;
  if (iVar3 != -1) {
    param_3 = plVar6;
  }
  if (bVar2 != (iVar3 == -1)) {
    do {
      if ((byte *)plVar4[3] == (byte *)plVar4[4]) {
        uVar5 = (**(code **)(*plVar4 + 0x48))();
        uVar5 = uVar5 & 0xff;
        if ((uint)uVar5 >> 7 != 0) goto LAB_00727f48;
      }
      else {
        bVar1 = *(byte *)plVar4[3];
        uVar5 = (ulong)bVar1;
        if ((char)bVar1 < '\0') {
LAB_00727f48:
          plVar4 = (long *)*param_2;
          break;
        }
      }
      plVar4 = (long *)*param_2;
      if ((*(ulong *)(*(long *)(param_5 + 0x10) + uVar5 * 8) & 1) == 0) break;
      if (plVar4[3] == plVar4[4]) {
        (**(code **)(*plVar4 + 0x50))();
        plVar4 = (long *)*param_2;
      }
      else {
        plVar4[3] = plVar4[3] + 1;
        plVar4 = (long *)*param_2;
      }
      if (plVar4 == (long *)0x0) goto LAB_00727ea0;
LAB_00727e54:
      if (plVar4[3] == plVar4[4]) {
        iVar3 = (**(code **)(*plVar4 + 0x48))();
        if (iVar3 == -1) {
          plVar4 = (long *)0x0;
          *param_2 = 0;
          goto LAB_00727ea0;
        }
        plVar4 = (long *)*param_2;
        bVar2 = plVar4 == (long *)0x0;
      }
      else {
        bVar2 = false;
      }
      plVar6 = param_3;
      if (param_3 != (long *)0x0) goto LAB_00727ea8;
joined_r0x00727eb4:
      if (bVar2 == false) break;
    } while( true );
  }
  if (plVar4 != (long *)0x0) {
    if (plVar4[3] != plVar4[4]) {
      bVar2 = false;
      goto joined_r0x00727f9c;
    }
    iVar3 = (**(code **)(*plVar4 + 0x48))();
    if (iVar3 != -1) {
      bVar2 = *param_2 == 0;
      goto joined_r0x00727f9c;
    }
    *param_2 = 0;
  }
  bVar2 = true;
joined_r0x00727f9c:
  if (param_3 == (long *)0x0) {
    if (bVar2 == false) {
      return;
    }
  }
  else if (param_3[3] == param_3[4]) {
    iVar3 = (**(code **)(*param_3 + 0x48))(param_3);
    if (bVar2 != (iVar3 == -1)) {
      return;
    }
  }
  else if (bVar2 != false) {
    return;
  }
  *param_4 = *param_4 | 2;
  return;
}


// ===== 00727ff8  FUN_00727ff8 =====

void FUN_00727ff8(undefined8 param_1,long *param_2,long *param_3,uint *param_4,long *param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  
  plVar4 = (long *)*param_2;
  if (plVar4 == (long *)0x0) {
LAB_00728074:
    bVar1 = true;
    if (param_3 == (long *)0x0) goto LAB_0072803c;
LAB_0072807c:
    if (param_3[3] == param_3[4]) {
      iVar3 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar4 = (long *)0x0;
      if (iVar3 != -1) {
        plVar4 = param_3;
      }
      if (bVar1 == (iVar3 == -1)) {
LAB_007280c8:
        uVar6 = 6;
        goto LAB_007281c0;
      }
    }
    else {
      plVar4 = param_3;
      if (bVar1 == false) goto LAB_007280c8;
    }
  }
  else {
    if (plVar4[3] == plVar4[4]) {
      iVar3 = (**(code **)(*plVar4 + 0x48))();
      if (iVar3 == -1) {
        *param_2 = 0;
        goto LAB_00728074;
      }
      bVar1 = *param_2 == 0;
    }
    else {
      bVar1 = false;
    }
    if (param_3 != (long *)0x0) goto LAB_0072807c;
LAB_0072803c:
    if (bVar1 != false) goto LAB_007280c8;
    plVar4 = (long *)0x0;
  }
  plVar5 = (long *)*param_2;
  if ((byte *)plVar5[3] == (byte *)plVar5[4]) {
    uVar6 = (**(code **)(*plVar5 + 0x48))();
  }
  else {
    uVar6 = (uint)*(byte *)plVar5[3];
  }
  cVar2 = (**(code **)(*param_5 + 0x48))(param_5,uVar6,0);
  if (cVar2 != '%') {
    uVar6 = 4;
    goto LAB_007281c0;
  }
  plVar5 = (long *)*param_2;
  if (plVar5[3] == plVar5[4]) {
    (**(code **)(*plVar5 + 0x50))();
    plVar5 = (long *)*param_2;
    if (plVar5 != (long *)0x0) goto LAB_00728138;
LAB_007281b0:
    bVar1 = true;
    if (plVar4 != (long *)0x0) goto LAB_0072814c;
LAB_007281b8:
    if (bVar1 == false) {
      return;
    }
  }
  else {
    plVar5[3] = plVar5[3] + 1;
LAB_00728138:
    if (plVar5[3] == plVar5[4]) {
      iVar3 = (**(code **)(*plVar5 + 0x48))();
      if (iVar3 == -1) {
        *param_2 = 0;
        goto LAB_007281b0;
      }
      bVar1 = *param_2 == 0;
    }
    else {
      bVar1 = false;
    }
    if (plVar4 == (long *)0x0) goto LAB_007281b8;
LAB_0072814c:
    if (plVar4[3] == plVar4[4]) {
      iVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);
      if (bVar1 != (iVar3 == -1)) {
        return;
      }
    }
    else if (bVar1 != false) {
      return;
    }
  }
  uVar6 = 2;
LAB_007281c0:
  *param_4 = *param_4 | uVar6;
  return;
}


// ===== 007281e4  FUN_007281e4 =====

int FUN_007281e4(long *param_1,long *param_2,uint *param_3,long *param_4,int param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  
  plVar7 = (long *)*param_1;
  if (plVar7 == (long *)0x0) {
LAB_00728268:
    bVar3 = true;
    if (param_2 == (long *)0x0) goto LAB_00728258;
LAB_00728270:
    if (param_2[3] == param_2[4]) {
      iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
      plVar7 = (long *)0x0;
      if (iVar5 != -1) {
        plVar7 = param_2;
      }
      if (bVar3 == (iVar5 == -1)) {
LAB_007282c0:
        iVar5 = 0;
        uVar4 = 6;
        goto LAB_007282f8;
      }
    }
    else {
      plVar7 = param_2;
      if (bVar3 == false) goto LAB_007282c0;
    }
  }
  else {
    if (plVar7[3] == plVar7[4]) {
      iVar5 = (**(code **)(*plVar7 + 0x48))();
      if (iVar5 == -1) {
        *param_1 = 0;
        goto LAB_00728268;
      }
      bVar3 = *param_1 == 0;
    }
    else {
      bVar3 = false;
    }
    if (param_2 != (long *)0x0) goto LAB_00728270;
LAB_00728258:
    if (bVar3 != false) goto LAB_007282c0;
    plVar7 = (long *)0x0;
  }
  plVar8 = (long *)*param_1;
  if ((byte *)plVar8[3] == (byte *)plVar8[4]) {
    uVar10 = (**(code **)(*plVar8 + 0x48))();
    uVar11 = uVar10 & 0xffffffff;
    if (((uint)uVar10 >> 7 & 1) == 0) goto LAB_007282e0;
  }
  else {
    bVar1 = *(byte *)plVar8[3];
    uVar11 = (ulong)bVar1;
    if (-1 < (char)bVar1) {
LAB_007282e0:
      if (((uint)*(undefined8 *)(param_4[2] + (uVar11 & 0xff) * 8) >> 6 & 1) != 0) {
        uVar4 = (**(code **)(*param_4 + 0x48))(param_4,uVar11,0);
        plVar8 = (long *)*param_1;
        uVar4 = uVar4 & 0xff;
        if (plVar8[3] == plVar8[4]) {
          (**(code **)(*plVar8 + 0x50))();
        }
        else {
          plVar8[3] = plVar8[3] + 1;
        }
        do {
          plVar9 = (long *)*param_1;
          plVar8 = plVar7;
          if (plVar9 == (long *)0x0) {
LAB_007283dc:
            bVar3 = true;
            if (plVar7 == (long *)0x0) goto LAB_007283d0;
LAB_007283e4:
            if (plVar7[3] == plVar7[4]) {
              iVar5 = (**(code **)(*plVar7 + 0x48))(plVar7);
              bVar2 = iVar5 == -1;
              plVar8 = (long *)0x0;
              if (!bVar2) {
                plVar8 = plVar7;
              }
            }
            else {
              bVar2 = false;
            }
          }
          else {
            if (plVar9[3] == plVar9[4]) {
              iVar5 = (**(code **)(*plVar9 + 0x48))();
              if (iVar5 == -1) {
                *param_1 = 0;
                goto LAB_007283dc;
              }
              bVar3 = *param_1 == 0;
            }
            else {
              bVar3 = false;
            }
            if (plVar7 != (long *)0x0) goto LAB_007283e4;
LAB_007283d0:
            bVar2 = true;
          }
          plVar7 = (long *)*param_1;
          iVar5 = uVar4 - 0x30;
          if ((bVar3 == bVar2) || (param_5 < 2)) {
            if (plVar7 == (long *)0x0) {
LAB_007284dc:
              bVar3 = true;
            }
            else if (plVar7[3] == plVar7[4]) {
              iVar6 = (**(code **)(*plVar7 + 0x48))();
              if (iVar6 == -1) {
                *param_1 = 0;
                goto LAB_007284dc;
              }
              bVar3 = *param_1 == 0;
            }
            else {
              bVar3 = false;
            }
            if (plVar8 == (long *)0x0) {
              if (bVar3 == false) {
                return iVar5;
              }
            }
            else if (plVar8[3] == plVar8[4]) {
              iVar6 = (**(code **)(*plVar8 + 0x48))(plVar8);
              if (bVar3 != (iVar6 == -1)) {
                return iVar5;
              }
            }
            else if (bVar3 != false) {
              return iVar5;
            }
            uVar4 = 2;
            goto LAB_007282f8;
          }
          if ((byte *)plVar7[3] == (byte *)plVar7[4]) {
            uVar10 = (**(code **)(*plVar7 + 0x48))();
            uVar11 = uVar10 & 0xffffffff;
            if (((uint)uVar10 >> 7 & 1) != 0) {
              return iVar5;
            }
          }
          else {
            bVar1 = *(byte *)plVar7[3];
            uVar11 = (ulong)bVar1;
            if ((char)bVar1 < '\0') {
              return iVar5;
            }
          }
          if (((uint)*(undefined8 *)(param_4[2] + (uVar11 & 0xff) * 8) >> 6 & 1) == 0) {
            return iVar5;
          }
          uVar4 = (**(code **)(*param_4 + 0x48))(param_4,uVar11,0);
          plVar7 = (long *)*param_1;
          if (plVar7[3] == plVar7[4]) {
            (**(code **)(*plVar7 + 0x50))(plVar7);
          }
          else {
            plVar7[3] = plVar7[3] + 1;
          }
          param_5 = param_5 + -1;
          uVar4 = iVar5 * 10 + (uVar4 & 0xff);
          plVar7 = plVar8;
        } while( true );
      }
    }
  }
  iVar5 = 0;
  uVar4 = 4;
LAB_007282f8:
  *param_3 = *param_3 | uVar4;
  return iVar5;
}


// ===== 00728528  FUN_00728528 =====

/* WARNING: Type propagation algorithm not settling */

long * FUN_00728528(long *param_1,long *param_2,long *param_3,undefined8 param_4,uint *param_5,
                   undefined8 param_6,undefined4 *param_7,undefined4 *param_8)

{
  undefined4 *puVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long local_80;
  undefined *local_78;
  undefined ***local_70;
  undefined **local_68;
  
  FUN_00715df0(&local_80,param_4);
  puVar2 = PTR_DAT_007a2640;
  local_78 = PTR_DAT_007a2640;
  if (*(long *)PTR_DAT_007a2640 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
                    /* try { // try from 007285a4 to 007285bb has its CatchHandler @ 00728a08 */
    FUN_00710f84(PTR_DAT_007a2640,&local_70,FUN_007374a0);
  }
  if (((ulong)(*(long *)(local_80 + 0x18) - *(long *)(local_80 + 0x10) >> 3) <=
       (long)*(int *)(puVar2 + 8) - 1U) ||
     (plVar15 = *(long **)(*(long *)(local_80 + 0x10) + ((long)*(int *)(puVar2 + 8) - 1U) * 8),
     plVar15 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00728a04 to 00728a07 has its CatchHandler @ 00728a08 */
    FUN_007191ac();
  }
  FUN_00732094(&local_80);
  *param_5 = 0;
  if (param_7 != param_8) {
    while (param_2 != (long *)0x0) {
      if ((int *)param_2[3] == (int *)param_2[4]) {
        iVar10 = (**(code **)(*param_2 + 0x48))(param_2);
      }
      else {
        iVar10 = *(int *)param_2[3];
      }
      bVar3 = iVar10 == -1;
      plVar14 = (long *)0x0;
      if (!bVar3) {
        plVar14 = param_2;
      }
      param_2 = plVar14;
      if (param_3 == (long *)0x0) goto LAB_00728610;
LAB_00728638:
      if ((int *)param_3[3] == (int *)param_3[4]) {
        iVar10 = (**(code **)(*param_3 + 0x48))(param_3);
      }
      else {
        iVar10 = *(int *)param_3[3];
      }
      plVar14 = (long *)0x0;
      if (iVar10 != -1) {
        plVar14 = param_3;
      }
      param_3 = plVar14;
      if (bVar3 == (iVar10 == -1)) goto LAB_00728940;
LAB_00728670:
      cVar5 = (**(code **)(*plVar15 + 0x68))(plVar15,*param_7,0);
      if (cVar5 == '%') {
        if (param_7 + 1 == param_8) goto LAB_00728940;
        uVar6 = (**(code **)(*plVar15 + 0x68))(plVar15,param_7[1],0);
        if (((uVar6 & 0xff) == 0x45) || ((uVar6 & 0xff) == 0x30)) {
          if (param_7 + 2 == param_8) goto LAB_00728940;
          uVar7 = (**(code **)(*plVar15 + 0x68))(plVar15,param_7[2],0);
          lVar13 = 8;
          uVar12 = uVar6;
        }
        else {
          uVar12 = 0;
          lVar13 = 4;
          uVar7 = uVar6;
        }
        param_7 = (undefined4 *)((long)param_7 + lVar13);
        param_2 = (long *)(**(code **)(*param_1 + 0x48))
                                    (param_1,param_2,param_3,param_4,param_5,param_6,uVar7,uVar12);
LAB_007287a0:
        param_7 = param_7 + 1;
      }
      else {
        uVar11 = (**(code **)(*plVar15 + 0x18))(plVar15,1,*param_7);
        if ((uVar11 & 1) == 0) {
          if ((undefined4 *)param_2[3] == (undefined4 *)param_2[4]) {
            uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          else {
            uVar8 = *(undefined4 *)param_2[3];
          }
          iVar10 = (**(code **)(*plVar15 + 0x38))(plVar15,uVar8);
          iVar9 = (**(code **)(*plVar15 + 0x38))(plVar15,*param_7);
          if (iVar10 == iVar9) {
            if (param_2[3] == param_2[4]) {
              (**(code **)(*param_2 + 0x50))(param_2);
              goto LAB_007287a0;
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
            puVar1 = param_8;
            if (param_7 == param_8) break;
            uVar11 = (**(code **)(*plVar15 + 0x18))(plVar15,1,*param_7);
            puVar1 = param_7;
          } while ((uVar11 & 1) != 0);
          plVar14 = param_2;
          param_7 = puVar1;
          if (param_2 != (long *)0x0) goto LAB_007287d0;
LAB_00728840:
          bVar4 = true;
          plVar14 = param_3;
          bVar3 = true;
          if (param_3 != (long *)0x0) goto LAB_00728804;
          while (!bVar3) {
            while( true ) {
              if ((undefined4 *)param_2[3] == (undefined4 *)param_2[4]) {
                uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
              }
              else {
                uVar8 = *(undefined4 *)param_2[3];
              }
              uVar11 = (**(code **)(*plVar15 + 0x18))(plVar15,1,uVar8);
              if ((uVar11 & 1) == 0) goto joined_r0x00728908;
              if (param_2[3] == param_2[4]) {
                (**(code **)(*param_2 + 0x50))(param_2);
              }
              else {
                param_2[3] = param_2[3] + 4;
              }
              plVar14 = param_2;
              if (param_2 == (long *)0x0) goto LAB_00728840;
LAB_007287d0:
              if ((int *)plVar14[3] == (int *)plVar14[4]) {
                iVar10 = (**(code **)(*plVar14 + 0x48))(plVar14);
              }
              else {
                iVar10 = *(int *)plVar14[3];
              }
              bVar4 = iVar10 == -1;
              param_2 = (long *)0x0;
              if (!bVar4) {
                param_2 = plVar14;
              }
              plVar14 = param_3;
              bVar3 = bVar4;
              if (param_3 == (long *)0x0) break;
LAB_00728804:
              if ((int *)plVar14[3] == (int *)plVar14[4]) {
                iVar10 = (**(code **)(*plVar14 + 0x48))(plVar14);
              }
              else {
                iVar10 = *(int *)plVar14[3];
              }
              param_3 = (long *)0x0;
              if (iVar10 != -1) {
                param_3 = plVar14;
              }
              if (bVar4 == (iVar10 == -1)) goto joined_r0x00728908;
            }
          }
        }
      }
joined_r0x00728908:
      if ((param_7 == param_8) || (*param_5 != 0)) goto LAB_00728948;
    }
    bVar3 = true;
    if (param_3 != (long *)0x0) goto LAB_00728638;
LAB_00728610:
    if (!bVar3) goto LAB_00728670;
LAB_00728940:
    *param_5 = 4;
  }
LAB_00728948:
  if (param_2 == (long *)0x0) {
    bVar3 = true;
    plVar15 = (long *)0x0;
  }
  else {
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
  }
  if (param_3 == (long *)0x0) {
    if (!bVar3) {
      return plVar15;
    }
  }
  else {
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar10 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar10 = *(int *)param_3[3];
    }
    if (bVar3 != (iVar10 == -1)) {
      return plVar15;
    }
  }
  *param_5 = *param_5 | 2;
  return plVar15;
}


// ===== 00728a1c  FUN_00728a1c =====

undefined8 FUN_00728a1c(void)

{
  return 2;
}


// ===== 00728a28  FUN_00728a28 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00728a28(void)

{
  FUN_00728528();
  return;
}


// ===== 00728a68  FUN_00728a68 =====

void FUN_00728a68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)(**(code **)(*(long *)(param_1 + 0x10) + 0x28))();
  uVar1 = (ulong)(*pbVar3 >> 1);
  pbVar2 = pbVar3 + 4;
  if ((*pbVar3 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar3 + 8);
    pbVar2 = *(byte **)(pbVar3 + 0x10);
  }
  FUN_00728528(param_1,param_2,param_3,param_4,param_5,param_6,pbVar2,pbVar2 + uVar1 * 4);
  return;
}


// ===== 00728af8  FUN_00728af8 =====

undefined8
FUN_00728af8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,long param_6)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 **local_50;
  undefined **local_48;
  
  local_60 = param_2;
  FUN_00715df0(&local_68,param_4);
  puVar2 = PTR_DAT_007a2640;
  local_58 = PTR_DAT_007a2640;
  if (*(long *)PTR_DAT_007a2640 != -1) {
    local_48 = &local_58;
    local_50 = &local_48;
                    /* try { // try from 00728b5c to 00728b73 has its CatchHandler @ 00728c3c */
    FUN_00710f84(PTR_DAT_007a2640,&local_50,FUN_007374a0);
  }
  if (((long)*(int *)(puVar2 + 8) - 1U <
       (ulong)(*(long *)(local_68 + 0x18) - *(long *)(local_68 + 0x10) >> 3)) &&
     (lVar4 = *(long *)(*(long *)(local_68 + 0x10) + ((long)*(int *)(puVar2 + 8) - 1U) * 8),
     lVar4 != 0)) {
    FUN_00732094(&local_68);
    lVar3 = (*(code *)**(undefined8 **)(param_1 + 0x10))((undefined8 *)(param_1 + 0x10));
    lVar4 = FUN_0071efb4(&local_60,param_3,lVar3,lVar3 + 0x150,lVar4,param_5,0);
    if (lVar4 - lVar3 < 0x150) {
      lVar4 = (lVar4 - lVar3 >> 3) * -0x5555555555555555;
      auVar1 = SEXT816(lVar4) * SEXT816(0x4924924924924925);
      *(int *)(param_6 + 0x18) =
           (int)lVar4 + ((int)(auVar1._8_8_ >> 1) - (auVar1._12_4_ >> 0x1f)) * -7;
    }
    return local_60;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00728c38 to 00728c3b has its CatchHandler @ 00728c3c */
  FUN_007191ac();
}


// ===== 00728c50  FUN_00728c50 =====

undefined8
FUN_00728c50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 **local_50;
  undefined **local_48;
  
  local_60 = param_2;
  FUN_00715df0(&local_68,param_4);
  puVar1 = PTR_DAT_007a2640;
  local_58 = PTR_DAT_007a2640;
  if (*(long *)PTR_DAT_007a2640 != -1) {
    local_48 = &local_58;
    local_50 = &local_48;
                    /* try { // try from 00728cb4 to 00728ccb has its CatchHandler @ 00728d8c */
    FUN_00710f84(PTR_DAT_007a2640,&local_50,FUN_007374a0);
  }
  if (((long)*(int *)(puVar1 + 8) - 1U <
       (ulong)(*(long *)(local_68 + 0x18) - *(long *)(local_68 + 0x10) >> 3)) &&
     (lVar3 = *(long *)(*(long *)(local_68 + 0x10) + ((long)*(int *)(puVar1 + 8) - 1U) * 8),
     lVar3 != 0)) {
    FUN_00732094(&local_68);
    lVar2 = (**(code **)(*(long *)(param_1 + 0x10) + 8))((long *)(param_1 + 0x10));
    lVar3 = FUN_0071efb4(&local_60,param_3,lVar2,lVar2 + 0x240,lVar3,param_5,0);
    if (lVar3 - lVar2 < 0x240) {
      lVar3 = (lVar3 - lVar2 >> 3) * -0x5555555555555555;
      *(int *)(param_6 + 0x10) =
           (int)lVar3 +
           ((int)((ulong)(lVar3 / 6 + (lVar3 >> 0x3f)) >> 1) -
           (SUB164(SEXT816(lVar3) * SEXT816(0x2aaaaaaaaaaaaaab),0xc) >> 0x1f)) * -0xc;
    }
    return local_60;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00728d88 to 00728d8b has its CatchHandler @ 00728d8c */
  FUN_007191ac();
}


// ===== 00728da0  FUN_00728da0 =====

undefined8
FUN_00728da0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            byte *param_5,long param_6)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 **local_48;
  undefined **local_28;
  
  local_58 = param_2;
  FUN_00715df0(&local_60,param_4);
  puVar3 = PTR_DAT_007a2640;
  local_50 = PTR_DAT_007a2640;
  if (*(long *)PTR_DAT_007a2640 != -1) {
    local_28 = &local_50;
    local_48 = &local_28;
                    /* try { // try from 00728e04 to 00728e1b has its CatchHandler @ 00728ea8 */
    FUN_00710f84(PTR_DAT_007a2640,&local_48,FUN_007374a0);
  }
  if (((long)*(int *)(puVar3 + 8) - 1U <
       (ulong)(*(long *)(local_60 + 0x18) - *(long *)(local_60 + 0x10) >> 3)) &&
     (lVar5 = *(long *)(*(long *)(local_60 + 0x10) + ((long)*(int *)(puVar3 + 8) - 1U) * 8),
     lVar5 != 0)) {
    FUN_00732094(&local_60);
    uVar4 = FUN_0072990c(&local_58,param_3,param_5,lVar5,4);
    if ((*param_5 >> 2 & 1) == 0) {
      uVar1 = uVar4 + 0x76c;
      if (99 < uVar4) {
        uVar1 = uVar4;
      }
      uVar2 = uVar4 + 2000;
      if (0x44 < (int)uVar4) {
        uVar2 = uVar1;
      }
      *(uint *)(param_6 + 0x14) = uVar2 - 0x76c;
    }
    return local_58;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00728ea4 to 00728ea7 has its CatchHandler @ 00728ea8 */
  FUN_007191ac();
}


// ===== 00728ebc  FUN_00728ebc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00728ebc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint *param_5,
            int *param_6,undefined1 param_7)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined ***pppuVar13;
  code *pcVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined **local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  byte abStack_74 [4];
  long local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined1 *local_58;
  
  pppuVar13 = &local_a0;
  *param_5 = 0;
  local_68 = param_2;
  FUN_00715df0(&local_70,param_4);
  puVar6 = PTR_DAT_007a2640;
  local_60 = PTR_DAT_007a2640;
  if (*(long *)PTR_DAT_007a2640 != -1) {
    local_a0 = &local_60;
                    /* try { // try from 00728f34 to 00728f4b has its CatchHandler @ 00729518 */
    local_58 = (undefined1 *)&local_a0;
    FUN_00710f84(PTR_DAT_007a2640,&local_58,FUN_007374a0);
  }
  if (((ulong)(*(long *)(local_70 + 0x18) - *(long *)(local_70 + 0x10) >> 3) <=
       (long)*(int *)(puVar6 + 8) - 1U) ||
     (lVar16 = *(long *)(*(long *)(local_70 + 0x10) + ((long)*(int *)(puVar6 + 8) - 1U) * 8),
     lVar16 == 0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00729514 to 00729517 has its CatchHandler @ 00729518 */
    FUN_007191ac();
  }
  FUN_00732094(&local_70);
  switch(param_7) {
  case 0x25:
    FUN_0072971c(param_1,&local_68,param_3,param_5,lVar16);
    return local_68;
  default:
    goto code_r0x0072944c;
  case 0x41:
  case 0x61:
    lVar9 = (**(code **)param_1[2])(param_1 + 2);
    lVar16 = FUN_0071efb4(&local_68,param_3,lVar9,lVar9 + 0x150,lVar16,param_5,0);
    if (0x14f < lVar16 - lVar9) {
      return local_68;
    }
    lVar16 = (lVar16 - lVar9 >> 3) * -0x5555555555555555;
    auVar5 = SEXT816(lVar16) * SEXT816(0x4924924924924925);
    param_6[6] = (int)lVar16 + ((int)(auVar5._8_8_ >> 1) - (auVar5._12_4_ >> 0x1f)) * -7;
    return local_68;
  case 0x42:
  case 0x62:
  case 0x68:
    lVar9 = (**(code **)(param_1[2] + 8))(param_1 + 2);
    lVar16 = FUN_0071efb4(&local_68,param_3,lVar9,lVar9 + 0x240,lVar16,param_5,0);
    if (0x23f < lVar16 - lVar9) {
      return local_68;
    }
    lVar16 = (lVar16 - lVar9 >> 3) * -0x5555555555555555;
    param_6[4] = (int)lVar16 +
                 ((int)((ulong)(lVar16 / 6 + (lVar16 >> 0x3f)) >> 1) -
                 (SUB164(SEXT816(lVar16) * SEXT816(0x2aaaaaaaaaaaaaab),0xc) >> 0x1f)) * -0xc;
    return local_68;
  case 0x44:
    puVar15 = (undefined8 *)&DAT_002011b4;
    goto LAB_00729324;
  case 0x46:
    puVar15 = (undefined8 *)&DAT_00201154;
    goto LAB_00729324;
  case 0x48:
    iVar8 = FUN_0072990c(&local_68,param_3,param_5,lVar16,2);
    uVar7 = *param_5;
    if (0x17 < iVar8) break;
    goto LAB_007292b8;
  case 0x49:
    iVar8 = FUN_0072990c(&local_68,param_3,param_5,lVar16,2);
    uVar7 = *param_5;
    if (0xb < iVar8 - 1U) break;
LAB_007292b8:
    if ((uVar7 >> 2 & 1) == 0) {
      param_6[2] = iVar8;
      return local_68;
    }
    break;
  case 0x4d:
    iVar8 = FUN_0072990c(&local_68,param_3,param_5,lVar16,2);
    uVar7 = *param_5;
    if ((iVar8 < 0x3c) && ((uVar7 >> 2 & 1) == 0)) {
      param_6[1] = iVar8;
      return local_68;
    }
    break;
  case 0x52:
    local_90 = CONCAT44(local_90._4_4_,0x4d);
    uStack_98 = _UNK_002124e0;
    local_a0 = _DAT_002124d8;
    pbVar11 = (byte *)((long)&local_90 + 4);
    goto LAB_0072933c;
  case 0x53:
    iVar8 = FUN_0072990c(&local_68,param_3,param_5,lVar16,2);
    uVar7 = *param_5;
    if ((iVar8 < 0x3d) && ((uVar7 >> 2 & 1) == 0)) {
      *param_6 = iVar8;
      return local_68;
    }
    break;
  case 0x54:
    puVar15 = (undefined8 *)&DAT_00201174;
LAB_00729324:
    uStack_98 = puVar15[1];
    local_a0 = (undefined **)*puVar15;
    local_90 = puVar15[2];
    pbVar11 = (byte *)&uStack_80;
    uStack_88 = (undefined4)puVar15[3];
    local_84 = (undefined4)((ulong)puVar15[3] >> 0x20);
    pppuVar13 = &local_a0;
LAB_0072933c:
    uVar10 = FUN_00728528(param_1,local_68,param_3,param_4,param_5,param_6,pppuVar13,pbVar11);
    return uVar10;
  case 0x58:
    pcVar14 = *(code **)(param_1[2] + 0x30);
    goto LAB_007291ac;
  case 0x59:
    iVar8 = FUN_0072990c(&local_68,param_3,param_5,lVar16,4);
    if (((byte)*param_5 >> 2 & 1) != 0) {
      return local_68;
    }
    param_6[5] = iVar8 + -0x76c;
    return local_68;
  case 99:
    pcVar14 = *(code **)(param_1[2] + 0x18);
LAB_007291ac:
    pbVar11 = (byte *)(*pcVar14)();
    uVar3 = (ulong)(*pbVar11 >> 1);
    pppuVar13 = (undefined ***)(pbVar11 + 4);
    if ((*pbVar11 & 1) != 0) {
      uVar3 = *(ulong *)(pbVar11 + 8);
      pppuVar13 = (undefined ***)*(byte **)(pbVar11 + 0x10);
    }
    pbVar11 = (byte *)((long)pppuVar13 + uVar3 * 4);
    goto LAB_0072933c;
  case 100:
  case 0x65:
    iVar8 = FUN_0072990c(&local_68,param_3,param_5,lVar16,2);
    uVar7 = *param_5;
    if ((iVar8 - 1U < 0x1f) && ((uVar7 >> 2 & 1) == 0)) {
      param_6[3] = iVar8;
      return local_68;
    }
    break;
  case 0x6a:
    iVar8 = FUN_0072990c(&local_68,param_3,param_5,lVar16,3);
    uVar7 = *param_5;
    if ((iVar8 < 0x16e) && ((uVar7 >> 2 & 1) == 0)) {
      param_6[7] = iVar8;
      return local_68;
    }
    break;
  case 0x6d:
    iVar8 = FUN_0072990c(&local_68,param_3,param_5,lVar16,2);
    uVar7 = *param_5;
    if ((iVar8 - 1U < 0xc) && ((uVar7 >> 2 & 1) == 0)) {
      param_6[4] = iVar8 - 1U;
      return local_68;
    }
    break;
  case 0x6e:
  case 0x74:
    FUN_0072952c(param_1,&local_68,param_3,param_5,lVar16);
    return local_68;
  case 0x70:
    pbVar11 = (byte *)(**(code **)(param_1[2] + 0x10))(param_1 + 2);
    uVar3 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      uVar3 = *(ulong *)(pbVar11 + 8);
    }
    uVar4 = (ulong)(pbVar11[0x18] >> 1);
    if ((pbVar11[0x18] & 1) != 0) {
      uVar4 = *(ulong *)(pbVar11 + 0x20);
    }
    if (uVar3 + uVar4 != 0) {
      pbVar12 = (byte *)FUN_0071efb4(&local_68,param_3,pbVar11,pbVar11 + 0x30,lVar16,param_5,0);
      iVar8 = param_6[2];
      if ((pbVar12 == pbVar11) && (iVar8 == 0xc)) {
        param_6[2] = 0;
        return local_68;
      }
      if ((long)pbVar12 - (long)pbVar11 != 0x18) {
        return local_68;
      }
      if (0xb < iVar8) {
        return local_68;
      }
      param_6[2] = iVar8 + 0xc;
      return local_68;
    }
    goto code_r0x0072944c;
  case 0x72:
    pbVar11 = abStack_74;
    uStack_98 = _UNK_002124b4;
    local_a0 = _DAT_002124ac;
    uStack_88 = _UNK_002124c4;
    local_90 = _DAT_002124bc;
    uStack_7c = _UNK_002124d0;
    local_84 = _DAT_002124c8;
    uStack_80 = _UNK_002124cc;
    pppuVar13 = &local_a0;
    goto LAB_0072933c;
  case 0x77:
    iVar8 = FUN_0072990c(&local_68,param_3,param_5,lVar16,1);
    uVar7 = *param_5;
    if ((iVar8 < 7) && ((uVar7 >> 2 & 1) == 0)) {
      param_6[6] = iVar8;
      return local_68;
    }
    break;
  case 0x78:
    uVar10 = (**(code **)(*param_1 + 0x28))(param_1,local_68,param_3,param_4,param_5,param_6);
    return uVar10;
  case 0x79:
    uVar7 = FUN_0072990c(&local_68,param_3,param_5,lVar16,4);
    if (((byte)*param_5 >> 2 & 1) != 0) {
      return local_68;
    }
    uVar1 = uVar7 + 0x76c;
    if (99 < uVar7) {
      uVar1 = uVar7;
    }
    uVar2 = uVar7 + 2000;
    if (0x44 < (int)uVar7) {
      uVar2 = uVar1;
    }
    param_6[5] = uVar2 - 0x76c;
    return local_68;
  }
LAB_00729454:
  *param_5 = uVar7 | 4;
  return local_68;
code_r0x0072944c:
  uVar7 = *param_5;
  goto LAB_00729454;
}


// ===== 0072952c  FUN_0072952c =====

void FUN_0072952c(undefined8 param_1,long *param_2,long *param_3,uint *param_4,long *param_5)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar5 = (long *)*param_2;
  if (plVar5 != (long *)0x0) goto LAB_00729570;
  plVar5 = (long *)0x0;
LAB_007295bc:
  bVar1 = true;
  plVar7 = param_3;
  bVar2 = true;
  if (param_3 == (long *)0x0) goto LAB_00729598;
  while( true ) {
    if ((int *)plVar7[3] == (int *)plVar7[4]) {
      iVar4 = (**(code **)(*plVar7 + 0x48))(plVar7);
      plVar5 = (long *)*param_2;
    }
    else {
      iVar4 = *(int *)plVar7[3];
    }
    param_3 = (long *)0x0;
    if (iVar4 != -1) {
      param_3 = plVar7;
    }
    if (bVar1 == (iVar4 == -1)) break;
    while( true ) {
      if ((undefined4 *)plVar5[3] == (undefined4 *)plVar5[4]) {
        uVar3 = (**(code **)(*plVar5 + 0x48))();
      }
      else {
        uVar3 = *(undefined4 *)plVar5[3];
      }
      uVar6 = (**(code **)(*param_5 + 0x18))(param_5,1,uVar3);
      plVar5 = (long *)*param_2;
      if ((uVar6 & 1) == 0) goto LAB_00729670;
      if (plVar5[3] == plVar5[4]) {
        (**(code **)(*plVar5 + 0x50))();
        plVar5 = (long *)*param_2;
        if (plVar5 == (long *)0x0) {
          plVar5 = (long *)0x0;
          goto LAB_007295bc;
        }
      }
      else {
        plVar5[3] = plVar5[3] + 4;
        plVar5 = (long *)*param_2;
        if (plVar5 == (long *)0x0) goto LAB_007295bc;
      }
LAB_00729570:
      if ((int *)plVar5[3] == (int *)plVar5[4]) {
        iVar4 = (**(code **)(*plVar5 + 0x48))();
      }
      else {
        iVar4 = *(int *)plVar5[3];
      }
      if (iVar4 == -1) {
        plVar5 = (long *)0x0;
        *param_2 = 0;
        goto LAB_007295bc;
      }
      plVar5 = (long *)*param_2;
      bVar1 = plVar5 == (long *)0x0;
      plVar7 = param_3;
      bVar2 = bVar1;
      if (param_3 != (long *)0x0) break;
LAB_00729598:
      if (bVar2) goto LAB_00729670;
    }
  }
LAB_00729670:
  if (plVar5 != (long *)0x0) {
    if ((int *)plVar5[3] == (int *)plVar5[4]) {
      iVar4 = (**(code **)(*plVar5 + 0x48))();
    }
    else {
      iVar4 = *(int *)plVar5[3];
    }
    if (iVar4 != -1) {
      bVar2 = *param_2 == 0;
      goto joined_r0x007296c0;
    }
    *param_2 = 0;
  }
  bVar2 = true;
joined_r0x007296c0:
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


// ===== 0072971c  FUN_0072971c =====

void FUN_0072971c(undefined8 param_1,long *param_2,long *param_3,uint *param_4,long *param_5)

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
LAB_00729798:
    bVar1 = true;
    bVar2 = true;
    if (param_3 != (long *)0x0) goto LAB_007297a0;
LAB_00729774:
    if (bVar2) goto LAB_007297f0;
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
      goto LAB_00729798;
    }
    bVar1 = *param_2 == 0;
    bVar2 = bVar1;
    if (param_3 == (long *)0x0) goto LAB_00729774;
LAB_007297a0:
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
LAB_007297f0:
      uVar8 = 6;
      goto LAB_007298e8;
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
    goto LAB_007298e8;
  }
  plVar7 = (long *)*param_2;
  if (plVar7[3] == plVar7[4]) {
    (**(code **)(*plVar7 + 0x50))();
    plVar7 = (long *)*param_2;
    if (plVar7 != (long *)0x0) goto LAB_00729860;
LAB_007298b4:
    bVar2 = true;
    if (plVar6 == (long *)0x0) goto LAB_007298bc;
LAB_00729888:
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
LAB_00729860:
    if ((int *)plVar7[3] == (int *)plVar7[4]) {
      iVar5 = (**(code **)(*plVar7 + 0x48))();
    }
    else {
      iVar5 = *(int *)plVar7[3];
    }
    if (iVar5 == -1) {
      *param_2 = 0;
      goto LAB_007298b4;
    }
    bVar2 = *param_2 == 0;
    if (plVar6 != (long *)0x0) goto LAB_00729888;
LAB_007298bc:
    if (!bVar2) {
      return;
    }
  }
  uVar8 = 2;
LAB_007298e8:
  *param_4 = *param_4 | uVar8;
  return;
}


// ===== 0072990c  FUN_0072990c =====

int FUN_0072990c(long *param_1,long *param_2,uint *param_3,long *param_4,int param_5)

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
LAB_00729990:
    bVar1 = true;
    bVar2 = true;
    if (param_2 != (long *)0x0) goto LAB_00729998;
LAB_0072996c:
    if (bVar2) goto LAB_007299e8;
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
      goto LAB_00729990;
    }
    bVar1 = *param_1 == 0;
    bVar2 = bVar1;
    if (param_2 == (long *)0x0) goto LAB_0072996c;
LAB_00729998:
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
LAB_007299e8:
      iVar4 = 0;
      uVar3 = 6;
      goto LAB_00729c3c;
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
      (**(code **)(*plVar8 + 0x50))();
    }
    else {
      plVar8[3] = plVar8[3] + 4;
    }
    do {
      plVar8 = (long *)*param_1;
      if (plVar8 == (long *)0x0) {
LAB_00729ae8:
        bVar2 = true;
        if (plVar7 != (long *)0x0) goto LAB_00729af0;
LAB_00729ac8:
        bVar1 = true;
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
          goto LAB_00729ae8;
        }
        bVar2 = *param_1 == 0;
        if (plVar7 == (long *)0x0) goto LAB_00729ac8;
LAB_00729af0:
        if ((int *)plVar7[3] == (int *)plVar7[4]) {
          iVar4 = (**(code **)(*plVar7 + 0x48))(plVar7);
        }
        else {
          iVar4 = *(int *)plVar7[3];
        }
        bVar1 = iVar4 == -1;
        plVar8 = (long *)0x0;
        if (!bVar1) {
          plVar8 = plVar7;
        }
      }
      plVar7 = (long *)*param_1;
      iVar4 = uVar3 - 0x30;
      if ((bVar2 == bVar1) || (param_5 < 2)) {
        if (plVar7 == (long *)0x0) {
LAB_00729bfc:
          bVar2 = true;
          if (plVar8 != (long *)0x0) goto LAB_00729c04;
LAB_00729bdc:
          if (!bVar2) {
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
            goto LAB_00729bfc;
          }
          bVar2 = *param_1 == 0;
          if (plVar8 == (long *)0x0) goto LAB_00729bdc;
LAB_00729c04:
          if ((int *)plVar8[3] == (int *)plVar8[4]) {
            iVar6 = (**(code **)(*plVar8 + 0x48))(plVar8);
          }
          else {
            iVar6 = *(int *)plVar8[3];
          }
          if (bVar2 != (iVar6 == -1)) {
            return iVar4;
          }
        }
        uVar3 = 2;
        goto LAB_00729c3c;
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
LAB_00729c3c:
  *param_3 = *param_3 | uVar3;
  return iVar4;
}


// ===== 00729c68  FUN_00729c68 =====

long * FUN_00729c68(long *param_1,long *param_2,undefined8 param_3,undefined4 param_4,
                   undefined8 param_5,undefined1 *param_6,undefined1 *param_7)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined1 *puVar9;
  long *plVar10;
  uint uVar11;
  long local_80;
  undefined *local_78;
  undefined ***local_70;
  undefined **local_68;
  
  FUN_00715df0(&local_80,param_3);
  puVar1 = PTR_DAT_007a1108;
  local_78 = PTR_DAT_007a1108;
  if (*(long *)PTR_DAT_007a1108 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
                    /* try { // try from 00729cdc to 00729cf3 has its CatchHandler @ 00729ef4 */
    FUN_00710f84(PTR_DAT_007a1108,&local_70,FUN_007374a0);
  }
  if (((ulong)(*(long *)(local_80 + 0x18) - *(long *)(local_80 + 0x10) >> 3) <=
       (long)*(int *)(puVar1 + 8) - 1U) ||
     (plVar10 = *(long **)(*(long *)(local_80 + 0x10) + ((long)*(int *)(puVar1 + 8) - 1U) * 8),
     plVar10 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00729ef0 to 00729ef3 has its CatchHandler @ 00729ef4 */
    FUN_007191ac();
  }
  FUN_00732094(&local_80);
LAB_00729d3c:
  while( true ) {
    if (param_6 == param_7) {
      return param_2;
    }
    cVar2 = (**(code **)(*plVar10 + 0x48))(plVar10,*param_6,0);
    if (cVar2 != '%') break;
    puVar9 = param_6 + 1;
    if (puVar9 == param_7) {
      if (param_2 == (long *)0x0) {
        return (long *)0x0;
      }
      puVar7 = (undefined1 *)param_2[6];
      uVar6 = *param_6;
      if (puVar7 != (undefined1 *)param_2[7]) {
LAB_00729e4c:
        param_2[6] = (long)(puVar7 + 1);
        *puVar7 = uVar6;
        return param_2;
      }
LAB_00729ea8:
      iVar5 = (**(code **)(*param_2 + 0x68))(param_2);
      if (iVar5 == -1) {
        return (long *)0x0;
      }
      return param_2;
    }
    uVar3 = (**(code **)(*plVar10 + 0x48))(plVar10,*puVar9,0);
    if (((uVar3 & 0xff) == 0x4f) || ((uVar3 & 0xff) == 0x45)) {
      puVar7 = param_6 + 2;
      if (puVar7 == param_7) {
        if (param_2 == (long *)0x0) {
          return (long *)0x0;
        }
        puVar7 = (undefined1 *)param_2[6];
        uVar6 = *param_6;
        if (puVar7 == (undefined1 *)param_2[7]) {
          iVar5 = (**(code **)(*param_2 + 0x68))(param_2);
          if (iVar5 == -1) {
            return (long *)0x0;
          }
        }
        else {
          param_2[6] = (long)(puVar7 + 1);
          *puVar7 = uVar6;
        }
        puVar7 = (undefined1 *)param_2[6];
        uVar6 = *puVar9;
        if (puVar7 != (undefined1 *)param_2[7]) goto LAB_00729e4c;
        goto LAB_00729ea8;
      }
      uVar4 = (**(code **)(*plVar10 + 0x48))(plVar10,*puVar7,0);
      puVar9 = puVar7;
      uVar11 = uVar3;
      uVar3 = uVar4;
    }
    else {
      uVar11 = 0;
    }
    param_2 = (long *)(**(code **)(*param_1 + 0x18))
                                (param_1,param_2,param_3,param_4,param_5,uVar3,uVar11);
    param_6 = puVar9 + 1;
  }
  plVar8 = param_2;
  if (param_2 != (long *)0x0) {
    puVar9 = (undefined1 *)param_2[6];
    uVar6 = *param_6;
    if (puVar9 != (undefined1 *)param_2[7]) {
      param_6 = param_6 + 1;
      param_2[6] = (long)(puVar9 + 1);
      *puVar9 = uVar6;
      goto LAB_00729d3c;
    }
    iVar5 = (**(code **)(*param_2 + 0x68))(param_2);
    plVar8 = (long *)0x0;
    if (iVar5 != -1) {
      plVar8 = param_2;
    }
  }
  param_6 = param_6 + 1;
  param_2 = plVar8;
  goto LAB_00729d3c;
}


// ===== 00729f08  FUN_00729f08 =====

long * FUN_00729f08(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,tm *param_5,
                   char param_6,char param_7)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  long *plVar5;
  char *pcVar6;
  char local_94 [100];
  char local_14;
  char local_13;
  char local_12;
  undefined1 local_11;
  
  local_14 = '%';
  local_11 = 0;
  local_13 = param_6;
  local_12 = param_7;
  if (param_7 != '\0') {
    local_13 = param_7;
    local_12 = param_6;
  }
  sVar4 = strftime_l(local_94,100,&local_14,param_5,*(__locale_t *)(param_1 + 0x10));
  if (sVar4 != 0) {
    pcVar6 = local_94;
    plVar5 = param_2;
    do {
      param_2 = plVar5;
      if (plVar5 != (long *)0x0) {
        pcVar1 = (char *)plVar5[6];
        cVar2 = *pcVar6;
        if (pcVar1 == (char *)plVar5[7]) {
          iVar3 = (**(code **)(*plVar5 + 0x68))(plVar5);
          param_2 = (long *)0x0;
          if (iVar3 != -1) {
            param_2 = plVar5;
          }
        }
        else {
          plVar5[6] = (long)(pcVar1 + 1);
          *pcVar1 = cVar2;
        }
      }
      sVar4 = sVar4 - 1;
      pcVar6 = pcVar6 + 1;
      plVar5 = param_2;
    } while (sVar4 != 0);
  }
  return param_2;
}


// ===== 00729fd4  FUN_00729fd4 =====

long * FUN_00729fd4(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  long *plVar4;
  int *piVar5;
  int *local_1c8;
  int local_1c0 [100];
  
  local_1c8 = (int *)&stack0xffffffffffffffd0;
  FUN_0072a090(param_1 + 0x10,local_1c0,&local_1c8,param_5,param_6,param_7);
  piVar2 = local_1c8;
  if (local_1c0 != local_1c8) {
    piVar5 = local_1c0;
    plVar4 = param_2;
    do {
      param_2 = plVar4;
      if (plVar4 != (long *)0x0) {
        piVar1 = (int *)plVar4[6];
        iVar3 = *piVar5;
        if (piVar1 == (int *)plVar4[7]) {
          iVar3 = (**(code **)(*plVar4 + 0x68))(plVar4);
        }
        else {
          *piVar1 = iVar3;
          plVar4[6] = (long)(piVar1 + 1);
        }
        param_2 = (long *)0x0;
        if (iVar3 != -1) {
          param_2 = plVar4;
        }
      }
      piVar5 = piVar5 + 1;
      plVar4 = param_2;
    } while (piVar5 != piVar2);
  }
  return param_2;
}


// ===== 0072a090  FUN_0072a090 =====

void FUN_0072a090(undefined8 *param_1,wchar_t *param_2,long *param_3,tm *param_4,byte param_5,
                 char param_6)

{
  undefined8 uVar1;
  __locale_t __dataset;
  size_t sVar2;
  long lVar3;
  char *local_b8;
  mbstate_t mStack_b0;
  char acStack_a4 [100];
  undefined8 local_28;
  
  uVar1 = local_28;
  local_28 = (__locale_t)CONCAT71((uint7)param_5,0x25);
  local_28._0_3_ = CONCAT12(param_6,(undefined2)local_28);
  local_28._4_4_ = SUB84(uVar1,4);
  local_28._0_4_ = (uint)(uint3)local_28;
  uVar1 = local_28;
  if (param_6 != '\0') {
    local_28._0_2_ = CONCAT11(param_6,0x25);
    local_28._3_5_ = SUB85(uVar1,3);
    local_28._0_3_ = CONCAT12(param_5,(undefined2)local_28);
  }
  strftime_l(acStack_a4,100,(char *)&local_28,param_4,(__locale_t)*param_1);
  lVar3 = *param_3;
  mStack_b0.__count = 0;
  mStack_b0.__value = (_union_27)0x0;
  local_b8 = acStack_a4;
  __dataset = uselocale((__locale_t)*param_1);
                    /* try { // try from 0072a114 to 0072a127 has its CatchHandler @ 0072a174 */
  local_28 = __dataset;
  sVar2 = mbsrtowcs(param_2,&local_b8,lVar3 - (long)param_2 >> 2,&mStack_b0);
  if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 0072a130 to 0072a137 has its CatchHandler @ 0072a170 */
    uselocale(__dataset);
  }
  if (sVar2 != 0xffffffffffffffff) {
    *param_3 = (long)(param_2 + sVar2);
    return;
  }
  FUN_0071280c("locale not supported");
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0072a130 with catch @ 0072a170
                        */
  FUN_002fb198();
}


// ===== 0072a188  FUN_0072a188 =====

undefined8 FUN_0072a188(void)

{
  return 0xff;
}


// ===== 0072a194  FUN_0072a194 =====

undefined8 FUN_0072a194(void)

{
  return 0xff;
}


// ===== 0072a1a0  FUN_0072a1a0 =====

void FUN_0072a1a0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 0072a1b0  FUN_0072a1b0 =====

void FUN_0072a1b0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 0072a1c0  FUN_0072a1c0 =====

void FUN_0072a1c0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 0072a1d0  FUN_0072a1d0 =====

void FUN_0072a1d0(undefined2 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0x2d02;
  return;
}


// ===== 0072a1e4  FUN_0072a1e4 =====

undefined8 FUN_0072a1e4(void)

{
  return 0;
}


// ===== 0072a1f0  FUN_0072a1f0 =====

undefined8 FUN_0072a1f0(void)

{
  return 0x4000302;
}


// ===== 0072a200  FUN_0072a200 =====

undefined8 FUN_0072a200(void)

{
  return 0x4000302;
}


// ===== 0072a210  FUN_0072a210 =====

undefined8 FUN_0072a210(void)

{
  return 0xff;
}


// ===== 0072a21c  FUN_0072a21c =====

undefined8 FUN_0072a21c(void)

{
  return 0xff;
}


// ===== 0072a228  FUN_0072a228 =====

void FUN_0072a228(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 0072a238  FUN_0072a238 =====

void FUN_0072a238(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 0072a248  FUN_0072a248 =====

void FUN_0072a248(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 0072a258  FUN_0072a258 =====

void FUN_0072a258(undefined2 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0x2d02;
  return;
}


// ===== 0072a26c  FUN_0072a26c =====

undefined8 FUN_0072a26c(void)

{
  return 0;
}


// ===== 0072a278  FUN_0072a278 =====

undefined8 FUN_0072a278(void)

{
  return 0x4000302;
}


// ===== 0072a288  FUN_0072a288 =====

undefined8 FUN_0072a288(void)

{
  return 0x4000302;
}


// ===== 0072a298  FUN_0072a298 =====

undefined8 FUN_0072a298(void)

{
  return 0xffffffff;
}


// ===== 0072a2a4  FUN_0072a2a4 =====

undefined8 FUN_0072a2a4(void)

{
  return 0xffffffff;
}


// ===== 0072a2b0  FUN_0072a2b0 =====

void FUN_0072a2b0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 0072a2c0  FUN_0072a2c0 =====

void FUN_0072a2c0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 0072a2d0  FUN_0072a2d0 =====

void FUN_0072a2d0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 0072a2e0  FUN_0072a2e0 =====

void FUN_0072a2e0(undefined1 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_001b70b0;
  *param_1 = 2;
  *(undefined8 *)(param_1 + 4) = uVar1;
  return;
}


// ===== 0072a2fc  FUN_0072a2fc =====

undefined8 FUN_0072a2fc(void)

{
  return 0;
}


// ===== 0072a308  FUN_0072a308 =====

undefined8 FUN_0072a308(void)

{
  return 0x4000302;
}


// ===== 0072a318  FUN_0072a318 =====

undefined8 FUN_0072a318(void)

{
  return 0x4000302;
}


// ===== 0072a328  FUN_0072a328 =====

undefined8 FUN_0072a328(void)

{
  return 0xffffffff;
}


// ===== 0072a334  FUN_0072a334 =====

undefined8 FUN_0072a334(void)

{
  return 0xffffffff;
}


// ===== 0072a340  FUN_0072a340 =====

void FUN_0072a340(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 0072a350  FUN_0072a350 =====

void FUN_0072a350(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 0072a360  FUN_0072a360 =====

void FUN_0072a360(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 0072a370  FUN_0072a370 =====

void FUN_0072a370(undefined1 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_001b70b0;
  *param_1 = 2;
  *(undefined8 *)(param_1 + 4) = uVar1;
  return;
}


// ===== 0072a38c  FUN_0072a38c =====

undefined8 FUN_0072a38c(void)

{
  return 0;
}


// ===== 0072a398  FUN_0072a398 =====

undefined8 FUN_0072a398(void)

{
  return 0x4000302;
}


// ===== 0072a3a8  FUN_0072a3a8 =====

undefined8 FUN_0072a3a8(void)

{
  return 0x4000302;
}


// ===== 0072a3b8  FUN_0072a3b8 =====

long * FUN_0072a3b8(undefined8 param_1,long *param_2,long *param_3,uint param_4,long param_5,
                   uint *param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  undefined *puVar2;
  byte *pbVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined ***__ptr;
  undefined1 *puVar7;
  undefined8 uVar8;
  byte *pbVar9;
  long *plVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined **local_178 [13];
  undefined *local_110;
  undefined1 auStack_106 [6];
  undefined7 local_100;
  undefined4 uStack_f9;
  char local_f4 [4];
  long local_f0;
  byte *local_e8;
  byte *local_e0;
  code *local_d8;
  byte abStack_cc [100];
  long *local_68;
  
  local_e0 = abStack_cc;
  local_d8 = (code *)PTR_FUN_007a38f0;
                    /* try { // try from 0072a404 to 0072a40f has its CatchHandler @ 0072a6bc */
  local_68 = param_2;
  FUN_00715df0(&local_f0,param_5);
  puVar2 = PTR_DAT_007a1108;
  local_110 = PTR_DAT_007a1108;
  if (*(long *)PTR_DAT_007a1108 != -1) {
    local_178[0] = &local_110;
    local_100 = SUB87(local_178,0);
    uStack_f9._0_1_ = (char)((ulong)local_178 >> 0x38);
                    /* try { // try from 0072a43c to 0072a453 has its CatchHandler @ 0072a6d0 */
    FUN_00710f84(PTR_DAT_007a1108,&local_100,FUN_007374a0);
  }
  if (((ulong)(*(long *)(local_f0 + 0x18) - *(long *)(local_f0 + 0x10) >> 3) <=
       (long)*(int *)(puVar2 + 8) - 1U) ||
     (plVar10 = *(long **)(*(long *)(local_f0 + 0x10) + ((long)*(int *)(puVar2 + 8) - 1U) * 8),
     plVar10 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0072a688 to 0072a68b has its CatchHandler @ 0072a6d0 */
    FUN_007191ac();
  }
  local_f4[0] = '\0';
                    /* try { // try from 0072a480 to 0072a4af has its CatchHandler @ 0072a6cc */
  uVar6 = FUN_0072a704(&local_68,param_3,param_4 & 1,&local_f0,*(undefined4 *)(param_5 + 8),param_6,
                       local_f4,plVar10,&local_e0,&local_e8,&local_68);
  if ((uVar6 & 1) != 0) {
    local_100 = (undefined7)s_0123456789_001b779b._0_8_;
    uStack_f9._0_1_ = SUB81(s_0123456789_001b779b._0_8_,7);
    uStack_f9 = CONCAT31(0x3938,(char)uStack_f9);
                    /* try { // try from 0072a4dc to 0072a4ef has its CatchHandler @ 0072a6b4 */
    (**(code **)(*plVar10 + 0x40))(plVar10,&local_100,(long)&uStack_f9 + 3,&local_110);
    pbVar9 = local_e0;
    pbVar3 = local_e8;
    if ((long)local_e8 - (long)local_e0 < 99) {
      __ptr = (undefined ***)0x0;
      pppuVar12 = local_178;
    }
    else {
      __ptr = (undefined ***)malloc(((long)local_e8 - (long)local_e0) + 2);
      pppuVar12 = __ptr;
      if (__ptr == (undefined ***)0x0) goto LAB_0072a698;
    }
    pppuVar11 = pppuVar12;
    if (local_f4[0] != '\0') {
      pppuVar11 = (undefined ***)((long)pppuVar12 + 1);
      *(undefined1 *)pppuVar12 = 0x2d;
    }
    if (pbVar9 < pbVar3) {
      pppuVar12 = pppuVar11;
      do {
        puVar7 = (undefined1 *)memchr(&local_110,(uint)*pbVar9,10);
        puVar1 = auStack_106;
        if (puVar7 != (undefined1 *)0x0) {
          puVar1 = puVar7;
        }
        bVar4 = pbVar9 + 1 < local_e8;
        pppuVar11 = (undefined ***)((long)pppuVar12 + 1);
        *(undefined1 *)pppuVar12 = puVar1[0x10];
        pbVar9 = pbVar9 + 1;
        pppuVar12 = pppuVar11;
      } while (bVar4);
    }
    *(undefined1 *)pppuVar11 = 0;
    iVar5 = sscanf((char *)local_178,"%Lf",param_7);
    if (iVar5 != 1) {
                    /* try { // try from 0072a68c to 0072a697 has its CatchHandler @ 0072a6a0 */
      FUN_0071280c("money_get error");
LAB_0072a698:
                    /* try { // try from 0072a698 to 0072a69b has its CatchHandler @ 0072a69c */
      uVar8 = FUN_00712520();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0072a698 with catch @ 0072a69c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0072a43c with catch @ 0072a6d0
                       catch(type#1 @ 00000000) { ... } // from try @ 0072a688 with catch @ 0072a6d0
                        */
      FUN_00732094(&local_f0);
      pbVar3 = local_e0;
      local_e0 = (byte *)0x0;
      if (pbVar3 != (byte *)0x0) {
                    /* try { // try from 0072a6ec to 0072a6ef has its CatchHandler @ 0072a6f8 */
        (*local_d8)();
      }
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar8);
    }
    if (__ptr != (undefined ***)0x0) {
      free(__ptr);
    }
  }
  if (local_68 == (long *)0x0) {
LAB_0072a5f8:
    bVar4 = true;
    if (param_3 == (long *)0x0) goto LAB_0072a5ec;
LAB_0072a600:
    if (param_3[3] == param_3[4]) {
                    /* try { // try from 0072a66c to 0072a673 has its CatchHandler @ 0072a6cc */
      iVar5 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar4 != (iVar5 == -1)) goto LAB_0072a61c;
    }
    else if (bVar4 != false) goto LAB_0072a61c;
  }
  else {
    if (local_68[3] == local_68[4]) {
                    /* try { // try from 0072a5d0 to 0072a5d3 has its CatchHandler @ 0072a6cc */
      iVar5 = (**(code **)(*local_68 + 0x48))();
      if (iVar5 == -1) {
        local_68 = (long *)0x0;
        goto LAB_0072a5f8;
      }
      bVar4 = local_68 == (long *)0x0;
    }
    else {
      bVar4 = false;
    }
    if (param_3 != (long *)0x0) goto LAB_0072a600;
LAB_0072a5ec:
    if (bVar4 == false) goto LAB_0072a61c;
  }
  *param_6 = *param_6 | 2;
LAB_0072a61c:
  plVar10 = local_68;
  FUN_00732094(&local_f0);
  pbVar3 = local_e0;
  local_e0 = (byte *)0x0;
  if (pbVar3 != (byte *)0x0) {
                    /* try { // try from 0072a638 to 0072a63b has its CatchHandler @ 0072a6b8 */
    (*local_d8)();
  }
  return plVar10;
}


// ===== 0072a6fc  FUN_0072a6fc =====

void FUN_0072a6fc(void)

{
  return;
}


// ===== 0072a704  FUN_0072a704 =====

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_0072a704(long *param_1,long *param_2,uint param_3,undefined8 param_4,uint param_5,uint *param_6,
            undefined1 *param_7,long param_8,long *param_9,long *param_10,undefined1 *param_11)

{
  char *pcVar1;
  char *pcVar2;
  ulong *puVar3;
  byte *pbVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  int *__ptr;
  void *pvVar13;
  long *plVar14;
  uint uVar15;
  ulong uVar16;
  undefined1 *puVar17;
  size_t sVar18;
  char *pcVar19;
  ulong uVar20;
  int *piVar21;
  int *piVar22;
  undefined4 uVar23;
  ulong uVar24;
  char *pcVar25;
  ulong uVar26;
  char *pcVar27;
  char *pcVar28;
  ulong *puVar29;
  code *local_2a8;
  int *local_2a0;
  undefined1 *local_290;
  int local_288;
  int local_284;
  ulong local_280;
  ulong local_278;
  void *local_270;
  ulong local_268;
  ulong local_260;
  char *local_258;
  ulong local_250;
  ulong local_248;
  char *local_240;
  ulong local_238;
  ulong local_230;
  char *local_228;
  ulong local_220;
  ulong local_218;
  void *local_210;
  byte local_204 [4];
  byte local_200 [3];
  byte local_1fd [5];
  int aiStack_1f8 [100];
  int aiStack_68 [2];
  
  plVar11 = (long *)*param_1;
  if (plVar11 == (long *)0x0) {
LAB_0072a79c:
    bVar5 = true;
    if (param_2 == (long *)0x0) goto LAB_0072a764;
LAB_0072a7a4:
    if (param_2[3] == param_2[4]) {
      iVar10 = (**(code **)(*param_2 + 0x48))(param_2);
      plVar11 = (long *)0x0;
      if (iVar10 != -1) {
        plVar11 = param_2;
      }
      if (bVar5 == (iVar10 == -1)) {
LAB_0072b6ec:
        *param_6 = *param_6 | 4;
        return 0;
      }
    }
    else {
      plVar11 = param_2;
      if (bVar5 == false) goto LAB_0072b6ec;
    }
  }
  else {
    if (plVar11[3] == plVar11[4]) {
      iVar10 = (**(code **)(*plVar11 + 0x48))();
      if (iVar10 == -1) {
        *param_1 = 0;
        goto LAB_0072a79c;
      }
      bVar5 = *param_1 == 0;
    }
    else {
      bVar5 = false;
    }
    if (param_2 != (long *)0x0) goto LAB_0072a7a4;
LAB_0072a764:
    if (bVar5 != false) goto LAB_0072b6ec;
    plVar11 = (long *)0x0;
  }
  local_220 = 0;
  local_218 = 0;
  local_210 = (void *)0x0;
  local_238 = 0;
  local_230 = 0;
  local_228 = (char *)0x0;
  local_250 = 0;
  local_248 = 0;
  local_240 = (char *)0x0;
  local_268 = 0;
  local_260 = 0;
  local_258 = (char *)0x0;
  local_280 = 0;
  local_278 = 0;
  local_270 = (void *)0x0;
                    /* try { // try from 0072a7e0 to 0072a817 has its CatchHandler @ 0072b82c */
  FUN_0072bf34(param_3 & 1,param_4,local_1fd + 1,local_200,local_204,&local_220,&local_238,
               &local_250,&local_268,&local_284);
  __ptr = aiStack_1f8;
  uVar26 = 0;
  puVar29 = (ulong *)0x0;
  local_290 = param_11;
  pcVar19 = (char *)((ulong)&local_238 | 1);
  piVar22 = aiStack_1f8;
  local_2a0 = aiStack_68;
  *param_10 = *param_9;
  local_2a8 = (code *)PTR_FUN_007a38f0;
LAB_0072a894:
  plVar12 = (long *)*param_1;
  plVar14 = plVar11;
  if (plVar12 == (long *)0x0) {
LAB_0072a8e4:
    bVar5 = true;
    if (plVar11 == (long *)0x0) goto LAB_0072a8b0;
LAB_0072a8ec:
    if (plVar11[3] == plVar11[4]) {
      iVar10 = (**(code **)(*plVar11 + 0x48))(plVar11);
      plVar14 = (long *)0x0;
      if (iVar10 != -1) {
        plVar14 = plVar11;
      }
      if (bVar5 == (iVar10 == -1)) goto LAB_0072b56c;
    }
    else if (bVar5 == false) goto LAB_0072b56c;
  }
  else {
    if (plVar12[3] == plVar12[4]) {
                    /* try { // try from 0072a8c0 to 0072a90f has its CatchHandler @ 0072b854 */
      iVar10 = (**(code **)(*plVar12 + 0x48))();
      if (iVar10 == -1) {
        *param_1 = 0;
        goto LAB_0072a8e4;
      }
      bVar5 = *param_1 == 0;
    }
    else {
      bVar5 = false;
    }
    if (plVar11 != (long *)0x0) goto LAB_0072a8ec;
LAB_0072a8b0:
    if (bVar5 != false) goto LAB_0072b56c;
  }
  pcVar2 = local_228;
  uVar24 = local_230;
  uVar16 = local_238;
  bVar8 = local_1fd[uVar26 + 1];
  if (bVar8 < 2) {
    if (bVar8 == 0) {
      if (uVar26 != 3) {
LAB_0072ad6c:
        do {
          plVar11 = (long *)*param_1;
          if (plVar11 == (long *)0x0) {
LAB_0072adbc:
            bVar5 = true;
            if (plVar14 == (long *)0x0) goto LAB_0072ad88;
LAB_0072adc4:
            if (plVar14[3] == plVar14[4]) {
              iVar10 = (**(code **)(*plVar14 + 0x48))(plVar14);
              plVar11 = (long *)0x0;
              if (iVar10 != -1) {
                plVar11 = plVar14;
              }
              plVar14 = plVar11;
              if (bVar5 == (iVar10 == -1)) goto LAB_0072a888;
            }
            else if (bVar5 == false) goto LAB_0072a888;
          }
          else {
            if (plVar11[3] == plVar11[4]) {
                    /* try { // try from 0072ad98 to 0072ae23 has its CatchHandler @ 0072b86c */
              iVar10 = (**(code **)(*plVar11 + 0x48))();
              if (iVar10 == -1) {
                *param_1 = 0;
                goto LAB_0072adbc;
              }
              bVar5 = *param_1 == 0;
            }
            else {
              bVar5 = false;
            }
            if (plVar14 != (long *)0x0) goto LAB_0072adc4;
LAB_0072ad88:
            if (bVar5 != false) goto LAB_0072a888;
          }
          plVar11 = (long *)*param_1;
          if ((byte *)plVar11[3] == (byte *)plVar11[4]) {
            uVar16 = (**(code **)(*plVar11 + 0x48))();
            uVar16 = uVar16 & 0xff;
            if ((uint)uVar16 >> 7 != 0) goto LAB_0072a888;
          }
          else {
            bVar8 = *(byte *)plVar11[3];
            uVar16 = (ulong)bVar8;
            if ((char)bVar8 < '\0') goto LAB_0072a888;
          }
          if ((*(ulong *)(*(long *)(param_8 + 0x10) + uVar16 * 8) & 1) == 0) goto LAB_0072a888;
          plVar11 = (long *)*param_1;
          pbVar4 = (byte *)plVar11[3];
          if (pbVar4 == (byte *)plVar11[4]) {
                    /* try { // try from 0072ae50 to 0072ae57 has its CatchHandler @ 0072b870 */
            uVar15 = (**(code **)(*plVar11 + 0x50))();
          }
          else {
            plVar11[3] = (long)(pbVar4 + 1);
            uVar15 = (uint)*pbVar4;
          }
                    /* try { // try from 0072ad64 to 0072ad6b has its CatchHandler @ 0072b870 */
          FUN_007132e8(&local_280,uVar15);
        } while( true );
      }
      goto LAB_0072b56c;
    }
    if (bVar8 == 1) {
      if (uVar26 != 3) {
        plVar11 = (long *)*param_1;
        if ((byte *)plVar11[3] == (byte *)plVar11[4]) {
                    /* try { // try from 0072ad04 to 0072ad07 has its CatchHandler @ 0072b854 */
          uVar16 = (**(code **)(*plVar11 + 0x48))();
          uVar16 = uVar16 & 0xff;
          if ((uint)uVar16 >> 7 != 0) goto LAB_0072b730;
        }
        else {
          bVar8 = *(byte *)plVar11[3];
          uVar16 = (ulong)bVar8;
          if ((char)bVar8 < '\0') goto LAB_0072b730;
        }
        if ((*(ulong *)(*(long *)(param_8 + 0x10) + uVar16 * 8) & 1) != 0) {
          plVar11 = (long *)*param_1;
          pbVar4 = (byte *)plVar11[3];
          if (pbVar4 == (byte *)plVar11[4]) {
                    /* try { // try from 0072ad44 to 0072ad53 has its CatchHandler @ 0072b848 */
            uVar15 = (**(code **)(*plVar11 + 0x50))();
          }
          else {
            plVar11[3] = (long)(pbVar4 + 1);
            uVar15 = (uint)*pbVar4;
          }
          FUN_007132e8(&local_280,uVar15);
          goto LAB_0072ad6c;
        }
        goto LAB_0072b730;
      }
      goto LAB_0072b56c;
    }
  }
  else if (bVar8 == 2) {
    pcVar25 = pcVar19;
    if ((uVar26 < 2) || (puVar29 != (ulong *)0x0)) {
      bVar5 = (local_238 & 1) == 0;
      if (!bVar5) {
        pcVar25 = local_228;
      }
      if (uVar26 != 0) goto LAB_0072ae7c;
    }
    else {
      if (((param_5 >> 9 & 1) == 0) && (uVar26 != 2 || local_1fd[4] == '\0')) {
        puVar29 = (ulong *)0x0;
        goto LAB_0072a888;
      }
      bVar5 = (local_238 & 1) == 0;
      if (!bVar5) {
        pcVar25 = local_228;
      }
LAB_0072ae7c:
      if (local_1fd[uVar26] < 2) {
        uVar20 = (local_238 & 0xff) >> 1;
        if (!bVar5) {
          uVar20 = local_230;
        }
        pcVar28 = pcVar25;
        if (uVar20 != 0) {
          pcVar1 = pcVar25 + uVar20;
          pcVar27 = pcVar25;
          do {
            pcVar28 = pcVar27;
            if (((long)*pcVar27 < 0) ||
               ((*(ulong *)(*(long *)(param_8 + 0x10) + (long)*pcVar27 * 8) & 1) == 0)) break;
            uVar20 = uVar20 - 1;
            pcVar27 = pcVar27 + 1;
            pcVar28 = pcVar1;
          } while (uVar20 != 0);
        }
        sVar18 = (long)pcVar28 - (long)pcVar25;
        uVar20 = local_280 >> 1 & 0x7f;
        if ((local_280 & 1) != 0) {
          uVar20 = local_278;
        }
        if (sVar18 <= uVar20) {
          pvVar13 = (void *)((ulong)&local_280 | 1);
          if ((local_280 & 1) != 0) {
            pvVar13 = local_270;
          }
          iVar10 = memcmp((void *)((long)pvVar13 + (uVar20 - sVar18)),pcVar25,sVar18);
          if (iVar10 == 0) {
            pcVar25 = pcVar28;
          }
        }
      }
    }
    uVar20 = (uVar16 & 0xff) >> 1;
    pcVar28 = pcVar19;
    if ((uVar16 & 1) != 0) {
      uVar20 = uVar24;
      pcVar28 = pcVar2;
    }
    if (pcVar25 != pcVar28 + uVar20) {
      do {
        plVar12 = (long *)*param_1;
        plVar11 = plVar14;
        if (plVar12 == (long *)0x0) {
LAB_0072b124:
          bVar5 = true;
          if (plVar14 == (long *)0x0) goto LAB_0072b0f0;
LAB_0072b12c:
          if (plVar14[3] == plVar14[4]) {
            iVar10 = (**(code **)(*plVar14 + 0x48))(plVar14);
            plVar11 = (long *)0x0;
            if (iVar10 != -1) {
              plVar11 = plVar14;
            }
            plVar14 = plVar11;
            if (bVar5 == (iVar10 == -1)) break;
          }
          else if (bVar5 == false) break;
        }
        else {
          if (plVar12[3] == plVar12[4]) {
                    /* try { // try from 0072b100 to 0072b187 has its CatchHandler @ 0072b858 */
            iVar10 = (**(code **)(*plVar12 + 0x48))();
            if (iVar10 == -1) {
              *param_1 = 0;
              goto LAB_0072b124;
            }
            bVar5 = *param_1 == 0;
          }
          else {
            bVar5 = false;
          }
          if (plVar14 != (long *)0x0) goto LAB_0072b12c;
LAB_0072b0f0:
          if (bVar5 != false) break;
        }
        plVar14 = (long *)*param_1;
        if ((char *)plVar14[3] == (char *)plVar14[4]) {
          cVar6 = (**(code **)(*plVar14 + 0x48))();
        }
        else {
          cVar6 = *(char *)plVar14[3];
        }
        plVar14 = plVar11;
        if (cVar6 != *pcVar25) break;
        plVar11 = (long *)*param_1;
        if (plVar11[3] == plVar11[4]) {
                    /* try { // try from 0072b1b0 to 0072b1b3 has its CatchHandler @ 0072b850 */
          (**(code **)(*plVar11 + 0x50))();
        }
        else {
          plVar11[3] = plVar11[3] + 1;
        }
        pcVar25 = pcVar25 + 1;
        uVar16 = local_238 >> 1 & 0x7f;
        pcVar2 = pcVar19;
        if ((local_238 & 1) != 0) {
          uVar16 = local_230;
          pcVar2 = local_228;
        }
      } while (pcVar25 != pcVar2 + uVar16);
    }
    if ((param_5 >> 9 & 1) != 0) {
      uVar16 = local_238 >> 1 & 0x7f;
      pcVar2 = pcVar19;
      if ((local_238 & 1) != 0) {
        uVar16 = local_230;
        pcVar2 = local_228;
      }
      if (pcVar25 != pcVar2 + uVar16) goto LAB_0072b730;
    }
  }
  else {
    if (bVar8 != 3) {
      if (bVar8 == 4) {
        iVar10 = 0;
        piVar21 = piVar22;
LAB_0072a960:
        plVar12 = (long *)*param_1;
        plVar11 = plVar14;
        if (plVar12 == (long *)0x0) {
LAB_0072a9b0:
          bVar5 = true;
          if (plVar14 != (long *)0x0) goto LAB_0072a9b8;
LAB_0072a97c:
          if (bVar5 != false) goto LAB_0072ac70;
        }
        else {
          if (plVar12[3] == plVar12[4]) {
                    /* try { // try from 0072a98c to 0072a9db has its CatchHandler @ 0072b868 */
            iVar9 = (**(code **)(*plVar12 + 0x48))();
            if (iVar9 == -1) {
              *param_1 = 0;
              goto LAB_0072a9b0;
            }
            bVar5 = *param_1 == 0;
          }
          else {
            bVar5 = false;
          }
          if (plVar14 == (long *)0x0) goto LAB_0072a97c;
LAB_0072a9b8:
          if (plVar14[3] == plVar14[4]) {
            iVar9 = (**(code **)(*plVar14 + 0x48))(plVar14);
            plVar11 = (long *)0x0;
            if (iVar9 != -1) {
              plVar11 = plVar14;
            }
            plVar14 = plVar11;
            if (bVar5 == (iVar9 == -1)) goto LAB_0072ac70;
          }
          else if (bVar5 == false) goto LAB_0072ac70;
        }
        plVar12 = (long *)*param_1;
        plVar14 = plVar11;
        if ((byte *)plVar12[3] == (byte *)plVar12[4]) {
                    /* try { // try from 0072aa18 to 0072aa1b has its CatchHandler @ 0072b864 */
          uVar16 = (**(code **)(*plVar12 + 0x48))();
          uVar16 = uVar16 & 0xff;
          if ((uint)uVar16 >> 7 == 0) goto LAB_0072aa28;
LAB_0072aa34:
          uVar24 = local_220 >> 1 & 0x7f;
          if ((local_220 & 1) != 0) {
            uVar24 = local_218;
          }
          if (((uVar24 == 0) || (iVar10 == 0)) || (uVar16 != local_204[0])) goto LAB_0072ac70;
          if (piVar21 == local_2a0) {
            uVar16 = (long)local_2a0 - (long)__ptr;
            sVar18 = 4;
            if (uVar16 != 0) {
              sVar18 = uVar16 * 2;
            }
            if (0x7ffffffffffffffe < uVar16) {
              sVar18 = 0xffffffffffffffff;
            }
            if (local_2a8 == (code *)PTR_FUN_007a38f0) {
              __ptr = (int *)malloc(sVar18);
            }
            else {
              __ptr = (int *)realloc(__ptr,sVar18);
            }
            if (__ptr == (int *)0x0) {
LAB_0072b810:
                    /* try { // try from 0072b810 to 0072b813 has its CatchHandler @ 0072b860 */
              FUN_00712520();
LAB_0072b814:
                    /* try { // try from 0072b814 to 0072b823 has its CatchHandler @ 0072b844 */
              FUN_00712520();
              goto LAB_0072b81c;
            }
            piVar21 = (int *)((long)__ptr + uVar16);
            local_2a0 = (int *)((long)__ptr + (sVar18 & 0xfffffffffffffffc));
            local_2a8 = (code *)PTR_free_007a1440;
          }
          *piVar21 = iVar10;
          iVar10 = 0;
          piVar21 = piVar21 + 1;
        }
        else {
          bVar8 = *(byte *)plVar12[3];
          uVar16 = (ulong)bVar8;
          if ((char)bVar8 < '\0') goto LAB_0072aa34;
LAB_0072aa28:
          if (((uint)*(undefined8 *)(*(long *)(param_8 + 0x10) + uVar16 * 8) >> 6 & 1) == 0)
          goto LAB_0072aa34;
          puVar17 = (undefined1 *)*param_10;
          if (puVar17 == local_290) {
            uVar24 = (long)local_290 - *param_9;
            sVar18 = uVar24 * 2;
            if (sVar18 < 2) {
              sVar18 = 1;
            }
            if (0x7ffffffffffffffe < uVar24) {
              sVar18 = 0xffffffffffffffff;
            }
            if ((code *)param_9[1] == FUN_0072a6fc) {
              pvVar13 = malloc(sVar18);
            }
            else {
              pvVar13 = realloc((void *)*param_9,sVar18);
            }
            if (pvVar13 != (void *)0x0) {
              puVar17 = (undefined1 *)((long)pvVar13 + uVar24);
              *param_9 = (long)pvVar13;
              param_9[1] = (long)PTR_free_007a1440;
              *param_10 = (long)puVar17;
              local_290 = (undefined1 *)(*param_9 + sVar18);
              goto LAB_0072aba4;
            }
            goto LAB_0072b810;
          }
LAB_0072aba4:
          iVar10 = iVar10 + 1;
          *param_10 = (long)(puVar17 + 1);
          *puVar17 = (char)uVar16;
        }
        plVar11 = (long *)*param_1;
        if (plVar11[3] == plVar11[4]) {
                    /* try { // try from 0072abcc to 0072abcf has its CatchHandler @ 0072b868 */
          (**(code **)(*plVar11 + 0x50))();
        }
        else {
          plVar11[3] = plVar11[3] + 1;
        }
        goto LAB_0072a960;
      }
      goto LAB_0072a888;
    }
    uVar24 = local_250 & 0xff;
    uVar16 = (ulong)((byte)local_250 >> 1);
    if ((local_250 & 1) != 0) {
      uVar16 = local_248;
    }
    if (uVar16 != 0) {
      plVar11 = (long *)*param_1;
      if ((char *)plVar11[3] == (char *)plVar11[4]) {
                    /* try { // try from 0072aed8 to 0072aff3 has its CatchHandler @ 0072b854 */
        cVar6 = (**(code **)(*plVar11 + 0x48))();
        uVar24 = local_250 & 0xff;
      }
      else {
        cVar6 = *(char *)plVar11[3];
      }
      pcVar2 = (char *)((ulong)&local_250 | 1);
      if (((byte)local_250 & 1) != 0) {
        pcVar2 = local_240;
      }
      if (cVar6 == *pcVar2) {
        plVar11 = (long *)*param_1;
        if (plVar11[3] == plVar11[4]) {
          (**(code **)(*plVar11 + 0x50))();
          uVar24 = local_250 & 0xff;
          bVar8 = (byte)local_250;
        }
        else {
          plVar11[3] = plVar11[3] + 1;
          bVar8 = (byte)local_250;
        }
        uVar16 = uVar24 >> 1;
        if ((bVar8 & 1) != 0) {
          uVar16 = local_248;
        }
        puVar3 = &local_250;
        if (uVar16 < 2) {
          puVar3 = puVar29;
        }
        *param_7 = 0;
        puVar29 = puVar3;
        goto LAB_0072a888;
      }
    }
    uVar20 = local_268 & 0xff;
    uVar16 = (ulong)((byte)local_268 >> 1);
    if ((local_268 & 1) != 0) {
      uVar16 = local_260;
    }
    if (uVar16 != 0) {
      plVar11 = (long *)*param_1;
      if ((char *)plVar11[3] == (char *)plVar11[4]) {
        cVar6 = (**(code **)(*plVar11 + 0x48))();
        uVar20 = local_268 & 0xff;
      }
      else {
        cVar6 = *(char *)plVar11[3];
      }
      pcVar2 = (char *)((ulong)&local_268 | 1);
      if (((byte)local_268 & 1) != 0) {
        pcVar2 = local_258;
      }
      if (cVar6 == *pcVar2) {
        plVar11 = (long *)*param_1;
        if (plVar11[3] == plVar11[4]) {
                    /* try { // try from 0072b1f8 to 0072b1fb has its CatchHandler @ 0072b854 */
          (**(code **)(*plVar11 + 0x50))();
          uVar20 = local_268 & 0xff;
          bVar8 = (byte)local_268;
        }
        else {
          plVar11[3] = plVar11[3] + 1;
          bVar8 = (byte)local_268;
        }
        uVar16 = uVar20 >> 1;
        if ((bVar8 & 1) != 0) {
          uVar16 = local_260;
        }
        puVar3 = &local_268;
        if (uVar16 < 2) {
          puVar3 = puVar29;
        }
        *param_7 = 1;
        puVar29 = puVar3;
        goto LAB_0072a888;
      }
      uVar24 = local_250 & 0xff;
    }
    uVar16 = uVar24 >> 1;
    if ((uVar24 & 1) != 0) {
      uVar16 = local_248;
    }
    uVar24 = uVar20 >> 1;
    if ((uVar20 & 1) != 0) {
      uVar24 = local_260;
    }
    if (uVar16 == 0) {
      if (uVar24 == 0) goto LAB_0072a888;
    }
    else if (uVar24 != 0) goto LAB_0072b730;
    *param_7 = uVar16 != 0;
  }
LAB_0072a888:
  uVar26 = uVar26 + 1;
  plVar11 = plVar14;
  if (uVar26 == 4) goto LAB_0072b56c;
  goto LAB_0072a894;
LAB_0072ac70:
  piVar22 = piVar21;
  if ((__ptr != piVar21) && (iVar10 != 0)) {
    if (piVar21 == local_2a0) {
      uVar16 = (long)local_2a0 - (long)__ptr;
      sVar18 = 4;
      if (uVar16 != 0) {
        sVar18 = uVar16 * 2;
      }
      if (0x7ffffffffffffffe < uVar16) {
        sVar18 = 0xffffffffffffffff;
      }
      if (local_2a8 == (code *)PTR_FUN_007a38f0) {
        __ptr = (int *)malloc(sVar18);
      }
      else {
        __ptr = (int *)realloc(__ptr,sVar18);
      }
      if (__ptr == (int *)0x0) {
LAB_0072b81c:
        FUN_00712520();
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0072b7b8 with catch @ 0072b824 */
        FUN_002fb198();
      }
      piVar21 = (int *)((long)__ptr + uVar16);
      local_2a0 = (int *)((long)__ptr + (sVar18 & 0xfffffffffffffffc));
      local_2a8 = (code *)PTR_free_007a1440;
    }
    piVar22 = piVar21 + 1;
    *piVar21 = iVar10;
  }
  if (0 < local_284) {
    plVar11 = (long *)*param_1;
    if (plVar11 != (long *)0x0) {
      if (plVar11[3] != plVar11[4]) {
        bVar5 = false;
        goto LAB_0072b2b8;
      }
                    /* try { // try from 0072b294 to 0072b35b has its CatchHandler @ 0072b828 */
      iVar10 = (**(code **)(*plVar11 + 0x48))();
      if (iVar10 != -1) {
        bVar5 = *param_1 == 0;
        goto LAB_0072b2b8;
      }
      *param_1 = 0;
    }
    bVar5 = true;
LAB_0072b2b8:
    if (plVar14 == (long *)0x0) {
      if (bVar5 != false) goto LAB_0072b730;
      plVar11 = (long *)0x0;
    }
    else if (plVar14[3] == plVar14[4]) {
      iVar10 = (**(code **)(*plVar14 + 0x48))(plVar14);
      plVar11 = (long *)0x0;
      if (iVar10 != -1) {
        plVar11 = plVar14;
      }
      if (bVar5 == (iVar10 == -1)) goto LAB_0072b730;
    }
    else {
      plVar11 = plVar14;
      if (bVar5 == false) goto LAB_0072b730;
    }
    plVar14 = (long *)*param_1;
    if ((byte *)plVar14[3] == (byte *)plVar14[4]) {
      bVar8 = (**(code **)(*plVar14 + 0x48))();
    }
    else {
      bVar8 = *(byte *)plVar14[3];
    }
    if (bVar8 == local_200[0]) {
      plVar12 = (long *)*param_1;
      plVar14 = plVar11;
      if (plVar12[3] == plVar12[4]) {
        (**(code **)(*plVar12 + 0x50))();
      }
      else {
        plVar12[3] = plVar12[3] + 1;
      }
joined_r0x0072b364:
      plVar11 = plVar14;
      if (0 < local_284) {
        do {
          plVar14 = (long *)*param_1;
          if (plVar14 == (long *)0x0) {
LAB_0072b3e8:
            bVar5 = true;
            if (plVar11 == (long *)0x0) goto LAB_0072b3b0;
LAB_0072b3f0:
            if (plVar11[3] == plVar11[4]) {
              iVar10 = (**(code **)(*plVar11 + 0x48))(plVar11);
              plVar14 = (long *)0x0;
              if (iVar10 != -1) {
                plVar14 = plVar11;
              }
              if (bVar5 == (iVar10 == -1)) goto LAB_0072b730;
            }
            else {
              plVar14 = plVar11;
              if (bVar5 == false) goto LAB_0072b730;
            }
          }
          else {
            if (plVar14[3] == plVar14[4]) {
                    /* try { // try from 0072b3c4 to 0072b55b has its CatchHandler @ 0072b85c */
              iVar10 = (**(code **)(*plVar14 + 0x48))();
              if (iVar10 == -1) {
                *param_1 = 0;
                goto LAB_0072b3e8;
              }
              bVar5 = *param_1 == 0;
            }
            else {
              bVar5 = false;
            }
            if (plVar11 != (long *)0x0) goto LAB_0072b3f0;
LAB_0072b3b0:
            if (bVar5 != false) goto LAB_0072b730;
            plVar14 = (long *)0x0;
          }
          plVar11 = (long *)*param_1;
          if ((byte *)plVar11[3] == (byte *)plVar11[4]) {
            uVar16 = (**(code **)(*plVar11 + 0x48))();
            uVar16 = uVar16 & 0xff;
            if ((uint)uVar16 >> 7 != 0) goto LAB_0072b730;
          }
          else {
            bVar8 = *(byte *)plVar11[3];
            uVar16 = (ulong)bVar8;
            if ((char)bVar8 < '\0') goto LAB_0072b730;
          }
          if (((uint)*(undefined8 *)(*(long *)(param_8 + 0x10) + uVar16 * 8) >> 6 & 1) == 0)
          goto LAB_0072b730;
          puVar17 = (undefined1 *)*param_10;
          if (puVar17 == local_290) {
            uVar16 = (long)local_290 - *param_9;
            sVar18 = uVar16 * 2;
            if (sVar18 < 2) {
              sVar18 = 1;
            }
            if (0x7ffffffffffffffe < uVar16) {
              sVar18 = 0xffffffffffffffff;
            }
            if ((code *)param_9[1] == FUN_0072a6fc) {
              pvVar13 = malloc(sVar18);
            }
            else {
              pvVar13 = realloc((void *)*param_9,sVar18);
            }
            if (pvVar13 == (void *)0x0) goto LAB_0072b814;
            puVar17 = (undefined1 *)((long)pvVar13 + uVar16);
            *param_9 = (long)pvVar13;
            param_9[1] = (long)PTR_free_007a1440;
            *param_10 = (long)puVar17;
            local_290 = (undefined1 *)(*param_9 + sVar18);
          }
          plVar11 = (long *)*param_1;
          if ((undefined1 *)plVar11[3] == (undefined1 *)plVar11[4]) {
            uVar7 = (**(code **)(*plVar11 + 0x48))();
            puVar17 = (undefined1 *)*param_10;
          }
          else {
            uVar7 = *(undefined1 *)plVar11[3];
          }
          *param_10 = (long)(puVar17 + 1);
          *puVar17 = uVar7;
          plVar11 = (long *)*param_1;
          local_284 = local_284 + -1;
          if (plVar11[3] == plVar11[4]) goto code_r0x0072b550;
          plVar11[3] = plVar11[3] + 1;
          plVar11 = plVar14;
          if (local_284 < 1) break;
        } while( true );
      }
      goto LAB_0072b368;
    }
    goto LAB_0072b730;
  }
LAB_0072b368:
  if (*param_10 == *param_9) goto LAB_0072b730;
  goto LAB_0072a888;
code_r0x0072b550:
  (**(code **)(*plVar11 + 0x50))();
  goto joined_r0x0072b364;
LAB_0072b56c:
  if (puVar29 != (ulong *)0x0) {
    uVar26 = (ulong)(byte)((byte)*puVar29 >> 1);
    if (((byte)*puVar29 & 1) != 0) {
      uVar26 = puVar29[1];
    }
    if (1 < uVar26) {
      uVar26 = 2;
      uVar16 = 1;
      do {
        uVar24 = uVar26;
        plVar11 = (long *)*param_1;
        if (plVar11 == (long *)0x0) {
LAB_0072b624:
          bVar5 = true;
          if (plVar14 != (long *)0x0) goto LAB_0072b62c;
LAB_0072b5ec:
          if (bVar5 != false) goto LAB_0072b730;
          plVar11 = (long *)0x0;
        }
        else {
          if (plVar11[3] == plVar11[4]) {
                    /* try { // try from 0072b600 to 0072b6c3 has its CatchHandler @ 0072b84c */
            iVar10 = (**(code **)(*plVar11 + 0x48))();
            if (iVar10 == -1) {
              *param_1 = 0;
              goto LAB_0072b624;
            }
            bVar5 = *param_1 == 0;
          }
          else {
            bVar5 = false;
          }
          if (plVar14 == (long *)0x0) goto LAB_0072b5ec;
LAB_0072b62c:
          if (plVar14[3] == plVar14[4]) {
            iVar10 = (**(code **)(*plVar14 + 0x48))(plVar14);
            plVar11 = (long *)0x0;
            if (iVar10 != -1) {
              plVar11 = plVar14;
            }
            if (bVar5 == (iVar10 == -1)) goto LAB_0072b730;
          }
          else {
            plVar11 = plVar14;
            if (bVar5 == false) goto LAB_0072b730;
          }
        }
        plVar14 = (long *)*param_1;
        if ((byte *)plVar14[3] == (byte *)plVar14[4]) {
          bVar8 = (**(code **)(*plVar14 + 0x48))();
        }
        else {
          bVar8 = *(byte *)plVar14[3];
        }
        pbVar4 = (byte *)((long)puVar29 + 1);
        if ((*puVar29 & 1) != 0) {
          pbVar4 = (byte *)puVar29[2];
        }
        if (bVar8 != pbVar4[uVar16]) goto LAB_0072b730;
        plVar14 = (long *)*param_1;
        if (plVar14[3] == plVar14[4]) {
          (**(code **)(*plVar14 + 0x50))();
        }
        else {
          plVar14[3] = plVar14[3] + 1;
        }
        uVar20 = (ulong)(byte)((byte)*puVar29 >> 1);
        if (((byte)*puVar29 & 1) != 0) {
          uVar20 = puVar29[1];
        }
        uVar26 = (ulong)((int)uVar24 + 1);
        plVar14 = plVar11;
        uVar16 = uVar24;
      } while (uVar24 < uVar20);
    }
  }
  if (__ptr == piVar22) {
    uVar23 = 1;
  }
  else {
    local_288 = 0;
    FUN_0072c15c(&local_220,__ptr,piVar22,&local_288);
    if (local_288 == 0) {
      uVar23 = 1;
      piVar22 = __ptr;
    }
    else {
LAB_0072b730:
      uVar23 = 0;
      *param_6 = *param_6 | 4;
      piVar22 = __ptr;
    }
  }
  if ((local_280 & 1) != 0) {
    free(local_270);
  }
  if ((local_268 & 1) != 0) {
    free(local_258);
  }
  if ((local_250 & 1) != 0) {
    free(local_240);
  }
  if ((local_238 & 1) != 0) {
    free(local_228);
  }
  if ((local_220 & 1) != 0) {
    free(local_210);
  }
  if (piVar22 == (int *)0x0) {
    return uVar23;
  }
                    /* try { // try from 0072b7b8 to 0072b7c3 has its CatchHandler @ 0072b824 */
  (*local_2a8)(piVar22);
  return uVar23;
}


// ===== 0072b90c  FUN_0072b90c =====

long * FUN_0072b90c(undefined8 param_1,long *param_2,long *param_3,uint param_4,long param_5,
                   uint *param_6,byte *param_7)

{
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long *plVar10;
  long local_100;
  long local_f8;
  char *local_f0;
  code *local_e8;
  char local_dc [100];
  long *local_78;
  undefined *local_70;
  undefined ***local_68;
  undefined **local_48;
  
  local_f0 = local_dc;
  local_e8 = (code *)PTR_FUN_007a38f0;
                    /* try { // try from 0072b958 to 0072b963 has its CatchHandler @ 0072bb8c */
  local_78 = param_2;
  FUN_00715df0(&local_100,param_5);
  puVar1 = PTR_DAT_007a1108;
  local_70 = PTR_DAT_007a1108;
  if (*(long *)PTR_DAT_007a1108 != -1) {
    local_48 = &local_70;
    local_68 = &local_48;
                    /* try { // try from 0072b990 to 0072b9a7 has its CatchHandler @ 0072bba0 */
    FUN_00710f84(PTR_DAT_007a1108,&local_68,FUN_007374a0);
  }
  if (((ulong)(*(long *)(local_100 + 0x18) - *(long *)(local_100 + 0x10) >> 3) <=
       (long)*(int *)(puVar1 + 8) - 1U) ||
     (plVar10 = *(long **)(*(long *)(local_100 + 0x10) + ((long)*(int *)(puVar1 + 8) - 1U) * 8),
     plVar10 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0072bb7c to 0072bb7f has its CatchHandler @ 0072bba0 */
    FUN_007191ac();
  }
  local_48 = (undefined **)((ulong)local_48 & 0xffffffffffffff00);
                    /* try { // try from 0072b9d4 to 0072ba53 has its CatchHandler @ 0072bb9c */
  uVar6 = FUN_0072a704(&local_78,param_3,param_4 & 1,&local_100,*(undefined4 *)(param_5 + 8),param_6
                       ,&local_48,plVar10,&local_f0,&local_f8,&local_78);
  if ((uVar6 & 1) != 0) {
    if ((*param_7 & 1) == 0) {
      param_7[0] = 0;
      param_7[1] = 0;
    }
    else {
      **(undefined1 **)(param_7 + 0x10) = 0;
      param_7[8] = 0;
      param_7[9] = 0;
      param_7[10] = 0;
      param_7[0xb] = 0;
      param_7[0xc] = 0;
      param_7[0xd] = 0;
      param_7[0xe] = 0;
      param_7[0xf] = 0;
    }
    if ((char)local_48 != '\0') {
      uVar4 = (**(code **)(*plVar10 + 0x38))(plVar10,0x2d);
      FUN_007132e8(param_7,uVar4);
    }
                    /* try { // try from 0072ba5c to 0072ba67 has its CatchHandler @ 0072bb84 */
    cVar3 = (**(code **)(*plVar10 + 0x38))(plVar10,0x30);
    pcVar9 = (char *)(local_f8 + -1);
    pcVar8 = local_f0;
    pcVar7 = local_f0;
    if (local_f0 < pcVar9) {
      do {
        pcVar8 = pcVar7;
        if (*pcVar7 != cVar3) break;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar9;
      } while (pcVar7 != pcVar9);
    }
                    /* try { // try from 0072ba94 to 0072ba9b has its CatchHandler @ 0072bb80 */
    FUN_0072bbcc(param_7,pcVar8);
  }
  if (local_78 == (long *)0x0) {
LAB_0072baec:
    bVar2 = true;
    if (param_3 != (long *)0x0) goto LAB_0072baf4;
LAB_0072bae0:
    if (bVar2 == false) goto LAB_0072bb10;
  }
  else {
    if (local_78[3] == local_78[4]) {
                    /* try { // try from 0072bac4 to 0072bac7 has its CatchHandler @ 0072bb9c */
      iVar5 = (**(code **)(*local_78 + 0x48))();
      if (iVar5 == -1) {
        local_78 = (long *)0x0;
        goto LAB_0072baec;
      }
      bVar2 = local_78 == (long *)0x0;
    }
    else {
      bVar2 = false;
    }
    if (param_3 == (long *)0x0) goto LAB_0072bae0;
LAB_0072baf4:
    if (param_3[3] == param_3[4]) {
                    /* try { // try from 0072bb60 to 0072bb67 has its CatchHandler @ 0072bb9c */
      iVar5 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar2 != (iVar5 == -1)) goto LAB_0072bb10;
    }
    else if (bVar2 != false) goto LAB_0072bb10;
  }
  *param_6 = *param_6 | 2;
LAB_0072bb10:
  plVar10 = local_78;
  FUN_00732094(&local_100);
  pcVar7 = local_f0;
  local_f0 = (char *)0x0;
  if (pcVar7 != (char *)0x0) {
                    /* try { // try from 0072bb2c to 0072bb2f has its CatchHandler @ 0072bb88 */
    (*local_e8)();
  }
  return plVar10;
}


// ===== 0072bbcc  FUN_0072bbcc =====

ulong * FUN_0072bbcc(ulong *param_1,undefined1 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  size_t __n;
  size_t sVar2;
  size_t sVar3;
  ulong uVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  byte bVar12;
  void *pvVar13;
  undefined1 *puVar14;
  ulong uVar15;
  size_t sVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 local_78;
  ulong local_70;
  void *local_68;
  
  uVar11 = *param_1;
  sVar3 = param_1[1];
  bVar12 = (byte)*param_1;
  bVar6 = (bVar12 & 1) != 0;
  uVar15 = (uVar11 & 0xfffffffffffffffe) - 1;
  __n = (ulong)(bVar12 >> 1);
  if (bVar6) {
    __n = sVar3;
  }
  uVar1 = 0x16;
  if (bVar6) {
    uVar1 = uVar15;
  }
  uVar4 = (long)param_3 - (long)param_2;
  if (uVar4 == 0) {
    return param_1;
  }
  puVar14 = (undefined1 *)param_1[2];
  sVar16 = uVar11 >> 1 & 0x7f;
  sVar2 = sVar3;
  puVar8 = puVar14;
  if ((uVar11 & 1) == 0) {
    sVar2 = sVar16;
    puVar8 = (undefined1 *)((long)param_1 + 1);
  }
  if ((puVar8 <= param_2) && (param_2 < puVar8 + sVar2 + 1)) {
    if (0xfffffffffffffff7 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_78);
    }
    if (uVar4 < 0x17) {
      pvVar13 = (void *)((ulong)&local_78 | 1);
      local_78 = CONCAT71(local_78._1_7_,(char)((int)uVar4 << 1));
    }
    else {
      uVar1 = (uVar4 & 0xfffffffffffffff8) + 8;
      if ((uVar4 | 7) != 0x17) {
        uVar1 = uVar4 | 7;
      }
      pvVar13 = (void *)FUN_00759c3c(uVar1 + 1);
      local_78 = uVar1 + 1 | 1;
      local_70 = uVar4;
      local_68 = pvVar13;
    }
    memcpy(pvVar13,param_2,uVar4);
    *(undefined1 *)((long)pvVar13 + uVar4) = 0;
    bVar12 = (byte)local_78 & 1;
    uVar1 = local_70;
    pvVar13 = local_68;
    if ((local_78 & 1) == 0) {
      uVar1 = (ulong)((byte)local_78 >> 1);
      pvVar13 = (void *)((long)&local_78 + 1);
    }
    uVar4 = 0x16;
    if ((uVar11 & 1) != 0) {
      uVar4 = uVar15;
    }
    if ((uVar11 & 1) != 0) {
      sVar16 = sVar3;
    }
    if (uVar4 - sVar16 < uVar1) {
                    /* try { // try from 0072bd6c to 0072bd83 has its CatchHandler @ 0072bf18 */
      FUN_00712a34(param_1,uVar4,(uVar1 - uVar4) + sVar16,sVar16,sVar16,0);
      bVar12 = (byte)local_78 & 1;
    }
    else if (uVar1 != 0) {
      puVar8 = (undefined1 *)((long)param_1 + 1U);
      if ((uVar11 & 1) != 0) {
        puVar8 = puVar14;
      }
      memmove(puVar8 + sVar16,pvVar13,uVar1);
      uVar1 = sVar16 + uVar1;
      if ((*param_1 & 1) == 0) {
        *(char *)param_1 = (char)((int)uVar1 << 1);
      }
      else {
        param_1[1] = uVar1;
      }
      puVar8[uVar1] = 0;
    }
    if (bVar12 == 0) {
      return param_1;
    }
    free(local_68);
    return param_1;
  }
  if (uVar1 - __n < uVar4) {
    uVar11 = __n + uVar4;
    if (-uVar1 - 9 < uVar11 - uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(param_1);
    }
    if (uVar1 < 0x7ffffffffffffff3) {
      if (uVar11 <= uVar1 * 2) {
        uVar11 = uVar1 * 2;
      }
      if (uVar11 < 0x17) {
        uVar15 = 0x17;
      }
      else {
        uVar15 = (uVar11 & 0xfffffffffffffff8) + 8;
        if ((uVar11 | 7) != 0x17) {
          uVar15 = uVar11 | 7;
        }
        uVar15 = uVar15 + 1;
      }
    }
    else {
      uVar15 = 0xfffffffffffffff7;
    }
    puVar7 = (undefined1 *)FUN_00759c3c(uVar15);
    if (__n != 0) {
      memmove(puVar7,puVar8,__n);
    }
    if ((bVar12 & 1) != 0) {
      free(puVar8);
    }
    param_1[1] = __n;
    param_1[2] = (ulong)puVar7;
    *param_1 = uVar15 | 1;
  }
  else {
    puVar7 = (undefined1 *)((long)param_1 + 1U);
    if ((uVar11 & 1) != 0) {
      puVar7 = puVar14;
    }
  }
  puVar8 = puVar7 + __n;
  if ((0x1f < uVar4) && ((undefined1 *)0x1f < puVar7 + (__n - (long)param_2))) {
    uVar15 = uVar4 & 0xffffffffffffffe0;
    puVar9 = (undefined8 *)(puVar7 + __n + 0x10);
    puVar10 = (undefined8 *)(param_2 + 0x10);
    param_2 = param_2 + uVar15;
    puVar8 = puVar8 + uVar15;
    uVar11 = uVar15;
    do {
      puVar5 = puVar10 + -1;
      uVar17 = puVar10[-2];
      uVar19 = puVar10[1];
      uVar18 = *puVar10;
      uVar11 = uVar11 - 0x20;
      puVar10 = puVar10 + 4;
      puVar9[-1] = *puVar5;
      puVar9[-2] = uVar17;
      puVar9[1] = uVar19;
      *puVar9 = uVar18;
      puVar9 = puVar9 + 4;
    } while (uVar11 != 0);
    if (uVar4 == uVar15) goto LAB_0072bec0;
  }
  do {
    puVar7 = param_2 + 1;
    puVar14 = puVar8 + 1;
    *puVar8 = *param_2;
    puVar8 = puVar14;
    param_2 = puVar7;
  } while (puVar7 != param_3);
LAB_0072bec0:
  *puVar8 = 0;
  if ((*param_1 & 1) == 0) {
    *(char *)param_1 = (char)((int)(__n + uVar4) << 1);
  }
  else {
    param_1[1] = __n + uVar4;
  }
  return param_1;
}


// ===== 0072bf34  FUN_0072bf34 =====

void FUN_0072bf34(ulong param_1,long *param_2,undefined4 *param_3,undefined1 *param_4,
                 undefined1 *param_5,byte *param_6,byte *param_7,byte *param_8,byte *param_9,
                 undefined4 *param_10)

{
  long lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 **local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 ***local_48;
  
  lVar5 = *param_2;
  if ((param_1 & 1) == 0) {
    puVar7 = &DAT_007b08b0;
    local_68 = &DAT_007b08b0;
    puVar4 = PTR_DAT_007a3900;
    if (DAT_007b08b0 == -1) goto LAB_0072bff0;
  }
  else {
    puVar7 = &DAT_007b08c0;
    local_68 = &DAT_007b08c0;
    puVar4 = PTR_DAT_007a38f8;
    if (DAT_007b08c0 == -1) goto LAB_0072bff0;
  }
  local_48 = &local_80;
  local_80 = &local_68;
  FUN_00710f84(puVar4,&local_48,FUN_007374a0);
LAB_0072bff0:
  lVar1 = *(long *)(lVar5 + 0x10);
  if (((long)*(int *)(puVar7 + 1) - 1U < (ulong)(*(long *)(lVar5 + 0x18) - lVar1 >> 3)) &&
     (plVar6 = *(long **)(lVar1 + ((long)*(int *)(puVar7 + 1) - 1U) * 8), plVar6 != (long *)0x0)) {
    uVar3 = (**(code **)(*plVar6 + 0x58))(plVar6);
    *param_3 = uVar3;
    (**(code **)(*plVar6 + 0x40))(&local_80,plVar6);
    if ((*param_9 & 1) != 0) {
      free(*(void **)(param_9 + 0x10));
    }
    *(undefined8 *)(param_9 + 8) = uStack_78;
    *(undefined8 ***)param_9 = local_80;
    *(undefined8 *)(param_9 + 0x10) = local_70;
    (**(code **)(*plVar6 + 0x38))(&local_80,plVar6);
    if ((*param_8 & 1) != 0) {
      free(*(void **)(param_8 + 0x10));
    }
    *(undefined8 *)(param_8 + 8) = uStack_78;
    *(undefined8 ***)param_8 = local_80;
    *(undefined8 *)(param_8 + 0x10) = local_70;
    uVar2 = (**(code **)(*plVar6 + 0x18))(plVar6);
    *param_4 = uVar2;
    uVar2 = (**(code **)(*plVar6 + 0x20))(plVar6);
    *param_5 = uVar2;
    (**(code **)(*plVar6 + 0x28))(&local_80,plVar6);
    if ((*param_6 & 1) != 0) {
      free(*(void **)(param_6 + 0x10));
    }
    *(undefined8 *)(param_6 + 8) = uStack_78;
    *(undefined8 ***)param_6 = local_80;
    *(undefined8 *)(param_6 + 0x10) = local_70;
    (**(code **)(*plVar6 + 0x30))(&local_80,plVar6);
    if ((*param_7 & 1) != 0) {
      free(*(void **)(param_7 + 0x10));
    }
    *(undefined8 *)(param_7 + 8) = uStack_78;
    *(undefined8 ***)param_7 = local_80;
    *(undefined8 *)(param_7 + 0x10) = local_70;
    uVar3 = (**(code **)(*plVar6 + 0x48))(plVar6);
    *param_10 = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_007191ac();
}


// ===== 0072c15c  FUN_0072c15c =====

void FUN_0072c15c(byte *param_1,uint *param_2,uint *param_3,undefined4 *param_4)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  uint *puVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte bVar11;
  
  bVar3 = *param_1;
  uVar6 = (ulong)bVar3;
  bVar11 = bVar3 & 1;
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if ((4 < (long)param_3 - (long)param_2) && (uVar1 != 0)) {
    puVar5 = param_3 + -1;
    if ((param_2 != param_3) && (param_2 < puVar5)) {
      puVar7 = param_2 + 1;
      puVar8 = puVar5;
      do {
        uVar2 = puVar7[-1];
        puVar7[-1] = *puVar8;
        *puVar8 = uVar2;
        bVar4 = puVar7 < puVar8 + -1;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + -1;
      } while (bVar4);
      uVar6 = (ulong)*param_1;
      bVar11 = *param_1 & 1;
    }
    pbVar9 = *(byte **)(param_1 + 0x10);
    if (bVar11 == 0) {
      pbVar9 = param_1 + 1;
    }
    pbVar10 = pbVar9;
    if (param_2 < puVar5) {
      uVar1 = uVar6 >> 1;
      if (bVar11 != 0) {
        uVar1 = *(ulong *)(param_1 + 8);
      }
      do {
        bVar11 = *pbVar10;
        if (((bVar11 != 0) && (bVar11 != 0xff)) && (*param_2 != (uint)bVar11)) goto LAB_0072c248;
        param_2 = param_2 + 1;
        if (1 < (long)(pbVar9 + (uVar1 - (long)pbVar10))) {
          pbVar10 = pbVar10 + 1;
        }
      } while (param_2 < puVar5);
    }
    bVar11 = *pbVar10;
    if (((bVar11 != 0) && (bVar11 != 0xff)) && ((uint)bVar11 <= *puVar5 - 1)) {
LAB_0072c248:
      *param_4 = 4;
    }
  }
  return;
}


// ===== 0072c254  FUN_0072c254 =====

long * FUN_0072c254(undefined8 param_1,long *param_2,long *param_3,uint param_4,long param_5,
                   uint *param_6,undefined8 param_7)

{
  wchar_t *pwVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined7 **__ptr;
  wchar_t *pwVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  long *plVar9;
  undefined7 **ppuVar10;
  undefined7 **ppuVar11;
  undefined7 *local_2b8 [13];
  undefined7 **local_250 [5];
  undefined7 local_228;
  undefined4 uStack_221;
  char local_21c [4];
  long local_218;
  wchar_t *local_210;
  wchar_t *local_208;
  code *local_200;
  wchar_t awStack_1f8 [100];
  long *local_68;
  
  local_208 = awStack_1f8;
  local_200 = (code *)PTR_FUN_007a38f0;
                    /* try { // try from 0072c2a0 to 0072c2ab has its CatchHandler @ 0072c55c */
  local_68 = param_2;
  FUN_00715df0(&local_218,param_5);
  puVar2 = PTR_DAT_007a2640;
  local_228 = SUB87(PTR_DAT_007a2640,0);
  uStack_221._0_1_ = (char)((ulong)PTR_DAT_007a2640 >> 0x38);
  if (*(long *)PTR_DAT_007a2640 != -1) {
    local_2b8[0] = &local_228;
    local_250[0] = local_2b8;
                    /* try { // try from 0072c2d8 to 0072c2ef has its CatchHandler @ 0072c570 */
    FUN_00710f84(PTR_DAT_007a2640,local_250,FUN_007374a0);
  }
  if (((ulong)(*(long *)(local_218 + 0x18) - *(long *)(local_218 + 0x10) >> 3) <=
       (long)*(int *)(puVar2 + 8) - 1U) ||
     (plVar9 = *(long **)(*(long *)(local_218 + 0x10) + ((long)*(int *)(puVar2 + 8) - 1U) * 8),
     plVar9 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0072c528 to 0072c52b has its CatchHandler @ 0072c570 */
    FUN_007191ac();
  }
  local_21c[0] = '\0';
                    /* try { // try from 0072c31c to 0072c34b has its CatchHandler @ 0072c56c */
  uVar5 = FUN_0072c59c(&local_68,param_3,param_4 & 1,&local_218,*(undefined4 *)(param_5 + 8),param_6
                       ,local_21c,plVar9,&local_208,&local_210,&local_68);
  if ((uVar5 & 1) != 0) {
    local_228 = (undefined7)s_0123456789_001b779b._0_8_;
    uStack_221._0_1_ = SUB81(s_0123456789_001b779b._0_8_,7);
    uStack_221 = CONCAT31(0x3938,(char)uStack_221);
                    /* try { // try from 0072c378 to 0072c38b has its CatchHandler @ 0072c554 */
    (**(code **)(*plVar9 + 0x60))(plVar9,&local_228,(long)&uStack_221 + 3,local_250);
    pwVar8 = local_208;
    pwVar1 = local_210;
    if ((long)local_210 - (long)local_208 < 0x189) {
      __ptr = (undefined7 **)0x0;
      ppuVar11 = local_2b8;
    }
    else {
      __ptr = (undefined7 **)malloc(((ulong)((long)local_210 - (long)local_208) >> 2) + 2);
      ppuVar11 = __ptr;
      if (__ptr == (undefined7 **)0x0) goto LAB_0072c538;
    }
    ppuVar10 = ppuVar11;
    if (local_21c[0] != '\0') {
      ppuVar10 = (undefined7 **)((long)ppuVar11 + 1);
      *(undefined1 *)ppuVar11 = 0x2d;
    }
    if (pwVar8 < pwVar1) {
      ppuVar11 = ppuVar10;
      do {
        pwVar6 = wmemchr((wchar_t *)local_250,*pwVar8,10);
        pwVar1 = (wchar_t *)&local_228;
        if (pwVar6 != (wchar_t *)0x0) {
          pwVar1 = pwVar6;
        }
        bVar3 = pwVar8 + 1 < local_210;
        ppuVar10 = (undefined7 **)((long)ppuVar11 + 1);
        *(undefined1 *)ppuVar11 =
             *(undefined1 *)((long)&local_228 + ((long)pwVar1 - (long)local_250 >> 2));
        pwVar8 = pwVar8 + 1;
        ppuVar11 = ppuVar10;
      } while (bVar3);
    }
    *(undefined1 *)ppuVar10 = 0;
    iVar4 = sscanf((char *)local_2b8,"%Lf",param_7);
    if (iVar4 != 1) {
                    /* try { // try from 0072c52c to 0072c537 has its CatchHandler @ 0072c540 */
      FUN_0071280c("money_get error");
LAB_0072c538:
                    /* try { // try from 0072c538 to 0072c53b has its CatchHandler @ 0072c53c */
      uVar7 = FUN_00712520();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0072c538 with catch @ 0072c53c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0072c2d8 with catch @ 0072c570
                       catch(type#1 @ 00000000) { ... } // from try @ 0072c528 with catch @ 0072c570
                        */
      FUN_00732094(&local_218);
      pwVar1 = local_208;
      local_208 = (wchar_t *)0x0;
      if (pwVar1 != (wchar_t *)0x0) {
                    /* try { // try from 0072c58c to 0072c58f has its CatchHandler @ 0072c598 */
        (*local_200)();
      }
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar7);
    }
    if (__ptr != (undefined7 **)0x0) {
      free(__ptr);
    }
  }
  if (local_68 == (long *)0x0) {
LAB_0072c498:
    bVar3 = true;
    if (param_3 == (long *)0x0) goto LAB_0072c48c;
LAB_0072c4a0:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar4 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar4 = *(int *)param_3[3];
    }
    if (bVar3 != (iVar4 == -1)) goto LAB_0072c4e0;
  }
  else {
    if ((int *)local_68[3] == (int *)local_68[4]) {
                    /* try { // try from 0072c470 to 0072c4c3 has its CatchHandler @ 0072c56c */
      iVar4 = (**(code **)(*local_68 + 0x48))();
    }
    else {
      iVar4 = *(int *)local_68[3];
    }
    if (iVar4 == -1) {
      local_68 = (long *)0x0;
      goto LAB_0072c498;
    }
    bVar3 = local_68 == (long *)0x0;
    if (param_3 != (long *)0x0) goto LAB_0072c4a0;
LAB_0072c48c:
    if (!bVar3) goto LAB_0072c4e0;
  }
  *param_6 = *param_6 | 2;
LAB_0072c4e0:
  plVar9 = local_68;
  FUN_00732094(&local_218);
  pwVar1 = local_208;
  local_208 = (wchar_t *)0x0;
  if (pwVar1 != (wchar_t *)0x0) {
                    /* try { // try from 0072c4fc to 0072c4ff has its CatchHandler @ 0072c558 */
    (*local_200)();
  }
  return plVar9;
}


// ===== 0072c59c  FUN_0072c59c =====

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_0072c59c(long *param_1,long *param_2,uint param_3,undefined8 param_4,uint param_5,uint *param_6,
            undefined1 *param_7,long *param_8,long *param_9,long *param_10,int *param_11)

{
  byte *pbVar1;
  size_t sVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined1 uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  int *__ptr;
  ulong uVar13;
  void *pvVar14;
  long *plVar15;
  ulong uVar16;
  int *piVar17;
  int *piVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong uVar21;
  int *__s2;
  int *piVar22;
  uint uVar23;
  int *piVar24;
  ulong *local_2c0;
  code *local_2b8;
  int *local_2a0;
  int *local_298;
  int local_288;
  int local_284;
  ulong local_280;
  ulong local_278;
  void *local_270;
  ulong local_268;
  ulong local_260;
  int *local_258;
  ulong local_250;
  ulong local_248;
  int *local_240;
  ulong local_238;
  ulong local_230;
  int *local_228;
  ulong local_220;
  ulong local_218;
  void *local_210;
  int local_204;
  undefined4 local_200;
  byte local_1fc [4];
  int aiStack_1f8 [100];
  int aiStack_68 [2];
  
  plVar11 = (long *)*param_1;
  if (plVar11 == (long *)0x0) {
LAB_0072c634:
    uVar5 = true;
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
      goto LAB_0072c634;
    }
    uVar5 = *param_1 == 0;
  }
  if (param_2 == (long *)0x0) {
    if (!(bool)uVar5) {
      plVar11 = (long *)0x0;
LAB_0072c674:
      local_220 = 0;
      local_218 = 0;
      local_210 = (void *)0x0;
      local_238 = 0;
      local_230 = 0;
      local_228 = (int *)0x0;
      local_250 = 0;
      local_248 = 0;
      local_240 = (int *)0x0;
      local_268 = 0;
      local_260 = 0;
      local_258 = (int *)0x0;
      local_280 = 0;
      local_278 = 0;
      local_270 = (void *)0x0;
                    /* try { // try from 0072c6a0 to 0072c6db has its CatchHandler @ 0072d7d4 */
      FUN_0072df14(param_3 & 1,param_4,local_1fc,&local_200,&local_204,&local_220,&local_238,
                   &local_250,&local_268,&local_284);
      piVar18 = (int *)((ulong)&local_238 | 4);
      __ptr = aiStack_1f8;
      uVar21 = 0;
      local_2a0 = aiStack_68;
      local_2c0 = (ulong *)0x0;
      piVar22 = aiStack_1f8;
      local_298 = param_11;
      *param_10 = *param_9;
      local_2b8 = FUN_0072a6fc;
LAB_0072c760:
      plVar12 = (long *)*param_1;
      plVar15 = plVar11;
      if (plVar12 == (long *)0x0) {
LAB_0072c7ac:
        bVar6 = true;
        if (plVar11 == (long *)0x0) goto LAB_0072c7a0;
LAB_0072c7b4:
        if ((int *)plVar11[3] == (int *)plVar11[4]) {
          iVar10 = (**(code **)(*plVar11 + 0x48))(plVar11);
        }
        else {
          iVar10 = *(int *)plVar11[3];
        }
        plVar15 = (long *)0x0;
        if (iVar10 != -1) {
          plVar15 = plVar11;
        }
        if (bVar6 == (iVar10 == -1)) goto LAB_0072d508;
      }
      else {
        if ((int *)plVar12[3] == (int *)plVar12[4]) {
                    /* try { // try from 0072c784 to 0072c7d7 has its CatchHandler @ 0072d810 */
          iVar10 = (**(code **)(*plVar12 + 0x48))();
        }
        else {
          iVar10 = *(int *)plVar12[3];
        }
        if (iVar10 == -1) {
          *param_1 = 0;
          goto LAB_0072c7ac;
        }
        bVar6 = *param_1 == 0;
        if (plVar11 != (long *)0x0) goto LAB_0072c7b4;
LAB_0072c7a0:
        if (bVar6) goto LAB_0072d508;
      }
      bVar4 = local_1fc[uVar21];
      puVar20 = local_2c0;
      if (1 < bVar4) {
        if (bVar4 == 2) {
          piVar17 = local_228;
          if ((uVar21 < 2) || (local_2c0 != (ulong *)0x0)) {
            uVar13 = local_238 & 0xff;
            uVar23 = (byte)local_238 & 1;
            __s2 = piVar18;
            if ((local_238 & 1) != 0) {
              __s2 = local_228;
            }
            piVar24 = __s2;
            if (uVar21 != 0) goto LAB_0072cc6c;
          }
          else {
            if (((param_5 >> 9 & 1) == 0) && (uVar21 != 2 || local_1fc[3] == '\0')) {
              local_2c0 = (ulong *)0x0;
              puVar20 = local_2c0;
              goto LAB_0072c754;
            }
            piVar24 = piVar18;
            if ((local_238 & 1) != 0) {
              piVar24 = local_228;
            }
LAB_0072cc6c:
            uVar13 = local_238 & 0xff;
            uVar23 = (uint)uVar13 & 1;
            if (local_1fc[uVar21 - 1] < 2) {
              uVar16 = (ulong)((uint)uVar13 >> 1);
              piVar17 = piVar18;
              if ((local_238 & 1) != 0) {
                uVar16 = local_230;
                piVar17 = local_228;
              }
              if (piVar24 != piVar17 + uVar16) {
                do {
                    /* try { // try from 0072ccb0 to 0072ccbb has its CatchHandler @ 0072d804 */
                  uVar16 = (**(code **)(*param_8 + 0x18))(param_8,1,*piVar24);
                  uVar13 = local_238 & 0xff;
                  if ((uVar16 & 1) == 0) {
                    uVar23 = (byte)local_238 & 1;
                    break;
                  }
                  uVar23 = (byte)local_238 & 1;
                  piVar24 = piVar24 + 1;
                  uVar16 = (ulong)((byte)local_238 >> 1);
                  piVar17 = piVar18;
                  if ((local_238 & 1) != 0) {
                    uVar16 = local_230;
                    piVar17 = local_228;
                  }
                } while (piVar24 != piVar17 + uVar16);
              }
              piVar17 = local_228;
              __s2 = piVar18;
              if (uVar23 != 0) {
                __s2 = local_228;
              }
              uVar19 = (long)piVar24 - (long)__s2 >> 2;
              uVar16 = local_280 >> 1 & 0x7f;
              if ((local_280 & 1) != 0) {
                uVar16 = local_278;
              }
              if (uVar19 <= uVar16) {
                pvVar14 = (void *)((ulong)&local_280 | 4);
                if ((local_280 & 1) != 0) {
                  pvVar14 = local_270;
                }
                iVar10 = memcmp((void *)((long)pvVar14 + uVar19 * -4 + uVar16 * 4),__s2,uVar19 * 4);
                if (iVar10 == 0) goto LAB_0072cea4;
              }
            }
            else {
LAB_0072cea4:
              __s2 = piVar24;
            }
          }
          uVar13 = uVar13 >> 1;
          piVar24 = piVar18;
          if (uVar23 != 0) {
            uVar13 = local_230;
            piVar24 = piVar17;
          }
          if (__s2 != piVar24 + uVar13) {
            do {
              plVar11 = (long *)*param_1;
              if (plVar11 == (long *)0x0) {
LAB_0072cf54:
                bVar7 = true;
                bVar6 = true;
                if (plVar15 == (long *)0x0) goto LAB_0072cf48;
LAB_0072cf5c:
                if ((int *)plVar15[3] == (int *)plVar15[4]) {
                  iVar10 = (**(code **)(*plVar15 + 0x48))(plVar15);
                }
                else {
                  iVar10 = *(int *)plVar15[3];
                }
                plVar11 = (long *)0x0;
                if (iVar10 != -1) {
                  plVar11 = plVar15;
                }
                plVar15 = plVar11;
                if (bVar7 == (iVar10 == -1)) break;
              }
              else {
                if ((int *)plVar11[3] == (int *)plVar11[4]) {
                    /* try { // try from 0072cf2c to 0072cfb7 has its CatchHandler @ 0072d80c */
                  iVar10 = (**(code **)(*plVar11 + 0x48))();
                }
                else {
                  iVar10 = *(int *)plVar11[3];
                }
                if (iVar10 == -1) {
                  *param_1 = 0;
                  goto LAB_0072cf54;
                }
                bVar7 = *param_1 == 0;
                bVar6 = bVar7;
                if (plVar15 != (long *)0x0) goto LAB_0072cf5c;
LAB_0072cf48:
                plVar11 = plVar15;
                if (bVar6) break;
              }
              plVar15 = (long *)*param_1;
              if ((int *)plVar15[3] == (int *)plVar15[4]) {
                iVar10 = (**(code **)(*plVar15 + 0x48))();
              }
              else {
                iVar10 = *(int *)plVar15[3];
              }
              plVar15 = plVar11;
              if (iVar10 != *__s2) break;
              plVar11 = (long *)*param_1;
              if (plVar11[3] == plVar11[4]) {
                    /* try { // try from 0072cfdc to 0072cfdf has its CatchHandler @ 0072d800 */
                (**(code **)(*plVar11 + 0x50))();
              }
              else {
                plVar11[3] = plVar11[3] + 4;
              }
              __s2 = __s2 + 1;
              uVar13 = local_238 >> 1 & 0x7f;
              piVar17 = piVar18;
              if ((local_238 & 1) != 0) {
                uVar13 = local_230;
                piVar17 = local_228;
              }
            } while (__s2 != piVar17 + uVar13);
          }
          if ((param_5 >> 9 & 1) != 0) {
            uVar13 = local_238 >> 1 & 0x7f;
            piVar17 = piVar18;
            if ((local_238 & 1) != 0) {
              uVar13 = local_230;
              piVar17 = local_228;
            }
            if (__s2 != piVar17 + uVar13) goto LAB_0072d678;
          }
        }
        else if (bVar4 == 3) {
          uVar16 = local_250 & 0xff;
          uVar13 = (ulong)((byte)local_250 >> 1);
          if ((local_250 & 1) != 0) {
            uVar13 = local_248;
          }
          if (uVar13 == 0) {
LAB_0072cd48:
            uVar19 = local_268 & 0xff;
            uVar13 = (ulong)((byte)local_268 >> 1);
            if ((local_268 & 1) != 0) {
              uVar13 = local_260;
            }
            if (uVar13 != 0) {
              plVar11 = (long *)*param_1;
              if ((int *)plVar11[3] == (int *)plVar11[4]) {
                iVar10 = (**(code **)(*plVar11 + 0x48))();
                uVar19 = local_268 & 0xff;
              }
              else {
                iVar10 = *(int *)plVar11[3];
              }
              piVar17 = (int *)((ulong)&local_268 | 4);
              if (((byte)local_268 & 1) != 0) {
                piVar17 = local_258;
              }
              if (iVar10 == *piVar17) {
                plVar11 = (long *)*param_1;
                if (plVar11[3] == plVar11[4]) {
                    /* try { // try from 0072d024 to 0072d027 has its CatchHandler @ 0072d810 */
                  (**(code **)(*plVar11 + 0x50))();
                  uVar19 = local_268 & 0xff;
                  bVar4 = (byte)local_268;
                }
                else {
                  plVar11[3] = plVar11[3] + 4;
                  bVar4 = (byte)local_268;
                }
                uVar13 = uVar19 >> 1;
                if ((bVar4 & 1) != 0) {
                  uVar13 = local_260;
                }
                *param_7 = 1;
                puVar20 = &local_268;
                goto LAB_0072d058;
              }
              uVar16 = local_250 & 0xff;
            }
            uVar13 = uVar16 >> 1;
            if ((uVar16 & 1) != 0) {
              uVar13 = local_248;
            }
            uVar16 = uVar19 >> 1;
            if ((uVar19 & 1) != 0) {
              uVar16 = local_260;
            }
            if (uVar13 == 0) {
              if (uVar16 == 0) goto LAB_0072c754;
            }
            else if (uVar16 != 0) goto LAB_0072d678;
            *param_7 = uVar13 != 0;
          }
          else {
            plVar11 = (long *)*param_1;
            if ((int *)plVar11[3] == (int *)plVar11[4]) {
                    /* try { // try from 0072cd04 to 0072ce17 has its CatchHandler @ 0072d810 */
              iVar10 = (**(code **)(*plVar11 + 0x48))();
              uVar16 = local_250 & 0xff;
            }
            else {
              iVar10 = *(int *)plVar11[3];
            }
            piVar17 = (int *)((ulong)&local_250 | 4);
            if (((byte)local_250 & 1) != 0) {
              piVar17 = local_240;
            }
            if (iVar10 != *piVar17) goto LAB_0072cd48;
            plVar11 = (long *)*param_1;
            if (plVar11[3] == plVar11[4]) {
              (**(code **)(*plVar11 + 0x50))();
              uVar16 = local_250 & 0xff;
              bVar4 = (byte)local_250;
            }
            else {
              plVar11[3] = plVar11[3] + 4;
              bVar4 = (byte)local_250;
            }
            puVar20 = &local_250;
            uVar13 = uVar16 >> 1;
            if ((bVar4 & 1) != 0) {
              uVar13 = local_248;
            }
            *param_7 = 0;
LAB_0072d058:
            if (uVar13 < 2) {
              puVar20 = local_2c0;
            }
          }
        }
        else if (bVar4 == 4) {
          iVar10 = 0;
LAB_0072c828:
          plVar11 = (long *)*param_1;
          if (plVar11 == (long *)0x0) {
LAB_0072c874:
            bVar7 = true;
            bVar6 = true;
            if (plVar15 == (long *)0x0) goto LAB_0072c868;
LAB_0072c87c:
            if ((int *)plVar15[3] == (int *)plVar15[4]) {
              iVar8 = (**(code **)(*plVar15 + 0x48))(plVar15);
            }
            else {
              iVar8 = *(int *)plVar15[3];
            }
            plVar11 = (long *)0x0;
            if (iVar8 != -1) {
              plVar11 = plVar15;
            }
            plVar15 = plVar11;
            if (bVar7 == (iVar8 == -1)) goto LAB_0072cb14;
          }
          else {
            if ((int *)plVar11[3] == (int *)plVar11[4]) {
                    /* try { // try from 0072c84c to 0072c89f has its CatchHandler @ 0072d820 */
              iVar8 = (**(code **)(*plVar11 + 0x48))();
            }
            else {
              iVar8 = *(int *)plVar11[3];
            }
            if (iVar8 == -1) {
              *param_1 = 0;
              goto LAB_0072c874;
            }
            bVar7 = *param_1 == 0;
            bVar6 = bVar7;
            if (plVar15 != (long *)0x0) goto LAB_0072c87c;
LAB_0072c868:
            plVar11 = plVar15;
            if (bVar6) goto LAB_0072cb14;
          }
          plVar15 = (long *)*param_1;
          if ((int *)plVar15[3] == (int *)plVar15[4]) {
                    /* try { // try from 0072c8d4 to 0072c8f3 has its CatchHandler @ 0072d824 */
            iVar8 = (**(code **)(*plVar15 + 0x48))();
          }
          else {
            iVar8 = *(int *)plVar15[3];
          }
          uVar13 = (**(code **)(*param_8 + 0x18))(param_8,0x40,iVar8);
          plVar15 = plVar11;
          if ((uVar13 & 1) == 0) {
            uVar13 = local_220 >> 1 & 0x7f;
            if ((local_220 & 1) != 0) {
              uVar13 = local_218;
            }
            if (((uVar13 == 0) || (iVar10 == 0)) || (iVar8 != local_204)) goto LAB_0072cb14;
            if (piVar22 == local_2a0) {
              uVar13 = (long)local_2a0 - (long)__ptr;
              sVar2 = 4;
              if (uVar13 != 0) {
                sVar2 = uVar13 * 2;
              }
              if (0x7ffffffffffffffe < uVar13) {
                sVar2 = 0xffffffffffffffff;
              }
              if (local_2b8 == (code *)PTR_FUN_007a38f0) {
                __ptr = (int *)malloc(sVar2);
              }
              else {
                __ptr = (int *)realloc(__ptr,sVar2);
              }
              if (__ptr == (int *)0x0) goto LAB_0072d7b0;
              piVar22 = (int *)((long)__ptr + uVar13);
              local_2a0 = (int *)((long)__ptr + (sVar2 & 0xfffffffffffffffc));
              local_2b8 = (code *)PTR_free_007a1440;
            }
            piVar17 = piVar22 + 1;
            *piVar22 = iVar10;
            iVar10 = 0;
          }
          else {
            piVar17 = (int *)*param_10;
            if (piVar17 == local_298) {
              uVar13 = (long)local_298 - *param_9;
              sVar2 = 4;
              if (uVar13 != 0) {
                sVar2 = uVar13 * 2;
              }
              if (0x7ffffffffffffffe < uVar13) {
                sVar2 = 0xffffffffffffffff;
              }
              if ((code *)param_9[1] == FUN_0072a6fc) {
                pvVar14 = malloc(sVar2);
              }
              else {
                pvVar14 = realloc((void *)*param_9,sVar2);
              }
              if (pvVar14 == (void *)0x0) {
LAB_0072d7b0:
                    /* try { // try from 0072d7b0 to 0072d7b7 has its CatchHandler @ 0072d814 */
                FUN_00712520();
LAB_0072d7b8:
                    /* try { // try from 0072d7b8 to 0072d7c7 has its CatchHandler @ 0072d7f4 */
                FUN_00712520();
                goto LAB_0072d7c0;
              }
              piVar17 = (int *)((long)pvVar14 + uVar13);
              *param_9 = (long)pvVar14;
              param_9[1] = (long)PTR_free_007a1440;
              *param_10 = (long)piVar17;
              local_298 = (int *)(*param_9 + (sVar2 & 0xfffffffffffffffc));
            }
            *piVar17 = iVar8;
            iVar10 = iVar10 + 1;
            *param_10 = (long)(piVar17 + 1);
            piVar17 = piVar22;
          }
          plVar11 = (long *)*param_1;
          piVar22 = piVar17;
          if (plVar11[3] == plVar11[4]) {
                    /* try { // try from 0072ca6c to 0072ca6f has its CatchHandler @ 0072d820 */
            (**(code **)(*plVar11 + 0x50))();
          }
          else {
            plVar11[3] = plVar11[3] + 4;
          }
          goto LAB_0072c828;
        }
        goto LAB_0072c754;
      }
      if (bVar4 == 0) {
        if (uVar21 != 3) goto LAB_0072d3ac;
      }
      else {
        if (bVar4 != 1) goto LAB_0072c754;
        if (uVar21 != 3) {
          plVar11 = (long *)*param_1;
          if ((undefined4 *)plVar11[3] == (undefined4 *)plVar11[4]) {
                    /* try { // try from 0072cbb0 to 0072cbcb has its CatchHandler @ 0072d810 */
            uVar9 = (**(code **)(*plVar11 + 0x48))();
          }
          else {
            uVar9 = *(undefined4 *)plVar11[3];
          }
          uVar13 = (**(code **)(*param_8 + 0x18))(param_8,1,uVar9);
          if ((uVar13 & 1) != 0) {
            plVar11 = (long *)*param_1;
            puVar3 = (undefined4 *)plVar11[3];
            if (puVar3 == (undefined4 *)plVar11[4]) {
                    /* try { // try from 0072cc08 to 0072cc4b has its CatchHandler @ 0072d7f0 */
              uVar9 = (**(code **)(*plVar11 + 0x50))();
              if ((local_280 & 1) != 0) goto LAB_0072cc18;
LAB_0072cbf0:
              bVar4 = (byte)local_280;
              if ((byte)local_280 != 8) goto LAB_0072d4b8;
              uVar13 = 4;
            }
            else {
              uVar9 = *puVar3;
              plVar11[3] = (long)(puVar3 + 1);
              if ((local_280 & 1) == 0) goto LAB_0072cbf0;
LAB_0072cc18:
              uVar13 = (local_280 & 0xfffffffffffffffe) - 1;
              if (local_278 != uVar13) goto LAB_0072d398;
            }
            FUN_0071414c(&local_280,uVar13,1,uVar13,uVar13,0,0);
            local_278 = uVar13;
LAB_0072d398:
            do {
              uVar13 = local_278;
              pvVar14 = local_270;
              local_278 = local_278 + 1;
LAB_0072d3a4:
              puVar3 = (undefined4 *)((long)pvVar14 + uVar13 * 4);
              *puVar3 = uVar9;
              puVar3[1] = 0;
LAB_0072d3ac:
              plVar11 = (long *)*param_1;
              bVar7 = true;
              bVar6 = true;
              if (plVar11 == (long *)0x0) {
LAB_0072d3ec:
                bVar6 = bVar7;
                if (plVar15 != (long *)0x0) goto LAB_0072d3f0;
LAB_0072d434:
                if (bVar6 != false) goto LAB_0072c754;
              }
              else {
                if ((int *)plVar11[3] == (int *)plVar11[4]) {
                    /* try { // try from 0072d3d4 to 0072d473 has its CatchHandler @ 0072d808 */
                  iVar10 = (**(code **)(*plVar11 + 0x48))();
                }
                else {
                  iVar10 = *(int *)plVar11[3];
                }
                if (iVar10 != -1) {
                  bVar7 = *param_1 == 0;
                  goto LAB_0072d3ec;
                }
                *param_1 = 0;
                if (plVar15 == (long *)0x0) goto LAB_0072d434;
LAB_0072d3f0:
                if ((int *)plVar15[3] == (int *)plVar15[4]) {
                  iVar10 = (**(code **)(*plVar15 + 0x48))(plVar15);
                }
                else {
                  iVar10 = *(int *)plVar15[3];
                }
                plVar11 = (long *)0x0;
                if (iVar10 != -1) {
                  plVar11 = plVar15;
                }
                plVar15 = plVar11;
                if (bVar6 == (iVar10 == -1)) goto LAB_0072c754;
              }
              plVar11 = (long *)*param_1;
              if ((undefined4 *)plVar11[3] == (undefined4 *)plVar11[4]) {
                uVar9 = (**(code **)(*plVar11 + 0x48))();
              }
              else {
                uVar9 = *(undefined4 *)plVar11[3];
              }
              uVar13 = (**(code **)(*param_8 + 0x18))(param_8,1,uVar9);
              if ((uVar13 & 1) == 0) goto LAB_0072c754;
              plVar11 = (long *)*param_1;
              puVar3 = (undefined4 *)plVar11[3];
              if (puVar3 == (undefined4 *)plVar11[4]) {
                    /* try { // try from 0072d49c to 0072d4ff has its CatchHandler @ 0072d7cc */
                uVar9 = (**(code **)(*plVar11 + 0x50))();
              }
              else {
                uVar9 = *puVar3;
                plVar11[3] = (long)(puVar3 + 1);
              }
              if ((local_280 & 1) == 0) {
                uVar13 = 4;
                bVar4 = (byte)local_280;
                if ((byte)local_280 == 8) goto LAB_0072d4e0;
LAB_0072d4b8:
                uVar13 = (ulong)(bVar4 >> 1);
                local_280 = CONCAT71(local_280._1_7_,bVar4 + 2);
                pvVar14 = (void *)((ulong)&local_280 | 4);
                goto LAB_0072d3a4;
              }
              uVar13 = (local_280 & 0xfffffffffffffffe) - 1;
              if (local_278 != uVar13) goto LAB_0072d398;
LAB_0072d4e0:
              FUN_0071414c(&local_280,uVar13,1,uVar13,uVar13,0,0);
              local_278 = uVar13;
            } while( true );
          }
          goto LAB_0072d678;
        }
      }
      goto LAB_0072d508;
    }
  }
  else {
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
    if ((bool)uVar5 != (iVar10 == -1)) goto LAB_0072c674;
  }
  *param_6 = *param_6 | 4;
  return 0;
LAB_0072cb14:
  if ((__ptr != piVar22) && (iVar10 != 0)) {
    if (piVar22 == local_2a0) {
      uVar13 = (long)local_2a0 - (long)__ptr;
      sVar2 = 4;
      if (uVar13 != 0) {
        sVar2 = uVar13 * 2;
      }
      if (0x7ffffffffffffffe < uVar13) {
        sVar2 = 0xffffffffffffffff;
      }
      if (local_2b8 == (code *)PTR_FUN_007a38f0) {
        __ptr = (int *)malloc(sVar2);
      }
      else {
        __ptr = (int *)realloc(__ptr,sVar2);
      }
      if (__ptr == (int *)0x0) {
LAB_0072d7c0:
        FUN_00712520();
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0072d700 with catch @ 0072d7c8 */
        FUN_002fb198();
      }
      piVar22 = (int *)((long)__ptr + uVar13);
      local_2a0 = (int *)((long)__ptr + (sVar2 & 0xfffffffffffffffc));
      local_2b8 = (code *)PTR_free_007a1440;
    }
    *piVar22 = iVar10;
    piVar22 = piVar22 + 1;
  }
  if (local_284 < 1) {
LAB_0072d194:
    if (*param_10 != *param_9) {
LAB_0072c754:
      local_2c0 = puVar20;
      uVar21 = uVar21 + 1;
      plVar11 = plVar15;
      if (uVar21 == 4) goto LAB_0072d508;
      goto LAB_0072c760;
    }
    goto LAB_0072d678;
  }
  plVar11 = (long *)*param_1;
  if (plVar11 == (long *)0x0) {
LAB_0072d0f0:
    bVar7 = true;
    bVar6 = true;
    if (plVar15 == (long *)0x0) goto LAB_0072d0e0;
LAB_0072d0f8:
    if ((int *)plVar15[3] == (int *)plVar15[4]) {
      iVar10 = (**(code **)(*plVar15 + 0x48))(plVar15);
    }
    else {
      iVar10 = *(int *)plVar15[3];
    }
    plVar11 = (long *)0x0;
    if (iVar10 != -1) {
      plVar11 = plVar15;
    }
    if (bVar7 == (iVar10 == -1)) goto LAB_0072d678;
  }
  else {
    if ((int *)plVar11[3] == (int *)plVar11[4]) {
                    /* try { // try from 0072d0c4 to 0072d187 has its CatchHandler @ 0072d7d0 */
      iVar10 = (**(code **)(*plVar11 + 0x48))();
    }
    else {
      iVar10 = *(int *)plVar11[3];
    }
    if (iVar10 == -1) {
      *param_1 = 0;
      goto LAB_0072d0f0;
    }
    bVar7 = *param_1 == 0;
    bVar6 = bVar7;
    if (plVar15 != (long *)0x0) goto LAB_0072d0f8;
LAB_0072d0e0:
    if (bVar6) goto LAB_0072d678;
    plVar11 = (long *)0x0;
  }
  plVar15 = (long *)*param_1;
  if ((int *)plVar15[3] == (int *)plVar15[4]) {
    iVar10 = (**(code **)(*plVar15 + 0x48))();
  }
  else {
    iVar10 = *(int *)plVar15[3];
  }
  if (iVar10 == local_200) {
    plVar12 = (long *)*param_1;
    plVar15 = plVar11;
    if (plVar12[3] == plVar12[4]) {
      (**(code **)(*plVar12 + 0x50))();
    }
    else {
      plVar12[3] = plVar12[3] + 4;
    }
joined_r0x0072d190:
    plVar11 = plVar15;
    if (0 < local_284) {
      do {
        plVar15 = (long *)*param_1;
        if (plVar15 == (long *)0x0) {
LAB_0072d210:
          bVar7 = true;
          bVar6 = true;
          if (plVar11 == (long *)0x0) goto LAB_0072d200;
LAB_0072d218:
          if ((int *)plVar11[3] == (int *)plVar11[4]) {
            iVar10 = (**(code **)(*plVar11 + 0x48))(plVar11);
          }
          else {
            iVar10 = *(int *)plVar11[3];
          }
          plVar15 = (long *)0x0;
          if (iVar10 != -1) {
            plVar15 = plVar11;
          }
          if (bVar7 == (iVar10 == -1)) goto LAB_0072d678;
        }
        else {
          if ((int *)plVar15[3] == (int *)plVar15[4]) {
                    /* try { // try from 0072d1e4 to 0072d387 has its CatchHandler @ 0072d818 */
            iVar10 = (**(code **)(*plVar15 + 0x48))();
          }
          else {
            iVar10 = *(int *)plVar15[3];
          }
          if (iVar10 == -1) {
            *param_1 = 0;
            goto LAB_0072d210;
          }
          bVar7 = *param_1 == 0;
          bVar6 = bVar7;
          if (plVar11 != (long *)0x0) goto LAB_0072d218;
LAB_0072d200:
          if (bVar6) goto LAB_0072d678;
          plVar15 = (long *)0x0;
        }
        plVar11 = (long *)*param_1;
        if ((undefined4 *)plVar11[3] == (undefined4 *)plVar11[4]) {
          uVar9 = (**(code **)(*plVar11 + 0x48))();
        }
        else {
          uVar9 = *(undefined4 *)plVar11[3];
        }
        uVar13 = (**(code **)(*param_8 + 0x18))(param_8,0x40,uVar9);
        if ((uVar13 & 1) == 0) goto LAB_0072d678;
        piVar17 = (int *)*param_10;
        if (piVar17 == local_298) {
          uVar13 = (long)local_298 - *param_9;
          sVar2 = 4;
          if (uVar13 != 0) {
            sVar2 = uVar13 * 2;
          }
          if (0x7ffffffffffffffe < uVar13) {
            sVar2 = 0xffffffffffffffff;
          }
          if ((code *)param_9[1] == FUN_0072a6fc) {
            pvVar14 = malloc(sVar2);
          }
          else {
            pvVar14 = realloc((void *)*param_9,sVar2);
          }
          if (pvVar14 == (void *)0x0) goto LAB_0072d7b8;
          piVar17 = (int *)((long)pvVar14 + uVar13);
          *param_9 = (long)pvVar14;
          param_9[1] = (long)PTR_free_007a1440;
          *param_10 = (long)piVar17;
          local_298 = (int *)(*param_9 + (sVar2 & 0xfffffffffffffffc));
        }
        plVar11 = (long *)*param_1;
        if ((int *)plVar11[3] == (int *)plVar11[4]) {
          iVar10 = (**(code **)(*plVar11 + 0x48))();
          piVar17 = (int *)*param_10;
        }
        else {
          iVar10 = *(int *)plVar11[3];
        }
        *piVar17 = iVar10;
        *param_10 = (long)(piVar17 + 1);
        plVar11 = (long *)*param_1;
        local_284 = local_284 + -1;
        if (plVar11[3] == plVar11[4]) goto code_r0x0072d37c;
        plVar11[3] = plVar11[3] + 4;
        plVar11 = plVar15;
        if (local_284 < 1) break;
      } while( true );
    }
    goto LAB_0072d194;
  }
LAB_0072d678:
  uVar9 = 0;
  *param_6 = *param_6 | 4;
  goto joined_r0x0072d690;
code_r0x0072d37c:
  (**(code **)(*plVar11 + 0x50))();
  goto joined_r0x0072d190;
LAB_0072d508:
  if (local_2c0 != (ulong *)0x0) {
    uVar21 = (ulong)(byte)((byte)*local_2c0 >> 1);
    if (((byte)*local_2c0 & 1) != 0) {
      uVar21 = local_2c0[1];
    }
    if (1 < uVar21) {
      uVar21 = 2;
      uVar13 = 1;
      do {
        uVar16 = uVar21;
        plVar11 = (long *)*param_1;
        if (plVar11 == (long *)0x0) {
LAB_0072d5d4:
          bVar7 = true;
          bVar6 = true;
          if (plVar15 == (long *)0x0) goto LAB_0072d5c4;
LAB_0072d5dc:
          if ((int *)plVar15[3] == (int *)plVar15[4]) {
            iVar10 = (**(code **)(*plVar15 + 0x48))(plVar15);
          }
          else {
            iVar10 = *(int *)plVar15[3];
          }
          plVar11 = (long *)0x0;
          if (iVar10 != -1) {
            plVar11 = plVar15;
          }
          if (bVar7 != (iVar10 == -1)) goto LAB_0072d614;
LAB_0072d780:
          uVar23 = *param_6;
          goto LAB_0072d78c;
        }
        if ((int *)plVar11[3] == (int *)plVar11[4]) {
                    /* try { // try from 0072d5a8 to 0072d673 has its CatchHandler @ 0072d7f8 */
          iVar10 = (**(code **)(*plVar11 + 0x48))();
        }
        else {
          iVar10 = *(int *)plVar11[3];
        }
        if (iVar10 == -1) {
          *param_1 = 0;
          goto LAB_0072d5d4;
        }
        bVar7 = *param_1 == 0;
        bVar6 = bVar7;
        if (plVar15 != (long *)0x0) goto LAB_0072d5dc;
LAB_0072d5c4:
        if (bVar6) goto LAB_0072d780;
        plVar11 = (long *)0x0;
LAB_0072d614:
        plVar15 = (long *)*param_1;
        if ((int *)plVar15[3] == (int *)plVar15[4]) {
          iVar10 = (**(code **)(*plVar15 + 0x48))();
        }
        else {
          iVar10 = *(int *)plVar15[3];
        }
        pbVar1 = (byte *)((long)local_2c0 + 4);
        if ((*local_2c0 & 1) != 0) {
          pbVar1 = (byte *)local_2c0[2];
        }
        if (iVar10 != *(int *)(pbVar1 + uVar13 * 4)) goto LAB_0072d780;
        plVar15 = (long *)*param_1;
        if (plVar15[3] == plVar15[4]) {
          (**(code **)(*plVar15 + 0x50))();
        }
        else {
          plVar15[3] = plVar15[3] + 4;
        }
        uVar19 = (ulong)(byte)((byte)*local_2c0 >> 1);
        if (((byte)*local_2c0 & 1) != 0) {
          uVar19 = local_2c0[1];
        }
        uVar21 = (ulong)((int)uVar16 + 1);
        plVar15 = plVar11;
        uVar13 = uVar16;
      } while (uVar16 < uVar19);
    }
  }
  if (__ptr != piVar22) {
    local_288 = 0;
    FUN_0072c15c(&local_220,__ptr,piVar22,&local_288);
    piVar22 = __ptr;
    if (local_288 != 0) {
      uVar23 = *param_6;
LAB_0072d78c:
      uVar9 = 0;
      *param_6 = uVar23 | 4;
      goto joined_r0x0072d690;
    }
  }
  uVar9 = 1;
  __ptr = piVar22;
joined_r0x0072d690:
  if ((local_280 & 1) != 0) {
    free(local_270);
  }
  if ((local_268 & 1) != 0) {
    free(local_258);
  }
  if ((local_250 & 1) != 0) {
    free(local_240);
  }
  if ((local_238 & 1) != 0) {
    free(local_228);
  }
  if ((local_220 & 1) != 0) {
    free(local_210);
  }
  if (__ptr != (int *)0x0) {
                    /* try { // try from 0072d700 to 0072d70b has its CatchHandler @ 0072d7c8 */
    (*local_2b8)(__ptr);
  }
  return uVar9;
}


// ===== 0072d8c8  FUN_0072d8c8 =====

long * FUN_0072d8c8(undefined8 param_1,long *param_2,long *param_3,uint param_4,long param_5,
                   uint *param_6,ulong *param_7)

{
  byte bVar1;
  int *piVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long *plVar9;
  ulong uVar10;
  long local_228;
  long local_220;
  int *local_218;
  code *local_210;
  int local_208 [100];
  long *local_78;
  undefined *local_70;
  undefined ***local_68;
  undefined **local_48;
  
  local_218 = local_208;
  local_210 = (code *)PTR_FUN_007a38f0;
                    /* try { // try from 0072d914 to 0072d91f has its CatchHandler @ 0072dbb4 */
  local_78 = param_2;
  FUN_00715df0(&local_228,param_5);
  puVar3 = PTR_DAT_007a2640;
  local_70 = PTR_DAT_007a2640;
  if (*(long *)PTR_DAT_007a2640 != -1) {
    local_48 = &local_70;
    local_68 = &local_48;
                    /* try { // try from 0072d94c to 0072d963 has its CatchHandler @ 0072dbc8 */
    FUN_00710f84(PTR_DAT_007a2640,&local_68,FUN_007374a0);
  }
  if (((ulong)(*(long *)(local_228 + 0x18) - *(long *)(local_228 + 0x10) >> 3) <=
       (long)*(int *)(puVar3 + 8) - 1U) ||
     (plVar9 = *(long **)(*(long *)(local_228 + 0x10) + ((long)*(int *)(puVar3 + 8) - 1U) * 8),
     plVar9 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0072dba4 to 0072dba7 has its CatchHandler @ 0072dbc8 */
    FUN_007191ac();
  }
  local_48 = (undefined **)((ulong)local_48 & 0xffffffffffffff00);
                    /* try { // try from 0072d990 to 0072da57 has its CatchHandler @ 0072dbc4 */
  uVar7 = FUN_0072c59c(&local_78,param_3,param_4 & 1,&local_228,*(undefined4 *)(param_5 + 8),param_6
                       ,&local_48,plVar9,&local_218,&local_220,&local_78);
  if ((uVar7 & 1) != 0) {
    if ((*param_7 & 1) == 0) {
      *(undefined4 *)((long)param_7 + 4) = 0;
      *(undefined1 *)param_7 = 0;
    }
    else {
      *(undefined4 *)param_7[2] = 0;
      param_7[1] = 0;
    }
    if ((char)local_48 != '\0') {
      uVar5 = (**(code **)(*plVar9 + 0x58))(plVar9,0x2d);
      bVar1 = (byte)*param_7;
      if ((bVar1 & 1) == 0) {
        if (bVar1 == 8) {
          uVar10 = 4;
LAB_0072da38:
          uVar7 = uVar10;
          FUN_0071414c(param_7,uVar7,1,uVar7,uVar7,0,0);
          goto LAB_0072da5c;
        }
        uVar7 = (ulong)(bVar1 >> 1);
        puVar8 = (undefined1 *)((long)param_7 + 4);
        *(byte *)param_7 = bVar1 + 2;
      }
      else {
        uVar7 = param_7[1];
        uVar10 = (*param_7 & 0xfffffffffffffffe) - 1;
        if (uVar7 == uVar10) goto LAB_0072da38;
LAB_0072da5c:
        puVar8 = (undefined1 *)param_7[2];
        param_7[1] = uVar7 + 1;
      }
      *(undefined4 *)(puVar8 + uVar7 * 4) = uVar5;
      *(undefined4 *)((long)(puVar8 + uVar7 * 4) + 4) = 0;
    }
                    /* try { // try from 0072da8c to 0072da97 has its CatchHandler @ 0072dbac */
    iVar6 = (**(code **)(*plVar9 + 0x58))(plVar9,0x30);
    for (piVar2 = local_218; (piVar2 < (int *)(local_220 + -4) && (*piVar2 == iVar6));
        piVar2 = piVar2 + 1) {
    }
                    /* try { // try from 0072dac0 to 0072dac7 has its CatchHandler @ 0072dba8 */
    FUN_0072dbf4(param_7);
  }
  if (local_78 == (long *)0x0) {
LAB_0072db14:
    bVar4 = true;
    if (param_3 == (long *)0x0) goto LAB_0072db08;
LAB_0072db1c:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar6 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar6 = *(int *)param_3[3];
    }
    if (bVar4 != (iVar6 == -1)) goto LAB_0072db5c;
  }
  else {
    if ((int *)local_78[3] == (int *)local_78[4]) {
                    /* try { // try from 0072daec to 0072db3f has its CatchHandler @ 0072dbc4 */
      iVar6 = (**(code **)(*local_78 + 0x48))();
    }
    else {
      iVar6 = *(int *)local_78[3];
    }
    if (iVar6 == -1) {
      local_78 = (long *)0x0;
      goto LAB_0072db14;
    }
    bVar4 = local_78 == (long *)0x0;
    if (param_3 != (long *)0x0) goto LAB_0072db1c;
LAB_0072db08:
    if (!bVar4) goto LAB_0072db5c;
  }
  *param_6 = *param_6 | 2;
LAB_0072db5c:
  plVar9 = local_78;
  FUN_00732094(&local_228);
  piVar2 = local_218;
  local_218 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
                    /* try { // try from 0072db78 to 0072db7b has its CatchHandler @ 0072dbb0 */
    (*local_210)();
  }
  return plVar9;
}


// ===== 0072dbf4  FUN_0072dbf4 =====

ulong * FUN_0072dbf4(ulong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  size_t __n;
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  void *pvVar15;
  byte bVar16;
  ulong uVar17;
  ulong uVar18;
  undefined4 *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulong local_78;
  ulong local_70;
  void *local_68;
  
  uVar4 = *param_1;
  uVar14 = param_1[1];
  bVar6 = ((byte)*param_1 & 1) != 0;
  lVar20 = (uVar4 & 0xfffffffffffffffe) - 1;
  uVar2 = (ulong)(byte)((byte)*param_1 >> 1);
  if (bVar6) {
    uVar2 = uVar14;
  }
  lVar3 = 4;
  if (bVar6) {
    lVar3 = lVar20;
  }
  uVar11 = (long)param_3 - (long)param_2;
  if (uVar11 == 0) {
    return param_1;
  }
  puVar19 = (undefined4 *)param_1[2];
  uVar8 = (uint)uVar4;
  puVar10 = (undefined4 *)((long)param_1 + 4);
  uVar18 = uVar4 >> 1 & 0x7f;
  uVar17 = (long)uVar11 >> 2;
  uVar1 = uVar18;
  puVar9 = puVar10;
  if ((uVar4 & 1) != 0) {
    uVar1 = uVar14;
    puVar9 = puVar19;
  }
  if ((puVar9 <= param_2) && (param_2 < puVar9 + uVar1 + 1)) {
    if (0x3ffffffffffffff7 < uVar17) {
      uVar7 = FUN_002f9e4c(&local_78);
                    /* catch() { ... } // from try @ 0072dde0 with catch @ 0072def8 */
      if ((local_78 & 1) != 0) {
        free(local_68);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar7);
    }
    if (uVar17 < 5) {
      pvVar15 = (void *)((ulong)&local_78 | 4);
      local_78 = CONCAT71(local_78._1_7_,(char)(uVar11 >> 1)) & 0xfffffffffffffffe;
    }
    else {
      uVar2 = (uVar17 & 0x3ffffffffffffffe) + 2;
      if ((uVar17 | 1) != 5) {
        uVar2 = uVar17 | 1;
      }
      pvVar15 = (void *)FUN_00759c3c((uVar2 + 1) * 4);
      local_78 = uVar2 + 1 | 1;
      local_70 = uVar17;
      local_68 = pvVar15;
    }
    __n = (uVar11 - 4 & 0xfffffffffffffffc) + 4;
    memcpy(pvVar15,param_2,__n);
    *(undefined4 *)((long)pvVar15 + __n) = 0;
    bVar16 = (byte)local_78 & 1;
    uVar2 = (ulong)((byte)local_78 >> 1);
    pvVar15 = (void *)((ulong)&local_78 | 4);
    if ((local_78 & 1) != 0) {
      uVar2 = local_70;
      pvVar15 = local_68;
    }
    lVar3 = 4;
    if ((uVar4 & 1) != 0) {
      lVar3 = lVar20;
    }
    if ((uVar4 & 1) != 0) {
      uVar18 = uVar14;
    }
    if (lVar3 - uVar18 < uVar2) {
                    /* try { // try from 0072dde0 to 0072ddf7 has its CatchHandler @ 0072def8 */
      FUN_00713d0c(param_1,lVar3,(uVar2 - lVar3) + uVar18,uVar18,uVar18,0);
      bVar16 = (byte)local_78 & 1;
    }
    else if (uVar2 != 0) {
      if ((uVar4 & 1) != 0) {
        puVar10 = puVar19;
      }
      memmove(puVar10 + uVar18,pvVar15,uVar2 << 2);
      uVar18 = uVar18 + uVar2;
      if ((*param_1 & 1) == 0) {
        *(char *)param_1 = (char)((int)uVar18 << 1);
      }
      else {
        param_1[1] = uVar18;
      }
      puVar10[uVar18] = 0;
    }
    if (bVar16 == 0) {
      return param_1;
    }
    free(local_68);
    return param_1;
  }
  if (lVar3 - uVar2 < uVar17) {
    FUN_0071414c(param_1,lVar3,(uVar2 + uVar17) - lVar3,uVar2,uVar2,0,0);
    puVar19 = (undefined4 *)param_1[2];
    param_1[1] = uVar2;
    uVar8 = (uint)(byte)*param_1;
  }
  if ((uVar8 & 1) != 0) {
    puVar10 = puVar19;
  }
  puVar9 = puVar10 + uVar2;
  if ((0x1b < uVar11 - 4) && (0x1f < (long)puVar10 + (uVar2 * 4 - (long)param_2))) {
    puVar12 = (undefined8 *)(puVar10 + uVar2 + 4);
    uVar4 = (uVar11 - 4 >> 2) + 1;
    uVar11 = uVar4 & 0x7ffffffffffffff8;
    puVar9 = puVar9 + uVar11;
    puVar13 = (undefined8 *)(param_2 + 4);
    uVar14 = uVar11;
    do {
      puVar5 = puVar13 + -1;
      uVar7 = puVar13[-2];
      uVar22 = puVar13[1];
      uVar21 = *puVar13;
      uVar14 = uVar14 - 8;
      puVar13 = puVar13 + 4;
      puVar12[-1] = *puVar5;
      puVar12[-2] = uVar7;
      puVar12[1] = uVar22;
      *puVar12 = uVar21;
      puVar12 = puVar12 + 4;
    } while (uVar14 != 0);
    param_2 = param_2 + uVar11;
    if (uVar4 == uVar11) goto LAB_0072de90;
  }
  do {
    puVar19 = param_2 + 1;
    puVar10 = puVar9 + 1;
    *puVar9 = *param_2;
    puVar9 = puVar10;
    param_2 = puVar19;
  } while (puVar19 != param_3);
LAB_0072de90:
  *puVar9 = 0;
  if ((*param_1 & 1) == 0) {
    *(char *)param_1 = (char)((int)(uVar2 + uVar17) << 1);
  }
  else {
    param_1[1] = uVar2 + uVar17;
  }
  return param_1;
}


// ===== 0072df14  FUN_0072df14 =====

void FUN_0072df14(ulong param_1,long *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,byte *param_6,byte *param_7,byte *param_8,byte *param_9,
                 undefined4 *param_10)

{
  long lVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 **local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 ***local_48;
  
  lVar4 = *param_2;
  if ((param_1 & 1) == 0) {
    puVar6 = &DAT_007b08d0;
    local_68 = &DAT_007b08d0;
    puVar3 = PTR_DAT_007a3910;
    if (DAT_007b08d0 == -1) goto LAB_0072dfd0;
  }
  else {
    puVar6 = &DAT_007b08e0;
    local_68 = &DAT_007b08e0;
    puVar3 = PTR_DAT_007a3908;
    if (DAT_007b08e0 == -1) goto LAB_0072dfd0;
  }
  local_48 = &local_80;
  local_80 = &local_68;
  FUN_00710f84(puVar3,&local_48,FUN_007374a0);
LAB_0072dfd0:
  lVar1 = *(long *)(lVar4 + 0x10);
  if (((long)*(int *)(puVar6 + 1) - 1U < (ulong)(*(long *)(lVar4 + 0x18) - lVar1 >> 3)) &&
     (plVar5 = *(long **)(lVar1 + ((long)*(int *)(puVar6 + 1) - 1U) * 8), plVar5 != (long *)0x0)) {
    uVar2 = (**(code **)(*plVar5 + 0x58))(plVar5);
    *param_3 = uVar2;
    (**(code **)(*plVar5 + 0x40))(&local_80,plVar5);
    if ((*param_9 & 1) != 0) {
      free(*(void **)(param_9 + 0x10));
    }
    *(undefined8 *)(param_9 + 8) = uStack_78;
    *(undefined8 ***)param_9 = local_80;
    *(undefined8 *)(param_9 + 0x10) = local_70;
    (**(code **)(*plVar5 + 0x38))(&local_80,plVar5);
    if ((*param_8 & 1) != 0) {
      free(*(void **)(param_8 + 0x10));
    }
    *(undefined8 *)(param_8 + 8) = uStack_78;
    *(undefined8 ***)param_8 = local_80;
    *(undefined8 *)(param_8 + 0x10) = local_70;
    uVar2 = (**(code **)(*plVar5 + 0x18))(plVar5);
    *param_4 = uVar2;
    uVar2 = (**(code **)(*plVar5 + 0x20))(plVar5);
    *param_5 = uVar2;
    (**(code **)(*plVar5 + 0x28))(&local_80,plVar5);
    if ((*param_6 & 1) != 0) {
      free(*(void **)(param_6 + 0x10));
    }
    *(undefined8 *)(param_6 + 8) = uStack_78;
    *(undefined8 ***)param_6 = local_80;
    *(undefined8 *)(param_6 + 0x10) = local_70;
    (**(code **)(*plVar5 + 0x30))(&local_80,plVar5);
    if ((*param_7 & 1) != 0) {
      free(*(void **)(param_7 + 0x10));
    }
    *(undefined8 *)(param_7 + 8) = uStack_78;
    *(undefined8 ***)param_7 = local_80;
    *(undefined8 *)(param_7 + 0x10) = local_70;
    uVar2 = (**(code **)(*plVar5 + 0x48))(plVar5);
    *param_10 = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_007191ac();
}


// ===== 0072e13c  FUN_0072e13c =====

undefined8
FUN_0072e13c(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,long param_5,
            undefined4 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined1 *__ptr;
  undefined8 uVar7;
  char *__ptr_00;
  long lVar8;
  undefined1 *puVar9;
  undefined ***__ptr_01;
  long *plVar10;
  undefined ***pppuVar11;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined **local_208 [12];
  int local_1a4;
  ulong local_1a0;
  ulong local_198;
  void *local_190;
  undefined *local_188;
  ulong local_180;
  void *local_178;
  undefined ***local_170;
  undefined8 uStack_168;
  void *local_160;
  undefined1 local_154 [4];
  undefined1 local_150 [4];
  undefined1 auStack_14c [4];
  long local_148;
  undefined1 auStack_13c [100];
  char *local_d8;
  char local_cc [108];
  
  local_d8 = local_cc;
  uVar5 = snprintf(local_cc,100,"%.0Lf");
  if (99 < uVar5) {
    if (((DAT_007b0958 & 1) == 0) && (iVar6 = FUN_00739c1c(&DAT_007b0958), iVar6 != 0)) {
                    /* try { // try from 0072e4c8 to 0072e4db has its CatchHandler @ 0072e500 */
      DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_00739d60(&DAT_007b0958);
    }
                    /* try { // try from 0072e1b0 to 0072e1c7 has its CatchHandler @ 0072e554 */
    uVar5 = FUN_0072e5e8(param_1,&local_d8,DAT_007b0950,"%.0Lf");
    __ptr_00 = local_d8;
    if (uVar5 == 0xffffffff) {
                    /* try { // try from 0072e4f0 to 0072e4fb has its CatchHandler @ 0072e554 */
      FUN_00712520();
    }
    else {
      __ptr = (undefined1 *)malloc((long)(int)uVar5);
      puVar9 = __ptr;
      if (__ptr != (undefined1 *)0x0) goto LAB_0072e200;
    }
    FUN_00712520();
LAB_0072e4fc:
                    /* try { // try from 0072e4fc to 0072e4ff has its CatchHandler @ 0072e518 */
    uVar7 = FUN_00712520();
                    /* catch() { ... } // from try @ 0072e4c8 with catch @ 0072e500 */
    FUN_00739e08(&DAT_007b0958);
                    /* WARNING: Subroutine does not return */
    FUN_00755eac(uVar7);
  }
  __ptr = (undefined1 *)0x0;
  __ptr_00 = (char *)0x0;
  puVar9 = auStack_13c;
LAB_0072e200:
                    /* try { // try from 0072e200 to 0072e20f has its CatchHandler @ 0072e54c */
  FUN_00715df0(&local_148,param_5);
  puVar3 = PTR_DAT_007a1108;
  local_188 = PTR_DAT_007a1108;
  if (*(long *)PTR_DAT_007a1108 != -1) {
    local_208[0] = &local_188;
    local_170 = local_208;
                    /* try { // try from 0072e23c to 0072e293 has its CatchHandler @ 0072e5a8 */
    FUN_00710f84(PTR_DAT_007a1108,&local_170,FUN_007374a0);
  }
  if (((ulong)(*(long *)(local_148 + 0x18) - *(long *)(local_148 + 0x10) >> 3) <=
       (long)*(int *)(puVar3 + 8) - 1U) ||
     (plVar10 = *(long **)(*(long *)(local_148 + 0x10) + ((long)*(int *)(puVar3 + 8) - 1U) * 8),
     plVar10 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0072e4b4 to 0072e4b7 has its CatchHandler @ 0072e5a8 */
    FUN_007191ac();
  }
  lVar8 = (long)(int)uVar5;
  (**(code **)(*plVar10 + 0x40))(plVar10,local_d8,local_d8 + lVar8,puVar9);
  if ((int)uVar5 < 1) {
    bVar4 = false;
  }
  else {
    bVar4 = *local_d8 == '-';
  }
  local_170 = (undefined ***)0x0;
  uStack_168 = 0;
  local_160 = (void *)0x0;
  local_188 = (undefined *)0x0;
  local_180 = 0;
  local_178 = (void *)0x0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = (void *)0x0;
                    /* try { // try from 0072e2d0 to 0072e2ff has its CatchHandler @ 0072e51c */
  FUN_0072e6b4(param_4 & 1,bVar4,&local_148,auStack_14c,local_150,local_154,&local_170,&local_188,
               &local_1a0,&local_1a4);
  if (local_1a4 < (int)uVar5) {
    uVar1 = (ulong)((byte)local_1a0 >> 1);
    if ((local_1a0 & 1) != 0) {
      uVar1 = local_198;
    }
    uVar2 = (ulong)((byte)local_188 >> 1);
    if (((ulong)local_188 & 1) != 0) {
      uVar2 = local_180;
    }
    uVar1 = (lVar8 * 2 - (long)local_1a4) + uVar1 + uVar2 + 1;
  }
  else {
    uVar1 = (ulong)((byte)local_1a0 >> 1);
    if ((local_1a0 & 1) != 0) {
      uVar1 = local_198;
    }
    uVar2 = (ulong)((byte)local_188 >> 1);
    if (((ulong)local_188 & 1) != 0) {
      uVar2 = local_180;
    }
    uVar1 = (long)local_1a4 + uVar1 + uVar2 + 2;
  }
  if (uVar1 < 0x65) {
    __ptr_01 = (undefined ***)0x0;
    pppuVar11 = local_208;
  }
  else {
    __ptr_01 = (undefined ***)malloc(uVar1);
    pppuVar11 = __ptr_01;
    if (__ptr_01 == (undefined ***)0x0) goto LAB_0072e4fc;
  }
                    /* try { // try from 0072e3b4 to 0072e413 has its CatchHandler @ 0072e568 */
  FUN_0072e8c8(pppuVar11,&uStack_210,&local_218,*(undefined4 *)(param_5 + 8),puVar9,puVar9 + lVar8,
               plVar10,bVar4,auStack_14c,local_150[0],local_154[0],&local_170,&local_188,&local_1a0,
               local_1a4);
  uVar7 = FUN_00303fb0(param_3,pppuVar11,uStack_210,local_218,param_5,param_6);
  if (__ptr_01 != (undefined ***)0x0) {
    free(__ptr_01);
  }
  if ((local_1a0 & 1) != 0) {
    free(local_190);
  }
  if (((ulong)local_188 & 1) != 0) {
    free(local_178);
  }
  if (((ulong)local_170 & 1) != 0) {
    free(local_160);
  }
  FUN_00732094(&local_148);
  if (__ptr != (undefined1 *)0x0) {
    free(__ptr);
  }
  if (__ptr_00 != (char *)0x0) {
    free(__ptr_00);
  }
  return uVar7;
}


// ===== 0072e5e8  FUN_0072e5e8 =====

int FUN_0072e5e8(char **param_1,__locale_t param_2,char *param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  __locale_t __dataset;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined1 **ppuStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  __locale_t local_58;
  
  local_a8 = param_4;
  uStack_a0 = param_5;
  local_98 = param_6;
  uStack_90 = param_7;
  local_88 = param_8;
  __dataset = uselocale(param_2);
  uStack_68 = 0xffffff80ffffffd8;
                    /* try { // try from 0072e660 to 0072e66f has its CatchHandler @ 0072e6a0 */
  local_80 = (undefined1 *)register0x00000008;
  ppuStack_78 = &local_80;
  puStack_70 = auStack_b0;
  local_58 = __dataset;
  iVar1 = vasprintf(param_1,param_3,&local_80);
  if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 0072e678 to 0072e67f has its CatchHandler @ 0072e69c */
    uselocale(__dataset);
  }
  return iVar1;
}


// ===== 0072e6b4  FUN_0072e6b4 =====

void FUN_0072e6b4(ulong param_1,ulong param_2,long *param_3,undefined4 *param_4,undefined1 *param_5,
                 undefined1 *param_6,byte *param_7,byte *param_8,byte *param_9,undefined4 *param_10)

{
  long lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 **local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 ***local_48;
  
  lVar6 = *param_3;
  if ((param_1 & 1) == 0) {
    puVar8 = &DAT_007b08b0;
    local_68 = &DAT_007b08b0;
    puVar4 = PTR_DAT_007a3900;
    if (DAT_007b08b0 == -1) goto LAB_0072e770;
  }
  else {
    puVar8 = &DAT_007b08c0;
    local_68 = &DAT_007b08c0;
    puVar4 = PTR_DAT_007a38f8;
    if (DAT_007b08c0 == -1) goto LAB_0072e770;
  }
  local_48 = &local_80;
  local_80 = &local_68;
  FUN_00710f84(puVar4,&local_48,FUN_007374a0);
LAB_0072e770:
  lVar1 = *(long *)(lVar6 + 0x10);
  if (((long)*(int *)(puVar8 + 1) - 1U < (ulong)(*(long *)(lVar6 + 0x18) - lVar1 >> 3)) &&
     (plVar7 = *(long **)(lVar1 + ((long)*(int *)(puVar8 + 1) - 1U) * 8), plVar7 != (long *)0x0)) {
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
    (*pcVar5)(&local_80,plVar7);
    if ((*param_9 & 1) != 0) {
      free(*(void **)(param_9 + 0x10));
    }
    *(undefined8 *)(param_9 + 8) = uStack_78;
    *(undefined8 ***)param_9 = local_80;
    *(undefined8 *)(param_9 + 0x10) = local_70;
    uVar2 = (**(code **)(*plVar7 + 0x18))(plVar7);
    *param_5 = uVar2;
    uVar2 = (**(code **)(*plVar7 + 0x20))(plVar7);
    *param_6 = uVar2;
    (**(code **)(*plVar7 + 0x28))(&local_80,plVar7);
    if ((*param_7 & 1) != 0) {
      free(*(void **)(param_7 + 0x10));
    }
    *(undefined8 *)(param_7 + 8) = uStack_78;
    *(undefined8 ***)param_7 = local_80;
    *(undefined8 *)(param_7 + 0x10) = local_70;
    (**(code **)(*plVar7 + 0x30))(&local_80,plVar7);
    if ((*param_8 & 1) != 0) {
      free(*(void **)(param_8 + 0x10));
    }
    *(undefined8 *)(param_8 + 8) = uStack_78;
    *(undefined8 ***)param_8 = local_80;
    *(undefined8 *)(param_8 + 0x10) = local_70;
    uVar3 = (**(code **)(*plVar7 + 0x48))(plVar7);
    *param_10 = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_007191ac();
}


// ===== 0072e8c8  FUN_0072e8c8 =====

void FUN_0072e8c8(long param_1,long *param_2,long *param_3,uint param_4,char *param_5,char *param_6,
                 long *param_7,ulong param_8,long param_9,undefined1 param_10,undefined1 param_11,
                 byte *param_12,byte *param_13,byte *param_14,int param_15)

{
  ulong uVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  size_t sVar5;
  int iVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  ulong uVar16;
  uint uVar17;
  char *pcVar18;
  long lVar19;
  void *pvVar20;
  int iVar21;
  undefined1 *puVar22;
  
  lVar19 = 0;
  *param_3 = param_1;
  do {
    bVar4 = *(byte *)(param_9 + lVar19);
    if (bVar4 < 2) {
      if (bVar4 == 0) {
        *param_2 = *param_3;
      }
      else if (bVar4 == 1) {
        lVar13 = *param_7;
        *param_2 = *param_3;
        uVar8 = (**(code **)(lVar13 + 0x38))(param_7,0x20);
        puVar22 = (undefined1 *)*param_3;
        *param_3 = (long)(puVar22 + 1);
        *puVar22 = uVar8;
      }
    }
    else if (bVar4 == 2) {
      bVar4 = *param_13;
      sVar5 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        sVar5 = *(size_t *)(param_13 + 8);
      }
      if (((param_4 >> 9 & 1) != 0) && (sVar5 != 0)) {
        pvVar20 = (void *)*param_3;
        pbVar2 = param_13 + 1;
        if ((bVar4 & 1) != 0) {
          pbVar2 = *(byte **)(param_13 + 0x10);
        }
        memmove(pvVar20,pbVar2,sVar5);
        *param_3 = (long)pvVar20 + sVar5;
      }
    }
    else if (bVar4 == 3) {
      bVar7 = (*param_14 & 1) != 0;
      uVar16 = (ulong)(*param_14 >> 1);
      if (bVar7) {
        uVar16 = *(ulong *)(param_14 + 8);
      }
      if (uVar16 != 0) {
        pbVar14 = (byte *)*param_3;
        pbVar2 = param_14 + 1;
        if (bVar7) {
          pbVar2 = *(byte **)(param_14 + 0x10);
        }
        bVar4 = *pbVar2;
        *param_3 = (long)(pbVar14 + 1);
        *pbVar14 = bVar4;
      }
    }
    else if (bVar4 == 4) {
      param_5 = param_5 + (param_8 & 1);
      pcVar10 = param_5;
      if (param_5 < param_6) {
        pcVar18 = param_5;
        do {
          pcVar10 = pcVar18;
          if (((long)*pcVar18 < 0) ||
             (((uint)*(undefined8 *)(param_7[2] + (long)*pcVar18 * 8) >> 6 & 1) == 0)) break;
          pcVar18 = pcVar18 + 1;
          pcVar10 = param_6;
        } while (pcVar18 < param_6);
      }
      puVar22 = (undefined1 *)*param_3;
      if (0 < param_15) {
        iVar6 = param_15;
        if (param_5 < pcVar10) {
          do {
            iVar21 = iVar6;
            pcVar10 = pcVar10 + -1;
            pcVar18 = (char *)*param_3;
            cVar3 = *pcVar10;
            *param_3 = (long)(pcVar18 + 1);
            *pcVar18 = cVar3;
            if (pcVar10 <= param_5) break;
            iVar6 = iVar21 + -1;
          } while (iVar21 != 1);
          iVar6 = iVar21 + -1;
          if (iVar21 != 1) goto LAB_0072eb14;
        }
        else {
LAB_0072eb14:
          uVar8 = (**(code **)(*param_7 + 0x38))(param_7,0x30);
          if (0 < iVar6) {
            uVar9 = iVar6 + 1;
            do {
              puVar11 = (undefined1 *)*param_3;
              uVar9 = uVar9 - 1;
              *param_3 = (long)(puVar11 + 1);
              *puVar11 = uVar8;
            } while (1 < uVar9);
          }
        }
        puVar11 = (undefined1 *)*param_3;
        *param_3 = (long)(puVar11 + 1);
        *puVar11 = param_10;
      }
      if (pcVar10 == param_5) {
        uVar8 = (**(code **)(*param_7 + 0x38))(param_7,0x30);
        puVar11 = (undefined1 *)*param_3;
        *param_3 = (long)(puVar11 + 1);
        *puVar11 = uVar8;
      }
      else {
        bVar4 = *param_12;
        uVar16 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          uVar16 = *(ulong *)(param_12 + 8);
        }
        if (uVar16 == 0) {
          uVar9 = 0xffffffff;
        }
        else {
          pbVar2 = param_12 + 1;
          if ((bVar4 & 1) != 0) {
            pbVar2 = *(byte **)(param_12 + 0x10);
          }
          uVar9 = (uint)*pbVar2;
        }
        uVar16 = 0;
        uVar17 = 0;
        do {
          if (uVar17 == uVar9) {
            puVar11 = (undefined1 *)*param_3;
            uVar16 = (ulong)((int)uVar16 + 1);
            *param_3 = (long)(puVar11 + 1);
            *puVar11 = param_11;
            bVar4 = *param_12;
            uVar1 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              uVar1 = *(ulong *)(param_12 + 8);
            }
            if (uVar16 < uVar1) {
              pbVar2 = param_12 + 1;
              if ((bVar4 & 1) != 0) {
                pbVar2 = *(byte **)(param_12 + 0x10);
              }
              if (pbVar2[uVar16] == 0xff) {
                uVar17 = 0;
                uVar9 = 0xffffffff;
                goto LAB_0072ec20;
              }
              uVar9 = (uint)pbVar2[uVar16];
            }
            uVar17 = 0;
          }
LAB_0072ec20:
          pcVar18 = (char *)*param_3;
          pcVar10 = pcVar10 + -1;
          cVar3 = *pcVar10;
          uVar17 = uVar17 + 1;
          *param_3 = (long)(pcVar18 + 1);
          *pcVar18 = cVar3;
        } while (pcVar10 != param_5);
      }
      if ((puVar22 != (undefined1 *)*param_3) &&
         (puVar11 = (undefined1 *)*param_3 + -1, puVar22 < puVar11)) {
        do {
          puVar15 = puVar22 + 1;
          uVar8 = *puVar22;
          *puVar22 = *puVar11;
          puVar12 = puVar11 + -1;
          *puVar11 = uVar8;
          puVar11 = puVar12;
          puVar22 = puVar15;
        } while (puVar15 < puVar12);
      }
    }
    lVar19 = lVar19 + 1;
    if (lVar19 == 4) {
      bVar4 = *param_14;
      uVar16 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar16 = *(ulong *)(param_14 + 8);
      }
      sVar5 = uVar16 - 1;
      if (uVar16 != 0 && sVar5 != 0) {
        pvVar20 = (void *)*param_3;
        pbVar2 = param_14 + 1;
        if ((bVar4 & 1) != 0) {
          pbVar2 = *(byte **)(param_14 + 0x10);
        }
        memmove(pvVar20,pbVar2 + 1,sVar5);
        *param_3 = (long)pvVar20 + sVar5;
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


// ===== 0072ed34  FUN_0072ed34 =====

undefined8
FUN_0072ed34(undefined8 param_1,undefined8 param_2,uint param_3,long param_4,undefined4 param_5,
            byte *param_6)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  byte bVar6;
  ulong uVar7;
  undefined ***__ptr;
  undefined8 uVar8;
  byte *pbVar9;
  long *plVar10;
  undefined ***pppuVar11;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined **local_130 [12];
  int local_cc;
  ulong local_c8;
  ulong local_c0;
  void *local_b8;
  undefined *local_b0;
  ulong local_a8;
  void *local_a0;
  undefined ***local_98;
  undefined8 uStack_90;
  void *local_88;
  undefined1 local_7c [4];
  undefined1 local_78 [4];
  undefined1 auStack_74 [4];
  long local_70 [2];
  
  FUN_00715df0(local_70,param_4);
  puVar4 = PTR_DAT_007a1108;
  local_b0 = PTR_DAT_007a1108;
  if (*(long *)PTR_DAT_007a1108 != -1) {
    local_130[0] = &local_b0;
    local_98 = local_130;
                    /* try { // try from 0072eda4 to 0072edbb has its CatchHandler @ 0072f0a4 */
    FUN_00710f84(PTR_DAT_007a1108,&local_98,FUN_007374a0);
  }
  if (((ulong)(*(long *)(local_70[0] + 0x18) - *(long *)(local_70[0] + 0x10) >> 3) <=
       (long)*(int *)(puVar4 + 8) - 1U) ||
     (plVar10 = *(long **)(*(long *)(local_70[0] + 0x10) + ((long)*(int *)(puVar4 + 8) - 1U) * 8),
     plVar10 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0072f028 to 0072f02b has its CatchHandler @ 0072f0a4 */
    FUN_007191ac();
  }
  bVar3 = *param_6;
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_6 + 8);
  }
  if (uVar1 == 0) {
    bVar5 = false;
  }
  else {
    pbVar9 = *(byte **)(param_6 + 0x10);
    if ((bVar3 & 1) == 0) {
      pbVar9 = param_6 + 1;
    }
    bVar3 = *pbVar9;
                    /* try { // try from 0072ee0c to 0072ee17 has its CatchHandler @ 0072f030 */
    bVar6 = (**(code **)(*plVar10 + 0x38))(plVar10,0x2d);
    bVar5 = bVar3 == bVar6;
  }
  local_98 = (undefined ***)0x0;
  uStack_90 = 0;
  local_88 = (void *)0x0;
  local_b0 = (undefined *)0x0;
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = (void *)0x0;
                    /* try { // try from 0072ee40 to 0072ee6f has its CatchHandler @ 0072f034 */
  FUN_0072e6b4(param_3 & 1,bVar5,local_70,auStack_74,local_78,local_7c,&local_98,&local_b0,&local_c8
               ,&local_cc);
  bVar3 = *param_6;
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_6 + 8);
  }
  if (local_cc < (int)uVar1) {
    uVar7 = (ulong)((byte)local_c8 >> 1);
    if ((local_c8 & 1) != 0) {
      uVar7 = local_c0;
    }
    uVar2 = (ulong)((byte)local_b0 >> 1);
    if (((ulong)local_b0 & 1) != 0) {
      uVar2 = local_a8;
    }
    uVar7 = (uVar1 * 2 - (long)local_cc) + uVar7 + uVar2 + 1;
  }
  else {
    uVar7 = (ulong)((byte)local_c8 >> 1);
    if ((local_c8 & 1) != 0) {
      uVar7 = local_c0;
    }
    uVar2 = (ulong)((byte)local_b0 >> 1);
    if (((ulong)local_b0 & 1) != 0) {
      uVar2 = local_a8;
    }
    uVar7 = (long)local_cc + uVar7 + uVar2 + 2;
  }
  if (100 < uVar7) {
    __ptr = (undefined ***)malloc(uVar7);
    pppuVar11 = __ptr;
    if (__ptr != (undefined ***)0x0) goto LAB_0072ef30;
                    /* try { // try from 0072ef24 to 0072ef27 has its CatchHandler @ 0072f02c */
    FUN_00712520();
  }
  __ptr = (undefined ***)0x0;
  pppuVar11 = local_130;
LAB_0072ef30:
  pbVar9 = *(byte **)(param_6 + 0x10);
  if ((bVar3 & 1) == 0) {
    pbVar9 = param_6 + 1;
  }
                    /* try { // try from 0072ef48 to 0072efa3 has its CatchHandler @ 0072f064 */
  FUN_0072e8c8(pppuVar11,&uStack_138,&local_140,*(undefined4 *)(param_4 + 8),pbVar9,pbVar9 + uVar1,
               plVar10,bVar5,auStack_74,local_78[0],local_7c[0],&local_98,&local_b0,&local_c8,
               local_cc);
  uVar8 = FUN_00303fb0(param_2,pppuVar11,uStack_138,local_140,param_4,param_5);
  if (__ptr != (undefined ***)0x0) {
    free(__ptr);
  }
  if ((local_c8 & 1) != 0) {
    free(local_b8);
  }
  if (((ulong)local_b0 & 1) != 0) {
    free(local_a0);
  }
  if (((ulong)local_98 & 1) != 0) {
    free(local_88);
  }
  FUN_00732094(local_70);
  return uVar8;
}


// ===== 0072f0b8  FUN_0072f0b8 =====

undefined8
FUN_0072f0b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,long param_5,
            undefined4 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined1 *__ptr;
  undefined8 uVar7;
  char *__ptr_00;
  long lVar8;
  undefined1 *puVar9;
  undefined ***__ptr_01;
  long *plVar10;
  undefined ***pppuVar11;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined **local_460 [50];
  int local_2cc;
  ulong local_2c8;
  ulong local_2c0;
  void *local_2b8;
  undefined *local_2b0;
  ulong local_2a8;
  void *local_2a0;
  undefined ***local_298;
  undefined8 local_290;
  void *local_288;
  undefined4 local_27c;
  undefined4 local_278;
  undefined1 auStack_274 [4];
  long local_270;
  undefined1 auStack_268 [400];
  char *local_d8;
  char local_cc [108];
  
  local_d8 = local_cc;
  uVar5 = snprintf(local_cc,100,"%.0Lf");
  if (99 < uVar5) {
    if (((DAT_007b0958 & 1) == 0) && (iVar6 = FUN_00739c1c(&DAT_007b0958), iVar6 != 0)) {
                    /* try { // try from 0072f450 to 0072f463 has its CatchHandler @ 0072f488 */
      DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_00739d60(&DAT_007b0958);
    }
                    /* try { // try from 0072f12c to 0072f143 has its CatchHandler @ 0072f4dc */
    uVar5 = FUN_0072e5e8(param_1,&local_d8,DAT_007b0950,"%.0Lf");
    __ptr_00 = local_d8;
    if (uVar5 == 0xffffffff) {
                    /* try { // try from 0072f478 to 0072f483 has its CatchHandler @ 0072f4dc */
      FUN_00712520();
    }
    else {
      __ptr = (undefined1 *)malloc(-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2)
      ;
      puVar9 = __ptr;
      if (__ptr != (undefined1 *)0x0) goto LAB_0072f17c;
    }
    FUN_00712520();
LAB_0072f484:
                    /* try { // try from 0072f484 to 0072f487 has its CatchHandler @ 0072f4a0 */
    uVar7 = FUN_00712520();
                    /* catch() { ... } // from try @ 0072f450 with catch @ 0072f488 */
    FUN_00739e08(&DAT_007b0958);
                    /* WARNING: Subroutine does not return */
    FUN_00755eac(uVar7);
  }
  __ptr = (undefined1 *)0x0;
  __ptr_00 = (char *)0x0;
  puVar9 = auStack_268;
LAB_0072f17c:
                    /* try { // try from 0072f17c to 0072f18b has its CatchHandler @ 0072f4d4 */
  FUN_00715df0(&local_270,param_5);
  puVar3 = PTR_DAT_007a2640;
  local_2b0 = PTR_DAT_007a2640;
  if (*(long *)PTR_DAT_007a2640 != -1) {
    local_460[0] = &local_2b0;
    local_298 = local_460;
                    /* try { // try from 0072f1b8 to 0072f20f has its CatchHandler @ 0072f530 */
    FUN_00710f84(PTR_DAT_007a2640,&local_298,FUN_007374a0);
  }
  if (((ulong)(*(long *)(local_270 + 0x18) - *(long *)(local_270 + 0x10) >> 3) <=
       (long)*(int *)(puVar3 + 8) - 1U) ||
     (plVar10 = *(long **)(*(long *)(local_270 + 0x10) + ((long)*(int *)(puVar3 + 8) - 1U) * 8),
     plVar10 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0072f43c to 0072f43f has its CatchHandler @ 0072f530 */
    FUN_007191ac();
  }
  lVar8 = (long)(int)uVar5;
  (**(code **)(*plVar10 + 0x60))(plVar10,local_d8,local_d8 + lVar8,puVar9);
  if ((int)uVar5 < 1) {
    bVar4 = false;
  }
  else {
    bVar4 = *local_d8 == '-';
  }
  local_290 = 0;
  local_298 = (undefined ***)0x0;
  local_288 = (void *)0x0;
  local_2a8 = 0;
  local_2b0 = (undefined *)0x0;
  local_2a0 = (void *)0x0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2b8 = (void *)0x0;
                    /* try { // try from 0072f254 to 0072f283 has its CatchHandler @ 0072f4a4 */
  FUN_0072f570(param_4 & 1,bVar4,&local_270,auStack_274,&local_278,&local_27c,&local_298,&local_2b0,
               &local_2c8,&local_2cc);
  if (local_2cc < (int)uVar5) {
    uVar1 = (ulong)((byte)local_2c8 >> 1);
    if ((local_2c8 & 1) != 0) {
      uVar1 = local_2c0;
    }
    uVar2 = (ulong)((byte)local_2b0 >> 1);
    if (((ulong)local_2b0 & 1) != 0) {
      uVar2 = local_2a8;
    }
    uVar1 = (lVar8 * 2 - (long)local_2cc) + uVar1 + uVar2 + 1;
  }
  else {
    uVar1 = (ulong)((byte)local_2c8 >> 1);
    if ((local_2c8 & 1) != 0) {
      uVar1 = local_2c0;
    }
    uVar2 = (ulong)((byte)local_2b0 >> 1);
    if (((ulong)local_2b0 & 1) != 0) {
      uVar2 = local_2a8;
    }
    uVar1 = (long)local_2cc + uVar1 + uVar2 + 2;
  }
  if (uVar1 < 0x65) {
    __ptr_01 = (undefined ***)0x0;
    pppuVar11 = local_460;
  }
  else {
    __ptr_01 = (undefined ***)malloc(uVar1 << 2);
    pppuVar11 = __ptr_01;
    if (__ptr_01 == (undefined ***)0x0) goto LAB_0072f484;
  }
                    /* try { // try from 0072f340 to 0072f39b has its CatchHandler @ 0072f4f0 */
  FUN_0072f784(pppuVar11,&uStack_468,&local_470,*(undefined4 *)(param_5 + 8),puVar9,
               puVar9 + lVar8 * 4,plVar10,bVar4,auStack_274,local_278,local_27c,&local_298,
               &local_2b0,&local_2c8,local_2cc);
  uVar7 = FUN_00725838(param_3,pppuVar11,uStack_468,local_470,param_5,param_6);
  if (__ptr_01 != (undefined ***)0x0) {
    free(__ptr_01);
  }
  if ((local_2c8 & 1) != 0) {
    free(local_2b8);
  }
  if (((ulong)local_2b0 & 1) != 0) {
    free(local_2a0);
  }
  if (((ulong)local_298 & 1) != 0) {
    free(local_288);
  }
  FUN_00732094(&local_270);
  if (__ptr != (undefined1 *)0x0) {
    free(__ptr);
  }
  if (__ptr_00 != (char *)0x0) {
    free(__ptr_00);
  }
  return uVar7;
}


// ===== 0072f570  FUN_0072f570 =====

void FUN_0072f570(ulong param_1,ulong param_2,long *param_3,undefined4 *param_4,undefined4 *param_5,
                 undefined4 *param_6,byte *param_7,byte *param_8,byte *param_9,undefined4 *param_10)

{
  long lVar1;
  undefined4 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 **local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 ***local_48;
  
  lVar5 = *param_3;
  if ((param_1 & 1) == 0) {
    puVar7 = &DAT_007b08d0;
    local_68 = &DAT_007b08d0;
    puVar3 = PTR_DAT_007a3910;
    if (DAT_007b08d0 == -1) goto LAB_0072f62c;
  }
  else {
    puVar7 = &DAT_007b08e0;
    local_68 = &DAT_007b08e0;
    puVar3 = PTR_DAT_007a3908;
    if (DAT_007b08e0 == -1) goto LAB_0072f62c;
  }
  local_48 = &local_80;
  local_80 = &local_68;
  FUN_00710f84(puVar3,&local_48,FUN_007374a0);
LAB_0072f62c:
  lVar1 = *(long *)(lVar5 + 0x10);
  if (((long)*(int *)(puVar7 + 1) - 1U < (ulong)(*(long *)(lVar5 + 0x18) - lVar1 >> 3)) &&
     (plVar6 = *(long **)(lVar1 + ((long)*(int *)(puVar7 + 1) - 1U) * 8), plVar6 != (long *)0x0)) {
    if ((param_2 & 1) == 0) {
      uVar2 = (**(code **)(*plVar6 + 0x50))(plVar6);
      *param_4 = uVar2;
      pcVar4 = *(code **)(*plVar6 + 0x38);
    }
    else {
      uVar2 = (**(code **)(*plVar6 + 0x58))(plVar6);
      *param_4 = uVar2;
      pcVar4 = *(code **)(*plVar6 + 0x40);
    }
    (*pcVar4)(&local_80,plVar6);
    if ((*param_9 & 1) != 0) {
      free(*(void **)(param_9 + 0x10));
    }
    *(undefined8 *)(param_9 + 8) = uStack_78;
    *(undefined8 ***)param_9 = local_80;
    *(undefined8 *)(param_9 + 0x10) = local_70;
    uVar2 = (**(code **)(*plVar6 + 0x18))(plVar6);
    *param_5 = uVar2;
    uVar2 = (**(code **)(*plVar6 + 0x20))(plVar6);
    *param_6 = uVar2;
    (**(code **)(*plVar6 + 0x28))(&local_80,plVar6);
    if ((*param_7 & 1) != 0) {
      free(*(void **)(param_7 + 0x10));
    }
    *(undefined8 *)(param_7 + 8) = uStack_78;
    *(undefined8 ***)param_7 = local_80;
    *(undefined8 *)(param_7 + 0x10) = local_70;
    (**(code **)(*plVar6 + 0x30))(&local_80,plVar6);
    if ((*param_8 & 1) != 0) {
      free(*(void **)(param_8 + 0x10));
    }
    *(undefined8 *)(param_8 + 8) = uStack_78;
    *(undefined8 ***)param_8 = local_80;
    *(undefined8 *)(param_8 + 0x10) = local_70;
    uVar2 = (**(code **)(*plVar6 + 0x48))(plVar6);
    *param_10 = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_007191ac();
}


// ===== 0072f784  FUN_0072f784 =====

void FUN_0072f784(undefined4 *param_1,long *param_2,long *param_3,uint param_4,undefined4 *param_5,
                 undefined4 *param_6,long *param_7,uint param_8,long param_9,undefined4 param_10,
                 undefined4 param_11,byte *param_12,byte *param_13,byte *param_14,uint param_15)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  
  lVar1 = 4;
  if ((param_8 & 1) == 0) {
    lVar1 = 0;
  }
  lVar16 = 0;
  *param_3 = (long)param_1;
  puVar18 = param_1;
  puVar19 = param_1;
  do {
    bVar3 = *(byte *)(param_9 + lVar16);
    puVar17 = puVar19;
    if (bVar3 < 2) {
      if (bVar3 == 0) {
        *param_2 = (long)puVar18;
        puVar17 = puVar18;
      }
      else if (bVar3 == 1) {
        lVar7 = *param_7;
        *param_2 = (long)puVar18;
        uVar5 = (**(code **)(lVar7 + 0x58))(param_7,0x20);
        puVar18 = (undefined4 *)*param_3;
        *puVar18 = uVar5;
LAB_0072f9b4:
        puVar18 = puVar18 + 1;
        *param_3 = (long)puVar18;
        puVar17 = puVar18;
      }
    }
    else if (bVar3 == 2) {
      bVar3 = *param_13;
      uVar6 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar6 = *(ulong *)(param_13 + 8);
      }
      if (((param_4 >> 9 & 1) != 0) && (uVar6 != 0)) {
        pbVar2 = param_13 + 4;
        if ((bVar3 & 1) != 0) {
          pbVar2 = *(byte **)(param_13 + 0x10);
        }
        memmove(puVar18,pbVar2,uVar6 * 4);
        puVar18 = puVar18 + uVar6;
        *param_3 = (long)puVar18;
        puVar17 = puVar18;
      }
    }
    else if (bVar3 == 3) {
      bVar4 = (*param_14 & 1) != 0;
      uVar6 = (ulong)(*param_14 >> 1);
      if (bVar4) {
        uVar6 = *(ulong *)(param_14 + 8);
      }
      if (uVar6 != 0) {
        pbVar2 = param_14 + 4;
        if (bVar4) {
          pbVar2 = *(byte **)(param_14 + 0x10);
        }
        *puVar18 = *(undefined4 *)pbVar2;
        goto LAB_0072f9b4;
      }
    }
    else if (bVar3 == 4) {
      param_5 = (undefined4 *)((long)param_5 + lVar1);
      puVar17 = param_5;
      while ((puVar17 < param_6 &&
             (uVar6 = (**(code **)(*param_7 + 0x18))(param_7,0x40,*puVar17), (uVar6 & 1) != 0))) {
        puVar17 = puVar17 + 1;
      }
      if (0 < (int)param_15) {
        uVar11 = param_15;
        if (param_5 < puVar17) {
          puVar18 = (undefined4 *)*param_3;
          do {
            uVar13 = uVar11;
            puVar17 = puVar17 + -1;
            puVar9 = puVar18 + 1;
            *puVar18 = *puVar17;
            if (puVar17 <= param_5) break;
            puVar18 = puVar9;
            uVar11 = uVar13 - 1;
          } while (uVar13 != 1);
          *param_3 = (long)puVar9;
          uVar11 = uVar13 - 1;
          if (uVar13 != 1) goto LAB_0072f9c4;
        }
        else {
LAB_0072f9c4:
          uVar5 = (**(code **)(*param_7 + 0x58))(param_7,0x30);
          puVar18 = (undefined4 *)*param_3;
          puVar9 = puVar18;
          if (0 < (int)uVar11) {
            if (7 < uVar11) {
              uVar14 = (ulong)uVar11;
              uVar15 = uVar14 & 0x7ffffff8;
              puVar9 = puVar18 + uVar15;
              uVar11 = uVar11 - (int)uVar15;
              puVar8 = (undefined8 *)(puVar18 + 4);
              uVar6 = uVar15;
              do {
                uVar6 = uVar6 - 8;
                puVar8[-1] = CONCAT44(uVar5,uVar5);
                puVar8[-2] = CONCAT44(uVar5,uVar5);
                puVar8[1] = CONCAT44(uVar5,uVar5);
                *puVar8 = CONCAT44(uVar5,uVar5);
                puVar8 = puVar8 + 4;
              } while (uVar6 != 0);
              puVar18 = puVar9;
              if (uVar15 == uVar14) goto LAB_0072fa48;
            }
            uVar11 = uVar11 + 1;
            do {
              uVar11 = uVar11 - 1;
              puVar9 = puVar18 + 1;
              *puVar18 = uVar5;
              puVar18 = puVar9;
            } while (1 < uVar11);
          }
        }
LAB_0072fa48:
        *puVar9 = param_10;
        *param_3 = (long)(puVar9 + 1);
      }
      if (puVar17 == param_5) {
        uVar5 = (**(code **)(*param_7 + 0x58))(param_7,0x30);
        puVar18 = (undefined4 *)*param_3 + 1;
        *(undefined4 *)*param_3 = uVar5;
        *param_3 = (long)puVar18;
      }
      else {
        bVar3 = *param_12;
        uVar6 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar6 = *(ulong *)(param_12 + 8);
        }
        if (uVar6 == 0) {
          uVar11 = 0xffffffff;
        }
        else {
          pbVar2 = param_12 + 1;
          if ((bVar3 & 1) != 0) {
            pbVar2 = *(byte **)(param_12 + 0x10);
          }
          uVar11 = (uint)*pbVar2;
        }
        puVar18 = (undefined4 *)*param_3;
        uVar6 = 0;
        uVar13 = 0;
        do {
          puVar9 = puVar18;
          if (uVar13 == uVar11) {
            puVar9 = puVar18 + 1;
            *puVar18 = param_11;
            uVar6 = (ulong)((int)uVar6 + 1);
            *param_3 = (long)puVar9;
            bVar3 = *param_12;
            uVar14 = (ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              uVar14 = *(ulong *)(param_12 + 8);
            }
            if (uVar6 < uVar14) {
              pbVar2 = param_12 + 1;
              if ((bVar3 & 1) != 0) {
                pbVar2 = *(byte **)(param_12 + 0x10);
              }
              if (pbVar2[uVar6] == 0xff) {
                uVar13 = 0;
                uVar11 = 0xffffffff;
                goto LAB_0072fb14;
              }
              uVar11 = (uint)pbVar2[uVar6];
            }
            uVar13 = 0;
          }
LAB_0072fb14:
          puVar17 = puVar17 + -1;
          uVar13 = uVar13 + 1;
          puVar18 = puVar9 + 1;
          *puVar9 = *puVar17;
          *param_3 = (long)puVar18;
        } while (puVar17 != param_5);
      }
      puVar17 = puVar18;
      if ((puVar19 != puVar18) && (puVar9 = puVar18 + -1, puVar19 < puVar9)) {
        do {
          puVar12 = puVar19 + 1;
          uVar5 = *puVar19;
          *puVar19 = *puVar9;
          puVar10 = puVar9 + -1;
          *puVar9 = uVar5;
          puVar9 = puVar10;
          puVar19 = puVar12;
        } while (puVar12 < puVar10);
      }
    }
    lVar16 = lVar16 + 1;
    puVar19 = puVar17;
    if (lVar16 == 4) {
      bVar3 = *param_14;
      uVar6 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar6 = *(ulong *)(param_14 + 8);
      }
      if (1 < uVar6) {
        pbVar2 = param_14 + 4;
        if ((bVar3 & 1) != 0) {
          pbVar2 = *(byte **)(param_14 + 0x10);
        }
        memmove(puVar18,pbVar2 + 4,uVar6 * 4 - 4);
        puVar18 = puVar18 + (uVar6 - 1);
        *param_3 = (long)puVar18;
      }
      if ((param_4 & 0xb0) != 0x10) {
        if ((param_4 & 0xb0) != 0x20) {
          puVar18 = param_1;
        }
        *param_2 = (long)puVar18;
      }
      return;
    }
  } while( true );
}


// ===== 0072fc1c  FUN_0072fc1c =====

undefined8
FUN_0072fc1c(undefined8 param_1,undefined8 param_2,uint param_3,long param_4,undefined4 param_5,
            byte *param_6)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  undefined ***__ptr;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  undefined ***pppuVar12;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined **local_260 [50];
  int local_cc;
  ulong local_c8;
  ulong local_c0;
  void *local_b8;
  undefined *local_b0;
  ulong local_a8;
  void *local_a0;
  undefined ***local_98;
  undefined8 uStack_90;
  void *local_88;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined1 auStack_74 [4];
  long local_70 [2];
  
  FUN_00715df0(local_70,param_4);
  puVar6 = PTR_DAT_007a2640;
  local_b0 = PTR_DAT_007a2640;
  if (*(long *)PTR_DAT_007a2640 != -1) {
    local_260[0] = &local_b0;
    local_98 = local_260;
                    /* try { // try from 0072fc8c to 0072fca3 has its CatchHandler @ 0072ff9c */
    FUN_00710f84(PTR_DAT_007a2640,&local_98,FUN_007374a0);
  }
  if (((ulong)(*(long *)(local_70[0] + 0x18) - *(long *)(local_70[0] + 0x10) >> 3) <=
       (long)*(int *)(puVar6 + 8) - 1U) ||
     (plVar11 = *(long **)(*(long *)(local_70[0] + 0x10) + ((long)*(int *)(puVar6 + 8) - 1U) * 8),
     plVar11 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0072ff20 to 0072ff23 has its CatchHandler @ 0072ff9c */
    FUN_007191ac();
  }
  bVar5 = *param_6;
  uVar1 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar1 = *(ulong *)(param_6 + 8);
  }
  if (uVar1 == 0) {
    bVar7 = false;
  }
  else {
    pbVar3 = param_6 + 4;
    if ((bVar5 & 1) != 0) {
      pbVar3 = *(byte **)(param_6 + 0x10);
    }
    iVar4 = *(int *)pbVar3;
                    /* try { // try from 0072fcf8 to 0072fd03 has its CatchHandler @ 0072ff28 */
    iVar8 = (**(code **)(*plVar11 + 0x58))(plVar11,0x2d);
    bVar7 = iVar4 == iVar8;
  }
  local_98 = (undefined ***)0x0;
  uStack_90 = 0;
  local_88 = (void *)0x0;
  local_b0 = (undefined *)0x0;
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = (void *)0x0;
                    /* try { // try from 0072fd30 to 0072fd5f has its CatchHandler @ 0072ff2c */
  FUN_0072f570(param_3 & 1,bVar7,local_70,auStack_74,&uStack_78,&local_7c,&local_98,&local_b0,
               &local_c8,&local_cc);
  bVar5 = *param_6;
  uVar1 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar1 = *(ulong *)(param_6 + 8);
  }
  if (local_cc < (int)uVar1) {
    uVar10 = (ulong)((byte)local_c8 >> 1);
    if ((local_c8 & 1) != 0) {
      uVar10 = local_c0;
    }
    uVar2 = (ulong)((byte)local_b0 >> 1);
    if (((ulong)local_b0 & 1) != 0) {
      uVar2 = local_a8;
    }
    uVar10 = (uVar1 * 2 - (long)local_cc) + uVar10 + uVar2 + 1;
  }
  else {
    uVar10 = (ulong)((byte)local_c8 >> 1);
    if ((local_c8 & 1) != 0) {
      uVar10 = local_c0;
    }
    uVar2 = (ulong)((byte)local_b0 >> 1);
    if (((ulong)local_b0 & 1) != 0) {
      uVar2 = local_a8;
    }
    uVar10 = (long)local_cc + uVar10 + uVar2 + 2;
  }
  if (100 < uVar10) {
    __ptr = (undefined ***)malloc(uVar10 << 2);
    pppuVar12 = __ptr;
    if (__ptr != (undefined ***)0x0) goto LAB_0072fe24;
                    /* try { // try from 0072fe18 to 0072fe1b has its CatchHandler @ 0072ff24 */
    FUN_00712520();
  }
  __ptr = (undefined ***)0x0;
  pppuVar12 = local_260;
LAB_0072fe24:
  pbVar3 = param_6 + 4;
  if ((bVar5 & 1) != 0) {
    pbVar3 = *(byte **)(param_6 + 0x10);
  }
                    /* try { // try from 0072fe44 to 0072fe9b has its CatchHandler @ 0072ff5c */
  FUN_0072f784(pppuVar12,&uStack_268,&local_270,*(undefined4 *)(param_4 + 8),pbVar3,
               pbVar3 + uVar1 * 4,plVar11,bVar7,auStack_74,uStack_78,local_7c,&local_98,&local_b0,
               &local_c8,local_cc);
  uVar9 = FUN_00725838(param_2,pppuVar12,uStack_268,local_270,param_4,param_5);
  if (__ptr != (undefined ***)0x0) {
    free(__ptr);
  }
  if ((local_c8 & 1) != 0) {
    free(local_b8);
  }
  if (((ulong)local_b0 & 1) != 0) {
    free(local_a0);
  }
  if (((ulong)local_98 & 1) != 0) {
    free(local_88);
  }
  FUN_00732094(local_70);
  return uVar9;
}


// ===== 0072ffb0  FUN_0072ffb0 =====

undefined8 FUN_0072ffb0(void)

{
  return 0xffffffffffffffff;
}


// ===== 0072ffbc  FUN_0072ffbc =====

void FUN_0072ffbc(undefined8 *param_1)

{
  byte *in_x4;
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*in_x4 & 1) == 0) {
    uVar2 = *(undefined8 *)in_x4;
    uVar1 = *(undefined8 *)(in_x4 + 0x10);
    param_1[1] = *(undefined8 *)(in_x4 + 8);
    *param_1 = uVar2;
    param_1[2] = uVar1;
    return;
  }
  FUN_002fb36c(param_1,*(undefined8 *)(in_x4 + 0x10),*(undefined8 *)(in_x4 + 8));
  return;
}


// ===== 0072ffe8  FUN_0072ffe8 =====

void FUN_0072ffe8(void)

{
  return;
}


// ===== 0072fff0  FUN_0072fff0 =====

undefined8 FUN_0072fff0(void)

{
  return 0xffffffffffffffff;
}


// ===== 0072fffc  FUN_0072fffc =====

void FUN_0072fffc(undefined8 *param_1)

{
  byte *in_x4;
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*in_x4 & 1) == 0) {
    uVar2 = *(undefined8 *)in_x4;
    uVar1 = *(undefined8 *)(in_x4 + 0x10);
    param_1[1] = *(undefined8 *)(in_x4 + 8);
    *param_1 = uVar2;
    param_1[2] = uVar1;
    return;
  }
  FUN_00310244(param_1,*(undefined8 *)(in_x4 + 0x10),*(undefined8 *)(in_x4 + 8));
  return;
}


// ===== 00730028  FUN_00730028 =====

void FUN_00730028(void)

{
  return;
}


// ===== 00730030  FUN_00730030 =====

void FUN_00730030(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined *local_78;
  undefined8 **local_70;
  undefined **local_68;
  
  *param_1 = &PTR_FUN_0079c840;
  param_1[1] = param_2 + -1;
  *(undefined1 *)(param_1 + 0x23) = 1;
  puVar10 = param_1 + 5;
  param_1[6] = 0;
  *puVar10 = 0;
  plVar7 = param_1 + 2;
  *plVar7 = (long)puVar10;
  param_1[8] = 0;
  param_1[7] = 0;
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
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  *(undefined2 *)(param_1 + 0x24) = 0x4302;
  *(undefined1 *)((long)param_1 + 0x122) = 0;
  puVar1 = PTR_DAT_007a3918;
  param_1[3] = puVar10;
  param_1[4] = param_1 + 0x23;
  puVar2 = PTR_DAT_007a3920;
  DAT_007b1410 = puVar1 + 0x10;
  DAT_007b1418 = 0;
  local_78 = PTR_DAT_007a3920;
  if (*(long *)PTR_DAT_007a3920 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
                    /* try { // try from 00730110 to 00730127 has its CatchHandler @ 00731ddc */
    FUN_00710f84(PTR_DAT_007a3920,&local_70,FUN_007374a0);
  }
  uVar4 = (ulong)*(int *)(puVar2 + 8);
  uVar9 = uVar4 - 1;
  FUN_00755c20(1,&DAT_007b1418);
  lVar5 = param_1[2];
  uVar6 = param_1[3] - lVar5 >> 3;
  if (uVar6 <= uVar9) {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_1[3] = lVar5 + uVar4 * 8;
      }
    }
    else {
                    /* try { // try from 00730160 to 00730167 has its CatchHandler @ 00731db0 */
      FUN_00736f2c(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
    }
  }
  plVar8 = *(long **)(lVar5 + uVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  puVar2 = PTR_DAT_007a3930;
  puVar1 = PTR_DAT_007a3928;
  *(undefined ***)(*plVar7 + uVar9 * 8) = &DAT_007b1410;
  DAT_007b1420 = puVar1 + 0x10;
  local_78 = puVar2;
  DAT_007b1428 = 0;
  if (*(long *)puVar2 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
                    /* try { // try from 007301ec to 00730203 has its CatchHandler @ 00731ddc */
    FUN_00710f84(PTR_DAT_007a3930,&local_70,FUN_007374a0);
  }
  uVar4 = (ulong)*(int *)(puVar2 + 8);
  uVar9 = uVar4 - 1;
  FUN_00755c20(1,&DAT_007b1428);
  lVar5 = param_1[2];
  uVar6 = param_1[3] - lVar5 >> 3;
  if (uVar6 <= uVar9) {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_1[3] = lVar5 + uVar4 * 8;
      }
    }
    else {
                    /* try { // try from 0073023c to 00730243 has its CatchHandler @ 00731d8c */
      FUN_00736f2c(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
    }
  }
  plVar8 = *(long **)(lVar5 + uVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  *(undefined ***)(*plVar7 + uVar9 * 8) = &DAT_007b1420;
                    /* try { // try from 00730288 to 007302e3 has its CatchHandler @ 00731ddc */
  FUN_007329d0(&DAT_007b1430,0,0,1);
  puVar1 = PTR_DAT_007a1108;
  local_78 = PTR_DAT_007a1108;
  if (*(long *)PTR_DAT_007a1108 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
    FUN_00710f84(PTR_DAT_007a1108,&local_70,FUN_007374a0);
  }
  uVar4 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar4 - 1;
  FUN_00755c20(1,&DAT_007b1438);
  lVar5 = param_1[2];
  uVar6 = param_1[3] - lVar5 >> 3;
  if (uVar6 <= uVar9) {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_1[3] = lVar5 + uVar4 * 8;
      }
    }
    else {
                    /* try { // try from 0073031c to 00730323 has its CatchHandler @ 00731d7c */
      FUN_00736f2c(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
    }
  }
  plVar8 = *(long **)(lVar5 + uVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  puVar2 = PTR_DAT_007a3938;
  puVar1 = PTR_DAT_007a2640;
  *(undefined **)(*plVar7 + uVar9 * 8) = &DAT_007b1430;
  DAT_007b1450 = puVar2 + 0x10;
  local_78 = puVar1;
  DAT_007b1458 = 0;
  if (*(long *)puVar1 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
                    /* try { // try from 007303a8 to 007303bf has its CatchHandler @ 00731ddc */
    FUN_00710f84(PTR_DAT_007a2640,&local_70,FUN_007374a0);
  }
  uVar4 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar4 - 1;
  FUN_00755c20(1,&DAT_007b1458);
  lVar5 = param_1[2];
  uVar6 = param_1[3] - lVar5 >> 3;
  if (uVar6 <= uVar9) {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_1[3] = lVar5 + uVar4 * 8;
      }
    }
    else {
                    /* try { // try from 007303f8 to 007303ff has its CatchHandler @ 00731d6c */
      FUN_00736f2c(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
    }
  }
  plVar8 = *(long **)(lVar5 + uVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  puVar2 = PTR_DAT_007a3940;
  puVar1 = PTR_DAT_007a3870;
  *(undefined ***)(*plVar7 + uVar9 * 8) = &DAT_007b1450;
  DAT_007b1460 = puVar2 + 0x10;
  local_78 = puVar1;
  DAT_007b1468 = 0;
  if (*(long *)puVar1 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
                    /* try { // try from 00730484 to 0073049b has its CatchHandler @ 00731ddc */
    FUN_00710f84(PTR_DAT_007a3870,&local_70,FUN_007374a0);
  }
  uVar4 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar4 - 1;
  FUN_00755c20(1,&DAT_007b1468);
  lVar5 = param_1[2];
  uVar6 = param_1[3] - lVar5 >> 3;
  if (uVar6 <= uVar9) {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_1[3] = lVar5 + uVar4 * 8;
      }
    }
    else {
                    /* try { // try from 007304d4 to 007304db has its CatchHandler @ 00731d5c */
      FUN_00736f2c(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
    }
  }
  plVar8 = *(long **)(lVar5 + uVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  *(undefined ***)(*plVar7 + uVar9 * 8) = &DAT_007b1460;
                    /* try { // try from 00730520 to 00730573 has its CatchHandler @ 00731ddc */
  FUN_00732ffc(&DAT_007b1470,1);
  puVar1 = PTR_DAT_007a38c8;
  local_78 = PTR_DAT_007a38c8;
  if (*(long *)PTR_DAT_007a38c8 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
    FUN_00710f84(PTR_DAT_007a38c8,&local_70,FUN_007374a0);
  }
  uVar4 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar4 - 1;
  FUN_00755c20(1,&DAT_007b1478);
  lVar5 = param_1[2];
  uVar6 = param_1[3] - lVar5 >> 3;
  if (uVar6 <= uVar9) {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_1[3] = lVar5 + uVar4 * 8;
      }
    }
    else {
                    /* try { // try from 007305ac to 007305b3 has its CatchHandler @ 00731d4c */
      FUN_00736f2c(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
    }
  }
  plVar8 = *(long **)(lVar5 + uVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  puVar2 = PTR_DAT_007a3950;
  puVar1 = PTR_DAT_007a3948;
  *(undefined **)(*plVar7 + uVar9 * 8) = &DAT_007b1470;
  DAT_007b1488 = puVar1 + 0x10;
  local_78 = puVar2;
  DAT_007b1490 = 0;
  if (*(long *)puVar2 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
                    /* try { // try from 00730638 to 0073064f has its CatchHandler @ 00731ddc */
    FUN_00710f84(PTR_DAT_007a3950,&local_70,FUN_007374a0);
  }
  uVar4 = (ulong)*(int *)(puVar2 + 8);
  uVar9 = uVar4 - 1;
  FUN_00755c20(1,&DAT_007b1490);
  lVar5 = param_1[2];
  uVar6 = param_1[3] - lVar5 >> 3;
  if (uVar6 <= uVar9) {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_1[3] = lVar5 + uVar4 * 8;
      }
    }
    else {
                    /* try { // try from 00730688 to 0073068f has its CatchHandler @ 00731d3c */
      FUN_00736f2c(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
    }
  }
  plVar8 = *(long **)(lVar5 + uVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  puVar2 = PTR_DAT_007a3960;
  puVar1 = PTR_DAT_007a3958;
  *(undefined ***)(*plVar7 + uVar9 * 8) = &DAT_007b1488;
  DAT_007b1498 = puVar1 + 0x10;
  local_78 = puVar2;
  DAT_007b14a0 = 0;
  if (*(long *)puVar2 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
                    /* try { // try from 00730714 to 0073072b has its CatchHandler @ 00731ddc */
    FUN_00710f84(PTR_DAT_007a3960,&local_70,FUN_007374a0);
  }
  uVar4 = (ulong)*(int *)(puVar2 + 8);
  uVar9 = uVar4 - 1;
  FUN_00755c20(1,&DAT_007b14a0);
  lVar5 = param_1[2];
  uVar6 = param_1[3] - lVar5 >> 3;
  if (uVar6 <= uVar9) {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_1[3] = lVar5 + uVar4 * 8;
      }
    }
    else {
                    /* try { // try from 00730764 to 0073076b has its CatchHandler @ 00731d2c */
      FUN_00736f2c(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
    }
  }
  plVar8 = *(long **)(lVar5 + uVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  puVar2 = PTR_DAT_007a3970;
  puVar1 = PTR_DAT_007a3968;
  *(undefined ***)(*plVar7 + uVar9 * 8) = &DAT_007b1498;
  DAT_007b14a8 = puVar1 + 0x10;
  local_78 = puVar2;
  DAT_007b14b0 = 0;
  if (*(long *)puVar2 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
                    /* try { // try from 007307f0 to 00730807 has its CatchHandler @ 00731ddc */
    FUN_00710f84(PTR_DAT_007a3970,&local_70,FUN_007374a0);
  }
  uVar4 = (ulong)*(int *)(puVar2 + 8);
  uVar9 = uVar4 - 1;
  FUN_00755c20(1,&DAT_007b14b0);
  lVar5 = param_1[2];
  uVar6 = param_1[3] - lVar5 >> 3;
  if (uVar6 <= uVar9) {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_1[3] = lVar5 + uVar4 * 8;
      }
    }
    else {
                    /* try { // try from 00730840 to 00730847 has its CatchHandler @ 00731d1c */
      FUN_00736f2c(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
    }
  }
  plVar8 = *(long **)(lVar5 + uVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  puVar2 = PTR_DAT_007a3980;
  puVar1 = PTR_DAT_007a3978;
  *(undefined ***)(*plVar7 + uVar9 * 8) = &DAT_007b14a8;
  DAT_007b14b8 = puVar1 + 0x10;
  local_78 = puVar2;
  DAT_007b14c0 = 0;
  if (*(long *)puVar2 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
                    /* try { // try from 007308cc to 007308e3 has its CatchHandler @ 00731ddc */
    FUN_00710f84(PTR_DAT_007a3980,&local_70,FUN_007374a0);
  }
  uVar4 = (ulong)*(int *)(puVar2 + 8);
  uVar9 = uVar4 - 1;
  FUN_00755c20(1,&DAT_007b14c0);
  lVar5 = param_1[2];
  uVar6 = param_1[3] - lVar5 >> 3;
  if (uVar6 <= uVar9) {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_1[3] = lVar5 + uVar4 * 8;
      }
    }
    else {
                    /* try { // try from 0073091c to 00730923 has its CatchHandler @ 00731d0c */
      FUN_00736f2c(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
    }
  }
  plVar8 = *(long **)(lVar5 + uVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  *(undefined ***)(*plVar7 + uVar9 * 8) = &DAT_007b14b8;
                    /* try { // try from 00730968 to 007309bb has its CatchHandler @ 00731ddc */
  FUN_00734b8c(&DAT_007b14c8,1);
  puVar1 = PTR_DAT_007a38d8;
  local_78 = PTR_DAT_007a38d8;
  if (*(long *)PTR_DAT_007a38d8 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
    FUN_00710f84(PTR_DAT_007a38d8,&local_70,FUN_007374a0);
  }
  uVar4 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar4 - 1;
  FUN_00755c20(1,&DAT_007b14d0);
  lVar5 = param_1[2];
  uVar6 = param_1[3] - lVar5 >> 3;
  if (uVar6 <= uVar9) {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_1[3] = lVar5 + uVar4 * 8;
      }
    }
    else {
                    /* try { // try from 007309f4 to 007309fb has its CatchHandler @ 00731cfc */
      FUN_00736f2c(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
    }
  }
  plVar8 = *(long **)(lVar5 + uVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  *(undefined **)(*plVar7 + uVar9 * 8) = &DAT_007b14c8;
                    /* try { // try from 00730a40 to 00730a93 has its CatchHandler @ 00731ddc */
  FUN_00734bb8(&DAT_007b14f8,1);
  puVar1 = PTR_DAT_007a38e8;
  local_78 = PTR_DAT_007a38e8;
  if (*(long *)PTR_DAT_007a38e8 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
    FUN_00710f84(PTR_DAT_007a38e8,&local_70,FUN_007374a0);
  }
  uVar4 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar4 - 1;
  FUN_00755c20(1,&DAT_007b1500);
  lVar5 = param_1[2];
  uVar6 = param_1[3] - lVar5 >> 3;
  if (uVar6 <= uVar9) {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_1[3] = lVar5 + uVar4 * 8;
      }
    }
    else {
                    /* try { // try from 00730acc to 00730ad3 has its CatchHandler @ 00731cec */
      FUN_00736f2c(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
    }
  }
  plVar8 = *(long **)(lVar5 + uVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  puVar2 = PTR_DAT_007a3988;
  puVar1 = PTR_DAT_007a3828;
  *(undefined **)(*plVar7 + uVar9 * 8) = &DAT_007b14f8;
  DAT_007b1528 = puVar2 + 0x10;
  local_78 = puVar1;
  DAT_007b1530 = 0;
  if (*(long *)puVar1 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
                    /* try { // try from 00730b58 to 00730b6f has its CatchHandler @ 00731ddc */
    FUN_00710f84(PTR_DAT_007a3828,&local_70,FUN_007374a0);
  }
  uVar4 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar4 - 1;
  FUN_00755c20(1,&DAT_007b1530);
  lVar5 = param_1[2];
  uVar6 = param_1[3] - lVar5 >> 3;
  if (uVar6 <= uVar9) {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_1[3] = lVar5 + uVar4 * 8;
      }
    }
    else {
                    /* try { // try from 00730ba8 to 00730baf has its CatchHandler @ 00731cdc */
      FUN_00736f2c(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
    }
  }
  plVar8 = *(long **)(lVar5 + uVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  puVar2 = PTR_DAT_007a3990;
  puVar1 = PTR_DAT_007a3850;
  *(undefined ***)(*plVar7 + uVar9 * 8) = &DAT_007b1528;
  DAT_007b1538 = puVar2 + 0x10;
  local_78 = puVar1;
  DAT_007b1540 = 0;
  if (*(long *)puVar1 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
                    /* try { // try from 00730c34 to 00730c4b has its CatchHandler @ 00731ddc */
    FUN_00710f84(PTR_DAT_007a3850,&local_70,FUN_007374a0);
  }
  uVar4 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar4 - 1;
  FUN_00755c20(1,&DAT_007b1540);
  lVar5 = param_1[2];
  uVar6 = param_1[3] - lVar5 >> 3;
  if (uVar6 <= uVar9) {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_1[3] = lVar5 + uVar4 * 8;
      }
    }
    else {
                    /* try { // try from 00730c84 to 00730c8b has its CatchHandler @ 00731ccc */
      FUN_00736f2c(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
    }
  }
  plVar8 = *(long **)(lVar5 + uVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  puVar2 = PTR_DAT_007a3998;
  puVar1 = PTR_DAT_007a3838;
  *(undefined ***)(*plVar7 + uVar9 * 8) = &DAT_007b1538;
  DAT_007b1548 = puVar2 + 0x10;
  local_78 = puVar1;
  DAT_007b1550 = 0;
  if (*(long *)puVar1 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
                    /* try { // try from 00730d10 to 00730d27 has its CatchHandler @ 00731ddc */
    FUN_00710f84(PTR_DAT_007a3838,&local_70,FUN_007374a0);
  }
  uVar4 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar4 - 1;
  FUN_00755c20(1,&DAT_007b1550);
  lVar5 = param_1[2];
  uVar6 = param_1[3] - lVar5 >> 3;
  if (uVar6 <= uVar9) {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_1[3] = lVar5 + uVar4 * 8;
      }
    }
    else {
                    /* try { // try from 00730d60 to 00730d67 has its CatchHandler @ 00731cbc */
      FUN_00736f2c(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
    }
  }
  plVar8 = *(long **)(lVar5 + uVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  puVar2 = PTR_DAT_007a39a0;
  puVar1 = PTR_DAT_007a3860;
  *(undefined ***)(*plVar7 + uVar9 * 8) = &DAT_007b1548;
  DAT_007b1558 = puVar2 + 0x10;
  local_78 = puVar1;
  DAT_007b1560 = 0;
  if (*(long *)puVar1 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
                    /* try { // try from 00730dec to 00730e03 has its CatchHandler @ 00731ddc */
    FUN_00710f84(PTR_DAT_007a3860,&local_70,FUN_007374a0);
  }
  uVar4 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar4 - 1;
  FUN_00755c20(1,&DAT_007b1560);
  lVar5 = param_1[2];
  uVar6 = param_1[3] - lVar5 >> 3;
  if (uVar6 <= uVar9) {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_1[3] = lVar5 + uVar4 * 8;
      }
    }
    else {
                    /* try { // try from 00730e3c to 00730e43 has its CatchHandler @ 00731cac */
      FUN_00736f2c(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
    }
  }
  plVar8 = *(long **)(lVar5 + uVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  puVar2 = PTR_DAT_007a39a8;
  puVar1 = PTR_DAT_007a3900;
  *(undefined ***)(*plVar7 + uVar9 * 8) = &DAT_007b1558;
  DAT_007b1568 = puVar2 + 0x10;
  local_78 = puVar1;
  DAT_007b1570 = 0;
  if (*(long *)puVar1 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
                    /* try { // try from 00730ec8 to 00730edf has its CatchHandler @ 00731ddc */
    FUN_00710f84(PTR_DAT_007a3900,&local_70,FUN_007374a0);
  }
  uVar4 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar4 - 1;
  FUN_00755c20(1,&DAT_007b1570);
  lVar5 = param_1[2];
  uVar6 = param_1[3] - lVar5 >> 3;
  if (uVar6 <= uVar9) {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_1[3] = lVar5 + uVar4 * 8;
      }
    }
    else {
                    /* try { // try from 00730f18 to 00730f1f has its CatchHandler @ 00731c9c */
      FUN_00736f2c(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
    }
  }
  plVar8 = *(long **)(lVar5 + uVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  puVar2 = PTR_DAT_007a39b0;
  puVar1 = PTR_DAT_007a38f8;
  *(undefined ***)(*plVar7 + uVar9 * 8) = &DAT_007b1568;
  DAT_007b1578 = puVar2 + 0x10;
  local_78 = puVar1;
  DAT_007b1580 = 0;
  if (*(long *)puVar1 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
                    /* try { // try from 00730fa4 to 00730fbb has its CatchHandler @ 00731ddc */
    FUN_00710f84(PTR_DAT_007a38f8,&local_70,FUN_007374a0);
  }
  uVar4 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar4 - 1;
  FUN_00755c20(1,&DAT_007b1580);
  lVar5 = param_1[2];
  uVar6 = param_1[3] - lVar5 >> 3;
  if (uVar6 <= uVar9) {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_1[3] = lVar5 + uVar4 * 8;
      }
    }
    else {
                    /* try { // try from 00730ff4 to 00730ffb has its CatchHandler @ 00731c8c */
      FUN_00736f2c(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
    }
  }
  plVar8 = *(long **)(lVar5 + uVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  puVar2 = PTR_DAT_007a39b8;
  puVar1 = PTR_DAT_007a3910;
  *(undefined ***)(*plVar7 + uVar9 * 8) = &DAT_007b1578;
  DAT_007b1588 = puVar2 + 0x10;
  local_78 = puVar1;
  DAT_007b1590 = 0;
  if (*(long *)puVar1 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
                    /* try { // try from 00731080 to 00731097 has its CatchHandler @ 00731ddc */
    FUN_00710f84(PTR_DAT_007a3910,&local_70,FUN_007374a0);
  }
  uVar4 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar4 - 1;
  FUN_00755c20(1,&DAT_007b1590);
  lVar5 = param_1[2];
  uVar6 = param_1[3] - lVar5 >> 3;
  if (uVar6 <= uVar9) {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_1[3] = lVar5 + uVar4 * 8;
      }
    }
    else {
                    /* try { // try from 007310d0 to 007310d7 has its CatchHandler @ 00731c7c */
      FUN_00736f2c(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
    }
  }
  plVar8 = *(long **)(lVar5 + uVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  puVar2 = PTR_DAT_007a39c0;
  puVar1 = PTR_DAT_007a3908;
  *(undefined ***)(*plVar7 + uVar9 * 8) = &DAT_007b1588;
  DAT_007b1598 = puVar2 + 0x10;
  local_78 = puVar1;
  DAT_007b15a0 = 0;
  if (*(long *)puVar1 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
                    /* try { // try from 0073115c to 00731173 has its CatchHandler @ 00731ddc */
    FUN_00710f84(PTR_DAT_007a3908,&local_70,FUN_007374a0);
  }
  uVar4 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar4 - 1;
  FUN_00755c20(1,&DAT_007b15a0);
  lVar5 = param_1[2];
  uVar6 = param_1[3] - lVar5 >> 3;
  if (uVar6 <= uVar9) {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_1[3] = lVar5 + uVar4 * 8;
      }
    }
    else {
                    /* try { // try from 007311ac to 007311b3 has its CatchHandler @ 00731c6c */
      FUN_00736f2c(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
    }
  }
  plVar8 = *(long **)(lVar5 + uVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  puVar2 = PTR_DAT_007a39d0;
  puVar1 = PTR_DAT_007a39c8;
  *(undefined ***)(*plVar7 + uVar9 * 8) = &DAT_007b1598;
  DAT_007b15a8 = puVar1 + 0x10;
  local_78 = puVar2;
  DAT_007b15b0 = 0;
  if (*(long *)puVar2 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
                    /* try { // try from 00731238 to 0073124f has its CatchHandler @ 00731ddc */
    FUN_00710f84(PTR_DAT_007a39d0,&local_70,FUN_007374a0);
  }
  uVar4 = (ulong)*(int *)(puVar2 + 8);
  uVar9 = uVar4 - 1;
  FUN_00755c20(1,&DAT_007b15b0);
  lVar5 = param_1[2];
  uVar6 = param_1[3] - lVar5 >> 3;
  if (uVar6 <= uVar9) {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_1[3] = lVar5 + uVar4 * 8;
      }
    }
    else {
                    /* try { // try from 00731288 to 0073128f has its CatchHandler @ 00731c5c */
      FUN_00736f2c(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
    }
  }
  plVar8 = *(long **)(lVar5 + uVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  puVar2 = PTR_DAT_007a39e0;
  puVar1 = PTR_DAT_007a39d8;
  *(undefined ***)(*plVar7 + uVar9 * 8) = &DAT_007b15a8;
  DAT_007b15b8 = puVar1 + 0x10;
  local_78 = puVar2;
  DAT_007b15c0 = 0;
  if (*(long *)puVar2 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
                    /* try { // try from 00731314 to 0073132b has its CatchHandler @ 00731ddc */
    FUN_00710f84(PTR_DAT_007a39e0,&local_70,FUN_007374a0);
  }
  uVar4 = (ulong)*(int *)(puVar2 + 8);
  uVar9 = uVar4 - 1;
  FUN_00755c20(1,&DAT_007b15c0);
  lVar5 = param_1[2];
  uVar6 = param_1[3] - lVar5 >> 3;
  if (uVar6 <= uVar9) {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_1[3] = lVar5 + uVar4 * 8;
      }
    }
    else {
                    /* try { // try from 00731364 to 0073136b has its CatchHandler @ 00731c4c */
      FUN_00736f2c(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
    }
  }
  plVar8 = *(long **)(lVar5 + uVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  puVar2 = PTR_DAT_007a39f0;
  puVar1 = PTR_DAT_007a39e8;
  *(undefined ***)(*plVar7 + uVar9 * 8) = &DAT_007b15b8;
  DAT_007b15c8 = puVar1 + 0x10;
  local_78 = puVar2;
  DAT_007b15d0 = 0;
  if (*(long *)puVar2 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
                    /* try { // try from 007313f0 to 00731407 has its CatchHandler @ 00731ddc */
    FUN_00710f84(PTR_DAT_007a39f0,&local_70,FUN_007374a0);
  }
  uVar4 = (ulong)*(int *)(puVar2 + 8);
  uVar9 = uVar4 - 1;
  FUN_00755c20(1,&DAT_007b15d0);
  lVar5 = param_1[2];
  uVar6 = param_1[3] - lVar5 >> 3;
  if (uVar6 <= uVar9) {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_1[3] = lVar5 + uVar4 * 8;
      }
    }
    else {
                    /* try { // try from 00731440 to 00731447 has its CatchHandler @ 00731c28 */
      FUN_00736f2c(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
    }
  }
  plVar8 = *(long **)(lVar5 + uVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  puVar2 = PTR_DAT_007a3a00;
  puVar1 = PTR_DAT_007a39f8;
  *(undefined ***)(*plVar7 + uVar9 * 8) = &DAT_007b15c8;
  DAT_007b15d8 = puVar1 + 0x10;
  local_78 = puVar2;
  DAT_007b15e0 = 0;
  if (*(long *)puVar2 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
                    /* try { // try from 007314cc to 007314e3 has its CatchHandler @ 00731ddc */
    FUN_00710f84(PTR_DAT_007a3a00,&local_70,FUN_007374a0);
  }
  uVar4 = (ulong)*(int *)(puVar2 + 8);
  uVar9 = uVar4 - 1;
  FUN_00755c20(1,&DAT_007b15e0);
  lVar5 = param_1[2];
  uVar6 = param_1[3] - lVar5 >> 3;
  if (uVar6 <= uVar9) {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_1[3] = lVar5 + uVar4 * 8;
      }
    }
    else {
                    /* try { // try from 0073151c to 00731523 has its CatchHandler @ 00731c18 */
      FUN_00736f2c(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
    }
  }
  plVar8 = *(long **)(lVar5 + uVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  puVar2 = PTR_DAT_007a3a10;
  puVar1 = PTR_DAT_007a3a08;
  *(undefined ***)(*plVar7 + uVar9 * 8) = &DAT_007b15d8;
  DAT_007b15e8 = puVar1 + 0x10;
  DAT_007b15f8 = puVar1 + 0x70;
  local_78 = puVar2;
  DAT_007b15f0 = 0;
  if (*(long *)puVar2 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
                    /* try { // try from 007315b0 to 007315c7 has its CatchHandler @ 00731ddc */
    FUN_00710f84(PTR_DAT_007a3a10,&local_70,FUN_007374a0);
  }
  uVar4 = (ulong)*(int *)(puVar2 + 8);
  uVar9 = uVar4 - 1;
  FUN_00755c20(1,&DAT_007b15f0);
  lVar5 = param_1[2];
  uVar6 = param_1[3] - lVar5 >> 3;
  if (uVar6 <= uVar9) {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_1[3] = lVar5 + uVar4 * 8;
      }
    }
    else {
                    /* try { // try from 00731600 to 00731607 has its CatchHandler @ 00731c08 */
      FUN_00736f2c(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
    }
  }
  plVar8 = *(long **)(lVar5 + uVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  puVar2 = PTR_DAT_007a3a20;
  puVar1 = PTR_DAT_007a3a18;
  *(undefined ***)(*plVar7 + uVar9 * 8) = &DAT_007b15e8;
  DAT_007b1600 = puVar1 + 0x10;
  DAT_007b1610 = puVar1 + 0x70;
  local_78 = puVar2;
  DAT_007b1608 = 0;
  if (*(long *)puVar2 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
                    /* try { // try from 00731694 to 007316ab has its CatchHandler @ 00731ddc */
    FUN_00710f84(PTR_DAT_007a3a20,&local_70,FUN_007374a0);
  }
  uVar4 = (ulong)*(int *)(puVar2 + 8);
  uVar9 = uVar4 - 1;
  FUN_00755c20(1,&DAT_007b1608);
  lVar5 = param_1[2];
  uVar6 = param_1[3] - lVar5 >> 3;
  if (uVar6 <= uVar9) {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_1[3] = lVar5 + uVar4 * 8;
      }
    }
    else {
                    /* try { // try from 007316e4 to 007316eb has its CatchHandler @ 00731bf8 */
      FUN_00736f2c(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
    }
  }
  plVar8 = *(long **)(lVar5 + uVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  puVar1 = PTR_DAT_007a3a28;
  *(undefined ***)(*plVar7 + uVar9 * 8) = &DAT_007b1600;
  DAT_007b1618 = puVar1 + 0x10;
  DAT_007b1620 = 0;
  if (((DAT_007b0958 & 1) == 0) && (iVar3 = FUN_00739c1c(&DAT_007b0958), iVar3 != 0)) {
                    /* try { // try from 00731b18 to 00731b2b has its CatchHandler @ 00731b98 */
    DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_00739d60(&DAT_007b0958);
  }
  puVar2 = PTR_DAT_007a1908;
  DAT_007b1628 = DAT_007b0950;
  DAT_007b1618 = PTR_DAT_007a3a30 + 0x10;
  local_78 = PTR_DAT_007a1908;
  if (*(long *)PTR_DAT_007a1908 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
                    /* try { // try from 0073179c to 007317b3 has its CatchHandler @ 00731ddc */
    FUN_00710f84(PTR_DAT_007a1908,&local_70,FUN_007374a0);
  }
  uVar4 = (ulong)*(int *)(puVar2 + 8);
  uVar9 = uVar4 - 1;
  FUN_00755c20(1,&DAT_007b1620);
  lVar5 = param_1[2];
  uVar6 = param_1[3] - lVar5 >> 3;
  if (uVar6 <= uVar9) {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_1[3] = lVar5 + uVar4 * 8;
      }
    }
    else {
                    /* try { // try from 007317ec to 007317f3 has its CatchHandler @ 00731be8 */
      FUN_00736f2c(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
    }
  }
  plVar8 = *(long **)(lVar5 + uVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  *(undefined ***)(*plVar7 + uVar9 * 8) = &DAT_007b1618;
  DAT_007b1630 = puVar1 + 0x10;
  DAT_007b1638 = 0;
  if (((DAT_007b0958 & 1) == 0) && (iVar3 = FUN_00739c1c(&DAT_007b0958), iVar3 != 0)) {
                    /* try { // try from 00731b50 to 00731b63 has its CatchHandler @ 00731b78 */
    DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_00739d60(&DAT_007b0958);
  }
  puVar1 = PTR_DAT_007a3a40;
  DAT_007b1640 = DAT_007b0950;
  DAT_007b1630 = PTR_DAT_007a3a38 + 0x10;
  local_78 = PTR_DAT_007a3a40;
  if (*(long *)PTR_DAT_007a3a40 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
                    /* try { // try from 00731890 to 007318a7 has its CatchHandler @ 00731ddc */
    FUN_00710f84(PTR_DAT_007a3a40,&local_70,FUN_007374a0);
  }
  uVar4 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar4 - 1;
  FUN_00755c20(1,&DAT_007b1638);
  lVar5 = param_1[2];
  uVar6 = param_1[3] - lVar5 >> 3;
  if (uVar6 <= uVar9) {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_1[3] = lVar5 + uVar4 * 8;
      }
    }
    else {
                    /* try { // try from 007318e0 to 007318e7 has its CatchHandler @ 00731bd8 */
      FUN_00736f2c(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
    }
  }
  plVar8 = *(long **)(lVar5 + uVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  puVar2 = PTR_DAT_007a3a50;
  puVar1 = PTR_DAT_007a3a48;
  *(undefined ***)(*plVar7 + uVar9 * 8) = &DAT_007b1630;
  DAT_007b1648 = puVar1 + 0x10;
  local_78 = puVar2;
  DAT_007b1650 = 0;
  if (*(long *)puVar2 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
                    /* try { // try from 0073196c to 00731983 has its CatchHandler @ 00731ddc */
    FUN_00710f84(PTR_DAT_007a3a50,&local_70,FUN_007374a0);
  }
  uVar4 = (ulong)*(int *)(puVar2 + 8);
  uVar9 = uVar4 - 1;
  FUN_00755c20(1,&DAT_007b1650);
  lVar5 = param_1[2];
  uVar6 = param_1[3] - lVar5 >> 3;
  if (uVar6 <= uVar9) {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_1[3] = lVar5 + uVar4 * 8;
      }
    }
    else {
                    /* try { // try from 007319bc to 007319c3 has its CatchHandler @ 00731bc8 */
      FUN_00736f2c(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
    }
  }
  plVar8 = *(long **)(lVar5 + uVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  puVar2 = PTR_DAT_007a3a60;
  puVar1 = PTR_DAT_007a3a58;
  *(undefined ***)(*plVar7 + uVar9 * 8) = &DAT_007b1648;
  DAT_007b1658 = puVar1 + 0x10;
  local_78 = puVar2;
  DAT_007b1660 = 0;
  if (*(long *)puVar2 != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
                    /* try { // try from 00731a48 to 00731a5f has its CatchHandler @ 00731ddc */
    FUN_00710f84(PTR_DAT_007a3a60,&local_70,FUN_007374a0);
  }
  uVar4 = (ulong)*(int *)(puVar2 + 8);
  uVar9 = uVar4 - 1;
  FUN_00755c20(1,&DAT_007b1660);
  lVar5 = param_1[2];
  uVar6 = param_1[3] - lVar5 >> 3;
  if (uVar6 <= uVar9) {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_1[3] = lVar5 + uVar4 * 8;
      }
    }
    else {
                    /* try { // try from 00731a98 to 00731a9f has its CatchHandler @ 00731bb8 */
      FUN_00736f2c(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
    }
  }
  plVar8 = *(long **)(lVar5 + uVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  *(undefined ***)(*plVar7 + uVar9 * 8) = &DAT_007b1658;
  return;
}


// ===== 00731e20  FUN_00731e20 =====

undefined8 * FUN_00731e20(void)

{
  int iVar1;
  
  if (((DAT_007b0aa0 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007b0aa0), iVar1 != 0)) {
    FUN_00730030(&DAT_007b0960,1);
    DAT_007b0a98 = &DAT_007b0960;
    FUN_00739d60(&DAT_007b0aa0);
  }
  return &DAT_007b0a98;
}


// ===== 00731eac  FUN_00731eac =====

void FUN_00731eac(undefined8 *param_1)

{
  bool bVar1;
  undefined8 *__ptr;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  
  __ptr = (undefined8 *)param_1[3];
  *param_1 = &PTR_FUN_0079c840;
  if (__ptr != (undefined8 *)param_1[2]) {
    __ptr = (undefined8 *)param_1[2];
    uVar3 = 0;
    uVar5 = 1;
    do {
      plVar4 = (long *)__ptr[uVar3];
      if ((plVar4 != (long *)0x0) &&
         (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar2 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
      __ptr = (undefined8 *)param_1[2];
      bVar1 = uVar5 < (ulong)(param_1[3] - (long)__ptr >> 3);
      uVar3 = uVar5;
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (bVar1);
  }
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    free((void *)param_1[0x26]);
    __ptr = (undefined8 *)param_1[2];
  }
  if (__ptr != (undefined8 *)0x0) {
    param_1[3] = __ptr;
    if (__ptr == param_1 + 5) {
      *(undefined1 *)(__ptr + 0x1e) = 0;
    }
    else {
      free(__ptr);
    }
  }
  FUN_00712454(param_1);
  return;
}


// ===== 00731f80  FUN_00731f80 =====

void FUN_00731f80(void *param_1)

{
  FUN_00731eac();
  free(param_1);
  return;
}


// ===== 00731fac  FUN_00731fac =====

void FUN_00731fac(undefined8 *param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((DAT_007b0ab0 & 1) == 0) && (iVar3 = FUN_00739c1c(&DAT_007b0ab0), iVar3 != 0)) {
                    /* try { // try from 00732018 to 0073201f has its CatchHandler @ 0073203c */
    uVar4 = FUN_00731e20();
    FUN_00732054(&DAT_007b0aa8,uVar4);
    FUN_00739d60(&DAT_007b0ab0);
  }
  puVar1 = DAT_007b0aa8;
  bVar2 = DAT_007b0aa8 != &DAT_007b0960;
  *param_1 = DAT_007b0aa8;
  if (bVar2) {
    FUN_00755c20(1,puVar1 + 8);
  }
  return;
}


// ===== 00732054  FUN_00732054 =====

void FUN_00732054(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)*param_2;
  *param_1 = puVar1;
  if (puVar1 != &DAT_007b0960) {
    FUN_00755c20(1,puVar1 + 8);
  }
  return;
}


// ===== 00732094  FUN_00732094 =====

void FUN_00732094(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if ((plVar2 != (long *)&DAT_007b0960) &&
     (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x007320f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    return;
  }
  return;
}


// ===== 007320f4  FUN_007320f4 =====

undefined8 * FUN_007320f4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  
  if ((undefined *)*param_2 != &DAT_007b0960) {
    FUN_00755c20(1,(undefined *)*param_2 + 8);
  }
  plVar2 = (long *)*param_1;
  if ((plVar2 != (long *)&DAT_007b0960) &&
     (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  *param_1 = *param_2;
  return param_1;
}


// ===== 0073217c  FUN_0073217c =====

bool FUN_0073217c(long *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *local_38;
  undefined8 **local_30;
  long **local_28;
  
  lVar4 = *param_1;
  if (*param_2 != -1) {
    local_28 = &local_38;
    local_30 = &local_28;
    local_38 = param_2;
    FUN_00710f84(param_2,&local_30,FUN_007374a0);
  }
  lVar1 = *(long *)(lVar4 + 0x10);
  uVar3 = (long)(int)param_2[1] - 1;
  if (uVar3 < (ulong)(*(long *)(lVar4 + 0x18) - lVar1 >> 3)) {
    bVar2 = *(long *)(lVar1 + uVar3 * 8) != 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


// ===== 0073220c  FUN_0073220c =====

void FUN_0073220c(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *local_38;
  undefined8 **local_30;
  long **local_28;
  
  lVar3 = *param_1;
  local_38 = param_2;
  if (*param_2 != -1) {
    local_28 = &local_38;
    local_30 = &local_28;
    FUN_00710f84(param_2,&local_30,FUN_007374a0);
  }
  lVar1 = *(long *)(lVar3 + 0x10);
  uVar2 = (long)(int)param_2[1] - 1;
  if ((uVar2 < (ulong)(*(long *)(lVar3 + 0x18) - lVar1 >> 3)) && (*(long *)(lVar1 + uVar2 * 8) != 0)
     ) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_007191ac();
}


// ===== 00732294  FUN_00732294 =====

void FUN_00732294(void *param_1)

{
  thunk_FUN_00712454();
  free(param_1);
  return;
}


// ===== 007322c0  FUN_007322c0 =====

void FUN_007322c0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007322cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}


// ===== 007322d0  FUN_007322d0 =====

void FUN_007322d0(void *param_1)

{
  thunk_FUN_00712454();
  free(param_1);
  return;
}


// ===== 007322fc  FUN_007322fc =====

bool FUN_007322fc(undefined8 param_1,ulong param_2,uint param_3)

{
  if (0x7f < param_3) {
    return false;
  }
  return (*(ulong *)(&DAT_002124f0 + (ulong)param_3 * 8) & param_2) != 0;
}


// ===== 00732328  FUN_00732328 =====

uint * FUN_00732328(undefined8 param_1,uint *param_2,uint *param_3,undefined8 *param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_2;
  if (param_2 != param_3) {
    do {
      if (*param_2 < 0x80) {
        uVar2 = *(undefined8 *)(&DAT_002124f0 + (ulong)*param_2 * 8);
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


// ===== 00732374  FUN_00732374 =====

uint * FUN_00732374(undefined8 param_1,ulong param_2,uint *param_3,uint *param_4)

{
  if (param_3 != param_4) {
    while ((0x7f < *param_3 || ((*(ulong *)(&DAT_002124f0 + (ulong)*param_3 * 8) & param_2) == 0)))
    {
      param_3 = param_3 + 1;
      if (param_3 == param_4) {
        return param_4;
      }
    }
  }
  return param_3;
}


// ===== 007323c0  FUN_007323c0 =====

uint * FUN_007323c0(undefined8 param_1,ulong param_2,uint *param_3,uint *param_4)

{
  uint *puVar1;
  
  puVar1 = param_3;
  if (param_3 != param_4) {
    do {
      if (0x7f < *param_3) {
        return param_3;
      }
      if ((*(ulong *)(&DAT_002124f0 + (ulong)*param_3 * 8) & param_2) == 0) {
        return param_3;
      }
      param_3 = param_3 + 1;
      puVar1 = param_4;
    } while (param_3 != param_4);
  }
  return puVar1;
}


// ===== 00732404  FUN_00732404 =====

uint FUN_00732404(undefined8 param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 0x80) {
    if (((DAT_007b0958 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007b0958), iVar1 != 0)) {
                    /* try { // try from 00732470 to 00732483 has its CatchHandler @ 00732498 */
      DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_00739d60(&DAT_007b0958);
    }
    iVar1 = iswlower_l(param_2,DAT_007b0950);
    if (iVar1 != 0) {
      param_2 = param_2 - 0x20;
    }
  }
  return param_2;
}


// ===== 007324b0  FUN_007324b0 =====

uint * FUN_007324b0(undefined8 param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  
  puVar4 = param_2;
  if (param_2 != param_3) {
    do {
      uVar1 = *param_2;
      uVar5 = uVar1;
      if (uVar1 < 0x80) {
        if (((DAT_007b0958 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007b0958), iVar2 != 0)) {
                    /* try { // try from 00732530 to 0073253b has its CatchHandler @ 0073256c */
          DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          FUN_00739d60(&DAT_007b0958);
        }
        uVar5 = *param_2;
        if (0xffffffe5 < uVar1 - 0x7b) {
          uVar5 = *param_2 - 0x20;
        }
      }
      puVar3 = param_2 + 1;
      *param_2 = uVar5;
      puVar4 = param_3;
      param_2 = puVar3;
    } while (puVar3 != param_3);
  }
  return puVar4;
}


// ===== 00732584  FUN_00732584 =====

uint FUN_00732584(undefined8 param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 0x80) {
    if (((DAT_007b0958 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007b0958), iVar1 != 0)) {
                    /* try { // try from 007325e4 to 007325f7 has its CatchHandler @ 00732610 */
      DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_00739d60(&DAT_007b0958);
    }
    if (0xffffffe5 < param_2 - 0x5b) {
      param_2 = param_2 + 0x20;
    }
  }
  return param_2;
}


// ===== 00732628  FUN_00732628 =====

uint * FUN_00732628(undefined8 param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  
  puVar4 = param_2;
  if (param_2 != param_3) {
    do {
      uVar1 = *param_2;
      uVar5 = uVar1;
      if (uVar1 < 0x80) {
        if (((DAT_007b0958 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007b0958), iVar2 != 0)) {
                    /* try { // try from 007326a8 to 007326b3 has its CatchHandler @ 007326e4 */
          DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          FUN_00739d60(&DAT_007b0958);
        }
        uVar5 = *param_2;
        if (0xffffffe5 < uVar1 - 0x5b) {
          uVar5 = *param_2 + 0x20;
        }
      }
      puVar3 = param_2 + 1;
      *param_2 = uVar5;
      puVar4 = param_3;
      param_2 = puVar3;
    } while (puVar3 != param_3);
  }
  return puVar4;
}


// ===== 007326fc  FUN_007326fc =====

undefined1 FUN_007326fc(undefined8 param_1,undefined1 param_2)

{
  return param_2;
}


// ===== 00732708  FUN_00732708 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_00732708(undefined8 param_1,uint *param_2,uint *param_3,uint *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  uint *puVar6;
  ulong *puVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  auVar11 = _DAT_00200ab0;
  auVar10 = _DAT_002007c0;
  auVar2 = _DAT_00200580;
  auVar1 = _DAT_002000f0;
  if (param_2 == param_3) {
    return param_2;
  }
  uVar3 = (long)param_3 - (long)param_2;
  if ((7 < uVar3) && ((param_3 <= param_4 || (param_4 + uVar3 <= param_2)))) {
    if (uVar3 < 0x20) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar3 & 0xffffffffffffffe0;
      pauVar8 = (undefined1 (*) [16])(param_2 + 4);
      puVar6 = param_4 + 0x10;
      uVar9 = uVar4;
      do {
        auVar12 = pauVar8[-1];
        auVar13 = *pauVar8;
        uVar9 = uVar9 - 0x20;
        pauVar8 = pauVar8 + 2;
        auVar14 = a64_TBL(ZEXT816(0),auVar12,auVar1);
        auVar15 = a64_TBL(ZEXT816(0),auVar12,auVar10);
        auVar16 = a64_TBL(ZEXT816(0),auVar12,auVar11);
        auVar12 = a64_TBL(ZEXT816(0),auVar12,auVar2);
        auVar17 = a64_TBL(ZEXT816(0),auVar13,auVar1);
        *(long *)(puVar6 + -6) = auVar15._8_8_;
        *(long *)(puVar6 + -8) = auVar15._0_8_;
        *(long *)(puVar6 + -2) = auVar14._8_8_;
        *(long *)(puVar6 + -4) = auVar14._0_8_;
        auVar14 = a64_TBL(ZEXT816(0),auVar13,auVar10);
        auVar15 = a64_TBL(ZEXT816(0),auVar13,auVar11);
        auVar13 = a64_TBL(ZEXT816(0),auVar13,auVar2);
        *(long *)(puVar6 + -0xe) = auVar12._8_8_;
        *(long *)(puVar6 + -0x10) = auVar12._0_8_;
        *(long *)(puVar6 + -10) = auVar16._8_8_;
        *(long *)(puVar6 + -0xc) = auVar16._0_8_;
        *(long *)(puVar6 + 10) = auVar14._8_8_;
        *(long *)(puVar6 + 8) = auVar14._0_8_;
        *(long *)(puVar6 + 0xe) = auVar17._8_8_;
        *(long *)(puVar6 + 0xc) = auVar17._0_8_;
        *(long *)(puVar6 + 2) = auVar13._8_8_;
        *(long *)puVar6 = auVar13._0_8_;
        *(long *)(puVar6 + 6) = auVar15._8_8_;
        *(long *)(puVar6 + 4) = auVar15._0_8_;
        puVar6 = puVar6 + 0x20;
      } while (uVar9 != 0);
      if (uVar3 == uVar4) {
        return param_3;
      }
      if ((uVar3 & 0x18) == 0) {
        param_4 = param_4 + uVar4;
        param_2 = (uint *)((long)param_2 + uVar4);
        goto LAB_00732740;
      }
    }
    auVar2 = _DAT_00200ab0;
    auVar1 = _DAT_00200580;
    uVar9 = uVar3 & 0xfffffffffffffff8;
    puVar6 = param_4 + uVar4;
    param_4 = param_4 + uVar9;
    lVar5 = uVar4 - uVar9;
    puVar7 = (ulong *)((long)param_2 + uVar4);
    do {
      auVar10._0_8_ = *puVar7;
      auVar10._8_8_ = 0;
      lVar5 = lVar5 + 8;
      auVar11 = a64_TBL(ZEXT816(0),auVar10,auVar2);
      auVar10 = a64_TBL(ZEXT816(0),auVar10,auVar1);
      *(long *)(puVar6 + 2) = auVar10._8_8_;
      *(long *)puVar6 = auVar10._0_8_;
      *(long *)(puVar6 + 6) = auVar11._8_8_;
      *(long *)(puVar6 + 4) = auVar11._0_8_;
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 8;
    } while (lVar5 != 0);
    param_2 = (uint *)((long)param_2 + uVar9);
    if (uVar3 == uVar9) {
      return param_3;
    }
  }
LAB_00732740:
  do {
    puVar6 = (uint *)((long)param_2 + 1);
    *param_4 = (uint)(byte)*param_2;
    param_2 = puVar6;
    param_4 = param_4 + 1;
  } while (puVar6 != param_3);
  return param_3;
}


// ===== 00732838  FUN_00732838 =====

uint FUN_00732838(undefined8 param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x80) {
    param_3 = param_2;
  }
  return param_3;
}


// ===== 00732848  FUN_00732848 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_00732848(undefined8 param_1,uint *param_2,uint *param_3,uint param_4,undefined1 *param_5)

{
  ulong uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  undefined1 (*pauVar11) [16];
  undefined8 *puVar12;
  undefined8 uVar13;
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
  
  auVar5 = _DAT_00200730;
  if (param_2 == param_3) {
    return param_2;
  }
  uVar7 = (long)param_3 + (-4 - (long)param_2);
  if ((0x1b < uVar7) &&
     (((undefined1 *)((long)param_2 + (uVar7 & 0xfffffffffffffffc) + 4) <= param_5 ||
      (param_5 + (uVar7 >> 2) + 1 <= param_2)))) {
    uVar1 = (uVar7 >> 2) + 1;
    uVar6 = (undefined1)param_4;
    if (uVar7 < 0x7c) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar1 & 0x7fffffffffffffe0;
      pauVar11 = (undefined1 (*) [16])(param_2 + 0x10);
      puVar12 = (undefined8 *)(param_5 + 0x10);
      uVar7 = uVar8;
      do {
        uVar7 = uVar7 - 0x20;
        auVar14._8_4_ = 0x7f;
        auVar14._0_8_ = 0x7f0000007f;
        auVar14._12_4_ = 0x7f;
        auVar20 = NEON_cmhi(pauVar11[-3],auVar14,4);
        auVar16._8_4_ = 0x7f;
        auVar16._0_8_ = 0x7f0000007f;
        auVar16._12_4_ = 0x7f;
        auVar21 = NEON_cmhi(pauVar11[-4],auVar16,4);
        auVar17._8_4_ = 0x7f;
        auVar17._0_8_ = 0x7f0000007f;
        auVar17._12_4_ = 0x7f;
        auVar24 = NEON_cmhi(pauVar11[1],auVar17,4);
        auVar19._8_4_ = 0x7f;
        auVar19._0_8_ = 0x7f0000007f;
        auVar19._12_4_ = 0x7f;
        auVar25 = NEON_cmhi(*pauVar11,auVar19,4);
        auVar22._8_4_ = 0x7f;
        auVar22._0_8_ = 0x7f0000007f;
        auVar22._12_4_ = 0x7f;
        auVar17 = NEON_cmhi(pauVar11[-1],auVar22,4);
        auVar23._8_4_ = 0x7f;
        auVar23._0_8_ = 0x7f0000007f;
        auVar23._12_4_ = 0x7f;
        auVar19 = NEON_cmhi(pauVar11[-2],auVar23,4);
        auVar14 = a64_TBL(ZEXT816(0),pauVar11[-4],pauVar11[-3],pauVar11[-2],pauVar11[-1],auVar5);
        auVar3._8_4_ = 0x7f;
        auVar3._0_8_ = 0x7f0000007f;
        auVar3._12_4_ = 0x7f;
        auVar22 = NEON_cmhi(pauVar11[3],auVar3,4);
        auVar4._8_4_ = 0x7f;
        auVar4._0_8_ = 0x7f0000007f;
        auVar4._12_4_ = 0x7f;
        auVar23 = NEON_cmhi(pauVar11[2],auVar4,4);
        auVar16 = a64_TBL(ZEXT816(0),*pauVar11,pauVar11[1],pauVar11[2],pauVar11[3],auVar5);
        pauVar11 = pauVar11 + 8;
        auVar18[1] = auVar21[4];
        auVar18[0] = auVar21[0];
        auVar18[2] = auVar21[8];
        auVar18[3] = auVar21[0xc];
        auVar18[4] = auVar20[0];
        auVar18[5] = auVar20[4];
        auVar18[6] = auVar20[8];
        auVar18[7] = auVar20[0xc];
        auVar18[8] = auVar19[0];
        auVar18[9] = auVar19[4];
        auVar18[10] = auVar19[8];
        auVar18[0xb] = auVar19[0xc];
        auVar18[0xc] = auVar17[0];
        auVar18[0xd] = auVar17[4];
        auVar18[0xe] = auVar17[8];
        auVar18[0xf] = auVar17[0xc];
        auVar15[1] = auVar25[4];
        auVar15[0] = auVar25[0];
        auVar15[2] = auVar25[8];
        auVar15[3] = auVar25[0xc];
        auVar15[4] = auVar24[0];
        auVar15[5] = auVar24[4];
        auVar15[6] = auVar24[8];
        auVar15[7] = auVar24[0xc];
        auVar15[8] = auVar23[0];
        auVar15[9] = auVar23[4];
        auVar15[10] = auVar23[8];
        auVar15[0xb] = auVar23[0xc];
        auVar15[0xc] = auVar22[0];
        auVar15[0xd] = auVar22[4];
        auVar15[0xe] = auVar22[8];
        auVar15[0xf] = auVar22[0xc];
        auVar20[1] = uVar6;
        auVar20[0] = uVar6;
        auVar20[2] = uVar6;
        auVar20[3] = uVar6;
        auVar20[4] = uVar6;
        auVar20[5] = uVar6;
        auVar20[6] = uVar6;
        auVar20[7] = uVar6;
        auVar20[8] = uVar6;
        auVar20[9] = uVar6;
        auVar20[10] = uVar6;
        auVar20[0xb] = uVar6;
        auVar20[0xc] = uVar6;
        auVar20[0xd] = uVar6;
        auVar20[0xe] = uVar6;
        auVar20[0xf] = uVar6;
        auVar14 = NEON_bit(auVar14,auVar20,auVar18,1);
        auVar21[1] = uVar6;
        auVar21[0] = uVar6;
        auVar21[2] = uVar6;
        auVar21[3] = uVar6;
        auVar21[4] = uVar6;
        auVar21[5] = uVar6;
        auVar21[6] = uVar6;
        auVar21[7] = uVar6;
        auVar21[8] = uVar6;
        auVar21[9] = uVar6;
        auVar21[10] = uVar6;
        auVar21[0xb] = uVar6;
        auVar21[0xc] = uVar6;
        auVar21[0xd] = uVar6;
        auVar21[0xe] = uVar6;
        auVar21[0xf] = uVar6;
        auVar16 = NEON_bsl(auVar15,auVar21,auVar16,1);
        puVar12[-1] = auVar14._8_8_;
        puVar12[-2] = auVar14._0_8_;
        puVar12[1] = auVar16._8_8_;
        *puVar12 = auVar16._0_8_;
        puVar12 = puVar12 + 4;
      } while (uVar7 != 0);
      if (uVar1 == uVar8) {
        return param_3;
      }
      if ((uVar1 & 0x18) == 0) {
        param_2 = param_2 + uVar8;
        param_5 = param_5 + uVar8;
        goto LAB_00732894;
      }
    }
    auVar5 = _DAT_00200320;
    uVar7 = uVar1 & 0x7ffffffffffffff8;
    lVar9 = uVar8 - uVar7;
    pauVar11 = (undefined1 (*) [16])(param_2 + uVar8);
    puVar12 = (undefined8 *)(param_5 + uVar8);
    do {
      lVar9 = lVar9 + 8;
      auVar24[8] = 0x7f;
      auVar24._0_8_ = 0x7f0000007f;
      auVar24._9_3_ = 0;
      auVar24[0xc] = 0x7f;
      auVar24._13_3_ = 0;
      auVar16 = NEON_cmhi(pauVar11[1],auVar24,4);
      auVar25[8] = 0x7f;
      auVar25._0_8_ = 0x7f0000007f;
      auVar25._9_3_ = 0;
      auVar25[0xc] = 0x7f;
      auVar25._13_3_ = 0;
      auVar17 = NEON_cmhi(*pauVar11,auVar25,4);
      auVar14 = a64_TBL(ZEXT816(0),*pauVar11,pauVar11[1],auVar5);
      uVar13 = NEON_bit(auVar14._0_8_,
                        CONCAT17(uVar6,CONCAT16(uVar6,CONCAT15(uVar6,CONCAT14(uVar6,CONCAT13(uVar6,
                                                  CONCAT12(uVar6,CONCAT11(uVar6,uVar6))))))),
                        CONCAT17(auVar16[0xc],
                                 CONCAT16(auVar16[8],
                                          CONCAT15(auVar16[4],
                                                   CONCAT14(auVar16[0],
                                                            CONCAT13(auVar17[0xc],
                                                                     CONCAT12(auVar17[8],
                                                                              CONCAT11(auVar17[4],
                                                                                       auVar17[0])))
                                                           )))),1);
      *puVar12 = uVar13;
      pauVar11 = pauVar11 + 2;
      puVar12 = puVar12 + 1;
    } while (lVar9 != 0);
    param_2 = param_2 + uVar7;
    param_5 = param_5 + uVar7;
    if (uVar1 == uVar7) {
      return param_3;
    }
  }
LAB_00732894:
  do {
    puVar10 = param_2 + 1;
    uVar2 = param_4;
    if (*param_2 < 0x80) {
      uVar2 = *param_2;
    }
    *param_5 = (char)uVar2;
    param_2 = puVar10;
    param_5 = param_5 + 1;
  } while (puVar10 != param_3);
  return param_3;
}


// ===== 007329d0  FUN_007329d0 =====

void FUN_007329d0(long *param_1,long param_2,undefined1 param_3,long param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_007a3a68;
  param_1[1] = param_4 + -1;
  param_1[2] = param_2;
  *(undefined1 *)(param_1 + 3) = param_3;
  *param_1 = (long)(puVar1 + 0x10);
  if (param_2 != 0) {
    return;
  }
  param_1[2] = (long)&DAT_002124f0;
  return;
}


// ===== 00732a08  FUN_00732a08 =====

void FUN_00732a08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0079c868;
  if (((void *)param_1[2] != (void *)0x0) && (*(char *)(param_1 + 3) != '\0')) {
    free((void *)param_1[2]);
  }
  FUN_00712454(param_1);
  return;
}


// ===== 00732a5c  FUN_00732a5c =====

void FUN_00732a5c(void *param_1)

{
  FUN_00732a08();
  free(param_1);
  return;
}


// ===== 00732a88  FUN_00732a88 =====

uint FUN_00732a88(undefined8 param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 >> 7 & 1) == 0) {
    if (((DAT_007b0958 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007b0958), iVar1 != 0)) {
                    /* try { // try from 00732ae8 to 00732afb has its CatchHandler @ 00732b14 */
      DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_00739d60(&DAT_007b0958);
    }
    if (0xffffffe5 < (param_2 & 0xff) - 0x7b) {
      param_2 = param_2 - 0x20;
    }
  }
  return param_2;
}


// ===== 00732b2c  FUN_00732b2c =====

byte * FUN_00732b2c(undefined8 param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  
  pbVar4 = param_2;
  if (param_2 != param_3) {
    do {
      bVar1 = *param_2;
      bVar5 = bVar1;
      if (-1 < (char)bVar1) {
        if (((DAT_007b0958 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007b0958), iVar2 != 0)) {
                    /* try { // try from 00732bac to 00732bb7 has its CatchHandler @ 00732be8 */
          DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          FUN_00739d60(&DAT_007b0958);
        }
        bVar5 = *param_2;
        if (0xffffffe5 < bVar1 - 0x7b) {
          bVar5 = *param_2 - 0x20;
        }
      }
      pbVar3 = param_2 + 1;
      *param_2 = bVar5;
      pbVar4 = param_3;
      param_2 = pbVar3;
    } while (pbVar3 != param_3);
  }
  return pbVar4;
}


// ===== 00732c00  FUN_00732c00 =====

uint FUN_00732c00(undefined8 param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 >> 7 & 1) == 0) {
    if (((DAT_007b0958 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007b0958), iVar1 != 0)) {
                    /* try { // try from 00732c60 to 00732c73 has its CatchHandler @ 00732c8c */
      DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_00739d60(&DAT_007b0958);
    }
    if (0xffffffe5 < (param_2 & 0xff) - 0x5b) {
      param_2 = param_2 + 0x20;
    }
  }
  return param_2;
}


// ===== 00732ca4  FUN_00732ca4 =====

byte * FUN_00732ca4(undefined8 param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  
  pbVar4 = param_2;
  if (param_2 != param_3) {
    do {
      bVar1 = *param_2;
      bVar5 = bVar1;
      if (-1 < (char)bVar1) {
        if (((DAT_007b0958 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007b0958), iVar2 != 0)) {
                    /* try { // try from 00732d24 to 00732d2f has its CatchHandler @ 00732d60 */
          DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          FUN_00739d60(&DAT_007b0958);
        }
        bVar5 = *param_2;
        if (0xffffffe5 < bVar1 - 0x5b) {
          bVar5 = *param_2 + 0x20;
        }
      }
      pbVar3 = param_2 + 1;
      *param_2 = bVar5;
      pbVar4 = param_3;
      param_2 = pbVar3;
    } while (pbVar3 != param_3);
  }
  return pbVar4;
}


// ===== 00732d78  FUN_00732d78 =====

undefined4 FUN_00732d78(undefined8 param_1,undefined4 param_2)

{
  return param_2;
}


// ===== 00732d84  FUN_00732d84 =====

undefined1 *
FUN_00732d84(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_2 == param_3) {
    return param_2;
  }
  uVar2 = (long)param_3 - (long)param_2;
  if ((7 < uVar2) && (0x1f < (ulong)((long)param_4 - (long)param_2))) {
    if (uVar2 < 0x20) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar2 & 0xffffffffffffffe0;
      puVar3 = (undefined8 *)(param_2 + 0x10);
      puVar4 = (undefined8 *)(param_4 + 0x10);
      uVar8 = uVar6;
      do {
        puVar1 = puVar3 + -1;
        uVar9 = puVar3[-2];
        uVar11 = puVar3[1];
        uVar10 = *puVar3;
        uVar8 = uVar8 - 0x20;
        puVar3 = puVar3 + 4;
        puVar4[-1] = *puVar1;
        puVar4[-2] = uVar9;
        puVar4[1] = uVar11;
        *puVar4 = uVar10;
        puVar4 = puVar4 + 4;
      } while (uVar8 != 0);
      if (uVar2 == uVar6) {
        return param_3;
      }
      if ((uVar2 & 0x18) == 0) {
        param_2 = param_2 + uVar6;
        param_4 = param_4 + uVar6;
        goto LAB_00732e3c;
      }
    }
    uVar8 = uVar2 & 0xfffffffffffffff8;
    lVar7 = uVar6 - uVar8;
    puVar3 = (undefined8 *)(param_2 + uVar6);
    puVar4 = (undefined8 *)(param_4 + uVar6);
    do {
      lVar7 = lVar7 + 8;
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (lVar7 != 0);
    param_4 = param_4 + uVar8;
    param_2 = param_2 + uVar8;
    if (uVar2 == uVar8) {
      return param_3;
    }
  }
LAB_00732e3c:
  do {
    puVar5 = param_2 + 1;
    *param_4 = *param_2;
    param_4 = param_4 + 1;
    param_2 = puVar5;
  } while (puVar5 != param_3);
  return param_3;
}


// ===== 00732e54  FUN_00732e54 =====

undefined4 FUN_00732e54(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  if (-1 < (char)param_2) {
    param_3 = param_2;
  }
  return param_3;
}


// ===== 00732e68  FUN_00732e68 =====

char * FUN_00732e68(undefined8 param_1,char *param_2,char *param_3,char param_4,char *param_5)

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
        uVar9 = uVar9 - 0x20;
        pauVar5 = pauVar5 + 2;
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
        goto LAB_00732f40;
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
LAB_00732f40:
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


// ===== 00732f60  FUN_00732f60 =====

void FUN_00732f60(void *param_1)

{
  thunk_FUN_00712454();
  free(param_1);
  return;
}


// ===== 00732f8c  FUN_00732f8c =====

undefined8
FUN_00732f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  *param_5 = param_3;
  *param_8 = param_6;
  return 3;
}


// ===== 00732fa0  FUN_00732fa0 =====

undefined8
FUN_00732fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  *param_5 = param_3;
  *param_8 = param_6;
  return 3;
}


// ===== 00732fb4  FUN_00732fb4 =====

undefined8
FUN_00732fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// ===== 00732fc4  FUN_00732fc4 =====

undefined8 FUN_00732fc4(void)

{
  return 1;
}


// ===== 00732fd0  FUN_00732fd0 =====

undefined8 FUN_00732fd0(void)

{
  return 1;
}


// ===== 00732fdc  FUN_00732fdc =====

ulong FUN_00732fdc(undefined8 param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  
  uVar1 = param_4 - param_3;
  if (param_5 <= (ulong)(param_4 - param_3)) {
    uVar1 = param_5;
  }
  return uVar1;
}


// ===== 00732ff0  FUN_00732ff0 =====

undefined8 FUN_00732ff0(void)

{
  return 1;
}


// ===== 00732ffc  FUN_00732ffc =====

void FUN_00732ffc(long *param_1,long param_2)

{
  int iVar1;
  
  *param_1 = (long)(PTR_DAT_007a3a70 + 0x10);
  param_1[1] = param_2 + -1;
  if (((DAT_007b0958 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007b0958), iVar1 != 0)) {
                    /* try { // try from 00733060 to 00733073 has its CatchHandler @ 00733088 */
    DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_00739d60(&DAT_007b0958);
  }
  param_1[2] = (long)DAT_007b0950;
  return;
}


// ===== 007330a8  FUN_007330a8 =====

void FUN_007330a8(void *param_1)

{
  FUN_00736a84();
  free(param_1);
  return;
}


// ===== 007330d4  FUN_007330d4 =====

undefined1
FUN_007330d4(long param_1,mbstate_t *param_2,wchar_t *param_3,wchar_t *param_4,wchar_t **param_5,
            char *param_6,char *param_7,long *param_8)

{
  wchar_t __wc;
  char cVar1;
  __locale_t p_Var2;
  size_t sVar3;
  char *pcVar4;
  char *pcVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  char acStack_74 [4];
  mbstate_t local_70;
  __locale_t local_68;
  
  pwVar7 = param_3;
  pwVar6 = param_3;
  if (param_3 != param_4) {
    do {
      pwVar7 = pwVar6;
      if (*pwVar6 == L'\0') break;
      pwVar6 = pwVar6 + 1;
      pwVar7 = param_4;
    } while (pwVar6 != param_4);
  }
  *param_8 = (long)param_6;
  *param_5 = param_3;
  if (param_3 != param_4) {
    do {
      while( true ) {
        if (param_6 == param_7) goto LAB_0073333c;
        local_70 = *param_2;
        p_Var2 = uselocale(*(__locale_t *)(param_1 + 0x10));
        local_68 = p_Var2;
                    /* try { // try from 00733194 to 007331ab has its CatchHandler @ 00733384 */
        sVar3 = wcsnrtombs(param_6,param_5,(long)pwVar7 - (long)param_3 >> 2,
                           (long)param_7 - (long)param_6,param_2);
        if (p_Var2 != (__locale_t)0x0) {
                    /* try { // try from 007331b4 to 007331bb has its CatchHandler @ 00733380 */
          uselocale(p_Var2);
        }
        if (sVar3 == 0) {
          return true;
        }
        if (sVar3 == 0xffffffffffffffff) {
          *param_8 = (long)param_6;
          if (param_3 != *param_5) goto LAB_007332c4;
          goto LAB_00733324;
        }
        param_6 = (char *)(*param_8 + sVar3);
        *param_8 = (long)param_6;
        if (param_6 == param_7) {
          param_3 = *param_5;
          goto LAB_0073333c;
        }
        if (pwVar7 == param_4) break;
        p_Var2 = uselocale(*(__locale_t *)(param_1 + 0x10));
                    /* try { // try from 007331f8 to 00733207 has its CatchHandler @ 0073337c */
        local_68 = p_Var2;
        sVar3 = wcrtomb(acStack_74,L'\0',param_2);
        if (p_Var2 != (__locale_t)0x0) {
                    /* try { // try from 00733210 to 00733217 has its CatchHandler @ 00733378 */
          uselocale(p_Var2);
        }
        if (sVar3 == 0xffffffffffffffff) {
          return 2;
        }
        if ((ulong)((long)param_7 - *param_8) < sVar3) {
          return true;
        }
        if (sVar3 != 0) {
          pcVar4 = acStack_74;
          do {
            pcVar5 = (char *)*param_8;
            cVar1 = *pcVar4;
            sVar3 = sVar3 - 1;
            *param_8 = (long)(pcVar5 + 1);
            *pcVar5 = cVar1;
            pcVar4 = pcVar4 + 1;
          } while (sVar3 != 0);
        }
        param_3 = *param_5 + 1;
        *param_5 = param_3;
        for (pwVar6 = param_3;
            (pwVar7 = param_4, pwVar6 != param_4 && (pwVar7 = pwVar6, *pwVar6 != L'\0'));
            pwVar6 = pwVar6 + 1) {
        }
        param_6 = (char *)*param_8;
        if (param_3 == param_4) goto LAB_0073333c;
      }
      param_3 = *param_5;
      pwVar7 = param_4;
    } while (param_3 != param_4);
  }
LAB_0073333c:
  return param_3 != param_4;
  while( true ) {
    param_3 = param_3 + 1;
    param_6 = (char *)(*param_8 + sVar3);
    *param_8 = (long)param_6;
    if (param_3 == *param_5) break;
LAB_007332c4:
    __wc = *param_3;
    p_Var2 = uselocale(*(__locale_t *)(param_1 + 0x10));
                    /* try { // try from 007332dc to 007332eb has its CatchHandler @ 00733374 */
    local_68 = p_Var2;
    sVar3 = wcrtomb(param_6,__wc,&local_70);
    if (p_Var2 != (__locale_t)0x0) {
                    /* try { // try from 007332f4 to 007332fb has its CatchHandler @ 00733370 */
      uselocale(p_Var2);
    }
    if (sVar3 == 0xffffffffffffffff) break;
  }
LAB_00733324:
  *param_5 = param_3;
  return 2;
}


// ===== 00733398  FUN_00733398 =====

bool FUN_00733398(long param_1,mbstate_t *param_2,char *param_3,char *param_4,char **param_5,
                 wchar_t *param_6,wchar_t *param_7,long *param_8)

{
  wchar_t *__pwc;
  bool bVar1;
  __locale_t p_Var2;
  size_t sVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  mbstate_t local_70;
  __locale_t local_68;
  
  pcVar6 = param_4;
  pcVar4 = param_3;
  if (param_3 != param_4) {
    do {
      pcVar6 = pcVar4;
      if (*pcVar4 == '\0') break;
      pcVar4 = pcVar4 + 1;
      pcVar6 = param_4;
    } while (pcVar4 != param_4);
  }
  *param_8 = (long)param_6;
  *param_5 = param_3;
  pcVar4 = param_3;
  if ((param_3 != param_4) && (param_6 != param_7)) {
    while( true ) {
      local_70 = *param_2;
      p_Var2 = uselocale(*(__locale_t *)(param_1 + 0x10));
      local_68 = p_Var2;
                    /* try { // try from 00733444 to 0073345b has its CatchHandler @ 00733638 */
      sVar3 = mbsnrtowcs(param_6,param_5,(long)pcVar6 - (long)param_3,
                         (long)param_7 - (long)param_6 >> 2,param_2);
      if (p_Var2 != (__locale_t)0x0) {
                    /* try { // try from 00733464 to 0073346b has its CatchHandler @ 00733634 */
        uselocale(p_Var2);
      }
      if (sVar3 == 0xffffffffffffffff) {
        *param_8 = (long)param_6;
        pcVar4 = *param_5;
        for (; param_3 != pcVar4; param_3 = param_3 + sVar3) {
          p_Var2 = uselocale(*(__locale_t *)(param_1 + 0x10));
                    /* try { // try from 00733578 to 0073358b has its CatchHandler @ 00733628 */
          local_68 = p_Var2;
          sVar3 = mbrtowc(param_6,param_3,(long)pcVar6 - (long)param_3,&local_70);
          if (p_Var2 != (__locale_t)0x0) {
                    /* try { // try from 00733594 to 0073359b has its CatchHandler @ 00733624 */
            uselocale(p_Var2);
          }
          if (sVar3 == 0) {
            sVar3 = 1;
          }
          else {
            if (sVar3 == 0xfffffffffffffffe) {
              *param_5 = param_3;
              return true;
            }
            if (sVar3 == 0xffffffffffffffff) {
              *param_5 = param_3;
              return (bool)2;
            }
          }
          param_6 = (wchar_t *)(*param_8 + 4);
          *param_8 = (long)param_6;
          pcVar4 = *param_5;
        }
        *param_5 = param_3;
        pcVar4 = param_3;
        goto LAB_007335ec;
      }
      __pwc = (wchar_t *)(*param_8 + sVar3 * 4);
      *param_8 = (long)__pwc;
      if (__pwc == param_7) break;
      bVar1 = pcVar6 != param_4;
      param_3 = *param_5;
      pcVar6 = param_4;
      if (bVar1) {
        p_Var2 = uselocale(*(__locale_t *)(param_1 + 0x10));
        local_68 = p_Var2;
                    /* try { // try from 007334ac to 007334bf has its CatchHandler @ 00733630 */
        sVar3 = mbrtowc(__pwc,param_3,1,param_2);
        if (p_Var2 != (__locale_t)0x0) {
                    /* try { // try from 007334c8 to 007334cf has its CatchHandler @ 0073362c */
          uselocale(p_Var2);
        }
        if (sVar3 != 0) {
          return (bool)2;
        }
        *param_8 = *param_8 + 4;
        param_3 = *param_5 + 1;
        *param_5 = param_3;
        pcVar5 = param_3;
        pcVar4 = param_4;
        if (param_3 == param_4) goto LAB_007335ec;
        do {
          pcVar6 = pcVar5;
          if (*pcVar5 == '\0') break;
          pcVar5 = pcVar5 + 1;
          pcVar6 = param_4;
        } while (pcVar5 != param_4);
      }
      pcVar4 = param_3;
      if ((param_3 == param_4) || (param_6 = (wchar_t *)*param_8, param_6 == param_7))
      goto LAB_007335ec;
    }
    pcVar4 = *param_5;
  }
LAB_007335ec:
  return pcVar4 != param_4;
}


// ===== 0073364c  FUN_0073364c =====

undefined8 FUN_0073364c(long param_1,mbstate_t *param_2,long param_3,long param_4,long *param_5)

{
  char cVar1;
  __locale_t __dataset;
  size_t sVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  char acStack_3c [4];
  __locale_t local_38;
  
  *param_5 = param_3;
  __dataset = uselocale(*(__locale_t *)(param_1 + 0x10));
                    /* try { // try from 00733684 to 00733693 has its CatchHandler @ 00733718 */
  local_38 = __dataset;
  sVar2 = wcrtomb(acStack_3c,L'\0',param_2);
  if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 0073369c to 007336a3 has its CatchHandler @ 00733714 */
    uselocale(__dataset);
  }
  if (sVar2 + 1 < 2) {
    uVar3 = 2;
  }
  else {
    uVar4 = sVar2 - 1;
    if ((ulong)(param_4 - *param_5) < uVar4) {
      uVar3 = 1;
    }
    else {
      if (uVar4 != 0) {
        pcVar5 = acStack_3c;
        do {
          pcVar6 = (char *)*param_5;
          cVar1 = *pcVar5;
          uVar4 = uVar4 - 1;
          *param_5 = (long)(pcVar6 + 1);
          *pcVar6 = cVar1;
          pcVar5 = pcVar5 + 1;
        } while (uVar4 != 0);
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}


// ===== 0073372c  FUN_0073372c =====

ulong FUN_0073372c(long param_1)

{
  int iVar1;
  __locale_t p_Var2;
  ulong uVar3;
  size_t sVar4;
  
                    /* try { // try from 00733748 to 0073374b has its CatchHandler @ 007337ec */
  p_Var2 = uselocale(*(__locale_t *)(param_1 + 0x10));
                    /* try { // try from 00733754 to 00733763 has its CatchHandler @ 007337d8 */
  iVar1 = mbtowc((wchar_t *)0x0,(char *)0x0,4);
  if (p_Var2 != (__locale_t)0x0) {
                    /* try { // try from 0073376c to 00733773 has its CatchHandler @ 007337d4 */
    uselocale(p_Var2);
  }
  if (iVar1 == 0) {
    if (*(__locale_t *)(param_1 + 0x10) == (__locale_t)0x0) {
      uVar3 = 1;
    }
    else {
                    /* try { // try from 00733788 to 0073378b has its CatchHandler @ 007337ec */
      p_Var2 = uselocale(*(__locale_t *)(param_1 + 0x10));
                    /* try { // try from 00733794 to 00733797 has its CatchHandler @ 007337d0 */
      sVar4 = __ctype_get_mb_cur_max();
      if (p_Var2 != (__locale_t)0x0) {
                    /* try { // try from 007337a0 to 007337a7 has its CatchHandler @ 007337cc */
        uselocale(p_Var2);
      }
      uVar3 = (ulong)(sVar4 == 1);
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


// ===== 007337f0  FUN_007337f0 =====

undefined8 FUN_007337f0(void)

{
  return 0;
}


// ===== 007337fc  FUN_007337fc =====

int FUN_007337fc(long param_1,mbstate_t *param_2,char *param_3,char *param_4,ulong param_5)

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
                    /* try { // try from 0073385c to 0073386b has its CatchHandler @ 007338e0 */
      sVar1 = mbrlen(param_3,(long)param_4 - (long)param_3,param_2);
      if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 00733874 to 0073387b has its CatchHandler @ 007338dc */
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


// ===== 007338f4  FUN_007338f4 =====

ulong FUN_007338f4(long param_1)

{
  __locale_t __dataset;
  size_t sVar1;
  
  if (*(__locale_t *)(param_1 + 0x10) == (__locale_t)0x0) {
    sVar1 = 1;
  }
  else {
                    /* try { // try from 00733910 to 00733913 has its CatchHandler @ 00733968 */
    __dataset = uselocale(*(__locale_t *)(param_1 + 0x10));
                    /* try { // try from 0073391c to 0073391f has its CatchHandler @ 00733954 */
    sVar1 = __ctype_get_mb_cur_max();
    if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 00733928 to 0073392f has its CatchHandler @ 00733950 */
      uselocale(__dataset);
    }
  }
  return sVar1 & 0xffffffff;
}


// ===== 0073396c  FUN_0073396c =====

void FUN_0073396c(void *param_1)

{
  thunk_FUN_00712454();
  free(param_1);
  return;
}


// ===== 00733998  FUN_00733998 =====

void FUN_00733998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = param_6;
  uStack_28 = param_3;
  FUN_00733a00(param_3,param_4,&uStack_28,param_6,param_7,&local_30,0x10ffff,0);
  *param_5 = uStack_28;
  *param_8 = local_30;
  return;
}


// ===== 00733a00  FUN_00733a00 =====

undefined8
FUN_00733a00(long param_1,ushort *param_2,long *param_3,undefined1 *param_4,long param_5,
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
        *param_6 = (long)(pbVar7 + 1);
        bVar8 = (byte)(uVar2 >> 6) | 0xc0;
      }
      else {
        bVar8 = (byte)(uVar2 >> 8);
        if (uVar2 >> 0xb < 0x1b) {
          pbVar7 = (byte *)*param_6;
          if (param_5 - (long)pbVar7 < 3) {
            return 1;
          }
          *param_6 = (long)(pbVar7 + 1);
          *pbVar7 = bVar8 >> 4 | 0xe0;
          pbVar7 = (byte *)*param_6;
          bVar8 = (byte)(uVar2 >> 6) & 0x3f | 0x80;
        }
        else {
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
            goto LAB_00733ab4;
          }
          if (uVar5 < 0xe000) {
            return 2;
          }
          pbVar7 = (byte *)*param_6;
          if (param_5 - (long)pbVar7 < 3) {
            return 1;
          }
          *param_6 = (long)(pbVar7 + 1);
          *pbVar7 = bVar8 >> 4 | 0xe0;
          pbVar7 = (byte *)*param_6;
          bVar8 = (byte)(uVar2 >> 6) & 0xbf;
        }
        *param_6 = (long)(pbVar7 + 1);
      }
      *pbVar7 = bVar8;
      pbVar7 = (byte *)*param_6;
      *param_6 = (long)(pbVar7 + 1);
      *pbVar7 = (byte)uVar2 & 0x3f | 0x80;
    }
LAB_00733ab4:
    puVar6 = (ushort *)(*param_3 + 2);
    *param_3 = (long)puVar6;
  } while( true );
}


// ===== 00733c5c  FUN_00733c5c =====

void FUN_00733c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = param_6;
  uStack_28 = param_3;
  FUN_00733cc4(param_3,param_4,&uStack_28,param_6,param_7,&local_30,0x10ffff,0);
  *param_5 = uStack_28;
  *param_8 = local_30;
  return;
}


// ===== 00733cc4  FUN_00733cc4 =====

bool FUN_00733cc4(long param_1,byte *param_2,long *param_3,long param_4,ushort *param_5,
                 long *param_6,ulong param_7,uint param_8)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort *puVar5;
  byte *pbVar6;
  long lVar7;
  uint uVar8;
  ushort *puVar9;
  uint uVar10;
  
  *param_3 = param_1;
  *param_6 = param_4;
  pbVar6 = (byte *)*param_3;
  if (((((param_8 >> 2 & 1) != 0) && (2 < (long)param_2 - (long)pbVar6)) && (*pbVar6 == 0xef)) &&
     ((pbVar6[1] == 0xbb && (pbVar6[2] == 0xbf)))) {
    pbVar6 = pbVar6 + 3;
    *param_3 = (long)pbVar6;
  }
  if (param_2 <= pbVar6) {
    return false;
  }
  puVar5 = (ushort *)*param_6;
  do {
    puVar9 = puVar5;
    if (param_5 <= puVar9) break;
    bVar2 = *pbVar6;
    if (param_7 < bVar2) {
      return (bool)2;
    }
    if ((char)bVar2 < '\0') {
      if (bVar2 < 0xc2) {
        return (bool)2;
      }
      uVar8 = (uint)bVar2;
      if (bVar2 < 0xe0) {
        if ((long)param_2 - (long)pbVar6 < 2) {
          return true;
        }
        if ((pbVar6[1] & 0xc0) != 0x80) {
          return (bool)2;
        }
        uVar8 = pbVar6[1] & 0x3f | (uVar8 & 0x1f) << 6;
        if (param_7 < uVar8) {
          return (bool)2;
        }
        *puVar9 = (ushort)uVar8;
        pbVar6 = pbVar6 + 2;
      }
      else if (bVar2 < 0xf0) {
        if ((long)param_2 - (long)pbVar6 < 2) {
          return true;
        }
        uVar10 = (uint)pbVar6[1];
        if (uVar8 == 0xed) {
          uVar8 = uVar10 & 0xe0;
joined_r0x00733e2c:
          if (uVar8 != 0x80) {
            return (bool)2;
          }
        }
        else {
          if (uVar8 != 0xe0) {
            uVar8 = uVar10 & 0xc0;
            goto joined_r0x00733e2c;
          }
          if ((uVar10 & 0xe0) != 0xa0) {
            return (bool)2;
          }
        }
        if ((long)param_2 - (long)pbVar6 == 2) {
          return true;
        }
        if (((pbVar6[2] & 0xc0) != 0x80) ||
           (uVar8 = (uVar10 & 0x3f) << 6, uVar10 = pbVar6[2] & 0x3f,
           param_7 < ((uint)bVar2 << 0xc & 0xffc0 | uVar8 | uVar10))) {
          return (bool)2;
        }
        *puVar9 = (ushort)((uint)bVar2 << 0xc) | (ushort)uVar8 | (ushort)uVar10;
        pbVar6 = pbVar6 + 3;
      }
      else {
        if (0xf4 < uVar8) {
          return (bool)2;
        }
        lVar7 = (long)param_2 - (long)pbVar6;
        if (lVar7 < 2) {
          return true;
        }
        bVar2 = pbVar6[1];
        uVar10 = (uint)bVar2;
        if (uVar8 == 0xf4) {
          uVar1 = uVar10 & 0xf0;
joined_r0x00733e84:
          if (uVar1 != 0x80) {
            return (bool)2;
          }
        }
        else {
          if (uVar8 != 0xf0) {
            uVar1 = uVar10 & 0xc0;
            goto joined_r0x00733e84;
          }
          if (0x2f < uVar10 - 0x90) {
            return (bool)2;
          }
        }
        if (lVar7 == 2) {
          return true;
        }
        bVar3 = pbVar6[2];
        if ((bVar3 & 0xc0) != 0x80) {
          return (bool)2;
        }
        if (lVar7 == 3) {
          return true;
        }
        bVar4 = pbVar6[3];
        if ((bVar4 & 0xc0) != 0x80) {
          return (bool)2;
        }
        if ((long)param_5 - (long)puVar9 < 4) {
          return true;
        }
        if (param_7 < (((ulong)uVar8 & 7) << 0x12 | ((ulong)bVar2 & 0x3f) << 0xc |
                       ((ulong)bVar3 & 0x3f) << 6 | (ulong)bVar4 & 0x3f)) {
          return (bool)2;
        }
        puVar9[1] = bVar4 & 0x3f | (ushort)((bVar3 & 0xf) << 6) | 0xdc00;
        *param_6 = (long)(puVar9 + 1);
        lVar7 = *param_3;
        *puVar9 = ((ushort)((uVar10 & 0xf) << 2) |
                   (ushort)(((uVar8 & 7) << 2 | bVar2 >> 4 & 3) << 6) | bVar3 >> 4 & 3) + 0x3fc0 |
                  0xd800;
        pbVar6 = (byte *)(lVar7 + 4);
      }
    }
    else {
      *puVar9 = (ushort)bVar2;
      pbVar6 = pbVar6 + 1;
    }
    *param_3 = (long)pbVar6;
    lVar7 = *param_6;
    *param_6 = lVar7 + 2;
    pbVar6 = (byte *)*param_3;
    puVar5 = (ushort *)(lVar7 + 2);
  } while (pbVar6 < param_2);
  return param_5 <= puVar9;
}


// ===== 00733f58  FUN_00733f58 =====

undefined8
FUN_00733f58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// ===== 00733f68  FUN_00733f68 =====

undefined8 FUN_00733f68(void)

{
  return 0;
}


// ===== 00733f74  FUN_00733f74 =====

undefined8 FUN_00733f74(void)

{
  return 0;
}


// ===== 00733f80  FUN_00733f80 =====

void FUN_00733f80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00733f9c(param_3,param_4,param_5,0x10ffff,0);
  return;
}


// ===== 00733f9c  FUN_00733f9c =====

int FUN_00733f9c(byte *param_1,byte *param_2,ulong param_3,ulong param_4,uint param_5)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  
  pbVar4 = param_1;
  if ((((2 < (long)param_2 - (long)param_1) && ((param_5 >> 2 & 1) != 0)) && (*param_1 == 0xef)) &&
     (param_1[1] == 0xbb)) {
    lVar1 = 3;
    if (param_1[2] != 0xbf) {
      lVar1 = 0;
    }
    pbVar4 = param_1 + lVar1;
  }
  if ((pbVar4 < param_2) && (param_3 != 0)) {
    uVar5 = 0;
    while( true ) {
      bVar2 = *pbVar4;
      if (param_4 < bVar2) break;
      if ((char)bVar2 < '\0') {
        if (bVar2 < 0xc2) break;
        uVar6 = (uint)bVar2;
        if (bVar2 < 0xe0) {
          if ((((long)param_2 - (long)pbVar4 < 2) || ((pbVar4[1] & 0xc0) != 0x80)) ||
             (param_4 < (pbVar4[1] & 0x3f | (uVar6 & 0x1f) << 6))) break;
          pbVar4 = pbVar4 + 2;
        }
        else if (bVar2 < 0xf0) {
          if ((long)param_2 - (long)pbVar4 < 3) break;
          uVar7 = (uint)pbVar4[1];
          if (uVar6 == 0xed) {
            uVar8 = uVar7 & 0xe0;
LAB_007340fc:
            if (uVar8 != 0x80) break;
          }
          else {
            if (uVar6 != 0xe0) {
              uVar8 = uVar7 & 0xc0;
              goto LAB_007340fc;
            }
            if ((uVar7 & 0xe0) != 0xa0) break;
          }
          if (((pbVar4[2] & 0xc0) != 0x80) ||
             (param_4 < ((uVar6 & 0xf) << 0xc | (uVar7 & 0x3f) << 6 | pbVar4[2] & 0x3f))) break;
          pbVar4 = pbVar4 + 3;
        }
        else {
          if (((0xf4 < uVar6) || ((long)param_2 - (long)pbVar4 < 4)) || (param_3 - uVar5 < 2))
          break;
          bVar3 = pbVar4[1];
          if (uVar6 == 0xf4) {
            bVar9 = bVar3 & 0xf0;
LAB_00734140:
            if (bVar9 != 0x80) break;
          }
          else {
            if (uVar6 != 0xf0) {
              bVar9 = bVar3 & 0xc0;
              goto LAB_00734140;
            }
            if (0x2f < bVar3 - 0x90) break;
          }
          if ((((pbVar4[2] & 0xc0) != 0x80) || ((pbVar4[3] & 0xc0) != 0x80)) ||
             (param_4 < (((ulong)bVar2 & 7) << 0x12 | ((ulong)bVar3 & 0x3f) << 0xc |
                         ((ulong)pbVar4[2] & 0x3f) << 6 | (ulong)pbVar4[3] & 0x3f))) break;
          uVar5 = uVar5 + 1;
          pbVar4 = pbVar4 + 4;
        }
      }
      else {
        pbVar4 = pbVar4 + 1;
      }
      if ((param_2 <= pbVar4) || (uVar5 = uVar5 + 1, param_3 <= uVar5)) break;
    }
  }
  return (int)pbVar4 - (int)param_1;
}


// ===== 0073419c  FUN_0073419c =====

undefined8 FUN_0073419c(void)

{
  return 4;
}


// ===== 007341a8  FUN_007341a8 =====

void FUN_007341a8(void *param_1)

{
  thunk_FUN_00712454();
  free(param_1);
  return;
}


// ===== 007341d4  FUN_007341d4 =====

void FUN_007341d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = param_6;
  uStack_28 = param_3;
  FUN_00733a00(param_3,param_4,&uStack_28,param_6,param_7,&local_30,0x10ffff,0);
  *param_5 = uStack_28;
  *param_8 = local_30;
  return;
}


// ===== 0073423c  FUN_0073423c =====

void FUN_0073423c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = param_6;
  uStack_28 = param_3;
  FUN_00733cc4(param_3,param_4,&uStack_28,param_6,param_7,&local_30,0x10ffff,0);
  *param_5 = uStack_28;
  *param_8 = local_30;
  return;
}


// ===== 007342a4  FUN_007342a4 =====

undefined8
FUN_007342a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// ===== 007342b4  FUN_007342b4 =====

undefined8 FUN_007342b4(void)

{
  return 0;
}


// ===== 007342c0  FUN_007342c0 =====

undefined8 FUN_007342c0(void)

{
  return 0;
}


// ===== 007342cc  FUN_007342cc =====

void FUN_007342cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00733f9c(param_3,param_4,param_5,0x10ffff,0);
  return;
}


// ===== 007342e8  FUN_007342e8 =====

undefined8 FUN_007342e8(void)

{
  return 4;
}


// ===== 007342f4  FUN_007342f4 =====

void FUN_007342f4(void *param_1)

{
  thunk_FUN_00712454();
  free(param_1);
  return;
}


// ===== 00734320  FUN_00734320 =====

undefined8
FUN_00734320(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4,ulong *param_5,
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
        goto LAB_0073443c;
      }
      bVar2 = (byte)uVar1;
      if (uVar1 < 0x80) {
        if (param_7 - (long)pbVar4 < 1) goto LAB_00734438;
        param_6 = pbVar4 + 1;
        *pbVar4 = bVar2;
      }
      else if (uVar1 < 0x800) {
        if (param_7 - (long)pbVar4 < 2) goto LAB_00734438;
        param_6 = pbVar4 + 2;
        *pbVar4 = (byte)(uVar1 >> 6) | 0xc0;
        pbVar4[1] = bVar2 & 0x3f | 0x80;
      }
      else if (uVar1 >> 0x10 == 0) {
        if (param_7 - (long)pbVar4 < 3) {
LAB_00734438:
          uVar3 = 1;
          goto LAB_0073443c;
        }
        param_6 = pbVar4 + 3;
        *pbVar4 = (byte)(uVar1 >> 0xc) | 0xe0;
        pbVar4[1] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
        pbVar4[2] = bVar2 & 0x3f | 0x80;
      }
      else {
        if (param_7 - (long)pbVar4 < 4) goto LAB_00734438;
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
LAB_0073443c:
  *param_5 = (ulong)param_3;
  *param_8 = (long)pbVar4;
  return uVar3;
}


// ===== 00734448  FUN_00734448 =====

void FUN_00734448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = param_6;
  uStack_28 = param_3;
  FUN_007344b0(param_3,param_4,&uStack_28,param_6,param_7,&local_30,0x10ffff,0);
  *param_5 = uStack_28;
  *param_8 = local_30;
  return;
}


// ===== 007344b0  FUN_007344b0 =====

bool FUN_007344b0(long param_1,byte *param_2,long *param_3,long param_4,uint *param_5,long *param_6,
                 ulong param_7,uint param_8)

{
  uint uVar1;
  byte bVar2;
  uint *puVar3;
  long lVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  
  *param_3 = param_1;
  *param_6 = param_4;
  pbVar5 = (byte *)*param_3;
  if (((((param_8 >> 2 & 1) != 0) && (2 < (long)param_2 - (long)pbVar5)) && (*pbVar5 == 0xef)) &&
     ((pbVar5[1] == 0xbb && (pbVar5[2] == 0xbf)))) {
    pbVar5 = pbVar5 + 3;
    *param_3 = (long)pbVar5;
  }
  if (param_2 <= pbVar5) {
    return false;
  }
  puVar3 = (uint *)*param_6;
  do {
    puVar8 = puVar3;
    if (param_5 <= puVar8) break;
    bVar2 = *pbVar5;
    uVar6 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      if (uVar6 < 0xc2) {
        return (bool)2;
      }
      if (uVar6 < 0xe0) {
        if ((long)param_2 - (long)pbVar5 < 2) {
          return true;
        }
        if ((pbVar5[1] & 0xc0) != 0x80) {
          return (bool)2;
        }
        lVar4 = 2;
        uVar6 = pbVar5[1] & 0x3f | (uVar6 & 0x1f) << 6;
        if (param_7 < uVar6) {
          return (bool)2;
        }
      }
      else if (uVar6 < 0xf0) {
        if ((long)param_2 - (long)pbVar5 < 2) {
          return true;
        }
        uVar7 = (uint)pbVar5[1];
        if (uVar6 == 0xed) {
          uVar1 = uVar7 & 0xe0;
joined_r0x0073461c:
          if (uVar1 != 0x80) {
            return (bool)2;
          }
        }
        else {
          if (uVar6 != 0xe0) {
            uVar1 = uVar7 & 0xc0;
            goto joined_r0x0073461c;
          }
          if ((uVar7 & 0xe0) != 0xa0) {
            return (bool)2;
          }
        }
        if ((long)param_2 - (long)pbVar5 == 2) {
          return true;
        }
        if (((pbVar5[2] & 0xc0) != 0x80) ||
           (uVar6 = (uVar6 & 0xf) << 0xc | (uVar7 & 0x3f) << 6 | pbVar5[2] & 0x3f, param_7 < uVar6))
        {
          return (bool)2;
        }
        lVar4 = 3;
      }
      else {
        if (0xf4 < uVar6) {
          return (bool)2;
        }
        lVar4 = (long)param_2 - (long)pbVar5;
        if (lVar4 < 2) {
          return true;
        }
        uVar7 = (uint)pbVar5[1];
        if (uVar6 == 0xf4) {
          uVar1 = uVar7 & 0xf0;
joined_r0x0073466c:
          if (uVar1 != 0x80) {
            return (bool)2;
          }
        }
        else {
          if (uVar6 != 0xf0) {
            uVar1 = uVar7 & 0xc0;
            goto joined_r0x0073466c;
          }
          if (0x2f < uVar7 - 0x90) {
            return (bool)2;
          }
        }
        if (lVar4 == 2) {
          return true;
        }
        if ((pbVar5[2] & 0xc0) != 0x80) {
          return (bool)2;
        }
        if (lVar4 == 3) {
          return true;
        }
        if ((pbVar5[3] & 0xc0) != 0x80) {
          return (bool)2;
        }
        uVar6 = (uVar6 & 7) << 0x12 | (uVar7 & 0x3f) << 0xc | (pbVar5[2] & 0x3f) << 6 |
                pbVar5[3] & 0x3f;
        if (param_7 < uVar6) {
          return (bool)2;
        }
        lVar4 = 4;
      }
    }
    else {
      if (param_7 < bVar2) {
        return (bool)2;
      }
      lVar4 = 1;
    }
    *puVar8 = uVar6;
    *param_3 = (long)(pbVar5 + lVar4);
    lVar4 = *param_6;
    *param_6 = lVar4 + 4;
    pbVar5 = (byte *)*param_3;
    puVar3 = (uint *)(lVar4 + 4);
  } while (pbVar5 < param_2);
  return param_5 <= puVar8;
}


// ===== 007346f4  FUN_007346f4 =====

undefined8
FUN_007346f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// ===== 00734704  FUN_00734704 =====

undefined8 FUN_00734704(void)

{
  return 0;
}


// ===== 00734710  FUN_00734710 =====

undefined8 FUN_00734710(void)

{
  return 0;
}


// ===== 0073471c  FUN_0073471c =====

void FUN_0073471c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00734738(param_3,param_4,param_5,0x10ffff,0);
  return;
}


// ===== 00734738  FUN_00734738 =====

int FUN_00734738(byte *param_1,byte *param_2,ulong param_3,ulong param_4,uint param_5)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
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
      bVar1 = *pbVar3;
      if ((char)bVar1 < '\0') {
        if (bVar1 < 0xc2) break;
        uVar5 = (uint)bVar1;
        if (bVar1 < 0xe0) {
          if ((((long)param_2 - (long)pbVar3 < 2) || ((pbVar3[1] & 0xc0) != 0x80)) ||
             (param_4 < (pbVar3[1] & 0x3f | (uVar5 & 0x1f) << 6))) break;
          lVar6 = 2;
        }
        else if (bVar1 < 0xf0) {
          if ((long)param_2 - (long)pbVar3 < 3) break;
          uVar7 = (uint)pbVar3[1];
          if (uVar5 == 0xed) {
            uVar8 = uVar7 & 0xe0;
LAB_00734884:
            if (uVar8 != 0x80) break;
          }
          else {
            if (uVar5 != 0xe0) {
              uVar8 = uVar7 & 0xc0;
              goto LAB_00734884;
            }
            if ((uVar7 & 0xe0) != 0xa0) break;
          }
          if (((pbVar3[2] & 0xc0) != 0x80) ||
             (param_4 < ((uVar5 & 0xf) << 0xc | (uVar7 & 0x3f) << 6 | pbVar3[2] & 0x3f))) break;
          lVar6 = 3;
        }
        else {
          if ((0xf4 < bVar1) || ((long)param_2 - (long)pbVar3 < 4)) break;
          uVar7 = (uint)pbVar3[1];
          if (uVar5 == 0xf4) {
            uVar8 = uVar7 & 0xf0;
LAB_007348c0:
            if (uVar8 != 0x80) break;
          }
          else {
            if (uVar5 != 0xf0) {
              uVar8 = uVar7 & 0xc0;
              goto LAB_007348c0;
            }
            if (0x2f < uVar7 - 0x90) break;
          }
          if ((((pbVar3[2] & 0xc0) != 0x80) || ((pbVar3[3] & 0xc0) != 0x80)) ||
             (param_4 < ((uVar5 & 7) << 0x12 | (uVar7 & 0x3f) << 0xc | (pbVar3[2] & 0x3f) << 6 |
                        pbVar3[3] & 0x3f))) break;
          lVar6 = 4;
        }
      }
      else {
        if (param_4 < bVar1) break;
        lVar6 = 1;
      }
      pbVar3 = pbVar3 + lVar6;
      if ((param_2 <= pbVar3) || (bVar2 = param_3 <= uVar4, uVar4 = uVar4 + 1, bVar2)) break;
    } while( true );
  }
  return (int)pbVar3 - (int)param_1;
}


// ===== 0073491c  FUN_0073491c =====

undefined8 FUN_0073491c(void)

{
  return 4;
}


// ===== 00734928  FUN_00734928 =====

void FUN_00734928(void *param_1)

{
  thunk_FUN_00712454();
  free(param_1);
  return;
}


// ===== 00734954  FUN_00734954 =====

undefined8
FUN_00734954(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4,ulong *param_5,
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
        goto LAB_00734a70;
      }
      bVar2 = (byte)uVar1;
      if (uVar1 < 0x80) {
        if (param_7 - (long)pbVar4 < 1) goto LAB_00734a6c;
        param_6 = pbVar4 + 1;
        *pbVar4 = bVar2;
      }
      else if (uVar1 < 0x800) {
        if (param_7 - (long)pbVar4 < 2) goto LAB_00734a6c;
        param_6 = pbVar4 + 2;
        *pbVar4 = (byte)(uVar1 >> 6) | 0xc0;
        pbVar4[1] = bVar2 & 0x3f | 0x80;
      }
      else if (uVar1 >> 0x10 == 0) {
        if (param_7 - (long)pbVar4 < 3) {
LAB_00734a6c:
          uVar3 = 1;
          goto LAB_00734a70;
        }
        param_6 = pbVar4 + 3;
        *pbVar4 = (byte)(uVar1 >> 0xc) | 0xe0;
        pbVar4[1] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
        pbVar4[2] = bVar2 & 0x3f | 0x80;
      }
      else {
        if (param_7 - (long)pbVar4 < 4) goto LAB_00734a6c;
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
LAB_00734a70:
  *param_5 = (ulong)param_3;
  *param_8 = (long)pbVar4;
  return uVar3;
}


// ===== 00734a7c  FUN_00734a7c =====

void FUN_00734a7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = param_6;
  uStack_28 = param_3;
  FUN_007344b0(param_3,param_4,&uStack_28,param_6,param_7,&local_30,0x10ffff,0);
  *param_5 = uStack_28;
  *param_8 = local_30;
  return;
}


// ===== 00734ae4  FUN_00734ae4 =====

undefined8
FUN_00734ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// ===== 00734af4  FUN_00734af4 =====

undefined8 FUN_00734af4(void)

{
  return 0;
}


// ===== 00734b00  FUN_00734b00 =====

undefined8 FUN_00734b00(void)

{
  return 0;
}


// ===== 00734b0c  FUN_00734b0c =====

void FUN_00734b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00734738(param_3,param_4,param_5,0x10ffff,0);
  return;
}


// ===== 00734b28  FUN_00734b28 =====

undefined8 FUN_00734b28(void)

{
  return 4;
}


// ===== 00734b34  FUN_00734b34 =====

void FUN_00734b34(void *param_1)

{
  thunk_FUN_00712454();
  free(param_1);
  return;
}


// ===== 00734b60  FUN_00734b60 =====

void FUN_00734b60(void *param_1)

{
  thunk_FUN_00712454();
  free(param_1);
  return;
}


// ===== 00734b8c  FUN_00734b8c =====

void FUN_00734b8c(long *param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_007a3a78;
  *(undefined2 *)(param_1 + 2) = 0x2c2e;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = param_2 + -1;
  return;
}


// ===== 00734bb8  FUN_00734bb8 =====

void FUN_00734bb8(long *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a3a80;
  lVar1 = DAT_001b7188;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[2] = lVar1;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = param_2 + -1;
  return;
}


// ===== 00734be8  FUN_00734be8 =====

void FUN_00734be8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0079c930;
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    free((void *)param_1[5]);
  }
  FUN_00712454(param_1);
  return;
}


// ===== 00734c38  FUN_00734c38 =====

void FUN_00734c38(void *param_1)

{
  FUN_00734be8();
  free(param_1);
  return;
}


// ===== 00734c64  FUN_00734c64 =====

void FUN_00734c64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0079c980;
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    free((void *)param_1[5]);
  }
  FUN_00712454(param_1);
  return;
}


// ===== 00734cb4  FUN_00734cb4 =====

void FUN_00734cb4(void *param_1)

{
  FUN_00734c64();
  free(param_1);
  return;
}


// ===== 00734ce0  FUN_00734ce0 =====

undefined1 FUN_00734ce0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}


// ===== 00734cec  FUN_00734cec =====

undefined4 FUN_00734cec(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


// ===== 00734cf8  FUN_00734cf8 =====

undefined1 FUN_00734cf8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}


// ===== 00734d04  FUN_00734d04 =====

undefined4 FUN_00734d04(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 00734d10  FUN_00734d10 =====

void FUN_00734d10(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar2;
    param_1[2] = uVar1;
    return;
  }
  FUN_002fb36c(param_1,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x20));
  return;
}


// ===== 00734d40  FUN_00734d40 =====

void FUN_00734d40(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar2;
    param_1[2] = uVar1;
    return;
  }
  FUN_002fb36c(param_1,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x20));
  return;
}


// ===== 00734d70  FUN_00734d70 =====

void FUN_00734d70(undefined1 *param_1)

{
  param_1[5] = 0;
  *param_1 = 8;
  *(undefined4 *)(param_1 + 1) = 0x65757274;
  return;
}


// ===== 00734d90  FUN_00734d90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00734d90(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_001b74dc;
  uVar1 = _DAT_001b74d4;
  *param_1 = 8;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  *(undefined8 *)(param_1 + 4) = uVar1;
  return;
}


// ===== 00734db4  FUN_00734db4 =====

void FUN_00734db4(undefined1 *param_1)

{
  *param_1 = 10;
  *(undefined4 *)(param_1 + 1) = 0x736c6166;
  *(undefined2 *)(param_1 + 5) = 0x65;
  return;
}


// ===== 00734dd8  FUN_00734dd8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00734dd8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  
  pwVar5 = (wchar_t *)FUN_00759c3c(0x1c);
  param_1[2] = pwVar5;
  uVar4 = _UNK_00200378;
  uVar3 = _DAT_00200370;
  uVar2 = u_false_001b7550._8_8_;
  uVar1 = u_false_001b7550._0_8_;
  pwVar5[4] = L'e';
  pwVar5[5] = L'\0';
  param_1[1] = uVar4;
  *param_1 = uVar3;
  *(undefined8 *)(pwVar5 + 2) = uVar2;
  *(undefined8 *)pwVar5 = uVar1;
  return;
}


// ===== 00734e2c  FUN_00734e2c =====

undefined1 * FUN_00734e2c(void)

{
  int iVar1;
  
  if (((DAT_007b0b68 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007b0b68), iVar1 != 0)) {
    FUN_00734e98();
    DAT_007b0b60 = &DAT_007b0c60;
    FUN_00739d60(&DAT_007b0b68);
  }
  return DAT_007b0b60;
}


// ===== 00734e98  FUN_00734e98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00734e98(void)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  
  if (((DAT_007b0db0 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007b0db0), iVar2 != 0)) {
    __cxa_atexit(FUN_00737088,0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007b0db0);
  }
  if ((DAT_007b0c60 & 1) == 0) {
    DAT_007b0c60 = 0xc;
    puVar5 = &DAT_007b0c61;
  }
  else {
    DAT_007b0c68 = 6;
    puVar5 = DAT_007b0c70;
  }
  *(undefined1 *)((long)puVar5 + 6) = 0;
  *(undefined2 *)(puVar5 + 1) = 0x7961;
  *puVar5 = 0x646e7553;
  if ((DAT_007b0c78 & 1) == 0) {
    DAT_007b0c78 = 0xc;
    puVar5 = &DAT_007b0c79;
  }
  else {
    DAT_007b0c80 = 6;
    puVar5 = DAT_007b0c88;
  }
  *(undefined1 *)((long)puVar5 + 6) = 0;
  *(undefined2 *)(puVar5 + 1) = 0x7961;
  *puVar5 = 0x646e6f4d;
  if ((DAT_007b0c90 & 1) == 0) {
    DAT_007b0c90 = 0xe;
    puVar5 = &DAT_007b0c91;
  }
  else {
    DAT_007b0c98 = 7;
    puVar5 = DAT_007b0ca0;
  }
  *(undefined1 *)((long)puVar5 + 7) = 0;
  *(undefined4 *)((long)puVar5 + 3) = 0x79616473;
  *puVar5 = 0x73657554;
  uVar1 = s_Wednesday_001ea8ca._0_8_;
  if ((DAT_007b0ca8 & 1) == 0) {
    DAT_007b0ca8 = 0x12;
    pcVar3 = (char *)&DAT_007b0ca9;
  }
  else {
    ram0x007b0cb0 = 9;
    pcVar3 = DAT_007b0cb8;
  }
  pcVar3[8] = 'y';
  pcVar3[9] = '\0';
  *(undefined8 *)pcVar3 = uVar1;
  if ((DAT_007b0cc0 & 1) == 0) {
    DAT_007b0cc0 = 0x10;
    puVar4 = &DAT_007b0cc1;
  }
  else {
    ram0x007b0cc8 = 8;
    puVar4 = DAT_007b0cd0;
  }
  *(undefined1 *)(puVar4 + 1) = 0;
  *puVar4 = 0x7961647372756854;
  if ((DAT_007b0cd8 & 1) == 0) {
    DAT_007b0cd8 = 0xc;
    puVar5 = &DAT_007b0cd9;
  }
  else {
    DAT_007b0ce0 = 6;
    puVar5 = DAT_007b0ce8;
  }
  *(undefined1 *)((long)puVar5 + 6) = 0;
  *(undefined2 *)(puVar5 + 1) = 0x7961;
  *puVar5 = 0x64697246;
  if ((DAT_007b0cf0 & 1) == 0) {
    DAT_007b0cf0 = 0x10;
    puVar4 = &DAT_007b0cf1;
  }
  else {
    ram0x007b0cf8 = 8;
    puVar4 = DAT_007b0d00;
  }
  *(undefined1 *)(puVar4 + 1) = 0;
  *puVar4 = 0x7961647275746153;
  if ((DAT_007b0d08 & 1) == 0) {
    DAT_007b0d08 = 6;
    puVar5 = &DAT_007b0d09;
  }
  else {
    DAT_007b0d10 = 3;
    puVar5 = DAT_007b0d18;
  }
  *puVar5 = 0x6e7553;
  if ((DAT_007b0d20 & 1) == 0) {
    DAT_007b0d20 = 6;
    puVar5 = &DAT_007b0d21;
  }
  else {
    DAT_007b0d28 = 3;
    puVar5 = DAT_007b0d30;
  }
  *puVar5 = 0x6e6f4d;
  if ((DAT_007b0d38 & 1) == 0) {
    DAT_007b0d38 = 6;
    puVar5 = &DAT_007b0d39;
  }
  else {
    DAT_007b0d40 = 3;
    puVar5 = DAT_007b0d48;
  }
  *puVar5 = 0x657554;
  if ((DAT_007b0d50 & 1) == 0) {
    DAT_007b0d50 = 6;
    puVar5 = &DAT_007b0d51;
  }
  else {
    DAT_007b0d58 = 3;
    puVar5 = DAT_007b0d60;
  }
  *puVar5 = 0x646557;
  if ((DAT_007b0d68 & 1) == 0) {
    DAT_007b0d68 = 6;
    puVar5 = &DAT_007b0d69;
  }
  else {
    DAT_007b0d70 = 3;
    puVar5 = DAT_007b0d78;
  }
  *puVar5 = 0x756854;
  if ((DAT_007b0d80 & 1) == 0) {
    DAT_007b0d80 = 6;
    puVar5 = &DAT_007b0d81;
  }
  else {
    DAT_007b0d88 = 3;
    puVar5 = DAT_007b0d90;
  }
  *puVar5 = 0x697246;
  if ((DAT_007b0d98 & 1) == 0) {
    DAT_007b0d98 = 6;
    puVar5 = &DAT_007b0d99;
  }
  else {
    DAT_007b0da0 = 3;
    puVar5 = DAT_007b0da8;
  }
  *puVar5 = 0x746153;
  return;
}


// ===== 007352d0  FUN_007352d0 =====

undefined1 * FUN_007352d0(void)

{
  int iVar1;
  
  if (((DAT_007b0b78 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007b0b78), iVar1 != 0)) {
                    /* try { // try from 00735318 to 0073531b has its CatchHandler @ 00735338 */
    FUN_00735350();
    DAT_007b0b70 = &DAT_007b0db8;
    FUN_00739d60(&DAT_007b0b78);
  }
  return DAT_007b0b70;
}


// ===== 00735350  FUN_00735350 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00735350(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (((DAT_007b0f08 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007b0f08), iVar1 != 0)) {
    __cxa_atexit(FUN_007371f8,0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007b0f08);
  }
  FUN_00713ea4(&DAT_007b0db8,L"Sunday",6);
  FUN_00713ea4(&DAT_007b0dd0,L"Monday",6);
  FUN_00713ea4(&DAT_007b0de8,L"Tuesday",7);
  FUN_00713ea4(&DAT_007b0e00,L"Wednesday",9);
  FUN_00713ea4(&DAT_007b0e18,L"Thursday",8);
  FUN_00713ea4(&DAT_007b0e30,L"Friday",6);
  FUN_00713ea4(&DAT_007b0e48,L"Saturday",8);
  if ((DAT_007b0e60 & 1) == 0) {
    DAT_007b0e60 = 6;
    puVar2 = &DAT_007b0e64;
  }
  else {
    ram0x007b0e68 = 3;
    puVar2 = ram0x007b0e70;
  }
  *puVar2 = 0x7500000053;
  puVar2[1] = 0x6e;
  if ((DAT_007b0e78 & 1) == 0) {
    DAT_007b0e78 = 6;
    puVar2 = &DAT_007b0e7c;
  }
  else {
    ram0x007b0e80 = 3;
    puVar2 = ram0x007b0e88;
  }
  *puVar2 = 0x6f0000004d;
  puVar2[1] = 0x6e;
  if ((DAT_007b0e90 & 1) == 0) {
    DAT_007b0e90 = 6;
    puVar2 = &DAT_007b0e94;
  }
  else {
    ram0x007b0e98 = 3;
    puVar2 = ram0x007b0ea0;
  }
  *puVar2 = 0x7500000054;
  puVar2[1] = 0x65;
  if ((DAT_007b0ea8 & 1) == 0) {
    DAT_007b0ea8 = 6;
    puVar2 = &DAT_007b0eac;
  }
  else {
    ram0x007b0eb0 = 3;
    puVar2 = ram0x007b0eb8;
  }
  *puVar2 = 0x6500000057;
  puVar2[1] = 100;
  if ((DAT_007b0ec0 & 1) == 0) {
    DAT_007b0ec0 = 6;
    puVar2 = &DAT_007b0ec4;
  }
  else {
    ram0x007b0ec8 = 3;
    puVar2 = ram0x007b0ed0;
  }
  *puVar2 = 0x6800000054;
  puVar2[1] = 0x75;
  if ((DAT_007b0ed8 & 1) == 0) {
    DAT_007b0ed8 = 6;
    puVar2 = &DAT_007b0edc;
  }
  else {
    ram0x007b0ee0 = 3;
    puVar2 = ram0x007b0ee8;
  }
  *puVar2 = 0x7200000046;
  puVar2[1] = 0x69;
  if ((DAT_007b0ef0 & 1) == 0) {
    DAT_007b0ef0 = 6;
    puVar2 = &DAT_007b0ef4;
  }
  else {
    ram0x007b0ef8 = 3;
    puVar2 = ram0x007b0f00;
  }
  *puVar2 = 0x6100000053;
  puVar2[1] = 0x74;
  return;
}


// ===== 00735624  FUN_00735624 =====

undefined1 * FUN_00735624(void)

{
  int iVar1;
  
  if (((DAT_007b0b88 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007b0b88), iVar1 != 0)) {
    FUN_00735690();
    DAT_007b0b80 = &DAT_007b0f10;
    FUN_00739d60(&DAT_007b0b88);
  }
  return DAT_007b0b80;
}


// ===== 00735690  FUN_00735690 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00735690(void)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  
  if (((DAT_007b1150 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007b1150), iVar2 != 0)) {
    __cxa_atexit(FUN_00737368,0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007b1150);
  }
  if ((DAT_007b0f10 & 1) == 0) {
    DAT_007b0f10 = 0xe;
    puVar5 = &DAT_007b0f11;
  }
  else {
    DAT_007b0f18 = 7;
    puVar5 = DAT_007b0f20;
  }
  *(undefined1 *)((long)puVar5 + 7) = 0;
  *(undefined4 *)((long)puVar5 + 3) = 0x79726175;
  *puVar5 = 0x756e614a;
  if ((DAT_007b0f28 & 1) == 0) {
    DAT_007b0f28 = 0x10;
    puVar4 = &DAT_007b0f29;
  }
  else {
    ram0x007b0f30 = 8;
    puVar4 = DAT_007b0f38;
  }
  *(undefined1 *)(puVar4 + 1) = 0;
  *puVar4 = 0x7972617572626546;
  if ((DAT_007b0f40 & 1) == 0) {
    DAT_007b0f40 = 10;
    puVar5 = &DAT_007b0f41;
  }
  else {
    DAT_007b0f48 = 5;
    puVar5 = DAT_007b0f50;
  }
  *(undefined2 *)(puVar5 + 1) = 0x68;
  *puVar5 = 0x6372614d;
  if ((DAT_007b0f58 & 1) == 0) {
    DAT_007b0f58 = 10;
    puVar5 = &DAT_007b0f59;
  }
  else {
    DAT_007b0f60 = 5;
    puVar5 = DAT_007b0f68;
  }
  *(undefined2 *)(puVar5 + 1) = 0x6c;
  *puVar5 = 0x69727041;
  if ((DAT_007b0f70 & 1) == 0) {
    DAT_007b0f70 = 6;
    puVar5 = &DAT_007b0f71;
  }
  else {
    DAT_007b0f78 = 3;
    puVar5 = DAT_007b0f80;
  }
  *puVar5 = 0x79614d;
  if ((DAT_007b0f88 & 1) == 0) {
    DAT_007b0f88 = 8;
    puVar5 = &DAT_007b0f89;
  }
  else {
    DAT_007b0f90 = 4;
    puVar5 = DAT_007b0f98;
  }
  *(undefined1 *)(puVar5 + 1) = 0;
  *puVar5 = 0x656e754a;
  if ((DAT_007b0fa0 & 1) == 0) {
    DAT_007b0fa0 = 8;
    puVar5 = &DAT_007b0fa1;
  }
  else {
    DAT_007b0fa8 = 4;
    puVar5 = DAT_007b0fb0;
  }
  *(undefined1 *)(puVar5 + 1) = 0;
  *puVar5 = 0x796c754a;
  if ((DAT_007b0fb8 & 1) == 0) {
    DAT_007b0fb8 = 0xc;
    puVar5 = &DAT_007b0fb9;
  }
  else {
    DAT_007b0fc0 = 6;
    puVar5 = DAT_007b0fc8;
  }
  *(undefined1 *)((long)puVar5 + 6) = 0;
  *(undefined2 *)(puVar5 + 1) = 0x7473;
  *puVar5 = 0x75677541;
  uVar1 = s_September_001bbae3._0_8_;
  if ((DAT_007b0fd0 & 1) == 0) {
    DAT_007b0fd0 = 0x12;
    pcVar3 = (char *)&DAT_007b0fd1;
  }
  else {
    ram0x007b0fd8 = 9;
    pcVar3 = DAT_007b0fe0;
  }
  pcVar3[8] = 'r';
  pcVar3[9] = '\0';
  *(undefined8 *)pcVar3 = uVar1;
  if ((DAT_007b0fe8 & 1) == 0) {
    DAT_007b0fe8 = 0xe;
    puVar5 = &DAT_007b0fe9;
  }
  else {
    DAT_007b0ff0 = 7;
    puVar5 = DAT_007b0ff8;
  }
  *(undefined1 *)((long)puVar5 + 7) = 0;
  *(undefined4 *)((long)puVar5 + 3) = 0x7265626f;
  *puVar5 = 0x6f74634f;
  if ((DAT_007b1000 & 1) == 0) {
    DAT_007b1000 = 0x10;
    puVar4 = &DAT_007b1001;
  }
  else {
    ram0x007b1008 = 8;
    puVar4 = DAT_007b1010;
  }
  *(undefined1 *)(puVar4 + 1) = 0;
  *puVar4 = 0x7265626d65766f4e;
  if ((DAT_007b1018 & 1) == 0) {
    DAT_007b1018 = 0x10;
    puVar4 = &DAT_007b1019;
  }
  else {
    ram0x007b1020 = 8;
    puVar4 = DAT_007b1028;
  }
  *(undefined1 *)(puVar4 + 1) = 0;
  *puVar4 = 0x7265626d65636544;
  if ((DAT_007b1030 & 1) == 0) {
    DAT_007b1030 = 6;
    puVar5 = &DAT_007b1031;
  }
  else {
    DAT_007b1038 = 3;
    puVar5 = DAT_007b1040;
  }
  *puVar5 = 0x6e614a;
  if ((DAT_007b1048 & 1) == 0) {
    DAT_007b1048 = 6;
    puVar5 = &DAT_007b1049;
  }
  else {
    DAT_007b1050 = 3;
    puVar5 = DAT_007b1058;
  }
  *puVar5 = 0x626546;
  if ((DAT_007b1060 & 1) == 0) {
    DAT_007b1060 = 6;
    puVar5 = &DAT_007b1061;
  }
  else {
    DAT_007b1068 = 3;
    puVar5 = DAT_007b1070;
  }
  *puVar5 = 0x72614d;
  if ((DAT_007b1078 & 1) == 0) {
    DAT_007b1078 = 6;
    puVar5 = &DAT_007b1079;
  }
  else {
    DAT_007b1080 = 3;
    puVar5 = DAT_007b1088;
  }
  *puVar5 = 0x727041;
  if ((DAT_007b1090 & 1) == 0) {
    DAT_007b1090 = 6;
    puVar5 = &DAT_007b1091;
  }
  else {
    DAT_007b1098 = 3;
    puVar5 = DAT_007b10a0;
  }
  *puVar5 = 0x79614d;
  if ((DAT_007b10a8 & 1) == 0) {
    DAT_007b10a8 = 6;
    puVar5 = &DAT_007b10a9;
  }
  else {
    DAT_007b10b0 = 3;
    puVar5 = DAT_007b10b8;
  }
  *puVar5 = 0x6e754a;
  if ((DAT_007b10c0 & 1) == 0) {
    DAT_007b10c0 = 6;
    puVar5 = &DAT_007b10c1;
  }
  else {
    DAT_007b10c8 = 3;
    puVar5 = DAT_007b10d0;
  }
  *puVar5 = 0x6c754a;
  if ((DAT_007b10d8 & 1) == 0) {
    DAT_007b10d8 = 6;
    puVar5 = &DAT_007b10d9;
  }
  else {
    DAT_007b10e0 = 3;
    puVar5 = DAT_007b10e8;
  }
  *puVar5 = 0x677541;
  if ((DAT_007b10f0 & 1) == 0) {
    DAT_007b10f0 = 6;
    puVar5 = &DAT_007b10f1;
  }
  else {
    DAT_007b10f8 = 3;
    puVar5 = DAT_007b1100;
  }
  *puVar5 = 0x706553;
  if ((DAT_007b1108 & 1) == 0) {
    DAT_007b1108 = 6;
    puVar5 = &DAT_007b1109;
  }
  else {
    DAT_007b1110 = 3;
    puVar5 = DAT_007b1118;
  }
  *puVar5 = 0x74634f;
  if ((DAT_007b1120 & 1) == 0) {
    DAT_007b1120 = 6;
    puVar5 = &DAT_007b1121;
  }
  else {
    DAT_007b1128 = 3;
    puVar5 = DAT_007b1130;
  }
  *puVar5 = 0x766f4e;
  if ((DAT_007b1138 & 1) == 0) {
    DAT_007b1138 = 6;
    puVar5 = &DAT_007b1139;
  }
  else {
    DAT_007b1140 = 3;
    puVar5 = DAT_007b1148;
  }
  *puVar5 = 0x636544;
  return;
}


// ===== 00735d64  FUN_00735d64 =====

undefined * FUN_00735d64(void)

{
  int iVar1;
  
  if (((DAT_007b0b98 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007b0b98), iVar1 != 0)) {
                    /* try { // try from 00735dac to 00735daf has its CatchHandler @ 00735dcc */
    FUN_00735de4();
    DAT_007b0b90 = &DAT_007b1158;
    FUN_00739d60(&DAT_007b0b98);
  }
  return DAT_007b0b90;
}


// ===== 00735de4  FUN_00735de4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00735de4(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (((DAT_007b1398 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007b1398), iVar2 != 0)) {
    __cxa_atexit(FUN_007373b8,0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007b1398);
  }
  FUN_00713ea4(&DAT_007b1158,L"January",7);
  FUN_00713ea4(&DAT_007b1170,L"February",8);
  FUN_00713ea4(&DAT_007b1188,L"March",5);
  FUN_00713ea4(&DAT_007b11a0,L"April",5);
  if ((DAT_007b11b8 & 1) == 0) {
    DAT_007b11b8 = 6;
    puVar3 = &DAT_007b11bc;
  }
  else {
    ram0x007b11c0 = 3;
    puVar3 = ram0x007b11c8;
  }
  *puVar3 = 0x610000004d;
  puVar3[1] = 0x79;
  if ((DAT_007b11d0 & 1) == 0) {
    DAT_007b11d0 = 8;
    puVar3 = (undefined8 *)&DAT_007b11d4;
  }
  else {
    DAT_007b11d8 = 4;
    puVar3 = DAT_007b11e0;
  }
  *(undefined4 *)(puVar3 + 2) = 0;
  uVar1 = _DAT_001b7580;
  puVar3[1] = _UNK_001b7588;
  *puVar3 = uVar1;
  uVar1 = _DAT_001b7264;
  if ((DAT_007b11e8 & 1) == 0) {
    DAT_007b11e8 = 8;
    puVar3 = (undefined8 *)&DAT_007b11ec;
  }
  else {
    DAT_007b11f0 = 4;
    puVar3 = DAT_007b11f8;
  }
  puVar3[1] = _UNK_001b726c;
  *puVar3 = uVar1;
  *(undefined4 *)(puVar3 + 2) = 0;
  FUN_00713ea4(&DAT_007b1200,L"August",6);
  FUN_00713ea4(&DAT_007b1218,L"September",9);
  FUN_00713ea4(&DAT_007b1230,L"October",7);
  FUN_00713ea4(&DAT_007b1248,L"November",8);
  FUN_00713ea4(&DAT_007b1260,L"December",8);
  if ((DAT_007b1278 & 1) == 0) {
    DAT_007b1278 = 6;
    puVar3 = &DAT_007b127c;
  }
  else {
    ram0x007b1280 = 3;
    puVar3 = ram0x007b1288;
  }
  *puVar3 = 0x610000004a;
  puVar3[1] = 0x6e;
  if ((DAT_007b1290 & 1) == 0) {
    DAT_007b1290 = 6;
    puVar3 = &DAT_007b1294;
  }
  else {
    ram0x007b1298 = 3;
    puVar3 = ram0x007b12a0;
  }
  *puVar3 = 0x6500000046;
  puVar3[1] = 0x62;
  if ((DAT_007b12a8 & 1) == 0) {
    DAT_007b12a8 = 6;
    puVar3 = &DAT_007b12ac;
  }
  else {
    ram0x007b12b0 = 3;
    puVar3 = ram0x007b12b8;
  }
  *puVar3 = 0x610000004d;
  puVar3[1] = 0x72;
  if ((DAT_007b12c0 & 1) == 0) {
    DAT_007b12c0 = 6;
    puVar3 = &DAT_007b12c4;
  }
  else {
    ram0x007b12c8 = 3;
    puVar3 = ram0x007b12d0;
  }
  *puVar3 = 0x7000000041;
  puVar3[1] = 0x72;
  if ((DAT_007b12d8 & 1) == 0) {
    DAT_007b12d8 = 6;
    puVar3 = &DAT_007b12dc;
  }
  else {
    ram0x007b12e0 = 3;
    puVar3 = ram0x007b12e8;
  }
  *puVar3 = 0x610000004d;
  puVar3[1] = 0x79;
  if ((DAT_007b12f0 & 1) == 0) {
    DAT_007b12f0 = 6;
    puVar3 = &DAT_007b12f4;
  }
  else {
    ram0x007b12f8 = 3;
    puVar3 = ram0x007b1300;
  }
  *puVar3 = 0x750000004a;
  puVar3[1] = 0x6e;
  if ((DAT_007b1308 & 1) == 0) {
    DAT_007b1308 = 6;
    puVar3 = &DAT_007b130c;
  }
  else {
    ram0x007b1310 = 3;
    puVar3 = ram0x007b1318;
  }
  *puVar3 = 0x750000004a;
  puVar3[1] = 0x6c;
  if ((DAT_007b1320 & 1) == 0) {
    DAT_007b1320 = 6;
    puVar3 = &DAT_007b1324;
  }
  else {
    ram0x007b1328 = 3;
    puVar3 = ram0x007b1330;
  }
  *puVar3 = 0x7500000041;
  puVar3[1] = 0x67;
  if ((DAT_007b1338 & 1) == 0) {
    DAT_007b1338 = 6;
    puVar3 = &DAT_007b133c;
  }
  else {
    ram0x007b1340 = 3;
    puVar3 = ram0x007b1348;
  }
  *puVar3 = 0x6500000053;
  puVar3[1] = 0x70;
  if ((DAT_007b1350 & 1) == 0) {
    DAT_007b1350 = 6;
    puVar3 = &DAT_007b1354;
  }
  else {
    ram0x007b1358 = 3;
    puVar3 = ram0x007b1360;
  }
  *puVar3 = 0x630000004f;
  puVar3[1] = 0x74;
  if ((DAT_007b1368 & 1) == 0) {
    DAT_007b1368 = 6;
    puVar3 = &DAT_007b136c;
  }
  else {
    ram0x007b1370 = 3;
    puVar3 = ram0x007b1378;
  }
  *puVar3 = 0x6f0000004e;
  puVar3[1] = 0x76;
  if ((DAT_007b1380 & 1) == 0) {
    DAT_007b1380 = 6;
    puVar3 = &DAT_007b1384;
  }
  else {
    ram0x007b1388 = 3;
    puVar3 = ram0x007b1390;
  }
  *puVar3 = 0x6500000044;
  puVar3[1] = 99;
  return;
}


// ===== 0073630c  FUN_0073630c =====

undefined1 * FUN_0073630c(void)

{
  int iVar1;
  
  if (((DAT_007b0ba8 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007b0ba8), iVar1 != 0)) {
    FUN_00736378();
    DAT_007b0ba0 = &DAT_007b13a0;
    FUN_00739d60(&DAT_007b0ba8);
  }
  return DAT_007b0ba0;
}


// ===== 00736378  FUN_00736378 =====

void FUN_00736378(void)

{
  int iVar1;
  undefined2 *puVar2;
  
  if (((DAT_007b13d0 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007b13d0), iVar1 != 0)) {
    __cxa_atexit(FUN_00737408,0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007b13d0);
  }
  if ((DAT_007b13a0 & 1) == 0) {
    DAT_007b13a0 = 4;
    puVar2 = &DAT_007b13a1;
  }
  else {
    DAT_007b13a8 = 2;
    puVar2 = DAT_007b13b0;
  }
  *(undefined1 *)(puVar2 + 1) = 0;
  *puVar2 = 0x4d41;
  if ((DAT_007b13b8 & 1) == 0) {
    DAT_007b13b8 = 4;
    puVar2 = &DAT_007b13b9;
  }
  else {
    DAT_007b13c0 = 2;
    puVar2 = DAT_007b13c8;
  }
  *puVar2 = 0x4d50;
  *(undefined1 *)(puVar2 + 1) = 0;
  return;
}


// ===== 00736458  FUN_00736458 =====

undefined1 * FUN_00736458(void)

{
  int iVar1;
  
  if (((DAT_007b0bb8 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007b0bb8), iVar1 != 0)) {
    FUN_007364c4();
    DAT_007b0bb0 = &DAT_007b13d8;
    FUN_00739d60(&DAT_007b0bb8);
  }
  return DAT_007b0bb0;
}


// ===== 007364c4  FUN_007364c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007364c4(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (((DAT_007b1408 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007b1408), iVar1 != 0)) {
    __cxa_atexit(FUN_00737454,0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007b1408);
  }
  if ((DAT_007b13d8 & 1) == 0) {
    DAT_007b13d8 = 4;
    puVar2 = &DAT_007b13dc;
  }
  else {
    ram0x007b13e0 = 2;
    puVar2 = DAT_007b13e8;
  }
  *(undefined4 *)(puVar2 + 1) = 0;
  *puVar2 = 0x4d00000041;
  if ((DAT_007b13f0 & 1) == 0) {
    DAT_007b13f0 = 4;
    puVar2 = &DAT_007b13f4;
  }
  else {
    ram0x007b13f8 = 2;
    puVar2 = DAT_007b1400;
  }
  *puVar2 = 0x4d00000050;
  *(undefined4 *)(puVar2 + 1) = 0;
  return;
}


// ===== 007365a8  FUN_007365a8 =====

undefined * FUN_007365a8(void)

{
  int iVar1;
  
  if (((DAT_007b0bc0 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007b0bc0), iVar1 != 0)) {
    __cxa_atexit(PTR_FUN_007a13a0,&DAT_007aaab8,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007b0bc0);
  }
  return &DAT_007aaab8;
}


// ===== 00736614  FUN_00736614 =====

undefined * FUN_00736614(void)

{
  int iVar1;
  
  if (((DAT_007b0be0 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007b0be0), iVar1 != 0)) {
    FUN_00373e88(&DAT_007b0bc8,&DAT_001b7504);
    __cxa_atexit(PTR_FUN_007a37d8,&DAT_007b0bc8,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007b0be0);
  }
  return &DAT_007b0bc8;
}


// ===== 007366b4  FUN_007366b4 =====

undefined * FUN_007366b4(void)

{
  int iVar1;
  
  if (((DAT_007b0be8 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007b0be8), iVar1 != 0)) {
    __cxa_atexit(PTR_FUN_007a13a0,&DAT_007aaad0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007b0be8);
  }
  return &DAT_007aaad0;
}


// ===== 00736720  FUN_00736720 =====

undefined * FUN_00736720(void)

{
  int iVar1;
  
  if (((DAT_007b0c08 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007b0c08), iVar1 != 0)) {
    FUN_00373e88(&DAT_007b0bf0,&DAT_001b7374);
    __cxa_atexit(PTR_FUN_007a37d8,&DAT_007b0bf0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007b0c08);
  }
  return &DAT_007b0bf0;
}


// ===== 007367c0  FUN_007367c0 =====

char * FUN_007367c0(void)

{
  int iVar1;
  
  if (((DAT_007b0c10 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007b0c10), iVar1 != 0)) {
    __cxa_atexit(PTR_FUN_007a13a0,s___a__b__d__H__M__S__Y_007aaae8,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007b0c10);
  }
  return s___a__b__d__H__M__S__Y_007aaae8;
}


// ===== 0073682c  FUN_0073682c =====

undefined * FUN_0073682c(void)

{
  int iVar1;
  
  if (((DAT_007b0c30 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007b0c30), iVar1 != 0)) {
    FUN_00373e88(&DAT_007b0c18,L"%a %b %d %H:%M:%S %Y");
    __cxa_atexit(PTR_FUN_007a37d8,&DAT_007b0c18,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007b0c30);
  }
  return &DAT_007b0c18;
}


// ===== 007368cc  FUN_007368cc =====

undefined * FUN_007368cc(void)

{
  int iVar1;
  
  if (((DAT_007b0c38 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007b0c38), iVar1 != 0)) {
    __cxa_atexit(PTR_FUN_007a13a0,&DAT_007aab00,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007b0c38);
  }
  return &DAT_007aab00;
}


// ===== 00736938  FUN_00736938 =====

undefined * FUN_00736938(void)

{
  int iVar1;
  
  if (((DAT_007b0c58 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007b0c58), iVar1 != 0)) {
    FUN_00373e88(&DAT_007b0c40,&DAT_001b7234);
    __cxa_atexit(PTR_FUN_007a37d8,&DAT_007b0c40,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007b0c58);
  }
  return &DAT_007b0c40;
}


// ===== 007369d8  FUN_007369d8 =====

void FUN_007369d8(undefined8 *param_1)

{
  int iVar1;
  __locale_t p_Var2;
  
  p_Var2 = (__locale_t)*param_1;
  if (((DAT_007b0958 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007b0958), iVar1 != 0)) {
                    /* try { // try from 00736a40 to 00736a53 has its CatchHandler @ 00736a68 */
    DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_00739d60(&DAT_007b0958);
  }
  if (p_Var2 != DAT_007b0950) {
                    /* try { // try from 00736a18 to 00736a1b has its CatchHandler @ 00736a80 */
    freelocale((__locale_t)*param_1);
  }
  return;
}


// ===== 00736a84  FUN_00736a84 =====

void FUN_00736a84(long *param_1)

{
  int iVar1;
  __locale_t p_Var2;
  
  p_Var2 = (__locale_t)param_1[2];
  *param_1 = (long)(PTR_DAT_007a3a70 + 0x10);
  if (((DAT_007b0958 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007b0958), iVar1 != 0)) {
                    /* try { // try from 00736b00 to 00736b13 has its CatchHandler @ 00736b28 */
    DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_00739d60(&DAT_007b0958);
  }
  if (p_Var2 != DAT_007b0950) {
                    /* try { // try from 00736ad4 to 00736ad7 has its CatchHandler @ 00736b40 */
    freelocale((__locale_t)param_1[2]);
  }
  FUN_00712454(param_1);
  return;
}


// ===== 00736b44  FUN_00736b44 =====

void FUN_00736b44(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00736b70  FUN_00736b70 =====

void FUN_00736b70(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00736b9c  FUN_00736b9c =====

void FUN_00736b9c(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00736bc8  FUN_00736bc8 =====

void FUN_00736bc8(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00736bf4  thunk_FUN_00712454 =====

void thunk_FUN_00712454(void)

{
  FUN_00712454();
  return;
}


// ===== 00736bfc  FUN_00736bfc =====

void FUN_00736bfc(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00736c28  thunk_FUN_00712454 =====

void thunk_FUN_00712454(void)

{
  FUN_00712454();
  return;
}


// ===== 00736c30  FUN_00736c30 =====

void FUN_00736c30(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00736c5c  FUN_00736c5c =====

void FUN_00736c5c(void *param_1)

{
  FUN_007369d8((long)param_1 + 0x10);
  FUN_00712454(param_1);
  free(param_1);
  return;
}


// ===== 00736c94  FUN_00736c94 =====

void FUN_00736c94(void *param_1)

{
  FUN_007369d8((long)param_1 + 0x10);
  FUN_00712454(param_1);
  free(param_1);
  return;
}


// ===== 00736ccc  FUN_00736ccc =====

void FUN_00736ccc(long param_1)

{
  FUN_007369d8(param_1 + 0x10);
  FUN_00712454(param_1);
  return;
}


// ===== 00736cfc  FUN_00736cfc =====

void FUN_00736cfc(long param_1)

{
  FUN_007369d8(param_1 + 0x10);
  FUN_00712454(param_1);
  return;
}


// ===== 00736d2c  FUN_00736d2c =====

void FUN_00736d2c(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00736d58  FUN_00736d58 =====

void FUN_00736d58(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00736d84  FUN_00736d84 =====

void FUN_00736d84(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00736db0  FUN_00736db0 =====

void FUN_00736db0(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00736ddc  FUN_00736ddc =====

void FUN_00736ddc(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00736e08  FUN_00736e08 =====

void FUN_00736e08(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00736e34  FUN_00736e34 =====

void FUN_00736e34(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00736e60  FUN_00736e60 =====

void FUN_00736e60(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00736e8c  FUN_00736e8c =====

void FUN_00736e8c(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00736eb8  FUN_00736eb8 =====

void FUN_00736eb8(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00736ee4  thunk_FUN_00712454 =====

void thunk_FUN_00712454(void)

{
  FUN_00712454();
  return;
}


// ===== 00736eec  FUN_00736eec =====

void FUN_00736eec(undefined8 *param_1)

{
  if ((__locale_t)*param_1 != (__locale_t)0x0) {
                    /* try { // try from 00736f00 to 00736f03 has its CatchHandler @ 00736f10 */
    uselocale((__locale_t)*param_1);
  }
  return;
}


// ===== 00736f14  FUN_00736f14 =====

void FUN_00736f14(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 00736f2c  FUN_00736f2c =====

void FUN_00736f2c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *__s;
  long *plVar2;
  long *__ptr;
  size_t __n;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  
  pvVar6 = (void *)param_1[1];
  if ((ulong)(param_1[2] - (long)pvVar6 >> 3) < param_2) {
    lVar5 = (long)pvVar6 - *param_1 >> 3;
    uVar1 = lVar5 + param_2;
    if (uVar1 >> 0x3d != 0) {
      FUN_00736f14(param_1);
LAB_00737084:
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    uVar3 = param_1[2] - *param_1;
    uVar4 = (long)uVar3 >> 2;
    if (uVar4 <= uVar1) {
      uVar4 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar4 = 0x1fffffffffffffff;
    }
    if (uVar4 == 0) {
      plVar2 = (long *)0x0;
    }
    else if ((uVar4 < 0x1f) && ((*(byte *)(param_1 + 0x21) & 1) == 0)) {
      *(undefined1 *)(param_1 + 0x21) = 1;
      plVar2 = param_1 + 3;
    }
    else {
      if (uVar4 >> 0x3d != 0) goto LAB_00737084;
      plVar2 = (long *)FUN_00759c3c(uVar4 << 3);
    }
    __s = plVar2 + lVar5;
    memset(__s,0,param_2 * 8);
    __n = param_1[1] - *param_1;
    pvVar6 = (void *)((long)__s - __n);
    memcpy(pvVar6,(void *)*param_1,__n);
    __ptr = (long *)*param_1;
    *param_1 = (long)pvVar6;
    param_1[1] = (long)(__s + param_2);
    param_1[2] = (long)(plVar2 + uVar4);
    if (__ptr != (long *)0x0) {
      if (__ptr != param_1 + 3) {
        free(__ptr);
        return;
      }
      *(undefined1 *)(param_1 + 0x21) = 0;
    }
  }
  else {
    if (param_2 != 0) {
      memset(pvVar6,0,param_2 * 8);
      pvVar6 = (void *)((long)pvVar6 + param_2 * 8);
    }
    param_1[1] = (long)pvVar6;
  }
  return;
}


// ===== 00737088  FUN_00737088 =====

void FUN_00737088(void)

{
  if ((DAT_007b0d98 & 1) != 0) {
    free(DAT_007b0da8);
  }
  if ((DAT_007b0d80 & 1) != 0) {
    free(DAT_007b0d90);
  }
  if ((DAT_007b0d68 & 1) != 0) {
    free(DAT_007b0d78);
  }
  if ((DAT_007b0d50 & 1) != 0) {
    free(DAT_007b0d60);
  }
  if ((DAT_007b0d38 & 1) != 0) {
    free(DAT_007b0d48);
  }
  if ((DAT_007b0d20 & 1) != 0) {
    free(DAT_007b0d30);
  }
  if ((DAT_007b0d08 & 1) != 0) {
    free(DAT_007b0d18);
  }
  if ((DAT_007b0cf0 & 1) != 0) {
    free(DAT_007b0d00);
  }
  if ((DAT_007b0cd8 & 1) != 0) {
    free(DAT_007b0ce8);
  }
  if ((DAT_007b0cc0 & 1) != 0) {
    free(DAT_007b0cd0);
  }
  if ((DAT_007b0ca8 & 1) != 0) {
    free(DAT_007b0cb8);
  }
  if ((DAT_007b0c90 & 1) != 0) {
    free(DAT_007b0ca0);
  }
  if ((DAT_007b0c78 & 1) != 0) {
    free(DAT_007b0c88);
  }
  if ((DAT_007b0c60 & 1) == 0) {
    return;
  }
  free(DAT_007b0c70);
  return;
}


// ===== 007371f8  FUN_007371f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007371f8(void)

{
  if ((DAT_007b0ef0 & 1) != 0) {
    free(ram0x007b0f00);
  }
  if ((DAT_007b0ed8 & 1) != 0) {
    free(ram0x007b0ee8);
  }
  if ((DAT_007b0ec0 & 1) != 0) {
    free(ram0x007b0ed0);
  }
  if ((DAT_007b0ea8 & 1) != 0) {
    free(ram0x007b0eb8);
  }
  if ((DAT_007b0e90 & 1) != 0) {
    free(ram0x007b0ea0);
  }
  if ((DAT_007b0e78 & 1) != 0) {
    free(ram0x007b0e88);
  }
  if ((DAT_007b0e60 & 1) != 0) {
    free(ram0x007b0e70);
  }
  if ((DAT_007b0e48 & 1) != 0) {
    free(DAT_007b0e58);
  }
  if ((DAT_007b0e30 & 1) != 0) {
    free(DAT_007b0e40);
  }
  if ((DAT_007b0e18 & 1) != 0) {
    free(DAT_007b0e28);
  }
  if ((DAT_007b0e00 & 1) != 0) {
    free(DAT_007b0e10);
  }
  if ((DAT_007b0de8 & 1) != 0) {
    free(DAT_007b0df8);
  }
  if ((DAT_007b0dd0 & 1) != 0) {
    free(DAT_007b0de0);
  }
  if ((DAT_007b0db8 & 1) == 0) {
    return;
  }
  free(DAT_007b0dc8);
  return;
}


// ===== 00737368  FUN_00737368 =====

void FUN_00737368(void)

{
  long lVar1;
  
  lVar1 = 0x240;
  do {
    if ((*(byte *)((long)&DAT_007b0ef4 + lVar1 + 4) & 1) != 0) {
      free(*(void **)(&DAT_007b0f08 + lVar1));
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0);
  return;
}


// ===== 007373b8  FUN_007373b8 =====

void FUN_007373b8(void)

{
  long lVar1;
  
  lVar1 = 0x240;
  do {
    if ((*(byte *)((long)&DAT_007b1140 + lVar1) & 1) != 0) {
      free(*(void **)(&DAT_007b1150 + lVar1));
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0);
  return;
}


// ===== 00737408  FUN_00737408 =====

void FUN_00737408(void)

{
  if ((DAT_007b13b8 & 1) != 0) {
    free(DAT_007b13c8);
  }
  if ((DAT_007b13a0 & 1) == 0) {
    return;
  }
  free(DAT_007b13b0);
  return;
}


// ===== 00737454  FUN_00737454 =====

void FUN_00737454(void)

{
  if ((DAT_007b13f0 & 1) != 0) {
    free(DAT_007b1400);
  }
  if ((DAT_007b13d8 & 1) == 0) {
    return;
  }
  free(DAT_007b13e8);
  return;
}


// ===== 007374a0  FUN_007374a0 =====

void FUN_007374a0(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = **(long **)*param_1;
  iVar1 = FUN_00755bf0(1,PTR_DAT_007a3a88);
  *(int *)(lVar2 + 8) = iVar1 + 1;
  return;
}


// ===== 007374e4  FUN_007374e4 =====

longlong FUN_007374e4(char *param_1,char *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  char *local_38;
  
  if (param_1 != param_2) {
    piVar3 = (int *)__errno();
    iVar1 = *piVar3;
    *piVar3 = 0;
    if (((DAT_007b0958 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007b0958), iVar2 != 0)) {
                    /* try { // try from 007375cc to 007375df has its CatchHandler @ 007375f4 */
      DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_00739d60(&DAT_007b0958);
    }
    lVar4 = strtoll_l(param_1,&local_38,param_4,DAT_007b0950);
    if (*piVar3 == 0) {
      *piVar3 = iVar1;
      if (local_38 == param_2) {
        return lVar4;
      }
    }
    else if (local_38 == param_2) {
      if (*piVar3 != 0x22) {
        return lVar4;
      }
      *param_3 = 4;
      if (0 < lVar4) {
        return 0x7fffffffffffffff;
      }
      return -0x8000000000000000;
    }
  }
  *param_3 = 4;
  return 0;
}


// ===== 0073760c  FUN_0073760c =====

longlong FUN_0073760c(char *param_1,char *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  char *local_38;
  
  if (param_1 != param_2) {
    piVar3 = (int *)__errno();
    iVar1 = *piVar3;
    *piVar3 = 0;
    if (((DAT_007b0958 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007b0958), iVar2 != 0)) {
                    /* try { // try from 007376f4 to 00737707 has its CatchHandler @ 0073771c */
      DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_00739d60(&DAT_007b0958);
    }
    lVar4 = strtoll_l(param_1,&local_38,param_4,DAT_007b0950);
    if (*piVar3 == 0) {
      *piVar3 = iVar1;
      if (local_38 == param_2) {
        return lVar4;
      }
    }
    else if (local_38 == param_2) {
      if (*piVar3 != 0x22) {
        return lVar4;
      }
      *param_3 = 4;
      if (0 < lVar4) {
        return 0x7fffffffffffffff;
      }
      return -0x8000000000000000;
    }
  }
  *param_3 = 4;
  return 0;
}


// ===== 00737734  FUN_00737734 =====

int FUN_00737734(char *param_1,char *param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ulonglong uVar5;
  char *local_58;
  
  if ((param_1 == param_2) ||
     ((cVar1 = *param_1, cVar1 == '-' && (param_1 = param_1 + 1, param_1 == param_2)))) {
LAB_007377fc:
    iVar2 = 0;
  }
  else {
    piVar4 = (int *)__errno();
    iVar2 = *piVar4;
    *piVar4 = 0;
    if (((DAT_007b0958 & 1) == 0) && (iVar3 = FUN_00739c1c(&DAT_007b0958), iVar3 != 0)) {
                    /* try { // try from 0073784c to 0073785f has its CatchHandler @ 00737874 */
      DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_00739d60(&DAT_007b0958);
    }
    uVar5 = strtoull_l(param_1,&local_58,param_4,DAT_007b0950);
    if (*piVar4 == 0) {
      *piVar4 = iVar2;
      if (local_58 != param_2) goto LAB_007377fc;
      if (uVar5 < 0x10000) goto LAB_007377e0;
    }
    else {
      if (local_58 != param_2) goto LAB_007377fc;
      if ((*piVar4 != 0x22) && (uVar5 >> 0x10 == 0)) {
LAB_007377e0:
        if (cVar1 == '-') {
          return -(int)uVar5;
        }
        return (int)uVar5;
      }
    }
    iVar2 = 0xffff;
  }
  *param_3 = 4;
  return iVar2;
}


// ===== 0073788c  FUN_0073788c =====

int FUN_0073788c(char *param_1,char *param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ulonglong uVar5;
  char *local_58;
  
  if ((param_1 == param_2) ||
     ((cVar1 = *param_1, cVar1 == '-' && (param_1 = param_1 + 1, param_1 == param_2)))) {
LAB_00737944:
    iVar2 = 0;
  }
  else {
    piVar4 = (int *)__errno();
    iVar2 = *piVar4;
    *piVar4 = 0;
    if (((DAT_007b0958 & 1) == 0) && (iVar3 = FUN_00739c1c(&DAT_007b0958), iVar3 != 0)) {
                    /* try { // try from 007379a0 to 007379b3 has its CatchHandler @ 007379c8 */
      DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_00739d60(&DAT_007b0958);
    }
    uVar5 = strtoull_l(param_1,&local_58,param_4,DAT_007b0950);
    if (*piVar4 == 0) {
      *piVar4 = iVar2;
      if (local_58 != param_2) goto LAB_00737944;
LAB_00737970:
      if (uVar5 >> 0x20 == 0) {
        if (cVar1 == '-') {
          return -(int)uVar5;
        }
        return (int)uVar5;
      }
    }
    else {
      if (local_58 != param_2) goto LAB_00737944;
      if (*piVar4 != 0x22) goto LAB_00737970;
    }
    iVar2 = -1;
  }
  *param_3 = 4;
  return iVar2;
}


// ===== 007379e0  FUN_007379e0 =====

ulonglong FUN_007379e0(char *param_1,char *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  ulonglong uVar5;
  char *local_58;
  
  if ((param_1 != param_2) &&
     ((cVar2 = *param_1, cVar2 != '-' || (param_1 = param_1 + 1, param_1 != param_2)))) {
    piVar4 = (int *)__errno();
    iVar1 = *piVar4;
    *piVar4 = 0;
    if (((DAT_007b0958 & 1) == 0) && (iVar3 = FUN_00739c1c(&DAT_007b0958), iVar3 != 0)) {
                    /* try { // try from 00737ae8 to 00737afb has its CatchHandler @ 00737b10 */
      DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_00739d60(&DAT_007b0958);
    }
    uVar5 = strtoull_l(param_1,&local_58,param_4,DAT_007b0950);
    if (*piVar4 == 0) {
      *piVar4 = iVar1;
      if (local_58 == param_2) {
LAB_00737acc:
        if (cVar2 == '-') {
          return -uVar5;
        }
        return uVar5;
      }
    }
    else if (local_58 == param_2) {
      if (*piVar4 != 0x22) goto LAB_00737acc;
      uVar5 = 0xffffffffffffffff;
      goto LAB_00737aa8;
    }
  }
  uVar5 = 0;
LAB_00737aa8:
  *param_3 = 4;
  return uVar5;
}


// ===== 00737b28  FUN_00737b28 =====

ulonglong FUN_00737b28(char *param_1,char *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  ulonglong uVar5;
  char *local_58;
  
  if ((param_1 != param_2) &&
     ((cVar2 = *param_1, cVar2 != '-' || (param_1 = param_1 + 1, param_1 != param_2)))) {
    piVar4 = (int *)__errno();
    iVar1 = *piVar4;
    *piVar4 = 0;
    if (((DAT_007b0958 & 1) == 0) && (iVar3 = FUN_00739c1c(&DAT_007b0958), iVar3 != 0)) {
                    /* try { // try from 00737c30 to 00737c43 has its CatchHandler @ 00737c58 */
      DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_00739d60(&DAT_007b0958);
    }
    uVar5 = strtoull_l(param_1,&local_58,param_4,DAT_007b0950);
    if (*piVar4 == 0) {
      *piVar4 = iVar1;
      if (local_58 == param_2) {
LAB_00737c14:
        if (cVar2 == '-') {
          return -uVar5;
        }
        return uVar5;
      }
    }
    else if (local_58 == param_2) {
      if (*piVar4 != 0x22) goto LAB_00737c14;
      uVar5 = 0xffffffffffffffff;
      goto LAB_00737bf0;
    }
  }
  uVar5 = 0;
LAB_00737bf0:
  *param_3 = 4;
  return uVar5;
}


// ===== 00737c70  FUN_00737c70 =====

float FUN_00737c70(char *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  char *local_28;
  
  if (param_1 == param_2) {
    fVar5 = 0.0;
  }
  else {
    piVar3 = (int *)__errno();
    iVar1 = *piVar3;
    *piVar3 = 0;
    if (((DAT_007b0958 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007b0958), iVar2 != 0)) {
                    /* try { // try from 00737d44 to 00737d57 has its CatchHandler @ 00737d70 */
      DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_00739d60(&DAT_007b0958);
    }
    fVar4 = strtof(param_1,&local_28);
    if (*piVar3 == 0) {
      fVar5 = 0.0;
      *piVar3 = iVar1;
      if (local_28 == param_2) {
        return fVar4;
      }
    }
    else {
      fVar5 = 0.0;
      if ((local_28 == param_2) && (fVar5 = fVar4, *piVar3 != 0x22)) {
        return fVar4;
      }
    }
  }
  *param_3 = 4;
  return fVar5;
}


// ===== 00737d88  FUN_00737d88 =====

double FUN_00737d88(char *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  char *local_28;
  
  if (param_1 == param_2) {
    dVar5 = 0.0;
  }
  else {
    piVar3 = (int *)__errno();
    iVar1 = *piVar3;
    *piVar3 = 0;
    if (((DAT_007b0958 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007b0958), iVar2 != 0)) {
                    /* try { // try from 00737e5c to 00737e6f has its CatchHandler @ 00737e88 */
      DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_00739d60(&DAT_007b0958);
    }
    dVar4 = strtod(param_1,&local_28);
    if (*piVar3 == 0) {
      dVar5 = 0.0;
      *piVar3 = iVar1;
      if (local_28 == param_2) {
        return dVar4;
      }
    }
    else {
      dVar5 = 0.0;
      if ((local_28 == param_2) && (dVar5 = dVar4, *piVar3 != 0x22)) {
        return dVar4;
      }
    }
  }
  *param_3 = 4;
  return dVar5;
}


// ===== 00737ea0  FUN_00737ea0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_00737ea0(char *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  char *local_48;
  
  dVar5 = _DAT_00200950;
  if (param_1 == param_2) {
    *param_3 = 4;
  }
  else {
    piVar3 = (int *)__errno();
    iVar1 = *piVar3;
    *piVar3 = 0;
    if (((DAT_007b0958 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007b0958), iVar2 != 0)) {
                    /* try { // try from 00737f84 to 00737f97 has its CatchHandler @ 00737fac */
      DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_00739d60(&DAT_007b0958);
    }
    dVar4 = strtold_l(param_1,&local_48,DAT_007b0950);
    if (*piVar3 == 0) {
      *piVar3 = iVar1;
      dVar5 = _DAT_00200950;
      if (local_48 == param_2) {
        return dVar4;
      }
    }
    else {
      dVar5 = _DAT_00200950;
      if ((local_48 == param_2) && (dVar5 = dVar4, *piVar3 != 0x22)) {
        return dVar4;
      }
    }
    *param_3 = 4;
  }
  return dVar5;
}


// ===== 00737fc4  FUN_00737fc4 =====

void FUN_00737fc4(undefined8 param_1,undefined8 param_2)

{
  ulong local_38 [2];
  void *local_28;
  
  local_38[0] = 0;
  local_38[1] = 0;
  local_28 = (void *)0x0;
                    /* try { // try from 00737fe4 to 00737feb has its CatchHandler @ 00738020 */
  FUN_0073803c(param_1,local_38,param_2);
  if ((local_38[0] & 1) == 0) {
    return;
  }
  free(local_28);
  return;
}


// ===== 0073803c  FUN_0073803c =====

void FUN_0073803c(undefined8 *param_1,byte *param_2,byte *param_3,int *param_4)

{
  undefined8 uVar1;
  long extraout_x1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
    uVar1 = FUN_00715554();
    *(undefined8 *)(param_4 + 2) = uVar1;
  }
  FUN_007112cc(param_2);
  if (extraout_x1 == 0) {
    FUN_00738798(&local_48,param_4);
    if ((*param_3 & 1) != 0) {
      free(*(void **)(param_3 + 0x10));
    }
    *(undefined8 *)(param_3 + 8) = uStack_40;
    *(undefined8 *)param_3 = local_48;
    *(undefined8 *)(param_3 + 0x10) = local_38;
    if ((param_4 == (int *)0x0) || (*param_4 == 0)) {
      if ((*param_3 & 1) == 0) {
        uVar2 = *(undefined8 *)param_3;
        uVar1 = *(undefined8 *)(param_3 + 0x10);
        param_1[1] = *(undefined8 *)(param_3 + 8);
        *param_1 = uVar2;
        param_1[2] = uVar1;
      }
      else {
        FUN_002fb36c(param_1,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
      }
                    /* try { // try from 00738128 to 00738133 has its CatchHandler @ 0073814c */
      FUN_00739630(param_1,param_2);
    }
    else {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
  }
  else {
    if ((*param_2 & 1) != 0) {
      FUN_002fb36c(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
      return;
    }
    uVar2 = *(undefined8 *)param_2;
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    param_1[1] = *(undefined8 *)(param_2 + 8);
    *param_1 = uVar2;
    param_1[2] = uVar1;
  }
  return;
}


// ===== 00738168  FUN_00738168 =====

void FUN_00738168(undefined1 *param_1,byte *param_2,stat *param_3,ulong *param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint *puVar4;
  undefined1 uVar5;
  byte *__file;
  uint uVar6;
  ulong local_70;
  ulong uStack_68;
  char *local_60;
  ulong *puStack_58;
  byte *local_50;
  undefined8 uStack_48;
  
  local_70 = local_70 & 0xffffffff00000000;
  uVar3 = FUN_00715554();
  __file = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    __file = param_2 + 1;
  }
  uStack_68 = uVar3;
  iVar2 = stat((char *)__file,param_3);
  uVar6 = 0;
  if (iVar2 == -1) {
    puVar4 = (uint *)__errno();
    uVar6 = *puVar4;
    uStack_68 = FUN_0071546c();
    local_70 = (ulong)uVar6;
  }
  if (param_4 != (ulong *)0x0) {
    param_4[1] = uStack_68;
    *param_4 = local_70;
  }
  if (uVar6 == 0) {
    uVar6 = (uint)param_3->st_nlink;
    uVar1 = (uVar6 & 0xf000) - 0x1000;
    if (uVar1 >> 0xe < 3) {
      uVar5 = (&DAT_00213528)[uVar1 >> 0xc];
    }
    else {
      uVar5 = 8;
    }
    uVar6 = uVar6 & 0xfff;
    *param_1 = uVar5;
  }
  else {
    if ((uVar6 == 0x14) || (uVar6 == 2)) {
      *param_1 = 0xff;
      *(undefined4 *)(param_1 + 4) = 0xffff;
      return;
    }
    uStack_48 = 0;
    local_60 = "posix_stat";
    if (param_4 != (ulong *)0x0) {
      *(undefined4 *)param_4 = 0;
      param_4[1] = uVar3;
    }
    puStack_58 = param_4;
    local_50 = param_2;
    FUN_007389b4(&local_60,&local_70,"failed to determine attributes for the specified path");
    *param_1 = 0;
    uVar6 = 0xffff;
  }
  *(uint *)(param_1 + 4) = uVar6;
  return;
}


// ===== 007382a0  FUN_007382a0 =====

undefined8 FUN_007382a0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  byte local_58 [16];
  void *local_48;
  ulong local_40;
  ulong uStack_38;
  void *local_30;
  
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
    uVar3 = *param_2;
    puVar4[1] = param_2[1];
    *puVar4 = uVar3;
    return 0;
  }
  FUN_002fd2b0(local_58,&DAT_001e46e9);
                    /* try { // try from 007382fc to 00738303 has its CatchHandler @ 00738384 */
  puVar2 = (ulong *)FUN_00713bdc(local_58,*param_1);
  local_30 = (void *)puVar2[2];
  uStack_38 = puVar2[1];
  local_40 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  if ((local_58[0] & 1) != 0) {
    free(local_48);
  }
  cVar1 = param_1[2] != 0;
  if (param_1[3] != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if (cVar1 != '\0') {
    if (cVar1 != '\x01') goto LAB_00738364;
                    /* try { // try from 0073834c to 0073836f has its CatchHandler @ 00738370 */
    FUN_00738db8(&local_40,param_1[2],param_2);
  }
  FUN_00738d5c(&local_40,param_2);
LAB_00738364:
  uVar3 = FUN_00738e20(&local_40);
                    /* catch() { ... } // from try @ 0073834c with catch @ 00738370 */
  if ((local_40 & 1) != 0) {
    free(local_30);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00755eac(uVar3);
}


// ===== 007383a0  FUN_007383a0 =====

uint FUN_007383a0(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_2;
  uStack_28 = FUN_0071546c();
  local_30 = (ulong)uVar1;
  uVar1 = FUN_007382a0(param_1,&local_30);
  return uVar1 & 1;
}


// ===== 007383e8  FUN_007383e8 =====

uint FUN_007383e8(undefined8 param_1,int *param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  void *__dest;
  undefined1 auVar5 [16];
  char local_128 [8];
  ulong local_120;
  ulong uStack_118;
  void *local_110;
  ulong local_100;
  undefined8 local_f8;
  char *local_f0;
  int *piStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  char local_38 [8];
  
  uStack_d8 = 0;
  local_f0 = "create_directories";
  piStack_e8 = param_2;
  local_e0 = param_1;
  if (param_2 == (int *)0x0) {
    local_f8 = FUN_00715554();
  }
  else {
    *param_2 = 0;
    local_f8 = FUN_00715554();
    *(undefined8 *)(param_2 + 2) = local_f8;
  }
  local_100._0_4_ = 0;
  FUN_00738168(local_38,param_1,&local_d0,&local_100);
  if (local_38[0] != -1) {
    if (local_38[0] == '\x02') {
      uVar2 = 0;
    }
    else {
      if (local_38[0] == '\0') {
        puVar4 = &local_100;
      }
      else {
        uStack_c8 = FUN_0071546c();
        puVar4 = &local_d0;
        local_d0 = 0x11;
      }
      uVar2 = FUN_007382a0(&local_f0,puVar4);
    }
    goto LAB_007384d0;
  }
  auVar5 = FUN_0071136c(param_1);
  uVar3 = auVar5._8_8_;
  if (0xfffffffffffffff7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(&local_d0);
  }
  if (uVar3 < 0x17) {
    __dest = (void *)((ulong)&local_d0 | 1);
    local_d0 = CONCAT71(local_d0._1_7_,(char)(auVar5._8_4_ << 1));
    if (uVar3 != 0) goto LAB_00738524;
  }
  else {
    uVar1 = (uVar3 & 0xfffffffffffffff8) + 8;
    if ((uVar3 | 7) != 0x17) {
      uVar1 = uVar3 | 7;
    }
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_d0 = uVar1 + 1 | 1;
    uStack_c8 = uVar3;
    local_c0 = __dest;
LAB_00738524:
    memmove(__dest,auVar5._0_8_,uVar3);
  }
  *(undefined1 *)((long)__dest + uVar3) = 0;
  uStack_118 = uStack_c8;
  local_120 = local_d0;
  local_110 = local_c0;
  uVar3 = local_d0 >> 1 & 0x7f;
  if ((local_d0 & 1) != 0) {
    uVar3 = uStack_c8;
  }
  if (uVar3 == 0) {
LAB_007385fc:
                    /* try { // try from 007385fc to 0073861b has its CatchHandler @ 00738654 */
    uVar2 = FUN_007386b0(param_1,&local_100);
    if ((int)local_100 != 0) {
      uVar2 = FUN_007382a0(&local_f0,&local_100);
    }
  }
  else {
                    /* try { // try from 00738560 to 00738573 has its CatchHandler @ 00738650 */
    FUN_00738168(local_128,&local_120,&local_d0,&local_100);
    if (local_128[0] == -1) {
      uVar3 = FUN_00738670(&local_120,param_1);
      if ((uVar3 & 1) == 0) {
                    /* try { // try from 007385dc to 007385e7 has its CatchHandler @ 0073864c */
        FUN_007383e8(&local_120,param_2);
        if ((param_2 == (int *)0x0) || (*param_2 == 0)) goto LAB_007385fc;
        uVar2 = 0;
      }
      else {
        local_d0 = CONCAT44(local_d0._4_4_,0x16);
                    /* try { // try from 007385b4 to 007385bf has its CatchHandler @ 00738644 */
        uVar2 = FUN_007383a0(&local_f0,&local_d0);
      }
    }
    else {
      if (local_128[0] == '\x02') goto LAB_007385fc;
      if (local_128[0] == '\0') {
                    /* try { // try from 0073858c to 00738597 has its CatchHandler @ 0073864c */
        uVar2 = FUN_007382a0(&local_f0,&local_100);
      }
      else {
        local_d0 = CONCAT44(local_d0._4_4_,0x14);
                    /* try { // try from 007385cc to 007385d7 has its CatchHandler @ 00738648 */
        uVar2 = FUN_007383a0(&local_f0,&local_d0);
      }
    }
  }
  if ((local_120 & 1) != 0) {
    free(local_110);
  }
LAB_007384d0:
  return uVar2 & 1;
}


// ===== 00738670  FUN_00738670 =====

bool FUN_00738670(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  int iVar3;
  
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar1 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 00738694 to 00738697 has its CatchHandler @ 007386ac */
  iVar3 = FUN_007115e4(param_1,pbVar2,uVar1);
  return iVar3 == 0;
}


// ===== 007386b0  FUN_007386b0 =====

uint FUN_007386b0(byte *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  ulong *puVar5;
  byte *__path;
  char local_e8 [8];
  undefined4 local_e0 [2];
  undefined8 local_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  char *local_c0;
  undefined4 *puStack_b8;
  byte *local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  
  uStack_a8 = 0;
  local_c0 = "create_directory";
  puStack_b8 = param_2;
  local_b0 = param_1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    uVar3 = FUN_00715554();
    *(undefined8 *)(param_2 + 2) = uVar3;
  }
  __path = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    __path = param_1 + 1;
  }
  iVar1 = mkdir((char *)__path,0x1ff);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    puVar4 = (uint *)__errno();
    uVar2 = *puVar4;
    uVar3 = FUN_0071546c();
    if (uVar2 == 0x11) {
      local_e0[0] = 0;
      local_d0 = 0x11;
      uStack_c8 = uVar3;
      local_d8 = FUN_00715554();
                    /* try { // try from 00738730 to 00738743 has its CatchHandler @ 00738794 */
      FUN_00738168(local_e8,param_1,&local_a0,local_e0);
      if (local_e8[0] == '\x02') {
        uVar2 = 0;
        goto LAB_0073877c;
      }
      puVar5 = &local_d0;
    }
    else {
      puVar5 = &local_a0;
      local_a0 = (ulong)uVar2;
      uStack_98 = uVar3;
    }
    uVar2 = FUN_007382a0(&local_c0,puVar5);
  }
LAB_0073877c:
  return uVar2 & 1;
}


// ===== 00738798  FUN_00738798 =====

void FUN_00738798(undefined8 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  size_t __size;
  char *__buf;
  char *pcVar4;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  local_50 = "current_path";
  puStack_48 = param_2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    uVar2 = FUN_00715554();
    *(undefined8 *)(param_2 + 2) = uVar2;
  }
  puVar3 = (uint *)__errno();
  *puVar3 = 0;
  __size = pathconf(".",5);
  if (__size == 0xffffffffffffffff) {
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      uStack_58 = FUN_0071546c();
      local_60 = (ulong)uVar1;
      FUN_007388e4(param_1,&local_50,&local_60,"call to pathconf failed");
      return;
    }
    __size = 0x1001;
  }
  __buf = (char *)thunk_FUN_00759c3c(__size + 1);
                    /* try { // try from 0073880c to 00738817 has its CatchHandler @ 007388d0 */
  pcVar4 = getcwd(__buf,__size);
  if (pcVar4 == (char *)0x0) {
    uVar1 = *puVar3;
    uStack_58 = FUN_0071546c();
                    /* try { // try from 00738874 to 0073888b has its CatchHandler @ 007388b4 */
    local_60 = (ulong)uVar1;
    FUN_007388e4(param_1,&local_50,&local_60,"call to getcwd failed");
  }
  else {
    pcVar4 = pcVar4 + -1;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    do {
      pcVar4 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
                    /* try { // try from 00738830 to 00738837 has its CatchHandler @ 007388b8 */
    FUN_0030dd04(param_1);
  }
  free(__buf);
  return;
}


// ===== 007388e4  FUN_007388e4 =====

void FUN_007388e4(undefined8 *param_1)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 **ppuStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  puStack_50 = auStack_90;
  ppuStack_58 = &local_60;
  uStack_48 = 0xffffff80ffffffd8;
  local_88 = in_x3;
  uStack_80 = in_x4;
  local_78 = in_x5;
  uStack_70 = in_x6;
  local_68 = in_x7;
  local_60 = (undefined1 *)register0x00000008;
                    /* try { // try from 00738948 to 0073894f has its CatchHandler @ 0073896c */
  FUN_007396ec();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 00738988  FUN_00738988 =====

void FUN_00738988(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_90 [128];
  
  FUN_00738168(param_1,auStack_90,param_2);
  return;
}


// ===== 007389b4  FUN_007389b4 =====

void FUN_007389b4(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 **ppuStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  puStack_50 = auStack_90;
  ppuStack_58 = &local_60;
  uStack_48 = 0xffffff80ffffffd8;
  local_88 = in_x3;
  uStack_80 = in_x4;
  local_78 = in_x5;
  uStack_70 = in_x6;
  local_68 = in_x7;
  local_60 = (undefined1 *)register0x00000008;
                    /* try { // try from 00738a14 to 00738a1b has its CatchHandler @ 00738a30 */
  FUN_00738a4c();
  return;
}


// ===== 00738a4c  FUN_00738a4c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00738a4c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte local_b0 [16];
  void *local_a0;
  byte local_98 [16];
  void *local_88;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  ulong local_40;
  ulong uStack_38;
  void *local_30;
  
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
    uVar3 = *param_2;
    puVar4[1] = param_2[1];
    *puVar4 = uVar3;
    return;
  }
  FUN_002fd2b0(local_98,&DAT_001e46e9);
                    /* try { // try from 00738aa8 to 00738aaf has its CatchHandler @ 00738c60 */
  puVar2 = (ulong *)FUN_00713bdc(local_98,*param_1);
  local_70 = (void *)puVar2[2];
  uStack_78 = puVar2[1];
  local_80 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
                    /* try { // try from 00738ac8 to 00738ad7 has its CatchHandler @ 00738c40 */
  puVar2 = (ulong *)FUN_00713bdc(&local_80,&DAT_001f2fbc);
  local_50 = (void *)puVar2[2];
  uStack_58 = puVar2[1];
  local_60 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  uStack_c8 = param_4[1];
  local_d0 = *param_4;
  uStack_b8 = param_4[3];
  uStack_c0 = param_4[2];
                    /* try { // try from 00738af8 to 00738b07 has its CatchHandler @ 00738c20 */
  FUN_00738c7c(local_b0,param_3,&local_d0);
                    /* try { // try from 00738b08 to 00738b13 has its CatchHandler @ 00738be4 */
  puVar2 = (ulong *)FUN_007111ec(&local_60,local_b0);
  local_30 = (void *)puVar2[2];
  uStack_38 = puVar2[1];
  local_40 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  if ((local_b0[0] & 1) != 0) goto LAB_00738b84;
  while( true ) {
    if ((local_60 & 1) != 0) {
      free(local_50);
    }
    if ((local_80 & 1) != 0) {
      free(local_70);
    }
    if ((local_98[0] & 1) != 0) {
      free(local_88);
    }
    cVar1 = param_1[2] != 0;
    if (param_1[3] != 0) {
      cVar1 = cVar1 + '\x01';
    }
    if (cVar1 == '\0') break;
    if (cVar1 != '\x01') goto LAB_00738bc4;
                    /* try { // try from 00738b78 to 00738bcf has its CatchHandler @ 00738bd0 */
    FUN_00738db8(&local_40,param_1[2],param_2);
LAB_00738b84:
    free(local_a0);
  }
  FUN_00738d5c(&local_40,param_2);
LAB_00738bc4:
  uVar3 = FUN_00738e20(&local_40);
                    /* catch() { ... } // from try @ 00738b78 with catch @ 00738bd0 */
  if ((local_40 & 1) != 0) {
    free(local_30);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00755eac(uVar3);
}


// ===== 00738c7c  FUN_00738c7c =====

ulong FUN_00738c7c(byte *param_1,char *param_2,undefined8 *param_3)

{
  uint uVar1;
  ulong uVar2;
  byte *__s;
  long lVar3;
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
  char acStack_140 [256];
  
  uStack_178 = param_3[1];
  local_180 = *param_3;
  uStack_168 = param_3[3];
  uStack_170 = param_3[2];
  local_160 = local_180;
  uStack_158 = uStack_178;
  uStack_150 = uStack_170;
  uStack_148 = uStack_168;
  uVar1 = vsnprintf(acStack_140,0x100,param_2,&local_180);
  lVar3 = (long)(int)uVar1;
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
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (uVar1 < 0x100) {
                    /* try { // try from 00738cd8 to 00738ce7 has its CatchHandler @ 00738d40 */
    uVar2 = FUN_00712d5c(param_1,acStack_140,lVar3);
  }
  else {
                    /* try { // try from 00738cec to 00738cf7 has its CatchHandler @ 00738d3c */
    FUN_00738e90(param_1,lVar3);
    uStack_198 = param_3[1];
    local_1a0 = *param_3;
    uStack_188 = param_3[3];
    uStack_190 = param_3[2];
    __s = *(byte **)(param_1 + 0x10);
    if ((*param_1 & 1) == 0) {
      __s = param_1 + 1;
    }
    uVar1 = vsnprintf((char *)__s,lVar3 + 1,param_2,&local_1a0);
    uVar2 = (ulong)uVar1;
  }
  return uVar2;
}


// ===== 00738d5c  FUN_00738d5c =====

void FUN_00738d5c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00753a74(0x30);
                    /* try { // try from 00738d84 to 00738d8b has its CatchHandler @ 00738da4 */
  FUN_00738fec(uVar1,param_1,*param_2,param_2[1]);
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(uVar1,PTR_PTR_007a37c0,PTR_FUN_007a37b8);
}


// ===== 00738db8  FUN_00738db8 =====

void FUN_00738db8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00753a74(0x30);
                    /* try { // try from 00738de8 to 00738df3 has its CatchHandler @ 00738e0c */
  FUN_007392e8(uVar1,param_1,param_2,*param_3,param_3[1]);
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(uVar1,PTR_PTR_007a37c0,PTR_FUN_007a37b8);
}


// ===== 00738e20  FUN_00738e20 =====

void FUN_00738e20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00753a74(0x30);
                    /* try { // try from 00738e54 to 00738e63 has its CatchHandler @ 00738e7c */
  FUN_007394a0(uVar1,param_1,param_2,param_3,*param_4,param_4[1]);
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(uVar1,PTR_PTR_007a37c0,PTR_FUN_007a37b8);
}


// ===== 00738e90  FUN_00738e90 =====

void FUN_00738e90(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  ulong uVar3;
  void *__dest;
  uint uVar4;
  void *__src;
  ulong uVar5;
  
  if (param_2 != 0) {
    uVar2 = *param_1;
    uVar3 = *param_1;
    uVar5 = 0x16;
    if ((uVar3 & 1) != 0) {
      uVar5 = (uVar2 & 0xfffffffffffffffe) - 1;
    }
    uVar4 = (uint)uVar2;
    __n = uVar2 >> 1 & 0x7f;
    if ((uVar2 & 1) != 0) {
      __n = param_1[1];
    }
    if (uVar5 - __n < param_2) {
      uVar1 = __n + param_2;
      if (-uVar5 - 9 < uVar1 - uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_002fb400();
      }
      __src = (void *)param_1[2];
      if ((uVar2 & 1) == 0) {
        __src = (void *)((long)param_1 + 1);
      }
      if (uVar5 < 0x7ffffffffffffff3) {
        if (uVar1 <= uVar5 * 2) {
          uVar1 = uVar5 * 2;
        }
        if (uVar1 < 0x17) {
          uVar5 = 0x17;
        }
        else {
          uVar5 = (uVar1 & 0xfffffffffffffff8) + 8;
          if ((uVar1 | 7) != 0x17) {
            uVar5 = uVar1 | 7;
          }
          uVar5 = uVar5 + 1;
        }
      }
      else {
        uVar5 = 0xfffffffffffffff7;
      }
      __dest = (void *)FUN_00759c3c(uVar5);
      if (__n != 0) {
        memmove(__dest,__src,__n);
      }
      if ((uVar3 & 1) != 0) {
        free(__src);
      }
      param_1[1] = __n;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar5 | 1;
      uVar4 = (uint)(uVar5 | 1);
    }
    else {
      __dest = (void *)param_1[2];
    }
    param_2 = __n + param_2;
    if ((uVar4 & 1) == 0) {
      __dest = (void *)((long)param_1 + 1);
    }
    if ((uVar4 & 1) == 0) {
      *(char *)param_1 = (char)((int)param_2 << 1);
    }
    else {
      param_1[1] = param_2;
    }
    *(undefined1 *)((long)__dest + param_2) = 0;
  }
  return;
}


// ===== 00738fec  FUN_00738fec =====

void FUN_00738fec(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong local_60 [2];
  void *local_50;
  ulong local_48 [2];
  void *local_38;
  undefined1 uStack_11;
  
  FUN_007155a4(param_1,param_3,param_4,param_2);
  local_48[0] = 0;
  local_48[1] = 0;
  local_38 = (void *)0x0;
  local_60[0] = 0;
  local_60[1] = 0;
  *param_1 = (long)(PTR_DAT_007a37b0 + 0x10);
  local_50 = (void *)0x0;
                    /* try { // try from 00739040 to 00739053 has its CatchHandler @ 007390a8 */
  FUN_00739138(param_1 + 4,&uStack_11,local_48,local_60);
  if ((local_60[0] & 1) != 0) {
    free(local_50);
  }
  if ((local_48[0] & 1) != 0) {
    free(local_38);
  }
                    /* try { // try from 00739074 to 0073907f has its CatchHandler @ 00739098 */
  FUN_007399b0(param_1,0);
  return;
}


// ===== 007390dc  FUN_007390dc =====

void FUN_007390dc(long param_1)

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


// ===== 00739138  FUN_00739138 =====

void FUN_00739138(long *param_1,undefined8 param_2,byte *param_3,byte *param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = (undefined8 *)FUN_00759c3c(0x60);
  bVar2 = *param_3;
  puVar1 = puVar3 + 3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_0079dc50;
  if ((bVar2 & 1) == 0) {
    uVar5 = *(undefined8 *)param_3;
    uVar4 = *(undefined8 *)(param_3 + 0x10);
    puVar3[4] = *(undefined8 *)(param_3 + 8);
    *puVar1 = uVar5;
    puVar3[5] = uVar4;
  }
  else {
                    /* try { // try from 0073919c to 007391a3 has its CatchHandler @ 00739208 */
    FUN_002fb36c(puVar1,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
  }
  if ((*param_4 & 1) == 0) {
    uVar5 = *(undefined8 *)param_4;
    uVar4 = *(undefined8 *)(param_4 + 0x10);
    puVar3[7] = *(undefined8 *)(param_4 + 8);
    puVar3[6] = uVar5;
    puVar3[8] = uVar4;
  }
  else {
                    /* try { // try from 007391c4 to 007391cb has its CatchHandler @ 007391f0 */
    FUN_002fb36c(puVar3 + 6,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 8));
  }
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar3;
  return;
}


// ===== 00739224  FUN_00739224 =====

void FUN_00739224(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0079dc50;
  FUN_00712454();
  return;
}


// ===== 00739238  FUN_00739238 =====

void FUN_00739238(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0079dc50;
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00739270  FUN_00739270 =====

void FUN_00739270(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x30);
  }
  else {
    free(*(void **)(param_1 + 0x58));
    bVar1 = *(byte *)(param_1 + 0x30);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x18);
  }
  else {
    free(*(void **)(param_1 + 0x40));
    bVar1 = *(byte *)(param_1 + 0x18);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  free(*(void **)(param_1 + 0x28));
  return;
}


// ===== 007392e0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 007392e8  FUN_007392e8 =====

void FUN_007392e8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong local_48 [2];
  void *local_38;
  undefined1 uStack_11;
  
  FUN_007155a4(param_1,param_4,param_5,param_2);
  local_48[0] = 0;
  local_48[1] = 0;
  local_38 = (void *)0x0;
  *param_1 = (long)(PTR_DAT_007a37b0 + 0x10);
                    /* try { // try from 00739338 to 0073934b has its CatchHandler @ 00739390 */
  FUN_007393b4(param_1 + 4,&uStack_11,param_3,local_48);
  if ((local_48[0] & 1) != 0) {
    free(local_38);
  }
                    /* try { // try from 0073935c to 00739367 has its CatchHandler @ 00739380 */
  FUN_007399b0(param_1,1);
  return;
}


// ===== 007393b4  FUN_007393b4 =====

void FUN_007393b4(long *param_1,undefined8 param_2,byte *param_3,byte *param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = (undefined8 *)FUN_00759c3c(0x60);
  bVar2 = *param_3;
  puVar1 = puVar3 + 3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_0079dc50;
  if ((bVar2 & 1) == 0) {
    uVar5 = *(undefined8 *)param_3;
    uVar4 = *(undefined8 *)(param_3 + 0x10);
    puVar3[4] = *(undefined8 *)(param_3 + 8);
    *puVar1 = uVar5;
    puVar3[5] = uVar4;
  }
  else {
                    /* try { // try from 00739418 to 0073941f has its CatchHandler @ 00739484 */
    FUN_002fb36c(puVar1,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
  }
  if ((*param_4 & 1) == 0) {
    uVar5 = *(undefined8 *)param_4;
    uVar4 = *(undefined8 *)(param_4 + 0x10);
    puVar3[7] = *(undefined8 *)(param_4 + 8);
    puVar3[6] = uVar5;
    puVar3[8] = uVar4;
  }
  else {
                    /* try { // try from 00739440 to 00739447 has its CatchHandler @ 0073946c */
    FUN_002fb36c(puVar3 + 6,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 8));
  }
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar3;
  return;
}


// ===== 007394a0  FUN_007394a0 =====

void FUN_007394a0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined1 uStack_31;
  
  FUN_007155a4(param_1,param_5,param_6,param_2);
  *param_1 = (long)(PTR_DAT_007a37b0 + 0x10);
                    /* try { // try from 007394e8 to 007394fb has its CatchHandler @ 00739530 */
  FUN_00739544(param_1 + 4,&uStack_31,param_3,param_4);
                    /* try { // try from 007394fc to 00739507 has its CatchHandler @ 00739520 */
  FUN_007399b0(param_1,2);
  return;
}


// ===== 00739544  FUN_00739544 =====

void FUN_00739544(long *param_1,undefined8 param_2,byte *param_3,byte *param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = (undefined8 *)FUN_00759c3c(0x60);
  bVar2 = *param_3;
  puVar1 = puVar3 + 3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_0079dc50;
  if ((bVar2 & 1) == 0) {
    uVar5 = *(undefined8 *)param_3;
    uVar4 = *(undefined8 *)(param_3 + 0x10);
    puVar3[4] = *(undefined8 *)(param_3 + 8);
    *puVar1 = uVar5;
    puVar3[5] = uVar4;
  }
  else {
                    /* try { // try from 007395a8 to 007395af has its CatchHandler @ 00739614 */
    FUN_002fb36c(puVar1,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
  }
  if ((*param_4 & 1) == 0) {
    uVar5 = *(undefined8 *)param_4;
    uVar4 = *(undefined8 *)(param_4 + 0x10);
    puVar3[7] = *(undefined8 *)(param_4 + 8);
    puVar3[6] = uVar5;
    puVar3[8] = uVar4;
  }
  else {
                    /* try { // try from 007395d0 to 007395d7 has its CatchHandler @ 007395fc */
    FUN_002fb36c(puVar3 + 6,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 8));
  }
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar3;
  return;
}


// ===== 00739630  FUN_00739630 =====

byte * FUN_00739630(byte *param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  byte bVar3;
  long extraout_x1;
  long extraout_x1_00;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_007112cc(param_2);
  if (extraout_x1 == 0) {
    FUN_007114a8(param_1);
    if (extraout_x1_00 != 0) {
      FUN_007132e8(param_1,0x2f);
    }
    FUN_007111ec(param_1,param_2);
  }
  else if (param_1 != param_2) {
    bVar3 = *param_2;
    if ((*param_1 & 1) == 0) {
      if ((bVar3 & 1) == 0) {
        uVar5 = *(undefined8 *)(param_2 + 8);
        uVar4 = *(undefined8 *)param_2;
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
        *(undefined8 *)(param_1 + 8) = uVar5;
        *(undefined8 *)param_1 = uVar4;
      }
      else {
        FUN_00713a04(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
      }
    }
    else {
      uVar1 = *(ulong *)(param_2 + 8);
      pbVar2 = *(byte **)(param_2 + 0x10);
      if ((bVar3 & 1) == 0) {
        pbVar2 = param_2 + 1;
        uVar1 = (ulong)(bVar3 >> 1);
      }
      FUN_00713ab8(param_1,pbVar2,uVar1);
    }
  }
  return param_1;
}


// ===== 007396ec  FUN_007396ec =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007396ec(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte local_b0 [16];
  void *local_a0;
  byte local_98 [16];
  void *local_88;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  ulong local_40;
  ulong uStack_38;
  void *local_30;
  
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
    uVar3 = *param_2;
    puVar4[1] = param_2[1];
    *puVar4 = uVar3;
    return;
  }
  FUN_002fd2b0(local_98,&DAT_001e46e9);
                    /* try { // try from 00739748 to 0073974f has its CatchHandler @ 00739900 */
  puVar2 = (ulong *)FUN_00713bdc(local_98,*param_1);
  local_70 = (void *)puVar2[2];
  uStack_78 = puVar2[1];
  local_80 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
                    /* try { // try from 00739768 to 00739777 has its CatchHandler @ 007398e0 */
  puVar2 = (ulong *)FUN_00713bdc(&local_80,&DAT_001f2fbc);
  local_50 = (void *)puVar2[2];
  uStack_58 = puVar2[1];
  local_60 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  uStack_c8 = param_4[1];
  local_d0 = *param_4;
  uStack_b8 = param_4[3];
  uStack_c0 = param_4[2];
                    /* try { // try from 00739798 to 007397a7 has its CatchHandler @ 007398c0 */
  FUN_00738c7c(local_b0,param_3,&local_d0);
                    /* try { // try from 007397a8 to 007397b3 has its CatchHandler @ 00739884 */
  puVar2 = (ulong *)FUN_007111ec(&local_60,local_b0);
  local_30 = (void *)puVar2[2];
  uStack_38 = puVar2[1];
  local_40 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  if ((local_b0[0] & 1) != 0) goto LAB_00739824;
  while( true ) {
    if ((local_60 & 1) != 0) {
      free(local_50);
    }
    if ((local_80 & 1) != 0) {
      free(local_70);
    }
    if ((local_98[0] & 1) != 0) {
      free(local_88);
    }
    cVar1 = param_1[2] != 0;
    if (param_1[3] != 0) {
      cVar1 = cVar1 + '\x01';
    }
    if (cVar1 == '\0') break;
    if (cVar1 != '\x01') goto LAB_00739864;
                    /* try { // try from 00739818 to 0073986f has its CatchHandler @ 00739870 */
    FUN_00738db8(&local_40,param_1[2],param_2);
LAB_00739824:
    free(local_a0);
  }
  FUN_00738d5c(&local_40,param_2);
LAB_00739864:
  uVar3 = FUN_00738e20(&local_40);
                    /* catch() { ... } // from try @ 00739818 with catch @ 00739870 */
  if ((local_40 & 1) != 0) {
    free(local_30);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00755eac(uVar3);
}


// ===== 0073991c  FUN_0073991c =====

void FUN_0073991c(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[5];
  *param_1 = (long)(PTR_DAT_007a37b0 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  thunk_FUN_0073a2c4(param_1);
  return;
}


// ===== 00739984  FUN_00739984 =====

void FUN_00739984(void *param_1)

{
  FUN_0073991c();
  free(param_1);
  return;
}


// ===== 007399b0  FUN_007399b0 =====

void FUN_007399b0(long param_1,int param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uVar2 = FUN_0073a348();
  if (param_2 == 2) {
    pbVar3 = *(byte **)(param_1 + 0x20);
    pbVar5 = *(byte **)(pbVar3 + 0x10);
    if ((*pbVar3 & 1) == 0) {
      pbVar5 = pbVar3 + 1;
    }
    pbVar1 = pbVar3 + 0x19;
    if ((pbVar3[0x18] & 1) != 0) {
      pbVar1 = *(byte **)(pbVar3 + 0x28);
    }
    FUN_00739ab4(&local_38,"filesystem error: %s [\"%s\"] [\"%s\"]",uVar2,pbVar5,pbVar1);
  }
  else if (param_2 == 1) {
    pbVar3 = *(byte **)(param_1 + 0x20);
    pbVar5 = *(byte **)(pbVar3 + 0x10);
    if ((*pbVar3 & 1) == 0) {
      pbVar5 = pbVar3 + 1;
    }
    FUN_00739ab4(&local_38,"filesystem error: %s [\"%s\"]",uVar2,pbVar5);
  }
  else {
    FUN_00739ab4(&local_38,"filesystem error: %s",uVar2);
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar4 + 0x30) & 1) != 0) {
    free(*(void **)(lVar4 + 0x40));
  }
  *(undefined8 *)(lVar4 + 0x38) = uStack_30;
  *(undefined8 *)(lVar4 + 0x30) = local_38;
  *(undefined8 *)(lVar4 + 0x40) = local_28;
  return;
}


// ===== 00739a94  FUN_00739a94 =====

long FUN_00739a94(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  lVar1 = lVar2 + 0x31;
  if ((*(byte *)(lVar2 + 0x30) & 1) != 0) {
    lVar1 = *(long *)(lVar2 + 0x40);
  }
  return lVar1;
}


// ===== 00739ab4  FUN_00739ab4 =====

ulong FUN_00739ab4(ulong *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  char *__s;
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_240 [8];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined1 *local_200;
  undefined1 **ppuStack_1f8;
  undefined1 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1d8;
  ulong uStack_1d0;
  char *local_1c8;
  undefined1 *local_1a0;
  undefined1 **ppuStack_198;
  undefined1 *puStack_190;
  undefined8 uStack_188;
  undefined1 *local_180;
  undefined1 **ppuStack_178;
  undefined1 *puStack_170;
  undefined8 uStack_168;
  undefined1 *local_160;
  undefined1 **ppuStack_158;
  undefined1 *puStack_150;
  undefined8 uStack_148;
  char acStack_140 [256];
  
  param_1[2] = 0;
  puStack_1f0 = auStack_240;
  ppuStack_1f8 = &local_200;
  *param_1 = 0;
  param_1[1] = 0;
  uStack_1e8 = 0xffffff80ffffffc8;
  uStack_168 = 0xffffff80ffffffc8;
  uStack_148 = 0xffffff80ffffffc8;
  local_238 = param_3;
  uStack_230 = param_4;
  local_228 = param_5;
  uStack_220 = param_6;
  local_218 = param_7;
  uStack_210 = param_8;
  local_208 = param_9;
  local_200 = (undefined1 *)register0x00000008;
  local_180 = (undefined1 *)register0x00000008;
  ppuStack_178 = ppuStack_1f8;
  puStack_170 = puStack_1f0;
  local_160 = (undefined1 *)register0x00000008;
  ppuStack_158 = ppuStack_1f8;
  puStack_150 = puStack_1f0;
  uVar1 = vsnprintf(acStack_140,0x100,param_2,&local_180);
  lVar3 = (long)(int)uVar1;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = (char *)0x0;
  if (uVar1 < 0x100) {
                    /* try { // try from 00739b5c to 00739b6b has its CatchHandler @ 00739bd8 */
    uVar2 = FUN_00712d5c(&local_1d8,acStack_140,lVar3);
  }
  else {
                    /* try { // try from 00739b70 to 00739b7f has its CatchHandler @ 00739bd4 */
    FUN_00738e90(&local_1d8,lVar3);
    __s = local_1c8;
    if ((local_1d8 & 1) == 0) {
      __s = (char *)((long)&local_1d8 + 1);
    }
    ppuStack_198 = ppuStack_1f8;
    local_1a0 = local_200;
    uStack_188 = uStack_1e8;
    puStack_190 = puStack_1f0;
    uVar1 = vsnprintf(__s,lVar3 + 1,param_2,&local_1a0);
    uVar2 = (ulong)uVar1;
  }
  param_1[1] = uStack_1d0;
  *param_1 = local_1d8;
  param_1[2] = (ulong)local_1c8;
  return uVar2;
}


// ===== 00739c1c  FUN_00739c1c =====

bool FUN_00739c1c(char *param_1)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  int unaff_w20;
  
  if (*param_1 == '\0') {
    iVar4 = pthread_mutex_lock((pthread_mutex_t *)&DAT_007b1668);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0073a468("%s failed to acquire mutex","__cxa_guard_acquire");
    }
    bVar1 = param_1[1];
    if ((bVar1 >> 1 & 1) != 0) {
      iVar4 = *(int *)(param_1 + 4);
                    /* try { // try from 00739c74 to 00739c7b has its CatchHandler @ 00739d44 */
      lVar5 = syscall(0xb2);
      unaff_w20 = (int)lVar5;
      if (iVar4 == unaff_w20) {
                    /* try { // try from 00739d38 to 00739d43 has its CatchHandler @ 00739d44 */
                    /* WARNING: Subroutine does not return */
        FUN_0073a468(
                    "__cxa_guard_acquire detected recursive initialization: do you have a function-local static variable whose initialization depends on that function?"
                    );
      }
    }
    while (bVar2 = param_1[1], (bVar2 >> 1 & 1) != 0) {
      param_1[1] = bVar2 | 4;
                    /* try { // try from 00739ca8 to 00739cb3 has its CatchHandler @ 00739d4c */
      pthread_cond_wait((pthread_cond_t *)&DAT_007b1690,(pthread_mutex_t *)&DAT_007b1668);
    }
    if (bVar2 != 1) {
      if ((bVar1 >> 1 & 1) == 0) {
                    /* try { // try from 00739cc4 to 00739ccb has its CatchHandler @ 00739d44 */
        lVar5 = syscall(0xb2);
        unaff_w20 = (int)lVar5;
      }
      *(int *)(param_1 + 4) = unaff_w20;
      param_1[1] = '\x02';
    }
    iVar4 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_007b1668);
    if (iVar4 != 0) {
                    /* try { // try from 00739d24 to 00739d37 has its CatchHandler @ 00739d48 */
                    /* WARNING: Subroutine does not return */
      FUN_0073a468("%s failed to release mutex","__cxa_guard_acquire");
    }
    bVar3 = bVar2 != 1;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}


// ===== 00739d60  FUN_00739d60 =====

void FUN_00739d60(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  
  *param_1 = 1;
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_007b1668);
  if (iVar2 == 0) {
    bVar1 = *(byte *)((long)param_1 + 1);
    *(undefined1 *)((long)param_1 + 1) = 1;
                    /* try { // try from 00739d98 to 00739da3 has its CatchHandler @ 00739e04 */
    iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_007b1668);
    if (iVar2 != 0) {
                    /* try { // try from 00739ddc to 00739def has its CatchHandler @ 00739e04 */
                    /* WARNING: Subroutine does not return */
      FUN_0073a468("%s failed to release mutex","__cxa_guard_release");
    }
    if (((bVar1 >> 2 & 1) == 0) ||
       (iVar2 = pthread_cond_broadcast((pthread_cond_t *)&DAT_007b1690), iVar2 == 0)) {
      return;
    }
    pcVar3 = "%s failed to broadcast";
  }
  else {
    pcVar3 = "%s failed to acquire mutex";
  }
                    /* WARNING: Subroutine does not return */
  FUN_0073a468(pcVar3,"__cxa_guard_release");
}


// ===== 00739e08  FUN_00739e08 =====

void FUN_00739e08(long param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_007b1668);
  if (iVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 1);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 1) = 0;
                    /* try { // try from 00739e38 to 00739e43 has its CatchHandler @ 00739ea0 */
    iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_007b1668);
    if (iVar2 != 0) {
                    /* try { // try from 00739e78 to 00739e8b has its CatchHandler @ 00739ea0 */
                    /* WARNING: Subroutine does not return */
      FUN_0073a468("%s failed to release mutex","__cxa_guard_abort");
    }
    if (((bVar1 >> 2 & 1) == 0) ||
       (iVar2 = pthread_cond_broadcast((pthread_cond_t *)&DAT_007b1690), iVar2 == 0)) {
      return;
    }
    pcVar3 = "%s failed to broadcast";
  }
  else {
    pcVar3 = "%s failed to acquire mutex";
  }
                    /* WARNING: Subroutine does not return */
  FUN_0073a468(pcVar3,"__cxa_guard_abort");
}


// ===== 00739ea4  FUN_00739ea4 =====

void FUN_00739ea4(undefined8 *param_1)

{
  int iVar1;
  
                    /* try { // try from 00739eb8 to 00739ee7 has its CatchHandler @ 00739ee8 */
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_007b1668);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0073a468("%s failed to release mutex",*param_1);
}


// ===== 00739eec  FUN_00739eec =====

undefined * FUN_00739eec(void)

{
  return PTR_FUN_007aab20;
}


// ===== 00739f00  FUN_00739f00 =====

void FUN_00739f00(void)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x19;
  
                    /* try { // try from 00739f08 to 00739f2f has its CatchHandler @ 00739f3c */
  plVar1 = (long *)FUN_0073a138();
  if ((plVar1 != (long *)0x0) && (unaff_x19 = *plVar1, unaff_x19 != 0)) goto LAB_00739f28;
  do {
    FUN_00739f54(PTR_FUN_007aab18);
LAB_00739f28:
    uVar2 = FUN_00753a50(unaff_x19 + 0x60);
  } while ((uVar2 & 1) == 0);
  FUN_00739f54(*(undefined8 *)(unaff_x19 + 0x28));
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00739f08 with catch @ 00739f3c
                        */
  FUN_002fb198();
}


// ===== 00739f40  FUN_00739f40 =====

undefined * FUN_00739f40(void)

{
  return PTR_FUN_007aab18;
}


// ===== 00739f54  FUN_00739f54 =====

void FUN_00739f54(code *param_1)

{
                    /* try { // try from 00739f60 to 00739f6f has its CatchHandler @ 00739f70 */
  (*param_1)();
                    /* WARNING: Subroutine does not return */
  FUN_0073a468("terminate_handler unexpectedly returned");
}


// ===== 00739f84  FUN_00739f84 =====

undefined8 FUN_00739f84(void)

{
  return DAT_007b16c0;
}


// ===== 00739f98  FUN_00739f98 =====

void FUN_00739f98(void)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *local_18;
  
  plVar2 = (long *)FUN_0073a138();
  if ((plVar2 == (long *)0x0) || (lVar6 = *plVar2, lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0073a468("terminating");
  }
  uVar3 = FUN_00753a50(lVar6 + 0x60);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0073a468("terminating due to %s foreign exception",PTR_s_uncaught_007aab28);
  }
  lVar4 = FUN_00753a44(lVar6 + 0x60);
  if (lVar4 == 0x434c4e47432b2b01) {
    local_18 = *(long **)(lVar6 + 8);
  }
  else {
    local_18 = (long *)(lVar6 + 0x80);
  }
  lVar7 = *(long *)(lVar6 + 0x10);
  lVar6 = *(long *)(lVar7 + 8);
  lVar4 = FUN_0073b734(lVar6,0,0,0);
  if (lVar4 != 0) {
    lVar6 = lVar4;
  }
                    /* try { // try from 0073a060 to 0073a06f has its CatchHandler @ 0073a0c8 */
  uVar3 = (**(code **)(*(long *)PTR_PTR_007a1000 + 0x20))(PTR_PTR_007a1000,lVar7,&local_18);
  puVar1 = PTR_s_uncaught_007aab28;
  if ((uVar3 & 1) != 0) {
    uVar5 = (**(code **)(*local_18 + 0x10))();
                    /* try { // try from 0073a090 to 0073a0a3 has its CatchHandler @ 0073a0bc */
                    /* WARNING: Subroutine does not return */
    FUN_0073a468("terminating due to %s exception of type %s: %s",puVar1,lVar6,uVar5);
  }
                    /* try { // try from 0073a0ac to 0073a0bb has its CatchHandler @ 0073a0c8 */
                    /* WARNING: Subroutine does not return */
  FUN_0073a468("terminating due to %s exception of type %s",PTR_s_uncaught_007aab28,lVar6);
}


// ===== 0073a0e4  FUN_0073a0e4 =====

void FUN_0073a0e4(void)

{
  PTR_s_uncaught_007aab28 = s_unexpected_001dc125;
                    /* WARNING: Subroutine does not return */
  FUN_00739f00();
}


// ===== 0073a104  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0073a10c  FUN_0073a10c =====

void FUN_0073a10c(void)

{
  return;
}


// ===== 0073a114  FUN_0073a114 =====

void FUN_0073a114(void)

{
  FUN_00755340(&DAT_007aab30);
  return;
}


// ===== 0073a138  FUN_0073a138 =====

void FUN_0073a138(void)

{
  FUN_00755340(&DAT_007aab30);
  return;
}


// ===== 0073a15c  FUN_0073a15c =====

void FUN_0073a15c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0073a468("Pure virtual function called!");
}


// ===== 0073a174  FUN_0073a174 =====

void FUN_0073a174(void)

{
  return;
}


// ===== 0073a17c  FUN_0073a17c =====

char * FUN_0073a17c(void)

{
  return "std::exception";
}


// ===== 0073a18c  FUN_0073a18c =====

void FUN_0073a18c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0079dce0;
  return;
}


// ===== 0073a1a4  FUN_0073a1a4 =====

void FUN_0073a1a4(void *param_1)

{
  FUN_0073a174();
  free(param_1);
  return;
}


// ===== 0073a1d0  FUN_0073a1d0 =====

char * FUN_0073a1d0(void)

{
  return "std::bad_alloc";
}


// ===== 0073a1e0  FUN_0073a1e0 =====

void FUN_0073a1e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0079dd08;
  return;
}


// ===== 0073a1f8  FUN_0073a1f8 =====

void FUN_0073a1f8(void *param_1)

{
  FUN_0073a174();
  free(param_1);
  return;
}


// ===== 0073a224  FUN_0073a224 =====

char * FUN_0073a224(void)

{
  return "bad_array_new_length";
}


// ===== 0073a234  FUN_0073a234 =====

void FUN_0073a234(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  *param_1 = (long)(PTR_DAT_007a37c8 + 0x10);
  iVar1 = FUN_00755bf0(0xffffffff,lVar2 + -8);
  if (iVar1 + -1 < 0) {
    free((void *)(lVar2 + -0x18));
  }
  FUN_0073a174(param_1);
  return;
}


// ===== 0073a28c  FUN_0073a28c =====

void FUN_0073a28c(void *param_1)

{
  FUN_0073a234();
  free(param_1);
  return;
}


// ===== 0073a2b8  FUN_0073a2b8 =====

undefined8 FUN_0073a2b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 0073a2c4  FUN_0073a2c4 =====

void FUN_0073a2c4(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  *param_1 = (long)(PTR_DAT_007a37d0 + 0x10);
  iVar1 = FUN_00755bf0(0xffffffff,lVar2 + -8);
  if (iVar1 + -1 < 0) {
    free((void *)(lVar2 + -0x18));
  }
  FUN_0073a174(param_1);
  return;
}


// ===== 0073a31c  FUN_0073a31c =====

void FUN_0073a31c(void *param_1)

{
  FUN_0073a2c4();
  free(param_1);
  return;
}


// ===== 0073a348  FUN_0073a348 =====

undefined8 FUN_0073a348(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 0073a354  FUN_0073a354 =====

void FUN_0073a354(void *param_1)

{
  FUN_0073a234();
  free(param_1);
  return;
}


// ===== 0073a380  FUN_0073a380 =====

void FUN_0073a380(void *param_1)

{
  FUN_0073a234();
  free(param_1);
  return;
}


// ===== 0073a3ac  FUN_0073a3ac =====

void FUN_0073a3ac(void *param_1)

{
  FUN_0073a234();
  free(param_1);
  return;
}


// ===== 0073a3d8  FUN_0073a3d8 =====

void FUN_0073a3d8(void *param_1)

{
  FUN_0073a2c4();
  free(param_1);
  return;
}


// ===== 0073a404  FUN_0073a404 =====

void FUN_0073a404(void)

{
  return;
}


// ===== 0073a40c  FUN_0073a40c =====

void FUN_0073a40c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_0073a174_0079def0;
  return;
}


// ===== 0073a424  thunk_FUN_0073a174 =====

void thunk_FUN_0073a174(void)

{
  FUN_0073a174();
  return;
}


// ===== 0073a42c  FUN_0073a42c =====

void FUN_0073a42c(void *param_1)

{
  thunk_FUN_0073a174();
  free(param_1);
  return;
}


// ===== 0073a458  FUN_0073a458 =====

char * FUN_0073a458(void)

{
  return "std::bad_cast";
}


// ===== 0073a468  FUN_0073a468 =====

void FUN_0073a468(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined1 **ppuStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  char *local_38;
  
  puVar1 = PTR___sF_007a3898;
  local_e8 = param_2;
  uStack_e0 = param_3;
  local_d8 = param_4;
  uStack_d0 = param_5;
  local_c8 = param_6;
  uStack_c0 = param_7;
  local_b8 = param_8;
  fwrite("libc++abi: ",0xb,1,(FILE *)(PTR___sF_007a3898 + 0x130));
  uStack_78 = 0xffffff80ffffffc8;
  local_90 = (undefined1 *)register0x00000008;
  ppuStack_88 = &local_b0;
  puStack_80 = auStack_f0;
  vfprintf((FILE *)(puVar1 + 0x130),param_1,&local_90);
  fputc(10,(FILE *)(puVar1 + 0x130));
  uStack_98 = 0xffffff80ffffffc8;
  local_b0 = (undefined1 *)register0x00000008;
  ppuStack_a8 = &local_b0;
  puStack_a0 = auStack_f0;
  vasprintf(&local_38,param_1,&local_b0);
  android_set_abort_message(local_38);
  openlog("libc++abi",0,0);
  syslog(2,"%s",local_38);
  closelog();
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0073a56c  thunk_FUN_0073a404 =====

void thunk_FUN_0073a404(void)

{
  FUN_0073a404();
  return;
}


// ===== 0073a574  FUN_0073a574 =====

void FUN_0073a574(void)

{
  return;
}


// ===== 0073a57c  FUN_0073a57c =====

void FUN_0073a57c(void)

{
  return;
}


// ===== 0073a584  FUN_0073a584 =====

void FUN_0073a584(void *param_1)

{
  FUN_0073a404();
  free(param_1);
  return;
}


// ===== 0073a5b0  FUN_0073a5b0 =====

void FUN_0073a5b0(void *param_1)

{
  FUN_0073a404();
  free(param_1);
  return;
}


// ===== 0073a5dc  FUN_0073a5dc =====

void FUN_0073a5dc(void *param_1)

{
  FUN_0073a404();
  free(param_1);
  return;
}


// ===== 0073a608  FUN_0073a608 =====

void FUN_0073a608(void *param_1)

{
  FUN_0073a404();
  free(param_1);
  return;
}


// ===== 0073a634  FUN_0073a634 =====

bool FUN_0073a634(long param_1,long param_2)

{
  return *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
}


// ===== 0073a64c  FUN_0073a64c =====

long * FUN_0073a64c(long param_1,long param_2,long *param_3)

{
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined7 uStack_40;
  undefined1 local_39;
  undefined7 uStack_38;
  undefined8 uStack_31;
  undefined1 local_29;
  undefined8 local_28;
  
  if (*(long *)(param_1 + 8) == *(long *)(param_2 + 8)) {
    local_78 = (long *)0x1;
  }
  else {
    local_78 = (long *)FUN_0073a738(param_2,PTR_PTR_007a3ac0,PTR_PTR_007a3ac8,0);
    if (local_78 != (long *)0x0) {
      if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0073a468("%s:%d: %s","out/llvm-project/libcxxabi/src/private_typeinfo.cpp",0x1d9,
                     "catching a class without an object?");
      }
      local_28 = 0;
      uStack_60 = 0xffffffffffffffff;
      local_29 = 1;
      uStack_70 = 0;
      uStack_38 = 0;
      uStack_50 = 0;
      local_58 = 0;
      uStack_40 = 0;
      local_39 = 0;
      local_48 = 0;
      uStack_31 = 0x100;
      local_68 = param_1;
      (**(code **)(*local_78 + 0x38))(local_78,&local_78,*param_3,1);
      local_78 = (long *)(ulong)((int)local_48 == 1);
      if ((int)local_48 == 1) {
        *param_3 = local_58;
      }
    }
  }
  return local_78;
}


// ===== 0073a738  FUN_0073a738 =====

long FUN_0073a738(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *local_98;
  long *plStack_90;
  long *local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  undefined8 local_68;
  int iStack_60;
  int iStack_5c;
  int local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  
  lVar3 = *(long *)(*param_1 + -0x10);
  plVar1 = *(long **)(*param_1 + -8);
  lVar4 = (long)param_1 + lVar3;
  lStack_80 = param_4;
  if (plVar1[1] == param_3[1]) {
    if (param_4 < 0) {
      if (param_4 == -2) {
        return 0;
      }
      local_50 = 1;
      local_58 = 0;
      uStack_54 = 0;
      local_48 = 0;
      lStack_70 = 0;
      local_78 = 0;
      iStack_60 = 0;
      iStack_5c = 0;
      local_68 = 0;
      local_4c = 0x1000000;
      local_98 = param_3;
      plStack_90 = param_1;
      local_88 = (long *)param_2;
      (**(code **)(*param_3 + 0x28))(param_3,&local_98,lVar4,lVar4,1,0);
      bVar2 = (int)local_68 == 1;
    }
    else {
      bVar2 = param_4 + lVar3 == 0;
    }
    if (!bVar2) {
      lVar4 = 0;
    }
  }
  else {
    if ((-1 < param_4) && (lVar3 = (long)param_1 - param_4, lVar4 <= lVar3)) {
      local_58 = 0;
      uStack_54 = 0;
      iStack_60 = 0;
      iStack_5c = 0;
      local_68 = 0;
      lStack_70 = 0;
      local_78 = 0;
      local_50 = 1;
      local_4c = 0x1000000;
      local_48 = 0;
      local_98 = plVar1;
      plStack_90 = (long *)lVar3;
      local_88 = param_3;
      (**(code **)(*plVar1 + 0x28))(plVar1,&local_98,lVar4,lVar4,1,0);
      if ((int)local_68 != 0) {
        return lVar3;
      }
    }
    local_48 = 0;
    local_50 = 0;
    local_4c = 0x1000000;
    local_58 = 0;
    uStack_54 = 0;
    lStack_70 = 0;
    local_78 = 0;
    iStack_60 = 0;
    iStack_5c = 0;
    local_68 = 0;
    local_98 = param_3;
    plStack_90 = param_1;
    local_88 = (long *)param_2;
    lStack_80 = param_4;
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_98,lVar4,1,0);
    if (iStack_5c == 1) {
      if (((int)local_68 == 1) ||
         (((lVar4 = 0, local_58 == 0 && (local_68._4_4_ == 1)) && (iStack_60 == 1)))) {
        lVar4 = local_78;
      }
    }
    else {
      lVar4 = 0;
      if ((iStack_5c == 0) &&
         (lVar4 = lStack_70, (iStack_60 != 1 || local_68._4_4_ != 1) || local_58 != 1)) {
        lVar4 = 0;
      }
    }
  }
  return lVar4;
}


// ===== 0073a944  FUN_0073a944 =====

void FUN_0073a944(long param_1,long param_2,long param_3,undefined4 param_4)

{
  if (*(long *)(param_1 + 8) == *(long *)(*(long *)(param_2 + 0x10) + 8)) {
    if (*(int *)(param_2 + 0x3c) == 0) {
      *(undefined4 *)(param_2 + 0x30) = param_4;
      *(undefined4 *)(param_2 + 0x3c) = 1;
      *(long *)(param_2 + 0x20) = param_3;
      *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x50);
      return;
    }
    if ((*(long *)(param_2 + 0x28) != *(long *)(param_2 + 0x50)) ||
       (*(long *)(param_2 + 0x20) != param_3)) {
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      *(undefined4 *)(param_2 + 0x30) = 2;
      *(undefined1 *)(param_2 + 0x4e) = 1;
      return;
    }
    if (*(int *)(param_2 + 0x30) == 2) {
      *(undefined4 *)(param_2 + 0x30) = param_4;
      return;
    }
  }
  return;
}


// ===== 0073a9cc  FUN_0073a9cc =====

void FUN_0073a9cc(long param_1,long param_2,long param_3,undefined4 param_4)

{
  if (*(long *)(param_1 + 8) != *(long *)(*(long *)(param_2 + 0x10) + 8)) {
                    /* WARNING: Could not recover jumptable at 0x0073a9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x38))();
    return;
  }
  if (*(int *)(param_2 + 0x3c) != 0) {
    if ((*(long *)(param_2 + 0x28) == *(long *)(param_2 + 0x50)) &&
       (*(long *)(param_2 + 0x20) == param_3)) {
      if (*(int *)(param_2 + 0x30) == 2) {
        *(undefined4 *)(param_2 + 0x30) = param_4;
        return;
      }
    }
    else {
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      *(undefined4 *)(param_2 + 0x30) = 2;
      *(undefined1 *)(param_2 + 0x4e) = 1;
    }
    return;
  }
  *(undefined4 *)(param_2 + 0x30) = param_4;
  *(undefined4 *)(param_2 + 0x3c) = 1;
  *(long *)(param_2 + 0x20) = param_3;
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x50);
  return;
}


// ===== 0073aa60  FUN_0073aa60 =====

void FUN_0073aa60(long param_1,long param_2,long *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  if (*(long *)(param_1 + 8) == *(long *)(*(long *)(param_2 + 0x10) + 8)) {
    if (*(int *)(param_2 + 0x3c) == 0) {
      *(undefined4 *)(param_2 + 0x30) = param_4;
      *(undefined4 *)(param_2 + 0x3c) = 1;
      *(long **)(param_2 + 0x20) = param_3;
      *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x50);
    }
    else if ((*(long *)(param_2 + 0x28) == *(long *)(param_2 + 0x50)) &&
            (*(long **)(param_2 + 0x20) == param_3)) {
      if (*(int *)(param_2 + 0x30) == 2) {
        *(undefined4 *)(param_2 + 0x30) = param_4;
      }
    }
    else {
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      *(undefined4 *)(param_2 + 0x30) = 2;
      *(undefined1 *)(param_2 + 0x4e) = 1;
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x14);
    uVar4 = *(ulong *)(param_1 + 0x20);
    lVar6 = (long)uVar4 >> 8;
    plVar7 = param_3;
    if (*(char *)(param_2 + 0x4f) == '\0') {
      if ((uVar4 & 1) != 0) {
        lVar6 = 0;
        *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 8);
        plVar7 = (long *)0x0;
      }
    }
    else if ((uVar4 & 1) != 0) {
      lVar6 = *(long *)(*param_3 + lVar6);
    }
    uVar1 = 2;
    if ((uVar4 & 2) != 0) {
      uVar1 = param_4;
    }
    (**(code **)(**(long **)(param_1 + 0x18) + 0x38))
              (*(long **)(param_1 + 0x18),param_2,(long)plVar7 + lVar6,uVar1);
    if (1 < uVar2) {
      uVar4 = param_1 + 0x38;
      do {
        uVar5 = *(ulong *)(uVar4 - 8);
        lVar6 = (long)uVar5 >> 8;
        plVar7 = param_3;
        if (*(char *)(param_2 + 0x4f) == '\0') {
          if ((uVar5 & 1) != 0) {
            lVar6 = 0;
            *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(*(long *)(uVar4 - 0x10) + 8);
            plVar7 = (long *)0x0;
          }
        }
        else if ((uVar5 & 1) != 0) {
          lVar6 = *(long *)(*param_3 + lVar6);
        }
        uVar1 = 2;
        if ((uVar5 & 2) != 0) {
          uVar1 = param_4;
        }
        (**(code **)(**(long **)(uVar4 - 0x10) + 0x38))
                  (*(long **)(uVar4 - 0x10),param_2,(long)plVar7 + lVar6,uVar1);
      } while (((*(byte *)(param_2 + 0x4e) & 1) == 0) &&
              (bVar3 = uVar4 < param_1 + (ulong)uVar2 * 0x10 + 0x18, uVar4 = uVar4 + 0x10, bVar3));
    }
  }
  return;
}


// ===== 0073ac30  FUN_0073ac30 =====

void FUN_0073ac30(long param_1,long *param_2,long *param_3,int param_4,uint param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  char *__s1;
  
  lVar7 = param_2[2];
  if ((param_5 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar7 + 8)) {
      if (*(long *)(param_1 + 8) != *(long *)(*param_2 + 8)) {
LAB_0073ad10:
        uVar8 = *(ulong *)(param_1 + 0x20);
        uVar2 = *(uint *)(param_1 + 0x14);
        lVar7 = (long)uVar8 >> 8;
        if ((uVar8 & 1) != 0) {
          lVar7 = *(long *)(*param_3 + lVar7);
        }
        iVar5 = 2;
        if ((uVar8 & 2) != 0) {
          iVar5 = param_4;
        }
        (**(code **)(**(long **)(param_1 + 0x18) + 0x30))
                  (*(long **)(param_1 + 0x18),param_2,(long)param_3 + lVar7,iVar5,param_5 & 1);
        if (uVar2 < 2) {
          return;
        }
        puVar10 = (undefined8 *)(param_1 + 0x28);
        puVar1 = (undefined8 *)(param_1 + (ulong)uVar2 * 0x10 + 0x18);
        if (((*(uint *)(param_1 + 0x10) >> 1 & 1) != 0) || (*(int *)((long)param_2 + 0x3c) == 1)) {
          do {
            if ((*(byte *)((long)param_2 + 0x4e) & 1) != 0) {
              return;
            }
            uVar8 = puVar10[1];
            lVar7 = (long)uVar8 >> 8;
            if ((uVar8 & 1) != 0) {
              lVar7 = *(long *)(*param_3 + lVar7);
            }
            puVar9 = puVar10 + 2;
            iVar5 = 2;
            if ((uVar8 & 2) != 0) {
              iVar5 = param_4;
            }
            (**(code **)(*(long *)*puVar10 + 0x30))
                      ((long *)*puVar10,param_2,(long)param_3 + lVar7,iVar5,param_5 & 1);
            puVar10 = puVar9;
          } while (puVar9 < puVar1);
          return;
        }
        if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
          while( true ) {
            if ((*(byte *)((long)param_2 + 0x4e) & 1) != 0) {
              return;
            }
            if (*(int *)((long)param_2 + 0x3c) == 1) break;
            uVar8 = puVar10[1];
            lVar7 = (long)uVar8 >> 8;
            if ((uVar8 & 1) != 0) {
              lVar7 = *(long *)(*param_3 + lVar7);
            }
            puVar9 = puVar10 + 2;
            iVar5 = 2;
            if ((uVar8 & 2) != 0) {
              iVar5 = param_4;
            }
            (**(code **)(*(long *)*puVar10 + 0x30))
                      ((long *)*puVar10,param_2,(long)param_3 + lVar7,iVar5,param_5 & 1);
            puVar10 = puVar9;
            if (puVar1 <= puVar9) {
              return;
            }
          }
          return;
        }
        while( true ) {
          if ((*(byte *)((long)param_2 + 0x4e) & 1) != 0) {
            return;
          }
          if ((*(int *)((long)param_2 + 0x3c) == 1) && ((int)param_2[6] == 1)) break;
          uVar8 = puVar10[1];
          lVar7 = (long)uVar8 >> 8;
          if ((uVar8 & 1) != 0) {
            lVar7 = *(long *)(*param_3 + lVar7);
          }
          puVar9 = puVar10 + 2;
          iVar5 = 2;
          if ((uVar8 & 2) != 0) {
            iVar5 = param_4;
          }
          (**(code **)(*(long *)*puVar10 + 0x30))
                    ((long *)*puVar10,param_2,(long)param_3 + lVar7,iVar5,param_5 & 1);
          puVar10 = puVar9;
          if (puVar1 <= puVar9) {
            return;
          }
        }
        return;
      }
LAB_0073aca4:
      if (((long *)param_2[4] == param_3) || ((long *)param_2[5] == param_3)) {
        if (param_4 != 1) {
          return;
        }
        *(undefined4 *)(param_2 + 7) = 1;
        return;
      }
      *(int *)(param_2 + 7) = param_4;
      if (*(int *)((long)param_2 + 0x44) != 4) {
        uVar2 = *(uint *)(param_1 + 0x14);
        if (uVar2 == 0) {
          *(undefined4 *)((long)param_2 + 0x44) = 4;
        }
        else {
          bVar4 = false;
          bVar3 = false;
          puVar10 = (undefined8 *)(param_1 + 0x18);
          do {
            *(undefined2 *)((long)param_2 + 0x4c) = 0;
            uVar8 = puVar10[1];
            lVar7 = (long)uVar8 >> 8;
            if ((uVar8 & 1) != 0) {
              lVar7 = *(long *)(*param_3 + lVar7);
            }
            uVar6 = 1;
            if ((uVar8 & 2) == 0) {
              uVar6 = 2;
            }
            (**(code **)(*(long *)*puVar10 + 0x28))
                      ((long *)*puVar10,param_2,param_3,(long)param_3 + lVar7,uVar6,param_5 & 1);
            if ((*(byte *)((long)param_2 + 0x4e) & 1) != 0) break;
            if (*(char *)((long)param_2 + 0x4d) != '\0') {
              if (*(char *)((long)param_2 + 0x4c) == '\0') {
                if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
                  *(undefined4 *)((long)param_2 + 0x44) = 3;
                  if (bVar4) {
                    return;
                  }
                  goto LAB_0073af78;
                }
                bVar3 = true;
              }
              else {
                if (((int)param_2[6] == 1) || ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0)) {
                  *(undefined4 *)((long)param_2 + 0x44) = 3;
                  return;
                }
                bVar3 = true;
                bVar4 = true;
              }
            }
            puVar10 = puVar10 + 2;
          } while (puVar10 < (undefined8 *)(param_1 + (ulong)uVar2 * 0x10 + 0x18));
          uVar6 = 3;
          if (!bVar3) {
            uVar6 = 4;
          }
          *(undefined4 *)((long)param_2 + 0x44) = uVar6;
          if (bVar4) {
            return;
          }
        }
      }
LAB_0073af78:
      param_2[5] = (long)param_3;
      *(int *)(param_2 + 8) = (int)param_2[8] + 1;
      if (*(int *)((long)param_2 + 0x3c) != 1) {
        return;
      }
      if ((int)param_2[6] != 2) {
        return;
      }
      *(undefined1 *)((long)param_2 + 0x4e) = 1;
      return;
    }
  }
  else if (lVar7 != param_1) {
    __s1 = *(char **)(param_1 + 8);
    iVar5 = strcmp(__s1,*(char **)(lVar7 + 8));
    if (iVar5 != 0) {
      if ((*param_2 != param_1) && (iVar5 = strcmp(__s1,*(char **)(*param_2 + 8)), iVar5 != 0))
      goto LAB_0073ad10;
      goto LAB_0073aca4;
    }
  }
  if (((long *)param_2[1] == param_3) && (*(int *)((long)param_2 + 0x34) != 1)) {
    *(int *)((long)param_2 + 0x34) = param_4;
  }
  return;
}


// ===== 0073afe0  FUN_0073afe0 =====

void FUN_0073afe0(long param_1,long *param_2,long param_3,ulong param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  char *__s1;
  
  lVar2 = param_2[2];
  if ((param_5 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar2 + 8)) {
      if (*(long *)(param_1 + 8) != *(long *)(*param_2 + 8)) {
LAB_0073b0e0:
                    /* WARNING: Could not recover jumptable at 0x0073b10c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x10) + 0x30))
                  (*(long **)(param_1 + 0x10),param_2,param_3,param_4,param_5 & 1);
        return;
      }
LAB_0073b054:
      if ((param_2[4] == param_3) || (param_2[5] == param_3)) {
        if ((int)param_4 != 1) {
          return;
        }
        *(undefined4 *)(param_2 + 7) = 1;
        return;
      }
      *(int *)(param_2 + 7) = (int)param_4;
      if (*(int *)((long)param_2 + 0x44) != 4) {
        *(undefined2 *)((long)param_2 + 0x4c) = 0;
        (**(code **)(**(long **)(param_1 + 0x10) + 0x28))
                  (*(long **)(param_1 + 0x10),param_2,param_3,param_3,1,param_5 & 1);
        if (*(char *)((long)param_2 + 0x4d) == '\0') {
          *(undefined4 *)((long)param_2 + 0x44) = 4;
        }
        else {
          *(undefined4 *)((long)param_2 + 0x44) = 3;
          if (*(char *)((long)param_2 + 0x4c) != '\0') {
            return;
          }
        }
      }
      param_2[5] = param_3;
      *(int *)(param_2 + 8) = (int)param_2[8] + 1;
      if (*(int *)((long)param_2 + 0x3c) != 1) {
        return;
      }
      if ((int)param_2[6] != 2) {
        return;
      }
      *(undefined1 *)((long)param_2 + 0x4e) = 1;
      return;
    }
  }
  else if (lVar2 != param_1) {
    __s1 = *(char **)(param_1 + 8);
    param_4 = param_4 & 0xffffffff;
    iVar1 = strcmp(__s1,*(char **)(lVar2 + 8));
    if (iVar1 != 0) {
      if ((*param_2 != param_1) && (iVar1 = strcmp(__s1,*(char **)(*param_2 + 8)), iVar1 != 0))
      goto LAB_0073b0e0;
      goto LAB_0073b054;
    }
  }
  if ((param_2[1] == param_3) && (*(int *)((long)param_2 + 0x34) != 1)) {
    *(int *)((long)param_2 + 0x34) = (int)param_4;
  }
  return;
}


// ===== 0073b190  FUN_0073b190 =====

void FUN_0073b190(long param_1,long *param_2,long param_3,int param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  char *__s1;
  
  lVar2 = param_2[2];
  if ((param_5 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar2 + 8)) {
      if (*(long *)(param_1 + 8) != *(long *)(*param_2 + 8)) {
        return;
      }
LAB_0073b21c:
      if ((param_2[4] != param_3) && (param_2[5] != param_3)) {
        *(int *)(param_2 + 7) = param_4;
        param_2[5] = param_3;
        *(int *)(param_2 + 8) = (int)param_2[8] + 1;
        if ((*(int *)((long)param_2 + 0x3c) == 1) && ((int)param_2[6] == 2)) {
          *(undefined1 *)((long)param_2 + 0x4e) = 1;
        }
        *(undefined4 *)((long)param_2 + 0x44) = 4;
        return;
      }
      if (param_4 != 1) {
        return;
      }
      *(undefined4 *)(param_2 + 7) = 1;
      return;
    }
  }
  else if (lVar2 != param_1) {
    __s1 = *(char **)(param_1 + 8);
    iVar1 = strcmp(__s1,*(char **)(lVar2 + 8));
    if (iVar1 != 0) {
      if ((*param_2 != param_1) && (iVar1 = strcmp(__s1,*(char **)(*param_2 + 8)), iVar1 != 0)) {
        return;
      }
      goto LAB_0073b21c;
    }
  }
  if ((param_2[1] == param_3) && (*(int *)((long)param_2 + 0x34) != 1)) {
    *(int *)((long)param_2 + 0x34) = param_4;
  }
  return;
}


// ===== 0073b2b8  FUN_0073b2b8 =====

void FUN_0073b2b8(long param_1,long param_2,long param_3,long *param_4,int param_5,uint param_6)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte bVar9;
  byte bVar10;
  
  lVar5 = *(long *)(param_2 + 0x10);
  if ((param_6 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar5 + 8)) goto LAB_0073b358;
  }
  else if ((lVar5 != param_1) &&
          (iVar4 = strcmp(*(char **)(param_1 + 8),*(char **)(lVar5 + 8)), iVar4 != 0)) {
LAB_0073b358:
    bVar10 = *(byte *)(param_2 + 0x4c);
    bVar9 = *(byte *)(param_2 + 0x4d);
    uVar1 = *(uint *)(param_1 + 0x14);
    *(undefined2 *)(param_2 + 0x4c) = 0;
    uVar6 = *(ulong *)(param_1 + 0x20);
    lVar5 = (long)uVar6 >> 8;
    if ((uVar6 & 1) != 0) {
      lVar5 = *(long *)(*param_4 + lVar5);
    }
    iVar4 = 2;
    if ((uVar6 & 2) != 0) {
      iVar4 = param_5;
    }
    (**(code **)(**(long **)(param_1 + 0x18) + 0x28))
              (*(long **)(param_1 + 0x18),param_2,param_3,(long)param_4 + lVar5,iVar4,param_6 & 1);
    bVar2 = *(byte *)(param_2 + 0x4c);
    bVar3 = *(byte *)(param_2 + 0x4d);
    bVar10 = bVar2 | bVar10;
    bVar9 = bVar3 | bVar9;
    if (1 < uVar1) {
      puVar8 = (undefined8 *)(param_1 + 0x28);
      do {
        if ((*(byte *)(param_2 + 0x4e) & 1) != 0) break;
        if (bVar2 == 0) {
          if (bVar3 != 0) {
            bVar2 = *(byte *)(param_1 + 0x10);
            goto joined_r0x0073b450;
          }
        }
        else {
          if (*(int *)(param_2 + 0x30) == 1) break;
          bVar2 = *(byte *)(param_1 + 0x10) >> 1;
joined_r0x0073b450:
          if ((bVar2 & 1) == 0) break;
        }
        *(undefined2 *)(param_2 + 0x4c) = 0;
        uVar6 = puVar8[1];
        lVar5 = (long)uVar6 >> 8;
        if ((uVar6 & 1) != 0) {
          lVar5 = *(long *)(*param_4 + lVar5);
        }
        puVar7 = puVar8 + 2;
        iVar4 = 2;
        if ((uVar6 & 2) != 0) {
          iVar4 = param_5;
        }
        (**(code **)(*(long *)*puVar8 + 0x28))
                  ((long *)*puVar8,param_2,param_3,(long)param_4 + lVar5,iVar4,param_6 & 1);
        bVar2 = *(byte *)(param_2 + 0x4c);
        bVar3 = *(byte *)(param_2 + 0x4d);
        bVar10 = bVar2 | bVar10 & 1;
        bVar9 = bVar3 | bVar9 & 1;
        puVar8 = puVar7;
      } while (puVar7 < (undefined8 *)(param_1 + (ulong)uVar1 * 0x10 + 0x18));
    }
    *(byte *)(param_2 + 0x4c) = bVar10 & 1;
    *(byte *)(param_2 + 0x4d) = bVar9 & 1;
    return;
  }
  *(undefined1 *)(param_2 + 0x4d) = 1;
  if (*(long **)(param_2 + 8) != param_4) {
    return;
  }
  *(undefined1 *)(param_2 + 0x4c) = 1;
  if (*(long *)(param_2 + 0x20) == 0) {
    *(long *)(param_2 + 0x20) = param_3;
    *(int *)(param_2 + 0x30) = param_5;
    *(undefined4 *)(param_2 + 0x3c) = 1;
    if (param_5 != 1) {
      return;
    }
  }
  else {
    if (*(long *)(param_2 + 0x20) != param_3) {
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      goto LAB_0073b4c4;
    }
    iVar4 = *(int *)(param_2 + 0x30);
    if (*(int *)(param_2 + 0x30) == 2) {
      *(int *)(param_2 + 0x30) = param_5;
      iVar4 = param_5;
    }
    if (iVar4 != 1) {
      return;
    }
  }
  if (*(int *)(param_2 + 0x48) != 1) {
    return;
  }
LAB_0073b4c4:
  *(undefined1 *)(param_2 + 0x4e) = 1;
  return;
}


// ===== 0073b4ec  FUN_0073b4ec =====

void FUN_0073b4ec(long param_1,long param_2,long param_3,long param_4,int param_5,ulong param_6)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x10);
  if ((param_6 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar2 + 8)) goto LAB_0073b5a8;
  }
  else if ((lVar2 != param_1) &&
          (iVar1 = strcmp(*(char **)(param_1 + 8),*(char **)(lVar2 + 8)), iVar1 != 0)) {
LAB_0073b5a8:
                    /* WARNING: Could not recover jumptable at 0x0073b5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
    return;
  }
  *(undefined1 *)(param_2 + 0x4d) = 1;
  if (*(long *)(param_2 + 8) != param_4) {
    return;
  }
  *(undefined1 *)(param_2 + 0x4c) = 1;
  if (*(long *)(param_2 + 0x20) == 0) {
    *(long *)(param_2 + 0x20) = param_3;
    *(int *)(param_2 + 0x30) = param_5;
    *(undefined4 *)(param_2 + 0x3c) = 1;
    if (param_5 != 1) {
      return;
    }
  }
  else {
    if (*(long *)(param_2 + 0x20) != param_3) {
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      goto LAB_0073b610;
    }
    iVar1 = *(int *)(param_2 + 0x30);
    if (*(int *)(param_2 + 0x30) == 2) {
      *(int *)(param_2 + 0x30) = param_5;
      iVar1 = param_5;
    }
    if (iVar1 != 1) {
      return;
    }
  }
  if (*(int *)(param_2 + 0x48) != 1) {
    return;
  }
LAB_0073b610:
  *(undefined1 *)(param_2 + 0x4e) = 1;
  return;
}


// ===== 0073b630  FUN_0073b630 =====

void FUN_0073b630(long param_1,long param_2,long param_3,long param_4,int param_5,uint param_6)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x10);
  if ((param_6 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar2 + 8)) {
      return;
    }
  }
  else if ((lVar2 != param_1) &&
          (iVar1 = strcmp(*(char **)(param_1 + 8),*(char **)(lVar2 + 8)), iVar1 != 0)) {
    return;
  }
  *(undefined1 *)(param_2 + 0x4d) = 1;
  if (*(long *)(param_2 + 8) == param_4) {
    *(undefined1 *)(param_2 + 0x4c) = 1;
    if (*(long *)(param_2 + 0x20) == 0) {
      *(long *)(param_2 + 0x20) = param_3;
      *(int *)(param_2 + 0x30) = param_5;
      *(undefined4 *)(param_2 + 0x3c) = 1;
      if (param_5 != 1) {
        return;
      }
    }
    else {
      if (*(long *)(param_2 + 0x20) != param_3) {
        *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
        goto LAB_0073b728;
      }
      iVar1 = *(int *)(param_2 + 0x30);
      if (*(int *)(param_2 + 0x30) == 2) {
        *(int *)(param_2 + 0x30) = param_5;
        iVar1 = param_5;
      }
      if (iVar1 != 1) {
        return;
      }
    }
    if (*(int *)(param_2 + 0x48) == 1) {
LAB_0073b728:
      *(undefined1 *)(param_2 + 0x4e) = 1;
      return;
    }
  }
  return;
}


// ===== 0073b734  FUN_0073b734 =====

long * FUN_0073b734(byte *param_1,long *param_2,ulong *param_3,undefined4 *param_4)

{
  byte bVar1;
  long *plVar2;
  bool bVar3;
  size_t sVar4;
  long *plVar5;
  long *plVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  long *local_13d8;
  ulong local_13d0;
  size_t local_13c8;
  undefined8 local_13c0;
  undefined4 local_13b8;
  byte *local_13b0;
  byte *local_13a8;
  undefined8 *local_13a0;
  undefined8 *puStack_1398;
  undefined8 **local_1390;
  undefined8 local_1388;
  undefined8 uStack_1380;
  undefined8 local_1378;
  undefined8 uStack_1370;
  undefined8 local_1368;
  undefined8 uStack_1360;
  undefined8 local_1358;
  undefined8 uStack_1350;
  undefined8 local_1348;
  undefined8 uStack_1340;
  undefined8 local_1338;
  undefined8 uStack_1330;
  undefined8 local_1328;
  undefined8 uStack_1320;
  undefined8 local_1318;
  undefined8 uStack_1310;
  undefined8 local_1308;
  undefined8 uStack_1300;
  undefined8 local_12f8;
  undefined8 uStack_12f0;
  undefined8 local_12e8;
  undefined8 uStack_12e0;
  undefined8 local_12d8;
  undefined8 uStack_12d0;
  undefined8 local_12c8;
  undefined8 uStack_12c0;
  undefined8 local_12b8;
  undefined8 uStack_12b0;
  undefined8 local_12a8;
  undefined8 uStack_12a0;
  undefined8 uStack_1298;
  undefined8 uStack_1290;
  undefined8 *local_1288;
  undefined8 *puStack_1280;
  undefined8 **local_1278;
  undefined8 local_1270;
  undefined8 uStack_1268;
  undefined8 uStack_1260;
  undefined8 uStack_1258;
  undefined8 local_1250;
  undefined8 uStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined8 local_1230;
  undefined8 uStack_1228;
  undefined8 uStack_1220;
  undefined8 uStack_1218;
  undefined8 local_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined8 local_11f0;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 local_11d0;
  undefined8 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined8 local_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  undefined8 local_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined8 *local_1170;
  undefined8 *local_1168;
  undefined8 **local_1160;
  undefined8 local_1158;
  undefined8 uStack_1150;
  undefined8 uStack_1148;
  undefined8 uStack_1140;
  undefined8 local_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined8 uStack_1120;
  undefined8 *local_1118;
  undefined8 *local_1110;
  undefined8 **local_1108;
  undefined8 local_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined8 *local_10e0;
  undefined8 *local_10d8;
  undefined2 *local_10d0;
  undefined8 local_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined8 uStack_10b0;
  undefined2 local_10a8;
  undefined1 local_10a6;
  undefined8 local_10a0;
  undefined8 local_1098;
  undefined4 local_1090;
  long local_1080;
  undefined8 uStack_1078;
  long *local_80;
  
  if ((param_1 == (byte *)0x0) || ((param_2 != (long *)0x0 && (param_3 == (ulong *)0x0)))) {
    if (param_4 == (undefined4 *)0x0) {
      return (long *)0x0;
    }
    *param_4 = 0xfffffffd;
    return (long *)0x0;
  }
  sVar4 = strlen((char *)param_1);
  local_13a8 = param_1 + sVar4;
  local_1390 = &local_1288;
  local_1278 = &local_1170;
  local_1160 = &local_1118;
  local_1108 = &local_10e0;
  local_10d0 = &local_10a8;
  local_10a8 = 1;
  uStack_12a0 = 0;
  local_12a8 = 0;
  uStack_1290 = 0;
  uStack_1298 = 0;
  uStack_1380 = 0;
  local_1388 = 0;
  uStack_1370 = 0;
  local_1378 = 0;
  uStack_1360 = 0;
  local_1368 = 0;
  uStack_1350 = 0;
  local_1358 = 0;
  uStack_1340 = 0;
  local_1348 = 0;
  uStack_1330 = 0;
  local_1338 = 0;
  uStack_1320 = 0;
  local_1328 = 0;
  uStack_1310 = 0;
  local_1318 = 0;
  uStack_1300 = 0;
  local_1308 = 0;
  uStack_12f0 = 0;
  local_12f8 = 0;
  uStack_12e0 = 0;
  local_12e8 = 0;
  uStack_12d0 = 0;
  local_12d8 = 0;
  uStack_12c0 = 0;
  local_12c8 = 0;
  uStack_12b0 = 0;
  local_12b8 = 0;
  uStack_1268 = 0;
  local_1270 = 0;
  uStack_1258 = 0;
  uStack_1260 = 0;
  uStack_1248 = 0;
  local_1250 = 0;
  uStack_1238 = 0;
  uStack_1240 = 0;
  uStack_1228 = 0;
  local_1230 = 0;
  uStack_1218 = 0;
  uStack_1220 = 0;
  uStack_1208 = 0;
  local_1210 = 0;
  uStack_11f8 = 0;
  uStack_1200 = 0;
  uStack_11e8 = 0;
  local_11f0 = 0;
  uStack_11d8 = 0;
  uStack_11e0 = 0;
  uStack_11c8 = 0;
  local_11d0 = 0;
  uStack_11b8 = 0;
  uStack_11c0 = 0;
  uStack_11a8 = 0;
  local_11b0 = 0;
  uStack_1198 = 0;
  uStack_11a0 = 0;
  uStack_1188 = 0;
  local_1190 = 0;
  uStack_1178 = 0;
  uStack_1180 = 0;
  uStack_1150 = 0;
  local_1158 = 0;
  uStack_1140 = 0;
  uStack_1148 = 0;
  uStack_1130 = 0;
  local_1138 = 0;
  uStack_1120 = 0;
  uStack_1128 = 0;
  uStack_10f8 = 0;
  local_1100 = 0;
  uStack_10e8 = 0;
  uStack_10f0 = 0;
  uStack_10c0 = 0;
  local_10c8 = 0;
  uStack_10b0 = 0;
  uStack_10b8 = 0;
  local_10a6 = 0;
  local_10a0 = 0xffffffffffffffff;
  local_1090 = 0;
  local_1098 = 0;
  uStack_1078 = 0;
  local_1080 = 0;
  local_13a0 = &local_1388;
  puStack_1398 = &local_1388;
  local_1288 = &local_1270;
  puStack_1280 = &local_1270;
  local_1170 = &local_1158;
  local_1168 = &local_1158;
  local_1118 = &local_1100;
  local_1110 = &local_1100;
  local_10e0 = &local_10c8;
  local_10d8 = &local_10c8;
  local_80 = &local_1080;
  if (sVar4 < 2) {
LAB_0073b918:
                    /* try { // try from 0073b918 to 0073bacf has its CatchHandler @ 0073bce8 */
    local_13b0 = param_1;
    plVar5 = (long *)FUN_0073c980(&local_13b0);
    if (local_13a8 == local_13b0) {
LAB_0073bbe4:
      if (plVar5 != (long *)0x0) goto LAB_0073bbe8;
    }
LAB_0073b92c:
    plVar5 = (long *)0x0;
    uVar7 = 0xfffffffe;
  }
  else {
    if (*(short *)param_1 != 0x5a5f) {
      if (sVar4 == 2) goto LAB_0073b918;
      if (*(short *)param_1 == 0x5f5f && param_1[2] == 0x5a) {
        lVar9 = 3;
        goto LAB_0073b9fc;
      }
      if (sVar4 < 4) goto LAB_0073b918;
      if (*(int *)param_1 == 0x5a5f5f5f) {
        lVar9 = 4;
      }
      else {
        if ((sVar4 == 4) || (*(int *)param_1 != 0x5f5f5f5f || param_1[4] != 0x5a))
        goto LAB_0073b918;
        lVar9 = 5;
      }
      local_13b0 = param_1 + lVar9;
      plVar5 = (long *)FUN_0073be2c(&local_13b0);
      local_13d8 = plVar5;
      if (plVar5 != (long *)0x0) {
        if (((ulong)((long)local_13a8 - (long)local_13b0) < 0xd) ||
           (*(long *)local_13b0 != 0x695f6b636f6c625f ||
            *(long *)(local_13b0 + 5) != 0x656b6f766e695f6b)) goto LAB_0073b92c;
        pbVar10 = local_13b0 + 0xd;
        if (pbVar10 != local_13a8) {
          bVar1 = *pbVar10;
          if (bVar1 == 0x5f) {
            pbVar10 = local_13b0 + 0xe;
          }
          local_13b0 = pbVar10;
          if (local_13a8 == pbVar10) {
            bVar3 = true;
            pbVar11 = local_13a8;
          }
          else if (*pbVar10 - 0x3a < 0xfffffff6) {
            bVar3 = true;
            pbVar11 = pbVar10;
          }
          else {
            do {
              pbVar11 = local_13b0;
              if (*local_13b0 - 0x3a < 0xfffffff6) break;
              local_13b0 = local_13b0 + 1;
              pbVar11 = local_13a8;
            } while (local_13b0 != local_13a8);
            bVar3 = pbVar11 == pbVar10;
          }
          if ((bVar1 == 0x5f) && (bVar3)) goto LAB_0073b92c;
          pbVar10 = local_13b0;
          if (local_13a8 != pbVar11) {
            if (*pbVar11 != 0x2e) goto LAB_0073b92c;
            local_13b0 = local_13a8;
            pbVar10 = local_13b0;
          }
        }
        local_13b0 = pbVar10;
        plVar5 = (long *)FUN_0073c8cc(&local_13b0,"invocation function for block in ",&local_13d8);
      }
      goto LAB_0073bbe4;
    }
    lVar9 = 2;
LAB_0073b9fc:
    local_13b0 = param_1 + lVar9;
    plVar6 = (long *)FUN_0073be2c(&local_13b0);
    plVar2 = local_80;
    pbVar10 = local_13b0;
    if (plVar6 == (long *)0x0) goto LAB_0073b92c;
    lVar9 = (long)local_13a8 - (long)local_13b0;
    plVar5 = plVar6;
    if (lVar9 != 0) {
      if (*local_13b0 != 0x2e) goto LAB_0073b92c;
      lVar8 = local_80[1];
      if (lVar8 - 0xfc0U < 0xfffffffffffff010) {
        plVar5 = (long *)malloc(0x1000);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00739f00();
        }
        lVar8 = 0;
        *plVar5 = (long)plVar2;
        plVar5[1] = 0;
        local_80 = plVar5;
      }
      local_80[1] = lVar8 + 0x30;
      plVar5 = (long *)((long)local_80 + lVar8 + 0x10);
      *plVar5 = (long)&PTR_FUN_007a0400;
      *(long **)((long)local_80 + lVar8 + 0x20) = plVar6;
      *(byte **)((long)local_80 + lVar8 + 0x28) = pbVar10;
      *(undefined1 *)((long)local_80 + lVar8 + 0x18) = 1;
      *(long *)((long)local_80 + lVar8 + 0x30) = lVar9;
      *(ushort *)((long)local_80 + lVar8 + 0x19) =
           *(ushort *)((long)local_80 + lVar8 + 0x19) & 0xf000 | 0x540;
      local_13b0 = local_13a8;
    }
LAB_0073bbe8:
    if (param_2 == (long *)0x0) {
      local_13c8 = 0;
    }
    else {
      local_13c8 = *param_3;
    }
    local_13d0 = 0;
    local_13b8 = 1;
    local_13c0 = 0xffffffffffffffff;
    local_13d8 = param_2;
    if (local_10e0 != local_10d8) {
                    /* try { // try from 0073bcb8 to 0073bcd7 has its CatchHandler @ 0073bce0 */
                    /* WARNING: Subroutine does not return */
      FUN_0073a468("%s:%d: %s","out/llvm-project/libcxxabi/src/cxa_demangle.cpp",400,&DAT_001c717f);
    }
                    /* try { // try from 0073bc28 to 0073bc57 has its CatchHandler @ 0073bce4 */
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_13d8);
    if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar5 + 0x28))(plVar5,&local_13d8);
    }
    uVar12 = local_13d0 + 1;
    if (local_13c8 < uVar12) {
      local_13c8 = local_13c8 * 2;
      uVar12 = local_13d0 + 0x3e1;
      if (local_13c8 < uVar12 || local_13c8 - uVar12 == 0) {
        local_13c8 = uVar12;
      }
      local_13d8 = (long *)realloc(local_13d8,local_13c8);
      if (local_13d8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar12 = local_13d0 + 1;
    }
    *(undefined1 *)((long)local_13d8 + local_13d0) = 0;
    if (param_3 != (ulong *)0x0) {
      *param_3 = uVar12;
    }
    uVar7 = 0;
    local_13d0 = uVar12;
    plVar5 = local_13d8;
  }
  plVar2 = local_80;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar7;
  }
  while (local_80 = plVar2, local_80 != (long *)0x0) {
    while (plVar2 = (long *)*local_80, local_80 != &local_1080) {
      plVar2 = local_80;
      local_80 = (long *)*local_80;
      free(plVar2);
      if (local_80 == (long *)0x0) goto LAB_0073b96c;
    }
  }
LAB_0073b96c:
  local_1080 = 0;
  uStack_1078 = 0;
  local_80 = &local_1080;
  if (local_10e0 != &local_10c8) {
    free(local_10e0);
  }
  if (local_1118 != &local_1100) {
    free(local_1118);
  }
  if (local_1170 != &local_1158) {
    free(local_1170);
  }
  if (local_1288 != &local_1270) {
    free(local_1288);
  }
  if (local_13a0 != &local_1388) {
    free(local_13a0);
  }
  return plVar5;
}


// ===== 0073bcfc  FUN_0073bcfc =====

void FUN_0073bcfc(long param_1)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)(param_1 + 0x330);
  __ptr = *(undefined8 **)(param_1 + 0x1330);
  while (__ptr != (undefined8 *)0x0) {
    while( true ) {
      puVar2 = (undefined8 *)*__ptr;
      *(undefined8 **)(param_1 + 0x1330) = puVar2;
      if (__ptr != puVar1) break;
      __ptr = puVar2;
      if (puVar2 == (undefined8 *)0x0) goto LAB_0073bd44;
    }
    free(__ptr);
    __ptr = *(undefined8 **)(param_1 + 0x1330);
  }
LAB_0073bd44:
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 **)(param_1 + 0x1330) = puVar1;
  if (*(void **)(param_1 + 0x2d0) != (void *)(param_1 + 0x2e8)) {
    free(*(void **)(param_1 + 0x2d0));
  }
  if (*(void **)(param_1 + 0x298) != (void *)(param_1 + 0x2b0)) {
    free(*(void **)(param_1 + 0x298));
  }
  if (*(void **)(param_1 + 0x240) != (void *)(param_1 + 600)) {
    free(*(void **)(param_1 + 0x240));
  }
  if (*(void **)(param_1 + 0x128) != (void *)(param_1 + 0x140)) {
    free(*(void **)(param_1 + 0x128));
  }
  if (*(void **)(param_1 + 0x10) != (void *)(param_1 + 0x28)) {
    free(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 0073bdcc  FUN_0073bdcc =====

undefined8 FUN_0073bdcc(long *param_1,void *param_2,size_t param_3)

{
  void *__s1;
  int iVar1;
  undefined8 uVar2;
  
  __s1 = (void *)*param_1;
  if (((ulong)(param_1[1] - (long)__s1) < param_3) ||
     (iVar1 = memcmp(__s1,param_2,param_3), iVar1 != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    *param_1 = (long)__s1 + param_3;
  }
  return uVar2;
}


// ===== 0073be2c  FUN_0073be2c =====

undefined8 * FUN_0073be2c(long *param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  long extraout_x1;
  long lVar16;
  long lVar17;
  byte *pbVar18;
  char *pcVar19;
  char *pcVar20;
  byte *pbVar21;
  ushort uVar22;
  byte bVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  long lVar26;
  long *plVar27;
  ulong uVar28;
  ulong uVar29;
  void *pvVar30;
  size_t sVar31;
  long *plVar32;
  undefined1 auVar33 [16];
  long local_150;
  long local_148;
  undefined1 local_140 [16];
  undefined8 local_130;
  undefined8 *local_128;
  undefined8 local_120;
  undefined1 local_118 [8];
  ulong local_110;
  char local_108;
  undefined1 auStack_100 [160];
  
  FUN_0073dd18(auStack_100,param_1);
  auVar8._8_8_ = local_140._8_8_;
  auVar8._0_8_ = local_140._0_8_;
  auVar33._8_8_ = local_140._8_8_;
  auVar33._0_8_ = local_140._0_8_;
  pcVar19 = (char *)*param_1;
  pcVar20 = (char *)param_1[1];
  if (pcVar20 == pcVar19) {
LAB_0073bef4:
    local_120 = (local_120 >> 0x10 & 0xffff) << 0x10;
    local_110 = param_1[0x5b] - param_1[0x5a] >> 3;
    local_118[0] = 0;
    local_108 = '\0';
                    /* try { // try from 0073bf1c to 0073bf27 has its CatchHandler @ 0073c82c */
    puVar13 = (undefined8 *)FUN_0073dec0(param_1,&local_120);
    auVar33._8_8_ = local_140._8_8_;
    auVar33._0_8_ = local_140._0_8_;
    auVar4._8_8_ = local_140._8_8_;
    auVar4._0_8_ = local_140._0_8_;
    local_128 = puVar13;
    if (puVar13 == (undefined8 *)0x0) goto LAB_0073c778;
    lVar16 = param_1[0x5a];
    uVar12 = param_1[0x5b] - lVar16 >> 3;
    if (local_110 < uVar12) {
      puVar24 = (undefined8 *)param_1[0x53];
      if ((puVar24 != (undefined8 *)param_1[0x54]) &&
         (plVar27 = (long *)*puVar24, plVar27 != (long *)0x0)) {
        lVar26 = *(long *)(lVar16 + local_110 * 8);
        lVar17 = *plVar27;
        uVar28 = *(ulong *)(lVar26 + 0x10);
        uVar29 = local_110;
        if (uVar28 < (ulong)(plVar27[1] - lVar17 >> 3)) {
          do {
            uVar29 = uVar29 + 1;
            *(undefined8 *)(lVar26 + 0x18) = *(undefined8 *)(lVar17 + uVar28 * 8);
            if (uVar12 == uVar29) goto LAB_0073c080;
            plVar27 = (long *)*puVar24;
            if (plVar27 == (long *)0x0) break;
            lVar26 = *(long *)(lVar16 + uVar29 * 8);
            lVar17 = *plVar27;
            uVar28 = *(ulong *)(lVar26 + 0x10);
          } while (uVar28 < (ulong)(plVar27[1] - lVar17 >> 3));
          if (uVar12 <= uVar29) goto LAB_0073c088;
        }
      }
    }
    else {
      if (uVar12 < local_110) {
                    /* try { // try from 0073c7d4 to 0073c7f3 has its CatchHandler @ 0073c82c */
                    /* WARNING: Subroutine does not return */
        FUN_0073a468("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x87,
                     "shrinkToSize() can\'t expand!");
      }
LAB_0073c080:
      param_1[0x5b] = lVar16 + local_110 * 8;
LAB_0073c088:
      pbVar18 = (byte *)*param_1;
      pbVar21 = (byte *)param_1[1];
      local_140 = auVar4;
      if ((pbVar21 == pbVar18) ||
         ((local_140 = auVar33, *pbVar18 - 0x2e < 0x32 &&
          ((1L << ((ulong)(*pbVar18 - 0x2e) & 0x3f) & 0x2000000800001U) != 0)))) goto LAB_0073c778;
      local_130 = 0;
      if (((ulong)((long)pbVar21 - (long)pbVar18) < 0xd) ||
         (*(long *)pbVar18 != 0x6c62616e65396155 || *(long *)(pbVar18 + 5) != 0x4966695f656c6261)) {
LAB_0073c100:
        local_148 = 0;
        if (((local_120 & 1) == 0) && (local_120._1_1_ != '\0')) {
                    /* try { // try from 0073c114 to 0073c11b has its CatchHandler @ 0073c81c */
          local_148 = FUN_0073c980(param_1);
          auVar33 = local_140;
          if (local_148 == 0) goto LAB_0073c774;
        }
        pcVar19 = (char *)*param_1;
        pcVar20 = (char *)param_1[1];
        local_140._0_8_ = 0;
        local_140._8_8_ = 0;
        auVar33 = ZEXT816(0);
        if ((pcVar19 == pcVar20) || (*pcVar19 != 'v')) {
          lVar16 = param_1[2];
          lVar17 = param_1[3];
          plVar27 = param_1 + 5;
          do {
                    /* try { // try from 0073c424 to 0073c42b has its CatchHandler @ 0073c820 */
            puVar13 = (undefined8 *)FUN_0073c980(param_1);
            auVar33._8_8_ = local_140._8_8_;
            auVar33._0_8_ = local_140._0_8_;
            if (puVar13 == (undefined8 *)0x0) goto LAB_0073c774;
            plVar32 = (long *)param_1[3];
            puVar24 = puVar13;
            if ((local_108 != '\0') && (lVar17 - lVar16 == (long)plVar32 - param_1[2])) {
              pvVar30 = (void *)param_1[0x266];
              lVar26 = *(long *)((long)pvVar30 + 8);
              puVar14 = (undefined8 *)pvVar30;
              if (lVar26 - 0xfd0U < 0xfffffffffffff010) {
                puVar14 = (undefined8 *)malloc(0x1000);
                if (puVar14 == (undefined8 *)0x0) goto LAB_0073c7f4;
                lVar26 = 0;
                *puVar14 = pvVar30;
                puVar14[1] = 0;
                param_1[0x266] = (long)puVar14;
              }
              *(long *)((long)puVar14 + 8) = lVar26 + 0x20;
              puVar24 = (undefined8 *)((long)puVar14 + lVar26 + 0x10);
              *puVar24 = &PTR_FUN_007a0320;
              *(undefined1 *)((long)puVar14 + lVar26 + 0x18) = 0x57;
              *(undefined8 **)((long)puVar14 + lVar26 + 0x20) = puVar13;
              *(ushort *)((long)puVar14 + lVar26 + 0x19) =
                   *(ushort *)((long)puVar14 + lVar26 + 0x19) & 0xf000 | 0x540;
              plVar32 = (long *)param_1[3];
            }
            if (plVar32 == (long *)param_1[4]) {
              plVar15 = (long *)param_1[2];
              sVar31 = (long)plVar32 - (long)plVar15;
              if (plVar15 == plVar27) {
                pvVar30 = malloc(sVar31 * 2);
                if (pvVar30 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                if (plVar32 != plVar27) {
                  memcpy(pvVar30,plVar27,sVar31);
                }
                param_1[2] = (long)pvVar30;
              }
              else {
                pvVar30 = realloc(plVar15,sVar31 * 2);
                param_1[2] = (long)pvVar30;
                if (pvVar30 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
              }
              plVar32 = (long *)((long)pvVar30 + sVar31);
              param_1[3] = (long)plVar32;
              param_1[4] = (long)((long)pvVar30 + ((long)sVar31 >> 2) * 8);
            }
            param_1[3] = (long)(plVar32 + 1);
            *plVar32 = (long)puVar24;
          } while (((byte *)param_1[1] != (byte *)*param_1) &&
                  ((uVar3 = *(byte *)*param_1 - 0x2e, 0x31 < uVar3 ||
                   ((1L << ((ulong)uVar3 & 0x3f) & 0x2000800800001U) == 0))));
                    /* try { // try from 0073c55c to 0073c567 has its CatchHandler @ 0073c818 */
          auVar33 = FUN_0073ea94(param_1,lVar17 - lVar16 >> 3);
          pcVar19 = (char *)*param_1;
          pcVar20 = (char *)param_1[1];
        }
        else {
          pcVar19 = pcVar19 + 1;
          *param_1 = (long)pcVar19;
        }
        local_150 = 0;
        local_140 = auVar33;
        if ((pcVar19 != pcVar20) && (*pcVar19 == 'Q')) {
          uVar2 = *(undefined1 *)((long)param_1 + 0x30a);
          *param_1 = (long)(pcVar19 + 1);
          *(undefined1 *)((long)param_1 + 0x30a) = 1;
                    /* try { // try from 0073c59c to 0073c5a3 has its CatchHandler @ 0073c80c */
          local_150 = FUN_00741a30(param_1);
          *(undefined1 *)((long)param_1 + 0x30a) = uVar2;
          auVar33 = local_140;
          if (local_150 == 0) goto LAB_0073c774;
        }
        puVar13 = (undefined8 *)
                  FUN_0073ebf0(param_1,&local_148,&local_128,local_140,&local_130,&local_150,
                               (ulong)&local_120 | 4,local_118);
        goto LAB_0073c778;
      }
      lVar16 = param_1[2];
      lVar17 = param_1[3];
      pbVar18 = pbVar18 + 0xd;
      plVar27 = param_1 + 5;
      *param_1 = (long)pbVar18;
      while( true ) {
        if ((pbVar18 != pbVar21) && (*pbVar18 == 0x45)) {
          *param_1 = (long)(pbVar18 + 1);
                    /* try { // try from 0073c7b0 to 0073c7bb has its CatchHandler @ 0073c808 */
          local_140 = FUN_0073ea94(param_1,lVar17 - lVar16 >> 3);
          local_130 = FUN_0073e9f4(param_1,local_140);
          goto LAB_0073c100;
        }
                    /* try { // try from 0073c714 to 0073c71b has its CatchHandler @ 0073c824 */
        lVar26 = FUN_0073e5f4(param_1);
        auVar33._8_8_ = local_140._8_8_;
        auVar33._0_8_ = local_140._0_8_;
        if (lVar26 == 0) break;
        plVar32 = (long *)param_1[3];
        if (plVar32 == (long *)param_1[4]) {
          plVar15 = (long *)param_1[2];
          sVar31 = (long)plVar32 - (long)plVar15;
          if (plVar15 == plVar27) {
            pvVar30 = malloc(sVar31 * 2);
            if (pvVar30 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (plVar32 != plVar27) {
              memcpy(pvVar30,plVar27,sVar31);
            }
            param_1[2] = (long)pvVar30;
          }
          else {
            pvVar30 = realloc(plVar15,sVar31 * 2);
            param_1[2] = (long)pvVar30;
            if (pvVar30 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          plVar32 = (long *)((long)pvVar30 + sVar31);
          param_1[3] = (long)plVar32;
          param_1[4] = (long)((long)pvVar30 + ((long)sVar31 >> 2) * 8);
        }
        param_1[3] = (long)(plVar32 + 1);
        *plVar32 = lVar26;
        pbVar18 = (byte *)*param_1;
        pbVar21 = (byte *)param_1[1];
      }
    }
  }
  else if (*pcVar19 == 'G') {
    if (1 < (ulong)((long)pcVar20 - (long)pcVar19)) {
      cVar1 = pcVar19[1];
      if (cVar1 == 'I') {
        *param_1 = (long)(pcVar19 + 2);
        local_120 = 0;
        uVar29 = FUN_0073f7f8(param_1,&local_120);
        uVar12 = local_120;
        auVar5._8_8_ = local_140._8_8_;
        auVar5._0_8_ = local_140._0_8_;
        puVar13 = (undefined8 *)0x0;
        if (((uVar29 & 1) != 0) || (local_140 = auVar5, local_120 == 0)) goto LAB_0073c778;
        pvVar30 = (void *)param_1[0x266];
        lVar16 = *(long *)((long)pvVar30 + 8);
        puVar24 = (undefined8 *)pvVar30;
        if (lVar16 - 0xfc0U < 0xfffffffffffff010) {
          puVar24 = (undefined8 *)malloc(0x1000);
          if (puVar24 == (undefined8 *)0x0) {
LAB_0073c7f4:
                    /* WARNING: Subroutine does not return */
            FUN_00739f00();
          }
          lVar16 = 0;
          *puVar24 = pvVar30;
          puVar24[1] = 0;
          param_1[0x266] = (long)puVar24;
        }
        *(long *)((long)puVar24 + 8) = lVar16 + 0x30;
        puVar13 = (undefined8 *)((long)puVar24 + lVar16 + 0x10);
        *puVar13 = &PTR_FUN_0079e170;
        uVar22 = *(ushort *)((long)puVar24 + lVar16 + 0x19);
        uVar25 = 0x17;
        *(ulong *)((long)puVar24 + lVar16 + 0x30) = uVar12;
        *(undefined1 *)((long)puVar24 + lVar16 + 0x18) = 0x15;
        pcVar19 = "initializer for module ";
LAB_0073c318:
        puVar13[2] = pcVar19;
        puVar13[3] = uVar25;
        *(ushort *)((long)puVar13 + 9) = uVar22 & 0xf000 | 0x540;
        goto LAB_0073c778;
      }
      if (cVar1 == 'R') {
        *param_1 = (long)(pcVar19 + 2);
        local_120 = FUN_0073dec0(param_1,0);
        auVar10._8_8_ = local_140._8_8_;
        auVar10._0_8_ = local_140._0_8_;
        auVar9._8_8_ = local_140._8_8_;
        auVar9._0_8_ = local_140._0_8_;
        auVar33._8_8_ = local_140._8_8_;
        auVar33._0_8_ = local_140._0_8_;
        if (local_120 != 0) {
          pbVar18 = (byte *)*param_1;
          pbVar21 = (byte *)param_1[1];
          if (pbVar21 == pbVar18) {
LAB_0073c278:
            puVar13 = (undefined8 *)FUN_0073f748(param_1,&local_120);
            goto LAB_0073c778;
          }
          bVar23 = *pbVar18;
          if ((bVar23 < 0x30) || ((0x39 < bVar23 && (0x19 < bVar23 - 0x41)))) {
            bVar11 = true;
            if (pbVar18 != pbVar21) {
LAB_0073c224:
              if (bVar23 == 0x5f) {
                *param_1 = (long)(pbVar18 + 1);
                goto LAB_0073c278;
              }
            }
LAB_0073c274:
            auVar33 = auVar9;
            if (bVar11) goto LAB_0073c278;
          }
          else {
            do {
              bVar23 = *pbVar18;
              if ((bVar23 < 0x30) || ((0x39 < bVar23 && (0x19 < bVar23 - 0x41)))) {
                bVar11 = false;
                if (pbVar18 == pbVar21) goto LAB_0073c274;
                goto LAB_0073c224;
              }
              pbVar18 = pbVar18 + 1;
              *param_1 = (long)pbVar18;
              auVar33 = auVar10;
            } while (pbVar18 != pbVar21);
          }
        }
      }
      else {
        auVar33 = auVar8;
        if (cVar1 == 'V') {
          *param_1 = (long)(pcVar19 + 2);
                    /* try { // try from 0073bff4 to 0073bfff has its CatchHandler @ 0073c828 */
          lVar16 = FUN_0073dec0(param_1,0);
          auVar33._8_8_ = local_140._8_8_;
          auVar33._0_8_ = local_140._0_8_;
          if (lVar16 != 0) {
            pvVar30 = (void *)param_1[0x266];
            lVar17 = *(long *)((long)pvVar30 + 8);
            puVar24 = (undefined8 *)pvVar30;
            if (lVar17 - 0xfc0U < 0xfffffffffffff010) {
              puVar24 = (undefined8 *)malloc(0x1000);
              if (puVar24 == (undefined8 *)0x0) goto LAB_0073c7f4;
              lVar17 = 0;
              *puVar24 = pvVar30;
              puVar24[1] = 0;
              param_1[0x266] = (long)puVar24;
            }
            *(long *)((long)puVar24 + 8) = lVar17 + 0x30;
            puVar13 = (undefined8 *)((long)puVar24 + lVar17 + 0x10);
            *puVar13 = &PTR_FUN_0079e170;
            uVar22 = *(ushort *)((long)puVar24 + lVar17 + 0x19);
            uVar25 = 0x13;
            *(long *)((long)puVar24 + lVar17 + 0x30) = lVar16;
            *(undefined1 *)((long)puVar24 + lVar17 + 0x18) = 0x15;
            pcVar19 = "guard variable for ";
            goto LAB_0073c318;
          }
        }
      }
    }
  }
  else {
    if (*pcVar19 != 'T') goto LAB_0073bef4;
    if ((ulong)((long)pcVar20 - (long)pcVar19) < 2) {
LAB_0073c39c:
      pcVar19 = pcVar19 + 1;
      *param_1 = (long)pcVar19;
      if (pcVar20 == pcVar19) {
        bVar11 = false;
      }
      else {
        bVar11 = *pcVar19 == 'v';
      }
      uVar12 = FUN_0073f234(param_1);
      auVar33._8_8_ = local_140._8_8_;
      auVar33._0_8_ = local_140._0_8_;
      if ((uVar12 & 1) == 0) {
        local_120 = FUN_0073be2c(param_1);
        auVar33._8_8_ = local_140._8_8_;
        auVar33._0_8_ = local_140._0_8_;
        if (local_120 != 0) {
          if (bVar11) {
            puVar13 = (undefined8 *)FUN_0073f5ec();
          }
          else {
            puVar13 = (undefined8 *)FUN_0073f69c(param_1,&local_120);
          }
          goto LAB_0073c778;
        }
      }
    }
    else {
      bVar23 = pcVar19[1];
      if (bVar23 < 0x53) {
        if (bVar23 < 0x48) {
          if (bVar23 == 0x41) {
            *param_1 = (long)(pcVar19 + 2);
                    /* try { // try from 0073c5e0 to 0073c68f has its CatchHandler @ 0073c828 */
            local_120 = FUN_0073e5f4(param_1);
            auVar33._8_8_ = local_140._8_8_;
            auVar33._0_8_ = local_140._0_8_;
            if (local_120 != 0) {
              puVar13 = (undefined8 *)FUN_0073eec4(param_1,&local_120);
              goto LAB_0073c778;
            }
          }
          else {
            if (bVar23 != 0x43) goto LAB_0073c39c;
            *param_1 = (long)(pcVar19 + 2);
                    /* try { // try from 0073c16c to 0073c3d3 has its CatchHandler @ 0073c828 */
            local_120 = FUN_0073c980(param_1);
            auVar33._8_8_ = local_140._8_8_;
            auVar33._0_8_ = local_140._0_8_;
            if (local_120 != 0) {
              FUN_0073c840(param_1,1);
              auVar7._8_8_ = local_140._8_8_;
              auVar7._0_8_ = local_140._0_8_;
              auVar6._8_8_ = local_140._8_8_;
              auVar6._0_8_ = local_140._0_8_;
              auVar33._8_8_ = local_140._8_8_;
              auVar33._0_8_ = local_140._0_8_;
              if (((extraout_x1 != 0) &&
                  (pcVar19 = (char *)*param_1, auVar33 = auVar6, pcVar19 != (char *)param_1[1])) &&
                 (auVar33 = auVar7, *pcVar19 == '_')) {
                *param_1 = (long)(pcVar19 + 1);
                local_140._0_8_ = FUN_0073c980(param_1);
                auVar33._8_8_ = local_140._8_8_;
                auVar33._0_8_ = local_140._0_8_;
                if (local_140._0_8_ != 0) {
                  puVar13 = (undefined8 *)FUN_0073f494(param_1,local_140,&local_120);
                  goto LAB_0073c778;
                }
              }
            }
          }
        }
        else if (bVar23 == 0x48) {
          *param_1 = (long)(pcVar19 + 2);
          local_120 = FUN_0073dec0(param_1,0);
          auVar33._8_8_ = local_140._8_8_;
          auVar33._0_8_ = local_140._0_8_;
          if (local_120 != 0) {
            puVar13 = (undefined8 *)FUN_0073f53c(param_1,&local_120);
            goto LAB_0073c778;
          }
        }
        else {
          if (bVar23 != 0x49) goto LAB_0073c39c;
          *param_1 = (long)(pcVar19 + 2);
          local_120 = FUN_0073c980(param_1);
          auVar33._8_8_ = local_140._8_8_;
          auVar33._0_8_ = local_140._0_8_;
          if (local_120 != 0) {
            puVar13 = (undefined8 *)FUN_0073f0d4(param_1,&local_120);
            goto LAB_0073c778;
          }
        }
      }
      else if (bVar23 < 0x56) {
        if (bVar23 == 0x53) {
          *param_1 = (long)(pcVar19 + 2);
          local_120 = FUN_0073c980(param_1);
          auVar33._8_8_ = local_140._8_8_;
          auVar33._0_8_ = local_140._0_8_;
          if (local_120 != 0) {
            puVar13 = (undefined8 *)FUN_0073f184(param_1,&local_120);
            goto LAB_0073c778;
          }
        }
        else {
          if (bVar23 != 0x54) goto LAB_0073c39c;
          *param_1 = (long)(pcVar19 + 2);
          local_120 = FUN_0073c980(param_1);
          auVar33._8_8_ = local_140._8_8_;
          auVar33._0_8_ = local_140._0_8_;
          if (local_120 != 0) {
            puVar13 = (undefined8 *)FUN_0073f024(param_1,&local_120);
            goto LAB_0073c778;
          }
        }
      }
      else if (bVar23 == 0x56) {
        *param_1 = (long)(pcVar19 + 2);
        local_120 = FUN_0073c980(param_1);
        auVar33._8_8_ = local_140._8_8_;
        auVar33._0_8_ = local_140._0_8_;
        if (local_120 != 0) {
          puVar13 = (undefined8 *)FUN_0073ef74(param_1,&local_120);
          goto LAB_0073c778;
        }
      }
      else if (bVar23 == 0x57) {
        *param_1 = (long)(pcVar19 + 2);
        local_120 = FUN_0073dec0(param_1,0);
        auVar33._8_8_ = local_140._8_8_;
        auVar33._0_8_ = local_140._0_8_;
        if (local_120 != 0) {
          puVar13 = (undefined8 *)
                    FUN_0073c8cc(param_1,"thread-local wrapper routine for ",&local_120);
          goto LAB_0073c778;
        }
      }
      else {
        if (bVar23 != 99) goto LAB_0073c39c;
        *param_1 = (long)(pcVar19 + 2);
        uVar12 = FUN_0073f234(param_1);
        auVar33._8_8_ = local_140._8_8_;
        auVar33._0_8_ = local_140._0_8_;
        if ((uVar12 & 1) == 0) {
          uVar12 = FUN_0073f234(param_1);
          auVar33._8_8_ = local_140._8_8_;
          auVar33._0_8_ = local_140._0_8_;
          if ((uVar12 & 1) == 0) {
                    /* try { // try from 0073bed4 to 0073bedb has its CatchHandler @ 0073c828 */
            local_120 = FUN_0073be2c(param_1);
            auVar33._8_8_ = local_140._8_8_;
            auVar33._0_8_ = local_140._0_8_;
            if (local_120 != 0) {
              puVar13 = (undefined8 *)FUN_0073f3e4(param_1,&local_120);
              goto LAB_0073c778;
            }
          }
        }
      }
    }
  }
LAB_0073c774:
  puVar13 = (undefined8 *)0x0;
  local_140 = auVar33;
LAB_0073c778:
  FUN_0073ece4(auStack_100);
  return puVar13;
}


// ===== 0073c840  FUN_0073c840 =====

undefined1  [16] FUN_0073c840(long *param_1,ulong param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined1 auVar4 [16];
  
  auVar4._0_8_ = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  pbVar2 = auVar4._0_8_;
  if ((((param_2 & 1) != 0) && (auVar4._0_8_ != pbVar1)) && (*auVar4._0_8_ == 0x6e)) {
    pbVar2 = auVar4._0_8_ + 1;
    *param_1 = (long)pbVar2;
  }
  if ((pbVar1 == pbVar2) || (*pbVar2 - 0x3a < 0xfffffff6)) {
    return ZEXT816(0);
  }
  do {
    pbVar3 = pbVar2;
    if (*pbVar2 - 0x3a < 0xfffffff6) break;
    pbVar2 = pbVar2 + 1;
    *param_1 = (long)pbVar2;
    pbVar3 = pbVar1;
  } while (pbVar2 != pbVar1);
  auVar4._8_8_ = (long)pbVar3 - (long)auVar4._0_8_;
  return auVar4;
}


// ===== 0073c8cc  FUN_0073c8cc =====

undefined8 * FUN_0073c8cc(long param_1,char *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  
  pvVar6 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar6 + 8);
  puVar1 = (undefined8 *)pvVar6;
  if (lVar3 - 0xfc0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00739f00();
    }
    lVar3 = 0;
    *puVar1 = pvVar6;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar3 + 0x30;
  sVar2 = strlen(param_2);
  uVar4 = *param_3;
  puVar5 = (undefined8 *)((long)puVar1 + lVar3 + 0x10);
  *puVar5 = &PTR_FUN_0079e170;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(size_t *)((long)puVar1 + lVar3 + 0x28) = sVar2;
  *(undefined1 *)((long)puVar1 + lVar3 + 0x18) = 0x15;
  *(ushort *)((long)puVar1 + lVar3 + 0x19) =
       *(ushort *)((long)puVar1 + lVar3 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar3 + 0x30) = uVar4;
  return puVar5;
}


// ===== 0073c980  FUN_0073c980 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_0073c980(long *param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  void *pvVar6;
  undefined *puVar7;
  char *pcVar8;
  ushort uVar9;
  long lVar10;
  undefined8 uVar11;
  char *pcVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  size_t __n;
  long *__src;
  long *plVar17;
  byte *local_58;
  undefined1 local_50 [16];
  byte *local_28;
  
  pcVar12 = (char *)*param_1;
  pbVar5 = (byte *)param_1[1];
  local_58 = (byte *)0x0;
  uVar2 = (long)pbVar5 - (long)pcVar12;
  if (uVar2 == 0) goto code_r0x0073d3b4;
  cVar1 = *pcVar12;
  switch(cVar1) {
  case 'A':
    pbVar4 = (byte *)(pcVar12 + 1);
    local_28 = (byte *)0x0;
    *param_1 = (long)pbVar4;
    if (pbVar5 == pbVar4) {
LAB_0073d92c:
      pbVar5 = (byte *)FUN_00741a30(param_1);
      pbVar4 = pbVar5;
      if (pbVar5 == (byte *)0x0) goto joined_r0x0073d9d4;
      pcVar12 = (char *)*param_1;
      if ((pcVar12 == (char *)param_1[1]) || (*pcVar12 != '_')) {
        return (byte *)0x0;
      }
      pcVar12 = pcVar12 + 1;
      local_28 = pbVar5;
    }
    else if (*pbVar4 - 0x3a < 0xfffffff6) {
      if (*pbVar4 != 0x5f) goto LAB_0073d92c;
      pcVar12 = pcVar12 + 2;
    }
    else {
      local_50 = FUN_0073c840(param_1,0);
      local_28 = (byte *)FUN_00741584(param_1,local_50);
      pcVar12 = (char *)*param_1;
      if (pcVar12 == (char *)param_1[1]) {
        return (byte *)0x0;
      }
      if (*pcVar12 != '_') {
        return (byte *)0x0;
      }
      pcVar12 = pcVar12 + 1;
    }
    *param_1 = (long)pcVar12;
    pbVar5 = (byte *)FUN_0073c980(param_1);
    local_50._0_8_ = pbVar5;
    pbVar4 = pbVar5;
    if (pbVar5 != (byte *)0x0) {
      pbVar5 = (byte *)FUN_007528b0(param_1,local_50,&local_28);
      pbVar4 = pbVar5;
    }
    goto joined_r0x0073d9d4;
  default:
    goto code_r0x0073d3b4;
  case 'C':
    *param_1 = (long)(pcVar12 + 1);
    local_50._0_8_ = FUN_0073c980(param_1);
    if ((byte *)local_50._0_8_ == (byte *)0x0) {
      return (byte *)0x0;
    }
    pbVar5 = (byte *)FUN_00751090(param_1,local_50);
    goto LAB_0073d3c0;
  case 'D':
    if (uVar2 < 2) {
      return (byte *)0x0;
    }
    cVar1 = pcVar12[1];
    pbVar4 = (byte *)0x0;
    switch(cVar1) {
    case 'B':
    case 'U':
      pbVar4 = (byte *)(pcVar12 + 2);
      *param_1 = (long)pbVar4;
      local_28 = (byte *)CONCAT71(local_28._1_7_,cVar1 == 'B');
      if ((pbVar5 == pbVar4) || (*pbVar4 - 0x3a < 0xfffffff6)) {
        local_50._0_8_ = FUN_00741a30(param_1);
        if (local_50._0_8_ == 0) {
          return (byte *)0x0;
        }
      }
      else {
        local_50 = FUN_0073c840(param_1,0);
        lVar10 = FUN_00741584(param_1,local_50);
        local_50._0_8_ = lVar10;
      }
      pcVar12 = (char *)*param_1;
      if (pcVar12 == (char *)param_1[1]) {
        return (byte *)0x0;
      }
      if (*pcVar12 != '_') {
        return (byte *)0x0;
      }
      *param_1 = (long)(pcVar12 + 1);
      pbVar5 = (byte *)FUN_007509c4(param_1,local_50,&local_28);
      return pbVar5;
    default:
      goto code_r0x0073d894;
    case 'F':
      *param_1 = (long)(pcVar12 + 2);
      local_50 = FUN_0073c840(param_1,0);
      uVar11 = FUN_00741584(param_1,local_50);
      pcVar12 = (char *)*param_1;
      if ((pcVar12 != (char *)param_1[1]) && (*pcVar12 == '_')) {
        *param_1 = (long)(pcVar12 + 1);
        local_50._0_8_ = uVar11;
        pbVar5 = (byte *)FUN_00750924(param_1,local_50);
        return pbVar5;
      }
      return (byte *)0x0;
    case 'K':
    case 'k':
      local_50._0_8_ = " auto";
      if (cVar1 != 'k') {
        local_50._0_8_ = " decltype(auto)";
      }
      local_50._8_8_ = 5;
      if (cVar1 != 'k') {
        local_50._8_8_ = 0xf;
      }
      *param_1 = (long)(pcVar12 + 2);
      local_28 = (byte *)FUN_0073dec0(param_1,0);
      if (local_28 != (byte *)0x0) {
        pbVar5 = (byte *)FUN_00750a70(param_1,&local_28,local_50);
        return pbVar5;
      }
      return (byte *)0x0;
    case 'O':
    case 'o':
    case 'w':
    case 'x':
      goto code_r0x0073d488;
    case 'T':
    case 't':
      pbVar5 = (byte *)FUN_00740bb4(param_1);
      pbVar4 = pbVar5;
      break;
    case 'a':
      puVar7 = &DAT_001bc1a0;
      goto LAB_0073dc14;
    case 'c':
      pcVar8 = "decltype(auto)";
      goto LAB_0073dc8c;
    case 'd':
      pcVar8 = "decimal64";
      goto LAB_0073dbe0;
    case 'e':
      *param_1 = (long)(pcVar12 + 2);
      pbVar5 = (byte *)FUN_007507cc(param_1,"decimal128");
      return pbVar5;
    case 'f':
      pcVar8 = "decimal32";
LAB_0073dbe0:
      *param_1 = (long)(pcVar12 + 2);
      pbVar5 = (byte *)FUN_00750674(param_1,pcVar8);
      return pbVar5;
    case 'h':
      puVar7 = &DAT_001ec895;
LAB_0073dc14:
      *param_1 = (long)(pcVar12 + 2);
      pbVar5 = (byte *)FUN_007416fc(param_1,puVar7);
      return pbVar5;
    case 'i':
      pcVar8 = "char32_t";
      goto LAB_0073dc48;
    case 'n':
      pcVar8 = "std::nullptr_t";
LAB_0073dc8c:
      *param_1 = (long)(pcVar12 + 2);
      pbVar5 = (byte *)FUN_0074eda4(param_1,pcVar8);
      return pbVar5;
    case 'p':
      *param_1 = (long)(pcVar12 + 2);
      local_50._0_8_ = FUN_0073c980(param_1);
      if ((byte *)local_50._0_8_ == (byte *)0x0) {
        return (byte *)0x0;
      }
      pbVar5 = (byte *)FUN_00744e98(param_1,local_50);
      goto LAB_0073d3c0;
    case 's':
      pcVar8 = "char16_t";
LAB_0073dc48:
      *param_1 = (long)(pcVar12 + 2);
      pbVar5 = (byte *)FUN_00750720(param_1,pcVar8);
      return pbVar5;
    case 'u':
      *param_1 = (long)(pcVar12 + 2);
      pbVar5 = (byte *)FUN_00748128(param_1,"char8_t");
      return pbVar5;
    case 'v':
      pbVar5 = (byte *)FUN_00750b1c(param_1);
      pbVar4 = pbVar5;
    }
    goto joined_r0x0073d9d4;
  case 'F':
    goto code_r0x0073d488;
  case 'G':
    *param_1 = (long)(pcVar12 + 1);
    local_50._0_8_ = FUN_0073c980(param_1);
    if ((byte *)local_50._0_8_ == (byte *)0x0) {
      return (byte *)0x0;
    }
    pbVar5 = (byte *)FUN_00751140(param_1,local_50);
    goto LAB_0073d3c0;
  case 'K':
  case 'V':
  case 'r':
    uVar14 = (ulong)(cVar1 == 'r');
    if (uVar14 < uVar2) {
      uVar13 = 1;
      if (cVar1 == 'r') {
        uVar13 = 2;
      }
      if (pcVar12[uVar14] != 'V') {
        uVar13 = (uint)(cVar1 == 'r');
      }
      uVar14 = (ulong)uVar13;
    }
    if (uVar14 < uVar2) {
      uVar13 = (uint)uVar14;
      if (pcVar12[uVar14] == 'K') {
        uVar13 = uVar13 + 1;
      }
      uVar14 = (ulong)uVar13;
    }
    if ((uVar2 <= uVar14) ||
       ((pcVar12[uVar14] != 'F' &&
        ((((pcVar12[uVar14] != 'D' || (uVar2 <= uVar14 + 1)) ||
          (0x29 < (byte)pcVar12[uVar14 + 1] - 0x4f)) ||
         ((1L << ((ulong)((byte)pcVar12[uVar14 + 1] - 0x4f) & 0x3f) & 0x30100000001U) == 0))))))
    goto code_r0x0073ca80;
    goto code_r0x0073d488;
  case 'M':
    *param_1 = (long)(pcVar12 + 1);
    local_50._0_8_ = FUN_0073c980(param_1);
    pbVar5 = (byte *)local_50._0_8_;
    pbVar4 = (byte *)local_50._0_8_;
    if (((byte *)local_50._0_8_ != (byte *)0x0) &&
       (local_28 = (byte *)FUN_0073c980(param_1), pbVar5 = local_28, pbVar4 = local_28,
       local_28 != (byte *)0x0)) {
      pbVar5 = (byte *)FUN_00752b2c(param_1,local_50,&local_28);
      pbVar4 = pbVar5;
    }
    goto joined_r0x0073d9d4;
  case 'O':
    *param_1 = (long)(pcVar12 + 1);
    local_50._0_8_ = FUN_0073c980(param_1);
    if ((byte *)local_50._0_8_ == (byte *)0x0) {
      return (byte *)0x0;
    }
    local_28 = (byte *)CONCAT44(local_28._4_4_,1);
    goto LAB_0073d6d0;
  case 'P':
    *param_1 = (long)(pcVar12 + 1);
    local_50._0_8_ = FUN_0073c980(param_1);
    if ((byte *)local_50._0_8_ == (byte *)0x0) {
      return (byte *)0x0;
    }
    pbVar5 = (byte *)FUN_00750f28(param_1,local_50);
    goto LAB_0073d3c0;
  case 'R':
    *param_1 = (long)(pcVar12 + 1);
    local_50._0_8_ = FUN_0073c980(param_1);
    if ((byte *)local_50._0_8_ == (byte *)0x0) {
      return (byte *)0x0;
    }
    local_28 = (byte *)((ulong)local_28 & 0xffffffff00000000);
LAB_0073d6d0:
    pbVar5 = (byte *)FUN_00750fd4(param_1,local_50,&local_28);
    goto LAB_0073d3c0;
  case 'S':
    if ((1 < uVar2) && (pcVar12[1] == 't')) goto code_r0x0073d3b4;
    local_28 = (byte *)((ulong)local_28._1_7_ << 8);
    local_58 = (byte *)FUN_00740108(param_1,0,&local_28);
    if (local_58 == (byte *)0x0) {
      return (byte *)0x0;
    }
    if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
      if (((char)local_28 != '\0') && ((char)param_1[0x61] == '\0')) {
        return local_58;
      }
      if ((char)local_28 == '\0') {
        FUN_0073e91c(param_1 + 0x25,&local_58);
      }
      local_50._0_8_ = FUN_00740278(param_1,0);
      if ((byte *)local_50._0_8_ == (byte *)0x0) {
        return (byte *)0x0;
      }
      goto LAB_0073d918;
    }
    pbVar5 = local_58;
    pbVar4 = (byte *)((ulong)local_28 & 0xff);
    goto joined_r0x0073d9d4;
  case 'T':
    if (((uVar2 < 2) || (0x10 < (byte)pcVar12[1] - 0x65)) ||
       ((1 << (ulong)((byte)pcVar12[1] - 0x65 & 0x1f) & 0x14001U) == 0)) {
      pbVar5 = (byte *)FUN_007407f0(param_1);
      if (pbVar5 == (byte *)0x0) {
        return (byte *)0x0;
      }
      local_58 = pbVar5;
      if ((((char)param_1[0x61] == '\0') || ((char *)param_1[1] == (char *)*param_1)) ||
         (*(char *)*param_1 != 'I')) goto LAB_0073d3c0;
      local_50._0_8_ = FUN_00740278(param_1,0);
      if ((byte *)local_50._0_8_ == (byte *)0x0) {
        return (byte *)0x0;
      }
LAB_0073d918:
      pbVar5 = (byte *)FUN_00740748(param_1,&local_58,local_50);
      goto LAB_0073d3c0;
    }
    goto code_r0x0073d3b4;
  case 'U':
code_r0x0073ca80:
    pbVar5 = (byte *)FUN_0075029c(param_1);
    pbVar4 = pbVar5;
joined_r0x0073d9d4:
    if (pbVar4 != (byte *)0x0) {
      return pbVar5;
    }
LAB_0073d3c0:
    plVar17 = (long *)param_1[0x26];
    if (plVar17 == (long *)param_1[0x27]) {
      __src = (long *)param_1[0x25];
      __n = (long)plVar17 - (long)__src;
      if (__src == param_1 + 0x28) {
        pvVar6 = malloc(__n * 2);
        if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (plVar17 != __src) {
          memmove(pvVar6,__src,__n);
        }
        param_1[0x25] = (long)pvVar6;
      }
      else {
        pvVar6 = realloc(__src,__n * 2);
        param_1[0x25] = (long)pvVar6;
        if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      plVar17 = (long *)((long)pvVar6 + __n);
      param_1[0x27] = (long)((long)pvVar6 + ((long)__n >> 2) * 8);
    }
    param_1[0x26] = (long)(plVar17 + 1);
    *plVar17 = (long)pbVar5;
    return pbVar5;
  case 'a':
    pvVar6 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar6 + 8);
    puVar3 = (undefined8 *)pvVar6;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) {
LAB_0073dd10:
                    /* WARNING: Subroutine does not return */
        FUN_00739f00();
      }
      lVar10 = 0;
      *puVar3 = pvVar6;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0079e260;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "signed char";
    goto LAB_0073d7fc;
  case 'b':
    pvVar6 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar6 + 8);
    puVar3 = (undefined8 *)pvVar6;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0073dd10;
      lVar10 = 0;
      *puVar3 = pvVar6;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0079e260;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "bool";
    goto LAB_0073d87c;
  case 'c':
    pvVar6 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar6 + 8);
    puVar3 = (undefined8 *)pvVar6;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0073dd10;
      lVar10 = 0;
      *puVar3 = pvVar6;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0079e260;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "char";
    goto LAB_0073d87c;
  case 'd':
    pvVar6 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar6 + 8);
    puVar3 = (undefined8 *)pvVar6;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0073dd10;
      lVar10 = 0;
      *puVar3 = pvVar6;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0079e260;
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "double";
    *(ushort *)((long)puVar3 + lVar10 + 0x19) =
         *(ushort *)((long)puVar3 + lVar10 + 0x19) & 0xf000 | 0x540;
    uVar11 = 6;
    break;
  case 'e':
    pvVar6 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar6 + 8);
    puVar3 = (undefined8 *)pvVar6;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0073dd10;
      lVar10 = 0;
      *puVar3 = pvVar6;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0079e260;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "long double";
LAB_0073d7fc:
    *(ushort *)(pbVar4 + 9) = uVar9 & 0xf000 | 0x540;
    uVar11 = 0xb;
    break;
  case 'f':
    pvVar6 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar6 + 8);
    puVar3 = (undefined8 *)pvVar6;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0073dd10;
      lVar10 = 0;
      *puVar3 = pvVar6;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0079e260;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "float";
    goto LAB_0073d270;
  case 'g':
    pvVar6 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar6 + 8);
    puVar3 = (undefined8 *)pvVar6;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0073dd10;
      lVar10 = 0;
      *puVar3 = pvVar6;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0079e260;
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "__float128";
    *(ushort *)((long)puVar3 + lVar10 + 0x19) =
         *(ushort *)((long)puVar3 + lVar10 + 0x19) & 0xf000 | 0x540;
    uVar11 = 10;
    break;
  case 'h':
    pvVar6 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar6 + 8);
    puVar3 = (undefined8 *)pvVar6;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0073dd10;
      lVar10 = 0;
      *puVar3 = pvVar6;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0079e260;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "unsigned char";
    goto LAB_0073d504;
  case 'i':
    pvVar6 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar6 + 8);
    puVar3 = (undefined8 *)pvVar6;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0073dd10;
      lVar10 = 0;
      *puVar3 = pvVar6;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0079e260;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "int";
    goto LAB_0073d154;
  case 'j':
    pvVar6 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar6 + 8);
    puVar3 = (undefined8 *)pvVar6;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0073dd10;
      lVar10 = 0;
      *puVar3 = pvVar6;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0079e260;
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "unsigned int";
    *(ushort *)((long)puVar3 + lVar10 + 0x19) =
         *(ushort *)((long)puVar3 + lVar10 + 0x19) & 0xf000 | 0x540;
    uVar11 = 0xc;
    break;
  case 'l':
    pvVar6 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar6 + 8);
    puVar3 = (undefined8 *)pvVar6;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0073dd10;
      lVar10 = 0;
      *puVar3 = pvVar6;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0079e260;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "long";
    goto LAB_0073d87c;
  case 'm':
    pvVar6 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar6 + 8);
    puVar3 = (undefined8 *)pvVar6;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0073dd10;
      lVar10 = 0;
      *puVar3 = pvVar6;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0079e260;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "unsigned long";
LAB_0073d504:
    *(ushort *)(pbVar4 + 9) = uVar9 & 0xf000 | 0x540;
    uVar11 = 0xd;
    break;
  case 'n':
    pvVar6 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar6 + 8);
    puVar3 = (undefined8 *)pvVar6;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0073dd10;
      lVar10 = 0;
      *puVar3 = pvVar6;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar5 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar5 = &PTR_FUN_0079e260;
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    *(ushort *)((long)puVar3 + lVar10 + 0x19) =
         *(ushort *)((long)puVar3 + lVar10 + 0x19) & 0xf000 | 0x540;
    *(char **)((long)puVar3 + lVar10 + 0x20) = "__int128";
    *(undefined8 *)((long)puVar3 + lVar10 + 0x28) = 8;
    return pbVar5;
  case 'o':
    pvVar6 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar6 + 8);
    puVar3 = (undefined8 *)pvVar6;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0073dd10;
      lVar10 = 0;
      *puVar3 = pvVar6;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0079e260;
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "unsigned __int128";
    *(ushort *)((long)puVar3 + lVar10 + 0x19) =
         *(ushort *)((long)puVar3 + lVar10 + 0x19) & 0xf000 | 0x540;
    uVar11 = 0x11;
    break;
  case 's':
    pvVar6 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar6 + 8);
    puVar3 = (undefined8 *)pvVar6;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0073dd10;
      lVar10 = 0;
      *puVar3 = pvVar6;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0079e260;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "short";
LAB_0073d270:
    *(ushort *)(pbVar4 + 9) = uVar9 & 0xf000 | 0x540;
    uVar11 = 5;
    break;
  case 't':
    pvVar6 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar6 + 8);
    puVar3 = (undefined8 *)pvVar6;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0073dd10;
      lVar10 = 0;
      *puVar3 = pvVar6;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0079e260;
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "unsigned short";
    *(ushort *)((long)puVar3 + lVar10 + 0x19) =
         *(ushort *)((long)puVar3 + lVar10 + 0x19) & 0xf000 | 0x540;
    uVar11 = 0xe;
    break;
  case 'u':
    pbVar4 = (byte *)(pcVar12 + 1);
    *param_1 = (long)pbVar4;
    if (pbVar5 == pbVar4) {
      return (byte *)0x0;
    }
    if (*pbVar4 - 0x3a < 0xfffffff6) {
      return (byte *)0x0;
    }
    local_50._8_8_ = 0;
    lVar10 = 0;
    do {
      lVar16 = lVar10;
      uVar15 = local_50._8_8_;
      local_50._0_8_ = pcVar12 + lVar16 + 2;
      *param_1 = local_50._0_8_;
      uVar14 = (ulong)(byte)pcVar12[lVar16 + 1];
      local_50._8_8_ = (uVar14 + uVar15 * 10) - 0x30;
      if ((byte *)local_50._0_8_ == pbVar5) break;
      lVar10 = lVar16 + 1;
    } while (*(byte *)local_50._0_8_ - 0x30 < 10);
    if ((uVar2 - lVar16) - 2 < (ulong)local_50._8_8_) {
      return (byte *)0x0;
    }
    pbVar4 = (byte *)(pcVar12 + uVar14 + uVar15 * 10 + lVar16 + -0x2e);
    *param_1 = (long)pbVar4;
    if (local_50._8_8_ == 0) {
      return (byte *)0x0;
    }
    if ((pbVar4 == pbVar5) || (*pbVar4 != 0x49)) {
      pbVar5 = (byte *)FUN_0073fe90(param_1,local_50);
    }
    else {
      *param_1 = (long)(pcVar12 + uVar14 + uVar15 * 10 + lVar16 + -0x2d);
      local_28 = (byte *)FUN_0073c980(param_1);
      if (local_28 == (byte *)0x0) {
        return (byte *)0x0;
      }
      pcVar12 = (char *)*param_1;
      if (pcVar12 == (char *)param_1[1]) {
        return (byte *)0x0;
      }
      if (*pcVar12 != 'E') {
        return (byte *)0x0;
      }
      *param_1 = (long)(pcVar12 + 1);
      pbVar5 = (byte *)FUN_00750878(param_1,local_50,&local_28);
    }
    goto LAB_0073d3c0;
  case 'v':
    pvVar6 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar6 + 8);
    puVar3 = (undefined8 *)pvVar6;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0073dd10;
      lVar10 = 0;
      *puVar3 = pvVar6;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0079e260;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "void";
LAB_0073d87c:
    *(ushort *)(pbVar4 + 9) = uVar9 & 0xf000 | 0x540;
    uVar11 = 4;
    break;
  case 'w':
    pvVar6 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar6 + 8);
    puVar3 = (undefined8 *)pvVar6;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0073dd10;
      lVar10 = 0;
      *puVar3 = pvVar6;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0079e260;
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "wchar_t";
    *(ushort *)((long)puVar3 + lVar10 + 0x19) =
         *(ushort *)((long)puVar3 + lVar10 + 0x19) & 0xf000 | 0x540;
    uVar11 = 7;
    break;
  case 'x':
    pvVar6 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar6 + 8);
    puVar3 = (undefined8 *)pvVar6;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0073dd10;
      lVar10 = 0;
      *puVar3 = pvVar6;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0079e260;
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "long long";
    *(ushort *)((long)puVar3 + lVar10 + 0x19) =
         *(ushort *)((long)puVar3 + lVar10 + 0x19) & 0xf000 | 0x540;
    uVar11 = 9;
    break;
  case 'y':
    pvVar6 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar6 + 8);
    puVar3 = (undefined8 *)pvVar6;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0073dd10;
      lVar10 = 0;
      *puVar3 = pvVar6;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0079e260;
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "unsigned long long";
    *(ushort *)((long)puVar3 + lVar10 + 0x19) =
         *(ushort *)((long)puVar3 + lVar10 + 0x19) & 0xf000 | 0x540;
    uVar11 = 0x12;
    break;
  case 'z':
    pvVar6 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar6 + 8);
    puVar3 = (undefined8 *)pvVar6;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0073dd10;
      lVar10 = 0;
      *puVar3 = pvVar6;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0079e260;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "...";
LAB_0073d154:
    *(ushort *)(pbVar4 + 9) = uVar9 & 0xf000 | 0x540;
    uVar11 = 3;
  }
  *(char **)(pbVar4 + 0x10) = pcVar12;
  *(undefined8 *)(pbVar4 + 0x18) = uVar11;
code_r0x0073d894:
  return pbVar4;
code_r0x0073d488:
  pbVar5 = (byte *)FUN_0074fcf4(param_1);
  pbVar4 = pbVar5;
  goto joined_r0x0073d9d4;
code_r0x0073d3b4:
  pbVar5 = (byte *)FUN_00750dd8(param_1);
  pbVar4 = pbVar5;
  goto joined_r0x0073d9d4;
}


// ===== 0073dd18  FUN_0073dd18 =====

void FUN_0073dd18(long *param_1,long param_2)

{
  size_t sVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  long *__dest;
  long *plVar6;
  
  pvVar4 = (void *)(param_2 + 0x2b0);
  plVar2 = param_1 + 4;
  param_1[5] = 0;
  *plVar2 = 0;
  *param_1 = param_2;
  param_1[1] = (long)plVar2;
  __dest = param_1 + 0xb;
  param_1[0xc] = 0;
  *__dest = 0;
  plVar6 = param_1 + 8;
  *plVar6 = (long)__dest;
  param_1[2] = (long)plVar2;
  param_1[3] = (long)plVar6;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = (long)__dest;
  param_1[10] = (long)(param_1 + 0x13);
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  pvVar3 = *(void **)(param_2 + 0x298);
  if (pvVar3 == pvVar4) {
    sVar1 = *(long *)(param_2 + 0x2a0) - (long)pvVar3;
    pvVar4 = pvVar3;
    if (sVar1 != 0) {
      memmove(plVar2,pvVar3,sVar1);
      pvVar3 = *(void **)(param_2 + 0x298);
      pvVar4 = *(void **)(param_2 + 0x2a0);
    }
    param_1[2] = (long)plVar2 + ((long)pvVar4 - (long)pvVar3);
    *(void **)(param_2 + 0x2a0) = pvVar3;
  }
  else {
    param_1[1] = (long)pvVar3;
    lVar5 = *(long *)(param_2 + 0x2a0);
    param_1[3] = *(long *)(param_2 + 0x2a8);
    param_1[2] = lVar5;
    *(void **)(param_2 + 0x298) = pvVar4;
    *(void **)(param_2 + 0x2a0) = pvVar4;
    *(long *)(param_2 + 0x2a8) = param_2 + 0x2d0;
  }
  pvVar3 = *(void **)(param_2 + 0x240);
  pvVar4 = (void *)(param_2 + 600);
  plVar2 = (long *)*plVar6;
  if (pvVar3 == pvVar4) {
    if (plVar2 != __dest) {
      free(plVar2);
      param_1[8] = (long)__dest;
      param_1[9] = (long)__dest;
      pvVar3 = *(void **)(param_2 + 0x240);
      param_1[10] = (long)(param_1 + 0x13);
    }
    sVar1 = *(long *)(param_2 + 0x248) - (long)pvVar3;
    pvVar4 = pvVar3;
    if (sVar1 != 0) {
      memmove(__dest,pvVar3,sVar1);
      pvVar3 = *(void **)(param_2 + 0x240);
      pvVar4 = *(void **)(param_2 + 0x248);
    }
    param_1[9] = (long)__dest + ((long)pvVar4 - (long)pvVar3);
    *(void **)(param_2 + 0x248) = pvVar3;
  }
  else {
    *plVar6 = (long)pvVar3;
    if (plVar2 == __dest) {
      lVar5 = *(long *)(param_2 + 0x248);
      param_1[10] = *(long *)(param_2 + 0x250);
      param_1[9] = lVar5;
      *(void **)(param_2 + 0x240) = pvVar4;
      *(void **)(param_2 + 0x248) = pvVar4;
      *(long *)(param_2 + 0x250) = param_2 + 0x298;
    }
    else {
      *(long **)(param_2 + 0x240) = plVar2;
      lVar5 = param_1[9];
      param_1[9] = *(long *)(param_2 + 0x248);
      *(long *)(param_2 + 0x248) = lVar5;
      lVar5 = param_1[10];
      param_1[10] = *(long *)(param_2 + 0x250);
      *(long *)(param_2 + 0x250) = lVar5;
      *(undefined8 *)(param_2 + 0x248) = *(undefined8 *)(param_2 + 0x240);
    }
  }
  lVar5 = *param_1;
  *(undefined8 *)(lVar5 + 0x2a0) = *(undefined8 *)(lVar5 + 0x298);
  *(undefined8 *)(lVar5 + 0x248) = *(undefined8 *)(lVar5 + 0x240);
  return;
}


// ===== 0073dec0  FUN_0073dec0 =====

undefined8 * FUN_0073dec0(long *param_1,long param_2)

{
  char *pcVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined1 uVar13;
  uint uVar14;
  long lVar15;
  size_t sVar16;
  long *plVar17;
  void *pvVar18;
  long *plVar19;
  long local_110;
  ulong local_108 [19];
  long local_70 [2];
  
  pbVar2 = (byte *)*param_1;
  pbVar12 = (byte *)param_1[1];
  if (pbVar12 == pbVar2) {
LAB_0073df40:
    local_108[0] = local_108[0] & 0xffffffffffffff00;
    puVar5 = (undefined8 *)FUN_00740108(param_1,param_2,local_108);
    if (puVar5 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    if (((char *)param_1[1] == (char *)*param_1) || (*(char *)*param_1 != 'I')) {
      if ((char)local_108[0] != '\0') {
        return (undefined8 *)0x0;
      }
      return puVar5;
    }
    if ((local_108[0] & 1) == 0) {
      plVar17 = (long *)param_1[0x26];
      if (plVar17 == (long *)param_1[0x27]) {
        plVar7 = (long *)param_1[0x25];
        plVar19 = param_1 + 0x28;
        sVar16 = (long)plVar17 - (long)plVar7;
        if (plVar7 == plVar19) {
          pvVar18 = malloc(sVar16 * 2);
          if (pvVar18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar17 != plVar19) {
            memcpy(pvVar18,plVar19,sVar16);
          }
          param_1[0x25] = (long)pvVar18;
        }
        else {
          pvVar18 = realloc(plVar7,sVar16 * 2);
          param_1[0x25] = (long)pvVar18;
          if (pvVar18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar17 = (long *)((long)pvVar18 + sVar16);
        param_1[0x26] = (long)plVar17;
        param_1[0x27] = (long)((long)pvVar18 + ((long)sVar16 >> 2) * 8);
      }
      param_1[0x26] = (long)(plVar17 + 1);
      *plVar17 = (long)puVar5;
    }
    lVar15 = FUN_00740278(param_1,param_2 != 0);
    if (lVar15 == 0) {
      return (undefined8 *)0x0;
    }
    if (param_2 != 0) {
      *(undefined1 *)(param_2 + 1) = 1;
    }
    puVar8 = (undefined8 *)param_1[0x266];
    lVar10 = *(long *)((long)puVar8 + 8);
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar6 = (undefined8 *)malloc(0x1000);
      if (puVar6 == (undefined8 *)0x0) {
LAB_0073e5d4:
                    /* WARNING: Subroutine does not return */
        FUN_00739f00();
      }
      lVar10 = 0;
      *puVar6 = puVar8;
      puVar6[1] = 0;
      param_1[0x266] = (long)puVar6;
      puVar8 = puVar6;
    }
    *(long *)((long)puVar8 + 8) = lVar10 + 0x20;
    puVar6 = (undefined8 *)((long)puVar8 + lVar10 + 0x10);
    *puVar6 = &PTR_FUN_007a0160;
    *(undefined8 **)((long)puVar8 + lVar10 + 0x20) = puVar5;
    *(long *)((long)puVar8 + lVar10 + 0x28) = lVar15;
    *(undefined1 *)((long)puVar8 + lVar10 + 0x18) = 0x2d;
    *(ushort *)((long)puVar8 + lVar10 + 0x19) =
         *(ushort *)((long)puVar8 + lVar10 + 0x19) & 0xf000 | 0x540;
    return puVar6;
  }
  if (*pbVar2 == 0x5a) {
    *param_1 = (long)(pbVar2 + 1);
    local_70[0] = FUN_0073be2c(param_1);
    if (local_70[0] == 0) {
      return (undefined8 *)0x0;
    }
    pcVar3 = (char *)*param_1;
    if (pcVar3 == (char *)param_1[1]) {
      return (undefined8 *)0x0;
    }
    if (*pcVar3 != 'E') {
      return (undefined8 *)0x0;
    }
    pcVar1 = pcVar3 + 1;
    *param_1 = (long)pcVar1;
    if ((pcVar1 != (char *)param_1[1]) && (*pcVar1 == 's')) {
      *param_1 = (long)(pcVar3 + 2);
      lVar15 = FUN_0074ecf4();
      *param_1 = lVar15;
      local_108[0] = FUN_0074eda4(param_1,"string literal");
      puVar5 = (undefined8 *)FUN_0074ee50(param_1,local_70,local_108);
      return puVar5;
    }
    FUN_0073dd18(local_108,param_1);
    pcVar3 = (char *)*param_1;
    if ((pcVar3 == (char *)param_1[1]) || (*pcVar3 != 'd')) {
                    /* try { // try from 0073e468 to 0073e473 has its CatchHandler @ 0073e5e0 */
      local_110 = FUN_0073dec0(param_1,param_2);
      if (local_110 != 0) {
        lVar15 = FUN_0074ecf4(*param_1,param_1[1]);
        *param_1 = lVar15;
LAB_0073e488:
        puVar5 = (undefined8 *)FUN_0074ee50(param_1,local_70,&local_110);
        goto LAB_0073e4a4;
      }
    }
    else {
      *param_1 = (long)(pcVar3 + 1);
      FUN_0073c840(param_1,1);
      pcVar3 = (char *)*param_1;
      if ((pcVar3 != (char *)param_1[1]) && (*pcVar3 == '_')) {
        *param_1 = (long)(pcVar3 + 1);
                    /* try { // try from 0073e450 to 0073e45b has its CatchHandler @ 0073e5dc */
        local_110 = FUN_0073dec0(param_1,param_2);
        if (local_110 != 0) goto LAB_0073e488;
      }
    }
    puVar5 = (undefined8 *)0x0;
LAB_0073e4a4:
    FUN_0073ece4(local_108);
    return puVar5;
  }
  if (*pbVar2 != 0x4e) goto LAB_0073df40;
  pbVar11 = pbVar2 + 1;
  *param_1 = (long)pbVar11;
  pbVar9 = pbVar12;
  if (pbVar11 == pbVar12) {
    uVar14 = 0;
LAB_0073e050:
    if (param_2 != 0) {
      *(uint *)(param_2 + 4) = uVar14;
    }
    if (pbVar9 == pbVar12) {
LAB_0073e0c4:
      if (param_2 == 0) goto LAB_0073e0d4;
      uVar13 = 0;
    }
    else if (*pbVar9 == 0x4f) {
      pbVar9 = pbVar9 + 1;
      *param_1 = (long)pbVar9;
      if (param_2 == 0) goto LAB_0073e0d4;
      uVar13 = 2;
    }
    else {
      if (*pbVar9 != 0x52) goto LAB_0073e0c4;
      pbVar9 = pbVar9 + 1;
      *param_1 = (long)pbVar9;
      if (param_2 == 0) goto LAB_0073e0d4;
      uVar13 = 1;
    }
    lVar15 = 8;
  }
  else {
    if (*pbVar11 != 0x48) {
      if (*pbVar11 == 0x72) {
        pbVar11 = pbVar2 + 2;
        uVar14 = 4;
        *param_1 = (long)pbVar11;
      }
      else {
        uVar14 = 0;
      }
      if (pbVar11 != pbVar12) {
        if (*pbVar11 == 0x56) {
          pbVar11 = pbVar11 + 1;
          uVar14 = uVar14 | 2;
          *param_1 = (long)pbVar11;
        }
        if ((pbVar11 != pbVar12) && (pbVar9 = pbVar11, *pbVar11 == 0x4b)) {
          uVar14 = uVar14 | 1;
          *param_1 = (long)(pbVar11 + 1);
          pbVar9 = pbVar11 + 1;
        }
      }
      goto LAB_0073e050;
    }
    pbVar9 = pbVar2 + 2;
    *param_1 = (long)pbVar9;
    if (param_2 == 0) goto LAB_0073e0d4;
    uVar13 = 1;
    lVar15 = 0x18;
  }
  *(undefined1 *)(param_2 + lVar15) = uVar13;
LAB_0073e0d4:
  plVar17 = param_1 + 0x28;
  puVar5 = (undefined8 *)0x0;
  do {
    while( true ) {
      if ((pbVar9 != pbVar12) && (*pbVar9 == 0x45)) {
        *param_1 = (long)(pbVar9 + 1);
        if (puVar5 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        if (param_1[0x25] == param_1[0x26]) {
          return (undefined8 *)0x0;
        }
        param_1[0x26] = param_1[0x26] + -8;
        return puVar5;
      }
      if (param_2 != 0) {
        *(undefined1 *)(param_2 + 1) = 0;
      }
      if (pbVar12 != pbVar9) break;
LAB_0073e20c:
      puVar8 = (undefined8 *)0x0;
LAB_0073e210:
      puVar8 = (undefined8 *)FUN_00740fc4(param_1,param_2,puVar5,puVar8);
LAB_0073e220:
      if (puVar8 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
LAB_0073e228:
      plVar19 = (long *)param_1[0x26];
      if (plVar19 == (long *)param_1[0x27]) {
        plVar7 = (long *)param_1[0x25];
        sVar16 = (long)plVar19 - (long)plVar7;
        if (plVar7 == plVar17) {
          pvVar18 = malloc(sVar16 * 2);
          if (pvVar18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar19 != plVar17) {
            memcpy(pvVar18,plVar17,sVar16);
          }
          param_1[0x25] = (long)pvVar18;
        }
        else {
          pvVar18 = realloc(plVar7,sVar16 * 2);
          param_1[0x25] = (long)pvVar18;
          if (pvVar18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar19 = (long *)((long)pvVar18 + sVar16);
        param_1[0x26] = (long)plVar19;
        param_1[0x27] = (long)((long)pvVar18 + ((long)sVar16 >> 2) * 8);
      }
      param_1[0x26] = (long)(plVar19 + 1);
      *plVar19 = (long)puVar8;
      pbVar9 = (byte *)*param_1;
      pbVar2 = (byte *)param_1[1];
      pbVar12 = pbVar9;
      puVar5 = puVar8;
      if ((pbVar9 != pbVar2) && (pbVar12 = pbVar2, *pbVar9 == 0x4d)) {
        pbVar9 = pbVar9 + 1;
        *param_1 = (long)pbVar9;
      }
    }
    bVar4 = *pbVar9;
    puVar8 = (undefined8 *)0x0;
    if (bVar4 < 0x53) {
      if (bVar4 == 0x44) {
        if (((ulong)((long)pbVar12 - (long)pbVar9) < 2) || ((pbVar9[1] | 0x20) != 0x74))
        goto LAB_0073e20c;
        if (puVar5 != (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        puVar8 = (undefined8 *)FUN_00740bb4(param_1);
        goto LAB_0073e220;
      }
      if (bVar4 != 0x49) goto LAB_0073e210;
      if (puVar5 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      lVar15 = FUN_00740278(param_1,param_2 != 0);
      if (lVar15 == 0) {
        return (undefined8 *)0x0;
      }
      if (*(char *)(puVar5 + 1) == '-') {
        return (undefined8 *)0x0;
      }
      if (param_2 != 0) {
        *(undefined1 *)(param_2 + 1) = 1;
      }
      pvVar18 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar18 + 8);
      puVar6 = (undefined8 *)pvVar18;
      if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
        puVar6 = (undefined8 *)malloc(0x1000);
        if (puVar6 == (undefined8 *)0x0) goto LAB_0073e5d4;
        lVar10 = 0;
        *puVar6 = pvVar18;
        puVar6[1] = 0;
        param_1[0x266] = (long)puVar6;
      }
      *(long *)((long)puVar6 + 8) = lVar10 + 0x20;
      puVar8 = (undefined8 *)((long)puVar6 + lVar10 + 0x10);
      *puVar8 = &PTR_FUN_007a0160;
      *(undefined8 **)((long)puVar6 + lVar10 + 0x20) = puVar5;
      *(long *)((long)puVar6 + lVar10 + 0x28) = lVar15;
      *(undefined1 *)((long)puVar6 + lVar10 + 0x18) = 0x2d;
      *(ushort *)((long)puVar6 + lVar10 + 0x19) =
           *(ushort *)((long)puVar6 + lVar10 + 0x19) & 0xf000 | 0x540;
      goto LAB_0073e228;
    }
    if (bVar4 != 0x53) {
      if (bVar4 == 0x54) {
        if (puVar5 != (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        puVar8 = (undefined8 *)FUN_007407f0(param_1);
        goto LAB_0073e220;
      }
      goto LAB_0073e210;
    }
    if (((ulong)((long)pbVar12 - (long)pbVar9) < 2) || (pbVar9[1] != 0x74)) {
      puVar8 = (undefined8 *)FUN_00740ce8(param_1);
      if (puVar8 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      if (*(char *)(puVar8 + 1) == '\x1b') goto LAB_0073e210;
    }
    else {
      pvVar18 = (void *)param_1[0x266];
      *param_1 = (long)(pbVar9 + 2);
      lVar15 = *(long *)((long)pvVar18 + 8);
      puVar6 = (undefined8 *)pvVar18;
      if (lVar15 - 0xfd0U < 0xfffffffffffff010) {
        puVar6 = (undefined8 *)malloc(0x1000);
        if (puVar6 == (undefined8 *)0x0) goto LAB_0073e5d4;
        lVar15 = 0;
        *puVar6 = pvVar18;
        puVar6[1] = 0;
        param_1[0x266] = (long)puVar6;
      }
      *(long *)((long)puVar6 + 8) = lVar15 + 0x20;
      puVar8 = (undefined8 *)((long)puVar6 + lVar15 + 0x10);
      *puVar8 = &PTR_FUN_0079e260;
      *(undefined1 *)((long)puVar6 + lVar15 + 0x18) = 8;
      *(ushort *)((long)puVar6 + lVar15 + 0x19) =
           *(ushort *)((long)puVar6 + lVar15 + 0x19) & 0xf000 | 0x540;
      *(undefined **)((long)puVar6 + lVar15 + 0x20) = &DAT_001ea8d8;
      *(undefined8 *)((long)puVar6 + lVar15 + 0x28) = 3;
    }
    if (puVar5 != (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    pbVar9 = (byte *)*param_1;
    pbVar12 = (byte *)param_1[1];
    puVar5 = puVar8;
  } while( true );
}


// ===== 0073e5f4  FUN_0073e5f4 =====

undefined8 * FUN_0073e5f4(long *param_1)

{
  long *__src;
  undefined8 *puVar1;
  long lVar2;
  long *__ptr;
  void *pvVar3;
  char *pcVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined1 uVar9;
  byte *pbVar10;
  uint uVar11;
  size_t __n;
  long *plVar12;
  undefined1 auVar13 [16];
  
  pbVar6 = (byte *)*param_1;
  pbVar10 = (byte *)param_1[1];
  if (pbVar10 == pbVar6) {
    uVar11 = 0;
  }
  else {
    uVar11 = (uint)*pbVar6;
  }
  uVar11 = uVar11 - 0x4a >> 1 | uVar11 << 0x1f;
  if ((int)uVar11 < 5) {
    if (uVar11 == 0) {
      lVar7 = param_1[2];
      lVar5 = param_1[3];
      pbVar6 = pbVar6 + 1;
      __src = param_1 + 5;
      *param_1 = (long)pbVar6;
      while ((pbVar6 == pbVar10 || (*pbVar6 != 0x45))) {
        lVar2 = FUN_0073e5f4(param_1);
        if (lVar2 == 0) {
          return (undefined8 *)0x0;
        }
        plVar12 = (long *)param_1[3];
        if (plVar12 == (long *)param_1[4]) {
          __ptr = (long *)param_1[2];
          __n = (long)plVar12 - (long)__ptr;
          if (__ptr == __src) {
            pvVar3 = malloc(__n * 2);
            if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (plVar12 != __src) {
              memcpy(pvVar3,__src,__n);
            }
            param_1[2] = (long)pvVar3;
          }
          else {
            pvVar3 = realloc(__ptr,__n * 2);
            param_1[2] = (long)pvVar3;
            if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          plVar12 = (long *)((long)pvVar3 + __n);
          param_1[4] = (long)((long)pvVar3 + ((long)__n >> 2) * 8);
        }
        param_1[3] = (long)(plVar12 + 1);
        *plVar12 = lVar2;
        pbVar10 = (byte *)param_1[1];
        pbVar6 = (byte *)*param_1;
      }
      *param_1 = (long)(pbVar6 + 1);
      auVar13 = FUN_0073ea94(param_1,lVar5 - lVar7 >> 3);
      pvVar3 = (void *)param_1[0x266];
      lVar7 = *(long *)((long)pvVar3 + 8);
      puVar1 = (undefined8 *)pvVar3;
      if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
        puVar1 = (undefined8 *)malloc(0x1000);
        if (puVar1 == (undefined8 *)0x0) {
LAB_0073e918:
                    /* WARNING: Subroutine does not return */
          FUN_00739f00();
        }
        lVar7 = 0;
        *puVar1 = pvVar3;
        puVar1[1] = 0;
        param_1[0x266] = (long)puVar1;
      }
      lVar5 = (long)puVar1 + lVar7;
      ppuVar8 = &PTR_FUN_007a01d0;
      *(long *)((long)puVar1 + 8) = lVar7 + 0x20;
      uVar9 = 0x29;
LAB_0073e824:
      *(undefined8 *)(lVar5 + 0x10) = ppuVar8;
      *(undefined1 *)(lVar5 + 0x18) = uVar9;
      *(undefined1 (*) [16])(lVar5 + 0x20) = auVar13;
      *(ushort *)(lVar5 + 0x19) = *(ushort *)(lVar5 + 0x19) & 0xf000 | 0x540;
      return (undefined8 *)(lVar5 + 0x10);
    }
    if (uVar11 == 1) {
      if (((ulong)((long)pbVar10 - (long)pbVar6) < 2) || (pbVar6[1] != 0x5a)) {
        puVar1 = (undefined8 *)FUN_00743404(param_1);
        return puVar1;
      }
      *param_1 = (long)(pbVar6 + 2);
      puVar1 = (undefined8 *)FUN_0073be2c(param_1);
joined_r0x0073e690:
      if (puVar1 != (undefined8 *)0x0) {
        pcVar4 = (char *)*param_1;
        if ((pcVar4 == (char *)param_1[1]) || (*pcVar4 != 'E')) {
          puVar1 = (undefined8 *)0x0;
        }
        else {
          *param_1 = (long)(pcVar4 + 1);
        }
      }
      return puVar1;
    }
  }
  else if (uVar11 == 5) {
    if ((pbVar10 != pbVar6) && (*pbVar6 == 0x54)) {
      if ((ulong)((long)pbVar10 - (long)pbVar6) < 2) {
        uVar11 = 0;
      }
      else {
        uVar11 = (uint)pbVar6[1];
      }
      pcVar4 = (char *)memchr("yptnk",uVar11,5);
      if ((pcVar4 != (char *)0x0) && (pcVar4 != "")) {
        lVar7 = FUN_007494e8(param_1,0);
        if (lVar7 == 0) {
          return (undefined8 *)0x0;
        }
        lVar5 = FUN_0073e5f4(param_1);
        auVar13._8_8_ = lVar5;
        auVar13._0_8_ = lVar7;
        if (lVar5 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar3 = (void *)param_1[0x266];
        lVar7 = *(long *)((long)pvVar3 + 8);
        puVar1 = (undefined8 *)pvVar3;
        if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
          puVar1 = (undefined8 *)malloc(0x1000);
          if (puVar1 == (undefined8 *)0x0) goto LAB_0073e918;
          lVar7 = 0;
          *puVar1 = pvVar3;
          puVar1[1] = 0;
          param_1[0x266] = (long)puVar1;
        }
        lVar5 = (long)puVar1 + lVar7;
        ppuVar8 = &PTR_FUN_007a0240;
        *(long *)((long)puVar1 + 8) = lVar7 + 0x20;
        uVar9 = 0x22;
        goto LAB_0073e824;
      }
    }
  }
  else if (uVar11 == 7) {
    *param_1 = (long)(pbVar6 + 1);
    puVar1 = (undefined8 *)FUN_00741a30(param_1);
    goto joined_r0x0073e690;
  }
  puVar1 = (undefined8 *)FUN_0073c980(param_1);
  return puVar1;
}


// ===== 0073e91c  FUN_0073e91c =====

void FUN_0073e91c(undefined8 *param_1,undefined8 *param_2)

{
  void *__dest;
  undefined8 uVar1;
  size_t __n;
  undefined8 *__src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 == (undefined8 *)param_1[2]) {
    __src = (undefined8 *)*param_1;
    __n = (long)puVar2 - (long)__src;
    if (__src == param_1 + 3) {
      __dest = malloc(__n * 2);
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (puVar2 != __src) {
        memmove(__dest,__src,__n);
      }
      *param_1 = __dest;
    }
    else {
      __dest = realloc(__src,__n * 2);
      *param_1 = __dest;
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    puVar2 = (undefined8 *)((long)__dest + __n);
    param_1[1] = puVar2;
    param_1[2] = (void *)((long)__dest + ((long)__n >> 2) * 8);
  }
  uVar1 = *param_2;
  param_1[1] = puVar2 + 1;
  *puVar2 = uVar1;
  return;
}


// ===== 0073e9f4  FUN_0073e9f4 =====

void FUN_0073e9f4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pvVar3 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar3 + 8);
  puVar1 = (undefined8 *)pvVar3;
  if (lVar2 - 0xfd0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar3;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_007a02b0;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 10;
  uVar5 = param_2[1];
  uVar4 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar4;
  return;
}


// ===== 0073ea94  FUN_0073ea94 =====

undefined1  [16] FUN_0073ea94(long param_1,ulong param_2)

{
  void *__src;
  void *pvVar1;
  undefined8 *puVar2;
  long lVar3;
  size_t __n;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  lVar5 = *(long *)(param_1 + 0x10);
  pvVar1 = *(void **)(param_1 + 0x18);
  uVar6 = (long)pvVar1 - lVar5 >> 3;
  if (uVar6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0073a468("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0xaa0,
                 &DAT_001c717f);
  }
  __src = (void *)(lVar5 + param_2 * 8);
  puVar4 = *(undefined8 **)(param_1 + 0x1330);
  __n = (long)pvVar1 - (long)__src;
  lVar3 = puVar4[1];
  uVar7 = (ulong)((int)__n + 0xf) & 0xfffffff0;
  puVar2 = puVar4;
  if (0xfef < lVar3 + uVar7) {
    if (0xff0 < uVar7) {
      puVar2 = (undefined8 *)malloc(uVar7 + 0x10);
      if (puVar2 == (undefined8 *)0x0) {
LAB_0073ebec:
                    /* WARNING: Subroutine does not return */
        FUN_00739f00();
      }
      *puVar2 = *puVar4;
      puVar2[1] = 0;
      *puVar4 = puVar2;
      puVar2 = puVar2 + 2;
      goto joined_r0x0073eb54;
    }
    puVar2 = (undefined8 *)malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) goto LAB_0073ebec;
    lVar3 = 0;
    *puVar2 = puVar4;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  puVar2[1] = lVar3 + uVar7;
  puVar2 = (undefined8 *)((long)puVar2 + lVar3 + 0x10);
joined_r0x0073eb54:
  if (pvVar1 != __src) {
    memmove(puVar2,__src,__n);
    lVar5 = *(long *)(param_1 + 0x10);
    uVar6 = *(long *)(param_1 + 0x18) - lVar5 >> 3;
  }
  if (param_2 <= uVar6) {
    auVar8._8_8_ = (long)__n >> 3;
    *(ulong *)(param_1 + 0x18) = lVar5 + param_2 * 8;
    auVar8._0_8_ = puVar2;
    return auVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0073a468("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x87,
               "shrinkToSize() can\'t expand!");
}


// ===== 0073ebf0  FUN_0073ebf0 =====

void FUN_0073ebf0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined4 *param_7,undefined1 *param_8)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  pvVar8 = *(void **)(param_1 + 0x1330);
  lVar4 = *(long *)((long)pvVar8 + 8);
  puVar3 = (undefined8 *)pvVar8;
  if (lVar4 - 4000U < 0xfffffffffffff010) {
    puVar3 = (undefined8 *)malloc(0x1000);
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00739f00();
    }
    lVar4 = 0;
    *puVar3 = pvVar8;
    puVar3[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar3;
  }
  *(long *)((long)puVar3 + 8) = lVar4 + 0x50;
  *(undefined ***)((long)puVar3 + lVar4 + 0x10) = &PTR_FUN_007a0390;
  uVar1 = *param_7;
  uVar2 = *param_8;
  *(undefined1 *)((long)puVar3 + lVar4 + 0x18) = 0x13;
  uVar5 = *param_3;
  uVar6 = *param_5;
  uVar7 = *param_6;
  uVar10 = param_4[1];
  uVar9 = *param_4;
  *(undefined8 *)((long)puVar3 + lVar4 + 0x20) = *param_2;
  *(undefined8 *)((long)puVar3 + lVar4 + 0x28) = uVar5;
  *(ushort *)((long)puVar3 + lVar4 + 0x19) =
       *(ushort *)((long)puVar3 + lVar4 + 0x19) & 0xf000 | 0x100;
  *(undefined8 *)((long)puVar3 + lVar4 + 0x38) = uVar10;
  *(undefined8 *)((long)puVar3 + lVar4 + 0x30) = uVar9;
  *(undefined8 *)((long)puVar3 + lVar4 + 0x40) = uVar6;
  *(undefined8 *)((long)puVar3 + lVar4 + 0x48) = uVar7;
  *(undefined4 *)((long)puVar3 + lVar4 + 0x50) = uVar1;
  *(undefined1 *)((long)puVar3 + lVar4 + 0x54) = uVar2;
  return;
}


// ===== 0073ece4  FUN_0073ece4 =====

void FUN_0073ece4(long *param_1)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *param_1;
  plVar4 = (long *)param_1[1];
  plVar1 = param_1 + 4;
  pvVar3 = *(void **)(lVar8 + 0x298);
  pvVar2 = (void *)(lVar8 + 0x2b0);
  if (plVar4 == plVar1) {
    if (pvVar3 != pvVar2) {
      free(pvVar3);
      *(void **)(lVar8 + 0x298) = pvVar2;
      plVar4 = (long *)param_1[1];
      *(void **)(lVar8 + 0x2a0) = pvVar2;
      *(long *)(lVar8 + 0x2a8) = lVar8 + 0x2d0;
    }
    plVar5 = plVar4;
    if (param_1[2] - (long)plVar4 != 0) {
      memmove(pvVar2,plVar4,param_1[2] - (long)plVar4);
      plVar4 = (long *)param_1[1];
      plVar5 = (long *)param_1[2];
    }
    *(long *)(lVar8 + 0x2a0) = (long)pvVar2 + ((long)plVar5 - (long)plVar4);
    param_1[2] = (long)plVar4;
  }
  else {
    *(long **)(lVar8 + 0x298) = plVar4;
    if (pvVar3 == pvVar2) {
      lVar7 = param_1[2];
      *(long *)(lVar8 + 0x2a8) = param_1[3];
      *(long *)(lVar8 + 0x2a0) = lVar7;
      param_1[1] = (long)plVar1;
      param_1[2] = (long)plVar1;
      param_1[3] = (long)(param_1 + 8);
    }
    else {
      param_1[1] = (long)pvVar3;
      lVar7 = *(long *)(lVar8 + 0x2a0);
      *(long *)(lVar8 + 0x2a0) = param_1[2];
      param_1[2] = lVar7;
      lVar7 = *(long *)(lVar8 + 0x2a8);
      *(long *)(lVar8 + 0x2a8) = param_1[3];
      param_1[2] = param_1[1];
      param_1[3] = lVar7;
    }
  }
  lVar8 = *param_1;
  plVar5 = (long *)param_1[8];
  plVar4 = param_1 + 0xb;
  pvVar3 = *(void **)(lVar8 + 0x240);
  pvVar2 = (void *)(lVar8 + 600);
  if (plVar5 == plVar4) {
    if (pvVar3 != pvVar2) {
      free(pvVar3);
      *(void **)(lVar8 + 0x240) = pvVar2;
      plVar5 = (long *)param_1[8];
      *(void **)(lVar8 + 0x248) = pvVar2;
      *(long *)(lVar8 + 0x250) = lVar8 + 0x298;
    }
    plVar6 = plVar5;
    if (param_1[9] - (long)plVar5 != 0) {
      memmove(pvVar2,plVar5,param_1[9] - (long)plVar5);
      plVar5 = (long *)param_1[8];
      plVar6 = (long *)param_1[9];
    }
    *(long *)(lVar8 + 0x248) = (long)pvVar2 + ((long)plVar6 - (long)plVar5);
  }
  else {
    *(long **)(lVar8 + 0x240) = plVar5;
    if (pvVar3 == pvVar2) {
      lVar7 = param_1[9];
      *(long *)(lVar8 + 0x250) = param_1[10];
      *(long *)(lVar8 + 0x248) = lVar7;
      param_1[8] = (long)plVar4;
      param_1[9] = (long)plVar4;
      param_1[10] = (long)(param_1 + 0x13);
      goto LAB_0073ee88;
    }
    param_1[8] = (long)pvVar3;
    lVar7 = *(long *)(lVar8 + 0x248);
    *(long *)(lVar8 + 0x248) = param_1[9];
    param_1[9] = lVar7;
    lVar7 = *(long *)(lVar8 + 0x250);
    *(long *)(lVar8 + 0x250) = param_1[10];
    plVar5 = (long *)param_1[8];
    param_1[10] = lVar7;
  }
  param_1[9] = (long)plVar5;
  if (plVar5 != plVar4) {
    free(plVar5);
  }
LAB_0073ee88:
  if ((long *)param_1[1] == plVar1) {
    return;
  }
  free((long *)param_1[1]);
  return;
}


// ===== 0073eec4  FUN_0073eec4 =====

void FUN_0073eec4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfc0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  uVar3 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0079e170;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x15;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "template parameter object for ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 0x1e;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  return;
}


// ===== 0073ef74  FUN_0073ef74 =====

void FUN_0073ef74(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfc0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  uVar3 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0079e170;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x15;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "vtable for ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 0xb;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  return;
}


// ===== 0073f024  FUN_0073f024 =====

void FUN_0073f024(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfc0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  uVar3 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0079e170;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x15;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "VTT for ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 8;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  return;
}


// ===== 0073f0d4  FUN_0073f0d4 =====

void FUN_0073f0d4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfc0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  uVar3 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0079e170;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x15;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "typeinfo for ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 0xd;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  return;
}


