// ===== 004ebb2c  rive::ViewModelInstanceEnumRuntime::value =====

/* rive::ViewModelInstanceEnumRuntime::value(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

void __thiscall
rive::ViewModelInstanceEnumRuntime::value(ViewModelInstanceEnumRuntime *this,ulong *param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ViewModelPropertyEnum *pVVar4;
  ulong local_70;
  ulong uStack_68;
  char *local_60;
  ulong local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)(this + 8);
  if ((*param_2 & 1) == 0) {
    uStack_68 = param_2[1];
    local_70 = *param_2;
    local_60 = (char *)param_2[2];
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_70,(char *)param_2[2],param_2[1]);
  }
  pVVar4 = (ViewModelPropertyEnum *)plVar3[0x15];
  if ((local_70 & 1) == 0) {
    uStack_48 = uStack_68;
    local_50 = local_70;
    local_40 = local_60;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_50,local_60,uStack_68);
  }
  iVar2 = ViewModelPropertyEnum::valueIndex(pVVar4,&local_50);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((iVar2 != -1) && ((int)plVar3[0x22] != iVar2)) {
    *(int *)(plVar3 + 0x22) = iVar2;
    (**(code **)(*plVar3 + 0xa8))(plVar3);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ebc28  rive::ViewModelInstanceEnumRuntime::valueIndex =====

/* rive::ViewModelInstanceEnumRuntime::valueIndex() const */

uint __thiscall rive::ViewModelInstanceEnumRuntime::valueIndex(ViewModelInstanceEnumRuntime *this)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = (**(code **)(**(long **)(*(long *)(this + 8) + 0xa8) + 0x68))();
  uVar3 = *(long *)(lVar2 + 0x18) - *(long *)(lVar2 + 0x10);
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003ab68c();
    }
    uVar3 = uVar3 >> 3;
  }
  uVar1 = *(uint *)(*(long *)(this + 8) + 0x110);
  if (uVar3 <= uVar1) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 004ebc80  rive::ViewModelInstanceEnumRuntime::valueIndex =====

/* rive::ViewModelInstanceEnumRuntime::valueIndex(unsigned int) */

void __thiscall
rive::ViewModelInstanceEnumRuntime::valueIndex(ViewModelInstanceEnumRuntime *this,uint param_1)

{
  void *__src;
  ulong __n;
  long lVar1;
  int iVar2;
  long lVar3;
  void *__dest;
  long *plVar4;
  ViewModelPropertyEnum *pVVar5;
  ulong local_80;
  ulong uStack_78;
  char *local_70;
  ulong local_60;
  ulong uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = (**(code **)(**(long **)(*(long *)(this + 8) + 0xa8) + 0x68))();
  __src = *(void **)(lVar3 + 0x10);
  __n = *(long *)(lVar3 + 0x18) - (long)__src;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003ab68c();
    }
    __dest = operator_new(__n);
    memcpy(__dest,__src,__n);
    if ((ulong)param_1 < __n >> 3) {
      lVar3 = *(long *)((long)__dest + (ulong)param_1 * 8);
      plVar4 = *(long **)(this + 8);
      if ((*(byte *)(lVar3 + 0x10) & 1) == 0) {
        uStack_78 = *(ulong *)(lVar3 + 0x18);
        local_80 = *(ulong *)(lVar3 + 0x10);
        local_70 = *(char **)(lVar3 + 0x20);
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_80,*(char **)(lVar3 + 0x20),*(ulong *)(lVar3 + 0x18));
      }
      pVVar5 = (ViewModelPropertyEnum *)plVar4[0x15];
      if ((local_80 & 1) == 0) {
        uStack_58 = uStack_78;
        local_60 = local_80;
        local_50 = local_70;
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_60,local_70,uStack_78);
      }
      iVar2 = ViewModelPropertyEnum::valueIndex(pVVar5,&local_60);
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
      if ((iVar2 != -1) && ((int)plVar4[0x22] != iVar2)) {
        *(int *)(plVar4 + 0x22) = iVar2;
        (**(code **)(*plVar4 + 0xa8))(plVar4);
      }
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
    }
    operator_delete(__dest);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ebde4  rive::ViewModelInstanceEnumRuntime::values =====

/* rive::ViewModelInstanceEnumRuntime::values() const */

void rive::ViewModelInstanceEnumRuntime::values(void)

{
  void *__src;
  ulong __n;
  long in_x0;
  long *plVar1;
  void *__dest;
  undefined8 *in_x8;
  long lVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = *(long *)(in_x0 + 8);
  *in_x8 = 0;
  in_x8[1] = 0;
  plVar1 = *(long **)(lVar2 + 0xa8);
  in_x8[2] = 0;
  lVar2 = (**(code **)(*plVar1 + 0x68))();
  __src = *(void **)(lVar2 + 0x10);
  __n = *(long *)(lVar2 + 0x18) - (long)__src;
  if (__n == 0) {
    return;
  }
  if (-1 < (long)__n) {
    __dest = operator_new(__n);
    memcpy(__dest,__src,__n);
    uVar4 = 0;
    this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0;
    do {
      lVar2 = *(long *)((long)__dest + uVar4);
      if (this < (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 in_x8[2]) {
        if ((*(byte *)(lVar2 + 0x10) & 1) == 0) {
          uVar6 = *(undefined8 *)(lVar2 + 0x18);
          uVar5 = *(undefined8 *)(lVar2 + 0x10);
          *(undefined8 *)(this + 0x10) = *(undefined8 *)(lVar2 + 0x20);
          pbVar3 = this + 0x18;
          *(undefined8 *)(this + 8) = uVar6;
          *(undefined8 *)this = uVar5;
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external(this,*(char **)(lVar2 + 0x20),*(ulong *)(lVar2 + 0x18));
          pbVar3 = this + 0x18;
        }
      }
      else {
        pbVar3 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 FUN_003ab78c();
      }
      uVar4 = uVar4 + 8;
      in_x8[1] = pbVar3;
      this = pbVar3;
    } while (__n != uVar4);
    operator_delete(__dest);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003ab68c();
}


// ===== 004ebedc  rive::ViewModelInstanceEnumRuntime::enumType =====

/* rive::ViewModelInstanceEnumRuntime::enumType() const */

void rive::ViewModelInstanceEnumRuntime::enumType(void)

{
  long in_x0;
  long *plVar1;
  byte *pbVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  undefined8 uVar3;
  undefined8 uVar4;
  
  plVar1 = (long *)(**(code **)(**(long **)(*(long *)(in_x0 + 8) + 0xa8) + 0x68))();
  pbVar2 = (byte *)(**(code **)(*plVar1 + 0x50))();
  if ((*pbVar2 & 1) == 0) {
    uVar4 = *(undefined8 *)(pbVar2 + 8);
    uVar3 = *(undefined8 *)pbVar2;
    *(undefined8 *)(in_x8 + 0x10) = *(undefined8 *)(pbVar2 + 0x10);
    *(undefined8 *)(in_x8 + 8) = uVar4;
    *(undefined8 *)in_x8 = uVar3;
    return;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  __init_copy_ctor_external(in_x8,*(char **)(pbVar2 + 0x10),*(ulong *)(pbVar2 + 8));
  return;
}


// ===== 004ebf44  rive::ViewModelInstanceListRuntime::instanceAt =====

/* rive::ViewModelInstanceListRuntime::instanceAt(int) */

void rive::ViewModelInstanceListRuntime::instanceAt(int param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ViewModelInstanceRuntime *this;
  long lVar5;
  int in_w1;
  long *in_x8;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ViewModelInstanceRuntime *this_00;
  long *plVar12;
  long *plVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  long *local_58;
  long *local_50;
  long local_48;
  
  uVar4 = (ulong)(uint)param_1;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (-1 < in_w1) {
    lVar5 = *(long *)(*(long *)(uVar4 + 8) + 0x120);
    if ((ulong)(long)in_w1 < (ulong)(*(long *)(*(long *)(uVar4 + 8) + 0x128) - lVar5 >> 3)) {
      plVar12 = *(long **)(lVar5 + (long)in_w1 * 8);
      if (plVar12 != (long *)0x0) {
        FUN_00340fb0(1,(long)plVar12 + 0x14);
      }
      plVar13 = (long *)plVar12[3];
      local_58 = plVar12;
      if (plVar13 == (long *)0x0) {
        *in_x8 = 0;
      }
      else {
        uVar6 = *(ulong *)(uVar4 + 0x20);
        if (uVar6 != 0) {
          uVar7 = ((ulong)(uint)((int)plVar12 << 3) + 8 ^ (ulong)plVar12 >> 0x20) *
                  -0x622015f714c7d297;
          uVar15 = NEON_cnt(uVar6,1);
          uVar14 = NEON_uaddlv(uVar15,1);
          uVar7 = ((ulong)plVar12 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
          uVar8 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
          uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
          if (uVar8 < 2) {
            uVar9 = uVar6 - 1 & uVar7;
          }
          else {
            uVar9 = uVar7;
            if (uVar6 <= uVar7) {
              uVar9 = 0;
              if (uVar6 != 0) {
                uVar9 = uVar7 / uVar6;
              }
              uVar9 = uVar7 - uVar9 * uVar6;
            }
          }
          plVar10 = *(long **)(*(long *)(uVar4 + 0x18) + uVar9 * 8);
          if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
            do {
              uVar11 = plVar10[1];
              if (uVar11 == uVar7) {
                if ((long *)plVar10[2] == plVar12) {
                  lVar5 = plVar10[3];
                  if (lVar5 != 0) {
                    FUN_00340fb0(1,lVar5);
                  }
                  *in_x8 = lVar5;
                  goto joined_r0x004ec1e0;
                }
              }
              else {
                if (uVar8 < 2) {
                  uVar11 = uVar11 & uVar6 - 1;
                }
                else if (uVar6 <= uVar11) {
                  uVar1 = 0;
                  if (uVar6 != 0) {
                    uVar1 = uVar11 / uVar6;
                  }
                  uVar11 = uVar11 - uVar1 * uVar6;
                }
                if (uVar11 != uVar9) break;
              }
              plVar10 = (long *)*plVar10;
            } while (plVar10 != (long *)0x0);
          }
        }
        this = (ViewModelInstanceRuntime *)operator_new(0x60);
        FUN_00340fb0(1,(long)plVar13 + 0xa4);
        local_50 = plVar13;
        ViewModelInstanceRuntime::ViewModelInstanceRuntime(this,&local_50);
        plVar12 = local_50;
        if ((local_50 != (long *)0x0) &&
           (iVar3 = FUN_00340fe0(0xffffffff,(long)local_50 + 0xa4), iVar3 == 1)) {
          (**(code **)(*plVar12 + 8))(plVar12);
        }
        lVar5 = FUN_004ec1ec(uVar4 + 0x18,local_58,&local_58);
        FUN_00340fb0(1,this);
        this_00 = *(ViewModelInstanceRuntime **)(lVar5 + 0x18);
        *(ViewModelInstanceRuntime **)(lVar5 + 0x18) = this;
        if ((this_00 != (ViewModelInstanceRuntime *)0x0) &&
           (iVar3 = FUN_00340fe0(0xffffffff,this_00), iVar3 == 1)) {
          ViewModelInstanceRuntime::~ViewModelInstanceRuntime(this_00);
          operator_delete(this_00);
        }
        FUN_00340fb0(1,this);
        *in_x8 = (long)this;
        iVar3 = FUN_00340fe0(0xffffffff,this);
        plVar12 = local_58;
        if (iVar3 == 1) {
          ViewModelInstanceRuntime::~ViewModelInstanceRuntime(this);
          operator_delete(this);
          plVar12 = local_58;
        }
joined_r0x004ec1e0:
        if (plVar12 == (long *)0x0) goto LAB_004ec1a0;
      }
      iVar3 = FUN_00340fe0(0xffffffff,(long)plVar12 + 0x14);
      if (iVar3 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12);
      }
      goto LAB_004ec1a0;
    }
  }
  *in_x8 = 0;
LAB_004ec1a0:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004ec1ec  FUN_004ec1ec =====

long * FUN_004ec1ec(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong unaff_x24;
  undefined2 uVar15;
  undefined8 uVar16;
  float fVar17;
  
  uVar14 = param_1[1];
  uVar6 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
  uVar6 = (param_2 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  if (uVar14 != 0) {
    uVar16 = NEON_cnt(uVar14,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar8 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar8 < 2) {
      unaff_x24 = uVar6 & uVar14 - 1;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar14 <= uVar6) {
        uVar10 = 0;
        if (uVar14 != 0) {
          uVar10 = uVar6 / uVar14;
        }
        unaff_x24 = uVar6 - uVar10 * uVar14;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x24 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar10 = plVar7[1];
        if (uVar10 == uVar6) {
          if (plVar7[2] == param_2) {
            return plVar7;
          }
        }
        else {
          if (uVar8 < 2) {
            uVar10 = uVar10 & uVar14 - 1;
          }
          else if (uVar14 <= uVar10) {
            uVar5 = 0;
            if (uVar14 != 0) {
              uVar5 = uVar10 / uVar14;
            }
            uVar10 = uVar10 - uVar5 * uVar14;
          }
          if (uVar10 != unaff_x24) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  plVar7 = (long *)operator_new(0x20);
  lVar13 = *param_3;
  *plVar7 = 0;
  plVar7[1] = uVar6;
  if (lVar13 != 0) {
    FUN_00340fb0(1,lVar13 + 0x14);
  }
  lVar3 = param_1[3];
  fVar17 = *(float *)(param_1 + 4);
  plVar7[2] = lVar13;
  plVar7[3] = 0;
  if ((uVar14 == 0) || (fVar17 * (float)uVar14 < (float)(lVar3 + 1))) {
    if (uVar14 < 3) {
      uVar8 = 1;
    }
    else {
      uVar8 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar8 = uVar8 | uVar14 << 1;
    uVar14 = (ulong)((float)(lVar3 + 1) / fVar17);
    if (uVar8 <= uVar14) {
      uVar8 = uVar14;
    }
    if (uVar8 - 1 == 0) {
      uVar8 = 2;
    }
    else if ((uVar8 & uVar8 - 1) != 0) {
      uVar8 = std::__ndk1::__next_prime(uVar8);
    }
    uVar14 = param_1[1];
    if (uVar14 < uVar8) {
LAB_004ec398:
      if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      pvVar2 = operator_new(uVar8 << 3);
      pvVar4 = (void *)*param_1;
      *param_1 = (long)pvVar2;
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
      uVar14 = 0;
      param_1[1] = uVar8;
      do {
        *(undefined8 *)(*param_1 + uVar14 * 8) = 0;
        uVar14 = uVar14 + 1;
      } while (uVar8 != uVar14);
      plVar9 = (long *)param_1[2];
      uVar14 = uVar8;
      if (plVar9 != (long *)0x0) {
        uVar10 = plVar9[1];
        uVar16 = NEON_cnt(uVar8,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        uVar5 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
        if (uVar5 < 2) {
          uVar10 = uVar10 & uVar8 - 1;
        }
        else if (uVar8 <= uVar10) {
          uVar12 = 0;
          if (uVar8 != 0) {
            uVar12 = uVar10 / uVar8;
          }
          uVar10 = uVar10 - uVar12 * uVar8;
        }
        *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar9;
        if (plVar11 != (long *)0x0) {
          do {
            uVar12 = plVar11[1];
            if (uVar5 < 2) {
              uVar12 = uVar12 & uVar8 - 1;
            }
            else if (uVar8 <= uVar12) {
              uVar1 = 0;
              if (uVar8 != 0) {
                uVar1 = uVar12 / uVar8;
              }
              uVar12 = uVar12 - uVar1 * uVar8;
            }
            if (uVar12 != uVar10) {
              if (*(long *)(*param_1 + uVar12 * 8) == 0) {
                *(long **)(*param_1 + uVar12 * 8) = plVar9;
                uVar10 = uVar12;
              }
              else {
                *plVar9 = *plVar11;
                *plVar11 = **(long **)(*param_1 + uVar12 * 8);
                **(undefined8 **)(*param_1 + uVar12 * 8) = plVar11;
                plVar11 = plVar9;
              }
            }
            plVar9 = plVar11;
            plVar11 = (long *)*plVar9;
          } while (plVar11 != (long *)0x0);
        }
      }
    }
    else if (uVar8 < uVar14) {
      uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar14 < 3) {
LAB_004ec5cc:
        uVar10 = std::__ndk1::__next_prime(uVar10);
      }
      else {
        uVar16 = NEON_cnt(uVar14,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15)) goto LAB_004ec5cc;
        if (1 < uVar10) {
          uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
        }
      }
      if (uVar8 <= uVar10) {
        uVar8 = uVar10;
      }
      if (uVar8 < uVar14) {
        if (uVar8 != 0) goto LAB_004ec398;
        pvVar2 = (void *)*param_1;
        *param_1 = 0;
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2);
        }
        param_1[1] = 0;
        uVar14 = 0;
      }
      else {
        uVar14 = param_1[1];
      }
    }
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x24 = uVar14 - 1 & uVar6;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar14 <= uVar6) {
        uVar8 = 0;
        if (uVar14 != 0) {
          uVar8 = uVar6 / uVar14;
        }
        unaff_x24 = uVar6 - uVar8 * uVar14;
      }
    }
  }
  lVar13 = *param_1;
  plVar9 = *(long **)(lVar13 + unaff_x24 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    lVar3 = *plVar9;
    *plVar9 = (long)plVar7;
    *plVar7 = lVar3;
    *(long **)(lVar13 + unaff_x24 * 8) = plVar9;
    if (*plVar7 == 0) goto LAB_004ec5a8;
    uVar6 = *(ulong *)(*plVar7 + 8);
    if ((uVar14 & uVar14 - 1) == 0) {
      uVar6 = uVar6 & uVar14 - 1;
    }
    else if (uVar14 <= uVar6) {
      uVar8 = 0;
      if (uVar14 != 0) {
        uVar8 = uVar6 / uVar14;
      }
      uVar6 = uVar6 - uVar8 * uVar14;
    }
    plVar9 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar7 = *plVar9;
  }
  *plVar9 = (long)plVar7;
LAB_004ec5a8:
  param_1[3] = param_1[3] + 1;
  return plVar7;
}


// ===== 004ec60c  rive::ViewModelInstanceListRuntime::addInstance =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::ViewModelInstanceListRuntime::addInstance(rive::ViewModelInstanceRuntime*) */

void __thiscall
rive::ViewModelInstanceListRuntime::addInstance
          (ViewModelInstanceListRuntime *this,ViewModelInstanceRuntime *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  ViewModelInstance *this_00;
  long *plVar8;
  ViewModelInstanceValue *this_01;
  ViewModelInstanceRuntime *this_02;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)operator_new(0x28);
  puVar3 = PTR_vtable_0067d270;
  lVar2 = _UNK_0024df18;
  lVar6 = _DAT_0024df10;
  plVar8 = *(long **)(param_1 + 8);
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[2] = lVar2;
  plVar5[1] = lVar6;
  *plVar5 = (long)(puVar3 + 0x10);
  local_50 = plVar5;
  if (plVar8 != (long *)0x0) {
    FUN_00340fb0(1,(long)plVar8 + 0xa4);
    FUN_00340fb0(1,(long)plVar8 + 0xa4);
    plVar11 = (long *)plVar5[3];
    plVar5[3] = (long)plVar8;
    if ((plVar11 != (long *)0x0) &&
       (iVar4 = FUN_00340fe0(0xffffffff,(long)plVar11 + 0xa4), iVar4 == 1)) {
      (**(code **)(*plVar11 + 8))(plVar11);
    }
    iVar4 = FUN_00340fe0(0xffffffff,(long)plVar8 + 0xa4);
    if (iVar4 == 1) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
  }
  this_01 = *(ViewModelInstanceValue **)(this + 8);
  FUN_00340fb0(1,param_1);
  lVar6 = FUN_004ec1ec(this + 0x18,local_50,&local_50);
  this_02 = *(ViewModelInstanceRuntime **)(lVar6 + 0x18);
  *(ViewModelInstanceRuntime **)(lVar6 + 0x18) = param_1;
  if ((this_02 != (ViewModelInstanceRuntime *)0x0) &&
     (iVar4 = FUN_00340fe0(0xffffffff,this_02), iVar4 == 1)) {
    ViewModelInstanceRuntime::~ViewModelInstanceRuntime(this_02);
    operator_delete(this_02);
  }
  plVar5 = local_50;
  if (local_50 == (long *)0x0) {
    puVar9 = *(undefined8 **)(this_01 + 0x128);
    if (puVar9 < *(undefined8 **)(this_01 + 0x130)) goto LAB_004ec770;
LAB_004ec778:
    puVar7 = (undefined8 *)FUN_003bbd00(this_01 + 0x120,plVar5);
  }
  else {
    FUN_00340fb0(1,(long)local_50 + 0x14);
    puVar9 = *(undefined8 **)(this_01 + 0x128);
    if (*(undefined8 **)(this_01 + 0x130) <= puVar9) goto LAB_004ec778;
    FUN_00340fb0(1,(long)plVar5 + 0x14);
LAB_004ec770:
    puVar7 = puVar9 + 1;
    *puVar9 = plVar5;
  }
  this_00 = (ViewModelInstance *)plVar5[3];
  *(undefined8 **)(this_01 + 0x128) = puVar7;
  if (this_00 != (ViewModelInstance *)0x0) {
    ViewModelInstance::addParent(this_00,*(ViewModelInstance **)(this_01 + 0x138));
  }
  puVar9 = *(undefined8 **)(this_01 + 0xf0);
  puVar7 = *(undefined8 **)(this_01 + 0xe8);
  if (*(undefined8 **)(this_01 + 0xe8) == puVar9) {
    ViewModelInstanceValue::onValueChanged(this_01);
  }
  else {
    do {
      puVar10 = puVar7 + 1;
      (*(code *)**(undefined8 **)*puVar7)((undefined8 *)*puVar7,0x1000,1);
      puVar7 = puVar10;
    } while (puVar10 != puVar9);
    ViewModelInstanceValue::onValueChanged(this_01);
    if (plVar5 == (long *)0x0) goto LAB_004ec804;
  }
  iVar4 = FUN_00340fe0(0xffffffff,(long)plVar5 + 0x14);
  if (iVar4 == 1) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
LAB_004ec804:
  plVar5 = local_50;
  if ((local_50 != (long *)0x0) &&
     (iVar4 = FUN_00340fe0(0xffffffff,(long)local_50 + 0x14), iVar4 == 1)) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004ec85c  rive::ViewModelInstanceListRuntime::addInstanceAt =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::ViewModelInstanceListRuntime::addInstanceAt(rive::ViewModelInstanceRuntime*, int) */

uint __thiscall
rive::ViewModelInstanceListRuntime::addInstanceAt
          (ViewModelInstanceListRuntime *this,ViewModelInstanceRuntime *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ViewModelInstanceRuntime *this_00;
  long *plVar8;
  ViewModelInstanceList *pVVar9;
  long *plVar10;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar6 = (long *)operator_new(0x28);
  puVar3 = PTR_vtable_0067d270;
  lVar2 = _UNK_0024df18;
  lVar7 = _DAT_0024df10;
  plVar6[3] = 0;
  plVar6[4] = 0;
  pVVar9 = *(ViewModelInstanceList **)(this + 8);
  plVar6[2] = lVar2;
  plVar6[1] = lVar7;
  *plVar6 = (long)(puVar3 + 0x10);
  local_60 = plVar6;
  FUN_00340fb0(1,(long)plVar6 + 0x14);
  local_68 = plVar6;
  uVar4 = ViewModelInstanceList::addItemAt(pVVar9,&local_68,param_2);
  iVar5 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x14);
  if (iVar5 == 1) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
  plVar6 = local_60;
  if ((uVar4 & 1) != 0) {
    plVar8 = *(long **)(param_1 + 8);
    if (plVar8 != (long *)0x0) {
      FUN_00340fb0(1,(long)plVar8 + 0xa4);
      FUN_00340fb0(1,(long)plVar8 + 0xa4);
    }
    plVar10 = (long *)plVar6[3];
    plVar6[3] = (long)plVar8;
    if ((plVar10 != (long *)0x0) &&
       (iVar5 = FUN_00340fe0(0xffffffff,(long)plVar10 + 0xa4), iVar5 == 1)) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
    if ((plVar8 != (long *)0x0) &&
       (iVar5 = FUN_00340fe0(0xffffffff,(long)plVar8 + 0xa4), iVar5 == 1)) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
    FUN_00340fb0(1,param_1);
    lVar7 = FUN_004ec1ec(this + 0x18,local_60,&local_60);
    this_00 = *(ViewModelInstanceRuntime **)(lVar7 + 0x18);
    *(ViewModelInstanceRuntime **)(lVar7 + 0x18) = param_1;
    if ((this_00 != (ViewModelInstanceRuntime *)0x0) &&
       (iVar5 = FUN_00340fe0(0xffffffff,this_00), iVar5 == 1)) {
      ViewModelInstanceRuntime::~ViewModelInstanceRuntime(this_00);
      operator_delete(this_00);
    }
  }
  plVar6 = local_60;
  if ((local_60 != (long *)0x0) &&
     (iVar5 = FUN_00340fe0(0xffffffff,(long)local_60 + 0x14), iVar5 == 1)) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004eca38  rive::ViewModelInstanceListRuntime::removeInstance =====

/* rive::ViewModelInstanceListRuntime::removeInstance(rive::ViewModelInstanceRuntime*) */

void __thiscall
rive::ViewModelInstanceListRuntime::removeInstance
          (ViewModelInstanceListRuntime *this,ViewModelInstanceRuntime *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ViewModelInstanceList *pVVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined2 uVar16;
  undefined8 uVar17;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pVVar10 = *(ViewModelInstanceList **)(this + 8);
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  local_60 = (long *)0x0;
  plVar12 = *(long **)(pVVar10 + 0x120);
  lVar15 = *(long *)(pVVar10 + 0x128) - (long)plVar12;
  if (lVar15 != 0) {
    do {
      plVar11 = *(long **)(param_1 + 8);
      plVar13 = *(long **)(*plVar12 + 0x18);
      if (plVar11 == (long *)0x0) {
        if (plVar13 == (long *)0x0) goto LAB_004ecaf4;
      }
      else {
        FUN_00340fb0(1,(long)plVar11 + 0xa4);
        iVar4 = FUN_00340fe0(0xffffffff,(long)plVar11 + 0xa4);
        if (iVar4 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11);
        }
        if (plVar13 == plVar11) {
LAB_004ecaf4:
          plVar11 = local_68;
          lVar14 = *plVar12;
          if (local_68 < local_60) {
            if (lVar14 != 0) {
              FUN_00340fb0(1,lVar14 + 0x14);
            }
            local_68 = plVar11 + 1;
            *plVar11 = lVar14;
          }
          else {
            local_68 = (long *)FUN_003bbd00(&local_70,lVar14);
          }
        }
      }
      plVar3 = local_68;
      lVar15 = lVar15 + -8;
      plVar12 = plVar12 + 1;
      plVar11 = local_70;
      plVar13 = local_70;
    } while (lVar15 != 0);
    for (; local_70 = plVar13, plVar11 != plVar3; plVar11 = plVar11 + 1) {
      uVar5 = *(ulong *)(this + 0x20);
      plVar12 = (long *)*plVar11;
      if (uVar5 != 0) {
        uVar17 = NEON_cnt(uVar5,1);
        uVar6 = ((ulong)(uint)((int)plVar12 << 3) + 8 ^ (ulong)plVar12 >> 0x20) *
                -0x622015f714c7d297;
        uVar16 = NEON_uaddlv(uVar17,1);
        uVar7 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
        uVar6 = ((ulong)plVar12 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
        uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
        if (uVar7 < 2) {
          uVar8 = uVar6 & uVar5 - 1;
        }
        else {
          uVar8 = uVar6;
          if (uVar5 <= uVar6) {
            uVar8 = 0;
            if (uVar5 != 0) {
              uVar8 = uVar6 / uVar5;
            }
            uVar8 = uVar6 - uVar8 * uVar5;
          }
        }
        plVar13 = *(long **)(*(long *)(this + 0x18) + uVar8 * 8);
        if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
          do {
            uVar9 = plVar13[1];
            if (uVar9 == uVar6) {
              if ((long *)plVar13[2] == plVar12) {
                FUN_004ecd38(this + 0x18);
                plVar12 = (long *)*plVar11;
                break;
              }
            }
            else {
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
              if (uVar9 != uVar8) break;
            }
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
      }
      if (plVar12 == (long *)0x0) {
        local_78 = (long *)0x0;
        ViewModelInstanceList::removeItem(pVVar10,&local_78);
      }
      else {
        FUN_00340fb0(1,(long)plVar12 + 0x14);
        local_78 = plVar12;
        ViewModelInstanceList::removeItem(pVVar10,&local_78);
        iVar4 = FUN_00340fe0(0xffffffff,(long)plVar12 + 0x14);
        if (iVar4 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12);
        }
      }
      plVar13 = local_70;
    }
    plVar12 = local_68;
    if (plVar13 != (long *)0x0) {
      while (plVar12 != plVar13) {
        plVar12 = plVar12 + -1;
        plVar11 = (long *)*plVar12;
        if ((plVar11 != (long *)0x0) &&
           (iVar4 = FUN_00340fe0(0xffffffff,(long)plVar11 + 0x14), iVar4 == 1)) {
          (**(code **)(*plVar11 + 8))(plVar11);
        }
      }
      if (*(long *)(lVar2 + 0x28) == local_58) {
        operator_delete(local_70);
        return;
      }
      goto LAB_004ecd34;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_004ecd34:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ecd38  FUN_004ecd38 =====

void FUN_004ecd38(long *param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ViewModelInstanceRuntime *this;
  long *plVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  uVar5 = param_1[1];
  uVar3 = param_2[1];
  uVar12 = NEON_cnt(uVar5,1);
  uVar11 = NEON_uaddlv(uVar12,1);
  uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
  if (uVar6 < 2) {
    uVar3 = uVar5 - 1 & uVar3;
  }
  else if (uVar5 <= uVar3) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar3 / uVar5;
    }
    uVar3 = uVar3 - uVar9 * uVar5;
  }
  plVar10 = *(long **)(*param_1 + uVar3 * 8);
  do {
    plVar8 = plVar10;
    plVar10 = (long *)*plVar8;
  } while ((long *)*plVar8 != param_2);
  if (plVar8 != param_1 + 2) {
    uVar9 = plVar8[1];
    if (uVar6 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_004ece14;
  }
  if (*param_2 != 0) {
    uVar9 = *(ulong *)(*param_2 + 8);
    if (uVar6 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_004ece14;
  }
  *(undefined8 *)(*param_1 + uVar3 * 8) = 0;
LAB_004ece14:
  lVar7 = *param_2;
  if (lVar7 != 0) {
    uVar9 = *(ulong *)(lVar7 + 8);
    if (uVar6 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar6 * uVar5;
    }
    if (uVar9 != uVar3) {
      *(long **)(*param_1 + uVar9 * 8) = plVar8;
      lVar7 = *param_2;
    }
  }
  lVar4 = param_1[3];
  this = (ViewModelInstanceRuntime *)param_2[3];
  *plVar8 = lVar7;
  *param_2 = 0;
  param_1[3] = lVar4 + -1;
  if ((this != (ViewModelInstanceRuntime *)0x0) &&
     (iVar2 = FUN_00340fe0(0xffffffff,this), iVar2 == 1)) {
    rive::ViewModelInstanceRuntime::~ViewModelInstanceRuntime(this);
    operator_delete(this);
  }
  plVar10 = (long *)param_2[2];
  if ((plVar10 != (long *)0x0) &&
     (iVar2 = FUN_00340fe0(0xffffffff,(long)plVar10 + 0x14), iVar2 == 1)) {
    (**(code **)(*plVar10 + 8))(plVar10);
  }
  operator_delete(param_2);
  return;
}


// ===== 004eced4  rive::ViewModelInstanceListRuntime::removeInstanceAt =====

/* rive::ViewModelInstanceListRuntime::removeInstanceAt(int) */

void __thiscall
rive::ViewModelInstanceListRuntime::removeInstanceAt(ViewModelInstanceListRuntime *this,int param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ViewModelInstanceList *pVVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (-1 < param_1) {
    pVVar11 = *(ViewModelInstanceList **)(this + 8);
    if ((ulong)(uint)param_1 < (ulong)(*(long *)(pVVar11 + 0x128) - *(long *)(pVVar11 + 0x120) >> 3)
       ) {
      plVar10 = *(long **)(*(long *)(pVVar11 + 0x120) + (ulong)(uint)param_1 * 8);
      if (plVar10 == (long *)0x0) {
        local_40 = (long *)0x0;
        ViewModelInstanceList::removeItem(pVVar11,&local_40);
        uVar4 = *(ulong *)(this + 0x20);
      }
      else {
        FUN_00340fb0(1,(long)plVar10 + 0x14);
        FUN_00340fb0(1,(long)plVar10 + 0x14);
        local_40 = plVar10;
        ViewModelInstanceList::removeItem(pVVar11,&local_40);
        iVar3 = FUN_00340fe0(0xffffffff,(long)plVar10 + 0x14);
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10);
        }
        uVar4 = *(ulong *)(this + 0x20);
      }
      if (uVar4 != 0) {
        uVar5 = ((ulong)(uint)((int)plVar10 << 3) + 8 ^ (ulong)plVar10 >> 0x20) *
                -0x622015f714c7d297;
        uVar13 = NEON_cnt(uVar4,1);
        uVar12 = NEON_uaddlv(uVar13,1);
        uVar5 = ((ulong)plVar10 >> 0x20 ^ uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
        uVar6 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
        uVar5 = (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
        if (uVar6 < 2) {
          uVar7 = uVar4 - 1 & uVar5;
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
        plVar8 = *(long **)(*(long *)(this + 0x18) + uVar7 * 8);
        if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
          do {
            uVar9 = plVar8[1];
            if (uVar9 == uVar5) {
              if ((long *)plVar8[2] == plVar10) {
                FUN_004ecd38(this + 0x18);
                break;
              }
            }
            else {
              if (uVar6 < 2) {
                uVar9 = uVar9 & uVar4 - 1;
              }
              else if (uVar4 <= uVar9) {
                uVar1 = 0;
                if (uVar4 != 0) {
                  uVar1 = uVar9 / uVar4;
                }
                uVar9 = uVar9 - uVar1 * uVar4;
              }
              if (uVar9 != uVar7) break;
            }
            plVar8 = (long *)*plVar8;
          } while (plVar8 != (long *)0x0);
        }
      }
      if ((plVar10 != (long *)0x0) &&
         (iVar3 = FUN_00340fe0(0xffffffff,(long)plVar10 + 0x14), iVar3 == 1)) {
        if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Could not recover jumptable at 0x004ed0b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar10 + 8))(plVar10);
          return;
        }
        goto LAB_004ed0dc;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004ed0dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ed0e0  rive::ViewModelInstanceListRuntime::swap =====

/* rive::ViewModelInstanceListRuntime::swap(unsigned int, unsigned int) */

void __thiscall
rive::ViewModelInstanceListRuntime::swap
          (ViewModelInstanceListRuntime *this,uint param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ViewModelInstanceValue *this_00;
  undefined8 *puVar7;
  
  this_00 = *(ViewModelInstanceValue **)(this + 8);
  lVar1 = *(long *)(this_00 + 0x120);
  uVar5 = *(long *)(this_00 + 0x128) - lVar1 >> 3;
  if (param_1 < uVar5 && param_2 < uVar5) {
    lVar4 = (ulong)param_2 * 8;
    lVar3 = (ulong)param_1 * 8;
    uVar6 = *(undefined8 *)(lVar1 + lVar3);
    *(undefined8 *)(lVar1 + lVar3) = *(undefined8 *)(lVar1 + lVar4);
    *(undefined8 *)(lVar1 + lVar4) = uVar6;
    puVar2 = *(undefined8 **)(this_00 + 0xf0);
    for (puVar7 = *(undefined8 **)(this_00 + 0xe8); puVar7 != puVar2; puVar7 = puVar7 + 1) {
      (*(code *)**(undefined8 **)*puVar7)((undefined8 *)*puVar7,0x1000,1);
    }
    ViewModelInstanceValue::onValueChanged(this_00);
    return;
  }
  return;
}


// ===== 004ed17c  rive::ViewModelInstanceListRuntime::removeAllInstances =====

/* rive::ViewModelInstanceListRuntime::removeAllInstances() */

void __thiscall
rive::ViewModelInstanceListRuntime::removeAllInstances(ViewModelInstanceListRuntime *this)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ViewModelInstanceRuntime *this_00;
  long *plVar5;
  void *pvVar6;
  
  ViewModelInstanceList::removeAllItems(*(ViewModelInstanceList **)(this + 8));
  if (*(long *)(this + 0x30) != 0) {
    puVar1 = (undefined8 *)*(void **)(this + 0x28);
    while (puVar1 != (undefined8 *)0x0) {
      this_00 = (ViewModelInstanceRuntime *)puVar1[3];
      pvVar6 = (void *)*puVar1;
      if ((this_00 != (ViewModelInstanceRuntime *)0x0) &&
         (iVar2 = FUN_00340fe0(0xffffffff,this_00), iVar2 == 1)) {
        ViewModelInstanceRuntime::~ViewModelInstanceRuntime(this_00);
        operator_delete(this_00);
      }
      plVar5 = (long *)puVar1[2];
      if ((plVar5 != (long *)0x0) &&
         (iVar2 = FUN_00340fe0(0xffffffff,(long)plVar5 + 0x14), iVar2 == 1)) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      operator_delete(puVar1);
      puVar1 = (undefined8 *)pvVar6;
    }
    lVar3 = *(long *)(this + 0x20);
    *(undefined8 *)(this + 0x28) = 0;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x18) + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined8 *)(this + 0x30) = 0;
  }
  return;
}


// ===== 004ed250  rive::ViewModelInstanceListRuntime::size =====

/* rive::ViewModelInstanceListRuntime::size() const */

long __thiscall rive::ViewModelInstanceListRuntime::size(ViewModelInstanceListRuntime *this)

{
  return *(long *)(*(long *)(this + 8) + 0x128) - *(long *)(*(long *)(this + 8) + 0x120) >> 3;
}


// ===== 004ed264  rive::ViewModelInstanceNumberRuntime::value =====

/* rive::ViewModelInstanceNumberRuntime::value() const */

undefined4 __thiscall
rive::ViewModelInstanceNumberRuntime::value(ViewModelInstanceNumberRuntime *this)

{
  return *(undefined4 *)(*(long *)(this + 8) + 0x110);
}


// ===== 004ed270  rive::ViewModelInstanceNumberRuntime::value =====

/* rive::ViewModelInstanceNumberRuntime::value(float) */

void __thiscall
rive::ViewModelInstanceNumberRuntime::value(ViewModelInstanceNumberRuntime *this,float param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 8);
  if (*(float *)(plVar1 + 0x22) == param_1) {
    return;
  }
  *(float *)(plVar1 + 0x22) = param_1;
                    /* WARNING: Could not recover jumptable at 0x004ed290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xa8))();
  return;
}


// ===== 004ed294  rive::ViewModelInstanceRuntime::ViewModelInstanceRuntime =====

/* rive::ViewModelInstanceRuntime::ViewModelInstanceRuntime(rive::rcp<rive::ViewModelInstance>) */

void __thiscall
rive::ViewModelInstanceRuntime::ViewModelInstanceRuntime
          (ViewModelInstanceRuntime *this,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *(undefined4 *)this = 1;
  if (lVar1 != 0) {
    FUN_00340fb0(1,lVar1 + 0xa4);
  }
  *(long *)(this + 8) = lVar1;
  *(undefined4 *)(this + 0x30) = 0x3f800000;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x58) = 0x3f800000;
  return;
}


// ===== 004ed2ec  rive::ViewModelInstanceRuntime::~ViewModelInstanceRuntime =====

/* rive::ViewModelInstanceRuntime::~ViewModelInstanceRuntime() */

void __thiscall
rive::ViewModelInstanceRuntime::~ViewModelInstanceRuntime(ViewModelInstanceRuntime *this)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  ViewModelInstanceRuntime *this_00;
  
  for (plVar4 = *(long **)(this + 0x20); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    if ((long *)plVar4[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar4[5] + 0x18))();
    }
  }
  puVar1 = (undefined8 *)*(void **)(this + 0x48);
  while (puVar1 != (undefined8 *)0x0) {
    this_00 = (ViewModelInstanceRuntime *)puVar1[5];
    pvVar3 = (void *)*puVar1;
    if ((this_00 != (ViewModelInstanceRuntime *)0x0) &&
       (iVar2 = FUN_00340fe0(0xffffffff,this_00), iVar2 == 1)) {
      ~ViewModelInstanceRuntime(this_00);
      operator_delete(this_00);
    }
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar3;
  }
  pvVar3 = *(void **)(this + 0x38);
  *(undefined8 *)(this + 0x38) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  puVar1 = (undefined8 *)*(void **)(this + 0x20);
  while (puVar1 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar3;
  }
  pvVar3 = *(void **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  plVar4 = *(long **)(this + 8);
  if ((plVar4 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,(long)plVar4 + 0xa4), iVar2 == 1))
  {
                    /* WARNING: Could not recover jumptable at 0x004ed36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 8))(plVar4);
    return;
  }
  return;
}


// ===== 004ed41c  rive::ViewModelInstanceRuntime::name =====

/* rive::ViewModelInstanceRuntime::name() const */

long __thiscall rive::ViewModelInstanceRuntime::name(ViewModelInstanceRuntime *this)

{
  return *(long *)(this + 8) + 0x10;
}


// ===== 004ed428  rive::ViewModelInstanceRuntime::viewModelName =====

/* rive::ViewModelInstanceRuntime::viewModelName() const */

long __thiscall rive::ViewModelInstanceRuntime::viewModelName(ViewModelInstanceRuntime *this)

{
  return *(long *)(*(long *)(this + 8) + 0x118) + 0x10;
}


// ===== 004ed438  rive::ViewModelInstanceRuntime::propertyCount =====

/* rive::ViewModelInstanceRuntime::propertyCount() const */

long __thiscall rive::ViewModelInstanceRuntime::propertyCount(ViewModelInstanceRuntime *this)

{
  return *(long *)(*(long *)(this + 8) + 0xb0) - *(long *)(*(long *)(this + 8) + 0xa8) >> 3;
}


// ===== 004ed44c  rive::ViewModelInstanceRuntime::viewModelInstanceAtPath =====

/* rive::ViewModelInstanceRuntime::viewModelInstanceAtPath(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

ViewModelInstanceRuntime * __thiscall
rive::ViewModelInstanceRuntime::viewModelInstanceAtPath
          (ViewModelInstanceRuntime *this,basic_string *param_1)

{
  ulong uVar1;
  ulong uVar2;
  basic_string *pbVar3;
  basic_string bVar4;
  long lVar5;
  basic_string *__src;
  int iVar6;
  basic_string *pbVar7;
  ViewModelInstanceRuntime *pVVar8;
  ulong uVar9;
  undefined1 *puVar10;
  void *pvVar11;
  ViewModelInstanceRuntime *local_a0;
  ulong local_98;
  ulong local_90;
  void *local_88;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  bVar4 = *param_1;
  uVar2 = *(ulong *)(param_1 + 8);
  pbVar3 = *(basic_string **)(param_1 + 0x10);
  uVar1 = uVar2;
  __src = pbVar3;
  if (((byte)bVar4 & 1) == 0) {
    uVar1 = (ulong)((byte)bVar4 >> 1);
    __src = param_1 + 1;
  }
  if (0 < (long)uVar1) {
    pbVar7 = __src;
    uVar9 = uVar1;
    while (pbVar7 = (basic_string *)memchr(pbVar7,0x2f,uVar9), pbVar7 != (basic_string *)0x0) {
      if (*pbVar7 == (basic_string)0x2f) {
        if ((pbVar7 != __src + uVar1) &&
           (uVar9 = (long)pbVar7 - (long)__src, uVar9 != 0xffffffffffffffff)) {
          if (uVar9 <= uVar1) {
            uVar1 = uVar9;
          }
          if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_0031faf0(&local_80);
          }
          if (uVar1 < 0x17) {
            pvVar11 = (void *)((ulong)&local_80 | 1);
            local_80 = CONCAT71(local_80._1_7_,(char)((int)uVar1 << 1));
            if (pbVar7 != __src) goto LAB_004ed660;
          }
          else {
            pvVar11 = operator_new((uVar1 | 0xf) + 1);
            local_80 = (uVar1 | 0xf) + 2;
            uStack_78 = uVar1;
            local_70 = pvVar11;
LAB_004ed660:
            memmove(pvVar11,__src,uVar1);
          }
          *(undefined1 *)((long)pvVar11 + uVar1) = 0;
          bVar4 = *param_1;
          uVar1 = (ulong)((byte)bVar4 >> 1);
          if (((byte)bVar4 & 1) != 0) {
            uVar1 = *(ulong *)(param_1 + 8);
          }
          if (uVar1 <= uVar9) {
            FUN_00366174();
LAB_004ed71c:
                    /* WARNING: Subroutine does not return */
            FUN_0031faf0(&local_98);
          }
          uVar9 = uVar9 + 1;
          pbVar3 = param_1 + 1;
          if (((byte)bVar4 & 1) != 0) {
            pbVar3 = *(basic_string **)(param_1 + 0x10);
          }
          uVar2 = uVar1 - uVar9;
          if (uVar1 <= uVar1 - uVar9) {
            uVar2 = uVar1;
          }
          if (0xffffffffffffffef < uVar2) goto LAB_004ed71c;
          if (uVar2 < 0x17) {
            pvVar11 = (void *)((ulong)&local_98 | 1);
            local_98 = CONCAT71(local_98._1_7_,(char)((int)uVar2 << 1));
            if (uVar1 != uVar9) goto LAB_004ed6f4;
          }
          else {
            pvVar11 = operator_new((uVar2 | 0xf) + 1);
            local_98 = (uVar2 | 0xf) + 2;
            local_90 = uVar2;
            local_88 = pvVar11;
LAB_004ed6f4:
            memmove(pvVar11,pbVar3 + uVar9,uVar2);
          }
          puVar10 = (undefined1 *)((long)pvVar11 + uVar2);
          goto LAB_004ed558;
        }
        break;
      }
      pbVar7 = pbVar7 + 1;
      uVar9 = (long)(__src + uVar1) - (long)pbVar7;
      if ((long)uVar9 < 1) break;
    }
  }
  if (((byte)bVar4 & 1) == 0) {
    uStack_78 = *(ulong *)(param_1 + 8);
    local_80 = *(ulong *)param_1;
    local_70 = *(void **)(param_1 + 0x10);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_80,(char *)pbVar3,uVar2);
  }
  local_98 = local_98 & 0xffffffffffffff00;
  puVar10 = (undefined1 *)((ulong)&local_98 | 1);
LAB_004ed558:
  *puVar10 = 0;
  uVar1 = local_80 >> 1 & 0x7f;
  if ((local_80 & 1) != 0) {
    uVar1 = uStack_78;
  }
  if (uVar1 == 0) {
    pVVar8 = (ViewModelInstanceRuntime *)0x0;
  }
  else {
    instanceRuntime((basic_string *)this);
    pVVar8 = local_a0;
    if (local_a0 != (ViewModelInstanceRuntime *)0x0) {
      uVar1 = local_98 >> 1 & 0x7f;
      if ((local_98 & 1) != 0) {
        uVar1 = local_90;
      }
      if (((uVar1 == 0) ||
          (pVVar8 = (ViewModelInstanceRuntime *)
                    viewModelInstanceAtPath(local_a0,(basic_string *)&local_98),
          local_a0 != (ViewModelInstanceRuntime *)0x0)) &&
         (iVar6 = FUN_00340fe0(0xffffffff,local_a0), iVar6 == 1)) {
        ~ViewModelInstanceRuntime(local_a0);
        operator_delete(local_a0);
      }
    }
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return pVVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ed724  rive::ViewModelInstanceRuntime::instanceRuntime =====

/* rive::ViewModelInstanceRuntime::instanceRuntime(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

void rive::ViewModelInstanceRuntime::instanceRuntime(basic_string *param_1)

{
  long *plVar1;
  size_t sVar2;
  size_t sVar3;
  basic_string *__s2;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ViewModelInstanceRuntime *pVVar9;
  basic_string *in_x1;
  long *in_x8;
  long *plVar10;
  ulong uVar11;
  basic_string *pbVar12;
  basic_string *pbVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined2 uVar18;
  undefined8 uVar19;
  long *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  sVar3 = *(size_t *)(in_x1 + 8);
  __s2 = *(basic_string **)(in_x1 + 0x10);
  if (((byte)*in_x1 & 1) == 0) {
    __s2 = in_x1 + 1;
    sVar3 = (ulong)((byte)*in_x1 >> 1);
  }
  uVar8 = FUN_00399758(__s2,sVar3);
  uVar16 = *(ulong *)(param_1 + 0x40);
  if (uVar16 != 0) {
    uVar19 = NEON_cnt(uVar16,1);
    uVar18 = NEON_uaddlv(uVar19,1);
    uVar17 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
    if (uVar17 < 2) {
      uVar14 = uVar16 - 1 & uVar8;
    }
    else {
      uVar14 = uVar8;
      if (uVar16 <= uVar8) {
        uVar14 = 0;
        if (uVar16 != 0) {
          uVar14 = uVar8 / uVar16;
        }
        uVar14 = uVar8 - uVar14 * uVar16;
      }
    }
    plVar10 = *(long **)(*(long *)(param_1 + 0x38) + uVar14 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      do {
        uVar11 = plVar10[1];
        if (uVar11 == uVar8) {
          bVar4 = *(byte *)(plVar10 + 2);
          uVar11 = (ulong)(bVar4 >> 1);
          sVar2 = uVar11;
          if ((bVar4 & 1) != 0) {
            sVar2 = plVar10[3];
          }
          if (sVar2 == sVar3) {
            if ((bVar4 & 1) == 0) {
              if (bVar4 < 2) {
LAB_004ed8a4:
                lVar15 = plVar10[5];
                if (lVar15 != 0) {
                  FUN_00340fb0(1,lVar15);
                }
                *in_x8 = lVar15;
                goto LAB_004ed9e0;
              }
              pbVar12 = (basic_string *)((long)plVar10 + 0x11);
              pbVar13 = __s2;
              while (*pbVar12 == *pbVar13) {
                uVar11 = uVar11 - 1;
                pbVar12 = pbVar12 + 1;
                pbVar13 = pbVar13 + 1;
                if (uVar11 == 0) goto LAB_004ed8a4;
              }
            }
            else {
              iVar7 = memcmp((void *)plVar10[4],__s2,plVar10[3]);
              if (iVar7 == 0) goto LAB_004ed8a4;
            }
          }
        }
        else {
          if (uVar17 < 2) {
            uVar11 = uVar11 & uVar16 - 1;
          }
          else if (uVar16 <= uVar11) {
            uVar5 = 0;
            if (uVar16 != 0) {
              uVar5 = uVar11 / uVar16;
            }
            uVar11 = uVar11 - uVar5 * uVar16;
          }
          if (uVar11 != uVar14) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  plVar10 = (long *)ViewModelInstance::propertyValue(*(ViewModelInstance **)(param_1 + 8),in_x1);
  if (((plVar10 == (long *)0x0) ||
      (uVar8 = (**(code **)(*plVar10 + 0x18))(plVar10,0x1bc), (uVar8 & 1) == 0)) ||
     (plVar10 = (long *)plVar10[0x24], plVar10 == (long *)0x0)) {
    *in_x8 = 0;
  }
  else {
    FUN_00340fb0(1,(long)plVar10 + 0xa4);
    pVVar9 = (ViewModelInstanceRuntime *)operator_new(0x60);
    FUN_00340fb0(1,(long)plVar10 + 0xa4);
    local_70 = plVar10;
    ViewModelInstanceRuntime(pVVar9,&local_70);
    plVar1 = local_70;
    *in_x8 = (long)pVVar9;
    if ((local_70 != (long *)0x0) &&
       (iVar7 = FUN_00340fe0(0xffffffff,(long)local_70 + 0xa4), iVar7 == 1)) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    lVar15 = FUN_004eda14(param_1 + 0x38);
    plVar1 = (long *)(lVar15 + 0x28);
    if (plVar1 != in_x8) {
      lVar15 = *in_x8;
      if (lVar15 != 0) {
        FUN_00340fb0(1,lVar15);
      }
      pVVar9 = (ViewModelInstanceRuntime *)*plVar1;
      *plVar1 = lVar15;
      if ((pVVar9 != (ViewModelInstanceRuntime *)0x0) &&
         (iVar7 = FUN_00340fe0(0xffffffff,pVVar9), iVar7 == 1)) {
        ~ViewModelInstanceRuntime(pVVar9);
        operator_delete(pVVar9);
      }
    }
    iVar7 = FUN_00340fe0(0xffffffff,(long)plVar10 + 0xa4);
    if (iVar7 == 1) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
  }
LAB_004ed9e0:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004eda14  FUN_004eda14 =====

long * FUN_004eda14(long *param_1,byte *param_2,byte *param_3)

{
  size_t sVar1;
  size_t sVar2;
  byte *__s2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  void *pvVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  void *pvVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  ulong unaff_x26;
  undefined2 uVar19;
  undefined8 uVar20;
  float fVar21;
  
  sVar2 = *(size_t *)(param_2 + 8);
  __s2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    __s2 = param_2 + 1;
    sVar2 = (ulong)(*param_2 >> 1);
  }
  uVar6 = FUN_00399758(__s2,sVar2);
  uVar18 = param_1[1];
  if (uVar18 != 0) {
    uVar20 = NEON_cnt(uVar18,1);
    uVar19 = NEON_uaddlv(uVar20,1);
    uVar13 = CONCAT62((int6)((ulong)uVar20 >> 0x10),uVar19) & 0xffffffff;
    if (uVar13 < 2) {
      unaff_x26 = uVar18 - 1 & uVar6;
    }
    else {
      unaff_x26 = uVar6;
      if (uVar18 <= uVar6) {
        uVar9 = 0;
        if (uVar18 != 0) {
          uVar9 = uVar6 / uVar18;
        }
        unaff_x26 = uVar6 - uVar9 * uVar18;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x26 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == uVar6) {
          bVar3 = *(byte *)(plVar8 + 2);
          sVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            sVar1 = plVar8[3];
          }
          if (sVar1 == sVar2) {
            if ((bVar3 & 1) == 0) {
              if (bVar3 < 2) {
                return plVar8;
              }
              uVar9 = 0;
              while (*(byte *)((long)plVar8 + uVar9 + 0x11) == __s2[uVar9]) {
                uVar9 = uVar9 + 1;
                if (bVar3 >> 1 == uVar9) {
                  return plVar8;
                }
              }
            }
            else {
              iVar5 = memcmp((void *)plVar8[4],__s2,plVar8[3]);
              if (iVar5 == 0) {
                return plVar8;
              }
            }
          }
        }
        else {
          if (uVar13 < 2) {
            uVar9 = uVar9 & uVar18 - 1;
          }
          else if (uVar18 <= uVar9) {
            uVar12 = 0;
            if (uVar18 != 0) {
              uVar12 = uVar9 / uVar18;
            }
            uVar9 = uVar9 - uVar12 * uVar18;
          }
          if (uVar9 != unaff_x26) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  plVar8 = (long *)operator_new(0x30);
  bVar3 = *param_3;
  *plVar8 = 0;
  plVar8[1] = uVar6;
  if ((bVar3 & 1) == 0) {
    lVar15 = *(long *)param_3;
    lVar10 = *(long *)(param_3 + 0x10);
    plVar8[3] = *(long *)(param_3 + 8);
    plVar8[2] = lVar15;
    plVar8[4] = lVar10;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (plVar8 + 2),*(char **)(param_3 + 0x10),*(ulong *)(param_3 + 8));
  }
  lVar10 = param_1[3];
  fVar21 = *(float *)(param_1 + 4);
  plVar8[5] = 0;
  if ((uVar18 == 0) || (fVar21 * (float)uVar18 < (float)(lVar10 + 1))) {
    if (uVar18 < 3) {
      uVar13 = 1;
    }
    else {
      uVar13 = (ulong)((uVar18 & uVar18 - 1) != 0);
    }
    uVar13 = uVar13 | uVar18 << 1;
    uVar18 = (ulong)((float)(lVar10 + 1) / fVar21);
    if (uVar13 <= uVar18) {
      uVar13 = uVar18;
    }
    if (uVar13 - 1 == 0) {
      uVar13 = 2;
    }
    else if ((uVar13 & uVar13 - 1) != 0) {
      uVar13 = std::__ndk1::__next_prime(uVar13);
    }
    uVar18 = param_1[1];
    if (uVar18 < uVar13) {
LAB_004edc24:
      if (uVar13 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      pvVar7 = operator_new(uVar13 << 3);
      pvVar11 = (void *)*param_1;
      *param_1 = (long)pvVar7;
      if (pvVar11 != (void *)0x0) {
        operator_delete(pvVar11);
      }
      uVar18 = 0;
      param_1[1] = uVar13;
      do {
        *(undefined8 *)(*param_1 + uVar18 * 8) = 0;
        uVar18 = uVar18 + 1;
      } while (uVar13 != uVar18);
      plVar14 = (long *)param_1[2];
      uVar18 = uVar13;
      if (plVar14 != (long *)0x0) {
        uVar9 = plVar14[1];
        uVar20 = NEON_cnt(uVar13,1);
        uVar19 = NEON_uaddlv(uVar20,1);
        uVar12 = CONCAT62((int6)((ulong)uVar20 >> 0x10),uVar19) & 0xffffffff;
        if (uVar12 < 2) {
          uVar9 = uVar9 & uVar13 - 1;
        }
        else if (uVar13 <= uVar9) {
          uVar17 = 0;
          if (uVar13 != 0) {
            uVar17 = uVar9 / uVar13;
          }
          uVar9 = uVar9 - uVar17 * uVar13;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar16 = (long *)*plVar14;
        if (plVar16 != (long *)0x0) {
          do {
            uVar17 = plVar16[1];
            if (uVar12 < 2) {
              uVar17 = uVar17 & uVar13 - 1;
            }
            else if (uVar13 <= uVar17) {
              uVar4 = 0;
              if (uVar13 != 0) {
                uVar4 = uVar17 / uVar13;
              }
              uVar17 = uVar17 - uVar4 * uVar13;
            }
            if (uVar17 != uVar9) {
              if (*(long *)(*param_1 + uVar17 * 8) == 0) {
                *(long **)(*param_1 + uVar17 * 8) = plVar14;
                uVar9 = uVar17;
              }
              else {
                *plVar14 = *plVar16;
                *plVar16 = **(long **)(*param_1 + uVar17 * 8);
                **(undefined8 **)(*param_1 + uVar17 * 8) = plVar16;
                plVar16 = plVar14;
              }
            }
            plVar14 = plVar16;
            plVar16 = (long *)*plVar14;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    else if (uVar13 < uVar18) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar18 < 3) {
LAB_004ede5c:
        uVar9 = std::__ndk1::__next_prime(uVar9);
      }
      else {
        uVar20 = NEON_cnt(uVar18,1);
        uVar19 = NEON_uaddlv(uVar20,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar20 >> 0x10),uVar19)) goto LAB_004ede5c;
        if (1 < uVar9) {
          uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
        }
      }
      if (uVar13 <= uVar9) {
        uVar13 = uVar9;
      }
      if (uVar13 < uVar18) {
        if (uVar13 != 0) goto LAB_004edc24;
        pvVar7 = (void *)*param_1;
        *param_1 = 0;
        if (pvVar7 != (void *)0x0) {
          operator_delete(pvVar7);
        }
        param_1[1] = 0;
        uVar18 = 0;
      }
      else {
        uVar18 = param_1[1];
      }
    }
    if ((uVar18 & uVar18 - 1) == 0) {
      unaff_x26 = uVar18 - 1 & uVar6;
    }
    else {
      unaff_x26 = uVar6;
      if (uVar18 <= uVar6) {
        uVar13 = 0;
        if (uVar18 != 0) {
          uVar13 = uVar6 / uVar18;
        }
        unaff_x26 = uVar6 - uVar13 * uVar18;
      }
    }
  }
  lVar10 = *param_1;
  plVar14 = *(long **)(lVar10 + unaff_x26 * 8);
  if (plVar14 == (long *)0x0) {
    plVar14 = param_1 + 2;
    lVar15 = *plVar14;
    *plVar14 = (long)plVar8;
    *plVar8 = lVar15;
    *(long **)(lVar10 + unaff_x26 * 8) = plVar14;
    if (*plVar8 == 0) goto LAB_004ede30;
    uVar6 = *(ulong *)(*plVar8 + 8);
    if ((uVar18 & uVar18 - 1) == 0) {
      uVar6 = uVar6 & uVar18 - 1;
    }
    else if (uVar18 <= uVar6) {
      uVar13 = 0;
      if (uVar18 != 0) {
        uVar13 = uVar6 / uVar18;
      }
      uVar6 = uVar6 - uVar13 * uVar18;
    }
    plVar14 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar8 = *plVar14;
  }
  *plVar14 = (long)plVar8;
LAB_004ede30:
  param_1[3] = param_1[3] + 1;
  return plVar8;
}


// ===== 004ede9c  rive::ViewModelInstanceRuntime::property =====

/* rive::ViewModelInstanceRuntime::property(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

ulong __thiscall
rive::ViewModelInstanceRuntime::property(ViewModelInstanceRuntime *this,basic_string *param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  ViewModelInstanceRuntime *this_00;
  void *__dest;
  ulong uVar7;
  vector *__src;
  char *__s2;
  ulong uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 auVar11 [16];
  void *local_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  void *local_a0;
  undefined4 *local_98;
  undefined4 *puStack_90;
  basic_string local_80 [8];
  ulong local_78;
  char *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar7 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8);
  }
  if (uVar7 == 0) {
    uVar7 = 0;
    goto LAB_004ee1d8;
  }
  getPropertyNameFromPath((basic_string *)this);
  auVar11 = viewModelInstanceFromFullPath(this,param_1);
  this_00 = auVar11._0_8_;
  if (this_00 == (ViewModelInstanceRuntime *)0x0) {
LAB_004ee1c4:
    uVar7 = 0;
  }
  else {
    local_b0 = 0;
    uStack_a8 = 0;
    local_b8 = (void *)0x0;
    __src = *(vector **)(*(long *)(*(long *)(this_00 + 8) + 0x118) + 0x30);
    uVar7 = *(long *)(*(long *)(*(long *)(this_00 + 8) + 0x118) + 0x38) - (long)__src;
    if (uVar7 == 0) {
      ViewModelRuntime::buildPropertiesData((ViewModelRuntime *)&local_b8,auVar11._8_8_);
    }
    else {
      if ((long)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_003d35f8();
      }
      __dest = operator_new(uVar7);
      local_b8 = __dest;
      uStack_a8 = (long)__dest + uVar7;
      memcpy(__dest,__src,uVar7);
      local_b0 = (long)__dest + uVar7;
      ViewModelRuntime::buildPropertiesData((ViewModelRuntime *)&local_b8,__src);
      operator_delete(__dest);
    }
    if (local_98 == puStack_90) {
      if (local_98 != (undefined4 *)0x0) {
        operator_delete(local_98);
      }
      goto LAB_004ee1c4;
    }
    puVar10 = local_98;
    do {
      local_b8 = (void *)CONCAT44(local_b8._4_4_,*puVar10);
      if ((*(ulong *)(puVar10 + 2) & 1) == 0) {
        local_b0 = *(ulong *)(puVar10 + 2);
        local_a0 = *(void **)(puVar10 + 6);
        uStack_a8 = *(size_t *)(puVar10 + 4);
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_b0,*(char **)(puVar10 + 6),*(ulong *)(puVar10 + 4));
      }
      uVar8 = (ulong)((byte)local_b0._0_1_ >> 1);
      uVar2 = uVar8;
      if ((local_b0 & 1) != 0) {
        uVar2 = uStack_a8;
      }
      uVar3 = (ulong)((byte)local_80[0] >> 1);
      if (((byte)local_80[0] & 1) != 0) {
        uVar3 = local_78;
      }
      if (uVar2 == uVar3) {
        __s2 = (char *)((ulong)local_80 | 1);
        if (((byte)local_80[0] & 1) != 0) {
          __s2 = local_70;
        }
        if ((local_b0 & 1) == 0) {
          pcVar9 = (char *)((long)&local_b0 + 1);
          if (1 < (byte)local_b0._0_1_) {
            do {
              if (*pcVar9 != *__s2) goto LAB_004ee05c;
              uVar8 = uVar8 - 1;
              __s2 = __s2 + 1;
              pcVar9 = pcVar9 + 1;
            } while (uVar8 != 0);
          }
        }
        else {
          iVar6 = memcmp(local_a0,__s2,uStack_a8);
          if (iVar6 != 0) goto LAB_004ee05c;
        }
        bVar5 = true;
        if ((int)local_b8 < 5) {
          if ((int)local_b8 < 3) {
            if ((int)local_b8 == 1) {
              uVar7 = propertyString(this_00,local_80);
            }
            else {
              if ((int)local_b8 != 2) goto LAB_004ee160;
              uVar7 = propertyNumber(this_00,local_80);
            }
          }
          else if ((int)local_b8 == 3) {
            uVar7 = propertyBoolean(this_00,local_80);
          }
          else {
            if ((int)local_b8 != 4) goto LAB_004ee160;
            uVar7 = propertyColor(this_00,local_80);
          }
        }
        else if ((int)local_b8 < 7) {
          if ((int)local_b8 == 5) {
            uVar7 = propertyList(this_00,local_80);
          }
          else {
            if ((int)local_b8 != 6) goto LAB_004ee160;
            uVar7 = propertyEnum(this_00,local_80);
          }
        }
        else if ((int)local_b8 == 7) {
          uVar7 = propertyTrigger(this_00,local_80);
        }
        else if ((int)local_b8 == 0xb) {
          uVar7 = propertyImage(this_00,local_80);
        }
        else {
          if ((int)local_b8 != 0xc) goto LAB_004ee160;
          uVar7 = propertyArtboard(this_00,local_80);
        }
        bVar5 = false;
      }
      else {
LAB_004ee05c:
        bVar5 = true;
      }
LAB_004ee160:
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      puVar10 = puVar10 + 8;
      bVar1 = false;
      if (puVar10 != puStack_90) {
        bVar1 = bVar5;
      }
    } while (bVar1);
    puVar10 = puStack_90;
    if (local_98 != (undefined4 *)0x0) {
      for (; local_98 != puVar10; puVar10 = puVar10 + -8) {
        if ((*(byte *)(puVar10 + -6) & 1) != 0) {
          operator_delete(*(void **)(puVar10 + -2));
        }
      }
      operator_delete(local_98);
    }
    if (bVar5) goto LAB_004ee1c4;
  }
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
LAB_004ee1d8:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ee214  rive::ViewModelInstanceRuntime::getPropertyNameFromPath =====

/* rive::ViewModelInstanceRuntime::getPropertyNameFromPath(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

basic_string * rive::ViewModelInstanceRuntime::getPropertyNameFromPath(basic_string *param_1)

{
  basic_string *pbVar1;
  ulong uVar2;
  byte bVar3;
  basic_string *pbVar4;
  basic_string *pbVar5;
  basic_string *pbVar6;
  basic_string *pbVar7;
  byte *in_x1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  undefined8 uVar8;
  ulong uVar9;
  basic_string *pbVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  ulong __n;
  undefined8 uVar11;
  
  bVar3 = *in_x1;
  uVar2 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar2 = *(ulong *)(in_x1 + 8);
  }
  if (uVar2 == 0) {
    *(undefined2 *)in_x8 = 0;
    return param_1;
  }
  pbVar6 = *(basic_string **)(in_x1 + 0x10);
  if ((bVar3 & 1) == 0) {
    pbVar6 = (basic_string *)(in_x1 + 1);
  }
  pbVar1 = pbVar6 + uVar2;
  pbVar4 = pbVar6;
  pbVar5 = pbVar1;
  do {
    while (pbVar7 = pbVar4, pbVar10 = pbVar7 + 1, *pbVar7 != (basic_string)0x2f) {
      pbVar7 = pbVar5;
      pbVar4 = pbVar10;
      if (pbVar10 == pbVar1) goto LAB_004ee294;
    }
    pbVar4 = pbVar7 + 1;
    pbVar5 = pbVar7;
  } while (pbVar10 != pbVar1);
LAB_004ee294:
  if ((pbVar7 == pbVar1) || (uVar9 = (long)pbVar7 - (long)pbVar6, uVar9 == 0xffffffffffffffff)) {
    if ((bVar3 & 1) == 0) {
      uVar11 = *(undefined8 *)in_x1;
      uVar8 = *(undefined8 *)(in_x1 + 0x10);
      *(undefined8 *)(in_x8 + 8) = *(undefined8 *)(in_x1 + 8);
      *(undefined8 *)in_x8 = uVar11;
      *(undefined8 *)(in_x8 + 0x10) = uVar8;
      return pbVar7;
    }
    pbVar6 = (basic_string *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
             __init_copy_ctor_external
                       (in_x8,(char *)*(basic_string **)(in_x1 + 0x10),*(ulong *)(in_x1 + 8));
    return pbVar6;
  }
  if (uVar2 <= uVar9) {
    FUN_00366174();
LAB_004ee360:
                    /* WARNING: Subroutine does not return */
    FUN_0031faf0();
  }
  uVar9 = uVar9 + 1;
  __n = uVar2 - uVar9;
  if (0xffffffffffffffef < __n) goto LAB_004ee360;
  if (__n < 0x17) {
    __dest = in_x8 + 1;
    *in_x8 = SUB41((int)__n << 1,0);
    if (uVar2 == uVar9) goto LAB_004ee344;
  }
  else {
    __dest = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             operator_new((__n | 0xf) + 1);
    *(ulong *)(in_x8 + 8) = __n;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (in_x8 + 0x10) = __dest;
    *(ulong *)in_x8 = (__n | 0xf) + 2;
  }
  pbVar7 = (basic_string *)memmove(__dest,pbVar6 + uVar9,__n);
LAB_004ee344:
  __dest[__n] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  return pbVar7;
}


// ===== 004ee368  rive::ViewModelInstanceRuntime::viewModelInstanceFromFullPath =====

/* rive::ViewModelInstanceRuntime::viewModelInstanceFromFullPath(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

void __thiscall
rive::ViewModelInstanceRuntime::viewModelInstanceFromFullPath
          (ViewModelInstanceRuntime *this,basic_string *param_1)

{
  basic_string *pbVar1;
  ulong __n;
  basic_string *__src;
  long lVar2;
  basic_string *pbVar3;
  basic_string *pbVar4;
  basic_string *pbVar5;
  ulong uVar6;
  basic_string *pbVar7;
  void *__dest;
  ulong local_60;
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __n = *(ulong *)(param_1 + 8);
  __src = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __src = param_1 + 1;
    __n = (ulong)((byte)*param_1 >> 1);
  }
  if (__n == 0) goto LAB_004ee490;
  pbVar1 = __src + __n;
  pbVar3 = __src;
  pbVar4 = pbVar1;
  do {
    while (pbVar5 = pbVar3, pbVar7 = pbVar5 + 1, *pbVar5 == (basic_string)0x2f) {
      pbVar3 = pbVar5 + 1;
      pbVar4 = pbVar5;
      if (pbVar7 == pbVar1) goto LAB_004ee3ec;
    }
    pbVar5 = pbVar4;
    pbVar3 = pbVar7;
  } while (pbVar7 != pbVar1);
LAB_004ee3ec:
  if ((pbVar5 == pbVar1) || (uVar6 = (long)pbVar5 - (long)__src, uVar6 == 0xffffffffffffffff))
  goto LAB_004ee490;
  if (uVar6 <= __n) {
    __n = uVar6;
  }
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0031faf0(&local_60);
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (pbVar5 != __src) goto LAB_004ee454;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    local_60 = (__n | 0xf) + 2;
    local_58 = __n;
    local_50 = __dest;
LAB_004ee454:
    memmove(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  this = (ViewModelInstanceRuntime *)viewModelInstanceAtPath(this,(basic_string *)&local_60);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_004ee490:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


// ===== 004ee4c4  rive::ViewModelInstanceRuntime::properties =====

/* rive::ViewModelInstanceRuntime::properties() const */

void rive::ViewModelInstanceRuntime::properties(void)

{
  ulong __n;
  long lVar1;
  long in_x0;
  void *__dest;
  vector *in_x1;
  vector *__src;
  long lVar2;
  void *local_60;
  long local_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = 0;
  local_50 = 0;
  local_60 = (void *)0x0;
  lVar2 = *(long *)(*(long *)(in_x0 + 8) + 0x118);
  __src = *(vector **)(lVar2 + 0x30);
  __n = *(long *)(lVar2 + 0x38) - (long)__src;
  if (__n == 0) {
    ViewModelRuntime::buildPropertiesData((ViewModelRuntime *)&local_60,in_x1);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003d35f8();
    }
    __dest = operator_new(__n);
    local_60 = __dest;
    local_50 = (long)__dest + __n;
    memcpy(__dest,__src,__n);
    local_58 = (long)__dest + __n;
    ViewModelRuntime::buildPropertiesData((ViewModelRuntime *)&local_60,__src);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      operator_delete(__dest);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ee5a4  rive::ViewModelInstanceRuntime::propertyString =====

/* rive::ViewModelInstanceRuntime::propertyString(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

ViewModelValueDependent * __thiscall
rive::ViewModelInstanceRuntime::propertyString(ViewModelInstanceRuntime *this,basic_string *param_1)

{
  long lVar1;
  undefined *puVar2;
  ViewModelValueDependent *pVVar3;
  long lVar4;
  ulong uVar5;
  ViewModelInstanceValue *this_00;
  long *plVar6;
  ViewModelValueDependent *pVVar7;
  ulong local_70;
  ulong uStack_68;
  char *local_60;
  byte local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  getPropertyNameFromPath((basic_string *)this);
  pVVar3 = (ViewModelValueDependent *)viewModelInstanceFromFullPath(this,param_1);
  if (pVVar3 == (ViewModelValueDependent *)0x0) goto LAB_004ee6fc;
  if ((local_50 & 1) == 0) {
    local_70 = (ulong)local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_70,local_40,uStack_48);
  }
  pVVar7 = pVVar3 + 0x10;
  lVar4 = FUN_004ef3ec(*(undefined8 *)pVVar7,*(undefined8 *)(pVVar3 + 0x18),&local_70);
  if (lVar4 == 0) {
    this_00 = (ViewModelInstanceValue *)
              ViewModelInstance::propertyValue
                        (*(ViewModelInstance **)(pVVar3 + 8),(basic_string *)&local_70);
    if ((this_00 == (ViewModelInstanceValue *)0x0) ||
       (uVar5 = (**(code **)(*(long *)this_00 + 0x18))(this_00,0x1b1), (uVar5 & 1) == 0))
    goto LAB_004ee6e8;
    pVVar3 = (ViewModelValueDependent *)operator_new(0x18);
    puVar2 = PTR_vtable_0067d7e8;
    pVVar3[0x10] = (ViewModelValueDependent)0x0;
    *(undefined **)pVVar3 = puVar2 + 0x10;
    *(ViewModelInstanceValue **)(pVVar3 + 8) = this_00;
    FUN_00340fb0(1,this_00 + 0x8c);
    ViewModelInstanceValue::addDependent(this_00,pVVar3);
    *(undefined ***)pVVar3 = &PTR_addDirt_00676a90;
    lVar4 = FUN_004ef554(pVVar7,&local_70,&local_70);
    *(ViewModelValueDependent **)(lVar4 + 0x28) = pVVar3;
joined_r0x004ee6e0:
    if (((byte)local_70._0_1_ & 1) == 0) goto LAB_004ee6fc;
  }
  else {
    plVar6 = *(long **)(*(long *)(lVar4 + 0x28) + 8);
    if (plVar6 == (long *)0x0) {
LAB_004ee6e8:
      pVVar3 = (ViewModelValueDependent *)0x0;
      goto joined_r0x004ee6e0;
    }
    uVar5 = (**(code **)(*plVar6 + 0x18))(plVar6,0x1b1);
    if ((uVar5 & 1) == 0) goto LAB_004ee6e8;
    pVVar3 = *(ViewModelValueDependent **)(lVar4 + 0x28);
    if ((local_70 & 1) == 0) goto LAB_004ee6fc;
  }
  operator_delete(local_60);
LAB_004ee6fc:
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return pVVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ee738  rive::ViewModelInstanceRuntime::propertyNumber =====

/* rive::ViewModelInstanceRuntime::propertyNumber(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

ViewModelValueDependent * __thiscall
rive::ViewModelInstanceRuntime::propertyNumber(ViewModelInstanceRuntime *this,basic_string *param_1)

{
  long lVar1;
  undefined *puVar2;
  ViewModelValueDependent *pVVar3;
  long lVar4;
  ulong uVar5;
  ViewModelInstanceValue *this_00;
  long *plVar6;
  ViewModelValueDependent *pVVar7;
  ulong local_70;
  ulong uStack_68;
  char *local_60;
  byte local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  getPropertyNameFromPath((basic_string *)this);
  pVVar3 = (ViewModelValueDependent *)viewModelInstanceFromFullPath(this,param_1);
  if (pVVar3 == (ViewModelValueDependent *)0x0) goto LAB_004ee890;
  if ((local_50 & 1) == 0) {
    local_70 = (ulong)local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_70,local_40,uStack_48);
  }
  pVVar7 = pVVar3 + 0x10;
  lVar4 = FUN_004ef3ec(*(undefined8 *)pVVar7,*(undefined8 *)(pVVar3 + 0x18),&local_70);
  if (lVar4 == 0) {
    this_00 = (ViewModelInstanceValue *)
              ViewModelInstance::propertyValue
                        (*(ViewModelInstance **)(pVVar3 + 8),(basic_string *)&local_70);
    if ((this_00 == (ViewModelInstanceValue *)0x0) ||
       (uVar5 = (**(code **)(*(long *)this_00 + 0x18))(this_00,0x1ba), (uVar5 & 1) == 0))
    goto LAB_004ee87c;
    pVVar3 = (ViewModelValueDependent *)operator_new(0x18);
    puVar2 = PTR_vtable_0067d7e8;
    pVVar3[0x10] = (ViewModelValueDependent)0x0;
    *(undefined **)pVVar3 = puVar2 + 0x10;
    *(ViewModelInstanceValue **)(pVVar3 + 8) = this_00;
    FUN_00340fb0(1,this_00 + 0x8c);
    ViewModelInstanceValue::addDependent(this_00,pVVar3);
    *(undefined ***)pVVar3 = &PTR_addDirt_00676a20;
    lVar4 = FUN_004ef554(pVVar7,&local_70,&local_70);
    *(ViewModelValueDependent **)(lVar4 + 0x28) = pVVar3;
joined_r0x004ee874:
    if (((byte)local_70._0_1_ & 1) == 0) goto LAB_004ee890;
  }
  else {
    plVar6 = *(long **)(*(long *)(lVar4 + 0x28) + 8);
    if (plVar6 == (long *)0x0) {
LAB_004ee87c:
      pVVar3 = (ViewModelValueDependent *)0x0;
      goto joined_r0x004ee874;
    }
    uVar5 = (**(code **)(*plVar6 + 0x18))(plVar6,0x1ba);
    if ((uVar5 & 1) == 0) goto LAB_004ee87c;
    pVVar3 = *(ViewModelValueDependent **)(lVar4 + 0x28);
    if ((local_70 & 1) == 0) goto LAB_004ee890;
  }
  operator_delete(local_60);
LAB_004ee890:
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return pVVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ee8cc  rive::ViewModelInstanceRuntime::propertyBoolean =====

/* rive::ViewModelInstanceRuntime::propertyBoolean(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

ViewModelValueDependent * __thiscall
rive::ViewModelInstanceRuntime::propertyBoolean
          (ViewModelInstanceRuntime *this,basic_string *param_1)

{
  long lVar1;
  undefined *puVar2;
  ViewModelValueDependent *pVVar3;
  long lVar4;
  ulong uVar5;
  ViewModelInstanceValue *this_00;
  long *plVar6;
  ViewModelValueDependent *pVVar7;
  ulong local_70;
  ulong uStack_68;
  char *local_60;
  byte local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  getPropertyNameFromPath((basic_string *)this);
  pVVar3 = (ViewModelValueDependent *)viewModelInstanceFromFullPath(this,param_1);
  if (pVVar3 == (ViewModelValueDependent *)0x0) goto LAB_004eea24;
  if ((local_50 & 1) == 0) {
    local_70 = (ulong)local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_70,local_40,uStack_48);
  }
  pVVar7 = pVVar3 + 0x10;
  lVar4 = FUN_004ef3ec(*(undefined8 *)pVVar7,*(undefined8 *)(pVVar3 + 0x18),&local_70);
  if (lVar4 == 0) {
    this_00 = (ViewModelInstanceValue *)
              ViewModelInstance::propertyValue
                        (*(ViewModelInstance **)(pVVar3 + 8),(basic_string *)&local_70);
    if ((this_00 == (ViewModelInstanceValue *)0x0) ||
       (uVar5 = (**(code **)(*(long *)this_00 + 0x18))(this_00,0x1c1), (uVar5 & 1) == 0))
    goto LAB_004eea10;
    pVVar3 = (ViewModelValueDependent *)operator_new(0x18);
    puVar2 = PTR_vtable_0067d7e8;
    pVVar3[0x10] = (ViewModelValueDependent)0x0;
    *(undefined **)pVVar3 = puVar2 + 0x10;
    *(ViewModelInstanceValue **)(pVVar3 + 8) = this_00;
    FUN_00340fb0(1,this_00 + 0x8c);
    ViewModelInstanceValue::addDependent(this_00,pVVar3);
    *(undefined ***)pVVar3 = &PTR_addDirt_00676a58;
    lVar4 = FUN_004ef554(pVVar7,&local_70,&local_70);
    *(ViewModelValueDependent **)(lVar4 + 0x28) = pVVar3;
joined_r0x004eea08:
    if (((byte)local_70._0_1_ & 1) == 0) goto LAB_004eea24;
  }
  else {
    plVar6 = *(long **)(*(long *)(lVar4 + 0x28) + 8);
    if (plVar6 == (long *)0x0) {
LAB_004eea10:
      pVVar3 = (ViewModelValueDependent *)0x0;
      goto joined_r0x004eea08;
    }
    uVar5 = (**(code **)(*plVar6 + 0x18))(plVar6,0x1c1);
    if ((uVar5 & 1) == 0) goto LAB_004eea10;
    pVVar3 = *(ViewModelValueDependent **)(lVar4 + 0x28);
    if ((local_70 & 1) == 0) goto LAB_004eea24;
  }
  operator_delete(local_60);
LAB_004eea24:
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return pVVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004eea60  rive::ViewModelInstanceRuntime::propertyColor =====

/* rive::ViewModelInstanceRuntime::propertyColor(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

ViewModelValueDependent * __thiscall
rive::ViewModelInstanceRuntime::propertyColor(ViewModelInstanceRuntime *this,basic_string *param_1)

{
  long lVar1;
  undefined *puVar2;
  ViewModelValueDependent *pVVar3;
  long lVar4;
  ulong uVar5;
  ViewModelInstanceValue *this_00;
  long *plVar6;
  ViewModelValueDependent *pVVar7;
  ulong local_70;
  ulong uStack_68;
  char *local_60;
  byte local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  getPropertyNameFromPath((basic_string *)this);
  pVVar3 = (ViewModelValueDependent *)viewModelInstanceFromFullPath(this,param_1);
  if (pVVar3 == (ViewModelValueDependent *)0x0) goto LAB_004eebb8;
  if ((local_50 & 1) == 0) {
    local_70 = (ulong)local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_70,local_40,uStack_48);
  }
  pVVar7 = pVVar3 + 0x10;
  lVar4 = FUN_004ef3ec(*(undefined8 *)pVVar7,*(undefined8 *)(pVVar3 + 0x18),&local_70);
  if (lVar4 == 0) {
    this_00 = (ViewModelInstanceValue *)
              ViewModelInstance::propertyValue
                        (*(ViewModelInstance **)(pVVar3 + 8),(basic_string *)&local_70);
    if ((this_00 == (ViewModelInstanceValue *)0x0) ||
       (uVar5 = (**(code **)(*(long *)this_00 + 0x18))(this_00,0x1aa), (uVar5 & 1) == 0))
    goto LAB_004eeba4;
    pVVar3 = (ViewModelValueDependent *)operator_new(0x18);
    puVar2 = PTR_vtable_0067d7e8;
    pVVar3[0x10] = (ViewModelValueDependent)0x0;
    *(undefined **)pVVar3 = puVar2 + 0x10;
    *(ViewModelInstanceValue **)(pVVar3 + 8) = this_00;
    FUN_00340fb0(1,this_00 + 0x8c);
    ViewModelInstanceValue::addDependent(this_00,pVVar3);
    *(undefined ***)pVVar3 = &PTR_addDirt_00676ac8;
    lVar4 = FUN_004ef554(pVVar7,&local_70,&local_70);
    *(ViewModelValueDependent **)(lVar4 + 0x28) = pVVar3;
joined_r0x004eeb9c:
    if (((byte)local_70._0_1_ & 1) == 0) goto LAB_004eebb8;
  }
  else {
    plVar6 = *(long **)(*(long *)(lVar4 + 0x28) + 8);
    if (plVar6 == (long *)0x0) {
LAB_004eeba4:
      pVVar3 = (ViewModelValueDependent *)0x0;
      goto joined_r0x004eeb9c;
    }
    uVar5 = (**(code **)(*plVar6 + 0x18))(plVar6,0x1aa);
    if ((uVar5 & 1) == 0) goto LAB_004eeba4;
    pVVar3 = *(ViewModelValueDependent **)(lVar4 + 0x28);
    if ((local_70 & 1) == 0) goto LAB_004eebb8;
  }
  operator_delete(local_60);
LAB_004eebb8:
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return pVVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004eebf4  rive::ViewModelInstanceRuntime::propertyImage =====

/* rive::ViewModelInstanceRuntime::propertyImage(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

ViewModelValueDependent * __thiscall
rive::ViewModelInstanceRuntime::propertyImage(ViewModelInstanceRuntime *this,basic_string *param_1)

{
  long lVar1;
  undefined *puVar2;
  ViewModelValueDependent *pVVar3;
  long lVar4;
  ulong uVar5;
  ViewModelInstanceValue *this_00;
  long *plVar6;
  ViewModelValueDependent *pVVar7;
  ulong local_70;
  ulong uStack_68;
  char *local_60;
  byte local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  getPropertyNameFromPath((basic_string *)this);
  pVVar3 = (ViewModelValueDependent *)viewModelInstanceFromFullPath(this,param_1);
  if (pVVar3 == (ViewModelValueDependent *)0x0) goto LAB_004eed4c;
  if ((local_50 & 1) == 0) {
    local_70 = (ulong)local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_70,local_40,uStack_48);
  }
  pVVar7 = pVVar3 + 0x10;
  lVar4 = FUN_004ef3ec(*(undefined8 *)pVVar7,*(undefined8 *)(pVVar3 + 0x18),&local_70);
  if (lVar4 == 0) {
    this_00 = (ViewModelInstanceValue *)
              ViewModelInstance::propertyValue
                        (*(ViewModelInstance **)(pVVar3 + 8),(basic_string *)&local_70);
    if ((this_00 == (ViewModelInstanceValue *)0x0) ||
       (uVar5 = (**(code **)(*(long *)this_00 + 0x18))(this_00,0x24b), (uVar5 & 1) == 0))
    goto LAB_004eed38;
    pVVar3 = (ViewModelValueDependent *)operator_new(0x18);
    puVar2 = PTR_vtable_0067d7e8;
    pVVar3[0x10] = (ViewModelValueDependent)0x0;
    *(undefined **)pVVar3 = puVar2 + 0x10;
    *(ViewModelInstanceValue **)(pVVar3 + 8) = this_00;
    FUN_00340fb0(1,this_00 + 0x8c);
    ViewModelInstanceValue::addDependent(this_00,pVVar3);
    *(undefined ***)pVVar3 = &PTR_addDirt_00676ba8;
    lVar4 = FUN_004ef554(pVVar7,&local_70,&local_70);
    *(ViewModelValueDependent **)(lVar4 + 0x28) = pVVar3;
joined_r0x004eed30:
    if (((byte)local_70._0_1_ & 1) == 0) goto LAB_004eed4c;
  }
  else {
    plVar6 = *(long **)(*(long *)(lVar4 + 0x28) + 8);
    if (plVar6 == (long *)0x0) {
LAB_004eed38:
      pVVar3 = (ViewModelValueDependent *)0x0;
      goto joined_r0x004eed30;
    }
    uVar5 = (**(code **)(*plVar6 + 0x18))(plVar6,0x24b);
    if ((uVar5 & 1) == 0) goto LAB_004eed38;
    pVVar3 = *(ViewModelValueDependent **)(lVar4 + 0x28);
    if ((local_70 & 1) == 0) goto LAB_004eed4c;
  }
  operator_delete(local_60);
LAB_004eed4c:
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return pVVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004eed88  rive::ViewModelInstanceRuntime::propertyArtboard =====

/* rive::ViewModelInstanceRuntime::propertyArtboard(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

ViewModelValueDependent * __thiscall
rive::ViewModelInstanceRuntime::propertyArtboard
          (ViewModelInstanceRuntime *this,basic_string *param_1)

{
  long lVar1;
  undefined *puVar2;
  ViewModelValueDependent *pVVar3;
  long lVar4;
  ulong uVar5;
  ViewModelInstanceValue *this_00;
  long *plVar6;
  ViewModelValueDependent *pVVar7;
  ulong local_70;
  ulong uStack_68;
  char *local_60;
  byte local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  getPropertyNameFromPath((basic_string *)this);
  pVVar3 = (ViewModelValueDependent *)viewModelInstanceFromFullPath(this,param_1);
  if (pVVar3 == (ViewModelValueDependent *)0x0) goto LAB_004eeee0;
  if ((local_50 & 1) == 0) {
    local_70 = (ulong)local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_70,local_40,uStack_48);
  }
  pVVar7 = pVVar3 + 0x10;
  lVar4 = FUN_004ef3ec(*(undefined8 *)pVVar7,*(undefined8 *)(pVVar3 + 0x18),&local_70);
  if (lVar4 == 0) {
    this_00 = (ViewModelInstanceValue *)
              ViewModelInstance::propertyValue
                        (*(ViewModelInstance **)(pVVar3 + 8),(basic_string *)&local_70);
    if ((this_00 == (ViewModelInstanceValue *)0x0) ||
       (uVar5 = (**(code **)(*(long *)this_00 + 0x18))(this_00,599), (uVar5 & 1) == 0))
    goto LAB_004eeecc;
    pVVar3 = (ViewModelValueDependent *)operator_new(0x18);
    puVar2 = PTR_vtable_0067d7e8;
    pVVar3[0x10] = (ViewModelValueDependent)0x0;
    *(undefined **)pVVar3 = puVar2 + 0x10;
    *(ViewModelInstanceValue **)(pVVar3 + 8) = this_00;
    FUN_00340fb0(1,this_00 + 0x8c);
    ViewModelInstanceValue::addDependent(this_00,pVVar3);
    *(undefined ***)pVVar3 = &PTR_addDirt_00676be0;
    lVar4 = FUN_004ef554(pVVar7,&local_70,&local_70);
    *(ViewModelValueDependent **)(lVar4 + 0x28) = pVVar3;
joined_r0x004eeec4:
    if (((byte)local_70._0_1_ & 1) == 0) goto LAB_004eeee0;
  }
  else {
    plVar6 = *(long **)(*(long *)(lVar4 + 0x28) + 8);
    if (plVar6 == (long *)0x0) {
LAB_004eeecc:
      pVVar3 = (ViewModelValueDependent *)0x0;
      goto joined_r0x004eeec4;
    }
    uVar5 = (**(code **)(*plVar6 + 0x18))(plVar6,599);
    if ((uVar5 & 1) == 0) goto LAB_004eeecc;
    pVVar3 = *(ViewModelValueDependent **)(lVar4 + 0x28);
    if ((local_70 & 1) == 0) goto LAB_004eeee0;
  }
  operator_delete(local_60);
LAB_004eeee0:
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return pVVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004eef1c  rive::ViewModelInstanceRuntime::propertyList =====

/* rive::ViewModelInstanceRuntime::propertyList(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

ViewModelValueDependent * __thiscall
rive::ViewModelInstanceRuntime::propertyList(ViewModelInstanceRuntime *this,basic_string *param_1)

{
  long lVar1;
  undefined *puVar2;
  ViewModelValueDependent *pVVar3;
  long lVar4;
  ulong uVar5;
  ViewModelInstanceValue *this_00;
  long *plVar6;
  ViewModelValueDependent *pVVar7;
  ulong local_70;
  ulong uStack_68;
  char *local_60;
  byte local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  getPropertyNameFromPath((basic_string *)this);
  pVVar3 = (ViewModelValueDependent *)viewModelInstanceFromFullPath(this,param_1);
  if (pVVar3 == (ViewModelValueDependent *)0x0) goto LAB_004ef088;
  if ((local_50 & 1) == 0) {
    local_70 = (ulong)local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_70,local_40,uStack_48);
  }
  pVVar7 = pVVar3 + 0x10;
  lVar4 = FUN_004ef3ec(*(undefined8 *)pVVar7,*(undefined8 *)(pVVar3 + 0x18),&local_70);
  if (lVar4 == 0) {
    this_00 = (ViewModelInstanceValue *)
              ViewModelInstance::propertyValue
                        (*(ViewModelInstance **)(pVVar3 + 8),(basic_string *)&local_70);
    if ((this_00 == (ViewModelInstanceValue *)0x0) ||
       (uVar5 = (**(code **)(*(long *)this_00 + 0x18))(this_00,0x1b9), (uVar5 & 1) == 0))
    goto LAB_004ef074;
    pVVar3 = (ViewModelValueDependent *)operator_new(0x40);
    puVar2 = PTR_vtable_0067d7e8;
    pVVar3[0x10] = (ViewModelValueDependent)0x0;
    *(undefined **)pVVar3 = puVar2 + 0x10;
    *(ViewModelInstanceValue **)(pVVar3 + 8) = this_00;
    FUN_00340fb0(1,this_00 + 0x8c);
    ViewModelInstanceValue::addDependent(this_00,pVVar3);
    *(undefined ***)pVVar3 = &PTR_addDirt_00676b70;
    *(undefined4 *)(pVVar3 + 0x38) = 0x3f800000;
    *(undefined8 *)(pVVar3 + 0x20) = 0;
    *(undefined8 *)(pVVar3 + 0x18) = 0;
    *(undefined8 *)(pVVar3 + 0x30) = 0;
    *(undefined8 *)(pVVar3 + 0x28) = 0;
    lVar4 = FUN_004ef554(pVVar7,&local_70,&local_70);
    *(ViewModelValueDependent **)(lVar4 + 0x28) = pVVar3;
joined_r0x004ef06c:
    if (((byte)local_70._0_1_ & 1) == 0) goto LAB_004ef088;
  }
  else {
    plVar6 = *(long **)(*(long *)(lVar4 + 0x28) + 8);
    if (plVar6 == (long *)0x0) {
LAB_004ef074:
      pVVar3 = (ViewModelValueDependent *)0x0;
      goto joined_r0x004ef06c;
    }
    uVar5 = (**(code **)(*plVar6 + 0x18))(plVar6,0x1b9);
    if ((uVar5 & 1) == 0) goto LAB_004ef074;
    pVVar3 = *(ViewModelValueDependent **)(lVar4 + 0x28);
    if ((local_70 & 1) == 0) goto LAB_004ef088;
  }
  operator_delete(local_60);
LAB_004ef088:
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return pVVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ef0c4  rive::ViewModelInstanceRuntime::propertyEnum =====

/* rive::ViewModelInstanceRuntime::propertyEnum(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

ViewModelValueDependent * __thiscall
rive::ViewModelInstanceRuntime::propertyEnum(ViewModelInstanceRuntime *this,basic_string *param_1)

{
  long lVar1;
  undefined *puVar2;
  ViewModelValueDependent *pVVar3;
  long lVar4;
  ulong uVar5;
  ViewModelInstanceValue *this_00;
  long *plVar6;
  ViewModelValueDependent *pVVar7;
  ulong local_70;
  ulong uStack_68;
  char *local_60;
  byte local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  getPropertyNameFromPath((basic_string *)this);
  pVVar3 = (ViewModelValueDependent *)viewModelInstanceFromFullPath(this,param_1);
  if (pVVar3 == (ViewModelValueDependent *)0x0) goto LAB_004ef21c;
  if ((local_50 & 1) == 0) {
    local_70 = (ulong)local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_70,local_40,uStack_48);
  }
  pVVar7 = pVVar3 + 0x10;
  lVar4 = FUN_004ef3ec(*(undefined8 *)pVVar7,*(undefined8 *)(pVVar3 + 0x18),&local_70);
  if (lVar4 == 0) {
    this_00 = (ViewModelInstanceValue *)
              ViewModelInstance::propertyValue
                        (*(ViewModelInstance **)(pVVar3 + 8),(basic_string *)&local_70);
    if ((this_00 == (ViewModelInstanceValue *)0x0) ||
       (uVar5 = (**(code **)(*(long *)this_00 + 0x18))(this_00,0x1b0), (uVar5 & 1) == 0))
    goto LAB_004ef208;
    pVVar3 = (ViewModelValueDependent *)operator_new(0x18);
    puVar2 = PTR_vtable_0067d7e8;
    pVVar3[0x10] = (ViewModelValueDependent)0x0;
    *(undefined **)pVVar3 = puVar2 + 0x10;
    *(ViewModelInstanceValue **)(pVVar3 + 8) = this_00;
    FUN_00340fb0(1,this_00 + 0x8c);
    ViewModelInstanceValue::addDependent(this_00,pVVar3);
    *(undefined ***)pVVar3 = &PTR_addDirt_00676b38;
    lVar4 = FUN_004ef554(pVVar7,&local_70,&local_70);
    *(ViewModelValueDependent **)(lVar4 + 0x28) = pVVar3;
joined_r0x004ef200:
    if (((byte)local_70._0_1_ & 1) == 0) goto LAB_004ef21c;
  }
  else {
    plVar6 = *(long **)(*(long *)(lVar4 + 0x28) + 8);
    if (plVar6 == (long *)0x0) {
LAB_004ef208:
      pVVar3 = (ViewModelValueDependent *)0x0;
      goto joined_r0x004ef200;
    }
    uVar5 = (**(code **)(*plVar6 + 0x18))(plVar6,0x1b0);
    if ((uVar5 & 1) == 0) goto LAB_004ef208;
    pVVar3 = *(ViewModelValueDependent **)(lVar4 + 0x28);
    if ((local_70 & 1) == 0) goto LAB_004ef21c;
  }
  operator_delete(local_60);
LAB_004ef21c:
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return pVVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ef258  rive::ViewModelInstanceRuntime::propertyTrigger =====

/* rive::ViewModelInstanceRuntime::propertyTrigger(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

ViewModelValueDependent * __thiscall
rive::ViewModelInstanceRuntime::propertyTrigger
          (ViewModelInstanceRuntime *this,basic_string *param_1)

{
  long lVar1;
  undefined *puVar2;
  ViewModelValueDependent *pVVar3;
  long lVar4;
  ulong uVar5;
  ViewModelInstanceValue *this_00;
  long *plVar6;
  ViewModelValueDependent *pVVar7;
  ulong local_70;
  ulong uStack_68;
  char *local_60;
  byte local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  getPropertyNameFromPath((basic_string *)this);
  pVVar3 = (ViewModelValueDependent *)viewModelInstanceFromFullPath(this,param_1);
  if (pVVar3 == (ViewModelValueDependent *)0x0) goto LAB_004ef3b0;
  if ((local_50 & 1) == 0) {
    local_70 = (ulong)local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_70,local_40,uStack_48);
  }
  pVVar7 = pVVar3 + 0x10;
  lVar4 = FUN_004ef3ec(*(undefined8 *)pVVar7,*(undefined8 *)(pVVar3 + 0x18),&local_70);
  if (lVar4 == 0) {
    this_00 = (ViewModelInstanceValue *)
              ViewModelInstance::propertyValue
                        (*(ViewModelInstance **)(pVVar3 + 8),(basic_string *)&local_70);
    if ((this_00 == (ViewModelInstanceValue *)0x0) ||
       (uVar5 = (**(code **)(*(long *)this_00 + 0x18))(this_00,0x1f5), (uVar5 & 1) == 0))
    goto LAB_004ef39c;
    pVVar3 = (ViewModelValueDependent *)operator_new(0x18);
    puVar2 = PTR_vtable_0067d7e8;
    pVVar3[0x10] = (ViewModelValueDependent)0x0;
    *(undefined **)pVVar3 = puVar2 + 0x10;
    *(ViewModelInstanceValue **)(pVVar3 + 8) = this_00;
    FUN_00340fb0(1,this_00 + 0x8c);
    ViewModelInstanceValue::addDependent(this_00,pVVar3);
    *(undefined ***)pVVar3 = &PTR_addDirt_00676b00;
    lVar4 = FUN_004ef554(pVVar7,&local_70,&local_70);
    *(ViewModelValueDependent **)(lVar4 + 0x28) = pVVar3;
joined_r0x004ef394:
    if (((byte)local_70._0_1_ & 1) == 0) goto LAB_004ef3b0;
  }
  else {
    plVar6 = *(long **)(*(long *)(lVar4 + 0x28) + 8);
    if (plVar6 == (long *)0x0) {
LAB_004ef39c:
      pVVar3 = (ViewModelValueDependent *)0x0;
      goto joined_r0x004ef394;
    }
    uVar5 = (**(code **)(*plVar6 + 0x18))(plVar6,0x1f5);
    if ((uVar5 & 1) == 0) goto LAB_004ef39c;
    pVVar3 = *(ViewModelValueDependent **)(lVar4 + 0x28);
    if ((local_70 & 1) == 0) goto LAB_004ef3b0;
  }
  operator_delete(local_60);
LAB_004ef3b0:
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return pVVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ef3ec  FUN_004ef3ec =====

long * FUN_004ef3ec(long param_1,ulong param_2,byte *param_3)

{
  size_t sVar1;
  size_t sVar2;
  byte *__s2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  sVar2 = *(size_t *)(param_3 + 8);
  __s2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    __s2 = param_3 + 1;
    sVar2 = (ulong)(*param_3 >> 1);
  }
  uVar6 = FUN_00399758(__s2,sVar2);
  if (param_2 != 0) {
    uVar12 = NEON_cnt(param_2,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar9 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar9 < 2) {
      uVar10 = param_2 - 1 & uVar6;
    }
    else {
      uVar10 = uVar6;
      if (param_2 <= uVar6) {
        uVar10 = 0;
        if (param_2 != 0) {
          uVar10 = uVar6 / param_2;
        }
        uVar10 = uVar6 - uVar10 * param_2;
      }
    }
    plVar7 = *(long **)(param_1 + uVar10 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        return (long *)0x0;
      }
      do {
        uVar8 = plVar7[1];
        if (uVar8 == uVar6) {
          bVar3 = *(byte *)(plVar7 + 2);
          sVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            sVar1 = plVar7[3];
          }
          if (sVar1 == sVar2) {
            if ((bVar3 & 1) == 0) {
              if (bVar3 < 2) {
                return plVar7;
              }
              uVar8 = 0;
              while (*(byte *)((long)plVar7 + uVar8 + 0x11) == __s2[uVar8]) {
                uVar8 = uVar8 + 1;
                if (bVar3 >> 1 == uVar8) {
                  return plVar7;
                }
              }
            }
            else {
              iVar5 = memcmp((void *)plVar7[4],__s2,plVar7[3]);
              if (iVar5 == 0) {
                return plVar7;
              }
            }
          }
        }
        else {
          if (uVar9 < 2) {
            uVar8 = uVar8 & param_2 - 1;
          }
          else if (param_2 <= uVar8) {
            uVar4 = 0;
            if (param_2 != 0) {
              uVar4 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar4 * param_2;
          }
          if (uVar8 != uVar10) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}


// ===== 004ef554  FUN_004ef554 =====

long * FUN_004ef554(long *param_1,byte *param_2,byte *param_3)

{
  size_t sVar1;
  size_t sVar2;
  byte *__s2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  void *pvVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  void *pvVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  ulong unaff_x26;
  undefined2 uVar19;
  undefined8 uVar20;
  float fVar21;
  
  sVar2 = *(size_t *)(param_2 + 8);
  __s2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    __s2 = param_2 + 1;
    sVar2 = (ulong)(*param_2 >> 1);
  }
  uVar6 = FUN_00399758(__s2,sVar2);
  uVar18 = param_1[1];
  if (uVar18 != 0) {
    uVar20 = NEON_cnt(uVar18,1);
    uVar19 = NEON_uaddlv(uVar20,1);
    uVar13 = CONCAT62((int6)((ulong)uVar20 >> 0x10),uVar19) & 0xffffffff;
    if (uVar13 < 2) {
      unaff_x26 = uVar18 - 1 & uVar6;
    }
    else {
      unaff_x26 = uVar6;
      if (uVar18 <= uVar6) {
        uVar9 = 0;
        if (uVar18 != 0) {
          uVar9 = uVar6 / uVar18;
        }
        unaff_x26 = uVar6 - uVar9 * uVar18;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x26 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == uVar6) {
          bVar3 = *(byte *)(plVar8 + 2);
          sVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            sVar1 = plVar8[3];
          }
          if (sVar1 == sVar2) {
            if ((bVar3 & 1) == 0) {
              if (bVar3 < 2) {
                return plVar8;
              }
              uVar9 = 0;
              while (*(byte *)((long)plVar8 + uVar9 + 0x11) == __s2[uVar9]) {
                uVar9 = uVar9 + 1;
                if (bVar3 >> 1 == uVar9) {
                  return plVar8;
                }
              }
            }
            else {
              iVar5 = memcmp((void *)plVar8[4],__s2,plVar8[3]);
              if (iVar5 == 0) {
                return plVar8;
              }
            }
          }
        }
        else {
          if (uVar13 < 2) {
            uVar9 = uVar9 & uVar18 - 1;
          }
          else if (uVar18 <= uVar9) {
            uVar12 = 0;
            if (uVar18 != 0) {
              uVar12 = uVar9 / uVar18;
            }
            uVar9 = uVar9 - uVar12 * uVar18;
          }
          if (uVar9 != unaff_x26) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  plVar8 = (long *)operator_new(0x30);
  bVar3 = *param_3;
  *plVar8 = 0;
  plVar8[1] = uVar6;
  if ((bVar3 & 1) == 0) {
    lVar15 = *(long *)param_3;
    lVar10 = *(long *)(param_3 + 0x10);
    plVar8[3] = *(long *)(param_3 + 8);
    plVar8[2] = lVar15;
    plVar8[4] = lVar10;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (plVar8 + 2),*(char **)(param_3 + 0x10),*(ulong *)(param_3 + 8));
  }
  lVar10 = param_1[3];
  fVar21 = *(float *)(param_1 + 4);
  plVar8[5] = 0;
  if ((uVar18 == 0) || (fVar21 * (float)uVar18 < (float)(lVar10 + 1))) {
    if (uVar18 < 3) {
      uVar13 = 1;
    }
    else {
      uVar13 = (ulong)((uVar18 & uVar18 - 1) != 0);
    }
    uVar13 = uVar13 | uVar18 << 1;
    uVar18 = (ulong)((float)(lVar10 + 1) / fVar21);
    if (uVar13 <= uVar18) {
      uVar13 = uVar18;
    }
    if (uVar13 - 1 == 0) {
      uVar13 = 2;
    }
    else if ((uVar13 & uVar13 - 1) != 0) {
      uVar13 = std::__ndk1::__next_prime(uVar13);
    }
    uVar18 = param_1[1];
    if (uVar18 < uVar13) {
LAB_004ef764:
      if (uVar13 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      pvVar7 = operator_new(uVar13 << 3);
      pvVar11 = (void *)*param_1;
      *param_1 = (long)pvVar7;
      if (pvVar11 != (void *)0x0) {
        operator_delete(pvVar11);
      }
      uVar18 = 0;
      param_1[1] = uVar13;
      do {
        *(undefined8 *)(*param_1 + uVar18 * 8) = 0;
        uVar18 = uVar18 + 1;
      } while (uVar13 != uVar18);
      plVar14 = (long *)param_1[2];
      uVar18 = uVar13;
      if (plVar14 != (long *)0x0) {
        uVar9 = plVar14[1];
        uVar20 = NEON_cnt(uVar13,1);
        uVar19 = NEON_uaddlv(uVar20,1);
        uVar12 = CONCAT62((int6)((ulong)uVar20 >> 0x10),uVar19) & 0xffffffff;
        if (uVar12 < 2) {
          uVar9 = uVar9 & uVar13 - 1;
        }
        else if (uVar13 <= uVar9) {
          uVar17 = 0;
          if (uVar13 != 0) {
            uVar17 = uVar9 / uVar13;
          }
          uVar9 = uVar9 - uVar17 * uVar13;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar16 = (long *)*plVar14;
        if (plVar16 != (long *)0x0) {
          do {
            uVar17 = plVar16[1];
            if (uVar12 < 2) {
              uVar17 = uVar17 & uVar13 - 1;
            }
            else if (uVar13 <= uVar17) {
              uVar4 = 0;
              if (uVar13 != 0) {
                uVar4 = uVar17 / uVar13;
              }
              uVar17 = uVar17 - uVar4 * uVar13;
            }
            if (uVar17 != uVar9) {
              if (*(long *)(*param_1 + uVar17 * 8) == 0) {
                *(long **)(*param_1 + uVar17 * 8) = plVar14;
                uVar9 = uVar17;
              }
              else {
                *plVar14 = *plVar16;
                *plVar16 = **(long **)(*param_1 + uVar17 * 8);
                **(undefined8 **)(*param_1 + uVar17 * 8) = plVar16;
                plVar16 = plVar14;
              }
            }
            plVar14 = plVar16;
            plVar16 = (long *)*plVar14;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    else if (uVar13 < uVar18) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar18 < 3) {
LAB_004ef99c:
        uVar9 = std::__ndk1::__next_prime(uVar9);
      }
      else {
        uVar20 = NEON_cnt(uVar18,1);
        uVar19 = NEON_uaddlv(uVar20,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar20 >> 0x10),uVar19)) goto LAB_004ef99c;
        if (1 < uVar9) {
          uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
        }
      }
      if (uVar13 <= uVar9) {
        uVar13 = uVar9;
      }
      if (uVar13 < uVar18) {
        if (uVar13 != 0) goto LAB_004ef764;
        pvVar7 = (void *)*param_1;
        *param_1 = 0;
        if (pvVar7 != (void *)0x0) {
          operator_delete(pvVar7);
        }
        param_1[1] = 0;
        uVar18 = 0;
      }
      else {
        uVar18 = param_1[1];
      }
    }
    if ((uVar18 & uVar18 - 1) == 0) {
      unaff_x26 = uVar18 - 1 & uVar6;
    }
    else {
      unaff_x26 = uVar6;
      if (uVar18 <= uVar6) {
        uVar13 = 0;
        if (uVar18 != 0) {
          uVar13 = uVar6 / uVar18;
        }
        unaff_x26 = uVar6 - uVar13 * uVar18;
      }
    }
  }
  lVar10 = *param_1;
  plVar14 = *(long **)(lVar10 + unaff_x26 * 8);
  if (plVar14 == (long *)0x0) {
    plVar14 = param_1 + 2;
    lVar15 = *plVar14;
    *plVar14 = (long)plVar8;
    *plVar8 = lVar15;
    *(long **)(lVar10 + unaff_x26 * 8) = plVar14;
    if (*plVar8 == 0) goto LAB_004ef970;
    uVar6 = *(ulong *)(*plVar8 + 8);
    if ((uVar18 & uVar18 - 1) == 0) {
      uVar6 = uVar6 & uVar18 - 1;
    }
    else if (uVar18 <= uVar6) {
      uVar13 = 0;
      if (uVar18 != 0) {
        uVar13 = uVar6 / uVar18;
      }
      uVar6 = uVar6 - uVar13 * uVar18;
    }
    plVar14 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar8 = *plVar14;
  }
  *plVar14 = (long)plVar8;
LAB_004ef970:
  param_1[3] = param_1[3] + 1;
  return plVar8;
}


// ===== 004ef9dc  FUN_004ef9dc =====

/* WARNING: Removing unreachable block (ram,0x004efa90) */

void FUN_004ef9dc(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = param_1[1];
  *param_1 = (long)(PTR_vtable_0067d7e8 + 0x10);
  if (lVar7 != 0) {
    puVar2 = *(undefined8 **)(lVar7 + 0xf0);
    puVar5 = *(undefined8 **)(lVar7 + 0xe8);
    puVar3 = puVar5;
    for (; (puVar5 != puVar2 && (puVar3 = puVar5, (long *)*puVar5 != param_1)); puVar5 = puVar5 + 1)
    {
      puVar3 = puVar2;
    }
    if ((puVar3 != puVar2) && (puVar5 = puVar3 + 1, puVar4 = puVar3, puVar5 != puVar2)) {
      do {
        puVar3 = puVar4;
        if ((long *)*puVar5 != param_1) {
          puVar3 = puVar4 + 1;
          *puVar4 = (long *)*puVar5;
        }
        puVar5 = puVar5 + 1;
        puVar4 = puVar3;
      } while (puVar5 != puVar2);
      puVar2 = *(undefined8 **)(lVar7 + 0xf0);
    }
    if (puVar3 != puVar2) {
      *(undefined8 **)(lVar7 + 0xf0) = puVar3;
    }
    plVar6 = (long *)param_1[1];
    iVar1 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x8c);
    if (iVar1 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 004efae0  FUN_004efae0 =====

undefined8 FUN_004efae0(void)

{
  return 7;
}


// ===== 004efae8  FUN_004efae8 =====

/* WARNING: Removing unreachable block (ram,0x004efb9c) */

void FUN_004efae8(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = param_1[1];
  *param_1 = (long)(PTR_vtable_0067d7e8 + 0x10);
  if (lVar7 != 0) {
    puVar2 = *(undefined8 **)(lVar7 + 0xf0);
    puVar5 = *(undefined8 **)(lVar7 + 0xe8);
    puVar3 = puVar5;
    for (; (puVar5 != puVar2 && (puVar3 = puVar5, (long *)*puVar5 != param_1)); puVar5 = puVar5 + 1)
    {
      puVar3 = puVar2;
    }
    if ((puVar3 != puVar2) && (puVar5 = puVar3 + 1, puVar4 = puVar3, puVar5 != puVar2)) {
      do {
        puVar3 = puVar4;
        if ((long *)*puVar5 != param_1) {
          puVar3 = puVar4 + 1;
          *puVar4 = (long *)*puVar5;
        }
        puVar5 = puVar5 + 1;
        puVar4 = puVar3;
      } while (puVar5 != puVar2);
      puVar2 = *(undefined8 **)(lVar7 + 0xf0);
    }
    if (puVar3 != puVar2) {
      *(undefined8 **)(lVar7 + 0xf0) = puVar3;
    }
    plVar6 = (long *)param_1[1];
    iVar1 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x8c);
    if (iVar1 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 004efbec  FUN_004efbec =====

undefined8 FUN_004efbec(void)

{
  return 6;
}


// ===== 004efbf4  FUN_004efbf4 =====

/* WARNING: Removing unreachable block (ram,0x004efd3c) */

void FUN_004efbf4(long *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  ViewModelInstanceRuntime *this;
  long lVar8;
  
  *param_1 = (long)&PTR_addDirt_00676b70;
  puVar6 = (undefined8 *)param_1[5];
  while (puVar6 != (undefined8 *)0x0) {
    this = (ViewModelInstanceRuntime *)puVar6[3];
    pvVar2 = (void *)*puVar6;
    if ((this != (ViewModelInstanceRuntime *)0x0) &&
       (iVar1 = FUN_00340fe0(0xffffffff,this), iVar1 == 1)) {
      rive::ViewModelInstanceRuntime::~ViewModelInstanceRuntime(this);
      operator_delete(this);
    }
    plVar7 = (long *)puVar6[2];
    if ((plVar7 != (long *)0x0) &&
       (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar7 + 0x14), iVar1 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    operator_delete(puVar6);
    puVar6 = (undefined8 *)pvVar2;
  }
  pvVar2 = (void *)param_1[3];
  param_1[3] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  lVar8 = param_1[1];
  *param_1 = (long)(PTR_vtable_0067d7e8 + 0x10);
  if (lVar8 != 0) {
    puVar3 = *(undefined8 **)(lVar8 + 0xf0);
    puVar6 = *(undefined8 **)(lVar8 + 0xe8);
    puVar4 = puVar6;
    for (; (puVar6 != puVar3 && (puVar4 = puVar6, (long *)*puVar6 != param_1)); puVar6 = puVar6 + 1)
    {
      puVar4 = puVar3;
    }
    if ((puVar4 != puVar3) && (puVar6 = puVar4 + 1, puVar5 = puVar4, puVar6 != puVar3)) {
      do {
        puVar4 = puVar5;
        if ((long *)*puVar6 != param_1) {
          puVar4 = puVar5 + 1;
          *puVar5 = (long *)*puVar6;
        }
        puVar6 = puVar6 + 1;
        puVar5 = puVar4;
      } while (puVar6 != puVar3);
      puVar3 = *(undefined8 **)(lVar8 + 0xf0);
    }
    if (puVar4 != puVar3) {
      *(undefined8 **)(lVar8 + 0xf0) = puVar4;
    }
    plVar7 = (long *)param_1[1];
    iVar1 = FUN_00340fe0(0xffffffff,(long)plVar7 + 0x8c);
    if (iVar1 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    param_1[1] = 0;
  }
  return;
}


// ===== 004efd8c  FUN_004efd8c =====

/* WARNING: Removing unreachable block (ram,0x004efed4) */

void FUN_004efd8c(long *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  ViewModelInstanceRuntime *this;
  long lVar8;
  
  *param_1 = (long)&PTR_addDirt_00676b70;
  puVar6 = (undefined8 *)param_1[5];
  while (puVar6 != (undefined8 *)0x0) {
    this = (ViewModelInstanceRuntime *)puVar6[3];
    pvVar2 = (void *)*puVar6;
    if ((this != (ViewModelInstanceRuntime *)0x0) &&
       (iVar1 = FUN_00340fe0(0xffffffff,this), iVar1 == 1)) {
      rive::ViewModelInstanceRuntime::~ViewModelInstanceRuntime(this);
      operator_delete(this);
    }
    plVar7 = (long *)puVar6[2];
    if ((plVar7 != (long *)0x0) &&
       (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar7 + 0x14), iVar1 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    operator_delete(puVar6);
    puVar6 = (undefined8 *)pvVar2;
  }
  pvVar2 = (void *)param_1[3];
  param_1[3] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  lVar8 = param_1[1];
  *param_1 = (long)(PTR_vtable_0067d7e8 + 0x10);
  if (lVar8 != 0) {
    puVar3 = *(undefined8 **)(lVar8 + 0xf0);
    puVar6 = *(undefined8 **)(lVar8 + 0xe8);
    puVar4 = puVar6;
    for (; (puVar6 != puVar3 && (puVar4 = puVar6, (long *)*puVar6 != param_1)); puVar6 = puVar6 + 1)
    {
      puVar4 = puVar3;
    }
    if ((puVar4 != puVar3) && (puVar6 = puVar4 + 1, puVar5 = puVar4, puVar6 != puVar3)) {
      do {
        puVar4 = puVar5;
        if ((long *)*puVar6 != param_1) {
          puVar4 = puVar5 + 1;
          *puVar5 = (long *)*puVar6;
        }
        puVar6 = puVar6 + 1;
        puVar5 = puVar4;
      } while (puVar6 != puVar3);
      puVar3 = *(undefined8 **)(lVar8 + 0xf0);
    }
    if (puVar4 != puVar3) {
      *(undefined8 **)(lVar8 + 0xf0) = puVar4;
    }
    plVar7 = (long *)param_1[1];
    iVar1 = FUN_00340fe0(0xffffffff,(long)plVar7 + 0x8c);
    if (iVar1 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 004eff24  FUN_004eff24 =====

undefined8 FUN_004eff24(void)

{
  return 5;
}


// ===== 004eff2c  FUN_004eff2c =====

/* WARNING: Removing unreachable block (ram,0x004effe0) */

void FUN_004eff2c(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = param_1[1];
  *param_1 = (long)(PTR_vtable_0067d7e8 + 0x10);
  if (lVar7 != 0) {
    puVar2 = *(undefined8 **)(lVar7 + 0xf0);
    puVar5 = *(undefined8 **)(lVar7 + 0xe8);
    puVar3 = puVar5;
    for (; (puVar5 != puVar2 && (puVar3 = puVar5, (long *)*puVar5 != param_1)); puVar5 = puVar5 + 1)
    {
      puVar3 = puVar2;
    }
    if ((puVar3 != puVar2) && (puVar5 = puVar3 + 1, puVar4 = puVar3, puVar5 != puVar2)) {
      do {
        puVar3 = puVar4;
        if ((long *)*puVar5 != param_1) {
          puVar3 = puVar4 + 1;
          *puVar4 = (long *)*puVar5;
        }
        puVar5 = puVar5 + 1;
        puVar4 = puVar3;
      } while (puVar5 != puVar2);
      puVar2 = *(undefined8 **)(lVar7 + 0xf0);
    }
    if (puVar3 != puVar2) {
      *(undefined8 **)(lVar7 + 0xf0) = puVar3;
    }
    plVar6 = (long *)param_1[1];
    iVar1 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x8c);
    if (iVar1 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 004f0030  FUN_004f0030 =====

undefined8 FUN_004f0030(void)

{
  return 0xc;
}


// ===== 004f0038  FUN_004f0038 =====

/* WARNING: Removing unreachable block (ram,0x004f00ec) */

void FUN_004f0038(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = param_1[1];
  *param_1 = (long)(PTR_vtable_0067d7e8 + 0x10);
  if (lVar7 != 0) {
    puVar2 = *(undefined8 **)(lVar7 + 0xf0);
    puVar5 = *(undefined8 **)(lVar7 + 0xe8);
    puVar3 = puVar5;
    for (; (puVar5 != puVar2 && (puVar3 = puVar5, (long *)*puVar5 != param_1)); puVar5 = puVar5 + 1)
    {
      puVar3 = puVar2;
    }
    if ((puVar3 != puVar2) && (puVar5 = puVar3 + 1, puVar4 = puVar3, puVar5 != puVar2)) {
      do {
        puVar3 = puVar4;
        if ((long *)*puVar5 != param_1) {
          puVar3 = puVar4 + 1;
          *puVar4 = (long *)*puVar5;
        }
        puVar5 = puVar5 + 1;
        puVar4 = puVar3;
      } while (puVar5 != puVar2);
      puVar2 = *(undefined8 **)(lVar7 + 0xf0);
    }
    if (puVar3 != puVar2) {
      *(undefined8 **)(lVar7 + 0xf0) = puVar3;
    }
    plVar6 = (long *)param_1[1];
    iVar1 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x8c);
    if (iVar1 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 004f013c  FUN_004f013c =====

undefined8 FUN_004f013c(void)

{
  return 0xb;
}


// ===== 004f0144  FUN_004f0144 =====

/* WARNING: Removing unreachable block (ram,0x004f01f8) */

void FUN_004f0144(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = param_1[1];
  *param_1 = (long)(PTR_vtable_0067d7e8 + 0x10);
  if (lVar7 != 0) {
    puVar2 = *(undefined8 **)(lVar7 + 0xf0);
    puVar5 = *(undefined8 **)(lVar7 + 0xe8);
    puVar3 = puVar5;
    for (; (puVar5 != puVar2 && (puVar3 = puVar5, (long *)*puVar5 != param_1)); puVar5 = puVar5 + 1)
    {
      puVar3 = puVar2;
    }
    if ((puVar3 != puVar2) && (puVar5 = puVar3 + 1, puVar4 = puVar3, puVar5 != puVar2)) {
      do {
        puVar3 = puVar4;
        if ((long *)*puVar5 != param_1) {
          puVar3 = puVar4 + 1;
          *puVar4 = (long *)*puVar5;
        }
        puVar5 = puVar5 + 1;
        puVar4 = puVar3;
      } while (puVar5 != puVar2);
      puVar2 = *(undefined8 **)(lVar7 + 0xf0);
    }
    if (puVar3 != puVar2) {
      *(undefined8 **)(lVar7 + 0xf0) = puVar3;
    }
    plVar6 = (long *)param_1[1];
    iVar1 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x8c);
    if (iVar1 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 004f0248  FUN_004f0248 =====

undefined8 FUN_004f0248(void)

{
  return 4;
}


// ===== 004f0250  FUN_004f0250 =====

/* WARNING: Removing unreachable block (ram,0x004f0304) */

void FUN_004f0250(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = param_1[1];
  *param_1 = (long)(PTR_vtable_0067d7e8 + 0x10);
  if (lVar7 != 0) {
    puVar2 = *(undefined8 **)(lVar7 + 0xf0);
    puVar5 = *(undefined8 **)(lVar7 + 0xe8);
    puVar3 = puVar5;
    for (; (puVar5 != puVar2 && (puVar3 = puVar5, (long *)*puVar5 != param_1)); puVar5 = puVar5 + 1)
    {
      puVar3 = puVar2;
    }
    if ((puVar3 != puVar2) && (puVar5 = puVar3 + 1, puVar4 = puVar3, puVar5 != puVar2)) {
      do {
        puVar3 = puVar4;
        if ((long *)*puVar5 != param_1) {
          puVar3 = puVar4 + 1;
          *puVar4 = (long *)*puVar5;
        }
        puVar5 = puVar5 + 1;
        puVar4 = puVar3;
      } while (puVar5 != puVar2);
      puVar2 = *(undefined8 **)(lVar7 + 0xf0);
    }
    if (puVar3 != puVar2) {
      *(undefined8 **)(lVar7 + 0xf0) = puVar3;
    }
    plVar6 = (long *)param_1[1];
    iVar1 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x8c);
    if (iVar1 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 004f0354  FUN_004f0354 =====

undefined8 FUN_004f0354(void)

{
  return 3;
}


// ===== 004f035c  FUN_004f035c =====

/* WARNING: Removing unreachable block (ram,0x004f0410) */

void FUN_004f035c(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = param_1[1];
  *param_1 = (long)(PTR_vtable_0067d7e8 + 0x10);
  if (lVar7 != 0) {
    puVar2 = *(undefined8 **)(lVar7 + 0xf0);
    puVar5 = *(undefined8 **)(lVar7 + 0xe8);
    puVar3 = puVar5;
    for (; (puVar5 != puVar2 && (puVar3 = puVar5, (long *)*puVar5 != param_1)); puVar5 = puVar5 + 1)
    {
      puVar3 = puVar2;
    }
    if ((puVar3 != puVar2) && (puVar5 = puVar3 + 1, puVar4 = puVar3, puVar5 != puVar2)) {
      do {
        puVar3 = puVar4;
        if ((long *)*puVar5 != param_1) {
          puVar3 = puVar4 + 1;
          *puVar4 = (long *)*puVar5;
        }
        puVar5 = puVar5 + 1;
        puVar4 = puVar3;
      } while (puVar5 != puVar2);
      puVar2 = *(undefined8 **)(lVar7 + 0xf0);
    }
    if (puVar3 != puVar2) {
      *(undefined8 **)(lVar7 + 0xf0) = puVar3;
    }
    plVar6 = (long *)param_1[1];
    iVar1 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x8c);
    if (iVar1 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 004f0460  FUN_004f0460 =====

undefined8 FUN_004f0460(void)

{
  return 2;
}


// ===== 004f0468  FUN_004f0468 =====

/* WARNING: Removing unreachable block (ram,0x004f051c) */

void FUN_004f0468(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = param_1[1];
  *param_1 = (long)(PTR_vtable_0067d7e8 + 0x10);
  if (lVar7 != 0) {
    puVar2 = *(undefined8 **)(lVar7 + 0xf0);
    puVar5 = *(undefined8 **)(lVar7 + 0xe8);
    puVar3 = puVar5;
    for (; (puVar5 != puVar2 && (puVar3 = puVar5, (long *)*puVar5 != param_1)); puVar5 = puVar5 + 1)
    {
      puVar3 = puVar2;
    }
    if ((puVar3 != puVar2) && (puVar5 = puVar3 + 1, puVar4 = puVar3, puVar5 != puVar2)) {
      do {
        puVar3 = puVar4;
        if ((long *)*puVar5 != param_1) {
          puVar3 = puVar4 + 1;
          *puVar4 = (long *)*puVar5;
        }
        puVar5 = puVar5 + 1;
        puVar4 = puVar3;
      } while (puVar5 != puVar2);
      puVar2 = *(undefined8 **)(lVar7 + 0xf0);
    }
    if (puVar3 != puVar2) {
      *(undefined8 **)(lVar7 + 0xf0) = puVar3;
    }
    plVar6 = (long *)param_1[1];
    iVar1 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x8c);
    if (iVar1 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 004f056c  FUN_004f056c =====

undefined8 FUN_004f056c(void)

{
  return 1;
}


// ===== 004f0574  rive::ViewModelInstanceRuntime::viewModelInstanceProperty =====

/* rive::ViewModelInstanceRuntime::viewModelInstanceProperty(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

void rive::ViewModelInstanceRuntime::viewModelInstanceProperty(basic_string *param_1)

{
  long *plVar1;
  ulong uVar2;
  basic_string *in_x1;
  long *in_x8;
  
  plVar1 = (long *)ViewModelInstance::propertyValue(*(ViewModelInstance **)(param_1 + 8),in_x1);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,0x1bc);
    if ((uVar2 & 1) == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = (long *)plVar1[0x24];
      if (plVar1 != (long *)0x0) {
        FUN_00340fb0(1,(long)plVar1 + 0xa4);
      }
    }
  }
  *in_x8 = (long)plVar1;
  return;
}


// ===== 004f05d8  rive::ViewModelInstanceRuntime::propertyViewModel =====

/* rive::ViewModelInstanceRuntime::propertyViewModel(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

void rive::ViewModelInstanceRuntime::propertyViewModel(basic_string *param_1)

{
  long lVar1;
  basic_string *pbVar2;
  basic_string *in_x1;
  undefined8 *in_x8;
  long lVar3;
  byte local_50;
  void *local_40;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  getPropertyNameFromPath(param_1);
  pbVar2 = (basic_string *)viewModelInstanceFromFullPath((ViewModelInstanceRuntime *)param_1,in_x1);
  if (pbVar2 == (basic_string *)0x0) {
    *in_x8 = 0;
  }
  else {
    instanceRuntime(pbVar2);
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f0670  rive::ViewModelInstanceRuntime::replaceViewModel =====

/* rive::ViewModelInstanceRuntime::replaceViewModel(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   rive::ViewModelInstanceRuntime*) const */

uint __thiscall
rive::ViewModelInstanceRuntime::replaceViewModel
          (ViewModelInstanceRuntime *this,basic_string *param_1,ViewModelInstanceRuntime *param_2)

{
  long lVar1;
  uint uVar2;
  ViewModelInstanceRuntime *this_00;
  basic_string local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  getPropertyNameFromPath((basic_string *)this);
  this_00 = (ViewModelInstanceRuntime *)viewModelInstanceFromFullPath(this,param_1);
  if (this_00 == (ViewModelInstanceRuntime *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = replaceViewModelByName(this_00,local_50,param_2);
  }
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f0710  rive::ViewModelInstanceRuntime::replaceViewModelByName =====

/* rive::ViewModelInstanceRuntime::replaceViewModelByName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   rive::ViewModelInstanceRuntime*) const */

void __thiscall
rive::ViewModelInstanceRuntime::replaceViewModelByName
          (ViewModelInstanceRuntime *this,basic_string *param_1,ViewModelInstanceRuntime *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ViewModelInstanceRuntime *pVVar6;
  long *plVar7;
  ViewModelInstance *pVVar8;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar7 = *(long **)(param_2 + 8);
  pVVar8 = *(ViewModelInstance **)(this + 8);
  if (plVar7 == (long *)0x0) {
    local_50 = (long *)0x0;
    uVar3 = ViewModelInstance::replaceViewModelByName(pVVar8,param_1,&local_50);
  }
  else {
    FUN_00340fb0(1,(long)plVar7 + 0xa4);
    local_50 = plVar7;
    uVar3 = ViewModelInstance::replaceViewModelByName(pVVar8,param_1,&local_50);
    iVar2 = FUN_00340fe0(0xffffffff,(long)plVar7 + 0xa4);
    if (iVar2 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    pVVar6 = this + 0x48;
    do {
      pVVar6 = *(ViewModelInstanceRuntime **)pVVar6;
      if (pVVar6 == (ViewModelInstanceRuntime *)0x0) {
        if (param_2 != (ViewModelInstanceRuntime *)0x0) {
          FUN_00340fb0(1,param_2);
        }
        lVar5 = FUN_004eda14(this + 0x38,param_1,param_1);
        pVVar6 = *(ViewModelInstanceRuntime **)(lVar5 + 0x28);
        *(ViewModelInstanceRuntime **)(lVar5 + 0x28) = param_2;
        if ((pVVar6 != (ViewModelInstanceRuntime *)0x0) &&
           (iVar2 = FUN_00340fe0(0xffffffff,pVVar6), iVar2 == 1)) {
          ~ViewModelInstanceRuntime(pVVar6);
          operator_delete(pVVar6);
        }
        break;
      }
    } while (*(ViewModelInstanceRuntime **)(pVVar6 + 0x28) != param_2);
    uVar4 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 004f085c  rive::ViewModelInstanceStringRuntime::value =====

/* rive::ViewModelInstanceStringRuntime::value() const */

long __thiscall rive::ViewModelInstanceStringRuntime::value(ViewModelInstanceStringRuntime *this)

{
  return *(long *)(this + 8) + 0x110;
}


// ===== 004f0868  rive::ViewModelInstanceStringRuntime::value =====

/* rive::ViewModelInstanceStringRuntime::value(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

void __thiscall
rive::ViewModelInstanceStringRuntime::value(ViewModelInstanceStringRuntime *this,ulong *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  char *__s2;
  ulong uVar6;
  char *pcVar7;
  long *plVar8;
  byte bVar9;
  ulong local_50;
  size_t sStack_48;
  char *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  plVar8 = *(long **)(this + 8);
  if ((*param_2 & 1) == 0) {
    sStack_48 = param_2[1];
    local_50 = *param_2;
    local_40 = (char *)param_2[2];
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_50,(char *)param_2[2],param_2[1]);
  }
  bVar3 = *(byte *)(plVar8 + 0x22);
  uVar6 = (ulong)(bVar3 >> 1);
  sVar1 = uVar6;
  if ((bVar3 & 1) != 0) {
    sVar1 = plVar8[0x23];
  }
  bVar9 = (byte)local_50._0_1_ & 1;
  sVar2 = (ulong)((byte)local_50._0_1_ >> 1);
  if ((local_50 & 1) != 0) {
    sVar2 = sStack_48;
  }
  if (sVar1 == sVar2) {
    __s2 = (char *)((ulong)&local_50 | 1);
    if ((local_50 & 1) != 0) {
      __s2 = local_40;
    }
    if ((bVar3 & 1) == 0) {
      if (1 < bVar3) {
        pcVar7 = (char *)((long)plVar8 + 0x111);
        do {
          if (*pcVar7 != *__s2) goto LAB_004f093c;
          uVar6 = uVar6 - 1;
          pcVar7 = pcVar7 + 1;
          __s2 = __s2 + 1;
        } while (uVar6 != 0);
      }
      goto LAB_004f0960;
    }
    iVar5 = memcmp((void *)plVar8[0x24],__s2,plVar8[0x23]);
    if (iVar5 == 0) goto LAB_004f0960;
  }
LAB_004f093c:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar8 + 0x22),(basic_string *)&local_50);
  (**(code **)(*plVar8 + 0xa8))(plVar8);
  bVar9 = (byte)local_50._0_1_ & 1;
LAB_004f0960:
  if (bVar9 != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004f0994  rive::ViewModelInstanceTriggerRuntime::trigger =====

/* rive::ViewModelInstanceTriggerRuntime::trigger() */

void __thiscall
rive::ViewModelInstanceTriggerRuntime::trigger(ViewModelInstanceTriggerRuntime *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 8);
  *(int *)(plVar1 + 0x22) = (int)plVar1[0x22] + 1;
                    /* WARNING: Could not recover jumptable at 0x004f09ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xb0))();
  return;
}


// ===== 004f09b0  rive::ViewModelInstanceValueRuntime::~ViewModelInstanceValueRuntime =====

/* WARNING: Removing unreachable block (ram,0x004f0a64) */
/* rive::ViewModelInstanceValueRuntime::~ViewModelInstanceValueRuntime() */

void __thiscall
rive::ViewModelInstanceValueRuntime::~ViewModelInstanceValueRuntime
          (ViewModelInstanceValueRuntime *this)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *(long *)(this + 8);
  *(undefined **)this = PTR_vtable_0067d7e8 + 0x10;
  if (lVar7 != 0) {
    puVar2 = *(undefined8 **)(lVar7 + 0xf0);
    puVar5 = *(undefined8 **)(lVar7 + 0xe8);
    puVar3 = puVar5;
    for (; (puVar5 != puVar2 && (puVar3 = puVar5, (ViewModelInstanceValueRuntime *)*puVar5 != this))
        ; puVar5 = puVar5 + 1) {
      puVar3 = puVar2;
    }
    if ((puVar3 != puVar2) && (puVar5 = puVar3 + 1, puVar4 = puVar3, puVar5 != puVar2)) {
      do {
        puVar3 = puVar4;
        if ((ViewModelInstanceValueRuntime *)*puVar5 != this) {
          puVar3 = puVar4 + 1;
          *puVar4 = (ViewModelInstanceValueRuntime *)*puVar5;
        }
        puVar5 = puVar5 + 1;
        puVar4 = puVar3;
      } while (puVar5 != puVar2);
      puVar2 = *(undefined8 **)(lVar7 + 0xf0);
    }
    if (puVar3 != puVar2) {
      *(undefined8 **)(lVar7 + 0xf0) = puVar3;
    }
    plVar6 = *(long **)(this + 8);
    iVar1 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x8c);
    if (iVar1 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    *(undefined8 *)(this + 8) = 0;
  }
  return;
}


// ===== 004f0ab4  rive::ViewModelInstanceValueRuntime::addDirt =====

/* rive::ViewModelInstanceValueRuntime::addDirt(rive::ComponentDirt, bool) */

void rive::ViewModelInstanceValueRuntime::addDirt(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}


// ===== 004f0ac0  rive::ViewModelInstanceValueRuntime::relinkDataBind =====

/* rive::ViewModelInstanceValueRuntime::relinkDataBind() */

void rive::ViewModelInstanceValueRuntime::relinkDataBind(void)

{
  return;
}


// ===== 004f0ac4  rive::ViewModelInstanceValueRuntime::~ViewModelInstanceValueRuntime =====

/* rive::ViewModelInstanceValueRuntime::~ViewModelInstanceValueRuntime() */

void __thiscall
rive::ViewModelInstanceValueRuntime::~ViewModelInstanceValueRuntime
          (ViewModelInstanceValueRuntime *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4f0ac8);
  (*pcVar1)();
}


// ===== 004f0ac8  rive::ViewModelInstanceValueRuntime::ViewModelInstanceValueRuntime =====

/* rive::ViewModelInstanceValueRuntime::ViewModelInstanceValueRuntime(rive::ViewModelInstanceValue*)
    */

void __thiscall
rive::ViewModelInstanceValueRuntime::ViewModelInstanceValueRuntime
          (ViewModelInstanceValueRuntime *this,ViewModelInstanceValue *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067d7e8;
  this[0x10] = (ViewModelInstanceValueRuntime)0x0;
  *(undefined **)this = puVar1 + 0x10;
  *(ViewModelInstanceValue **)(this + 8) = param_1;
  FUN_00340fb0(1,param_1 + 0x8c);
  ViewModelInstanceValue::addDependent(param_1,(ViewModelValueDependent *)this);
  return;
}


// ===== 004f0b10  rive::ViewModelInstanceValueRuntime::clearChanges =====

/* rive::ViewModelInstanceValueRuntime::clearChanges() */

void __thiscall
rive::ViewModelInstanceValueRuntime::clearChanges(ViewModelInstanceValueRuntime *this)

{
  this[0x10] = (ViewModelInstanceValueRuntime)0x0;
  return;
}


// ===== 004f0b18  rive::ViewModelInstanceValueRuntime::flushChanges =====

/* rive::ViewModelInstanceValueRuntime::flushChanges() */

bool __thiscall
rive::ViewModelInstanceValueRuntime::flushChanges(ViewModelInstanceValueRuntime *this)

{
  ViewModelInstanceValueRuntime VVar1;
  
  VVar1 = this[0x10];
  if (VVar1 != (ViewModelInstanceValueRuntime)0x0) {
    this[0x10] = (ViewModelInstanceValueRuntime)0x0;
  }
  return VVar1 != (ViewModelInstanceValueRuntime)0x0;
}


// ===== 004f0b30  rive::ViewModelInstanceValueRuntime::name =====

/* rive::ViewModelInstanceValueRuntime::name() const */

undefined * __thiscall
rive::ViewModelInstanceValueRuntime::name(ViewModelInstanceValueRuntime *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_defaultName_0067d7f8;
  if (*(long *)(*(long *)(this + 8) + 0xa8) != 0) {
    puVar1 = (undefined *)(*(long *)(*(long *)(this + 8) + 0xa8) + 0x10);
  }
  return puVar1;
}


// ===== 004f0b50  rive::ViewModelRuntime::ViewModelRuntime =====

/* rive::ViewModelRuntime::ViewModelRuntime(rive::ViewModel*, rive::File const*) */

void __thiscall
rive::ViewModelRuntime::ViewModelRuntime(ViewModelRuntime *this,ViewModel *param_1,File *param_2)

{
  *(ViewModel **)(this + 8) = param_1;
  *(File **)(this + 0x10) = param_2;
  *(undefined4 *)this = 1;
  return;
}


// ===== 004f0b60  rive::ViewModelRuntime::instanceCount =====

/* rive::ViewModelRuntime::instanceCount() const */

long __thiscall rive::ViewModelRuntime::instanceCount(ViewModelRuntime *this)

{
  return *(long *)(*(long *)(this + 8) + 0x50) - *(long *)(*(long *)(this + 8) + 0x48) >> 3;
}


// ===== 004f0b74  rive::ViewModelRuntime::propertyCount =====

/* rive::ViewModelRuntime::propertyCount() const */

ulong __thiscall rive::ViewModelRuntime::propertyCount(ViewModelRuntime *this)

{
  ulong uVar1;
  
  uVar1 = *(long *)(*(long *)(this + 8) + 0x38) - *(long *)(*(long *)(this + 8) + 0x30);
  if (uVar1 == 0) {
    return 0;
  }
  if (-1 < (long)uVar1) {
    return uVar1 >> 3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003d35f8();
}


// ===== 004f0ba4  rive::ViewModelRuntime::name =====

/* rive::ViewModelRuntime::name() const */

long __thiscall rive::ViewModelRuntime::name(ViewModelRuntime *this)

{
  return *(long *)(this + 8) + 0x10;
}


// ===== 004f0bb0  rive::ViewModelRuntime::buildPropertiesData =====

/* rive::ViewModelRuntime::buildPropertiesData(std::__ndk1::vector<rive::ViewModelProperty*,
   std::__ndk1::allocator<rive::ViewModelProperty*> >&) */

void __thiscall rive::ViewModelRuntime::buildPropertiesData(ViewModelRuntime *this,vector *param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ushort uVar6;
  void *pvVar7;
  undefined4 uVar8;
  long *in_x8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong local_80;
  long lStack_78;
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar17 = *(undefined8 **)this;
  puVar3 = *(undefined8 **)(this + 8);
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  if (puVar17 != puVar3) {
    puVar13 = (undefined4 *)0x0;
    do {
      plVar15 = (long *)*puVar17;
      uVar6 = (**(code **)(*plVar15 + 0x10))(plVar15);
      uVar8 = 0;
      if (uVar6 < 0x1c0) {
        if (uVar6 < 0x1b7) {
          if (uVar6 == 0x1af) {
            uVar8 = 2;
          }
          else if (uVar6 == 0x1b2) {
            uVar8 = 5;
          }
          else if (uVar6 == 0x1b4) {
            uVar8 = 8;
          }
        }
        else if (uVar6 == 0x1b7) {
LAB_004f0cec:
          uVar8 = 6;
        }
        else if (uVar6 == 0x1b8) {
          uVar8 = 4;
        }
        else if (uVar6 == 0x1bb) {
          uVar8 = 1;
        }
      }
      else if (uVar6 < 0x1ff) {
        if (uVar6 == 0x1c0) {
          uVar8 = 3;
        }
        else if (uVar6 == 0x1f6) {
          uVar8 = 7;
        }
        else if (uVar6 == 0x1fd) goto LAB_004f0cec;
      }
      else if (uVar6 < 0x249) {
        if (uVar6 == 0x1ff) goto LAB_004f0cec;
        if (uVar6 == 0x234) {
          uVar8 = 10;
        }
      }
      else if (uVar6 == 0x249) {
        uVar8 = 0xb;
      }
      else if (uVar6 == 0x256) {
        uVar8 = 0xc;
      }
      if ((plVar15[2] & 1U) == 0) {
        local_70 = (void *)plVar15[4];
        lStack_78 = plVar15[3];
        local_80 = plVar15[2];
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_80,(char *)plVar15[4],plVar15[3]);
      }
      if (puVar13 < (undefined4 *)in_x8[2]) {
        *puVar13 = uVar8;
        *(void **)(puVar13 + 6) = local_70;
        *(long *)(puVar13 + 4) = lStack_78;
        *(ulong *)(puVar13 + 2) = local_80;
        in_x8[1] = (long)(puVar13 + 8);
        puVar13 = puVar13 + 8;
      }
      else {
        puVar18 = (undefined4 *)*in_x8;
        lVar16 = (long)puVar13 - (long)puVar18 >> 5;
        uVar1 = lVar16 + 1;
        if (uVar1 >> 0x3b != 0) {
          FUN_004f0ec0();
LAB_004f0eb8:
                    /* WARNING: Subroutine does not return */
          FUN_00324008();
        }
        uVar9 = in_x8[2] - (long)puVar18;
        uVar12 = (long)uVar9 >> 4;
        if (uVar12 <= uVar1) {
          uVar12 = uVar1;
        }
        if (0x7fffffffffffffdf < uVar9) {
          uVar12 = 0x7ffffffffffffff;
        }
        if (uVar12 == 0) {
          pvVar7 = (void *)0x0;
        }
        else {
          if (uVar12 >> 0x3b != 0) goto LAB_004f0eb8;
          pvVar7 = operator_new(uVar12 << 5);
        }
        lVar5 = lStack_78;
        uVar1 = local_80;
        puVar10 = (undefined4 *)((long)pvVar7 + lVar16 * 0x20);
        local_80 = 0;
        lStack_78 = 0;
        *puVar10 = uVar8;
        pvVar7 = (void *)((long)pvVar7 + uVar12 * 0x20);
        puVar2 = puVar10 + 8;
        *(long *)(puVar10 + 4) = lVar5;
        *(ulong *)(puVar10 + 2) = uVar1;
        *(void **)(puVar10 + 6) = local_70;
        local_70 = (void *)0x0;
        if (puVar13 == puVar18) {
          *in_x8 = (long)puVar10;
          in_x8[1] = (long)puVar2;
          in_x8[2] = (long)pvVar7;
        }
        else {
          do {
            puVar14 = puVar13 + -8;
            puVar11 = puVar10 + -8;
            *puVar11 = *puVar14;
            uVar20 = *(undefined8 *)(puVar13 + -4);
            uVar19 = *(undefined8 *)(puVar13 + -6);
            *(undefined8 *)(puVar10 + -2) = *(undefined8 *)(puVar13 + -2);
            *(undefined8 *)(puVar10 + -4) = uVar20;
            *(undefined8 *)(puVar10 + -6) = uVar19;
            *(undefined8 *)(puVar13 + -4) = 0;
            *(undefined8 *)(puVar13 + -2) = 0;
            *(undefined8 *)(puVar13 + -6) = 0;
            puVar10 = puVar11;
            puVar13 = puVar14;
          } while (puVar14 != puVar18);
          puVar13 = (undefined4 *)*in_x8;
          puVar18 = (undefined4 *)in_x8[1];
          *in_x8 = (long)puVar11;
          in_x8[1] = (long)puVar2;
          in_x8[2] = (long)pvVar7;
          for (; puVar18 != puVar13; puVar18 = puVar18 + -8) {
            if ((*(byte *)(puVar18 + -6) & 1) != 0) {
              operator_delete(*(void **)(puVar18 + -2));
            }
          }
        }
        if (puVar13 != (undefined4 *)0x0) {
          operator_delete(puVar13);
        }
        in_x8[1] = (long)puVar2;
        puVar13 = puVar2;
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      puVar17 = puVar17 + 1;
    } while (puVar17 != puVar3);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f0ec0  FUN_004f0ec0 =====

void FUN_004f0ec0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004f0ed4  rive::ViewModelRuntime::properties =====

/* rive::ViewModelRuntime::properties() */

void rive::ViewModelRuntime::properties(void)

{
  ulong __n;
  long lVar1;
  long in_x0;
  void *__dest;
  vector *in_x1;
  vector *__src;
  void *local_60;
  long local_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = 0;
  local_50 = 0;
  local_60 = (void *)0x0;
  __src = *(vector **)(*(long *)(in_x0 + 8) + 0x30);
  __n = *(long *)(*(long *)(in_x0 + 8) + 0x38) - (long)__src;
  if (__n == 0) {
    buildPropertiesData((ViewModelRuntime *)&local_60,in_x1);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003d35f8();
    }
    __dest = operator_new(__n);
    local_60 = __dest;
    local_50 = (long)__dest + __n;
    memcpy(__dest,__src,__n);
    local_58 = (long)__dest + __n;
    buildPropertiesData((ViewModelRuntime *)&local_60,__src);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      operator_delete(__dest);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f0fb0  rive::ViewModelRuntime::instanceNames =====

/* rive::ViewModelRuntime::instanceNames() const */

void rive::ViewModelRuntime::instanceNames(void)

{
  void *__src;
  ulong __n;
  long in_x0;
  void *__dest;
  undefined8 *in_x8;
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  __src = *(void **)(*(long *)(in_x0 + 8) + 0x48);
  __n = *(long *)(*(long *)(in_x0 + 8) + 0x50) - (long)__src;
  if (__n == 0) {
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
    return;
  }
  if (-1 < (long)__n) {
    __dest = operator_new(__n);
    memcpy(__dest,__src,__n);
    uVar3 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
    *in_x8 = 0;
    this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0;
    do {
      lVar1 = *(long *)((long)__dest + uVar3);
      if (this < (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 in_x8[2]) {
        if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
          uVar5 = *(undefined8 *)(lVar1 + 0x18);
          uVar4 = *(undefined8 *)(lVar1 + 0x10);
          *(undefined8 *)(this + 0x10) = *(undefined8 *)(lVar1 + 0x20);
          pbVar2 = this + 0x18;
          *(undefined8 *)(this + 8) = uVar5;
          *(undefined8 *)this = uVar4;
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external(this,*(char **)(lVar1 + 0x20),*(ulong *)(lVar1 + 0x18));
          pbVar2 = this + 0x18;
        }
      }
      else {
        pbVar2 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 FUN_003ab78c();
      }
      uVar3 = uVar3 + 8;
      in_x8[1] = pbVar2;
      this = pbVar2;
    } while (__n != uVar3);
    operator_delete(__dest);
    return;
  }
  FUN_004f10a0();
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004f10a0  FUN_004f10a0 =====

void FUN_004f10a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004f10b4  rive::ViewModelRuntime::createInstanceFromIndex =====

/* rive::ViewModelRuntime::createInstanceFromIndex(unsigned long) const */

void rive::ViewModelRuntime::createInstanceFromIndex(ulong param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  ViewModelInstanceRuntime *pVVar6;
  ulong uVar7;
  ulong in_x1;
  undefined8 *in_x8;
  long *plVar8;
  File *pFVar9;
  long *local_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x48);
  if ((in_x1 < (ulong)(*(long *)(*(long *)(param_1 + 8) + 0x50) - lVar1 >> 3)) &&
     (plVar8 = *(long **)(lVar1 + in_x1 * 8), plVar8 != (long *)0x0)) {
    plVar8 = (long *)(**(code **)(*plVar8 + 0x28))(plVar8);
    pFVar9 = *(File **)(param_1 + 0x10);
    if (plVar8 != (long *)0x0) {
      FUN_00340fb0(1,(long)plVar8 + 0xa4);
      local_58 = plVar8;
      File::completeViewModelInstance(pFVar9,&local_58);
      iVar4 = FUN_00340fe0(0xffffffff,(long)plVar8 + 0xa4);
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
      FUN_00340fb0(1,(long)plVar8 + 0xa4);
      pVVar6 = (ViewModelInstanceRuntime *)operator_new(0x60);
      FUN_00340fb0(1,(long)plVar8 + 0xa4);
      local_50 = plVar8;
      ViewModelInstanceRuntime::ViewModelInstanceRuntime(pVVar6,&local_50);
      plVar3 = local_50;
      *in_x8 = pVVar6;
      if ((local_50 != (long *)0x0) &&
         (iVar4 = FUN_00340fe0(0xffffffff,(long)local_50 + 0xa4), iVar4 == 1)) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      iVar4 = FUN_00340fe0(0xffffffff,(long)plVar8 + 0xa4);
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
      uVar7 = FUN_00340fe0(0xffffffff,(long)plVar8 + 0xa4);
      if ((int)uVar7 == 1) {
        uVar7 = (**(code **)(*plVar8 + 8))(plVar8);
      }
      goto LAB_004f1228;
    }
    local_58 = (long *)0x0;
    uVar7 = File::completeViewModelInstance(pFVar9,&local_58);
  }
  else {
    uVar5 = fprintf((FILE *)(PTR___sF_0067cee8 + 0x130),
                    "Could not find View Model Instance. Index %zu is out of range.\n");
    uVar7 = (ulong)uVar5;
  }
  *in_x8 = 0;
LAB_004f1228:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


// ===== 004f1268  rive::ViewModelRuntime::createRuntimeInstance =====

/* rive::ViewModelRuntime::createRuntimeInstance(rive::rcp<rive::ViewModelInstance>) const */

void rive::ViewModelRuntime::createRuntimeInstance
               (undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  ViewModelInstanceRuntime *pVVar3;
  long *plVar4;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)*param_3;
  if (plVar4 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    pVVar3 = (ViewModelInstanceRuntime *)operator_new(0x60);
    FUN_00340fb0(1,(long)plVar4 + 0xa4);
    local_40 = plVar4;
    ViewModelInstanceRuntime::ViewModelInstanceRuntime(pVVar3,&local_40);
    plVar4 = local_40;
    *param_1 = pVVar3;
    if ((local_40 != (long *)0x0) &&
       (iVar2 = FUN_00340fe0(0xffffffff,(long)local_40 + 0xa4), iVar2 == 1)) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f131c  rive::ViewModelRuntime::createInstanceFromName =====

/* rive::ViewModelRuntime::createInstanceFromName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

void rive::ViewModelRuntime::createInstanceFromName(basic_string *param_1)

{
  size_t sVar1;
  byte *__s2;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  uint uVar9;
  ViewModelInstanceRuntime *pVVar10;
  byte *in_x1;
  undefined8 *in_x8;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  File *pFVar14;
  long *plVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  long *local_78;
  long *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  puVar17 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x48);
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x50);
  bVar4 = *in_x1;
  if (puVar17 == puVar3) {
    pbVar16 = *(byte **)(in_x1 + 0x10);
  }
  else {
    sVar2 = *(size_t *)(in_x1 + 8);
    pbVar16 = *(byte **)(in_x1 + 0x10);
    __s2 = pbVar16;
    if ((bVar4 & 1) == 0) {
      sVar2 = (ulong)(bVar4 >> 1);
      __s2 = in_x1 + 1;
    }
    do {
      plVar15 = (long *)*puVar17;
      bVar5 = *(byte *)(plVar15 + 2);
      uVar11 = (ulong)(bVar5 >> 1);
      sVar1 = uVar11;
      if ((bVar5 & 1) != 0) {
        sVar1 = plVar15[3];
      }
      if (sVar1 == sVar2) {
        if ((bVar5 & 1) == 0) {
          if (bVar5 < 2) {
LAB_004f13f4:
            plVar15 = (long *)(**(code **)(*plVar15 + 0x28))(plVar15);
            pFVar14 = *(File **)(param_1 + 0x10);
            if (plVar15 == (long *)0x0) {
              local_78 = (long *)0x0;
              uVar11 = File::completeViewModelInstance(pFVar14,&local_78);
              goto LAB_004f152c;
            }
            FUN_00340fb0(1,(long)plVar15 + 0xa4);
            local_78 = plVar15;
            File::completeViewModelInstance(pFVar14,&local_78);
            iVar8 = FUN_00340fe0(0xffffffff,(long)plVar15 + 0xa4);
            if (iVar8 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15);
            }
            FUN_00340fb0(1,(long)plVar15 + 0xa4);
            pVVar10 = (ViewModelInstanceRuntime *)operator_new(0x60);
            FUN_00340fb0(1,(long)plVar15 + 0xa4);
            local_70 = plVar15;
            ViewModelInstanceRuntime::ViewModelInstanceRuntime(pVVar10,&local_70);
            plVar7 = local_70;
            *in_x8 = pVVar10;
            if ((local_70 != (long *)0x0) &&
               (iVar8 = FUN_00340fe0(0xffffffff,(long)local_70 + 0xa4), iVar8 == 1)) {
              (**(code **)(*plVar7 + 8))(plVar7);
            }
            iVar8 = FUN_00340fe0(0xffffffff,(long)plVar15 + 0xa4);
            if (iVar8 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15);
            }
            uVar11 = FUN_00340fe0(0xffffffff,(long)plVar15 + 0xa4);
            if ((int)uVar11 == 1) {
              uVar11 = (**(code **)(*plVar15 + 8))(plVar15);
            }
            goto LAB_004f1534;
          }
          pbVar12 = (byte *)((long)plVar15 + 0x11);
          pbVar13 = __s2;
          while (*pbVar12 == *pbVar13) {
            uVar11 = uVar11 - 1;
            pbVar12 = pbVar12 + 1;
            pbVar13 = pbVar13 + 1;
            if (uVar11 == 0) {
              if (plVar15 != (long *)0x0) goto LAB_004f13f4;
              goto LAB_004f150c;
            }
          }
        }
        else {
          iVar8 = memcmp((void *)plVar15[4],__s2,plVar15[3]);
          if (iVar8 == 0) goto LAB_004f13f4;
        }
      }
      puVar17 = puVar17 + 1;
    } while (puVar17 != puVar3);
  }
LAB_004f150c:
  if ((bVar4 & 1) == 0) {
    pbVar16 = in_x1 + 1;
  }
  uVar9 = fprintf((FILE *)(PTR___sF_0067cee8 + 0x130),
                  "Could not find View Model Instance named %s. Was it marked to export with the file?\n"
                  ,pbVar16);
  uVar11 = (ulong)uVar9;
LAB_004f152c:
  *in_x8 = 0;
LAB_004f1534:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}


// ===== 004f157c  rive::ViewModelRuntime::createDefaultInstance =====

/* rive::ViewModelRuntime::createDefaultInstance() const */

void rive::ViewModelRuntime::createDefaultInstance(void)

{
  ViewModel *pVVar1;
  long lVar2;
  int iVar3;
  long in_x0;
  long *plVar4;
  ViewModelInstanceRuntime *pVVar5;
  undefined8 *in_x8;
  long *local_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pVVar1 = *(ViewModel **)(in_x0 + 0x10);
  plVar4 = *(long **)(*(long *)(in_x0 + 8) + 0x48);
  if ((*(long **)(*(long *)(in_x0 + 8) + 0x50) == plVar4) ||
     (plVar4 = (long *)*plVar4, plVar4 == (long *)0x0)) {
    File::createViewModelInstance(pVVar1);
    if (local_58 != (long *)0x0) {
LAB_004f1638:
      FUN_00340fb0(1,(long)local_58 + 0xa4);
      pVVar5 = (ViewModelInstanceRuntime *)operator_new(0x60);
      FUN_00340fb0(1,(long)local_58 + 0xa4);
      local_50 = local_58;
      ViewModelInstanceRuntime::ViewModelInstanceRuntime(pVVar5,&local_50);
      plVar4 = local_50;
      *in_x8 = pVVar5;
      if ((local_50 != (long *)0x0) &&
         (iVar3 = FUN_00340fe0(0xffffffff,(long)local_50 + 0xa4), iVar3 == 1)) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
      iVar3 = FUN_00340fe0(0xffffffff,(long)local_58 + 0xa4);
      if (iVar3 == 1) {
        (**(code **)(*local_58 + 8))(local_58);
      }
      goto LAB_004f1700;
    }
  }
  else {
    local_58 = (long *)(**(code **)(*plVar4 + 0x28))();
    if (local_58 == (long *)0x0) {
      local_50 = (long *)0x0;
      File::completeViewModelInstance((File *)pVVar1,&local_50);
    }
    else {
      FUN_00340fb0(1,(long)local_58 + 0xa4);
      local_50 = local_58;
      File::completeViewModelInstance((File *)pVVar1,&local_50);
      iVar3 = FUN_00340fe0(0xffffffff,(long)local_58 + 0xa4);
      if (iVar3 == 1) {
        (**(code **)(*local_58 + 8))(local_58);
      }
      if (local_58 != (long *)0x0) goto LAB_004f1638;
    }
  }
  fwrite("Default instance not found. Creating empty instance instead.\n",0x3d,1,
         (FILE *)(PTR___sF_0067cee8 + 0x130));
  createInstance();
LAB_004f1700:
  if ((local_58 != (long *)0x0) &&
     (iVar3 = FUN_00340fe0(0xffffffff,(long)local_58 + 0xa4), iVar3 == 1)) {
    (**(code **)(*local_58 + 8))(local_58);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004f1758  rive::ViewModelRuntime::createInstance =====

/* rive::ViewModelRuntime::createInstance() const */

void rive::ViewModelRuntime::createInstance(void)

{
  long lVar1;
  int iVar2;
  long in_x0;
  ViewModelInstanceRuntime *pVVar3;
  undefined8 *in_x8;
  long *local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  File::createViewModelInstance(*(ViewModel **)(in_x0 + 0x10));
  if (local_58 == (long *)0x0) {
    *in_x8 = 0;
  }
  else {
    FUN_00340fb0(1,(long)local_58 + 0xa4);
    pVVar3 = (ViewModelInstanceRuntime *)operator_new(0x60);
    FUN_00340fb0(1,(long)local_58 + 0xa4);
    local_50 = local_58;
    ViewModelInstanceRuntime::ViewModelInstanceRuntime(pVVar3,&local_50);
    *in_x8 = pVVar3;
    if ((local_50 != (long *)0x0) &&
       (iVar2 = FUN_00340fe0(0xffffffff,(long)local_50 + 0xa4), iVar2 == 1)) {
      (**(code **)(*local_50 + 8))(local_50);
    }
    iVar2 = FUN_00340fe0(0xffffffff,(long)local_58 + 0xa4);
    if (iVar2 == 1) {
      (**(code **)(*local_58 + 8))(local_58);
    }
    if ((local_58 != (long *)0x0) &&
       (iVar2 = FUN_00340fe0(0xffffffff,(long)local_58 + 0xa4), iVar2 == 1)) {
      (**(code **)(*local_58 + 8))(local_58);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f1888  rive::ViewModel::~ViewModel =====

/* rive::ViewModel::~ViewModel() */

void __thiscall rive::ViewModel::~ViewModel(ViewModel *this)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  
  plVar1 = *(long **)(this + 0x30);
  plVar2 = *(long **)(this + 0x38);
  *(undefined **)this = PTR_vtable_0067d2b0 + 0x10;
  for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 8))();
    }
  }
  pvVar3 = *(void **)(this + 0x48);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x50) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x30);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x38) = pvVar3;
    operator_delete(pvVar3);
  }
  *(undefined **)this = PTR_vtable_0067d278 + 0x10;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
    return;
  }
  return;
}


// ===== 004f1938  rive::ViewModel::~ViewModel =====

/* rive::ViewModel::~ViewModel() */

void __thiscall rive::ViewModel::~ViewModel(ViewModel *this)

{
  ~ViewModel(this);
  operator_delete(this);
  return;
}


// ===== 004f195c  FUN_004f195c =====

undefined8 FUN_004f195c(void)

{
  return 0x1b3;
}


// ===== 004f1964  FUN_004f1964 =====

bool FUN_004f1964(undefined8 param_1,short param_2)

{
  return param_2 == 0x1b3 || param_2 == 0x1ad;
}


// ===== 004f197c  rive::ViewModel::addProperty =====

/* rive::ViewModel::addProperty(rive::ViewModelProperty*) */

void __thiscall rive::ViewModel::addProperty(ViewModel *this,ViewModelProperty *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar10 = *(undefined8 **)(this + 0x38);
  if (puVar10 < *(undefined8 **)(this + 0x40)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_004f1abc;
  }
  puVar9 = *(undefined8 **)(this + 0x30);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003d35f8();
  }
  uVar3 = (long)*(undefined8 **)(this + 0x40) - (long)puVar9;
  uVar5 = (long)uVar3 >> 2;
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  if (0x7ffffffffffffff7 < uVar3) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00324008();
    }
    pvVar2 = operator_new(uVar5 << 3);
  }
  puVar4 = (undefined8 *)((long)pvVar2 + lVar12 * 8);
  puVar13 = puVar4 + 1;
  *puVar4 = param_1;
  if ((long)puVar10 - (long)puVar9 != 0) {
    uVar6 = ((long)puVar10 - (long)puVar9) - 8;
    puVar11 = puVar10;
    if ((0x37 < uVar6) &&
       (0x1f < (ulong)((long)puVar10 + (-((long)puVar10 - (long)puVar9) - (long)pvVar2)))) {
      puVar8 = puVar10 + -2;
      uVar6 = (uVar6 >> 3) + 1;
      uVar7 = uVar6 & 0x3ffffffffffffffc;
      puVar11 = puVar10 + -uVar7;
      puVar10 = puVar4 + -2;
      uVar3 = uVar7;
      do {
        puVar1 = puVar8 + -1;
        uVar16 = puVar8[-2];
        uVar15 = puVar8[1];
        uVar14 = *puVar8;
        uVar3 = uVar3 - 4;
        puVar8 = puVar8 + -4;
        puVar10[-1] = *puVar1;
        puVar10[-2] = uVar16;
        puVar10[1] = uVar15;
        *puVar10 = uVar14;
        puVar10 = puVar10 + -4;
      } while (uVar3 != 0);
      puVar4 = puVar4 + -uVar7;
      puVar10 = puVar9;
      if (uVar6 == uVar7) goto LAB_004f1aa8;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0x30);
  }
LAB_004f1aa8:
  *(undefined8 **)(this + 0x30) = puVar4;
  *(undefined8 **)(this + 0x38) = puVar13;
  *(void **)(this + 0x40) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_004f1abc:
  *(undefined8 **)(this + 0x38) = puVar13;
  return;
}


// ===== 004f1ae0  rive::ViewModel::property =====

/* rive::ViewModel::property(unsigned long) */

undefined8 __thiscall rive::ViewModel::property(ViewModel *this,ulong param_1)

{
  if (param_1 < (ulong)(*(long *)(this + 0x38) - *(long *)(this + 0x30) >> 3)) {
    return *(undefined8 *)(*(long *)(this + 0x30) + param_1 * 8);
  }
  return 0;
}


// ===== 004f1b00  rive::ViewModel::property =====

/* rive::ViewModel::property(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

long __thiscall rive::ViewModel::property(ViewModel *this,basic_string *param_1)

{
  size_t sVar1;
  size_t sVar2;
  long *plVar3;
  basic_string *__s2;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  plVar8 = *(long **)(this + 0x30);
  plVar3 = *(long **)(this + 0x38);
  if (plVar8 != plVar3) {
    sVar2 = *(size_t *)(param_1 + 8);
    __s2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      __s2 = param_1 + 1;
      sVar2 = (ulong)((byte)*param_1 >> 1);
    }
    do {
      lVar7 = *plVar8;
      bVar4 = *(byte *)(lVar7 + 0x10);
      sVar1 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        sVar1 = *(size_t *)(lVar7 + 0x18);
      }
      if (sVar1 == sVar2) {
        if ((bVar4 & 1) == 0) {
          if (bVar4 < 2) {
            return lVar7;
          }
          uVar6 = 0;
          while (*(basic_string *)(lVar7 + uVar6 + 0x11) == __s2[uVar6]) {
            uVar6 = uVar6 + 1;
            if (bVar4 >> 1 == uVar6) {
              return lVar7;
            }
          }
        }
        else {
          iVar5 = memcmp(*(void **)(lVar7 + 0x20),__s2,*(size_t *)(lVar7 + 0x18));
          if (iVar5 == 0) {
            return lVar7;
          }
        }
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar3);
  }
  return 0;
}


// ===== 004f1bc8  rive::ViewModel::property =====

/* rive::ViewModel::property(rive::SymbolType) */

long __thiscall rive::ViewModel::property(ViewModel *this,uint param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x30);
  if (plVar1 != *(long **)(this + 0x38)) {
    do {
      if (*(uint *)(*plVar1 + 0x28) == (param_2 & 0xff)) {
        return *plVar1;
      }
      plVar1 = plVar1 + 1;
    } while (plVar1 != *(long **)(this + 0x38));
  }
  return 0;
}


// ===== 004f1bfc  rive::ViewModel::addInstance =====

/* rive::ViewModel::addInstance(rive::ViewModelInstance*) */

void __thiscall rive::ViewModel::addInstance(ViewModel *this,ViewModelInstance *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  puVar11 = *(undefined8 **)(this + 0x50);
  if (puVar11 < *(undefined8 **)(this + 0x58)) {
    puVar15 = puVar11 + 1;
    *puVar11 = param_1;
    goto LAB_004f1d38;
  }
  puVar10 = *(undefined8 **)(this + 0x48);
  lVar14 = (long)puVar11 - (long)puVar10 >> 3;
  uVar7 = lVar14 + 1;
  if (uVar7 >> 0x3d != 0) {
    FUN_004f10a0();
LAB_004f1d94:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar4 = (long)*(undefined8 **)(this + 0x58) - (long)puVar10;
  uVar6 = (long)uVar4 >> 2;
  if (uVar6 <= uVar7) {
    uVar6 = uVar7;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3d != 0) goto LAB_004f1d94;
    pvVar3 = operator_new(uVar6 << 3);
  }
  puVar5 = (undefined8 *)((long)pvVar3 + lVar14 * 8);
  puVar15 = puVar5 + 1;
  *puVar5 = param_1;
  if ((long)puVar11 - (long)puVar10 != 0) {
    uVar7 = ((long)puVar11 - (long)puVar10) - 8;
    puVar13 = puVar11;
    if ((0x37 < uVar7) &&
       (0x1f < (ulong)((long)puVar11 + (-((long)puVar11 - (long)puVar10) - (long)pvVar3)))) {
      puVar9 = puVar11 + -2;
      uVar7 = (uVar7 >> 3) + 1;
      uVar8 = uVar7 & 0x3ffffffffffffffc;
      puVar13 = puVar11 + -uVar8;
      puVar11 = puVar5 + -2;
      uVar4 = uVar8;
      do {
        puVar1 = puVar9 + -1;
        uVar18 = puVar9[-2];
        uVar17 = puVar9[1];
        uVar16 = *puVar9;
        uVar4 = uVar4 - 4;
        puVar9 = puVar9 + -4;
        puVar11[-1] = *puVar1;
        puVar11[-2] = uVar18;
        puVar11[1] = uVar17;
        *puVar11 = uVar16;
        puVar11 = puVar11 + -4;
      } while (uVar4 != 0);
      puVar5 = puVar5 + -uVar8;
      puVar11 = puVar10;
      if (uVar7 == uVar8) goto LAB_004f1d24;
    }
    do {
      puVar13 = puVar13 + -1;
      puVar5 = puVar5 + -1;
      *puVar5 = *puVar13;
    } while (puVar13 != puVar10);
    puVar11 = *(undefined8 **)(this + 0x48);
  }
LAB_004f1d24:
  *(undefined8 **)(this + 0x48) = puVar5;
  *(undefined8 **)(this + 0x50) = puVar15;
  *(void **)(this + 0x58) = (void *)((long)pvVar3 + uVar6 * 8);
  if (puVar11 != (undefined8 *)0x0) {
    operator_delete(puVar11);
  }
LAB_004f1d38:
  plVar12 = *(long **)(param_1 + 0x118);
  *(undefined8 **)(this + 0x50) = puVar15;
  if ((plVar12 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,plVar12 + 5), iVar2 == 1)) {
    (**(code **)(*plVar12 + 8))(plVar12);
  }
  FUN_00340fb0(1,this + 0x28);
  *(ViewModel **)(param_1 + 0x118) = this;
  return;
}


// ===== 004f1d98  rive::ViewModel::defaultInstance =====

/* rive::ViewModel::defaultInstance() */

undefined8 __thiscall rive::ViewModel::defaultInstance(ViewModel *this)

{
  if (*(undefined8 **)(this + 0x50) != *(undefined8 **)(this + 0x48)) {
    return **(undefined8 **)(this + 0x48);
  }
  return 0;
}


// ===== 004f1db4  rive::ViewModel::instance =====

/* rive::ViewModel::instance(unsigned long) */

undefined8 __thiscall rive::ViewModel::instance(ViewModel *this,ulong param_1)

{
  if (param_1 < (ulong)(*(long *)(this + 0x50) - *(long *)(this + 0x48) >> 3)) {
    return *(undefined8 *)(*(long *)(this + 0x48) + param_1 * 8);
  }
  return 0;
}


// ===== 004f1dd4  rive::ViewModel::instance =====

/* rive::ViewModel::instance(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

long __thiscall rive::ViewModel::instance(ViewModel *this,basic_string *param_1)

{
  size_t sVar1;
  size_t sVar2;
  long *plVar3;
  basic_string *__s2;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  plVar8 = *(long **)(this + 0x48);
  plVar3 = *(long **)(this + 0x50);
  if (plVar8 != plVar3) {
    sVar2 = *(size_t *)(param_1 + 8);
    __s2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      __s2 = param_1 + 1;
      sVar2 = (ulong)((byte)*param_1 >> 1);
    }
    do {
      lVar7 = *plVar8;
      bVar4 = *(byte *)(lVar7 + 0x10);
      sVar1 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        sVar1 = *(size_t *)(lVar7 + 0x18);
      }
      if (sVar1 == sVar2) {
        if ((bVar4 & 1) == 0) {
          if (bVar4 < 2) {
            return lVar7;
          }
          uVar6 = 0;
          while (*(basic_string *)(lVar7 + uVar6 + 0x11) == __s2[uVar6]) {
            uVar6 = uVar6 + 1;
            if (bVar4 >> 1 == uVar6) {
              return lVar7;
            }
          }
        }
        else {
          iVar5 = memcmp(*(void **)(lVar7 + 0x20),__s2,*(size_t *)(lVar7 + 0x18));
          if (iVar5 == 0) {
            return lVar7;
          }
        }
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar3);
  }
  return 0;
}


// ===== 004f1e9c  rive::ViewModel::instanceCount =====

/* rive::ViewModel::instanceCount() const */

long __thiscall rive::ViewModel::instanceCount(ViewModel *this)

{
  return *(long *)(this + 0x50) - *(long *)(this + 0x48) >> 3;
}


// ===== 004f1eac  rive::ViewModel::createInstance =====

/* rive::ViewModel::createInstance() */

void rive::ViewModel::createInstance(void)

{
  long in_x0;
  undefined8 *in_x8;
  
  if (*(ViewModel **)(in_x0 + 0x60) != (ViewModel *)0x0) {
    File::createViewModelInstance(*(ViewModel **)(in_x0 + 0x60));
    return;
  }
  *in_x8 = 0;
  return;
}


// ===== 004f1ec4  rive::ViewModel::createFromInstance =====

/* rive::ViewModel::createFromInstance(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall rive::ViewModel::createFromInstance(ViewModel *this,basic_string *param_1)

{
  undefined8 *in_x8;
  
  if (*(basic_string **)(this + 0x60) != (basic_string *)0x0) {
    File::createViewModelInstance(*(basic_string **)(this + 0x60),(basic_string *)(this + 0x10));
    return;
  }
  *in_x8 = 0;
  return;
}


// ===== 004f1ee4  rive::ViewModelBase::clone =====

/* rive::ViewModelBase::clone() const */

long * __thiscall rive::ViewModelBase::clone(ViewModelBase *this)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)operator_new(0x68);
  plVar2[1] = 0;
  *plVar2 = 0;
  plVar2[3] = 0;
  *(undefined8 *)(plVar2 + 2) = 0;
  puVar1 = PTR_vtable_0067d2b0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  plVar2[5] = 0;
  plVar2[4] = 0;
  plVar2[7] = 0;
  plVar2[6] = 0;
  *(undefined4 *)(plVar2 + 5) = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[9] = 0;
  plVar2[8] = 0;
  plVar2[0xb] = 0;
  plVar2[10] = 0;
  plVar2[0xc] = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  return plVar2;
}


// ===== 004f1f50  FUN_004f1f50 =====

void FUN_004f1f50(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d278 + 0x10);
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004f1f94  rive::ViewModelInstance::~ViewModelInstance =====

/* WARNING: Removing unreachable block (ram,0x004f20a0) */
/* rive::ViewModelInstance::~ViewModelInstance() */

void __thiscall rive::ViewModelInstance::~ViewModelInstance(ViewModelInstance *this)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  void *pvVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  plVar9 = *(long **)(this + 0xa8);
  plVar7 = *(long **)(this + 0xb0);
  *(undefined **)this = PTR_vtable_0067d518 + 0x10;
  if (plVar9 != plVar7) {
    do {
      uVar2 = (**(code **)(*(long *)*plVar9 + 0x18))((long *)*plVar9,0x1bc);
      if ((uVar2 & 1) != 0) {
        lVar10 = *plVar9;
        plVar5 = *(long **)(lVar10 + 0x120);
        if (plVar5 != (long *)0x0) {
          FUN_00340fb0(1,(long)plVar5 + 0xa4);
          iVar1 = FUN_00340fe0(0xffffffff,(long)plVar5 + 0xa4);
          if (iVar1 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5);
          }
          plVar5 = *(long **)(lVar10 + 0x120);
          if (plVar5 != (long *)0x0) {
            FUN_00340fb0(1,(long)plVar5 + 0xa4);
          }
          puVar3 = (undefined8 *)plVar5[0x19];
          puVar11 = (undefined8 *)plVar5[0x18];
          puVar12 = puVar11;
          for (; (puVar11 != puVar3 && (puVar12 = puVar11, (ViewModelInstance *)*puVar11 != this));
              puVar11 = puVar11 + 1) {
            puVar12 = puVar3;
          }
          if ((puVar12 == puVar3) || (puVar11 = puVar12 + 1, puVar4 = puVar12, puVar11 == puVar3)) {
            if (puVar12 == puVar3) goto LAB_004f20e4;
LAB_004f2088:
            plVar5[0x19] = (long)puVar12;
          }
          else {
            do {
              puVar12 = puVar4;
              if ((ViewModelInstance *)*puVar11 != this) {
                puVar12 = puVar4 + 1;
                *puVar4 = (ViewModelInstance *)*puVar11;
              }
              puVar11 = puVar11 + 1;
              puVar4 = puVar12;
            } while (puVar11 != puVar3);
            if (puVar12 != (undefined8 *)plVar5[0x19]) goto LAB_004f2088;
LAB_004f20e4:
            if (plVar5 == (long *)0x0) goto LAB_004f1fcc;
          }
          iVar1 = FUN_00340fe0(0xffffffff,(long)plVar5 + 0xa4);
          if (iVar1 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
      }
LAB_004f1fcc:
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar7);
    plVar7 = *(long **)(this + 0xa8);
    plVar5 = *(long **)(this + 0xb0);
    plVar9 = plVar5;
    while (plVar5 != plVar7) {
      plVar5 = plVar5 + -1;
      plVar6 = (long *)*plVar5;
      plVar9 = plVar7;
      if ((plVar6 != (long *)0x0) &&
         (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x8c), iVar1 == 1)) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  plVar7 = *(long **)(this + 0x118);
  *(long **)(this + 0xb0) = plVar9;
  if ((plVar7 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar7 + 5), iVar1 == 1)) {
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  puVar11 = (undefined8 *)*(void **)(this + 0x100);
  while (puVar11 != (undefined8 *)0x0) {
    pvVar8 = (void *)*puVar11;
    operator_delete(puVar11);
    puVar11 = (undefined8 *)pvVar8;
  }
  pvVar8 = *(void **)(this + 0xf0);
  *(undefined8 *)(this + 0xf0) = 0;
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  pvVar8 = *(void **)(this + 0xd8);
  if (pvVar8 != (void *)0x0) {
    *(void **)(this + 0xe0) = pvVar8;
    operator_delete(pvVar8);
  }
  pvVar8 = *(void **)(this + 0xc0);
  if (pvVar8 != (void *)0x0) {
    *(void **)(this + 200) = pvVar8;
    operator_delete(pvVar8);
  }
  puVar11 = *(undefined8 **)(this + 0xa8);
  if (puVar11 != (undefined8 *)0x0) {
    puVar12 = *(undefined8 **)(this + 0xb0);
    puVar3 = puVar11;
    if (puVar12 != puVar11) {
      do {
        puVar12 = puVar12 + -1;
        plVar9 = (long *)*puVar12;
        if ((plVar9 != (long *)0x0) &&
           (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar9 + 0x8c), iVar1 == 1)) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      } while (puVar12 != puVar11);
      puVar3 = *(undefined8 **)(this + 0xa8);
    }
    *(undefined8 **)(this + 0xb0) = puVar11;
    operator_delete(puVar3);
  }
  pvVar8 = *(void **)(this + 0x88);
  *(undefined **)this = PTR_vtable_0067ced8 + 0x10;
  if (pvVar8 != (void *)0x0) {
    *(void **)(this + 0x90) = pvVar8;
    operator_delete(pvVar8);
  }
  pvVar8 = *(void **)(this + 0x68);
  *(undefined **)this = PTR_vtable_0067cee0 + 0x10;
  if (pvVar8 != (void *)0x0) {
    *(void **)(this + 0x70) = pvVar8;
    operator_delete(pvVar8);
  }
  pvVar8 = *(void **)(this + 0x48);
  if (pvVar8 != (void *)0x0) {
    *(void **)(this + 0x50) = pvVar8;
    operator_delete(pvVar8);
  }
  *(undefined ***)this = &PTR_FUN_00678650;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
    return;
  }
  return;
}


// ===== 004f22c4  rive::ViewModelInstance::~ViewModelInstance =====

/* rive::ViewModelInstance::~ViewModelInstance() */

void __thiscall rive::ViewModelInstance::~ViewModelInstance(ViewModelInstance *this)

{
  ~ViewModelInstance(this);
  operator_delete(this);
  return;
}


// ===== 004f22e8  FUN_004f22e8 =====

undefined8 FUN_004f22e8(void)

{
  return 0x1b5;
}


// ===== 004f22f0  FUN_004f22f0 =====

bool FUN_004f22f0(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffff) - 10 < 2 || (param_2 & 0xffff) == 0x1b5;
}


// ===== 004f2310  FUN_004f2310 =====

void FUN_004f2310(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  if (param_2 == 4) {
    pcVar10 = (char *)param_3[2];
    do {
      if ((char *)(*param_3 + param_3[1]) <= pcVar10) {
        param_3[2] = *param_3 + param_3[1];
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004f2470;
      }
      pcVar11 = pcVar10 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar2 < '\0');
    param_3[2] = (long)pcVar11;
    if ((char)param_3[3] == '\0') {
      rive::BinaryReader::readString((ulong)param_3);
    }
    else {
LAB_004f2470:
      local_40 = 0;
      uStack_38 = 0;
      local_30 = 0;
    }
    if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x20));
    }
    *(undefined8 *)(param_1 + 0x18) = uStack_38;
    *(undefined8 *)(param_1 + 0x10) = local_40;
    *(undefined8 *)(param_1 + 0x20) = local_30;
  }
  else if (param_2 == 5) {
    uVar12 = 0;
    uVar6 = 0;
    pbVar8 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar8) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004f2454;
      }
      pbVar9 = pbVar8 + 1;
      bVar1 = *pbVar8;
      uVar3 = uVar12 & 0x3f;
      uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar8 = pbVar9;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar9;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004f2454:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x28) = (int)uVar6;
  }
  else {
    if (param_2 != 0x236) {
      uVar5 = 0;
      goto LAB_004f24b8;
    }
    uVar12 = 0;
    uVar6 = 0;
    pbVar8 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar8) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004f24a8;
      }
      pbVar9 = pbVar8 + 1;
      bVar1 = *pbVar8;
      uVar3 = uVar12 & 0x3f;
      uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar8 = pbVar9;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar9;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004f24a8:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xa0) = (int)uVar6;
  }
  uVar5 = 1;
LAB_004f24b8:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 004f24dc  rive::ViewModelInstance::clone =====

/* rive::ViewModelInstance::clone() const */

ViewModelInstance * __thiscall rive::ViewModelInstance::clone(ViewModelInstance *this)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  ViewModelInstance *this_00;
  ViewModelInstanceValue *pVVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  this_00 = (ViewModelInstance *)operator_new(0x120);
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  *(undefined8 *)(this_00 + 0xe8) = 0;
  *(undefined8 *)(this_00 + 0xe0) = 0;
  *(undefined8 *)(this_00 + 0xf8) = 0;
  *(undefined8 *)(this_00 + 0xf0) = 0;
  *(undefined8 *)(this_00 + 0x108) = 0;
  *(undefined8 *)(this_00 + 0x100) = 0;
  *(undefined8 *)(this_00 + 0x118) = 0;
  *(undefined8 *)(this_00 + 0x110) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined4 *)(this_00 + 8) = 0xffffffff;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined2 *)(this_00 + 0x60) = 0xfffe;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  puVar3 = PTR_vtable_0067d518;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined **)this_00 = puVar3 + 0x10;
  *(undefined4 *)(this_00 + 0x110) = 0x3f800000;
  uVar2 = *(undefined4 *)(this + 0xa0);
  *(undefined8 *)(this_00 + 0xd0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xe0) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined8 *)(this_00 + 0xf0) = 0;
  *(undefined8 *)(this_00 + 0xe8) = 0;
  *(undefined8 *)(this_00 + 0x100) = 0;
  *(undefined8 *)(this_00 + 0xf8) = 0;
  *(undefined8 *)(this_00 + 0x108) = 0;
  *(undefined4 *)(this_00 + 0xa0) = uVar2;
  *(undefined4 *)(this_00 + 0xa4) = 1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_00 + 0x10),(basic_string *)(this + 0x10));
  lVar6 = *(long *)(this + 0x40);
  *(undefined4 *)(this_00 + 0x28) = *(undefined4 *)(this + 0x28);
  if (lVar6 == 0) {
    puVar1 = *(undefined8 **)(this + 0xb0);
    for (puVar8 = *(undefined8 **)(this + 0xa8); puVar8 != puVar1; puVar8 = puVar8 + 1) {
      plVar7 = (long *)*puVar8;
      if (plVar7 != (long *)0x0) {
        FUN_00340fb0(1,(long)plVar7 + 0x8c);
      }
      pVVar5 = (ViewModelInstanceValue *)(**(code **)(*plVar7 + 0x28))(plVar7);
      addValue(this_00,pVVar5);
      iVar4 = FUN_00340fe0(0xffffffff,(long)plVar7 + 0x8c);
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  plVar7 = *(long **)(this_00 + 0x118);
  lVar6 = *(long *)(this + 0x118);
  if ((plVar7 != (long *)0x0) && (iVar4 = FUN_00340fe0(0xffffffff,plVar7 + 5), iVar4 == 1)) {
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  FUN_00340fb0(1,lVar6 + 0x28);
  *(long *)(this_00 + 0x118) = lVar6;
  return this_00;
}


// ===== 004f2674  rive::ViewModelInstance::import =====

/* rive::ViewModelInstance::import(rive::ImportStack&) */

File * __thiscall rive::ViewModelInstance::import(ViewModelInstance *this,ImportStack *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  File *pFVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if (uVar5 != 0) {
    uVar12 = NEON_cnt(uVar5,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar6 < 2) {
      uVar7 = (ulong)((uint)uVar5 - 1) & 0x1b3;
    }
    else {
      uVar7 = 0x1b3;
      if (uVar5 < 0x1b4) {
        uVar1 = (uint)uVar5 & 0xffff;
        uVar2 = 0;
        if ((uVar5 & 0xffff) != 0) {
          uVar2 = 0x1b3 / uVar1;
        }
        uVar7 = (ulong)(0x1b3 - uVar2 * uVar1);
      }
    }
    plVar8 = *(long **)(*(long *)param_1 + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == 0x1b3) {
          if ((short)plVar8[2] == 0x1b3) {
            lVar10 = plVar8[3];
            if (lVar10 == 0) {
              return (File *)0x1;
            }
            ViewModel::addInstance(*(ViewModel **)(lVar10 + 8),this);
            uVar5 = *(ulong *)(param_1 + 8);
            if (uVar5 == 0) goto LAB_004f2818;
            uVar12 = NEON_cnt(uVar5,1);
            uVar11 = NEON_uaddlv(uVar12,1);
            uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
            uVar6 = (ulong)~(uint)uVar5 & 1;
            if (1 < uVar7) {
              uVar6 = (ulong)(uVar5 - 1 != 0);
            }
            plVar8 = *(long **)(*(long *)param_1 + uVar6 * 8);
            if (plVar8 == (long *)0x0) goto LAB_004f2818;
            goto LAB_004f27bc;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar9 = uVar9 & uVar5 - 1;
          }
          else if (uVar5 <= uVar9) {
            uVar3 = 0;
            if (uVar5 != 0) {
              uVar3 = uVar9 / uVar5;
            }
            uVar9 = uVar9 - uVar3 * uVar5;
          }
          if (uVar9 != uVar7) {
            return (File *)0x1;
          }
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  return (File *)0x1;
LAB_004f27bc:
  plVar8 = (long *)*plVar8;
  if (plVar8 == (long *)0x0) goto LAB_004f2818;
  uVar9 = plVar8[1];
  if (uVar9 == 1) {
    if (*(short *)(plVar8 + 2) == 1) {
      if (plVar8[3] != 0) {
        pFVar4 = (File *)Component::import((Component *)this,param_1);
        return pFVar4;
      }
      goto LAB_004f2818;
    }
    goto LAB_004f27bc;
  }
  if (uVar7 < 2) {
    uVar9 = uVar9 & uVar5 - 1;
  }
  else if (uVar5 <= uVar9) {
    uVar3 = 0;
    if (uVar5 != 0) {
      uVar3 = uVar9 / uVar5;
    }
    uVar9 = uVar9 - uVar3 * uVar5;
  }
  if (uVar9 != uVar6) {
LAB_004f2818:
    pFVar4 = *(File **)(lVar10 + 0x10);
    if (pFVar4 != (File *)0x0) {
      File::addFileViewModelInstance(pFVar4,this);
      pFVar4 = (File *)0x0;
    }
    return pFVar4;
  }
  goto LAB_004f27bc;
}


// ===== 004f2830  FUN_004f2830 =====

void FUN_004f2830(void)

{
  return;
}


// ===== 004f2834  rive::ViewModelInstance::addValue =====

/* rive::ViewModelInstance::addValue(rive::ViewModelInstanceValue*) */

void __thiscall
rive::ViewModelInstance::addValue(ViewModelInstance *this,ViewModelInstanceValue *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  void *pvVar6;
  char cVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  char local_64 [4];
  char local_60 [4];
  char local_5c [4];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  for (puVar1 = *(undefined8 **)(this + 0xa8); puVar1 != *(undefined8 **)(this + 0xb0);
      puVar1 = puVar1 + 1) {
    if ((ViewModelInstanceValue *)*puVar1 == param_1) goto LAB_004f2a58;
  }
  if (param_1 != (ViewModelInstanceValue *)0x0) {
    plVar4 = *(long **)(param_1 + 0xa8);
    *(ViewModelInstance **)(param_1 + 0x108) = this;
    if (plVar4 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x234);
      if ((uVar5 & 1) == 0) {
        cVar7 = *(char *)(*(long *)(param_1 + 0xa8) + 0x28);
        if ((cVar7 == '\0') ||
           (lVar9 = *(long *)(param_1 + 0x108), local_5c[0] = cVar7, cVar7 == '\0'))
        goto LAB_004f28f0;
        pcVar8 = local_5c;
      }
      else {
        lVar9 = *(long *)(param_1 + 0x108);
        pcVar8 = local_60;
        local_60[0] = '\x0f';
        cVar7 = '\x0f';
      }
      lVar9 = FUN_004f2ac8(lVar9 + 0xf0,cVar7,pcVar8);
      *(ViewModelInstanceValue **)(lVar9 + 0x18) = param_1;
    }
  }
LAB_004f28f0:
  if (((*(long *)(param_1 + 0xa8) != 0) &&
      (cVar7 = *(char *)(*(long *)(param_1 + 0xa8) + 0x28), cVar7 != '\0')) &&
     (local_64[0] = cVar7, cVar7 != '\0')) {
    lVar9 = FUN_004f2ac8(this + 0xf0,cVar7,local_64);
    *(ViewModelInstanceValue **)(lVar9 + 0x18) = param_1;
  }
  puVar1 = *(undefined8 **)(this + 0xb0);
  if (puVar1 < *(undefined8 **)(this + 0xb8)) {
    puVar18 = puVar1 + 1;
    *puVar1 = param_1;
    goto LAB_004f2a54;
  }
  puVar17 = *(undefined8 **)(this + 0xa8);
  lVar9 = (long)puVar1 - (long)puVar17 >> 3;
  uVar5 = lVar9 + 1;
  if (uVar5 >> 0x3d != 0) {
    FUN_003d236c();
LAB_004f2ac4:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar10 = (long)*(undefined8 **)(this + 0xb8) - (long)puVar17;
  uVar12 = (long)uVar10 >> 2;
  if (uVar12 <= uVar5) {
    uVar12 = uVar5;
  }
  if (0x7ffffffffffffff7 < uVar10) {
    uVar12 = 0x1fffffffffffffff;
  }
  if (uVar12 == 0) {
    pvVar6 = (void *)0x0;
  }
  else {
    if (uVar12 >> 0x3d != 0) goto LAB_004f2ac4;
    pvVar6 = operator_new(uVar12 << 3);
  }
  puVar11 = (undefined8 *)((long)pvVar6 + lVar9 * 8);
  puVar18 = puVar11 + 1;
  *puVar11 = param_1;
  if ((long)puVar1 - (long)puVar17 != 0) {
    uVar5 = ((long)puVar1 - (long)puVar17) - 8;
    puVar19 = puVar1;
    if ((0x77 < uVar5) &&
       ((puVar11 <= (undefined8 *)((long)puVar1 + (-8 - (uVar5 & 0xfffffffffffffff8))) ||
        (puVar1 <= (undefined8 *)
                   ((long)pvVar6 +
                   (((long)puVar1 - (long)puVar17) - (uVar5 & 0xfffffffffffffff8)) + -8))))) {
      puVar15 = puVar11 + -2;
      uVar5 = (uVar5 >> 3) + 1;
      uVar14 = uVar5 & 0x3ffffffffffffffc;
      puVar19 = puVar1 + -uVar14;
      uVar10 = uVar14;
      do {
        puVar16 = puVar1 + -4;
        uVar22 = puVar1[-3];
        uVar21 = *puVar16;
        uVar20 = puVar1[-1];
        uVar13 = puVar1[-2];
        uVar10 = uVar10 - 4;
        puVar1[-3] = 0;
        *puVar16 = 0;
        puVar1[-1] = 0;
        puVar1[-2] = 0;
        puVar15[-1] = uVar22;
        puVar15[-2] = uVar21;
        puVar15[1] = uVar20;
        *puVar15 = uVar13;
        puVar15 = puVar15 + -4;
        puVar1 = puVar16;
      } while (uVar10 != 0);
      puVar11 = puVar11 + -uVar14;
      if (uVar5 == uVar14) goto LAB_004f2a34;
    }
    do {
      puVar19 = puVar19 + -1;
      uVar13 = *puVar19;
      *puVar19 = 0;
      puVar11 = puVar11 + -1;
      *puVar11 = uVar13;
    } while (puVar19 != puVar17);
  }
LAB_004f2a34:
  puVar1 = *(undefined8 **)(this + 0xa8);
  puVar17 = *(undefined8 **)(this + 0xb0);
  *(undefined8 **)(this + 0xa8) = puVar11;
  *(undefined8 **)(this + 0xb0) = puVar18;
  *(void **)(this + 0xb8) = (void *)((long)pvVar6 + uVar12 * 8);
  while (puVar17 != puVar1) {
    puVar17 = puVar17 + -1;
    plVar4 = (long *)*puVar17;
    if ((plVar4 != (long *)0x0) &&
       (iVar3 = FUN_00340fe0(0xffffffff,(long)plVar4 + 0x8c), iVar3 == 1)) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1);
  }
LAB_004f2a54:
  *(undefined8 **)(this + 0xb0) = puVar18;
LAB_004f2a58:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f2ac8  FUN_004f2ac8 =====

void FUN_004f2ac8(long *param_1,ulong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x23;
  undefined2 uVar15;
  undefined8 uVar16;
  float fVar17;
  
  uVar14 = param_1[1];
  param_2 = param_2 & 0xff;
  if (uVar14 != 0) {
    uVar16 = NEON_cnt(uVar14,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar8 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar8 < 2) {
      unaff_x23 = (int)uVar14 - 1 & param_2;
    }
    else {
      unaff_x23 = param_2;
      if (uVar14 <= param_2) {
        uVar10 = 0;
        if (uVar14 != 0) {
          uVar10 = param_2 / uVar14;
        }
        unaff_x23 = param_2 - uVar10 * uVar14;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x23 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar10 = plVar7[1];
        if (uVar10 == param_2) {
          if ((uint)*(byte *)(plVar7 + 2) == (uint)param_2) {
            return;
          }
        }
        else {
          if (uVar8 < 2) {
            uVar10 = uVar10 & uVar14 - 1;
          }
          else if (uVar14 <= uVar10) {
            uVar6 = 0;
            if (uVar14 != 0) {
              uVar6 = uVar10 / uVar14;
            }
            uVar10 = uVar10 - uVar6 * uVar14;
          }
          if (uVar10 != unaff_x23) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  plVar7 = (long *)operator_new(0x20);
  lVar4 = param_1[3];
  uVar1 = *param_3;
  fVar17 = *(float *)(param_1 + 4);
  *plVar7 = 0;
  plVar7[1] = param_2;
  *(undefined1 *)(plVar7 + 2) = uVar1;
  plVar7[3] = 0;
  if ((uVar14 == 0) || (fVar17 * (float)uVar14 < (float)(lVar4 + 1))) {
    if (uVar14 < 3) {
      uVar8 = 1;
    }
    else {
      uVar8 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar8 = uVar8 | uVar14 << 1;
    uVar10 = (ulong)((float)(lVar4 + 1) / fVar17);
    if (uVar8 <= uVar10) {
      uVar8 = uVar10;
    }
    if (uVar8 - 1 == 0) {
      uVar8 = 2;
    }
    else if ((uVar8 & uVar8 - 1) != 0) {
      uVar8 = std::__ndk1::__next_prime(uVar8);
      uVar14 = param_1[1];
    }
    if (uVar14 < uVar8) {
LAB_004f2c38:
      if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      pvVar3 = operator_new(uVar8 << 3);
      pvVar5 = (void *)*param_1;
      *param_1 = (long)pvVar3;
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5);
      }
      uVar14 = 0;
      param_1[1] = uVar8;
      do {
        *(undefined8 *)(*param_1 + uVar14 * 8) = 0;
        uVar14 = uVar14 + 1;
      } while (uVar8 != uVar14);
      plVar9 = (long *)param_1[2];
      uVar14 = uVar8;
      if (plVar9 != (long *)0x0) {
        uVar10 = plVar9[1];
        uVar16 = NEON_cnt(uVar8,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        uVar6 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
        if (uVar6 < 2) {
          uVar10 = uVar10 & uVar8 - 1;
        }
        else if (uVar8 <= uVar10) {
          uVar13 = 0;
          if (uVar8 != 0) {
            uVar13 = uVar10 / uVar8;
          }
          uVar10 = uVar10 - uVar13 * uVar8;
        }
        *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar9;
        if (plVar12 != (long *)0x0) {
          do {
            uVar13 = plVar12[1];
            if (uVar6 < 2) {
              uVar13 = uVar13 & uVar8 - 1;
            }
            else if (uVar8 <= uVar13) {
              uVar2 = 0;
              if (uVar8 != 0) {
                uVar2 = uVar13 / uVar8;
              }
              uVar13 = uVar13 - uVar2 * uVar8;
            }
            if (uVar13 != uVar10) {
              if (*(long *)(*param_1 + uVar13 * 8) == 0) {
                *(long **)(*param_1 + uVar13 * 8) = plVar9;
                uVar10 = uVar13;
              }
              else {
                *plVar9 = *plVar12;
                *plVar12 = **(long **)(*param_1 + uVar13 * 8);
                **(undefined8 **)(*param_1 + uVar13 * 8) = plVar12;
                plVar12 = plVar9;
              }
            }
            plVar9 = plVar12;
            plVar12 = (long *)*plVar9;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
    else if (uVar8 < uVar14) {
      uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar14 < 3) {
LAB_004f2e70:
        uVar10 = std::__ndk1::__next_prime(uVar10);
      }
      else {
        uVar16 = NEON_cnt(uVar14,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15)) goto LAB_004f2e70;
        if (1 < uVar10) {
          uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
        }
      }
      if (uVar8 <= uVar10) {
        uVar8 = uVar10;
      }
      if (uVar8 < uVar14) {
        if (uVar8 != 0) goto LAB_004f2c38;
        pvVar3 = (void *)*param_1;
        *param_1 = 0;
        if (pvVar3 != (void *)0x0) {
          operator_delete(pvVar3);
        }
        param_1[1] = 0;
        uVar14 = 0;
      }
      else {
        uVar14 = param_1[1];
      }
    }
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x23 = (int)uVar14 - 1 & param_2;
    }
    else {
      unaff_x23 = param_2;
      if (uVar14 <= param_2) {
        uVar8 = 0;
        if (uVar14 != 0) {
          uVar8 = param_2 / uVar14;
        }
        unaff_x23 = param_2 - uVar8 * uVar14;
      }
    }
  }
  lVar4 = *param_1;
  plVar9 = *(long **)(lVar4 + unaff_x23 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    lVar11 = *plVar9;
    *plVar9 = (long)plVar7;
    *plVar7 = lVar11;
    *(long **)(lVar4 + unaff_x23 * 8) = plVar9;
    if (*plVar7 == 0) goto LAB_004f2e50;
    uVar8 = *(ulong *)(*plVar7 + 8);
    if ((uVar14 & uVar14 - 1) == 0) {
      uVar8 = uVar8 & uVar14 - 1;
    }
    else if (uVar14 <= uVar8) {
      uVar10 = 0;
      if (uVar14 != 0) {
        uVar10 = uVar8 / uVar14;
      }
      uVar8 = uVar8 - uVar10 * uVar14;
    }
    plVar9 = (long *)(*param_1 + uVar8 * 8);
  }
  else {
    *plVar7 = *plVar9;
  }
  *plVar9 = (long)plVar7;
LAB_004f2e50:
  param_1[3] = param_1[3] + 1;
  return;
}


// ===== 004f2ecc  rive::ViewModelInstance::removeParent =====

/* WARNING: Removing unreachable block (ram,0x004f2f68) */
/* rive::ViewModelInstance::removeParent(rive::ViewModelInstance*) */

void __thiscall
rive::ViewModelInstance::removeParent(ViewModelInstance *this,ViewModelInstance *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(this + 200);
  puVar4 = *(undefined8 **)(this + 0xc0);
  puVar2 = puVar4;
  for (; (puVar4 != puVar1 && (puVar2 = puVar4, (ViewModelInstance *)*puVar4 != param_1));
      puVar4 = puVar4 + 1) {
    puVar2 = puVar1;
  }
  if ((puVar2 != puVar1) && (puVar4 = puVar2 + 1, puVar3 = puVar2, puVar4 != puVar1)) {
    do {
      puVar2 = puVar3;
      if ((ViewModelInstance *)*puVar4 != param_1) {
        puVar2 = puVar3 + 1;
        *puVar3 = (ViewModelInstance *)*puVar4;
      }
      puVar4 = puVar4 + 1;
      puVar3 = puVar2;
    } while (puVar4 != puVar1);
    puVar1 = *(undefined8 **)(this + 200);
  }
  if (puVar2 != puVar1) {
    *(undefined8 **)(this + 200) = puVar2;
  }
  return;
}


// ===== 004f2f8c  rive::ViewModelInstance::propertyValue =====

/* rive::ViewModelInstance::propertyValue(rive::SymbolType, rive::ViewModelInstanceValue*) */

void __thiscall
rive::ViewModelInstance::propertyValue(ViewModelInstance *this,uint param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c[0] = (undefined1)param_2;
  if ((param_2 & 0xff) != 0) {
    lVar2 = FUN_004f2ac8(this + 0xf0,param_2,local_2c);
    *(undefined8 *)(lVar2 + 0x18) = param_3;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f2fec  rive::ViewModelInstance::propertyValue =====

/* rive::ViewModelInstance::propertyValue(unsigned int) */

long * __thiscall rive::ViewModelInstance::propertyValue(ViewModelInstance *this,uint param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  
  puVar1 = *(undefined8 **)(this + 0xa8);
  puVar2 = *(undefined8 **)(this + 0xb0);
  while( true ) {
    if (puVar1 == puVar2) {
      return (long *)0x0;
    }
    plVar5 = (long *)*puVar1;
    if (plVar5 != (long *)0x0) {
      FUN_00340fb0(1,(long)plVar5 + 0x8c);
    }
    uVar3 = *(uint *)(plVar5 + 0x11);
    iVar4 = FUN_00340fe0(0xffffffff,(long)plVar5 + 0x8c);
    if (iVar4 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    if (uVar3 == param_1) break;
    puVar1 = puVar1 + 1;
  }
  return plVar5;
}


// ===== 004f307c  rive::ViewModelInstance::replaceViewModelByName =====

/* rive::ViewModelInstance::replaceViewModelByName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   rive::rcp<rive::ViewModelInstance>) */

void __thiscall
rive::ViewModelInstance::replaceViewModelByName
          (ViewModelInstance *this,byte *param_1,undefined8 *param_3)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte *__s2;
  undefined8 *puVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  long *plVar12;
  ViewModelInstance *this_00;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  plVar12 = *(long **)(*(long *)(this + 0x118) + 0x30);
  plVar13 = *(long **)(*(long *)(this + 0x118) + 0x38);
  if (plVar12 != plVar13) {
    sVar2 = *(size_t *)(param_1 + 8);
    __s2 = *(byte **)(param_1 + 0x10);
    if ((*param_1 & 1) == 0) {
      __s2 = param_1 + 1;
      sVar2 = (ulong)(*param_1 >> 1);
    }
    do {
      lVar14 = *plVar12;
      bVar5 = *(byte *)(lVar14 + 0x10);
      uVar9 = (ulong)(bVar5 >> 1);
      sVar1 = uVar9;
      if ((bVar5 & 1) != 0) {
        sVar1 = *(size_t *)(lVar14 + 0x18);
      }
      if (sVar1 == sVar2) {
        if ((bVar5 & 1) == 0) {
          if (bVar5 < 2) {
LAB_004f3150:
            puVar3 = *(undefined8 **)(this + 0xa8);
            puVar4 = *(undefined8 **)(this + 0xb0);
            goto joined_r0x004f3158;
          }
          pbVar10 = (byte *)(lVar14 + 0x11);
          pbVar11 = __s2;
          while (*pbVar10 == *pbVar11) {
            uVar9 = uVar9 - 1;
            pbVar10 = pbVar10 + 1;
            pbVar11 = pbVar11 + 1;
            if (uVar9 == 0) {
              if (lVar14 == 0) goto LAB_004f327c;
              goto LAB_004f3150;
            }
          }
        }
        else {
          iVar7 = memcmp(*(void **)(lVar14 + 0x20),__s2,*(size_t *)(lVar14 + 0x18));
          if (iVar7 == 0) goto LAB_004f3150;
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar13);
  }
LAB_004f327c:
  uVar8 = 0;
LAB_004f3280:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
joined_r0x004f3158:
  if (puVar3 == puVar4) goto LAB_004f327c;
  plVar12 = (long *)*puVar3;
  if (plVar12 != (long *)0x0) {
    FUN_00340fb0(1,(long)plVar12 + 0x8c);
  }
  lVar15 = plVar12[0x15];
  if (lVar15 == lVar14) {
    plVar13 = (long *)*param_3;
    if ((int)plVar13[0x14] == *(int *)(lVar14 + 0x30)) {
      this_00 = (ViewModelInstance *)plVar12[0x24];
      if (this_00 == (ViewModelInstance *)0x0) {
LAB_004f31b4:
        FUN_00340fb0(1,(long)plVar13 + 0xa4);
      }
      else {
        FUN_00340fb0(1,this_00 + 0xa4);
        plVar13 = (long *)*param_3;
        if (plVar13 != (long *)0x0) goto LAB_004f31b4;
      }
      local_70 = plVar13;
      FUN_004f32bc(plVar12,&local_70);
      plVar13 = local_70;
      if ((local_70 != (long *)0x0) &&
         (iVar7 = FUN_00340fe0(0xffffffff,(long)local_70 + 0xa4), iVar7 == 1)) {
        (**(code **)(*plVar13 + 8))(plVar13);
      }
      rebindDependents(this);
      if (this_00 != (ViewModelInstance *)0x0) {
        rebindProperties(this_00);
        iVar7 = FUN_00340fe0(0xffffffff,this_00 + 0xa4);
        if (iVar7 == 1) {
          (**(code **)(*(long *)this_00 + 8))(this_00);
        }
        goto LAB_004f317c;
      }
    }
    else {
      this_00 = (ViewModelInstance *)0x1;
    }
  }
  else {
LAB_004f317c:
    this_00 = (ViewModelInstance *)0x0;
  }
  iVar7 = FUN_00340fe0(0xffffffff,(long)plVar12 + 0x8c);
  if (iVar7 == 1) {
    (**(code **)(*plVar12 + 8))(plVar12);
  }
  if (lVar15 == lVar14) {
    if ((int)this_00 == 0) {
      uVar8 = 1;
      goto LAB_004f3280;
    }
    goto LAB_004f327c;
  }
  puVar3 = puVar3 + 1;
  goto joined_r0x004f3158;
}


// ===== 004f32bc  FUN_004f32bc =====

/* WARNING: Removing unreachable block (ram,0x004f3370) */

void FUN_004f32bc(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ViewModelInstance *this;
  long *plVar7;
  long lVar8;
  
  lVar8 = param_1[0x24];
  plVar1 = param_1 + 0x24;
  if ((lVar8 != 0) && (lVar6 = param_1[0x25], lVar6 != 0)) {
    plVar5 = *(long **)(lVar8 + 200);
    plVar7 = *(long **)(lVar8 + 0xc0);
    plVar3 = plVar7;
    for (; (plVar7 != plVar5 && (plVar3 = plVar7, *plVar7 != lVar6)); plVar7 = plVar7 + 1) {
      plVar3 = plVar5;
    }
    if ((plVar3 != plVar5) && (plVar7 = plVar3 + 1, plVar4 = plVar3, plVar7 != plVar5)) {
      do {
        plVar3 = plVar4;
        if (*plVar7 != lVar6) {
          plVar3 = plVar4 + 1;
          *plVar4 = *plVar7;
        }
        plVar7 = plVar7 + 1;
        plVar4 = plVar3;
      } while (plVar7 != plVar5);
      plVar5 = *(long **)(lVar8 + 200);
    }
    if (plVar3 != plVar5) {
      *(long **)(lVar8 + 200) = plVar3;
    }
  }
  if (plVar1 != param_2) {
    this = (ViewModelInstance *)*param_2;
    if (this != (ViewModelInstance *)0x0) {
      FUN_00340fb0(1,this + 0xa4);
    }
    plVar7 = (long *)*plVar1;
    *plVar1 = (long)this;
    if (plVar7 == (long *)0x0) goto LAB_004f33e0;
    iVar2 = FUN_00340fe0(0xffffffff,(long)plVar7 + 0xa4);
    if (iVar2 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  this = (ViewModelInstance *)*plVar1;
LAB_004f33e0:
  if ((this != (ViewModelInstance *)0x0) &&
     ((ViewModelInstance *)param_1[0x25] != (ViewModelInstance *)0x0)) {
    rive::ViewModelInstance::addParent(this,(ViewModelInstance *)param_1[0x25]);
  }
                    /* WARNING: Could not recover jumptable at 0x004f3410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa8))(param_1);
  return;
}


// ===== 004f3414  rive::ViewModelInstance::rebindDependents =====

/* rive::ViewModelInstance::rebindDependents() */

void __thiscall rive::ViewModelInstance::rebindDependents(ViewModelInstance *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0xe0);
  for (puVar2 = *(undefined8 **)(this + 0xd8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x18))();
  }
  puVar1 = *(undefined8 **)(this + 200);
  for (puVar2 = *(undefined8 **)(this + 0xc0); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    rebindDependents((ViewModelInstance *)*puVar2);
  }
  return;
}


// ===== 004f3478  rive::ViewModelInstance::rebindProperties =====

/* rive::ViewModelInstance::rebindProperties() */

void __thiscall rive::ViewModelInstance::rebindProperties(ViewModelInstance *this)

{
  void *__src;
  long *plVar1;
  int iVar2;
  long *plVar3;
  void *__dest;
  ulong uVar4;
  ViewModelInstance *this_00;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = *(long **)(this + 0xa8);
  plVar1 = *(long **)(this + 0xb0);
  do {
    if (plVar6 == plVar1) {
      return;
    }
    plVar3 = (long *)*plVar6;
    __src = (void *)plVar3[0x1d];
    uVar4 = plVar3[0x1e] - (long)__src;
    if (uVar4 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if ((long)uVar4 < 0) {
        FUN_004f3578();
                    /* WARNING: Subroutine does not return */
        FUN_0031fb04("vector");
      }
      __dest = operator_new(uVar4);
      memcpy(__dest,__src,uVar4);
      uVar5 = 0;
      do {
        (**(code **)(**(long **)((long)__dest + uVar5) + 8))();
        uVar5 = uVar5 + 8;
      } while (uVar4 != uVar5);
      plVar3 = (long *)*plVar6;
    }
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x1bc);
    if ((uVar4 & 1) != 0) {
      this_00 = *(ViewModelInstance **)(*plVar6 + 0x120);
      if (this_00 != (ViewModelInstance *)0x0) {
        FUN_00340fb0(1,this_00 + 0xa4);
        rebindProperties(this_00);
        iVar2 = FUN_00340fe0(0xffffffff,this_00 + 0xa4);
        if (iVar2 == 1) {
          (**(code **)(*(long *)this_00 + 8))(this_00);
        }
      }
    }
    if (__dest != (void *)0x0) {
      operator_delete(__dest);
    }
    plVar6 = plVar6 + 1;
  } while( true );
}


// ===== 004f3578  FUN_004f3578 =====

void FUN_004f3578(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004f358c  rive::ViewModelInstance::addParent =====

/* rive::ViewModelInstance::addParent(rive::ViewModelInstance*) */

void __thiscall
rive::ViewModelInstance::addParent(ViewModelInstance *this,ViewModelInstance *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (param_1 == (ViewModelInstance *)0x0) {
    return;
  }
  puVar12 = *(undefined8 **)(this + 200);
  puVar11 = *(undefined8 **)(this + 0xc0);
  puVar4 = puVar11;
  for (puVar7 = puVar11;
      (puVar7 != puVar12 && (puVar4 = puVar7, (ViewModelInstance *)*puVar7 != param_1));
      puVar7 = puVar7 + 1) {
    puVar4 = puVar12;
  }
  if (puVar4 != puVar12) {
    return;
  }
  if (puVar12 < *(undefined8 **)(this + 0xd0)) {
    puVar4 = puVar12 + 1;
    *puVar12 = param_1;
    goto LAB_004f3708;
  }
  lVar13 = (long)puVar12 - (long)puVar11;
  uVar1 = (lVar13 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_004f10a0();
LAB_004f3728:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar5 = (long)*(undefined8 **)(this + 0xd0) - (long)puVar11;
  uVar6 = (long)uVar5 >> 2;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar5) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3d != 0) goto LAB_004f3728;
    pvVar3 = operator_new(uVar6 << 3);
  }
  puVar7 = (undefined8 *)((long)pvVar3 + (lVar13 >> 3) * 8);
  puVar4 = puVar7 + 1;
  *puVar7 = param_1;
  if (puVar11 != puVar12) {
    if ((0x37 < lVar13 - 8U) && (0x1f < (ulong)((long)puVar12 + (-lVar13 - (long)pvVar3)))) {
      puVar9 = puVar7 + -2;
      puVar10 = puVar12 + -2;
      uVar1 = (lVar13 - 8U >> 3) + 1;
      uVar8 = uVar1 & 0x3ffffffffffffffc;
      puVar12 = puVar12 + -uVar8;
      uVar5 = uVar8;
      do {
        puVar2 = puVar10 + -1;
        uVar16 = puVar10[-2];
        uVar15 = puVar10[1];
        uVar14 = *puVar10;
        uVar5 = uVar5 - 4;
        puVar10 = puVar10 + -4;
        puVar9[-1] = *puVar2;
        puVar9[-2] = uVar16;
        puVar9[1] = uVar15;
        *puVar9 = uVar14;
        puVar9 = puVar9 + -4;
      } while (uVar5 != 0);
      puVar7 = puVar7 + -uVar8;
      if (uVar1 == uVar8) goto LAB_004f36ec;
    }
    do {
      puVar12 = puVar12 + -1;
      puVar7 = puVar7 + -1;
      *puVar7 = *puVar12;
    } while (puVar12 != puVar11);
    puVar11 = *(undefined8 **)(this + 0xc0);
  }
LAB_004f36ec:
  *(undefined8 **)(this + 0xc0) = puVar7;
  *(undefined8 **)(this + 200) = puVar4;
  *(void **)(this + 0xd0) = (void *)((long)pvVar3 + uVar6 * 8);
  if (puVar11 != (undefined8 *)0x0) {
    operator_delete(puVar11);
  }
LAB_004f3708:
  *(undefined8 **)(this + 200) = puVar4;
  return;
}


// ===== 004f372c  rive::ViewModelInstance::viewModel =====

/* rive::ViewModelInstance::viewModel() const */

undefined8 __thiscall rive::ViewModelInstance::viewModel(ViewModelInstance *this)

{
  return *(undefined8 *)(this + 0x118);
}


// ===== 004f3734  rive::ViewModelInstance::replaceViewModelByProperty =====

/* rive::ViewModelInstance::replaceViewModelByProperty(rive::ViewModelInstanceViewModel*,
   rive::rcp<rive::ViewModelInstance>) */

void __thiscall
rive::ViewModelInstance::replaceViewModelByProperty
          (ViewModelInstance *this,long param_1,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ViewModelInstance *this_00;
  long *plVar4;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(this + 0xa8);
  do {
    if (plVar4 == *(long **)(this + 0xb0)) {
      uVar3 = 0;
LAB_004f3844:
      if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar3);
      }
      return;
    }
    if (*plVar4 == param_1) {
      this_00 = *(ViewModelInstance **)(param_1 + 0x120);
      if (this_00 != (ViewModelInstance *)0x0) {
        FUN_00340fb0(1,this_00 + 0xa4);
        param_1 = *plVar4;
      }
      plVar4 = (long *)*param_3;
      local_50 = plVar4;
      if (plVar4 == (long *)0x0) {
        FUN_004f32bc(param_1,&local_50);
      }
      else {
        FUN_00340fb0(1,(long)plVar4 + 0xa4);
        FUN_004f32bc(param_1,&local_50);
        iVar2 = FUN_00340fe0(0xffffffff,(long)plVar4 + 0xa4);
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
      rebindDependents(this);
      if (this_00 != (ViewModelInstance *)0x0) {
        rebindProperties(this_00);
        iVar2 = FUN_00340fe0(0xffffffff,this_00 + 0xa4);
        if (iVar2 == 1) {
          (**(code **)(*(long *)this_00 + 8))(this_00);
        }
      }
      uVar3 = 1;
      goto LAB_004f3844;
    }
    plVar4 = plVar4 + 1;
  } while( true );
}


// ===== 004f3870  rive::ViewModelInstance::propertyValue =====

/* rive::ViewModelInstance::propertyValue(rive::SymbolType) */

long __thiscall rive::ViewModelInstance::propertyValue(ViewModelInstance *this,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  uVar2 = *(ulong *)(this + 0xf8);
  if (uVar2 != 0) {
    param_2 = param_2 & 0xff;
    uVar7 = NEON_cnt(uVar2,1);
    uVar6 = NEON_uaddlv(uVar7,1);
    uVar8 = CONCAT62((int6)((ulong)uVar7 >> 0x10),uVar6);
    if ((uVar8 & 0xffffffff) < 2) {
      uVar3 = (int)uVar2 - 1 & param_2;
    }
    else {
      uVar3 = param_2;
      if (uVar2 <= param_2) {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = param_2 / uVar2;
        }
        uVar3 = param_2 - uVar3 * uVar2;
      }
    }
    plVar4 = *(long **)(*(long *)(this + 0xf0) + uVar3 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      do {
        uVar5 = plVar4[1];
        if (uVar5 == param_2) {
          if ((uint)*(byte *)(plVar4 + 2) == (uint)param_2) {
            return plVar4[3];
          }
        }
        else {
          if ((uVar8 & 0xffffffff) < 2) {
            uVar5 = uVar5 & uVar2 - 1;
          }
          else if (uVar2 <= uVar5) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar5 / uVar2;
            }
            uVar5 = uVar5 - uVar1 * uVar2;
          }
          if (uVar5 != uVar3) {
            return 0;
          }
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
  }
  return 0;
}


// ===== 004f3928  rive::ViewModelInstance::propertyValue =====

/* rive::ViewModelInstance::propertyValue(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

long * __thiscall
rive::ViewModelInstance::propertyValue(ViewModelInstance *this,basic_string *param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  basic_string bVar5;
  int iVar6;
  basic_string *__s2;
  ulong uVar7;
  long lVar8;
  basic_string *pbVar9;
  long *unaff_x20;
  long *plVar10;
  undefined8 *puVar11;
  bool bVar12;
  
  puVar11 = *(undefined8 **)(this + 0xa8);
  puVar3 = *(undefined8 **)(this + 0xb0);
  if (puVar11 != puVar3) {
    do {
      plVar10 = (long *)*puVar11;
      if (plVar10 != (long *)0x0) {
        FUN_00340fb0(1,(long)plVar10 + 0x8c);
      }
      lVar8 = plVar10[0x15];
      if (lVar8 == 0) {
LAB_004f39ec:
        bVar12 = true;
      }
      else {
        bVar4 = *(byte *)(lVar8 + 0x10);
        bVar5 = *param_1;
        uVar7 = (ulong)(bVar4 >> 1);
        sVar1 = uVar7;
        if ((bVar4 & 1) != 0) {
          sVar1 = *(size_t *)(lVar8 + 0x18);
        }
        sVar2 = (ulong)((byte)bVar5 >> 1);
        if (((byte)bVar5 & 1) != 0) {
          sVar2 = *(size_t *)(param_1 + 8);
        }
        if (sVar1 != sVar2) goto LAB_004f39ec;
        __s2 = param_1 + 1;
        if (((byte)bVar5 & 1) != 0) {
          __s2 = *(basic_string **)(param_1 + 0x10);
        }
        if ((bVar4 & 1) == 0) {
          if (1 < bVar4) {
            pbVar9 = (basic_string *)(lVar8 + 0x11);
            do {
              if (*pbVar9 != *__s2) goto LAB_004f39ec;
              uVar7 = uVar7 - 1;
              pbVar9 = pbVar9 + 1;
              __s2 = __s2 + 1;
            } while (uVar7 != 0);
          }
        }
        else {
          iVar6 = memcmp(*(void **)(lVar8 + 0x20),__s2,*(size_t *)(lVar8 + 0x18));
          if (iVar6 != 0) goto LAB_004f39ec;
        }
        bVar12 = false;
        unaff_x20 = plVar10;
      }
      iVar6 = FUN_00340fe0(0xffffffff,(long)plVar10 + 0x8c);
      if (iVar6 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
      if (!bVar12) {
        return unaff_x20;
      }
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar3);
  }
  return (long *)0x0;
}


// ===== 004f3a54  rive::ViewModelInstance::viewModel =====

/* rive::ViewModelInstance::viewModel(rive::ViewModel*) */

void __thiscall rive::ViewModelInstance::viewModel(ViewModelInstance *this,ViewModel *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x118);
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar2 + 5), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  FUN_00340fb0(1,param_1 + 0x28);
  *(ViewModel **)(this + 0x118) = param_1;
  return;
}


// ===== 004f3ab8  rive::ViewModelInstance::onComponentDirty =====

/* rive::ViewModelInstance::onComponentDirty(rive::Component*) */

void rive::ViewModelInstance::onComponentDirty(Component *param_1)

{
  return;
}


// ===== 004f3abc  rive::ViewModelInstance::setAsRoot =====

/* rive::ViewModelInstance::setAsRoot(rive::rcp<rive::ViewModelInstance>) */

void __thiscall rive::ViewModelInstance::setAsRoot(ViewModelInstance *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar5 = (long *)*param_2;
  if (plVar5 != (long *)0x0) {
    FUN_00340fb0(1,(long)plVar5 + 0xa4);
  }
  puVar1 = *(undefined8 **)(this + 0xb0);
  for (puVar7 = *(undefined8 **)(this + 0xa8); puVar7 != puVar1; puVar7 = puVar7 + 1) {
    plVar6 = (long *)*puVar7;
    if (plVar6 != (long *)0x0) {
      FUN_00340fb0(1,(long)plVar6 + 0x8c);
    }
    if (plVar5 != (long *)0x0) {
      FUN_00340fb0(1,(long)plVar5 + 0xa4);
    }
    local_50 = plVar5;
    (**(code **)(*plVar6 + 0x98))(plVar6,&local_50);
    plVar3 = local_50;
    if ((local_50 != (long *)0x0) &&
       (iVar4 = FUN_00340fe0(0xffffffff,(long)local_50 + 0xa4), iVar4 == 1)) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    iVar4 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x8c);
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  if ((plVar5 != (long *)0x0) && (iVar4 = FUN_00340fe0(0xffffffff,(long)plVar5 + 0xa4), iVar4 == 1))
  {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f3bf0  rive::ViewModelInstance::setRoot =====

/* rive::ViewModelInstance::setRoot(rive::rcp<rive::ViewModelInstance>) */

void __thiscall rive::ViewModelInstance::setRoot(ViewModelInstance *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  puVar2 = *(undefined8 **)(this + 0xb0);
  for (puVar1 = *(undefined8 **)(this + 0xa8); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    plVar5 = (long *)*puVar1;
    if (plVar5 != (long *)0x0) {
      FUN_00340fb0(1,(long)plVar5 + 0x8c);
    }
    plVar6 = (long *)*param_2;
    if (plVar6 != (long *)0x0) {
      FUN_00340fb0(1,(long)plVar6 + 0xa4);
    }
    local_50 = plVar6;
    (**(code **)(*plVar5 + 0x98))(plVar5,&local_50);
    plVar6 = local_50;
    if ((local_50 != (long *)0x0) &&
       (iVar4 = FUN_00340fe0(0xffffffff,(long)local_50 + 0xa4), iVar4 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    iVar4 = FUN_00340fe0(0xffffffff,(long)plVar5 + 0x8c);
    if (iVar4 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f3cf4  rive::ViewModelInstance::propertyValues =====

/* rive::ViewModelInstance::propertyValues() */

ViewModelInstance * __thiscall rive::ViewModelInstance::propertyValues(ViewModelInstance *this)

{
  return this + 0xa8;
}


// ===== 004f3cfc  rive::ViewModelInstance::propertyFromPath =====

/* rive::ViewModelInstance::propertyFromPath(std::__ndk1::vector<unsigned int,
   std::__ndk1::allocator<unsigned int> >*, unsigned long) */

long * __thiscall
rive::ViewModelInstance::propertyFromPath(ViewModelInstance *this,vector *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  ViewModelInstance *this_00;
  
  if (param_2 < (ulong)(*(long *)(param_1 + 8) - *(long *)param_1 >> 2)) {
    puVar7 = *(undefined8 **)(this + 0xa8);
    puVar1 = *(undefined8 **)(this + 0xb0);
    if (puVar7 != puVar1) {
      iVar4 = *(int *)(*(long *)param_1 + param_2 * 4);
      do {
        plVar6 = (long *)*puVar7;
        if (plVar6 != (long *)0x0) {
          FUN_00340fb0(1,(long)plVar6 + 0x8c);
        }
        lVar2 = plVar6[0x11];
        iVar3 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x8c);
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
        if ((int)lVar2 == iVar4) {
          if ((*(long *)(param_1 + 8) - *(long *)param_1 >> 2) - 1U == param_2) {
            return plVar6;
          }
          uVar5 = (**(code **)(*plVar6 + 0x18))(plVar6,0x1bc);
          if ((uVar5 & 1) == 0) {
            return (long *)0x0;
          }
          this_00 = (ViewModelInstance *)plVar6[0x24];
          if (this_00 != (ViewModelInstance *)0x0) {
            FUN_00340fb0(1,this_00 + 0xa4);
          }
          plVar6 = (long *)propertyFromPath(this_00,param_1,param_2 + 1);
          iVar4 = FUN_00340fe0(0xffffffff,this_00 + 0xa4);
          if (iVar4 == 1) {
            (**(code **)(*(long *)this_00 + 8))(this_00);
            return plVar6;
          }
          return plVar6;
        }
        puVar7 = puVar7 + 1;
      } while (puVar7 != puVar1);
    }
  }
  return (long *)0x0;
}


// ===== 004f3e34  rive::ViewModelInstance::advanced =====

/* rive::ViewModelInstance::advanced() */

void __thiscall rive::ViewModelInstance::advanced(ViewModelInstance *this)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(this + 0xb0);
  for (puVar4 = *(undefined8 **)(this + 0xa8); puVar4 != puVar1; puVar4 = puVar4 + 1) {
    plVar3 = (long *)*puVar4;
    if (plVar3 != (long *)0x0) {
      FUN_00340fb0(1,(long)plVar3 + 0x8c);
    }
    (**(code **)(*plVar3 + 0xa0))(plVar3);
    iVar2 = FUN_00340fe0(0xffffffff,(long)plVar3 + 0x8c);
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  return;
}


// ===== 004f3eb8  rive::ViewModelInstance::addDependent =====

/* rive::ViewModelInstance::addDependent(rive::DataBindContainer*) */

void __thiscall
rive::ViewModelInstance::addDependent(ViewModelInstance *this,DataBindContainer *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (param_1 == (DataBindContainer *)0x0) {
    return;
  }
  puVar12 = *(undefined8 **)(this + 0xe0);
  puVar11 = *(undefined8 **)(this + 0xd8);
  puVar4 = puVar11;
  for (puVar7 = puVar11;
      (puVar7 != puVar12 && (puVar4 = puVar7, (DataBindContainer *)*puVar7 != param_1));
      puVar7 = puVar7 + 1) {
    puVar4 = puVar12;
  }
  if (puVar4 != puVar12) {
    return;
  }
  if (puVar12 < *(undefined8 **)(this + 0xe8)) {
    puVar4 = puVar12 + 1;
    *puVar12 = param_1;
    goto LAB_004f4034;
  }
  lVar13 = (long)puVar12 - (long)puVar11;
  uVar1 = (lVar13 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_004f4058();
LAB_004f4054:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar5 = (long)*(undefined8 **)(this + 0xe8) - (long)puVar11;
  uVar6 = (long)uVar5 >> 2;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar5) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3d != 0) goto LAB_004f4054;
    pvVar3 = operator_new(uVar6 << 3);
  }
  puVar7 = (undefined8 *)((long)pvVar3 + (lVar13 >> 3) * 8);
  puVar4 = puVar7 + 1;
  *puVar7 = param_1;
  if (puVar11 != puVar12) {
    if ((0x37 < lVar13 - 8U) && (0x1f < (ulong)((long)puVar12 + (-lVar13 - (long)pvVar3)))) {
      puVar9 = puVar7 + -2;
      puVar10 = puVar12 + -2;
      uVar1 = (lVar13 - 8U >> 3) + 1;
      uVar8 = uVar1 & 0x3ffffffffffffffc;
      puVar12 = puVar12 + -uVar8;
      uVar5 = uVar8;
      do {
        puVar2 = puVar10 + -1;
        uVar16 = puVar10[-2];
        uVar15 = puVar10[1];
        uVar14 = *puVar10;
        uVar5 = uVar5 - 4;
        puVar10 = puVar10 + -4;
        puVar9[-1] = *puVar2;
        puVar9[-2] = uVar16;
        puVar9[1] = uVar15;
        *puVar9 = uVar14;
        puVar9 = puVar9 + -4;
      } while (uVar5 != 0);
      puVar7 = puVar7 + -uVar8;
      if (uVar1 == uVar8) goto LAB_004f4018;
    }
    do {
      puVar12 = puVar12 + -1;
      puVar7 = puVar7 + -1;
      *puVar7 = *puVar12;
    } while (puVar12 != puVar11);
    puVar11 = *(undefined8 **)(this + 0xd8);
  }
LAB_004f4018:
  *(undefined8 **)(this + 0xd8) = puVar7;
  *(undefined8 **)(this + 0xe0) = puVar4;
  *(void **)(this + 0xe8) = (void *)((long)pvVar3 + uVar6 * 8);
  if (puVar11 != (undefined8 *)0x0) {
    operator_delete(puVar11);
  }
LAB_004f4034:
  *(undefined8 **)(this + 0xe0) = puVar4;
  return;
}


// ===== 004f4058  FUN_004f4058 =====

void FUN_004f4058(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004f406c  rive::ViewModelInstance::removeDependent =====

/* WARNING: Removing unreachable block (ram,0x004f4108) */
/* rive::ViewModelInstance::removeDependent(rive::DataBindContainer*) */

void __thiscall
rive::ViewModelInstance::removeDependent(ViewModelInstance *this,DataBindContainer *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(this + 0xe0);
  puVar4 = *(undefined8 **)(this + 0xd8);
  puVar2 = puVar4;
  for (; (puVar4 != puVar1 && (puVar2 = puVar4, (DataBindContainer *)*puVar4 != param_1));
      puVar4 = puVar4 + 1) {
    puVar2 = puVar1;
  }
  if ((puVar2 != puVar1) && (puVar4 = puVar2 + 1, puVar3 = puVar2, puVar4 != puVar1)) {
    do {
      puVar2 = puVar3;
      if ((DataBindContainer *)*puVar4 != param_1) {
        puVar2 = puVar3 + 1;
        *puVar3 = (DataBindContainer *)*puVar4;
      }
      puVar4 = puVar4 + 1;
      puVar3 = puVar2;
    } while (puVar4 != puVar1);
    puVar1 = *(undefined8 **)(this + 0xe0);
  }
  if (puVar2 != puVar1) {
    *(undefined8 **)(this + 0xe0) = puVar2;
  }
  return;
}


// ===== 004f412c  rive::ViewModelInstanceArtboard::propertyValueChanged =====

/* rive::ViewModelInstanceArtboard::propertyValueChanged() */

void __thiscall
rive::ViewModelInstanceArtboard::propertyValueChanged(ViewModelInstanceArtboard *this)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 *puVar5;
  File *this_00;
  
  pvVar4 = *(void **)(this + 0x118);
  *(undefined8 *)(this + 0x118) = 0;
  if ((pvVar4 != (void *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,pvVar4), iVar2 == 1)) {
    plVar3 = *(long **)((long)pvVar4 + 0x10);
    *(undefined8 *)((long)pvVar4 + 0x10) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    this_00 = *(File **)((long)pvVar4 + 8);
    if ((this_00 != (File *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,this_00), iVar2 == 1)) {
      File::~File(this_00);
      operator_delete(this_00);
    }
    operator_delete(pvVar4);
  }
  puVar1 = *(undefined8 **)(this + 0xf0);
  for (puVar5 = *(undefined8 **)(this + 0xe8); puVar5 != puVar1; puVar5 = puVar5 + 1) {
    (*(code *)**(undefined8 **)*puVar5)((undefined8 *)*puVar5,0x1000,1);
  }
  ViewModelInstanceValue::onValueChanged((ViewModelInstanceValue *)this);
  return;
}


// ===== 004f41ec  rive::ViewModelInstanceArtboard::asset =====

/* rive::ViewModelInstanceArtboard::asset(rive::rcp<rive::BindableArtboard>) */

void __thiscall
rive::ViewModelInstanceArtboard::asset
          (ViewModelInstanceArtboard *this,ViewModelInstanceArtboard *param_2)

{
  ViewModelInstanceArtboard *pVVar1;
  undefined8 *puVar2;
  int iVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 *puVar6;
  long lVar7;
  File *this_00;
  
  if (*(int *)(this + 0x110) != -1) {
    *(undefined4 *)(this + 0x110) = 0xffffffff;
    (**(code **)(*(long *)this + 0xa8))(this);
  }
  pVVar1 = this + 0x118;
  if (pVVar1 != param_2) {
    lVar7 = *(long *)param_2;
    if (lVar7 != 0) {
      FUN_00340fb0(1,lVar7);
    }
    pvVar5 = *(void **)pVVar1;
    *(long *)pVVar1 = lVar7;
    if ((pvVar5 != (void *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,pvVar5), iVar3 == 1)) {
      plVar4 = *(long **)((long)pvVar5 + 0x10);
      *(undefined8 *)((long)pvVar5 + 0x10) = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      this_00 = *(File **)((long)pvVar5 + 8);
      if ((this_00 != (File *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,this_00), iVar3 == 1)) {
        File::~File(this_00);
        operator_delete(this_00);
      }
      operator_delete(pvVar5);
    }
  }
  puVar2 = *(undefined8 **)(this + 0xf0);
  for (puVar6 = *(undefined8 **)(this + 0xe8); puVar6 != puVar2; puVar6 = puVar6 + 1) {
    (*(code *)**(undefined8 **)*puVar6)((undefined8 *)*puVar6,0x1000,1);
  }
  return;
}


// ===== 004f42f0  rive::ViewModelInstanceArtboard::applyValue =====

/* rive::ViewModelInstanceArtboard::applyValue(rive::DataValueInteger*) */

void __thiscall
rive::ViewModelInstanceArtboard::applyValue
          (ViewModelInstanceArtboard *this,DataValueInteger *param_1)

{
  if (*(int *)(this + 0x110) == *(int *)(param_1 + 8)) {
    return;
  }
  *(int *)(this + 0x110) = *(int *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x004f4310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xa8))();
  return;
}


// ===== 004f4314  rive::ViewModelInstanceArtboard::boundViewModelInstance =====

/* rive::ViewModelInstanceArtboard::boundViewModelInstance(rive::rcp<rive::ViewModelInstance>) */

void __thiscall
rive::ViewModelInstanceArtboard::boundViewModelInstance
          (ViewModelInstanceArtboard *this,ViewModelInstanceArtboard *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  this = this + 0x120;
  if (this != param_2) {
    lVar3 = *(long *)param_2;
    if (lVar3 != 0) {
      FUN_00340fb0(1,lVar3 + 0xa4);
    }
    plVar2 = *(long **)this;
    *(long *)this = lVar3;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar2 + 0xa4), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x004f437c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))(plVar2);
      return;
    }
  }
  return;
}


// ===== 004f4390  rive::ViewModelInstanceArtboard::advanced =====

/* rive::ViewModelInstanceArtboard::advanced() */

void __thiscall rive::ViewModelInstanceArtboard::advanced(ViewModelInstanceArtboard *this)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  lVar3 = *(long *)(this + 0x120);
  if (lVar3 != 0) {
    puVar1 = *(undefined8 **)(lVar3 + 0xb0);
    for (puVar5 = *(undefined8 **)(lVar3 + 0xa8); puVar5 != puVar1; puVar5 = puVar5 + 1) {
      plVar4 = (long *)*puVar5;
      if (plVar4 != (long *)0x0) {
        FUN_00340fb0(1,(long)plVar4 + 0x8c);
      }
      (**(code **)(*plVar4 + 0xa0))(plVar4);
      iVar2 = FUN_00340fe0(0xffffffff,(long)plVar4 + 0x8c);
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(this + 0x90);
  this[0xb0] = (ViewModelInstanceArtboard)((byte)this[0xb0] & 0xfd);
  return;
}


// ===== 004f443c  FUN_004f443c =====

void FUN_004f443c(long *param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  File *this;
  
  plVar2 = (long *)param_1[0x24];
  *param_1 = (long)(PTR_vtable_0067d568 + 0x10);
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar2 + 0xa4), iVar1 == 1))
  {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  pvVar3 = (void *)param_1[0x23];
  if ((pvVar3 != (void *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,pvVar3), iVar1 == 1)) {
    plVar2 = *(long **)((long)pvVar3 + 0x10);
    *(undefined8 *)((long)pvVar3 + 0x10) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    this = *(File **)((long)pvVar3 + 8);
    if ((this != (File *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,this), iVar1 == 1)) {
      rive::File::~File(this);
      operator_delete(this);
    }
    operator_delete(pvVar3);
  }
  FUN_004f4508(param_1);
  return;
}


// ===== 004f4508  FUN_004f4508 =====

void FUN_004f4508(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0x1d];
  *param_1 = (long)(PTR_vtable_0067d288 + 0x10);
  if (pvVar1 != (void *)0x0) {
    param_1[0x1e] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x1a];
  if (pvVar1 != (void *)0x0) {
    param_1[0x1b] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x17];
  if (pvVar1 != (void *)0x0) {
    param_1[0x18] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x12];
  if (pvVar1 != (void *)0x0) {
    param_1[0x13] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0xd];
  *param_1 = (long)(PTR_vtable_0067cee0 + 0x10);
  if (pvVar1 != (void *)0x0) {
    param_1[0xe] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[9];
  if (pvVar1 != (void *)0x0) {
    param_1[10] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  *param_1 = (long)&PTR_FUN_00678650;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}


// ===== 004f45c8  FUN_004f45c8 =====

void FUN_004f45c8(long *param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  File *this;
  
  plVar2 = (long *)param_1[0x24];
  *param_1 = (long)(PTR_vtable_0067d568 + 0x10);
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar2 + 0xa4), iVar1 == 1))
  {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  pvVar3 = (void *)param_1[0x23];
  if ((pvVar3 != (void *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,pvVar3), iVar1 == 1)) {
    plVar2 = *(long **)((long)pvVar3 + 0x10);
    *(undefined8 *)((long)pvVar3 + 0x10) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    this = *(File **)((long)pvVar3 + 8);
    if ((this != (File *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,this), iVar1 == 1)) {
      rive::File::~File(this);
      operator_delete(this);
    }
    operator_delete(pvVar3);
  }
  FUN_004f4508(param_1);
  operator_delete(param_1);
  return;
}


// ===== 004f469c  FUN_004f469c =====

undefined8 FUN_004f469c(void)

{
  return 599;
}


// ===== 004f46a4  FUN_004f46a4 =====

undefined8 FUN_004f46a4(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_2 != 10) && (param_2 != 0x1ac)) && (param_2 != 599)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 004f46cc  FUN_004f46cc =====

undefined8 FUN_004f46cc(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  uVar5 = 0;
  lVar7 = *(long *)(lVar4 + 0x28);
  if (param_2 < 0x22a) {
    if (param_2 == 4) {
      pcVar10 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar10) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004f48a0;
        }
        pcVar11 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar2 < '\0');
      param_3[2] = (long)pcVar11;
      if ((char)param_3[3] == '\0') {
        rive::BinaryReader::readString((ulong)param_3);
      }
      else {
LAB_004f48a0:
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
      }
      if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
        operator_delete(*(void **)(param_1 + 0x20));
      }
      *(undefined8 *)(param_1 + 0x18) = uStack_38;
      *(undefined8 *)(param_1 + 0x10) = local_40;
      *(undefined8 *)(param_1 + 0x20) = local_30;
    }
    else {
      if (param_2 != 5) goto LAB_004f48e8;
      uVar12 = 0;
      uVar6 = 0;
      pbVar9 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004f486c;
        }
        pbVar8 = pbVar9 + 1;
        bVar1 = *pbVar9;
        uVar3 = uVar12 & 0x3f;
        uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
        uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
        pbVar9 = pbVar8;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar8;
      if (uVar6 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004f486c:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
  }
  else if (param_2 == 0x22a) {
    uVar12 = 0;
    uVar6 = 0;
    pbVar9 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004f48d8;
      }
      pbVar8 = pbVar9 + 1;
      bVar1 = *pbVar9;
      uVar3 = uVar12 & 0x3f;
      uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar9 = pbVar8;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar8;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004f48d8:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x88) = (int)uVar6;
  }
  else {
    if (param_2 != 0x34e) goto LAB_004f48e8;
    uVar12 = 0;
    uVar6 = 0;
    pbVar9 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004f4884;
      }
      pbVar8 = pbVar9 + 1;
      bVar1 = *pbVar9;
      uVar3 = uVar12 & 0x3f;
      uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar9 = pbVar8;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar8;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004f4884:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x110) = (int)uVar6;
  }
  uVar5 = 1;
LAB_004f48e8:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f4910  FUN_004f4910 =====

void FUN_004f4910(void)

{
  return;
}


// ===== 004f4914  rive::ViewModelInstanceArtboardBase::clone =====

/* rive::ViewModelInstanceArtboardBase::clone() const */

long * __thiscall rive::ViewModelInstanceArtboardBase::clone(ViewModelInstanceArtboardBase *this)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)operator_new(0x128);
  plVar2[1] = 0;
  *plVar2 = 0;
  plVar2[5] = 0;
  plVar2[4] = 0;
  plVar2[7] = 0;
  plVar2[6] = 0;
  plVar2[9] = 0;
  plVar2[8] = 0;
  plVar2[0xb] = 0;
  plVar2[10] = 0;
  plVar2[0xd] = 0;
  plVar2[0xc] = 0;
  plVar2[0xf] = 0;
  plVar2[0xe] = 0;
  plVar2[0x11] = 0;
  plVar2[0x10] = 0;
  plVar2[0x13] = 0;
  plVar2[0x12] = 0;
  plVar2[0x15] = 0;
  plVar2[0x14] = 0;
  plVar2[0x17] = 0;
  plVar2[0x16] = 0;
  plVar2[0x19] = 0;
  plVar2[0x18] = 0;
  plVar2[0x1b] = 0;
  plVar2[0x1a] = 0;
  plVar2[0x1d] = 0;
  plVar2[0x1c] = 0;
  plVar2[0x1f] = 0;
  plVar2[0x1e] = 0;
  plVar2[0x21] = 0;
  plVar2[0x20] = 0;
  plVar2[0x23] = 0;
  plVar2[0x22] = 0;
  plVar2[3] = 0;
  *(undefined8 *)(plVar2 + 2) = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  plVar2[6] = 0;
  plVar2[9] = 0;
  plVar2[8] = 0;
  plVar2[0xb] = 0;
  plVar2[10] = 0;
  *(undefined2 *)(plVar2 + 0xc) = 0xfffe;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  plVar2[0xd] = 0;
  plVar2[0x18] = 0;
  plVar2[0x17] = 0;
  plVar2[0x1a] = 0;
  plVar2[0x19] = 0;
  plVar2[0x1c] = 0;
  plVar2[0x1b] = 0;
  plVar2[0x1e] = 0;
  plVar2[0x1d] = 0;
  plVar2[0x1f] = 0;
  puVar1 = PTR_vtable_0067d568;
  plVar2[0x13] = 0;
  plVar2[0x12] = 0;
  plVar2[0x15] = 0;
  plVar2[0x14] = 0;
  plVar2[0x23] = 0;
  plVar2[0x24] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar2 + 0x22) = *(undefined4 *)(this + 0x110);
  *(undefined4 *)(plVar2 + 0x11) = *(undefined4 *)(this + 0x88);
  *(undefined4 *)((long)plVar2 + 0x8c) = 1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  return plVar2;
}


// ===== 004f49dc  FUN_004f49dc =====

void FUN_004f49dc(void *param_1)

{
  FUN_004f4508();
  operator_delete(param_1);
  return;
}


// ===== 004f4a00  FUN_004f4a00 =====

void FUN_004f4a00(void)

{
  return;
}


// ===== 004f4a04  rive::ViewModelInstanceAsset::import =====

/* rive::ViewModelInstanceAsset::import(rive::ImportStack&) */

undefined8 __thiscall
rive::ViewModelInstanceAsset::import(ViewModelInstanceAsset *this,ImportStack *param_1)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  
  uVar6 = *(ulong *)(param_1 + 8);
  if (uVar6 != 0) {
    uVar13 = NEON_cnt(uVar6,1);
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar14 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12);
    if ((uVar14 & 0xffffffff) < 2) {
      uVar8 = (ulong)((uint)uVar6 - 1) & 0x17;
    }
    else {
      uVar8 = 0x17;
      if (uVar6 < 0x18) {
        uVar1 = (uint)uVar6 & 0xff;
        uVar3 = 0;
        if ((uVar6 & 0xff) != 0) {
          uVar3 = 0x17 / uVar1;
        }
        uVar8 = (ulong)(0x17 - uVar3 * uVar1);
      }
    }
    plVar9 = *(long **)(*(long *)param_1 + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == 0x17) {
          if ((short)plVar9[2] == 0x17) {
            lVar7 = plVar9[3];
            if (lVar7 == 0) {
              return 1;
            }
            plVar9 = *(long **)(lVar7 + 0x50);
            plVar2 = *(long **)(lVar7 + 0x58);
            if (plVar9 != plVar2) {
              plVar11 = *(long **)(this + 0x120);
              do {
                lVar7 = *plVar9;
                if (plVar11 < *(long **)(this + 0x128)) {
                  if (lVar7 != 0) {
                    FUN_00340fb0(1,lVar7 + 0x48);
                  }
                  plVar5 = plVar11 + 1;
                  *plVar11 = lVar7;
                }
                else {
                  plVar5 = (long *)FUN_00400c5c(this + 0x118,lVar7);
                }
                plVar9 = plVar9 + 1;
                *(long **)(this + 0x120) = plVar5;
                plVar11 = plVar5;
              } while (plVar9 != plVar2);
            }
            uVar13 = ViewModelInstanceValue::import((ViewModelInstanceValue *)this,param_1);
            return uVar13;
          }
        }
        else {
          if ((uVar14 & 0xffffffff) < 2) {
            uVar10 = uVar10 & uVar6 - 1;
          }
          else if (uVar6 <= uVar10) {
            uVar4 = 0;
            if (uVar6 != 0) {
              uVar4 = uVar10 / uVar6;
            }
            uVar10 = uVar10 - uVar4 * uVar6;
          }
          if (uVar10 != uVar8) {
            return 1;
          }
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  return 1;
}


// ===== 004f4b68  FUN_004f4b68 =====

void FUN_004f4b68(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[0x23];
  *param_1 = (long)(PTR_vtable_0067d2b8 + 0x10);
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)param_1[0x24];
    puVar2 = puVar4;
    if (puVar5 != puVar4) {
      do {
        puVar5 = puVar5 + -1;
        plVar3 = (long *)*puVar5;
        if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar3 + 9), iVar1 == 1)) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
      } while (puVar5 != puVar4);
      puVar2 = (undefined8 *)param_1[0x23];
    }
    param_1[0x24] = (long)puVar4;
    operator_delete(puVar2);
  }
  FUN_004f4508(param_1);
  return;
}


// ===== 004f4c00  FUN_004f4c00 =====

void FUN_004f4c00(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[0x23];
  *param_1 = (long)(PTR_vtable_0067d2b8 + 0x10);
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)param_1[0x24];
    puVar2 = puVar4;
    if (puVar5 != puVar4) {
      do {
        puVar5 = puVar5 + -1;
        plVar3 = (long *)*puVar5;
        if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar3 + 9), iVar1 == 1)) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
      } while (puVar5 != puVar4);
      puVar2 = (undefined8 *)param_1[0x23];
    }
    param_1[0x24] = (long)puVar4;
    operator_delete(puVar2);
  }
  FUN_004f4508(param_1);
  operator_delete(param_1);
  return;
}


// ===== 004f4ca0  FUN_004f4ca0 =====

undefined8 FUN_004f4ca0(void)

{
  return 0x24a;
}


// ===== 004f4ca8  FUN_004f4ca8 =====

undefined8 FUN_004f4ca8(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_2 != 10) && (param_2 != 0x1ac)) && (param_2 != 0x24a)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 004f4cd0  FUN_004f4cd0 =====

undefined8 FUN_004f4cd0(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  uVar5 = 0;
  lVar7 = *(long *)(lVar4 + 0x28);
  if (param_2 < 0x22a) {
    if (param_2 == 4) {
      pcVar10 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar10) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004f4ea4;
        }
        pcVar11 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar2 < '\0');
      param_3[2] = (long)pcVar11;
      if ((char)param_3[3] == '\0') {
        rive::BinaryReader::readString((ulong)param_3);
      }
      else {
LAB_004f4ea4:
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
      }
      if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
        operator_delete(*(void **)(param_1 + 0x20));
      }
      *(undefined8 *)(param_1 + 0x18) = uStack_38;
      *(undefined8 *)(param_1 + 0x10) = local_40;
      *(undefined8 *)(param_1 + 0x20) = local_30;
    }
    else {
      if (param_2 != 5) goto LAB_004f4eec;
      uVar12 = 0;
      uVar6 = 0;
      pbVar9 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004f4e70;
        }
        pbVar8 = pbVar9 + 1;
        bVar1 = *pbVar9;
        uVar3 = uVar12 & 0x3f;
        uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
        uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
        pbVar9 = pbVar8;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar8;
      if (uVar6 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004f4e70:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
  }
  else if (param_2 == 0x22a) {
    uVar12 = 0;
    uVar6 = 0;
    pbVar9 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004f4edc;
      }
      pbVar8 = pbVar9 + 1;
      bVar1 = *pbVar9;
      uVar3 = uVar12 & 0x3f;
      uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar9 = pbVar8;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar8;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004f4edc:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x88) = (int)uVar6;
  }
  else {
    if (param_2 != 0x338) goto LAB_004f4eec;
    uVar12 = 0;
    uVar6 = 0;
    pbVar9 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004f4e88;
      }
      pbVar8 = pbVar9 + 1;
      bVar1 = *pbVar9;
      uVar3 = uVar12 & 0x3f;
      uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar9 = pbVar8;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar8;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004f4e88:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x110) = (int)uVar6;
  }
  uVar5 = 1;
LAB_004f4eec:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f4f14  FUN_004f4f14 =====

void FUN_004f4f14(void)

{
  return;
}


// ===== 004f4f18  rive::ViewModelInstanceAssetBase::clone =====

/* rive::ViewModelInstanceAssetBase::clone() const */

long * __thiscall rive::ViewModelInstanceAssetBase::clone(ViewModelInstanceAssetBase *this)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)operator_new(0x130);
  plVar2[1] = 0;
  *plVar2 = 0;
  plVar2[5] = 0;
  plVar2[4] = 0;
  plVar2[7] = 0;
  plVar2[6] = 0;
  plVar2[9] = 0;
  plVar2[8] = 0;
  plVar2[0xb] = 0;
  plVar2[10] = 0;
  plVar2[0xd] = 0;
  plVar2[0xc] = 0;
  plVar2[0xf] = 0;
  plVar2[0xe] = 0;
  plVar2[0x11] = 0;
  plVar2[0x10] = 0;
  plVar2[0x13] = 0;
  plVar2[0x12] = 0;
  plVar2[0x15] = 0;
  plVar2[0x14] = 0;
  plVar2[0x17] = 0;
  plVar2[0x16] = 0;
  plVar2[0x19] = 0;
  plVar2[0x18] = 0;
  plVar2[0x1b] = 0;
  plVar2[0x1a] = 0;
  plVar2[0x1d] = 0;
  plVar2[0x1c] = 0;
  plVar2[0x1f] = 0;
  plVar2[0x1e] = 0;
  plVar2[0x21] = 0;
  plVar2[0x20] = 0;
  plVar2[0x23] = 0;
  plVar2[0x22] = 0;
  plVar2[3] = 0;
  *(undefined8 *)(plVar2 + 2) = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  plVar2[6] = 0;
  plVar2[9] = 0;
  plVar2[8] = 0;
  plVar2[0xb] = 0;
  plVar2[10] = 0;
  *(undefined2 *)(plVar2 + 0xc) = 0xfffe;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  plVar2[0xd] = 0;
  plVar2[0x18] = 0;
  plVar2[0x17] = 0;
  plVar2[0x1a] = 0;
  plVar2[0x19] = 0;
  plVar2[0x1c] = 0;
  plVar2[0x1b] = 0;
  plVar2[0x1e] = 0;
  plVar2[0x1d] = 0;
  plVar2[0x1f] = 0;
  puVar1 = PTR_vtable_0067d2b8;
  plVar2[0x13] = 0;
  plVar2[0x12] = 0;
  plVar2[0x15] = 0;
  plVar2[0x14] = 0;
  plVar2[0x24] = 0;
  plVar2[0x25] = 0;
  plVar2[0x23] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar2 + 0x22) = *(undefined4 *)(this + 0x110);
  *(undefined4 *)(plVar2 + 0x11) = *(undefined4 *)(this + 0x88);
  *(undefined4 *)((long)plVar2 + 0x8c) = 1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  return plVar2;
}


// ===== 004f4fe4  FUN_004f4fe4 =====

void FUN_004f4fe4(void *param_1)

{
  FUN_004f4508();
  operator_delete(param_1);
  return;
}


// ===== 004f5008  rive::ViewModelInstanceAssetImage::ViewModelInstanceAssetImage =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::ViewModelInstanceAssetImage::ViewModelInstanceAssetImage() */

void __thiscall
rive::ViewModelInstanceAssetImage::ViewModelInstanceAssetImage(ViewModelInstanceAssetImage *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  char *pcVar9;
  
  *(undefined2 *)(this + 0x60) = 0xfffe;
  uVar1 = DAT_0024e7f0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined2 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x88) = uVar1;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0x110) = 0xffffffff;
  *(undefined8 *)(this + 0x128) = 0;
  puVar7 = PTR_vtable_0067d7f0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined **)this = puVar7 + 0x10;
  plVar8 = (long *)operator_new(0x90);
  *(undefined4 *)(plVar8 + 1) = 0xffffffff;
  *(undefined2 *)(plVar8 + 2) = 0;
  *(undefined4 *)(plVar8 + 5) = 0;
  pcVar9 = (char *)operator_new(0x30);
  plVar8[8] = (long)pcVar9;
  uVar4 = s_https___public_rive_app_cdn_uuid_00245373._24_8_;
  uVar3 = s_https___public_rive_app_cdn_uuid_00245373._16_8_;
  uVar2 = s_https___public_rive_app_cdn_uuid_00245373._8_8_;
  uVar1 = s_https___public_rive_app_cdn_uuid_00245373._0_8_;
  pcVar9[0x20] = '\0';
  *(undefined8 *)(pcVar9 + 8) = uVar2;
  *(undefined8 *)pcVar9 = uVar1;
  *(undefined8 *)(pcVar9 + 0x18) = uVar4;
  *(undefined8 *)(pcVar9 + 0x10) = uVar3;
  lVar6 = _UNK_0024e0e8;
  lVar5 = _DAT_0024e0e0;
  *(undefined4 *)(plVar8 + 9) = 1;
  plVar8[7] = lVar6;
  plVar8[6] = lVar5;
  plVar8[0xb] = 0;
  plVar8[10] = 0;
  plVar8[0xd] = 0;
  plVar8[0xc] = 0;
  plVar8[0xf] = 0;
  plVar8[0xe] = 0;
  puVar7 = PTR_vtable_0067d018;
  plVar8[0x10] = 0;
  plVar8[0x11] = 0;
  *plVar8 = (long)(puVar7 + 0x10);
  *(long **)(this + 0x130) = plVar8;
  return;
}


// ===== 004f510c  FUN_004f510c =====

void FUN_004f510c(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar3 = (long *)param_1[0x26];
  *param_1 = (long)(PTR_vtable_0067d7f0 + 0x10);
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar3 + 9), iVar1 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  puVar4 = (undefined8 *)param_1[0x23];
  *param_1 = (long)(PTR_vtable_0067d2b8 + 0x10);
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)param_1[0x24];
    puVar2 = puVar4;
    if (puVar5 != puVar4) {
      do {
        puVar5 = puVar5 + -1;
        plVar3 = (long *)*puVar5;
        if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar3 + 9), iVar1 == 1)) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
      } while (puVar5 != puVar4);
      puVar2 = (undefined8 *)param_1[0x23];
    }
    param_1[0x24] = (long)puVar4;
    operator_delete(puVar2);
  }
  FUN_004f4508(param_1);
  return;
}


// ===== 004f51e0  FUN_004f51e0 =====

void FUN_004f51e0(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar3 = (long *)param_1[0x26];
  *param_1 = (long)(PTR_vtable_0067d7f0 + 0x10);
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar3 + 9), iVar1 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  puVar4 = (undefined8 *)param_1[0x23];
  *param_1 = (long)(PTR_vtable_0067d2b8 + 0x10);
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)param_1[0x24];
    puVar2 = puVar4;
    if (puVar5 != puVar4) {
      do {
        puVar5 = puVar5 + -1;
        plVar3 = (long *)*puVar5;
        if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar3 + 9), iVar1 == 1)) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
      } while (puVar5 != puVar4);
      puVar2 = (undefined8 *)param_1[0x23];
    }
    param_1[0x24] = (long)puVar4;
    operator_delete(puVar2);
  }
  FUN_004f4508(param_1);
  operator_delete(param_1);
  return;
}


// ===== 004f52bc  FUN_004f52bc =====

undefined8 FUN_004f52bc(void)

{
  return 0x24b;
}


// ===== 004f52c4  FUN_004f52c4 =====

undefined8 FUN_004f52c4(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  param_2 = param_2 & 0xffff;
  uVar1 = 1;
  if (((1 < param_2 - 0x24a) && (param_2 != 10)) && (param_2 != 0x1ac)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 004f52f0  rive::ViewModelInstanceAssetImage::clone =====

/* rive::ViewModelInstanceAssetImage::clone() const */

ViewModelInstanceAssetImage * __thiscall
rive::ViewModelInstanceAssetImage::clone(ViewModelInstanceAssetImage *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  ViewModelInstanceAssetImage *this_00;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  
  this_00 = (ViewModelInstanceAssetImage *)operator_new(0x138);
  ViewModelInstanceAssetImage(this_00);
  uVar3 = *(undefined4 *)(this + 0x88);
  *(undefined4 *)(this_00 + 0x110) = *(undefined4 *)(this + 0x110);
  *(undefined4 *)(this_00 + 0x88) = uVar3;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_00 + 0x10),(basic_string *)(this + 0x10));
  puVar1 = *(undefined8 **)(this + 0x118);
  puVar2 = *(undefined8 **)(this + 0x120);
  *(undefined4 *)(this_00 + 0x28) = *(undefined4 *)(this + 0x28);
  do {
    if (puVar1 == puVar2) {
      return this_00;
    }
    plVar9 = (long *)*puVar1;
    if (plVar9 == (long *)0x0) {
      puVar7 = *(undefined8 **)(this_00 + 0x120);
      plVar6 = (long *)0x0;
      plVar8 = (long *)0x0;
      if (puVar7 < *(undefined8 **)(this_00 + 0x128)) goto LAB_004f53bc;
LAB_004f53d0:
      uVar5 = FUN_00400c5c(this_00 + 0x118,plVar8);
      *(undefined8 *)(this_00 + 0x120) = uVar5;
      plVar6 = plVar8;
    }
    else {
      FUN_00340fb0(1,plVar9 + 9);
      puVar7 = *(undefined8 **)(this_00 + 0x120);
      plVar8 = plVar9;
      if (*(undefined8 **)(this_00 + 0x128) <= puVar7) goto LAB_004f53d0;
      FUN_00340fb0(1,plVar9 + 9);
      plVar6 = plVar9;
LAB_004f53bc:
      *puVar7 = plVar9;
      *(undefined8 **)(this_00 + 0x120) = puVar7 + 1;
    }
    if ((plVar6 != (long *)0x0) && (iVar4 = FUN_00340fe0(0xffffffff,plVar6 + 9), iVar4 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    puVar1 = puVar1 + 1;
  } while( true );
}


// ===== 004f5414  rive::ViewModelInstanceAssetImage::propertyValueChanged =====

/* rive::ViewModelInstanceAssetImage::propertyValueChanged() */

void __thiscall
rive::ViewModelInstanceAssetImage::propertyValueChanged(ViewModelInstanceAssetImage *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0xf0);
  for (puVar2 = *(undefined8 **)(this + 0xe8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (*(code *)**(undefined8 **)*puVar2)((undefined8 *)*puVar2,0x1000,1);
  }
  ViewModelInstanceValue::onValueChanged((ViewModelInstanceValue *)this);
  return;
}


// ===== 004f5468  rive::ViewModelInstanceAssetImage::value =====

/* rive::ViewModelInstanceAssetImage::value(rive::RenderImage*) */

void __thiscall
rive::ViewModelInstanceAssetImage::value(ViewModelInstanceAssetImage *this,RenderImage *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  RenderImage *pRVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar6 = *(long *)(this + 0x130);
  pRVar3 = *(RenderImage **)(lVar6 + 0x88);
  if (pRVar3 != param_1) {
    if (param_1 == (RenderImage *)0x0) {
      *(undefined8 *)(lVar6 + 0x88) = 0;
      if ((pRVar3 != (RenderImage *)0x0) &&
         (iVar2 = FUN_00340fe0(0xffffffff,pRVar3 + 8), iVar2 == 1)) {
        (**(code **)(*(long *)pRVar3 + 8))(pRVar3);
      }
      puVar1 = *(undefined8 **)(lVar6 + 0x70);
      for (puVar5 = *(undefined8 **)(lVar6 + 0x68); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        (**(code **)(*(long *)*puVar5 + 0x20))();
      }
    }
    else {
      FUN_00340fb0(1,param_1 + 8);
      lVar6 = *(long *)(this + 0x130);
      plVar4 = *(long **)(lVar6 + 0x88);
      *(RenderImage **)(lVar6 + 0x88) = param_1;
      if ((plVar4 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,plVar4 + 1), iVar2 == 1)) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
      puVar1 = *(undefined8 **)(lVar6 + 0x70);
      for (puVar5 = *(undefined8 **)(lVar6 + 0x68); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        (**(code **)(*(long *)*puVar5 + 0x20))();
      }
    }
    if (*(int *)(this + 0x110) != -1) {
      *(undefined4 *)(this + 0x110) = 0xffffffff;
      (**(code **)(*(long *)this + 0xa8))(this);
    }
    puVar1 = *(undefined8 **)(this + 0xf0);
    for (puVar5 = *(undefined8 **)(this + 0xe8); puVar5 != puVar1; puVar5 = puVar5 + 1) {
      (*(code *)**(undefined8 **)*puVar5)((undefined8 *)*puVar5,0x1000,1);
    }
    ViewModelInstanceValue::onValueChanged((ViewModelInstanceValue *)this);
    return;
  }
  if (*(int *)(this + 0x110) == -1) {
    return;
  }
  *(undefined4 *)(this + 0x110) = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x004f5588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xa8))(this);
  return;
}


// ===== 004f55f0  rive::ViewModelInstanceAssetImage::applyValue =====

/* rive::ViewModelInstanceAssetImage::applyValue(rive::DataValueInteger*) */

void __thiscall
rive::ViewModelInstanceAssetImage::applyValue
          (ViewModelInstanceAssetImage *this,DataValueInteger *param_1)

{
  ulong uVar1;
  RenderImage *pRVar2;
  
  if (((param_1 == (DataValueInteger *)0x0) ||
      (uVar1 = (**(code **)(*(long *)param_1 + 0x10))(param_1,0xb), (uVar1 & 1) == 0)) ||
     (pRVar2 = *(RenderImage **)(*(long *)(param_1 + 0x10) + 0x88), value(this,pRVar2),
     pRVar2 == (RenderImage *)0x0)) {
    if (*(int *)(this + 0x110) != *(int *)(param_1 + 8)) {
      *(int *)(this + 0x110) = *(int *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x004f5678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0xa8))(this);
      return;
    }
  }
  return;
}


// ===== 004f567c  rive::ViewModelInstanceBoolean::propertyValueChanged =====

/* rive::ViewModelInstanceBoolean::propertyValueChanged() */

void __thiscall rive::ViewModelInstanceBoolean::propertyValueChanged(ViewModelInstanceBoolean *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0xf0);
  for (puVar2 = *(undefined8 **)(this + 0xe8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (*(code *)**(undefined8 **)*puVar2)((undefined8 *)*puVar2,0x1000,1);
  }
  ViewModelInstanceValue::onValueChanged((ViewModelInstanceValue *)this);
  return;
}


// ===== 004f56d0  rive::ViewModelInstanceBoolean::applyValue =====

/* rive::ViewModelInstanceBoolean::applyValue(rive::DataValueBoolean*) */

void __thiscall
rive::ViewModelInstanceBoolean::applyValue(ViewModelInstanceBoolean *this,DataValueBoolean *param_1)

{
  if (this[0x110] == *(ViewModelInstanceBoolean *)(param_1 + 8)) {
    return;
  }
  this[0x110] = *(ViewModelInstanceBoolean *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x004f56f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xa8))();
  return;
}


// ===== 004f56f4  FUN_004f56f4 =====

void FUN_004f56f4(void *param_1)

{
  FUN_004f4508();
  operator_delete(param_1);
  return;
}


// ===== 004f5718  FUN_004f5718 =====

undefined8 FUN_004f5718(void)

{
  return 0x1c1;
}


// ===== 004f5720  FUN_004f5720 =====

undefined8 FUN_004f5720(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_2 != 10) && (param_2 != 0x1ac)) && (param_2 != 0x1c1)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 004f5748  FUN_004f5748 =====

undefined8 FUN_004f5748(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar11;
  ulong uVar12;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  uVar5 = 0;
  lVar8 = *(long *)(lVar4 + 0x28);
  if (param_2 < 0x22a) {
    if (param_2 == 4) {
      pcVar7 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar7) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004f58e8;
        }
        pcVar11 = pcVar7 + 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar11;
      } while (cVar2 < '\0');
      param_3[2] = (long)pcVar11;
      if ((char)param_3[3] == '\0') {
        rive::BinaryReader::readString((ulong)param_3);
      }
      else {
LAB_004f58e8:
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
      }
      if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
        operator_delete(*(void **)(param_1 + 0x20));
      }
      *(undefined8 *)(param_1 + 0x18) = uStack_38;
      *(undefined8 *)(param_1 + 0x10) = local_40;
      *(undefined8 *)(param_1 + 0x20) = local_30;
    }
    else {
      if (param_2 != 5) goto LAB_004f5948;
      uVar12 = 0;
      uVar6 = 0;
      pbVar9 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004f58cc;
        }
        pbVar10 = pbVar9 + 1;
        bVar1 = *pbVar9;
        uVar3 = uVar12 & 0x3f;
        uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
        uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
        pbVar9 = pbVar10;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar10;
      if (uVar6 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004f58cc:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
  }
  else if (param_2 == 0x22a) {
    uVar12 = 0;
    uVar6 = 0;
    pbVar9 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004f5920;
      }
      pbVar10 = pbVar9 + 1;
      bVar1 = *pbVar9;
      uVar3 = uVar12 & 0x3f;
      uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar9 = pbVar10;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar10;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004f5920:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x88) = (int)uVar6;
  }
  else {
    if (param_2 != 0x251) goto LAB_004f5948;
    pcVar7 = (char *)param_3[2];
    if ((*param_3 + param_3[1]) - (long)pcVar7 < 1) {
      param_3[2] = *param_3 + param_3[1];
      *(undefined1 *)(param_3 + 3) = 1;
      *(undefined1 *)(param_1 + 0x110) = 0;
    }
    else {
      param_3[2] = (long)(pcVar7 + 1);
      *(bool *)(param_1 + 0x110) = *pcVar7 == '\x01';
    }
  }
  uVar5 = 1;
LAB_004f5948:
  if (*(long *)(lVar4 + 0x28) == lVar8) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f5970  rive::ViewModelInstanceBooleanBase::clone =====

/* rive::ViewModelInstanceBooleanBase::clone() const */

long * __thiscall rive::ViewModelInstanceBooleanBase::clone(ViewModelInstanceBooleanBase *this)

{
  undefined4 uVar1;
  ViewModelInstanceBooleanBase VVar2;
  undefined *puVar3;
  long *plVar4;
  
  plVar4 = (long *)operator_new(0x118);
  plVar4[0x22] = 0;
  plVar4[1] = 0;
  *plVar4 = 0;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[0x11] = 0;
  plVar4[0x10] = 0;
  plVar4[0x13] = 0;
  plVar4[0x12] = 0;
  plVar4[0x15] = 0;
  plVar4[0x14] = 0;
  plVar4[0x17] = 0;
  plVar4[0x16] = 0;
  plVar4[0x19] = 0;
  plVar4[0x18] = 0;
  plVar4[0x1b] = 0;
  plVar4[0x1a] = 0;
  plVar4[0x1d] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x21] = 0;
  plVar4[0x20] = 0;
  plVar4[3] = 0;
  *(undefined8 *)(plVar4 + 2) = 0;
  *(undefined4 *)(plVar4 + 1) = 0xffffffff;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  *(undefined2 *)(plVar4 + 0xc) = 0xfffe;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  plVar4[0xd] = 0;
  plVar4[0x18] = 0;
  plVar4[0x17] = 0;
  plVar4[0x1a] = 0;
  plVar4[0x19] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1b] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x1d] = 0;
  plVar4[0x1f] = 0;
  puVar3 = PTR_vtable_0067d530;
  VVar2 = this[0x110];
  plVar4[0x13] = 0;
  plVar4[0x12] = 0;
  plVar4[0x15] = 0;
  plVar4[0x14] = 0;
  *(ViewModelInstanceBooleanBase *)(plVar4 + 0x22) = VVar2;
  uVar1 = *(undefined4 *)(this + 0x88);
  *plVar4 = (long)(puVar3 + 0x10);
  *(undefined4 *)(plVar4 + 0x11) = uVar1;
  *(undefined4 *)((long)plVar4 + 0x8c) = 1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar4 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar4 + 5) = *(undefined4 *)(this + 0x28);
  return plVar4;
}


// ===== 004f5a38  FUN_004f5a38 =====

void FUN_004f5a38(void *param_1)

{
  FUN_004f4508();
  operator_delete(param_1);
  return;
}


// ===== 004f5a5c  FUN_004f5a5c =====

void FUN_004f5a5c(void)

{
  return;
}


// ===== 004f5a60  rive::ViewModelInstanceColor::propertyValueChanged =====

/* rive::ViewModelInstanceColor::propertyValueChanged() */

void __thiscall rive::ViewModelInstanceColor::propertyValueChanged(ViewModelInstanceColor *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0xf0);
  for (puVar2 = *(undefined8 **)(this + 0xe8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (*(code *)**(undefined8 **)*puVar2)((undefined8 *)*puVar2,0x1000,1);
  }
  ViewModelInstanceValue::onValueChanged((ViewModelInstanceValue *)this);
  return;
}


// ===== 004f5ab4  rive::ViewModelInstanceColor::applyValue =====

/* rive::ViewModelInstanceColor::applyValue(rive::DataValueColor*) */

void __thiscall
rive::ViewModelInstanceColor::applyValue(ViewModelInstanceColor *this,DataValueColor *param_1)

{
  if (*(int *)(this + 0x110) == *(int *)(param_1 + 8)) {
    return;
  }
  *(int *)(this + 0x110) = *(int *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x004f5ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xa8))();
  return;
}


// ===== 004f5ad8  FUN_004f5ad8 =====

void FUN_004f5ad8(void *param_1)

{
  FUN_004f4508();
  operator_delete(param_1);
  return;
}


// ===== 004f5afc  FUN_004f5afc =====

undefined8 FUN_004f5afc(void)

{
  return 0x1aa;
}


// ===== 004f5b04  FUN_004f5b04 =====

undefined8 FUN_004f5b04(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_2 != 10) && (param_2 != 0x1aa)) && (param_2 != 0x1ac)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 004f5b2c  FUN_004f5b2c =====

undefined8 FUN_004f5b2c(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  char *pcVar13;
  char *pcVar14;
  ulong uVar15;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  uVar5 = 0;
  lVar9 = *(long *)(lVar4 + 0x28);
  if (param_2 < 0x22a) {
    if (param_2 == 4) {
      pcVar13 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar13) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004f5cc0;
        }
        pcVar14 = pcVar13 + 1;
        cVar2 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar2 < '\0');
      param_3[2] = (long)pcVar14;
      if ((char)param_3[3] == '\0') {
        rive::BinaryReader::readString((ulong)param_3);
      }
      else {
LAB_004f5cc0:
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
      }
      if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
        operator_delete(*(void **)(param_1 + 0x20));
      }
      *(undefined8 *)(param_1 + 0x18) = uStack_38;
      *(undefined8 *)(param_1 + 0x10) = local_40;
      *(undefined8 *)(param_1 + 0x20) = local_30;
    }
    else {
      if (param_2 != 5) goto LAB_004f5d20;
      uVar15 = 0;
      uVar6 = 0;
      pbVar10 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004f5ca4;
        }
        pbVar11 = pbVar10 + 1;
        bVar1 = *pbVar10;
        uVar3 = uVar15 & 0x3f;
        uVar15 = (ulong)(((uint)uVar15 & 0xff) + 7);
        uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
        pbVar10 = pbVar11;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar11;
      if (uVar6 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004f5ca4:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
  }
  else {
    if (param_2 != 0x22a) {
      if (param_2 == 0x22b) {
        puVar12 = (undefined4 *)param_3[2];
        puVar7 = (undefined4 *)(*param_3 + param_3[1]);
        if ((long)puVar7 - (long)puVar12 < 4) {
          uVar8 = 0;
          *(undefined1 *)(param_3 + 3) = 1;
        }
        else {
          puVar7 = puVar12 + 1;
          uVar8 = *puVar12;
        }
        param_3[2] = (long)puVar7;
        uVar5 = 1;
        *(undefined4 *)(param_1 + 0x110) = uVar8;
      }
      goto LAB_004f5d20;
    }
    uVar15 = 0;
    uVar6 = 0;
    pbVar10 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004f5cf8;
      }
      pbVar11 = pbVar10 + 1;
      bVar1 = *pbVar10;
      uVar3 = uVar15 & 0x3f;
      uVar15 = (ulong)(((uint)uVar15 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar10 = pbVar11;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar11;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004f5cf8:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x88) = (int)uVar6;
  }
  uVar5 = 1;
LAB_004f5d20:
  if (*(long *)(lVar4 + 0x28) == lVar9) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f5d48  rive::ViewModelInstanceColorBase::clone =====

/* rive::ViewModelInstanceColorBase::clone() const */

long * __thiscall rive::ViewModelInstanceColorBase::clone(ViewModelInstanceColorBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)operator_new(0x118);
  plVar3[0x22] = 0;
  plVar3[1] = 0;
  *plVar3 = 0;
  plVar3[5] = 0;
  plVar3[4] = 0;
  plVar3[7] = 0;
  plVar3[6] = 0;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  plVar3[0x13] = 0;
  plVar3[0x12] = 0;
  plVar3[0x15] = 0;
  plVar3[0x14] = 0;
  plVar3[0x17] = 0;
  plVar3[0x16] = 0;
  plVar3[0x19] = 0;
  plVar3[0x18] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x1f] = 0;
  plVar3[0x1e] = 0;
  plVar3[0x21] = 0;
  plVar3[0x20] = 0;
  plVar3[3] = 0;
  *(undefined8 *)(plVar3 + 2) = 0;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  plVar3[6] = 0;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  *(undefined2 *)(plVar3 + 0xc) = 0xfffe;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  plVar3[0xd] = 0;
  plVar3[0x18] = 0;
  plVar3[0x17] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x19] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x1e] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1f] = 0;
  puVar2 = PTR_vtable_0067d538;
  uVar1 = *(undefined4 *)(this + 0x110);
  plVar3[0x13] = 0;
  plVar3[0x12] = 0;
  plVar3[0x15] = 0;
  plVar3[0x14] = 0;
  *(undefined4 *)(plVar3 + 0x22) = uVar1;
  uVar1 = *(undefined4 *)(this + 0x88);
  *plVar3 = (long)(puVar2 + 0x10);
  *(undefined4 *)(plVar3 + 0x11) = uVar1;
  *(undefined4 *)((long)plVar3 + 0x8c) = 1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 004f5e10  FUN_004f5e10 =====

void FUN_004f5e10(void *param_1)

{
  FUN_004f4508();
  operator_delete(param_1);
  return;
}


// ===== 004f5e34  FUN_004f5e34 =====

void FUN_004f5e34(void)

{
  return;
}


// ===== 004f5e38  rive::ViewModelInstanceEnum::propertyValueChanged =====

/* rive::ViewModelInstanceEnum::propertyValueChanged() */

void __thiscall rive::ViewModelInstanceEnum::propertyValueChanged(ViewModelInstanceEnum *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0xf0);
  for (puVar2 = *(undefined8 **)(this + 0xe8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (*(code *)**(undefined8 **)*puVar2)((undefined8 *)*puVar2,0x1000,1);
  }
  ViewModelInstanceValue::onValueChanged((ViewModelInstanceValue *)this);
  return;
}


// ===== 004f5e8c  rive::ViewModelInstanceEnum::value =====

/* rive::ViewModelInstanceEnum::value(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

void __thiscall rive::ViewModelInstanceEnum::value(ViewModelInstanceEnum *this,ulong *param_2)

{
  long lVar1;
  int iVar2;
  ViewModelPropertyEnum *pVVar3;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pVVar3 = *(ViewModelPropertyEnum **)(this + 0xa8);
  if ((*param_2 & 1) == 0) {
    uStack_48 = param_2[1];
    local_50 = *param_2;
    local_40 = (void *)param_2[2];
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_50,(char *)param_2[2],param_2[1]);
  }
  iVar2 = ViewModelPropertyEnum::valueIndex(pVVar3,&local_50);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((iVar2 != -1) && (*(int *)(this + 0x110) != iVar2)) {
    *(int *)(this + 0x110) = iVar2;
    (**(code **)(*(long *)this + 0xa8))(this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != -1);
}


// ===== 004f5f58  rive::ViewModelInstanceEnum::value =====

/* rive::ViewModelInstanceEnum::value(unsigned int) */

long __thiscall rive::ViewModelInstanceEnum::value(ViewModelInstanceEnum *this,uint param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0xa8);
  lVar1 = (**(code **)(*plVar2 + 0x68))(plVar2);
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*plVar2 + 0x68))(plVar2);
    if ((ulong)param_1 < (ulong)(*(long *)(lVar1 + 0x18) - *(long *)(lVar1 + 0x10) >> 3) &&
        param_1 != 0xffffffff) {
      if (*(uint *)(this + 0x110) != param_1) {
        *(uint *)(this + 0x110) = param_1;
        (**(code **)(*(long *)this + 0xa8))(this);
      }
      lVar1 = 1;
    }
    else {
      lVar1 = 0;
    }
  }
  return lVar1;
}


// ===== 004f5fec  rive::ViewModelInstanceEnum::applyValue =====

/* rive::ViewModelInstanceEnum::applyValue(rive::DataValueInteger*) */

void __thiscall
rive::ViewModelInstanceEnum::applyValue(ViewModelInstanceEnum *this,DataValueInteger *param_1)

{
  if (*(int *)(this + 0x110) == *(int *)(param_1 + 8)) {
    return;
  }
  *(int *)(this + 0x110) = *(int *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x004f600c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xa8))();
  return;
}


// ===== 004f6010  FUN_004f6010 =====

void FUN_004f6010(void *param_1)

{
  FUN_004f4508();
  operator_delete(param_1);
  return;
}


// ===== 004f6034  FUN_004f6034 =====

undefined8 FUN_004f6034(void)

{
  return 0x1b0;
}


// ===== 004f603c  FUN_004f603c =====

undefined8 FUN_004f603c(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_2 != 10) && (param_2 != 0x1ac)) && (param_2 != 0x1b0)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 004f6064  FUN_004f6064 =====

undefined8 FUN_004f6064(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  uVar5 = 0;
  lVar7 = *(long *)(lVar4 + 0x28);
  if (param_2 < 0x22a) {
    if (param_2 == 4) {
      pcVar10 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar10) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004f6238;
        }
        pcVar11 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar2 < '\0');
      param_3[2] = (long)pcVar11;
      if ((char)param_3[3] == '\0') {
        rive::BinaryReader::readString((ulong)param_3);
      }
      else {
LAB_004f6238:
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
      }
      if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
        operator_delete(*(void **)(param_1 + 0x20));
      }
      *(undefined8 *)(param_1 + 0x18) = uStack_38;
      *(undefined8 *)(param_1 + 0x10) = local_40;
      *(undefined8 *)(param_1 + 0x20) = local_30;
    }
    else {
      if (param_2 != 5) goto LAB_004f6280;
      uVar12 = 0;
      uVar6 = 0;
      pbVar9 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004f6204;
        }
        pbVar8 = pbVar9 + 1;
        bVar1 = *pbVar9;
        uVar3 = uVar12 & 0x3f;
        uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
        uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
        pbVar9 = pbVar8;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar8;
      if (uVar6 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004f6204:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
  }
  else if (param_2 == 0x22a) {
    uVar12 = 0;
    uVar6 = 0;
    pbVar9 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004f6270;
      }
      pbVar8 = pbVar9 + 1;
      bVar1 = *pbVar9;
      uVar3 = uVar12 & 0x3f;
      uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar9 = pbVar8;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar8;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004f6270:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x88) = (int)uVar6;
  }
  else {
    if (param_2 != 0x230) goto LAB_004f6280;
    uVar12 = 0;
    uVar6 = 0;
    pbVar9 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004f621c;
      }
      pbVar8 = pbVar9 + 1;
      bVar1 = *pbVar9;
      uVar3 = uVar12 & 0x3f;
      uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar9 = pbVar8;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar8;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004f621c:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x110) = (int)uVar6;
  }
  uVar5 = 1;
LAB_004f6280:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f62a8  rive::ViewModelInstanceEnumBase::clone =====

/* rive::ViewModelInstanceEnumBase::clone() const */

long * __thiscall rive::ViewModelInstanceEnumBase::clone(ViewModelInstanceEnumBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)operator_new(0x118);
  plVar3[0x22] = 0;
  plVar3[1] = 0;
  *plVar3 = 0;
  plVar3[5] = 0;
  plVar3[4] = 0;
  plVar3[7] = 0;
  plVar3[6] = 0;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  plVar3[0x13] = 0;
  plVar3[0x12] = 0;
  plVar3[0x15] = 0;
  plVar3[0x14] = 0;
  plVar3[0x17] = 0;
  plVar3[0x16] = 0;
  plVar3[0x19] = 0;
  plVar3[0x18] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x1f] = 0;
  plVar3[0x1e] = 0;
  plVar3[0x21] = 0;
  plVar3[0x20] = 0;
  plVar3[3] = 0;
  *(undefined8 *)(plVar3 + 2) = 0;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  plVar3[6] = 0;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  *(undefined2 *)(plVar3 + 0xc) = 0xfffe;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  plVar3[0xd] = 0;
  plVar3[0x18] = 0;
  plVar3[0x17] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x19] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x1e] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1f] = 0;
  puVar2 = PTR_vtable_0067d548;
  uVar1 = *(undefined4 *)(this + 0x110);
  plVar3[0x13] = 0;
  plVar3[0x12] = 0;
  plVar3[0x15] = 0;
  plVar3[0x14] = 0;
  *(undefined4 *)(plVar3 + 0x22) = uVar1;
  uVar1 = *(undefined4 *)(this + 0x88);
  *plVar3 = (long)(puVar2 + 0x10);
  *(undefined4 *)(plVar3 + 0x11) = uVar1;
  *(undefined4 *)((long)plVar3 + 0x8c) = 1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 004f6370  FUN_004f6370 =====

void FUN_004f6370(void *param_1)

{
  FUN_004f4508();
  operator_delete(param_1);
  return;
}


// ===== 004f6394  FUN_004f6394 =====

void FUN_004f6394(void)

{
  return;
}


// ===== 004f6398  rive::ViewModelInstanceList::~ViewModelInstanceList =====

/* WARNING: Removing unreachable block (ram,0x004f6484) */
/* rive::ViewModelInstanceList::~ViewModelInstanceList() */

void __thiscall rive::ViewModelInstanceList::~ViewModelInstanceList(ViewModelInstanceList *this)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  
  puVar1 = PTR_vtable_0067d540 + 0xd8;
  *(undefined **)this = PTR_vtable_0067d540 + 0x10;
  *(undefined **)(this + 0x118) = puVar1;
  if (*(long *)(this + 0x138) != 0) {
    plVar2 = *(long **)(this + 0x128);
    for (plVar10 = *(long **)(this + 0x120); plVar10 != plVar2; plVar10 = plVar10 + 1) {
      lVar13 = *(long *)(*plVar10 + 0x18);
      if (lVar13 != 0) {
        plVar5 = *(long **)(lVar13 + 200);
        lVar8 = *(long *)(this + 0x138);
        plVar9 = *(long **)(lVar13 + 0xc0);
        plVar6 = plVar9;
        for (; (plVar9 != plVar5 && (plVar6 = plVar9, *plVar9 != lVar8)); plVar9 = plVar9 + 1) {
          plVar6 = plVar5;
        }
        if ((plVar6 != plVar5) && (plVar9 = plVar6 + 1, plVar7 = plVar6, plVar9 != plVar5)) {
          do {
            plVar6 = plVar7;
            if (*plVar9 != lVar8) {
              plVar6 = plVar7 + 1;
              *plVar7 = *plVar9;
            }
            plVar9 = plVar9 + 1;
            plVar7 = plVar6;
          } while (plVar9 != plVar5);
          plVar5 = *(long **)(lVar13 + 200);
        }
        if (plVar6 != plVar5) {
          *(long **)(lVar13 + 200) = plVar6;
        }
      }
    }
  }
  puVar11 = *(undefined8 **)(this + 0x120);
  if (puVar11 != (undefined8 *)0x0) {
    puVar12 = *(undefined8 **)(this + 0x128);
    puVar4 = puVar11;
    if (puVar12 != puVar11) {
      do {
        puVar12 = puVar12 + -1;
        plVar10 = (long *)*puVar12;
        if ((plVar10 != (long *)0x0) &&
           (iVar3 = FUN_00340fe0(0xffffffff,(long)plVar10 + 0x14), iVar3 == 1)) {
          (**(code **)(*plVar10 + 8))(plVar10);
        }
      } while (puVar12 != puVar11);
      puVar4 = *(undefined8 **)(this + 0x120);
    }
    *(undefined8 **)(this + 0x128) = puVar11;
    operator_delete(puVar4);
  }
  FUN_004f4508(this);
  return;
}


// ===== 004f650c  rive::ViewModelInstanceList::~ViewModelInstanceList =====

/* rive::ViewModelInstanceList::~ViewModelInstanceList() */

void __thiscall rive::ViewModelInstanceList::~ViewModelInstanceList(ViewModelInstanceList *this)

{
  ~ViewModelInstanceList(this);
  operator_delete(this);
  return;
}


// ===== 004f6530  FUN_004f6530 =====

undefined8 FUN_004f6530(void)

{
  return 0x1b9;
}


// ===== 004f6538  FUN_004f6538 =====

undefined8 FUN_004f6538(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_2 != 10) && (param_2 != 0x1ac)) && (param_2 != 0x1b9)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 004f6560  FUN_004f6560 =====

undefined8 FUN_004f6560(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  uVar5 = 0;
  lVar7 = *(long *)(lVar4 + 0x28);
  if (param_2 < 0x22a) {
    if (param_2 == 4) {
      pcVar10 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar10) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004f6734;
        }
        pcVar11 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar2 < '\0');
      param_3[2] = (long)pcVar11;
      if ((char)param_3[3] == '\0') {
        rive::BinaryReader::readString((ulong)param_3);
      }
      else {
LAB_004f6734:
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
      }
      if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
        operator_delete(*(void **)(param_1 + 0x20));
      }
      *(undefined8 *)(param_1 + 0x18) = uStack_38;
      *(undefined8 *)(param_1 + 0x10) = local_40;
      *(undefined8 *)(param_1 + 0x20) = local_30;
    }
    else {
      if (param_2 != 5) goto LAB_004f677c;
      uVar12 = 0;
      uVar6 = 0;
      pbVar9 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004f6700;
        }
        pbVar8 = pbVar9 + 1;
        bVar1 = *pbVar9;
        uVar3 = uVar12 & 0x3f;
        uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
        uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
        pbVar9 = pbVar8;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar8;
      if (uVar6 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004f6700:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
  }
  else if (param_2 == 0x22a) {
    uVar12 = 0;
    uVar6 = 0;
    pbVar9 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004f676c;
      }
      pbVar8 = pbVar9 + 1;
      bVar1 = *pbVar9;
      uVar3 = uVar12 & 0x3f;
      uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar9 = pbVar8;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar8;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004f676c:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x88) = (int)uVar6;
  }
  else {
    if (param_2 != 0x3c6) goto LAB_004f677c;
    uVar12 = 0;
    uVar6 = 0;
    pbVar9 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004f6718;
      }
      pbVar8 = pbVar9 + 1;
      bVar1 = *pbVar9;
      uVar3 = uVar12 & 0x3f;
      uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar9 = pbVar8;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar8;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004f6718:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x110) = (int)uVar6;
  }
  uVar5 = 1;
LAB_004f677c:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f67a4  rive::ViewModelInstanceList::clone =====

/* rive::ViewModelInstanceList::clone() const */

long * __thiscall rive::ViewModelInstanceList::clone(ViewModelInstanceList *this)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ViewModelInstance *this_00;
  long *plVar10;
  
  plVar7 = (long *)operator_new(0x140);
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7[5] = 0;
  plVar7[4] = 0;
  plVar7[7] = 0;
  plVar7[6] = 0;
  plVar7[9] = 0;
  plVar7[8] = 0;
  plVar7[0xb] = 0;
  plVar7[10] = 0;
  plVar7[0xd] = 0;
  plVar7[0xc] = 0;
  plVar7[0xf] = 0;
  plVar7[0xe] = 0;
  plVar7[0x11] = 0;
  plVar7[0x10] = 0;
  plVar7[0x13] = 0;
  plVar7[0x12] = 0;
  plVar7[0x15] = 0;
  plVar7[0x14] = 0;
  plVar7[0x17] = 0;
  plVar7[0x16] = 0;
  plVar7[0x19] = 0;
  plVar7[0x18] = 0;
  plVar7[0x1b] = 0;
  plVar7[0x1a] = 0;
  plVar7[0x1d] = 0;
  plVar7[0x1c] = 0;
  plVar7[0x1f] = 0;
  plVar7[0x1e] = 0;
  plVar7[0x21] = 0;
  plVar7[0x20] = 0;
  plVar7[0x23] = 0;
  plVar7[0x22] = 0;
  plVar7[3] = 0;
  *(undefined8 *)(plVar7 + 2) = 0;
  *(undefined4 *)(plVar7 + 1) = 0xffffffff;
  plVar7[6] = 0;
  plVar7[9] = 0;
  plVar7[8] = 0;
  plVar7[0xb] = 0;
  plVar7[10] = 0;
  *(undefined2 *)(plVar7 + 0xc) = 0xfffe;
  plVar7[0xe] = 0;
  plVar7[0xf] = 0;
  plVar7[0xd] = 0;
  plVar7[0x18] = 0;
  plVar7[0x17] = 0;
  plVar7[0x1a] = 0;
  plVar7[0x19] = 0;
  plVar7[0x1c] = 0;
  plVar7[0x1b] = 0;
  plVar7[0x1e] = 0;
  plVar7[0x1d] = 0;
  plVar7[0x1f] = 0;
  puVar5 = PTR_vtable_0067d540;
  plVar7[0x13] = 0;
  plVar7[0x12] = 0;
  plVar7[0x15] = 0;
  plVar7[0x14] = 0;
  plVar7[0x25] = 0;
  plVar7[0x24] = 0;
  plVar7[0x27] = 0;
  plVar7[0x26] = 0;
  plVar7[0x23] = (long)(puVar5 + 0xd8);
  uVar4 = *(undefined4 *)(this + 0x110);
  *plVar7 = (long)(puVar5 + 0x10);
  *(undefined4 *)(plVar7 + 0x22) = uVar4;
  *(undefined4 *)(plVar7 + 0x11) = *(undefined4 *)(this + 0x88);
  *(undefined4 *)((long)plVar7 + 0x8c) = 1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar7 + 2),(basic_string *)(this + 0x10));
  puVar1 = *(undefined8 **)(this + 0x120);
  puVar3 = *(undefined8 **)(this + 0x128);
  *(undefined4 *)(plVar7 + 5) = *(undefined4 *)(this + 0x28);
  for (; puVar1 != puVar3; puVar1 = puVar1 + 1) {
    plVar10 = (long *)*puVar1;
    if (plVar10 != (long *)0x0) {
      FUN_00340fb0(1,(long)plVar10 + 0x14);
    }
    plVar8 = (long *)(**(code **)(*plVar10 + 0x28))(plVar10);
    plVar2 = (long *)plVar7[0x25];
    if (plVar2 < (long *)plVar7[0x26]) {
      if (plVar8 != (long *)0x0) {
        FUN_00340fb0(1,(long)plVar8 + 0x14);
      }
      plVar9 = plVar2 + 1;
      *plVar2 = (long)plVar8;
    }
    else {
      plVar9 = (long *)FUN_003bbd00(plVar7 + 0x24,plVar8);
    }
    this_00 = (ViewModelInstance *)plVar8[3];
    plVar7[0x25] = (long)plVar9;
    if (this_00 != (ViewModelInstance *)0x0) {
      ViewModelInstance::addParent(this_00,(ViewModelInstance *)plVar7[0x27]);
    }
    iVar6 = FUN_00340fe0(0xffffffff,(long)plVar8 + 0x14);
    if (iVar6 == 1) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
    iVar6 = FUN_00340fe0(0xffffffff,(long)plVar10 + 0x14);
    if (iVar6 == 1) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
  }
  return plVar7;
}


// ===== 004f6958  rive::ViewModelInstanceList::advanced =====

/* rive::ViewModelInstanceList::advanced() */

void __thiscall rive::ViewModelInstanceList::advanced(ViewModelInstanceList *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar1 = *(undefined8 **)(this + 0x128);
  for (puVar7 = *(undefined8 **)(this + 0x120); puVar7 != puVar1; puVar7 = puVar7 + 1) {
    plVar5 = (long *)*puVar7;
    if (plVar5 != (long *)0x0) {
      FUN_00340fb0(1,(long)plVar5 + 0x14);
    }
    lVar4 = plVar5[3];
    if (lVar4 != 0) {
      puVar2 = *(undefined8 **)(lVar4 + 0xb0);
      for (puVar8 = *(undefined8 **)(lVar4 + 0xa8); puVar8 != puVar2; puVar8 = puVar8 + 1) {
        plVar6 = (long *)*puVar8;
        if (plVar6 != (long *)0x0) {
          FUN_00340fb0(1,(long)plVar6 + 0x8c);
        }
        (**(code **)(*plVar6 + 0xa0))(plVar6);
        iVar3 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x8c);
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
    iVar3 = FUN_00340fe0(0xffffffff,(long)plVar5 + 0x14);
    if (iVar3 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(this + 0x90);
  this[0xb0] = (ViewModelInstanceList)((byte)this[0xb0] & 0xfd);
  return;
}


// ===== 004f6a5c  FUN_004f6a5c =====

void FUN_004f6a5c(void)

{
  return;
}


// ===== 004f6a60  rive::ViewModelInstanceList::updateList =====

/* WARNING: Removing unreachable block (ram,0x004f6b40) */
/* rive::ViewModelInstanceList::updateList(std::__ndk1::vector<rive::rcp<rive::ViewModelInstanceListItem>,
   std::__ndk1::allocator<rive::rcp<rive::ViewModelInstanceListItem> > >*) */

void __thiscall rive::ViewModelInstanceList::updateList(ViewModelInstanceList *this,vector *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  void *pvVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  
  if (param_1 == (vector *)0x0) {
    return;
  }
  if (*(long *)(this + 0x138) != 0) {
    plVar2 = *(long **)(this + 0x128);
    for (plVar19 = *(long **)(this + 0x120); plVar19 != plVar2; plVar19 = plVar19 + 1) {
      lVar21 = *(long *)(*plVar19 + 0x18);
      if (lVar21 != 0) {
        plVar5 = *(long **)(lVar21 + 200);
        lVar9 = *(long *)(this + 0x138);
        plVar13 = *(long **)(lVar21 + 0xc0);
        plVar6 = plVar13;
        for (; (plVar13 != plVar5 && (plVar6 = plVar13, *plVar13 != lVar9)); plVar13 = plVar13 + 1)
        {
          plVar6 = plVar5;
        }
        if ((plVar6 != plVar5) && (plVar13 = plVar6 + 1, plVar7 = plVar6, plVar13 != plVar5)) {
          do {
            plVar6 = plVar7;
            if (*plVar13 != lVar9) {
              plVar6 = plVar7 + 1;
              *plVar7 = *plVar13;
            }
            plVar13 = plVar13 + 1;
            plVar7 = plVar6;
          } while (plVar13 != plVar5);
          plVar5 = *(long **)(lVar21 + 200);
        }
        if (plVar6 != plVar5) {
          *(long **)(lVar21 + 200) = plVar6;
        }
      }
    }
  }
  puVar17 = *(undefined8 **)(this + 0x120);
  puVar20 = *(undefined8 **)(this + 0x128);
  if (puVar20 != puVar17) {
    do {
      puVar20 = puVar20 + -1;
      plVar19 = (long *)*puVar20;
      if ((plVar19 != (long *)0x0) &&
         (iVar3 = FUN_00340fe0(0xffffffff,(long)plVar19 + 0x14), iVar3 == 1)) {
        (**(code **)(*plVar19 + 8))(plVar19);
      }
    } while (puVar20 != puVar17);
    puVar20 = *(undefined8 **)(this + 0x120);
  }
  *(undefined8 **)(this + 0x128) = puVar17;
  uVar18 = *(long *)(param_1 + 8) - *(long *)param_1;
  if ((ulong)((long)uVar18 >> 3) <= (ulong)(*(long *)(this + 0x130) - (long)puVar20 >> 3))
  goto LAB_004f6cc4;
  if ((ulong)((long)uVar18 >> 3) >> 0x3d != 0) {
    auVar25 = FUN_00371f80();
    updateList((ViewModelInstanceList *)(auVar25._0_8_ + -0x118),auVar25._8_8_);
    return;
  }
  pvVar4 = operator_new(uVar18);
  lVar21 = (long)puVar17 - (long)puVar20;
  puVar1 = (undefined8 *)((long)pvVar4 + lVar21);
  if (lVar21 == 0) {
    *(undefined8 **)(this + 0x120) = puVar1;
    *(undefined8 **)(this + 0x128) = puVar1;
    *(ulong *)(this + 0x130) = (long)pvVar4 + uVar18;
  }
  else {
    uVar10 = lVar21 - 8;
    puVar8 = puVar1;
    if ((uVar10 < 0x68) ||
       (((undefined8 *)((long)puVar17 + ((uVar10 ^ 0xffffffffffffffff) & 0xfffffffffffffff8)) <
         puVar1 && ((undefined8 *)((long)pvVar4 + (uVar10 & 7)) < puVar17)))) {
LAB_004f6c90:
      do {
        puVar17 = puVar17 + -1;
        uVar12 = *puVar17;
        *puVar17 = 0;
        puVar8 = puVar8 + -1;
        *puVar8 = uVar12;
      } while (puVar17 != puVar20);
    }
    else {
      uVar10 = (uVar10 >> 3) + 1;
      uVar11 = uVar10 & 0x3ffffffffffffffc;
      puVar14 = (undefined8 *)((long)pvVar4 + lVar21 + -0x10);
      uVar16 = uVar11;
      puVar8 = puVar17;
      do {
        puVar15 = puVar8 + -4;
        uVar24 = puVar8[-3];
        uVar23 = *puVar15;
        uVar22 = puVar8[-1];
        uVar12 = puVar8[-2];
        uVar16 = uVar16 - 4;
        puVar8[-3] = 0;
        *puVar15 = 0;
        puVar8[-1] = 0;
        puVar8[-2] = 0;
        puVar14[-1] = uVar24;
        puVar14[-2] = uVar23;
        puVar14[1] = uVar22;
        *puVar14 = uVar12;
        puVar14 = puVar14 + -4;
        puVar8 = puVar15;
      } while (uVar16 != 0);
      puVar8 = puVar1 + -uVar11;
      puVar17 = puVar17 + -uVar11;
      if (uVar10 != uVar11) goto LAB_004f6c90;
    }
    puVar17 = *(undefined8 **)(this + 0x120);
    puVar20 = *(undefined8 **)(this + 0x128);
    *(undefined8 **)(this + 0x120) = puVar8;
    *(undefined8 **)(this + 0x128) = puVar1;
    *(ulong *)(this + 0x130) = (long)pvVar4 + uVar18;
    while (puVar20 != puVar17) {
      puVar20 = puVar20 + -1;
      plVar19 = (long *)*puVar20;
      if ((plVar19 != (long *)0x0) &&
         (iVar3 = FUN_00340fe0(0xffffffff,(long)plVar19 + 0x14), iVar3 == 1)) {
        (**(code **)(*plVar19 + 8))(plVar19);
      }
    }
  }
  if (puVar17 != (undefined8 *)0x0) {
    operator_delete(puVar17);
  }
LAB_004f6cc4:
  plVar2 = *(long **)(param_1 + 8);
  for (plVar19 = *(long **)param_1; plVar19 != plVar2; plVar19 = plVar19 + 1) {
    plVar13 = *(long **)(this + 0x128);
    lVar21 = *plVar19;
    if (plVar13 < *(long **)(this + 0x130)) {
      if (lVar21 != 0) {
        FUN_00340fb0(1,lVar21 + 0x14);
      }
      plVar5 = plVar13 + 1;
      *plVar13 = lVar21;
    }
    else {
      plVar5 = (long *)FUN_003bbd00(this + 0x120,lVar21);
    }
    *(long **)(this + 0x128) = plVar5;
    if ((*(ViewModelInstance **)(this + 0x138) != (ViewModelInstance *)0x0) &&
       (*(ViewModelInstance **)(*plVar19 + 0x18) != (ViewModelInstance *)0x0)) {
      ViewModelInstance::addParent
                (*(ViewModelInstance **)(*plVar19 + 0x18),*(ViewModelInstance **)(this + 0x138));
    }
  }
  puVar20 = *(undefined8 **)(this + 0xf0);
  for (puVar17 = *(undefined8 **)(this + 0xe8); puVar17 != puVar20; puVar17 = puVar17 + 1) {
    (*(code *)**(undefined8 **)*puVar17)((undefined8 *)*puVar17,0x1000,1);
  }
  ViewModelInstanceValue::onValueChanged((ViewModelInstanceValue *)this);
  return;
}


// ===== 004f6db4  rive::ViewModelInstanceList::updateList =====

/* non-virtual thunk to
   rive::ViewModelInstanceList::updateList(std::__ndk1::vector<rive::rcp<rive::ViewModelInstanceListItem>,
   std::__ndk1::allocator<rive::rcp<rive::ViewModelInstanceListItem> > >*) */

void __thiscall rive::ViewModelInstanceList::updateList(ViewModelInstanceList *this,vector *param_1)

{
  updateList(this + -0x118,param_1);
  return;
}


// ===== 004f6dbc  rive::ViewModelInstanceList::propertyValueChanged =====

/* rive::ViewModelInstanceList::propertyValueChanged() */

void __thiscall rive::ViewModelInstanceList::propertyValueChanged(ViewModelInstanceList *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0xf0);
  for (puVar2 = *(undefined8 **)(this + 0xe8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (*(code *)**(undefined8 **)*puVar2)((undefined8 *)*puVar2,0x1000,1);
  }
  ViewModelInstanceValue::onValueChanged((ViewModelInstanceValue *)this);
  return;
}


// ===== 004f6e10  rive::ViewModelInstanceList::addItem =====

/* rive::ViewModelInstanceList::addItem(rive::rcp<rive::ViewModelInstanceListItem>) */

void __thiscall rive::ViewModelInstanceList::addItem(ViewModelInstanceList *this,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  plVar1 = *(long **)(this + 0x128);
  if (plVar1 < *(long **)(this + 0x130)) {
    lVar5 = *param_2;
    if (lVar5 != 0) {
      FUN_00340fb0(1,lVar5 + 0x14);
    }
    plVar3 = plVar1 + 1;
    *plVar1 = lVar5;
  }
  else {
    plVar3 = (long *)FUN_003bbd00(this + 0x120,*param_2);
  }
  lVar5 = *param_2;
  *(long **)(this + 0x128) = plVar3;
  if (*(ViewModelInstance **)(lVar5 + 0x18) != (ViewModelInstance *)0x0) {
    ViewModelInstance::addParent
              (*(ViewModelInstance **)(lVar5 + 0x18),*(ViewModelInstance **)(this + 0x138));
  }
  puVar2 = *(undefined8 **)(this + 0xf0);
  for (puVar4 = *(undefined8 **)(this + 0xe8); puVar4 != puVar2; puVar4 = puVar4 + 1) {
    (*(code *)**(undefined8 **)*puVar4)((undefined8 *)*puVar4,0x1000,1);
  }
  ViewModelInstanceValue::onValueChanged((ViewModelInstanceValue *)this);
  return;
}


// ===== 004f6eb8  rive::ViewModelInstanceList::addItemAt =====

/* rive::ViewModelInstanceList::addItemAt(rive::rcp<rive::ViewModelInstanceListItem>, int) */

undefined8 __thiscall
rive::ViewModelInstanceList::addItemAt(ViewModelInstanceList *this,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  
  if ((int)param_3 < 0) {
    return 0;
  }
  lVar10 = *(long *)(this + 0x120);
  plVar17 = *(long **)(this + 0x128);
  uVar19 = (ulong)param_3;
  uVar7 = (long)plVar17 - lVar10 >> 3;
  if (uVar7 < uVar19) {
    return 0;
  }
  plVar15 = (long *)(lVar10 + uVar19 * 8);
  if (plVar17 < *(long **)(this + 0x130)) {
    if ((long)plVar15 - (long)plVar17 == 0) {
      lVar10 = *param_2;
      if (lVar10 != 0) {
        FUN_00340fb0(1,lVar10 + 0x14);
      }
      *plVar17 = lVar10;
      *(long **)(this + 0x128) = plVar17 + 1;
    }
    else {
      plVar18 = plVar17 + -1;
      plVar16 = plVar17;
      if (plVar18 < plVar17) {
        lVar10 = *plVar18;
        *plVar18 = 0;
        *plVar17 = lVar10;
        plVar16 = plVar17 + 1;
      }
      *(long **)(this + 0x128) = plVar16;
      if (plVar17 != plVar15 + 1) {
        lVar10 = ((long)plVar15 - (long)plVar17) + 8;
        plVar17 = plVar17 + -2;
        do {
          lVar5 = *plVar17;
          *plVar17 = 0;
          plVar16 = (long *)*plVar18;
          *plVar18 = lVar5;
          if ((plVar16 != (long *)0x0) &&
             (iVar2 = FUN_00340fe0(0xffffffff,(long)plVar16 + 0x14), iVar2 == 1)) {
            (**(code **)(*plVar16 + 8))(plVar16);
          }
          lVar10 = lVar10 + 8;
          plVar18 = plVar18 + -1;
          plVar17 = plVar17 + -1;
        } while (lVar10 != 0);
        plVar16 = *(long **)(this + 0x128);
      }
      if (plVar15 !=
          param_2 + ((param_2 >= plVar15 && param_2 <= plVar16) &&
                    (param_2 < plVar15 || plVar16 != param_2))) {
        lVar10 = param_2[(param_2 >= plVar15 && param_2 <= plVar16) &&
                         (param_2 < plVar15 || plVar16 != param_2)];
        if (lVar10 != 0) {
          FUN_00340fb0(1,lVar10 + 0x14);
        }
        plVar17 = (long *)*plVar15;
        *plVar15 = lVar10;
        if ((plVar17 != (long *)0x0) &&
           (iVar2 = FUN_00340fe0(0xffffffff,(long)plVar17 + 0x14), iVar2 == 1)) {
          (**(code **)(*plVar17 + 8))(plVar17);
        }
      }
    }
    goto LAB_004f7250;
  }
  uVar7 = uVar7 + 1;
  if (uVar7 >> 0x3d != 0) {
    FUN_00371f80();
LAB_004f72fc:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar4 = (long)*(long **)(this + 0x130) - lVar10;
  uVar8 = (long)uVar4 >> 2;
  if (uVar8 <= uVar7) {
    uVar8 = uVar7;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar8 = 0x1fffffffffffffff;
  }
  if (uVar8 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar8 >> 0x3d != 0) goto LAB_004f72fc;
    pvVar3 = operator_new(uVar8 << 3);
  }
  plVar16 = (long *)((long)pvVar3 + uVar19 * 8);
  plVar17 = (long *)((long)pvVar3 + uVar8 * 8);
  if (uVar8 == uVar19) {
    if (param_3 == 0) {
      plVar16 = (long *)operator_new(8);
      plVar17 = plVar16 + 1;
      if (pvVar3 != (void *)0x0) {
        operator_delete(pvVar3);
      }
    }
    else {
      plVar16 = (long *)((long)plVar16 - (uVar19 * 4 + 4 & 0x7fffffff8));
    }
  }
  lVar10 = *param_2;
  if (lVar10 != 0) {
    FUN_00340fb0(1,lVar10 + 0x14);
  }
  plVar9 = *(long **)(this + 0x120);
  plVar6 = plVar16 + 1;
  *plVar16 = lVar10;
  plVar18 = plVar16;
  if (plVar9 != plVar15) {
    uVar7 = (long)plVar15 + (-8 - (long)plVar9);
    plVar11 = plVar15;
    if ((0x77 < uVar7) &&
       ((plVar16 <= (long *)((long)plVar15 + (-8 - (uVar7 & 0xfffffffffffffff8))) ||
        (plVar15 <= (long *)((long)plVar16 + (-8 - (uVar7 & 0xfffffffffffffff8))))))) {
      plVar12 = plVar16 + -2;
      uVar7 = (uVar7 >> 3) + 1;
      uVar8 = uVar7 & 0x3ffffffffffffffc;
      plVar11 = plVar15 + -uVar8;
      uVar19 = uVar8;
      plVar18 = plVar15;
      do {
        plVar13 = plVar18 + -4;
        lVar21 = plVar18[-3];
        lVar20 = *plVar13;
        lVar5 = plVar18[-1];
        lVar10 = plVar18[-2];
        uVar19 = uVar19 - 4;
        plVar18[-3] = 0;
        *plVar13 = 0;
        plVar18[-1] = 0;
        plVar18[-2] = 0;
        plVar12[-1] = lVar21;
        plVar12[-2] = lVar20;
        plVar12[1] = lVar5;
        *plVar12 = lVar10;
        plVar12 = plVar12 + -4;
        plVar18 = plVar13;
      } while (uVar19 != 0);
      plVar18 = plVar16 + -uVar8;
      if (uVar7 == uVar8) goto LAB_004f7188;
    }
    do {
      plVar11 = plVar11 + -1;
      lVar10 = *plVar11;
      *plVar11 = 0;
      plVar18 = plVar18 + -1;
      *plVar18 = lVar10;
    } while (plVar11 != plVar9);
  }
LAB_004f7188:
  plVar9 = *(long **)(this + 0x128);
  lVar10 = (long)plVar9 - (long)plVar15;
  if (lVar10 != 0) {
    uVar7 = lVar10 - 8;
    if ((uVar7 < 0x78) ||
       ((plVar15 < (long *)((long)plVar6 + (uVar7 & 0xfffffffffffffff8) + 8) &&
        (plVar6 < (long *)((long)plVar15 + (uVar7 & 0xfffffffffffffff8) + 8))))) {
LAB_004f7218:
      do {
        lVar10 = *plVar15;
        plVar16 = plVar15 + 1;
        *plVar15 = 0;
        plVar15 = plVar6 + 1;
        *plVar6 = lVar10;
        plVar6 = plVar15;
        plVar15 = plVar16;
      } while (plVar16 != plVar9);
    }
    else {
      plVar16 = plVar16 + 3;
      uVar7 = (uVar7 >> 3) + 1;
      uVar8 = uVar7 & 0x3ffffffffffffffc;
      uVar19 = uVar8;
      plVar11 = plVar15;
      do {
        lVar5 = plVar11[1];
        lVar10 = *plVar11;
        lVar21 = plVar11[3];
        lVar20 = plVar11[2];
        uVar19 = uVar19 - 4;
        plVar11[1] = 0;
        *plVar11 = 0;
        plVar11[3] = 0;
        plVar11[2] = 0;
        plVar16[-1] = lVar5;
        plVar16[-2] = lVar10;
        plVar16[1] = lVar21;
        *plVar16 = lVar20;
        plVar16 = plVar16 + 4;
        plVar11 = plVar11 + 4;
      } while (uVar19 != 0);
      plVar6 = plVar6 + uVar8;
      plVar15 = plVar15 + uVar8;
      if (uVar7 != uVar8) goto LAB_004f7218;
    }
    plVar15 = *(long **)(this + 0x128);
  }
  plVar16 = *(long **)(this + 0x120);
  *(long **)(this + 0x120) = plVar18;
  *(long **)(this + 0x128) = plVar6;
  *(long **)(this + 0x130) = plVar17;
  plVar17 = plVar15;
  while (plVar15 != plVar16) {
    plVar15 = plVar15 + -1;
    plVar18 = (long *)*plVar15;
    plVar17 = plVar16;
    if ((plVar18 != (long *)0x0) &&
       (iVar2 = FUN_00340fe0(0xffffffff,(long)plVar18 + 0x14), iVar2 == 1)) {
      (**(code **)(*plVar18 + 8))(plVar18);
    }
  }
  if (plVar17 != (long *)0x0) {
    operator_delete(plVar17);
  }
LAB_004f7250:
  if (*(ViewModelInstance **)(*param_2 + 0x18) != (ViewModelInstance *)0x0) {
    ViewModelInstance::addParent
              (*(ViewModelInstance **)(*param_2 + 0x18),*(ViewModelInstance **)(this + 0x138));
  }
  puVar1 = *(undefined8 **)(this + 0xf0);
  for (puVar14 = *(undefined8 **)(this + 0xe8); puVar14 != puVar1; puVar14 = puVar14 + 1) {
    (*(code *)**(undefined8 **)*puVar14)((undefined8 *)*puVar14,0x1000,1);
  }
  ViewModelInstanceValue::onValueChanged((ViewModelInstanceValue *)this);
  return 1;
}


// ===== 004f7300  rive::ViewModelInstanceList::internalAddItem =====

/* rive::ViewModelInstanceList::internalAddItem(rive::rcp<rive::ViewModelInstanceListItem>) */

void __thiscall
rive::ViewModelInstanceList::internalAddItem(ViewModelInstanceList *this,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(this + 0x128);
  if (plVar1 < *(long **)(this + 0x130)) {
    lVar3 = *param_2;
    if (lVar3 != 0) {
      FUN_00340fb0(1,lVar3 + 0x14);
    }
    plVar2 = plVar1 + 1;
    *plVar1 = lVar3;
  }
  else {
    plVar2 = (long *)FUN_003bbd00(this + 0x120,*param_2);
  }
  lVar3 = *param_2;
  *(long **)(this + 0x128) = plVar2;
  if (*(ViewModelInstance **)(lVar3 + 0x18) != (ViewModelInstance *)0x0) {
    ViewModelInstance::addParent
              (*(ViewModelInstance **)(lVar3 + 0x18),*(ViewModelInstance **)(this + 0x138));
    return;
  }
  return;
}


// ===== 004f7384  rive::ViewModelInstanceList::removeItem =====

/* WARNING: Removing unreachable block (ram,0x004f745c) */
/* rive::ViewModelInstanceList::removeItem(int) */

void __thiscall rive::ViewModelInstanceList::removeItem(ViewModelInstanceList *this,int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  
  if (-1 < param_1) {
    uVar10 = (ulong)(uint)param_1;
    if (uVar10 < (ulong)(*(long *)(this + 0x128) - *(long *)(this + 0x120) >> 3)) {
      plVar7 = *(long **)(*(long *)(this + 0x120) + uVar10 * 8);
      if (plVar7 != (long *)0x0) {
        FUN_00340fb0(1,(long)plVar7 + 0x14);
      }
      lVar12 = plVar7[3];
      if (lVar12 != 0) {
        plVar3 = *(long **)(lVar12 + 200);
        lVar6 = *(long *)(this + 0x138);
        plVar8 = *(long **)(lVar12 + 0xc0);
        plVar4 = plVar8;
        for (; (plVar8 != plVar3 && (plVar4 = plVar8, *plVar8 != lVar6)); plVar8 = plVar8 + 1) {
          plVar4 = plVar3;
        }
        if ((plVar4 != plVar3) && (plVar8 = plVar4 + 1, plVar5 = plVar4, plVar8 != plVar3)) {
          do {
            plVar4 = plVar5;
            if (*plVar8 != lVar6) {
              plVar4 = plVar5 + 1;
              *plVar5 = *plVar8;
            }
            plVar8 = plVar8 + 1;
            plVar5 = plVar4;
          } while (plVar8 != plVar3);
          plVar3 = *(long **)(lVar12 + 200);
        }
        if (plVar4 != plVar3) {
          *(long **)(lVar12 + 200) = plVar4;
        }
      }
      puVar1 = *(undefined8 **)(this + 0x128);
      puVar9 = (undefined8 *)(*(long *)(this + 0x120) + uVar10 * 8);
      puVar11 = puVar9 + 1;
      if (puVar11 != puVar1) {
        do {
          puVar9 = puVar11;
          plVar8 = (long *)puVar9[-1];
          puVar9[-1] = *puVar9;
          *puVar9 = 0;
          if ((plVar8 != (long *)0x0) &&
             (iVar2 = FUN_00340fe0(0xffffffff,(long)plVar8 + 0x14), iVar2 == 1)) {
            (**(code **)(*plVar8 + 8))(plVar8);
          }
          puVar11 = puVar9 + 1;
        } while (puVar9 + 1 != puVar1);
        puVar11 = *(undefined8 **)(this + 0x128);
      }
      while (puVar11 != puVar9) {
        puVar11 = puVar11 + -1;
        plVar8 = (long *)*puVar11;
        if ((plVar8 != (long *)0x0) &&
           (iVar2 = FUN_00340fe0(0xffffffff,(long)plVar8 + 0x14), iVar2 == 1)) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      }
      puVar11 = *(undefined8 **)(this + 0xe8);
      puVar1 = *(undefined8 **)(this + 0xf0);
      *(undefined8 **)(this + 0x128) = puVar9;
      for (; puVar11 != puVar1; puVar11 = puVar11 + 1) {
        (*(code *)**(undefined8 **)*puVar11)((undefined8 *)*puVar11,0x1000,1);
      }
      ViewModelInstanceValue::onValueChanged((ViewModelInstanceValue *)this);
      if ((plVar7 != (long *)0x0) &&
         (iVar2 = FUN_00340fe0(0xffffffff,(long)plVar7 + 0x14), iVar2 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x004f7574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 8))(plVar7);
        return;
      }
    }
  }
  return;
}


// ===== 004f758c  rive::ViewModelInstanceList::pop =====

/* rive::ViewModelInstanceList::pop() */

void rive::ViewModelInstanceList::pop(void)

{
  undefined8 *puVar1;
  int iVar2;
  ViewModelInstanceValue *in_x0;
  long *in_x8;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(in_x0 + 0x128) == *(long *)(in_x0 + 0x120)) {
    *in_x8 = 0;
    return;
  }
  plVar5 = (long *)(*(long *)(in_x0 + 0x128) + -8);
  lVar7 = *plVar5;
  if (lVar7 == 0) {
    *in_x8 = 0;
  }
  else {
    FUN_00340fb0(1,lVar7 + 0x14);
    lVar6 = *(long *)(in_x0 + 0x128);
    *in_x8 = lVar7;
    plVar5 = (long *)(lVar6 + -8);
    plVar4 = (long *)*plVar5;
    if ((plVar4 != (long *)0x0) &&
       (iVar2 = FUN_00340fe0(0xffffffff,(long)plVar4 + 0x14), iVar2 == 1)) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
  puVar3 = *(undefined8 **)(in_x0 + 0xe8);
  puVar1 = *(undefined8 **)(in_x0 + 0xf0);
  *(long **)(in_x0 + 0x128) = plVar5;
  for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    (*(code *)**(undefined8 **)*puVar3)((undefined8 *)*puVar3,0x1000,1);
  }
  ViewModelInstanceValue::onValueChanged(in_x0);
  return;
}


// ===== 004f7664  rive::ViewModelInstanceList::shift =====

/* rive::ViewModelInstanceList::shift() */

void rive::ViewModelInstanceList::shift(void)

{
  ViewModelInstanceList *in_x0;
  long *in_x8;
  long lVar1;
  
  if (*(long **)(in_x0 + 0x128) != *(long **)(in_x0 + 0x120)) {
    lVar1 = **(long **)(in_x0 + 0x120);
    if (lVar1 != 0) {
      FUN_00340fb0(1,lVar1 + 0x14);
    }
    *in_x8 = lVar1;
    removeItem(in_x0,0);
    return;
  }
  *in_x8 = 0;
  return;
}


// ===== 004f76cc  rive::ViewModelInstanceList::removeItem =====

/* WARNING: Removing unreachable block (ram,0x004f77d0) */
/* WARNING: Removing unreachable block (ram,0x004f77e4) */
/* WARNING: Removing unreachable block (ram,0x004f77f8) */
/* WARNING: Removing unreachable block (ram,0x004f77c0) */
/* WARNING: Removing unreachable block (ram,0x004f780c) */
/* WARNING: Removing unreachable block (ram,0x004f78e4) */
/* rive::ViewModelInstanceList::removeItem(rive::rcp<rive::ViewModelInstanceListItem>) */

void __thiscall rive::ViewModelInstanceList::removeItem(ViewModelInstanceList *this,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  plVar8 = *(long **)(this + 0x120);
  plVar4 = *(long **)(this + 0x128);
  plVar3 = plVar8;
  if (plVar8 != plVar4) {
    do {
      plVar3 = plVar8;
      if (*plVar8 == *param_2) break;
      plVar8 = plVar8 + 1;
      plVar3 = plVar4;
    } while (plVar8 != plVar4);
  }
  if ((plVar3 != plVar4) && (plVar8 = plVar3 + 1, plVar8 != plVar4)) {
    do {
      lVar9 = *plVar8;
      if (lVar9 != *param_2) {
        *plVar8 = 0;
        plVar7 = (long *)*plVar3;
        *plVar3 = lVar9;
        if ((plVar7 != (long *)0x0) &&
           (iVar2 = FUN_00340fe0(0xffffffff,(long)plVar7 + 0x14), iVar2 == 1)) {
          (**(code **)(*plVar7 + 8))(plVar7);
        }
        plVar3 = plVar3 + 1;
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar4);
    plVar4 = *(long **)(this + 0x128);
  }
  if (plVar3 != plVar4) {
    while (plVar4 != plVar3) {
      plVar4 = plVar4 + -1;
      plVar8 = (long *)*plVar4;
      if ((plVar8 != (long *)0x0) &&
         (iVar2 = FUN_00340fe0(0xffffffff,(long)plVar8 + 0x14), iVar2 == 1)) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
    *(long **)(this + 0x128) = plVar3;
  }
  lVar9 = *(long *)(*param_2 + 0x18);
  if (lVar9 != 0) {
    plVar3 = *(long **)(lVar9 + 200);
    lVar5 = *(long *)(this + 0x138);
    plVar8 = *(long **)(lVar9 + 0xc0);
    plVar4 = plVar8;
    for (; (plVar8 != plVar3 && (plVar4 = plVar8, *plVar8 != lVar5)); plVar8 = plVar8 + 1) {
      plVar4 = plVar3;
    }
    if ((plVar4 != plVar3) && (plVar8 = plVar4 + 1, plVar7 = plVar4, plVar8 != plVar3)) {
      do {
        plVar4 = plVar7;
        if (*plVar8 != lVar5) {
          plVar4 = plVar7 + 1;
          *plVar7 = *plVar8;
        }
        plVar8 = plVar8 + 1;
        plVar7 = plVar4;
      } while (plVar8 != plVar3);
      plVar3 = *(long **)(lVar9 + 200);
    }
    if (plVar4 != plVar3) {
      *(long **)(lVar9 + 200) = plVar4;
    }
  }
  puVar1 = *(undefined8 **)(this + 0xf0);
  for (puVar6 = *(undefined8 **)(this + 0xe8); puVar6 != puVar1; puVar6 = puVar6 + 1) {
    (*(code *)**(undefined8 **)*puVar6)((undefined8 *)*puVar6,0x1000,1);
  }
  ViewModelInstanceValue::onValueChanged((ViewModelInstanceValue *)this);
  return;
}


// ===== 004f793c  rive::ViewModelInstanceList::removeAllItems =====

/* WARNING: Removing unreachable block (ram,0x004f7a10) */
/* rive::ViewModelInstanceList::removeAllItems() */

void __thiscall rive::ViewModelInstanceList::removeAllItems(ViewModelInstanceList *this)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  
  plVar10 = *(long **)(this + 0x120);
  plVar2 = *(long **)(this + 0x128);
  if (plVar2 != plVar10) {
    do {
      lVar12 = *(long *)(*plVar10 + 0x18);
      if (lVar12 != 0) {
        plVar5 = *(long **)(lVar12 + 200);
        lVar8 = *(long *)(this + 0x138);
        plVar9 = *(long **)(lVar12 + 0xc0);
        plVar6 = plVar9;
        for (; (plVar9 != plVar5 && (plVar6 = plVar9, *plVar9 != lVar8)); plVar9 = plVar9 + 1) {
          plVar6 = plVar5;
        }
        if ((plVar6 != plVar5) && (plVar9 = plVar6 + 1, plVar7 = plVar6, plVar9 != plVar5)) {
          do {
            plVar6 = plVar7;
            if (*plVar9 != lVar8) {
              plVar6 = plVar7 + 1;
              *plVar7 = *plVar9;
            }
            plVar9 = plVar9 + 1;
            plVar7 = plVar6;
          } while (plVar9 != plVar5);
          plVar5 = *(long **)(lVar12 + 200);
        }
        if (plVar6 != plVar5) {
          *(long **)(lVar12 + 200) = plVar6;
        }
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar2);
    puVar1 = *(undefined8 **)(this + 0x120);
    puVar11 = *(undefined8 **)(this + 0x128);
    while (puVar11 != puVar1) {
      puVar11 = puVar11 + -1;
      plVar10 = (long *)*puVar11;
      if ((plVar10 != (long *)0x0) &&
         (iVar4 = FUN_00340fe0(0xffffffff,(long)plVar10 + 0x14), iVar4 == 1)) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
    puVar11 = *(undefined8 **)(this + 0xe8);
    puVar3 = *(undefined8 **)(this + 0xf0);
    *(undefined8 **)(this + 0x128) = puVar1;
    for (; puVar11 != puVar3; puVar11 = puVar11 + 1) {
      (*(code *)**(undefined8 **)*puVar11)((undefined8 *)*puVar11,0x1000,1);
    }
    ViewModelInstanceValue::onValueChanged((ViewModelInstanceValue *)this);
    return;
  }
  return;
}


// ===== 004f7ab8  rive::ViewModelInstanceList::removeAllItemsWithViewModelInstance =====

/* WARNING: Removing unreachable block (ram,0x004f7ba0) */
/* rive::ViewModelInstanceList::removeAllItemsWithViewModelInstance(rive::ViewModelInstance*) */

void __thiscall
rive::ViewModelInstanceList::removeAllItemsWithViewModelInstance
          (ViewModelInstanceList *this,ViewModelInstance *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  
  if (param_1 != (ViewModelInstance *)0x0) {
    plVar10 = *(long **)(this + 0x120);
    plVar6 = *(long **)(this + 0x128);
    if (plVar10 != plVar6) {
      bVar2 = false;
      plVar8 = plVar10;
      do {
        while (*(ViewModelInstance **)(*plVar10 + 0x18) == param_1) {
          plVar12 = *(long **)(param_1 + 200);
          lVar5 = *(long *)(this + 0x138);
          plVar6 = *(long **)(param_1 + 0xc0);
          plVar9 = plVar6;
          for (; (plVar6 != plVar12 && (plVar9 = plVar6, *plVar6 != lVar5)); plVar6 = plVar6 + 1) {
            plVar9 = plVar12;
          }
          if ((plVar9 != plVar12) && (plVar6 = plVar9 + 1, plVar4 = plVar9, plVar6 != plVar12)) {
            do {
              plVar9 = plVar4;
              if (*plVar6 != lVar5) {
                plVar9 = plVar4 + 1;
                *plVar4 = *plVar6;
              }
              plVar6 = plVar6 + 1;
              plVar4 = plVar9;
            } while (plVar6 != plVar12);
            plVar12 = *(long **)(param_1 + 200);
          }
          if (plVar9 != plVar12) {
            *(long **)(param_1 + 200) = plVar9;
          }
          plVar9 = *(long **)(this + 0x128);
          plVar12 = plVar10 + 1;
          plVar6 = plVar10;
          if (plVar12 != plVar9) {
            lVar11 = -*(long *)(this + 0x120);
            lVar5 = *(long *)(this + 0x120) + (long)(plVar8 + 1);
            do {
              puVar7 = (undefined8 *)(lVar5 + lVar11);
              plVar6 = (long *)puVar7[-1];
              puVar7[-1] = *puVar7;
              *puVar7 = 0;
              if ((plVar6 != (long *)0x0) &&
                 (iVar3 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x14), iVar3 == 1)) {
                (**(code **)(*plVar6 + 8))(plVar6);
              }
              lVar5 = lVar5 + 8;
              plVar6 = (long *)(lVar5 + lVar11);
            } while (plVar6 != plVar9);
            plVar12 = *(long **)(this + 0x128);
            plVar6 = plVar6 + -1;
          }
          while (plVar12 != plVar6) {
            plVar12 = plVar12 + -1;
            plVar8 = (long *)*plVar12;
            if ((plVar8 != (long *)0x0) &&
               (iVar3 = FUN_00340fe0(0xffffffff,(long)plVar8 + 0x14), iVar3 == 1)) {
              (**(code **)(*plVar8 + 8))(plVar8);
            }
          }
          bVar2 = true;
          *(long **)(this + 0x128) = plVar6;
          plVar8 = plVar10;
          if (plVar6 == plVar10) goto LAB_004f7c7c;
        }
        plVar10 = plVar10 + 1;
        plVar8 = plVar8 + 1;
      } while (plVar10 != plVar6);
      if (!bVar2) {
        return;
      }
LAB_004f7c7c:
      puVar1 = *(undefined8 **)(this + 0xf0);
      for (puVar7 = *(undefined8 **)(this + 0xe8); puVar7 != puVar1; puVar7 = puVar7 + 1) {
        (*(code *)**(undefined8 **)*puVar7)((undefined8 *)*puVar7,0x1000,1);
      }
      ViewModelInstanceValue::onValueChanged((ViewModelInstanceValue *)this);
      return;
    }
  }
  return;
}


// ===== 004f7cdc  rive::ViewModelInstanceList::item =====

/* rive::ViewModelInstanceList::item(unsigned int) */

void rive::ViewModelInstanceList::item(uint param_1)

{
  ulong in_x1;
  long *in_x8;
  long lVar1;
  
  lVar1 = *(long *)((ulong)param_1 + 0x120);
  if ((in_x1 & 0xffffffff) < (ulong)(*(long *)((ulong)param_1 + 0x128) - lVar1 >> 3)) {
    lVar1 = *(long *)(lVar1 + (in_x1 & 0xffffffff) * 8);
    if (lVar1 != 0) {
      FUN_00340fb0(1,lVar1 + 0x14);
    }
  }
  else {
    lVar1 = 0;
  }
  *in_x8 = lVar1;
  return;
}


// ===== 004f7d30  rive::ViewModelInstanceList::swap =====

/* rive::ViewModelInstanceList::swap(unsigned int, unsigned int) */

void __thiscall
rive::ViewModelInstanceList::swap(ViewModelInstanceList *this,uint param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  lVar1 = *(long *)(this + 0x120);
  uVar5 = *(long *)(this + 0x128) - lVar1 >> 3;
  if (param_1 < uVar5 && param_2 < uVar5) {
    lVar4 = (ulong)param_2 * 8;
    lVar3 = (ulong)param_1 * 8;
    uVar6 = *(undefined8 *)(lVar1 + lVar3);
    *(undefined8 *)(lVar1 + lVar3) = *(undefined8 *)(lVar1 + lVar4);
    *(undefined8 *)(lVar1 + lVar4) = uVar6;
    puVar2 = *(undefined8 **)(this + 0xf0);
    for (puVar7 = *(undefined8 **)(this + 0xe8); puVar7 != puVar2; puVar7 = puVar7 + 1) {
      (*(code *)**(undefined8 **)*puVar7)((undefined8 *)*puVar7,0x1000,1);
    }
    ViewModelInstanceValue::onValueChanged((ViewModelInstanceValue *)this);
    return;
  }
  return;
}


// ===== 004f7dc0  rive::ViewModelInstanceListItem::import =====

/* rive::ViewModelInstanceListItem::import(rive::ImportStack&) */

undefined8 __thiscall
rive::ViewModelInstanceListItem::import(ViewModelInstanceListItem *this,ImportStack *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *puVar6;
  ViewModelInstance *this_00;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  
  uVar7 = *(ulong *)(param_1 + 8);
  if (uVar7 == 0) {
    return 1;
  }
  uVar13 = NEON_cnt(uVar7,1);
  uVar12 = NEON_uaddlv(uVar13,1);
  uVar14 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12);
  if ((uVar14 & 0xffffffff) < 2) {
    uVar8 = (ulong)((uint)uVar7 - 1) & 0x1b9;
  }
  else {
    uVar8 = 0x1b9;
    if (uVar7 < 0x1ba) {
      uVar1 = (uint)uVar7 & 0xffff;
      uVar3 = 0;
      if ((uVar7 & 0xffff) != 0) {
        uVar3 = 0x1b9 / uVar1;
      }
      uVar8 = (ulong)(0x1b9 - uVar3 * uVar1);
    }
  }
  plVar9 = *(long **)(*(long *)param_1 + uVar8 * 8);
  if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
    do {
      uVar10 = plVar9[1];
      if (uVar10 == 0x1b9) {
        if ((short)plVar9[2] == 0x1b9) {
          if (plVar9[3] == 0) {
            return 1;
          }
          lVar11 = *(long *)(plVar9[3] + 8);
          FUN_00340fb0(1,this + 0x14);
          puVar2 = *(undefined8 **)(lVar11 + 0x128);
          if (puVar2 < *(undefined8 **)(lVar11 + 0x130)) {
            FUN_00340fb0(1,this + 0x14);
            puVar6 = puVar2 + 1;
            *puVar2 = this;
          }
          else {
            puVar6 = (undefined8 *)FUN_003bbd00(lVar11 + 0x120,this);
          }
          this_00 = *(ViewModelInstance **)(this + 0x18);
          *(undefined8 **)(lVar11 + 0x128) = puVar6;
          if (this_00 != (ViewModelInstance *)0x0) {
            ViewModelInstance::addParent(this_00,*(ViewModelInstance **)(lVar11 + 0x138));
          }
          iVar5 = FUN_00340fe0(0xffffffff,this + 0x14);
          if (iVar5 == 1) {
            (**(code **)(*(long *)this + 8))(this);
          }
          iVar5 = FUN_00340fe0(0xffffffff,this + 0x14);
          if (iVar5 == 1) {
            (**(code **)(*(long *)this + 8))(this);
          }
          return 0;
        }
      }
      else {
        if ((uVar14 & 0xffffffff) < 2) {
          uVar10 = uVar10 & uVar7 - 1;
        }
        else if (uVar7 <= uVar10) {
          uVar4 = 0;
          if (uVar7 != 0) {
            uVar4 = uVar10 / uVar7;
          }
          uVar10 = uVar10 - uVar4 * uVar7;
        }
        if (uVar10 != uVar8) {
          return 1;
        }
      }
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
  }
  return 1;
}


// ===== 004f7f58  FUN_004f7f58 =====

void FUN_004f7f58(long *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[3];
  *param_1 = (long)(PTR_vtable_0067d270 + 0x10);
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar2 + 0xa4), iVar1 == 1))
  {
                    /* WARNING: Could not recover jumptable at 0x004f7fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 004f7fb4  FUN_004f7fb4 =====

void FUN_004f7fb4(long *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[3];
  *param_1 = (long)(PTR_vtable_0067d270 + 0x10);
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar2 + 0xa4), iVar1 == 1))
  {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 004f8010  FUN_004f8010 =====

undefined8 FUN_004f8010(void)

{
  return 0x1ab;
}


// ===== 004f8018  FUN_004f8018 =====

bool FUN_004f8018(undefined8 param_1,short param_2)

{
  return param_2 == 0x1ab;
}


// ===== 004f8028  FUN_004f8028 =====

undefined8 FUN_004f8028(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  if (param_2 == 0x226) {
    uVar6 = 0;
    uVar3 = 0;
    pbVar4 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004f8108;
      }
      pbVar5 = pbVar4 + 1;
      bVar1 = *pbVar4;
      uVar2 = uVar6 & 0x3f;
      uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar4 = pbVar5;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar5;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004f8108:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x10) = (int)uVar3;
    return 1;
  }
  if (param_2 != 0x225) {
    return 0;
  }
  uVar6 = 0;
  uVar3 = 0;
  pbVar4 = (byte *)param_3[2];
  do {
    if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
      *(undefined1 *)(param_3 + 3) = 1;
      goto LAB_004f80ec;
    }
    pbVar5 = pbVar4 + 1;
    bVar1 = *pbVar4;
    uVar2 = uVar6 & 0x3f;
    uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
    uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
    pbVar4 = pbVar5;
  } while ((char)bVar1 < '\0');
  param_3[2] = (long)pbVar5;
  if (uVar3 >> 0x20 != 0) {
    *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004f80ec:
    uVar3 = 0;
    param_3[2] = *param_3 + param_3[1];
  }
  *(int *)(param_1 + 0xc) = (int)uVar3;
  return 1;
}


// ===== 004f811c  FUN_004f811c =====

void FUN_004f811c(void)

{
  return;
}


// ===== 004f8120  FUN_004f8120 =====

void FUN_004f8120(void)

{
  return;
}


// ===== 004f8124  rive::ViewModelInstanceListItemBase::clone =====

/* rive::ViewModelInstanceListItemBase::clone() const */

void __thiscall rive::ViewModelInstanceListItemBase::clone(ViewModelInstanceListItemBase *this)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)operator_new(0x28);
  puVar1 = PTR_vtable_0067d270;
  uVar3 = *(undefined8 *)(this + 0xc);
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  *(undefined4 *)((long)plVar2 + 0x14) = 1;
  plVar2[3] = 0;
  plVar2[4] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined8 *)((long)plVar2 + 0xc) = uVar3;
  return;
}


// ===== 004f8174  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 004f8178  rive::ViewModelInstanceNumber::propertyValueChanged =====

/* rive::ViewModelInstanceNumber::propertyValueChanged() */

void __thiscall rive::ViewModelInstanceNumber::propertyValueChanged(ViewModelInstanceNumber *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0xf0);
  for (puVar2 = *(undefined8 **)(this + 0xe8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (*(code *)**(undefined8 **)*puVar2)((undefined8 *)*puVar2,0x1000,1);
  }
  ViewModelInstanceValue::onValueChanged((ViewModelInstanceValue *)this);
  return;
}


// ===== 004f81cc  rive::ViewModelInstanceNumber::applyValue =====

/* rive::ViewModelInstanceNumber::applyValue(rive::DataValueNumber*) */

void __thiscall
rive::ViewModelInstanceNumber::applyValue(ViewModelInstanceNumber *this,DataValueNumber *param_1)

{
  if (*(float *)(this + 0x110) == *(float *)(param_1 + 8)) {
    return;
  }
  *(float *)(this + 0x110) = *(float *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x004f81ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xa8))();
  return;
}


// ===== 004f81f0  FUN_004f81f0 =====

void FUN_004f81f0(void *param_1)

{
  FUN_004f4508();
  operator_delete(param_1);
  return;
}


// ===== 004f8214  FUN_004f8214 =====

undefined8 FUN_004f8214(void)

{
  return 0x1ba;
}


// ===== 004f821c  FUN_004f821c =====

undefined8 FUN_004f821c(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_2 != 10) && (param_2 != 0x1ac)) && (param_2 != 0x1ba)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 004f8244  FUN_004f8244 =====

undefined8 FUN_004f8244(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  uVar5 = 0;
  lVar9 = *(long *)(lVar4 + 0x28);
  if (param_2 < 0x22a) {
    if (param_2 == 4) {
      pcVar12 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar12) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004f83d8;
        }
        pcVar13 = pcVar12 + 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar13;
      } while (cVar2 < '\0');
      param_3[2] = (long)pcVar13;
      if ((char)param_3[3] == '\0') {
        rive::BinaryReader::readString((ulong)param_3);
      }
      else {
LAB_004f83d8:
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
      }
      if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
        operator_delete(*(void **)(param_1 + 0x20));
      }
      *(undefined8 *)(param_1 + 0x18) = uStack_38;
      *(undefined8 *)(param_1 + 0x10) = local_40;
      *(undefined8 *)(param_1 + 0x20) = local_30;
    }
    else {
      if (param_2 != 5) goto LAB_004f8438;
      uVar14 = 0;
      uVar6 = 0;
      pbVar10 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004f83bc;
        }
        pbVar11 = pbVar10 + 1;
        bVar1 = *pbVar10;
        uVar3 = uVar14 & 0x3f;
        uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
        uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
        pbVar10 = pbVar11;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar11;
      if (uVar6 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004f83bc:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
  }
  else {
    if (param_2 != 0x22a) {
      if (param_2 == 0x23f) {
        puVar8 = (undefined4 *)param_3[2];
        puVar7 = (undefined4 *)(*param_3 + param_3[1]);
        if ((long)puVar7 - (long)puVar8 < 4) {
          uVar15 = 0;
          *(undefined1 *)(param_3 + 3) = 1;
        }
        else {
          puVar7 = puVar8 + 1;
          uVar15 = *puVar8;
        }
        param_3[2] = (long)puVar7;
        uVar5 = 1;
        *(undefined4 *)(param_1 + 0x110) = uVar15;
      }
      goto LAB_004f8438;
    }
    uVar14 = 0;
    uVar6 = 0;
    pbVar10 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004f8410;
      }
      pbVar11 = pbVar10 + 1;
      bVar1 = *pbVar10;
      uVar3 = uVar14 & 0x3f;
      uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar10 = pbVar11;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar11;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004f8410:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x88) = (int)uVar6;
  }
  uVar5 = 1;
LAB_004f8438:
  if (*(long *)(lVar4 + 0x28) == lVar9) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f8460  rive::ViewModelInstanceNumberBase::clone =====

/* rive::ViewModelInstanceNumberBase::clone() const */

long * __thiscall rive::ViewModelInstanceNumberBase::clone(ViewModelInstanceNumberBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)operator_new(0x118);
  plVar3[0x22] = 0;
  plVar3[1] = 0;
  *plVar3 = 0;
  plVar3[5] = 0;
  plVar3[4] = 0;
  plVar3[7] = 0;
  plVar3[6] = 0;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  plVar3[0x13] = 0;
  plVar3[0x12] = 0;
  plVar3[0x15] = 0;
  plVar3[0x14] = 0;
  plVar3[0x17] = 0;
  plVar3[0x16] = 0;
  plVar3[0x19] = 0;
  plVar3[0x18] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x1f] = 0;
  plVar3[0x1e] = 0;
  plVar3[0x21] = 0;
  plVar3[0x20] = 0;
  plVar3[3] = 0;
  *(undefined8 *)(plVar3 + 2) = 0;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  plVar3[6] = 0;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  *(undefined2 *)(plVar3 + 0xc) = 0xfffe;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  plVar3[0xd] = 0;
  plVar3[0x18] = 0;
  plVar3[0x17] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x19] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x1e] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1f] = 0;
  puVar2 = PTR_vtable_0067d528;
  plVar3[0x13] = 0;
  plVar3[0x12] = 0;
  plVar3[0x15] = 0;
  plVar3[0x14] = 0;
  uVar1 = *(undefined4 *)(this + 0x88);
  *(undefined4 *)(plVar3 + 0x22) = *(undefined4 *)(this + 0x110);
  *plVar3 = (long)(puVar2 + 0x10);
  *(undefined4 *)(plVar3 + 0x11) = uVar1;
  *(undefined4 *)((long)plVar3 + 0x8c) = 1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 004f8528  FUN_004f8528 =====

void FUN_004f8528(void *param_1)

{
  FUN_004f4508();
  operator_delete(param_1);
  return;
}


// ===== 004f854c  FUN_004f854c =====

void FUN_004f854c(void)

{
  return;
}


// ===== 004f8550  rive::ViewModelInstanceString::propertyValueChanged =====

/* rive::ViewModelInstanceString::propertyValueChanged() */

void __thiscall rive::ViewModelInstanceString::propertyValueChanged(ViewModelInstanceString *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0xf0);
  for (puVar2 = *(undefined8 **)(this + 0xe8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (*(code *)**(undefined8 **)*puVar2)((undefined8 *)*puVar2,0x1000,1);
  }
  ViewModelInstanceValue::onValueChanged((ViewModelInstanceValue *)this);
  return;
}


// ===== 004f85a4  rive::ViewModelInstanceString::applyValue =====

/* rive::ViewModelInstanceString::applyValue(rive::DataValueString*) */

void __thiscall
rive::ViewModelInstanceString::applyValue(ViewModelInstanceString *this,DataValueString *param_1)

{
  size_t sVar1;
  size_t sVar2;
  ViewModelInstanceString VVar3;
  long lVar4;
  int iVar5;
  ViewModelInstanceString *__s2;
  ulong uVar6;
  ViewModelInstanceString *pVVar7;
  byte bVar8;
  ulong local_50;
  size_t sStack_48;
  ViewModelInstanceString *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (((byte)param_1[8] & 1) == 0) {
    sStack_48 = *(size_t *)(param_1 + 0x10);
    local_50 = *(ulong *)(param_1 + 8);
    local_40 = *(ViewModelInstanceString **)(param_1 + 0x18);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_50,*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  VVar3 = this[0x110];
  uVar6 = (ulong)((byte)VVar3 >> 1);
  sVar1 = uVar6;
  if (((byte)VVar3 & 1) != 0) {
    sVar1 = *(size_t *)(this + 0x118);
  }
  bVar8 = (byte)local_50._0_1_ & 1;
  sVar2 = (ulong)((byte)local_50._0_1_ >> 1);
  if ((local_50 & 1) != 0) {
    sVar2 = sStack_48;
  }
  if (sVar1 == sVar2) {
    __s2 = (ViewModelInstanceString *)((ulong)&local_50 | 1);
    if ((local_50 & 1) != 0) {
      __s2 = local_40;
    }
    if (((byte)VVar3 & 1) == 0) {
      if (1 < (byte)VVar3) {
        pVVar7 = this + 0x111;
        do {
          if (*pVVar7 != *__s2) goto LAB_004f867c;
          uVar6 = uVar6 - 1;
          pVVar7 = pVVar7 + 1;
          __s2 = __s2 + 1;
        } while (uVar6 != 0);
      }
      goto LAB_004f86a0;
    }
    iVar5 = memcmp(*(void **)(this + 0x120),__s2,*(size_t *)(this + 0x118));
    if (iVar5 == 0) goto LAB_004f86a0;
  }
LAB_004f867c:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x110),(basic_string *)&local_50);
  (**(code **)(*(long *)this + 0xa8))(this);
  bVar8 = (byte)local_50._0_1_ & 1;
LAB_004f86a0:
  if (bVar8 != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004f86d4  FUN_004f86d4 =====

void FUN_004f86d4(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d598 + 0x10);
  if ((*(byte *)(param_1 + 0x22) & 1) != 0) {
    operator_delete((void *)param_1[0x24]);
  }
  FUN_004f4508(param_1);
  return;
}


// ===== 004f8718  FUN_004f8718 =====

void FUN_004f8718(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d598 + 0x10);
  if ((*(byte *)(param_1 + 0x22) & 1) != 0) {
    operator_delete((void *)param_1[0x24]);
  }
  FUN_004f4508(param_1);
  operator_delete(param_1);
  return;
}


// ===== 004f8760  FUN_004f8760 =====

undefined8 FUN_004f8760(void)

{
  return 0x1b1;
}


// ===== 004f8768  FUN_004f8768 =====

undefined8 FUN_004f8768(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_2 != 10) && (param_2 != 0x1ac)) && (param_2 != 0x1b1)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 004f8790  FUN_004f8790 =====

undefined8 FUN_004f8790(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  uVar5 = 0;
  lVar7 = *(long *)(lVar4 + 0x28);
  if (param_2 < 0x22a) {
    if (param_2 == 4) {
      pcVar10 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar10) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004f899c;
        }
        pcVar11 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar2 < '\0');
      param_3[2] = (long)pcVar11;
      if ((char)param_3[3] == '\0') {
        rive::BinaryReader::readString((ulong)param_3);
      }
      else {
LAB_004f899c:
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
      }
      if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
        operator_delete(*(void **)(param_1 + 0x20));
      }
      *(undefined8 *)(param_1 + 0x18) = uStack_38;
      *(undefined8 *)(param_1 + 0x10) = local_40;
      *(undefined8 *)(param_1 + 0x20) = local_30;
    }
    else {
      if (param_2 != 5) goto LAB_004f89e4;
      uVar12 = 0;
      uVar6 = 0;
      pbVar8 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar8) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004f893c;
        }
        pbVar9 = pbVar8 + 1;
        bVar1 = *pbVar8;
        uVar3 = uVar12 & 0x3f;
        uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
        uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
        pbVar8 = pbVar9;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar9;
      if (uVar6 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004f893c:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
  }
  else if (param_2 == 0x22a) {
    uVar12 = 0;
    uVar6 = 0;
    pbVar8 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar8) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004f89d4;
      }
      pbVar9 = pbVar8 + 1;
      bVar1 = *pbVar8;
      uVar3 = uVar12 & 0x3f;
      uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar8 = pbVar9;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar9;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004f89d4:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x88) = (int)uVar6;
  }
  else {
    if (param_2 != 0x231) goto LAB_004f89e4;
    pcVar10 = (char *)param_3[2];
    do {
      if ((char *)(*param_3 + param_3[1]) <= pcVar10) {
        param_3[2] = *param_3 + param_3[1];
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004f8958;
      }
      pcVar11 = pcVar10 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar2 < '\0');
    param_3[2] = (long)pcVar11;
    if ((char)param_3[3] == '\0') {
      rive::BinaryReader::readString((ulong)param_3);
    }
    else {
LAB_004f8958:
      local_40 = 0;
      uStack_38 = 0;
      local_30 = 0;
    }
    if ((*(byte *)(param_1 + 0x110) & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x120));
    }
    *(undefined8 *)(param_1 + 0x118) = uStack_38;
    *(undefined8 *)(param_1 + 0x110) = local_40;
    *(undefined8 *)(param_1 + 0x120) = local_30;
  }
  uVar5 = 1;
LAB_004f89e4:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f8a0c  rive::ViewModelInstanceStringBase::clone =====

/* rive::ViewModelInstanceStringBase::clone() const */

long * __thiscall rive::ViewModelInstanceStringBase::clone(ViewModelInstanceStringBase *this)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)operator_new(0x128);
  plVar2[0x24] = 0;
  plVar2[1] = 0;
  *plVar2 = 0;
  plVar2[3] = 0;
  *(undefined8 *)(plVar2 + 2) = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  plVar2[5] = 0;
  plVar2[4] = 0;
  plVar2[7] = 0;
  plVar2[6] = 0;
  plVar2[9] = 0;
  plVar2[8] = 0;
  plVar2[0xb] = 0;
  plVar2[10] = 0;
  plVar2[6] = 0;
  plVar2[9] = 0;
  plVar2[8] = 0;
  plVar2[0xb] = 0;
  plVar2[10] = 0;
  plVar2[0xd] = 0;
  plVar2[0xc] = 0;
  plVar2[0xf] = 0;
  plVar2[0xe] = 0;
  *(undefined2 *)(plVar2 + 0xc) = 0xfffe;
  plVar2[0x11] = 0;
  plVar2[0x10] = 0;
  plVar2[0x13] = 0;
  plVar2[0x12] = 0;
  plVar2[0x15] = 0;
  plVar2[0x14] = 0;
  plVar2[0x17] = 0;
  plVar2[0x16] = 0;
  plVar2[0x19] = 0;
  plVar2[0x18] = 0;
  plVar2[0x1b] = 0;
  plVar2[0x1a] = 0;
  plVar2[0x1d] = 0;
  plVar2[0x1c] = 0;
  plVar2[0x1f] = 0;
  plVar2[0x1e] = 0;
  plVar2[0x21] = 0;
  plVar2[0x20] = 0;
  plVar2[0x23] = 0;
  plVar2[0x22] = 0;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  plVar2[0xd] = 0;
  *(undefined4 *)((long)plVar2 + 0x8c) = 1;
  plVar2[0x18] = 0;
  plVar2[0x17] = 0;
  plVar2[0x1a] = 0;
  plVar2[0x19] = 0;
  plVar2[0x1c] = 0;
  plVar2[0x1b] = 0;
  plVar2[0x1e] = 0;
  plVar2[0x1d] = 0;
  plVar2[0x1f] = 0;
  puVar1 = PTR_vtable_0067d520;
  plVar2[0x13] = 0;
  plVar2[0x12] = 0;
  plVar2[0x15] = 0;
  plVar2[0x14] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 0x22),(basic_string *)(this + 0x110));
  *(undefined4 *)(plVar2 + 0x11) = *(undefined4 *)(this + 0x88);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  return plVar2;
}


// ===== 004f8aec  FUN_004f8aec =====

void FUN_004f8aec(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d598 + 0x10);
  if ((*(byte *)(param_1 + 0x22) & 1) != 0) {
    operator_delete((void *)param_1[0x24]);
  }
  FUN_004f4508(param_1);
  operator_delete(param_1);
  return;
}


// ===== 004f8b34  FUN_004f8b34 =====

void FUN_004f8b34(void)

{
  return;
}


// ===== 004f8b38  rive::ViewModelInstanceSymbolListIndex::propertyValueChanged =====

/* rive::ViewModelInstanceSymbolListIndex::propertyValueChanged() */

void __thiscall
rive::ViewModelInstanceSymbolListIndex::propertyValueChanged(ViewModelInstanceSymbolListIndex *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0xf0);
  for (puVar2 = *(undefined8 **)(this + 0xe8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (*(code *)**(undefined8 **)*puVar2)((undefined8 *)*puVar2,0x1000,1);
  }
  ViewModelInstanceValue::onValueChanged((ViewModelInstanceValue *)this);
  return;
}


// ===== 004f8b8c  rive::ViewModelInstanceSymbolListIndex::applyValue =====

/* rive::ViewModelInstanceSymbolListIndex::applyValue(rive::DataValueInteger*) */

void __thiscall
rive::ViewModelInstanceSymbolListIndex::applyValue
          (ViewModelInstanceSymbolListIndex *this,DataValueInteger *param_1)

{
  if (*(int *)(this + 0x110) == *(int *)(param_1 + 8)) {
    return;
  }
  *(int *)(this + 0x110) = *(int *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x004f8bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xa8))();
  return;
}


// ===== 004f8bb0  FUN_004f8bb0 =====

void FUN_004f8bb0(void *param_1)

{
  FUN_004f4508();
  operator_delete(param_1);
  return;
}


// ===== 004f8bd4  FUN_004f8bd4 =====

undefined8 FUN_004f8bd4(void)

{
  return 0x236;
}


// ===== 004f8bdc  FUN_004f8bdc =====

undefined8 FUN_004f8bdc(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  param_2 = param_2 & 0xffff;
  uVar1 = 1;
  if (((1 < param_2 - 0x235) && (param_2 != 10)) && (param_2 != 0x1ac)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 004f8c08  FUN_004f8c08 =====

undefined8 FUN_004f8c08(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  uVar5 = 0;
  lVar7 = *(long *)(lVar4 + 0x28);
  if (param_2 < 0x22a) {
    if (param_2 == 4) {
      pcVar10 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar10) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004f8ddc;
        }
        pcVar11 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar2 < '\0');
      param_3[2] = (long)pcVar11;
      if ((char)param_3[3] == '\0') {
        rive::BinaryReader::readString((ulong)param_3);
      }
      else {
LAB_004f8ddc:
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
      }
      if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
        operator_delete(*(void **)(param_1 + 0x20));
      }
      *(undefined8 *)(param_1 + 0x18) = uStack_38;
      *(undefined8 *)(param_1 + 0x10) = local_40;
      *(undefined8 *)(param_1 + 0x20) = local_30;
    }
    else {
      if (param_2 != 5) goto LAB_004f8e24;
      uVar12 = 0;
      uVar6 = 0;
      pbVar9 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004f8da8;
        }
        pbVar8 = pbVar9 + 1;
        bVar1 = *pbVar9;
        uVar3 = uVar12 & 0x3f;
        uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
        uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
        pbVar9 = pbVar8;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar8;
      if (uVar6 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004f8da8:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
  }
  else if (param_2 == 0x22a) {
    uVar12 = 0;
    uVar6 = 0;
    pbVar9 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004f8e14;
      }
      pbVar8 = pbVar9 + 1;
      bVar1 = *pbVar9;
      uVar3 = uVar12 & 0x3f;
      uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar9 = pbVar8;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar8;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004f8e14:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x88) = (int)uVar6;
  }
  else {
    if (param_2 != 0x32e) goto LAB_004f8e24;
    uVar12 = 0;
    uVar6 = 0;
    pbVar9 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004f8dc0;
      }
      pbVar8 = pbVar9 + 1;
      bVar1 = *pbVar9;
      uVar3 = uVar12 & 0x3f;
      uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar9 = pbVar8;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar8;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004f8dc0:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x110) = (int)uVar6;
  }
  uVar5 = 1;
LAB_004f8e24:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f8e4c  rive::ViewModelInstanceSymbolListIndexBase::clone =====

/* rive::ViewModelInstanceSymbolListIndexBase::clone() const */

long * __thiscall
rive::ViewModelInstanceSymbolListIndexBase::clone(ViewModelInstanceSymbolListIndexBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)operator_new(0x118);
  plVar3[0x22] = 0;
  plVar3[1] = 0;
  *plVar3 = 0;
  plVar3[5] = 0;
  plVar3[4] = 0;
  plVar3[7] = 0;
  plVar3[6] = 0;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  plVar3[0x13] = 0;
  plVar3[0x12] = 0;
  plVar3[0x15] = 0;
  plVar3[0x14] = 0;
  plVar3[0x17] = 0;
  plVar3[0x16] = 0;
  plVar3[0x19] = 0;
  plVar3[0x18] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x1f] = 0;
  plVar3[0x1e] = 0;
  plVar3[0x21] = 0;
  plVar3[0x20] = 0;
  plVar3[3] = 0;
  *(undefined8 *)(plVar3 + 2) = 0;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  plVar3[6] = 0;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  *(undefined2 *)(plVar3 + 0xc) = 0xfffe;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  plVar3[0xd] = 0;
  plVar3[0x18] = 0;
  plVar3[0x17] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x19] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x1e] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1f] = 0;
  puVar2 = PTR_vtable_0067d560;
  uVar1 = *(undefined4 *)(this + 0x110);
  plVar3[0x13] = 0;
  plVar3[0x12] = 0;
  plVar3[0x15] = 0;
  plVar3[0x14] = 0;
  *(undefined4 *)(plVar3 + 0x22) = uVar1;
  uVar1 = *(undefined4 *)(this + 0x88);
  *plVar3 = (long)(puVar2 + 0x10);
  *(undefined4 *)(plVar3 + 0x11) = uVar1;
  *(undefined4 *)((long)plVar3 + 0x8c) = 1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 004f8f14  FUN_004f8f14 =====

void FUN_004f8f14(void *param_1)

{
  FUN_004f4508();
  operator_delete(param_1);
  return;
}


// ===== 004f8f38  FUN_004f8f38 =====

void FUN_004f8f38(void)

{
  return;
}


// ===== 004f8f3c  rive::ViewModelInstanceTrigger::propertyValueChanged =====

/* rive::ViewModelInstanceTrigger::propertyValueChanged() */

void __thiscall rive::ViewModelInstanceTrigger::propertyValueChanged(ViewModelInstanceTrigger *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0xf0);
  for (puVar2 = *(undefined8 **)(this + 0xe8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (*(code *)**(undefined8 **)*puVar2)((undefined8 *)*puVar2,0x1000,1);
  }
  ViewModelInstanceValue::onValueChanged((ViewModelInstanceValue *)this);
  return;
}


// ===== 004f8f90  rive::ViewModelInstanceTrigger::advanced =====

/* rive::ViewModelInstanceTrigger::advanced() */

void __thiscall rive::ViewModelInstanceTrigger::advanced(ViewModelInstanceTrigger *this)

{
  ViewModelInstanceTrigger VVar1;
  ViewModelInstanceTrigger VVar2;
  
  VVar1 = this[0xb0];
  VVar2 = VVar1;
  if (((byte)VVar1 >> 3 & 1) == 0) {
    VVar2 = (ViewModelInstanceTrigger)((byte)VVar1 | 8);
    this[0xb0] = VVar2;
  }
  if (*(int *)(this + 0x110) != 0) {
    *(undefined4 *)(this + 0x110) = 0;
    (**(code **)(*(long *)this + 0xb0))(this);
    VVar2 = this[0xb0];
  }
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(this + 0x90);
  this[0xb0] = (ViewModelInstanceTrigger)((byte)VVar2 & ((byte)VVar1 & 8 | 0xf5));
  return;
}


// ===== 004f8ffc  rive::ViewModelInstanceTrigger::applyValue =====

/* rive::ViewModelInstanceTrigger::applyValue(rive::DataValueInteger*) */

void __thiscall
rive::ViewModelInstanceTrigger::applyValue(ViewModelInstanceTrigger *this,DataValueInteger *param_1)

{
  if (*(int *)(this + 0x110) == *(int *)(param_1 + 8)) {
    return;
  }
  *(int *)(this + 0x110) = *(int *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x004f901c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xb0))();
  return;
}


// ===== 004f9020  FUN_004f9020 =====

void FUN_004f9020(void *param_1)

{
  FUN_004f4508();
  operator_delete(param_1);
  return;
}


// ===== 004f9044  FUN_004f9044 =====

undefined8 FUN_004f9044(void)

{
  return 0x1f5;
}


// ===== 004f904c  FUN_004f904c =====

undefined8 FUN_004f904c(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_2 != 10) && (param_2 != 0x1ac)) && (param_2 != 0x1f5)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 004f9074  FUN_004f9074 =====

undefined8 FUN_004f9074(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  uVar5 = 0;
  lVar7 = *(long *)(lVar4 + 0x28);
  if (param_2 < 0x22a) {
    if (param_2 == 4) {
      pcVar10 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar10) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004f9248;
        }
        pcVar11 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar2 < '\0');
      param_3[2] = (long)pcVar11;
      if ((char)param_3[3] == '\0') {
        rive::BinaryReader::readString((ulong)param_3);
      }
      else {
LAB_004f9248:
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
      }
      if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
        operator_delete(*(void **)(param_1 + 0x20));
      }
      *(undefined8 *)(param_1 + 0x18) = uStack_38;
      *(undefined8 *)(param_1 + 0x10) = local_40;
      *(undefined8 *)(param_1 + 0x20) = local_30;
    }
    else {
      if (param_2 != 5) goto LAB_004f9290;
      uVar12 = 0;
      uVar6 = 0;
      pbVar9 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004f9214;
        }
        pbVar8 = pbVar9 + 1;
        bVar1 = *pbVar9;
        uVar3 = uVar12 & 0x3f;
        uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
        uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
        pbVar9 = pbVar8;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar8;
      if (uVar6 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004f9214:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
  }
  else if (param_2 == 0x22a) {
    uVar12 = 0;
    uVar6 = 0;
    pbVar9 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004f9280;
      }
      pbVar8 = pbVar9 + 1;
      bVar1 = *pbVar9;
      uVar3 = uVar12 & 0x3f;
      uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar9 = pbVar8;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar8;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004f9280:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x88) = (int)uVar6;
  }
  else {
    if (param_2 != 0x2af) goto LAB_004f9290;
    uVar12 = 0;
    uVar6 = 0;
    pbVar9 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004f922c;
      }
      pbVar8 = pbVar9 + 1;
      bVar1 = *pbVar9;
      uVar3 = uVar12 & 0x3f;
      uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar9 = pbVar8;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar8;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004f922c:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x110) = (int)uVar6;
  }
  uVar5 = 1;
LAB_004f9290:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f92b8  FUN_004f92b8 =====

void FUN_004f92b8(long *param_1)

{
  *(int *)(param_1 + 0x22) = (int)param_1[0x22] + 1;
                    /* WARNING: Could not recover jumptable at 0x004f92cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))();
  return;
}


// ===== 004f92d0  rive::ViewModelInstanceTriggerBase::clone =====

/* rive::ViewModelInstanceTriggerBase::clone() const */

long * __thiscall rive::ViewModelInstanceTriggerBase::clone(ViewModelInstanceTriggerBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)operator_new(0x118);
  plVar3[0x22] = 0;
  plVar3[1] = 0;
  *plVar3 = 0;
  plVar3[5] = 0;
  plVar3[4] = 0;
  plVar3[7] = 0;
  plVar3[6] = 0;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  plVar3[0x13] = 0;
  plVar3[0x12] = 0;
  plVar3[0x15] = 0;
  plVar3[0x14] = 0;
  plVar3[0x17] = 0;
  plVar3[0x16] = 0;
  plVar3[0x19] = 0;
  plVar3[0x18] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x1f] = 0;
  plVar3[0x1e] = 0;
  plVar3[0x21] = 0;
  plVar3[0x20] = 0;
  plVar3[3] = 0;
  *(undefined8 *)(plVar3 + 2) = 0;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  plVar3[6] = 0;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  *(undefined2 *)(plVar3 + 0xc) = 0xfffe;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  plVar3[0xd] = 0;
  plVar3[0x18] = 0;
  plVar3[0x17] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x19] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x1e] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1f] = 0;
  puVar2 = PTR_vtable_0067d550;
  uVar1 = *(undefined4 *)(this + 0x110);
  plVar3[0x13] = 0;
  plVar3[0x12] = 0;
  plVar3[0x15] = 0;
  plVar3[0x14] = 0;
  *(undefined4 *)(plVar3 + 0x22) = uVar1;
  uVar1 = *(undefined4 *)(this + 0x88);
  *plVar3 = (long)(puVar2 + 0x10);
  *(undefined4 *)(plVar3 + 0x11) = uVar1;
  *(undefined4 *)((long)plVar3 + 0x8c) = 1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 004f9398  FUN_004f9398 =====

void FUN_004f9398(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4f939c);
  (*pcVar1)();
}


// ===== 004f939c  FUN_004f939c =====

void FUN_004f939c(void)

{
  return;
}


// ===== 004f93a0  rive::ViewModelInstanceValue::onAddedDirty =====

/* rive::ViewModelInstanceValue::onAddedDirty(rive::CoreContext*) */

undefined8 __thiscall
rive::ViewModelInstanceValue::onAddedDirty(ViewModelInstanceValue *this,CoreContext *param_1)

{
  ViewModelInstanceValue *pVVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  pVVar1 = (ViewModelInstanceValue *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pVVar1 = (ViewModelInstanceValue *)(param_1 + -0x998);
  }
  *(ViewModelInstanceValue **)(this + 0x40) = pVVar1;
  *(ViewModelInstanceValue **)(this + 0x80) = pVVar1;
  if (pVVar1 != this) {
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar4 = *plVar2;
    *(long **)(this + 0x30) = plVar2;
    (**(code **)(lVar4 + 0x90))(plVar2,this);
  }
  plVar2 = *(long **)(this + 0x30);
  if ((plVar2 != (long *)0x0) &&
     (uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x1b5), (uVar3 & 1) != 0)) {
    ViewModelInstance::addValue(*(ViewModelInstance **)(this + 0x30),this);
  }
  return 0;
}


// ===== 004f9430  rive::ViewModelInstanceValue::import =====

/* rive::ViewModelInstanceValue::import(rive::ImportStack&) */

ulong __thiscall
rive::ViewModelInstanceValue::import(ViewModelInstanceValue *this,ImportStack *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar4 != 0) {
    uVar11 = NEON_cnt(uVar4,1);
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar5 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar5 < 2) {
      uVar6 = (ulong)((uint)uVar4 - 1) & 0x1b5;
    }
    else {
      uVar6 = 0x1b5;
      if (uVar4 < 0x1b6) {
        uVar1 = (uint)uVar4 & 0xffff;
        uVar2 = 0;
        if ((uVar4 & 0xffff) != 0) {
          uVar2 = 0x1b5 / uVar1;
        }
        uVar6 = (ulong)(0x1b5 - uVar2 * uVar1);
      }
    }
    plVar7 = *(long **)(*(long *)param_1 + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar8 == 0x1b5) {
          if ((short)plVar7[2] == 0x1b5) {
            if (plVar7[3] != 0) {
              ViewModelInstance::addValue(*(ViewModelInstance **)(plVar7[3] + 8),this);
              uVar4 = *(ulong *)(param_1 + 8);
              if (uVar4 == 0) goto LAB_004f95c0;
              uVar11 = NEON_cnt(uVar4,1);
              uVar10 = NEON_uaddlv(uVar11,1);
              uVar6 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
              uVar5 = (ulong)~(uint)uVar4 & 1;
              if (1 < uVar6) {
                uVar5 = (ulong)(uVar4 - 1 != 0);
              }
              plVar7 = *(long **)(*(long *)param_1 + uVar5 * 8);
              if (plVar7 == (long *)0x0) goto LAB_004f9564;
              plVar9 = (long *)*plVar7;
              if (plVar9 != (long *)0x0) goto LAB_004f958c;
              goto LAB_004f95c0;
            }
            break;
          }
        }
        else {
          if (uVar5 < 2) {
            uVar8 = uVar8 & uVar4 - 1;
          }
          else if (uVar4 <= uVar8) {
            uVar3 = 0;
            if (uVar4 != 0) {
              uVar3 = uVar8 / uVar4;
            }
            uVar8 = uVar8 - uVar3 * uVar4;
          }
          if (uVar8 != uVar6) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  plVar7 = (long *)0x1;
  goto LAB_004f9564;
LAB_004f95c0:
  plVar7 = (long *)0x0;
  goto LAB_004f9564;
  while( true ) {
    plVar9 = (long *)*plVar9;
    plVar7 = (long *)0x0;
    if (plVar9 == (long *)0x0) break;
LAB_004f958c:
    uVar8 = plVar9[1];
    if (uVar8 == 1) {
      if ((short)plVar9[2] == 1) {
        plVar7 = (long *)plVar9[3];
        if (plVar7 != (long *)0x0) {
          uVar4 = Component::import((Component *)this,param_1);
          return uVar4;
        }
        break;
      }
    }
    else {
      if (uVar6 < 2) {
        uVar8 = uVar8 & uVar4 - 1;
      }
      else if (uVar4 <= uVar8) {
        uVar3 = 0;
        if (uVar4 != 0) {
          uVar3 = uVar8 / uVar4;
        }
        uVar8 = uVar8 - uVar3 * uVar4;
      }
      if (uVar8 != uVar5) goto LAB_004f95c0;
    }
  }
LAB_004f9564:
  return (ulong)plVar7 & 0xffffffff;
}


// ===== 004f95dc  rive::ViewModelInstanceValue::hasChanged =====

/* rive::ViewModelInstanceValue::hasChanged() */

byte __thiscall rive::ViewModelInstanceValue::hasChanged(ViewModelInstanceValue *this)

{
  return (byte)this[0xb0] >> 1 & 1;
}


// ===== 004f95e8  rive::ViewModelInstanceValue::registerSymbol =====

/* rive::ViewModelInstanceValue::registerSymbol() */

void __thiscall rive::ViewModelInstanceValue::registerSymbol(ViewModelInstanceValue *this)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  char *pcVar5;
  long lVar6;
  char local_30 [4];
  char local_2c [4];
  long local_28;
  
  pcVar5 = local_30;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(this + 0xa8);
  if ((plVar2 == (long *)0x0) || (*(long *)(this + 0x108) == 0)) goto LAB_004f9670;
  uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x234);
  if ((uVar3 & 1) == 0) {
    cVar4 = *(char *)(*(long *)(this + 0xa8) + 0x28);
    if (cVar4 == '\0') goto LAB_004f9670;
    lVar6 = *(long *)(this + 0x108);
    local_2c[0] = cVar4;
    if (cVar4 == '\0') goto LAB_004f9670;
    pcVar5 = local_2c;
  }
  else {
    lVar6 = *(long *)(this + 0x108);
    local_30[0] = '\x0f';
    cVar4 = '\x0f';
  }
  lVar6 = FUN_004f2ac8(lVar6 + 0xf0,cVar4,pcVar5);
  *(ViewModelInstanceValue **)(lVar6 + 0x18) = this;
LAB_004f9670:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f9694  rive::ViewModelInstanceValue::viewModelProperty =====

/* rive::ViewModelInstanceValue::viewModelProperty(rive::ViewModelProperty*) */

void __thiscall
rive::ViewModelInstanceValue::viewModelProperty
          (ViewModelInstanceValue *this,ViewModelProperty *param_1)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  char *pcVar4;
  long lVar5;
  char local_30 [4];
  char local_2c [4];
  long local_28;
  
  pcVar4 = local_30;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(ViewModelProperty **)(this + 0xa8) = param_1;
  if ((param_1 == (ViewModelProperty *)0x0) || (*(long *)(this + 0x108) == 0)) goto LAB_004f9720;
  uVar2 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x234);
  if ((uVar2 & 1) == 0) {
    cVar3 = *(char *)(*(long *)(this + 0xa8) + 0x28);
    if (cVar3 == '\0') goto LAB_004f9720;
    lVar5 = *(long *)(this + 0x108);
    local_2c[0] = cVar3;
    if (cVar3 == '\0') goto LAB_004f9720;
    pcVar4 = local_2c;
  }
  else {
    lVar5 = *(long *)(this + 0x108);
    local_30[0] = '\x0f';
    cVar3 = '\x0f';
  }
  lVar5 = FUN_004f2ac8(lVar5 + 0xf0,cVar3,pcVar4);
  *(ViewModelInstanceValue **)(lVar5 + 0x18) = this;
LAB_004f9720:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f9744  rive::ViewModelInstanceValue::viewModelProperty =====

/* rive::ViewModelInstanceValue::viewModelProperty() */

undefined8 __thiscall rive::ViewModelInstanceValue::viewModelProperty(ViewModelInstanceValue *this)

{
  return *(undefined8 *)(this + 0xa8);
}


// ===== 004f974c  rive::ViewModelInstanceValue::addDependent =====

/* rive::ViewModelInstanceValue::addDependent(rive::ViewModelValueDependent*) */

void __thiscall
rive::ViewModelInstanceValue::addDependent
          (ViewModelInstanceValue *this,ViewModelValueDependent *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar12 = *(undefined8 **)(this + 0xf0);
  puVar11 = *(undefined8 **)(this + 0xe8);
  puVar4 = puVar11;
  for (puVar7 = puVar11;
      (puVar7 != puVar12 && (puVar4 = puVar7, (ViewModelValueDependent *)*puVar7 != param_1));
      puVar7 = puVar7 + 1) {
    puVar4 = puVar12;
  }
  if (puVar4 != puVar12) {
    return;
  }
  if (puVar12 < *(undefined8 **)(this + 0xf8)) {
    puVar4 = puVar12 + 1;
    *puVar12 = param_1;
    goto LAB_004f98c4;
  }
  lVar13 = (long)puVar12 - (long)puVar11;
  uVar1 = (lVar13 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_004f3578();
LAB_004f98e4:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar5 = (long)*(undefined8 **)(this + 0xf8) - (long)puVar11;
  uVar6 = (long)uVar5 >> 2;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar5) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3d != 0) goto LAB_004f98e4;
    pvVar3 = operator_new(uVar6 << 3);
  }
  puVar7 = (undefined8 *)((long)pvVar3 + (lVar13 >> 3) * 8);
  puVar4 = puVar7 + 1;
  *puVar7 = param_1;
  if (puVar11 != puVar12) {
    if ((0x37 < lVar13 - 8U) && (0x1f < (ulong)((long)puVar12 + (-lVar13 - (long)pvVar3)))) {
      puVar10 = puVar12 + -2;
      uVar1 = (lVar13 - 8U >> 3) + 1;
      uVar8 = uVar1 & 0x3ffffffffffffffc;
      puVar12 = puVar12 + -uVar8;
      puVar9 = puVar7 + -2;
      uVar5 = uVar8;
      do {
        puVar2 = puVar10 + -1;
        uVar16 = puVar10[-2];
        uVar15 = puVar10[1];
        uVar14 = *puVar10;
        uVar5 = uVar5 - 4;
        puVar10 = puVar10 + -4;
        puVar9[-1] = *puVar2;
        puVar9[-2] = uVar16;
        puVar9[1] = uVar15;
        *puVar9 = uVar14;
        puVar9 = puVar9 + -4;
      } while (uVar5 != 0);
      puVar7 = puVar7 + -uVar8;
      if (uVar1 == uVar8) goto LAB_004f98a8;
    }
    do {
      puVar12 = puVar12 + -1;
      puVar7 = puVar7 + -1;
      *puVar7 = *puVar12;
    } while (puVar12 != puVar11);
    puVar11 = *(undefined8 **)(this + 0xe8);
  }
LAB_004f98a8:
  *(undefined8 **)(this + 0xe8) = puVar7;
  *(undefined8 **)(this + 0xf0) = puVar4;
  *(void **)(this + 0xf8) = (void *)((long)pvVar3 + uVar6 * 8);
  if (puVar11 != (undefined8 *)0x0) {
    operator_delete(puVar11);
  }
LAB_004f98c4:
  *(undefined8 **)(this + 0xf0) = puVar4;
  return;
}


// ===== 004f98e8  rive::ViewModelInstanceValue::removeDependent =====

/* WARNING: Removing unreachable block (ram,0x004f9984) */
/* rive::ViewModelInstanceValue::removeDependent(rive::ViewModelValueDependent*) */

void __thiscall
rive::ViewModelInstanceValue::removeDependent
          (ViewModelInstanceValue *this,ViewModelValueDependent *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(this + 0xf0);
  puVar4 = *(undefined8 **)(this + 0xe8);
  puVar2 = puVar4;
  for (; (puVar4 != puVar1 && (puVar2 = puVar4, (ViewModelValueDependent *)*puVar4 != param_1));
      puVar4 = puVar4 + 1) {
    puVar2 = puVar1;
  }
  if ((puVar2 != puVar1) && (puVar4 = puVar2 + 1, puVar3 = puVar2, puVar4 != puVar1)) {
    do {
      puVar2 = puVar3;
      if ((ViewModelValueDependent *)*puVar4 != param_1) {
        puVar2 = puVar3 + 1;
        *puVar3 = (ViewModelValueDependent *)*puVar4;
      }
      puVar4 = puVar4 + 1;
      puVar3 = puVar2;
    } while (puVar4 != puVar1);
    puVar1 = *(undefined8 **)(this + 0xf0);
  }
  if (puVar2 != puVar1) {
    *(undefined8 **)(this + 0xf0) = puVar2;
  }
  return;
}


// ===== 004f99a8  rive::ViewModelInstanceValue::addDirt =====

/* rive::ViewModelInstanceValue::addDirt(rive::ComponentDirt) */

void __thiscall
rive::ViewModelInstanceValue::addDirt(ViewModelInstanceValue *this,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0xf0);
  for (puVar2 = *(undefined8 **)(this + 0xe8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (*(code *)**(undefined8 **)*puVar2)((undefined8 *)*puVar2,param_2,1);
  }
  return;
}


// ===== 004f99f8  rive::ViewModelInstanceValue::setRoot =====

/* rive::ViewModelInstanceValue::setRoot(rive::rcp<rive::ViewModelInstance>) */

void __thiscall
rive::ViewModelInstanceValue::setRoot(ViewModelInstanceValue *this,undefined8 param_2)

{
  *(undefined8 *)(this + 0x100) = param_2;
  return;
}


// ===== 004f9a00  rive::ViewModelInstanceValue::name =====

/* rive::ViewModelInstanceValue::name() const */

undefined * __thiscall rive::ViewModelInstanceValue::name(ViewModelInstanceValue *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_defaultName_0067d7f8;
  if (*(long *)(this + 0xa8) != 0) {
    puVar1 = (undefined *)(*(long *)(this + 0xa8) + 0x10);
  }
  return puVar1;
}


// ===== 004f9a1c  rive::ViewModelInstanceValue::advanced =====

/* rive::ViewModelInstanceValue::advanced() */

void __thiscall rive::ViewModelInstanceValue::advanced(ViewModelInstanceValue *this)

{
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(this + 0x90);
  this[0xb0] = (ViewModelInstanceValue)((byte)this[0xb0] & 0xfd);
  return;
}


// ===== 004f9a34  rive::ViewModelInstanceValue::viewModelInstance =====

/* rive::ViewModelInstanceValue::viewModelInstance(rive::ViewModelInstance*) */

void __thiscall
rive::ViewModelInstanceValue::viewModelInstance
          (ViewModelInstanceValue *this,ViewModelInstance *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  char *pcVar5;
  long lVar6;
  char local_30 [4];
  char local_2c [4];
  long local_28;
  
  pcVar5 = local_30;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(ViewModelInstance **)(this + 0x108) = param_1;
  if ((param_1 == (ViewModelInstance *)0x0) ||
     (plVar2 = *(long **)(this + 0xa8), plVar2 == (long *)0x0)) goto LAB_004f9abc;
  uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x234);
  if ((uVar3 & 1) == 0) {
    cVar4 = *(char *)(*(long *)(this + 0xa8) + 0x28);
    if (cVar4 == '\0') goto LAB_004f9abc;
    lVar6 = *(long *)(this + 0x108);
    local_2c[0] = cVar4;
    if (cVar4 == '\0') goto LAB_004f9abc;
    pcVar5 = local_2c;
  }
  else {
    lVar6 = *(long *)(this + 0x108);
    local_30[0] = '\x0f';
    cVar4 = '\x0f';
  }
  lVar6 = FUN_004f2ac8(lVar6 + 0xf0,cVar4,pcVar5);
  *(ViewModelInstanceValue **)(lVar6 + 0x18) = this;
LAB_004f9abc:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f9ae0  rive::ViewModelInstanceValue::addDelegate =====

/* rive::ViewModelInstanceValue::addDelegate(rive::ViewModelInstanceValueDelegate*) */

void __thiscall
rive::ViewModelInstanceValue::addDelegate
          (ViewModelInstanceValue *this,ViewModelInstanceValueDelegate *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar10 = *(undefined8 **)(this + 0xc0);
  if (puVar10 < *(undefined8 **)(this + 200)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_004f9c20;
  }
  puVar9 = *(undefined8 **)(this + 0xb8);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_004f9c50();
LAB_004f9c4c:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 200) - (long)puVar9;
  uVar5 = (long)uVar3 >> 2;
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  if (0x7ffffffffffffff7 < uVar3) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_004f9c4c;
    pvVar2 = operator_new(uVar5 << 3);
  }
  puVar4 = (undefined8 *)((long)pvVar2 + lVar12 * 8);
  puVar13 = puVar4 + 1;
  *puVar4 = param_1;
  if ((long)puVar10 - (long)puVar9 != 0) {
    uVar6 = ((long)puVar10 - (long)puVar9) - 8;
    puVar11 = puVar10;
    if ((0x37 < uVar6) &&
       (0x1f < (ulong)((long)puVar10 + (-((long)puVar10 - (long)puVar9) - (long)pvVar2)))) {
      puVar8 = puVar10 + -2;
      uVar6 = (uVar6 >> 3) + 1;
      uVar7 = uVar6 & 0x3ffffffffffffffc;
      puVar11 = puVar10 + -uVar7;
      puVar10 = puVar4 + -2;
      uVar3 = uVar7;
      do {
        puVar1 = puVar8 + -1;
        uVar16 = puVar8[-2];
        uVar15 = puVar8[1];
        uVar14 = *puVar8;
        uVar3 = uVar3 - 4;
        puVar8 = puVar8 + -4;
        puVar10[-1] = *puVar1;
        puVar10[-2] = uVar16;
        puVar10[1] = uVar15;
        *puVar10 = uVar14;
        puVar10 = puVar10 + -4;
      } while (uVar3 != 0);
      puVar4 = puVar4 + -uVar7;
      puVar10 = puVar9;
      if (uVar6 == uVar7) goto LAB_004f9c0c;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0xb8);
  }
LAB_004f9c0c:
  *(undefined8 **)(this + 0xb8) = puVar4;
  *(undefined8 **)(this + 0xc0) = puVar13;
  *(void **)(this + 200) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_004f9c20:
  *(undefined8 **)(this + 0xc0) = puVar13;
  this[0xb0] = (ViewModelInstanceValue)((byte)this[0xb0] | 4);
  return;
}


// ===== 004f9c50  FUN_004f9c50 =====

void FUN_004f9c50(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004f9c64  rive::ViewModelInstanceValue::removeDelegate =====

/* rive::ViewModelInstanceValue::removeDelegate(rive::ViewModelInstanceValueDelegate*) */

void __thiscall
rive::ViewModelInstanceValue::removeDelegate
          (ViewModelInstanceValue *this,ViewModelInstanceValueDelegate *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  undefined8 *__dest;
  
  puVar2 = *(undefined8 **)(this + 0xc0);
  puVar1 = *(undefined8 **)(this + 0xb8);
  __dest = puVar1;
  for (; (puVar1 != puVar2 &&
         (__dest = puVar1, (ViewModelInstanceValueDelegate *)*puVar1 != param_1));
      puVar1 = puVar1 + 1) {
    __dest = puVar2;
  }
  if (__dest != puVar2) {
    __n = (long)puVar2 - (long)(__dest + 1);
    if (__n != 0) {
      memmove(__dest,__dest + 1,__n);
    }
    *(size_t *)(this + 0xc0) = (long)__dest + __n;
    this[0xb0] = (ViewModelInstanceValue)((byte)this[0xb0] | 4);
  }
  return;
}


// ===== 004f9ce4  rive::ViewModelInstanceValue::suppressDelegation =====

/* rive::ViewModelInstanceValue::suppressDelegation() */

bool __thiscall rive::ViewModelInstanceValue::suppressDelegation(ViewModelInstanceValue *this)

{
  ViewModelInstanceValue VVar1;
  
  VVar1 = this[0xb0];
  if (((byte)VVar1 >> 3 & 1) == 0) {
    this[0xb0] = (ViewModelInstanceValue)((byte)VVar1 | 8);
  }
  return ((byte)VVar1 & 8) == 0;
}


// ===== 004f9d00  rive::ViewModelInstanceValue::restoreDelegation =====

/* rive::ViewModelInstanceValue::restoreDelegation() */

void __thiscall rive::ViewModelInstanceValue::restoreDelegation(ViewModelInstanceValue *this)

{
  this[0xb0] = (ViewModelInstanceValue)((byte)this[0xb0] & 0xf7);
  return;
}


// ===== 004f9d10  rive::ViewModelInstanceValue::onValueChanged =====

/* rive::ViewModelInstanceValue::onValueChanged() */

void __thiscall rive::ViewModelInstanceValue::onValueChanged(ViewModelInstanceValue *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  ViewModelInstanceValue VVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  VVar3 = this[0xb0];
  uVar4 = (byte)VVar3 | 2;
  this[0xb0] = SUB41(uVar4,0);
  if (((byte)VVar3 >> 2 & 1) != 0) {
    puVar14 = *(undefined8 **)(this + 0xb8);
    puVar13 = *(undefined8 **)(this + 0xc0);
    puVar17 = *(undefined8 **)(this + 0xd0);
    *(undefined8 **)(this + 0xd8) = puVar17;
    if (puVar14 != puVar13) {
      do {
        if (puVar17 < *(undefined8 **)(this + 0xe0)) {
          puVar15 = puVar17 + 1;
          *puVar17 = *puVar14;
        }
        else {
          puVar12 = *(undefined8 **)(this + 0xd0);
          lVar16 = (long)puVar17 - (long)puVar12 >> 3;
          uVar7 = lVar16 + 1;
          if (uVar7 >> 0x3d != 0) {
            FUN_004f9c50();
LAB_004f9f04:
                    /* WARNING: Subroutine does not return */
            FUN_00324008();
          }
          uVar5 = (long)*(undefined8 **)(this + 0xe0) - (long)puVar12;
          uVar8 = (long)uVar5 >> 2;
          if (uVar8 <= uVar7) {
            uVar8 = uVar7;
          }
          if (0x7ffffffffffffff7 < uVar5) {
            uVar8 = 0x1fffffffffffffff;
          }
          if (uVar8 == 0) {
            pvVar2 = (void *)0x0;
          }
          else {
            if (uVar8 >> 0x3d != 0) goto LAB_004f9f04;
            pvVar2 = operator_new(uVar8 << 3);
          }
          puVar6 = (undefined8 *)((long)pvVar2 + lVar16 * 8);
          puVar15 = puVar6 + 1;
          *puVar6 = *puVar14;
          puVar10 = puVar17;
          if ((long)puVar17 - (long)puVar12 != 0) {
            uVar7 = ((long)puVar17 - (long)puVar12) - 8;
            if ((0x37 < uVar7) &&
               (0x1f < (ulong)((long)puVar17 + (-((long)puVar17 - (long)puVar12) - (long)pvVar2))))
            {
              puVar10 = puVar6 + -2;
              puVar11 = puVar17 + -2;
              uVar7 = (uVar7 >> 3) + 1;
              uVar9 = uVar7 & 0x3ffffffffffffffc;
              puVar17 = puVar17 + -uVar9;
              uVar5 = uVar9;
              do {
                puVar1 = puVar11 + -1;
                uVar20 = puVar11[-2];
                uVar19 = puVar11[1];
                uVar18 = *puVar11;
                uVar5 = uVar5 - 4;
                puVar11 = puVar11 + -4;
                puVar10[-1] = *puVar1;
                puVar10[-2] = uVar20;
                puVar10[1] = uVar19;
                *puVar10 = uVar18;
                puVar10 = puVar10 + -4;
              } while (uVar5 != 0);
              puVar6 = puVar6 + -uVar9;
              puVar10 = puVar12;
              if (uVar7 == uVar9) goto LAB_004f9e80;
            }
            do {
              puVar17 = puVar17 + -1;
              puVar6 = puVar6 + -1;
              *puVar6 = *puVar17;
            } while (puVar17 != puVar12);
            puVar10 = *(undefined8 **)(this + 0xd0);
          }
LAB_004f9e80:
          *(undefined8 **)(this + 0xd0) = puVar6;
          *(undefined8 **)(this + 0xd8) = puVar15;
          *(void **)(this + 0xe0) = (void *)((long)pvVar2 + uVar8 * 8);
          if (puVar10 != (undefined8 *)0x0) {
            operator_delete(puVar10);
          }
        }
        puVar14 = puVar14 + 1;
        *(undefined8 **)(this + 0xd8) = puVar15;
        puVar17 = puVar15;
      } while (puVar14 != puVar13);
      uVar4 = (uint)(byte)this[0xb0];
    }
    uVar4 = uVar4 & 0xfffffffb;
    this[0xb0] = SUB41(uVar4,0);
  }
  if ((uVar4 >> 3 & 1) == 0) {
    puVar14 = *(undefined8 **)(this + 0xd8);
    VVar3 = (ViewModelInstanceValue)((byte)uVar4 | 8);
    this[0xb0] = VVar3;
    puVar13 = *(undefined8 **)(this + 0xd0);
    if (*(undefined8 **)(this + 0xd0) != puVar14) {
      do {
        puVar17 = puVar13 + 1;
        (*(code *)**(undefined8 **)*puVar13)();
        puVar13 = puVar17;
      } while (puVar17 != puVar14);
      VVar3 = this[0xb0];
    }
    this[0xb0] = (ViewModelInstanceValue)((byte)VVar3 & 0xf7);
  }
  return;
}


// ===== 004f9f08  FUN_004f9f08 =====

void FUN_004f9f08(void *param_1)

{
  FUN_004f4508();
  operator_delete(param_1);
  return;
}


// ===== 004f9f2c  FUN_004f9f2c =====

undefined8 FUN_004f9f2c(void)

{
  return 0x1ac;
}


// ===== 004f9f34  FUN_004f9f34 =====

bool FUN_004f9f34(undefined8 param_1,short param_2)

{
  return param_2 == 0x1ac || param_2 == 10;
}


// ===== 004f9f48  FUN_004f9f48 =====

void FUN_004f9f48(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  if (param_2 == 4) {
    pcVar10 = (char *)param_3[2];
    do {
      if ((char *)(*param_3 + param_3[1]) <= pcVar10) {
        param_3[2] = *param_3 + param_3[1];
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004fa0a8;
      }
      pcVar11 = pcVar10 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar2 < '\0');
    param_3[2] = (long)pcVar11;
    if ((char)param_3[3] == '\0') {
      rive::BinaryReader::readString((ulong)param_3);
    }
    else {
LAB_004fa0a8:
      local_40 = 0;
      uStack_38 = 0;
      local_30 = 0;
    }
    if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x20));
    }
    *(undefined8 *)(param_1 + 0x18) = uStack_38;
    *(undefined8 *)(param_1 + 0x10) = local_40;
    *(undefined8 *)(param_1 + 0x20) = local_30;
  }
  else if (param_2 == 5) {
    uVar12 = 0;
    uVar6 = 0;
    pbVar8 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar8) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004fa08c;
      }
      pbVar9 = pbVar8 + 1;
      bVar1 = *pbVar8;
      uVar3 = uVar12 & 0x3f;
      uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar8 = pbVar9;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar9;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004fa08c:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x28) = (int)uVar6;
  }
  else {
    if (param_2 != 0x22a) {
      uVar5 = 0;
      goto LAB_004fa0f0;
    }
    uVar12 = 0;
    uVar6 = 0;
    pbVar8 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar8) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004fa0e0;
      }
      pbVar9 = pbVar8 + 1;
      bVar1 = *pbVar8;
      uVar3 = uVar12 & 0x3f;
      uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar8 = pbVar9;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar9;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004fa0e0:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x88) = (int)uVar6;
  }
  uVar5 = 1;
LAB_004fa0f0:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 004fa114  rive::ViewModelInstanceValueBase::clone =====

/* rive::ViewModelInstanceValueBase::clone() const */

long * __thiscall rive::ViewModelInstanceValueBase::clone(ViewModelInstanceValueBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)operator_new(0x110);
  plVar3[1] = 0;
  *plVar3 = 0;
  plVar3[5] = 0;
  plVar3[4] = 0;
  plVar3[7] = 0;
  plVar3[6] = 0;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  plVar3[0x13] = 0;
  plVar3[0x12] = 0;
  plVar3[0x15] = 0;
  plVar3[0x14] = 0;
  plVar3[0x17] = 0;
  plVar3[0x16] = 0;
  plVar3[0x19] = 0;
  plVar3[0x18] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x1f] = 0;
  plVar3[0x1e] = 0;
  plVar3[0x21] = 0;
  plVar3[0x20] = 0;
  plVar3[3] = 0;
  *(undefined8 *)(plVar3 + 2) = 0;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  plVar3[6] = 0;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  *(undefined2 *)(plVar3 + 0xc) = 0xfffe;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  plVar3[0xd] = 0;
  plVar3[0x14] = 0;
  puVar2 = PTR_vtable_0067d288;
  uVar1 = *(undefined4 *)(this + 0x88);
  plVar3[0x12] = 0;
  plVar3[0x13] = 0;
  plVar3[0x18] = 0;
  plVar3[0x17] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x19] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[0x1c] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x1e] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1f] = 0;
  *(undefined4 *)(plVar3 + 0x11) = uVar1;
  *(undefined4 *)((long)plVar3 + 0x8c) = 1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 004fa1d4  FUN_004fa1d4 =====

void FUN_004fa1d4(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0xd];
  *param_1 = (long)(PTR_vtable_0067cee0 + 0x10);
  if (pvVar1 != (void *)0x0) {
    param_1[0xe] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[9];
  if (pvVar1 != (void *)0x0) {
    param_1[10] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  *param_1 = (long)&PTR_FUN_00678650;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004fa240  rive::ViewModelInstanceViewModel::propertyValueChanged =====

/* rive::ViewModelInstanceViewModel::propertyValueChanged() */

void __thiscall
rive::ViewModelInstanceViewModel::propertyValueChanged(ViewModelInstanceViewModel *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0xf0);
  for (puVar2 = *(undefined8 **)(this + 0xe8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (*(code *)**(undefined8 **)*puVar2)((undefined8 *)*puVar2,0x1000,1);
  }
  ViewModelInstanceValue::onValueChanged((ViewModelInstanceValue *)this);
  return;
}


// ===== 004fa294  rive::ViewModelInstanceViewModel::setRoot =====

/* rive::ViewModelInstanceViewModel::setRoot(rive::rcp<rive::ViewModelInstance>) */

void __thiscall
rive::ViewModelInstanceViewModel::setRoot(ViewModelInstanceViewModel *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *local_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar7 = (long *)*param_2;
  if (plVar7 == (long *)0x0) {
    local_58 = (long *)0x0;
    *(long ***)(this + 0x100) = &local_58;
    lVar5 = *(long *)(this + 0x120);
  }
  else {
    FUN_00340fb0(1,(long)plVar7 + 0xa4);
    *(long ***)(this + 0x100) = &local_58;
    local_58 = plVar7;
    iVar4 = FUN_00340fe0(0xffffffff,(long)plVar7 + 0xa4);
    if (iVar4 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    lVar5 = *(long *)(this + 0x120);
  }
  if (lVar5 != 0) {
    plVar7 = (long *)*param_2;
    if (plVar7 != (long *)0x0) {
      FUN_00340fb0(1,(long)plVar7 + 0xa4);
    }
    puVar1 = *(undefined8 **)(lVar5 + 0xb0);
    for (puVar8 = *(undefined8 **)(lVar5 + 0xa8); puVar8 != puVar1; puVar8 = puVar8 + 1) {
      plVar6 = (long *)*puVar8;
      if (plVar6 != (long *)0x0) {
        FUN_00340fb0(1,(long)plVar6 + 0x8c);
      }
      if (plVar7 != (long *)0x0) {
        FUN_00340fb0(1,(long)plVar7 + 0xa4);
      }
      local_50 = plVar7;
      (**(code **)(*plVar6 + 0x98))(plVar6,&local_50);
      plVar3 = local_50;
      if ((local_50 != (long *)0x0) &&
         (iVar4 = FUN_00340fe0(0xffffffff,(long)local_50 + 0xa4), iVar4 == 1)) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      iVar4 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x8c);
      if (iVar4 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
    if ((plVar7 != (long *)0x0) &&
       (iVar4 = FUN_00340fe0(0xffffffff,(long)plVar7 + 0xa4), iVar4 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004fa430  rive::ViewModelInstanceViewModel::advanced =====

/* rive::ViewModelInstanceViewModel::advanced() */

void __thiscall rive::ViewModelInstanceViewModel::advanced(ViewModelInstanceViewModel *this)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  lVar3 = *(long *)(this + 0x120);
  if (lVar3 != 0) {
    puVar1 = *(undefined8 **)(lVar3 + 0xb0);
    for (puVar5 = *(undefined8 **)(lVar3 + 0xa8); puVar5 != puVar1; puVar5 = puVar5 + 1) {
      plVar4 = (long *)*puVar5;
      if (plVar4 != (long *)0x0) {
        FUN_00340fb0(1,(long)plVar4 + 0x8c);
      }
      (**(code **)(*plVar4 + 0xa0))(plVar4);
      iVar2 = FUN_00340fe0(0xffffffff,(long)plVar4 + 0x8c);
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return;
}


// ===== 004fa4bc  rive::ViewModelInstanceViewModel::import =====

/* rive::ViewModelInstanceViewModel::import(rive::ImportStack&) */

undefined4 __thiscall
rive::ViewModelInstanceViewModel::import(ViewModelInstanceViewModel *this,ImportStack *param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  undefined2 uVar16;
  undefined8 uVar17;
  long *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  uVar5 = ViewModelInstanceValue::import((ViewModelInstanceValue *)this,param_1);
  uVar10 = *(ulong *)(param_1 + 8);
  uVar7 = uVar5;
  if (uVar10 != 0) {
    uVar9 = (uint)uVar10;
    uVar1 = uVar10 - 1;
    lVar11 = *(long *)param_1;
    uVar17 = NEON_cnt(uVar10,1);
    uVar16 = NEON_uaddlv(uVar17,1);
    uVar12 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
    uVar14 = (ulong)~uVar9 & 1;
    if (1 < uVar12) {
      uVar14 = (ulong)(uVar1 != 0);
    }
    plVar13 = *(long **)(lVar11 + uVar14 * 8);
    if (plVar13 != (long *)0x0) {
      for (plVar13 = (long *)*plVar13; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
        uVar15 = plVar13[1];
        if (uVar15 == 1) {
          if (*(short *)(plVar13 + 2) == 1) {
            if (plVar13[3] != 0) {
              if (uVar12 < 2) {
                uVar14 = (ulong)(uVar9 - 1) & 0x17;
              }
              else {
                uVar14 = 0x17;
                if (uVar10 < 0x18) {
                  uVar2 = 0;
                  if ((uVar10 & 0xff) != 0) {
                    uVar2 = 0x17 / (uVar9 & 0xff);
                  }
                  uVar14 = (ulong)(0x17 - uVar2 * (uVar9 & 0xff));
                }
              }
              plVar13 = *(long **)(lVar11 + uVar14 * 8);
              if ((plVar13 == (long *)0x0) || (plVar13 = (long *)*plVar13, plVar13 == (long *)0x0))
              goto LAB_004fa640;
              goto LAB_004fa5e0;
            }
            break;
          }
        }
        else {
          if (uVar12 < 2) {
            uVar15 = uVar15 & uVar1;
          }
          else if (uVar10 <= uVar15) {
            uVar3 = 0;
            if (uVar10 != 0) {
              uVar3 = uVar15 / uVar10;
            }
            uVar15 = uVar15 - uVar3 * uVar10;
          }
          if (uVar15 != uVar14) break;
        }
      }
    }
  }
  goto LAB_004fa76c;
LAB_004fa5e0:
  do {
    uVar15 = plVar13[1];
    if (uVar15 == 0x17) {
      if ((short)plVar13[2] == 0x17) {
        if (plVar13[3] == 0) {
LAB_004fa640:
          uVar7 = 1;
        }
        else {
          lVar8 = *(long *)(plVar13[3] + 0x100);
          uVar7 = uVar5;
          if (lVar8 != 0) {
            if (uVar12 < 2) {
              uVar14 = (ulong)(uVar9 - 1) & 0x1b5;
            }
            else {
              uVar14 = 0x1b5;
              if (uVar10 < 0x1b6) {
                uVar2 = 0;
                if ((uVar10 & 0xffff) != 0) {
                  uVar2 = 0x1b5 / (uVar9 & 0xffff);
                }
                uVar14 = (ulong)(0x1b5 - uVar2 * (uVar9 & 0xffff));
              }
            }
            plVar13 = *(long **)(lVar11 + uVar14 * 8);
            do {
              do {
                plVar13 = (long *)*plVar13;
              } while (plVar13[1] != 0x1b5);
            } while (*(short *)(plVar13 + 2) != 0x1b5);
            if (*(long *)(plVar13[3] + 8) != 0) {
              uVar10 = (ulong)*(uint *)(*(long *)(plVar13[3] + 8) + 0xa0);
              if ((uVar10 < (ulong)(*(long *)(lVar8 + 0xa8) - *(long *)(lVar8 + 0xa0) >> 3)) &&
                 (lVar11 = *(long *)(*(long *)(lVar8 + 0xa0) + uVar10 * 8), lVar11 != 0)) {
                if (((ulong)*(uint *)(this + 0x88) <
                     (ulong)(*(long *)(lVar11 + 0x38) - *(long *)(lVar11 + 0x30) >> 3)) &&
                   ((plVar13 = *(long **)(*(long *)(lVar11 + 0x30) +
                                         (ulong)*(uint *)(this + 0x88) * 8), plVar13 != (long *)0x0
                    && (uVar10 = (**(code **)(*plVar13 + 0x18))(plVar13,0x1b4), (uVar10 & 1) != 0)))
                   ) {
                  if (((ulong)*(uint *)(plVar13 + 6) <
                       (ulong)(*(long *)(lVar8 + 0xa8) - *(long *)(lVar8 + 0xa0) >> 3)) &&
                     (lVar11 = *(long *)(*(long *)(lVar8 + 0xa0) + (ulong)*(uint *)(plVar13 + 6) * 8
                                        ), lVar11 != 0)) {
                    if (((ulong)*(uint *)(this + 0x110) <
                         (ulong)(*(long *)(lVar11 + 0x50) - *(long *)(lVar11 + 0x48) >> 3)) &&
                       (plVar13 = *(long **)(*(long *)(lVar11 + 0x48) +
                                            (ulong)*(uint *)(this + 0x110) * 8),
                       plVar13 != (long *)0x0)) {
                      FUN_00340fb0(1,(long)plVar13 + 0xa4);
                      local_40 = plVar13;
                      FUN_004f32bc(this,&local_40);
                      iVar6 = FUN_00340fe0(0xffffffff,(long)plVar13 + 0xa4);
                      if (iVar6 == 1) {
                        (**(code **)(*plVar13 + 8))(plVar13);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        break;
      }
    }
    else {
      if (uVar12 < 2) {
        uVar15 = uVar15 & uVar1;
      }
      else if (uVar10 <= uVar15) {
        uVar3 = 0;
        if (uVar10 != 0) {
          uVar3 = uVar15 / uVar10;
        }
        uVar15 = uVar15 - uVar3 * uVar10;
      }
      if (uVar15 != uVar14) goto LAB_004fa640;
    }
    plVar13 = (long *)*plVar13;
    uVar7 = 1;
  } while (plVar13 != (long *)0x0);
LAB_004fa76c:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}


// ===== 004fa798  rive::ViewModelInstanceViewModel::updateViewModel =====

/* rive::ViewModelInstanceViewModel::updateViewModel(rive::ViewModelInstance*) */

void __thiscall
rive::ViewModelInstanceViewModel::updateViewModel
          (ViewModelInstanceViewModel *this,ViewModelInstance *param_1)

{
  void *__src;
  ulong __n;
  long lVar1;
  int iVar2;
  void *__dest;
  ViewModelInstance *pVVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  ViewModelInstance *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pVVar3 = *(ViewModelInstance **)(this + 0x108);
  if (param_1 == (ViewModelInstance *)0x0) {
    local_40 = (ViewModelInstance *)0x0;
    ViewModelInstance::replaceViewModelByProperty(pVVar3,this,&local_40);
  }
  else {
    FUN_00340fb0(1,param_1 + 0xa4);
    local_40 = param_1;
    ViewModelInstance::replaceViewModelByProperty(pVVar3,this,&local_40);
    iVar2 = FUN_00340fe0(0xffffffff,param_1 + 0xa4);
    if (iVar2 == 1) {
      (**(code **)(*(long *)param_1 + 8))(param_1);
    }
  }
  __src = *(void **)(this + 0xe8);
  __n = *(long *)(this + 0xf0) - (long)__src;
  if (__n == 0) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
    if ((long)__n < 0) {
      auVar5 = FUN_004f3578();
      updateViewModel((ViewModelInstanceViewModel *)(auVar5._0_8_ + -0x118),auVar5._8_8_);
      return;
    }
    __dest = operator_new(__n);
    memcpy(__dest,__src,__n);
    uVar4 = 0;
    do {
      (**(code **)(**(long **)((long)__dest + uVar4) + 8))();
      uVar4 = uVar4 + 8;
    } while (__n != uVar4);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      operator_delete(__dest);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004fa8c0  rive::ViewModelInstanceViewModel::updateViewModel =====

/* non-virtual thunk to rive::ViewModelInstanceViewModel::updateViewModel(rive::ViewModelInstance*)
    */

void __thiscall
rive::ViewModelInstanceViewModel::updateViewModel
          (ViewModelInstanceViewModel *this,ViewModelInstance *param_1)

{
  updateViewModel(this + -0x118,param_1);
  return;
}


// ===== 004fa8c8  rive::ViewModelInstanceViewModel::applyValue =====

/* rive::ViewModelInstanceViewModel::applyValue(rive::DataValueViewModel*) */

void __thiscall
rive::ViewModelInstanceViewModel::applyValue
          (ViewModelInstanceViewModel *this,DataValueViewModel *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004fa8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xb0))(this,*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 004fa8d8  rive::ViewModelInstanceViewModel::clone =====

/* WARNING: Removing unreachable block (ram,0x004faa64) */
/* rive::ViewModelInstanceViewModel::clone() const */

long * __thiscall rive::ViewModelInstanceViewModel::clone(ViewModelInstanceViewModel *this)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  ViewModelInstance *pVVar7;
  ViewModelInstance *this_00;
  ulong uVar8;
  char cVar9;
  char *pcVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  char local_60 [4];
  char local_5c [4];
  long local_58;
  
  pcVar10 = local_60;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar5 = (long *)operator_new(0x130);
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5[5] = 0;
  plVar5[4] = 0;
  plVar5[7] = 0;
  plVar5[6] = 0;
  plVar5[9] = 0;
  plVar5[8] = 0;
  plVar5[0xb] = 0;
  plVar5[10] = 0;
  plVar5[0xd] = 0;
  plVar5[0xc] = 0;
  plVar5[0xf] = 0;
  plVar5[0xe] = 0;
  plVar5[0x11] = 0;
  plVar5[0x10] = 0;
  plVar5[0x13] = 0;
  plVar5[0x12] = 0;
  plVar5[0x15] = 0;
  plVar5[0x14] = 0;
  plVar5[0x17] = 0;
  plVar5[0x16] = 0;
  plVar5[0x19] = 0;
  plVar5[0x18] = 0;
  plVar5[0x1b] = 0;
  plVar5[0x1a] = 0;
  plVar5[0x1d] = 0;
  plVar5[0x1c] = 0;
  plVar5[0x1f] = 0;
  plVar5[0x1e] = 0;
  plVar5[0x21] = 0;
  plVar5[0x20] = 0;
  plVar5[0x23] = 0;
  plVar5[0x22] = 0;
  plVar5[3] = 0;
  *(undefined8 *)(plVar5 + 2) = 0;
  *(undefined4 *)(plVar5 + 1) = 0xffffffff;
  plVar5[6] = 0;
  plVar5[9] = 0;
  plVar5[8] = 0;
  plVar5[0xb] = 0;
  plVar5[10] = 0;
  *(undefined2 *)(plVar5 + 0xc) = 0xfffe;
  plVar5[0xe] = 0;
  plVar5[0xf] = 0;
  plVar5[0xd] = 0;
  plVar5[0x18] = 0;
  plVar5[0x17] = 0;
  plVar5[0x1a] = 0;
  plVar5[0x19] = 0;
  plVar5[0x1c] = 0;
  plVar5[0x1b] = 0;
  plVar5[0x1e] = 0;
  plVar5[0x1d] = 0;
  plVar5[0x1f] = 0;
  puVar3 = PTR_vtable_0067d558;
  plVar5[0x13] = 0;
  plVar5[0x12] = 0;
  plVar5[0x15] = 0;
  plVar5[0x14] = 0;
  plVar5[0x24] = 0;
  plVar5[0x25] = 0;
  *plVar5 = (long)(puVar3 + 0x10);
  uVar1 = *(undefined4 *)(this + 0x110);
  plVar5[0x23] = (long)(puVar3 + 0xd8);
  *(undefined4 *)(plVar5 + 0x22) = uVar1;
  *(undefined4 *)(plVar5 + 0x11) = *(undefined4 *)(this + 0x88);
  *(undefined4 *)((long)plVar5 + 0x8c) = 1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar5 + 2),(basic_string *)(this + 0x10));
  plVar6 = *(long **)(this + 0x120);
  *(undefined4 *)(plVar5 + 5) = *(undefined4 *)(this + 0x28);
  if (plVar6 != (long *)0x0) {
    pVVar7 = (ViewModelInstance *)(**(code **)(*plVar6 + 0x28))();
    lVar15 = plVar5[0x24];
    if ((lVar15 != 0) && (lVar14 = plVar5[0x25], lVar14 != 0)) {
      plVar11 = *(long **)(lVar15 + 200);
      plVar6 = *(long **)(lVar15 + 0xc0);
      plVar12 = plVar6;
      for (; (plVar6 != plVar11 && (plVar12 = plVar6, *plVar6 != lVar14)); plVar6 = plVar6 + 1) {
        plVar12 = plVar11;
      }
      if ((plVar12 != plVar11) && (plVar6 = plVar12 + 1, plVar13 = plVar12, plVar6 != plVar11)) {
        do {
          plVar12 = plVar13;
          if (*plVar6 != lVar14) {
            plVar12 = plVar13 + 1;
            *plVar13 = *plVar6;
          }
          plVar6 = plVar6 + 1;
          plVar13 = plVar12;
        } while (plVar6 != plVar11);
        plVar11 = *(long **)(lVar15 + 200);
      }
      if (plVar12 != plVar11) {
        *(long **)(lVar15 + 200) = plVar12;
      }
    }
    if (pVVar7 != (ViewModelInstance *)0x0) {
      FUN_00340fb0(1,pVVar7 + 0xa4);
    }
    plVar6 = (long *)plVar5[0x24];
    plVar5[0x24] = (long)pVVar7;
    this_00 = pVVar7;
    if (plVar6 != (long *)0x0) {
      iVar4 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0xa4);
      if (iVar4 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
      this_00 = (ViewModelInstance *)plVar5[0x24];
    }
    if ((this_00 != (ViewModelInstance *)0x0) &&
       ((ViewModelInstance *)plVar5[0x25] != (ViewModelInstance *)0x0)) {
      ViewModelInstance::addParent(this_00,(ViewModelInstance *)plVar5[0x25]);
    }
    (**(code **)(*plVar5 + 0xa8))(plVar5);
    if ((pVVar7 != (ViewModelInstance *)0x0) &&
       (iVar4 = FUN_00340fe0(0xffffffff,pVVar7 + 0xa4), iVar4 == 1)) {
      (**(code **)(*(long *)pVVar7 + 8))(pVVar7);
    }
    lVar15 = *(long *)(this + 0x108);
    plVar5[0x21] = lVar15;
    if ((lVar15 != 0) && (plVar6 = (long *)plVar5[0x15], plVar6 != (long *)0x0)) {
      uVar8 = (**(code **)(*plVar6 + 0x18))(plVar6,0x234);
      if ((uVar8 & 1) == 0) {
        cVar9 = *(char *)(plVar5[0x15] + 0x28);
        if ((cVar9 == '\0') || (lVar15 = plVar5[0x21], local_5c[0] = cVar9, cVar9 == '\0'))
        goto LAB_004fab74;
        pcVar10 = local_5c;
      }
      else {
        lVar15 = plVar5[0x21];
        local_60[0] = '\x0f';
        cVar9 = '\x0f';
      }
      lVar15 = FUN_004f2ac8(lVar15 + 0xf0,cVar9,pcVar10);
      *(long **)(lVar15 + 0x18) = plVar5;
    }
  }
LAB_004fab74:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar5;
}


// ===== 004faba8  FUN_004faba8 =====

void FUN_004faba8(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[0x24];
  puVar1 = PTR_vtable_0067d558 + 0xd8;
  *param_1 = (long)(PTR_vtable_0067d558 + 0x10);
  param_1[0x23] = (long)puVar1;
  if ((plVar3 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,(long)plVar3 + 0xa4), iVar2 == 1))
  {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  FUN_004f4508(param_1);
  return;
}


// ===== 004fac0c  FUN_004fac0c =====

void FUN_004fac0c(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[0x24];
  puVar1 = PTR_vtable_0067d558 + 0xd8;
  *param_1 = (long)(PTR_vtable_0067d558 + 0x10);
  param_1[0x23] = (long)puVar1;
  if ((plVar3 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,(long)plVar3 + 0xa4), iVar2 == 1))
  {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  FUN_004f4508(param_1);
  operator_delete(param_1);
  return;
}


// ===== 004fac78  FUN_004fac78 =====

undefined8 FUN_004fac78(void)

{
  return 0x1bc;
}


// ===== 004fac80  FUN_004fac80 =====

undefined8 FUN_004fac80(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_2 != 10) && (param_2 != 0x1ac)) && (param_2 != 0x1bc)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 004faca8  FUN_004faca8 =====

undefined8 FUN_004faca8(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  uVar5 = 0;
  lVar7 = *(long *)(lVar4 + 0x28);
  if (param_2 < 0x22a) {
    if (param_2 == 4) {
      pcVar10 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar10) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004fae7c;
        }
        pcVar11 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar2 < '\0');
      param_3[2] = (long)pcVar11;
      if ((char)param_3[3] == '\0') {
        rive::BinaryReader::readString((ulong)param_3);
      }
      else {
LAB_004fae7c:
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
      }
      if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
        operator_delete(*(void **)(param_1 + 0x20));
      }
      *(undefined8 *)(param_1 + 0x18) = uStack_38;
      *(undefined8 *)(param_1 + 0x10) = local_40;
      *(undefined8 *)(param_1 + 0x20) = local_30;
    }
    else {
      if (param_2 != 5) goto LAB_004faec4;
      uVar12 = 0;
      uVar6 = 0;
      pbVar9 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004fae48;
        }
        pbVar8 = pbVar9 + 1;
        bVar1 = *pbVar9;
        uVar3 = uVar12 & 0x3f;
        uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
        uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
        pbVar9 = pbVar8;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar8;
      if (uVar6 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004fae48:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
  }
  else if (param_2 == 0x22a) {
    uVar12 = 0;
    uVar6 = 0;
    pbVar9 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004faeb4;
      }
      pbVar8 = pbVar9 + 1;
      bVar1 = *pbVar9;
      uVar3 = uVar12 & 0x3f;
      uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar9 = pbVar8;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar8;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004faeb4:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x88) = (int)uVar6;
  }
  else {
    if (param_2 != 0x241) goto LAB_004faec4;
    uVar12 = 0;
    uVar6 = 0;
    pbVar9 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004fae60;
      }
      pbVar8 = pbVar9 + 1;
      bVar1 = *pbVar9;
      uVar3 = uVar12 & 0x3f;
      uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar9 = pbVar8;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar8;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004fae60:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x110) = (int)uVar6;
  }
  uVar5 = 1;
LAB_004faec4:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004faeec  rive::ViewModelInstanceViewModelBase::clone =====

/* rive::ViewModelInstanceViewModelBase::clone() const */

long * __thiscall rive::ViewModelInstanceViewModelBase::clone(ViewModelInstanceViewModelBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)operator_new(0x130);
  plVar3[1] = 0;
  *plVar3 = 0;
  plVar3[5] = 0;
  plVar3[4] = 0;
  plVar3[7] = 0;
  plVar3[6] = 0;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  plVar3[0x13] = 0;
  plVar3[0x12] = 0;
  plVar3[0x15] = 0;
  plVar3[0x14] = 0;
  plVar3[0x17] = 0;
  plVar3[0x16] = 0;
  plVar3[0x19] = 0;
  plVar3[0x18] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x1f] = 0;
  plVar3[0x1e] = 0;
  plVar3[0x21] = 0;
  plVar3[0x20] = 0;
  plVar3[0x23] = 0;
  plVar3[0x22] = 0;
  plVar3[3] = 0;
  *(undefined8 *)(plVar3 + 2) = 0;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  plVar3[6] = 0;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  *(undefined2 *)(plVar3 + 0xc) = 0xfffe;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  plVar3[0xd] = 0;
  plVar3[0x18] = 0;
  plVar3[0x17] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x19] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x1e] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1f] = 0;
  puVar2 = PTR_vtable_0067d558;
  plVar3[0x13] = 0;
  plVar3[0x12] = 0;
  plVar3[0x15] = 0;
  plVar3[0x14] = 0;
  plVar3[0x24] = 0;
  plVar3[0x25] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  uVar1 = *(undefined4 *)(this + 0x110);
  plVar3[0x23] = (long)(puVar2 + 0xd8);
  *(undefined4 *)(plVar3 + 0x22) = uVar1;
  *(undefined4 *)(plVar3 + 0x11) = *(undefined4 *)(this + 0x88);
  *(undefined4 *)((long)plVar3 + 0x8c) = 1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 004fafbc  FUN_004fafbc =====

void FUN_004fafbc(void *param_1)

{
  FUN_004f4508();
  operator_delete(param_1);
  return;
}


// ===== 004fafe0  FUN_004fafe0 =====

void FUN_004fafe0(void)

{
  return;
}


// ===== 004fafe4  rive::ViewModelProperty::import =====

/* rive::ViewModelProperty::import(rive::ImportStack&) */

undefined8 __thiscall rive::ViewModelProperty::import(ViewModelProperty *this,ImportStack *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar4 == 0) {
    return 1;
  }
  uVar9 = NEON_cnt(uVar4,1);
  uVar8 = NEON_uaddlv(uVar9,1);
  uVar10 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8);
  if ((uVar10 & 0xffffffff) < 2) {
    uVar5 = (ulong)((uint)uVar4 - 1) & 0x1b3;
  }
  else {
    uVar5 = 0x1b3;
    if (uVar4 < 0x1b4) {
      uVar1 = (uint)uVar4 & 0xffff;
      uVar2 = 0;
      if ((uVar4 & 0xffff) != 0) {
        uVar2 = 0x1b3 / uVar1;
      }
      uVar5 = (ulong)(0x1b3 - uVar2 * uVar1);
    }
  }
  plVar6 = *(long **)(*(long *)param_1 + uVar5 * 8);
  if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
    do {
      uVar7 = plVar6[1];
      if (uVar7 == 0x1b3) {
        if ((short)plVar6[2] == 0x1b3) {
          if (plVar6[3] == 0) {
            return 1;
          }
          ViewModel::addProperty(*(ViewModel **)(plVar6[3] + 8),this);
          return 0;
        }
      }
      else {
        if ((uVar10 & 0xffffffff) < 2) {
          uVar7 = uVar7 & uVar4 - 1;
        }
        else if (uVar4 <= uVar7) {
          uVar3 = 0;
          if (uVar4 != 0) {
            uVar3 = uVar7 / uVar4;
          }
          uVar7 = uVar7 - uVar3 * uVar4;
        }
        if (uVar7 != uVar5) {
          return 1;
        }
      }
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
  }
  return 1;
}


// ===== 004fb0d4  FUN_004fb0d4 =====

void FUN_004fb0d4(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d278 + 0x10);
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004fb118  FUN_004fb118 =====

undefined8 FUN_004fb118(void)

{
  return 0x1ae;
}


// ===== 004fb120  FUN_004fb120 =====

bool FUN_004fb120(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffff) - 0x1ad < 2;
}


// ===== 004fb134  rive::ViewModelPropertyBase::clone =====

/* rive::ViewModelPropertyBase::clone() const */

long * __thiscall rive::ViewModelPropertyBase::clone(ViewModelPropertyBase *this)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)operator_new(0x30);
  puVar1 = PTR_vtable_0067d280 + 0x10;
  plVar2[1] = 0;
  *plVar2 = 0;
  plVar2[5] = 0;
  plVar2[4] = 0;
  plVar2[3] = 0;
  *(undefined8 *)(plVar2 + 2) = 0;
  lVar3 = *(long *)(this + 0x28);
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  *plVar2 = (long)puVar1;
  plVar2[5] = lVar3;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  return plVar2;
}


// ===== 004fb198  FUN_004fb198 =====

void FUN_004fb198(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d278 + 0x10);
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004fb1dc  rive::ViewModelPropertyEnum::dataEnum =====

/* rive::ViewModelPropertyEnum::dataEnum(rive::DataEnum*) */

void __thiscall rive::ViewModelPropertyEnum::dataEnum(ViewModelPropertyEnum *this,DataEnum *param_1)

{
  int iVar1;
  long *plVar2;
  
  FUN_00340fb0(1,param_1 + 0xc);
  plVar2 = *(long **)(this + 0x30);
  *(DataEnum **)(this + 0x30) = param_1;
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar2 + 0xc), iVar1 == 1))
  {
                    /* WARNING: Could not recover jumptable at 0x004fb238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 004fb24c  rive::ViewModelPropertyEnum::dataEnum =====

/* rive::ViewModelPropertyEnum::dataEnum() */

undefined8 __thiscall rive::ViewModelPropertyEnum::dataEnum(ViewModelPropertyEnum *this)

{
  return *(undefined8 *)(this + 0x30);
}


// ===== 004fb254  rive::ViewModelPropertyEnum::value =====

/* rive::ViewModelPropertyEnum::value(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

void rive::ViewModelPropertyEnum::value(undefined2 *param_1,long *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = (**(code **)(*param_2 + 0x68))();
  if (lVar2 == 0) {
    *param_1 = 0;
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x68))(param_2);
    if ((*param_3 & 1) == 0) {
      uStack_48 = param_3[1];
      local_50 = *param_3;
      local_40 = (void *)param_3[2];
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_50,(char *)param_3[2],param_3[1]);
    }
    DataEnum::value(param_1,uVar3,&local_50);
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004fb31c  rive::ViewModelPropertyEnum::value =====

/* rive::ViewModelPropertyEnum::value(unsigned int) */

void rive::ViewModelPropertyEnum::value(uint param_1)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  ulong in_x1;
  char *pcVar5;
  ulong uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  plVar3 = (long *)(ulong)param_1;
  lVar4 = (**(code **)(*plVar3 + 0x68))();
  if (lVar4 != 0) {
    lVar4 = (**(code **)(*plVar3 + 0x68))(plVar3);
    if ((in_x1 & 0xffffffff) < (ulong)(*(long *)(lVar4 + 0x18) - *(long *)(lVar4 + 0x10) >> 3)) {
      lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + (in_x1 & 0xffffffff) * 8);
      uVar6 = *(ulong *)(lVar4 + 0x30);
      pbVar7 = (byte *)(lVar4 + 0x28);
      bVar2 = *pbVar7;
      uVar1 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar6;
      }
      if (uVar1 == 0) {
        pbVar7 = (byte *)(lVar4 + 0x10);
        if ((*pbVar7 & 1) != 0) {
          uVar6 = *(ulong *)(lVar4 + 0x18);
          pcVar5 = *(char **)(lVar4 + 0x20);
          goto LAB_004fb3d0;
        }
      }
      else if ((bVar2 & 1) != 0) {
        pcVar5 = *(char **)(lVar4 + 0x38);
LAB_004fb3d0:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external(in_x8,pcVar5,uVar6);
        return;
      }
      uVar9 = *(undefined8 *)(pbVar7 + 8);
      uVar8 = *(undefined8 *)pbVar7;
      *(undefined8 *)(in_x8 + 0x10) = *(undefined8 *)(pbVar7 + 0x10);
      *(undefined8 *)(in_x8 + 8) = uVar9;
      *(undefined8 *)in_x8 = uVar8;
      return;
    }
  }
  *(undefined2 *)in_x8 = 0;
  return;
}


// ===== 004fb3e4  rive::ViewModelPropertyEnum::value =====

/* rive::ViewModelPropertyEnum::value(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

uint __thiscall
rive::ViewModelPropertyEnum::value(ViewModelPropertyEnum *this,ulong *param_2,ulong *param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  DataEnum *pDVar4;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = (**(code **)(*(long *)this + 0x68))();
  if (lVar3 == 0) {
    uVar2 = 0;
    goto LAB_004fb4c4;
  }
  pDVar4 = (DataEnum *)(**(code **)(*(long *)this + 0x68))(this);
  if ((*param_2 & 1) == 0) {
    uStack_48 = param_2[1];
    local_50 = *param_2;
    local_40 = (void *)param_2[2];
    if ((*param_3 & 1) != 0) goto LAB_004fb454;
LAB_004fb480:
    uStack_68 = param_3[1];
    local_70 = *param_3;
    local_60 = (void *)param_3[2];
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_50,(char *)param_2[2],param_2[1]);
    if ((*param_3 & 1) == 0) goto LAB_004fb480;
LAB_004fb454:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_70,(char *)param_3[2],param_3[1]);
  }
  uVar2 = DataEnum::value(pDVar4,&local_50,&local_70);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_004fb4c4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004fb4f0  rive::ViewModelPropertyEnum::value =====

/* rive::ViewModelPropertyEnum::value(unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

uint __thiscall
rive::ViewModelPropertyEnum::value(ViewModelPropertyEnum *this,undefined4 param_1,ulong *param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  DataEnum *pDVar4;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = (**(code **)(*(long *)this + 0x68))();
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    pDVar4 = (DataEnum *)(**(code **)(*(long *)this + 0x68))(this);
    if ((*param_3 & 1) == 0) {
      uStack_48 = param_3[1];
      local_50 = *param_3;
      local_40 = (void *)param_3[2];
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_50,(char *)param_3[2],param_3[1]);
    }
    uVar2 = DataEnum::value(pDVar4,param_1,&local_50);
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004fb5c0  rive::ViewModelPropertyEnum::valueIndex =====

/* rive::ViewModelPropertyEnum::valueIndex(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

int __thiscall rive::ViewModelPropertyEnum::valueIndex(ViewModelPropertyEnum *this,ulong *param_2)

{
  char *__s2;
  size_t sVar1;
  long *plVar2;
  byte bVar3;
  long lVar4;
  size_t sVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  long *plVar13;
  ulong local_70;
  size_t sStack_68;
  char *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar8 = (**(code **)(*(long *)this + 0x68))();
  if (lVar8 == 0) {
    iVar12 = -1;
  }
  else {
    lVar8 = (**(code **)(*(long *)this + 0x68))(this);
    if ((*param_2 & 1) == 0) {
      sStack_68 = param_2[1];
      local_70 = *param_2;
      local_60 = (char *)param_2[2];
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_70,(char *)param_2[2],param_2[1]);
    }
    uVar6 = local_70;
    plVar13 = *(long **)(lVar8 + 0x10);
    plVar2 = *(long **)(lVar8 + 0x18);
    if (plVar13 != plVar2) {
      iVar12 = 0;
      sVar5 = local_70 >> 1 & 0x7f;
      __s2 = (char *)((ulong)&local_70 | 1);
      if ((local_70 & 1) != 0) {
        sVar5 = sStack_68;
        __s2 = local_60;
      }
      do {
        lVar8 = *plVar13;
        bVar3 = *(byte *)(lVar8 + 0x10);
        uVar9 = (ulong)(bVar3 >> 1);
        sVar1 = uVar9;
        if ((bVar3 & 1) != 0) {
          sVar1 = *(size_t *)(lVar8 + 0x18);
        }
        if (sVar1 == sVar5) {
          if ((bVar3 & 1) == 0) {
            if (bVar3 < 2) goto joined_r0x004fb6ec;
            pcVar10 = (char *)(lVar8 + 0x11);
            pcVar11 = __s2;
            while (*pcVar10 == *pcVar11) {
              uVar9 = uVar9 - 1;
              pcVar10 = pcVar10 + 1;
              pcVar11 = pcVar11 + 1;
              if (uVar9 == 0) goto joined_r0x004fb6ec;
            }
          }
          else {
            iVar7 = memcmp(*(void **)(lVar8 + 0x20),__s2,*(size_t *)(lVar8 + 0x18));
            if (iVar7 == 0) goto joined_r0x004fb6ec;
          }
        }
        plVar13 = plVar13 + 1;
        iVar12 = iVar12 + 1;
      } while (plVar13 != plVar2);
    }
    iVar12 = -1;
joined_r0x004fb6ec:
    if ((uVar6 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return iVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004fb738  rive::ViewModelPropertyEnum::valueIndex =====

/* rive::ViewModelPropertyEnum::valueIndex(unsigned int) */

uint __thiscall rive::ViewModelPropertyEnum::valueIndex(ViewModelPropertyEnum *this,uint param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0x68))();
  if (lVar1 == 0) {
    param_1 = 0xffffffff;
  }
  else {
    lVar1 = (**(code **)(*(long *)this + 0x68))(this);
    if ((ulong)(*(long *)(lVar1 + 0x18) - *(long *)(lVar1 + 0x10) >> 3) <= (ulong)param_1) {
      param_1 = 0xffffffff;
    }
  }
  return param_1;
}


// ===== 004fb794  FUN_004fb794 =====

void FUN_004fb794(long *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[6];
  *param_1 = (long)(PTR_vtable_0067d290 + 0x10);
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar2 + 0xc), iVar1 == 1))
  {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  *param_1 = (long)(PTR_vtable_0067d278 + 0x10);
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004fb810  FUN_004fb810 =====

undefined8 FUN_004fb810(void)

{
  return 0x1fd;
}


// ===== 004fb818  FUN_004fb818 =====

bool FUN_004fb818(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffff) - 0x1ad < 2 || (param_2 & 0xffff) == 0x1fd;
}


// ===== 004fb838  rive::ViewModelPropertyEnumBase::clone =====

/* rive::ViewModelPropertyEnumBase::clone() const */

long * __thiscall rive::ViewModelPropertyEnumBase::clone(ViewModelPropertyEnumBase *this)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)operator_new(0x38);
  puVar1 = PTR_vtable_0067d290;
  plVar2[6] = 0;
  plVar2[1] = 0;
  *plVar2 = 0;
  plVar2[5] = 0;
  plVar2[4] = 0;
  plVar2[3] = 0;
  *(undefined8 *)(plVar2 + 2) = 0;
  lVar3 = *(long *)(this + 0x28);
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[5] = lVar3;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  return plVar2;
}


// ===== 004fb8a0  FUN_004fb8a0 =====

void FUN_004fb8a0(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d278 + 0x10);
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004fb8e4  rive::VirtualizingComponent::from =====

/* rive::VirtualizingComponent::from(rive::Component*) */

Component * rive::VirtualizingComponent::from(Component *param_1)

{
  Component *pCVar1;
  short sVar2;
  
  sVar2 = (**(code **)(*(long *)param_1 + 0x10))();
  pCVar1 = param_1 + 0x1c0;
  if (sVar2 != 0x22f) {
    pCVar1 = (Component *)0x0;
  }
  return pCVar1;
}


// ===== 004fb91c  rive::WorldTransformComponent::childOpacity =====

/* rive::WorldTransformComponent::childOpacity() */

undefined4 __thiscall rive::WorldTransformComponent::childOpacity(WorldTransformComponent *this)

{
  return *(undefined4 *)(this + 0xa0);
}


// ===== 004fb924  rive::WorldTransformComponent::markWorldTransformDirty =====

/* rive::WorldTransformComponent::markWorldTransformDirty() */

void __thiscall
rive::WorldTransformComponent::markWorldTransformDirty(WorldTransformComponent *this)

{
  Component::addDirt((Component *)this,0x80,1);
  return;
}


// ===== 004fb930  rive::WorldTransformComponent::worldTransform =====

/* rive::WorldTransformComponent::worldTransform() const */

WorldTransformComponent * __thiscall
rive::WorldTransformComponent::worldTransform(WorldTransformComponent *this)

{
  return this + 0xa4;
}


// ===== 004fb938  rive::WorldTransformComponent::mutableWorldTransform =====

/* rive::WorldTransformComponent::mutableWorldTransform() */

WorldTransformComponent * __thiscall
rive::WorldTransformComponent::mutableWorldTransform(WorldTransformComponent *this)

{
  return this + 0xa4;
}


// ===== 004fb940  rive::WorldTransformComponent::opacityChanged =====

/* rive::WorldTransformComponent::opacityChanged() */

void __thiscall rive::WorldTransformComponent::opacityChanged(WorldTransformComponent *this)

{
  Component::addDirt((Component *)this,0x100,1);
  return;
}


// ===== 004fb94c  FUN_004fb94c =====

void FUN_004fb94c(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0x11];
  *param_1 = (long)(PTR_vtable_0067ced8 + 0x10);
  if (pvVar1 != (void *)0x0) {
    param_1[0x12] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0xd];
  *param_1 = (long)(PTR_vtable_0067cee0 + 0x10);
  if (pvVar1 != (void *)0x0) {
    param_1[0xe] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[9];
  if (pvVar1 != (void *)0x0) {
    param_1[10] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  *param_1 = (long)&PTR_FUN_00678650;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004fb9d8  FUN_004fb9d8 =====

undefined8 FUN_004fb9d8(void)

{
  return 0x5b;
}


// ===== 004fb9e0  FUN_004fb9e0 =====

bool FUN_004fb9e0(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffff) - 10 < 2 || (param_2 & 0xffff) == 0x5b;
}


// ===== 004fba00  FUN_004fba00 =====

void FUN_004fba00(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  lVar8 = *(long *)(lVar4 + 0x28);
  if (param_2 == 4) {
    pcVar12 = (char *)param_3[2];
    do {
      if ((char *)(*param_3 + param_3[1]) <= pcVar12) {
        param_3[2] = *param_3 + param_3[1];
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004fbb38;
      }
      pcVar13 = pcVar12 + 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar13;
    } while (cVar2 < '\0');
    param_3[2] = (long)pcVar13;
    if ((char)param_3[3] == '\0') {
      rive::BinaryReader::readString((ulong)param_3);
    }
    else {
LAB_004fbb38:
      local_40 = 0;
      uStack_38 = 0;
      local_30 = 0;
    }
    if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x20));
    }
    *(undefined8 *)(param_1 + 0x18) = uStack_38;
    *(undefined8 *)(param_1 + 0x10) = local_40;
    *(undefined8 *)(param_1 + 0x20) = local_30;
  }
  else if (param_2 == 5) {
    uVar14 = 0;
    uVar6 = 0;
    pbVar10 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004fbb1c;
      }
      pbVar11 = pbVar10 + 1;
      bVar1 = *pbVar10;
      uVar3 = uVar14 & 0x3f;
      uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar10 = pbVar11;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar11;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004fbb1c:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x28) = (int)uVar6;
  }
  else {
    if (param_2 != 0x12) {
      uVar5 = 0;
      goto LAB_004fbb7c;
    }
    puVar9 = (undefined4 *)param_3[2];
    puVar7 = (undefined4 *)(*param_3 + param_3[1]);
    if ((long)puVar7 - (long)puVar9 < 4) {
      uVar15 = 0;
      *(undefined1 *)(param_3 + 3) = 1;
    }
    else {
      puVar7 = puVar9 + 1;
      uVar15 = *puVar9;
    }
    param_3[2] = (long)puVar7;
    *(undefined4 *)(param_1 + 0xa0) = uVar15;
  }
  uVar5 = 1;
LAB_004fbb7c:
  if (*(long *)(lVar4 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 004fbba0  hydro_init =====

undefined8 hydro_init(void)

{
  return 0;
}


// ===== 004fbba8  hydro_memzero =====

void hydro_memzero(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = lVar2 + 1;
      *(undefined1 *)(param_1 + lVar2) = 0;
      lVar2 = lVar1;
    } while (param_2 != lVar1);
  }
  return;
}


// ===== 004fbbd8  hydro_increment =====

void hydro_increment(byte *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_2 != 0) {
    uVar2 = 1;
    do {
      param_2 = param_2 + -1;
      uVar1 = uVar2 + *param_1;
      uVar2 = uVar1 >> 8;
      *param_1 = (byte)uVar1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}


// ===== 004fbbfc  hydro_bin2hex =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void hydro_bin2hex(undefined1 *param_1,ulong param_2,undefined1 (*param_3) [16],ulong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte bVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  ulong uVar16;
  long lVar17;
  ulong *puVar18;
  undefined1 (*pauVar19) [16];
  undefined1 uVar20;
  int iVar23;
  uint uVar24;
  int iVar25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint uVar26;
  int iVar27;
  uint6 uVar28;
  uint uVar31;
  undefined1 auVar30 [16];
  uint uVar32;
  uint5 uVar33;
  undefined1 auVar34 [14];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  int iVar37;
  uint5 uVar38;
  ulong uVar39;
  uint uVar42;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  uint uVar43;
  uint6 uVar44;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [14];
  int iVar52;
  int iVar53;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  int iVar54;
  undefined1 auVar51 [16];
  int iVar55;
  ulong uVar56;
  int iVar57;
  int iVar58;
  ulong uVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  ulong uVar66;
  undefined1 auVar29 [14];
  undefined1 auVar45 [14];
  
  uVar10 = _UNK_0024e4fc;
  auVar9 = _DAT_0024e3a0;
  auVar2 = _DAT_0024e360;
  auVar1 = _DAT_0024de80;
  if ((0x7ffffffffffffffe < param_4) || (uVar13 = param_4 * 2, param_2 <= uVar13)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_4 == 0) {
    uVar13 = 0;
    goto LAB_004fbcb4;
  }
  if ((param_4 < 8) ||
     ((param_1 < *param_3 + param_4 && (param_3 < (undefined1 (*) [16])(param_1 + uVar13))))) {
    uVar14 = 0;
  }
  else {
    if (param_4 < 0x10) {
      uVar16 = 0;
    }
    else {
      uVar14 = param_4 & 0xfffffffffffffff0;
      uVar24 = (uint)_UNK_0024e218 >> 8;
      uVar26 = (uint)_UNK_0024e218 >> 0x10;
      uVar31 = (uint)_UNK_0024e218 >> 0x18;
      uVar20 = (undefined1)_UNK_0024e21c;
      uVar32 = (uint)_UNK_0024e21c >> 8;
      uVar7 = (uint)_UNK_0024e21c >> 0x10;
      uVar8 = (uint)_UNK_0024e21c >> 0x18;
      auVar22[8] = UNK_0024e218;
      auVar22._0_8_ = _DAT_0024e210;
      auVar30._8_4_ = _UNK_0024e4f8;
      auVar30._0_8_ = _DAT_0024e4f0;
      pauVar19 = param_3;
      puVar12 = param_1;
      uVar16 = uVar14;
      do {
        auVar36 = *pauVar19;
        auVar47 = a64_TBL(ZEXT816(0),auVar36,auVar1);
        auVar30._12_4_ = uVar10;
        auVar41 = a64_TBL(ZEXT816(0),auVar36,auVar30);
        uVar16 = uVar16 - 0x10;
        auVar35 = a64_TBL(ZEXT816(0),auVar36,auVar9);
        auVar22[9] = (char)uVar24;
        auVar22[10] = (char)uVar26;
        auVar22[0xb] = (char)uVar31;
        auVar22[0xc] = uVar20;
        auVar22[0xd] = (char)uVar32;
        auVar22[0xe] = (char)uVar7;
        auVar22[0xf] = (char)uVar8;
        auVar50 = a64_TBL(ZEXT816(0),auVar36,auVar22);
        uVar42 = auVar41._8_4_;
        uVar43 = auVar41._12_4_;
        uVar39 = auVar47._0_8_ & 0xffffff0fffffff0f;
        uVar56 = auVar47._8_8_ & 0xffffff0fffffff0f;
        uVar59 = auVar35._0_8_ & 0xffffff0fffffff0f;
        uVar66 = auVar35._8_8_ & 0xffffff0fffffff0f;
        iVar61 = (int)uVar39;
        iVar25 = (int)(uVar39 >> 0x20);
        iVar27 = (int)uVar56;
        iVar54 = (int)(uVar56 >> 0x20);
        iVar65 = (int)uVar59;
        iVar62 = (int)(uVar59 >> 0x20);
        iVar63 = (int)uVar66;
        iVar64 = (int)(uVar66 >> 0x20);
        uVar39 = auVar41._0_8_ & 0xffffff0fffffff0f;
        uVar56 = auVar50._0_8_ & 0xffffff0fffffff0f;
        uVar59 = auVar50._8_8_ & 0xffffff0fffffff0f;
        uVar33 = CONCAT14((char)((auVar50._4_4_ >> 4) + 0xfff6 >> 8),
                          (uint)((byte)((auVar50._0_4_ >> 4) + 0xfff6 >> 8) & 0xd9)) & 0xd9ffffffff;
        iVar37 = (int)uVar39;
        iVar23 = (int)(uVar39 >> 0x20);
        iVar55 = (int)uVar56;
        iVar57 = (int)(uVar56 >> 0x20);
        iVar58 = (int)uVar59;
        iVar60 = (int)(uVar59 >> 0x20);
        uVar44 = CONCAT15((char)((uint)(iVar25 + 0xfff6) >> 8),
                          (uint5)((byte)((uint)(iVar61 + 0xfff6) >> 8) & 0xd9) << 8) &
                 0xd9ffffffffff;
        auVar48._0_10_ = CONCAT19((byte)((uint)(iVar27 + 0xfff6) >> 8) & 0xd9,(unkuint9)uVar44);
        auVar48._10_3_ = 0;
        auVar48[0xd] = (byte)((uint)(iVar54 + 0xfff6) >> 8) & 0xd9;
        uVar28 = CONCAT15((char)((uint)(iVar23 + 0xfff6) >> 8),
                          (uint5)((byte)((uint)(iVar37 + 0xfff6) >> 8) & 0xd9) << 8) &
                 0xd9ffffffffff;
        auVar34._0_10_ =
             CONCAT19((byte)((uVar42 & 0xffffff0f) + 0xfff6 >> 8) & 0xd9,(unkuint9)uVar28);
        auVar34._10_3_ = 0;
        auVar34[0xd] = (byte)((uVar43 & 0xffffff0f) + 0xfff6 >> 8) & 0xd9;
        iVar52 = iVar25 * 0x100 + 0x5700 + (uint)(ushort)(uVar44 >> 0x20);
        iVar53 = iVar27 * 0x100 + 0x5700 + (uint)(ushort)(auVar48._0_10_ >> 0x40);
        iVar54 = iVar54 * 0x100 + 0x5700 + (uint)auVar48._12_2_;
        iVar62 = iVar62 * 0x100 + 0x5700 +
                 (uint)((byte)((uint)(iVar62 + 0xfff6) >> 8) & 0xd9) * 0x100;
        iVar63 = iVar63 * 0x100 + 0x5700 +
                 (uint)((byte)((uint)(iVar63 + 0xfff6) >> 8) & 0xd9) * 0x100;
        iVar64 = iVar64 * 0x100 + 0x5700 +
                 (uint)((byte)((uint)(iVar64 + 0xfff6) >> 8) & 0xd9) * 0x100;
        iVar23 = iVar23 * 0x100 + 0x5700 + (uint)(ushort)(uVar28 >> 0x20);
        iVar25 = (uVar42 & 0xffffff0f) * 0x100 + 0x5700 + (uint)(ushort)(auVar34._0_10_ >> 0x40);
        iVar27 = (uVar43 & 0xffffff0f) * 0x100 + 0x5700 + (uint)auVar34._12_2_;
        auVar51._0_4_ =
             iVar55 * 0x100 + 0x5700 + (uint)((byte)((uint)(iVar55 + 0xfff6) >> 8) & 0xd9) * 0x100
             >> 8;
        auVar51._4_4_ =
             iVar57 * 0x100 + 0x5700 + (uint)((byte)((uint)(iVar57 + 0xfff6) >> 8) & 0xd9) * 0x100
             >> 8;
        auVar51._8_4_ =
             iVar58 * 0x100 + 0x5700 + (uint)((byte)((uint)(iVar58 + 0xfff6) >> 8) & 0xd9) * 0x100
             >> 8;
        auVar51._12_4_ =
             iVar60 * 0x100 + 0x5700 + (uint)((byte)((uint)(iVar60 + 0xfff6) >> 8) & 0xd9) * 0x100
             >> 8;
        auVar36._4_4_ = (uint)(byte)(uVar33 >> 0x20) + (auVar50._4_4_ >> 4) + 0x57;
        auVar36._0_4_ = (int)uVar33 + (auVar50._0_4_ >> 4) + 0x57;
        auVar36._8_4_ =
             (uint)((byte)((auVar50._8_4_ >> 4) + 0xfff6 >> 8) & 0xd9) + (auVar50._8_4_ >> 4) + 0x57
        ;
        auVar36._12_4_ =
             (uint)((byte)((auVar50._12_4_ >> 4) + 0xfff6 >> 8) & 0xd9) + (auVar50._12_4_ >> 4) +
             0x57;
        auVar50._4_4_ =
             (uint)((byte)((auVar41._4_4_ >> 4) + 0xfff6 >> 8) & 0xd9) + (auVar41._4_4_ >> 4) + 0x57
        ;
        auVar50._0_4_ =
             (uint)((byte)((auVar41._0_4_ >> 4) + 0xfff6 >> 8) & 0xd9) + (auVar41._0_4_ >> 4) + 0x57
        ;
        auVar50._8_4_ = (uint)((byte)((uVar42 >> 4) + 0xfff6 >> 8) & 0xd9) + (uVar42 >> 4) + 0x57;
        auVar50._12_4_ = (uint)((byte)((uVar43 >> 4) + 0xfff6 >> 8) & 0xd9) + (uVar43 >> 4) + 0x57;
        auVar41._4_4_ =
             (uint)((byte)((auVar35._4_4_ >> 4) + 0xfff6 >> 8) & 0xd9) + (auVar35._4_4_ >> 4) + 0x57
        ;
        auVar41._0_4_ =
             (uint)((byte)((auVar35._0_4_ >> 4) + 0xfff6 >> 8) & 0xd9) + (auVar35._0_4_ >> 4) + 0x57
        ;
        auVar41._8_4_ =
             (uint)((byte)((auVar35._8_4_ >> 4) + 0xfff6 >> 8) & 0xd9) + (auVar35._8_4_ >> 4) + 0x57
        ;
        auVar41._12_4_ =
             (uint)((byte)((auVar35._12_4_ >> 4) + 0xfff6 >> 8) & 0xd9) + (auVar35._12_4_ >> 4) +
             0x57;
        auVar35._4_4_ =
             (uint)((byte)((auVar47._4_4_ >> 4) + 0xfff6 >> 8) & 0xd9) + (auVar47._4_4_ >> 4) + 0x57
        ;
        auVar35._0_4_ =
             (uint)((byte)((auVar47._0_4_ >> 4) + 0xfff6 >> 8) & 0xd9) + (auVar47._0_4_ >> 4) + 0x57
        ;
        auVar35._8_4_ =
             (uint)((byte)((auVar47._8_4_ >> 4) + 0xfff6 >> 8) & 0xd9) + (auVar47._8_4_ >> 4) + 0x57
        ;
        auVar35._12_4_ =
             (uint)((byte)((auVar47._12_4_ >> 4) + 0xfff6 >> 8) & 0xd9) + (auVar47._12_4_ >> 4) +
             0x57;
        auVar36 = a64_TBL(ZEXT816(0),auVar36,auVar50,auVar41,auVar35,auVar2);
        auVar47[4] = (char)((uint)iVar23 >> 8);
        auVar47._0_4_ = (uint)(iVar37 * 0x100 + 0x5700 + (int)uVar28) >> 8;
        auVar47[5] = (char)((uint)iVar23 >> 0x10);
        auVar47[6] = (char)((uint)iVar23 >> 0x18);
        auVar47[7] = 0;
        auVar47[8] = (char)((uint)iVar25 >> 8);
        auVar47[9] = (char)((uint)iVar25 >> 0x10);
        auVar47[10] = (char)((uint)iVar25 >> 0x18);
        auVar47[0xb] = 0;
        auVar47[0xc] = (char)((uint)iVar27 >> 8);
        auVar47[0xd] = (char)((uint)iVar27 >> 0x10);
        auVar47[0xe] = (char)((uint)iVar27 >> 0x18);
        auVar47[0xf] = 0;
        auVar4[4] = (char)((uint)iVar62 >> 8);
        auVar4._0_4_ = iVar65 * 0x100 + 0x5700 +
                       (uint)((byte)((uint)(iVar65 + 0xfff6) >> 8) & 0xd9) * 0x100 >> 8;
        auVar4[5] = (char)((uint)iVar62 >> 0x10);
        auVar4[6] = (char)((uint)iVar62 >> 0x18);
        auVar4[7] = 0;
        auVar4[8] = (char)((uint)iVar63 >> 8);
        auVar4[9] = (char)((uint)iVar63 >> 0x10);
        auVar4[10] = (char)((uint)iVar63 >> 0x18);
        auVar4[0xb] = 0;
        auVar4[0xc] = (char)((uint)iVar64 >> 8);
        auVar4[0xd] = (char)((uint)iVar64 >> 0x10);
        auVar4[0xe] = (char)((uint)iVar64 >> 0x18);
        auVar4[0xf] = 0;
        auVar5[4] = (char)((uint)iVar52 >> 8);
        auVar5._0_4_ = (uint)(iVar61 * 0x100 + 0x5700 + (int)uVar44) >> 8;
        auVar5[5] = (char)((uint)iVar52 >> 0x10);
        auVar5[6] = (char)((uint)iVar52 >> 0x18);
        auVar5[7] = 0;
        auVar5[8] = (char)((uint)iVar53 >> 8);
        auVar5[9] = (char)((uint)iVar53 >> 0x10);
        auVar5[10] = (char)((uint)iVar53 >> 0x18);
        auVar5[0xb] = 0;
        auVar5[0xc] = (char)((uint)iVar54 >> 8);
        auVar5[0xd] = (char)((uint)iVar54 >> 0x10);
        auVar5[0xe] = (char)((uint)iVar54 >> 0x18);
        auVar5[0xf] = 0;
        auVar50 = a64_TBL(ZEXT816(0),auVar51,auVar47,auVar4,auVar5,auVar2);
        *puVar12 = auVar36[0];
        puVar12[1] = auVar50[0];
        puVar12[2] = auVar36[1];
        puVar12[3] = auVar50[1];
        puVar12[4] = auVar36[2];
        puVar12[5] = auVar50[2];
        puVar12[6] = auVar36[3];
        puVar12[7] = auVar50[3];
        puVar12[8] = auVar36[4];
        puVar12[9] = auVar50[4];
        puVar12[10] = auVar36[5];
        puVar12[0xb] = auVar50[5];
        puVar12[0xc] = auVar36[6];
        puVar12[0xd] = auVar50[6];
        puVar12[0xe] = auVar36[7];
        puVar12[0xf] = auVar50[7];
        puVar12[0x10] = auVar36[8];
        puVar12[0x11] = auVar50[8];
        puVar12[0x12] = auVar36[9];
        puVar12[0x13] = auVar50[9];
        puVar12[0x14] = auVar36[10];
        puVar12[0x15] = auVar50[10];
        puVar12[0x16] = auVar36[0xb];
        puVar12[0x17] = auVar50[0xb];
        puVar12[0x18] = auVar36[0xc];
        puVar12[0x19] = auVar50[0xc];
        puVar12[0x1a] = auVar36[0xd];
        puVar12[0x1b] = auVar50[0xd];
        puVar12[0x1c] = auVar36[0xe];
        puVar12[0x1d] = auVar50[0xe];
        puVar12[0x1e] = auVar36[0xf];
        puVar12[0x1f] = auVar50[0xf];
        puVar12 = puVar12 + 0x20;
        pauVar19 = pauVar19 + 1;
      } while (uVar16 != 0);
      if (uVar14 == param_4) goto LAB_004fbcb4;
      uVar16 = uVar14;
      if (((uint)param_4 >> 3 & 1) == 0) goto LAB_004fbc4c;
    }
    uVar11 = _UNK_0024e4fc;
    uVar10 = _UNK_0024e21c;
    auVar9 = _DAT_0024e040;
    uVar14 = param_4 & 0xfffffffffffffff8;
    puVar12 = param_1 + uVar16 * 2;
    auVar1._8_4_ = _UNK_0024e218;
    auVar1._0_8_ = _DAT_0024e210;
    auVar2._8_4_ = _UNK_0024e4f8;
    auVar2._0_8_ = _DAT_0024e4f0;
    lVar17 = uVar16 - uVar14;
    puVar18 = (ulong *)(*param_3 + uVar16);
    do {
      auVar21._0_8_ = *puVar18;
      auVar21._8_8_ = 0;
      lVar17 = lVar17 + 8;
      auVar2._12_4_ = uVar11;
      auVar30 = a64_TBL(ZEXT816(0),auVar21,auVar2);
      auVar1._12_4_ = uVar10;
      auVar22 = a64_TBL(ZEXT816(0),auVar21,auVar1);
      uVar31 = auVar30._8_4_;
      uVar32 = auVar30._12_4_;
      uVar24 = auVar22._8_4_;
      uVar26 = auVar22._12_4_;
      uVar16 = auVar30._0_8_ & 0xffffff0fffffff0f;
      uVar39 = auVar22._0_8_ & 0xffffff0fffffff0f;
      iVar37 = (int)uVar16;
      iVar23 = (int)(uVar16 >> 0x20);
      uVar38 = CONCAT14((char)((auVar30._4_4_ >> 4) + 0xfff6 >> 8),
                        (uint)((byte)((auVar30._0_4_ >> 4) + 0xfff6 >> 8) & 0xd9)) & 0xd9ffffffff;
      uVar33 = CONCAT14((char)((auVar22._4_4_ >> 4) + 0xfff6 >> 8),
                        (uint)((byte)((auVar22._0_4_ >> 4) + 0xfff6 >> 8) & 0xd9)) & 0xd9ffffffff;
      iVar52 = (int)uVar39;
      iVar53 = (int)(uVar39 >> 0x20);
      uVar44 = CONCAT15((char)((uint)(iVar23 + 0xfff6) >> 8),
                        (uint5)((byte)((uint)(iVar37 + 0xfff6) >> 8) & 0xd9) << 8) & 0xd9ffffffffff;
      auVar45._0_10_ = CONCAT19((byte)((uVar31 & 0xffffff0f) + 0xfff6 >> 8) & 0xd9,(unkuint9)uVar44)
      ;
      auVar45._10_3_ = 0;
      auVar45[0xd] = (byte)((uVar32 & 0xffffff0f) + 0xfff6 >> 8) & 0xd9;
      uVar28 = CONCAT15((char)((uint)(iVar53 + 0xfff6) >> 8),
                        (uint5)((byte)((uint)(iVar52 + 0xfff6) >> 8) & 0xd9) << 8) & 0xd9ffffffffff;
      auVar29._0_10_ = CONCAT19((byte)((uVar24 & 0xffffff0f) + 0xfff6 >> 8) & 0xd9,(unkuint9)uVar28)
      ;
      auVar29._10_3_ = 0;
      auVar29[0xd] = (byte)((uVar26 & 0xffffff0f) + 0xfff6 >> 8) & 0xd9;
      iVar23 = iVar23 * 0x100 + 0x5700 + (uint)(ushort)(uVar44 >> 0x20);
      iVar25 = (uVar31 & 0xffffff0f) * 0x100 + 0x5700 + (uint)(ushort)(auVar45._0_10_ >> 0x40);
      iVar27 = (uVar32 & 0xffffff0f) * 0x100 + 0x5700 + (uint)auVar45._12_2_;
      auVar46._0_4_ = (int)uVar38 + (auVar30._0_4_ >> 4) + 0x57;
      auVar46._4_4_ = (uint)(byte)(uVar38 >> 0x20) + (auVar30._4_4_ >> 4) + 0x57;
      auVar46._8_4_ = (uint)((byte)((uVar31 >> 4) + 0xfff6 >> 8) & 0xd9) + (uVar31 >> 4) + 0x57;
      auVar46._12_4_ = (uint)((byte)((uVar32 >> 4) + 0xfff6 >> 8) & 0xd9) + (uVar32 >> 4) + 0x57;
      auVar40._0_4_ = (int)uVar33 + (auVar22._0_4_ >> 4) + 0x57;
      auVar40._4_4_ = (uint)(byte)(uVar33 >> 0x20) + (auVar22._4_4_ >> 4) + 0x57;
      auVar40._8_4_ = (uint)((byte)((uVar24 >> 4) + 0xfff6 >> 8) & 0xd9) + (uVar24 >> 4) + 0x57;
      auVar40._12_4_ = (uint)((byte)((uVar26 >> 4) + 0xfff6 >> 8) & 0xd9) + (uVar26 >> 4) + 0x57;
      auVar49._0_4_ = (uint)(iVar52 * 0x100 + 0x5700 + (int)uVar28) >> 8;
      auVar49._4_4_ = iVar53 * 0x100 + 0x5700 + (uint)(ushort)(uVar28 >> 0x20) >> 8;
      auVar49._8_4_ =
           (uVar24 & 0xffffff0f) * 0x100 + 0x5700 + (uint)(ushort)(auVar29._0_10_ >> 0x40) >> 8;
      auVar49._12_4_ = (uVar26 & 0xffffff0f) * 0x100 + 0x5700 + (uint)auVar29._12_2_ >> 8;
      auVar22 = a64_TBL(ZEXT816(0),auVar40,auVar46,auVar9);
      auVar3[4] = (char)((uint)iVar23 >> 8);
      auVar3._0_4_ = (uint)(iVar37 * 0x100 + 0x5700 + (int)uVar44) >> 8;
      auVar3[5] = (char)((uint)iVar23 >> 0x10);
      auVar3[6] = (char)((uint)iVar23 >> 0x18);
      auVar3[7] = 0;
      auVar3[8] = (char)((uint)iVar25 >> 8);
      auVar3[9] = (char)((uint)iVar25 >> 0x10);
      auVar3[10] = (char)((uint)iVar25 >> 0x18);
      auVar3[0xb] = 0;
      auVar3[0xc] = (char)((uint)iVar27 >> 8);
      auVar3[0xd] = (char)((uint)iVar27 >> 0x10);
      auVar3[0xe] = (char)((uint)iVar27 >> 0x18);
      auVar3[0xf] = 0;
      auVar30 = a64_TBL(ZEXT816(0),auVar49,auVar3,auVar9);
      *puVar12 = auVar22[0];
      puVar12[1] = auVar30[0];
      puVar12[2] = auVar22[1];
      puVar12[3] = auVar30[1];
      puVar12[4] = auVar22[2];
      puVar12[5] = auVar30[2];
      puVar12[6] = auVar22[3];
      puVar12[7] = auVar30[3];
      puVar12[8] = auVar22[4];
      puVar12[9] = auVar30[4];
      puVar12[10] = auVar22[5];
      puVar12[0xb] = auVar30[5];
      puVar12[0xc] = auVar22[6];
      puVar12[0xd] = auVar30[6];
      puVar12[0xe] = auVar22[7];
      puVar12[0xf] = auVar30[7];
      puVar12 = puVar12 + 0x10;
      puVar18 = puVar18 + 1;
    } while (lVar17 != 0);
    if (uVar14 == param_4) goto LAB_004fbcb4;
  }
LAB_004fbc4c:
  lVar17 = param_4 - uVar14;
  pbVar15 = *param_3 + uVar14;
  puVar12 = param_1 + uVar14 * 2 + 1;
  do {
    lVar17 = lVar17 + -1;
    uVar24 = *pbVar15 & 0xf;
    bVar6 = *pbVar15 >> 4;
    puVar12[-1] = bVar6 + ((byte)(bVar6 + 0xfff6 >> 8) & 0xd9) + 'W';
    *puVar12 = (char)((uVar24 + 0xfff6 & 0xd900) + uVar24 * 0x100 + 0x5700 >> 8);
    pbVar15 = pbVar15 + 1;
    puVar12 = puVar12 + 2;
  } while (lVar17 != 0);
LAB_004fbcb4:
  param_1[uVar13] = 0;
  return;
}


// ===== 004fbf14  hydro_hex2bin =====

ulong hydro_hex2bin(long param_1,ulong param_2,long param_3,ulong param_4,char *param_5,
                   long *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  
  if (param_4 == 0) {
    uVar11 = 0;
    if (param_6 != (long *)0x0) {
      *param_6 = param_3;
    }
    goto LAB_004fc108;
  }
  iVar12 = 0;
  iVar8 = 0;
  uVar11 = 0;
  uVar15 = 0;
LAB_004fbf64:
  do {
    bVar4 = *(byte *)(param_3 + uVar15);
    uVar14 = uVar15 + 1;
    uVar2 = bVar4 ^ 0x30;
    uVar9 = uVar2 + 0xfff6;
    uVar1 = (bVar4 & 0xffffffdf) - 0x37 & 0xff;
    uVar3 = uVar1 + 0xfff6 ^ uVar1 + 0xfff0;
    uVar10 = uVar11;
    if (((uVar3 | uVar9) >> 8 & 0xff) == 0) {
      iVar13 = iVar12;
      if ((param_5 == (char *)0x0) || (iVar12 != 0)) break;
      pcVar6 = strchr(param_5,(uint)bVar4);
      if (pcVar6 == (char *)0x0) {
LAB_004fc0cc:
        bVar5 = true;
        uVar14 = uVar15;
        goto LAB_004fc0d4;
      }
      uVar15 = uVar14;
      if (param_4 <= uVar14) {
        bVar5 = true;
        goto LAB_004fc0d4;
      }
      while( true ) {
        bVar4 = *(byte *)(param_3 + uVar15);
        uVar1 = (bVar4 & 0xffffffdf) - 0x37 & 0xff;
        uVar2 = bVar4 ^ 0x30;
        uVar9 = uVar2 + 0xfff6;
        uVar3 = uVar1 + 0xfff6 ^ uVar1 + 0xfff0;
        if (((uVar3 | uVar9) >> 8 & 0xff) != 0) break;
        pcVar6 = strchr(param_5,(uint)bVar4);
        if (pcVar6 == (char *)0x0) goto LAB_004fc0cc;
        uVar15 = uVar15 + 1;
        if (param_4 == uVar15) {
          uVar15 = param_4;
          if (param_4 <= uVar14) {
            uVar15 = uVar14;
          }
          goto LAB_004fc0cc;
        }
      }
      if (param_2 <= uVar11) {
        iVar12 = 0;
        goto LAB_004fc14c;
      }
      uVar14 = uVar15 + 1;
      uVar9 = uVar3 >> 8 & uVar1 | uVar9 >> 8 & uVar2;
    }
    else {
      if (param_2 <= uVar11) {
LAB_004fc14c:
        puVar7 = (undefined4 *)__errno();
        bVar5 = false;
        *puVar7 = 0x22;
        uVar14 = uVar15;
        iVar13 = iVar12;
        goto joined_r0x004fc160;
      }
      uVar9 = uVar3 >> 8 & uVar1 | uVar9 >> 8 & uVar2;
      if (iVar12 != 0) {
        uVar10 = uVar11 + 1;
        iVar12 = 0;
        iVar13 = 0;
        *(byte *)(param_1 + uVar11) = (byte)iVar8 | (byte)uVar9;
        uVar11 = uVar10;
        uVar15 = uVar14;
        if (param_4 <= uVar14) break;
        goto LAB_004fbf64;
      }
    }
    iVar8 = uVar9 << 4;
    iVar12 = 0xff;
    uVar15 = uVar14;
    iVar13 = iVar12;
  } while (uVar14 < param_4);
  bVar5 = true;
  uVar11 = uVar10;
  uVar14 = uVar15;
joined_r0x004fc160:
  if (iVar13 == 0) {
    if (!bVar5) {
      uVar11 = 0;
    }
LAB_004fc0d4:
    if (param_6 == (long *)0x0) {
      if (uVar14 != param_4) {
        puVar7 = (undefined4 *)__errno();
        goto LAB_004fc0fc;
      }
    }
    else {
      *param_6 = param_3 + uVar14;
    }
    if (bVar5) goto LAB_004fc108;
  }
  else {
    puVar7 = (undefined4 *)__errno();
    *puVar7 = 0x16;
    if (param_6 == (long *)0x0) {
      if (uVar14 - 1 != param_4) {
LAB_004fc0fc:
        *puVar7 = 0x16;
      }
    }
    else {
      *param_6 = param_3 + (uVar14 - 1);
    }
  }
  uVar11 = 0xffffffff;
LAB_004fc108:
  return uVar11 & 0xffffffff;
}


// ===== 004fc170  hydro_equal =====

uint hydro_equal(long param_1,long param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = -(uint)(param_1 == param_2);
  if (param_3 != 0) {
    lVar4 = 0;
    do {
      pbVar1 = (byte *)(param_1 + lVar4);
      pbVar2 = (byte *)(param_2 + lVar4);
      lVar4 = lVar4 + 1;
      uVar3 = *pbVar2 ^ *pbVar1 | uVar3;
    } while (param_3 != lVar4);
  }
  return (uVar3 & 0xff) - 1 >> 8 & 1;
}


// ===== 004fc1c0  hydro_compare =====

int hydro_compare(long param_1,long param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_3 != 0) {
    uVar4 = 0;
    param_3 = param_3 + -1;
    uVar5 = 1;
    do {
      pbVar1 = (byte *)(param_2 + param_3);
      pbVar2 = (byte *)(param_1 + param_3);
      pbVar3 = (byte *)(param_1 + param_3);
      param_3 = param_3 + -1;
      uVar4 = uVar5 & ((uint)*pbVar1 - (uint)*pbVar2 & 0xff00) >> 8 | uVar4;
      uVar5 = uVar5 & (*pbVar3 ^ *pbVar1) + 0x7fff >> 8;
    } while (param_3 != -1);
    return uVar5 + uVar4 * 2 + -1;
  }
  return 0;
}


// ===== 004fc234  hydro_pad =====

int hydro_pad(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte local_4;
  
  iVar2 = -1;
  if ((param_3 != 0) && (param_4 >> 0x1f == 0)) {
    uVar3 = param_3 - 1;
    if ((param_3 & uVar3) == 0) {
      uVar3 = uVar3 & (param_2 ^ 0xffffffffffffffff);
      if (~param_2 <= uVar3) {
        return -1;
      }
    }
    else {
      uVar4 = 0;
      if (param_3 != 0) {
        uVar4 = param_2 / param_3;
      }
      uVar3 = uVar3 + (uVar4 * param_3 - param_2);
      if (~param_2 <= uVar3) {
        return -1;
      }
    }
    if (param_4 <= uVar3 + param_2) {
      return -1;
    }
    uVar4 = 0;
    param_1 = param_1 + param_2;
    local_4 = 0;
    do {
      uVar5 = uVar4 ^ uVar3;
      uVar4 = uVar4 + 1;
      bVar1 = (byte)(uVar5 - 1 >> 0x38);
      *(byte *)(param_1 + uVar3) = local_4 & *(byte *)(param_1 + uVar3) | bVar1 & 0x80;
      param_1 = param_1 + -1;
      local_4 = local_4 | bVar1;
    } while (param_3 != uVar4);
    iVar2 = (int)(uVar3 + param_2) + 1;
  }
  return iVar2;
}


// ===== 004fc2f4  hydro_unpad =====

int hydro_unpad(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong local_8;
  
  local_8 = 0;
  if (param_3 - 1 < param_2) {
    uVar3 = 0;
    uVar2 = 0;
    uVar4 = 0;
    pbVar5 = (byte *)(param_1 + (param_2 - 1));
    do {
      uVar1 = uVar4 + 0x1ff;
      uVar4 = uVar4 | *pbVar5;
      uVar1 = (int)local_8 + 0x1ffU & uVar1 & (*pbVar5 ^ 0x80) - 1;
      uVar2 = uVar2 | uVar1 >> 8 & 1;
      uVar6 = -((ulong)(uVar1 >> 8) & 1) & uVar3;
      uVar3 = uVar3 + 1;
      local_8 = uVar6 | local_8;
      pbVar5 = pbVar5 + -1;
    } while (param_3 != uVar3);
    if (uVar2 != 0) {
      return (int)(param_2 - 1) - (int)local_8;
    }
  }
  return -1;
}


// ===== 004fc38c  hydro_hash_update =====

undefined8 hydro_hash_update(undefined1 (*param_1) [16],byte *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined1 (*pauVar6) [16];
  undefined1 auVar7 [12];
  undefined1 auVar9 [16];
  byte bVar10;
  byte bVar12;
  byte bVar13;
  int iVar11;
  byte bVar14;
  byte bVar15;
  byte bVar17;
  byte bVar18;
  int iVar16;
  byte bVar19;
  byte bVar20;
  byte bVar22;
  byte bVar23;
  int iVar21;
  byte bVar24;
  byte bVar25;
  byte bVar27;
  byte bVar28;
  int iVar26;
  byte bVar29;
  byte bVar30;
  byte bVar32;
  byte bVar33;
  int iVar31;
  byte bVar34;
  byte bVar35;
  byte bVar37;
  byte bVar38;
  int iVar36;
  byte bVar39;
  byte bVar40;
  byte bVar42;
  byte bVar43;
  int iVar41;
  byte bVar44;
  byte bVar45;
  byte bVar47;
  byte bVar48;
  int iVar46;
  byte bVar49;
  byte bVar50;
  int iVar51;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar58;
  byte bVar59;
  undefined8 uVar52;
  int iVar57;
  byte bVar60;
  byte bVar61;
  int iVar62;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar69;
  byte bVar70;
  undefined8 uVar63;
  int iVar68;
  byte bVar71;
  undefined8 uVar72;
  uint uVar73;
  undefined8 uVar74;
  uint uVar75;
  undefined1 auVar8 [16];
  
  if (param_3 != 0) {
    uVar4 = (ulong)(byte)param_1[3][0];
    do {
      uVar3 = 0x10;
      uVar2 = 0x10 - (uVar4 & 0xff);
      uVar1 = param_3;
      if (uVar2 <= param_3) {
        uVar1 = uVar2;
      }
      if (((uint)uVar4 & 0xff) != 0x10) {
        uVar4 = uVar1;
        pbVar5 = param_2;
        pauVar6 = param_1;
        if (uVar1 < 2) {
          uVar4 = 1;
        }
        do {
          uVar4 = uVar4 - 1;
          (*pauVar6)[(byte)param_1[3][0]] = (*pauVar6)[(byte)param_1[3][0]] ^ *pbVar5;
          pbVar5 = pbVar5 + 1;
          pauVar6 = (undefined1 (*) [16])(*pauVar6 + 1);
        } while (uVar4 != 0);
        uVar3 = (uint)(byte)param_1[3][0];
      }
      uVar3 = uVar3 + (int)uVar1;
      uVar4 = (ulong)uVar3;
      param_1[3][0] = (char)uVar3;
      if ((uVar3 & 0xff) == 0x10) {
        auVar9 = *param_1;
        uVar74 = *(undefined8 *)(param_1[1] + 8);
        uVar72 = *(undefined8 *)param_1[1];
        uVar4 = 0x18;
        uVar63 = *(undefined8 *)(param_1[2] + 8);
        uVar52 = *(undefined8 *)param_1[2];
        do {
          uVar73 = (uint)((ulong)uVar72 >> 0x20);
          uVar75 = (uint)((ulong)uVar74 >> 0x20);
          uVar3 = (uint)uVar4;
          iVar11 = auVar9._0_4_ * 0x1000000 + (auVar9._0_4_ >> 8);
          iVar16 = auVar9._4_4_ * 0x1000000 + (auVar9._4_4_ >> 8);
          iVar21 = auVar9._8_4_ * 0x1000000 + (auVar9._8_4_ >> 8);
          iVar26 = auVar9._12_4_ * 0x1000000 + (auVar9._12_4_ >> 8);
          iVar31 = (uint)uVar72 * 0x200 + ((uint)uVar72 >> 0x17);
          iVar36 = uVar73 * 0x200 + (uVar73 >> 0x17);
          iVar41 = (uint)uVar74 * 0x200 + ((uint)uVar74 >> 0x17);
          iVar46 = uVar75 * 0x200 + (uVar75 >> 0x17);
          bVar10 = (byte)iVar11;
          bVar30 = (byte)iVar31;
          bVar12 = (byte)((uint)iVar11 >> 8);
          bVar32 = (byte)((uint)iVar31 >> 8);
          bVar13 = (byte)((uint)iVar11 >> 0x10);
          bVar33 = (byte)((uint)iVar31 >> 0x10);
          bVar14 = (byte)((uint)iVar11 >> 0x18);
          bVar34 = (byte)((uint)iVar31 >> 0x18);
          iVar11 = CONCAT13(bVar14 & bVar34,
                            CONCAT12(bVar13 & bVar33,CONCAT11(bVar12 & bVar32,bVar10 & bVar30)));
          bVar15 = (byte)iVar16;
          bVar35 = (byte)iVar36;
          bVar17 = (byte)((uint)iVar16 >> 8);
          bVar37 = (byte)((uint)iVar36 >> 8);
          bVar18 = (byte)((uint)iVar16 >> 0x10);
          bVar38 = (byte)((uint)iVar36 >> 0x10);
          bVar19 = (byte)((uint)iVar16 >> 0x18);
          bVar39 = (byte)((uint)iVar36 >> 0x18);
          auVar7._0_8_ = CONCAT17(bVar19 & bVar39,
                                  CONCAT16(bVar18 & bVar38,
                                           CONCAT15(bVar17 & bVar37,CONCAT14(bVar15 & bVar35,iVar11)
                                                   )));
          bVar20 = (byte)iVar21;
          bVar40 = (byte)iVar41;
          auVar7[8] = bVar20 & bVar40;
          bVar22 = (byte)((uint)iVar21 >> 8);
          bVar42 = (byte)((uint)iVar41 >> 8);
          auVar7[9] = bVar22 & bVar42;
          bVar23 = (byte)((uint)iVar21 >> 0x10);
          bVar43 = (byte)((uint)iVar41 >> 0x10);
          auVar7[10] = bVar23 & bVar43;
          bVar24 = (byte)((uint)iVar21 >> 0x18);
          bVar44 = (byte)((uint)iVar41 >> 0x18);
          auVar7[0xb] = bVar24 & bVar44;
          bVar25 = (byte)iVar26;
          bVar45 = (byte)iVar46;
          auVar8[0xc] = bVar25 & bVar45;
          auVar8._0_12_ = auVar7;
          bVar27 = (byte)((uint)iVar26 >> 8);
          bVar47 = (byte)((uint)iVar46 >> 8);
          auVar8[0xd] = bVar27 & bVar47;
          bVar28 = (byte)((uint)iVar26 >> 0x10);
          bVar48 = (byte)((uint)iVar46 >> 0x10);
          auVar8[0xe] = bVar28 & bVar48;
          bVar29 = (byte)((uint)iVar26 >> 0x18);
          bVar49 = (byte)((uint)iVar46 >> 0x18);
          auVar8[0xf] = bVar29 & bVar49;
          bVar50 = (byte)uVar52;
          bVar53 = (byte)((ulong)uVar52 >> 8);
          bVar54 = (byte)((ulong)uVar52 >> 0x10);
          bVar55 = (byte)((ulong)uVar52 >> 0x18);
          bVar56 = (byte)((ulong)uVar52 >> 0x20);
          bVar58 = (byte)((ulong)uVar52 >> 0x28);
          bVar59 = (byte)((ulong)uVar52 >> 0x30);
          bVar60 = (byte)((ulong)uVar52 >> 0x38);
          bVar61 = (byte)uVar63;
          bVar64 = (byte)((ulong)uVar63 >> 8);
          bVar65 = (byte)((ulong)uVar63 >> 0x10);
          bVar66 = (byte)((ulong)uVar63 >> 0x18);
          bVar67 = (byte)((ulong)uVar63 >> 0x20);
          bVar69 = (byte)((ulong)uVar63 >> 0x28);
          bVar70 = (byte)((ulong)uVar63 >> 0x30);
          bVar71 = (byte)((ulong)uVar63 >> 0x38);
          iVar11 = iVar11 << 3;
          iVar16 = (int)((ulong)auVar7._0_8_ >> 0x20) << 3;
          iVar21 = auVar7._8_4_ << 3;
          iVar26 = auVar8._12_4_ << 3;
          auVar9._0_8_ = CONCAT17(bVar60 ^ bVar39 ^ (byte)((uint)iVar16 >> 0x18),
                                  CONCAT16(bVar59 ^ bVar38 ^ (byte)((uint)iVar16 >> 0x10),
                                           CONCAT15(bVar58 ^ bVar37 ^ (byte)((uint)iVar16 >> 8),
                                                    CONCAT14(bVar56 ^ bVar35 ^ (byte)iVar16,
                                                             CONCAT13(bVar55 ^ bVar34 ^
                                                                      (byte)((uint)iVar11 >> 0x18),
                                                                      CONCAT12(bVar54 ^ bVar33 ^
                                                                               (byte)((uint)iVar11
                                                                                     >> 0x10),
                                                                               CONCAT11(bVar53 ^ 
                                                  bVar32 ^ (byte)((uint)iVar11 >> 8),
                                                  bVar50 ^ bVar30 ^ (byte)iVar11)))))));
          auVar9[8] = bVar61 ^ bVar40 ^ (byte)iVar21;
          auVar9[9] = bVar64 ^ bVar42 ^ (byte)((uint)iVar21 >> 8);
          auVar9[10] = bVar65 ^ bVar43 ^ (byte)((uint)iVar21 >> 0x10);
          auVar9[0xb] = bVar66 ^ bVar44 ^ (byte)((uint)iVar21 >> 0x18);
          auVar9[0xc] = bVar67 ^ bVar45 ^ (byte)iVar26;
          auVar9[0xd] = bVar69 ^ bVar47 ^ (byte)((uint)iVar26 >> 8);
          auVar9[0xe] = bVar70 ^ bVar48 ^ (byte)((uint)iVar26 >> 0x10);
          auVar9[0xf] = bVar71 ^ bVar49 ^ (byte)((uint)iVar26 >> 0x18);
          if ((uVar3 & 3) == 2) {
            auVar9 = NEON_ext(auVar9,auVar9,8,1);
          }
          else if ((uVar4 & 3) == 0) {
            uVar4 = (ulong)auVar9._0_8_ >> 0x20;
            auVar9 = NEON_rev64(auVar9,4);
            auVar9._0_4_ = (uint)uVar4 ^ (uVar3 | 0x9e377900);
          }
          iVar31 = (int)uVar52 * 2;
          iVar36 = (int)((ulong)uVar52 >> 0x20) * 2;
          iVar41 = (int)uVar63 * 2;
          iVar46 = (int)((ulong)uVar63 >> 0x20) * 2;
          uVar4 = (ulong)(uVar3 - 1);
          iVar57 = CONCAT13(bVar34 & bVar55,
                            CONCAT12(bVar33 & bVar54,CONCAT11(bVar32 & bVar53,bVar30 & bVar50)));
          iVar68 = CONCAT13(bVar44 & bVar66,
                            CONCAT12(bVar43 & bVar65,CONCAT11(bVar42 & bVar64,bVar40 & bVar61)));
          iVar11 = CONCAT13(bVar14 | bVar55,
                            CONCAT12(bVar13 | bVar54,CONCAT11(bVar12 | bVar53,bVar10 | bVar50))) * 2
          ;
          iVar16 = CONCAT13(bVar19 | bVar60,
                            CONCAT12(bVar18 | bVar59,CONCAT11(bVar17 | bVar58,bVar15 | bVar56))) * 2
          ;
          iVar21 = CONCAT13(bVar24 | bVar66,
                            CONCAT12(bVar23 | bVar65,CONCAT11(bVar22 | bVar64,bVar20 | bVar61))) * 2
          ;
          iVar26 = CONCAT13(bVar29 | bVar71,
                            CONCAT12(bVar28 | bVar70,CONCAT11(bVar27 | bVar69,bVar25 | bVar67))) * 2
          ;
          iVar51 = iVar57 << 2;
          iVar57 = (int)(CONCAT17(bVar39 & bVar60,
                                  CONCAT16(bVar38 & bVar59,
                                           CONCAT15(bVar37 & bVar58,CONCAT14(bVar35 & bVar56,iVar57)
                                                   ))) >> 0x20) << 2;
          iVar62 = iVar68 << 2;
          iVar68 = (int)(CONCAT17(bVar49 & bVar71,
                                  CONCAT16(bVar48 & bVar70,
                                           CONCAT15(bVar47 & bVar69,CONCAT14(bVar45 & bVar67,iVar68)
                                                   ))) >> 0x20) << 2;
          uVar52 = CONCAT17((byte)((uint)iVar36 >> 0x18) ^ bVar19 ^ (byte)((uint)iVar57 >> 0x18),
                            CONCAT16((byte)((uint)iVar36 >> 0x10) ^ bVar18 ^
                                     (byte)((uint)iVar57 >> 0x10),
                                     CONCAT15((byte)((uint)iVar36 >> 8) ^ bVar17 ^
                                              (byte)((uint)iVar57 >> 8),
                                              CONCAT14((byte)iVar36 ^ bVar15 ^ (byte)iVar57,
                                                       CONCAT13((byte)((uint)iVar31 >> 0x18) ^
                                                                bVar14 ^ (byte)((uint)iVar51 >> 0x18
                                                                               ),
                                                                CONCAT12((byte)((uint)iVar31 >> 0x10
                                                                               ) ^ bVar13 ^
                                                                         (byte)((uint)iVar51 >> 0x10
                                                                               ),CONCAT11((byte)((
                                                  uint)iVar31 >> 8) ^ bVar12 ^
                                                  (byte)((uint)iVar51 >> 8),
                                                  (byte)iVar31 ^ bVar10 ^ (byte)iVar51)))))));
          uVar63 = CONCAT17((byte)((uint)iVar46 >> 0x18) ^ bVar29 ^ (byte)((uint)iVar68 >> 0x18),
                            CONCAT16((byte)((uint)iVar46 >> 0x10) ^ bVar28 ^
                                     (byte)((uint)iVar68 >> 0x10),
                                     CONCAT15((byte)((uint)iVar46 >> 8) ^ bVar27 ^
                                              (byte)((uint)iVar68 >> 8),
                                              CONCAT14((byte)iVar46 ^ bVar25 ^ (byte)iVar68,
                                                       CONCAT13((byte)((uint)iVar41 >> 0x18) ^
                                                                bVar24 ^ (byte)((uint)iVar62 >> 0x18
                                                                               ),
                                                                CONCAT12((byte)((uint)iVar41 >> 0x10
                                                                               ) ^ bVar23 ^
                                                                         (byte)((uint)iVar62 >> 0x10
                                                                               ),CONCAT11((byte)((
                                                  uint)iVar41 >> 8) ^ bVar22 ^
                                                  (byte)((uint)iVar62 >> 8),
                                                  (byte)iVar41 ^ bVar20 ^ (byte)iVar62)))))));
          uVar72 = CONCAT17(bVar39 ^ bVar19 ^ (byte)((uint)iVar16 >> 0x18),
                            CONCAT16(bVar38 ^ bVar18 ^ (byte)((uint)iVar16 >> 0x10),
                                     CONCAT15(bVar37 ^ bVar17 ^ (byte)((uint)iVar16 >> 8),
                                              CONCAT14(bVar35 ^ bVar15 ^ (byte)iVar16,
                                                       CONCAT13(bVar34 ^ bVar14 ^
                                                                (byte)((uint)iVar11 >> 0x18),
                                                                CONCAT12(bVar33 ^ bVar13 ^
                                                                         (byte)((uint)iVar11 >> 0x10
                                                                               ),CONCAT11(bVar32 ^ 
                                                  bVar12 ^ (byte)((uint)iVar11 >> 8),
                                                  bVar30 ^ bVar10 ^ (byte)iVar11)))))));
          uVar74 = CONCAT17(bVar49 ^ bVar29 ^ (byte)((uint)iVar26 >> 0x18),
                            CONCAT16(bVar48 ^ bVar28 ^ (byte)((uint)iVar26 >> 0x10),
                                     CONCAT15(bVar47 ^ bVar27 ^ (byte)((uint)iVar26 >> 8),
                                              CONCAT14(bVar45 ^ bVar25 ^ (byte)iVar26,
                                                       CONCAT13(bVar44 ^ bVar24 ^
                                                                (byte)((uint)iVar21 >> 0x18),
                                                                CONCAT12(bVar43 ^ bVar23 ^
                                                                         (byte)((uint)iVar21 >> 0x10
                                                                               ),CONCAT11(bVar42 ^ 
                                                  bVar22 ^ (byte)((uint)iVar21 >> 8),
                                                  bVar40 ^ bVar20 ^ (byte)iVar21)))))));
        } while (uVar3 - 1 != 0);
        *(undefined8 *)(param_1[1] + 8) = uVar74;
        *(undefined8 *)param_1[1] = uVar72;
        *(undefined8 *)(param_1[2] + 8) = uVar63;
        *(undefined8 *)param_1[2] = uVar52;
        *(long *)(*param_1 + 8) = auVar9._8_8_;
        *(long *)*param_1 = auVar9._0_8_;
        param_1[3][0] = 0;
      }
      param_3 = param_3 - uVar1;
      param_2 = param_2 + uVar1;
    } while (param_3 != 0);
  }
  return 0;
}


// ===== 004fc4ac  hydro_hash_init =====

undefined8 hydro_hash_init(undefined1 (*param_1) [16],undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 auVar8 [12];
  undefined1 auVar10 [16];
  byte bVar11;
  byte bVar13;
  byte bVar14;
  int iVar12;
  byte bVar15;
  byte bVar16;
  byte bVar18;
  byte bVar19;
  int iVar17;
  byte bVar20;
  byte bVar21;
  byte bVar23;
  byte bVar24;
  int iVar22;
  byte bVar25;
  byte bVar26;
  byte bVar28;
  byte bVar29;
  int iVar27;
  byte bVar30;
  byte bVar31;
  byte bVar33;
  byte bVar34;
  int iVar32;
  byte bVar35;
  byte bVar36;
  byte bVar38;
  byte bVar39;
  int iVar37;
  byte bVar40;
  byte bVar41;
  byte bVar43;
  byte bVar44;
  int iVar42;
  byte bVar45;
  byte bVar46;
  byte bVar48;
  byte bVar49;
  int iVar47;
  byte bVar50;
  byte bVar51;
  int iVar52;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar59;
  byte bVar60;
  undefined8 uVar53;
  int iVar58;
  byte bVar61;
  byte bVar62;
  int iVar63;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar70;
  byte bVar71;
  undefined8 uVar64;
  int iVar69;
  byte bVar72;
  undefined8 uVar73;
  uint uVar74;
  undefined8 uVar75;
  uint uVar76;
  undefined4 local_58;
  undefined2 local_54;
  undefined8 local_52;
  undefined2 local_4a;
  undefined1 uStack_48;
  undefined5 uStack_47;
  undefined3 uStack_42;
  undefined5 uStack_3f;
  undefined3 local_3a;
  undefined5 uStack_37;
  undefined3 uStack_32;
  undefined5 uStack_2f;
  undefined3 local_2a;
  undefined5 uStack_27;
  undefined8 uStack_22;
  undefined2 local_1a;
  long local_18;
  undefined1 auVar9 [16];
  
  lVar2 = tpidr_el0;
  local_18 = *(long *)(lVar2 + 0x28);
  local_54 = 0x863;
  local_58 = (int)DAT_0024e788;
  uStack_42 = 0;
  uStack_3f = 0;
  local_4a = 0;
  uStack_47 = 0;
  uStack_32 = 0;
  uStack_2f = 0;
  local_3a = 0;
  uStack_37 = 0;
  uStack_22 = 0;
  local_2a = 0;
  uStack_27 = 0;
  local_1a = 0;
  local_52 = *param_2;
  if (param_3 == (undefined8 *)0x0) {
    uStack_48 = 0;
    uVar3 = 0x20;
  }
  else {
    uStack_48 = 0x20;
    uVar3 = 0x40;
    uStack_3f = (undefined5)param_3[1];
    local_3a = (undefined3)((ulong)param_3[1] >> 0x28);
    uStack_47 = (undefined5)*param_3;
    uStack_42 = (undefined3)((ulong)*param_3 >> 0x28);
    uStack_2f = (undefined5)param_3[3];
    local_2a = (undefined3)((ulong)param_3[3] >> 0x28);
    uStack_37 = (undefined5)param_3[2];
    uStack_32 = (undefined3)((ulong)param_3[2] >> 0x28);
  }
  uVar6 = 0;
  puVar4 = &local_58;
  *(undefined8 *)(*param_1 + 8) = 0;
  *(undefined8 *)*param_1 = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[2] + 8) = 0;
  *(undefined8 *)param_1[2] = 0;
  *(undefined4 *)param_1[3] = 0;
  do {
    uVar5 = 0x10 - (ulong)(byte)uVar6;
    uVar7 = 0;
    uVar1 = uVar3;
    if (uVar5 <= uVar3) {
      uVar1 = uVar5;
    }
    uVar5 = uVar1;
    if (uVar1 < 2) {
      uVar5 = 1;
    }
    do {
      (*param_1)[uVar7 + (byte)param_1[3][0]] =
           (*param_1)[uVar7 + (byte)param_1[3][0]] ^ *(byte *)((long)puVar4 + uVar7);
      uVar7 = uVar7 + 1;
    } while (uVar5 != uVar7);
    uVar6 = (uint)(byte)param_1[3][0] + (int)uVar1;
    param_1[3][0] = (char)uVar6;
    if ((uVar6 & 0xff) == 0x10) {
      auVar10 = *param_1;
      uVar75 = *(undefined8 *)(param_1[1] + 8);
      uVar73 = *(undefined8 *)param_1[1];
      uVar6 = 0x18;
      uVar64 = *(undefined8 *)(param_1[2] + 8);
      uVar53 = *(undefined8 *)param_1[2];
      do {
        uVar74 = (uint)((ulong)uVar73 >> 0x20);
        uVar76 = (uint)((ulong)uVar75 >> 0x20);
        iVar12 = auVar10._0_4_ * 0x1000000 + (auVar10._0_4_ >> 8);
        iVar17 = auVar10._4_4_ * 0x1000000 + (auVar10._4_4_ >> 8);
        iVar22 = auVar10._8_4_ * 0x1000000 + (auVar10._8_4_ >> 8);
        iVar27 = auVar10._12_4_ * 0x1000000 + (auVar10._12_4_ >> 8);
        iVar32 = (uint)uVar73 * 0x200 + ((uint)uVar73 >> 0x17);
        iVar37 = uVar74 * 0x200 + (uVar74 >> 0x17);
        iVar42 = (uint)uVar75 * 0x200 + ((uint)uVar75 >> 0x17);
        iVar47 = uVar76 * 0x200 + (uVar76 >> 0x17);
        bVar11 = (byte)iVar12;
        bVar31 = (byte)iVar32;
        bVar13 = (byte)((uint)iVar12 >> 8);
        bVar33 = (byte)((uint)iVar32 >> 8);
        bVar14 = (byte)((uint)iVar12 >> 0x10);
        bVar34 = (byte)((uint)iVar32 >> 0x10);
        bVar15 = (byte)((uint)iVar12 >> 0x18);
        bVar35 = (byte)((uint)iVar32 >> 0x18);
        iVar12 = CONCAT13(bVar15 & bVar35,
                          CONCAT12(bVar14 & bVar34,CONCAT11(bVar13 & bVar33,bVar11 & bVar31)));
        bVar16 = (byte)iVar17;
        bVar36 = (byte)iVar37;
        bVar18 = (byte)((uint)iVar17 >> 8);
        bVar38 = (byte)((uint)iVar37 >> 8);
        bVar19 = (byte)((uint)iVar17 >> 0x10);
        bVar39 = (byte)((uint)iVar37 >> 0x10);
        bVar20 = (byte)((uint)iVar17 >> 0x18);
        bVar40 = (byte)((uint)iVar37 >> 0x18);
        auVar8._0_8_ = CONCAT17(bVar20 & bVar40,
                                CONCAT16(bVar19 & bVar39,
                                         CONCAT15(bVar18 & bVar38,CONCAT14(bVar16 & bVar36,iVar12)))
                               );
        bVar21 = (byte)iVar22;
        bVar41 = (byte)iVar42;
        auVar8[8] = bVar21 & bVar41;
        bVar23 = (byte)((uint)iVar22 >> 8);
        bVar43 = (byte)((uint)iVar42 >> 8);
        auVar8[9] = bVar23 & bVar43;
        bVar24 = (byte)((uint)iVar22 >> 0x10);
        bVar44 = (byte)((uint)iVar42 >> 0x10);
        auVar8[10] = bVar24 & bVar44;
        bVar25 = (byte)((uint)iVar22 >> 0x18);
        bVar45 = (byte)((uint)iVar42 >> 0x18);
        auVar8[0xb] = bVar25 & bVar45;
        bVar26 = (byte)iVar27;
        bVar46 = (byte)iVar47;
        auVar9[0xc] = bVar26 & bVar46;
        auVar9._0_12_ = auVar8;
        bVar28 = (byte)((uint)iVar27 >> 8);
        bVar48 = (byte)((uint)iVar47 >> 8);
        auVar9[0xd] = bVar28 & bVar48;
        bVar29 = (byte)((uint)iVar27 >> 0x10);
        bVar49 = (byte)((uint)iVar47 >> 0x10);
        auVar9[0xe] = bVar29 & bVar49;
        bVar30 = (byte)((uint)iVar27 >> 0x18);
        bVar50 = (byte)((uint)iVar47 >> 0x18);
        auVar9[0xf] = bVar30 & bVar50;
        bVar51 = (byte)uVar53;
        bVar54 = (byte)((ulong)uVar53 >> 8);
        bVar55 = (byte)((ulong)uVar53 >> 0x10);
        bVar56 = (byte)((ulong)uVar53 >> 0x18);
        bVar57 = (byte)((ulong)uVar53 >> 0x20);
        bVar59 = (byte)((ulong)uVar53 >> 0x28);
        bVar60 = (byte)((ulong)uVar53 >> 0x30);
        bVar61 = (byte)((ulong)uVar53 >> 0x38);
        bVar62 = (byte)uVar64;
        bVar65 = (byte)((ulong)uVar64 >> 8);
        bVar66 = (byte)((ulong)uVar64 >> 0x10);
        bVar67 = (byte)((ulong)uVar64 >> 0x18);
        bVar68 = (byte)((ulong)uVar64 >> 0x20);
        bVar70 = (byte)((ulong)uVar64 >> 0x28);
        bVar71 = (byte)((ulong)uVar64 >> 0x30);
        bVar72 = (byte)((ulong)uVar64 >> 0x38);
        iVar12 = iVar12 << 3;
        iVar17 = (int)((ulong)auVar8._0_8_ >> 0x20) << 3;
        iVar22 = auVar8._8_4_ << 3;
        iVar27 = auVar9._12_4_ << 3;
        auVar10._0_8_ =
             CONCAT17(bVar61 ^ bVar40 ^ (byte)((uint)iVar17 >> 0x18),
                      CONCAT16(bVar60 ^ bVar39 ^ (byte)((uint)iVar17 >> 0x10),
                               CONCAT15(bVar59 ^ bVar38 ^ (byte)((uint)iVar17 >> 8),
                                        CONCAT14(bVar57 ^ bVar36 ^ (byte)iVar17,
                                                 CONCAT13(bVar56 ^ bVar35 ^
                                                          (byte)((uint)iVar12 >> 0x18),
                                                          CONCAT12(bVar55 ^ bVar34 ^
                                                                   (byte)((uint)iVar12 >> 0x10),
                                                                   CONCAT11(bVar54 ^ bVar33 ^
                                                                            (byte)((uint)iVar12 >> 8
                                                                                  ),bVar51 ^ bVar31
                                                                                    ^ (byte)iVar12))
                                                         )))));
        auVar10[8] = bVar62 ^ bVar41 ^ (byte)iVar22;
        auVar10[9] = bVar65 ^ bVar43 ^ (byte)((uint)iVar22 >> 8);
        auVar10[10] = bVar66 ^ bVar44 ^ (byte)((uint)iVar22 >> 0x10);
        auVar10[0xb] = bVar67 ^ bVar45 ^ (byte)((uint)iVar22 >> 0x18);
        auVar10[0xc] = bVar68 ^ bVar46 ^ (byte)iVar27;
        auVar10[0xd] = bVar70 ^ bVar48 ^ (byte)((uint)iVar27 >> 8);
        auVar10[0xe] = bVar71 ^ bVar49 ^ (byte)((uint)iVar27 >> 0x10);
        auVar10[0xf] = bVar72 ^ bVar50 ^ (byte)((uint)iVar27 >> 0x18);
        if ((uVar6 & 3) == 2) {
          auVar10 = NEON_ext(auVar10,auVar10,8,1);
        }
        else if ((uVar6 & 3) == 0) {
          uVar7 = (ulong)auVar10._0_8_ >> 0x20;
          auVar10 = NEON_rev64(auVar10,4);
          auVar10._0_4_ = (uint)uVar7 ^ (uVar6 | 0x9e377900);
        }
        iVar32 = (int)uVar53 * 2;
        iVar37 = (int)((ulong)uVar53 >> 0x20) * 2;
        iVar42 = (int)uVar64 * 2;
        iVar47 = (int)((ulong)uVar64 >> 0x20) * 2;
        uVar6 = uVar6 - 1;
        iVar58 = CONCAT13(bVar35 & bVar56,
                          CONCAT12(bVar34 & bVar55,CONCAT11(bVar33 & bVar54,bVar31 & bVar51)));
        iVar69 = CONCAT13(bVar45 & bVar67,
                          CONCAT12(bVar44 & bVar66,CONCAT11(bVar43 & bVar65,bVar41 & bVar62)));
        iVar12 = CONCAT13(bVar15 | bVar56,
                          CONCAT12(bVar14 | bVar55,CONCAT11(bVar13 | bVar54,bVar11 | bVar51))) * 2;
        iVar17 = CONCAT13(bVar20 | bVar61,
                          CONCAT12(bVar19 | bVar60,CONCAT11(bVar18 | bVar59,bVar16 | bVar57))) * 2;
        iVar22 = CONCAT13(bVar25 | bVar67,
                          CONCAT12(bVar24 | bVar66,CONCAT11(bVar23 | bVar65,bVar21 | bVar62))) * 2;
        iVar27 = CONCAT13(bVar30 | bVar72,
                          CONCAT12(bVar29 | bVar71,CONCAT11(bVar28 | bVar70,bVar26 | bVar68))) * 2;
        iVar52 = iVar58 << 2;
        iVar58 = (int)(CONCAT17(bVar40 & bVar61,
                                CONCAT16(bVar39 & bVar60,
                                         CONCAT15(bVar38 & bVar59,CONCAT14(bVar36 & bVar57,iVar58)))
                               ) >> 0x20) << 2;
        iVar63 = iVar69 << 2;
        iVar69 = (int)(CONCAT17(bVar50 & bVar72,
                                CONCAT16(bVar49 & bVar71,
                                         CONCAT15(bVar48 & bVar70,CONCAT14(bVar46 & bVar68,iVar69)))
                               ) >> 0x20) << 2;
        uVar53 = CONCAT17((byte)((uint)iVar37 >> 0x18) ^ bVar20 ^ (byte)((uint)iVar58 >> 0x18),
                          CONCAT16((byte)((uint)iVar37 >> 0x10) ^ bVar19 ^
                                   (byte)((uint)iVar58 >> 0x10),
                                   CONCAT15((byte)((uint)iVar37 >> 8) ^ bVar18 ^
                                            (byte)((uint)iVar58 >> 8),
                                            CONCAT14((byte)iVar37 ^ bVar16 ^ (byte)iVar58,
                                                     CONCAT13((byte)((uint)iVar32 >> 0x18) ^ bVar15
                                                              ^ (byte)((uint)iVar52 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar32 >> 0x10)
                                                                       ^ bVar14 ^
                                                                       (byte)((uint)iVar52 >> 0x10),
                                                                       CONCAT11((byte)((uint)iVar32
                                                                                      >> 8) ^ bVar13
                                                                                ^ (byte)((uint)
                                                  iVar52 >> 8),(byte)iVar32 ^ bVar11 ^ (byte)iVar52)
                                                  ))))));
        uVar64 = CONCAT17((byte)((uint)iVar47 >> 0x18) ^ bVar30 ^ (byte)((uint)iVar69 >> 0x18),
                          CONCAT16((byte)((uint)iVar47 >> 0x10) ^ bVar29 ^
                                   (byte)((uint)iVar69 >> 0x10),
                                   CONCAT15((byte)((uint)iVar47 >> 8) ^ bVar28 ^
                                            (byte)((uint)iVar69 >> 8),
                                            CONCAT14((byte)iVar47 ^ bVar26 ^ (byte)iVar69,
                                                     CONCAT13((byte)((uint)iVar42 >> 0x18) ^ bVar25
                                                              ^ (byte)((uint)iVar63 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar42 >> 0x10)
                                                                       ^ bVar24 ^
                                                                       (byte)((uint)iVar63 >> 0x10),
                                                                       CONCAT11((byte)((uint)iVar42
                                                                                      >> 8) ^ bVar23
                                                                                ^ (byte)((uint)
                                                  iVar63 >> 8),(byte)iVar42 ^ bVar21 ^ (byte)iVar63)
                                                  ))))));
        uVar73 = CONCAT17(bVar40 ^ bVar20 ^ (byte)((uint)iVar17 >> 0x18),
                          CONCAT16(bVar39 ^ bVar19 ^ (byte)((uint)iVar17 >> 0x10),
                                   CONCAT15(bVar38 ^ bVar18 ^ (byte)((uint)iVar17 >> 8),
                                            CONCAT14(bVar36 ^ bVar16 ^ (byte)iVar17,
                                                     CONCAT13(bVar35 ^ bVar15 ^
                                                              (byte)((uint)iVar12 >> 0x18),
                                                              CONCAT12(bVar34 ^ bVar14 ^
                                                                       (byte)((uint)iVar12 >> 0x10),
                                                                       CONCAT11(bVar33 ^ bVar13 ^
                                                                                (byte)((uint)iVar12
                                                                                      >> 8),
                                                                                bVar31 ^ bVar11 ^
                                                                                (byte)iVar12)))))));
        uVar75 = CONCAT17(bVar50 ^ bVar30 ^ (byte)((uint)iVar27 >> 0x18),
                          CONCAT16(bVar49 ^ bVar29 ^ (byte)((uint)iVar27 >> 0x10),
                                   CONCAT15(bVar48 ^ bVar28 ^ (byte)((uint)iVar27 >> 8),
                                            CONCAT14(bVar46 ^ bVar26 ^ (byte)iVar27,
                                                     CONCAT13(bVar45 ^ bVar25 ^
                                                              (byte)((uint)iVar22 >> 0x18),
                                                              CONCAT12(bVar44 ^ bVar24 ^
                                                                       (byte)((uint)iVar22 >> 0x10),
                                                                       CONCAT11(bVar43 ^ bVar23 ^
                                                                                (byte)((uint)iVar22
                                                                                      >> 8),
                                                                                bVar41 ^ bVar21 ^
                                                                                (byte)iVar22)))))));
      } while (uVar6 != 0);
      *(undefined8 *)(param_1[1] + 8) = uVar75;
      *(undefined8 *)param_1[1] = uVar73;
      *(undefined8 *)(param_1[2] + 8) = uVar64;
      *(undefined8 *)param_1[2] = uVar53;
      *(long *)(*param_1 + 8) = auVar10._8_8_;
      *(long *)*param_1 = auVar10._0_8_;
      param_1[3][0] = 0;
      uVar6 = 0;
    }
    uVar3 = uVar3 - uVar1;
    puVar4 = (undefined4 *)((long)puVar4 + uVar1);
  } while (uVar3 != 0);
  if (*(long *)(lVar2 + 0x28) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


// ===== 004fc658  hydro_hash_final =====

void hydro_hash_final(undefined1 (*param_1) [16],long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined1 (*pauVar12) [16];
  undefined1 auVar13 [12];
  undefined1 auVar15 [12];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar14 [12];
  undefined1 auVar20 [16];
  byte bVar22;
  byte bVar24;
  byte bVar25;
  int iVar23;
  byte bVar26;
  byte bVar27;
  byte bVar29;
  byte bVar30;
  int iVar28;
  byte bVar31;
  byte bVar32;
  byte bVar34;
  byte bVar35;
  int iVar33;
  byte bVar36;
  byte bVar37;
  byte bVar39;
  byte bVar40;
  int iVar38;
  byte bVar41;
  byte bVar42;
  byte bVar44;
  byte bVar45;
  int iVar43;
  byte bVar46;
  byte bVar47;
  byte bVar49;
  byte bVar50;
  int iVar48;
  byte bVar51;
  byte bVar52;
  byte bVar54;
  byte bVar55;
  int iVar53;
  byte bVar56;
  byte bVar57;
  byte bVar59;
  byte bVar60;
  int iVar58;
  byte bVar61;
  byte bVar62;
  byte bVar64;
  byte bVar65;
  int iVar63;
  byte bVar66;
  byte bVar67;
  byte bVar69;
  byte bVar70;
  int iVar68;
  byte bVar71;
  byte bVar72;
  int iVar73;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar80;
  byte bVar81;
  undefined8 uVar74;
  int iVar79;
  byte bVar82;
  undefined8 uVar83;
  uint uVar84;
  undefined8 uVar85;
  uint uVar86;
  byte local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  long local_28;
  undefined1 auVar16 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  if ((param_3 == 0) ||
     ((uVar5 = 0xffffffff, param_2 != 0 && (0xffffffffffff000f < param_3 - 0x10000)))) {
    uVar10 = (ulong)(byte)param_1[3][0];
    lVar1 = 1;
    if ((param_3 & 0xff00) != 0) {
      lVar1 = 2;
    }
    local_2a = (char)(param_3 >> 8);
    uVar6 = lVar1 + 2;
    local_2c = (byte)lVar1;
    pbVar7 = &local_2c;
    local_2b = (char)param_3;
    local_29 = 0;
    do {
      uVar9 = 0x10;
      uVar8 = 0x10 - (uVar10 & 0xff);
      uVar2 = uVar6;
      if (uVar8 <= uVar6) {
        uVar2 = uVar8;
      }
      if (((uint)uVar10 & 0xff) != 0x10) {
        uVar10 = uVar2;
        pbVar11 = pbVar7;
        pauVar12 = param_1;
        if (uVar2 < 2) {
          uVar10 = 1;
        }
        do {
          uVar10 = uVar10 - 1;
          (*pauVar12)[(byte)param_1[3][0]] = (*pauVar12)[(byte)param_1[3][0]] ^ *pbVar11;
          pbVar11 = pbVar11 + 1;
          pauVar12 = (undefined1 (*) [16])(*pauVar12 + 1);
        } while (uVar10 != 0);
        uVar9 = (uint)(byte)param_1[3][0];
      }
      uVar9 = uVar9 + (int)uVar2;
      uVar10 = (ulong)uVar9;
      param_1[3][0] = (char)uVar9;
      if ((uVar9 & 0xff) == 0x10) {
        auVar17 = *param_1;
        uVar85 = *(undefined8 *)(param_1[1] + 8);
        uVar83 = *(undefined8 *)param_1[1];
        uVar10 = 0x18;
        uVar74 = *(undefined8 *)(param_1[2] + 8);
        uVar5 = *(undefined8 *)param_1[2];
        do {
          uVar84 = (uint)((ulong)uVar83 >> 0x20);
          uVar86 = (uint)((ulong)uVar85 >> 0x20);
          uVar9 = (uint)uVar10;
          iVar23 = auVar17._0_4_ * 0x1000000 + (auVar17._0_4_ >> 8);
          iVar28 = auVar17._4_4_ * 0x1000000 + (auVar17._4_4_ >> 8);
          iVar33 = auVar17._8_4_ * 0x1000000 + (auVar17._8_4_ >> 8);
          iVar38 = auVar17._12_4_ * 0x1000000 + (auVar17._12_4_ >> 8);
          iVar43 = (uint)uVar83 * 0x200 + ((uint)uVar83 >> 0x17);
          iVar48 = uVar84 * 0x200 + (uVar84 >> 0x17);
          iVar53 = (uint)uVar85 * 0x200 + ((uint)uVar85 >> 0x17);
          iVar58 = uVar86 * 0x200 + (uVar86 >> 0x17);
          bVar22 = (byte)iVar23;
          bVar42 = (byte)iVar43;
          bVar24 = (byte)((uint)iVar23 >> 8);
          bVar44 = (byte)((uint)iVar43 >> 8);
          bVar25 = (byte)((uint)iVar23 >> 0x10);
          bVar45 = (byte)((uint)iVar43 >> 0x10);
          bVar26 = (byte)((uint)iVar23 >> 0x18);
          bVar46 = (byte)((uint)iVar43 >> 0x18);
          iVar23 = CONCAT13(bVar26 & bVar46,
                            CONCAT12(bVar25 & bVar45,CONCAT11(bVar24 & bVar44,bVar22 & bVar42)));
          bVar27 = (byte)iVar28;
          bVar47 = (byte)iVar48;
          bVar29 = (byte)((uint)iVar28 >> 8);
          bVar49 = (byte)((uint)iVar48 >> 8);
          bVar30 = (byte)((uint)iVar28 >> 0x10);
          bVar50 = (byte)((uint)iVar48 >> 0x10);
          bVar31 = (byte)((uint)iVar28 >> 0x18);
          bVar51 = (byte)((uint)iVar48 >> 0x18);
          auVar13._0_8_ =
               CONCAT17(bVar31 & bVar51,
                        CONCAT16(bVar30 & bVar50,
                                 CONCAT15(bVar29 & bVar49,CONCAT14(bVar27 & bVar47,iVar23))));
          bVar32 = (byte)iVar33;
          bVar52 = (byte)iVar53;
          auVar13[8] = bVar32 & bVar52;
          bVar34 = (byte)((uint)iVar33 >> 8);
          bVar54 = (byte)((uint)iVar53 >> 8);
          auVar13[9] = bVar34 & bVar54;
          bVar35 = (byte)((uint)iVar33 >> 0x10);
          bVar55 = (byte)((uint)iVar53 >> 0x10);
          auVar13[10] = bVar35 & bVar55;
          bVar36 = (byte)((uint)iVar33 >> 0x18);
          bVar56 = (byte)((uint)iVar53 >> 0x18);
          auVar13[0xb] = bVar36 & bVar56;
          bVar37 = (byte)iVar38;
          bVar57 = (byte)iVar58;
          auVar16[0xc] = bVar37 & bVar57;
          auVar16._0_12_ = auVar13;
          bVar39 = (byte)((uint)iVar38 >> 8);
          bVar59 = (byte)((uint)iVar58 >> 8);
          auVar16[0xd] = bVar39 & bVar59;
          bVar40 = (byte)((uint)iVar38 >> 0x10);
          bVar60 = (byte)((uint)iVar58 >> 0x10);
          auVar16[0xe] = bVar40 & bVar60;
          bVar41 = (byte)((uint)iVar38 >> 0x18);
          bVar61 = (byte)((uint)iVar58 >> 0x18);
          auVar16[0xf] = bVar41 & bVar61;
          bVar62 = (byte)uVar5;
          bVar64 = (byte)((ulong)uVar5 >> 8);
          bVar65 = (byte)((ulong)uVar5 >> 0x10);
          bVar66 = (byte)((ulong)uVar5 >> 0x18);
          bVar67 = (byte)((ulong)uVar5 >> 0x20);
          bVar69 = (byte)((ulong)uVar5 >> 0x28);
          bVar70 = (byte)((ulong)uVar5 >> 0x30);
          bVar71 = (byte)((ulong)uVar5 >> 0x38);
          bVar72 = (byte)uVar74;
          bVar75 = (byte)((ulong)uVar74 >> 8);
          bVar76 = (byte)((ulong)uVar74 >> 0x10);
          bVar77 = (byte)((ulong)uVar74 >> 0x18);
          bVar78 = (byte)((ulong)uVar74 >> 0x20);
          bVar80 = (byte)((ulong)uVar74 >> 0x28);
          bVar81 = (byte)((ulong)uVar74 >> 0x30);
          bVar82 = (byte)((ulong)uVar74 >> 0x38);
          iVar23 = iVar23 << 3;
          iVar28 = (int)((ulong)auVar13._0_8_ >> 0x20) << 3;
          iVar33 = auVar13._8_4_ << 3;
          iVar38 = auVar16._12_4_ << 3;
          auVar17._0_8_ =
               CONCAT17(bVar71 ^ bVar51 ^ (byte)((uint)iVar28 >> 0x18),
                        CONCAT16(bVar70 ^ bVar50 ^ (byte)((uint)iVar28 >> 0x10),
                                 CONCAT15(bVar69 ^ bVar49 ^ (byte)((uint)iVar28 >> 8),
                                          CONCAT14(bVar67 ^ bVar47 ^ (byte)iVar28,
                                                   CONCAT13(bVar66 ^ bVar46 ^
                                                            (byte)((uint)iVar23 >> 0x18),
                                                            CONCAT12(bVar65 ^ bVar45 ^
                                                                     (byte)((uint)iVar23 >> 0x10),
                                                                     CONCAT11(bVar64 ^ bVar44 ^
                                                                              (byte)((uint)iVar23 >>
                                                                                    8),bVar62 ^ 
                                                  bVar42 ^ (byte)iVar23)))))));
          auVar17[8] = bVar72 ^ bVar52 ^ (byte)iVar33;
          auVar17[9] = bVar75 ^ bVar54 ^ (byte)((uint)iVar33 >> 8);
          auVar17[10] = bVar76 ^ bVar55 ^ (byte)((uint)iVar33 >> 0x10);
          auVar17[0xb] = bVar77 ^ bVar56 ^ (byte)((uint)iVar33 >> 0x18);
          auVar17[0xc] = bVar78 ^ bVar57 ^ (byte)iVar38;
          auVar17[0xd] = bVar80 ^ bVar59 ^ (byte)((uint)iVar38 >> 8);
          auVar17[0xe] = bVar81 ^ bVar60 ^ (byte)((uint)iVar38 >> 0x10);
          auVar17[0xf] = bVar82 ^ bVar61 ^ (byte)((uint)iVar38 >> 0x18);
          if ((uVar9 & 3) == 2) {
            auVar17 = NEON_ext(auVar17,auVar17,8,1);
          }
          else if ((uVar10 & 3) == 0) {
            uVar10 = (ulong)auVar17._0_8_ >> 0x20;
            auVar17 = NEON_rev64(auVar17,4);
            auVar17._0_4_ = (uint)uVar10 ^ (uVar9 | 0x9e377900);
          }
          iVar43 = (int)uVar5 * 2;
          iVar48 = (int)((ulong)uVar5 >> 0x20) * 2;
          iVar53 = (int)uVar74 * 2;
          iVar58 = (int)((ulong)uVar74 >> 0x20) * 2;
          uVar10 = (ulong)(uVar9 - 1);
          iVar68 = CONCAT13(bVar46 & bVar66,
                            CONCAT12(bVar45 & bVar65,CONCAT11(bVar44 & bVar64,bVar42 & bVar62)));
          iVar79 = CONCAT13(bVar56 & bVar77,
                            CONCAT12(bVar55 & bVar76,CONCAT11(bVar54 & bVar75,bVar52 & bVar72)));
          iVar23 = CONCAT13(bVar26 | bVar66,
                            CONCAT12(bVar25 | bVar65,CONCAT11(bVar24 | bVar64,bVar22 | bVar62))) * 2
          ;
          iVar28 = CONCAT13(bVar31 | bVar71,
                            CONCAT12(bVar30 | bVar70,CONCAT11(bVar29 | bVar69,bVar27 | bVar67))) * 2
          ;
          iVar33 = CONCAT13(bVar36 | bVar77,
                            CONCAT12(bVar35 | bVar76,CONCAT11(bVar34 | bVar75,bVar32 | bVar72))) * 2
          ;
          iVar38 = CONCAT13(bVar41 | bVar82,
                            CONCAT12(bVar40 | bVar81,CONCAT11(bVar39 | bVar80,bVar37 | bVar78))) * 2
          ;
          iVar63 = iVar68 << 2;
          iVar68 = (int)(CONCAT17(bVar51 & bVar71,
                                  CONCAT16(bVar50 & bVar70,
                                           CONCAT15(bVar49 & bVar69,CONCAT14(bVar47 & bVar67,iVar68)
                                                   ))) >> 0x20) << 2;
          iVar73 = iVar79 << 2;
          iVar79 = (int)(CONCAT17(bVar61 & bVar82,
                                  CONCAT16(bVar60 & bVar81,
                                           CONCAT15(bVar59 & bVar80,CONCAT14(bVar57 & bVar78,iVar79)
                                                   ))) >> 0x20) << 2;
          uVar5 = CONCAT17((byte)((uint)iVar48 >> 0x18) ^ bVar31 ^ (byte)((uint)iVar68 >> 0x18),
                           CONCAT16((byte)((uint)iVar48 >> 0x10) ^ bVar30 ^
                                    (byte)((uint)iVar68 >> 0x10),
                                    CONCAT15((byte)((uint)iVar48 >> 8) ^ bVar29 ^
                                             (byte)((uint)iVar68 >> 8),
                                             CONCAT14((byte)iVar48 ^ bVar27 ^ (byte)iVar68,
                                                      CONCAT13((byte)((uint)iVar43 >> 0x18) ^ bVar26
                                                               ^ (byte)((uint)iVar63 >> 0x18),
                                                               CONCAT12((byte)((uint)iVar43 >> 0x10)
                                                                        ^ bVar25 ^
                                                                        (byte)((uint)iVar63 >> 0x10)
                                                                        ,CONCAT11((byte)((uint)
                                                  iVar43 >> 8) ^ bVar24 ^ (byte)((uint)iVar63 >> 8),
                                                  (byte)iVar43 ^ bVar22 ^ (byte)iVar63)))))));
          uVar74 = CONCAT17((byte)((uint)iVar58 >> 0x18) ^ bVar41 ^ (byte)((uint)iVar79 >> 0x18),
                            CONCAT16((byte)((uint)iVar58 >> 0x10) ^ bVar40 ^
                                     (byte)((uint)iVar79 >> 0x10),
                                     CONCAT15((byte)((uint)iVar58 >> 8) ^ bVar39 ^
                                              (byte)((uint)iVar79 >> 8),
                                              CONCAT14((byte)iVar58 ^ bVar37 ^ (byte)iVar79,
                                                       CONCAT13((byte)((uint)iVar53 >> 0x18) ^
                                                                bVar36 ^ (byte)((uint)iVar73 >> 0x18
                                                                               ),
                                                                CONCAT12((byte)((uint)iVar53 >> 0x10
                                                                               ) ^ bVar35 ^
                                                                         (byte)((uint)iVar73 >> 0x10
                                                                               ),CONCAT11((byte)((
                                                  uint)iVar53 >> 8) ^ bVar34 ^
                                                  (byte)((uint)iVar73 >> 8),
                                                  (byte)iVar53 ^ bVar32 ^ (byte)iVar73)))))));
          uVar83 = CONCAT17(bVar51 ^ bVar31 ^ (byte)((uint)iVar28 >> 0x18),
                            CONCAT16(bVar50 ^ bVar30 ^ (byte)((uint)iVar28 >> 0x10),
                                     CONCAT15(bVar49 ^ bVar29 ^ (byte)((uint)iVar28 >> 8),
                                              CONCAT14(bVar47 ^ bVar27 ^ (byte)iVar28,
                                                       CONCAT13(bVar46 ^ bVar26 ^
                                                                (byte)((uint)iVar23 >> 0x18),
                                                                CONCAT12(bVar45 ^ bVar25 ^
                                                                         (byte)((uint)iVar23 >> 0x10
                                                                               ),CONCAT11(bVar44 ^ 
                                                  bVar24 ^ (byte)((uint)iVar23 >> 8),
                                                  bVar42 ^ bVar22 ^ (byte)iVar23)))))));
          uVar85 = CONCAT17(bVar61 ^ bVar41 ^ (byte)((uint)iVar38 >> 0x18),
                            CONCAT16(bVar60 ^ bVar40 ^ (byte)((uint)iVar38 >> 0x10),
                                     CONCAT15(bVar59 ^ bVar39 ^ (byte)((uint)iVar38 >> 8),
                                              CONCAT14(bVar57 ^ bVar37 ^ (byte)iVar38,
                                                       CONCAT13(bVar56 ^ bVar36 ^
                                                                (byte)((uint)iVar33 >> 0x18),
                                                                CONCAT12(bVar55 ^ bVar35 ^
                                                                         (byte)((uint)iVar33 >> 0x10
                                                                               ),CONCAT11(bVar54 ^ 
                                                  bVar34 ^ (byte)((uint)iVar33 >> 8),
                                                  bVar52 ^ bVar32 ^ (byte)iVar33)))))));
        } while (uVar9 - 1 != 0);
        *(undefined8 *)(param_1[1] + 8) = uVar85;
        *(undefined8 *)param_1[1] = uVar83;
        *(undefined8 *)(param_1[2] + 8) = uVar74;
        *(undefined8 *)param_1[2] = uVar5;
        *(long *)(*param_1 + 8) = auVar17._8_8_;
        *(long *)*param_1 = auVar17._0_8_;
        param_1[3][0] = 0;
      }
      uVar6 = uVar6 - uVar2;
      pbVar7 = pbVar7 + uVar2;
    } while (uVar6 != 0);
    (*param_1)[uVar10 & 0xff] = (*param_1)[uVar10 & 0xff] ^ 0x1f;
    (*param_1)[0xf] = (*param_1)[0xf] ^ 0x80;
    if (param_3 < 0x10) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        auVar18 = *param_1;
        uVar85 = *(undefined8 *)(param_1[1] + 8);
        uVar83 = *(undefined8 *)param_1[1];
        uVar9 = 0x18;
        uVar74 = *(undefined8 *)(param_1[2] + 8);
        uVar5 = *(undefined8 *)param_1[2];
        do {
          uVar84 = (uint)((ulong)uVar83 >> 0x20);
          uVar86 = (uint)((ulong)uVar85 >> 0x20);
          iVar23 = auVar18._0_4_ * 0x1000000 + (auVar18._0_4_ >> 8);
          iVar28 = auVar18._4_4_ * 0x1000000 + (auVar18._4_4_ >> 8);
          iVar33 = auVar18._8_4_ * 0x1000000 + (auVar18._8_4_ >> 8);
          iVar38 = auVar18._12_4_ * 0x1000000 + (auVar18._12_4_ >> 8);
          iVar43 = (uint)uVar83 * 0x200 + ((uint)uVar83 >> 0x17);
          iVar48 = uVar84 * 0x200 + (uVar84 >> 0x17);
          iVar53 = (uint)uVar85 * 0x200 + ((uint)uVar85 >> 0x17);
          iVar58 = uVar86 * 0x200 + (uVar86 >> 0x17);
          bVar22 = (byte)iVar23;
          bVar42 = (byte)iVar43;
          bVar24 = (byte)((uint)iVar23 >> 8);
          bVar44 = (byte)((uint)iVar43 >> 8);
          bVar25 = (byte)((uint)iVar23 >> 0x10);
          bVar45 = (byte)((uint)iVar43 >> 0x10);
          bVar26 = (byte)((uint)iVar23 >> 0x18);
          bVar46 = (byte)((uint)iVar43 >> 0x18);
          iVar23 = CONCAT13(bVar26 & bVar46,
                            CONCAT12(bVar25 & bVar45,CONCAT11(bVar24 & bVar44,bVar22 & bVar42)));
          bVar27 = (byte)iVar28;
          bVar47 = (byte)iVar48;
          bVar29 = (byte)((uint)iVar28 >> 8);
          bVar49 = (byte)((uint)iVar48 >> 8);
          bVar30 = (byte)((uint)iVar28 >> 0x10);
          bVar50 = (byte)((uint)iVar48 >> 0x10);
          bVar31 = (byte)((uint)iVar28 >> 0x18);
          bVar51 = (byte)((uint)iVar48 >> 0x18);
          auVar14._0_8_ =
               CONCAT17(bVar31 & bVar51,
                        CONCAT16(bVar30 & bVar50,
                                 CONCAT15(bVar29 & bVar49,CONCAT14(bVar27 & bVar47,iVar23))));
          bVar32 = (byte)iVar33;
          bVar52 = (byte)iVar53;
          auVar14[8] = bVar32 & bVar52;
          bVar34 = (byte)((uint)iVar33 >> 8);
          bVar54 = (byte)((uint)iVar53 >> 8);
          auVar14[9] = bVar34 & bVar54;
          bVar35 = (byte)((uint)iVar33 >> 0x10);
          bVar55 = (byte)((uint)iVar53 >> 0x10);
          auVar14[10] = bVar35 & bVar55;
          bVar36 = (byte)((uint)iVar33 >> 0x18);
          bVar56 = (byte)((uint)iVar53 >> 0x18);
          auVar14[0xb] = bVar36 & bVar56;
          bVar37 = (byte)iVar38;
          bVar57 = (byte)iVar58;
          auVar19[0xc] = bVar37 & bVar57;
          auVar19._0_12_ = auVar14;
          bVar39 = (byte)((uint)iVar38 >> 8);
          bVar59 = (byte)((uint)iVar58 >> 8);
          auVar19[0xd] = bVar39 & bVar59;
          bVar40 = (byte)((uint)iVar38 >> 0x10);
          bVar60 = (byte)((uint)iVar58 >> 0x10);
          auVar19[0xe] = bVar40 & bVar60;
          bVar41 = (byte)((uint)iVar38 >> 0x18);
          bVar61 = (byte)((uint)iVar58 >> 0x18);
          auVar19[0xf] = bVar41 & bVar61;
          bVar62 = (byte)uVar5;
          bVar64 = (byte)((ulong)uVar5 >> 8);
          bVar65 = (byte)((ulong)uVar5 >> 0x10);
          bVar66 = (byte)((ulong)uVar5 >> 0x18);
          bVar67 = (byte)((ulong)uVar5 >> 0x20);
          bVar69 = (byte)((ulong)uVar5 >> 0x28);
          bVar70 = (byte)((ulong)uVar5 >> 0x30);
          bVar71 = (byte)((ulong)uVar5 >> 0x38);
          bVar72 = (byte)uVar74;
          bVar75 = (byte)((ulong)uVar74 >> 8);
          bVar76 = (byte)((ulong)uVar74 >> 0x10);
          bVar77 = (byte)((ulong)uVar74 >> 0x18);
          bVar78 = (byte)((ulong)uVar74 >> 0x20);
          bVar80 = (byte)((ulong)uVar74 >> 0x28);
          bVar81 = (byte)((ulong)uVar74 >> 0x30);
          bVar82 = (byte)((ulong)uVar74 >> 0x38);
          iVar23 = iVar23 << 3;
          iVar28 = (int)((ulong)auVar14._0_8_ >> 0x20) << 3;
          iVar33 = auVar14._8_4_ << 3;
          iVar38 = auVar19._12_4_ << 3;
          auVar18._0_8_ =
               CONCAT17(bVar71 ^ bVar51 ^ (byte)((uint)iVar28 >> 0x18),
                        CONCAT16(bVar70 ^ bVar50 ^ (byte)((uint)iVar28 >> 0x10),
                                 CONCAT15(bVar69 ^ bVar49 ^ (byte)((uint)iVar28 >> 8),
                                          CONCAT14(bVar67 ^ bVar47 ^ (byte)iVar28,
                                                   CONCAT13(bVar66 ^ bVar46 ^
                                                            (byte)((uint)iVar23 >> 0x18),
                                                            CONCAT12(bVar65 ^ bVar45 ^
                                                                     (byte)((uint)iVar23 >> 0x10),
                                                                     CONCAT11(bVar64 ^ bVar44 ^
                                                                              (byte)((uint)iVar23 >>
                                                                                    8),bVar62 ^ 
                                                  bVar42 ^ (byte)iVar23)))))));
          auVar18[8] = bVar72 ^ bVar52 ^ (byte)iVar33;
          auVar18[9] = bVar75 ^ bVar54 ^ (byte)((uint)iVar33 >> 8);
          auVar18[10] = bVar76 ^ bVar55 ^ (byte)((uint)iVar33 >> 0x10);
          auVar18[0xb] = bVar77 ^ bVar56 ^ (byte)((uint)iVar33 >> 0x18);
          auVar18[0xc] = bVar78 ^ bVar57 ^ (byte)iVar38;
          auVar18[0xd] = bVar80 ^ bVar59 ^ (byte)((uint)iVar38 >> 8);
          auVar18[0xe] = bVar81 ^ bVar60 ^ (byte)((uint)iVar38 >> 0x10);
          auVar18[0xf] = bVar82 ^ bVar61 ^ (byte)((uint)iVar38 >> 0x18);
          if ((uVar9 & 3) == 2) {
            auVar18 = NEON_ext(auVar18,auVar18,8,1);
          }
          else if ((uVar9 & 3) == 0) {
            uVar6 = (ulong)auVar18._0_8_ >> 0x20;
            auVar17 = NEON_rev64(auVar18,4);
            auVar18._4_12_ = auVar17._4_12_;
            auVar18._0_4_ = (uint)uVar6 ^ (uVar9 | 0x9e377900);
          }
          iVar43 = (int)uVar5 * 2;
          iVar48 = (int)((ulong)uVar5 >> 0x20) * 2;
          iVar53 = (int)uVar74 * 2;
          iVar58 = (int)((ulong)uVar74 >> 0x20) * 2;
          uVar9 = uVar9 - 1;
          iVar68 = CONCAT13(bVar46 & bVar66,
                            CONCAT12(bVar45 & bVar65,CONCAT11(bVar44 & bVar64,bVar42 & bVar62)));
          iVar79 = CONCAT13(bVar56 & bVar77,
                            CONCAT12(bVar55 & bVar76,CONCAT11(bVar54 & bVar75,bVar52 & bVar72)));
          iVar23 = CONCAT13(bVar26 | bVar66,
                            CONCAT12(bVar25 | bVar65,CONCAT11(bVar24 | bVar64,bVar22 | bVar62))) * 2
          ;
          iVar28 = CONCAT13(bVar31 | bVar71,
                            CONCAT12(bVar30 | bVar70,CONCAT11(bVar29 | bVar69,bVar27 | bVar67))) * 2
          ;
          iVar33 = CONCAT13(bVar36 | bVar77,
                            CONCAT12(bVar35 | bVar76,CONCAT11(bVar34 | bVar75,bVar32 | bVar72))) * 2
          ;
          iVar38 = CONCAT13(bVar41 | bVar82,
                            CONCAT12(bVar40 | bVar81,CONCAT11(bVar39 | bVar80,bVar37 | bVar78))) * 2
          ;
          iVar63 = iVar68 << 2;
          iVar68 = (int)(CONCAT17(bVar51 & bVar71,
                                  CONCAT16(bVar50 & bVar70,
                                           CONCAT15(bVar49 & bVar69,CONCAT14(bVar47 & bVar67,iVar68)
                                                   ))) >> 0x20) << 2;
          iVar73 = iVar79 << 2;
          iVar79 = (int)(CONCAT17(bVar61 & bVar82,
                                  CONCAT16(bVar60 & bVar81,
                                           CONCAT15(bVar59 & bVar80,CONCAT14(bVar57 & bVar78,iVar79)
                                                   ))) >> 0x20) << 2;
          uVar5 = CONCAT17((byte)((uint)iVar48 >> 0x18) ^ bVar31 ^ (byte)((uint)iVar68 >> 0x18),
                           CONCAT16((byte)((uint)iVar48 >> 0x10) ^ bVar30 ^
                                    (byte)((uint)iVar68 >> 0x10),
                                    CONCAT15((byte)((uint)iVar48 >> 8) ^ bVar29 ^
                                             (byte)((uint)iVar68 >> 8),
                                             CONCAT14((byte)iVar48 ^ bVar27 ^ (byte)iVar68,
                                                      CONCAT13((byte)((uint)iVar43 >> 0x18) ^ bVar26
                                                               ^ (byte)((uint)iVar63 >> 0x18),
                                                               CONCAT12((byte)((uint)iVar43 >> 0x10)
                                                                        ^ bVar25 ^
                                                                        (byte)((uint)iVar63 >> 0x10)
                                                                        ,CONCAT11((byte)((uint)
                                                  iVar43 >> 8) ^ bVar24 ^ (byte)((uint)iVar63 >> 8),
                                                  (byte)iVar43 ^ bVar22 ^ (byte)iVar63)))))));
          uVar74 = CONCAT17((byte)((uint)iVar58 >> 0x18) ^ bVar41 ^ (byte)((uint)iVar79 >> 0x18),
                            CONCAT16((byte)((uint)iVar58 >> 0x10) ^ bVar40 ^
                                     (byte)((uint)iVar79 >> 0x10),
                                     CONCAT15((byte)((uint)iVar58 >> 8) ^ bVar39 ^
                                              (byte)((uint)iVar79 >> 8),
                                              CONCAT14((byte)iVar58 ^ bVar37 ^ (byte)iVar79,
                                                       CONCAT13((byte)((uint)iVar53 >> 0x18) ^
                                                                bVar36 ^ (byte)((uint)iVar73 >> 0x18
                                                                               ),
                                                                CONCAT12((byte)((uint)iVar53 >> 0x10
                                                                               ) ^ bVar35 ^
                                                                         (byte)((uint)iVar73 >> 0x10
                                                                               ),CONCAT11((byte)((
                                                  uint)iVar53 >> 8) ^ bVar34 ^
                                                  (byte)((uint)iVar73 >> 8),
                                                  (byte)iVar53 ^ bVar32 ^ (byte)iVar73)))))));
          uVar83 = CONCAT17(bVar51 ^ bVar31 ^ (byte)((uint)iVar28 >> 0x18),
                            CONCAT16(bVar50 ^ bVar30 ^ (byte)((uint)iVar28 >> 0x10),
                                     CONCAT15(bVar49 ^ bVar29 ^ (byte)((uint)iVar28 >> 8),
                                              CONCAT14(bVar47 ^ bVar27 ^ (byte)iVar28,
                                                       CONCAT13(bVar46 ^ bVar26 ^
                                                                (byte)((uint)iVar23 >> 0x18),
                                                                CONCAT12(bVar45 ^ bVar25 ^
                                                                         (byte)((uint)iVar23 >> 0x10
                                                                               ),CONCAT11(bVar44 ^ 
                                                  bVar24 ^ (byte)((uint)iVar23 >> 8),
                                                  bVar42 ^ bVar22 ^ (byte)iVar23)))))));
          uVar85 = CONCAT17(bVar61 ^ bVar41 ^ (byte)((uint)iVar38 >> 0x18),
                            CONCAT16(bVar60 ^ bVar40 ^ (byte)((uint)iVar38 >> 0x10),
                                     CONCAT15(bVar59 ^ bVar39 ^ (byte)((uint)iVar38 >> 8),
                                              CONCAT14(bVar57 ^ bVar37 ^ (byte)iVar38,
                                                       CONCAT13(bVar56 ^ bVar36 ^
                                                                (byte)((uint)iVar33 >> 0x18),
                                                                CONCAT12(bVar55 ^ bVar35 ^
                                                                         (byte)((uint)iVar33 >> 0x10
                                                                               ),CONCAT11(bVar54 ^ 
                                                  bVar34 ^ (byte)((uint)iVar33 >> 8),
                                                  bVar52 ^ bVar32 ^ (byte)iVar33)))))));
        } while (uVar9 != 0);
        *(long *)(*param_1 + 8) = auVar18._8_8_;
        *(long *)*param_1 = auVar18._0_8_;
        *(undefined8 *)(param_1[1] + 8) = uVar85;
        *(undefined8 *)param_1[1] = uVar83;
        uVar83 = *(undefined8 *)*param_1;
        uVar85 = *(undefined8 *)(*param_1 + 8);
        *(undefined8 *)(param_1[2] + 8) = uVar74;
        *(undefined8 *)param_1[2] = uVar5;
        puVar3 = (undefined8 *)(param_2 + uVar10 * 0x10);
        puVar3[1] = uVar85;
        *puVar3 = uVar83;
        uVar10 = uVar10 + 1;
      } while (uVar10 != param_3 >> 4);
      uVar10 = param_3 & 0xfffffffffffffff0;
    }
    if ((param_3 & 0xf) != 0) {
      auVar20 = *param_1;
      uVar85 = *(undefined8 *)(param_1[1] + 8);
      uVar83 = *(undefined8 *)param_1[1];
      uVar9 = 0x18;
      uVar74 = *(undefined8 *)(param_1[2] + 8);
      uVar5 = *(undefined8 *)param_1[2];
      do {
        uVar84 = (uint)((ulong)uVar83 >> 0x20);
        uVar86 = (uint)((ulong)uVar85 >> 0x20);
        iVar23 = auVar20._0_4_ * 0x1000000 + (auVar20._0_4_ >> 8);
        iVar28 = auVar20._4_4_ * 0x1000000 + (auVar20._4_4_ >> 8);
        iVar33 = auVar20._8_4_ * 0x1000000 + (auVar20._8_4_ >> 8);
        iVar38 = auVar20._12_4_ * 0x1000000 + (auVar20._12_4_ >> 8);
        iVar43 = (uint)uVar83 * 0x200 + ((uint)uVar83 >> 0x17);
        iVar48 = uVar84 * 0x200 + (uVar84 >> 0x17);
        iVar53 = (uint)uVar85 * 0x200 + ((uint)uVar85 >> 0x17);
        iVar58 = uVar86 * 0x200 + (uVar86 >> 0x17);
        bVar22 = (byte)iVar23;
        bVar42 = (byte)iVar43;
        bVar24 = (byte)((uint)iVar23 >> 8);
        bVar44 = (byte)((uint)iVar43 >> 8);
        bVar25 = (byte)((uint)iVar23 >> 0x10);
        bVar45 = (byte)((uint)iVar43 >> 0x10);
        bVar26 = (byte)((uint)iVar23 >> 0x18);
        bVar46 = (byte)((uint)iVar43 >> 0x18);
        iVar23 = CONCAT13(bVar26 & bVar46,
                          CONCAT12(bVar25 & bVar45,CONCAT11(bVar24 & bVar44,bVar22 & bVar42)));
        bVar27 = (byte)iVar28;
        bVar47 = (byte)iVar48;
        bVar29 = (byte)((uint)iVar28 >> 8);
        bVar49 = (byte)((uint)iVar48 >> 8);
        bVar30 = (byte)((uint)iVar28 >> 0x10);
        bVar50 = (byte)((uint)iVar48 >> 0x10);
        bVar31 = (byte)((uint)iVar28 >> 0x18);
        bVar51 = (byte)((uint)iVar48 >> 0x18);
        auVar15._0_8_ =
             CONCAT17(bVar31 & bVar51,
                      CONCAT16(bVar30 & bVar50,
                               CONCAT15(bVar29 & bVar49,CONCAT14(bVar27 & bVar47,iVar23))));
        bVar32 = (byte)iVar33;
        bVar52 = (byte)iVar53;
        auVar15[8] = bVar32 & bVar52;
        bVar34 = (byte)((uint)iVar33 >> 8);
        bVar54 = (byte)((uint)iVar53 >> 8);
        auVar15[9] = bVar34 & bVar54;
        bVar35 = (byte)((uint)iVar33 >> 0x10);
        bVar55 = (byte)((uint)iVar53 >> 0x10);
        auVar15[10] = bVar35 & bVar55;
        bVar36 = (byte)((uint)iVar33 >> 0x18);
        bVar56 = (byte)((uint)iVar53 >> 0x18);
        auVar15[0xb] = bVar36 & bVar56;
        bVar37 = (byte)iVar38;
        bVar57 = (byte)iVar58;
        auVar21[0xc] = bVar37 & bVar57;
        auVar21._0_12_ = auVar15;
        bVar39 = (byte)((uint)iVar38 >> 8);
        bVar59 = (byte)((uint)iVar58 >> 8);
        auVar21[0xd] = bVar39 & bVar59;
        bVar40 = (byte)((uint)iVar38 >> 0x10);
        bVar60 = (byte)((uint)iVar58 >> 0x10);
        auVar21[0xe] = bVar40 & bVar60;
        bVar41 = (byte)((uint)iVar38 >> 0x18);
        bVar61 = (byte)((uint)iVar58 >> 0x18);
        auVar21[0xf] = bVar41 & bVar61;
        bVar62 = (byte)uVar5;
        bVar64 = (byte)((ulong)uVar5 >> 8);
        bVar65 = (byte)((ulong)uVar5 >> 0x10);
        bVar66 = (byte)((ulong)uVar5 >> 0x18);
        bVar67 = (byte)((ulong)uVar5 >> 0x20);
        bVar69 = (byte)((ulong)uVar5 >> 0x28);
        bVar70 = (byte)((ulong)uVar5 >> 0x30);
        bVar71 = (byte)((ulong)uVar5 >> 0x38);
        bVar72 = (byte)uVar74;
        bVar75 = (byte)((ulong)uVar74 >> 8);
        bVar76 = (byte)((ulong)uVar74 >> 0x10);
        bVar77 = (byte)((ulong)uVar74 >> 0x18);
        bVar78 = (byte)((ulong)uVar74 >> 0x20);
        bVar80 = (byte)((ulong)uVar74 >> 0x28);
        bVar81 = (byte)((ulong)uVar74 >> 0x30);
        bVar82 = (byte)((ulong)uVar74 >> 0x38);
        iVar23 = iVar23 << 3;
        iVar28 = (int)((ulong)auVar15._0_8_ >> 0x20) << 3;
        iVar33 = auVar15._8_4_ << 3;
        iVar38 = auVar21._12_4_ << 3;
        auVar20._0_8_ =
             CONCAT17(bVar71 ^ bVar51 ^ (byte)((uint)iVar28 >> 0x18),
                      CONCAT16(bVar70 ^ bVar50 ^ (byte)((uint)iVar28 >> 0x10),
                               CONCAT15(bVar69 ^ bVar49 ^ (byte)((uint)iVar28 >> 8),
                                        CONCAT14(bVar67 ^ bVar47 ^ (byte)iVar28,
                                                 CONCAT13(bVar66 ^ bVar46 ^
                                                          (byte)((uint)iVar23 >> 0x18),
                                                          CONCAT12(bVar65 ^ bVar45 ^
                                                                   (byte)((uint)iVar23 >> 0x10),
                                                                   CONCAT11(bVar64 ^ bVar44 ^
                                                                            (byte)((uint)iVar23 >> 8
                                                                                  ),bVar62 ^ bVar42
                                                                                    ^ (byte)iVar23))
                                                         )))));
        auVar20[8] = bVar72 ^ bVar52 ^ (byte)iVar33;
        auVar20[9] = bVar75 ^ bVar54 ^ (byte)((uint)iVar33 >> 8);
        auVar20[10] = bVar76 ^ bVar55 ^ (byte)((uint)iVar33 >> 0x10);
        auVar20[0xb] = bVar77 ^ bVar56 ^ (byte)((uint)iVar33 >> 0x18);
        auVar20[0xc] = bVar78 ^ bVar57 ^ (byte)iVar38;
        auVar20[0xd] = bVar80 ^ bVar59 ^ (byte)((uint)iVar38 >> 8);
        auVar20[0xe] = bVar81 ^ bVar60 ^ (byte)((uint)iVar38 >> 0x10);
        auVar20[0xf] = bVar82 ^ bVar61 ^ (byte)((uint)iVar38 >> 0x18);
        if ((uVar9 & 3) == 2) {
          auVar20 = NEON_ext(auVar20,auVar20,8,1);
        }
        else if ((uVar9 & 3) == 0) {
          uVar6 = (ulong)auVar20._0_8_ >> 0x20;
          auVar17 = NEON_rev64(auVar20,4);
          auVar20._4_12_ = auVar17._4_12_;
          auVar20._0_4_ = (uint)uVar6 ^ (uVar9 | 0x9e377900);
        }
        iVar43 = (int)uVar5 * 2;
        iVar48 = (int)((ulong)uVar5 >> 0x20) * 2;
        iVar53 = (int)uVar74 * 2;
        iVar58 = (int)((ulong)uVar74 >> 0x20) * 2;
        uVar9 = uVar9 - 1;
        iVar68 = CONCAT13(bVar46 & bVar66,
                          CONCAT12(bVar45 & bVar65,CONCAT11(bVar44 & bVar64,bVar42 & bVar62)));
        iVar79 = CONCAT13(bVar56 & bVar77,
                          CONCAT12(bVar55 & bVar76,CONCAT11(bVar54 & bVar75,bVar52 & bVar72)));
        iVar23 = CONCAT13(bVar26 | bVar66,
                          CONCAT12(bVar25 | bVar65,CONCAT11(bVar24 | bVar64,bVar22 | bVar62))) * 2;
        iVar28 = CONCAT13(bVar31 | bVar71,
                          CONCAT12(bVar30 | bVar70,CONCAT11(bVar29 | bVar69,bVar27 | bVar67))) * 2;
        iVar33 = CONCAT13(bVar36 | bVar77,
                          CONCAT12(bVar35 | bVar76,CONCAT11(bVar34 | bVar75,bVar32 | bVar72))) * 2;
        iVar38 = CONCAT13(bVar41 | bVar82,
                          CONCAT12(bVar40 | bVar81,CONCAT11(bVar39 | bVar80,bVar37 | bVar78))) * 2;
        iVar63 = iVar68 << 2;
        iVar68 = (int)(CONCAT17(bVar51 & bVar71,
                                CONCAT16(bVar50 & bVar70,
                                         CONCAT15(bVar49 & bVar69,CONCAT14(bVar47 & bVar67,iVar68)))
                               ) >> 0x20) << 2;
        iVar73 = iVar79 << 2;
        iVar79 = (int)(CONCAT17(bVar61 & bVar82,
                                CONCAT16(bVar60 & bVar81,
                                         CONCAT15(bVar59 & bVar80,CONCAT14(bVar57 & bVar78,iVar79)))
                               ) >> 0x20) << 2;
        uVar5 = CONCAT17((byte)((uint)iVar48 >> 0x18) ^ bVar31 ^ (byte)((uint)iVar68 >> 0x18),
                         CONCAT16((byte)((uint)iVar48 >> 0x10) ^ bVar30 ^
                                  (byte)((uint)iVar68 >> 0x10),
                                  CONCAT15((byte)((uint)iVar48 >> 8) ^ bVar29 ^
                                           (byte)((uint)iVar68 >> 8),
                                           CONCAT14((byte)iVar48 ^ bVar27 ^ (byte)iVar68,
                                                    CONCAT13((byte)((uint)iVar43 >> 0x18) ^ bVar26 ^
                                                             (byte)((uint)iVar63 >> 0x18),
                                                             CONCAT12((byte)((uint)iVar43 >> 0x10) ^
                                                                      bVar25 ^ (byte)((uint)iVar63
                                                                                     >> 0x10),
                                                                      CONCAT11((byte)((uint)iVar43
                                                                                     >> 8) ^ bVar24
                                                                               ^ (byte)((uint)iVar63
                                                                                       >> 8),
                                                                               (byte)iVar43 ^ bVar22
                                                                               ^ (byte)iVar63)))))))
        ;
        uVar74 = CONCAT17((byte)((uint)iVar58 >> 0x18) ^ bVar41 ^ (byte)((uint)iVar79 >> 0x18),
                          CONCAT16((byte)((uint)iVar58 >> 0x10) ^ bVar40 ^
                                   (byte)((uint)iVar79 >> 0x10),
                                   CONCAT15((byte)((uint)iVar58 >> 8) ^ bVar39 ^
                                            (byte)((uint)iVar79 >> 8),
                                            CONCAT14((byte)iVar58 ^ bVar37 ^ (byte)iVar79,
                                                     CONCAT13((byte)((uint)iVar53 >> 0x18) ^ bVar36
                                                              ^ (byte)((uint)iVar73 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar53 >> 0x10)
                                                                       ^ bVar35 ^
                                                                       (byte)((uint)iVar73 >> 0x10),
                                                                       CONCAT11((byte)((uint)iVar53
                                                                                      >> 8) ^ bVar34
                                                                                ^ (byte)((uint)
                                                  iVar73 >> 8),(byte)iVar53 ^ bVar32 ^ (byte)iVar73)
                                                  ))))));
        uVar83 = CONCAT17(bVar51 ^ bVar31 ^ (byte)((uint)iVar28 >> 0x18),
                          CONCAT16(bVar50 ^ bVar30 ^ (byte)((uint)iVar28 >> 0x10),
                                   CONCAT15(bVar49 ^ bVar29 ^ (byte)((uint)iVar28 >> 8),
                                            CONCAT14(bVar47 ^ bVar27 ^ (byte)iVar28,
                                                     CONCAT13(bVar46 ^ bVar26 ^
                                                              (byte)((uint)iVar23 >> 0x18),
                                                              CONCAT12(bVar45 ^ bVar25 ^
                                                                       (byte)((uint)iVar23 >> 0x10),
                                                                       CONCAT11(bVar44 ^ bVar24 ^
                                                                                (byte)((uint)iVar23
                                                                                      >> 8),
                                                                                bVar42 ^ bVar22 ^
                                                                                (byte)iVar23)))))));
        uVar85 = CONCAT17(bVar61 ^ bVar41 ^ (byte)((uint)iVar38 >> 0x18),
                          CONCAT16(bVar60 ^ bVar40 ^ (byte)((uint)iVar38 >> 0x10),
                                   CONCAT15(bVar59 ^ bVar39 ^ (byte)((uint)iVar38 >> 8),
                                            CONCAT14(bVar57 ^ bVar37 ^ (byte)iVar38,
                                                     CONCAT13(bVar56 ^ bVar36 ^
                                                              (byte)((uint)iVar33 >> 0x18),
                                                              CONCAT12(bVar55 ^ bVar35 ^
                                                                       (byte)((uint)iVar33 >> 0x10),
                                                                       CONCAT11(bVar54 ^ bVar34 ^
                                                                                (byte)((uint)iVar33
                                                                                      >> 8),
                                                                                bVar52 ^ bVar32 ^
                                                                                (byte)iVar33)))))));
      } while (uVar9 != 0);
      *(undefined8 *)(param_1[1] + 8) = uVar85;
      *(undefined8 *)param_1[1] = uVar83;
      *(undefined8 *)(param_1[2] + 8) = uVar74;
      *(undefined8 *)param_1[2] = uVar5;
      *(long *)(*param_1 + 8) = auVar20._8_8_;
      *(long *)*param_1 = auVar20._0_8_;
      memcpy((void *)(param_2 + uVar10),param_1,param_3 & 0xf);
    }
    uVar5 = 0;
    param_1[3][0] = 0x10;
  }
  if (*(long *)(lVar4 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 004fc98c  hydro_hash_hash =====

void hydro_hash_hash(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,
                    undefined8 *param_5,undefined8 *param_6)

{
  long lVar1;
  ulong uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  byte bVar14;
  byte bVar16;
  byte bVar17;
  int iVar15;
  byte bVar18;
  byte bVar19;
  byte bVar21;
  byte bVar22;
  int iVar20;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  int iVar25;
  byte bVar28;
  byte bVar29;
  byte bVar31;
  byte bVar32;
  int iVar30;
  byte bVar33;
  byte bVar34;
  byte bVar36;
  byte bVar37;
  int iVar35;
  byte bVar38;
  byte bVar39;
  byte bVar41;
  byte bVar42;
  int iVar40;
  byte bVar43;
  byte bVar44;
  byte bVar46;
  byte bVar47;
  int iVar45;
  byte bVar48;
  byte bVar49;
  byte bVar51;
  byte bVar52;
  int iVar50;
  byte bVar53;
  int iVar54;
  int iVar55;
  uint uVar56;
  int iVar57;
  int iVar58;
  uint uVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined8 local_62;
  undefined2 local_5a;
  undefined1 uStack_58;
  undefined5 uStack_57;
  undefined3 uStack_52;
  undefined5 uStack_4f;
  undefined3 local_4a;
  undefined5 uStack_47;
  undefined3 uStack_42;
  undefined5 uStack_3f;
  undefined3 local_3a;
  undefined5 uStack_37;
  undefined8 uStack_32;
  undefined2 local_2a;
  long local_28;
  undefined1 auVar10 [16];
  undefined1 auVar13 [16];
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_64 = 0x863;
  local_68 = (int)DAT_0024e788;
  uStack_52 = 0;
  uStack_4f = 0;
  local_5a = 0;
  uStack_57 = 0;
  uStack_42 = 0;
  uStack_3f = 0;
  local_4a = 0;
  uStack_47 = 0;
  uStack_32 = 0;
  local_3a = 0;
  uStack_37 = 0;
  local_2a = 0;
  local_62 = *param_5;
  if (param_6 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uVar2 = 0x20;
  }
  else {
    uStack_58 = 0x20;
    uVar2 = 0x40;
    uStack_4f = (undefined5)param_6[1];
    local_4a = (undefined3)((ulong)param_6[1] >> 0x28);
    uStack_57 = (undefined5)*param_6;
    uStack_52 = (undefined3)((ulong)*param_6 >> 0x28);
    uStack_3f = (undefined5)param_6[3];
    local_3a = (undefined3)((ulong)param_6[3] >> 0x28);
    uStack_47 = (undefined5)param_6[2];
    uStack_42 = (undefined3)((ulong)param_6[2] >> 0x28);
  }
  uVar6 = 0;
  puVar3 = &local_68;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_70 = 0;
  do {
    uVar5 = 0x10 - (ulong)(byte)uVar6;
    uVar7 = 0;
    uVar4 = uVar2;
    if (uVar5 <= uVar2) {
      uVar4 = uVar5;
    }
    uVar5 = uVar4;
    if (uVar4 < 2) {
      uVar5 = 1;
    }
    do {
      *(byte *)((long)&local_a0 + uVar7 + ((ulong)(byte)local_70 - 0xa0) + 0xa0) =
           *(byte *)((long)&local_a0 + uVar7 + ((ulong)(byte)local_70 - 0xa0) + 0xa0) ^
           *(byte *)((long)puVar3 + uVar7);
      uVar7 = uVar7 + 1;
    } while (uVar5 != uVar7);
    uVar6 = (local_70 & 0xff) + (int)uVar4;
    local_70._0_1_ = (char)uVar6;
    if ((uVar6 & 0xff) == 0x10) {
      auVar11._8_8_ = uStack_98;
      auVar11._0_8_ = local_a0;
      uVar6 = 0x18;
      do {
        uVar56 = (uint)((ulong)local_90 >> 0x20);
        uVar59 = (uint)((ulong)uStack_88 >> 0x20);
        iVar15 = auVar11._0_4_ * 0x1000000 + (auVar11._0_4_ >> 8);
        iVar20 = auVar11._4_4_ * 0x1000000 + (auVar11._4_4_ >> 8);
        iVar25 = auVar11._8_4_ * 0x1000000 + (auVar11._8_4_ >> 8);
        iVar30 = auVar11._12_4_ * 0x1000000 + (auVar11._12_4_ >> 8);
        iVar35 = (uint)local_90 * 0x200 + ((uint)local_90 >> 0x17);
        iVar40 = uVar56 * 0x200 + (uVar56 >> 0x17);
        iVar45 = (uint)uStack_88 * 0x200 + ((uint)uStack_88 >> 0x17);
        iVar50 = uVar59 * 0x200 + (uVar59 >> 0x17);
        bVar14 = (byte)iVar15;
        bVar34 = (byte)iVar35;
        bVar16 = (byte)((uint)iVar15 >> 8);
        bVar36 = (byte)((uint)iVar35 >> 8);
        bVar17 = (byte)((uint)iVar15 >> 0x10);
        bVar37 = (byte)((uint)iVar35 >> 0x10);
        bVar18 = (byte)((uint)iVar15 >> 0x18);
        bVar38 = (byte)((uint)iVar35 >> 0x18);
        iVar15 = CONCAT13(bVar18 & bVar38,
                          CONCAT12(bVar17 & bVar37,CONCAT11(bVar16 & bVar36,bVar14 & bVar34)));
        bVar19 = (byte)iVar20;
        bVar39 = (byte)iVar40;
        bVar21 = (byte)((uint)iVar20 >> 8);
        bVar41 = (byte)((uint)iVar40 >> 8);
        bVar22 = (byte)((uint)iVar20 >> 0x10);
        bVar42 = (byte)((uint)iVar40 >> 0x10);
        bVar23 = (byte)((uint)iVar20 >> 0x18);
        bVar43 = (byte)((uint)iVar40 >> 0x18);
        auVar8._0_8_ = CONCAT17(bVar23 & bVar43,
                                CONCAT16(bVar22 & bVar42,
                                         CONCAT15(bVar21 & bVar41,CONCAT14(bVar19 & bVar39,iVar15)))
                               );
        bVar24 = (byte)iVar25;
        bVar44 = (byte)iVar45;
        auVar8[8] = bVar24 & bVar44;
        bVar26 = (byte)((uint)iVar25 >> 8);
        bVar46 = (byte)((uint)iVar45 >> 8);
        auVar8[9] = bVar26 & bVar46;
        bVar27 = (byte)((uint)iVar25 >> 0x10);
        bVar47 = (byte)((uint)iVar45 >> 0x10);
        auVar8[10] = bVar27 & bVar47;
        bVar28 = (byte)((uint)iVar25 >> 0x18);
        bVar48 = (byte)((uint)iVar45 >> 0x18);
        auVar8[0xb] = bVar28 & bVar48;
        bVar29 = (byte)iVar30;
        bVar49 = (byte)iVar50;
        auVar10[0xc] = bVar29 & bVar49;
        auVar10._0_12_ = auVar8;
        bVar31 = (byte)((uint)iVar30 >> 8);
        bVar51 = (byte)((uint)iVar50 >> 8);
        auVar10[0xd] = bVar31 & bVar51;
        bVar32 = (byte)((uint)iVar30 >> 0x10);
        bVar52 = (byte)((uint)iVar50 >> 0x10);
        auVar10[0xe] = bVar32 & bVar52;
        bVar33 = (byte)((uint)iVar30 >> 0x18);
        bVar53 = (byte)((uint)iVar50 >> 0x18);
        auVar10[0xf] = bVar33 & bVar53;
        bVar60 = (byte)local_80;
        bVar61 = (byte)((ulong)local_80 >> 8);
        bVar62 = (byte)((ulong)local_80 >> 0x10);
        bVar63 = (byte)((ulong)local_80 >> 0x18);
        bVar64 = (byte)((ulong)local_80 >> 0x20);
        bVar65 = (byte)((ulong)local_80 >> 0x28);
        bVar66 = (byte)((ulong)local_80 >> 0x30);
        bVar67 = (byte)((ulong)local_80 >> 0x38);
        bVar68 = (byte)uStack_78;
        bVar69 = (byte)((ulong)uStack_78 >> 8);
        bVar70 = (byte)((ulong)uStack_78 >> 0x10);
        bVar71 = (byte)((ulong)uStack_78 >> 0x18);
        bVar72 = (byte)((ulong)uStack_78 >> 0x20);
        bVar73 = (byte)((ulong)uStack_78 >> 0x28);
        bVar74 = (byte)((ulong)uStack_78 >> 0x30);
        bVar75 = (byte)((ulong)uStack_78 >> 0x38);
        iVar15 = iVar15 << 3;
        iVar20 = (int)((ulong)auVar8._0_8_ >> 0x20) << 3;
        iVar25 = auVar8._8_4_ << 3;
        iVar30 = auVar10._12_4_ << 3;
        auVar11._0_8_ =
             CONCAT17(bVar67 ^ bVar43 ^ (byte)((uint)iVar20 >> 0x18),
                      CONCAT16(bVar66 ^ bVar42 ^ (byte)((uint)iVar20 >> 0x10),
                               CONCAT15(bVar65 ^ bVar41 ^ (byte)((uint)iVar20 >> 8),
                                        CONCAT14(bVar64 ^ bVar39 ^ (byte)iVar20,
                                                 CONCAT13(bVar63 ^ bVar38 ^
                                                          (byte)((uint)iVar15 >> 0x18),
                                                          CONCAT12(bVar62 ^ bVar37 ^
                                                                   (byte)((uint)iVar15 >> 0x10),
                                                                   CONCAT11(bVar61 ^ bVar36 ^
                                                                            (byte)((uint)iVar15 >> 8
                                                                                  ),bVar60 ^ bVar34
                                                                                    ^ (byte)iVar15))
                                                         )))));
        auVar11[8] = bVar68 ^ bVar44 ^ (byte)iVar25;
        auVar11[9] = bVar69 ^ bVar46 ^ (byte)((uint)iVar25 >> 8);
        auVar11[10] = bVar70 ^ bVar47 ^ (byte)((uint)iVar25 >> 0x10);
        auVar11[0xb] = bVar71 ^ bVar48 ^ (byte)((uint)iVar25 >> 0x18);
        auVar11[0xc] = bVar72 ^ bVar49 ^ (byte)iVar30;
        auVar11[0xd] = bVar73 ^ bVar51 ^ (byte)((uint)iVar30 >> 8);
        auVar11[0xe] = bVar74 ^ bVar52 ^ (byte)((uint)iVar30 >> 0x10);
        auVar11[0xf] = bVar75 ^ bVar53 ^ (byte)((uint)iVar30 >> 0x18);
        if ((uVar6 & 3) == 2) {
          auVar11 = NEON_ext(auVar11,auVar11,8,1);
        }
        else if ((uVar6 & 3) == 0) {
          uVar7 = (ulong)auVar11._0_8_ >> 0x20;
          auVar11 = NEON_rev64(auVar11,4);
          auVar11._0_4_ = (uint)uVar7 ^ (uVar6 | 0x9e377900);
        }
        iVar35 = (int)local_80 * 2;
        iVar40 = (int)((ulong)local_80 >> 0x20) * 2;
        iVar45 = (int)uStack_78 * 2;
        iVar50 = (int)((ulong)uStack_78 >> 0x20) * 2;
        uVar6 = uVar6 - 1;
        iVar55 = CONCAT13(bVar38 & bVar63,
                          CONCAT12(bVar37 & bVar62,CONCAT11(bVar36 & bVar61,bVar34 & bVar60)));
        iVar58 = CONCAT13(bVar48 & bVar71,
                          CONCAT12(bVar47 & bVar70,CONCAT11(bVar46 & bVar69,bVar44 & bVar68)));
        iVar15 = CONCAT13(bVar18 | bVar63,
                          CONCAT12(bVar17 | bVar62,CONCAT11(bVar16 | bVar61,bVar14 | bVar60))) * 2;
        iVar20 = CONCAT13(bVar23 | bVar67,
                          CONCAT12(bVar22 | bVar66,CONCAT11(bVar21 | bVar65,bVar19 | bVar64))) * 2;
        iVar25 = CONCAT13(bVar28 | bVar71,
                          CONCAT12(bVar27 | bVar70,CONCAT11(bVar26 | bVar69,bVar24 | bVar68))) * 2;
        iVar30 = CONCAT13(bVar33 | bVar75,
                          CONCAT12(bVar32 | bVar74,CONCAT11(bVar31 | bVar73,bVar29 | bVar72))) * 2;
        iVar54 = iVar55 << 2;
        iVar55 = (int)(CONCAT17(bVar43 & bVar67,
                                CONCAT16(bVar42 & bVar66,
                                         CONCAT15(bVar41 & bVar65,CONCAT14(bVar39 & bVar64,iVar55)))
                               ) >> 0x20) << 2;
        iVar57 = iVar58 << 2;
        iVar58 = (int)(CONCAT17(bVar53 & bVar75,
                                CONCAT16(bVar52 & bVar74,
                                         CONCAT15(bVar51 & bVar73,CONCAT14(bVar49 & bVar72,iVar58)))
                               ) >> 0x20) << 2;
        local_80 = CONCAT17((byte)((uint)iVar40 >> 0x18) ^ bVar23 ^ (byte)((uint)iVar55 >> 0x18),
                            CONCAT16((byte)((uint)iVar40 >> 0x10) ^ bVar22 ^
                                     (byte)((uint)iVar55 >> 0x10),
                                     CONCAT15((byte)((uint)iVar40 >> 8) ^ bVar21 ^
                                              (byte)((uint)iVar55 >> 8),
                                              CONCAT14((byte)iVar40 ^ bVar19 ^ (byte)iVar55,
                                                       CONCAT13((byte)((uint)iVar35 >> 0x18) ^
                                                                bVar18 ^ (byte)((uint)iVar54 >> 0x18
                                                                               ),
                                                                CONCAT12((byte)((uint)iVar35 >> 0x10
                                                                               ) ^ bVar17 ^
                                                                         (byte)((uint)iVar54 >> 0x10
                                                                               ),CONCAT11((byte)((
                                                  uint)iVar35 >> 8) ^ bVar16 ^
                                                  (byte)((uint)iVar54 >> 8),
                                                  (byte)iVar35 ^ bVar14 ^ (byte)iVar54)))))));
        uStack_78 = CONCAT17((byte)((uint)iVar50 >> 0x18) ^ bVar33 ^ (byte)((uint)iVar58 >> 0x18),
                             CONCAT16((byte)((uint)iVar50 >> 0x10) ^ bVar32 ^
                                      (byte)((uint)iVar58 >> 0x10),
                                      CONCAT15((byte)((uint)iVar50 >> 8) ^ bVar31 ^
                                               (byte)((uint)iVar58 >> 8),
                                               CONCAT14((byte)iVar50 ^ bVar29 ^ (byte)iVar58,
                                                        CONCAT13((byte)((uint)iVar45 >> 0x18) ^
                                                                 bVar28 ^ (byte)((uint)iVar57 >>
                                                                                0x18),
                                                                 CONCAT12((byte)((uint)iVar45 >>
                                                                                0x10) ^ bVar27 ^
                                                                          (byte)((uint)iVar57 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((uint)
                                                  iVar45 >> 8) ^ bVar26 ^ (byte)((uint)iVar57 >> 8),
                                                  (byte)iVar45 ^ bVar24 ^ (byte)iVar57)))))));
        local_90 = CONCAT17(bVar43 ^ bVar23 ^ (byte)((uint)iVar20 >> 0x18),
                            CONCAT16(bVar42 ^ bVar22 ^ (byte)((uint)iVar20 >> 0x10),
                                     CONCAT15(bVar41 ^ bVar21 ^ (byte)((uint)iVar20 >> 8),
                                              CONCAT14(bVar39 ^ bVar19 ^ (byte)iVar20,
                                                       CONCAT13(bVar38 ^ bVar18 ^
                                                                (byte)((uint)iVar15 >> 0x18),
                                                                CONCAT12(bVar37 ^ bVar17 ^
                                                                         (byte)((uint)iVar15 >> 0x10
                                                                               ),CONCAT11(bVar36 ^ 
                                                  bVar16 ^ (byte)((uint)iVar15 >> 8),
                                                  bVar34 ^ bVar14 ^ (byte)iVar15)))))));
        uStack_88 = CONCAT17(bVar53 ^ bVar33 ^ (byte)((uint)iVar30 >> 0x18),
                             CONCAT16(bVar52 ^ bVar32 ^ (byte)((uint)iVar30 >> 0x10),
                                      CONCAT15(bVar51 ^ bVar31 ^ (byte)((uint)iVar30 >> 8),
                                               CONCAT14(bVar49 ^ bVar29 ^ (byte)iVar30,
                                                        CONCAT13(bVar48 ^ bVar28 ^
                                                                 (byte)((uint)iVar25 >> 0x18),
                                                                 CONCAT12(bVar47 ^ bVar27 ^
                                                                          (byte)((uint)iVar25 >>
                                                                                0x10),
                                                                          CONCAT11(bVar46 ^ bVar26 ^
                                                                                   (byte)((uint)
                                                  iVar25 >> 8),bVar44 ^ bVar24 ^ (byte)iVar25)))))))
        ;
      } while (uVar6 != 0);
      uStack_98 = auVar11._8_8_;
      local_a0 = auVar11._0_8_;
      local_70._0_1_ = 0;
      uVar6 = 0;
    }
    uVar2 = uVar2 - uVar4;
    puVar3 = (undefined4 *)((long)puVar3 + uVar4);
  } while (uVar2 != 0);
  if (param_4 != 0) {
    do {
      uVar4 = 0x10 - (ulong)(byte)uVar6;
      uVar2 = 0;
      uVar7 = param_4;
      if (uVar4 <= param_4) {
        uVar7 = uVar4;
      }
      uVar4 = uVar7;
      if (uVar7 < 2) {
        uVar4 = 1;
      }
      do {
        *(byte *)((long)&local_a0 + uVar2 + ((ulong)(byte)local_70 - 0xa0) + 0xa0) =
             *(byte *)((long)&local_a0 + uVar2 + ((ulong)(byte)local_70 - 0xa0) + 0xa0) ^
             *(byte *)(param_3 + uVar2);
        uVar2 = uVar2 + 1;
      } while (uVar4 != uVar2);
      uVar6 = (local_70 & 0xff) + (int)uVar7;
      local_70._0_1_ = (char)uVar6;
      if ((uVar6 & 0xff) == 0x10) {
        auVar12._8_8_ = uStack_98;
        auVar12._0_8_ = local_a0;
        uVar6 = 0x18;
        do {
          uVar56 = (uint)((ulong)local_90 >> 0x20);
          uVar59 = (uint)((ulong)uStack_88 >> 0x20);
          iVar15 = auVar12._0_4_ * 0x1000000 + (auVar12._0_4_ >> 8);
          iVar20 = auVar12._4_4_ * 0x1000000 + (auVar12._4_4_ >> 8);
          iVar25 = auVar12._8_4_ * 0x1000000 + (auVar12._8_4_ >> 8);
          iVar30 = auVar12._12_4_ * 0x1000000 + (auVar12._12_4_ >> 8);
          iVar35 = (uint)local_90 * 0x200 + ((uint)local_90 >> 0x17);
          iVar40 = uVar56 * 0x200 + (uVar56 >> 0x17);
          iVar45 = (uint)uStack_88 * 0x200 + ((uint)uStack_88 >> 0x17);
          iVar50 = uVar59 * 0x200 + (uVar59 >> 0x17);
          bVar14 = (byte)iVar15;
          bVar34 = (byte)iVar35;
          bVar16 = (byte)((uint)iVar15 >> 8);
          bVar36 = (byte)((uint)iVar35 >> 8);
          bVar17 = (byte)((uint)iVar15 >> 0x10);
          bVar37 = (byte)((uint)iVar35 >> 0x10);
          bVar18 = (byte)((uint)iVar15 >> 0x18);
          bVar38 = (byte)((uint)iVar35 >> 0x18);
          iVar15 = CONCAT13(bVar18 & bVar38,
                            CONCAT12(bVar17 & bVar37,CONCAT11(bVar16 & bVar36,bVar14 & bVar34)));
          bVar19 = (byte)iVar20;
          bVar39 = (byte)iVar40;
          bVar21 = (byte)((uint)iVar20 >> 8);
          bVar41 = (byte)((uint)iVar40 >> 8);
          bVar22 = (byte)((uint)iVar20 >> 0x10);
          bVar42 = (byte)((uint)iVar40 >> 0x10);
          bVar23 = (byte)((uint)iVar20 >> 0x18);
          bVar43 = (byte)((uint)iVar40 >> 0x18);
          auVar9._0_8_ = CONCAT17(bVar23 & bVar43,
                                  CONCAT16(bVar22 & bVar42,
                                           CONCAT15(bVar21 & bVar41,CONCAT14(bVar19 & bVar39,iVar15)
                                                   )));
          bVar24 = (byte)iVar25;
          bVar44 = (byte)iVar45;
          auVar9[8] = bVar24 & bVar44;
          bVar26 = (byte)((uint)iVar25 >> 8);
          bVar46 = (byte)((uint)iVar45 >> 8);
          auVar9[9] = bVar26 & bVar46;
          bVar27 = (byte)((uint)iVar25 >> 0x10);
          bVar47 = (byte)((uint)iVar45 >> 0x10);
          auVar9[10] = bVar27 & bVar47;
          bVar28 = (byte)((uint)iVar25 >> 0x18);
          bVar48 = (byte)((uint)iVar45 >> 0x18);
          auVar9[0xb] = bVar28 & bVar48;
          bVar29 = (byte)iVar30;
          bVar49 = (byte)iVar50;
          auVar13[0xc] = bVar29 & bVar49;
          auVar13._0_12_ = auVar9;
          bVar31 = (byte)((uint)iVar30 >> 8);
          bVar51 = (byte)((uint)iVar50 >> 8);
          auVar13[0xd] = bVar31 & bVar51;
          bVar32 = (byte)((uint)iVar30 >> 0x10);
          bVar52 = (byte)((uint)iVar50 >> 0x10);
          auVar13[0xe] = bVar32 & bVar52;
          bVar33 = (byte)((uint)iVar30 >> 0x18);
          bVar53 = (byte)((uint)iVar50 >> 0x18);
          auVar13[0xf] = bVar33 & bVar53;
          bVar60 = (byte)local_80;
          bVar61 = (byte)((ulong)local_80 >> 8);
          bVar62 = (byte)((ulong)local_80 >> 0x10);
          bVar63 = (byte)((ulong)local_80 >> 0x18);
          bVar64 = (byte)((ulong)local_80 >> 0x20);
          bVar65 = (byte)((ulong)local_80 >> 0x28);
          bVar66 = (byte)((ulong)local_80 >> 0x30);
          bVar67 = (byte)((ulong)local_80 >> 0x38);
          bVar68 = (byte)uStack_78;
          bVar69 = (byte)((ulong)uStack_78 >> 8);
          bVar70 = (byte)((ulong)uStack_78 >> 0x10);
          bVar71 = (byte)((ulong)uStack_78 >> 0x18);
          bVar72 = (byte)((ulong)uStack_78 >> 0x20);
          bVar73 = (byte)((ulong)uStack_78 >> 0x28);
          bVar74 = (byte)((ulong)uStack_78 >> 0x30);
          bVar75 = (byte)((ulong)uStack_78 >> 0x38);
          iVar15 = iVar15 << 3;
          iVar20 = (int)((ulong)auVar9._0_8_ >> 0x20) << 3;
          iVar25 = auVar9._8_4_ << 3;
          iVar30 = auVar13._12_4_ << 3;
          auVar12._0_8_ =
               CONCAT17(bVar67 ^ bVar43 ^ (byte)((uint)iVar20 >> 0x18),
                        CONCAT16(bVar66 ^ bVar42 ^ (byte)((uint)iVar20 >> 0x10),
                                 CONCAT15(bVar65 ^ bVar41 ^ (byte)((uint)iVar20 >> 8),
                                          CONCAT14(bVar64 ^ bVar39 ^ (byte)iVar20,
                                                   CONCAT13(bVar63 ^ bVar38 ^
                                                            (byte)((uint)iVar15 >> 0x18),
                                                            CONCAT12(bVar62 ^ bVar37 ^
                                                                     (byte)((uint)iVar15 >> 0x10),
                                                                     CONCAT11(bVar61 ^ bVar36 ^
                                                                              (byte)((uint)iVar15 >>
                                                                                    8),bVar60 ^ 
                                                  bVar34 ^ (byte)iVar15)))))));
          auVar12[8] = bVar68 ^ bVar44 ^ (byte)iVar25;
          auVar12[9] = bVar69 ^ bVar46 ^ (byte)((uint)iVar25 >> 8);
          auVar12[10] = bVar70 ^ bVar47 ^ (byte)((uint)iVar25 >> 0x10);
          auVar12[0xb] = bVar71 ^ bVar48 ^ (byte)((uint)iVar25 >> 0x18);
          auVar12[0xc] = bVar72 ^ bVar49 ^ (byte)iVar30;
          auVar12[0xd] = bVar73 ^ bVar51 ^ (byte)((uint)iVar30 >> 8);
          auVar12[0xe] = bVar74 ^ bVar52 ^ (byte)((uint)iVar30 >> 0x10);
          auVar12[0xf] = bVar75 ^ bVar53 ^ (byte)((uint)iVar30 >> 0x18);
          if ((uVar6 & 3) == 2) {
            auVar12 = NEON_ext(auVar12,auVar12,8,1);
          }
          else if ((uVar6 & 3) == 0) {
            uVar2 = (ulong)auVar12._0_8_ >> 0x20;
            auVar11 = NEON_rev64(auVar12,4);
            auVar12._4_12_ = auVar11._4_12_;
            auVar12._0_4_ = (uint)uVar2 ^ (uVar6 | 0x9e377900);
          }
          iVar35 = (int)local_80 * 2;
          iVar40 = (int)((ulong)local_80 >> 0x20) * 2;
          iVar45 = (int)uStack_78 * 2;
          iVar50 = (int)((ulong)uStack_78 >> 0x20) * 2;
          uVar6 = uVar6 - 1;
          iVar55 = CONCAT13(bVar38 & bVar63,
                            CONCAT12(bVar37 & bVar62,CONCAT11(bVar36 & bVar61,bVar34 & bVar60)));
          iVar58 = CONCAT13(bVar48 & bVar71,
                            CONCAT12(bVar47 & bVar70,CONCAT11(bVar46 & bVar69,bVar44 & bVar68)));
          iVar15 = CONCAT13(bVar18 | bVar63,
                            CONCAT12(bVar17 | bVar62,CONCAT11(bVar16 | bVar61,bVar14 | bVar60))) * 2
          ;
          iVar20 = CONCAT13(bVar23 | bVar67,
                            CONCAT12(bVar22 | bVar66,CONCAT11(bVar21 | bVar65,bVar19 | bVar64))) * 2
          ;
          iVar25 = CONCAT13(bVar28 | bVar71,
                            CONCAT12(bVar27 | bVar70,CONCAT11(bVar26 | bVar69,bVar24 | bVar68))) * 2
          ;
          iVar30 = CONCAT13(bVar33 | bVar75,
                            CONCAT12(bVar32 | bVar74,CONCAT11(bVar31 | bVar73,bVar29 | bVar72))) * 2
          ;
          iVar54 = iVar55 << 2;
          iVar55 = (int)(CONCAT17(bVar43 & bVar67,
                                  CONCAT16(bVar42 & bVar66,
                                           CONCAT15(bVar41 & bVar65,CONCAT14(bVar39 & bVar64,iVar55)
                                                   ))) >> 0x20) << 2;
          iVar57 = iVar58 << 2;
          iVar58 = (int)(CONCAT17(bVar53 & bVar75,
                                  CONCAT16(bVar52 & bVar74,
                                           CONCAT15(bVar51 & bVar73,CONCAT14(bVar49 & bVar72,iVar58)
                                                   ))) >> 0x20) << 2;
          local_80 = CONCAT17((byte)((uint)iVar40 >> 0x18) ^ bVar23 ^ (byte)((uint)iVar55 >> 0x18),
                              CONCAT16((byte)((uint)iVar40 >> 0x10) ^ bVar22 ^
                                       (byte)((uint)iVar55 >> 0x10),
                                       CONCAT15((byte)((uint)iVar40 >> 8) ^ bVar21 ^
                                                (byte)((uint)iVar55 >> 8),
                                                CONCAT14((byte)iVar40 ^ bVar19 ^ (byte)iVar55,
                                                         CONCAT13((byte)((uint)iVar35 >> 0x18) ^
                                                                  bVar18 ^ (byte)((uint)iVar54 >>
                                                                                 0x18),
                                                                  CONCAT12((byte)((uint)iVar35 >>
                                                                                 0x10) ^ bVar17 ^
                                                                           (byte)((uint)iVar54 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)((uint)
                                                  iVar35 >> 8) ^ bVar16 ^ (byte)((uint)iVar54 >> 8),
                                                  (byte)iVar35 ^ bVar14 ^ (byte)iVar54)))))));
          uStack_78 = CONCAT17((byte)((uint)iVar50 >> 0x18) ^ bVar33 ^ (byte)((uint)iVar58 >> 0x18),
                               CONCAT16((byte)((uint)iVar50 >> 0x10) ^ bVar32 ^
                                        (byte)((uint)iVar58 >> 0x10),
                                        CONCAT15((byte)((uint)iVar50 >> 8) ^ bVar31 ^
                                                 (byte)((uint)iVar58 >> 8),
                                                 CONCAT14((byte)iVar50 ^ bVar29 ^ (byte)iVar58,
                                                          CONCAT13((byte)((uint)iVar45 >> 0x18) ^
                                                                   bVar28 ^ (byte)((uint)iVar57 >>
                                                                                  0x18),
                                                                   CONCAT12((byte)((uint)iVar45 >>
                                                                                  0x10) ^ bVar27 ^
                                                                            (byte)((uint)iVar57 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((uint)
                                                  iVar45 >> 8) ^ bVar26 ^ (byte)((uint)iVar57 >> 8),
                                                  (byte)iVar45 ^ bVar24 ^ (byte)iVar57)))))));
          local_90 = CONCAT17(bVar43 ^ bVar23 ^ (byte)((uint)iVar20 >> 0x18),
                              CONCAT16(bVar42 ^ bVar22 ^ (byte)((uint)iVar20 >> 0x10),
                                       CONCAT15(bVar41 ^ bVar21 ^ (byte)((uint)iVar20 >> 8),
                                                CONCAT14(bVar39 ^ bVar19 ^ (byte)iVar20,
                                                         CONCAT13(bVar38 ^ bVar18 ^
                                                                  (byte)((uint)iVar15 >> 0x18),
                                                                  CONCAT12(bVar37 ^ bVar17 ^
                                                                           (byte)((uint)iVar15 >>
                                                                                 0x10),
                                                                           CONCAT11(bVar36 ^ bVar16
                                                                                    ^ (byte)((uint)
                                                  iVar15 >> 8),bVar34 ^ bVar14 ^ (byte)iVar15)))))))
          ;
          uStack_88 = CONCAT17(bVar53 ^ bVar33 ^ (byte)((uint)iVar30 >> 0x18),
                               CONCAT16(bVar52 ^ bVar32 ^ (byte)((uint)iVar30 >> 0x10),
                                        CONCAT15(bVar51 ^ bVar31 ^ (byte)((uint)iVar30 >> 8),
                                                 CONCAT14(bVar49 ^ bVar29 ^ (byte)iVar30,
                                                          CONCAT13(bVar48 ^ bVar28 ^
                                                                   (byte)((uint)iVar25 >> 0x18),
                                                                   CONCAT12(bVar47 ^ bVar27 ^
                                                                            (byte)((uint)iVar25 >>
                                                                                  0x10),
                                                                            CONCAT11(bVar46 ^ bVar26
                                                                                     ^ (byte)((uint)
                                                  iVar25 >> 8),bVar44 ^ bVar24 ^ (byte)iVar25)))))))
          ;
        } while (uVar6 != 0);
        uVar6 = 0;
        uStack_98 = auVar12._8_8_;
        local_a0 = auVar12._0_8_;
        local_70._0_1_ = 0;
      }
      param_4 = param_4 - uVar7;
      param_3 = param_3 + uVar7;
    } while (param_4 != 0);
  }
  iVar15 = hydro_hash_final(&local_a0,param_1,param_2);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(-(uint)(iVar15 != 0));
  }
  return;
}


// ===== 004fcc6c  hydro_sign_init =====

undefined8 hydro_sign_init(undefined1 (*param_1) [16],undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 auVar8 [12];
  undefined1 auVar10 [16];
  byte bVar11;
  byte bVar13;
  byte bVar14;
  int iVar12;
  byte bVar15;
  byte bVar16;
  byte bVar18;
  byte bVar19;
  int iVar17;
  byte bVar20;
  byte bVar21;
  byte bVar23;
  byte bVar24;
  int iVar22;
  byte bVar25;
  byte bVar26;
  byte bVar28;
  byte bVar29;
  int iVar27;
  byte bVar30;
  byte bVar31;
  byte bVar33;
  byte bVar34;
  int iVar32;
  byte bVar35;
  byte bVar36;
  byte bVar38;
  byte bVar39;
  int iVar37;
  byte bVar40;
  byte bVar41;
  byte bVar43;
  byte bVar44;
  int iVar42;
  byte bVar45;
  byte bVar46;
  byte bVar48;
  byte bVar49;
  int iVar47;
  byte bVar50;
  byte bVar51;
  int iVar52;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar59;
  byte bVar60;
  undefined8 uVar53;
  int iVar58;
  byte bVar61;
  byte bVar62;
  int iVar63;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar70;
  byte bVar71;
  undefined8 uVar64;
  int iVar69;
  byte bVar72;
  undefined8 uVar73;
  uint uVar74;
  undefined8 uVar75;
  uint uVar76;
  undefined4 local_58;
  undefined2 local_54;
  undefined8 local_52;
  undefined8 local_4a;
  undefined8 uStack_42;
  undefined8 local_3a;
  undefined8 uStack_32;
  undefined8 local_2a;
  undefined8 uStack_22;
  undefined2 local_1a;
  long local_18;
  undefined1 auVar9 [16];
  
  lVar2 = tpidr_el0;
  local_18 = *(long *)(lVar2 + 0x28);
  uVar6 = 0;
  uVar4 = 0x20;
  local_54 = 0x863;
  local_58 = (int)DAT_0024e788;
  local_52 = *param_2;
  puVar3 = &local_58;
  uStack_42 = 0;
  local_4a = 0;
  uStack_32 = 0;
  local_3a = 0;
  uStack_22 = 0;
  local_2a = 0;
  local_1a = 0;
  *(undefined4 *)param_1[3] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[2] + 8) = 0;
  *(undefined8 *)param_1[2] = 0;
  *(undefined8 *)(*param_1 + 8) = 0;
  *(undefined8 *)*param_1 = 0;
  do {
    uVar5 = 0x10 - (ulong)(byte)uVar6;
    uVar7 = 0;
    uVar1 = uVar4;
    if (uVar5 <= uVar4) {
      uVar1 = uVar5;
    }
    uVar5 = uVar1;
    if (uVar1 < 2) {
      uVar5 = 1;
    }
    do {
      (*param_1)[uVar7 + (byte)param_1[3][0]] =
           (*param_1)[uVar7 + (byte)param_1[3][0]] ^ *(byte *)((long)puVar3 + uVar7);
      uVar7 = uVar7 + 1;
    } while (uVar5 != uVar7);
    uVar6 = (uint)(byte)param_1[3][0] + (int)uVar1;
    param_1[3][0] = (char)uVar6;
    if ((uVar6 & 0xff) == 0x10) {
      auVar10 = *param_1;
      uVar75 = *(undefined8 *)(param_1[1] + 8);
      uVar73 = *(undefined8 *)param_1[1];
      uVar6 = 0x18;
      uVar64 = *(undefined8 *)(param_1[2] + 8);
      uVar53 = *(undefined8 *)param_1[2];
      do {
        uVar74 = (uint)((ulong)uVar73 >> 0x20);
        uVar76 = (uint)((ulong)uVar75 >> 0x20);
        iVar12 = auVar10._0_4_ * 0x1000000 + (auVar10._0_4_ >> 8);
        iVar17 = auVar10._4_4_ * 0x1000000 + (auVar10._4_4_ >> 8);
        iVar22 = auVar10._8_4_ * 0x1000000 + (auVar10._8_4_ >> 8);
        iVar27 = auVar10._12_4_ * 0x1000000 + (auVar10._12_4_ >> 8);
        iVar32 = (uint)uVar73 * 0x200 + ((uint)uVar73 >> 0x17);
        iVar37 = uVar74 * 0x200 + (uVar74 >> 0x17);
        iVar42 = (uint)uVar75 * 0x200 + ((uint)uVar75 >> 0x17);
        iVar47 = uVar76 * 0x200 + (uVar76 >> 0x17);
        bVar11 = (byte)iVar12;
        bVar31 = (byte)iVar32;
        bVar13 = (byte)((uint)iVar12 >> 8);
        bVar33 = (byte)((uint)iVar32 >> 8);
        bVar14 = (byte)((uint)iVar12 >> 0x10);
        bVar34 = (byte)((uint)iVar32 >> 0x10);
        bVar15 = (byte)((uint)iVar12 >> 0x18);
        bVar35 = (byte)((uint)iVar32 >> 0x18);
        iVar12 = CONCAT13(bVar15 & bVar35,
                          CONCAT12(bVar14 & bVar34,CONCAT11(bVar13 & bVar33,bVar11 & bVar31)));
        bVar16 = (byte)iVar17;
        bVar36 = (byte)iVar37;
        bVar18 = (byte)((uint)iVar17 >> 8);
        bVar38 = (byte)((uint)iVar37 >> 8);
        bVar19 = (byte)((uint)iVar17 >> 0x10);
        bVar39 = (byte)((uint)iVar37 >> 0x10);
        bVar20 = (byte)((uint)iVar17 >> 0x18);
        bVar40 = (byte)((uint)iVar37 >> 0x18);
        auVar8._0_8_ = CONCAT17(bVar20 & bVar40,
                                CONCAT16(bVar19 & bVar39,
                                         CONCAT15(bVar18 & bVar38,CONCAT14(bVar16 & bVar36,iVar12)))
                               );
        bVar21 = (byte)iVar22;
        bVar41 = (byte)iVar42;
        auVar8[8] = bVar21 & bVar41;
        bVar23 = (byte)((uint)iVar22 >> 8);
        bVar43 = (byte)((uint)iVar42 >> 8);
        auVar8[9] = bVar23 & bVar43;
        bVar24 = (byte)((uint)iVar22 >> 0x10);
        bVar44 = (byte)((uint)iVar42 >> 0x10);
        auVar8[10] = bVar24 & bVar44;
        bVar25 = (byte)((uint)iVar22 >> 0x18);
        bVar45 = (byte)((uint)iVar42 >> 0x18);
        auVar8[0xb] = bVar25 & bVar45;
        bVar26 = (byte)iVar27;
        bVar46 = (byte)iVar47;
        auVar9[0xc] = bVar26 & bVar46;
        auVar9._0_12_ = auVar8;
        bVar28 = (byte)((uint)iVar27 >> 8);
        bVar48 = (byte)((uint)iVar47 >> 8);
        auVar9[0xd] = bVar28 & bVar48;
        bVar29 = (byte)((uint)iVar27 >> 0x10);
        bVar49 = (byte)((uint)iVar47 >> 0x10);
        auVar9[0xe] = bVar29 & bVar49;
        bVar30 = (byte)((uint)iVar27 >> 0x18);
        bVar50 = (byte)((uint)iVar47 >> 0x18);
        auVar9[0xf] = bVar30 & bVar50;
        bVar51 = (byte)uVar53;
        bVar54 = (byte)((ulong)uVar53 >> 8);
        bVar55 = (byte)((ulong)uVar53 >> 0x10);
        bVar56 = (byte)((ulong)uVar53 >> 0x18);
        bVar57 = (byte)((ulong)uVar53 >> 0x20);
        bVar59 = (byte)((ulong)uVar53 >> 0x28);
        bVar60 = (byte)((ulong)uVar53 >> 0x30);
        bVar61 = (byte)((ulong)uVar53 >> 0x38);
        bVar62 = (byte)uVar64;
        bVar65 = (byte)((ulong)uVar64 >> 8);
        bVar66 = (byte)((ulong)uVar64 >> 0x10);
        bVar67 = (byte)((ulong)uVar64 >> 0x18);
        bVar68 = (byte)((ulong)uVar64 >> 0x20);
        bVar70 = (byte)((ulong)uVar64 >> 0x28);
        bVar71 = (byte)((ulong)uVar64 >> 0x30);
        bVar72 = (byte)((ulong)uVar64 >> 0x38);
        iVar12 = iVar12 << 3;
        iVar17 = (int)((ulong)auVar8._0_8_ >> 0x20) << 3;
        iVar22 = auVar8._8_4_ << 3;
        iVar27 = auVar9._12_4_ << 3;
        auVar10._0_8_ =
             CONCAT17(bVar61 ^ bVar40 ^ (byte)((uint)iVar17 >> 0x18),
                      CONCAT16(bVar60 ^ bVar39 ^ (byte)((uint)iVar17 >> 0x10),
                               CONCAT15(bVar59 ^ bVar38 ^ (byte)((uint)iVar17 >> 8),
                                        CONCAT14(bVar57 ^ bVar36 ^ (byte)iVar17,
                                                 CONCAT13(bVar56 ^ bVar35 ^
                                                          (byte)((uint)iVar12 >> 0x18),
                                                          CONCAT12(bVar55 ^ bVar34 ^
                                                                   (byte)((uint)iVar12 >> 0x10),
                                                                   CONCAT11(bVar54 ^ bVar33 ^
                                                                            (byte)((uint)iVar12 >> 8
                                                                                  ),bVar51 ^ bVar31
                                                                                    ^ (byte)iVar12))
                                                         )))));
        auVar10[8] = bVar62 ^ bVar41 ^ (byte)iVar22;
        auVar10[9] = bVar65 ^ bVar43 ^ (byte)((uint)iVar22 >> 8);
        auVar10[10] = bVar66 ^ bVar44 ^ (byte)((uint)iVar22 >> 0x10);
        auVar10[0xb] = bVar67 ^ bVar45 ^ (byte)((uint)iVar22 >> 0x18);
        auVar10[0xc] = bVar68 ^ bVar46 ^ (byte)iVar27;
        auVar10[0xd] = bVar70 ^ bVar48 ^ (byte)((uint)iVar27 >> 8);
        auVar10[0xe] = bVar71 ^ bVar49 ^ (byte)((uint)iVar27 >> 0x10);
        auVar10[0xf] = bVar72 ^ bVar50 ^ (byte)((uint)iVar27 >> 0x18);
        if ((uVar6 & 3) == 2) {
          auVar10 = NEON_ext(auVar10,auVar10,8,1);
        }
        else if ((uVar6 & 3) == 0) {
          uVar7 = (ulong)auVar10._0_8_ >> 0x20;
          auVar10 = NEON_rev64(auVar10,4);
          auVar10._0_4_ = (uint)uVar7 ^ (uVar6 | 0x9e377900);
        }
        iVar32 = (int)uVar53 * 2;
        iVar37 = (int)((ulong)uVar53 >> 0x20) * 2;
        iVar42 = (int)uVar64 * 2;
        iVar47 = (int)((ulong)uVar64 >> 0x20) * 2;
        uVar6 = uVar6 - 1;
        iVar58 = CONCAT13(bVar35 & bVar56,
                          CONCAT12(bVar34 & bVar55,CONCAT11(bVar33 & bVar54,bVar31 & bVar51)));
        iVar69 = CONCAT13(bVar45 & bVar67,
                          CONCAT12(bVar44 & bVar66,CONCAT11(bVar43 & bVar65,bVar41 & bVar62)));
        iVar12 = CONCAT13(bVar15 | bVar56,
                          CONCAT12(bVar14 | bVar55,CONCAT11(bVar13 | bVar54,bVar11 | bVar51))) * 2;
        iVar17 = CONCAT13(bVar20 | bVar61,
                          CONCAT12(bVar19 | bVar60,CONCAT11(bVar18 | bVar59,bVar16 | bVar57))) * 2;
        iVar22 = CONCAT13(bVar25 | bVar67,
                          CONCAT12(bVar24 | bVar66,CONCAT11(bVar23 | bVar65,bVar21 | bVar62))) * 2;
        iVar27 = CONCAT13(bVar30 | bVar72,
                          CONCAT12(bVar29 | bVar71,CONCAT11(bVar28 | bVar70,bVar26 | bVar68))) * 2;
        iVar52 = iVar58 << 2;
        iVar58 = (int)(CONCAT17(bVar40 & bVar61,
                                CONCAT16(bVar39 & bVar60,
                                         CONCAT15(bVar38 & bVar59,CONCAT14(bVar36 & bVar57,iVar58)))
                               ) >> 0x20) << 2;
        iVar63 = iVar69 << 2;
        iVar69 = (int)(CONCAT17(bVar50 & bVar72,
                                CONCAT16(bVar49 & bVar71,
                                         CONCAT15(bVar48 & bVar70,CONCAT14(bVar46 & bVar68,iVar69)))
                               ) >> 0x20) << 2;
        uVar53 = CONCAT17((byte)((uint)iVar37 >> 0x18) ^ bVar20 ^ (byte)((uint)iVar58 >> 0x18),
                          CONCAT16((byte)((uint)iVar37 >> 0x10) ^ bVar19 ^
                                   (byte)((uint)iVar58 >> 0x10),
                                   CONCAT15((byte)((uint)iVar37 >> 8) ^ bVar18 ^
                                            (byte)((uint)iVar58 >> 8),
                                            CONCAT14((byte)iVar37 ^ bVar16 ^ (byte)iVar58,
                                                     CONCAT13((byte)((uint)iVar32 >> 0x18) ^ bVar15
                                                              ^ (byte)((uint)iVar52 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar32 >> 0x10)
                                                                       ^ bVar14 ^
                                                                       (byte)((uint)iVar52 >> 0x10),
                                                                       CONCAT11((byte)((uint)iVar32
                                                                                      >> 8) ^ bVar13
                                                                                ^ (byte)((uint)
                                                  iVar52 >> 8),(byte)iVar32 ^ bVar11 ^ (byte)iVar52)
                                                  ))))));
        uVar64 = CONCAT17((byte)((uint)iVar47 >> 0x18) ^ bVar30 ^ (byte)((uint)iVar69 >> 0x18),
                          CONCAT16((byte)((uint)iVar47 >> 0x10) ^ bVar29 ^
                                   (byte)((uint)iVar69 >> 0x10),
                                   CONCAT15((byte)((uint)iVar47 >> 8) ^ bVar28 ^
                                            (byte)((uint)iVar69 >> 8),
                                            CONCAT14((byte)iVar47 ^ bVar26 ^ (byte)iVar69,
                                                     CONCAT13((byte)((uint)iVar42 >> 0x18) ^ bVar25
                                                              ^ (byte)((uint)iVar63 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar42 >> 0x10)
                                                                       ^ bVar24 ^
                                                                       (byte)((uint)iVar63 >> 0x10),
                                                                       CONCAT11((byte)((uint)iVar42
                                                                                      >> 8) ^ bVar23
                                                                                ^ (byte)((uint)
                                                  iVar63 >> 8),(byte)iVar42 ^ bVar21 ^ (byte)iVar63)
                                                  ))))));
        uVar73 = CONCAT17(bVar40 ^ bVar20 ^ (byte)((uint)iVar17 >> 0x18),
                          CONCAT16(bVar39 ^ bVar19 ^ (byte)((uint)iVar17 >> 0x10),
                                   CONCAT15(bVar38 ^ bVar18 ^ (byte)((uint)iVar17 >> 8),
                                            CONCAT14(bVar36 ^ bVar16 ^ (byte)iVar17,
                                                     CONCAT13(bVar35 ^ bVar15 ^
                                                              (byte)((uint)iVar12 >> 0x18),
                                                              CONCAT12(bVar34 ^ bVar14 ^
                                                                       (byte)((uint)iVar12 >> 0x10),
                                                                       CONCAT11(bVar33 ^ bVar13 ^
                                                                                (byte)((uint)iVar12
                                                                                      >> 8),
                                                                                bVar31 ^ bVar11 ^
                                                                                (byte)iVar12)))))));
        uVar75 = CONCAT17(bVar50 ^ bVar30 ^ (byte)((uint)iVar27 >> 0x18),
                          CONCAT16(bVar49 ^ bVar29 ^ (byte)((uint)iVar27 >> 0x10),
                                   CONCAT15(bVar48 ^ bVar28 ^ (byte)((uint)iVar27 >> 8),
                                            CONCAT14(bVar46 ^ bVar26 ^ (byte)iVar27,
                                                     CONCAT13(bVar45 ^ bVar25 ^
                                                              (byte)((uint)iVar22 >> 0x18),
                                                              CONCAT12(bVar44 ^ bVar24 ^
                                                                       (byte)((uint)iVar22 >> 0x10),
                                                                       CONCAT11(bVar43 ^ bVar23 ^
                                                                                (byte)((uint)iVar22
                                                                                      >> 8),
                                                                                bVar41 ^ bVar21 ^
                                                                                (byte)iVar22)))))));
      } while (uVar6 != 0);
      *(undefined8 *)(param_1[1] + 8) = uVar75;
      *(undefined8 *)param_1[1] = uVar73;
      *(undefined8 *)(param_1[2] + 8) = uVar64;
      *(undefined8 *)param_1[2] = uVar53;
      *(long *)(*param_1 + 8) = auVar10._8_8_;
      *(long *)*param_1 = auVar10._0_8_;
      param_1[3][0] = 0;
      uVar6 = 0;
    }
    uVar4 = uVar4 - uVar1;
    puVar3 = (undefined4 *)((long)puVar3 + uVar1);
  } while (uVar4 != 0);
  if (*(long *)(lVar2 + 0x28) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


// ===== 004fcdf4  hydro_sign_update =====

undefined8 hydro_sign_update(undefined1 (*param_1) [16],byte *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined1 (*pauVar6) [16];
  undefined1 auVar7 [12];
  undefined1 auVar9 [16];
  byte bVar10;
  byte bVar12;
  byte bVar13;
  int iVar11;
  byte bVar14;
  byte bVar15;
  byte bVar17;
  byte bVar18;
  int iVar16;
  byte bVar19;
  byte bVar20;
  byte bVar22;
  byte bVar23;
  int iVar21;
  byte bVar24;
  byte bVar25;
  byte bVar27;
  byte bVar28;
  int iVar26;
  byte bVar29;
  byte bVar30;
  byte bVar32;
  byte bVar33;
  int iVar31;
  byte bVar34;
  byte bVar35;
  byte bVar37;
  byte bVar38;
  int iVar36;
  byte bVar39;
  byte bVar40;
  byte bVar42;
  byte bVar43;
  int iVar41;
  byte bVar44;
  byte bVar45;
  byte bVar47;
  byte bVar48;
  int iVar46;
  byte bVar49;
  byte bVar50;
  int iVar51;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar58;
  byte bVar59;
  undefined8 uVar52;
  int iVar57;
  byte bVar60;
  byte bVar61;
  int iVar62;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar69;
  byte bVar70;
  undefined8 uVar63;
  int iVar68;
  byte bVar71;
  undefined8 uVar72;
  uint uVar73;
  undefined8 uVar74;
  uint uVar75;
  undefined1 auVar8 [16];
  
  if (param_3 != 0) {
    uVar4 = (ulong)(byte)param_1[3][0];
    do {
      uVar3 = 0x10;
      uVar2 = 0x10 - (uVar4 & 0xff);
      uVar1 = param_3;
      if (uVar2 <= param_3) {
        uVar1 = uVar2;
      }
      if (((uint)uVar4 & 0xff) != 0x10) {
        uVar4 = uVar1;
        pbVar5 = param_2;
        pauVar6 = param_1;
        if (uVar1 < 2) {
          uVar4 = 1;
        }
        do {
          uVar4 = uVar4 - 1;
          (*pauVar6)[(byte)param_1[3][0]] = (*pauVar6)[(byte)param_1[3][0]] ^ *pbVar5;
          pbVar5 = pbVar5 + 1;
          pauVar6 = (undefined1 (*) [16])(*pauVar6 + 1);
        } while (uVar4 != 0);
        uVar3 = (uint)(byte)param_1[3][0];
      }
      uVar3 = uVar3 + (int)uVar1;
      uVar4 = (ulong)uVar3;
      param_1[3][0] = (char)uVar3;
      if ((uVar3 & 0xff) == 0x10) {
        auVar9 = *param_1;
        uVar74 = *(undefined8 *)(param_1[1] + 8);
        uVar72 = *(undefined8 *)param_1[1];
        uVar4 = 0x18;
        uVar63 = *(undefined8 *)(param_1[2] + 8);
        uVar52 = *(undefined8 *)param_1[2];
        do {
          uVar73 = (uint)((ulong)uVar72 >> 0x20);
          uVar75 = (uint)((ulong)uVar74 >> 0x20);
          uVar3 = (uint)uVar4;
          iVar11 = auVar9._0_4_ * 0x1000000 + (auVar9._0_4_ >> 8);
          iVar16 = auVar9._4_4_ * 0x1000000 + (auVar9._4_4_ >> 8);
          iVar21 = auVar9._8_4_ * 0x1000000 + (auVar9._8_4_ >> 8);
          iVar26 = auVar9._12_4_ * 0x1000000 + (auVar9._12_4_ >> 8);
          iVar31 = (uint)uVar72 * 0x200 + ((uint)uVar72 >> 0x17);
          iVar36 = uVar73 * 0x200 + (uVar73 >> 0x17);
          iVar41 = (uint)uVar74 * 0x200 + ((uint)uVar74 >> 0x17);
          iVar46 = uVar75 * 0x200 + (uVar75 >> 0x17);
          bVar10 = (byte)iVar11;
          bVar30 = (byte)iVar31;
          bVar12 = (byte)((uint)iVar11 >> 8);
          bVar32 = (byte)((uint)iVar31 >> 8);
          bVar13 = (byte)((uint)iVar11 >> 0x10);
          bVar33 = (byte)((uint)iVar31 >> 0x10);
          bVar14 = (byte)((uint)iVar11 >> 0x18);
          bVar34 = (byte)((uint)iVar31 >> 0x18);
          iVar11 = CONCAT13(bVar14 & bVar34,
                            CONCAT12(bVar13 & bVar33,CONCAT11(bVar12 & bVar32,bVar10 & bVar30)));
          bVar15 = (byte)iVar16;
          bVar35 = (byte)iVar36;
          bVar17 = (byte)((uint)iVar16 >> 8);
          bVar37 = (byte)((uint)iVar36 >> 8);
          bVar18 = (byte)((uint)iVar16 >> 0x10);
          bVar38 = (byte)((uint)iVar36 >> 0x10);
          bVar19 = (byte)((uint)iVar16 >> 0x18);
          bVar39 = (byte)((uint)iVar36 >> 0x18);
          auVar7._0_8_ = CONCAT17(bVar19 & bVar39,
                                  CONCAT16(bVar18 & bVar38,
                                           CONCAT15(bVar17 & bVar37,CONCAT14(bVar15 & bVar35,iVar11)
                                                   )));
          bVar20 = (byte)iVar21;
          bVar40 = (byte)iVar41;
          auVar7[8] = bVar20 & bVar40;
          bVar22 = (byte)((uint)iVar21 >> 8);
          bVar42 = (byte)((uint)iVar41 >> 8);
          auVar7[9] = bVar22 & bVar42;
          bVar23 = (byte)((uint)iVar21 >> 0x10);
          bVar43 = (byte)((uint)iVar41 >> 0x10);
          auVar7[10] = bVar23 & bVar43;
          bVar24 = (byte)((uint)iVar21 >> 0x18);
          bVar44 = (byte)((uint)iVar41 >> 0x18);
          auVar7[0xb] = bVar24 & bVar44;
          bVar25 = (byte)iVar26;
          bVar45 = (byte)iVar46;
          auVar8[0xc] = bVar25 & bVar45;
          auVar8._0_12_ = auVar7;
          bVar27 = (byte)((uint)iVar26 >> 8);
          bVar47 = (byte)((uint)iVar46 >> 8);
          auVar8[0xd] = bVar27 & bVar47;
          bVar28 = (byte)((uint)iVar26 >> 0x10);
          bVar48 = (byte)((uint)iVar46 >> 0x10);
          auVar8[0xe] = bVar28 & bVar48;
          bVar29 = (byte)((uint)iVar26 >> 0x18);
          bVar49 = (byte)((uint)iVar46 >> 0x18);
          auVar8[0xf] = bVar29 & bVar49;
          bVar50 = (byte)uVar52;
          bVar53 = (byte)((ulong)uVar52 >> 8);
          bVar54 = (byte)((ulong)uVar52 >> 0x10);
          bVar55 = (byte)((ulong)uVar52 >> 0x18);
          bVar56 = (byte)((ulong)uVar52 >> 0x20);
          bVar58 = (byte)((ulong)uVar52 >> 0x28);
          bVar59 = (byte)((ulong)uVar52 >> 0x30);
          bVar60 = (byte)((ulong)uVar52 >> 0x38);
          bVar61 = (byte)uVar63;
          bVar64 = (byte)((ulong)uVar63 >> 8);
          bVar65 = (byte)((ulong)uVar63 >> 0x10);
          bVar66 = (byte)((ulong)uVar63 >> 0x18);
          bVar67 = (byte)((ulong)uVar63 >> 0x20);
          bVar69 = (byte)((ulong)uVar63 >> 0x28);
          bVar70 = (byte)((ulong)uVar63 >> 0x30);
          bVar71 = (byte)((ulong)uVar63 >> 0x38);
          iVar11 = iVar11 << 3;
          iVar16 = (int)((ulong)auVar7._0_8_ >> 0x20) << 3;
          iVar21 = auVar7._8_4_ << 3;
          iVar26 = auVar8._12_4_ << 3;
          auVar9._0_8_ = CONCAT17(bVar60 ^ bVar39 ^ (byte)((uint)iVar16 >> 0x18),
                                  CONCAT16(bVar59 ^ bVar38 ^ (byte)((uint)iVar16 >> 0x10),
                                           CONCAT15(bVar58 ^ bVar37 ^ (byte)((uint)iVar16 >> 8),
                                                    CONCAT14(bVar56 ^ bVar35 ^ (byte)iVar16,
                                                             CONCAT13(bVar55 ^ bVar34 ^
                                                                      (byte)((uint)iVar11 >> 0x18),
                                                                      CONCAT12(bVar54 ^ bVar33 ^
                                                                               (byte)((uint)iVar11
                                                                                     >> 0x10),
                                                                               CONCAT11(bVar53 ^ 
                                                  bVar32 ^ (byte)((uint)iVar11 >> 8),
                                                  bVar50 ^ bVar30 ^ (byte)iVar11)))))));
          auVar9[8] = bVar61 ^ bVar40 ^ (byte)iVar21;
          auVar9[9] = bVar64 ^ bVar42 ^ (byte)((uint)iVar21 >> 8);
          auVar9[10] = bVar65 ^ bVar43 ^ (byte)((uint)iVar21 >> 0x10);
          auVar9[0xb] = bVar66 ^ bVar44 ^ (byte)((uint)iVar21 >> 0x18);
          auVar9[0xc] = bVar67 ^ bVar45 ^ (byte)iVar26;
          auVar9[0xd] = bVar69 ^ bVar47 ^ (byte)((uint)iVar26 >> 8);
          auVar9[0xe] = bVar70 ^ bVar48 ^ (byte)((uint)iVar26 >> 0x10);
          auVar9[0xf] = bVar71 ^ bVar49 ^ (byte)((uint)iVar26 >> 0x18);
          if ((uVar3 & 3) == 2) {
            auVar9 = NEON_ext(auVar9,auVar9,8,1);
          }
          else if ((uVar4 & 3) == 0) {
            uVar4 = (ulong)auVar9._0_8_ >> 0x20;
            auVar9 = NEON_rev64(auVar9,4);
            auVar9._0_4_ = (uint)uVar4 ^ (uVar3 | 0x9e377900);
          }
          iVar31 = (int)uVar52 * 2;
          iVar36 = (int)((ulong)uVar52 >> 0x20) * 2;
          iVar41 = (int)uVar63 * 2;
          iVar46 = (int)((ulong)uVar63 >> 0x20) * 2;
          uVar4 = (ulong)(uVar3 - 1);
          iVar57 = CONCAT13(bVar34 & bVar55,
                            CONCAT12(bVar33 & bVar54,CONCAT11(bVar32 & bVar53,bVar30 & bVar50)));
          iVar68 = CONCAT13(bVar44 & bVar66,
                            CONCAT12(bVar43 & bVar65,CONCAT11(bVar42 & bVar64,bVar40 & bVar61)));
          iVar11 = CONCAT13(bVar14 | bVar55,
                            CONCAT12(bVar13 | bVar54,CONCAT11(bVar12 | bVar53,bVar10 | bVar50))) * 2
          ;
          iVar16 = CONCAT13(bVar19 | bVar60,
                            CONCAT12(bVar18 | bVar59,CONCAT11(bVar17 | bVar58,bVar15 | bVar56))) * 2
          ;
          iVar21 = CONCAT13(bVar24 | bVar66,
                            CONCAT12(bVar23 | bVar65,CONCAT11(bVar22 | bVar64,bVar20 | bVar61))) * 2
          ;
          iVar26 = CONCAT13(bVar29 | bVar71,
                            CONCAT12(bVar28 | bVar70,CONCAT11(bVar27 | bVar69,bVar25 | bVar67))) * 2
          ;
          iVar51 = iVar57 << 2;
          iVar57 = (int)(CONCAT17(bVar39 & bVar60,
                                  CONCAT16(bVar38 & bVar59,
                                           CONCAT15(bVar37 & bVar58,CONCAT14(bVar35 & bVar56,iVar57)
                                                   ))) >> 0x20) << 2;
          iVar62 = iVar68 << 2;
          iVar68 = (int)(CONCAT17(bVar49 & bVar71,
                                  CONCAT16(bVar48 & bVar70,
                                           CONCAT15(bVar47 & bVar69,CONCAT14(bVar45 & bVar67,iVar68)
                                                   ))) >> 0x20) << 2;
          uVar52 = CONCAT17((byte)((uint)iVar36 >> 0x18) ^ bVar19 ^ (byte)((uint)iVar57 >> 0x18),
                            CONCAT16((byte)((uint)iVar36 >> 0x10) ^ bVar18 ^
                                     (byte)((uint)iVar57 >> 0x10),
                                     CONCAT15((byte)((uint)iVar36 >> 8) ^ bVar17 ^
                                              (byte)((uint)iVar57 >> 8),
                                              CONCAT14((byte)iVar36 ^ bVar15 ^ (byte)iVar57,
                                                       CONCAT13((byte)((uint)iVar31 >> 0x18) ^
                                                                bVar14 ^ (byte)((uint)iVar51 >> 0x18
                                                                               ),
                                                                CONCAT12((byte)((uint)iVar31 >> 0x10
                                                                               ) ^ bVar13 ^
                                                                         (byte)((uint)iVar51 >> 0x10
                                                                               ),CONCAT11((byte)((
                                                  uint)iVar31 >> 8) ^ bVar12 ^
                                                  (byte)((uint)iVar51 >> 8),
                                                  (byte)iVar31 ^ bVar10 ^ (byte)iVar51)))))));
          uVar63 = CONCAT17((byte)((uint)iVar46 >> 0x18) ^ bVar29 ^ (byte)((uint)iVar68 >> 0x18),
                            CONCAT16((byte)((uint)iVar46 >> 0x10) ^ bVar28 ^
                                     (byte)((uint)iVar68 >> 0x10),
                                     CONCAT15((byte)((uint)iVar46 >> 8) ^ bVar27 ^
                                              (byte)((uint)iVar68 >> 8),
                                              CONCAT14((byte)iVar46 ^ bVar25 ^ (byte)iVar68,
                                                       CONCAT13((byte)((uint)iVar41 >> 0x18) ^
                                                                bVar24 ^ (byte)((uint)iVar62 >> 0x18
                                                                               ),
                                                                CONCAT12((byte)((uint)iVar41 >> 0x10
                                                                               ) ^ bVar23 ^
                                                                         (byte)((uint)iVar62 >> 0x10
                                                                               ),CONCAT11((byte)((
                                                  uint)iVar41 >> 8) ^ bVar22 ^
                                                  (byte)((uint)iVar62 >> 8),
                                                  (byte)iVar41 ^ bVar20 ^ (byte)iVar62)))))));
          uVar72 = CONCAT17(bVar39 ^ bVar19 ^ (byte)((uint)iVar16 >> 0x18),
                            CONCAT16(bVar38 ^ bVar18 ^ (byte)((uint)iVar16 >> 0x10),
                                     CONCAT15(bVar37 ^ bVar17 ^ (byte)((uint)iVar16 >> 8),
                                              CONCAT14(bVar35 ^ bVar15 ^ (byte)iVar16,
                                                       CONCAT13(bVar34 ^ bVar14 ^
                                                                (byte)((uint)iVar11 >> 0x18),
                                                                CONCAT12(bVar33 ^ bVar13 ^
                                                                         (byte)((uint)iVar11 >> 0x10
                                                                               ),CONCAT11(bVar32 ^ 
                                                  bVar12 ^ (byte)((uint)iVar11 >> 8),
                                                  bVar30 ^ bVar10 ^ (byte)iVar11)))))));
          uVar74 = CONCAT17(bVar49 ^ bVar29 ^ (byte)((uint)iVar26 >> 0x18),
                            CONCAT16(bVar48 ^ bVar28 ^ (byte)((uint)iVar26 >> 0x10),
                                     CONCAT15(bVar47 ^ bVar27 ^ (byte)((uint)iVar26 >> 8),
                                              CONCAT14(bVar45 ^ bVar25 ^ (byte)iVar26,
                                                       CONCAT13(bVar44 ^ bVar24 ^
                                                                (byte)((uint)iVar21 >> 0x18),
                                                                CONCAT12(bVar43 ^ bVar23 ^
                                                                         (byte)((uint)iVar21 >> 0x10
                                                                               ),CONCAT11(bVar42 ^ 
                                                  bVar22 ^ (byte)((uint)iVar21 >> 8),
                                                  bVar40 ^ bVar20 ^ (byte)iVar21)))))));
        } while (uVar3 - 1 != 0);
        *(undefined8 *)(param_1[1] + 8) = uVar74;
        *(undefined8 *)param_1[1] = uVar72;
        *(undefined8 *)(param_1[2] + 8) = uVar63;
        *(undefined8 *)param_1[2] = uVar52;
        *(long *)(*param_1 + 8) = auVar9._8_8_;
        *(long *)*param_1 = auVar9._0_8_;
        param_1[3][0] = 0;
      }
      param_3 = param_3 - uVar1;
      param_2 = param_2 + uVar1;
    } while (param_3 != 0);
  }
  return 0;
}


// ===== 004fcf14  hydro_sign_final_verify =====

uint hydro_sign_final_verify(undefined8 param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined1 auVar26 [12];
  undefined1 auVar29 [12];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar27 [12];
  undefined1 auVar34 [16];
  undefined1 auVar28 [12];
  undefined1 auVar36 [16];
  byte bVar38;
  byte bVar40;
  byte bVar41;
  int iVar39;
  byte bVar42;
  byte bVar43;
  byte bVar45;
  byte bVar46;
  int iVar44;
  byte bVar47;
  byte bVar48;
  byte bVar50;
  byte bVar51;
  int iVar49;
  byte bVar52;
  byte bVar53;
  byte bVar55;
  byte bVar56;
  int iVar54;
  byte bVar57;
  byte bVar58;
  byte bVar60;
  byte bVar61;
  int iVar59;
  byte bVar62;
  byte bVar63;
  byte bVar65;
  byte bVar66;
  int iVar64;
  byte bVar67;
  byte bVar68;
  byte bVar70;
  byte bVar71;
  int iVar69;
  byte bVar72;
  byte bVar73;
  byte bVar75;
  byte bVar76;
  int iVar74;
  byte bVar77;
  int iVar78;
  int iVar79;
  uint uVar80;
  int iVar81;
  int iVar82;
  uint uVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  undefined8 local_1c8;
  undefined1 local_1c0 [64];
  undefined1 auStack_180 [32];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  uint local_130;
  undefined4 local_128;
  undefined2 uStack_124;
  undefined2 uStack_122;
  undefined6 uStack_120;
  undefined2 uStack_11a;
  undefined6 uStack_118;
  undefined2 uStack_112;
  undefined6 uStack_110;
  undefined2 uStack_10a;
  undefined6 uStack_108;
  undefined2 local_102;
  undefined6 uStack_100;
  undefined2 uStack_fa;
  undefined6 uStack_f8;
  undefined2 uStack_f2;
  ulong uStack_f0;
  undefined1 auStack_e8 [32];
  ulong local_c8;
  ulong uStack_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  long local_48;
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  hydro_hash_final(param_1,local_1c0,0x40);
  uVar17 = 0;
  uVar10 = 0x20;
  uStack_124 = 0x863;
  puVar8 = &local_128;
  local_128 = (int)DAT_0024e788;
  uStack_11a = 0;
  uStack_118 = 0;
  uStack_122 = 0;
  uStack_120 = 0;
  uStack_10a = 0;
  uStack_108 = 0;
  uStack_112 = 0;
  uStack_110 = 0;
  uStack_fa = 0;
  local_102 = 0;
  uStack_100 = 0;
  uStack_f0 = 0;
  uStack_f8 = 0;
  uStack_f2 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  local_140 = 0;
  local_130 = 0;
  do {
    uVar12 = 0x10 - (ulong)(byte)uVar17;
    uVar18 = 0;
    uVar11 = uVar10;
    if (uVar12 <= uVar10) {
      uVar11 = uVar12;
    }
    uVar12 = uVar11;
    if (uVar11 < 2) {
      uVar12 = 1;
    }
    do {
      *(byte *)((long)&local_160 + uVar18 + ((ulong)(byte)local_130 - 0x160) + 0x160) =
           *(byte *)((long)&local_160 + uVar18 + ((ulong)(byte)local_130 - 0x160) + 0x160) ^
           *(byte *)((long)puVar8 + uVar18);
      uVar18 = uVar18 + 1;
    } while (uVar12 != uVar18);
    uVar17 = (local_130 & 0xff) + (int)uVar11;
    local_130._0_1_ = (char)uVar17;
    if ((uVar17 & 0xff) == 0x10) {
      auVar31._8_8_ = uStack_158;
      auVar31._0_8_ = local_160;
      uVar17 = 0x18;
      do {
        uVar80 = (uint)((ulong)uStack_150 >> 0x20);
        uVar83 = (uint)((ulong)uStack_148 >> 0x20);
        iVar39 = auVar31._0_4_ * 0x1000000 + (auVar31._0_4_ >> 8);
        iVar44 = auVar31._4_4_ * 0x1000000 + (auVar31._4_4_ >> 8);
        iVar49 = auVar31._8_4_ * 0x1000000 + (auVar31._8_4_ >> 8);
        iVar54 = auVar31._12_4_ * 0x1000000 + (auVar31._12_4_ >> 8);
        iVar59 = (uint)uStack_150 * 0x200 + ((uint)uStack_150 >> 0x17);
        iVar64 = uVar80 * 0x200 + (uVar80 >> 0x17);
        iVar69 = (uint)uStack_148 * 0x200 + ((uint)uStack_148 >> 0x17);
        iVar74 = uVar83 * 0x200 + (uVar83 >> 0x17);
        bVar38 = (byte)iVar39;
        bVar58 = (byte)iVar59;
        bVar40 = (byte)((uint)iVar39 >> 8);
        bVar60 = (byte)((uint)iVar59 >> 8);
        bVar41 = (byte)((uint)iVar39 >> 0x10);
        bVar61 = (byte)((uint)iVar59 >> 0x10);
        bVar42 = (byte)((uint)iVar39 >> 0x18);
        bVar62 = (byte)((uint)iVar59 >> 0x18);
        iVar39 = CONCAT13(bVar42 & bVar62,
                          CONCAT12(bVar41 & bVar61,CONCAT11(bVar40 & bVar60,bVar38 & bVar58)));
        bVar43 = (byte)iVar44;
        bVar63 = (byte)iVar64;
        bVar45 = (byte)((uint)iVar44 >> 8);
        bVar65 = (byte)((uint)iVar64 >> 8);
        bVar46 = (byte)((uint)iVar44 >> 0x10);
        bVar66 = (byte)((uint)iVar64 >> 0x10);
        bVar47 = (byte)((uint)iVar44 >> 0x18);
        bVar67 = (byte)((uint)iVar64 >> 0x18);
        auVar26._0_8_ =
             CONCAT17(bVar47 & bVar67,
                      CONCAT16(bVar46 & bVar66,
                               CONCAT15(bVar45 & bVar65,CONCAT14(bVar43 & bVar63,iVar39))));
        bVar48 = (byte)iVar49;
        bVar68 = (byte)iVar69;
        auVar26[8] = bVar48 & bVar68;
        bVar50 = (byte)((uint)iVar49 >> 8);
        bVar70 = (byte)((uint)iVar69 >> 8);
        auVar26[9] = bVar50 & bVar70;
        bVar51 = (byte)((uint)iVar49 >> 0x10);
        bVar71 = (byte)((uint)iVar69 >> 0x10);
        auVar26[10] = bVar51 & bVar71;
        bVar52 = (byte)((uint)iVar49 >> 0x18);
        bVar72 = (byte)((uint)iVar69 >> 0x18);
        auVar26[0xb] = bVar52 & bVar72;
        bVar53 = (byte)iVar54;
        bVar73 = (byte)iVar74;
        auVar30[0xc] = bVar53 & bVar73;
        auVar30._0_12_ = auVar26;
        bVar55 = (byte)((uint)iVar54 >> 8);
        bVar75 = (byte)((uint)iVar74 >> 8);
        auVar30[0xd] = bVar55 & bVar75;
        bVar56 = (byte)((uint)iVar54 >> 0x10);
        bVar76 = (byte)((uint)iVar74 >> 0x10);
        auVar30[0xe] = bVar56 & bVar76;
        bVar57 = (byte)((uint)iVar54 >> 0x18);
        bVar77 = (byte)((uint)iVar74 >> 0x18);
        auVar30[0xf] = bVar57 & bVar77;
        bVar84 = (byte)local_140;
        bVar85 = (byte)((ulong)local_140 >> 8);
        bVar86 = (byte)((ulong)local_140 >> 0x10);
        bVar87 = (byte)((ulong)local_140 >> 0x18);
        bVar88 = (byte)((ulong)local_140 >> 0x20);
        bVar89 = (byte)((ulong)local_140 >> 0x28);
        bVar90 = (byte)((ulong)local_140 >> 0x30);
        bVar91 = (byte)((ulong)local_140 >> 0x38);
        bVar92 = (byte)uStack_138;
        bVar93 = (byte)((ulong)uStack_138 >> 8);
        bVar94 = (byte)((ulong)uStack_138 >> 0x10);
        bVar95 = (byte)((ulong)uStack_138 >> 0x18);
        bVar96 = (byte)((ulong)uStack_138 >> 0x20);
        bVar97 = (byte)((ulong)uStack_138 >> 0x28);
        bVar98 = (byte)((ulong)uStack_138 >> 0x30);
        bVar99 = (byte)((ulong)uStack_138 >> 0x38);
        iVar39 = iVar39 << 3;
        iVar44 = (int)((ulong)auVar26._0_8_ >> 0x20) << 3;
        iVar49 = auVar26._8_4_ << 3;
        iVar54 = auVar30._12_4_ << 3;
        auVar31._0_8_ =
             CONCAT17(bVar91 ^ bVar67 ^ (byte)((uint)iVar44 >> 0x18),
                      CONCAT16(bVar90 ^ bVar66 ^ (byte)((uint)iVar44 >> 0x10),
                               CONCAT15(bVar89 ^ bVar65 ^ (byte)((uint)iVar44 >> 8),
                                        CONCAT14(bVar88 ^ bVar63 ^ (byte)iVar44,
                                                 CONCAT13(bVar87 ^ bVar62 ^
                                                          (byte)((uint)iVar39 >> 0x18),
                                                          CONCAT12(bVar86 ^ bVar61 ^
                                                                   (byte)((uint)iVar39 >> 0x10),
                                                                   CONCAT11(bVar85 ^ bVar60 ^
                                                                            (byte)((uint)iVar39 >> 8
                                                                                  ),bVar84 ^ bVar58
                                                                                    ^ (byte)iVar39))
                                                         )))));
        auVar31[8] = bVar92 ^ bVar68 ^ (byte)iVar49;
        auVar31[9] = bVar93 ^ bVar70 ^ (byte)((uint)iVar49 >> 8);
        auVar31[10] = bVar94 ^ bVar71 ^ (byte)((uint)iVar49 >> 0x10);
        auVar31[0xb] = bVar95 ^ bVar72 ^ (byte)((uint)iVar49 >> 0x18);
        auVar31[0xc] = bVar96 ^ bVar73 ^ (byte)iVar54;
        auVar31[0xd] = bVar97 ^ bVar75 ^ (byte)((uint)iVar54 >> 8);
        auVar31[0xe] = bVar98 ^ bVar76 ^ (byte)((uint)iVar54 >> 0x10);
        auVar31[0xf] = bVar99 ^ bVar77 ^ (byte)((uint)iVar54 >> 0x18);
        if ((uVar17 & 3) == 2) {
          auVar31 = NEON_ext(auVar31,auVar31,8,1);
        }
        else if ((uVar17 & 3) == 0) {
          uVar18 = (ulong)auVar31._0_8_ >> 0x20;
          auVar31 = NEON_rev64(auVar31,4);
          auVar31._0_4_ = (uint)uVar18 ^ (uVar17 | 0x9e377900);
        }
        iVar59 = (int)local_140 * 2;
        iVar64 = (int)((ulong)local_140 >> 0x20) * 2;
        iVar69 = (int)uStack_138 * 2;
        iVar74 = (int)((ulong)uStack_138 >> 0x20) * 2;
        uVar17 = uVar17 - 1;
        iVar79 = CONCAT13(bVar62 & bVar87,
                          CONCAT12(bVar61 & bVar86,CONCAT11(bVar60 & bVar85,bVar58 & bVar84)));
        iVar82 = CONCAT13(bVar72 & bVar95,
                          CONCAT12(bVar71 & bVar94,CONCAT11(bVar70 & bVar93,bVar68 & bVar92)));
        iVar39 = CONCAT13(bVar42 | bVar87,
                          CONCAT12(bVar41 | bVar86,CONCAT11(bVar40 | bVar85,bVar38 | bVar84))) * 2;
        iVar44 = CONCAT13(bVar47 | bVar91,
                          CONCAT12(bVar46 | bVar90,CONCAT11(bVar45 | bVar89,bVar43 | bVar88))) * 2;
        iVar49 = CONCAT13(bVar52 | bVar95,
                          CONCAT12(bVar51 | bVar94,CONCAT11(bVar50 | bVar93,bVar48 | bVar92))) * 2;
        iVar54 = CONCAT13(bVar57 | bVar99,
                          CONCAT12(bVar56 | bVar98,CONCAT11(bVar55 | bVar97,bVar53 | bVar96))) * 2;
        iVar78 = iVar79 << 2;
        iVar79 = (int)(CONCAT17(bVar67 & bVar91,
                                CONCAT16(bVar66 & bVar90,
                                         CONCAT15(bVar65 & bVar89,CONCAT14(bVar63 & bVar88,iVar79)))
                               ) >> 0x20) << 2;
        iVar81 = iVar82 << 2;
        iVar82 = (int)(CONCAT17(bVar77 & bVar99,
                                CONCAT16(bVar76 & bVar98,
                                         CONCAT15(bVar75 & bVar97,CONCAT14(bVar73 & bVar96,iVar82)))
                               ) >> 0x20) << 2;
        local_140 = CONCAT17((byte)((uint)iVar64 >> 0x18) ^ bVar47 ^ (byte)((uint)iVar79 >> 0x18),
                             CONCAT16((byte)((uint)iVar64 >> 0x10) ^ bVar46 ^
                                      (byte)((uint)iVar79 >> 0x10),
                                      CONCAT15((byte)((uint)iVar64 >> 8) ^ bVar45 ^
                                               (byte)((uint)iVar79 >> 8),
                                               CONCAT14((byte)iVar64 ^ bVar43 ^ (byte)iVar79,
                                                        CONCAT13((byte)((uint)iVar59 >> 0x18) ^
                                                                 bVar42 ^ (byte)((uint)iVar78 >>
                                                                                0x18),
                                                                 CONCAT12((byte)((uint)iVar59 >>
                                                                                0x10) ^ bVar41 ^
                                                                          (byte)((uint)iVar78 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((uint)
                                                  iVar59 >> 8) ^ bVar40 ^ (byte)((uint)iVar78 >> 8),
                                                  (byte)iVar59 ^ bVar38 ^ (byte)iVar78)))))));
        uStack_138 = CONCAT17((byte)((uint)iVar74 >> 0x18) ^ bVar57 ^ (byte)((uint)iVar82 >> 0x18),
                              CONCAT16((byte)((uint)iVar74 >> 0x10) ^ bVar56 ^
                                       (byte)((uint)iVar82 >> 0x10),
                                       CONCAT15((byte)((uint)iVar74 >> 8) ^ bVar55 ^
                                                (byte)((uint)iVar82 >> 8),
                                                CONCAT14((byte)iVar74 ^ bVar53 ^ (byte)iVar82,
                                                         CONCAT13((byte)((uint)iVar69 >> 0x18) ^
                                                                  bVar52 ^ (byte)((uint)iVar81 >>
                                                                                 0x18),
                                                                  CONCAT12((byte)((uint)iVar69 >>
                                                                                 0x10) ^ bVar51 ^
                                                                           (byte)((uint)iVar81 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)((uint)
                                                  iVar69 >> 8) ^ bVar50 ^ (byte)((uint)iVar81 >> 8),
                                                  (byte)iVar69 ^ bVar48 ^ (byte)iVar81)))))));
        uStack_150 = CONCAT17(bVar67 ^ bVar47 ^ (byte)((uint)iVar44 >> 0x18),
                              CONCAT16(bVar66 ^ bVar46 ^ (byte)((uint)iVar44 >> 0x10),
                                       CONCAT15(bVar65 ^ bVar45 ^ (byte)((uint)iVar44 >> 8),
                                                CONCAT14(bVar63 ^ bVar43 ^ (byte)iVar44,
                                                         CONCAT13(bVar62 ^ bVar42 ^
                                                                  (byte)((uint)iVar39 >> 0x18),
                                                                  CONCAT12(bVar61 ^ bVar41 ^
                                                                           (byte)((uint)iVar39 >>
                                                                                 0x10),
                                                                           CONCAT11(bVar60 ^ bVar40
                                                                                    ^ (byte)((uint)
                                                  iVar39 >> 8),bVar58 ^ bVar38 ^ (byte)iVar39)))))))
        ;
        uStack_148 = CONCAT17(bVar77 ^ bVar57 ^ (byte)((uint)iVar54 >> 0x18),
                              CONCAT16(bVar76 ^ bVar56 ^ (byte)((uint)iVar54 >> 0x10),
                                       CONCAT15(bVar75 ^ bVar55 ^ (byte)((uint)iVar54 >> 8),
                                                CONCAT14(bVar73 ^ bVar53 ^ (byte)iVar54,
                                                         CONCAT13(bVar72 ^ bVar52 ^
                                                                  (byte)((uint)iVar49 >> 0x18),
                                                                  CONCAT12(bVar71 ^ bVar51 ^
                                                                           (byte)((uint)iVar49 >>
                                                                                 0x10),
                                                                           CONCAT11(bVar70 ^ bVar50
                                                                                    ^ (byte)((uint)
                                                  iVar49 >> 8),bVar68 ^ bVar48 ^ (byte)iVar49)))))))
        ;
      } while (uVar17 != 0);
      uStack_158 = auVar31._8_8_;
      local_160 = auVar31._0_8_;
      local_130._0_1_ = 0;
      uVar17 = 0;
    }
    uVar10 = uVar10 - uVar11;
    puVar8 = (undefined4 *)((long)puVar8 + uVar11);
  } while (uVar10 != 0);
  uVar10 = 0x20;
  uVar18 = (ulong)uVar17;
  puVar13 = param_2;
  do {
    uVar12 = 0x10 - (uVar18 & 0xff);
    uVar18 = 0;
    uVar11 = uVar10;
    if (uVar12 <= uVar10) {
      uVar11 = uVar12;
    }
    uVar12 = uVar11;
    if (uVar11 < 2) {
      uVar12 = 1;
    }
    do {
      *(byte *)((long)&local_160 + uVar18 + ((ulong)(byte)local_130 - 0x160) + 0x160) =
           *(byte *)((long)&local_160 + uVar18 + ((ulong)(byte)local_130 - 0x160) + 0x160) ^
           *(byte *)((long)puVar13 + uVar18);
      uVar18 = uVar18 + 1;
    } while (uVar12 != uVar18);
    uVar17 = (local_130 & 0xff) + (int)uVar11;
    uVar18 = (ulong)uVar17;
    local_130._0_1_ = (char)uVar17;
    if ((uVar17 & 0xff) == 0x10) {
      auVar32._8_8_ = uStack_158;
      auVar32._0_8_ = local_160;
      uVar18 = 0x18;
      do {
        uVar80 = (uint)((ulong)uStack_150 >> 0x20);
        uVar83 = (uint)((ulong)uStack_148 >> 0x20);
        uVar17 = (uint)uVar18;
        iVar39 = auVar32._0_4_ * 0x1000000 + (auVar32._0_4_ >> 8);
        iVar44 = auVar32._4_4_ * 0x1000000 + (auVar32._4_4_ >> 8);
        iVar49 = auVar32._8_4_ * 0x1000000 + (auVar32._8_4_ >> 8);
        iVar54 = auVar32._12_4_ * 0x1000000 + (auVar32._12_4_ >> 8);
        iVar59 = (uint)uStack_150 * 0x200 + ((uint)uStack_150 >> 0x17);
        iVar64 = uVar80 * 0x200 + (uVar80 >> 0x17);
        iVar69 = (uint)uStack_148 * 0x200 + ((uint)uStack_148 >> 0x17);
        iVar74 = uVar83 * 0x200 + (uVar83 >> 0x17);
        bVar38 = (byte)iVar39;
        bVar58 = (byte)iVar59;
        bVar40 = (byte)((uint)iVar39 >> 8);
        bVar60 = (byte)((uint)iVar59 >> 8);
        bVar41 = (byte)((uint)iVar39 >> 0x10);
        bVar61 = (byte)((uint)iVar59 >> 0x10);
        bVar42 = (byte)((uint)iVar39 >> 0x18);
        bVar62 = (byte)((uint)iVar59 >> 0x18);
        iVar39 = CONCAT13(bVar42 & bVar62,
                          CONCAT12(bVar41 & bVar61,CONCAT11(bVar40 & bVar60,bVar38 & bVar58)));
        bVar43 = (byte)iVar44;
        bVar63 = (byte)iVar64;
        bVar45 = (byte)((uint)iVar44 >> 8);
        bVar65 = (byte)((uint)iVar64 >> 8);
        bVar46 = (byte)((uint)iVar44 >> 0x10);
        bVar66 = (byte)((uint)iVar64 >> 0x10);
        bVar47 = (byte)((uint)iVar44 >> 0x18);
        bVar67 = (byte)((uint)iVar64 >> 0x18);
        auVar27._0_8_ =
             CONCAT17(bVar47 & bVar67,
                      CONCAT16(bVar46 & bVar66,
                               CONCAT15(bVar45 & bVar65,CONCAT14(bVar43 & bVar63,iVar39))));
        bVar48 = (byte)iVar49;
        bVar68 = (byte)iVar69;
        auVar27[8] = bVar48 & bVar68;
        bVar50 = (byte)((uint)iVar49 >> 8);
        bVar70 = (byte)((uint)iVar69 >> 8);
        auVar27[9] = bVar50 & bVar70;
        bVar51 = (byte)((uint)iVar49 >> 0x10);
        bVar71 = (byte)((uint)iVar69 >> 0x10);
        auVar27[10] = bVar51 & bVar71;
        bVar52 = (byte)((uint)iVar49 >> 0x18);
        bVar72 = (byte)((uint)iVar69 >> 0x18);
        auVar27[0xb] = bVar52 & bVar72;
        bVar53 = (byte)iVar54;
        bVar73 = (byte)iVar74;
        auVar33[0xc] = bVar53 & bVar73;
        auVar33._0_12_ = auVar27;
        bVar55 = (byte)((uint)iVar54 >> 8);
        bVar75 = (byte)((uint)iVar74 >> 8);
        auVar33[0xd] = bVar55 & bVar75;
        bVar56 = (byte)((uint)iVar54 >> 0x10);
        bVar76 = (byte)((uint)iVar74 >> 0x10);
        auVar33[0xe] = bVar56 & bVar76;
        bVar57 = (byte)((uint)iVar54 >> 0x18);
        bVar77 = (byte)((uint)iVar74 >> 0x18);
        auVar33[0xf] = bVar57 & bVar77;
        bVar84 = (byte)local_140;
        bVar85 = (byte)((ulong)local_140 >> 8);
        bVar86 = (byte)((ulong)local_140 >> 0x10);
        bVar87 = (byte)((ulong)local_140 >> 0x18);
        bVar88 = (byte)((ulong)local_140 >> 0x20);
        bVar89 = (byte)((ulong)local_140 >> 0x28);
        bVar90 = (byte)((ulong)local_140 >> 0x30);
        bVar91 = (byte)((ulong)local_140 >> 0x38);
        bVar92 = (byte)uStack_138;
        bVar93 = (byte)((ulong)uStack_138 >> 8);
        bVar94 = (byte)((ulong)uStack_138 >> 0x10);
        bVar95 = (byte)((ulong)uStack_138 >> 0x18);
        bVar96 = (byte)((ulong)uStack_138 >> 0x20);
        bVar97 = (byte)((ulong)uStack_138 >> 0x28);
        bVar98 = (byte)((ulong)uStack_138 >> 0x30);
        bVar99 = (byte)((ulong)uStack_138 >> 0x38);
        iVar39 = iVar39 << 3;
        iVar44 = (int)((ulong)auVar27._0_8_ >> 0x20) << 3;
        iVar49 = auVar27._8_4_ << 3;
        iVar54 = auVar33._12_4_ << 3;
        auVar32._0_8_ =
             CONCAT17(bVar91 ^ bVar67 ^ (byte)((uint)iVar44 >> 0x18),
                      CONCAT16(bVar90 ^ bVar66 ^ (byte)((uint)iVar44 >> 0x10),
                               CONCAT15(bVar89 ^ bVar65 ^ (byte)((uint)iVar44 >> 8),
                                        CONCAT14(bVar88 ^ bVar63 ^ (byte)iVar44,
                                                 CONCAT13(bVar87 ^ bVar62 ^
                                                          (byte)((uint)iVar39 >> 0x18),
                                                          CONCAT12(bVar86 ^ bVar61 ^
                                                                   (byte)((uint)iVar39 >> 0x10),
                                                                   CONCAT11(bVar85 ^ bVar60 ^
                                                                            (byte)((uint)iVar39 >> 8
                                                                                  ),bVar84 ^ bVar58
                                                                                    ^ (byte)iVar39))
                                                         )))));
        auVar32[8] = bVar92 ^ bVar68 ^ (byte)iVar49;
        auVar32[9] = bVar93 ^ bVar70 ^ (byte)((uint)iVar49 >> 8);
        auVar32[10] = bVar94 ^ bVar71 ^ (byte)((uint)iVar49 >> 0x10);
        auVar32[0xb] = bVar95 ^ bVar72 ^ (byte)((uint)iVar49 >> 0x18);
        auVar32[0xc] = bVar96 ^ bVar73 ^ (byte)iVar54;
        auVar32[0xd] = bVar97 ^ bVar75 ^ (byte)((uint)iVar54 >> 8);
        auVar32[0xe] = bVar98 ^ bVar76 ^ (byte)((uint)iVar54 >> 0x10);
        auVar32[0xf] = bVar99 ^ bVar77 ^ (byte)((uint)iVar54 >> 0x18);
        if ((uVar17 & 3) == 2) {
          auVar32 = NEON_ext(auVar32,auVar32,8,1);
        }
        else if ((uVar18 & 3) == 0) {
          uVar18 = (ulong)auVar32._0_8_ >> 0x20;
          auVar31 = NEON_rev64(auVar32,4);
          auVar32._4_12_ = auVar31._4_12_;
          auVar32._0_4_ = (uint)uVar18 ^ (uVar17 | 0x9e377900);
        }
        iVar59 = (int)local_140 * 2;
        iVar64 = (int)((ulong)local_140 >> 0x20) * 2;
        iVar69 = (int)uStack_138 * 2;
        iVar74 = (int)((ulong)uStack_138 >> 0x20) * 2;
        uVar18 = (ulong)(uVar17 - 1);
        iVar79 = CONCAT13(bVar62 & bVar87,
                          CONCAT12(bVar61 & bVar86,CONCAT11(bVar60 & bVar85,bVar58 & bVar84)));
        iVar82 = CONCAT13(bVar72 & bVar95,
                          CONCAT12(bVar71 & bVar94,CONCAT11(bVar70 & bVar93,bVar68 & bVar92)));
        iVar39 = CONCAT13(bVar42 | bVar87,
                          CONCAT12(bVar41 | bVar86,CONCAT11(bVar40 | bVar85,bVar38 | bVar84))) * 2;
        iVar44 = CONCAT13(bVar47 | bVar91,
                          CONCAT12(bVar46 | bVar90,CONCAT11(bVar45 | bVar89,bVar43 | bVar88))) * 2;
        iVar49 = CONCAT13(bVar52 | bVar95,
                          CONCAT12(bVar51 | bVar94,CONCAT11(bVar50 | bVar93,bVar48 | bVar92))) * 2;
        iVar54 = CONCAT13(bVar57 | bVar99,
                          CONCAT12(bVar56 | bVar98,CONCAT11(bVar55 | bVar97,bVar53 | bVar96))) * 2;
        iVar78 = iVar79 << 2;
        iVar79 = (int)(CONCAT17(bVar67 & bVar91,
                                CONCAT16(bVar66 & bVar90,
                                         CONCAT15(bVar65 & bVar89,CONCAT14(bVar63 & bVar88,iVar79)))
                               ) >> 0x20) << 2;
        iVar81 = iVar82 << 2;
        iVar82 = (int)(CONCAT17(bVar77 & bVar99,
                                CONCAT16(bVar76 & bVar98,
                                         CONCAT15(bVar75 & bVar97,CONCAT14(bVar73 & bVar96,iVar82)))
                               ) >> 0x20) << 2;
        local_140 = CONCAT17((byte)((uint)iVar64 >> 0x18) ^ bVar47 ^ (byte)((uint)iVar79 >> 0x18),
                             CONCAT16((byte)((uint)iVar64 >> 0x10) ^ bVar46 ^
                                      (byte)((uint)iVar79 >> 0x10),
                                      CONCAT15((byte)((uint)iVar64 >> 8) ^ bVar45 ^
                                               (byte)((uint)iVar79 >> 8),
                                               CONCAT14((byte)iVar64 ^ bVar43 ^ (byte)iVar79,
                                                        CONCAT13((byte)((uint)iVar59 >> 0x18) ^
                                                                 bVar42 ^ (byte)((uint)iVar78 >>
                                                                                0x18),
                                                                 CONCAT12((byte)((uint)iVar59 >>
                                                                                0x10) ^ bVar41 ^
                                                                          (byte)((uint)iVar78 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((uint)
                                                  iVar59 >> 8) ^ bVar40 ^ (byte)((uint)iVar78 >> 8),
                                                  (byte)iVar59 ^ bVar38 ^ (byte)iVar78)))))));
        uStack_138 = CONCAT17((byte)((uint)iVar74 >> 0x18) ^ bVar57 ^ (byte)((uint)iVar82 >> 0x18),
                              CONCAT16((byte)((uint)iVar74 >> 0x10) ^ bVar56 ^
                                       (byte)((uint)iVar82 >> 0x10),
                                       CONCAT15((byte)((uint)iVar74 >> 8) ^ bVar55 ^
                                                (byte)((uint)iVar82 >> 8),
                                                CONCAT14((byte)iVar74 ^ bVar53 ^ (byte)iVar82,
                                                         CONCAT13((byte)((uint)iVar69 >> 0x18) ^
                                                                  bVar52 ^ (byte)((uint)iVar81 >>
                                                                                 0x18),
                                                                  CONCAT12((byte)((uint)iVar69 >>
                                                                                 0x10) ^ bVar51 ^
                                                                           (byte)((uint)iVar81 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)((uint)
                                                  iVar69 >> 8) ^ bVar50 ^ (byte)((uint)iVar81 >> 8),
                                                  (byte)iVar69 ^ bVar48 ^ (byte)iVar81)))))));
        uStack_150 = CONCAT17(bVar67 ^ bVar47 ^ (byte)((uint)iVar44 >> 0x18),
                              CONCAT16(bVar66 ^ bVar46 ^ (byte)((uint)iVar44 >> 0x10),
                                       CONCAT15(bVar65 ^ bVar45 ^ (byte)((uint)iVar44 >> 8),
                                                CONCAT14(bVar63 ^ bVar43 ^ (byte)iVar44,
                                                         CONCAT13(bVar62 ^ bVar42 ^
                                                                  (byte)((uint)iVar39 >> 0x18),
                                                                  CONCAT12(bVar61 ^ bVar41 ^
                                                                           (byte)((uint)iVar39 >>
                                                                                 0x10),
                                                                           CONCAT11(bVar60 ^ bVar40
                                                                                    ^ (byte)((uint)
                                                  iVar39 >> 8),bVar58 ^ bVar38 ^ (byte)iVar39)))))))
        ;
        uStack_148 = CONCAT17(bVar77 ^ bVar57 ^ (byte)((uint)iVar54 >> 0x18),
                              CONCAT16(bVar76 ^ bVar56 ^ (byte)((uint)iVar54 >> 0x10),
                                       CONCAT15(bVar75 ^ bVar55 ^ (byte)((uint)iVar54 >> 8),
                                                CONCAT14(bVar73 ^ bVar53 ^ (byte)iVar54,
                                                         CONCAT13(bVar72 ^ bVar52 ^
                                                                  (byte)((uint)iVar49 >> 0x18),
                                                                  CONCAT12(bVar71 ^ bVar51 ^
                                                                           (byte)((uint)iVar49 >>
                                                                                 0x10),
                                                                           CONCAT11(bVar70 ^ bVar50
                                                                                    ^ (byte)((uint)
                                                  iVar49 >> 8),bVar68 ^ bVar48 ^ (byte)iVar49)))))))
        ;
      } while (uVar17 - 1 != 0);
      uStack_158 = auVar32._8_8_;
      local_160 = auVar32._0_8_;
      local_130._0_1_ = 0;
    }
    uVar10 = uVar10 - uVar11;
    puVar13 = (undefined8 *)((long)puVar13 + uVar11);
  } while (uVar10 != 0);
  uVar10 = 0x20;
  lVar15 = param_3;
  do {
    uVar12 = 0x10 - (uVar18 & 0xff);
    uVar18 = 0;
    uVar11 = uVar10;
    if (uVar12 <= uVar10) {
      uVar11 = uVar12;
    }
    uVar12 = uVar11;
    if (uVar11 < 2) {
      uVar12 = 1;
    }
    do {
      *(byte *)((long)&local_160 + uVar18 + ((ulong)(byte)local_130 - 0x160) + 0x160) =
           *(byte *)((long)&local_160 + uVar18 + ((ulong)(byte)local_130 - 0x160) + 0x160) ^
           *(byte *)(lVar15 + uVar18);
      uVar18 = uVar18 + 1;
    } while (uVar12 != uVar18);
    uVar17 = (local_130 & 0xff) + (int)uVar11;
    uVar18 = (ulong)uVar17;
    local_130._0_1_ = (char)uVar17;
    if ((uVar17 & 0xff) == 0x10) {
      auVar34._8_8_ = uStack_158;
      auVar34._0_8_ = local_160;
      uVar18 = 0x18;
      do {
        uVar80 = (uint)((ulong)uStack_150 >> 0x20);
        uVar83 = (uint)((ulong)uStack_148 >> 0x20);
        uVar17 = (uint)uVar18;
        iVar39 = auVar34._0_4_ * 0x1000000 + (auVar34._0_4_ >> 8);
        iVar44 = auVar34._4_4_ * 0x1000000 + (auVar34._4_4_ >> 8);
        iVar49 = auVar34._8_4_ * 0x1000000 + (auVar34._8_4_ >> 8);
        iVar54 = auVar34._12_4_ * 0x1000000 + (auVar34._12_4_ >> 8);
        iVar59 = (uint)uStack_150 * 0x200 + ((uint)uStack_150 >> 0x17);
        iVar64 = uVar80 * 0x200 + (uVar80 >> 0x17);
        iVar69 = (uint)uStack_148 * 0x200 + ((uint)uStack_148 >> 0x17);
        iVar74 = uVar83 * 0x200 + (uVar83 >> 0x17);
        bVar38 = (byte)iVar39;
        bVar58 = (byte)iVar59;
        bVar40 = (byte)((uint)iVar39 >> 8);
        bVar60 = (byte)((uint)iVar59 >> 8);
        bVar41 = (byte)((uint)iVar39 >> 0x10);
        bVar61 = (byte)((uint)iVar59 >> 0x10);
        bVar42 = (byte)((uint)iVar39 >> 0x18);
        bVar62 = (byte)((uint)iVar59 >> 0x18);
        iVar39 = CONCAT13(bVar42 & bVar62,
                          CONCAT12(bVar41 & bVar61,CONCAT11(bVar40 & bVar60,bVar38 & bVar58)));
        bVar43 = (byte)iVar44;
        bVar63 = (byte)iVar64;
        bVar45 = (byte)((uint)iVar44 >> 8);
        bVar65 = (byte)((uint)iVar64 >> 8);
        bVar46 = (byte)((uint)iVar44 >> 0x10);
        bVar66 = (byte)((uint)iVar64 >> 0x10);
        bVar47 = (byte)((uint)iVar44 >> 0x18);
        bVar67 = (byte)((uint)iVar64 >> 0x18);
        auVar28._0_8_ =
             CONCAT17(bVar47 & bVar67,
                      CONCAT16(bVar46 & bVar66,
                               CONCAT15(bVar45 & bVar65,CONCAT14(bVar43 & bVar63,iVar39))));
        bVar48 = (byte)iVar49;
        bVar68 = (byte)iVar69;
        auVar28[8] = bVar48 & bVar68;
        bVar50 = (byte)((uint)iVar49 >> 8);
        bVar70 = (byte)((uint)iVar69 >> 8);
        auVar28[9] = bVar50 & bVar70;
        bVar51 = (byte)((uint)iVar49 >> 0x10);
        bVar71 = (byte)((uint)iVar69 >> 0x10);
        auVar28[10] = bVar51 & bVar71;
        bVar52 = (byte)((uint)iVar49 >> 0x18);
        bVar72 = (byte)((uint)iVar69 >> 0x18);
        auVar28[0xb] = bVar52 & bVar72;
        bVar53 = (byte)iVar54;
        bVar73 = (byte)iVar74;
        auVar35[0xc] = bVar53 & bVar73;
        auVar35._0_12_ = auVar28;
        bVar55 = (byte)((uint)iVar54 >> 8);
        bVar75 = (byte)((uint)iVar74 >> 8);
        auVar35[0xd] = bVar55 & bVar75;
        bVar56 = (byte)((uint)iVar54 >> 0x10);
        bVar76 = (byte)((uint)iVar74 >> 0x10);
        auVar35[0xe] = bVar56 & bVar76;
        bVar57 = (byte)((uint)iVar54 >> 0x18);
        bVar77 = (byte)((uint)iVar74 >> 0x18);
        auVar35[0xf] = bVar57 & bVar77;
        bVar84 = (byte)local_140;
        bVar85 = (byte)((ulong)local_140 >> 8);
        bVar86 = (byte)((ulong)local_140 >> 0x10);
        bVar87 = (byte)((ulong)local_140 >> 0x18);
        bVar88 = (byte)((ulong)local_140 >> 0x20);
        bVar89 = (byte)((ulong)local_140 >> 0x28);
        bVar90 = (byte)((ulong)local_140 >> 0x30);
        bVar91 = (byte)((ulong)local_140 >> 0x38);
        bVar92 = (byte)uStack_138;
        bVar93 = (byte)((ulong)uStack_138 >> 8);
        bVar94 = (byte)((ulong)uStack_138 >> 0x10);
        bVar95 = (byte)((ulong)uStack_138 >> 0x18);
        bVar96 = (byte)((ulong)uStack_138 >> 0x20);
        bVar97 = (byte)((ulong)uStack_138 >> 0x28);
        bVar98 = (byte)((ulong)uStack_138 >> 0x30);
        bVar99 = (byte)((ulong)uStack_138 >> 0x38);
        iVar39 = iVar39 << 3;
        iVar44 = (int)((ulong)auVar28._0_8_ >> 0x20) << 3;
        iVar49 = auVar28._8_4_ << 3;
        iVar54 = auVar35._12_4_ << 3;
        auVar34._0_8_ =
             CONCAT17(bVar91 ^ bVar67 ^ (byte)((uint)iVar44 >> 0x18),
                      CONCAT16(bVar90 ^ bVar66 ^ (byte)((uint)iVar44 >> 0x10),
                               CONCAT15(bVar89 ^ bVar65 ^ (byte)((uint)iVar44 >> 8),
                                        CONCAT14(bVar88 ^ bVar63 ^ (byte)iVar44,
                                                 CONCAT13(bVar87 ^ bVar62 ^
                                                          (byte)((uint)iVar39 >> 0x18),
                                                          CONCAT12(bVar86 ^ bVar61 ^
                                                                   (byte)((uint)iVar39 >> 0x10),
                                                                   CONCAT11(bVar85 ^ bVar60 ^
                                                                            (byte)((uint)iVar39 >> 8
                                                                                  ),bVar84 ^ bVar58
                                                                                    ^ (byte)iVar39))
                                                         )))));
        auVar34[8] = bVar92 ^ bVar68 ^ (byte)iVar49;
        auVar34[9] = bVar93 ^ bVar70 ^ (byte)((uint)iVar49 >> 8);
        auVar34[10] = bVar94 ^ bVar71 ^ (byte)((uint)iVar49 >> 0x10);
        auVar34[0xb] = bVar95 ^ bVar72 ^ (byte)((uint)iVar49 >> 0x18);
        auVar34[0xc] = bVar96 ^ bVar73 ^ (byte)iVar54;
        auVar34[0xd] = bVar97 ^ bVar75 ^ (byte)((uint)iVar54 >> 8);
        auVar34[0xe] = bVar98 ^ bVar76 ^ (byte)((uint)iVar54 >> 0x10);
        auVar34[0xf] = bVar99 ^ bVar77 ^ (byte)((uint)iVar54 >> 0x18);
        if ((uVar17 & 3) == 2) {
          auVar34 = NEON_ext(auVar34,auVar34,8,1);
        }
        else if ((uVar18 & 3) == 0) {
          uVar18 = (ulong)auVar34._0_8_ >> 0x20;
          auVar31 = NEON_rev64(auVar34,4);
          auVar34._4_12_ = auVar31._4_12_;
          auVar34._0_4_ = (uint)uVar18 ^ (uVar17 | 0x9e377900);
        }
        iVar59 = (int)local_140 * 2;
        iVar64 = (int)((ulong)local_140 >> 0x20) * 2;
        iVar69 = (int)uStack_138 * 2;
        iVar74 = (int)((ulong)uStack_138 >> 0x20) * 2;
        uVar18 = (ulong)(uVar17 - 1);
        iVar79 = CONCAT13(bVar62 & bVar87,
                          CONCAT12(bVar61 & bVar86,CONCAT11(bVar60 & bVar85,bVar58 & bVar84)));
        iVar82 = CONCAT13(bVar72 & bVar95,
                          CONCAT12(bVar71 & bVar94,CONCAT11(bVar70 & bVar93,bVar68 & bVar92)));
        iVar39 = CONCAT13(bVar42 | bVar87,
                          CONCAT12(bVar41 | bVar86,CONCAT11(bVar40 | bVar85,bVar38 | bVar84))) * 2;
        iVar44 = CONCAT13(bVar47 | bVar91,
                          CONCAT12(bVar46 | bVar90,CONCAT11(bVar45 | bVar89,bVar43 | bVar88))) * 2;
        iVar49 = CONCAT13(bVar52 | bVar95,
                          CONCAT12(bVar51 | bVar94,CONCAT11(bVar50 | bVar93,bVar48 | bVar92))) * 2;
        iVar54 = CONCAT13(bVar57 | bVar99,
                          CONCAT12(bVar56 | bVar98,CONCAT11(bVar55 | bVar97,bVar53 | bVar96))) * 2;
        iVar78 = iVar79 << 2;
        iVar79 = (int)(CONCAT17(bVar67 & bVar91,
                                CONCAT16(bVar66 & bVar90,
                                         CONCAT15(bVar65 & bVar89,CONCAT14(bVar63 & bVar88,iVar79)))
                               ) >> 0x20) << 2;
        iVar81 = iVar82 << 2;
        iVar82 = (int)(CONCAT17(bVar77 & bVar99,
                                CONCAT16(bVar76 & bVar98,
                                         CONCAT15(bVar75 & bVar97,CONCAT14(bVar73 & bVar96,iVar82)))
                               ) >> 0x20) << 2;
        local_140 = CONCAT17((byte)((uint)iVar64 >> 0x18) ^ bVar47 ^ (byte)((uint)iVar79 >> 0x18),
                             CONCAT16((byte)((uint)iVar64 >> 0x10) ^ bVar46 ^
                                      (byte)((uint)iVar79 >> 0x10),
                                      CONCAT15((byte)((uint)iVar64 >> 8) ^ bVar45 ^
                                               (byte)((uint)iVar79 >> 8),
                                               CONCAT14((byte)iVar64 ^ bVar43 ^ (byte)iVar79,
                                                        CONCAT13((byte)((uint)iVar59 >> 0x18) ^
                                                                 bVar42 ^ (byte)((uint)iVar78 >>
                                                                                0x18),
                                                                 CONCAT12((byte)((uint)iVar59 >>
                                                                                0x10) ^ bVar41 ^
                                                                          (byte)((uint)iVar78 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((uint)
                                                  iVar59 >> 8) ^ bVar40 ^ (byte)((uint)iVar78 >> 8),
                                                  (byte)iVar59 ^ bVar38 ^ (byte)iVar78)))))));
        uStack_138 = CONCAT17((byte)((uint)iVar74 >> 0x18) ^ bVar57 ^ (byte)((uint)iVar82 >> 0x18),
                              CONCAT16((byte)((uint)iVar74 >> 0x10) ^ bVar56 ^
                                       (byte)((uint)iVar82 >> 0x10),
                                       CONCAT15((byte)((uint)iVar74 >> 8) ^ bVar55 ^
                                                (byte)((uint)iVar82 >> 8),
                                                CONCAT14((byte)iVar74 ^ bVar53 ^ (byte)iVar82,
                                                         CONCAT13((byte)((uint)iVar69 >> 0x18) ^
                                                                  bVar52 ^ (byte)((uint)iVar81 >>
                                                                                 0x18),
                                                                  CONCAT12((byte)((uint)iVar69 >>
                                                                                 0x10) ^ bVar51 ^
                                                                           (byte)((uint)iVar81 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)((uint)
                                                  iVar69 >> 8) ^ bVar50 ^ (byte)((uint)iVar81 >> 8),
                                                  (byte)iVar69 ^ bVar48 ^ (byte)iVar81)))))));
        uStack_150 = CONCAT17(bVar67 ^ bVar47 ^ (byte)((uint)iVar44 >> 0x18),
                              CONCAT16(bVar66 ^ bVar46 ^ (byte)((uint)iVar44 >> 0x10),
                                       CONCAT15(bVar65 ^ bVar45 ^ (byte)((uint)iVar44 >> 8),
                                                CONCAT14(bVar63 ^ bVar43 ^ (byte)iVar44,
                                                         CONCAT13(bVar62 ^ bVar42 ^
                                                                  (byte)((uint)iVar39 >> 0x18),
                                                                  CONCAT12(bVar61 ^ bVar41 ^
                                                                           (byte)((uint)iVar39 >>
                                                                                 0x10),
                                                                           CONCAT11(bVar60 ^ bVar40
                                                                                    ^ (byte)((uint)
                                                  iVar39 >> 8),bVar58 ^ bVar38 ^ (byte)iVar39)))))))
        ;
        uStack_148 = CONCAT17(bVar77 ^ bVar57 ^ (byte)((uint)iVar54 >> 0x18),
                              CONCAT16(bVar76 ^ bVar56 ^ (byte)((uint)iVar54 >> 0x10),
                                       CONCAT15(bVar75 ^ bVar55 ^ (byte)((uint)iVar54 >> 8),
                                                CONCAT14(bVar73 ^ bVar53 ^ (byte)iVar54,
                                                         CONCAT13(bVar72 ^ bVar52 ^
                                                                  (byte)((uint)iVar49 >> 0x18),
                                                                  CONCAT12(bVar71 ^ bVar51 ^
                                                                           (byte)((uint)iVar49 >>
                                                                                 0x10),
                                                                           CONCAT11(bVar70 ^ bVar50
                                                                                    ^ (byte)((uint)
                                                  iVar49 >> 8),bVar68 ^ bVar48 ^ (byte)iVar49)))))))
        ;
      } while (uVar17 - 1 != 0);
      uStack_158 = auVar34._8_8_;
      local_160 = auVar34._0_8_;
      local_130._0_1_ = 0;
    }
    uVar10 = uVar10 - uVar11;
    lVar15 = lVar15 + uVar11;
  } while (uVar10 != 0);
  puVar9 = local_1c0;
  uVar10 = 0x40;
  do {
    uVar12 = 0x10 - (uVar18 & 0xff);
    uVar18 = 0;
    uVar11 = uVar10;
    if (uVar12 <= uVar10) {
      uVar11 = uVar12;
    }
    uVar12 = uVar11;
    if (uVar11 < 2) {
      uVar12 = 1;
    }
    do {
      *(byte *)((long)&local_160 + uVar18 + ((ulong)(byte)local_130 - 0x160) + 0x160) =
           *(byte *)((long)&local_160 + uVar18 + ((ulong)(byte)local_130 - 0x160) + 0x160) ^
           puVar9[uVar18];
      uVar18 = uVar18 + 1;
    } while (uVar12 != uVar18);
    uVar17 = (local_130 & 0xff) + (int)uVar11;
    uVar18 = (ulong)uVar17;
    local_130._0_1_ = (char)uVar17;
    if ((uVar17 & 0xff) == 0x10) {
      auVar36._8_8_ = uStack_158;
      auVar36._0_8_ = local_160;
      uVar18 = 0x18;
      do {
        uVar80 = (uint)((ulong)uStack_150 >> 0x20);
        uVar83 = (uint)((ulong)uStack_148 >> 0x20);
        uVar17 = (uint)uVar18;
        iVar39 = auVar36._0_4_ * 0x1000000 + (auVar36._0_4_ >> 8);
        iVar44 = auVar36._4_4_ * 0x1000000 + (auVar36._4_4_ >> 8);
        iVar49 = auVar36._8_4_ * 0x1000000 + (auVar36._8_4_ >> 8);
        iVar54 = auVar36._12_4_ * 0x1000000 + (auVar36._12_4_ >> 8);
        iVar59 = (uint)uStack_150 * 0x200 + ((uint)uStack_150 >> 0x17);
        iVar64 = uVar80 * 0x200 + (uVar80 >> 0x17);
        iVar69 = (uint)uStack_148 * 0x200 + ((uint)uStack_148 >> 0x17);
        iVar74 = uVar83 * 0x200 + (uVar83 >> 0x17);
        bVar38 = (byte)iVar39;
        bVar58 = (byte)iVar59;
        bVar40 = (byte)((uint)iVar39 >> 8);
        bVar60 = (byte)((uint)iVar59 >> 8);
        bVar41 = (byte)((uint)iVar39 >> 0x10);
        bVar61 = (byte)((uint)iVar59 >> 0x10);
        bVar42 = (byte)((uint)iVar39 >> 0x18);
        bVar62 = (byte)((uint)iVar59 >> 0x18);
        iVar39 = CONCAT13(bVar42 & bVar62,
                          CONCAT12(bVar41 & bVar61,CONCAT11(bVar40 & bVar60,bVar38 & bVar58)));
        bVar43 = (byte)iVar44;
        bVar63 = (byte)iVar64;
        bVar45 = (byte)((uint)iVar44 >> 8);
        bVar65 = (byte)((uint)iVar64 >> 8);
        bVar46 = (byte)((uint)iVar44 >> 0x10);
        bVar66 = (byte)((uint)iVar64 >> 0x10);
        bVar47 = (byte)((uint)iVar44 >> 0x18);
        bVar67 = (byte)((uint)iVar64 >> 0x18);
        auVar29._0_8_ =
             CONCAT17(bVar47 & bVar67,
                      CONCAT16(bVar46 & bVar66,
                               CONCAT15(bVar45 & bVar65,CONCAT14(bVar43 & bVar63,iVar39))));
        bVar48 = (byte)iVar49;
        bVar68 = (byte)iVar69;
        auVar29[8] = bVar48 & bVar68;
        bVar50 = (byte)((uint)iVar49 >> 8);
        bVar70 = (byte)((uint)iVar69 >> 8);
        auVar29[9] = bVar50 & bVar70;
        bVar51 = (byte)((uint)iVar49 >> 0x10);
        bVar71 = (byte)((uint)iVar69 >> 0x10);
        auVar29[10] = bVar51 & bVar71;
        bVar52 = (byte)((uint)iVar49 >> 0x18);
        bVar72 = (byte)((uint)iVar69 >> 0x18);
        auVar29[0xb] = bVar52 & bVar72;
        bVar53 = (byte)iVar54;
        bVar73 = (byte)iVar74;
        auVar37[0xc] = bVar53 & bVar73;
        auVar37._0_12_ = auVar29;
        bVar55 = (byte)((uint)iVar54 >> 8);
        bVar75 = (byte)((uint)iVar74 >> 8);
        auVar37[0xd] = bVar55 & bVar75;
        bVar56 = (byte)((uint)iVar54 >> 0x10);
        bVar76 = (byte)((uint)iVar74 >> 0x10);
        auVar37[0xe] = bVar56 & bVar76;
        bVar57 = (byte)((uint)iVar54 >> 0x18);
        bVar77 = (byte)((uint)iVar74 >> 0x18);
        auVar37[0xf] = bVar57 & bVar77;
        bVar84 = (byte)local_140;
        bVar85 = (byte)((ulong)local_140 >> 8);
        bVar86 = (byte)((ulong)local_140 >> 0x10);
        bVar87 = (byte)((ulong)local_140 >> 0x18);
        bVar88 = (byte)((ulong)local_140 >> 0x20);
        bVar89 = (byte)((ulong)local_140 >> 0x28);
        bVar90 = (byte)((ulong)local_140 >> 0x30);
        bVar91 = (byte)((ulong)local_140 >> 0x38);
        bVar92 = (byte)uStack_138;
        bVar93 = (byte)((ulong)uStack_138 >> 8);
        bVar94 = (byte)((ulong)uStack_138 >> 0x10);
        bVar95 = (byte)((ulong)uStack_138 >> 0x18);
        bVar96 = (byte)((ulong)uStack_138 >> 0x20);
        bVar97 = (byte)((ulong)uStack_138 >> 0x28);
        bVar98 = (byte)((ulong)uStack_138 >> 0x30);
        bVar99 = (byte)((ulong)uStack_138 >> 0x38);
        iVar39 = iVar39 << 3;
        iVar44 = (int)((ulong)auVar29._0_8_ >> 0x20) << 3;
        iVar49 = auVar29._8_4_ << 3;
        iVar54 = auVar37._12_4_ << 3;
        auVar36._0_8_ =
             CONCAT17(bVar91 ^ bVar67 ^ (byte)((uint)iVar44 >> 0x18),
                      CONCAT16(bVar90 ^ bVar66 ^ (byte)((uint)iVar44 >> 0x10),
                               CONCAT15(bVar89 ^ bVar65 ^ (byte)((uint)iVar44 >> 8),
                                        CONCAT14(bVar88 ^ bVar63 ^ (byte)iVar44,
                                                 CONCAT13(bVar87 ^ bVar62 ^
                                                          (byte)((uint)iVar39 >> 0x18),
                                                          CONCAT12(bVar86 ^ bVar61 ^
                                                                   (byte)((uint)iVar39 >> 0x10),
                                                                   CONCAT11(bVar85 ^ bVar60 ^
                                                                            (byte)((uint)iVar39 >> 8
                                                                                  ),bVar84 ^ bVar58
                                                                                    ^ (byte)iVar39))
                                                         )))));
        auVar36[8] = bVar92 ^ bVar68 ^ (byte)iVar49;
        auVar36[9] = bVar93 ^ bVar70 ^ (byte)((uint)iVar49 >> 8);
        auVar36[10] = bVar94 ^ bVar71 ^ (byte)((uint)iVar49 >> 0x10);
        auVar36[0xb] = bVar95 ^ bVar72 ^ (byte)((uint)iVar49 >> 0x18);
        auVar36[0xc] = bVar96 ^ bVar73 ^ (byte)iVar54;
        auVar36[0xd] = bVar97 ^ bVar75 ^ (byte)((uint)iVar54 >> 8);
        auVar36[0xe] = bVar98 ^ bVar76 ^ (byte)((uint)iVar54 >> 0x10);
        auVar36[0xf] = bVar99 ^ bVar77 ^ (byte)((uint)iVar54 >> 0x18);
        if ((uVar17 & 3) == 2) {
          auVar36 = NEON_ext(auVar36,auVar36,8,1);
        }
        else if ((uVar18 & 3) == 0) {
          uVar18 = (ulong)auVar36._0_8_ >> 0x20;
          auVar31 = NEON_rev64(auVar36,4);
          auVar36._4_12_ = auVar31._4_12_;
          auVar36._0_4_ = (uint)uVar18 ^ (uVar17 | 0x9e377900);
        }
        iVar59 = (int)local_140 * 2;
        iVar64 = (int)((ulong)local_140 >> 0x20) * 2;
        iVar69 = (int)uStack_138 * 2;
        iVar74 = (int)((ulong)uStack_138 >> 0x20) * 2;
        uVar18 = (ulong)(uVar17 - 1);
        iVar79 = CONCAT13(bVar62 & bVar87,
                          CONCAT12(bVar61 & bVar86,CONCAT11(bVar60 & bVar85,bVar58 & bVar84)));
        iVar82 = CONCAT13(bVar72 & bVar95,
                          CONCAT12(bVar71 & bVar94,CONCAT11(bVar70 & bVar93,bVar68 & bVar92)));
        iVar39 = CONCAT13(bVar42 | bVar87,
                          CONCAT12(bVar41 | bVar86,CONCAT11(bVar40 | bVar85,bVar38 | bVar84))) * 2;
        iVar44 = CONCAT13(bVar47 | bVar91,
                          CONCAT12(bVar46 | bVar90,CONCAT11(bVar45 | bVar89,bVar43 | bVar88))) * 2;
        iVar49 = CONCAT13(bVar52 | bVar95,
                          CONCAT12(bVar51 | bVar94,CONCAT11(bVar50 | bVar93,bVar48 | bVar92))) * 2;
        iVar54 = CONCAT13(bVar57 | bVar99,
                          CONCAT12(bVar56 | bVar98,CONCAT11(bVar55 | bVar97,bVar53 | bVar96))) * 2;
        iVar78 = iVar79 << 2;
        iVar79 = (int)(CONCAT17(bVar67 & bVar91,
                                CONCAT16(bVar66 & bVar90,
                                         CONCAT15(bVar65 & bVar89,CONCAT14(bVar63 & bVar88,iVar79)))
                               ) >> 0x20) << 2;
        iVar81 = iVar82 << 2;
        iVar82 = (int)(CONCAT17(bVar77 & bVar99,
                                CONCAT16(bVar76 & bVar98,
                                         CONCAT15(bVar75 & bVar97,CONCAT14(bVar73 & bVar96,iVar82)))
                               ) >> 0x20) << 2;
        local_140 = CONCAT17((byte)((uint)iVar64 >> 0x18) ^ bVar47 ^ (byte)((uint)iVar79 >> 0x18),
                             CONCAT16((byte)((uint)iVar64 >> 0x10) ^ bVar46 ^
                                      (byte)((uint)iVar79 >> 0x10),
                                      CONCAT15((byte)((uint)iVar64 >> 8) ^ bVar45 ^
                                               (byte)((uint)iVar79 >> 8),
                                               CONCAT14((byte)iVar64 ^ bVar43 ^ (byte)iVar79,
                                                        CONCAT13((byte)((uint)iVar59 >> 0x18) ^
                                                                 bVar42 ^ (byte)((uint)iVar78 >>
                                                                                0x18),
                                                                 CONCAT12((byte)((uint)iVar59 >>
                                                                                0x10) ^ bVar41 ^
                                                                          (byte)((uint)iVar78 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((uint)
                                                  iVar59 >> 8) ^ bVar40 ^ (byte)((uint)iVar78 >> 8),
                                                  (byte)iVar59 ^ bVar38 ^ (byte)iVar78)))))));
        uStack_138 = CONCAT17((byte)((uint)iVar74 >> 0x18) ^ bVar57 ^ (byte)((uint)iVar82 >> 0x18),
                              CONCAT16((byte)((uint)iVar74 >> 0x10) ^ bVar56 ^
                                       (byte)((uint)iVar82 >> 0x10),
                                       CONCAT15((byte)((uint)iVar74 >> 8) ^ bVar55 ^
                                                (byte)((uint)iVar82 >> 8),
                                                CONCAT14((byte)iVar74 ^ bVar53 ^ (byte)iVar82,
                                                         CONCAT13((byte)((uint)iVar69 >> 0x18) ^
                                                                  bVar52 ^ (byte)((uint)iVar81 >>
                                                                                 0x18),
                                                                  CONCAT12((byte)((uint)iVar69 >>
                                                                                 0x10) ^ bVar51 ^
                                                                           (byte)((uint)iVar81 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)((uint)
                                                  iVar69 >> 8) ^ bVar50 ^ (byte)((uint)iVar81 >> 8),
                                                  (byte)iVar69 ^ bVar48 ^ (byte)iVar81)))))));
        uStack_150 = CONCAT17(bVar67 ^ bVar47 ^ (byte)((uint)iVar44 >> 0x18),
                              CONCAT16(bVar66 ^ bVar46 ^ (byte)((uint)iVar44 >> 0x10),
                                       CONCAT15(bVar65 ^ bVar45 ^ (byte)((uint)iVar44 >> 8),
                                                CONCAT14(bVar63 ^ bVar43 ^ (byte)iVar44,
                                                         CONCAT13(bVar62 ^ bVar42 ^
                                                                  (byte)((uint)iVar39 >> 0x18),
                                                                  CONCAT12(bVar61 ^ bVar41 ^
                                                                           (byte)((uint)iVar39 >>
                                                                                 0x10),
                                                                           CONCAT11(bVar60 ^ bVar40
                                                                                    ^ (byte)((uint)
                                                  iVar39 >> 8),bVar58 ^ bVar38 ^ (byte)iVar39)))))))
        ;
        uStack_148 = CONCAT17(bVar77 ^ bVar57 ^ (byte)((uint)iVar54 >> 0x18),
                              CONCAT16(bVar76 ^ bVar56 ^ (byte)((uint)iVar54 >> 0x10),
                                       CONCAT15(bVar75 ^ bVar55 ^ (byte)((uint)iVar54 >> 8),
                                                CONCAT14(bVar73 ^ bVar53 ^ (byte)iVar54,
                                                         CONCAT13(bVar72 ^ bVar52 ^
                                                                  (byte)((uint)iVar49 >> 0x18),
                                                                  CONCAT12(bVar71 ^ bVar51 ^
                                                                           (byte)((uint)iVar49 >>
                                                                                 0x10),
                                                                           CONCAT11(bVar70 ^ bVar50
                                                                                    ^ (byte)((uint)
                                                  iVar49 >> 8),bVar68 ^ bVar48 ^ (byte)iVar49)))))))
        ;
      } while (uVar17 - 1 != 0);
      uStack_158 = auVar36._8_8_;
      local_160 = auVar36._0_8_;
      local_130._0_1_ = 0;
    }
    uVar10 = uVar10 - uVar11;
    puVar9 = puVar9 + uVar11;
  } while (uVar10 != 0);
  hydro_hash_final(&local_160,auStack_180,0x20);
  FUN_004fd6cc(&local_128,auStack_180,param_3);
  FUN_004fd6cc(auStack_e8,param_2 + 4,&DAT_002536a8);
  local_160 = *param_2;
  uStack_158 = param_2[1];
  uStack_148 = param_2[3];
  uStack_150 = param_2[2];
  uStack_a0 = CONCAT26(uStack_11a,uStack_120);
  local_a8 = CONCAT26(uStack_122,CONCAT24(uStack_124,local_128));
  local_1c8 = 0x10;
  local_98 = CONCAT26(uStack_112,uStack_118);
  uStack_90 = CONCAT26(uStack_10a,uStack_110);
  uStack_80 = CONCAT26(uStack_fa,uStack_100);
  local_88 = CONCAT26(local_102,uStack_108);
  local_78 = CONCAT26(uStack_f2,uStack_f8);
  uStack_70 = uStack_f0;
  FUN_004fd96c(auStack_e8);
  FUN_004fddac(&local_c8,&local_128,&local_c8,4);
  FUN_004fddac(&local_c8,&uStack_108,&local_c8,4);
  FUN_004fddac(&local_c8,&local_160,&local_c8,4);
  FUN_004fddac(&local_c8,&local_c8,&local_1c8,1);
  FUN_004fddac(&local_88,&local_160,&local_88,4);
  uVar10 = (local_88 - local_a8) - 0x4c;
  uVar18 = (-1 - (ulong)(local_88 < local_a8)) + (ulong)(0x4b < local_88 - local_a8);
  lVar15 = (long)uVar18 >> 0x3f;
  if (CARRY8(uVar18,uStack_80)) {
    lVar15 = lVar15 + 1;
  }
  uVar12 = (uVar18 + uStack_80) - uStack_a0;
  uVar11 = lVar15 - (ulong)(uVar18 + uStack_80 < uStack_a0);
  uVar18 = (local_78 - local_98) + uVar11;
  uVar14 = (((long)uVar11 >> 0x3f) - (ulong)(local_78 < local_98)) +
           (ulong)CARRY8(local_78 - local_98,uVar11);
  uVar11 = (uStack_70 - uStack_90) + uVar14;
  uVar14 = (uVar11 >> 0x3f |
           ((((long)uVar14 >> 0x3f) - (ulong)(uStack_70 < uStack_90)) +
            (ulong)CARRY8(uStack_70 - uStack_90,uVar14) + 2) * 2) * 0x13;
  local_88 = uVar14 + uVar10;
  bVar5 = CARRY8(uVar12,(ulong)CARRY8(uVar14,uVar10));
  uStack_80 = uVar12 + CARRY8(uVar14,uVar10);
  uStack_70 = uVar11 & 0x7fffffffffffffff;
  local_78 = uVar18 + bVar5;
  if (CARRY8(uVar18,(ulong)bVar5)) {
    uStack_70 = uStack_70 + 1;
  }
  FUN_004fddac(&local_88,&local_88,&local_88,4);
  uVar10 = (local_88 - local_c8) - 0x4c;
  uVar18 = (-1 - (ulong)(local_88 < local_c8)) + (ulong)(0x4b < local_88 - local_c8);
  lVar15 = (long)uVar18 >> 0x3f;
  if (CARRY8(uVar18,uStack_80)) {
    lVar15 = lVar15 + 1;
  }
  uVar14 = (uVar18 + uStack_80) - uStack_c0;
  uVar11 = lVar15 - (ulong)(uVar18 + uStack_80 < uStack_c0);
  uVar18 = (local_78 - local_b8) + uVar11;
  uVar19 = (((long)uVar11 >> 0x3f) - (ulong)(local_78 < local_b8)) +
           (ulong)CARRY8(local_78 - local_b8,uVar11);
  uVar11 = (uStack_70 - uStack_b0) + uVar19;
  uVar12 = uVar11 & 0x7fffffffffffffff;
  uVar19 = (uVar11 >> 0x3f |
           ((((long)uVar19 >> 0x3f) - (ulong)(uStack_70 < uStack_b0)) +
            (ulong)CARRY8(uStack_70 - uStack_b0,uVar19) + 2) * 2) * 0x13;
  uVar11 = (ulong)(0xffffffffffffffec < uVar19 + uVar10);
  bVar5 = CARRY8(uVar14,uVar11) || CARRY8(uVar14 + uVar11,(ulong)CARRY8(uVar19,uVar10));
  uVar11 = uVar14 + uVar11 + (ulong)CARRY8(uVar19,uVar10);
  uVar10 = uVar19 + uVar10 + 0x13;
  if (CARRY8(uVar18,(ulong)bVar5)) {
    uVar12 = uVar12 + 1;
  }
  uVar14 = local_c8 + 0x13;
  uVar21 = (ulong)(0xffffffffffffffec < local_c8);
  uVar19 = uStack_c0 + uVar21;
  uVar22 = (long)uVar12 >> 0x3f & 0x13;
  bVar1 = CARRY8(local_b8,(ulong)CARRY8(uStack_c0,uVar21));
  local_b8 = local_b8 + CARRY8(uStack_c0,uVar21);
  uVar24 = uStack_b0 + bVar1;
  uVar21 = uVar11 + CARRY8(uVar10,uVar22);
  uVar16 = uVar18 + bVar5 + (ulong)CARRY8(uVar11,(ulong)CARRY8(uVar10,uVar22));
  uVar2 = nzcv;
  uVar25 = (uVar24 >> 0x3f | (ulong)CARRY8(uStack_b0,(ulong)bVar1) << 1) * 0x13;
  uVar11 = (ulong)(0x12 < uVar10 + uVar22) - 1;
  uVar18 = (long)uVar11 >> 0x3f;
  if (CARRY8(uVar11,uVar21)) {
    uVar18 = uVar18 + 1;
  }
  lVar15 = (long)uVar18 >> 0x3f;
  if (CARRY8(uVar18,uVar16)) {
    lVar15 = lVar15 + 1;
  }
  bVar5 = CARRY8(uVar19,(ulong)CARRY8(uVar14,uVar25));
  uVar19 = uVar19 + CARRY8(uVar14,uVar25);
  uVar20 = local_b8 + bVar5;
  uVar3 = nzcv;
  nzcv = uVar2;
  uVar23 = (ulong)(0x12 < uVar14 + uVar25) - 1;
  uVar6 = (long)uVar23 >> 0x3f;
  if (CARRY8(uVar23,uVar19)) {
    uVar6 = uVar6 + 1;
  }
  lVar7 = (long)uVar6 >> 0x3f;
  if (CARRY8(uVar6,uVar20)) {
    lVar7 = lVar7 + 1;
  }
  nzcv = uVar3;
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (lVar7 + (uVar24 & 0x7fffffffffffffff) + (ulong)CARRY8(uVar6,uVar20) != 0 ||
         ((uVar23 + uVar19 != 0 || uVar14 + uVar25 != 0x13) || uVar6 + uVar20 != 0)) - 1 |
         (lVar15 + (uVar12 & 0x7fffffffffffffff) + (ulong)CARRY8(local_b8,(ulong)bVar5) != 0 ||
         ((uVar11 + uVar21 != 0 || uVar10 + uVar22 != 0x13) || uVar18 + uVar16 != 0)) - 1 ^
         0xffffffff;
}


// ===== 004fd6cc  FUN_004fd6cc =====

void FUN_004fd6cc(ulong *param_1,long param_2,ulong *param_3)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  ulong uVar12;
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
  ulong uVar27;
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
  byte bVar47;
  byte bVar48;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  ulong uVar49;
  byte bVar56;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  ulong uVar57;
  byte bVar64;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  ulong uVar65;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  ulong uVar121;
  byte bVar128;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  ulong uVar129;
  byte bVar136;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  byte bVar142;
  byte bVar143;
  ulong uVar137;
  byte bVar144;
  byte bVar146;
  byte bVar147;
  byte bVar148;
  byte bVar149;
  byte bVar150;
  byte bVar151;
  ulong uVar145;
  byte bVar152;
  byte bVar154;
  byte bVar155;
  byte bVar156;
  byte bVar157;
  byte bVar158;
  byte bVar159;
  ulong uVar153;
  byte bVar160;
  byte bVar162;
  byte bVar163;
  byte bVar164;
  byte bVar165;
  byte bVar166;
  byte bVar167;
  ulong uVar161;
  byte bVar168;
  byte bVar170;
  byte bVar171;
  byte bVar172;
  byte bVar173;
  byte bVar174;
  byte bVar175;
  ulong uVar169;
  byte bVar176;
  byte bVar178;
  byte bVar179;
  byte bVar180;
  byte bVar181;
  byte bVar182;
  byte bVar183;
  ulong uVar177;
  byte bVar184;
  byte bVar185;
  byte bVar186;
  byte bVar187;
  byte bVar188;
  byte bVar189;
  byte bVar190;
  byte bVar191;
  byte bVar192;
  byte bVar193;
  byte bVar194;
  byte bVar195;
  byte bVar196;
  byte bVar197;
  byte bVar198;
  byte bVar199;
  byte bVar200;
  ulong local_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar10 = 0xff;
  uStack_78 = param_3[1];
  local_80 = *param_3;
  uStack_68 = param_3[3];
  uStack_70 = param_3[2];
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  puVar9 = param_1 + 0xc;
  *puVar9 = 1;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  *param_1 = 1;
  param_1[9] = uStack_78;
  param_1[8] = local_80;
  param_1[0xb] = uStack_68;
  param_1[10] = uStack_70;
  uVar4 = 0;
  do {
    uVar5 = param_1[9];
    uVar12 = param_1[8];
    uVar65 = param_1[0xb];
    uVar57 = param_1[10];
    uVar6 = param_1[1];
    uVar27 = *param_1;
    uVar49 = param_1[3];
    uVar7 = param_1[2];
    uVar129 = param_1[0xd];
    uVar121 = param_1[0xc];
    uVar177 = param_1[0xf];
    uVar169 = param_1[0xe];
    uVar145 = param_1[5];
    uVar137 = param_1[4];
    uVar161 = param_1[7];
    uVar153 = param_1[6];
    bVar13 = (byte)(uVar12 >> 8);
    bVar28 = (byte)(uVar27 >> 8);
    bVar14 = (byte)(uVar12 >> 0x10);
    bVar29 = (byte)(uVar27 >> 0x10);
    bVar15 = (byte)(uVar12 >> 0x18);
    bVar30 = (byte)(uVar27 >> 0x18);
    bVar16 = (byte)(uVar12 >> 0x20);
    bVar31 = (byte)(uVar27 >> 0x20);
    bVar17 = (byte)(uVar12 >> 0x28);
    bVar32 = (byte)(uVar27 >> 0x28);
    bVar18 = (byte)(uVar12 >> 0x30);
    bVar33 = (byte)(uVar27 >> 0x30);
    bVar19 = (byte)(uVar12 >> 0x38);
    bVar34 = (byte)(uVar27 >> 0x38);
    bVar20 = (byte)(uVar5 >> 8);
    bVar35 = (byte)(uVar6 >> 8);
    bVar21 = (byte)(uVar5 >> 0x10);
    bVar36 = (byte)(uVar6 >> 0x10);
    bVar22 = (byte)(uVar5 >> 0x18);
    bVar37 = (byte)(uVar6 >> 0x18);
    bVar23 = (byte)(uVar5 >> 0x20);
    bVar38 = (byte)(uVar6 >> 0x20);
    bVar24 = (byte)(uVar5 >> 0x28);
    bVar39 = (byte)(uVar6 >> 0x28);
    bVar25 = (byte)(uVar5 >> 0x30);
    bVar40 = (byte)(uVar6 >> 0x30);
    bVar26 = (byte)(uVar5 >> 0x38);
    bVar41 = (byte)(uVar6 >> 0x38);
    bVar42 = (byte)(uVar7 >> 8);
    bVar58 = (byte)(uVar57 >> 8);
    bVar43 = (byte)(uVar7 >> 0x10);
    bVar59 = (byte)(uVar57 >> 0x10);
    bVar44 = (byte)(uVar7 >> 0x18);
    bVar60 = (byte)(uVar57 >> 0x18);
    bVar45 = (byte)(uVar7 >> 0x20);
    bVar61 = (byte)(uVar57 >> 0x20);
    bVar46 = (byte)(uVar7 >> 0x28);
    bVar62 = (byte)(uVar57 >> 0x28);
    bVar47 = (byte)(uVar7 >> 0x30);
    bVar63 = (byte)(uVar57 >> 0x30);
    bVar48 = (byte)(uVar7 >> 0x38);
    bVar64 = (byte)(uVar57 >> 0x38);
    bVar50 = (byte)(uVar49 >> 8);
    bVar66 = (byte)(uVar65 >> 8);
    bVar51 = (byte)(uVar49 >> 0x10);
    bVar67 = (byte)(uVar65 >> 0x10);
    bVar52 = (byte)(uVar49 >> 0x18);
    bVar68 = (byte)(uVar65 >> 0x18);
    bVar53 = (byte)(uVar49 >> 0x20);
    bVar69 = (byte)(uVar65 >> 0x20);
    bVar54 = (byte)(uVar49 >> 0x28);
    bVar70 = (byte)(uVar65 >> 0x28);
    bVar55 = (byte)(uVar49 >> 0x30);
    bVar71 = (byte)(uVar65 >> 0x30);
    bVar56 = (byte)(uVar49 >> 0x38);
    bVar72 = (byte)(uVar65 >> 0x38);
    bVar122 = (byte)(uVar121 >> 8);
    bVar138 = (byte)(uVar137 >> 8);
    bVar123 = (byte)(uVar121 >> 0x10);
    bVar139 = (byte)(uVar137 >> 0x10);
    bVar124 = (byte)(uVar121 >> 0x18);
    bVar140 = (byte)(uVar137 >> 0x18);
    bVar125 = (byte)(uVar121 >> 0x20);
    bVar141 = (byte)(uVar137 >> 0x20);
    bVar126 = (byte)(uVar121 >> 0x28);
    bVar142 = (byte)(uVar137 >> 0x28);
    bVar127 = (byte)(uVar121 >> 0x30);
    bVar143 = (byte)(uVar137 >> 0x30);
    bVar128 = (byte)(uVar121 >> 0x38);
    bVar144 = (byte)(uVar137 >> 0x38);
    bVar130 = (byte)(uVar129 >> 8);
    bVar146 = (byte)(uVar145 >> 8);
    bVar131 = (byte)(uVar129 >> 0x10);
    bVar147 = (byte)(uVar145 >> 0x10);
    bVar132 = (byte)(uVar129 >> 0x18);
    bVar148 = (byte)(uVar145 >> 0x18);
    bVar133 = (byte)(uVar129 >> 0x20);
    bVar149 = (byte)(uVar145 >> 0x20);
    bVar134 = (byte)(uVar129 >> 0x28);
    bVar150 = (byte)(uVar145 >> 0x28);
    bVar135 = (byte)(uVar129 >> 0x30);
    bVar151 = (byte)(uVar145 >> 0x30);
    bVar136 = (byte)(uVar129 >> 0x38);
    bVar152 = (byte)(uVar145 >> 0x38);
    bVar154 = (byte)(uVar153 >> 8);
    bVar170 = (byte)(uVar169 >> 8);
    bVar155 = (byte)(uVar153 >> 0x10);
    bVar171 = (byte)(uVar169 >> 0x10);
    bVar156 = (byte)(uVar153 >> 0x18);
    bVar172 = (byte)(uVar169 >> 0x18);
    bVar157 = (byte)(uVar153 >> 0x20);
    bVar173 = (byte)(uVar169 >> 0x20);
    bVar158 = (byte)(uVar153 >> 0x28);
    bVar174 = (byte)(uVar169 >> 0x28);
    bVar159 = (byte)(uVar153 >> 0x30);
    bVar175 = (byte)(uVar169 >> 0x30);
    bVar160 = (byte)(uVar153 >> 0x38);
    bVar176 = (byte)(uVar169 >> 0x38);
    bVar162 = (byte)(uVar161 >> 8);
    bVar178 = (byte)(uVar177 >> 8);
    bVar163 = (byte)(uVar161 >> 0x10);
    bVar179 = (byte)(uVar177 >> 0x10);
    bVar164 = (byte)(uVar161 >> 0x18);
    bVar180 = (byte)(uVar177 >> 0x18);
    bVar165 = (byte)(uVar161 >> 0x20);
    bVar181 = (byte)(uVar177 >> 0x20);
    bVar166 = (byte)(uVar161 >> 0x28);
    bVar182 = (byte)(uVar177 >> 0x28);
    bVar167 = (byte)(uVar161 >> 0x30);
    bVar183 = (byte)(uVar177 >> 0x30);
    bVar168 = (byte)(uVar161 >> 0x38);
    bVar184 = (byte)(uVar177 >> 0x38);
    uVar11 = -((ulong)(*(byte *)(param_2 + (uVar10 >> 3)) >> (uVar10 & 7)) & 1);
    uVar4 = uVar4 ^ uVar11;
    bVar97 = (byte)uVar4;
    bVar73 = ((byte)uVar12 ^ (byte)uVar27) & bVar97;
    bVar98 = (byte)(uVar4 >> 8);
    bVar74 = (bVar13 ^ bVar28) & bVar98;
    bVar99 = (byte)(uVar4 >> 0x10);
    bVar75 = (bVar14 ^ bVar29) & bVar99;
    bVar100 = (byte)(uVar4 >> 0x18);
    bVar76 = (bVar15 ^ bVar30) & bVar100;
    bVar101 = (byte)(uVar4 >> 0x20);
    bVar77 = (bVar16 ^ bVar31) & bVar101;
    bVar102 = (byte)(uVar4 >> 0x28);
    bVar78 = (bVar17 ^ bVar32) & bVar102;
    bVar103 = (byte)(uVar4 >> 0x30);
    bVar79 = (bVar18 ^ bVar33) & bVar103;
    bVar104 = (byte)(uVar4 >> 0x38);
    bVar80 = (bVar19 ^ bVar34) & bVar104;
    bVar81 = ((byte)uVar5 ^ (byte)uVar6) & bVar97;
    bVar82 = (bVar20 ^ bVar35) & bVar98;
    bVar83 = (bVar21 ^ bVar36) & bVar99;
    bVar84 = (bVar22 ^ bVar37) & bVar100;
    bVar85 = (bVar23 ^ bVar38) & bVar101;
    bVar86 = (bVar24 ^ bVar39) & bVar102;
    bVar87 = (bVar25 ^ bVar40) & bVar103;
    bVar88 = (bVar26 ^ bVar41) & bVar104;
    bVar105 = ((byte)uVar57 ^ (byte)uVar7) & bVar97;
    bVar106 = (bVar58 ^ bVar42) & bVar98;
    bVar107 = (bVar59 ^ bVar43) & bVar99;
    bVar108 = (bVar60 ^ bVar44) & bVar100;
    bVar109 = (bVar61 ^ bVar45) & bVar101;
    bVar110 = (bVar62 ^ bVar46) & bVar102;
    bVar111 = (bVar63 ^ bVar47) & bVar103;
    bVar112 = (bVar64 ^ bVar48) & bVar104;
    bVar113 = ((byte)uVar65 ^ (byte)uVar49) & bVar97;
    bVar114 = (bVar66 ^ bVar50) & bVar98;
    bVar115 = (bVar67 ^ bVar51) & bVar99;
    bVar116 = (bVar68 ^ bVar52) & bVar100;
    bVar117 = (bVar69 ^ bVar53) & bVar101;
    bVar118 = (bVar70 ^ bVar54) & bVar102;
    bVar119 = (bVar71 ^ bVar55) & bVar103;
    bVar120 = (bVar72 ^ bVar56) & bVar104;
    bVar185 = ((byte)uVar121 ^ (byte)uVar137) & bVar97;
    bVar186 = (bVar122 ^ bVar138) & bVar98;
    bVar187 = (bVar123 ^ bVar139) & bVar99;
    bVar188 = (bVar124 ^ bVar140) & bVar100;
    bVar189 = (bVar125 ^ bVar141) & bVar101;
    bVar190 = (bVar126 ^ bVar142) & bVar102;
    bVar191 = (bVar127 ^ bVar143) & bVar103;
    bVar192 = (bVar128 ^ bVar144) & bVar104;
    bVar193 = ((byte)uVar129 ^ (byte)uVar145) & bVar97;
    bVar194 = (bVar130 ^ bVar146) & bVar98;
    bVar195 = (bVar131 ^ bVar147) & bVar99;
    bVar196 = (bVar132 ^ bVar148) & bVar100;
    bVar197 = (bVar133 ^ bVar149) & bVar101;
    bVar198 = (bVar134 ^ bVar150) & bVar102;
    bVar199 = (bVar135 ^ bVar151) & bVar103;
    bVar200 = (bVar136 ^ bVar152) & bVar104;
    bVar89 = ((byte)uVar169 ^ (byte)uVar153) & bVar97;
    bVar90 = (bVar170 ^ bVar154) & bVar98;
    bVar91 = (bVar171 ^ bVar155) & bVar99;
    bVar92 = (bVar172 ^ bVar156) & bVar100;
    bVar93 = (bVar173 ^ bVar157) & bVar101;
    bVar94 = (bVar174 ^ bVar158) & bVar102;
    bVar95 = (bVar175 ^ bVar159) & bVar103;
    bVar96 = (bVar176 ^ bVar160) & bVar104;
    bVar97 = ((byte)uVar177 ^ (byte)uVar161) & bVar97;
    bVar98 = (bVar178 ^ bVar162) & bVar98;
    bVar99 = (bVar179 ^ bVar163) & bVar99;
    bVar100 = (bVar180 ^ bVar164) & bVar100;
    bVar101 = (bVar181 ^ bVar165) & bVar101;
    bVar102 = (bVar182 ^ bVar166) & bVar102;
    bVar103 = (bVar183 ^ bVar167) & bVar103;
    bVar104 = (bVar184 ^ bVar168) & bVar104;
    param_1[1] = CONCAT17(bVar88 ^ bVar41,
                          CONCAT16(bVar87 ^ bVar40,
                                   CONCAT15(bVar86 ^ bVar39,
                                            CONCAT14(bVar85 ^ bVar38,
                                                     CONCAT13(bVar84 ^ bVar37,
                                                              CONCAT12(bVar83 ^ bVar36,
                                                                       CONCAT11(bVar82 ^ bVar35,
                                                                                bVar81 ^ (byte)uVar6
                                                                               )))))));
    *param_1 = CONCAT17(bVar80 ^ bVar34,
                        CONCAT16(bVar79 ^ bVar33,
                                 CONCAT15(bVar78 ^ bVar32,
                                          CONCAT14(bVar77 ^ bVar31,
                                                   CONCAT13(bVar76 ^ bVar30,
                                                            CONCAT12(bVar75 ^ bVar29,
                                                                     CONCAT11(bVar74 ^ bVar28,
                                                                              bVar73 ^ (byte)uVar27)
                                                                    ))))));
    param_1[3] = CONCAT17(bVar120 ^ bVar56,
                          CONCAT16(bVar119 ^ bVar55,
                                   CONCAT15(bVar118 ^ bVar54,
                                            CONCAT14(bVar117 ^ bVar53,
                                                     CONCAT13(bVar116 ^ bVar52,
                                                              CONCAT12(bVar115 ^ bVar51,
                                                                       CONCAT11(bVar114 ^ bVar50,
                                                                                bVar113 ^ (byte)
                                                  uVar49)))))));
    param_1[2] = CONCAT17(bVar112 ^ bVar48,
                          CONCAT16(bVar111 ^ bVar47,
                                   CONCAT15(bVar110 ^ bVar46,
                                            CONCAT14(bVar109 ^ bVar45,
                                                     CONCAT13(bVar108 ^ bVar44,
                                                              CONCAT12(bVar107 ^ bVar43,
                                                                       CONCAT11(bVar106 ^ bVar42,
                                                                                bVar105 ^ (byte)
                                                  uVar7)))))));
    param_1[9] = CONCAT17(bVar88 ^ bVar26,
                          CONCAT16(bVar87 ^ bVar25,
                                   CONCAT15(bVar86 ^ bVar24,
                                            CONCAT14(bVar85 ^ bVar23,
                                                     CONCAT13(bVar84 ^ bVar22,
                                                              CONCAT12(bVar83 ^ bVar21,
                                                                       CONCAT11(bVar82 ^ bVar20,
                                                                                bVar81 ^ (byte)uVar5
                                                                               )))))));
    param_1[8] = CONCAT17(bVar80 ^ bVar19,
                          CONCAT16(bVar79 ^ bVar18,
                                   CONCAT15(bVar78 ^ bVar17,
                                            CONCAT14(bVar77 ^ bVar16,
                                                     CONCAT13(bVar76 ^ bVar15,
                                                              CONCAT12(bVar75 ^ bVar14,
                                                                       CONCAT11(bVar74 ^ bVar13,
                                                                                bVar73 ^ (byte)
                                                  uVar12)))))));
    param_1[0xb] = CONCAT17(bVar120 ^ bVar72,
                            CONCAT16(bVar119 ^ bVar71,
                                     CONCAT15(bVar118 ^ bVar70,
                                              CONCAT14(bVar117 ^ bVar69,
                                                       CONCAT13(bVar116 ^ bVar68,
                                                                CONCAT12(bVar115 ^ bVar67,
                                                                         CONCAT11(bVar114 ^ bVar66,
                                                                                  bVar113 ^ (byte)
                                                  uVar65)))))));
    param_1[10] = CONCAT17(bVar112 ^ bVar64,
                           CONCAT16(bVar111 ^ bVar63,
                                    CONCAT15(bVar110 ^ bVar62,
                                             CONCAT14(bVar109 ^ bVar61,
                                                      CONCAT13(bVar108 ^ bVar60,
                                                               CONCAT12(bVar107 ^ bVar59,
                                                                        CONCAT11(bVar106 ^ bVar58,
                                                                                 bVar105 ^ (byte)
                                                  uVar57)))))));
    param_1[5] = CONCAT17(bVar200 ^ bVar152,
                          CONCAT16(bVar199 ^ bVar151,
                                   CONCAT15(bVar198 ^ bVar150,
                                            CONCAT14(bVar197 ^ bVar149,
                                                     CONCAT13(bVar196 ^ bVar148,
                                                              CONCAT12(bVar195 ^ bVar147,
                                                                       CONCAT11(bVar194 ^ bVar146,
                                                                                bVar193 ^ (byte)
                                                  uVar145)))))));
    param_1[4] = CONCAT17(bVar192 ^ bVar144,
                          CONCAT16(bVar191 ^ bVar143,
                                   CONCAT15(bVar190 ^ bVar142,
                                            CONCAT14(bVar189 ^ bVar141,
                                                     CONCAT13(bVar188 ^ bVar140,
                                                              CONCAT12(bVar187 ^ bVar139,
                                                                       CONCAT11(bVar186 ^ bVar138,
                                                                                bVar185 ^ (byte)
                                                  uVar137)))))));
    param_1[7] = CONCAT17(bVar104 ^ bVar168,
                          CONCAT16(bVar103 ^ bVar167,
                                   CONCAT15(bVar102 ^ bVar166,
                                            CONCAT14(bVar101 ^ bVar165,
                                                     CONCAT13(bVar100 ^ bVar164,
                                                              CONCAT12(bVar99 ^ bVar163,
                                                                       CONCAT11(bVar98 ^ bVar162,
                                                                                bVar97 ^ (byte)
                                                  uVar161)))))));
    param_1[6] = CONCAT17(bVar96 ^ bVar160,
                          CONCAT16(bVar95 ^ bVar159,
                                   CONCAT15(bVar94 ^ bVar158,
                                            CONCAT14(bVar93 ^ bVar157,
                                                     CONCAT13(bVar92 ^ bVar156,
                                                              CONCAT12(bVar91 ^ bVar155,
                                                                       CONCAT11(bVar90 ^ bVar154,
                                                                                bVar89 ^ (byte)
                                                  uVar153)))))));
    param_1[0xd] = CONCAT17(bVar200 ^ bVar136,
                            CONCAT16(bVar199 ^ bVar135,
                                     CONCAT15(bVar198 ^ bVar134,
                                              CONCAT14(bVar197 ^ bVar133,
                                                       CONCAT13(bVar196 ^ bVar132,
                                                                CONCAT12(bVar195 ^ bVar131,
                                                                         CONCAT11(bVar194 ^ bVar130,
                                                                                  bVar193 ^ (byte)
                                                  uVar129)))))));
    param_1[0xc] = CONCAT17(bVar192 ^ bVar128,
                            CONCAT16(bVar191 ^ bVar127,
                                     CONCAT15(bVar190 ^ bVar126,
                                              CONCAT14(bVar189 ^ bVar125,
                                                       CONCAT13(bVar188 ^ bVar124,
                                                                CONCAT12(bVar187 ^ bVar123,
                                                                         CONCAT11(bVar186 ^ bVar122,
                                                                                  bVar185 ^ (byte)
                                                  uVar121)))))));
    param_1[0xf] = CONCAT17(bVar104 ^ bVar184,
                            CONCAT16(bVar103 ^ bVar183,
                                     CONCAT15(bVar102 ^ bVar182,
                                              CONCAT14(bVar101 ^ bVar181,
                                                       CONCAT13(bVar100 ^ bVar180,
                                                                CONCAT12(bVar99 ^ bVar179,
                                                                         CONCAT11(bVar98 ^ bVar178,
                                                                                  bVar97 ^ (byte)
                                                  uVar177)))))));
    param_1[0xe] = CONCAT17(bVar96 ^ bVar176,
                            CONCAT16(bVar95 ^ bVar175,
                                     CONCAT15(bVar94 ^ bVar174,
                                              CONCAT14(bVar93 ^ bVar173,
                                                       CONCAT13(bVar92 ^ bVar172,
                                                                CONCAT12(bVar91 ^ bVar171,
                                                                         CONCAT11(bVar90 ^ bVar170,
                                                                                  bVar89 ^ (byte)
                                                  uVar169)))))));
    FUN_004fd96c(param_1);
    uStack_98 = uStack_78;
    local_a0 = local_80;
    uStack_88 = uStack_68;
    uStack_90 = uStack_70;
    FUN_004fddac(puVar9,puVar9,puVar9,4);
    FUN_004fddac(puVar9,&local_a0,puVar9,4);
    FUN_004fddac(param_1 + 8,param_1 + 8,param_1 + 8,4);
    FUN_004fddac(param_1 + 4,param_1,param_1 + 4,4);
    uVar4 = param_1[0x10] - *param_1;
    uVar12 = uVar4 - 0x4c;
    uVar5 = (-1 - (ulong)(param_1[0x10] < *param_1)) + (ulong)(0x4b < uVar4);
    lVar8 = (long)uVar5 >> 0x3f;
    uVar4 = uVar5 + param_1[0x11];
    if (CARRY8(uVar5,param_1[0x11])) {
      lVar8 = lVar8 + 1;
    }
    uVar27 = uVar4 - param_1[1];
    uVar6 = lVar8 - (ulong)(uVar4 < param_1[1]);
    uVar5 = param_1[0x12] - param_1[2];
    uVar4 = uVar5 + uVar6;
    uVar7 = (((long)uVar6 >> 0x3f) - (ulong)(param_1[0x12] < param_1[2])) +
            (ulong)CARRY8(uVar5,uVar6);
    uVar6 = param_1[0x13] - param_1[3];
    uVar5 = uVar6 + uVar7;
    uVar6 = (uVar5 >> 0x3f |
            ((((long)uVar7 >> 0x3f) - (ulong)(param_1[0x13] < param_1[3])) +
             (ulong)CARRY8(uVar6,uVar7) + 2) * 2) * 0x13;
    bVar1 = CARRY8(uVar27,(ulong)CARRY8(uVar6,uVar12));
    *param_1 = uVar6 + uVar12;
    param_1[1] = uVar27 + CARRY8(uVar6,uVar12);
    uVar5 = uVar5 & 0x7fffffffffffffff;
    if (CARRY8(uVar4,(ulong)bVar1)) {
      uVar5 = uVar5 + 1;
    }
    param_1[2] = uVar4 + bVar1;
    param_1[3] = uVar5;
    FUN_004fddac(param_1,param_1 + 0x10,param_1,4);
    uVar2 = (int)uVar10 - 1;
    uVar10 = (ulong)uVar2;
    uVar4 = uVar11;
  } while (uVar2 != 0xffffffff);
  uVar10 = param_1[9];
  uVar4 = param_1[8];
  uVar49 = param_1[0xb];
  uVar7 = param_1[10];
  uVar5 = param_1[1];
  uVar12 = *param_1;
  uVar6 = param_1[3];
  uVar27 = param_1[2];
  uVar65 = param_1[0xd];
  uVar57 = param_1[0xc];
  uVar161 = param_1[0xf];
  uVar153 = param_1[0xe];
  uVar129 = param_1[5];
  uVar121 = param_1[4];
  uVar145 = param_1[7];
  uVar137 = param_1[6];
  bVar13 = (byte)(uVar4 >> 8);
  bVar28 = (byte)(uVar12 >> 8);
  bVar14 = (byte)(uVar4 >> 0x10);
  bVar29 = (byte)(uVar12 >> 0x10);
  bVar15 = (byte)(uVar4 >> 0x18);
  bVar30 = (byte)(uVar12 >> 0x18);
  bVar16 = (byte)(uVar4 >> 0x20);
  bVar31 = (byte)(uVar12 >> 0x20);
  bVar17 = (byte)(uVar4 >> 0x28);
  bVar32 = (byte)(uVar12 >> 0x28);
  bVar18 = (byte)(uVar4 >> 0x30);
  bVar33 = (byte)(uVar12 >> 0x30);
  bVar19 = (byte)(uVar4 >> 0x38);
  bVar34 = (byte)(uVar12 >> 0x38);
  bVar20 = (byte)(uVar10 >> 8);
  bVar35 = (byte)(uVar5 >> 8);
  bVar21 = (byte)(uVar10 >> 0x10);
  bVar36 = (byte)(uVar5 >> 0x10);
  bVar22 = (byte)(uVar10 >> 0x18);
  bVar37 = (byte)(uVar5 >> 0x18);
  bVar23 = (byte)(uVar10 >> 0x20);
  bVar38 = (byte)(uVar5 >> 0x20);
  bVar24 = (byte)(uVar10 >> 0x28);
  bVar39 = (byte)(uVar5 >> 0x28);
  bVar25 = (byte)(uVar10 >> 0x30);
  bVar40 = (byte)(uVar5 >> 0x30);
  bVar26 = (byte)(uVar10 >> 0x38);
  bVar41 = (byte)(uVar5 >> 0x38);
  bVar42 = (byte)(uVar27 >> 8);
  bVar58 = (byte)(uVar7 >> 8);
  bVar43 = (byte)(uVar27 >> 0x10);
  bVar59 = (byte)(uVar7 >> 0x10);
  bVar44 = (byte)(uVar27 >> 0x18);
  bVar60 = (byte)(uVar7 >> 0x18);
  bVar45 = (byte)(uVar27 >> 0x20);
  bVar61 = (byte)(uVar7 >> 0x20);
  bVar46 = (byte)(uVar27 >> 0x28);
  bVar62 = (byte)(uVar7 >> 0x28);
  bVar47 = (byte)(uVar27 >> 0x30);
  bVar63 = (byte)(uVar7 >> 0x30);
  bVar48 = (byte)(uVar27 >> 0x38);
  bVar64 = (byte)(uVar7 >> 0x38);
  bVar50 = (byte)(uVar6 >> 8);
  bVar66 = (byte)(uVar49 >> 8);
  bVar51 = (byte)(uVar6 >> 0x10);
  bVar67 = (byte)(uVar49 >> 0x10);
  bVar52 = (byte)(uVar6 >> 0x18);
  bVar68 = (byte)(uVar49 >> 0x18);
  bVar53 = (byte)(uVar6 >> 0x20);
  bVar69 = (byte)(uVar49 >> 0x20);
  bVar54 = (byte)(uVar6 >> 0x28);
  bVar70 = (byte)(uVar49 >> 0x28);
  bVar55 = (byte)(uVar6 >> 0x30);
  bVar71 = (byte)(uVar49 >> 0x30);
  bVar56 = (byte)(uVar6 >> 0x38);
  bVar72 = (byte)(uVar49 >> 0x38);
  bVar122 = (byte)(uVar57 >> 8);
  bVar138 = (byte)(uVar121 >> 8);
  bVar123 = (byte)(uVar57 >> 0x10);
  bVar139 = (byte)(uVar121 >> 0x10);
  bVar124 = (byte)(uVar57 >> 0x18);
  bVar140 = (byte)(uVar121 >> 0x18);
  bVar125 = (byte)(uVar57 >> 0x20);
  bVar141 = (byte)(uVar121 >> 0x20);
  bVar126 = (byte)(uVar57 >> 0x28);
  bVar142 = (byte)(uVar121 >> 0x28);
  bVar127 = (byte)(uVar57 >> 0x30);
  bVar143 = (byte)(uVar121 >> 0x30);
  bVar128 = (byte)(uVar57 >> 0x38);
  bVar144 = (byte)(uVar121 >> 0x38);
  bVar130 = (byte)(uVar65 >> 8);
  bVar146 = (byte)(uVar129 >> 8);
  bVar131 = (byte)(uVar65 >> 0x10);
  bVar147 = (byte)(uVar129 >> 0x10);
  bVar132 = (byte)(uVar65 >> 0x18);
  bVar148 = (byte)(uVar129 >> 0x18);
  bVar133 = (byte)(uVar65 >> 0x20);
  bVar149 = (byte)(uVar129 >> 0x20);
  bVar134 = (byte)(uVar65 >> 0x28);
  bVar150 = (byte)(uVar129 >> 0x28);
  bVar135 = (byte)(uVar65 >> 0x30);
  bVar151 = (byte)(uVar129 >> 0x30);
  bVar136 = (byte)(uVar65 >> 0x38);
  bVar152 = (byte)(uVar129 >> 0x38);
  bVar154 = (byte)(uVar137 >> 8);
  bVar170 = (byte)(uVar153 >> 8);
  bVar155 = (byte)(uVar137 >> 0x10);
  bVar171 = (byte)(uVar153 >> 0x10);
  bVar156 = (byte)(uVar137 >> 0x18);
  bVar172 = (byte)(uVar153 >> 0x18);
  bVar157 = (byte)(uVar137 >> 0x20);
  bVar173 = (byte)(uVar153 >> 0x20);
  bVar158 = (byte)(uVar137 >> 0x28);
  bVar174 = (byte)(uVar153 >> 0x28);
  bVar159 = (byte)(uVar137 >> 0x30);
  bVar175 = (byte)(uVar153 >> 0x30);
  bVar160 = (byte)(uVar137 >> 0x38);
  bVar176 = (byte)(uVar153 >> 0x38);
  bVar162 = (byte)(uVar145 >> 8);
  bVar178 = (byte)(uVar161 >> 8);
  bVar163 = (byte)(uVar145 >> 0x10);
  bVar179 = (byte)(uVar161 >> 0x10);
  bVar164 = (byte)(uVar145 >> 0x18);
  bVar180 = (byte)(uVar161 >> 0x18);
  bVar165 = (byte)(uVar145 >> 0x20);
  bVar181 = (byte)(uVar161 >> 0x20);
  bVar166 = (byte)(uVar145 >> 0x28);
  bVar182 = (byte)(uVar161 >> 0x28);
  bVar167 = (byte)(uVar145 >> 0x30);
  bVar183 = (byte)(uVar161 >> 0x30);
  bVar168 = (byte)(uVar145 >> 0x38);
  bVar184 = (byte)(uVar161 >> 0x38);
  bVar73 = (byte)uVar11;
  bVar97 = ((byte)uVar4 ^ (byte)uVar12) & bVar73;
  bVar75 = (byte)(uVar11 >> 8);
  bVar89 = (bVar13 ^ bVar28) & bVar75;
  bVar77 = (byte)(uVar11 >> 0x10);
  bVar98 = (bVar14 ^ bVar29) & bVar77;
  bVar79 = (byte)(uVar11 >> 0x18);
  bVar90 = (bVar15 ^ bVar30) & bVar79;
  bVar81 = (byte)(uVar11 >> 0x20);
  bVar99 = (bVar16 ^ bVar31) & bVar81;
  bVar83 = (byte)(uVar11 >> 0x28);
  bVar91 = (bVar17 ^ bVar32) & bVar83;
  bVar85 = (byte)(uVar11 >> 0x30);
  bVar100 = (bVar18 ^ bVar33) & bVar85;
  bVar87 = (byte)(uVar11 >> 0x38);
  bVar92 = (bVar19 ^ bVar34) & bVar87;
  bVar101 = ((byte)uVar10 ^ (byte)uVar5) & bVar73;
  bVar93 = (bVar20 ^ bVar35) & bVar75;
  bVar102 = (bVar21 ^ bVar36) & bVar77;
  bVar94 = (bVar22 ^ bVar37) & bVar79;
  bVar103 = (bVar23 ^ bVar38) & bVar81;
  bVar95 = (bVar24 ^ bVar39) & bVar83;
  bVar104 = (bVar25 ^ bVar40) & bVar85;
  bVar96 = (bVar26 ^ bVar41) & bVar87;
  bVar105 = ((byte)uVar7 ^ (byte)uVar27) & bVar73;
  bVar106 = (bVar58 ^ bVar42) & bVar75;
  bVar107 = (bVar59 ^ bVar43) & bVar77;
  bVar108 = (bVar60 ^ bVar44) & bVar79;
  bVar109 = (bVar61 ^ bVar45) & bVar81;
  bVar110 = (bVar62 ^ bVar46) & bVar83;
  bVar111 = (bVar63 ^ bVar47) & bVar85;
  bVar112 = (bVar64 ^ bVar48) & bVar87;
  bVar113 = ((byte)uVar49 ^ (byte)uVar6) & bVar73;
  bVar114 = (bVar66 ^ bVar50) & bVar75;
  bVar115 = (bVar67 ^ bVar51) & bVar77;
  bVar116 = (bVar68 ^ bVar52) & bVar79;
  bVar117 = (bVar69 ^ bVar53) & bVar81;
  bVar118 = (bVar70 ^ bVar54) & bVar83;
  bVar119 = (bVar71 ^ bVar55) & bVar85;
  bVar120 = (bVar72 ^ bVar56) & bVar87;
  bVar185 = ((byte)uVar57 ^ (byte)uVar121) & bVar73;
  bVar186 = (bVar122 ^ bVar138) & bVar75;
  bVar187 = (bVar123 ^ bVar139) & bVar77;
  bVar188 = (bVar124 ^ bVar140) & bVar79;
  bVar189 = (bVar125 ^ bVar141) & bVar81;
  bVar190 = (bVar126 ^ bVar142) & bVar83;
  bVar191 = (bVar127 ^ bVar143) & bVar85;
  bVar192 = (bVar128 ^ bVar144) & bVar87;
  bVar193 = ((byte)uVar65 ^ (byte)uVar129) & bVar73;
  bVar194 = (bVar130 ^ bVar146) & bVar75;
  bVar195 = (bVar131 ^ bVar147) & bVar77;
  bVar196 = (bVar132 ^ bVar148) & bVar79;
  bVar197 = (bVar133 ^ bVar149) & bVar81;
  bVar198 = (bVar134 ^ bVar150) & bVar83;
  bVar199 = (bVar135 ^ bVar151) & bVar85;
  bVar200 = (bVar136 ^ bVar152) & bVar87;
  bVar74 = ((byte)uVar153 ^ (byte)uVar137) & bVar73;
  bVar76 = (bVar170 ^ bVar154) & bVar75;
  bVar78 = (bVar171 ^ bVar155) & bVar77;
  bVar80 = (bVar172 ^ bVar156) & bVar79;
  bVar82 = (bVar173 ^ bVar157) & bVar81;
  bVar84 = (bVar174 ^ bVar158) & bVar83;
  bVar86 = (bVar175 ^ bVar159) & bVar85;
  bVar88 = (bVar176 ^ bVar160) & bVar87;
  bVar73 = ((byte)uVar161 ^ (byte)uVar145) & bVar73;
  bVar75 = (bVar178 ^ bVar162) & bVar75;
  bVar77 = (bVar179 ^ bVar163) & bVar77;
  bVar79 = (bVar180 ^ bVar164) & bVar79;
  bVar81 = (bVar181 ^ bVar165) & bVar81;
  bVar83 = (bVar182 ^ bVar166) & bVar83;
  bVar85 = (bVar183 ^ bVar167) & bVar85;
  bVar87 = (bVar184 ^ bVar168) & bVar87;
  param_1[1] = CONCAT17(bVar96 ^ bVar41,
                        CONCAT16(bVar104 ^ bVar40,
                                 CONCAT15(bVar95 ^ bVar39,
                                          CONCAT14(bVar103 ^ bVar38,
                                                   CONCAT13(bVar94 ^ bVar37,
                                                            CONCAT12(bVar102 ^ bVar36,
                                                                     CONCAT11(bVar93 ^ bVar35,
                                                                              bVar101 ^ (byte)uVar5)
                                                                    ))))));
  *param_1 = CONCAT17(bVar92 ^ bVar34,
                      CONCAT16(bVar100 ^ bVar33,
                               CONCAT15(bVar91 ^ bVar32,
                                        CONCAT14(bVar99 ^ bVar31,
                                                 CONCAT13(bVar90 ^ bVar30,
                                                          CONCAT12(bVar98 ^ bVar29,
                                                                   CONCAT11(bVar89 ^ bVar28,
                                                                            bVar97 ^ (byte)uVar12)))
                                                ))));
  param_1[3] = CONCAT17(bVar120 ^ bVar56,
                        CONCAT16(bVar119 ^ bVar55,
                                 CONCAT15(bVar118 ^ bVar54,
                                          CONCAT14(bVar117 ^ bVar53,
                                                   CONCAT13(bVar116 ^ bVar52,
                                                            CONCAT12(bVar115 ^ bVar51,
                                                                     CONCAT11(bVar114 ^ bVar50,
                                                                              bVar113 ^ (byte)uVar6)
                                                                    ))))));
  param_1[2] = CONCAT17(bVar112 ^ bVar48,
                        CONCAT16(bVar111 ^ bVar47,
                                 CONCAT15(bVar110 ^ bVar46,
                                          CONCAT14(bVar109 ^ bVar45,
                                                   CONCAT13(bVar108 ^ bVar44,
                                                            CONCAT12(bVar107 ^ bVar43,
                                                                     CONCAT11(bVar106 ^ bVar42,
                                                                              bVar105 ^ (byte)uVar27
                                                                             )))))));
  param_1[9] = CONCAT17(bVar96 ^ bVar26,
                        CONCAT16(bVar104 ^ bVar25,
                                 CONCAT15(bVar95 ^ bVar24,
                                          CONCAT14(bVar103 ^ bVar23,
                                                   CONCAT13(bVar94 ^ bVar22,
                                                            CONCAT12(bVar102 ^ bVar21,
                                                                     CONCAT11(bVar93 ^ bVar20,
                                                                              bVar101 ^ (byte)uVar10
                                                                             )))))));
  param_1[8] = CONCAT17(bVar92 ^ bVar19,
                        CONCAT16(bVar100 ^ bVar18,
                                 CONCAT15(bVar91 ^ bVar17,
                                          CONCAT14(bVar99 ^ bVar16,
                                                   CONCAT13(bVar90 ^ bVar15,
                                                            CONCAT12(bVar98 ^ bVar14,
                                                                     CONCAT11(bVar89 ^ bVar13,
                                                                              bVar97 ^ (byte)uVar4))
                                                           )))));
  param_1[0xb] = CONCAT17(bVar120 ^ bVar72,
                          CONCAT16(bVar119 ^ bVar71,
                                   CONCAT15(bVar118 ^ bVar70,
                                            CONCAT14(bVar117 ^ bVar69,
                                                     CONCAT13(bVar116 ^ bVar68,
                                                              CONCAT12(bVar115 ^ bVar67,
                                                                       CONCAT11(bVar114 ^ bVar66,
                                                                                bVar113 ^ (byte)
                                                  uVar49)))))));
  param_1[10] = CONCAT17(bVar112 ^ bVar64,
                         CONCAT16(bVar111 ^ bVar63,
                                  CONCAT15(bVar110 ^ bVar62,
                                           CONCAT14(bVar109 ^ bVar61,
                                                    CONCAT13(bVar108 ^ bVar60,
                                                             CONCAT12(bVar107 ^ bVar59,
                                                                      CONCAT11(bVar106 ^ bVar58,
                                                                               bVar105 ^ (byte)uVar7
                                                                              )))))));
  param_1[5] = CONCAT17(bVar200 ^ bVar152,
                        CONCAT16(bVar199 ^ bVar151,
                                 CONCAT15(bVar198 ^ bVar150,
                                          CONCAT14(bVar197 ^ bVar149,
                                                   CONCAT13(bVar196 ^ bVar148,
                                                            CONCAT12(bVar195 ^ bVar147,
                                                                     CONCAT11(bVar194 ^ bVar146,
                                                                              bVar193 ^ (byte)
                                                  uVar129)))))));
  param_1[4] = CONCAT17(bVar192 ^ bVar144,
                        CONCAT16(bVar191 ^ bVar143,
                                 CONCAT15(bVar190 ^ bVar142,
                                          CONCAT14(bVar189 ^ bVar141,
                                                   CONCAT13(bVar188 ^ bVar140,
                                                            CONCAT12(bVar187 ^ bVar139,
                                                                     CONCAT11(bVar186 ^ bVar138,
                                                                              bVar185 ^ (byte)
                                                  uVar121)))))));
  param_1[7] = CONCAT17(bVar87 ^ bVar168,
                        CONCAT16(bVar85 ^ bVar167,
                                 CONCAT15(bVar83 ^ bVar166,
                                          CONCAT14(bVar81 ^ bVar165,
                                                   CONCAT13(bVar79 ^ bVar164,
                                                            CONCAT12(bVar77 ^ bVar163,
                                                                     CONCAT11(bVar75 ^ bVar162,
                                                                              bVar73 ^ (byte)uVar145
                                                                             )))))));
  param_1[6] = CONCAT17(bVar88 ^ bVar160,
                        CONCAT16(bVar86 ^ bVar159,
                                 CONCAT15(bVar84 ^ bVar158,
                                          CONCAT14(bVar82 ^ bVar157,
                                                   CONCAT13(bVar80 ^ bVar156,
                                                            CONCAT12(bVar78 ^ bVar155,
                                                                     CONCAT11(bVar76 ^ bVar154,
                                                                              bVar74 ^ (byte)uVar137
                                                                             )))))));
  param_1[0xd] = CONCAT17(bVar200 ^ bVar136,
                          CONCAT16(bVar199 ^ bVar135,
                                   CONCAT15(bVar198 ^ bVar134,
                                            CONCAT14(bVar197 ^ bVar133,
                                                     CONCAT13(bVar196 ^ bVar132,
                                                              CONCAT12(bVar195 ^ bVar131,
                                                                       CONCAT11(bVar194 ^ bVar130,
                                                                                bVar193 ^ (byte)
                                                  uVar65)))))));
  param_1[0xc] = CONCAT17(bVar192 ^ bVar128,
                          CONCAT16(bVar191 ^ bVar127,
                                   CONCAT15(bVar190 ^ bVar126,
                                            CONCAT14(bVar189 ^ bVar125,
                                                     CONCAT13(bVar188 ^ bVar124,
                                                              CONCAT12(bVar187 ^ bVar123,
                                                                       CONCAT11(bVar186 ^ bVar122,
                                                                                bVar185 ^ (byte)
                                                  uVar57)))))));
  param_1[0xf] = CONCAT17(bVar87 ^ bVar184,
                          CONCAT16(bVar85 ^ bVar183,
                                   CONCAT15(bVar83 ^ bVar182,
                                            CONCAT14(bVar81 ^ bVar181,
                                                     CONCAT13(bVar79 ^ bVar180,
                                                              CONCAT12(bVar77 ^ bVar179,
                                                                       CONCAT11(bVar75 ^ bVar178,
                                                                                bVar73 ^ (byte)
                                                  uVar161)))))));
  param_1[0xe] = CONCAT17(bVar88 ^ bVar176,
                          CONCAT16(bVar86 ^ bVar175,
                                   CONCAT15(bVar84 ^ bVar174,
                                            CONCAT14(bVar82 ^ bVar173,
                                                     CONCAT13(bVar80 ^ bVar172,
                                                              CONCAT12(bVar78 ^ bVar171,
                                                                       CONCAT11(bVar76 ^ bVar170,
                                                                                bVar74 ^ (byte)
                                                  uVar153)))))));
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004fd96c  FUN_004fd96c =====

void FUN_004fd96c(ulong *param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong uVar22;
  
  uVar4 = *param_1;
  uVar18 = param_1[1];
  puVar19 = param_1 + 4;
  uVar17 = *puVar19;
  uVar5 = param_1[5];
  uVar2 = param_1[6];
  uVar15 = uVar17 + uVar4;
  uVar12 = param_1[2];
  uVar13 = param_1[3];
  uVar8 = uVar18 + CARRY8(uVar17,uVar4);
  uVar14 = param_1[7];
  uVar7 = param_1[8];
  uVar10 = (ulong)CARRY8(uVar18,(ulong)CARRY8(uVar17,uVar4));
  uVar9 = uVar8 + uVar5;
  uVar11 = uVar12 + uVar10 + (ulong)CARRY8(uVar8,uVar5);
  uVar6 = param_1[0xb];
  uVar8 = (ulong)(CARRY8(uVar12,uVar10) || CARRY8(uVar12 + uVar10,(ulong)CARRY8(uVar8,uVar5)));
  uVar22 = param_1[0xf];
  uVar16 = uVar13 + uVar8 + (ulong)CARRY8(uVar11,uVar2);
  uVar10 = (ulong)(CARRY8(uVar13,uVar8) || CARRY8(uVar13 + uVar8,(ulong)CARRY8(uVar11,uVar2)));
  uVar8 = uVar16 + uVar14;
  if (CARRY8(uVar16,uVar14)) {
    uVar10 = uVar10 + 1;
  }
  uVar10 = (uVar8 >> 0x3f | uVar10 << 1) * 0x13;
  bVar1 = CARRY8(uVar9,(ulong)CARRY8(uVar10,uVar15));
  uVar8 = uVar8 & 0x7fffffffffffffff;
  if (CARRY8(uVar11 + uVar2,(ulong)bVar1)) {
    uVar8 = uVar8 + 1;
  }
  param_1[0x11] = uVar9 + CARRY8(uVar10,uVar15);
  param_1[0x12] = uVar11 + uVar2 + (ulong)bVar1;
  uVar9 = (uVar4 - uVar17) - 0x4c;
  param_1[0x13] = uVar8;
  uVar8 = (-1 - (ulong)(uVar4 < uVar17)) + (ulong)(0x4b < uVar4 - uVar17);
  lVar3 = (long)uVar8 >> 0x3f;
  if (CARRY8(uVar8,uVar18)) {
    lVar3 = lVar3 + 1;
  }
  uVar4 = (uVar8 + uVar18) - uVar5;
  uVar8 = lVar3 - (ulong)(uVar8 + uVar18 < uVar5);
  lVar3 = (long)uVar8 >> 0x3f;
  if (CARRY8(uVar8,uVar12)) {
    lVar3 = lVar3 + 1;
  }
  uVar5 = (uVar8 + uVar12) - uVar2;
  uVar12 = lVar3 - (ulong)(uVar8 + uVar12 < uVar2);
  lVar3 = (long)uVar12 >> 0x3f;
  puVar21 = param_1 + 0xc;
  uVar8 = *puVar21;
  if (CARRY8(uVar12,uVar13)) {
    lVar3 = lVar3 + 1;
  }
  uVar16 = (uVar12 + uVar13) - uVar14;
  uVar18 = uVar16 & 0x7fffffffffffffff;
  uVar2 = param_1[0xd];
  uVar11 = param_1[0xe];
  uVar13 = (uVar16 >> 0x3f | ((lVar3 - (ulong)(uVar12 + uVar13 < uVar14)) + 2) * 2) * 0x13;
  bVar1 = CARRY8(uVar4,(ulong)CARRY8(uVar13,uVar9));
  *puVar19 = uVar13 + uVar9;
  uVar12 = param_1[9];
  uVar14 = param_1[10];
  if (CARRY8(uVar5,(ulong)bVar1)) {
    uVar18 = uVar18 + 1;
  }
  uVar16 = uVar8 + uVar7;
  param_1[5] = uVar4 + CARRY8(uVar13,uVar9);
  param_1[6] = uVar5 + bVar1;
  param_1[7] = uVar18;
  uVar4 = uVar12 + CARRY8(uVar8,uVar7);
  uVar5 = (ulong)CARRY8(uVar12,(ulong)CARRY8(uVar8,uVar7));
  uVar9 = uVar4 + uVar2;
  uVar18 = uVar14 + uVar5 + (ulong)CARRY8(uVar4,uVar2);
  uVar4 = (ulong)(CARRY8(uVar14,uVar5) || CARRY8(uVar14 + uVar5,(ulong)CARRY8(uVar4,uVar2)));
  uVar13 = uVar6 + uVar4 + (ulong)CARRY8(uVar18,uVar11);
  uVar5 = (ulong)(CARRY8(uVar6,uVar4) || CARRY8(uVar6 + uVar4,(ulong)CARRY8(uVar18,uVar11)));
  uVar4 = uVar13 + uVar22;
  if (CARRY8(uVar13,uVar22)) {
    uVar5 = uVar5 + 1;
  }
  uVar13 = uVar4 & 0x7fffffffffffffff;
  uVar4 = (uVar4 >> 0x3f | uVar5 << 1) * 0x13;
  bVar1 = CARRY8(uVar9,(ulong)CARRY8(uVar4,uVar16));
  *param_1 = uVar4 + uVar16;
  param_1[1] = uVar9 + CARRY8(uVar4,uVar16);
  if (CARRY8(uVar18 + uVar11,(ulong)bVar1)) {
    uVar13 = uVar13 + 1;
  }
  uVar9 = (uVar7 - uVar8) - 0x4c;
  param_1[2] = uVar18 + uVar11 + (ulong)bVar1;
  param_1[3] = uVar13;
  uVar8 = (-1 - (ulong)(uVar7 < uVar8)) + (ulong)(0x4b < uVar7 - uVar8);
  lVar3 = (long)uVar8 >> 0x3f;
  if (CARRY8(uVar8,uVar12)) {
    lVar3 = lVar3 + 1;
  }
  uVar4 = (uVar8 + uVar12) - uVar2;
  uVar8 = lVar3 - (ulong)(uVar8 + uVar12 < uVar2);
  puVar20 = param_1 + 0x10;
  *puVar20 = uVar10 + uVar15;
  lVar3 = (long)uVar8 >> 0x3f;
  if (CARRY8(uVar8,uVar14)) {
    lVar3 = lVar3 + 1;
  }
  uVar15 = (uVar8 + uVar14) - uVar11;
  uVar8 = lVar3 - (ulong)(uVar8 + uVar14 < uVar11);
  lVar3 = (long)uVar8 >> 0x3f;
  if (CARRY8(uVar8,uVar6)) {
    lVar3 = lVar3 + 1;
  }
  uVar5 = (uVar8 + uVar6) - uVar22;
  uVar10 = uVar5 & 0x7fffffffffffffff;
  uVar8 = (uVar5 >> 0x3f | ((lVar3 - (ulong)(uVar8 + uVar6 < uVar22)) + 2) * 2) * 0x13;
  *puVar21 = uVar8 + uVar9;
  bVar1 = CARRY8(uVar4,(ulong)CARRY8(uVar8,uVar9));
  param_1[0xd] = uVar4 + CARRY8(uVar8,uVar9);
  param_1[0xe] = uVar15 + bVar1;
  if (CARRY8(uVar15,(ulong)bVar1)) {
    uVar10 = uVar10 + 1;
  }
  param_1[0xf] = uVar10;
  FUN_004fddac(puVar21,puVar20,puVar21,4);
  FUN_004fddac(param_1,puVar19,param_1,4);
  uVar4 = *param_1;
  uVar14 = param_1[1];
  uVar7 = *puVar21;
  uVar5 = param_1[0xd];
  uVar18 = param_1[0xe];
  uVar12 = param_1[2];
  uVar2 = param_1[3];
  uVar11 = param_1[0xf];
  uVar15 = uVar4 + uVar7;
  uVar8 = uVar5 + CARRY8(uVar4,uVar7);
  uVar10 = (ulong)CARRY8(uVar5,(ulong)CARRY8(uVar4,uVar7));
  uVar9 = uVar8 + uVar14;
  uVar6 = uVar18 + uVar10 + (ulong)CARRY8(uVar8,uVar14);
  uVar8 = (ulong)(CARRY8(uVar18,uVar10) || CARRY8(uVar18 + uVar10,(ulong)CARRY8(uVar8,uVar14)));
  uVar13 = uVar11 + uVar8 + (ulong)CARRY8(uVar6,uVar12);
  uVar10 = (ulong)(CARRY8(uVar11,uVar8) || CARRY8(uVar11 + uVar8,(ulong)CARRY8(uVar6,uVar12)));
  uVar8 = uVar13 + uVar2;
  if (CARRY8(uVar13,uVar2)) {
    uVar10 = uVar10 + 1;
  }
  uVar13 = uVar8 & 0x7fffffffffffffff;
  uVar8 = (uVar8 >> 0x3f | uVar10 << 1) * 0x13;
  bVar1 = CARRY8(uVar9,(ulong)CARRY8(uVar8,uVar15));
  param_1[8] = uVar8 + uVar15;
  param_1[9] = uVar9 + CARRY8(uVar8,uVar15);
  if (CARRY8(uVar6 + uVar12,(ulong)bVar1)) {
    uVar13 = uVar13 + 1;
  }
  uVar15 = (uVar7 - uVar4) - 0x4c;
  param_1[10] = uVar6 + uVar12 + (ulong)bVar1;
  param_1[0xb] = uVar13;
  uVar9 = (-1 - (ulong)(uVar7 < uVar4)) + (ulong)(0x4b < uVar7 - uVar4);
  lVar3 = (long)uVar9 >> 0x3f;
  if (CARRY8(uVar9,uVar5)) {
    lVar3 = lVar3 + 1;
  }
  uVar8 = (uVar9 + uVar5) - uVar14;
  uVar9 = lVar3 - (ulong)(uVar9 + uVar5 < uVar14);
  lVar3 = (long)uVar9 >> 0x3f;
  if (CARRY8(uVar9,uVar18)) {
    lVar3 = lVar3 + 1;
  }
  uVar10 = (uVar9 + uVar18) - uVar12;
  uVar9 = lVar3 - (ulong)(uVar9 + uVar18 < uVar12);
  lVar3 = (long)uVar9 >> 0x3f;
  if (CARRY8(uVar9,uVar11)) {
    lVar3 = lVar3 + 1;
  }
  uVar4 = (uVar9 + uVar11) - uVar2;
  uVar9 = (uVar4 >> 0x3f | ((lVar3 - (ulong)(uVar9 + uVar11 < uVar2)) + 2) * 2) * 0x13;
  *puVar21 = uVar9 + uVar15;
  bVar1 = CARRY8(uVar8,(ulong)CARRY8(uVar9,uVar15));
  uVar4 = uVar4 & 0x7fffffffffffffff;
  param_1[0xd] = uVar8 + CARRY8(uVar9,uVar15);
  param_1[0xe] = uVar10 + bVar1;
  if (CARRY8(uVar10,(ulong)bVar1)) {
    uVar4 = uVar4 + 1;
  }
  param_1[0xf] = uVar4;
  FUN_004fddac(puVar20,puVar20,puVar20,4);
  FUN_004fddac(puVar19,puVar19,puVar19,4);
  uVar15 = *puVar20 - *puVar19;
  uVar9 = uVar15 - 0x4c;
  uVar8 = (-1 - (ulong)(*puVar20 < *puVar19)) + (ulong)(0x4b < uVar15);
  lVar3 = (long)uVar8 >> 0x3f;
  uVar15 = uVar8 + param_1[0x11];
  if (CARRY8(uVar8,param_1[0x11])) {
    lVar3 = lVar3 + 1;
  }
  uVar8 = uVar15 - param_1[5];
  uVar10 = lVar3 - (ulong)(uVar15 < param_1[5]);
  lVar3 = (long)uVar10 >> 0x3f;
  uVar15 = uVar10 + param_1[0x12];
  if (CARRY8(uVar10,param_1[0x12])) {
    lVar3 = lVar3 + 1;
  }
  uVar10 = uVar15 - param_1[6];
  uVar4 = lVar3 - (ulong)(uVar15 < param_1[6]);
  lVar3 = (long)uVar4 >> 0x3f;
  uVar15 = uVar4 + param_1[0x13];
  if (CARRY8(uVar4,param_1[0x13])) {
    lVar3 = lVar3 + 1;
  }
  uVar4 = uVar15 - param_1[7];
  uVar15 = (uVar4 >> 0x3f | ((lVar3 - (ulong)(uVar15 < param_1[7])) + 2) * 2) * 0x13;
  bVar1 = CARRY8(uVar8,(ulong)CARRY8(uVar15,uVar9));
  *param_1 = uVar15 + uVar9;
  param_1[1] = uVar8 + CARRY8(uVar15,uVar9);
  uVar4 = uVar4 & 0x7fffffffffffffff;
  if (CARRY8(uVar10,(ulong)bVar1)) {
    uVar4 = uVar4 + 1;
  }
  param_1[2] = uVar10 + bVar1;
  param_1[3] = uVar4;
  FUN_004fddac(puVar19,param_1,&DAT_002536a0,1);
  uVar9 = *puVar19;
  uVar5 = *puVar20;
  uVar10 = param_1[6];
  uVar15 = uVar5 + uVar9;
  uVar8 = param_1[0x11];
  uVar4 = param_1[0x12];
  uVar12 = param_1[5] + (ulong)CARRY8(uVar5,uVar9);
  uVar18 = (ulong)CARRY8(param_1[5],(ulong)CARRY8(uVar5,uVar9));
  uVar9 = uVar12 + uVar8;
  uVar5 = uVar10 + uVar18 + (ulong)CARRY8(uVar12,uVar8);
  uVar14 = param_1[7];
  uVar8 = (ulong)(CARRY8(uVar10,uVar18) || CARRY8(uVar10 + uVar18,(ulong)CARRY8(uVar12,uVar8)));
  uVar12 = uVar14 + uVar8 + (ulong)CARRY8(uVar5,uVar4);
  uVar10 = (ulong)(CARRY8(uVar14,uVar8) || CARRY8(uVar14 + uVar8,(ulong)CARRY8(uVar5,uVar4)));
  uVar8 = uVar12 + param_1[0x13];
  if (CARRY8(uVar12,param_1[0x13])) {
    uVar10 = uVar10 + 1;
  }
  uVar10 = (uVar8 >> 0x3f | uVar10 << 1) * 0x13;
  *puVar19 = uVar10 + uVar15;
  bVar1 = CARRY8(uVar9,(ulong)CARRY8(uVar10,uVar15));
  uVar8 = uVar8 & 0x7fffffffffffffff;
  param_1[5] = uVar9 + CARRY8(uVar10,uVar15);
  param_1[6] = uVar5 + uVar4 + (ulong)bVar1;
  if (CARRY8(uVar5 + uVar4,(ulong)bVar1)) {
    uVar8 = uVar8 + 1;
  }
  param_1[7] = uVar8;
  return;
}


// ===== 004fddac  FUN_004fddac =====

void FUN_004fddac(long *param_1,ulong *param_2,long param_3,ulong param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
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
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong local_80 [9];
  long local_38;
  
  lVar17 = tpidr_el0;
  local_38 = *(long *)(lVar17 + 0x28);
  uVar22 = 0;
  uVar27 = 0;
  uVar25 = 0;
  uVar28 = 0;
  uVar23 = *param_2;
  uVar26 = param_2[1];
  local_80[1] = 0;
  local_80[0] = 0;
  local_80[3] = 0;
  local_80[2] = 0;
  uVar24 = param_2[2];
  uVar4 = param_2[3];
  local_80[5] = 0;
  local_80[4] = 0;
  local_80[7] = 0;
  local_80[6] = 0;
  lVar21 = 0;
  do {
    uVar18 = *(ulong *)(param_3 + lVar21);
    uVar20 = uVar23 * uVar18;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar23;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar18;
    uVar19 = SUB168(auVar5 * auVar13,8);
    uVar29 = uVar26 * uVar18;
    lVar3 = uVar20 + uVar28;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar26;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar18;
    if (CARRY8(uVar20,uVar28)) {
      uVar19 = uVar19 + 1;
    }
    uVar30 = uVar24 * uVar18;
    uVar28 = uVar19 + uVar27 + uVar29;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar24;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar18;
    uVar29 = (ulong)CARRY8(uVar19,uVar27) + SUB168(auVar6 * auVar14,8) +
             (ulong)CARRY8(uVar19 + uVar27,uVar29);
    uVar20 = uVar4 * uVar18;
    uVar19 = uVar29 + uVar22;
    uVar27 = uVar19 + uVar30;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar4;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar18;
    uVar18 = (ulong)CARRY8(uVar29,uVar22) + SUB168(auVar7 * auVar15,8) +
             (ulong)CARRY8(uVar19,uVar30);
    lVar2 = lVar21 + 8;
    uVar19 = uVar18 + uVar25;
    *(long *)((long)local_80 + lVar21) = lVar3;
    *(ulong *)((long)local_80 + lVar21 + 8) = uVar28;
    uVar22 = uVar19 + uVar20;
    *(ulong *)((long)local_80 + lVar21 + 0x10) = uVar27;
    *(ulong *)((long)local_80 + lVar21 + 0x18) = uVar22;
    uVar25 = (ulong)CARRY8(uVar18,uVar25) + SUB168(auVar8 * auVar16,8) +
             (ulong)CARRY8(uVar19,uVar20);
    *(ulong *)((long)local_80 + lVar21 + 0x20) = uVar25;
    lVar21 = lVar2;
  } while ((param_4 & 0xffffffff) << 3 != lVar2);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = local_80[4];
  uVar23 = SUB168(auVar9 * ZEXT816(0x26),8);
  uVar22 = local_80[4] * 0x26;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = local_80[5];
  uVar28 = uVar22 + local_80[0];
  auVar11._8_8_ = 0;
  auVar11._0_8_ = local_80[6];
  uVar24 = local_80[1] + uVar23 + (ulong)CARRY8(uVar22,local_80[0]);
  uVar27 = uVar24 + local_80[5] * 0x26;
  uVar24 = (ulong)(CARRY8(local_80[1],uVar23) ||
                  CARRY8(local_80[1] + uVar23,(ulong)CARRY8(uVar22,local_80[0]))) +
           SUB168(auVar10 * ZEXT816(0x26),8) + (ulong)CARRY8(uVar24,local_80[5] * 0x26);
  uVar22 = uVar24 + local_80[2];
  auVar12._8_8_ = 0;
  auVar12._0_8_ = local_80[7];
  uVar23 = uVar22 + local_80[6] * 0x26;
  uVar26 = (ulong)CARRY8(uVar24,local_80[2]) + SUB168(auVar11 * ZEXT816(0x26),8) +
           (ulong)CARRY8(uVar22,local_80[6] * 0x26);
  uVar22 = uVar26 + local_80[3];
  uVar24 = uVar22 + local_80[7] * 0x26;
  uVar22 = (uVar24 >> 0x3f |
           ((ulong)CARRY8(uVar26,local_80[3]) + SUB168(auVar12 * ZEXT816(0x26),8) +
           (ulong)CARRY8(uVar22,local_80[7] * 0x26)) * 2) * 0x13;
  bVar1 = CARRY8(uVar27,(ulong)CARRY8(uVar22,uVar28));
  *param_1 = uVar22 + uVar28;
  param_1[1] = uVar27 + CARRY8(uVar22,uVar28);
  uVar24 = uVar24 & 0x7fffffffffffffff;
  if (CARRY8(uVar23,(ulong)bVar1)) {
    uVar24 = uVar24 + 1;
  }
  param_1[2] = uVar23 + bVar1;
  param_1[3] = uVar24;
  if (*(long *)(lVar17 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004fdf30  hydro_sign_verify =====

void hydro_sign_verify(undefined8 param_1,long param_2,ulong param_3,undefined8 *param_4,
                      undefined8 param_5)

{
  long lVar1;
  undefined4 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  byte bVar14;
  byte bVar16;
  byte bVar17;
  int iVar15;
  byte bVar18;
  byte bVar19;
  byte bVar21;
  byte bVar22;
  int iVar20;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  int iVar25;
  byte bVar28;
  byte bVar29;
  byte bVar31;
  byte bVar32;
  int iVar30;
  byte bVar33;
  byte bVar34;
  byte bVar36;
  byte bVar37;
  int iVar35;
  byte bVar38;
  byte bVar39;
  byte bVar41;
  byte bVar42;
  int iVar40;
  byte bVar43;
  byte bVar44;
  byte bVar46;
  byte bVar47;
  int iVar45;
  byte bVar48;
  byte bVar49;
  byte bVar51;
  byte bVar52;
  int iVar50;
  byte bVar53;
  int iVar54;
  int iVar55;
  uint uVar56;
  int iVar57;
  int iVar58;
  uint uVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined8 local_62;
  undefined8 local_5a;
  undefined8 uStack_52;
  undefined8 local_4a;
  undefined8 uStack_42;
  undefined8 local_3a;
  undefined8 uStack_32;
  undefined2 local_2a;
  long local_28;
  undefined1 auVar10 [16];
  undefined1 auVar13 [16];
  
  lVar1 = tpidr_el0;
  uVar6 = 0;
  puVar2 = &local_68;
  uVar3 = 0x20;
  local_28 = *(long *)(lVar1 + 0x28);
  local_64 = 0x863;
  local_68 = (int)DAT_0024e788;
  local_62 = *param_4;
  uStack_52 = 0;
  local_5a = 0;
  uStack_42 = 0;
  local_4a = 0;
  uStack_32 = 0;
  local_3a = 0;
  local_2a = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_70 = 0;
  do {
    uVar5 = 0x10 - (ulong)(byte)uVar6;
    uVar7 = 0;
    uVar4 = uVar3;
    if (uVar5 <= uVar3) {
      uVar4 = uVar5;
    }
    uVar5 = uVar4;
    if (uVar4 < 2) {
      uVar5 = 1;
    }
    do {
      *(byte *)((long)&local_a0 + uVar7 + ((ulong)(byte)local_70 - 0xa0) + 0xa0) =
           *(byte *)((long)&local_a0 + uVar7 + ((ulong)(byte)local_70 - 0xa0) + 0xa0) ^
           *(byte *)((long)puVar2 + uVar7);
      uVar7 = uVar7 + 1;
    } while (uVar5 != uVar7);
    uVar6 = (local_70 & 0xff) + (int)uVar4;
    local_70._0_1_ = (char)uVar6;
    if ((uVar6 & 0xff) == 0x10) {
      auVar11._8_8_ = uStack_98;
      auVar11._0_8_ = local_a0;
      uVar6 = 0x18;
      do {
        uVar56 = (uint)((ulong)local_90 >> 0x20);
        uVar59 = (uint)((ulong)uStack_88 >> 0x20);
        iVar15 = auVar11._0_4_ * 0x1000000 + (auVar11._0_4_ >> 8);
        iVar20 = auVar11._4_4_ * 0x1000000 + (auVar11._4_4_ >> 8);
        iVar25 = auVar11._8_4_ * 0x1000000 + (auVar11._8_4_ >> 8);
        iVar30 = auVar11._12_4_ * 0x1000000 + (auVar11._12_4_ >> 8);
        iVar35 = (uint)local_90 * 0x200 + ((uint)local_90 >> 0x17);
        iVar40 = uVar56 * 0x200 + (uVar56 >> 0x17);
        iVar45 = (uint)uStack_88 * 0x200 + ((uint)uStack_88 >> 0x17);
        iVar50 = uVar59 * 0x200 + (uVar59 >> 0x17);
        bVar14 = (byte)iVar15;
        bVar34 = (byte)iVar35;
        bVar16 = (byte)((uint)iVar15 >> 8);
        bVar36 = (byte)((uint)iVar35 >> 8);
        bVar17 = (byte)((uint)iVar15 >> 0x10);
        bVar37 = (byte)((uint)iVar35 >> 0x10);
        bVar18 = (byte)((uint)iVar15 >> 0x18);
        bVar38 = (byte)((uint)iVar35 >> 0x18);
        iVar15 = CONCAT13(bVar18 & bVar38,
                          CONCAT12(bVar17 & bVar37,CONCAT11(bVar16 & bVar36,bVar14 & bVar34)));
        bVar19 = (byte)iVar20;
        bVar39 = (byte)iVar40;
        bVar21 = (byte)((uint)iVar20 >> 8);
        bVar41 = (byte)((uint)iVar40 >> 8);
        bVar22 = (byte)((uint)iVar20 >> 0x10);
        bVar42 = (byte)((uint)iVar40 >> 0x10);
        bVar23 = (byte)((uint)iVar20 >> 0x18);
        bVar43 = (byte)((uint)iVar40 >> 0x18);
        auVar8._0_8_ = CONCAT17(bVar23 & bVar43,
                                CONCAT16(bVar22 & bVar42,
                                         CONCAT15(bVar21 & bVar41,CONCAT14(bVar19 & bVar39,iVar15)))
                               );
        bVar24 = (byte)iVar25;
        bVar44 = (byte)iVar45;
        auVar8[8] = bVar24 & bVar44;
        bVar26 = (byte)((uint)iVar25 >> 8);
        bVar46 = (byte)((uint)iVar45 >> 8);
        auVar8[9] = bVar26 & bVar46;
        bVar27 = (byte)((uint)iVar25 >> 0x10);
        bVar47 = (byte)((uint)iVar45 >> 0x10);
        auVar8[10] = bVar27 & bVar47;
        bVar28 = (byte)((uint)iVar25 >> 0x18);
        bVar48 = (byte)((uint)iVar45 >> 0x18);
        auVar8[0xb] = bVar28 & bVar48;
        bVar29 = (byte)iVar30;
        bVar49 = (byte)iVar50;
        auVar10[0xc] = bVar29 & bVar49;
        auVar10._0_12_ = auVar8;
        bVar31 = (byte)((uint)iVar30 >> 8);
        bVar51 = (byte)((uint)iVar50 >> 8);
        auVar10[0xd] = bVar31 & bVar51;
        bVar32 = (byte)((uint)iVar30 >> 0x10);
        bVar52 = (byte)((uint)iVar50 >> 0x10);
        auVar10[0xe] = bVar32 & bVar52;
        bVar33 = (byte)((uint)iVar30 >> 0x18);
        bVar53 = (byte)((uint)iVar50 >> 0x18);
        auVar10[0xf] = bVar33 & bVar53;
        bVar60 = (byte)local_80;
        bVar61 = (byte)((ulong)local_80 >> 8);
        bVar62 = (byte)((ulong)local_80 >> 0x10);
        bVar63 = (byte)((ulong)local_80 >> 0x18);
        bVar64 = (byte)((ulong)local_80 >> 0x20);
        bVar65 = (byte)((ulong)local_80 >> 0x28);
        bVar66 = (byte)((ulong)local_80 >> 0x30);
        bVar67 = (byte)((ulong)local_80 >> 0x38);
        bVar68 = (byte)uStack_78;
        bVar69 = (byte)((ulong)uStack_78 >> 8);
        bVar70 = (byte)((ulong)uStack_78 >> 0x10);
        bVar71 = (byte)((ulong)uStack_78 >> 0x18);
        bVar72 = (byte)((ulong)uStack_78 >> 0x20);
        bVar73 = (byte)((ulong)uStack_78 >> 0x28);
        bVar74 = (byte)((ulong)uStack_78 >> 0x30);
        bVar75 = (byte)((ulong)uStack_78 >> 0x38);
        iVar15 = iVar15 << 3;
        iVar20 = (int)((ulong)auVar8._0_8_ >> 0x20) << 3;
        iVar25 = auVar8._8_4_ << 3;
        iVar30 = auVar10._12_4_ << 3;
        auVar11._0_8_ =
             CONCAT17(bVar67 ^ bVar43 ^ (byte)((uint)iVar20 >> 0x18),
                      CONCAT16(bVar66 ^ bVar42 ^ (byte)((uint)iVar20 >> 0x10),
                               CONCAT15(bVar65 ^ bVar41 ^ (byte)((uint)iVar20 >> 8),
                                        CONCAT14(bVar64 ^ bVar39 ^ (byte)iVar20,
                                                 CONCAT13(bVar63 ^ bVar38 ^
                                                          (byte)((uint)iVar15 >> 0x18),
                                                          CONCAT12(bVar62 ^ bVar37 ^
                                                                   (byte)((uint)iVar15 >> 0x10),
                                                                   CONCAT11(bVar61 ^ bVar36 ^
                                                                            (byte)((uint)iVar15 >> 8
                                                                                  ),bVar60 ^ bVar34
                                                                                    ^ (byte)iVar15))
                                                         )))));
        auVar11[8] = bVar68 ^ bVar44 ^ (byte)iVar25;
        auVar11[9] = bVar69 ^ bVar46 ^ (byte)((uint)iVar25 >> 8);
        auVar11[10] = bVar70 ^ bVar47 ^ (byte)((uint)iVar25 >> 0x10);
        auVar11[0xb] = bVar71 ^ bVar48 ^ (byte)((uint)iVar25 >> 0x18);
        auVar11[0xc] = bVar72 ^ bVar49 ^ (byte)iVar30;
        auVar11[0xd] = bVar73 ^ bVar51 ^ (byte)((uint)iVar30 >> 8);
        auVar11[0xe] = bVar74 ^ bVar52 ^ (byte)((uint)iVar30 >> 0x10);
        auVar11[0xf] = bVar75 ^ bVar53 ^ (byte)((uint)iVar30 >> 0x18);
        if ((uVar6 & 3) == 2) {
          auVar11 = NEON_ext(auVar11,auVar11,8,1);
        }
        else if ((uVar6 & 3) == 0) {
          uVar7 = (ulong)auVar11._0_8_ >> 0x20;
          auVar11 = NEON_rev64(auVar11,4);
          auVar11._0_4_ = (uint)uVar7 ^ (uVar6 | 0x9e377900);
        }
        iVar35 = (int)local_80 * 2;
        iVar40 = (int)((ulong)local_80 >> 0x20) * 2;
        iVar45 = (int)uStack_78 * 2;
        iVar50 = (int)((ulong)uStack_78 >> 0x20) * 2;
        uVar6 = uVar6 - 1;
        iVar55 = CONCAT13(bVar38 & bVar63,
                          CONCAT12(bVar37 & bVar62,CONCAT11(bVar36 & bVar61,bVar34 & bVar60)));
        iVar58 = CONCAT13(bVar48 & bVar71,
                          CONCAT12(bVar47 & bVar70,CONCAT11(bVar46 & bVar69,bVar44 & bVar68)));
        iVar15 = CONCAT13(bVar18 | bVar63,
                          CONCAT12(bVar17 | bVar62,CONCAT11(bVar16 | bVar61,bVar14 | bVar60))) * 2;
        iVar20 = CONCAT13(bVar23 | bVar67,
                          CONCAT12(bVar22 | bVar66,CONCAT11(bVar21 | bVar65,bVar19 | bVar64))) * 2;
        iVar25 = CONCAT13(bVar28 | bVar71,
                          CONCAT12(bVar27 | bVar70,CONCAT11(bVar26 | bVar69,bVar24 | bVar68))) * 2;
        iVar30 = CONCAT13(bVar33 | bVar75,
                          CONCAT12(bVar32 | bVar74,CONCAT11(bVar31 | bVar73,bVar29 | bVar72))) * 2;
        iVar54 = iVar55 << 2;
        iVar55 = (int)(CONCAT17(bVar43 & bVar67,
                                CONCAT16(bVar42 & bVar66,
                                         CONCAT15(bVar41 & bVar65,CONCAT14(bVar39 & bVar64,iVar55)))
                               ) >> 0x20) << 2;
        iVar57 = iVar58 << 2;
        iVar58 = (int)(CONCAT17(bVar53 & bVar75,
                                CONCAT16(bVar52 & bVar74,
                                         CONCAT15(bVar51 & bVar73,CONCAT14(bVar49 & bVar72,iVar58)))
                               ) >> 0x20) << 2;
        local_80 = CONCAT17((byte)((uint)iVar40 >> 0x18) ^ bVar23 ^ (byte)((uint)iVar55 >> 0x18),
                            CONCAT16((byte)((uint)iVar40 >> 0x10) ^ bVar22 ^
                                     (byte)((uint)iVar55 >> 0x10),
                                     CONCAT15((byte)((uint)iVar40 >> 8) ^ bVar21 ^
                                              (byte)((uint)iVar55 >> 8),
                                              CONCAT14((byte)iVar40 ^ bVar19 ^ (byte)iVar55,
                                                       CONCAT13((byte)((uint)iVar35 >> 0x18) ^
                                                                bVar18 ^ (byte)((uint)iVar54 >> 0x18
                                                                               ),
                                                                CONCAT12((byte)((uint)iVar35 >> 0x10
                                                                               ) ^ bVar17 ^
                                                                         (byte)((uint)iVar54 >> 0x10
                                                                               ),CONCAT11((byte)((
                                                  uint)iVar35 >> 8) ^ bVar16 ^
                                                  (byte)((uint)iVar54 >> 8),
                                                  (byte)iVar35 ^ bVar14 ^ (byte)iVar54)))))));
        uStack_78 = CONCAT17((byte)((uint)iVar50 >> 0x18) ^ bVar33 ^ (byte)((uint)iVar58 >> 0x18),
                             CONCAT16((byte)((uint)iVar50 >> 0x10) ^ bVar32 ^
                                      (byte)((uint)iVar58 >> 0x10),
                                      CONCAT15((byte)((uint)iVar50 >> 8) ^ bVar31 ^
                                               (byte)((uint)iVar58 >> 8),
                                               CONCAT14((byte)iVar50 ^ bVar29 ^ (byte)iVar58,
                                                        CONCAT13((byte)((uint)iVar45 >> 0x18) ^
                                                                 bVar28 ^ (byte)((uint)iVar57 >>
                                                                                0x18),
                                                                 CONCAT12((byte)((uint)iVar45 >>
                                                                                0x10) ^ bVar27 ^
                                                                          (byte)((uint)iVar57 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((uint)
                                                  iVar45 >> 8) ^ bVar26 ^ (byte)((uint)iVar57 >> 8),
                                                  (byte)iVar45 ^ bVar24 ^ (byte)iVar57)))))));
        local_90 = CONCAT17(bVar43 ^ bVar23 ^ (byte)((uint)iVar20 >> 0x18),
                            CONCAT16(bVar42 ^ bVar22 ^ (byte)((uint)iVar20 >> 0x10),
                                     CONCAT15(bVar41 ^ bVar21 ^ (byte)((uint)iVar20 >> 8),
                                              CONCAT14(bVar39 ^ bVar19 ^ (byte)iVar20,
                                                       CONCAT13(bVar38 ^ bVar18 ^
                                                                (byte)((uint)iVar15 >> 0x18),
                                                                CONCAT12(bVar37 ^ bVar17 ^
                                                                         (byte)((uint)iVar15 >> 0x10
                                                                               ),CONCAT11(bVar36 ^ 
                                                  bVar16 ^ (byte)((uint)iVar15 >> 8),
                                                  bVar34 ^ bVar14 ^ (byte)iVar15)))))));
        uStack_88 = CONCAT17(bVar53 ^ bVar33 ^ (byte)((uint)iVar30 >> 0x18),
                             CONCAT16(bVar52 ^ bVar32 ^ (byte)((uint)iVar30 >> 0x10),
                                      CONCAT15(bVar51 ^ bVar31 ^ (byte)((uint)iVar30 >> 8),
                                               CONCAT14(bVar49 ^ bVar29 ^ (byte)iVar30,
                                                        CONCAT13(bVar48 ^ bVar28 ^
                                                                 (byte)((uint)iVar25 >> 0x18),
                                                                 CONCAT12(bVar47 ^ bVar27 ^
                                                                          (byte)((uint)iVar25 >>
                                                                                0x10),
                                                                          CONCAT11(bVar46 ^ bVar26 ^
                                                                                   (byte)((uint)
                                                  iVar25 >> 8),bVar44 ^ bVar24 ^ (byte)iVar25)))))))
        ;
      } while (uVar6 != 0);
      uStack_98 = auVar11._8_8_;
      local_a0 = auVar11._0_8_;
      local_70._0_1_ = 0;
      uVar6 = 0;
    }
    uVar3 = uVar3 - uVar4;
    puVar2 = (undefined4 *)((long)puVar2 + uVar4);
  } while (uVar3 != 0);
  if (param_3 != 0) {
    do {
      uVar4 = 0x10 - (ulong)(byte)uVar6;
      uVar3 = 0;
      uVar7 = param_3;
      if (uVar4 <= param_3) {
        uVar7 = uVar4;
      }
      uVar4 = uVar7;
      if (uVar7 < 2) {
        uVar4 = 1;
      }
      do {
        *(byte *)((long)&local_a0 + uVar3 + ((ulong)(byte)local_70 - 0xa0) + 0xa0) =
             *(byte *)((long)&local_a0 + uVar3 + ((ulong)(byte)local_70 - 0xa0) + 0xa0) ^
             *(byte *)(param_2 + uVar3);
        uVar3 = uVar3 + 1;
      } while (uVar4 != uVar3);
      uVar6 = (local_70 & 0xff) + (int)uVar7;
      local_70._0_1_ = (char)uVar6;
      if ((uVar6 & 0xff) == 0x10) {
        auVar12._8_8_ = uStack_98;
        auVar12._0_8_ = local_a0;
        uVar6 = 0x18;
        do {
          uVar56 = (uint)((ulong)local_90 >> 0x20);
          uVar59 = (uint)((ulong)uStack_88 >> 0x20);
          iVar15 = auVar12._0_4_ * 0x1000000 + (auVar12._0_4_ >> 8);
          iVar20 = auVar12._4_4_ * 0x1000000 + (auVar12._4_4_ >> 8);
          iVar25 = auVar12._8_4_ * 0x1000000 + (auVar12._8_4_ >> 8);
          iVar30 = auVar12._12_4_ * 0x1000000 + (auVar12._12_4_ >> 8);
          iVar35 = (uint)local_90 * 0x200 + ((uint)local_90 >> 0x17);
          iVar40 = uVar56 * 0x200 + (uVar56 >> 0x17);
          iVar45 = (uint)uStack_88 * 0x200 + ((uint)uStack_88 >> 0x17);
          iVar50 = uVar59 * 0x200 + (uVar59 >> 0x17);
          bVar14 = (byte)iVar15;
          bVar34 = (byte)iVar35;
          bVar16 = (byte)((uint)iVar15 >> 8);
          bVar36 = (byte)((uint)iVar35 >> 8);
          bVar17 = (byte)((uint)iVar15 >> 0x10);
          bVar37 = (byte)((uint)iVar35 >> 0x10);
          bVar18 = (byte)((uint)iVar15 >> 0x18);
          bVar38 = (byte)((uint)iVar35 >> 0x18);
          iVar15 = CONCAT13(bVar18 & bVar38,
                            CONCAT12(bVar17 & bVar37,CONCAT11(bVar16 & bVar36,bVar14 & bVar34)));
          bVar19 = (byte)iVar20;
          bVar39 = (byte)iVar40;
          bVar21 = (byte)((uint)iVar20 >> 8);
          bVar41 = (byte)((uint)iVar40 >> 8);
          bVar22 = (byte)((uint)iVar20 >> 0x10);
          bVar42 = (byte)((uint)iVar40 >> 0x10);
          bVar23 = (byte)((uint)iVar20 >> 0x18);
          bVar43 = (byte)((uint)iVar40 >> 0x18);
          auVar9._0_8_ = CONCAT17(bVar23 & bVar43,
                                  CONCAT16(bVar22 & bVar42,
                                           CONCAT15(bVar21 & bVar41,CONCAT14(bVar19 & bVar39,iVar15)
                                                   )));
          bVar24 = (byte)iVar25;
          bVar44 = (byte)iVar45;
          auVar9[8] = bVar24 & bVar44;
          bVar26 = (byte)((uint)iVar25 >> 8);
          bVar46 = (byte)((uint)iVar45 >> 8);
          auVar9[9] = bVar26 & bVar46;
          bVar27 = (byte)((uint)iVar25 >> 0x10);
          bVar47 = (byte)((uint)iVar45 >> 0x10);
          auVar9[10] = bVar27 & bVar47;
          bVar28 = (byte)((uint)iVar25 >> 0x18);
          bVar48 = (byte)((uint)iVar45 >> 0x18);
          auVar9[0xb] = bVar28 & bVar48;
          bVar29 = (byte)iVar30;
          bVar49 = (byte)iVar50;
          auVar13[0xc] = bVar29 & bVar49;
          auVar13._0_12_ = auVar9;
          bVar31 = (byte)((uint)iVar30 >> 8);
          bVar51 = (byte)((uint)iVar50 >> 8);
          auVar13[0xd] = bVar31 & bVar51;
          bVar32 = (byte)((uint)iVar30 >> 0x10);
          bVar52 = (byte)((uint)iVar50 >> 0x10);
          auVar13[0xe] = bVar32 & bVar52;
          bVar33 = (byte)((uint)iVar30 >> 0x18);
          bVar53 = (byte)((uint)iVar50 >> 0x18);
          auVar13[0xf] = bVar33 & bVar53;
          bVar60 = (byte)local_80;
          bVar61 = (byte)((ulong)local_80 >> 8);
          bVar62 = (byte)((ulong)local_80 >> 0x10);
          bVar63 = (byte)((ulong)local_80 >> 0x18);
          bVar64 = (byte)((ulong)local_80 >> 0x20);
          bVar65 = (byte)((ulong)local_80 >> 0x28);
          bVar66 = (byte)((ulong)local_80 >> 0x30);
          bVar67 = (byte)((ulong)local_80 >> 0x38);
          bVar68 = (byte)uStack_78;
          bVar69 = (byte)((ulong)uStack_78 >> 8);
          bVar70 = (byte)((ulong)uStack_78 >> 0x10);
          bVar71 = (byte)((ulong)uStack_78 >> 0x18);
          bVar72 = (byte)((ulong)uStack_78 >> 0x20);
          bVar73 = (byte)((ulong)uStack_78 >> 0x28);
          bVar74 = (byte)((ulong)uStack_78 >> 0x30);
          bVar75 = (byte)((ulong)uStack_78 >> 0x38);
          iVar15 = iVar15 << 3;
          iVar20 = (int)((ulong)auVar9._0_8_ >> 0x20) << 3;
          iVar25 = auVar9._8_4_ << 3;
          iVar30 = auVar13._12_4_ << 3;
          auVar12._0_8_ =
               CONCAT17(bVar67 ^ bVar43 ^ (byte)((uint)iVar20 >> 0x18),
                        CONCAT16(bVar66 ^ bVar42 ^ (byte)((uint)iVar20 >> 0x10),
                                 CONCAT15(bVar65 ^ bVar41 ^ (byte)((uint)iVar20 >> 8),
                                          CONCAT14(bVar64 ^ bVar39 ^ (byte)iVar20,
                                                   CONCAT13(bVar63 ^ bVar38 ^
                                                            (byte)((uint)iVar15 >> 0x18),
                                                            CONCAT12(bVar62 ^ bVar37 ^
                                                                     (byte)((uint)iVar15 >> 0x10),
                                                                     CONCAT11(bVar61 ^ bVar36 ^
                                                                              (byte)((uint)iVar15 >>
                                                                                    8),bVar60 ^ 
                                                  bVar34 ^ (byte)iVar15)))))));
          auVar12[8] = bVar68 ^ bVar44 ^ (byte)iVar25;
          auVar12[9] = bVar69 ^ bVar46 ^ (byte)((uint)iVar25 >> 8);
          auVar12[10] = bVar70 ^ bVar47 ^ (byte)((uint)iVar25 >> 0x10);
          auVar12[0xb] = bVar71 ^ bVar48 ^ (byte)((uint)iVar25 >> 0x18);
          auVar12[0xc] = bVar72 ^ bVar49 ^ (byte)iVar30;
          auVar12[0xd] = bVar73 ^ bVar51 ^ (byte)((uint)iVar30 >> 8);
          auVar12[0xe] = bVar74 ^ bVar52 ^ (byte)((uint)iVar30 >> 0x10);
          auVar12[0xf] = bVar75 ^ bVar53 ^ (byte)((uint)iVar30 >> 0x18);
          if ((uVar6 & 3) == 2) {
            auVar12 = NEON_ext(auVar12,auVar12,8,1);
          }
          else if ((uVar6 & 3) == 0) {
            uVar3 = (ulong)auVar12._0_8_ >> 0x20;
            auVar11 = NEON_rev64(auVar12,4);
            auVar12._4_12_ = auVar11._4_12_;
            auVar12._0_4_ = (uint)uVar3 ^ (uVar6 | 0x9e377900);
          }
          iVar35 = (int)local_80 * 2;
          iVar40 = (int)((ulong)local_80 >> 0x20) * 2;
          iVar45 = (int)uStack_78 * 2;
          iVar50 = (int)((ulong)uStack_78 >> 0x20) * 2;
          uVar6 = uVar6 - 1;
          iVar55 = CONCAT13(bVar38 & bVar63,
                            CONCAT12(bVar37 & bVar62,CONCAT11(bVar36 & bVar61,bVar34 & bVar60)));
          iVar58 = CONCAT13(bVar48 & bVar71,
                            CONCAT12(bVar47 & bVar70,CONCAT11(bVar46 & bVar69,bVar44 & bVar68)));
          iVar15 = CONCAT13(bVar18 | bVar63,
                            CONCAT12(bVar17 | bVar62,CONCAT11(bVar16 | bVar61,bVar14 | bVar60))) * 2
          ;
          iVar20 = CONCAT13(bVar23 | bVar67,
                            CONCAT12(bVar22 | bVar66,CONCAT11(bVar21 | bVar65,bVar19 | bVar64))) * 2
          ;
          iVar25 = CONCAT13(bVar28 | bVar71,
                            CONCAT12(bVar27 | bVar70,CONCAT11(bVar26 | bVar69,bVar24 | bVar68))) * 2
          ;
          iVar30 = CONCAT13(bVar33 | bVar75,
                            CONCAT12(bVar32 | bVar74,CONCAT11(bVar31 | bVar73,bVar29 | bVar72))) * 2
          ;
          iVar54 = iVar55 << 2;
          iVar55 = (int)(CONCAT17(bVar43 & bVar67,
                                  CONCAT16(bVar42 & bVar66,
                                           CONCAT15(bVar41 & bVar65,CONCAT14(bVar39 & bVar64,iVar55)
                                                   ))) >> 0x20) << 2;
          iVar57 = iVar58 << 2;
          iVar58 = (int)(CONCAT17(bVar53 & bVar75,
                                  CONCAT16(bVar52 & bVar74,
                                           CONCAT15(bVar51 & bVar73,CONCAT14(bVar49 & bVar72,iVar58)
                                                   ))) >> 0x20) << 2;
          local_80 = CONCAT17((byte)((uint)iVar40 >> 0x18) ^ bVar23 ^ (byte)((uint)iVar55 >> 0x18),
                              CONCAT16((byte)((uint)iVar40 >> 0x10) ^ bVar22 ^
                                       (byte)((uint)iVar55 >> 0x10),
                                       CONCAT15((byte)((uint)iVar40 >> 8) ^ bVar21 ^
                                                (byte)((uint)iVar55 >> 8),
                                                CONCAT14((byte)iVar40 ^ bVar19 ^ (byte)iVar55,
                                                         CONCAT13((byte)((uint)iVar35 >> 0x18) ^
                                                                  bVar18 ^ (byte)((uint)iVar54 >>
                                                                                 0x18),
                                                                  CONCAT12((byte)((uint)iVar35 >>
                                                                                 0x10) ^ bVar17 ^
                                                                           (byte)((uint)iVar54 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)((uint)
                                                  iVar35 >> 8) ^ bVar16 ^ (byte)((uint)iVar54 >> 8),
                                                  (byte)iVar35 ^ bVar14 ^ (byte)iVar54)))))));
          uStack_78 = CONCAT17((byte)((uint)iVar50 >> 0x18) ^ bVar33 ^ (byte)((uint)iVar58 >> 0x18),
                               CONCAT16((byte)((uint)iVar50 >> 0x10) ^ bVar32 ^
                                        (byte)((uint)iVar58 >> 0x10),
                                        CONCAT15((byte)((uint)iVar50 >> 8) ^ bVar31 ^
                                                 (byte)((uint)iVar58 >> 8),
                                                 CONCAT14((byte)iVar50 ^ bVar29 ^ (byte)iVar58,
                                                          CONCAT13((byte)((uint)iVar45 >> 0x18) ^
                                                                   bVar28 ^ (byte)((uint)iVar57 >>
                                                                                  0x18),
                                                                   CONCAT12((byte)((uint)iVar45 >>
                                                                                  0x10) ^ bVar27 ^
                                                                            (byte)((uint)iVar57 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((uint)
                                                  iVar45 >> 8) ^ bVar26 ^ (byte)((uint)iVar57 >> 8),
                                                  (byte)iVar45 ^ bVar24 ^ (byte)iVar57)))))));
          local_90 = CONCAT17(bVar43 ^ bVar23 ^ (byte)((uint)iVar20 >> 0x18),
                              CONCAT16(bVar42 ^ bVar22 ^ (byte)((uint)iVar20 >> 0x10),
                                       CONCAT15(bVar41 ^ bVar21 ^ (byte)((uint)iVar20 >> 8),
                                                CONCAT14(bVar39 ^ bVar19 ^ (byte)iVar20,
                                                         CONCAT13(bVar38 ^ bVar18 ^
                                                                  (byte)((uint)iVar15 >> 0x18),
                                                                  CONCAT12(bVar37 ^ bVar17 ^
                                                                           (byte)((uint)iVar15 >>
                                                                                 0x10),
                                                                           CONCAT11(bVar36 ^ bVar16
                                                                                    ^ (byte)((uint)
                                                  iVar15 >> 8),bVar34 ^ bVar14 ^ (byte)iVar15)))))))
          ;
          uStack_88 = CONCAT17(bVar53 ^ bVar33 ^ (byte)((uint)iVar30 >> 0x18),
                               CONCAT16(bVar52 ^ bVar32 ^ (byte)((uint)iVar30 >> 0x10),
                                        CONCAT15(bVar51 ^ bVar31 ^ (byte)((uint)iVar30 >> 8),
                                                 CONCAT14(bVar49 ^ bVar29 ^ (byte)iVar30,
                                                          CONCAT13(bVar48 ^ bVar28 ^
                                                                   (byte)((uint)iVar25 >> 0x18),
                                                                   CONCAT12(bVar47 ^ bVar27 ^
                                                                            (byte)((uint)iVar25 >>
                                                                                  0x10),
                                                                            CONCAT11(bVar46 ^ bVar26
                                                                                     ^ (byte)((uint)
                                                  iVar25 >> 8),bVar44 ^ bVar24 ^ (byte)iVar25)))))))
          ;
        } while (uVar6 != 0);
        uVar6 = 0;
        uStack_98 = auVar12._8_8_;
        local_a0 = auVar12._0_8_;
        local_70._0_1_ = 0;
      }
      param_3 = param_3 - uVar7;
      param_2 = param_2 + uVar7;
    } while (param_3 != 0);
  }
  iVar15 = hydro_sign_final_verify(&local_a0,param_1,param_5);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(-(uint)(iVar15 != 0));
  }
  return;
}


// ===== 004fe1ec  rive_hb_blob_create =====

undefined4 *
rive_hb_blob_create(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                   code *param_5)

{
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    if (param_5 != (code *)0x0) {
      (*param_5)(param_4);
    }
  }
  else {
    puVar1 = (undefined4 *)rive_hb_blob_create_or_fail();
    if (puVar1 != (undefined4 *)0x0) {
      return puVar1;
    }
  }
  return &DAT_0025d4b0;
}


// ===== 004fe220  rive_hb_blob_create_or_fail =====

undefined4 *
rive_hb_blob_create_or_fail
          (undefined8 param_1,int param_2,int param_3,undefined8 param_4,code *param_5)

{
  undefined4 *puVar1;
  ulong uVar2;
  
  if ((param_2 < 0) || (puVar1 = (undefined4 *)calloc(1,0x30), puVar1 == (undefined4 *)0x0)) {
    if (param_5 != (code *)0x0) {
      (*param_5)(param_4);
    }
  }
  else {
    *puVar1 = 1;
    *(undefined1 *)(puVar1 + 1) = 1;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined8 *)(puVar1 + 4) = param_1;
    puVar1[6] = param_2;
    puVar1[7] = param_3;
    *(undefined8 *)(puVar1 + 8) = param_4;
    *(code **)(puVar1 + 10) = param_5;
    if (param_3 != 0) {
      return puVar1;
    }
    puVar1[7] = 1;
    uVar2 = FUN_004fe2d4(puVar1);
    if ((uVar2 & 1) != 0) {
      return puVar1;
    }
    rive_hb_blob_destroy(puVar1);
  }
  return (undefined4 *)0x0;
}


// ===== 004fe2d4  FUN_004fe2d4 =====

undefined8 FUN_004fe2d4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  void *__dest;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 2;
  }
  else if (*(int *)(param_1 + 0x1c) != 2) {
    if (*(int *)(param_1 + 0x1c) == 3) {
      *(undefined4 *)(param_1 + 0x1c) = 1;
    }
    __dest = malloc((ulong)uVar1);
    if (__dest == (void *)0x0) {
      return 0;
    }
    memcpy(__dest,*(void **)(param_1 + 0x10),(ulong)uVar1);
    if (*(code **)(param_1 + 0x28) != (code *)0x0) {
      (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x20));
    }
    *(void **)(param_1 + 0x10) = __dest;
    puVar2 = PTR_rive_hb_free_0067d800;
    *(undefined4 *)(param_1 + 0x1c) = 2;
    *(void **)(param_1 + 0x20) = __dest;
    *(undefined **)(param_1 + 0x28) = puVar2;
    return 1;
  }
  return 1;
}


// ===== 004fe374  rive_hb_blob_destroy =====

void rive_hb_blob_destroy(int *param_1)

{
  int iVar1;
  mutex *this;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) &&
     (iVar1 = FUN_00340fe0(0xffffffff,param_1), iVar1 == 1)) {
    *param_1 = -0xdead;
    this = *(mutex **)(param_1 + 2);
    if (this != (mutex *)0x0) {
      FUN_004fe408(this + 0x28,this);
      std::__ndk1::mutex::~mutex(this);
      free(this);
      param_1[2] = 0;
      param_1[3] = 0;
    }
    if (*(code **)(param_1 + 10) != (code *)0x0) {
      (**(code **)(param_1 + 10))(*(undefined8 *)(param_1 + 8));
    }
    free(param_1);
    return;
  }
  return;
}


// ===== 004fe408  FUN_004fe408 =====

void FUN_004fe408(int *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  
  if (param_1[1] != 0) {
    std::__ndk1::mutex::lock();
    iVar3 = param_1[1];
    while (iVar3 != 0) {
      lVar4 = *(long *)(param_1 + 2) + (ulong)(iVar3 - 1U) * 0x18;
      uVar1 = *(undefined8 *)(lVar4 + 8);
      pcVar2 = *(code **)(lVar4 + 0x10);
      param_1[1] = iVar3 - 1U;
      std::__ndk1::mutex::unlock();
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(uVar1);
      }
      std::__ndk1::mutex::lock();
      iVar3 = param_1[1];
    }
    if (*param_1 - 1U < 0xfffffffe) {
      param_1[1] = 0;
      free(*(void **)(param_1 + 2));
    }
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    std::__ndk1::mutex::unlock();
    return;
  }
  if (*param_1 - 1U < 0xfffffffe) {
    param_1[1] = 0;
    free(*(void **)(param_1 + 2));
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


// ===== 004fe4e4  rive_hb_blob_get_empty =====

undefined4 * rive_hb_blob_get_empty(void)

{
  return &DAT_0025d4b0;
}


// ===== 004fe4f0  rive_hb_blob_create_sub_blob =====

undefined4 * rive_hb_blob_create_sub_blob(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  long lVar3;
  
  puVar2 = &DAT_0025d4b0;
  if ((param_1 != (int *)0x0) && (param_3 != 0)) {
    uVar1 = param_1[6] - param_2;
    puVar2 = &DAT_0025d4b0;
    if (param_2 <= (uint)param_1[6] && uVar1 != 0) {
      if ((*(byte *)(param_1 + 1) & 1) != 0) {
        *(undefined1 *)(param_1 + 1) = 0;
      }
      lVar3 = *(long *)(param_1 + 4);
      if (param_3 <= uVar1) {
        uVar1 = param_3;
      }
      if (*param_1 != 0) {
        FUN_00340fe0(1,param_1);
      }
      if (((int)uVar1 < 0) || (puVar2 = (undefined4 *)calloc(1,0x30), puVar2 == (undefined4 *)0x0))
      {
        rive_hb_blob_destroy(param_1);
        puVar2 = &DAT_0025d4b0;
      }
      else {
        *puVar2 = 1;
        *(undefined1 *)(puVar2 + 1) = 1;
        *(undefined8 *)(puVar2 + 2) = 0;
        *(ulong *)(puVar2 + 4) = lVar3 + (ulong)param_2;
        puVar2[6] = uVar1;
        puVar2[7] = 1;
        *(int **)(puVar2 + 8) = param_1;
        *(code **)(puVar2 + 10) = rive_hb_blob_destroy;
      }
    }
  }
  return puVar2;
}


// ===== 004fe5c0  rive_hb_blob_destroy =====

void rive_hb_blob_destroy(void)

{
  (*(code *)PTR_rive_hb_blob_destroy_00680a20)();
  return;
}


// ===== 004fe5c4  rive_hb_blob_make_immutable =====

void rive_hb_blob_make_immutable(long param_1)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}


// ===== 004fe5d4  rive_hb_blob_reference =====

int * rive_hb_blob_reference(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    FUN_00340fe0(1,param_1);
  }
  return param_1;
}


// ===== 004fe610  rive_hb_blob_copy_writable_or_fail =====

undefined4 * rive_hb_blob_copy_writable_or_fail(long param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar1 = (undefined4 *)
             rive_hb_blob_create_or_fail
                       (*(undefined8 *)(param_1 + 0x10),*(int *)(param_1 + 0x18),0,0,0);
    if ((puVar1 != (undefined4 *)0x0) && (puVar1 != &DAT_0025d4b0)) {
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}


// ===== 004fe658  rive_hb_blob_set_user_data =====

int * rive_hb_blob_set_user_data
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined4 param_5)

{
  uint uVar1;
  long lVar2;
  mutex *this;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      param_1 = (int *)0x0;
    }
    else {
      this = *(mutex **)(param_1 + 2);
      while (this == (mutex *)0x0) {
        this = (mutex *)calloc(1,0x38);
        if (this == (mutex *)0x0) {
          return (int *)0x0;
        }
        *(undefined8 *)(this + 0x30) = 0;
        *(undefined8 *)(this + 0x18) = 0;
        *(undefined8 *)(this + 0x10) = 0;
        *(undefined8 *)(this + 0x28) = 0;
        *(undefined8 *)(this + 0x20) = 0;
        *(undefined8 *)(this + 8) = 0;
        *(undefined8 *)this = 0;
        lVar2 = FUN_003410d0(0,this,param_1 + 2);
        if (lVar2 == 0) break;
        FUN_004fe408(this + 0x28,this);
        std::__ndk1::mutex::~mutex(this);
        free(this);
        this = *(mutex **)(param_1 + 2);
      }
      uVar1 = FUN_004fe740(this,param_2,param_3,param_4,param_5);
      param_1 = (int *)(ulong)(uVar1 & 1);
    }
  }
  return param_1;
}


// ===== 004fe740  FUN_004fe740 =====

bool FUN_004fe740(long param_1,long param_2,long param_3,long param_4,int param_5)

{
  long lVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  
  if (param_2 == 0) {
    return false;
  }
  if ((param_5 != 0) && (param_3 == 0 && param_4 == 0)) {
    std::__ndk1::mutex::lock();
    uVar3 = *(uint *)(param_1 + 0x2c);
    if (uVar3 == 0) {
LAB_004fe900:
      std::__ndk1::mutex::unlock();
    }
    else {
      plVar11 = *(long **)(param_1 + 0x30);
      plVar6 = plVar11;
      if (*plVar11 != param_2) {
        uVar7 = 0;
        do {
          plVar6 = plVar6 + 3;
          if ((ulong)uVar3 - 1 == uVar7) goto LAB_004fe900;
          uVar7 = uVar7 + 1;
        } while (*plVar6 != param_2);
        if (uVar3 <= uVar7) goto LAB_004fe900;
        plVar6 = plVar11 + (uVar7 & 0xffffffff) * 3;
      }
      plVar11 = plVar11 + (ulong)(uVar3 - 1) * 3;
      lVar1 = plVar6[1];
      pcVar2 = (code *)plVar6[2];
      lVar13 = *plVar11;
      lVar8 = plVar11[2];
      plVar6[1] = plVar11[1];
      *plVar6 = lVar13;
      plVar6[2] = lVar8;
      if (*(int *)(param_1 + 0x2c) != 0) {
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
      }
      std::__ndk1::mutex::unlock();
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(lVar1);
      }
    }
    return true;
  }
  std::__ndk1::mutex::lock();
  uVar3 = *(uint *)(param_1 + 0x2c);
  uVar7 = (ulong)uVar3;
  plVar6 = *(long **)(param_1 + 0x30);
  if (uVar3 != 0) {
    if (*plVar6 != param_2) {
      uVar10 = 0;
      plVar11 = plVar6;
      do {
        plVar11 = plVar11 + 3;
        if (uVar7 - 1 == uVar10) goto LAB_004fe804;
        uVar10 = uVar10 + 1;
      } while (*plVar11 != param_2);
      if (uVar7 <= uVar10) goto LAB_004fe804;
      plVar6 = plVar6 + (uVar10 & 0xffffffff) * 3;
    }
    if (param_5 == 0) {
      std::__ndk1::mutex::unlock();
      bVar4 = false;
    }
    else {
      lVar1 = plVar6[1];
      pcVar2 = (code *)plVar6[2];
      *plVar6 = param_2;
      plVar6[1] = param_3;
      plVar6[2] = param_4;
      std::__ndk1::mutex::unlock();
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(lVar1);
      }
      bVar4 = true;
    }
    goto LAB_004fe84c;
  }
LAB_004fe804:
  uVar9 = *(uint *)(param_1 + 0x28);
  if ((int)uVar3 < (int)uVar9) {
LAB_004fe824:
    bVar4 = plVar6 != (long *)0x0;
    plVar6 = plVar6 + uVar7 * 3;
    *(int *)(param_1 + 0x2c) = (int)uVar7 + 1;
    *plVar6 = param_2;
    plVar6[1] = param_3;
    plVar6[2] = param_4;
  }
  else {
    if (-1 < (int)uVar9) {
      uVar12 = uVar9;
      if (uVar9 < uVar3 + 1) {
        do {
          uVar12 = uVar12 + (uVar12 >> 1) + 8;
        } while (uVar12 < uVar3 + 1);
        if (0xaaaaaaa < uVar12) {
LAB_004fe984:
          *(uint *)(param_1 + 0x28) = ~uVar9;
          goto LAB_004fe98c;
        }
        plVar6 = (long *)FUN_004fe9a4(param_1 + 0x28,uVar12);
        if (plVar6 == (long *)0x0) {
          uVar9 = *(uint *)(param_1 + 0x28);
          if (uVar9 < uVar12) goto LAB_004fe984;
          plVar6 = *(long **)(param_1 + 0x30);
        }
        else {
          *(long **)(param_1 + 0x30) = plVar6;
          *(uint *)(param_1 + 0x28) = uVar12;
        }
      }
      uVar7 = (ulong)*(uint *)(param_1 + 0x2c);
      goto LAB_004fe824;
    }
LAB_004fe98c:
    bVar4 = true;
    DAT_006870b0 = 0;
    DAT_006870b8 = 0;
    DAT_006870c0 = 0;
  }
  std::__ndk1::mutex::unlock();
LAB_004fe84c:
  bVar5 = false;
  if (-1 < *(int *)(param_1 + 0x28)) {
    bVar5 = bVar4;
  }
  return bVar5;
}


// ===== 004fe9a4  FUN_004fe9a4 =====

void * FUN_004fe9a4(int *param_1,uint param_2)

{
  void *pvVar1;
  void *__src;
  
  if (param_2 == 0) {
    if (*param_1 - 1U < 0xfffffffe) {
      free(*(void **)(param_1 + 2));
    }
    pvVar1 = (void *)0x0;
  }
  else {
    __src = *(void **)(param_1 + 2);
    if ((*param_1 != 0) || (__src == (void *)0x0)) {
      pvVar1 = realloc(__src,(ulong)param_2 * 0x18);
      return pvVar1;
    }
    pvVar1 = malloc((ulong)param_2 * 0x18);
    if ((pvVar1 != (void *)0x0) && (param_1[1] != 0)) {
      memcpy(pvVar1,__src,(ulong)(uint)param_1[1] * 0x18);
    }
  }
  return pvVar1;
}


// ===== 004fea48  rive_hb_blob_get_user_data =====

void rive_hb_blob_get_user_data(int *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_40;
  int *local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) || (*(long *)(param_1 + 2) == 0)) {
      param_1 = (int *)0x0;
    }
    else {
      local_40 = 0;
      local_38 = (int *)0x0;
      local_30 = 0;
      uVar2 = FUN_004feac8(*(long *)(param_1 + 2) + 0x28,param_2,&local_40);
      param_1 = local_38;
      if ((uVar2 & 1) == 0) {
        param_1 = (int *)0x0;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


// ===== 004feac8  FUN_004feac8 =====

undefined4 FUN_004feac8(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  
  std::__ndk1::mutex::lock();
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 == 0) {
LAB_004feb58:
    uVar5 = 0;
  }
  else {
    plVar2 = *(long **)(param_1 + 8);
    if (*plVar2 != param_2) {
      uVar3 = 0;
      plVar4 = plVar2;
      do {
        plVar4 = plVar4 + 3;
        if ((ulong)uVar1 - 1 == uVar3) goto LAB_004feb58;
        uVar3 = uVar3 + 1;
      } while (*plVar4 != param_2);
      if (uVar1 <= uVar3) goto LAB_004feb58;
      plVar2 = plVar2 + (uVar3 & 0xffffffff) * 3;
    }
    lVar7 = plVar2[1];
    lVar6 = *plVar2;
    param_3[2] = plVar2[2];
    param_3[1] = lVar7;
    *param_3 = lVar6;
    uVar5 = 1;
  }
  std::__ndk1::mutex::unlock();
  return uVar5;
}


// ===== 004feb78  rive_hb_blob_is_immutable =====

byte rive_hb_blob_is_immutable(long param_1)

{
  return (*(byte *)(param_1 + 4) ^ 0xff) & 1;
}


// ===== 004feb88  rive_hb_blob_get_length =====

undefined4 rive_hb_blob_get_length(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}


// ===== 004feb90  rive_hb_blob_get_data =====

undefined8 rive_hb_blob_get_data(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x18);
  }
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 004feba4  rive_hb_blob_get_data_writable =====

undefined8 rive_hb_blob_get_data_writable(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (((*(byte *)(param_1 + 4) & 1) == 0) || (uVar1 = FUN_004fe2d4(), (uVar1 & 1) == 0)) {
    uVar2 = 0;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
    }
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(param_1 + 0x18);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar2;
}


// ===== 004febf4  rive_hb_segment_properties_equal =====

bool rive_hb_segment_properties_equal(int *param_1,int *param_2)

{
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) &&
      (*(long *)(param_1 + 2) == *(long *)(param_2 + 2))) &&
     (*(long *)(param_1 + 4) == *(long *)(param_2 + 4))) {
    return *(long *)(param_1 + 6) == *(long *)(param_2 + 6);
  }
  return false;
}


// ===== 004fec50  rive_hb_segment_properties_hash =====

int rive_hb_segment_properties_hash(int *param_1)

{
  return param_1[2] + (param_1[1] + *param_1 * 0x1f) * 0x1f;
}


// ===== 004fec6c  rive_hb_segment_properties_overlay =====

void rive_hb_segment_properties_overlay(int *param_1,int *param_2)

{
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    if (*param_1 == 0) {
      *param_1 = *param_2;
    }
    else if (*param_1 != *param_2) {
      return;
    }
    if (param_1[1] == 0) {
      param_1[1] = param_2[1];
    }
    else if (param_1[1] != param_2[1]) {
      return;
    }
    if (*(long *)(param_1 + 2) == 0) {
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      return;
    }
  }
  return;
}


// ===== 004fecc0  FUN_004fecc0 =====

undefined8 FUN_004fecc0(long param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  ulong __size;
  uint uVar6;
  
  if (*(uint *)(param_1 + 0xdc) < param_2) {
    *(undefined1 *)(param_1 + 0x58) = 0;
    return 0;
  }
  if (*(char *)(param_1 + 0x58) == '\0') {
    return 0;
  }
  pvVar2 = *(void **)(param_1 + 0x70);
  pvVar3 = *(void **)(param_1 + 0x78);
  if (param_2 < 0xccccccd) {
    for (uVar6 = *(uint *)(param_1 + 0x68); uVar6 <= param_2; uVar6 = uVar6 + (uVar6 >> 1) + 0x20) {
    }
    if (((ulong)uVar6 * 0x14 & 0xffffffff00000000) == 0) {
      __size = (ulong)uVar6 * 0x14 & 0xffffffff;
      pvVar4 = realloc(*(void **)(param_1 + 0x80),__size);
      pvVar5 = realloc(*(void **)(param_1 + 0x70),__size);
      if ((pvVar4 != (void *)0x0) && (pvVar5 != (void *)0x0)) {
        *(void **)(param_1 + 0x70) = pvVar5;
        if (pvVar3 != pvVar2) {
          pvVar5 = pvVar4;
        }
        *(void **)(param_1 + 0x78) = pvVar5;
        *(void **)(param_1 + 0x80) = pvVar4;
        if (*(char *)(param_1 + 0x58) == '\0') {
          return 0;
        }
        *(uint *)(param_1 + 0x68) = uVar6;
        return 1;
      }
      *(undefined1 *)(param_1 + 0x58) = 0;
      if (pvVar4 == (void *)0x0) {
        pvVar4 = *(void **)(param_1 + 0x80);
      }
      else {
        *(void **)(param_1 + 0x80) = pvVar4;
      }
      if (pvVar5 != (void *)0x0) {
        pvVar1 = pvVar5;
        if (pvVar3 != pvVar2) {
          pvVar1 = pvVar4;
        }
        *(void **)(param_1 + 0x70) = pvVar5;
        *(void **)(param_1 + 0x78) = pvVar1;
        return 0;
      }
      pvVar5 = *(void **)(param_1 + 0x70);
      if (pvVar3 != pvVar2) {
        pvVar5 = pvVar4;
      }
      goto LAB_004feda0;
    }
  }
  *(undefined1 *)(param_1 + 0x58) = 0;
  pvVar5 = pvVar2;
  if (pvVar3 != pvVar2) {
    pvVar5 = *(void **)(param_1 + 0x80);
  }
LAB_004feda0:
  *(void **)(param_1 + 0x78) = pvVar5;
  return 0;
}


// ===== 004fedfc  FUN_004fedfc =====

undefined8 FUN_004fedfc(long param_1,int param_2,int param_3)

{
  uint uVar1;
  void *__src;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar1 = *(int *)(param_1 + 100) + param_3;
  if (((uVar1 == 0) || (uVar1 < *(uint *)(param_1 + 0x68))) ||
     (uVar3 = FUN_004fecc0(param_1,uVar1), (uVar3 & 1) != 0)) {
    __src = *(void **)(param_1 + 0x78);
    if (__src == *(void **)(param_1 + 0x70)) {
      uVar1 = *(uint *)(param_1 + 100);
      if ((uint)(*(int *)(param_1 + 0x5c) + param_2) < uVar1 + param_3) {
        *(void **)(param_1 + 0x78) = *(void **)(param_1 + 0x80);
        if (uVar1 != 0) {
          memcpy(*(void **)(param_1 + 0x80),__src,(ulong)uVar1 * 0x14);
        }
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 004fee98  FUN_004fee98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fee98(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  
  rive_hb_unicode_funcs_destroy(*(undefined8 *)(param_1 + 0x10));
  piVar3 = (int *)rive_hb_unicode_funcs_get_default();
  if (*piVar3 != 0) {
    FUN_00340fe0(1,piVar3);
  }
  *(int **)(param_1 + 0x10) = piVar3;
  uVar2 = _UNK_0024de28;
  uVar1 = _DAT_0024de20;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x58) = 1;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x28) = 0xffffffff00000000;
  uVar1 = DAT_0024e700;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined2 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd4) = uVar1;
  return;
}


// ===== 004fef3c  FUN_004fef3c =====

void FUN_004fef3c(long param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x60);
  if ((uVar4 != 0xffffffff) && (*(uint *)(param_1 + 0x68) <= uVar4 + 1)) {
    uVar2 = FUN_004fecc0(param_1,uVar4 + 1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    uVar4 = *(uint *)(param_1 + 0x60);
  }
  puVar3 = (undefined4 *)(*(long *)(param_1 + 0x70) + (ulong)uVar4 * 0x14);
  *(undefined8 *)(puVar3 + 1) = 0;
  *(undefined8 *)(puVar3 + 3) = 0;
  iVar1 = *(int *)(param_1 + 0x60);
  *puVar3 = param_2;
  puVar3[1] = 0;
  puVar3[2] = param_3;
  *(int *)(param_1 + 0x60) = iVar1 + 1;
  return;
}


// ===== 004fefc4  FUN_004fefc4 =====

void FUN_004fefc4(long param_1)

{
  ulong uVar1;
  
  if ((*(char *)(param_1 + 0x58) != '\0') &&
     (uVar1 = FUN_004ff02c(param_1,*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c)),
     (uVar1 & 1) != 0)) {
    if (*(long *)(param_1 + 0x78) != *(long *)(param_1 + 0x70)) {
      *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x70);
      *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x78);
    }
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 100);
  }
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return;
}


// ===== 004ff02c  FUN_004ff02c =====

undefined8 FUN_004ff02c(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 0x59) != '\0') {
    lVar4 = *(long *)(param_1 + 0x70);
    lVar3 = *(long *)(param_1 + 0x78);
    uVar1 = *(uint *)(param_1 + 100);
    uVar2 = (ulong)uVar1;
    uVar5 = *(uint *)(param_1 + 0x5c);
    if ((lVar3 != lVar4) || (uVar1 != uVar5)) {
      if ((uVar1 + param_2 != 0) && (*(uint *)(param_1 + 0x68) <= uVar1 + param_2)) {
        uVar2 = FUN_004fecc0(param_1);
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        lVar4 = *(long *)(param_1 + 0x70);
        lVar3 = *(long *)(param_1 + 0x78);
        uVar2 = (ulong)*(uint *)(param_1 + 100);
        uVar5 = *(uint *)(param_1 + 0x5c);
      }
      memmove((void *)(lVar3 + uVar2 * 0x14),(void *)(lVar4 + (ulong)uVar5 * 0x14),
              (ulong)param_2 * 0x14);
      uVar1 = *(uint *)(param_1 + 100);
    }
    *(uint *)(param_1 + 100) = uVar1 + param_2;
  }
  *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + param_2;
  return 1;
}


// ===== 004ff0d8  FUN_004ff0d8 =====

undefined8 FUN_004ff0d8(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  void *__src;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  if (*(char *)(param_1 + 0x59) == '\0') {
    *(uint *)(param_1 + 0x5c) = param_2;
  }
  else {
    if (*(char *)(param_1 + 0x58) == '\0') {
      return 0;
    }
    uVar8 = *(uint *)(param_1 + 100);
    uVar2 = uVar8 - param_2;
    if (param_2 <= uVar8) {
      if (param_2 <= uVar8 && uVar2 != 0) {
        uVar5 = *(uint *)(param_1 + 0x5c);
        uVar3 = uVar2 - uVar5;
        if (uVar5 <= uVar2 && uVar3 != 0) {
          iVar6 = *(int *)(param_1 + 0x60);
          if ((iVar6 + uVar3 != 0) && (*(uint *)(param_1 + 0x68) <= iVar6 + uVar3)) {
            uVar4 = FUN_004fecc0(param_1);
            if ((uVar4 & 1) == 0) {
              return 0;
            }
            uVar5 = *(uint *)(param_1 + 0x5c);
            iVar6 = *(int *)(param_1 + 0x60);
          }
          iVar1 = (uVar5 - iVar6) + *(int *)(param_1 + 0xe0);
          *(int *)(param_1 + 0xe0) = iVar1;
          if (iVar1 < 0) {
            *(undefined1 *)(param_1 + 0x58) = 0;
            return 0;
          }
          __src = (void *)(*(long *)(param_1 + 0x70) + (ulong)uVar5 * 0x14);
          memmove((void *)((long)__src + (ulong)uVar3 * 0x14),__src,(ulong)(iVar6 - uVar5) * 0x14);
          uVar7 = *(uint *)(param_1 + 0x60);
          uVar5 = *(int *)(param_1 + 0x5c) + uVar3;
          if ((uVar7 <= uVar5 && uVar5 - uVar7 != 0) && (uVar8 = (uVar5 - uVar7) * 0x14, uVar8 != 0)
             ) {
            memset((void *)(*(long *)(param_1 + 0x70) + (ulong)uVar7 * 0x14),0,(ulong)uVar8);
            uVar7 = *(uint *)(param_1 + 0x60);
            uVar5 = *(int *)(param_1 + 0x5c) + uVar3;
          }
          uVar8 = *(uint *)(param_1 + 100);
          *(uint *)(param_1 + 0x60) = uVar7 + uVar3;
        }
        *(uint *)(param_1 + 0x5c) = uVar5 - uVar2;
        *(uint *)(param_1 + 100) = uVar8 - uVar2;
        memmove((void *)(*(long *)(param_1 + 0x70) + (ulong)(uVar5 - uVar2) * 0x14),
                (void *)(*(long *)(param_1 + 0x78) + (ulong)(uVar8 - uVar2) * 0x14),
                (ulong)uVar2 * 0x14);
      }
    }
    else {
      param_2 = param_2 - uVar8;
      uVar4 = FUN_004fedfc(param_1,param_2,param_2);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      memmove((void *)(*(long *)(param_1 + 0x78) + (ulong)*(uint *)(param_1 + 100) * 0x14),
              (void *)(*(long *)(param_1 + 0x70) + (ulong)*(uint *)(param_1 + 0x5c) * 0x14),
              (ulong)param_2 * 0x14);
      *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + param_2;
      *(uint *)(param_1 + 100) = *(int *)(param_1 + 100) + param_2;
    }
  }
  return 1;
}


// ===== 004ff26c  FUN_004ff26c =====

void FUN_004ff26c(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  int *piVar16;
  
  iVar12 = *(int *)(param_1 + 0xe0) + (param_2 - param_3);
  *(int *)(param_1 + 0xe0) = iVar12;
  if (iVar12 < 0) {
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  lVar9 = *(long *)(param_1 + 0x70);
  uVar3 = *(uint *)(lVar9 + (ulong)param_2 * 0x14 + 8);
  uVar8 = uVar3;
  if (param_2 + 1 < param_3) {
    iVar12 = ~param_2 + param_3;
    puVar10 = (uint *)(lVar9 + (ulong)(param_2 + 1) * 0x14 + 8);
    do {
      if (*puVar10 <= uVar8) {
        uVar8 = *puVar10;
      }
      iVar12 = iVar12 + -1;
      puVar10 = puVar10 + 5;
    } while (iVar12 != 0);
  }
  uVar7 = param_3;
  if ((uVar8 != *(uint *)(lVar9 + (ulong)(param_3 - 1) * 0x14 + 8)) &&
     (uVar15 = *(uint *)(param_1 + 0x60), param_3 < uVar15)) {
    piVar16 = (int *)(lVar9 + (ulong)param_3 * 0x14 + 8);
    do {
      uVar7 = param_3;
      if (*(int *)(lVar9 + (ulong)(param_3 - 1) * 0x14 + 8) != *piVar16) break;
      param_3 = param_3 + 1;
      piVar16 = piVar16 + 5;
      uVar7 = uVar15;
    } while (uVar15 != param_3);
  }
  uVar4 = *(uint *)(param_1 + 0x5c);
  uVar15 = param_2;
  if (uVar8 != uVar3) {
    uVar15 = uVar4;
    if (param_2 <= uVar4) {
      uVar15 = param_2;
    }
    uVar6 = (ulong)param_2;
    puVar10 = (uint *)(lVar9 + (ulong)param_2 * 0x14 + -0xc);
    do {
      uVar13 = uVar6;
      if (uVar13 <= uVar4) goto LAB_004ff374;
      uVar5 = *puVar10;
      uVar6 = uVar13 - 1;
      puVar10 = puVar10 + -5;
    } while (uVar5 == uVar3);
    uVar15 = (uint)uVar13;
  }
LAB_004ff374:
  if (((uVar4 == uVar15) && (puVar10 = (uint *)(lVar9 + (ulong)uVar4 * 0x14 + 8), *puVar10 != uVar8)
      ) && (*(uint *)(param_1 + 100) != 0)) {
    lVar11 = *(long *)(param_1 + 0x78);
    lVar14 = (ulong)*(uint *)(param_1 + 100) * 0x14;
    do {
      lVar1 = lVar11 + lVar14;
      uVar3 = *(uint *)(lVar1 + -0xc);
      if (uVar3 != *puVar10) break;
      if (uVar3 != uVar8) {
        lVar2 = lVar11 + lVar14;
        *(uint *)(lVar2 + -0x10) = *(uint *)(lVar2 + -0x10) & 0xfffffff8;
      }
      lVar14 = lVar14 + -0x14;
      *(uint *)(lVar1 + -0xc) = uVar8;
    } while (lVar14 != 0);
  }
  if (uVar15 < uVar7) {
    lVar14 = (ulong)uVar7 - (ulong)uVar15;
    puVar10 = (uint *)(lVar9 + (ulong)uVar15 * 0x14 + 8);
    do {
      if (*puVar10 != uVar8) {
        puVar10[-1] = puVar10[-1] & 0xfffffff8;
      }
      lVar14 = lVar14 + -1;
      *puVar10 = uVar8;
      puVar10 = puVar10 + 5;
    } while (lVar14 != 0);
  }
  return;
}


// ===== 004ff428  FUN_004ff428 =====

void FUN_004ff428(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  int iVar8;
  int *piVar9;
  
  iVar8 = *(int *)(param_1 + 0xe0) + (param_2 - param_3);
  *(int *)(param_1 + 0xe0) = iVar8;
  if (iVar8 < 0) {
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  lVar4 = *(long *)(param_1 + 0x78);
  uVar1 = *(uint *)(lVar4 + (ulong)param_2 * 0x14 + 8);
  uVar3 = uVar1;
  if (param_2 + 1 < param_3) {
    iVar8 = ~param_2 + param_3;
    puVar7 = (uint *)(lVar4 + (ulong)(param_2 + 1) * 0x14 + 8);
    do {
      if (*puVar7 <= uVar3) {
        uVar3 = *puVar7;
      }
      iVar8 = iVar8 + -1;
      puVar7 = puVar7 + 5;
    } while (iVar8 != 0);
  }
  uVar6 = (ulong)param_2 + 1;
  puVar7 = (uint *)(lVar4 + (ulong)param_2 * 0x14 + -0xc);
  do {
    uVar6 = uVar6 - 1;
    if (uVar6 == 0) break;
    uVar2 = *puVar7;
    puVar7 = puVar7 + -5;
  } while (uVar2 == uVar1);
  uVar1 = *(uint *)(param_1 + 100);
  iVar8 = uVar1 - param_3;
  if (uVar1 < param_3 || iVar8 == 0) {
LAB_004ff4fc:
    if (param_3 != uVar1) goto LAB_004ff560;
  }
  else {
    piVar9 = (int *)(lVar4 + (ulong)param_3 * 0x14 + 8);
    do {
      if (*(int *)(lVar4 + (ulong)(param_3 - 1) * 0x14 + 8) != *piVar9) goto LAB_004ff4fc;
      iVar8 = iVar8 + -1;
      param_3 = param_3 + 1;
      piVar9 = piVar9 + 5;
    } while (iVar8 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x5c);
  param_3 = uVar1;
  if (uVar2 < *(uint *)(param_1 + 0x60)) {
    iVar8 = *(uint *)(param_1 + 0x60) - uVar2;
    puVar7 = (uint *)(*(long *)(param_1 + 0x70) + (ulong)uVar2 * 0x14 + 8);
    do {
      if (*puVar7 != *(uint *)(lVar4 + (ulong)(uVar1 - 1) * 0x14 + 8)) break;
      if (*puVar7 != uVar3) {
        puVar7[-1] = puVar7[-1] & 0xfffffff8;
      }
      iVar8 = iVar8 + -1;
      *puVar7 = uVar3;
      puVar7 = puVar7 + 5;
    } while (iVar8 != 0);
  }
LAB_004ff560:
  if ((uint)uVar6 < param_3) {
    lVar5 = (ulong)param_3 - (uVar6 & 0xffffffff);
    puVar7 = (uint *)(lVar4 + (uVar6 & 0xffffffff) * 0x14 + 8);
    do {
      if (*puVar7 != uVar3) {
        puVar7[-1] = puVar7[-1] & 0xfffffff8;
      }
      lVar5 = lVar5 + -1;
      *puVar7 = uVar3;
      puVar7 = puVar7 + 5;
    } while (lVar5 != 0);
  }
  return;
}


// ===== 004ff5ac  FUN_004ff5ac =====

void FUN_004ff5ac(long param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  uint *puVar10;
  
  uVar1 = *(uint *)(param_1 + 0x5c);
  uVar2 = (ulong)uVar1;
  lVar6 = *(long *)(param_1 + 0x70);
  uVar5 = uVar1 + 1;
  uVar3 = *(uint *)(lVar6 + uVar2 * 0x14 + 8);
  if (uVar5 < *(uint *)(param_1 + 0x60)) {
    if (uVar3 == *(uint *)(lVar6 + (ulong)uVar5 * 0x14 + 8)) goto LAB_004ff67c;
    iVar7 = *(int *)(param_1 + 100);
    if (iVar7 == 0) {
      FUN_004ff68c(param_1,uVar2,uVar1 + 2);
      uVar5 = *(int *)(param_1 + 0x5c) + 1;
      goto LAB_004ff67c;
    }
  }
  else {
    iVar7 = *(int *)(param_1 + 100);
    if (iVar7 == 0) goto LAB_004ff67c;
  }
  uVar9 = iVar7 - 1;
  lVar8 = *(long *)(param_1 + 0x78);
  uVar1 = *(uint *)(lVar8 + (ulong)uVar9 * 0x14 + 8);
  if (uVar3 < uVar1) {
    uVar4 = *(uint *)(lVar6 + uVar2 * 0x14 + 4);
    do {
      puVar10 = (uint *)(lVar8 + (ulong)uVar9 * 0x14 + 8);
      if (*puVar10 != uVar1) break;
      *puVar10 = uVar3;
      lVar6 = lVar8 + (ulong)uVar9 * 0x14;
      uVar9 = uVar9 - 1;
      *(uint *)(lVar6 + 4) = *(uint *)(lVar6 + 4) & 0xfffffff8 | uVar4 & 7;
    } while (uVar9 != 0xffffffff);
  }
LAB_004ff67c:
  *(uint *)(param_1 + 0x5c) = uVar5;
  return;
}


// ===== 004ff68c  FUN_004ff68c =====

void FUN_004ff68c(long param_1,int param_2,int param_3)

{
  if ((uint)(param_3 - param_2) < 2) {
    return;
  }
  if (1 < *(uint *)(param_1 + 0x1c)) {
    FUN_004ff6b0();
    return;
  }
  FUN_004ff26c();
  return;
}


// ===== 004ff6b0  FUN_004ff6b0 =====

void FUN_004ff6b0(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_3 == 0xffffffff) || (param_3 - param_2 < 0x100)) {
    uVar1 = *(uint *)(param_1 + 0x60);
    if (param_3 <= *(uint *)(param_1 + 0x60)) {
      uVar1 = param_3;
    }
    if (1 < uVar1 - param_2) {
      FUN_004ff6f8(param_1,3,param_2,uVar1,1,0);
      return;
    }
  }
  return;
}


// ===== 004ff6f8  FUN_004ff6f8 =====

void FUN_004ff6f8(long param_1,uint param_2,ulong param_3,uint param_4,ulong param_5,ulong param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = (uint)param_3;
  if (((param_6 & 1) == 0) || (*(char *)(param_1 + 0x59) == '\0')) {
    if ((param_5 & 1) == 0) {
      if (param_4 <= uVar2) {
        return;
      }
      lVar4 = (ulong)param_4 - (param_3 & 0xffffffff);
      puVar5 = (uint *)(*(long *)(param_1 + 0x70) + (param_3 & 0xffffffff) * 0x14 + 4);
      do {
        lVar4 = lVar4 + -1;
        *puVar5 = *puVar5 | param_2;
        puVar5 = puVar5 + 5;
      } while (lVar4 != 0);
      return;
    }
    lVar4 = *(long *)(param_1 + 0x70);
    if (uVar2 != param_4) {
      if (*(int *)(param_1 + 0x1c) != 2) {
        uVar7 = *(uint *)(lVar4 + (param_3 & 0xffffffff) * 0x14 + 8);
        uVar2 = *(uint *)(lVar4 + (ulong)(param_4 - 1) * 0x14 + 8);
        if (uVar2 <= uVar7) {
          uVar7 = uVar2;
        }
        goto LAB_004ff97c;
      }
      if (uVar2 < param_4) {
        uVar7 = 0xffffffff;
        lVar3 = (ulong)param_4 - (param_3 & 0xffffffff);
        puVar5 = (uint *)(lVar4 + (param_3 & 0xffffffff) * 0x14 + 8);
        do {
          if (*puVar5 <= uVar7) {
            uVar7 = *puVar5;
          }
          lVar3 = lVar3 + -1;
          puVar5 = puVar5 + 5;
        } while (lVar3 != 0);
        goto LAB_004ff97c;
      }
    }
    uVar7 = 0xffffffff;
    goto LAB_004ff97c;
  }
  if ((param_5 & 1) == 0) {
    if (uVar2 < *(uint *)(param_1 + 100)) {
      lVar4 = (ulong)*(uint *)(param_1 + 100) - (param_3 & 0xffffffff);
      puVar5 = (uint *)(*(long *)(param_1 + 0x78) + (param_3 & 0xffffffff) * 0x14 + 4);
      do {
        lVar4 = lVar4 + -1;
        *puVar5 = *puVar5 | param_2;
        puVar5 = puVar5 + 5;
      } while (lVar4 != 0);
    }
    uVar2 = *(uint *)(param_1 + 0x5c);
    if (uVar2 < param_4) {
      lVar4 = (ulong)param_4 - (ulong)uVar2;
      puVar5 = (uint *)(*(long *)(param_1 + 0x70) + (ulong)uVar2 * 0x14 + 4);
      do {
        lVar4 = lVar4 + -1;
        *puVar5 = *puVar5 | param_2;
        puVar5 = puVar5 + 5;
      } while (lVar4 != 0);
    }
    return;
  }
  uVar7 = *(uint *)(param_1 + 0x5c);
  if (uVar7 == param_4) {
LAB_004ff8e0:
    uVar6 = 0xffffffff;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x70);
    if (*(int *)(param_1 + 0x1c) == 2) {
      if (param_4 <= uVar7) goto LAB_004ff8e0;
      uVar6 = 0xffffffff;
      lVar3 = (ulong)param_4 - (ulong)uVar7;
      puVar5 = (uint *)(lVar4 + (ulong)uVar7 * 0x14 + 8);
      do {
        if (*puVar5 <= uVar6) {
          uVar6 = *puVar5;
        }
        lVar3 = lVar3 + -1;
        puVar5 = puVar5 + 5;
      } while (lVar3 != 0);
    }
    else {
      uVar6 = *(uint *)(lVar4 + (ulong)uVar7 * 0x14 + 8);
      uVar7 = *(uint *)(lVar4 + (ulong)(param_4 - 1) * 0x14 + 8);
      if (uVar7 <= uVar6) {
        uVar6 = uVar7;
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 100);
  lVar4 = *(long *)(param_1 + 0x78);
  uVar7 = uVar6;
  if (uVar1 != uVar2) {
    if (*(int *)(param_1 + 0x1c) == 2) {
      if (uVar2 < uVar1) {
        lVar3 = (ulong)uVar1 - (param_3 & 0xffffffff);
        puVar5 = (uint *)(lVar4 + (param_3 & 0xffffffff) * 0x14 + 8);
        do {
          if (*puVar5 <= uVar7) {
            uVar7 = *puVar5;
          }
          lVar3 = lVar3 + -1;
          puVar5 = puVar5 + 5;
        } while (lVar3 != 0);
      }
    }
    else {
      uVar7 = *(uint *)(lVar4 + (param_3 & 0xffffffff) * 0x14 + 8);
      uVar2 = *(uint *)(lVar4 + (ulong)(uVar1 - 1) * 0x14 + 8);
      if (uVar2 <= uVar7) {
        uVar7 = uVar2;
      }
      if (uVar6 <= uVar7) {
        uVar7 = uVar6;
      }
    }
  }
  FUN_004ff990(param_1);
  lVar4 = *(long *)(param_1 + 0x70);
  param_3 = (ulong)*(uint *)(param_1 + 0x5c);
LAB_004ff97c:
  FUN_004ff990(param_1,lVar4,param_3,param_4,uVar7,param_2);
  return;
}


// ===== 004ff990  FUN_004ff990 =====

void FUN_004ff990(long param_1,long param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  
  if (param_3 - param_4 != 0) {
    iVar3 = *(int *)(param_1 + 0xe0) + (param_3 - param_4);
    *(int *)(param_1 + 0xe0) = iVar3;
    if (iVar3 < 0) {
      *(undefined1 *)(param_1 + 0x58) = 0;
    }
    uVar4 = (ulong)param_3;
    if (*(int *)(param_1 + 0x1c) != 2) {
      uVar1 = *(uint *)(param_2 + uVar4 * 0x14 + 8);
      uVar2 = *(uint *)(param_2 + (ulong)(param_4 - 1) * 0x14 + 8);
      if ((uVar1 == param_5) || (uVar2 == param_5)) {
        if (uVar1 != param_5) {
          if (param_4 <= param_3) {
            return;
          }
          iVar3 = param_4 - param_3;
          puVar6 = (uint *)(param_2 + uVar4 * 0x14 + 4);
          do {
            if (puVar6[1] == uVar2) {
              return;
            }
            iVar3 = iVar3 + -1;
            *puVar6 = *puVar6 | param_6;
            puVar6 = puVar6 + 5;
          } while (iVar3 != 0);
          return;
        }
        if (param_4 <= param_3) {
          return;
        }
        uVar7 = (ulong)param_4;
        puVar6 = (uint *)(param_2 + (ulong)param_4 * 0x14 + -0x10);
        do {
          if (puVar6[1] == param_5) {
            return;
          }
          uVar7 = uVar7 - 1;
          *puVar6 = *puVar6 | param_6;
          puVar6 = puVar6 + -5;
        } while (uVar4 < uVar7);
        return;
      }
    }
    if (param_3 < param_4) {
      lVar5 = param_4 - uVar4;
      puVar6 = (uint *)(param_2 + uVar4 * 0x14 + 4);
      do {
        if (puVar6[1] != param_5) {
          *puVar6 = *puVar6 | param_6;
        }
        lVar5 = lVar5 + -1;
        puVar6 = puVar6 + 5;
      } while (lVar5 != 0);
    }
  }
  return;
}


// ===== 004ffab4  FUN_004ffab4 =====

void FUN_004ffab4(long param_1,code *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar3 = *(uint *)(param_1 + 0x60);
  if (uVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar10 = 0;
    uVar11 = 0;
    do {
      uVar7 = (*param_2)(*(long *)(param_1 + 0x70) + uVar10 * 0x14);
      if ((uVar7 & 1) == 0) {
        if (uVar10 != uVar11) {
          puVar1 = (undefined8 *)(*(long *)(param_1 + 0x70) + uVar10 * 0x14);
          puVar2 = (undefined8 *)(*(long *)(param_1 + 0x70) + (ulong)uVar11 * 0x14);
          uVar13 = puVar1[1];
          uVar12 = *puVar1;
          *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
          puVar2[1] = uVar13;
          *puVar2 = uVar12;
          puVar1 = (undefined8 *)(*(long *)(param_1 + 0x80) + uVar10 * 0x14);
          puVar2 = (undefined8 *)(*(long *)(param_1 + 0x80) + (ulong)uVar11 * 0x14);
          uVar13 = puVar1[1];
          uVar12 = *puVar1;
          *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
          puVar2[1] = uVar13;
          *puVar2 = uVar12;
        }
        uVar11 = uVar11 + 1;
      }
      else {
        lVar8 = *(long *)(param_1 + 0x70);
        uVar4 = *(uint *)(lVar8 + uVar10 * 0x14 + 8);
        if (uVar10 + 1 < (ulong)uVar3) {
          if (uVar4 != *(uint *)(lVar8 + (uVar10 + 1) * 0x14 + 8)) {
            if (uVar11 != 0) goto LAB_004ffba8;
            FUN_004ff68c(param_1,uVar10 & 0xffffffff,(int)uVar10 + 2);
          }
        }
        else if (uVar11 != 0) {
LAB_004ffba8:
          uVar5 = *(uint *)(lVar8 + (ulong)(uVar11 - 1) * 0x14 + 8);
          if (uVar4 < uVar5) {
            uVar6 = *(uint *)(lVar8 + uVar10 * 0x14 + 4);
            uVar7 = (ulong)uVar11;
            puVar9 = (uint *)(lVar8 + (ulong)uVar11 * 0x14 + -0x10);
            do {
              if (puVar9[1] != uVar5) break;
              uVar7 = uVar7 - 1;
              *puVar9 = *puVar9 & 0xfffffff8 | uVar6 & 7;
              puVar9[1] = uVar4;
              puVar9 = puVar9 + -5;
            } while (uVar7 != 0);
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar3);
  }
  *(uint *)(param_1 + 0x60) = uVar11;
  return;
}


// ===== 004ffc1c  rive_hb_buffer_create =====

undefined4 * rive_hb_buffer_create(void)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)calloc(1,0xe8);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)&DAT_00686190;
  }
  else {
    *puVar2 = 1;
    *(undefined1 *)(puVar2 + 1) = 1;
    uVar1 = DAT_0024e730;
    *(undefined8 *)(puVar2 + 2) = 0;
    *(undefined8 *)(puVar2 + 0x37) = uVar1;
    FUN_004fee98();
  }
  return puVar2;
}


