// ===== 00133dd4  FUN_00133dd4 =====

void FUN_00133dd4(undefined8 *param_1,undefined8 param_2,long *param_3,undefined4 param_4,
                 uint param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = param_1[1];
  lVar3 = (long)uVar2 >> 8;
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(*param_3 + lVar3);
  }
  uVar1 = 2;
  if ((uVar2 & 2) != 0) {
    uVar1 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00133e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x30))
            ((long *)*param_1,param_2,(long)param_3 + lVar3,uVar1,param_5 & 1);
  return;
}


// ===== 00133e10  FUN_00133e10 =====

void FUN_00133e10(long param_1,long *param_2,long param_3,int param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  char *__s1;
  
  lVar2 = param_2[2];
  if ((param_5 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar2 + 8)) {
      if (*(long *)(param_1 + 8) != *(long *)(*param_2 + 8)) {
LAB_00133f08:
                    /* WARNING: Could not recover jumptable at 0x00133f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x10) + 0x30))
                  (*(long **)(param_1 + 0x10),param_2,param_3,param_4,param_5 & 1);
        return;
      }
LAB_00133e7c:
      if ((param_2[4] == param_3) || (param_2[5] == param_3)) {
        if (param_4 != 1) {
          return;
        }
        *(undefined4 *)(param_2 + 7) = 1;
        return;
      }
      *(int *)(param_2 + 7) = param_4;
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
  else if (param_1 != lVar2) {
    __s1 = *(char **)(param_1 + 8);
    iVar1 = strcmp(__s1,*(char **)(lVar2 + 8));
    if (iVar1 != 0) {
      if ((param_1 != *param_2) && (iVar1 = strcmp(__s1,*(char **)(*param_2 + 8)), iVar1 != 0))
      goto LAB_00133f08;
      goto LAB_00133e7c;
    }
  }
  if ((param_2[1] == param_3) && (*(int *)((long)param_2 + 0x34) != 1)) {
    *(int *)((long)param_2 + 0x34) = param_4;
  }
  return;
}


// ===== 00133fbc  FUN_00133fbc =====

void FUN_00133fbc(long param_1,long *param_2,long param_3,int param_4,uint param_5)

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
LAB_00134048:
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
  else if (param_1 != lVar2) {
    __s1 = *(char **)(param_1 + 8);
    iVar1 = strcmp(__s1,*(char **)(lVar2 + 8));
    if (iVar1 != 0) {
      if ((param_1 != *param_2) && (iVar1 = strcmp(__s1,*(char **)(*param_2 + 8)), iVar1 != 0)) {
        return;
      }
      goto LAB_00134048;
    }
  }
  if ((param_2[1] == param_3) && (*(int *)((long)param_2 + 0x34) != 1)) {
    *(int *)((long)param_2 + 0x34) = param_4;
  }
  return;
}


// ===== 001340e4  FUN_001340e4 =====

void FUN_001340e4(long param_1,long param_2,long param_3,long *param_4,int param_5,uint param_6)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  lVar5 = *(long *)(param_2 + 0x10);
  if ((param_6 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar5 + 8)) goto LAB_0013418c;
  }
  else if ((param_1 != lVar5) &&
          (iVar4 = strcmp(*(char **)(param_1 + 8),*(char **)(lVar5 + 8)), iVar4 != 0)) {
LAB_0013418c:
    bVar8 = *(byte *)(param_2 + 0x4c);
    bVar7 = *(byte *)(param_2 + 0x4d);
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
    bVar8 = bVar2 | bVar8;
    bVar7 = bVar3 | bVar7;
    if (1 < uVar1) {
      puVar10 = (undefined8 *)(param_1 + 0x28);
      do {
        if (*(char *)(param_2 + 0x4e) != '\0') break;
        if (bVar2 == 0) {
          if (bVar3 != 0) {
            bVar2 = *(byte *)(param_1 + 0x10);
            goto joined_r0x0013427c;
          }
        }
        else {
          if (*(int *)(param_2 + 0x30) == 1) break;
          bVar2 = *(byte *)(param_1 + 0x10) >> 1;
joined_r0x0013427c:
          if ((bVar2 & 1) == 0) break;
        }
        *(undefined2 *)(param_2 + 0x4c) = 0;
        uVar6 = puVar10[1];
        lVar5 = (long)uVar6 >> 8;
        if ((uVar6 & 1) != 0) {
          lVar5 = *(long *)(*param_4 + lVar5);
        }
        puVar9 = puVar10 + 2;
        iVar4 = 2;
        if ((uVar6 & 2) != 0) {
          iVar4 = param_5;
        }
        (**(code **)(*(long *)*puVar10 + 0x28))
                  ((long *)*puVar10,param_2,param_3,(long)param_4 + lVar5,iVar4,param_6 & 1);
        bVar2 = *(byte *)(param_2 + 0x4c);
        bVar3 = *(byte *)(param_2 + 0x4d);
        bVar8 = bVar2 | bVar8;
        bVar7 = bVar3 | bVar7;
        puVar10 = puVar9;
      } while (puVar9 < (undefined8 *)(param_1 + (ulong)uVar1 * 0x10 + 0x18));
    }
    *(bool *)(param_2 + 0x4c) = bVar8 != 0;
    *(bool *)(param_2 + 0x4d) = bVar7 != 0;
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
      *(undefined1 *)(param_2 + 0x4e) = 1;
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      return;
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
  if (*(int *)(param_2 + 0x48) == 1) {
    *(undefined1 *)(param_2 + 0x4e) = 1;
  }
  return;
}


// ===== 00134320  FUN_00134320 =====

void FUN_00134320(long param_1,long param_2,long param_3,long param_4,int param_5,uint param_6)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x10);
  if ((param_6 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar2 + 8)) goto LAB_001343ac;
  }
  else if ((param_1 != lVar2) &&
          (iVar1 = strcmp(*(char **)(param_1 + 8),*(char **)(lVar2 + 8)), iVar1 != 0)) {
LAB_001343ac:
                    /* WARNING: Could not recover jumptable at 0x001343e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x28))
              (*(long **)(param_1 + 0x10),param_2,param_3,param_4,param_5,param_6 & 1);
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
      *(undefined1 *)(param_2 + 0x4e) = 1;
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      return;
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
    *(undefined1 *)(param_2 + 0x4e) = 1;
  }
  return;
}


// ===== 0013445c  FUN_0013445c =====

void FUN_0013445c(long param_1,long param_2,long param_3,long param_4,int param_5,uint param_6)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x10);
  if ((param_6 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar2 + 8)) {
      return;
    }
  }
  else if ((param_1 != lVar2) &&
          (iVar1 = strcmp(*(char **)(param_1 + 8),*(char **)(lVar2 + 8)), iVar1 != 0)) {
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
      *(undefined1 *)(param_2 + 0x4e) = 1;
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      return;
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
    *(undefined1 *)(param_2 + 0x4e) = 1;
  }
  return;
}


// ===== 00134554  std::bad_alloc::~bad_alloc =====

/* std::bad_alloc::~bad_alloc() */

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  return;
}


// ===== 0013455c  std::exception::~exception =====

/* std::exception::~exception() */

void __thiscall std::exception::~exception(exception *this)

{
  operator_delete(this);
  return;
}


// ===== 00134564  std::exception::what =====

/* std::exception::what() const */

char * std::exception::what(void)

{
  return "std::exception";
}


// ===== 00134574  std::bad_exception::~bad_exception =====

/* std::bad_exception::~bad_exception() */

void __thiscall std::bad_exception::~bad_exception(bad_exception *this)

{
  operator_delete(this);
  return;
}


// ===== 0013457c  std::bad_exception::what =====

/* std::bad_exception::what() const */

char * std::bad_exception::what(void)

{
  return "std::bad_exception";
}


// ===== 0013458c  std::bad_alloc::bad_alloc =====

/* std::bad_alloc::bad_alloc() */

void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  *(undefined **)this = PTR_vtable_00141320 + 0x10;
  return;
}


// ===== 001345a4  std::bad_alloc::~bad_alloc =====

/* std::bad_alloc::~bad_alloc() */

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  operator_delete(this);
  return;
}


// ===== 001345ac  std::bad_alloc::what =====

/* std::bad_alloc::what() const */

char * std::bad_alloc::what(void)

{
  return "std::bad_alloc";
}


// ===== 001345bc  std::bad_array_new_length::bad_array_new_length =====

/* std::bad_array_new_length::bad_array_new_length() */

void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
  *(undefined **)this = PTR_vtable_00141328 + 0x10;
  return;
}


// ===== 001345d4  std::bad_array_new_length::~bad_array_new_length =====

/* std::bad_array_new_length::~bad_array_new_length() */

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
  operator_delete(this);
  return;
}


// ===== 001345dc  std::bad_array_new_length::what =====

/* std::bad_array_new_length::what() const */

char * std::bad_array_new_length::what(void)

{
  return "bad_array_new_length";
}


// ===== 001345ec  std::out_of_range::~out_of_range =====

/* std::out_of_range::~out_of_range() */

void __thiscall std::out_of_range::~out_of_range(out_of_range *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = *(long *)(this + 8);
  *(undefined **)this = PTR_vtable_00141278 + 0x10;
  piVar5 = (int *)(lVar4 + -8);
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar4 + -0x18));
  }
  bad_alloc::~bad_alloc((bad_alloc *)this);
  return;
}


// ===== 00134648  std::logic_error::~logic_error =====

/* std::logic_error::~logic_error() */

void __thiscall std::logic_error::~logic_error(logic_error *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = *(long *)(this + 8);
  *(undefined **)this = PTR_vtable_00141278 + 0x10;
  piVar5 = (int *)(lVar4 + -8);
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar4 + -0x18));
  }
  bad_alloc::~bad_alloc((bad_alloc *)this);
  operator_delete(this);
  return;
}


// ===== 001346ac  std::logic_error::what =====

/* std::logic_error::what() const */

undefined8 __thiscall std::logic_error::what(logic_error *this)

{
  return *(undefined8 *)(this + 8);
}


// ===== 001346b8  std::range_error::~range_error =====

/* std::range_error::~range_error() */

void __thiscall std::range_error::~range_error(range_error *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = *(long *)(this + 8);
  *(undefined **)this = PTR_vtable_00141280 + 0x10;
  piVar5 = (int *)(lVar4 + -8);
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar4 + -0x18));
  }
  bad_alloc::~bad_alloc((bad_alloc *)this);
  return;
}


// ===== 00134714  std::runtime_error::~runtime_error =====

/* std::runtime_error::~runtime_error() */

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = *(long *)(this + 8);
  *(undefined **)this = PTR_vtable_00141280 + 0x10;
  piVar5 = (int *)(lVar4 + -8);
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar4 + -0x18));
  }
  bad_alloc::~bad_alloc((bad_alloc *)this);
  operator_delete(this);
  return;
}


// ===== 00134778  std::runtime_error::what =====

/* std::runtime_error::what() const */

undefined8 __thiscall std::runtime_error::what(runtime_error *this)

{
  return *(undefined8 *)(this + 8);
}


// ===== 00134784  std::domain_error::~domain_error =====

/* std::domain_error::~domain_error() */

void __thiscall std::domain_error::~domain_error(domain_error *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = *(long *)(this + 8);
  *(undefined **)this = PTR_vtable_00141278 + 0x10;
  piVar5 = (int *)(lVar4 + -8);
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar4 + -0x18));
  }
  bad_alloc::~bad_alloc((bad_alloc *)this);
  operator_delete(this);
  return;
}


// ===== 001347e8  std::invalid_argument::~invalid_argument =====

/* std::invalid_argument::~invalid_argument() */

void __thiscall std::invalid_argument::~invalid_argument(invalid_argument *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = *(long *)(this + 8);
  *(undefined **)this = PTR_vtable_00141278 + 0x10;
  piVar5 = (int *)(lVar4 + -8);
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar4 + -0x18));
  }
  bad_alloc::~bad_alloc((bad_alloc *)this);
  operator_delete(this);
  return;
}


// ===== 0013484c  std::length_error::~length_error =====

/* std::length_error::~length_error() */

void __thiscall std::length_error::~length_error(length_error *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = *(long *)(this + 8);
  *(undefined **)this = PTR_vtable_00141278 + 0x10;
  piVar5 = (int *)(lVar4 + -8);
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar4 + -0x18));
  }
  bad_alloc::~bad_alloc((bad_alloc *)this);
  operator_delete(this);
  return;
}


// ===== 001348b0  std::out_of_range::~out_of_range =====

/* std::out_of_range::~out_of_range() */

void __thiscall std::out_of_range::~out_of_range(out_of_range *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = *(long *)(this + 8);
  *(undefined **)this = PTR_vtable_00141278 + 0x10;
  piVar5 = (int *)(lVar4 + -8);
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar4 + -0x18));
  }
  bad_alloc::~bad_alloc((bad_alloc *)this);
  operator_delete(this);
  return;
}


// ===== 00134914  std::range_error::~range_error =====

/* std::range_error::~range_error() */

void __thiscall std::range_error::~range_error(range_error *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = *(long *)(this + 8);
  *(undefined **)this = PTR_vtable_00141280 + 0x10;
  piVar5 = (int *)(lVar4 + -8);
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar4 + -0x18));
  }
  bad_alloc::~bad_alloc((bad_alloc *)this);
  operator_delete(this);
  return;
}


// ===== 00134978  std::overflow_error::~overflow_error =====

/* std::overflow_error::~overflow_error() */

void __thiscall std::overflow_error::~overflow_error(overflow_error *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = *(long *)(this + 8);
  *(undefined **)this = PTR_vtable_00141280 + 0x10;
  piVar5 = (int *)(lVar4 + -8);
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar4 + -0x18));
  }
  bad_alloc::~bad_alloc((bad_alloc *)this);
  operator_delete(this);
  return;
}


// ===== 001349dc  std::underflow_error::~underflow_error =====

/* std::underflow_error::~underflow_error() */

void __thiscall std::underflow_error::~underflow_error(underflow_error *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = *(long *)(this + 8);
  *(undefined **)this = PTR_vtable_00141280 + 0x10;
  piVar5 = (int *)(lVar4 + -8);
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar4 + -0x18));
  }
  bad_alloc::~bad_alloc((bad_alloc *)this);
  operator_delete(this);
  return;
}


// ===== 00134a40  std::type_info::~type_info =====

/* std::type_info::~type_info() */

void __thiscall std::type_info::~type_info(type_info *this)

{
  return;
}


// ===== 00134a48  std::type_info::~type_info =====

/* std::type_info::~type_info() */

void __thiscall std::type_info::~type_info(type_info *this)

{
  operator_delete(this);
  return;
}


// ===== 00134a50  std::bad_cast::bad_cast =====

/* std::bad_cast::bad_cast() */

void __thiscall std::bad_cast::bad_cast(bad_cast *this)

{
  *(undefined **)this = PTR_vtable_00141330 + 0x10;
  return;
}


// ===== 00134a68  std::bad_cast::~bad_cast =====

/* std::bad_cast::~bad_cast() */

void __thiscall std::bad_cast::~bad_cast(bad_cast *this)

{
  bad_alloc::~bad_alloc((bad_alloc *)this);
  return;
}


// ===== 00134a70  std::bad_cast::~bad_cast =====

/* std::bad_cast::~bad_cast() */

void __thiscall std::bad_cast::~bad_cast(bad_cast *this)

{
  bad_alloc::~bad_alloc((bad_alloc *)this);
  operator_delete(this);
  return;
}


// ===== 00134a9c  std::bad_cast::what =====

/* std::bad_cast::what() const */

char * std::bad_cast::what(void)

{
  return "std::bad_cast";
}


// ===== 00134aac  std::bad_typeid::bad_typeid =====

/* std::bad_typeid::bad_typeid() */

void __thiscall std::bad_typeid::bad_typeid(bad_typeid *this)

{
  *(undefined **)this = PTR_vtable_00141338 + 0x10;
  return;
}


// ===== 00134ac4  std::bad_typeid::~bad_typeid =====

/* std::bad_typeid::~bad_typeid() */

void __thiscall std::bad_typeid::~bad_typeid(bad_typeid *this)

{
  bad_alloc::~bad_alloc((bad_alloc *)this);
  return;
}


// ===== 00134acc  std::bad_typeid::~bad_typeid =====

/* std::bad_typeid::~bad_typeid() */

void __thiscall std::bad_typeid::~bad_typeid(bad_typeid *this)

{
  bad_alloc::~bad_alloc((bad_alloc *)this);
  operator_delete(this);
  return;
}


// ===== 00134af8  std::bad_typeid::what =====

/* std::bad_typeid::what() const */

char * std::bad_typeid::what(void)

{
  return "std::bad_typeid";
}


// ===== 00134b08  __emutls_get_address =====

void * __emutls_get_address(size_t *param_1)

