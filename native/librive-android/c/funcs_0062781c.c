// ===== 0062781c  FUN_0062781c =====

undefined8 FUN_0062781c(lua_State *param_1)

{
  double *pdVar1;
  long lVar2;
  double dVar3;
  
  dVar3 = (double)luaL_checknumber(param_1,1);
  dVar3 = asin(dVar3);
  pdVar1 = *(double **)(param_1 + 8);
  *pdVar1 = dVar3;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)pdVar1 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return 1;
}


// ===== 00627864  FUN_00627864 =====

undefined8 FUN_00627864(lua_State *param_1)

{
  double *pdVar1;
  long lVar2;
  double dVar3;
  double __x;
  
  dVar3 = (double)luaL_checknumber(param_1,1);
  __x = (double)luaL_checknumber(param_1,2);
  dVar3 = atan2(dVar3,__x);
  pdVar1 = *(double **)(param_1 + 8);
  *pdVar1 = dVar3;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)pdVar1 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return 1;
}


// ===== 006278cc  FUN_006278cc =====

undefined8 FUN_006278cc(lua_State *param_1)

{
  double *pdVar1;
  long lVar2;
  double dVar3;
  
  dVar3 = (double)luaL_checknumber(param_1,1);
  dVar3 = atan(dVar3);
  pdVar1 = *(double **)(param_1 + 8);
  *pdVar1 = dVar3;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)pdVar1 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return 1;
}


// ===== 00627914  FUN_00627914 =====

undefined8 FUN_00627914(lua_State *param_1)

{
  long *plVar1;
  double dVar2;
  
  dVar2 = (double)luaL_checknumber(param_1,1);
  plVar1 = *(long **)(param_1 + 8);
  *(undefined4 *)((long)plVar1 + 0xc) = 3;
  *plVar1 = (long)dVar2;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 0062795c  FUN_0062795c =====

undefined8 FUN_0062795c(lua_State *param_1)

{
  double *pdVar1;
  long lVar2;
  double dVar3;
  
  dVar3 = (double)luaL_checknumber(param_1,1);
  dVar3 = cosh(dVar3);
  pdVar1 = *(double **)(param_1 + 8);
  *pdVar1 = dVar3;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)pdVar1 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return 1;
}


// ===== 006279a4  FUN_006279a4 =====

undefined8 FUN_006279a4(lua_State *param_1)

{
  double *pdVar1;
  long lVar2;
  double dVar3;
  
  dVar3 = (double)luaL_checknumber(param_1,1);
  dVar3 = cos(dVar3);
  pdVar1 = *(double **)(param_1 + 8);
  *pdVar1 = dVar3;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)pdVar1 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return 1;
}


// ===== 006279ec  FUN_006279ec =====

undefined8 FUN_006279ec(lua_State *param_1)

{
  double *pdVar1;
  double dVar2;
  
  dVar2 = (double)luaL_checknumber(param_1,1);
  pdVar1 = *(double **)(param_1 + 8);
  dVar2 = dVar2 / DAT_0024e8d8;
  *(undefined4 *)((long)pdVar1 + 0xc) = 3;
  *pdVar1 = dVar2;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 00627a3c  FUN_00627a3c =====

undefined8 FUN_00627a3c(lua_State *param_1)

{
  double *pdVar1;
  long lVar2;
  double dVar3;
  
  dVar3 = (double)luaL_checknumber(param_1,1);
  dVar3 = exp(dVar3);
  pdVar1 = *(double **)(param_1 + 8);
  *pdVar1 = dVar3;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)pdVar1 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return 1;
}


// ===== 00627a84  FUN_00627a84 =====

undefined8 FUN_00627a84(lua_State *param_1)

{
  long *plVar1;
  double dVar2;
  
  dVar2 = (double)luaL_checknumber(param_1,1);
  plVar1 = *(long **)(param_1 + 8);
  *(undefined4 *)((long)plVar1 + 0xc) = 3;
  *plVar1 = (long)dVar2;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 00627acc  FUN_00627acc =====

undefined8 FUN_00627acc(lua_State *param_1)

{
  double *pdVar1;
  long lVar2;
  double dVar3;
  double __y;
  
  dVar3 = (double)luaL_checknumber(param_1,1);
  __y = (double)luaL_checknumber(param_1,2);
  dVar3 = fmod(dVar3,__y);
  pdVar1 = *(double **)(param_1 + 8);
  *pdVar1 = dVar3;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)pdVar1 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return 1;
}


// ===== 00627b34  FUN_00627b34 =====

undefined8 FUN_00627b34(lua_State *param_1)

{
  long lVar1;
  double *pdVar2;
  long lVar3;
  double dVar4;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  dVar4 = (double)luaL_checknumber(param_1,1);
  dVar4 = frexp(dVar4,&local_2c);
  pdVar2 = *(double **)(param_1 + 8);
  *pdVar2 = dVar4;
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)pdVar2 + 0xc) = 3;
  *(undefined4 *)(lVar3 + 0x1c) = 3;
  *(long *)(param_1 + 8) = lVar3 + 0x10;
  *(double *)(lVar3 + 0x10) = (double)local_2c;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00627bc4  FUN_00627bc4 =====

undefined8 FUN_00627bc4(lua_State *param_1)

{
  int __exponent;
  double *pdVar1;
  long lVar2;
  double dVar3;
  
  dVar3 = (double)luaL_checknumber(param_1,1);
  __exponent = luaL_checkinteger(param_1,2);
  dVar3 = ldexp(dVar3,__exponent);
  pdVar1 = *(double **)(param_1 + 8);
  *pdVar1 = dVar3;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)pdVar1 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return 1;
}


// ===== 00627c28  FUN_00627c28 =====

undefined8 FUN_00627c28(lua_State *param_1)

{
  double *pdVar1;
  long lVar2;
  double dVar3;
  
  dVar3 = (double)luaL_checknumber(param_1,1);
  dVar3 = log10(dVar3);
  pdVar1 = *(double **)(param_1 + 8);
  *pdVar1 = dVar3;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)pdVar1 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return 1;
}


// ===== 00627c70  FUN_00627c70 =====

undefined8 FUN_00627c70(lua_State *param_1)

{
  undefined8 *puVar1;
  double *pdVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = (double)luaL_checknumber(param_1,1);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  if (((puVar1 < *(undefined8 **)(param_1 + 8)) && (puVar1 != &DAT_00285948)) &&
     (0 < *(int *)(*(long *)(param_1 + 0x10) + 0x1c))) {
    dVar5 = (double)luaL_checknumber(param_1,2);
    if (dVar5 == 2.0) {
      dVar4 = log2(dVar4);
    }
    else if (dVar5 == 10.0) {
      dVar4 = log10(dVar4);
    }
    else {
      dVar4 = log(dVar4);
      dVar5 = log(dVar5);
      dVar4 = dVar4 / dVar5;
    }
  }
  else {
    dVar4 = log(dVar4);
  }
  pdVar2 = *(double **)(param_1 + 8);
  *pdVar2 = dVar4;
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)pdVar2 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar3 + 0x10;
  return 1;
}


// ===== 00627d50  FUN_00627d50 =====

undefined8 FUN_00627d50(lua_State *param_1)

{
  long lVar1;
  double *pdVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  dVar6 = (double)luaL_checknumber(param_1,1);
  iVar5 = (int)((ulong)(lVar3 - lVar1) >> 4);
  if (1 < iVar5) {
    iVar4 = 1;
    dVar7 = dVar6;
    do {
      iVar4 = iVar4 + 1;
      dVar6 = (double)luaL_checknumber(param_1,iVar4);
      if (dVar6 == dVar7 || dVar6 < dVar7 != (NAN(dVar6) || NAN(dVar7))) {
        dVar6 = dVar7;
      }
      dVar7 = dVar6;
    } while (iVar5 != iVar4);
  }
  pdVar2 = *(double **)(param_1 + 8);
  *pdVar2 = dVar6;
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)pdVar2 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar3 + 0x10;
  return 1;
}


// ===== 00627de0  FUN_00627de0 =====

undefined8 FUN_00627de0(lua_State *param_1)

{
  long lVar1;
  double *pdVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  dVar6 = (double)luaL_checknumber(param_1,1);
  iVar5 = (int)((ulong)(lVar3 - lVar1) >> 4);
  if (1 < iVar5) {
    iVar4 = 1;
    dVar7 = dVar6;
    do {
      iVar4 = iVar4 + 1;
      dVar6 = (double)luaL_checknumber(param_1,iVar4);
      if (dVar7 <= dVar6) {
        dVar6 = dVar7;
      }
      dVar7 = dVar6;
    } while (iVar5 != iVar4);
  }
  pdVar2 = *(double **)(param_1 + 8);
  *pdVar2 = dVar6;
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)pdVar2 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar3 + 0x10;
  return 1;
}


// ===== 00627e70  FUN_00627e70 =====

undefined8 FUN_00627e70(lua_State *param_1)

{
  long lVar1;
  double *pdVar2;
  long lVar3;
  double dVar4;
  double local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  dVar4 = (double)luaL_checknumber(param_1,1);
  dVar4 = modf(dVar4,&local_30);
  pdVar2 = *(double **)(param_1 + 8);
  *pdVar2 = local_30;
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)pdVar2 + 0xc) = 3;
  *(undefined4 *)(lVar3 + 0x1c) = 3;
  *(long *)(param_1 + 8) = lVar3 + 0x10;
  *(double *)(lVar3 + 0x10) = dVar4;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00627efc  FUN_00627efc =====

undefined8 FUN_00627efc(lua_State *param_1)

{
  double *pdVar1;
  long lVar2;
  double dVar3;
  double __y;
  
  dVar3 = (double)luaL_checknumber(param_1,1);
  __y = (double)luaL_checknumber(param_1,2);
  dVar3 = pow(dVar3,__y);
  pdVar1 = *(double **)(param_1 + 8);
  *pdVar1 = dVar3;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)pdVar1 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return 1;
}


// ===== 00627f64  FUN_00627f64 =====

undefined8 FUN_00627f64(lua_State *param_1)

{
  double *pdVar1;
  double dVar2;
  
  dVar2 = (double)luaL_checknumber(param_1,1);
  pdVar1 = *(double **)(param_1 + 8);
  dVar2 = dVar2 * DAT_0024e8d8;
  *(undefined4 *)((long)pdVar1 + 0xc) = 3;
  *pdVar1 = dVar2;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 00627fb4  FUN_00627fb4 =====

undefined8 FUN_00627fb4(lua_State *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  double *pdVar10;
  long lVar11;
  double dVar12;
  
  pdVar10 = *(double **)(param_1 + 8);
  lVar11 = *(long *)(param_1 + 0x18);
  iVar2 = (int)((ulong)((long)pdVar10 - *(long *)(param_1 + 0x10)) >> 4);
  if (iVar2 != 2) {
    if (iVar2 == 1) {
      uVar1 = luaL_checkinteger(param_1,1);
      if ((int)uVar1 < 1) {
                    /* WARNING: Subroutine does not return */
        luaL_argerrorL(param_1,1,"interval is empty");
      }
      uVar5 = *(ulong *)(lVar11 + 0x4e0);
      pdVar10 = *(double **)(param_1 + 8);
      uVar6 = (uint)(uVar5 >> 0x20);
      uVar8 = uVar6 >> 0xd ^ (uint)(uVar5 >> 0x1b);
      uVar6 = uVar6 >> 0x1b;
      dVar12 = (double)((int)((ulong)(uVar8 >> (ulong)uVar6 | uVar8 << (ulong)(-uVar6 & 0x1f)) *
                              (ulong)uVar1 >> 0x20) + 1);
      *(ulong *)(lVar11 + 0x4e0) = uVar5 * 0x5851f42d4c957f2d + 0x69;
    }
    else {
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        luaL_errorL(param_1,"wrong number of arguments");
      }
      uVar5 = *(ulong *)(lVar11 + 0x4e0);
      uVar7 = uVar5 * 0x5851f42d4c957f2d + 0x69;
      uVar6 = (uint)(uVar5 >> 0x20);
      uVar1 = uVar6 >> 0xd ^ (uint)(uVar5 >> 0x1b);
      uVar9 = (uint)(uVar7 >> 0x20);
      uVar8 = uVar9 >> 0xd ^ (uint)(uVar7 >> 0x1b);
      uVar9 = uVar9 >> 0x1b;
      *(ulong *)(lVar11 + 0x4e0) = uVar7 * 0x5851f42d4c957f2d + 0x69;
      dVar12 = ldexp((double)CONCAT44(uVar8 >> (ulong)uVar9 | uVar8 << (ulong)(-uVar9 & 0x1f),
                                      uVar1 >> (uVar5 >> 0x3b) |
                                      uVar1 << (ulong)(-(uVar6 >> 0x1b) & 0x1f)),-0x40);
    }
LAB_00628154:
    *pdVar10 = dVar12;
    lVar11 = *(long *)(param_1 + 8);
    *(undefined4 *)((long)pdVar10 + 0xc) = 3;
    *(long *)(param_1 + 8) = lVar11 + 0x10;
    return 1;
  }
  iVar2 = luaL_checkinteger(param_1,1);
  iVar3 = luaL_checkinteger(param_1,2);
  if (iVar3 < iVar2) {
    pcVar4 = "interval is empty";
  }
  else {
    if (iVar3 - iVar2 != -1) {
      uVar5 = *(ulong *)(lVar11 + 0x4e0);
      uVar8 = (uint)(uVar5 >> 0x20);
      uVar1 = uVar8 >> 0xd ^ (uint)(uVar5 >> 0x1b);
      uVar8 = uVar8 >> 0x1b;
      pdVar10 = *(double **)(param_1 + 8);
      dVar12 = (double)(iVar2 + (int)((ulong)(uVar1 >> (ulong)uVar8 |
                                             uVar1 << (ulong)(-uVar8 & 0x1f)) *
                                      (ulong)((iVar3 - iVar2) + 1) >> 0x20));
      *(ulong *)(lVar11 + 0x4e0) = uVar5 * 0x5851f42d4c957f2d + 0x69;
      goto LAB_00628154;
    }
    pcVar4 = "interval is too large";
  }
                    /* WARNING: Subroutine does not return */
  luaL_argerrorL(param_1,2,pcVar4);
}


// ===== 006281c4  FUN_006281c4 =====

undefined8 FUN_006281c4(lua_State *param_1)

{
  int iVar1;
  
  iVar1 = luaL_checkinteger(param_1,1);
  *(long *)(*(long *)(param_1 + 0x18) + 0x4e0) =
       (long)iVar1 * 0x5851f42d4c957f2d + 0x399d2694695129de;
  return 0;
}


// ===== 0062821c  FUN_0062821c =====

undefined8 FUN_0062821c(lua_State *param_1)

{
  double *pdVar1;
  long lVar2;
  double dVar3;
  
  dVar3 = (double)luaL_checknumber(param_1,1);
  dVar3 = sinh(dVar3);
  pdVar1 = *(double **)(param_1 + 8);
  *pdVar1 = dVar3;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)pdVar1 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return 1;
}


// ===== 00628264  FUN_00628264 =====

undefined8 FUN_00628264(lua_State *param_1)

{
  double *pdVar1;
  long lVar2;
  double dVar3;
  
  dVar3 = (double)luaL_checknumber(param_1,1);
  dVar3 = sin(dVar3);
  pdVar1 = *(double **)(param_1 + 8);
  *pdVar1 = dVar3;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)pdVar1 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return 1;
}


// ===== 006282ac  FUN_006282ac =====

undefined8 FUN_006282ac(lua_State *param_1)

{
  double *pdVar1;
  double dVar2;
  
  dVar2 = (double)luaL_checknumber(param_1,1);
  pdVar1 = *(double **)(param_1 + 8);
  *(undefined4 *)((long)pdVar1 + 0xc) = 3;
  *pdVar1 = SQRT(dVar2);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 006282f4  FUN_006282f4 =====

undefined8 FUN_006282f4(lua_State *param_1)

{
  double *pdVar1;
  long lVar2;
  double dVar3;
  
  dVar3 = (double)luaL_checknumber(param_1,1);
  dVar3 = tanh(dVar3);
  pdVar1 = *(double **)(param_1 + 8);
  *pdVar1 = dVar3;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)pdVar1 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return 1;
}


// ===== 0062833c  FUN_0062833c =====

undefined8 FUN_0062833c(lua_State *param_1)

{
  double *pdVar1;
  long lVar2;
  double dVar3;
  
  dVar3 = (double)luaL_checknumber(param_1,1);
  dVar3 = tan(dVar3);
  pdVar1 = *(double **)(param_1 + 8);
  *pdVar1 = dVar3;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)pdVar1 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return 1;
}


// ===== 00628384  FUN_00628384 =====

undefined8 FUN_00628384(lua_State *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  char cVar13;
  double *pdVar14;
  double __x;
  double __x_00;
  double __x_01;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  int local_54;
  int local_50;
  int local_4c;
  long local_48;
  
  lVar12 = tpidr_el0;
  local_48 = *(long *)(lVar12 + 0x28);
  __x = (double)lua_tonumberx(param_1,1,&local_4c);
  __x_00 = (double)lua_tonumberx(param_1,2,&local_50);
  __x_01 = (double)lua_tonumberx(param_1,3,&local_54);
  if (local_4c == 0) {
                    /* WARNING: Subroutine does not return */
    luaL_typeerrorL(param_1,1,"number");
  }
  if (local_50 == 0) {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
    if (((puVar3 < *(undefined8 **)(param_1 + 8)) && (puVar3 != &DAT_00285948)) &&
       (0 < *(int *)(*(long *)(param_1 + 0x10) + 0x1c))) {
                    /* WARNING: Subroutine does not return */
      luaL_typeerrorL(param_1,2,"number");
    }
  }
  if (local_54 == 0) {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
    if (((puVar3 < *(undefined8 **)(param_1 + 8)) && (puVar3 != &DAT_00285948)) &&
       (0 < *(int *)(*(long *)(param_1 + 0x10) + 0x2c))) {
                    /* WARNING: Subroutine does not return */
      luaL_typeerrorL(param_1,3,"number");
    }
  }
  if (*PTR_FixMathNoisePrecision_0067dbd0 != '\0') {
    __x = fmod(__x,256.0);
    __x_00 = fmod(__x_00,256.0);
    __x_01 = fmod(__x_01,256.0);
  }
  fVar16 = (float)__x_00 - (float)(int)__x_00;
  fVar17 = (float)__x - (float)(int)__x;
  fVar15 = (float)__x_01 - (float)(int)__x_01;
  bVar1 = (&DAT_0028522c)[(byte)(int)__x] + (char)(int)__x_00;
  bVar2 = (&DAT_0028522d)[(byte)(int)__x] + (char)(int)__x_00;
  fVar21 = fVar16 + -1.0;
  uVar20 = NEON_fmadd(fVar17,0x40c00000,0xc1700000);
  fVar34 = fVar17 + -1.0;
  fVar19 = fVar15 + -1.0;
  cVar13 = (char)(int)__x_01;
  lVar4 = ((ulong)(byte)(&DAT_0028522c)[(byte)((&DAT_0028522c)[bVar1] + cVar13)] & 0xf) * 0xc;
  lVar5 = ((ulong)(byte)(&DAT_0028522c)[(byte)((&DAT_0028522c)[bVar2] + cVar13)] & 0xf) * 0xc;
  lVar6 = ((ulong)(byte)(&DAT_0028522c)[(byte)((&DAT_0028522d)[bVar1] + cVar13)] & 0xf) * 0xc;
  lVar7 = ((ulong)(byte)(&DAT_0028522c)[(byte)((&DAT_0028522d)[bVar2] + cVar13)] & 0xf) * 0xc;
  lVar8 = ((ulong)(byte)(&DAT_0028522d)[(byte)((&DAT_0028522c)[bVar1] + cVar13)] & 0xf) * 0xc;
  lVar9 = ((ulong)(byte)(&DAT_0028522d)[(byte)((&DAT_0028522d)[bVar1] + cVar13)] & 0xf) * 0xc;
  lVar10 = ((ulong)(byte)(&DAT_0028522d)[(byte)((&DAT_0028522c)[bVar2] + cVar13)] & 0xf) * 0xc;
  lVar11 = ((ulong)(byte)(&DAT_0028522d)[(byte)((&DAT_0028522d)[bVar2] + cVar13)] & 0xf) * 0xc;
  uVar23 = NEON_fmadd(*(undefined4 *)(&DAT_00285330 + lVar4),fVar17,
                      fVar16 * *(float *)(&DAT_00285334 + lVar4));
  uVar29 = NEON_fmadd(*(undefined4 *)(&DAT_00285330 + lVar6),fVar17,
                      fVar21 * *(float *)(&DAT_00285334 + lVar6));
  uVar31 = NEON_fmadd(*(undefined4 *)(&DAT_00285330 + lVar8),fVar17,
                      fVar16 * *(float *)(&DAT_00285334 + lVar8));
  uVar33 = NEON_fmadd(*(undefined4 *)(&DAT_00285330 + lVar9),fVar17,
                      fVar21 * *(float *)(&DAT_00285334 + lVar9));
  fVar18 = (float)NEON_fmadd(fVar17,uVar20,0x41200000);
  uVar20 = NEON_fmadd(*(undefined4 *)(&DAT_00285330 + lVar5),fVar34,
                      fVar16 * *(float *)(&DAT_00285334 + lVar5));
  uVar26 = NEON_fmadd(*(undefined4 *)(&DAT_00285330 + lVar7),fVar34,
                      fVar21 * *(float *)(&DAT_00285334 + lVar7));
  uVar24 = NEON_fmadd(*(undefined4 *)(&DAT_00285330 + lVar10),fVar34,
                      fVar16 * *(float *)(&DAT_00285334 + lVar10));
  uVar22 = NEON_fmadd(*(undefined4 *)(&DAT_00285330 + lVar11),fVar34,
                      fVar21 * *(float *)(&DAT_00285334 + lVar11));
  fVar21 = (float)NEON_fmadd(*(undefined4 *)(&DAT_00285338 + lVar4),fVar15,uVar23);
  fVar18 = fVar17 * fVar17 * fVar17 * fVar18;
  fVar17 = (float)NEON_fmadd(*(undefined4 *)(&DAT_00285338 + lVar5),fVar15,uVar20);
  fVar30 = (float)NEON_fmadd(*(undefined4 *)(&DAT_00285338 + lVar6),fVar15,uVar29);
  fVar27 = (float)NEON_fmadd(*(undefined4 *)(&DAT_00285338 + lVar7),fVar15,uVar26);
  fVar28 = (float)NEON_fmadd(*(undefined4 *)(&DAT_00285338 + lVar8),fVar19,uVar31);
  fVar25 = (float)NEON_fmadd(*(undefined4 *)(&DAT_00285338 + lVar10),fVar19,uVar24);
  pdVar14 = *(double **)(param_1 + 8);
  fVar32 = (float)NEON_fmadd(*(undefined4 *)(&DAT_00285338 + lVar9),fVar19,uVar33);
  fVar34 = (float)NEON_fmadd(*(undefined4 *)(&DAT_00285338 + lVar11),fVar19,uVar22);
  uVar22 = NEON_fmadd(fVar16,0x40c00000,0xc1700000);
  uVar20 = NEON_fmadd(fVar15,0x40c00000,0xc1700000);
  *(undefined4 *)((long)pdVar14 + 0xc) = 3;
  fVar19 = (float)NEON_fmadd(fVar16,uVar22,0x41200000);
  fVar21 = (float)NEON_fmadd(fVar18,fVar17 - fVar21,fVar21);
  fVar27 = (float)NEON_fmadd(fVar18,fVar27 - fVar30,fVar30);
  fVar25 = (float)NEON_fmadd(fVar18,fVar25 - fVar28,fVar28);
  fVar17 = (float)NEON_fmadd(fVar15,uVar20,0x41200000);
  fVar18 = (float)NEON_fmadd(fVar18,fVar34 - fVar32,fVar32);
  fVar19 = fVar16 * fVar16 * fVar16 * fVar19;
  fVar16 = (float)NEON_fmadd(fVar19,fVar27 - fVar21,fVar21);
  fVar19 = (float)NEON_fmadd(fVar19,fVar18 - fVar25,fVar25);
  fVar17 = (float)NEON_fmadd(fVar15 * fVar15 * fVar15 * fVar17,fVar19 - fVar16,fVar16);
  *pdVar14 = (double)fVar17;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  if (*(long *)(lVar12 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0062875c  FUN_0062875c =====

undefined8 FUN_0062875c(lua_State *param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = (double)luaL_checknumber(param_1,1);
  dVar3 = (double)luaL_checknumber(param_1,2);
  dVar4 = (double)luaL_checknumber(param_1,3);
  if (dVar3 <= dVar4) {
    pdVar1 = *(double **)(param_1 + 8);
    *(undefined4 *)((long)pdVar1 + 0xc) = 3;
    if (dVar3 <= dVar2) {
      dVar3 = dVar2;
    }
    if (dVar3 == dVar4 || dVar3 < dVar4 != (NAN(dVar3) || NAN(dVar4))) {
      dVar4 = dVar3;
    }
    *pdVar1 = dVar4;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  luaL_argerrorL(param_1,3,"max must be greater than or equal to min");
}


// ===== 006287f4  FUN_006287f4 =====

undefined8 FUN_006287f4(lua_State *param_1)

{
  undefined8 *puVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  dVar2 = (double)luaL_checknumber(param_1,1);
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined4 *)((long)puVar1 + 0xc) = 3;
  uVar3 = 0xbff0000000000000;
  if (dVar2 >= 0.0) {
    uVar3 = 0;
  }
  uVar4 = 0x3ff0000000000000;
  if (dVar2 == 0.0 || dVar2 < 0.0 != NAN(dVar2)) {
    uVar4 = uVar3;
  }
  *puVar1 = uVar4;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 00628850  FUN_00628850 =====

undefined8 FUN_00628850(lua_State *param_1)

{
  long *plVar1;
  double dVar2;
  
  dVar2 = (double)luaL_checknumber(param_1,1);
  plVar1 = *(long **)(param_1 + 8);
  *(undefined4 *)((long)plVar1 + 0xc) = 3;
  *plVar1 = (long)dVar2;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 00628898  FUN_00628898 =====

undefined8 FUN_00628898(lua_State *param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar2 = (double)luaL_checknumber(param_1,1);
  dVar3 = (double)luaL_checknumber(param_1,2);
  dVar4 = (double)luaL_checknumber(param_1,3);
  dVar5 = (double)luaL_checknumber(param_1,4);
  dVar6 = (double)luaL_checknumber(param_1,5);
  pdVar1 = *(double **)(param_1 + 8);
  *(undefined4 *)((long)pdVar1 + 0xc) = 3;
  *pdVar1 = dVar5 + ((dVar2 - dVar3) * (dVar6 - dVar5)) / (dVar4 - dVar3);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 00628944  FUN_00628944 =====

undefined8 FUN_00628944(lua_State *param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = (double)luaL_checknumber(param_1,1);
  dVar3 = (double)luaL_checknumber(param_1,2);
  dVar4 = (double)luaL_checknumber(param_1,3);
  pdVar1 = *(double **)(param_1 + 8);
  *(undefined4 *)((long)pdVar1 + 0xc) = 3;
  dVar2 = (double)NEON_fmadd(dVar3 - dVar2,dVar4,dVar2);
  if (dVar4 != 1.0) {
    dVar3 = dVar2;
  }
  *pdVar1 = dVar3;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 006289c4  FUN_006289c4 =====

undefined8 FUN_006289c4(lua_State *param_1)

{
  uint *puVar1;
  double dVar2;
  
  dVar2 = (double)luaL_checknumber(param_1,1);
  puVar1 = *(uint **)(param_1 + 8);
  puVar1[3] = 1;
  *puVar1 = (uint)NAN(dVar2);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 00628a10  FUN_00628a10 =====

undefined8 FUN_00628a10(lua_State *param_1)

{
  uint *puVar1;
  double dVar2;
  
  dVar2 = (double)luaL_checknumber(param_1,1);
  puVar1 = *(uint **)(param_1 + 8);
  puVar1[3] = 1;
  *puVar1 = (uint)(ABS(dVar2) == INFINITY);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 00628a68  FUN_00628a68 =====

undefined8 FUN_00628a68(lua_State *param_1)

{
  uint uVar1;
  uint *puVar2;
  double dVar3;
  
  dVar3 = (double)luaL_checknumber(param_1,1);
  dVar3 = ABS(dVar3);
  puVar2 = *(uint **)(param_1 + 8);
  puVar2[3] = 1;
  uVar1 = (uint)(dVar3 < INFINITY);
  if (dVar3 != INFINITY && dVar3 < INFINITY == NAN(dVar3)) {
    uVar1 = 1;
  }
  *puVar2 = uVar1;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 00628ac4  FUN_00628ac4 =====

void FUN_00628ac4(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_006214f8(param_1,"memory allocation error: block too big");
}


// ===== 00628ad8  FUN_00628ad8 =====

long FUN_00628ad8(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x18);
  if (param_2 - 1U < 0x400) {
    if (-1 < (char)(&DAT_00688518)[param_2]) {
      lVar2 = FUN_00628bac(param_1,(&DAT_00688518)[param_2]);
      goto LAB_00628b50;
    }
  }
  lVar2 = (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 0x18),0,0,param_2);
  if ((param_2 != 0) && (lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_006222c0(param_1,4);
  }
LAB_00628b50:
  lVar1 = lVar5 + (param_3 & 0xff) * 8;
  lVar4 = *(long *)(lVar1 + 0x2c30);
  pcVar3 = *(code **)(lVar5 + 0x550);
  *(long *)(lVar5 + 0x48) = *(long *)(lVar5 + 0x48) + param_2;
  *(long *)(lVar1 + 0x2c30) = lVar4 + param_2;
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_1,0,param_2);
  }
  return lVar2;
}


// ===== 00628bac  FUN_00628bac =====

long * FUN_00628bac(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  
  plVar8 = (long *)(*(long *)(param_1 + 0x18) + (ulong)param_2 * 8 + 0x60);
  lVar4 = *plVar8;
  if (lVar4 == 0) {
    lVar4 = FUN_00628c60(param_1,*(long *)(param_1 + 0x18) + 0x60,0,param_2,1);
  }
  uVar1 = *(uint *)(lVar4 + 0x30);
  if ((int)uVar1 < 0) {
    plVar5 = *(long **)(lVar4 + 0x28);
    *(long *)(lVar4 + 0x28) = *plVar5;
    iVar2 = *(int *)(lVar4 + 0x34);
    *plVar5 = lVar4;
    *(int *)(lVar4 + 0x34) = iVar2 + 1;
    if (*(long *)(lVar4 + 0x28) != 0) goto LAB_00628c50;
  }
  else {
    iVar2 = *(int *)(lVar4 + 0x24);
    iVar3 = *(int *)(lVar4 + 0x34);
    lVar7 = *(long *)(lVar4 + 0x28);
    plVar5 = (long *)(lVar4 + (ulong)uVar1 + 0x40);
    *plVar5 = lVar4;
    iVar2 = uVar1 - iVar2;
    *(int *)(lVar4 + 0x30) = iVar2;
    *(int *)(lVar4 + 0x34) = iVar3 + 1;
    if ((lVar7 != 0) || (-1 < iVar2)) goto LAB_00628c50;
  }
  puVar6 = *(undefined8 **)(lVar4 + 8);
  *plVar8 = (long)puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
  }
  *(undefined8 *)(lVar4 + 8) = 0;
LAB_00628c50:
  return plVar5 + 1;
}


// ===== 00628c60  FUN_00628c60 =====

void FUN_00628c60(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0x7fe8;
  if ((int)(&DAT_00688478)[param_4 & 0xff] < 0x201) {
    uVar3 = 0x3fe8;
  }
  iVar4 = 8;
  if ((param_5 & 1) == 0) {
    iVar4 = 0;
  }
  iVar4 = (&DAT_00688478)[param_4 & 0xff] + iVar4;
  uVar1 = 0;
  if ((long)iVar4 != 0) {
    uVar1 = ((ulong)uVar3 - 0x40) / (ulong)(long)iVar4;
  }
  uVar2 = FUN_00628cc8(param_1,param_3,(ulong)uVar3,iVar4,uVar1);
  *(undefined8 *)(param_2 + (param_4 & 0xff) * 8) = uVar2;
  return;
}


// ===== 00628cc8  FUN_00628cc8 =====

void FUN_00628cc8(long param_1,long *param_2,int param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)
           (**(code **)(*(long *)(param_1 + 0x18) + 0x10))
                     (*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18),0,0,(long)param_3);
  if (puVar1 != (undefined8 *)0x0) {
    *(int *)(puVar1 + 4) = param_3;
    *(int *)((long)puVar1 + 0x24) = param_4;
    puVar1[5] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    *(int *)(puVar1 + 6) = (param_5 + -1) * param_4;
    *(undefined4 *)((long)puVar1 + 0x34) = 0;
    if (param_2 != (long *)0x0) {
      lVar2 = *param_2;
      puVar1[3] = lVar2;
      if (lVar2 != 0) {
        *(undefined8 **)(lVar2 + 0x10) = puVar1;
      }
      *param_2 = (long)puVar1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006222c0(param_1,4);
}


// ===== 00628d60  FUN_00628d60 =====

long FUN_00628d60(long param_1,ulong param_2,byte param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = *(long *)(param_1 + 0x18);
  if ((param_2 - 1 < 0x400) && (bVar2 = (&DAT_00688518)[param_2], -1 < (char)bVar2)) {
    lVar5 = lVar10 + (ulong)bVar2 * 8;
    lVar4 = *(long *)(lVar5 + 0x1a0);
    if (lVar4 == 0) {
      lVar4 = FUN_00628c60(param_1,lVar10 + 0x1a0,lVar10 + 0x2e8,(ulong)bVar2,0);
    }
    uVar1 = *(uint *)(lVar4 + 0x30);
    if ((int)uVar1 < 0) {
      lVar9 = *(long *)(lVar4 + 0x28);
      lVar8 = *(long *)(lVar9 + 8);
      *(int *)(lVar4 + 0x34) = *(int *)(lVar4 + 0x34) + 1;
      *(long *)(lVar4 + 0x28) = lVar8;
      if (lVar8 != 0) goto LAB_00628e2c;
    }
    else {
      iVar3 = uVar1 - *(int *)(lVar4 + 0x24);
      lVar9 = lVar4 + (ulong)uVar1 + 0x40;
      *(int *)(lVar4 + 0x30) = iVar3;
      *(int *)(lVar4 + 0x34) = *(int *)(lVar4 + 0x34) + 1;
      if ((*(long *)(lVar4 + 0x28) != 0) || (-1 < iVar3)) goto LAB_00628e2c;
    }
    puVar7 = *(undefined8 **)(lVar4 + 8);
    *(undefined8 **)(lVar5 + 0x1a0) = puVar7;
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
    }
    *(undefined8 *)(lVar4 + 8) = 0;
  }
  else {
    lVar5 = FUN_00628cc8(param_1,lVar10 + 0x2e8,(int)param_2 + 0x40,param_2 & 0xffffffff,1);
    lVar9 = lVar5 + 0x40;
    *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) - *(int *)(lVar5 + 0x24);
    *(int *)(lVar5 + 0x34) = *(int *)(lVar5 + 0x34) + 1;
  }
LAB_00628e2c:
  lVar5 = lVar10 + (ulong)param_3 * 8;
  lVar4 = *(long *)(lVar5 + 0x2c30);
  pcVar6 = *(code **)(lVar10 + 0x550);
  *(ulong *)(lVar10 + 0x48) = *(long *)(lVar10 + 0x48) + param_2;
  *(ulong *)(lVar5 + 0x2c30) = lVar4 + param_2;
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(param_1,0,param_2);
  }
  return lVar9;
}


// ===== 00628eb0  FUN_00628eb0 =====

void FUN_00628eb0(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (param_3 - 1U < 0x400) {
    if (-1 < (char)(&DAT_00688518)[param_3]) {
      FUN_00628f3c(param_1,(&DAT_00688518)[param_3]);
      goto LAB_00628f10;
    }
  }
  (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 0x18),param_2,param_3,0);
LAB_00628f10:
  lVar1 = lVar3 + (param_4 & 0xff) * 8;
  lVar2 = *(long *)(lVar1 + 0x2c30);
  *(long *)(lVar3 + 0x48) = *(long *)(lVar3 + 0x48) - param_3;
  *(long *)(lVar1 + 0x2c30) = lVar2 - param_3;
  return;
}


// ===== 00628f3c  FUN_00628f3c =====

void FUN_00628f3c(long param_1,uint param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  plVar2 = (long *)(param_3 + -8);
  plVar3 = (long *)*plVar2;
  lVar4 = *(long *)(param_1 + 0x18);
  lVar5 = plVar3[5];
  if (lVar5 == 0) {
    if ((int)plVar3[6] < 0) {
      puVar6 = (undefined8 *)(lVar4 + (ulong)param_2 * 8 + 0x60);
      puVar7 = (undefined8 *)*puVar6;
      plVar3[1] = (long)puVar7;
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = plVar3;
      }
      *puVar6 = plVar3;
      lVar5 = plVar3[5];
    }
    else {
      lVar5 = 0;
    }
  }
  iVar1 = *(int *)((long)plVar3 + 0x34);
  *plVar2 = lVar5;
  plVar3[5] = (long)plVar2;
  iVar1 = iVar1 + -1;
  *(int *)((long)plVar3 + 0x34) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  lVar5 = *plVar3;
  plVar2 = (long *)plVar3[1];
  if (plVar2 != (long *)0x0) {
    *plVar2 = lVar5;
  }
  if (lVar5 == 0) {
    puVar6 = (undefined8 *)(lVar4 + 0x60 + (ulong)(param_2 & 0xff) * 8);
    if ((long *)*puVar6 != plVar3) goto LAB_00628fc8;
  }
  else {
    puVar6 = (undefined8 *)(lVar5 + 8);
  }
  *puVar6 = plVar2;
LAB_00628fc8:
                    /* WARNING: Could not recover jumptable at 0x00628fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))
            (*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18),plVar3,(long)(int)plVar3[4],0);
  return;
}


// ===== 00628fe0  FUN_00628fe0 =====

void FUN_00628fe0(long param_1,undefined1 *param_2,long param_3,byte param_4,long *param_5)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x18);
  lVar5 = lVar7;
  lVar4 = lVar7;
  if (param_3 - 1U < 0x400) {
    cVar3 = (&DAT_00688518)[param_3];
    if (-1 < cVar3) {
      *param_2 = 0;
      lVar5 = param_5[5];
      lVar4 = *(long *)(param_1 + 0x18);
      if (lVar5 == 0) {
        if ((int)param_5[6] < 0) {
          lVar5 = lVar4 + (ulong)(uint)(int)cVar3 * 8;
          puVar6 = *(undefined8 **)(lVar5 + 0x1a0);
          param_5[1] = (long)puVar6;
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = param_5;
          }
          *(long **)(lVar5 + 0x1a0) = param_5;
          lVar5 = param_5[5];
        }
        else {
          lVar5 = 0;
        }
      }
      iVar2 = *(int *)((long)param_5 + 0x34);
      *(long *)(param_2 + 8) = lVar5;
      param_5[5] = (long)param_2;
      iVar2 = iVar2 + -1;
      *(int *)((long)param_5 + 0x34) = iVar2;
      if (iVar2 != 0) goto LAB_0062904c;
      lVar5 = *param_5;
      plVar1 = (long *)param_5[1];
      if (plVar1 != (long *)0x0) {
        *plVar1 = lVar5;
      }
      if (lVar5 == 0) {
        puVar6 = (undefined8 *)(lVar4 + 0x1a0 + ((long)cVar3 & 0xffffffffU) * 8);
        if ((long *)*puVar6 == param_5) goto LAB_006290c0;
      }
      else {
        puVar6 = (undefined8 *)(lVar5 + 8);
LAB_006290c0:
        *puVar6 = plVar1;
      }
      lVar5 = *(long *)(param_1 + 0x18);
    }
  }
  FUN_006290e8(lVar5,lVar4 + 0x2e8,param_5);
LAB_0062904c:
  lVar4 = lVar7 + (ulong)param_4 * 8;
  lVar5 = *(long *)(lVar4 + 0x2c30);
  *(long *)(lVar7 + 0x48) = *(long *)(lVar7 + 0x48) - param_3;
  *(long *)(lVar4 + 0x2c30) = lVar5 - param_3;
  return;
}


// ===== 006290e8  FUN_006290e8 =====

void FUN_006290e8(long param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != (long *)0x0) {
    lVar1 = *(long *)(param_3 + 0x10);
    lVar2 = *(long *)(param_3 + 0x18);
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar1;
    }
    if (lVar1 == 0) {
      if (*param_2 != param_3) goto LAB_00629118;
    }
    else {
      param_2 = (long *)(lVar1 + 0x18);
    }
    *param_2 = lVar2;
  }
LAB_00629118:
                    /* WARNING: Could not recover jumptable at 0x0062912c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            (*(undefined8 *)(param_1 + 0x18),param_3,(long)*(int *)(param_3 + 0x20),0);
  return;
}


// ===== 00629130  FUN_00629130 =====

void * FUN_00629130(long param_1,void *param_2,ulong param_3,ulong param_4,byte param_5)

{
  long lVar1;
  size_t __n;
  void *__dest;
  char cVar2;
  code *pcVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  if (param_4 - 1 < 0x400) {
    cVar2 = (&DAT_00688518)[param_4];
  }
  else {
    cVar2 = -1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (param_3 - 1 < 0x400) {
    iVar5 = (int)(char)(&DAT_00688518)[param_3];
  }
  else {
    iVar5 = -1;
  }
  if ((cVar2 < '\0') && (iVar5 < 0)) {
    __dest = (void *)(**(code **)(lVar6 + 0x10))
                               (*(undefined8 *)(lVar6 + 0x18),param_2,param_3,param_4);
    if ((param_4 != 0) && (__dest == (void *)0x0)) {
LAB_006292b4:
                    /* WARNING: Subroutine does not return */
      FUN_006222c0(param_1,4);
    }
  }
  else {
    if (cVar2 < '\0') {
      __dest = (void *)(**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 0x18),0,0,param_4);
      if ((param_4 != 0) && (__dest == (void *)0x0)) goto LAB_006292b4;
    }
    else {
      __dest = (void *)FUN_00628bac(param_1);
    }
    if ((param_3 != 0) && (param_4 != 0)) {
      __n = param_3;
      if (param_4 <= param_3) {
        __n = param_4;
      }
      memcpy(__dest,param_2,__n);
    }
    if (iVar5 < 0) {
      (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 0x18),param_2,param_3,0);
    }
    else {
      FUN_00628f3c(param_1,iVar5,param_2);
    }
  }
  lVar1 = lVar6 + (ulong)param_5 * 8;
  lVar4 = *(long *)(lVar1 + 0x2c30);
  pcVar3 = *(code **)(lVar6 + 0x550);
  *(ulong *)(lVar6 + 0x48) = (param_4 - param_3) + *(long *)(lVar6 + 0x48);
  *(ulong *)(lVar1 + 0x2c30) = (param_4 - param_3) + lVar4;
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_1,param_3,param_4);
  }
  return __dest;
}


// ===== 006292c0  FUN_006292c0 =====

void FUN_006292c0(ulong param_1,undefined4 *param_2)

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
  long lVar17;
  bool bVar18;
  bool bVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  int iVar29;
  undefined4 uVar30;
  uint uVar31;
  ulong uVar32;
  byte *pbVar33;
  ulong uVar34;
  byte bVar35;
  int iVar36;
  ulong uVar37;
  uint uVar38;
  ulong uVar39;
  ulong uVar40;
  long lVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined2 auStack_30 [2];
  byte abStack_2c [20];
  long local_18;
  
  lVar17 = tpidr_el0;
  uVar31 = (uint)(param_1 >> 0x34) & 0x7ff;
  uVar28 = -((long)param_1 >> 0x3f);
  param_1 = param_1 & 0xfffffffffffff;
  local_18 = *(long *)(lVar17 + 0x28);
  if (uVar31 == 0x7ff) {
    if (param_1 == 0) {
      uVar30 = *(undefined4 *)(&DAT_00249be6 + (uVar28 ^ 1));
      pbVar20 = (byte *)((long)param_2 + uVar28 + 3);
    }
    else {
      pbVar20 = (byte *)((long)param_2 + 3);
      uVar30 = 0x6e616e;
    }
    *param_2 = uVar30;
    goto LAB_00629790;
  }
  pbVar21 = (byte *)((long)param_2 + uVar28);
  *(undefined1 *)param_2 = 0x2d;
  if ((param_1 == 0) && (uVar31 == 0)) {
    pbVar20 = pbVar21 + 1;
    *pbVar21 = 0x30;
    goto LAB_00629790;
  }
  iVar36 = -0x432;
  if (uVar31 != 0) {
    iVar36 = uVar31 - 0x433;
  }
  uVar38 = -iVar36;
  if (uVar31 != 0) {
    param_1 = param_1 | 0x10000000000000;
  }
  if ((uVar38 < 0x35) && ((param_1 & (-1L << ((ulong)uVar38 & 0x3f) ^ 0xffffffffffffffffU)) == 0)) {
    uVar40 = param_1 >> ((ulong)uVar38 & 0x3f);
    iVar29 = 0;
  }
  else {
    iVar29 = -0x1ffc0;
    uVar31 = (uint)(iVar36 != -0x432 && param_1 == 0x10000000000000);
    if (uVar31 == 0) {
      iVar29 = 0;
    }
    iVar29 = iVar29 + iVar36 * 0x4d104 >> 0x14;
    uVar38 = 0x124U - iVar29 & 0xf;
    lVar41 = (ulong)(0x124U - iVar29 >> 4) * 0x18;
    uVar40 = *(ulong *)(&DAT_00285798 + (ulong)uVar38 * 8);
    uVar32 = (ulong)(iVar36 + (iVar29 * -0x35269e >> 0x14) + 1);
    uVar37 = *(ulong *)(&DAT_00285400 + lVar41) >> (uVar38 << 2);
    uVar34 = ((ulong)uVar31 | param_1 << 2) - 2 << (uVar32 & 0x3f);
    uVar26 = uVar40 * *(ulong *)(&DAT_002853f0 + lVar41);
    uVar39 = uVar37 >> 3 & 1;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar40;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = *(ulong *)(&DAT_002853f8 + lVar41);
    uVar24 = SUB168(auVar1 * auVar9,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar40;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = *(ulong *)(&DAT_002853f0 + lVar41);
    lVar41 = SUB168(auVar2 * auVar10,8);
    uVar40 = uVar24 + uVar26;
    if (CARRY8(uVar24,uVar26)) {
      lVar41 = lVar41 + 1;
    }
    uVar24 = ((uVar40 << uVar39) - (uVar37 & 7)) + 4;
    uVar27 = (param_1 << 2) << (uVar32 & 0x3f);
    uVar40 = (lVar41 << uVar39) + (uVar40 >> 0x3f & uVar37 >> 3);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar24;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar34;
    uVar37 = SUB168(auVar3 * auVar11,8);
    uVar32 = (param_1 << 2 | 2) << (uVar32 & 0x3f);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar40;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar34;
    uVar26 = SUB168(auVar4 * auVar12,8);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar24;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar27;
    uVar39 = SUB168(auVar5 * auVar13,8);
    if (CARRY8(uVar40 * uVar34,uVar37)) {
      uVar26 = uVar26 + 1;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar40;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar27;
    uVar23 = SUB168(auVar6 * auVar14,8);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar24;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar32;
    uVar25 = SUB168(auVar7 * auVar15,8);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar40;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar32;
    uVar24 = SUB168(auVar8 * auVar16,8);
    if (CARRY8(uVar40 * uVar27,uVar39)) {
      uVar23 = uVar23 + 1;
    }
    uVar39 = uVar23 | 1 < uVar40 * uVar27 + uVar39;
    if (CARRY8(uVar40 * uVar32,uVar25)) {
      uVar24 = uVar24 + 1;
    }
    param_1 = param_1 & 1;
    uVar26 = uVar26 | 1 < uVar40 * uVar34 + uVar37;
    uVar24 = uVar24 | 1 < uVar40 * uVar32 + uVar25;
    if (0x27 < uVar39) {
      uVar40 = uVar23 / 0x28;
      lVar41 = uVar40 * 4 + uVar23 / 0x28;
      bVar19 = (param_1 | lVar41 * 8) + 0x28 <= uVar24;
      if (bVar19) {
        uVar40 = uVar40 + 1;
      }
      if ((ulong)(lVar41 * 8) < uVar26 + param_1 == bVar19) {
        iVar29 = iVar29 + 1;
        goto LAB_00629530;
      }
    }
    bVar19 = (uVar23 & 0xfffffffffffffffc | param_1) + 4 <= uVar24;
    bVar18 = (uVar23 | 3) - (uVar23 >> 2 & 1) <= uVar39;
    if (bVar19 == (uVar23 & 0xfffffffffffffffc) < uVar26 + param_1) {
      bVar18 = bVar19;
    }
    uVar40 = (uVar23 >> 2) + (ulong)bVar18;
  }
LAB_00629530:
  pbVar20 = abStack_2c;
  pbVar33 = abStack_2c;
  uVar24 = uVar40;
  if (0x270 < uVar40 >> 4) {
    do {
      uVar24 = uVar40 / 10000;
      uVar38 = (int)uVar40 + (int)uVar24 * 0xd8f0;
      uVar31 = (uVar38 >> 2 & 0x3fff) / 0x19;
      pbVar33 = pbVar20 + -4;
      *(undefined2 *)pbVar33 =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (ulong)uVar31 * 2);
      *(undefined2 *)(pbVar20 + -2) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + ((ulong)(uVar38 + uVar31 * -100) & 0xffff) * 2);
      bVar19 = 99999999 < uVar40;
      pbVar20 = pbVar33;
      uVar40 = uVar24;
    } while (bVar19);
  }
  uVar31 = (uint)uVar24;
  uVar38 = uVar31;
  if (9 < uVar31) {
    do {
      uVar40 = uVar24 & 0xffffffff;
      uVar38 = (uint)uVar24;
      uVar31 = (uint)(uVar40 / 100);
      uVar24 = uVar40 / 100;
      pbVar33 = pbVar33 + -2;
      *(undefined2 *)pbVar33 =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (ulong)(uVar38 + (int)uVar24 * -100) * 2);
    } while (999 < uVar38);
    uVar38 = (uint)(uVar40 / 100);
  }
  if (uVar38 != 0) {
    pbVar33 = pbVar33 + -1;
    *pbVar33 = (byte)uVar31 | 0x30;
  }
  uVar40 = (long)abStack_2c - (long)pbVar33;
  iVar36 = (int)uVar40;
  uVar31 = iVar29 + iVar36;
  if (uVar31 + 5 < 0x1b) {
    if ((int)uVar31 < 1) {
      *(undefined1 *)((long)param_2 + uVar28) = 0x30;
      pbVar22 = pbVar21 + 2;
      pbVar22[0] = 0x30;
      pbVar22[1] = 0x30;
      pbVar22[2] = 0x30;
      pbVar22[3] = 0x30;
      pbVar21[1] = 0x2e;
      pbVar21[6] = 0x30;
      uVar43 = *(undefined8 *)(pbVar33 + 8);
      uVar42 = *(undefined8 *)pbVar33;
      pbVar22 = pbVar22 + -uVar31;
      pbVar20 = (byte *)((long)param_2 + (ulong)-uVar31 + uVar28 + (long)iVar36 + 3);
      pbVar22[0x10] = pbVar33[0x10];
      *(undefined8 *)(pbVar22 + 8) = uVar43;
      *(undefined8 *)pbVar22 = uVar42;
      do {
        pbVar21 = pbVar20 + -2;
        pbVar20 = pbVar20 + -1;
      } while (*pbVar21 == 0x30);
    }
    else {
      if (iVar29 == 0) {
        uVar43 = *(undefined8 *)(pbVar33 + 8);
        uVar42 = *(undefined8 *)pbVar33;
        pbVar21[0x10] = pbVar33[0x10];
        *(undefined8 *)(pbVar21 + 8) = uVar43;
        *(undefined8 *)pbVar21 = uVar42;
      }
      else {
        if (iVar29 < 0) {
          uVar42 = *(undefined8 *)pbVar33;
          pbVar22 = pbVar21 + uVar31;
          *(undefined8 *)(pbVar21 + 8) = *(undefined8 *)(pbVar33 + 8);
          *(undefined8 *)pbVar21 = uVar42;
          *pbVar22 = 0x2e;
          uVar42 = *(undefined8 *)(pbVar33 + uVar31);
          pbVar20 = (byte *)((long)param_2 + uVar28 + (uVar40 & 0xffffffff) + 2);
          *(undefined8 *)(pbVar22 + 9) = *(undefined8 *)(pbVar33 + uVar31 + 8);
          *(undefined8 *)(pbVar22 + 1) = uVar42;
          do {
            pbVar21 = pbVar20 + -2;
            pbVar20 = pbVar20 + -1;
          } while (*pbVar21 == 0x30);
          goto LAB_00629790;
        }
        uVar43 = *(undefined8 *)(pbVar33 + 8);
        uVar42 = *(undefined8 *)pbVar33;
        pbVar21[0x10] = pbVar33[0x10];
        *(undefined8 *)(pbVar21 + 8) = uVar43;
        *(undefined8 *)pbVar21 = uVar42;
        pbVar20 = pbVar21 + iVar36;
        pbVar20[0] = 0x30;
        pbVar20[1] = 0x30;
        pbVar20[2] = 0x30;
        pbVar20[3] = 0x30;
        pbVar20[4] = 0x30;
        pbVar20[5] = 0x30;
        pbVar20[6] = 0x30;
        pbVar20[7] = 0x30;
      }
      pbVar20 = pbVar21 + uVar31;
    }
  }
  else {
    bVar35 = *pbVar33;
    pbVar21[1] = 0x2e;
    *pbVar21 = bVar35;
    uVar42 = *(undefined8 *)(pbVar33 + 1);
    *(undefined8 *)(pbVar21 + 10) = *(undefined8 *)(pbVar33 + 9);
    *(undefined8 *)(pbVar21 + 2) = uVar42;
    pbVar20 = pbVar21 + 1 + iVar36;
    do {
      pbVar21 = pbVar20;
      pbVar20 = pbVar21 + -1;
    } while (*pbVar20 == 0x30);
    if (*pbVar20 != 0x2e) {
      pbVar20 = pbVar21;
    }
    uVar38 = uVar31 - 1;
    if ((int)(uVar31 - 1) < 0) {
      uVar38 = 1 - uVar31;
    }
    bVar35 = 0x2d;
    if (0 < (int)uVar31) {
      bVar35 = 0x2b;
    }
    *pbVar20 = 0x65;
    pbVar20[1] = bVar35;
    if (uVar38 < 100) {
      pbVar21 = pbVar20 + 2;
    }
    else {
      pbVar21 = pbVar20 + 3;
      uVar31 = uVar38 / 100;
      uVar38 = uVar38 % 100;
      pbVar20[2] = (char)uVar31 + 0x30;
    }
    pbVar20 = pbVar21 + 2;
    *(undefined2 *)pbVar21 =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + (ulong)uVar38 * 2);
  }
LAB_00629790:
  if (*(long *)(lVar17 + 0x28) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pbVar20);
  }
  return;
}


// ===== 006297e4  FUN_006297e4 =====

long FUN_006297e4(long param_1,ulong param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar3 = 1;
  uVar4 = -param_2;
  if (-1 < (long)param_2) {
    uVar4 = param_2;
  }
  if (9 < uVar4) {
    uVar6 = 10;
    uVar2 = uVar3;
    do {
      uVar3 = uVar2 + 1;
      if (0x11 < uVar2) break;
      uVar6 = uVar6 * 10;
      uVar2 = uVar3;
    } while (uVar6 < uVar4 || uVar6 - uVar4 == 0);
  }
  uVar5 = -(int)((long)param_2 >> 0x3f);
  uVar2 = uVar5 ^ 1;
  lVar7 = (ulong)uVar3 - (ulong)uVar2;
  *(undefined1 *)(param_1 + (ulong)(uVar3 - uVar2) + 1) = 0;
  do {
    *(byte *)(param_1 + lVar7) = (char)uVar4 + (char)(uVar4 / 10) * -10 | 0x30;
    lVar7 = lVar7 + -1;
    bVar1 = 9 < uVar4;
    uVar4 = uVar4 / 10;
  } while (bVar1);
  if ((long)param_2 < 0) {
    *(undefined1 *)(param_1 + (int)lVar7) = 0x2d;
  }
  return param_1 + (ulong)(uVar3 + uVar5);
}


// ===== 0062987c  FUN_0062987c =====

bool FUN_0062987c(double *param_1,double *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)((long)param_1 + 0xc);
  if (fVar2 != *(float *)((long)param_2 + 0xc)) {
    return false;
  }
  if ((int)fVar2 < 3) {
    if (fVar2 == 0.0) {
      return true;
    }
    if (fVar2 == 1.4013e-45) {
      fVar2 = *(float *)param_1;
      fVar3 = *(float *)param_2;
    }
    else {
      if (fVar2 != 2.8026e-45) goto LAB_006298ec;
      if (*param_1 != *param_2) {
        return false;
      }
      fVar2 = *(float *)(param_1 + 1);
      fVar3 = *(float *)(param_2 + 1);
    }
    bVar1 = fVar2 == fVar3;
  }
  else {
    if (fVar2 == 7.00649e-45) {
      if (*(float *)param_1 != *(float *)param_2) {
        return false;
      }
      if (*(float *)((long)param_1 + 4) == *(float *)((long)param_2 + 4)) {
        return *(float *)(param_1 + 1) == *(float *)(param_2 + 1);
      }
      return false;
    }
    if ((fVar2 != 5.60519e-45) && (fVar2 == 4.2039e-45)) {
      return *param_1 == *param_2;
    }
LAB_006298ec:
    bVar1 = *param_1 == *param_2;
  }
  return bVar1;
}


// ===== 00629950  FUN_00629950 =====

bool FUN_00629950(double *param_1,double *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)((uint)*(float *)((long)param_1 + 0xc) & 0xf);
  if (fVar2 != *(float *)((long)param_2 + 0xc)) {
    return false;
  }
  if ((uint)fVar2 < 3) {
    if (fVar2 == 0.0) {
      return true;
    }
    if (fVar2 == 1.4013e-45) {
      fVar2 = *(float *)param_1;
      fVar3 = *(float *)param_2;
    }
    else {
      if (fVar2 != 2.8026e-45) goto LAB_006299c4;
      if (*param_1 != *param_2) {
        return false;
      }
      fVar2 = *(float *)(param_1 + 1);
      fVar3 = *(float *)(param_2 + 1);
    }
    bVar1 = fVar2 == fVar3;
  }
  else {
    if (fVar2 == 7.00649e-45) {
      if (*(float *)param_1 != *(float *)param_2) {
        return false;
      }
      if (*(float *)((long)param_1 + 4) == *(float *)((long)param_2 + 4)) {
        return *(float *)(param_1 + 1) == *(float *)(param_2 + 1);
      }
      return false;
    }
    if ((fVar2 != 5.60519e-45) && (fVar2 == 4.2039e-45)) {
      return *param_1 == *param_2;
    }
LAB_006299c4:
    bVar1 = *param_1 == *param_2;
  }
  return bVar1;
}


// ===== 00629a28  FUN_00629a28 =====

void FUN_00629a28(byte *param_1,double *param_2)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  byte *pbVar5;
  double dVar6;
  byte *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  dVar6 = strtod((char *)param_1,(char **)&local_40);
  *param_2 = dVar6;
  if (local_40 == param_1) {
    bVar3 = false;
  }
  else {
    bVar1 = *local_40;
    if ((bVar1 | 0x20) == 0x78) {
      uVar4 = strtoul((char *)param_1,(char **)&local_40,0x10);
      *param_2 = (double)uVar4;
      bVar1 = *local_40;
    }
    if (bVar1 == 0) {
      bVar3 = true;
    }
    else {
      do {
        do {
          pbVar5 = local_40 + 1;
          bVar1 = *local_40;
          local_40 = pbVar5;
        } while (bVar1 == 0x20);
      } while (0xfffffffa < bVar1 - 0xe);
      bVar3 = bVar1 == 0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


// ===== 00629af4  FUN_00629af4 =====

long FUN_00629af4(long param_1,char *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  char acStack_238 [512];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uStack_258 = param_3[1];
  local_260 = *param_3;
  uStack_248 = param_3[3];
  uStack_250 = param_3[2];
  vsnprintf(acStack_238,0x200,param_2,&local_260);
  puVar8 = *(undefined8 **)(param_1 + 8);
  sVar4 = strlen(acStack_238);
  uVar5 = FUN_0062b178(param_1,acStack_238,sVar4);
  *puVar8 = uVar5;
  lVar7 = *(long *)(param_1 + 0x28);
  plVar6 = *(long **)(param_1 + 8);
  *(undefined4 *)((long)puVar8 + 0xc) = 6;
  if (lVar7 - (long)plVar6 < 0x11) {
    iVar1 = *(int *)(param_1 + 0x48);
    iVar2 = iVar1 << 1;
    if (iVar1 < 1) {
      iVar2 = iVar1 + 1;
    }
    FUN_006222f4(param_1,iVar2,0);
    plVar6 = *(long **)(param_1 + 8);
  }
  *(long **)(param_1 + 8) = plVar6 + 2;
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return *plVar6 + 0x18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00629bcc  FUN_00629bcc =====

void FUN_00629bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 local_a0;
  undefined8 uStack_98;
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
  puStack_60 = &local_a0;
  uStack_58 = 0xffffff80ffffffd0;
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  FUN_00629af4(param_1,param_2,&local_70);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00629c60  FUN_00629c60 =====

char * FUN_00629c60(char *param_1,char *param_2,ulong param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  size_t sVar3;
  
  if (*param_2 == '@') {
    if (param_3 < 0x101) {
      return param_2 + 1;
    }
    param_1[2] = '.';
    param_2 = param_2 + (param_3 - 0xfc);
    pcVar2 = param_1 + 3;
    param_1[0] = '.';
    param_1[1] = '.';
    sVar3 = 0xfc;
  }
  else {
    if (*param_2 != '=') {
      sVar3 = strcspn(param_2,"\n\r");
      uVar1 = s__string___0024803c._0_8_;
      param_1[8] = '\"';
      param_1[9] = '\0';
      if (0xf0 < sVar3) {
        sVar3 = 0xf1;
      }
      *(undefined8 *)param_1 = uVar1;
      if (param_2[sVar3] == '\0') {
        strcat(param_1,param_2);
      }
      else {
        pcVar2 = strncat(param_1,param_2,sVar3);
        sVar3 = strlen(pcVar2);
        builtin_strncpy(param_1 + sVar3,"...",4);
      }
      sVar3 = strlen(param_1);
      pcVar2 = param_1 + sVar3;
      pcVar2[0] = '\"';
      pcVar2[1] = ']';
      pcVar2[2] = '\0';
      return param_1;
    }
    param_2 = param_2 + 1;
    if (param_3 < 0x101) {
      return param_2;
    }
    sVar3 = 0xff;
    pcVar2 = param_1;
  }
  memcpy(pcVar2,param_2,sVar3);
  param_1[0xff] = '\0';
  return param_1;
}


// ===== 00629d74  luaopen_os =====

/* luaopen_os(lua_State*) */

undefined8 luaopen_os(lua_State *param_1)

{
  luaL_register(param_1,"os",(luaL_Reg *)&PTR_s_clock_0067aad8);
  return 1;
}


// ===== 00629d9c  FUN_00629d9c =====

undefined8 FUN_00629d9c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = lua_clock();
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = uVar3;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)puVar1 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return 1;
}


// ===== 00629ddc  FUN_00629ddc =====

undefined8 FUN_00629ddc(lua_State *param_1)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  byte *__s1;
  tm *__tp;
  void *pvVar4;
  size_t sVar5;
  byte bVar6;
  undefined8 *puVar7;
  long lVar8;
  double *pdVar9;
  undefined8 *puVar10;
  uint *puVar11;
  byte *pbVar12;
  double dVar13;
  tm tStack_388;
  long local_350;
  char local_344;
  byte local_343;
  undefined1 local_342;
  char acStack_340 [200];
  byte *local_278;
  byte *pbStack_270;
  lua_State *local_268;
  undefined8 uStack_260;
  byte local_258 [512];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  puVar10 = *(undefined8 **)(param_1 + 8);
  puVar7 = *(undefined8 **)(param_1 + 0x10);
  if (puVar7 < puVar10) {
    if (puVar7 == &DAT_00285948) {
      __s1 = &UNK_00248eef;
      puVar7 = &DAT_00285948;
    }
    else {
      if (*(int *)((long)puVar7 + 0xc) < 1) goto LAB_00629e4c;
      __s1 = (byte *)luaL_checklstring(param_1,1,(ulong *)0x0);
      puVar10 = *(undefined8 **)(param_1 + 8);
      puVar7 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  else {
LAB_00629e4c:
    __s1 = &UNK_00248eef;
  }
  if (((puVar7 + 2 < puVar10) && (puVar7 + 2 != &DAT_00285948)) &&
     (0 < *(int *)((long)puVar7 + 0x1c))) {
    dVar13 = (double)luaL_checknumber(param_1,2);
    local_350 = (long)dVar13;
  }
  else {
    local_350 = time((time_t *)0x0);
  }
  if (*__s1 == 0x21) {
    __tp = gmtime_r(&local_350,&tStack_388);
    __s1 = __s1 + 1;
joined_r0x00629ee0:
    if (__tp != (tm *)0x0) {
      iVar3 = strcmp((char *)__s1,"*t");
      if (iVar3 != 0) {
        local_344 = '%';
        local_278 = local_258;
        pbStack_270 = (byte *)&local_58;
        local_342 = 0;
        uStack_260 = 0;
        local_268 = param_1;
        do {
          bVar6 = *__s1;
          if (bVar6 == 0x25) {
            pbVar12 = __s1 + 1;
            bVar1 = *pbVar12;
            if (bVar1 == 0) goto LAB_00629f84;
            pvVar4 = memchr("aAbBcdHIjmMpSUwWxXyYzZ%",(uint)bVar1,0x18);
            if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              luaL_argerrorL(param_1,1,"invalid conversion specifier");
            }
            local_343 = bVar1;
            sVar5 = strftime(acStack_340,200,&local_344,__tp);
            luaL_addlstring((luaL_Strbuf *)&local_278,acStack_340,sVar5);
          }
          else {
            if (bVar6 == 0) {
              luaL_pushresult((luaL_Strbuf *)&local_278);
              goto LAB_0062a1e0;
            }
LAB_00629f84:
            if (pbStack_270 == local_278) {
              FUN_0061d968(&local_278,1,0xffffffff);
              bVar6 = *__s1;
            }
            *local_278 = bVar6;
            pbVar12 = __s1;
            local_278 = local_278 + 1;
          }
          __s1 = pbVar12 + 1;
        } while( true );
      }
      lua_createtable(param_1,0,9);
      iVar3 = __tp->tm_sec;
      pdVar9 = *(double **)(param_1 + 8);
      *(undefined4 *)((long)pdVar9 + 0xc) = 3;
      *pdVar9 = (double)iVar3;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
      lua_setfield(param_1,-2,"sec");
      iVar3 = __tp->tm_min;
      pdVar9 = *(double **)(param_1 + 8);
      *(undefined4 *)((long)pdVar9 + 0xc) = 3;
      *pdVar9 = (double)iVar3;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
      lua_setfield(param_1,-2,"min");
      iVar3 = __tp->tm_hour;
      pdVar9 = *(double **)(param_1 + 8);
      *(undefined4 *)((long)pdVar9 + 0xc) = 3;
      *pdVar9 = (double)iVar3;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
      lua_setfield(param_1,-2,"hour");
      iVar3 = __tp->tm_mday;
      pdVar9 = *(double **)(param_1 + 8);
      *(undefined4 *)((long)pdVar9 + 0xc) = 3;
      *pdVar9 = (double)iVar3;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
      lua_setfield(param_1,-2,"day");
      iVar3 = __tp->tm_mon;
      pdVar9 = *(double **)(param_1 + 8);
      *(undefined4 *)((long)pdVar9 + 0xc) = 3;
      *pdVar9 = (double)(iVar3 + 1);
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
      lua_setfield(param_1,-2,"month");
      iVar3 = __tp->tm_year;
      pdVar9 = *(double **)(param_1 + 8);
      *(undefined4 *)((long)pdVar9 + 0xc) = 3;
      *pdVar9 = (double)(iVar3 + 0x76c);
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
      lua_setfield(param_1,-2,"year");
      iVar3 = __tp->tm_wday;
      pdVar9 = *(double **)(param_1 + 8);
      *(undefined4 *)((long)pdVar9 + 0xc) = 3;
      *pdVar9 = (double)(iVar3 + 1);
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
      lua_setfield(param_1,-2,"wday");
      iVar3 = __tp->tm_yday;
      pdVar9 = *(double **)(param_1 + 8);
      *(undefined4 *)((long)pdVar9 + 0xc) = 3;
      *pdVar9 = (double)(iVar3 + 1);
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
      lua_setfield(param_1,-2,"yday");
      if (-1 < __tp->tm_isdst) {
        puVar11 = *(uint **)(param_1 + 8);
        *puVar11 = (uint)(__tp->tm_isdst != 0);
        lVar8 = *(long *)(param_1 + 8);
        puVar11[3] = 1;
        *(long *)(param_1 + 8) = lVar8 + 0x10;
        lua_setfield(param_1,-2,"isdst");
      }
      goto LAB_0062a1e0;
    }
  }
  else if (-1 < local_350) {
    __tp = localtime_r(&local_350,&tStack_388);
    goto joined_r0x00629ee0;
  }
  lVar8 = *(long *)(param_1 + 8);
  *(undefined4 *)(lVar8 + 0xc) = 0;
  *(long *)(param_1 + 8) = lVar8 + 0x10;
LAB_0062a1e0:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0062a228  FUN_0062a228 =====

undefined8 FUN_0062a228(lua_State *param_1)

{
  undefined8 *puVar1;
  time_t __time0;
  double *pdVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = (double)luaL_checknumber(param_1,1);
  __time0 = 0;
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  if ((puVar1 < *(undefined8 **)(param_1 + 8)) && (puVar1 != &DAT_00285948)) {
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x1c) < 1) {
      __time0 = 0;
    }
    else {
      dVar5 = (double)luaL_checknumber(param_1,2);
      __time0 = (time_t)dVar5;
    }
  }
  dVar4 = difftime((long)dVar4,__time0);
  pdVar2 = *(double **)(param_1 + 8);
  *pdVar2 = dVar4;
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)pdVar2 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar3 + 0x10;
  return 1;
}


// ===== 0062a2c8  FUN_0062a2c8 =====

undefined8 FUN_0062a2c8(lua_State *param_1)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  double *pdVar13;
  long lVar14;
  ulong uVar15;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (((puVar4 < *(undefined8 **)(param_1 + 8)) && (puVar4 != &DAT_00285948)) &&
     (0 < *(int *)((long)puVar4 + 0xc))) {
    luaL_checktype(param_1,1,7);
    uVar5 = *(ulong *)(param_1 + 0x10);
    uVar1 = uVar5 + 0x10;
    if (*(ulong *)(param_1 + 8) < uVar1) {
      uVar15 = *(ulong *)(param_1 + 8) - 0x10;
      do {
        *(undefined4 *)(uVar15 + 0x1c) = 0;
        uVar15 = uVar15 + 0x10;
      } while (uVar15 < uVar5);
    }
    *(ulong *)(param_1 + 8) = uVar1;
    iVar7 = FUN_0062a580(param_1,&DAT_0024718e,0);
    iVar8 = FUN_0062a580(param_1,&DAT_00241fab,0);
    iVar9 = FUN_0062a580(param_1,&DAT_00240f97,0xc);
    iVar10 = FUN_0062a580(param_1,&DAT_0024d584,0xffffffff);
    iVar11 = FUN_0062a580(param_1,"month",0xffffffff);
    iVar12 = FUN_0062a580(param_1,&DAT_0024b788,0xffffffff);
    lua_rawgetfield(param_1,-1,"isdst");
    iVar2 = (int)((ulong)((long)(iVar11 + -1) * -0x2aaaaaab) >> 0x20);
    iVar2 = (iVar2 >> 1) - (iVar2 >> 0x1f);
    if ((iVar11 + -1) % 0xc < 2) {
      iVar2 = iVar2 + 1;
    }
    iVar3 = (iVar12 - iVar2) + 0x12c0;
    iVar12 = (iVar12 - iVar2) + 0x12c3;
    if (-1 < iVar3) {
      iVar12 = iVar3;
    }
    iVar6 = (int)((ulong)((long)iVar3 * -0x51eb851f) >> 0x20);
    iVar2 = iVar10 + iVar3 * 0x16d + (iVar12 >> 2) + ((iVar6 >> 5) - (iVar6 >> 0x1f)) + iVar3 / 400
            + ((iVar11 + iVar2 * 0xc) * 0x99 + -0x1c9) / 5;
    pdVar13 = (double *)(*(long *)(param_1 + 8) + -0x10);
    *(double **)(param_1 + 8) = pdVar13;
    if ((iVar2 < 0x25bab9) ||
       (lVar14 = (long)iVar7 + (long)iVar8 * 0x3c + (long)iVar9 * 0xe10 +
                 (ulong)(iVar2 - 0x7d2d) * 0x15180, lVar14 < 0x3118a41200)) {
LAB_0062a554:
      *(undefined4 *)((long)pdVar13 + 0xc) = 0;
      goto LAB_0062a558;
    }
    lVar14 = lVar14 + -0x3118a41200;
  }
  else {
    lVar14 = time((time_t *)0x0);
    pdVar13 = *(double **)(param_1 + 8);
    if (lVar14 == -1) goto LAB_0062a554;
  }
  *(undefined4 *)((long)pdVar13 + 0xc) = 3;
  *pdVar13 = (double)lVar14;
  pdVar13 = *(double **)(param_1 + 8);
LAB_0062a558:
  *(double **)(param_1 + 8) = pdVar13 + 2;
  return 1;
}


// ===== 0062a580  FUN_0062a580 =====

int FUN_0062a580(lua_State *param_1,char *param_2,int param_3)

{
  long lVar1;
  double *pdVar2;
  long lVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lua_rawgetfield(param_1,-1,param_2);
  pdVar2 = (double *)(*(long *)(param_1 + 8) + -0x10);
  if (*(int *)(*(long *)(param_1 + 8) + -4) != 3) {
    lVar3 = FUN_00642b68(pdVar2,auStack_48);
    if (lVar3 == 0) {
      if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
        luaL_errorL(param_1,"field \'%s\' missing in date table",param_2);
      }
      goto LAB_0062a600;
    }
    pdVar2 = (double *)(*(long *)(param_1 + 8) + -0x10);
    if ((*(int *)(*(long *)(param_1 + 8) + -4) != 3) &&
       (pdVar2 = (double *)FUN_00642b68(pdVar2,auStack_48), pdVar2 == (double *)0x0)) {
      param_3 = 0;
      goto LAB_0062a600;
    }
  }
  param_3 = (int)*pdVar2;
LAB_0062a600:
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -0x10;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0062a658  lua_clock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* lua_clock() */

undefined1  [16] lua_clock(void)

{
  long lVar1;
  int iVar2;
  undefined1 auVar3 [16];
  double dVar4;
  timespec local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((DAT_00688928 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_00688928), iVar2 != 0)) {
    DAT_00688920 = 1e-09;
    __cxa_guard_release(&DAT_00688928);
  }
  iVar2 = clock_gettime(1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    dVar4 = (double)NEON_fmadd((double)local_38.tv_sec,DAT_0024e610,(double)local_38.tv_nsec);
    auVar3._0_8_ = dVar4 * DAT_00688920;
    auVar3._8_8_ = 0;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


// ===== 0062a70c  FUN_0062a70c =====

void FUN_0062a70c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_00628ad8(param_2,0x140,*(undefined1 *)(param_1 + 2));
  *(long *)(param_1 + 0x20) = lVar1;
  *(undefined4 *)(param_1 + 0x4c) = 8;
  *(long *)(param_1 + 0x38) = lVar1 + 0x118;
  *(long *)(param_1 + 0x40) = lVar1;
  lVar2 = FUN_00628ad8(param_2,0x2d0,*(undefined1 *)(param_1 + 2));
  *(long *)(param_1 + 0x30) = lVar2;
  *(undefined4 *)(param_1 + 0x48) = 0x2d;
  lVar1 = 0xc;
  do {
    *(undefined4 *)(lVar2 + lVar1) = 0;
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x2dc);
  plVar3 = *(long **)(param_1 + 0x20);
  *(undefined4 *)(lVar2 + 0xc) = 0;
  *(long *)(param_1 + 0x28) = lVar2 + 0x280;
  lVar1 = lVar2 + 0x10;
  *plVar3 = lVar1;
  plVar3[1] = lVar2;
  *(long *)(param_1 + 8) = lVar1;
  *(long *)(param_1 + 0x10) = lVar1;
  plVar3[2] = lVar2 + 0x150;
  return;
}


// ===== 0062a7a4  FUN_0062a7a4 =====

void FUN_0062a7a4(undefined8 param_1,long param_2)

{
  FUN_00628eb0(param_1,*(undefined8 *)(param_2 + 0x40),(long)*(int *)(param_2 + 0x4c) * 0x28,
               *(undefined1 *)(param_2 + 2));
  FUN_00628eb0(param_1,*(undefined8 *)(param_2 + 0x30),(long)*(int *)(param_2 + 0x48) << 4,
               *(undefined1 *)(param_2 + 2));
  return;
}


// ===== 0062a7f0  cleanupcistack =====

/* cleanupcistack(lua_State*) */

void cleanupcistack(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x40);
  for (lVar1 = *(long *)(param_1 + 0x20); lVar1 != lVar2; lVar1 = lVar1 + -0x28) {
    *(long *)(**(long **)(lVar1 + 8) + 8) = *(long *)(**(long **)(lVar1 + 8) + 8) + -1;
  }
  return;
}


// ===== 0062a824  lua_resetthread =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* lua_resetthread(lua_State*) */

void lua_resetthread(lua_State *param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  
  FUN_00623454(param_1,*(undefined8 *)(param_1 + 0x30));
  if (*PTR_LuauClosureUsageCounter_0067dbb0 == '\0') {
    plVar13 = *(long **)(param_1 + 0x40);
  }
  else {
    plVar6 = *(long **)(param_1 + 0x40);
    plVar12 = *(long **)(param_1 + 0x20);
    plVar13 = plVar12;
    for (; plVar12 != plVar6; plVar12 = plVar12 + -5) {
      *(long *)(*(long *)plVar12[1] + 8) = *(long *)(*(long *)plVar12[1] + 8) + -1;
      plVar13 = plVar6;
    }
  }
  lVar11 = *(long *)(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x4c);
  *(long **)(param_1 + 0x20) = plVar13;
  lVar7 = lVar11 + 0x10;
  *(undefined4 *)(lVar11 + 0xc) = 0;
  *plVar13 = lVar7;
  plVar13[1] = lVar11;
  plVar13[2] = lVar11 + 0x150;
  if (iVar1 != 8) {
    lVar11 = FUN_00629130(param_1,plVar13,(long)iVar1 * 0x28,0x140,param_1[2]);
    *(undefined4 *)(param_1 + 0x4c) = 8;
    lVar7 = *(long *)(lVar11 + (*(long *)(param_1 + 0x20) - (long)plVar13));
    *(long *)(param_1 + 0x20) = lVar11 + (*(long *)(param_1 + 0x20) - (long)plVar13);
    *(long *)(param_1 + 0x38) = lVar11 + 0x118;
    *(long *)(param_1 + 0x40) = lVar11;
  }
  param_1[3] = (lua_State)0x0;
  *(long *)(param_1 + 8) = lVar7;
  *(long *)(param_1 + 0x10) = lVar7;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x48) == 0x2d) {
    uVar5 = 0x2d;
  }
  else {
    FUN_006222f4(param_1,0x28,0);
    uVar5 = *(uint *)(param_1 + 0x48);
    if ((int)uVar5 < 1) {
      return;
    }
  }
  lVar9 = (ulong)uVar5 - 1;
  uVar8 = (ulong)(uVar5 + 3) & 0xfffffffc;
  puVar10 = (undefined4 *)(*(long *)(param_1 + 0x30) + 0x2c);
  lVar7 = _DAT_0024e340;
  lVar11 = _UNK_0024e348;
  lVar14 = _DAT_0024e100;
  lVar15 = _UNK_0024e108;
  do {
    auVar16._8_8_ = lVar9;
    auVar16._0_8_ = lVar9;
    auVar4._8_8_ = lVar15;
    auVar4._0_8_ = lVar14;
    auVar16 = NEON_cmhs(auVar16,auVar4,8);
    if ((auVar16 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      puVar10[-8] = 0;
    }
    if ((auVar16 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      puVar10[-4] = 0;
    }
    auVar2._8_8_ = lVar9;
    auVar2._0_8_ = lVar9;
    auVar3._8_8_ = lVar11;
    auVar3._0_8_ = lVar7;
    auVar16 = NEON_cmhs(auVar2,auVar3,8);
    if ((auVar16 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      *puVar10 = 0;
    }
    if ((auVar16 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      puVar10[4] = 0;
    }
    lVar7 = lVar7 + 4;
    lVar11 = lVar11 + 4;
    lVar14 = lVar14 + 4;
    lVar15 = lVar15 + 4;
    uVar8 = uVar8 - 4;
    puVar10 = puVar10 + 0x10;
  } while (uVar8 != 0);
  return;
}


// ===== 0062a9d4  lua_isthreadreset =====

/* lua_isthreadreset(lua_State*) */

bool lua_isthreadreset(lua_State *param_1)

{
  if ((*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x40)) &&
     (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8))) {
    return param_1[3] == (lua_State)0x0;
  }
  return false;
}


// ===== 0062aa08  lua_newstate =====

/* lua_newstate(void* (*)(void*, void*, unsigned long, unsigned long), void*) */

undefined2 * lua_newstate(_func_void_ptr_void_ptr_void_ptr_ulong_ulong *param_1,void *param_2)

{
  long lVar1;
  int iVar2;
  undefined2 *puVar3;
  long lVar4;
  
  puVar3 = (undefined2 *)(*param_1)(param_2,(void *)0x0,0,0x4580);
  if (puVar3 != (undefined2 *)0x0) {
    *puVar3 = 0x90a;
    *(undefined2 **)(puVar3 + 0xc) = puVar3 + 0x40;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined2 **)(puVar3 + 0x1c8) = puVar3 + 0x1c0;
    *(undefined2 **)(puVar3 + 0x1cc) = puVar3 + 0x1c0;
    *(undefined8 *)(puVar3 + 0x2b0) = 0;
    *(undefined8 *)(puVar3 + 0x2ac) = 0;
    *(undefined8 *)(puVar3 + 0x2b4) = 1;
    *(undefined8 *)(puVar3 + 100) = 0x4580;
    *(undefined4 *)(puVar3 + 0x6c) = 0x400;
    *(undefined1 *)(puVar3 + 0x50) = 9;
    *(undefined1 *)(puVar3 + 1) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined4 *)((long)puVar3 + 3) = 0;
    *(undefined8 *)(puVar3 + 0x24) = 0;
    *(undefined8 *)(puVar3 + 0x20) = 0;
    *(undefined8 *)(puVar3 + 0x2c) = 0;
    *(undefined8 *)(puVar3 + 0x28) = 0;
    *(undefined8 *)(puVar3 + 0x30) = 0;
    *(undefined8 *)(puVar3 + 0x3c) = 0;
    *(undefined8 *)(puVar3 + 0x38) = 0;
    *(_func_void_ptr_void_ptr_void_ptr_ulong_ulong **)(puVar3 + 0x48) = param_1;
    *(void **)(puVar3 + 0x4c) = param_2;
    *(undefined2 **)(puVar3 + 0x1bc) = puVar3;
    *(undefined4 *)(puVar3 + 0x2a8) = 0;
    *(undefined4 *)(puVar3 + 0x29e) = 0;
    *(undefined4 *)(puVar3 + 0x2a6) = 0;
    *(undefined1 *)((long)puVar3 + 0xa1) = 0;
    *(undefined8 *)(puVar3 + 0x40) = 0;
    *(undefined8 *)(puVar3 + 0x44) = 0;
    *(undefined8 *)(puVar3 + 0x5c) = 0;
    *(undefined8 *)(puVar3 + 0x60) = 0;
    *(undefined8 *)(puVar3 + 0x54) = 0;
    *(undefined8 *)(puVar3 + 0x58) = 0;
    *(undefined8 *)(puVar3 + 0x2c0) = 0;
    *(undefined8 *)(puVar3 + 0x2b8) = 0;
    *(undefined8 *)(puVar3 + 700) = 0;
    *(undefined8 *)(puVar3 + 0x68) = 0xc8000000c8;
    *(undefined8 *)(puVar3 + 0x1d8) = 0;
    *(undefined8 *)(puVar3 + 0x1d4) = 0;
    *(undefined8 *)(puVar3 + 0x1e0) = 0;
    *(undefined8 *)(puVar3 + 0x1dc) = 0;
    *(undefined8 *)(puVar3 + 0x1e8) = 0;
    *(undefined8 *)(puVar3 + 0x1e4) = 0;
    *(undefined8 *)(puVar3 + 0x1f0) = 0;
    *(undefined8 *)(puVar3 + 0x1ec) = 0;
    *(undefined8 *)(puVar3 + 0x1f8) = 0;
    *(undefined8 *)(puVar3 + 500) = 0;
    *(undefined8 *)(puVar3 + 0x200) = 0;
    *(undefined8 *)(puVar3 + 0x1fc) = 0;
    *(undefined8 *)(puVar3 + 0x208) = 0;
    *(undefined8 *)(puVar3 + 0x204) = 0;
    memset(puVar3 + 0x70,0,0x298);
    memset(puVar3 + 0x1a58,0,0x800);
    lVar4 = -0x2490;
    do {
      lVar1 = lVar4 + 0x48;
      *(undefined4 *)((long)puVar3 + lVar4 + 0x2cbc) = 0;
      *(undefined4 *)((long)puVar3 + lVar4 + 0x2ccc) = 0;
      *(undefined4 *)((long)puVar3 + lVar4 + 0x2cf4) = 0;
      *(undefined8 *)((long)puVar3 + lVar4 + 0x2ce4) = 0;
      *(undefined8 *)((long)puVar3 + lVar4 + 0x2cec) = 0;
      *(undefined8 *)((long)puVar3 + lVar4 + 0x2cdc) = 0;
      lVar4 = lVar1;
    } while (lVar1 != 0);
    memset(puVar3 + 0x165c,0,0x7f8);
    memset(puVar3 + 0x1e58,0,0x810);
    *(undefined8 *)(puVar3 + 0x1658) = 0x4580;
    memset(puVar3 + 0x2260,0,0xb8);
    memset(puVar3 + 0x2c4,0,0x298);
    *(undefined4 *)(puVar3 + 0x22bc) = 1;
    iVar2 = FUN_00622224(puVar3,FUN_0062abd0,0);
    if (iVar2 != 0) {
      FUN_0062ad40(puVar3);
      puVar3 = (undefined2 *)0x0;
    }
  }
  return puVar3;
}


// ===== 0062abd0  FUN_0062abd0 =====

void FUN_0062abd0(long param_1)

{
  undefined8 uVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x18);
  FUN_0062a70c(param_1,param_1);
  uVar1 = FUN_0062f204(param_1,0,2);
  lVar4 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  uVar1 = FUN_0062f204(param_1,0,2);
  *(undefined8 *)(lVar4 + 0x4c0) = uVar1;
  *(undefined4 *)(lVar4 + 0x4cc) = 7;
  FUN_0062af10(param_1,0x20);
  lVar4 = 0x398;
  do {
    pcVar5 = *(char **)((long)&PTR_FUN_0067a9d0 + lVar4);
    sVar2 = strlen(pcVar5);
    uVar1 = FUN_0062b178(param_1,pcVar5,sVar2);
    *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar4) = uVar1;
    lVar3 = *(long *)(*(long *)(param_1 + 0x18) + lVar4);
    lVar4 = lVar4 + 8;
    *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | 8;
  } while (lVar4 != 0x408);
  lVar4 = 0x408;
  do {
    pcVar5 = *(char **)((long)&PTR_FUN_0067a9d0 + lVar4);
    sVar2 = strlen(pcVar5);
    uVar1 = FUN_0062b178(param_1,pcVar5,sVar2);
    *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar4) = uVar1;
    lVar3 = *(long *)(*(long *)(param_1 + 0x18) + lVar4);
    lVar4 = lVar4 + 8;
    *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | 8;
  } while (lVar4 != 0x4b0);
  lVar4 = FUN_0062b178(param_1,"not enough memory",0x11);
  *(byte *)(lVar4 + 1) = *(byte *)(lVar4 + 1) | 8;
  lVar4 = FUN_0062b178(param_1,"error in error handling",0x17);
  lVar3 = *(long *)(lVar6 + 0x48);
  *(byte *)(lVar4 + 1) = *(byte *)(lVar4 + 1) | 8;
  *(long *)(lVar6 + 0x40) = lVar3 << 2;
  return;
}


// ===== 0062ad40  FUN_0062ad40 =====

void FUN_0062ad40(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  
  lVar5 = *(long *)(param_1 + 0x18);
  FUN_00623454(param_1,*(undefined8 *)(param_1 + 0x30));
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  lVar6 = puVar3[0x5d];
  if (puVar3[0x5d] != 0) {
    do {
      uVar2 = (ulong)*(int *)(lVar6 + 0x28);
      iVar9 = 0;
      if (uVar2 != 0) {
        iVar9 = (int)(((long)*(int *)(lVar6 + 0x20) - 0x40U) / uVar2);
      }
      lVar7 = *(long *)(lVar6 + 0x18);
      lVar8 = lVar6 + 0x40 + (long)*(int *)(lVar6 + 0x28) * (long)iVar9;
      if (lVar6 + 0x40 + (long)*(int *)(lVar6 + 0x30) + uVar2 != lVar8) {
        iVar9 = *(int *)(lVar6 + 0x34);
        lVar1 = (long)*(int *)(lVar6 + 0x30) + 0x40;
        lVar10 = lVar6 + uVar2;
        do {
          if (*(char *)(lVar10 + lVar1) != '\0') {
            FUN_006235bc(param_1,lVar10 + lVar1,lVar6);
            iVar9 = iVar9 + -1;
            if (iVar9 == 0) break;
          }
          lVar10 = lVar10 + uVar2;
        } while (lVar10 + lVar1 != lVar8);
      }
      lVar6 = lVar7;
    } while (lVar7 != 0);
    puVar3 = *(undefined8 **)(param_1 + 0x18);
  }
  FUN_00628eb0(param_1,*puVar3,(long)*(int *)((long)puVar3 + 0xc) << 3,0);
  FUN_0062a7a4(param_1,param_1);
  pcVar4 = *(code **)(*(long *)(param_1 + 0x18) + 0x560);
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0062ae54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 0x18),param_1,0x4580,0);
  return;
}


// ===== 0062ae58  lua_close =====

/* lua_close(lua_State*) */

void lua_close(lua_State *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x2f8);
  FUN_00623454(lVar1,*(undefined8 *)(lVar1 + 0x30));
  FUN_0062ad40(lVar1);
  return;
}


// ===== 0062ae88  FUN_0062ae88 =====

ulong FUN_0062ae88(int *param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar5 = param_2 & 0xffffffff;
  if (param_2 < 0x20) {
    if (param_2 == 0) {
      return uVar5;
    }
  }
  else {
    uVar4 = 0;
    uVar6 = 0;
    piVar3 = param_1;
    do {
      param_2 = param_2 - 0xc;
      uVar1 = piVar3[2] + (int)uVar5;
      param_1 = piVar3 + 3;
      uVar4 = (uVar1 ^ *piVar3 + uVar4) - (uVar1 >> 0xe | uVar1 * 0x40000);
      uVar6 = (uVar4 ^ piVar3[1] + uVar6) - (uVar4 >> 0xb | uVar4 * 0x200000);
      uVar5 = (ulong)((uVar6 ^ uVar1) - (uVar6 >> 0x19 | uVar6 * 0x80));
      piVar3 = param_1;
    } while (0x1f < param_2);
  }
  do {
    uVar4 = (uint)uVar5;
    lVar2 = param_2 - 1;
    param_2 = param_2 - 1;
    uVar5 = (ulong)(uVar4 * 0x20 + (uVar4 >> 2) + (uint)*(byte *)((long)param_1 + lVar2) ^ uVar4);
  } while (param_2 != 0);
  return uVar5;
}


// ===== 0062af10  FUN_0062af10 =====

void FUN_0062af10(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  void *__s;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00628ac4(param_1);
  }
  __s = (void *)FUN_00628ad8(param_1,(ulong)param_2 << 3,0);
  plVar6 = *(long **)(param_1 + 0x18);
  if (param_2 != 0) {
    memset(__s,0,(ulong)param_2 << 3);
  }
  uVar2 = *(uint *)((long)plVar6 + 0xc);
  if (0 < (int)uVar2) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(*plVar6 + uVar4 * 8);
      while (lVar3 != 0) {
        lVar5 = *(long *)(lVar3 + 8);
        uVar1 = *(uint *)(lVar3 + 0x10) & param_2 - 1;
        *(undefined8 *)(lVar3 + 8) = *(undefined8 *)((long)__s + (long)(int)uVar1 * 8);
        *(long *)((long)__s + (long)(int)uVar1 * 8) = lVar3;
        lVar3 = lVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar2);
  }
  FUN_00628eb0(param_1,*plVar6,(long)(int)uVar2 << 3,0);
  *(uint *)((long)plVar6 + 0xc) = param_2;
  *plVar6 = (long)__s;
  return;
}


// ===== 0062afe8  FUN_0062afe8 =====

void FUN_0062afe8(long param_1,ulong param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  long lVar3;
  
  if (param_2 < 0x40000001) {
    puVar2 = (undefined1 *)FUN_00628d60(param_1,param_2 + 0x19,*(undefined1 *)(param_1 + 4));
    lVar3 = *(long *)(param_1 + 0x18);
    *(undefined4 *)(puVar2 + 0x10) = 0;
    *(int *)(puVar2 + 0x14) = (int)param_2;
    *puVar2 = 6;
    *(undefined2 *)(puVar2 + 4) = 0x8000;
    bVar1 = *(byte *)(lVar3 + 0x20);
    puVar2[2] = *(undefined1 *)(param_1 + 4);
    puVar2[1] = bVar1 & 3;
    *(undefined8 *)(puVar2 + 8) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00628ac4(param_1);
}


// ===== 0062b060  FUN_0062b060 =====

long FUN_0062b060(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong __n;
  long *plVar8;
  
  uVar2 = *(uint *)(param_2 + 0x14);
  __n = (ulong)uVar2;
  uVar3 = FUN_0062ae88(param_2 + 0x18,__n);
  plVar8 = *(long **)(param_1 + 0x18);
  uVar1 = *(int *)((long)plVar8 + 0xc) - 1U & uVar3;
  lVar7 = *(long *)(*plVar8 + (long)(int)uVar1 * 8);
  while( true ) {
    if (lVar7 == 0) {
      *(uint *)(param_2 + 0x10) = uVar3;
      *(undefined1 *)(param_2 + __n + 0x18) = 0;
      lVar5 = *plVar8;
      lVar7 = plVar8[1];
      *(undefined2 *)(param_2 + 4) = 0x8000;
      uVar3 = *(uint *)((long)plVar8 + 0xc);
      uVar6 = *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8);
      uVar2 = (int)lVar7 + 1;
      *(uint *)(plVar8 + 1) = uVar2;
      *(undefined8 *)(param_2 + 8) = uVar6;
      *(long *)(lVar5 + (long)(int)uVar1 * 8) = param_2;
      if ((uVar3 < uVar2) && ((int)uVar3 < 0x40000000)) {
        FUN_0062af10(param_1,uVar3 << 1);
      }
      return param_2;
    }
    if ((*(uint *)(lVar7 + 0x14) == uVar2) &&
       (iVar4 = memcmp((void *)(lVar7 + 0x18),(void *)(param_2 + 0x18),__n), iVar4 == 0)) break;
    lVar7 = *(long *)(lVar7 + 8);
  }
  if ((*(byte *)(plVar8 + 4) & 3 ^ *(byte *)(lVar7 + 1) & 0xb) != 3) {
    return lVar7;
  }
  *(byte *)(lVar7 + 1) = *(byte *)(lVar7 + 1) ^ 3;
  return lVar7;
}


// ===== 0062b178  FUN_0062b178 =====

undefined1 * FUN_0062b178(long param_1,void *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined1 *puVar8;
  long *plVar9;
  
  uVar5 = FUN_0062ae88(param_2,param_3);
  plVar9 = *(long **)(param_1 + 0x18);
  puVar8 = *(undefined1 **)(*plVar9 + (long)(int)(*(int *)((long)plVar9 + 0xc) - 1U & uVar5) * 8);
  while( true ) {
    if (puVar8 == (undefined1 *)0x0) {
      if (param_3 < 0x40000001) {
        puVar8 = (undefined1 *)FUN_00628d60(param_1,param_3 + 0x19,*(undefined1 *)(param_1 + 4));
        uVar3 = *(undefined1 *)(param_1 + 4);
        bVar4 = *(byte *)(*(long *)(param_1 + 0x18) + 0x20);
        *puVar8 = 6;
        *(undefined2 *)(puVar8 + 4) = 0x8000;
        puVar8[2] = uVar3;
        puVar8[1] = bVar4 & 3;
        *(uint *)(puVar8 + 0x10) = uVar5;
        *(int *)(puVar8 + 0x14) = (int)param_3;
        memcpy(puVar8 + 0x18,param_2,param_3);
        (puVar8 + 0x18)[param_3] = 0;
        plVar9 = *(long **)(param_1 + 0x18);
        uVar2 = *(uint *)((long)plVar9 + 0xc);
        lVar7 = *plVar9;
        uVar1 = (int)plVar9[1] + 1;
        uVar5 = uVar2 - 1 & uVar5;
        *(uint *)(plVar9 + 1) = uVar1;
        *(undefined8 *)(puVar8 + 8) = *(undefined8 *)(lVar7 + (ulong)uVar5 * 8);
        *(undefined1 **)(lVar7 + (ulong)uVar5 * 8) = puVar8;
        if (((int)uVar2 < 0x40000000) && (uVar2 < uVar1)) {
          FUN_0062af10(param_1,uVar2 << 1);
        }
        return puVar8;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00628ac4(param_1);
    }
    if ((*(uint *)(puVar8 + 0x14) == param_3) &&
       (iVar6 = memcmp(param_2,puVar8 + 0x18,param_3), iVar6 == 0)) break;
    puVar8 = *(undefined1 **)(puVar8 + 8);
  }
  if ((*(byte *)(plVar9 + 4) & 3 ^ puVar8[1] & 0xb) != 3) {
    return puVar8;
  }
  puVar8[1] = puVar8[1] ^ 3;
  return puVar8;
}


// ===== 0062b2e8  luaopen_string =====

/* luaopen_string(lua_State*) */

undefined8 luaopen_string(lua_State *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  luaL_register(param_1,"string",(luaL_Reg *)&PTR_DAT_0067ab28);
  lua_createtable(param_1,0,1);
  lua_pushlstring(param_1,"",0);
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar1[1] = puVar1[-3];
  *puVar1 = puVar1[-4];
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  lua_setmetatable(param_1,-2);
  lVar2 = *(long *)(param_1 + 8);
  *(undefined8 **)(param_1 + 8) = (undefined8 *)(lVar2 + -0x10);
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
  }
  *(undefined8 *)(lVar2 + -8) = *(undefined8 *)(lVar2 + -0x28);
  *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(lVar2 + -0x30);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  lua_setfield(param_1,-2,"__index");
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -0x10;
  return 1;
}


// ===== 0062b3e4  FUN_0062b3e4 =====

int FUN_0062b3e4(lua_State *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  double *pdVar10;
  byte *pbVar11;
  uint local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  iVar5 = 1;
  lVar7 = luaL_checklstring(param_1,1,(ulong *)&local_50);
  iVar8 = 0;
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  if ((puVar1 < *(undefined8 **)(param_1 + 8)) && (puVar1 != &DAT_00285948)) {
    iVar5 = 1;
    if ((*(int *)(*(long *)(param_1 + 0x10) + 0x1c) < 1) ||
       (iVar5 = luaL_checkinteger(param_1,2), -1 < iVar5)) {
      iVar8 = 0;
    }
    else {
      iVar8 = local_50 + 1;
    }
  }
  uVar2 = iVar8 + iVar5;
  uVar6 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
  if (((puVar1 < *(undefined8 **)(param_1 + 8)) && (puVar1 != &DAT_00285948)) &&
     (0 < *(int *)(*(long *)(param_1 + 0x10) + 0x2c))) {
    uVar6 = luaL_checkinteger(param_1,3);
  }
  if ((int)uVar2 < 2) {
    uVar2 = 1;
  }
  uVar6 = (local_50 + 1 & (int)uVar6 >> 0x1f) + uVar6;
  uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
  if ((ulong)uVar6 <= CONCAT44(uStack_4c,local_50)) {
    local_50 = uVar6;
  }
  iVar8 = local_50 - uVar2;
  if ((int)local_50 < (int)uVar2) {
    iVar5 = 0;
  }
  else {
    if (local_50 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL(param_1,"string slice too long");
    }
    iVar5 = iVar8 + 1;
    luaL_checkstack(param_1,iVar5,"string slice too long");
    if (-1 < iVar8) {
      pdVar10 = *(double **)(param_1 + 8);
      uVar9 = (ulong)(iVar8 + 1);
      pbVar11 = (byte *)(lVar7 + (ulong)uVar2 + -1);
      do {
        bVar3 = *pbVar11;
        *(undefined4 *)((long)pdVar10 + 0xc) = 3;
        uVar9 = uVar9 - 1;
        *pdVar10 = (double)bVar3;
        pdVar10 = (double *)(*(long *)(param_1 + 8) + 0x10);
        *(double **)(param_1 + 8) = pdVar10;
        pbVar11 = pbVar11 + 1;
      } while (uVar9 != 0);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0062b580  FUN_0062b580 =====

undefined8 FUN_0062b580(lua_State *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  long lVar7;
  undefined1 *local_278;
  long *plStack_270;
  lua_State *local_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [512];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  puVar5 = auStack_258;
  lVar7 = *(long *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  uStack_260 = 0;
  plStack_270 = &local_58;
  uVar2 = (lVar7 - lVar1) * 0x10000000 >> 0x20;
  local_278 = puVar5;
  local_268 = param_1;
  if (0x200 < uVar2) {
    puVar5 = (undefined1 *)FUN_0061d968(&local_278,uVar2 - 0x200,0xffffffff);
  }
  iVar6 = (int)((ulong)(lVar7 - lVar1) >> 4);
  if (0 < iVar6) {
    lVar7 = 0;
    do {
      uVar4 = luaL_checkinteger(param_1,(int)lVar7 + 1);
      if (0xff < uVar4) {
                    /* WARNING: Subroutine does not return */
        luaL_argerrorL(param_1,(int)lVar7 + 1,"invalid value");
      }
      puVar5[lVar7] = (char)uVar4;
      lVar7 = lVar7 + 1;
    } while (iVar6 != (int)lVar7);
  }
  local_278 = local_278 + uVar2;
  luaL_pushresult((luaL_Strbuf *)&local_278);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0062b678  FUN_0062b678 =====

void FUN_0062b678(undefined8 param_1)

{
  FUN_0062d7ec(param_1,1);
  return;
}


// ===== 0062b680  FUN_0062b680 =====

undefined8 FUN_0062b680(lua_State *param_1)

{
  byte *__n;
  byte *pbVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  byte *pbVar7;
  void *pvVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  byte *pbVar18;
  uint uVar19;
  double dVar20;
  ulong local_4c0;
  ulong local_4b8;
  char acStack_4b0 [512];
  char local_2b0;
  byte abStack_2af [31];
  byte *local_290;
  byte *local_288;
  lua_State *local_280;
  undefined8 local_278;
  byte local_270 [512];
  long local_70 [2];
  
  lVar5 = tpidr_el0;
  local_70[0] = *(long *)(lVar5 + 0x28);
  lVar3 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  pbVar7 = (byte *)luaL_checklstring(param_1,1,&local_4c0);
  local_290 = local_270;
  local_288 = (byte *)local_70;
  local_278 = 0;
  local_280 = param_1;
  if (0 < (long)local_4c0) {
    pbVar1 = pbVar7 + local_4c0;
    iVar6 = 1;
    do {
      bVar14 = *pbVar7;
      if (bVar14 == 0x25) {
        pbVar18 = pbVar7 + 1;
        bVar14 = *pbVar18;
        uVar19 = (uint)bVar14;
        iVar15 = (int)((ulong)(lVar3 - lVar4) >> 4);
        if (bVar14 == 0x2a) {
          if (iVar15 <= iVar6) {
LAB_0062bc90:
                    /* WARNING: Subroutine does not return */
            luaL_errorL(param_1,"missing argument #%d",(ulong)(iVar6 + 1));
          }
          pbVar7 = pbVar7 + 2;
          luaL_addvalueany((luaL_Strbuf *)&local_290,iVar6 + 1);
          iVar6 = iVar6 + 1;
        }
        else if (bVar14 == 0x25) {
          if (local_288 == local_290) {
            FUN_0061d968(&local_290,1,0xffffffff);
            bVar14 = *pbVar18;
          }
          else {
            bVar14 = 0x25;
          }
          pbVar7 = pbVar7 + 2;
          pbVar18 = local_290;
          iVar16 = iVar6;
LAB_0062b808:
          local_290 = pbVar18 + 1;
          *pbVar18 = bVar14;
          iVar6 = iVar16;
        }
        else {
          iVar16 = iVar6 + 1;
          if (iVar15 <= iVar6) goto LAB_0062bc90;
          pbVar7 = pbVar18;
          if (bVar14 == 0) {
            uVar12 = 0;
          }
          else {
            do {
              pvVar8 = memchr("-+ #0",uVar19,6);
              if (pvVar8 == (void *)0x0) break;
              pbVar7 = pbVar7 + 1;
              uVar19 = (uint)*pbVar7;
            } while (uVar19 != 0);
            uVar12 = (ulong)(uVar19 - 0x30 < 10);
          }
          if (5 < (ulong)((long)pbVar7 - (long)pbVar18)) {
            pcVar9 = "invalid format (repeated flags)";
LAB_0062bcb8:
                    /* WARNING: Subroutine does not return */
            luaL_errorL(param_1,pcVar9);
          }
          pbVar7 = pbVar7 + uVar12;
          if (*pbVar7 - 0x30 < 10) {
            pbVar7 = pbVar7 + 1;
          }
          bVar14 = *pbVar7;
          pbVar13 = pbVar7;
          if (bVar14 == 0x2e) {
            lVar2 = 1;
            pbVar13 = pbVar7 + 1;
            if (0xfffffff5 < pbVar7[1] - 0x3a) {
              lVar2 = 2;
              pbVar13 = pbVar7 + 2;
            }
            if (pbVar7[lVar2] - 0x30 < 10) {
              pbVar13 = pbVar13 + 1;
            }
            bVar14 = *pbVar13;
          }
          if (0xfffffff5 < bVar14 - 0x3a) {
            pcVar9 = "invalid format (width or precision too long)";
            goto LAB_0062bcb8;
          }
          __n = pbVar13 + (1 - (long)pbVar18);
          local_2b0 = '%';
          strncpy((char *)((ulong)&local_2b0 | 1),(char *)pbVar18,(size_t)__n);
          ((char *)((ulong)&local_2b0 | 1))[(long)__n] = '\0';
          pbVar7 = pbVar13 + 1;
          bVar14 = *pbVar13;
          uVar19 = (uint)bVar14;
          uVar17 = (uint)bVar14;
          if (bVar14 < 0x69) {
            if (uVar19 == 0x62 || bVar14 < 0x62) {
              if (bVar14 < 0x47) {
                if (uVar19 != 0x45) {
                  if (uVar17 == 0x2a) {
                    pcVar9 = "\'%%*\' does not take a form";
                    goto LAB_0062bcb8;
                  }
LAB_0062bcd8:
                    /* WARNING: Subroutine does not return */
                  luaL_errorL(param_1,"invalid option \'%%%c\' to \'format\'",(ulong)uVar17);
                }
              }
              else if (uVar17 != 0x47) {
                if (bVar14 != 0x58) goto LAB_0062bcd8;
                goto LAB_0062bae4;
              }
LAB_0062bb5c:
              luaL_checknumber(param_1,iVar16);
              snprintf(acStack_4b0,0x200,&local_2b0);
LAB_0062bb78:
              uVar12 = strlen(acStack_4b0);
            }
            else {
              if (uVar19 - 0x65 < 3) goto LAB_0062bb5c;
              if (uVar19 != 99) {
                if (uVar17 != 100) goto LAB_0062bcd8;
                goto LAB_0062baa4;
              }
              dVar20 = (double)luaL_checknumber(param_1,iVar16);
              iVar6 = snprintf(acStack_4b0,0x200,&local_2b0,(ulong)(uint)(int)dVar20);
              uVar12 = (ulong)iVar6;
            }
            pcVar9 = acStack_4b0;
          }
          else {
            if (bVar14 < 0x73) {
              if (uVar17 != 0x69) {
                if (uVar19 != 0x6f) {
                  if (uVar19 != 0x71) goto LAB_0062bcd8;
                  pbVar18 = (byte *)luaL_checklstring(param_1,iVar16,&local_4b8);
                  lVar2 = (local_4b8 + 2) - ((long)local_288 - (long)local_290);
                  if ((ulong)((long)local_288 - (long)local_290) <= local_4b8 + 2 && lVar2 != 0) {
                    FUN_0061d968(&local_290,lVar2,0xffffffff);
                  }
                  if (local_288 == local_290) {
                    FUN_0061d968(&local_290,1,0xffffffff);
                  }
                  *local_290 = 0x22;
                  local_290 = local_290 + 1;
                  while (uVar12 = local_4b8 - 1, local_4b8 != 0) {
                    bVar14 = *pbVar18;
                    if (bVar14 < 0xd) {
                      if (bVar14 == 0) {
                        pcVar9 = "\\000";
                        uVar11 = 4;
                        goto LAB_0062ba74;
                      }
                      if (bVar14 == 10) goto LAB_0062b9a0;
LAB_0062ba18:
                      local_4b8 = uVar12;
                      if (local_288 == local_290) {
                        FUN_0061d968(&local_290,1,0xffffffff);
                        bVar14 = *pbVar18;
                      }
                      *local_290 = bVar14;
                      local_290 = local_290 + 1;
                    }
                    else if (bVar14 == 0xd) {
                      pcVar9 = "\\r";
                      uVar11 = 2;
LAB_0062ba74:
                      local_4b8 = uVar12;
                      luaL_addlstring((luaL_Strbuf *)&local_290,pcVar9,uVar11);
                    }
                    else {
                      if ((bVar14 != 0x5c) && (bVar14 != 0x22)) goto LAB_0062ba18;
LAB_0062b9a0:
                      pbVar13 = local_290;
                      local_4b8 = uVar12;
                      if (local_288 == local_290) {
                        FUN_0061d968(&local_290,1,0xffffffff);
                        pbVar13 = local_290;
                      }
                      local_290 = pbVar13 + 1;
                      *pbVar13 = 0x5c;
                      if (local_288 == local_290) {
                        FUN_0061d968(&local_290,1,0xffffffff);
                      }
                      *local_290 = *pbVar18;
                      local_290 = local_290 + 1;
                    }
                    pbVar18 = pbVar18 + 1;
                  }
                  local_4b8 = uVar12;
                  if (local_288 == local_290) {
                    FUN_0061d968(&local_290,1,0xffffffff);
                  }
                  bVar14 = 0x22;
                  pbVar18 = local_290;
                  goto LAB_0062b808;
                }
                goto LAB_0062bae4;
              }
LAB_0062baa4:
              iVar6 = lua_type(param_1,iVar16);
              if (iVar6 == 4) goto LAB_0062baf8;
              dVar20 = (double)luaL_checknumber(param_1,iVar16);
              pcVar9 = (char *)(long)dVar20;
LAB_0062bb28:
              (abStack_2af + (long)(__n + -1))[0] = 0x6c;
              (abStack_2af + (long)(__n + -1))[1] = 0x6c;
              (abStack_2af + 1)[(long)__n] = bVar14;
              __n[(long)(abStack_2af + 2)] = 0;
LAB_0062bb4c:
              snprintf(acStack_4b0,0x200,&local_2b0,pcVar9);
              goto LAB_0062bb78;
            }
            if (uVar17 != 0x73) {
              if ((uVar17 != 0x75) && (uVar17 != 0x78)) goto LAB_0062bcd8;
LAB_0062bae4:
              iVar6 = lua_type(param_1,iVar16);
              if (iVar6 == 4) {
LAB_0062baf8:
                pcVar9 = (char *)luaL_checkinteger64(param_1,iVar16);
              }
              else {
                dVar20 = (double)luaL_checknumber(param_1,iVar16);
                pcVar9 = (char *)(long)dVar20;
              }
              goto LAB_0062bb28;
            }
            pcVar9 = (char *)luaL_checklstring(param_1,iVar16,&local_4b8);
            uVar12 = local_4b8;
            if ((abStack_2af[1] != '\0') &&
               ((pcVar10 = strchr(&local_2b0,0x2e), pcVar10 != (char *)0x0 || (uVar12 < 100))))
            goto LAB_0062bb4c;
          }
          luaL_addlstring((luaL_Strbuf *)&local_290,pcVar9,uVar12);
          iVar6 = iVar16;
        }
      }
      else {
        if (local_288 == local_290) {
          FUN_0061d968(&local_290,1,0xffffffff);
          bVar14 = *pbVar7;
        }
        pbVar7 = pbVar7 + 1;
        *local_290 = bVar14;
        local_290 = local_290 + 1;
      }
    } while (pbVar7 < pbVar1);
  }
  luaL_pushresult((luaL_Strbuf *)&local_290);
  if (*(long *)(lVar5 + 0x28) != local_70[0]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


// ===== 0062bcec  FUN_0062bcec =====

undefined8 FUN_0062bcec(lua_State *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  luaL_checklstring(param_1,1,(ulong *)0x0);
  luaL_checklstring(param_1,2,(ulong *)0x0);
  lVar2 = *(long *)(param_1 + 0x10);
  for (uVar1 = *(ulong *)(param_1 + 8); uVar1 < lVar2 + 0x20U; uVar1 = uVar1 + 0x10) {
    *(undefined4 *)(uVar1 + 0xc) = 0;
  }
  *(ulong *)(param_1 + 8) = lVar2 + 0x20U;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)(lVar2 + 0x2c) = 3;
  *(long *)(param_1 + 8) = lVar3 + 0x10;
  lua_pushcclosurek(param_1,FUN_0062e470,(char *)0x0,3,(_func_int_lua_State_ptr_int *)0x0);
  return 1;
}


// ===== 0062bd84  FUN_0062bd84 =====

undefined8 FUN_0062bd84(lua_State *param_1)

{
  eh_frame_hdr eVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  lua_State *plVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  undefined8 uVar12;
  eh_frame_hdr *peVar13;
  double *pdVar14;
  char cVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  int iVar19;
  ulong local_4d8;
  int local_4d0;
  undefined4 uStack_4cc;
  ulong local_4c8;
  char *local_4c0;
  char *pcStack_4b8;
  lua_State *local_4b0;
  undefined8 uStack_4a8;
  char local_4a0 [512];
  char local_2a0 [8];
  char *local_298;
  char *local_290;
  char *local_288;
  lua_State *local_280;
  undefined4 local_278;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  pcVar8 = (char *)luaL_checklstring(param_1,1,(ulong *)&local_4d0);
  pcVar9 = (char *)luaL_checklstring(param_1,2,&local_4d8);
  lVar16 = *(long *)(param_1 + 0x10);
  iVar19 = -1;
  if (((undefined8 *)(lVar16 + 0x20) < *(undefined8 **)(param_1 + 8)) &&
     ((undefined8 *)(lVar16 + 0x20) != &DAT_00285948)) {
    iVar19 = *(int *)(lVar16 + 0x2c);
  }
  iVar6 = local_4d0 + 1;
  if ((((undefined8 *)(lVar16 + 0x30) < *(undefined8 **)(param_1 + 8)) &&
      ((undefined8 *)(lVar16 + 0x30) != &DAT_00285948)) && (0 < *(int *)(lVar16 + 0x3c))) {
    iVar6 = luaL_checkinteger(param_1,4);
  }
  cVar2 = *pcVar9;
  if ((2 < iVar19 - 6U) && (iVar19 != 3)) {
                    /* WARNING: Subroutine does not return */
    luaL_typeerrorL(param_1,3,"string/function/table");
  }
  local_4c0 = local_4a0;
  pcStack_4b8 = local_2a0;
  uStack_4a8 = 0;
  if (cVar2 == '^') {
    local_4d8 = local_4d8 - 1;
    pcVar9 = pcVar9 + 1;
  }
  iVar18 = 0;
  local_288 = pcVar9 + local_4d8;
  local_2a0[0] = -0x38;
  local_2a0[1] = '\0';
  local_2a0[2] = '\0';
  local_2a0[3] = '\0';
  local_290 = pcVar8 + CONCAT44(uStack_4cc,local_4d0);
  local_4b0 = param_1;
  local_298 = pcVar8;
  local_280 = param_1;
  do {
    if (iVar6 <= iVar18) break;
    local_278 = 0;
    pcVar10 = (char *)FUN_0062db3c(local_2a0,pcVar8,pcVar9);
    plVar5 = local_280;
    if (pcVar10 == (char *)0x0) {
LAB_0062c0d8:
      if (local_290 <= pcVar8) break;
      if (pcStack_4b8 == local_4c0) {
        FUN_0061d968(&local_4c0,1,0xffffffff);
      }
      *local_4c0 = *pcVar8;
      pcVar10 = pcVar8 + 1;
      local_4c0 = local_4c0 + 1;
    }
    else {
      if (iVar19 == 7) {
        FUN_0062e010(local_2a0,0,pcVar8,pcVar10);
        lua_gettable(plVar5,3);
LAB_0062bf40:
        peVar13 = *(eh_frame_hdr **)(plVar5 + 8);
        eVar1 = peVar13[-1];
        if ((eVar1 == (eh_frame_hdr)0x0) ||
           ((eVar1 == (eh_frame_hdr)0x1 && (peVar13[-4] == (eh_frame_hdr)0x0)))) {
          *(eh_frame_hdr **)(plVar5 + 8) = peVar13 + -4;
          lua_pushlstring(plVar5,pcVar8,(long)pcVar10 - (long)pcVar8);
        }
        else {
          if (peVar13 == &eh_frame_hdr_00285958) {
            eVar1.eh_frame_hdr_version = 0xff;
            eVar1.eh_frame_pointer_encoding = 0xff;
            eVar1.eh_frame_desc_entry_count_encoding = 0xff;
            eVar1.eh_frame_table_encoding = 0xff;
          }
          if ((eVar1 != (eh_frame_hdr)0x3) && (eVar1 != (eh_frame_hdr)0x6)) {
            uVar12 = luaL_typename(plVar5,-1);
                    /* WARNING: Subroutine does not return */
            luaL_errorL(plVar5,"invalid replacement value (a %s)",uVar12);
          }
        }
        luaL_addvalue((luaL_Strbuf *)&local_4c0);
      }
      else {
        if (iVar19 == 8) {
          lua_pushvalue(local_280,3);
          uVar7 = FUN_0062df88(local_2a0,pcVar8,pcVar10);
          FUN_00622574(plVar5,*(long *)(plVar5 + 8) + (long)(int)~uVar7 * 0x10,1,0);
          goto LAB_0062bf40;
        }
        lVar11 = lua_tolstring(local_280,3,&local_4c8);
        lVar16 = local_4c8 - ((long)pcStack_4b8 - (long)local_4c0);
        if ((ulong)((long)pcStack_4b8 - (long)local_4c0) <= local_4c8 && lVar16 != 0) {
          FUN_0061d968(&local_4c0,lVar16,0xffffffff);
        }
        if (local_4c8 != 0) {
          uVar17 = 0;
          do {
            cVar15 = *(char *)(lVar11 + uVar17);
            if (cVar15 == '%') {
              uVar17 = uVar17 + 1;
              bVar3 = *(byte *)(lVar11 + uVar17);
              if (bVar3 - 0x3a < 0xfffffff6) {
                if (bVar3 != 0x25) {
                    /* WARNING: Subroutine does not return */
                  luaL_errorL(local_280,"invalid use of \'%c\' in replacement string",0x25);
                }
                if (pcStack_4b8 == local_4c0) {
                  FUN_0061d968(&local_4c0,1,0xffffffff);
                  cVar15 = *(char *)(lVar11 + uVar17);
                }
                else {
                  cVar15 = '%';
                }
                *local_4c0 = cVar15;
                local_4c0 = local_4c0 + 1;
              }
              else if (bVar3 == 0x30) {
                luaL_addlstring((luaL_Strbuf *)&local_4c0,pcVar8,(long)pcVar10 - (long)pcVar8);
              }
              else {
                FUN_0062e010(local_2a0,bVar3 - 0x31,pcVar8,pcVar10);
                luaL_addvalue((luaL_Strbuf *)&local_4c0);
              }
            }
            else {
              if (pcStack_4b8 == local_4c0) {
                FUN_0061d968(&local_4c0,1,0xffffffff);
                cVar15 = *(char *)(lVar11 + uVar17);
              }
              *local_4c0 = cVar15;
              local_4c0 = local_4c0 + 1;
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 < local_4c8);
        }
      }
      iVar18 = iVar18 + 1;
      if (pcVar10 <= pcVar8) goto LAB_0062c0d8;
    }
    pcVar8 = pcVar10;
  } while (cVar2 != '^');
  luaL_addlstring((luaL_Strbuf *)&local_4c0,pcVar8,(long)local_290 - (long)pcVar8);
  luaL_pushresult((luaL_Strbuf *)&local_4c0);
  pdVar14 = *(double **)(param_1 + 8);
  *pdVar14 = (double)iVar18;
  lVar16 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)pdVar14 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar16 + 0x10;
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 2;
}


// ===== 0062c1f0  FUN_0062c1f0 =====

undefined8 FUN_0062c1f0(lua_State *param_1)

{
  long lVar1;
  double *pdVar2;
  int local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  luaL_checklstring(param_1,1,(ulong *)local_30);
  pdVar2 = *(double **)(param_1 + 8);
  *(undefined4 *)((long)pdVar2 + 0xc) = 3;
  *pdVar2 = (double)local_30[0];
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0062c268  FUN_0062c268 =====

undefined8 FUN_0062c268(lua_State *param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong local_260;
  undefined1 *local_258;
  long *plStack_250;
  lua_State *local_248;
  undefined8 uStack_240;
  undefined1 auStack_238 [512];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar4 = luaL_checklstring(param_1,1,&local_260);
  puVar5 = auStack_238;
  plStack_250 = &local_38;
  uStack_240 = 0;
  local_258 = puVar5;
  local_248 = param_1;
  if (0x200 < local_260) {
    puVar5 = (undefined1 *)FUN_0061d968(&local_258,local_260 - 0x200,0xffffffff);
  }
  if (local_260 == 0) {
    local_260 = 0;
  }
  else {
    uVar6 = 0;
    do {
      bVar2 = *(byte *)(lVar4 + uVar6);
      bVar1 = bVar2 | 0x20;
      if (0x19 < bVar2 - 0x41) {
        bVar1 = bVar2;
      }
      puVar5[uVar6] = bVar1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_260);
  }
  local_258 = local_258 + local_260;
  luaL_pushresult((luaL_Strbuf *)&local_258);
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


// ===== 0062c348  FUN_0062c348 =====

void FUN_0062c348(undefined8 param_1)

{
  FUN_0062d7ec(param_1,0);
  return;
}


// ===== 0062c350  FUN_0062c350 =====

undefined8 FUN_0062c350(lua_State *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  void *__src;
  undefined1 *__dest;
  ulong __n;
  size_t __n_00;
  undefined1 *__dest_00;
  ulong uVar4;
  ulong uVar5;
  ulong local_280;
  undefined1 *local_278;
  long *plStack_270;
  lua_State *local_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [512];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  __src = (void *)luaL_checklstring(param_1,1,&local_280);
  uVar3 = luaL_checkinteger(param_1,2);
  if ((int)uVar3 < 1) {
    lua_pushlstring(param_1,"",0);
  }
  else {
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = 0x40000000 / uVar3;
    }
    if (uVar1 < local_280) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL(param_1,"resulting string too large");
    }
    uVar4 = (ulong)uVar3;
    uStack_260 = 0;
    uVar5 = local_280 * uVar4;
    __dest = auStack_258;
    plStack_270 = &local_58;
    local_278 = __dest;
    local_268 = param_1;
    if (0x200 < uVar5) {
      __dest = (undefined1 *)FUN_0061d968(&local_278,uVar5 - 0x200,0xffffffff);
      uVar5 = local_280 * uVar4;
    }
    __n = local_280;
    memcpy(__dest,__src,local_280);
    __n_00 = uVar5 - local_280;
    __dest_00 = __dest + local_280;
    if (__n < __n_00) {
      do {
        memcpy(__dest_00,__dest,__n);
        __dest_00 = __dest_00 + __n;
        __n_00 = __n_00 - __n;
        __n = __n << 1;
      } while (__n < __n_00);
    }
    memcpy(__dest_00,__dest,__n_00);
    local_278 = local_278 + local_280 * uVar4;
    luaL_pushresult((luaL_Strbuf *)&local_278);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0062c4bc  FUN_0062c4bc =====

undefined8 FUN_0062c4bc(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong local_260;
  undefined1 *local_258;
  long *plStack_250;
  lua_State *local_248;
  undefined8 uStack_240;
  undefined1 auStack_238 [512];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = luaL_checklstring(param_1,1,&local_260);
  local_258 = auStack_238;
  plStack_250 = &local_38;
  uStack_240 = 0;
  uVar3 = local_260;
  local_248 = param_1;
  if (0x200 < local_260) {
    local_258 = (undefined1 *)FUN_0061d968(&local_258,local_260 - 0x200,0xffffffff);
    uVar3 = local_260;
  }
  while (local_260 = uVar3 - 1, uVar3 != 0) {
    *local_258 = *(undefined1 *)(lVar2 + local_260);
    local_258 = local_258 + 1;
    uVar3 = local_260;
  }
  luaL_pushresult((luaL_Strbuf *)&local_258);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


// ===== 0062c574  FUN_0062c574 =====

undefined8 FUN_0062c574(lua_State *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  uint uVar8;
  uint local_40 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar5 = luaL_checklstring(param_1,1,(ulong *)local_40);
  iVar4 = luaL_checkinteger(param_1,2);
  uVar8 = local_40[0] + 1;
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
  uVar2 = (uVar8 & iVar4 >> 0x1f) + iVar4;
  iVar4 = -1;
  if (((puVar1 < *(undefined8 **)(param_1 + 8)) && (puVar1 != &DAT_00285948)) &&
     (0 < *(int *)(*(long *)(param_1 + 0x10) + 0x2c))) {
    iVar4 = luaL_checkinteger(param_1,3);
    uVar8 = local_40[0] + 1 & iVar4 >> 0x1f;
  }
  uVar8 = uVar8 + iVar4 & ((int)(uVar8 + iVar4) >> 0x1f ^ 0xffffffffU);
  if ((int)uVar2 < 2) {
    uVar2 = 1;
  }
  if ((int)local_40[0] <= (int)uVar8) {
    uVar8 = local_40[0];
  }
  if ((int)uVar8 < (int)uVar2) {
    pcVar6 = "";
    uVar7 = 0;
  }
  else {
    uVar7 = (ulong)(int)((uVar8 - uVar2) + 1);
    pcVar6 = (char *)(lVar5 + (ulong)uVar2 + -1);
  }
  lua_pushlstring(param_1,pcVar6,uVar7);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0062c684  FUN_0062c684 =====

undefined8 FUN_0062c684(lua_State *param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong local_260;
  undefined1 *local_258;
  long *plStack_250;
  lua_State *local_248;
  undefined8 uStack_240;
  undefined1 auStack_238 [512];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar4 = luaL_checklstring(param_1,1,&local_260);
  puVar5 = auStack_238;
  plStack_250 = &local_38;
  uStack_240 = 0;
  local_258 = puVar5;
  local_248 = param_1;
  if (0x200 < local_260) {
    puVar5 = (undefined1 *)FUN_0061d968(&local_258,local_260 - 0x200,0xffffffff);
  }
  if (local_260 == 0) {
    local_260 = 0;
  }
  else {
    uVar6 = 0;
    do {
      bVar2 = *(byte *)(lVar4 + uVar6);
      bVar1 = bVar2 ^ 0x20;
      if (0x19 < bVar2 - 0x61) {
        bVar1 = bVar2;
      }
      puVar5[uVar6] = bVar1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_260);
  }
  local_258 = local_258 + local_260;
  luaL_pushresult((luaL_Strbuf *)&local_258);
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


// ===== 0062c764  FUN_0062c764 =====

undefined8 FUN_0062c764(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  void *__s2;
  double *pdVar4;
  long lVar5;
  char *pcVar6;
  char *__s1;
  size_t __n;
  int iVar7;
  double dVar8;
  size_t local_78;
  ulong local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pcVar3 = (char *)luaL_checklstring(param_1,1,&local_70);
  __s2 = (void *)luaL_optlstring(param_1,2,",",&local_78);
  lua_createtable(param_1,0,0);
  dVar8 = 1.0;
  __s1 = pcVar3;
  if (local_78 == 0) {
    __s1 = pcVar3 + 1;
  }
  pcVar6 = pcVar3;
  __n = local_78;
  if (__s1 <= pcVar3 + (local_70 - local_78)) {
    iVar7 = 0;
    do {
      iVar2 = memcmp(__s1,__s2,__n);
      if (iVar2 == 0) {
        iVar7 = iVar7 + 1;
        pdVar4 = *(double **)(param_1 + 8);
        *(undefined4 *)((long)pdVar4 + 0xc) = 3;
        *pdVar4 = (double)iVar7;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
        lua_pushlstring(param_1,pcVar6,(long)__s1 - (long)pcVar6);
        lVar5 = *(long *)(param_1 + 8);
        FUN_00642f48(param_1,lVar5 + -0x30,lVar5 + -0x20,lVar5 + -0x10);
        pcVar6 = __s1 + local_78;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -0x20;
        __n = local_78;
        if (local_78 != 0) {
          __s1 = __s1 + (local_78 - 1);
        }
      }
      __s1 = __s1 + 1;
    } while (__s1 <= pcVar3 + (local_70 - __n));
    dVar8 = (double)(iVar7 + 1);
  }
  if (__n != 0) {
    pdVar4 = *(double **)(param_1 + 8);
    *pdVar4 = dVar8;
    lVar5 = *(long *)(param_1 + 8);
    *(undefined4 *)((long)pdVar4 + 0xc) = 3;
    *(long *)(param_1 + 8) = lVar5 + 0x10;
    lua_pushlstring(param_1,pcVar6,(ulong)(pcVar3 + (local_70 - (long)pcVar6)));
    lVar5 = *(long *)(param_1 + 8);
    FUN_00642f48(param_1,lVar5 + -0x30,lVar5 + -0x20,lVar5 + -0x10);
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -0x20;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0062c91c  FUN_0062c91c =====

undefined8 FUN_0062c91c(lua_State *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  double *pdVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  int iVar15;
  double dVar16;
  int local_2e8;
  int iStack_2e4;
  char *local_2e0;
  lua_State *plStack_2d8;
  undefined8 local_2d0;
  char acStack_2c8 [16];
  double local_2b8 [5];
  long *local_290;
  long *plStack_288;
  lua_State *local_280;
  undefined8 uStack_278;
  long local_270 [64];
  long local_70 [2];
  
  lVar2 = tpidr_el0;
  local_70[0] = *(long *)(lVar2 + 0x28);
  local_2e0 = (char *)luaL_checklstring(param_1,1,(ulong *)0x0);
  lVar9 = *(long *)(param_1 + 8);
  local_290 = local_270;
  plStack_288 = local_70;
  *(undefined4 *)(lVar9 + 0xc) = 0;
  *(long *)(param_1 + 8) = lVar9 + 0x10;
  uStack_278 = 0;
  local_2d0 = 0x100000001;
  plStack_2d8 = param_1;
  local_280 = param_1;
  if (*local_2e0 != '\0') {
    lVar9 = 0;
    iVar12 = 1;
    do {
      iVar5 = FUN_0062d1fc(&plStack_2d8,lVar9,&local_2e0,&iStack_2e4,&local_2e8);
      iVar13 = iStack_2e4;
      iVar3 = local_2e8;
      if (0 < local_2e8) {
        iVar15 = local_2e8 + 1;
        do {
          if (plStack_288 == local_290) {
            FUN_0061d968(&local_290,1,0xffffffff);
          }
          iVar15 = iVar15 + -1;
          plVar1 = (long *)((long)local_290 + 1);
          *(undefined1 *)local_290 = 0;
          local_290 = plVar1;
        } while (1 < iVar15);
      }
      iVar15 = iVar12 + 1;
      lVar9 = lVar9 + (iVar13 + iVar3);
      if (iVar5 < 5) {
        if (iVar5 < 2) {
          if (iVar5 == 0) {
            dVar14 = (double)luaL_checknumber(param_1,iVar15);
            uVar7 = (ulong)dVar14;
            if ((iVar13 < 8) &&
               ((lVar10 = 1L << ((ulong)(iVar13 * 8 - 1) & 0x3f),
                -uVar7 != lVar10 && (long)uVar7 <= -lVar10 || (lVar10 <= (long)uVar7)))) {
              pcVar6 = "integer overflow";
LAB_0062cd38:
                    /* WARNING: Subroutine does not return */
              luaL_argerrorL(param_1,iVar15,pcVar6);
            }
            uVar8 = uVar7 >> 0x3f;
          }
          else {
            dVar14 = (double)luaL_checknumber(param_1,iVar15);
            uVar7 = (ulong)dVar14;
            if ((iVar13 < 8) && (uVar7 >> ((ulong)(uint)(iVar13 << 3) & 0x3f) != 0)) {
              pcVar6 = "unsigned overflow";
              goto LAB_0062cd38;
            }
            uVar8 = 0;
          }
          FUN_0062d72c(&local_290,uVar7,(int)local_2d0,iVar13,uVar8);
          iVar12 = iVar15;
        }
        else {
          dVar14 = (double)(long)iVar13;
          if (iVar5 == 2) {
            dVar16 = (double)luaL_checknumber(param_1,iVar15);
            if ((iVar13 == 8) || (iVar13 != 4)) {
              local_2b8[0] = dVar16;
            }
            else {
              local_2b8[0] = (double)CONCAT44(local_2b8[0]._4_4_,(float)dVar16);
            }
            if ((int)local_2d0 == 1) {
              if (iVar13 != 0) {
                pdVar11 = local_2b8;
                pcVar6 = acStack_2c8;
                do {
                  iVar13 = iVar13 + -1;
                  *pcVar6 = *(char *)pdVar11;
                  pdVar11 = (double *)((long)pdVar11 + 1);
                  pcVar6 = pcVar6 + 1;
                } while (iVar13 != 0);
              }
            }
            else if (iVar13 != 0) {
              pcVar6 = acStack_2c8 + ((long)dVar14 - 1);
              pdVar11 = local_2b8;
              do {
                iVar13 = iVar13 + -1;
                *pcVar6 = *(char *)pdVar11;
                pcVar6 = pcVar6 + -1;
                pdVar11 = (double *)((long)pdVar11 + 1);
              } while (iVar13 != 0);
            }
            luaL_addlstring((luaL_Strbuf *)&local_290,acStack_2c8,(ulong)dVar14);
            iVar12 = iVar15;
          }
          else if (iVar5 == 3) {
            pcVar6 = (char *)luaL_checklstring(param_1,iVar15,(ulong *)local_2b8);
            if ((ulong)dVar14 < (ulong)local_2b8[0]) {
              pcVar6 = "string longer than given size";
              goto LAB_0062cd38;
            }
            luaL_addlstring((luaL_Strbuf *)&local_290,pcVar6,(ulong)local_2b8[0]);
            while (dVar16 = (double)((long)local_2b8[0] + 1),
                  bVar4 = (ulong)local_2b8[0] < (ulong)dVar14, iVar12 = iVar15,
                  local_2b8[0] = dVar16, bVar4) {
              if (plStack_288 == local_290) {
                FUN_0061d968(&local_290,1,0xffffffff);
              }
              *(undefined1 *)local_290 = 0;
              local_290 = (long *)((long)local_290 + 1);
            }
          }
          else {
            pcVar6 = (char *)luaL_checklstring(param_1,iVar15,(ulong *)local_2b8);
            if ((iVar13 < 8) && ((ulong)local_2b8[0] >> ((ulong)(uint)(iVar13 << 3) & 0x3f) != 0)) {
              pcVar6 = "string length does not fit in given size";
              goto LAB_0062cd38;
            }
            FUN_0062d72c(&local_290,local_2b8[0],local_2d0 & 0xffffffff,iVar13,0);
            luaL_addlstring((luaL_Strbuf *)&local_290,pcVar6,(ulong)local_2b8[0]);
            lVar9 = (long)local_2b8[0] + lVar9;
            iVar12 = iVar15;
          }
        }
      }
      else if (1 < iVar5 - 7U) {
        if (iVar5 == 5) {
          pcVar6 = (char *)luaL_checklstring(param_1,iVar15,(ulong *)local_2b8);
          dVar14 = (double)strlen(pcVar6);
          if (dVar14 != local_2b8[0]) {
            pcVar6 = "string contains zeros";
            goto LAB_0062cd38;
          }
          luaL_addlstring((luaL_Strbuf *)&local_290,pcVar6,(ulong)dVar14);
          if (plStack_288 == local_290) {
            FUN_0061d968(&local_290,1,0xffffffff);
          }
          *(undefined1 *)local_290 = 0;
          lVar9 = lVar9 + (long)local_2b8[0] + 1;
          iVar12 = iVar15;
          local_290 = (long *)((long)local_290 + 1);
        }
        else {
          if (plStack_288 == local_290) {
            FUN_0061d968(&local_290,1,0xffffffff);
          }
          *(undefined1 *)local_290 = 0;
          local_290 = (long *)((long)local_290 + 1);
        }
      }
    } while (*local_2e0 != '\0');
  }
  luaL_pushresult((luaL_Strbuf *)&local_290);
  if (*(long *)(lVar2 + 0x28) != local_70[0]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


// ===== 0062cd48  FUN_0062cd48 =====

undefined8 FUN_0062cd48(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  double *pdVar4;
  long lVar5;
  int iVar6;
  double dVar7;
  int local_58;
  int iStack_54;
  char *local_50;
  lua_State *plStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (char *)luaL_checklstring(param_1,1,(ulong *)0x0);
  local_40 = 0x100000001;
  plStack_48 = param_1;
  if (*local_50 == '\0') {
    dVar7 = 0.0;
  }
  else {
    iVar6 = 0;
    do {
      iVar2 = FUN_0062d1fc(&plStack_48,(long)iVar6,&local_50,&iStack_54,&local_58);
      if (0xfffffffd < iVar2 - 6U) {
        pcVar3 = "variable-length format";
LAB_0062ce40:
                    /* WARNING: Subroutine does not return */
        luaL_argerrorL(param_1,1,pcVar3);
      }
      if (0x40000000 - (iStack_54 + local_58) < iVar6) {
        pcVar3 = "format result too large";
        goto LAB_0062ce40;
      }
      iVar6 = iStack_54 + local_58 + iVar6;
    } while (*local_50 != '\0');
    dVar7 = (double)iVar6;
  }
  pdVar4 = *(double **)(param_1 + 8);
  *pdVar4 = dVar7;
  lVar5 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)pdVar4 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar5 + 0x10;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0062ce50  FUN_0062ce50 =====

void FUN_0062ce50(lua_State *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  size_t sVar9;
  undefined1 *puVar10;
  double *pdVar11;
  int iVar12;
  float *pfVar13;
  undefined1 *puVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  int iVar18;
  double dVar19;
  int local_b8;
  int iStack_b4;
  ulong local_b0;
  char *local_a8;
  lua_State *local_a0;
  undefined8 local_98;
  float local_90;
  undefined4 uStack_8c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pcVar6 = (char *)luaL_checklstring(param_1,1,(ulong *)0x0);
  local_a8 = pcVar6;
  lVar7 = luaL_checklstring(param_1,2,&local_b0);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
  if (((puVar1 < *(undefined8 **)(param_1 + 8)) && (puVar1 != &DAT_00285948)) &&
     (0 < *(int *)(*(long *)(param_1 + 0x10) + 0x2c))) {
    iVar4 = luaL_checkinteger(param_1,3);
    if (iVar4 < 0) {
      iVar12 = (int)local_b0 + 1;
    }
    else {
      iVar12 = 0;
    }
  }
  else {
    iVar12 = 0;
    iVar4 = 1;
  }
  iVar12 = iVar12 + iVar4;
  if (iVar12 < 2) {
    iVar12 = 1;
  }
  uVar17 = (ulong)(iVar12 - 1);
  if (local_b0 < uVar17) {
                    /* WARNING: Subroutine does not return */
    luaL_argerrorL(param_1,3,"initial position out of string");
  }
  local_98 = 0x100000001;
  local_a0 = param_1;
  if (*pcVar6 == '\0') {
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
    do {
      iVar16 = (int)uVar17;
      iVar5 = FUN_0062d1fc(&local_a0,(long)iVar16,&local_a8,&iStack_b4,&local_b8);
      iVar12 = iStack_b4;
      if (local_b0 - (long)iVar16 < (ulong)((long)local_b8 + (long)iStack_b4)) {
LAB_0062d1c4:
        pcVar6 = "data string too short";
LAB_0062d1cc:
                    /* WARNING: Subroutine does not return */
        luaL_argerrorL(param_1,2,pcVar6);
      }
      uVar15 = (ulong)iStack_b4;
      uVar17 = (long)local_b8 + (long)iVar16;
      luaL_checkstack(param_1,2,"too many results");
      iVar16 = iVar4 + 1;
      iVar18 = (int)uVar17;
      if (iVar5 < 4) {
        if (iVar5 < 2) {
          if (iVar5 == 0) {
            lVar8 = FUN_0062d318(param_1,lVar7 + uVar17,local_98 & 0xffffffff,iVar12,1);
            dVar19 = (double)lVar8;
            pdVar11 = *(double **)(param_1 + 8);
          }
          else {
            uVar15 = FUN_0062d318(param_1,lVar7 + iVar18,local_98 & 0xffffffff,iVar12,0);
            pdVar11 = *(double **)(param_1 + 8);
            dVar19 = (double)uVar15;
          }
          *pdVar11 = dVar19;
          *(undefined4 *)((long)pdVar11 + 0xc) = 3;
          lVar8 = *(long *)(param_1 + 8);
        }
        else {
          if (iVar5 != 2) {
            lua_pushlstring(param_1,(char *)(lVar7 + iVar18),uVar15);
            iVar4 = iVar16;
            goto LAB_0062d148;
          }
          if ((int)local_98 == 1) {
            if (iVar12 == 0) goto LAB_0062d128;
            puVar10 = (undefined1 *)(lVar7 + iVar18);
            pfVar13 = &local_90;
            iVar4 = iVar12;
            do {
              iVar4 = iVar4 + -1;
              *(undefined1 *)pfVar13 = *puVar10;
              puVar10 = puVar10 + 1;
              pfVar13 = (float *)((long)pfVar13 + 1);
            } while (iVar4 != 0);
LAB_0062d10c:
            if ((iVar12 == 8) || (iVar12 != 4)) goto LAB_0062d128;
            dVar19 = (double)local_90;
          }
          else {
            if (iVar12 != 0) {
              puVar10 = (undefined1 *)(lVar7 + iVar18);
              puVar14 = (undefined1 *)((long)&local_98 + uVar15 + 7);
              iVar4 = iVar12;
              do {
                iVar4 = iVar4 + -1;
                *puVar14 = *puVar10;
                puVar10 = puVar10 + 1;
                puVar14 = puVar14 + -1;
              } while (iVar4 != 0);
              goto LAB_0062d10c;
            }
LAB_0062d128:
            dVar19 = (double)CONCAT44(uStack_8c,local_90);
          }
          pdVar11 = *(double **)(param_1 + 8);
          *pdVar11 = dVar19;
          lVar8 = *(long *)(param_1 + 8);
          *(undefined4 *)((long)pdVar11 + 0xc) = 3;
        }
        *(long *)(param_1 + 8) = lVar8 + 0x10;
        iVar4 = iVar16;
      }
      else if (2 < iVar5 - 6U) {
        if (iVar5 == 4) {
          uVar17 = FUN_0062d318(param_1,lVar7 + iVar18,local_98 & 0xffffffff,iVar12,0);
          if (local_b0 - (uVar15 + (long)iVar18) < uVar17) goto LAB_0062d1c4;
          lua_pushlstring(param_1,(char *)(lVar7 + iVar18 + uVar15),uVar17);
          uVar17 = (ulong)(uint)(iVar18 + (int)uVar17);
          iVar4 = iVar16;
        }
        else {
          sVar9 = strlen((char *)(lVar7 + iVar18));
          if (local_b0 <= sVar9 + (long)iVar18) {
            pcVar6 = "unfinished string for format \'z\'";
            goto LAB_0062d1cc;
          }
          lua_pushlstring(param_1,(char *)(lVar7 + iVar18),sVar9);
          uVar17 = (ulong)(iVar18 + (int)sVar9 + 1);
          iVar4 = iVar16;
        }
      }
LAB_0062d148:
      uVar2 = (int)uVar17 + iVar12;
      uVar17 = (ulong)uVar2;
    } while (*local_a8 != '\0');
    iVar12 = uVar2 + 1;
    iVar4 = iVar4 + 1;
  }
  pdVar11 = *(double **)(param_1 + 8);
  *(undefined4 *)((long)pdVar11 + 0xc) = 3;
  *pdVar11 = (double)iVar12;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar4);
  }
  return;
}


// ===== 0062d1fc  FUN_0062d1fc =====

int FUN_0062d1fc(undefined8 *param_1,uint param_2,undefined8 *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  lua_State *plVar5;
  char *pcVar6;
  uint uVar7;
  uint local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  iVar3 = FUN_0062d3f0(param_1,param_3,param_4);
  local_5c = *param_4;
  if ((iVar3 == 7) &&
     (((*(char *)*param_3 == '\0' || (iVar4 = FUN_0062d3f0(param_1,param_3,&local_5c), iVar4 == 3))
      || (local_5c == 0)))) {
    plVar5 = (lua_State *)*param_1;
    pcVar6 = "invalid next option for option \'X\'";
LAB_0062d310:
                    /* WARNING: Subroutine does not return */
    luaL_argerrorL(plVar5,1,pcVar6);
  }
  uVar7 = 0;
  if ((iVar3 != 3) && (1 < (int)local_5c)) {
    uVar1 = local_5c;
    if ((int)*(uint *)((long)param_1 + 0xc) <= (int)local_5c) {
      uVar1 = *(uint *)((long)param_1 + 0xc);
    }
    uVar7 = uVar1 - 1;
    if ((uVar1 & uVar7) != 0) {
      plVar5 = (lua_State *)*param_1;
      pcVar6 = "format asks for alignment not power of 2";
      goto LAB_0062d310;
    }
    uVar7 = uVar1 - (uVar7 & param_2) & uVar7;
  }
  *param_5 = uVar7;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0062d318  FUN_0062d318 =====

ulong FUN_0062d318(lua_State *param_1,long param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  uVar5 = param_4;
  if (7 < (int)param_4) {
    uVar5 = 8;
  }
  if ((int)param_4 < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    iVar8 = uVar5 + 1;
    iVar9 = param_4 - uVar5;
    do {
      iVar3 = iVar8 + -2;
      iVar8 = iVar8 + -1;
      iVar1 = iVar9;
      if (param_3 != 0) {
        iVar1 = iVar3;
      }
      iVar9 = iVar9 + 1;
      uVar4 = (ulong)*(byte *)(param_2 + iVar1) | uVar4 << 8;
    } while (1 < iVar8);
    if (7 < (int)param_4) {
      if (param_4 == 8) {
        return uVar4;
      }
      uVar10 = ~uVar5 + param_4;
      cVar7 = '\0';
      if ((uVar4 == 0xffffffffffffffff || (long)(uVar4 + 1) < 0 != SCARRY8(uVar4,1)) && param_5 != 0
         ) {
        cVar7 = -1;
      }
      while( true ) {
        uVar2 = uVar10;
        if (param_3 != 0) {
          uVar2 = uVar5;
        }
        if (cVar7 != *(char *)(param_2 + (int)uVar2)) break;
        uVar5 = uVar5 + 1;
        uVar10 = uVar10 - 1;
        if ((int)param_4 <= (int)uVar5) {
          return uVar4;
        }
      }
                    /* WARNING: Subroutine does not return */
      luaL_errorL(param_1,"%d-byte integer does not fit into Lua Integer",(ulong)param_4);
    }
  }
  if (param_5 == 0) {
    return uVar4;
  }
  uVar6 = 1L << ((ulong)(param_4 * 8 - 1) & 0x3f);
  return (uVar4 ^ uVar6) - uVar6;
}


// ===== 0062d3f0  FUN_0062d3f0 =====

undefined4 FUN_0062d3f0(undefined8 *param_1,long *param_2,int *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)*param_2;
  *param_2 = (long)(pbVar4 + 1);
  bVar1 = *pbVar4;
  *param_3 = 0;
  if (bVar1 < 0x62) {
    if (bVar1 < 0x48) {
      if (bVar1 < 0x3d) {
        if (bVar1 == 0x20) {
          return 8;
        }
        if (bVar1 == 0x21) {
          uVar2 = FUN_0062d65c(param_1,param_2,8);
          *(undefined4 *)((long)param_1 + 0xc) = uVar2;
          return 8;
        }
        if (bVar1 == 0x3c) {
LAB_0062d554:
          *(undefined4 *)(param_1 + 1) = 1;
          return 8;
        }
      }
      else {
        if (bVar1 == 0x3d) goto LAB_0062d554;
        if (bVar1 == 0x3e) {
          *(undefined4 *)(param_1 + 1) = 0;
          return 8;
        }
        if (bVar1 == 0x42) {
          *param_3 = 1;
          return 1;
        }
      }
LAB_0062d64c:
                    /* WARNING: Subroutine does not return */
      luaL_errorL((lua_State *)*param_1,"invalid format option \'%c\'");
    }
    if (bVar1 < 0x4c) {
      if (bVar1 == 0x48) {
        iVar3 = 2;
        goto LAB_0062d594;
      }
      if (bVar1 == 0x49) {
        iVar3 = FUN_0062d65c(param_1,param_2,4);
        uVar2 = 1;
        goto LAB_0062d5f8;
      }
      if (bVar1 != 0x4a) goto LAB_0062d64c;
    }
    else {
      if (bVar1 == 0x4c) {
        iVar3 = 8;
        goto LAB_0062d594;
      }
      if (bVar1 != 0x54) {
        if (bVar1 == 0x58) {
          return 7;
        }
        goto LAB_0062d64c;
      }
    }
    iVar3 = 4;
LAB_0062d594:
    *param_3 = iVar3;
    return 1;
  }
  if (bVar1 < 0x6a) {
    if (bVar1 < 0x66) {
      if (bVar1 != 0x62) {
        if (bVar1 == 99) {
          iVar3 = FUN_0062d6a4(param_1,param_2,0xffffffff);
          *param_3 = iVar3;
          if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
            luaL_errorL((lua_State *)*param_1,"missing size for format option \'c\'");
          }
          return 3;
        }
        if (bVar1 != 100) goto LAB_0062d64c;
LAB_0062d4bc:
        iVar3 = 8;
LAB_0062d584:
        *param_3 = iVar3;
        return 2;
      }
      iVar3 = 1;
    }
    else {
      if (bVar1 == 0x66) {
        iVar3 = 4;
        goto LAB_0062d584;
      }
      if (bVar1 != 0x68) {
        if (bVar1 == 0x69) {
          iVar3 = FUN_0062d65c(param_1,param_2,4);
          uVar2 = 0;
          goto LAB_0062d5f8;
        }
        goto LAB_0062d64c;
      }
      iVar3 = 2;
    }
  }
  else {
    if (0x72 < bVar1) {
      if (bVar1 == 0x73) {
        uVar2 = 4;
        iVar3 = FUN_0062d65c(param_1,param_2,4);
LAB_0062d5f8:
        *param_3 = iVar3;
        return uVar2;
      }
      if (bVar1 != 0x78) {
        if (bVar1 == 0x7a) {
          return 5;
        }
        goto LAB_0062d64c;
      }
      iVar3 = 1;
      uVar2 = 6;
      goto LAB_0062d61c;
    }
    if (bVar1 == 0x6a) {
      iVar3 = 4;
    }
    else {
      if (bVar1 != 0x6c) {
        if (bVar1 != 0x6e) goto LAB_0062d64c;
        goto LAB_0062d4bc;
      }
      iVar3 = 8;
    }
  }
  uVar2 = 0;
LAB_0062d61c:
  *param_3 = iVar3;
  return uVar2;
}


// ===== 0062d65c  FUN_0062d65c =====

ulong FUN_0062d65c(undefined8 *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0062d6a4();
  if (0xffffffef < uVar1 - 0x11) {
    return (ulong)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  luaL_errorL((lua_State *)*param_1,"integral size (%d) out of limits [1,%d]",(ulong)uVar1,0x10);
}


// ===== 0062d6a4  FUN_0062d6a4 =====

int FUN_0062d6a4(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  
  if (0xfffffff5 < *(byte *)*param_2 - 0x3a) {
    param_3 = 0;
    pbVar2 = (byte *)*param_2;
    do {
      pbVar1 = pbVar2 + 1;
      *param_2 = pbVar1;
      param_3 = (uint)*pbVar2 + param_3 * 10 + -0x30;
      if (9 < *pbVar1 - 0x30) break;
      pbVar2 = pbVar1;
    } while (param_3 < 0xccccccc);
    if (0x40000000 < param_3 || *pbVar1 - 0x30 < 10) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL((lua_State *)*param_1,"size specifier is too large");
    }
  }
  return param_3;
}


// ===== 0062d72c  FUN_0062d72c =====

void FUN_0062d72c(luaL_Strbuf *param_1,ulong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  char local_38 [16];
  long local_28;
  
  lVar2 = tpidr_el0;
  iVar4 = param_4 + -1;
  local_28 = *(long *)(lVar2 + 0x28);
  if (param_3 != 0) {
    iVar4 = 0;
  }
  iVar3 = param_4 + -2;
  local_38[iVar4] = (char)param_2;
  if (1 < param_4) {
    iVar4 = 1;
    do {
      iVar1 = iVar3;
      if (param_3 != 0) {
        iVar1 = iVar4;
      }
      iVar3 = iVar3 + -1;
      iVar4 = iVar4 + 1;
      local_38[iVar1] = (char)(param_2 >> 8);
      param_2 = param_2 >> 8;
    } while (iVar3 != -1);
    iVar4 = param_4 + -9;
    if ((8 < param_4) && (param_5 != 0)) {
      iVar3 = 8;
      do {
        iVar1 = iVar4;
        if (param_3 != 0) {
          iVar1 = iVar3;
        }
        iVar4 = iVar4 + -1;
        iVar3 = iVar3 + 1;
        local_38[iVar1] = -1;
      } while (iVar4 != -1);
    }
  }
  luaL_addlstring(param_1,local_38,(long)param_4);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0062d7ec  FUN_0062d7ec =====

void FUN_0062d7ec(lua_State *param_1,int param_2)

{
  undefined8 *puVar1;
  void *__s1;
  double *pdVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  char *pcVar10;
  size_t sVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  void *pvVar15;
  void *__s;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  double *pdVar19;
  ulong local_2b0;
  ulong local_2a8;
  undefined4 local_2a0 [2];
  long local_298;
  ulong local_290;
  byte *local_288;
  lua_State *plStack_280;
  undefined4 local_278;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  lVar8 = luaL_checklstring(param_1,1,&local_2a8);
  pbVar9 = (byte *)luaL_checklstring(param_1,2,&local_2b0);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
  if (((puVar1 < *(undefined8 **)(param_1 + 8)) && (puVar1 != &DAT_00285948)) &&
     (0 < *(int *)(*(long *)(param_1 + 0x10) + 0x2c))) {
    iVar6 = luaL_checkinteger(param_1,3);
    uVar13 = (int)local_2a8 + 1;
    uVar16 = (uVar13 & iVar6 >> 0x1f) + iVar6;
    if (0 < (int)uVar16) goto LAB_0062d8a8;
    uVar16 = 1;
    uVar12 = local_2a8;
LAB_0062d8c0:
    uVar17 = local_2b0;
    iVar6 = (int)lVar8;
    if (param_2 == 0) {
LAB_0062d8fc:
      bVar3 = *pbVar9;
      uVar18 = (lVar8 + (ulong)uVar16) - 1;
      if (bVar3 == 0x5e) {
        uVar17 = uVar17 - 1;
        pbVar9 = pbVar9 + 1;
        local_2b0 = uVar17;
      }
      local_2a0[0] = 200;
      local_290 = lVar8 + uVar12;
      local_288 = pbVar9 + uVar17;
      local_298 = lVar8;
      plStack_280 = param_1;
      do {
        local_278 = 0;
        lVar8 = FUN_0062db3c(local_2a0,uVar18,pbVar9);
        if (lVar8 != 0) {
          if (param_2 == 0) {
            uVar12 = FUN_0062df88(local_2a0,uVar18);
          }
          else {
            pdVar19 = *(double **)(param_1 + 8);
            *(undefined4 *)((long)pdVar19 + 0xc) = 3;
            *pdVar19 = (double)(((int)uVar18 - iVar6) + 1);
            lVar14 = *(long *)(param_1 + 8);
            *(undefined4 *)(lVar14 + 0x1c) = 3;
            *(long *)(param_1 + 8) = lVar14 + 0x10;
            *(double *)(lVar14 + 0x10) = (double)((int)lVar8 - iVar6);
            *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
            iVar6 = FUN_0062df88(local_2a0,0,0);
            uVar12 = (ulong)(iVar6 + 2);
          }
          goto LAB_0062daa4;
        }
      } while ((bVar3 != 0x5e) && (bVar5 = uVar18 < local_290, uVar18 = uVar18 + 1, bVar5));
      pdVar19 = *(double **)(param_1 + 8);
    }
    else {
      pdVar19 = *(double **)(param_1 + 8);
      pdVar2 = (double *)(*(long *)(param_1 + 0x10) + 0x30);
      if (pdVar19 <= (double *)(*(long *)(param_1 + 0x10) + 0x30)) {
        pdVar2 = (double *)&DAT_00285948;
      }
      if ((*(int *)((long)pdVar2 + 0xc) == 0) ||
         ((*(int *)((long)pdVar2 + 0xc) == 1 && (*(int *)pdVar2 == 0)))) {
        uVar18 = 0;
        do {
          pcVar10 = strpbrk((char *)(pbVar9 + uVar18),"^$*+?.([%-");
          if (pcVar10 != (char *)0x0) goto LAB_0062d8fc;
          sVar11 = strlen((char *)(pbVar9 + uVar18));
          uVar18 = uVar18 + sVar11 + 1;
        } while (uVar18 <= uVar17);
      }
      pvVar15 = (void *)(lVar8 + (ulong)uVar16 + -1);
      if (uVar17 == 0) {
LAB_0062daec:
        iVar6 = (int)pvVar15 - iVar6;
        uVar12 = 2;
        *pdVar19 = (double)(iVar6 + 1);
        lVar8 = *(long *)(param_1 + 8);
        *(int *)((long)pdVar19 + 0xc) = 3;
        *(long *)(param_1 + 8) = lVar8 + 0x10;
        *(undefined4 *)(lVar8 + 0x1c) = 3;
        *(double *)(lVar8 + 0x10) = (double)(iVar6 + (int)local_2b0);
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
        goto LAB_0062daa4;
      }
      uVar12 = (uVar12 - uVar16) + 1;
      if (uVar17 <= uVar12) {
        sVar11 = uVar12 - (uVar17 - 1);
        if (sVar11 != 0) {
          bVar3 = *pbVar9;
          __s = pvVar15;
          do {
            pvVar15 = memchr(__s,(uint)bVar3,sVar11);
            if (pvVar15 == (void *)0x0) break;
            __s1 = (void *)((long)pvVar15 + 1);
            iVar7 = memcmp(__s1,pbVar9 + 1,uVar17 - 1);
            if (iVar7 == 0) goto LAB_0062daec;
            sVar11 = (long)__s + (sVar11 - (long)__s1);
            __s = __s1;
          } while (sVar11 != 0);
        }
      }
    }
    *(int *)((long)pdVar19 + 0xc) = 0;
  }
  else {
    uVar16 = 1;
    uVar13 = (int)local_2a8 + 1;
LAB_0062d8a8:
    uVar12 = local_2a8;
    if ((int)uVar16 <= (int)uVar13) goto LAB_0062d8c0;
    pdVar19 = *(double **)(param_1 + 8);
    *(int *)((long)pdVar19 + 0xc) = 0;
  }
  *(double **)(param_1 + 8) = pdVar19 + 2;
  uVar12 = 1;
LAB_0062daa4:
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar12);
  }
  return;
}


// ===== 0062db3c  FUN_0062db3c =====

byte * FUN_0062db3c(int *param_1,byte *param_2,byte *param_3)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  code *pcVar7;
  byte *pbVar8;
  uint uVar9;
  byte *__s2;
  lua_State *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  
  iVar4 = *param_1;
  plVar10 = *(lua_State **)(param_1 + 8);
  *param_1 = iVar4 + -1;
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    luaL_errorL(plVar10,"pattern too complex");
  }
  pcVar7 = *(code **)(*(long *)(plVar10 + 0x18) + 0x510);
  if (pcVar7 != (code *)0x0) {
    *(short *)(plVar10 + 0x50) = *(short *)(plVar10 + 0x50) + 1;
    (*pcVar7)(plVar10,0xffffffff);
    *(short *)(plVar10 + 0x50) = *(short *)(plVar10 + 0x50) + -1;
  }
LAB_0062db7c:
  pbVar5 = param_3;
  __s2 = param_2;
  param_2 = __s2 + 1;
LAB_0062db84:
  pbVar8 = *(byte **)(param_1 + 6);
  pbVar6 = __s2;
  if (pbVar5 == pbVar8) goto LAB_0062def0;
  bVar3 = *pbVar5;
  if (bVar3 < 0x25) {
    if ((bVar3 == 0x24) && (pbVar5 + 1 == pbVar8)) {
      if (__s2 != *(byte **)(param_1 + 4)) {
        pbVar6 = (byte *)0x0;
      }
      goto LAB_0062def0;
    }
  }
  else if (bVar3 == 0x25) {
    bVar3 = pbVar5[1];
    if (bVar3 == 0x66) {
      pbVar6 = pbVar5 + 2;
      if (*pbVar6 != 0x5b) {
                    /* WARNING: Subroutine does not return */
        luaL_errorL(*(lua_State **)(param_1 + 8),"missing \'[\' after \'%%f\' in pattern");
      }
      pbVar5 = (byte *)FUN_0062e11c(param_1,pbVar6);
      if (__s2 == *(byte **)(param_1 + 2)) {
        bVar3 = 0;
      }
      else {
        bVar3 = __s2[-1];
      }
      iVar4 = FUN_0062e1d8(bVar3,pbVar6,pbVar5 + -1);
      if ((iVar4 != 0) || (iVar4 = FUN_0062e1d8(*__s2,pbVar6,pbVar5 + -1), iVar4 == 0))
      goto LAB_0062de4c;
      goto LAB_0062db84;
    }
    uVar9 = (uint)bVar3;
    if (bVar3 - 0x30 < 10) {
      uVar2 = uVar9 - 0x31;
      if (((uVar9 < 0x31) || (param_1[10] <= (int)uVar2)) ||
         (uVar11 = *(ulong *)(param_1 + (ulong)uVar2 * 4 + 0xe), uVar11 == 0xffffffffffffffff)) {
                    /* WARNING: Subroutine does not return */
        luaL_errorL(*(lua_State **)(param_1 + 8),"invalid capture index %%%d");
      }
      if ((ulong)(*(long *)(param_1 + 4) - (long)__s2) < uVar11) goto LAB_0062de4c;
      iVar4 = memcmp(*(void **)(param_1 + (ulong)uVar2 * 4 + 0xc),__s2,uVar11);
      pbVar6 = (byte *)0x0;
      if ((iVar4 != 0) || (__s2 == (byte *)0x0)) goto LAB_0062def0;
      param_2 = __s2 + uVar11;
      param_3 = pbVar5 + 2;
      goto LAB_0062db7c;
    }
    if (uVar9 == 0x62) {
      if (pbVar8 + -1 <= pbVar5 + 2) {
                    /* WARNING: Subroutine does not return */
        luaL_errorL(*(lua_State **)(param_1 + 8),"malformed pattern (missing arguments to \'%%b\')")
        ;
      }
      bVar3 = *__s2;
      if ((bVar3 != pbVar5[2]) || (*(byte **)(param_1 + 4) <= param_2)) goto LAB_0062de4c;
      pbVar8 = *(byte **)(param_1 + 4) + ~(ulong)__s2;
      iVar4 = 1;
      goto LAB_0062dd8c;
    }
  }
  else {
    if (bVar3 == 0x29) {
      uVar11 = (ulong)(uint)param_1[10];
      lVar12 = uVar11 * 0x10 + 0x28;
      do {
        if ((int)uVar11 < 1) {
                    /* WARNING: Subroutine does not return */
          luaL_errorL(*(lua_State **)(param_1 + 8),"invalid pattern capture");
        }
        plVar1 = (long *)((long)param_1 + lVar12);
        uVar11 = uVar11 - 1;
        lVar12 = lVar12 + -0x10;
      } while (*plVar1 != -1);
      *(long *)(param_1 + (uVar11 & 0xffffffff) * 4 + 0xe) =
           (long)__s2 - *(long *)(param_1 + (uVar11 & 0xffffffff) * 4 + 0xc);
      pbVar6 = (byte *)FUN_0062db3c(param_1,__s2,pbVar5 + 1);
      if (pbVar6 == (byte *)0x0) {
        *(long *)(param_1 + (uVar11 & 0xffffffff) * 4 + 0xe) = -1;
      }
      goto LAB_0062def0;
    }
    if (bVar3 == 0x28) {
      pbVar6 = pbVar5 + 1;
      if (*pbVar6 == 0x29) {
        pbVar6 = pbVar5 + 2;
        uVar13 = 0xfffffffe;
      }
      else {
        uVar13 = 0xffffffff;
      }
      pbVar6 = (byte *)FUN_0062e0b8(param_1,__s2,pbVar6,uVar13);
      goto LAB_0062def0;
    }
  }
  param_3 = (byte *)FUN_0062e11c(param_1,pbVar5);
  uVar13 = *(undefined8 *)(param_1 + 4);
  iVar4 = FUN_0062e2ac(uVar13,__s2,pbVar5,param_3);
  bVar3 = *param_3;
  if (iVar4 == 0) {
    pbVar6 = (byte *)0x0;
    if ((0x3f < bVar3) || ((1L << ((ulong)bVar3 & 0x3f) & 0x8000240000000000U) == 0))
    goto LAB_0062def0;
    pbVar5 = param_3 + 1;
    goto LAB_0062db84;
  }
  if (bVar3 == 0x3f) {
    pbVar5 = param_3 + 1;
    pbVar6 = (byte *)FUN_0062db3c(param_1,param_2,pbVar5);
    if (pbVar6 != (byte *)0x0) goto LAB_0062def0;
    goto LAB_0062db84;
  }
  pbVar8 = __s2;
  if ((bVar3 != 0x2a) && (pbVar8 = param_2, bVar3 != 0x2b)) goto code_r0x0062dcdc;
  lVar12 = -1;
  do {
    lVar12 = lVar12 + 1;
    iVar4 = FUN_0062e2ac(uVar13,pbVar8 + lVar12,pbVar5,param_3);
  } while (iVar4 != 0);
  while (-1 < lVar12) {
    pbVar6 = (byte *)FUN_0062db3c(param_1,pbVar8 + lVar12,param_3 + 1);
    lVar12 = lVar12 + -1;
    if (pbVar6 != (byte *)0x0) goto LAB_0062def0;
  }
  goto LAB_0062de4c;
code_r0x0062dcdc:
  if (bVar3 == 0x2d) goto LAB_0062ddcc;
  goto LAB_0062db7c;
LAB_0062dd8c:
  if (__s2[1] == pbVar5[3]) {
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) goto LAB_0062ddc0;
  }
  else if (__s2[1] == bVar3) {
    iVar4 = iVar4 + 1;
  }
  pbVar6 = (byte *)0x0;
  pbVar8 = pbVar8 + -1;
  __s2 = __s2 + 1;
  if (pbVar8 == (byte *)0x0) goto LAB_0062def0;
  goto LAB_0062dd8c;
LAB_0062ddc0:
  param_2 = __s2 + 2;
  param_3 = pbVar5 + 4;
  goto LAB_0062db7c;
  while( true ) {
    iVar4 = FUN_0062e2ac(*(undefined8 *)(param_1 + 4),__s2,pbVar5,param_3);
    __s2 = __s2 + 1;
    if (iVar4 == 0) break;
LAB_0062ddcc:
    pbVar6 = (byte *)FUN_0062db3c(param_1,__s2,param_3 + 1);
    if (pbVar6 != (byte *)0x0) goto LAB_0062def0;
  }
LAB_0062de4c:
  pbVar6 = (byte *)0x0;
LAB_0062def0:
  *param_1 = *param_1 + 1;
  return pbVar6;
}


// ===== 0062df88  FUN_0062df88 =====

int FUN_0062df88(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 0 && param_2 != 0) {
    iVar1 = 1;
  }
  luaL_checkstack(*(lua_State **)(param_1 + 0x20),iVar1,"too many captures");
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      FUN_0062e010(param_1,iVar2,param_2,param_3);
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
  }
  return iVar1;
}


// ===== 0062e010  FUN_0062e010 =====

void FUN_0062e010(long param_1,int param_2,char *param_3,long param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  lua_State *plVar4;
  ulong uVar5;
  double *pdVar6;
  
  if (param_2 < *(int *)(param_1 + 0x28)) {
    lVar1 = param_1 + (long)param_2 * 0x10;
    plVar4 = *(lua_State **)(param_1 + 0x20);
    uVar5 = *(ulong *)(lVar1 + 0x38);
    if (uVar5 == 0xfffffffffffffffe) {
      iVar3 = *(int *)(lVar1 + 0x30);
      iVar2 = *(int *)(param_1 + 8);
      pdVar6 = *(double **)(plVar4 + 8);
      *(undefined4 *)((long)pdVar6 + 0xc) = 3;
      *pdVar6 = (double)((iVar3 - iVar2) + 1);
      *(long *)(plVar4 + 8) = *(long *)(plVar4 + 8) + 0x10;
      return;
    }
    if (uVar5 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL(plVar4,"unfinished capture");
    }
    param_3 = *(char **)(lVar1 + 0x30);
  }
  else {
    plVar4 = *(lua_State **)(param_1 + 0x20);
    if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL(plVar4,"invalid capture index");
    }
    uVar5 = param_4 - (long)param_3;
  }
  lua_pushlstring(plVar4,param_3,uVar5);
  return;
}


// ===== 0062e0b8  FUN_0062e0b8 =====

void FUN_0062e0b8(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < 0x20) {
    lVar2 = param_1 + (long)iVar1 * 0x10;
    *(int *)(param_1 + 0x28) = iVar1 + 1;
    *(undefined8 *)(lVar2 + 0x30) = param_2;
    *(long *)(lVar2 + 0x38) = (long)param_4;
    lVar2 = FUN_0062db3c(param_1);
    if (lVar2 == 0) {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  luaL_errorL(*(lua_State **)(param_1 + 0x20),"too many captures");
}


// ===== 0062e11c  FUN_0062e11c =====

char * FUN_0062e11c(long param_1,char *param_2)

{
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar3 = param_2 + 1;
  if (*param_2 == '[') {
    pcVar4 = *(char **)(param_1 + 0x18);
    pcVar5 = param_2 + 2;
    if (param_2[1] != '^') {
      pcVar5 = pcVar3;
    }
    do {
      if (pcVar5 == pcVar4) {
                    /* WARNING: Subroutine does not return */
        luaL_errorL(*(lua_State **)(param_1 + 0x20),"malformed pattern (missing \']\')");
      }
      lVar2 = 1;
      if (*pcVar5 == '%' && pcVar5 + 1 < pcVar4) {
        lVar2 = 2;
      }
      pcVar1 = pcVar5 + lVar2;
      pcVar3 = pcVar5 + 2;
      if (*pcVar5 != '%' || pcVar5 + 1 >= pcVar4) {
        pcVar3 = pcVar5 + 1;
      }
      pcVar5 = pcVar3;
    } while (*pcVar1 != ']');
    pcVar3 = pcVar3 + 1;
  }
  else if (*param_2 == '%') {
    if (pcVar3 == *(char **)(param_1 + 0x18)) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL(*(lua_State **)(param_1 + 0x20),"malformed pattern (ends with \'%%\')");
    }
    pcVar3 = param_2 + 2;
  }
  return pcVar3;
}


// ===== 0062e1d8  FUN_0062e1d8 =====

bool FUN_0062e1d8(uint param_1,byte *param_2,byte *param_3)

{
  bool bVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  bool bVar5;
  int iVar6;
  
  bVar5 = param_2[1] == 0x5e;
  pbVar2 = param_2 + 1;
  if (!bVar5) {
    pbVar2 = param_2;
  }
  bVar1 = !bVar5;
  do {
    while( true ) {
      while( true ) {
        pbVar4 = pbVar2 + 1;
        if (param_3 <= pbVar4) {
          return bVar5;
        }
        bVar3 = pbVar2[1];
        if (bVar3 != 0x25) break;
        iVar6 = FUN_0062e308(param_1);
        pbVar2 = pbVar2 + 2;
        if (iVar6 != 0) {
          return bVar1;
        }
      }
      if ((pbVar2[2] == 0x2d) && (pbVar2 = pbVar2 + 3, pbVar2 < param_3)) break;
      pbVar2 = pbVar4;
      if (bVar3 == param_1) {
        return bVar1;
      }
    }
  } while ((bVar3 != param_1 && (int)param_1 <= (int)(uint)bVar3) ||
          ((int)(uint)*pbVar2 < (int)param_1));
  return bVar1;
}


// ===== 0062e2ac  FUN_0062e2ac =====

ulong FUN_0062e2ac(char *param_1,char *param_2,char *param_3,long param_4)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  
  if (param_1 <= param_2) {
    return 0;
  }
  cVar1 = *param_3;
  cVar2 = *param_2;
  if (cVar1 == '[') {
    uVar3 = FUN_0062e1d8(cVar2,param_3,param_4 + -1);
    return uVar3;
  }
  if (cVar1 == '.') {
    return 1;
  }
  if (cVar1 == '%') {
    uVar3 = FUN_0062e308(cVar2,param_3[1]);
    return uVar3;
  }
  return (ulong)(cVar1 == cVar2);
}


// ===== 0062e308  FUN_0062e308 =====

bool FUN_0062e308(uint param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = param_2 | 0x20;
  if (0x19 < param_2 - 0x41) {
    uVar1 = param_2;
  }
  uVar1 = uVar1 & 0xff;
  if (uVar1 < 0x70) {
    if (uVar1 < 100) {
      if (uVar1 != 0x61) {
        if (uVar1 == 99) {
          bVar2 = true;
          if (0x1f < param_1) {
            bVar2 = param_1 == 0x7f;
          }
          goto LAB_0062e45c;
        }
LAB_0062e434:
        return param_2 == param_1;
      }
      param_1 = (param_1 & 0xffffffdf) - 0x41;
LAB_0062e3c0:
      bVar2 = 0x19 < param_1;
    }
    else if (uVar1 == 100) {
      bVar2 = 9 < param_1 - 0x30;
    }
    else {
      if (uVar1 != 0x67) {
        if (uVar1 != 0x6c) goto LAB_0062e434;
        param_1 = param_1 - 0x61;
        goto LAB_0062e3c0;
      }
      bVar2 = 0x5d < param_1 - 0x21;
    }
  }
  else if (uVar1 < 0x77) {
    if (uVar1 == 0x70) {
      if (param_1 - 0x7f < 0xffffffa2) {
        bVar2 = false;
        goto LAB_0062e45c;
      }
      bVar2 = true;
      if (param_1 - 0x3a < 0xfffffff6) {
        bVar2 = 0xffffffe5 < (param_1 & 0x5f) - 0x5b;
      }
    }
    else {
      if (uVar1 != 0x73) {
        if (uVar1 != 0x75) goto LAB_0062e434;
        param_1 = param_1 - 0x41;
        goto LAB_0062e3c0;
      }
      bVar2 = param_1 != 0x20 && 4 < param_1 - 9;
    }
  }
  else if (uVar1 == 0x77) {
    bVar2 = 9 < param_1 - 0x30 && 0x19 < (param_1 & 0xffffffdf) - 0x41;
  }
  else {
    if (uVar1 != 0x78) {
      if (uVar1 != 0x7a) goto LAB_0062e434;
      bVar2 = param_1 == 0;
      goto LAB_0062e45c;
    }
    bVar2 = 9 < param_1 - 0x30 && 5 < (param_1 & 0xffffffdf) - 0x41;
  }
  bVar2 = !bVar2;
LAB_0062e45c:
  return (bool)(param_2 - 0x7b < 0xffffffe6 ^ bVar2);
}


// ===== 0062e470  FUN_0062e470 =====

void FUN_0062e470(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  double *pdVar7;
  ulong uVar8;
  ulong local_298;
  ulong uStack_290;
  undefined4 local_288 [2];
  long local_280;
  ulong local_278;
  long local_270;
  lua_State *plStack_268;
  undefined4 local_260;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar3 = lua_tolstring(param_1,-0x2713,&uStack_290);
  lVar4 = lua_tolstring(param_1,-0x2714,&local_298);
  local_288[0] = 200;
  local_278 = lVar3 + uStack_290;
  local_270 = lVar4 + local_298;
  local_280 = lVar3;
  plStack_268 = param_1;
  iVar2 = lua_tointegerx(param_1,-0x2715,(int *)0x0);
  if ((long)iVar2 <= (long)uStack_290) {
    uVar8 = lVar3 + iVar2;
    do {
      local_260 = 0;
      uVar5 = FUN_0062db3c(local_288,uVar8,lVar4);
      if (uVar5 != 0) {
        iVar2 = (int)uVar5 - (int)lVar3;
        if (uVar5 == uVar8) {
          iVar2 = iVar2 + 1;
        }
        pdVar7 = *(double **)(param_1 + 8);
        *(undefined4 *)((long)pdVar7 + 0xc) = 3;
        *pdVar7 = (double)iVar2;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
        lua_replace(param_1,-0x2715);
        uVar6 = FUN_0062df88(local_288,uVar8,uVar5);
        goto LAB_0062e578;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 <= local_278);
  }
  uVar6 = 0;
LAB_0062e578:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


// ===== 0062e5a8  FUN_0062e5a8 =====

long FUN_0062e5a8(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar6;
  int iVar3;
  byte bVar5;
  byte bVar7;
  undefined8 uVar4;
  byte bVar8;
  undefined8 uVar9;
  
  uVar1 = param_2[3];
  if ((int)uVar1 < 4) {
    if (uVar1 == 1) {
      uVar1 = *param_2;
      goto LAB_0062e6d0;
    }
    if ((uVar1 == 2) || (uVar1 != 3)) goto LAB_0062e610;
    uVar2 = (*param_2 ^ (param_2[1] & 0x7fffffff) >> 0x12) * 0x5bd1e995;
    uVar1 = param_2[1] & 0x7fffffff ^ uVar2 >> 0x16;
  }
  else {
    if (uVar1 != 4) {
      if (uVar1 == 5) {
        uVar9 = *(undefined8 *)(param_2 + 1);
        uVar4 = NEON_cmeq(uVar9,0x8000000080000000,4);
        bVar5 = (byte)((ulong)uVar9 >> 0x10) & ~(byte)((ulong)uVar4 >> 0x10);
        bVar6 = (byte)((ulong)uVar9 >> 0x18) & ~(byte)((ulong)uVar4 >> 0x18);
        bVar7 = (byte)((ulong)uVar9 >> 0x30) & ~(byte)((ulong)uVar4 >> 0x30);
        bVar8 = (byte)((ulong)uVar9 >> 0x38) & ~(byte)((ulong)uVar4 >> 0x38);
        iVar3 = CONCAT13(bVar6,CONCAT12(bVar5,CONCAT11(bVar6 >> 1 ^
                                                       (byte)((ulong)uVar9 >> 8) &
                                                       ~(byte)((ulong)uVar4 >> 8),
                                                       (byte)(CONCAT11(bVar6,bVar5) >> 1) ^
                                                       (byte)uVar9 & ~(byte)uVar4)));
        uVar1 = 0;
        if (*param_2 != 0x80000000) {
          uVar1 = *param_2;
        }
        uVar1 = iVar3 * (int)DAT_0024e5f0 ^ (uVar1 ^ uVar1 >> 0x11) * 0x466f45d ^
                (int)(CONCAT17(bVar8,CONCAT16(bVar7,CONCAT15(bVar8 >> 1 ^
                                                             (byte)((ulong)uVar9 >> 0x28) &
                                                             ~(byte)((ulong)uVar4 >> 0x28),
                                                             CONCAT14((byte)(uint)(((ulong)CONCAT11(
                                                  bVar8,bVar7) << 0x30) >> 0x31) ^
                                                  (byte)((ulong)uVar9 >> 0x20) &
                                                  ~(byte)((ulong)uVar4 >> 0x20),iVar3)))) >> 0x20) *
                (int)((ulong)DAT_0024e5f0 >> 0x20);
        goto LAB_0062e6d0;
      }
      if (uVar1 == 6) {
        uVar1 = *(uint *)(*(long *)param_2 + 0x10);
        goto LAB_0062e6d0;
      }
LAB_0062e610:
      uVar1 = (*param_2 ^ *param_2 >> 0x10) * -0x7a143595;
      uVar1 = (uVar1 ^ uVar1 >> 0xd) * -0x3d4d51cb;
      uVar1 = uVar1 ^ uVar1 >> 0x10;
      goto LAB_0062e6d0;
    }
    uVar1 = (uint)((ulong)*(undefined8 *)param_2 >> 0x20);
    uVar2 = (uVar1 >> 0x12 ^ (uint)*(undefined8 *)param_2) * 0x5bd1e995;
    uVar1 = uVar1 ^ uVar2 >> 0x16;
  }
  uVar1 = (uVar1 * 0x5bd1e995 ^ (uVar2 ^ uVar1 * 0x5bd1e995 >> 0x11) * 0x5bd1e995 >> 0x13) *
          0x5bd1e995;
LAB_0062e6d0:
  return *(long *)(param_1 + 0x20) +
         (ulong)(uVar1 & (-1 << (ulong)(*(byte *)(param_1 + 6) & 0x1f) ^ 0xffffffffU)) * 0x20;
}


// ===== 0062e6ec  FUN_0062e6ec =====

void FUN_0062e6ec(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(undefined **)(param_2 + 0x20) == PTR_luaH_dummynode_0067dbd8) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1 << (ulong)(*(byte *)(param_2 + 6) & 0x1f);
  }
  uVar1 = FUN_0062e75c(param_2,param_3,0);
  FUN_0062e818(param_1,param_2,uVar1,iVar2);
  return;
}


// ===== 0062e75c  FUN_0062e75c =====

int FUN_0062e75c(long param_1,int param_2,double *param_3)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  if (*(undefined **)(param_1 + 0x20) == PTR_luaH_dummynode_0067dbd8) {
    bVar1 = param_2 < *(int *)(param_1 + 8);
  }
  else {
    bVar1 = true;
  }
  if ((param_3 == (double *)0x0) || (*(int *)((long)param_3 + 0xc) != 3)) {
    iVar3 = -1;
  }
  else {
    iVar3 = (int)*param_3;
    if (*param_3 != (double)iVar3) {
      iVar3 = -1;
    }
  }
  do {
    do {
      iVar4 = param_2;
      param_2 = iVar4 + 1;
    } while (iVar3 + -1 == iVar4);
  } while ((bVar1) && (lVar2 = FUN_0062f140(param_1,param_2), *(int *)(lVar2 + 0xc) != 0));
  return iVar4;
}


// ===== 0062e818  FUN_0062e818 =====

void FUN_0062e818(undefined8 param_1,long param_2,uint param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  double *pdVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  double *pdVar12;
  long lVar13;
  double dVar14;
  double local_78;
  undefined4 local_70;
  uint local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((0x4000000 < (int)param_3) || (0x4000000 < param_4)) {
                    /* WARNING: Subroutine does not return */
    FUN_006214f8(param_1,"table overflow");
  }
  iVar10 = *(int *)(param_2 + 8);
  bVar1 = *(byte *)(param_2 + 6);
  puVar9 = *(undefined **)(param_2 + 0x20);
  if (iVar10 < (int)param_3) {
    FUN_0062ea14(param_1,param_2,(ulong)param_3);
  }
  FUN_0062eaa0(param_1,param_2,param_4);
  if ((int)param_3 < iVar10) {
    lVar11 = (long)(int)param_3;
    *(uint *)(param_2 + 8) = param_3;
    do {
      lVar13 = *(long *)(param_2 + 0x18);
      iVar5 = (int)lVar11;
      if (*(int *)(lVar13 + lVar11 * 0x10 + 0xc) != 0) {
        local_78 = (double)(iVar5 + 1);
        local_6c = 3;
        puVar6 = (undefined8 *)FUN_0062eb84(param_1,param_2,&local_78);
        puVar3 = (undefined8 *)(lVar13 + lVar11 * 0x10);
        uVar7 = *puVar3;
        puVar6[1] = puVar3[1];
        *puVar6 = uVar7;
      }
      lVar11 = lVar11 + 1;
    } while (iVar5 + 1 != iVar10);
    if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00628ac4(param_1);
    }
    uVar7 = FUN_00629130(param_1,*(undefined8 *)(param_2 + 0x18),(long)iVar10 << 4,
                         (ulong)param_3 << 4,*(undefined1 *)(param_2 + 2));
    *(undefined8 *)(param_2 + 0x18) = uVar7;
  }
  uVar2 = 1 << (ulong)(bVar1 & 0x1f);
  if (bVar1 != 0x1f) {
    iVar10 = uVar2 + 1;
    pdVar12 = (double *)(puVar9 + (ulong)(uVar2 - 1) * 0x20 + 0x10);
    do {
      if (*(int *)((long)pdVar12 + -4) != 0) {
        local_78 = *pdVar12;
        local_70 = *(undefined4 *)(pdVar12 + 1);
        local_6c = *(uint *)((long)pdVar12 + 0xc) & 0xf;
        pdVar8 = (double *)FUN_0062edfc(param_1,param_2,&local_78);
        dVar14 = pdVar12[-2];
        pdVar8[1] = pdVar12[-1];
        *pdVar8 = dVar14;
      }
      iVar10 = iVar10 + -1;
      pdVar12 = pdVar12 + -4;
    } while (1 < iVar10);
  }
  if (puVar9 != PTR_luaH_dummynode_0067dbd8) {
    FUN_00628eb0(param_1,puVar9,-(ulong)(uVar2 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar2 << 5,
                 *(undefined1 *)(param_2 + 2));
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0062ea14  FUN_0062ea14 =====

void FUN_0062ea14(undefined8 param_1,long param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  
  if (0x4000000 < (int)param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_006214f8(param_1,"table overflow");
  }
  if (-1 < (int)param_3) {
    lVar2 = FUN_00629130(param_1,*(undefined8 *)(param_2 + 0x18),(long)*(int *)(param_2 + 8) << 4,
                         (ulong)param_3 << 4,*(undefined1 *)(param_2 + 2));
    iVar1 = *(int *)(param_2 + 8);
    *(long *)(param_2 + 0x18) = lVar2;
    if (iVar1 < (int)param_3) {
      lVar3 = (ulong)param_3 - (long)iVar1;
      puVar4 = (undefined4 *)(lVar2 + (long)iVar1 * 0x10 + 0xc);
      do {
        lVar3 = lVar3 + -1;
        *puVar4 = 0;
        puVar4 = puVar4 + 4;
      } while (lVar3 != 0);
    }
    *(uint *)(param_2 + 8) = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00628ac4();
}


// ===== 0062eaa0  FUN_0062eaa0 =====

void FUN_0062eaa0(undefined8 param_1,long param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  
  if (param_3 == 0) {
    uVar7 = 0;
    uVar6 = 0;
    *(undefined **)(param_2 + 0x20) = PTR_luaH_dummynode_0067dbd8;
  }
  else {
    uVar7 = param_3 - 1;
    iVar4 = -1;
    uVar6 = uVar7;
    if (0xff < uVar7) {
      do {
        uVar7 = uVar6 >> 8;
        uVar2 = uVar6 >> 0x10;
        iVar4 = iVar4 + 8;
        uVar6 = uVar7;
      } while (uVar2 != 0);
    }
    if (0x19 < (int)(iVar4 + (uint)(byte)(&DAT_00285818)[uVar7])) {
                    /* WARNING: Subroutine does not return */
      FUN_006214f8(param_1,"table overflow");
    }
    uVar7 = iVar4 + (uint)(byte)(&DAT_00285818)[uVar7] + 1;
    uVar6 = 1 << (ulong)(uVar7 & 0x1f);
    uVar8 = (ulong)uVar6;
    uVar3 = FUN_00628ad8(param_1,uVar8 << 5,*(undefined1 *)(param_2 + 2));
    lVar5 = 0;
    *(undefined8 *)(param_2 + 0x20) = uVar3;
    do {
      uVar8 = uVar8 - 1;
      lVar1 = *(long *)(param_2 + 0x20) + lVar5;
      lVar5 = lVar5 + 0x20;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0xc) = 0;
    } while (uVar8 != 0);
  }
  *(char *)(param_2 + 6) = (char)uVar7;
  *(byte *)(param_2 + 7) = ~(byte)(-1 << (ulong)(uVar7 & 0x1f));
  *(uint *)(param_2 + 0xc) = uVar6;
  return;
}


// ===== 0062eb84  FUN_0062eb84 =====

undefined8 * FUN_0062eb84(long param_1,long param_2,double *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint *puVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_78;
  undefined4 local_70;
  uint uStack_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*(int *)((long)param_3 + 0xc) == 3) && (*param_3 == (double)(*(int *)(param_2 + 8) + 1))) {
LAB_0062ebe0:
    FUN_0062ee3c(param_1,param_2,param_3);
    if (*(long *)(lVar2 + 0x28) == local_68) {
      puVar3 = (undefined8 *)FUN_0062edfc(param_1,param_2,param_3);
      return puVar3;
    }
  }
  else {
    puVar3 = (undefined8 *)FUN_0062e5a8(param_2,param_3);
    if ((puVar3 == (undefined8 *)PTR_luaH_dummynode_0067dbd8) ||
       (puVar8 = puVar3, *(int *)((long)puVar3 + 0xc) != 0)) {
      uVar10 = *(uint *)(param_2 + 0xc);
      do {
        if ((int)uVar10 < 1) goto LAB_0062ebe0;
        uVar10 = uVar10 - 1;
        *(uint *)(param_2 + 0xc) = uVar10;
        puVar8 = (undefined8 *)(*(long *)(param_2 + 0x20) + (ulong)uVar10 * 0x20);
        puVar9 = (uint *)((long)puVar8 + 0x1c);
      } while ((*(byte *)puVar9 & 0xf) != 0);
      local_70 = *(undefined4 *)(puVar3 + 3);
      uVar1 = *(uint *)((long)puVar3 + 0x1c);
      local_78 = puVar3[2];
      uVar10 = uVar1 & 0xf;
      uStack_6c = uVar10;
      puVar4 = (undefined8 *)FUN_0062e5a8(param_2,&local_78);
      if (puVar4 == puVar3) {
        if (0xf < uVar1) {
          *puVar9 = (uint)((ulong)((long)puVar3 +
                                  ((ulong)(uint)((int)uVar1 >> 4) * 0x20 - (long)puVar8)) >> 1) &
                    0xfffffff0;
          uVar10 = *(uint *)((long)puVar3 + 0x1c) & 0xf;
        }
        *(uint *)((long)puVar3 + 0x1c) =
             uVar10 | (uint)((ulong)((long)puVar8 - (long)puVar3) >> 1) & 0xfffffff0;
      }
      else {
        do {
          puVar5 = puVar4;
          puVar4 = puVar5 + ((long)((ulong)*(uint *)((long)puVar5 + 0x1c) << 0x20) >> 0x24) * 4;
        } while (puVar5 + ((long)((ulong)*(uint *)((long)puVar5 + 0x1c) << 0x20) >> 0x24) * 4 !=
                 puVar3);
        *(uint *)((long)puVar5 + 0x1c) =
             (uint)((ulong)((long)puVar8 - (long)puVar5) >> 1) & 0xfffffff0 |
             *(uint *)((long)puVar5 + 0x1c) & 0xf;
        uVar12 = *puVar3;
        uVar11 = puVar3[3];
        uVar7 = puVar3[2];
        puVar8[1] = puVar3[1];
        *puVar8 = uVar12;
        puVar8[3] = uVar11;
        puVar8[2] = uVar7;
        if (0xf < *(uint *)((long)puVar3 + 0x1c)) {
          *puVar9 = *puVar9 + ((uint)((ulong)((long)puVar3 - (long)puVar8) >> 1) & 0xfffffff0);
          *(uint *)((long)puVar3 + 0x1c) = *(uint *)((long)puVar3 + 0x1c) & 0xf;
        }
        *(undefined4 *)((long)puVar3 + 0xc) = 0;
        puVar8 = puVar3;
      }
    }
    puVar8[2] = *param_3;
    *(undefined4 *)(puVar8 + 3) = *(undefined4 *)(param_3 + 1);
    *(uint *)((long)puVar8 + 0x1c) =
         *(uint *)((long)puVar8 + 0x1c) & 0xfffffff0 | *(uint *)((long)param_3 + 0xc) & 0xf;
    if (((5 < *(int *)((long)param_3 + 0xc)) && ((*(byte *)(param_2 + 1) >> 2 & 1) != 0)) &&
       ((*(byte *)((long)*param_3 + 1) & 3) != 0)) {
      lVar6 = *(long *)(param_1 + 0x18);
      if (*(char *)(lVar6 + 0x21) == '\x02') {
        FUN_00624a78();
      }
      else {
        *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) & 0xfb;
        uVar7 = *(undefined8 *)(lVar6 + 0x30);
        *(long *)(lVar6 + 0x30) = param_2;
        *(undefined8 *)(param_2 + 0x28) = uVar7;
      }
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return puVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0062edfc  FUN_0062edfc =====

long FUN_0062edfc(undefined8 param_1,long param_2,double *param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  
  if (((*(int *)((long)param_3 + 0xc) == 3) && (iVar3 = (int)*param_3, *param_3 == (double)iVar3))
     && (uVar1 = iVar3 - 1, uVar1 < *(uint *)(param_2 + 8))) {
    return *(long *)(param_2 + 0x18) + (long)(int)uVar1 * 0x10;
  }
  lVar2 = FUN_0062eb84();
  return lVar2;
}


// ===== 0062ee3c  FUN_0062ee3c =====

void FUN_0062ee3c(undefined8 param_1,long param_2,double *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  int local_c0 [30];
  long local_48;
  
  lVar4 = tpidr_el0;
  lVar8 = 0;
  iVar7 = 0;
  iVar9 = 1;
  local_48 = *(long *)(lVar4 + 0x28);
  iVar15 = 1;
  iVar5 = *(int *)(param_2 + 8);
  local_c0[0x19] = 0;
  local_c0[0x1a] = 0;
  local_c0[0x18] = 0;
  local_c0[2] = 0;
  local_c0[3] = 0;
  local_c0[0] = 0;
  local_c0[1] = 0;
  local_c0[6] = 0;
  local_c0[7] = 0;
  local_c0[4] = 0;
  local_c0[5] = 0;
  local_c0[10] = 0;
  local_c0[0xb] = 0;
  local_c0[8] = 0;
  local_c0[9] = 0;
  local_c0[0xe] = 0;
  local_c0[0xf] = 0;
  local_c0[0xc] = 0;
  local_c0[0xd] = 0;
  local_c0[0x12] = 0;
  local_c0[0x13] = 0;
  local_c0[0x10] = 0;
  local_c0[0x11] = 0;
  local_c0[0x16] = 0;
  local_c0[0x17] = 0;
  local_c0[0x14] = 0;
  local_c0[0x15] = 0;
  do {
    iVar14 = iVar15;
    if ((iVar5 < iVar15) && (iVar14 = iVar5, iVar5 < iVar9)) break;
    if (iVar14 < iVar9) {
      iVar12 = 0;
    }
    else {
      iVar12 = 0;
      lVar10 = ((long)iVar14 - (long)iVar9) + 1;
      piVar11 = (int *)(*(long *)(param_2 + 0x18) + (long)iVar9 * 0x10 + -4);
      do {
        if (*piVar11 != 0) {
          iVar12 = iVar12 + 1;
        }
        lVar10 = lVar10 + -1;
        piVar11 = piVar11 + 4;
      } while (lVar10 != 0);
      iVar9 = iVar14 + 1;
    }
    iVar15 = iVar15 << 1;
    iVar7 = iVar12 + iVar7;
    local_c0[lVar8] = local_c0[lVar8] + iVar12;
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x1b);
  iVar9 = 0;
  iVar5 = 0;
  lVar8 = *(long *)(param_2 + 0x20);
  uVar17 = (ulong)(uint)~(-1 << (ulong)(*(byte *)(param_2 + 6) & 0x1f));
  do {
    lVar10 = lVar8 + uVar17 * 0x20;
    if (*(int *)(lVar10 + 0xc) != 0) {
      if ((*(uint *)(lVar10 + 0x1c) & 0xf) == 3) {
        iVar15 = (int)*(double *)(lVar10 + 0x10);
        uVar6 = iVar15 - 1;
        if (*(double *)(lVar10 + 0x10) != (double)iVar15) {
          uVar6 = 0xfffffffe;
        }
        if (uVar6 >> 0x1a == 0) {
          iVar15 = -1;
          uVar16 = uVar6;
          if (0xff < uVar6) {
            do {
              uVar6 = uVar16 >> 8;
              uVar13 = uVar16 >> 0x10;
              iVar15 = iVar15 + 8;
              uVar16 = uVar6;
            } while (uVar13 != 0);
          }
          *(int *)(((ulong)local_c0 | 4) +
                  (long)(int)(iVar15 + (uint)(byte)(&DAT_00285818)[uVar6]) * 4) =
               *(int *)(((ulong)local_c0 | 4) +
                       (long)(int)(iVar15 + (uint)(byte)(&DAT_00285818)[uVar6]) * 4) + 1;
          iVar15 = 1;
        }
        else {
          iVar15 = 0;
        }
        iVar5 = iVar15 + iVar5;
      }
      iVar9 = iVar9 + 1;
    }
    bVar1 = uVar17 != 0;
    uVar17 = uVar17 - 1;
  } while (bVar1);
  iVar5 = iVar5 + iVar7;
  if (*(int *)((long)param_3 + 0xc) == 3) {
    iVar15 = (int)*param_3;
    uVar6 = iVar15 - 1;
    if (*param_3 != (double)iVar15) {
      uVar6 = 0xfffffffe;
    }
    if (uVar6 >> 0x1a == 0) {
      iVar15 = -1;
      uVar16 = uVar6;
      if (0xff < uVar6) {
        do {
          uVar6 = uVar16 >> 8;
          uVar13 = uVar16 >> 0x10;
          iVar15 = iVar15 + 8;
          uVar16 = uVar6;
        } while (uVar13 != 0);
      }
      local_c0[(long)(int)(iVar15 + (uint)(byte)(&DAT_00285818)[uVar6]) + 1] =
           local_c0[(long)(int)(iVar15 + (uint)(byte)(&DAT_00285818)[uVar6]) + 1] + 1;
      iVar15 = 1;
    }
    else {
      iVar15 = 0;
    }
    iVar5 = iVar15 + iVar5;
  }
  if (iVar5 < 1) {
    iVar15 = 0;
    uVar6 = 0;
  }
  else {
    uVar16 = 0;
    iVar15 = 0;
    uVar13 = 1;
    piVar11 = local_c0;
    uVar18 = 0;
    iVar14 = 0;
    do {
      iVar3 = *piVar11;
      iVar12 = iVar3 + iVar14;
      iVar2 = iVar12;
      if (iVar3 < 1) {
        iVar2 = iVar14;
      }
      uVar6 = uVar13;
      if (iVar3 < 1 || iVar12 <= (int)uVar16) {
        uVar6 = uVar18;
        iVar12 = iVar15;
      }
      iVar15 = iVar12;
      if (iVar2 == iVar5) break;
      uVar16 = uVar13 & 0x7fffffff;
      uVar13 = uVar13 << 1;
      piVar11 = piVar11 + 1;
      uVar18 = uVar6;
      iVar14 = iVar2;
    } while ((int)uVar16 < iVar5);
  }
  iVar9 = ((iVar7 + iVar9) - iVar15) + 1;
  iVar5 = FUN_0062e75c(param_2,uVar6,param_3);
  iVar7 = iVar5 - uVar6;
  if (iVar7 != 0) {
    iVar9 = iVar9 - iVar7;
    uVar6 = FUN_0062e75c(param_2,iVar7 + iVar5,param_3);
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  FUN_0062e818(param_1,param_2,uVar6,iVar9);
  return;
}


// ===== 0062f140  FUN_0062f140 =====

undefined8 * FUN_0062f140(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  double dVar4;
  
  if (param_2 - 1U < *(uint *)(param_1 + 8)) {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x18) + (long)(int)(param_2 - 1U) * 0x10);
  }
  else {
    if (*(undefined **)(param_1 + 0x20) == PTR_luaH_dummynode_0067dbd8) {
      return &DAT_00285948;
    }
    dVar4 = (double)param_2;
    uVar2 = (uint)((ulong)dVar4 >> 0x20) & 0x7fffffff;
    uVar1 = (SUB84(dVar4,0) ^ uVar2 >> 0x12) * 0x5bd1e995;
    uVar2 = (uVar2 ^ uVar1 >> 0x16) * 0x5bd1e995;
    puVar3 = (undefined8 *)
             (*(undefined **)(param_1 + 0x20) +
             (ulong)((uVar2 ^ (uVar1 ^ uVar2 >> 0x11) * 0x5bd1e995 >> 0x13) * 0x5bd1e995 &
                    (-1 << (ulong)(*(byte *)(param_1 + 6) & 0x1f) ^ 0xffffffffU)) * 0x20);
    while( true ) {
      uVar1 = *(uint *)((long)puVar3 + 0x1c);
      if (((uVar1 & 0xf) == 3) && ((double)puVar3[2] == dVar4)) break;
      if (uVar1 < 0x10) {
        return &DAT_00285948;
      }
      puVar3 = puVar3 + ((long)((ulong)uVar1 << 0x20) >> 0x24) * 4;
    }
  }
  return puVar3;
}


// ===== 0062f204  FUN_0062f204 =====

undefined1 * FUN_0062f204(long param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  
  puVar4 = (undefined1 *)FUN_00628d60(param_1,0x30,*(undefined1 *)(param_1 + 4));
  lVar5 = *(long *)(param_1 + 0x18);
  uVar1 = *(undefined1 *)(param_1 + 4);
  *puVar4 = 7;
  bVar2 = *(byte *)(lVar5 + 0x20);
  puVar4[3] = 0xff;
  puVar4[2] = uVar1;
  *(undefined4 *)(puVar4 + 0x1c) = 0;
  *(undefined8 *)(puVar4 + 0xc) = 0;
  puVar4[1] = bVar2 & 3;
  *(undefined8 *)(puVar4 + 0x14) = 0;
  puVar3 = PTR_luaH_dummynode_0067dbd8;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined **)(puVar4 + 0x20) = puVar3;
  if (0 < param_2) {
    FUN_0062ea14(param_1,puVar4,param_2);
  }
  if (0 < param_3) {
    FUN_0062eaa0(param_1,puVar4,param_3);
  }
  return puVar4;
}


// ===== 0062f2b8  FUN_0062f2b8 =====

undefined8 * FUN_0062f2b8(uint param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)
           (param_2 + (ulong)(*(uint *)(param_3 + 0x10) & ~(-1 << (ulong)(param_1 & 0x1f))) * 0x20);
  while( true ) {
    uVar1 = *(uint *)((long)puVar2 + 0x1c);
    if ((((uVar1 & 0xf) == 6) && (puVar3 = puVar2, puVar2[2] == param_3)) ||
       (puVar3 = &DAT_00285948, uVar1 < 0x10)) break;
    puVar2 = puVar2 + ((long)((ulong)uVar1 << 0x20) >> 0x24) * 4;
  }
  return puVar3;
}


// ===== 0062f310  FUN_0062f310 =====

undefined8 * FUN_0062f310(uint param_1,long param_2,long param_3,int param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = ((uint)param_3 ^ (uint)param_3 >> 0x10) * -0x7a143595;
  uVar1 = (uVar1 ^ uVar1 >> 0xd) * -0x3d4d51cb;
  puVar2 = (undefined8 *)
           (param_2 +
           (ulong)((uVar1 ^ uVar1 >> 0x10) & (-1 << (ulong)(param_1 & 0x1f) ^ 0xffffffffU)) * 0x20);
  while( true ) {
    uVar1 = *(uint *)((long)puVar2 + 0x1c);
    if (((((uVar1 & 0xf) == 2) && (puVar2[2] == param_3)) &&
        (puVar3 = puVar2, *(int *)(puVar2 + 3) == param_4)) ||
       (puVar3 = &DAT_00285948, uVar1 < 0x10)) break;
    puVar2 = puVar2 + ((long)((ulong)uVar1 << 0x20) >> 0x24) * 4;
  }
  return puVar3;
}


// ===== 0062f390  FUN_0062f390 =====

undefined8 * FUN_0062f390(long param_1,double *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  iVar2 = *(int *)((long)param_2 + 0xc);
  if (iVar2 == 0) {
    puVar3 = &DAT_00285948;
  }
  else {
    if (iVar2 == 3) {
      if (*param_2 == (double)(int)*param_2) {
        puVar3 = (undefined8 *)FUN_0062f140();
        return puVar3;
      }
    }
    else if (iVar2 == 6) {
      puVar3 = (undefined8 *)
               (*(long *)(param_1 + 0x20) +
               (ulong)(*(uint *)((long)*param_2 + 0x10) &
                      ~(-1 << (ulong)(*(byte *)(param_1 + 6) & 0x1f))) * 0x20);
      while( true ) {
        uVar1 = *(uint *)((long)puVar3 + 0x1c);
        if (((uVar1 & 0xf) == 6) && ((double)puVar3[2] == *param_2)) break;
        if (uVar1 < 0x10) {
          return &DAT_00285948;
        }
        puVar3 = puVar3 + ((long)((ulong)uVar1 << 0x20) >> 0x24) * 4;
      }
      return puVar3;
    }
    puVar4 = (undefined8 *)FUN_0062e5a8(param_1,param_2);
    for (; (iVar2 = FUN_00629950(puVar4 + 2,param_2), puVar3 = puVar4, iVar2 == 0 &&
           (puVar3 = &DAT_00285948, 0xf < *(uint *)((long)puVar4 + 0x1c)));
        puVar4 = puVar4 + ((long)((ulong)*(uint *)((long)puVar4 + 0x1c) << 0x20) >> 0x24) * 4) {
    }
  }
  return puVar3;
}


// ===== 0062f4a4  FUN_0062f4a4 =====

void FUN_0062f4a4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0062f390(param_2,param_3);
  *(undefined1 *)(param_2 + 3) = 0;
  if (puVar1 != &DAT_00285948) {
    return;
  }
  FUN_0062f50c(param_1,param_2,param_3);
  return;
}


// ===== 0062f50c  FUN_0062f50c =====

void FUN_0062f50c(undefined8 param_1,undefined8 param_2,double *param_3)

{
  float fVar1;
  
  fVar1 = *(float *)((long)param_3 + 0xc);
  if (fVar1 == 4.2039e-45) {
    if (NAN(*param_3)) {
                    /* WARNING: Subroutine does not return */
      FUN_006214f8(param_1,"table index is NaN");
    }
  }
  else if (fVar1 == 7.00649e-45) {
    if (((NAN(*(float *)param_3)) || (NAN(*(float *)((long)param_3 + 4)))) ||
       (NAN(*(float *)(param_3 + 1)))) {
                    /* WARNING: Subroutine does not return */
      FUN_006214f8(param_1,"table index contains NaN");
    }
  }
  else if (fVar1 == 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_006214f8(param_1,"table index is nil");
  }
  FUN_0062eb84();
  return;
}


// ===== 0062f588  FUN_0062f588 =====

void FUN_0062f588(undefined8 param_1,long param_2,int param_3)

{
  long lVar1;
  undefined8 *puVar2;
  double local_48;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_3 - 1U < *(uint *)(param_2 + 8)) {
    puVar2 = (undefined8 *)(*(long *)(param_2 + 0x18) + (long)(int)(param_3 - 1U) * 0x10);
  }
  else {
    puVar2 = (undefined8 *)FUN_0062f140(param_2,param_3);
    if (puVar2 == &DAT_00285948) {
      local_48 = (double)param_3;
      local_3c = 3;
      puVar2 = (undefined8 *)FUN_0062eb84(param_1,param_2,&local_48);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar2);
}


// ===== 0062f634  FUN_0062f634 =====

undefined8 * FUN_0062f634(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long local_38;
  undefined4 local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined8 *)
           (*(long *)(param_2 + 0x20) +
           (ulong)(*(uint *)(param_3 + 0x10) & ~(-1 << (ulong)(*(byte *)(param_2 + 6) & 0x1f))) *
           0x20);
  while( true ) {
    uVar1 = *(uint *)((long)puVar3 + 0x1c);
    if (((uVar1 & 0xf) == 6) && (puVar3[2] == param_3)) break;
    if (uVar1 < 0x10) {
      *(undefined1 *)(param_2 + 3) = 0;
LAB_0062f6a4:
      local_2c = 6;
      local_38 = param_3;
      puVar3 = (undefined8 *)FUN_0062eb84(param_1,param_2,&local_38);
LAB_0062f6d4:
      if (*(long *)(lVar2 + 0x28) == local_28) {
        return puVar3;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar3 = puVar3 + ((long)((ulong)uVar1 << 0x20) >> 0x24) * 4;
  }
  *(undefined1 *)(param_2 + 3) = 0;
  if (puVar3 != &DAT_00285948) goto LAB_0062f6d4;
  goto LAB_0062f6a4;
}


// ===== 0062f6fc  FUN_0062f6fc =====

ulong FUN_0062f6fc(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 < 0) {
    uVar9 = (ulong)*(uint *)(param_1 + 8);
    uVar8 = (ulong)(uint)-iVar2;
  }
  else {
    uVar8 = (ulong)*(uint *)(param_1 + 8);
    uVar9 = uVar8;
    if ((int)*(uint *)(param_1 + 8) < 1) {
      return uVar8;
    }
  }
  lVar10 = *(long *)(param_1 + 0x18);
  iVar7 = (int)uVar9;
  if ((*(int *)(lVar10 + (long)iVar7 * 0x10 + -4) != 0) &&
     (*(undefined **)(param_1 + 0x20) == PTR_luaH_dummynode_0067dbd8)) {
    return uVar9;
  }
  uVar4 = (uint)uVar8;
  if ((int)uVar4 < iVar7) {
    lVar6 = lVar10 + uVar8 * 0x10;
    if ((*(int *)(lVar6 + -4) != 0) && (*(int *)(lVar10 + uVar8 * 0x10 + 0xc) == 0)) {
      return uVar8;
    }
    uVar5 = uVar4 - 1;
    if (*(int *)(lVar10 + (ulong)uVar5 * 0x10 + 0xc) != 0) goto LAB_0062f778;
    if ((uVar4 < 2) || (*(int *)(lVar6 + -0x14) == 0)) goto LAB_0062f7d0;
    if (0 < iVar2) goto LAB_0062f844;
    uVar4 = 1 - uVar4;
  }
  else {
LAB_0062f778:
    uVar5 = uVar4 + 1;
    if ((((int)uVar5 < iVar7) && (*(int *)(lVar10 + uVar8 * 0x10 + 0xc) != 0)) &&
       (*(int *)(lVar10 + (ulong)uVar5 * 0x10 + 0xc) == 0)) {
      if (0 < iVar2) goto LAB_0062f844;
      uVar4 = ~uVar4;
    }
    else {
LAB_0062f7d0:
      if (iVar7 < 1) {
        return uVar9;
      }
      if (*(int *)(lVar10 + uVar9 * 0x10 + -4) != 0) {
        return uVar9;
      }
      lVar6 = lVar10;
      if (iVar7 != 1) {
        do {
          iVar7 = (int)uVar9 >> 1;
          lVar3 = uVar9 << 0x20;
          uVar4 = (int)uVar9 - iVar7;
          uVar9 = (ulong)uVar4;
          lVar1 = 0;
          if (*(int *)(lVar6 + (long)iVar7 * 0x10 + 0xc) != 0) {
            lVar1 = lVar3 >> 0x21;
          }
          lVar6 = lVar6 + lVar1 * 0x10;
        } while (1 < uVar4);
      }
      uVar5 = (uint)((ulong)(lVar6 - lVar10) >> 4);
      if (*(int *)(lVar6 + 0xc) != 0) {
        uVar5 = uVar5 + 1;
      }
      if (0 < iVar2) goto LAB_0062f844;
      uVar4 = -uVar5;
    }
  }
  *(uint *)(param_1 + 0xc) = uVar4;
LAB_0062f844:
  return (ulong)uVar5;
}


// ===== 0062f850  FUN_0062f850 =====

undefined1 * FUN_0062f850(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  void *pvVar7;
  void *__src;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  ulong __n;
  
  puVar6 = (undefined1 *)FUN_00628d60(param_1,0x30,*(undefined1 *)(param_1 + 4));
  lVar9 = *(long *)(param_1 + 0x18);
  uVar2 = *(undefined1 *)(param_1 + 4);
  uVar3 = *(undefined1 *)(param_2 + 3);
  *puVar6 = 7;
  bVar4 = *(byte *)(lVar9 + 0x20);
  puVar6[2] = uVar2;
  puVar6[3] = uVar3;
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(puVar6 + 4) = 0;
  *(undefined4 *)(puVar6 + 0xc) = 0;
  puVar5 = PTR_luaH_dummynode_0067dbd8;
  puVar6[1] = bVar4 & 3;
  uVar1 = *(uint *)(param_2 + 8);
  *(undefined8 *)(puVar6 + 0x10) = uVar10;
  *(undefined8 *)(puVar6 + 0x18) = 0;
  *(undefined **)(puVar6 + 0x20) = puVar5;
  if (uVar1 != 0) {
    if ((int)uVar1 < 0) goto LAB_0062f97c;
    pvVar7 = (void *)FUN_00628ad8(param_1,(ulong)uVar1 << 4);
    *(void **)(puVar6 + 0x18) = pvVar7;
    if (*(int *)(puVar6 + 0xc) < 1) {
      if (*(int *)(param_2 + 0xc) < 0) {
        iVar8 = -*(int *)(param_2 + 0xc);
      }
      else {
        iVar8 = *(int *)(param_2 + 8);
      }
      *(int *)(puVar6 + 0xc) = -iVar8;
    }
    iVar8 = *(int *)(param_2 + 8);
    __src = *(void **)(param_2 + 0x18);
    *(int *)(puVar6 + 8) = iVar8;
    memcpy(pvVar7,__src,(long)iVar8 << 4);
  }
  if (*(undefined **)(param_2 + 0x20) != puVar5) {
    if (*(byte *)(param_2 + 6) == 0x1f) {
LAB_0062f97c:
                    /* WARNING: Subroutine does not return */
      FUN_00628ac4(param_1);
    }
    uVar1 = 1 << (ulong)(*(byte *)(param_2 + 6) & 0x1f);
    __n = -(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5;
    pvVar7 = (void *)FUN_00628ad8(param_1,__n,puVar6[2]);
    *(void **)(puVar6 + 0x20) = pvVar7;
    *(undefined2 *)(puVar6 + 6) = *(undefined2 *)(param_2 + 6);
    memcpy(pvVar7,*(void **)(param_2 + 0x20),__n);
    *(undefined4 *)(puVar6 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  }
  return puVar6;
}


// ===== 0062f984  FUN_0062f984 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062f984(long param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  uVar1 = *(uint *)(param_1 + 8);
  if (0 < (int)uVar1) {
    lVar6 = (ulong)uVar1 - 1;
    uVar5 = (ulong)(uVar1 + 3) & 0xfffffffc;
    puVar7 = (undefined4 *)(*(long *)(param_1 + 0x18) + 0x2c);
    lVar8 = _DAT_0024e340;
    lVar9 = _UNK_0024e348;
    lVar10 = _DAT_0024e100;
    lVar11 = _UNK_0024e108;
    do {
      auVar12._8_8_ = lVar6;
      auVar12._0_8_ = lVar6;
      auVar4._8_8_ = lVar11;
      auVar4._0_8_ = lVar10;
      auVar12 = NEON_cmhs(auVar12,auVar4,8);
      if ((auVar12 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        puVar7[-8] = 0;
      }
      if ((auVar12 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        puVar7[-4] = 0;
      }
      auVar2._8_8_ = lVar6;
      auVar2._0_8_ = lVar6;
      auVar3._8_8_ = lVar9;
      auVar3._0_8_ = lVar8;
      auVar12 = NEON_cmhs(auVar2,auVar3,8);
      if ((auVar12 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        *puVar7 = 0;
      }
      if ((auVar12 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        puVar7[4] = 0;
      }
      lVar8 = lVar8 + 4;
      lVar9 = lVar9 + 4;
      lVar10 = lVar10 + 4;
      lVar11 = lVar11 + 4;
      uVar5 = uVar5 - 4;
      puVar7 = puVar7 + 0x10;
    } while (uVar5 != 0);
  }
  if (*(int *)(param_1 + 0xc) < 1) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(undefined **)(param_1 + 0x20) != PTR_luaH_dummynode_0067dbd8) {
    uVar1 = 1 << (ulong)(*(byte *)(param_1 + 6) & 0x1f);
    *(uint *)(param_1 + 0xc) = uVar1;
    if (*(byte *)(param_1 + 6) != 0x1f) {
      lVar8 = 0;
      if ((int)uVar1 < 2) {
        uVar1 = 1;
      }
      do {
        lVar9 = *(long *)(param_1 + 0x20) + lVar8;
        lVar8 = lVar8 + 0x20;
        *(undefined4 *)(lVar9 + 0xc) = 0;
        *(undefined4 *)(lVar9 + 0x1c) = 0;
      } while ((ulong)uVar1 << 5 != lVar8);
    }
  }
  *(undefined1 *)(param_1 + 3) = 0xff;
  return;
}


// ===== 0062fa9c  luaopen_table =====

/* luaopen_table(lua_State*) */

undefined8 luaopen_table(lua_State *param_1)

{
  luaL_register(param_1,"table",(luaL_Reg *)&PTR_s_concat_0067ac48);
  lua_pushcclosurek(param_1,FUN_0062fb04,"unpack",0,(_func_int_lua_State_ptr_int *)0x0);
  lua_setfield(param_1,-0x2712,"unpack");
  return 1;
}


// ===== 0062fb04  FUN_0062fb04 =====

uint FUN_0062fb04(lua_State *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  
  uVar4 = 1;
  luaL_checktype(param_1,1,7);
  plVar9 = *(long **)(param_1 + 8);
  plVar7 = *(long **)(param_1 + 0x10);
  lVar12 = *plVar7;
  if (((plVar7 + 2 < plVar9) && (plVar7 + 2 != &DAT_00285948)) &&
     (0 < *(int *)((long)plVar7 + 0x1c))) {
    uVar4 = luaL_checkinteger(param_1,2);
    plVar9 = *(long **)(param_1 + 8);
    plVar7 = *(long **)(param_1 + 0x10);
  }
  if (((plVar7 + 4 < plVar9) && (plVar7 + 4 != &DAT_00285948)) &&
     (0 < *(int *)((long)plVar7 + 0x2c))) {
    uVar5 = luaL_checkinteger(param_1,3);
  }
  else {
    uVar5 = lua_objlen(param_1,1);
  }
  uVar11 = (ulong)uVar5;
  uVar2 = uVar5 - uVar4;
  if ((int)uVar4 <= (int)uVar5) {
    if (uVar2 < 0x7fffffff) {
      uVar1 = uVar2 + 1;
      iVar6 = lua_checkstack(param_1,uVar1);
      if (iVar6 != 0) {
        if ((uVar4 == 1) && ((int)uVar2 < *(int *)(lVar12 + 8))) {
          lVar8 = 0;
          do {
            lVar10 = *(long *)(param_1 + 8);
            uVar11 = uVar11 - 1;
            puVar3 = (undefined8 *)(*(long *)(lVar12 + 0x18) + lVar8);
            uVar13 = *puVar3;
            ((undefined8 *)(lVar10 + lVar8))[1] = puVar3[1];
            *(undefined8 *)(lVar10 + lVar8) = uVar13;
            lVar8 = lVar8 + 0x10;
          } while (uVar11 != 0);
          *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + (ulong)uVar1 * 0x10;
          return uVar1;
        }
        if ((int)uVar4 < (int)uVar5) {
          do {
            lua_rawgeti(param_1,1,uVar4);
            uVar4 = uVar4 + 1;
          } while (uVar5 != uVar4);
        }
        lua_rawgeti(param_1,1,uVar5);
        return uVar1;
      }
    }
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"too many results to unpack");
  }
  return 0;
}


// ===== 0062fc84  FUN_0062fc84 =====

undefined8 FUN_0062fc84(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong local_280;
  undefined1 *local_278;
  long *plStack_270;
  lua_State *local_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [512];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pcVar4 = (char *)luaL_optlstring(param_1,2,"",&local_280);
  iVar2 = 1;
  luaL_checktype(param_1,1,7);
  puVar6 = *(undefined8 **)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  if ((((undefined8 *)(lVar5 + 0x20) < puVar6) && ((undefined8 *)(lVar5 + 0x20) != &DAT_00285948))
     && (0 < *(int *)(lVar5 + 0x2c))) {
    iVar2 = luaL_checkinteger(param_1,3);
    puVar6 = *(undefined8 **)(param_1 + 8);
    lVar5 = *(long *)(param_1 + 0x10);
  }
  if ((((undefined8 *)(lVar5 + 0x30) < puVar6) && ((undefined8 *)(lVar5 + 0x30) != &DAT_00285948))
     && (0 < *(int *)(lVar5 + 0x3c))) {
    iVar3 = luaL_checkinteger(param_1,4);
  }
  else {
    iVar3 = lua_objlen(param_1,1);
  }
  local_278 = auStack_258;
  plStack_270 = &local_58;
  uVar7 = **(undefined8 **)(param_1 + 0x10);
  uStack_260 = 0;
  local_268 = param_1;
  if (iVar2 < iVar3) {
    do {
      FUN_0063114c(param_1,&local_278,iVar2,uVar7);
      if (local_280 != 0) {
        luaL_addlstring((luaL_Strbuf *)&local_278,pcVar4,local_280);
      }
      iVar2 = iVar2 + 1;
    } while (iVar3 != iVar2);
  }
  else if (iVar2 != iVar3) goto LAB_0062fdd0;
  FUN_0063114c(param_1,&local_278,iVar3,uVar7);
LAB_0062fdd0:
  luaL_pushresult((luaL_Strbuf *)&local_278);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


// ===== 0062fe0c  FUN_0062fe0c =====

undefined4 FUN_0062fe0c(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  eh_frame_hdr *peVar4;
  
  luaL_checktype(param_1,1,7);
  luaL_checktype(param_1,2,8);
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)(lVar2 + 0xc) = 0;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  while( true ) {
    iVar1 = lua_next(param_1,1);
    if (iVar1 == 0) {
      return 0;
    }
    lua_pushvalue(param_1,2);
    if (((byte)param_1[1] >> 2 & 1) != 0) {
      param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
      *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
    }
    puVar3 = *(undefined8 **)(param_1 + 8);
    puVar3[1] = puVar3[-5];
    *puVar3 = puVar3[-6];
    lVar2 = *(long *)(param_1 + 8);
    *(undefined8 **)(param_1 + 8) = (undefined8 *)(lVar2 + 0x10);
    if (((byte)param_1[1] >> 2 & 1) != 0) {
      param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
      *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
    }
    *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar2 + -0x18);
    *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar2 + -0x20);
    lVar2 = *(long *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar2 + 0x10;
    FUN_00622574(param_1,lVar2 + -0x20,1,0);
    peVar4 = *(eh_frame_hdr **)(param_1 + 8);
    if (peVar4 == &eh_frame_hdr_00285958) break;
    if (peVar4[-1] != (eh_frame_hdr)0x0) {
      return 1;
    }
    *(eh_frame_hdr **)(param_1 + 8) = peVar4 + -8;
  }
  return 1;
}


// ===== 0062ff38  FUN_0062ff38 =====

undefined4 FUN_0062ff38(lua_State *param_1)

{
  int iVar1;
  double *pdVar2;
  undefined8 *puVar3;
  int iVar4;
  
  luaL_checktype(param_1,1,7);
  luaL_checktype(param_1,2,8);
  iVar1 = lua_objlen(param_1,1);
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      lua_pushvalue(param_1,2);
      pdVar2 = *(double **)(param_1 + 8);
      *(undefined4 *)((long)pdVar2 + 0xc) = 3;
      *pdVar2 = (double)(iVar4 + 1);
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
      lua_rawgeti(param_1,1,iVar4 + 1);
      FUN_00622574(param_1,*(long *)(param_1 + 8) + -0x30,1,0);
      puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + -0x10);
      if (puVar3 == &DAT_00285948) {
        return 1;
      }
      if (*(int *)(*(long *)(param_1 + 8) + -4) != 0) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      *(undefined8 **)(param_1 + 8) = puVar3;
    } while (iVar1 != iVar4);
  }
  return 0;
}


// ===== 00630030  FUN_00630030 =====

undefined8 FUN_00630030(lua_State *param_1)

{
  int iVar1;
  double *pdVar2;
  
  luaL_checktype(param_1,1,7);
  iVar1 = lua_objlen(param_1,1);
  pdVar2 = *(double **)(param_1 + 8);
  *(undefined4 *)((long)pdVar2 + 0xc) = 3;
  *pdVar2 = (double)iVar1;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 00630088  FUN_00630088 =====

undefined8 FUN_00630088(lua_State *param_1)

{
  uint uVar1;
  long lVar2;
  double *pdVar3;
  ulong uVar4;
  int *piVar5;
  double dVar6;
  double dVar7;
  
  luaL_checktype(param_1,1,7);
  lVar2 = **(long **)(param_1 + 0x10);
  if ((int)*(uint *)(lVar2 + 8) < 1) {
    dVar6 = 0.0;
  }
  else {
    dVar6 = 0.0;
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar2 + 0x18) + 0xc);
    do {
      uVar4 = uVar4 + 1;
      if (*piVar5 != 0) {
        dVar6 = (double)(int)uVar4;
      }
      piVar5 = piVar5 + 4;
    } while (*(uint *)(lVar2 + 8) != uVar4);
  }
  if (*(byte *)(lVar2 + 6) != 0x1f) {
    uVar1 = 1 << (ulong)(*(byte *)(lVar2 + 6) & 0x1f);
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    uVar4 = (ulong)uVar1;
    pdVar3 = (double *)(*(long *)(lVar2 + 0x20) + 0x10);
    dVar7 = dVar6;
    do {
      dVar6 = dVar7;
      if (((*(int *)((long)pdVar3 + -4) != 0) && ((*(uint *)((long)pdVar3 + 0xc) & 0xf) == 3)) &&
         (dVar6 = *pdVar3, dVar6 == dVar7 || dVar6 < dVar7 != (NAN(dVar6) || NAN(dVar7)))) {
        dVar6 = dVar7;
      }
      uVar4 = uVar4 - 1;
      pdVar3 = pdVar3 + 4;
      dVar7 = dVar6;
    } while (uVar4 != 0);
  }
  pdVar3 = *(double **)(param_1 + 8);
  *pdVar3 = dVar6;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)pdVar3 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return 1;
}


// ===== 0063016c  FUN_0063016c =====

undefined8 FUN_0063016c(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  
  luaL_checktype(param_1,1,7);
  iVar1 = lua_objlen(param_1,1);
  iVar2 = (int)((ulong)(*(long *)(param_1 + 8) - *(long *)(param_1 + 0x10)) >> 4);
  if (iVar2 == 3) {
    iVar2 = luaL_checkinteger(param_1,2);
    if ((0 < iVar2) && (iVar2 <= iVar1)) {
      FUN_006309d4(param_1,1,iVar2,iVar1,iVar2 + 1);
    }
  }
  else {
    if (iVar2 != 2) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL(param_1,"wrong number of arguments to \'insert\'");
    }
    iVar2 = iVar1 + 1;
  }
  lua_rawseti(param_1,1,iVar2);
  return 0;
}


// ===== 0063022c  FUN_0063022c =====

undefined4 FUN_0063022c(lua_State *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  
  luaL_checktype(param_1,1,7);
  iVar2 = lua_objlen(param_1,1);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  iVar3 = iVar2;
  if (((puVar1 < *(undefined8 **)(param_1 + 8)) && (puVar1 != &DAT_00285948)) &&
     (0 < *(int *)(*(long *)(param_1 + 0x10) + 0x1c))) {
    iVar3 = luaL_checkinteger(param_1,2);
  }
  uVar5 = 0;
  if ((0 < iVar3) && (iVar3 <= iVar2)) {
    uVar5 = 1;
    lua_rawgeti(param_1,1,iVar3);
    FUN_006309d4(param_1,1,iVar3 + 1,iVar2,iVar3);
    lVar4 = *(long *)(param_1 + 8);
    *(undefined4 *)(lVar4 + 0xc) = 0;
    *(long *)(param_1 + 8) = lVar4 + 0x10;
    lua_rawseti(param_1,1,iVar2);
  }
  return uVar5;
}


// ===== 00630318  FUN_00630318 =====

undefined8 FUN_00630318(lua_State *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  luaL_checktype(param_1,1,7);
  lVar5 = **(long **)(param_1 + 0x10);
  iVar1 = FUN_0062f6fc(lVar5);
  if (*(char *)(lVar5 + 4) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00621894(param_1);
  }
  puVar3 = *(undefined8 **)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  pcVar2 = FUN_00643304;
  if ((((undefined8 *)(lVar4 + 0x10) < puVar3) && ((undefined8 *)(lVar4 + 0x10) != &DAT_00285948))
     && (0 < *(int *)(lVar4 + 0x1c))) {
    luaL_checktype(param_1,2,8);
    puVar3 = *(undefined8 **)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
    pcVar2 = FUN_00630b98;
  }
  for (; puVar3 < (undefined8 *)(lVar4 + 0x20); puVar3 = puVar3 + 2) {
    *(undefined4 *)((long)puVar3 + 0xc) = 0;
  }
  *(undefined8 **)(param_1 + 8) = (undefined8 *)(lVar4 + 0x20);
  if (0 < iVar1) {
    FUN_00630c20(param_1,lVar5,0,iVar1 + -1,iVar1,pcVar2);
  }
  return 0;
}


// ===== 00630400  FUN_00630400 =====

undefined8 FUN_00630400(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  double *pdVar6;
  ulong uVar7;
  long lVar8;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  iVar4 = (int)((ulong)(lVar1 - lVar2) >> 4);
  lua_createtable(param_1,iVar4,1);
  lVar8 = *(long *)(*(long *)(param_1 + 8) + -0x10);
  if (0 < iVar4) {
    uVar7 = 0;
    do {
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + uVar7);
      puVar3 = (undefined8 *)(*(long *)(lVar8 + 0x18) + uVar7);
      puVar3[1] = ((undefined8 *)(*(long *)(param_1 + 0x10) + uVar7))[1];
      *puVar3 = uVar5;
      uVar7 = uVar7 + 0x10;
    } while ((lVar1 - lVar2 & 0xffffffff0U) != uVar7);
  }
  uVar5 = FUN_0062b178(param_1,&DAT_00242686,1);
  pdVar6 = (double *)FUN_0062f634(param_1,lVar8,uVar5);
  *pdVar6 = (double)iVar4;
  *(undefined4 *)((long)pdVar6 + 0xc) = 3;
  return 1;
}


// ===== 006304ac  FUN_006304ac =====

undefined8 FUN_006304ac(lua_State *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  
  uVar7 = 1;
  luaL_checktype(param_1,1,7);
  iVar3 = luaL_checkinteger(param_1,2);
  iVar4 = luaL_checkinteger(param_1,3);
  iVar5 = luaL_checkinteger(param_1,4);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x40);
  if (((puVar1 < *(undefined8 **)(param_1 + 8)) && (puVar1 != &DAT_00285948)) &&
     (uVar7 = 5, *(int *)(*(long *)(param_1 + 0x10) + 0x4c) < 1)) {
    uVar7 = 1;
  }
  luaL_checktype(param_1,uVar7,7);
  if (iVar3 <= iVar4) {
    if ((iVar3 < 1) && (iVar3 + 0x7fffffff <= iVar4)) {
                    /* WARNING: Subroutine does not return */
      luaL_argerrorL(param_1,3,"too many elements to move");
    }
    if ((int)(iVar4 - iVar3 ^ 0x7fffffffU) < iVar5) {
                    /* WARNING: Subroutine does not return */
      luaL_argerrorL(param_1,4,"destination wrap around");
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x10) + (ulong)uVar7 * 0x10 + -0x10);
    if (*(char *)(lVar6 + 4) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00621894(param_1);
    }
    if (((0 < iVar5) && (iVar2 = *(int *)(lVar6 + 8), iVar5 + -1 <= iVar2)) &&
       (iVar2 < iVar5 + (iVar4 - iVar3))) {
      FUN_0062e6ec(param_1);
    }
    FUN_006309d4(param_1,uVar7,iVar3,iVar4,iVar5);
  }
  lua_pushvalue(param_1,uVar7);
  return 1;
}


// ===== 00630618  FUN_00630618 =====

undefined8 FUN_00630618(lua_State *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar4 = luaL_checkinteger(param_1,1);
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    luaL_argerrorL(param_1,1,"size out of range");
  }
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  if ((puVar1 < *(undefined8 **)(param_1 + 8)) && (puVar1 != &DAT_00285948)) {
    iVar3 = *(int *)(*(long *)(param_1 + 0x10) + 0x1c);
    lua_createtable(param_1,uVar4,0);
    if ((0 < iVar3) && (uVar4 != 0)) {
      lVar2 = *(long *)(param_1 + 0x10);
      lVar6 = 0;
      lVar5 = *(long *)(*(long *)(param_1 + 8) + -0x10);
      do {
        uVar7 = *(undefined8 *)(lVar2 + 0x10);
        puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x18) + lVar6);
        puVar1[1] = *(undefined8 *)(lVar2 + 0x18);
        *puVar1 = uVar7;
        lVar6 = lVar6 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar6);
    }
  }
  else {
    lua_createtable(param_1,uVar4,0);
  }
  return 1;
}


// ===== 006306e0  FUN_006306e0 =====

undefined8 FUN_006306e0(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  double *pdVar5;
  undefined8 uVar6;
  
  iVar1 = 1;
  luaL_checktype(param_1,1,7);
  luaL_checkany(param_1,2);
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (((puVar4 + 4 < *(undefined8 **)(param_1 + 8)) && (puVar4 + 4 != &DAT_00285948)) &&
     (0 < *(int *)((long)puVar4 + 0x2c))) {
    iVar1 = luaL_checkinteger(param_1,3);
    if (iVar1 < 1) {
                    /* WARNING: Subroutine does not return */
      luaL_argerrorL(param_1,3,"index out of range");
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
  }
  uVar6 = *puVar4;
  do {
    lVar3 = FUN_0062f140(uVar6,iVar1);
    if (*(int *)(lVar3 + 0xc) == 0) {
      lVar3 = *(long *)(param_1 + 8);
      *(undefined4 *)(lVar3 + 0xc) = 0;
LAB_006307c0:
      *(long *)(param_1 + 8) = lVar3 + 0x10;
      return 1;
    }
    if ((*(int *)(*(long *)(param_1 + 0x10) + 0x1c) == *(int *)(lVar3 + 0xc)) &&
       (iVar2 = FUN_00643514(param_1,*(long *)(param_1 + 0x10) + 0x10,lVar3), iVar2 != 0)) {
      pdVar5 = *(double **)(param_1 + 8);
      *(undefined4 *)((long)pdVar5 + 0xc) = 3;
      *pdVar5 = (double)iVar1;
      lVar3 = *(long *)(param_1 + 8);
      goto LAB_006307c0;
    }
    iVar1 = iVar1 + 1;
  } while( true );
}


// ===== 006307f0  FUN_006307f0 =====

undefined8 FUN_006307f0(lua_State *param_1)

{
  luaL_checktype(param_1,1,7);
  if (*(char *)(**(long **)(param_1 + 0x10) + 4) == '\0') {
    FUN_0062f984();
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00621894(param_1);
}


// ===== 00630838  FUN_00630838 =====

undefined8 FUN_00630838(lua_State *param_1)

{
  long *plVar1;
  int iVar2;
  char *pcVar3;
  
  luaL_checktype(param_1,1,7);
  plVar1 = *(long **)(param_1 + 0x10);
  if (*(long **)(param_1 + 8) <= *(long **)(param_1 + 0x10)) {
    plVar1 = &DAT_00285948;
  }
  if (*(char *)(*plVar1 + 4) == '\0') {
    iVar2 = luaL_getmetafield(param_1,1,"__metatable");
    if (iVar2 == 0) {
      plVar1 = *(long **)(param_1 + 0x10);
      if (*(long **)(param_1 + 8) <= *(long **)(param_1 + 0x10)) {
        plVar1 = &DAT_00285948;
      }
      *(undefined1 *)(*plVar1 + 4) = 1;
      lua_pushvalue(param_1,1);
      return 1;
    }
    pcVar3 = "table has a protected metatable";
  }
  else {
    pcVar3 = "table is already frozen";
  }
                    /* WARNING: Subroutine does not return */
  luaL_argerrorL(param_1,1,pcVar3);
}


// ===== 006308e8  FUN_006308e8 =====

undefined8 FUN_006308e8(lua_State *param_1)

{
  uint *puVar1;
  uint *puVar2;
  long lVar3;
  
  luaL_checktype(param_1,1,7);
  puVar2 = *(uint **)(param_1 + 8);
  puVar1 = *(uint **)(param_1 + 0x10);
  if (puVar2 <= *(uint **)(param_1 + 0x10)) {
    puVar1 = (uint *)&DAT_00285948;
  }
  lVar3 = *(long *)puVar1;
  puVar2[3] = 1;
  *puVar2 = (uint)(*(char *)(lVar3 + 4) != '\0');
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 00630950  FUN_00630950 =====

undefined8 FUN_00630950(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  luaL_checktype(param_1,1,7);
  iVar1 = luaL_getmetafield(param_1,1,"__metatable");
  if (iVar1 == 0) {
    uVar2 = FUN_0062f850(param_1,**(undefined8 **)(param_1 + 0x10));
    puVar3 = *(undefined8 **)(param_1 + 8);
    *puVar3 = uVar2;
    *(undefined4 *)((long)puVar3 + 0xc) = 7;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  luaL_argerrorL(param_1,1,"table has a protected metatable");
}


// ===== 006309d4  FUN_006309d4 =====

void FUN_006309d4(lua_State *param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar2 = (*(long **)(param_1 + 0x10))[(ulong)param_2 * 2 + -2];
  if (*(char *)(lVar2 + 4) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00621894(param_1);
  }
  lVar4 = **(long **)(param_1 + 0x10);
  uVar1 = param_4 - param_3;
  if ((((param_3 - 1U < *(uint *)(lVar4 + 8)) && (param_4 <= *(uint *)(lVar4 + 8))) &&
      (param_5 - 1U < *(uint *)(lVar2 + 8))) && (uVar1 + param_5 <= *(uint *)(lVar2 + 8))) {
    lVar6 = *(long *)(lVar4 + 0x18);
    lVar8 = *(long *)(lVar2 + 0x18);
    if ((((int)param_4 < param_5) || (param_5 <= param_3)) || ((param_2 != 1 && (lVar2 != lVar4))))
    {
      if (-1 < (int)uVar1) {
        uVar3 = (ulong)(uVar1 + 1);
        puVar5 = (undefined8 *)(lVar6 + (long)param_3 * 0x10 + -0x10);
        puVar7 = (undefined8 *)(lVar8 + (long)param_5 * 0x10 + -0x10);
        do {
          uVar9 = *puVar5;
          uVar3 = uVar3 - 1;
          puVar7[1] = puVar5[1];
          *puVar7 = uVar9;
          puVar5 = puVar5 + 2;
          puVar7 = puVar7 + 2;
        } while (uVar3 != 0);
      }
    }
    else if (-1 < (int)uVar1) {
      lVar4 = (ulong)uVar1 << 4;
      do {
        puVar5 = (undefined8 *)(lVar6 + (long)param_3 * 0x10 + -0x10 + lVar4);
        uVar9 = *puVar5;
        puVar7 = (undefined8 *)(lVar8 + (long)param_5 * 0x10 + -0x10 + lVar4);
        puVar7[1] = puVar5[1];
        *puVar7 = uVar9;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != -0x10);
    }
    if ((*(byte *)(lVar2 + 1) >> 2 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x18);
      *(byte *)(lVar2 + 1) = *(byte *)(lVar2 + 1) & 0xfb;
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar4 + 0x30);
      *(long *)(lVar4 + 0x30) = lVar2;
    }
  }
  else if ((((int)param_4 < param_5) || (param_5 - param_3 == 0 || param_5 < param_3)) ||
          (lVar2 != lVar4)) {
    if (-1 < (int)uVar1) {
      do {
        lua_rawgeti(param_1,1,param_3);
        lua_rawseti(param_1,param_2,param_5);
        param_3 = param_3 + 1;
        param_5 = param_5 + 1;
      } while (param_4 + 1 != param_3);
    }
  }
  else if (-1 < (int)uVar1) {
    do {
      lua_rawgeti(param_1,1,param_4);
      lua_rawseti(param_1,param_2,(param_5 - param_3) + param_4);
      param_4 = param_4 - 1;
    } while (param_3 - 1U != param_4);
  }
  return;
}


// ===== 00630b98  FUN_00630b98 =====

uint FUN_00630b98(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  puVar1[1] = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
  *puVar1 = uVar5;
  lVar3 = *(long *)(param_1 + 8);
  uVar5 = *param_2;
  *(undefined8 *)(lVar3 + 0x18) = param_2[1];
  *(undefined8 *)(lVar3 + 0x10) = uVar5;
  lVar3 = *(long *)(param_1 + 8);
  uVar5 = *param_3;
  *(undefined8 *)(lVar3 + 0x28) = param_3[1];
  *(undefined8 *)(lVar3 + 0x20) = uVar5;
  lVar3 = *(long *)(param_1 + 8);
  *(long *)(param_1 + 8) = lVar3 + 0x30;
  FUN_00622574(param_1,lVar3,1,0);
  uVar2 = *(uint *)(*(long *)(param_1 + 8) + -4);
  piVar4 = (int *)(*(long *)(param_1 + 8) + -0x10);
  *(int **)(param_1 + 8) = piVar4;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      uVar2 = (uint)(*piVar4 != 0);
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


// ===== 00630c20  FUN_00630c20 =====

void FUN_00630c20(lua_State *param_1,long param_2,uint param_3,uint param_4,uint param_5,
                 code *param_6)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  uint local_f4;
  ulong local_e8;
  
  lVar5 = tpidr_el0;
  lVar9 = *(long *)(lVar5 + 0x28);
  if ((int)param_3 < (int)param_4) {
    uVar17 = (ulong)param_4;
    uVar20 = (ulong)param_3;
    local_f4 = param_5;
    do {
      iVar14 = (int)uVar17;
      iVar19 = (int)uVar20;
      if (local_f4 == 0) {
        uVar2 = iVar14 - iVar19;
        if (0 < (int)uVar2) {
          uVar12 = (uVar2 + 1 >> 1) + 1;
          do {
            FUN_00630fb0(param_1,param_2,uVar20,uVar17,param_6,uVar12 - 2);
            uVar12 = uVar12 - 1;
          } while (1 < uVar12);
          lVar22 = (long)iVar19;
          lVar24 = (lVar22 + (ulong)uVar2) * 0x10;
          uVar17 = (ulong)uVar2 + 1;
          do {
            iVar14 = iVar14 + -1;
            lVar10 = *(long *)(param_2 + 0x18);
            uVar25 = *(undefined8 *)(lVar10 + lVar24);
            puVar3 = (undefined8 *)(lVar10 + lVar22 * 0x10);
            uVar27 = puVar3[1];
            uVar26 = *puVar3;
            puVar3 = (undefined8 *)(lVar10 + lVar22 * 0x10);
            puVar3[1] = ((undefined8 *)(lVar10 + lVar24))[1];
            *puVar3 = uVar25;
            ((undefined8 *)(lVar10 + lVar24))[1] = uVar27;
            *(undefined8 *)(lVar10 + lVar24) = uVar26;
            FUN_00630fb0(param_1,param_2,uVar20,iVar14,param_6,0);
            uVar17 = uVar17 - 1;
            lVar24 = lVar24 + -0x10;
          } while (1 < uVar17);
        }
        break;
      }
      iVar16 = *(int *)(param_2 + 8);
      iVar6 = (*param_6)(param_1,*(long *)(param_2 + 0x18) + (long)iVar14 * 0x10,
                         *(long *)(param_2 + 0x18) + (long)iVar19 * 0x10);
      if (*(int *)(param_2 + 8) != iVar16) {
LAB_00630f90:
        pcVar8 = "table modified during sorting";
        goto LAB_00630fa4;
      }
      lVar22 = (long)iVar14;
      lVar24 = (long)iVar19;
      if (iVar6 != 0) {
        lVar10 = *(long *)(param_2 + 0x18);
        puVar3 = (undefined8 *)(lVar10 + lVar24 * 0x10);
        uVar25 = *puVar3;
        puVar4 = (undefined8 *)(lVar10 + lVar22 * 0x10);
        uVar27 = puVar4[1];
        uVar26 = *puVar4;
        puVar4 = (undefined8 *)(lVar10 + lVar22 * 0x10);
        puVar4[1] = puVar3[1];
        *puVar4 = uVar25;
        puVar3 = (undefined8 *)(lVar10 + lVar24 * 0x10);
        puVar3[1] = uVar27;
        *puVar3 = uVar26;
      }
      iVar16 = iVar14 - iVar19;
      if (iVar16 == 1) break;
      iVar6 = iVar19 + (iVar16 >> 1);
      iVar1 = *(int *)(param_2 + 8);
      iVar7 = (*param_6)(param_1,*(long *)(param_2 + 0x18) + (long)iVar6 * 0x10,
                         *(long *)(param_2 + 0x18) + lVar24 * 0x10);
      if (*(int *)(param_2 + 8) != iVar1) goto LAB_00630f90;
      lVar13 = (long)iVar6;
      lVar10 = *(long *)(param_2 + 0x18);
      puVar3 = (undefined8 *)(lVar10 + lVar13 * 0x10);
      if (iVar7 == 0) {
        iVar6 = (*param_6)(param_1,lVar10 + lVar22 * 0x10);
        if (*(int *)(param_2 + 8) != iVar1) goto LAB_00630f90;
        if (iVar6 != 0) {
          lVar10 = *(long *)(param_2 + 0x18);
          puVar3 = (undefined8 *)(lVar10 + lVar22 * 0x10);
          uVar25 = *puVar3;
          puVar4 = (undefined8 *)(lVar10 + lVar13 * 0x10);
          uVar27 = puVar4[1];
          uVar26 = *puVar4;
          puVar4 = (undefined8 *)(lVar10 + lVar13 * 0x10);
          puVar4[1] = puVar3[1];
          *puVar4 = uVar25;
          puVar3 = (undefined8 *)(lVar10 + lVar22 * 0x10);
          puVar3[1] = uVar27;
          *puVar3 = uVar26;
        }
      }
      else {
        puVar4 = (undefined8 *)(lVar10 + lVar24 * 0x10);
        uVar25 = *puVar4;
        uVar27 = puVar3[1];
        uVar26 = *puVar3;
        puVar3[1] = puVar4[1];
        *puVar3 = uVar25;
        puVar3 = (undefined8 *)(lVar10 + lVar24 * 0x10);
        puVar3[1] = uVar27;
        *puVar3 = uVar26;
      }
      if (iVar16 == 2) break;
      lVar10 = *(long *)(param_2 + 0x18);
      uVar21 = lVar22 - 1;
      puVar3 = (undefined8 *)(lVar10 + uVar21 * 0x10);
      uVar25 = *puVar3;
      puVar4 = (undefined8 *)(lVar10 + lVar13 * 0x10);
      uVar27 = puVar4[1];
      uVar26 = *puVar4;
      puVar4 = (undefined8 *)(lVar10 + lVar13 * 0x10);
      puVar4[1] = puVar3[1];
      *puVar4 = uVar25;
      puVar3 = (undefined8 *)(lVar10 + uVar21 * 0x10);
      puVar3[1] = uVar27;
      *puVar3 = uVar26;
      local_e8 = uVar21 & 0xffffffff;
      uVar18 = uVar20;
      while( true ) {
        uVar11 = -(uVar18 >> 0x1f & 1) & 0xfffffff000000000 | (uVar18 & 0xffffffff) << 4;
        iVar16 = *(int *)(param_2 + 8);
        uVar15 = (long)(int)uVar18;
        while( true ) {
          uVar11 = uVar11 + 0x10;
          iVar6 = (*param_6)(param_1,*(long *)(param_2 + 0x18) + uVar11,
                             *(long *)(param_2 + 0x18) + uVar21 * 0x10);
          if (*(int *)(param_2 + 8) != iVar16) goto LAB_00630f90;
          uVar18 = uVar15 + 1;
          if (iVar6 == 0) break;
          uVar15 = uVar18;
          if (lVar22 <= (long)uVar18) goto LAB_00630f9c;
        }
        uVar11 = -(local_e8 >> 0x1f & 1) & 0xfffffff000000000 | (local_e8 & 0xffffffff) << 4;
        uVar23 = (long)(int)local_e8;
        while( true ) {
          uVar11 = uVar11 - 0x10;
          iVar6 = (*param_6)(param_1,*(long *)(param_2 + 0x18) + uVar21 * 0x10,
                             *(long *)(param_2 + 0x18) + uVar11);
          if (*(int *)(param_2 + 8) != iVar16) goto LAB_00630f90;
          local_e8 = uVar23 - 1;
          if (iVar6 == 0) break;
          uVar23 = local_e8;
          if ((long)local_e8 <= lVar24) goto LAB_00630f9c;
        }
        lVar10 = *(long *)(param_2 + 0x18);
        iVar16 = (int)uVar18;
        if ((int)uVar23 <= iVar16) break;
        puVar3 = (undefined8 *)(lVar10 + local_e8 * 0x10);
        uVar25 = *puVar3;
        puVar4 = (undefined8 *)(lVar10 + uVar18 * 0x10);
        uVar27 = puVar4[1];
        uVar26 = *puVar4;
        puVar4 = (undefined8 *)(lVar10 + uVar18 * 0x10);
        puVar4[1] = puVar3[1];
        *puVar4 = uVar25;
        puVar3 = (undefined8 *)(lVar10 + local_e8 * 0x10);
        puVar3[1] = uVar27;
        *puVar3 = uVar26;
      }
      puVar3 = (undefined8 *)(lVar10 + uVar21 * 0x10);
      uVar26 = puVar3[1];
      uVar25 = *puVar3;
      puVar3 = (undefined8 *)(lVar10 + uVar18 * 0x10);
      uVar27 = *puVar3;
      puVar4 = (undefined8 *)(lVar10 + uVar21 * 0x10);
      puVar4[1] = puVar3[1];
      *puVar4 = uVar27;
      puVar3 = (undefined8 *)(lVar10 + uVar18 * 0x10);
      puVar3[1] = uVar26;
      *puVar3 = uVar25;
      local_f4 = (local_f4 >> 1) + (local_f4 >> 2);
      if (iVar16 - iVar19 < iVar14 - iVar16) {
        FUN_00630c20(param_1,param_2,uVar20,uVar15 & 0xffffffff,local_f4,param_6);
        uVar20 = (ulong)((int)uVar15 + 2);
      }
      else {
        FUN_00630c20(param_1,param_2,(int)uVar15 + 2,uVar17,local_f4,param_6);
        uVar17 = uVar15 & 0xffffffff;
      }
    } while ((int)uVar20 < (int)uVar17);
  }
  if (*(long *)(lVar5 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00630f9c:
  pcVar8 = "invalid order function for sorting";
LAB_00630fa4:
                    /* WARNING: Subroutine does not return */
  luaL_errorL(param_1,pcVar8);
}


// ===== 00630fb0  FUN_00630fb0 =====

void FUN_00630fb0(lua_State *param_1,long param_2,int param_3,int param_4,code *param_5,uint param_6
                 )

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar9 = param_6 * 2;
  lVar5 = tpidr_el0;
  lVar10 = *(long *)(lVar5 + 0x28);
  do {
    uVar6 = uVar9 + 2;
    if (param_4 - param_3 < (int)uVar6) {
LAB_006310b0:
      if ((uVar9 | 1) == param_4 - param_3) {
        param_3 = param_6 + param_3;
        iVar1 = *(int *)(param_2 + 8);
        iVar8 = (*param_5)(param_1,*(long *)(param_2 + 0x18) + (long)param_3 * 0x10,
                           *(long *)(param_2 + 0x18) + (long)param_4 * 0x10);
        if (*(int *)(param_2 + 8) != iVar1) {
LAB_00631138:
                    /* WARNING: Subroutine does not return */
          luaL_errorL(param_1,"table modified during sorting");
        }
        if (iVar8 != 0) {
          lVar11 = *(long *)(param_2 + 0x18);
          puVar3 = (undefined8 *)(lVar11 + (long)param_4 * 0x10);
          uVar12 = *puVar3;
          puVar4 = (undefined8 *)(lVar11 + (long)param_3 * 0x10);
          uVar14 = puVar4[1];
          uVar13 = *puVar4;
          puVar4 = (undefined8 *)(lVar11 + (long)param_3 * 0x10);
          puVar4[1] = puVar3[1];
          *puVar4 = uVar12;
          puVar3 = (undefined8 *)(lVar11 + (long)param_4 * 0x10);
          puVar3[1] = uVar14;
          *puVar3 = uVar13;
        }
      }
      if (*(long *)(lVar5 + 0x28) == lVar10) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    iVar1 = param_6 + param_3;
    iVar8 = *(int *)(param_2 + 8);
    iVar7 = (*param_5)(param_1,*(long *)(param_2 + 0x18) + (long)iVar1 * 0x10,
                       *(long *)(param_2 + 0x18) + (long)(int)((uVar9 | 1) + param_3) * 0x10);
    if (*(int *)(param_2 + 8) != iVar8) goto LAB_00631138;
    uVar2 = param_6;
    if (iVar7 != 0) {
      uVar2 = uVar9 | 1;
    }
    iVar7 = (*param_5)(param_1,*(long *)(param_2 + 0x18) + (long)(int)(uVar2 + param_3) * 0x10,
                       *(long *)(param_2 + 0x18) + (long)(int)(uVar6 + param_3) * 0x10);
    if (*(int *)(param_2 + 8) != iVar8) goto LAB_00631138;
    if (iVar7 != 0) {
      uVar2 = uVar6;
    }
    if (uVar2 == param_6) {
      uVar9 = param_6 << 1;
      goto LAB_006310b0;
    }
    uVar9 = uVar2 * 2;
    lVar11 = *(long *)(param_2 + 0x18);
    puVar3 = (undefined8 *)(lVar11 + (long)(int)(uVar2 + param_3) * 0x10);
    uVar12 = *puVar3;
    puVar4 = (undefined8 *)(lVar11 + (long)iVar1 * 0x10);
    uVar14 = puVar4[1];
    uVar13 = *puVar4;
    puVar4 = (undefined8 *)(lVar11 + (long)iVar1 * 0x10);
    puVar4[1] = puVar3[1];
    *puVar4 = uVar12;
    puVar3 = (undefined8 *)(lVar11 + (long)(int)(uVar2 + param_3) * 0x10);
    puVar3[1] = uVar14;
    *puVar3 = uVar13;
    param_6 = uVar2;
  } while( true );
}


// ===== 0063114c  FUN_0063114c =====

void FUN_0063114c(lua_State *param_1,luaL_Strbuf *param_2,uint param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (((param_4 != 0) && (lVar3 = (long)(int)param_3 + -1, (uint)lVar3 < *(uint *)(param_4 + 8))) &&
     (*(int *)(*(long *)(param_4 + 0x18) + lVar3 * 0x10 + 0xc) == 6)) {
    lVar3 = *(long *)(*(long *)(param_4 + 0x18) + lVar3 * 0x10);
    luaL_addlstring(param_2,(char *)(lVar3 + 0x18),(ulong)*(uint *)(lVar3 + 0x14));
    return;
  }
  iVar1 = lua_rawgeti(param_1,1,param_3);
  if ((iVar1 != 3) && (iVar1 != 6)) {
    uVar2 = luaL_typename(param_1,-1);
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"invalid value (%s) at index %d in table for \'concat\'",uVar2,
                (ulong)param_3);
  }
  luaL_addvalue(param_2);
  return;
}


// ===== 00631210  FUN_00631210 =====

undefined8 * FUN_00631210(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)
           (*(long *)(param_1 + 0x20) +
           (ulong)(*(uint *)(param_3 + 0x10) & ~(-1 << (ulong)(*(byte *)(param_1 + 6) & 0x1f))) *
           0x20);
  while( true ) {
    uVar1 = *(uint *)((long)puVar2 + 0x1c);
    if ((((uVar1 & 0xf) == 6) && (puVar3 = puVar2, puVar2[2] == param_3)) ||
       (puVar3 = &DAT_00285948, uVar1 < 0x10)) break;
    puVar2 = puVar2 + ((long)((ulong)uVar1 << 0x20) >> 0x24) * 4;
  }
  if (*(int *)((long)puVar3 + 0xc) == 0) {
    puVar3 = (undefined8 *)0x0;
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | (byte)(1 << (ulong)(param_2 & 0x1f));
  }
  return puVar3;
}


// ===== 00631294  FUN_00631294 =====

undefined8 * FUN_00631294(long param_1,long *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  double *pdVar7;
  long lVar8;
  double *pdVar9;
  double dVar10;
  
  iVar1 = *(int *)((long)param_2 + 0xc);
  if (iVar1 < 0xc) {
    if (iVar1 == 7) {
      plVar5 = (long *)(*param_2 + 0x10);
    }
    else {
      if (iVar1 != 9) goto LAB_0063133c;
      plVar5 = (long *)(*param_2 + 8);
    }
  }
  else if (iVar1 == 0xc) {
    plVar5 = (long *)(*param_2 + 0x30);
  }
  else {
    if (iVar1 == 0xd) {
      lVar8 = *(long *)(*param_2 + 0x10);
      dVar10 = *(double *)(*(long *)(param_1 + 0x18) + (ulong)param_3 * 8 + 0x408);
      pdVar7 = (double *)
               (*(long *)(*(long *)(lVar8 + 0x20) + 0x20) +
               (ulong)(*(uint *)((long)dVar10 + 0x10) &
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lVar8 + 0x20) + 6) & 0x1f))) * 0x20);
      while( true ) {
        uVar2 = *(uint *)((long)pdVar7 + 0x1c);
        if ((((uVar2 & 0xf) == 6) && (pdVar9 = pdVar7, pdVar7[2] == dVar10)) ||
           (pdVar9 = (double *)&DAT_00285948, uVar2 < 0x10)) break;
        pdVar7 = pdVar7 + ((long)((ulong)uVar2 << 0x20) >> 0x24) * 4;
      }
      if ((*(int *)((long)pdVar9 + 0xc) != 0) && (*(int *)(lVar8 + 0x38) <= (int)*pdVar9)) {
        return (undefined8 *)
               (*(long *)(lVar8 + 0x18) + (long)((int)*pdVar9 - *(int *)(lVar8 + 0x38)) * 0x10);
      }
      goto LAB_006313f8;
    }
LAB_0063133c:
    plVar5 = (long *)(*(long *)(param_1 + 0x18) + (long)iVar1 * 8 + 0x328);
  }
  lVar8 = *plVar5;
  if (lVar8 != 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x18) + (ulong)param_3 * 8 + 0x408);
    puVar3 = (undefined8 *)
             (*(long *)(lVar8 + 0x20) +
             (ulong)(*(uint *)(lVar6 + 0x10) & ~(-1 << (ulong)(*(byte *)(lVar8 + 6) & 0x1f))) * 0x20
             );
    while( true ) {
      uVar2 = *(uint *)((long)puVar3 + 0x1c);
      if ((((uVar2 & 0xf) == 6) && (puVar4 = puVar3, puVar3[2] == lVar6)) ||
         (puVar4 = &DAT_00285948, uVar2 < 0x10)) break;
      puVar3 = puVar3 + ((long)((ulong)uVar2 << 0x20) >> 0x24) * 4;
    }
    return puVar4;
  }
LAB_006313f8:
  return &DAT_00285948;
}


// ===== 00631410  FUN_00631410 =====

long FUN_00631410(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  iVar1 = *(int *)((long)param_2 + 0xc);
  if (iVar1 == 2) {
    if ((*(uint *)(param_2 + 1) < 0x80) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_2 + 1) * 8 + 0x3c30),
       lVar7 != 0)) {
      return lVar7;
    }
  }
  else if (((iVar1 == 9) && (*(char *)(*param_2 + 3) != -0x7f)) &&
          (lVar7 = *(long *)(*param_2 + 8), lVar7 != 0)) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x4a0);
    plVar3 = (long *)(*(long *)(lVar7 + 0x20) +
                     (ulong)(*(uint *)(lVar5 + 0x10) & ~(-1 << (ulong)(*(byte *)(lVar7 + 6) & 0x1f))
                            ) * 0x20);
    while( true ) {
      uVar2 = *(uint *)((long)plVar3 + 0x1c);
      if ((((uVar2 & 0xf) == 6) && (plVar4 = plVar3, plVar3[2] == lVar5)) ||
         (plVar4 = &DAT_00285948, uVar2 < 0x10)) break;
      plVar3 = plVar3 + ((long)((ulong)uVar2 << 0x20) >> 0x24) * 4;
    }
    if (*(int *)((long)plVar4 + 0xc) != 6) {
      plVar4 = (long *)(*(long *)(param_1 + 0x18) + 0x3e0);
    }
    goto LAB_0063153c;
  }
  lVar7 = *(long *)(param_1 + 0x18) + (long)iVar1 * 8;
  lVar5 = *(long *)(lVar7 + 0x328);
  if (lVar5 != 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0x4a0);
    plVar3 = (long *)(*(long *)(lVar5 + 0x20) +
                     (ulong)(*(uint *)(lVar6 + 0x10) & ~(-1 << (ulong)(*(byte *)(lVar5 + 6) & 0x1f))
                            ) * 0x20);
    while( true ) {
      uVar2 = *(uint *)((long)plVar3 + 0x1c);
      if ((((uVar2 & 0xf) == 6) && (plVar4 = plVar3, plVar3[2] == lVar6)) ||
         (plVar4 = &DAT_00285948, uVar2 < 0x10)) break;
      plVar3 = plVar3 + ((long)((ulong)uVar2 << 0x20) >> 0x24) * 4;
    }
    if (*(int *)((long)plVar4 + 0xc) == 6) goto LAB_0063153c;
  }
  plVar4 = (long *)(lVar7 + 0x398);
LAB_0063153c:
  return *plVar4;
}


// ===== 00631560  FUN_00631560 =====

long FUN_00631560(void)

{
  long lVar1;
  
  lVar1 = FUN_00631410();
  return lVar1 + 0x18;
}


// ===== 00631578  FUN_00631578 =====

void FUN_00631578(long param_1,ulong param_2,undefined1 param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined1 *puVar4;
  long lVar5;
  
  if (param_2 < 0x7fffffe8) {
    uVar1 = (ulong)((int)param_2 + 0xf) & 0xfffffff0;
    if (param_2 < 0x11) {
      uVar1 = param_2;
    }
    puVar4 = (undefined1 *)FUN_00628d60(param_1,uVar1 + 0x10,*(undefined1 *)(param_1 + 4));
    lVar5 = *(long *)(param_1 + 0x18);
    *(int *)(puVar4 + 4) = (int)param_2;
    *puVar4 = 9;
    uVar2 = *(undefined1 *)(param_1 + 4);
    bVar3 = *(byte *)(lVar5 + 0x20);
    *(undefined8 *)(puVar4 + 8) = 0;
    puVar4[2] = uVar2;
    puVar4[1] = bVar3 & 3;
    puVar4[3] = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00628ac4(param_1);
}


// ===== 00631608  luaopen_utf8 =====

/* luaopen_utf8(lua_State*) */

undefined8 luaopen_utf8(lua_State *param_1)

{
  luaL_register(param_1,"utf8",(luaL_Reg *)&PTR_s_offset_0067ae80);
  lua_pushlstring(param_1,"[",0xe);
  lua_setfield(param_1,-2,"charpattern");
  return 1;
}


// ===== 00631664  FUN_00631664 =====

undefined8 FUN_00631664(lua_State *param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  double *pdVar12;
  uint uVar13;
  ulong local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar8 = luaL_checklstring(param_1,1,&local_50);
  iVar6 = luaL_checkinteger(param_1,2);
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
  uVar13 = 1;
  if (iVar6 < 0) {
    uVar13 = (int)local_50 + 1;
  }
  uVar9 = (ulong)uVar13;
  if (((puVar2 < *(undefined8 **)(param_1 + 8)) && (puVar2 != &DAT_00285948)) &&
     (0 < *(int *)(*(long *)(param_1 + 0x10) + 0x2c))) {
    uVar9 = luaL_checkinteger(param_1,3);
  }
  iVar7 = (int)uVar9;
  iVar10 = (int)local_50;
  if (iVar7 < 0) {
    if (local_50 < (ulong)-(long)iVar7) goto LAB_00631864;
    uVar9 = (ulong)(iVar7 + iVar10 + 1);
  }
  iVar7 = (int)uVar9;
  uVar13 = iVar7 - 1;
  uVar11 = (ulong)uVar13;
  if ((iVar7 < 1) || (iVar10 < (int)uVar13)) {
LAB_00631864:
                    /* WARNING: Subroutine does not return */
    luaL_argerrorL(param_1,3,"position out of range");
  }
  if (iVar6 == 0) {
    if (iVar7 != 1) {
      do {
        uVar13 = (int)uVar9 - 1;
        uVar9 = (ulong)uVar13;
        if ((*(byte *)(lVar8 + uVar9) & 0xc0) != 0x80) goto LAB_00631814;
      } while (1 < (int)uVar13);
    }
    uVar13 = 0;
LAB_00631814:
    pdVar12 = *(double **)(param_1 + 8);
    *(undefined4 *)((long)pdVar12 + 0xc) = 3;
    *pdVar12 = (double)(int)(uVar13 + 1);
    lVar8 = *(long *)(param_1 + 8);
  }
  else {
    if ((*(byte *)(lVar8 + uVar11) & 0xc0) == 0x80) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL(param_1,"initial position is a continuation byte");
    }
    if (iVar6 < 0) {
      if (uVar13 != 0) {
        uVar9 = (ulong)uVar13;
        do {
          uVar9 = uVar9 & 0xffffffff;
          do {
            bVar4 = uVar9 == 0;
            uVar9 = uVar9 - 1;
            if (bVar4 || uVar9 == 0) {
              uVar13 = 0;
              if (iVar6 != -1) goto LAB_006317fc;
              goto LAB_00631814;
            }
          } while ((*(byte *)(lVar8 + (uVar9 & 0xffffffff)) & 0xc0) == 0x80);
          bVar4 = SCARRY4(iVar6,2);
          iVar7 = iVar6 + 2;
          bVar5 = iVar6 == -2;
          iVar6 = iVar6 + 1;
        } while ((bVar5 || iVar7 < 0 != bVar4) && ((int)uVar9 != 0));
        goto LAB_006317f8;
      }
    }
    else {
      iVar6 = iVar6 + -1;
      if ((iVar6 == 0) || (iVar10 < iVar7)) {
LAB_006317f4:
        uVar9 = uVar11 & 0xffffffff;
      }
      else {
        iVar7 = iVar6;
        do {
          uVar11 = (ulong)(int)uVar11;
          do {
            pbVar1 = (byte *)(lVar8 + 1 + uVar11);
            uVar11 = uVar11 + 1;
          } while ((*pbVar1 & 0xc0) == 0x80);
          iVar6 = iVar7 + -1;
          if (iVar7 < 2) goto LAB_006317f4;
          uVar9 = uVar11 & 0xffffffff;
          iVar7 = iVar6;
        } while ((int)uVar11 < iVar10);
      }
LAB_006317f8:
      uVar13 = (uint)uVar9;
      if (iVar6 == 0) goto LAB_00631814;
    }
LAB_006317fc:
    lVar8 = *(long *)(param_1 + 8);
    *(undefined4 *)(lVar8 + 0xc) = 0;
  }
  *(long *)(param_1 + 8) = lVar8 + 0x10;
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


// ===== 0063188c  FUN_0063188c =====

int FUN_0063188c(lua_State *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  double *pdVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  int local_54;
  ulong local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar8 = 1;
  lVar4 = luaL_checklstring(param_1,1,&local_50);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  if (((puVar1 < *(undefined8 **)(param_1 + 8)) && (puVar1 != &DAT_00285948)) &&
     (0 < *(int *)(*(long *)(param_1 + 0x10) + 0x1c))) {
    uVar3 = luaL_checkinteger(param_1,2);
    uVar8 = (ulong)uVar3;
    if ((int)uVar3 < 0) {
      if (local_50 < (ulong)-(long)(int)uVar3) {
        uVar8 = 0;
      }
      else {
        uVar8 = (ulong)(uVar3 + (int)local_50 + 1);
      }
    }
  }
  uVar7 = (uint)uVar8;
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
  uVar3 = uVar7;
  if (((puVar1 < *(undefined8 **)(param_1 + 8)) && (puVar1 != &DAT_00285948)) &&
     (0 < *(int *)(*(long *)(param_1 + 0x10) + 0x2c))) {
    uVar3 = luaL_checkinteger(param_1,3);
  }
  if ((int)uVar3 < 0) {
    if (local_50 < (ulong)-(long)(int)uVar3) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar3 + (int)local_50 + 1;
    }
  }
  if ((int)uVar7 < 1) {
                    /* WARNING: Subroutine does not return */
    luaL_argerrorL(param_1,2,"out of range");
  }
  if ((int)local_50 < (int)uVar3) {
                    /* WARNING: Subroutine does not return */
    luaL_argerrorL(param_1,3,"out of range");
  }
  if ((int)uVar7 <= (int)uVar3) {
    luaL_checkstack(param_1,(uVar3 - uVar7) + 1,"string slice too long");
    uVar8 = (lVar4 + uVar8) - 1;
    if (uVar8 < lVar4 + (ulong)uVar3) {
      iVar6 = 0;
      do {
        uVar8 = FUN_00631ef8(uVar8,&local_54);
        if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          luaL_errorL(param_1,"invalid UTF-8 code");
        }
        iVar6 = iVar6 + 1;
        pdVar5 = *(double **)(param_1 + 8);
        *(undefined4 *)((long)pdVar5 + 0xc) = 3;
        *pdVar5 = (double)local_54;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
      } while (uVar8 < lVar4 + (ulong)uVar3);
      goto LAB_00631a1c;
    }
  }
  iVar6 = 0;
LAB_00631a1c:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6;
}


// ===== 00631a84  FUN_00631a84 =====

undefined8 FUN_00631a84(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *local_278;
  undefined1 *local_270;
  undefined1 *puStack_268;
  lua_State *local_260;
  undefined8 uStack_258;
  undefined1 auStack_250 [512];
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = (int)((ulong)(*(long *)(param_1 + 8) - *(long *)(param_1 + 0x10)) >> 4);
  if (iVar2 == 1) {
    iVar2 = FUN_00631fbc(param_1,1,auStack_50,&local_278);
    lua_pushlstring(param_1,local_278,(long)iVar2);
  }
  else {
    uStack_258 = 0;
    local_270 = auStack_250;
    puStack_268 = auStack_50;
    local_260 = param_1;
    if (0 < iVar2) {
      iVar4 = 0;
      do {
        iVar4 = iVar4 + 1;
        iVar3 = FUN_00631fbc(param_1,iVar4,auStack_50,&local_278);
        luaL_addlstring((luaL_Strbuf *)&local_270,local_278,(long)iVar3);
      } while (iVar2 != iVar4);
    }
    luaL_pushresult((luaL_Strbuf *)&local_270);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00631b70  FUN_00631b70 =====

void FUN_00631b70(lua_State *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  double *pdVar8;
  int iVar9;
  ulong local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar3 = 1;
  lVar5 = luaL_checklstring(param_1,1,&local_50);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  if ((((puVar1 < *(undefined8 **)(param_1 + 8)) && (puVar1 != &DAT_00285948)) &&
      (0 < *(int *)(*(long *)(param_1 + 0x10) + 0x1c))) &&
     (iVar3 = luaL_checkinteger(param_1,2), iVar3 < 0)) {
    if (local_50 < (ulong)-(long)iVar3) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + (int)local_50 + 1;
    }
  }
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
  if (((puVar1 < *(undefined8 **)(param_1 + 8)) && (puVar1 != &DAT_00285948)) &&
     (0 < *(int *)(*(long *)(param_1 + 0x10) + 0x2c))) {
    iVar4 = luaL_checkinteger(param_1,3);
    if (-1 < iVar4) goto LAB_00631c78;
  }
  else {
    iVar4 = -1;
  }
  if (local_50 < (ulong)-(long)iVar4) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + (int)local_50 + 1;
  }
LAB_00631c78:
  iVar9 = iVar3 + -1;
  if ((iVar3 < 1) || ((int)local_50 < iVar9)) {
                    /* WARNING: Subroutine does not return */
    luaL_argerrorL(param_1,2,"initial position out of string");
  }
  if ((int)local_50 < iVar4) {
                    /* WARNING: Subroutine does not return */
    luaL_argerrorL(param_1,3,"final position out of string");
  }
  if (iVar4 < iVar3) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    do {
      lVar6 = FUN_00631ef8(lVar5 + iVar9,0);
      if (lVar6 == 0) {
        lVar5 = *(long *)(param_1 + 8);
        iVar3 = iVar9 + 1;
        uVar7 = 2;
        *(undefined4 *)(lVar5 + 0xc) = 0;
        *(long *)(param_1 + 8) = lVar5 + 0x10;
        goto LAB_00631ce4;
      }
      iVar9 = (int)lVar6 - (int)lVar5;
      iVar3 = iVar3 + 1;
    } while (iVar9 < iVar4);
  }
  uVar7 = 1;
LAB_00631ce4:
  pdVar8 = *(double **)(param_1 + 8);
  *(undefined4 *)((long)pdVar8 + 0xc) = 3;
  *pdVar8 = (double)iVar3;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


// ===== 00631d58  FUN_00631d58 =====

undefined8 FUN_00631d58(lua_State *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  luaL_checklstring(param_1,1,(ulong *)0x0);
  lua_pushcclosurek(param_1,FUN_00631dc8,(char *)0x0,0,(_func_int_lua_State_ptr_int *)0x0);
  lua_pushvalue(param_1,1);
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)puVar1 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return 3;
}


// ===== 00631dc8  FUN_00631dc8 =====

void FUN_00631dc8(lua_State *param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  double *pdVar7;
  int iVar8;
  ulong uVar9;
  int local_44;
  int local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = luaL_checklstring(param_1,1,(ulong *)local_40);
  uVar3 = lua_tointegerx(param_1,2,(int *)0x0);
  if ((int)uVar3 < 1) {
    uVar9 = 0;
  }
  else if (local_40[0] < (int)uVar3) {
    uVar9 = (ulong)(uVar3 - 1);
  }
  else {
    uVar2 = (ulong)uVar3;
    do {
      uVar9 = uVar2;
      uVar2 = uVar9 + 1;
    } while ((*(byte *)(lVar4 + uVar9) & 0xc0) == 0x80);
  }
  iVar8 = (int)uVar9;
  if (iVar8 < local_40[0]) {
    pbVar5 = (byte *)FUN_00631ef8(lVar4 + iVar8,&local_44);
    if ((pbVar5 == (byte *)0x0) || ((*pbVar5 & 0xc0) == 0x80)) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL(param_1,"invalid UTF-8 code");
    }
    pdVar7 = *(double **)(param_1 + 8);
    uVar6 = 2;
    *(undefined4 *)((long)pdVar7 + 0xc) = 3;
    *pdVar7 = (double)(iVar8 + 1);
    lVar4 = *(long *)(param_1 + 8);
    *(undefined4 *)(lVar4 + 0x1c) = 3;
    *(long *)(param_1 + 8) = lVar4 + 0x10;
    *(double *)(lVar4 + 0x10) = (double)local_44;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  }
  else {
    uVar6 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


// ===== 00631ef8  FUN_00631ef8 =====

byte * FUN_00631ef8(byte *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar2 = (uint)*param_1;
  if ((char)*param_1 < '\0') {
    uVar3 = 0;
    uVar4 = 0;
    do {
      if ((uVar2 >> 6 & 1) == 0) {
        if (3 < (uint)uVar3) {
          return (byte *)0x0;
        }
        uVar2 = (uVar2 & 0x3f) << (ulong)((uint)uVar3 * 5 & 0x1f) | uVar4;
        if (0x10 < uVar2 >> 0x10) {
          return (byte *)0x0;
        }
        if (uVar2 >> 0xb == 0x1b || uVar2 <= (uint)(&DAT_0024dea0)[uVar3 & 0xffffffff]) {
          return (byte *)0x0;
        }
        param_1 = param_1 + (uVar3 & 0xffffffff);
        goto joined_r0x00631fac;
      }
      lVar1 = uVar3 + 1;
      uVar2 = uVar2 << 1;
      uVar3 = uVar3 + 1;
      uVar4 = param_1[lVar1] & 0x3f | uVar4 << 6;
    } while ((param_1[lVar1] & 0xc0) == 0x80);
    param_1 = (byte *)0x0;
  }
  else {
joined_r0x00631fac:
    if (param_2 != (uint *)0x0) {
      *param_2 = uVar2;
    }
    param_1 = param_1 + 1;
  }
  return param_1;
}


// ===== 00631fbc  FUN_00631fbc =====

void FUN_00631fbc(lua_State *param_1,int param_2,long param_3,long *param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  
  uVar3 = luaL_checkinteger(param_1,param_2);
  if (uVar3 < 0x110000) {
    uVar5 = (ulong)uVar3;
    if (uVar3 < 0x80) {
      iVar4 = 1;
      lVar6 = 7;
    }
    else {
      uVar7 = 0x3f;
      pbVar8 = (byte *)(param_3 + 7);
      iVar1 = 0;
      do {
        iVar4 = iVar1;
        uVar7 = uVar7 >> 1;
        bVar2 = (byte)uVar5;
        uVar5 = uVar5 >> 6;
        iVar1 = iVar4 + 1;
        *pbVar8 = bVar2 & 0x3f | 0x80;
        pbVar8 = pbVar8 + -1;
      } while (uVar7 < uVar5);
      iVar4 = iVar4 + 2;
      lVar6 = (long)(7 - iVar1);
      uVar3 = (uint)uVar5 | ~(uint)uVar7 << 1;
    }
    *(char *)(param_3 + lVar6) = (char)uVar3;
    *param_4 = (param_3 - iVar4) + 8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  luaL_argerrorL(param_1,param_2,"value out of range");
}


// ===== 00632080  luaopen_vector =====

/* luaopen_vector(lua_State*) */

undefined8 luaopen_vector(lua_State *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  luaL_register(param_1,"vector",(luaL_Reg *)&PTR_s_create_0067aee0);
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar1[1] = 0x500000000;
  *(undefined8 **)(param_1 + 8) = puVar1 + 2;
  *puVar1 = 0;
  lua_setfield(param_1,-2,"zero");
  uVar3 = NEON_fmov(0x3f800000,4);
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar1[1] = 0x53f800000;
  *(undefined8 **)(param_1 + 8) = puVar1 + 2;
  *puVar1 = uVar3;
  lua_setfield(param_1,-2,"one");
  lua_createtable(param_1,0,1);
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0;
  puVar1[1] = 0x500000000;
  *(undefined8 **)(param_1 + 8) = puVar1 + 2;
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
  }
  puVar1[3] = puVar1[-1];
  puVar1[2] = puVar1[-2];
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  lua_setmetatable(param_1,-2);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -0x10;
  lua_pushcclosurek(param_1,FUN_006321dc,(char *)0x0,0,(_func_int_lua_State_ptr_int *)0x0);
  lua_setfield(param_1,-2,"__index");
  lVar2 = *(long *)(param_1 + 8);
  *(undefined1 *)(*(long *)(lVar2 + -0x10) + 4) = 1;
  *(long **)(param_1 + 8) = (long *)(lVar2 + -0x10);
  return 1;
}


// ===== 006321dc  FUN_006321dc =====

undefined8 FUN_006321dc(lua_State *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  double *pdVar5;
  float fVar6;
  ulong local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = luaL_checkvector(param_1,1);
  local_40 = 0;
  pbVar4 = (byte *)luaL_checklstring(param_1,2,&local_40);
  if ((local_40 == 1) && (uVar1 = (*pbVar4 | 0x20) - 0x78, uVar1 < 3)) {
    fVar6 = *(float *)(lVar3 + (ulong)uVar1 * 4);
    pdVar5 = *(double **)(param_1 + 8);
    *(undefined4 *)((long)pdVar5 + 0xc) = 3;
    *pdVar5 = (double)fVar6;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  luaL_errorL(param_1,"attempt to index vector with \'%s\'");
}


// ===== 006322a4  FUN_006322a4 =====

undefined8 FUN_006322a4(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float *pfVar6;
  float fVar7;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  dVar3 = (double)luaL_checknumber(param_1,1);
  dVar4 = (double)luaL_checknumber(param_1,2);
  fVar7 = 0.0;
  if (2 < (int)((ulong)(lVar1 - lVar2) >> 4)) {
    dVar5 = (double)luaL_checknumber(param_1,3);
    fVar7 = (float)dVar5;
  }
  pfVar6 = *(float **)(param_1 + 8);
  pfVar6[3] = 7.00649e-45;
  pfVar6[1] = (float)dVar4;
  pfVar6[2] = fVar7;
  *pfVar6 = (float)dVar3;
  *(float **)(param_1 + 8) = pfVar6 + 4;
  return 1;
}


// ===== 00632334  FUN_00632334 =====

undefined8 FUN_00632334(lua_State *param_1)

{
  undefined4 *puVar1;
  double *pdVar2;
  float fVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)luaL_checkvector(param_1,1);
  uVar4 = *puVar1;
  fVar3 = (float)puVar1[1];
  pdVar2 = *(double **)(param_1 + 8);
  *(undefined4 *)((long)pdVar2 + 0xc) = 3;
  uVar4 = NEON_fmadd(uVar4,uVar4,fVar3 * fVar3);
  fVar3 = (float)NEON_fmadd(puVar1[2],puVar1[2],uVar4);
  *pdVar2 = (double)SQRT(fVar3);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 00632394  FUN_00632394 =====

undefined8 FUN_00632394(lua_State *param_1)

{
  undefined8 *puVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  puVar1 = (undefined8 *)luaL_checkvector(param_1,1);
  uVar3 = *puVar1;
  fVar7 = *(float *)(puVar1 + 1);
  puVar1 = *(undefined8 **)(param_1 + 8);
  fVar4 = (float)((ulong)uVar3 >> 0x20);
  *(undefined4 *)((long)puVar1 + 0xc) = 5;
  fVar2 = (float)uVar3;
  uVar5 = NEON_fmadd(fVar2,fVar2,fVar4 * fVar4);
  fVar6 = (float)NEON_fmadd(fVar7,fVar7,uVar5);
  fVar6 = 1.0 / SQRT(fVar6);
  *puVar1 = CONCAT44(fVar4 * fVar6,fVar2 * fVar6);
  *(float *)(puVar1 + 1) = fVar7 * fVar6;
  *(undefined8 **)(param_1 + 8) = puVar1 + 2;
  return 1;
}


// ===== 00632404  FUN_00632404 =====

undefined8 FUN_00632404(lua_State *param_1)

{
  undefined4 *puVar1;
  float *pfVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  
  puVar1 = (undefined4 *)luaL_checkvector(param_1,1);
  pfVar2 = (float *)luaL_checkvector(param_1,2);
  uVar5 = *(undefined8 *)(puVar1 + 1);
  uVar6 = *puVar1;
  uVar10 = *(undefined8 *)(pfVar2 + 1);
  fVar12 = *pfVar2;
  puVar3 = *(undefined8 **)(param_1 + 8);
  fVar11 = (float)((ulong)uVar10 >> 0x20);
  fVar4 = (float)uVar5;
  *(undefined4 *)((long)puVar3 + 0xc) = 5;
  fVar8 = (float)((ulong)uVar5 >> 0x20);
  fVar9 = (float)uVar10;
  uVar7 = NEON_fmadd(uVar6,fVar9,-(fVar4 * fVar12));
  uVar5 = NEON_rev64(CONCAT44(fVar8,uVar6),4);
  *(undefined4 *)(puVar3 + 1) = uVar7;
  *puVar3 = CONCAT44(fVar11 * -(float)((ulong)uVar5 >> 0x20) + fVar12 * fVar8,
                     fVar9 * -(float)uVar5 + fVar11 * fVar4);
  *(undefined8 **)(param_1 + 8) = puVar3 + 2;
  return 1;
}


// ===== 00632490  FUN_00632490 =====

undefined8 FUN_00632490(lua_State *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  double *pdVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  puVar1 = (undefined4 *)luaL_checkvector(param_1,1);
  puVar2 = (undefined4 *)luaL_checkvector(param_1,2);
  uVar7 = *puVar2;
  fVar5 = (float)puVar2[1];
  fVar4 = (float)puVar1[1];
  pdVar3 = *(double **)(param_1 + 8);
  uVar6 = *puVar1;
  *(undefined4 *)((long)pdVar3 + 0xc) = 3;
  uVar6 = NEON_fmadd(uVar6,uVar7,fVar4 * fVar5);
  fVar4 = (float)NEON_fmadd(puVar1[2],puVar2[2],uVar6);
  *pdVar3 = (double)fVar4;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 00632508  FUN_00632508 =====

undefined8 FUN_00632508(lua_State *param_1)

{
  undefined8 *puVar1;
  float *pfVar2;
  float *pfVar3;
  double *pdVar4;
  long lVar5;
  undefined4 *puVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  
  pfVar2 = (float *)luaL_checkvector(param_1,1);
  pfVar3 = (float *)luaL_checkvector(param_1,2);
  puVar6 = (undefined4 *)0x0;
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
  if ((puVar1 < *(undefined8 **)(param_1 + 8)) && (puVar1 != &DAT_00285948)) {
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x2c) < 1) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = (undefined4 *)luaL_checkvector(param_1,3);
    }
  }
  fVar13 = pfVar3[1];
  fVar7 = pfVar3[2];
  fVar9 = *pfVar2;
  fVar12 = pfVar2[2];
  fVar14 = *pfVar3;
  fVar17 = (float)NEON_fmadd(fVar12,fVar14,-(fVar9 * fVar7));
  fVar11 = pfVar2[1];
  uVar16 = NEON_fmadd(fVar11,fVar7,-(fVar12 * fVar13));
  uVar18 = NEON_fmadd(fVar9,fVar13,-(fVar11 * fVar14));
  uVar10 = NEON_fmadd(fVar9,fVar14,fVar11 * fVar13);
  uVar15 = NEON_fmadd(uVar16,uVar16,fVar17 * fVar17);
  fVar7 = (float)NEON_fmadd(fVar12,fVar7,uVar10);
  fVar9 = (float)NEON_fmadd(uVar18,uVar18,uVar15);
  dVar8 = atan2((double)SQRT(fVar9),(double)fVar7);
  if (puVar6 != (undefined4 *)0x0) {
    uVar10 = NEON_fmadd(uVar16,*puVar6,fVar17 * (float)puVar6[1]);
    fVar7 = (float)NEON_fmadd(uVar18,puVar6[2],uVar10);
    if (fVar7 < 0.0) {
      dVar8 = -dVar8;
    }
  }
  pdVar4 = *(double **)(param_1 + 8);
  *pdVar4 = dVar8;
  lVar5 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)pdVar4 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar5 + 0x10;
  return 1;
}


// ===== 00632638  FUN_00632638 =====

undefined8 FUN_00632638(lua_State *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  float fVar3;
  
  puVar1 = (undefined8 *)luaL_checkvector(param_1,1);
  uVar2 = *puVar1;
  fVar3 = *(float *)(puVar1 + 1);
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined4 *)((long)puVar1 + 0xc) = 5;
  *puVar1 = CONCAT44((int)(float)((ulong)uVar2 >> 0x20),(int)(float)uVar2);
  *(int *)(puVar1 + 1) = (int)fVar3;
  *(undefined8 **)(param_1 + 8) = puVar1 + 2;
  return 1;
}


// ===== 0063268c  FUN_0063268c =====

undefined8 FUN_0063268c(lua_State *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  float fVar3;
  
  puVar1 = (undefined8 *)luaL_checkvector(param_1,1);
  uVar2 = *puVar1;
  fVar3 = *(float *)(puVar1 + 1);
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined4 *)((long)puVar1 + 0xc) = 5;
  *puVar1 = CONCAT44((int)(float)((ulong)uVar2 >> 0x20),(int)(float)uVar2);
  *(int *)(puVar1 + 1) = (int)fVar3;
  *(undefined8 **)(param_1 + 8) = puVar1 + 2;
  return 1;
}


// ===== 006326e0  FUN_006326e0 =====

undefined8 FUN_006326e0(lua_State *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  float fVar3;
  
  puVar1 = (undefined8 *)luaL_checkvector(param_1,1);
  uVar2 = *puVar1;
  fVar3 = *(float *)(puVar1 + 1);
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined4 *)((long)puVar1 + 0xc) = 5;
  *puVar1 = CONCAT44(ABS((float)((ulong)uVar2 >> 0x20)),ABS((float)uVar2));
  *(float *)(puVar1 + 1) = ABS(fVar3);
  *(undefined8 **)(param_1 + 8) = puVar1 + 2;
  return 1;
}


// ===== 00632734  FUN_00632734 =====

undefined8 FUN_00632734(lua_State *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar1 = (undefined8 *)luaL_checkvector(param_1,1);
  fVar4 = *(float *)(puVar1 + 1);
  uVar8 = NEON_fmov(0xbf800000,4);
  puVar2 = *(undefined8 **)(param_1 + 8);
  uVar9 = NEON_fcmlt(*puVar1,0,4);
  uVar6 = NEON_fmov(0x3f800000,4);
  uVar3 = NEON_fcmgt(*puVar1,0,4);
  *(undefined4 *)((long)puVar2 + 0xc) = 5;
  uVar7 = 0xbf800000;
  if (fVar4 >= 0.0) {
    uVar7 = 0;
  }
  uVar3 = NEON_bsl(uVar3,uVar6,uVar8 & uVar9,1);
  uVar5 = 0x3f800000;
  if (fVar4 == 0.0 || fVar4 < 0.0 != NAN(fVar4)) {
    uVar5 = uVar7;
  }
  *puVar2 = uVar3;
  *(undefined4 *)(puVar2 + 1) = uVar5;
  *(undefined8 **)(param_1 + 8) = puVar2 + 2;
  return 1;
}


// ===== 006327b0  FUN_006327b0 =====

undefined8 FUN_006327b0(lua_State *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  char *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  pfVar1 = (float *)luaL_checkvector(param_1,1);
  pfVar2 = (float *)luaL_checkvector(param_1,2);
  pfVar3 = (float *)luaL_checkvector(param_1,3);
  fVar7 = *pfVar2;
  fVar6 = *pfVar3;
  if (fVar6 < fVar7) {
    pcVar4 = "max.x must be greater than or equal to min.x";
  }
  else {
    fVar9 = pfVar2[1];
    fVar8 = pfVar3[1];
    if (fVar8 < fVar9) {
      pcVar4 = "max.y must be greater than or equal to min.y";
    }
    else {
      fVar10 = pfVar2[2];
      fVar5 = pfVar3[2];
      if (fVar10 <= fVar5) {
        fVar11 = *pfVar1;
        fVar12 = pfVar1[1];
        pfVar2 = *(float **)(param_1 + 8);
        pfVar2[3] = 7.00649e-45;
        if (fVar7 <= fVar11) {
          fVar7 = fVar11;
        }
        if (fVar7 == fVar6 || fVar7 < fVar6 != (NAN(fVar7) || NAN(fVar6))) {
          fVar6 = fVar7;
        }
        if (fVar9 <= fVar12) {
          fVar9 = fVar12;
        }
        if (fVar9 == fVar8 || fVar9 < fVar8 != (NAN(fVar9) || NAN(fVar8))) {
          fVar8 = fVar9;
        }
        if (fVar10 <= pfVar1[2]) {
          fVar10 = pfVar1[2];
        }
        *pfVar2 = fVar6;
        pfVar2[1] = fVar8;
        if (fVar10 == fVar5 || fVar10 < fVar5 != (NAN(fVar10) || NAN(fVar5))) {
          fVar5 = fVar10;
        }
        pfVar2[2] = fVar5;
        *(float **)(param_1 + 8) = pfVar2 + 4;
        return 1;
      }
      pcVar4 = "max.z must be greater than or equal to min.z";
    }
  }
                    /* WARNING: Subroutine does not return */
  luaL_argerrorL(param_1,3,pcVar4);
}


// ===== 006328b0  FUN_006328b0 =====

undefined8 FUN_006328b0(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uVar9;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  puVar3 = (undefined8 *)luaL_checkvector(param_1,1);
  uVar9 = *puVar3;
  fVar8 = *(float *)(puVar3 + 1);
  iVar5 = (int)((ulong)(lVar1 - lVar2) >> 4);
  if (1 < iVar5) {
    iVar4 = 1;
    do {
      iVar4 = iVar4 + 1;
      puVar3 = (undefined8 *)luaL_checkvector(param_1,iVar4);
      fVar6 = *(float *)(puVar3 + 1);
      uVar7 = NEON_fcmgt(*puVar3,uVar9,4);
      if (fVar6 == fVar8 || fVar6 < fVar8 != (NAN(fVar6) || NAN(fVar8))) {
        fVar6 = fVar8;
      }
      fVar8 = fVar6;
      uVar9 = NEON_bit(uVar9,*puVar3,uVar7,1);
    } while (iVar5 != iVar4);
  }
  puVar3 = *(undefined8 **)(param_1 + 8);
  *puVar3 = uVar9;
  *(float *)(puVar3 + 1) = fVar8;
  *(undefined4 *)((long)puVar3 + 0xc) = 5;
  *(undefined8 **)(param_1 + 8) = puVar3 + 2;
  return 1;
}


// ===== 00632954  FUN_00632954 =====

undefined8 FUN_00632954(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uVar9;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  puVar4 = (undefined8 *)luaL_checkvector(param_1,1);
  uVar9 = *puVar4;
  fVar8 = *(float *)(puVar4 + 1);
  iVar6 = (int)((ulong)(lVar1 - lVar2) >> 4);
  if (1 < iVar6) {
    iVar5 = 1;
    do {
      iVar5 = iVar5 + 1;
      puVar4 = (undefined8 *)luaL_checkvector(param_1,iVar5);
      uVar7 = NEON_fcmgt(uVar9,*puVar4,4);
      fVar3 = *(float *)(puVar4 + 1);
      if (fVar8 <= *(float *)(puVar4 + 1)) {
        fVar3 = fVar8;
      }
      fVar8 = fVar3;
      uVar9 = NEON_bit(uVar9,*puVar4,uVar7,1);
    } while (iVar6 != iVar5);
  }
  puVar4 = *(undefined8 **)(param_1 + 8);
  *puVar4 = uVar9;
  *(float *)(puVar4 + 1) = fVar8;
  *(undefined4 *)((long)puVar4 + 0xc) = 5;
  *(undefined8 **)(param_1 + 8) = puVar4 + 2;
  return 1;
}


// ===== 006329f8  FUN_006329f8 =====

undefined8 FUN_006329f8(lua_State *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  float fVar4;
  double dVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  
  puVar1 = (undefined8 *)luaL_checkvector(param_1,1);
  puVar2 = (undefined8 *)luaL_checkvector(param_1,2);
  dVar5 = (double)luaL_checknumber(param_1,3);
  fVar4 = (float)dVar5;
  fVar8 = *(float *)(puVar2 + 1);
  uVar11 = *puVar2;
  fVar9 = (float)*puVar1;
  fVar10 = (float)((ulong)*puVar1 >> 0x20);
  uVar3 = (uint)(fVar4 == 1.0);
  puVar2 = *(undefined8 **)(param_1 + 8);
  fVar7 = (float)NEON_fmadd(fVar8 - *(float *)(puVar1 + 1),fVar4,*(float *)(puVar1 + 1));
  *(undefined4 *)((long)puVar2 + 0xc) = 5;
  if (fVar4 != 1.0) {
    fVar8 = fVar7;
  }
  uVar6 = NEON_cmlt(CONCAT44(uVar3 << 0x1f,uVar3 << 0x1f),0,4);
  uVar11 = NEON_bsl(uVar6,uVar11,
                    CONCAT44(fVar10 + ((float)((ulong)uVar11 >> 0x20) - fVar10) * fVar4,
                             fVar9 + ((float)uVar11 - fVar9) * fVar4),1);
  *(float *)(puVar2 + 1) = fVar8;
  *puVar2 = uVar11;
  *(undefined8 **)(param_1 + 8) = puVar2 + 2;
  return 1;
}


// ===== 00632aa8  FUN_00632aa8 =====

void FUN_00632aa8(long param_1,code *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_1a8 [36];
  int local_184;
  undefined8 local_178;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  puVar6 = *(undefined8 **)(param_1 + 0x20);
  cVar3 = *(char *)(param_1 + 3);
  lVar7 = *(long *)(param_1 + 0x10);
  lVar15 = puVar6[2];
  if ((cVar3 == '\x06') || (cVar3 == '\x01')) {
    uVar8 = *puVar6;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined8 *)(param_1 + 0x10) = uVar8;
  }
  lVar13 = puVar6[3];
  lVar12 = *(long *)(param_1 + 0x30);
  lVar14 = *(long *)(param_1 + 8);
  lVar11 = *(long *)puVar6[1];
  if ((lVar13 != 0) &&
     (lVar13 != *(long *)(*(long *)(lVar11 + 0x20) + 0x10) +
                (long)*(int *)(*(long *)(lVar11 + 0x20) + 0x88) * 4)) {
    puVar6[3] = lVar13 + 4;
  }
  lVar9 = lVar14;
  if (*(long *)(param_1 + 0x28) - lVar14 < 0x141) {
    iVar2 = *(int *)(param_1 + 0x48);
    iVar1 = iVar2 + 0x14;
    if (0x13 < iVar2) {
      iVar1 = iVar2 << 1;
    }
    FUN_006222f4(param_1,iVar1,0);
    lVar9 = *(long *)(param_1 + 8);
    puVar6 = *(undefined8 **)(param_1 + 0x20);
  }
  cVar4 = *(char *)(lVar11 + 3);
  puVar6[2] = lVar9 + 0x140;
  if (cVar4 == '\0') {
    uVar10 = puVar6[3];
    lVar11 = *(long *)(lVar11 + 0x20);
    if ((uVar10 != 0) && (uVar10 = uVar10 - *(long *)(lVar11 + 0x10), uVar10 != 0)) {
      uVar10 = (ulong)((int)(uVar10 >> 2) - 1);
    }
    if (*(long *)(lVar11 + 0x38) == 0) {
      local_184 = 0;
    }
    else {
      local_184 = *(int *)(*(long *)(lVar11 + 0x40) +
                          (long)((int)uVar10 >> (*(uint *)(lVar11 + 0xa0) & 0x1f)) * 4) +
                  (uint)*(byte *)(*(long *)(lVar11 + 0x38) + (long)(int)uVar10);
    }
  }
  else {
    local_184 = -1;
  }
  local_178 = param_3;
  (*param_2)(param_1,auStack_1a8);
  lVar11 = *(long *)(param_1 + 0x30);
  lVar9 = *(long *)(param_1 + 0x20);
  *(long *)(lVar9 + 0x10) = lVar11 + (lVar15 - lVar12);
  *(long *)(lVar9 + 0x18) = lVar13;
  *(long *)(param_1 + 8) = lVar11 + (lVar14 - lVar12);
  if ((cVar3 == '\x06') || ((cVar3 == '\x01' && (*(char *)(param_1 + 3) != '\x01')))) {
    *(char *)(param_1 + 3) = cVar3;
    *(long *)(param_1 + 0x10) = lVar11 + (lVar7 - lVar12);
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00632c7c  FUN_00632c7c =====

void FUN_00632c7c(long param_1)

{
  if (*(char *)(param_1 + 6) != '\0') {
    FUN_00632c8c();
    return;
  }
  FUN_00637f50();
  return;
}


// ===== 00632c8c  FUN_00632c8c =====

void FUN_00632c8c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar4 = *(uint **)(*(long *)(param_1 + 0x20) + 0x18);
  lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x538);
  if ((lVar2 != 0) && ((*puVar4 & 0xbf) != 1)) {
    *(uint **)(*(long *)(param_1 + 0x20) + 0x18) = puVar4;
    FUN_00632aa8(param_1,lVar2,0);
    if (*(char *)(param_1 + 3) != '\0') {
      if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00632d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_0067afd0)[(byte)*puVar4])();
  return;
}


// ===== 00637f50  FUN_00637f50 =====

void FUN_00637f50(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x24) >> 2 & 1) != 0) &&
     (iVar2 = (**(code **)(*(long *)(param_1 + 0x18) + 0x570))
                        (param_1,*(undefined8 *)(**(long **)(*(long *)(param_1 + 0x20) + 8) + 0x20))
     , iVar2 == 0)) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Could not recover jumptable at 0x00637fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_0067b7d0)[**(byte **)(*(long *)(param_1 + 0x20) + 0x18)])();
  return;
}


// ===== 0063d27c  FUN_0063d27c =====

void FUN_0063d27c(long param_1,undefined4 param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x38)) {
    plVar5 = (long *)FUN_006224b4(param_1);
  }
  else {
    plVar5 = (long *)(*(long *)(param_1 + 0x20) + 0x28);
    *(long **)(param_1 + 0x20) = plVar5;
  }
  puVar4 = PTR_LuauClosureUsageCounter_0067dbb0;
  lVar6 = *(long *)(param_1 + 8);
  *plVar5 = (long)(param_3 + 2);
  plVar5[1] = (long)param_3;
  *(undefined4 *)(plVar5 + 4) = param_2;
  *(undefined4 *)((long)plVar5 + 0x24) = 0;
  cVar3 = *puVar4;
  plVar5[2] = lVar6 + 0x140;
  plVar5[3] = 0;
  if (cVar3 != '\0') {
    *(long *)(*param_3 + 8) = *(long *)(*param_3 + 8) + 1;
  }
  *(long **)(param_1 + 0x10) = param_3 + 2;
  if (*(long *)(param_1 + 0x28) - lVar6 < 0x141) {
    iVar2 = *(int *)(param_1 + 0x48);
    iVar1 = iVar2 << 1;
    if (iVar2 < 0x14) {
      iVar1 = iVar2 + 0x14;
    }
    FUN_006222f4(param_1,iVar1,1);
    return;
  }
  return;
}


// ===== 0063d344  FUN_0063d344 =====

undefined8 FUN_0063d344(long param_1,long *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  code cVar4;
  undefined *puVar5;
  uint uVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  
  if (*(int *)((long)param_2 + 0xc) != 8) {
    FUN_006449ac(param_1,param_2);
  }
  lVar19 = *param_2;
  if (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x38)) {
    plVar7 = (long *)FUN_006224b4(param_1);
  }
  else {
    plVar7 = (long *)(*(long *)(param_1 + 0x20) + 0x28);
    *(long **)(param_1 + 0x20) = plVar7;
  }
  lVar15 = *(long *)(param_1 + 8);
  bVar3 = *(byte *)(lVar19 + 5);
  uVar9 = (ulong)bVar3;
  plVar7[1] = (long)param_2;
  puVar5 = PTR_LuauClosureUsageCounter_0067dbb0;
  *plVar7 = (long)(param_2 + 2);
  *(int *)(plVar7 + 4) = param_3;
  *(undefined4 *)((long)plVar7 + 0x24) = 0;
  plVar7[2] = lVar15 + uVar9 * 0x10;
  plVar7[3] = 0;
  if (*puVar5 != '\0') {
    *(long *)(lVar19 + 8) = *(long *)(lVar19 + 8) + 1;
  }
  *(long **)(param_1 + 0x10) = param_2 + 2;
  lVar15 = *(long *)(param_1 + 0x28) - lVar15;
  if (lVar15 == uVar9 * 0x10 || (long)(lVar15 + uVar9 * -0x10) < 0 != SBORROW8(lVar15,uVar9 * 0x10))
  {
    iVar2 = *(int *)(param_1 + 0x48);
    iVar1 = iVar2 + (uint)bVar3;
    if ((int)(uint)bVar3 <= iVar2) {
      iVar1 = iVar2 << 1;
    }
    FUN_006222f4(param_1,iVar1,1);
  }
  pcVar10 = *(code **)(lVar19 + 0x20);
  if (*(char *)(lVar19 + 3) == '\0') {
    lVar19 = *(long *)(param_1 + 0x10);
    cVar4 = pcVar10[4];
    for (uVar9 = *(ulong *)(param_1 + 8); uVar9 < lVar19 + (ulong)(byte)cVar4 * 0x10;
        uVar9 = uVar9 + 0x10) {
      *(undefined4 *)(uVar9 + 0xc) = 0;
    }
    if (pcVar10[5] == (code)0x0) {
      uVar9 = plVar7[2];
    }
    lVar19 = *(long *)(pcVar10 + 0x10);
    lVar15 = *(long *)(pcVar10 + 0x30);
    *(ulong *)(param_1 + 8) = uVar9;
    plVar7[3] = lVar19;
    if ((lVar15 == 0) || (*(long *)(pcVar10 + 0x28) == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      *(undefined4 *)((long)plVar7 + 0x24) = 4;
    }
  }
  else {
    uVar6 = (*pcVar10)(param_1);
    if ((int)uVar6 < 0) {
      uVar8 = 2;
    }
    else {
      lVar15 = *(long *)(param_1 + 0x20);
      if (*puVar5 != '\0') {
        *(long *)(lVar19 + 8) = *(long *)(lVar19 + 8) + -1;
      }
      puVar12 = *(undefined8 **)(lVar15 + 8);
      puVar11 = (undefined8 *)(lVar15 + -0x28);
      if ((param_3 != 0) && (uVar6 != 0)) {
        puVar16 = *(undefined8 **)(param_1 + 8);
        puVar13 = puVar12;
        puVar18 = puVar16 + (ulong)uVar6 * -2;
        do {
          puVar17 = puVar18 + 2;
          uVar8 = *puVar18;
          param_3 = param_3 + -1;
          puVar12 = puVar13 + 2;
          puVar13[1] = puVar18[1];
          *puVar13 = uVar8;
          if (param_3 == 0) break;
          puVar13 = puVar12;
          puVar18 = puVar17;
        } while (puVar17 < puVar16);
      }
      if (0 < param_3) {
        uVar6 = param_3 + 1;
        puVar13 = puVar12;
        do {
          uVar6 = uVar6 - 1;
          puVar12 = puVar13 + 2;
          *(undefined4 *)((long)puVar13 + 0xc) = 0;
          puVar13 = puVar12;
        } while (1 < uVar6);
      }
      uVar14 = *puVar11;
      uVar8 = 1;
      *(undefined8 **)(param_1 + 0x20) = puVar11;
      *(undefined8 **)(param_1 + 8) = puVar12;
      *(undefined8 *)(param_1 + 0x10) = uVar14;
    }
  }
  return uVar8;
}


// ===== 0063d548  FUN_0063d548 =====

void FUN_0063d548(long param_1,ulong param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar2 = *(long *)(param_1 + 0x20);
  plVar3 = *(long **)(lVar2 + 8);
  if (*PTR_LuauClosureUsageCounter_0067dbb0 != '\0') {
    *(long *)(*plVar3 + 8) = *(long *)(*plVar3 + 8) + -1;
  }
  iVar5 = *(int *)(lVar2 + 0x20);
  if ((iVar5 != 0) && (uVar6 = *(ulong *)(param_1 + 8), param_2 < uVar6)) {
    param_2 = param_2 + 0x10;
    plVar4 = plVar3;
    do {
      lVar9 = *(long *)(param_2 - 0x10);
      iVar5 = iVar5 + -1;
      plVar3 = plVar4 + 2;
      plVar4[1] = *(long *)(param_2 - 8);
      *plVar4 = lVar9;
      if (iVar5 == 0) break;
      bVar1 = param_2 < uVar6;
      param_2 = param_2 + 0x10;
      plVar4 = plVar3;
    } while (bVar1);
  }
  if (0 < iVar5) {
    uVar7 = iVar5 + 1;
    plVar4 = plVar3;
    do {
      uVar7 = uVar7 - 1;
      plVar3 = plVar4 + 2;
      *(undefined4 *)((long)plVar4 + 0xc) = 0;
      plVar4 = plVar3;
    } while (1 < uVar7);
  }
  iVar5 = *(int *)(lVar2 + 0x20);
  uVar8 = *(undefined8 *)(lVar2 + -0x28);
  *(long *)(param_1 + 0x20) = lVar2 + -0x28;
  *(undefined8 *)(param_1 + 0x10) = uVar8;
  if (iVar5 != -1) {
    plVar3 = *(long **)(lVar2 + -0x18);
  }
  *(long **)(param_1 + 8) = plVar3;
  return;
}


// ===== 0063d5f8  FUN_0063d5f8 =====

undefined8
FUN_0063d5f8(undefined8 param_1,undefined8 param_2,int *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  if ((((param_4 == 0) && (0 < param_6)) && (param_3[3] != 0)) &&
     ((param_3[3] != 1 || (*param_3 != 0)))) {
    return 0;
  }
  return 0xffffffff;
}


// ===== 0063d62c  FUN_0063d62c =====

undefined8
FUN_0063d62c(undefined8 param_1,double *param_2,double *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    dVar2 = *param_3;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    *param_2 = ABS(dVar2);
  }
  return uVar1;
}


// ===== 0063d664  FUN_0063d664 =====

undefined8
FUN_0063d664(undefined8 param_1,double *param_2,double *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    dVar2 = acos(*param_3);
    *param_2 = dVar2;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 0063d6b8  FUN_0063d6b8 =====

undefined8
FUN_0063d6b8(undefined8 param_1,double *param_2,double *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    dVar2 = asin(*param_3);
    *param_2 = dVar2;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 0063d70c  FUN_0063d70c =====

undefined8
FUN_0063d70c(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) &&
     (*(int *)((long)param_5 + 0xc) == 3)) {
    dVar2 = atan2(*param_3,*param_5);
    *param_2 = dVar2;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 0063d770  FUN_0063d770 =====

undefined8
FUN_0063d770(undefined8 param_1,double *param_2,double *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    dVar2 = atan(*param_3);
    *param_2 = dVar2;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 0063d7c4  FUN_0063d7c4 =====

undefined8
FUN_0063d7c4(undefined8 param_1,long *param_2,double *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    dVar2 = *param_3;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    *param_2 = (long)dVar2;
  }
  return uVar1;
}


// ===== 0063d7fc  FUN_0063d7fc =====

undefined8
FUN_0063d7fc(undefined8 param_1,double *param_2,double *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    dVar2 = cosh(*param_3);
    *param_2 = dVar2;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 0063d850  FUN_0063d850 =====

undefined8
FUN_0063d850(undefined8 param_1,double *param_2,double *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    dVar2 = cos(*param_3);
    *param_2 = dVar2;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 0063d8a4  FUN_0063d8a4 =====

undefined8
FUN_0063d8a4(undefined8 param_1,double *param_2,double *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  
  dVar1 = DAT_0024e8d8;
  uVar2 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    dVar3 = *param_3;
    uVar2 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    *param_2 = dVar3 / dVar1;
  }
  return uVar2;
}


// ===== 0063d8e8  FUN_0063d8e8 =====

undefined8
FUN_0063d8e8(undefined8 param_1,double *param_2,double *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    dVar2 = exp(*param_3);
    *param_2 = dVar2;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 0063d93c  FUN_0063d93c =====

undefined8
FUN_0063d93c(undefined8 param_1,long *param_2,double *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    dVar2 = *param_3;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    *param_2 = (long)dVar2;
  }
  return uVar1;
}


// ===== 0063d974  FUN_0063d974 =====

undefined8
FUN_0063d974(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) &&
     (*(int *)((long)param_5 + 0xc) == 3)) {
    dVar2 = fmod(*param_3,*param_5);
    *param_2 = dVar2;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 0063d9d8  FUN_0063d9d8 =====

void FUN_0063d9d8(undefined8 param_1,double *param_2,double *param_3,int param_4,undefined8 param_5,
                 int param_6)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  uVar2 = 0xffffffff;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((param_4 < 3) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    dVar3 = frexp(*param_3,&local_2c);
    uVar2 = 2;
    *param_2 = dVar3;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    *(undefined4 *)((long)param_2 + 0x1c) = 3;
    param_2[2] = (double)local_2c;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0063da68  FUN_0063da68 =====

undefined8
FUN_0063da68(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) &&
     (*(int *)((long)param_5 + 0xc) == 3)) {
    dVar2 = ldexp(*param_3,(int)*param_5);
    *param_2 = dVar2;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 0063dad0  FUN_0063dad0 =====

undefined8
FUN_0063dad0(undefined8 param_1,double *param_2,double *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    dVar2 = log10(*param_3);
    *param_2 = dVar2;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 0063db24  FUN_0063db24 =====

undefined8
FUN_0063db24(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double __x;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    dVar2 = *param_3;
    if (param_6 == 1) {
      dVar3 = log(dVar2);
    }
    else {
      if (*(int *)((long)param_5 + 0xc) != 3) {
        return 0xffffffff;
      }
      __x = *param_5;
      if (__x == 2.0) {
        dVar3 = log2(dVar2);
      }
      else if (__x == 10.0) {
        dVar3 = log10(dVar2);
      }
      else {
        dVar3 = log(dVar2);
        dVar2 = log(__x);
        dVar3 = dVar3 / dVar2;
      }
    }
    uVar1 = 1;
    *param_2 = dVar3;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
  }
  return uVar1;
}


// ===== 0063dbe0  FUN_0063dbe0 =====

undefined8
FUN_0063dbe0(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
            uint param_6)

{
  undefined8 uVar1;
  long lVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < (int)param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) &&
     (*(int *)((long)param_5 + 0xc) == 3)) {
    dVar4 = *param_3;
    dVar5 = *param_5;
    if (dVar5 == dVar4 || dVar5 < dVar4 != (NAN(dVar5) || NAN(dVar4))) {
      dVar5 = dVar4;
    }
    if (2 < param_6) {
      lVar2 = (ulong)(param_6 + 1) - 3;
      pdVar3 = param_5 + 2;
      dVar4 = dVar5;
      do {
        if (*(int *)((long)pdVar3 + 0xc) != 3) {
          return 0xffffffff;
        }
        dVar5 = *pdVar3;
        if (dVar5 == dVar4 || dVar5 < dVar4 != (NAN(dVar5) || NAN(dVar4))) {
          dVar5 = dVar4;
        }
        lVar2 = lVar2 + -1;
        pdVar3 = pdVar3 + 2;
        dVar4 = dVar5;
      } while (lVar2 != 0);
    }
    uVar1 = 1;
    *param_2 = dVar5;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
  }
  return uVar1;
}


// ===== 0063dc6c  FUN_0063dc6c =====

undefined8
FUN_0063dc6c(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
            uint param_6)

{
  undefined8 uVar1;
  long lVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < (int)param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) &&
     (*(int *)((long)param_5 + 0xc) == 3)) {
    dVar5 = *param_5;
    if (*param_3 <= *param_5) {
      dVar5 = *param_3;
    }
    if (2 < param_6) {
      lVar2 = (ulong)(param_6 + 1) - 3;
      pdVar3 = param_5 + 2;
      dVar4 = dVar5;
      do {
        if (*(int *)((long)pdVar3 + 0xc) != 3) {
          return 0xffffffff;
        }
        dVar5 = *pdVar3;
        if (dVar4 <= *pdVar3) {
          dVar5 = dVar4;
        }
        lVar2 = lVar2 + -1;
        pdVar3 = pdVar3 + 2;
        dVar4 = dVar5;
      } while (lVar2 != 0);
    }
    uVar1 = 1;
    *param_2 = dVar5;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
  }
  return uVar1;
}


// ===== 0063dcf8  FUN_0063dcf8 =====

void FUN_0063dcf8(undefined8 param_1,double *param_2,double *param_3,int param_4,undefined8 param_5,
                 int param_6)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  double local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  uVar2 = 0xffffffff;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((param_4 < 3) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    dVar3 = modf(*param_3,&local_30);
    uVar2 = 2;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    param_2[2] = dVar3;
    *param_2 = local_30;
    *(undefined4 *)((long)param_2 + 0x1c) = 3;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0063dd84  FUN_0063dd84 =====

undefined8
FUN_0063dd84(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) &&
     (*(int *)((long)param_5 + 0xc) == 3)) {
    dVar2 = pow(*param_3,*param_5);
    *param_2 = dVar2;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 0063dde8  FUN_0063dde8 =====

undefined8
FUN_0063dde8(undefined8 param_1,double *param_2,double *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  
  dVar1 = DAT_0024e8d8;
  uVar2 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    dVar3 = *param_3;
    uVar2 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    *param_2 = dVar3 * dVar1;
  }
  return uVar2;
}


// ===== 0063de2c  FUN_0063de2c =====

undefined8
FUN_0063de2c(undefined8 param_1,double *param_2,double *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    dVar2 = sinh(*param_3);
    *param_2 = dVar2;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 0063de80  FUN_0063de80 =====

undefined8
FUN_0063de80(undefined8 param_1,double *param_2,double *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    dVar2 = sin(*param_3);
    *param_2 = dVar2;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 0063ded4  FUN_0063ded4 =====

undefined8
FUN_0063ded4(undefined8 param_1,double *param_2,double *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    dVar2 = *param_3;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    *param_2 = SQRT(dVar2);
  }
  return uVar1;
}


// ===== 0063df0c  FUN_0063df0c =====

undefined8
FUN_0063df0c(undefined8 param_1,double *param_2,double *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    dVar2 = tanh(*param_3);
    *param_2 = dVar2;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 0063df60  FUN_0063df60 =====

undefined8
FUN_0063df60(undefined8 param_1,double *param_2,double *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    dVar2 = tan(*param_3);
    *param_2 = dVar2;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 0063dfb4  FUN_0063dfb4 =====

undefined8
FUN_0063dfb4(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) &&
     ((*(int *)((long)param_5 + 0xc) == 3 && (dVar2 = *param_5, (uint)(int)dVar2 < 0x20)))) {
    dVar3 = *param_3;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    *param_2 = (double)(uint)((int)(long)dVar3 >> ((int)dVar2 & 0x1fU));
  }
  return uVar1;
}


// ===== 0063e014  FUN_0063e014 =====

undefined8
FUN_0063e014(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
            uint param_6)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  double *pdVar4;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < (int)param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) &&
     (*(int *)((long)param_5 + 0xc) == 3)) {
    uVar2 = (uint)(long)*param_5 & (uint)(long)*param_3;
    if (2 < param_6) {
      lVar3 = (ulong)(param_6 + 1) - 3;
      pdVar4 = param_5 + 2;
      do {
        if (*(int *)((long)pdVar4 + 0xc) != 3) {
          return 0xffffffff;
        }
        lVar3 = lVar3 + -1;
        uVar2 = uVar2 & (uint)(long)*pdVar4;
        pdVar4 = pdVar4 + 2;
      } while (lVar3 != 0);
    }
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    *param_2 = (double)uVar2;
  }
  return uVar1;
}


// ===== 0063e0a8  FUN_0063e0a8 =====

undefined8
FUN_0063e0a8(undefined8 param_1,double *param_2,double *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    dVar2 = *param_3;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    *param_2 = (double)~(uint)(long)dVar2;
  }
  return uVar1;
}


// ===== 0063e0ec  FUN_0063e0ec =====

undefined8
FUN_0063e0ec(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
            uint param_6)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  double *pdVar4;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < (int)param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) &&
     (*(int *)((long)param_5 + 0xc) == 3)) {
    uVar2 = (uint)(long)*param_5 | (uint)(long)*param_3;
    if (2 < param_6) {
      lVar3 = (ulong)(param_6 + 1) - 3;
      pdVar4 = param_5 + 2;
      do {
        if (*(int *)((long)pdVar4 + 0xc) != 3) {
          return 0xffffffff;
        }
        lVar3 = lVar3 + -1;
        uVar2 = uVar2 | (uint)(long)*pdVar4;
        pdVar4 = pdVar4 + 2;
      } while (lVar3 != 0);
    }
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    *param_2 = (double)uVar2;
  }
  return uVar1;
}


// ===== 0063e180  FUN_0063e180 =====

undefined8
FUN_0063e180(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
            uint param_6)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  double *pdVar4;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < (int)param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) &&
     (*(int *)((long)param_5 + 0xc) == 3)) {
    uVar2 = (uint)(long)*param_5 ^ (uint)(long)*param_3;
    if (2 < param_6) {
      lVar3 = (ulong)(param_6 + 1) - 3;
      pdVar4 = param_5 + 2;
      do {
        if (*(int *)((long)pdVar4 + 0xc) != 3) {
          return 0xffffffff;
        }
        lVar3 = lVar3 + -1;
        uVar2 = uVar2 ^ (uint)(long)*pdVar4;
        pdVar4 = pdVar4 + 2;
      } while (lVar3 != 0);
    }
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    *param_2 = (double)uVar2;
  }
  return uVar1;
}


// ===== 0063e214  FUN_0063e214 =====

undefined8
FUN_0063e214(undefined8 param_1,uint *param_2,double *param_3,int param_4,double *param_5,
            uint param_6)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  double *pdVar4;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < (int)param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) &&
     (*(int *)((long)param_5 + 0xc) == 3)) {
    uVar2 = (uint)(long)*param_5 & (uint)(long)*param_3;
    if (2 < param_6) {
      lVar3 = (ulong)(param_6 + 1) - 3;
      pdVar4 = param_5 + 2;
      do {
        if (*(int *)((long)pdVar4 + 0xc) != 3) {
          return 0xffffffff;
        }
        lVar3 = lVar3 + -1;
        uVar2 = uVar2 & (uint)(long)*pdVar4;
        pdVar4 = pdVar4 + 2;
      } while (lVar3 != 0);
    }
    uVar1 = 1;
    param_2[3] = 1;
    *param_2 = (uint)(uVar2 != 0);
  }
  return uVar1;
}


// ===== 0063e2a8  FUN_0063e2a8 =====

undefined8
FUN_0063e2a8(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
            int param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  
  if (1 < param_4) {
    return 0xffffffff;
  }
  if (param_6 < 2) {
    return 0xffffffff;
  }
  if (*(int *)((long)param_3 + 0xc) != 3) {
    return 0xffffffff;
  }
  if (*(int *)((long)param_5 + 0xc) != 3) {
    return 0xffffffff;
  }
  uVar1 = (uint)*param_5;
  dVar4 = *param_3;
  if (param_6 == 2) {
    if (0x1f < uVar1) {
      return 0xffffffff;
    }
    uVar2 = 1;
  }
  else {
    if (*(int *)((long)param_5 + 0x1c) != 3) {
      return 0xffffffff;
    }
    if ((int)uVar1 < 0) {
      return 0xffffffff;
    }
    iVar3 = (int)param_5[2];
    if (iVar3 < 1) {
      return 0xffffffff;
    }
    if (0x20 < (int)(iVar3 + uVar1)) {
      return 0xffffffff;
    }
    uVar2 = ~(-2 << (ulong)(iVar3 - 1U & 0x1f));
  }
  *(undefined4 *)((long)param_2 + 0xc) = 3;
  *param_2 = (double)((uint)(long)dVar4 >> (ulong)(uVar1 & 0x1f) & uVar2);
  return 1;
}


// ===== 0063e354  FUN_0063e354 =====

undefined8
FUN_0063e354(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) &&
     (*(int *)((long)param_5 + 0xc) == 3)) {
    dVar2 = *param_5;
    dVar3 = *param_3;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    *param_2 = (double)((uint)(long)dVar3 >> (-(int)dVar2 & 0x1fU) |
                       (uint)(long)dVar3 << 0x20 - (-(int)dVar2 & 0x1fU));
  }
  return uVar1;
}


// ===== 0063e3b0  FUN_0063e3b0 =====

undefined8
FUN_0063e3b0(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) &&
     ((*(int *)((long)param_5 + 0xc) == 3 && (dVar2 = *param_5, (uint)(int)dVar2 < 0x20)))) {
    dVar3 = *param_3;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    *param_2 = (double)(uint)((int)(long)dVar3 << (ulong)((int)dVar2 & 0x1f));
  }
  return uVar1;
}


// ===== 0063e410  FUN_0063e410 =====

undefined8
FUN_0063e410(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
            int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  
  if (1 < param_4) {
    return 0xffffffff;
  }
  if (param_6 < 3) {
    return 0xffffffff;
  }
  if (*(int *)((long)param_3 + 0xc) != 3) {
    return 0xffffffff;
  }
  if (*(int *)((long)param_5 + 0xc) != 3) {
    return 0xffffffff;
  }
  if (*(int *)((long)param_5 + 0x1c) != 3) {
    return 0xffffffff;
  }
  uVar1 = (uint)param_5[2];
  dVar5 = *param_3;
  if (param_6 == 3) {
    if (0x1f < uVar1) {
      return 0xffffffff;
    }
    uVar2 = (uint)(long)*param_5 & 1;
    uVar3 = 1;
  }
  else {
    if (*(int *)((long)param_5 + 0x2c) != 3) {
      return 0xffffffff;
    }
    if ((int)uVar1 < 0) {
      return 0xffffffff;
    }
    iVar4 = (int)param_5[4];
    if (iVar4 < 1) {
      return 0xffffffff;
    }
    if (0x20 < (int)(iVar4 + uVar1)) {
      return 0xffffffff;
    }
    uVar2 = -2 << (ulong)(iVar4 - 1U & 0x1f);
    uVar3 = ~uVar2;
    uVar2 = (uint)(long)*param_5 & (uVar2 ^ 0xffffffff);
  }
  *(undefined4 *)((long)param_2 + 0xc) = 3;
  *param_2 = (double)((uint)(long)dVar5 & (uVar3 << (ulong)(uVar1 & 0x1f) ^ 0xffffffff) |
                     uVar2 << (ulong)(uVar1 & 0x1f));
  return 1;
}


// ===== 0063e4e0  FUN_0063e4e0 =====

undefined8
FUN_0063e4e0(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) &&
     (*(int *)((long)param_5 + 0xc) == 3)) {
    dVar2 = *param_3;
    dVar3 = *param_5;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    *param_2 = (double)((uint)(long)dVar2 >> ((int)dVar3 & 0x1fU) |
                       (uint)(long)dVar2 << 0x20 - ((int)dVar3 & 0x1fU));
  }
  return uVar1;
}


// ===== 0063e538  FUN_0063e538 =====

undefined8
FUN_0063e538(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) &&
     ((*(int *)((long)param_5 + 0xc) == 3 && (dVar2 = *param_5, (uint)(int)dVar2 < 0x20)))) {
    dVar3 = *param_3;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    *param_2 = (double)((uint)(long)dVar3 >> (ulong)((int)dVar2 & 0x1f));
  }
  return uVar1;
}


// ===== 0063e598  FUN_0063e598 =====

undefined8
FUN_0063e598(long param_1,undefined8 *param_2,long param_3,int param_4,undefined8 param_5,
            int param_6)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0xffffffff;
  if ((param_4 < 2) && (0 < param_6)) {
    iVar1 = *(int *)(param_3 + 0xc);
    lVar3 = *(long *)(param_1 + 0x18);
    uVar2 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 6;
    *param_2 = *(undefined8 *)(lVar3 + (long)iVar1 * 8 + 0x398);
  }
  return uVar2;
}


// ===== 0063e5d4  FUN_0063e5d4 =====

ulong FUN_0063e5d4(undefined8 param_1,double *param_2,long *param_3,uint param_4,double *param_5,
                  int param_6)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  
  if (((1 < param_6) && (*(int *)((long)param_3 + 0xc) == 6)) &&
     (*(int *)((long)param_5 + 0xc) == 3)) {
    uVar4 = (uint)*param_5;
    uVar6 = uVar4;
    if (param_6 != 2) {
      if (*(int *)((long)param_5 + 0x1c) == 3) {
        uVar6 = (uint)param_5[2];
      }
      else {
        uVar6 = 0;
      }
    }
    if ((int)uVar4 < 1) {
      return 0xffffffff;
    }
    if ((int)uVar6 < (int)uVar4) {
      return 0xffffffff;
    }
    if ((int)uVar6 <= *(int *)(*param_3 + 0x14)) {
      uVar1 = (uVar6 - uVar4) + 1;
      uVar3 = (ulong)uVar1;
      if ((int)param_4 < 0) {
        param_4 = 1;
      }
      if (uVar1 == param_4) {
        if ((int)(uVar6 - uVar4) < 0) {
          return uVar3;
        }
        pbVar5 = (byte *)(*param_3 + (ulong)uVar4 + 0x17);
        uVar7 = uVar3;
        do {
          bVar2 = *pbVar5;
          uVar7 = uVar7 - 1;
          *(undefined4 *)((long)param_2 + 0xc) = 3;
          *param_2 = (double)bVar2;
          param_2 = param_2 + 2;
          pbVar5 = pbVar5 + 1;
        } while (uVar7 != 0);
        return uVar3;
      }
    }
  }
  return 0xffffffff;
}


// ===== 0063e698  FUN_0063e698 =====

undefined8
FUN_0063e698(long param_1,undefined8 *param_2,double *param_3,int param_4,double *param_5,
            int param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  double dVar5;
  undefined1 local_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = 0xffffffff;
  if ((1 < param_4) || (7 < param_6)) goto LAB_0063e774;
  if (*(ulong *)(*(long *)(param_1 + 0x18) + 0x48) < *(ulong *)(*(long *)(param_1 + 0x18) + 0x40)) {
    if (param_6 < 1) {
LAB_0063e748:
      local_30[param_6] = 0;
      uVar2 = FUN_0062b178(param_1,local_30,(long)param_6);
      *param_2 = uVar2;
      *(undefined4 *)((long)param_2 + 0xc) = 6;
      uVar2 = 1;
      goto LAB_0063e774;
    }
    if (*(int *)((long)param_3 + 0xc) == 3) {
      if ((uint)(int)*param_3 < 0x100) {
        local_30[0] = (undefined1)(int)*param_3;
        if (param_6 != 1) {
          lVar3 = (ulong)(param_6 + 1) - 2;
          puVar4 = (undefined1 *)((ulong)local_30 | 1);
          do {
            if (*(int *)((long)param_5 + 0xc) != 3) goto LAB_0063e770;
            dVar5 = *param_5;
            if (0xff < (uint)(int)dVar5) goto LAB_0063e770;
            lVar3 = lVar3 + -1;
            param_5 = param_5 + 2;
            *puVar4 = (char)(int)dVar5;
            puVar4 = puVar4 + 1;
          } while (lVar3 != 0);
        }
        goto LAB_0063e748;
      }
    }
  }
LAB_0063e770:
  uVar2 = 0xffffffff;
LAB_0063e774:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0063e79c  FUN_0063e79c =====

undefined8
FUN_0063e79c(undefined8 param_1,double *param_2,long *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 6)) {
    uVar2 = 1;
    iVar1 = *(int *)(*param_3 + 0x14);
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    *param_2 = (double)iVar1;
  }
  return uVar2;
}


// ===== 0063e7dc  FUN_0063e7dc =====

undefined8
FUN_0063e7dc(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4,
            undefined8 param_5,int param_6)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_4 < 2) && (0 < param_6)) {
    uVar1 = FUN_00631410(param_1,param_3);
    *param_2 = uVar1;
    *(undefined4 *)((long)param_2 + 0xc) = 6;
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 0063e82c  FUN_0063e82c =====

undefined8
FUN_0063e82c(long param_1,undefined8 *param_2,long *param_3,int param_4,double *param_5,int param_6)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  
  if (1 < param_4) {
    return 0xffffffff;
  }
  if (param_6 < 3) {
    return 0xffffffff;
  }
  if ((((*(int *)((long)param_3 + 0xc) == 6) && (*(int *)((long)param_5 + 0xc) == 3)) &&
      (*(int *)((long)param_5 + 0x1c) == 3)) &&
     (*(ulong *)(*(long *)(param_1 + 0x18) + 0x48) < *(ulong *)(*(long *)(param_1 + 0x18) + 0x40)))
  {
    uVar2 = (uint)*param_5;
    if ((int)uVar2 < 1) {
      return 0xffffffff;
    }
    iVar3 = (int)param_5[2];
    if (iVar3 < (int)uVar2) {
      return 0xffffffff;
    }
    if (iVar3 - 1U < *(uint *)(*param_3 + 0x14)) {
      uVar1 = FUN_0062b178(param_1,*param_3 + (ulong)uVar2 + 0x17,(long)(int)((iVar3 - uVar2) + 1));
      *param_2 = uVar1;
      *(undefined4 *)((long)param_2 + 0xc) = 6;
      return 1;
    }
  }
  return 0xffffffff;
}


// ===== 0063e8f8  FUN_0063e8f8 =====

undefined8
FUN_0063e8f8(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (2 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) &&
     ((*(int *)((long)param_5 + 0xc) == 3 && (*(int *)((long)param_5 + 0x1c) == 3)))) {
    dVar3 = *param_5;
    dVar2 = param_5[2];
    if (dVar3 <= dVar2) {
      dVar4 = *param_3;
      uVar1 = 1;
      *(undefined4 *)((long)param_2 + 0xc) = 3;
      if (dVar3 <= dVar4) {
        dVar3 = dVar4;
      }
      if (dVar3 == dVar2 || dVar3 < dVar2 != (NAN(dVar3) || NAN(dVar2))) {
        dVar2 = dVar3;
      }
      *param_2 = dVar2;
    }
  }
  return uVar1;
}


// ===== 0063e968  FUN_0063e968 =====

undefined8
FUN_0063e968(undefined8 param_1,undefined8 *param_2,double *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    dVar2 = *param_3;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    uVar3 = 0xbff0000000000000;
    if (dVar2 >= 0.0) {
      uVar3 = 0;
    }
    uVar4 = 0x3ff0000000000000;
    if (dVar2 == 0.0 || dVar2 < 0.0 != NAN(dVar2)) {
      uVar4 = uVar3;
    }
    *param_2 = uVar4;
  }
  return uVar1;
}


// ===== 0063e9b4  FUN_0063e9b4 =====

undefined8
FUN_0063e9b4(undefined8 param_1,long *param_2,double *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    dVar2 = *param_3;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    *param_2 = (long)dVar2;
  }
  return uVar1;
}


// ===== 0063e9ec  FUN_0063e9ec =====

undefined8
FUN_0063e9ec(long param_1,long *param_2,long *param_3,int param_4,double *param_5,int param_6)

{
  float fVar1;
  undefined8 uVar2;
  double *pdVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  
  uVar2 = 0xffffffff;
  if ((((param_4 < 2) && (2 < param_6)) && (*(int *)((long)param_3 + 0xc) == 7)) &&
     (fVar1 = *(float *)((long)param_5 + 0xc), fVar1 != 0.0)) {
    if (fVar1 == 7.00649e-45) {
      if (NAN(*(float *)param_5)) {
        return 0xffffffff;
      }
      if (NAN(*(float *)((long)param_5 + 4))) {
        return 0xffffffff;
      }
      if (NAN(*(float *)(param_5 + 1))) {
        return 0xffffffff;
      }
    }
    else if ((fVar1 == 4.2039e-45) && (NAN(*param_5))) {
      return 0xffffffff;
    }
    lVar4 = *param_3;
    if (*(char *)(lVar4 + 4) == '\0') {
      lVar5 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = lVar5;
      pdVar3 = (double *)FUN_0062f4a4(param_1,lVar4,param_5);
      dVar6 = param_5[2];
      pdVar3[1] = param_5[3];
      *pdVar3 = dVar6;
      if (((5 < (int)*(float *)((long)param_5 + 0x1c)) && ((*(byte *)(lVar4 + 1) >> 2 & 1) != 0)) &&
         ((*(byte *)((long)param_5[2] + 1) & 3) != 0)) {
        FUN_00624e54(*(undefined8 *)(param_1 + 0x18),lVar4);
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}


// ===== 0063eae0  FUN_0063eae0 =====

undefined8
FUN_0063eae0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4,
            undefined8 param_5,int param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 7)) {
    puVar2 = (undefined8 *)FUN_0062f390(*param_3,param_5);
    uVar1 = 1;
    uVar3 = *puVar2;
    param_2[1] = puVar2[1];
    *param_2 = uVar3;
  }
  return uVar1;
}


// ===== 0063eb38  FUN_0063eb38 =====

undefined8
FUN_0063eb38(undefined8 param_1,undefined4 *param_2,undefined8 param_3,int param_4,
            undefined8 param_5,int param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_4 < 2) && (1 < param_6)) {
    uVar1 = FUN_0062987c(param_3,param_5);
    uVar2 = 1;
    *param_2 = uVar1;
    param_2[3] = 1;
  }
  return uVar2;
}


// ===== 0063eb84  FUN_0063eb84 =====

undefined8
FUN_0063eb84(long param_1,undefined8 param_2,long *param_3,int param_4,long *param_5,int param_6)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = 0xffffffff;
  if (((param_4 < 1) && (param_6 == 2)) && (*(int *)((long)param_3 + 0xc) == 7)) {
    lVar4 = *param_3;
    if (*(char *)(lVar4 + 4) == '\0') {
      iVar1 = FUN_0062f6fc(lVar4);
      plVar3 = (long *)FUN_0062f588(param_1,lVar4,iVar1 + 1);
      lVar5 = *param_5;
      plVar3[1] = param_5[1];
      *plVar3 = lVar5;
      if ((5 < *(int *)((long)param_5 + 0xc)) && ((*(byte *)(lVar4 + 1) >> 2 & 1) != 0)) {
        if ((*(byte *)(*param_5 + 1) & 3) != 0) {
          FUN_00624e54(*(undefined8 *)(param_1 + 0x18),lVar4);
        }
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}


// ===== 0063ec2c  FUN_0063ec2c =====

uint FUN_0063ec2c(long param_1,undefined8 *param_2,long *param_3,int param_4,double *param_5,
                 int param_6)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (-1 < param_4) {
    return 0xffffffff;
  }
  if (param_6 < 1) {
    return 0xffffffff;
  }
  if (*(int *)((long)param_3 + 0xc) == 7) {
    lVar6 = *param_3;
    if (param_6 == 3) {
      if (*(int *)((long)param_5 + 0xc) != 3) {
        return 0xffffffff;
      }
      if (*(int *)((long)param_5 + 0x1c) != 3) {
        return 0xffffffff;
      }
      if (*param_5 != 1.0) {
        return 0xffffffff;
      }
      uVar1 = (uint)param_5[2];
    }
    else {
      if (param_6 != 1) {
        return 0xffffffff;
      }
      uVar1 = FUN_0062f6fc(lVar6);
    }
    if ((-1 < (int)uVar1) && ((int)uVar1 <= *(int *)(lVar6 + 8))) {
      if ((int)((ulong)(*(long *)(param_1 + 0x28) - (long)param_2) >> 4) < (int)uVar1) {
        return 0xffffffff;
      }
      if (uVar1 + param_6 < 0x1f41) {
        if (uVar1 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = (ulong)uVar1;
          puVar3 = *(undefined8 **)(lVar6 + 0x18);
          puVar4 = param_2;
          uVar5 = uVar2;
          do {
            uVar7 = *puVar3;
            uVar5 = uVar5 - 1;
            puVar4[1] = puVar3[1];
            *puVar4 = uVar7;
            puVar3 = puVar3 + 2;
            puVar4 = puVar4 + 2;
          } while (uVar5 != 0);
        }
        if (*(undefined8 **)(*(long *)(param_1 + 0x20) + 0x10) < param_2 + uVar2 * 2) {
          *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x10) = param_2 + uVar2 * 2;
          return uVar1;
        }
        return uVar1;
      }
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}


// ===== 0063ed50  FUN_0063ed50 =====

undefined8
FUN_0063ed50(undefined8 param_1,float *param_2,double *param_3,int param_4,double *param_5,
            uint param_6)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < (int)param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) &&
     (*(int *)((long)param_5 + 0xc) == 3)) {
    fVar4 = 0.0;
    dVar2 = *param_3;
    dVar3 = *param_5;
    if (2 < param_6) {
      if (*(int *)((long)param_5 + 0x1c) != 3) {
        return 0xffffffff;
      }
      fVar4 = (float)param_5[2];
    }
    uVar1 = 1;
    param_2[3] = 7.00649e-45;
    param_2[1] = (float)dVar3;
    param_2[2] = fVar4;
    *param_2 = (float)dVar2;
  }
  return uVar1;
}


// ===== 0063edc4  FUN_0063edc4 =====

undefined8
FUN_0063edc4(undefined8 param_1,double *param_2,double *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    dVar2 = *param_3;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    *param_2 = (double)(int)LZCOUNT((int)(long)dVar2);
  }
  return uVar1;
}


// ===== 0063ee08  FUN_0063ee08 =====

undefined8
FUN_0063ee08(undefined8 param_1,double *param_2,double *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    uVar2 = 1;
    uVar1 = ((uint)(long)*param_3 & 0xaaaaaaaa) >> 1 | ((uint)(long)*param_3 & 0x55555555) << 1;
    uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
    uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
    uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    *param_2 = (double)(int)LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
  }
  return uVar2;
}


// ===== 0063ee50  FUN_0063ee50 =====

undefined8
FUN_0063ee50(long param_1,double *param_2,double *param_3,int param_4,undefined8 param_5,int param_6
            )

{
  uint uVar1;
  double *pdVar2;
  undefined8 uVar3;
  long *plVar4;
  double dVar5;
  
  uVar3 = 0xffffffff;
  if ((param_4 == 1) && (param_6 == 1)) {
    plVar4 = *(long **)(*(long *)(param_1 + 0x20) + 8);
    uVar1 = ~(uint)*(byte *)(*(long *)(*plVar4 + 0x20) + 4) +
            (int)((ulong)(*(long *)(param_1 + 0x10) - (long)plVar4) >> 4);
    if (*(int *)((long)param_3 + 0xc) == 6) {
      if (*(char *)((long)*param_3 + 0x18) != '#') {
        return 0xffffffff;
      }
      *(undefined4 *)((long)param_2 + 0xc) = 3;
      *param_2 = (double)(int)uVar1;
    }
    else {
      if (*(int *)((long)param_3 + 0xc) != 3) {
        return 0xffffffff;
      }
      if (uVar1 <= (int)*param_3 - 1U) {
        return 0xffffffff;
      }
      pdVar2 = (double *)
               (*(long *)(param_1 + 0x10) + (long)(int)uVar1 * -0x10 +
               (long)(int)((int)*param_3 - 1U) * 0x10);
      dVar5 = *pdVar2;
      param_2[1] = pdVar2[1];
      *param_2 = dVar5;
    }
    uVar3 = 1;
  }
  return uVar3;
}


// ===== 0063eef0  FUN_0063eef0 =====

undefined8
FUN_0063eef0(undefined8 param_1,double *param_2,long *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  
  uVar2 = 0xffffffff;
  if ((param_4 < 2) && (0 < param_6)) {
    if (*(int *)((long)param_3 + 0xc) == 6) {
      dVar3 = (double)NEON_ucvtf((ulong)*(uint *)(*param_3 + 0x14));
    }
    else {
      if (*(int *)((long)param_3 + 0xc) != 7) {
        return 0xffffffff;
      }
      iVar1 = FUN_0062f6fc(*param_3);
      dVar3 = (double)iVar1;
    }
    uVar2 = 1;
    *param_2 = dVar3;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
  }
  return uVar2;
}


// ===== 0063ef68  FUN_0063ef68 =====

undefined8
FUN_0063ef68(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    dVar2 = *param_5;
    dVar3 = *param_3;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    *param_2 = (double)((uint)(long)dVar3 >> (ulong)((int)dVar2 & 0x1f) &
                       (-2 << (ulong)((int)dVar2 >> 5 & 0x1f) ^ 0xffffffffU));
  }
  return uVar1;
}


// ===== 0063efc4  FUN_0063efc4 =====

undefined8
FUN_0063efc4(long param_1,long *param_2,long *param_3,int param_4,undefined8 param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar6;
  long lVar7;
  long *plVar5;
  
  uVar3 = 0xffffffff;
  if ((param_4 < 2) && (0 < param_6)) {
    iVar1 = *(int *)((long)param_3 + 0xc);
    if (iVar1 == 9) {
      plVar5 = (long *)(*param_3 + 8);
    }
    else if (iVar1 == 7) {
      plVar5 = (long *)(*param_3 + 0x10);
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 0x18) + (long)iVar1 * 8 + 0x328);
    }
    lVar4 = *plVar5;
    if (lVar4 == 0) {
      *(undefined4 *)((long)param_2 + 0xc) = 0;
    }
    else {
      lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x4a8);
      plVar5 = (long *)(*(long *)(lVar4 + 0x20) +
                       (ulong)(*(uint *)(lVar7 + 0x10) &
                              ~(-1 << (ulong)(*(byte *)(lVar4 + 6) & 0x1f))) * 0x20);
      while( true ) {
        uVar2 = *(uint *)((long)plVar5 + 0x1c);
        if ((((uVar2 & 0xf) == 6) && (plVar6 = plVar5, plVar5[2] == lVar7)) ||
           (plVar6 = &DAT_00285948, uVar2 < 0x10)) break;
        plVar5 = plVar5 + ((long)((ulong)uVar2 << 0x20) >> 0x24) * 4;
      }
      if (*(int *)((long)plVar6 + 0xc) == 0) {
        *param_2 = lVar4;
        *(undefined4 *)((long)param_2 + 0xc) = 7;
      }
      else {
        lVar4 = *plVar6;
        param_2[1] = plVar6[1];
        *param_2 = lVar4;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}


// ===== 0063f0b4  FUN_0063f0b4 =====

undefined8
FUN_0063f0b4(long param_1,long *param_2,long *param_3,int param_4,long *param_5,int param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0xffffffff;
  if ((param_4 < 2) && (1 < param_6)) {
    if ((*(int *)((long)param_3 + 0xc) == 7) && (*(int *)((long)param_5 + 0xc) == 7)) {
      lVar3 = *param_3;
      if ((*(char *)(lVar3 + 4) == '\0') && (*(long *)(lVar3 + 0x10) == 0)) {
        lVar1 = *param_5;
        *(long *)(lVar3 + 0x10) = lVar1;
        if (((*(byte *)(lVar3 + 1) >> 2 & 1) != 0) && ((*(byte *)(lVar1 + 1) & 3) != 0)) {
          FUN_00624e24(*(undefined8 *)(param_1 + 0x18),lVar3);
        }
        *param_2 = lVar3;
        *(undefined4 *)((long)param_2 + 0xc) = 7;
        uVar2 = 1;
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}


// ===== 0063f15c  FUN_0063f15c =====

void FUN_0063f15c(undefined8 param_1,long *param_2,long *param_3,int param_4,undefined8 param_5,
                 int param_6)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  uVar3 = 0xffffffff;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_4 < 2) && (param_6 == 1)) {
    if ((*(int *)((long)param_3 + 0xc) == 3) ||
       ((*(int *)((long)param_3 + 0xc) == 6 &&
        (iVar2 = FUN_00629a28(*param_3 + 0x18,&local_40), param_3 = &local_40, iVar2 != 0)))) {
      uVar4 = 3;
      *param_2 = *param_3;
    }
    else {
      uVar4 = 0;
    }
    uVar3 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = uVar4;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 0063f208  FUN_0063f208 =====

void FUN_0063f208(long param_1,undefined8 *param_2,int *param_3,int param_4,undefined8 param_5,
                 int param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar2 = tpidr_el0;
  uVar3 = 0xffffffff;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((1 < param_4) || (param_6 < 1)) goto LAB_0063f334;
  iVar1 = param_3[3];
  if (iVar1 < 3) {
    if (iVar1 != 0) {
      if (iVar1 != 1) goto LAB_0063f334;
      if (*param_3 == 0) {
        pcVar5 = "false";
        uVar3 = 5;
      }
      else {
        pcVar5 = "true";
        uVar3 = 4;
      }
      uVar3 = FUN_0062b178(param_1,pcVar5,uVar3);
      *param_2 = uVar3;
      goto LAB_0063f32c;
    }
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x398);
LAB_0063f300:
    *param_2 = uVar3;
    *(undefined4 *)((long)param_2 + 0xc) = 6;
  }
  else {
    if (iVar1 == 3) {
      if (*(ulong *)(*(long *)(param_1 + 0x18) + 0x40) <=
          *(ulong *)(*(long *)(param_1 + 0x18) + 0x48)) goto LAB_0063f334;
      lVar4 = FUN_006292c0(*(undefined8 *)param_3,auStack_68);
    }
    else {
      if (iVar1 != 4) {
        if (iVar1 != 6) goto LAB_0063f334;
        uVar3 = *(undefined8 *)param_3;
        goto LAB_0063f300;
      }
      if (*(ulong *)(*(long *)(param_1 + 0x18) + 0x40) <=
          *(ulong *)(*(long *)(param_1 + 0x18) + 0x48)) goto LAB_0063f334;
      lVar4 = FUN_006297e4(auStack_68,*(undefined8 *)param_3);
    }
    uVar3 = FUN_0062b178(param_1,auStack_68,lVar4 - (long)auStack_68);
    *param_2 = uVar3;
LAB_0063f32c:
    *(undefined4 *)((long)param_2 + 0xc) = 6;
  }
  uVar3 = 1;
LAB_0063f334:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 0063f35c  FUN_0063f35c =====

undefined8
FUN_0063f35c(undefined8 param_1,double *param_2,double *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    uVar2 = 1;
    uVar1 = ((uint)(long)*param_3 & 0xff00ff00) >> 8 | ((uint)(long)*param_3 & 0xff00ff) << 8;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    *param_2 = (double)(uVar1 >> 0x10 | uVar1 << 0x10);
  }
  return uVar2;
}


// ===== 0063f3a0  FUN_0063f3a0 =====

undefined8
FUN_0063f3a0(undefined8 param_1,double *param_2,long *param_3,int param_4,double *param_5,
            int param_6)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 0xb)) &&
     (*(int *)((long)param_5 + 0xc) == 3)) {
    if ((uint)(int)*param_5 < *(uint *)(*param_3 + 4)) {
      uVar2 = 1;
      cVar1 = *(char *)(*param_3 + (ulong)(uint)(int)*param_5 + 8);
      *(undefined4 *)((long)param_2 + 0xc) = 3;
      *param_2 = (double)(int)cVar1;
    }
  }
  return uVar2;
}


// ===== 0063f404  FUN_0063f404 =====

undefined8
FUN_0063f404(undefined8 param_1,undefined8 *param_2,long *param_3,int param_4,double *param_5,
            int param_6)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 0xb)) &&
     (*(int *)((long)param_5 + 0xc) == 3)) {
    if ((uint)(int)*param_5 < *(uint *)(*param_3 + 4)) {
      uVar1 = 1;
      bVar2 = *(byte *)(*param_3 + (ulong)(uint)(int)*param_5 + 8);
      *(undefined4 *)((long)param_2 + 0xc) = 3;
      uVar3 = NEON_ucvtf((ulong)bVar2);
      *param_2 = uVar3;
    }
  }
  return uVar1;
}


// ===== 0063f468  FUN_0063f468 =====

undefined8
FUN_0063f468(undefined8 param_1,undefined8 param_2,long *param_3,int param_4,double *param_5,
            int param_6)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 1) && (2 < param_6)) && (*(int *)((long)param_3 + 0xc) == 0xb)) &&
     ((*(int *)((long)param_5 + 0xc) == 3 && (*(int *)((long)param_5 + 0x1c) == 3)))) {
    if ((uint)(int)*param_5 < *(uint *)(*param_3 + 4)) {
      uVar1 = 0;
      *(char *)(*param_3 + (ulong)(uint)(int)*param_5 + 8) = (char)(long)param_5[2];
    }
  }
  return uVar1;
}


// ===== 0063f4d0  FUN_0063f4d0 =====

undefined8
FUN_0063f4d0(undefined8 param_1,double *param_2,long *param_3,int param_4,double *param_5,
            int param_6)

{
  short sVar1;
  undefined8 uVar2;
  
  uVar2 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 0xb)) &&
     (*(int *)((long)param_5 + 0xc) == 3)) {
    if ((ulong)(uint)(int)*param_5 + 1 < (ulong)*(uint *)(*param_3 + 4)) {
      uVar2 = 1;
      sVar1 = *(short *)(*param_3 + (ulong)(uint)(int)*param_5 + 8);
      *(undefined4 *)((long)param_2 + 0xc) = 3;
      *param_2 = (double)(int)sVar1;
    }
  }
  return uVar2;
}


// ===== 0063f538  FUN_0063f538 =====

undefined8
FUN_0063f538(undefined8 param_1,undefined8 *param_2,long *param_3,int param_4,double *param_5,
            int param_6)

{
  undefined8 uVar1;
  ushort uVar2;
  undefined8 uVar3;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 0xb)) &&
     (*(int *)((long)param_5 + 0xc) == 3)) {
    if ((ulong)(uint)(int)*param_5 + 1 < (ulong)*(uint *)(*param_3 + 4)) {
      uVar1 = 1;
      uVar2 = *(ushort *)(*param_3 + (ulong)(uint)(int)*param_5 + 8);
      *(undefined4 *)((long)param_2 + 0xc) = 3;
      uVar3 = NEON_ucvtf((ulong)uVar2);
      *param_2 = uVar3;
    }
  }
  return uVar1;
}


// ===== 0063f5a0  FUN_0063f5a0 =====

undefined8
FUN_0063f5a0(undefined8 param_1,undefined8 param_2,long *param_3,int param_4,double *param_5,
            int param_6)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 1) && (2 < param_6)) && (*(int *)((long)param_3 + 0xc) == 0xb)) &&
     ((*(int *)((long)param_5 + 0xc) == 3 && (*(int *)((long)param_5 + 0x1c) == 3)))) {
    if ((ulong)(uint)(int)*param_5 + 1 < (ulong)*(uint *)(*param_3 + 4)) {
      uVar1 = 0;
      *(short *)(*param_3 + (ulong)(uint)(int)*param_5 + 8) = (short)(long)param_5[2];
    }
  }
  return uVar1;
}


// ===== 0063f60c  FUN_0063f60c =====

undefined8
FUN_0063f60c(undefined8 param_1,double *param_2,long *param_3,int param_4,double *param_5,
            int param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 0xb)) &&
     (*(int *)((long)param_5 + 0xc) == 3)) {
    if ((ulong)(uint)(int)*param_5 + 3 < (ulong)*(uint *)(*param_3 + 4)) {
      uVar2 = 1;
      iVar1 = *(int *)(*param_3 + (ulong)(uint)(int)*param_5 + 8);
      *(undefined4 *)((long)param_2 + 0xc) = 3;
      *param_2 = (double)iVar1;
    }
  }
  return uVar2;
}


// ===== 0063f674  FUN_0063f674 =====

undefined8
FUN_0063f674(undefined8 param_1,undefined8 *param_2,long *param_3,int param_4,double *param_5,
            int param_6)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 0xb)) &&
     (*(int *)((long)param_5 + 0xc) == 3)) {
    if ((ulong)(uint)(int)*param_5 + 3 < (ulong)*(uint *)(*param_3 + 4)) {
      uVar1 = 1;
      uVar2 = *(uint *)(*param_3 + (ulong)(uint)(int)*param_5 + 8);
      *(undefined4 *)((long)param_2 + 0xc) = 3;
      uVar3 = NEON_ucvtf((ulong)uVar2);
      *param_2 = uVar3;
    }
  }
  return uVar1;
}


// ===== 0063f6dc  FUN_0063f6dc =====

undefined8
FUN_0063f6dc(undefined8 param_1,undefined8 param_2,long *param_3,int param_4,double *param_5,
            int param_6)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 1) && (2 < param_6)) && (*(int *)((long)param_3 + 0xc) == 0xb)) &&
     ((*(int *)((long)param_5 + 0xc) == 3 && (*(int *)((long)param_5 + 0x1c) == 3)))) {
    if ((ulong)(uint)(int)*param_5 + 3 < (ulong)*(uint *)(*param_3 + 4)) {
      uVar1 = 0;
      *(int *)(*param_3 + (ulong)(uint)(int)*param_5 + 8) = (int)(long)param_5[2];
    }
  }
  return uVar1;
}


// ===== 0063f748  FUN_0063f748 =====

undefined8
FUN_0063f748(undefined8 param_1,double *param_2,long *param_3,int param_4,double *param_5,
            int param_6)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 0xb)) &&
     (*(int *)((long)param_5 + 0xc) == 3)) {
    if ((ulong)(uint)(int)*param_5 + 3 < (ulong)*(uint *)(*param_3 + 4)) {
      uVar1 = 1;
      fVar2 = *(float *)(*param_3 + (ulong)(uint)(int)*param_5 + 8);
      *(undefined4 *)((long)param_2 + 0xc) = 3;
      *param_2 = (double)fVar2;
    }
  }
  return uVar1;
}


// ===== 0063f7b0  FUN_0063f7b0 =====

undefined8
FUN_0063f7b0(undefined8 param_1,undefined8 param_2,long *param_3,int param_4,double *param_5,
            int param_6)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 1) && (2 < param_6)) && (*(int *)((long)param_3 + 0xc) == 0xb)) &&
     ((*(int *)((long)param_5 + 0xc) == 3 && (*(int *)((long)param_5 + 0x1c) == 3)))) {
    if ((ulong)(uint)(int)*param_5 + 3 < (ulong)*(uint *)(*param_3 + 4)) {
      uVar1 = 0;
      *(float *)(*param_3 + (ulong)(uint)(int)*param_5 + 8) = (float)param_5[2];
    }
  }
  return uVar1;
}


// ===== 0063f81c  FUN_0063f81c =====

undefined8
FUN_0063f81c(undefined8 param_1,undefined8 *param_2,long *param_3,int param_4,double *param_5,
            int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 0xb)) &&
     (*(int *)((long)param_5 + 0xc) == 3)) {
    if ((ulong)(uint)(int)*param_5 + 7 < (ulong)*(uint *)(*param_3 + 4)) {
      uVar1 = 1;
      uVar2 = *(undefined8 *)(*param_3 + (ulong)(uint)(int)*param_5 + 8);
      *(undefined4 *)((long)param_2 + 0xc) = 3;
      *param_2 = uVar2;
    }
  }
  return uVar1;
}


// ===== 0063f880  FUN_0063f880 =====

undefined8
FUN_0063f880(undefined8 param_1,undefined8 param_2,long *param_3,int param_4,double *param_5,
            int param_6)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 1) && (2 < param_6)) && (*(int *)((long)param_3 + 0xc) == 0xb)) &&
     ((*(int *)((long)param_5 + 0xc) == 3 && (*(int *)((long)param_5 + 0x1c) == 3)))) {
    if ((ulong)(uint)(int)*param_5 + 7 < (ulong)*(uint *)(*param_3 + 4)) {
      uVar1 = 0;
      *(double *)(*param_3 + (ulong)(uint)(int)*param_5 + 8) = param_5[2];
    }
  }
  return uVar1;
}


// ===== 0063f8e8  FUN_0063f8e8 =====

undefined8
FUN_0063f8e8(undefined8 param_1,double *param_2,undefined4 *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 uVar3;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (param_3[3] == 5)) {
    uVar3 = *param_3;
    fVar2 = (float)param_3[1];
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    uVar3 = NEON_fmadd(uVar3,uVar3,fVar2 * fVar2);
    fVar2 = (float)NEON_fmadd(param_3[2],param_3[2],uVar3);
    *param_2 = (double)SQRT(fVar2);
  }
  return uVar1;
}


// ===== 0063f938  FUN_0063f938 =====

undefined8
FUN_0063f938(undefined8 param_1,float *param_2,float *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (param_3[3] == 7.00649e-45)) {
    fVar4 = *param_3;
    fVar2 = param_3[1];
    uVar1 = 1;
    fVar5 = param_3[2];
    param_2[3] = 7.00649e-45;
    uVar3 = NEON_fmadd(fVar4,fVar4,fVar2 * fVar2);
    fVar2 = (float)NEON_fmadd(fVar5,fVar5,uVar3);
    fVar2 = 1.0 / SQRT(fVar2);
    *param_2 = fVar4 * fVar2;
    param_2[1] = param_3[1] * fVar2;
    param_2[2] = param_3[2] * fVar2;
  }
  return uVar1;
}


// ===== 0063f9a4  FUN_0063f9a4 =====

undefined8
FUN_0063f9a4(undefined8 param_1,undefined4 *param_2,float *param_3,int param_4,float *param_5,
            int param_6)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (param_3[3] == 7.00649e-45)) &&
     (param_5[3] == 7.00649e-45)) {
    fVar4 = param_5[1];
    fVar5 = param_5[2];
    uVar1 = 1;
    fVar2 = param_3[2];
    param_2[3] = 5;
    uVar3 = NEON_fmadd(param_3[1],fVar5,-(fVar2 * fVar4));
    *param_2 = uVar3;
    uVar3 = NEON_fmadd(param_3[2],*param_5,-(*param_3 * param_5[2]));
    param_2[1] = uVar3;
    uVar3 = NEON_fmadd(*param_3,param_5[1],-(param_3[1] * *param_5));
    param_2[2] = uVar3;
  }
  return uVar1;
}


// ===== 0063fa28  FUN_0063fa28 =====

undefined8
FUN_0063fa28(undefined8 param_1,double *param_2,undefined4 *param_3,int param_4,undefined4 *param_5,
            int param_6)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (param_3[3] == 5)) && (param_5[3] == 5)) {
    uVar4 = *param_5;
    fVar3 = (float)param_5[1];
    fVar2 = (float)param_3[1];
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    uVar4 = NEON_fmadd(*param_3,uVar4,fVar2 * fVar3);
    fVar2 = (float)NEON_fmadd(param_3[2],param_5[2],uVar4);
    *param_2 = (double)fVar2;
  }
  return uVar1;
}


// ===== 0063fa8c  FUN_0063fa8c =====

undefined8
FUN_0063fa8c(undefined8 param_1,int *param_2,float *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (param_3[3] == 7.00649e-45)) {
    fVar2 = *param_3;
    uVar1 = 1;
    param_2[3] = 5;
    *param_2 = (int)fVar2;
    param_2[1] = (int)param_3[1];
    param_2[2] = (int)param_3[2];
  }
  return uVar1;
}


// ===== 0063fadc  FUN_0063fadc =====

undefined8
FUN_0063fadc(undefined8 param_1,int *param_2,float *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (param_3[3] == 7.00649e-45)) {
    fVar2 = *param_3;
    uVar1 = 1;
    param_2[3] = 5;
    *param_2 = (int)fVar2;
    param_2[1] = (int)param_3[1];
    param_2[2] = (int)param_3[2];
  }
  return uVar1;
}


// ===== 0063fb2c  FUN_0063fb2c =====

undefined8
FUN_0063fb2c(undefined8 param_1,float *param_2,float *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (param_3[3] == 7.00649e-45)) {
    fVar2 = *param_3;
    uVar1 = 1;
    param_2[3] = 7.00649e-45;
    *param_2 = ABS(fVar2);
    param_2[1] = ABS(param_3[1]);
    param_2[2] = ABS(param_3[2]);
  }
  return uVar1;
}


// ===== 0063fb7c  FUN_0063fb7c =====

undefined8
FUN_0063fb7c(undefined8 param_1,undefined4 *param_2,float *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (param_3[3] == 7.00649e-45)) {
    fVar2 = *param_3;
    uVar1 = 1;
    param_2[3] = 5;
    uVar3 = 0xbf800000;
    if (fVar2 >= 0.0) {
      uVar3 = 0;
    }
    uVar4 = 0x3f800000;
    if (fVar2 == 0.0 || fVar2 < 0.0 != NAN(fVar2)) {
      uVar4 = uVar3;
    }
    *param_2 = uVar4;
    fVar2 = param_3[1];
    uVar3 = 0xbf800000;
    if (fVar2 >= 0.0) {
      uVar3 = 0;
    }
    uVar4 = 0x3f800000;
    if (fVar2 == 0.0 || fVar2 < 0.0 != NAN(fVar2)) {
      uVar4 = uVar3;
    }
    param_2[1] = uVar4;
    fVar2 = param_3[2];
    uVar3 = 0xbf800000;
    if (fVar2 >= 0.0) {
      uVar3 = 0;
    }
    uVar4 = 0x3f800000;
    if (fVar2 == 0.0 || fVar2 < 0.0 != NAN(fVar2)) {
      uVar4 = uVar3;
    }
    param_2[2] = uVar4;
  }
  return uVar1;
}


// ===== 0063fbf0  FUN_0063fbf0 =====

undefined8
FUN_0063fbf0(undefined8 param_1,float *param_2,float *param_3,int param_4,float *param_5,int param_6
            )

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (2 < param_6)) && (param_3[3] == 7.00649e-45)) &&
     ((param_5[3] == 7.00649e-45 && (param_5[7] == 7.00649e-45)))) {
    fVar3 = *param_5;
    fVar2 = param_5[4];
    if ((fVar3 <= fVar2) && ((param_5[1] <= param_5[5] && (param_5[2] <= param_5[6])))) {
      fVar4 = *param_3;
      uVar1 = 1;
      param_2[3] = 7.00649e-45;
      if (fVar3 <= fVar4) {
        fVar3 = fVar4;
      }
      if (fVar3 == fVar2 || fVar3 < fVar2 != (NAN(fVar3) || NAN(fVar2))) {
        fVar2 = fVar3;
      }
      *param_2 = fVar2;
      fVar2 = param_5[1];
      if (param_5[1] <= param_3[1]) {
        fVar2 = param_3[1];
      }
      fVar3 = param_5[5];
      if (fVar2 == fVar3 || fVar2 < fVar3 != (NAN(fVar2) || NAN(fVar3))) {
        fVar3 = fVar2;
      }
      param_2[1] = fVar3;
      fVar2 = param_5[2];
      if (param_5[2] <= param_3[2]) {
        fVar2 = param_3[2];
      }
      fVar3 = param_5[6];
      if (fVar2 == fVar3 || fVar2 < fVar3 != (NAN(fVar2) || NAN(fVar3))) {
        fVar3 = fVar2;
      }
      param_2[2] = fVar3;
    }
  }
  return uVar1;
}


// ===== 0063fcc0  FUN_0063fcc0 =====

undefined8
FUN_0063fcc0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4,
            undefined8 *param_5,uint param_6)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  float fVar7;
  undefined8 uVar8;
  
  uVar4 = 0xffffffff;
  if ((((param_4 < 2) && (1 < (int)param_6)) && (*(int *)((long)param_3 + 0xc) == 5)) &&
     (*(int *)((long)param_5 + 0xc) == 5)) {
    uVar4 = NEON_fcmgt(*param_3,*param_5,4);
    uVar8 = NEON_bit(*param_3,*param_5,uVar4,1);
    fVar7 = *(float *)(param_5 + 1);
    if (*(float *)(param_3 + 1) <= *(float *)(param_5 + 1)) {
      fVar7 = *(float *)(param_3 + 1);
    }
    if (2 < param_6) {
      piVar6 = (int *)((long)param_5 + 0x1c);
      lVar5 = (ulong)(param_6 + 1) - 3;
      do {
        if (*piVar6 != 5) {
          return 0xffffffff;
        }
        piVar1 = piVar6 + -3;
        pfVar2 = (float *)(piVar6 + -1);
        piVar6 = piVar6 + 4;
        uVar4 = NEON_fcmgt(uVar8,*(undefined8 *)piVar1,4);
        fVar3 = *pfVar2;
        if (fVar7 <= *pfVar2) {
          fVar3 = fVar7;
        }
        fVar7 = fVar3;
        lVar5 = lVar5 + -1;
        uVar8 = NEON_bit(uVar8,*(undefined8 *)piVar1,uVar4,1);
      } while (lVar5 != 0);
    }
    uVar4 = 1;
    *param_2 = uVar8;
    *(float *)(param_2 + 1) = fVar7;
    *(undefined4 *)((long)param_2 + 0xc) = 5;
  }
  return uVar4;
}


// ===== 0063fd70  FUN_0063fd70 =====

undefined8
FUN_0063fd70(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4,
            undefined8 *param_5,uint param_6)

{
  int *piVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  uVar2 = 0xffffffff;
  if ((((param_4 < 2) && (1 < (int)param_6)) && (*(int *)((long)param_3 + 0xc) == 5)) &&
     (*(int *)((long)param_5 + 0xc) == 5)) {
    fVar6 = *(float *)(param_5 + 1);
    fVar7 = *(float *)(param_3 + 1);
    uVar2 = NEON_fcmgt(*param_5,*param_3,4);
    uVar5 = NEON_bit(*param_3,*param_5,uVar2,1);
    if (fVar6 == fVar7 || fVar6 < fVar7 != (NAN(fVar6) || NAN(fVar7))) {
      fVar6 = fVar7;
    }
    if (2 < param_6) {
      piVar4 = (int *)((long)param_5 + 0x1c);
      lVar3 = (ulong)(param_6 + 1) - 3;
      do {
        if (*piVar4 != 5) {
          return 0xffffffff;
        }
        piVar1 = piVar4 + -3;
        fVar7 = (float)piVar4[-1];
        piVar4 = piVar4 + 4;
        uVar2 = NEON_fcmgt(*(undefined8 *)piVar1,uVar5,4);
        if (fVar7 == fVar6 || fVar7 < fVar6 != (NAN(fVar7) || NAN(fVar6))) {
          fVar7 = fVar6;
        }
        fVar6 = fVar7;
        lVar3 = lVar3 + -1;
        uVar5 = NEON_bit(uVar5,*(undefined8 *)piVar1,uVar2,1);
      } while (lVar3 != 0);
    }
    uVar2 = 1;
    *param_2 = uVar5;
    *(float *)(param_2 + 1) = fVar6;
    *(undefined4 *)((long)param_2 + 0xc) = 5;
  }
  return uVar2;
}


// ===== 0063fe20  FUN_0063fe20 =====

undefined8
FUN_0063fe20(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (2 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) &&
     ((*(int *)((long)param_5 + 0xc) == 3 && (*(int *)((long)param_5 + 0x1c) == 3)))) {
    dVar2 = *param_5;
    if (param_5[2] != 1.0) {
      dVar2 = (double)NEON_fmadd(dVar2 - *param_3,param_5[2],*param_3);
    }
    uVar1 = 1;
    *param_2 = dVar2;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
  }
  return uVar1;
}


// ===== 0063fe8c  FUN_0063fe8c =====

undefined8
FUN_0063fe8c(undefined8 param_1,float *param_2,float *param_3,int param_4,float *param_5,int param_6
            )

{
  bool bVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar2 = 0xffffffff;
  if ((((param_4 < 2) && (2 < param_6)) && (param_3[3] == 7.00649e-45)) &&
     ((param_5[3] == 7.00649e-45 && (param_5[7] == 4.2039e-45)))) {
    fVar4 = *param_3;
    fVar5 = *param_5;
    uVar2 = 1;
    fVar3 = (float)*(double *)(param_5 + 4);
    param_2[3] = 7.00649e-45;
    bVar1 = fVar3 != 1.0;
    fVar4 = (float)NEON_fmadd(fVar5 - fVar4,fVar3,fVar4);
    if (bVar1) {
      fVar5 = fVar4;
    }
    *param_2 = fVar5;
    fVar4 = (float)NEON_fmadd(param_5[1] - param_3[1],fVar3,param_3[1]);
    fVar5 = param_5[1];
    if (bVar1) {
      fVar5 = fVar4;
    }
    param_2[1] = fVar5;
    fVar3 = (float)NEON_fmadd(param_5[2] - param_3[2],fVar3,param_3[2]);
    fVar5 = param_5[2];
    if (bVar1) {
      fVar5 = fVar3;
    }
    param_2[2] = fVar5;
  }
  return uVar2;
}


// ===== 0063ff2c  FUN_0063ff2c =====

undefined8
FUN_0063ff2c(undefined8 param_1,uint *param_2,double *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    dVar2 = *param_3;
    uVar1 = 1;
    param_2[3] = 1;
    *param_2 = (uint)NAN(dVar2);
  }
  return uVar1;
}


// ===== 0063ff68  FUN_0063ff68 =====

undefined8
FUN_0063ff68(undefined8 param_1,uint *param_2,double *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    dVar2 = *param_3;
    uVar1 = 1;
    param_2[3] = 1;
    *param_2 = (uint)(ABS(dVar2) == INFINITY);
  }
  return uVar1;
}


// ===== 0063ffb0  FUN_0063ffb0 =====

undefined8
FUN_0063ffb0(undefined8 param_1,uint *param_2,double *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  uint uVar2;
  double dVar3;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    dVar3 = *param_3;
    uVar1 = 1;
    param_2[3] = 1;
    dVar3 = ABS(dVar3);
    uVar2 = (uint)(dVar3 < INFINITY);
    if (dVar3 != INFINITY && dVar3 < INFINITY == NAN(dVar3)) {
      uVar2 = 1;
    }
    *param_2 = uVar2;
  }
  return uVar1;
}


// ===== 0063fffc  FUN_0063fffc =====

undefined8
FUN_0063fffc(undefined8 param_1,long *param_2,double *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  double dVar3;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    dVar3 = *param_3;
    uVar2 = 0;
    if ((dVar3 < -9.223372036854776e+18 == NAN(dVar3)) && (dVar3 < 9.223372036854776e+18)) {
      if (dVar3 == (double)(long)dVar3) {
        *param_2 = (long)dVar3;
        uVar2 = 4;
      }
      else {
        uVar2 = 0;
      }
    }
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = uVar2;
  }
  return uVar1;
}


// ===== 00640074  FUN_00640074 =====

undefined8
FUN_00640074(undefined8 param_1,double *param_2,long *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) {
    lVar2 = *param_3;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    *param_2 = (double)lVar2;
  }
  return uVar1;
}


// ===== 006400b0  FUN_006400b0 =====

undefined8
FUN_006400b0(undefined8 param_1,long *param_2,long *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) {
    lVar2 = *param_3;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 4;
    *param_2 = -lVar2;
  }
  return uVar1;
}


// ===== 006400ec  FUN_006400ec =====

undefined8
FUN_006400ec(undefined8 param_1,long *param_2,long *param_3,int param_4,long *param_5,int param_6)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) &&
     (*(int *)((long)param_5 + 0xc) == 4)) {
    uVar1 = 1;
    *param_2 = *param_5 + *param_3;
    *(undefined4 *)((long)param_2 + 0xc) = 4;
  }
  return uVar1;
}


// ===== 00640138  FUN_00640138 =====

undefined8
FUN_00640138(undefined8 param_1,long *param_2,long *param_3,int param_4,long *param_5,int param_6)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) &&
     (*(int *)((long)param_5 + 0xc) == 4)) {
    uVar1 = 1;
    *param_2 = *param_3 - *param_5;
    *(undefined4 *)((long)param_2 + 0xc) = 4;
  }
  return uVar1;
}


// ===== 00640184  FUN_00640184 =====

undefined8
FUN_00640184(undefined8 param_1,long *param_2,long *param_3,int param_4,long *param_5,int param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) &&
     (*(int *)((long)param_5 + 0xc) == 4)) {
    lVar2 = *param_3;
    lVar3 = *param_5;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 4;
    *param_2 = lVar3 * lVar2;
  }
  return uVar1;
}


// ===== 006401d0  FUN_006401d0 =====

undefined8
FUN_006401d0(undefined8 param_1,long *param_2,long *param_3,int param_4,long *param_5,int param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) &&
     (((*(int *)((long)param_5 + 0xc) == 4 && (lVar3 = *param_5, lVar3 != 0)) &&
      ((*param_3 != -0x8000000000000000 || (lVar3 != -1)))))) {
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = *param_3 / lVar3;
    }
    uVar2 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 4;
    *param_2 = lVar1;
  }
  return uVar2;
}


// ===== 00640234  FUN_00640234 =====

undefined8
FUN_00640234(undefined8 param_1,long *param_2,long *param_3,int param_4,long *param_5,uint param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < (int)param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) &&
     (*(int *)((long)param_5 + 0xc) == 4)) {
    lVar3 = *param_5;
    if (*param_3 <= *param_5) {
      lVar3 = *param_3;
    }
    if (2 < param_6) {
      lVar4 = (ulong)(param_6 + 1) - 3;
      lVar2 = lVar3;
      plVar5 = param_5 + 2;
      do {
        if (*(int *)((long)plVar5 + 0xc) != 4) {
          return 0xffffffff;
        }
        lVar3 = *plVar5;
        if (lVar2 <= *plVar5) {
          lVar3 = lVar2;
        }
        lVar4 = lVar4 + -1;
        lVar2 = lVar3;
        plVar5 = plVar5 + 2;
      } while (lVar4 != 0);
    }
    *param_2 = lVar3;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 4;
  }
  return uVar1;
}


// ===== 006402c0  FUN_006402c0 =====

undefined8
FUN_006402c0(undefined8 param_1,long *param_2,long *param_3,int param_4,long *param_5,uint param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < (int)param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) &&
     (*(int *)((long)param_5 + 0xc) == 4)) {
    lVar3 = *param_5;
    if (*param_5 <= *param_3) {
      lVar3 = *param_3;
    }
    if (2 < param_6) {
      lVar4 = (ulong)(param_6 + 1) - 3;
      lVar2 = lVar3;
      plVar5 = param_5 + 2;
      do {
        if (*(int *)((long)plVar5 + 0xc) != 4) {
          return 0xffffffff;
        }
        lVar3 = *plVar5;
        if (*plVar5 <= lVar2) {
          lVar3 = lVar2;
        }
        lVar4 = lVar4 + -1;
        lVar2 = lVar3;
        plVar5 = plVar5 + 2;
      } while (lVar4 != 0);
    }
    *param_2 = lVar3;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 4;
  }
  return uVar1;
}


// ===== 0064034c  FUN_0064034c =====

undefined8
FUN_0064034c(undefined8 param_1,long *param_2,long *param_3,int param_4,long *param_5,int param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) &&
     ((*(int *)((long)param_5 + 0xc) == 4 && (lVar3 = *param_5, lVar3 != 0)))) {
    lVar4 = *param_3;
    if ((lVar4 == -0x8000000000000000) && (lVar3 == -1)) {
      lVar4 = 0;
    }
    else {
      lVar1 = 0;
      if (lVar3 != 0) {
        lVar1 = lVar4 / lVar3;
      }
      lVar4 = lVar4 - lVar1 * lVar3;
    }
    *param_2 = lVar4;
    uVar2 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 4;
  }
  return uVar2;
}


// ===== 006403bc  FUN_006403bc =====

undefined8
FUN_006403bc(undefined8 param_1,long *param_2,long *param_3,int param_4,long *param_5,int param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) &&
     (((*(int *)((long)param_5 + 0xc) == 4 && (lVar3 = *param_5, lVar3 != 0)) &&
      ((lVar4 = *param_3, lVar4 != -0x8000000000000000 || (lVar3 != -1)))))) {
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = lVar4 / lVar3;
    }
    uVar2 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 4;
    *param_2 = lVar1 - (ulong)(lVar1 < 0 && lVar4 != lVar1 * lVar3);
  }
  return uVar2;
}


// ===== 00640434  FUN_00640434 =====

undefined8
FUN_00640434(undefined8 param_1,ulong *param_2,ulong *param_3,int param_4,ulong *param_5,int param_6
            )

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) &&
     ((*(int *)((long)param_5 + 0xc) == 4 && (uVar3 = *param_5, uVar3 != 0)))) {
    uVar2 = 1;
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = *param_3 / uVar3;
    }
    *(undefined4 *)((long)param_2 + 0xc) = 4;
    *param_2 = uVar1;
  }
  return uVar2;
}


// ===== 00640484  FUN_00640484 =====

undefined8
FUN_00640484(undefined8 param_1,long *param_2,ulong *param_3,int param_4,ulong *param_5,int param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) &&
     ((*(int *)((long)param_5 + 0xc) == 4 && (uVar3 = *param_5, uVar3 != 0)))) {
    uVar4 = *param_3;
    uVar2 = 1;
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = uVar4 / uVar3;
    }
    *(undefined4 *)((long)param_2 + 0xc) = 4;
    *param_2 = uVar4 - uVar1 * uVar3;
  }
  return uVar2;
}


// ===== 006404d8  FUN_006404d8 =====

undefined8
FUN_006404d8(undefined8 param_1,long *param_2,ulong *param_3,int param_4,ulong *param_5,int param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) &&
     ((*(int *)((long)param_5 + 0xc) == 4 && (uVar2 = *param_5, uVar2 != 0)))) {
    uVar4 = *param_3;
    if ((uVar4 == 0x8000000000000000) && (uVar2 == 0xffffffffffffffff)) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      if (uVar2 != 0) {
        lVar3 = (long)uVar4 / (long)uVar2;
      }
      lVar5 = uVar4 - lVar3 * uVar2;
      lVar3 = 0;
      if (lVar5 != 0) {
        lVar3 = lVar5 + (uVar2 & (long)(uVar2 ^ uVar4) >> 0x3f);
      }
    }
    *param_2 = lVar3;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 4;
  }
  return uVar1;
}


// ===== 0064055c  FUN_0064055c =====

undefined8
FUN_0064055c(undefined8 param_1,long *param_2,long *param_3,int param_4,long *param_5,int param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = 0xffffffff;
  if ((((param_4 < 2) && (2 < param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) &&
     ((*(int *)((long)param_5 + 0xc) == 4 && (*(int *)((long)param_5 + 0x1c) == 4)))) {
    lVar3 = *param_5;
    lVar4 = param_5[2];
    if (lVar3 <= lVar4) {
      lVar5 = *param_3;
      uVar2 = 1;
      lVar1 = lVar5;
      if (lVar4 <= lVar5) {
        lVar1 = lVar4;
      }
      if (lVar3 <= lVar5) {
        lVar3 = lVar1;
      }
      *param_2 = lVar3;
      *(undefined4 *)((long)param_2 + 0xc) = 4;
    }
  }
  return uVar2;
}


// ===== 006405cc  FUN_006405cc =====

undefined8
FUN_006405cc(undefined8 param_1,ulong *param_2,ulong *param_3,int param_4,ulong *param_5,
            uint param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < (int)param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) {
    uVar2 = *param_3;
    if (1 < param_6) {
      lVar3 = (ulong)(param_6 + 1) - 2;
      do {
        if (*(int *)((long)param_5 + 0xc) != 4) {
          return 0xffffffff;
        }
        lVar3 = lVar3 + -1;
        uVar2 = *param_5 & uVar2;
        param_5 = param_5 + 2;
      } while (lVar3 != 0);
    }
    *param_2 = uVar2;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 4;
  }
  return uVar1;
}


// ===== 00640638  FUN_00640638 =====

undefined8
FUN_00640638(undefined8 param_1,ulong *param_2,ulong *param_3,int param_4,ulong *param_5,
            uint param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < (int)param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) {
    uVar2 = *param_3;
    if (1 < param_6) {
      lVar3 = (ulong)(param_6 + 1) - 2;
      do {
        if (*(int *)((long)param_5 + 0xc) != 4) {
          return 0xffffffff;
        }
        lVar3 = lVar3 + -1;
        uVar2 = *param_5 | uVar2;
        param_5 = param_5 + 2;
      } while (lVar3 != 0);
    }
    *param_2 = uVar2;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 4;
  }
  return uVar1;
}


// ===== 006406a4  FUN_006406a4 =====

undefined8
FUN_006406a4(undefined8 param_1,ulong *param_2,ulong *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) {
    uVar2 = *param_3;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 4;
    *param_2 = ~uVar2;
  }
  return uVar1;
}


// ===== 006406e0  FUN_006406e0 =====

undefined8
FUN_006406e0(undefined8 param_1,ulong *param_2,ulong *param_3,int param_4,ulong *param_5,
            uint param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < (int)param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) {
    uVar2 = *param_3;
    if (1 < param_6) {
      lVar3 = (ulong)(param_6 + 1) - 2;
      do {
        if (*(int *)((long)param_5 + 0xc) != 4) {
          return 0xffffffff;
        }
        lVar3 = lVar3 + -1;
        uVar2 = *param_5 ^ uVar2;
        param_5 = param_5 + 2;
      } while (lVar3 != 0);
    }
    *param_2 = uVar2;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 4;
  }
  return uVar1;
}


// ===== 0064074c  FUN_0064074c =====

undefined8
FUN_0064074c(undefined8 param_1,uint *param_2,long *param_3,int param_4,long *param_5,int param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) &&
     (*(int *)((long)param_5 + 0xc) == 4)) {
    lVar2 = *param_3;
    lVar3 = *param_5;
    uVar1 = 1;
    param_2[3] = 1;
    *param_2 = (uint)(lVar2 < lVar3);
  }
  return uVar1;
}


// ===== 00640798  FUN_00640798 =====

undefined8
FUN_00640798(undefined8 param_1,uint *param_2,long *param_3,int param_4,long *param_5,int param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) &&
     (*(int *)((long)param_5 + 0xc) == 4)) {
    lVar2 = *param_3;
    lVar3 = *param_5;
    uVar1 = 1;
    param_2[3] = 1;
    *param_2 = (uint)(lVar2 <= lVar3);
  }
  return uVar1;
}


// ===== 006407e4  FUN_006407e4 =====

undefined8
FUN_006407e4(undefined8 param_1,uint *param_2,ulong *param_3,int param_4,ulong *param_5,int param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) &&
     (*(int *)((long)param_5 + 0xc) == 4)) {
    uVar2 = *param_3;
    uVar3 = *param_5;
    uVar1 = 1;
    param_2[3] = 1;
    *param_2 = (uint)(uVar2 < uVar3);
  }
  return uVar1;
}


// ===== 00640830  FUN_00640830 =====

undefined8
FUN_00640830(undefined8 param_1,uint *param_2,ulong *param_3,int param_4,ulong *param_5,int param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) &&
     (*(int *)((long)param_5 + 0xc) == 4)) {
    uVar2 = *param_3;
    uVar3 = *param_5;
    uVar1 = 1;
    param_2[3] = 1;
    *param_2 = (uint)(uVar2 <= uVar3);
  }
  return uVar1;
}


// ===== 0064087c  FUN_0064087c =====

undefined8
FUN_0064087c(undefined8 param_1,uint *param_2,long *param_3,int param_4,long *param_5,int param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) &&
     (*(int *)((long)param_5 + 0xc) == 4)) {
    lVar2 = *param_3;
    lVar3 = *param_5;
    uVar1 = 1;
    param_2[3] = 1;
    *param_2 = (uint)(lVar3 < lVar2);
  }
  return uVar1;
}


// ===== 006408c8  FUN_006408c8 =====

undefined8
FUN_006408c8(undefined8 param_1,uint *param_2,long *param_3,int param_4,long *param_5,int param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) &&
     (*(int *)((long)param_5 + 0xc) == 4)) {
    lVar2 = *param_3;
    lVar3 = *param_5;
    uVar1 = 1;
    param_2[3] = 1;
    *param_2 = (uint)(lVar3 <= lVar2);
  }
  return uVar1;
}


// ===== 00640914  FUN_00640914 =====

undefined8
FUN_00640914(undefined8 param_1,uint *param_2,ulong *param_3,int param_4,ulong *param_5,int param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) &&
     (*(int *)((long)param_5 + 0xc) == 4)) {
    uVar2 = *param_3;
    uVar3 = *param_5;
    uVar1 = 1;
    param_2[3] = 1;
    *param_2 = (uint)(uVar3 < uVar2);
  }
  return uVar1;
}


// ===== 00640960  FUN_00640960 =====

undefined8
FUN_00640960(undefined8 param_1,uint *param_2,ulong *param_3,int param_4,ulong *param_5,int param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) &&
     (*(int *)((long)param_5 + 0xc) == 4)) {
    uVar2 = *param_3;
    uVar3 = *param_5;
    uVar1 = 1;
    param_2[3] = 1;
    *param_2 = (uint)(uVar3 <= uVar2);
  }
  return uVar1;
}


// ===== 006409ac  FUN_006409ac =====

undefined8
FUN_006409ac(undefined8 param_1,ulong *param_2,ulong *param_3,int param_4,ulong *param_5,int param_6
            )

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) &&
     (*(int *)((long)param_5 + 0xc) == 4)) {
    uVar2 = *param_5;
    if (uVar2 + 0x3f < 0x7f) {
      if ((long)uVar2 < 0) {
        uVar2 = *param_3 >> (-uVar2 & 0x3f);
      }
      else {
        uVar2 = *param_3 << (uVar2 & 0x3f);
      }
    }
    else {
      uVar2 = 0;
    }
    *param_2 = uVar2;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 4;
  }
  return uVar1;
}


// ===== 00640a1c  FUN_00640a1c =====

undefined8
FUN_00640a1c(undefined8 param_1,ulong *param_2,ulong *param_3,int param_4,ulong *param_5,int param_6
            )

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) &&
     (*(int *)((long)param_5 + 0xc) == 4)) {
    uVar2 = *param_5;
    if (uVar2 + 0x3f < 0x7f) {
      if ((long)uVar2 < 0) {
        uVar2 = *param_3 << (-uVar2 & 0x3f);
      }
      else {
        uVar2 = *param_3 >> (uVar2 & 0x3f);
      }
    }
    else {
      uVar2 = 0;
    }
    *param_2 = uVar2;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 4;
  }
  return uVar1;
}


// ===== 00640a8c  FUN_00640a8c =====

undefined8
FUN_00640a8c(undefined8 param_1,long *param_2,long *param_3,int param_4,ulong *param_5,int param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) &&
     (*(int *)((long)param_5 + 0xc) == 4)) {
    uVar2 = *param_5;
    lVar4 = *param_3;
    if (uVar2 + 0x3f < 0x7f) {
      lVar3 = lVar4 << (-uVar2 & 0x3f);
      if (-1 < (long)uVar2) {
        lVar3 = lVar4 >> (uVar2 & 0x3f);
      }
    }
    else {
      lVar3 = 0;
      if ((long)(uVar2 + 0x3f) < 0 == SCARRY8(uVar2,0x3f)) {
        lVar3 = lVar4 >> 0x3f;
      }
    }
    *param_2 = lVar3;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 4;
  }
  return uVar1;
}


// ===== 00640b04  FUN_00640b04 =====

undefined8
FUN_00640b04(undefined8 param_1,ulong *param_2,ulong *param_3,int param_4,ulong *param_5,int param_6
            )

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) &&
     (*(int *)((long)param_5 + 0xc) == 4)) {
    uVar3 = *param_5;
    uVar2 = *param_3;
    if ((uVar3 & 0x3f) != 0) {
      uVar2 = uVar2 >> ((ulong)-((uint)uVar3 & 0x3f) & 0x3f) | uVar2 << (uVar3 & 0x3f);
    }
    *param_2 = uVar2;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 4;
  }
  return uVar1;
}


// ===== 00640b64  FUN_00640b64 =====

undefined8
FUN_00640b64(undefined8 param_1,ulong *param_2,ulong *param_3,int param_4,ulong *param_5,int param_6
            )

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) &&
     (*(int *)((long)param_5 + 0xc) == 4)) {
    uVar3 = *param_5;
    uVar2 = *param_3;
    if ((uVar3 & 0x3f) != 0) {
      uVar2 = uVar2 << ((ulong)-((uint)uVar3 & 0x3f) & 0x3f) | uVar2 >> (uVar3 & 0x3f);
    }
    *param_2 = uVar2;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 4;
  }
  return uVar1;
}


// ===== 00640bc4  FUN_00640bc4 =====

undefined8
FUN_00640bc4(undefined8 param_1,ulong *param_2,ulong *param_3,int param_4,ulong *param_5,int param_6
            )

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((2 < param_6) && (*(int *)((long)param_5 + 0x1c) != 4)) {
    return 0xffffffff;
  }
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) &&
     (*(int *)((long)param_5 + 0xc) == 4)) {
    uVar2 = *param_5;
    if (param_6 < 3) {
      uVar3 = 1;
    }
    else {
      uVar3 = param_5[2];
    }
    if (((uVar2 < 0x40) && (0 < (long)uVar3)) &&
       (((long)uVar3 < 0x41 && ((long)(uVar3 + uVar2) < 0x41)))) {
      uVar1 = 1;
      *param_2 = 0xffffffffffffffffU >> (-uVar3 & 0x3f) & *param_3 >> (uVar2 & 0x3f);
      *(undefined4 *)((long)param_2 + 0xc) = 4;
    }
  }
  return uVar1;
}


// ===== 00640c74  FUN_00640c74 =====

undefined8
FUN_00640c74(undefined8 param_1,uint *param_2,ulong *param_3,int param_4,ulong *param_5,uint param_6
            )

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < (int)param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) {
    uVar2 = *param_3;
    if (1 < param_6) {
      lVar3 = (ulong)(param_6 + 1) - 2;
      do {
        if (*(int *)((long)param_5 + 0xc) != 4) {
          return 0xffffffff;
        }
        lVar3 = lVar3 + -1;
        uVar2 = *param_5 & uVar2;
        param_5 = param_5 + 2;
      } while (lVar3 != 0);
    }
    uVar1 = 1;
    param_2[3] = 1;
    *param_2 = (uint)(uVar2 != 0);
  }
  return uVar1;
}


// ===== 00640ce4  FUN_00640ce4 =====

undefined8
FUN_00640ce4(undefined8 param_1,long *param_2,ulong *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) {
    uVar2 = *param_3;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 4;
    uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    *param_2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
  }
  return uVar1;
}


// ===== 00640d24  FUN_00640d24 =====

undefined8
FUN_00640d24(undefined8 param_1,long *param_2,undefined8 *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) {
    uVar2 = *param_3;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 4;
    *param_2 = LZCOUNT(uVar2);
  }
  return uVar1;
}


// ===== 00640d60  FUN_00640d60 =====

undefined8
FUN_00640d60(undefined8 param_1,ulong *param_2,ulong *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 4)) {
    uVar2 = *param_3;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    *param_2 = uVar2 >> 0x20 | uVar2 << 0x20;
  }
  return uVar1;
}


// ===== 00640d9c  FUN_00640d9c =====

undefined8
FUN_00640d9c(undefined8 param_1,undefined8 *param_2,long *param_3,int param_4,double *param_5,
            int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (*(int *)((long)param_3 + 0xc) == 0xb)) &&
     (*(int *)((long)param_5 + 0xc) == 3)) {
    if ((ulong)(uint)(int)*param_5 + 7 < (ulong)*(uint *)(*param_3 + 4)) {
      uVar1 = 1;
      uVar2 = *(undefined8 *)(*param_3 + (ulong)(uint)(int)*param_5 + 8);
      *(undefined4 *)((long)param_2 + 0xc) = 4;
      *param_2 = uVar2;
    }
  }
  return uVar1;
}


// ===== 00640e00  FUN_00640e00 =====

undefined8
FUN_00640e00(undefined8 param_1,undefined8 param_2,long *param_3,int param_4,double *param_5,
            int param_6)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 1) && (2 < param_6)) && (*(int *)((long)param_3 + 0xc) == 0xb)) &&
     ((*(int *)((long)param_5 + 0xc) == 3 && (*(int *)((long)param_5 + 0x1c) == 4)))) {
    if ((ulong)(uint)(int)*param_5 + 7 < (ulong)*(uint *)(*param_3 + 4)) {
      uVar1 = 0;
      *(double *)(*param_3 + (ulong)(uint)(int)*param_5 + 8) = param_5[2];
    }
  }
  return uVar1;
}


// ===== 00640e68  FUN_00640e68 =====

undefined8 FUN_00640e68(void)

{
  return 0xffffffff;
}


// ===== 00640e70  FUN_00640e70 =====

undefined8
FUN_00640e70(undefined8 param_1,double *param_2,float *param_3,int param_4,float *param_5,
            int param_6)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (param_3[3] == 7.00649e-45)) &&
     (param_5[3] == 7.00649e-45)) {
    fVar4 = *param_5;
    fVar3 = param_5[1];
    fVar2 = param_3[1];
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    fVar2 = (float)NEON_fmadd(*param_3 - fVar4,*param_3 - fVar4,(fVar2 - fVar3) * (fVar2 - fVar3));
    *param_2 = (double)SQRT(fVar2);
  }
  return uVar1;
}


// ===== 00640ed4  FUN_00640ed4 =====

undefined8
FUN_00640ed4(undefined8 param_1,double *param_2,float *param_3,int param_4,float *param_5,
            int param_6)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (param_3[3] == 7.00649e-45)) &&
     (param_5[3] == 7.00649e-45)) {
    fVar4 = *param_5;
    fVar3 = param_5[1];
    fVar2 = param_3[1];
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    fVar2 = (float)NEON_fmadd(*param_3 - fVar4,*param_3 - fVar4,(fVar2 - fVar3) * (fVar2 - fVar3));
    *param_2 = (double)fVar2;
  }
  return uVar1;
}


// ===== 00640f34  FUN_00640f34 =====

undefined8 FUN_00640f34(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  if (param_4 < 2) {
    *param_2 = 0;
    param_2[1] = 0x500000000;
    return 1;
  }
  return 0xffffffff;
}


// ===== 00640f54  FUN_00640f54 =====

undefined8
FUN_00640f54(undefined8 param_1,double *param_2,undefined4 *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 uVar3;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (param_3[3] == 5)) {
    uVar3 = *param_3;
    fVar2 = (float)param_3[1];
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    fVar2 = (float)NEON_fmadd(uVar3,uVar3,fVar2 * fVar2);
    *param_2 = (double)fVar2;
  }
  return uVar1;
}


// ===== 00640f98  FUN_00640f98 =====

undefined8
FUN_00640f98(undefined8 param_1,double *param_2,undefined4 *param_3,int param_4,undefined4 *param_5,
            int param_6)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (param_3[3] == 5)) && (param_5[3] == 5)) {
    uVar4 = *param_5;
    fVar3 = (float)param_5[1];
    fVar2 = (float)param_3[1];
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    fVar2 = (float)NEON_fmadd(*param_3,uVar4,fVar2 * fVar3);
    *param_2 = (double)fVar2;
  }
  return uVar1;
}


// ===== 00640ff0  FUN_00640ff0 =====

undefined8
FUN_00640ff0(undefined8 param_1,double *param_2,undefined4 *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 uVar3;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (param_3[3] == 5)) {
    uVar3 = *param_3;
    fVar2 = (float)param_3[1];
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    fVar2 = (float)NEON_fmadd(uVar3,uVar3,fVar2 * fVar2);
    *param_2 = (double)SQRT(fVar2);
  }
  return uVar1;
}


// ===== 00641038  FUN_00641038 =====

undefined8
FUN_00641038(undefined8 param_1,float *param_2,float *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = 0xffffffff;
  if (((param_4 < 2) && (0 < param_6)) && (param_3[3] == 7.00649e-45)) {
    fVar3 = *param_3;
    uVar1 = 1;
    fVar2 = (float)NEON_fmadd(fVar3,fVar3,param_3[1] * param_3[1]);
    *param_2 = fVar3 * (1.0 / SQRT(fVar2));
    fVar3 = param_3[1];
    param_2[2] = 0.0;
    param_2[3] = 7.00649e-45;
    param_2[1] = fVar3 * (1.0 / SQRT(fVar2));
  }
  return uVar1;
}


// ===== 00641090  FUN_00641090 =====

undefined8
FUN_00641090(undefined8 param_1,float *param_2,float *param_3,int param_4,float *param_5,int param_6
            )

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (2 < param_6)) && (param_3[3] == 7.00649e-45)) &&
     ((param_5[3] == 7.00649e-45 && (param_5[7] == 4.2039e-45)))) {
    uVar1 = 1;
    fVar2 = (float)*(double *)(param_5 + 4);
    fVar3 = (float)NEON_fmadd(*param_5 - *param_3,fVar2,*param_3);
    fVar4 = *param_5;
    if (fVar2 != 1.0) {
      fVar4 = fVar3;
    }
    *param_2 = fVar4;
    fVar3 = param_3[1];
    fVar4 = param_5[1];
    param_2[2] = 0.0;
    param_2[3] = 7.00649e-45;
    fVar3 = (float)NEON_fmadd(fVar4 - fVar3,fVar2,fVar3);
    if (fVar2 != 1.0) {
      fVar4 = fVar3;
    }
    param_2[1] = fVar4;
  }
  return uVar1;
}


// ===== 00641118  FUN_00641118 =====

undefined8
FUN_00641118(undefined8 param_1,double *param_2,undefined4 *param_3,int param_4,float *param_5,
            int param_6)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (1 < param_6)) && (param_3[3] == 5)) && (param_5[3] == 7.00649e-45)) {
    fVar3 = *param_5;
    fVar4 = param_5[1];
    fVar2 = (float)param_3[1];
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    fVar2 = (float)NEON_fmadd(*param_3,fVar4,-(fVar2 * fVar3));
    *param_2 = (double)fVar2;
  }
  return uVar1;
}


// ===== 00641170  FUN_00641170 =====

undefined8
FUN_00641170(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
            undefined4 *param_5,int param_6)

{
  undefined8 uVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (2 < param_6)) && (param_3[3] == 5)) &&
     ((param_5[3] == 5 && (param_5[7] == 3)))) {
    dVar2 = *(double *)(param_5 + 4);
    uVar1 = 1;
    uVar3 = NEON_fmadd(*param_5,(float)dVar2,*param_3);
    *param_2 = uVar3;
    uVar3 = param_3[1];
    uVar4 = param_5[1];
    param_2[2] = 0;
    param_2[3] = 5;
    uVar3 = NEON_fmadd(uVar4,(float)dVar2,uVar3);
    param_2[1] = uVar3;
  }
  return uVar1;
}


// ===== 006411e0  FUN_006411e0 =====

undefined8
FUN_006411e0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
            undefined4 *param_5,int param_6)

{
  undefined8 uVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = 0xffffffff;
  if ((((param_4 < 2) && (2 < param_6)) && (param_3[3] == 5)) &&
     ((param_5[3] == 5 && (param_5[7] == 3)))) {
    dVar2 = *(double *)(param_5 + 4);
    uVar1 = 1;
    uVar3 = NEON_fmsub(*param_5,(float)dVar2,*param_3);
    *param_2 = uVar3;
    uVar3 = param_3[1];
    uVar4 = param_5[1];
    param_2[2] = 0;
    param_2[3] = 5;
    uVar3 = NEON_fmsub(uVar4,(float)dVar2,uVar3);
    param_2[1] = uVar3;
  }
  return uVar1;
}


// ===== 00641250  FUN_00641250 =====

void FUN_00641250(long param_1,undefined8 param_2,long param_3,long param_4,uint param_5,
                 uint param_6)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_68;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x30);
  local_5c = 7;
  local_68 = param_2;
  FUN_00642c8c(param_1,&local_68,param_3 + (ulong)(param_5 >> 0x14 & 0x3ff) * 0x10);
  if ((int)param_5 < 0) {
    uVar2 = (ulong)(param_5 >> 10 & 0x3ff);
    param_4 = param_4 - lVar3;
    lVar3 = *(long *)(param_1 + 0x30) + param_4;
    if ((param_6 & 1) == 0) {
      FUN_00642c8c(param_1,lVar3,param_3 + uVar2 * 0x10,lVar3);
      if (2 < param_5 >> 0x1e) {
        param_4 = *(long *)(param_1 + 0x30) + param_4;
        goto LAB_0064134c;
      }
    }
    else if (((*(int *)(lVar3 + 0xc) != 0) &&
             (FUN_00642c8c(param_1,lVar3,param_3 + uVar2 * 0x10,lVar3), 2 < param_5 >> 0x1e)) &&
            (param_4 = *(long *)(param_1 + 0x30) + param_4, *(int *)(param_4 + 0xc) != 0)) {
LAB_0064134c:
      if (*(long *)(lVar1 + 0x28) == local_58) {
        FUN_00642c8c(param_1,param_4,param_3 + (ulong)(param_5 & 0x3ff) * 0x10,param_4);
        return;
      }
      goto LAB_00641388;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_00641388:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0064138c  luau_load =====

/* luau_load(lua_State*, char const*, char const*, unsigned long, int) */

undefined4 luau_load(lua_State *param_1,char *param_2,char *param_3,ulong param_4,int param_5)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_b0;
  long lStack_a8;
  long local_a0;
  undefined8 uStack_98;
  long local_90;
  long local_88;
  char *local_80;
  char *pcStack_78;
  ulong local_70;
  int local_68;
  undefined4 local_64;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x18);
  uVar5 = *(ulong *)(lVar4 + 0x40);
  if (uVar5 <= *(ulong *)(lVar4 + 0x48)) {
    FUN_006239a4(param_1);
    lVar4 = *(long *)(param_1 + 0x18);
    uVar5 = *(ulong *)(lVar4 + 0x40);
  }
  *(undefined8 *)(lVar4 + 0x40) = 0xffffffffffffffff;
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  lStack_a8 = 0;
  local_b0 = 0;
  local_64 = 0;
  local_80 = param_2;
  pcStack_78 = param_3;
  local_70 = param_4;
  local_68 = param_5;
  iVar2 = FUN_00622224(param_1,FUN_006414b4,&local_b0);
  uVar3 = local_64;
  if (iVar2 == 4) {
    lua_pushlstring(param_1,"not enough memory",0x11);
    uVar3 = 1;
  }
  if (local_90 != 0) {
    FUN_00628eb0(uStack_98,local_90,local_88 << 3,0);
  }
  if (lStack_a8 != 0) {
    FUN_00628eb0(local_b0,lStack_a8,local_a0 << 3,0);
  }
  *(ulong *)(lVar4 + 0x40) = uVar5;
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


// ===== 006414b4  FUN_006414b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006414b4(lua_State *param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  int iVar3;
  char *pcVar4;
  lua_State lVar5;
  uint uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long lVar15;
  long lVar16;
  long lVar17;
  byte bVar18;
  int iVar19;
  uint uVar20;
  size_t sVar21;
  undefined8 uVar22;
  lua_State *plVar23;
  undefined8 uVar24;
  undefined1 *puVar25;
  byte *pbVar26;
  void *__dest;
  long lVar27;
  undefined8 *puVar28;
  double *pdVar29;
  undefined1 *puVar30;
  long *plVar31;
  int *piVar32;
  uint uVar33;
  undefined8 uVar34;
  long lVar35;
  byte *pbVar36;
  ulong uVar37;
  long lVar38;
  char cVar39;
  undefined4 uVar40;
  uint uVar41;
  long lVar42;
  undefined4 *puVar43;
  ulong uVar44;
  uint uVar45;
  byte *pbVar46;
  uint uVar47;
  byte *pbVar48;
  byte *pbVar49;
  byte *pbVar50;
  long lVar51;
  long lVar52;
  uint *puVar53;
  ulong uVar54;
  ulong uVar55;
  int *piVar56;
  ulong uVar57;
  uint uVar58;
  ulong uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined4 uVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  undefined1 auVar72 [16];
  uint local_22c;
  undefined8 local_180;
  undefined4 local_178;
  byte local_170 [256];
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  pcVar4 = (char *)param_2[6];
  pbVar46 = (byte *)param_2[7];
  bVar18 = *pbVar46;
  uVar59 = (ulong)bVar18;
  if (bVar18 == 0) {
    iVar19 = *(int *)(param_2 + 8);
    sVar21 = strlen(pcVar4);
    uVar22 = FUN_00629c60(local_170,pcVar4,sVar21);
    lua_pushfstringL(param_1,"%s%.*s",uVar22,(ulong)(iVar19 - 1),pbVar46 + 1);
  }
  else {
    if (0xfffffff6 < bVar18 - 0xc) {
      uVar58 = (uint)bVar18;
      if (uVar58 < 4) {
        local_22c = 0;
        lVar51 = 1;
        if (*(int *)(param_2 + 9) == 0) goto LAB_00641600;
LAB_006415e8:
        plVar23 = (lua_State *)FUN_00617fd4(param_1);
      }
      else {
        bVar18 = pbVar46[1];
        local_22c = (uint)bVar18;
        if (local_22c - 4 < 0xfffffffd) {
          sVar21 = strlen(pcVar4);
          uVar22 = FUN_00629c60(local_170,pcVar4,sVar21);
          uVar40 = 1;
          lua_pushfstringL(param_1,"%s: bytecode type version mismatch (expected [%d..%d], got %d)",
                           uVar22,1,3,(ulong)bVar18);
          goto LAB_00642ab0;
        }
        lVar51 = 2;
        if (*(int *)(param_2 + 9) != 0) goto LAB_006415e8;
LAB_00641600:
        plVar23 = param_1 + 0x58;
      }
      uVar34 = *(undefined8 *)plVar23;
      sVar21 = strlen(pcVar4);
      uVar22 = FUN_0062b178(param_1,pcVar4,sVar21);
      uVar33 = 0;
      uVar54 = 0;
      do {
        pbVar26 = pbVar46 + lVar51;
        lVar51 = lVar51 + 1;
        uVar45 = uVar33 & 0x1f;
        uVar33 = uVar33 + 7;
        uVar45 = (*pbVar26 & 0x7f) << (ulong)uVar45 | (uint)uVar54;
        uVar54 = (ulong)uVar45;
      } while ((char)*pbVar26 < '\0');
      *param_2 = param_1;
      uVar24 = FUN_00628ad8(param_1,uVar54 << 3,0);
      param_2[1] = uVar24;
      param_2[2] = uVar54;
      if (uVar45 != 0) {
        uVar55 = 0;
        do {
          uVar33 = 0;
          uVar57 = 0;
          do {
            pbVar26 = pbVar46 + lVar51;
            lVar51 = lVar51 + 1;
            uVar45 = uVar33 & 0x1f;
            uVar33 = uVar33 + 7;
            uVar57 = (ulong)((*pbVar26 & 0x7f) << (ulong)uVar45 | (uint)uVar57);
          } while ((char)*pbVar26 < '\0');
          uVar24 = FUN_0062b178(param_1,pbVar46 + lVar51,uVar57);
          lVar51 = lVar51 + uVar57;
          *(undefined8 *)(param_2[1] + uVar55 * 8) = uVar24;
          uVar55 = uVar55 + 1;
        } while (uVar55 != uVar54);
      }
      if (local_22c == 3) {
        local_170[8] = 7;
        local_170[9] = 7;
        local_170[10] = 7;
        local_170[0xb] = 7;
        local_170[0xc] = 7;
        local_170[0xd] = 7;
        local_170[0xe] = 7;
        local_170[0xf] = 7;
        local_170[0] = 7;
        local_170[1] = 7;
        local_170[2] = 7;
        local_170[3] = 7;
        local_170[4] = 7;
        local_170[5] = 7;
        local_170[6] = 7;
        local_170[7] = 7;
        local_170[0x18] = 7;
        local_170[0x19] = 7;
        local_170[0x1a] = 7;
        local_170[0x1b] = 7;
        local_170[0x1c] = 7;
        local_170[0x1d] = 7;
        local_170[0x1e] = 7;
        local_170[0x1f] = 7;
        local_170[0x10] = 7;
        local_170[0x11] = 7;
        local_170[0x12] = 7;
        local_170[0x13] = 7;
        local_170[0x14] = 7;
        local_170[0x15] = 7;
        local_170[0x16] = 7;
        local_170[0x17] = 7;
        pbVar26 = pbVar46 + lVar51;
        uVar33 = (uint)*pbVar26;
        lVar51 = lVar51 + 1;
        if (*pbVar26 != 0) {
          do {
            uVar45 = 0;
            uVar20 = 0;
            do {
              lVar52 = lVar51;
              uVar47 = uVar45 & 0x1f;
              uVar45 = uVar45 + 7;
              uVar20 = (pbVar46[lVar52] & 0x7f) << (ulong)uVar47 | uVar20;
              lVar51 = lVar52 + 1;
            } while ((char)pbVar46[lVar52] < '\0');
            if (uVar20 == 0) {
              lVar51 = 0;
            }
            else {
              lVar51 = *(long *)(param_2[1] + (ulong)(uVar20 - 1) * 8);
            }
            if ((uVar33 < 0x21) && (*(code **)(*(long *)(param_1 + 0x18) + 0x588) != (code *)0x0)) {
              bVar18 = (**(code **)(*(long *)(param_1 + 0x18) + 0x588))
                                 (param_1,lVar51 + 0x18,*(undefined4 *)(lVar51 + 0x14));
              local_170[(ulong)uVar33 + 0xffffffff & 0xffffffff] = bVar18;
            }
            uVar33 = (uint)pbVar46[lVar52 + 1];
            lVar51 = lVar52 + 2;
          } while (uVar33 != 0);
        }
      }
      uVar33 = 0;
      uVar54 = 0;
      do {
        pbVar26 = pbVar46 + lVar51;
        lVar51 = lVar51 + 1;
        uVar45 = uVar33 & 0x1f;
        uVar33 = uVar33 + 7;
        uVar45 = (*pbVar26 & 0x7f) << (ulong)uVar45 | (uint)uVar54;
        uVar54 = (ulong)uVar45;
      } while ((char)*pbVar26 < '\0');
      param_2[3] = param_1;
      uVar24 = FUN_00628ad8(param_1,uVar54 << 3,0);
      param_2[4] = uVar24;
      param_2[5] = uVar54;
      lVar17 = _UNK_0024e348;
      lVar16 = _DAT_0024e340;
      lVar15 = _UNK_0024e108;
      lVar52 = _DAT_0024e100;
      if (uVar45 != 0) {
        uVar55 = 0;
        do {
          puVar25 = (undefined1 *)FUN_00628d60(param_1,0xc0,param_1[4]);
          bVar18 = *(byte *)(*(long *)(param_1 + 0x18) + 0x20);
          *puVar25 = 0xf;
          puVar25[1] = bVar18 & 3;
          lVar5 = param_1[4];
          *(lua_State *)(puVar25 + 2) = lVar5;
          memset(puVar25 + 3,0,0xbd);
          *(int *)(puVar25 + 0xa8) = (int)uVar55;
          *(undefined8 *)(puVar25 + 0x58) = uVar22;
          iVar19 = *(int *)(*(long *)(param_1 + 0x18) + 0x44f8);
          if (iVar19 != 0) {
            *(int *)(*(long *)(param_1 + 0x18) + 0x44f8) = iVar19 + 1;
          }
          *(int *)(puVar25 + 0xbc) = iVar19;
          lVar27 = lVar51 + 4;
          puVar25[6] = pbVar46[lVar51];
          puVar25[4] = pbVar46[lVar51 + 1];
          puVar25[3] = pbVar46[lVar51 + 2];
          puVar25[5] = pbVar46[lVar51 + 3];
          if (3 < (uint)uVar59) {
            pbVar26 = pbVar46 + lVar27;
            lVar27 = lVar51 + 5;
            puVar25[7] = *pbVar26;
            if (local_22c == 1) {
              uVar33 = 0;
              uVar59 = 0;
              do {
                pbVar26 = pbVar46 + lVar27;
                lVar27 = lVar27 + 1;
                uVar45 = uVar33 & 0x1f;
                uVar33 = uVar33 + 7;
                uVar45 = (*pbVar26 & 0x7f) << (ulong)uVar45 | (uint)uVar59;
                uVar59 = (ulong)uVar45;
              } while ((char)*pbVar26 < '\0');
              if (uVar45 == 0) {
                uVar59 = 0;
              }
              else {
                uVar33 = 3;
                if (0x7f < uVar45) {
                  uVar33 = 4;
                }
                pbVar26 = (byte *)FUN_00628ad8(param_1,uVar33 + uVar45,lVar5);
                *(byte **)(puVar25 + 0x70) = pbVar26;
                *(uint *)(puVar25 + 0xac) = uVar33 + uVar45;
                if (uVar45 < 0x80) {
                  lVar51 = 1;
                  lVar42 = 2;
                  *pbVar26 = (byte)uVar45;
                }
                else {
                  *pbVar26 = (byte)uVar45 | 0x80;
                  *(char *)(*(long *)(puVar25 + 0x70) + 1) = (char)(uVar45 >> 7);
                  lVar51 = 2;
                  lVar42 = 3;
                }
                *(undefined1 *)(*(long *)(puVar25 + 0x70) + lVar51) = 0;
                *(undefined1 *)(*(long *)(puVar25 + 0x70) + lVar42) = 0;
                memcpy((void *)(*(long *)(puVar25 + 0x70) + (ulong)uVar33),pbVar46 + lVar27,uVar59);
              }
              lVar27 = uVar59 + lVar27;
            }
            else if ((local_22c & 0xfe) == 2) {
              uVar33 = 0;
              uVar59 = 0;
              do {
                pbVar26 = pbVar46 + lVar27;
                lVar27 = lVar27 + 1;
                uVar45 = uVar33 & 0x1f;
                uVar33 = uVar33 + 7;
                uVar45 = (*pbVar26 & 0x7f) << (ulong)uVar45 | (uint)uVar59;
                uVar59 = (ulong)uVar45;
              } while ((char)*pbVar26 < '\0');
              if (uVar45 != 0) {
                __dest = (void *)FUN_00628ad8(param_1,uVar59,lVar5);
                *(uint *)(puVar25 + 0xac) = uVar45;
                *(void **)(puVar25 + 0x70) = __dest;
                memcpy(__dest,pbVar46 + lVar27,uVar59);
                lVar27 = lVar27 + uVar59;
                if (local_22c == 3) {
                  lVar68 = *(long *)(puVar25 + 0x70);
                  lVar51 = 0;
                  uVar33 = 0;
                  uVar59 = 0;
                  pbVar26 = (byte *)(lVar68 + 5);
                  lVar42 = lVar68 + 3;
                  do {
                    lVar70 = lVar42;
                    pbVar49 = pbVar26;
                    pbVar36 = (byte *)(lVar68 + lVar51);
                    lVar51 = lVar51 + 1;
                    uVar45 = uVar33 & 0x1f;
                    uVar33 = uVar33 + 7;
                    uVar45 = (*pbVar36 & 0x7f) << (ulong)uVar45 | (uint)uVar59;
                    uVar59 = (ulong)uVar45;
                    pbVar26 = pbVar49 + 1;
                    lVar42 = lVar70 + 1;
                  } while ((char)*pbVar36 < '\0');
                  uVar33 = 0;
                  uVar57 = 0;
                  pbVar26 = (byte *)(lVar70 + uVar59);
                  do {
                    pbVar50 = pbVar26;
                    pbVar48 = pbVar49;
                    pbVar36 = (byte *)(lVar68 + lVar51);
                    lVar51 = lVar51 + 1;
                    uVar20 = uVar33 & 0x1f;
                    uVar33 = uVar33 + 7;
                    uVar20 = (*pbVar36 & 0x7f) << (ulong)uVar20 | (uint)uVar57;
                    uVar57 = (ulong)uVar20;
                    pbVar49 = pbVar48 + 1;
                    pbVar26 = pbVar50 + 1;
                  } while ((char)*pbVar36 < '\0');
                  uVar33 = 0;
                  uVar47 = 0;
                  do {
                    pbVar49 = pbVar50;
                    pbVar36 = pbVar48;
                    pbVar26 = (byte *)(lVar68 + lVar51);
                    lVar51 = lVar51 + 1;
                    uVar41 = uVar33 & 0x1f;
                    uVar33 = uVar33 + 7;
                    uVar47 = (*pbVar26 & 0x7f) << (ulong)uVar41 | uVar47;
                    pbVar48 = pbVar36 + 1;
                    pbVar50 = pbVar49 + 1;
                  } while ((char)*pbVar26 < '\0');
                  if (uVar45 != 0) {
                    if (2 < uVar45) {
                      lVar42 = uVar59 - 2;
                      do {
                        if (*pbVar36 - 0x40 < 0x20) {
                          *pbVar36 = local_170[*pbVar36 - 0x40];
                        }
                        lVar42 = lVar42 + -1;
                        pbVar36 = pbVar36 + 1;
                      } while (lVar42 != 0);
                    }
                    lVar51 = lVar51 + uVar59;
                  }
                  uVar59 = uVar57;
                  if (uVar20 != 0) {
                    do {
                      if (*pbVar49 - 0x40 < 0x20) {
                        *pbVar49 = local_170[*pbVar49 - 0x40];
                      }
                      uVar59 = uVar59 - 1;
                      pbVar49 = pbVar49 + 1;
                    } while (uVar59 != 0);
                    lVar51 = lVar51 + uVar57;
                  }
                  if (uVar47 != 0) {
                    uVar33 = 0;
                    do {
                      uVar45 = *(byte *)(lVar68 + lVar51) - 0x40;
                      if (uVar45 < 0x20) {
                        *(byte *)(lVar68 + lVar51) = local_170[uVar45];
                      }
                      lVar51 = lVar51 + 2;
                      do {
                        pcVar4 = (char *)(lVar68 + lVar51);
                        lVar51 = lVar51 + 1;
                      } while (*pcVar4 < '\0');
                      do {
                        pcVar4 = (char *)(lVar68 + lVar51);
                        lVar51 = lVar51 + 1;
                      } while (*pcVar4 < '\0');
                      uVar33 = uVar33 + 1;
                    } while (uVar33 != uVar47);
                  }
                }
              }
            }
          }
          uVar33 = 0;
          uVar59 = 0;
          do {
            pbVar26 = pbVar46 + lVar27;
            lVar27 = lVar27 + 1;
            uVar45 = uVar33 & 0x1f;
            uVar33 = uVar33 + 7;
            uVar45 = (*pbVar26 & 0x7f) << (ulong)uVar45 | (uint)uVar59;
            uVar59 = (ulong)uVar45;
          } while ((char)*pbVar26 < '\0');
          if ((int)uVar45 < 0) {
LAB_00642ae8:
                    /* WARNING: Subroutine does not return */
            FUN_00628ac4(param_1);
          }
          lVar51 = FUN_00628ad8(param_1,uVar59 << 2,puVar25[2]);
          *(uint *)(puVar25 + 0x88) = uVar45;
          *(long *)(puVar25 + 0x10) = lVar51;
          if (uVar45 != 0) {
            lVar42 = 0;
            do {
              pbVar26 = pbVar46 + lVar27;
              lVar27 = lVar27 + 4;
              *(undefined4 *)(lVar51 + lVar42 * 4) = *(undefined4 *)pbVar26;
              lVar42 = lVar42 + 1;
            } while (lVar42 < *(int *)(puVar25 + 0x88));
          }
          uVar33 = 0;
          uVar59 = 0;
          *(long *)(puVar25 + 0x20) = lVar51;
          do {
            pbVar26 = pbVar46 + lVar27;
            lVar27 = lVar27 + 1;
            uVar45 = uVar33 & 0x1f;
            uVar33 = uVar33 + 7;
            uVar45 = (*pbVar26 & 0x7f) << (ulong)uVar45 | (uint)uVar59;
            uVar59 = (ulong)uVar45;
          } while ((char)*pbVar26 < '\0');
          if ((int)uVar45 < 0) goto LAB_00642ae8;
          lVar51 = FUN_00628ad8(param_1,uVar59 << 4,puVar25[2]);
          *(uint *)(puVar25 + 0x98) = uVar45;
          *(long *)(puVar25 + 8) = lVar51;
          if (uVar45 != 0) {
            lVar35 = uVar59 - 1;
            uVar60 = (undefined1)((ulong)lVar35 >> 8);
            uVar61 = (undefined1)((ulong)lVar35 >> 0x10);
            uVar62 = (undefined1)((ulong)lVar35 >> 0x18);
            uVar63 = (undefined1)((ulong)lVar35 >> 0x20);
            uVar64 = (undefined1)((ulong)lVar35 >> 0x28);
            uVar65 = (undefined1)((ulong)lVar35 >> 0x30);
            uVar66 = (undefined1)((ulong)lVar35 >> 0x38);
            uVar59 = (ulong)(uVar45 + 3) & 0xfffffffc;
            puVar43 = (undefined4 *)(lVar51 + 0x2c);
            lVar42 = lVar15;
            lVar68 = lVar16;
            lVar70 = lVar17;
            lVar51 = lVar52;
            do {
              auVar72[8] = (char)lVar35;
              auVar72._0_8_ = lVar35;
              auVar72[9] = uVar60;
              auVar72[10] = uVar61;
              auVar72[0xb] = uVar62;
              auVar72[0xc] = uVar63;
              auVar72[0xd] = uVar64;
              auVar72[0xe] = uVar65;
              auVar72[0xf] = uVar66;
              auVar11._8_8_ = lVar42;
              auVar11._0_8_ = lVar51;
              auVar72 = NEON_cmhs(auVar72,auVar11,8);
              if ((auVar72 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
                puVar43[-8] = 0;
              }
              if ((auVar72 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
                puVar43[-4] = 0;
              }
              auVar8[8] = (char)lVar35;
              auVar8._0_8_ = lVar35;
              auVar8[9] = uVar60;
              auVar8[10] = uVar61;
              auVar8[0xb] = uVar62;
              auVar8[0xc] = uVar63;
              auVar8[0xd] = uVar64;
              auVar8[0xe] = uVar65;
              auVar8[0xf] = uVar66;
              auVar13._8_8_ = lVar70;
              auVar13._0_8_ = lVar68;
              auVar72 = NEON_cmhs(auVar8,auVar13,8);
              if ((auVar72 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
                *puVar43 = 0;
              }
              if ((auVar72 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
                puVar43[4] = 0;
              }
              uVar59 = uVar59 - 4;
              puVar43 = puVar43 + 0x10;
              lVar68 = lVar68 + 4;
              lVar70 = lVar70 + 4;
              lVar51 = lVar51 + 4;
              lVar42 = lVar42 + 4;
            } while (uVar59 != 0);
            lVar51 = 0;
            do {
              bVar18 = pbVar46[lVar27];
              lVar42 = lVar27 + 1;
              if (bVar18 < 6) {
                if (bVar18 < 3) {
                  if (bVar18 == 1) {
                    puVar53 = (uint *)(*(long *)(puVar25 + 8) + lVar51 * 0x10);
                    *puVar53 = (uint)pbVar46[lVar42];
                    puVar53[3] = 1;
                    lVar42 = lVar27 + 2;
                  }
                  else if (bVar18 == 2) {
                    puVar28 = (undefined8 *)(*(long *)(puVar25 + 8) + lVar51 * 0x10);
                    *puVar28 = *(undefined8 *)(pbVar46 + lVar42);
                    *(undefined4 *)((long)puVar28 + 0xc) = 3;
                    lVar42 = lVar27 + 9;
                  }
                }
                else if (bVar18 == 3) {
                  uVar33 = 0;
                  uVar45 = 0;
                  do {
                    pbVar26 = pbVar46 + lVar42;
                    lVar42 = lVar42 + 1;
                    uVar20 = uVar33 & 0x1f;
                    uVar33 = uVar33 + 7;
                    uVar45 = (*pbVar26 & 0x7f) << (ulong)uVar20 | uVar45;
                  } while ((char)*pbVar26 < '\0');
                  if (uVar45 == 0) {
                    uVar24 = 0;
                  }
                  else {
                    uVar24 = *(undefined8 *)(param_2[1] + (ulong)(uVar45 - 1) * 8);
                  }
                  puVar28 = (undefined8 *)(*(long *)(puVar25 + 8) + lVar51 * 0x10);
                  *puVar28 = uVar24;
                  *(undefined4 *)((long)puVar28 + 0xc) = 6;
                }
                else if (bVar18 == 4) {
                  local_180 = *(undefined8 *)(puVar25 + 8);
                  local_178 = *(undefined4 *)(pbVar46 + lVar42);
                  lVar42 = *(long *)(param_1 + 8);
                  if (*(char *)(*(long *)(param_1 + 0x58) + 5) == '\0') {
                    *(undefined4 *)(lVar42 + 0xc) = 0;
                    lVar42 = lVar42 + 0x10;
                    *(long *)(param_1 + 8) = lVar42;
                  }
                  else {
                    iVar19 = FUN_00622fe0(param_1,FUN_00642af4,&local_180,
                                          lVar42 - *(long *)(param_1 + 0x30),0);
                    lVar42 = *(long *)(param_1 + 8);
                    if (iVar19 != 0) {
                      *(undefined4 *)(lVar42 + -4) = 0;
                    }
                  }
                  uVar24 = *(undefined8 *)(lVar42 + -0x10);
                  puVar28 = (undefined8 *)(*(long *)(puVar25 + 8) + lVar51 * 0x10);
                  puVar28[1] = *(undefined8 *)(lVar42 + -8);
                  *puVar28 = uVar24;
                  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -0x10;
                  lVar42 = lVar27 + 5;
                }
                else if (bVar18 == 5) {
                  uVar33 = 0;
                  uVar45 = 0;
                  do {
                    pbVar26 = pbVar46 + lVar42;
                    lVar42 = lVar42 + 1;
                    uVar20 = uVar33 & 0x1f;
                    uVar33 = uVar33 + 7;
                    uVar45 = (*pbVar26 & 0x7f) << (ulong)uVar20 | uVar45;
                  } while ((char)*pbVar26 < '\0');
                  lVar27 = FUN_0062f204(param_1,0,uVar45);
                  if (0 < (int)uVar45) {
                    uVar33 = 0;
                    do {
                      uVar20 = 0;
                      uVar47 = 0;
                      do {
                        pbVar26 = pbVar46 + lVar42;
                        lVar42 = lVar42 + 1;
                        uVar41 = uVar20 & 0x1f;
                        uVar20 = uVar20 + 7;
                        uVar47 = (*pbVar26 & 0x7f) << (ulong)uVar41 | uVar47;
                      } while ((char)*pbVar26 < '\0');
                      puVar28 = (undefined8 *)
                                FUN_0062f4a4(param_1,lVar27,
                                             *(long *)(puVar25 + 8) + (long)(int)uVar47 * 0x10);
                      uVar33 = uVar33 + 1;
                      *puVar28 = 0;
                      *(undefined4 *)((long)puVar28 + 0xc) = 3;
                    } while (uVar33 != uVar45);
                  }
                  uVar40 = 7;
                  plVar31 = (long *)(*(long *)(puVar25 + 8) + lVar51 * 0x10);
                  *plVar31 = lVar27;
                  goto LAB_00642118;
                }
              }
              else if (bVar18 < 8) {
                if (bVar18 == 6) {
                  uVar33 = 0;
                  uVar59 = 0;
                  do {
                    pbVar26 = pbVar46 + lVar42;
                    lVar42 = lVar42 + 1;
                    uVar45 = uVar33 & 0x1f;
                    uVar33 = uVar33 + 7;
                    uVar59 = (ulong)((*pbVar26 & 0x7f) << (ulong)uVar45 | (uint)uVar59);
                  } while ((char)*pbVar26 < '\0');
                  lVar27 = FUN_006231f0(param_1,*(undefined1 *)
                                                 (*(long *)(param_2[4] + uVar59 * 8) + 3),uVar34);
                  uVar40 = 8;
                  *(bool *)(lVar27 + 6) = *(char *)(lVar27 + 4) != '\0';
                  plVar31 = (long *)(*(long *)(puVar25 + 8) + lVar51 * 0x10);
                  *plVar31 = lVar27;
                }
                else {
                  if (bVar18 != 7) goto LAB_0064242c;
                  pbVar26 = pbVar46 + lVar42;
                  lVar42 = lVar27 + 0x11;
                  plVar31 = (long *)(*(long *)(puVar25 + 8) + lVar51 * 0x10);
                  uVar67 = *(undefined4 *)(pbVar46 + lVar27 + 9);
                  uVar40 = 5;
                  *plVar31 = *(long *)pbVar26;
                  *(undefined4 *)(plVar31 + 1) = uVar67;
                }
LAB_00642118:
                *(undefined4 *)((long)plVar31 + 0xc) = uVar40;
              }
              else if (bVar18 == 8) {
                uVar33 = 0;
                uVar59 = 0;
                do {
                  pbVar26 = pbVar46 + lVar42;
                  lVar42 = lVar42 + 1;
                  uVar45 = uVar33 & 0x1f;
                  uVar33 = uVar33 + 7;
                  uVar45 = (*pbVar26 & 0x7f) << (ulong)uVar45 | (uint)uVar59;
                  uVar59 = (ulong)uVar45;
                } while ((char)*pbVar26 < '\0');
                lVar27 = FUN_0062f204(param_1,0,uVar59);
                piVar32 = (int *)FUN_00628ad8(param_1,uVar59 << 2,0);
                if (uVar45 == 0) {
LAB_006423f4:
                  plVar31 = (long *)(*(long *)(puVar25 + 8) + lVar51 * 0x10);
                  *plVar31 = lVar27;
                  *(undefined4 *)((long)plVar31 + 0xc) = 7;
                  if (piVar32 == (int *)0x0) goto LAB_0064242c;
                }
                else {
                  uVar33 = 0;
                  lVar68 = 0;
                  do {
                    uVar20 = 0;
                    uVar47 = 0;
                    do {
                      lVar70 = lVar42;
                      uVar41 = uVar20 & 0x1f;
                      uVar20 = uVar20 + 7;
                      uVar47 = (pbVar46[lVar70] & 0x7f) << (ulong)uVar41 | uVar47;
                      lVar42 = lVar70 + 1;
                    } while ((char)pbVar46[lVar70] < '\0');
                    plVar31 = (long *)FUN_0062f4a4(param_1,lVar27,
                                                   *(long *)(puVar25 + 8) + (long)(int)uVar47 * 0x10
                                                  );
                    lVar35 = lVar68;
                    if ((int)*(uint *)(pbVar46 + lVar70 + 1) < 0) {
LAB_00642268:
                      *plVar31 = 0;
                      *(undefined4 *)((long)plVar31 + 0xc) = 3;
                    }
                    else {
                      plVar1 = (long *)(*(long *)(puVar25 + 8) +
                                       (ulong)*(uint *)(pbVar46 + lVar70 + 1) * 0x10);
                      if (*(int *)((long)plVar1 + 0xc) == 0) {
                        lVar35 = lVar68 + 1;
                        piVar32[lVar68] = uVar47;
                        goto LAB_00642268;
                      }
                      lVar42 = *plVar1;
                      plVar31[1] = plVar1[1];
                      *plVar31 = lVar42;
                      if (((5 < *(int *)((long)plVar1 + 0xc)) &&
                          ((*(byte *)(lVar27 + 1) >> 2 & 1) != 0)) &&
                         ((*(byte *)(*plVar1 + 1) & 3) != 0)) {
                        lVar42 = *(long *)(param_1 + 0x18);
                        if (*(char *)(lVar42 + 0x21) == '\x02') {
                          FUN_00624a78();
                        }
                        else {
                          *(byte *)(lVar27 + 1) = *(byte *)(lVar27 + 1) & 0xfb;
                          *(undefined8 *)(lVar27 + 0x28) = *(undefined8 *)(lVar42 + 0x30);
                          *(long *)(lVar42 + 0x30) = lVar27;
                        }
                      }
                    }
                    uVar33 = uVar33 + 1;
                    lVar42 = lVar70 + 5;
                    lVar68 = lVar35;
                  } while (uVar33 != uVar45);
                  piVar56 = piVar32;
                  if (lVar35 == 0) goto LAB_006423f4;
                  do {
                    lVar68 = FUN_0062f4a4(param_1,lVar27,
                                          *(long *)(puVar25 + 8) + (long)*piVar56 * 0x10);
                    lVar35 = lVar35 + -1;
                    *(undefined4 *)(lVar68 + 0xc) = 0;
                    piVar56 = piVar56 + 1;
                  } while (lVar35 != 0);
                  plVar31 = (long *)(*(long *)(puVar25 + 8) + lVar51 * 0x10);
                  *plVar31 = lVar27;
                  *(undefined4 *)((long)plVar31 + 0xc) = 7;
                }
                FUN_00628eb0(param_1,piVar32,uVar59 << 2,0);
              }
              else if (bVar18 == 9) {
                uVar57 = 0;
                uVar59 = 0;
                lVar27 = lVar27 + 2;
                do {
                  pbVar26 = pbVar46 + lVar27;
                  lVar27 = lVar27 + 1;
                  uVar44 = uVar57 & 0x3f;
                  uVar57 = (ulong)((int)uVar57 + 7);
                  uVar59 = ((ulong)*pbVar26 & 0x7f) << uVar44 | uVar59;
                } while ((char)*pbVar26 < '\0');
                uVar57 = -uVar59;
                if (pbVar46[lVar42] == 0) {
                  uVar57 = uVar59;
                }
                puVar2 = (ulong *)(*(long *)(puVar25 + 8) + lVar51 * 0x10);
                *puVar2 = uVar57;
                *(undefined4 *)((long)puVar2 + 0xc) = 4;
                lVar42 = lVar27;
              }
              else if (bVar18 == 10) {
                uVar33 = 0;
                uVar45 = 0;
                pbVar26 = pbVar46 + lVar27 + 3;
                do {
                  pbVar49 = pbVar26;
                  pbVar36 = pbVar46 + lVar42;
                  lVar42 = lVar42 + 1;
                  uVar20 = uVar33 & 0x1f;
                  uVar33 = uVar33 + 7;
                  uVar45 = (*pbVar36 & 0x7f) << (ulong)uVar20 | uVar45;
                  pbVar26 = pbVar49 + 1;
                } while ((char)*pbVar36 < '\0');
                lVar27 = *(long *)(puVar25 + 8);
                uVar33 = 0;
                uVar20 = 0;
                do {
                  pbVar36 = pbVar49;
                  pbVar26 = pbVar46 + lVar42;
                  lVar42 = lVar42 + 1;
                  uVar47 = uVar33 & 0x1f;
                  uVar33 = uVar33 + 7;
                  uVar20 = (*pbVar26 & 0x7f) << (ulong)uVar47 | uVar20;
                  pbVar49 = pbVar36 + 1;
                } while ((char)*pbVar26 < '\0');
                uVar33 = 0;
                uVar59 = 0;
                do {
                  bVar18 = *pbVar36;
                  lVar42 = lVar42 + 1;
                  uVar47 = uVar33 & 0x1f;
                  uVar33 = uVar33 + 7;
                  uVar47 = (bVar18 & 0x7f) << (ulong)uVar47 | (uint)uVar59;
                  uVar59 = (ulong)uVar47;
                  pbVar36 = pbVar36 + 1;
                } while ((char)bVar18 < '\0');
                uVar33 = uVar47 + uVar20;
                uVar57 = (ulong)uVar33;
                lVar68 = FUN_00628ad8(param_1,uVar57 << 3,param_1[4]);
                lVar70 = FUN_0062f204(param_1,0,uVar57);
                if (uVar33 != 0) {
                  uVar44 = 0;
                  do {
                    uVar41 = 0;
                    uVar37 = 0;
                    do {
                      pbVar26 = pbVar46 + lVar42;
                      lVar42 = lVar42 + 1;
                      uVar6 = uVar41 & 0x1f;
                      uVar41 = uVar41 + 7;
                      uVar37 = (ulong)((*pbVar26 & 0x7f) << (ulong)uVar6 | (uint)uVar37);
                    } while ((char)*pbVar26 < '\0');
                    *(undefined8 *)(lVar68 + uVar44 * 8) =
                         *(undefined8 *)(*(long *)(puVar25 + 8) + uVar37 * 0x10);
                    pdVar29 = (double *)FUN_0062f634(param_1,lVar70);
                    uVar37 = uVar44 & 0xffffffff;
                    uVar44 = uVar44 + 1;
                    *(undefined4 *)((long)pdVar29 + 0xc) = 3;
                    *pdVar29 = (double)uVar37;
                  } while (uVar44 != uVar57);
                }
                *(undefined1 *)(lVar70 + 4) = 1;
                uVar24 = *(undefined8 *)(lVar27 + (ulong)uVar45 * 0x10);
                puVar30 = (undefined1 *)FUN_00628d60(param_1,0x40,param_1[4]);
                bVar18 = *(byte *)(*(long *)(param_1 + 0x18) + 0x20);
                *puVar30 = 0xc;
                puVar30[1] = bVar18 & 3;
                lVar5 = param_1[4];
                *(undefined8 *)(puVar30 + 0x10) = uVar24;
                *(lua_State *)(puVar30 + 2) = lVar5;
                if (-1 < (int)uVar47) {
                  lVar27 = FUN_00628ad8(param_1,uVar59 << 4);
                  *(long *)(puVar30 + 0x18) = lVar27;
                  if (uVar47 != 0) {
                    lVar38 = uVar59 - 1;
                    uVar60 = (undefined1)((ulong)lVar38 >> 8);
                    uVar61 = (undefined1)((ulong)lVar38 >> 0x10);
                    uVar62 = (undefined1)((ulong)lVar38 >> 0x18);
                    uVar63 = (undefined1)((ulong)lVar38 >> 0x20);
                    uVar64 = (undefined1)((ulong)lVar38 >> 0x28);
                    uVar65 = (undefined1)((ulong)lVar38 >> 0x30);
                    uVar66 = (undefined1)((ulong)lVar38 >> 0x38);
                    uVar59 = (ulong)(uVar47 + 3) & 0xfffffffc;
                    puVar43 = (undefined4 *)(lVar27 + 0x2c);
                    lVar35 = lVar15;
                    lVar69 = lVar16;
                    lVar71 = lVar17;
                    lVar27 = lVar52;
                    do {
                      auVar9[8] = (char)lVar38;
                      auVar9._0_8_ = lVar38;
                      auVar9[9] = uVar60;
                      auVar9[10] = uVar61;
                      auVar9[0xb] = uVar62;
                      auVar9[0xc] = uVar63;
                      auVar9[0xd] = uVar64;
                      auVar9[0xe] = uVar65;
                      auVar9[0xf] = uVar66;
                      auVar12._8_8_ = lVar35;
                      auVar12._0_8_ = lVar27;
                      auVar72 = NEON_cmhs(auVar9,auVar12,8);
                      if ((auVar72 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
                        puVar43[-8] = 0;
                      }
                      if ((auVar72 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
                        puVar43[-4] = 0;
                      }
                      auVar10[8] = (char)lVar38;
                      auVar10._0_8_ = lVar38;
                      auVar10[9] = uVar60;
                      auVar10[10] = uVar61;
                      auVar10[0xb] = uVar62;
                      auVar10[0xc] = uVar63;
                      auVar10[0xd] = uVar64;
                      auVar10[0xe] = uVar65;
                      auVar10[0xf] = uVar66;
                      auVar14._8_8_ = lVar71;
                      auVar14._0_8_ = lVar69;
                      auVar72 = NEON_cmhs(auVar10,auVar14,8);
                      if ((auVar72 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
                        *puVar43 = 0;
                      }
                      if ((auVar72 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
                        puVar43[4] = 0;
                      }
                      uVar59 = uVar59 - 4;
                      puVar43 = puVar43 + 0x10;
                      lVar69 = lVar69 + 4;
                      lVar71 = lVar71 + 4;
                      lVar27 = lVar27 + 4;
                      lVar35 = lVar35 + 4;
                    } while (uVar59 != 0);
                  }
                  *(long *)(puVar30 + 0x20) = lVar70;
                  *(long *)(puVar30 + 0x28) = lVar68;
                  uVar24 = FUN_0062f204(param_1,0,1);
                  *(undefined8 *)(puVar30 + 0x30) = uVar24;
                  lVar27 = FUN_00623310(param_1,0,*(undefined8 *)(param_1 + 0x58));
                  *(undefined8 *)(lVar27 + 0x28) = 0;
                  *(char **)(lVar27 + 0x30) = "luaR_createclassinstance";
                  *(code **)(lVar27 + 0x20) = FUN_00624eec;
                  plVar31 = (long *)FUN_0062f634(param_1,*(undefined8 *)(puVar30 + 0x30),
                                                 *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x428))
                  ;
                  *plVar31 = lVar27;
                  *(undefined4 *)((long)plVar31 + 0xc) = 8;
                  uVar40 = 0xc;
                  *(undefined1 *)(*(long *)(puVar30 + 0x30) + 4) = 1;
                  *(uint *)(puVar30 + 0x38) = uVar20;
                  *(uint *)(puVar30 + 0x3c) = uVar33;
                  plVar31 = (long *)(*(long *)(puVar25 + 8) + lVar51 * 0x10);
                  *plVar31 = (long)puVar30;
                  goto LAB_00642118;
                }
                goto LAB_00642ae8;
              }
LAB_0064242c:
              lVar27 = lVar42;
              lVar51 = lVar51 + 1;
            } while (lVar51 < *(int *)(puVar25 + 0x98));
          }
          if ((*PTR_LuauUdataDirectAccess4_0067dbc8 != '\0') && (0 < *(int *)(puVar25 + 0x88))) {
            puVar53 = *(uint **)(puVar25 + 0x10);
            do {
              uVar45 = *puVar53;
              uVar33 = uVar45 & 0xff;
              if (uVar33 == 0xf) {
                uVar33 = 0x53;
LAB_0064249c:
                if (puVar53[1] >> 0x10 == 0) {
                  lVar51 = *(long *)(*(long *)(puVar25 + 8) + (ulong)puVar53[1] * 0x10);
                  uVar20 = (uint)*(ushort *)(lVar51 + 4);
                  if (*(ushort *)(lVar51 + 4) == 0x8000) {
                    if (*(code **)(*(long *)(param_1 + 0x18) + 0x528) == (code *)0x0) {
                      uVar20 = 0xffff;
                    }
                    else {
                      uVar20 = (**(code **)(*(long *)(param_1 + 0x18) + 0x528))
                                         (param_1,lVar51 + 0x18,*(undefined4 *)(lVar51 + 0x14));
                      uVar45 = *puVar53;
                    }
                    *(short *)(lVar51 + 4) = (short)uVar20;
                  }
                  if ((uVar20 >> 0xf & 1) == 0) {
                    uVar45 = uVar45 & 0xffffff00 | uVar33;
                    *puVar53 = uVar45;
                  }
                }
              }
              else {
                if (uVar33 == 0x14) {
                  uVar33 = 0x55;
                  goto LAB_0064249c;
                }
                if (uVar33 == 0x10) {
                  uVar33 = 0x54;
                  goto LAB_0064249c;
                }
              }
              uVar33 = (uVar45 & 0xff) - 7;
              if ((uVar33 < 0x3c) && ((1L << ((ulong)uVar33 & 0x3f) & 0x829400003f02323U) != 0)) {
                lVar51 = 2;
              }
              else {
                uVar33 = (uVar45 & 0xff) - 0x4a;
                if ((0xd < uVar33) || (lVar51 = 2, (1 << (ulong)(uVar33 & 0x1f) & 0x3e7bU) == 0)) {
                  lVar51 = 1;
                }
              }
              puVar53 = puVar53 + lVar51;
            } while (puVar53 < (uint *)(*(long *)(puVar25 + 0x10) +
                                       (long)*(int *)(puVar25 + 0x88) * 4));
          }
          uVar33 = 0;
          uVar59 = 0;
          do {
            pbVar26 = pbVar46 + lVar27;
            lVar27 = lVar27 + 1;
            uVar45 = uVar33 & 0x1f;
            uVar33 = uVar33 + 7;
            uVar45 = (*pbVar26 & 0x7f) << (ulong)uVar45 | (uint)uVar59;
            uVar59 = (ulong)uVar45;
          } while ((char)*pbVar26 < '\0');
          if ((int)uVar45 < 0) goto LAB_00642ae8;
          uVar24 = FUN_00628ad8(param_1,uVar59 << 3,puVar25[2]);
          *(uint *)(puVar25 + 0x8c) = uVar45;
          *(undefined8 *)(puVar25 + 0x18) = uVar24;
          if (uVar45 != 0) {
            uVar57 = 0;
            do {
              uVar33 = 0;
              uVar45 = 0;
              do {
                pbVar26 = pbVar46 + lVar27;
                lVar27 = lVar27 + 1;
                uVar20 = uVar33 & 0x1f;
                uVar33 = uVar33 + 7;
                uVar45 = (*pbVar26 & 0x7f) << (ulong)uVar20 | uVar45;
              } while ((char)*pbVar26 < '\0');
              *(undefined8 *)(*(long *)(puVar25 + 0x18) + uVar57 * 8) =
                   *(undefined8 *)(param_2[4] + (ulong)uVar45 * 8);
              uVar57 = uVar57 + 1;
            } while (uVar57 != uVar59);
          }
          uVar33 = 0;
          uVar45 = 0;
          pbVar26 = pbVar46 + lVar27 + 4;
          do {
            pbVar49 = pbVar26;
            pbVar36 = pbVar46 + lVar27;
            lVar27 = lVar27 + 1;
            uVar20 = uVar33 & 0x1f;
            uVar33 = uVar33 + 7;
            uVar45 = (*pbVar36 & 0x7f) << (ulong)uVar20 | uVar45;
            pbVar26 = pbVar49 + 1;
          } while ((char)*pbVar36 < '\0');
          uVar33 = 0;
          uVar20 = 0;
          *(uint *)(puVar25 + 0xa4) = uVar45;
          do {
            lVar51 = lVar27;
            pbVar26 = pbVar49;
            uVar45 = uVar33 & 0x1f;
            uVar33 = uVar33 + 7;
            uVar20 = (pbVar46[lVar51] & 0x7f) << (ulong)uVar45 | uVar20;
            pbVar49 = pbVar26 + 1;
            lVar27 = lVar51 + 1;
          } while ((char)pbVar46[lVar51] < '\0');
          if (uVar20 == 0) {
            uVar24 = 0;
          }
          else {
            uVar24 = *(undefined8 *)(param_2[1] + (ulong)(uVar20 - 1) * 8);
          }
          *(undefined8 *)(puVar25 + 0x60) = uVar24;
          lVar27 = lVar51 + 2;
          if (pbVar46[lVar51 + 1] != 0) {
            bVar18 = pbVar46[lVar27];
            lVar27 = lVar51 + 3;
            *(uint *)(puVar25 + 0xa0) = (uint)bVar18;
            iVar3 = *(int *)(puVar25 + 0x88) + -1 >> (bVar18 & 0x1f);
            uVar59 = (long)*(int *)(puVar25 + 0x88) + 3U & 0xfffffffffffffffc;
            iVar19 = (int)uVar59 + iVar3 * 4 + 4;
            lVar51 = FUN_00628ad8(param_1,(long)iVar19,puVar25[2]);
            *(int *)(puVar25 + 0x9c) = iVar19;
            *(long *)(puVar25 + 0x38) = lVar51;
            *(ulong *)(puVar25 + 0x40) = lVar51 + uVar59;
            if (0 < *(int *)(puVar25 + 0x88)) {
              lVar51 = 0;
              cVar39 = '\0';
              do {
                lVar27 = lVar27 + 1;
                cVar39 = *pbVar26 + cVar39;
                *(char *)(*(long *)(puVar25 + 0x38) + lVar51) = cVar39;
                lVar51 = lVar51 + 1;
                pbVar26 = pbVar26 + 1;
              } while (lVar51 < *(int *)(puVar25 + 0x88));
            }
            if (-1 < iVar3) {
              iVar19 = 0;
              uVar59 = (ulong)(iVar3 + 1);
              piVar32 = *(int **)(puVar25 + 0x40);
              do {
                pbVar26 = pbVar46 + lVar27;
                uVar59 = uVar59 - 1;
                lVar27 = lVar27 + 4;
                iVar19 = *(int *)pbVar26 + iVar19;
                *piVar32 = iVar19;
                piVar32 = piVar32 + 1;
              } while (uVar59 != 0);
            }
          }
          uVar59 = (ulong)uVar58;
          lVar51 = lVar27 + 1;
          if (pbVar46[lVar27] != 0) {
            uVar33 = 0;
            uVar57 = 0;
            do {
              pbVar26 = pbVar46 + lVar51;
              lVar51 = lVar51 + 1;
              uVar45 = uVar33 & 0x1f;
              uVar33 = uVar33 + 7;
              uVar45 = (*pbVar26 & 0x7f) << (ulong)uVar45 | (uint)uVar57;
              uVar57 = (ulong)uVar45;
            } while ((char)*pbVar26 < '\0');
            if ((int)uVar45 < 0) goto LAB_00642ae8;
            lVar27 = FUN_00628ad8(param_1,(uVar57 * 2 + (ulong)uVar45) * 8,puVar25[2]);
            *(uint *)(puVar25 + 0x90) = uVar45;
            *(long *)(puVar25 + 0x48) = lVar27;
            if (uVar45 != 0) {
              lVar42 = param_2[1];
              uVar44 = 0;
              do {
                uVar33 = 0;
                uVar45 = 0;
                pbVar26 = pbVar46 + lVar51 + 2;
                do {
                  pbVar49 = pbVar26;
                  pbVar36 = pbVar46 + lVar51;
                  lVar51 = lVar51 + 1;
                  uVar20 = uVar33 & 0x1f;
                  uVar33 = uVar33 + 7;
                  uVar45 = (*pbVar36 & 0x7f) << (ulong)uVar20 | uVar45;
                  pbVar26 = pbVar49 + 1;
                } while ((char)*pbVar36 < '\0');
                if (uVar45 == 0) {
                  uVar24 = 0;
                }
                else {
                  uVar24 = *(undefined8 *)(lVar42 + (ulong)(uVar45 - 1) * 8);
                }
                uVar33 = 0;
                uVar45 = 0;
                *(undefined8 *)(lVar27 + uVar44 * 0x18) = uVar24;
                do {
                  pbVar36 = pbVar49;
                  pbVar26 = pbVar46 + lVar51;
                  lVar51 = lVar51 + 1;
                  uVar20 = uVar33 & 0x1f;
                  uVar33 = uVar33 + 7;
                  uVar45 = (*pbVar26 & 0x7f) << (ulong)uVar20 | uVar45;
                  pbVar49 = pbVar36 + 1;
                } while ((char)*pbVar26 < '\0');
                uVar33 = 0;
                uVar20 = 0;
                *(uint *)(lVar27 + uVar44 * 0x18 + 8) = uVar45;
                do {
                  lVar70 = lVar51;
                  bVar18 = *pbVar36;
                  uVar45 = uVar33 & 0x1f;
                  lVar68 = lVar70 + 1;
                  uVar33 = uVar33 + 7;
                  uVar20 = (bVar18 & 0x7f) << (ulong)uVar45 | uVar20;
                  pbVar36 = pbVar36 + 1;
                  lVar51 = lVar68;
                } while ((char)bVar18 < '\0');
                lVar35 = lVar27 + uVar44 * 0x18;
                uVar44 = uVar44 + 1;
                *(uint *)(lVar35 + 0xc) = uVar20;
                lVar51 = lVar70 + 2;
                *(byte *)(lVar35 + 0x10) = pbVar46[lVar68];
              } while (uVar44 != uVar57);
            }
            uVar33 = 0;
            uVar57 = 0;
            do {
              pbVar26 = pbVar46 + lVar51;
              lVar51 = lVar51 + 1;
              uVar45 = uVar33 & 0x1f;
              uVar33 = uVar33 + 7;
              uVar45 = (*pbVar26 & 0x7f) << (ulong)uVar45 | (uint)uVar57;
              uVar57 = (ulong)uVar45;
            } while ((char)*pbVar26 < '\0');
            if ((int)uVar45 < 0) goto LAB_00642ae8;
            uVar24 = FUN_00628ad8(param_1,uVar57 << 3,puVar25[2]);
            *(uint *)(puVar25 + 0x94) = uVar45;
            *(undefined8 *)(puVar25 + 0x50) = uVar24;
            if (uVar45 != 0) {
              uVar44 = 0;
              do {
                uVar33 = 0;
                uVar45 = 0;
                do {
                  pbVar26 = pbVar46 + lVar51;
                  lVar51 = lVar51 + 1;
                  uVar20 = uVar33 & 0x1f;
                  uVar33 = uVar33 + 7;
                  uVar45 = (*pbVar26 & 0x7f) << (ulong)uVar20 | uVar45;
                } while ((char)*pbVar26 < '\0');
                if (uVar45 == 0) {
                  uVar24 = 0;
                }
                else {
                  uVar24 = *(undefined8 *)(param_2[1] + (ulong)(uVar45 - 1) * 8);
                }
                *(undefined8 *)(*(long *)(puVar25 + 0x50) + uVar44 * 8) = uVar24;
                uVar44 = uVar44 + 1;
              } while (uVar44 != uVar57);
            }
          }
          if (10 < uVar58) {
            uVar33 = 0;
            uVar57 = 0;
            do {
              pbVar26 = pbVar46 + lVar51;
              lVar51 = lVar51 + 1;
              uVar45 = uVar33 & 0x1f;
              uVar33 = uVar33 + 7;
              uVar45 = (*pbVar26 & 0x7f) << (ulong)uVar45 | (uint)uVar57;
              uVar57 = (ulong)uVar45;
            } while ((char)*pbVar26 < '\0');
            *(uint *)(puVar25 + 0xb8) = uVar45;
            if (uVar45 != 0) {
              uVar24 = FUN_00628ad8(param_1,uVar57 << 4,puVar25[2]);
              *(undefined8 *)(puVar25 + 0xb0) = uVar24;
              if (*(int *)(puVar25 + 0xb8) != 0) {
                uVar57 = 0;
                do {
                  lVar27 = *(long *)(puVar25 + 0xb0);
                  uVar33 = 0;
                  uVar45 = 0;
                  pbVar26 = pbVar46 + lVar51;
                  lVar51 = lVar51 + 1;
                  *(uint *)(lVar27 + uVar57 * 0x10) = (uint)*pbVar26;
                  do {
                    pbVar26 = pbVar46 + lVar51;
                    lVar51 = lVar51 + 1;
                    uVar20 = uVar33 & 0x1f;
                    uVar33 = uVar33 + 7;
                    uVar45 = (*pbVar26 & 0x7f) << (ulong)uVar20 | uVar45;
                  } while ((char)*pbVar26 < '\0');
                  lVar27 = lVar27 + uVar57 * 0x10;
                  uVar57 = uVar57 + 1;
                  *(undefined8 *)(lVar27 + 8) = 0;
                  *(uint *)(lVar27 + 4) = uVar45;
                } while (uVar57 < *(uint *)(puVar25 + 0xb8));
              }
            }
          }
          *(undefined1 **)(param_2[4] + uVar55 * 8) = puVar25;
          uVar55 = uVar55 + 1;
        } while (uVar55 != uVar54);
      }
      uVar58 = 0;
      uVar59 = 0;
      pbVar46 = pbVar46 + lVar51;
      do {
        bVar18 = *pbVar46;
        uVar33 = uVar58 & 0x1f;
        uVar58 = uVar58 + 7;
        uVar59 = (ulong)((bVar18 & 0x7f) << (ulong)uVar33 | (uint)uVar59);
        pbVar46 = pbVar46 + 1;
      } while ((char)bVar18 < '\0');
      uVar22 = *(undefined8 *)(param_2[4] + uVar59 * 8);
      if (((byte)param_1[1] >> 2 & 1) != 0) {
        param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
        *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
        *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
      }
      uVar22 = FUN_006231f0(param_1,0,uVar34,uVar22);
      puVar28 = *(undefined8 **)(param_1 + 8);
      *puVar28 = uVar22;
      *(undefined4 *)((long)puVar28 + 0xc) = 8;
      lVar51 = *(long *)(param_1 + 8);
      if (*(long *)(param_1 + 0x28) - lVar51 < 0x11) {
        iVar3 = *(int *)(param_1 + 0x48);
        iVar19 = iVar3 << 1;
        if (iVar3 < 1) {
          iVar19 = iVar3 + 1;
        }
        FUN_006222f4(param_1,iVar19,0);
        lVar51 = *(long *)(param_1 + 8);
      }
      uVar40 = 0;
      *(long *)(param_1 + 8) = lVar51 + 0x10;
      goto LAB_00642ab0;
    }
    sVar21 = strlen(pcVar4);
    uVar22 = FUN_00629c60(local_170,pcVar4,sVar21);
    lua_pushfstringL(param_1,"%s: bytecode version mismatch (expected [%d..%d], got %d)",uVar22,3,
                     0xb,uVar59);
  }
  uVar40 = 1;
LAB_00642ab0:
  *(undefined4 *)((long)param_2 + 0x4c) = uVar40;
  if (*(long *)(lVar7 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00642af4  FUN_00642af4 =====

void FUN_00642af4(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 8);
  if (*(long *)(param_1 + 0x28) - lVar6 < 0x11) {
    iVar1 = *(int *)(param_1 + 0x48);
    iVar3 = iVar1 << 1;
    if (iVar1 < 1) {
      iVar3 = iVar1 + 1;
    }
    FUN_006222f4(param_1,iVar3,0);
    lVar6 = *(long *)(param_1 + 8);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  uVar5 = *param_2;
  uVar2 = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(lVar6 + 0xc) = 0;
  *(long *)(param_1 + 8) = lVar6 + 0x10;
  FUN_00641250(param_1,uVar4,uVar5,lVar6,uVar2,1);
  return;
}


// ===== 00642b68  FUN_00642b68 =====

long * FUN_00642b68(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)((long)param_1 + 0xc) != 3) {
    if ((*(int *)((long)param_1 + 0xc) == 6) &&
       (iVar2 = FUN_00629a28(*param_1 + 0x18,&local_30), iVar2 != 0)) {
      *(undefined4 *)((long)param_2 + 0xc) = 3;
      *param_2 = local_30;
      param_1 = param_2;
    }
    else {
      param_1 = (long *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}


// ===== 00642bf8  FUN_00642bf8 =====

void FUN_00642bf8(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  bVar2 = *(int *)((long)param_2 + 0xc) == 3;
  if (bVar2) {
    lVar3 = FUN_006292c0(*param_2,auStack_68);
    uVar4 = FUN_0062b178(param_1,auStack_68,lVar3 - (long)auStack_68);
    *param_2 = uVar4;
    *(undefined4 *)((long)param_2 + 0xc) = 6;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


// ===== 00642c8c  FUN_00642c8c =====

void FUN_00642c8c(long param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar2 = PTR_DebugLuauUserDefinedClassesRuntime_0067dbe0;
  iVar6 = *(int *)((long)param_2 + 0xc);
  iVar7 = 100;
  do {
    if (iVar6 == 7) {
      lVar8 = *param_2;
      puVar3 = (undefined8 *)FUN_0062f390(lVar8,param_3);
      if (puVar3 != &DAT_00285948) {
        *(int *)(param_1 + 0x54) = (int)((ulong)((long)puVar3 - *(long *)(lVar8 + 0x20)) >> 5);
      }
      if ((((*(int *)((long)puVar3 + 0xc) != 0) || (lVar8 = *(long *)(lVar8 + 0x10), lVar8 == 0)) ||
          ((*(byte *)(lVar8 + 3) & 1) != 0)) ||
         (plVar4 = (long *)FUN_00631210(lVar8,0,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x408)),
         plVar4 == (long *)0x0)) {
        uVar11 = puVar3[1];
        uVar10 = *puVar3;
LAB_00642d94:
        param_4[1] = uVar11;
        *param_4 = uVar10;
        return;
      }
      iVar6 = *(int *)((long)plVar4 + 0xc);
    }
    else {
      if (*puVar2 != '\0') {
        if (iVar6 == 0xd) {
          lVar8 = *param_2;
          lVar9 = *(long *)(lVar8 + 0x10);
          pdVar5 = (double *)FUN_0062f390(*(undefined8 *)(lVar9 + 0x20),param_3);
          if (*(int *)((long)pdVar5 + 0xc) != 0) {
            iVar6 = *(int *)(lVar9 + 0x38);
            iVar7 = (int)*pdVar5;
            plVar4 = (long *)(lVar8 + 0x20);
            if (iVar6 <= iVar7) {
              plVar4 = (long *)(lVar9 + 0x18);
            }
            iVar1 = 0;
            if (iVar6 <= iVar7) {
              iVar1 = iVar6;
            }
            puVar3 = (undefined8 *)(*plVar4 + (long)(iVar7 - iVar1) * 0x10);
            uVar11 = puVar3[1];
            uVar10 = *puVar3;
            goto LAB_00642d94;
          }
          goto LAB_00642e74;
        }
        if (iVar6 == 0xc) {
          lVar8 = *param_2;
          pdVar5 = (double *)FUN_0062f390(*(undefined8 *)(lVar8 + 0x20),param_3);
          if (*(int *)((long)pdVar5 + 0xc) != 0) {
            if (*(int *)(lVar8 + 0x38) <= (int)*pdVar5) {
              puVar3 = (undefined8 *)
                       (*(long *)(lVar8 + 0x18) +
                       (long)((int)*pdVar5 - *(int *)(lVar8 + 0x38)) * 0x10);
              uVar11 = puVar3[1];
              uVar10 = *puVar3;
              goto LAB_00642d94;
            }
          }
          goto LAB_00642e74;
        }
      }
      plVar4 = (long *)FUN_00631294(param_1,param_2,0);
      iVar6 = *(int *)((long)plVar4 + 0xc);
      if (iVar6 == 0) {
        FUN_00621780(param_1,param_2,param_3);
LAB_00642e74:
                    /* WARNING: Subroutine does not return */
        FUN_006217f8(param_1,param_2,param_3);
      }
    }
    if (iVar6 == 8) {
      FUN_00642e84(param_1,param_4,plVar4,param_2,param_3);
      return;
    }
    iVar7 = iVar7 + -1;
    param_2 = plVar4;
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006214f8(param_1,"\'__index\' chain too long; possible loop");
    }
  } while( true );
}


// ===== 00642e84  FUN_00642e84 =====

long FUN_00642e84(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *param_3;
  puVar3 = *(undefined8 **)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x30);
  puVar3[1] = param_3[1];
  *puVar3 = uVar6;
  lVar4 = *(long *)(param_1 + 8);
  uVar6 = *param_4;
  *(undefined8 *)(lVar4 + 0x18) = param_4[1];
  *(undefined8 *)(lVar4 + 0x10) = uVar6;
  lVar4 = *(long *)(param_1 + 8);
  uVar6 = *param_5;
  *(undefined8 *)(lVar4 + 0x28) = param_5[1];
  *(undefined8 *)(lVar4 + 0x20) = uVar6;
  lVar4 = *(long *)(param_1 + 8);
  if (*(long *)(param_1 + 0x28) - lVar4 < 0x31) {
    iVar2 = *(int *)(param_1 + 0x48);
    iVar1 = iVar2 + 3;
    if (2 < iVar2) {
      iVar1 = iVar2 << 1;
    }
    FUN_006222f4(param_1,iVar1,0);
    lVar4 = *(long *)(param_1 + 8);
  }
  param_2 = param_2 - lVar5;
  *(long *)(param_1 + 8) = lVar4 + 0x30;
  FUN_00622574(param_1,lVar4,1,0);
  lVar4 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x30);
  *(long *)(param_1 + 8) = lVar4 + -0x10;
  uVar6 = *(undefined8 *)(lVar4 + -0x10);
  puVar3 = (undefined8 *)(lVar5 + param_2);
  puVar3[1] = *(undefined8 *)(lVar4 + -8);
  *puVar3 = uVar6;
  return lVar5 + param_2;
}


// ===== 00642f48  FUN_00642f48 =====

void FUN_00642f48(long param_1,long *param_2,undefined8 *param_3,long *param_4)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  double *pdVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  long local_80;
  long lStack_78;
  long local_68;
  
  puVar2 = PTR_DebugLuauUserDefinedClassesRuntime_0067dbe0;
  lVar1 = tpidr_el0;
  iVar10 = 100;
  local_68 = *(long *)(lVar1 + 0x28);
  do {
    if (*(int *)((long)param_2 + 0xc) != 7) {
      if ((*(int *)((long)param_2 + 0xc) == 0xd) && (*puVar2 != '\0')) {
        lVar9 = *param_2;
        lVar4 = *(long *)(lVar9 + 0x10);
        pdVar6 = (double *)FUN_0062f390(*(undefined8 *)(lVar4 + 0x20),param_3);
        if (*(int *)((long)pdVar6 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006217f8(param_1,param_2,param_3);
        }
        if ((int)*pdVar6 < *(int *)(lVar4 + 0x38)) {
          lVar4 = *param_4;
          plVar5 = (long *)(*(long *)(lVar9 + 0x20) + (long)(int)*pdVar6 * 0x10);
          plVar5[1] = param_4[1];
          *plVar5 = lVar4;
          if (((5 < *(int *)((long)param_4 + 0xc)) && ((*(byte *)(lVar9 + 1) >> 2 & 1) != 0)) &&
             ((*(byte *)(*param_4 + 1) & 3) != 0)) {
            if (*(long *)(lVar1 + 0x28) == local_68) {
              FUN_00624e24(*(undefined8 *)(param_1 + 0x18),lVar9);
              return;
            }
            goto LAB_0064327c;
          }
          goto LAB_006431a4;
        }
      }
      else {
        plVar5 = (long *)FUN_00631294(param_1,param_2,1);
        iVar7 = *(int *)((long)plVar5 + 0xc);
        if (iVar7 != 0) goto LAB_0064300c;
      }
      FUN_00621780(param_1,param_2,param_3);
LAB_0064327c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar9 = *param_2;
    plVar3 = (long *)FUN_0062f390(lVar9,param_3);
    if (((*(int *)((long)plVar3 + 0xc) != 0) || (lVar4 = *(long *)(lVar9 + 0x10), lVar4 == 0)) ||
       (((*(byte *)(lVar4 + 3) >> 1 & 1) != 0 ||
        (plVar5 = (long *)FUN_00631210(lVar4,1,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x410)),
        plVar5 == (long *)0x0)))) {
      if (*(char *)(lVar9 + 4) != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_00621894(param_1);
      }
      *(undefined1 *)(lVar9 + 3) = 0;
      if (plVar3 == &DAT_00285948) {
        plVar3 = (long *)FUN_0062f50c(param_1,lVar9,param_3);
      }
      *(int *)(param_1 + 0x54) = (int)((ulong)((long)plVar3 - *(long *)(lVar9 + 0x20)) >> 5);
      lVar4 = *param_4;
      plVar3[1] = param_4[1];
      *plVar3 = lVar4;
      if (((5 < *(int *)((long)param_4 + 0xc)) && ((*(byte *)(lVar9 + 1) >> 2 & 1) != 0)) &&
         ((*(byte *)(*param_4 + 1) & 3) != 0)) {
        lVar4 = *(long *)(param_1 + 0x18);
        if (*(char *)(lVar4 + 0x21) == '\x02') {
          if (*(long *)(lVar1 + 0x28) == local_68) {
            FUN_00624a78();
            return;
          }
          goto LAB_0064327c;
        }
        *(byte *)(lVar9 + 1) = *(byte *)(lVar9 + 1) & 0xfb;
        uVar8 = *(undefined8 *)(lVar4 + 0x30);
        *(long *)(lVar4 + 0x30) = lVar9;
        *(undefined8 *)(lVar9 + 0x28) = uVar8;
      }
LAB_006431a4:
      if (*(long *)(lVar1 + 0x28) == local_68) {
        return;
      }
      goto LAB_0064327c;
    }
    iVar7 = *(int *)((long)plVar5 + 0xc);
LAB_0064300c:
    if (iVar7 == 8) {
      plVar3 = *(long **)(param_1 + 8);
      lVar9 = *plVar5;
      plVar3[1] = plVar5[1];
      *plVar3 = lVar9;
      lVar9 = *(long *)(param_1 + 8);
      lVar4 = *param_2;
      *(long *)(lVar9 + 0x18) = param_2[1];
      *(long *)(lVar9 + 0x10) = lVar4;
      lVar9 = *(long *)(param_1 + 8);
      uVar8 = *param_3;
      *(undefined8 *)(lVar9 + 0x28) = param_3[1];
      *(undefined8 *)(lVar9 + 0x20) = uVar8;
      lVar9 = *(long *)(param_1 + 8);
      lVar4 = *param_4;
      *(long *)(lVar9 + 0x38) = param_4[1];
      *(long *)(lVar9 + 0x30) = lVar4;
      lVar9 = *(long *)(param_1 + 8);
      if (*(long *)(param_1 + 0x28) - lVar9 < 0x41) {
        iVar7 = *(int *)(param_1 + 0x48);
        iVar10 = iVar7 + 4;
        if (3 < iVar7) {
          iVar10 = iVar7 << 1;
        }
        FUN_006222f4(param_1,iVar10,0);
        lVar9 = *(long *)(param_1 + 8);
      }
      *(long *)(param_1 + 8) = lVar9 + 0x40;
      if (*(long *)(lVar1 + 0x28) == local_68) {
        FUN_00622574(param_1,lVar9,0,0);
        return;
      }
      goto LAB_0064327c;
    }
    iVar10 = iVar10 + -1;
    lStack_78 = plVar5[1];
    local_80 = *plVar5;
    param_2 = &local_80;
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006214f8(param_1,"\'__newindex\' chain too long; possible loop");
    }
  } while( true );
}


// ===== 00643298  FUN_00643298 =====

int FUN_00643298(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == param_2) {
    iVar5 = 0;
  }
  else {
    iVar5 = (uint)*(byte *)(param_1 + 0x18) - (uint)*(byte *)(param_2 + 0x18);
    if (iVar5 == 0) {
      uVar2 = *(uint *)(param_1 + 0x14);
      uVar3 = *(uint *)(param_2 + 0x14);
      uVar1 = uVar2;
      if (uVar3 <= uVar2) {
        uVar1 = uVar3;
      }
      iVar4 = 1;
      if (uVar3 > uVar2) {
        iVar4 = -1;
      }
      iVar5 = 0;
      if (uVar2 != uVar3) {
        iVar5 = iVar4;
      }
      iVar4 = memcmp((byte *)(param_1 + 0x18),(byte *)(param_2 + 0x18),(ulong)uVar1);
      if (iVar4 != 0) {
        iVar5 = iVar4;
      }
    }
  }
  return iVar5;
}


// ===== 00643304  FUN_00643304 =====

ulong FUN_00643304(undefined8 param_1,double *param_2,double *param_3)

{
  ulong uVar1;
  double *extraout_x1;
  int extraout_w8;
  int iVar2;
  
  iVar2 = *(int *)((long)param_2 + 0xc);
  if (iVar2 == *(int *)((long)param_3 + 0xc)) {
    if (iVar2 == 3) {
      return (ulong)(*param_2 < *param_3);
    }
  }
  else {
    FUN_00621710();
    param_2 = extraout_x1;
    iVar2 = extraout_w8;
  }
  if (iVar2 == 6) {
    uVar1 = FUN_00643298(*param_2,*param_3);
    return uVar1 >> 0x1f & 1;
  }
  uVar1 = FUN_00643370();
  return uVar1;
}


// ===== 00643370  FUN_00643370 =====

ulong FUN_00643370(long param_1,undefined8 param_2,double *param_3,undefined4 param_4,ulong param_5)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  double *pdVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  
  lVar4 = FUN_00631294(param_1,param_2,param_4);
  if (*(int *)(lVar4 + 0xc) != 0) {
    uVar5 = FUN_00631294(param_1,param_3,param_4);
    iVar3 = FUN_0062987c(lVar4,uVar5);
    if (iVar3 != 0) {
      FUN_00642e84(param_1,*(undefined8 *)(param_1 + 8),lVar4,param_2,param_3);
      uVar1 = (*(int **)(param_1 + 8))[3];
      if (uVar1 == 0) {
        return (ulong)uVar1;
      }
      if (uVar1 != 1) {
        return 1;
      }
      return (ulong)(**(int **)(param_1 + 8) != 0);
    }
  }
  if ((param_5 & 1) == 0) {
    return 0xffffffff;
  }
  auVar14 = FUN_00621710(param_1,param_2,param_3,param_4);
  pdVar8 = auVar14._8_8_;
  uVar5 = auVar14._0_8_;
  fVar10 = *(float *)((long)pdVar8 + 0xc);
  if (fVar10 == *(float *)((long)param_3 + 0xc)) {
    if (fVar10 == 8.40779e-45) {
      iVar3 = FUN_00643298(*pdVar8,*param_3);
      return (ulong)(iVar3 < 1);
    }
    if (fVar10 == 4.2039e-45) {
      return (ulong)(*pdVar8 <= *param_3);
    }
    uVar6 = FUN_00643370(uVar5,pdVar8,param_3,0x11,0);
    if ((int)uVar6 != -1) {
      return uVar6;
    }
    iVar3 = FUN_00643370(uVar5,param_3,pdVar8,0x10,0);
    if (iVar3 != -1) {
      return (ulong)(iVar3 == 0);
    }
  }
  auVar14 = FUN_00621710(uVar5,pdVar8,param_3,0x11);
  pdVar8 = auVar14._8_8_;
  lVar4 = auVar14._0_8_;
  fVar10 = *(float *)((long)pdVar8 + 0xc);
  if ((int)fVar10 < 5) {
    if ((int)fVar10 < 2) {
      if (fVar10 == 0.0) {
        return 1;
      }
      if (fVar10 == 1.4013e-45) {
        fVar10 = *(float *)pdVar8;
        fVar11 = *(float *)param_3;
        goto LAB_00643640;
      }
    }
    else {
      if (fVar10 == 2.8026e-45) {
        if (*pdVar8 != *param_3) {
          return 0;
        }
        fVar10 = *(float *)(pdVar8 + 1);
        fVar11 = *(float *)(param_3 + 1);
LAB_00643640:
        bVar2 = fVar10 == fVar11;
        goto LAB_006436cc;
      }
      if (fVar10 == 4.2039e-45) {
        bVar2 = false;
        if (!NAN(*pdVar8) && !NAN(*param_3)) {
          bVar2 = *pdVar8 == *param_3;
        }
        goto LAB_006436cc;
      }
    }
  }
  else if ((int)fVar10 < 9) {
    if (fVar10 == 7.00649e-45) {
      if (*(float *)pdVar8 != *(float *)param_3) {
        return 0;
      }
      if (*(float *)((long)pdVar8 + 4) != *(float *)((long)param_3 + 4)) {
        return 0;
      }
      bVar2 = *(float *)(pdVar8 + 1) == *(float *)(param_3 + 1);
      goto LAB_006436cc;
    }
    if (fVar10 == 9.80909e-45) {
      uVar5 = *(undefined8 *)((long)*pdVar8 + 0x10);
      uVar9 = *(undefined8 *)((long)*param_3 + 0x10);
      goto LAB_00643658;
    }
  }
  else if (fVar10 == 1.26117e-44) {
    uVar5 = *(undefined8 *)((long)*pdVar8 + 8);
    uVar9 = *(undefined8 *)((long)*param_3 + 8);
LAB_00643658:
    lVar7 = FUN_006436e4(lVar4,uVar5,uVar9);
    if (lVar7 != 0) {
LAB_00643668:
      FUN_00642e84(lVar4,*(undefined8 *)(lVar4 + 8),lVar7,pdVar8,param_3);
      iVar3 = (*(int **)(lVar4 + 8))[3];
      if (iVar3 == 0) {
        return 0;
      }
      if (iVar3 != 1) {
        return 1;
      }
      return (ulong)(**(int **)(lVar4 + 8) != 0);
    }
  }
  else if ((fVar10 != 1.68156e-44) && (fVar10 == 1.82169e-44)) {
    dVar12 = *pdVar8;
    dVar13 = *param_3;
    if (*(long *)((long)dVar12 + 0x10) != *(long *)((long)dVar13 + 0x10)) {
      return 0;
    }
    lVar7 = FUN_00631294(lVar4,pdVar8,7);
    if (*(int *)(lVar7 + 0xc) == 0) {
      bVar2 = dVar12 == dVar13;
      goto LAB_006436cc;
    }
    goto LAB_00643668;
  }
  bVar2 = *pdVar8 == *param_3;
LAB_006436cc:
  return (ulong)bVar2;
}


// ===== 00643440  FUN_00643440 =====

ulong FUN_00643440(undefined8 param_1,double *param_2,double *param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  double *pdVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  
  fVar9 = *(float *)((long)param_2 + 0xc);
  if (fVar9 == *(float *)((long)param_3 + 0xc)) {
    if (fVar9 == 8.40779e-45) {
      iVar2 = FUN_00643298(*param_2,*param_3);
      return (ulong)(iVar2 < 1);
    }
    if (fVar9 == 4.2039e-45) {
      return (ulong)(*param_2 <= *param_3);
    }
    uVar3 = FUN_00643370(param_1,param_2,param_3,0x11,0);
    if ((int)uVar3 != -1) {
      return uVar3;
    }
    iVar2 = FUN_00643370(param_1,param_3,param_2,0x10,0);
    if (iVar2 != -1) {
      return (ulong)(iVar2 == 0);
    }
  }
  auVar13 = FUN_00621710(param_1,param_2,param_3,0x11);
  pdVar6 = auVar13._8_8_;
  lVar4 = auVar13._0_8_;
  fVar9 = *(float *)((long)pdVar6 + 0xc);
  if ((int)fVar9 < 5) {
    if ((int)fVar9 < 2) {
      if (fVar9 == 0.0) {
        return 1;
      }
      if (fVar9 == 1.4013e-45) {
        fVar9 = *(float *)pdVar6;
        fVar10 = *(float *)param_3;
        goto LAB_00643640;
      }
    }
    else {
      if (fVar9 == 2.8026e-45) {
        if (*pdVar6 != *param_3) {
          return 0;
        }
        fVar9 = *(float *)(pdVar6 + 1);
        fVar10 = *(float *)(param_3 + 1);
LAB_00643640:
        bVar1 = fVar9 == fVar10;
        goto LAB_006436cc;
      }
      if (fVar9 == 4.2039e-45) {
        bVar1 = false;
        if (!NAN(*pdVar6) && !NAN(*param_3)) {
          bVar1 = *pdVar6 == *param_3;
        }
        goto LAB_006436cc;
      }
    }
  }
  else if ((int)fVar9 < 9) {
    if (fVar9 == 7.00649e-45) {
      if (*(float *)pdVar6 != *(float *)param_3) {
        return 0;
      }
      if (*(float *)((long)pdVar6 + 4) != *(float *)((long)param_3 + 4)) {
        return 0;
      }
      bVar1 = *(float *)(pdVar6 + 1) == *(float *)(param_3 + 1);
      goto LAB_006436cc;
    }
    if (fVar9 == 9.80909e-45) {
      uVar7 = *(undefined8 *)((long)*pdVar6 + 0x10);
      uVar8 = *(undefined8 *)((long)*param_3 + 0x10);
      goto LAB_00643658;
    }
  }
  else if (fVar9 == 1.26117e-44) {
    uVar7 = *(undefined8 *)((long)*pdVar6 + 8);
    uVar8 = *(undefined8 *)((long)*param_3 + 8);
LAB_00643658:
    lVar5 = FUN_006436e4(lVar4,uVar7,uVar8);
    if (lVar5 != 0) {
LAB_00643668:
      FUN_00642e84(lVar4,*(undefined8 *)(lVar4 + 8),lVar5,pdVar6,param_3);
      iVar2 = (*(int **)(lVar4 + 8))[3];
      if (iVar2 == 0) {
        return 0;
      }
      if (iVar2 != 1) {
        return 1;
      }
      return (ulong)(**(int **)(lVar4 + 8) != 0);
    }
  }
  else if ((fVar9 != 1.68156e-44) && (fVar9 == 1.82169e-44)) {
    dVar11 = *pdVar6;
    dVar12 = *param_3;
    if (*(long *)((long)dVar11 + 0x10) != *(long *)((long)dVar12 + 0x10)) {
      return 0;
    }
    lVar5 = FUN_00631294(lVar4,pdVar6,7);
    if (*(int *)(lVar5 + 0xc) == 0) {
      bVar1 = dVar11 == dVar12;
      goto LAB_006436cc;
    }
    goto LAB_00643668;
  }
  bVar1 = *pdVar6 == *param_3;
LAB_006436cc:
  return (ulong)bVar1;
}


// ===== 00643514  FUN_00643514 =====

bool FUN_00643514(long param_1,double *param_2,double *param_3)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  
  fVar6 = *(float *)((long)param_2 + 0xc);
  if ((int)fVar6 < 5) {
    if ((int)fVar6 < 2) {
      if (fVar6 == 0.0) {
        return true;
      }
      if (fVar6 == 1.4013e-45) {
        fVar6 = *(float *)param_2;
        fVar7 = *(float *)param_3;
LAB_00643640:
        return fVar6 == fVar7;
      }
    }
    else {
      if (fVar6 == 2.8026e-45) {
        if (*param_2 == *param_3) {
          fVar6 = *(float *)(param_2 + 1);
          fVar7 = *(float *)(param_3 + 1);
          goto LAB_00643640;
        }
        goto LAB_006436b0;
      }
      if (fVar6 == 4.2039e-45) {
        if (!NAN(*param_2) && !NAN(*param_3)) {
          return *param_2 == *param_3;
        }
        return false;
      }
    }
LAB_006436a0:
    bVar2 = *param_2 == *param_3;
  }
  else {
    if ((int)fVar6 < 9) {
      if (fVar6 == 7.00649e-45) {
        if ((*(float *)param_2 == *(float *)param_3) &&
           (*(float *)((long)param_2 + 4) == *(float *)((long)param_3 + 4))) {
          return *(float *)(param_2 + 1) == *(float *)(param_3 + 1);
        }
        goto LAB_006436b0;
      }
      if (fVar6 != 9.80909e-45) goto LAB_006436a0;
      uVar4 = *(undefined8 *)((long)*param_2 + 0x10);
      uVar5 = *(undefined8 *)((long)*param_3 + 0x10);
LAB_00643658:
      lVar3 = FUN_006436e4(param_1,uVar4,uVar5);
      if (lVar3 == 0) goto LAB_006436a0;
    }
    else {
      if (fVar6 == 1.26117e-44) {
        uVar4 = *(undefined8 *)((long)*param_2 + 8);
        uVar5 = *(undefined8 *)((long)*param_3 + 8);
        goto LAB_00643658;
      }
      if ((fVar6 == 1.68156e-44) || (fVar6 != 1.82169e-44)) goto LAB_006436a0;
      dVar8 = *param_2;
      dVar9 = *param_3;
      if (*(long *)((long)dVar8 + 0x10) != *(long *)((long)dVar9 + 0x10)) goto LAB_006436b0;
      lVar3 = FUN_00631294(param_1,param_2,7);
      if (*(int *)(lVar3 + 0xc) == 0) {
        return dVar8 == dVar9;
      }
    }
    FUN_00642e84(param_1,*(undefined8 *)(param_1 + 8),lVar3,param_2,param_3);
    iVar1 = (*(int **)(param_1 + 8))[3];
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        return true;
      }
      return **(int **)(param_1 + 8) != 0;
    }
LAB_006436b0:
    bVar2 = false;
  }
  return bVar2;
}


// ===== 006436e4  FUN_006436e4 =====

long FUN_006436e4(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if ((param_2 != 0) && (-1 < *(char *)(param_2 + 3))) {
    lVar2 = FUN_00631210(param_2,7,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x440));
    if (lVar2 == 0) {
      return 0;
    }
    if (param_2 == param_3) {
      return lVar2;
    }
    if (((param_3 != 0) && (-1 < *(char *)(param_3 + 3))) &&
       (lVar3 = FUN_00631210(param_3,7,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x440)),
       lVar3 != 0)) {
      iVar1 = FUN_0062987c(lVar2,lVar3);
      if (iVar1 == 0) {
        return 0;
      }
      return lVar2;
    }
  }
  return 0;
}


// ===== 00643784  FUN_00643784 =====

void FUN_00643784(long param_1,ulong param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long local_280;
  undefined1 auStack_270 [512];
  long local_70;
  
  lVar4 = tpidr_el0;
  param_2 = param_2 & 0xffffffff;
  local_70 = *(long *)(lVar4 + 0x28);
  do {
    lVar12 = *(long *)(param_1 + 0x10);
    plVar1 = (long *)(lVar12 + (long)param_3 * 0x10);
    plVar8 = plVar1 + -2;
    if ((*(int *)((long)plVar1 + -4) == 6 || *(int *)((long)plVar1 + -4) == 3) &&
       ((plVar2 = (long *)(lVar12 + (long)param_3 * 0x10), *(int *)((long)plVar2 + 0xc) == 6 ||
        (iVar5 = FUN_00642bf8(param_1,plVar1), iVar5 != 0)))) {
      uVar7 = (ulong)*(uint *)(*plVar1 + 0x14);
      if (*(uint *)(*plVar1 + 0x14) == 0) {
        if (*(int *)((long)plVar1 + -4) != 6) {
          FUN_00642bf8(param_1,plVar8);
        }
        goto LAB_00643888;
      }
      if ((int)param_2 < 2) {
        uVar11 = 1;
      }
      else {
        uVar10 = 1;
        do {
          plVar8 = plVar2 + -2;
          if ((*(int *)((long)plVar2 + -4) != 6) &&
             (iVar5 = FUN_00642bf8(param_1,plVar8), uVar11 = uVar10, iVar5 == 0)) break;
          if (0x40000000 - uVar7 < (ulong)*(uint *)(*plVar8 + 0x14)) {
                    /* WARNING: Subroutine does not return */
            FUN_006214f8(param_1,"string length overflow");
          }
          uVar10 = uVar10 + 1;
          uVar7 = uVar7 + *(uint *)(*plVar8 + 0x14);
          uVar11 = param_2;
          plVar2 = plVar8;
        } while (param_2 != uVar10);
      }
      iVar5 = (int)uVar11;
      if (uVar7 < 0x200) {
        local_280 = 0;
        puVar9 = auStack_270;
      }
      else {
        local_280 = FUN_0062afe8(param_1,uVar7);
        puVar9 = (undefined1 *)(local_280 + 0x18);
      }
      uVar7 = 0;
      iVar6 = iVar5 + 1;
      plVar8 = (long *)(lVar12 + (uVar11 & 0xffffffff) * -0x10 + (long)param_3 * 0x10);
      do {
        plVar8 = plVar8 + 2;
        uVar10 = (ulong)*(uint *)(*plVar8 + 0x14);
        memcpy(puVar9 + uVar7,(void *)(*plVar8 + 0x18),uVar10);
        iVar6 = iVar6 + -1;
        uVar7 = uVar7 + uVar10;
      } while (1 < iVar6);
      if (uVar7 < 0x200) {
        lVar12 = FUN_0062b178(param_1,puVar9,uVar7);
      }
      else {
        lVar12 = FUN_0062b060(param_1,local_280);
      }
      plVar1[(uVar11 & 0xffffffff) * -2 + 2] = lVar12;
      *(undefined4 *)((long)(plVar1 + (uVar11 & 0xffffffff) * -2 + 2) + 0xc) = 6;
    }
    else {
      iVar5 = FUN_006439c8(param_1,plVar8,plVar1,plVar8,0x12);
      if (iVar5 == 0) {
        FUN_00621654(param_1,plVar8,plVar1);
        goto LAB_006439c4;
      }
LAB_00643888:
      iVar5 = 2;
    }
    uVar3 = (int)param_2 - (iVar5 + -1);
    param_2 = (ulong)uVar3;
    param_3 = param_3 - (iVar5 + -1);
  } while (1 < (int)uVar3);
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
LAB_006439c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006439c8  FUN_006439c8 =====

undefined8
FUN_006439c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5)

{
  long lVar1;
  
  lVar1 = FUN_00631294(param_1,param_2,param_5);
  if ((*(int *)(lVar1 + 0xc) == 0) &&
     (lVar1 = FUN_00631294(param_1,param_3,param_5), *(int *)(lVar1 + 0xc) == 0)) {
    return 0;
  }
  FUN_00642e84(param_1,param_4,lVar1,param_2,param_3);
  return 1;
}


// ===== 00643a54  luaV_doarithimpl<(TMS)8> =====

/* void luaV_doarithimpl<(TMS)8>(lua_State*, lua_TValue*, lua_TValue const*, lua_TValue const*) */

void luaV_doarithimpl<(TMS)8>
               (lua_State *param_1,lua_TValue *param_2,lua_TValue *param_3,lua_TValue *param_4)

{
  lua_TValue *plVar1;
  long lVar2;
  int iVar3;
  lua_TValue *plVar4;
  double *pdVar5;
  double *pdVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar4 = param_3;
  if (*(int *)(param_3 + 0xc) != 5) {
    plVar4 = (lua_TValue *)0x0;
  }
  plVar1 = param_4;
  if (*(int *)(param_4 + 0xc) != 5) {
    plVar1 = (lua_TValue *)0x0;
  }
  if ((plVar4 == (lua_TValue *)0x0) || (plVar1 == (lua_TValue *)0x0)) {
    if (plVar4 == (lua_TValue *)0x0) {
      if ((*(int *)(param_3 + 0xc) != 3) && (plVar1 != (lua_TValue *)0x0)) {
        puVar7 = auStack_58;
        plVar4 = param_3;
        goto LAB_00643b0c;
      }
    }
    else if (*(int *)(param_4 + 0xc) != 3) {
      puVar7 = auStack_68;
      plVar4 = param_4;
LAB_00643b0c:
      FUN_00642b68(plVar4,puVar7);
    }
    pdVar5 = (double *)FUN_00642b68(param_3,auStack_58);
    if ((pdVar5 == (double *)0x0) ||
       (pdVar6 = (double *)FUN_00642b68(param_4,auStack_68), pdVar6 == (double *)0x0)) {
      iVar3 = FUN_006439c8(param_1,param_3,param_4,param_2,8);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00621698(param_1,param_3,param_4,8);
      }
      goto LAB_00643b6c;
    }
    uVar8 = 3;
    *(double *)param_2 = *pdVar5 + *pdVar6;
  }
  else {
    *(float *)param_2 = *(float *)plVar4 + *(float *)plVar1;
    *(float *)(param_2 + 4) = *(float *)(plVar4 + 4) + *(float *)(plVar1 + 4);
    uVar8 = 5;
    *(float *)(param_2 + 8) = *(float *)(plVar4 + 8) + *(float *)(plVar1 + 8);
  }
  *(undefined4 *)(param_2 + 0xc) = uVar8;
LAB_00643b6c:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00643bac  luaV_doarithimpl<(TMS)9> =====

/* void luaV_doarithimpl<(TMS)9>(lua_State*, lua_TValue*, lua_TValue const*, lua_TValue const*) */

void luaV_doarithimpl<(TMS)9>
               (lua_State *param_1,lua_TValue *param_2,lua_TValue *param_3,lua_TValue *param_4)

{
  lua_TValue *plVar1;
  long lVar2;
  int iVar3;
  lua_TValue *plVar4;
  double *pdVar5;
  double *pdVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar4 = param_3;
  if (*(int *)(param_3 + 0xc) != 5) {
    plVar4 = (lua_TValue *)0x0;
  }
  plVar1 = param_4;
  if (*(int *)(param_4 + 0xc) != 5) {
    plVar1 = (lua_TValue *)0x0;
  }
  if ((plVar4 == (lua_TValue *)0x0) || (plVar1 == (lua_TValue *)0x0)) {
    if (plVar4 == (lua_TValue *)0x0) {
      if ((*(int *)(param_3 + 0xc) != 3) && (plVar1 != (lua_TValue *)0x0)) {
        puVar7 = auStack_58;
        plVar4 = param_3;
        goto LAB_00643c64;
      }
    }
    else if (*(int *)(param_4 + 0xc) != 3) {
      puVar7 = auStack_68;
      plVar4 = param_4;
LAB_00643c64:
      FUN_00642b68(plVar4,puVar7);
    }
    pdVar5 = (double *)FUN_00642b68(param_3,auStack_58);
    if ((pdVar5 == (double *)0x0) ||
       (pdVar6 = (double *)FUN_00642b68(param_4,auStack_68), pdVar6 == (double *)0x0)) {
      iVar3 = FUN_006439c8(param_1,param_3,param_4,param_2,9);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00621698(param_1,param_3,param_4,9);
      }
      goto LAB_00643cc4;
    }
    uVar8 = 3;
    *(double *)param_2 = *pdVar5 - *pdVar6;
  }
  else {
    *(float *)param_2 = *(float *)plVar4 - *(float *)plVar1;
    *(float *)(param_2 + 4) = *(float *)(plVar4 + 4) - *(float *)(plVar1 + 4);
    uVar8 = 5;
    *(float *)(param_2 + 8) = *(float *)(plVar4 + 8) - *(float *)(plVar1 + 8);
  }
  *(undefined4 *)(param_2 + 0xc) = uVar8;
LAB_00643cc4:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00643d04  luaV_doarithimpl<(TMS)10> =====

/* void luaV_doarithimpl<(TMS)10>(lua_State*, lua_TValue*, lua_TValue const*, lua_TValue const*) */

void luaV_doarithimpl<(TMS)10>
               (lua_State *param_1,lua_TValue *param_2,lua_TValue *param_3,lua_TValue *param_4)

{
  long lVar1;
  int iVar2;
  lua_TValue *plVar3;
  lua_TValue *plVar4;
  double *pdVar5;
  double *pdVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar4 = param_3;
  if (*(int *)(param_3 + 0xc) != 5) {
    plVar4 = (lua_TValue *)0x0;
  }
  plVar3 = param_4;
  if (*(int *)(param_4 + 0xc) != 5) {
    plVar3 = (lua_TValue *)0x0;
  }
  if ((plVar4 == (lua_TValue *)0x0) || (plVar3 == (lua_TValue *)0x0)) {
    if (plVar4 == (lua_TValue *)0x0) {
      if ((plVar3 != (lua_TValue *)0x0) &&
         ((plVar4 = param_3, *(int *)(param_3 + 0xc) == 3 ||
          (plVar4 = (lua_TValue *)FUN_00642b68(param_3,auStack_68), plVar4 != (lua_TValue *)0x0))))
      {
        fVar9 = (float)*(double *)plVar4;
        *(float *)param_2 = *(float *)plVar3 * fVar9;
        *(float *)(param_2 + 4) = *(float *)(plVar3 + 4) * fVar9;
        fVar8 = *(float *)(plVar3 + 8);
LAB_00643e20:
        fVar8 = fVar8 * fVar9;
        goto LAB_00643e24;
      }
    }
    else {
      plVar3 = param_4;
      if ((*(int *)(param_4 + 0xc) == 3) ||
         (plVar3 = (lua_TValue *)FUN_00642b68(param_4,auStack_78), plVar3 != (lua_TValue *)0x0)) {
        fVar9 = (float)*(double *)plVar3;
        *(float *)param_2 = *(float *)plVar4 * fVar9;
        *(float *)(param_2 + 4) = *(float *)(plVar4 + 4) * fVar9;
        fVar8 = *(float *)(plVar4 + 8);
        goto LAB_00643e20;
      }
    }
    pdVar5 = (double *)FUN_00642b68(param_3,auStack_68);
    if ((pdVar5 == (double *)0x0) ||
       (pdVar6 = (double *)FUN_00642b68(param_4,auStack_78), pdVar6 == (double *)0x0)) {
      iVar2 = FUN_006439c8(param_1,param_3,param_4,param_2,10);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00621698(param_1,param_3,param_4,10);
      }
      goto LAB_00643e30;
    }
    uVar7 = 3;
    *(double *)param_2 = *pdVar5 * *pdVar6;
  }
  else {
    *(float *)param_2 = *(float *)plVar4 * *(float *)plVar3;
    *(float *)(param_2 + 4) = *(float *)(plVar4 + 4) * *(float *)(plVar3 + 4);
    fVar8 = *(float *)(plVar4 + 8) * *(float *)(plVar3 + 8);
LAB_00643e24:
    *(float *)(param_2 + 8) = fVar8;
    uVar7 = 5;
  }
  *(undefined4 *)(param_2 + 0xc) = uVar7;
LAB_00643e30:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00643ecc  luaV_doarithimpl<(TMS)11> =====

/* void luaV_doarithimpl<(TMS)11>(lua_State*, lua_TValue*, lua_TValue const*, lua_TValue const*) */

void luaV_doarithimpl<(TMS)11>
               (lua_State *param_1,lua_TValue *param_2,lua_TValue *param_3,lua_TValue *param_4)

{
  long lVar1;
  int iVar2;
  lua_TValue *plVar3;
  lua_TValue *plVar4;
  double *pdVar5;
  double *pdVar6;
  undefined4 uVar7;
  float fVar8;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar4 = param_3;
  if (*(int *)(param_3 + 0xc) != 5) {
    plVar4 = (lua_TValue *)0x0;
  }
  plVar3 = param_4;
  if (*(int *)(param_4 + 0xc) != 5) {
    plVar3 = (lua_TValue *)0x0;
  }
  if ((plVar4 == (lua_TValue *)0x0) || (plVar3 == (lua_TValue *)0x0)) {
    if (plVar4 != (lua_TValue *)0x0) {
      plVar3 = param_4;
      if ((*(int *)(param_4 + 0xc) != 3) &&
         (plVar3 = (lua_TValue *)FUN_00642b68(param_4,auStack_78), plVar3 == (lua_TValue *)0x0))
      goto LAB_00644020;
      fVar8 = (float)*(double *)plVar3;
      *(float *)param_2 = *(float *)plVar4 / fVar8;
      *(float *)(param_2 + 4) = *(float *)(plVar4 + 4) / fVar8;
      fVar8 = *(float *)(plVar4 + 8) / fVar8;
      goto LAB_00643fb4;
    }
    if ((plVar3 != (lua_TValue *)0x0) &&
       ((plVar4 = param_3, *(int *)(param_3 + 0xc) == 3 ||
        (plVar4 = (lua_TValue *)FUN_00642b68(param_3,auStack_68), plVar4 != (lua_TValue *)0x0)))) {
      fVar8 = (float)*(double *)plVar4;
      *(float *)param_2 = fVar8 / *(float *)plVar3;
      *(float *)(param_2 + 4) = fVar8 / *(float *)(plVar3 + 4);
      goto LAB_00643f48;
    }
LAB_00644020:
    pdVar5 = (double *)FUN_00642b68(param_3,auStack_68);
    if ((pdVar5 == (double *)0x0) ||
       (pdVar6 = (double *)FUN_00642b68(param_4,auStack_78), pdVar6 == (double *)0x0)) {
      iVar2 = FUN_006439c8(param_1,param_3,param_4,param_2,0xb);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00621698(param_1,param_3,param_4,0xb);
      }
      goto LAB_00643fc0;
    }
    uVar7 = 3;
    *(double *)param_2 = *pdVar5 / *pdVar6;
  }
  else {
    *(float *)param_2 = *(float *)plVar4 / *(float *)plVar3;
    *(float *)(param_2 + 4) = *(float *)(plVar4 + 4) / *(float *)(plVar3 + 4);
    fVar8 = *(float *)(plVar4 + 8);
LAB_00643f48:
    fVar8 = fVar8 / *(float *)(plVar3 + 8);
LAB_00643fb4:
    *(float *)(param_2 + 8) = fVar8;
    uVar7 = 5;
  }
  *(undefined4 *)(param_2 + 0xc) = uVar7;
LAB_00643fc0:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00644090  luaV_doarithimpl<(TMS)12> =====

/* void luaV_doarithimpl<(TMS)12>(lua_State*, lua_TValue*, lua_TValue const*, lua_TValue const*) */

void luaV_doarithimpl<(TMS)12>
               (lua_State *param_1,lua_TValue *param_2,lua_TValue *param_3,lua_TValue *param_4)

{
  long lVar1;
  int iVar2;
  lua_TValue *plVar3;
  lua_TValue *plVar4;
  double *pdVar5;
  double *pdVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar4 = param_3;
  if (*(int *)(param_3 + 0xc) != 5) {
    plVar4 = (lua_TValue *)0x0;
  }
  plVar3 = param_4;
  if (*(int *)(param_4 + 0xc) != 5) {
    plVar3 = (lua_TValue *)0x0;
  }
  if ((plVar4 == (lua_TValue *)0x0) || (plVar3 == (lua_TValue *)0x0)) {
    if (plVar4 != (lua_TValue *)0x0) {
      plVar3 = param_4;
      if ((*(int *)(param_4 + 0xc) != 3) &&
         (plVar3 = (lua_TValue *)FUN_00642b68(param_4,auStack_78), plVar3 == (lua_TValue *)0x0))
      goto LAB_00644254;
      fVar8 = (float)*(double *)plVar3;
      *(float *)param_2 = (float)(double)(long)(*(float *)plVar4 / fVar8);
      *(float *)(param_2 + 4) = (float)(double)(long)(*(float *)(plVar4 + 4) / fVar8);
      fVar8 = *(float *)(plVar4 + 8) / fVar8;
      goto LAB_006441c0;
    }
    if ((plVar3 != (lua_TValue *)0x0) &&
       ((plVar4 = param_3, *(int *)(param_3 + 0xc) == 3 ||
        (plVar4 = (lua_TValue *)FUN_00642b68(param_3,auStack_68), plVar4 != (lua_TValue *)0x0)))) {
      fVar8 = (float)*(double *)plVar4;
      *(float *)param_2 = (float)(double)(long)(fVar8 / *(float *)plVar3);
      *(float *)(param_2 + 4) = (float)(double)(long)(fVar8 / *(float *)(plVar3 + 4));
      fVar9 = *(float *)(plVar3 + 8);
      goto LAB_00644134;
    }
LAB_00644254:
    pdVar5 = (double *)FUN_00642b68(param_3,auStack_68);
    if ((pdVar5 == (double *)0x0) ||
       (pdVar6 = (double *)FUN_00642b68(param_4,auStack_78), pdVar6 == (double *)0x0)) {
      iVar2 = FUN_006439c8(param_1,param_3,param_4,param_2,0xc);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00621698(param_1,param_3,param_4,0xc);
      }
      goto LAB_006441d4;
    }
    uVar7 = 3;
    *(long *)param_2 = (long)(*pdVar5 / *pdVar6);
  }
  else {
    *(float *)param_2 = (float)(double)(long)(*(float *)plVar4 / *(float *)plVar3);
    *(float *)(param_2 + 4) = (float)(double)(long)(*(float *)(plVar4 + 4) / *(float *)(plVar3 + 4))
    ;
    fVar8 = *(float *)(plVar4 + 8);
    fVar9 = *(float *)(plVar3 + 8);
LAB_00644134:
    fVar8 = fVar8 / fVar9;
LAB_006441c0:
    uVar7 = 5;
    *(float *)(param_2 + 8) = (float)(double)(long)fVar8;
  }
  *(undefined4 *)(param_2 + 0xc) = uVar7;
LAB_006441d4:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 006442c8  luaV_doarithimpl<(TMS)13> =====

/* void luaV_doarithimpl<(TMS)13>(lua_State*, lua_TValue*, lua_TValue const*, lua_TValue const*) */

void luaV_doarithimpl<(TMS)13>
               (lua_State *param_1,lua_TValue *param_2,lua_TValue *param_3,lua_TValue *param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  lua_TValue *plVar4;
  double *pdVar5;
  double *pdVar6;
  undefined1 *puVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar3 = *(int *)(param_3 + 0xc);
  iVar1 = *(int *)(param_4 + 0xc);
  if ((param_3 == (lua_TValue *)0x0 || iVar3 != 5) || (param_4 == (lua_TValue *)0x0 || iVar1 != 5))
  {
    if (param_3 == (lua_TValue *)0x0 || iVar3 != 5) {
      if (iVar3 == 3 || (param_4 == (lua_TValue *)0x0 || iVar1 != 5)) goto LAB_0064435c;
      puVar7 = auStack_58;
      plVar4 = param_3;
    }
    else {
      if (iVar1 == 3) goto LAB_0064435c;
      puVar7 = auStack_68;
      plVar4 = param_4;
    }
    FUN_00642b68(plVar4,puVar7);
  }
LAB_0064435c:
  pdVar5 = (double *)FUN_00642b68(param_3,auStack_58);
  if ((pdVar5 == (double *)0x0) ||
     (pdVar6 = (double *)FUN_00642b68(param_4,auStack_68), pdVar6 == (double *)0x0)) {
    iVar3 = FUN_006439c8(param_1,param_3,param_4,param_2,0xd);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00621698(param_1,param_3,param_4,0xd);
    }
  }
  else {
    dVar8 = *pdVar5;
    dVar10 = *pdVar6;
    *(undefined4 *)(param_2 + 0xc) = 3;
    uVar9 = NEON_fmsub((long)(dVar8 / dVar10),dVar10,dVar8);
    *(undefined8 *)param_2 = uVar9;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00644400  luaV_doarithimpl<(TMS)14> =====

/* void luaV_doarithimpl<(TMS)14>(lua_State*, lua_TValue*, lua_TValue const*, lua_TValue const*) */

void luaV_doarithimpl<(TMS)14>
               (lua_State *param_1,lua_TValue *param_2,lua_TValue *param_3,lua_TValue *param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  lua_TValue *plVar4;
  double *pdVar5;
  double *pdVar6;
  undefined1 *puVar7;
  double dVar8;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar3 = *(int *)(param_3 + 0xc);
  iVar1 = *(int *)(param_4 + 0xc);
  if ((param_3 == (lua_TValue *)0x0 || iVar3 != 5) || (param_4 == (lua_TValue *)0x0 || iVar1 != 5))
  {
    if (param_3 == (lua_TValue *)0x0 || iVar3 != 5) {
      if (iVar3 == 3 || (param_4 == (lua_TValue *)0x0 || iVar1 != 5)) goto LAB_00644494;
      puVar7 = auStack_58;
      plVar4 = param_3;
    }
    else {
      if (iVar1 == 3) goto LAB_00644494;
      puVar7 = auStack_68;
      plVar4 = param_4;
    }
    FUN_00642b68(plVar4,puVar7);
  }
LAB_00644494:
  pdVar5 = (double *)FUN_00642b68(param_3,auStack_58);
  if ((pdVar5 == (double *)0x0) ||
     (pdVar6 = (double *)FUN_00642b68(param_4,auStack_68), pdVar6 == (double *)0x0)) {
    iVar3 = FUN_006439c8(param_1,param_3,param_4,param_2,0xe);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00621698(param_1,param_3,param_4,0xe);
    }
  }
  else {
    dVar8 = pow(*pdVar5,*pdVar6);
    *(double *)param_2 = dVar8;
    *(undefined4 *)(param_2 + 0xc) = 3;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00644530  luaV_doarithimpl<(TMS)15> =====

/* void luaV_doarithimpl<(TMS)15>(lua_State*, lua_TValue*, lua_TValue const*, lua_TValue const*) */

void luaV_doarithimpl<(TMS)15>
               (lua_State *param_1,lua_TValue *param_2,lua_TValue *param_3,lua_TValue *param_4)

{
  long lVar1;
  int iVar2;
  lua_TValue *plVar3;
  double *pdVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = *(int *)(param_4 + 0xc);
  plVar3 = param_3;
  if (*(int *)(param_3 + 0xc) != 5) {
    plVar3 = (lua_TValue *)0x0;
  }
  if ((plVar3 == (lua_TValue *)0x0) || (param_4 == (lua_TValue *)0x0 || iVar2 != 5)) {
    if (plVar3 == (lua_TValue *)0x0) {
      if (*(int *)(param_3 + 0xc) != 3 && (param_4 != (lua_TValue *)0x0 && iVar2 == 5)) {
        puVar6 = auStack_58;
        plVar3 = param_3;
        goto LAB_006445e4;
      }
    }
    else if (iVar2 != 3) {
      puVar6 = auStack_68;
      plVar3 = param_4;
LAB_006445e4:
      FUN_00642b68(plVar3,puVar6);
    }
    pdVar4 = (double *)FUN_00642b68(param_3,auStack_58);
    if ((pdVar4 == (double *)0x0) || (lVar5 = FUN_00642b68(param_4,auStack_68), lVar5 == 0)) {
      iVar2 = FUN_006439c8(param_1,param_3,param_4,param_2,0xf);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00621698(param_1,param_3,param_4,0xf);
      }
      goto LAB_00644640;
    }
    uVar7 = 3;
    *(double *)param_2 = -*pdVar4;
  }
  else {
    uVar7 = 5;
    *(float *)param_2 = -*(float *)plVar3;
    *(float *)(param_2 + 4) = -*(float *)(plVar3 + 4);
    *(float *)(param_2 + 8) = -*(float *)(plVar3 + 8);
  }
  *(undefined4 *)(param_2 + 0xc) = uVar7;
LAB_00644640:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00644680  FUN_00644680 =====

void FUN_00644680(long param_1,double *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  if (*(int *)((long)param_3 + 0xc) == 6) {
    dVar4 = (double)NEON_ucvtf((ulong)*(uint *)(*param_3 + 0x14));
LAB_006446f8:
    *param_2 = dVar4;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    return;
  }
  if (*(int *)((long)param_3 + 0xc) == 7) {
    lVar3 = *param_3;
    lVar2 = *(long *)(lVar3 + 0x10);
    if (((lVar2 == 0) || ((*(byte *)(lVar2 + 3) >> 6 & 1) != 0)) ||
       (lVar2 = FUN_00631210(lVar2,6,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x438)), lVar2 == 0
       )) {
      iVar1 = FUN_0062f6fc(lVar3);
      dVar4 = (double)iVar1;
      goto LAB_006446f8;
    }
  }
  else {
    lVar2 = FUN_00631294(param_1,param_3,6);
  }
  if (*(int *)(lVar2 + 0xc) == 0) {
    FUN_006214c8(param_1,param_3,"get length of");
  }
  else {
    lVar2 = FUN_00642e84(param_1,param_2,lVar2,param_3,&DAT_00285948);
    if (*(int *)(lVar2 + 0xc) == 3) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_006214f8(param_1,"\'__len\' must return a number");
}


// ===== 0064477c  FUN_0064477c =====

void FUN_0064477c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  
  if ((*(int *)(param_4 + 0xc) == 3) || (lVar8 = FUN_00642b68(param_4,param_4), lVar8 != 0)) {
    if ((*(int *)(param_2 + 0xc) == 3) || (lVar8 = FUN_00642b68(param_2,param_2), lVar8 != 0)) {
      if ((*(int *)(param_3 + 0xc) == 3) || (lVar8 = FUN_00642b68(param_3,param_3), lVar8 != 0)) {
        return;
      }
      goto LAB_00644828;
    }
  }
  else {
    FUN_00621624(param_1,param_4,"initial value");
  }
  FUN_00621624(param_1,param_2,"limit");
LAB_00644828:
  uVar9 = 0x242cd6;
  auVar16 = FUN_00621624(param_1,param_3);
  lVar8 = auVar16._0_8_;
  sVar4 = *(short *)(lVar8 + 0x50);
  *(short *)(lVar8 + 0x50) = sVar4 + 1;
  if (199 < (ushort)(sVar4 + 1U)) {
    FUN_0062253c(lVar8);
  }
  lVar14 = *(long *)(lVar8 + 8);
  if (*(long *)(lVar8 + 0x28) - lVar14 < 0x141) {
    iVar2 = *(int *)(lVar8 + 0x48);
    iVar1 = iVar2 + 0x14;
    if (0x13 < iVar2) {
      iVar1 = iVar2 << 1;
    }
    FUN_006222f4(lVar8,iVar1,0);
    lVar14 = *(long *)(lVar8 + 8);
  }
  lVar13 = lVar14 + (auVar16._8_8_ & 0xffffffff) * -0x10;
  plVar15 = (long *)(lVar13 + -0x10);
  if (*(long *)(lVar8 + 0x20) == *(long *)(lVar8 + 0x38)) {
    plVar10 = (long *)FUN_006224b4(lVar8);
  }
  else {
    plVar10 = (long *)(*(long *)(lVar8 + 0x20) + 0x28);
    *(long **)(lVar8 + 0x20) = plVar10;
  }
  *plVar10 = lVar13;
  plVar10[1] = (long)plVar15;
  puVar6 = PTR_LuauClosureUsageCounter_0067dbb0;
  plVar10[2] = lVar14 + 0x140;
  plVar10[3] = 0;
  cVar3 = *puVar6;
  *(uint *)(plVar10 + 4) = ~uVar9 >> 0x1f;
  *(undefined4 *)((long)plVar10 + 0x24) = 0;
  if (cVar3 != '\0') {
    plVar15 = (long *)*plVar15;
    plVar15[1] = plVar15[1] + 1;
  }
  *(long *)(lVar8 + 0x10) = lVar13;
  uVar7 = (**(code **)(*(long *)(lVar13 + -0x10) + 0x20))(lVar8);
  lVar14 = *(long *)(lVar8 + 0x20);
  plVar10 = (long *)(lVar14 + -0x28);
  if (*puVar6 != '\0') {
    plVar15[1] = plVar15[1] + -1;
  }
  if (-1 < (int)uVar9) {
    if ((int)uVar7 < 1) {
      *(undefined4 *)(*plVar10 + (ulong)uVar9 * 0x10 + 0xc) = 0;
    }
    else {
      puVar11 = (undefined8 *)(*(long *)(lVar8 + 8) + (ulong)uVar7 * -0x10);
      uVar12 = *puVar11;
      puVar5 = (undefined8 *)(*plVar10 + (ulong)uVar9 * 0x10);
      puVar5[1] = puVar11[1];
      *puVar5 = uVar12;
    }
  }
  uVar12 = *(undefined8 *)(lVar14 + -0x28);
  *(long **)(lVar8 + 0x20) = plVar10;
  *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(lVar14 + -0x18);
  *(undefined8 *)(lVar8 + 0x10) = uVar12;
  *(short *)(lVar8 + 0x50) = *(short *)(lVar8 + 0x50) + -1;
  return;
}


// ===== 0064483c  FUN_0064483c =====

void FUN_0064483c(long param_1,ulong param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  uint uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  
  sVar4 = *(short *)(param_1 + 0x50);
  *(short *)(param_1 + 0x50) = sVar4 + 1;
  if (199 < (ushort)(sVar4 + 1U)) {
    FUN_0062253c(param_1);
  }
  lVar12 = *(long *)(param_1 + 8);
  if (*(long *)(param_1 + 0x28) - lVar12 < 0x141) {
    iVar2 = *(int *)(param_1 + 0x48);
    iVar1 = iVar2 + 0x14;
    if (0x13 < iVar2) {
      iVar1 = iVar2 << 1;
    }
    FUN_006222f4(param_1,iVar1,0);
    lVar12 = *(long *)(param_1 + 8);
  }
  lVar11 = lVar12 + (param_2 & 0xffffffff) * -0x10;
  plVar13 = (long *)(lVar11 + -0x10);
  if (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x38)) {
    plVar8 = (long *)FUN_006224b4(param_1);
  }
  else {
    plVar8 = (long *)(*(long *)(param_1 + 0x20) + 0x28);
    *(long **)(param_1 + 0x20) = plVar8;
  }
  *plVar8 = lVar11;
  plVar8[1] = (long)plVar13;
  puVar6 = PTR_LuauClosureUsageCounter_0067dbb0;
  plVar8[2] = lVar12 + 0x140;
  plVar8[3] = 0;
  cVar3 = *puVar6;
  *(uint *)(plVar8 + 4) = ~param_3 >> 0x1f;
  *(undefined4 *)((long)plVar8 + 0x24) = 0;
  if (cVar3 != '\0') {
    plVar13 = (long *)*plVar13;
    plVar13[1] = plVar13[1] + 1;
  }
  *(long *)(param_1 + 0x10) = lVar11;
  uVar7 = (**(code **)(*(long *)(lVar11 + -0x10) + 0x20))(param_1);
  lVar12 = *(long *)(param_1 + 0x20);
  plVar8 = (long *)(lVar12 + -0x28);
  if (*puVar6 != '\0') {
    plVar13[1] = plVar13[1] + -1;
  }
  if (-1 < (int)param_3) {
    if ((int)uVar7 < 1) {
      *(undefined4 *)(*plVar8 + (ulong)param_3 * 0x10 + 0xc) = 0;
    }
    else {
      puVar9 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar7 * -0x10);
      uVar10 = *puVar9;
      puVar5 = (undefined8 *)(*plVar8 + (ulong)param_3 * 0x10);
      puVar5[1] = puVar9[1];
      *puVar5 = uVar10;
    }
  }
  uVar10 = *(undefined8 *)(lVar12 + -0x28);
  *(long **)(param_1 + 0x20) = plVar8;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar12 + -0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar10;
  *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + -1;
  return;
}


// ===== 006449ac  FUN_006449ac =====

void FUN_006449ac(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long extraout_x8;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)FUN_00631294(param_1,param_2,4);
  if (*(int *)((long)puVar1 + 0xc) == 8) {
    puVar2 = *(undefined8 **)(param_1 + 8);
    if (param_2 < puVar2) {
      do {
        puVar3 = puVar2 + -2;
        puVar2[1] = puVar2[-1];
        *puVar2 = puVar2[-2];
        puVar2 = puVar3;
      } while (param_2 < puVar3);
      puVar2 = *(undefined8 **)(param_1 + 8);
    }
    *(undefined8 **)(param_1 + 8) = puVar2 + 2;
    uVar4 = *puVar1;
    param_2[1] = puVar1[1];
    *param_2 = uVar4;
    return;
  }
  FUN_006214c8(param_1,param_2,&DAT_0024a23a);
  FUN_00487004(*(undefined8 *)(extraout_x8 + 0x488));
  return;
}


// ===== 00644a40  FUN_00644a40 =====

void FUN_00644a40(void)

{
  (*(code *)PTR_0067dc00)();
  return;
}


// ===== 00644a60  <EXTERNAL>::__cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0067dc08)();
  return;
}


// ===== 00644a70  <EXTERNAL>::__cxa_atexit =====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_0067dc10)();
  return;
}


// ===== 00644a80  rive::Artboard::animation =====

void __thiscall rive::Artboard::animation(Artboard *this,ulong param_1)

{
  (*(code *)PTR_animation_0067dc18)();
  return;
}


// ===== 00644a90  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init_copy_ctor_external =====

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
__init_copy_ctor_external
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  (*(code *)PTR___init_copy_ctor_external_0067dc20)();
  return;
}


// ===== 00644aa0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 00644ab0  <EXTERNAL>::__stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_0067dc30)();
  return;
}


// ===== 00644ac0  rive::Artboard::stateMachine =====

void __thiscall rive::Artboard::stateMachine(Artboard *this,ulong param_1)

{
  (*(code *)PTR_stateMachine_0067dc38)();
  return;
}


// ===== 00644ad0  rive::ArtboardInstance::animationAt =====

void rive::ArtboardInstance::animationAt(ulong param_1)

{
  (*(code *)PTR_animationAt_0067dc40)();
  return;
}


// ===== 00644ae0  rive_android::JStringToString =====

void __thiscall rive_android::JStringToString(rive_android *this,_JNIEnv *param_1,_jstring *param_2)

{
  (*(code *)PTR_JStringToString_0067dc48)();
  return;
}


// ===== 00644af0  rive::ArtboardInstance::animationNamed =====

void rive::ArtboardInstance::animationNamed(basic_string *param_1)

{
  (*(code *)PTR_animationNamed_0067dc50)();
  return;
}


// ===== 00644b00  rive::ArtboardInstance::stateMachineAt =====

void rive::ArtboardInstance::stateMachineAt(ulong param_1)

{
  (*(code *)PTR_stateMachineAt_0067dc58)();
  return;
}


// ===== 00644b10  rive::ArtboardInstance::stateMachineNamed =====

void rive::ArtboardInstance::stateMachineNamed(basic_string *param_1)

{
  (*(code *)PTR_stateMachineNamed_0067dc60)();
  return;
}


// ===== 00644b20  rive::ArtboardInstance::input =====

void __thiscall
rive::ArtboardInstance::input(ArtboardInstance *this,basic_string *param_1,basic_string *param_2)

{
  (*(code *)PTR_input_0067dc68)();
  return;
}


// ===== 00644b30  rive::Artboard::volume =====

void __thiscall rive::Artboard::volume(Artboard *this)

{
  (*(code *)PTR_volume_0067dc70)();
  return;
}


// ===== 00644b40  rive::Artboard::volume =====

void __thiscall rive::Artboard::volume(Artboard *this,float param_1)

{
  (*(code *)PTR_volume_0067dc78)();
  return;
}


// ===== 00644b50  rive::Artboard::find<rive::TextValueRun> =====

TextValueRun * __thiscall
rive::Artboard::find<rive::TextValueRun>(Artboard *this,basic_string *param_1)

{
  TextValueRun *pTVar1;
  
  pTVar1 = (TextValueRun *)(*(code *)PTR_find<rive_TextValueRun>_0067dc80)();
  return pTVar1;
}


// ===== 00644b60  <EXTERNAL>::memcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_0067dc88)((int)__s1);
  return iVar1;
}


// ===== 00644b70  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator= =====

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
operator=(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
         basic_string *param_1)

{
  (*(code *)PTR_operator__0067dc90)();
  return;
}


// ===== 00644b80  rive::ArtboardInstance::getTextRun =====

void __thiscall
rive::ArtboardInstance::getTextRun
          (ArtboardInstance *this,basic_string *param_1,basic_string *param_2)

{
  (*(code *)PTR_getTextRun_0067dc98)();
  return;
}


// ===== 00644b90  rive::Artboard::advance =====

void __thiscall rive::Artboard::advance(void)

{
  (*(code *)PTR_advance_0067dca0)();
  return;
}


// ===== 00644ba0  rive::Artboard::bounds =====

void __thiscall rive::Artboard::bounds(Artboard *this)

{
  (*(code *)PTR_bounds_0067dca8)();
  return;
}


// ===== 00644bb0  _JNIEnv::NewObject =====

void _JNIEnv::NewObject(_jclass *param_1,_jmethodID *param_2,...)

{
  (*(code *)PTR_NewObject_0067dcb0)();
  return;
}


// ===== 00644bc0  rive::Artboard::bindViewModelInstance =====

void __thiscall rive::Artboard::bindViewModelInstance(void)

{
  (*(code *)PTR_bindViewModelInstance_0067dcb8)();
  return;
}


// ===== 00644bd0  rive_android::JNIRenderer::getRendererOnWorkerThread =====

void __thiscall rive_android::JNIRenderer::getRendererOnWorkerThread(JNIRenderer *this)

{
  (*(code *)PTR_getRendererOnWorkerThread_0067dcc0)();
  return;
}


// ===== 00644be0  rive_android::GetFit =====

void rive_android::GetFit(_JNIEnv *param_1,_jobject *param_2)

{
  (*(code *)PTR_GetFit_0067dcc8)();
  return;
}


// ===== 00644bf0  rive_android::GetAlignment =====

void rive_android::GetAlignment(_JNIEnv *param_1,_jobject *param_2)

{
  (*(code *)PTR_GetAlignment_0067dcd0)();
  return;
}


// ===== 00644c00  <EXTERNAL>::ANativeWindow_getWidth =====

void ANativeWindow_getWidth(void)

{
  (*(code *)PTR_ANativeWindow_getWidth_0067dcd8)();
  return;
}


// ===== 00644c10  <EXTERNAL>::ANativeWindow_getHeight =====

void ANativeWindow_getHeight(void)

{
  (*(code *)PTR_ANativeWindow_getHeight_0067dce0)();
  return;
}


// ===== 00644c20  rive::computeAlignment =====

void rive::computeAlignment(void)

{
  (*(code *)PTR_computeAlignment_0067dce8)();
  return;
}


// ===== 00644c30  <EXTERNAL>::operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_0067dcf0)();
  return pvVar1;
}


// ===== 00644c40  <EXTERNAL>::memmove =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0067dcf8)();
  return pvVar1;
}


// ===== 00644c50  <EXTERNAL>::std::__ndk1::__libcpp_verbose_abort =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__libcpp_verbose_abort(char *param_1,...)

{
  (*(code *)PTR___libcpp_verbose_abort_0067dd00)();
  return;
}


// ===== 00644c60  rive_android::AudioEngine::Instance =====

void rive_android::AudioEngine::Instance(void)

{
  (*(code *)PTR_Instance_0067dd08)();
  return;
}


// ===== 00644c70  rive_android::AudioEngine::acquire =====

void __thiscall rive_android::AudioEngine::acquire(AudioEngine *this)

{
  (*(code *)PTR_acquire_0067dd10)();
  return;
}


// ===== 00644c80  rive_android::AudioEngine::release =====

void __thiscall rive_android::AudioEngine::release(AudioEngine *this)

{
  (*(code *)PTR_release_0067dd18)();
  return;
}


// ===== 00644c90  rive::File::~File =====

void __thiscall rive::File::~File(File *this)

{
  (*(code *)PTR__File_0067dd20)();
  return;
}


