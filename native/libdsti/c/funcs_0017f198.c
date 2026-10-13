// ===== 0017f198  FUN_0017f198 =====

bool FUN_0017f198(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x18) == 3) {
    bVar1 = *(short *)(param_1 + 0x16) == 10;
    if ((*(int *)(param_1 + 0x50) == 0) &&
       (uVar2 = FUN_0017eb10(param_1 + 0x20,param_1 + 0x68,param_1), (uVar2 & 1) != 0)) {
      return bVar1;
    }
  }
  else {
    bVar1 = false;
  }
  *(undefined4 *)(param_1 + 0x18) = 1;
  return bVar1;
}


// ===== 0017f1fc  FUN_0017f1fc =====

void FUN_0017f1fc(long param_1)

{
  ulong uVar1;
  
  if (((*(int *)(param_1 + 0x18) != 2) || (*(int *)(param_1 + 0x50) != 0)) ||
     (uVar1 = FUN_0017eb10(param_1 + 0x20,param_1 + 0x68,param_1), (uVar1 & 1) == 0)) {
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  return;
}


// ===== 0017f248  FUN_0017f248 =====

undefined1 * FUN_0017f248(undefined1 *param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  
  if (*(int *)(param_1 + 0x18) == 5) {
    puVar2 = param_1;
    if (((byte)param_1[0x17] >> 4 & 1) == 0) {
      puVar2 = *(undefined1 **)(param_1 + 8);
    }
    if ((*(int *)(param_1 + 0x50) == 0) &&
       (uVar1 = FUN_0017eb10(param_1 + 0x20,param_1 + 0x68,param_1), (uVar1 & 1) != 0)) {
      return puVar2;
    }
  }
  else {
    puVar2 = &DAT_00145e06;
  }
  *(undefined4 *)(param_1 + 0x18) = 1;
  return puVar2;
}


// ===== 0017f3b4  FUN_0017f3b4 =====

void FUN_0017f3b4(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 - 2U < 5) {
    uVar1 = *(ushort *)(param_1 + 0x16) & 7;
    if (uVar1 != 3) {
      if (uVar1 != 4) {
LAB_0017f3ec:
        iVar3 = 0;
        goto LAB_0017f41c;
      }
      goto LAB_0017f404;
    }
LAB_0017f410:
    FUN_0017ee8c(param_1);
  }
  else {
    if (iVar3 == 7) goto LAB_0017f410;
    if (iVar3 != 9) goto LAB_0017f3ec;
LAB_0017f404:
    FUN_0017eef0(param_1);
  }
  iVar3 = 1;
LAB_0017f41c:
  do {
    switch(*(undefined4 *)(param_1 + 0x18)) {
    case 1:
      goto switchD_0017f304_caseD_1;
    case 7:
    case 9:
      iVar3 = iVar3 + 1;
      break;
    case 8:
    case 10:
      iVar3 = iVar3 + -1;
    }
    if ((*(int *)(param_1 + 0x50) != 0) ||
       (uVar2 = FUN_0017eb10(param_1 + 0x20,param_1 + 0x68,param_1), (uVar2 & 1) == 0)) {
      *(undefined4 *)(param_1 + 0x18) = 1;
    }
  } while (0 < iVar3);
switchD_0017f304_caseD_1:
  return;
}


// ===== 0017f42c  FUN_0017f42c =====

int FUN_0017f42c(long param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x18) - 2U < 5) && ((*(ushort *)(param_1 + 0x16) & 7) == 6)) {
    iVar1 = FUN_0017f084();
    if (iVar1 - 1U < 3) {
      return iVar1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x118) = 1;
  }
  return 0;
}


// ===== 0017f480  FUN_0017f480 =====

void FUN_0017f480(long param_1)

{
  long *plVar1;
  __shared_weak_count *p_Var2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  bool bVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  __shared_weak_count *this;
  long lVar10;
  
  plVar5 = *(long **)(param_1 + 0xd0);
  for (plVar3 = *(long **)(param_1 + 200); plVar3 != plVar5; plVar3 = plVar3 + 2) {
    lVar9 = *plVar3;
    lVar10 = *(long *)(param_1 + 0xb8);
    lVar8 = FUN_0017f590(lVar9);
    lVar8 = FUN_001874f4(lVar10 + 0x68,lVar8 + 0x18);
    if (lVar8 != 0) {
      if (*(char *)(lVar9 + 0x49) == '\0') {
        lVar10 = *(long *)(lVar8 + 0x28);
        if (lVar9 != lVar10) {
          FUN_00187b7c(lVar9 + 0x20,*(undefined8 *)(lVar10 + 0x20),*(undefined8 *)(lVar10 + 0x28));
        }
        cVar7 = *(char *)(lVar9 + 0x18);
        if (cVar7 != '\0') {
          cVar7 = *(char *)(*(long *)(lVar8 + 0x28) + 1) != '\0';
        }
        *(char *)(lVar9 + 0x18) = cVar7;
      }
      else if (*(char *)(lVar9 + 0x49) == '\x02') {
        lVar9 = FUN_0017f590(lVar9);
        uVar4 = *(undefined8 *)(lVar8 + 0x28);
        lVar8 = *(long *)(lVar8 + 0x30);
        if (lVar8 != 0) {
          plVar1 = (long *)(lVar8 + 8);
          do {
            cVar7 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = *plVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        this = *(__shared_weak_count **)(lVar9 + 0x50);
        *(undefined8 *)(lVar9 + 0x48) = uVar4;
        *(long *)(lVar9 + 0x50) = lVar8;
        if (this != (__shared_weak_count *)0x0) {
          p_Var2 = this + 8;
          do {
            lVar8 = *(long *)p_Var2;
            cVar7 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
            if (bVar6) {
              *(long *)p_Var2 = lVar8 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*(long *)this + 0x10))(this);
            std::__ndk1::__shared_weak_count::__release_weak(this);
          }
        }
      }
    }
  }
  return;
}


// ===== 0017f590  FUN_0017f590 =====

void FUN_0017f590(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)(param_1 + 0x70);
  lVar2 = *plVar4;
  if (lVar2 == 0) {
    puVar3 = (undefined8 *)operator_new(0x70);
    uVar5 = NEON_fmov(0x3f800000,4);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 2) = 0x3f800000;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[1] = uVar5;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined1 *)(puVar3 + 7) = 1;
    *(undefined4 *)(puVar3 + 6) = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    local_30 = 0;
    FUN_00185d68(plVar4,puVar3);
    FUN_00185d68(&local_30,0);
    lVar2 = *plVar4;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


// ===== 0017f644  FUN_0017f644 =====

void FUN_0017f644(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  __shared_weak_count *this;
  char *__s1;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  __shared_weak_count *p_Var9;
  __shared_weak_count *p_Var10;
  __shared_weak_count *p_Var11;
  double dVar12;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar4 = *(int *)(param_1 + 0x18);
  if (iVar4 - 2U < 5) {
    uVar7 = *(ushort *)(param_1 + 0x16) & 7;
LAB_0017f6a4:
    if (uVar7 == 3) {
      FUN_0017ee8c(param_1);
      this = (__shared_weak_count *)operator_new(0xc0);
      p_Var9 = this + 8;
      *(long *)p_Var9 = 0;
      p_Var11 = this + 0x18;
      *(undefined8 *)p_Var11 = 0;
      *(undefined ***)this = &PTR_FUN_00209118;
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined4 *)(this + 0x30) = 0x10001;
      *(undefined8 *)(this + 0x20) = 0;
      *(undefined8 *)(this + 0x28) = 0;
      p_Var10 = this + 0x38;
      *(undefined8 *)(this + 0x40) = 0;
      *(undefined8 *)p_Var10 = 0;
      *(undefined4 *)(this + 0x68) = 0x42700000;
      *(undefined8 *)(this + 0x50) = 0;
      *(undefined8 *)(this + 0x48) = 0;
      *(undefined8 *)(this + 0x60) = 0;
      *(undefined8 *)(this + 0x58) = 0;
      this[0x6c] = (__shared_weak_count)0x0;
      *(undefined8 *)(this + 0x78) = 0;
      *(undefined8 *)(this + 0x70) = 0;
      *(undefined4 *)(this + 0xa0) = 0x3f800000;
      *(undefined8 *)(this + 0x88) = 0;
      *(undefined8 *)(this + 0x80) = 0;
      *(undefined8 *)(this + 0x98) = 0;
      *(undefined8 *)(this + 0x90) = 0;
      *(undefined8 *)(this + 0xa8) = 0;
      *(undefined8 *)(this + 0xb0) = 0;
      *(undefined8 *)(this + 0xb8) = 0;
      *(__shared_weak_count **)(param_1 + 0xb8) = p_Var11;
      __s1 = (char *)FUN_0017ef54(param_1);
      while (__s1 != (char *)0x0) {
        iVar4 = strcmp(__s1,"v");
        if (iVar4 == 0) {
          if ((4 < *(int *)(param_1 + 0x18) - 2U) || ((*(ushort *)(param_1 + 0x16) & 7) != 5)) {
LAB_0017f99c:
            iVar4 = 1;
            goto LAB_0017f9a0;
          }
          uVar6 = FUN_0017f248(param_1);
          FUN_001634e0(&local_80,uVar6);
          if (((byte)*p_Var10 & 1) != 0) {
            operator_delete(*(void **)(this + 0x48));
          }
          *(undefined8 *)(this + 0x48) = local_70;
          *(undefined8 *)(this + 0x40) = uStack_78;
          *(undefined8 *)p_Var10 = local_80;
        }
        else {
          iVar4 = strcmp(__s1,"w");
          if (iVar4 == 0) {
            if ((4 < *(int *)(param_1 + 0x18) - 2U) || ((*(ushort *)(param_1 + 0x16) & 7) != 6))
            goto LAB_0017f99c;
            uVar5 = FUN_0017f084(param_1);
            *(undefined4 *)(this + 0x50) = uVar5;
          }
          else {
            iVar4 = strcmp(__s1,"h");
            if (iVar4 == 0) {
              if ((4 < *(int *)(param_1 + 0x18) - 2U) || ((*(ushort *)(param_1 + 0x16) & 7) != 6))
              goto LAB_0017f99c;
              uVar5 = FUN_0017f084(param_1);
              *(undefined4 *)(this + 0x54) = uVar5;
            }
            else {
              iVar4 = strcmp(__s1,"ip");
              if (iVar4 == 0) {
                if ((4 < *(int *)(param_1 + 0x18) - 2U) || ((*(ushort *)(param_1 + 0x16) & 7) != 6))
                goto LAB_0017f99c;
                dVar12 = (double)FUN_0017f0e8(param_1);
                *(long *)(this + 0x58) = (long)dVar12;
              }
              else {
                iVar4 = strcmp(__s1,"op");
                if (iVar4 == 0) {
                  if ((4 < *(int *)(param_1 + 0x18) - 2U) ||
                     ((*(ushort *)(param_1 + 0x16) & 7) != 6)) goto LAB_0017f99c;
                  dVar12 = (double)FUN_0017f0e8(param_1);
                  *(long *)(this + 0x60) = (long)dVar12;
                }
                else {
                  iVar4 = strcmp(__s1,"fr");
                  if (iVar4 == 0) {
                    if ((4 < *(int *)(param_1 + 0x18) - 2U) ||
                       ((*(ushort *)(param_1 + 0x16) & 7) != 6)) goto LAB_0017f99c;
                    dVar12 = (double)FUN_0017f0e8(param_1);
                    *(float *)(this + 0x68) = (float)dVar12;
                  }
                  else {
                    iVar4 = strcmp(__s1,"assets");
                    if (iVar4 == 0) {
                      FUN_0017faa8(param_1,p_Var11);
                    }
                    else {
                      iVar4 = strcmp(__s1,"layers");
                      if (iVar4 == 0) {
                        FUN_0017fc70(param_1,p_Var11);
                      }
                      else {
                        FUN_0017f3b4(param_1);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        __s1 = (char *)FUN_0017ef54(param_1);
      }
      iVar4 = *(int *)(param_1 + 0x18);
      if (iVar4 == 1) {
LAB_0017f9a0:
        *(char *)(param_1 + 0x118) = (char)iVar4;
      }
      else if (((byte)*p_Var10 & 1) == 0) {
        if ((byte)*p_Var10 >> 1 != 0) {
LAB_0017fa08:
          if (*(long *)(this + 0x70) != 0) {
            FUN_0017f480(param_1);
            this[0x30] = *(__shared_weak_count *)(*(long *)(this + 0x70) + 0x18);
            *(ulong *)(*(long *)(this + 0x70) + 100) =
                 CONCAT44((int)*(undefined8 *)(this + 0x60),(int)*(undefined8 *)(this + 0x58));
            FUN_00188004(this + 0xa8);
            uVar6 = *(undefined8 *)(param_1 + 0xf8);
            *(undefined8 *)(this + 0xb0) = *(undefined8 *)(param_1 + 0x100);
            *(undefined8 *)(this + 0xa8) = uVar6;
            *(undefined8 *)(this + 0xb8) = *(undefined8 *)(param_1 + 0x108);
            *(undefined8 *)(param_1 + 0xf8) = 0;
            *(undefined8 *)(param_1 + 0x100) = 0;
            *(undefined8 *)(param_1 + 0x108) = 0;
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(p_Var9,0x10);
              if (bVar2) {
                *(long *)p_Var9 = *(long *)p_Var9 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            p_Var10 = *(__shared_weak_count **)(param_1 + 0xb0);
            *(__shared_weak_count **)(param_1 + 0xa8) = p_Var11;
            *(__shared_weak_count **)(param_1 + 0xb0) = this;
            if (p_Var10 != (__shared_weak_count *)0x0) {
              p_Var11 = p_Var10 + 8;
              do {
                lVar8 = *(long *)p_Var11;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(p_Var11,0x10);
                if (bVar2) {
                  *(long *)p_Var11 = lVar8 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (lVar8 == 0) {
                (**(code **)(*(long *)p_Var10 + 0x10))(p_Var10);
                std::__ndk1::__shared_weak_count::__release_weak(p_Var10);
              }
            }
          }
        }
      }
      else if (*(long *)(this + 0x40) != 0) goto LAB_0017fa08;
      do {
        lVar8 = *(long *)p_Var9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(p_Var9,0x10);
        if (bVar2) {
          *(long *)p_Var9 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*(long *)this + 0x10))(this);
        std::__ndk1::__shared_weak_count::__release_weak(this);
      }
      goto LAB_0017f9d0;
    }
  }
  else {
    uVar7 = 3;
    if (iVar4 != 7) {
      uVar7 = 0xffffffff;
    }
    if (iVar4 != 9) goto LAB_0017f6a4;
  }
  *(undefined1 *)(param_1 + 0x118) = 1;
LAB_0017f9d0:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017faa8  FUN_0017faa8 =====

void FUN_0017faa8(long param_1,long param_2)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  __shared_weak_count *p_Var8;
  long local_68;
  __shared_weak_count *local_60;
  undefined1 auStack_58 [8];
  long local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (*(int *)(param_1 + 0x18) - 2U < 5) {
    if ((*(ushort *)(param_1 + 0x16) & 7) != 4) goto LAB_0017faf4;
LAB_0017fb04:
    FUN_0017eef0(param_1);
    uVar5 = FUN_0017f004(param_1);
    if ((uVar5 & 1) != 0) {
      do {
        if (*(char *)(param_1 + 0x118) != '\0') goto LAB_0017fc08;
        FUN_0017fed0(&local_68,param_1);
        if (local_68 == 0) {
          if (local_60 != (__shared_weak_count *)0x0) {
            p_Var8 = local_60 + 8;
            do {
              lVar6 = *(long *)p_Var8;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(p_Var8,0x10);
              if (bVar3) {
                *(long *)p_Var8 = lVar6 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar6 == 0) {
              (**(code **)(*(long *)local_60 + 0x10))(local_60);
              std::__ndk1::__shared_weak_count::__release_weak(local_60);
            }
          }
          goto LAB_0017fc08;
        }
        local_50 = local_68 + 8;
        lVar6 = FUN_0018803c(param_2 + 0x68,local_50,&DAT_00147148,&local_50,auStack_58);
        if (local_60 != (__shared_weak_count *)0x0) {
          p_Var8 = local_60 + 8;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(p_Var8,0x10);
            if (bVar3) {
              *(long *)p_Var8 = *(long *)p_Var8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        p_Var8 = *(__shared_weak_count **)(lVar6 + 0x30);
        *(long *)(lVar6 + 0x28) = local_68;
        *(__shared_weak_count **)(lVar6 + 0x30) = local_60;
        if (p_Var8 != (__shared_weak_count *)0x0) {
          p_Var1 = p_Var8 + 8;
          do {
            lVar6 = *(long *)p_Var1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar3) {
              *(long *)p_Var1 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*(long *)p_Var8 + 0x10))(p_Var8);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var8);
          }
        }
        p_Var8 = local_60;
        if (local_60 != (__shared_weak_count *)0x0) {
          p_Var1 = local_60 + 8;
          do {
            lVar6 = *(long *)p_Var1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar3) {
              *(long *)p_Var1 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*(long *)local_60 + 0x10))(local_60);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var8);
          }
        }
        uVar5 = FUN_0017f004(param_1);
      } while ((uVar5 & 1) != 0);
    }
    iVar7 = *(int *)(param_1 + 0x18);
    if (iVar7 != 1) goto LAB_0017fc08;
  }
  else {
    if (*(int *)(param_1 + 0x18) == 9) goto LAB_0017fb04;
LAB_0017faf4:
    iVar7 = 1;
  }
  *(char *)(param_1 + 0x118) = (char)iVar7;
LAB_0017fc08:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017fc70  FUN_0017fc70 =====

void FUN_0017fc70(long param_1,long param_2)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  bool bVar5;
  undefined8 *puVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  ulong uVar7;
  int iVar8;
  long lVar9;
  __shared_weak_count *p_Var10;
  long local_58;
  __shared_weak_count *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  puVar6 = (undefined8 *)operator_new(0x90);
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = &PTR_FUN_00209248;
  *(undefined4 *)(puVar6 + 6) = 0x20001;
  puVar6[8] = 0;
  puVar6[7] = 0;
  puVar6[10] = 0;
  puVar6[9] = 0;
  *(undefined8 *)((long)puVar6 + 0x59) = 0;
  *(undefined8 *)((long)puVar6 + 0x51) = 0;
  *(undefined1 *)((long)puVar6 + 0x61) = 3;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *(undefined8 *)((long)puVar6 + 0x62) = 0;
  puVar6[0xd] = 0;
  puVar6[0xe] = 0xffffffffffffffff;
  *(undefined4 *)(puVar6 + 0xf) = 0x3f800000;
  *(undefined8 *)((long)puVar6 + 0x84) = 0;
  *(undefined8 *)((long)puVar6 + 0x7c) = 0;
  *(undefined4 *)((long)puVar6 + 0x8c) = 0;
  p_Var10 = *(__shared_weak_count **)(param_2 + 0x60);
  *(undefined8 **)(param_2 + 0x58) = puVar6 + 3;
  *(undefined8 **)(param_2 + 0x60) = puVar6;
  if (p_Var10 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var10 + 8;
    do {
      lVar9 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar5) {
        *(long *)p_Var1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*(long *)p_Var10 + 0x10))(p_Var10);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var10);
    }
  }
  this = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
          (param_2 + 0x58);
  this[0x49] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(this,"__");
  if (*(int *)(param_1 + 0x18) - 2U < 5) {
    if ((*(ushort *)(param_1 + 0x16) & 7) == 4) goto LAB_0017fd88;
LAB_0017fd78:
    iVar8 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x18) != 9) goto LAB_0017fd78;
LAB_0017fd88:
    FUN_0017eef0(param_1);
    uVar7 = FUN_0017f004(param_1);
    bVar5 = true;
    while ((uVar7 & 1) != 0) {
      if (*(char *)(param_1 + 0x118) != '\0') goto LAB_0017fe4c;
      FUN_00180880(&local_58,param_1,1);
      if (local_58 != 0) {
        if (bVar5) {
          bVar5 = *(char *)(local_58 + 0x18) != '\0';
        }
        else {
          bVar5 = false;
        }
        FUN_001812d4(*(long *)(param_2 + 0x58) + 0x20,&local_58);
      }
      p_Var10 = local_50;
      if (local_50 != (__shared_weak_count *)0x0) {
        p_Var1 = local_50 + 8;
        do {
          lVar9 = *(long *)p_Var1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar3) {
            *(long *)p_Var1 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*(long *)local_50 + 0x10))(local_50);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var10);
        }
      }
      uVar7 = FUN_0017f004(param_1);
    }
    iVar8 = *(int *)(param_1 + 0x18);
    if (iVar8 != 1) {
      *(bool *)(*(long *)(param_2 + 0x58) + 0x18) = bVar5;
      goto LAB_0017fe4c;
    }
  }
  *(char *)(param_1 + 0x118) = (char)iVar8;
LAB_0017fe4c:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0017fe78  FUN_0017fe78 =====

void FUN_0017fe78(long param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this;
  
  this = *(__shared_weak_count **)(param_1 + 8);
  if (this != (__shared_weak_count *)0x0) {
    p_Var1 = this + 8;
    do {
      lVar4 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
      return;
    }
  }
  return;
}


// ===== 0017fed0  FUN_0017fed0 =====

void FUN_0017fed0(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  ushort uVar2;
  __shared_weak_count *p_Var3;
  char cVar4;
  bool bVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  char *pcVar12;
  undefined8 uVar13;
  ulong uVar14;
  char *pcVar15;
  char *pcVar16;
  ulong *puVar17;
  __shared_weak_count *p_Var18;
  uint uVar19;
  long lVar20;
  char *pcVar21;
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d0 [16];
  char *local_c0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8;
  undefined7 uStack_b7;
  __shared_weak_count *p_Stack_b0;
  char *local_a8;
  ulong local_a0;
  __shared_weak_count *p_Stack_98;
  char *local_90;
  ulong local_80;
  __shared_weak_count *p_Stack_78;
  char *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  puVar11 = (undefined8 *)operator_new(0x68);
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = &PTR_FUN_00209150;
  pcVar21 = (char *)(puVar11 + 3);
  pcVar21[0] = '\0';
  pcVar21[1] = '\x01';
  pcVar21[2] = '\0';
  pcVar21[3] = '\0';
  pcVar21[4] = '\0';
  pcVar21[5] = '\0';
  pcVar21[6] = '\0';
  pcVar21[7] = '\0';
  puVar11[5] = 0;
  puVar11[4] = 0;
  puVar11[7] = 0;
  puVar11[6] = 0;
  puVar11[9] = 0;
  puVar11[8] = 0;
  puVar11[0xb] = 0;
  puVar11[10] = 0;
  puVar11[0xc] = 0;
  *param_1 = pcVar21;
  param_1[1] = puVar11;
  iVar9 = *(int *)(param_2 + 0x18);
  if (iVar9 - 2U < 5) {
    uVar19 = *(ushort *)(param_2 + 0x16) & 7;
LAB_0017ff70:
    if (uVar19 == 3) {
      local_80 = 0;
      p_Stack_78 = (__shared_weak_count *)0x0;
      local_70 = (char *)0x0;
      local_a0 = 0;
      p_Stack_98 = (__shared_weak_count *)0x0;
      local_90 = (char *)0x0;
      FUN_0017ee8c(param_2);
      pcVar12 = (char *)FUN_0017ef54(param_2);
      if (pcVar12 == (char *)0x0) {
        bVar7 = false;
      }
      else {
        bVar7 = false;
        do {
          iVar9 = strcmp(pcVar12,"w");
          if (iVar9 == 0) {
            if ((4 < *(int *)(param_2 + 0x18) - 2U) || ((*(ushort *)(param_2 + 0x16) & 7) != 6))
            goto LAB_00180300;
            uVar10 = FUN_0017f084(param_2);
            *(undefined4 *)(puVar11 + 10) = uVar10;
          }
          else {
            iVar9 = strcmp(pcVar12,"h");
            if (iVar9 == 0) {
              if ((4 < *(int *)(param_2 + 0x18) - 2U) || ((*(ushort *)(param_2 + 0x16) & 7) != 6))
              goto LAB_00180300;
              uVar10 = FUN_0017f084(param_2);
              *(undefined4 *)((long)puVar11 + 0x54) = uVar10;
            }
            else {
              iVar9 = strcmp(pcVar12,"p");
              if (iVar9 == 0) {
                *pcVar21 = '\x01';
                if ((4 < *(int *)(param_2 + 0x18) - 2U) || ((*(ushort *)(param_2 + 0x16) & 7) != 5))
                goto LAB_00180300;
                uVar13 = FUN_0017f248(param_2);
                FUN_001634e0(&local_b8,uVar13);
                if ((local_80 & 1) != 0) {
                  operator_delete(local_70);
                }
                local_80 = CONCAT71(uStack_b7,local_b8);
                p_Stack_78 = p_Stack_b0;
                local_70 = local_a8;
              }
              else {
                iVar9 = strcmp(pcVar12,"u");
                if (iVar9 == 0) {
                  if ((4 < *(int *)(param_2 + 0x18) - 2U) ||
                     ((*(ushort *)(param_2 + 0x16) & 7) != 5)) goto LAB_00180300;
                  uVar13 = FUN_0017f248(param_2);
                  FUN_001634e0(&local_b8,uVar13);
                  if ((local_a0 & 1) != 0) {
                    operator_delete(local_90);
                  }
                  local_a0 = CONCAT71(uStack_b7,local_b8);
                  p_Stack_98 = p_Stack_b0;
                  local_90 = local_a8;
                }
                else {
                  iVar9 = strcmp(pcVar12,"e");
                  if (iVar9 == 0) {
                    iVar9 = FUN_0017f084(param_2);
                    bVar7 = iVar9 != 0;
                  }
                  else {
                    iVar9 = strcmp(pcVar12,"id");
                    if (iVar9 == 0) {
                      if (4 < *(int *)(param_2 + 0x18) - 2U) goto LAB_00180300;
                      uVar2 = *(ushort *)(param_2 + 0x16) & 7;
                      if (uVar2 == 6) {
                        FUN_0017f084(param_2);
                        FUN_00180744(&local_b8);
                      }
                      else {
                        if (uVar2 != 5) goto LAB_00180300;
                        uVar13 = FUN_0017f248(param_2);
                        FUN_001634e0(&local_b8,uVar13);
                      }
                      if ((*(byte *)(puVar11 + 4) & 1) != 0) {
                        operator_delete((void *)puVar11[6]);
                      }
                      puVar11[6] = local_a8;
                      puVar11[5] = p_Stack_b0;
                      puVar11[4] = CONCAT71(uStack_b7,local_b8);
                    }
                    else {
                      iVar9 = strcmp(pcVar12,"layers");
                      if (iVar9 == 0) {
                        *pcVar21 = '\0';
                        if (*(int *)(param_2 + 0x18) - 2U < 5) {
                          if ((*(ushort *)(param_2 + 0x16) & 7) == 4) {
LAB_0018022c:
                            FUN_0017eef0(param_2);
                            uVar14 = FUN_0017f004(param_2);
                            bVar8 = true;
                            while ((uVar14 & 1) != 0) {
                              if (*(char *)(param_2 + 0x118) != '\0') goto LAB_0018031c;
                              FUN_00180880(&local_b8,param_2,0);
                              if (CONCAT71(uStack_b7,local_b8) != 0) {
                                if (bVar8) {
                                  bVar8 = *(char *)(CONCAT71(uStack_b7,local_b8) + 0x18) != '\0';
                                }
                                else {
                                  bVar8 = false;
                                }
                                FUN_001812d4(puVar11 + 7,&local_b8);
                              }
                              p_Var3 = p_Stack_b0;
                              if (p_Stack_b0 != (__shared_weak_count *)0x0) {
                                p_Var18 = p_Stack_b0 + 8;
                                do {
                                  lVar20 = *(long *)p_Var18;
                                  cVar4 = '\x01';
                                  bVar5 = (bool)ExclusiveMonitorPass(p_Var18,0x10);
                                  if (bVar5) {
                                    *(long *)p_Var18 = lVar20 + -1;
                                    cVar4 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar4 != '\0');
                                if (lVar20 == 0) {
                                  (**(code **)(*(long *)p_Stack_b0 + 0x10))(p_Stack_b0);
                                  std::__ndk1::__shared_weak_count::__release_weak(p_Var3);
                                }
                              }
                              uVar14 = FUN_0017f004(param_2);
                            }
                            if (*(int *)(param_2 + 0x18) != 1) {
                              *(bool *)((long)puVar11 + 0x19) = bVar8;
                              goto LAB_001802e0;
                            }
                          }
                        }
                        else if (*(int *)(param_2 + 0x18) == 9) goto LAB_0018022c;
LAB_00180300:
                        iVar9 = 1;
                        goto LAB_00180318;
                      }
                      FUN_0017f3b4(param_2);
                    }
                  }
                }
              }
            }
          }
LAB_001802e0:
          pcVar12 = (char *)FUN_0017ef54(param_2);
        } while (pcVar12 != (char *)0x0);
      }
      iVar9 = *(int *)(param_2 + 0x18);
      if (iVar9 == 1) {
LAB_00180318:
        *(char *)(param_2 + 0x118) = (char)iVar9;
      }
      else if (*pcVar21 == '\x01') {
        if (bVar7) {
          iVar9 = std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  compare((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           *)&local_80,0,5,"data:");
          if (iVar9 != 0) goto LAB_0018031c;
          p_Var3 = (__shared_weak_count *)(local_80 >> 1 & 0x7f);
          pcVar12 = (char *)((ulong)&local_80 | 1);
          if ((local_80 & 1) != 0) {
            p_Var3 = p_Stack_78;
            pcVar12 = local_70;
          }
          pcVar1 = pcVar12 + (long)p_Var3;
          p_Var18 = p_Var3;
          pcVar15 = pcVar12;
          while (((pcVar16 = pcVar1, 0 < (long)p_Var18 &&
                  (pcVar15 = (char *)memchr(pcVar15,0x2c,(size_t)p_Var18), pcVar15 != (char *)0x0))
                 && (pcVar16 = pcVar15, *pcVar15 != ','))) {
            pcVar15 = pcVar15 + 1;
            p_Var18 = (__shared_weak_count *)(pcVar1 + -(long)pcVar15);
          }
          lVar20 = 0;
          if (pcVar16 != pcVar1) {
            lVar20 = (long)(((int)pcVar16 - (int)pcVar12) + 1);
          }
          FUN_00180518(local_d0,pcVar12 + lVar20,(long)((int)p_Var3 - (int)lVar20));
          FUN_0017d9c4(pcVar21,local_d0);
        }
        else {
          FUN_00181428(&local_b8,param_2 + 0xe0,&local_a0);
          p_Var3 = (__shared_weak_count *)(local_80 >> 1 & 0x7f);
          pcVar12 = (char *)((ulong)&local_80 | 1);
          if ((local_80 & 1) != 0) {
            p_Var3 = p_Stack_78;
            pcVar12 = local_70;
          }
          puVar17 = (ulong *)std::__ndk1::
                             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                             ::append(&local_b8,pcVar12,(ulong)p_Var3);
          uStack_e8 = puVar17[1];
          local_f0 = *puVar17;
          local_e0 = (void *)puVar17[2];
          puVar17[1] = 0;
          puVar17[2] = 0;
          *puVar17 = 0;
          FUN_0017db48(pcVar21,&local_f0);
          local_c0 = local_a8;
          local_d0[0] = local_b8;
          if ((local_f0 & 1) != 0) {
            operator_delete(local_e0);
            local_c0 = local_a8;
            local_d0[0] = local_b8;
          }
        }
        if (((byte)local_d0[0] & 1) != 0) {
          operator_delete(local_c0);
        }
      }
LAB_0018031c:
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      goto LAB_0018033c;
    }
  }
  else {
    uVar19 = 3;
    if (iVar9 != 7) {
      uVar19 = 0xffffffff;
    }
    if (iVar9 != 9) goto LAB_0017ff70;
  }
  *(undefined1 *)(param_2 + 0x118) = 1;
LAB_0018033c:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001804c0  FUN_001804c0 =====

void FUN_001804c0(long param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this;
  
  this = *(__shared_weak_count **)(param_1 + 8);
  if (this != (__shared_weak_count *)0x0) {
    p_Var1 = this + 8;
    do {
      lVar4 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
      return;
    }
  }
  return;
}


// ===== 00180518  FUN_00180518 =====

void FUN_00180518(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (param_3 == 0) {
    lVar8 = 0;
    bVar6 = false;
    lVar10 = 0;
    lVar7 = 3;
  }
  else if (((param_3 & 3) == 0) && (lVar7 = param_3 + 3, *(char *)(param_3 + param_2 + -1) != '='))
  {
    lVar8 = 0;
    bVar6 = false;
    lVar10 = 0;
  }
  else {
    lVar7 = param_3 + 3;
    lVar10 = -4;
    lVar8 = 1;
    bVar6 = true;
  }
  uVar13 = lVar10 + lVar7;
  uVar9 = (uVar13 >> 2) * 2 + (uVar13 >> 2) + lVar8;
  uVar13 = uVar13 & 0xfffffffffffffffc;
  if (uVar9 < 0x17) {
    pbVar11 = param_1 + 1;
    *param_1 = SUB41((int)uVar9 << 1,0);
    if (uVar9 == 0) goto LAB_001805f8;
  }
  else {
    uVar12 = uVar9 + 0x10 & 0xfffffffffffffff0;
    pbVar11 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              operator_new(uVar12);
    *(ulong *)(param_1 + 8) = uVar9;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (param_1 + 0x10) = pbVar11;
    *(ulong *)param_1 = uVar12 | 1;
  }
  memset(pbVar11,0,uVar9);
LAB_001805f8:
  pbVar11[uVar9] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  if (uVar13 != 0) {
    uVar9 = 0;
    pbVar11 = param_1 + 1;
    lVar7 = 0;
    do {
      pbVar1 = (byte *)(param_2 + uVar9);
      bVar4 = (&DAT_00146405)[pbVar1[1]];
      bVar5 = (&DAT_00146405)[pbVar1[2]];
      bVar3 = pbVar1[3];
      pbVar2 = pbVar11;
      if (((byte)*param_1 & 1) != 0) {
        pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(param_1 + 0x10);
      }
      pbVar2[lVar7] =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
           ((byte)(((uint)bVar4 << 0xc) >> 0x10) |
           (byte)(((uint)(byte)(&DAT_00146405)[*pbVar1] << 0x12) >> 0x10));
      pbVar2 = pbVar11;
      if (((byte)*param_1 & 1) != 0) {
        pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(param_1 + 0x10);
      }
      pbVar2[lVar7 + 1] =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
           ((byte)(((uint)bVar5 << 6) >> 8) | (byte)(((uint)bVar4 << 0xc) >> 8));
      uVar9 = uVar9 + 4;
      pbVar2 = pbVar11;
      if (((byte)*param_1 & 1) != 0) {
        pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(param_1 + 0x10);
      }
      pbVar2[lVar7 + 2] =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
           ((&DAT_00146405)[bVar3] | bVar5 << 6);
      lVar7 = lVar7 + 3;
    } while (uVar9 < uVar13);
  }
  if (bVar6) {
    uVar9 = *(ulong *)(param_1 + 8);
    pbVar11 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (param_1 + 0x10);
    bVar3 = (&DAT_00146405)[*(byte *)(param_2 + (uVar13 | 1))];
    if (((byte)*param_1 & 1) == 0) {
      pbVar11 = param_1 + 1;
      uVar9 = (ulong)((byte)*param_1 >> 1);
    }
    pbVar11[uVar9 - 1] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
         ((byte)(((uint)bVar3 << 0xc) >> 0x10) |
         (byte)(((uint)(byte)(&DAT_00146405)[*(byte *)(param_2 + uVar13)] << 0x12) >> 0x10));
    if (((uVar13 | 2) < param_3) &&
       (uVar13 = (ulong)*(byte *)(param_2 + (uVar13 | 2)), uVar13 != 0x3d)) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(param_1,(byte)(((uint)bVar3 << 0xc) >> 8) |
                        (byte)(((uint)(byte)(&DAT_00146405)[uVar13] << 6) >> 8));
      return;
    }
  }
  return;
}


// ===== 00180744  FUN_00180744 =====

void FUN_00180744(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_170;
  undefined *local_168 [8];
  ulong local_128;
  undefined8 uStack_120;
  void *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined *local_100 [17];
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_170 = PTR_construction_vtable_0020f828 + 0x18;
  local_100[0] = PTR_construction_vtable_0020f828 + 0x40;
  std::__ndk1::ios_base::init
            ((ios_base *)local_100,(basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_168
            );
  local_78 = 0;
  local_70 = 0xffffffff;
  puVar1 = PTR_vtable_0020f830 + 0x18;
  puVar2 = PTR_vtable_0020f830 + 0x40;
  local_170 = puVar1;
  local_100[0] = puVar2;
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_168);
  puVar3 = PTR_vtable_0020f7e8 + 0x10;
  uStack_120 = 0;
  local_128 = 0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  local_108 = 0x10;
  local_168[0] = puVar3;
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_170,param_2);
  FUN_0018888c(param_1,(basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_168);
  local_170 = puVar1;
  local_168[0] = puVar3;
  local_100[0] = puVar2;
  if ((local_128 & 1) != 0) {
    operator_delete(local_118);
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_168);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_170);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_100);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00180880  FUN_00180880 =====

void FUN_00180880(undefined8 *param_1,long param_2,uint param_3)

{
  __shared_weak_count *p_Var1;
  ulong uVar2;
  undefined4 uVar3;
  ulong *puVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  void *pvVar8;
  bool bVar9;
  __shared_weak_count _Var10;
  byte bVar11;
  int iVar12;
  undefined4 uVar13;
  __shared_weak_count *this;
  char *pcVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  uint uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  __shared_weak_count *p_Var22;
  long lVar23;
  __shared_weak_count *p_Var24;
  double dVar25;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  void *local_90;
  __shared_weak_count *p_Stack_88;
  __shared_weak_count *local_80;
  void *local_78;
  long lStack_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  this = (__shared_weak_count *)operator_new(0x90);
  *(undefined8 *)(this + 0x10) = 0;
  p_Var22 = this + 8;
  *(long *)p_Var22 = 0;
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x18);
  *(undefined8 *)this_00 = 0;
  *(undefined ***)this = &PTR_FUN_00209248;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x30) = 0x20001;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x59) = 0;
  *(undefined8 *)(this + 0x51) = 0;
  uVar17 = 3;
  this[0x61] = (__shared_weak_count)0x3;
  *(undefined8 *)(this + 0x62) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0xffffffffffffffff;
  *(undefined4 *)(this + 0x78) = 0x3f800000;
  *(undefined8 *)(this + 0x7c) = 0;
  *(undefined8 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  iVar12 = *(int *)(param_2 + 0x18);
  if (iVar12 - 2U < 5) {
    uVar17 = *(ushort *)(param_2 + 0x16) & 7;
LAB_00180968:
    if (uVar17 != 3) goto LAB_001810b0;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (param_2 + 0xc0) = this_00;
    FUN_0017ee8c(param_2);
    pcVar14 = (char *)FUN_0017ef54(param_2);
    if (pcVar14 != (char *)0x0) {
      lVar18 = param_2 + 0xd8;
      bVar9 = true;
      do {
        iVar12 = strcmp(pcVar14,"ty");
        if (iVar12 == 0) {
          _Var10 = (__shared_weak_count)FUN_00181700(param_2);
          this[0x61] = _Var10;
        }
        else {
          iVar12 = strcmp(pcVar14,"nm");
          if (iVar12 == 0) {
            if ((4 < *(int *)(param_2 + 0x18) - 2U) || ((*(ushort *)(param_2 + 0x16) & 7) != 5))
            goto LAB_001810b0;
            pcVar14 = (char *)FUN_0017f248(param_2);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (this_00,pcVar14);
          }
          else {
            iVar12 = strcmp(pcVar14,"ind");
            if (iVar12 == 0) {
              if ((4 < *(int *)(param_2 + 0x18) - 2U) || ((*(ushort *)(param_2 + 0x16) & 7) != 6))
              goto LAB_001810b0;
              uVar13 = FUN_0017f084(param_2);
              *(undefined4 *)(this + 0x74) = uVar13;
            }
            else {
              iVar12 = strcmp(pcVar14,"ddd");
              if (iVar12 == 0) {
                if ((4 < *(int *)(param_2 + 0x18) - 2U) || ((*(ushort *)(param_2 + 0x16) & 7) != 6))
                goto LAB_001810b0;
                iVar12 = FUN_0017f084(param_2);
                bVar9 = iVar12 != 0;
              }
              else {
                iVar12 = strcmp(pcVar14,"parent");
                if (iVar12 == 0) {
                  if ((4 < *(int *)(param_2 + 0x18) - 2U) ||
                     ((*(ushort *)(param_2 + 0x16) & 7) != 6)) goto LAB_001810b0;
                  uVar13 = FUN_0017f084(param_2);
                  *(undefined4 *)(this + 0x70) = uVar13;
                }
                else {
                  iVar12 = strcmp(pcVar14,"refId");
                  if (iVar12 == 0) {
                    if ((4 < *(int *)(param_2 + 0x18) - 2U) ||
                       ((*(ushort *)(param_2 + 0x16) & 7) != 5)) goto LAB_001810b0;
                    uVar15 = FUN_0017f248(param_2);
                    FUN_001634e0(&local_90,uVar15);
                    lVar20 = FUN_0017f590(this_00);
                    if ((*(byte *)(lVar20 + 0x18) & 1) != 0) {
                      operator_delete(*(void **)(lVar20 + 0x28));
                    }
                    *(__shared_weak_count **)(lVar20 + 0x28) = local_80;
                    *(__shared_weak_count **)(lVar20 + 0x20) = p_Stack_88;
                    *(void **)(lVar20 + 0x18) = local_90;
                    this[0x66] = (__shared_weak_count)0x1;
                    puVar16 = *(undefined8 **)(param_2 + 0xd0);
                    if (puVar16 == *(undefined8 **)(param_2 + 0xd8)) {
                      lVar20 = *(long *)(param_2 + 200);
                      lVar23 = (long)puVar16 - lVar20 >> 4;
                      uVar2 = lVar23 + 1;
                      if (uVar2 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                        std::__ndk1::__vector_base_common<true>::__throw_length_error();
                      }
                      lVar20 = (long)*(undefined8 **)(param_2 + 0xd8) - lVar20;
                      uVar21 = lVar20 >> 3;
                      if (uVar2 <= uVar21) {
                        uVar2 = uVar21;
                      }
                      if (0x7fffffffffffffe < (ulong)(lVar20 >> 4)) {
                        uVar2 = 0xfffffffffffffff;
                      }
                      local_78 = (void *)0x0;
                      lStack_70 = lVar18;
                      if (uVar2 == 0) {
                        local_90 = (void *)0x0;
                      }
                      else {
                        if (uVar2 >> 0x3c != 0) goto LAB_001812c8;
                        local_90 = operator_new(uVar2 << 4);
                      }
                      p_Stack_88 = (__shared_weak_count *)((long)local_90 + lVar23 * 0x10);
                      local_78 = (void *)((long)local_90 + uVar2 * 0x10);
                      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        **)p_Stack_88 = this_00;
                      *(__shared_weak_count **)(p_Stack_88 + 8) = this;
                      do {
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(p_Var22,0x10);
                        if (bVar6) {
                          *(long *)p_Var22 = *(long *)p_Var22 + 1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      local_80 = p_Stack_88 + 0x10;
                      FUN_00188ab8((long *)(param_2 + 200),&local_90);
                      FUN_00188b28(&local_90);
                    }
                    else {
                      *puVar16 = this_00;
                      puVar16[1] = this;
                      do {
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(p_Var22,0x10);
                        if (bVar6) {
                          *(long *)p_Var22 = *(long *)p_Var22 + 1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      *(undefined8 **)(param_2 + 0xd0) = puVar16 + 2;
                    }
                  }
                  else {
                    iVar12 = strcmp(pcVar14,"sr");
                    if (iVar12 == 0) {
                      if ((4 < *(int *)(param_2 + 0x18) - 2U) ||
                         ((*(ushort *)(param_2 + 0x16) & 7) != 6)) goto LAB_001810b0;
                      dVar25 = (double)FUN_0017f0e8(param_2);
                      *(float *)(this + 0x78) = (float)dVar25;
                    }
                    else {
                      iVar12 = strcmp(pcVar14,"tm");
                      if (iVar12 == 0) {
                        lVar20 = FUN_0017f590(this_00);
                        FUN_0018174c(param_2,lVar20 + 0x30);
                      }
                      else {
                        iVar12 = strcmp(pcVar14,"ip");
                        if (iVar12 == 0) {
                          if ((4 < *(int *)(param_2 + 0x18) - 2U) ||
                             ((*(ushort *)(param_2 + 0x16) & 7) != 6)) goto LAB_001810b0;
                          dVar25 = (double)FUN_0017f0e8(param_2);
                          *(int *)(this + 0x7c) = (int)dVar25;
                        }
                        else {
                          iVar12 = strcmp(pcVar14,"op");
                          if (iVar12 == 0) {
                            if ((4 < *(int *)(param_2 + 0x18) - 2U) ||
                               ((*(ushort *)(param_2 + 0x16) & 7) != 6)) goto LAB_001810b0;
                            dVar25 = (double)FUN_0017f0e8(param_2);
                            *(int *)(this + 0x80) = (int)dVar25;
                          }
                          else {
                            iVar12 = strcmp(pcVar14,"st");
                            if (iVar12 == 0) {
                              if ((4 < *(int *)(param_2 + 0x18) - 2U) ||
                                 ((*(ushort *)(param_2 + 0x16) & 7) != 6)) goto LAB_001810b0;
                              dVar25 = (double)FUN_0017f0e8(param_2);
                              *(int *)(this + 0x84) = (int)dVar25;
                            }
                            else {
                              iVar12 = strcmp(pcVar14,"bm");
                              if (iVar12 == 0) {
                                _Var10 = (__shared_weak_count)FUN_0017f42c(param_2);
                                this[0x62] = _Var10;
                              }
                              else {
                                iVar12 = strcmp(pcVar14,"ks");
                                if (iVar12 == 0) {
                                  iVar12 = *(int *)(param_2 + 0x18);
                                  if (iVar12 - 2U < 5) {
                                    uVar17 = *(ushort *)(param_2 + 0x16) & 7;
                                  }
                                  else {
                                    uVar17 = 3;
                                    if (iVar12 != 7) {
                                      uVar17 = 0xffffffff;
                                    }
                                    if (iVar12 == 9) goto LAB_001810b0;
                                  }
                                  if (uVar17 != 3) goto LAB_001810b0;
                                  FUN_0017ee8c(param_2);
                                  FUN_001817d4(&local_90,param_2,bVar9);
                                  p_Var1 = p_Stack_88;
                                  pvVar8 = local_90;
                                  p_Var24 = *(__shared_weak_count **)(this + 0x58);
                                  local_90 = (void *)0x0;
                                  p_Stack_88 = (__shared_weak_count *)0x0;
                                  *(void **)(this + 0x50) = pvVar8;
                                  *(__shared_weak_count **)(this + 0x58) = p_Var1;
                                  if (p_Var24 != (__shared_weak_count *)0x0) {
                                    p_Var1 = p_Var24 + 8;
                                    do {
                                      lVar20 = *(long *)p_Var1;
                                      cVar5 = '\x01';
                                      bVar6 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
                                      if (bVar6) {
                                        *(long *)p_Var1 = lVar20 + -1;
                                        cVar5 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar5 != '\0');
                                    if (lVar20 == 0) {
                                      (**(code **)(*(long *)p_Var24 + 0x10))(p_Var24);
                                      std::__ndk1::__shared_weak_count::__release_weak(p_Var24);
                                    }
                                  }
                                  p_Var1 = p_Stack_88;
                                  if (p_Stack_88 != (__shared_weak_count *)0x0) {
                                    p_Var24 = p_Stack_88 + 8;
                                    do {
                                      lVar20 = *(long *)p_Var24;
                                      cVar5 = '\x01';
                                      bVar6 = (bool)ExclusiveMonitorPass(p_Var24,0x10);
                                      if (bVar6) {
                                        *(long *)p_Var24 = lVar20 + -1;
                                        cVar5 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar5 != '\0');
                                    if (lVar20 == 0) {
                                      (**(code **)(*(long *)p_Stack_88 + 0x10))(p_Stack_88);
                                      std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
                                    }
                                  }
                                }
                                else {
                                  iVar12 = strcmp(pcVar14,"shapes");
                                  if (iVar12 == 0) {
                                    FUN_00181c94(param_2,this_00);
                                  }
                                  else {
                                    iVar12 = strcmp(pcVar14,"w");
                                    if (iVar12 == 0) {
LAB_00180ed4:
                                      uVar13 = FUN_0017f084(param_2);
                                      *(undefined4 *)(this + 0x68) = uVar13;
                                    }
                                    else {
                                      iVar12 = strcmp(pcVar14,"h");
                                      if (iVar12 != 0) {
                                        iVar12 = strcmp(pcVar14,"sw");
                                        if (iVar12 == 0) goto LAB_00180ed4;
                                        iVar12 = strcmp(pcVar14,"sh");
                                        if (iVar12 != 0) {
                                          iVar12 = strcmp(pcVar14,"sc");
                                          if (iVar12 == 0) {
                                            uVar15 = FUN_0017f248(param_2);
                                            FUN_00181570(&local_90,param_2,uVar15);
                                            puVar16 = (undefined8 *)FUN_0017f590(this_00);
                                            puVar16[1] = p_Stack_88;
                                            *puVar16 = local_90;
                                            *(undefined4 *)(puVar16 + 2) = local_80._0_4_;
                                          }
                                          else {
                                            iVar12 = strcmp(pcVar14,"tt");
                                            if (iVar12 == 0) {
                                              _Var10 = (__shared_weak_count)FUN_001816ac(param_2);
                                              this[0x60] = _Var10;
                                            }
                                            else {
                                              iVar12 = strcmp(pcVar14,"hasMask");
                                              if (iVar12 == 0) {
                                                bVar11 = FUN_0017f198(param_2);
                                                this[100] = (__shared_weak_count)(bVar11 & 1);
                                              }
                                              else {
                                                iVar12 = strcmp(pcVar14,"masksProperties");
                                                if (iVar12 == 0) {
                                                  FUN_00181d20(param_2,this_00);
                                                }
                                                else {
                                                  iVar12 = strcmp(pcVar14,"ao");
                                                  if (iVar12 == 0) {
                                                    iVar12 = FUN_0017f084(param_2);
                                                    this[0x67] = (__shared_weak_count)(iVar12 != 0);
                                                  }
                                                  else {
                                                    iVar12 = strcmp(pcVar14,"hd");
                                                    if (iVar12 == 0) {
                                                      bVar11 = FUN_0017f198(param_2);
                                                      this[0x31] = (__shared_weak_count)(bVar11 & 1)
                                                      ;
                                                    }
                                                    else {
                                                      FUN_0017f3b4(param_2);
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          goto LAB_00180fa8;
                                        }
                                      }
                                      uVar13 = FUN_0017f084(param_2);
                                      *(undefined4 *)(this + 0x6c) = uVar13;
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
LAB_00180fa8:
        pcVar14 = (char *)FUN_0017ef54(param_2);
      } while (pcVar14 != (char *)0x0);
    }
    if ((*(int *)(param_2 + 0x18) == 1) || (lVar18 = *(long *)(this + 0x50), lVar18 == 0))
    goto LAB_001810b0;
    if ((*(int *)(this + 0x70) != -1) && (*(int *)(this + 0x74) == *(int *)(this + 0x70))) {
      *param_1 = 0;
      param_1[1] = 0;
      do {
        lVar18 = *(long *)p_Var22;
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(p_Var22,0x10);
        if (bVar9) {
          *(long *)p_Var22 = lVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*(long *)this + 0x10))(this);
        std::__ndk1::__shared_weak_count::__release_weak(this);
      }
      goto LAB_001810bc;
    }
    if (*(long *)(this + 0x88) != 0) {
      *(undefined8 *)(*(long *)(this + 0x88) + 0x40) = *(undefined8 *)(param_2 + 0xb8);
    }
    if (this[0x31] == (__shared_weak_count)0x0) {
      bVar9 = true;
      for (plVar19 = *(long **)(this + 0x38); plVar19 != *(long **)(this + 0x40);
          plVar19 = plVar19 + 2) {
        bVar9 = (bool)(bVar9 & *(char *)(*plVar19 + 0x18) != '\0');
      }
      if ((this[100] != (__shared_weak_count)0x0) && (lVar20 = *(long *)(this + 0x88), lVar20 != 0))
      {
        for (plVar19 = *(long **)(lVar20 + 0x58); plVar19 != *(long **)(lVar20 + 0x60);
            plVar19 = plVar19 + 2) {
          bVar9 = (bool)(bVar9 & *(char *)(*plVar19 + 0x39) != '\0');
        }
      }
      if (bVar9) {
        _Var10 = (__shared_weak_count)(*(char *)(lVar18 + 0x18) != '\0');
      }
      else {
        _Var10 = (__shared_weak_count)0x0;
      }
      this[0x30] = _Var10;
      if ((param_3 & 1) != 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_b0,(basic_string_conflict *)this_00);
        uVar13 = *(undefined4 *)(this + 0x7c);
        uVar3 = *(undefined4 *)(this + 0x80);
        puVar4 = *(ulong **)(param_2 + 0x100);
        local_98 = uVar13;
        local_94 = uVar3;
        if (puVar4 < *(ulong **)(param_2 + 0x108)) {
          puVar4[2] = (ulong)local_a0;
          puVar4[1] = uStack_a8;
          *puVar4 = local_b0;
          uStack_a8 = 0;
          local_a0 = (void *)0x0;
          local_b0 = 0;
          *(undefined4 *)(puVar4 + 3) = uVar13;
          *(undefined4 *)((long)puVar4 + 0x1c) = uVar3;
          *(ulong **)(param_2 + 0x100) = puVar4 + 4;
        }
        else {
          lVar18 = *(long *)(param_2 + 0xf8);
          lVar20 = (long)puVar4 - lVar18 >> 5;
          uVar2 = lVar20 + 1;
          if (uVar2 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          lVar18 = (long)*(ulong **)(param_2 + 0x108) - lVar18;
          uVar21 = lVar18 >> 4;
          if (uVar2 <= uVar21) {
            uVar2 = uVar21;
          }
          lStack_70 = param_2 + 0x108;
          if (0x3fffffffffffffe < (ulong)(lVar18 >> 5)) {
            uVar2 = 0x7ffffffffffffff;
          }
          local_78 = (void *)0x0;
          if (uVar2 == 0) {
            local_90 = (void *)0x0;
          }
          else {
            if (uVar2 >> 0x3b != 0) {
LAB_001812c8:
              local_78 = (void *)0x0;
                    /* WARNING: Subroutine does not return */
              abort();
            }
            local_90 = operator_new(uVar2 << 5);
          }
          p_Stack_88 = (__shared_weak_count *)((long)local_90 + lVar20 * 0x20);
          local_78 = (void *)((long)local_90 + uVar2 * 0x20);
          local_80 = p_Stack_88 + 0x20;
          *(void **)(p_Stack_88 + 0x10) = local_a0;
          *(ulong *)(p_Stack_88 + 8) = uStack_a8;
          *(ulong *)p_Stack_88 = local_b0;
          uStack_a8 = 0;
          local_a0 = (void *)0x0;
          local_b0 = 0;
          *(undefined4 *)(p_Stack_88 + 0x18) = uVar13;
          *(undefined4 *)(p_Stack_88 + 0x1c) = uVar3;
          FUN_00189590((long *)(param_2 + 0xf8),&local_90);
          FUN_00189620(&local_90);
          if ((local_b0 & 1) != 0) {
            operator_delete(local_a0);
          }
        }
      }
    }
    else {
      this[0x30] = *(__shared_weak_count *)(lVar18 + 0x18);
      this[0x61] = (__shared_weak_count)0x3;
      FUN_001893a0(this + 0x38,0,0);
    }
  }
  else {
    if (iVar12 != 7) {
      uVar17 = 0xffffffff;
    }
    if (iVar12 != 9) goto LAB_00180968;
LAB_001810b0:
    *(undefined1 *)(param_2 + 0x118) = 1;
  }
  *param_1 = this_00;
  param_1[1] = this;
LAB_001810bc:
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001812d4  FUN_001812d4 =====

void FUN_001812d4(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  void *local_70;
  undefined8 *puStack_68;
  undefined8 *local_60;
  void *local_58;
  long *plStack_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 == (undefined8 *)param_1[2]) {
    lVar7 = (long)puVar3 - *param_1 >> 4;
    uVar2 = lVar7 + 1;
    if (uVar2 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = param_1[2] - *param_1;
    uVar9 = lVar8 >> 3;
    if (uVar2 <= uVar9) {
      uVar2 = uVar9;
    }
    plStack_50 = param_1 + 2;
    if (0x7fffffffffffffe < (ulong)(lVar8 >> 4)) {
      uVar2 = 0xfffffffffffffff;
    }
    local_58 = (void *)0x0;
    if (uVar2 == 0) {
      local_70 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_70 = operator_new(uVar2 << 4);
    }
    puStack_68 = (undefined8 *)((long)local_70 + lVar7 * 0x10);
    local_58 = (void *)((long)local_70 + uVar2 * 0x10);
    lVar7 = param_2[1];
    *puStack_68 = *param_2;
    puStack_68[1] = lVar7;
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_60 = puStack_68 + 2;
    FUN_0017e220(param_1,&local_70);
    FUN_0017e290(&local_70);
  }
  else {
    *puVar3 = *param_2;
    lVar7 = param_2[1];
    puVar3[1] = lVar7;
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    param_1[1] = (long)(puVar3 + 2);
  }
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00181428  FUN_00181428 =====

void FUN_00181428(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,byte *param_2,byte *param_3)

{
  ulong uVar1;
  size_t __n;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  ulong uVar5;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  bVar2 = *param_3;
  pbVar4 = *(byte **)(param_2 + 0x10);
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
  }
  bVar3 = (*param_2 & 1) != 0;
  __n = (ulong)(*param_2 >> 1);
  if (bVar3) {
    __n = *(size_t *)(param_2 + 8);
  }
  uVar5 = uVar1 + __n;
  if (!bVar3) {
    pbVar4 = param_2 + 1;
  }
  if (uVar5 < 0xfffffffffffffff0) {
    if (uVar5 < 0x17) {
      __dest = param_1 + 1;
      *param_1 = SUB41((int)__n << 1,0);
    }
    else {
      uVar5 = uVar5 + 0x10 & 0xfffffffffffffff0;
      __dest = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               operator_new(uVar5);
      *(size_t *)(param_1 + 8) = __n;
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (param_1 + 0x10) = __dest;
      *(ulong *)param_1 = uVar5 | 1;
    }
    if (__n != 0) {
      memcpy(__dest,pbVar4,__n);
      bVar2 = *param_3;
    }
    __dest[__n] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                  0x0;
    pbVar4 = *(byte **)(param_3 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar4 = param_3 + 1;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(param_1,(char *)pbVar4,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__basic_string_common<true>::__throw_length_error();
}


// ===== 00181518  FUN_00181518 =====

void FUN_00181518(long param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this;
  
  this = *(__shared_weak_count **)(param_1 + 8);
  if (this != (__shared_weak_count *)0x0) {
    p_Var1 = this + 8;
    do {
      lVar4 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
      return;
    }
  }
  return;
}


// ===== 00181570  FUN_00181570 =====

void FUN_00181570(undefined8 *param_1,long param_2,char *param_3)

{
  long lVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  undefined2 local_4c;
  undefined1 local_4a;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar7 = NEON_fmov(0x3f800000,4);
  *param_1 = 0;
  param_1[1] = uVar7;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  sVar2 = strlen(param_3);
  if ((int)sVar2 != 0) {
    if (((int)sVar2 == 7) && (*param_3 == '#')) {
      local_4a = 0;
      local_4c = *(undefined2 *)(param_3 + 1);
      lVar3 = strtol((char *)&local_4c,(char **)0x0,0x10);
      local_4c = *(undefined2 *)(param_3 + 3);
      lVar4 = strtol((char *)&local_4c,(char **)0x0,0x10);
      local_4c = *(undefined2 *)(param_3 + 5);
      lVar5 = strtol((char *)&local_4c,(char **)0x0,0x10);
      fVar8 = (float)lVar4 * DAT_00144b04;
      fVar6 = (float)lVar3 * DAT_00144b04;
      *(float *)(param_1 + 1) = (float)lVar5 * DAT_00144b04;
      *(float *)((long)param_1 + 0xc) = fVar8;
      *(float *)(param_1 + 2) = fVar6;
      *param_1 = *(undefined8 *)(param_2 + 0x110);
    }
    else {
      *(undefined1 *)(param_2 + 0x118) = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001816ac  FUN_001816ac =====

int FUN_001816ac(long param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x18) - 2U < 5) && ((*(ushort *)(param_1 + 0x16) & 7) == 6)) {
    iVar1 = FUN_0017f084();
    if (iVar1 - 1U < 4) {
      return iVar1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x118) = 1;
  }
  return 0;
}


// ===== 00181700  FUN_00181700 =====

undefined8 FUN_00181700(long param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x18) - 2U < 5) && ((*(ushort *)(param_1 + 0x16) & 7) == 6)) {
    uVar1 = FUN_0017f084();
    if ((uint)uVar1 < 6) {
      return uVar1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x118) = 1;
  }
  return 3;
}


// ===== 0018174c  FUN_0018174c =====

void FUN_0018174c(long param_1,undefined8 param_2)

{
  int iVar1;
  char *__s1;
  
  FUN_0017ee8c();
  __s1 = (char *)FUN_0017ef54(param_1);
  while( true ) {
    if (__s1 == (char *)0x0) {
      if (*(int *)(param_1 + 0x18) == 1) {
        *(undefined1 *)(param_1 + 0x118) = 1;
      }
      return;
    }
    if (*(char *)(param_1 + 0x118) != '\0') break;
    iVar1 = strcmp(__s1,"k");
    if (iVar1 == 0) {
      FUN_00188b78(param_1,param_2);
    }
    else {
      FUN_0017f3b4(param_1);
    }
    __s1 = (char *)FUN_0017ef54(param_1);
  }
  return;
}


// ===== 001817d4  FUN_001817d4 =====

void FUN_001817d4(undefined8 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  char *pcVar8;
  long *plVar9;
  long lVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  long *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  puVar5 = (undefined8 *)operator_new(0x68);
  puVar5[1] = 0;
  puVar5[2] = 0;
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (puVar5 + 3);
  *(undefined8 *)this = 0;
  *puVar5 = &PTR_FUN_00209408;
  puVar5[4] = 0;
  puVar5[5] = 0;
  *(undefined4 *)(puVar5 + 6) = 0x40001;
  *param_1 = this;
  param_1[1] = puVar5;
  plVar6 = (long *)operator_new(0x80);
  plVar6[1] = 0;
  *plVar6 = 0;
  *(undefined4 *)(plVar6 + 1) = 0;
  plVar6[3] = 0;
  plVar6[2] = 0;
  plVar6[5] = 0;
  plVar6[4] = 0;
  plVar6[7] = 0;
  plVar6[6] = 0;
  plVar6[9] = 0;
  plVar6[8] = 0;
  plVar6[0xb] = 0;
  plVar6[10] = 0;
  plVar6[0xd] = 0;
  plVar6[0xc] = 0;
  plVar6[0xf] = 0;
  plVar6[0xe] = 0;
  *(undefined1 *)(plVar6 + 2) = 1;
  plVar6[3] = 0x42c8000042c80000;
  *(undefined1 *)(plVar6 + 4) = 1;
  plVar6[5] = 0;
  *(undefined1 *)(plVar6 + 6) = 1;
  *(undefined4 *)(plVar6 + 7) = 0;
  *(undefined1 *)(plVar6 + 8) = 1;
  *(undefined4 *)(plVar6 + 9) = 0;
  *(undefined1 *)(plVar6 + 10) = 1;
  *(undefined1 *)(plVar6 + 0xc) = 1;
  plVar6[0xb] = 0;
  *(undefined1 *)(plVar6 + 0xe) = 1;
  *(undefined4 *)(plVar6 + 0xd) = 0x42c80000;
  *(undefined2 *)(plVar6 + 0xf) = 0;
  if ((param_3 & 1) != 0) {
    puVar7 = (undefined8 *)operator_new(0x30);
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    *(undefined1 *)(puVar7 + 1) = 1;
    *(undefined4 *)puVar7 = 0;
    *(undefined1 *)(puVar7 + 3) = 1;
    *(undefined4 *)(puVar7 + 2) = 0;
    *(undefined1 *)(puVar7 + 5) = 1;
    *(undefined4 *)(puVar7 + 4) = 0;
    local_70 = 0;
    FUN_0018a224(plVar6,puVar7);
    FUN_0018a224(&local_70,0);
  }
  pcVar8 = (char *)FUN_0017ef54(param_2);
  do {
    if (pcVar8 == (char *)0x0) {
      iVar4 = *(int *)(param_2 + 0x18);
      if (iVar4 == 1) {
LAB_00181b98:
        *(char *)(param_2 + 0x118) = (char)iVar4;
        FUN_00186118(plVar6);
        operator_delete(plVar6);
      }
      else {
        if ((char)plVar6[0xc] == '\0') {
          cVar2 = '\0';
        }
        else {
          cVar2 = (char)plVar6[6];
          if ((((cVar2 != '\0') && (cVar2 = (char)plVar6[2], cVar2 != '\0')) &&
              (cVar2 = (char)plVar6[4], cVar2 != '\0')) &&
             ((cVar2 = (char)plVar6[8], cVar2 != '\0' && (cVar2 = (char)plVar6[10], cVar2 != '\0')))
             ) {
            cVar2 = (char)plVar6[0xe] != '\0';
          }
        }
        lVar10 = *plVar6;
        *(char *)((long)plVar6 + 0x79) = cVar2;
        if (lVar10 != 0) {
          if (((cVar2 != '\0') && (cVar2 = *(char *)(lVar10 + 8), cVar2 != '\0')) &&
             (cVar2 = *(char *)(lVar10 + 0x18), cVar2 != '\0')) {
            cVar2 = *(char *)(lVar10 + 0x28) != '\0';
          }
          *(char *)((long)plVar6 + 0x79) = cVar2;
        }
        local_78 = plVar6;
        FUN_00184104(this,&local_78);
        plVar6 = local_78;
        local_78 = (long *)0x0;
        if (plVar6 != (long *)0x0) {
          FUN_00186118(plVar6);
          operator_delete(plVar6);
        }
      }
      if (*(long *)(lVar1 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    iVar4 = strcmp(pcVar8,"nm");
    if (iVar4 == 0) {
      pcVar8 = (char *)FUN_0017f248(param_2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(this,pcVar8);
    }
    else {
      iVar4 = strcmp(pcVar8,"a");
      plVar9 = plVar6 + 0xb;
      if (iVar4 == 0) {
LAB_00181a4c:
        FUN_00183d30(param_2,plVar9);
      }
      else {
        iVar4 = strcmp(pcVar8,"p");
        if (iVar4 == 0) {
          FUN_0017ee8c(param_2);
          pcVar8 = (char *)FUN_0017ef54(param_2);
          while (pcVar8 != (char *)0x0) {
            iVar4 = strcmp(pcVar8,"k");
            if (iVar4 == 0) {
              FUN_00183fd4(param_2,plVar6 + 5);
            }
            else {
              iVar4 = strcmp(pcVar8,"s");
              if (iVar4 == 0) {
                bVar3 = FUN_0017f198(param_2);
                *(byte *)(plVar6 + 0xf) = bVar3 & 1;
              }
              else if (((char)plVar6[0xf] == '\0') ||
                      ((iVar4 = strcmp(pcVar8,"x"), plVar9 = plVar6 + 7, iVar4 != 0 &&
                       (iVar4 = strcmp(pcVar8,"y"), plVar9 = plVar6 + 9, iVar4 != 0)))) {
                FUN_0017f3b4(param_2);
              }
              else {
                FUN_0018174c(param_2,plVar9);
              }
            }
            pcVar8 = (char *)FUN_0017ef54(param_2);
          }
          if (*(int *)(param_2 + 0x18) == 1) goto LAB_00181c88;
        }
        else {
          iVar4 = strcmp(pcVar8,"r");
          plVar9 = plVar6 + 1;
          if (iVar4 != 0) {
            iVar4 = strcmp(pcVar8,"s");
            plVar9 = plVar6 + 3;
            if (iVar4 == 0) goto LAB_00181a4c;
            iVar4 = strcmp(pcVar8,"o");
            plVar9 = plVar6 + 0xd;
            if (iVar4 != 0) {
              iVar4 = strcmp(pcVar8,"hd");
              if (iVar4 == 0) {
                bVar3 = FUN_0017f198(param_2);
                *(byte *)((long)puVar5 + 0x31) = bVar3 & 1;
                goto LAB_00181b7c;
              }
              iVar4 = strcmp(pcVar8,"rx");
              if (iVar4 == 0) {
                plVar9 = (long *)*plVar6;
                if ((long *)*plVar6 == (long *)0x0) {
LAB_00181c88:
                  iVar4 = 1;
                  goto LAB_00181b98;
                }
              }
              else {
                iVar4 = strcmp(pcVar8,"ry");
                if (iVar4 == 0) {
                  if (*plVar6 == 0) goto LAB_00181c88;
                  plVar9 = (long *)(*plVar6 + 0x10);
                }
                else {
                  iVar4 = strcmp(pcVar8,"rz");
                  if (iVar4 != 0) {
                    FUN_0017f3b4(param_2);
                    goto LAB_00181b7c;
                  }
                  if (*plVar6 == 0) goto LAB_00181c88;
                  plVar9 = (long *)(*plVar6 + 0x20);
                }
              }
            }
          }
          FUN_0018174c(param_2,plVar9);
        }
      }
    }
LAB_00181b7c:
    pcVar8 = (char *)FUN_0017ef54(param_2);
  } while( true );
}


// ===== 00181c94  FUN_00181c94 =====

void FUN_00181c94(long param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x18) - 2U < 5) {
    if ((*(ushort *)(param_1 + 0x16) & 7) != 4) {
LAB_00181cc8:
      iVar2 = 1;
      goto LAB_00181d10;
    }
  }
  else if (*(int *)(param_1 + 0x18) != 9) goto LAB_00181cc8;
  FUN_0017eef0(param_1);
  while (uVar1 = FUN_0017f004(param_1), (uVar1 & 1) != 0) {
    if (*(char *)(param_1 + 0x118) != '\0') {
      return;
    }
    FUN_001822d0(param_1,param_2);
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 != 1) {
    return;
  }
LAB_00181d10:
  *(char *)(param_1 + 0x118) = (char)iVar2;
  return;
}


// ===== 00181d20  FUN_00181d20 =====

void FUN_00181d20(long param_1,undefined8 param_2)

{
  __shared_weak_count *p_Var1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  __shared_weak_count *this;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 local_90;
  __shared_weak_count *p_Stack_88;
  void *local_80;
  undefined8 *puStack_78;
  undefined8 *local_70;
  void *local_68;
  long lStack_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if (*(int *)(param_1 + 0x18) - 2U < 5) {
    if ((*(ushort *)(param_1 + 0x16) & 7) != 4) goto LAB_00181d70;
LAB_00181d80:
    FUN_0017eef0(param_1);
    uVar6 = FUN_0017f004(param_1);
    while ((uVar6 & 1) != 0) {
      if (*(char *)(param_1 + 0x118) != '\0') goto LAB_00181eb8;
      lVar7 = FUN_0017f590(param_2);
      FUN_00181ef4(&local_90,param_1);
      puVar2 = *(undefined8 **)(lVar7 + 0x60);
      if (puVar2 < *(undefined8 **)(lVar7 + 0x68)) {
        puVar2[1] = p_Stack_88;
        *puVar2 = local_90;
        local_90 = 0;
        p_Stack_88 = (__shared_weak_count *)0x0;
        *(undefined8 **)(lVar7 + 0x60) = puVar2 + 2;
      }
      else {
        lVar9 = *(long *)(lVar7 + 0x58);
        lVar11 = (long)puVar2 - lVar9 >> 4;
        uVar6 = lVar11 + 1;
        if (uVar6 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        lVar9 = (long)*(undefined8 **)(lVar7 + 0x68) - lVar9;
        uVar10 = lVar9 >> 3;
        if (uVar6 <= uVar10) {
          uVar6 = uVar10;
        }
        lStack_60 = lVar7 + 0x68;
        if (0x7fffffffffffffe < (ulong)(lVar9 >> 4)) {
          uVar6 = 0xfffffffffffffff;
        }
        local_68 = (void *)0x0;
        if (uVar6 == 0) {
          local_80 = (void *)0x0;
        }
        else {
          if (uVar6 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          local_80 = operator_new(uVar6 << 4);
        }
        puStack_78 = (undefined8 *)((long)local_80 + lVar11 * 0x10);
        local_68 = (void *)((long)local_80 + uVar6 * 0x10);
        local_70 = puStack_78 + 2;
        puStack_78[1] = p_Stack_88;
        *puStack_78 = local_90;
        local_90 = 0;
        p_Stack_88 = (__shared_weak_count *)0x0;
        FUN_001896ac((long *)(lVar7 + 0x58),&local_80);
        FUN_0018971c(&local_80);
        this = p_Stack_88;
        if (p_Stack_88 != (__shared_weak_count *)0x0) {
          p_Var1 = p_Stack_88 + 8;
          do {
            lVar7 = *(long *)p_Var1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar4) {
              *(long *)p_Var1 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*(long *)p_Stack_88 + 0x10))(p_Stack_88);
            std::__ndk1::__shared_weak_count::__release_weak(this);
          }
        }
      }
      uVar6 = FUN_0017f004(param_1);
    }
    iVar8 = *(int *)(param_1 + 0x18);
    if (iVar8 != 1) goto LAB_00181eb8;
  }
  else {
    if (*(int *)(param_1 + 0x18) == 9) goto LAB_00181d80;
LAB_00181d70:
    iVar8 = 1;
  }
  *(char *)(param_1 + 0x118) = (char)iVar8;
LAB_00181eb8:
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00181ef4  FUN_00181ef4 =====

void FUN_00181ef4(undefined8 *param_1,long param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  char *__s1;
  byte *pbVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  
  puVar4 = (undefined8 *)operator_new(0x58);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_00209280;
  puVar8 = puVar4 + 3;
  puVar4[4] = 0;
  *puVar8 = 0;
  puVar4[8] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[5] = 0;
  puVar4[10] = 0;
  puVar4[9] = 0;
  *(undefined1 *)(puVar4 + 7) = 1;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  *puVar8 = 0;
  *(undefined4 *)(puVar4 + 8) = 0x42c80000;
  *(undefined1 *)(puVar4 + 9) = 1;
  *(undefined2 *)(puVar4 + 10) = 0x100;
  *param_1 = puVar8;
  param_1[1] = puVar4;
  iVar3 = *(int *)(param_2 + 0x18);
  if (iVar3 - 2U < 5) {
    uVar6 = *(ushort *)(param_2 + 0x16) & 7;
LAB_00181fac:
    if (uVar6 == 3) {
      FUN_0017ee8c(param_2);
      __s1 = (char *)FUN_0017ef54(param_2);
      while (__s1 != (char *)0x0) {
        iVar3 = strcmp(__s1,"inv");
        if (iVar3 == 0) {
          bVar2 = FUN_0017f198(param_2);
          *(byte *)(puVar4 + 10) = bVar2 & 1;
        }
        else {
          iVar3 = strcmp(__s1,"mode");
          if (iVar3 == 0) {
            pbVar5 = (byte *)FUN_0017f248(param_2);
            if (pbVar5 == (byte *)0x0) goto LAB_00182110;
            bVar2 = *pbVar5;
            if (bVar2 < 0x69) {
              if (bVar2 == 0x61) {
                uVar7 = 1;
              }
              else {
                if (bVar2 != 0x66) goto LAB_001820b8;
                uVar7 = 4;
              }
            }
            else {
              if (bVar2 != 0x69) {
                if (bVar2 == 0x73) {
                  *(undefined4 *)((long)puVar4 + 0x54) = 2;
                }
                else {
LAB_001820b8:
                  *(undefined4 *)((long)puVar4 + 0x54) = 0;
                }
                goto LAB_001820d8;
              }
              uVar7 = 3;
            }
            *(undefined4 *)((long)puVar4 + 0x54) = uVar7;
          }
          else {
            iVar3 = strcmp(__s1,"pt");
            if (iVar3 == 0) {
              FUN_0018218c(param_2,puVar8);
            }
            else {
              iVar3 = strcmp(__s1,"o");
              if (iVar3 == 0) {
                FUN_0018174c(param_2,puVar4 + 8);
              }
              else {
                FUN_0017f3b4(param_2);
              }
            }
          }
        }
LAB_001820d8:
        __s1 = (char *)FUN_0017ef54(param_2);
      }
      iVar3 = *(int *)(param_2 + 0x18);
      if (iVar3 != 1) {
        cVar1 = *(char *)(puVar4 + 7);
        if (cVar1 != '\0') {
          cVar1 = *(char *)(puVar4 + 9) != '\0';
        }
        *(char *)((long)puVar4 + 0x51) = cVar1;
        return;
      }
      goto LAB_00182114;
    }
  }
  else {
    uVar6 = 3;
    if (iVar3 != 7) {
      uVar6 = 0xffffffff;
    }
    if (iVar3 != 9) goto LAB_00181fac;
  }
LAB_00182110:
  iVar3 = 1;
LAB_00182114:
  *(char *)(param_2 + 0x118) = (char)iVar3;
  return;
}


// ===== 00182134  FUN_00182134 =====

void FUN_00182134(long param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this;
  
  this = *(__shared_weak_count **)(param_1 + 8);
  if (this != (__shared_weak_count *)0x0) {
    p_Var1 = this + 8;
    do {
      lVar4 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
      return;
    }
  }
  return;
}


// ===== 0018218c  FUN_0018218c =====

void FUN_0018218c(long param_1,long param_2)

{
  int iVar1;
  char *__s1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  FUN_0017ee8c();
  __s1 = (char *)FUN_0017ef54(param_1);
  do {
    if (__s1 == (char *)0x0) {
      iVar1 = *(int *)(param_1 + 0x18);
      if (iVar1 == 1) {
LAB_001822ac:
        *(char *)(param_1 + 0x118) = (char)iVar1;
      }
      return;
    }
    iVar1 = strcmp(__s1,"k");
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x18) - 2U < 5) {
        if ((*(ushort *)(param_1 + 0x16) & 7) == 4) {
LAB_00182218:
          FUN_0017eef0(param_1);
          while (uVar2 = FUN_0017f004(param_1), (uVar2 & 1) != 0) {
            if (*(char *)(param_1 + 0x118) != '\0') {
              return;
            }
            iVar1 = *(int *)(param_1 + 0x18);
            if (4 < iVar1 - 2U) {
              uVar4 = 3;
              if (iVar1 != 7) {
                uVar4 = 0xffffffff;
              }
              if (iVar1 != 9) goto LAB_00182260;
LAB_001822a8:
              iVar1 = 1;
              goto LAB_001822ac;
            }
            uVar4 = *(ushort *)(param_1 + 0x16) & 7;
LAB_00182260:
            if (uVar4 != 3) goto LAB_001822a8;
            uVar3 = FUN_00185ae8(param_2);
            FUN_0018561c(param_1,uVar3);
          }
          iVar1 = *(int *)(param_1 + 0x18);
          if (iVar1 != 1) goto LAB_0018228c;
          goto LAB_001822ac;
        }
      }
      else if (*(int *)(param_1 + 0x18) == 9) goto LAB_00182218;
      if (*(char *)(param_2 + 0x20) == '\0') {
        *(undefined1 *)(param_1 + 0x118) = 1;
        *(undefined4 *)(param_1 + 0x18) = 1;
        return;
      }
      FUN_00184cd4(param_1,param_2);
    }
    else {
      FUN_0017f3b4(param_1);
    }
LAB_0018228c:
    __s1 = (char *)FUN_0017ef54(param_1);
  } while( true );
}


// ===== 001822d0  FUN_001822d0 =====

void FUN_001822d0(long param_1,long param_2)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this;
  int iVar5;
  char *__s1;
  uint uVar6;
  long lVar7;
  long local_58;
  __shared_weak_count *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  iVar5 = *(int *)(param_1 + 0x18);
  if (iVar5 - 2U < 5) {
    uVar6 = *(ushort *)(param_1 + 0x16) & 7;
LAB_0018232c:
    if (uVar6 == 3) {
      FUN_0017ee8c(param_1);
      __s1 = (char *)FUN_0017ef54(param_1);
      if (__s1 != (char *)0x0) {
        do {
          iVar5 = strcmp(__s1,"ty");
          if (iVar5 == 0) {
            FUN_0018241c(&local_58,param_1);
            if ((local_58 != 0) && (*(char *)(local_58 + 0x19) == '\0')) {
              FUN_001812d4(param_2 + 0x20,&local_58);
            }
            this = local_50;
            if (local_50 != (__shared_weak_count *)0x0) {
              p_Var1 = local_50 + 8;
              do {
                lVar7 = *(long *)p_Var1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
                if (bVar3) {
                  *(long *)p_Var1 = lVar7 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar7 == 0) {
                (**(code **)(*(long *)local_50 + 0x10))(local_50);
                std::__ndk1::__shared_weak_count::__release_weak(this);
              }
            }
          }
          else {
            FUN_0017f3b4(param_1);
          }
          __s1 = (char *)FUN_0017ef54(param_1);
        } while (__s1 != (char *)0x0);
      }
      if (*(int *)(param_1 + 0x18) != 1) goto LAB_001823f0;
    }
  }
  else {
    uVar6 = 3;
    if (iVar5 != 7) {
      uVar6 = 0xffffffff;
    }
    if (iVar5 != 9) goto LAB_0018232c;
  }
  *(undefined1 *)(param_1 + 0x118) = 1;
LAB_001823f0:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0018241c  FUN_0018241c =====

void FUN_0018241c(undefined8 *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  char *__s1;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(int *)(param_2 + 0x18) - 2U < 5) && ((*(ushort *)(param_2 + 0x16) & 7) == 5)) {
    __s1 = (char *)FUN_0017f248(param_2);
    iVar2 = strcmp(__s1,"gr");
    if (iVar2 == 0) {
      FUN_0018268c(param_1,param_2);
      goto LAB_00182584;
    }
    iVar2 = strcmp(__s1,"rc");
    if (iVar2 == 0) {
      FUN_00182914(param_1,param_2);
      goto LAB_00182584;
    }
    iVar2 = strcmp(__s1,"el");
    if (iVar2 == 0) {
      FUN_00182b20(param_1,param_2);
      goto LAB_00182584;
    }
    iVar2 = strcmp(__s1,"tr");
    if (iVar2 == 0) {
      FUN_001817d4(&local_50,param_2,0);
      param_1[1] = uStack_48;
      *param_1 = local_50;
      goto LAB_00182584;
    }
    iVar2 = strcmp(__s1,"fl");
    if (iVar2 == 0) {
      FUN_00182cf4(param_1,param_2);
      goto LAB_00182584;
    }
    iVar2 = strcmp(__s1,"st");
    if (iVar2 == 0) {
      FUN_00182efc(param_1,param_2);
      goto LAB_00182584;
    }
    iVar2 = strcmp(__s1,"gf");
    if (iVar2 == 0) {
      *(undefined1 *)(*(long *)(param_2 + 0xc0) + 0x4e) = 1;
      FUN_001831a4(param_1,param_2);
      goto LAB_00182584;
    }
    iVar2 = strcmp(__s1,"gs");
    if (iVar2 == 0) {
      *(undefined1 *)(*(long *)(param_2 + 0xc0) + 0x4e) = 1;
      FUN_001832a0(param_1,param_2);
      goto LAB_00182584;
    }
    iVar2 = strcmp(__s1,"sh");
    if (iVar2 == 0) {
      FUN_001834a0(param_1,param_2);
      goto LAB_00182584;
    }
    iVar2 = strcmp(__s1,"sr");
    if (iVar2 == 0) {
      FUN_00183620(param_1,param_2);
      goto LAB_00182584;
    }
    iVar2 = strcmp(__s1,"tm");
    if (iVar2 == 0) {
      *(undefined1 *)(*(long *)(param_2 + 0xc0) + 0x4b) = 1;
      FUN_001838d8(param_1,param_2);
      goto LAB_00182584;
    }
    iVar2 = strcmp(__s1,"rp");
    if (iVar2 == 0) {
      *(undefined1 *)(*(long *)(param_2 + 0xc0) + 0x4d) = 1;
      FUN_00183ad4(param_1,param_2);
      goto LAB_00182584;
    }
  }
  else {
    *(undefined1 *)(param_2 + 0x118) = 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_00182584:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018268c  FUN_0018268c =====

void FUN_0018268c(undefined8 *param_1,long param_2)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  __shared_weak_count *this_00;
  uint uVar12;
  long *plVar10;
  
  puVar5 = (undefined8 *)operator_new(0x60);
  puVar5[1] = 0;
  puVar5[2] = 0;
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (puVar5 + 3);
  *(undefined8 *)this = 0;
  *puVar5 = &PTR_FUN_002090e0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  *(undefined4 *)(puVar5 + 6) = 0x30001;
  puVar5[8] = 0;
  puVar5[7] = 0;
  puVar5[10] = 0;
  puVar5[9] = 0;
  puVar5[0xb] = 0;
  pcVar6 = (char *)FUN_0017ef54(param_2);
  while (pcVar6 != (char *)0x0) {
    iVar4 = strcmp(pcVar6,"nm");
    if (iVar4 == 0) {
      pcVar6 = (char *)FUN_0017f248(param_2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(this,pcVar6);
    }
    else {
      iVar4 = strcmp(pcVar6,"it");
      if (iVar4 == 0) {
        if (*(int *)(param_2 + 0x18) - 2U < 5) {
          if ((*(ushort *)(param_2 + 0x16) & 7) == 4) {
LAB_00182794:
            FUN_0017eef0(param_2);
            while (uVar7 = FUN_0017f004(param_2), (uVar7 & 1) != 0) {
              if (*(char *)(param_2 + 0x118) != '\0') goto LAB_001828f8;
              iVar4 = *(int *)(param_2 + 0x18);
              if (iVar4 - 2U < 5) {
                uVar12 = *(ushort *)(param_2 + 0x16) & 7;
              }
              else {
                uVar12 = 3;
                if (iVar4 != 7) {
                  uVar12 = 0xffffffff;
                }
                if (iVar4 == 9) goto LAB_001828d4;
              }
              if (uVar12 != 3) goto LAB_001828d4;
              FUN_001822d0(param_2,this);
            }
            iVar4 = *(int *)(param_2 + 0x18);
            if (iVar4 != 1) {
              lVar11 = puVar5[8];
              if ((puVar5[7] != lVar11) &&
                 (lVar8 = *(long *)(lVar11 + -0x10), *(short *)(lVar8 + 0x1a) == 4)) {
                lVar11 = *(long *)(lVar11 + -8);
                if (lVar11 != 0) {
                  plVar9 = (long *)(lVar11 + 8);
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                    if (bVar3) {
                      *plVar9 = *plVar9 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
                this_00 = (__shared_weak_count *)puVar5[0xb];
                puVar5[10] = lVar8;
                puVar5[0xb] = lVar11;
                if (this_00 != (__shared_weak_count *)0x0) {
                  p_Var1 = this_00 + 8;
                  do {
                    lVar11 = *(long *)p_Var1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
                    if (bVar3) {
                      *(long *)p_Var1 = lVar11 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (lVar11 == 0) {
                    (**(code **)(*(long *)this_00 + 0x10))(this_00);
                    std::__ndk1::__shared_weak_count::__release_weak(this_00);
                  }
                }
                lVar11 = puVar5[8];
                FUN_0017e0b0(lVar11 + -0x10);
                puVar5[8] = lVar11 + -0x10;
              }
              goto LAB_00182754;
            }
            goto LAB_001828d8;
          }
        }
        else if (*(int *)(param_2 + 0x18) == 9) goto LAB_00182794;
LAB_001828d4:
        iVar4 = 1;
        goto LAB_001828d8;
      }
      FUN_0017f3b4(param_2);
    }
LAB_00182754:
    pcVar6 = (char *)FUN_0017ef54(param_2);
  }
  iVar4 = *(int *)(param_2 + 0x18);
  if (iVar4 == 1) {
LAB_001828d8:
    *(char *)(param_2 + 0x118) = (char)iVar4;
    goto LAB_001828f8;
  }
  if ((long *)puVar5[7] == (long *)puVar5[8]) {
    lVar11 = puVar5[10];
    if (lVar11 == 0) goto LAB_001828f8;
LAB_001828e8:
    bVar3 = *(char *)(lVar11 + 0x18) != '\0';
  }
  else {
    bVar3 = true;
    plVar9 = (long *)puVar5[7];
    do {
      plVar10 = plVar9 + 2;
      bVar3 = (bool)(bVar3 & *(char *)(*plVar9 + 0x18) != '\0');
      plVar9 = plVar10;
    } while ((long *)puVar5[8] != plVar10);
    lVar11 = puVar5[10];
    if (lVar11 == 0) goto LAB_001828f8;
    if (bVar3) goto LAB_001828e8;
    bVar3 = false;
  }
  *(bool *)(puVar5 + 6) = bVar3;
LAB_001828f8:
  *param_1 = this;
  param_1[1] = puVar5;
  return;
}


// ===== 00182914  FUN_00182914 =====

void FUN_00182914(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  
  puVar6 = (undefined8 *)operator_new(0x68);
  puVar6[1] = 0;
  puVar6[2] = 0;
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (puVar6 + 3);
  *(undefined8 *)this = 0;
  *puVar6 = &PTR_FUN_002092b8;
  uVar1 = DAT_00146368;
  *(undefined4 *)(puVar6 + 6) = 0x90001;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *(undefined1 *)(puVar6 + 8) = 1;
  *(undefined4 *)((long)puVar6 + 0x3c) = 0;
  *(undefined4 *)((long)puVar6 + 0x4c) = 0;
  *(undefined8 *)((long)puVar6 + 0x34) = uVar1;
  *(undefined4 *)(puVar6 + 9) = 0;
  *(undefined1 *)(puVar6 + 10) = 1;
  *(undefined4 *)(puVar6 + 0xb) = 0;
  *(undefined1 *)(puVar6 + 0xc) = 1;
  pcVar7 = (char *)FUN_0017ef54(param_2);
  if (pcVar7 != (char *)0x0) {
    do {
      iVar4 = strcmp(pcVar7,"nm");
      if (iVar4 == 0) {
        pcVar7 = (char *)FUN_0017f248(param_2);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(this,pcVar7);
      }
      else {
        iVar4 = strcmp(pcVar7,"p");
        puVar8 = puVar6 + 7;
        if ((iVar4 == 0) || (iVar4 = strcmp(pcVar7,"s"), puVar8 = puVar6 + 9, iVar4 == 0)) {
          FUN_00183d30(param_2,puVar8);
        }
        else {
          iVar4 = strcmp(pcVar7,"r");
          if (iVar4 == 0) {
            FUN_0018174c(param_2,puVar6 + 0xb);
          }
          else {
            iVar4 = strcmp(pcVar7,"d");
            if (iVar4 == 0) {
              uVar5 = FUN_0017f084(param_2);
              *(undefined4 *)((long)puVar6 + 0x34) = uVar5;
            }
            else {
              iVar4 = strcmp(pcVar7,"hd");
              if (iVar4 == 0) {
                bVar3 = FUN_0017f198(param_2);
                *(byte *)((long)puVar6 + 0x31) = bVar3 & 1;
              }
              else {
                FUN_0017f3b4(param_2);
              }
            }
          }
        }
      }
      pcVar7 = (char *)FUN_0017ef54(param_2);
    } while (pcVar7 != (char *)0x0);
  }
  if (*(int *)(param_2 + 0x18) == 1) {
    *(undefined1 *)(param_2 + 0x118) = 1;
  }
  else {
    cVar2 = *(char *)(puVar6 + 8);
    if ((cVar2 != '\0') && (cVar2 = *(char *)(puVar6 + 10), cVar2 != '\0')) {
      cVar2 = *(char *)(puVar6 + 0xc) != '\0';
    }
    *(char *)(puVar6 + 6) = cVar2;
  }
  *param_1 = this;
  param_1[1] = puVar6;
  return;
}


// ===== 00182b20  FUN_00182b20 =====

void FUN_00182b20(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  
  puVar6 = (undefined8 *)operator_new(0x58);
  puVar6[1] = 0;
  puVar6[2] = 0;
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (puVar6 + 3);
  *(undefined8 *)this = 0;
  *(undefined4 *)(puVar6 + 6) = 0xa0001;
  uVar1 = DAT_00146368;
  *puVar6 = &PTR_FUN_002092f0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *(undefined1 *)(puVar6 + 8) = 1;
  *(undefined4 *)((long)puVar6 + 0x3c) = 0;
  *(undefined8 *)((long)puVar6 + 0x34) = uVar1;
  *(undefined4 *)(puVar6 + 9) = 0;
  *(undefined1 *)(puVar6 + 10) = 1;
  *(undefined4 *)((long)puVar6 + 0x4c) = 0;
  pcVar7 = (char *)FUN_0017ef54(param_2);
  if (pcVar7 != (char *)0x0) {
    do {
      iVar4 = strcmp(pcVar7,"nm");
      if (iVar4 == 0) {
        pcVar7 = (char *)FUN_0017f248(param_2);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(this,pcVar7);
      }
      else {
        iVar4 = strcmp(pcVar7,"p");
        puVar8 = puVar6 + 7;
        if ((iVar4 == 0) || (iVar4 = strcmp(pcVar7,"s"), puVar8 = puVar6 + 9, iVar4 == 0)) {
          FUN_00183d30(param_2,puVar8);
        }
        else {
          iVar4 = strcmp(pcVar7,"d");
          if (iVar4 == 0) {
            uVar5 = FUN_0017f084(param_2);
            *(undefined4 *)((long)puVar6 + 0x34) = uVar5;
          }
          else {
            iVar4 = strcmp(pcVar7,"hd");
            if (iVar4 == 0) {
              bVar3 = FUN_0017f198(param_2);
              *(byte *)((long)puVar6 + 0x31) = bVar3 & 1;
            }
            else {
              FUN_0017f3b4(param_2);
            }
          }
        }
      }
      pcVar7 = (char *)FUN_0017ef54(param_2);
    } while (pcVar7 != (char *)0x0);
  }
  if (*(int *)(param_2 + 0x18) == 1) {
    *(undefined1 *)(param_2 + 0x118) = 1;
  }
  else {
    cVar2 = *(char *)(puVar6 + 8);
    if (cVar2 != '\0') {
      cVar2 = *(char *)(puVar6 + 10) != '\0';
    }
    *(char *)(puVar6 + 6) = cVar2;
  }
  *param_1 = this;
  param_1[1] = puVar6;
  return;
}


// ===== 00182cf4  FUN_00182cf4 =====

void FUN_00182cf4(undefined8 *param_1,long param_2)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  char *pcVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  undefined8 uVar7;
  
  puVar5 = (undefined8 *)operator_new(0x70);
  puVar5[1] = 0;
  puVar5[2] = 0;
  uVar7 = NEON_fmov(0x3f800000,4);
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (puVar5 + 3);
  *(undefined8 *)this = 0;
  *puVar5 = &PTR_FUN_00209440;
  *(undefined4 *)(puVar5 + 6) = 0x50001;
  puVar5[4] = 0;
  puVar5[5] = 0;
  *(undefined1 *)((long)puVar5 + 0x34) = 1;
  puVar5[7] = 0;
  puVar5[9] = 0x3f800000;
  *(undefined1 *)(puVar5 + 10) = 1;
  puVar5[8] = uVar7;
  *(undefined4 *)(puVar5 + 0xb) = 0x42c80000;
  *(undefined1 *)(puVar5 + 0xc) = 1;
  *(undefined1 *)(puVar5 + 0xd) = 1;
  pcVar6 = (char *)FUN_0017ef54(param_2);
  while (pcVar6 != (char *)0x0) {
    iVar4 = strcmp(pcVar6,"nm");
    if (iVar4 == 0) {
      pcVar6 = (char *)FUN_0017f248(param_2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(this,pcVar6);
    }
    else {
      iVar4 = strcmp(pcVar6,"c");
      if (iVar4 == 0) {
        FUN_001841c8(param_2,puVar5 + 7);
      }
      else {
        iVar4 = strcmp(pcVar6,"o");
        if (iVar4 == 0) {
          FUN_0018174c(param_2,puVar5 + 0xb);
        }
        else {
          iVar4 = strcmp(pcVar6,"fillEnabled");
          if (iVar4 == 0) {
            bVar3 = FUN_0017f198(param_2);
            *(byte *)(puVar5 + 0xd) = bVar3 & 1;
          }
          else {
            iVar4 = strcmp(pcVar6,"r");
            if (iVar4 == 0) {
              uVar2 = FUN_00184250(param_2);
              *(undefined1 *)((long)puVar5 + 0x34) = uVar2;
            }
            else {
              iVar4 = strcmp(pcVar6,"hd");
              if (iVar4 == 0) {
                bVar3 = FUN_0017f198(param_2);
                *(byte *)((long)puVar5 + 0x31) = bVar3 & 1;
              }
              else {
                FUN_0017f3b4(param_2);
              }
            }
          }
        }
      }
    }
    pcVar6 = (char *)FUN_0017ef54(param_2);
  }
  if (*(int *)(param_2 + 0x18) == 1) {
    *(undefined1 *)(param_2 + 0x118) = 1;
  }
  else {
    cVar1 = *(char *)(puVar5 + 10);
    if (cVar1 != '\0') {
      cVar1 = *(char *)(puVar5 + 0xc) != '\0';
    }
    *(char *)(puVar5 + 6) = cVar1;
  }
  *param_1 = this;
  param_1[1] = puVar5;
  return;
}


// ===== 00182efc  FUN_00182efc =====

void FUN_00182efc(undefined8 *param_1,long param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  double dVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  
  puVar6 = (undefined8 *)operator_new(0xe0);
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (puVar6 + 3);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_00209478;
  FUN_0018b730(this);
  pcVar7 = (char *)FUN_0017ef54(param_2);
  if (pcVar7 != (char *)0x0) {
    do {
      iVar5 = strcmp(pcVar7,"nm");
      if (iVar5 == 0) {
        pcVar7 = (char *)FUN_0017f248(param_2);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(this,pcVar7);
      }
      else {
        iVar5 = strcmp(pcVar7,"c");
        if (iVar5 == 0) {
          FUN_001841c8(param_2,puVar6 + 7);
        }
        else {
          iVar5 = strcmp(pcVar7,"o");
          puVar8 = puVar6 + 0xb;
          if ((iVar5 == 0) || (iVar5 = strcmp(pcVar7,"w"), puVar8 = puVar6 + 0xd, iVar5 == 0)) {
            FUN_0018174c(param_2,puVar8);
          }
          else {
            iVar5 = strcmp(pcVar7,"fillEnabled");
            if (iVar5 == 0) {
              bVar4 = FUN_0017f198(param_2);
              *(byte *)(puVar6 + 0x1b) = bVar4 & 1;
            }
            else {
              iVar5 = strcmp(pcVar7,"lc");
              if (iVar5 == 0) {
                uVar3 = FUN_0018429c(param_2);
                *(undefined1 *)(puVar6 + 0xf) = uVar3;
              }
              else {
                iVar5 = strcmp(pcVar7,"lj");
                if (iVar5 == 0) {
                  uVar3 = FUN_001842f4(param_2);
                  *(undefined1 *)((long)puVar6 + 0x79) = uVar3;
                }
                else {
                  iVar5 = strcmp(pcVar7,"ml");
                  if (iVar5 == 0) {
                    if ((4 < *(int *)(param_2 + 0x18) - 2U) ||
                       ((*(ushort *)(param_2 + 0x16) & 7) != 6)) {
                      iVar5 = 1;
                      goto LAB_00183144;
                    }
                    dVar1 = (double)FUN_0017f0e8(param_2);
                    *(float *)((long)puVar6 + 0x7c) = (float)dVar1;
                  }
                  else {
                    iVar5 = strcmp(pcVar7,"d");
                    if (iVar5 == 0) {
                      FUN_0018434c(param_2,puVar6 + 0x10);
                    }
                    else {
                      iVar5 = strcmp(pcVar7,"hd");
                      if (iVar5 == 0) {
                        bVar4 = FUN_0017f198(param_2);
                        *(byte *)((long)puVar6 + 0x31) = bVar4 & 1;
                      }
                      else {
                        FUN_0017f3b4(param_2);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      pcVar7 = (char *)FUN_0017ef54(param_2);
    } while (pcVar7 != (char *)0x0);
  }
  iVar5 = *(int *)(param_2 + 0x18);
  if (iVar5 == 1) {
LAB_00183144:
    *(char *)(param_2 + 0x118) = (char)iVar5;
  }
  else {
    cVar2 = *(char *)(puVar6 + 10);
    if (((cVar2 != '\0') && (cVar2 = *(char *)(puVar6 + 0xc), cVar2 != '\0')) &&
       (cVar2 = *(char *)(puVar6 + 0xe), cVar2 != '\0')) {
      cVar2 = *(char *)((long)puVar6 + 0xd4) != '\0';
    }
    *(char *)(puVar6 + 6) = cVar2;
  }
  *param_1 = this;
  param_1[1] = puVar6;
  return;
}


// ===== 001831a4  FUN_001831a4 =====

void FUN_001831a4(undefined8 *param_1,long param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  
  puVar3 = (undefined8 *)operator_new(0xb0);
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (puVar3 + 3);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_002094b0;
  FUN_0018c278(this);
  pcVar4 = (char *)FUN_0017ef54(param_2);
  while (pcVar4 != (char *)0x0) {
    iVar2 = strcmp(pcVar4,"nm");
    if (iVar2 == 0) {
      pcVar4 = (char *)FUN_0017f248(param_2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(this,pcVar4);
    }
    else {
      iVar2 = strcmp(pcVar4,"r");
      if (iVar2 == 0) {
        uVar1 = FUN_00184250(param_2);
        *(undefined1 *)((long)puVar3 + 0xad) = uVar1;
      }
      else {
        FUN_001844ac(param_2,this,pcVar4);
      }
    }
    pcVar4 = (char *)FUN_0017ef54(param_2);
  }
  if (*(int *)(param_2 + 0x18) == 1) {
    *(undefined1 *)(param_2 + 0x118) = 1;
  }
  *param_1 = this;
  param_1[1] = puVar3;
  return;
}


// ===== 001832a0  FUN_001832a0 =====

void FUN_001832a0(undefined8 *param_1,long param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  double dVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  char *pcVar6;
  
  puVar5 = (undefined8 *)operator_new(0x120);
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (puVar5 + 3);
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_002094e8;
  FUN_0018c4d0(this);
  pcVar6 = (char *)FUN_0017ef54(param_2);
  if (pcVar6 != (char *)0x0) {
    do {
      iVar4 = strcmp(pcVar6,"nm");
      if (iVar4 == 0) {
        pcVar6 = (char *)FUN_0017f248(param_2);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(this,pcVar6);
      }
      else {
        iVar4 = strcmp(pcVar6,"w");
        if (iVar4 == 0) {
          FUN_0018174c(param_2,puVar5 + 0x16);
        }
        else {
          iVar4 = strcmp(pcVar6,"lc");
          if (iVar4 == 0) {
            uVar3 = FUN_0018429c(param_2);
            *(undefined1 *)(puVar5 + 0x18) = uVar3;
          }
          else {
            iVar4 = strcmp(pcVar6,"lj");
            if (iVar4 == 0) {
              uVar3 = FUN_001842f4(param_2);
              *(undefined1 *)((long)puVar5 + 0xc1) = uVar3;
            }
            else {
              iVar4 = strcmp(pcVar6,"ml");
              if (iVar4 == 0) {
                if ((4 < *(int *)(param_2 + 0x18) - 2U) || ((*(ushort *)(param_2 + 0x16) & 7) != 6))
                {
                  iVar4 = 1;
                  goto LAB_0018344c;
                }
                dVar1 = (double)FUN_0017f0e8(param_2);
                *(float *)((long)puVar5 + 0xc4) = (float)dVar1;
              }
              else {
                iVar4 = strcmp(pcVar6,"d");
                if (iVar4 == 0) {
                  FUN_0018434c(param_2,puVar5 + 0x19);
                }
                else {
                  FUN_001844ac(param_2,this,pcVar6);
                }
              }
            }
          }
        }
      }
      pcVar6 = (char *)FUN_0017ef54(param_2);
    } while (pcVar6 != (char *)0x0);
  }
  iVar4 = *(int *)(param_2 + 0x18);
  if (iVar4 == 1) {
LAB_0018344c:
    *(char *)(param_2 + 0x118) = (char)iVar4;
  }
  else {
    cVar2 = *(char *)(puVar5 + 6);
    if ((cVar2 != '\0') && (cVar2 = *(char *)(puVar5 + 0x17), cVar2 != '\0')) {
      cVar2 = *(char *)((long)puVar5 + 0x11c) != '\0';
    }
    *(char *)(puVar5 + 6) = cVar2;
  }
  *param_1 = this;
  param_1[1] = puVar5;
  return;
}


// ===== 001834a0  FUN_001834a0 =====

void FUN_001834a0(undefined8 *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  
  puVar4 = (undefined8 *)operator_new(0x60);
  puVar4[1] = 0;
  puVar4[2] = 0;
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (puVar4 + 3);
  *(undefined8 *)this = 0;
  *puVar4 = &PTR_FUN_00209328;
  puVar4[5] = 0;
  puVar4[6] = 0x1000b0001;
  puVar4[4] = 0;
  puVar4[7] = 0;
  *(undefined1 *)(puVar4 + 0xb) = 1;
  puVar4[8] = 0;
  puVar4[9] = 0;
  *(undefined1 *)(puVar4 + 10) = 0;
  pcVar5 = (char *)FUN_0017ef54(param_2);
  while (pcVar5 != (char *)0x0) {
    iVar2 = strcmp(pcVar5,"nm");
    if (iVar2 == 0) {
      pcVar5 = (char *)FUN_0017f248(param_2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(this,pcVar5);
    }
    else {
      iVar2 = strcmp(pcVar5,"ks");
      if (iVar2 == 0) {
        FUN_0018218c(param_2,puVar4 + 7);
      }
      else {
        iVar2 = strcmp(pcVar5,"d");
        if (iVar2 == 0) {
          uVar3 = FUN_0017f084(param_2);
          *(undefined4 *)((long)puVar4 + 0x34) = uVar3;
        }
        else {
          iVar2 = strcmp(pcVar5,"hd");
          if (iVar2 == 0) {
            bVar1 = FUN_0017f198(param_2);
            *(byte *)((long)puVar4 + 0x31) = bVar1 & 1;
          }
          else {
            FUN_0017f3b4(param_2);
          }
        }
      }
    }
    pcVar5 = (char *)FUN_0017ef54(param_2);
  }
  if (*(int *)(param_2 + 0x18) == 1) {
    *(undefined1 *)(param_2 + 0x118) = 1;
  }
  else {
    *(undefined1 *)(puVar4 + 6) = *(undefined1 *)(puVar4 + 0xb);
  }
  *param_1 = this;
  param_1[1] = puVar4;
  return;
}


// ===== 00183620  FUN_00183620 =====

void FUN_00183620(undefined8 *param_1,long param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  char *pcVar6;
  long lVar7;
  
  pvVar5 = operator_new(0xb0);
  FUN_00189c94();
  pcVar6 = (char *)FUN_0017ef54(param_2);
  if (pcVar6 != (char *)0x0) {
    do {
      iVar3 = strcmp(pcVar6,"nm");
      if (iVar3 == 0) {
        pcVar6 = (char *)FUN_0017f248(param_2);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 ((long)pvVar5 + 0x18),pcVar6);
      }
      else {
        iVar3 = strcmp(pcVar6,"p");
        if (iVar3 == 0) {
          FUN_00183d30(param_2,(long)pvVar5 + 0x40);
        }
        else {
          iVar3 = strcmp(pcVar6,"pt");
          lVar7 = (long)pvVar5 + 0x50;
          if ((((iVar3 == 0) ||
               (iVar3 = strcmp(pcVar6,"ir"), lVar7 = (long)pvVar5 + 0x60, iVar3 == 0)) ||
              (iVar3 = strcmp(pcVar6,"is"), lVar7 = (long)pvVar5 + 0x80, iVar3 == 0)) ||
             (((iVar3 = strcmp(pcVar6,"or"), lVar7 = (long)pvVar5 + 0x70, iVar3 == 0 ||
               (iVar3 = strcmp(pcVar6,"os"), lVar7 = (long)pvVar5 + 0x90, iVar3 == 0)) ||
              (iVar3 = strcmp(pcVar6,"r"), lVar7 = (long)pvVar5 + 0xa0, iVar3 == 0)))) {
            FUN_0018174c(param_2,lVar7);
          }
          else {
            iVar3 = strcmp(pcVar6,"sy");
            if (iVar3 == 0) {
              iVar3 = FUN_0017f084(param_2);
              if (iVar3 == 2) {
                uVar4 = 2;
              }
              else {
                if (iVar3 != 1) goto LAB_001837ec;
                uVar4 = 1;
              }
              *(undefined4 *)((long)pvVar5 + 0x38) = uVar4;
            }
            else {
              iVar3 = strcmp(pcVar6,"d");
              if (iVar3 == 0) {
                uVar4 = FUN_0017f084(param_2);
                *(undefined4 *)((long)pvVar5 + 0x34) = uVar4;
              }
              else {
                iVar3 = strcmp(pcVar6,"hd");
                if (iVar3 == 0) {
                  bVar2 = FUN_0017f198(param_2);
                  *(byte *)((long)pvVar5 + 0x31) = bVar2 & 1;
                }
                else {
                  FUN_0017f3b4(param_2);
                }
              }
            }
          }
        }
      }
LAB_001837ec:
      pcVar6 = (char *)FUN_0017ef54(param_2);
    } while (pcVar6 != (char *)0x0);
  }
  if (*(int *)(param_2 + 0x18) == 1) {
    *(undefined1 *)(param_2 + 0x118) = 1;
  }
  else {
    cVar1 = *(char *)((long)pvVar5 + 0x48);
    if (((cVar1 != '\0') && (cVar1 = *(char *)((long)pvVar5 + 0x58), cVar1 != '\0')) &&
       ((cVar1 = *(char *)((long)pvVar5 + 0x68), cVar1 != '\0' &&
        (((cVar1 = *(char *)((long)pvVar5 + 0x88), cVar1 != '\0' &&
          (cVar1 = *(char *)((long)pvVar5 + 0x78), cVar1 != '\0')) &&
         (cVar1 = *(char *)((long)pvVar5 + 0x98), cVar1 != '\0')))))) {
      cVar1 = *(char *)((long)pvVar5 + 0xa8) != '\0';
    }
    *(char *)((long)pvVar5 + 0x30) = cVar1;
  }
  *param_1 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             ((long)pvVar5 + 0x18);
  param_1[1] = pvVar5;
  return;
}


// ===== 001838d8  FUN_001838d8 =====

void FUN_001838d8(undefined8 *param_1,long param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 *puVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  
  puVar5 = (undefined8 *)operator_new(0x70);
  puVar5[1] = 0;
  puVar5[2] = 0;
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (puVar5 + 3);
  *(undefined8 *)this = 0;
  *puVar5 = &PTR_FUN_00209398;
  *(undefined4 *)(puVar5 + 6) = 0xd0001;
  puVar5[4] = 0;
  puVar5[5] = 0;
  *(undefined4 *)(puVar5 + 7) = 0;
  *(undefined1 *)(puVar5 + 8) = 1;
  *(undefined4 *)(puVar5 + 9) = 0;
  *(undefined1 *)(puVar5 + 10) = 1;
  *(undefined4 *)(puVar5 + 0xb) = 0;
  *(undefined1 *)(puVar5 + 0xc) = 1;
  *(undefined4 *)(puVar5 + 0xd) = 0;
  pcVar6 = (char *)FUN_0017ef54(param_2);
  while (pcVar6 != (char *)0x0) {
    iVar3 = strcmp(pcVar6,"nm");
    if (iVar3 == 0) {
      pcVar6 = (char *)FUN_0017f248(param_2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(this,pcVar6);
    }
    else {
      iVar3 = strcmp(pcVar6,"s");
      puVar7 = puVar5 + 7;
      if (((iVar3 == 0) || (iVar3 = strcmp(pcVar6,"e"), puVar7 = puVar5 + 9, iVar3 == 0)) ||
         (iVar3 = strcmp(pcVar6,"o"), puVar7 = puVar5 + 0xb, iVar3 == 0)) {
        FUN_0018174c(param_2,puVar7);
      }
      else {
        iVar3 = strcmp(pcVar6,"m");
        if (iVar3 == 0) {
          uVar4 = FUN_00183db8(param_2);
          *(undefined4 *)(puVar5 + 0xd) = uVar4;
        }
        else {
          iVar3 = strcmp(pcVar6,"hd");
          if (iVar3 == 0) {
            bVar2 = FUN_0017f198(param_2);
            *(byte *)((long)puVar5 + 0x31) = bVar2 & 1;
          }
          else {
            FUN_0017f3b4(param_2);
          }
        }
      }
    }
    pcVar6 = (char *)FUN_0017ef54(param_2);
  }
  if (*(int *)(param_2 + 0x18) == 1) {
    *(undefined1 *)(param_2 + 0x118) = 1;
  }
  else {
    cVar1 = *(char *)(puVar5 + 8);
    if ((cVar1 != '\0') && (cVar1 = *(char *)(puVar5 + 10), cVar1 != '\0')) {
      cVar1 = *(char *)(puVar5 + 0xc) != '\0';
    }
    *(char *)(puVar5 + 6) = cVar1;
  }
  *param_1 = this;
  param_1[1] = puVar5;
  return;
}


// ===== 00183ad4  FUN_00183ad4 =====

void FUN_00183ad4(undefined8 *param_1,long param_2)

{
  float *pfVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  float *pfVar2;
  long lVar3;
  float *pfVar4;
  byte bVar5;
  int iVar6;
  undefined8 *puVar7;
  char *pcVar8;
  float fVar9;
  
  puVar7 = (undefined8 *)operator_new(0xd0);
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (puVar7 + 3);
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_002093d0;
  FUN_0018a01c(this);
  pcVar8 = (char *)FUN_0017ef54(param_2);
  if (pcVar8 != (char *)0x0) {
    pfVar2 = (float *)(puVar7 + 0x15);
    do {
      iVar6 = strcmp(pcVar8,"nm");
      if (iVar6 == 0) {
        pcVar8 = (char *)FUN_0017f248(param_2);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(this,pcVar8);
      }
      else {
        iVar6 = strcmp(pcVar8,"c");
        if (iVar6 == 0) {
          FUN_0018174c(param_2,pfVar2);
          if (*(char *)(puVar7 + 0x16) == '\0') {
            lVar3 = **(long **)pfVar2;
            fVar9 = 0.0;
            while (lVar3 != (*(long **)pfVar2)[1]) {
              pfVar1 = (float *)(lVar3 + 0x18);
              pfVar4 = (float *)(lVar3 + 0x1c);
              lVar3 = lVar3 + 0x20;
              if (fVar9 <= *pfVar1) {
                fVar9 = *pfVar1;
              }
              if (fVar9 <= *pfVar4) {
                fVar9 = *pfVar4;
              }
            }
          }
          else {
            fVar9 = *pfVar2;
          }
          *(float *)(puVar7 + 0x19) = fVar9;
        }
        else {
          iVar6 = strcmp(pcVar8,"o");
          if (iVar6 == 0) {
            FUN_0018174c(param_2,puVar7 + 0x17);
          }
          else {
            iVar6 = strcmp(pcVar8,"tr");
            if (iVar6 == 0) {
              FUN_00183e24(param_2,puVar7 + 9);
            }
            else {
              iVar6 = strcmp(pcVar8,"hd");
              if (iVar6 == 0) {
                bVar5 = FUN_0017f198(param_2);
                *(byte *)((long)puVar7 + 0x31) = bVar5 & 1;
              }
              else {
                FUN_0017f3b4(param_2);
              }
            }
          }
        }
      }
      pcVar8 = (char *)FUN_0017ef54(param_2);
    } while (pcVar8 != (char *)0x0);
  }
  if (*(int *)(param_2 + 0x18) == 1) {
    *(undefined1 *)(param_2 + 0x118) = 1;
  }
  else {
    if ((*(char *)(puVar7 + 0x16) == '\0') || (*(char *)(puVar7 + 0x18) == '\0')) {
      bVar5 = 0;
    }
    else {
      bVar5 = FUN_00183f94(puVar7 + 9);
    }
    *(byte *)(puVar7 + 6) = bVar5 & 1;
  }
  *param_1 = this;
  param_1[1] = puVar7;
  return;
}


// ===== 00183cd8  FUN_00183cd8 =====

void FUN_00183cd8(long param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this;
  
  this = *(__shared_weak_count **)(param_1 + 8);
  if (this != (__shared_weak_count *)0x0) {
    p_Var1 = this + 8;
    do {
      lVar4 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
      return;
    }
  }
  return;
}


// ===== 00183d30  FUN_00183d30 =====

void FUN_00183d30(long param_1,undefined8 param_2)

{
  int iVar1;
  char *__s1;
  
  FUN_0017ee8c();
  __s1 = (char *)FUN_0017ef54(param_1);
  while( true ) {
    if (__s1 == (char *)0x0) {
      if (*(int *)(param_1 + 0x18) == 1) {
        *(undefined1 *)(param_1 + 0x118) = 1;
      }
      return;
    }
    if (*(char *)(param_1 + 0x118) != '\0') break;
    iVar1 = strcmp(__s1,"k");
    if (iVar1 == 0) {
      FUN_00183fd4(param_1,param_2);
    }
    else {
      FUN_0017f3b4(param_1);
    }
    __s1 = (char *)FUN_0017ef54(param_1);
  }
  return;
}


// ===== 00183db8  FUN_00183db8 =====

undefined8 FUN_00183db8(long param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x18) - 2U < 5) && ((*(ushort *)(param_1 + 0x16) & 7) == 6)) {
    iVar1 = FUN_0017f084(param_1);
    if (iVar1 == 1) {
      return 0;
    }
    if (iVar1 == 2) {
      return 1;
    }
  }
  *(undefined1 *)(param_1 + 0x118) = 1;
  return 1;
}


// ===== 00183e24  FUN_00183e24 =====

void FUN_00183e24(long param_1,long param_2)

{
  int iVar1;
  char *__s1;
  long lVar2;
  
  FUN_0017ee8c();
  __s1 = (char *)FUN_0017ef54(param_1);
  if (__s1 != (char *)0x0) {
    do {
      iVar1 = strcmp(__s1,"a");
      lVar2 = param_2 + 0x30;
      if ((iVar1 == 0) || (iVar1 = strcmp(__s1,"p"), lVar2 = param_2 + 0x20, iVar1 == 0)) {
LAB_00183f38:
        FUN_00183d30(param_1,lVar2);
      }
      else {
        iVar1 = strcmp(__s1,"r");
        lVar2 = param_2;
        if (iVar1 == 0) {
LAB_00183f50:
          FUN_0018174c(param_1,lVar2);
        }
        else {
          iVar1 = strcmp(__s1,"s");
          lVar2 = param_2 + 0x10;
          if (iVar1 == 0) goto LAB_00183f38;
          iVar1 = strcmp(__s1,"so");
          lVar2 = param_2 + 0x40;
          if ((iVar1 == 0) || (iVar1 = strcmp(__s1,"eo"), lVar2 = param_2 + 0x50, iVar1 == 0))
          goto LAB_00183f50;
          FUN_0017f3b4(param_1);
        }
      }
      __s1 = (char *)FUN_0017ef54(param_1);
    } while (__s1 != (char *)0x0);
  }
  if (*(int *)(param_1 + 0x18) == 1) {
    *(undefined1 *)(param_1 + 0x118) = 1;
  }
  return;
}


// ===== 00183f94  FUN_00183f94 =====

bool FUN_00183f94(long param_1)

{
  if ((((*(char *)(param_1 + 8) != '\0') && (*(char *)(param_1 + 0x18) != '\0')) &&
      (*(char *)(param_1 + 0x28) != '\0')) &&
     ((*(char *)(param_1 + 0x38) != '\0' && (*(char *)(param_1 + 0x48) != '\0')))) {
    return *(char *)(param_1 + 0x58) != '\0';
  }
  return false;
}


// ===== 00183fd4  FUN_00183fd4 =====

void FUN_00183fd4(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x18) - 2U < 5) {
    uVar1 = *(ushort *)(param_1 + 0x16) & 7;
    if (uVar1 == 4) {
LAB_00184034:
      FUN_0017eef0(param_1);
      while (uVar2 = FUN_0017f004(param_1), (uVar2 & 1) != 0) {
        if (*(char *)(param_1 + 0x118) != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0x18) - 2U < 5) {
          uVar1 = *(ushort *)(param_1 + 0x16) & 7;
          if (uVar1 != 3) {
            if (uVar1 != 6) goto LAB_001840e0;
            if (*(char *)(param_2 + 1) == '\0') goto LAB_001840f4;
            FUN_00184894(param_1,param_2);
            break;
          }
        }
        else if (*(int *)(param_1 + 0x18) != 7) goto LAB_001840e0;
        if (*(char *)(param_2 + 1) == '\0') {
          puVar3 = (undefined8 *)*param_2;
        }
        else {
          puVar3 = (undefined8 *)operator_new(0x18);
          puVar3[1] = 0;
          puVar3[2] = 0;
          *puVar3 = 0;
          *param_2 = puVar3;
          *(undefined1 *)(param_2 + 1) = 0;
        }
        FUN_0018a294(param_1,puVar3);
      }
      iVar4 = *(int *)(param_1 + 0x18);
      if (iVar4 != 1) {
        return;
      }
      goto LAB_001840e4;
    }
    if (uVar1 == 6) {
      if (*(char *)(param_2 + 1) != '\0') {
        FUN_00184894(param_1,param_2);
        return;
      }
LAB_001840f4:
      *(undefined1 *)(param_1 + 0x118) = 1;
      *(undefined4 *)(param_1 + 0x18) = 1;
      return;
    }
  }
  else if (*(int *)(param_1 + 0x18) == 9) goto LAB_00184034;
LAB_001840e0:
  iVar4 = 1;
LAB_001840e4:
  *(char *)(param_1 + 0x118) = (char)iVar4;
  return;
}


// ===== 00184104  FUN_00184104 =====

void FUN_00184104(long param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = *param_2;
  cVar1 = *(char *)(lVar3 + 0x79);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\0') {
    *param_2 = 0;
    *(long *)(param_1 + 0x20) = lVar3;
  }
  else {
    FUN_0017cf70(&local_60,lVar3,0,0);
    lVar3 = *param_2;
    if (*(char *)(lVar3 + 0x70) == '\0') {
      fVar4 = (float)FUN_00178d34(*(undefined8 *)(lVar3 + 0x68),0);
    }
    else {
      fVar4 = *(float *)(lVar3 + 0x68);
    }
    *(float *)(param_1 + 0x20) = fVar4 * DAT_00144b80;
    *(undefined8 *)(param_1 + 0x44) = local_40;
    *(undefined8 *)(param_1 + 0x3c) = uStack_48;
    *(undefined8 *)(param_1 + 0x34) = uStack_50;
    *(undefined8 *)(param_1 + 0x2c) = uStack_58;
    *(undefined8 *)(param_1 + 0x24) = local_60;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001841c8  FUN_001841c8 =====

void FUN_001841c8(long param_1,undefined8 param_2)

{
  int iVar1;
  char *__s1;
  
  FUN_0017ee8c();
  __s1 = (char *)FUN_0017ef54(param_1);
  while( true ) {
    if (__s1 == (char *)0x0) {
      if (*(int *)(param_1 + 0x18) == 1) {
        *(undefined1 *)(param_1 + 0x118) = 1;
      }
      return;
    }
    if (*(char *)(param_1 + 0x118) != '\0') break;
    iVar1 = strcmp(__s1,"k");
    if (iVar1 == 0) {
      FUN_0018abbc(param_1,param_2);
    }
    else {
      FUN_0017f3b4(param_1);
    }
    __s1 = (char *)FUN_0017ef54(param_1);
  }
  return;
}


// ===== 00184250  FUN_00184250 =====

bool FUN_00184250(long param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x18) - 2U < 5) && ((*(ushort *)(param_1 + 0x16) & 7) == 6)) {
    iVar2 = FUN_0017f084();
    bVar1 = iVar2 != 2;
  }
  else {
    bVar1 = true;
    *(undefined1 *)(param_1 + 0x118) = 1;
  }
  return bVar1;
}


// ===== 0018429c  FUN_0018429c =====

undefined4 FUN_0018429c(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 0x18) - 2U < 5) && ((*(ushort *)(param_1 + 0x16) & 7) == 6)) {
    iVar1 = FUN_0017f084();
    uVar2 = 1;
    if (iVar1 == 2) {
      uVar2 = 2;
    }
    uVar3 = 0;
    if (iVar1 != 1) {
      uVar3 = uVar2;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x118) = 1;
    uVar3 = 1;
  }
  return uVar3;
}


// ===== 001842f4  FUN_001842f4 =====

undefined4 FUN_001842f4(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 0x18) - 2U < 5) && ((*(ushort *)(param_1 + 0x16) & 7) == 6)) {
    iVar1 = FUN_0017f084();
    uVar2 = 1;
    if (iVar1 == 2) {
      uVar2 = 2;
    }
    uVar3 = 0;
    if (iVar1 != 1) {
      uVar3 = uVar2;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x118) = 1;
    uVar3 = 1;
  }
  return uVar3;
}


// ===== 0018434c  FUN_0018434c =====

void FUN_0018434c(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  uint uVar4;
  
  *(undefined4 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(param_2 + 0x54) = 1;
  if (*(int *)(param_1 + 0x18) - 2U < 5) {
    if ((*(ushort *)(param_1 + 0x16) & 7) == 4) {
LAB_0018439c:
      FUN_0017eef0(param_1);
      do {
        uVar2 = FUN_0017f004(param_1);
        if ((uVar2 & 1) == 0) {
          iVar1 = *(int *)(param_1 + 0x18);
          if (iVar1 != 1) {
            uVar2 = (ulong)*(uint *)(param_2 + 0x50);
            if ((int)*(uint *)(param_2 + 0x50) < 1) {
              return;
            }
            pcVar3 = (char *)(param_2 + 8);
            do {
              if (*pcVar3 == '\0') {
                *(undefined1 *)(param_2 + 0x54) = 0;
                return;
              }
              uVar2 = uVar2 - 1;
              pcVar3 = pcVar3 + 0x10;
            } while (uVar2 != 0);
            return;
          }
          goto LAB_0018445c;
        }
        if (*(char *)(param_1 + 0x118) != '\0') {
          return;
        }
        iVar1 = *(int *)(param_1 + 0x18);
        if (iVar1 - 2U < 5) {
          uVar4 = *(ushort *)(param_1 + 0x16) & 7;
        }
        else {
          uVar4 = 3;
          if (iVar1 != 7) {
            uVar4 = 0xffffffff;
          }
          if (iVar1 == 9) goto LAB_00184458;
        }
        if (uVar4 != 3) goto LAB_00184458;
        FUN_0017ee8c(param_1);
        while (pcVar3 = (char *)FUN_0017ef54(param_1), pcVar3 != (char *)0x0) {
          iVar1 = strcmp(pcVar3,"v");
          if (iVar1 == 0) {
            iVar1 = *(int *)(param_2 + 0x50);
            if (4 < iVar1) goto LAB_00184458;
            *(int *)(param_2 + 0x50) = iVar1 + 1;
            FUN_0018174c(param_1,param_2 + (long)iVar1 * 0x10);
          }
          else {
            FUN_0017f3b4(param_1);
          }
        }
      } while (*(int *)(param_1 + 0x18) != 1);
      iVar1 = 1;
      goto LAB_0018445c;
    }
  }
  else if (*(int *)(param_1 + 0x18) == 9) goto LAB_0018439c;
LAB_00184458:
  iVar1 = 1;
LAB_0018445c:
  *(char *)(param_1 + 0x118) = (char)iVar1;
  return;
}


// ===== 001844ac  FUN_001844ac =====

void FUN_001844ac(long param_1,long param_2,char *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  char *__s1;
  long lVar5;
  
  iVar3 = strcmp(param_3,"t");
  if (iVar3 == 0) {
    if ((4 < *(int *)(param_1 + 0x18) - 2U) || ((*(ushort *)(param_1 + 0x16) & 7) != 6)) {
      iVar3 = 1;
      goto LAB_001845e0;
    }
    uVar4 = FUN_0017f084(param_1);
    *(undefined4 *)(param_2 + 0x1c) = uVar4;
  }
  else {
    iVar3 = strcmp(param_3,"o");
    if (iVar3 == 0) {
      lVar5 = param_2 + 0x60;
LAB_001845b4:
      FUN_0018174c(param_1,lVar5);
    }
    else {
      iVar3 = strcmp(param_3,"s");
      if (iVar3 == 0) {
        lVar5 = param_2 + 0x20;
      }
      else {
        iVar3 = strcmp(param_3,"e");
        if (iVar3 != 0) {
          iVar3 = strcmp(param_3,"h");
          if (iVar3 == 0) {
            lVar5 = param_2 + 0x40;
          }
          else {
            iVar3 = strcmp(param_3,"a");
            if (iVar3 != 0) {
              iVar3 = strcmp(param_3,"g");
              if (iVar3 == 0) {
                FUN_0017ee8c(param_1);
                __s1 = (char *)FUN_0017ef54(param_1);
                if (__s1 != (char *)0x0) {
                  do {
                    iVar3 = strcmp(__s1,"k");
                    if (iVar3 == 0) {
                      FUN_001846ec(param_1,param_2 + 0x70);
                    }
                    else {
                      iVar3 = strcmp(__s1,"p");
                      if (iVar3 == 0) {
                        uVar4 = FUN_0017f084(param_1);
                        *(undefined4 *)(param_2 + 0x90) = uVar4;
                      }
                      else {
                        FUN_0017f3b4(param_1);
                      }
                    }
                    __s1 = (char *)FUN_0017ef54(param_1);
                  } while (__s1 != (char *)0x0);
                }
                if (*(int *)(param_1 + 0x18) == 1) {
                  iVar3 = 1;
                  goto LAB_001845e0;
                }
              }
              else {
                iVar3 = strcmp(param_3,"hd");
                if (iVar3 == 0) {
                  bVar2 = FUN_0017f198(param_1);
                  *(byte *)(param_2 + 0x19) = bVar2 & 1;
                }
                else {
                  FUN_0017f3b4(param_1);
                }
              }
              goto LAB_001845d4;
            }
            lVar5 = param_2 + 0x50;
          }
          goto LAB_001845b4;
        }
        lVar5 = param_2 + 0x30;
      }
      FUN_00183d30(param_1,lVar5);
    }
  }
LAB_001845d4:
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 != 1) {
    cVar1 = *(char *)(param_2 + 0x68);
    if ((((cVar1 != '\0') && (cVar1 = *(char *)(param_2 + 0x28), cVar1 != '\0')) &&
        (cVar1 = *(char *)(param_2 + 0x38), cVar1 != '\0')) &&
       ((cVar1 = *(char *)(param_2 + 0x58), cVar1 != '\0' &&
        (cVar1 = *(char *)(param_2 + 0x48), cVar1 != '\0')))) {
      cVar1 = *(char *)(param_2 + 0x88) != '\0';
    }
    *(char *)(param_2 + 0x18) = cVar1;
    return;
  }
LAB_001845e0:
  *(char *)(param_1 + 0x118) = (char)iVar3;
  return;
}


// ===== 001846ec  FUN_001846ec =====

void FUN_001846ec(long param_1,undefined8 param_2)

{
  int iVar1;
  char *__s1;
  
  FUN_0017ee8c();
  __s1 = (char *)FUN_0017ef54(param_1);
  while( true ) {
    if (__s1 == (char *)0x0) {
      if (*(int *)(param_1 + 0x18) == 1) {
        *(undefined1 *)(param_1 + 0x118) = 1;
      }
      return;
    }
    if (*(char *)(param_1 + 0x118) != '\0') break;
    iVar1 = strcmp(__s1,"k");
    if (iVar1 == 0) {
      FUN_0018b7ac(param_1,param_2);
    }
    else {
      FUN_0017f3b4(param_1);
    }
    __s1 = (char *)FUN_0017ef54(param_1);
  }
  return;
}


// ===== 00184774  FUN_00184774 =====

void FUN_00184774(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_1 + 0x18) - 2U < 5) {
    if ((*(ushort *)(param_1 + 0x16) & 7) != 4) goto LAB_00184854;
LAB_001847c8:
    FUN_0017eef0(param_1);
    while (uVar3 = FUN_0017f004(param_1), (uVar3 & 1) != 0) {
      if (*(char *)(param_1 + 0x118) != '\0') goto LAB_0018486c;
      if (*(int *)(param_1 + 0x18) - 2U < 5) {
        if ((*(ushort *)(param_1 + 0x16) & 7) != 4) goto LAB_00184854;
      }
      else if (*(int *)(param_1 + 0x18) != 9) goto LAB_00184854;
      FUN_0017eef0(param_1);
      local_40 = 0;
      FUN_00184894(param_1,&local_40);
      puVar1 = *(undefined8 **)(param_2 + 8);
      if (puVar1 == *(undefined8 **)(param_2 + 0x10)) {
        FUN_0017912c(param_2,&local_40);
      }
      else {
        *puVar1 = local_40;
        *(undefined8 **)(param_2 + 8) = puVar1 + 1;
      }
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if (iVar4 != 1) goto LAB_0018486c;
  }
  else {
    if (*(int *)(param_1 + 0x18) == 9) goto LAB_001847c8;
LAB_00184854:
    iVar4 = 1;
  }
  *(char *)(param_1 + 0x118) = (char)iVar4;
LAB_0018486c:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00184894  FUN_00184894 =====

void FUN_00184894(long param_1,undefined8 *param_2)

{
  long lVar1;
  double dVar2;
  ulong uVar3;
  int iVar4;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = 0;
  uStack_50 = 0;
  if (*(int *)(param_1 + 0x18) - 2U < 5) {
    if ((*(ushort *)(param_1 + 0x16) & 7) != 4) goto LAB_001848f8;
  }
  else if (*(int *)(param_1 + 0x18) != 9) goto LAB_001848f8;
  FUN_0017eef0(param_1);
LAB_001848f8:
  uVar3 = FUN_0017f004(param_1);
  if ((uVar3 & 1) != 0) {
    iVar4 = 0;
    do {
      if (*(char *)(param_1 + 0x118) != '\0') goto LAB_0018495c;
      dVar2 = (double)FUN_0017f0e8(param_1);
      if (iVar4 < 4) {
        *(float *)((long)&local_58 + (long)iVar4 * 4) = (float)dVar2;
        iVar4 = iVar4 + 1;
      }
      uVar3 = FUN_0017f004(param_1);
    } while ((uVar3 & 1) != 0);
  }
  if (*(int *)(param_1 + 0x18) == 1) {
    *(undefined1 *)(param_1 + 0x118) = 1;
  }
  else {
    *param_2 = local_58;
  }
LAB_0018495c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00184988  FUN_00184988 =====

void FUN_00184988(long param_1,float *param_2)

{
  ushort uVar1;
  double dVar2;
  ulong uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x18) - 2U < 5) {
    uVar1 = *(ushort *)(param_1 + 0x16) & 7;
    if (uVar1 == 6) {
      dVar2 = (double)FUN_0017f0e8(param_1);
      *param_2 = (float)dVar2;
      return;
    }
    if (uVar1 == 4) {
LAB_001849d4:
      FUN_0017eef0(param_1);
      uVar3 = FUN_0017f004(param_1);
      if ((uVar3 & 1) != 0) {
        dVar2 = (double)FUN_0017f0e8(param_1);
        *param_2 = (float)dVar2;
      }
      while (uVar3 = FUN_0017f004(param_1), (uVar3 & 1) != 0) {
        if (*(char *)(param_1 + 0x118) != '\0') {
          return;
        }
        FUN_0017f0e8(param_1);
      }
      iVar4 = *(int *)(param_1 + 0x18);
      if (iVar4 != 1) {
        return;
      }
      goto LAB_00184a24;
    }
  }
  else if (*(int *)(param_1 + 0x18) == 9) goto LAB_001849d4;
  iVar4 = 1;
LAB_00184a24:
  *(char *)(param_1 + 0x118) = (char)iVar4;
  return;
}


// ===== 00184a48  FUN_00184a48 =====

void FUN_00184a48(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  double dVar4;
  undefined8 uVar5;
  float local_58 [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58[0] = 0.0;
  local_58[1] = 0.0;
  local_58[2] = 0.0;
  local_58[3] = 0.0;
  if (*(int *)(param_1 + 0x18) - 2U < 5) {
    if ((*(ushort *)(param_1 + 0x16) & 7) != 4) goto LAB_00184aac;
  }
  else if (*(int *)(param_1 + 0x18) != 9) goto LAB_00184aac;
  FUN_0017eef0(param_1);
LAB_00184aac:
  uVar2 = FUN_0017f004(param_1);
  if ((uVar2 & 1) != 0) {
    iVar3 = 0;
    do {
      if (*(char *)(param_1 + 0x118) != '\0') goto LAB_00184b24;
      dVar4 = (double)FUN_0017f0e8(param_1);
      if (iVar3 < 4) {
        local_58[iVar3] = (float)dVar4;
        iVar3 = iVar3 + 1;
      }
      uVar2 = FUN_0017f004(param_1);
    } while ((uVar2 & 1) != 0);
  }
  if (*(int *)(param_1 + 0x18) == 1) {
    *(undefined1 *)(param_1 + 0x118) = 1;
  }
  else {
    uVar5 = NEON_rev64(CONCAT44(local_58[2],local_58[1]),4);
    param_2[1] = uVar5;
    *(float *)(param_2 + 2) = local_58[0];
    *param_2 = *(undefined8 *)(param_1 + 0x110);
  }
LAB_00184b24:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00184b50  FUN_00184b50 =====

void FUN_00184b50(long param_1,long param_2)

{
  float *pfVar1;
  long lVar2;
  double dVar3;
  ulong uVar4;
  float local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_1 + 0x18) - 2U < 5) {
    if ((*(ushort *)(param_1 + 0x16) & 7) != 4) goto LAB_00184bec;
  }
  else if (*(int *)(param_1 + 0x18) != 9) goto LAB_00184bec;
  FUN_0017eef0(param_1);
LAB_00184bec:
  while (uVar4 = FUN_0017f004(param_1), (uVar4 & 1) != 0) {
    if (*(char *)(param_1 + 0x118) != '\0') goto LAB_00184c08;
    dVar3 = (double)FUN_0017f0e8(param_1);
    local_3c = (float)dVar3;
    pfVar1 = *(float **)(param_2 + 8);
    if (pfVar1 < *(float **)(param_2 + 0x10)) {
      *pfVar1 = local_3c;
      *(float **)(param_2 + 8) = pfVar1 + 1;
    }
    else {
      FUN_0018c574(param_2,&local_3c);
    }
  }
  if (*(int *)(param_1 + 0x18) == 1) {
    *(undefined1 *)(param_1 + 0x118) = 1;
  }
LAB_00184c08:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00184c30  FUN_00184c30 =====

void FUN_00184c30(long param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  ulong uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x18) - 2U < 5) {
    uVar1 = *(ushort *)(param_1 + 0x16) & 7;
    if (uVar1 == 6) {
      uVar2 = FUN_0017f084(param_1);
      *param_2 = uVar2;
      return;
    }
    if (uVar1 == 4) {
LAB_00184c7c:
      FUN_0017eef0(param_1);
      while (uVar3 = FUN_0017f004(param_1), (uVar3 & 1) != 0) {
        if (*(char *)(param_1 + 0x118) != '\0') {
          return;
        }
        uVar2 = FUN_0017f084(param_1);
        *param_2 = uVar2;
      }
      iVar4 = *(int *)(param_1 + 0x18);
      if (iVar4 != 1) {
        return;
      }
      goto LAB_00184cb4;
    }
  }
  else if (*(int *)(param_1 + 0x18) == 9) goto LAB_00184c7c;
  iVar4 = 1;
LAB_00184cb4:
  *(char *)(param_1 + 0x118) = (char)iVar4;
  return;
}


// ===== 00184cd4  FUN_00184cd4 =====

void FUN_00184cd4(long param_1,undefined8 *param_2)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *__s1;
  void *pvVar5;
  undefined8 **ppuVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined8 *puStack_c8;
  undefined8 *local_c0;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_80 = (undefined8 *)0x0;
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_98 = (undefined8 *)0x0;
  local_90 = (undefined8 *)0x0;
  local_88 = 0;
  local_b0 = (undefined8 *)0x0;
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  local_d0 = (undefined8 *)0x0;
  puStack_c8 = (undefined8 *)0x0;
  local_c0 = (undefined8 *)0x0;
  iVar4 = *(int *)(param_1 + 0x18);
  if (iVar4 - 2U < 5) {
    if ((*(ushort *)(param_1 + 0x16) & 7) == 4) {
LAB_00184d58:
      FUN_0017eef0(param_1);
      iVar4 = *(int *)(param_1 + 0x18);
      bVar2 = true;
      if (4 < iVar4 - 2U) goto LAB_00184d84;
    }
    else {
      bVar2 = false;
    }
    uVar8 = *(ushort *)(param_1 + 0x16) & 7;
LAB_00184d98:
    if (uVar8 != 3) goto LAB_00184e74;
    FUN_0017ee8c(param_1);
    __s1 = (char *)FUN_0017ef54(param_1);
    if (__s1 == (char *)0x0) {
      bVar3 = 0;
    }
    else {
      bVar3 = 0;
      do {
        iVar4 = strcmp(__s1,"i");
        if (iVar4 == 0) {
          ppuVar6 = &local_80;
LAB_00184e48:
          FUN_00184774(param_1,ppuVar6);
        }
        else {
          iVar4 = strcmp(__s1,"o");
          if (iVar4 == 0) {
            ppuVar6 = &local_98;
            goto LAB_00184e48;
          }
          iVar4 = strcmp(__s1,"v");
          if (iVar4 == 0) {
            ppuVar6 = &local_b0;
            goto LAB_00184e48;
          }
          iVar4 = strcmp(__s1,"c");
          if (iVar4 == 0) {
            bVar3 = FUN_0017f198(param_1);
          }
          else {
            *(undefined1 *)(param_1 + 0x118) = 1;
            FUN_0017f3b4(param_1);
          }
        }
        __s1 = (char *)FUN_0017ef54(param_1);
      } while (__s1 != (char *)0x0);
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if (iVar4 != 1) {
      if (bVar2) {
        FUN_0017f004(param_1);
      }
      if (((local_80 != local_78) && (local_98 != local_90)) && (local_b0 != local_a8)) {
        uVar9 = (long)local_78 - (long)local_80;
        lVar7 = (long)uVar9 >> 3;
        if ((lVar7 == (long)local_90 - (long)local_98 >> 3) &&
           (lVar10 = (long)local_a8 - (long)local_b0, lVar7 == lVar10 >> 3)) {
          FUN_00178fe4(&local_d0,lVar7 * 0x300000000 + 0x400000000 >> 0x20);
          if (puStack_c8 == local_c0) {
            FUN_0017912c(&local_d0);
          }
          else {
            *puStack_c8 = *local_b0;
            puStack_c8 = puStack_c8 + 1;
          }
          if (1 < (int)(uVar9 >> 3)) {
            lVar7 = 0;
            lVar11 = (uVar9 >> 3 & 0xffffffff) - 1;
            do {
              local_d8 = CONCAT44((float)((ulong)*(undefined8 *)((long)local_98 + lVar7) >> 0x20) +
                                  (float)((ulong)*(undefined8 *)((long)local_b0 + lVar7) >> 0x20),
                                  (float)*(undefined8 *)((long)local_98 + lVar7) +
                                  (float)*(undefined8 *)((long)local_b0 + lVar7));
              if (puStack_c8 == local_c0) {
                FUN_0017912c(&local_d0,&local_d8);
              }
              else {
                *puStack_c8 = local_d8;
                puStack_c8 = puStack_c8 + 1;
              }
              uVar12 = *(undefined8 *)((long)local_b0 + lVar7 + 8);
              uVar13 = *(undefined8 *)((long)local_80 + lVar7 + 8);
              local_d8 = CONCAT44((float)((ulong)uVar13 >> 0x20) + (float)((ulong)uVar12 >> 0x20),
                                  (float)uVar13 + (float)uVar12);
              if (puStack_c8 == local_c0) {
                FUN_0017912c(&local_d0,&local_d8);
              }
              else {
                *puStack_c8 = local_d8;
                puStack_c8 = puStack_c8 + 1;
              }
              if (puStack_c8 == local_c0) {
                FUN_0017912c(&local_d0,(long)local_b0 + lVar7 + 8);
              }
              else {
                *puStack_c8 = *(undefined8 *)((long)local_b0 + lVar7 + 8);
                puStack_c8 = puStack_c8 + 1;
              }
              lVar11 = lVar11 + -1;
              lVar7 = lVar7 + 8;
            } while (lVar11 != 0);
          }
          if ((bVar3 & 1) != 0) {
            lVar7 = lVar10 * 0x20000000 + -0x100000000 >> 0x1d;
            uVar12 = *(undefined8 *)((long)local_b0 + lVar7);
            uVar13 = *(undefined8 *)((long)local_98 + lVar7);
            local_d8 = CONCAT44((float)((ulong)uVar13 >> 0x20) + (float)((ulong)uVar12 >> 0x20),
                                (float)uVar13 + (float)uVar12);
            if (puStack_c8 == local_c0) {
              FUN_0017912c(&local_d0,&local_d8);
            }
            else {
              *puStack_c8 = local_d8;
              puStack_c8 = puStack_c8 + 1;
            }
            local_d8 = CONCAT44((float)((ulong)*local_80 >> 0x20) +
                                (float)((ulong)*local_b0 >> 0x20),
                                (float)*local_80 + (float)*local_b0);
            if (puStack_c8 == local_c0) {
              FUN_0017912c(&local_d0,&local_d8);
            }
            else {
              *puStack_c8 = local_d8;
              puStack_c8 = puStack_c8 + 1;
            }
            if (puStack_c8 == local_c0) {
              FUN_0017912c(&local_d0);
            }
            else {
              *puStack_c8 = *local_b0;
              puStack_c8 = puStack_c8 + 1;
            }
          }
        }
        else {
          if (local_d0 != (undefined8 *)0x0) {
            puStack_c8 = local_d0;
            operator_delete(local_d0);
          }
          local_d0 = (undefined8 *)0x0;
          puStack_c8 = (undefined8 *)0x0;
          local_c0 = (undefined8 *)0x0;
        }
        pvVar5 = (void *)*param_2;
        if (pvVar5 != (void *)0x0) {
          param_2[1] = pvVar5;
          operator_delete(pvVar5);
          *param_2 = 0;
          param_2[1] = 0;
          param_2[2] = 0;
        }
        param_2[1] = puStack_c8;
        *param_2 = local_d0;
        param_2[2] = local_c0;
        local_d0 = (undefined8 *)0x0;
        puStack_c8 = (undefined8 *)0x0;
        local_c0 = (undefined8 *)0x0;
        *(byte *)(param_2 + 3) = bVar3 & 1;
      }
      goto LAB_00184e90;
    }
  }
  else {
    if (iVar4 == 9) goto LAB_00184d58;
    bVar2 = false;
LAB_00184d84:
    uVar8 = 3;
    if (iVar4 != 7) {
      uVar8 = 0xffffffff;
    }
    if (iVar4 != 9) goto LAB_00184d98;
LAB_00184e74:
    iVar4 = 1;
  }
  *(char *)(param_1 + 0x118) = (char)iVar4;
LAB_00184e90:
  if (local_d0 != (undefined8 *)0x0) {
    puStack_c8 = local_d0;
    operator_delete(local_d0);
  }
  if (local_b0 != (undefined8 *)0x0) {
    local_a8 = local_b0;
    operator_delete(local_b0);
  }
  if (local_98 != (undefined8 *)0x0) {
    local_90 = local_98;
    operator_delete(local_98);
  }
  if (local_80 != (undefined8 *)0x0) {
    local_78 = local_80;
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001851a0  FUN_001851a0 =====

void FUN_001851a0(long param_1)

{
  long lVar1;
  int iVar2;
  char *__s1;
  uint uVar3;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = 0;
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 - 2U < 5) {
    uVar3 = *(ushort *)(param_1 + 0x16) & 7;
LAB_001851fc:
    if (uVar3 == 3) {
      FUN_0017ee8c(param_1);
      __s1 = (char *)FUN_0017ef54(param_1);
      if (__s1 != (char *)0x0) {
        do {
          iVar2 = strcmp(__s1,"x");
          if (iVar2 == 0) {
            FUN_00184988(param_1,&local_50);
          }
          iVar2 = strcmp(__s1,"y");
          if (iVar2 == 0) {
            FUN_00184988(param_1,(ulong)&local_50 | 4);
          }
          __s1 = (char *)FUN_0017ef54(param_1);
        } while (__s1 != (char *)0x0);
      }
      if (*(int *)(param_1 + 0x18) != 1) goto LAB_00185290;
    }
  }
  else {
    uVar3 = 3;
    if (iVar2 != 7) {
      uVar3 = 0xffffffff;
    }
    if (iVar2 != 9) goto LAB_001851fc;
  }
  *(undefined1 *)(param_1 + 0x118) = 1;
LAB_00185290:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((undefined4)local_50,local_50._4_4_);
}


// ===== 001852c0  FUN_001852c0 =====

undefined8 FUN_001852c0(undefined8 param_1,char *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  iVar1 = strcmp(param_2,"ti");
  if (iVar1 == 0) {
    *(undefined1 *)(param_3 + 0x20) = 1;
    lVar2 = param_3 + 0x10;
  }
  else {
    iVar1 = strcmp(param_2,"to");
    if (iVar1 != 0) {
      return 0;
    }
    lVar2 = param_3 + 0x18;
    *(undefined1 *)(param_3 + 0x20) = 1;
  }
  FUN_00184894(param_1,lVar2);
  return 1;
}


// ===== 00185344  FUN_00185344 =====

void FUN_00185344(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                 *param_7)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  __shared_weak_count *this;
  long *plVar7;
  undefined1 auStack_c0 [8];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined8 uStack_84;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  if (((byte)*param_7 & 1) == 0) {
    if ((byte)*param_7 >> 1 != 0) goto LAB_001853d8;
  }
  else if (*(long *)(param_7 + 8) != 0) goto LAB_001853d8;
  FUN_00185520((double)(float)param_2,(double)(float)param_3,(double)(float)param_4,
               (double)(float)param_5,&local_b8,0x14,0x14);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_7,(char *)&local_b8);
LAB_001853d8:
  lVar5 = FUN_0018c700(param_6 + 0x80,param_7);
  if (lVar5 == 0) {
    FUN_0018f078(param_4,param_5,param_2,param_3,&local_b8);
    puVar6 = (undefined8 *)operator_new(0x58);
    puVar6[2] = 0;
    plVar7 = puVar6 + 1;
    *plVar7 = 0;
    *puVar6 = &PTR____shared_count_00209520;
    *param_1 = (long)(puVar6 + 3);
    param_1[1] = (long)puVar6;
    *(undefined8 *)((long)puVar6 + 0x4c) = uStack_84;
    *(ulong *)((long)puVar6 + 0x44) = CONCAT44(uStack_88,local_8c);
    puVar6[8] = CONCAT44(local_8c,uStack_90);
    puVar6[7] = uStack_98;
    puVar6[6] = uStack_a0;
    puVar6[5] = local_a8;
    puVar6[4] = uStack_b0;
    puVar6[3] = local_b8;
    local_b8 = param_7;
    lVar5 = FUN_0018c874(param_6 + 0x80,param_7,&DAT_00147148,&local_b8,auStack_c0);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    this = *(__shared_weak_count **)(lVar5 + 0x30);
    *(undefined8 **)(lVar5 + 0x28) = puVar6 + 3;
    *(undefined8 **)(lVar5 + 0x30) = puVar6;
    if (this != (__shared_weak_count *)0x0) {
      p_Var1 = this + 8;
      do {
        lVar5 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*(long *)this + 0x10))(this);
        std::__ndk1::__shared_weak_count::__release_weak(this);
      }
    }
  }
  else {
    *param_1 = *(long *)(lVar5 + 0x28);
    lVar5 = *(long *)(lVar5 + 0x30);
    param_1[1] = lVar5;
    if (lVar5 != 0) {
      plVar7 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00185520  FUN_00185520 =====

void FUN_00185520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  __vsnprintf_chk(param_2,param_4,0,param_3,"%.2f_%.2f_%.2f_%.2f",&local_70,param_8,param_9,param_1)
  ;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001855c4  FUN_001855c4 =====

void FUN_001855c4(long param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this;
  
  this = *(__shared_weak_count **)(param_1 + 8);
  if (this != (__shared_weak_count *)0x0) {
    p_Var1 = this + 8;
    do {
      lVar4 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
      return;
    }
  }
  return;
}


// ===== 0018561c  FUN_0018561c =====

void FUN_0018561c(undefined1 param_1 [16],undefined8 param_2,long param_3,long *param_4)

{
  __shared_weak_count *p_Var1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  __shared_weak_count *p_Var6;
  int iVar7;
  char *pcVar8;
  ulong uVar9;
  void **ppvVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong local_140;
  ulong uStack_138;
  void *local_130;
  undefined8 local_120;
  __shared_weak_count *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  __shared_weak_count *local_100;
  void *local_f8;
  void *local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  void *local_d8;
  void *local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  ulong local_b8;
  ulong uStack_b0;
  undefined7 local_a8;
  undefined1 uStack_a1;
  char cStack_a0;
  char cStack_9f;
  char cStack_9e;
  char local_9d;
  long local_98;
  
  lVar5 = tpidr_el0;
  local_98 = *(long *)(lVar5 + 0x28);
  FUN_0017ee8c();
  local_b8 = 0;
  uStack_b0 = 0;
  cStack_a0 = '\0';
  cStack_9f = '\0';
  cStack_9e = '\0';
  local_a8 = 0;
  uStack_a1 = 0;
  local_d8 = (void *)0x0;
  local_d0 = (void *)0x0;
  local_c0 = 0;
  local_c8 = 0;
  local_9d = '\x01';
  uStack_108 = 0;
  local_110 = 0;
  local_f8 = (void *)0x0;
  local_100 = (__shared_weak_count *)0x0;
  uStack_e8 = 0;
  local_f0 = (void *)0x0;
  local_e0 = 0;
  pcVar8 = (char *)FUN_0017ef54(param_3);
  if (pcVar8 != (char *)0x0) {
    uVar13 = 0;
    uVar15 = 0;
    uVar12 = 0;
    uVar16 = 0;
LAB_001856e0:
    iVar7 = strcmp(pcVar8,"i");
    if (iVar7 == 0) {
      cStack_a0 = '\x01';
      uVar12 = FUN_001851a0(param_3);
      uVar16 = param_2;
    }
    else {
      iVar7 = strcmp(pcVar8,"o");
      if (iVar7 == 0) {
        uVar13 = FUN_001851a0(param_3);
        uVar15 = param_2;
      }
      else {
        iVar7 = strcmp(pcVar8,"t");
        if (iVar7 == 0) {
          dVar14 = (double)FUN_0017f0e8(param_3);
          local_110 = CONCAT44(local_110._4_4_,(float)dVar14);
        }
        else {
          iVar7 = strcmp(pcVar8,"s");
          if (iVar7 == 0) {
            cStack_9f = '\x01';
            ppvVar10 = &local_f8;
          }
          else {
            iVar7 = strcmp(pcVar8,"e");
            if (iVar7 != 0) {
              iVar7 = strcmp(pcVar8,"n");
              if (iVar7 == 0) {
                if (*(int *)(param_3 + 0x18) - 2U < 5) {
                  uVar2 = *(ushort *)(param_3 + 0x16) & 7;
                  if (uVar2 != 4) {
                    if (uVar2 != 5) goto LAB_00185a38;
                    pcVar8 = (char *)FUN_0017f248(param_3);
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_b8,pcVar8);
                    goto LAB_001857c8;
                  }
                }
                else if (*(int *)(param_3 + 0x18) != 9) {
LAB_00185a38:
                  iVar7 = 1;
                  goto LAB_00185a3c;
                }
                FUN_0017eef0(param_3);
                while (uVar9 = FUN_0017f004(param_3), (uVar9 & 1) != 0) {
                  if (*(char *)(param_3 + 0x118) != '\0') goto LAB_00185a40;
                  if ((4 < *(int *)(param_3 + 0x18) - 2U) ||
                     ((*(ushort *)(param_3 + 0x16) & 7) != 5)) goto LAB_00185a38;
                  uVar9 = local_b8 >> 1 & 0x7f;
                  if ((local_b8 & 1) != 0) {
                    uVar9 = uStack_b0;
                  }
                  pcVar8 = (char *)FUN_0017f248(param_3);
                  if (uVar9 == 0) {
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_b8,pcVar8);
                  }
                }
                if (*(int *)(param_3 + 0x18) != 1) goto LAB_001857c8;
                iVar7 = 1;
                goto LAB_00185a3c;
              }
              iVar7 = strcmp(pcVar8,"h");
              if (iVar7 == 0) {
                iVar7 = FUN_0017f084(param_3);
                cStack_9e = iVar7 != 0;
              }
              else {
                FUN_0017f3b4(param_3);
              }
              goto LAB_001857c8;
            }
            local_9d = '\0';
            ppvVar10 = &local_d8;
          }
          FUN_00184cd4(param_3,ppvVar10);
        }
      }
    }
LAB_001857c8:
    pcVar8 = (char *)FUN_0017ef54(param_3);
    if (pcVar8 == (char *)0x0) goto LAB_001858c8;
    goto LAB_001856e0;
  }
  uVar16 = 0;
  uVar12 = 0;
  uVar15 = 0;
  uVar13 = 0;
LAB_001858c8:
  iVar7 = *(int *)(param_3 + 0x18);
  if (iVar7 == 1) {
LAB_00185a3c:
    *(char *)(param_3 + 0x118) = (char)iVar7;
  }
  else {
    lVar11 = param_4[1];
    if (*param_4 != lVar11) {
      *(undefined4 *)(lVar11 + -0x54) = (undefined4)local_110;
      if ((cStack_9f != '\0') && (local_9d != '\0')) {
        if ((void **)(lVar11 + -0x20) != &local_f8) {
          FUN_00177b40((void **)(lVar11 + -0x20),local_f8,local_f0);
        }
        *(undefined1 *)(lVar11 + -8) = local_e0;
      }
    }
    if (cStack_9e == '\0') {
      if (cStack_a0 == '\0') goto LAB_00185a40;
      local_130 = (void *)CONCAT17(uStack_a1,local_a8);
      uStack_138 = uStack_b0;
      local_140 = local_b8;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a1 = 0;
      FUN_00185344(&local_120,uVar12,uVar16,uVar13,uVar15,param_3,&local_140);
      p_Var6 = local_100;
      local_100 = local_118;
      uStack_108 = local_120;
      local_120 = 0;
      local_118 = (__shared_weak_count *)0x0;
      if (p_Var6 != (__shared_weak_count *)0x0) {
        p_Var1 = p_Var6 + 8;
        do {
          lVar11 = *(long *)p_Var1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar4) {
            *(long *)p_Var1 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var6);
        }
      }
      p_Var6 = local_118;
      if (local_118 != (__shared_weak_count *)0x0) {
        p_Var1 = local_118 + 8;
        do {
          lVar11 = *(long *)p_Var1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar4) {
            *(long *)p_Var1 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*(long *)local_118 + 0x10))(local_118);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var6);
        }
      }
      if ((local_140 & 1) != 0) {
        operator_delete(local_130);
      }
    }
    else {
      FUN_00177b40(&local_d8,local_f8,local_f0);
      local_c0 = local_e0;
      local_110 = CONCAT44((undefined4)local_110,(undefined4)local_110);
    }
    if (param_4[1] == param_4[2]) {
      FUN_0018ce50(param_4,&local_110);
    }
    else {
      FUN_0018cdc4();
    }
  }
LAB_00185a40:
  if (local_d8 != (void *)0x0) {
    local_d0 = local_d8;
    operator_delete(local_d8);
  }
  if (local_f8 != (void *)0x0) {
    local_f0 = local_f8;
    operator_delete(local_f8);
  }
  p_Var6 = local_100;
  if (local_100 != (__shared_weak_count *)0x0) {
    p_Var1 = local_100 + 8;
    do {
      lVar11 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*(long *)local_100 + 0x10))(local_100);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var6);
    }
  }
  if ((local_b8 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_a1,local_a8));
  }
  if (*(long *)(lVar5 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00185ae8  FUN_00185ae8 =====

undefined8 * FUN_00185ae8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (*(char *)(param_1 + 4) == '\0') {
    puVar1 = (undefined8 *)*param_1;
  }
  else {
    FUN_0018983c(param_1);
    puVar1 = (undefined8 *)operator_new(0x18);
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    *param_1 = puVar1;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return puVar1;
}


// ===== 00185b34  FUN_00185b34 =====

void FUN_00185b34(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    FUN_00185ee8((long)pvVar1 + 0xf8);
    if ((*(byte *)((long)pvVar1 + 0xe0) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar1 + 0xf0));
    }
    FUN_00185f74((long)pvVar1 + 200);
    FUN_0017fe78((long)pvVar1 + 0xa8);
    FUN_00185fe0((long)pvVar1 + 0x80);
    FUN_001860a4((long)pvVar1 + 0x20);
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00185b9c  FUN_00185b9c =====

void FUN_00185b9c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x120);
  FUN_0017ea3c(pvVar1,param_2);
  *(undefined8 *)((long)pvVar1 + 0x88) = 0;
  *(undefined8 *)((long)pvVar1 + 0x80) = 0;
  *(undefined8 *)((long)pvVar1 + 0x98) = 0;
  *(undefined8 *)((long)pvVar1 + 0x90) = 0;
  *(undefined4 *)((long)pvVar1 + 0xa0) = 0x3f800000;
  *(undefined8 *)((long)pvVar1 + 0xb0) = 0;
  *(undefined8 *)((long)pvVar1 + 0xa8) = 0;
  *(undefined8 *)((long)pvVar1 + 0xc0) = 0;
  *(undefined8 *)((long)pvVar1 + 0xb8) = 0;
  *(undefined8 *)((long)pvVar1 + 0xd0) = 0;
  *(undefined8 *)((long)pvVar1 + 200) = 0;
  *(undefined8 *)((long)pvVar1 + 0xd8) = 0;
  FUN_001634e0((long)pvVar1 + 0xe0,param_3);
  *(undefined8 *)((long)pvVar1 + 0xf8) = 0;
  *(undefined8 *)((long)pvVar1 + 0x100) = 0;
  *(undefined8 *)((long)pvVar1 + 0x108) = 0;
  *(undefined8 *)((long)pvVar1 + 0x110) = param_4;
  *(undefined1 *)((long)pvVar1 + 0x118) = 0;
  *param_1 = (long)pvVar1;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_0017f644(pvVar1);
  if (*(char *)(*param_1 + 0x118) != '\0') {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}


// ===== 00185c44  FUN_00185c44 =====

void FUN_00185c44(undefined8 *param_1,long *param_2)

{
  __shared_weak_count *p_Var1;
  long *plVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  __shared_weak_count *p_Var9;
  
  lVar8 = *(long *)(*param_2 + 0xa8);
  p_Var9 = *(__shared_weak_count **)(*param_2 + 0xb0);
  if (p_Var9 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var9 + 8;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar5) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      lVar7 = *(long *)p_Var1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar5) {
        *(long *)p_Var1 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*(long *)p_Var9 + 0x10))(p_Var9);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var9);
    }
  }
  if (lVar8 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar6 = (undefined8 *)operator_new(0x28);
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_FUN_00209558;
    puVar6[3] = 0;
    puVar6[4] = 0;
    uVar3 = *(undefined8 *)(*param_2 + 0xa8);
    lVar8 = *(long *)(*param_2 + 0xb0);
    if (lVar8 == 0) {
      puVar6[3] = uVar3;
      puVar6[4] = 0;
    }
    else {
      plVar2 = (long *)(lVar8 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = *plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      p_Var9 = (__shared_weak_count *)puVar6[4];
      puVar6[3] = uVar3;
      puVar6[4] = lVar8;
      if (p_Var9 != (__shared_weak_count *)0x0) {
        p_Var1 = p_Var9 + 8;
        do {
          lVar8 = *(long *)p_Var1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar5) {
            *(long *)p_Var1 = lVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*(long *)p_Var9 + 0x10))(p_Var9);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var9);
        }
      }
    }
    FUN_0017cde8(puVar6[3]);
    *param_1 = puVar6 + 3;
    param_1[1] = puVar6;
  }
  return;
}


// ===== 00185d60  FUN_00185d60 =====

undefined1 FUN_00185d60(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}


// ===== 00185d68  FUN_00185d68 =====

void FUN_00185d68(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = param_2;
  if (pvVar1 != (void *)0x0) {
    FUN_00185dd0((long)pvVar1 + 0x58);
    FUN_001804c0((long)pvVar1 + 0x48);
    if (*(char *)((long)pvVar1 + 0x38) == '\0') {
      FUN_00185e3c((long)pvVar1 + 0x30,0);
    }
    if ((*(byte *)((long)pvVar1 + 0x18) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar1 + 0x28));
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00185dd0  FUN_00185dd0 =====

void FUN_00185dd0(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)*param_1;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  pvVar2 = (void *)param_1[1];
  pvVar1 = pvVar3;
  if (pvVar2 != pvVar3) {
    do {
      pvVar2 = (void *)((long)pvVar2 + -0x10);
      FUN_00182134(pvVar2);
    } while (pvVar3 != pvVar2);
    pvVar1 = (void *)*param_1;
  }
  param_1[1] = pvVar3;
  operator_delete(pvVar1);
  return;
}


// ===== 00185e3c  FUN_00185e3c =====

void FUN_00185e3c(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = param_2;
  if (pvVar1 != (void *)0x0) {
    FUN_00185e78(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00185e78  FUN_00185e78 =====

void FUN_00185e78(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar4 = (void *)*param_1;
  if (pvVar4 == (void *)0x0) {
    return;
  }
  pvVar3 = (void *)param_1[1];
  pvVar2 = pvVar4;
  if (pvVar3 != pvVar4) {
    do {
      lVar1 = (long)pvVar3 + -0x18;
      pvVar3 = (void *)((long)pvVar3 + -0x20);
      FUN_001855c4(lVar1);
    } while (pvVar4 != pvVar3);
    pvVar2 = (void *)*param_1;
  }
  param_1[1] = pvVar4;
  operator_delete(pvVar2);
  return;
}


// ===== 00185ee8  FUN_00185ee8 =====

void FUN_00185ee8(long *param_1)

{
  if (*param_1 != 0) {
    FUN_00185f20();
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 00185f20  FUN_00185f20 =====

void FUN_00185f20(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar1 = (byte *)*param_1;
  pbVar3 = (byte *)param_1[1];
  while (pbVar2 = pbVar3, pbVar2 != pbVar1) {
    pbVar3 = pbVar2 + -0x20;
    if ((*pbVar3 & 1) != 0) {
      operator_delete(*(void **)(pbVar2 + -0x10));
    }
  }
  param_1[1] = (long)pbVar1;
  return;
}


// ===== 00185f74  FUN_00185f74 =====

void FUN_00185f74(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)*param_1;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  pvVar2 = (void *)param_1[1];
  pvVar1 = pvVar3;
  if (pvVar2 != pvVar3) {
    do {
      pvVar2 = (void *)((long)pvVar2 + -0x10);
      FUN_00181518(pvVar2);
    } while (pvVar3 != pvVar2);
    pvVar1 = (void *)*param_1;
  }
  param_1[1] = pvVar3;
  operator_delete(pvVar1);
  return;
}


// ===== 00185fe0  FUN_00185fe0 =====

void FUN_00185fe0(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_0018601c(param_1,param_1[2]);
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 0018601c  FUN_0018601c =====

void FUN_0018601c(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      pvVar1 = (void *)*param_2;
      FUN_00186068();
      operator_delete(param_2);
      param_2 = (undefined8 *)pvVar1;
    } while (pvVar1 != (void *)0x0);
  }
  return;
}


// ===== 00186068  FUN_00186068 =====

void FUN_00186068(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  FUN_001855c4(param_3 + 0x18);
  if ((*param_3 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_3 + 0x10));
  return;
}


// ===== 001860a4  FUN_001860a4 =====

void FUN_001860a4(long param_1)

{
  free(*(void **)(param_1 + 0x10));
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 8));
    return;
  }
  return;
}


// ===== 001860dc  FUN_001860dc =====

void FUN_001860dc(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = param_2;
  if (pvVar1 != (void *)0x0) {
    FUN_00186118(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00186118  FUN_00186118 =====

void FUN_00186118(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\0') {
    FUN_00185e3c(param_1 + 0x68,0);
  }
  if (*(char *)(param_1 + 0x60) == '\0') {
    FUN_001861c8(param_1 + 0x58,0);
  }
  if (*(char *)(param_1 + 0x50) == '\0') {
    FUN_00185e3c(param_1 + 0x48,0);
  }
  if (*(char *)(param_1 + 0x40) == '\0') {
    FUN_00185e3c(param_1 + 0x38,0);
  }
  if (*(char *)(param_1 + 0x30) == '\0') {
    FUN_001861c8(param_1 + 0x28,0);
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
    FUN_001861c8(param_1 + 0x18,0);
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_00185e3c(param_1 + 8,0);
  }
  FUN_0018a224(param_1,0);
  return;
}


// ===== 001861c8  FUN_001861c8 =====

void FUN_001861c8(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = param_2;
  if (pvVar1 != (void *)0x0) {
    FUN_00186204(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00186204  FUN_00186204 =====

void FUN_00186204(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar4 = (void *)*param_1;
  if (pvVar4 == (void *)0x0) {
    return;
  }
  pvVar3 = (void *)param_1[1];
  pvVar2 = pvVar4;
  if (pvVar3 != pvVar4) {
    do {
      lVar1 = (long)pvVar3 + -0x38;
      pvVar3 = (void *)((long)pvVar3 + -0x40);
      FUN_001855c4(lVar1);
    } while (pvVar4 != pvVar3);
    pvVar2 = (void *)*param_1;
  }
  param_1[1] = pvVar4;
  operator_delete(pvVar2);
  return;
}


// ===== 00186274  FUN_00186274 =====

void FUN_00186274(long *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    piVar1 = (int *)((long)piVar2 + 3);
    if ((*piVar2 == 0xfeff) || (*piVar2 == -0x20000)) {
      piVar1 = piVar2 + 1;
    }
    else {
      if (((short)*piVar2 == -0x101) || ((short)*piVar2 == -2)) {
        *param_1 = (long)((long)piVar2 + 2);
        return;
      }
      if ((int3)*piVar2 != -0x404411) {
        return;
      }
    }
    *param_1 = (long)piVar1;
  }
  return;
}


// ===== 001862f4  FUN_001862f4 =====

void FUN_001862f4(long param_1,undefined4 param_2,long *param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar1 = 2;
    switch(param_2) {
    case 0:
      break;
    default:
      uVar1 = 7;
      break;
    case 2:
      lVar2 = *param_3;
      lVar3 = param_3[2];
      *(undefined4 *)(param_1 + 0x30) = 1;
      *(long *)(param_1 + 0x38) = lVar2 - lVar3;
      return;
    case 3:
    case 0xc:
      uVar1 = 4;
      break;
    case 4:
      uVar1 = 5;
      break;
    case 5:
      uVar1 = 6;
      break;
    case 7:
    case 0xb:
    case 0xd:
      uVar1 = 3;
    }
    lVar2 = *param_3;
    lVar3 = param_3[2];
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    *(long *)(param_1 + 0x38) = lVar2 - lVar3;
    return;
  }
  return;
}


// ===== 00186380  FUN_00186380 =====

void FUN_00186380(long param_1,long *param_2,int *param_3,uint param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  undefined4 uVar9;
  byte *local_80;
  byte *pbStack_78;
  long local_70;
  long *plStack_68;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_70 = param_2[2];
  pbVar1 = (byte *)(*param_2 + 1);
  local_80 = pbVar1;
  pbStack_78 = pbVar1;
  plStack_68 = param_2;
LAB_001863e4:
  do {
    while (bVar3 = *local_80, bVar3 != 0x5c) {
      if (bVar3 == 0x22) {
        local_80 = local_80 + 1;
        pbVar2 = pbStack_78 + 1;
        *pbStack_78 = 0;
        pbStack_78 = pbVar2;
        if (*(int *)(param_1 + 0x30) == 0) {
          pbStack_78._0_4_ = (int)pbVar2;
          if ((param_4 & 1) == 0) {
            iVar8 = 5;
          }
          else {
            iVar8 = 6;
          }
          *(byte **)(param_3 + 2) = pbVar1;
          param_3[6] = iVar8;
          *(undefined2 *)((long)param_3 + 0x16) = 0x405;
          *param_3 = ~(uint)pbVar1 + (int)pbStack_78;
        }
        goto LAB_00186574;
      }
      if (bVar3 < 0x20) {
        lVar7 = (long)local_80 - local_70;
        if (bVar3 == 0) {
          uVar9 = 0xb;
        }
        else {
          uVar9 = 0xc;
        }
        *(undefined4 *)(param_1 + 0x30) = uVar9;
LAB_00186570:
        *(long *)(param_1 + 0x38) = lVar7;
LAB_00186574:
        plStack_68[2] = local_70;
        plStack_68[1] = (long)pbStack_78;
        *plStack_68 = (long)local_80;
        if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      *pbStack_78 = *local_80;
      local_80 = local_80 + 1;
      pbStack_78 = pbStack_78 + 1;
    }
    pbVar2 = local_80 + 1;
    if ((&DAT_0014669f)[*pbVar2] != 0) {
      local_80 = local_80 + 2;
      *pbStack_78 = (&DAT_0014669f)[*pbVar2];
      pbStack_78 = pbStack_78 + 1;
      goto LAB_001863e4;
    }
    lVar7 = (long)local_80 - local_70;
    if (*pbVar2 != 0x75) {
      *(undefined4 *)(param_1 + 0x30) = 10;
      *(long *)(param_1 + 0x38) = lVar7;
      local_80 = local_80 + 1;
      goto LAB_00186574;
    }
    local_80 = local_80 + 2;
    uVar5 = FUN_00186704(param_1,&local_80);
    if (*(int *)(param_1 + 0x30) != 0) goto LAB_00186574;
    uVar6 = uVar5 & 0xffffffff;
    if (((uint)(uVar5 >> 10) & 0x3fffff) == 0x36) {
      pbVar2 = local_80;
      if ((*local_80 == 0x5c) && (pbVar2 = local_80 + 1, local_80[1] == 0x75)) {
        local_80 = local_80 + 2;
        uVar6 = FUN_00186704(param_1,&local_80,lVar7);
        if (*(int *)(param_1 + 0x30) != 0) goto LAB_00186574;
        pbVar2 = local_80;
        if (((uint)(uVar6 >> 10) & 0x3fffff) == 0x37) {
          uVar6 = (ulong)(((int)uVar6 - 0xdc00U | (int)uVar5 * 0x400 + 0xfca00000U) + 0x10000);
          goto LAB_0018648c;
        }
      }
      local_80 = pbVar2;
      *(undefined4 *)(param_1 + 0x30) = 9;
      goto LAB_00186570;
    }
LAB_0018648c:
    FUN_00186788(&local_80,uVar6);
  } while( true );
}


// ===== 001865d4  FUN_001865d4 =====

void FUN_001865d4(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)*param_2;
  if (bVar1 < 0x6e) {
    if (bVar1 == 0x22) {
      FUN_00186380();
      return;
    }
    if (bVar1 == 0x5b) {
      FUN_00186c48();
      return;
    }
    if (bVar1 == 0x66) {
      FUN_00186928();
      return;
    }
  }
  else {
    if (bVar1 == 0x7b) {
      FUN_001869b8();
      return;
    }
    if (bVar1 == 0x74) {
      FUN_001868ac();
      return;
    }
    if (bVar1 == 0x6e) {
      FUN_00186838();
      return;
    }
  }
  FUN_00186e04();
  return;
}


// ===== 00186634  FUN_00186634 =====

void FUN_00186634(long *param_1,long param_2)

{
  ulong __size;
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = param_1[2];
  if (lVar4 == 0) {
    if (*param_1 == 0) {
      pvVar1 = operator_new(1);
      *param_1 = (long)pvVar1;
      param_1[1] = (long)pvVar1;
    }
    uVar3 = param_1[5];
  }
  else {
    uVar3 = (param_1[4] - lVar4) + ((param_1[4] - lVar4) + 1U >> 1);
  }
  __size = (param_1[3] - lVar4) + param_2 * 4;
  if (__size <= uVar3) {
    __size = uVar3;
  }
  pvVar1 = (void *)param_1[2];
  lVar4 = param_1[3];
  if (__size == 0) {
    free(pvVar1);
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = realloc(pvVar1,__size);
  }
  param_1[2] = (long)pvVar2;
  param_1[3] = (long)pvVar2 + (lVar4 - (long)pvVar1);
  param_1[4] = (long)pvVar2 + __size;
  return;
}


// ===== 00186704  FUN_00186704 =====

int FUN_00186704(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  lVar5 = *param_2;
  lVar4 = 0;
  iVar3 = 0;
  do {
    bVar2 = *(byte *)(lVar5 + lVar4);
    if (bVar2 - 0x30 < 10) {
      iVar6 = -0x30;
    }
    else if (bVar2 - 0x41 < 6) {
      iVar6 = -0x37;
    }
    else {
      if (5 < bVar2 - 0x61) {
        *(undefined4 *)(param_1 + 0x30) = 8;
        *(undefined8 *)(param_1 + 0x38) = param_3;
        return 0;
      }
      iVar6 = -0x57;
    }
    lVar1 = lVar5 + lVar4;
    lVar4 = lVar4 + 1;
    iVar3 = (uint)bVar2 + iVar3 * 0x10 + iVar6;
    *param_2 = lVar1 + 1;
  } while ((int)lVar4 != 4);
  return iVar3;
}


// ===== 00186788  FUN_00186788 =====

void FUN_00186788(long param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  
  if (param_2 < 0x80) {
    pbVar1 = *(byte **)(param_1 + 8);
    *(byte **)(param_1 + 8) = pbVar1 + 1;
    *pbVar1 = (byte)param_2;
    return;
  }
  if (param_2 < 0x800) {
    pbVar1 = *(byte **)(param_1 + 8);
    bVar2 = (byte)(param_2 >> 6) | 0xc0;
  }
  else {
    if (param_2 >> 0x10 == 0) {
      pbVar1 = *(byte **)(param_1 + 8);
      bVar2 = (byte)(param_2 >> 0xc) | 0xe0;
    }
    else {
      pbVar1 = *(byte **)(param_1 + 8);
      *(byte **)(param_1 + 8) = pbVar1 + 1;
      *pbVar1 = (byte)(param_2 >> 0x12) | 0xf0;
      pbVar1 = *(byte **)(param_1 + 8);
      bVar2 = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
    }
    *(byte **)(param_1 + 8) = pbVar1 + 1;
    *pbVar1 = bVar2;
    pbVar1 = *(byte **)(param_1 + 8);
    bVar2 = (byte)(param_2 >> 6) & 0x3f | 0x80;
  }
  *(byte **)(param_1 + 8) = pbVar1 + 1;
  *pbVar1 = bVar2;
  pbVar1 = *(byte **)(param_1 + 8);
  *(byte **)(param_1 + 8) = pbVar1 + 1;
  *pbVar1 = (byte)param_2 & 0x3f | 0x80;
  return;
}


// ===== 00186838  FUN_00186838 =====

void FUN_00186838(long param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  lVar1 = lVar2 + 1;
  *param_2 = lVar1;
  if (*(char *)(lVar2 + 1) == 'u') {
    lVar1 = lVar2 + 2;
    *param_2 = lVar1;
    if (*(char *)(lVar2 + 2) == 'l') {
      lVar1 = lVar2 + 3;
      *param_2 = lVar1;
      if (*(char *)(lVar2 + 3) == 'l') {
        *param_2 = lVar2 + 4;
        *(undefined4 *)(param_3 + 3) = 2;
        param_3[1] = 0;
        param_3[2] = 0;
        *param_3 = 0;
        return;
      }
    }
  }
  lVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0x30) = 3;
  *(long *)(param_1 + 0x38) = lVar1 - lVar2;
  return;
}


// ===== 001868ac  FUN_001868ac =====

void FUN_001868ac(long param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  lVar1 = lVar2 + 1;
  *param_2 = lVar1;
  if (*(char *)(lVar2 + 1) == 'r') {
    lVar1 = lVar2 + 2;
    *param_2 = lVar1;
    if (*(char *)(lVar2 + 2) == 'u') {
      lVar1 = lVar2 + 3;
      *param_2 = lVar1;
      if (*(char *)(lVar2 + 3) == 'e') {
        *param_2 = lVar2 + 4;
        *(undefined4 *)(param_3 + 3) = 3;
        param_3[1] = 0;
        param_3[2] = 0;
        *param_3 = 0;
        *(undefined2 *)((long)param_3 + 0x16) = 10;
        return;
      }
    }
  }
  lVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0x30) = 3;
  *(long *)(param_1 + 0x38) = lVar1 - lVar2;
  return;
}


// ===== 00186928  FUN_00186928 =====

void FUN_00186928(long param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  lVar1 = lVar2 + 1;
  *param_2 = lVar1;
  if (*(char *)(lVar2 + 1) == 'a') {
    lVar1 = lVar2 + 2;
    *param_2 = lVar1;
    if (*(char *)(lVar2 + 2) == 'l') {
      lVar1 = lVar2 + 3;
      *param_2 = lVar1;
      if (*(char *)(lVar2 + 3) == 's') {
        lVar1 = lVar2 + 4;
        *param_2 = lVar1;
        if (*(char *)(lVar2 + 4) == 'e') {
          *param_2 = lVar2 + 5;
          *(undefined4 *)(param_3 + 3) = 3;
          param_3[1] = 0;
          param_3[2] = 0;
          *param_3 = 0;
          *(undefined2 *)((long)param_3 + 0x16) = 9;
          return;
        }
      }
    }
  }
  lVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0x30) = 3;
  *(long *)(param_1 + 0x38) = lVar1 - lVar2;
  return;
}


// ===== 001869b8  FUN_001869b8 =====

void FUN_001869b8(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  undefined4 uVar7;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  plVar1 = param_2 + 1;
  *param_2 = *param_2 + 1;
  *(undefined4 *)(param_3 + 0x18) = 7;
  pbVar5 = (byte *)*param_2;
  while ((*pbVar5 < 0x21 && ((1L << ((ulong)*pbVar5 & 0x3f) & 0x100002600U) != 0))) {
    pbVar5 = pbVar5 + 1;
  }
  *param_2 = (long)pbVar5;
  param_2[2] = param_2[2];
  *plVar1 = param_2[1];
  if (*(int *)(param_1 + 0x30) == 0) {
    bVar2 = *pbVar5;
    if (bVar2 == 0x7d) {
LAB_00186a5c:
      *param_2 = (long)(pbVar5 + 1);
      *(undefined4 *)(param_3 + 0x18) = 8;
    }
    else {
      while (bVar2 == 0x22) {
        FUN_00186380(param_1,param_2,param_3,1);
        if (*(int *)(param_1 + 0x30) != 0) goto LAB_00186a6c;
        pbVar5 = (byte *)*param_2;
        while ((*pbVar5 < 0x21 && ((1L << ((ulong)*pbVar5 & 0x3f) & 0x100002600U) != 0))) {
          pbVar5 = pbVar5 + 1;
        }
        *param_2 = (long)pbVar5;
        param_2[2] = param_2[2];
        *plVar1 = *plVar1;
        if (*(int *)(param_1 + 0x30) != 0) goto LAB_00186a6c;
        if (*pbVar5 != 0x3a) {
          lVar6 = param_2[2];
          uVar7 = 5;
          goto LAB_00186c28;
        }
        pbVar5 = pbVar5 + 1;
        *param_2 = (long)pbVar5;
        while ((*pbVar5 < 0x21 && ((1L << ((ulong)*pbVar5 & 0x3f) & 0x100002600U) != 0))) {
          pbVar5 = pbVar5 + 1;
        }
        *param_2 = (long)pbVar5;
        param_2[2] = param_2[2];
        *plVar1 = *plVar1;
        if ((*(int *)(param_1 + 0x30) != 0) ||
           (FUN_001865d4(param_1,param_2,param_3), *(int *)(param_1 + 0x30) != 0))
        goto LAB_00186a6c;
        pbVar5 = (byte *)*param_2;
        while ((*pbVar5 < 0x21 && ((1L << ((ulong)*pbVar5 & 0x3f) & 0x100002600U) != 0))) {
          pbVar5 = pbVar5 + 1;
        }
        *param_2 = (long)pbVar5;
        param_2[2] = param_2[2];
        *plVar1 = *plVar1;
        if (*(int *)(param_1 + 0x30) != 0) goto LAB_00186a6c;
        if (*pbVar5 != 0x2c) {
          if (*pbVar5 == 0x7d) goto LAB_00186a5c;
          lVar6 = param_2[2];
          uVar7 = 6;
          goto LAB_00186c28;
        }
        pbVar5 = pbVar5 + 1;
        *param_2 = (long)pbVar5;
        while ((*pbVar5 < 0x21 && ((1L << ((ulong)*pbVar5 & 0x3f) & 0x100002600U) != 0))) {
          pbVar5 = pbVar5 + 1;
        }
        *param_2 = (long)pbVar5;
        param_2[2] = param_2[2];
        *plVar1 = *plVar1;
        if (*(int *)(param_1 + 0x30) != 0) goto LAB_00186a6c;
        bVar2 = *pbVar5;
      }
      lVar6 = param_2[2];
      uVar7 = 4;
LAB_00186c28:
      *(undefined4 *)(param_1 + 0x30) = uVar7;
      *(long *)(param_1 + 0x38) = (long)pbVar5 - lVar6;
    }
  }
LAB_00186a6c:
  if (*(long *)(lVar3 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00186c48  FUN_00186c48 =====

void FUN_00186c48(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  plVar1 = param_2 + 1;
  *param_2 = *param_2 + 1;
  *(undefined4 *)(param_3 + 0x18) = 9;
  pbVar4 = (byte *)*param_2;
  while ((*pbVar4 < 0x21 && ((1L << ((ulong)*pbVar4 & 0x3f) & 0x100002600U) != 0))) {
    pbVar4 = pbVar4 + 1;
  }
  *param_2 = (long)pbVar4;
  param_2[2] = param_2[2];
  *plVar1 = param_2[1];
  if (*(int *)(param_1 + 0x30) == 0) {
    if (*pbVar4 == 0x5d) {
LAB_00186cec:
      *param_2 = (long)(pbVar4 + 1);
      *(undefined4 *)(param_3 + 0x18) = 10;
    }
    else {
      do {
        FUN_001865d4(param_1,param_2,param_3);
        if (*(int *)(param_1 + 0x30) != 0) break;
        pbVar4 = (byte *)*param_2;
        while ((*pbVar4 < 0x21 && ((1L << ((ulong)*pbVar4 & 0x3f) & 0x100002600U) != 0))) {
          pbVar4 = pbVar4 + 1;
        }
        *param_2 = (long)pbVar4;
        param_2[2] = param_2[2];
        *plVar1 = *plVar1;
        if (*(int *)(param_1 + 0x30) != 0) break;
        if (*pbVar4 != 0x2c) {
          if (*pbVar4 == 0x5d) goto LAB_00186cec;
          lVar5 = param_2[2];
          *(undefined4 *)(param_1 + 0x30) = 7;
          *(long *)(param_1 + 0x38) = (long)pbVar4 - lVar5;
          break;
        }
        pbVar4 = pbVar4 + 1;
        *param_2 = (long)pbVar4;
        while ((*pbVar4 < 0x21 && ((1L << ((ulong)*pbVar4 & 0x3f) & 0x100002600U) != 0))) {
          pbVar4 = pbVar4 + 1;
        }
        *param_2 = (long)pbVar4;
        param_2[2] = param_2[2];
        *plVar1 = *plVar1;
      } while (*(int *)(param_1 + 0x30) == 0);
    }
  }
  if (*(long *)(lVar2 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00186e04  FUN_00186e04 =====

void FUN_00186e04(long param_1,long *param_2,double *param_3)

{
  uint uVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  long lVar12;
  ushort uVar13;
  long lVar14;
  undefined4 uVar15;
  byte *pbVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  double dVar20;
  byte *pbVar21;
  double dVar22;
  
  pbVar2 = (byte *)*param_2;
  lVar3 = param_2[1];
  lVar12 = param_2[2];
  bVar4 = *pbVar2;
  pbVar21 = pbVar2 + 1;
  if (bVar4 != 0x2d) {
    pbVar21 = pbVar2;
  }
  uVar17 = *pbVar21 - 0x30;
  if (uVar17 == 0) {
    dVar20 = 0.0;
    uVar18 = 0;
    bVar7 = false;
    bVar8 = false;
    pbVar16 = pbVar21 + 1;
    dVar22 = 0.0;
    goto LAB_0018708c;
  }
  if (*pbVar21 - 0x31 < 9) {
    pbVar16 = pbVar21 + 1;
    uVar19 = (uint)*pbVar16;
    bVar5 = *pbVar16 - 0x30;
    if (bVar4 == 0x2d) {
      if (bVar5 < 10) {
        uVar18 = 0;
LAB_00186e70:
        if (uVar17 < 0xccccccc) {
LAB_00186e78:
          pbVar16 = pbVar21 + uVar18 + 2;
          uVar17 = (uVar17 * 10 + uVar19) - 0x30;
          uVar19 = (uint)*pbVar16;
          uVar18 = uVar18 + 1;
          if (9 < uVar19 - 0x30) goto LAB_00186fbc;
          goto LAB_00186e70;
        }
        if (uVar17 != 0xccccccc) goto LAB_00186f34;
        if (uVar19 < 0x39) goto LAB_00186e78;
        uVar17 = 0xccccccc;
LAB_00186f34:
        uVar19 = (uint)*pbVar16;
        dVar20 = (double)(ulong)uVar17;
        bVar5 = *pbVar16 - 0x30;
        if (bVar4 == 0x2d) {
          if (9 < bVar5) {
LAB_001873e0:
            dVar22 = 0.0;
            bVar7 = false;
            goto LAB_00187088;
          }
          pbVar21 = pbVar16 + 1;
          do {
            pbVar11 = pbVar21;
            if ((0xccccccccccccccb < (ulong)dVar20) &&
               ((dVar20 != 5.1488004017107686e-247 || (0x38 < uVar19)))) goto LAB_00187040;
            uVar1 = uVar19 - 0x30;
            pbVar21 = pbVar11 + 1;
            uVar19 = (uint)*pbVar11;
            dVar20 = (double)((ulong)uVar1 + (long)dVar20 * 10);
            uVar18 = (ulong)((int)uVar18 + 1);
            pbVar16 = pbVar11;
          } while (*pbVar11 - 0x30 < 10);
        }
        else {
          if (9 < bVar5) goto LAB_001873e0;
          pbVar21 = pbVar16 + 1;
          do {
            pbVar11 = pbVar21;
            if ((0x1999999999999998 < (ulong)dVar20) &&
               ((dVar20 != 2.353437368264535e-185 || (0x35 < uVar19)))) goto LAB_00187040;
            uVar1 = uVar19 - 0x30;
            pbVar21 = pbVar11 + 1;
            uVar19 = (uint)*pbVar11;
            dVar20 = (double)((ulong)uVar1 + (long)dVar20 * 10);
            uVar18 = (ulong)((int)uVar18 + 1);
            pbVar16 = pbVar11;
          } while (uVar19 - 0x30 < 10);
        }
        dVar22 = 0.0;
        bVar7 = false;
        pbVar16 = pbVar21 + -1;
        goto LAB_00187088;
      }
    }
    else if (bVar5 < 10) {
      uVar18 = 0;
      do {
        if (0x19999998 < uVar17) {
          if (uVar17 != 0x19999999) goto LAB_00186f34;
          if (0x35 < uVar19) {
            uVar17 = 0x19999999;
            goto LAB_00186f34;
          }
        }
        pbVar16 = pbVar21 + uVar18 + 2;
        uVar17 = (uVar17 * 10 + uVar19) - 0x30;
        uVar19 = (uint)*pbVar16;
        uVar18 = uVar18 + 1;
      } while (uVar19 - 0x30 < 10);
LAB_00186fbc:
      dVar22 = 0.0;
      dVar20 = 0.0;
      bVar7 = false;
      bVar8 = false;
      pbVar16 = pbVar21 + uVar18 + 1;
      goto LAB_0018708c;
    }
    dVar22 = 0.0;
    dVar20 = 0.0;
    uVar18 = 0;
    bVar7 = false;
    bVar8 = false;
    goto LAB_0018708c;
  }
  lVar14 = (long)pbVar21 - lVar12;
  uVar15 = 3;
LAB_00187398:
  *(undefined4 *)(param_1 + 0x30) = uVar15;
  *(long *)(param_1 + 0x38) = lVar14;
  pbVar16 = pbVar21;
  goto LAB_00187358;
LAB_00187040:
  bVar5 = *pbVar16;
  dVar22 = (double)(ulong)dVar20;
  while (uVar19 = (uint)bVar5, uVar19 - 0x30 < 10) {
    pbVar16 = pbVar16 + 1;
    bVar5 = *pbVar16;
    dVar22 = (double)NEON_fmadd(dVar22,0x4024000000000000,(double)(int)(uVar19 - 0x30));
  }
  bVar7 = true;
LAB_00187088:
  bVar8 = true;
LAB_0018708c:
  uVar19 = (uint)*pbVar16;
  if (*pbVar16 == 0x2e) {
    pbVar21 = pbVar16 + 1;
    bVar5 = *pbVar21;
    if (9 < bVar5 - 0x30) {
      lVar14 = (long)pbVar21 - lVar12;
      uVar15 = 0xe;
      goto LAB_00187398;
    }
    if (bVar7) {
      iVar10 = 0;
    }
    else {
      if (!bVar8) {
        dVar20 = (double)(ulong)uVar17;
      }
      iVar10 = 0;
      if (((ulong)dVar20 >> 0x35 == 0) && (bVar5 < 0x3a)) {
        pbVar16 = pbVar16 + 2;
        iVar9 = -1;
        do {
          iVar10 = iVar9;
          pbVar21 = pbVar16;
          uVar19 = (uint)bVar5;
          bVar5 = *pbVar21;
          dVar20 = (double)((ulong)(uVar19 - 0x30) + (long)dVar20 * 10);
          uVar19 = (uint)uVar18;
          if (dVar20 != 0.0) {
            uVar19 = uVar19 + 1;
          }
          uVar18 = (ulong)uVar19;
        } while (((0x2f < bVar5) && ((ulong)dVar20 >> 0x35 == 0)) &&
                (pbVar16 = pbVar21 + 1, iVar9 = iVar10 + -1, bVar5 < 0x3a));
      }
      dVar22 = (double)(ulong)dVar20;
    }
    bVar5 = *pbVar21;
    pbVar16 = pbVar21;
    while (uVar19 = (uint)bVar5, uVar19 - 0x30 < 10) {
      pbVar16 = pbVar16 + 1;
      if ((int)uVar18 < 0x11) {
        dVar22 = (double)NEON_fmadd(dVar22,0x4024000000000000,(double)(int)(uVar19 - 0x30));
        iVar10 = iVar10 + -1;
        if (dVar22 != 0.0 && dVar22 < 0.0 == NAN(dVar22)) {
          uVar18 = (ulong)((int)uVar18 + 1);
        }
      }
      bVar5 = *pbVar16;
    }
    bVar7 = true;
  }
  else {
    iVar10 = 0;
  }
  if ((uVar19 == 0x65) || (uVar19 == 0x45)) {
    if (!bVar8) {
      dVar20 = (double)(ulong)uVar17;
    }
    bVar5 = pbVar16[1];
    if (!bVar7) {
      dVar22 = (double)(ulong)dVar20;
    }
    lVar14 = 1;
    if (bVar5 == 0x2b || bVar5 == 0x2d) {
      lVar14 = 2;
    }
    pbVar21 = pbVar16 + 2;
    if (bVar5 != 0x2b && bVar5 != 0x2d) {
      pbVar21 = pbVar16 + 1;
    }
    uVar17 = pbVar16[lVar14] - 0x30;
    if (9 < uVar17) {
      lVar14 = (long)pbVar21 - lVar12;
      uVar15 = 0xf;
      goto LAB_00187398;
    }
    pbVar16 = pbVar21 + 1;
    if (bVar5 == 0x2d) {
      bVar6 = *pbVar16;
      if (bVar6 - 0x30 < 10) {
        do {
          uVar17 = (uVar17 * 10 + (uint)bVar6) - 0x30;
          pbVar16 = pbVar16 + 1;
          if ((iVar10 + 0x7ffffff7) / 10 < (int)uVar17) {
            bVar6 = *pbVar16;
            while (bVar6 - 0x30 < 10) {
              pbVar16 = pbVar16 + 1;
              bVar6 = *pbVar16;
            }
          }
          bVar6 = *pbVar16;
        } while (bVar6 - 0x30 < 10);
      }
LAB_001872ac:
      uVar19 = -uVar17;
      if (bVar5 != 0x2d) {
        uVar19 = uVar17;
      }
      goto LAB_001872b4;
    }
    do {
      if (9 < *pbVar16 - 0x30) goto LAB_001872ac;
      uVar17 = ((uint)*pbVar16 + uVar17 * 10) - 0x30;
      pbVar16 = pbVar16 + 1;
    } while ((int)uVar17 <= 0x134 - iVar10);
LAB_00187324:
    *(undefined4 *)(param_1 + 0x30) = 0xd;
    *(long *)(param_1 + 0x38) = (long)pbVar2 - lVar12;
  }
  else {
    if (!bVar7) {
      if (bVar8) {
        if (bVar4 != 0x2d) {
          *(undefined4 *)(param_3 + 3) = 4;
          uVar13 = 0x196;
          if ((long)dVar20 < 0) {
            uVar13 = 0x116;
          }
          param_3[1] = 0.0;
          param_3[2] = 0.0;
          *param_3 = dVar20;
          *(ushort *)((long)param_3 + 0x16) = uVar13;
          if (((ulong)dVar20 >> 0x20 != 0) ||
             (*(ushort *)((long)param_3 + 0x16) = uVar13 | 0x40, (ulong)dVar20 >> 0x1f != 0))
          goto LAB_00187358;
          uVar13 = uVar13 | 0x60;
        }
        else {
          dVar22 = (double)-(long)dVar20;
          param_3[1] = 0.0;
          param_3[2] = 0.0;
          *(undefined4 *)(param_3 + 3) = 4;
          *param_3 = dVar22;
          *(undefined2 *)((long)param_3 + 0x16) = 0x96;
          if ((long)dVar20 < 1) {
            uVar13 = 0x1d6;
            if ((ulong)dVar22 >> 0x20 != 0) {
              uVar13 = 0x196;
            }
            *(ushort *)((long)param_3 + 0x16) = uVar13;
            if ((ulong)dVar22 >> 0x1f != 0) goto LAB_00187358;
            uVar13 = uVar13 | 0x20;
          }
          else {
            if ((long)dVar22 < -0x80000000) goto LAB_00187358;
            uVar13 = 0xb6;
          }
        }
      }
      else if (bVar4 != 0x2d) {
        *(undefined4 *)(param_3 + 3) = 4;
        uVar13 = 0x1f6;
        if ((int)uVar17 < 0) {
          uVar13 = 0x1d6;
        }
        param_3[1] = 0.0;
        param_3[2] = 0.0;
        *param_3 = (double)(ulong)uVar17;
      }
      else {
        *(undefined4 *)(param_3 + 3) = 4;
        param_3[1] = 0.0;
        param_3[2] = 0.0;
        *param_3 = (double)(long)(int)-uVar17;
        uVar13 = 0x1f6;
        if (0 < (int)uVar17) {
          uVar13 = 0xb6;
        }
      }
      *(ushort *)((long)param_3 + 0x16) = uVar13;
      goto LAB_00187358;
    }
    uVar19 = 0;
LAB_001872b4:
    uVar19 = uVar19 + iVar10;
    if (uVar19 == 0xfffffecb || (int)(uVar19 + 0x135) < 0 != SCARRY4(uVar19,0x135)) {
      dVar20 = 0.0;
      if ((int)(uVar19 + 0x268) < 0 == SCARRY4(uVar19,0x268)) {
        dVar20 = *(double *)("reinterpret_cast" + (long)(int)uVar19 * -8 + 0x10) * DAT_00146370;
LAB_00187310:
        dVar20 = dVar22 / dVar20;
        goto LAB_00187314;
      }
    }
    else {
      if ((int)uVar19 < 0) {
        dVar20 = *(double *)(&DAT_001467a0 + (long)(int)uVar19 * -8);
        goto LAB_00187310;
      }
      dVar20 = *(double *)(&DAT_001467a0 + (ulong)uVar19 * 8) * dVar22;
LAB_00187314:
      if (dVar20 != 1.79769313486232e+308 && dVar20 < 1.79769313486232e+308 == NAN(dVar20))
      goto LAB_00187324;
    }
    dVar22 = -dVar20;
    if (bVar4 != 0x2d) {
      dVar22 = dVar20;
    }
    param_3[1] = 0.0;
    param_3[2] = 0.0;
    *(undefined4 *)(param_3 + 3) = 4;
    *param_3 = dVar22;
    *(undefined2 *)((long)param_3 + 0x16) = 0x216;
  }
LAB_00187358:
  *param_2 = (long)pbVar16;
  param_2[1] = lVar3;
  param_2[2] = lVar12;
  return;
}


// ===== 001874f4  FUN_001874f4 =====

long * FUN_001874f4(long *param_1,byte *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar4 = *(ulong *)(param_2 + 8);
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
    uVar4 = (ulong)(*param_2 >> 1);
  }
  uVar4 = FUN_0018763c(auStack_70,pbVar1,uVar4);
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar11 = NEON_cnt(uVar7,1);
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar8 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & uVar4;
    }
    else {
      uVar9 = uVar4;
      if (uVar7 <= uVar4) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar4 / uVar7;
        }
        uVar9 = uVar4 - uVar9 * uVar7;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar9 * 8);
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) {
        do {
          uVar6 = plVar5[1];
          if (uVar6 == uVar4) {
            uVar6 = FUN_00187acc(param_1 + 4,plVar5 + 2,param_2);
            if ((uVar6 & 1) != 0) break;
          }
          else {
            if (uVar8 < 2) {
              uVar6 = uVar6 & uVar7 - 1;
            }
            else if (uVar7 <= uVar6) {
              uVar2 = 0;
              if (uVar7 != 0) {
                uVar2 = uVar6 / uVar7;
              }
              uVar6 = uVar6 - uVar2 * uVar7;
            }
            if (uVar6 != uVar9) goto LAB_00187600;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      goto LAB_00187604;
    }
  }
LAB_00187600:
  plVar5 = (long *)0x0;
LAB_00187604:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018763c  FUN_0018763c =====

ulong FUN_0018763c(undefined8 param_1,ulong *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  if (0x20 < param_3) {
    if (param_3 < 0x41) {
      lVar14 = *(long *)((long)param_2 + (param_3 - 0x10));
      uVar4 = param_2[3];
      uVar10 = *param_2 + (lVar14 + param_3) * -0x3c5a37a36834ced9;
      uVar6 = uVar10 + param_2[1];
      uVar7 = *(long *)((long)param_2 + (param_3 - 0x20)) + param_2[2];
      uVar9 = uVar6 + param_2[2];
      lVar13 = *(long *)((long)param_2 + (param_3 - 8)) + uVar4;
      uVar11 = lVar13 + uVar7;
      uVar8 = *(long *)((long)param_2 + (param_3 - 0x18)) + uVar7;
      uVar12 = uVar8 + lVar14;
      lVar14 = (uVar6 >> 7 | uVar6 << 0x39) + (uVar10 >> 0x25 | uVar10 * 0x8000000) +
               (uVar10 + uVar4 >> 0x34 | (uVar10 + uVar4) * 0x1000) +
               (uVar9 >> 0x1f | uVar9 << 0x21);
      uVar6 = (uVar12 + lVar13 + lVar14) * -0x3c5a37a36834ced9 +
              (uVar9 + uVar4 + (uVar7 >> 0x25 | uVar7 * 0x8000000) + (uVar8 >> 7 | uVar8 << 0x39) +
               (uVar11 >> 0x34 | uVar11 * 0x1000) + (uVar12 >> 0x1f | uVar12 << 0x21)) *
              -0x651e95c4d06fbfb1;
      uVar6 = lVar14 + (uVar6 ^ uVar6 >> 0x2f) * -0x3c5a37a36834ced9;
      return (uVar6 ^ uVar6 >> 0x2f) * -0x651e95c4d06fbfb1;
    }
    lVar14 = *(long *)((long)param_2 + (param_3 - 0x30));
    lVar2 = *(long *)((long)param_2 + (param_3 - 0x28));
    lVar3 = *(long *)((long)param_2 + (param_3 - 0x38));
    uVar12 = *(ulong *)((long)param_2 + (param_3 - 0x18));
    lVar1 = *(long *)((long)param_2 + (param_3 - 0x10));
    lVar15 = *(long *)((long)param_2 + (param_3 - 8));
    lVar13 = *(long *)((long)param_2 + (param_3 - 0x40)) + param_3;
    uVar4 = (uVar12 ^ lVar14 + param_3) * -0x622015f714c7d297;
    uVar6 = lVar13 + lVar3 + lVar14;
    uVar7 = lVar3 + lVar1;
    lVar14 = uVar7 + *(long *)((long)param_2 + (param_3 - 0x20)) + -0x4b6d499041670d8d;
    uVar9 = lVar14 + uVar12 + lVar1;
    uVar11 = lVar14 + lVar2 + lVar15;
    puVar5 = param_2 + 4;
    uVar10 = *param_2;
    uVar8 = uVar9 + lVar15;
    uVar9 = (uVar9 >> 0x2c | uVar9 * 0x100000) + lVar14 + (uVar11 >> 0x15 | uVar11 << 0x2b);
    uVar11 = uVar6 + lVar2;
    lVar14 = uVar10 + lVar2 * -0x4b6d499041670d8d;
    uVar12 = (uVar4 ^ uVar12 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar4 = (uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297;
    uVar12 = lVar2 + lVar13 + uVar4;
    uVar6 = (uVar6 >> 0x2c | uVar6 * 0x100000) + lVar13 + (uVar12 >> 0x15 | uVar12 << 0x2b);
    lVar13 = -(param_3 - 1 & 0xffffffffffffffc0);
    while( true ) {
      lVar13 = lVar13 + 0x40;
      lVar15 = uVar10 + uVar6 * -0x4b6d499041670d8d;
      lVar1 = lVar14 + uVar11 + uVar7;
      lVar14 = (uVar4 + uVar8 >> 0x21 | (uVar4 + uVar8) * 0x80000000) * -0x4b6d499041670d8d;
      lVar2 = lVar14 + uVar9 + *puVar5;
      uVar6 = uVar7 + uVar6 + puVar5[2];
      uVar7 = puVar5[1] + uVar11 + (uVar6 >> 0x2a | uVar6 * 0x400000) * -0x4b6d499041670d8d;
      lVar3 = lVar15 + uVar8;
      uVar12 = lVar2 + puVar5[1] + puVar5[2];
      uVar6 = lVar1 + puVar5[-3];
      uVar10 = lVar15 + puVar5[-3] + puVar5[-2];
      uVar11 = uVar10 + puVar5[-1];
      uVar4 = (uVar6 >> 0x25 | uVar6 * 0x8000000) * -0x4b6d499041670d8d ^ uVar9;
      uVar8 = uVar12 + puVar5[3];
      uVar6 = lVar3 + puVar5[-1] + uVar4;
      uVar9 = uVar7 + puVar5[-2] + lVar2 + puVar5[3];
      uVar6 = (uVar10 >> 0x2c | uVar10 * 0x100000) + lVar15 + (uVar6 >> 0x15 | uVar6 << 0x2b);
      uVar9 = (uVar12 >> 0x2c | uVar12 * 0x100000) + lVar2 + (uVar9 >> 0x15 | uVar9 << 0x2b);
      if (lVar13 == 0) break;
      uVar10 = puVar5[4];
      puVar5 = puVar5 + 8;
    }
    uVar12 = (uVar8 ^ uVar11) * -0x622015f714c7d297;
    uVar11 = (uVar9 ^ uVar6) * -0x622015f714c7d297;
    uVar6 = (uVar12 ^ uVar8 ^ uVar12 >> 0x2f) * -0x622015f714c7d297;
    uVar9 = (uVar11 ^ uVar9 ^ uVar11 >> 0x2f) * -0x622015f714c7d297;
    uVar9 = lVar14 + (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
    uVar6 = (uVar9 ^ uVar4 + (uVar7 ^ uVar7 >> 0x2f) * -0x4b6d499041670d8d +
                     (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297) * -0x622015f714c7d297;
    uVar6 = (uVar6 ^ uVar9 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    return (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  }
  if (0x10 < param_3) {
    lVar13 = *(long *)((long)param_2 + (param_3 - 8));
    uVar6 = param_2[1] ^ 0xc949d7c7509e6557;
    uVar7 = *param_2 * -0x4b6d499041670d8d - param_2[1];
    uVar6 = *param_2 * -0x4b6d499041670d8d + param_3 + lVar13 * 0x651e95c4d06fbfb1 +
            (uVar6 >> 0x14 | uVar6 << 0x2c);
    uVar7 = (uVar6 ^ (uVar7 >> 0x2b | uVar7 * 0x200000) +
                     *(long *)((long)param_2 + (param_3 - 0x10)) * -0x3c5a37a36834ced9 +
                     (lVar13 * -0x41befec400000000 | (ulong)(lVar13 * -0x651e95c4d06fbfb1) >> 0x1e))
            * -0x622015f714c7d297;
    uVar6 = (uVar7 ^ uVar6 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    return (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  }
  if (8 < param_3) {
    uVar7 = *(ulong *)((long)param_2 + (param_3 - 8));
    uVar6 = uVar7 + param_3;
    uVar9 = uVar6 << ((ulong)(uint)-(int)param_3 & 0x3f) | uVar6 >> (param_3 & 0x3f);
    uVar6 = (uVar9 ^ *param_2) * -0x622015f714c7d297;
    uVar6 = (uVar6 ^ uVar9 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    return (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297 ^ uVar7;
  }
  if (3 < param_3) {
    uVar6 = (ulong)*(uint *)((long)param_2 + (param_3 - 4));
    uVar7 = ((uint)((int)*param_2 << 3) + param_3 ^ uVar6) * -0x622015f714c7d297;
    uVar6 = (uVar7 ^ uVar6 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    return (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  }
  uVar6 = 0x9ae16a3b2f90404f;
  if (param_3 != 0) {
    uVar6 = (param_3 + (ulong)*(byte *)((long)param_2 + (param_3 - 1)) * 4) * -0x36b62838af619aa9 ^
            (ulong)CONCAT11(*(undefined1 *)((long)param_2 + (param_3 >> 1)),(char)*param_2) *
            -0x651e95c4d06fbfb1;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x651e95c4d06fbfb1;
  }
  return uVar6;
}


// ===== 00187acc  FUN_00187acc =====

bool FUN_00187acc(undefined8 param_1,byte *param_2,byte *param_3)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  byte *__s1;
  byte *__s2;
  
  bVar2 = *param_2;
  bVar3 = *param_3;
  uVar6 = (ulong)(bVar2 >> 1);
  __n = uVar6;
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_3 + 8);
  }
  if (__n == sVar1) {
    __s1 = *(byte **)(param_2 + 0x10);
    __s2 = *(byte **)(param_3 + 0x10);
    if ((bVar2 & 1) == 0) {
      __s1 = param_2 + 1;
    }
    if ((bVar3 & 1) == 0) {
      __s2 = param_3 + 1;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        param_2 = param_2 + 1;
        do {
          if (*param_2 != *__s2) goto LAB_00187b50;
          uVar6 = uVar6 - 1;
          param_2 = param_2 + 1;
          __s2 = __s2 + 1;
        } while (uVar6 != 0);
      }
    }
    else if (__n != 0) {
      iVar5 = memcmp(__s1,__s2,__n);
      return iVar5 == 0;
    }
    bVar4 = true;
  }
  else {
LAB_00187b50:
    bVar4 = false;
  }
  return bVar4;
}


// ===== 00187b7c  FUN_00187b7c =====

void FUN_00187b7c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  __shared_weak_count *p_Var2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  __shared_weak_count *this;
  undefined8 *puVar10;
  ulong uVar11;
  
  puVar10 = (undefined8 *)*param_1;
  uVar11 = (long)param_3 - (long)param_2 >> 4;
  if ((ulong)(param_1[2] - (long)puVar10 >> 4) < uVar11) {
    FUN_00187d6c(param_1);
    if (uVar11 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar7 = param_1[2] - *param_1 >> 3;
    if (uVar11 <= uVar7) {
      uVar11 = uVar7;
    }
    if (0x7fffffffffffffe < (ulong)(param_1[2] - *param_1 >> 4)) {
      uVar11 = 0xfffffffffffffff;
    }
    FUN_00187dd4(param_1,uVar11);
    puVar10 = (undefined8 *)param_1[1];
    if (param_2 != param_3) {
      do {
        *puVar10 = *param_2;
        lVar8 = param_2[1];
        puVar10[1] = lVar8;
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
        param_2 = param_2 + 2;
        puVar10 = puVar10 + 2;
      } while (param_2 != param_3);
    }
  }
  else {
    puVar9 = (undefined8 *)((long)param_2 + (param_1[1] - (long)puVar10));
    uVar7 = param_1[1] - (long)puVar10 >> 4;
    puVar3 = puVar9;
    if (uVar11 <= uVar7) {
      puVar3 = param_3;
    }
    if (puVar3 != param_2) {
      do {
        uVar4 = *param_2;
        lVar8 = param_2[1];
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
        this = (__shared_weak_count *)puVar10[1];
        *puVar10 = uVar4;
        puVar10[1] = lVar8;
        if (this != (__shared_weak_count *)0x0) {
          p_Var2 = this + 8;
          do {
            lVar8 = *(long *)p_Var2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
            if (bVar6) {
              *(long *)p_Var2 = lVar8 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*(long *)this + 0x10))(this);
            std::__ndk1::__shared_weak_count::__release_weak(this);
          }
        }
        param_2 = param_2 + 2;
        puVar10 = puVar10 + 2;
      } while (param_2 != puVar3);
    }
    if (uVar11 <= uVar7) {
      puVar9 = (undefined8 *)param_1[1];
      while (puVar9 != puVar10) {
        puVar9 = puVar9 + -2;
        FUN_0017e0b0(puVar9);
      }
      param_1[1] = (long)puVar10;
      return;
    }
    puVar10 = (undefined8 *)param_1[1];
    while (puVar3 != param_3) {
      *puVar10 = *puVar9;
      lVar8 = puVar9[1];
      puVar10[1] = lVar8;
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
      puVar10 = puVar10 + 2;
      puVar9 = puVar9 + 2;
      puVar3 = puVar9;
    }
  }
  param_1[1] = (long)puVar10;
  return;
}


// ===== 00187d6c  FUN_00187d6c =====

void FUN_00187d6c(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[1];
    pvVar1 = pvVar3;
    if (pvVar2 != pvVar3) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0x10);
        FUN_0017e0b0(pvVar2);
      } while (pvVar3 != pvVar2);
      pvVar1 = (void *)*param_1;
    }
    param_1[1] = pvVar3;
    operator_delete(pvVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// ===== 00187dd4  FUN_00187dd4 =====

void FUN_00187dd4(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  
  if (param_2 >> 0x3c == 0) {
    pvVar1 = operator_new(param_2 << 4);
    *param_1 = pvVar1;
    param_1[1] = pvVar1;
    param_1[2] = (void *)((long)pvVar1 + param_2 * 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__vector_base_common<true>::__throw_length_error();
}


// ===== 00187e18  FUN_00187e18 =====

void FUN_00187e18(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00209118;
  FUN_00185ee8(param_1 + 0xa8);
  FUN_00187f40(param_1 + 0x80);
  FUN_00181518(param_1 + 0x70);
  if (((byte)param_1[0x38] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x48));
  }
  if (((byte)param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  std::__ndk1::__shared_count::~__shared_count(param_1);
  return;
}


// ===== 00187e78  FUN_00187e78 =====

void FUN_00187e78(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00209118;
  FUN_00185ee8(param_1 + 0xa8);
  FUN_00187f40(param_1 + 0x80);
  FUN_00181518(param_1 + 0x70);
  if (((byte)param_1[0x38] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x48));
  }
  if (((byte)param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00187ee0  FUN_00187ee0 =====

void FUN_00187ee0(long param_1)

{
  FUN_00185ee8(param_1 + 0xa8);
  FUN_00187f40(param_1 + 0x80);
  FUN_00181518(param_1 + 0x70);
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x48));
  }
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x28));
  return;
}


// ===== 00187f40  FUN_00187f40 =====

void FUN_00187f40(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_00187f7c(param_1,param_1[2]);
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00187f7c  FUN_00187f7c =====

void FUN_00187f7c(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      pvVar1 = (void *)*param_2;
      FUN_00187fc8();
      operator_delete(param_2);
      param_2 = (undefined8 *)pvVar1;
    } while (pvVar1 != (void *)0x0);
  }
  return;
}


// ===== 00187fc8  FUN_00187fc8 =====

void FUN_00187fc8(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  FUN_001804c0(param_3 + 0x18);
  if ((*param_3 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_3 + 0x10));
  return;
}


// ===== 00188004  FUN_00188004 =====

void FUN_00188004(long *param_1)

{
  if (*param_1 != 0) {
    FUN_00185f20();
    operator_delete((void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// ===== 0018803c  FUN_0018803c =====

long * FUN_0018803c(long *param_1,byte *param_2,undefined8 param_3,undefined8 *param_4)

{
  byte *pbVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x27;
  undefined2 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  long *local_80;
  long *plStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar4 = *(ulong *)(param_2 + 8);
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
    uVar4 = (ulong)(*param_2 >> 1);
  }
  uVar4 = FUN_0018763c(&local_80,pbVar1,uVar4);
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar11 = NEON_cnt(uVar9,1);
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar7 < 2) {
      unaff_x27 = uVar9 - 1 & uVar4;
    }
    else {
      unaff_x27 = uVar4;
      if (uVar9 <= uVar4) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar4 / uVar9;
        }
        unaff_x27 = uVar4 - uVar5 * uVar9;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x27 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_00188154;
        uVar5 = plVar8[1];
        if (uVar5 != uVar4) {
          if (uVar7 < 2) {
            uVar5 = uVar5 & uVar9 - 1;
          }
          else if (uVar9 <= uVar5) {
            uVar2 = 0;
            if (uVar9 != 0) {
              uVar2 = uVar5 / uVar9;
            }
            uVar5 = uVar5 - uVar2 * uVar9;
          }
          if (uVar5 != unaff_x27) goto LAB_00188154;
        }
        uVar5 = FUN_00187acc(param_1 + 4,plVar8 + 2,param_2);
      } while ((uVar5 & 1) == 0);
      uVar11 = 0;
      goto LAB_0018828c;
    }
  }
LAB_00188154:
  plVar8 = (long *)operator_new(0x38);
  local_80 = plVar8;
  plStack_78 = param_1 + 2;
  uVar5 = std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(plVar8 + 2),(basic_string_conflict *)*param_4);
  plVar8[5] = 0;
  plVar8[6] = 0;
  local_70 = 1;
  *plVar8 = 0;
  plVar8[1] = uVar4;
  fVar12 = (float)(param_1[3] + 1);
  if ((uVar9 == 0) ||
     (fVar13 = *(float *)(param_1 + 4) * (float)uVar9,
     fVar13 < fVar12 != (NAN(fVar13) || NAN(fVar12)))) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar7 = (ulong)(fVar12 / *(float *)(param_1 + 4));
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    uVar5 = FUN_001882c4(param_1,uVar7);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x27 = uVar9 - 1 & uVar4;
    }
    else {
      unaff_x27 = uVar4;
      if (uVar9 <= uVar4) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar4 / uVar9;
        }
        unaff_x27 = uVar4 - uVar7 * uVar9;
      }
    }
  }
  plVar6 = *(long **)(*param_1 + unaff_x27 * 8);
  if (plVar6 == (long *)0x0) {
    *plVar8 = param_1[2];
    param_1[2] = (long)plVar8;
    *(long **)(*param_1 + unaff_x27 * 8) = param_1 + 2;
    if (*local_80 != 0) {
      uVar4 = *(ulong *)(*local_80 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar4 = uVar4 & uVar9 - 1;
      }
      else if (uVar9 <= uVar4) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar4 / uVar9;
        }
        uVar4 = uVar4 - uVar7 * uVar9;
      }
      *(long **)(*param_1 + uVar4 * 8) = local_80;
    }
  }
  else {
    *plVar8 = *plVar6;
    *plVar6 = (long)plVar8;
  }
  uVar11 = 1;
  param_1[3] = param_1[3] + 1;
  plVar8 = local_80;
LAB_0018828c:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5,uVar11);
  }
  return plVar8;
}


// ===== 001882c4  FUN_001882c4 =====

void FUN_001882c4(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__ndk1::__next_prime(param_2);
  }
  uVar5 = param_1[1];
  uVar1 = param_2;
  if (uVar5 < param_2) goto LAB_00188388;
  if (uVar5 <= param_2) {
    return;
  }
  uVar1 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
  if (uVar5 < 3) {
LAB_00188370:
    uVar1 = std::__ndk1::__next_prime(uVar1);
  }
  else {
    uVar12 = NEON_cnt(uVar5,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    if (1 < (uint)CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11)) goto LAB_00188370;
    if (1 < uVar1) {
      uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
    }
  }
  if (uVar1 <= param_2) {
    uVar1 = param_2;
  }
  if (uVar5 <= uVar1) {
    return;
  }
LAB_00188388:
  if (uVar1 == 0) {
    pvVar2 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    param_1[1] = 0;
  }
  else {
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar2 = operator_new(uVar1 << 3);
    pvVar4 = (void *)*param_1;
    *param_1 = (long)pvVar2;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
    uVar5 = 0;
    param_1[1] = uVar1;
    do {
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      uVar5 = plVar8[1];
      uVar12 = NEON_cnt(uVar1,1);
      uVar11 = NEON_uaddlv(uVar12,1);
      uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
      if (uVar7 < 2) {
        uVar5 = uVar5 & uVar1 - 1;
      }
      else if (uVar1 <= uVar5) {
        uVar10 = 0;
        if (uVar1 != 0) {
          uVar10 = uVar5 / uVar1;
        }
        uVar5 = uVar5 - uVar10 * uVar1;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar8;
      if (plVar6 != (long *)0x0) {
        do {
          uVar10 = plVar6[1];
          if (uVar7 < 2) {
            uVar10 = uVar10 & uVar1 - 1;
          }
          else if (uVar1 <= uVar10) {
            uVar3 = 0;
            if (uVar1 != 0) {
              uVar3 = uVar10 / uVar1;
            }
            uVar10 = uVar10 - uVar3 * uVar1;
          }
          plVar9 = plVar6;
          if (uVar10 != uVar5) {
            if (*(long *)(*param_1 + uVar10 * 8) == 0) {
              *(long **)(*param_1 + uVar10 * 8) = plVar8;
              uVar5 = uVar10;
            }
            else {
              if (*plVar6 != 0) {
                uVar3 = FUN_00187acc(param_1 + 4,plVar6 + 2,*plVar6 + 0x10);
                while ((uVar3 & 1) != 0) {
                  plVar9 = (long *)*plVar9;
                  if (*plVar9 == 0) break;
                  uVar3 = FUN_00187acc(param_1 + 4,plVar6 + 2,*plVar9 + 0x10);
                }
              }
              *plVar8 = *plVar9;
              *plVar9 = **(long **)(*param_1 + uVar10 * 8);
              **(undefined8 **)(*param_1 + uVar10 * 8) = plVar6;
              plVar9 = plVar8;
            }
          }
          plVar6 = (long *)*plVar9;
          plVar8 = plVar9;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  return;
}


// ===== 0018857c  FUN_0018857c =====

void FUN_0018857c(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00209150;
  FUN_00177820(param_1 + 0x58);
  FUN_0017e044(param_1 + 0x38);
  if (((byte)param_1[0x20] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  std::__ndk1::__shared_count::~__shared_count(param_1);
  return;
}


// ===== 001885c4  FUN_001885c4 =====

void FUN_001885c4(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00209150;
  FUN_00177820(param_1 + 0x58);
  FUN_0017e044(param_1 + 0x38);
  if (((byte)param_1[0x20] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00188614  FUN_00188614 =====

void FUN_00188614(long param_1)

{
  FUN_00177820(param_1 + 0x58);
  FUN_0017e044(param_1 + 0x38);
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x30));
  return;
}


// ===== 0018865c  FUN_0018865c =====

void FUN_0018865c(basic_ostream<char,std::__ndk1::char_traits<char>> *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_vtable_0020f830 + 0x40;
  puVar2 = PTR_vtable_0020f7e8 + 0x10;
  *(undefined **)param_1 = PTR_vtable_0020f830 + 0x18;
  *(undefined **)(param_1 + 0x70) = puVar1;
  *(undefined **)(param_1 + 8) = puVar2;
  if (((byte)param_1[0x48] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x58));
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)(param_1 + 8));
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream(param_1);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)(param_1 + 0x70));
  return;
}


// ===== 001886e0  FUN_001886e0 =====

void FUN_001886e0(basic_ostream<char,std::__ndk1::char_traits<char>> *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_vtable_0020f830 + 0x40;
  puVar2 = PTR_vtable_0020f7e8 + 0x10;
  *(undefined **)param_1 = PTR_vtable_0020f830 + 0x18;
  *(undefined **)(param_1 + 0x70) = puVar1;
  *(undefined **)(param_1 + 8) = puVar2;
  if (((byte)param_1[0x48] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x58));
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)(param_1 + 8));
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream(param_1);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)(param_1 + 0x70));
  operator_delete(param_1);
  return;
}


// ===== 0018876c  FUN_0018876c =====

void FUN_0018876c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this;
  
  this = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
         ((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1 = PTR_vtable_0020f830 + 0x40;
  puVar2 = PTR_vtable_0020f7e8 + 0x10;
  *(undefined **)this = PTR_vtable_0020f830 + 0x18;
  *(undefined **)(this + 0x70) = puVar1;
  *(undefined **)(this + 8) = puVar2;
  if (((byte)this[0x48] & 1) != 0) {
    operator_delete(*(void **)(this + 0x58));
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)(this + 8));
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream(this);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)(this + 0x70));
  return;
}


// ===== 001887f8  FUN_001887f8 =====

void FUN_001887f8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this;
  
  this = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
         ((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1 = PTR_vtable_0020f830 + 0x40;
  puVar2 = PTR_vtable_0020f7e8 + 0x10;
  *(undefined **)this = PTR_vtable_0020f830 + 0x18;
  *(undefined **)(this + 0x70) = puVar1;
  *(undefined **)(this + 8) = puVar2;
  if (((byte)this[0x48] & 1) != 0) {
    operator_delete(*(void **)(this + 0x58));
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)(this + 8));
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream(this);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)(this + 0x70));
  operator_delete(this);
  return;
}


// ===== 0018888c  FUN_0018888c =====

void FUN_0018888c(ulong *param_1,long param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  
  if ((*(uint *)(param_2 + 0x60) >> 4 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x60) >> 3 & 1) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    puVar3 = *(undefined1 **)(param_2 + 0x10);
    puVar4 = *(undefined1 **)(param_2 + 0x20);
    uVar5 = (long)puVar4 - (long)puVar3;
    if (0xffffffffffffffef < uVar5) {
LAB_001889ac:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar5 < 0x17) {
      puVar1 = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar5 << 1);
    }
    else {
      uVar2 = uVar5 + 0x10 & 0xfffffffffffffff0;
      puVar1 = (undefined1 *)operator_new(uVar2);
      param_1[1] = uVar5;
      param_1[2] = (ulong)puVar1;
      *param_1 = uVar2 | 1;
    }
    for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
      *puVar1 = *puVar3;
      puVar1 = puVar1 + 1;
    }
  }
  else {
    puVar4 = *(undefined1 **)(param_2 + 0x30);
    puVar3 = *(undefined1 **)(param_2 + 0x58);
    if (*(undefined1 **)(param_2 + 0x58) < puVar4) {
      *(undefined1 **)(param_2 + 0x58) = puVar4;
      puVar3 = puVar4;
    }
    puVar4 = *(undefined1 **)(param_2 + 0x28);
    uVar5 = (long)puVar3 - (long)puVar4;
    if (0xffffffffffffffef < uVar5) goto LAB_001889ac;
    if (uVar5 < 0x17) {
      puVar1 = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar5 << 1);
    }
    else {
      uVar2 = uVar5 + 0x10 & 0xfffffffffffffff0;
      puVar1 = (undefined1 *)operator_new(uVar2);
      param_1[1] = uVar5;
      param_1[2] = (ulong)puVar1;
      *param_1 = uVar2 | 1;
    }
    for (; puVar4 != puVar3; puVar4 = puVar4 + 1) {
      *puVar1 = *puVar4;
      puVar1 = puVar1 + 1;
    }
  }
  *puVar1 = 0;
  return;
}


// ===== 001889b4  FUN_001889b4 =====

void FUN_001889b4(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00209248;
  FUN_00185d68(param_1 + 0x88,0);
  FUN_0017dfec(param_1 + 0x50);
  FUN_0017e044(param_1 + 0x38);
  if (((byte)param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  std::__ndk1::__shared_count::~__shared_count(param_1);
  return;
}


// ===== 00188a08  FUN_00188a08 =====

void FUN_00188a08(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00209248;
  FUN_00185d68(param_1 + 0x88,0);
  FUN_0017dfec(param_1 + 0x50);
  FUN_0017e044(param_1 + 0x38);
  if (((byte)param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00188a64  FUN_00188a64 =====

void FUN_00188a64(long param_1)

{
  FUN_00185d68(param_1 + 0x88,0);
  FUN_0017dfec(param_1 + 0x50);
  FUN_0017e044(param_1 + 0x38);
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x28));
  return;
}


// ===== 00188ab8  FUN_00188ab8 =====

void FUN_00188ab8(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar5;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)*param_1;
  if ((undefined8 *)param_1[1] == puVar1) {
    lVar2 = param_2[1];
  }
  else {
    lVar2 = param_2[1];
    puVar3 = (undefined8 *)param_1[1];
    do {
      puVar4 = puVar3 + -2;
      uVar5 = *puVar4;
      *(undefined8 *)(lVar2 + -8) = puVar3[-1];
      *(undefined8 *)(lVar2 + -0x10) = uVar5;
      *puVar4 = 0;
      puVar3[-1] = 0;
      lVar2 = param_2[1] + -0x10;
      param_2[1] = lVar2;
      puVar3 = puVar4;
    } while (puVar1 != puVar4);
    puVar1 = (undefined8 *)*param_1;
  }
  *param_1 = lVar2;
  param_2[1] = puVar1;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}


// ===== 00188b28  FUN_00188b28 =====

void FUN_00188b28(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_00181518();
    lVar2 = param_1[2];
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 00188b78  FUN_00188b78 =====

void FUN_00188b78(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x18) - 2U < 5) {
    uVar1 = *(ushort *)(param_1 + 0x16) & 7;
    if (uVar1 == 4) {
LAB_00188bd8:
      FUN_0017eef0(param_1);
      while (uVar2 = FUN_0017f004(param_1), (uVar2 & 1) != 0) {
        if (*(char *)(param_1 + 0x118) != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0x18) - 2U < 5) {
          uVar1 = *(ushort *)(param_1 + 0x16) & 7;
          if (uVar1 != 3) {
            if (uVar1 != 6) goto LAB_00188c84;
            if (*(char *)(param_2 + 1) == '\0') goto LAB_00188c98;
            FUN_00184988(param_1,param_2);
            break;
          }
        }
        else if (*(int *)(param_1 + 0x18) != 7) goto LAB_00188c84;
        if (*(char *)(param_2 + 1) == '\0') {
          puVar3 = (undefined8 *)*param_2;
        }
        else {
          puVar3 = (undefined8 *)operator_new(0x18);
          puVar3[1] = 0;
          puVar3[2] = 0;
          *puVar3 = 0;
          *param_2 = puVar3;
          *(undefined1 *)(param_2 + 1) = 0;
        }
        FUN_00188ca8(param_1,puVar3);
      }
      iVar4 = *(int *)(param_1 + 0x18);
      if (iVar4 != 1) {
        return;
      }
      goto LAB_00188c88;
    }
    if (uVar1 == 6) {
      if (*(char *)(param_2 + 1) != '\0') {
        FUN_00184988(param_1,param_2);
        return;
      }
LAB_00188c98:
      *(undefined1 *)(param_1 + 0x118) = 1;
      *(undefined4 *)(param_1 + 0x18) = 1;
      return;
    }
  }
  else if (*(int *)(param_1 + 0x18) == 9) goto LAB_00188bd8;
LAB_00188c84:
  iVar4 = 1;
LAB_00188c88:
  *(char *)(param_1 + 0x118) = (char)iVar4;
  return;
}


// ===== 00188ca8  FUN_00188ca8 =====

void FUN_00188ca8(undefined1 param_1 [16],undefined8 param_2,long param_3,long *param_4)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  char *pcVar9;
  ulong uVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  undefined8 local_d8;
  __shared_weak_count *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  __shared_weak_count *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  ulong local_a8;
  ulong uStack_a0;
  undefined7 local_98;
  undefined1 uStack_91;
  char cStack_90;
  char cStack_8f;
  char cStack_8e;
  char local_8d;
  long local_88;
  
  lVar7 = tpidr_el0;
  local_88 = *(long *)(lVar7 + 0x28);
  FUN_0017ee8c();
  local_a8 = 0;
  uStack_a0 = 0;
  cStack_90 = '\0';
  cStack_8f = '\0';
  cStack_8e = '\0';
  local_98 = 0;
  uStack_91 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_8d = '\x01';
  local_b8 = (__shared_weak_count *)0x0;
  pcVar9 = (char *)FUN_0017ef54(param_3);
  if (pcVar9 != (char *)0x0) {
    uVar14 = 0;
    uVar16 = 0;
    uVar13 = 0;
    uVar17 = 0;
LAB_00188d50:
    iVar8 = strcmp(pcVar9,"i");
    if (iVar8 == 0) {
      cStack_90 = '\x01';
      uVar13 = FUN_001851a0(param_3);
      uVar17 = param_2;
    }
    else {
      iVar8 = strcmp(pcVar9,"o");
      if (iVar8 == 0) {
        uVar14 = FUN_001851a0(param_3);
        uVar16 = param_2;
      }
      else {
        iVar8 = strcmp(pcVar9,"t");
        if (iVar8 == 0) {
          dVar15 = (double)FUN_0017f0e8(param_3);
          local_c8 = CONCAT44(local_c8._4_4_,(float)dVar15);
        }
        else {
          iVar8 = strcmp(pcVar9,"s");
          if (iVar8 == 0) {
            cStack_8f = '\x01';
            puVar11 = &local_b0;
          }
          else {
            iVar8 = strcmp(pcVar9,"e");
            if (iVar8 != 0) {
              iVar8 = strcmp(pcVar9,"n");
              if (iVar8 == 0) {
                if (*(int *)(param_3 + 0x18) - 2U < 5) {
                  uVar3 = *(ushort *)(param_3 + 0x16) & 7;
                  if (uVar3 != 4) {
                    if (uVar3 != 5) goto LAB_001890fc;
                    pcVar9 = (char *)FUN_0017f248(param_3);
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_a8,pcVar9);
                    goto LAB_00188e38;
                  }
                }
                else if (*(int *)(param_3 + 0x18) != 9) {
LAB_001890fc:
                  iVar8 = 1;
                  goto LAB_00189100;
                }
                FUN_0017eef0(param_3);
                while (uVar10 = FUN_0017f004(param_3), (uVar10 & 1) != 0) {
                  if (*(char *)(param_3 + 0x118) != '\0') goto LAB_0018911c;
                  if ((4 < *(int *)(param_3 + 0x18) - 2U) ||
                     ((*(ushort *)(param_3 + 0x16) & 7) != 5)) goto LAB_001890fc;
                  uVar10 = local_a8 >> 1 & 0x7f;
                  if ((local_a8 & 1) != 0) {
                    uVar10 = uStack_a0;
                  }
                  pcVar9 = (char *)FUN_0017f248(param_3);
                  if (uVar10 == 0) {
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_a8,pcVar9);
                  }
                }
                if (*(int *)(param_3 + 0x18) != 1) goto LAB_00188e38;
                iVar8 = 1;
                goto LAB_00189100;
              }
              iVar8 = strcmp(pcVar9,"h");
              if (iVar8 == 0) {
                iVar8 = FUN_0017f084(param_3);
                cStack_8e = iVar8 != 0;
              }
              else {
                FUN_0017f3b4(param_3);
              }
              goto LAB_00188e38;
            }
            local_8d = '\0';
            puVar11 = &uStack_ac;
          }
          FUN_00184988(param_3,puVar11);
        }
      }
    }
LAB_00188e38:
    pcVar9 = (char *)FUN_0017ef54(param_3);
    if (pcVar9 == (char *)0x0) goto LAB_00188f38;
    goto LAB_00188d50;
  }
  uVar17 = 0;
  uVar13 = 0;
  uVar16 = 0;
  uVar14 = 0;
LAB_00188f38:
  iVar8 = *(int *)(param_3 + 0x18);
  if (iVar8 == 1) {
LAB_00189100:
    *(char *)(param_3 + 0x118) = (char)iVar8;
    goto LAB_0018911c;
  }
  puVar4 = (undefined8 *)param_4[1];
  if ((((undefined8 *)*param_4 != puVar4) &&
      (*(undefined4 *)((long)puVar4 + -0x1c) = (undefined4)local_c8, cStack_8f != '\0')) &&
     (local_8d != '\0')) {
    *(undefined4 *)((long)puVar4 + -4) = local_b0;
  }
  if (cStack_8e == '\0') {
    if (cStack_90 == '\0') goto LAB_0018911c;
    local_e0 = (void *)CONCAT17(uStack_91,local_98);
    uStack_e8 = uStack_a0;
    local_f0 = local_a8;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_91 = 0;
    FUN_00185344(&local_d8,uVar13,uVar17,uVar14,uVar16,param_3,&local_f0);
    p_Var1 = local_b8;
    local_b8 = local_d0;
    local_c0 = local_d8;
    local_d8 = 0;
    local_d0 = (__shared_weak_count *)0x0;
    if (p_Var1 != (__shared_weak_count *)0x0) {
      p_Var2 = p_Var1 + 8;
      do {
        lVar12 = *(long *)p_Var2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
        if (bVar6) {
          *(long *)p_Var2 = lVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*(long *)p_Var1 + 0x10))(p_Var1);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
      }
    }
    p_Var1 = local_d0;
    if (local_d0 != (__shared_weak_count *)0x0) {
      p_Var2 = local_d0 + 8;
      do {
        lVar12 = *(long *)p_Var2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
        if (bVar6) {
          *(long *)p_Var2 = lVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*(long *)local_d0 + 0x10))(local_d0);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
      }
    }
    if ((local_f0 & 1) != 0) {
      operator_delete(local_e0);
    }
    puVar4 = (undefined8 *)param_4[1];
    if (puVar4 != (undefined8 *)param_4[2]) {
      *puVar4 = local_c8;
      puVar4[1] = local_c0;
      puVar4[2] = local_b8;
      if (local_b8 != (__shared_weak_count *)0x0) {
        p_Var1 = local_b8 + 8;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar6) {
            *(long *)p_Var1 = *(long *)p_Var1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      puVar4[3] = CONCAT44(uStack_ac,local_b0);
      param_4[1] = (long)(puVar4 + 4);
      goto LAB_0018911c;
    }
  }
  else {
    uStack_ac = local_b0;
    local_c8 = CONCAT44((undefined4)local_c8,(undefined4)local_c8);
    if (puVar4 != (undefined8 *)param_4[2]) {
      *puVar4 = local_c8;
      puVar4[1] = local_c0;
      puVar4[2] = local_b8;
      if (local_b8 != (__shared_weak_count *)0x0) {
        p_Var1 = local_b8 + 8;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar6) {
            *(long *)p_Var1 = *(long *)p_Var1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      puVar4[3] = CONCAT44(local_b0,local_b0);
      param_4[1] = (long)(puVar4 + 4);
      goto LAB_0018911c;
    }
  }
  FUN_001891a0(param_4,&local_c8);
LAB_0018911c:
  p_Var1 = local_b8;
  if (local_b8 != (__shared_weak_count *)0x0) {
    p_Var2 = local_b8 + 8;
    do {
      lVar12 = *(long *)p_Var2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar6) {
        *(long *)p_Var2 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*(long *)local_b8 + 0x10))(local_b8);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
    }
  }
  if ((local_a8 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_91,local_98));
  }
  if (*(long *)(lVar7 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001891a0  FUN_001891a0 =====

void FUN_001891a0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  void *local_70;
  undefined8 *puStack_68;
  undefined8 *local_60;
  void *local_58;
  long *plStack_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  lVar8 = param_1[1] - *param_1 >> 5;
  uVar1 = lVar8 + 1;
  if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  plStack_50 = param_1 + 2;
  lVar6 = *plStack_50 - *param_1;
  uVar7 = lVar6 >> 4;
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  if (0x3fffffffffffffe < (ulong)(lVar6 >> 5)) {
    uVar1 = 0x7ffffffffffffff;
  }
  local_58 = (void *)0x0;
  if (uVar1 == 0) {
    local_70 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_70 = operator_new(uVar1 << 5);
  }
  puStack_68 = (undefined8 *)((long)local_70 + lVar8 * 0x20);
  local_58 = (void *)((long)local_70 + uVar1 * 0x20);
  uVar9 = *param_2;
  puStack_68[1] = param_2[1];
  *puStack_68 = uVar9;
  lVar8 = param_2[2];
  puStack_68[2] = lVar8;
  if (lVar8 != 0) {
    plVar2 = (long *)(lVar8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_60 = puStack_68 + 4;
  puStack_68[3] = param_2[3];
  FUN_001892cc(param_1,&local_70);
  FUN_0018934c(&local_70);
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001892cc  FUN_001892cc =====

void FUN_001892cc(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar5;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)*param_1;
  if ((undefined8 *)param_1[1] == puVar1) {
    lVar2 = param_2[1];
  }
  else {
    lVar2 = param_2[1];
    puVar3 = (undefined8 *)param_1[1];
    do {
      puVar4 = puVar3 + -4;
      *(undefined8 *)(lVar2 + -0x20) = *puVar4;
      uVar5 = puVar3[-3];
      *(undefined8 *)(lVar2 + -0x10) = puVar3[-2];
      *(undefined8 *)(lVar2 + -0x18) = uVar5;
      puVar3[-3] = 0;
      puVar3[-2] = 0;
      *(undefined8 *)(lVar2 + -8) = puVar3[-1];
      lVar2 = param_2[1] + -0x20;
      param_2[1] = lVar2;
      puVar3 = puVar4;
    } while (puVar1 != puVar4);
    puVar1 = (undefined8 *)*param_1;
  }
  *param_1 = lVar2;
  param_2[1] = puVar1;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}


// ===== 0018934c  FUN_0018934c =====

void FUN_0018934c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x20;
    FUN_001855c4(lVar2 + -0x18);
    lVar2 = param_1[2];
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 001893a0  FUN_001893a0 =====

void FUN_001893a0(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  __shared_weak_count *p_Var2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  __shared_weak_count *this;
  undefined8 *puVar10;
  ulong uVar11;
  
  puVar10 = (undefined8 *)*param_1;
  uVar11 = (long)param_3 - (long)param_2 >> 4;
  if ((ulong)(param_1[2] - (long)puVar10 >> 4) < uVar11) {
    FUN_00187d6c(param_1);
    if (uVar11 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar7 = param_1[2] - *param_1 >> 3;
    if (uVar11 <= uVar7) {
      uVar11 = uVar7;
    }
    if (0x7fffffffffffffe < (ulong)(param_1[2] - *param_1 >> 4)) {
      uVar11 = 0xfffffffffffffff;
    }
    FUN_00187dd4(param_1,uVar11);
    puVar10 = (undefined8 *)param_1[1];
    if (param_2 != param_3) {
      do {
        *puVar10 = *param_2;
        lVar8 = param_2[1];
        puVar10[1] = lVar8;
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
        param_2 = param_2 + 2;
        puVar10 = puVar10 + 2;
      } while (param_2 != param_3);
    }
  }
  else {
    puVar9 = (undefined8 *)((long)param_2 + (param_1[1] - (long)puVar10));
    uVar7 = param_1[1] - (long)puVar10 >> 4;
    puVar3 = puVar9;
    if (uVar11 <= uVar7) {
      puVar3 = param_3;
    }
    if (puVar3 != param_2) {
      do {
        uVar4 = *param_2;
        lVar8 = param_2[1];
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
        this = (__shared_weak_count *)puVar10[1];
        *puVar10 = uVar4;
        puVar10[1] = lVar8;
        if (this != (__shared_weak_count *)0x0) {
          p_Var2 = this + 8;
          do {
            lVar8 = *(long *)p_Var2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
            if (bVar6) {
              *(long *)p_Var2 = lVar8 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*(long *)this + 0x10))(this);
            std::__ndk1::__shared_weak_count::__release_weak(this);
          }
        }
        param_2 = param_2 + 2;
        puVar10 = puVar10 + 2;
      } while (param_2 != puVar3);
    }
    if (uVar11 <= uVar7) {
      puVar9 = (undefined8 *)param_1[1];
      while (puVar9 != puVar10) {
        puVar9 = puVar9 + -2;
        FUN_0017e0b0(puVar9);
      }
      param_1[1] = (long)puVar10;
      return;
    }
    puVar10 = (undefined8 *)param_1[1];
    while (puVar3 != param_3) {
      *puVar10 = *puVar9;
      lVar8 = puVar9[1];
      puVar10[1] = lVar8;
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
      puVar10 = puVar10 + 2;
      puVar9 = puVar9 + 2;
      puVar3 = puVar9;
    }
  }
  param_1[1] = (long)puVar10;
  return;
}


// ===== 00189590  FUN_00189590 =====

void FUN_00189590(long *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = *param_1;
  lVar4 = param_1[1];
  if (lVar4 == lVar2) {
    lVar3 = param_2[1];
  }
  else {
    lVar3 = param_2[1];
    do {
      uVar6 = *(undefined8 *)(lVar4 + -0x18);
      uVar5 = *(undefined8 *)(lVar4 + -0x20);
      *(undefined8 *)(lVar3 + -0x10) = *(undefined8 *)(lVar4 + -0x10);
      *(undefined8 *)(lVar3 + -0x18) = uVar6;
      *(undefined8 *)(lVar3 + -0x20) = uVar5;
      *(undefined8 *)(lVar4 + -0x18) = 0;
      *(undefined8 *)(lVar4 + -0x10) = 0;
      *(undefined8 *)(lVar4 + -0x20) = 0;
      *(undefined4 *)(lVar3 + -8) = *(undefined4 *)(lVar4 + -8);
      puVar1 = (undefined4 *)(lVar4 + -4);
      lVar4 = lVar4 + -0x20;
      *(undefined4 *)(lVar3 + -4) = *puVar1;
      lVar3 = param_2[1] + -0x20;
      param_2[1] = lVar3;
    } while (lVar2 != lVar4);
    lVar2 = *param_1;
  }
  *param_1 = lVar3;
  param_2[1] = lVar2;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}


// ===== 00189620  FUN_00189620 =====

void FUN_00189620(undefined8 *param_1)

{
  FUN_00189658(param_1,param_1[1]);
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 00189658  FUN_00189658 =====

void FUN_00189658(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  while (lVar1 = lVar2, lVar1 != param_2) {
    *(long *)(param_1 + 0x10) = lVar1 + -0x20;
    lVar2 = lVar1 + -0x20;
    if ((*(byte *)(lVar1 + -0x20) & 1) != 0) {
      operator_delete(*(void **)(lVar1 + -0x10));
      lVar2 = *(long *)(param_1 + 0x10);
    }
  }
  return;
}


// ===== 001896ac  FUN_001896ac =====

void FUN_001896ac(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar5;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)*param_1;
  if ((undefined8 *)param_1[1] == puVar1) {
    lVar2 = param_2[1];
  }
  else {
    lVar2 = param_2[1];
    puVar3 = (undefined8 *)param_1[1];
    do {
      puVar4 = puVar3 + -2;
      uVar5 = *puVar4;
      *(undefined8 *)(lVar2 + -8) = puVar3[-1];
      *(undefined8 *)(lVar2 + -0x10) = uVar5;
      *puVar4 = 0;
      puVar3[-1] = 0;
      lVar2 = param_2[1] + -0x10;
      param_2[1] = lVar2;
      puVar3 = puVar4;
    } while (puVar1 != puVar4);
    puVar1 = (undefined8 *)*param_1;
  }
  *param_1 = lVar2;
  param_2[1] = puVar1;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}


// ===== 0018971c  FUN_0018971c =====

void FUN_0018971c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_00182134();
    lVar2 = param_1[2];
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 0018976c  FUN_0018976c =====

void FUN_0018976c(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00209280;
  if (param_1[0x48] == (__shared_count)0x0) {
    FUN_00185e3c(param_1 + 0x40,0);
  }
  FUN_0018983c(param_1 + 0x18);
  std::__ndk1::__shared_count::~__shared_count(param_1);
  return;
}


// ===== 001897b4  FUN_001897b4 =====

void FUN_001897b4(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00209280;
  if (param_1[0x48] == (__shared_count)0x0) {
    FUN_00185e3c(param_1 + 0x40,0);
  }
  FUN_0018983c(param_1 + 0x18);
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00189804  FUN_00189804 =====

void FUN_00189804(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\0') {
    FUN_00185e3c(param_1 + 0x40,0);
  }
  FUN_0018983c(param_1 + 0x18);
  return;
}


// ===== 0018983c  FUN_0018983c =====

void FUN_0018983c(undefined8 *param_1)

{
  void *pvVar1;
  
  if (*(char *)(param_1 + 4) == '\0') {
    pvVar1 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar1 != (void *)0x0) {
      FUN_001898a0(pvVar1);
      operator_delete(pvVar1);
      return;
    }
    return;
  }
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    param_1[1] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 001898a0  FUN_001898a0 =====

void FUN_001898a0(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar2 = (void *)*param_1;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  pvVar1 = pvVar2;
  pvVar3 = (void *)param_1[1];
  if ((void *)param_1[1] != pvVar2) {
    do {
      pvVar1 = *(void **)((long)pvVar3 + -0x20);
      if (pvVar1 != (void *)0x0) {
        *(void **)((long)pvVar3 + -0x18) = pvVar1;
        operator_delete(pvVar1);
      }
      pvVar1 = *(void **)((long)pvVar3 + -0x40);
      pvVar4 = (void *)((long)pvVar3 + -0x58);
      if (pvVar1 != (void *)0x0) {
        *(void **)((long)pvVar3 + -0x38) = pvVar1;
        operator_delete(pvVar1);
      }
      FUN_001855c4((long)pvVar3 + -0x50);
      pvVar3 = pvVar4;
    } while (pvVar2 != pvVar4);
    pvVar1 = (void *)*param_1;
  }
  param_1[1] = pvVar2;
  operator_delete(pvVar1);
  return;
}


// ===== 00189930  FUN_00189930 =====

void FUN_00189930(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_002092b8;
  if (param_1[0x60] == (__shared_count)0x0) {
    FUN_00185e3c(param_1 + 0x58,0);
  }
  if (param_1[0x50] == (__shared_count)0x0) {
    FUN_001861c8(param_1 + 0x48,0);
  }
  if (param_1[0x40] == (__shared_count)0x0) {
    FUN_001861c8(param_1 + 0x38,0);
  }
  if (((byte)param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  std::__ndk1::__shared_count::~__shared_count(param_1);
  return;
}


// ===== 001899a8  FUN_001899a8 =====

void FUN_001899a8(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_002092b8;
  if (param_1[0x60] == (__shared_count)0x0) {
    FUN_00185e3c(param_1 + 0x58,0);
  }
  if (param_1[0x50] == (__shared_count)0x0) {
    FUN_001861c8(param_1 + 0x48,0);
  }
  if (param_1[0x40] == (__shared_count)0x0) {
    FUN_001861c8(param_1 + 0x38,0);
  }
  if (((byte)param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00189a28  FUN_00189a28 =====

void FUN_00189a28(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\0') {
    FUN_00185e3c(param_1 + 0x58,0);
  }
  if (*(char *)(param_1 + 0x50) == '\0') {
    FUN_001861c8(param_1 + 0x48,0);
  }
  if (*(char *)(param_1 + 0x40) == '\0') {
    FUN_001861c8(param_1 + 0x38,0);
  }
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x28));
  return;
}


// ===== 00189a9c  FUN_00189a9c =====

void FUN_00189a9c(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_002092f0;
  if (param_1[0x50] == (__shared_count)0x0) {
    FUN_001861c8(param_1 + 0x48,0);
  }
  if (param_1[0x40] == (__shared_count)0x0) {
    FUN_001861c8(param_1 + 0x38,0);
  }
  if (((byte)param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  std::__ndk1::__shared_count::~__shared_count(param_1);
  return;
}


// ===== 00189b00  FUN_00189b00 =====

void FUN_00189b00(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_002092f0;
  if (param_1[0x50] == (__shared_count)0x0) {
    FUN_001861c8(param_1 + 0x48,0);
  }
  if (param_1[0x40] == (__shared_count)0x0) {
    FUN_001861c8(param_1 + 0x38,0);
  }
  if (((byte)param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00189b6c  FUN_00189b6c =====

void FUN_00189b6c(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\0') {
    FUN_001861c8(param_1 + 0x48,0);
  }
  if (*(char *)(param_1 + 0x40) == '\0') {
    FUN_001861c8(param_1 + 0x38,0);
  }
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x28));
  return;
}


// ===== 00189bcc  FUN_00189bcc =====

void FUN_00189bcc(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00209328;
  FUN_0018983c(param_1 + 0x38);
  if (((byte)param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  std::__ndk1::__shared_count::~__shared_count(param_1);
  return;
}


// ===== 00189c0c  FUN_00189c0c =====

void FUN_00189c0c(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00209328;
  FUN_0018983c(param_1 + 0x38);
  if (((byte)param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00189c54  FUN_00189c54 =====

void FUN_00189c54(long param_1)

{
  FUN_0018983c(param_1 + 0x38);
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x28));
  return;
}


// ===== 00189c94  FUN_00189c94 =====

void FUN_00189c94(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_00209360;
  *(undefined4 *)(param_1 + 6) = 0xc0001;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  uVar1 = DAT_00146320;
  param_1[3] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)(param_1 + 0xf) = 1;
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined8 *)((long)param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


// ===== 00189d08  FUN_00189d08 =====

void FUN_00189d08(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00209360;
  FUN_00189d7c(param_1 + 0x18);
  std::__ndk1::__shared_count::~__shared_count(param_1);
  return;
}


// ===== 00189d38  FUN_00189d38 =====

void FUN_00189d38(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00209360;
  FUN_00189d7c(param_1 + 0x18);
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00189d7c  FUN_00189d7c =====

void FUN_00189d7c(byte *param_1)

{
  if (param_1[0x90] == 0) {
    FUN_00185e3c(param_1 + 0x88,0);
  }
  if (param_1[0x80] == 0) {
    FUN_00185e3c(param_1 + 0x78,0);
  }
  if (param_1[0x70] == 0) {
    FUN_00185e3c(param_1 + 0x68,0);
  }
  if (param_1[0x60] == 0) {
    FUN_00185e3c(param_1 + 0x58,0);
  }
  if (param_1[0x50] == 0) {
    FUN_00185e3c(param_1 + 0x48,0);
  }
  if (param_1[0x40] == 0) {
    FUN_00185e3c(param_1 + 0x38,0);
  }
  if (param_1[0x30] == 0) {
    FUN_001861c8(param_1 + 0x28,0);
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 00189e3c  FUN_00189e3c =====

void FUN_00189e3c(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00209398;
  if (param_1[0x60] == (__shared_count)0x0) {
    FUN_00185e3c(param_1 + 0x58,0);
  }
  if (param_1[0x50] == (__shared_count)0x0) {
    FUN_00185e3c(param_1 + 0x48,0);
  }
  if (param_1[0x40] == (__shared_count)0x0) {
    FUN_00185e3c(param_1 + 0x38,0);
  }
  if (((byte)param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  std::__ndk1::__shared_count::~__shared_count(param_1);
  return;
}


// ===== 00189eb4  FUN_00189eb4 =====

void FUN_00189eb4(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00209398;
  if (param_1[0x60] == (__shared_count)0x0) {
    FUN_00185e3c(param_1 + 0x58,0);
  }
  if (param_1[0x50] == (__shared_count)0x0) {
    FUN_00185e3c(param_1 + 0x48,0);
  }
  if (param_1[0x40] == (__shared_count)0x0) {
    FUN_00185e3c(param_1 + 0x38,0);
  }
  if (((byte)param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00189f34  FUN_00189f34 =====

void FUN_00189f34(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\0') {
    FUN_00185e3c(param_1 + 0x58,0);
  }
  if (*(char *)(param_1 + 0x50) == '\0') {
    FUN_00185e3c(param_1 + 0x48,0);
  }
  if (*(char *)(param_1 + 0x40) == '\0') {
    FUN_00185e3c(param_1 + 0x38,0);
  }
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x28));
  return;
}


// ===== 00189fa8  FUN_00189fa8 =====

void FUN_00189fa8(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_002093d0;
  FUN_0018a08c(param_1 + 0x18);
  std::__ndk1::__shared_count::~__shared_count(param_1);
  return;
}


// ===== 00189fd8  FUN_00189fd8 =====

void FUN_00189fd8(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_002093d0;
  FUN_0018a08c(param_1 + 0x18);
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018a01c  FUN_0018a01c =====

void FUN_0018a01c(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 3) = 0xe0001;
  param_1[10] = 0;
  param_1[0xc] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)(param_1 + 0xf) = 1;
  *(undefined4 *)(param_1 + 0xe) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined1 *)(param_1 + 0x15) = 1;
  param_1[8] = 0x42c8000042c80000;
  *(undefined4 *)(param_1 + 0x16) = 0;
  return;
}


// ===== 0018a08c  FUN_0018a08c =====

void FUN_0018a08c(byte *param_1)

{
  if (param_1[0xa8] == 0) {
    FUN_00185e3c(param_1 + 0xa0,0);
  }
  if (param_1[0x98] == 0) {
    FUN_00185e3c(param_1 + 0x90,0);
  }
  if (param_1[0x88] == 0) {
    FUN_00185e3c(param_1 + 0x80,0);
  }
  if (param_1[0x78] == 0) {
    FUN_00185e3c(param_1 + 0x70,0);
  }
  if (param_1[0x68] == 0) {
    FUN_001861c8(param_1 + 0x60,0);
  }
  if (param_1[0x58] == 0) {
    FUN_001861c8(param_1 + 0x50,0);
  }
  if (param_1[0x48] == 0) {
    FUN_001861c8(param_1 + 0x40,0);
  }
  if (param_1[0x38] == 0) {
    FUN_00185e3c(param_1 + 0x30,0);
  }
  FUN_00183cd8(param_1 + 0x20);
  if ((*param_1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 0018a168  FUN_0018a168 =====

void FUN_0018a168(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00209408;
  FUN_0018a1dc(param_1 + 0x18);
  std::__ndk1::__shared_count::~__shared_count(param_1);
  return;
}


// ===== 0018a198  FUN_0018a198 =====

void FUN_0018a198(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00209408;
  FUN_0018a1dc(param_1 + 0x18);
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018a1dc  FUN_0018a1dc =====

void FUN_0018a1dc(byte *param_1)

{
  if (param_1[0x18] == 0) {
    FUN_001860dc(param_1 + 0x20,0);
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 0018a224  FUN_0018a224 =====

void FUN_0018a224(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = param_2;
  if (pvVar1 != (void *)0x0) {
    if (*(char *)((long)pvVar1 + 0x28) == '\0') {
      FUN_00185e3c((long)pvVar1 + 0x20,0);
    }
    if (*(char *)((long)pvVar1 + 0x18) == '\0') {
      FUN_00185e3c((long)pvVar1 + 0x10,0);
    }
    if (*(char *)((long)pvVar1 + 8) == '\0') {
      FUN_00185e3c(pvVar1,0);
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 0018a294  FUN_0018a294 =====

void FUN_0018a294(undefined1 param_1 [16],undefined8 param_2,long param_3,long *param_4)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  char *pcVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong local_120;
  ulong uStack_118;
  void *local_110;
  undefined8 local_100;
  __shared_weak_count *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  __shared_weak_count *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  uint uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  undefined7 local_a0;
  undefined1 uStack_99;
  char cStack_98;
  char cStack_97;
  char cStack_96;
  char local_95;
  long local_90;
  
  lVar6 = tpidr_el0;
  local_90 = *(long *)(lVar6 + 0x28);
  FUN_0017ee8c();
  local_b0 = 0;
  uStack_a8 = 0;
  cStack_98 = '\0';
  cStack_97 = '\0';
  cStack_96 = '\0';
  local_a0 = 0;
  uStack_99 = 0;
  local_95 = '\x01';
  uStack_bf = 0;
  uStack_b8 = uStack_b8 & 0xffffff00;
  uStack_c0 = 0;
  uStack_d8 = 0;
  local_e0 = (__shared_weak_count *)0x0;
  local_c8 = 0;
  uStack_c7 = 0;
  local_d0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  pcVar8 = (char *)FUN_0017ef54(param_3);
  if (pcVar8 != (char *)0x0) {
    uVar13 = 0;
    uVar15 = 0;
    uVar12 = 0;
    uVar16 = 0;
LAB_0018a348:
    iVar7 = strcmp(pcVar8,"i");
    if (iVar7 == 0) {
      cStack_98 = '\x01';
      uVar12 = FUN_001851a0(param_3);
      uVar16 = param_2;
    }
    else {
      iVar7 = strcmp(pcVar8,"o");
      if (iVar7 == 0) {
        uVar13 = FUN_001851a0(param_3);
        uVar15 = param_2;
      }
      else {
        iVar7 = strcmp(pcVar8,"t");
        if (iVar7 == 0) {
          dVar14 = (double)FUN_0017f0e8(param_3);
          local_f0 = CONCAT44(local_f0._4_4_,(float)dVar14);
        }
        else {
          iVar7 = strcmp(pcVar8,"s");
          if (iVar7 == 0) {
            cStack_97 = '\x01';
            puVar10 = &uStack_d8;
          }
          else {
            iVar7 = strcmp(pcVar8,"e");
            if (iVar7 != 0) {
              iVar7 = strcmp(pcVar8,"n");
              if (iVar7 == 0) {
                if (*(int *)(param_3 + 0x18) - 2U < 5) {
                  uVar3 = *(ushort *)(param_3 + 0x16) & 7;
                  if (uVar3 != 4) {
                    if (uVar3 != 5) goto LAB_0018a734;
                    pcVar8 = (char *)FUN_0017f248(param_3);
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_b0,pcVar8);
                    goto LAB_0018a444;
                  }
                }
                else if (*(int *)(param_3 + 0x18) != 9) {
LAB_0018a734:
                  iVar7 = 1;
                  goto LAB_0018a738;
                }
                FUN_0017eef0(param_3);
                while (uVar9 = FUN_0017f004(param_3), (uVar9 & 1) != 0) {
                  if (*(char *)(param_3 + 0x118) != '\0') goto LAB_0018a73c;
                  if ((4 < *(int *)(param_3 + 0x18) - 2U) ||
                     ((*(ushort *)(param_3 + 0x16) & 7) != 5)) goto LAB_0018a734;
                  uVar9 = local_b0 >> 1 & 0x7f;
                  if ((local_b0 & 1) != 0) {
                    uVar9 = uStack_a8;
                  }
                  pcVar8 = (char *)FUN_0017f248(param_3);
                  if (uVar9 == 0) {
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_b0,pcVar8);
                  }
                }
                if (*(int *)(param_3 + 0x18) != 1) goto LAB_0018a444;
                iVar7 = 1;
                goto LAB_0018a738;
              }
              uVar9 = FUN_001852c0(param_3,pcVar8,&uStack_d8);
              if ((uVar9 & 1) == 0) {
                iVar7 = strcmp(pcVar8,"h");
                if (iVar7 == 0) {
                  iVar7 = FUN_0017f084(param_3);
                  cStack_96 = iVar7 != 0;
                }
                else {
                  FUN_0017f3b4(param_3);
                }
              }
              goto LAB_0018a444;
            }
            local_95 = '\0';
            puVar10 = &local_d0;
          }
          FUN_00184894(param_3,puVar10);
        }
      }
    }
LAB_0018a444:
    pcVar8 = (char *)FUN_0017ef54(param_3);
    if (pcVar8 == (char *)0x0) goto LAB_0018a544;
    goto LAB_0018a348;
  }
  uVar16 = 0;
  uVar12 = 0;
  uVar15 = 0;
  uVar13 = 0;
LAB_0018a544:
  iVar7 = *(int *)(param_3 + 0x18);
  if (iVar7 == 1) {
LAB_0018a738:
    *(char *)(param_3 + 0x118) = (char)iVar7;
    goto LAB_0018a73c;
  }
  lVar11 = param_4[1];
  if (((*param_4 != lVar11) &&
      (*(undefined4 *)(lVar11 + -0x3c) = (undefined4)local_f0, cStack_97 != '\0')) &&
     (local_95 != '\0')) {
    *(undefined8 *)(lVar11 + -0x20) = uStack_d8;
  }
  if (cStack_96 == '\0') {
    if (cStack_98 == '\0') goto LAB_0018a73c;
    local_110 = (void *)CONCAT17(uStack_99,local_a0);
    uStack_118 = uStack_a8;
    local_120 = local_b0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    uStack_99 = 0;
    FUN_00185344(&local_100,uVar12,uVar16,uVar13,uVar15,param_3,&local_120);
    p_Var1 = local_e0;
    local_e0 = local_f8;
    uStack_e8 = local_100;
    local_100 = 0;
    local_f8 = (__shared_weak_count *)0x0;
    if (p_Var1 != (__shared_weak_count *)0x0) {
      p_Var2 = p_Var1 + 8;
      do {
        lVar11 = *(long *)p_Var2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
        if (bVar5) {
          *(long *)p_Var2 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*(long *)p_Var1 + 0x10))(p_Var1);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
      }
    }
    p_Var1 = local_f8;
    if (local_f8 != (__shared_weak_count *)0x0) {
      p_Var2 = local_f8 + 8;
      do {
        lVar11 = *(long *)p_Var2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
        if (bVar5) {
          *(long *)p_Var2 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*(long *)local_f8 + 0x10))(local_f8);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
      }
    }
    if ((local_120 & 1) != 0) {
      operator_delete(local_110);
    }
    puVar10 = (undefined8 *)param_4[1];
    if (puVar10 != (undefined8 *)param_4[2]) {
      *puVar10 = local_f0;
      puVar10[1] = uStack_e8;
      puVar10[2] = local_e0;
      if (local_e0 != (__shared_weak_count *)0x0) {
        p_Var1 = local_e0 + 8;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar5) {
            *(long *)p_Var1 = *(long *)p_Var1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *(uint *)(puVar10 + 7) = uStack_b8;
      puVar10[6] = CONCAT71(uStack_bf,uStack_c0);
      puVar10[5] = CONCAT71(uStack_c7,local_c8);
      puVar10[4] = local_d0;
      puVar10[3] = uStack_d8;
      param_4[1] = (long)(puVar10 + 8);
      goto LAB_0018a73c;
    }
  }
  else {
    local_d0 = uStack_d8;
    local_f0 = CONCAT44((undefined4)local_f0,(undefined4)local_f0);
    puVar10 = (undefined8 *)param_4[1];
    if (puVar10 != (undefined8 *)param_4[2]) {
      *puVar10 = local_f0;
      puVar10[1] = uStack_e8;
      puVar10[2] = local_e0;
      if (local_e0 != (__shared_weak_count *)0x0) {
        p_Var1 = local_e0 + 8;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar5) {
            *(long *)p_Var1 = *(long *)p_Var1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *(uint *)(puVar10 + 7) = uStack_b8;
      puVar10[6] = CONCAT71(uStack_bf,uStack_c0);
      puVar10[5] = CONCAT71(uStack_c7,local_c8);
      puVar10[4] = uStack_d8;
      puVar10[3] = uStack_d8;
      param_4[1] = (long)(puVar10 + 8);
      goto LAB_0018a73c;
    }
  }
  FUN_0018a7c0(param_4,&local_f0);
LAB_0018a73c:
  p_Var1 = local_e0;
  if (local_e0 != (__shared_weak_count *)0x0) {
    p_Var2 = local_e0 + 8;
    do {
      lVar11 = *(long *)p_Var2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar5) {
        *(long *)p_Var2 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*(long *)local_e0 + 0x10))(local_e0);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
    }
  }
  if ((local_b0 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_99,local_a0));
  }
  if (*(long *)(lVar6 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0018a7c0  FUN_0018a7c0 =====

void FUN_0018a7c0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  void *local_70;
  undefined8 *puStack_68;
  undefined8 *local_60;
  void *local_58;
  long *plStack_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  lVar8 = param_1[1] - *param_1 >> 6;
  uVar1 = lVar8 + 1;
  if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  plStack_50 = param_1 + 2;
  lVar6 = *plStack_50 - *param_1;
  uVar7 = lVar6 >> 5;
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  if (0x1fffffffffffffe < (ulong)(lVar6 >> 6)) {
    uVar1 = 0x3ffffffffffffff;
  }
  local_58 = (void *)0x0;
  if (uVar1 == 0) {
    local_70 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_70 = operator_new(uVar1 << 6);
  }
  puStack_68 = (undefined8 *)((long)local_70 + lVar8 * 0x40);
  local_58 = (void *)((long)local_70 + uVar1 * 0x40);
  uVar9 = *param_2;
  puStack_68[1] = param_2[1];
  *puStack_68 = uVar9;
  lVar8 = param_2[2];
  puStack_68[2] = lVar8;
  if (lVar8 != 0) {
    plVar2 = (long *)(lVar8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar10 = param_2[6];
  uVar9 = param_2[5];
  uVar12 = param_2[4];
  uVar11 = param_2[3];
  local_60 = puStack_68 + 8;
  *(undefined4 *)(puStack_68 + 7) = *(undefined4 *)(param_2 + 7);
  puStack_68[6] = uVar10;
  puStack_68[5] = uVar9;
  puStack_68[4] = uVar12;
  puStack_68[3] = uVar11;
  FUN_0018a8fc(param_1,&local_70);
  FUN_0018a98c(&local_70);
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0018a8fc  FUN_0018a8fc =====

void FUN_0018a8fc(long *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar5;
  
  puVar2 = (undefined8 *)*param_1;
  if ((undefined8 *)param_1[1] == puVar2) {
    lVar3 = param_2[1];
  }
  else {
    lVar3 = param_2[1];
    puVar4 = (undefined8 *)param_1[1];
    do {
      puVar5 = puVar4 + -8;
      *(undefined8 *)(lVar3 + -0x40) = *puVar5;
      uVar6 = puVar4[-7];
      *(undefined8 *)(lVar3 + -0x30) = puVar4[-6];
      *(undefined8 *)(lVar3 + -0x38) = uVar6;
      uVar6 = puVar4[-5];
      uVar1 = *(undefined4 *)(puVar4 + -1);
      uVar8 = puVar4[-2];
      uVar7 = puVar4[-3];
      puVar4[-7] = 0;
      puVar4[-6] = 0;
      *(undefined8 *)(lVar3 + -0x20) = puVar4[-4];
      *(undefined8 *)(lVar3 + -0x28) = uVar6;
      *(undefined4 *)(lVar3 + -8) = uVar1;
      *(undefined8 *)(lVar3 + -0x10) = uVar8;
      *(undefined8 *)(lVar3 + -0x18) = uVar7;
      lVar3 = param_2[1] + -0x40;
      param_2[1] = lVar3;
      puVar4 = puVar5;
    } while (puVar2 != puVar5);
    puVar2 = (undefined8 *)*param_1;
  }
  *param_1 = lVar3;
  param_2[1] = puVar2;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}


// ===== 0018a98c  FUN_0018a98c =====

void FUN_0018a98c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x40;
    FUN_001855c4(lVar2 + -0x38);
    lVar2 = param_1[2];
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 0018a9e0  FUN_0018a9e0 =====

void FUN_0018a9e0(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00209440;
  if (param_1[0x60] == (__shared_count)0x0) {
    FUN_00185e3c(param_1 + 0x58,0);
  }
  if (param_1[0x50] == (__shared_count)0x0) {
    FUN_0018ab10(param_1 + 0x38,0);
  }
  if (((byte)param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  std::__ndk1::__shared_count::~__shared_count(param_1);
  return;
}


// ===== 0018aa44  FUN_0018aa44 =====

void FUN_0018aa44(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00209440;
  if (param_1[0x60] == (__shared_count)0x0) {
    FUN_00185e3c(param_1 + 0x58,0);
  }
  if (param_1[0x50] == (__shared_count)0x0) {
    FUN_0018ab10(param_1 + 0x38,0);
  }
  if (((byte)param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018aab0  FUN_0018aab0 =====

void FUN_0018aab0(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\0') {
    FUN_00185e3c(param_1 + 0x58,0);
  }
  if (*(char *)(param_1 + 0x50) == '\0') {
    FUN_0018ab10(param_1 + 0x38,0);
  }
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x28));
  return;
}


// ===== 0018ab10  FUN_0018ab10 =====

void FUN_0018ab10(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = param_2;
  if (pvVar1 != (void *)0x0) {
    FUN_0018ab4c(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 0018ab4c  FUN_0018ab4c =====

void FUN_0018ab4c(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar4 = (void *)*param_1;
  if (pvVar4 == (void *)0x0) {
    return;
  }
  pvVar3 = (void *)param_1[1];
  pvVar2 = pvVar4;
  if (pvVar3 != pvVar4) {
    do {
      lVar1 = (long)pvVar3 + -0x40;
      pvVar3 = (void *)((long)pvVar3 + -0x48);
      FUN_001855c4(lVar1);
    } while (pvVar4 != pvVar3);
    pvVar2 = (void *)*param_1;
  }
  param_1[1] = pvVar4;
  operator_delete(pvVar2);
  return;
}


// ===== 0018abbc  FUN_0018abbc =====

void FUN_0018abbc(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x18) - 2U < 5) {
    uVar1 = *(ushort *)(param_1 + 0x16) & 7;
    if (uVar1 == 4) {
LAB_0018ac1c:
      FUN_0017eef0(param_1);
      while (uVar2 = FUN_0017f004(param_1), (uVar2 & 1) != 0) {
        if (*(char *)(param_1 + 0x118) != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0x18) - 2U < 5) {
          uVar1 = *(ushort *)(param_1 + 0x16) & 7;
          if (uVar1 != 3) {
            if (uVar1 != 6) goto LAB_0018acc8;
            if (*(char *)(param_2 + 3) == '\0') goto LAB_0018acdc;
            FUN_00184a48(param_1,param_2);
            break;
          }
        }
        else if (*(int *)(param_1 + 0x18) != 7) goto LAB_0018acc8;
        if (*(char *)(param_2 + 3) == '\0') {
          puVar3 = (undefined8 *)*param_2;
        }
        else {
          puVar3 = (undefined8 *)operator_new(0x18);
          puVar3[1] = 0;
          puVar3[2] = 0;
          *puVar3 = 0;
          *param_2 = puVar3;
          *(undefined1 *)(param_2 + 3) = 0;
        }
        FUN_0018acec(param_1,puVar3);
      }
      iVar4 = *(int *)(param_1 + 0x18);
      if (iVar4 != 1) {
        return;
      }
      goto LAB_0018accc;
    }
    if (uVar1 == 6) {
      if (*(char *)(param_2 + 3) != '\0') {
        FUN_00184a48(param_1,param_2);
        return;
      }
LAB_0018acdc:
      *(undefined1 *)(param_1 + 0x118) = 1;
      *(undefined4 *)(param_1 + 0x18) = 1;
      return;
    }
  }
  else if (*(int *)(param_1 + 0x18) == 9) goto LAB_0018ac1c;
LAB_0018acc8:
  iVar4 = 1;
LAB_0018accc:
  *(char *)(param_1 + 0x118) = (char)iVar4;
  return;
}


// ===== 0018acec  FUN_0018acec =====

void FUN_0018acec(undefined1 param_1 [16],undefined8 param_2,long param_3,long *param_4)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  char *pcVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong local_140;
  ulong uStack_138;
  void *local_130;
  undefined8 local_128;
  __shared_weak_count *local_120;
  undefined8 *local_118;
  undefined8 local_100;
  undefined8 uStack_f8;
  __shared_weak_count *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulong local_b8;
  ulong uStack_b0;
  undefined7 local_a8;
  undefined1 uStack_a1;
  char cStack_a0;
  char cStack_9f;
  char cStack_9e;
  char local_9d;
  long local_98;
  
  lVar6 = tpidr_el0;
  local_98 = *(long *)(lVar6 + 0x28);
  FUN_0017ee8c();
  local_b8 = 0;
  uStack_b0 = 0;
  cStack_a0 = '\0';
  cStack_9f = '\0';
  cStack_9e = '\0';
  uStack_f8 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_f0 = (__shared_weak_count *)0x0;
  uStack_e0 = NEON_fmov(0x3f800000,4);
  local_a8 = 0;
  uStack_a1 = 0;
  uStack_d0 = 0;
  local_9d = '\x01';
  local_d8 = 0x3f800000;
  uStack_c0 = 0x3f800000;
  uStack_c8 = uStack_e0;
  pcVar8 = (char *)FUN_0017ef54(param_3);
  if (pcVar8 != (char *)0x0) {
    uVar15 = 0;
    uVar17 = 0;
    uVar14 = 0;
    uVar18 = 0;
LAB_0018adbc:
    iVar7 = strcmp(pcVar8,"i");
    if (iVar7 == 0) {
      cStack_a0 = '\x01';
      uVar14 = FUN_001851a0(param_3);
      uVar18 = param_2;
    }
    else {
      iVar7 = strcmp(pcVar8,"o");
      if (iVar7 == 0) {
        uVar15 = FUN_001851a0(param_3);
        uVar17 = param_2;
      }
      else {
        iVar7 = strcmp(pcVar8,"t");
        if (iVar7 == 0) {
          dVar16 = (double)FUN_0017f0e8(param_3);
          local_100 = CONCAT44(local_100._4_4_,(float)dVar16);
        }
        else {
          iVar7 = strcmp(pcVar8,"s");
          if (iVar7 == 0) {
            cStack_9f = '\x01';
            puVar10 = &local_e8;
          }
          else {
            iVar7 = strcmp(pcVar8,"e");
            if (iVar7 != 0) {
              iVar7 = strcmp(pcVar8,"n");
              if (iVar7 == 0) {
                if (*(int *)(param_3 + 0x18) - 2U < 5) {
                  uVar3 = *(ushort *)(param_3 + 0x16) & 7;
                  if (uVar3 != 4) {
                    if (uVar3 != 5) goto LAB_0018b19c;
                    pcVar8 = (char *)FUN_0017f248(param_3);
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_b8,pcVar8);
                    goto LAB_0018aea0;
                  }
                }
                else if (*(int *)(param_3 + 0x18) != 9) {
LAB_0018b19c:
                  iVar7 = 1;
                  goto LAB_0018b1a0;
                }
                FUN_0017eef0(param_3);
                while (uVar9 = FUN_0017f004(param_3), (uVar9 & 1) != 0) {
                  if (*(char *)(param_3 + 0x118) != '\0') goto LAB_0018b35c;
                  if ((4 < *(int *)(param_3 + 0x18) - 2U) ||
                     ((*(ushort *)(param_3 + 0x16) & 7) != 5)) goto LAB_0018b19c;
                  uVar9 = local_b8 >> 1 & 0x7f;
                  if ((local_b8 & 1) != 0) {
                    uVar9 = uStack_b0;
                  }
                  pcVar8 = (char *)FUN_0017f248(param_3);
                  if (uVar9 == 0) {
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_b8,pcVar8);
                  }
                }
                if (*(int *)(param_3 + 0x18) != 1) goto LAB_0018aea0;
                iVar7 = 1;
                goto LAB_0018b1a0;
              }
              iVar7 = strcmp(pcVar8,"h");
              if (iVar7 == 0) {
                iVar7 = FUN_0017f084(param_3);
                cStack_9e = iVar7 != 0;
              }
              else {
                FUN_0017f3b4(param_3);
              }
              goto LAB_0018aea0;
            }
            local_9d = '\0';
            puVar10 = &uStack_d0;
          }
          FUN_00184a48(param_3,puVar10);
        }
      }
    }
LAB_0018aea0:
    pcVar8 = (char *)FUN_0017ef54(param_3);
    if (pcVar8 == (char *)0x0) goto LAB_0018afa0;
    goto LAB_0018adbc;
  }
  uVar18 = 0;
  uVar14 = 0;
  uVar17 = 0;
  uVar15 = 0;
LAB_0018afa0:
  iVar7 = *(int *)(param_3 + 0x18);
  if (iVar7 == 1) {
LAB_0018b1a0:
    *(char *)(param_3 + 0x118) = (char)iVar7;
    goto LAB_0018b35c;
  }
  lVar11 = param_4[1];
  if (((*param_4 != lVar11) &&
      (*(undefined4 *)(lVar11 + -0x44) = (undefined4)local_100, cStack_9f != '\0')) &&
     (local_9d != '\0')) {
    *(undefined4 *)(lVar11 + -8) = local_d8;
    *(undefined8 *)(lVar11 + -0x10) = uStack_e0;
    *(undefined8 *)(lVar11 + -0x18) = local_e8;
  }
  if (cStack_9e == '\0') {
    if (cStack_a0 == '\0') goto LAB_0018b35c;
    local_130 = (void *)CONCAT17(uStack_a1,local_a8);
    uStack_138 = uStack_b0;
    local_140 = local_b8;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a1 = 0;
    FUN_00185344(&local_128,uVar14,uVar18,uVar15,uVar17,param_3,&local_140);
    p_Var1 = local_f0;
    local_f0 = local_120;
    uStack_f8 = local_128;
    local_128 = 0;
    local_120 = (__shared_weak_count *)0x0;
    if (p_Var1 != (__shared_weak_count *)0x0) {
      p_Var2 = p_Var1 + 8;
      do {
        lVar11 = *(long *)p_Var2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
        if (bVar5) {
          *(long *)p_Var2 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*(long *)p_Var1 + 0x10))(p_Var1);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
      }
    }
    p_Var1 = local_120;
    if (local_120 != (__shared_weak_count *)0x0) {
      p_Var2 = local_120 + 8;
      do {
        lVar11 = *(long *)p_Var2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
        if (bVar5) {
          *(long *)p_Var2 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*(long *)local_120 + 0x10))(local_120);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
      }
    }
    if ((local_140 & 1) != 0) {
      operator_delete(local_130);
    }
    puVar10 = (undefined8 *)param_4[1];
    if (puVar10 != (undefined8 *)param_4[2]) {
      *puVar10 = local_100;
      puVar10[1] = uStack_f8;
      puVar10[2] = local_f0;
      if (local_f0 != (__shared_weak_count *)0x0) {
        p_Var1 = local_f0 + 8;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar5) {
            *(long *)p_Var1 = *(long *)p_Var1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar10[8] = CONCAT44(uStack_bc,uStack_c0);
      puVar10[7] = uStack_c8;
      puVar10[6] = uStack_d0;
      puVar10[5] = CONCAT44(uStack_d4,local_d8);
      puVar10[4] = uStack_e0;
      puVar10[3] = local_e8;
      param_4[1] = (long)(puVar10 + 9);
      goto LAB_0018b35c;
    }
    lVar11 = ((long)puVar10 - *param_4 >> 3) * -0x71c71c71c71c71c7;
    uVar9 = lVar11 + 1;
    if (0x38e38e38e38e38e < uVar9) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = param_4[2] - *param_4 >> 3;
    uVar13 = lVar12 * 0x1c71c71c71c71c72;
    if (uVar9 <= uVar13) {
      uVar9 = uVar13;
    }
    if (0x1c71c71c71c71c6 < (ulong)(lVar12 * -0x71c71c71c71c71c7)) {
      uVar9 = 0x38e38e38e38e38e;
    }
    FUN_0018b3f4(&local_128,uVar9,lVar11,param_4 + 2);
    *local_118 = local_100;
    local_118[1] = uStack_f8;
    local_118[2] = local_f0;
    if (local_f0 != (__shared_weak_count *)0x0) {
      p_Var1 = local_f0 + 8;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar5) {
          *(long *)p_Var1 = *(long *)p_Var1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_118[8] = CONCAT44(uStack_bc,uStack_c0);
    local_118[7] = uStack_c8;
    local_118[6] = uStack_d0;
    local_118[5] = CONCAT44(uStack_d4,local_d8);
    local_118[4] = uStack_e0;
    local_118[3] = local_e8;
  }
  else {
    uStack_c0 = local_d8;
    uStack_c8 = uStack_e0;
    uStack_d0 = local_e8;
    local_100 = CONCAT44((undefined4)local_100,(undefined4)local_100);
    puVar10 = (undefined8 *)param_4[1];
    if (puVar10 != (undefined8 *)param_4[2]) {
      *puVar10 = local_100;
      puVar10[1] = uStack_f8;
      puVar10[2] = local_f0;
      if (local_f0 != (__shared_weak_count *)0x0) {
        p_Var1 = local_f0 + 8;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar5) {
            *(long *)p_Var1 = *(long *)p_Var1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar10[8] = CONCAT44(uStack_bc,local_d8);
      puVar10[7] = uStack_e0;
      puVar10[6] = local_e8;
      puVar10[5] = CONCAT44(uStack_d4,local_d8);
      puVar10[4] = uStack_e0;
      puVar10[3] = local_e8;
      param_4[1] = (long)(puVar10 + 9);
      goto LAB_0018b35c;
    }
    lVar11 = ((long)puVar10 - *param_4 >> 3) * -0x71c71c71c71c71c7;
    uVar9 = lVar11 + 1;
    if (0x38e38e38e38e38e < uVar9) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = param_4[2] - *param_4 >> 3;
    uVar13 = lVar12 * 0x1c71c71c71c71c72;
    if (uVar9 <= uVar13) {
      uVar9 = uVar13;
    }
    if (0x1c71c71c71c71c6 < (ulong)(lVar12 * -0x71c71c71c71c71c7)) {
      uVar9 = 0x38e38e38e38e38e;
    }
    FUN_0018b3f4(&local_128,uVar9,lVar11,param_4 + 2);
    *local_118 = local_100;
    local_118[1] = uStack_f8;
    local_118[2] = local_f0;
    if (local_f0 != (__shared_weak_count *)0x0) {
      p_Var1 = local_f0 + 8;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar5) {
          *(long *)p_Var1 = *(long *)p_Var1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_118[8] = CONCAT44(uStack_bc,uStack_c0);
    local_118[7] = uStack_c8;
    local_118[6] = uStack_d0;
    local_118[5] = CONCAT44(uStack_d4,local_d8);
    local_118[4] = uStack_e0;
    local_118[3] = local_e8;
  }
  local_118 = local_118 + 9;
  FUN_0018b46c(param_4,&local_128);
  FUN_0018b4f8(&local_128);
LAB_0018b35c:
  p_Var1 = local_f0;
  if (local_f0 != (__shared_weak_count *)0x0) {
    p_Var2 = local_f0 + 8;
    do {
      lVar11 = *(long *)p_Var2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar5) {
        *(long *)p_Var2 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*(long *)local_f0 + 0x10))(local_f0);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
    }
  }
  if ((local_b8 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_a1,local_a8));
  }
  if (*(long *)(lVar6 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0018b3f4  FUN_0018b3f4 =====

void FUN_0018b3f4(undefined8 *param_1,ulong param_2,long param_3,undefined8 param_4)

{
  void *pvVar1;
  void *pvVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    if (0x38e38e38e38e38e < param_2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar1 = operator_new(param_2 * 0x48);
  }
  pvVar2 = (void *)((long)pvVar1 + param_3 * 0x48);
  *param_1 = pvVar1;
  param_1[1] = pvVar2;
  param_1[2] = pvVar2;
  param_1[3] = (void *)((long)pvVar1 + param_2 * 0x48);
  return;
}


// ===== 0018b46c  FUN_0018b46c =====

void FUN_0018b46c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)*param_1;
  if ((undefined8 *)param_1[1] == puVar1) {
    lVar2 = param_2[1];
  }
  else {
    lVar2 = param_2[1];
    puVar3 = (undefined8 *)param_1[1];
    do {
      puVar4 = puVar3 + -9;
      *(undefined8 *)(lVar2 + -0x48) = *puVar4;
      uVar5 = puVar3[-8];
      *(undefined8 *)(lVar2 + -0x38) = puVar3[-7];
      *(undefined8 *)(lVar2 + -0x40) = uVar5;
      uVar5 = puVar3[-6];
      uVar7 = puVar3[-1];
      uVar6 = puVar3[-2];
      uVar9 = puVar3[-3];
      uVar8 = puVar3[-4];
      puVar3[-8] = 0;
      puVar3[-7] = 0;
      *(undefined8 *)(lVar2 + -0x28) = puVar3[-5];
      *(undefined8 *)(lVar2 + -0x30) = uVar5;
      *(undefined8 *)(lVar2 + -0x18) = uVar9;
      *(undefined8 *)(lVar2 + -0x20) = uVar8;
      *(undefined8 *)(lVar2 + -8) = uVar7;
      *(undefined8 *)(lVar2 + -0x10) = uVar6;
      lVar2 = param_2[1] + -0x48;
      param_2[1] = lVar2;
      puVar3 = puVar4;
    } while (puVar1 != puVar4);
    puVar1 = (undefined8 *)*param_1;
  }
  *param_1 = lVar2;
  param_2[1] = puVar1;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}


// ===== 0018b4f8  FUN_0018b4f8 =====

void FUN_0018b4f8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x48;
    FUN_001855c4(lVar2 + -0x40);
    lVar2 = param_1[2];
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 0018b54c  FUN_0018b54c =====

void FUN_0018b54c(__shared_count *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  *(undefined ***)param_1 = &PTR_FUN_00209478;
  do {
    if (param_1[lVar1 + 200] == (__shared_count)0x0) {
      FUN_00185e3c(param_1 + lVar1 + 0xc0,0);
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x50);
  if (param_1[0x70] == (__shared_count)0x0) {
    FUN_00185e3c(param_1 + 0x68,0);
  }
  if (param_1[0x60] == (__shared_count)0x0) {
    FUN_00185e3c(param_1 + 0x58,0);
  }
  if (param_1[0x50] == (__shared_count)0x0) {
    FUN_0018ab10(param_1 + 0x38,0);
  }
  if (((byte)param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  std::__ndk1::__shared_count::~__shared_count(param_1);
  return;
}


// ===== 0018b5ec  FUN_0018b5ec =====

void FUN_0018b5ec(__shared_count *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  *(undefined ***)param_1 = &PTR_FUN_00209478;
  do {
    if (param_1[lVar1 + 200] == (__shared_count)0x0) {
      FUN_00185e3c(param_1 + lVar1 + 0xc0,0);
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x50);
  if (param_1[0x70] == (__shared_count)0x0) {
    FUN_00185e3c(param_1 + 0x68,0);
  }
  if (param_1[0x60] == (__shared_count)0x0) {
    FUN_00185e3c(param_1 + 0x58,0);
  }
  if (param_1[0x50] == (__shared_count)0x0) {
    FUN_0018ab10(param_1 + 0x38,0);
  }
  if (((byte)param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018b694  FUN_0018b694 =====

void FUN_0018b694(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (*(char *)(param_1 + lVar1 + 200) == '\0') {
      FUN_00185e3c(param_1 + lVar1 + 0xc0,0);
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x50);
  if (*(char *)(param_1 + 0x70) == '\0') {
    FUN_00185e3c(param_1 + 0x68,0);
  }
  if (*(char *)(param_1 + 0x60) == '\0') {
    FUN_00185e3c(param_1 + 0x58,0);
  }
  if (*(char *)(param_1 + 0x50) == '\0') {
    FUN_0018ab10(param_1 + 0x38,0);
  }
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x28));
  return;
}


// ===== 0018b730  FUN_0018b730 =====

void FUN_0018b730(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_1 + 3) = 0x60001;
  param_1[6] = 0x3f800000;
  *(undefined4 *)(param_1 + 8) = 0x42c80000;
  uVar3 = NEON_fmov(0x3f800000,4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[5] = uVar3;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(undefined4 *)((long)param_1 + 100) = 0;
  lVar2 = 0;
  do {
    lVar1 = lVar2 + 0x10;
    *(undefined1 *)((long)param_1 + lVar2 + 0x70) = 1;
    *(undefined4 *)((long)param_1 + lVar2 + 0x68) = 0;
    lVar2 = lVar1;
  } while (lVar1 != 0x50);
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((long)param_1 + 0xbc) = 1;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}


// ===== 0018b7ac  FUN_0018b7ac =====

void FUN_0018b7ac(long param_1,long param_2)

{
  ushort uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x18) - 2U < 5) {
    uVar1 = *(ushort *)(param_1 + 0x16) & 7;
    if (uVar1 == 4) {
LAB_0018b80c:
      FUN_0017eef0(param_1);
      while (uVar2 = FUN_0017f004(param_1), (uVar2 & 1) != 0) {
        if (*(char *)(param_1 + 0x118) != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0x18) - 2U < 5) {
          uVar1 = *(ushort *)(param_1 + 0x16) & 7;
          if (uVar1 != 3) {
            if (uVar1 != 6) goto LAB_0018b898;
            if (*(char *)(param_2 + 0x18) == '\0') goto LAB_0018b8ac;
            FUN_00184b50(param_1,param_2);
            break;
          }
        }
        else if (*(int *)(param_1 + 0x18) != 7) goto LAB_0018b898;
        uVar3 = FUN_0018bd54(param_2);
        FUN_0018b8bc(param_1,uVar3);
      }
      iVar4 = *(int *)(param_1 + 0x18);
      if (iVar4 != 1) {
        return;
      }
      goto LAB_0018b89c;
    }
    if (uVar1 == 6) {
      if (*(char *)(param_2 + 0x18) != '\0') {
        FUN_00184b50(param_1,param_2);
        return;
      }
LAB_0018b8ac:
      *(undefined1 *)(param_1 + 0x118) = 1;
      *(undefined4 *)(param_1 + 0x18) = 1;
      return;
    }
  }
  else if (*(int *)(param_1 + 0x18) == 9) goto LAB_0018b80c;
LAB_0018b898:
  iVar4 = 1;
LAB_0018b89c:
  *(char *)(param_1 + 0x118) = (char)iVar4;
  return;
}


// ===== 0018b8bc  FUN_0018b8bc =====

void FUN_0018b8bc(undefined1 param_1 [16],undefined8 param_2,long param_3,long *param_4)

{
  __shared_weak_count *p_Var1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  __shared_weak_count *p_Var6;
  int iVar7;
  char *pcVar8;
  ulong uVar9;
  void **ppvVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong local_130;
  ulong uStack_128;
  void *local_120;
  undefined8 local_110;
  __shared_weak_count *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  __shared_weak_count *local_f0;
  void *local_e8;
  void *local_e0;
  undefined8 uStack_d8;
  void *local_d0;
  void *local_c8;
  undefined8 local_c0;
  ulong local_b0;
  ulong uStack_a8;
  undefined7 local_a0;
  undefined1 uStack_99;
  char cStack_98;
  char cStack_97;
  char cStack_96;
  char local_95;
  long local_90;
  
  lVar5 = tpidr_el0;
  local_90 = *(long *)(lVar5 + 0x28);
  FUN_0017ee8c();
  local_b0 = 0;
  uStack_a8 = 0;
  cStack_98 = '\0';
  cStack_97 = '\0';
  cStack_96 = '\0';
  local_a0 = 0;
  uStack_99 = 0;
  local_c0 = 0;
  local_95 = '\x01';
  uStack_d8 = 0;
  local_e0 = (void *)0x0;
  local_c8 = (void *)0x0;
  local_d0 = (void *)0x0;
  uStack_f8 = 0;
  local_100 = 0;
  local_e8 = (void *)0x0;
  local_f0 = (__shared_weak_count *)0x0;
  pcVar8 = (char *)FUN_0017ef54(param_3);
  if (pcVar8 != (char *)0x0) {
    uVar13 = 0;
    uVar15 = 0;
    uVar12 = 0;
    uVar16 = 0;
LAB_0018b96c:
    iVar7 = strcmp(pcVar8,"i");
    if (iVar7 == 0) {
      cStack_98 = '\x01';
      uVar12 = FUN_001851a0(param_3);
      uVar16 = param_2;
    }
    else {
      iVar7 = strcmp(pcVar8,"o");
      if (iVar7 == 0) {
        uVar13 = FUN_001851a0(param_3);
        uVar15 = param_2;
      }
      else {
        iVar7 = strcmp(pcVar8,"t");
        if (iVar7 == 0) {
          dVar14 = (double)FUN_0017f0e8(param_3);
          local_100 = CONCAT44(local_100._4_4_,(float)dVar14);
        }
        else {
          iVar7 = strcmp(pcVar8,"s");
          if (iVar7 == 0) {
            cStack_97 = '\x01';
            ppvVar10 = &local_e8;
          }
          else {
            iVar7 = strcmp(pcVar8,"e");
            if (iVar7 != 0) {
              iVar7 = strcmp(pcVar8,"n");
              if (iVar7 == 0) {
                if (*(int *)(param_3 + 0x18) - 2U < 5) {
                  uVar2 = *(ushort *)(param_3 + 0x16) & 7;
                  if (uVar2 != 4) {
                    if (uVar2 != 5) goto LAB_0018bca8;
                    pcVar8 = (char *)FUN_0017f248(param_3);
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_b0,pcVar8);
                    goto LAB_0018ba54;
                  }
                }
                else if (*(int *)(param_3 + 0x18) != 9) {
LAB_0018bca8:
                  iVar7 = 1;
                  goto LAB_0018bcac;
                }
                FUN_0017eef0(param_3);
                while (uVar9 = FUN_0017f004(param_3), (uVar9 & 1) != 0) {
                  if (*(char *)(param_3 + 0x118) != '\0') goto LAB_0018bcb0;
                  if ((4 < *(int *)(param_3 + 0x18) - 2U) ||
                     ((*(ushort *)(param_3 + 0x16) & 7) != 5)) goto LAB_0018bca8;
                  uVar9 = local_b0 >> 1 & 0x7f;
                  if ((local_b0 & 1) != 0) {
                    uVar9 = uStack_a8;
                  }
                  pcVar8 = (char *)FUN_0017f248(param_3);
                  if (uVar9 == 0) {
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_b0,pcVar8);
                  }
                }
                if (*(int *)(param_3 + 0x18) != 1) goto LAB_0018ba54;
                iVar7 = 1;
                goto LAB_0018bcac;
              }
              iVar7 = strcmp(pcVar8,"h");
              if (iVar7 == 0) {
                iVar7 = FUN_0017f084(param_3);
                cStack_96 = iVar7 != 0;
              }
              else {
                FUN_0017f3b4(param_3);
              }
              goto LAB_0018ba54;
            }
            local_95 = '\0';
            ppvVar10 = &local_d0;
          }
          FUN_00184b50(param_3,ppvVar10);
        }
      }
    }
LAB_0018ba54:
    pcVar8 = (char *)FUN_0017ef54(param_3);
    if (pcVar8 == (char *)0x0) goto LAB_0018bb54;
    goto LAB_0018b96c;
  }
  uVar16 = 0;
  uVar12 = 0;
  uVar15 = 0;
  uVar13 = 0;
LAB_0018bb54:
  iVar7 = *(int *)(param_3 + 0x18);
  if (iVar7 == 1) {
LAB_0018bcac:
    *(char *)(param_3 + 0x118) = (char)iVar7;
  }
  else {
    lVar11 = param_4[1];
    if (*param_4 != lVar11) {
      *(undefined4 *)(lVar11 + -0x44) = (undefined4)local_100;
      if (((cStack_97 != '\0') && (local_95 != '\0')) &&
         ((undefined8 *)(lVar11 + -0x30) != &local_100)) {
        FUN_0017e774(lVar11 + -0x18,local_e8,local_e0);
      }
    }
    if (cStack_96 == '\0') {
      if (cStack_98 == '\0') goto LAB_0018bcb0;
      local_120 = (void *)CONCAT17(uStack_99,local_a0);
      uStack_128 = uStack_a8;
      local_130 = local_b0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      uStack_99 = 0;
      FUN_00185344(&local_110,uVar12,uVar16,uVar13,uVar15,param_3,&local_130);
      p_Var6 = local_f0;
      local_f0 = local_108;
      uStack_f8 = local_110;
      local_110 = 0;
      local_108 = (__shared_weak_count *)0x0;
      if (p_Var6 != (__shared_weak_count *)0x0) {
        p_Var1 = p_Var6 + 8;
        do {
          lVar11 = *(long *)p_Var1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar4) {
            *(long *)p_Var1 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var6);
        }
      }
      p_Var6 = local_108;
      if (local_108 != (__shared_weak_count *)0x0) {
        p_Var1 = local_108 + 8;
        do {
          lVar11 = *(long *)p_Var1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar4) {
            *(long *)p_Var1 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*(long *)local_108 + 0x10))(local_108);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var6);
        }
      }
      if ((local_130 & 1) != 0) {
        operator_delete(local_120);
      }
    }
    else {
      FUN_0017e774(&local_d0,local_e8,local_e0);
      local_100 = CONCAT44((undefined4)local_100,(undefined4)local_100);
    }
    FUN_0018bda0(param_4,&local_100);
  }
LAB_0018bcb0:
  if (local_d0 != (void *)0x0) {
    local_c8 = local_d0;
    operator_delete(local_d0);
  }
  if (local_e8 != (void *)0x0) {
    local_e0 = local_e8;
    operator_delete(local_e8);
  }
  p_Var6 = local_f0;
  if (local_f0 != (__shared_weak_count *)0x0) {
    p_Var1 = local_f0 + 8;
    do {
      lVar11 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*(long *)local_f0 + 0x10))(local_f0);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var6);
    }
  }
  if ((local_b0 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_99,local_a0));
  }
  if (*(long *)(lVar5 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0018bd54  FUN_0018bd54 =====

undefined8 * FUN_0018bd54(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (*(char *)(param_1 + 3) == '\0') {
    puVar1 = (undefined8 *)*param_1;
  }
  else {
    FUN_0018c110(param_1);
    puVar1 = (undefined8 *)operator_new(0x18);
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    *param_1 = puVar1;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return puVar1;
}


// ===== 0018bda0  FUN_0018bda0 =====

void FUN_0018bda0(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_70 [16];
  long local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar6 = param_1 + 2;
  lVar7 = param_1[1];
  if (lVar7 == *plVar6) {
    lVar7 = (lVar7 - *param_1 >> 3) * -0x71c71c71c71c71c7;
    uVar1 = lVar7 + 1;
    if (0x38e38e38e38e38e < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = *plVar6 - *param_1 >> 3;
    uVar5 = lVar4 * 0x1c71c71c71c71c72;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0x1c71c71c71c71c6 < (ulong)(lVar4 * -0x71c71c71c71c71c7)) {
      uVar1 = 0x38e38e38e38e38e;
    }
    uVar3 = FUN_0018bf3c(auStack_70,uVar1,lVar7,plVar6);
    FUN_0018bed8(uVar3,plVar6,local_60,param_2);
    local_60 = local_60 + 0x48;
    FUN_0018bfb4(param_1,auStack_70);
    FUN_0018c018(auStack_70);
  }
  else {
    FUN_0018bed8(param_1,plVar6,lVar7,param_2);
    param_1[1] = lVar7 + 0x48;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018bed8  FUN_0018bed8 =====

void FUN_0018bed8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_3 = *param_4;
  param_3[1] = param_4[1];
  lVar4 = param_4[2];
  param_3[2] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_0017e4a4(param_3 + 3,param_4 + 3);
  FUN_0017e4a4(param_3 + 6,param_4 + 6);
  return;
}


// ===== 0018bf3c  FUN_0018bf3c =====

void FUN_0018bf3c(undefined8 *param_1,ulong param_2,long param_3,undefined8 param_4)

{
  void *pvVar1;
  void *pvVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    if (0x38e38e38e38e38e < param_2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar1 = operator_new(param_2 * 0x48);
  }
  pvVar2 = (void *)((long)pvVar1 + param_3 * 0x48);
  *param_1 = pvVar1;
  param_1[1] = pvVar2;
  param_1[2] = pvVar2;
  param_1[3] = (void *)((long)pvVar1 + param_2 * 0x48);
  return;
}


// ===== 0018bfb4  FUN_0018bfb4 =====

void FUN_0018bfb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_0018c098(param_1 + 2,*param_1,param_1[1],param_2 + 1);
  uVar1 = *param_1;
  *param_1 = param_2[1];
  param_2[1] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar1;
  *param_2 = param_2[1];
  return;
}


// ===== 0018c018  FUN_0018c018 =====

void FUN_0018c018(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar1) {
    param_1[2] = lVar3 + -0x48;
    pvVar2 = *(void **)(lVar3 + -0x18);
    if (pvVar2 != (void *)0x0) {
      *(void **)(lVar3 + -0x10) = pvVar2;
      operator_delete(pvVar2);
    }
    pvVar2 = *(void **)(lVar3 + -0x30);
    if (pvVar2 != (void *)0x0) {
      *(void **)(lVar3 + -0x28) = pvVar2;
      operator_delete(pvVar2);
    }
    FUN_001855c4(lVar3 + -0x40);
    lVar3 = param_1[2];
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 0018c098  FUN_0018c098 =====

void FUN_0018c098(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_3 != param_2) {
    lVar2 = *param_4;
    do {
      puVar1 = param_3 + -9;
      *(undefined8 *)(lVar2 + -0x48) = *puVar1;
      uVar3 = param_3[-8];
      *(undefined8 *)(lVar2 + -0x38) = param_3[-7];
      *(undefined8 *)(lVar2 + -0x40) = uVar3;
      param_3[-8] = 0;
      param_3[-7] = 0;
      *(undefined8 *)(lVar2 + -0x30) = 0;
      *(undefined8 *)(lVar2 + -0x28) = 0;
      *(undefined8 *)(lVar2 + -0x20) = 0;
      uVar3 = param_3[-6];
      *(undefined8 *)(lVar2 + -0x28) = param_3[-5];
      *(undefined8 *)(lVar2 + -0x30) = uVar3;
      *(undefined8 *)(lVar2 + -0x20) = param_3[-4];
      param_3[-6] = 0;
      param_3[-5] = 0;
      param_3[-4] = 0;
      *(undefined8 *)(lVar2 + -0x18) = 0;
      *(undefined8 *)(lVar2 + -0x10) = 0;
      *(undefined8 *)(lVar2 + -8) = 0;
      uVar3 = param_3[-3];
      *(undefined8 *)(lVar2 + -0x10) = param_3[-2];
      *(undefined8 *)(lVar2 + -0x18) = uVar3;
      *(undefined8 *)(lVar2 + -8) = param_3[-1];
      param_3[-3] = 0;
      param_3[-2] = 0;
      param_3[-1] = 0;
      lVar2 = *param_4 + -0x48;
      *param_4 = lVar2;
      param_3 = puVar1;
    } while (param_2 != puVar1);
  }
  return;
}


// ===== 0018c110  FUN_0018c110 =====

void FUN_0018c110(undefined8 *param_1)

{
  void *pvVar1;
  
  if (*(char *)(param_1 + 3) == '\0') {
    pvVar1 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar1 != (void *)0x0) {
      FUN_0018c174(pvVar1);
      operator_delete(pvVar1);
      return;
    }
    return;
  }
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    param_1[1] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 0018c174  FUN_0018c174 =====

void FUN_0018c174(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar2 = (void *)*param_1;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  pvVar1 = pvVar2;
  pvVar3 = (void *)param_1[1];
  if ((void *)param_1[1] != pvVar2) {
    do {
      pvVar1 = *(void **)((long)pvVar3 + -0x18);
      if (pvVar1 != (void *)0x0) {
        *(void **)((long)pvVar3 + -0x10) = pvVar1;
        operator_delete(pvVar1);
      }
      pvVar1 = *(void **)((long)pvVar3 + -0x30);
      pvVar4 = (void *)((long)pvVar3 + -0x48);
      if (pvVar1 != (void *)0x0) {
        *(void **)((long)pvVar3 + -0x28) = pvVar1;
        operator_delete(pvVar1);
      }
      FUN_001855c4((long)pvVar3 + -0x40);
      pvVar3 = pvVar4;
    } while (pvVar2 != pvVar4);
    pvVar1 = (void *)*param_1;
  }
  param_1[1] = pvVar2;
  operator_delete(pvVar1);
  return;
}


// ===== 0018c204  FUN_0018c204 =====

void FUN_0018c204(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_002094b0;
  FUN_0018c2e8(param_1 + 0x18);
  std::__ndk1::__shared_count::~__shared_count(param_1);
  return;
}


// ===== 0018c234  FUN_0018c234 =====

void FUN_0018c234(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_002094b0;
  FUN_0018c2e8(param_1 + 0x18);
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018c278  FUN_0018c278 =====

void FUN_0018c278(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 3) = 0x70001;
  uVar1 = DAT_00146368;
  *(undefined4 *)(param_1 + 0xc) = 0x42c80000;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)(param_1 + 0x11) = 1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x1c) = uVar1;
  *(undefined2 *)((long)param_1 + 0x94) = 0x101;
  return;
}


// ===== 0018c2e8  FUN_0018c2e8 =====

void FUN_0018c2e8(byte *param_1)

{
  FUN_0018c110(param_1 + 0x70);
  if (param_1[0x68] == 0) {
    FUN_00185e3c(param_1 + 0x60,0);
  }
  if (param_1[0x58] == 0) {
    FUN_00185e3c(param_1 + 0x50,0);
  }
  if (param_1[0x48] == 0) {
    FUN_00185e3c(param_1 + 0x40,0);
  }
  if (param_1[0x38] == 0) {
    FUN_001861c8(param_1 + 0x30,0);
  }
  if (param_1[0x28] == 0) {
    FUN_001861c8(param_1 + 0x20,0);
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 0018c388  FUN_0018c388 =====

void FUN_0018c388(__shared_count *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  *(undefined ***)param_1 = &PTR_FUN_002094e8;
  do {
    if (param_1[lVar1 + 0x110] == (__shared_count)0x0) {
      FUN_00185e3c(param_1 + lVar1 + 0x108,0);
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x50);
  if (param_1[0xb8] == (__shared_count)0x0) {
    FUN_00185e3c(param_1 + 0xb0,0);
  }
  FUN_0018c2e8(param_1 + 0x18);
  std::__ndk1::__shared_count::~__shared_count(param_1);
  return;
}


// ===== 0018c3f8  FUN_0018c3f8 =====

void FUN_0018c3f8(__shared_count *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  *(undefined ***)param_1 = &PTR_FUN_002094e8;
  do {
    if (param_1[lVar1 + 0x110] == (__shared_count)0x0) {
      FUN_00185e3c(param_1 + lVar1 + 0x108,0);
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x50);
  if (param_1[0xb8] == (__shared_count)0x0) {
    FUN_00185e3c(param_1 + 0xb0,0);
  }
  FUN_0018c2e8(param_1 + 0x18);
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018c470  FUN_0018c470 =====

void FUN_0018c470(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (*(char *)(param_1 + lVar1 + 0x110) == '\0') {
      FUN_00185e3c(param_1 + lVar1 + 0x108,0);
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x50);
  if (*(char *)(param_1 + 0xb8) == '\0') {
    FUN_00185e3c(param_1 + 0xb0,0);
  }
  FUN_0018c2e8(param_1 + 0x18);
  return;
}


// ===== 0018c4d0  FUN_0018c4d0 =====

void FUN_0018c4d0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  *(undefined4 *)(param_1 + 3) = 0x80001;
  uVar2 = DAT_00146368;
  *(undefined4 *)(param_1 + 0xc) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(undefined1 *)((long)param_1 + 0x94) = 1;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined8 *)((long)param_1 + 0x1c) = uVar2;
  *(undefined4 *)((long)param_1 + 0xac) = 0;
  lVar3 = 0;
  do {
    lVar1 = lVar3 + 0x10;
    *(undefined1 *)((long)param_1 + lVar3 + 0xb8) = 1;
    *(undefined4 *)((long)param_1 + lVar3 + 0xb0) = 0;
    lVar3 = lVar1;
  } while (lVar1 != 0x50);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)((long)param_1 + 0x104) = 1;
  return;
}


// ===== 0018c574  FUN_0018c574 =====

void FUN_0018c574(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  void *local_70;
  undefined4 *local_68;
  undefined4 *local_60;
  void *local_58;
  long *plStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = param_1[1] - *param_1 >> 2;
  uVar1 = lVar5 + 1;
  if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  plStack_50 = param_1 + 2;
  lVar3 = *plStack_50 - *param_1;
  uVar4 = lVar3 >> 1;
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  if (0x1ffffffffffffffe < (ulong)(lVar3 >> 2)) {
    uVar1 = 0x3fffffffffffffff;
  }
  local_58 = (void *)0x0;
  if (uVar1 == 0) {
    local_70 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_70 = operator_new(uVar1 << 2);
  }
  local_68 = (undefined4 *)((long)local_70 + lVar5 * 4);
  local_58 = (void *)((long)local_70 + uVar1 * 4);
  local_60 = local_68 + 1;
  *local_68 = *param_2;
  FUN_0018c688(param_1,&local_70);
  if ((long)local_60 - (long)local_68 != 0) {
    local_60 = local_60 + (((long)local_60 - (long)local_68) - 4U >> 2 ^ 0xffffffffffffffff);
  }
  if (local_70 != (void *)0x0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018c688  FUN_0018c688 =====

void FUN_0018c688(undefined8 *param_1,undefined8 *param_2)

{
  void *__src;
  void *__dest;
  size_t __n;
  undefined8 uVar1;
  
  __src = (void *)*param_1;
  __n = param_1[1] - (long)__src;
  __dest = (void *)(param_2[1] - __n);
  param_2[1] = __dest;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
    __dest = (void *)param_2[1];
  }
  uVar1 = *param_1;
  *param_1 = __dest;
  param_2[1] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar1;
  *param_2 = param_2[1];
  return;
}


// ===== 0018c700  FUN_0018c700 =====

long * FUN_0018c700(long *param_1,byte *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar4 = *(ulong *)(param_2 + 8);
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
    uVar4 = (ulong)(*param_2 >> 1);
  }
  uVar4 = FUN_0018763c(auStack_70,pbVar1,uVar4);
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar11 = NEON_cnt(uVar7,1);
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar8 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & uVar4;
    }
    else {
      uVar9 = uVar4;
      if (uVar7 <= uVar4) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar4 / uVar7;
        }
        uVar9 = uVar4 - uVar9 * uVar7;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar9 * 8);
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) {
        do {
          uVar6 = plVar5[1];
          if (uVar6 == uVar4) {
            uVar6 = FUN_00187acc(param_1 + 4,plVar5 + 2,param_2);
            if ((uVar6 & 1) != 0) break;
          }
          else {
            if (uVar8 < 2) {
              uVar6 = uVar6 & uVar7 - 1;
            }
            else if (uVar7 <= uVar6) {
              uVar2 = 0;
              if (uVar7 != 0) {
                uVar2 = uVar6 / uVar7;
              }
              uVar6 = uVar6 - uVar2 * uVar7;
            }
            if (uVar6 != uVar9) goto LAB_0018c80c;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      goto LAB_0018c810;
    }
  }
LAB_0018c80c:
  plVar5 = (long *)0x0;
LAB_0018c810:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018c848  FUN_0018c848 =====

void FUN_0018c848(__shared_count *param_1)

{
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018c874  FUN_0018c874 =====

long * FUN_0018c874(long *param_1,byte *param_2,undefined8 param_3,undefined8 *param_4)

{
  byte *pbVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong unaff_x27;
  undefined2 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  long *local_80;
  long *plStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar4 = *(ulong *)(param_2 + 8);
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
    uVar4 = (ulong)(*param_2 >> 1);
  }
  uVar4 = FUN_0018763c(&local_80,pbVar1,uVar4);
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar13 = NEON_cnt(uVar11,1);
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar9 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    if (uVar9 < 2) {
      unaff_x27 = uVar11 - 1 & uVar4;
    }
    else {
      unaff_x27 = uVar4;
      if (uVar11 <= uVar4) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = uVar4 / uVar11;
        }
        unaff_x27 = uVar4 - uVar7 * uVar11;
      }
    }
    plVar10 = *(long **)(*param_1 + unaff_x27 * 8);
    if (plVar10 != (long *)0x0) {
      do {
        plVar10 = (long *)*plVar10;
        if (plVar10 == (long *)0x0) goto LAB_0018c98c;
        uVar7 = plVar10[1];
        if (uVar7 != uVar4) {
          if (uVar9 < 2) {
            uVar7 = uVar7 & uVar11 - 1;
          }
          else if (uVar11 <= uVar7) {
            uVar2 = 0;
            if (uVar11 != 0) {
              uVar2 = uVar7 / uVar11;
            }
            uVar7 = uVar7 - uVar2 * uVar11;
          }
          if (uVar7 != unaff_x27) goto LAB_0018c98c;
        }
        plVar5 = (long *)FUN_00187acc(param_1 + 4,plVar10 + 2,param_2);
      } while (((ulong)plVar5 & 1) == 0);
      uVar13 = 0;
      goto LAB_0018cad4;
    }
  }
LAB_0018c98c:
  plVar10 = param_1 + 2;
  plVar6 = (long *)operator_new(0x38);
  plVar5 = (long *)*param_4;
  lVar15 = plVar5[1];
  lVar14 = *plVar5;
  plVar6[4] = plVar5[2];
  plVar6[3] = lVar15;
  plVar6[2] = lVar14;
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = 0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  local_70 = 1;
  *plVar6 = 0;
  plVar6[1] = uVar4;
  fVar16 = (float)(param_1[3] + 1);
  local_80 = plVar6;
  plStack_78 = plVar10;
  if ((uVar11 == 0) ||
     (fVar17 = *(float *)(param_1 + 4) * (float)uVar11, plVar5 = plVar6,
     fVar17 < fVar16 != (NAN(fVar17) || NAN(fVar16)))) {
    uVar11 = (ulong)(uVar11 < 3 || (uVar11 & uVar11 - 1) != 0) | uVar11 << 1;
    uVar9 = (ulong)(fVar16 / *(float *)(param_1 + 4));
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    plVar5 = (long *)FUN_0018cb0c(param_1,uVar9);
    uVar11 = param_1[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x27 = uVar11 - 1 & uVar4;
    }
    else {
      unaff_x27 = uVar4;
      if (uVar11 <= uVar4) {
        uVar9 = 0;
        if (uVar11 != 0) {
          uVar9 = uVar4 / uVar11;
        }
        unaff_x27 = uVar4 - uVar9 * uVar11;
      }
    }
  }
  plVar8 = *(long **)(*param_1 + unaff_x27 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar6 = param_1[2];
    param_1[2] = (long)plVar6;
    *(long **)(*param_1 + unaff_x27 * 8) = plVar10;
    if (*local_80 != 0) {
      uVar4 = *(ulong *)(*local_80 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar4 = uVar4 & uVar11 - 1;
      }
      else if (uVar11 <= uVar4) {
        uVar9 = 0;
        if (uVar11 != 0) {
          uVar9 = uVar4 / uVar11;
        }
        uVar4 = uVar4 - uVar9 * uVar11;
      }
      *(long **)(*param_1 + uVar4 * 8) = local_80;
    }
  }
  else {
    *plVar6 = *plVar8;
    *plVar8 = (long)plVar6;
  }
  uVar13 = 1;
  param_1[3] = param_1[3] + 1;
  plVar10 = local_80;
LAB_0018cad4:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar5,uVar13);
  }
  return plVar10;
}


// ===== 0018cb0c  FUN_0018cb0c =====

void FUN_0018cb0c(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__ndk1::__next_prime(param_2);
  }
  uVar5 = param_1[1];
  uVar1 = param_2;
  if (uVar5 < param_2) goto LAB_0018cbd0;
  if (uVar5 <= param_2) {
    return;
  }
  uVar1 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
  if (uVar5 < 3) {
LAB_0018cbb8:
    uVar1 = std::__ndk1::__next_prime(uVar1);
  }
  else {
    uVar12 = NEON_cnt(uVar5,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    if (1 < (uint)CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11)) goto LAB_0018cbb8;
    if (1 < uVar1) {
      uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
    }
  }
  if (uVar1 <= param_2) {
    uVar1 = param_2;
  }
  if (uVar5 <= uVar1) {
    return;
  }
LAB_0018cbd0:
  if (uVar1 == 0) {
    pvVar2 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    param_1[1] = 0;
  }
  else {
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar2 = operator_new(uVar1 << 3);
    pvVar4 = (void *)*param_1;
    *param_1 = (long)pvVar2;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
    uVar5 = 0;
    param_1[1] = uVar1;
    do {
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      uVar5 = plVar8[1];
      uVar12 = NEON_cnt(uVar1,1);
      uVar11 = NEON_uaddlv(uVar12,1);
      uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
      if (uVar7 < 2) {
        uVar5 = uVar5 & uVar1 - 1;
      }
      else if (uVar1 <= uVar5) {
        uVar10 = 0;
        if (uVar1 != 0) {
          uVar10 = uVar5 / uVar1;
        }
        uVar5 = uVar5 - uVar10 * uVar1;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar8;
      if (plVar6 != (long *)0x0) {
        do {
          uVar10 = plVar6[1];
          if (uVar7 < 2) {
            uVar10 = uVar10 & uVar1 - 1;
          }
          else if (uVar1 <= uVar10) {
            uVar3 = 0;
            if (uVar1 != 0) {
              uVar3 = uVar10 / uVar1;
            }
            uVar10 = uVar10 - uVar3 * uVar1;
          }
          plVar9 = plVar6;
          if (uVar10 != uVar5) {
            if (*(long *)(*param_1 + uVar10 * 8) == 0) {
              *(long **)(*param_1 + uVar10 * 8) = plVar8;
              uVar5 = uVar10;
            }
            else {
              if (*plVar6 != 0) {
                uVar3 = FUN_00187acc(param_1 + 4,plVar6 + 2,*plVar6 + 0x10);
                while ((uVar3 & 1) != 0) {
                  plVar9 = (long *)*plVar9;
                  if (*plVar9 == 0) break;
                  uVar3 = FUN_00187acc(param_1 + 4,plVar6 + 2,*plVar9 + 0x10);
                }
              }
              *plVar8 = *plVar9;
              *plVar9 = **(long **)(*param_1 + uVar10 * 8);
              **(undefined8 **)(*param_1 + uVar10 * 8) = plVar6;
              plVar9 = plVar8;
            }
          }
          plVar6 = (long *)*plVar9;
          plVar8 = plVar9;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  return;
}


// ===== 0018cdc4  FUN_0018cdc4 =====

void FUN_0018cdc4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_1 + 8);
  *puVar5 = *param_2;
  puVar5[1] = param_2[1];
  lVar4 = param_2[2];
  puVar5[2] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_001779a4(puVar5 + 3,param_2 + 3);
  *(undefined1 *)(puVar5 + 6) = *(undefined1 *)(param_2 + 6);
  FUN_001779a4(puVar5 + 7,param_2 + 7);
  *(undefined1 *)(puVar5 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined8 **)(param_1 + 8) = puVar5 + 0xb;
  return;
}


// ===== 0018ce50  FUN_0018ce50 =====

void FUN_0018ce50(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_60 [16];
  undefined8 *local_50;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  uVar1 = (param_1[1] - *param_1 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = param_1[2] - *param_1 >> 3;
  uVar8 = lVar7 * 0x5d1745d1745d1746;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (0x1745d1745d1745c < (ulong)(lVar7 * 0x2e8ba2e8ba2e8ba3)) {
    uVar1 = 0x2e8ba2e8ba2e8ba;
  }
  FUN_0018cfa0(auStack_60,uVar1);
  puVar6 = local_50;
  *local_50 = *param_2;
  local_50[1] = param_2[1];
  lVar7 = param_2[2];
  local_50[2] = lVar7;
  if (lVar7 != 0) {
    plVar2 = (long *)(lVar7 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_001779a4(local_50 + 3,param_2 + 3);
  *(undefined1 *)(puVar6 + 6) = *(undefined1 *)(param_2 + 6);
  FUN_001779a4(puVar6 + 7,param_2 + 7);
  *(undefined1 *)(puVar6 + 10) = *(undefined1 *)(param_2 + 10);
  local_50 = local_50 + 0xb;
  FUN_0018d018(param_1,auStack_60);
  FUN_0018d07c(auStack_60);
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018cfa0  FUN_0018cfa0 =====

void FUN_0018cfa0(undefined8 *param_1,ulong param_2,long param_3,undefined8 param_4)

{
  void *pvVar1;
  void *pvVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    if (0x2e8ba2e8ba2e8ba < param_2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar1 = operator_new(param_2 * 0x58);
  }
  pvVar2 = (void *)((long)pvVar1 + param_3 * 0x58);
  *param_1 = pvVar1;
  param_1[1] = pvVar2;
  param_1[2] = pvVar2;
  param_1[3] = (void *)((long)pvVar1 + param_2 * 0x58);
  return;
}


// ===== 0018d018  FUN_0018d018 =====

void FUN_0018d018(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_0018d0fc(param_1 + 2,*param_1,param_1[1],param_2 + 1);
  uVar1 = *param_1;
  *param_1 = param_2[1];
  param_2[1] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar1;
  *param_2 = param_2[1];
  return;
}


// ===== 0018d07c  FUN_0018d07c =====

void FUN_0018d07c(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar1) {
    param_1[2] = lVar3 + -0x58;
    pvVar2 = *(void **)(lVar3 + -0x20);
    if (pvVar2 != (void *)0x0) {
      *(void **)(lVar3 + -0x18) = pvVar2;
      operator_delete(pvVar2);
    }
    pvVar2 = *(void **)(lVar3 + -0x40);
    if (pvVar2 != (void *)0x0) {
      *(void **)(lVar3 + -0x38) = pvVar2;
      operator_delete(pvVar2);
    }
    FUN_001855c4(lVar3 + -0x50);
    lVar3 = param_1[2];
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 0018d0fc  FUN_0018d0fc =====

void FUN_0018d0fc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_3 != param_2) {
    lVar3 = *param_4;
    do {
      puVar2 = param_3 + -0xb;
      *(undefined8 *)(lVar3 + -0x58) = *puVar2;
      uVar4 = param_3[-10];
      *(undefined8 *)(lVar3 + -0x48) = param_3[-9];
      *(undefined8 *)(lVar3 + -0x50) = uVar4;
      param_3[-10] = 0;
      param_3[-9] = 0;
      *(undefined8 *)(lVar3 + -0x40) = 0;
      *(undefined8 *)(lVar3 + -0x38) = 0;
      *(undefined8 *)(lVar3 + -0x30) = 0;
      uVar4 = param_3[-8];
      *(undefined8 *)(lVar3 + -0x38) = param_3[-7];
      *(undefined8 *)(lVar3 + -0x40) = uVar4;
      *(undefined8 *)(lVar3 + -0x30) = param_3[-6];
      uVar1 = *(undefined1 *)(param_3 + -5);
      param_3[-7] = 0;
      param_3[-6] = 0;
      param_3[-8] = 0;
      *(undefined8 *)(lVar3 + -0x18) = 0;
      *(undefined8 *)(lVar3 + -0x10) = 0;
      *(undefined8 *)(lVar3 + -0x20) = 0;
      *(undefined1 *)(lVar3 + -0x28) = uVar1;
      uVar4 = param_3[-4];
      *(undefined8 *)(lVar3 + -0x18) = param_3[-3];
      *(undefined8 *)(lVar3 + -0x20) = uVar4;
      *(undefined8 *)(lVar3 + -0x10) = param_3[-2];
      param_3[-4] = 0;
      param_3[-3] = 0;
      param_3[-2] = 0;
      *(undefined1 *)(lVar3 + -8) = *(undefined1 *)(param_3 + -1);
      lVar3 = *param_4 + -0x58;
      *param_4 = lVar3;
      param_3 = puVar2;
    } while (param_2 != puVar2);
  }
  return;
}


// ===== 0018d184  FUN_0018d184 =====

void FUN_0018d184(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00209558;
  FUN_0017fe78(param_1 + 0x18);
  std::__ndk1::__shared_count::~__shared_count(param_1);
  return;
}


// ===== 0018d1b4  FUN_0018d1b4 =====

void FUN_0018d1b4(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00209558;
  FUN_0017fe78(param_1 + 0x18);
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018d1f8  FUN_0018d1f8 =====

void FUN_0018d1f8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = *param_5;
  param_1[2] = *param_4;
  param_1[3] = uVar1;
  return;
}


// ===== 0018d214  FUN_0018d214 =====

void FUN_0018d214(undefined8 *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar6;
  double dVar4;
  undefined8 uVar5;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  double dVar18;
  float fVar20;
  float fVar22;
  double dVar21;
  float fVar23;
  float fVar25;
  double dVar24;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  float local_48;
  undefined8 local_44;
  undefined8 local_3c;
  float local_34;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar8 = *param_1;
  uVar12 = param_1[3];
  fVar7 = (float)uVar8;
  fVar11 = (float)param_1[1];
  fVar10 = (float)((ulong)uVar8 >> 0x20);
  fVar9 = (float)((ulong)param_1[1] >> 0x20);
  fVar2 = ABS(fVar11 - fVar7);
  fVar6 = ABS(fVar9 - fVar10);
  fVar13 = (float)param_1[2];
  fVar15 = (float)((ulong)param_1[2] >> 0x20);
  fVar17 = ABS(fVar13 - fVar11);
  fVar19 = ABS(fVar15 - fVar9);
  fVar14 = (float)uVar12;
  fVar16 = (float)((ulong)uVar12 >> 0x20);
  fVar20 = ABS(fVar14 - fVar13);
  fVar22 = ABS(fVar16 - fVar15);
  fVar23 = ABS(fVar14 - fVar7);
  fVar25 = ABS(fVar16 - fVar10);
  fVar3 = fVar2;
  if (fVar2 <= fVar6) {
    fVar3 = fVar6;
  }
  fVar6 = (float)NEON_fminnm(fVar2,fVar6);
  fVar2 = fVar17;
  if (fVar17 <= fVar19) {
    fVar2 = fVar19;
  }
  fVar19 = (float)NEON_fminnm(fVar17,fVar19);
  fVar17 = fVar20;
  if (fVar20 <= fVar22) {
    fVar17 = fVar22;
  }
  fVar22 = (float)NEON_fminnm(fVar20,fVar22);
  fVar20 = fVar23;
  if (fVar23 <= fVar25) {
    fVar20 = fVar25;
  }
  fVar23 = (float)NEON_fminnm(fVar23,fVar25);
  dVar18 = (double)NEON_fmadd((double)fVar19,0x3fd8000000000000,(double)fVar2);
  dVar4 = (double)NEON_fmadd((double)fVar6,0x3fd8000000000000,(double)fVar3);
  dVar21 = (double)NEON_fmadd((double)fVar22,0x3fd8000000000000,(double)fVar17);
  dVar24 = (double)NEON_fmadd((double)fVar23,0x3fd8000000000000,(double)fVar20);
  fVar3 = (float)dVar18 + (float)dVar4 + (float)dVar21;
  dVar4 = (double)(fVar3 - (float)dVar24);
  if (dVar4 != DAT_00146338 && dVar4 < DAT_00146338 == (NAN(dVar4) || NAN(DAT_00146338))) {
    fVar3 = (fVar11 + fVar7) * 0.5;
    fVar2 = (fVar9 + fVar10) * 0.5;
    uVar5 = CONCAT44(fVar2,fVar3);
    fVar14 = (fVar14 + fVar13) * 0.5;
    fVar16 = (fVar16 + fVar15) * 0.5;
    local_58 = CONCAT44(fVar16,fVar14);
    fVar6 = (fVar13 + fVar11) * 0.5;
    fVar10 = (fVar15 + fVar9) * 0.5;
    local_44 = NEON_ext(uVar8,uVar5,4,1);
    fVar11 = (fVar6 + fVar3) * 0.5;
    local_34 = (fVar10 + fVar2) * 0.5;
    fVar3 = (fVar14 + fVar6) * 0.5;
    fVar2 = (fVar16 + fVar10) * 0.5;
    uStack_60 = CONCAT44(fVar2,fVar3);
    local_3c = NEON_ext(uVar5,CONCAT44(local_34,fVar11),4,1);
    local_68 = CONCAT44((fVar2 + local_34) * 0.5,(fVar3 + fVar11) * 0.5);
    uStack_50 = uVar12;
    local_48 = fVar7;
    local_30 = local_68;
    fVar2 = (float)FUN_0018d214(&local_48);
    fVar3 = (float)FUN_0018d214(&local_68);
    fVar3 = fVar3 + fVar2;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar3);
}


// ===== 0018d380  FUN_0018d380 =====

void FUN_0018d380(undefined8 *param_1,float param_2,float param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((param_2 == 0.0) && (param_3 == 1.0)) {
    uVar4 = *param_4;
    uVar2 = param_4[3];
    uVar1 = param_4[2];
    param_1[1] = param_4[1];
    *param_1 = uVar4;
    param_1[3] = uVar2;
    param_1[2] = uVar1;
    return;
  }
  fVar3 = (param_3 - param_2) / (1.0 - param_2);
  fVar5 = (float)*param_4;
  fVar7 = (float)param_4[1];
  fVar6 = (float)((ulong)*param_4 >> 0x20);
  fVar9 = (float)((ulong)param_4[1] >> 0x20);
  fVar12 = (float)param_4[2];
  fVar13 = (float)((ulong)param_4[2] >> 0x20);
  fVar14 = (float)param_4[3];
  fVar15 = (float)((ulong)param_4[3] >> 0x20);
  fVar5 = fVar5 + (fVar7 - fVar5) * param_2;
  fVar6 = fVar6 + (fVar9 - fVar6) * param_2;
  fVar7 = fVar7 + (fVar12 - fVar7) * param_2;
  fVar9 = fVar9 + (fVar13 - fVar9) * param_2;
  fVar12 = fVar12 + (fVar14 - fVar12) * param_2;
  fVar13 = fVar13 + (fVar15 - fVar13) * param_2;
  fVar8 = fVar7 + (fVar12 - fVar7) * param_2;
  fVar10 = fVar9 + (fVar13 - fVar9) * param_2;
  fVar5 = fVar5 + (fVar7 - fVar5) * param_2;
  fVar6 = fVar6 + (fVar9 - fVar6) * param_2;
  fVar5 = fVar5 + (fVar8 - fVar5) * param_2;
  fVar6 = fVar6 + (fVar10 - fVar6) * param_2;
  fVar9 = fVar8 + (fVar12 - fVar8) * fVar3;
  fVar11 = fVar10 + (fVar13 - fVar10) * fVar3;
  fVar7 = fVar5 + (fVar8 - fVar5) * fVar3;
  fVar8 = fVar6 + (fVar10 - fVar6) * fVar3;
  *param_1 = CONCAT44(fVar6,fVar5);
  param_1[1] = CONCAT44(fVar8,fVar7);
  fVar7 = fVar7 + (fVar9 - fVar7) * fVar3;
  fVar8 = fVar8 + (fVar11 - fVar8) * fVar3;
  param_1[2] = CONCAT44(fVar8,fVar7);
  param_1[3] = CONCAT44(fVar8 + ((fVar11 + ((fVar13 + (fVar15 - fVar13) * fVar3) - fVar11) * fVar3)
                                - fVar8) * fVar3,
                        fVar7 + ((fVar9 + ((fVar12 + (fVar14 - fVar12) * fVar3) - fVar9) * fVar3) -
                                fVar7) * fVar3);
  return;
}


// ===== 0018d428  FUN_0018d428 =====

float FUN_0018d428(float param_1,undefined8 *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar7;
  double dVar6;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_a4;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  fVar3 = (float)FUN_0018d214();
  fVar2 = DAT_00144b80;
  fVar10 = 1.0;
  if ((fVar3 < param_1 == (NAN(fVar3) || NAN(param_1))) &&
     (ABS(param_1 - fVar3) < DAT_00144b68 == (NAN(ABS(param_1 - fVar3)) || NAN(DAT_00144b68)))) {
    uVar11 = *param_2;
    uVar5 = param_2[3];
    local_a4 = 1.0;
    fVar12 = (float)param_2[1];
    fVar3 = (float)((ulong)uVar11 >> 0x20);
    fVar13 = (float)((ulong)param_2[1] >> 0x20);
    fVar14 = (float)param_2[2];
    fVar15 = (float)((ulong)param_2[2] >> 0x20);
    fVar10 = 0.5;
    while( true ) {
      fVar8 = fVar12 + (fVar14 - fVar12) * fVar10;
      fVar9 = fVar13 + (fVar15 - fVar13) * fVar10;
      fVar4 = (float)uVar11 + (fVar12 - (float)uVar11) * fVar10;
      fVar7 = fVar3 + (fVar13 - fVar3) * fVar10;
      uStack_80 = CONCAT44(fVar7,fVar4);
      fVar4 = fVar4 + (fVar8 - fVar4) * fVar10;
      fVar7 = fVar7 + (fVar9 - fVar7) * fVar10;
      local_78 = CONCAT44(fVar7,fVar4);
      local_70 = CONCAT44(fVar7 + ((fVar9 + ((fVar15 - fVar9) +
                                            ((float)((ulong)uVar5 >> 0x20) - fVar15) * fVar10) *
                                            fVar10) - fVar7) * fVar10,
                          fVar4 + ((fVar8 + ((fVar14 - fVar8) + ((float)uVar5 - fVar14) * fVar10) *
                                            fVar10) - fVar4) * fVar10);
      local_88 = uVar11;
      fVar4 = (float)FUN_0018d214(&local_88);
      if (ABS(fVar4 - param_1) < fVar2 != (NAN(ABS(fVar4 - param_1)) || NAN(fVar2))) break;
      if (fVar4 < param_1 == (NAN(fVar4) || NAN(param_1))) {
        local_a4 = fVar10;
        fVar10 = fVar10 * 0.5;
      }
      else {
        dVar6 = (double)NEON_fmadd((double)(local_a4 - fVar10),0x3fe0000000000000,(double)fVar10);
        fVar10 = (float)dVar6;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return fVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018d57c  FUN_0018d57c =====

void FUN_0018d57c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar7 = *param_1;
  uVar5 = param_1[3];
  uVar3 = param_1[2];
  param_3[1] = param_1[1];
  *param_3 = uVar7;
  param_3[3] = uVar5;
  param_3[2] = uVar3;
  fVar1 = (float)FUN_0018d428(param_3);
  *param_2 = *param_3;
  fVar2 = (float)*param_3;
  fVar4 = (float)((ulong)*param_3 >> 0x20);
  param_2[1] = CONCAT44(fVar4 + ((float)((ulong)param_3[1] >> 0x20) - fVar4) * fVar1,
                        fVar2 + ((float)param_3[1] - fVar2) * fVar1);
  fVar2 = (float)param_3[1];
  fVar4 = (float)((ulong)param_3[1] >> 0x20);
  param_2[2] = CONCAT44(fVar4 + ((float)((ulong)param_3[2] >> 0x20) - fVar4) * fVar1,
                        fVar2 + ((float)param_3[2] - fVar2) * fVar1);
  fVar2 = (float)param_3[2];
  fVar4 = (float)((ulong)param_3[2] >> 0x20);
  fVar2 = fVar2 + ((float)param_3[3] - fVar2) * fVar1;
  fVar4 = fVar4 + ((float)((ulong)param_3[3] >> 0x20) - fVar4) * fVar1;
  param_3[2] = CONCAT44(fVar4,fVar2);
  fVar6 = (float)param_2[2];
  fVar8 = (float)((ulong)param_2[2] >> 0x20);
  fVar9 = fVar6 + (fVar2 - fVar6) * fVar1;
  fVar10 = fVar8 + (fVar4 - fVar8) * fVar1;
  param_3[1] = CONCAT44(fVar10,fVar9);
  fVar2 = (float)param_2[1];
  fVar4 = (float)((ulong)param_2[1] >> 0x20);
  fVar2 = fVar2 + (fVar6 - fVar2) * fVar1;
  fVar4 = fVar4 + (fVar8 - fVar4) * fVar1;
  param_2[2] = CONCAT44(fVar4,fVar2);
  fVar2 = fVar2 + (fVar9 - fVar2) * fVar1;
  fVar4 = fVar4 + (fVar10 - fVar4) * fVar1;
  *(float *)(param_2 + 3) = fVar2;
  *param_3 = CONCAT44(fVar4,fVar2);
  *(float *)((long)param_2 + 0x1c) = fVar4;
  return;
}


// ===== 0018d620  FUN_0018d620 =====

undefined1  [16] FUN_0018d620(float param_1,undefined8 *param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = param_1 * param_1;
  fVar6 = (float)NEON_fmadd(param_1,0xc0800000,0x3f800000);
  fVar1 = (float)NEON_fmadd(param_1,0xc0000000,fVar5 * 3.0);
  fVar6 = fVar6 + fVar5 * 3.0;
  fVar4 = (1.0 - param_1) * -(1.0 - param_1);
  uVar2 = NEON_fmov(0x40400000,4);
  auVar3._0_4_ = ((((float)*param_2 * fVar4 + (float)param_2[1] * fVar6) - (float)param_2[2] * fVar1
                  ) + (float)param_2[3] * fVar5) * (float)uVar2;
  auVar3._4_4_ = ((((float)((ulong)*param_2 >> 0x20) * fVar4 +
                   (float)((ulong)param_2[1] >> 0x20) * fVar6) -
                  (float)((ulong)param_2[2] >> 0x20) * fVar1) +
                 (float)((ulong)param_2[3] >> 0x20) * fVar5) * (float)((ulong)uVar2 >> 0x20);
  auVar3._8_8_ = 0;
  return auVar3;
}


// ===== 0018d678  FUN_0018d678 =====

float FUN_0018d678(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)param_1;
  fVar2 = 0.0;
  if ((fVar1 < 0.0 == NAN(fVar1)) && (fVar1 == 1.0 || fVar1 < 1.0 != NAN(fVar1))) {
    fVar1 = (float)FUN_0018d620(param_1);
    fVar1 = atan2f((float)param_1,fVar1);
    fVar2 = (float)((double)fVar1 * DAT_00146340);
  }
  return fVar2;
}


// ===== 0018d6d0  FUN_0018d6d0 =====

void FUN_0018d6d0(undefined8 *param_1,int param_2,int param_3,uint param_4)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  __shared_weak_count *this;
  undefined8 *puVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (((param_2 != 0) && (param_3 != 0)) && ((param_4 & 0xff) != 0)) {
    puVar4 = (undefined8 *)operator_new(0x38);
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar6 = puVar4 + 3;
    *puVar6 = 0;
    *puVar4 = &PTR_FUN_00209590;
    puVar4[4] = 0;
    puVar4[5] = 0;
    *(undefined8 *)((long)puVar4 + 0x2d) = 0;
    *(undefined2 *)((long)puVar4 + 0x35) = 1;
    FUN_0018d9d0(puVar6,param_2,param_3,param_4);
    this = (__shared_weak_count *)param_1[1];
    *param_1 = puVar6;
    param_1[1] = puVar4;
    if (this != (__shared_weak_count *)0x0) {
      p_Var1 = this + 8;
      do {
        lVar5 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*(long *)this + 0x10))(this);
        std::__ndk1::__shared_weak_count::__release_weak(this);
        return;
      }
    }
  }
  return;
}


// ===== 0018d7b0  FUN_0018d7b0 =====

void FUN_0018d7b0(long *param_1,long param_2,int param_3,int param_4,int param_5,char param_6)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  __shared_weak_count *this;
  char local_88 [4];
  int local_84;
  int local_80;
  int iStack_7c;
  long local_78;
  long *local_70;
  int *piStack_68;
  int *local_60;
  int *piStack_58;
  char *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  local_88[0] = param_6;
  local_84 = param_5;
  local_80 = param_4;
  iStack_7c = param_3;
  local_78 = param_2;
  if ((((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) &&
     ((param_5 != 0 && (param_6 != '\0')))) {
    puVar5 = (undefined8 *)operator_new(0x38);
    local_70 = &local_78;
    piStack_68 = &iStack_7c;
    *puVar5 = &PTR_FUN_00209590;
    local_60 = &local_80;
    piStack_58 = &local_84;
    puVar5[1] = 0;
    puVar5[2] = 0;
    local_50 = local_88;
    FUN_0018dcb8(puVar5 + 3);
    this = (__shared_weak_count *)param_1[1];
    *param_1 = (long)(puVar5 + 3);
    param_1[1] = (long)puVar5;
    if (this != (__shared_weak_count *)0x0) {
      p_Var1 = this + 8;
      do {
        lVar6 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*(long *)this + 0x10))(this);
        std::__ndk1::__shared_weak_count::__release_weak(this);
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018d8b8  FUN_0018d8b8 =====

void FUN_0018d8b8(long *param_1,int param_2,int param_3,uint param_4)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  __shared_weak_count *this;
  undefined8 *puVar6;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    puVar5 = (undefined8 *)operator_new(0x38);
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar6 = puVar5 + 3;
    *puVar6 = 0;
    *puVar5 = &PTR_FUN_00209590;
    puVar5[4] = 0;
    puVar5[5] = 0;
    *(undefined8 *)((long)puVar5 + 0x2d) = 0;
    *(undefined2 *)((long)puVar5 + 0x35) = 1;
    FUN_0018d9d0(puVar6,param_2,param_3,param_4);
    this = (__shared_weak_count *)param_1[1];
    *param_1 = (long)puVar6;
    param_1[1] = (long)puVar5;
    if (this != (__shared_weak_count *)0x0) {
      p_Var1 = this + 8;
      do {
        lVar4 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*(long *)this + 0x10))(this);
        std::__ndk1::__shared_weak_count::__release_weak(this);
        return;
      }
    }
  }
  else if (((*(int *)(lVar4 + 8) != param_2) || (*(int *)(lVar4 + 0xc) != param_3)) ||
          ((uint)*(byte *)(lVar4 + 0x1c) != (param_4 & 0xff))) {
    FUN_0018d9d0(lVar4,param_2,param_3,param_4);
    return;
  }
  return;
}


// ===== 0018d9d0  FUN_0018d9d0 =====

void FUN_0018d9d0(undefined8 *param_1,int param_2,int param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  
  if ((*(char *)((long)param_1 + 0x1d) != '\0') && ((void *)*param_1 != (void *)0x0)) {
    operator_delete((void *)*param_1);
  }
  if ((byte)(param_4 - 1U) < 3) {
    iVar4 = *(int *)(&DAT_0014714c + (long)(char)(param_4 - 1U) * 4);
  }
  else {
    iVar4 = 1;
  }
  *(int *)(param_1 + 3) = iVar4;
  uVar1 = iVar4 * param_2 + 0x1fU >> 3 & 0x1ffffffc;
  uVar2 = uVar1 * param_3;
  *(int *)(param_1 + 1) = param_2;
  *(int *)((long)param_1 + 0xc) = param_3;
  *(char *)((long)param_1 + 0x1c) = param_4;
  *(uint *)(param_1 + 2) = uVar1;
  *(uint *)((long)param_1 + 0x14) = uVar2;
  pvVar3 = operator_new((ulong)uVar2);
  *param_1 = pvVar3;
  return;
}


// ===== 0018da68  FUN_0018da68 =====

undefined4 FUN_0018da68(long *param_1)

{
  if (*param_1 != 0) {
    return *(undefined4 *)(*param_1 + 0x10);
  }
  return 0;
}


// ===== 0018da80  FUN_0018da80 =====

undefined4 FUN_0018da80(long *param_1)

{
  if (*param_1 != 0) {
    return *(undefined4 *)(*param_1 + 8);
  }
  return 0;
}


// ===== 0018da98  FUN_0018da98 =====

undefined4 FUN_0018da98(long *param_1)

{
  if (*param_1 != 0) {
    return *(undefined4 *)(*param_1 + 0xc);
  }
  return 0;
}


// ===== 0018dac8  FUN_0018dac8 =====

undefined8 FUN_0018dac8(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    return *(undefined8 *)*param_1;
  }
  return 0;
}


// ===== 0018dae0  FUN_0018dae0 =====

undefined8 FUN_0018dae0(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    return *(undefined8 *)*param_1;
  }
  return 0;
}


// ===== 0018daf8  FUN_0018daf8 =====

bool FUN_0018daf8(long *param_1)

{
  return *param_1 != 0;
}


// ===== 0018db08  FUN_0018db08 =====

undefined1 FUN_0018db08(long *param_1)

{
  if (*param_1 != 0) {
    return *(undefined1 *)(*param_1 + 0x1c);
  }
  return 0;
}


// ===== 0018db24  FUN_0018db24 =====

void FUN_0018db24(long *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  double dVar16;
  
  dVar8 = DAT_00146380;
  uVar7 = DAT_00146360;
  uVar6 = DAT_00146350;
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    return;
  }
  if ((*(char *)((long)param_1 + 0x1c) == '\x03') && (*(int *)((long)param_1 + 0xc) != 0)) {
    uVar12 = *(uint *)(param_1 + 1);
    lVar10 = *param_1;
    uVar9 = 0;
    uVar14 = uVar12;
    do {
      if (uVar14 != 0) {
        lVar11 = 0;
        lVar1 = lVar10 + (ulong)((int)param_1[2] * uVar9);
        do {
          uVar14 = *(uint *)(lVar1 + lVar11 * 4);
          uVar2 = uVar14 >> 0x18;
          if (uVar2 != 0) {
            uVar12 = uVar14 >> 0x10 & 0xff;
            uVar13 = uVar14 >> 8 & 0xff;
            uVar14 = uVar14 & 0xff;
            if (uVar2 != 0xff) {
              uVar3 = uVar12 * 0xff;
              uVar4 = uVar13 * 0xff;
              uVar5 = uVar14 * 0xff;
              uVar12 = 0;
              if (uVar2 != 0) {
                uVar12 = uVar3 / uVar2;
              }
              uVar13 = 0;
              if (uVar2 != 0) {
                uVar13 = uVar4 / uVar2;
              }
              uVar14 = 0;
              if (uVar2 != 0) {
                uVar14 = uVar5 / uVar2;
              }
            }
            uVar15 = NEON_fmadd((double)uVar13,uVar6,(double)uVar12 * dVar8);
            dVar16 = (double)NEON_fmadd((double)uVar14,uVar7,uVar15);
            *(int *)(lVar1 + lVar11 * 4) = (int)dVar16 << 0x18;
            uVar12 = *(uint *)(param_1 + 1);
          }
          lVar11 = lVar11 + 1;
          uVar14 = uVar12;
        } while ((uint)lVar11 < uVar12);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)((long)param_1 + 0xc));
  }
  return;
}


// ===== 0018dc14  FUN_0018dc14 =====

void FUN_0018dc14(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00209590;
  if ((param_1[0x35] != (__shared_count)0x0) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  std::__ndk1::__shared_count::~__shared_count(param_1);
  return;
}


// ===== 0018dc54  FUN_0018dc54 =====

void FUN_0018dc54(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00209590;
  if ((param_1[0x35] != (__shared_count)0x0) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018dcb8  FUN_0018dcb8 =====

void FUN_0018dcb8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)*param_3;
  uVar5 = *(undefined4 *)param_3[1];
  iVar1 = *(int *)param_3[2];
  iVar2 = *(int *)param_3[3];
  bVar3 = *(byte *)param_3[4];
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 1) = uVar5;
  *(int *)((long)param_1 + 0xc) = iVar1;
  uVar4 = bVar3 - 1;
  *(undefined4 *)((long)param_1 + 0x1b) = 0;
  *(byte *)((long)param_1 + 0x1c) = bVar3;
  *(int *)(param_1 + 2) = iVar2;
  *(int *)((long)param_1 + 0x14) = iVar2 * iVar1;
  *param_1 = uVar6;
  if (uVar4 < 3) {
    uVar5 = *(undefined4 *)(&DAT_0014714c + (long)(char)uVar4 * 4);
  }
  else {
    uVar5 = 1;
  }
  *(undefined4 *)(param_1 + 3) = uVar5;
  return;
}


// ===== 0018ddc8  FUN_0018ddc8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018ddc8(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
                 undefined4 param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_001462a8;
  uVar1 = _DAT_001462a0;
  *param_5 = 0;
  *(undefined4 *)(param_5 + 1) = 0;
  param_5[3] = 0;
  param_5[4] = 0;
  param_5[2] = 0;
  *(undefined2 *)(param_5 + 0xd) = 0;
  *(undefined4 *)(param_5 + 5) = 0x3f800000;
  *(undefined4 *)((long)param_5 + 100) = 0x3f800000;
  *(undefined8 *)((long)param_5 + 0x4c) = uVar2;
  *(undefined8 *)((long)param_5 + 0x44) = uVar1;
  *(undefined8 *)((long)param_5 + 0x5c) = uVar2;
  *(undefined8 *)((long)param_5 + 0x54) = uVar1;
  *(undefined4 *)((long)param_5 + 0x2c) = param_3;
  *(undefined4 *)(param_5 + 6) = param_4;
  return;
}


// ===== 0018de60  FUN_0018de60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018de60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = DAT_00146368;
  *(undefined4 *)((long)param_7 + 0x2c) = param_1;
  *(undefined4 *)(param_7 + 6) = param_2;
  uVar2 = _UNK_001462a8;
  uVar1 = _DAT_001462a0;
  *(undefined4 *)(param_7 + 1) = 0;
  param_7[3] = 0;
  param_7[4] = 0;
  param_7[2] = 0;
  *(undefined2 *)(param_7 + 0xd) = 0;
  *(undefined4 *)((long)param_7 + 0x34) = param_4;
  *(undefined4 *)(param_7 + 7) = param_5;
  *(undefined4 *)(param_7 + 5) = 0x3f800000;
  *(undefined4 *)((long)param_7 + 100) = 0x3f800000;
  *param_7 = uVar3;
  *(undefined8 *)((long)param_7 + 0x4c) = uVar2;
  *(undefined8 *)((long)param_7 + 0x44) = uVar1;
  *(undefined8 *)((long)param_7 + 0x5c) = uVar2;
  *(undefined8 *)((long)param_7 + 0x54) = uVar1;
  *(undefined4 *)((long)param_7 + 0x3c) = param_3;
  *(undefined4 *)(param_7 + 8) = param_6;
  return;
}


// ===== 0018dea8  FUN_0018dea8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018dea8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = 1;
  uVar3 = _UNK_001462a8;
  uVar2 = _DAT_001462a0;
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[0x10] = 0x3f800000;
  *(undefined8 *)(param_1 + 10) = uVar3;
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0xe) = uVar3;
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  param_1[1] = uVar1;
  *(undefined2 *)(param_1 + 0x11) = 0;
  return;
}


// ===== 0018df18  FUN_0018df18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018df18(undefined8 *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar2 = _UNK_001462a8;
  uVar1 = _DAT_001462a0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  *(undefined2 *)((long)param_1 + 0x44) = 0;
  if (param_2 != (int *)0x0) {
    param_1[1] = param_2;
    if (*param_2 == 1) {
      uVar3 = 3;
    }
    else {
      if (*param_2 != 0) {
        return;
      }
      uVar3 = 2;
    }
    *(undefined4 *)param_1 = uVar3;
  }
  return;
}


// ===== 0018df64  FUN_0018df64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018df64(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  __shared_weak_count *p_Var2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  __shared_weak_count *this;
  
  uVar6 = _UNK_001462a8;
  uVar3 = _DAT_001462a0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  param_1[5] = uVar6;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar3;
  *(undefined2 *)((long)param_1 + 0x44) = 0;
  uVar7 = FUN_0018daf8(param_2);
  if ((uVar7 & 1) != 0) {
    *(undefined4 *)param_1 = 4;
    uVar3 = *param_2;
    lVar8 = param_2[1];
    if (lVar8 != 0) {
      plVar1 = (long *)(lVar8 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    this = (__shared_weak_count *)param_1[3];
    param_1[2] = uVar3;
    param_1[3] = lVar8;
    if (this != (__shared_weak_count *)0x0) {
      p_Var2 = this + 8;
      do {
        lVar8 = *(long *)p_Var2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
        if (bVar5) {
          *(long *)p_Var2 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*(long *)this + 0x10))(this);
        std::__ndk1::__shared_weak_count::__release_weak(this);
        return;
      }
    }
  }
  return;
}


// ===== 0018e018  FUN_0018e018 =====

void FUN_0018e018(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  *(undefined8 *)(param_1 + 0x3e) = *(undefined8 *)((long)param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}


// ===== 0018e02c  FUN_0018e02c =====

void FUN_0018e02c(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *__src;
  undefined4 *puVar3;
  long lVar4;
  size_t sVar5;
  ulong uVar6;
  void *pvVar7;
  
  lVar4 = param_1[2];
  puVar3 = (undefined4 *)*param_1;
  sVar5 = (long)param_3 - (long)param_2;
  uVar6 = (long)sVar5 >> 3;
  if ((ulong)(lVar4 - (long)puVar3 >> 3) < uVar6) {
    if (puVar3 != (undefined4 *)0x0) {
      param_1[1] = puVar3;
      operator_delete(puVar3);
      lVar4 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar6 <= (ulong)(lVar4 >> 2)) {
      uVar6 = lVar4 >> 2;
    }
    if (0xffffffffffffffe < (ulong)(lVar4 >> 3)) {
      uVar6 = 0x1fffffffffffffff;
    }
    FUN_0018e158(param_1,uVar6);
    pvVar7 = (void *)param_1[1];
    if (0 < (long)sVar5) {
      memcpy(pvVar7,param_2,sVar5);
      pvVar7 = (void *)((long)pvVar7 + sVar5);
    }
    param_1[1] = pvVar7;
  }
  else {
    uVar1 = param_1[1] - (long)puVar3 >> 3;
    __src = (undefined4 *)((long)param_2 + (param_1[1] - (long)puVar3));
    if (uVar6 <= uVar1) {
      __src = param_3;
    }
    if (__src != param_2) {
      do {
        *puVar3 = *param_2;
        puVar2 = param_2 + 1;
        param_2 = param_2 + 2;
        puVar3[1] = *puVar2;
        puVar3 = puVar3 + 2;
      } while (param_2 != __src);
    }
    if (uVar1 < uVar6) {
      pvVar7 = (void *)param_1[1];
      sVar5 = (long)param_3 - (long)__src;
      if (0 < (long)sVar5) {
        memcpy(pvVar7,__src,sVar5);
        pvVar7 = (void *)((long)pvVar7 + sVar5);
      }
      param_1[1] = pvVar7;
    }
    else {
      param_1[1] = puVar3;
    }
  }
  return;
}


// ===== 0018e158  FUN_0018e158 =====

void FUN_0018e158(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  
  if (param_2 >> 0x3d == 0) {
    pvVar1 = operator_new(param_2 << 3);
    *param_1 = pvVar1;
    param_1[1] = pvVar1;
    param_1[2] = (void *)((long)pvVar1 + param_2 * 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__vector_base_common<true>::__throw_length_error();
}


// ===== 0018e19c  FUN_0018e19c =====

void FUN_0018e19c(long *param_1,long param_2,ulong param_3)

{
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  FUN_00177f84(param_1 + 6);
  *(undefined1 *)(param_1 + 7) = 1;
  *param_1 = param_2;
  param_1[1] = param_3 >> 1;
  if ((param_3 & 1) != 0) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + param_3 * 4 + -4);
  }
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  return;
}


// ===== 0018e208  FUN_0018e208 =====

void FUN_0018e208(long *param_1,long *param_2)

{
  bool bVar1;
  float fVar2;
  bool bVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  fVar2 = DAT_00144b68;
  fVar9 = ABS(*(float *)(param_1 + 5));
  bVar1 = NAN(DAT_00144b68);
  bVar3 = fVar9 < DAT_00144b68;
  param_1[2] = *param_2;
  param_1[3] = 0;
  if (bVar3 == (NAN(fVar9) || bVar1)) {
    lVar6 = param_1[1];
    if (lVar6 != 0) {
      lVar7 = *param_1;
      lVar4 = lVar7 + lVar6 * 8;
      fVar9 = *(float *)(lVar4 + -4) + *(float *)(lVar4 + -8);
      fVar8 = fmodf(*(float *)(param_1 + 5),fVar9);
      lVar4 = 0;
      fVar9 = fVar8 + fVar9;
      if (fVar8 < 0.0 == NAN(fVar8)) {
        fVar9 = fVar8;
      }
      pfVar5 = (float *)(lVar7 + 4);
      do {
        fVar8 = pfVar5[-1];
        if (fVar9 < fVar8 != (NAN(fVar9) || NAN(fVar8))) {
          param_1[3] = lVar4;
          *(float *)(param_1 + 4) = fVar8 - fVar9;
          *(undefined1 *)((long)param_1 + 0x24) = 0;
          break;
        }
        fVar10 = *pfVar5;
        fVar9 = fVar9 - fVar8;
        if (fVar9 < fVar10 != (NAN(fVar9) || NAN(fVar10))) {
          param_1[3] = lVar4;
          *(float *)(param_1 + 4) = fVar10 - fVar9;
          *(undefined1 *)((long)param_1 + 0x24) = 1;
          break;
        }
        lVar4 = lVar4 + 1;
        fVar9 = fVar9 - fVar10;
        pfVar5 = pfVar5 + 2;
      } while (lVar6 != lVar4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)*param_1;
  }
  fVar9 = ABS(*(float *)(param_1 + 4));
  if (fVar9 != fVar2 && fVar9 < fVar2 == (NAN(fVar9) || NAN(fVar2))) {
    return;
  }
  FUN_0018e328(param_1);
  return;
}


// ===== 0018e328  FUN_0018e328 =====

void FUN_0018e328(long *param_1)

{
  float fVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  char cVar5;
  long lVar6;
  float *pfVar7;
  
  fVar4 = DAT_00144b68;
  cVar5 = *(char *)((long)param_1 + 0x24);
  do {
    if (cVar5 == '\0') {
      cVar5 = '\x01';
      *(undefined1 *)((long)param_1 + 0x24) = 1;
      pfVar7 = (float *)(*param_1 + param_1[3] * 8 + 4);
    }
    else {
      uVar2 = param_1[1];
      cVar5 = '\0';
      *(undefined1 *)((long)param_1 + 0x24) = 0;
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = (param_1[3] + 1U) / uVar2;
      }
      lVar6 = (param_1[3] + 1U) - uVar3 * uVar2;
      param_1[3] = lVar6;
      pfVar7 = (float *)(*param_1 + lVar6 * 8);
    }
    fVar1 = ABS(*pfVar7);
  } while (fVar1 == fVar4 || fVar1 < fVar4 != (NAN(fVar1) || NAN(fVar4)));
  *(float *)(param_1 + 4) = *pfVar7;
  *(undefined1 *)(param_1 + 7) = 1;
  return;
}


// ===== 0018e3a0  FUN_0018e3a0 =====

void FUN_0018e3a0(long param_1,undefined4 *param_2)

{
  if (*(char *)(param_1 + 0x24) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    FUN_00177878(param_1 + 0x30);
    FUN_00197498(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  FUN_00177878(param_1 + 0x30);
  FUN_001975e8(*param_2,param_2[1]);
  return;
}


// ===== 0018e3fc  FUN_0018e3fc =====

void FUN_0018e3fc(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  double dVar5;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar12 = *(undefined8 *)(param_1 + 0x10);
  uVar9 = *param_2;
  fVar3 = *(float *)(param_1 + 0x20);
  fVar8 = (float)uVar9;
  fVar10 = (float)((ulong)uVar9 >> 0x20);
  fVar4 = ABS(fVar8 - (float)uVar12);
  fVar6 = ABS(fVar10 - (float)((ulong)uVar12 >> 0x20));
  fVar14 = fVar4;
  if (fVar4 <= fVar6) {
    fVar14 = fVar6;
  }
  fVar4 = (float)NEON_fminnm(fVar4,fVar6);
  dVar5 = (double)NEON_fmadd((double)fVar4,0x3fd8000000000000,(double)fVar14);
  fVar14 = (float)dVar5;
  if (fVar3 < fVar14 == (NAN(fVar3) || NAN(fVar14))) {
    *(float *)(param_1 + 0x20) = fVar3 - fVar14;
    puVar2 = param_2;
  }
  else {
    if (fVar3 < fVar14 != (NAN(fVar3) || NAN(fVar14))) {
      do {
        fVar11 = (float)uVar12;
        fVar13 = (float)((ulong)uVar12 >> 0x20);
        fVar6 = ABS(fVar8 - fVar11);
        fVar7 = ABS(fVar10 - fVar13);
        fVar4 = fVar6;
        if (fVar6 <= fVar7) {
          fVar4 = fVar7;
        }
        fVar6 = (float)NEON_fminnm(fVar6,fVar7);
        dVar5 = (double)NEON_fmadd((double)fVar6,0x3fd8000000000000,(double)fVar4);
        fVar14 = fVar14 - fVar3;
        uVar12 = CONCAT44(((fVar10 - fVar13) * fVar3) / (float)dVar5 + fVar13,
                          ((fVar8 - fVar11) * fVar3) / (float)dVar5 + fVar11);
        local_60 = uVar12;
        FUN_0018e3a0(param_1,&local_60);
        FUN_0018e328(param_1);
        fVar3 = *(float *)(param_1 + 0x20);
        *(undefined8 *)(param_1 + 0x10) = uVar12;
      } while (fVar14 != fVar3 && fVar14 < fVar3 == (NAN(fVar14) || NAN(fVar3)));
    }
    if (fVar14 == 1.0 || fVar14 < 1.0 != NAN(fVar14)) goto LAB_0018e508;
    *(float *)(param_1 + 0x20) = fVar3 - fVar14;
    puVar2 = &local_60;
    local_60 = uVar9;
  }
  FUN_0018e3a0(param_1,puVar2);
  fVar3 = *(float *)(param_1 + 0x20);
LAB_0018e508:
  if (fVar3 < 1.0 != NAN(fVar3)) {
    FUN_0018e328(param_1);
  }
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018e554  FUN_0018e554 =====

void FUN_0018e554(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (*(char *)(param_1 + 0x24) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    FUN_00177878(param_1 + 0x30);
    FUN_00197498(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  FUN_00177878(param_1 + 0x30);
  FUN_00197748(*param_2,param_2[1],*param_3,param_3[1],*param_4,param_4[1]);
  return;
}


// ===== 0018e5cc  FUN_0018e5cc =====

void FUN_0018e5cc(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_0018d1f8(&local_c0,(undefined8 *)(param_1 + 0x10));
  fVar3 = (float)FUN_0018d214(&local_c0);
  fVar4 = *(float *)(param_1 + 0x20);
  if (fVar3 == fVar4 || fVar3 < fVar4 != (NAN(fVar3) || NAN(fVar4))) {
    *(float *)(param_1 + 0x20) = fVar4 - fVar3;
    puVar2 = param_4;
  }
  else {
    if (fVar3 != fVar4 && fVar3 < fVar4 == (NAN(fVar3) || NAN(fVar4))) {
      do {
        fVar3 = fVar3 - fVar4;
        FUN_0018d57c(fVar4,&local_c0,auStack_78,&local_98);
        local_d0 = uStack_68;
        uStack_c8 = local_70;
        local_d8 = local_60;
        FUN_0018e554(param_1,&uStack_c8,&local_d0,&local_d8);
        FUN_0018e328(param_1);
        uStack_b8 = uStack_90;
        local_c0 = local_98;
        local_a8 = uStack_80;
        uStack_b0 = local_88;
        fVar4 = *(float *)(param_1 + 0x20);
        *(undefined8 *)(param_1 + 0x10) = local_98;
      } while (fVar3 != fVar4 && fVar3 < fVar4 == (NAN(fVar3) || NAN(fVar4)));
    }
    if (fVar3 == 1.0 || fVar3 < 1.0 != NAN(fVar3)) goto LAB_0018e6ec;
    *(float *)(param_1 + 0x20) = fVar4 - fVar3;
    param_2 = &uStack_c8;
    param_3 = &local_d0;
    local_d0 = uStack_b0;
    uStack_c8 = uStack_b8;
    local_d8 = local_a8;
    puVar2 = &local_d8;
  }
  FUN_0018e554(param_1,param_2,param_3,puVar2);
  fVar4 = *(float *)(param_1 + 0x20);
LAB_0018e6ec:
  if (fVar4 < 1.0 != NAN(fVar4)) {
    FUN_0018e328(param_1);
  }
  *(undefined8 *)(param_1 + 0x10) = *param_4;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018e734  FUN_0018e734 =====

void FUN_0018e734(long *param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  char *pcVar10;
  long local_68;
  long local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if (*(long *)(*param_3 + 0x20) == *(long *)(*param_3 + 0x28)) {
    *param_1 = 0;
    FUN_00177f84(param_1);
  }
  else {
    local_68 = 0;
    FUN_00177f84(&local_68);
    lVar8 = local_68;
    local_68 = 0;
    plVar9 = (long *)(param_2 + 0x30);
    local_60 = *plVar9;
    *plVar9 = lVar8;
    FUN_00177938(&local_60);
    FUN_00177938(&local_68);
    lVar7 = *param_3;
    lVar8 = *(long *)(lVar7 + 8);
    lVar2 = *(long *)(lVar7 + 0x10);
    lVar1 = *(long *)(lVar7 + 0x20);
    lVar7 = *(long *)(lVar7 + 0x28);
    uVar6 = FUN_00177878(plVar9);
    FUN_00197a98(uVar6,lVar2 - lVar8 >> 3,lVar7 - lVar1);
    *(undefined8 *)(param_2 + 0x18) = 0;
    lVar8 = *param_3;
    pcVar10 = *(char **)(lVar8 + 0x20);
    pcVar3 = *(char **)(lVar8 + 0x28);
    if (pcVar10 != pcVar3) {
      lVar8 = *(long *)(lVar8 + 8);
      do {
        cVar4 = *pcVar10;
        if (cVar4 == '\x02') {
          FUN_0018e5cc(param_2,lVar8,lVar8 + 8,lVar8 + 0x10);
          lVar8 = lVar8 + 0x18;
        }
        else {
          if (cVar4 == '\x01') {
            FUN_0018e3fc(param_2,lVar8);
          }
          else {
            if (cVar4 != '\0') goto LAB_0018e84c;
            FUN_0018e208(param_2,lVar8);
          }
          lVar8 = lVar8 + 8;
        }
LAB_0018e84c:
        pcVar10 = pcVar10 + 1;
      } while (pcVar3 != pcVar10);
    }
    lVar8 = *plVar9;
    if ((ulong)(*(long *)(lVar8 + 0x10) - *(long *)(lVar8 + 8) >> 3) >> 0xf != 0) {
      FUN_00177878(plVar9);
      FUN_00197a68();
      lVar8 = *plVar9;
    }
    *param_1 = lVar8;
    *plVar9 = 0;
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018e8c8  FUN_0018e8c8 =====

void FUN_0018e8c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 auStack_78 [6];
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((*(byte *)(param_1 + 0x88) & 1) != 0) {
    if (*(char *)(param_1 + 0x80) == '\0') {
      local_98 = *(undefined8 *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = 0;
      puVar3 = &local_98;
      FUN_00199c2c(param_1,&local_98,*(undefined1 *)(param_1 + 0x8c),param_2);
    }
    else {
      lVar1 = *(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60);
      if (lVar1 != 0) {
        FUN_0018e19c(auStack_78,*(long *)(param_1 + 0x60),lVar1 >> 2);
        FUN_0018e734(&local_88,auStack_78,param_1 + 0x58);
        local_80 = *(undefined8 *)(param_1 + 0x58);
        *(undefined8 *)(param_1 + 0x58) = local_88;
        local_88 = 0;
        FUN_00177938(&local_80);
        FUN_00177938(&local_88);
        FUN_00177938(auStack_48);
      }
      local_90 = *(undefined8 *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = 0;
      puVar3 = &local_90;
      FUN_00199d00(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),param_1,&local_90
                   ,*(undefined1 *)(param_1 + 0x81),*(undefined1 *)(param_1 + 0x82),param_2);
    }
    FUN_00177938(puVar3);
    local_80 = 0;
    FUN_00177f84(&local_80);
    auStack_78[0] = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = local_80;
    local_80 = 0;
    FUN_00177938(auStack_78);
    FUN_00177938(&local_80);
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xfffffffe;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018ea10  thunk_FUN_00199a08 =====

void thunk_FUN_00199a08(undefined8 *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  if (*param_2 != 0) {
    puVar3 = (undefined8 *)FUN_00199e10();
    plVar4 = (long *)*puVar3;
    *param_1 = plVar4;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return;
  }
  *param_1 = 0;
  FUN_001776ec(param_1);
  return;
}


// ===== 0018ea14  FUN_0018ea14 =====

void FUN_0018ea14(float param_1,float param_2,long param_3,char param_4,char param_5)

{
  float fVar1;
  
  if ((((*(char *)(param_3 + 0x81) != param_4) || (*(char *)(param_3 + 0x82) != param_5)) ||
      (fVar1 = ABS(*(float *)(param_3 + 0x7c) - param_1),
      fVar1 < DAT_00144b68 == (NAN(fVar1) || NAN(DAT_00144b68)))) ||
     (fVar1 = ABS(*(float *)(param_3 + 0x78) - param_2),
     fVar1 < DAT_00144b68 == (NAN(fVar1) || NAN(DAT_00144b68)))) {
    *(undefined1 *)(param_3 + 0x80) = 1;
    *(char *)(param_3 + 0x81) = param_4;
    *(char *)(param_3 + 0x82) = param_5;
    *(float *)(param_3 + 0x78) = param_2;
    *(float *)(param_3 + 0x7c) = param_1;
    *(uint *)(param_3 + 0x88) = *(uint *)(param_3 + 0x88) | 1;
  }
  return;
}


// ===== 0018ea78  FUN_0018ea78 =====

void FUN_0018ea78(long param_1,float *param_2,uint param_3)

{
  long lVar1;
  float *pfVar2;
  ulong uVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 *puVar6;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar6 = (undefined8 *)(param_1 + 0x60);
  pfVar2 = (float *)*puVar6;
  uVar3 = *(long *)(param_1 + 0x68) - (long)pfVar2 >> 2;
  if (uVar3 == param_3) {
    pfVar4 = pfVar2;
    pfVar5 = param_2;
    if (param_3 != 0) {
      do {
        if (ABS(*pfVar4 - *pfVar5) < DAT_00144b68 ==
            (NAN(ABS(*pfVar4 - *pfVar5)) || NAN(DAT_00144b68))) goto LAB_0018eafc;
        uVar3 = uVar3 - 1;
        pfVar4 = pfVar4 + 1;
        pfVar5 = pfVar5 + 1;
      } while (uVar3 != 0);
    }
  }
  else {
LAB_0018eafc:
    *(float **)(param_1 + 0x68) = pfVar2;
    pfVar4 = pfVar2;
    if (param_3 != 0) {
      uVar3 = (ulong)param_3;
      while( true ) {
        uVar3 = uVar3 - 1;
        if (pfVar2 == *(float **)(param_1 + 0x70)) {
          FUN_0018ebf8(puVar6,param_2);
        }
        else {
          *pfVar2 = *param_2;
          *(float **)(param_1 + 0x68) = pfVar2 + 1;
        }
        if (uVar3 == 0) break;
        pfVar2 = *(float **)(param_1 + 0x68);
        param_2 = param_2 + 1;
      }
      pfVar2 = *(float **)(param_1 + 0x60);
      pfVar4 = *(float **)(param_1 + 0x68);
    }
    if ((long)pfVar4 - (long)pfVar2 == 4) {
      local_4c = 0x41a00000;
      if (pfVar4 < *(float **)(param_1 + 0x70)) {
        *pfVar4 = 20.0;
        *(float **)(param_1 + 0x68) = pfVar4 + 1;
      }
      else {
        FUN_0018c574(puVar6,&local_4c);
      }
    }
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018ebc8  FUN_0018ebc8 =====

void FUN_0018ebc8(long param_1)

{
  FUN_0017804c(param_1 + 0x58);
  *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 1;
  return;
}


// ===== 0018ebf8  FUN_0018ebf8 =====

void FUN_0018ebf8(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  void *local_70;
  undefined4 *local_68;
  undefined4 *local_60;
  void *local_58;
  long *plStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = param_1[1] - *param_1 >> 2;
  uVar1 = lVar5 + 1;
  if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  plStack_50 = param_1 + 2;
  lVar3 = *plStack_50 - *param_1;
  uVar4 = lVar3 >> 1;
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  if (0x1ffffffffffffffe < (ulong)(lVar3 >> 2)) {
    uVar1 = 0x3fffffffffffffff;
  }
  local_58 = (void *)0x0;
  if (uVar1 == 0) {
    local_70 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_70 = operator_new(uVar1 << 2);
  }
  local_68 = (undefined4 *)((long)local_70 + lVar5 * 4);
  local_58 = (void *)((long)local_70 + uVar1 * 4);
  local_60 = local_68 + 1;
  *local_68 = *param_2;
  FUN_0018c688(param_1,&local_70);
  if ((long)local_60 - (long)local_68 != 0) {
    local_60 = local_60 + (((long)local_60 - (long)local_68) - 4U >> 2 ^ 0xffffffffffffffff);
  }
  if (local_70 != (void *)0x0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018ed0c  FUN_0018ed0c =====

void FUN_0018ed0c(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x20);
  FUN_0018ef8c();
  *param_1 = pvVar1;
  return;
}


// ===== 0018ed44  FUN_0018ed44 =====

void FUN_0018ed44(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  long local_38;
  
  param_2 = (undefined8 *)*param_2;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pcVar3 = (code *)*param_2;
  if ((pcVar3 == (code *)0x0) ||
     (lVar2 = (*pcVar3)(param_3,&local_3c,&uStack_40,&local_44,4), lVar2 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_0018ee88(param_1,param_2,lVar2,local_3c,uStack_40,local_44);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018ede4  FUN_0018ede4 =====

void FUN_0018ede4(undefined8 *param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  
  lVar2 = *param_2;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pcVar4 = *(code **)(lVar2 + 0x10);
  if ((pcVar4 == (code *)0x0) ||
     (lVar3 = (*pcVar4)(param_3,param_4,&local_3c,&local_40,&local_44,4), lVar3 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_0018ee88(param_1,lVar2,lVar3,local_3c,local_40,local_44);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018ee88  FUN_0018ee88 =====

void FUN_0018ee88(undefined8 param_1,long param_2,byte *param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  void *__dest;
  int iVar4;
  byte *pbVar5;
  
  iVar3 = param_5 * param_4;
  if (param_6 == 4) {
    pbVar5 = param_3;
    iVar4 = iVar3;
    if (0 < iVar3) {
      do {
        bVar1 = *pbVar5;
        bVar2 = pbVar5[3];
        iVar4 = iVar4 + -1;
        *pbVar5 = (byte)(((uint)bVar2 * (uint)pbVar5[2]) / 0xff);
        pbVar5[1] = (byte)(((uint)bVar2 * (uint)pbVar5[1]) / 0xff);
        pbVar5[2] = (byte)(((uint)bVar2 * (uint)bVar1) / 0xff);
        pbVar5 = pbVar5 + 4;
      } while (iVar4 != 0);
    }
  }
  else {
    pbVar5 = param_3;
    iVar4 = iVar3;
    if (0 < iVar3) {
      do {
        bVar1 = *pbVar5;
        iVar4 = iVar4 + -1;
        *pbVar5 = pbVar5[2];
        pbVar5[2] = bVar1;
        pbVar5 = pbVar5 + 4;
      } while (iVar4 != 0);
    }
  }
  FUN_0018d6d0(param_1,param_4,param_5,2);
  __dest = (void *)FUN_0018dac8(param_1);
  memcpy(__dest,param_3,(long)(iVar3 * 4));
                    /* WARNING: Could not recover jumptable at 0x0018ef88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 8))(param_3);
  return;
}


// ===== 0018ef8c  FUN_0018ef8c =====

void FUN_0018ef8c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  lVar1 = dlopen("librlottie-image-loader.so",1);
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    uVar2 = dlsym(param_1[3],"lottie_image_load");
    *param_1 = uVar2;
    uVar2 = dlsym(param_1[3],"lottie_image_free");
    param_1[1] = uVar2;
    uVar2 = dlsym(param_1[3],"lottie_image_load_from_data");
    param_1[2] = uVar2;
    return;
  }
  return;
}


// ===== 0018f038  FUN_0018f038 =====

void FUN_0018f038(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = param_2;
  if (pvVar1 != (void *)0x0) {
    if (*(long *)((long)pvVar1 + 0x18) != 0) {
      dlclose();
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 0018f078  FUN_0018f078 =====

void FUN_0018f078(float param_1,float param_2,float param_3,float param_4,float *param_5)

{
  float fVar1;
  long lVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  
  *param_5 = param_1;
  param_5[1] = param_2;
  param_5[2] = param_3;
  param_5[3] = param_4;
  fVar1 = DAT_00144b28;
  if ((param_1 == param_2) && (param_3 == param_4)) {
    return;
  }
  fVar3 = *param_5;
  dVar4 = (double)fVar3;
  dVar5 = (double)NEON_fmadd(dVar4 - (double)param_5[2],0x4008000000000000,0x3ff0000000000000);
  dVar4 = (double)NEON_fmadd((double)param_5[2],0x4008000000000000,dVar4 * -6.0);
  lVar2 = 0;
  do {
    fVar6 = (float)(int)lVar2 * fVar1;
    uVar7 = NEON_fmadd(fVar6,(float)dVar5,(float)dVar4);
    fVar8 = (float)NEON_fmadd(uVar7,fVar6,fVar3 * 3.0);
    param_5[lVar2 + 4] = fVar8 * fVar6;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0xb);
  return;
}


// ===== 0018f1ac  FUN_0018f1ac =====

float FUN_0018f1ac(float param_1,float *param_2)

{
  float fVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = param_2[1];
  if (*param_2 == fVar5) {
    fVar6 = param_2[3];
    if (param_2[2] == fVar6) {
      return param_1;
    }
  }
  else {
    fVar6 = param_2[3];
  }
  fVar1 = (float)FUN_0018f228();
  dVar4 = (double)NEON_fmadd((double)fVar5 - (double)fVar6,0x4008000000000000,0x3ff0000000000000);
  dVar3 = (double)NEON_fmadd((double)fVar6,0x4008000000000000,(double)fVar5 * -6.0);
  uVar2 = NEON_fmadd(fVar1,(float)dVar4,(float)dVar3);
  fVar5 = (float)NEON_fmadd(uVar2,fVar1,fVar5 * 3.0);
  return fVar5 * fVar1;
}


// ===== 0018f228  FUN_0018f228 =====

float FUN_0018f228(float param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  undefined4 uVar12;
  float fVar13;
  double dVar14;
  
  pfVar3 = param_2 + 0xe;
  fVar5 = 0.0;
  lVar4 = 0x14;
  do {
    fVar6 = *(float *)((long)param_2 + lVar4);
    if (fVar6 != param_1 && fVar6 < param_1 == (NAN(fVar6) || NAN(param_1))) {
      pfVar3 = (float *)((long)param_2 + lVar4);
      goto LAB_0018f264;
    }
    lVar4 = lVar4 + 4;
    fVar5 = fVar5 + DAT_00144b28;
  } while (lVar4 != 0x38);
  fVar6 = *pfVar3;
LAB_0018f264:
  dVar11 = (double)*param_2;
  dVar9 = (double)NEON_fmadd((double)param_2[2],0x4008000000000000,dVar11 * -6.0);
  dVar11 = (double)NEON_fmadd(dVar11 - (double)param_2[2],0x4008000000000000,0x3ff0000000000000);
  fVar6 = ((param_1 - pfVar3[-1]) * DAT_00144b28) / (fVar6 - pfVar3[-1]) + fVar5;
  uVar10 = NEON_fmadd((double)fVar6 * 3.0,(double)(float)dVar11,
                      (double)(float)dVar9 + (double)(float)dVar9);
  dVar9 = (double)NEON_fmadd(uVar10,(double)fVar6,(double)(*param_2 * 3.0));
  dVar11 = (double)(float)dVar9;
  if (dVar11 < DAT_00146358 == (NAN(dVar11) || NAN(DAT_00146358))) {
    dVar9 = (double)*param_2;
    fVar5 = *param_2 * 3.0;
    dVar11 = (double)NEON_fmadd((double)param_2[2],0x4008000000000000,dVar9 * -6.0);
    dVar9 = (double)NEON_fmadd(dVar9 - (double)param_2[2],0x4008000000000000,0x3ff0000000000000);
    dVar8 = (double)(float)dVar11;
    iVar2 = 4;
    do {
      uVar10 = NEON_fmadd((double)fVar6 * 3.0,(double)(float)dVar9,dVar8 + dVar8);
      dVar14 = (double)NEON_fmadd(uVar10,(double)fVar6,(double)fVar5);
      if ((float)dVar14 == 0.0) {
        return fVar6;
      }
      uVar12 = NEON_fmadd(fVar6,(float)dVar9,(float)dVar11);
      uVar12 = NEON_fmadd(uVar12,fVar6,fVar5);
      fVar7 = (float)NEON_fmsub(uVar12,fVar6,param_1);
      iVar2 = iVar2 + -1;
      fVar6 = fVar6 + fVar7 / (float)dVar14;
    } while (iVar2 != 0);
    return fVar6;
  }
  if ((float)dVar9 != 0.0) {
    fVar6 = fVar5 + DAT_00144b28;
    dVar9 = (double)*param_2;
    dVar11 = (double)NEON_fmadd(dVar9 - (double)param_2[2],0x4008000000000000,0x3ff0000000000000);
    dVar9 = (double)NEON_fmadd((double)param_2[2],0x4008000000000000,dVar9 * -6.0);
    iVar2 = 10;
    do {
      dVar8 = (double)NEON_fmadd((double)(fVar6 - fVar5),0x3fe0000000000000,(double)fVar5);
      fVar7 = (float)dVar8;
      uVar12 = NEON_fmadd((float)dVar11,fVar7,(float)dVar9);
      uVar12 = NEON_fmadd(uVar12,fVar7,*param_2 * 3.0);
      fVar13 = (float)NEON_fnmsub(uVar12,fVar7,param_1);
      dVar8 = (double)ABS(fVar13);
      if (dVar8 == DAT_00146330 || dVar8 < DAT_00146330 != (NAN(dVar8) || NAN(DAT_00146330))) {
        return fVar7;
      }
      fVar1 = fVar7;
      if (fVar13 == 0.0 || fVar13 < 0.0 != NAN(fVar13)) {
        fVar1 = fVar6;
        fVar5 = fVar7;
      }
      fVar6 = fVar1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return fVar7;
  }
  return fVar6;
}


// ===== 0018f438  FUN_0018f438 =====

bool FUN_0018f438(void)

{
  byte bVar1;
  
  bVar1 = FUN_0018f458();
  return bVar1 < 0x10;
}


// ===== 0018f458  FUN_0018f458 =====

byte FUN_0018f458(float *param_1)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  
  bVar1 = *(byte *)((long)param_1 + 0x25);
  bVar2 = *(byte *)(param_1 + 9);
  if (bVar1 == 0) {
    return bVar2;
  }
  if (bVar1 < bVar2) {
    return bVar2;
  }
  switch(bVar1) {
  case 1:
switchD_0018f48c_caseD_1:
    fVar3 = ABS(param_1[6]);
    if ((fVar3 == DAT_00144b68 || fVar3 < DAT_00144b68 != (NAN(fVar3) || NAN(DAT_00144b68))) &&
       (fVar3 = ABS(param_1[7]),
       fVar3 == DAT_00144b68 || fVar3 < DAT_00144b68 != (NAN(fVar3) || NAN(DAT_00144b68)))) {
      bVar2 = 0;
    }
    else {
      bVar2 = 1;
    }
    break;
  case 2:
switchD_0018f48c_caseD_2:
    fVar3 = ABS(*param_1 + -1.0);
    if ((fVar3 == DAT_00144b68 || fVar3 < DAT_00144b68 != (NAN(fVar3) || NAN(DAT_00144b68))) &&
       (fVar3 = ABS(param_1[4] + -1.0),
       fVar3 == DAT_00144b68 || fVar3 < DAT_00144b68 != (NAN(fVar3) || NAN(DAT_00144b68))))
    goto switchD_0018f48c_caseD_1;
    bVar2 = 2;
    break;
  case 3:
  case 5:
  case 6:
  case 7:
    goto switchD_0018f48c_caseD_3;
  case 4:
  case 8:
switchD_0018f48c_caseD_4:
    fVar3 = ABS(param_1[1]);
    if ((fVar3 == DAT_00144b68 || fVar3 < DAT_00144b68 != (NAN(fVar3) || NAN(DAT_00144b68))) &&
       (fVar3 = ABS(param_1[3]),
       fVar3 == DAT_00144b68 || fVar3 < DAT_00144b68 != (NAN(fVar3) || NAN(DAT_00144b68))))
    goto switchD_0018f48c_caseD_2;
    fVar3 = (float)NEON_fmadd(param_1[4],param_1[3],*param_1 * param_1[1]);
    fVar3 = ABS(fVar3);
    bVar2 = 4;
    if (fVar3 != DAT_00144b68 && fVar3 < DAT_00144b68 == (NAN(fVar3) || NAN(DAT_00144b68))) {
      bVar2 = 8;
    }
    break;
  default:
    if (bVar1 != 0x10) goto switchD_0018f48c_caseD_3;
    fVar3 = ABS(param_1[2]);
    if (((fVar3 == DAT_00144b68 || fVar3 < DAT_00144b68 != (NAN(fVar3) || NAN(DAT_00144b68))) &&
        (fVar3 = ABS(param_1[5]),
        fVar3 == DAT_00144b68 || fVar3 < DAT_00144b68 != (NAN(fVar3) || NAN(DAT_00144b68)))) &&
       (fVar3 = ABS(param_1[8] + -1.0),
       fVar3 == DAT_00144b68 || fVar3 < DAT_00144b68 != (NAN(fVar3) || NAN(DAT_00144b68))))
    goto switchD_0018f48c_caseD_4;
    bVar2 = 0x10;
  }
  *(byte *)(param_1 + 9) = bVar2;
switchD_0018f48c_caseD_3:
  *(undefined1 *)((long)param_1 + 0x25) = 0;
  return bVar2;
}


// ===== 0018f5b0  FUN_0018f5b0 =====

bool FUN_0018f5b0(void)

{
  char cVar1;
  
  cVar1 = FUN_0018f458();
  return cVar1 == '\0';
}


// ===== 0018f61c  FUN_0018f61c =====

bool FUN_0018f61c(void)

{
  byte bVar1;
  
  bVar1 = FUN_0018f458();
  return 1 < bVar1;
}


// ===== 0018f63c  FUN_0018f63c =====

bool FUN_0018f63c(void)

{
  byte bVar1;
  
  bVar1 = FUN_0018f458();
  return 3 < bVar1;
}


// ===== 0018f65c  FUN_0018f65c =====

bool FUN_0018f65c(void)

{
  char cVar1;
  
  cVar1 = FUN_0018f458();
  return cVar1 != '\0';
}


// ===== 0018f678  FUN_0018f678 =====

void FUN_0018f678(float param_1,undefined8 *param_2)

{
  if (param_1 != 1.0) {
    param_2[1] = CONCAT44((float)((ulong)param_2[1] >> 0x20) * param_1,(float)param_2[1] * param_1);
    *param_2 = CONCAT44((float)((ulong)*param_2 >> 0x20) * param_1,(float)*param_2 * param_1);
    param_2[3] = CONCAT44((float)((ulong)param_2[3] >> 0x20) * param_1,(float)param_2[3] * param_1);
    param_2[2] = CONCAT44((float)((ulong)param_2[2] >> 0x20) * param_1,(float)param_2[2] * param_1);
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * param_1;
    if (*(byte *)((long)param_2 + 0x25) < 2) {
      *(undefined1 *)((long)param_2 + 0x25) = 2;
      return;
    }
  }
  return;
}


// ===== 0018f6c8  FUN_0018f6c8 =====

void FUN_0018f6c8(float param_1)

{
  FUN_0018f678(1.0 / param_1);
  return;
}


// ===== 0018f6e4  FUN_0018f6e4 =====

undefined8 * FUN_0018f6e4(float param_1,float param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 == 0.0 && param_2 == 0.0) {
    return param_3;
  }
  cVar1 = FUN_0018f458(param_3);
  switch(cVar1) {
  case '\0':
    *(float *)(param_3 + 3) = param_1;
    *(float *)((long)param_3 + 0x1c) = param_2;
    break;
  case '\x01':
    param_3[3] = CONCAT44((float)((ulong)param_3[3] >> 0x20) + param_2,(float)param_3[3] + param_1);
    break;
  case '\x02':
    uVar2 = NEON_fmadd(*(undefined4 *)param_3,param_1,*(undefined4 *)(param_3 + 3));
    uVar3 = NEON_fmadd(*(undefined4 *)(param_3 + 2),param_2,*(undefined4 *)((long)param_3 + 0x1c));
    *(undefined4 *)(param_3 + 3) = uVar2;
    *(undefined4 *)((long)param_3 + 0x1c) = uVar3;
    break;
  case '\x03':
  case '\x05':
  case '\x06':
  case '\a':
    break;
  default:
    if (cVar1 != '\x10') break;
    uVar2 = NEON_fmadd(*(undefined4 *)(param_3 + 1),param_1,*(undefined4 *)(param_3 + 4));
    uVar2 = NEON_fmadd(*(undefined4 *)((long)param_3 + 0x14),param_2,uVar2);
    *(undefined4 *)(param_3 + 4) = uVar2;
  case '\x04':
  case '\b':
    param_3[3] = CONCAT44((float)((ulong)param_3[3] >> 0x20) +
                          (float)((ulong)*param_3 >> 0x20) * param_1 +
                          (float)((ulong)*(undefined8 *)((long)param_3 + 0xc) >> 0x20) * param_2,
                          (float)param_3[3] + (float)*param_3 * param_1 +
                          (float)*(undefined8 *)((long)param_3 + 0xc) * param_2);
  }
  if (*(char *)((long)param_3 + 0x25) == '\0') {
    *(undefined1 *)((long)param_3 + 0x25) = 1;
  }
  return param_3;
}


// ===== 0018f7e0  FUN_0018f7e0 =====

float * FUN_0018f7e0(float param_1,float param_2,float *param_3)

{
  char cVar1;
  
  if ((param_1 == 1.0) && (param_2 == 1.0)) {
    return param_3;
  }
  cVar1 = FUN_0018f458(param_3);
  switch(cVar1) {
  case '\0':
  case '\x01':
    *param_3 = param_1;
    param_3[4] = param_2;
    break;
  case '\x03':
  case '\x05':
  case '\x06':
  case '\a':
    break;
  default:
    if (cVar1 != '\x10') break;
    param_3[2] = param_3[2] * param_1;
    param_3[5] = param_3[5] * param_2;
  case '\x04':
  case '\b':
    param_3[1] = param_3[1] * param_1;
    param_3[3] = param_3[3] * param_2;
  case '\x02':
    *param_3 = *param_3 * param_1;
    param_3[4] = param_3[4] * param_2;
  }
  if (*(byte *)((long)param_3 + 0x25) < 2) {
    *(undefined1 *)((long)param_3 + 0x25) = 2;
  }
  return param_3;
}


// ===== 0018f8c4  FUN_0018f8c4 =====

float * FUN_0018f8c4(float param_1,float param_2,float *param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_1 == 0.0 && param_2 == 0.0) {
    return param_3;
  }
  cVar1 = FUN_0018f458(param_3);
  switch(cVar1) {
  case '\0':
  case '\x01':
    param_3[1] = param_2;
    param_3[3] = param_1;
    break;
  case '\x02':
    param_3[1] = param_3[4] * param_2;
    param_3[3] = *param_3 * param_1;
    break;
  case '\x03':
  case '\x05':
  case '\x06':
  case '\a':
    break;
  default:
    if (cVar1 != '\x10') break;
    fVar3 = (float)NEON_fmadd(param_3[5],param_2,param_3[2]);
    fVar2 = (float)NEON_fmadd(param_3[2],param_1,param_3[5]);
    param_3[2] = fVar3;
    param_3[5] = fVar2;
  case '\x04':
  case '\b':
    fVar4 = (float)NEON_fmadd(param_3[3],param_2,*param_3);
    fVar5 = (float)NEON_fmadd(param_3[4],param_2,param_3[1]);
    fVar3 = (float)NEON_fmadd(*param_3,param_1,param_3[3]);
    fVar2 = (float)NEON_fmadd(param_3[1],param_1,param_3[4]);
    *param_3 = fVar4;
    param_3[1] = fVar5;
    param_3[3] = fVar3;
    param_3[4] = fVar2;
  }
  if (*(byte *)((long)param_3 + 0x25) < 8) {
    *(undefined1 *)((long)param_3 + 0x25) = 8;
  }
  return param_3;
}


// ===== 0018f9b8  FUN_0018f9b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_0018f9b8(float param_1,float *param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_90;
  float fStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined6 uStack_70;
  undefined2 uStack_6a;
  undefined6 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 uStack_3b;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0.0) goto LAB_0018fbc0;
  fVar10 = 0.0;
  fVar8 = 1.0;
  if ((param_1 != 90.0) && (param_1 != -270.0)) {
    fVar8 = -1.0;
    if ((param_1 != 270.0) && (param_1 != -90.0)) {
      if (param_1 == 180.0) {
        fVar8 = 0.0;
        fVar10 = -1.0;
      }
      else {
        sincosf(param_1 * DAT_00144b2c,&fStack_8c,&local_90);
        fVar8 = fStack_8c;
        fVar10 = local_90;
      }
    }
  }
  if (param_3 != 2) {
    local_40 = 0x3f800000;
    uStack_58 = _UNK_001462a8;
    local_60 = _DAT_001462a0;
    uVar2 = local_60;
    uStack_48 = _UNK_001462a8;
    local_50 = _DAT_001462a0;
    uStack_3b = 0;
    local_60._4_4_ = (undefined4)((ulong)_DAT_001462a0 >> 0x20);
    if (param_3 == 1) {
      pfVar4 = (float *)((ulong)&local_60 | 8);
      local_60 = CONCAT44(local_60._4_4_,fVar10);
    }
    else {
      pfVar4 = (float *)((long)&local_50 + 4);
      local_50 = CONCAT44(local_60._4_4_,fVar10);
      local_60 = uVar2;
    }
    *pfVar4 = fVar8 * -0.0009765625;
    _local_3c = CONCAT11(uStack_3b,0x10);
    FUN_0018fbec(&local_88,&local_60,param_2);
    *(ulong *)((long)param_2 + 0x1e) = CONCAT62(uStack_68,uStack_6a);
    *(undefined8 *)(param_2 + 2) = uStack_80;
    *(undefined8 *)param_2 = local_88;
    *(ulong *)(param_2 + 6) = CONCAT26(uStack_6a,uStack_70);
    *(undefined8 *)(param_2 + 4) = local_78;
    goto LAB_0018fbc0;
  }
  cVar3 = FUN_0018f458(param_2);
  switch(cVar3) {
  case '\0':
  case '\x01':
    *param_2 = fVar10;
    param_2[1] = fVar8;
    param_2[3] = -fVar8;
    param_2[4] = fVar10;
    break;
  case '\x02':
    fVar5 = *param_2;
    *param_2 = fVar5 * fVar10;
    param_2[1] = param_2[4] * fVar8;
    param_2[3] = fVar5 * -fVar8;
    param_2[4] = param_2[4] * fVar10;
    break;
  case '\x03':
  case '\x05':
  case '\x06':
  case '\a':
    break;
  case '\x04':
  case '\b':
switchD_0018faa8_caseD_4:
    fVar5 = (float)*(undefined8 *)param_2;
    fVar9 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
    fVar6 = (float)*(undefined8 *)(param_2 + 3);
    fVar7 = (float)((ulong)*(undefined8 *)(param_2 + 3) >> 0x20);
    *(ulong *)param_2 = CONCAT44(fVar9 * fVar10 + fVar7 * fVar8,fVar5 * fVar10 + fVar6 * fVar8);
    *(ulong *)(param_2 + 3) =
         CONCAT44(-(fVar9 * fVar8) + fVar7 * fVar10,-(fVar5 * fVar8) + fVar6 * fVar10);
    break;
  default:
    if (cVar3 == '\x10') {
      fVar9 = (float)NEON_fmadd(param_2[5],fVar8,param_2[2] * fVar10);
      fVar5 = (float)NEON_fnmsub(param_2[5],fVar10,param_2[2] * fVar8);
      param_2[2] = fVar9;
      param_2[5] = fVar5;
      goto switchD_0018faa8_caseD_4;
    }
  }
  if (*(byte *)((long)param_2 + 0x25) < 4) {
    *(undefined1 *)((long)param_2 + 0x25) = 4;
  }
LAB_0018fbc0:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}


// ===== 0018fbec  FUN_0018fbec =====

void FUN_0018fbec(undefined8 *param_1,float *param_2,float *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  long lVar8;
  float fVar9;
  ulong uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  
  bVar1 = FUN_0018f458(param_3);
  if (bVar1 == 0) {
    uVar6 = *(undefined8 *)(param_2 + 8);
    uVar15 = *(undefined8 *)(param_2 + 2);
    uVar14 = *(undefined8 *)param_2;
    uVar13 = *(undefined8 *)(param_2 + 6);
    uVar3 = *(undefined8 *)(param_2 + 4);
LAB_0018fcd8:
    param_1[4] = uVar6;
    param_1[1] = uVar15;
    *param_1 = uVar14;
    param_1[3] = uVar13;
    param_1[2] = uVar3;
    return;
  }
  bVar2 = FUN_0018f458(param_2);
  if (bVar2 == 0) {
    uVar6 = *(undefined8 *)(param_3 + 8);
    uVar15 = *(undefined8 *)(param_3 + 2);
    uVar14 = *(undefined8 *)param_3;
    uVar13 = *(undefined8 *)(param_3 + 6);
    uVar3 = *(undefined8 *)(param_3 + 4);
    goto LAB_0018fcd8;
  }
  if (bVar1 <= bVar2) {
    bVar1 = bVar2;
  }
  uVar6 = 0;
  uVar12 = 0;
  lVar8 = DAT_00146378;
  uVar10 = DAT_00146328;
  uVar23 = 0;
  uVar17 = 0x3f800000;
  switch(bVar1) {
  case 1:
    uVar6 = CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 6) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20),
                     (float)*(undefined8 *)(param_3 + 6) + (float)*(undefined8 *)(param_2 + 6));
    break;
  case 2:
    uVar6 = CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 6) >> 0x20) +
                     param_3[4] * (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20),
                     (float)*(undefined8 *)(param_3 + 6) +
                     *param_3 * (float)*(undefined8 *)(param_2 + 6));
    lVar8 = (ulong)(uint)(*param_3 * *param_2) << 0x20;
    uVar10 = (ulong)(uint)(param_3[4] * param_2[4]);
    break;
  case 3:
  case 5:
  case 6:
  case 7:
    goto switchD_0018fc7c_caseD_3;
  case 4:
  case 8:
    uVar6 = *(undefined8 *)param_3;
    uVar3 = *(undefined8 *)(param_3 + 3);
    uVar13 = NEON_rev64(uVar6,4);
    fVar7 = (float)((ulong)uVar13 >> 0x20);
    uVar14 = NEON_rev64(uVar3,4);
    fVar4 = (float)((ulong)uVar14 >> 0x20);
    uVar6 = CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 6) >> 0x20) +
                     (float)((ulong)uVar6 >> 0x20) * param_2[6] +
                     (float)((ulong)uVar3 >> 0x20) * param_2[7],
                     (float)*(undefined8 *)(param_3 + 6) + (float)uVar6 * param_2[6] +
                     (float)uVar3 * param_2[7]);
    lVar8 = CONCAT44(fVar7 * *param_2 + fVar4 * param_2[1],
                     (float)uVar13 * *param_2 + (float)uVar14 * param_2[1]);
    uVar10 = CONCAT44(fVar7 * param_2[3] + fVar4 * param_2[4],
                      (float)uVar13 * param_2[3] + (float)uVar14 * param_2[4]);
    break;
  default:
    uVar12 = 0;
    uVar23 = 0;
    uVar17 = 0x3f800000;
    if (bVar1 == 0x10) {
      uVar6 = *(undefined8 *)param_3;
      fVar4 = *param_2;
      fVar11 = param_2[1];
      fVar7 = param_3[2];
      fVar18 = param_2[2];
      fVar9 = param_2[3];
      fVar19 = param_2[6];
      fVar21 = param_2[7];
      uVar24 = NEON_rev64(uVar6,4);
      uVar13 = *(undefined8 *)(param_3 + 3);
      fVar16 = param_3[5];
      fVar25 = (float)((ulong)uVar24 >> 0x20);
      fVar5 = param_2[4];
      fVar20 = param_2[5];
      uVar15 = *(undefined8 *)(param_3 + 6);
      uVar23 = NEON_fmadd(fVar16,fVar11,fVar7 * fVar4);
      uVar26 = NEON_fmadd(fVar5,fVar16,fVar9 * fVar7);
      uVar17 = NEON_fmadd(fVar21,fVar16,fVar19 * fVar7);
      fVar27 = param_3[8];
      fVar22 = param_2[8];
      uVar3 = NEON_rev64(uVar13,4);
      fVar7 = (float)((ulong)uVar3 >> 0x20);
      uVar14 = NEON_rev64(uVar15,4);
      uVar12 = NEON_fmadd(fVar27,fVar18,uVar23);
      uVar23 = NEON_fmadd(fVar20,fVar27,uVar26);
      uVar6 = CONCAT44((float)((ulong)uVar6 >> 0x20) * fVar19 +
                       (float)((ulong)uVar13 >> 0x20) * fVar21 +
                       (float)((ulong)uVar15 >> 0x20) * fVar22,
                       (float)uVar6 * fVar19 + (float)uVar13 * fVar21 + (float)uVar15 * fVar22);
      fVar16 = (float)((ulong)uVar14 >> 0x20);
      lVar8 = CONCAT44(fVar25 * fVar4 + fVar7 * fVar11 + fVar16 * fVar18,
                       (float)uVar24 * fVar4 + (float)uVar3 * fVar11 + (float)uVar14 * fVar18);
      uVar10 = CONCAT44(fVar25 * fVar9 + fVar7 * fVar5 + fVar16 * fVar20,
                        (float)uVar24 * fVar9 + (float)uVar3 * fVar5 + (float)uVar14 * fVar20);
      uVar17 = NEON_fmadd(fVar22,fVar27,uVar17);
    }
    goto switchD_0018fc7c_caseD_3;
  }
  uVar12 = 0;
  uVar23 = 0;
  uVar17 = 0x3f800000;
switchD_0018fc7c_caseD_3:
  uVar3 = NEON_rev64(lVar8,4);
  uVar13 = NEON_rev64(uVar10,4);
  *(undefined4 *)(param_1 + 1) = uVar12;
  *(undefined4 *)((long)param_1 + 0x14) = uVar23;
  param_1[3] = uVar6;
  *(undefined4 *)(param_1 + 4) = uVar17;
  *(byte *)((long)param_1 + 0x24) = bVar1;
  *param_1 = uVar3;
  *(undefined8 *)((long)param_1 + 0xc) = uVar13;
  *(byte *)((long)param_1 + 0x25) = bVar1;
  return;
}


// ===== 0018fdf8  FUN_0018fdf8 =====

float * FUN_0018fdf8(float *param_1,float *param_2)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  bVar1 = FUN_0018f458(param_2);
  if (bVar1 != 0) {
    bVar2 = FUN_0018f458(param_1);
    if (bVar2 == 0) {
      uVar9 = *(undefined8 *)(param_2 + 2);
      uVar8 = *(undefined8 *)param_2;
      uVar5 = *(undefined8 *)(param_2 + 6);
      uVar11 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)((long)param_1 + 0x1e) = *(undefined8 *)((long)param_2 + 0x1e);
      *(undefined8 *)(param_1 + 2) = uVar9;
      *(undefined8 *)param_1 = uVar8;
      *(undefined8 *)(param_1 + 6) = uVar5;
      *(undefined8 *)(param_1 + 4) = uVar11;
    }
    else {
      if (bVar1 <= bVar2) {
        bVar1 = bVar2;
      }
      switch(bVar1) {
      case 1:
        *(ulong *)(param_1 + 6) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20),
                      (float)*(undefined8 *)(param_1 + 6) + (float)*(undefined8 *)(param_2 + 6));
        break;
      case 2:
        fVar3 = *param_2;
        fVar18 = param_2[4];
        uVar11 = *(undefined8 *)(param_2 + 6);
        *param_1 = fVar3 * *param_1;
        param_1[4] = fVar18 * param_1[4];
        *(ulong *)(param_1 + 6) =
             CONCAT44((float)((ulong)uVar11 >> 0x20) +
                      fVar18 * (float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20),
                      (float)uVar11 + fVar3 * (float)*(undefined8 *)(param_1 + 6));
        break;
      case 3:
      case 5:
      case 6:
      case 7:
        break;
      case 4:
      case 8:
        uVar11 = *(undefined8 *)(param_2 + 6);
        fVar3 = (float)*(undefined8 *)param_2;
        fVar18 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
        fVar6 = (float)*(undefined8 *)(param_2 + 3);
        fVar7 = (float)((ulong)*(undefined8 *)(param_2 + 3) >> 0x20);
        *(ulong *)(param_1 + 3) =
             CONCAT44(fVar18 * param_1[3] + fVar7 * param_1[4],
                      fVar3 * param_1[3] + fVar6 * param_1[4]);
        *(ulong *)(param_1 + 6) =
             CONCAT44((float)((ulong)uVar11 >> 0x20) + fVar18 * param_1[6] + fVar7 * param_1[7],
                      (float)uVar11 + fVar3 * param_1[6] + fVar6 * param_1[7]);
        *(ulong *)param_1 =
             CONCAT44(fVar18 * *param_1 + fVar7 * param_1[1],fVar3 * *param_1 + fVar6 * param_1[1]);
        break;
      default:
        if (bVar1 == 0x10) {
          fVar3 = *param_1;
          fVar6 = param_1[1];
          fVar18 = param_2[2];
          fVar20 = param_2[5];
          fVar21 = param_1[2];
          fVar22 = param_1[3];
          fVar24 = param_1[6];
          fVar27 = param_1[7];
          fVar10 = (float)*(undefined8 *)param_2;
          fVar12 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
          fVar13 = (float)*(undefined8 *)(param_2 + 3);
          fVar15 = (float)((ulong)*(undefined8 *)(param_2 + 3) >> 0x20);
          uVar4 = NEON_fmadd(fVar20,fVar6,fVar18 * fVar3);
          fVar25 = param_1[4];
          fVar7 = param_1[5];
          uVar19 = NEON_fmadd(fVar27,fVar20,fVar24 * fVar18);
          uVar23 = NEON_fmadd(fVar25,fVar20,fVar22 * fVar18);
          fVar26 = param_2[8];
          fVar14 = param_1[8];
          fVar16 = (float)*(undefined8 *)(param_2 + 6);
          fVar17 = (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20);
          fVar18 = (float)NEON_fmadd(fVar26,fVar21,uVar4);
          fVar20 = (float)NEON_fmadd(fVar7,fVar26,uVar23);
          fVar26 = (float)NEON_fmadd(fVar14,fVar26,uVar19);
          *(ulong *)param_1 =
               CONCAT44(fVar12 * fVar3 + fVar15 * fVar6 + fVar17 * fVar21,
                        fVar10 * fVar3 + fVar13 * fVar6 + fVar16 * fVar21);
          param_1[2] = fVar18;
          *(ulong *)(param_1 + 3) =
               CONCAT44(fVar12 * fVar22 + fVar15 * fVar25 + fVar17 * fVar7,
                        fVar10 * fVar22 + fVar13 * fVar25 + fVar16 * fVar7);
          param_1[5] = fVar20;
          *(ulong *)(param_1 + 6) =
               CONCAT44(fVar12 * fVar24 + fVar15 * fVar27 + fVar17 * fVar14,
                        fVar10 * fVar24 + fVar13 * fVar27 + fVar16 * fVar14);
          param_1[8] = fVar26;
        }
      }
      *(byte *)((long)param_1 + 0x25) = bVar1;
      *(byte *)(param_1 + 9) = bVar1;
    }
  }
  return param_1;
}


// ===== 0018ffc0  FUN_0018ffc0 =====

void FUN_0018ffc0(undefined4 *param_1,float *param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  fVar7 = param_2[7];
  fVar1 = param_2[8];
  fVar3 = param_2[4];
  fVar5 = param_2[5];
  fVar9 = param_2[6];
  fVar14 = *param_2;
  fVar13 = param_2[1];
  fVar12 = param_2[2];
  fVar11 = param_2[3];
  uVar17 = NEON_fnmsub(fVar11,fVar7,fVar9 * fVar3);
  uVar18 = NEON_fnmsub(fVar12,fVar7,fVar13 * fVar1);
  uVar16 = NEON_fnmsub(fVar9,fVar5,fVar11 * fVar1);
  uVar8 = NEON_fnmsub(fVar13,fVar9,fVar14 * fVar7);
  uVar10 = NEON_fnmsub(fVar13,fVar5,fVar12 * fVar3);
  uVar15 = NEON_fnmsub(fVar1,fVar3,fVar7 * fVar5);
  uVar2 = NEON_fnmsub(fVar14,fVar1,fVar12 * fVar9);
  uVar6 = NEON_fnmsub(fVar12,fVar11,fVar14 * fVar5);
  uVar4 = NEON_fnmsub(fVar14,fVar3,fVar13 * fVar11);
  *param_1 = uVar15;
  param_1[1] = uVar18;
  param_1[2] = uVar10;
  param_1[3] = uVar16;
  param_1[4] = uVar2;
  param_1[5] = uVar6;
  param_1[6] = uVar17;
  param_1[7] = uVar8;
  param_1[8] = uVar4;
  *(undefined2 *)(param_1 + 9) = 0x1000;
  return;
}


// ===== 0019003c  FUN_0019003c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019003c(float *param_1,float *param_2,char *param_3)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined6 uStack_58;
  undefined2 local_52;
  float fStack_50;
  undefined1 uStack_4c;
  byte bStack_4b;
  long local_48;
  
  uVar2 = _UNK_001462a8;
  uVar6 = _DAT_001462a0;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(param_1 + 2) = _UNK_001462a8;
  *(undefined8 *)param_1 = uVar6;
  *(undefined8 *)(param_1 + 6) = uVar2;
  *(undefined8 *)(param_1 + 4) = uVar6;
  param_1[8] = 1.0;
  *(undefined2 *)(param_1 + 9) = 0;
  cVar3 = FUN_0018f458();
  if (cVar3 != '\0') {
    if (cVar3 == '\x02') {
      cVar3 = '\0';
      fVar8 = ABS(*param_2);
      if (fVar8 == DAT_00144b68 || fVar8 < DAT_00144b68 != (NAN(fVar8) || NAN(DAT_00144b68)))
      goto joined_r0x00190208;
      fVar8 = ABS(param_2[4]);
      if (fVar8 == DAT_00144b68 || fVar8 < DAT_00144b68 != (NAN(fVar8) || NAN(DAT_00144b68)))
      goto joined_r0x00190208;
      uVar6 = NEON_fmov(0x3f800000,4);
      fVar8 = (float)uVar6 / *param_2;
      fVar7 = (float)((ulong)uVar6 >> 0x20) / param_2[4];
      *param_1 = fVar8;
      param_1[4] = fVar7;
      *(ulong *)(param_1 + 6) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20) * -fVar7,
                    (float)*(undefined8 *)(param_2 + 6) * -fVar8);
    }
    else {
      if (cVar3 == '\x01') {
        *(ulong *)(param_1 + 6) =
             CONCAT44(-(float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20),
                      -(float)*(undefined8 *)(param_2 + 6));
        cVar3 = '\x01';
        goto joined_r0x00190208;
      }
      fVar8 = (float)NEON_fnmsub(param_2[4],param_2[8],param_2[5] * param_2[7]);
      uVar4 = NEON_fnmsub(param_2[2],param_2[7],param_2[1] * param_2[8]);
      uVar5 = NEON_fnmsub(param_2[1],param_2[5],param_2[2] * param_2[4]);
      uVar5 = NEON_fmadd(uVar5,param_2[6],fVar8 * *param_2);
      fVar7 = (float)NEON_fmadd(uVar4,param_2[3],uVar5);
      fVar8 = ABS(fVar7);
      if (fVar8 == DAT_00144b68 || fVar8 < DAT_00144b68 != (NAN(fVar8) || NAN(DAT_00144b68))) {
        cVar3 = '\0';
        goto joined_r0x00190208;
      }
      FUN_0018ffc0(&local_70,param_2);
      if ((fVar7 != 0.0) && (fVar7 = 1.0 / fVar7, fVar7 != 1.0)) {
        local_70 = CONCAT44((float)((ulong)local_70 >> 0x20) * fVar7,(float)local_70 * fVar7);
        uStack_68 = CONCAT44((float)((ulong)uStack_68 >> 0x20) * fVar7,(float)uStack_68 * fVar7);
        uStack_60 = CONCAT44((float)((ulong)uStack_60 >> 0x20) * fVar7,(float)uStack_60 * fVar7);
        fVar8 = (float)(CONCAT26(local_52,uStack_58) >> 0x20) * fVar7;
        fStack_50 = fStack_50 * fVar7;
        uStack_58 = (undefined6)CONCAT44(fVar8,(float)uStack_58 * fVar7);
        local_52 = (undefined2)((uint)fVar8 >> 0x10);
        if (bStack_4b < 2) {
          bStack_4b = 2;
        }
      }
      *(ulong *)((long)param_1 + 0x1e) =
           CONCAT17(bStack_4b,CONCAT16(uStack_4c,CONCAT42(fStack_50,local_52)));
      *(undefined8 *)(param_1 + 2) = uStack_68;
      *(undefined8 *)param_1 = local_70;
      *(ulong *)(param_1 + 6) = CONCAT26(local_52,uStack_58);
      *(undefined8 *)(param_1 + 4) = uStack_60;
    }
  }
  cVar3 = '\x01';
joined_r0x00190208:
  if (param_3 != (char *)0x0) {
    *param_3 = cVar3;
  }
  if (cVar3 != '\0') {
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    *(undefined1 *)((long)param_1 + 0x25) = *(undefined1 *)((long)param_2 + 0x25);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00190218  FUN_00190218 =====

bool FUN_00190218(float *param_1,float *param_2)

{
  if ((((ABS(*param_1 - *param_2) < DAT_00144b68 !=
         (NAN(ABS(*param_1 - *param_2)) || NAN(DAT_00144b68))) &&
       (ABS(param_1[1] - param_2[1]) < DAT_00144b68 !=
        (NAN(ABS(param_1[1] - param_2[1])) || NAN(DAT_00144b68)))) &&
      (ABS(param_1[3] - param_2[3]) < DAT_00144b68 !=
       (NAN(ABS(param_1[3] - param_2[3])) || NAN(DAT_00144b68)))) &&
     ((ABS(param_1[4] - param_2[4]) < DAT_00144b68 !=
       (NAN(ABS(param_1[4] - param_2[4])) || NAN(DAT_00144b68)) &&
      (ABS(param_1[6] - param_2[6]) < DAT_00144b68 !=
       (NAN(ABS(param_1[6] - param_2[6])) || NAN(DAT_00144b68)))))) {
    return ABS(param_1[7] - param_2[7]) < DAT_00144b68 !=
           (NAN(ABS(param_1[7] - param_2[7])) || NAN(DAT_00144b68));
  }
  return false;
}


// ===== 001902a4  FUN_001902a4 =====

uint FUN_001902a4(void)

{
  uint uVar1;
  
  uVar1 = FUN_00190218();
  return ~uVar1 & 1;
}


// ===== 001902c0  FUN_001902c0 =====

undefined1  [16] FUN_001902c0(float *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  byte bVar6;
  ulong uVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28 [2];
  
  bVar6 = FUN_0018f458();
  if (bVar6 < 2) {
    uVar9 = *param_2 + (int)param_1[6];
    uVar7 = (ulong)(uint)(param_2[1] + (int)param_1[7]);
    uVar10 = param_2[2] + (int)param_1[6];
    uVar12 = (ulong)(uint)(param_2[3] + (int)param_1[7]);
    goto LAB_00190698;
  }
  if (bVar6 == 2) {
    fVar15 = (float)NEON_fmadd(*param_1,(float)*param_2,param_1[6]);
    fVar17 = (float)NEON_fmadd(param_1[4],(float)param_2[1],param_1[7]);
    uVar9 = (uint)(*param_1 * (float)(param_2[2] - *param_2));
    uVar11 = (uint)(param_1[4] * (float)(param_2[3] - param_2[1]));
    uVar10 = -uVar9;
    if (-1 < (int)uVar9) {
      uVar10 = uVar9;
    }
    uVar9 = (uVar9 & (int)uVar9 >> 0x1f) + (int)fVar15;
    uVar1 = (uVar11 & (int)uVar11 >> 0x1f) + (int)fVar17;
    uVar7 = (ulong)uVar1;
    uVar2 = -uVar11;
    if (-1 < (int)uVar11) {
      uVar2 = uVar11;
    }
    uVar10 = uVar9 + uVar10;
    uVar12 = (ulong)(uVar1 + uVar2);
    goto LAB_00190698;
  }
  if (0xf < bVar6) {
    uVar12 = 0;
    uVar10 = 0;
    uVar7 = 0;
    uVar9 = 0;
    goto LAB_00190698;
  }
  local_28[0] = 0.0;
  local_28[1] = 0.0;
  fVar15 = (float)*param_2;
  fVar17 = (float)param_2[1];
  if ((bVar6 == 8) || (uVar16 = 0, bVar6 == 4)) {
    local_28[1] = (float)*(undefined8 *)(param_1 + 6) + (float)*(undefined8 *)param_1 * fVar15 +
                  (float)*(undefined8 *)(param_1 + 3) * fVar17;
    local_28[0] = (float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) +
                  (float)((ulong)*(undefined8 *)param_1 >> 0x20) * fVar15 +
                  (float)((ulong)*(undefined8 *)(param_1 + 3) >> 0x20) * fVar17;
    uVar16 = CONCAT44(local_28[0],local_28[1]);
  }
  local_2c = (float)uVar16;
  local_34 = (float)uVar16;
  local_30 = (float)((ulong)uVar16 >> 0x20);
  local_38 = local_30;
  fVar18 = (float)(param_2[2] + 1);
  if ((bVar6 == 4) || (uVar13 = uVar16, bVar6 == 8)) {
    local_28[1] = (float)*(undefined8 *)(param_1 + 6) + (float)*(undefined8 *)param_1 * fVar18 +
                  (float)*(undefined8 *)(param_1 + 3) * fVar17;
    local_28[0] = (float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) +
                  (float)((ulong)*(undefined8 *)param_1 >> 0x20) * fVar18 +
                  (float)((ulong)*(undefined8 *)(param_1 + 3) >> 0x20) * fVar17;
    uVar13 = CONCAT44(local_28[0],local_28[1]);
  }
  pfVar8 = local_28 + 1;
  uVar7 = NEON_fcmgt(uVar13,uVar16,4);
  pfVar3 = pfVar8;
  pfVar4 = &local_2c;
  if ((uVar7 & 1) == 0) {
    pfVar3 = &local_34;
    pfVar4 = pfVar8;
  }
  local_2c = *pfVar4;
  pfVar4 = local_28;
  pfVar5 = &local_30;
  if ((uVar7 & 0x100000000) == 0) {
    pfVar4 = &local_38;
    pfVar5 = local_28;
  }
  local_34 = *pfVar3;
  local_30 = *pfVar5;
  local_38 = *pfVar4;
  fVar17 = (float)(param_2[3] + 1);
  switch(bVar6) {
  case 0:
    uVar13 = CONCAT44(fVar17,fVar18);
    local_28[0] = fVar17;
    local_28[1] = fVar18;
    goto LAB_00190540;
  case 1:
    uVar13 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) + fVar17,
                      (float)*(undefined8 *)(param_1 + 6) + fVar18);
    break;
  case 2:
    uVar13 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) + fVar17 * param_1[4],
                      (float)*(undefined8 *)(param_1 + 6) + fVar18 * *param_1);
    break;
  default:
    goto switchD_001904e0_caseD_3;
  case 4:
  case 8:
    uVar13 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) +
                      (float)((ulong)*(undefined8 *)param_1 >> 0x20) * fVar18 +
                      (float)((ulong)*(undefined8 *)(param_1 + 3) >> 0x20) * fVar17,
                      (float)*(undefined8 *)(param_1 + 6) + (float)*(undefined8 *)param_1 * fVar18 +
                      (float)*(undefined8 *)(param_1 + 3) * fVar17);
  }
  local_28[1] = (float)uVar13;
  local_28[0] = (float)((ulong)uVar13 >> 0x20);
LAB_00190540:
switchD_001904e0_caseD_3:
  fVar18 = (float)uVar13;
  fVar14 = (float)((ulong)uVar13 >> 0x20);
  pfVar3 = &local_2c;
  if (fVar18 == local_2c || fVar18 < local_2c != (NAN(fVar18) || NAN(local_2c))) {
    pfVar3 = pfVar8;
  }
  pfVar4 = &local_30;
  if (fVar14 == local_30 || fVar14 < local_30 != (NAN(fVar14) || NAN(local_30))) {
    pfVar4 = local_28;
  }
  pfVar5 = pfVar8;
  if (fVar18 == local_34 || fVar18 < local_34 != (NAN(fVar18) || NAN(local_34))) {
    pfVar5 = &local_34;
  }
  local_2c = *pfVar3;
  local_34 = *pfVar5;
  pfVar3 = local_28;
  if (fVar14 == local_38 || fVar14 < local_38 != (NAN(fVar14) || NAN(local_38))) {
    pfVar3 = &local_38;
  }
  local_30 = *pfVar4;
  local_38 = *pfVar3;
  switch(bVar6) {
  case 0:
    uVar13 = CONCAT44(fVar17,fVar15);
    local_28[1] = fVar15;
    goto LAB_00190610;
  case 1:
    uVar13 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) + fVar17,
                      (float)*(undefined8 *)(param_1 + 6) + fVar15);
    break;
  case 2:
    uVar13 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) + fVar17 * param_1[4],
                      (float)*(undefined8 *)(param_1 + 6) + fVar15 * *param_1);
    break;
  default:
    goto switchD_001905b4_caseD_3;
  case 4:
  case 8:
    uVar13 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) +
                      (float)((ulong)*(undefined8 *)param_1 >> 0x20) * fVar15 +
                      (float)((ulong)*(undefined8 *)(param_1 + 3) >> 0x20) * fVar17,
                      (float)*(undefined8 *)(param_1 + 6) + (float)*(undefined8 *)param_1 * fVar15 +
                      (float)*(undefined8 *)(param_1 + 3) * fVar17);
  }
  fVar17 = (float)((ulong)uVar13 >> 0x20);
  local_28[1] = (float)uVar13;
LAB_00190610:
  local_28[0] = fVar17;
switchD_001905b4_caseD_3:
  fVar15 = (float)uVar13;
  fVar17 = (float)((ulong)uVar13 >> 0x20);
  pfVar3 = &local_2c;
  if (fVar15 == local_2c || fVar15 < local_2c != (NAN(fVar15) || NAN(local_2c))) {
    pfVar3 = pfVar8;
  }
  pfVar4 = &local_30;
  if (fVar17 == local_30 || fVar17 < local_30 != (NAN(fVar17) || NAN(local_30))) {
    pfVar4 = local_28;
  }
  if (fVar15 == local_34 || fVar15 < local_34 != (NAN(fVar15) || NAN(local_34))) {
    pfVar8 = &local_34;
  }
  pfVar5 = local_28;
  if (fVar17 == local_38 || fVar17 < local_38 != (NAN(fVar17) || NAN(local_38))) {
    pfVar5 = &local_38;
  }
  uVar9 = (uint)*pfVar3;
  uVar11 = (uint)*pfVar4;
  uVar7 = (ulong)uVar11;
  uVar10 = (int)((float)(int)*pfVar8 - (float)(int)*pfVar3) + uVar9;
  uVar12 = (ulong)((int)((float)(int)*pfVar5 - (float)(int)*pfVar4) + uVar11);
LAB_00190698:
  auVar19._8_8_ = (ulong)uVar10 | uVar12 << 0x20;
  auVar19._0_8_ = (ulong)uVar9 | uVar7 << 0x20;
  return auVar19;
}


// ===== 001906b8  FUN_001906b8 =====

void FUN_001906b8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  cVar2 = FUN_0018f458();
  if (cVar2 == '\x02') {
    iVar3 = FUN_00192408(param_3);
    if (iVar3 == 1) {
      local_58 = FUN_00192884(param_3);
      local_48 = FUN_001902c0(param_2,local_58);
      FUN_001911a0(param_1,local_48);
      goto LAB_00190770;
    }
  }
  else if (cVar2 == '\x01') {
    FUN_0019125c(param_1,param_3);
    local_48._0_8_ =
         CONCAT44((int)(float)(int)(float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20),
                  (int)(float)(int)(float)*(undefined8 *)(param_2 + 0x18));
    FUN_0019139c(param_1,local_48);
    goto LAB_00190770;
  }
  FUN_0019125c(param_1,param_3);
LAB_00190770:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00190798  FUN_00190798 =====

undefined1  [16] FUN_00190798(float *param_1,ulong *param_2)

{
  char cVar1;
  float fVar2;
  ulong uVar3;
  float fVar6;
  ulong uVar4;
  undefined1 auVar5 [16];
  float fVar7;
  float fVar8;
  
  uVar3 = *param_2;
  cVar1 = FUN_0018f458();
  fVar7 = (float)uVar3;
  fVar8 = (float)(uVar3 >> 0x20);
  uVar4 = 0;
  switch(cVar1) {
  case '\0':
    uVar4 = uVar3;
    break;
  case '\x01':
    uVar4 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) + fVar8,
                     (float)*(undefined8 *)(param_1 + 6) + fVar7);
    break;
  case '\x02':
    uVar4 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) + fVar8 * param_1[4],
                     (float)*(undefined8 *)(param_1 + 6) + fVar7 * *param_1);
    break;
  case '\x03':
  case '\x05':
  case '\x06':
  case '\a':
    break;
  default:
    if (cVar1 != '\x10') break;
  case '\x04':
  case '\b':
    fVar2 = (float)*(undefined8 *)(param_1 + 6) + (float)*(undefined8 *)param_1 * fVar7 +
            (float)*(undefined8 *)(param_1 + 3) * fVar8;
    fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) +
            (float)((ulong)*(undefined8 *)param_1 >> 0x20) * fVar7 +
            (float)((ulong)*(undefined8 *)(param_1 + 3) >> 0x20) * fVar8;
    uVar4 = CONCAT44(fVar6,fVar2);
    if (cVar1 == '\x10') {
      fVar7 = 1.0 / (param_1[8] + param_1[2] * fVar7 + param_1[5] * fVar8);
      uVar4 = CONCAT44(fVar6 * fVar7,fVar2 * fVar7);
    }
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar4;
  return auVar5;
}


// ===== 00190878  FUN_00190878 =====

undefined8 FUN_00190878(undefined8 param_1,float *param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  char cVar4;
  undefined8 uVar5;
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar6;
  long *plVar7;
  char *pcVar8;
  byte local_68 [8];
  ulong local_60;
  void *local_58;
  locale alStack_50 [8];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00190af0(param_1,"[Matrix: ",9);
  uVar5 = FUN_00190af0(uVar5,"type =",6);
  cVar4 = FUN_0018f458(param_2);
  pcVar8 = "MatrixType::None";
  switch(cVar4) {
  case '\0':
    break;
  case '\x01':
    pcVar8 = "MatrixType::Translate";
    break;
  case '\x02':
    pcVar8 = "MatrixType::Scale";
    break;
  case '\x04':
    pcVar8 = "MatrixType::Rotate";
    break;
  case '\b':
    pcVar8 = "MatrixType::Shear";
    break;
  default:
    if (cVar4 == '\x10') {
      pcVar8 = "MatrixType::Project";
      break;
    }
  case '\x03':
  case '\x05':
  case '\x06':
  case '\a':
    pcVar8 = "";
  }
  FUN_001634e0(local_68,pcVar8);
  uVar1 = (ulong)(local_68[0] >> 1);
  pvVar3 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    uVar1 = local_60;
    pvVar3 = local_58;
  }
  uVar5 = FUN_00190af0(uVar5,pvVar3,uVar1);
  pbVar6 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)FUN_00190af0(uVar5,", Data : ",9);
  uVar5 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    (pbVar6,*param_2);
  pbVar6 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)FUN_00190af0(uVar5,&DAT_00144ef0,1)
  ;
  uVar5 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    (pbVar6,param_2[1]);
  pbVar6 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)FUN_00190af0(uVar5,&DAT_00144ef0,1)
  ;
  uVar5 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    (pbVar6,param_2[2]);
  pbVar6 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)FUN_00190af0(uVar5,&DAT_00144ef0,1)
  ;
  uVar5 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    (pbVar6,param_2[3]);
  pbVar6 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)FUN_00190af0(uVar5,&DAT_00144ef0,1)
  ;
  uVar5 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    (pbVar6,param_2[4]);
  pbVar6 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)FUN_00190af0(uVar5,&DAT_00144ef0,1)
  ;
  uVar5 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    (pbVar6,param_2[5]);
  pbVar6 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)FUN_00190af0(uVar5,&DAT_00144ef0,1)
  ;
  uVar5 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    (pbVar6,param_2[6]);
  pbVar6 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)FUN_00190af0(uVar5,&DAT_00144ef0,1)
  ;
  uVar5 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    (pbVar6,param_2[7]);
  pbVar6 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)FUN_00190af0(uVar5,&DAT_00144ef0,1)
  ;
  uVar5 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    (pbVar6,param_2[8]);
  uVar5 = FUN_00190af0(uVar5,&DAT_00144ef0,1);
  pbVar6 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)FUN_00190af0(uVar5,&DAT_001454c4,1)
  ;
  std::__ndk1::ios_base::getloc();
  plVar7 = (long *)std::__ndk1::locale::use_facet(alStack_50,(id *)PTR_id_0020f840);
  cVar4 = (**(code **)(*plVar7 + 0x38))(plVar7,10);
  std::__ndk1::locale::~locale(alStack_50);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(pbVar6,cVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush(pbVar6);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00190af0  FUN_00190af0 =====

basic_ostream * FUN_00190af0(basic_ostream *param_1,long param_2,long param_3)

{
  basic_ostream *pbVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  sentry local_70 [16];
  locale alStack_60 [8];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry(local_70,param_1);
  if (local_70[0] != (sentry)0x0) {
    pbVar1 = param_1 + *(long *)(*(long *)param_1 + -0x18);
    uVar6 = *(undefined8 *)(pbVar1 + 0x28);
    lVar5 = param_2 + param_3;
    if ((*(uint *)(pbVar1 + 8) & 0xb0) != 0x20) {
      lVar5 = param_2;
    }
    if (*(int *)(pbVar1 + 0x90) == -1) {
      std::__ndk1::ios_base::getloc();
      plVar4 = (long *)std::__ndk1::locale::use_facet(alStack_60,(id *)PTR_id_0020f840);
      uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
      std::__ndk1::locale::~locale(alStack_60);
      *(uint *)(pbVar1 + 0x90) = uVar3 & 0xff;
    }
    lVar5 = FUN_00190c20(uVar6,param_2,lVar5,param_2 + param_3,pbVar1);
    if (lVar5 == 0) {
      std::__ndk1::ios_base::clear
                ((ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18)),
                 *(uint *)((ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18)) + 0x20) | 5);
    }
  }
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(local_70);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00190c20  FUN_00190c20 =====

long * FUN_00190c20(long *param_1,long param_2,long param_3,long param_4,long param_5,int param_6)

{
  ulong __n;
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  undefined8 local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_1 == (long *)0x0) goto LAB_00190d70;
  lVar4 = param_3 - param_2;
  __n = *(long *)(param_5 + 0x18) - (param_4 - param_2);
  if (__n == 0 || *(long *)(param_5 + 0x18) < param_4 - param_2) {
    __n = 0;
  }
  if ((lVar4 < 1) || (lVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_2,lVar4), lVar2 == lVar4)
     ) {
    if (0 < (long)__n) {
      if (__n < 0x17) {
        pvVar5 = (void *)((ulong)&local_80 | 1);
        local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
      }
      else {
        uVar3 = __n + 0x10 & 0xfffffffffffffff0;
        pvVar5 = operator_new(uVar3);
        local_80 = uVar3 | 1;
        local_78 = __n;
        local_70 = pvVar5;
      }
      memset(pvVar5,param_6,__n);
      *(undefined1 *)((long)pvVar5 + __n) = 0;
      pvVar5 = local_70;
      if ((local_80 & 1) == 0) {
        pvVar5 = (void *)((long)&local_80 + 1);
      }
      uVar3 = (**(code **)(*param_1 + 0x60))(param_1,pvVar5,__n);
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      if (uVar3 != __n) goto LAB_00190d6c;
    }
    param_4 = param_4 - param_3;
    if ((param_4 < 1) ||
       (lVar4 = (**(code **)(*param_1 + 0x60))(param_1,param_3,param_4), lVar4 == param_4)) {
      *(undefined8 *)(param_5 + 0x18) = 0;
      goto LAB_00190d70;
    }
  }
LAB_00190d6c:
  param_1 = (long *)0x0;
LAB_00190d70:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00190da8  FUN_00190da8 =====

uint FUN_00190da8(uint *param_1)

{
  FILE *__stream;
  uint *puVar1;
  ulong uVar2;
  uint *puVar3;
  uint uVar4;
  
  puVar3 = *(uint **)(param_1 + 4);
  if (puVar3 == (uint *)0x0) {
    uVar2 = 0;
    uVar4 = 1;
  }
  else {
    uVar4 = puVar3[2];
    uVar2 = (ulong)*puVar3;
  }
  __stream = (FILE *)(PTR___sF_0020f848 + 0x130);
  puVar1 = param_1;
  if (puVar3 != (uint *)0x0) {
    puVar1 = puVar3 + 4;
  }
  fprintf(__stream,"num: %d size: %d\n",(ulong)uVar4,uVar2);
  fprintf(__stream,"extents: %d %d %d %d\n",(ulong)*param_1,(ulong)param_1[1],(ulong)param_1[2],
          (ulong)param_1[3]);
  if (0 < (int)uVar4) {
    uVar2 = (ulong)uVar4;
    puVar3 = puVar1 + 2;
    do {
      fprintf(__stream,"%d %d %d %d \n",(ulong)puVar3[-2],(ulong)puVar3[-1],(ulong)*puVar3,
              (ulong)puVar3[1]);
      uVar2 = uVar2 - 1;
      puVar3 = puVar3 + 4;
    } while (uVar2 != 0);
  }
  fputc(10,__stream);
  return uVar4;
}


// ===== 00190e78  FUN_00190e78 =====

void FUN_00190e78(undefined8 param_1,void *param_2)

{
  void *pvVar1;
  long *__ptr;
  
  pvVar1 = *(void **)((long)param_2 + 8);
  if (pvVar1 != (void *)0x0) {
    __ptr = *(long **)((long)pvVar1 + 0x10);
    if ((__ptr != (long *)0x0) && (*__ptr != 0)) {
      free(__ptr);
      pvVar1 = *(void **)((long)param_2 + 8);
      if (pvVar1 == (void *)0x0) goto LAB_00190eb4;
    }
    operator_delete(pvVar1);
  }
LAB_00190eb4:
  operator_delete(param_2);
  return;
}


// ===== 00190ec4  FUN_00190ec4 =====

void FUN_00190ec4(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int *piVar6;
  undefined *local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  if ((uint)*(undefined8 *)*param_1 < 2) goto LAB_00190f4c;
  uVar4 = FUN_00190f70(&local_30);
  piVar6 = (int *)*param_1;
  iVar5 = (int)*(undefined8 *)piVar6;
  if (iVar5 != -1) {
    if (iVar5 != 0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar5 != 1) goto LAB_00190f30;
    }
    FUN_00190e78(uVar4,*param_1);
  }
LAB_00190f30:
  *param_1 = local_30;
  local_30 = &DAT_002149e8;
  FUN_00191324(&local_30);
LAB_00190f4c:
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00190f70  FUN_00190f70 =====

void FUN_00190f70(long *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined4 *)operator_new(0x10);
  *puVar1 = 0xffffffff;
  *param_1 = (long)puVar1;
  pvVar2 = operator_new(0x18);
  *(void **)(puVar1 + 2) = pvVar2;
  *puVar1 = 1;
  lVar3 = *param_1;
  puVar4 = *(undefined8 **)(lVar3 + 8);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = &DAT_001471c0;
  if ((undefined *)*param_2 != &DAT_002149e8) {
    FUN_00191008(*(undefined8 *)(lVar3 + 8),*(undefined8 *)((undefined *)*param_2 + 8));
    return;
  }
  return;
}


// ===== 00191008  FUN_00191008 =====

undefined8 FUN_00191008(undefined8 *param_1,undefined8 *param_2)

{
  size_t __size;
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 == param_2) {
    return 1;
  }
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  plVar2 = (long *)param_2[2];
  if ((plVar2 == (long *)0x0) || (*plVar2 == 0)) {
    plVar1 = (long *)param_1[2];
    if ((plVar1 != (long *)0x0) && (*plVar1 != 0)) {
      free(plVar1);
      plVar2 = (long *)param_2[2];
    }
    param_1[2] = plVar2;
    return 1;
  }
  plVar1 = (long *)param_1[2];
  if (plVar1 != (long *)0x0) {
    lVar3 = plVar2[1];
    if (lVar3 <= *plVar1) goto LAB_0019109c;
    if (*plVar1 != 0) {
      free(plVar1);
      plVar2 = (long *)param_2[2];
    }
  }
  if ((((ulong)plVar2[1] >> 0x1c == 0) && (lVar3 = plVar2[1] * 0x10, lVar3 != 0xfffffff0)) &&
     (__size = lVar3 + 0x10, __size != 0)) {
    plVar1 = (long *)malloc(__size);
    param_1[2] = plVar1;
    if (plVar1 != (long *)0x0) {
      plVar2 = (long *)param_2[2];
      lVar3 = plVar2[1];
      *plVar1 = lVar3;
LAB_0019109c:
      plVar1[1] = lVar3;
      memmove(plVar1 + 2,plVar2 + 2,lVar3 << 4);
      return 1;
    }
  }
  else {
    param_1[2] = 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = &DAT_001471d0;
  return 0;
}


// ===== 0019110c  FUN_0019110c =====

void FUN_0019110c(undefined8 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int local_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int *local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  local_38 = param_4 + param_2;
  iStack_34 = param_5 + param_3;
  local_40 = param_2;
  iStack_3c = param_3;
  FUN_001911a0(&local_30,&local_40);
  if (1 < (int)*(undefined8 *)local_30 + 1U) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_30,0x10);
      if (bVar2) {
        *local_30 = *local_30 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = local_30;
  FUN_00191324(&local_30);
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001911a0  FUN_001911a0 =====

void FUN_001911a0(long *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  
  if ((*param_2 < param_2[2]) && (param_2[1] < param_2[3])) {
    puVar5 = (undefined4 *)operator_new(0x10);
    *puVar5 = 0xffffffff;
    *param_1 = (long)puVar5;
    pvVar6 = operator_new(0x18);
    *(void **)(puVar5 + 2) = pvVar6;
    *puVar5 = 1;
    iVar1 = *param_2;
    iVar3 = param_2[1];
    iVar2 = param_2[2];
    iVar4 = param_2[3];
    puVar7 = *(undefined8 **)(*param_1 + 8);
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = &DAT_001471c0;
    FUN_001918e4(puVar7,puVar7,iVar1,iVar3,iVar2 - iVar1,iVar4 - iVar3);
    return;
  }
  *param_1 = (long)&DAT_002149e8;
  return;
}


// ===== 0019125c  FUN_0019125c =====

void FUN_0019125c(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_2;
  *param_1 = piVar3;
  if (1 < (int)*(undefined8 *)piVar3 + 1U) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return;
}


// ===== 001912a0  FUN_001912a0 =====

undefined8 * FUN_001912a0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_2;
  if (1 < (int)*(undefined8 *)piVar4 + 1U) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  piVar4 = (int *)*param_1;
  iVar3 = (int)*(undefined8 *)piVar4;
  if (iVar3 != -1) {
    if (iVar3 != 0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 != 1) goto LAB_0019130c;
    }
    FUN_00190e78(param_1,*param_1);
  }
LAB_0019130c:
  *param_1 = *param_2;
  return param_1;
}


// ===== 00191324  FUN_00191324 =====

void FUN_00191324(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  iVar3 = (int)*(undefined8 *)piVar4;
  if (iVar3 == -1) {
    return;
  }
  if (iVar3 != 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 != 1) {
      return;
    }
  }
  FUN_00190e78(param_1,*param_1);
  return;
}


// ===== 0019139c  FUN_0019139c =====

void FUN_0019139c(long *param_1,int *param_2)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  
  if ((((*param_2 != 0) || (param_2[1] != 0)) && ((undefined *)*param_1 != &DAT_002149e8)) &&
     ((lVar4 = *(long *)(*(long *)((undefined *)*param_1 + 8) + 0x10), lVar4 == 0 ||
      (*(long *)(lVar4 + 8) != 0)))) {
    FUN_00190ec4(param_1);
    plVar11 = *(long **)(*param_1 + 8);
    iVar12 = (int)*(undefined8 *)param_2;
    iVar14 = (int)*plVar11 + iVar12;
    iVar13 = (int)((ulong)*(undefined8 *)param_2 >> 0x20);
    iVar15 = (int)((ulong)*plVar11 >> 0x20) + iVar13;
    iVar16 = (int)plVar11[1] + iVar12;
    iVar17 = (int)((ulong)plVar11[1] >> 0x20) + iVar13;
    *plVar11 = CONCAT44(iVar15,iVar14);
    plVar11[1] = CONCAT44(iVar17,iVar16);
    if ((long)((long)iVar15 + 0x80000000U | (long)iVar14 + 0x80000000U | 0x7fffffffU - (long)iVar16
              | 0x7fffffffU - (long)iVar17) < 0) {
      if ((long)(0x7fffffffU - (long)iVar15 | 0x7fffffffU - (long)iVar14 |
                 (long)iVar16 + 0x80000000U | (long)iVar17 + 0x80000000U) < 1) {
        plVar3 = (long *)plVar11[2];
        plVar11[1] = CONCAT44(iVar15,iVar14);
        if ((plVar3 != (long *)0x0) && (*plVar3 != 0)) {
          free(plVar3);
        }
        plVar11[2] = (long)&DAT_001471c0;
      }
      else {
        plVar3 = (long *)plVar11[2];
        if ((plVar3 != (long *)0x0) && (uVar7 = plVar3[1], (int)uVar7 != 0)) {
          plVar1 = plVar3 + 2;
          uVar8 = uVar7;
          plVar9 = plVar1;
          plVar10 = plVar1;
          do {
            uVar2 = (int)uVar7 - 1;
            uVar7 = (ulong)uVar2;
            lVar4 = CONCAT44((int)((ulong)*plVar10 >> 0x20) + iVar13,(int)*plVar10 + iVar12);
            iVar14 = (int)plVar10[1] + iVar12;
            iVar15 = (int)((ulong)plVar10[1] >> 0x20) + iVar13;
            uVar18 = NEON_rev64(lVar4,4);
            lVar19 = 0x7fffffff - (long)(int)uVar18;
            lVar20 = 0x7fffffff - (long)(int)((ulong)uVar18 >> 0x20);
            lVar21 = (long)iVar14 + 0x80000000;
            lVar22 = (long)iVar15 + 0x80000000;
            plVar9[1] = CONCAT44(iVar15,iVar14);
            *plVar9 = lVar4;
            if (CONCAT17((byte)((ulong)lVar19 >> 0x38) | (byte)((ulong)lVar20 >> 0x38) |
                         (byte)((ulong)lVar21 >> 0x38) | (byte)((ulong)lVar22 >> 0x38),
                         CONCAT16((byte)((ulong)lVar19 >> 0x30) | (byte)((ulong)lVar20 >> 0x30) |
                                  (byte)((ulong)lVar21 >> 0x30) | (byte)((ulong)lVar22 >> 0x30),
                                  CONCAT15((byte)((ulong)lVar19 >> 0x28) |
                                           (byte)((ulong)lVar20 >> 0x28) |
                                           (byte)((ulong)lVar21 >> 0x28) |
                                           (byte)((ulong)lVar22 >> 0x28),
                                           CONCAT14((byte)((ulong)lVar19 >> 0x20) |
                                                    (byte)((ulong)lVar20 >> 0x20) |
                                                    (byte)((ulong)lVar21 >> 0x20) |
                                                    (byte)((ulong)lVar22 >> 0x20),
                                                    CONCAT13((byte)((ulong)lVar19 >> 0x18) |
                                                             (byte)((ulong)lVar20 >> 0x18) |
                                                             (byte)((ulong)lVar21 >> 0x18) |
                                                             (byte)((ulong)lVar22 >> 0x18),
                                                             CONCAT12((byte)((ulong)lVar19 >> 0x10)
                                                                      | (byte)((ulong)lVar20 >> 0x10
                                                                              ) |
                                                                      (byte)((ulong)lVar21 >> 0x10)
                                                                      | (byte)((ulong)lVar22 >> 0x10
                                                                              ),
                                                                      CONCAT11((byte)((ulong)lVar19
                                                                                     >> 8) |
                                                                               (byte)((ulong)lVar20
                                                                                     >> 8) |
                                                                               (byte)((ulong)lVar21
                                                                                     >> 8) |
                                                                               (byte)((ulong)lVar22
                                                                                     >> 8),
                                                                               (byte)lVar19 |
                                                                               (byte)lVar20 |
                                                                               (byte)lVar21 |
                                                                               (byte)lVar22))))))) <
                1) {
              uVar8 = uVar8 - 1;
              plVar3[1] = uVar8;
            }
            else {
              plVar9 = plVar9 + 2;
            }
            plVar10 = plVar10 + 2;
          } while (uVar2 != 0);
          if (plVar10 != plVar9) {
            if (uVar8 != 1) {
              FUN_001929e0(plVar11);
              return;
            }
            lVar4 = *plVar1;
            plVar11[1] = plVar3[3];
            *plVar11 = lVar4;
            if (*plVar3 != 0) {
              free(plVar3);
            }
            plVar11[2] = 0;
          }
        }
      }
    }
    else {
      puVar5 = (undefined8 *)plVar11[2];
      if (puVar5 != (undefined8 *)0x0) {
        iVar14 = *(int *)(puVar5 + 1);
        for (; iVar14 != 0; iVar14 = iVar14 + -1) {
          puVar6 = puVar5 + 2;
          puVar5[3] = CONCAT44((int)((ulong)puVar5[3] >> 0x20) + iVar13,(int)puVar5[3] + iVar12);
          *puVar6 = CONCAT44((int)((ulong)*puVar6 >> 0x20) + iVar13,(int)*puVar6 + iVar12);
          puVar5 = puVar6;
        }
      }
    }
  }
  return;
}


// ===== 00191628  FUN_00191628 =====

bool FUN_00191628(long *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  long lVar15;
  int *piVar16;
  int *piVar17;
  ulong uVar18;
  
  iVar11 = *param_2;
  iVar12 = param_2[1];
  piVar13 = *(int **)(*param_1 + 8);
  iVar3 = param_2[2];
  iVar4 = param_2[3];
  lVar15 = *(long *)(piVar13 + 4);
  if (lVar15 == 0) {
    iVar14 = 1;
  }
  else {
    iVar14 = *(int *)(lVar15 + 8);
    if (iVar14 == 0) goto LAB_001917a8;
  }
  iVar5 = piVar13[2];
  if ((((iVar11 < iVar5) && (iVar6 = *piVar13, iVar6 < iVar3)) &&
      (iVar7 = piVar13[3], iVar12 < iVar7)) && (iVar8 = piVar13[1], iVar8 < iVar4)) {
    if (iVar14 != 1) {
      bVar9 = false;
      bVar10 = false;
      piVar13 = (int *)(lVar15 + (long)iVar14 * 0x10 + 0x10);
      piVar16 = (int *)(lVar15 + 0x10);
      do {
        piVar17 = piVar13;
        if (piVar16[3] <= iVar12) {
          do {
            if ((long)piVar17 - (long)piVar16 == 0x10) {
              if (piVar16[3] <= iVar12) {
                piVar16 = piVar17;
              }
              break;
            }
            uVar18 = (long)piVar17 - (long)piVar16 >> 4;
            if ((long)uVar18 < 0) {
              uVar18 = uVar18 + 1;
            }
            piVar1 = piVar16 + (uVar18 & 0x1ffffffffffffffe) * 2;
            piVar2 = piVar1;
            if (piVar1[3] <= iVar12) {
              piVar2 = piVar17;
              piVar16 = piVar1;
            }
            piVar17 = piVar2;
          } while (piVar2 != piVar16);
          if (piVar16 == piVar13) goto LAB_00191794;
        }
        iVar14 = piVar16[1];
        if (iVar12 < iVar14) {
          if (bVar10) goto LAB_00191798;
          if (iVar4 <= iVar14) goto LAB_001917a8;
          bVar9 = true;
          iVar12 = iVar14;
        }
        if (iVar11 < piVar16[2]) {
          iVar14 = *piVar16;
          if (iVar11 < iVar14) {
            if ((bVar10) || (iVar14 < iVar3)) goto LAB_00191798;
            bVar10 = false;
            bVar9 = true;
          }
          else if (iVar14 < iVar3) {
            if (bVar9) goto LAB_00191798;
            bVar10 = true;
          }
          if ((piVar16[2] < iVar3) || (iVar12 = piVar16[3], iVar4 <= iVar12)) goto LAB_00191794;
        }
        piVar16 = piVar16 + 4;
        if (piVar16 == piVar13) goto LAB_00191794;
      } while( true );
    }
    bVar9 = ((iVar12 >= iVar8 && iVar11 >= iVar6) && iVar5 >= iVar3) && SBORROW4(iVar7,iVar4);
    bVar10 = ((iVar12 < iVar8 || iVar11 < iVar6) || iVar5 < iVar3) || iVar7 - iVar4 < 0;
    goto LAB_0019179c;
  }
  goto LAB_001917a8;
LAB_00191794:
  if (bVar10) {
LAB_00191798:
    bVar9 = SBORROW4(iVar12,iVar4);
    bVar10 = iVar12 - iVar4 < 0;
LAB_0019179c:
    iVar11 = 1;
    if (bVar10 != bVar9) {
      iVar11 = 2;
    }
    goto LAB_001917ac;
  }
LAB_001917a8:
  iVar11 = 0;
LAB_001917ac:
  return iVar11 == 1;
}


// ===== 001917b8  FUN_001917b8 =====

void FUN_001917b8(long *param_1,long *param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)*param_2;
  if (piVar4 != (int *)&DAT_002149e8) {
    piVar5 = *(int **)(piVar4 + 2);
    if ((*(long *)(piVar5 + 4) == 0) || (*(long *)(*(long *)(piVar5 + 4) + 8) != 0)) {
      uVar3 = FUN_00191628(param_2,param_3);
      if ((uVar3 & 1) != 0) {
        *param_1 = (long)piVar4;
        if (1 < (int)*(undefined8 *)piVar4 + 1U) {
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar2) {
              *piVar4 = *piVar4 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        return;
      }
      if ((((*piVar5 < *param_3) || (param_3[2] < piVar5[2])) || (piVar5[1] < param_3[1])) ||
         (param_3[3] < piVar5[3])) {
        *param_1 = (long)&DAT_002149e8;
        FUN_00190ec4(param_1);
        FUN_001918e4(*(undefined8 *)(*param_1 + 8),*(undefined8 *)(*param_2 + 8),*param_3,param_3[1]
                     ,param_3[2] - *param_3,param_3[3] - param_3[1]);
        return;
      }
    }
  }
  FUN_001911a0(param_1,param_3);
  return;
}


// ===== 001918e4  FUN_001918e4 =====

void FUN_001918e4(undefined8 param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
  long lVar1;
  int local_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_5 + param_3;
  iStack_44 = param_6 + param_4;
  local_50 = param_3;
  iStack_4c = param_4;
  if ((param_3 < local_48) && (param_4 < iStack_44)) {
    local_40 = 0;
    FUN_00191c28(param_1,param_2,&local_50);
  }
  else {
    if ((local_48 < param_3) || (iStack_44 < param_4)) {
      fprintf((FILE *)(PTR___sF_0020f848 + 0x130),
              "*** BUG ***\nIn %s: %s\nSet a breakpoint on \'_pixman_log_error\' to debug\n\n",
              &DAT_00145e06,"Invalid rectangle passed");
    }
    FUN_00191008(param_1,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00191b18  FUN_00191b18 =====

undefined8 FUN_00191b18(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((((*param_1 == *param_2) && (param_1[2] == param_2[2])) && (param_1[1] == param_2[1])) &&
     (param_1[3] == param_2[3])) {
    lVar3 = *(long *)(param_1 + 4);
    if (lVar3 == 0) {
      lVar4 = 1;
    }
    else {
      lVar4 = *(long *)(lVar3 + 8);
    }
    lVar5 = *(long *)(param_2 + 4);
    if (lVar5 == 0) {
      lVar6 = 1;
    }
    else {
      lVar6 = *(long *)(lVar5 + 8);
    }
    if (lVar4 == lVar6) {
      if (lVar3 != 0) {
        param_1 = (int *)(lVar3 + 0x10);
      }
      if (lVar5 != 0) {
        param_2 = (int *)(lVar5 + 0x10);
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
      lVar4 = -1;
      while( true ) {
        if (lVar3 == 0) {
          lVar5 = 1;
        }
        else {
          lVar5 = *(long *)(lVar3 + 8);
        }
        lVar4 = lVar4 + 1;
        if (lVar4 == lVar5) {
          return 1;
        }
        if (((param_1[-2] != param_2[-2]) || (*param_1 != *param_2)) || (param_1[-1] != param_2[-1])
           ) break;
        piVar1 = param_1 + 1;
        piVar2 = param_2 + 1;
        param_1 = param_1 + 4;
        param_2 = param_2 + 4;
        if (*piVar1 != *piVar2) {
          return 0;
        }
      }
    }
  }
  return 0;
}


// ===== 00191c28  FUN_00191c28 =====

undefined8 FUN_00191c28(int *param_1,int *param_2,int *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_2 == param_3) goto LAB_00191d90;
  puVar4 = *(undefined4 **)(param_2 + 4);
  if ((puVar4 == (undefined4 *)0x0) || (*(long *)(puVar4 + 2) != 0)) {
    puVar3 = *(undefined4 **)(param_3 + 4);
    if ((puVar3 == (undefined4 *)0x0) || (*(long *)(puVar3 + 2) != 0)) {
      if ((((puVar4 != (undefined4 *)0x0) || (*param_3 < *param_2)) || (param_2[2] < param_3[2])) ||
         ((param_3[1] < param_2[1] || (param_2[3] < param_3[3])))) {
        if ((puVar3 != (undefined4 *)0x0) ||
           (((*param_2 < *param_3 || (param_3[2] < param_2[2])) ||
            ((param_2[1] < param_3[1] || (param_3[3] < param_2[3])))))) {
          uVar1 = FUN_00192a60(param_1,param_2,param_3,FUN_0019351c,1,1);
          if ((int)uVar1 != 0) {
            uVar1 = NEON_smin(*(undefined8 *)param_2,*(undefined8 *)param_3,4);
            *(undefined8 *)param_1 = uVar1;
            uVar1 = NEON_smax(*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_3 + 2),4);
            *(undefined8 *)(param_1 + 2) = uVar1;
            return 1;
          }
          return uVar1;
        }
        goto LAB_00191d5c;
      }
    }
    else if (puVar3 == &DAT_001471d0) {
      plVar2 = *(long **)(param_1 + 4);
      if ((plVar2 != (long *)0x0) && (*plVar2 != 0)) {
        free(plVar2);
      }
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *(undefined4 **)(param_1 + 4) = &DAT_001471d0;
      return 0;
    }
    if (param_1 != param_2) goto LAB_00191d90;
  }
  else {
    if (puVar4 == &DAT_001471d0) {
      plVar2 = *(long **)(param_1 + 4);
      if ((plVar2 != (long *)0x0) && (*plVar2 != 0)) {
        free(plVar2);
      }
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *(undefined4 **)(param_1 + 4) = &DAT_001471d0;
      return 0;
    }
LAB_00191d5c:
    param_2 = param_3;
    if (param_1 != param_3) {
LAB_00191d90:
      uVar1 = FUN_00191008(param_1,param_2);
      return uVar1;
    }
  }
  return 1;
}


// ===== 00192408  FUN_00192408 =====

undefined4 FUN_00192408(undefined8 *param_1)

{
  long lVar1;
  
  if ((undefined *)*param_1 != &DAT_002149e8) {
    lVar1 = *(long *)(*(long *)((undefined *)*param_1 + 8) + 0x10);
    if (lVar1 == 0) {
      return 1;
    }
    if (*(long *)(lVar1 + 8) != 0) {
      return *(undefined4 *)(lVar1 + 8);
    }
  }
  return 0;
}


// ===== 00192488  FUN_00192488 =====

long * FUN_00192488(long *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  int iVar9;
  int *piVar10;
  undefined *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  if ((undefined *)*param_1 == &DAT_002149e8) {
LAB_00192570:
    uVar8 = FUN_001911a0(&local_70,param_2);
    piVar10 = (int *)*param_1;
    iVar9 = (int)*(undefined8 *)piVar10;
    if (iVar9 != -1) {
      if (iVar9 != 0) {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar5) {
            *piVar10 = *piVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_001925a0:
        if (iVar9 != 1) goto LAB_001925b0;
      }
LAB_001925a8:
      FUN_00190e78(uVar8,*param_1);
    }
  }
  else {
    piVar10 = *(int **)((undefined *)*param_1 + 8);
    if ((*(long *)(piVar10 + 4) != 0) && (*(long *)(*(long *)(piVar10 + 4) + 8) == 0))
    goto LAB_00192570;
    iVar9 = *param_2;
    iVar1 = param_2[2];
    if (iVar1 <= iVar9) goto LAB_001925c4;
    iVar2 = param_2[1];
    iVar3 = param_2[3];
    if ((iVar3 <= iVar2) || (uVar7 = FUN_00191628(param_1,param_2), (uVar7 & 1) != 0))
    goto LAB_001925c4;
    if ((*piVar10 < iVar9) ||
       (((iVar1 < piVar10[2] || (piVar10[1] < iVar2)) || (iVar3 < piVar10[3])))) {
      FUN_00190ec4(param_1);
      FUN_001918e4(*(undefined8 *)(*param_1 + 8),*(undefined8 *)(*param_1 + 8),*param_2,param_2[1],
                   param_2[2] - *param_2,param_2[3] - param_2[1]);
      goto LAB_001925c4;
    }
    uVar8 = FUN_001911a0(&local_70,param_2);
    piVar10 = (int *)*param_1;
    iVar9 = (int)*(undefined8 *)piVar10;
    if (iVar9 != -1) {
      if (iVar9 != 0) {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar5) {
            *piVar10 = *piVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        goto LAB_001925a0;
      }
      goto LAB_001925a8;
    }
  }
LAB_001925b0:
  *param_1 = (long)local_70;
  local_70 = &DAT_002149e8;
  FUN_00191324(&local_70);
LAB_001925c4:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}


// ===== 00192630  FUN_00192630 =====

long * FUN_00192630(long *param_1,long *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = (undefined *)*param_1;
  if ((puVar2 == &DAT_002149e8) ||
     ((*(long *)(*(long *)(puVar2 + 8) + 0x10) != 0 &&
      (*(long *)(*(long *)(*(long *)(puVar2 + 8) + 0x10) + 8) == 0)))) {
    FUN_001912a0(param_1,param_2);
  }
  else {
    puVar3 = (undefined *)*param_2;
    if (puVar3 != &DAT_002149e8) {
      if (*(long *)(*(long *)(puVar3 + 8) + 0x10) == 0) {
        if (puVar2 == puVar3) {
          return param_1;
        }
      }
      else {
        if (puVar2 == puVar3) {
          return param_1;
        }
        if (*(long *)(*(long *)(*(long *)(puVar3 + 8) + 0x10) + 8) == 0) {
          return param_1;
        }
      }
      iVar1 = FUN_00191b18();
      if (iVar1 == 0) {
        FUN_00190ec4(param_1);
        FUN_00191c28(*(undefined8 *)(*param_1 + 8),*(undefined8 *)(*param_1 + 8),
                     *(undefined8 *)(*param_2 + 8));
      }
    }
  }
  return param_1;
}


// ===== 00192788  FUN_00192788 =====

bool FUN_00192788(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar3 = (undefined *)*param_1;
  if (puVar3 == &DAT_002149e8) {
    bVar1 = true;
LAB_001927c4:
    puVar4 = (undefined *)*param_2;
    if (puVar4 == &DAT_002149e8) {
      if (!bVar1 && puVar3 != &DAT_002149e8) goto LAB_00192830;
    }
    else {
      if (*(long *)(*(long *)(puVar4 + 8) + 0x10) == 0) {
        if (bVar1) goto LAB_00192850;
      }
      else {
        lVar5 = *(long *)(*(long *)(*(long *)(puVar4 + 8) + 0x10) + 8);
        if (bVar1) {
          return lVar5 == 0;
        }
        if (lVar5 == 0) {
          if (puVar3 == &DAT_002149e8) goto LAB_00192878;
          goto LAB_00192830;
        }
      }
LAB_00192858:
      if (puVar3 != puVar4) {
        iVar2 = FUN_00191b18(*(undefined8 *)(puVar3 + 8),*(undefined8 *)(puVar4 + 8));
        return iVar2 != 0;
      }
    }
LAB_00192878:
    bVar1 = true;
  }
  else {
    if (*(long *)(*(long *)(puVar3 + 8) + 0x10) != 0) {
      bVar1 = *(long *)(*(long *)(*(long *)(puVar3 + 8) + 0x10) + 8) == 0;
      goto LAB_001927c4;
    }
    puVar4 = (undefined *)*param_2;
    if ((puVar4 != &DAT_002149e8) &&
       ((*(long *)(*(long *)(puVar4 + 8) + 0x10) == 0 ||
        (*(long *)(*(long *)(*(long *)(puVar4 + 8) + 0x10) + 8) != 0)))) goto LAB_00192858;
LAB_00192830:
    if (*(long *)(*(long *)(puVar3 + 8) + 0x10) != 0) {
      return *(long *)(*(long *)(*(long *)(puVar3 + 8) + 0x10) + 8) == 0;
    }
LAB_00192850:
    bVar1 = false;
  }
  return bVar1;
}


// ===== 00192884  FUN_00192884 =====

undefined1  [16] FUN_00192884(undefined8 *param_1)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  
  if ((undefined *)*param_1 != &DAT_002149e8) {
    pauVar1 = *(undefined1 (**) [16])((undefined *)*param_1 + 8);
    lVar2 = *(long *)pauVar1[1];
    if ((lVar2 == 0) || (*(long *)(lVar2 + 8) != 0)) {
      return *pauVar1;
    }
  }
  return ZEXT816(0);
}


// ===== 001929e0  FUN_001929e0 =====

void FUN_001929e0(long *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  plVar3 = (long *)param_1[2];
  if (plVar3 != (long *)0x0) {
    if (*plVar3 == 0) {
      param_1[1] = *param_1;
      return;
    }
    plVar2 = plVar3 + 2;
    lVar7 = *plVar2;
    lVar5 = plVar3[1];
    *param_1 = lVar7;
    lVar8 = (plVar3 + lVar5 * 2)[1];
    param_1[1] = lVar8;
    if (0 < lVar5) {
      iVar4 = (int)lVar8;
      iVar6 = (int)lVar7;
      do {
        iVar1 = (int)*plVar2;
        if (iVar1 < iVar6) {
          *(int *)param_1 = iVar1;
          iVar6 = iVar1;
        }
        iVar1 = (int)plVar2[1];
        if (iVar4 < iVar1) {
          *(int *)(param_1 + 1) = iVar1;
          iVar4 = iVar1;
        }
        plVar2 = plVar2 + 2;
      } while (plVar2 <= plVar3 + lVar5 * 2);
    }
  }
  return;
}


// ===== 00192a60  FUN_00192a60 =====

undefined8
FUN_00192a60(long *param_1,long *param_2,long *param_3,code *param_4,int param_5,int param_6)

{
  long *plVar1;
  size_t __size;
  long *plVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  ulong *puVar13;
  long *plVar14;
  long *plVar15;
  undefined4 *puVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined4 *puVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  int *piVar25;
  int *piVar26;
  ulong uVar27;
  int iVar28;
  int iVar29;
  void *__ptr;
  long *plVar30;
  long lVar31;
  long *plVar32;
  long *plVar33;
  long lVar34;
  int iVar35;
  ulong uVar36;
  
  puVar21 = (undefined4 *)param_2[2];
  if ((puVar21 == &DAT_001471d0) || (puVar16 = (undefined4 *)param_3[2], puVar16 == &DAT_001471d0))
  {
    plVar20 = (long *)param_1[2];
    if ((plVar20 != (long *)0x0) && (*plVar20 != 0)) {
      free(plVar20);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = (long)&DAT_001471d0;
    return 0;
  }
  if (puVar21 == (undefined4 *)0x0) {
    lVar31 = 1;
    plVar20 = param_2;
    if (puVar16 != (undefined4 *)0x0) goto LAB_00192ac4;
LAB_00192b00:
    lVar34 = 1;
  }
  else {
    lVar31 = *(long *)(puVar21 + 2);
    plVar20 = (long *)(puVar21 + 4);
    if (puVar16 == (undefined4 *)0x0) goto LAB_00192b00;
LAB_00192ac4:
    lVar34 = *(long *)(puVar16 + 2);
  }
  plVar19 = param_3;
  if (puVar16 != (undefined4 *)0x0) {
    plVar19 = (long *)(puVar16 + 4);
  }
  iVar10 = (int)lVar31;
  iVar29 = (int)lVar34;
  if (((param_1 == param_2) && (1 < iVar10)) || ((param_1 == param_3 && (1 < iVar29)))) {
    plVar12 = &DAT_001471c0;
    __ptr = (void *)param_1[2];
    iVar6 = iVar29;
    if (iVar29 <= iVar10) {
      iVar6 = iVar10;
    }
    iVar6 = iVar6 << 1;
    param_1[2] = (long)&DAT_001471c0;
  }
  else {
    iVar6 = iVar29;
    if (iVar29 <= iVar10) {
      iVar6 = iVar10;
    }
    iVar6 = iVar6 << 1;
    plVar12 = (long *)param_1[2];
    __ptr = (void *)0x0;
    if (plVar12 == (long *)0x0) {
      lVar22 = 0;
      param_1[2] = (long)&DAT_001471c0;
      goto LAB_00192b64;
    }
  }
  lVar22 = *plVar12;
  if (lVar22 != 0) {
    plVar12[1] = 0;
  }
LAB_00192b64:
  plVar12 = param_1 + 2;
  if ((lVar22 < iVar6) && (iVar6 = FUN_00193804(param_1), iVar6 == 0)) {
    free(__ptr);
    return 0;
  }
  iVar8 = *(int *)((long)plVar20 + 4);
  uVar11 = 0;
  plVar2 = (long *)((long)plVar20 + ((lVar31 << 0x20) >> 0x1c));
  plVar32 = (long *)((long)plVar19 + ((lVar34 << 0x20) >> 0x1c));
  iVar6 = iVar8;
  if (*(int *)((long)plVar19 + 4) <= iVar8) {
    iVar6 = *(int *)((long)plVar19 + 4);
  }
  plVar30 = plVar20;
  plVar33 = plVar20;
  plVar14 = plVar19;
LAB_00192bd0:
  plVar17 = plVar30;
  plVar30 = plVar2;
  if (plVar20 + (long)iVar10 * 2 + -2 != plVar17) goto code_r0x00192bdc;
  goto LAB_00192bf4;
code_r0x00192bdc:
  plVar30 = plVar17 + 2;
  if (*(int *)((long)plVar17 + 0x14) == iVar8) goto LAB_00192bd0;
LAB_00192bf4:
  iVar35 = *(int *)((long)plVar14 + 4);
  plVar15 = plVar14;
  do {
    plVar18 = plVar15;
    plVar15 = plVar32;
    if (plVar19 + (long)iVar29 * 2 + -2 == plVar18) break;
    plVar15 = plVar18 + 2;
  } while (*(int *)((long)plVar18 + 0x14) == iVar35);
  uVar9 = (uint)uVar11;
  if (iVar8 < iVar35) {
    iVar28 = iVar35;
    if (param_5 != 0) {
      if (iVar8 <= iVar6) {
        iVar8 = iVar6;
      }
      iVar6 = *(int *)((long)plVar33 + 0xc);
      if (iVar35 <= *(int *)((long)plVar33 + 0xc)) {
        iVar6 = iVar35;
      }
      if (iVar8 != iVar6) {
        plVar18 = (long *)*plVar12;
        uVar36 = plVar18[1];
        iVar35 = (int)((ulong)((long)plVar30 - (long)plVar33) >> 4);
        if ((plVar18 == (long *)0x0) ||
           (lVar31 = uVar36 + (long)iVar35, uVar27 = uVar36, *plVar18 < lVar31)) {
          iVar7 = FUN_00193804(param_1);
          if (iVar7 == 0) goto LAB_00193438;
          plVar18 = (long *)*plVar12;
          uVar27 = plVar18[1];
          lVar31 = uVar27 + (long)iVar35;
        }
        plVar23 = plVar18 + uVar27 * 2 + 2;
        plVar18[1] = lVar31;
        plVar24 = plVar33;
        do {
          bVar5 = plVar17 != plVar24;
          *(int *)plVar23 = (int)*plVar24;
          *(int *)((long)plVar23 + 4) = iVar8;
          plVar1 = plVar24 + 1;
          plVar24 = plVar24 + 2;
          *(int *)(plVar23 + 1) = (int)*plVar1;
          *(int *)((long)plVar23 + 0xc) = iVar6;
          plVar23 = plVar23 + 2;
        } while (bVar5);
        iVar8 = (int)uVar36;
        iVar6 = iVar8 - uVar9;
        if ((iVar6 != 0) && (lVar31 - iVar8 == (long)iVar6)) {
          plVar17 = plVar18 + (long)(int)uVar9 * 2 + 2;
          if (*(int *)((long)plVar17 + 0xc) == *(int *)((long)plVar18 + (long)iVar8 * 0x10 + 0x14))
          {
            uVar3 = *(undefined4 *)((long)plVar18 + (long)iVar8 * 0x10 + 0x1c);
            plVar24 = plVar18 + (long)iVar8 * 2 + 3;
            uVar27 = uVar36 & 0xffffffff;
            puVar21 = (undefined4 *)((long)plVar18 + (long)(int)uVar9 * 0x10 + 0x1c);
            do {
              puVar16 = puVar21;
              if (((int)*plVar17 != (int)plVar24[-1]) || ((int)plVar17[1] != (int)*plVar24))
              goto LAB_00192ef0;
              uVar4 = (int)uVar27 - 1;
              uVar27 = (ulong)uVar4;
              plVar17 = plVar17 + 2;
              plVar24 = plVar24 + 2;
              puVar21 = puVar16 + 4;
            } while (uVar9 != uVar4);
            plVar18[1] = lVar31 - iVar6;
            do {
              uVar4 = (int)uVar36 - 1;
              uVar36 = (ulong)uVar4;
              *puVar16 = uVar3;
              puVar16 = puVar16 + -4;
            } while (uVar9 != uVar4);
            goto LAB_00192f00;
          }
        }
LAB_00192ef0:
        uVar11 = uVar36 & 0xffffffff;
      }
    }
  }
  else {
    iVar28 = iVar8;
    if ((param_6 != 0) && (iVar35 < iVar8)) {
      if (iVar35 <= iVar6) {
        iVar35 = iVar6;
      }
      iVar6 = *(int *)((long)plVar14 + 0xc);
      if (iVar8 <= *(int *)((long)plVar14 + 0xc)) {
        iVar6 = iVar8;
      }
      if (iVar35 != iVar6) {
        plVar17 = (long *)*plVar12;
        uVar36 = plVar17[1];
        iVar8 = (int)((ulong)((long)plVar15 - (long)plVar14) >> 4);
        if ((plVar17 == (long *)0x0) ||
           (lVar31 = uVar36 + (long)iVar8, uVar27 = uVar36, *plVar17 < lVar31)) {
          iVar7 = FUN_00193804(param_1);
          if (iVar7 == 0) goto LAB_00193438;
          plVar17 = (long *)*plVar12;
          uVar27 = plVar17[1];
          lVar31 = uVar27 + (long)iVar8;
        }
        plVar23 = plVar17 + uVar27 * 2 + 2;
        plVar17[1] = lVar31;
        plVar24 = plVar14;
        do {
          bVar5 = plVar18 != plVar24;
          *(int *)plVar23 = (int)*plVar24;
          *(int *)((long)plVar23 + 4) = iVar35;
          plVar1 = plVar24 + 1;
          plVar24 = plVar24 + 2;
          *(int *)(plVar23 + 1) = (int)*plVar1;
          *(int *)((long)plVar23 + 0xc) = iVar6;
          plVar23 = plVar23 + 2;
        } while (bVar5);
        iVar8 = (int)uVar36;
        iVar6 = iVar8 - uVar9;
        if ((iVar6 != 0) && (lVar31 - iVar8 == (long)iVar6)) {
          plVar18 = plVar17 + (long)(int)uVar9 * 2 + 2;
          if (*(int *)((long)plVar18 + 0xc) == *(int *)((long)plVar17 + (long)iVar8 * 0x10 + 0x14))
          {
            uVar3 = *(undefined4 *)((long)plVar17 + (long)iVar8 * 0x10 + 0x1c);
            plVar24 = plVar17 + (long)iVar8 * 2 + 3;
            uVar27 = uVar36 & 0xffffffff;
            puVar21 = (undefined4 *)((long)plVar17 + (long)(int)uVar9 * 0x10 + 0x1c);
            do {
              puVar16 = puVar21;
              if (((int)*plVar18 != (int)plVar24[-1]) || ((int)plVar18[1] != (int)*plVar24))
              goto LAB_00192efc;
              uVar4 = (int)uVar27 - 1;
              uVar27 = (ulong)uVar4;
              plVar18 = plVar18 + 2;
              plVar24 = plVar24 + 2;
              puVar21 = puVar16 + 4;
            } while (uVar9 != uVar4);
            plVar17[1] = lVar31 - iVar6;
            do {
              uVar4 = (int)uVar36 - 1;
              uVar36 = (ulong)uVar4;
              *puVar16 = uVar3;
              puVar16 = puVar16 + -4;
            } while (uVar9 != uVar4);
            goto LAB_00192f00;
          }
        }
LAB_00192efc:
        uVar11 = uVar36 & 0xffffffff;
      }
    }
  }
LAB_00192f00:
  iVar6 = *(int *)((long)plVar33 + 0xc);
  if (*(int *)((long)plVar14 + 0xc) <= *(int *)((long)plVar33 + 0xc)) {
    iVar6 = *(int *)((long)plVar14 + 0xc);
  }
  if (iVar28 < iVar6) {
    uVar36 = *(ulong *)(param_1[2] + 8);
    iVar8 = (*param_4)(param_1,plVar33,plVar30,plVar14,plVar15,iVar28,iVar6);
    if (iVar8 == 0) goto LAB_00193438;
    uVar9 = (uint)uVar11;
    iVar35 = (int)uVar36;
    iVar8 = iVar35 - uVar9;
    if (iVar8 == 0) {
      uVar11 = uVar36 & 0xffffffff;
    }
    else {
      lVar31 = *plVar12;
      if (*(long *)(lVar31 + 8) - (long)iVar35 == (long)iVar8) {
        piVar25 = (int *)(lVar31 + 0x10 + (long)(int)uVar9 * 0x10);
        lVar34 = lVar31 + 0x10 + (long)iVar35 * 0x10;
        if (piVar25[3] == *(int *)(lVar34 + 4)) {
          uVar3 = *(undefined4 *)(lVar34 + 0xc);
          piVar26 = (int *)(lVar31 + 0x18 + (long)iVar35 * 0x10);
          uVar27 = uVar36 & 0xffffffff;
          puVar21 = (undefined4 *)(lVar31 + 0x18 + (long)(int)uVar9 * 0x10 + 4);
          do {
            puVar16 = puVar21;
            if ((*piVar25 != piVar26[-2]) || (piVar25[2] != *piVar26)) goto LAB_00193014;
            uVar4 = (int)uVar27 - 1;
            uVar27 = (ulong)uVar4;
            piVar25 = piVar25 + 4;
            piVar26 = piVar26 + 4;
            puVar21 = puVar16 + 4;
          } while (uVar9 != uVar4);
          *(long *)(lVar31 + 8) = *(long *)(lVar31 + 8) - (long)iVar8;
          do {
            uVar4 = (int)uVar36 - 1;
            uVar36 = (ulong)uVar4;
            *puVar16 = uVar3;
            puVar16 = puVar16 + -4;
          } while (uVar9 != uVar4);
          goto LAB_00193028;
        }
      }
LAB_00193014:
      uVar11 = uVar36 & 0xffffffff;
    }
  }
LAB_00193028:
  if (*(int *)((long)plVar33 + 0xc) != iVar6) {
    plVar30 = plVar33;
  }
  if (*(int *)((long)plVar14 + 0xc) != iVar6) {
    plVar15 = plVar14;
  }
  if ((plVar30 == plVar2) || (plVar15 == plVar32)) goto LAB_00193058;
  iVar8 = *(int *)((long)plVar30 + 4);
  plVar33 = plVar30;
  plVar14 = plVar15;
  goto LAB_00192bd0;
LAB_00193058:
  iVar8 = (int)uVar11;
  if ((param_5 == 0) || (plVar30 == plVar2)) {
    if ((param_6 == 0) || (plVar15 == plVar32)) goto LAB_001933f8;
    iVar10 = *(int *)((long)plVar15 + 4);
    plVar33 = plVar15;
    do {
      plVar20 = plVar33;
      plVar33 = plVar32;
      if (plVar19 + (long)iVar29 * 2 + -2 == plVar20) break;
      plVar33 = plVar20 + 2;
    } while (*(int *)((long)plVar20 + 0x14) == iVar10);
    plVar19 = (long *)*plVar12;
    uVar3 = *(undefined4 *)((long)plVar15 + 0xc);
    if (iVar10 <= iVar6) {
      iVar10 = iVar6;
    }
    lVar31 = plVar19[1];
    uVar11 = (ulong)((long)plVar33 - (long)plVar15) >> 4;
    iVar29 = (int)uVar11;
    if ((plVar19 == (long *)0x0) || (lVar34 = lVar31 + iVar29, lVar22 = lVar31, *plVar19 < lVar34))
    {
      iVar6 = FUN_00193804(param_1,uVar11 & 0xffffffff);
      if (iVar6 == 0) goto LAB_00193438;
      plVar19 = (long *)*plVar12;
      lVar22 = plVar19[1];
      lVar34 = lVar22 + iVar29;
    }
    lVar22 = lVar22 * 0x10;
    plVar19[1] = lVar34;
    do {
      lVar22 = lVar22 + 0x10;
      puVar21 = (undefined4 *)((long)plVar19 + lVar22);
      bVar5 = plVar20 != plVar15;
      *puVar21 = (int)*plVar15;
      puVar21[1] = iVar10;
      plVar2 = plVar15 + 1;
      plVar15 = plVar15 + 2;
      puVar21[2] = (int)*plVar2;
      puVar21[3] = uVar3;
    } while (bVar5);
    iVar29 = (int)lVar31;
    iVar10 = iVar29 - iVar8;
    if (((iVar10 != 0) && (lVar34 - iVar29 == (long)iVar10)) &&
       (*(int *)((long)plVar19 + (long)iVar8 * 0x10 + 0x1c) ==
        *(int *)((long)plVar19 + (long)iVar29 * 0x10 + 0x14))) {
      uVar3 = *(undefined4 *)((long)plVar19 + (long)iVar29 * 0x10 + 0x1c);
      iVar6 = iVar8 - iVar29;
      puVar21 = (undefined4 *)((long)plVar19 + (long)iVar8 * 0x10 + 0xc);
      plVar20 = plVar19 + (long)iVar29 * 2 + 3;
      iVar29 = iVar6;
      do {
        if ((puVar21[1] != (int)plVar20[-1]) || (puVar21[3] != (int)*plVar20)) goto LAB_0019338c;
        puVar21 = puVar21 + 4;
        bVar5 = iVar29 != -1;
        iVar29 = iVar29 + 1;
        plVar20 = plVar20 + 2;
      } while (bVar5);
      lVar34 = lVar34 - iVar10;
      plVar19[1] = lVar34;
      do {
        bVar5 = iVar6 != -1;
        iVar6 = iVar6 + 1;
        *puVar21 = uVar3;
        puVar21 = puVar21 + -4;
      } while (bVar5);
    }
LAB_0019338c:
    uVar11 = (long)plVar32 - (long)plVar33;
  }
  else {
    iVar29 = *(int *)((long)plVar30 + 4);
    plVar33 = plVar30;
    do {
      plVar32 = plVar33;
      plVar33 = plVar2;
      if (plVar20 + (long)iVar10 * 2 + -2 == plVar32) break;
      plVar33 = plVar32 + 2;
    } while (*(int *)((long)plVar32 + 0x14) == iVar29);
    plVar19 = (long *)*plVar12;
    uVar3 = *(undefined4 *)((long)plVar30 + 0xc);
    if (iVar29 <= iVar6) {
      iVar29 = iVar6;
    }
    lVar31 = plVar19[1];
    uVar11 = (ulong)((long)plVar33 - (long)plVar30) >> 4;
    iVar10 = (int)uVar11;
    if ((plVar19 == (long *)0x0) || (lVar34 = lVar31 + iVar10, lVar22 = lVar31, *plVar19 < lVar34))
    {
      iVar6 = FUN_00193804(param_1,uVar11 & 0xffffffff);
      if (iVar6 == 0) goto LAB_00193438;
      plVar19 = (long *)*plVar12;
      lVar22 = plVar19[1];
      lVar34 = lVar22 + iVar10;
    }
    lVar22 = lVar22 * 0x10;
    plVar19[1] = lVar34;
    do {
      lVar22 = lVar22 + 0x10;
      puVar21 = (undefined4 *)((long)plVar19 + lVar22);
      bVar5 = plVar32 != plVar30;
      *puVar21 = (int)*plVar30;
      puVar21[1] = iVar29;
      plVar20 = plVar30 + 1;
      plVar30 = plVar30 + 2;
      puVar21[2] = (int)*plVar20;
      puVar21[3] = uVar3;
    } while (bVar5);
    iVar29 = (int)lVar31;
    iVar10 = iVar29 - iVar8;
    if (((iVar10 != 0) && (lVar34 - iVar29 == (long)iVar10)) &&
       (*(int *)((long)plVar19 + (long)iVar8 * 0x10 + 0x1c) ==
        *(int *)((long)plVar19 + (long)iVar29 * 0x10 + 0x14))) {
      uVar3 = *(undefined4 *)((long)plVar19 + (long)iVar29 * 0x10 + 0x1c);
      iVar6 = iVar8 - iVar29;
      puVar21 = (undefined4 *)((long)plVar19 + (long)iVar8 * 0x10 + 0xc);
      plVar20 = plVar19 + (long)iVar29 * 2 + 3;
      iVar29 = iVar6;
      do {
        if ((puVar21[1] != (int)plVar20[-1]) || (puVar21[3] != (int)*plVar20)) goto LAB_00193398;
        puVar21 = puVar21 + 4;
        bVar5 = iVar29 != -1;
        iVar29 = iVar29 + 1;
        plVar20 = plVar20 + 2;
      } while (bVar5);
      lVar34 = lVar34 - iVar10;
      plVar19[1] = lVar34;
      do {
        bVar5 = iVar6 != -1;
        iVar6 = iVar6 + 1;
        *puVar21 = uVar3;
        puVar21 = puVar21 + -4;
      } while (bVar5);
    }
LAB_00193398:
    uVar11 = (long)plVar2 - (long)plVar33;
  }
  iVar10 = (int)(uVar11 >> 4);
  if (iVar10 != 0) {
    lVar31 = (long)(uVar11 << 0x1c) >> 0x20;
    if ((plVar19 == (long *)0x0) || (*plVar19 < lVar34 + iVar10)) {
      iVar10 = FUN_00193804(param_1);
      if (iVar10 == 0) {
LAB_00193438:
        free(__ptr);
        plVar12 = (long *)*plVar12;
        if ((plVar12 != (long *)0x0) && (*plVar12 != 0)) {
          free(plVar12);
        }
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = (long)&DAT_001471d0;
        return 0;
      }
      plVar19 = (long *)*plVar12;
      lVar34 = plVar19[1];
    }
    memmove(plVar19 + lVar34 * 2 + 2,plVar33,lVar31 << 4);
    *(long *)(*plVar12 + 8) = *(long *)(*plVar12 + 8) + lVar31;
  }
LAB_001933f8:
  free(__ptr);
  plVar20 = (long *)*plVar12;
  iVar10 = (int)plVar20[1];
  if (iVar10 == 1) {
    lVar31 = plVar20[2];
    param_1[1] = plVar20[3];
    *param_1 = lVar31;
    if ((plVar20 != (long *)0x0) && (*plVar20 != 0)) {
      free(plVar20);
    }
    *plVar12 = 0;
  }
  else if (iVar10 == 0) {
    if ((plVar20 != (long *)0x0) && (*plVar20 != 0)) {
      free(plVar20);
    }
    *plVar12 = (long)&DAT_001471c0;
  }
  else {
    if (*plVar20 < 0x33) {
      return 1;
    }
    uVar11 = (ulong)iVar10;
    if (*plVar20 >> 1 <= (long)uVar11) {
      return 1;
    }
    lVar31 = plVar20[1] << 0x20;
    if (lVar31 == 0xfffffff00000000) {
      return 1;
    }
    if (uVar11 >> 0x1c != 0) {
      return 1;
    }
    __size = (lVar31 >> 0x1c) + 0x10;
    if (__size == 0) {
      return 1;
    }
    puVar13 = (ulong *)realloc(plVar20,__size);
    if (puVar13 != (ulong *)0x0) {
      *puVar13 = uVar11;
      *plVar12 = (long)puVar13;
    }
  }
  return 1;
}


// ===== 0019351c  FUN_0019351c =====

undefined8
FUN_0019351c(long param_1,int *param_2,int *param_3,int *param_4,int *param_5,undefined4 param_6,
            undefined4 param_7)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  
  plVar4 = *(long **)(param_1 + 0x10);
  iVar8 = *param_2;
  iVar7 = *param_4;
  plVar5 = plVar4 + plVar4[1] * 2 + 2;
  if (iVar8 < iVar7) {
    piVar3 = param_2;
    piVar9 = param_4;
    param_2 = param_2 + 4;
    iVar7 = iVar8;
  }
  else {
    piVar9 = param_4 + 4;
    piVar3 = param_4;
  }
  iVar8 = piVar3[2];
  while( true ) {
    if ((piVar9 == param_5) || (param_2 == param_3)) break;
    if (*param_2 < *piVar9) {
      if (iVar8 < *param_2) {
        if ((plVar4 == (long *)0x0) || (plVar4[1] == *plVar4)) {
          uVar2 = FUN_00193804(param_1,1);
          if ((int)uVar2 == 0) {
            return uVar2;
          }
          plVar4 = *(long **)(param_1 + 0x10);
          lVar6 = plVar4[1];
          plVar5 = plVar4 + lVar6 * 2 + 2;
        }
        else {
          lVar6 = plVar4[1];
        }
        *(int *)plVar5 = iVar7;
        *(undefined4 *)((long)plVar5 + 4) = param_6;
        *(int *)(plVar5 + 1) = iVar8;
        *(undefined4 *)((long)plVar5 + 0xc) = param_7;
        plVar4[1] = lVar6 + 1;
        iVar7 = *param_2;
        plVar5 = plVar5 + 2;
        iVar1 = param_2[2];
      }
      else {
        iVar1 = param_2[2];
        if (param_2[2] <= iVar8) {
          iVar1 = iVar8;
        }
      }
      iVar8 = iVar1;
      param_2 = param_2 + 4;
    }
    else {
      if (iVar8 < *piVar9) {
        if ((plVar4 == (long *)0x0) || (plVar4[1] == *plVar4)) {
          uVar2 = FUN_00193804(param_1,1);
          if ((int)uVar2 == 0) {
            return uVar2;
          }
          plVar4 = *(long **)(param_1 + 0x10);
          lVar6 = plVar4[1];
          plVar5 = plVar4 + lVar6 * 2 + 2;
        }
        else {
          lVar6 = plVar4[1];
        }
        *(int *)plVar5 = iVar7;
        *(undefined4 *)((long)plVar5 + 4) = param_6;
        *(int *)(plVar5 + 1) = iVar8;
        *(undefined4 *)((long)plVar5 + 0xc) = param_7;
        plVar4[1] = lVar6 + 1;
        iVar7 = *piVar9;
        plVar5 = plVar5 + 2;
        iVar1 = piVar9[2];
      }
      else {
        iVar1 = piVar9[2];
        if (piVar9[2] <= iVar8) {
          iVar1 = iVar8;
        }
      }
      iVar8 = iVar1;
      piVar9 = piVar9 + 4;
    }
  }
  if (param_2 == param_3) {
    if (piVar9 != param_5) {
      do {
        if (iVar8 < *piVar9) {
          if ((plVar4 == (long *)0x0) || (plVar4[1] == *plVar4)) {
            uVar2 = FUN_00193804(param_1,1);
            if ((int)uVar2 == 0) {
              return uVar2;
            }
            plVar4 = *(long **)(param_1 + 0x10);
            lVar6 = plVar4[1];
            plVar5 = plVar4 + lVar6 * 2 + 2;
          }
          else {
            lVar6 = plVar4[1];
          }
          *(int *)plVar5 = iVar7;
          *(undefined4 *)((long)plVar5 + 4) = param_6;
          *(int *)(plVar5 + 1) = iVar8;
          *(undefined4 *)((long)plVar5 + 0xc) = param_7;
          plVar4[1] = lVar6 + 1;
          iVar7 = *piVar9;
          plVar5 = plVar5 + 2;
          iVar1 = piVar9[2];
        }
        else {
          iVar1 = piVar9[2];
          if (piVar9[2] <= iVar8) {
            iVar1 = iVar8;
          }
        }
        iVar8 = iVar1;
        piVar9 = piVar9 + 4;
      } while (param_5 != piVar9);
    }
  }
  else {
    do {
      if (iVar8 < *param_2) {
        if ((plVar4 == (long *)0x0) || (plVar4[1] == *plVar4)) {
          uVar2 = FUN_00193804(param_1,1);
          if ((int)uVar2 == 0) {
            return uVar2;
          }
          plVar4 = *(long **)(param_1 + 0x10);
          lVar6 = plVar4[1];
          plVar5 = plVar4 + lVar6 * 2 + 2;
        }
        else {
          lVar6 = plVar4[1];
        }
        *(int *)plVar5 = iVar7;
        *(undefined4 *)((long)plVar5 + 4) = param_6;
        *(int *)(plVar5 + 1) = iVar8;
        *(undefined4 *)((long)plVar5 + 0xc) = param_7;
        plVar4[1] = lVar6 + 1;
        iVar7 = *param_2;
        plVar5 = plVar5 + 2;
        iVar1 = param_2[2];
      }
      else {
        iVar1 = param_2[2];
        if (param_2[2] <= iVar8) {
          iVar1 = iVar8;
        }
      }
      iVar8 = iVar1;
      param_2 = param_2 + 4;
    } while (param_3 != param_2);
  }
  if ((plVar4 == (long *)0x0) || (lVar6 = plVar4[1], lVar6 == *plVar4)) {
    uVar2 = FUN_00193804(param_1,1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    plVar4 = *(long **)(param_1 + 0x10);
    lVar6 = plVar4[1];
    plVar5 = plVar4 + lVar6 * 2 + 2;
  }
  *(int *)plVar5 = iVar7;
  *(undefined4 *)((long)plVar5 + 4) = param_6;
  *(int *)(plVar5 + 1) = iVar8;
  *(undefined4 *)((long)plVar5 + 0xc) = param_7;
  plVar4[1] = lVar6 + 1;
  return 1;
}


// ===== 00193804  FUN_00193804 =====

undefined8 FUN_00193804(long *param_1,uint param_2)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 == (long *)0x0) {
    param_2 = param_2 + 1;
    if ((param_2 < 0xfffffff) &&
       (sVar1 = (-(ulong)(param_2 >> 0x1f) & 0xfffffff000000000 | (ulong)param_2 << 4) + 0x10,
       sVar1 != 0)) {
      plVar4 = (long *)malloc(sVar1);
      param_1[2] = (long)plVar4;
      if (plVar4 != (long *)0x0) {
        plVar4[1] = 1;
        lVar6 = *param_1;
        lVar5 = (long)(int)param_2;
        plVar4[3] = param_1[1];
        plVar4[2] = lVar6;
        goto LAB_001938dc;
      }
      goto LAB_00193904;
    }
  }
  else {
    if (*plVar4 != 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      uVar2 = 0xfa;
      if ((int)uVar3 < 0x1f5) {
        uVar2 = uVar3;
      }
      if (param_2 != 1) {
        uVar2 = param_2;
      }
      uVar2 = uVar2 + uVar3;
      if ((uVar2 < 0xfffffff) &&
         (sVar1 = (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4) + 0x10,
         sVar1 != 0)) {
        plVar4 = (long *)realloc(plVar4,sVar1);
        if (plVar4 != (long *)0x0) {
          lVar5 = (long)(int)uVar2;
          param_1[2] = (long)plVar4;
          goto LAB_001938dc;
        }
        plVar4 = (long *)param_1[2];
        if (plVar4 == (long *)0x0) goto LAB_00193904;
      }
      if (*plVar4 != 0) {
        free(plVar4);
      }
      goto LAB_00193904;
    }
    if ((param_2 < 0xfffffff) &&
       (sVar1 = (-(ulong)(param_2 >> 0x1f) & 0xfffffff000000000 | (ulong)param_2 << 4) + 0x10,
       sVar1 != 0)) {
      plVar4 = (long *)malloc(sVar1);
      param_1[2] = (long)plVar4;
      if (plVar4 == (long *)0x0) goto LAB_00193904;
      lVar5 = (long)(int)param_2;
      plVar4[1] = 0;
LAB_001938dc:
      *plVar4 = lVar5;
      return 1;
    }
  }
  param_1[2] = 0;
LAB_00193904:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (long)&DAT_001471d0;
  return 0;
}


// ===== 00193924  FUN_00193924 =====

undefined8
FUN_00193924(long param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6,
            int param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  
  plVar6 = *(long **)(param_1 + 0x10);
  plVar7 = plVar6 + plVar6[1] * 2 + 2;
  while( true ) {
    iVar10 = param_2[2];
    iVar8 = param_4[2];
    iVar1 = *param_2;
    if (*param_2 <= *param_4) {
      iVar1 = *param_4;
    }
    iVar2 = iVar10;
    if (iVar8 <= iVar10) {
      iVar2 = iVar8;
    }
    if (iVar1 < iVar2) {
      if ((plVar6 == (long *)0x0) || (plVar6[1] == *plVar6)) {
        uVar5 = FUN_00193804(param_1,1);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
        plVar6 = *(long **)(param_1 + 0x10);
        lVar9 = plVar6[1];
        plVar7 = plVar6 + lVar9 * 2 + 2;
      }
      else {
        lVar9 = plVar6[1];
      }
      *(int *)plVar7 = iVar1;
      *(int *)((long)plVar7 + 4) = param_6;
      *(int *)(plVar7 + 1) = iVar2;
      *(int *)((long)plVar7 + 0xc) = param_7;
      plVar6[1] = lVar9 + 1;
      iVar10 = param_2[2];
      iVar8 = param_4[2];
      plVar7 = plVar7 + 2;
    }
    piVar3 = param_2 + 4;
    if (iVar10 != iVar2) {
      piVar3 = param_2;
    }
    piVar4 = param_4 + 4;
    if (iVar8 != iVar2) {
      piVar4 = param_4;
    }
    if (piVar3 == param_3) break;
    param_4 = piVar4;
    param_2 = piVar3;
    if (piVar4 == param_5) {
      return 1;
    }
  }
  return 1;
}


// ===== 00193a30  FUN_00193a30 =====

undefined8
FUN_00193a30(long param_1,int *param_2,int *param_3,int *param_4,int *param_5,undefined4 param_6,
            undefined4 param_7)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  
  plVar3 = *(long **)(param_1 + 0x10);
  iVar7 = *param_2;
  plVar4 = plVar3 + plVar3[1] * 2 + 2;
  do {
    iVar1 = param_4[2];
    if (iVar7 < iVar1) {
      iVar5 = param_2[2];
      if (iVar7 < *param_4) {
        if (*param_4 < iVar5) {
          if ((plVar3 == (long *)0x0) || (plVar3[1] == *plVar3)) {
            uVar2 = FUN_00193804(param_1,1);
            if ((int)uVar2 == 0) {
              return uVar2;
            }
            plVar3 = *(long **)(param_1 + 0x10);
            lVar6 = plVar3[1];
            plVar4 = plVar3 + lVar6 * 2 + 2;
          }
          else {
            lVar6 = plVar3[1];
          }
          *(int *)plVar4 = iVar7;
          *(undefined4 *)((long)plVar4 + 4) = param_6;
          *(int *)(plVar4 + 1) = *param_4;
          *(undefined4 *)((long)plVar4 + 0xc) = param_7;
          plVar3[1] = lVar6 + 1;
          iVar7 = param_4[2];
          plVar4 = plVar4 + 2;
          if (iVar7 < param_2[2]) goto LAB_00193b50;
        }
        else if (iVar7 < iVar5) {
          if ((plVar3 == (long *)0x0) || (plVar3[1] == *plVar3)) {
            uVar2 = FUN_00193804(param_1,1);
            if ((int)uVar2 == 0) {
              return uVar2;
            }
            plVar3 = *(long **)(param_1 + 0x10);
            iVar5 = param_2[2];
            lVar6 = plVar3[1];
            plVar4 = plVar3 + lVar6 * 2 + 2;
          }
          else {
            lVar6 = plVar3[1];
          }
          *(int *)(plVar4 + 1) = iVar5;
          *(undefined4 *)((long)plVar4 + 0xc) = param_7;
          *(int *)plVar4 = iVar7;
          *(undefined4 *)((long)plVar4 + 4) = param_6;
          plVar4 = plVar4 + 2;
          plVar3[1] = lVar6 + 1;
        }
      }
      else if (iVar1 < iVar5) {
        param_4 = param_4 + 4;
        iVar7 = iVar1;
        goto LAB_00193b80;
      }
      param_2 = param_2 + 4;
      if (param_2 == param_3) {
        return 1;
      }
      iVar7 = *param_2;
    }
    else {
LAB_00193b50:
      param_4 = param_4 + 4;
    }
LAB_00193b80:
    if ((param_4 == param_5) || (param_2 == param_3)) {
      if (param_2 != param_3) {
        while( true ) {
          param_2 = param_2 + 4;
          if ((plVar3 == (long *)0x0) || (plVar3[1] == *plVar3)) {
            uVar2 = FUN_00193804(param_1,1);
            if ((int)uVar2 == 0) {
              return uVar2;
            }
            plVar3 = *(long **)(param_1 + 0x10);
            lVar6 = plVar3[1];
            plVar4 = plVar3 + lVar6 * 2 + 2;
          }
          else {
            lVar6 = plVar3[1];
          }
          *(int *)plVar4 = iVar7;
          *(undefined4 *)((long)plVar4 + 4) = param_6;
          *(int *)(plVar4 + 1) = param_2[-2];
          *(undefined4 *)((long)plVar4 + 0xc) = param_7;
          plVar3[1] = lVar6 + 1;
          if (param_3 == param_2) break;
          iVar7 = *param_2;
          plVar4 = plVar4 + 2;
        }
      }
      return 1;
    }
  } while( true );
}


// ===== 00193c1c  FUN_00193c1c =====

void FUN_00193c1c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = *param_3;
  if ((*(long *)(lVar2 + 8) != *(long *)(lVar2 + 0x10)) && (*(long *)(param_1 + 0x38) != 0)) {
    uStack_30 = *(undefined8 *)(param_1 + 0x60);
    local_38 = 0;
    FUN_0019e764(lVar2 + 8,&local_38,*(long *)(param_1 + 0x38),param_1 + 0x20);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00193c8c  FUN_00193c8c =====

void FUN_00193c8c(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  if (((*(long *)(lVar1 + 8) != *(long *)(lVar1 + 0x10)) &&
      (lVar2 = *param_3, *(long *)(lVar2 + 8) != *(long *)(lVar2 + 0x10))) &&
     (*(long *)(param_1 + 0x38) != 0)) {
    FUN_0019f5c4(lVar1 + 8,lVar2 + 8,*(long *)(param_1 + 0x38),param_1 + 0x20);
    return;
  }
  return;
}


// ===== 00193cc8  FUN_00193cc8 =====

void FUN_00193cc8(long param_1,undefined8 *param_2,undefined8 param_3,int *param_4,
                 undefined1 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined2 *puVar9;
  uint uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auStack_870 [2048];
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  FUN_0019569c(param_1 + 0x20,param_3,param_5,0,param_4);
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar11 = *param_2;
    uVar13 = NEON_neg(uVar11,4);
    iVar12 = (int)((ulong)uVar11 >> 0x20);
    uVar13 = NEON_scvtf(uVar13,4);
    *(undefined8 *)(param_1 + 0xb4) = uVar13;
    uVar1 = *param_4 + (int)uVar11;
    iVar2 = param_4[2] + (int)uVar11;
    iVar3 = param_4[3] + iVar12;
    uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    iVar4 = *(int *)(param_1 + 0x60);
    if (iVar2 <= *(int *)(param_1 + 0x60)) {
      iVar4 = iVar2;
    }
    iVar2 = *(int *)(param_1 + 100);
    if (iVar3 <= *(int *)(param_1 + 100)) {
      iVar2 = iVar3;
    }
    if ((iVar4 - uVar1 != 0 && (int)uVar1 <= iVar4) &&
       (uVar10 = param_4[1] + iVar12, uVar10 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU),
       (int)uVar10 < iVar2)) {
      do {
        uVar6 = iVar2 - uVar10;
        uVar5 = uVar6;
        if (0xff < (int)uVar6) {
          uVar5 = 0x100;
        }
        if (0 < (int)uVar6) {
          uVar6 = uVar5;
          if ((int)uVar5 < 2) {
            uVar6 = 1;
          }
          lVar8 = (ulong)uVar6 << 3;
          puVar9 = (undefined2 *)((ulong)auStack_870 | 4);
          uVar6 = uVar10;
          do {
            puVar9[-2] = (short)uVar1;
            *puVar9 = (short)(iVar4 - uVar1);
            puVar9[-1] = (short)uVar6;
            *(undefined1 *)(puVar9 + 1) = 0xff;
            lVar8 = lVar8 + -8;
            puVar9 = puVar9 + 4;
            uVar6 = uVar6 + 1;
          } while (lVar8 != 0);
        }
        (**(code **)(param_1 + 0x38))((long)(int)uVar5,auStack_870,param_1 + 0x20);
        uVar10 = uVar5 + uVar10;
      } while ((int)uVar10 < iVar2);
    }
  }
  if (*(long *)(lVar7 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00193e3c  FUN_00193e3c =====

void FUN_00193e3c(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    FUN_00194338((long)pvVar1 + 0x48);
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00193e74  FUN_00193e74 =====

void FUN_00193e74(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)operator_new(0xc0);
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0xc) = 0;
  *(undefined8 *)(puVar1 + 4) = 0;
  *puVar1 = 2;
  *(undefined4 *)(puVar1 + 0x20) = 1;
  *(undefined8 *)(puVar1 + 0x50) = 0;
  *(undefined8 *)(puVar1 + 0x48) = 0;
  *(undefined8 *)(puVar1 + 0x60) = 0;
  *(undefined8 *)(puVar1 + 0x58) = 0;
  *(undefined2 *)(puVar1 + 0xbc) = 1;
  *param_1 = puVar1;
  return;
}


// ===== 00193ec8  FUN_00193ec8 =====

void FUN_00193ec8(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)operator_new(0xc0);
  *puVar1 = 2;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0xc) = 0;
  *(undefined8 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 0x20) = 1;
  *(undefined8 *)(puVar1 + 0x50) = 0;
  *(undefined8 *)(puVar1 + 0x48) = 0;
  *(undefined8 *)(puVar1 + 0x60) = 0;
  *(undefined8 *)(puVar1 + 0x58) = 0;
  *(undefined2 *)(puVar1 + 0xbc) = 1;
  *param_1 = puVar1;
  FUN_00193f38(param_1,param_2,param_3 & 1);
  return;
}


// ===== 00193f38  FUN_00193f38 =====

undefined8 FUN_00193f38(long *param_1,undefined8 param_2,uint param_3)

{
  FUN_00194674(*param_1);
  FUN_001946d8(*param_1 + 0x20);
  if ((param_3 & 1) != 0) {
    FUN_00194650(*param_1);
  }
  return 1;
}


// ===== 00193f7c  FUN_00193f7c =====

void FUN_00193f7c(void)

{
  return;
}


// ===== 00193f80  FUN_00193f80 =====

void FUN_00193f80(long *param_1,int *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0x58) = *(undefined8 *)param_2;
  *(ulong *)(lVar1 + 0x60) = CONCAT44(param_2[3] - param_2[1],param_2[2] - *param_2);
  return;
}


// ===== 00193fa8  FUN_00193fa8 =====

void FUN_00193fa8(long *param_1,undefined8 param_2)

{
  FUN_00194efc(*param_1 + 0x20,param_2,1,0xff);
  return;
}


// ===== 00193fbc  FUN_00193fbc =====

void FUN_00193fbc(long *param_1,undefined4 param_2)

{
  *(undefined4 *)(*param_1 + 0x20) = param_2;
  return;
}


// ===== 00193fc8  FUN_00193fc8 =====

void FUN_00193fc8(undefined8 *param_1)

{
  FUN_00193c1c(*param_1);
  return;
}


// ===== 00193fd0  FUN_00193fd0 =====

void FUN_00193fd0(undefined8 *param_1)

{
  FUN_00193c8c(*param_1);
  return;
}


// ===== 00193fd8  FUN_00193fd8 =====

undefined1  [16] FUN_00193fd8(long *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *(ulong *)(*param_1 + 0x60);
  return auVar1 << 0x40;
}


// ===== 00193fe8  FUN_00193fe8 =====

void FUN_00193fe8(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  int local_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar5 = FUN_0018daf8(param_3);
  if ((uVar5 & 1) != 0) {
    iVar1 = *param_2;
    iVar2 = param_2[1];
    iVar4 = FUN_0018da80(param_3);
    iStack_5c = FUN_0018da98(param_3);
    local_60 = iVar4 + iVar1;
    iStack_5c = iStack_5c + iVar2;
    local_68 = iVar1;
    iStack_64 = iVar2;
    FUN_001940a0(param_1,&local_68,param_3,param_4,param_5);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001940a0  FUN_001940a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001940a0(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                 undefined4 param_5)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  __shared_weak_count *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar5 = FUN_0018daf8(param_3);
  if ((uVar5 & 1) != 0) {
    uStack_98 = 0;
    local_a0 = 0;
    local_88 = (__shared_weak_count *)0x0;
    uStack_90 = 0;
    uStack_78 = _UNK_001462a8;
    local_80 = _DAT_001462a0;
    uStack_68 = _UNK_001462a8;
    uStack_70 = _DAT_001462a0;
    local_60 = 0x3f800000;
    FUN_00194efc(*param_1 + 0x20,&local_a0,1,0xff);
    this = local_88;
    if (local_88 != (__shared_weak_count *)0x0) {
      p_Var1 = local_88 + 8;
      do {
        lVar6 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*(long *)local_88 + 0x10))(local_88);
        std::__ndk1::__shared_weak_count::__release_weak(this);
      }
    }
    uVar5 = NEON_cmeq(CONCAT44((int)((ulong)param_2[1] >> 0x20) - (int)((ulong)*param_2 >> 0x20),
                               (int)param_2[1] - (int)*param_2),
                      CONCAT44((int)((ulong)param_4[1] >> 0x20) - (int)((ulong)*param_4 >> 0x20),
                               (int)param_4[1] - (int)*param_4),4);
    uVar7 = (undefined4)(uVar5 >> 0x20);
    if ((uVar5 & CONCAT44(uVar7,uVar7) & 1) != 0) {
      FUN_00193cc8(*param_1,param_2,param_3,param_4,param_5);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001941c8  FUN_001941c8 =====

void FUN_001941c8(undefined8 param_1,int *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  int local_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar6 = FUN_0018daf8(param_3);
  if ((uVar6 & 1) != 0) {
    iVar1 = *param_2;
    iVar2 = param_2[1];
    iVar4 = FUN_0018da80(param_3);
    iStack_5c = FUN_0018da98(param_3);
    local_60 = iVar4 + iVar1;
    iStack_5c = iStack_5c + iVar2;
    local_68 = iVar1;
    iStack_64 = iVar2;
    uVar5 = FUN_0018da80(param_3);
    uStack_6c = FUN_0018da98(param_3);
    local_78 = 0;
    local_70 = uVar5;
    FUN_001940a0(param_1,&local_68,param_3,&local_78,param_4);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00194338  FUN_00194338 =====

void FUN_00194338(long param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this;
  
  this = *(__shared_weak_count **)(param_1 + 8);
  if (this != (__shared_weak_count *)0x0) {
    p_Var1 = this + 8;
    do {
      lVar4 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
      return;
    }
  }
  return;
}


// ===== 00194390  FUN_00194390 =====

bool FUN_00194390(float param_1,undefined8 param_2,long *param_3,uint *param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  uint *puVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  pfVar1 = (float *)*param_3;
  pfVar2 = (float *)param_3[1];
  if (pfVar1 == pfVar2) {
    bVar7 = false;
  }
  else {
    iVar10 = (int)((float)*(byte *)(pfVar1 + 1) * param_1);
    iVar6 = iVar10 * (uint)*(byte *)((long)pfVar1 + 5);
    bVar7 = ABS(param_1 + -1.0) < DAT_00144b68 == (NAN(ABS(param_1 + -1.0)) || NAN(DAT_00144b68)) ||
            *(byte *)(pfVar1 + 1) != 0xff;
    iVar13 = (uint)*(byte *)((long)pfVar1 + 6) * iVar10;
    uVar4 = ((uint)((ulong)((long)iVar6 * 0x80808081) >> 0x27) - (iVar6 >> 0x1f)) * 0x10000 |
            iVar10 << 0x18 |
            ((uint)((ulong)((long)iVar13 * 0x80808081) >> 0x27) - (iVar13 >> 0x1f)) * 0x100 |
            (int)((uint)*(byte *)((long)pfVar1 + 7) * iVar10) / 0xff;
    *param_4 = uVar4;
    fVar16 = *pfVar1;
    fVar14 = 1.0 / (float)(int)param_5;
    fVar15 = fVar14 * 1.5;
    uVar8 = 1;
    if ((1 < (int)param_5) && (fVar15 == fVar16 || fVar15 < fVar16 != (NAN(fVar15) || NAN(fVar16))))
    {
      uVar8 = 1;
      do {
        param_4[uVar8] = uVar4;
        uVar8 = uVar8 + 1;
        fVar15 = fVar15 + fVar14;
        if (param_5 <= uVar8) break;
      } while (fVar15 == fVar16 || fVar15 < fVar16 != (NAN(fVar15) || NAN(fVar16)));
    }
    iVar6 = (int)uVar8;
    iVar13 = (int)((ulong)((long)pfVar2 - (long)pfVar1) >> 3);
    if (1 < iVar13) {
      uVar11 = 0;
      uVar3 = uVar4;
      do {
        pfVar2 = pfVar1 + uVar11 * 2 + 2;
        bVar7 = (bool)(bVar7 | *(byte *)(pfVar2 + 1) != 0xff);
        iVar5 = (int)((float)*(byte *)(pfVar2 + 1) * param_1);
        fVar17 = *pfVar2;
        iVar6 = iVar5 * (uint)*(byte *)((long)pfVar2 + 5);
        iVar10 = (uint)*(byte *)((long)pfVar2 + 6) * iVar5;
        uVar4 = ((uint)((ulong)((long)iVar6 * 0x80808081) >> 0x27) - (iVar6 >> 0x1f)) * 0x10000 |
                iVar5 << 0x18 |
                ((uint)((ulong)((long)iVar10 * 0x80808081) >> 0x27) - (iVar10 >> 0x1f)) * 0x100 |
                (int)((uint)*(byte *)((long)pfVar2 + 7) * iVar5) / 0xff;
        if (((int)uVar8 < (int)param_5) && (fVar15 < fVar17 != (NAN(fVar15) || NAN(fVar17)))) {
          uVar8 = (ulong)(int)uVar8;
          do {
            iVar6 = (int)((fVar15 - fVar16) * 255.0 * (1.0 / (fVar17 - fVar16)));
            param_4[uVar8] =
                 (uVar4 & 0xff00ff) * iVar6 + (0xff - iVar6) * (uVar3 & 0xff00ff) >> 8 & 0xff00ff |
                 (uVar4 >> 8 & 0xff00ff) * iVar6 + (0xff - iVar6) * (uVar3 >> 8 & 0xff00ff) &
                 0xff00ff00;
            uVar8 = uVar8 + 1;
            fVar15 = fVar15 + fVar14;
            if ((long)(int)param_5 <= (long)uVar8) break;
          } while (fVar15 < fVar17 != (NAN(fVar15) || NAN(fVar17)));
        }
        iVar6 = (int)uVar8;
        uVar11 = uVar11 + 1;
        fVar16 = fVar17;
        uVar3 = uVar4;
      } while (uVar11 != iVar13 - 1);
    }
    if (iVar6 < (int)param_5) {
      lVar9 = (long)(int)param_5 - (long)iVar6;
      puVar12 = param_4 + iVar6;
      do {
        lVar9 = lVar9 + -1;
        *puVar12 = uVar4;
        puVar12 = puVar12 + 1;
      } while (lVar9 != 0);
    }
    param_4[(int)(param_5 - 1)] = uVar4;
  }
  return bVar7;
}


// ===== 00194628  FUN_00194628 =====

void FUN_00194628(long param_1)

{
  std::__ndk1::mutex::~mutex((mutex *)(param_1 + 0x28));
  FUN_00196174(param_1);
  return;
}


// ===== 00194650  FUN_00194650 =====

void FUN_00194650(long param_1)

{
  memset(*(void **)(param_1 + 0x18),0,(long)*(int *)(param_1 + 0x10) * (long)*(int *)(param_1 + 8));
  return;
}


// ===== 00194674  FUN_00194674 =====

void FUN_00194674(undefined1 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_0018dac8(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  uVar2 = FUN_0018da80(param_2);
  *(undefined4 *)(param_1 + 4) = uVar2;
  uVar2 = FUN_0018da98(param_2);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = 4;
  uVar2 = FUN_0018da68(param_2);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  uVar1 = FUN_0018db08(param_2);
  *param_1 = uVar1;
  return;
}


// ===== 001946d8  FUN_001946d8 =====

void FUN_001946d8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  *(long *)(param_1 + 8) = param_2;
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return;
}


// ===== 00194efc  FUN_00194efc =====

void FUN_00194efc(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  __shared_weak_count *p_Var2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  __shared_weak_count *p_Var11;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  *(undefined1 *)(param_1 + 0x9d) = 0;
  switch(*param_2) {
  case 0:
    *(undefined4 *)(param_1 + 0x20) = 0;
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x20) = 1;
    bVar3 = *(byte *)(param_2 + 1);
    *(uint *)(param_1 + 0x48) =
         ((uint)bVar3 * (uint)*(byte *)((long)param_2 + 5)) / 0xff << 0x10 | (uint)bVar3 << 0x18 |
         ((uint)*(byte *)((long)param_2 + 6) * (uint)bVar3) / 0xff << 8 |
         ((uint)*(byte *)((long)param_2 + 7) * (uint)bVar3) / 0xff;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x20) = 2;
    FUN_00195220(&local_58,&DAT_00214cd0,*(undefined8 *)(param_2 + 2));
    p_Var2 = local_50;
    uVar7 = local_58;
    local_58 = 0;
    local_50 = (__shared_weak_count *)0x0;
    p_Var11 = *(__shared_weak_count **)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar7;
    *(__shared_weak_count **)(param_1 + 0x30) = p_Var2;
    if (p_Var11 != (__shared_weak_count *)0x0) {
      p_Var2 = p_Var11 + 8;
      do {
        lVar10 = *(long *)p_Var2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
        if (bVar5) {
          *(long *)p_Var2 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*(long *)p_Var11 + 0x10))(p_Var11);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var11);
      }
    }
    p_Var2 = local_50;
    if (local_50 != (__shared_weak_count *)0x0) {
      p_Var11 = local_50 + 8;
      do {
        lVar10 = *(long *)p_Var11;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var11,0x10);
        if (bVar5) {
          *(long *)p_Var11 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*(long *)local_50 + 0x10))(local_50);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var2);
      }
    }
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(*(long *)(param_1 + 0x28) + 0x1000);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(*(long *)(param_2 + 2) + 0x2c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(*(long *)(param_2 + 2) + 0x30);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(long *)(param_2 + 2) + 0x34);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(long *)(param_2 + 2) + 0x38);
    goto LAB_00195174;
  case 3:
    *(undefined4 *)(param_1 + 0x20) = 3;
    FUN_00195220(&local_58,&DAT_00214cd0,*(undefined8 *)(param_2 + 2));
    p_Var2 = local_50;
    uVar7 = local_58;
    local_58 = 0;
    local_50 = (__shared_weak_count *)0x0;
    p_Var11 = *(__shared_weak_count **)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar7;
    *(__shared_weak_count **)(param_1 + 0x30) = p_Var2;
    if (p_Var11 != (__shared_weak_count *)0x0) {
      p_Var2 = p_Var11 + 8;
      do {
        lVar10 = *(long *)p_Var2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
        if (bVar5) {
          *(long *)p_Var2 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*(long *)p_Var11 + 0x10))(p_Var11);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var11);
      }
    }
    p_Var2 = local_50;
    if (local_50 != (__shared_weak_count *)0x0) {
      p_Var11 = local_50 + 8;
      do {
        lVar10 = *(long *)p_Var11;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var11,0x10);
        if (bVar5) {
          *(long *)p_Var11 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*(long *)local_50 + 0x10))(local_50);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var2);
      }
    }
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(*(long *)(param_1 + 0x28) + 0x1000);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(*(long *)(param_2 + 2) + 0x2c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(*(long *)(param_2 + 2) + 0x30);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(long *)(param_2 + 2) + 0x34);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(long *)(param_2 + 2) + 0x38);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(*(long *)(param_2 + 2) + 0x3c);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(*(long *)(param_2 + 2) + 0x40);
LAB_00195174:
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(*(long *)(param_2 + 2) + 4);
    param_2 = (undefined4 *)(*(long *)(param_2 + 2) + 0x44);
LAB_00195188:
    FUN_00195584(param_1,param_2);
    break;
  case 4:
    puVar1 = param_2 + 4;
    *(undefined4 *)(param_1 + 0x20) = 4;
    uVar8 = FUN_0018da80(puVar1);
    uVar9 = FUN_0018da98(puVar1);
    local_50 = (__shared_weak_count *)CONCAT44(uVar9,uVar8);
    local_58 = 0;
    FUN_0019569c(param_1,puVar1,0xff,0,&local_58);
    param_2 = param_2 + 8;
    goto LAB_00195188;
  }
  FUN_00195770(param_1);
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00195220  FUN_00195220 =====

void FUN_00195220(long *param_1,long param_2,long param_3)

{
  __shared_weak_count *p_Var1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  long *plVar11;
  __shared_weak_count *p_Var12;
  long lVar13;
  long lVar14;
  float fVar15;
  undefined1 auVar16 [16];
  long local_80;
  __shared_weak_count *p_Stack_78;
  long local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  local_70 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar6 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
  if (lVar6 != 0) {
    uVar8 = 0;
    local_70 = 0;
    pbVar10 = (byte *)(*(long *)(param_3 + 0x10) + 7);
    do {
      bVar2 = pbVar10[-3];
      fVar15 = (float)NEON_fmadd(*(undefined4 *)(param_3 + 0x28),
                                 (float)(((uint)bVar2 * (uint)pbVar10[-2]) / 0xff << 0x10 |
                                         (uint)bVar2 << 0x18 |
                                         ((uint)pbVar10[-1] * (uint)bVar2) / 0xff << 8 |
                                        ((uint)*pbVar10 * (uint)bVar2) / 0xff),(float)local_70);
      local_70 = (long)fVar15;
      if (1 < uVar8) break;
      uVar8 = uVar8 + 1;
      pbVar10 = pbVar10 + 8;
    } while (uVar8 < (ulong)(lVar6 >> 3));
  }
  std::__ndk1::mutex::lock((mutex *)(param_2 + 0x28));
  lVar6 = FUN_00196360(param_2,&local_70);
  if (lVar6 != 0) {
    if (lVar6 != 1) {
      auVar16 = FUN_00196d4c(param_2,&local_70);
      plVar11 = auVar16._0_8_;
      if (plVar11 != auVar16._8_8_) {
LAB_0019540c:
        lVar7 = plVar11[3];
        lVar13 = *(long *)(param_3 + 0x10);
        lVar9 = *(long *)(lVar7 + 0x1010);
        lVar6 = *(long *)(lVar7 + 0x1008);
        if (lVar9 - lVar6 != *(long *)(param_3 + 0x18) - lVar13) goto LAB_0019545c;
        if (lVar6 != lVar9) {
          while (uVar8 = FUN_00196cf0(&local_80,lVar6,lVar13), (uVar8 & 1) != 0) {
            lVar6 = lVar6 + 8;
            lVar13 = lVar13 + 8;
            if (lVar9 == lVar6) {
              lVar7 = plVar11[3];
              goto LAB_00195474;
            }
          }
          goto LAB_0019545c;
        }
LAB_00195474:
        p_Var12 = (__shared_weak_count *)plVar11[4];
        if (p_Var12 != (__shared_weak_count *)0x0) {
          p_Var1 = p_Var12 + 8;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar4) {
              *(long *)p_Var1 = *(long *)p_Var1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        *param_1 = lVar7;
        param_1[1] = (long)p_Var12;
        if (lVar7 != 0) goto LAB_001953bc;
        goto LAB_00195498;
      }
LAB_00195468:
      p_Var12 = (__shared_weak_count *)0x0;
LAB_00195498:
      FUN_001961ec(&local_80,param_2,local_70,param_3);
      p_Var1 = p_Stack_78;
      lVar6 = local_80;
      local_80 = 0;
      p_Stack_78 = (__shared_weak_count *)0x0;
      *param_1 = lVar6;
      param_1[1] = (long)p_Var1;
      if (p_Var12 != (__shared_weak_count *)0x0) {
        p_Var1 = p_Var12 + 8;
        do {
          lVar6 = *(long *)p_Var1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar4) {
            *(long *)p_Var1 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*(long *)p_Var12 + 0x10))(p_Var12);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var12);
        }
      }
      p_Var12 = p_Stack_78;
      if (p_Stack_78 != (__shared_weak_count *)0x0) {
        p_Var1 = p_Stack_78 + 8;
        do {
          lVar6 = *(long *)p_Var1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar4) {
            *(long *)p_Var1 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*(long *)p_Stack_78 + 0x10))(p_Stack_78);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var12);
        }
      }
      goto LAB_001953bc;
    }
    lVar7 = FUN_00196c3c(param_2);
    lVar9 = *(long *)(lVar7 + 0x18);
    lVar13 = *(long *)(param_3 + 0x10);
    lVar14 = *(long *)(lVar9 + 0x1010);
    lVar6 = *(long *)(lVar9 + 0x1008);
    if (lVar14 - lVar6 == *(long *)(param_3 + 0x18) - lVar13) {
      if (lVar6 != lVar14) {
        do {
          uVar8 = FUN_00196cf0(&local_80,lVar6,lVar13);
          if ((uVar8 & 1) == 0) goto LAB_001953a0;
          lVar6 = lVar6 + 8;
          lVar13 = lVar13 + 8;
        } while (lVar14 != lVar6);
        lVar9 = *(long *)(lVar7 + 0x18);
      }
      lVar6 = *(long *)(lVar7 + 0x20);
      if (lVar6 != 0) {
        plVar11 = (long *)(lVar6 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *param_1 = lVar9;
      param_1[1] = lVar6;
      goto LAB_001953bc;
    }
  }
LAB_001953a0:
  FUN_001961ec(&local_80,param_2,local_70,param_3);
  param_1[1] = (long)p_Stack_78;
  *param_1 = local_80;
LAB_001953bc:
  std::__ndk1::mutex::unlock((mutex *)(param_2 + 0x28));
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_0019545c:
  plVar11 = (long *)*plVar11;
  if (plVar11 == auVar16._8_8_) goto LAB_00195468;
  goto LAB_0019540c;
}


// ===== 0019552c  FUN_0019552c =====

void FUN_0019552c(long param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this;
  
  this = *(__shared_weak_count **)(param_1 + 8);
  if (this != (__shared_weak_count *)0x0) {
    p_Var1 = this + 8;
    do {
      lVar4 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
      return;
    }
  }
  return;
}


// ===== 00195584  FUN_00195584 =====

void FUN_00195584(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 uVar2;
  ulong uVar3;
  bool bVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined1 local_3c [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0019003c(&local_50,param_2,0);
  *(undefined8 *)(param_1 + 0x80) = uStack_48;
  *(undefined8 *)(param_1 + 0x78) = local_50;
  *(undefined4 *)(param_1 + 0x88) = local_40;
  auVar7 = NEON_ext(local_3c,local_3c,4,1);
  auVar6 = NEON_ext(local_3c,auVar7,0xc,1);
  auVar6 = NEON_ext(auVar7,auVar6,0xc,1);
  *(long *)(param_1 + 0x94) = auVar6._8_8_;
  *(long *)(param_1 + 0x8c) = auVar6._0_8_;
  uVar2 = FUN_0018f458(&local_50);
  *(undefined1 *)(param_1 + 0x9d) = uVar2;
  uVar3 = FUN_0018f438(&local_50);
  if ((uVar3 & 1) != 0) {
    fVar5 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x88),
                              *(float *)(param_1 + 0x7c) * *(float *)(param_1 + 0x7c));
    bVar4 = false;
    if ((((fVar5 == 1.5258789e-05 || fVar5 < 1.5258789e-05 != NAN(fVar5)) ||
         (fVar8 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x84),
                                    *(float *)(param_1 + 0x78) * *(float *)(param_1 + 0x78)),
         fVar8 == 1.5258789e-05 || fVar8 < 1.5258789e-05 != NAN(fVar8))) ||
        (fVar8 < DAT_00144b4c == (NAN(fVar8) || NAN(DAT_00144b4c)))) ||
       (fVar5 < DAT_00144b4c == (NAN(fVar5) || NAN(DAT_00144b4c)))) goto LAB_00195674;
    if (ABS(*(float *)(param_1 + 0x94)) < DAT_00144b4c !=
        (NAN(ABS(*(float *)(param_1 + 0x94))) || NAN(DAT_00144b4c))) {
      bVar4 = ABS(*(float *)(param_1 + 0x98)) < DAT_00144b4c !=
              (NAN(ABS(*(float *)(param_1 + 0x98))) || NAN(DAT_00144b4c));
      goto LAB_00195674;
    }
  }
  bVar4 = false;
LAB_00195674:
  *(bool *)(param_1 + 0x9c) = bVar4;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019569c  FUN_0019569c =====

void FUN_0019569c(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,int *param_5
                 )

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  *(undefined4 *)(param_1 + 0x20) = 4;
  uVar6 = FUN_0018dae0(param_2);
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  uVar5 = FUN_0018da80(param_2);
  *(undefined4 *)(param_1 + 0x50) = uVar5;
  uVar5 = FUN_0018da98(param_2);
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  uVar5 = FUN_0018da68(param_2);
  *(undefined4 *)(param_1 + 0x68) = uVar5;
  uVar4 = FUN_0018db08(param_2);
  *(undefined1 *)(param_1 + 0x6c) = uVar4;
  iVar1 = *param_5;
  *(int *)(param_1 + 0x58) = iVar1;
  iVar2 = param_5[1];
  *(int *)(param_1 + 0x5c) = iVar2;
  iVar1 = (param_5[2] - *param_5) + iVar1;
  iVar3 = *(int *)(param_1 + 0x50);
  if (iVar1 <= *(int *)(param_1 + 0x50)) {
    iVar3 = iVar1;
  }
  *(int *)(param_1 + 0x60) = iVar3;
  iVar1 = param_5[3];
  iVar3 = param_5[1];
  *(undefined4 *)(param_1 + 0x70) = param_4;
  *(undefined4 *)(param_1 + 0x74) = param_3;
  iVar2 = (iVar1 - iVar3) + iVar2;
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar2 <= *(int *)(param_1 + 0x54)) {
    iVar1 = iVar2;
  }
  *(int *)(param_1 + 100) = iVar1;
  FUN_00195770(param_1);
  return;
}


// ===== 00195770  FUN_00195770 =====

void FUN_00195770(long param_1)

{
  code *pcVar1;
  
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 0:
    *(undefined8 *)(param_1 + 0x18) = 0;
    return;
  case 1:
    pcVar1 = FUN_001957dc;
    break;
  case 2:
  case 3:
    pcVar1 = FUN_0019597c;
    break;
  case 4:
    if (*(byte *)(param_1 + 0x9d) < 2) {
      pcVar1 = FUN_00195be0;
    }
    else {
      pcVar1 = FUN_00195d40;
    }
    break;
  default:
    goto switchD_00195790_default;
  }
  *(code **)(param_1 + 0x18) = pcVar1;
switchD_00195790_default:
  return;
}


// ===== 001957dc  FUN_001957dc =====

void FUN_001957dc(long param_1,short *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  uint uVar9;
  code *pcVar10;
  
  uVar2 = param_3[0x12];
  uVar9 = *param_3;
  if ((uVar9 == 1 && 0xfe < uVar2 >> 0x18) && param_3[8] == 1) {
    uVar9 = 0;
  }
  if (uVar9 == 0) {
    if (param_1 != 0) {
      do {
        bVar4 = *(byte *)(param_2 + 3);
        lVar6 = *(long *)(*(long *)(param_3 + 2) + 0x18);
        iVar3 = *(int *)(*(long *)(param_3 + 2) + 0xc);
        param_1 = param_1 + -1;
        if (bVar4 == 0xff) {
          FUN_00196df4(lVar6 + (int)(iVar3 * (param_3[0xf] + (int)param_2[1])) + (long)*param_2 * 4
                       + (long)(int)param_3[0xe] * 4,uVar2,param_2[2]);
        }
        else {
          uVar5 = param_2[2];
          if (uVar5 != 0) {
            uVar9 = (uint)uVar5;
            uVar1 = bVar4 ^ 0xff;
            if (uVar5 < 2) {
              uVar9 = 1;
            }
            uVar8 = (ulong)uVar9;
            puVar7 = (uint *)(lVar6 + (long)(int)param_3[0xe] * 4 + (long)*param_2 * 4 +
                                      (long)(int)(iVar3 * (param_3[0xf] + (int)param_2[1])));
            do {
              uVar8 = uVar8 - 1;
              *puVar7 = ((*puVar7 >> 8 & 0xff00ff) * uVar1 & 0xff00ff00 |
                        (*puVar7 & 0xff00ff) * uVar1 >> 8 & 0xff00ff) +
                        ((uVar2 & 0xff00ff) * (uint)bVar4 >> 8 & 0xff00ff |
                        (uVar2 >> 8 & 0xff00ff) * (uint)bVar4 & 0xff00ff00);
              puVar7 = puVar7 + 1;
            } while (uVar8 != 0);
          }
        }
        param_2 = param_2 + 4;
      } while (param_1 != 0);
    }
  }
  else if (param_1 != 0) {
    pcVar10 = *(code **)(PTR_PTR_LAB_0020f850 + (ulong)uVar9 * 8);
    do {
      param_1 = param_1 + -1;
      (*pcVar10)(*(long *)(*(long *)(param_3 + 2) + 0x18) +
                 (long)*(int *)(*(long *)(param_3 + 2) + 0xc) *
                 ((long)(int)param_3[0x10] + (long)param_2[1]) + (long)*param_2 * 4 +
                 (long)(int)param_3[0xe] * 4,param_2[2],uVar2,(char)param_2[3]);
      param_2 = param_2 + 4;
    } while (param_1 != 0);
  }
  return;
}


// ===== 0019597c  FUN_0019597c =====

void FUN_0019597c(long param_1,short *param_2,uint *param_3)

{
  short sVar1;
  short sVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint local_20a8 [2];
  code *local_20a0;
  undefined8 local_2098;
  code *local_2090;
  undefined8 local_2088;
  float local_2080;
  float local_207c;
  float local_2078;
  float fStack_2074;
  undefined1 local_2070;
  undefined1 auStack_2068 [8192];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar8 = param_3[8];
  if (uVar8 == 3) {
    fVar9 = (float)*(undefined8 *)(param_3 + 0x13) - (float)*(undefined8 *)(param_3 + 0x15);
    fVar10 = (float)((ulong)*(undefined8 *)(param_3 + 0x13) >> 0x20) -
             (float)((ulong)*(undefined8 *)(param_3 + 0x15) >> 0x20);
    local_2088 = CONCAT44(fVar10,fVar9);
    local_207c = (float)param_3[0x18];
    local_20a0 = (code *)&LAB_00194acc;
    bVar4 = false;
    fVar11 = ABS(local_207c);
    local_2080 = (float)param_3[0x17] - local_207c;
    local_2078 = (float)NEON_fnmsub(local_2080,local_2080,fVar10 * fVar10 + fVar9 * fVar9);
    local_207c = local_207c * local_207c;
    local_2070 = fVar11 != DAT_00144b68 &&
                 fVar11 < DAT_00144b68 == (NAN(fVar11) || NAN(DAT_00144b68)) ||
                 (local_2078 == 0.0 || local_2078 < 0.0 != NAN(local_2078));
    fStack_2074 = 0.5 / local_2078;
  }
  else if (uVar8 == 2) {
    fVar9 = (float)param_3[0x15] - (float)param_3[0x13];
    local_207c = 0.0;
    fVar10 = (float)param_3[0x16] - (float)param_3[0x14];
    local_2080 = (float)NEON_fmadd(fVar10,fVar10,fVar9 * fVar9);
    local_2088 = CONCAT44(fVar10,fVar9);
    if (local_2080 != 0.0) {
      local_207c = (float)NEON_fnmadd(fVar9 / local_2080,param_3[0x13],
                                      -((fVar10 / local_2080) * (float)param_3[0x14]));
      local_2088 = CONCAT44(fVar10 / local_2080,fVar9 / local_2080);
    }
    bVar4 = false;
    local_20a0 = (code *)&LAB_001946f0;
  }
  else {
    if (uVar8 == 1) {
      local_20a0 = (code *)0x0;
      bVar5 = *(char *)((long)param_3 + 0x4b) != -1;
      bVar4 = true;
      goto LAB_00195ac8;
    }
    bVar4 = true;
    local_20a0 = (code *)0x0;
  }
  bVar5 = true;
LAB_00195ac8:
  local_20a8[0] = *param_3;
  if (!bVar5 && local_20a8[0] == 1) {
    local_20a8[0] = 0;
  }
  local_2098 = *(undefined8 *)(PTR_PTR_LAB_0020f850 + (ulong)local_20a8[0] * 8);
  local_2090 = *(code **)(PTR_PTR_FUN_0020f858 + (ulong)local_20a8[0] * 8);
  if ((!bVar4) && (param_1 != 0)) {
    do {
      uVar8 = (uint)(ushort)param_2[2];
      param_1 = param_1 + -1;
      if (param_2[2] != 0) {
        sVar1 = param_2[1];
        sVar2 = *param_2;
        lVar6 = *(long *)(*(long *)(param_3 + 2) + 0x18) +
                (long)*(int *)(*(long *)(param_3 + 2) + 0xc) *
                ((long)(int)param_3[0x10] + (long)sVar1) + (long)sVar2 * 4 +
                (long)(int)param_3[0xe] * 4;
        while( true ) {
          uVar7 = uVar8;
          if (0x7ff < (int)uVar8) {
            uVar7 = 0x800;
          }
          (*local_20a0)(auStack_2068,local_20a8,param_3,(int)sVar1,(int)sVar2,uVar7);
          (*local_2090)(lVar6,auStack_2068,uVar7,(char)param_2[3]);
          uVar8 = uVar8 - uVar7;
          if (uVar8 == 0) break;
          sVar1 = param_2[1];
          sVar2 = *param_2;
          lVar6 = lVar6 + (long)(int)uVar7 * 4;
        }
      }
      param_2 = param_2 + 4;
    } while (param_1 != 0);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00195be0  FUN_00195be0 =====

void FUN_00195be0(long param_1,long param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  ulong uVar9;
  code *pcVar10;
  byte *pbVar11;
  float fVar12;
  float fVar13;
  
  if ((param_3[0x1b] & 0xfe) == 2) {
    if (param_3[8] == 1) {
      bVar8 = *(char *)((long)param_3 + 0x4b) != -1;
    }
    else {
      bVar8 = true;
    }
    uVar9 = (ulong)*param_3;
    if (!bVar8 && uVar9 == 1) {
      uVar9 = 0;
    }
    if (param_1 != 0) {
      fVar12 = (float)param_3[0x25];
      fVar13 = (float)param_3[0x26];
      uVar6 = param_3[0x14];
      uVar7 = param_3[0x15];
      pbVar11 = (byte *)(param_2 + 6);
      pcVar10 = *(code **)(PTR_PTR_FUN_0020f858 + uVar9 * 8);
      do {
        param_1 = param_1 + -1;
        uVar1 = (int)*(short *)(pbVar11 + -6) + (int)fVar12;
        if ((int)uVar1 < (int)uVar6) {
          iVar2 = (int)*(short *)(pbVar11 + -4) + (int)fVar13;
          if ((-1 < iVar2) && (iVar2 < (int)uVar7)) {
            uVar4 = 0;
            if (-1 < (int)uVar1) {
              uVar4 = uVar1;
            }
            iVar3 = (uVar1 & (int)uVar1 >> 0x1f) + (uint)*(ushort *)(pbVar11 + -2);
            iVar5 = uVar6 - uVar4;
            if ((int)(iVar3 + uVar4) <= (int)uVar6) {
              iVar5 = iVar3;
            }
            if (0 < iVar5) {
              iVar3 = -(int)fVar12;
              if (-1 < (int)uVar1) {
                iVar3 = (int)*(short *)(pbVar11 + -6);
              }
              (*pcVar10)(*(long *)(*(long *)(param_3 + 2) + 0x18) +
                         (long)*(int *)(*(long *)(param_3 + 2) + 0xc) *
                         ((long)(int)param_3[0x10] + (long)(int)*(short *)(pbVar11 + -4)) +
                         (long)iVar3 * 4 + (long)(int)param_3[0xe] * 4,
                         *(long *)(param_3 + 0x12) + (ulong)(param_3[0x1a] * iVar2) +
                         (ulong)uVar4 * 4,iVar5,(int)(param_3[0x1d] * (uint)*pbVar11) >> 8);
            }
          }
        }
        pbVar11 = pbVar11 + 8;
      } while (param_1 != 0);
    }
  }
  return;
}


// ===== 00195d40  FUN_00195d40 =====

void FUN_00195d40(long param_1,short *param_2,uint *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  long lVar10;
  bool bVar11;
  uint uVar12;
  code *pcVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  int *piVar17;
  uint uVar18;
  long lVar19;
  undefined8 uVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  int local_10a4 [1029];
  long local_90;
  
  lVar10 = tpidr_el0;
  local_90 = *(long *)(lVar10 + 0x28);
  if ((param_3[0x1b] & 0xfe) == 2) {
    if (param_3[8] == 1) {
      bVar11 = *(char *)((long)param_3 + 0x4b) != -1;
    }
    else {
      bVar11 = true;
    }
    uVar4 = param_3[0x16];
    uVar6 = param_3[0x17];
    uVar15 = (ulong)*param_3;
    local_10a4[3] = uVar6;
    local_10a4[4] = uVar4;
    uVar5 = param_3[0x18];
    uVar7 = param_3[0x19];
    local_10a4[2] = uVar5 - 1;
    if (!bVar11 && uVar15 == 1) {
      uVar15 = 0;
    }
    pcVar13 = *(code **)(PTR_PTR_FUN_0020f858 + uVar15 * 8);
    local_10a4[1] = uVar7 - 1;
    uVar28 = *(undefined8 *)(param_3 + 0x1e);
    uVar20 = *(undefined8 *)(param_3 + 0x1e);
    if ((char)param_3[0x27] == '\0') {
      if (param_1 != 0) {
        fVar25 = (float)param_3[0x20];
        uVar20 = uVar28;
        fVar23 = fVar25;
        while( true ) {
          uVar18 = (uint)(ushort)param_2[2];
          param_1 = param_1 + -1;
          if (param_2[2] != 0) {
            uVar8 = param_3[0x1d];
            bVar9 = *(byte *)(param_2 + 3);
            fVar27 = (float)(int)param_2[1] + 0.5;
            uVar24 = NEON_fmadd(param_3[0x23],fVar27,param_3[0x24]);
            fVar26 = (float)(int)*param_2 + 0.5;
            fVar29 = (float)NEON_fmadd(fVar23,fVar26,uVar24);
            fVar23 = (float)*(undefined8 *)(param_3 + 0x25) +
                     (float)*(undefined8 *)(param_3 + 0x21) * fVar27 + (float)uVar20 * fVar26;
            fVar26 = (float)((ulong)*(undefined8 *)(param_3 + 0x25) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(param_3 + 0x21) >> 0x20) * fVar27 +
                     (float)((ulong)uVar20 >> 0x20) * fVar26;
            lVar19 = *(long *)(*(long *)(param_3 + 2) + 0x18) +
                     (long)*(int *)(*(long *)(param_3 + 2) + 0xc) *
                     ((long)(int)param_3[0x10] + (long)param_2[1]) + (long)*param_2 * 4 +
                     (long)(int)param_3[0xe] * 4;
            do {
              uVar12 = uVar18;
              if (0x3ff < (int)uVar18) {
                uVar12 = 0x400;
              }
              if (0 < (int)uVar18) {
                lVar14 = *(long *)(param_3 + 0x12);
                piVar17 = local_10a4 + 5;
                do {
                  fVar27 = 1.0;
                  if (fVar29 != 0.0) {
                    fVar27 = 1.0 / fVar29;
                  }
                  fVar22 = fVar27 * fVar23;
                  local_10a4[0] = (int)fVar22 - (uint)(fVar22 < 0.0 != NAN(fVar22));
                  fVar27 = fVar27 * fVar26;
                  piVar16 = local_10a4;
                  if ((int)uVar5 <= local_10a4[0]) {
                    piVar16 = local_10a4 + 2;
                  }
                  piVar2 = local_10a4 + 4;
                  if ((int)uVar4 <= local_10a4[0]) {
                    piVar2 = piVar16;
                  }
                  local_10a4[0] = (int)fVar27 - (uint)(fVar27 < 0.0 != NAN(fVar27));
                  piVar16 = local_10a4;
                  if ((int)uVar7 <= local_10a4[0]) {
                    piVar16 = local_10a4 + 1;
                  }
                  piVar3 = local_10a4 + 3;
                  if ((int)uVar6 <= local_10a4[0]) {
                    piVar3 = piVar16;
                  }
                  fVar23 = fVar23 + (float)uVar28;
                  fVar26 = fVar26 + (float)((ulong)uVar28 >> 0x20);
                  fVar29 = fVar29 + fVar25;
                  piVar16 = piVar17 + 1;
                  *piVar17 = *(int *)(lVar14 + (ulong)(param_3[0x1a] * *piVar3) + (long)*piVar2 * 4)
                  ;
                  piVar17 = piVar16;
                } while (piVar16 < local_10a4 + (long)(int)uVar12 + 5);
              }
              (*pcVar13)(lVar19,local_10a4 + 5,uVar12,(int)(uVar8 * bVar9) >> 8);
              uVar18 = uVar18 - uVar12;
              lVar19 = lVar19 + (long)(int)uVar12 * 4;
            } while (uVar18 != 0);
          }
          if (param_1 == 0) break;
          uVar20 = *(undefined8 *)(param_3 + 0x1e);
          fVar23 = (float)param_3[0x20];
          param_2 = param_2 + 4;
        }
      }
    }
    else if (param_1 != 0) {
      uVar28 = NEON_fcvtzs(uVar20,0x10,4);
      while( true ) {
        uVar18 = (uint)(ushort)param_2[2];
        param_1 = param_1 + -1;
        if (param_2[2] != 0) {
          uVar8 = param_3[0x1d];
          bVar9 = *(byte *)(param_2 + 3);
          fVar23 = (float)(int)param_2[1] + 0.5;
          fVar25 = (float)(int)*param_2 + 0.5;
          uVar20 = NEON_fcvtzs(CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x25) >> 0x20) +
                                        (float)((ulong)*(undefined8 *)(param_3 + 0x21) >> 0x20) *
                                        fVar23 + (float)((ulong)uVar20 >> 0x20) * fVar25,
                                        (float)*(undefined8 *)(param_3 + 0x25) +
                                        (float)*(undefined8 *)(param_3 + 0x21) * fVar23 +
                                        (float)uVar20 * fVar25),0x10,4);
          lVar19 = *(long *)(*(long *)(param_3 + 2) + 0x18) +
                   (long)*(int *)(*(long *)(param_3 + 2) + 0xc) *
                   ((long)(int)param_3[0x10] + (long)(int)param_2[1]) + (long)*param_2 * 4 +
                   (long)(int)param_3[0xe] * 4;
          do {
            uVar12 = uVar18;
            if (0x3ff < (int)uVar18) {
              uVar12 = 0x400;
            }
            if (0 < (int)uVar18) {
              lVar14 = *(long *)(param_3 + 0x12);
              piVar17 = local_10a4 + 5;
              do {
                local_10a4[0] = (int)uVar20 >> 0x10;
                iVar21 = (int)((ulong)uVar20 >> 0x20);
                piVar16 = local_10a4;
                if ((int)uVar5 <= local_10a4[0]) {
                  piVar16 = local_10a4 + 2;
                }
                iVar1 = iVar21 >> 0x10;
                piVar2 = local_10a4 + 4;
                if ((int)uVar4 <= local_10a4[0]) {
                  piVar2 = piVar16;
                }
                piVar16 = local_10a4;
                if ((int)uVar7 <= iVar1) {
                  piVar16 = local_10a4 + 1;
                }
                local_10a4[0] = iVar1;
                piVar3 = local_10a4 + 3;
                if ((int)uVar6 <= iVar1) {
                  piVar3 = piVar16;
                }
                uVar20 = CONCAT44(iVar21 + (int)((ulong)uVar28 >> 0x20),(int)uVar20 + (int)uVar28);
                piVar16 = piVar17 + 1;
                *piVar17 = *(int *)(lVar14 + (ulong)(param_3[0x1a] * *piVar3) + (long)*piVar2 * 4);
                piVar17 = piVar16;
              } while (piVar16 < local_10a4 + (long)(int)uVar12 + 5);
            }
            (*pcVar13)(lVar19,local_10a4 + 5,uVar12,(int)(uVar8 * bVar9) >> 8);
            uVar18 = uVar18 - uVar12;
            lVar19 = lVar19 + (long)(int)uVar12 * 4;
          } while (uVar18 != 0);
        }
        if (param_1 == 0) break;
        uVar20 = *(undefined8 *)(param_3 + 0x1e);
        param_2 = param_2 + 4;
      }
    }
  }
  if (*(long *)(lVar10 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019614c  FUN_0019614c =====

void FUN_0019614c(void)

{
  FUN_001972e0();
  *(undefined **)(PTR_PTR_LAB_0020f850 + 8) = PTR_DAT_0020f860;
  return;
}


// ===== 00196174  FUN_00196174 =====

void FUN_00196174(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_001961b0(param_1,param_1[2]);
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 001961b0  FUN_001961b0 =====

void FUN_001961b0(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      pvVar1 = (void *)*param_2;
      FUN_0019552c(param_2 + 3);
      operator_delete(param_2);
      param_2 = (undefined8 *)pvVar1;
    } while (pvVar1 != (void *)0x0);
  }
  return;
}


// ===== 001961ec  FUN_001961ec =====

void FUN_001961ec(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  char cVar3;
  long lVar4;
  bool bVar5;
  byte bVar6;
  __shared_weak_count *p_Var7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  __shared_weak_count *p_Var11;
  undefined8 local_80;
  __shared_weak_count *p_Stack_78;
  __shared_weak_count *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (*(long *)(param_2 + 0x18) == 0x3c) {
    iVar10 = -6;
    do {
      FUN_00196468(&local_80,param_2,*(undefined8 *)(param_2 + 0x10));
      FUN_0019659c(&local_80,0);
      bVar5 = iVar10 != -1;
      iVar10 = iVar10 + 1;
    } while (bVar5);
  }
  p_Var7 = (__shared_weak_count *)operator_new(0x1038);
  *(undefined8 *)(p_Var7 + 0x10) = 0;
  p_Var11 = p_Var7 + 8;
  *(long *)p_Var11 = 0;
  *(undefined ***)p_Var7 = &PTR_FUN_002095c8;
  uVar8 = FUN_0019667c(&local_80,param_4 + 0x10);
  p_Var7[0x1018] = (__shared_weak_count)0x1;
  *(__shared_weak_count **)(p_Var7 + 0x1028) = p_Stack_78;
  *(undefined8 *)(p_Var7 + 0x1020) = local_80;
  *(__shared_weak_count **)(p_Var7 + 0x1030) = local_70;
  p_Var1 = p_Var7 + 0x18;
  bVar6 = FUN_00194390(*(undefined4 *)(param_4 + 0x28),uVar8,param_4 + 0x10,p_Var1,0x400);
  p_Var7[0x1018] = (__shared_weak_count)(bVar6 & 1);
  do {
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(p_Var11,0x10);
    if (bVar5) {
      *(long *)p_Var11 = *(long *)p_Var11 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  local_80 = param_3;
  p_Stack_78 = p_Var1;
  local_70 = p_Var7;
  FUN_001966e8(param_2,&local_80);
  p_Var11 = local_70;
  if (local_70 != (__shared_weak_count *)0x0) {
    p_Var2 = local_70 + 8;
    do {
      lVar9 = *(long *)p_Var2;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar5) {
        *(long *)p_Var2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*(long *)local_70 + 0x10))(local_70);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var11);
    }
  }
  *param_1 = (long)p_Var1;
  param_1[1] = (long)p_Var7;
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00196360  FUN_00196360 =====

long FUN_00196360(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_001963b4();
  if (plVar2 == (long *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar1 = 1;
    do {
      lVar3 = lVar1;
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        return lVar3;
      }
      lVar1 = lVar3 + 1;
    } while (plVar2[2] == *param_2);
  }
  return lVar3;
}


// ===== 001963b4  FUN_001963b4 =====

long * FUN_001963b4(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar8 = NEON_cnt(uVar2,1);
    uVar7 = NEON_uaddlv(uVar8,1);
    uVar9 = CONCAT62((int6)((ulong)uVar8 >> 0x10),uVar7);
    if ((uVar9 & 0xffffffff) < 2) {
      uVar4 = uVar2 - 1 & uVar3;
    }
    else {
      uVar4 = uVar3;
      if (uVar2 <= uVar3) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = uVar3 / uVar2;
        }
        uVar4 = uVar3 - uVar4 * uVar2;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar4 * 8);
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) {
        do {
          uVar6 = plVar5[1];
          if (uVar3 == uVar6) {
            if (plVar5[2] == uVar3) {
              return plVar5;
            }
          }
          else {
            if ((uVar9 & 0xffffffff) < 2) {
              uVar6 = uVar6 & uVar2 - 1;
            }
            else if (uVar2 <= uVar6) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar6 / uVar2;
              }
              uVar6 = uVar6 - uVar1 * uVar2;
            }
            if (uVar6 != uVar4) {
              return (long *)0x0;
            }
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      return plVar5;
    }
  }
  return (long *)0x0;
}


// ===== 00196468  FUN_00196468 =====

void FUN_00196468(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  
  uVar3 = param_2[1];
  uVar4 = param_3[1];
  uVar9 = NEON_cnt(uVar3,1);
  uVar8 = NEON_uaddlv(uVar9,1);
  uVar6 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
  if (uVar6 < 2) {
    uVar4 = uVar3 - 1 & uVar4;
  }
  else {
    uVar7 = 0;
    if (uVar3 != 0) {
      uVar7 = uVar4 / uVar3;
    }
    if (uVar3 <= uVar4) {
      uVar4 = uVar4 - uVar7 * uVar3;
    }
  }
  plVar2 = *(long **)(*param_2 + uVar4 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar7 = plVar5[1];
    if (uVar6 < 2) {
      uVar7 = uVar7 & uVar3 - 1;
    }
    else if (uVar3 <= uVar7) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar7 / uVar3;
      }
      uVar7 = uVar7 - uVar1 * uVar3;
    }
    if (uVar7 == uVar4) goto LAB_00196534;
  }
  if (*param_3 != 0) {
    uVar7 = *(ulong *)(*param_3 + 8);
    if (uVar6 < 2) {
      uVar7 = uVar7 & uVar3 - 1;
    }
    else if (uVar3 <= uVar7) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar7 / uVar3;
      }
      uVar7 = uVar7 - uVar1 * uVar3;
    }
    if (uVar7 == uVar4) goto LAB_00196534;
  }
  *(undefined8 *)(*param_2 + uVar4 * 8) = 0;
LAB_00196534:
  if (*param_3 != 0) {
    uVar7 = *(ulong *)(*param_3 + 8);
    if (uVar6 < 2) {
      uVar7 = uVar7 & uVar3 - 1;
    }
    else if (uVar3 <= uVar7) {
      uVar6 = 0;
      if (uVar3 != 0) {
        uVar6 = uVar7 / uVar3;
      }
      uVar7 = uVar7 - uVar6 * uVar3;
    }
    if (uVar7 != uVar4) {
      *(long **)(*param_2 + uVar7 * 8) = plVar5;
    }
  }
  *plVar5 = *param_3;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


// ===== 0019659c  FUN_0019659c =====

void FUN_0019659c(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = param_2;
  if (pvVar1 != (void *)0x0) {
    if (*(char *)(param_1 + 2) != '\0') {
      FUN_0019552c((long)pvVar1 + 0x18);
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 001965e0  FUN_001965e0 =====

void FUN_001965e0(__shared_count *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x1020);
  *(undefined ***)param_1 = &PTR_FUN_002095c8;
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x1028) = pvVar1;
    operator_delete(pvVar1);
  }
  std::__ndk1::__shared_count::~__shared_count(param_1);
  return;
}


// ===== 0019661c  FUN_0019661c =====

void FUN_0019661c(__shared_count *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x1020);
  *(undefined ***)param_1 = &PTR_FUN_002095c8;
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x1028) = pvVar1;
    operator_delete(pvVar1);
  }
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00196660  FUN_00196660 =====

void FUN_00196660(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x1020);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x1028) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 0019667c  FUN_0019667c =====

void FUN_0019667c(undefined8 *param_1,long *param_2)

{
  void *__dest;
  size_t __n;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2[1] - *param_2 != 0) {
    FUN_0018e158(param_1,param_2[1] - *param_2 >> 3);
    __dest = (void *)param_1[1];
    __n = param_2[1] - *param_2;
    if (0 < (long)__n) {
      memcpy(__dest,(void *)*param_2,__n);
      __dest = (void *)((long)__dest + __n);
    }
    param_1[1] = __dest;
  }
  return;
}


// ===== 001966e8  FUN_001966e8 =====

undefined8 * FUN_001966e8(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_60;
  long local_58;
  undefined1 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x28);
  uVar3 = *param_2;
  puVar2[3] = param_2[1];
  puVar2[2] = uVar3;
  puVar2[4] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  local_50 = 1;
  *puVar2 = 0;
  puVar2[1] = puVar2[2];
  local_58 = param_1 + 0x10;
  uVar3 = FUN_001967a8(param_1);
  FUN_001968f8(param_1,puVar2,uVar3);
  local_60 = 0;
  FUN_0019659c(&local_60,0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001967a8  FUN_001967a8 =====

long * FUN_001967a8(long *param_1,ulong param_2,long *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  
  uVar5 = param_1[1];
  fVar13 = (float)(param_1[3] + 1);
  if ((uVar5 == 0) ||
     (fVar14 = *(float *)(param_1 + 4) * (float)uVar5,
     fVar14 < fVar13 != (NAN(fVar14) || NAN(fVar13)))) {
    uVar5 = (ulong)(uVar5 < 3 || (uVar5 & uVar5 - 1) != 0) | uVar5 << 1;
    uVar6 = (ulong)(fVar13 / *(float *)(param_1 + 4));
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    FUN_001969e8(param_1,uVar6);
    uVar5 = param_1[1];
  }
  uVar12 = NEON_cnt(uVar5,1);
  uVar11 = NEON_uaddlv(uVar12,1);
  uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
  if (uVar6 < 2) {
    uVar7 = uVar5 - 1 & param_2;
  }
  else {
    uVar7 = param_2;
    if (uVar5 <= param_2) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = param_2 / uVar5;
      }
      uVar7 = param_2 - uVar7 * uVar5;
    }
  }
  plVar8 = *(long **)(*param_1 + uVar7 * 8);
  if (plVar8 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    bVar1 = false;
    do {
      bVar2 = bVar1;
      plVar4 = plVar8;
      plVar8 = (long *)*plVar4;
      if (plVar8 == (long *)0x0) {
        return plVar4;
      }
      uVar9 = plVar8[1];
      if (uVar6 < 2) {
        uVar10 = uVar9 & uVar5 - 1;
      }
      else {
        uVar10 = uVar9;
        if (uVar5 <= uVar9) {
          uVar10 = 0;
          if (uVar5 != 0) {
            uVar10 = uVar9 / uVar5;
          }
          uVar10 = uVar9 - uVar10 * uVar5;
        }
      }
      if (uVar10 != uVar7) {
        return plVar4;
      }
      if (uVar9 == param_2) {
        bVar3 = plVar8[2] == *param_3;
      }
      else {
        bVar3 = false;
      }
      bVar1 = (bool)(bVar2 | bVar3);
    } while ((bVar3) || (!bVar2));
  }
  return plVar4;
}


// ===== 001968f8  FUN_001968f8 =====

void FUN_001968f8(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  uVar7 = NEON_cnt(uVar1,1);
  uVar6 = NEON_uaddlv(uVar7,1);
  uVar3 = CONCAT62((int6)((ulong)uVar7 >> 0x10),uVar6) & 0xffffffff;
  if (uVar3 < 2) {
    uVar2 = uVar1 - 1 & uVar2;
  }
  else if (uVar1 <= uVar2) {
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar4 = uVar2 / uVar1;
    }
    uVar2 = uVar2 - uVar4 * uVar1;
  }
  if (param_3 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar5;
    if (*param_2 != 0) {
      uVar2 = *(ulong *)(*param_2 + 8);
      if (uVar3 < 2) {
        uVar2 = uVar2 & uVar1 - 1;
      }
      else if (uVar1 <= uVar2) {
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar2 / uVar1;
        }
        uVar2 = uVar2 - uVar3 * uVar1;
      }
      *(long **)(*param_1 + uVar2 * 8) = param_2;
    }
  }
  else {
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 != 0) {
      uVar4 = *(ulong *)(*param_2 + 8);
      if (uVar3 < 2) {
        uVar4 = uVar4 & uVar1 - 1;
      }
      else if (uVar1 <= uVar4) {
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar4 / uVar1;
        }
        uVar4 = uVar4 - uVar3 * uVar1;
      }
      if (uVar4 != uVar2) {
        *(long **)(*param_1 + uVar4 * 8) = param_2;
      }
    }
  }
  param_1[3] = param_1[3] + 1;
  return;
}


// ===== 001969e8  FUN_001969e8 =====

void FUN_001969e8(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  void *pvVar3;
  void *pvVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__ndk1::__next_prime(param_2);
  }
  uVar10 = param_1[1];
  uVar2 = param_2;
  if (uVar10 < param_2) goto LAB_00196aac;
  if (uVar10 <= param_2) {
    return;
  }
  uVar2 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
  if (uVar10 < 3) {
LAB_00196a94:
    uVar2 = std::__ndk1::__next_prime(uVar2);
  }
  else {
    uVar12 = NEON_cnt(uVar10,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    if (1 < (uint)CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11)) goto LAB_00196a94;
    if (1 < uVar2) {
      uVar2 = 1L << (-LZCOUNT(uVar2 - 1) & 0x3fU);
    }
  }
  if (uVar2 <= param_2) {
    uVar2 = param_2;
  }
  if (uVar10 <= uVar2) {
    return;
  }
LAB_00196aac:
  if (uVar2 == 0) {
    pvVar3 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    param_1[1] = 0;
  }
  else {
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar3 = operator_new(uVar2 << 3);
    pvVar4 = (void *)*param_1;
    *param_1 = (long)pvVar3;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
    uVar10 = 0;
    param_1[1] = uVar2;
    do {
      *(undefined8 *)(*param_1 + uVar10 * 8) = 0;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar2);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      uVar10 = plVar5[1];
      uVar12 = NEON_cnt(uVar2,1);
      uVar11 = NEON_uaddlv(uVar12,1);
      uVar13 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11);
      if ((uVar13 & 0xffffffff) < 2) {
        uVar10 = uVar10 & uVar2 - 1;
      }
      else if (uVar2 <= uVar10) {
        uVar8 = 0;
        if (uVar2 != 0) {
          uVar8 = uVar10 / uVar2;
        }
        uVar10 = uVar10 - uVar8 * uVar2;
      }
      *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
      if ((long *)*plVar5 != (long *)0x0) {
        plVar6 = (long *)*plVar5;
        do {
          uVar8 = plVar6[1];
          if ((uVar13 & 0xffffffff) < 2) {
            uVar8 = uVar8 & uVar2 - 1;
          }
          else if (uVar2 <= uVar8) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar8 / uVar2;
            }
            uVar8 = uVar8 - uVar1 * uVar2;
          }
          if (uVar8 != uVar10) {
            plVar7 = plVar6;
            if (*(long *)(*param_1 + uVar8 * 8) == 0) {
              *(long **)(*param_1 + uVar8 * 8) = plVar5;
              uVar10 = uVar8;
            }
            else {
              do {
                plVar9 = plVar7;
                plVar7 = (long *)*plVar9;
                if (plVar7 == (long *)0x0) break;
              } while (plVar6[2] == plVar7[2]);
              *plVar5 = (long)plVar7;
              *plVar9 = **(long **)(*param_1 + uVar8 * 8);
              **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
              plVar6 = plVar5;
            }
          }
          plVar7 = (long *)*plVar6;
          plVar5 = plVar6;
          plVar6 = plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return;
}


// ===== 00196c3c  FUN_00196c3c =====

long * FUN_00196c3c(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar8 = NEON_cnt(uVar2,1);
    uVar7 = NEON_uaddlv(uVar8,1);
    uVar9 = CONCAT62((int6)((ulong)uVar8 >> 0x10),uVar7);
    if ((uVar9 & 0xffffffff) < 2) {
      uVar4 = uVar2 - 1 & uVar3;
    }
    else {
      uVar4 = uVar3;
      if (uVar2 <= uVar3) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = uVar3 / uVar2;
        }
        uVar4 = uVar3 - uVar4 * uVar2;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar4 * 8);
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) {
        do {
          uVar6 = plVar5[1];
          if (uVar6 == uVar3) {
            if (plVar5[2] == uVar3) {
              return plVar5;
            }
          }
          else {
            if ((uVar9 & 0xffffffff) < 2) {
              uVar6 = uVar6 & uVar2 - 1;
            }
            else if (uVar2 <= uVar6) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar6 / uVar2;
              }
              uVar6 = uVar6 - uVar1 * uVar2;
            }
            if (uVar6 != uVar4) {
              return (long *)0x0;
            }
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      return plVar5;
    }
  }
  return (long *)0x0;
}


// ===== 00196cf0  FUN_00196cf0 =====

bool FUN_00196cf0(undefined8 param_1,float *param_2,float *param_3)

{
  if ((((*param_2 == *param_3) && (*(char *)(param_2 + 1) == *(char *)(param_3 + 1))) &&
      (*(char *)((long)param_2 + 5) == *(char *)((long)param_3 + 5))) &&
     (*(char *)((long)param_2 + 6) == *(char *)((long)param_3 + 6))) {
    return *(char *)((long)param_2 + 7) == *(char *)((long)param_3 + 7);
  }
  return false;
}


// ===== 00196d4c  FUN_00196d4c =====

void FUN_00196d4c(undefined8 param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00196c3c();
  if (plVar1 != (long *)0x0) {
    do {
      plVar1 = (long *)*plVar1;
      if (plVar1 == (long *)0x0) {
        return;
      }
    } while (plVar1[2] == *param_2);
  }
  return;
}


// ===== 00196d94  _INIT_1 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_1(void)

{
  uRam0000000000214cd8 = 0;
  _DAT_00214cd0 = 0;
  uRam0000000000214ce8 = 0;
  _DAT_00214ce0 = 0;
  DAT_00214cf0 = 0x3f800000;
  uRam0000000000214d00 = 0;
  _DAT_00214cf8 = 0;
  uRam0000000000214d10 = 0;
  _DAT_00214d08 = 0;
  DAT_00214d18 = 0;
  __cxa_atexit(FUN_00194628,&DAT_00214cd0,&PTR_LOOP_002086b0);
  FUN_001972e0();
  *(undefined **)(PTR_PTR_LAB_0020f850 + 8) = PTR_DAT_0020f860;
  return;
}


// ===== 00196df4  FUN_00196df4 =====

void FUN_00196df4(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_001a12f0(param_3,1,param_1,param_3,param_2);
  return;
}


// ===== 00196f54  FUN_00196f54 =====

void FUN_00196f54(uint *param_1,uint *param_2,ulong param_3,int param_4)

{
  if (param_4 == 0xff) {
    memcpy(param_1,param_2,-(param_3 >> 0x1f & 1) & 0xfffffffc00000000 | (param_3 & 0xffffffff) << 2
          );
  }
  else if (0 < (int)param_3) {
    param_3 = param_3 & 0xffffffff;
    do {
      param_3 = param_3 - 1;
      *param_1 = (*param_2 >> 8 & 0xff00ff) * param_4 +
                 (*param_1 >> 8 & 0xff00ff) * (0xff - param_4) & 0xff00ff00 |
                 (*param_2 & 0xff00ff) * param_4 + (*param_1 & 0xff00ff) * (0xff - param_4) >> 8 &
                 0xff00ff;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}


// ===== 001972e0  FUN_001972e0 =====

void FUN_001972e0(void)

{
  return;
}


// ===== 001972e4  FUN_001972e4 =====

void FUN_001972e4(undefined1 param_1 [16],undefined4 param_2,long *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)param_3[1];
  for (puVar2 = (undefined4 *)*param_3; puVar2 != puVar1; puVar2 = puVar2 + 2) {
    uVar3 = FUN_00190798(param_4,puVar2);
    *puVar2 = uVar3;
    puVar2[1] = param_2;
  }
  *(undefined1 *)(param_3 + 8) = 1;
  return;
}


// ===== 00197338  FUN_00197338 =====

void FUN_00197338(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar12;
  double dVar11;
  undefined8 uVar13;
  float fVar14;
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if ((char)param_1[8] == '\0') {
    fVar8 = *(float *)((long)param_1 + 0x3c);
  }
  else {
    pcVar6 = (char *)param_1[3];
    pcVar3 = (char *)param_1[4];
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
    if (pcVar6 == pcVar3) {
      fVar8 = 0.0;
    }
    else {
      lVar7 = 0;
      fVar8 = 0.0;
      do {
        cVar4 = *pcVar6;
        if (cVar4 == '\x02') {
          lVar2 = *param_1 + lVar7 * 8;
          FUN_0018d1f8(auStack_68,lVar2 + -8,lVar2,lVar2 + 8,lVar2 + 0x10);
          fVar8 = (float)FUN_0018d214(auStack_68);
          lVar7 = lVar7 + 3;
          fVar8 = *(float *)((long)param_1 + 0x3c) + fVar8;
          *(float *)((long)param_1 + 0x3c) = fVar8;
        }
        else {
          if (cVar4 == '\x01') {
            puVar1 = (undefined8 *)(*param_1 + lVar7 * 8);
            uVar10 = puVar1[-1];
            uVar13 = *puVar1;
            fVar9 = ABS((float)uVar13 - (float)uVar10);
            fVar12 = ABS((float)((ulong)uVar13 >> 0x20) - (float)((ulong)uVar10 >> 0x20));
            fVar14 = fVar9;
            if (fVar9 <= fVar12) {
              fVar14 = fVar12;
            }
            fVar9 = (float)NEON_fminnm(fVar9,fVar12);
            dVar11 = (double)NEON_fmadd((double)fVar9,0x3fd8000000000000,(double)fVar14);
            fVar8 = fVar8 + (float)dVar11;
            *(float *)((long)param_1 + 0x3c) = fVar8;
          }
          else if (cVar4 != '\0') goto LAB_00197418;
          lVar7 = lVar7 + 1;
        }
LAB_00197418:
        pcVar6 = pcVar6 + 1;
      } while (pcVar3 != pcVar6);
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(fVar8);
  }
  return;
}


// ===== 00197464  FUN_00197464 =====

void FUN_00197464(long param_1)

{
  if (*(char *)(param_1 + 0x41) != '\0') {
    FUN_00197498(0,0);
    *(undefined1 *)(param_1 + 0x41) = 0;
  }
  return;
}


// ===== 00197498  FUN_00197498 =====

void FUN_00197498(undefined4 param_1,undefined4 param_2,long param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined4 local_78;
  undefined4 uStack_74;
  void *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  long local_58;
  long lStack_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  puVar2 = *(undefined1 **)(param_3 + 0x20);
  *(undefined4 *)(param_3 + 0x34) = param_1;
  *(undefined4 *)(param_3 + 0x38) = param_2;
  *(undefined1 *)(param_3 + 0x41) = 0;
  local_78 = param_2;
  uStack_74 = param_1;
  if (puVar2 < *(undefined1 **)(param_3 + 0x28)) {
    *puVar2 = 0;
    *(undefined1 **)(param_3 + 0x20) = puVar2 + 1;
  }
  else {
    lVar6 = *(long *)(param_3 + 0x18);
    lVar8 = (long)puVar2 - lVar6;
    uVar1 = lVar8 + 1;
    if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar5 = (long)*(undefined1 **)(param_3 + 0x28) - lVar6;
    uVar7 = uVar5 * 2;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    lStack_50 = param_3 + 0x28;
    if (0x3ffffffffffffffe < uVar5) {
      uVar1 = 0x7fffffffffffffff;
    }
    local_58 = 0;
    if (uVar1 == 0) {
      local_70 = (void *)0x0;
    }
    else {
      local_70 = operator_new(uVar1);
    }
    local_68 = (undefined1 *)((long)local_70 + lVar8);
    local_58 = (long)local_70 + uVar1;
    local_60 = local_68 + 1;
    *local_68 = 0;
    FUN_001991c0((long *)(param_3 + 0x18),&local_70);
    if (local_60 != local_68) {
      local_60 = local_68;
    }
    if (local_70 != (void *)0x0) {
      operator_delete(local_70);
    }
  }
  puVar3 = *(undefined4 **)(param_3 + 8);
  if (puVar3 < *(undefined4 **)(param_3 + 0x10)) {
    *puVar3 = uStack_74;
    puVar3[1] = local_78;
    *(undefined4 **)(param_3 + 8) = puVar3 + 2;
  }
  else {
    FUN_00199238(param_3,&uStack_74,&local_78);
  }
  *(undefined1 *)(param_3 + 0x40) = 1;
  *(int *)(param_3 + 0x30) = *(int *)(param_3 + 0x30) + 1;
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001975e8  FUN_001975e8 =====

void FUN_001975e8(undefined4 param_1,undefined4 param_2,long param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined4 local_78;
  undefined4 uStack_74;
  void *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  long local_58;
  long lStack_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_78 = param_2;
  uStack_74 = param_1;
  if (*(char *)(param_3 + 0x41) != '\0') {
    FUN_00197498(0,0,param_3);
    *(undefined1 *)(param_3 + 0x41) = 0;
  }
  puVar2 = *(undefined1 **)(param_3 + 0x20);
  if (puVar2 < *(undefined1 **)(param_3 + 0x28)) {
    *puVar2 = 1;
    *(undefined1 **)(param_3 + 0x20) = puVar2 + 1;
  }
  else {
    lVar6 = *(long *)(param_3 + 0x18);
    lVar8 = (long)puVar2 - lVar6;
    uVar1 = lVar8 + 1;
    if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar5 = (long)*(undefined1 **)(param_3 + 0x28) - lVar6;
    uVar7 = uVar5 * 2;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    lStack_50 = param_3 + 0x28;
    if (0x3ffffffffffffffe < uVar5) {
      uVar1 = 0x7fffffffffffffff;
    }
    local_58 = 0;
    if (uVar1 == 0) {
      local_70 = (void *)0x0;
    }
    else {
      local_70 = operator_new(uVar1);
    }
    local_68 = (undefined1 *)((long)local_70 + lVar8);
    local_58 = (long)local_70 + uVar1;
    local_60 = local_68 + 1;
    *local_68 = 1;
    FUN_001991c0((long *)(param_3 + 0x18),&local_70);
    if (local_60 != local_68) {
      local_60 = local_68;
    }
    if (local_70 != (void *)0x0) {
      operator_delete(local_70);
    }
  }
  puVar3 = *(undefined4 **)(param_3 + 8);
  if (puVar3 < *(undefined4 **)(param_3 + 0x10)) {
    *puVar3 = uStack_74;
    puVar3[1] = local_78;
    *(undefined4 **)(param_3 + 8) = puVar3 + 2;
  }
  else {
    FUN_00199238(param_3,&uStack_74,&local_78);
  }
  *(undefined1 *)(param_3 + 0x40) = 1;
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00197748  FUN_00197748 =====

void FUN_00197748(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,long param_7)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  void *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  long local_58;
  long lStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_88 = param_6;
  uStack_84 = param_5;
  local_80 = param_4;
  uStack_7c = param_3;
  local_78 = param_2;
  uStack_74 = param_1;
  if (*(char *)(param_7 + 0x41) != '\0') {
    FUN_00197498(0,0,param_7);
    *(undefined1 *)(param_7 + 0x41) = 0;
  }
  puVar2 = *(undefined1 **)(param_7 + 0x20);
  if (puVar2 < *(undefined1 **)(param_7 + 0x28)) {
    *puVar2 = 2;
    *(undefined1 **)(param_7 + 0x20) = puVar2 + 1;
  }
  else {
    lVar7 = *(long *)(param_7 + 0x18);
    lVar10 = (long)puVar2 - lVar7;
    uVar1 = lVar10 + 1;
    if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar5 = (long)*(undefined1 **)(param_7 + 0x28) - lVar7;
    uVar9 = uVar5 * 2;
    if (uVar1 <= uVar9) {
      uVar1 = uVar9;
    }
    lStack_50 = param_7 + 0x28;
    if (0x3ffffffffffffffe < uVar5) {
      uVar1 = 0x7fffffffffffffff;
    }
    local_58 = 0;
    if (uVar1 == 0) {
      local_70 = (void *)0x0;
    }
    else {
      local_70 = operator_new(uVar1);
    }
    local_68 = (undefined1 *)((long)local_70 + lVar10);
    local_58 = (long)local_70 + uVar1;
    local_60 = local_68 + 1;
    *local_68 = 2;
    FUN_001991c0((long *)(param_7 + 0x18),&local_70);
    if (local_60 != local_68) {
      local_60 = local_68;
    }
    if (local_70 != (void *)0x0) {
      operator_delete(local_70);
    }
  }
  puVar8 = *(undefined4 **)(param_7 + 8);
  puVar4 = *(undefined4 **)(param_7 + 0x10);
  if (puVar8 < puVar4) {
    puVar6 = puVar8 + 2;
    *puVar8 = uStack_74;
    puVar8[1] = local_78;
    *(undefined4 **)(param_7 + 8) = puVar6;
  }
  else {
    FUN_00199238(param_7,&uStack_74,&local_78);
    puVar6 = *(undefined4 **)(param_7 + 8);
    puVar4 = *(undefined4 **)(param_7 + 0x10);
  }
  if (puVar6 < puVar4) {
    puVar8 = puVar6 + 2;
    *puVar6 = uStack_7c;
    puVar6[1] = local_80;
    *(undefined4 **)(param_7 + 8) = puVar8;
  }
  else {
    FUN_00199238(param_7,&uStack_7c,&local_80);
    puVar8 = *(undefined4 **)(param_7 + 8);
    puVar4 = *(undefined4 **)(param_7 + 0x10);
  }
  if (puVar8 < puVar4) {
    *puVar8 = uStack_84;
    puVar8[1] = local_88;
    *(undefined4 **)(param_7 + 8) = puVar8 + 2;
  }
  else {
    FUN_00199238(param_7,&uStack_84,&local_88);
  }
  *(undefined1 *)(param_7 + 0x40) = 1;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00197910  FUN_00197910 =====

void FUN_00197910(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  void *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  long local_58;
  long lStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar3 = *(undefined1 **)(param_1 + 0x20);
  if (*(undefined1 **)(param_1 + 0x18) != puVar3) {
    fVar8 = ABS(*(float *)(param_1 + 0x34) - *(float *)(*(long *)(param_1 + 8) + -8));
    if ((fVar8 < DAT_00144b68 == (NAN(fVar8) || NAN(DAT_00144b68))) ||
       (fVar8 = ABS(*(float *)(param_1 + 0x38) - *(float *)(*(long *)(param_1 + 8) + -4)),
       fVar8 < DAT_00144b68 == (NAN(fVar8) || NAN(DAT_00144b68)))) {
      FUN_001975e8(param_1);
      puVar3 = *(undefined1 **)(param_1 + 0x20);
    }
    if (puVar3 < *(undefined1 **)(param_1 + 0x28)) {
      *puVar3 = 3;
      *(undefined1 **)(param_1 + 0x20) = puVar3 + 1;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x18);
      lVar7 = (long)puVar3 - lVar5;
      uVar1 = lVar7 + 1;
      if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar4 = (long)*(undefined1 **)(param_1 + 0x28) - lVar5;
      uVar6 = uVar4 * 2;
      if (uVar1 <= uVar6) {
        uVar1 = uVar6;
      }
      lStack_50 = param_1 + 0x28;
      if (0x3ffffffffffffffe < uVar4) {
        uVar1 = 0x7fffffffffffffff;
      }
      local_58 = 0;
      if (uVar1 == 0) {
        local_70 = (void *)0x0;
      }
      else {
        local_70 = operator_new(uVar1);
      }
      local_68 = (undefined1 *)((long)local_70 + lVar7);
      local_58 = (long)local_70 + uVar1;
      local_60 = local_68 + 1;
      *local_68 = 3;
      FUN_001991c0((long *)(param_1 + 0x18),&local_70);
      if (local_60 != local_68) {
        local_60 = local_68;
      }
      if (local_70 != (void *)0x0) {
        operator_delete(local_70);
      }
    }
    *(undefined2 *)(param_1 + 0x40) = 0x101;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00197a68  FUN_00197a68 =====

void FUN_00197a68(undefined8 *param_1)

{
  if (param_1[3] != param_1[4]) {
    param_1[4] = param_1[3];
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
    param_1[1] = *param_1;
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}


// ===== 00197a90  FUN_00197a90 =====

undefined4 FUN_00197a90(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}


// ===== 00197a98  FUN_00197a98 =====

void FUN_00197a98(long *param_1,long param_2,long param_3)

{
  long lVar1;
  
  if ((ulong)(param_1[2] - *param_1 >> 3) < (ulong)(param_2 + (param_1[1] - *param_1 >> 3))) {
    FUN_00178fe4(param_1);
  }
  lVar1 = param_1[3];
  if ((ulong)(param_1[5] - lVar1) < (ulong)((param_1[4] - lVar1) + param_3)) {
    FUN_00197b08(param_1 + 3);
    return;
  }
  return;
}


// ===== 00197b08  FUN_00197b08 =====

void FUN_00197b08(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *local_60;
  long local_58;
  long local_50;
  long lStack_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *param_1;
  if ((ulong)(param_1[2] - lVar2) < param_2) {
    lVar3 = param_1[1];
    local_40 = param_1 + 2;
    local_60 = operator_new(param_2);
    local_58 = (long)local_60 + (lVar3 - lVar2);
    lStack_48 = (long)local_60 + param_2;
    local_50 = local_58;
    FUN_001991c0(param_1,&local_60);
    if (local_50 != local_58) {
      local_50 = local_58;
    }
    if (local_60 != (void *)0x0) {
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00197bbc  FUN_00197bbc =====

void FUN_00197bbc(undefined1 param_1 [16],undefined8 param_2,long param_3,float *param_4,
                 ulong param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 (*pauVar10) [16];
  long lVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  int iVar20;
  undefined4 *puVar21;
  int iVar22;
  ulong uVar23;
  undefined8 *puVar24;
  float fVar25;
  undefined8 extraout_d0;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 extraout_var;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0 [16];
  float local_130 [4];
  float local_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long local_b0;
  
  fVar38 = DAT_00144b68;
  uVar32 = param_1._8_8_;
  auVar27._0_8_ = param_1._0_8_;
  lVar11 = tpidr_el0;
  local_b0 = *(long *)(lVar11 + 0x28);
  local_1b0[0xe] = 0;
  local_1b0[0xb] = 0;
  local_1b0[10] = 0;
  local_1b0[0xd] = 0;
  local_1b0[0xc] = 0;
  local_1b0[7] = 0;
  local_1b0[6] = 0;
  local_1b0[9] = 0;
  local_1b0[8] = 0;
  local_1b0[3] = 0;
  local_1b0[2] = 0;
  local_1b0[5] = 0;
  local_1b0[4] = 0;
  local_1b0[1] = 0;
  local_1b0[0] = 0;
  fVar25 = *param_4;
  fVar37 = param_4[2];
  uVar19 = (ulong)(uint)fVar37;
  uVar39 = 0;
  fVar40 = 0.0;
  if (fVar25 < fVar37 != (NAN(fVar25) || NAN(fVar37))) {
    fVar33 = param_4[1];
    fVar34 = param_4[3];
    if (fVar33 < fVar34 != (NAN(fVar33) || NAN(fVar34))) {
      fVar40 = (float)NEON_fmadd(fVar34 - fVar33,0x3f000000,fVar33);
      local_118 = (float)NEON_fmadd(fVar37 - fVar25,0x3f000000,fVar25);
      local_110 = (fVar37 - fVar25) * DAT_00144b08;
      fStack_f4 = (fVar34 - fVar33) * DAT_00144b08;
      fVar35 = (float)param_2;
      fStack_114 = fVar34;
      local_e8 = local_118;
      fStack_e4 = fVar33;
      local_120 = local_118 + local_110;
      local_110 = local_118 - local_110;
      local_130[3] = fVar40 + fStack_f4;
      fStack_f4 = fVar40 - fStack_f4;
      local_c8 = 0;
      uStack_c0 = 0;
      local_130[0] = fVar37;
      local_130[1] = fVar40;
      local_100 = fVar25;
      fStack_fc = fVar40;
      local_d0 = fVar37;
      fStack_cc = fVar40;
      local_130[2] = fVar37;
      fStack_11c = fVar34;
      fStack_10c = fVar34;
      local_108 = fVar25;
      fStack_104 = local_130[3];
      local_f8 = fVar25;
      local_f0 = local_110;
      fStack_ec = fVar33;
      local_e0 = local_120;
      fStack_dc = fVar33;
      local_d8 = fVar37;
      fStack_d4 = fStack_f4;
      local_b8 = 0;
      uVar36 = 0x43b40000;
      if ((fVar35 == 360.0 || fVar35 < 360.0 != NAN(fVar35)) &&
         (uVar36 = param_2, fVar35 < -360.0 != NAN(fVar35))) {
        uVar36 = 0xc3b40000;
      }
      fVar37 = param_1._0_4_;
      fVar25 = (float)uVar36;
      if (fVar37 == 0.0) {
        if (ABS(fVar25 + -360.0) < DAT_00144b68 != (NAN(ABS(fVar25 + -360.0)) || NAN(DAT_00144b68)))
        {
          lVar16 = 0x50;
          uVar23 = 0xc;
          puVar15 = local_1b0;
          do {
            pauVar10 = (undefined1 (*) [16])((long)local_130 + lVar16);
            lVar16 = lVar16 + -0x10;
            auVar27 = NEON_ext(*pauVar10,*pauVar10,8,1);
            puVar15[1] = auVar27._8_8_;
            *puVar15 = auVar27._0_8_;
            puVar15 = puVar15 + 2;
          } while (lVar16 != -0x10);
          goto LAB_00197d3c;
        }
        if (ABS(fVar25 + 360.0) < DAT_00144b68 != (NAN(ABS(fVar25 + 360.0)) || NAN(DAT_00144b68))) {
          memcpy(local_1b0,local_130 + 2,0x60);
          uVar23 = 0xc;
          goto LAB_00197d3c;
        }
      }
      iVar18 = (int)(fVar37 * DAT_00144b6c);
      iVar22 = (int)((fVar25 + fVar37) * DAT_00144b6c);
      fVar40 = ((fVar25 + fVar37) - (float)(iVar22 * 0x5a)) * DAT_00144b6c;
      bVar1 = NAN(fVar25);
      bVar12 = fVar25 == 0.0;
      bVar13 = fVar25 < 0.0;
      fVar37 = (fVar37 - (float)(iVar18 * 0x5a)) * DAT_00144b6c;
      if (bVar12 || bVar13 != bVar1) {
        fVar40 = 1.0 - fVar40;
      }
      if (bVar12 || bVar13 != bVar1) {
        fVar37 = 1.0 - fVar37;
      }
      fVar33 = ABS(fVar40);
      iVar17 = -1;
      if (!bVar12 && bVar13 == bVar1) {
        iVar17 = 1;
      }
      fVar35 = ABS(fVar37 + -1.0);
      fVar34 = 90.0;
      iVar6 = iVar17;
      if (fVar33 != DAT_00144b68 && fVar33 < DAT_00144b68 == (NAN(fVar33) || NAN(DAT_00144b68))) {
        iVar6 = 0;
        fVar34 = fVar40 * 90.0;
      }
      uVar39 = 0;
      auVar30._4_4_ = 0;
      auVar30._0_4_ = fVar34;
      iVar7 = iVar17;
      if (fVar35 != DAT_00144b68 && fVar35 < DAT_00144b68 == (NAN(fVar35) || NAN(DAT_00144b68))) {
        iVar7 = 0;
      }
      fVar40 = 0.0;
      if (fVar35 != DAT_00144b68 && fVar35 < DAT_00144b68 == (NAN(fVar35) || NAN(DAT_00144b68))) {
        fVar40 = fVar37 * 90.0;
      }
      iVar8 = iVar22 - iVar6;
      iVar5 = iVar7 + iVar18;
      FUN_001988bc(fVar40,0);
      auVar30._8_8_ = uVar39;
      uVar39 = extraout_var;
      uVar26 = FUN_001988bc(auVar30);
      if (iVar5 == iVar8 + iVar17) {
        uVar2 = iVar5 % 4 + 4;
        uVar14 = iVar5 % 4 + 7;
        if (-1 < (int)uVar2) {
          uVar14 = uVar2;
        }
        iVar18 = ((uVar14 & 0xfffffffc) - uVar2) * 3;
        uVar2 = iVar18 + 0xc;
        if (fVar25 == 0.0 || fVar25 < 0.0 != NAN(fVar25)) {
          uVar2 = iVar18 + 9;
        }
        fVar38 = local_130[(ulong)uVar2 * 2];
        fVar40 = *(float *)((ulong)(local_130 + (ulong)uVar2 * 2) | 4);
LAB_00198108:
        uVar23 = 0;
      }
      else {
        fVar33 = ABS((float)uVar26 + -1.0);
        local_1c0 = 0;
        local_1b8 = 0;
        auVar27._8_8_ = uVar32;
        fVar37 = ABS((float)extraout_d0);
        FUN_001986d4(auVar27,uVar36,param_4,&local_1b8,&local_1c0);
        fVar40 = ABS((float)extraout_d0 - (float)uVar26);
        iVar20 = 0;
        uVar23 = 0;
        puVar15 = local_1b0;
        do {
          puVar24 = puVar15;
          iVar9 = (iVar5 + iVar20) % 4;
          uVar2 = iVar9 + 4;
          uVar14 = iVar9 + 7;
          if (-1 < (int)uVar2) {
            uVar14 = uVar2;
          }
          iVar9 = ((uVar14 & 0xfffffffc) - uVar2) * 3;
          uVar2 = iVar9 + 9;
          if (fVar25 == 0.0 || fVar25 < 0.0 != NAN(fVar25)) {
            uVar3 = iVar9 + 10;
            uVar4 = iVar9 + 0xb;
            uVar14 = iVar9 + 0xc;
          }
          else {
            uVar3 = iVar9 + 0xb;
            uVar4 = iVar9 + 10;
            uVar14 = uVar2;
            uVar2 = iVar9 + 0xc;
          }
          FUN_0018d1f8(&local_200,local_130 + (ulong)uVar2 * 2,local_130 + (ulong)uVar3 * 2,
                       local_130 + (ulong)uVar4 * 2,local_130 + (ulong)uVar14 * 2);
          uStack_1d8 = uStack_1f8;
          local_1e0 = local_200;
          local_1c8 = uStack_1e8;
          uStack_1d0 = uStack_1f0;
          if (iVar5 == iVar8 && fVar40 < fVar38 != (NAN(fVar40) || NAN(fVar38))) {
            fVar38 = (float)local_1b8;
            fVar40 = local_1b8._4_4_;
            goto LAB_00198108;
          }
          bVar1 = fVar33 < fVar38 == (NAN(fVar33) || NAN(fVar38));
          bVar13 = iVar8 - iVar5 == iVar20;
          uVar32 = uVar26;
          if (iVar20 == 0) {
            if ((fVar33 != fVar38 && bVar1) && bVar13) {
              auVar31._8_8_ = uVar39;
              auVar31._0_8_ = extraout_d0;
            }
            else {
              if (fVar37 == fVar38 || fVar37 < fVar38 != (NAN(fVar37) || NAN(fVar38)))
              goto LAB_001980d0;
              auVar31._8_8_ = uVar39;
              auVar31._0_8_ = extraout_d0;
              uVar32 = 0x3f800000;
            }
LAB_001980c4:
            FUN_0018d380(&local_200,auVar31,uVar32,&local_1e0);
            uStack_1d8 = uStack_1f8;
            local_1e0 = local_200;
            local_1c8 = uStack_1e8;
            uStack_1d0 = uStack_1f0;
          }
          else if ((fVar33 != fVar38 && bVar1) && bVar13) {
            auVar31 = ZEXT816(0);
            goto LAB_001980c4;
          }
LAB_001980d0:
          iVar20 = iVar20 + iVar17;
          uVar23 = uVar23 + 3;
          puVar24[1] = uStack_1d0;
          *puVar24 = uStack_1d8;
          puVar24[2] = local_1c8;
          puVar15 = puVar24 + 3;
          local_200 = local_1e0;
          uStack_1f8 = uStack_1d8;
          uStack_1f0 = uStack_1d0;
          uStack_1e8 = local_1c8;
        } while ((((iVar17 + iVar22) - iVar6) - iVar7) - iVar18 != iVar20);
        puVar24[2] = local_1c0;
        fVar38 = (float)local_1b8;
        fVar40 = local_1b8._4_4_;
      }
      uVar39 = 0;
      uVar19 = (ulong)(uint)fVar38;
      goto LAB_00197d3c;
    }
  }
  uVar23 = 0;
  uVar19 = 0;
  uVar39 = 0;
LAB_00197d3c:
  FUN_00197a98(param_3,uVar23 + 1,uVar23 / 3 + 1);
  if ((*(long *)(param_3 + 0x18) == *(long *)(param_3 + 0x20)) || ((param_5 & 1) != 0)) {
    auVar29._8_8_ = uVar39;
    auVar29._0_8_ = uVar19;
    FUN_00197498(auVar29,fVar40,param_3);
  }
  else {
    auVar28._8_8_ = uVar39;
    auVar28._0_8_ = uVar19;
    FUN_001975e8(auVar28,fVar40,param_3);
  }
  if (uVar23 != 0) {
    uVar19 = 0;
    puVar21 = (undefined4 *)((ulong)local_1b0 | 0xc);
    do {
      FUN_00197748(puVar21[-3],puVar21[-2],puVar21[-1],*puVar21,puVar21[1],puVar21[2],param_3);
      uVar19 = uVar19 + 3;
      puVar21 = puVar21 + 6;
    } while (uVar19 < uVar23);
  }
  if (*(long *)(lVar11 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00198184  FUN_00198184 =====

void FUN_00198184(undefined8 param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar3 = *param_2;
  fVar4 = param_2[2];
  if (fVar3 < fVar4 != (NAN(fVar3) || NAN(fVar4))) {
    fVar2 = param_2[1];
    fVar6 = param_2[3];
    if (fVar2 < fVar6 != (NAN(fVar2) || NAN(fVar6))) {
      fVar8 = (fVar6 - fVar2) * 0.5;
      fVar7 = (fVar4 - fVar3) * DAT_00144b08;
      fVar9 = (fVar6 - fVar2) * DAT_00144b08;
      FUN_00197a98(param_1,0xd,6);
      fVar5 = (float)NEON_fmadd(fVar4 - fVar3,0x3f000000,fVar3);
      FUN_00197498(fVar5,fVar2,param_1);
      if (param_3 == 1) {
        fVar8 = fVar8 + fVar2;
        fVar1 = fVar8 - fVar9;
        FUN_00197748(fVar5 + fVar7,fVar2,fVar4,fVar1,fVar4,fVar8,param_1);
        FUN_00197748(fVar4,fVar8 + fVar9,fVar5 + fVar7,fVar6,fVar5,fVar6,param_1);
        fVar7 = fVar5 - fVar7;
        FUN_00197748(fVar7,fVar6,fVar3,fVar8 + fVar9,fVar3,fVar8,param_1);
        fVar4 = fVar3;
      }
      else {
        fVar8 = fVar8 + fVar2;
        fVar1 = fVar8 - fVar9;
        FUN_00197748(fVar5 - fVar7,fVar2,fVar3,fVar1,fVar3,fVar8,param_1);
        FUN_00197748(fVar3,fVar8 + fVar9,fVar5 - fVar7,fVar6,fVar5,fVar6,param_1);
        fVar7 = fVar5 + fVar7;
        FUN_00197748(fVar7,fVar6,fVar4,fVar8 + fVar9,fVar4,fVar8,param_1);
      }
      FUN_00197748(fVar4,fVar1,fVar7,fVar2,fVar5,fVar2,param_1);
      FUN_00197910(param_1);
      return;
    }
  }
  return;
}


// ===== 00198384  FUN_00198384 =====

void FUN_00198384(undefined8 param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_2;
  fVar3 = param_2[2];
  if (fVar1 < fVar3 != (NAN(fVar1) || NAN(fVar3))) {
    fVar4 = param_2[1];
    fVar2 = param_2[3];
    if (fVar4 < fVar2 != (NAN(fVar4) || NAN(fVar2))) {
      FUN_00197a98(param_1,5,6);
      FUN_00197498(fVar3,fVar4,param_1);
      if (param_3 == 1) {
        FUN_001975e8(fVar3,fVar2,param_1);
        FUN_001975e8(fVar1,fVar2,param_1);
        fVar3 = fVar1;
        fVar2 = fVar4;
      }
      else {
        FUN_001975e8(fVar1,fVar4,param_1);
        FUN_001975e8(fVar1,fVar2,param_1);
      }
      FUN_001975e8(fVar3,fVar2,param_1);
      FUN_00197910(param_1);
      return;
    }
  }
  return;
}


// ===== 0019846c  FUN_0019846c =====

void FUN_0019846c(float param_1,undefined8 param_2,float *param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  long local_78;
  
  fVar4 = param_3[2] - *param_3;
  fVar7 = param_1 + param_1;
  fVar8 = param_3[3] - param_3[1];
  fVar3 = fVar4 * 0.5;
  if (fVar7 == fVar4 || fVar7 < fVar4 != (NAN(fVar7) || NAN(fVar4))) {
    fVar3 = param_1;
  }
  fVar7 = fVar3 + fVar3;
  fVar4 = fVar8 * 0.5;
  if (fVar7 == fVar8 || fVar7 < fVar8 != (NAN(fVar7) || NAN(fVar8))) {
    fVar4 = fVar3;
  }
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if ((ABS(fVar4) < DAT_00144b68 == (NAN(ABS(fVar4)) || NAN(DAT_00144b68))) &&
     (ABS(fVar4) < DAT_00144b68 == (NAN(ABS(fVar4)) || NAN(DAT_00144b68)))) {
    fVar11 = *param_3;
    fVar10 = param_3[1];
    fVar7 = param_3[2];
    fVar8 = param_3[3];
    uVar6 = 0;
    fVar12 = (float)NEON_fminnm(fVar4 + fVar4,fVar7 - fVar11);
    fVar4 = (float)NEON_fminnm(fVar4 + fVar4,fVar8 - fVar10);
    FUN_00197a98(param_2,0x11,10);
    uVar5 = NEON_fmadd(fVar4,0x3f000000,fVar10);
    FUN_00197498(fVar7,CONCAT44(uVar6,uVar5),param_2);
    fVar3 = fVar7 - fVar12;
    local_88 = fVar3;
    local_80 = fVar7;
    if (param_4 == 1) {
      uVar9 = 0xc2b40000;
      local_84 = fVar8 - fVar4;
      local_7c = fVar8;
      FUN_00197bbc(0,0xc2b40000,param_2,&local_88,0);
      local_88 = fVar11;
      local_84 = fVar8 - fVar4;
      local_80 = fVar12 + fVar11;
      local_7c = fVar8;
      FUN_00197bbc(0xc2b40000,0xc2b40000,param_2,&local_88,0);
      local_88 = fVar11;
      local_84 = fVar10;
      local_80 = fVar12 + fVar11;
      local_7c = fVar4 + fVar10;
      FUN_00197bbc(0xc3340000,0xc2b40000,param_2,&local_88,0);
      uVar2 = 0xc3870000;
      local_84 = fVar10;
      local_7c = fVar4 + fVar10;
    }
    else {
      uVar9 = 0x42b40000;
      local_84 = fVar10;
      local_7c = fVar4 + fVar10;
      FUN_00197bbc(0,0x42b40000,param_2,&local_88,0);
      local_88 = fVar11;
      local_84 = fVar10;
      local_80 = fVar12 + fVar11;
      local_7c = fVar4 + fVar10;
      FUN_00197bbc(0x42b40000,0x42b40000,param_2,&local_88,0);
      local_88 = fVar11;
      local_84 = fVar8 - fVar4;
      local_80 = fVar12 + fVar11;
      local_7c = fVar8;
      FUN_00197bbc(0x43340000,0x42b40000,param_2,&local_88,0);
      uVar2 = 0x43870000;
      local_84 = fVar8 - fVar4;
      local_7c = fVar8;
    }
    local_88 = fVar3;
    local_80 = fVar7;
    FUN_00197bbc(uVar2,uVar9,param_2,&local_88,0);
    FUN_00197910(param_2);
  }
  else {
    FUN_00198384(param_2,param_3,param_4);
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001986d4  FUN_001986d4 =====

void FUN_001986d4(float param_1,float param_2,float *param_3,undefined8 *param_4,undefined8 *param_5
                 )

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  bool bVar7;
  long lVar8;
  bool bVar9;
  uint uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined8 *local_b8;
  float local_b0 [2];
  long local_a8;
  
  uVar6 = DAT_00144b8c;
  fVar5 = DAT_00144b6c;
  fVar4 = DAT_00144b44;
  lVar1 = tpidr_el0;
  local_a8 = *(long *)(lVar1 + 0x28);
  fVar14 = *param_3;
  fVar17 = param_3[2];
  if (fVar14 < fVar17 != (NAN(fVar14) || NAN(fVar17))) {
    fVar19 = param_3[1];
    fVar20 = param_3[3];
    if (fVar19 < fVar20 != (NAN(fVar19) || NAN(fVar20))) {
      lVar8 = 0;
      bVar9 = true;
      local_b8 = param_5;
      local_b0[0] = param_1;
      local_b0[1] = param_2 + param_1;
      bVar7 = bVar9;
      if (param_4 == (undefined8 *)0x0) goto LAB_0019884c;
      do {
        bVar9 = bVar7;
        fVar11 = (float)NEON_fmadd((int)(local_b0[lVar8] * fVar4),0xc3b40000,local_b0[lVar8]);
        fVar11 = fVar11 * fVar5;
        uVar10 = (uint)fVar11;
        fVar11 = (float)FUN_001988bc((fVar11 - (float)(int)fVar11) * 90.0);
        if ((uVar10 & 1) != 0) {
          fVar11 = 1.0 - fVar11;
        }
        fVar15 = 1.0 - fVar11;
        fVar2 = fVar15 * fVar11 * fVar11 * 3.0;
        fVar3 = fVar11 * fVar15 * fVar15 * 3.0;
        fVar11 = (float)NEON_fmadd(fVar11 * fVar11,fVar11,fVar2);
        fVar15 = (float)NEON_fmadd(fVar15 * fVar15,fVar15,fVar3);
        uVar18 = NEON_fmadd(fVar3,uVar6,fVar11);
        uVar12 = NEON_fnmadd(fVar3,uVar6,-fVar11);
        uVar13 = NEON_fmadd(fVar2,uVar6,fVar15);
        uVar16 = NEON_fnmadd(fVar2,uVar6,-fVar15);
        if (1 < uVar10 - 1) {
          uVar16 = uVar13;
        }
        if (1 < uVar10) {
          uVar12 = uVar18;
        }
        uVar13 = NEON_fmadd(uVar16,fVar17 - fVar14,param_3[2] - *param_3);
        uVar16 = NEON_fmadd(uVar12,fVar20 - fVar19,param_3[3] - param_3[1]);
        uVar12 = NEON_fmadd(uVar13,0x3f000000,*param_3);
        uVar16 = NEON_fmadd(uVar16,0x3f000000,param_3[1]);
        *(undefined4 *)param_4 = uVar12;
        *(undefined4 *)((long)param_4 + 4) = uVar16;
LAB_0019884c:
        do {
          if (!bVar9) goto LAB_00198878;
          param_4 = (&local_b8)[lVar8];
          bVar9 = false;
          lVar8 = 1;
          bVar7 = false;
        } while (param_4 == (undefined8 *)0x0);
      } while( true );
    }
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
LAB_00198878:
  if (*(long *)(lVar1 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001988bc  FUN_001988bc =====

float FUN_001988bc(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float local_18;
  float fStack_14;
  
  fVar1 = 0.0;
  if (ABS(param_1) < DAT_00144b68 == (NAN(ABS(param_1)) || NAN(DAT_00144b68))) {
    if (ABS(param_1 + -90.0) < DAT_00144b68 == (NAN(ABS(param_1 + -90.0)) || NAN(DAT_00144b68))) {
      sincosf(param_1 * DAT_00144b5c,&fStack_14,&local_18);
      fVar2 = param_1 * DAT_00144b6c;
      fVar6 = (float)NEON_fmadd(param_1,DAT_00144b3c,DAT_00144b70);
      uVar5 = NEON_fmadd(param_1,DAT_00144b64,DAT_00144b34);
      fVar1 = (float)NEON_fmadd(fVar2 * fVar2,uVar5,1.0 - local_18);
      fVar2 = fVar2 + fVar1 / (fVar6 * fVar2);
      uVar5 = NEON_fmadd(fVar2,DAT_00144b74,DAT_00144b34);
      fVar6 = (float)NEON_fmadd(fVar2,DAT_00144b10,DAT_00144b7c);
      fVar1 = (float)NEON_fmadd(fVar2 * fVar2,uVar5,1.0 - local_18);
      fVar2 = fVar2 - fVar1 / (fVar6 * fVar2);
      uVar5 = NEON_fmadd(fVar2,DAT_00144b74,DAT_00144b18);
      uVar4 = NEON_fmsub(fVar2,DAT_00144b10,DAT_00144b84);
      uVar5 = NEON_fmadd(uVar5,fVar2,DAT_00144b60);
      fVar6 = (float)NEON_fmadd(uVar4,fVar2,DAT_00144b38);
      fVar1 = (float)NEON_fmadd(uVar5,fVar2,fStack_14);
      fVar6 = fVar2 + fVar1 / fVar6;
      uVar4 = NEON_fmadd(fVar6,DAT_00144b74,DAT_00144b18);
      uVar5 = NEON_fmsub(fVar6,DAT_00144b10,DAT_00144b84);
      uVar4 = NEON_fmadd(uVar4,fVar6,DAT_00144b60);
      fVar3 = (float)NEON_fmadd(uVar5,fVar6,DAT_00144b38);
      fVar1 = (float)NEON_fmadd(uVar4,fVar6,fStack_14);
      fVar1 = (fVar6 + fVar2 + fVar1 / fVar3) * 0.5;
    }
    else {
      fVar1 = 1.0;
    }
  }
  return fVar1;
}


// ===== 00198a14  FUN_00198a14 =====

void FUN_00198a14(float param_1,float param_2,float param_3,float param_4,float param_5,
                 undefined4 param_6,float param_7,float param_8,undefined8 param_9,int param_10)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float __y;
  float fVar22;
  float __x;
  float fVar23;
  float fVar24;
  float __x_00;
  float fVar25;
  float local_d4;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  
  fVar5 = DAT_00144b68;
  fVar9 = (float)NEON_fmadd(param_6,DAT_00144b5c,DAT_00144b58);
  uVar7 = (ulong)((float)(int)param_1 + (float)(int)param_1);
  param_4 = param_4 * DAT_00144b80;
  fVar20 = 1.0;
  fVar21 = param_1 - (float)(int)param_1;
  fVar22 = DAT_00144b0c / param_1;
  param_5 = param_5 * DAT_00144b80;
  if (param_10 != 1) {
    fVar20 = -1.0;
  }
  fVar25 = ABS(param_1 - (float)(int)param_1);
  uVar14 = NEON_fmsub(fVar21,fVar22,fVar22);
  fVar15 = (float)NEON_fmadd(uVar14,fVar20,fVar9);
  if (fVar25 < DAT_00144b68 == (NAN(fVar25) || NAN(DAT_00144b68))) {
    local_d4 = (float)NEON_fmadd(param_3 - param_2,fVar21,param_2);
    fVar24 = fVar22 * fVar21;
    sincosf(fVar15,&fStack_94,&local_98);
    __x = local_98 * local_d4;
    __y = fStack_94 * local_d4;
  }
  else {
    sincosf(fVar9,&fStack_9c,&local_a0);
    __x = local_a0 * param_3;
    __y = fStack_9c * param_3;
    local_d4 = 0.0;
    fVar24 = fVar22;
    fVar15 = fVar9;
  }
  fVar9 = ABS(param_4);
  fVar13 = ABS(param_5);
  bVar2 = fVar9 < fVar5 == (NAN(fVar9) || NAN(fVar5));
  bVar3 = fVar13 < fVar5 == (NAN(fVar13) || NAN(fVar5));
  uVar8 = uVar7;
  if (fVar9 != fVar5 && bVar2 || fVar13 != fVar5 && bVar3) {
    uVar8 = uVar7 * 3;
  }
  FUN_00197a98(param_9,uVar8 + 2,uVar7 + 3);
  FUN_00197498(__x + param_7,__y + param_8,param_9);
  fVar4 = DAT_00144b40;
  if (uVar7 != 0) {
    uVar8 = 0;
    fVar17 = ABS(local_d4);
    fVar24 = (float)NEON_fmadd(fVar24,fVar20,fVar15);
    param_1 = 1.0 / param_1;
    fVar15 = fVar20 * DAT_00144b50;
    do {
      bVar1 = fVar17 < fVar5 != (NAN(fVar17) || NAN(fVar5));
      fVar18 = param_3;
      if ((uVar8 & 1) == 0) {
        fVar18 = param_2;
      }
      fVar10 = fVar22 * fVar21;
      if ((fVar17 == fVar5 || bVar1) || uVar7 - 2 != uVar8) {
        fVar10 = fVar22;
      }
      fVar23 = local_d4;
      if ((fVar17 == fVar5 || bVar1) || uVar7 - 1 != uVar8) {
        fVar23 = fVar18;
      }
      sincosf(fVar24,&fStack_a4,&local_a8);
      __x_00 = local_a8 * fVar23;
      fVar23 = fStack_a4 * fVar23;
      if (fVar9 != fVar5 && bVar2 || fVar13 != fVar5 && bVar3) {
        fVar11 = atan2f(__y,__x);
        sincosf(fVar11 - fVar15,&local_ac,&local_b0);
        fVar6 = local_ac;
        fVar16 = local_b0;
        fVar11 = atan2f(fVar23,__x_00);
        sincosf(fVar11 - fVar15,&fStack_b4,&local_b8);
        fVar19 = param_2;
        fVar11 = param_4;
        fVar12 = param_5;
        if ((uVar8 & 1) == 0) {
          fVar19 = param_3;
          fVar11 = param_5;
          fVar12 = param_4;
        }
        fVar11 = fVar11 * fVar4 * fVar19;
        fVar18 = fVar12 * fVar4 * fVar18;
        fVar12 = fVar16 * fVar11 * param_1;
        fVar11 = fVar6 * fVar11 * param_1;
        fVar16 = local_b8 * fVar18 * param_1;
        fVar18 = fStack_b4 * fVar18 * param_1;
        if ((fVar25 != fVar5 && fVar25 < fVar5 == (NAN(fVar25) || NAN(fVar5))) &&
           (uVar8 == 0 || uVar7 - 1 == uVar8)) {
          fVar12 = fVar12 * fVar21;
          fVar11 = fVar11 * fVar21;
          fVar16 = fVar16 * fVar21;
          fVar18 = fVar18 * fVar21;
        }
        FUN_00197748((__x + param_7) - fVar12,(__y + param_8) - fVar11,__x_00 + param_7 + fVar16,
                     fVar23 + param_8 + fVar18,param_9);
      }
      else {
        FUN_001975e8(__x_00 + param_7,fVar23 + param_8,param_9);
      }
      uVar8 = uVar8 + 1;
      fVar24 = (float)NEON_fmadd(fVar10,fVar20,fVar24);
      __x = __x_00;
      __y = fVar23;
    } while (uVar7 != uVar8);
  }
  FUN_00197910(param_9);
  return;
}


// ===== 00198dc0  FUN_00198dc0 =====

void FUN_00198dc0(float param_1,float param_2,float param_3,undefined4 param_4,float param_5,
                 float param_6,undefined8 param_7,int param_8)

{
  long lVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float __x;
  float __y;
  float __x_00;
  float __y_00;
  float __x_01;
  float local_80;
  float local_7c;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  
  fVar11 = 1.0;
  __x = (float)NEON_fmadd(param_4,DAT_00144b54,DAT_00144b00);
  if (param_8 != 1) {
    fVar11 = -1.0;
  }
  param_3 = param_3 * DAT_00144b80;
  lVar4 = (long)param_1;
  sincosf(__x,&fStack_64,&local_68);
  fVar2 = DAT_00144b68;
  fVar10 = ABS(param_3);
  lVar1 = lVar4 * 3;
  if (fVar10 == DAT_00144b68 || fVar10 < DAT_00144b68 != (NAN(fVar10) || NAN(DAT_00144b68))) {
    lVar1 = lVar4;
  }
  FUN_00197a98(param_7,lVar1 + 2,lVar4 + 3);
  FUN_00197498(local_68 * param_2 + param_5,fStack_64 * param_2 + param_6,param_7);
  if (lVar4 != 0) {
    fVar8 = fVar11 * DAT_00144b24;
    fVar11 = fVar11 * DAT_00144b50;
    param_3 = param_2 * 0.25 * param_3;
    __x_00 = local_68 * param_2;
    __y = fStack_64 * param_2;
    do {
      __x = __x + fVar8 / (float)(int)param_1;
      sincosf(__x,&fStack_6c,&local_70);
      __x_01 = local_70 * param_2;
      __y_00 = fStack_6c * param_2;
      if (fVar10 == fVar2 || fVar10 < fVar2 != (NAN(fVar10) || NAN(fVar2))) {
        FUN_001975e8(__x_01 + param_5,__y_00 + param_6,param_7);
      }
      else {
        fVar5 = atan2f(__y,__x_00);
        sincosf(fVar5 - fVar11,&fStack_74,&local_78);
        fVar3 = fStack_74;
        fVar5 = local_78;
        fVar6 = atan2f(__y_00,__x_01);
        sincosf(fVar6 - fVar11,&local_7c,&local_80);
        uVar9 = NEON_fmsub(fVar3,param_3,__y + param_6);
        uVar7 = NEON_fmsub(fVar5,param_3,__x_00 + param_5);
        uVar12 = NEON_fmadd(local_80,param_3,__x_01 + param_5);
        uVar13 = NEON_fmadd(local_7c,param_3,__y_00 + param_6);
        FUN_00197748(uVar7,uVar9,uVar12,uVar13,__x_01,__y_00,param_7);
      }
      lVar4 = lVar4 + -1;
      __x_00 = __x_01;
      __y = __y_00;
    } while (lVar4 != 0);
  }
  FUN_00197910(param_7);
  return;
}