{
  undefined8 *__ptr;
  void *pvVar1;
  void *__s;
  ulong uVar2;
  size_t __n;
  size_t sVar3;
  long lVar4;
  
  sVar3 = param_1[2];
  if (sVar3 == 0) {
    pthread_once((pthread_once_t *)&DAT_001458d8,FUN_00134d00);
    pthread_mutex_lock((pthread_mutex_t *)&DAT_001458e8);
    sVar3 = param_1[2];
    if (sVar3 == 0) {
      sVar3 = DAT_001458e0 + 1;
      DAT_001458e0 = sVar3;
      param_1[2] = sVar3;
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_001458e8);
    __ptr = (undefined8 *)pthread_getspecific(DAT_001458d4);
    if (__ptr != (undefined8 *)0x0) goto LAB_00134b3c;
LAB_00134be8:
    lVar4 = (sVar3 + 0x11 & 0xfffffffffffffff0) - 2;
    __ptr = (undefined8 *)malloc(lVar4 * 8 + 0x10);
    if (__ptr == (undefined8 *)0x0) goto LAB_00134cc4;
    memset(__ptr + 2,0,lVar4 * 8);
    *__ptr = 1;
LAB_00134c20:
    __ptr[1] = lVar4;
    pthread_setspecific(DAT_001458d4,__ptr);
  }
  else {
    __ptr = (undefined8 *)pthread_getspecific(DAT_001458d4);
    if (__ptr == (undefined8 *)0x0) goto LAB_00134be8;
LAB_00134b3c:
    uVar2 = __ptr[1];
    if (uVar2 < sVar3) {
      lVar4 = (sVar3 + 0x11 & 0xfffffffffffffff0) - 2;
      __ptr = (undefined8 *)realloc(__ptr,lVar4 * 8 + 0x10);
      if (__ptr == (undefined8 *)0x0) goto LAB_00134cc4;
      memset(__ptr + uVar2 + 2,0,(lVar4 - uVar2) * 8);
      goto LAB_00134c20;
    }
  }
  pvVar1 = (void *)__ptr[sVar3 + 1];
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
  uVar2 = param_1[1];
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  if ((uVar2 & uVar2 - 1) == 0) {
    __n = *param_1;
    pvVar1 = malloc(uVar2 + 7 + __n);
    if (pvVar1 != (void *)0x0) {
      __s = (void *)((long)pvVar1 + uVar2 + 7 & -uVar2);
      *(void **)((long)__s + -8) = pvVar1;
      if ((void *)param_1[3] == (void *)0x0) {
        memset(__s,0,__n);
      }
      else {
        memcpy(__s,(void *)param_1[3],__n);
      }
      __ptr[sVar3 + 1] = __s;
      return __s;
    }
  }
LAB_00134cc4:
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00134cc8  FUN_00134cc8 =====

ulong FUN_00134cc8(ulong param_1)

{
  uint uVar1;
  
  if (DAT_001458d0 == '\x01') {
    uVar1 = pthread_key_delete(DAT_001458d4);
    param_1 = (ulong)uVar1;
    DAT_001458d0 = '\0';
  }
  return param_1;
}


// ===== 00134d00  FUN_00134d00 =====

void FUN_00134d00(void)

{
  int iVar1;
  
  iVar1 = pthread_key_create(&DAT_001458d4,FUN_00134d3c);
  if (iVar1 == 0) {
    DAT_001458d0 = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00134d3c  FUN_00134d3c =====

long * FUN_00134d3c(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*param_1 != 0) {
    *param_1 = *param_1 + -1;
    uVar1 = pthread_setspecific(DAT_001458d4,param_1);
    return (long *)(ulong)uVar1;
  }
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      if (param_1[uVar3 + 2] != 0) {
        free(*(void **)(param_1[uVar3 + 2] + -8));
        uVar2 = param_1[1];
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  free(param_1);
  return param_1;
}


// ===== 00134dc4  FUN_00134dc4 =====

undefined8 FUN_00134dc4(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_4f0 [624];
  undefined1 auStack_280 [528];
  undefined8 local_70;
  undefined1 auStack_68 [24];
  code *local_50;
  
  FUN_0013935c(auStack_280);
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00135288(auStack_4f0,auStack_280);
  iVar1 = FUN_00135544(auStack_4f0);
  while( true ) {
    if (iVar1 == 0) {
      return 5;
    }
    if ((iVar1 < 0) || (iVar1 = FUN_00135554(auStack_4f0,auStack_68), iVar1 != 0)) break;
    if ((local_50 != (code *)0x0) &&
       (iVar1 = (*local_50)(1,1,*param_1,param_1,auStack_4f0), iVar1 != 8)) {
      if (iVar1 != 6) {
        return 3;
      }
      FUN_00135330(auStack_4f0,0xfffffffe,&local_70);
      param_1[3] = local_70;
      uVar2 = FUN_00134e9c(auStack_280,auStack_4f0,param_1);
      return uVar2;
    }
    iVar1 = FUN_00135544(auStack_4f0);
  }
  return 3;
}


// ===== 00134e9c  FUN_00134e9c =====

undefined8 FUN_00134e9c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  FILE *__stream;
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_80 [24];
  code *local_68;
  long local_38;
  
  FUN_00135288(param_2,param_1);
  iVar1 = FUN_00135544(param_2);
  while( true ) {
    if (iVar1 == 0) {
      return 5;
    }
    if (iVar1 < 0) break;
    FUN_00135330(param_2,0xfffffffe,&local_38);
    iVar1 = FUN_00135554(param_2,auStack_80);
    if (iVar1 != 0) {
      return 2;
    }
    if (local_68 != (code *)0x0) {
      uVar2 = 6;
      if (local_38 != param_3[3]) {
        uVar2 = 2;
      }
      iVar1 = (*local_68)(1,uVar2,*param_3,param_3,param_2);
      if (iVar1 != 8) {
        if (iVar1 != 7) {
          return 2;
        }
        FUN_00135594(param_2);
        return 2;
      }
      if (local_38 == param_3[3]) {
        __stream = (FILE *)(PTR___sF_001412c0 + 0x130);
        fprintf(__stream,"libunwind: %s - %s\n","unwind_phase2",
                "during phase1 personality function said it would stop here, but now in phase2 it did not stop here"
               );
        fflush(__stream);
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    iVar1 = FUN_00135544(param_2);
  }
  return 2;
}


// ===== 00134fc0  FUN_00134fc0 =====

void FUN_00134fc0(long param_1)

{
  FILE *__stream;
  undefined1 auStack_4a0 [624];
  undefined1 auStack_230 [528];
  
  FUN_0013935c(auStack_230);
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_00134e9c(auStack_230,auStack_4a0,param_1);
  }
  else {
    FUN_00135048(auStack_230,auStack_4a0,param_1,*(long *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
  }
  __stream = (FILE *)(PTR___sF_001412c0 + 0x130);
  fprintf(__stream,"libunwind: %s - %s\n","_Unwind_Resume","_Unwind_Resume() can\'t return");
  fflush(__stream);
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00135048  FUN_00135048 =====

void FUN_00135048(undefined8 param_1,undefined8 param_2,undefined8 *param_3,code *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_78 [24];
  code *local_60;
  
  FUN_00135288(param_2,param_1);
  while( true ) {
    iVar1 = FUN_00135544(param_2);
    if (iVar1 < 1) {
      (*param_4)(1,0x1a,*param_3,param_3,param_2,param_5);
      return;
    }
    iVar1 = FUN_00135554(param_2,auStack_78);
    if (iVar1 != 0) break;
    iVar1 = (*param_4)(1,10,*param_3,param_3,param_2,param_5);
    if (iVar1 != 0) {
      return;
    }
    if ((local_60 != (code *)0x0) &&
       (iVar1 = (*local_60)(1,10,*param_3,param_3,param_2), iVar1 != 8)) {
      if (iVar1 != 7) {
        return;
      }
      FUN_00135594(param_2);
    }
  }
  return;
}


// ===== 0013512c  FUN_0013512c =====

undefined8 FUN_0013512c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_4b0 [624];
  undefined1 auStack_240 [528];
  
  FUN_0013935c(auStack_240);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  FUN_00135048(auStack_240,auStack_4b0,param_1,param_2,param_3);
  return 2;
}


// ===== 00135190  FUN_00135190 =====

undefined8 FUN_00135190(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_58 [16];
  undefined8 local_48;
  
  iVar1 = FUN_00135554(param_1,auStack_58);
  if (iVar1 != 0) {
    local_48 = 0;
  }
  return local_48;
}


// ===== 001351c4  FUN_001351c4 =====

undefined8 FUN_001351c4(undefined8 param_1)

{
  int iVar1;
  undefined8 local_58 [9];
  
  iVar1 = FUN_00135554(param_1,local_58);
  if (iVar1 != 0) {
    local_58[0] = 0;
  }
  return local_58[0];
}


// ===== 001351f8  FUN_001351f8 =====

void FUN_001351f8(long param_1)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0013520c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))(1,param_1);
    return;
  }
  return;
}


// ===== 00135214  FUN_00135214 =====

undefined8 FUN_00135214(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  FUN_00135330(param_1,param_2,&local_18);
  return local_18;
}


// ===== 00135240  thunk_FUN_0013539c =====

void thunk_FUN_0013539c(void)

{
  FUN_0013539c();
  return;
}


// ===== 00135248  FUN_00135248 =====

undefined8 FUN_00135248(undefined8 param_1)

{
  undefined8 local_18;
  
  FUN_00135330(param_1,0xffffffff,&local_18);
  return local_18;
}


// ===== 00135278  FUN_00135278 =====

void FUN_00135278(undefined8 param_1,undefined8 param_2)

{
  FUN_0013539c(param_1,0xffffffff,param_2);
  return;
}


// ===== 00135288  FUN_00135288 =====

undefined8 FUN_00135288(undefined8 *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = &PTR_FUN_00140ca8;
  param_1[1] = &DAT_00145910;
  memcpy(param_1 + 2,param_2,0x110);
  uVar3 = *(undefined8 *)((long)param_2 + 0x130);
  uVar2 = *(undefined8 *)((long)param_2 + 0x148);
  uVar1 = *(undefined8 *)((long)param_2 + 0x140);
  uVar5 = *(undefined8 *)((long)param_2 + 0x118);
  uVar4 = *(undefined8 *)((long)param_2 + 0x110);
  uVar7 = *(undefined8 *)((long)param_2 + 0x128);
  uVar6 = *(undefined8 *)((long)param_2 + 0x120);
  param_1[0x29] = *(undefined8 *)((long)param_2 + 0x138);
  param_1[0x28] = uVar3;
  param_1[0x2b] = uVar2;
  param_1[0x2a] = uVar1;
  param_1[0x25] = uVar5;
  param_1[0x24] = uVar4;
  param_1[0x27] = uVar7;
  param_1[0x26] = uVar6;
  uVar3 = *(undefined8 *)((long)param_2 + 0x170);
  uVar2 = *(undefined8 *)((long)param_2 + 0x188);
  uVar1 = *(undefined8 *)((long)param_2 + 0x180);
  uVar5 = *(undefined8 *)((long)param_2 + 0x158);
  uVar4 = *(undefined8 *)((long)param_2 + 0x150);
  uVar7 = *(undefined8 *)((long)param_2 + 0x168);
  uVar6 = *(undefined8 *)((long)param_2 + 0x160);
  param_1[0x31] = *(undefined8 *)((long)param_2 + 0x178);
  param_1[0x30] = uVar3;
  param_1[0x33] = uVar2;
  param_1[0x32] = uVar1;
  param_1[0x2d] = uVar5;
  param_1[0x2c] = uVar4;
  param_1[0x2f] = uVar7;
  param_1[0x2e] = uVar6;
  uVar3 = *(undefined8 *)((long)param_2 + 0x1b0);
  uVar2 = *(undefined8 *)((long)param_2 + 0x1c8);
  uVar1 = *(undefined8 *)((long)param_2 + 0x1c0);
  uVar5 = *(undefined8 *)((long)param_2 + 0x198);
  uVar4 = *(undefined8 *)((long)param_2 + 400);
  uVar7 = *(undefined8 *)((long)param_2 + 0x1a8);
  uVar6 = *(undefined8 *)((long)param_2 + 0x1a0);
  param_1[0x39] = *(undefined8 *)((long)param_2 + 0x1b8);
  param_1[0x38] = uVar3;
  param_1[0x3b] = uVar2;
  param_1[0x3a] = uVar1;
  param_1[0x35] = uVar5;
  param_1[0x34] = uVar4;
  param_1[0x37] = uVar7;
  param_1[0x36] = uVar6;
  uVar2 = *(undefined8 *)((long)param_2 + 0x1f8);
  uVar1 = *(undefined8 *)((long)param_2 + 0x1f0);
  uVar4 = *(undefined8 *)((long)param_2 + 0x208);
  uVar3 = *(undefined8 *)((long)param_2 + 0x200);
  uVar8 = *(undefined8 *)((long)param_2 + 0x1d8);
  uVar7 = *(undefined8 *)((long)param_2 + 0x1d0);
  uVar6 = *(undefined8 *)((long)param_2 + 0x1e8);
  uVar5 = *(undefined8 *)((long)param_2 + 0x1e0);
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x41] = uVar2;
  param_1[0x40] = uVar1;
  param_1[0x43] = uVar4;
  param_1[0x42] = uVar3;
  param_1[0x3d] = uVar8;
  param_1[0x3c] = uVar7;
  param_1[0x3f] = uVar6;
  param_1[0x3e] = uVar5;
  *(undefined8 *)((long)param_1 + 0x263) = 0;
  *(undefined8 *)((long)param_1 + 0x25b) = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  FUN_00135d88(param_1,0);
  return 0;
}


// ===== 00135330  FUN_00135330 =====

undefined8 FUN_00135330(long *param_1,undefined4 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
  if ((uVar1 & 1) == 0) {
    uVar3 = 0xffffe672;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
    uVar3 = 0;
    *param_3 = uVar2;
  }
  return uVar3;
}


// ===== 0013539c  FUN_0013539c =====

undefined8 FUN_0013539c(long *param_1,int param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  long local_58;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
  if ((uVar1 & 1) == 0) {
    uVar3 = 0xffffe672;
  }
  else {
    (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3);
    if (param_2 == -1) {
      (**(code **)(*param_1 + 0x48))(param_1,auStack_78);
      (**(code **)(*param_1 + 0x68))(param_1,0);
      if (local_58 != 0) {
        lVar2 = (**(code **)(*param_1 + 0x18))(param_1,0xfffffffe);
        (**(code **)(*param_1 + 0x20))(param_1,0xfffffffe,local_58 + lVar2);
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}


// ===== 00135474  FUN_00135474 =====

undefined8 FUN_00135474(long *param_1,undefined4 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x28))();
  if ((uVar1 & 1) == 0) {
    uVar2 = 0xffffe672;
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x30))(param_1,param_2);
    uVar2 = 0;
    *param_3 = uVar3;
  }
  return uVar2;
}


// ===== 001354dc  FUN_001354dc =====

undefined8 FUN_001354dc(undefined8 param_1,long *param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x28))();
  if ((uVar1 & 1) == 0) {
    uVar2 = 0xffffe672;
  }
  else {
    (**(code **)(*param_2 + 0x38))(param_1,param_2,param_3);
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 00135544  FUN_00135544 =====

void FUN_00135544(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00135550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}


// ===== 00135554  FUN_00135554 =====

undefined4 FUN_00135554(long *param_1,long param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x48))();
  uVar1 = 0xffffe66b;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 00135594  FUN_00135594 =====

undefined8 FUN_00135594(long *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  return 0xffffe674;
}


// ===== 001355bc  FUN_001355bc =====

undefined4 FUN_001355bc(long *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x60))();
  uVar2 = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0xffffe674;
  }
  return uVar2;
}


// ===== 001355ec  FUN_001355ec =====

uint FUN_001355ec(long *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x28))();
  return uVar1 & 1;
}


// ===== 00135614  FUN_00135614 =====

void FUN_00135614(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00135620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))();
  return;
}


// ===== 00135624  FUN_00135624 =====

uint FUN_00135624(long *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x58))();
  return uVar1 & 1;
}


// ===== 0013564c  FUN_0013564c =====

int FUN_0013564c(code *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00145914);
  puVar2 = (undefined8 *)PTR_DAT_00145660;
  if (PTR_DAT_00145660 < PTR_DAT_00145668) {
    do {
      puVar3 = puVar2 + 4;
      (*param_1)(puVar2[1],puVar2[2],puVar2[3],*puVar2);
      puVar2 = puVar3;
    } while (puVar3 < PTR_DAT_00145668);
  }
  iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00145914);
  return iVar1;
}


// ===== 001356bc  FUN_001356bc =====

ulong FUN_001356bc(undefined8 param_1)

{
  undefined *__src;
  uint uVar1;
  ulong uVar2;
  undefined *__dest;
  size_t __n;
  undefined1 auStack_c8 [56];
  undefined8 local_90 [3];
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar2 = FUN_001357c0(&DAT_00145910,param_1,local_90,auStack_c8);
  if (uVar2 == 0) {
    pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00145914);
    __src = PTR_DAT_00145660;
    if (DAT_00145670 <= PTR_DAT_00145668) {
      __n = (long)DAT_00145670 - (long)PTR_DAT_00145660;
      __dest = (undefined *)malloc(__n * 4);
      memcpy(__dest,__src,__n);
      if ((undefined8 *)__src != &DAT_00145950) {
        free(__src);
      }
      PTR_DAT_00145668 = __dest + ((long)__n >> 5) * 0x20;
      DAT_00145670 = __dest + ((long)__n >> 3) * 0x20;
      PTR_DAT_00145660 = __dest;
    }
    *(undefined8 *)PTR_DAT_00145668 = local_90[0];
    *(undefined8 *)((long)PTR_DAT_00145668 + 8) = local_78;
    *(undefined8 *)((long)PTR_DAT_00145668 + 0x10) = uStack_70;
    *(undefined8 *)((long)PTR_DAT_00145668 + 0x18) = local_90[0];
    PTR_DAT_00145668 = (undefined *)((long)PTR_DAT_00145668 + 0x20);
    uVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00145914);
    uVar2 = (ulong)uVar1;
  }
  return uVar2;
}


// ===== 001357c0  FUN_001357c0 =====

char * FUN_001357c0(undefined8 param_1,uint *param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  FILE *__stream;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *local_48;
  
  puVar12 = param_2 + 1;
  uVar11 = (ulong)*param_2;
  if (*param_2 == 0xffffffff) {
    uVar11 = *(ulong *)(param_2 + 1);
    puVar12 = param_2 + 3;
  }
  if (uVar11 == 0) {
    pcVar2 = "FDE has zero length";
  }
  else if (*puVar12 == 0) {
    pcVar2 = "FDE is really a CIE";
  }
  else {
    local_48 = puVar12;
    pcVar2 = (char *)FUN_00138dd4(param_1,(long)puVar12 - (ulong)*puVar12,param_4);
    if (pcVar2 == (char *)0x0) {
      local_48 = puVar12 + 1;
      puVar12 = (uint *)((long)puVar12 + uVar11);
      lVar3 = FUN_00137874(param_1,&local_48,puVar12,*(undefined1 *)(param_4 + 0x18),0);
      lVar4 = FUN_00137874(param_1,&local_48,puVar12,*(byte *)(param_4 + 0x18) & 0xf,0);
      param_3[5] = 0;
      puVar13 = local_48;
      if (*(char *)(param_4 + 0x31) != '\0') {
        uVar11 = 0;
        uVar7 = 0;
        lVar8 = -(long)local_48;
        do {
          if (puVar12 == puVar13) {
            pcVar2 = "truncated uleb128 expression";
            goto LAB_001359cc;
          }
          if (0x3f < uVar11) {
LAB_00135980:
            pcVar2 = "malformed uleb128 expression";
LAB_001359cc:
            __stream = (FILE *)(PTR___sF_001412c0 + 0x130);
            fprintf(__stream,"libunwind: %s - %s\n","getULEB128",pcVar2);
            fflush(__stream);
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar1 = *puVar13;
          uVar10 = (ulong)(byte)uVar1 & 0x7f;
          uVar9 = uVar10 << (uVar11 & 0x3f);
          if (uVar9 >> (uVar11 & 0x3f) != uVar10) goto LAB_00135980;
          uVar7 = uVar9 | uVar7;
          uVar11 = uVar11 + 7;
          puVar13 = (uint *)((long)puVar13 + 1);
          lVar8 = lVar8 + -1;
        } while ((char)(byte)uVar1 < '\0');
        puVar13 = (uint *)(uVar7 - lVar8);
        if ((*(byte *)(param_4 + 0x19) != 0xff) &&
           (local_48 = (uint *)-lVar8,
           lVar5 = FUN_00137874(param_1,&local_48,puVar12,*(byte *)(param_4 + 0x19) & 0xf,0),
           lVar5 != 0)) {
          local_48 = (uint *)-lVar8;
          uVar6 = FUN_00137874(param_1,&local_48,puVar12,*(undefined1 *)(param_4 + 0x19),0);
          param_3[5] = uVar6;
        }
      }
      pcVar2 = (char *)0x0;
      param_3[2] = puVar13;
      param_3[3] = lVar3;
      *param_3 = param_2;
      param_3[1] = (long)puVar12 - (long)param_2;
      param_3[4] = lVar4 + lVar3;
    }
  }
  return pcVar2;
}


// ===== 001359e0  FUN_001359e0 =====

int FUN_001359e0(long param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00145914);
  plVar3 = (long *)PTR_DAT_00145660;
  for (plVar1 = (long *)PTR_DAT_00145660; plVar1 < PTR_DAT_00145668; plVar1 = plVar1 + 4) {
    if (*plVar1 != param_1) {
      if (plVar1 != plVar3) {
        lVar6 = *plVar1;
        lVar5 = plVar1[3];
        lVar4 = plVar1[2];
        plVar3[1] = plVar1[1];
        *plVar3 = lVar6;
        plVar3[3] = lVar5;
        plVar3[2] = lVar4;
      }
      plVar3 = plVar3 + 4;
    }
  }
  PTR_DAT_00145668 = (undefined *)plVar3;
  iVar2 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00145914);
  return iVar2;
}


// ===== 00135a70  FUN_00135a70 =====

void FUN_00135a70(void)

{
  return;
}


// ===== 00135a78  FUN_00135a78 =====

void FUN_00135a78(void)

{
  return;
}


// ===== 00135a80  FUN_00135a80 =====

bool FUN_00135a80(undefined8 param_1,uint param_2)

{
  if (0xfffffffd < param_2) {
    return true;
  }
  if (0x5f < param_2) {
    return false;
  }
  if (param_2 == 0x22) {
    return true;
  }
  return (param_2 & 0xffffffe0) != 0x20;
}


// ===== 00135ac4  FUN_00135ac4 =====

undefined8 FUN_00135ac4(long param_1,uint param_2)

{
  FILE *__stream;
  undefined8 *puVar1;
  
  if (param_2 == 0xfffffffe) {
    puVar1 = (undefined8 *)(param_1 + 0x108);
  }
  else if (param_2 == 0x22) {
    puVar1 = (undefined8 *)(param_1 + 0x118);
  }
  else if (param_2 == 0xffffffff) {
    puVar1 = (undefined8 *)(param_1 + 0x110);
  }
  else {
    if (0x1f < param_2) {
      __stream = (FILE *)(PTR___sF_001412c0 + 0x130);
      fprintf(__stream,"libunwind: %s - %s\n","getRegister","unsupported arm64 register");
      fflush(__stream);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar1 = (undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x10);
  }
  return *puVar1;
}


// ===== 00135b60  FUN_00135b60 =====

void FUN_00135b60(long param_1,uint param_2,undefined8 param_3)

{
  FILE *__stream;
  undefined8 *puVar1;
  
  if (param_2 == 0xfffffffe) {
    puVar1 = (undefined8 *)(param_1 + 0x108);
  }
  else if (param_2 == 0x22) {
    puVar1 = (undefined8 *)(param_1 + 0x118);
  }
  else if (param_2 == 0xffffffff) {
    puVar1 = (undefined8 *)(param_1 + 0x110);
  }
  else {
    if (0x1f < param_2) {
      __stream = (FILE *)(PTR___sF_001412c0 + 0x130);
      fprintf(__stream,"libunwind: %s - %s\n","setRegister","unsupported arm64 register");
      fflush(__stream);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar1 = (undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x10);
  }
  *puVar1 = param_3;
  return;
}


// ===== 00135bfc  FUN_00135bfc =====

bool FUN_00135bfc(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffffffe0) == 0x40;
}


// ===== 00135c10  FUN_00135c10 =====

undefined1  [16] FUN_00135c10(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + (long)param_2 * 8 + -0xe0);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 00135c20  FUN_00135c20 =====

void FUN_00135c20(undefined8 param_1,long param_2,int param_3)

{
  *(undefined8 *)(param_2 + (long)param_3 * 8 + -0xe0) = param_1;
  return;
}


// ===== 00135c30  FUN_00135c30 =====

int FUN_00135c30(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_240 [528];
  
  if ((char)param_1[0x4d] == '\0') {
    if (*(char *)((long)param_1 + 0x26a) == '\0') {
      lVar1 = param_1[1];
      uVar3 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
      iVar2 = FUN_001360a8(lVar1,uVar3,param_1[0x4b],param_1 + 2,(long)param_1 + 0x269);
    }
    else {
      memset(auStack_240,0,0x210);
      iVar2 = FUN_00135f84(param_1,auStack_240);
    }
    if (iVar2 != 1) {
      return iVar2;
    }
    (**(code **)(*param_1 + 0x68))(param_1,1);
    if ((char)param_1[0x4d] == '\0') {
      return 1;
    }
  }
  return 0;
}


// ===== 00135d00  FUN_00135d00 =====

void FUN_00135d00(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)(param_1 + 0x268) != '\0') {
    param_2[8] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x220);
  param_2[1] = *(undefined8 *)(param_1 + 0x228);
  *param_2 = uVar1;
  uVar4 = *(undefined8 *)(param_1 + 0x248);
  uVar3 = *(undefined8 *)(param_1 + 0x240);
  uVar2 = *(undefined8 *)(param_1 + 600);
  uVar1 = *(undefined8 *)(param_1 + 0x250);
  uVar6 = *(undefined8 *)(param_1 + 0x238);
  uVar5 = *(undefined8 *)(param_1 + 0x230);
  param_2[8] = *(undefined8 *)(param_1 + 0x260);
  param_2[5] = uVar4;
  param_2[4] = uVar3;
  param_2[7] = uVar2;
  param_2[6] = uVar1;
  param_2[3] = uVar6;
  param_2[2] = uVar5;
  return;
}


// ===== 00135d44  FUN_00135d44 =====

void FUN_00135d44(long param_1)

{
  FUN_001392cc(param_1 + 0x10);
  return;
}


// ===== 00135d50  FUN_00135d50 =====

undefined1 FUN_00135d50(long param_1)

{
  return *(undefined1 *)(param_1 + 0x269);
}


// ===== 00135d5c  FUN_00135d5c =====

undefined8 FUN_00135d5c(long *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  return 0;
}


// ===== 00135d88  FUN_00135d88 =====

void FUN_00135d88(long *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined1 auStack_6e0 [32];
  long local_6c0;
  long local_6a8;
  undefined4 local_6a0;
  long local_690;
  long lStack_688;
  long local_680;
  undefined1 auStack_678 [16];
  long local_668;
  long local_648;
  undefined1 *puStack_640;
  ulong local_638;
  
  *(undefined1 *)((long)param_1 + 0x26a) = 0;
  lVar2 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  if (lVar2 != 0) {
    local_648 = param_1[1];
    uVar6 = lVar2 - (param_2 & 1);
    puStack_640 = auStack_678;
    local_638 = uVar6;
    iVar1 = dl_iterate_phdr(FUN_001387c0,&local_648);
    if (((iVar1 != 0) && (local_668 != 0)) &&
       (uVar3 = FUN_001384e0(param_1,uVar6,auStack_678,0), (uVar3 & 1) != 0)) {
      return;
    }
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00145914);
    for (puVar5 = PTR_DAT_00145660; puVar5 < PTR_DAT_00145668; puVar5 = puVar5 + 0x20) {
      if ((*(ulong *)(puVar5 + 8) <= uVar6) && (uVar6 < *(ulong *)(puVar5 + 0x10))) {
        lVar2 = *(long *)(puVar5 + 0x18);
        pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00145914);
        if ((lVar2 != 0) &&
           (lVar2 = FUN_001357c0(param_1[1],lVar2,&local_6a8,auStack_6e0), lVar2 == 0)) {
          memset(&local_648,0,0x618);
          uVar6 = FUN_00136374(param_1[1],&local_6a8,auStack_6e0,uVar6,4,&local_648);
          if ((uVar6 & 1) != 0) {
            param_1[0x45] = lStack_688;
            param_1[0x44] = local_690;
            param_1[0x46] = local_680;
            param_1[0x47] = local_6c0;
            param_1[0x48] = local_638 & 0xffffffff;
            param_1[0x49] = 0;
            *(undefined4 *)(param_1 + 0x4a) = 0x3000000;
            param_1[0x4b] = local_6a8;
            *(undefined4 *)((long)param_1 + 0x254) = local_6a0;
            param_1[0x4c] = 0;
            return;
          }
        }
        goto LAB_00135f00;
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00145914);
LAB_00135f00:
    piVar4 = (int *)(**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    if ((*piVar4 == -0x2d7fee98) && (piVar4[1] == -0x2bffffff)) {
      param_1[0x4c] = 0;
      param_1[0x49] = 0;
      param_1[0x48] = 0;
      param_1[0x4b] = 0;
      param_1[0x4a] = 0;
      param_1[0x45] = 0;
      param_1[0x44] = 0;
      param_1[0x47] = 0;
      param_1[0x46] = 0;
      *(undefined1 *)((long)param_1 + 0x26a) = 1;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x4d) = 1;
  return;
}


// ===== 00135f78  FUN_00135f78 =====

void FUN_00135f78(undefined8 param_1,undefined4 param_2)

{
  FUN_001392a0(param_2);
  return;
}


// ===== 00135f84  FUN_00135f84 =====

undefined8 FUN_00135f84(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar1 + 0x138);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar1 + 0x140);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar1 + 0x148);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar1 + 0x150);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar1 + 0x158);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar1 + 0x160);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar1 + 0x168);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar1 + 0x170);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar1 + 0x178);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar1 + 0x180);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar1 + 0x188);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar1 + 400);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar1 + 0x198);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(lVar1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(lVar1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(lVar1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(lVar1 + 0x1c0);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar1 + 0x1c8);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(lVar1 + 0x1d0);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(lVar1 + 0x1d8);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(lVar1 + 0x1e0);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(lVar1 + 0x1e8);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(lVar1 + 0x1f0);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(lVar1 + 0x1f8);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(lVar1 + 0x200);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(lVar1 + 0x208);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(lVar1 + 0x210);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(lVar1 + 0x218);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(lVar1 + 0x220);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(lVar1 + 0x228);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(lVar1 + 0x230);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(lVar1 + 0x238);
  *(undefined1 *)(param_1 + 0x269) = 1;
  return 1;
}


// ===== 001360a8  FUN_001360a8 =====

undefined8
FUN_001360a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
            undefined1 *param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 *puVar9;
  FILE *__stream;
  undefined8 uVar10;
  int *piVar11;
  long local_9e0 [96];
  undefined1 auStack_6e0 [24];
  int local_6c8 [2];
  long local_6c0 [191];
  undefined1 auStack_c8 [48];
  undefined1 local_98;
  byte local_96;
  undefined1 auStack_90 [48];
  
  lVar3 = FUN_001357c0(param_1,param_3,auStack_90,auStack_c8);
  if (lVar3 == 0) {
    memset(auStack_6e0,0,0x618);
    uVar4 = FUN_00136374(param_1,auStack_90,auStack_c8,param_2,4,auStack_6e0);
    if ((uVar4 & 1) != 0) {
      lVar3 = FUN_00137628(param_1,auStack_6e0,param_4);
      memcpy(local_9e0 + 0x1e,param_4,0x210);
      uVar4 = 0;
      uVar10 = 0;
      piVar11 = local_6c8;
      do {
        iVar2 = *piVar11;
        if (iVar2 == 0) {
          if (uVar4 == local_96) {
            puVar9 = (undefined8 *)((long)param_4 + 0x108);
            if (local_96 != 0x22) {
              if (0x1f < local_96) {
                pcVar7 = "getRegister";
LAB_00136354:
                pcVar8 = "unsupported arm64 register";
LAB_00136360:
                __stream = (FILE *)(PTR___sF_001412c0 + 0x130);
                fprintf(__stream,"libunwind: %s - %s\n",pcVar7,pcVar8);
                fflush(__stream);
                    /* WARNING: Subroutine does not return */
                abort();
              }
              puVar9 = (undefined8 *)((long)param_4 + (ulong)local_96 * 8);
            }
            uVar10 = *puVar9;
          }
        }
        else {
          uVar1 = (uint)uVar4 & 0x7fffffe0;
          if (uVar1 == 0x40) {
            if (iVar2 == 5) {
              plVar5 = (long *)FUN_00137b64(*(undefined8 *)(piVar11 + 2),param_1,param_4,lVar3);
            }
            else {
              if (iVar2 != 2) {
                pcVar7 = "getSavedFloatRegister";
                pcVar8 = "unsupported restore location for float register";
                goto LAB_00136360;
              }
              plVar5 = (long *)(*(long *)(piVar11 + 2) + lVar3);
            }
            local_9e0[uVar4] = *plVar5;
          }
          else if (uVar4 == local_96) {
            uVar10 = FUN_0013770c(param_1,param_4,lVar3,piVar11);
          }
          else if (uVar4 == 0x22) {
            local_9e0[0x3f] = FUN_0013770c(param_1,param_4,lVar3,piVar11);
          }
          else {
            if (uVar1 == 0x20) {
              return 0xffffe672;
            }
            lVar6 = FUN_0013770c(param_1,param_4,lVar3,piVar11);
            if (0x1f < uVar4) {
              pcVar7 = "setRegister";
              goto LAB_00136354;
            }
            local_9e0[uVar4 + 0x1e] = lVar6;
          }
        }
        uVar4 = uVar4 + 1;
        piVar11 = piVar11 + 4;
        if (uVar4 == 0x60) {
          *param_5 = local_98;
          local_9e0[0x3d] = lVar3;
          local_9e0[0x3e] = uVar10;
          memcpy(param_4,local_9e0 + 0x1e,0x210);
          return 1;
        }
      } while( true );
    }
  }
  return 0xffffe66e;
}


// ===== 00136374  FUN_00136374 =====

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_00136374(undefined8 param_1,long *param_2,long *param_3,long param_4,int param_5,
            undefined4 *param_6)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  char *pcVar6;
  size_t __size;
  char *pcVar7;
  undefined4 uVar8;
  byte *pbVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  FILE *__stream;
  ulong uVar20;
  byte *pbVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *pbVar24;
  long *plVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined1 auStack_6f0 [8];
  byte **local_6e8;
  undefined8 *local_6e0;
  undefined8 local_6d8;
  int local_6cc;
  long *local_6c8;
  byte *local_6c0;
  byte *apbStack_6a0 [193];
  long local_98;
  long local_90;
  undefined8 local_88;
  long lStack_80;
  long local_78;
  long local_70;
  long lStack_68;
  
  puVar4 = (undefined8 *)auStack_6f0;
  plVar25 = &local_98;
  local_98 = param_3[2];
  local_90 = param_3[1] + *param_3;
  puVar26 = (undefined8 *)0x0;
  local_88 = 0xffffffffffffffff;
  lStack_80 = param_2[2];
  local_6e0 = (undefined8 *)(param_6 + 0x8e);
  local_6d8 = param_1;
  local_78 = param_2[1] + *param_2;
  local_6c8 = &lStack_68;
  local_6cc = param_5;
  local_6e8 = apbStack_6a0 + 0x44;
  local_70 = param_4 - param_2[3];
  do {
    pbVar9 = (byte *)*plVar25;
    uVar20 = plVar25[2];
    apbStack_6a0[0xc0] = pbVar9;
    if ((uVar20 != 0) && (pbVar21 = (byte *)plVar25[1], pbVar9 < pbVar21)) {
      uVar22 = 0;
      pbVar5 = pbVar21 + -1;
      local_6c0 = pbVar5;
      do {
        pbVar23 = pbVar9 + 1;
        bVar2 = *pbVar9;
        apbStack_6a0[0xc0] = pbVar23;
        pbVar24 = pbVar23;
        switch((ulong)bVar2) {
        case 0:
          goto code_r0x001373b8;
        case 1:
          uVar22 = FUN_00137874(local_6d8,apbStack_6a0 + 0xc0,pbVar21,(char)param_3[3],0);
          pbVar9 = apbStack_6a0[0xc0];
          pbVar5 = local_6c0;
          break;
        case 2:
          uVar11 = (uint)pbVar9[1];
          iVar14 = (int)param_3[5];
          apbStack_6a0[0xc0] = pbVar9 + 2;
          goto LAB_001364d4;
        case 3:
          uVar11 = (uint)*(ushort *)(pbVar9 + 1);
          iVar14 = (int)param_3[5];
          apbStack_6a0[0xc0] = pbVar9 + 3;
          goto LAB_001364d4;
        case 4:
          uVar11 = *(uint *)(pbVar9 + 1);
          iVar14 = (int)param_3[5];
          apbStack_6a0[0xc0] = pbVar9 + 5;
LAB_001364d4:
          uVar22 = uVar22 + iVar14 * uVar11;
          pbVar9 = apbStack_6a0[0xc0];
          break;
        case 5:
          uVar10 = 0;
          uVar15 = 0;
          lVar17 = (long)pbVar5 - (long)pbVar23;
          pbVar9 = pbVar23;
          do {
            lVar16 = lVar17;
            if (pbVar21 == pbVar23) goto LAB_001375c8;
            if (0x3f < uVar10) goto LAB_001375a0;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_001375a0;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar9 = pbVar9 + 1;
            lVar17 = lVar16 + -1;
          } while ((char)bVar2 < '\0');
          lVar17 = 0;
          uVar10 = 0;
          uVar12 = 0;
          do {
            apbStack_6a0[0xc0] = pbVar9;
            if (lVar16 == 0) goto LAB_001375c8;
            if (0x3f < uVar10) goto LAB_001375a0;
            pbVar24 = pbVar23 + lVar17;
            uVar19 = (ulong)*pbVar24 & 0x7f;
            uVar18 = uVar19 << (uVar10 & 0x3f);
            if (uVar18 >> (uVar10 & 0x3f) != uVar19) goto LAB_001375a0;
            uVar12 = uVar18 | uVar12;
            uVar10 = uVar10 + 7;
            lVar17 = lVar17 + 1;
            lVar16 = lVar16 + -1;
          } while ((char)*pbVar24 < '\0');
          pbVar23 = pbVar9 + lVar17;
          apbStack_6a0[0xc0] = pbVar23;
          if (0x5f < uVar15) {
            pcVar6 = "libunwind: malformed DW_CFA_offset_extended DWARF unwind, reg too big\n";
            __size = 0x46;
            goto LAB_00137570;
          }
          puVar13 = param_6 + uVar15 * 4;
          pcVar6 = (char *)(puVar13 + 7);
          cVar3 = *pcVar6;
          lVar17 = uVar12 * (long)*(int *)((long)param_3 + 0x2c);
          goto joined_r0x00137384;
        case 6:
          uVar15 = 0;
          uVar10 = 0;
          pbVar9 = pbVar23;
          do {
            if (pbVar21 == pbVar23) goto LAB_001375c8;
            if (0x3f < uVar15) goto LAB_001375a0;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar15 & 0x3f);
            if (uVar12 >> (uVar15 & 0x3f) != uVar18) goto LAB_001375a0;
            uVar10 = uVar12 | uVar10;
            uVar15 = uVar15 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar9 = pbVar9 + 1;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[0xc0] = pbVar9;
          if (0x5f < uVar10) {
            pcVar6 = "libunwind: malformed DW_CFA_restore_extended DWARF unwind, reg too big\n";
LAB_00137490:
            __size = 0x47;
LAB_00137570:
            fwrite(pcVar6,__size,1,(FILE *)(PTR___sF_001412c0 + 0x130));
            return 0;
          }
LAB_001371e0:
          pbVar23 = pbVar9;
          if (*(char *)(param_6 + uVar10 * 4 + 7) == '\0') goto code_r0x001373b8;
          pbVar23 = apbStack_6a0[uVar10 * 2];
          *(byte **)(param_6 + uVar10 * 4 + 8) = apbStack_6a0[uVar10 * 2 + 1];
          *(byte **)(param_6 + uVar10 * 4 + 6) = pbVar23;
          break;
        case 7:
          uVar10 = 0;
          uVar15 = 0;
          pbVar9 = pbVar23;
          do {
            if (pbVar21 == pbVar23) goto LAB_001375c8;
            if (0x3f < uVar10) goto LAB_001375a0;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_001375a0;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar9 = pbVar9 + 1;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[0xc0] = pbVar9;
          if (0x5f < uVar15) {
            pcVar6 = "libunwind: malformed DW_CFA_undefined DWARF unwind, reg too big\n";
LAB_00137568:
            __size = 0x40;
            goto LAB_00137570;
          }
          if (*(char *)(param_6 + uVar15 * 4 + 7) == '\0') {
            pbVar23 = *(byte **)(param_6 + uVar15 * 4 + 6);
            apbStack_6a0[uVar15 * 2 + 1] = *(byte **)(param_6 + uVar15 * 4 + 8);
            apbStack_6a0[uVar15 * 2] = pbVar23;
            *(char *)(param_6 + uVar15 * 4 + 7) = '\x01';
          }
          param_6[uVar15 * 4 + 6] = 1;
          break;
        case 8:
          uVar10 = 0;
          uVar15 = 0;
          pbVar9 = pbVar23;
          do {
            if (pbVar21 == pbVar23) goto LAB_001375c8;
            if (0x3f < uVar10) goto LAB_001375a0;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_001375a0;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar9 = pbVar9 + 1;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[0xc0] = pbVar9;
          if (0x5f < uVar15) {
            pcVar6 = "libunwind: malformed DW_CFA_same_value DWARF unwind, reg too big\n";
LAB_001374dc:
            __size = 0x41;
            goto LAB_00137570;
          }
          if (*(char *)(param_6 + uVar15 * 4 + 7) == '\0') {
            pbVar23 = *(byte **)(param_6 + uVar15 * 4 + 6);
            apbStack_6a0[uVar15 * 2 + 1] = *(byte **)(param_6 + uVar15 * 4 + 8);
            apbStack_6a0[uVar15 * 2] = pbVar23;
            *(char *)(param_6 + uVar15 * 4 + 7) = '\x01';
          }
          param_6[uVar15 * 4 + 6] = 0;
          break;
        case 9:
          uVar10 = 0;
          uVar15 = 0;
          lVar17 = (long)pbVar5 - (long)pbVar23;
          pbVar9 = pbVar23;
          do {
            lVar16 = lVar17;
            if (pbVar21 == pbVar23) goto LAB_001375c8;
            if (0x3f < uVar10) goto LAB_001375a0;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_001375a0;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar9 = pbVar9 + 1;
            lVar17 = lVar16 + -1;
          } while ((char)bVar2 < '\0');
          lVar17 = 0;
          uVar10 = 0;
          uVar12 = 0;
          do {
            apbStack_6a0[0xc0] = pbVar9;
            if (lVar16 == 0) goto LAB_001375c8;
            if (0x3f < uVar10) goto LAB_001375a0;
            pbVar24 = pbVar23 + lVar17;
            uVar19 = (ulong)*pbVar24 & 0x7f;
            uVar18 = uVar19 << (uVar10 & 0x3f);
            if (uVar18 >> (uVar10 & 0x3f) != uVar19) goto LAB_001375a0;
            uVar12 = uVar18 | uVar12;
            uVar10 = uVar10 + 7;
            lVar17 = lVar17 + 1;
            lVar16 = lVar16 + -1;
          } while ((char)*pbVar24 < '\0');
          apbStack_6a0[0xc0] = pbVar9 + lVar17;
          if (0x5f < uVar15) {
            pcVar6 = "libunwind: malformed DW_CFA_register DWARF unwind, reg too big\n";
            __size = 0x3f;
            goto LAB_00137570;
          }
          if (0x5f < uVar12) {
            pcVar6 = "libunwind: malformed DW_CFA_register DWARF unwind, reg2 too big\n";
            goto LAB_00137568;
          }
          if (*(char *)(param_6 + uVar15 * 4 + 7) == '\0') {
            pbVar23 = *(byte **)(param_6 + uVar15 * 4 + 6);
            apbStack_6a0[uVar15 * 2 + 1] = *(byte **)(param_6 + uVar15 * 4 + 8);
            apbStack_6a0[uVar15 * 2] = pbVar23;
            *(char *)(param_6 + uVar15 * 4 + 7) = '\x01';
          }
          param_6[uVar15 * 4 + 6] = 4;
          *(ulong *)(param_6 + uVar15 * 4 + 8) = uVar12;
          pbVar9 = pbVar9 + lVar17;
          break;
        case 10:
          puVar27 = puVar4 + -0xc4;
          *puVar27 = puVar26;
          memcpy(puVar4 + -0xc3,param_6,0x618);
          pbVar9 = pbVar23;
          puVar26 = puVar27;
          puVar4 = puVar27;
          pbVar5 = local_6c0;
          break;
        case 0xb:
          if (puVar26 == (undefined8 *)0x0) {
            return 0;
          }
          memcpy(param_6,puVar26 + 1,0x618);
          pbVar9 = pbVar23;
          puVar26 = (undefined8 *)*puVar26;
          pbVar5 = local_6c0;
          break;
        case 0xc:
          uVar10 = 0;
          uVar15 = 0;
          lVar17 = (long)pbVar5 - (long)pbVar23;
          pbVar9 = pbVar23;
          do {
            lVar16 = lVar17;
            if (pbVar21 == pbVar23) goto LAB_001375c8;
            if (0x3f < uVar10) goto LAB_001375a0;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_001375a0;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar9 = pbVar9 + 1;
            lVar17 = lVar16 + -1;
          } while ((char)bVar2 < '\0');
          lVar17 = 0;
          uVar10 = 0;
          uVar12 = 0;
          do {
            apbStack_6a0[0xc0] = pbVar9;
            if (lVar16 == 0) goto LAB_001375c8;
            if (0x3f < uVar10) goto LAB_001375a0;
            pbVar24 = pbVar23 + lVar17;
            uVar19 = (ulong)*pbVar24 & 0x7f;
            uVar18 = uVar19 << (uVar10 & 0x3f);
            if (uVar18 >> (uVar10 & 0x3f) != uVar19) goto LAB_001375a0;
            uVar12 = uVar18 | uVar12;
            uVar10 = uVar10 + 7;
            lVar17 = lVar17 + 1;
            lVar16 = lVar16 + -1;
          } while ((char)*pbVar24 < '\0');
          apbStack_6a0[0xc0] = pbVar9 + lVar17;
          if (0x5f < uVar15) {
            pcVar6 = "libunwind: malformed DW_CFA_def_cfa DWARF unwind, reg too big\n";
            __size = 0x3e;
            goto LAB_00137570;
          }
          *param_6 = (int)uVar15;
          param_6[1] = (int)uVar12;
          pbVar9 = pbVar9 + lVar17;
          break;
        case 0xd:
          uVar10 = 0;
          uVar15 = 0;
          pbVar9 = pbVar23;
          do {
            if (pbVar21 == pbVar23) goto LAB_001375c8;
            if (0x3f < uVar10) goto LAB_001375a0;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_001375a0;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar9 = pbVar9 + 1;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[0xc0] = pbVar9;
          if (0x5f < uVar15) {
            pcVar6 = "libunwind: malformed DW_CFA_def_cfa_register DWARF unwind, reg too big\n";
            goto LAB_00137490;
          }
          *param_6 = (int)uVar15;
          break;
        case 0xe:
          uVar10 = 0;
          uVar15 = 0;
          pbVar9 = pbVar23;
          do {
            if (pbVar21 == pbVar23) goto LAB_001375c8;
            if (0x3f < uVar10) goto LAB_001375a0;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_001375a0;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar9 = pbVar9 + 1;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[0xc0] = pbVar9;
          param_6[1] = (int)uVar15;
          break;
        case 0xf:
          uVar10 = 0;
          uVar15 = 0;
          lVar17 = -(long)pbVar23;
          *param_6 = 0;
          *(byte **)(param_6 + 2) = pbVar23;
          do {
            if (pbVar21 == pbVar23) goto LAB_001375c8;
            if (0x3f < uVar10) goto LAB_001375a0;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_001375a0;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            lVar17 = lVar17 + -1;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[0xc0] = (byte *)(uVar15 - lVar17);
          pbVar9 = (byte *)(uVar15 - lVar17);
          break;
        case 0x10:
          uVar10 = 0;
          uVar15 = 0;
          lVar17 = (long)pbVar5 - (long)pbVar23;
          do {
            lVar16 = lVar17;
            if (pbVar21 == pbVar23) goto LAB_001375c8;
            if (0x3f < uVar10) goto LAB_001375a0;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_001375a0;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar24 = pbVar24 + 1;
            lVar17 = lVar16 + -1;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[0xc0] = pbVar24;
          if (0x5f < uVar15) {
            pcVar6 = "libunwind: malformed DW_CFA_expression DWARF unwind, reg too big\n";
            goto LAB_001374dc;
          }
          if (*(char *)(param_6 + uVar15 * 4 + 7) == '\0') {
            pbVar9 = *(byte **)(param_6 + uVar15 * 4 + 6);
            apbStack_6a0[uVar15 * 2 + 1] = *(byte **)(param_6 + uVar15 * 4 + 8);
            apbStack_6a0[uVar15 * 2] = pbVar9;
            *(char *)(param_6 + uVar15 * 4 + 7) = '\x01';
          }
          lVar17 = 0;
          uVar10 = 0;
          uVar12 = 0;
          param_6[uVar15 * 4 + 6] = 5;
          *(byte **)(param_6 + uVar15 * 4 + 8) = pbVar24;
          do {
            if (lVar16 == 0) goto LAB_001375c8;
            if (0x3f < uVar10) goto LAB_001375a0;
            pbVar9 = pbVar23 + lVar17;
            uVar18 = (ulong)*pbVar9 & 0x7f;
            uVar15 = uVar18 << (uVar10 & 0x3f);
            if (uVar15 >> (uVar10 & 0x3f) != uVar18) goto LAB_001375a0;
            uVar12 = uVar15 | uVar12;
            uVar10 = uVar10 + 7;
            lVar17 = lVar17 + 1;
            lVar16 = lVar16 + -1;
          } while ((char)*pbVar9 < '\0');
          goto LAB_00137100;
        case 0x11:
          uVar10 = 0;
          uVar15 = 0;
          lVar17 = (long)pbVar5 - (long)pbVar23;
          pbVar9 = pbVar23;
          do {
            lVar16 = lVar17;
            if (pbVar21 == pbVar23) goto LAB_001375c8;
            if (0x3f < uVar10) goto LAB_001375a0;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_001375a0;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar9 = pbVar9 + 1;
            lVar17 = lVar16 + -1;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[0xc0] = pbVar9;
          if (0x5f < uVar15) {
            pcVar6 = "libunwind: malformed DW_CFA_offset_extended_sf DWARF unwind, reg too big\n";
            __size = 0x49;
            goto LAB_00137570;
          }
          lVar17 = 0;
          uVar10 = 0;
          uVar12 = 0;
          do {
            if (lVar16 == 0) goto LAB_00137600;
            bVar2 = pbVar23[lVar17];
            lVar17 = lVar17 + 1;
            lVar16 = lVar16 + -1;
            uVar18 = uVar10 & 0x3f;
            uVar10 = uVar10 + 7;
            uVar12 = ((ulong)bVar2 & 0x7f) << uVar18 | uVar12;
          } while ((char)bVar2 < '\0');
          pbVar23 = pbVar9 + lVar17;
          puVar13 = param_6 + uVar15 * 4;
          apbStack_6a0[0xc0] = pbVar23;
          uVar18 = -1L << (uVar10 & 0x3f);
          if (((uint)((int)uVar10 - 7U < 0x39) & (bVar2 & 0x40) >> 6) == 0) {
            uVar18 = 0;
          }
          lVar17 = (uVar12 | uVar18) * (long)*(int *)((long)param_3 + 0x2c);
          if (*(char *)(puVar13 + 7) == '\0') {
            pbVar9 = *(byte **)(param_6 + uVar15 * 4 + 6);
            apbStack_6a0[uVar15 * 2 + 1] = *(byte **)(param_6 + uVar15 * 4 + 8);
            apbStack_6a0[uVar15 * 2] = pbVar9;
            *(char *)(puVar13 + 7) = '\x01';
          }
          goto LAB_001373a8;
        case 0x12:
          uVar10 = 0;
          uVar15 = 0;
          lVar17 = (long)pbVar5 - (long)pbVar23;
          pbVar9 = pbVar23;
          do {
            lVar16 = lVar17;
            if (pbVar21 == pbVar23) goto LAB_001375c8;
            if (0x3f < uVar10) goto LAB_001375a0;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_001375a0;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar9 = pbVar9 + 1;
            lVar17 = lVar16 + -1;
          } while ((char)bVar2 < '\0');
          lVar17 = 0;
          uVar10 = 0;
          uVar12 = 0;
          do {
            apbStack_6a0[0xc0] = pbVar9;
            if (lVar16 == 0) goto LAB_00137600;
            bVar2 = pbVar23[lVar17];
            lVar17 = lVar17 + 1;
            lVar16 = lVar16 + -1;
            uVar18 = uVar10 & 0x3f;
            uVar10 = uVar10 + 7;
            uVar12 = ((ulong)bVar2 & 0x7f) << uVar18 | uVar12;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[0xc0] = pbVar9 + lVar17;
          if (0x5f < uVar15) {
            pcVar6 = "libunwind: malformed DW_CFA_def_cfa_sf DWARF unwind, reg too big\n";
            goto LAB_001374dc;
          }
          iVar14 = *(int *)((long)param_3 + 0x2c);
          uVar11 = (uint)(-1L << (uVar10 & 0x3f));
          if (((uint)((int)uVar10 - 7U < 0x39) & (bVar2 & 0x40) >> 6) == 0) {
            uVar11 = 0;
          }
          *param_6 = (int)uVar15;
          param_6[1] = iVar14 * ((uint)uVar12 | uVar11);
          pbVar9 = pbVar9 + lVar17;
          break;
        case 0x13:
          uVar10 = 0;
          uVar15 = 0;
          pbVar9 = pbVar23;
          do {
            if (pbVar21 == pbVar9) goto LAB_00137600;
            bVar2 = *pbVar9;
            pbVar23 = pbVar23 + 1;
            uVar12 = uVar10 & 0x3f;
            uVar10 = uVar10 + 7;
            uVar15 = ((ulong)bVar2 & 0x7f) << uVar12 | uVar15;
            pbVar9 = pbVar9 + 1;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[0xc0] = pbVar23;
          uVar11 = (uint)(-1L << (uVar10 & 0x3f));
          if (((uint)((int)uVar10 - 7U < 0x39) & (bVar2 & 0x40) >> 6) == 0) {
            uVar11 = 0;
          }
          param_6[1] = *(int *)((long)param_3 + 0x2c) * ((uint)uVar15 | uVar11);
          pbVar9 = pbVar23;
          break;
        case 0x14:
          uVar10 = 0;
          uVar15 = 0;
          lVar17 = (long)pbVar5 - (long)pbVar23;
          pbVar9 = pbVar23;
          do {
            lVar16 = lVar17;
            if (pbVar21 == pbVar23) goto LAB_001375c8;
            if (0x3f < uVar10) goto LAB_001375a0;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_001375a0;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar9 = pbVar9 + 1;
            lVar17 = lVar16 + -1;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[0xc0] = pbVar9;
          if (0x5f < uVar15) {
            fprintf((FILE *)(PTR___sF_001412c0 + 0x130),
                    "libunwind: malformed DW_CFA_val_offset DWARF unwind, reg (%lu) out of range\n\n"
                   );
            return 0;
          }
          lVar17 = 0;
          uVar10 = 0;
          uVar12 = 0;
          do {
            if (lVar16 == 0) goto LAB_001375c8;
            if (0x3f < uVar10) goto LAB_001375a0;
            pbVar24 = pbVar23 + lVar17;
            uVar19 = (ulong)*pbVar24 & 0x7f;
            uVar18 = uVar19 << (uVar10 & 0x3f);
            if (uVar18 >> (uVar10 & 0x3f) != uVar19) goto LAB_001375a0;
            uVar12 = uVar18 | uVar12;
            uVar10 = uVar10 + 7;
            lVar17 = lVar17 + 1;
            lVar16 = lVar16 + -1;
          } while ((char)*pbVar24 < '\0');
          apbStack_6a0[0xc0] = pbVar9 + lVar17;
          iVar14 = *(int *)((long)param_3 + 0x2c);
          if (*(char *)(param_6 + uVar15 * 4 + 7) == '\0') {
            pbVar23 = *(byte **)(param_6 + uVar15 * 4 + 6);
            apbStack_6a0[uVar15 * 2 + 1] = *(byte **)(param_6 + uVar15 * 4 + 8);
            apbStack_6a0[uVar15 * 2] = pbVar23;
            *(char *)(param_6 + uVar15 * 4 + 7) = '\x01';
          }
          param_6[uVar15 * 4 + 6] = 3;
          *(ulong *)(param_6 + uVar15 * 4 + 8) = uVar12 * (long)iVar14;
          pbVar9 = pbVar9 + lVar17;
          break;
        case 0x15:
          uVar10 = 0;
          uVar15 = 0;
          lVar17 = (long)pbVar5 - (long)pbVar23;
          pbVar9 = pbVar23;
          do {
            lVar16 = lVar17;
            if (pbVar21 == pbVar23) goto LAB_001375c8;
            if (0x3f < uVar10) goto LAB_001375a0;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_001375a0;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar9 = pbVar9 + 1;
            lVar17 = lVar16 + -1;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[0xc0] = pbVar9;
          if (0x5f < uVar15) {
            pcVar6 = "libunwind: malformed DW_CFA_val_offset_sf DWARF unwind, reg too big\n";
            __size = 0x44;
            goto LAB_00137570;
          }
          lVar17 = 0;
          uVar10 = 0;
          uVar12 = 0;
          do {
            if (lVar16 == 0) goto LAB_00137600;
            bVar2 = pbVar23[lVar17];
            lVar17 = lVar17 + 1;
            lVar16 = lVar16 + -1;
            uVar18 = uVar10 & 0x3f;
            uVar10 = uVar10 + 7;
            uVar12 = ((ulong)bVar2 & 0x7f) << uVar18 | uVar12;
          } while ((char)bVar2 < '\0');
          pbVar23 = pbVar9 + lVar17;
          puVar13 = param_6 + uVar15 * 4;
          apbStack_6a0[0xc0] = pbVar23;
          uVar18 = -1L << (uVar10 & 0x3f);
          if (((uint)((int)uVar10 - 7U < 0x39) & (bVar2 & 0x40) >> 6) == 0) {
            uVar18 = 0;
          }
          lVar17 = (uVar12 | uVar18) * (long)*(int *)((long)param_3 + 0x2c);
          if (*(char *)(puVar13 + 7) == '\0') {
            pbVar9 = *(byte **)(param_6 + uVar15 * 4 + 6);
            apbStack_6a0[uVar15 * 2 + 1] = *(byte **)(param_6 + uVar15 * 4 + 8);
            apbStack_6a0[uVar15 * 2] = pbVar9;
            *(char *)(puVar13 + 7) = '\x01';
          }
          uVar8 = 3;
          goto LAB_001373ac;
        case 0x16:
          uVar10 = 0;
          uVar15 = 0;
          lVar17 = (long)pbVar5 - (long)pbVar23;
          do {
            lVar16 = lVar17;
            if (pbVar21 == pbVar23) goto LAB_001375c8;
            if (0x3f < uVar10) goto LAB_001375a0;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_001375a0;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar24 = pbVar24 + 1;
            lVar17 = lVar16 + -1;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[0xc0] = pbVar24;
          if (0x5f < uVar15) {
            pcVar6 = "libunwind: malformed DW_CFA_val_expression DWARF unwind, reg too big\n";
            __size = 0x45;
            goto LAB_00137570;
          }
          if (*(char *)(param_6 + uVar15 * 4 + 7) == '\0') {
            pbVar9 = *(byte **)(param_6 + uVar15 * 4 + 6);
            apbStack_6a0[uVar15 * 2 + 1] = *(byte **)(param_6 + uVar15 * 4 + 8);
            apbStack_6a0[uVar15 * 2] = pbVar9;
            *(char *)(param_6 + uVar15 * 4 + 7) = '\x01';
          }
          lVar17 = 0;
          uVar10 = 0;
          uVar12 = 0;
          param_6[uVar15 * 4 + 6] = 6;
          *(byte **)(param_6 + uVar15 * 4 + 8) = pbVar24;
          do {
            if (lVar16 == 0) goto LAB_001375c8;
            if (0x3f < uVar10) goto LAB_001375a0;
            pbVar9 = pbVar23 + lVar17;
            uVar18 = (ulong)*pbVar9 & 0x7f;
            uVar15 = uVar18 << (uVar10 & 0x3f);
            if (uVar15 >> (uVar10 & 0x3f) != uVar18) goto LAB_001375a0;
            uVar12 = uVar15 | uVar12;
            uVar10 = uVar10 + 7;
            lVar17 = lVar17 + 1;
            lVar16 = lVar16 + -1;
          } while ((char)*pbVar9 < '\0');
LAB_00137100:
          apbStack_6a0[0xc0] = pbVar24 + lVar17 + uVar12;
          pbVar9 = pbVar24 + lVar17 + uVar12;
          break;
        default:
          bVar1 = bVar2 & 0xc0;
          uVar10 = (ulong)bVar2 & 0x3f;
          if (bVar1 == 0x40) {
            uVar22 = uVar22 + (uint)((int)param_3[5] * (int)uVar10);
            pbVar9 = pbVar23;
          }
          else {
            pbVar9 = pbVar23;
            if (bVar1 == 0xc0) goto LAB_001371e0;
            if (bVar1 != 0x80) {
              return 0;
            }
            uVar15 = 0;
            uVar12 = 0;
            do {
              if (pbVar21 == pbVar23) goto LAB_001375c8;
              if (0x3f < uVar15) goto LAB_001375a0;
              bVar2 = *pbVar23;
              uVar19 = (ulong)bVar2 & 0x7f;
              uVar18 = uVar19 << (uVar15 & 0x3f);
              if (uVar18 >> (uVar15 & 0x3f) != uVar19) goto LAB_001375a0;
              uVar12 = uVar18 | uVar12;
              uVar15 = uVar15 + 7;
              pbVar23 = pbVar23 + 1;
              pbVar9 = pbVar9 + 1;
            } while ((char)bVar2 < '\0');
            apbStack_6a0[0xc0] = pbVar9;
            iVar14 = *(int *)((long)param_3 + 0x2c);
            if (*(char *)(param_6 + uVar10 * 4 + 7) == '\0') {
              pbVar23 = *(byte **)(param_6 + uVar10 * 4 + 6);
              apbStack_6a0[uVar10 * 2 + 1] = *(byte **)(param_6 + uVar10 * 4 + 8);
              apbStack_6a0[uVar10 * 2] = pbVar23;
              *(char *)(param_6 + uVar10 * 4 + 7) = '\x01';
            }
            param_6[uVar10 * 4 + 6] = 2;
            *(ulong *)(param_6 + uVar10 * 4 + 8) = uVar12 * (long)iVar14;
          }
          break;
        case 0x2d:
          if (local_6cc != 4) goto code_r0x001373b8;
          if (*(char *)(param_6 + 0x8f) == '\0') {
            pbVar9 = (byte *)*local_6e0;
            local_6e8[1] = (byte *)local_6e0[1];
            *local_6e8 = pbVar9;
            *(undefined1 *)(param_6 + 0x8f) = 1;
          }
          *(ulong *)(param_6 + 0x90) = *(ulong *)(param_6 + 0x90) ^ 1;
          pbVar9 = pbVar23;
          break;
        case 0x2e:
          uVar10 = 0;
          uVar15 = 0;
          pbVar9 = pbVar23;
          do {
            if (pbVar21 == pbVar23) goto LAB_001375c8;
            if (0x3f < uVar10) goto LAB_001375a0;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_001375a0;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar9 = pbVar9 + 1;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[0xc0] = pbVar9;
          param_6[4] = (int)uVar15;
          break;
        case 0x2f:
          uVar10 = 0;
          uVar15 = 0;
          lVar17 = (long)pbVar5 - (long)pbVar23;
          pbVar9 = pbVar23;
          do {
            lVar16 = lVar17;
            if (pbVar21 == pbVar23) goto LAB_001375c8;
            if (0x3f < uVar10) goto LAB_001375a0;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_001375a0;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar9 = pbVar9 + 1;
            lVar17 = lVar16 + -1;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[0xc0] = pbVar9;
          if (0x5f < uVar15) {
            pcVar6 = 
            "libunwind: malformed DW_CFA_GNU_negative_offset_extended DWARF unwind, reg too big\n";
            __size = 0x53;
            goto LAB_00137570;
          }
          lVar17 = 0;
          uVar10 = 0;
          uVar12 = 0;
          do {
            if (lVar16 == 0) goto LAB_001375c8;
            if (0x3f < uVar10) goto LAB_001375a0;
            pbVar24 = pbVar23 + lVar17;
            uVar19 = (ulong)*pbVar24 & 0x7f;
            uVar18 = uVar19 << (uVar10 & 0x3f);
            if (uVar18 >> (uVar10 & 0x3f) != uVar19) goto LAB_001375a0;
            uVar12 = uVar18 | uVar12;
            uVar10 = uVar10 + 7;
            lVar17 = lVar17 + 1;
            lVar16 = lVar16 + -1;
          } while ((char)*pbVar24 < '\0');
          pbVar23 = pbVar9 + lVar17;
          puVar13 = param_6 + uVar15 * 4;
          apbStack_6a0[0xc0] = pbVar23;
          pcVar6 = (char *)(puVar13 + 7);
          cVar3 = *pcVar6;
          lVar17 = -(uVar12 * (long)*(int *)((long)param_3 + 0x2c));
joined_r0x00137384:
          if (cVar3 == '\0') {
            pbVar9 = *(byte **)(param_6 + uVar15 * 4 + 6);
            apbStack_6a0[uVar15 * 2 + 1] = *(byte **)(param_6 + uVar15 * 4 + 8);
            apbStack_6a0[uVar15 * 2] = pbVar9;
            *pcVar6 = '\x01';
          }
LAB_001373a8:
          uVar8 = 2;
LAB_001373ac:
          puVar13[6] = uVar8;
          *(long *)(puVar13 + 8) = lVar17;
code_r0x001373b8:
          pbVar9 = pbVar23;
        }
      } while ((uVar22 < uVar20) && (pbVar9 < pbVar21));
    }
    plVar25 = plVar25 + 3;
    if (plVar25 == local_6c8) {
      return 1;
    }
  } while( true );
LAB_00137600:
  pcVar6 = "getSLEB128";
  __stream = (FILE *)(PTR___sF_001412c0 + 0x130);
  pcVar7 = "truncated sleb128 expression";
  goto LAB_001375ec;
LAB_001375c8:
  pcVar6 = "getULEB128";
  __stream = (FILE *)(PTR___sF_001412c0 + 0x130);
  pcVar7 = "truncated uleb128 expression";
  goto LAB_001375ec;
LAB_001375a0:
  pcVar6 = "getULEB128";
  __stream = (FILE *)(PTR___sF_001412c0 + 0x130);
  pcVar7 = "malformed uleb128 expression";
LAB_001375ec:
  fprintf(__stream,"libunwind: %s - %s\n",pcVar6,pcVar7);
  fflush(__stream);
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00137628  FUN_00137628 =====

long FUN_00137628(undefined8 param_1,uint *param_2,long param_3)

{
  FILE *__stream;
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = *param_2;
  switch(uVar1) {
  case 0:
    lVar2 = FUN_00137b64(*(undefined8 *)(param_2 + 2),param_1,param_3,0);
    return lVar2;
  default:
    if (0x1f < uVar1) {
      __stream = (FILE *)(PTR___sF_001412c0 + 0x130);
      fprintf(__stream,"libunwind: %s - %s\n","getRegister","unsupported arm64 register");
      fflush(__stream);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar3 = (long *)(param_3 + (ulong)uVar1 * 8);
    break;
  case 0x22:
    plVar3 = (long *)(param_3 + 0x108);
    break;
  case 0xfffffffe:
    plVar3 = (long *)(param_3 + 0xf8);
    break;
  case 0xffffffff:
    plVar3 = (long *)(param_3 + 0x100);
  }
  return *plVar3 + (long)(int)param_2[1];
}


// ===== 0013770c  FUN_0013770c =====

undefined8 FUN_0013770c(undefined8 param_1,long param_2,long param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  FILE *__stream;
  
  switch(*param_4) {
  case 1:
    return 0;
  case 2:
    return *(undefined8 *)(*(long *)(param_4 + 2) + param_3);
  default:
    pcVar3 = "getSavedRegister";
    pcVar4 = "unsupported restore location for register";
LAB_00137860:
    __stream = (FILE *)(PTR___sF_001412c0 + 0x130);
    fprintf(__stream,"libunwind: %s - %s\n",pcVar3,pcVar4);
    fflush(__stream);
                    /* WARNING: Subroutine does not return */
    abort();
  case 4:
    break;
  case 5:
    puVar1 = (undefined8 *)FUN_00137b64(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
    return *puVar1;
  case 6:
    uVar2 = FUN_00137b64(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
    return uVar2;
  }
  uVar5 = (uint)*(ulong *)(param_4 + 2);
  if (uVar5 == 0xfffffffe) {
    puVar1 = (undefined8 *)(param_2 + 0xf8);
  }
  else if (uVar5 == 0x22) {
    puVar1 = (undefined8 *)(param_2 + 0x108);
  }
  else if (uVar5 == 0xffffffff) {
    puVar1 = (undefined8 *)(param_2 + 0x100);
  }
  else {
    if (0x1f < uVar5) {
      pcVar3 = "getRegister";
      pcVar4 = "unsupported arm64 register";
      goto LAB_00137860;
    }
    puVar1 = (undefined8 *)(param_2 + (*(ulong *)(param_4 + 2) & 0xffffffff) * 8);
  }
  return *puVar1;
}


// ===== 00137874  FUN_00137874 =====

long * FUN_00137874(undefined8 param_1,long *param_2,uint *param_3,uint param_4,long param_5)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  char *pcVar4;
  char *pcVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  FILE *__stream;
  
  if (0xc < (param_4 & 0xf)) {
switchD_001379c8_default:
    pcVar4 = "getEncodedP";
    __stream = (FILE *)(PTR___sF_001412c0 + 0x130);
    pcVar5 = "unknown pointer encoding";
    goto LAB_00137a78;
  }
  puVar6 = (uint *)*param_2;
  switch(param_4 & 0xf) {
  case 0:
  case 4:
  case 0xc:
    puVar8 = puVar6 + 2;
    plVar3 = *(long **)puVar6;
    break;
  case 1:
    uVar10 = 0;
    plVar3 = (long *)0x0;
    puVar8 = puVar6;
    do {
      if (param_3 == puVar8) {
        pcVar4 = "getULEB128";
        __stream = (FILE *)(PTR___sF_001412c0 + 0x130);
        pcVar5 = "truncated uleb128 expression";
        goto LAB_00137a78;
      }
      if (0x3f < uVar10) {
LAB_00137a04:
        pcVar4 = "getULEB128";
        __stream = (FILE *)(PTR___sF_001412c0 + 0x130);
        pcVar5 = "malformed uleb128 expression";
        goto LAB_00137a78;
      }
      uVar2 = *puVar8;
      uVar11 = (ulong)(byte)uVar2 & 0x7f;
      uVar9 = uVar11 << (uVar10 & 0x3f);
      if (uVar9 >> (uVar10 & 0x3f) != uVar11) goto LAB_00137a04;
      plVar3 = (long *)(uVar9 | (ulong)plVar3);
      uVar10 = uVar10 + 7;
      puVar8 = (uint *)((long)puVar8 + 1);
    } while ((char)(byte)uVar2 < '\0');
    break;
  case 2:
    puVar8 = (uint *)((long)puVar6 + 2);
    plVar3 = (long *)(ulong)(ushort)*puVar6;
    break;
  case 3:
    puVar8 = puVar6 + 1;
    plVar3 = (long *)(ulong)*puVar6;
    break;
  default:
    goto switchD_001379c8_default;
  case 9:
    uVar10 = 0;
    uVar9 = 0;
    puVar7 = puVar6;
    do {
      if (param_3 == puVar7) {
        pcVar4 = "getSLEB128";
        __stream = (FILE *)(PTR___sF_001412c0 + 0x130);
        pcVar5 = "truncated sleb128 expression";
        goto LAB_00137a78;
      }
      puVar8 = (uint *)((long)puVar7 + 1);
      bVar1 = (byte)*puVar7;
      uVar9 = ((ulong)bVar1 & 0x7f) << (uVar10 & 0x3f) | uVar9;
      uVar10 = uVar10 + 7;
      puVar7 = puVar8;
    } while ((char)bVar1 < '\0');
    uVar11 = -1L << (uVar10 & 0x3f);
    if (((uint)((int)uVar10 - 7U < 0x39) & (bVar1 & 0x40) >> 6) == 0) {
      uVar11 = 0;
    }
    plVar3 = (long *)(uVar9 | uVar11);
    break;
  case 10:
    puVar8 = (uint *)((long)puVar6 + 2);
    plVar3 = (long *)(long)(short)*puVar6;
    break;
  case 0xb:
    puVar8 = puVar6 + 1;
    plVar3 = (long *)(long)(int)*puVar6;
  }
  param_4 = param_4 & 0xff;
  *param_2 = (long)puVar8;
  switch(param_4 >> 4 & 7) {
  case 1:
    plVar3 = (long *)((long)plVar3 + (long)puVar6);
  case 0:
    if (param_4 >> 7 != 0) {
LAB_001379dc:
      plVar3 = (long *)*plVar3;
    }
    return plVar3;
  case 2:
    pcVar4 = "getEncodedP";
    __stream = (FILE *)(PTR___sF_001412c0 + 0x130);
    pcVar5 = "DW_EH_PE_textrel pointer encoding not supported";
    break;
  case 3:
    if (param_5 == 0) {
      pcVar4 = "getEncodedP";
      __stream = (FILE *)(PTR___sF_001412c0 + 0x130);
      pcVar5 = "DW_EH_PE_datarel is invalid with a datarelBase of 0";
      break;
    }
    plVar3 = (long *)((long)plVar3 + param_5);
    if (param_4 >> 7 == 0) {
      return plVar3;
    }
    goto LAB_001379dc;
  case 4:
    pcVar4 = "getEncodedP";
    __stream = (FILE *)(PTR___sF_001412c0 + 0x130);
    pcVar5 = "DW_EH_PE_funcrel pointer encoding not supported";
    break;
  case 5:
    pcVar4 = "getEncodedP";
    __stream = (FILE *)(PTR___sF_001412c0 + 0x130);
    pcVar5 = "DW_EH_PE_aligned pointer encoding not supported";
    break;
  default:
    goto switchD_001379c8_default;
  }
LAB_00137a78:
  fprintf(__stream,"libunwind: %s - %s\n",pcVar4,pcVar5);
  fflush(__stream);
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00137b64  FUN_00137b64 =====

ulong FUN_00137b64(byte *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  ulong *puVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  byte *pbVar19;
  ulong *puVar20;
  FILE *__stream;
  undefined1 auVar21 [16];
  ulong local_338 [99];
  
  uVar12 = 0;
  uVar10 = 0;
  pbVar19 = param_1 + 0x14;
  lVar13 = -(long)param_1;
  do {
    if (pbVar19 == param_1) goto LAB_001383d0;
    if (0x3f < uVar12) goto LAB_001383a8;
    bVar5 = *param_1;
    uVar16 = (ulong)bVar5 & 0x7f;
    uVar14 = uVar16 << (uVar12 & 0x3f);
    if (uVar14 >> (uVar12 & 0x3f) != uVar16) goto LAB_001383a8;
    uVar10 = uVar14 | uVar10;
    uVar12 = uVar12 + 7;
    param_1 = param_1 + 1;
    lVar13 = lVar13 + -1;
  } while ((char)bVar5 < '\0');
  pbVar19 = (byte *)-lVar13;
  pbVar11 = (byte *)(uVar10 - lVar13);
  local_338[0] = param_4;
  if (pbVar19 < pbVar11) {
    puVar1 = (ulong *)(param_3 + 0x108);
    puVar2 = (ulong *)(param_3 + 0xf8);
    puVar3 = (ulong *)(param_3 + 0x100);
    puVar15 = local_338;
    do {
      pbVar17 = pbVar19 + 1;
      bVar5 = *pbVar19;
      uVar18 = (uint)bVar5;
      if (0x91 < uVar18 - 3) {
code_r0x00138434:
        pcVar8 = "evaluateExpression";
        pcVar9 = "DWARF opcode not implemented";
        goto LAB_001383f4;
      }
      puVar7 = puVar15;
      switch(uVar18) {
      case 3:
      case 0xe:
      case 0xf:
        puVar20 = (ulong *)(pbVar19 + 1);
        pbVar19 = pbVar19 + 9;
        puVar7 = puVar15 + 1;
        *puVar7 = *puVar20;
        break;
      case 4:
      case 5:
      case 7:
        goto code_r0x00138434;
      case 6:
        uVar12 = *(ulong *)*puVar15;
        goto LAB_0013835c;
      case 8:
        uVar12 = (ulong)pbVar19[1];
        goto LAB_00137f24;
      case 9:
        uVar12 = (ulong)(char)pbVar19[1];
        goto LAB_00137f24;
      case 10:
        uVar12 = (ulong)*(ushort *)(pbVar19 + 1);
        goto LAB_00137e14;
      case 0xb:
        uVar12 = (ulong)*(short *)(pbVar19 + 1);
LAB_00137e14:
        pbVar19 = pbVar19 + 3;
        puVar7 = puVar15 + 1;
        *puVar7 = uVar12;
        break;
      case 0xc:
        uVar12 = (ulong)*(uint *)(pbVar19 + 1);
        goto LAB_00137e34;
      case 0xd:
        uVar12 = (ulong)*(int *)(pbVar19 + 1);
LAB_00137e34:
        pbVar19 = pbVar19 + 5;
        puVar7 = puVar15 + 1;
        *puVar7 = uVar12;
        break;
      case 0x10:
        uVar10 = 0;
        uVar12 = 0;
        pbVar19 = pbVar17;
        do {
          if (pbVar11 == pbVar19) goto LAB_001383d0;
          if (0x3f < uVar10) goto LAB_001383a8;
          bVar5 = *pbVar19;
          uVar16 = (ulong)bVar5 & 0x7f;
          uVar14 = uVar16 << (uVar10 & 0x3f);
          if (uVar14 >> (uVar10 & 0x3f) != uVar16) goto LAB_001383a8;
          uVar12 = uVar14 | uVar12;
          uVar10 = uVar10 + 7;
          pbVar19 = pbVar19 + 1;
          pbVar17 = pbVar17 + 1;
        } while ((char)bVar5 < '\0');
        goto LAB_00137c0c;
      case 0x11:
        uVar10 = 0;
        uVar12 = 0;
        pbVar19 = pbVar17;
        do {
          if (pbVar11 == pbVar19) goto LAB_00138380;
          bVar5 = *pbVar19;
          pbVar17 = pbVar17 + 1;
          uVar14 = uVar10 & 0x3f;
          uVar10 = uVar10 + 7;
          uVar12 = ((ulong)bVar5 & 0x7f) << uVar14 | uVar12;
          pbVar19 = pbVar19 + 1;
        } while ((char)bVar5 < '\0');
        uVar14 = -1L << (uVar10 & 0x3f);
        if (((uint)((int)uVar10 - 7U < 0x39) & (bVar5 & 0x40) >> 6) == 0) {
          uVar14 = 0;
        }
        uVar12 = uVar12 | uVar14;
        goto LAB_00137c0c;
      case 0x12:
        uVar12 = *puVar15;
        goto LAB_00137c0c;
      case 0x13:
        puVar7 = puVar15 + -1;
        pbVar19 = pbVar17;
        break;
      case 0x14:
        uVar12 = puVar15[-1];
        goto LAB_00137c0c;
      case 0x15:
        uVar12 = puVar15[-(ulong)pbVar19[1]];
LAB_00137f24:
        puVar7 = puVar15 + 1;
        *puVar7 = uVar12;
        pbVar19 = pbVar19 + 2;
        break;
      case 0x16:
        auVar21 = NEON_ext(*(undefined1 (*) [16])(puVar15 + -1),*(undefined1 (*) [16])(puVar15 + -1)
                           ,8,1);
        *puVar15 = auVar21._8_8_;
        puVar15[-1] = auVar21._0_8_;
        pbVar19 = pbVar17;
        break;
      case 0x17:
        uVar12 = *puVar15;
        *puVar15 = SUB168(*(undefined1 (*) [16])(puVar15 + -2),8);
        puVar15[-1] = SUB168(*(undefined1 (*) [16])(puVar15 + -2),0);
        puVar15[-2] = uVar12;
        pbVar19 = pbVar17;
        break;
      case 0x18:
        puVar15[-1] = *(ulong *)*puVar15;
        puVar7 = puVar15 + -1;
        pbVar19 = pbVar17;
        break;
      case 0x19:
        pbVar19 = pbVar17;
        if ((long)*puVar15 < 0) {
          uVar12 = -*puVar15;
          goto LAB_0013835c;
        }
        break;
      case 0x1a:
        puVar7 = puVar15 + -1;
        *puVar7 = *puVar7 & *puVar15;
        pbVar19 = pbVar17;
        break;
      case 0x1b:
        puVar7 = puVar15 + -1;
        uVar12 = 0;
        if (*puVar15 != 0) {
          uVar12 = (long)*puVar7 / (long)*puVar15;
        }
        *puVar7 = uVar12;
        pbVar19 = pbVar17;
        break;
      case 0x1c:
        puVar7 = puVar15 + -1;
        *puVar7 = *puVar7 - *puVar15;
        pbVar19 = pbVar17;
        break;
      case 0x1d:
        puVar7 = puVar15 + -1;
        uVar12 = *puVar15;
        lVar13 = 0;
        if (uVar12 != 0) {
          lVar13 = (long)*puVar7 / (long)uVar12;
        }
        *puVar7 = *puVar7 - lVar13 * uVar12;
        pbVar19 = pbVar17;
        break;
      case 0x1e:
        puVar7 = puVar15 + -1;
        *puVar7 = *puVar7 * *puVar15;
        pbVar19 = pbVar17;
        break;
      case 0x1f:
        uVar12 = -*puVar15;
        goto LAB_0013835c;
      case 0x20:
        uVar12 = ~*puVar15;
        goto LAB_0013835c;
      case 0x21:
        puVar7 = puVar15 + -1;
        *puVar7 = *puVar7 | *puVar15;
        pbVar19 = pbVar17;
        break;
      case 0x22:
        puVar7 = puVar15 + -1;
        *puVar7 = *puVar7 + *puVar15;
        pbVar19 = pbVar17;
        break;
      case 0x23:
        uVar10 = 0;
        uVar12 = 0;
        pbVar19 = pbVar17;
        do {
          if (pbVar11 == pbVar19) goto LAB_001383d0;
          if (0x3f < uVar10) goto LAB_001383a8;
          bVar5 = *pbVar19;
          uVar16 = (ulong)bVar5 & 0x7f;
          uVar14 = uVar16 << (uVar10 & 0x3f);
          if (uVar14 >> (uVar10 & 0x3f) != uVar16) goto LAB_001383a8;
          uVar12 = uVar14 | uVar12;
          uVar10 = uVar10 + 7;
          pbVar19 = pbVar19 + 1;
          pbVar17 = pbVar17 + 1;
        } while ((char)bVar5 < '\0');
        uVar12 = *puVar15 + uVar12;
        goto LAB_0013835c;
      case 0x24:
        puVar7 = puVar15 + -1;
        *puVar7 = *puVar7 << (*puVar15 & 0x3f);
        pbVar19 = pbVar17;
        break;
      case 0x25:
        puVar7 = puVar15 + -1;
        *puVar7 = *puVar7 >> (*puVar15 & 0x3f);
        pbVar19 = pbVar17;
        break;
      case 0x26:
        puVar7 = puVar15 + -1;
        *puVar7 = (long)*puVar7 >> (*puVar15 & 0x3f);
        pbVar19 = pbVar17;
        break;
      case 0x27:
        puVar7 = puVar15 + -1;
        *puVar7 = *puVar7 ^ *puVar15;
        pbVar19 = pbVar17;
        break;
      case 0x28:
        puVar7 = puVar15 + -1;
        pbVar19 = pbVar19 + 3;
        if (*puVar15 != 0) {
          pbVar19 = pbVar19 + *(short *)pbVar17;
        }
        break;
      case 0x29:
        puVar7 = puVar15 + -1;
        *puVar7 = (ulong)(*puVar7 == *puVar15);
        pbVar19 = pbVar17;
        break;
      case 0x2a:
        puVar7 = puVar15 + -1;
        *puVar7 = (ulong)(*puVar15 <= *puVar7);
        pbVar19 = pbVar17;
        break;
      case 0x2b:
        puVar7 = puVar15 + -1;
        *puVar7 = (ulong)(*puVar15 < *puVar7);
        pbVar19 = pbVar17;
        break;
      case 0x2c:
        puVar7 = puVar15 + -1;
        *puVar7 = (ulong)(*puVar7 <= *puVar15);
        pbVar19 = pbVar17;
        break;
      case 0x2d:
        puVar7 = puVar15 + -1;
        *puVar7 = (ulong)(*puVar7 < *puVar15);
        pbVar19 = pbVar17;
        break;
      case 0x2e:
        puVar7 = puVar15 + -1;
        *puVar7 = (ulong)(*puVar7 != *puVar15);
        pbVar19 = pbVar17;
        break;
      case 0x2f:
        pbVar19 = pbVar19 + (long)*(short *)(pbVar19 + 1) + 3;
        break;
      default:
        uVar12 = (ulong)bVar5 - 0x30;
        goto LAB_00137c0c;
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
      case 0x5c:
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
        uVar12 = *(ulong *)(param_3 + (ulong)(bVar5 - 0x50) * 8);
        goto LAB_00137c0c;
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
      case 0x80:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x84:
      case 0x85:
      case 0x86:
      case 0x87:
      case 0x88:
      case 0x89:
      case 0x8a:
      case 0x8b:
      case 0x8c:
      case 0x8d:
      case 0x8e:
      case 0x8f:
        uVar12 = 0;
        uVar10 = 0;
        pbVar19 = pbVar17;
        do {
          if (pbVar11 == pbVar19) goto LAB_00138380;
          bVar4 = *pbVar19;
          pbVar17 = pbVar17 + 1;
          uVar14 = uVar12 & 0x3f;
          uVar12 = uVar12 + 7;
          uVar10 = ((ulong)bVar4 & 0x7f) << uVar14 | uVar10;
          pbVar19 = pbVar19 + 1;
        } while ((char)bVar4 < '\0');
        uVar14 = -1L << (uVar12 & 0x3f);
        if (((uint)((int)uVar12 - 7U < 0x39) & (bVar4 & 0x40) >> 6) == 0) {
          uVar14 = 0;
        }
        puVar7 = puVar1;
        if (((uVar18 != 0x92) && (puVar7 = puVar3, uVar18 != 0x6f)) &&
           (puVar7 = puVar2, bVar5 != 0x6e)) {
          if (0x1f < uVar18 - 0x70) {
LAB_00138408:
            pcVar8 = "getRegister";
            pcVar9 = "unsupported arm64 register";
            goto LAB_001383f4;
          }
          puVar7 = (ulong *)(param_3 + (ulong)(uVar18 - 0x70) * 8);
        }
        uVar12 = *puVar7 + (uVar10 | uVar14);
        goto LAB_00137c0c;
      case 0x90:
        uVar12 = 0;
        uVar10 = 0;
        pbVar19 = pbVar17;
        do {
          if (pbVar11 == pbVar19) goto LAB_001383d0;
          if (0x3f < uVar12) goto LAB_001383a8;
          bVar5 = *pbVar19;
          uVar16 = (ulong)bVar5 & 0x7f;
          uVar14 = uVar16 << (uVar12 & 0x3f);
          if (uVar14 >> (uVar12 & 0x3f) != uVar16) goto LAB_001383a8;
          uVar10 = uVar14 | uVar10;
          uVar12 = uVar12 + 7;
          pbVar19 = pbVar19 + 1;
          pbVar17 = pbVar17 + 1;
        } while ((char)bVar5 < '\0');
        uVar18 = (uint)uVar10;
        puVar7 = puVar1;
        if (((uVar18 != 0x22) && (puVar7 = puVar3, uVar18 != 0xffffffff)) &&
           (puVar7 = puVar2, uVar18 != 0xfffffffe)) {
          if (0x1f < uVar18) goto LAB_00138408;
          puVar7 = (ulong *)(param_3 + (uVar10 & 0xffffffff) * 8);
        }
        uVar12 = *puVar7;
        goto LAB_00137c0c;
      case 0x91:
        pcVar8 = "evaluateExpression";
        pcVar9 = "DW_OP_fbreg not implemented";
        goto LAB_001383f4;
      case 0x92:
        uVar12 = 0;
        uVar10 = 0;
        pbVar6 = pbVar19 + 2;
        pbVar19 = pbVar17;
        do {
          pbVar17 = pbVar6;
          if (pbVar11 == pbVar19) goto LAB_001383d0;
          if (0x3f < uVar12) goto LAB_001383a8;
          bVar5 = *pbVar19;
          uVar16 = (ulong)bVar5 & 0x7f;
          uVar14 = uVar16 << (uVar12 & 0x3f);
          if (uVar14 >> (uVar12 & 0x3f) != uVar16) goto LAB_001383a8;
          uVar10 = uVar14 | uVar10;
          uVar12 = uVar12 + 7;
          pbVar19 = pbVar19 + 1;
          pbVar6 = pbVar17 + 1;
        } while ((char)bVar5 < '\0');
        uVar12 = 0;
        uVar14 = 0;
        do {
          if (pbVar11 == pbVar19) goto LAB_00138380;
          bVar5 = *pbVar19;
          pbVar17 = pbVar17 + 1;
          uVar16 = uVar12 & 0x3f;
          uVar12 = uVar12 + 7;
          uVar14 = ((ulong)bVar5 & 0x7f) << uVar16 | uVar14;
          pbVar19 = pbVar19 + 1;
        } while ((char)bVar5 < '\0');
        uVar16 = -1L << (uVar12 & 0x3f);
        if (((uint)((int)uVar12 - 7U < 0x39) & (bVar5 & 0x40) >> 6) == 0) {
          uVar16 = 0;
        }
        uVar18 = (uint)uVar10;
        puVar7 = puVar1;
        if (((uVar18 != 0x22) && (puVar7 = puVar3, uVar18 != 0xffffffff)) &&
           (puVar7 = puVar2, uVar18 != 0xfffffffe)) {
          if (0x1f < uVar18) goto LAB_00138408;
          puVar7 = (ulong *)(param_3 + (uVar10 & 0xffffffff) * 8);
        }
        uVar12 = *puVar7 + (uVar14 | uVar16);
LAB_00137c0c:
        puVar15[1] = uVar12;
        puVar7 = puVar15 + 1;
        pbVar19 = pbVar17;
        break;
      case 0x93:
        pcVar8 = "evaluateExpression";
        pcVar9 = "DW_OP_piece not implemented";
        goto LAB_001383f4;
      case 0x94:
        if (7 < pbVar19[1] - 1) {
code_r0x001384b8:
          pcVar8 = "evaluateExpression";
          pcVar9 = "DW_OP_deref_size with bad size";
          goto LAB_001383f4;
        }
        puVar20 = (ulong *)*puVar15;
        pbVar17 = pbVar19 + 2;
        switch((uint)pbVar19[1]) {
        case 1:
          uVar12 = (ulong)(byte)*puVar20;
          break;
        case 2:
          uVar12 = (ulong)(ushort)*puVar20;
          break;
        default:
          goto code_r0x001384b8;
        case 4:
          uVar12 = (ulong)(uint)*puVar20;
          break;
        case 8:
          uVar12 = *puVar20;
        }
LAB_0013835c:
        *puVar15 = uVar12;
        pbVar19 = pbVar17;
      }
      puVar15 = puVar7;
    } while (pbVar19 < pbVar11);
    param_4 = *puVar7;
  }
  return param_4;
LAB_00138380:
  pcVar8 = "getSLEB128";
  pcVar9 = "truncated sleb128 expression";
  goto LAB_001383f4;
LAB_001383d0:
  pcVar8 = "getULEB128";
  pcVar9 = "truncated uleb128 expression";
  goto LAB_001383f4;
LAB_001383a8:
  pcVar8 = "getULEB128";
  pcVar9 = "malformed uleb128 expression";
LAB_001383f4:
  __stream = (FILE *)(PTR___sF_001412c0 + 0x130);
  fprintf(__stream,"libunwind: %s - %s\n",pcVar8,pcVar9);
  fflush(__stream);
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 001384e0  FUN_001384e0 =====

undefined8 FUN_001384e0(long param_1,ulong param_2,long *param_3,uint param_4)

{
  byte bVar1;
  undefined *__src;
  ulong uVar2;
  undefined *__dest;
  long *plVar3;
  size_t __n;
  long lVar4;
  undefined1 auStack_6e8 [32];
  undefined8 local_6c8;
  long local_6b0;
  undefined4 uStack_6a8;
  long local_698;
  long local_690;
  undefined8 uStack_688;
  undefined1 auStack_680 [16];
  uint local_670;
  
  if (((param_4 == 0) ||
      (uVar2 = FUN_00138990(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],
                            param_3[2] + (ulong)param_4,&local_6b0,auStack_6e8), (uVar2 & 1) == 0))
     && ((param_3[4] == 0 ||
         (uVar2 = FUN_00138bf8(*(undefined8 *)(param_1 + 8),param_2,param_3[4],(int)param_3[5],
                               &local_6b0,auStack_6e8), (uVar2 & 1) == 0)))) {
    lVar4 = *param_3;
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00145914);
    if (PTR_DAT_00145660 < PTR_DAT_00145668) {
      plVar3 = (long *)PTR_DAT_00145660;
      if (lVar4 == -1) {
        do {
          if (((ulong)plVar3[1] <= param_2) && (param_2 < (ulong)plVar3[2])) goto LAB_001385e8;
          plVar3 = plVar3 + 4;
        } while (plVar3 < PTR_DAT_00145668);
      }
      else {
        do {
          if (((*plVar3 == lVar4) && ((ulong)plVar3[1] <= param_2)) && (param_2 < (ulong)plVar3[2]))
          goto LAB_001385e8;
          plVar3 = plVar3 + 4;
        } while (plVar3 < PTR_DAT_00145668);
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00145914);
    goto LAB_00138630;
  }
LAB_00138650:
  bVar1 = 1;
LAB_00138654:
  lVar4 = *param_3;
  memset(auStack_680,0,0x618);
  uVar2 = FUN_00136374(*(undefined8 *)(param_1 + 8),&local_6b0,auStack_6e8,param_2,4,auStack_680);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  *(long *)(param_1 + 0x220) = local_698;
  *(undefined8 *)(param_1 + 0x230) = uStack_688;
  *(long *)(param_1 + 0x228) = local_690;
  *(undefined8 *)(param_1 + 0x238) = local_6c8;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0x3000000;
  *(ulong *)(param_1 + 0x240) = (ulong)local_670;
  *(long *)(param_1 + 600) = local_6b0;
  *(undefined4 *)(param_1 + 0x254) = uStack_6a8;
  *(long *)(param_1 + 0x260) = lVar4;
  if ((!(bool)(param_4 != 0 | bVar1 ^ 1)) && (param_3[4] == 0)) {
    lVar4 = *param_3;
    pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00145914);
    __src = PTR_DAT_00145660;
    if (DAT_00145670 <= PTR_DAT_00145668) {
      __n = (long)DAT_00145670 - (long)PTR_DAT_00145660;
      __dest = (undefined *)malloc(__n * 4);
      memcpy(__dest,__src,__n);
      if ((undefined8 *)__src != &DAT_00145950) {
        free(__src);
      }
      PTR_DAT_00145668 = __dest + ((long)__n >> 5) * 0x20;
      DAT_00145670 = __dest + ((long)__n >> 3) * 0x20;
      PTR_DAT_00145660 = __dest;
    }
    *(long *)PTR_DAT_00145668 = lVar4;
    *(long *)((long)PTR_DAT_00145668 + 8) = local_698;
    *(long *)((long)PTR_DAT_00145668 + 0x18) = local_6b0;
    *(long *)((long)PTR_DAT_00145668 + 0x10) = local_690;
    PTR_DAT_00145668 = (undefined *)((long)PTR_DAT_00145668 + 0x20);
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00145914);
  }
  return 1;
LAB_001385e8:
  lVar4 = plVar3[3];
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00145914);
  if ((lVar4 != 0) &&
     (uVar2 = FUN_00138990(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],lVar4,
                           &local_6b0,auStack_6e8), (uVar2 & 1) != 0)) {
    bVar1 = 0;
    goto LAB_00138654;
  }
LAB_00138630:
  uVar2 = FUN_00138990(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],0,&local_6b0,
                       auStack_6e8);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  goto LAB_00138650;
}


// ===== 001387c0  FUN_001387c0 =====

undefined8 FUN_001387c0(ulong *param_1,undefined8 param_2,undefined8 *param_3)

{
  FILE *__s;
  ulong uVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  char *local_68;
  
  uVar14 = (ulong)(ushort)param_1[3];
  if (uVar14 != 0) {
    uVar7 = param_3[2];
    uVar15 = *param_1;
    if (uVar15 <= uVar7) {
      uVar6 = param_1[2];
      lVar9 = 0;
      do {
        if (*(int *)(uVar6 + lVar9) == 1) {
          uVar1 = *(long *)(uVar6 + lVar9 + 0x10) + uVar15;
          if ((uVar1 <= uVar7) &&
             (uVar11 = *(ulong *)(uVar6 + lVar9 + 0x28), uVar7 < uVar11 + uVar1)) {
            puVar8 = (ulong *)param_3[1];
            uVar7 = uVar14 + 0xffffffff;
            __s = (FILE *)(PTR___sF_001412c0 + 0x130);
            *puVar8 = uVar1;
            puVar8[1] = uVar11;
            while( true ) {
              if (*(int *)(uVar6 + (uVar7 & 0xffffffff) * 0x38) == 0x6474e550) {
                lVar9 = uVar6 + (uVar7 & 0xffffffff) * 0x38;
                lVar10 = param_3[1];
                pcVar2 = (char *)(*(long *)(lVar9 + 0x10) + uVar15);
                *(char **)(lVar10 + 0x20) = pcVar2;
                uVar12 = *(undefined8 *)(lVar9 + 0x28);
                local_68 = pcVar2 + 1;
                *(undefined8 *)(lVar10 + 0x28) = uVar12;
                uVar13 = *param_3;
                if (*pcVar2 == '\x01') {
                  cVar3 = pcVar2[2];
                  local_68 = pcVar2 + 4;
                  uVar5 = FUN_00137874(uVar13,&local_68,uVar12,pcVar2[1],pcVar2);
                  if (cVar3 != -1) {
                    FUN_00137874(uVar13,&local_68,uVar12,cVar3,pcVar2);
                  }
                  lVar9 = param_3[1];
                  *(undefined8 *)(lVar9 + 0x10) = uVar5;
                  *(undefined8 *)(lVar9 + 0x18) = 0xffffffffffffffff;
                  return 1;
                }
                fwrite("libunwind: Unsupported .eh_frame_hdr version\n",0x2d,1,__s);
              }
              uVar4 = (int)uVar14 - 1;
              uVar14 = (ulong)uVar4;
              if ((uVar4 & 0xffff) == 0) break;
              uVar6 = param_1[2];
              uVar7 = uVar7 - 1;
            }
            return 0;
          }
        }
        lVar9 = lVar9 + 0x38;
      } while (uVar14 * 0x38 - lVar9 != 0);
    }
  }
  return 0;
}


// ===== 00138990  FUN_00138990 =====

undefined8
FUN_00138990(undefined8 param_1,ulong param_2,uint *param_3,long param_4,uint *param_5,
            undefined8 *param_6,long param_7)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint *puVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  FILE *__stream;
  uint *puVar15;
  uint *local_68;
  
  puVar15 = (uint *)(param_4 + (long)param_3);
  puVar1 = param_3;
  if (param_5 != (uint *)0x0) {
    puVar1 = param_5;
  }
  if (param_4 == -1) {
    puVar15 = (uint *)0xffffffffffffffff;
  }
  do {
    do {
      puVar2 = puVar1;
      if (puVar15 <= puVar2) {
        return 0;
      }
      local_68 = puVar2 + 1;
      uVar10 = (ulong)*puVar2;
      if (*puVar2 == 0xffffffff) {
        uVar10 = *(ulong *)(puVar2 + 1);
        local_68 = puVar2 + 3;
      }
      if (uVar10 == 0) {
        return 0;
      }
      puVar1 = (uint *)((long)local_68 + uVar10);
    } while ((((*local_68 == 0) ||
              (puVar7 = (uint *)((long)local_68 - (ulong)*local_68), puVar7 < param_3)) ||
             (puVar15 <= puVar7)) || (lVar4 = FUN_00138dd4(param_1,puVar7,param_7), lVar4 != 0));
    local_68 = local_68 + 1;
    uVar10 = FUN_00137874(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x18),0);
    lVar4 = FUN_00137874(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x18) & 0xf,0);
  } while ((param_2 <= uVar10) || (lVar4 + uVar10 < param_2));
  param_6[5] = 0;
  puVar15 = local_68;
  if (*(char *)(param_7 + 0x31) != '\0') {
    uVar12 = 0;
    uVar9 = 0;
    lVar11 = -(long)local_68;
    do {
      if (puVar1 == puVar15) {
        pcVar8 = "truncated uleb128 expression";
        goto LAB_00138be4;
      }
      if (0x3f < uVar12) {
LAB_00138b98:
        pcVar8 = "malformed uleb128 expression";
LAB_00138be4:
        __stream = (FILE *)(PTR___sF_001412c0 + 0x130);
        fprintf(__stream,"libunwind: %s - %s\n","getULEB128",pcVar8);
        fflush(__stream);
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar3 = *puVar15;
      uVar14 = (ulong)(byte)uVar3 & 0x7f;
      uVar13 = uVar14 << (uVar12 & 0x3f);
      if (uVar13 >> (uVar12 & 0x3f) != uVar14) goto LAB_00138b98;
      uVar9 = uVar13 | uVar9;
      uVar12 = uVar12 + 7;
      puVar15 = (uint *)((long)puVar15 + 1);
      lVar11 = lVar11 + -1;
    } while ((char)(byte)uVar3 < '\0');
    puVar15 = (uint *)(uVar9 - lVar11);
    if ((*(byte *)(param_7 + 0x19) != 0xff) &&
       (local_68 = (uint *)-lVar11,
       lVar5 = FUN_00137874(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x19) & 0xf,0), lVar5 != 0)
       ) {
      local_68 = (uint *)-lVar11;
      uVar6 = FUN_00137874(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x19),0);
      param_6[5] = uVar6;
    }
  }
  param_6[2] = puVar15;
  param_6[3] = uVar10;
  param_6[4] = lVar4 + uVar10;
  *param_6 = puVar2;
  param_6[1] = (long)puVar1 - (long)puVar2;
  return 1;
}


// ===== 00138bf8  FUN_00138bf8 =====

undefined8
FUN_00138bf8(undefined8 param_1,ulong param_2,char *param_3,ulong param_4,long param_5,
            undefined8 param_6)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  char *local_68;
  
  local_68 = param_3 + 1;
  if (*param_3 == '\x01') {
    local_68 = param_3 + 4;
    cVar2 = param_3[2];
    cVar3 = param_3[3];
    pcVar1 = param_3 + (param_4 & 0xffffffff);
    FUN_00137874(param_1,&local_68,pcVar1,param_3[1],param_3);
    if (cVar2 != -1) {
      uVar6 = FUN_00137874(param_1,&local_68,pcVar1,cVar2,param_3);
      pcVar4 = local_68;
      if (uVar6 == 0) {
        return 0;
      }
      lVar7 = FUN_001391c8(cVar3);
      lVar12 = 0;
      do {
        if (uVar6 < 2) {
          pcVar10 = pcVar4 + lVar12 * lVar7;
          break;
        }
        uVar11 = uVar6 >> 1;
        pcVar10 = pcVar4 + (uVar11 + lVar12) * lVar7;
        local_68 = pcVar10;
        uVar8 = FUN_00137874(param_1,&local_68,pcVar1,cVar3,param_3);
        uVar6 = uVar6 - uVar11;
        lVar5 = uVar11 + lVar12;
        if (param_2 <= uVar8) {
          uVar6 = uVar11;
          lVar5 = lVar12;
        }
        lVar12 = lVar5;
      } while (uVar8 != param_2);
      local_68 = pcVar10;
      FUN_00137874(param_1,&local_68,pcVar1,cVar3,param_3);
      uVar9 = FUN_00137874(param_1,&local_68,pcVar1,cVar3,param_3);
      lVar12 = FUN_001357c0(param_1,uVar9,param_5,param_6);
      if (((lVar12 == 0) && (*(ulong *)(param_5 + 0x18) <= param_2)) &&
         (param_2 < *(ulong *)(param_5 + 0x20))) {
        return 1;
      }
    }
  }
  else {
    fwrite("libunwind: Unsupported .eh_frame_hdr version\n",0x2d,1,
           (FILE *)(PTR___sF_001412c0 + 0x130));
  }
  return 0;
}


// ===== 00138dd4  FUN_00138dd4 =====

char * FUN_00138dd4(undefined8 param_1,uint *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  uint *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  FILE *__stream;
  byte *pbVar18;
  byte *local_38;
  
  *(undefined1 *)((long)param_3 + 0x33) = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  *(undefined2 *)(param_3 + 6) = 0;
  *param_3 = param_2;
  *(undefined4 *)(param_3 + 3) = 0xff00;
  puVar7 = param_2 + 1;
  uVar10 = (ulong)*param_2;
  if (*param_2 == 0xffffffff) {
    uVar10 = *(ulong *)(param_2 + 1);
    puVar7 = param_2 + 3;
    pbVar1 = (byte *)(uVar10 + (long)puVar7);
  }
  else {
    pbVar1 = (byte *)((long)puVar7 + uVar10);
  }
  if (uVar10 == 0) {
    return (char *)0x0;
  }
  if (*puVar7 != 0) {
    return "CIE ID is not zero";
  }
  uVar3 = puVar7[1];
  if ((byte)((byte)uVar3 | 2) != 3) {
    return "CIE version is not 1 or 3";
  }
  pbVar18 = (byte *)((long)puVar7 + 5);
  lVar11 = -5 - (long)puVar7;
  pbVar8 = pbVar18;
  do {
    local_38 = pbVar8 + 1;
    bVar2 = *pbVar8;
    lVar11 = lVar11 + -1;
    pbVar8 = local_38;
  } while (bVar2 != 0);
  lVar13 = 0;
  uVar10 = 0;
  uVar15 = 0;
  do {
    if ((long)pbVar1 - (long)local_38 == lVar13) goto LAB_00139168;
    if (0x3f < uVar10) goto LAB_00139140;
    pbVar8 = local_38 + lVar13;
    uVar17 = (ulong)*pbVar8 & 0x7f;
    uVar16 = uVar17 << (uVar10 & 0x3f);
    if (uVar16 >> (uVar10 & 0x3f) != uVar17) goto LAB_00139140;
    uVar15 = uVar16 | uVar15;
    uVar10 = uVar10 + 7;
    lVar13 = lVar13 + 1;
  } while ((char)*pbVar8 < '\0');
  uVar10 = 0;
  uVar16 = 0;
  pbVar8 = local_38 + lVar13;
  *(int *)(param_3 + 5) = (int)uVar15;
  do {
    if ((long)pbVar1 - (long)local_38 == lVar13) {
      pcVar5 = "getSLEB128";
      __stream = (FILE *)(PTR___sF_001412c0 + 0x130);
      pcVar6 = "truncated sleb128 expression";
      local_38 = pbVar8;
      goto LAB_001391b4;
    }
    bVar2 = local_38[lVar13];
    lVar13 = lVar13 + 1;
    uVar16 = ((ulong)bVar2 & 0x7f) << (uVar10 & 0x3f) | uVar16;
    uVar10 = uVar10 + 7;
  } while ((char)bVar2 < '\0');
  uVar14 = (uint)(-1L << (uVar10 & 0x3f));
  if (((uint)((int)uVar10 - 7U < 0x39) & (bVar2 & 0x40) >> 6) == 0) {
    uVar14 = 0;
  }
  local_38 = local_38 + lVar13;
  *(uint *)((long)param_3 + 0x2c) = (uint)uVar16 | uVar14;
  if ((byte)uVar3 == 1) {
    *(byte *)((long)param_3 + 0x32) = *local_38;
    bVar2 = *pbVar18;
    local_38 = local_38 + 1;
  }
  else {
    uVar10 = 0;
    uVar15 = 0;
    pbVar12 = pbVar1 + (lVar11 - lVar13);
    pbVar9 = local_38;
    pbVar8 = local_38;
    do {
      if (pbVar12 == (byte *)0x0) goto LAB_00139168;
      if (0x3f < uVar10) goto LAB_00139140;
      bVar2 = *pbVar8;
      uVar17 = (ulong)bVar2 & 0x7f;
      uVar16 = uVar17 << (uVar10 & 0x3f);
      if (uVar16 >> (uVar10 & 0x3f) != uVar17) goto LAB_00139140;
      uVar15 = uVar16 | uVar15;
      uVar10 = uVar10 + 7;
      pbVar8 = pbVar8 + 1;
      pbVar9 = pbVar9 + 1;
      pbVar12 = pbVar12 + -1;
    } while ((char)bVar2 < '\0');
    *(char *)((long)param_3 + 0x32) = (char)uVar15;
    bVar2 = *pbVar18;
    local_38 = pbVar9;
  }
  if (bVar2 == 0x7a) {
    uVar10 = 0;
    pbVar9 = local_38;
    pbVar8 = local_38;
    do {
      if (pbVar1 == pbVar8) goto LAB_00139168;
      if ((0x3f < uVar10) ||
         (bVar2 = *pbVar8, 0xffffffffffffffffU >> (uVar10 & 0x3f) < ((ulong)bVar2 & 0x7f)))
      goto LAB_00139140;
      uVar10 = uVar10 + 7;
      pbVar8 = pbVar8 + 1;
      pbVar9 = pbVar9 + 1;
    } while ((char)bVar2 < '\0');
LAB_00139058:
    local_38 = pbVar9;
    pbVar9 = local_38;
    switch(*pbVar18) {
    case 0x42:
      *(undefined1 *)((long)param_3 + 0x33) = 1;
      break;
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x51:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x5b:
    case 0x5c:
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
      break;
    case 0x4c:
      pbVar18 = pbVar18 + 1;
      *(byte *)((long)param_3 + 0x19) = *local_38;
      pbVar9 = local_38 + 1;
      goto LAB_00139058;
    case 0x50:
      bVar2 = *local_38;
      *(byte *)((long)param_3 + 0x1a) = bVar2;
      *(char *)((long)param_3 + 0x1b) = (char)(local_38 + 1) - (char)param_2;
      local_38 = local_38 + 1;
      uVar4 = FUN_00137874(param_1,&local_38,pbVar1,bVar2,0);
      param_3[4] = uVar4;
      pbVar18 = pbVar18 + 1;
      pbVar9 = local_38;
      goto LAB_00139058;
    case 0x52:
      pbVar18 = pbVar18 + 1;
      *(byte *)(param_3 + 3) = *local_38;
      pbVar9 = local_38 + 1;
      goto LAB_00139058;
    case 0x53:
      *(undefined1 *)(param_3 + 6) = 1;
      pbVar18 = pbVar18 + 1;
      goto LAB_00139058;
    case 0x7a:
      goto code_r0x00139100;
    default:
      if (*pbVar18 == 0) goto code_r0x00139110;
    }
    pbVar18 = pbVar18 + 1;
    goto LAB_00139058;
  }
LAB_00139118:
  param_3[1] = (long)pbVar1 - (long)param_2;
  param_3[2] = local_38;
  return (char *)0x0;
LAB_00139168:
  pcVar5 = "getULEB128";
  __stream = (FILE *)(PTR___sF_001412c0 + 0x130);
  pcVar6 = "truncated uleb128 expression";
  goto LAB_001391b4;
code_r0x00139110:
  param_2 = (uint *)*param_3;
  goto LAB_00139118;
code_r0x00139100:
  *(undefined1 *)((long)param_3 + 0x31) = 1;
  pbVar18 = pbVar18 + 1;
  goto LAB_00139058;
LAB_00139140:
  pcVar5 = "getULEB128";
  __stream = (FILE *)(PTR___sF_001412c0 + 0x130);
  pcVar6 = "malformed uleb128 expression";
LAB_001391b4:
  fprintf(__stream,"libunwind: %s - %s\n",pcVar5,pcVar6);
  fflush(__stream);
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 001391c8  FUN_001391c8 =====

undefined8 FUN_001391c8(uint param_1)

{
  char *pcVar1;
  FILE *__stream;
  
  switch(param_1 & 0xf) {
  case 1:
  case 9:
    pcVar1 = "Can\'t binary search on variable length encoded data.";
    break;
  case 2:
  case 10:
    return 4;
  case 3:
  case 0xb:
    return 8;
  case 4:
  case 0xc:
    return 0x10;
  default:
    pcVar1 = "Unknown DWARF encoding for search table.";
  }
  __stream = (FILE *)(PTR___sF_001412c0 + 0x130);
  fprintf(__stream,"libunwind: %s - %s\n","getTableEntrySize",pcVar1);
  fflush(__stream);
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 001392a0  FUN_001392a0 =====

char * FUN_001392a0(int param_1)

{
  if (param_1 + 2U < 0x62) {
    return (&PTR_DAT_00140d20)[(int)(param_1 + 2U)];
  }
  return "unknown register";
}


// ===== 001392cc  FUN_001392cc =====

undefined1  [16] FUN_001392cc(undefined1 (*param_1) [16])

{
  return *param_1;
}


// ===== 0013935c  FUN_0013935c =====

undefined8
FUN_0013935c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,long param_10,undefined8 param_11,undefined8 param_12,
            undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
            undefined8 param_17)

{
  undefined8 in_x9;
  undefined8 in_x10;
  undefined8 in_x11;
  undefined8 in_x12;
  undefined8 in_x13;
  undefined8 in_x14;
  undefined8 in_x15;
  undefined8 in_x16;
  undefined8 in_x17;
  undefined8 in_x18;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined8 in_d16;
  undefined8 in_d17;
  undefined8 in_d18;
  undefined8 in_d19;
  undefined8 in_d20;
  undefined8 in_d21;
  undefined8 in_d22;
  undefined8 in_d23;
  undefined8 in_d24;
  undefined8 in_d25;
  undefined8 in_d26;
  undefined8 in_d27;
  undefined8 in_d28;
  undefined8 in_d29;
  undefined8 in_d30;
  undefined8 in_d31;
  
  *(long *)param_10 = param_10;
  *(undefined8 *)(param_10 + 8) = param_11;
  *(undefined8 *)(param_10 + 0x10) = param_12;
  *(undefined8 *)(param_10 + 0x18) = param_13;
  *(undefined8 *)(param_10 + 0x20) = param_14;
  *(undefined8 *)(param_10 + 0x28) = param_15;
  *(undefined8 *)(param_10 + 0x30) = param_16;
  *(undefined8 *)(param_10 + 0x38) = param_17;
  *(undefined8 *)(param_10 + 0x40) = param_1;
  *(undefined8 *)(param_10 + 0x48) = in_x9;
  *(undefined8 *)(param_10 + 0x50) = in_x10;
  *(undefined8 *)(param_10 + 0x58) = in_x11;
  *(undefined8 *)(param_10 + 0x60) = in_x12;
  *(undefined8 *)(param_10 + 0x68) = in_x13;
  *(undefined8 *)(param_10 + 0x70) = in_x14;
  *(undefined8 *)(param_10 + 0x78) = in_x15;
  *(undefined8 *)(param_10 + 0x80) = in_x16;
  *(undefined8 *)(param_10 + 0x88) = in_x17;
  *(undefined8 *)(param_10 + 0x90) = in_x18;
  *(undefined8 *)(param_10 + 0x98) = unaff_x19;
  *(undefined8 *)(param_10 + 0xa0) = unaff_x20;
  *(undefined8 *)(param_10 + 0xa8) = unaff_x21;
  *(undefined8 *)(param_10 + 0xb0) = unaff_x22;
  *(undefined8 *)(param_10 + 0xb8) = unaff_x23;
  *(undefined8 *)(param_10 + 0xc0) = unaff_x24;
  *(undefined8 *)(param_10 + 200) = unaff_x25;
  *(undefined8 *)(param_10 + 0xd0) = unaff_x26;
  *(undefined8 *)(param_10 + 0xd8) = unaff_x27;
  *(undefined8 *)(param_10 + 0xe0) = unaff_x28;
  *(undefined8 *)(param_10 + 0xe8) = unaff_x29;
  *(undefined8 *)(param_10 + 0xf0) = unaff_x30;
  *(BADSPACEBASE **)(param_10 + 0xf8) = register0x00000008;
  *(undefined8 *)(param_10 + 0x100) = unaff_x30;
  *(undefined8 *)(param_10 + 0x110) = param_2;
  *(undefined8 *)(param_10 + 0x118) = param_3;
  *(undefined8 *)(param_10 + 0x120) = param_4;
  *(undefined8 *)(param_10 + 0x128) = param_5;
  *(undefined8 *)(param_10 + 0x130) = param_6;
  *(undefined8 *)(param_10 + 0x138) = param_7;
  *(undefined8 *)(param_10 + 0x140) = param_8;
  *(undefined8 *)(param_10 + 0x148) = param_9;
  *(undefined8 *)(param_10 + 0x150) = unaff_d8;
  *(undefined8 *)(param_10 + 0x158) = unaff_d9;
  *(undefined8 *)(param_10 + 0x160) = unaff_d10;
  *(undefined8 *)(param_10 + 0x168) = unaff_d11;
  *(undefined8 *)(param_10 + 0x170) = unaff_d12;
  *(undefined8 *)(param_10 + 0x178) = unaff_d13;
  *(undefined8 *)(param_10 + 0x180) = unaff_d14;
  *(undefined8 *)(param_10 + 0x188) = unaff_d15;
  *(undefined8 *)(param_10 + 400) = in_d16;
  *(undefined8 *)(param_10 + 0x198) = in_d17;
  *(undefined8 *)(param_10 + 0x1a0) = in_d18;
  *(undefined8 *)(param_10 + 0x1a8) = in_d19;
  *(undefined8 *)(param_10 + 0x1b0) = in_d20;
  *(undefined8 *)(param_10 + 0x1b8) = in_d21;
  *(undefined8 *)(param_10 + 0x1c0) = in_d22;
  *(undefined8 *)(param_10 + 0x1c8) = in_d23;
  *(undefined8 *)(param_10 + 0x1d0) = in_d24;
  *(undefined8 *)(param_10 + 0x1d8) = in_d25;
  *(undefined8 *)(param_10 + 0x1e0) = in_d26;
  *(undefined8 *)(param_10 + 0x1e8) = in_d27;
  *(undefined8 *)(param_10 + 0x1f0) = in_d28;
  *(undefined8 *)(param_10 + 0x1f8) = in_d29;
  *(undefined8 *)(param_10 + 0x200) = in_d30;
  *(undefined8 *)(param_10 + 0x208) = in_d31;
  return 0;
}


// ===== 00139400  FUN_00139400 =====

void FUN_00139400(void)

{
  (*(code *)PTR_00141350)();
  return;
}


// ===== 00139420  <EXTERNAL>::__cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00141358)();
  return;
}


// ===== 00139430  <EXTERNAL>::__cxa_atexit =====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00141360)();
  return;
}


// ===== 00139440  resampler::MultiChannelResampler::make =====

void resampler::MultiChannelResampler::make(void)

{
  (*(code *)PTR_make_00141368)();
  return;
}


// ===== 00139450  operator.new[] =====

void * operator_new__(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new___00141370)();
  return pvVar1;
}


// ===== 00139460  populateInputBuffer =====

void populateInputBuffer(signed *param_1,int param_2,float *param_3,int param_4,int param_5)

{
  (*(code *)PTR_populateInputBuffer_00141378)(param_1,param_2,param_3,param_4,param_5);
  return;
}


// ===== 00139470  operator.delete[] =====

void operator_delete__(void *param_1)

{
  (*(code *)PTR_operator_delete___00141380)();
  return;
}


// ===== 00139480  operator.new =====

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00141388)();
  return pvVar1;
}


// ===== 00139490  <EXTERNAL>::memset =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00141390)(__s,__c);
  return pvVar1;
}


// ===== 001394a0  resampler::IntegerRatio::reduce =====

void __thiscall resampler::IntegerRatio::reduce(IntegerRatio *this)

{
  (*(code *)PTR_reduce_00141398)();
  return;
}


// ===== 001394b0  std::__ndk1::__vector_base_common<true>::__throw_length_error =====

void std::__ndk1::__vector_base_common<true>::__throw_length_error(void)

{
  (*(code *)PTR___throw_length_error_001413a0)();
  return;
}


// ===== 001394c0  <EXTERNAL>::__stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_001413a8)();
  return;
}


// ===== 001394d0  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001413b0)();
  return;
}


// ===== 001394e0  resampler::MultiChannelResampler::Builder::build =====

void __thiscall resampler::MultiChannelResampler::Builder::build(Builder *this)

{
  (*(code *)PTR_build_001413b8)();
  return;
}


// ===== 001394f0  resampler::LinearResampler::LinearResampler =====

void __thiscall resampler::LinearResampler::LinearResampler(LinearResampler *this,Builder *param_1)

{
  (*(code *)PTR_LinearResampler_001413c0)();
  return;
}


// ===== 00139500  resampler::PolyphaseResamplerMono::PolyphaseResamplerMono =====

void __thiscall
resampler::PolyphaseResamplerMono::PolyphaseResamplerMono
          (PolyphaseResamplerMono *this,Builder *param_1)

{
  (*(code *)PTR_PolyphaseResamplerMono_001413c8)();
  return;
}


// ===== 00139510  resampler::SincResamplerStereo::SincResamplerStereo =====

void __thiscall
resampler::SincResamplerStereo::SincResamplerStereo(SincResamplerStereo *this,Builder *param_1)

{
  (*(code *)PTR_SincResamplerStereo_001413d0)();
  return;
}


// ===== 00139520  resampler::SincResampler::SincResampler =====

void __thiscall resampler::SincResampler::SincResampler(SincResampler *this,Builder *param_1)

{
  (*(code *)PTR_SincResampler_001413d8)();
  return;
}


// ===== 00139530  resampler::PolyphaseResamplerStereo::PolyphaseResamplerStereo =====

void __thiscall
resampler::PolyphaseResamplerStereo::PolyphaseResamplerStereo
          (PolyphaseResamplerStereo *this,Builder *param_1)

{
  (*(code *)PTR_PolyphaseResamplerStereo_001413e0)();
  return;
}


// ===== 00139540  resampler::PolyphaseResampler::PolyphaseResampler =====

void __thiscall
resampler::PolyphaseResampler::PolyphaseResampler(PolyphaseResampler *this,Builder *param_1)

{
  (*(code *)PTR_PolyphaseResampler_001413e8)();
  return;
}


// ===== 00139550  <EXTERNAL>::sinf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float sinf(float __x)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_sinf_001413f0)();
  return fVar1;
}


// ===== 00139560  std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append =====

void __thiscall
std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append
          (vector<float,std::__ndk1::allocator<float>> *this,ulong param_1)

{
  (*(code *)PTR___append_001413f8)();
  return;
}


// ===== 00139570  <EXTERNAL>::cosh =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double cosh(double __x)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_cosh_00141400)();
  return dVar1;
}


// ===== 00139580  std::__ndk1::__vector_base_common<true>::__throw_out_of_range =====

void std::__ndk1::__vector_base_common<true>::__throw_out_of_range(void)

{
  (*(code *)PTR___throw_out_of_range_00141408)();
  return;
}


// ===== 00139590  __cxa_allocate_exception =====

void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_00141410)();
  return;
}


// ===== 001395a0  __cxa_throw =====

void __cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_00141418)();
  return;
}


// ===== 001395b0  __cxa_free_exception =====

void __cxa_free_exception(void)

{
  (*(code *)PTR___cxa_free_exception_00141420)();
  return;
}


// ===== 001395c0  std::logic_error::logic_error =====

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
  (*(code *)PTR_logic_error_00141428)();
  return;
}


// ===== 001395d0  <EXTERNAL>::memcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00141430)();
  return pvVar1;
}


// ===== 001395e0  resampler::MultiChannelResampler::MultiChannelResampler =====

void __thiscall
resampler::MultiChannelResampler::MultiChannelResampler
          (MultiChannelResampler *this,Builder *param_1)

{
  (*(code *)PTR_MultiChannelResampler_00141438)();
  return;
}


// ===== 001395f0  resampler::MultiChannelResampler::generateCoefficients =====

void __thiscall
resampler::MultiChannelResampler::generateCoefficients
          (MultiChannelResampler *this,int param_1,int param_2,int param_3,double param_4,
          float param_5)

{
  (*(code *)PTR_generateCoefficients_00141440)(this,param_1,param_2,param_3);
  return;
}


// ===== 00139600  resampler::PolyphaseResampler::PolyphaseResampler =====

void __thiscall
resampler::PolyphaseResampler::PolyphaseResampler(PolyphaseResampler *this,Builder *param_1)

{
  (*(code *)PTR_PolyphaseResampler_00141448)();
  return;
}


// ===== 00139610  resampler::SincResampler::SincResampler =====

void __thiscall resampler::SincResampler::SincResampler(SincResampler *this,Builder *param_1)

{
  (*(code *)PTR_SincResampler_00141450)();
  return;
}


// ===== 00139620  std::bad_alloc::bad_alloc =====

void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  (*(code *)PTR_bad_alloc_00141458)();
  return;
}


// ===== 00139630  <EXTERNAL>::malloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00141460)();
  return pvVar1;
}


// ===== 00139640  std::get_new_handler =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::get_new_handler(void)

{
  (*(code *)PTR_get_new_handler_00141468)();
  return;
}


// ===== 00139650  __cxa_begin_catch =====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_00141470)();
  return;
}


// ===== 00139660  __cxa_end_catch =====

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_00141478)();
  return;
}


// ===== 00139670  std::terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
  (*(code *)PTR_terminate_00141480)();
  return;
}


// ===== 00139680  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00141488)();
  return;
}


// ===== 00139690  <EXTERNAL>::posix_memalign =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_memalign(void **__memptr,size_t __alignment,size_t __size)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_posix_memalign_00141490)((int)__memptr);
  return iVar1;
}


// ===== 001396a0  operator.new =====

void * operator_new(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00141498)();
  return pvVar1;
}


// ===== 001396b0  operator.new[] =====

void * operator_new__(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new___001414a0)();
  return pvVar1;
}


// ===== 001396c0  operator.delete =====

void operator_delete(void)

{
  (*(code *)PTR_operator_delete_001414a8)();
  return;
}


// ===== 001396d0  operator.delete[] =====

void operator_delete__(void)

{
  (*(code *)PTR_operator_delete___001414b0)();
  return;
}


// ===== 001396e0  <EXTERNAL>::__strlen_chk =====

void __strlen_chk(void)

{
  (*(code *)PTR___strlen_chk_001414b8)();
  return;
}


// ===== 001396f0  std::bad_alloc::~bad_alloc =====

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  (*(code *)PTR__bad_alloc_001414c0)();
  return;
}


// ===== 00139700  __cxa_call_unexpected =====

void __cxa_call_unexpected(void)

{
  (*(code *)PTR___cxa_call_unexpected_001414c8)();
  return;
}


// ===== 00139710  __cxa_get_globals =====

void __cxa_get_globals(void)

{
  (*(code *)PTR___cxa_get_globals_001414d0)();
  return;
}


// ===== 00139720  std::get_unexpected =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::get_unexpected(void)

{
  (*(code *)PTR_get_unexpected_001414d8)();
  return;
}


// ===== 00139730  std::get_terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::get_terminate(void)

{
  (*(code *)PTR_get_terminate_001414e0)();
  return;
}


// ===== 00139740  __cxa_get_globals_fast =====

void __cxa_get_globals_fast(void)

{
  (*(code *)PTR___cxa_get_globals_fast_001414e8)();
  return;
}


// ===== 00139750  __emutls_get_address =====

void __emutls_get_address(void)

{
  (*(code *)PTR___emutls_get_address_001414f0)();
  return;
}


// ===== 00139760  __cxa_demangle =====

void __cxa_demangle(void)

{
  (*(code *)PTR___cxa_demangle_001414f8)();
  return;
}


// ===== 00139770  <EXTERNAL>::strlen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00141500)();
  return sVar1;
}


// ===== 00139780  <EXTERNAL>::realloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_00141508)();
  return pvVar1;
}


// ===== 00139790  <EXTERNAL>::memmove =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00141510)();
  return pvVar1;
}


// ===== 001397a0  <EXTERNAL>::__memmove_chk =====

void __memmove_chk(void)

{
  (*(code *)PTR___memmove_chk_00141518)();
  return;
}


// ===== 001397b0  <EXTERNAL>::memchr =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memchr(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memchr_00141520)(__s,__c);
  return pvVar1;
}


// ===== 001397c0  <EXTERNAL>::__vsnprintf_chk =====

void __vsnprintf_chk(void)

{
  (*(code *)PTR___vsnprintf_chk_00141528)();
  return;
}


// ===== 001397d0  <EXTERNAL>::vfprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_00141530)((int)__s);
  return iVar1;
}


// ===== 001397e0  <EXTERNAL>::fputc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_00141538)(__c);
  return iVar1;
}


// ===== 001397f0  <EXTERNAL>::vasprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vasprintf(char **__ptr,char *__f,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vasprintf_00141540)((int)__ptr);
  return iVar1;
}


// ===== 00139800  <EXTERNAL>::android_set_abort_message =====

void android_set_abort_message(void)

{
  (*(code *)PTR_android_set_abort_message_00141548)();
  return;
}


// ===== 00139810  <EXTERNAL>::openlog =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void openlog(char *__ident,int __option,int __facility)

{
  (*(code *)PTR_openlog_00141550)(__ident,__option,__facility);
  return;
}


// ===== 00139820  <EXTERNAL>::syslog =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void syslog(int __pri,char *__fmt,...)

{
  (*(code *)PTR_syslog_00141558)(__pri);
  return;
}


// ===== 00139830  <EXTERNAL>::closelog =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void closelog(void)

{
  (*(code *)PTR_closelog_00141560)();
  return;
}


// ===== 00139840  <EXTERNAL>::abort =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00141568)();
  return;
}


// ===== 00139850  std::bad_alloc::~bad_alloc =====

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  (*(code *)PTR__bad_alloc_00141570)();
  return;
}


// ===== 00139860  __cxa_rethrow =====

void __cxa_rethrow(void)

{
  (*(code *)PTR___cxa_rethrow_00141578)();
  return;
}


// ===== 00139870  <EXTERNAL>::pthread_mutex_lock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_00141580)((int)__mutex);
  return iVar1;
}


// ===== 00139880  <EXTERNAL>::pthread_mutex_unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_00141588)((int)__mutex);
  return iVar1;
}


// ===== 00139890  <EXTERNAL>::calloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00141590)();
  return pvVar1;
}


// ===== 001398a0  std::type_info::~type_info =====

void __thiscall std::type_info::~type_info(type_info *this)

{
  (*(code *)PTR__type_info_00141598)();
  return;
}


// ===== 001398b0  __dynamic_cast =====

void __dynamic_cast(void)

{
  (*(code *)PTR___dynamic_cast_001415a0)();
  return;
}


// ===== 001398c0  <EXTERNAL>::strcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_001415a8)((int)__s1);
  return iVar1;
}


// ===== 001398d0  <EXTERNAL>::pthread_getspecific =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * pthread_getspecific(pthread_key_t __key)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_pthread_getspecific_001415b0)(__key);
  return pvVar1;
}


// ===== 001398e0  <EXTERNAL>::pthread_once =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_once(pthread_once_t *__once_control,__init_routine *__init_routine)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_once_001415b8)((int)__once_control);
  return iVar1;
}


// ===== 001398f0  <EXTERNAL>::pthread_setspecific =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_setspecific(pthread_key_t __key,void *__pointer)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_setspecific_001415c0)(__key);
  return iVar1;
}


// ===== 00139900  <EXTERNAL>::pthread_key_delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_delete(pthread_key_t __key)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_key_delete_001415c8)(__key);
  return iVar1;
}


// ===== 00139910  <EXTERNAL>::pthread_key_create =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_create(pthread_key_t *__key,__destr_function *__destr_function)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_key_create_001415d0)((int)__key);
  return iVar1;
}


// ===== 00139920  <EXTERNAL>::fprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_001415d8)((int)__stream);
  return iVar1;
}


// ===== 00139930  <EXTERNAL>::fflush =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_001415e0)((int)__stream);
  return iVar1;
}


// ===== 00139940  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_wrlock_001415e8)((int)__rwlock);
  return iVar1;
}


// ===== 00139950  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_unlock_001415f0)((int)__rwlock);
  return iVar1;
}


// ===== 00139960  <EXTERNAL>::dl_iterate_phdr =====

void dl_iterate_phdr(void)

{
  (*(code *)PTR_dl_iterate_phdr_001415f8)();
  return;
}


// ===== 00139970  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_rdlock_00141600)((int)__rwlock);
  return iVar1;
}


// ===== 00139980  <EXTERNAL>::fwrite =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00141608)();
  return sVar1;
}


// ===== 00147000  <EXTERNAL>::__cxa_atexit =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00147008  <EXTERNAL>::__cxa_finalize =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00147010  <EXTERNAL>::__stack_chk_fail =====

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00147018  <EXTERNAL>::cosh =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double cosh(double __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00147020  <EXTERNAL>::memcpy =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00147028  <EXTERNAL>::memset =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00147030  <EXTERNAL>::sinf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float sinf(float __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00147038  <EXTERNAL>::free =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00147040  <EXTERNAL>::malloc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00147048  <EXTERNAL>::posix_memalign =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_memalign(void **__memptr,size_t __alignment,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00147050  <EXTERNAL>::__strlen_chk =====

/* WARNING: Control flow encountered bad instruction data */

void __strlen_chk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00147058  <EXTERNAL>::__memmove_chk =====

/* WARNING: Control flow encountered bad instruction data */

void __memmove_chk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00147060  <EXTERNAL>::__vsnprintf_chk =====

/* WARNING: Control flow encountered bad instruction data */

void __vsnprintf_chk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00147068  <EXTERNAL>::memchr =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memchr(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00147070  <EXTERNAL>::memmove =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00147078  <EXTERNAL>::realloc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00147080  <EXTERNAL>::strlen =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00147090  <EXTERNAL>::abort =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00147098  <EXTERNAL>::android_set_abort_message =====

/* WARNING: Control flow encountered bad instruction data */

void android_set_abort_message(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001470a0  <EXTERNAL>::closelog =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void closelog(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001470a8  <EXTERNAL>::fputc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001470b0  <EXTERNAL>::openlog =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void openlog(char *__ident,int __option,int __facility)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001470b8  <EXTERNAL>::syslog =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void syslog(int __pri,char *__fmt,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001470c0  <EXTERNAL>::vasprintf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vasprintf(char **__ptr,char *__f,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001470c8  <EXTERNAL>::vfprintf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001470d0  <EXTERNAL>::calloc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001470d8  <EXTERNAL>::pthread_mutex_lock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001470e0  <EXTERNAL>::pthread_mutex_unlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001470e8  <EXTERNAL>::strcmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001470f0  <EXTERNAL>::pthread_getspecific =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * pthread_getspecific(pthread_key_t __key)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001470f8  <EXTERNAL>::pthread_key_create =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_create(pthread_key_t *__key,__destr_function *__destr_function)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00147100  <EXTERNAL>::pthread_key_delete =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_delete(pthread_key_t __key)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00147108  <EXTERNAL>::pthread_once =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_once(pthread_once_t *__once_control,__init_routine *__init_routine)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00147110  <EXTERNAL>::pthread_setspecific =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_setspecific(pthread_key_t __key,void *__pointer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00147118  <EXTERNAL>::fflush =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00147120  <EXTERNAL>::fprintf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00147128  <EXTERNAL>::dl_iterate_phdr =====

/* WARNING: Control flow encountered bad instruction data */

void dl_iterate_phdr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00147130  <EXTERNAL>::fwrite =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00147138  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00147140  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00147148  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


