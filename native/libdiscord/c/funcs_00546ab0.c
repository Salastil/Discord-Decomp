// ===== 00546ab0  FUN_00546ab0 =====

int FUN_00546ab0(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    /* try { // try from 00546ab8 to 00546abb has its CatchHandler @ 00546ac4 */
  iVar1 = pthread_mutex_destroy(param_1);
  return iVar1;
}


// ===== 00546ac8  FUN_00546ac8 =====

void FUN_00546ac8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0054f64c(8);
  FUN_00552370();
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar1,PTR_PTR_00d51ce8,PTR_FUN_00d51e00);
}


// ===== 00546afc  operator.new =====

/* operator new(unsigned long) */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  while( true ) {
    pvVar1 = malloc(param_1);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    pcVar2 = (code *)FUN_005500d8();
    if (pcVar2 == (code *)0x0) break;
    (*pcVar2)();
  }
  uVar3 = FUN_0054f64c(8);
  FUN_00552370();
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar3,PTR_PTR_00d51ce8,PTR_FUN_00d51e00);
}


// ===== 00546b60  FUN_00546b60 =====

void FUN_00546b60(ulong param_1)

{
                    /* try { // try from 00546b68 to 00546b6b has its CatchHandler @ 00546b74 */
  operator_new(param_1);
  return;
}


// ===== 00546b8c  operator.new[] =====

/* operator new[](unsigned long) */

void * operator_new__(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00d54a78)();
  return pvVar1;
}


// ===== 00546b90  FUN_00546b90 =====

void FUN_00546b90(ulong param_1)

{
                    /* try { // try from 00546b98 to 00546b9b has its CatchHandler @ 00546ba4 */
  operator_new__(param_1);
  return;
}


// ===== 00546bbc  operator.delete =====

/* operator delete(void*) */

void operator_delete(void *param_1)

{
  (*(code *)PTR_free_00d54a90)();
  return;
}


// ===== 00546bc0  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00546bc4  operator.delete[] =====

/* operator delete[](void*) */

void operator_delete__(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00546bc8  operator.delete[] =====

void operator_delete__(void *param_1)

{
  (*(code *)PTR_operator_delete___00d54c30)();
  return;
}


// ===== 00546bcc  operator.new =====

/* operator new(unsigned long, std::align_val_t) */

void * operator_new(size_t param_1,size_t param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) {
    param_1 = 1;
  }
  if (param_2 < 9) {
    param_2 = 8;
  }
  do {
    local_40 = (void *)0x0;
    posix_memalign(&local_40,param_2,param_1);
    if (local_40 != (void *)0x0) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return local_40;
      }
LAB_00546c88:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pcVar2 = (code *)FUN_005500d8();
    if (pcVar2 == (code *)0x0) {
      uVar3 = FUN_0054f64c(8);
      FUN_00552370();
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(uVar3,PTR_PTR_00d51ce8,PTR_FUN_00d51e00);
      }
      goto LAB_00546c88;
    }
    (*pcVar2)();
  } while( true );
}


// ===== 00546c8c  operator.new[] =====

/* operator new[](unsigned long, std::align_val_t) */

void * operator_new__(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00d55128)();
  return pvVar1;
}


// ===== 00546c90  operator.delete =====

/* operator delete(void*, std::align_val_t) */

void operator_delete(void)

{
  (*(code *)PTR_free_00d54a90)();
  return;
}


// ===== 00546c94  operator.delete[] =====

/* operator delete[](void*, std::align_val_t) */

void operator_delete__(void)

{
  (*(code *)PTR_operator_delete_00d55138)();
  return;
}


// ===== 00546c98  FUN_00546c98 =====

void FUN_00546c98(int *param_1,char *param_2)

{
  char *__file;
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *local_50 [2];
  char local_39;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __file = *(char **)param_2;
  if (-1 < param_2[0x17]) {
    __file = param_2;
  }
  iVar3 = open(__file,0);
  *param_1 = iVar3;
  if (iVar3 < 0) {
    puVar4 = (undefined4 *)__errno();
    uVar1 = *puVar4;
    FUN_00548c1c(local_50,"random_device failed to open ",param_2);
    if (-1 < local_39) {
      local_50[0] = (undefined1 *)local_50;
    }
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 00546d44 to 00546d4b has its CatchHandler @ 00546d4c */
                    /* WARNING: Subroutine does not return */
      FUN_0054a0b0(uVar1,local_50[0]);
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00546d7c  FUN_00546d7c =====

int FUN_00546d7c(int *param_1)

{
  int iVar1;
  
                    /* try { // try from 00546d88 to 00546d8b has its CatchHandler @ 00546d94 */
  iVar1 = close(*param_1);
  return iVar1;
}


// ===== 00546d98  FUN_00546d98 =====

void FUN_00546d98(int *param_1)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  ssize_t sVar4;
  uint *__buf;
  size_t __nbytes;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __buf = &local_3c;
  __nbytes = 4;
  do {
    while (sVar4 = read(*param_1,__buf,__nbytes), sVar4 != -1) {
      if (sVar4 == 0) {
        uVar2 = 0;
        if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_0054a0b0(0x3d,"random_device got EOF");
        }
        goto LAB_00546e68;
      }
      __nbytes = __nbytes - sVar4;
      __buf = (uint *)((long)__buf + sVar4);
      if (__nbytes == 0) goto LAB_00546e04;
    }
    puVar3 = (uint *)__errno();
    uVar2 = *puVar3;
    if (uVar2 != 4) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_0054a0b0(uVar2,"random_device got an unexpected error");
      }
      goto LAB_00546e68;
    }
  } while (__nbytes != 0);
LAB_00546e04:
  uVar2 = local_3c;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_00546e68:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 00546e6c  FUN_00546e6c =====

void FUN_00546e6c(undefined8 *param_1)

{
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  return;
}


// ===== 00546e88  FUN_00546e88 =====

void FUN_00546e88(long param_1)

{
  long lVar1;
  uint uVar2;
  long local_48;
  char local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = '\x01';
  local_48 = param_1;
  FUN_005467a4();
  uVar2 = *(uint *)(param_1 + 0x88);
  if ((int)uVar2 < 0) {
    do {
      FUN_00518490(param_1 + 0x28,&local_48);
      uVar2 = *(uint *)(param_1 + 0x88);
    } while ((int)uVar2 < 0);
  }
  *(uint *)(param_1 + 0x88) = uVar2 | 0x80000000;
  if (uVar2 != 0) {
    do {
      FUN_00518490(param_1 + 0x58,&local_48);
    } while ((*(uint *)(param_1 + 0x88) & 0x7fffffff) != 0);
  }
  if (local_40 != '\0') {
    FUN_005467c8(local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00546f3c  FUN_00546f3c =====

void FUN_00546f3c(long param_1)

{
  FUN_005467a4();
  *(undefined4 *)(param_1 + 0x88) = 0;
  FUN_00518478(param_1 + 0x28);
  FUN_005467c8(param_1);
  return;
}


// ===== 00546f6c  FUN_00546f6c =====

void FUN_00546f6c(long param_1)

{
  long lVar1;
  long local_48;
  char local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = '\x01';
  local_48 = param_1;
  FUN_005467a4();
  if (*(uint *)(param_1 + 0x88) < 0x7fffffff) {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) + 1;
  }
  else {
    do {
      FUN_00518490(param_1 + 0x28,&local_48);
    } while (0x7ffffffe < *(uint *)(param_1 + 0x88));
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) + 1;
    if (local_40 == '\0') goto LAB_00546ff0;
  }
  FUN_005467c8(local_48);
LAB_00546ff0:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00547018  FUN_00547018 =====

void FUN_00547018(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  FUN_005467a4();
  uVar2 = (*(uint *)(param_1 + 0x88) & 0x7fffffff) - 1;
  uVar1 = uVar2 | *(uint *)(param_1 + 0x88) & 0x80000000;
  *(uint *)(param_1 + 0x88) = uVar1;
  if ((int)uVar1 < 0) {
    if (uVar2 != 0) goto LAB_00547068;
    lVar3 = param_1 + 0x58;
  }
  else {
    if (uVar2 != 0x7ffffffe) goto LAB_00547068;
    lVar3 = param_1 + 0x28;
  }
  FUN_00518460(lVar3);
LAB_00547068:
  FUN_005467c8(param_1);
  return;
}


// ===== 00547078  FUN_00547078 =====

void FUN_00547078(long *param_1,char *param_2)

{
  char *__s;
  size_t sVar1;
  size_t *psVar2;
  
  *param_1 = (long)(PTR_DAT_00d51e10 + 0x10);
  __s = *(char **)param_2;
  if (-1 < param_2[0x17]) {
    __s = param_2;
  }
  sVar1 = strlen(__s);
                    /* try { // try from 005470bc to 005470bf has its CatchHandler @ 005470f0 */
  psVar2 = (size_t *)operator_new(sVar1 + 0x19);
  *psVar2 = sVar1;
  psVar2[1] = sVar1;
  *(undefined4 *)(psVar2 + 2) = 0;
  memcpy(psVar2 + 3,__s,sVar1 + 1);
  param_1[1] = (long)(psVar2 + 3);
  return;
}


// ===== 00547104  FUN_00547104 =====

void FUN_00547104(long *param_1,char *param_2)

{
  size_t sVar1;
  size_t *psVar2;
  
  *param_1 = (long)(PTR_DAT_00d51e10 + 0x10);
  sVar1 = strlen(param_2);
                    /* try { // try from 0054713c to 0054713f has its CatchHandler @ 00547170 */
  psVar2 = (size_t *)operator_new(sVar1 + 0x19);
  *psVar2 = sVar1;
  psVar2[1] = sVar1;
  *(undefined4 *)(psVar2 + 2) = 0;
  memcpy(psVar2 + 3,param_2,sVar1 + 1);
  param_1[1] = (long)(psVar2 + 3);
  return;
}


// ===== 00547184  FUN_00547184 =====

void FUN_00547184(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 8);
  piVar3 = (int *)(lVar4 + -8);
  *param_1 = &PTR_FUN_00d23af8;
  param_1[1] = lVar4;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
    if (bVar2) {
      *piVar3 = *piVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return;
}


// ===== 005471b0  FUN_005471b0 =====

void FUN_005471b0(long *param_1,char *param_2)

{
  char *__s;
  size_t sVar1;
  size_t *psVar2;
  
  *param_1 = (long)(PTR_DAT_00d51e18 + 0x10);
  __s = *(char **)param_2;
  if (-1 < param_2[0x17]) {
    __s = param_2;
  }
  sVar1 = strlen(__s);
                    /* try { // try from 005471f4 to 005471f7 has its CatchHandler @ 00547228 */
  psVar2 = (size_t *)operator_new(sVar1 + 0x19);
  *psVar2 = sVar1;
  psVar2[1] = sVar1;
  *(undefined4 *)(psVar2 + 2) = 0;
  memcpy(psVar2 + 3,__s,sVar1 + 1);
  param_1[1] = (long)(psVar2 + 3);
  return;
}


// ===== 0054723c  FUN_0054723c =====

void FUN_0054723c(long *param_1,char *param_2)

{
  size_t sVar1;
  size_t *psVar2;
  
  *param_1 = (long)(PTR_DAT_00d51e18 + 0x10);
  sVar1 = strlen(param_2);
                    /* try { // try from 00547274 to 00547277 has its CatchHandler @ 005472a8 */
  psVar2 = (size_t *)operator_new(sVar1 + 0x19);
  *psVar2 = sVar1;
  psVar2[1] = sVar1;
  *(undefined4 *)(psVar2 + 2) = 0;
  memcpy(psVar2 + 3,param_2,sVar1 + 1);
  param_1[1] = (long)(psVar2 + 3);
  return;
}


// ===== 005472bc  FUN_005472bc =====

void FUN_005472bc(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 8);
  piVar3 = (int *)(lVar4 + -8);
  *param_1 = &PTR_FUN_00d23b20;
  param_1[1] = lVar4;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
    if (bVar2) {
      *piVar3 = *piVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return;
}


// ===== 005472e8  FUN_005472e8 =====

long * FUN_005472e8(long *param_1,ulong param_2,ulong param_3,void *param_4,ulong param_5)

{
  void *__dest;
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong __n;
  ulong uVar6;
  size_t __n_00;
  
  if ((param_4 == (void *)0x0) && (param_5 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string",0xbaf,
               "__n2 == 0 || __s != nullptr","string::replace received nullptr");
  }
  bVar2 = *(byte *)((long)param_1 + 0x17);
  uVar4 = param_1[1];
  if (-1 < (char)bVar2) {
    uVar4 = (ulong)bVar2;
  }
  uVar3 = uVar4 - param_2;
  if (uVar4 < param_2) {
    FUN_0051ef0c(param_1);
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00547400 with catch @ 00547538
                        */
    FUN_004e7ed8();
  }
  __n = uVar3;
  if (param_3 <= uVar3) {
    __n = param_3;
  }
  lVar5 = (param_1[2] & 0x7fffffffffffffffU) - 1;
  if (-1 < (char)bVar2) {
    lVar5 = 0x16;
  }
  if ((__n - uVar4) + lVar5 < param_5) {
    FUN_00547540(param_1,lVar5,((uVar4 + param_5) - lVar5) - __n,uVar4,param_2,__n,param_5,param_4);
    return param_1;
  }
  plVar1 = (long *)*param_1;
  if (-1 < (char)bVar2) {
    plVar1 = param_1;
  }
  uVar6 = param_5;
  if ((__n == param_5) || (uVar6 = __n, uVar3 <= param_3)) {
LAB_00547488:
    memmove((void *)((long)plVar1 + param_2),param_4,param_5);
    uVar4 = (param_5 - uVar6) + uVar4;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      if (0x16 < uVar4) {
                    /* try { // try from 00547508 to 0054752f has its CatchHandler @ 0054753c */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                   "__s < __min_cap",
                   "__s should never be greater than or equal to the short string capacity");
      }
LAB_005474b0:
      *(char *)((long)param_1 + 0x17) = (char)uVar4;
      goto LAB_005474bc;
    }
  }
  else {
    __n_00 = uVar3 - __n;
    __dest = (void *)((long)plVar1 + param_2);
    if (__n <= param_5) {
      if ((__dest < param_4) && (param_4 < (void *)((long)plVar1 + uVar4))) {
        if (param_4 < (void *)((long)__dest + __n)) {
          memmove(__dest,param_4,__n);
          param_2 = __n + param_2;
          param_4 = (void *)((long)param_4 + param_5);
          param_5 = param_5 - __n;
          __n = 0;
        }
        else {
          param_4 = (void *)((long)param_4 + (param_5 - __n));
        }
      }
      memmove((void *)((long)plVar1 + param_5 + param_2),(void *)((long)plVar1 + __n + param_2),
              __n_00);
      uVar6 = __n;
      goto LAB_00547488;
    }
    memmove(__dest,param_4,param_5);
    memmove((void *)((long)__dest + param_5),(void *)((long)__dest + __n),__n_00);
    uVar4 = (param_5 - __n) + uVar4;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      if (0x16 < uVar4) {
                    /* try { // try from 00547400 to 00547427 has its CatchHandler @ 00547538 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                   "__s < __min_cap",
                   "__s should never be greater than or equal to the short string capacity");
      }
      goto LAB_005474b0;
    }
  }
  param_1[1] = uVar4;
LAB_005474bc:
  *(undefined1 *)((long)plVar1 + uVar4) = 0;
  return param_1;
}


// ===== 00547540  FUN_00547540 =====

void FUN_00547540(undefined8 *param_1,ulong param_2,ulong param_3,long param_4,size_t param_5,
                 long param_6,size_t param_7,void *param_8)

{
  void *pvVar1;
  void *__src;
  long lVar2;
  undefined8 *__src_00;
  ulong uVar3;
  size_t __n;
  void *__dest;
  ulong uVar4;
  
  if (0x7fffffffffffffee - param_2 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_004e823c(param_1);
  }
  __src_00 = (undefined8 *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    __src_00 = param_1;
  }
  if (param_2 < 0x3fffffffffffffe7) {
    uVar3 = param_3 + param_2;
    if (param_3 + param_2 <= param_2 * 2) {
      uVar3 = param_2 * 2;
    }
    uVar4 = 0x17;
    if (0x16 < uVar3) {
      uVar4 = (uVar3 | 0xf) + 1;
    }
  }
  else {
    uVar4 = 0x7fffffffffffffef;
  }
  __dest = operator_new(uVar4);
  if (param_5 != 0) {
    if ((__dest <= __src_00) && (__src_00 < (void *)((long)__dest + param_5))) {
                    /* try { // try from 005476ac to 005476d3 has its CatchHandler @ 00547734 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src_00,param_5);
  }
  if (param_7 != 0) {
    pvVar1 = (void *)((long)__dest + param_5);
    if ((pvVar1 <= param_8) && (param_8 < (void *)((long)pvVar1 + param_7))) {
                    /* try { // try from 005476d4 to 005476fb has its CatchHandler @ 00547730 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memcpy(pvVar1,param_8,param_7);
  }
  __n = param_4 - (param_6 + param_5);
  if (__n != 0) {
    pvVar1 = (void *)((long)__dest + param_7 + param_5);
    __src = (void *)((long)__src_00 + param_6 + param_5);
    if ((pvVar1 <= __src) && (__src < (void *)((long)pvVar1 + __n))) {
                    /* try { // try from 005476fc to 00547723 has its CatchHandler @ 0054772c */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(pvVar1,__src,__n);
  }
  if (param_2 != 0x16) {
    operator_delete(__src_00);
  }
  lVar2 = param_7 + param_5 + __n;
  *param_1 = __dest;
  param_1[1] = lVar2;
  param_1[2] = uVar4 | 0x8000000000000000;
  *(undefined1 *)((long)__dest + lVar2) = 0;
  return;
}


// ===== 00547738  FUN_00547738 =====

void FUN_00547738(undefined8 *param_1)

{
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}


// ===== 0054774c  FUN_0054774c =====

void FUN_0054774c(undefined8 *param_1,ulong param_2,ulong param_3,long param_4,size_t param_5,
                 long param_6,long param_7)

{
  void *__dest;
  void *__src;
  undefined8 *__src_00;
  ulong uVar1;
  void *__dest_00;
  size_t __n;
  ulong uVar2;
  
  uVar2 = 0x7fffffffffffffef;
  if (0x7fffffffffffffef - param_2 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_004e823c(param_1);
  }
  __src_00 = (undefined8 *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    __src_00 = param_1;
  }
  if (param_2 < 0x3fffffffffffffe7) {
    uVar1 = param_3 + param_2;
    if (param_3 + param_2 <= param_2 * 2) {
      uVar1 = param_2 * 2;
    }
    uVar2 = 0x17;
    if (0x16 < uVar1) {
      uVar2 = (uVar1 | 0xf) + 1;
    }
  }
  __dest_00 = operator_new(uVar2);
  if (param_5 != 0) {
    if ((__dest_00 <= __src_00) && (__src_00 < (void *)((long)__dest_00 + param_5))) {
                    /* try { // try from 00547878 to 0054789f has its CatchHandler @ 005478d4 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest_00,__src_00,param_5);
  }
  if (param_6 + param_5 != param_4) {
    __n = param_4 - (param_6 + param_5);
    __dest = (void *)((long)__dest_00 + param_7 + param_5);
    __src = (void *)((long)__src_00 + param_6 + param_5);
    if ((__dest <= __src) && (__src < (void *)((long)__dest + __n))) {
                    /* try { // try from 005478a0 to 005478c7 has its CatchHandler @ 005478d0 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,__n);
  }
  if (param_2 != 0x16) {
    operator_delete(__src_00);
  }
  *param_1 = __dest_00;
  param_1[2] = uVar2 | 0x8000000000000000;
  return;
}


// ===== 005478d8  FUN_005478d8 =====

void FUN_005478d8(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *__dest;
  
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    __dest = param_1;
  }
  else {
    if (0x7fffffffffffffef < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_004e823c(param_1);
    }
    uVar1 = (param_3 | 0xf) + 1;
    __dest = (undefined8 *)operator_new(uVar1);
    *param_1 = __dest;
    param_1[1] = param_3;
    param_1[2] = uVar1 | 0x8000000000000000;
  }
  if ((__dest <= param_2) && (param_2 < (undefined8 *)((long)__dest + param_3 + 1))) {
                    /* try { // try from 00547960 to 00547987 has its CatchHandler @ 00547990 */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  memmove(__dest,param_2,param_3 + 1);
  return;
}


// ===== 00547994  FUN_00547994 =====

long * FUN_00547994(long *param_1,ulong param_2,void *param_3,ulong param_4)

{
  void *__src;
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  
  if ((param_3 == (void *)0x0) && (param_4 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string",0xadb,
               "__n == 0 || __s != nullptr","string::insert received nullptr");
  }
  bVar4 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  if (param_2 <= uVar1) {
    lVar5 = (param_1[2] & 0x7fffffffffffffffU) - 1;
    if (-1 < (char)bVar4) {
      lVar5 = 0x16;
    }
    if (lVar5 - uVar1 < param_4) {
      FUN_00547540(param_1,lVar5,(uVar1 + param_4) - lVar5,uVar1,param_2,0,param_4,param_3);
    }
    else if (param_4 != 0) {
      plVar2 = (long *)*param_1;
      if (-1 < (char)bVar4) {
        plVar2 = param_1;
      }
      if (uVar1 - param_2 != 0) {
        __src = (void *)((long)plVar2 + param_2);
        uVar3 = param_4;
        if ((void *)((long)plVar2 + uVar1) <= param_3 || param_3 < __src) {
          uVar3 = 0;
        }
        param_3 = (void *)((long)param_3 + uVar3);
        memmove((void *)((long)__src + param_4),__src,uVar1 - param_2);
      }
      memmove((void *)((long)plVar2 + param_2),param_3,param_4);
      uVar1 = uVar1 + param_4;
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        param_1[1] = uVar1;
      }
      else {
        if (0x16 < uVar1) {
                    /* try { // try from 00547ad4 to 00547afb has its CatchHandler @ 00547b04 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                     "__s < __min_cap",
                     "__s should never be greater than or equal to the short string capacity");
        }
        *(char *)((long)param_1 + 0x17) = (char)uVar1;
      }
      *(undefined1 *)((long)plVar2 + uVar1) = 0;
    }
    return param_1;
  }
  FUN_0051ef0c(param_1);
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00547ad4 with catch @ 00547b04
                        */
  FUN_004e7ed8();
}


// ===== 00547b08  FUN_00547b08 =====

undefined8 * FUN_00547b08(undefined8 *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *__dest;
  byte bVar2;
  ulong uVar3;
  
  bVar2 = *(byte *)((long)param_1 + 0x17);
  uVar3 = (param_1[2] & 0x7fffffffffffffff) - 1;
  if (-1 < (char)bVar2) {
    uVar3 = 0x16;
  }
  if (uVar3 < param_3) {
    uVar1 = param_1[1];
    if (-1 < (char)bVar2) {
      uVar1 = (ulong)bVar2;
    }
    FUN_00547540(param_1,uVar3,param_3 - uVar3,uVar1,0,uVar1,param_3);
  }
  else {
    __dest = (undefined8 *)*param_1;
    if (-1 < (char)bVar2) {
      __dest = param_1;
    }
    memmove(__dest,param_2,param_3);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      param_1[1] = param_3;
    }
    else {
      if (0x16 < param_3) {
                    /* try { // try from 00547bcc to 00547bf3 has its CatchHandler @ 00547bf4 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                   "__s < __min_cap",
                   "__s should never be greater than or equal to the short string capacity");
      }
      *(char *)((long)param_1 + 0x17) = (char)param_3;
    }
    *(undefined1 *)((long)__dest + param_3) = 0;
  }
  return param_1;
}


// ===== 00547bf8  FUN_00547bf8 =====

void FUN_00547bf8(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  FUN_00547b08(param_1,param_2,sVar1);
  return;
}


// ===== 00547c2c  FUN_00547c2c =====

void FUN_00547c2c(long param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (0x7fffffffffffffef < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_004e823c();
  }
  bVar2 = *(byte *)(param_1 + 0x17);
  uVar3 = (*(ulong *)(param_1 + 0x10) & 0x7fffffffffffffff) - 1;
  if (-1 < (char)bVar2) {
    uVar3 = 0x16;
  }
  if (uVar3 < param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if (-1 < (char)bVar2) {
      uVar1 = (ulong)bVar2;
    }
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    uVar4 = uVar1 | 0xf;
    if (uVar1 < 0x17) {
      uVar4 = 0x16;
    }
    if (uVar4 != uVar3) {
      FUN_0051f494();
      return;
    }
  }
  return;
}


// ===== 00547cac  FUN_00547cac =====

long * FUN_00547cac(long *param_1,void *param_2,ulong param_3)

{
  void *__dest;
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  long lVar4;
  
  if ((param_2 == (void *)0x0) && (param_3 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string",0xa25,
               "__n == 0 || __s != nullptr","string::append received nullptr");
  }
  bVar3 = *(byte *)((long)param_1 + 0x17);
  lVar4 = (param_1[2] & 0x7fffffffffffffffU) - 1;
  uVar1 = param_1[1];
  if (-1 < (char)bVar3) {
    lVar4 = 0x16;
    uVar1 = (ulong)bVar3;
  }
  if (lVar4 - uVar1 < param_3) {
    FUN_00547540(param_1,lVar4,(uVar1 + param_3) - lVar4,uVar1,uVar1,0,param_3);
  }
  else if (param_3 != 0) {
    plVar2 = (long *)*param_1;
    if (-1 < (char)bVar3) {
      plVar2 = param_1;
    }
    __dest = (void *)((long)plVar2 + uVar1);
    if ((__dest <= param_2) && (param_2 < (void *)((long)__dest + param_3))) {
                    /* try { // try from 00547db8 to 00547ddf has its CatchHandler @ 00547e0c */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,param_2,param_3);
    uVar1 = uVar1 + param_3;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      param_1[1] = uVar1;
    }
    else {
      if (0x16 < uVar1) {
                    /* try { // try from 00547de0 to 00547e07 has its CatchHandler @ 00547e08 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                   "__s < __min_cap",
                   "__s should never be greater than or equal to the short string capacity");
      }
      *(char *)((long)param_1 + 0x17) = (char)uVar1;
    }
    *(undefined1 *)((long)plVar2 + uVar1) = 0;
  }
  return param_1;
}


// ===== 00547e10  FUN_00547e10 =====

void FUN_00547e10(undefined8 *param_1,long *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 *__src;
  long *plVar2;
  ulong __n;
  byte bVar3;
  undefined8 *__dest;
  
  bVar3 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
  }
  if (uVar1 < param_3) {
    FUN_0051ef0c(param_1);
  }
  else {
    plVar2 = (long *)*param_2;
    if (-1 < (char)bVar3) {
      plVar2 = param_2;
    }
    __n = uVar1 - param_3;
    if (param_4 <= uVar1 - param_3) {
      __n = param_4;
    }
    if (__n < 0x7ffffffffffffff0) {
      __src = (undefined8 *)((long)plVar2 + param_3);
      if (__n < 0x17) {
        *(char *)((long)param_1 + 0x17) = (char)__n;
        __dest = param_1;
      }
      else {
        uVar1 = (__n | 0xf) + 1;
        __dest = (undefined8 *)operator_new(uVar1);
        *param_1 = __dest;
        param_1[1] = __n;
        param_1[2] = uVar1 | 0x8000000000000000;
      }
      if (__src < __dest || (undefined8 *)((long)__dest + __n) <= __src) {
        if (__n != 0) {
          memmove(__dest,__src,__n);
        }
        *(undefined1 *)((long)__dest + __n) = 0;
        return;
      }
                    /* try { // try from 00547ecc to 00547ef3 has its CatchHandler @ 00547f04 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_004e823c(param_1);
}


// ===== 00547f08  FUN_00547f08 =====

undefined8 * FUN_00547f08(undefined8 *param_1,undefined1 *param_2,ulong param_3)

{
  undefined1 *__dest;
  ulong uVar1;
  
  uVar1 = param_1[2] & 0x7fffffffffffffff;
  if (param_3 < uVar1) {
    __dest = (undefined1 *)*param_1;
    param_1[1] = param_3;
    if ((__dest <= param_2) && (param_2 < __dest + param_3)) {
                    /* try { // try from 00547f94 to 00547fbb has its CatchHandler @ 00547fbc */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    if (param_3 != 0) {
      memmove(__dest,param_2,param_3);
    }
    __dest[param_3] = 0;
  }
  else {
    FUN_00547540(param_1,uVar1 - 1,(param_3 - uVar1) + 1,param_1[1],0,param_1[1]);
  }
  return param_1;
}


// ===== 00547fc0  FUN_00547fc0 =====

undefined1 * FUN_00547fc0(undefined1 *param_1,undefined1 *param_2,ulong param_3)

{
  char cVar1;
  
  if (param_3 < 0x16 || param_3 - 0x16 == 0) {
    param_1[0x17] = (char)param_3;
    if ((param_1 <= param_2) && (param_2 < param_1 + param_3)) {
                    /* try { // try from 00548044 to 0054806b has its CatchHandler @ 00548098 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    if (param_3 != 0) {
      memmove(param_1,param_2,param_3);
    }
    param_1[param_3] = 0;
  }
  else {
    cVar1 = param_1[0x17];
    if (cVar1 < '\0') {
                    /* try { // try from 0054806c to 00548093 has its CatchHandler @ 00548094 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string",0x673,
                 "!__r_.first().__s.__is_long_",
                 "String has to be short when trying to get the short size");
    }
    FUN_00547540(param_1,0x16,param_3 - 0x16,cVar1,0,cVar1);
  }
  return param_1;
}


// ===== 0054809c  FUN_0054809c =====

long * FUN_0054809c(long *param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_2 != 0) {
    lVar4 = (param_1[2] & 0x7fffffffffffffffU) - 1;
    uVar1 = param_1[1];
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      lVar4 = 0x16;
      uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    }
    if (lVar4 - uVar1 < param_2) {
      FUN_0054774c(param_1,lVar4,(uVar1 + param_2) - lVar4,uVar1,uVar1,0,0);
      cVar3 = *(char *)((long)param_1 + 0x17);
    }
    else {
      cVar3 = (char)((ulong)param_1[2] >> 0x38);
    }
    uVar5 = uVar1 + param_2;
    plVar2 = (long *)*param_1;
    if (-1 < cVar3) {
      plVar2 = param_1;
    }
    memset((void *)((long)plVar2 + uVar1),param_3,param_2);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      param_1[1] = uVar5;
    }
    else {
      if (0x16 < uVar5) {
                    /* try { // try from 00548178 to 0054819f has its CatchHandler @ 005481a0 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                   "__s < __min_cap",
                   "__s should never be greater than or equal to the short string capacity");
      }
      *(char *)((long)param_1 + 0x17) = (char)uVar5;
    }
    *(undefined1 *)((long)plVar2 + uVar5) = 0;
  }
  return param_1;
}


// ===== 005481a4  FUN_005481a4 =====

void FUN_005481a4(undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_3 != 0) {
    uVar3 = (uint)(char)*(byte *)((long)param_1 + 0x17);
    uVar5 = param_1[1];
    puVar2 = (undefined8 *)*param_1;
    if (-1 < (int)uVar3) {
      uVar5 = (ulong)*(byte *)((long)param_1 + 0x17);
      puVar2 = param_1;
    }
    uVar4 = uVar5 - param_2;
    uVar1 = uVar4;
    if (param_3 <= uVar4) {
      uVar1 = param_3;
    }
    if (param_3 < uVar4) {
      memmove((void *)((long)puVar2 + param_2),(void *)((long)puVar2 + param_2 + uVar1),
              uVar4 - uVar1);
      uVar3 = (uint)*(byte *)((long)param_1 + 0x17);
    }
    uVar5 = uVar5 - uVar1;
    if ((uVar3 >> 7 & 1) == 0) {
      if (0x16 < uVar5) {
                    /* try { // try from 00548228 to 0054824f has its CatchHandler @ 00548250 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                   "__s < __min_cap",
                   "__s should never be greater than or equal to the short string capacity");
      }
      *(char *)((long)param_1 + 0x17) = (char)uVar5;
    }
    else {
      param_1[1] = uVar5;
    }
    *(undefined1 *)((long)puVar2 + uVar5) = 0;
  }
  return;
}


// ===== 00548254  FUN_00548254 =====

uint FUN_00548254(undefined8 *param_1,char *param_2)

{
  ulong uVar1;
  size_t __n;
  undefined8 *__s1;
  byte bVar2;
  uint uVar3;
  size_t sVar4;
  
  if (param_2 == (char *)0x0) {
                    /* try { // try from 005482d8 to 00548307 has its CatchHandler @ 00548308 */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string",0xfae,
               "__s != nullptr","string::compare(): received nullptr");
  }
  sVar4 = strlen(param_2);
  bVar2 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar2) {
    uVar1 = (ulong)bVar2;
  }
  if (sVar4 != 0xffffffffffffffff) {
    __n = uVar1;
    if (sVar4 <= uVar1) {
      __n = sVar4;
    }
    if (__n != 0) {
      __s1 = (undefined8 *)*param_1;
      if (-1 < (char)bVar2) {
        __s1 = param_1;
      }
      uVar3 = memcmp(__s1,param_2,__n);
      if (uVar3 != 0) {
        return uVar3;
      }
    }
    uVar3 = (uint)(sVar4 < uVar1);
    if (uVar1 < sVar4) {
      uVar3 = 0xffffffff;
    }
    return uVar3;
  }
  FUN_0051ef0c(param_1);
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005482d8 with catch @ 00548308
                        */
  FUN_004e7ed8();
}


// ===== 0054830c  FUN_0054830c =====

void FUN_0054830c(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    FUN_00547cac(param_1,param_2,sVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/string",0xad0,
             "__s != nullptr","string::append received nullptr");
}


// ===== 0054836c  FUN_0054836c =====

void FUN_0054836c(long *param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  
  bVar2 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar2) {
    uVar1 = (ulong)bVar2;
  }
  if (uVar1 < param_2) {
    FUN_0054809c(param_1,param_2 - uVar1);
    return;
  }
  if ((char)bVar2 < '\0') {
    plVar3 = (long *)*param_1;
    param_1[1] = param_2;
  }
  else {
    if (0x16 < param_2) {
                    /* try { // try from 005483c8 to 005483ef has its CatchHandler @ 005483f0 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                 "__s < __min_cap",
                 "__s should never be greater than or equal to the short string capacity");
    }
    *(char *)((long)param_1 + 0x17) = (char)param_2;
    plVar3 = param_1;
  }
  *(undefined1 *)((long)plVar3 + param_2) = 0;
  return;
}


// ===== 005483f4  FUN_005483f4 =====

void FUN_005483f4(undefined8 *param_1,ulong param_2,ulong param_3,long param_4,long param_5,
                 long param_6,long param_7,void *param_8)

{
  void *pvVar1;
  void *__src;
  undefined8 *__src_00;
  ulong uVar2;
  void *__dest;
  ulong uVar3;
  size_t __n;
  
  if (0x3fffffffffffffee - param_2 < param_3) {
    FUN_00545334(param_1);
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005485c8 with catch @ 005485f8
                        */
    FUN_004e7ed8();
  }
  __src_00 = (undefined8 *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    __src_00 = param_1;
  }
  if (param_2 < 0x1fffffffffffffe7) {
    uVar2 = param_3 + param_2;
    if (param_3 + param_2 <= param_2 * 2) {
      uVar2 = param_2 * 2;
    }
    uVar3 = 5;
    if (4 < uVar2) {
      uVar3 = (uVar2 | 3) + 1;
    }
    if (uVar3 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
  }
  else {
    uVar3 = 0x3fffffffffffffef;
  }
  __dest = operator_new(uVar3 << 2);
  __n = param_5 * 4;
  if (param_5 != 0) {
    if ((__dest <= __src_00) && (__src_00 < (void *)((long)__dest + param_5 * 4))) {
                    /* try { // try from 00548578 to 0054859f has its CatchHandler @ 00548600 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0x154,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src_00,__n);
  }
  if (param_7 != 0) {
    pvVar1 = (void *)((long)__dest + param_5 * 4);
    if ((pvVar1 <= param_8) && (param_8 < (void *)((long)pvVar1 + param_7 * 4))) {
                    /* try { // try from 005485a0 to 005485c7 has its CatchHandler @ 005485fc */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0x154,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memcpy(pvVar1,param_8,param_7 << 2);
  }
  param_4 = param_4 - (param_6 + param_5);
  if (param_4 != 0) {
    pvVar1 = (void *)((long)__dest + param_7 * 4 + __n);
    __src = (void *)((long)__src_00 + param_6 * 4 + __n);
    if ((pvVar1 <= __src) && (__src < (void *)((long)pvVar1 + param_4 * 4))) {
                    /* try { // try from 005485c8 to 005485ef has its CatchHandler @ 005485f8 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0x154,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(pvVar1,__src,param_4 * 4);
  }
  if (param_2 != 4) {
    operator_delete(__src_00);
  }
  param_4 = param_7 + param_5 + param_4;
  *param_1 = __dest;
  param_1[1] = param_4;
  param_1[2] = uVar3 | 0x8000000000000000;
  *(undefined4 *)((long)__dest + param_4 * 4) = 0;
  return;
}


// ===== 00548604  FUN_00548604 =====

void FUN_00548604(undefined8 *param_1)

{
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}


// ===== 00548618  FUN_00548618 =====

void FUN_00548618(undefined8 *param_1,ulong param_2,ulong param_3,long param_4,long param_5,
                 long param_6,long param_7)

{
  void *__dest;
  void *__src;
  undefined8 *__src_00;
  ulong uVar1;
  void *__dest_00;
  size_t __n;
  ulong uVar2;
  
  uVar2 = 0x3fffffffffffffef;
  if (param_3 <= 0x3fffffffffffffef - param_2) {
    __src_00 = (undefined8 *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      __src_00 = param_1;
    }
    if (param_2 < 0x1fffffffffffffe7) {
      uVar1 = param_3 + param_2;
      if (param_3 + param_2 <= param_2 * 2) {
        uVar1 = param_2 * 2;
      }
      uVar2 = 5;
      if (4 < uVar1) {
        uVar2 = (uVar1 | 3) + 1;
      }
      if (uVar2 >> 0x3e != 0) goto LAB_005487ac;
    }
    __dest_00 = operator_new(uVar2 << 2);
    __n = param_5 * 4;
    if (param_5 != 0) {
      if ((__dest_00 <= __src_00) && (__src_00 < (void *)((long)__dest_00 + param_5 * 4))) {
                    /* try { // try from 00548754 to 0054877b has its CatchHandler @ 005487b4 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0x154,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      memmove(__dest_00,__src_00,__n);
    }
    if (param_6 + param_5 != param_4) {
      param_4 = param_4 - (param_6 + param_5);
      __dest = (void *)((long)__dest_00 + param_7 * 4 + __n);
      __src = (void *)((long)__src_00 + param_6 * 4 + __n);
      if ((__dest <= __src) && (__src < (void *)((long)__dest + param_4 * 4))) {
                    /* try { // try from 0054877c to 005487a3 has its CatchHandler @ 005487b0 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0x154,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      memmove(__dest,__src,param_4 * 4);
    }
    if (param_2 != 4) {
      operator_delete(__src_00);
    }
    *param_1 = __dest_00;
    param_1[2] = uVar2 | 0x8000000000000000;
    return;
  }
  FUN_00545334(param_1);
LAB_005487ac:
                    /* WARNING: Subroutine does not return */
  FUN_00401ad4();
}


// ===== 005487b8  FUN_005487b8 =====

void FUN_005487b8(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *__dest;
  
  if (param_3 < 5) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    __dest = param_1;
LAB_0054881c:
    if ((__dest <= param_2) && (param_2 < (undefined8 *)((long)__dest + (param_3 + 1) * 4))) {
                    /* try { // try from 00548850 to 00548877 has its CatchHandler @ 00548884 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0x154,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,param_2,(param_3 + 1) * 4);
    return;
  }
  if (param_3 < 0x3ffffffffffffff0) {
    if ((param_3 | 3) < 0x3fffffffffffffff) {
      uVar1 = (param_3 | 3) + 1;
      __dest = (undefined8 *)operator_new(uVar1 * 4);
      *param_1 = __dest;
      param_1[1] = param_3;
      param_1[2] = uVar1 | 0x8000000000000000;
      goto LAB_0054881c;
    }
  }
  else {
    FUN_00545334(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00401ad4();
}


// ===== 00548888  FUN_00548888 =====

undefined8 * FUN_00548888(undefined8 *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *__dest;
  byte bVar2;
  ulong uVar3;
  
  bVar2 = *(byte *)((long)param_1 + 0x17);
  uVar3 = (param_1[2] & 0x7fffffffffffffff) - 1;
  if (-1 < (char)bVar2) {
    uVar3 = 4;
  }
  if (uVar3 < param_3) {
    uVar1 = param_1[1];
    if (-1 < (char)bVar2) {
      uVar1 = (ulong)bVar2;
    }
    FUN_005483f4(param_1,uVar3,param_3 - uVar3,uVar1,0,uVar1,param_3);
  }
  else {
    __dest = (undefined8 *)*param_1;
    if (-1 < (char)bVar2) {
      __dest = param_1;
    }
    memmove(__dest,param_2,param_3 << 2);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      param_1[1] = param_3;
    }
    else {
      if (4 < param_3) {
                    /* try { // try from 0054894c to 00548973 has its CatchHandler @ 00548974 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                   "__s < __min_cap",
                   "__s should never be greater than or equal to the short string capacity");
      }
      *(char *)((long)param_1 + 0x17) = (char)param_3;
    }
    *(undefined4 *)((long)__dest + param_3 * 4) = 0;
  }
  return param_1;
}


// ===== 00548978  FUN_00548978 =====

long * FUN_00548978(long *param_1,void *param_2,ulong param_3)

{
  void *__dest;
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  long lVar4;
  
  if ((param_2 == (void *)0x0) && (param_3 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string",0xa25,
               "__n == 0 || __s != nullptr","string::append received nullptr");
  }
  bVar3 = *(byte *)((long)param_1 + 0x17);
  lVar4 = (param_1[2] & 0x7fffffffffffffffU) - 1;
  uVar1 = param_1[1];
  if (-1 < (char)bVar3) {
    lVar4 = 4;
    uVar1 = (ulong)bVar3;
  }
  if (lVar4 - uVar1 < param_3) {
    FUN_005483f4(param_1,lVar4,(uVar1 + param_3) - lVar4,uVar1,uVar1,0,param_3);
  }
  else if (param_3 != 0) {
    plVar2 = (long *)*param_1;
    if (-1 < (char)bVar3) {
      plVar2 = param_1;
    }
    __dest = (void *)((long)plVar2 + uVar1 * 4);
    if ((__dest <= param_2) && (param_2 < (void *)((long)__dest + param_3 * 4))) {
                    /* try { // try from 00548a84 to 00548aab has its CatchHandler @ 00548ad8 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0x154,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,param_2,param_3 << 2);
    uVar1 = uVar1 + param_3;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      param_1[1] = uVar1;
    }
    else {
      if (4 < uVar1) {
                    /* try { // try from 00548aac to 00548ad3 has its CatchHandler @ 00548ad4 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                   "__s < __min_cap",
                   "__s should never be greater than or equal to the short string capacity");
      }
      *(char *)((long)param_1 + 0x17) = (char)uVar1;
    }
    *(undefined4 *)((long)plVar2 + uVar1 * 4) = 0;
  }
  return param_1;
}


// ===== 00548adc  FUN_00548adc =====

long * FUN_00548adc(long *param_1,ulong param_2,undefined4 param_3)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
    return param_1;
  }
  lVar6 = (param_1[2] & 0x7fffffffffffffffU) - 1;
  uVar1 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    lVar6 = 4;
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (lVar6 - uVar1 < param_2) {
    FUN_00548618(param_1,lVar6,(uVar1 + param_2) - lVar6,uVar1,uVar1,0,0);
    cVar3 = *(char *)((long)param_1 + 0x17);
  }
  else {
    cVar3 = (char)((ulong)param_1[2] >> 0x38);
  }
  plVar2 = (long *)*param_1;
  if (-1 < cVar3) {
    plVar2 = param_1;
  }
  puVar4 = (undefined4 *)((long)plVar2 + uVar1 * 4);
  uVar5 = param_2;
  if (7 < param_2) {
    uVar7 = param_2 & 0xfffffffffffffff8;
    uVar5 = param_2 & 7;
    puVar8 = (undefined8 *)(puVar4 + 4);
    uVar9 = uVar7;
    do {
      puVar8[-1] = CONCAT44(param_3,param_3);
      puVar8[-2] = CONCAT44(param_3,param_3);
      puVar8[1] = CONCAT44(param_3,param_3);
      *puVar8 = CONCAT44(param_3,param_3);
      puVar8 = puVar8 + 4;
      uVar9 = uVar9 - 8;
    } while (uVar9 != 0);
    puVar4 = puVar4 + uVar7;
    if (uVar7 == param_2) goto LAB_00548bb8;
  }
  do {
    uVar5 = uVar5 - 1;
    *puVar4 = param_3;
    puVar4 = puVar4 + 1;
  } while (uVar5 != 0);
LAB_00548bb8:
  uVar1 = uVar1 + param_2;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1[1] = uVar1;
  }
  else {
    if (4 < uVar1) {
                    /* try { // try from 00548bf0 to 00548c17 has its CatchHandler @ 00548c18 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                 "__s < __min_cap",
                 "__s should never be greater than or equal to the short string capacity");
    }
    *(char *)((long)param_1 + 0x17) = (char)uVar1;
  }
  *(undefined4 *)((long)plVar2 + uVar1 * 4) = 0;
  return param_1;
}


// ===== 00548c1c  FUN_00548c1c =====

void FUN_00548c1c(char *param_1,char *param_2,char *param_3)

{
  ulong uVar1;
  ulong uVar2;
  char *__dest;
  size_t __n;
  byte bVar3;
  size_t __n_00;
  char *pcVar4;
  
  __n_00 = strlen(param_2);
  bVar3 = param_3[0x17];
  __n = *(size_t *)(param_3 + 8);
  if (-1 < (char)bVar3) {
    __n = (ulong)bVar3;
  }
  uVar2 = __n + __n_00;
  if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_004e823c(param_1);
  }
  if (uVar2 < 0x17) {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[0x17] = (char)uVar2;
    pcVar4 = param_1;
  }
  else {
    uVar1 = (uVar2 | 0xf) + 1;
    pcVar4 = (char *)operator_new(uVar1);
    *(char **)param_1 = pcVar4;
    *(ulong *)(param_1 + 8) = uVar2;
    *(ulong *)(param_1 + 0x10) = uVar1 | 0x8000000000000000;
  }
  __dest = pcVar4 + __n_00;
  if ((pcVar4 <= param_2) && (param_2 < __dest)) {
                    /* try { // try from 00548d18 to 00548d3f has its CatchHandler @ 00548d74 */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  if (__n_00 != 0) {
    memcpy(pcVar4,param_2,__n_00);
  }
  pcVar4 = *(char **)param_3;
  if (-1 < (char)bVar3) {
    pcVar4 = param_3;
  }
  if ((__dest <= pcVar4) && (pcVar4 < __dest + __n)) {
                    /* try { // try from 00548d40 to 00548d67 has its CatchHandler @ 00548d70 */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  if (__n != 0) {
    memmove(__dest,pcVar4,__n);
  }
  __dest[__n] = '\0';
  return;
}


// ===== 00548d78  FUN_00548d78 =====

ulong FUN_00548d78(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  void *local_68 [2];
  char local_51;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004a3cf4(local_68,&DAT_001ae05b);
                    /* try { // try from 00548db4 to 00548e1f has its CatchHandler @ 00548e94 */
  uVar2 = FUN_00549740(local_68,param_1,param_2,param_3);
  if (uVar2 == (long)(int)uVar2) {
    if (local_51 < '\0') {
      operator_delete(local_68[0]);
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return uVar2 & 0xffffffff;
    }
  }
  else {
    FUN_004d7ccc(auStack_50,local_68,": out of range");
    plVar3 = (long *)FUN_0054f64c(0x10);
                    /* try { // try from 00548e2c to 00548e33 has its CatchHandler @ 00548e74 */
    FUN_00547078(plVar3,auStack_50);
    *plVar3 = (long)(PTR_DAT_00d51d80 + 0x10);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00548e54 to 00548e6b has its CatchHandler @ 00548e6c */
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(plVar3,PTR_PTR_00d51d70,PTR_FUN_00d51d78);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00548ec4  FUN_00548ec4 =====

ulonglong FUN_00548ec4(char *param_1,long *param_2,int param_3)

{
  char *__nptr;
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  ulonglong uVar5;
  long *plVar6;
  void *local_80 [2];
  char local_69;
  char *local_68;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_004a3cf4(local_80,"stoull");
  local_68 = (char *)0x0;
  __nptr = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    __nptr = param_1;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  *piVar4 = 0;
  uVar5 = strtoull(__nptr,&local_68,param_3);
  iVar2 = *piVar4;
  *piVar4 = iVar1;
  if (iVar2 == 0x22) {
                    /* try { // try from 00548f9c to 00548faf has its CatchHandler @ 0054908c */
    FUN_004d7ccc(auStack_60,local_80,": out of range");
    plVar6 = (long *)FUN_0054f64c(0x10);
                    /* try { // try from 00548fbc to 00548fc3 has its CatchHandler @ 0054906c */
    FUN_00547078(plVar6,auStack_60);
    *plVar6 = (long)(PTR_DAT_00d51d80 + 0x10);
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 00548fe4 to 00548ffb has its CatchHandler @ 00549064 */
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(plVar6,PTR_PTR_00d51d70,PTR_FUN_00d51d78);
    }
  }
  else if ((long)local_68 - (long)__nptr == 0) {
                    /* try { // try from 00548ffc to 0054900f has its CatchHandler @ 0054908c */
    FUN_004d7ccc(auStack_60,local_80,": no conversion");
    plVar6 = (long *)FUN_0054f64c(0x10);
                    /* try { // try from 0054901c to 00549023 has its CatchHandler @ 00549060 */
    FUN_00547078(plVar6,auStack_60);
    *plVar6 = (long)(PTR_DAT_00d51d30 + 0x10);
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 00549044 to 0054905b has its CatchHandler @ 0054905c */
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(plVar6,PTR_PTR_00d51d40,PTR_FUN_00d51d38);
    }
  }
  else {
    if (param_2 != (long *)0x0) {
      *param_2 = (long)local_68 - (long)__nptr;
    }
    if (local_69 < '\0') {
      operator_delete(local_80[0]);
    }
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005490bc  FUN_005490bc =====

void FUN_005490bc(undefined8 *param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 *__dest;
  ulong __n;
  undefined1 local_54 [11];
  undefined1 uStack_49;
  long local_48;
  
  lVar3 = tpidr_el0;
  puVar4 = local_54;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((int)param_2 < 0) {
    puVar4 = (undefined1 *)((ulong)puVar4 | 1);
    param_2 = -param_2;
    local_54[0] = 0x2d;
  }
  if (((long)(&uStack_49 + -(long)puVar4) < 10) &&
     (uVar2 = (uint)((0x20 - (int)LZCOUNT(param_2 | 1)) * 0x4d1) >> 0xc,
     (long)(&uStack_49 + -(long)puVar4) <
     (long)(ulong)((uVar2 - (param_2 < *(uint *)(&DAT_001f750c + (ulong)uVar2 * 4))) + 1))) {
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/src/string.cpp",0x168,
                 "res.ec == errc()","bufsize must be large enough to accomodate the value");
    }
  }
  else {
    puVar4 = (undefined1 *)FUN_00517f78();
    __n = (long)puVar4 - (long)local_54;
    if (__n < 0x7ffffffffffffff0) {
      if (__n < 0x17) {
        *(char *)((long)param_1 + 0x17) = (char)__n;
        __dest = param_1;
      }
      else {
        uVar1 = (__n | 0xf) + 1;
        __dest = (undefined8 *)operator_new(uVar1);
        *param_1 = __dest;
        param_1[1] = __n;
        param_1[2] = uVar1 | 0x8000000000000000;
      }
      if (local_54 != puVar4) {
        memcpy(__dest,local_54,__n);
        __dest = (undefined8 *)((long)__dest + __n);
      }
      *(undefined1 *)__dest = 0;
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return;
      }
    }
    else if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_004e823c(param_1);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0054923c  FUN_0054923c =====

void FUN_0054923c(undefined8 *param_1,undefined4 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *__dest;
  ulong __n;
  undefined1 auStack_54 [12];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined1 *)FUN_00517f78(auStack_54,param_2);
  __n = (long)puVar3 - (long)auStack_54;
  if (__n < 0x7ffffffffffffff0) {
    if (__n < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)__n;
      __dest = param_1;
    }
    else {
      uVar1 = (__n | 0xf) + 1;
      __dest = (undefined8 *)operator_new(uVar1);
      *param_1 = __dest;
      param_1[1] = __n;
      param_1[2] = uVar1 | 0x8000000000000000;
    }
    if (auStack_54 != puVar3) {
      memcpy(__dest,auStack_54,__n);
      __dest = (undefined8 *)((long)__dest + __n);
    }
    *(undefined1 *)__dest = 0;
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_004e823c(param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00549320  FUN_00549320 =====

void FUN_00549320(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined8 *__dest;
  ulong uVar7;
  undefined2 local_60 [12];
  long local_48;
  
  puVar6 = local_60;
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (param_2 >> 0x20 == 0) {
    puVar5 = (undefined2 *)FUN_00517f78(local_60,param_2 & 0xffffffff);
  }
  else {
    if (9999999999 < param_2) {
      puVar6 = (undefined2 *)FUN_00517f78(local_60,param_2 / 10000000000);
      param_2 = param_2 % 10000000000;
    }
    puVar5 = puVar6 + 5;
    uVar7 = param_2 % 100000000;
    *puVar6 = *(undefined2 *)
               (
               ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899NSt4__Cr20__shared_ptr_emplaceINS_4__fs10filesystem16filesystem_error8_StorageENS_9allocatorIS4_EEEE"
               + (param_2 / 100000000) * 2 + 1);
    uVar2 = (int)uVar7 + (int)(uVar7 / 1000000) * -1000000;
    puVar6[1] = *(undefined2 *)
                 (
                 ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899NSt4__Cr20__shared_ptr_emplaceINS_4__fs10filesystem16filesystem_error8_StorageENS_9allocatorIS4_EEEE"
                 + (uVar7 / 1000000) * 2 + 1);
    uVar3 = uVar2 % 10000;
    puVar6[2] = *(undefined2 *)
                 (
                 ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899NSt4__Cr20__shared_ptr_emplaceINS_4__fs10filesystem16filesystem_error8_StorageENS_9allocatorIS4_EEEE"
                 + ((ulong)uVar2 / 10000) * 2 + 1);
    puVar6[3] = *(undefined2 *)
                 (
                 ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899NSt4__Cr20__shared_ptr_emplaceINS_4__fs10filesystem16filesystem_error8_StorageENS_9allocatorIS4_EEEE"
                 + (ulong)(uVar3 / 100) * 2 + 1);
    puVar6[4] = *(undefined2 *)
                 (
                 ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899NSt4__Cr20__shared_ptr_emplaceINS_4__fs10filesystem16filesystem_error8_StorageENS_9allocatorIS4_EEEE"
                 + (ulong)(uVar3 % 100) * 2 + 1);
  }
  uVar7 = (long)puVar5 - (long)local_60;
  if (uVar7 < 0x7ffffffffffffff0) {
    if (uVar7 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar7;
      __dest = param_1;
    }
    else {
      uVar1 = (uVar7 | 0xf) + 1;
      __dest = (undefined8 *)operator_new(uVar1);
      *param_1 = __dest;
      param_1[1] = uVar7;
      param_1[2] = uVar1 | 0x8000000000000000;
    }
    if (local_60 != puVar5) {
      memcpy(__dest,local_60,uVar7);
      __dest = (undefined8 *)((long)__dest + uVar7);
    }
    *(undefined1 *)__dest = 0;
    if (*(long *)(lVar4 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_004e823c(param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005494f4  FUN_005494f4 =====

void FUN_005494f4(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  char **ppcVar4;
  ulong uVar5;
  char *local_70;
  ulong uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uStack_68 = 0;
  local_60 = 0;
  local_70 = (char *)0x0;
                    /* try { // try from 0054952c to 0054953f has its CatchHandler @ 005496f8 */
  FUN_0054809c(&local_70,0x16,0);
  uVar2 = (uint)(char)local_60._7_1_;
  uVar5 = uStack_68;
  if (-1 < (int)uVar2) {
    uVar5 = (ulong)local_60._7_1_;
  }
  do {
    ppcVar4 = (char **)local_70;
    if (-1 < (char)uVar2) {
      ppcVar4 = &local_70;
    }
    uVar2 = snprintf((char *)ppcVar4,uVar5 + 1,"%f",param_2);
    if ((int)uVar2 < 0) {
      uVar3 = uVar5 << 1 | 1;
    }
    else {
      uVar3 = (ulong)uVar2;
      if (uVar3 <= uVar5) {
        uVar5 = uStack_68;
        if (-1 < local_60) {
          uVar5 = (ulong)local_60._7_1_;
        }
        if (uVar5 < uVar3) {
                    /* try { // try from 00549614 to 0054961f has its CatchHandler @ 005496f4 */
          FUN_0054809c(&local_70,uVar3 - uVar5,0);
        }
        else {
          ppcVar4 = (char **)local_70;
          uVar5 = uVar3;
          if (-1 < local_60) {
            if (0x16 < uVar2) {
              if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 005496cc to 005496f3 has its CatchHandler @ 00549738 */
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s:%d: assertion %s failed: %s",
                           "../../discord_common/native/third_party/llvm/libcxx/include/string",
                           0x66c,"__s < __min_cap",
                           "__s should never be greater than or equal to the short string capacity")
                ;
              }
              goto LAB_00549734;
            }
            local_60 = CONCAT17((char)uVar2,(undefined7)local_60);
            ppcVar4 = &local_70;
            uVar5 = uStack_68;
          }
          uStack_68 = uVar5;
          *(char *)((long)ppcVar4 + uVar3) = '\0';
        }
        param_1[1] = uStack_68;
        *param_1 = local_70;
        param_1[2] = local_60;
        if (*(long *)(lVar1 + 0x28) == local_58) {
          return;
        }
        goto LAB_00549734;
      }
    }
    uVar5 = uStack_68;
    if (-1 < local_60) {
      uVar5 = (ulong)local_60._7_1_;
    }
    if (uVar3 < uVar5 || uVar3 - uVar5 == 0) {
      ppcVar4 = (char **)local_70;
      uVar5 = uVar3;
      if (-1 < local_60) {
        if (0x16 < uVar3) {
          if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 00549694 to 005496bb has its CatchHandler @ 0054973c */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
LAB_00549734:
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        local_60 = CONCAT17((char)uVar3,(undefined7)local_60);
        ppcVar4 = &local_70;
        uVar5 = uStack_68;
      }
      uStack_68 = uVar5;
      *(char *)((long)ppcVar4 + uVar3) = '\0';
    }
    else {
                    /* try { // try from 00549564 to 0054956f has its CatchHandler @ 00549708 */
      FUN_0054809c(&local_70,uVar3 - uVar5,0);
    }
    uVar2 = (uint)local_60._7_1_;
    uVar5 = uVar3;
  } while( true );
}


// ===== 00549740  FUN_00549740 =====

void FUN_00549740(undefined8 param_1,char *param_2,long *param_3,int param_4)

{
  char *__nptr;
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  char *local_78;
  undefined1 auStack_70 [24];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_78 = (char *)0x0;
  __nptr = *(char **)param_2;
  if (-1 < param_2[0x17]) {
    __nptr = param_2;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  *piVar4 = 0;
  strtol(__nptr,&local_78,param_4);
  iVar2 = *piVar4;
  *piVar4 = iVar1;
  if (iVar2 == 0x22) {
    FUN_004d7ccc(auStack_70,param_1,": out of range");
    plVar5 = (long *)FUN_0054f64c(0x10);
                    /* try { // try from 00549818 to 0054981f has its CatchHandler @ 005498c8 */
    FUN_00547078(plVar5,auStack_70);
    *plVar5 = (long)(PTR_DAT_00d51d80 + 0x10);
    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 00549840 to 00549857 has its CatchHandler @ 005498c0 */
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(plVar5,PTR_PTR_00d51d70,PTR_FUN_00d51d78);
    }
  }
  else if ((long)local_78 - (long)__nptr == 0) {
    FUN_004d7ccc(auStack_70,param_1,": no conversion");
    plVar5 = (long *)FUN_0054f64c(0x10);
                    /* try { // try from 00549878 to 0054987f has its CatchHandler @ 005498bc */
    FUN_00547078(plVar5,auStack_70);
    *plVar5 = (long)(PTR_DAT_00d51d30 + 0x10);
    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 005498a0 to 005498b7 has its CatchHandler @ 005498b8 */
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(plVar5,PTR_PTR_00d51d40,PTR_FUN_00d51d38);
    }
  }
  else {
    if (param_3 != (long *)0x0) {
      *param_3 = (long)local_78 - (long)__nptr;
    }
    if (*(long *)(lVar3 + 0x28) == local_58) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00549900  FUN_00549900 =====

void FUN_00549900(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x549904);
  (*pcVar1)();
}


// ===== 00549904  FUN_00549904 =====

undefined1  [16] FUN_00549904(undefined8 param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = param_2 & 0xffffffff;
  auVar1._8_8_ = param_1;
  return auVar1;
}


// ===== 00549914  FUN_00549914 =====

bool FUN_00549914(long *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  long extraout_x1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))();
  return *(long *)(param_3 + 2) == extraout_x1 && *param_3 == iVar1;
}


// ===== 00549950  FUN_00549950 =====

bool FUN_00549950(long param_1,int *param_2,int param_3)

{
  return *(long *)(param_2 + 2) == param_1 && *param_2 == param_3;
}


// ===== 00549968  FUN_00549968 =====

void FUN_00549968(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char acStack_458 [1024];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined4 *)__errno();
  uVar1 = *puVar3;
  pcVar4 = (char *)__gnu_strerror_r(param_3 & 0xffffffff,acStack_458,0x400);
  if (*pcVar4 == '\0') {
    pcVar4 = acStack_458;
    snprintf(acStack_458,0x400,"Unknown error %d",param_3 & 0xffffffff);
  }
  *puVar3 = uVar1;
  FUN_004a3cf4(param_1,pcVar4);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00549a1c  FUN_00549a1c =====

char * FUN_00549a1c(void)

{
  return "generic";
}


// ===== 00549a28  FUN_00549a28 =====

void FUN_00549a28(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char acStack_458 [1024];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((int)param_3 < 0x1000) {
    puVar3 = (undefined4 *)__errno();
    uVar1 = *puVar3;
    pcVar4 = (char *)__gnu_strerror_r((ulong)param_3,acStack_458,0x400);
    if (*pcVar4 == '\0') {
      pcVar4 = acStack_458;
      snprintf(acStack_458,0x400,"Unknown error %d",(ulong)param_3);
    }
    *puVar3 = uVar1;
    FUN_004a3cf4(param_1,pcVar4);
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_58) {
    FUN_004a3cf4(param_1,"unspecified generic_category error");
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00549b1c  FUN_00549b1c =====

undefined ** FUN_00549b1c(void)

{
  int iVar1;
  
  if (((DAT_00d629c8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d629c8), iVar1 != 0)) {
    FUN_0054ff1c(&DAT_00d629c8);
  }
  return &PTR_PTR_FUN_00d595d0;
}


// ===== 00549b64  FUN_00549b64 =====

char * FUN_00549b64(void)

{
  return "system";
}


// ===== 00549b70  FUN_00549b70 =====

void FUN_00549b70(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char acStack_458 [1024];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((int)param_3 < 0x1000) {
    puVar3 = (undefined4 *)__errno();
    uVar1 = *puVar3;
    pcVar4 = (char *)__gnu_strerror_r((ulong)param_3,acStack_458,0x400);
    if (*pcVar4 == '\0') {
      pcVar4 = acStack_458;
      snprintf(acStack_458,0x400,"Unknown error %d",(ulong)param_3);
    }
    *puVar3 = uVar1;
    FUN_004a3cf4(param_1,pcVar4);
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_58) {
    FUN_004a3cf4(param_1,"unspecified system_category error");
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00549c64  FUN_00549c64 =====

int FUN_00549c64(undefined8 param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (param_2 < 0x1000) {
    if ((DAT_00d629c8 & 1) != 0) {
      return param_2;
    }
    puVar1 = &DAT_00d629c8;
    iVar2 = FUN_0054fdd4(&DAT_00d629c8);
  }
  else {
    if ((DAT_00d629d0 & 1) != 0) {
      return param_2;
    }
    puVar1 = &DAT_00d629d0;
    iVar2 = FUN_0054fdd4(&DAT_00d629d0);
  }
  if (iVar2 != 0) {
    FUN_0054ff1c(puVar1);
  }
  return param_2;
}


// ===== 00549d28  FUN_00549d28 =====

undefined ** FUN_00549d28(void)

{
  int iVar1;
  
  if (((DAT_00d629d0 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d629d0), iVar1 != 0)) {
    FUN_0054ff1c(&DAT_00d629d0);
  }
  return &PTR_PTR_FUN_00d595d8;
}


// ===== 00549d70  FUN_00549d70 =====

void FUN_00549d70(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00549d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 2) + 0x30))(*(long **)(param_1 + 2),*param_1);
  return;
}


// ===== 00549d88  FUN_00549d88 =====

void FUN_00549d88(undefined8 *param_1,int *param_2,undefined8 *param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *local_50;
  ulong uStack_48;
  byte local_39;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  iVar2 = *param_2;
  if (iVar2 != 0) {
    uVar1 = param_3[1];
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    }
    if (uVar1 != 0) {
      FUN_00547cac(param_3,&DAT_001c4dc3,2);
      iVar2 = *param_2;
    }
    (**(code **)(**(long **)(param_2 + 2) + 0x30))(&local_50,*(long **)(param_2 + 2),iVar2);
    ppuVar4 = (undefined1 **)local_50;
    if (-1 < (char)local_39) {
      uStack_48 = (ulong)local_39;
      ppuVar4 = &local_50;
    }
                    /* try { // try from 00549e1c to 00549e23 has its CatchHandler @ 00549e70 */
    FUN_00547cac(param_3,ppuVar4,uStack_48);
    if ((char)local_39 < '\0') {
      operator_delete(local_50);
    }
  }
  uVar7 = param_3[1];
  uVar6 = *param_3;
  *param_3 = 0;
  uVar5 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  param_1[1] = uVar7;
  *param_1 = uVar6;
  param_1[2] = uVar5;
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00549ea0  FUN_00549ea0 =====

void FUN_00549ea0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = param_2;
  uStack_30 = param_3;
  FUN_004c55b4(local_68,param_4);
                    /* try { // try from 00549ed0 to 00549edf has its CatchHandler @ 00549f64 */
  FUN_00549d88(local_50,&local_38,local_68);
                    /* try { // try from 00549ee0 to 00549eeb has its CatchHandler @ 00549f4c */
  FUN_005471b0(param_1,local_50);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  param_1[3] = uStack_30;
  param_1[2] = local_38;
  *param_1 = &PTR_thunk_FUN_00552450_00d22320;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00549f94  FUN_00549f94 =====

void FUN_00549f94(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = param_2;
  uStack_30 = param_3;
  FUN_004a3cf4(local_68,param_4);
                    /* try { // try from 00549fc4 to 00549fd3 has its CatchHandler @ 0054a058 */
  FUN_00549d88(local_50,&local_38,local_68);
                    /* try { // try from 00549fd4 to 00549fdf has its CatchHandler @ 0054a040 */
  FUN_005471b0(param_1,local_50);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  param_1[3] = uStack_30;
  param_1[2] = local_38;
  *param_1 = &PTR_thunk_FUN_00552450_00d22320;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0054a088  thunk_FUN_00552450 =====

void thunk_FUN_00552450(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = param_1[1];
  piVar5 = (int *)(lVar4 + -8);
  *param_1 = &PTR_FUN_00d23b20;
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
  FUN_0055234c(param_1);
  return;
}


// ===== 0054a08c  FUN_0054a08c =====

void FUN_0054a08c(void *param_1)

{
  FUN_00552450();
  operator_delete(param_1);
  return;
}


// ===== 0054a0b0  FUN_0054a0b0 =====

void FUN_0054a0b0(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0054f64c(0x20);
  if (((DAT_00d629d0 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d629d0), iVar1 != 0)) {
    FUN_0054ff1c(&DAT_00d629d0);
  }
                    /* try { // try from 0054a0f0 to 0054a0fb has its CatchHandler @ 0054a134 */
  FUN_00549f94(uVar2,param_1,&PTR_PTR_FUN_00d595d8,param_2);
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar2,&PTR_PTR_thunk_FUN_00552768_00d22338,thunk_FUN_00552450);
}


// ===== 0054a148  FUN_0054a148 =====

void FUN_0054a148(void)

{
  return;
}


// ===== 0054a14c  FUN_0054a14c =====

void FUN_0054a14c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x54a150);
  (*pcVar1)();
}


// ===== 0054a150  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0054a154  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0054a158  FUN_0054a158 =====

void FUN_0054a158(long *param_1)

{
  if (*param_1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00550060();
}


// ===== 0054a174  FUN_0054a174 =====

void FUN_0054a174(pthread_t *param_1)

{
  int iVar1;
  
  if (*param_1 == 0) {
    iVar1 = 0x16;
  }
  else {
    iVar1 = pthread_join(*param_1,(void **)0x0);
    if (iVar1 == 0) {
      *param_1 = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0054a0b0(iVar1,"thread::join failed");
}


// ===== 0054a1b8  FUN_0054a1b8 =====

void FUN_0054a1b8(pthread_t *param_1)

{
  int iVar1;
  
  if (*param_1 == 0) {
    iVar1 = 0x16;
  }
  else {
    iVar1 = pthread_detach(*param_1);
    if (iVar1 == 0) {
      *param_1 = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0054a0b0(iVar1,"thread::detach failed");
}


// ===== 0054a1f8  FUN_0054a1f8 =====

long FUN_0054a1f8(void)

{
  long lVar1;
  
                    /* try { // try from 0054a200 to 0054a207 has its CatchHandler @ 0054a218 */
  lVar1 = sysconf(0x61);
  if (lVar1 < 1) {
    lVar1 = 0;
  }
  return lVar1;
}


// ===== 0054a21c  FUN_0054a21c =====

undefined * FUN_0054a21c(void)

{
  int iVar1;
  
  if (((DAT_00d629e8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d629e8), iVar1 != 0)) {
                    /* try { // try from 0054a25c to 0054a26b has its CatchHandler @ 0054a280 */
    FUN_0054a298(&DAT_00d629d8);
    DAT_00d629e0 = &DAT_00d629d8;
    FUN_0054ff1c(&DAT_00d629e8);
  }
  return DAT_00d629e0;
}


// ===== 0054a298  FUN_0054a298 =====

void FUN_0054a298(pthread_key_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_key_create(param_1,FUN_0054a3f0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0054a0b0(iVar1,"__thread_specific_ptr construction failed");
}


// ===== 0054a2c4  FUN_0054a2c4 =====

void FUN_0054a2c4(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  void *pvVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  
  puVar2 = (undefined8 *)param_1[4];
  for (puVar9 = (undefined8 *)param_1[3]; puVar9 != puVar2; puVar9 = puVar9 + 2) {
    FUN_005467c8(puVar9[1]);
    FUN_00518478(*puVar9);
  }
  plVar3 = (long *)param_1[1];
  for (plVar10 = (long *)*param_1; plVar10 != plVar3; plVar10 = plVar10 + 1) {
                    /* try { // try from 0054a314 to 0054a317 has its CatchHandler @ 0054a380 */
    FUN_0051ffa8(*plVar10);
    plVar6 = (long *)*plVar10;
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  pvVar7 = (void *)param_1[3];
  if (pvVar7 != (void *)0x0) {
    param_1[4] = pvVar7;
    operator_delete(pvVar7);
  }
  pvVar7 = (void *)*param_1;
  if (pvVar7 == (void *)0x0) {
    return;
  }
  param_1[1] = pvVar7;
  operator_delete(pvVar7);
  return;
}


// ===== 0054a384  FUN_0054a384 =====

void FUN_0054a384(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  *param_1 = puVar1;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  return;
}


// ===== 0054a3b8  FUN_0054a3b8 =====

void FUN_0054a3b8(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    FUN_0054a2c4(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 0054a3f0  FUN_0054a3f0 =====

void FUN_0054a3f0(undefined8 *param_1)

{
  void *pvVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    pvVar1 = (void *)*param_1;
    if (pvVar1 != (void *)0x0) {
      FUN_0054a2c4(pvVar1);
      operator_delete(pvVar1);
    }
    operator_delete(param_1);
    return;
  }
  return;
}


// ===== 0054a430  FUN_0054a430 =====

char * FUN_0054a430(void)

{
  return "bad_variant_access";
}


// ===== 0054a43c  FUN_0054a43c =====

void FUN_0054a43c(void *param_1)

{
  FUN_0055234c();
  operator_delete(param_1);
  return;
}


// ===== 0054a460  thunk_FUN_00520cf4 =====

void thunk_FUN_00520cf4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_00d201b8;
  if (param_1[9] != 0) {
    lVar1 = param_1[9] + -1;
    do {
      (**(code **)(param_1[7] + lVar1 * 8))(0,param_1,*(undefined4 *)(param_1[8] + lVar1 * 4));
      lVar1 = lVar1 + -1;
    } while (lVar1 != -1);
  }
  FUN_0053ceec(param_1 + 6);
  free((void *)param_1[7]);
  free((void *)param_1[8]);
  free((void *)param_1[0xb]);
  free((void *)param_1[0xe]);
  return;
}


// ===== 0054a464  FUN_0054a464 =====

void FUN_0054a464(void *param_1)

{
  FUN_00520cf4();
  operator_delete(param_1);
  return;
}


// ===== 0054a488  FUN_0054a488 =====

void FUN_0054a488(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d22488;
  FUN_0053ceec(param_1 + 1);
  return;
}


// ===== 0054a498  FUN_0054a498 =====

void FUN_0054a498(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d22488;
  FUN_0053ceec(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 0054a4c8  FUN_0054a4c8 =====

void FUN_0054a4c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d22488;
  FUN_0053ce34(param_1 + 1);
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}


// ===== 0054a504  FUN_0054a504 =====

void FUN_0054a504(void)

{
  return;
}


// ===== 0054a508  FUN_0054a508 =====

void FUN_0054a508(void)

{
  return;
}


// ===== 0054a50c  FUN_0054a50c =====

undefined1  [16] FUN_0054a50c(void)

{
  return ZEXT816(0xffffffffffffffff) << 0x40;
}


// ===== 0054a518  FUN_0054a518 =====

undefined1  [16] FUN_0054a518(void)

{
  return ZEXT816(0xffffffffffffffff) << 0x40;
}


// ===== 0054a524  FUN_0054a524 =====

undefined8 FUN_0054a524(void)

{
  return 0;
}


// ===== 0054a52c  FUN_0054a52c =====

undefined8 FUN_0054a52c(void)

{
  return 0;
}


// ===== 0054a534  FUN_0054a534 =====

long FUN_0054a534(long *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  undefined1 *__src;
  size_t sVar2;
  long lVar3;
  undefined1 *puVar4;
  size_t __n;
  
  if (param_3 < 1) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      __src = (undefined1 *)param_1[3];
      if (__src < (undefined1 *)param_1[4]) {
        sVar2 = param_1[4] - (long)__src;
        __n = param_3 - lVar3;
        if ((long)sVar2 <= param_3 - lVar3) {
          __n = sVar2;
        }
        if (0x7ffffffe < (long)__n) {
          __n = 0x7fffffff;
        }
        puVar4 = param_2 + __n;
        if ((param_2 <= __src) && (__src < puVar4)) {
                    /* try { // try from 0054a618 to 0054a63f has its CatchHandler @ 0054a640 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                     ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
        }
        if (__n != 0) {
          memmove(param_2,__src,__n);
          __src = (undefined1 *)param_1[3];
        }
        param_1[3] = (long)(__src + (int)__n);
      }
      else {
        iVar1 = (**(code **)(*param_1 + 0x50))(param_1);
        if (iVar1 == -1) {
          return lVar3;
        }
        __n = 1;
        puVar4 = param_2 + 1;
        *param_2 = (char)iVar1;
      }
      lVar3 = __n + lVar3;
      param_2 = puVar4;
    } while (lVar3 < param_3);
  }
  return lVar3;
}


// ===== 0054a644  FUN_0054a644 =====

undefined8 FUN_0054a644(void)

{
  return 0xffffffff;
}


// ===== 0054a64c  FUN_0054a64c =====

ulong FUN_0054a64c(long *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x48))();
  if ((int)uVar1 != -1) {
    pbVar2 = (byte *)param_1[3];
    param_1[3] = (long)(pbVar2 + 1);
    uVar1 = (ulong)*pbVar2;
  }
  return uVar1;
}


// ===== 0054a68c  FUN_0054a68c =====

undefined8 FUN_0054a68c(void)

{
  return 0xffffffff;
}


// ===== 0054a694  FUN_0054a694 =====

long FUN_0054a694(long *param_1,undefined1 *param_2,long param_3)

{
  size_t __n;
  int iVar1;
  undefined1 *__dest;
  size_t sVar2;
  long lVar3;
  
  if (param_3 < 1) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      while( true ) {
        __dest = (undefined1 *)param_1[6];
        if ((undefined1 *)param_1[7] <= __dest) break;
        sVar2 = param_1[7] - (long)__dest;
        __n = param_3 - lVar3;
        if ((long)sVar2 <= param_3 - lVar3) {
          __n = sVar2;
        }
        if ((__dest <= param_2) && (param_2 < __dest + __n)) {
                    /* try { // try from 0054a770 to 0054a797 has its CatchHandler @ 0054a798 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                     ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
        }
        if (__n != 0) {
          memmove(__dest,param_2,__n);
          __dest = (undefined1 *)param_1[6];
        }
        param_2 = param_2 + __n;
        lVar3 = __n + lVar3;
        param_1[6] = (long)(__dest + __n);
        if (param_3 <= lVar3) {
          return lVar3;
        }
      }
      iVar1 = (**(code **)(*param_1 + 0x68))(param_1,*param_2);
      if (iVar1 == -1) {
        return lVar3;
      }
      param_2 = param_2 + 1;
      lVar3 = lVar3 + 1;
    } while (lVar3 < param_3);
  }
  return lVar3;
}


// ===== 0054a79c  FUN_0054a79c =====

undefined8 FUN_0054a79c(void)

{
  return 0xffffffff;
}


// ===== 0054a7a4  FUN_0054a7a4 =====

void FUN_0054a7a4(void)

{
  return;
}


// ===== 0054a7a8  FUN_0054a7a8 =====

void FUN_0054a7a8(long param_1)

{
  FUN_00520cf4(param_1 + 0x10);
  return;
}


// ===== 0054a7b0  FUN_0054a7b0 =====

void FUN_0054a7b0(long *param_1)

{
  FUN_00520cf4((long)param_1 + *(long *)(*param_1 + -0x18) + 0x10);
  return;
}


// ===== 0054a7c4  FUN_0054a7c4 =====

void FUN_0054a7c4(void *param_1)

{
  FUN_00520cf4((long)param_1 + 0x10);
  operator_delete(param_1);
  return;
}


// ===== 0054a7ec  FUN_0054a7ec =====

void FUN_0054a7ec(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_00520cf4((long)pvVar1 + 0x10);
  operator_delete(pvVar1);
  return;
}


// ===== 0054a81c  FUN_0054a81c =====

void FUN_0054a81c(undefined1 *param_1,long *param_2,uint param_3)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *param_1 = 0;
  lVar4 = (long)param_2 + *(long *)(*param_2 + -0x18);
  if (*(uint *)(lVar4 + 0x20) == 0) {
    if (*(long *)(lVar4 + 0x88) != 0) {
      FUN_0054aa28();
    }
    if (((param_3 & 1) == 0) &&
       ((*(byte *)((long)param_2 + *(long *)(*param_2 + -0x18) + 9) >> 4 & 1) != 0)) {
      FUN_00520ce8(auStack_50);
                    /* try { // try from 0054a8bc to 0054a8cb has its CatchHandler @ 0054aa00 */
      lVar4 = FUN_0053cfd4(auStack_50,PTR_DAT_00d51b28);
      FUN_0053ceec(auStack_50);
      plVar6 = *(long **)((long)param_2 + *(long *)(*param_2 + -0x18) + 0x28);
joined_r0x0054a8e8:
      if (plVar6 != (long *)0x0) {
        do {
          if ((plVar6[3] == plVar6[4]) &&
             (iVar3 = (**(code **)(*plVar6 + 0x48))(plVar6), iVar3 == -1)) break;
          if ((byte *)plVar6[3] == (byte *)plVar6[4]) {
            uVar5 = (**(code **)(*plVar6 + 0x48))(plVar6);
            uVar5 = uVar5 & 0xff;
            if ((uint)uVar5 >> 7 == 0) goto LAB_0054a958;
LAB_0054a980:
            if ((plVar6[3] != plVar6[4]) ||
               (iVar3 = (**(code **)(*plVar6 + 0x48))(plVar6), iVar3 != -1)) goto LAB_0054a9bc;
            break;
          }
          bVar1 = *(byte *)plVar6[3];
          uVar5 = (ulong)bVar1;
          if ((char)bVar1 < '\0') goto LAB_0054a980;
LAB_0054a958:
          if ((*(ulong *)(*(long *)(lVar4 + 0x10) + uVar5 * 8) & 1) == 0) goto LAB_0054a980;
          if (plVar6[3] != plVar6[4]) goto code_r0x0054a970;
          (**(code **)(*plVar6 + 0x50))(plVar6);
          if (plVar6 == (long *)0x0) break;
        } while( true );
      }
      lVar4 = (long)param_2 + *(long *)(*param_2 + -0x18);
      FUN_00520d98(lVar4,*(uint *)(lVar4 + 0x20) | 6);
    }
LAB_0054a9bc:
    *param_1 = *(int *)((long)param_2 + *(long *)(*param_2 + -0x18) + 0x20) == 0;
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_48) {
    FUN_00520d98(lVar4,*(uint *)(lVar4 + 0x20) | 4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0054a970:
  plVar6[3] = plVar6[3] + 1;
  goto joined_r0x0054a8e8;
}


// ===== 0054aa28  FUN_0054aa28 =====

long * FUN_0054aa28(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 local_48 [8];
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *param_1;
  if (*(long *)((long)param_1 + *(long *)(lVar3 + -0x18) + 0x28) != 0) {
    local_48[0] = 0;
    local_40 = param_1;
    if (*(int *)((long)param_1 + *(long *)(lVar3 + -0x18) + 0x20) == 0) {
      if (*(long *)((long)param_1 + *(long *)(lVar3 + -0x18) + 0x88) != 0) {
                    /* try { // try from 0054aa80 to 0054aa83 has its CatchHandler @ 0054aaf8 */
        FUN_0054aa28();
        lVar3 = *param_1;
      }
      local_48[0] = 1;
                    /* try { // try from 0054aaa4 to 0054aac7 has its CatchHandler @ 0054ab00 */
      iVar2 = (**(code **)(**(long **)((long)param_1 + *(long *)(lVar3 + -0x18) + 0x28) + 0x30))();
      if (iVar2 == -1) {
        lVar3 = (long)param_1 + *(long *)(*param_1 + -0x18);
        FUN_00520d98(lVar3,*(uint *)(lVar3 + 0x20) | 1);
      }
    }
    FUN_0054b498(local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0054ab54  thunk_FUN_0054ab58 =====

long * thunk_FUN_0054ab58(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_48 [8];
  char acStack_40 [4];
  uint uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_3c = 0;
  FUN_0054a81c(acStack_40,param_1,0);
  if (acStack_40[0] != '\0') {
    FUN_00520ce8(auStack_48,(long)param_1 + *(long *)(*param_1 + -0x18));
    plVar3 = (long *)FUN_0053cfd4(auStack_48,PTR_DAT_00d51de8);
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    (**(code **)(*plVar3 + 0x58))(plVar3,*(undefined8 *)(lVar1 + 0x28),0,lVar1,&uStack_3c,param_2);
    FUN_0053ceec(auStack_48);
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_00520d98(lVar1,*(uint *)(lVar1 + 0x20) | uStack_3c);
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0054ab58  FUN_0054ab58 =====

long * FUN_0054ab58(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_48 [8];
  char local_40 [4];
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  FUN_0054a81c(local_40,param_1,0);
  if (local_40[0] != '\0') {
                    /* try { // try from 0054aba8 to 0054abaf has its CatchHandler @ 0054ac34 */
    FUN_00520ce8(auStack_48,(long)param_1 + *(long *)(*param_1 + -0x18));
                    /* try { // try from 0054abb0 to 0054abe7 has its CatchHandler @ 0054ac3c */
    plVar3 = (long *)FUN_0053cfd4(auStack_48,PTR_DAT_00d51de8);
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    (**(code **)(*plVar3 + 0x58))(plVar3,*(undefined8 *)(lVar1 + 0x28),0,lVar1,&local_3c,param_2);
    FUN_0053ceec(auStack_48);
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_00520d98(lVar1,*(uint *)(lVar1 + 0x20) | local_3c);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0054acc8  FUN_0054acc8 =====

long * FUN_0054acc8(long *param_1,long param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  
  param_1[1] = 0;
  lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
  if (*(uint *)(lVar4 + 0x20) != 0) {
    uVar2 = *(uint *)(lVar4 + 0x20) | 4;
    goto LAB_0054adac;
  }
  if ((*(long *)(lVar4 + 0x88) != 0) &&
     (FUN_0054aa28(), *(int *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x20) != 0)) {
    return param_1;
  }
  if (param_2 == 0x7fffffffffffffff) {
    do {
      plVar3 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28);
      pbVar1 = (byte *)plVar3[3];
      if (pbVar1 == (byte *)plVar3[4]) {
                    /* try { // try from 0054ad88 to 0054ad8b has its CatchHandler @ 0054ae24 */
        uVar2 = (**(code **)(*plVar3 + 0x50))();
        if (uVar2 == 0xffffffff) goto LAB_0054ad94;
      }
      else {
        plVar3[3] = (long)(pbVar1 + 1);
        uVar2 = (uint)*pbVar1;
      }
      param_1[1] = param_1[1] + 1;
    } while (uVar2 != param_3);
  }
  else {
    lVar4 = param_1[1];
    if (lVar4 < param_2) {
      do {
        plVar3 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28);
        pbVar1 = (byte *)plVar3[3];
        if (pbVar1 == (byte *)plVar3[4]) {
                    /* try { // try from 0054ae08 to 0054ae0b has its CatchHandler @ 0054ae20 */
          uVar2 = (**(code **)(*plVar3 + 0x50))();
          if (uVar2 == 0xffffffff) goto LAB_0054ad94;
          lVar4 = param_1[1];
        }
        else {
          plVar3[3] = (long)(pbVar1 + 1);
          uVar2 = (uint)*pbVar1;
        }
        lVar4 = lVar4 + 1;
        param_1[1] = lVar4;
      } while (uVar2 != param_3 && lVar4 < param_2);
    }
  }
  uVar2 = 0;
  goto LAB_0054ad98;
LAB_0054ad94:
  uVar2 = 2;
LAB_0054ad98:
  lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
  uVar2 = *(uint *)(lVar4 + 0x20) | uVar2;
LAB_0054adac:
  FUN_00520d98(lVar4,uVar2);
  return param_1;
}


// ===== 0054ae74  FUN_0054ae74 =====

uint FUN_0054ae74(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  
  param_1[1] = 0;
  lVar3 = *(long *)(*param_1 + -0x18);
  lVar1 = (long)param_1 + lVar3;
  if (*(uint *)(lVar1 + 0x20) == 0) {
    if (*(long *)(lVar1 + 0x88) != 0) {
      FUN_0054aa28();
      lVar3 = *(long *)(*param_1 + -0x18);
      if (*(int *)((long)param_1 + lVar3 + 0x20) != 0) goto LAB_0054aea4;
    }
    plVar2 = *(long **)((long)param_1 + lVar3 + 0x28);
    if ((byte *)plVar2[3] == (byte *)plVar2[4]) {
                    /* try { // try from 0054aef0 to 0054aef3 has its CatchHandler @ 0054af2c */
      uVar4 = (**(code **)(*plVar2 + 0x48))();
    }
    else {
      uVar4 = (uint)*(byte *)plVar2[3];
    }
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_00520d98(lVar1,*(uint *)(lVar1 + 0x20) | (uint)(uVar4 == 0xffffffff) << 1);
  }
  else {
    FUN_00520d98(lVar1,*(uint *)(lVar1 + 0x20) | 4);
LAB_0054aea4:
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


// ===== 0054af80  FUN_0054af80 =====

long * FUN_0054af80(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  param_1[1] = 0;
  lVar4 = *(long *)(*param_1 + -0x18);
  lVar2 = (long)param_1 + lVar4;
  if (*(uint *)(lVar2 + 0x20) == 0) {
    if (*(long *)(lVar2 + 0x88) != 0) {
      FUN_0054aa28();
      lVar4 = *(long *)(*param_1 + -0x18);
      if (*(int *)((long)param_1 + lVar4 + 0x20) != 0) goto LAB_0054afb4;
    }
    plVar1 = *(long **)((long)param_1 + lVar4 + 0x28);
                    /* try { // try from 0054aff4 to 0054afff has its CatchHandler @ 0054b03c */
    lVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3);
    uVar3 = 0;
    if (lVar2 != param_3) {
      uVar3 = 6;
    }
    param_1[1] = lVar2;
  }
  else {
    FUN_00520d98(lVar2,*(uint *)(lVar2 + 0x20) | 4);
LAB_0054afb4:
    uVar3 = 4;
  }
  lVar2 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00520d98(lVar2,*(uint *)(lVar2 + 0x20) | uVar3);
  return param_1;
}


// ===== 0054b08c  FUN_0054b08c =====

undefined1  [16] FUN_0054b08c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar3 = *(long *)(*param_1 + -0x18);
  lVar1 = (long)param_1 + lVar3;
  if (*(uint *)(lVar1 + 0x20) == 0) {
    if (*(long *)(lVar1 + 0x88) != 0) {
      FUN_0054aa28();
      lVar3 = *(long *)(*param_1 + -0x18);
      if (*(int *)((long)param_1 + lVar3 + 0x20) != 0) goto LAB_0054b0bc;
    }
    plVar2 = *(long **)((long)param_1 + lVar3 + 0x28);
                    /* try { // try from 0054b0f8 to 0054b107 has its CatchHandler @ 0054b144 */
    auVar4 = (**(code **)(*plVar2 + 0x20))(plVar2,0,1,8);
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_00520d98(lVar1,*(undefined4 *)(lVar1 + 0x20));
  }
  else {
    FUN_00520d98(lVar1,*(uint *)(lVar1 + 0x20) | 4);
LAB_0054b0bc:
    auVar4 = ZEXT816(0xffffffffffffffff) << 0x40;
  }
  return auVar4;
}


// ===== 0054b19c  FUN_0054b19c =====

long * FUN_0054b19c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long extraout_x1;
  long lVar5;
  
  lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
  uVar1 = *(uint *)(lVar4 + 0x20) & 0xfffffffd;
  FUN_00520d98(lVar4,uVar1);
  lVar5 = *(long *)(*param_1 + -0x18);
  lVar4 = (long)param_1 + lVar5;
  if (*(uint *)(lVar4 + 0x20) == 0) {
    if (*(long *)(lVar4 + 0x88) != 0) {
      FUN_0054aa28();
      lVar5 = *(long *)(*param_1 + -0x18);
      if (*(int *)((long)param_1 + lVar5 + 0x20) != 0) {
        return param_1;
      }
    }
    plVar3 = *(long **)((long)param_1 + lVar5 + 0x28);
                    /* try { // try from 0054b220 to 0054b22f has its CatchHandler @ 0054b268 */
    (**(code **)(*plVar3 + 0x28))(plVar3,param_2,param_3,8);
    uVar2 = uVar1 | 4;
    if (extraout_x1 != -1) {
      uVar2 = uVar1;
    }
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
    uVar2 = *(uint *)(lVar4 + 0x20) | uVar2;
  }
  else {
    uVar2 = *(uint *)(lVar4 + 0x20) | 4;
  }
  FUN_00520d98(lVar4,uVar2);
  return param_1;
}


// ===== 0054b2b8  FUN_0054b2b8 =====

long * FUN_0054b2b8(long *param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long extraout_x1;
  long lVar5;
  
  lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
  uVar1 = *(uint *)(lVar4 + 0x20) & 0xfffffffd;
  FUN_00520d98(lVar4,uVar1);
  lVar5 = *(long *)(*param_1 + -0x18);
  lVar4 = (long)param_1 + lVar5;
  if (*(uint *)(lVar4 + 0x20) == 0) {
    if (*(long *)(lVar4 + 0x88) != 0) {
      FUN_0054aa28();
      lVar5 = *(long *)(*param_1 + -0x18);
      if (*(int *)((long)param_1 + lVar5 + 0x20) != 0) {
        return param_1;
      }
    }
    plVar3 = *(long **)((long)param_1 + lVar5 + 0x28);
                    /* try { // try from 0054b33c to 0054b34b has its CatchHandler @ 0054b384 */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3,8);
    uVar2 = uVar1 | 4;
    if (extraout_x1 != -1) {
      uVar2 = uVar1;
    }
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
    uVar2 = *(uint *)(lVar4 + 0x20) | uVar2;
  }
  else {
    uVar2 = *(uint *)(lVar4 + 0x20) | 4;
  }
  FUN_00520d98(lVar4,uVar2);
  return param_1;
}


// ===== 0054b3d4  FUN_0054b3d4 =====

void FUN_0054b3d4(void)

{
  return;
}


// ===== 0054b3d8  FUN_0054b3d8 =====

void FUN_0054b3d8(long param_1)

{
  FUN_00520cf4(param_1 + 8);
  return;
}


// ===== 0054b3e0  FUN_0054b3e0 =====

void FUN_0054b3e0(long *param_1)

{
  FUN_00520cf4((long)param_1 + *(long *)(*param_1 + -0x18) + 8);
  return;
}


// ===== 0054b3f4  FUN_0054b3f4 =====

void FUN_0054b3f4(void *param_1)

{
  FUN_00520cf4((long)param_1 + 8);
  operator_delete(param_1);
  return;
}


// ===== 0054b41c  FUN_0054b41c =====

void FUN_0054b41c(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_00520cf4((long)pvVar1 + 8);
  operator_delete(pvVar1);
  return;
}


// ===== 0054b44c  FUN_0054b44c =====

void FUN_0054b44c(undefined1 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = 0;
  *(long **)(param_1 + 8) = param_2;
  if (*(int *)((long)param_2 + *(long *)(lVar1 + -0x18) + 0x20) == 0) {
    if (*(long *)((long)param_2 + *(long *)(lVar1 + -0x18) + 0x88) != 0) {
      FUN_0054aa28();
    }
    *param_1 = 1;
  }
  return;
}


// ===== 0054b498  FUN_0054b498 =====

void FUN_0054b498(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 8);
  lVar4 = *(long *)(*plVar3 + -0x18);
                    /* try { // try from 0054b4f4 to 0054b51b has its CatchHandler @ 0054b528 */
  if ((((*(long *)((long)plVar3 + lVar4 + 0x28) != 0) &&
       (*(int *)((long)plVar3 + lVar4 + 0x20) == 0)) &&
      ((*(byte *)((long)plVar3 + lVar4 + 9) >> 5 & 1) != 0)) &&
     ((uVar2 = FUN_005184ec(), (uVar2 & 1) == 0 &&
      (iVar1 = (**(code **)(**(long **)((long)*(long **)(param_1 + 8) +
                                       *(long *)(**(long **)(param_1 + 8) + -0x18) + 0x28) + 0x30))
                         (), iVar1 == -1)))) {
    lVar4 = (long)*(long **)(param_1 + 8) + *(long *)(**(long **)(param_1 + 8) + -0x18);
    FUN_00520d98(lVar4,*(uint *)(lVar4 + 0x20) | 1);
  }
  return;
}


// ===== 0054b538  FUN_0054b538 =====

long * FUN_0054b538(long *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 local_70 [8];
  long *local_68;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar5 = *param_1;
  local_70[0] = 0;
  local_68 = param_1;
  if (*(int *)((long)param_1 + *(long *)(lVar5 + -0x18) + 0x20) == 0) {
    if (*(long *)((long)param_1 + *(long *)(lVar5 + -0x18) + 0x88) != 0) {
                    /* try { // try from 0054b58c to 0054b58f has its CatchHandler @ 0054b69c */
      FUN_0054aa28();
      lVar5 = *param_1;
    }
    local_70[0] = 1;
                    /* try { // try from 0054b5a4 to 0054b5ab has its CatchHandler @ 0054b6b8 */
    FUN_00520ce8(auStack_60,(long)param_1 + *(long *)(lVar5 + -0x18));
                    /* try { // try from 0054b5ac to 0054b5bb has its CatchHandler @ 0054b6a8 */
    plVar3 = (long *)FUN_0053cfd4(auStack_60,PTR_DAT_00d51df0);
    FUN_0053ceec(auStack_60);
    lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
    uVar2 = *(uint *)(lVar5 + 0x90);
    uVar6 = *(undefined8 *)(lVar5 + 0x28);
    if (uVar2 == 0xffffffff) {
                    /* try { // try from 0054b5e4 to 0054b5ef has its CatchHandler @ 0054b6bc */
      FUN_00520ce8(auStack_60,lVar5);
                    /* try { // try from 0054b5f0 to 0054b60f has its CatchHandler @ 0054b6a4 */
      plVar4 = (long *)FUN_0053cfd4(auStack_60,PTR_DAT_00d51b28);
      uVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
      FUN_0053ceec(auStack_60);
      uVar2 = uVar2 & 0xff;
      *(uint *)(lVar5 + 0x90) = uVar2;
    }
                    /* try { // try from 0054b62c to 0054b63f has its CatchHandler @ 0054b6bc */
    lVar5 = (**(code **)(*plVar3 + 0x18))(plVar3,uVar6,lVar5,uVar2,param_2 & 1);
    if (lVar5 == 0) {
      lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 0054b65c to 0054b65f has its CatchHandler @ 0054b698 */
      FUN_00520d98(lVar5,*(uint *)(lVar5 + 0x20) | 5);
    }
  }
  FUN_0054b498(local_70);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0054b710  FUN_0054b710 =====

long * FUN_0054b710(long *param_1,ushort param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 local_70 [8];
  long *local_68;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar7 = *param_1;
  local_70[0] = 0;
  local_68 = param_1;
  if (*(int *)((long)param_1 + *(long *)(lVar7 + -0x18) + 0x20) == 0) {
    if (*(long *)((long)param_1 + *(long *)(lVar7 + -0x18) + 0x88) != 0) {
                    /* try { // try from 0054b764 to 0054b767 has its CatchHandler @ 0054b894 */
      FUN_0054aa28();
      lVar7 = *param_1;
    }
    local_70[0] = 1;
    uVar2 = *(uint *)((long)param_1 + *(long *)(lVar7 + -0x18) + 8);
                    /* try { // try from 0054b780 to 0054b787 has its CatchHandler @ 0054b8b0 */
    FUN_00520ce8(auStack_60);
                    /* try { // try from 0054b788 to 0054b797 has its CatchHandler @ 0054b8a0 */
    plVar5 = (long *)FUN_0053cfd4(auStack_60,PTR_DAT_00d51df0);
    FUN_0053ceec(auStack_60);
    lVar7 = (long)param_1 + *(long *)(*param_1 + -0x18);
    uVar4 = *(uint *)(lVar7 + 0x90);
    uVar8 = *(undefined8 *)(lVar7 + 0x28);
    if (uVar4 == 0xffffffff) {
                    /* try { // try from 0054b7c0 to 0054b7cb has its CatchHandler @ 0054b8b4 */
      FUN_00520ce8(auStack_60,lVar7);
                    /* try { // try from 0054b7cc to 0054b7eb has its CatchHandler @ 0054b89c */
      plVar6 = (long *)FUN_0053cfd4(auStack_60,PTR_DAT_00d51b28);
      uVar4 = (**(code **)(*plVar6 + 0x38))(plVar6,0x20);
      FUN_0053ceec(auStack_60);
      uVar4 = uVar4 & 0xff;
      *(uint *)(lVar7 + 0x90) = uVar4;
    }
    uVar2 = uVar2 & 0x4a;
    uVar1 = (ulong)param_2;
    if (uVar2 != 8 && uVar2 != 0x40) {
      uVar1 = (long)(short)param_2;
    }
                    /* try { // try from 0054b828 to 0054b837 has its CatchHandler @ 0054b8b4 */
    lVar7 = (**(code **)(*plVar5 + 0x20))(plVar5,uVar8,lVar7,uVar4,uVar1);
    if (lVar7 == 0) {
      lVar7 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 0054b854 to 0054b857 has its CatchHandler @ 0054b890 */
      FUN_00520d98(lVar7,*(uint *)(lVar7 + 0x20) | 5);
    }
  }
  FUN_0054b498(local_70);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0054b908  FUN_0054b908 =====

long * FUN_0054b908(long *param_1,undefined2 param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 local_70 [8];
  long *local_68;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar5 = *param_1;
  local_70[0] = 0;
  local_68 = param_1;
  if (*(int *)((long)param_1 + *(long *)(lVar5 + -0x18) + 0x20) == 0) {
    if (*(long *)((long)param_1 + *(long *)(lVar5 + -0x18) + 0x88) != 0) {
                    /* try { // try from 0054b95c to 0054b95f has its CatchHandler @ 0054ba6c */
      FUN_0054aa28();
      lVar5 = *param_1;
    }
    local_70[0] = 1;
                    /* try { // try from 0054b974 to 0054b97b has its CatchHandler @ 0054ba88 */
    FUN_00520ce8(auStack_60,(long)param_1 + *(long *)(lVar5 + -0x18));
                    /* try { // try from 0054b97c to 0054b98b has its CatchHandler @ 0054ba78 */
    plVar3 = (long *)FUN_0053cfd4(auStack_60,PTR_DAT_00d51df0);
    FUN_0053ceec(auStack_60);
    lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
    uVar2 = *(uint *)(lVar5 + 0x90);
    uVar6 = *(undefined8 *)(lVar5 + 0x28);
    if (uVar2 == 0xffffffff) {
                    /* try { // try from 0054b9b4 to 0054b9bf has its CatchHandler @ 0054ba8c */
      FUN_00520ce8(auStack_60,lVar5);
                    /* try { // try from 0054b9c0 to 0054b9df has its CatchHandler @ 0054ba74 */
      plVar4 = (long *)FUN_0053cfd4(auStack_60,PTR_DAT_00d51b28);
      uVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
      FUN_0053ceec(auStack_60);
      uVar2 = uVar2 & 0xff;
      *(uint *)(lVar5 + 0x90) = uVar2;
    }
                    /* try { // try from 0054ba00 to 0054ba0f has its CatchHandler @ 0054ba8c */
    lVar5 = (**(code **)(*plVar3 + 0x30))(plVar3,uVar6,lVar5,uVar2,param_2);
    if (lVar5 == 0) {
      lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 0054ba2c to 0054ba2f has its CatchHandler @ 0054ba68 */
      FUN_00520d98(lVar5,*(uint *)(lVar5 + 0x20) | 5);
    }
  }
  FUN_0054b498(local_70);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0054bae0  FUN_0054bae0 =====

long * FUN_0054bae0(long *param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 local_70 [8];
  long *local_68;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar7 = *param_1;
  local_70[0] = 0;
  local_68 = param_1;
  if (*(int *)((long)param_1 + *(long *)(lVar7 + -0x18) + 0x20) == 0) {
    if (*(long *)((long)param_1 + *(long *)(lVar7 + -0x18) + 0x88) != 0) {
                    /* try { // try from 0054bb34 to 0054bb37 has its CatchHandler @ 0054bc64 */
      FUN_0054aa28();
      lVar7 = *param_1;
    }
    local_70[0] = 1;
    uVar2 = *(uint *)((long)param_1 + *(long *)(lVar7 + -0x18) + 8);
                    /* try { // try from 0054bb50 to 0054bb57 has its CatchHandler @ 0054bc80 */
    FUN_00520ce8(auStack_60);
                    /* try { // try from 0054bb58 to 0054bb67 has its CatchHandler @ 0054bc70 */
    plVar5 = (long *)FUN_0053cfd4(auStack_60,PTR_DAT_00d51df0);
    FUN_0053ceec(auStack_60);
    lVar7 = (long)param_1 + *(long *)(*param_1 + -0x18);
    uVar4 = *(uint *)(lVar7 + 0x90);
    uVar8 = *(undefined8 *)(lVar7 + 0x28);
    if (uVar4 == 0xffffffff) {
                    /* try { // try from 0054bb90 to 0054bb9b has its CatchHandler @ 0054bc84 */
      FUN_00520ce8(auStack_60,lVar7);
                    /* try { // try from 0054bb9c to 0054bbbb has its CatchHandler @ 0054bc6c */
      plVar6 = (long *)FUN_0053cfd4(auStack_60,PTR_DAT_00d51b28);
      uVar4 = (**(code **)(*plVar6 + 0x38))(plVar6,0x20);
      FUN_0053ceec(auStack_60);
      uVar4 = uVar4 & 0xff;
      *(uint *)(lVar7 + 0x90) = uVar4;
    }
    uVar2 = uVar2 & 0x4a;
    uVar1 = (ulong)param_2;
    if (uVar2 != 8 && uVar2 != 0x40) {
      uVar1 = (long)(int)param_2;
    }
                    /* try { // try from 0054bbf8 to 0054bc07 has its CatchHandler @ 0054bc84 */
    lVar7 = (**(code **)(*plVar5 + 0x20))(plVar5,uVar8,lVar7,uVar4,uVar1);
    if (lVar7 == 0) {
      lVar7 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 0054bc24 to 0054bc27 has its CatchHandler @ 0054bc60 */
      FUN_00520d98(lVar7,*(uint *)(lVar7 + 0x20) | 5);
    }
  }
  FUN_0054b498(local_70);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0054bcd8  FUN_0054bcd8 =====

long * FUN_0054bcd8(long *param_1,undefined4 param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 local_70 [8];
  long *local_68;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar5 = *param_1;
  local_70[0] = 0;
  local_68 = param_1;
  if (*(int *)((long)param_1 + *(long *)(lVar5 + -0x18) + 0x20) == 0) {
    if (*(long *)((long)param_1 + *(long *)(lVar5 + -0x18) + 0x88) != 0) {
                    /* try { // try from 0054bd2c to 0054bd2f has its CatchHandler @ 0054be3c */
      FUN_0054aa28();
      lVar5 = *param_1;
    }
    local_70[0] = 1;
                    /* try { // try from 0054bd44 to 0054bd4b has its CatchHandler @ 0054be58 */
    FUN_00520ce8(auStack_60,(long)param_1 + *(long *)(lVar5 + -0x18));
                    /* try { // try from 0054bd4c to 0054bd5b has its CatchHandler @ 0054be48 */
    plVar3 = (long *)FUN_0053cfd4(auStack_60,PTR_DAT_00d51df0);
    FUN_0053ceec(auStack_60);
    lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
    uVar2 = *(uint *)(lVar5 + 0x90);
    uVar6 = *(undefined8 *)(lVar5 + 0x28);
    if (uVar2 == 0xffffffff) {
                    /* try { // try from 0054bd84 to 0054bd8f has its CatchHandler @ 0054be5c */
      FUN_00520ce8(auStack_60,lVar5);
                    /* try { // try from 0054bd90 to 0054bdaf has its CatchHandler @ 0054be44 */
      plVar4 = (long *)FUN_0053cfd4(auStack_60,PTR_DAT_00d51b28);
      uVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
      FUN_0053ceec(auStack_60);
      uVar2 = uVar2 & 0xff;
      *(uint *)(lVar5 + 0x90) = uVar2;
    }
                    /* try { // try from 0054bdd0 to 0054bddf has its CatchHandler @ 0054be5c */
    lVar5 = (**(code **)(*plVar3 + 0x30))(plVar3,uVar6,lVar5,uVar2,param_2);
    if (lVar5 == 0) {
      lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 0054bdfc to 0054bdff has its CatchHandler @ 0054be38 */
      FUN_00520d98(lVar5,*(uint *)(lVar5 + 0x20) | 5);
    }
  }
  FUN_0054b498(local_70);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0054beb0  FUN_0054beb0 =====

long * FUN_0054beb0(long *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 local_70 [8];
  long *local_68;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar5 = *param_1;
  local_70[0] = 0;
  local_68 = param_1;
  if (*(int *)((long)param_1 + *(long *)(lVar5 + -0x18) + 0x20) == 0) {
    if (*(long *)((long)param_1 + *(long *)(lVar5 + -0x18) + 0x88) != 0) {
                    /* try { // try from 0054bf04 to 0054bf07 has its CatchHandler @ 0054c014 */
      FUN_0054aa28();
      lVar5 = *param_1;
    }
    local_70[0] = 1;
                    /* try { // try from 0054bf1c to 0054bf23 has its CatchHandler @ 0054c030 */
    FUN_00520ce8(auStack_60,(long)param_1 + *(long *)(lVar5 + -0x18));
                    /* try { // try from 0054bf24 to 0054bf33 has its CatchHandler @ 0054c020 */
    plVar3 = (long *)FUN_0053cfd4(auStack_60,PTR_DAT_00d51df0);
    FUN_0053ceec(auStack_60);
    lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
    uVar2 = *(uint *)(lVar5 + 0x90);
    uVar6 = *(undefined8 *)(lVar5 + 0x28);
    if (uVar2 == 0xffffffff) {
                    /* try { // try from 0054bf5c to 0054bf67 has its CatchHandler @ 0054c034 */
      FUN_00520ce8(auStack_60,lVar5);
                    /* try { // try from 0054bf68 to 0054bf87 has its CatchHandler @ 0054c01c */
      plVar4 = (long *)FUN_0053cfd4(auStack_60,PTR_DAT_00d51b28);
      uVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
      FUN_0053ceec(auStack_60);
      uVar2 = uVar2 & 0xff;
      *(uint *)(lVar5 + 0x90) = uVar2;
    }
                    /* try { // try from 0054bfa4 to 0054bfb7 has its CatchHandler @ 0054c034 */
    lVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,uVar6,lVar5,uVar2,param_2);
    if (lVar5 == 0) {
      lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 0054bfd4 to 0054bfd7 has its CatchHandler @ 0054c010 */
      FUN_00520d98(lVar5,*(uint *)(lVar5 + 0x20) | 5);
    }
  }
  FUN_0054b498(local_70);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0054c088  FUN_0054c088 =====

long * FUN_0054c088(long *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 local_70 [8];
  long *local_68;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar5 = *param_1;
  local_70[0] = 0;
  local_68 = param_1;
  if (*(int *)((long)param_1 + *(long *)(lVar5 + -0x18) + 0x20) == 0) {
    if (*(long *)((long)param_1 + *(long *)(lVar5 + -0x18) + 0x88) != 0) {
                    /* try { // try from 0054c0dc to 0054c0df has its CatchHandler @ 0054c1ec */
      FUN_0054aa28();
      lVar5 = *param_1;
    }
    local_70[0] = 1;
                    /* try { // try from 0054c0f4 to 0054c0fb has its CatchHandler @ 0054c208 */
    FUN_00520ce8(auStack_60,(long)param_1 + *(long *)(lVar5 + -0x18));
                    /* try { // try from 0054c0fc to 0054c10b has its CatchHandler @ 0054c1f8 */
    plVar3 = (long *)FUN_0053cfd4(auStack_60,PTR_DAT_00d51df0);
    FUN_0053ceec(auStack_60);
    lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
    uVar2 = *(uint *)(lVar5 + 0x90);
    uVar6 = *(undefined8 *)(lVar5 + 0x28);
    if (uVar2 == 0xffffffff) {
                    /* try { // try from 0054c134 to 0054c13f has its CatchHandler @ 0054c20c */
      FUN_00520ce8(auStack_60,lVar5);
                    /* try { // try from 0054c140 to 0054c15f has its CatchHandler @ 0054c1f4 */
      plVar4 = (long *)FUN_0053cfd4(auStack_60,PTR_DAT_00d51b28);
      uVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
      FUN_0053ceec(auStack_60);
      uVar2 = uVar2 & 0xff;
      *(uint *)(lVar5 + 0x90) = uVar2;
    }
                    /* try { // try from 0054c17c to 0054c18f has its CatchHandler @ 0054c20c */
    lVar5 = (**(code **)(*plVar3 + 0x30))(plVar3,uVar6,lVar5,uVar2,param_2);
    if (lVar5 == 0) {
      lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 0054c1ac to 0054c1af has its CatchHandler @ 0054c1e8 */
      FUN_00520d98(lVar5,*(uint *)(lVar5 + 0x20) | 5);
    }
  }
  FUN_0054b498(local_70);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0054c260  FUN_0054c260 =====

long * FUN_0054c260(long *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 local_70 [8];
  long *local_68;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar5 = *param_1;
  local_70[0] = 0;
  local_68 = param_1;
  if (*(int *)((long)param_1 + *(long *)(lVar5 + -0x18) + 0x20) == 0) {
    if (*(long *)((long)param_1 + *(long *)(lVar5 + -0x18) + 0x88) != 0) {
                    /* try { // try from 0054c2b4 to 0054c2b7 has its CatchHandler @ 0054c3c4 */
      FUN_0054aa28();
      lVar5 = *param_1;
    }
    local_70[0] = 1;
                    /* try { // try from 0054c2cc to 0054c2d3 has its CatchHandler @ 0054c3e0 */
    FUN_00520ce8(auStack_60,(long)param_1 + *(long *)(lVar5 + -0x18));
                    /* try { // try from 0054c2d4 to 0054c2e3 has its CatchHandler @ 0054c3d0 */
    plVar3 = (long *)FUN_0053cfd4(auStack_60,PTR_DAT_00d51df0);
    FUN_0053ceec(auStack_60);
    lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
    uVar2 = *(uint *)(lVar5 + 0x90);
    uVar6 = *(undefined8 *)(lVar5 + 0x28);
    if (uVar2 == 0xffffffff) {
                    /* try { // try from 0054c30c to 0054c317 has its CatchHandler @ 0054c3e4 */
      FUN_00520ce8(auStack_60,lVar5);
                    /* try { // try from 0054c318 to 0054c337 has its CatchHandler @ 0054c3cc */
      plVar4 = (long *)FUN_0053cfd4(auStack_60,PTR_DAT_00d51b28);
      uVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
      FUN_0053ceec(auStack_60);
      uVar2 = uVar2 & 0xff;
      *(uint *)(lVar5 + 0x90) = uVar2;
    }
                    /* try { // try from 0054c354 to 0054c367 has its CatchHandler @ 0054c3e4 */
    lVar5 = (**(code **)(*plVar3 + 0x28))(plVar3,uVar6,lVar5,uVar2,param_2);
    if (lVar5 == 0) {
      lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 0054c384 to 0054c387 has its CatchHandler @ 0054c3c0 */
      FUN_00520d98(lVar5,*(uint *)(lVar5 + 0x20) | 5);
    }
  }
  FUN_0054b498(local_70);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0054c438  FUN_0054c438 =====

long * FUN_0054c438(float param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 local_70 [8];
  long *local_68;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar5 = *param_2;
  local_70[0] = 0;
  local_68 = param_2;
  if (*(int *)((long)param_2 + *(long *)(lVar5 + -0x18) + 0x20) == 0) {
    if (*(long *)((long)param_2 + *(long *)(lVar5 + -0x18) + 0x88) != 0) {
                    /* try { // try from 0054c48c to 0054c48f has its CatchHandler @ 0054c59c */
      FUN_0054aa28();
      lVar5 = *param_2;
    }
    local_70[0] = 1;
                    /* try { // try from 0054c4a4 to 0054c4ab has its CatchHandler @ 0054c5b8 */
    FUN_00520ce8(auStack_60,(long)param_2 + *(long *)(lVar5 + -0x18));
                    /* try { // try from 0054c4ac to 0054c4bb has its CatchHandler @ 0054c5a8 */
    plVar3 = (long *)FUN_0053cfd4(auStack_60,PTR_DAT_00d51df0);
    FUN_0053ceec(auStack_60);
    lVar5 = (long)param_2 + *(long *)(*param_2 + -0x18);
    uVar6 = *(undefined8 *)(lVar5 + 0x28);
    if (*(int *)(lVar5 + 0x90) == -1) {
                    /* try { // try from 0054c4e4 to 0054c4ef has its CatchHandler @ 0054c5bc */
      FUN_00520ce8(auStack_60,lVar5);
                    /* try { // try from 0054c4f0 to 0054c50f has its CatchHandler @ 0054c5a4 */
      plVar4 = (long *)FUN_0053cfd4(auStack_60,PTR_DAT_00d51b28);
      uVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
      FUN_0053ceec(auStack_60);
      *(uint *)(lVar5 + 0x90) = uVar2 & 0xff;
    }
                    /* try { // try from 0054c530 to 0054c53f has its CatchHandler @ 0054c5bc */
    lVar5 = (**(code **)(*plVar3 + 0x40))((double)param_1,plVar3,uVar6,lVar5);
    if (lVar5 == 0) {
      lVar5 = (long)param_2 + *(long *)(*param_2 + -0x18);
                    /* try { // try from 0054c55c to 0054c55f has its CatchHandler @ 0054c598 */
      FUN_00520d98(lVar5,*(uint *)(lVar5 + 0x20) | 5);
    }
  }
  FUN_0054b498(local_70);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0054c610  FUN_0054c610 =====

long * FUN_0054c610(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 local_70 [8];
  long *local_68;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar5 = *param_2;
  local_70[0] = 0;
  local_68 = param_2;
  if (*(int *)((long)param_2 + *(long *)(lVar5 + -0x18) + 0x20) == 0) {
    if (*(long *)((long)param_2 + *(long *)(lVar5 + -0x18) + 0x88) != 0) {
                    /* try { // try from 0054c664 to 0054c667 has its CatchHandler @ 0054c774 */
      FUN_0054aa28();
      lVar5 = *param_2;
    }
    local_70[0] = 1;
                    /* try { // try from 0054c67c to 0054c683 has its CatchHandler @ 0054c790 */
    FUN_00520ce8(auStack_60,(long)param_2 + *(long *)(lVar5 + -0x18));
                    /* try { // try from 0054c684 to 0054c693 has its CatchHandler @ 0054c780 */
    plVar3 = (long *)FUN_0053cfd4(auStack_60,PTR_DAT_00d51df0);
    FUN_0053ceec(auStack_60);
    lVar5 = (long)param_2 + *(long *)(*param_2 + -0x18);
    uVar6 = *(undefined8 *)(lVar5 + 0x28);
    if (*(int *)(lVar5 + 0x90) == -1) {
                    /* try { // try from 0054c6bc to 0054c6c7 has its CatchHandler @ 0054c794 */
      FUN_00520ce8(auStack_60,lVar5);
                    /* try { // try from 0054c6c8 to 0054c6e7 has its CatchHandler @ 0054c77c */
      plVar4 = (long *)FUN_0053cfd4(auStack_60,PTR_DAT_00d51b28);
      uVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
      FUN_0053ceec(auStack_60);
      *(uint *)(lVar5 + 0x90) = uVar2 & 0xff;
    }
                    /* try { // try from 0054c704 to 0054c717 has its CatchHandler @ 0054c794 */
    lVar5 = (**(code **)(*plVar3 + 0x40))(param_1,plVar3,uVar6,lVar5);
    if (lVar5 == 0) {
      lVar5 = (long)param_2 + *(long *)(*param_2 + -0x18);
                    /* try { // try from 0054c734 to 0054c737 has its CatchHandler @ 0054c770 */
      FUN_00520d98(lVar5,*(uint *)(lVar5 + 0x20) | 5);
    }
  }
  FUN_0054b498(local_70);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0054c7e8  FUN_0054c7e8 =====

long * FUN_0054c7e8(long *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 local_70 [8];
  long *local_68;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar5 = *param_1;
  local_70[0] = 0;
  local_68 = param_1;
  if (*(int *)((long)param_1 + *(long *)(lVar5 + -0x18) + 0x20) == 0) {
    if (*(long *)((long)param_1 + *(long *)(lVar5 + -0x18) + 0x88) != 0) {
                    /* try { // try from 0054c83c to 0054c83f has its CatchHandler @ 0054c94c */
      FUN_0054aa28();
      lVar5 = *param_1;
    }
    local_70[0] = 1;
                    /* try { // try from 0054c854 to 0054c85b has its CatchHandler @ 0054c968 */
    FUN_00520ce8(auStack_60,(long)param_1 + *(long *)(lVar5 + -0x18));
                    /* try { // try from 0054c85c to 0054c86b has its CatchHandler @ 0054c958 */
    plVar3 = (long *)FUN_0053cfd4(auStack_60,PTR_DAT_00d51df0);
    FUN_0053ceec(auStack_60);
    lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
    uVar2 = *(uint *)(lVar5 + 0x90);
    uVar6 = *(undefined8 *)(lVar5 + 0x28);
    if (uVar2 == 0xffffffff) {
                    /* try { // try from 0054c894 to 0054c89f has its CatchHandler @ 0054c96c */
      FUN_00520ce8(auStack_60,lVar5);
                    /* try { // try from 0054c8a0 to 0054c8bf has its CatchHandler @ 0054c954 */
      plVar4 = (long *)FUN_0053cfd4(auStack_60,PTR_DAT_00d51b28);
      uVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
      FUN_0053ceec(auStack_60);
      uVar2 = uVar2 & 0xff;
      *(uint *)(lVar5 + 0x90) = uVar2;
    }
                    /* try { // try from 0054c8dc to 0054c8ef has its CatchHandler @ 0054c96c */
    lVar5 = (**(code **)(*plVar3 + 0x50))(plVar3,uVar6,lVar5,uVar2,param_2);
    if (lVar5 == 0) {
      lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 0054c90c to 0054c90f has its CatchHandler @ 0054c948 */
      FUN_00520d98(lVar5,*(uint *)(lVar5 + 0x20) | 5);
    }
  }
  FUN_0054b498(local_70);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0054c9c0  FUN_0054c9c0 =====

long * FUN_0054c9c0(long *param_1,long *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined1 local_58 [8];
  long *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_58[0] = 0;
  local_50 = param_1;
  if (*(int *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x20) == 0) {
    if (*(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x88) != 0) {
                    /* try { // try from 0054ca10 to 0054ca13 has its CatchHandler @ 0054cb50 */
      FUN_0054aa28();
    }
    local_58[0] = 1;
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    if (param_2 == (long *)0x0) {
                    /* try { // try from 0054caf4 to 0054caf7 has its CatchHandler @ 0054cb80 */
      FUN_00520d98(lVar1,*(uint *)(lVar1 + 0x20) | 1);
    }
    else {
      lVar7 = 0;
      plVar6 = *(long **)(lVar1 + 0x28);
                    /* try { // try from 0054ca58 to 0054cae7 has its CatchHandler @ 0054cb58 */
      while ((param_2[3] != param_2[4] ||
             (iVar5 = (**(code **)(*param_2 + 0x48))(param_2), iVar5 != -1))) {
        if ((undefined1 *)param_2[3] == (undefined1 *)param_2[4]) {
          uVar4 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        else {
          uVar4 = *(undefined1 *)param_2[3];
        }
        if (plVar6 == (long *)0x0) goto LAB_0054cb00;
        puVar2 = (undefined1 *)plVar6[6];
        if (puVar2 == (undefined1 *)plVar6[7]) {
          iVar5 = (**(code **)(*plVar6 + 0x68))(plVar6);
          if (iVar5 == -1) break;
        }
        else {
          plVar6[6] = (long)(puVar2 + 1);
          *puVar2 = uVar4;
        }
        if (param_2[3] == param_2[4]) {
          (**(code **)(*param_2 + 0x50))(param_2);
        }
        else {
          param_2[3] = param_2[3] + 1;
        }
        lVar7 = lVar7 + -1;
      }
      if (lVar7 == 0) {
LAB_0054cb00:
        lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 0054cb14 to 0054cb17 has its CatchHandler @ 0054cb4c */
        FUN_00520d98(lVar1,*(uint *)(lVar1 + 0x20) | 4);
      }
    }
  }
  FUN_0054b498(local_58);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0054cbd4  FUN_0054cbd4 =====

long * FUN_0054cbd4(long *param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined1 local_48 [8];
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar5 = *param_1;
  local_48[0] = 0;
  local_40 = param_1;
  if (*(int *)((long)param_1 + *(long *)(lVar5 + -0x18) + 0x20) != 0) goto LAB_0054cc8c;
  if (*(long *)((long)param_1 + *(long *)(lVar5 + -0x18) + 0x88) != 0) {
                    /* try { // try from 0054cc20 to 0054cc23 has its CatchHandler @ 0054ccbc */
    FUN_0054aa28();
    lVar5 = *param_1;
  }
  local_48[0] = 1;
  lVar5 = *(long *)(lVar5 + -0x18);
  plVar4 = *(long **)((long)param_1 + lVar5 + 0x28);
  if (plVar4 != (long *)0x0) {
    puVar1 = (undefined1 *)plVar4[6];
    if (puVar1 != (undefined1 *)plVar4[7]) {
      plVar4[6] = (long)(puVar1 + 1);
      *puVar1 = param_2;
      goto LAB_0054cc8c;
    }
                    /* try { // try from 0054cc68 to 0054cc8b has its CatchHandler @ 0054ccc4 */
    iVar3 = (**(code **)(*plVar4 + 0x68))(plVar4,param_2);
    if (iVar3 != -1) goto LAB_0054cc8c;
    lVar5 = *(long *)(*param_1 + -0x18);
  }
  FUN_00520d98((long)param_1 + lVar5,*(uint *)((long)param_1 + lVar5 + 0x20) | 1);
LAB_0054cc8c:
  FUN_0054b498(local_48);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0054cd18  FUN_0054cd18 =====

long * FUN_0054cd18(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 local_58 [8];
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58[0] = 0;
  local_50 = param_1;
  if (*(int *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x20) == 0) {
    if (*(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x88) != 0) {
                    /* try { // try from 0054cda0 to 0054cda3 has its CatchHandler @ 0054cdfc */
      FUN_0054aa28();
    }
    local_58[0] = 1;
                    /* try { // try from 0054cdcc to 0054cdf7 has its CatchHandler @ 0054ce04 */
    if ((param_3 != 0) &&
       (plVar2 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28),
       lVar3 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), lVar3 != param_3)) {
      lVar3 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_00520d98(lVar3,*(uint *)(lVar3 + 0x20) | 1);
    }
  }
  FUN_0054b498(local_58);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}


// ===== 0054ce58  FUN_0054ce58 =====

void FUN_0054ce58(void)

{
  return;
}


// ===== 0054ce5c  FUN_0054ce5c =====

void FUN_0054ce5c(long param_1)

{
  FUN_00520cf4(param_1 + 0x18);
  return;
}


// ===== 0054ce64  FUN_0054ce64 =====

void FUN_0054ce64(long param_1)

{
  FUN_00520cf4(param_1 + 8);
  return;
}


// ===== 0054ce6c  FUN_0054ce6c =====

void FUN_0054ce6c(long *param_1)

{
  FUN_00520cf4((long)param_1 + *(long *)(*param_1 + -0x18) + 0x18);
  return;
}


// ===== 0054ce80  FUN_0054ce80 =====

void FUN_0054ce80(void *param_1)

{
  FUN_00520cf4((long)param_1 + 0x18);
  operator_delete(param_1);
  return;
}


// ===== 0054cea8  FUN_0054cea8 =====

void FUN_0054cea8(long param_1)

{
  FUN_00520cf4(param_1 + 8);
  operator_delete((void *)(param_1 + -0x10));
  return;
}


// ===== 0054ced0  FUN_0054ced0 =====

void FUN_0054ced0(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_00520cf4((long)pvVar1 + 0x18);
  operator_delete(pvVar1);
  return;
}


// ===== 0054cf00  thunk_FUN_00520cf4 =====

void thunk_FUN_00520cf4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_00d201b8;
  if (param_1[9] != 0) {
    lVar1 = param_1[9] + -1;
    do {
      (**(code **)(param_1[7] + lVar1 * 8))(0,param_1,*(undefined4 *)(param_1[8] + lVar1 * 4));
      lVar1 = lVar1 + -1;
    } while (lVar1 != -1);
  }
  FUN_0053ceec(param_1 + 6);
  free((void *)param_1[7]);
  free((void *)param_1[8]);
  free((void *)param_1[0xb]);
  free((void *)param_1[0xe]);
  return;
}


// ===== 0054cf04  FUN_0054cf04 =====

void FUN_0054cf04(void *param_1)

{
  FUN_00520cf4();
  operator_delete(param_1);
  return;
}


// ===== 0054cf28  FUN_0054cf28 =====

void FUN_0054cf28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d225a8;
  FUN_0053ceec(param_1 + 1);
  return;
}


// ===== 0054cf38  FUN_0054cf38 =====

void FUN_0054cf38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d225a8;
  FUN_0053ceec(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 0054cf68  FUN_0054cf68 =====

void FUN_0054cf68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d225a8;
  FUN_0053ce34(param_1 + 1);
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}


// ===== 0054cfa4  FUN_0054cfa4 =====

void FUN_0054cfa4(void)

{
  return;
}


// ===== 0054cfa8  FUN_0054cfa8 =====

void FUN_0054cfa8(void)

{
  return;
}


// ===== 0054cfac  FUN_0054cfac =====

undefined1  [16] FUN_0054cfac(void)

{
  return ZEXT816(0xffffffffffffffff) << 0x40;
}


// ===== 0054cfb8  FUN_0054cfb8 =====

undefined1  [16] FUN_0054cfb8(void)

{
  return ZEXT816(0xffffffffffffffff) << 0x40;
}


// ===== 0054cfc4  FUN_0054cfc4 =====

undefined8 FUN_0054cfc4(void)

{
  return 0;
}


// ===== 0054cfcc  FUN_0054cfcc =====

undefined8 FUN_0054cfcc(void)

{
  return 0;
}


// ===== 0054cfd4  FUN_0054cfd4 =====

long FUN_0054cfd4(long *param_1,int *param_2,long param_3)

{
  int iVar1;
  int *__src;
  long lVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  
  if (param_3 < 1) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      __src = (int *)param_1[3];
      if (__src < (int *)param_1[4]) {
        lVar2 = param_1[4] - (long)__src >> 2;
        lVar5 = param_3 - lVar3;
        if (lVar2 <= param_3 - lVar3) {
          lVar5 = lVar2;
        }
        if (0x7ffffffe < lVar5) {
          lVar5 = 0x7fffffff;
        }
        piVar4 = param_2 + lVar5;
        if ((param_2 <= __src) && (__src < piVar4)) {
                    /* try { // try from 0054d0c0 to 0054d0e7 has its CatchHandler @ 0054d0e8 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                     ,0x154,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
        }
        if (lVar5 != 0) {
          memmove(param_2,__src,lVar5 << 2);
          __src = (int *)param_1[3];
        }
        param_1[3] = (long)__src + ((lVar5 << 0x20) >> 0x1e);
      }
      else {
        iVar1 = (**(code **)(*param_1 + 0x50))(param_1);
        if (iVar1 == -1) {
          return lVar3;
        }
        lVar5 = 1;
        piVar4 = param_2 + 1;
        *param_2 = iVar1;
      }
      lVar3 = lVar5 + lVar3;
      param_2 = piVar4;
    } while (lVar3 < param_3);
  }
  return lVar3;
}


// ===== 0054d0ec  FUN_0054d0ec =====

undefined8 FUN_0054d0ec(void)

{
  return 0xffffffff;
}


// ===== 0054d0f4  FUN_0054d0f4 =====

ulong FUN_0054d0f4(long *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x48))();
  if ((int)uVar1 != -1) {
    uVar1 = (ulong)*(uint *)param_1[3];
    param_1[3] = (long)((uint *)param_1[3] + 1);
  }
  return uVar1;
}


// ===== 0054d130  FUN_0054d130 =====

undefined8 FUN_0054d130(void)

{
  return 0xffffffff;
}


// ===== 0054d138  FUN_0054d138 =====

long FUN_0054d138(long *param_1,undefined4 *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined4 *__dest;
  long lVar3;
  long lVar4;
  
  if (param_3 < 1) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    do {
      while( true ) {
        __dest = (undefined4 *)param_1[6];
        if ((undefined4 *)param_1[7] <= __dest) break;
        lVar3 = param_1[7] - (long)__dest >> 2;
        lVar1 = param_3 - lVar4;
        if (lVar3 <= param_3 - lVar4) {
          lVar1 = lVar3;
        }
        if ((__dest <= param_2) && (param_2 < __dest + lVar1)) {
                    /* try { // try from 0054d21c to 0054d243 has its CatchHandler @ 0054d244 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                     ,0x154,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
        }
        if (lVar1 != 0) {
          memmove(__dest,param_2,lVar1 * 4);
          __dest = (undefined4 *)param_1[6];
        }
        param_2 = param_2 + lVar1;
        lVar4 = lVar1 + lVar4;
        param_1[6] = (long)(__dest + lVar1);
        if (param_3 <= lVar4) {
          return lVar4;
        }
      }
      iVar2 = (**(code **)(*param_1 + 0x68))(param_1,*param_2);
      if (iVar2 == -1) {
        return lVar4;
      }
      param_2 = param_2 + 1;
      lVar4 = lVar4 + 1;
    } while (lVar4 < param_3);
  }
  return lVar4;
}


// ===== 0054d248  FUN_0054d248 =====

undefined8 FUN_0054d248(void)

{
  return 0xffffffff;
}


// ===== 0054d250  FUN_0054d250 =====

void FUN_0054d250(long param_1)

{
  FUN_00520cf4(param_1 + 0x10);
  return;
}


// ===== 0054d258  FUN_0054d258 =====

void FUN_0054d258(long *param_1)

{
  FUN_00520cf4((long)param_1 + *(long *)(*param_1 + -0x18) + 0x10);
  return;
}


// ===== 0054d26c  FUN_0054d26c =====

void FUN_0054d26c(void *param_1)

{
  FUN_00520cf4((long)param_1 + 0x10);
  operator_delete(param_1);
  return;
}


// ===== 0054d294  FUN_0054d294 =====

void FUN_0054d294(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_00520cf4((long)pvVar1 + 0x10);
  operator_delete(pvVar1);
  return;
}


// ===== 0054d2c4  FUN_0054d2c4 =====

long * FUN_0054d2c4(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 local_48 [8];
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *param_1;
  if (*(long *)((long)param_1 + *(long *)(lVar3 + -0x18) + 0x28) != 0) {
    local_48[0] = 0;
    local_40 = param_1;
    if (*(int *)((long)param_1 + *(long *)(lVar3 + -0x18) + 0x20) == 0) {
      if (*(long *)((long)param_1 + *(long *)(lVar3 + -0x18) + 0x88) != 0) {
                    /* try { // try from 0054d31c to 0054d31f has its CatchHandler @ 0054d394 */
        FUN_0054d2c4();
        lVar3 = *param_1;
      }
      local_48[0] = 1;
                    /* try { // try from 0054d340 to 0054d363 has its CatchHandler @ 0054d39c */
      iVar2 = (**(code **)(**(long **)((long)param_1 + *(long *)(lVar3 + -0x18) + 0x28) + 0x30))();
      if (iVar2 == -1) {
        lVar3 = (long)param_1 + *(long *)(*param_1 + -0x18);
        FUN_00520d98(lVar3,*(uint *)(lVar3 + 0x20) | 1);
      }
    }
    FUN_0054d464(local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0054d3f0  FUN_0054d3f0 =====

void FUN_0054d3f0(long param_1)

{
  FUN_00520cf4(param_1 + 8);
  return;
}


// ===== 0054d3f8  FUN_0054d3f8 =====

void FUN_0054d3f8(long *param_1)

{
  FUN_00520cf4((long)param_1 + *(long *)(*param_1 + -0x18) + 8);
  return;
}


// ===== 0054d40c  FUN_0054d40c =====

void FUN_0054d40c(void *param_1)

{
  FUN_00520cf4((long)param_1 + 8);
  operator_delete(param_1);
  return;
}


// ===== 0054d434  FUN_0054d434 =====

void FUN_0054d434(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_00520cf4((long)pvVar1 + 8);
  operator_delete(pvVar1);
  return;
}


// ===== 0054d464  FUN_0054d464 =====

void FUN_0054d464(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 8);
  lVar4 = *(long *)(*plVar3 + -0x18);
                    /* try { // try from 0054d4c0 to 0054d4e7 has its CatchHandler @ 0054d4f4 */
  if ((((*(long *)((long)plVar3 + lVar4 + 0x28) != 0) &&
       (*(int *)((long)plVar3 + lVar4 + 0x20) == 0)) &&
      ((*(byte *)((long)plVar3 + lVar4 + 9) >> 5 & 1) != 0)) &&
     ((uVar2 = FUN_005184ec(), (uVar2 & 1) == 0 &&
      (iVar1 = (**(code **)(**(long **)((long)*(long **)(param_1 + 8) +
                                       *(long *)(**(long **)(param_1 + 8) + -0x18) + 0x28) + 0x30))
                         (), iVar1 == -1)))) {
    lVar4 = (long)*(long **)(param_1 + 8) + *(long *)(**(long **)(param_1 + 8) + -0x18);
    FUN_00520d98(lVar4,*(uint *)(lVar4 + 0x20) | 1);
  }
  return;
}


// ===== 0054d504  FUN_0054d504 =====

void FUN_0054d504(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if ((*(uint *)(param_2 + 0x60) >> 4 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x60) >> 3 & 1) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    puVar10 = *(undefined1 **)(param_2 + 0x10);
    puVar7 = *(undefined1 **)(param_2 + 0x20);
    uVar9 = (long)puVar7 - (long)puVar10;
    if (uVar9 < 0x7ffffffffffffff0) {
      if (uVar9 < 0x17) {
        *(char *)((long)param_1 + 0x17) = (char)uVar9;
      }
      else {
        uVar6 = (uVar9 | 0xf) + 1;
        puVar2 = (undefined8 *)operator_new(uVar6);
        *param_1 = puVar2;
        param_1[1] = uVar9;
        param_1[2] = uVar6 | 0x8000000000000000;
        param_1 = puVar2;
      }
      if (puVar10 != puVar7) {
        puVar2 = param_1;
        if ((0x1f < uVar9) && (0x1f < (ulong)((long)param_1 - (long)puVar10))) {
          uVar4 = uVar9 & 0xffffffffffffffe0;
          puVar2 = param_1 + 2;
          param_1 = (undefined8 *)((long)param_1 + uVar4);
          puVar5 = (undefined8 *)(puVar10 + 0x10);
          uVar6 = uVar4;
          do {
            puVar1 = puVar5 + -1;
            uVar11 = puVar5[-2];
            uVar13 = puVar5[1];
            uVar12 = *puVar5;
            puVar5 = puVar5 + 4;
            uVar6 = uVar6 - 0x20;
            puVar2[-1] = *puVar1;
            puVar2[-2] = uVar11;
            puVar2[1] = uVar13;
            *puVar2 = uVar12;
            puVar2 = puVar2 + 4;
          } while (uVar6 != 0);
          puVar2 = param_1;
          puVar10 = puVar10 + uVar4;
          if (uVar9 == uVar4) goto LAB_0054d6f0;
        }
        do {
          puVar3 = puVar10 + 1;
          param_1 = (undefined8 *)((long)puVar2 + 1);
          *(undefined1 *)puVar2 = *puVar10;
          puVar2 = param_1;
          puVar10 = puVar3;
        } while (puVar3 != puVar7);
      }
      goto LAB_0054d6f0;
    }
  }
  else {
    puVar10 = *(undefined1 **)(param_2 + 0x58);
    puVar3 = *(undefined1 **)(param_2 + 0x30);
    puVar7 = puVar10;
    if (puVar10 < puVar3) {
      *(undefined1 **)(param_2 + 0x58) = puVar3;
      puVar7 = puVar3;
    }
    puVar8 = *(undefined1 **)(param_2 + 0x28);
    uVar9 = (long)puVar7 - (long)puVar8;
    if (uVar9 < 0x7ffffffffffffff0) {
      if (uVar9 < 0x17) {
        *(char *)((long)param_1 + 0x17) = (char)uVar9;
      }
      else {
        uVar6 = (uVar9 | 0xf) + 1;
        puVar2 = (undefined8 *)operator_new(uVar6);
        *param_1 = puVar2;
        param_1[1] = uVar9;
        param_1[2] = uVar6 | 0x8000000000000000;
        param_1 = puVar2;
      }
      if (puVar8 != puVar7) {
        if (puVar10 <= puVar3) {
          puVar10 = puVar3;
        }
        uVar9 = (long)puVar10 - (long)puVar8;
        puVar2 = param_1;
        if ((0x1f < uVar9) && (0x1f < (ulong)((long)param_1 - (long)puVar8))) {
          uVar4 = uVar9 & 0xffffffffffffffe0;
          puVar2 = param_1 + 2;
          param_1 = (undefined8 *)((long)param_1 + uVar4);
          puVar5 = (undefined8 *)(puVar8 + 0x10);
          uVar6 = uVar4;
          do {
            puVar1 = puVar5 + -1;
            uVar11 = puVar5[-2];
            uVar13 = puVar5[1];
            uVar12 = *puVar5;
            puVar5 = puVar5 + 4;
            uVar6 = uVar6 - 0x20;
            puVar2[-1] = *puVar1;
            puVar2[-2] = uVar11;
            puVar2[1] = uVar13;
            *puVar2 = uVar12;
            puVar2 = puVar2 + 4;
          } while (uVar6 != 0);
          puVar2 = param_1;
          puVar8 = puVar8 + uVar4;
          if (uVar9 == uVar4) goto LAB_0054d6f0;
        }
        do {
          puVar10 = puVar8 + 1;
          param_1 = (undefined8 *)((long)puVar2 + 1);
          *(undefined1 *)puVar2 = *puVar8;
          puVar2 = param_1;
          puVar8 = puVar10;
        } while (puVar10 != puVar7);
      }
LAB_0054d6f0:
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_004e823c(param_1);
}


// ===== 0054d714  FUN_0054d714 =====

void FUN_0054d714(long param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar1 = param_1 + 0x40;
  FUN_00411268(lVar1);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if ((*(uint *)(param_1 + 0x60) >> 3 & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 0x48);
    lVar3 = *(long *)(param_1 + 0x40);
    if (-1 < (char)*(byte *)(param_1 + 0x57)) {
      uVar6 = (ulong)*(byte *)(param_1 + 0x57);
      lVar3 = lVar1;
    }
    *(long *)(param_1 + 0x10) = lVar3;
    *(long *)(param_1 + 0x18) = lVar3;
    *(ulong *)(param_1 + 0x58) = lVar3 + uVar6;
    *(ulong *)(param_1 + 0x20) = lVar3 + uVar6;
  }
  if ((*(uint *)(param_1 + 0x60) >> 4 & 1) != 0) {
    bVar2 = *(byte *)(param_1 + 0x57);
    lVar4 = *(long *)(param_1 + 0x40);
    uVar5 = (*(ulong *)(param_1 + 0x50) & 0x7fffffffffffffff) - 1;
    lVar3 = lVar4;
    uVar6 = *(ulong *)(param_1 + 0x48);
    if (-1 < (char)bVar2) {
      lVar3 = lVar1;
      uVar6 = (ulong)bVar2;
    }
    if (-1 < (char)bVar2) {
      uVar5 = 0x16;
    }
    *(ulong *)(param_1 + 0x58) = lVar3 + uVar6;
    if (uVar5 < uVar6 || uVar5 - uVar6 == 0) {
      if ((char)bVar2 < '\0') {
        *(ulong *)(param_1 + 0x48) = uVar5;
      }
      else {
        if (0x16 < uVar5) {
                    /* try { // try from 0054d870 to 0054d897 has its CatchHandler @ 0054d898 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                     "__s < __min_cap",
                     "__s should never be greater than or equal to the short string capacity");
        }
        *(char *)(param_1 + 0x57) = (char)uVar5;
        lVar4 = lVar1;
      }
      *(undefined1 *)(lVar4 + uVar5) = 0;
    }
    else {
      FUN_0054809c(lVar1,uVar5 - uVar6,0);
    }
    bVar2 = *(byte *)(param_1 + 0x57);
    lVar3 = *(long *)(param_1 + 0x40);
    if (-1 < (char)bVar2) {
      lVar3 = lVar1;
    }
    uVar5 = *(ulong *)(param_1 + 0x48);
    if (-1 < (char)bVar2) {
      uVar5 = (ulong)bVar2;
    }
    *(long *)(param_1 + 0x28) = lVar3;
    *(long *)(param_1 + 0x30) = lVar3;
    *(ulong *)(param_1 + 0x38) = lVar3 + uVar5;
    if ((*(byte *)(param_1 + 0x60) & 3) != 0) {
      if (uVar6 >> 0x1f != 0) {
        uVar5 = (uVar6 - 0x80000000) / 0x7fffffff;
        lVar3 = uVar5 * 0x7fffffff + lVar3 + 0x7fffffff;
        uVar6 = (uVar6 + uVar5 * -0x7fffffff) - 0x7fffffff;
        *(long *)(param_1 + 0x30) = lVar3;
      }
      if (uVar6 != 0) {
        *(ulong *)(param_1 + 0x30) = lVar3 + (uVar6 & 0xffffffff);
      }
    }
  }
  return;
}


// ===== 0054d89c  FUN_0054d89c =====

ulong FUN_0054d89c(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_1 + 0x30);
  pbVar1 = *(byte **)(param_1 + 0x58);
  if (*(byte **)(param_1 + 0x58) < pbVar2) {
    *(byte **)(param_1 + 0x58) = pbVar2;
    pbVar1 = pbVar2;
  }
  if ((*(byte *)(param_1 + 0x60) >> 3 & 1) != 0) {
    pbVar2 = *(byte **)(param_1 + 0x20);
    if (*(byte **)(param_1 + 0x20) < pbVar1) {
      *(byte **)(param_1 + 0x20) = pbVar1;
      pbVar2 = pbVar1;
    }
    if (*(byte **)(param_1 + 0x18) < pbVar2) {
      return (ulong)**(byte **)(param_1 + 0x18);
    }
  }
  return 0xffffffff;
}


// ===== 0054d8ec  FUN_0054d8ec =====

uint FUN_0054d8ec(long param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x30);
  uVar1 = *(ulong *)(param_1 + 0x58);
  if (*(ulong *)(param_1 + 0x58) < uVar2) {
    *(ulong *)(param_1 + 0x58) = uVar2;
    uVar1 = uVar2;
  }
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (*(ulong *)(param_1 + 0x10) < uVar2) {
    if (param_2 == 0xffffffff) {
      *(ulong *)(param_1 + 0x18) = uVar2 - 1;
      *(ulong *)(param_1 + 0x20) = uVar1;
      return 0;
    }
    if (((*(byte *)(param_1 + 0x60) >> 4 & 1) != 0) ||
       ((uint)*(byte *)(uVar2 - 1) == (param_2 & 0xff))) {
      *(ulong *)(param_1 + 0x18) = uVar2 - 1;
      *(ulong *)(param_1 + 0x20) = uVar1;
      *(char *)(uVar2 - 1) = (char)param_2;
      return param_2;
    }
  }
  return 0xffffffff;
}


// ===== 0054d95c  FUN_0054d95c =====

ulong FUN_0054d95c(long *param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  
  if (param_2 == 0xffffffff) {
    return 0;
  }
  puVar10 = (undefined1 *)param_1[6];
  puVar6 = (undefined1 *)param_1[7];
  lVar2 = param_1[2];
  lVar3 = param_1[3];
  if (puVar10 != puVar6) {
    puVar8 = (undefined1 *)param_1[0xb];
    goto LAB_0054dad4;
  }
  if ((*(byte *)(param_1 + 0xc) >> 4 & 1) == 0) {
    return 0xffffffff;
  }
  lVar11 = param_1[5];
  plVar1 = param_1 + 8;
  bVar4 = *(byte *)((long)param_1 + 0x57);
  lVar12 = param_1[0xb];
  if ((char)bVar4 < '\0') {
    uVar5 = param_1[9];
    uVar9 = (param_1[10] & 0x7fffffffffffffffU) - 1;
    if (uVar5 == uVar9) goto LAB_0054d9f4;
LAB_0054da18:
    param_1[9] = uVar5 + 1;
    plVar7 = (long *)param_1[8];
  }
  else {
    if (bVar4 == 0x16) {
      uVar9 = 0x16;
LAB_0054d9f4:
                    /* try { // try from 0054d9f4 to 0054da77 has its CatchHandler @ 0054dbbc */
      uVar5 = uVar9;
      FUN_0054774c(plVar1,uVar5,1,uVar5,uVar5,0,0);
      goto LAB_0054da18;
    }
    if (0x15 < bVar4) {
                    /* try { // try from 0054db6c to 0054db93 has its CatchHandler @ 0054dbd0 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                 "__s < __min_cap",
                 "__s should never be greater than or equal to the short string capacity");
    }
    uVar5 = (ulong)bVar4;
    *(byte *)((long)param_1 + 0x57) = bVar4 + 1;
    plVar7 = plVar1;
  }
  *(undefined2 *)((long)plVar7 + uVar5) = 0;
  bVar4 = *(byte *)((long)param_1 + 0x57);
  uVar5 = (param_1[10] & 0x7fffffffffffffffU) - 1;
  uVar9 = param_1[9];
  if (-1 < (char)bVar4) {
    uVar5 = 0x16;
    uVar9 = (ulong)bVar4;
  }
  if (uVar5 < uVar9 || uVar5 - uVar9 == 0) {
    if ((char)bVar4 < '\0') {
      plVar7 = (long *)param_1[8];
      param_1[9] = uVar5;
    }
    else {
      if (0x16 < uVar5) {
                    /* try { // try from 0054db94 to 0054dbbb has its CatchHandler @ 0054dbcc */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                   "__s < __min_cap",
                   "__s should never be greater than or equal to the short string capacity");
      }
      *(char *)((long)param_1 + 0x57) = (char)uVar5;
      plVar7 = plVar1;
    }
    *(undefined1 *)((long)plVar7 + uVar5) = 0;
  }
  else {
    FUN_0054809c(plVar1,uVar5 - uVar9,0);
  }
  uVar5 = param_1[9];
  plVar7 = (long *)param_1[8];
  if (-1 < (char)*(byte *)((long)param_1 + 0x57)) {
    uVar5 = (ulong)*(byte *)((long)param_1 + 0x57);
    plVar7 = plVar1;
  }
  puVar6 = (undefined1 *)((long)plVar7 + uVar5);
  puVar10 = (undefined1 *)((long)plVar7 + ((long)puVar10 - lVar11));
  puVar8 = (undefined1 *)((long)plVar7 + (lVar12 - lVar11));
  param_1[5] = (long)plVar7;
  param_1[6] = (long)puVar10;
  param_1[7] = (long)puVar6;
LAB_0054dad4:
  if (puVar8 <= puVar10 + 1) {
    puVar8 = puVar10 + 1;
  }
  param_1[0xb] = (long)puVar8;
  if ((*(byte *)(param_1 + 0xc) >> 3 & 1) != 0) {
    param_1[4] = (long)puVar8;
    plVar1 = (long *)param_1[8];
    if (-1 < *(char *)((long)param_1 + 0x57)) {
      plVar1 = param_1 + 8;
    }
    param_1[2] = (long)plVar1;
    param_1[3] = (long)plVar1 + (lVar3 - lVar2);
  }
  if (puVar10 != puVar6) {
    param_1[6] = (long)(puVar10 + 1);
    *puVar10 = (char)param_2;
    return (ulong)(param_2 & 0xff);
  }
                    /* WARNING: Could not recover jumptable at 0x0054db68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*param_1 + 0x68))(param_1,param_2 & 0xff);
  return uVar5;
}


// ===== 0054dbd4  FUN_0054dbd4 =====

undefined1  [16] FUN_0054dbd4(long param_1,long param_2,int param_3,uint param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  uVar7 = *(ulong *)(param_1 + 0x30);
  uVar6 = *(ulong *)(param_1 + 0x58);
  if (*(ulong *)(param_1 + 0x58) < uVar7) {
    *(ulong *)(param_1 + 0x58) = uVar7;
    uVar6 = uVar7;
  }
  if (((param_4 & 0x18) != 0) && ((param_3 != 1 || ((param_4 & 0x18) != 0x18)))) {
    if (uVar6 == 0) {
      lVar8 = 0;
    }
    else {
      plVar2 = (long *)*(long *)(param_1 + 0x40);
      if (-1 < *(char *)(param_1 + 0x57)) {
        plVar2 = (long *)(param_1 + 0x40);
      }
      lVar8 = uVar6 - (long)plVar2;
    }
    if (param_3 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar8;
      if (param_3 != 2) {
        if (param_3 != 1) goto LAB_0054dc04;
        if ((param_4 >> 3 & 1) == 0) {
          lVar9 = uVar7 - *(long *)(param_1 + 0x28);
        }
        else {
          lVar9 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
        }
      }
    }
    uVar1 = lVar9 + param_2;
    uVar5 = 0xffffffffffffffff;
    if (((-1 < (long)uVar1) && ((long)uVar1 <= lVar8)) &&
       ((uVar1 == 0 ||
        ((((param_4 >> 3 & 1) == 0 || (*(long *)(param_1 + 0x18) != 0)) &&
         (((param_4 >> 4 & 1) == 0 || (uVar7 != 0)))))))) {
      if ((param_4 >> 3 & 1) != 0) {
        *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x10) + uVar1;
        *(ulong *)(param_1 + 0x20) = uVar6;
      }
      if ((param_4 >> 4 & 1) == 0) {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar1;
        return auVar4 << 0x40;
      }
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28) + (long)(int)uVar1;
      uVar5 = uVar1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar5;
    return auVar3 << 0x40;
  }
LAB_0054dc04:
  return ZEXT816(0xffffffffffffffff) << 0x40;
}


// ===== 0054dcd4  FUN_0054dcd4 =====

FILE * FUN_0054dcd4(FILE *param_1,char *param_2,uint param_3)

{
  int iVar1;
  FILE *pFVar2;
  FILE *__stream;
  char *__modes;
  
  if (param_1->_old_offset == 0) {
    __modes = "we";
    pFVar2 = (FILE *)0x0;
    switch(param_3 & 0xfffffffd) {
    case 1:
    case 0x11:
      __modes = "ae";
      break;
    default:
      goto switchD_0054dd30_caseD_2;
    case 5:
    case 0x15:
      __modes = "abe";
      break;
    case 8:
      __modes = "re";
      break;
    case 9:
    case 0x19:
      __modes = "a+e";
      break;
    case 0xc:
      __modes = "rbe";
      break;
    case 0xd:
    case 0x1d:
      __modes = "a+be";
      break;
    case 0x10:
    case 0x30:
      break;
    case 0x14:
    case 0x34:
      __modes = "wbe";
      break;
    case 0x18:
      __modes = "r+e";
      break;
    case 0x1c:
      __modes = "r+be";
      break;
    case 0x38:
      __modes = "w+e";
      break;
    case 0x3c:
      __modes = "w+be";
    }
    __stream = fopen(param_2,__modes);
    param_1->_old_offset = (__off_t)__stream;
    pFVar2 = __stream;
    if (((__stream != (FILE *)0x0) &&
        (*(uint *)&param_1->__pad1 = param_3, pFVar2 = param_1, (param_3 >> 1 & 1) != 0)) &&
       (iVar1 = fseek(__stream,0,2), iVar1 != 0)) {
      fclose((FILE *)param_1->_old_offset);
      param_1->_old_offset = 0;
      pFVar2 = (FILE *)0x0;
    }
  }
  else {
    pFVar2 = (FILE *)0x0;
  }
switchD_0054dd30_caseD_2:
  return pFVar2;
}


// ===== 0054ddfc  FUN_0054ddfc =====

void FUN_0054ddfc(long *param_1,long *param_2,uint param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  
  plVar2 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar2 = param_2;
  }
  lVar3 = FUN_0054dcd4(param_1 + 2,plVar2,param_3 | 8);
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  if (lVar3 == 0) {
    uVar4 = *(uint *)(lVar1 + 0x20) | 4;
  }
  else {
    uVar4 = 0;
  }
  FUN_00520d98(lVar1,uVar4);
  return;
}


// ===== 0054de58  FUN_0054de58 =====

void FUN_0054de58(long *param_1)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar1 = param_1 + 1;
  *param_1 = (long)&PTR_FUN_00d22488;
  FUN_0053ce34(plVar1);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  *param_1 = (long)&PTR_FUN_00d22748;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)((long)param_1 + 0x9f) = 0;
  FUN_0053cecc(auStack_50,plVar1);
                    /* try { // try from 0054ded0 to 0054dedf has its CatchHandler @ 0054dfac */
  uVar4 = FUN_0053cf18(auStack_50,PTR_DAT_00d51dd8);
  FUN_0053ceec(auStack_50);
  if ((uVar4 & 1) != 0) {
    FUN_0053cecc(auStack_50,plVar1);
                    /* try { // try from 0054defc to 0054df0b has its CatchHandler @ 0054df70 */
    lVar5 = FUN_0053cfd4(auStack_50,PTR_DAT_00d51dd8);
    param_1[0x10] = lVar5;
    FUN_0053ceec(auStack_50);
    bVar3 = (**(code **)(*(long *)param_1[0x10] + 0x38))();
    *(byte *)((long)param_1 + 0xa2) = bVar3 & 1;
  }
                    /* try { // try from 0054df38 to 0054df47 has its CatchHandler @ 0054df80 */
  (**(code **)(*param_1 + 0x18))(param_1,0,0x1000);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0054dfb0  FUN_0054dfb0 =====

void FUN_0054dfb0(long *param_1)

{
  FILE *__stream;
  
  __stream = (FILE *)param_1[0xf];
  *param_1 = (long)&PTR_FUN_00d22748;
  if (__stream != (FILE *)0x0) {
                    /* try { // try from 0054dfd8 to 0054dfdf has its CatchHandler @ 0054e054 */
    FUN_0054e87c(param_1);
    fclose(__stream);
    param_1[0xf] = 0;
                    /* try { // try from 0054dff4 to 0054e003 has its CatchHandler @ 0054e04c */
    (**(code **)(*param_1 + 0x18))(param_1,0,0);
  }
  if (((char)param_1[0x14] != '\0') && ((void *)param_1[8] != (void *)0x0)) {
    operator_delete__((void *)param_1[8]);
  }
  if ((*(char *)((long)param_1 + 0xa1) != '\0') && ((void *)param_1[0xd] != (void *)0x0)) {
    operator_delete__((void *)param_1[0xd]);
  }
  *param_1 = (long)&PTR_FUN_00d22488;
  FUN_0053ceec(param_1 + 1);
  return;
}


// ===== 0054e074  FUN_0054e074 =====

FILE * FUN_0054e074(FILE *param_1)

{
  int iVar1;
  int iVar2;
  FILE *__stream;
  
  __stream = (FILE *)param_1->_old_offset;
  if (__stream != (FILE *)0x0) {
                    /* try { // try from 0054e098 to 0054e09b has its CatchHandler @ 0054e0e4 */
    iVar1 = (**(code **)(*(long *)param_1 + 0x30))();
    iVar2 = fclose(__stream);
    param_1->_old_offset = 0;
    __stream = param_1;
    if (iVar2 != 0 || iVar1 != 0) {
      __stream = (FILE *)0x0;
    }
    (**(code **)(*(long *)param_1 + 0x18))(param_1,0,0);
  }
  return __stream;
}


// ===== 0054e0f8  FUN_0054e0f8 =====

void FUN_0054e0f8(void *param_1)

{
  FUN_0054dfb0();
  operator_delete(param_1);
  return;
}


// ===== 0054e11c  FUN_0054e11c =====

void FUN_0054e11c(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  void *pvVar5;
  size_t sVar6;
  long *plVar7;
  void *__src;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong __n;
  byte *local_58;
  undefined1 auStack_4c [4];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_1 + 0x78) == 0) {
    pvVar5 = (void *)0xffffffff;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x9c);
    if ((uVar1 >> 3 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      plVar7 = (long *)(param_1 + 0x70);
      plVar3 = (long *)(param_1 + 0x68);
      if (*(char *)(param_1 + 0xa2) != '\0') {
        plVar7 = (long *)(param_1 + 0x60);
        plVar3 = (long *)(param_1 + 0x40);
      }
      *(undefined8 *)(param_1 + 0x28) = 0;
      lVar10 = *plVar3;
      lVar8 = *plVar7;
      *(undefined4 *)(param_1 + 0x9c) = 8;
      pbVar9 = (byte *)(lVar10 + lVar8);
      *(long *)(param_1 + 0x10) = lVar10;
      *(byte **)(param_1 + 0x18) = pbVar9;
      *(byte **)(param_1 + 0x20) = pbVar9;
      if (pbVar9 != (byte *)0x0) goto LAB_0054e19c;
LAB_0054e1c4:
      pbVar9 = (byte *)((ulong)auStack_4c | 1);
      *(undefined1 **)(param_1 + 0x10) = auStack_4c;
      *(byte **)(param_1 + 0x18) = pbVar9;
      *(byte **)(param_1 + 0x20) = pbVar9;
      pbVar11 = *(byte **)(param_1 + 0x20);
      if ((uVar1 >> 3 & 1) != 0) goto LAB_0054e1dc;
LAB_0054e1a4:
      __n = 0;
      if (pbVar9 != pbVar11) goto LAB_0054e33c;
LAB_0054e204:
      pvVar5 = memmove(*(void **)(param_1 + 0x10),pbVar9 + -__n,__n);
      if (*(char *)(param_1 + 0xa2) == '\0') {
        __src = *(void **)(param_1 + 0x48);
        if ((__src == (void *)0x0) && (*(long *)(param_1 + 0x50) != 0)) {
          if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/fstream",0x2f2,
                       "!(__extbufnext_ == NULL && (__extbufend_ != __extbufnext_))",
                       "underflow moving from NULL");
          }
          goto LAB_0054e3d4;
        }
        sVar6 = *(long *)(param_1 + 0x50) - (long)__src;
        pvVar5 = __src;
        if (sVar6 != 0) {
          memmove(*(void **)(param_1 + 0x40),__src,sVar6);
          __src = *(void **)(param_1 + 0x48);
          pvVar5 = *(void **)(param_1 + 0x50);
        }
        lVar10 = *(long *)(param_1 + 0x40);
        pvVar5 = (void *)((long)pvVar5 + (lVar10 - (long)__src));
        lVar8 = 8;
        if (lVar10 != param_1 + 0x58) {
          lVar8 = *(long *)(param_1 + 0x60);
        }
        *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x88);
        uVar12 = *(long *)(param_1 + 0x70) - __n;
        sVar6 = (lVar10 + lVar8) - (long)pvVar5;
        if (uVar12 <= sVar6) {
          sVar6 = uVar12;
        }
        *(void **)(param_1 + 0x48) = pvVar5;
        *(long *)(param_1 + 0x50) = lVar10 + lVar8;
        sVar6 = fread(pvVar5,1,sVar6,*(FILE **)(param_1 + 0x78));
        if (sVar6 != 0) {
          plVar7 = *(long **)(param_1 + 0x80);
          if (plVar7 == (long *)0x0) {
            pvVar5 = (void *)0x0;
            if (*(long *)(lVar2 + 0x28) == local_48) {
              pvVar5 = (void *)FUN_0053cd4c();
            }
            goto LAB_0054e3d4;
          }
          lVar8 = *(long *)(param_1 + 0x48) + sVar6;
          *(long *)(param_1 + 0x50) = lVar8;
          iVar4 = (**(code **)(*plVar7 + 0x20))
                            (plVar7,(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x40),
                             lVar8,(undefined8 *)(param_1 + 0x48),*(long *)(param_1 + 0x10) + __n,
                             *(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x70),&local_58);
          if (iVar4 == 3) {
            pbVar9 = *(byte **)(param_1 + 0x40);
            local_58 = *(byte **)(param_1 + 0x50);
            *(byte **)(param_1 + 0x10) = pbVar9;
          }
          else {
            pbVar9 = (byte *)(*(long *)(param_1 + 0x10) + __n);
            if (local_58 == pbVar9) goto LAB_0054e380;
          }
LAB_0054e338:
          *(byte **)(param_1 + 0x18) = pbVar9;
          *(byte **)(param_1 + 0x20) = local_58;
          goto LAB_0054e33c;
        }
      }
      else {
        pvVar5 = (void *)(__n + *(long *)(param_1 + 0x10));
        sVar6 = fread(pvVar5,1,*(long *)(param_1 + 0x20) - (long)pvVar5,*(FILE **)(param_1 + 0x78));
        if (sVar6 != 0) {
          pbVar9 = (byte *)(*(long *)(param_1 + 0x10) + __n);
          local_58 = pbVar9 + sVar6;
          goto LAB_0054e338;
        }
      }
LAB_0054e380:
      pvVar5 = (void *)0xffffffff;
    }
    else {
      pbVar9 = *(byte **)(param_1 + 0x18);
      if (pbVar9 == (byte *)0x0) goto LAB_0054e1c4;
LAB_0054e19c:
      pbVar11 = *(byte **)(param_1 + 0x20);
      if ((uVar1 >> 3 & 1) == 0) goto LAB_0054e1a4;
LAB_0054e1dc:
      lVar8 = (long)pbVar11 - *(long *)(param_1 + 0x10);
      if (lVar8 < 0) {
        lVar8 = lVar8 + 1;
      }
      __n = lVar8 >> 1;
      if (3 < __n) {
        __n = 4;
      }
      if (pbVar9 == pbVar11) goto LAB_0054e204;
LAB_0054e33c:
      pvVar5 = (void *)(ulong)*pbVar9;
    }
    if (*(undefined1 **)(param_1 + 0x10) == auStack_4c) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_0054e3d4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pvVar5);
}


// ===== 0054e3d8  FUN_0054e3d8 =====

uint FUN_0054e3d8(long param_1,uint param_2)

{
  ulong uVar1;
  
  if ((*(long *)(param_1 + 0x78) != 0) &&
     (uVar1 = *(ulong *)(param_1 + 0x18), *(ulong *)(param_1 + 0x10) < uVar1)) {
    if (param_2 == 0xffffffff) {
      *(ulong *)(param_1 + 0x18) = uVar1 - 1;
      return 0;
    }
    if (((*(byte *)(param_1 + 0x98) >> 4 & 1) != 0) ||
       ((uint)*(byte *)(uVar1 - 1) == (param_2 & 0xff))) {
      *(ulong *)(param_1 + 0x18) = uVar1 - 1;
      *(char *)(uVar1 - 1) = (char)param_2;
      return param_2;
    }
  }
  return 0xffffffff;
}


// ===== 0054e438  FUN_0054e438 =====

void FUN_0054e438(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  size_t sVar3;
  long *plVar4;
  size_t sVar5;
  undefined1 *puVar6;
  FILE *__s;
  ulong uVar7;
  void *__ptr;
  void *pvVar8;
  long lVar9;
  void *local_70;
  long local_68;
  undefined1 local_5c [4];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x78) == 0) goto LAB_0054e60c;
  if ((*(byte *)(param_1 + 0x9c) >> 4 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (uVar7 < 9) {
      lVar9 = 0;
      pvVar8 = (void *)0x0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    else {
      if (*(char *)(param_1 + 0xa2) == '\0') {
        pvVar8 = *(void **)(param_1 + 0x68);
        uVar7 = *(ulong *)(param_1 + 0x70);
      }
      else {
        pvVar8 = *(void **)(param_1 + 0x40);
      }
      *(void **)(param_1 + 0x28) = pvVar8;
      *(void **)(param_1 + 0x30) = pvVar8;
      lVar9 = (long)pvVar8 + (uVar7 - 1);
      *(long *)(param_1 + 0x38) = lVar9;
    }
    *(undefined4 *)(param_1 + 0x9c) = 0x10;
  }
  else {
    pvVar8 = *(void **)(param_1 + 0x28);
    lVar9 = *(long *)(param_1 + 0x38);
  }
  puVar6 = *(undefined1 **)(param_1 + 0x30);
  if (param_2 == 0xffffffff) {
    sVar5 = (long)puVar6 - (long)pvVar8;
    __ptr = pvVar8;
    if (sVar5 != 0) goto LAB_0054e520;
LAB_0054e54c:
    uVar2 = 0;
    if (param_2 != 0xffffffff) {
      uVar2 = param_2;
    }
    plVar4 = (long *)(ulong)uVar2;
  }
  else {
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = local_5c;
      *(undefined1 **)(param_1 + 0x28) = puVar6;
      *(undefined1 **)(param_1 + 0x30) = puVar6;
      *(ulong *)(param_1 + 0x38) = (ulong)puVar6 | 1;
    }
    *puVar6 = (char)param_2;
    puVar6 = (undefined1 *)(*(long *)(param_1 + 0x30) + 1);
    *(undefined1 **)(param_1 + 0x30) = puVar6;
    sVar5 = (long)puVar6 - (long)*(void **)(param_1 + 0x28);
    __ptr = *(void **)(param_1 + 0x28);
    if (sVar5 == 0) goto LAB_0054e54c;
LAB_0054e520:
    if (*(char *)(param_1 + 0xa2) == '\0') {
      local_68 = *(long *)(param_1 + 0x40);
      plVar4 = *(long **)(param_1 + 0x80);
      if (plVar4 != (long *)0x0) {
        do {
          uVar2 = (**(code **)(*plVar4 + 0x18))
                            (plVar4,param_1 + 0x88,__ptr,puVar6,&local_70,*(long *)(param_1 + 0x40),
                             *(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x60),&local_68);
          __ptr = *(void **)(param_1 + 0x28);
          if (local_70 == __ptr) goto LAB_0054e60c;
          if (uVar2 == 3) {
            __s = *(FILE **)(param_1 + 0x78);
            sVar5 = *(long *)(param_1 + 0x30) - (long)__ptr;
            goto LAB_0054e530;
          }
          if ((1 < uVar2) ||
             (sVar3 = local_68 - (long)*(void **)(param_1 + 0x40),
             sVar5 = fwrite(*(void **)(param_1 + 0x40),1,sVar3,*(FILE **)(param_1 + 0x78)),
             sVar5 != sVar3)) goto LAB_0054e60c;
          if (uVar2 != 1) goto LAB_0054e544;
          puVar6 = *(undefined1 **)(param_1 + 0x30);
          plVar4 = *(long **)(param_1 + 0x80);
          *(void **)(param_1 + 0x28) = local_70;
          *(undefined1 **)(param_1 + 0x38) = puVar6;
          __ptr = local_70;
        } while (plVar4 != (long *)0x0);
      }
      if (*(long *)(lVar1 + 0x28) != local_58) goto LAB_0054e650;
      FUN_0053cd4c();
    }
    else {
      __s = *(FILE **)(param_1 + 0x78);
LAB_0054e530:
      sVar3 = fwrite(__ptr,1,sVar5,__s);
      if (sVar3 == sVar5) {
LAB_0054e544:
        *(void **)(param_1 + 0x28) = pvVar8;
        *(void **)(param_1 + 0x30) = pvVar8;
        *(long *)(param_1 + 0x38) = lVar9;
        goto LAB_0054e54c;
      }
    }
LAB_0054e60c:
    plVar4 = (long *)0xffffffff;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_0054e650:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar4);
}


// ===== 0054e654  FUN_0054e654 =====

long FUN_0054e654(long param_1,long param_2,ulong param_3)

{
  char cVar1;
  void *pvVar2;
  
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((*(char *)(param_1 + 0xa0) != '\0') && (*(void **)(param_1 + 0x40) != (void *)0x0)) {
    operator_delete__(*(void **)(param_1 + 0x40));
  }
  if ((*(char *)(param_1 + 0xa1) != '\0') && (*(void **)(param_1 + 0x68) != (void *)0x0)) {
    operator_delete__(*(void **)(param_1 + 0x68));
  }
  *(ulong *)(param_1 + 0x60) = param_3;
  if (param_3 < 9) {
    cVar1 = *(char *)(param_1 + 0xa2);
    *(undefined1 *)(param_1 + 0xa0) = 0;
    *(long *)(param_1 + 0x40) = param_1 + 0x58;
    *(undefined8 *)(param_1 + 0x60) = 8;
  }
  else {
    cVar1 = *(char *)(param_1 + 0xa2);
    if ((param_2 != 0) && (cVar1 != '\0')) {
      *(long *)(param_1 + 0x40) = param_2;
      *(undefined1 *)(param_1 + 0xa0) = 0;
      goto LAB_0054e6e4;
    }
    pvVar2 = operator_new__(param_3);
    *(void **)(param_1 + 0x40) = pvVar2;
    *(undefined1 *)(param_1 + 0xa0) = 1;
  }
  if (cVar1 == '\0') {
    if ((long)param_3 < 9) {
      param_3 = 8;
    }
    *(ulong *)(param_1 + 0x70) = param_3;
    if (param_2 != 0) {
      *(long *)(param_1 + 0x68) = param_2;
      *(undefined1 *)(param_1 + 0xa1) = 0;
      return param_1;
    }
    pvVar2 = operator_new__(param_3);
    *(void **)(param_1 + 0x68) = pvVar2;
    *(undefined1 *)(param_1 + 0xa1) = 1;
    return param_1;
  }
LAB_0054e6e4:
  *(undefined1 *)(param_1 + 0xa1) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  return param_1;
}


// ===== 0054e74c  FUN_0054e74c =====

undefined1  [16] FUN_0054e74c(long *param_1,long param_2,__off_t param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  __off_t _Var5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if ((long *)param_1[0x10] == (long *)0x0) {
    auVar7 = FUN_0053cd4c();
    lVar3 = auVar7._8_8_;
    plVar4 = auVar7._0_8_;
    if (((plVar4[0xf] == 0) || (iVar2 = (**(code **)(*plVar4 + 0x30))(), iVar2 != 0)) ||
       (iVar2 = fseeko((FILE *)plVar4[0xf],param_3,0), iVar2 != 0)) {
      lVar3 = 0;
      param_3 = -1;
    }
    else {
      plVar4[0x11] = lVar3;
    }
    auVar7._8_8_ = param_3;
    auVar7._0_8_ = lVar3;
    return auVar7;
  }
  uVar1 = (**(code **)(*(long *)param_1[0x10] + 0x30))();
  if (param_1[0xf] != 0) {
    if ((param_2 == 0) || (0 < (int)uVar1)) {
      iVar2 = (**(code **)(*param_1 + 0x30))(param_1);
      lVar3 = 0;
      _Var5 = -1;
      if ((2 < (uint)param_3) || (iVar2 != 0)) goto LAB_0054e7e4;
      _Var5 = (ulong)uVar1 * param_2;
      if ((int)uVar1 < 1) {
        _Var5 = 0;
      }
      iVar2 = fseeko((FILE *)param_1[0xf],_Var5,(uint)param_3);
      if (iVar2 == 0) {
        _Var5 = ftello((FILE *)param_1[0xf]);
        lVar3 = param_1[0x11];
        goto LAB_0054e7e4;
      }
    }
  }
  lVar3 = 0;
  _Var5 = -1;
LAB_0054e7e4:
  auVar6._8_8_ = _Var5;
  auVar6._0_8_ = lVar3;
  return auVar6;
}


// ===== 0054e80c  FUN_0054e80c =====

undefined1  [16] FUN_0054e80c(long *param_1,long param_2,__off_t param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  
  if (((param_1[0xf] == 0) || (iVar1 = (**(code **)(*param_1 + 0x30))(), iVar1 != 0)) ||
     (iVar1 = fseeko((FILE *)param_1[0xf],param_3,0), iVar1 != 0)) {
    param_2 = 0;
    param_3 = -1;
  }
  else {
    param_1[0x11] = param_2;
  }
  auVar2._8_8_ = param_3;
  auVar2._0_8_ = param_2;
  return auVar2;
}


// ===== 0054e87c  FUN_0054e87c =====

undefined4 FUN_0054e87c(long *param_1)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  undefined4 uVar6;
  long lVar7;
  size_t __n;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1[0xf] == 0) goto LAB_0054e8c0;
  if ((long *)param_1[0x10] == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      FUN_0053cd4c();
    }
    goto LAB_0054ea80;
  }
  if ((*(uint *)((long)param_1 + 0x9c) >> 4 & 1) == 0) {
    if ((*(uint *)((long)param_1 + 0x9c) >> 3 & 1) == 0) {
LAB_0054e8c0:
      uVar6 = 0;
    }
    else {
      local_50 = param_1[0x12];
      if (*(char *)((long)param_1 + 0xa2) == '\0') {
        uVar3 = (**(code **)(*(long *)param_1[0x10] + 0x30))();
        lVar7 = param_1[10] - param_1[9];
        if ((int)uVar3 < 1) {
          if (param_1[3] == param_1[4]) {
            bVar2 = false;
          }
          else {
            iVar4 = (**(code **)(*(long *)param_1[0x10] + 0x40))
                              ((long *)param_1[0x10],&local_50,param_1[8],param_1[9],
                               param_1[3] - param_1[2]);
            bVar2 = true;
            lVar7 = (lVar7 + param_1[9]) - (param_1[8] + (long)iVar4);
          }
        }
        else {
          bVar2 = false;
          lVar7 = lVar7 + (param_1[4] - param_1[3]) * (ulong)uVar3;
        }
      }
      else {
        bVar2 = false;
        lVar7 = param_1[4] - param_1[3];
      }
      iVar4 = fseeko((FILE *)param_1[0xf],-lVar7,1);
      if (iVar4 != 0) goto LAB_0054ea14;
      if (bVar2) {
        param_1[0x11] = local_50;
      }
      uVar6 = 0;
      *(undefined4 *)((long)param_1 + 0x9c) = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[9] = param_1[8];
      param_1[10] = param_1[8];
      param_1[2] = 0;
    }
  }
  else {
    if (param_1[6] != param_1[5]) {
      uVar6 = 0xffffffff;
      iVar4 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff);
      if (iVar4 == -1) goto LAB_0054ea18;
    }
    do {
      iVar4 = (**(code **)(*(long *)param_1[0x10] + 0x28))
                        ((long *)param_1[0x10],param_1 + 0x11,param_1[8],param_1[8] + param_1[0xc],
                         &local_50);
      __n = local_50 - param_1[8];
      sVar5 = fwrite((void *)param_1[8],1,__n,(FILE *)param_1[0xf]);
      if (sVar5 != __n) goto LAB_0054ea14;
    } while (iVar4 == 1);
    if ((iVar4 != 2) && (iVar4 = fflush((FILE *)param_1[0xf]), iVar4 == 0)) goto LAB_0054e8c0;
LAB_0054ea14:
    uVar6 = 0xffffffff;
  }
LAB_0054ea18:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
LAB_0054ea80:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0054ea84  FUN_0054ea84 =====

void FUN_0054ea84(long *param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  
  (**(code **)(*param_1 + 0x30))();
  plVar5 = (long *)FUN_0053cfd4(param_2,PTR_DAT_00d51dd8);
  lVar7 = *plVar5;
  param_1[0x10] = (long)plVar5;
  bVar2 = *(byte *)((long)param_1 + 0xa2);
  bVar4 = (**(code **)(lVar7 + 0x38))();
  *(byte *)((long)param_1 + 0xa2) = bVar4 & 1;
  if (bVar2 != (bVar4 & 1)) {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    if ((bVar4 & 1) == 0) {
      if (((char)param_1[0x14] == '\0') && ((long *)param_1[8] != param_1 + 0xb)) {
        *(undefined1 *)((long)param_1 + 0xa1) = 0;
        param_1[0xd] = param_1[8];
        param_1[0xe] = param_1[0xc];
        pvVar6 = operator_new__(param_1[0xc]);
        param_1[8] = (long)pvVar6;
        *(undefined1 *)(param_1 + 0x14) = 1;
      }
      else {
        param_1[0xe] = param_1[0xc];
        pvVar6 = operator_new__(param_1[0xc]);
        param_1[0xd] = (long)pvVar6;
        *(undefined1 *)((long)param_1 + 0xa1) = 1;
      }
    }
    else {
      if (((char)param_1[0x14] != '\0') && ((void *)param_1[8] != (void *)0x0)) {
        operator_delete__((void *)param_1[8]);
      }
      lVar7 = param_1[0xd];
      lVar1 = param_1[0xe];
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      uVar3 = *(undefined1 *)((long)param_1 + 0xa1);
      *(undefined1 *)((long)param_1 + 0xa1) = 0;
      param_1[8] = lVar7;
      *(undefined1 *)(param_1 + 0x14) = uVar3;
      param_1[0xc] = lVar1;
    }
  }
  return;
}


// ===== 0054eb74  FUN_0054eb74 =====

void FUN_0054eb74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d226c8;
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  *param_1 = &PTR_FUN_00d22488;
  FUN_0053ceec(param_1 + 1);
  return;
}


// ===== 0054ebbc  FUN_0054ebbc =====

void FUN_0054ebbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d226c8;
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  *param_1 = &PTR_FUN_00d22488;
  FUN_0053ceec(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 0054ec0c  FUN_0054ec0c =====

void FUN_0054ec0c(long *param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0054ec1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_3,0);
  return;
}


// ===== 0054ec20  FUN_0054ec20 =====

void FUN_0054ec20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d22910;
  param_1[0x10] = &PTR_FUN_00d22960;
  param_1[2] = &PTR_FUN_00d22938;
  param_1[3] = &PTR_FUN_00d226c8;
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    operator_delete((void *)param_1[0xb]);
  }
  param_1[3] = &PTR_FUN_00d22488;
  FUN_0053ceec(param_1 + 4);
  FUN_00520cf4(param_1 + 0x10);
  operator_delete(param_1);
  return;
}


// ===== 0054ec94  FUN_0054ec94 =====

void FUN_0054ec94(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_00d22910;
  param_1[0xe] = &PTR_FUN_00d22960;
  *param_1 = &PTR_FUN_00d22938;
  param_1[1] = &PTR_FUN_00d226c8;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  param_1[1] = &PTR_FUN_00d22488;
  FUN_0053ceec(param_1 + 2);
  FUN_00520cf4(param_1 + 0xe);
  return;
}


// ===== 0054ed00  FUN_0054ed00 =====

void FUN_0054ed00(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_00d22910;
  param_1[0xe] = &PTR_FUN_00d22960;
  *param_1 = &PTR_FUN_00d22938;
  param_1[1] = &PTR_FUN_00d226c8;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  param_1[1] = &PTR_FUN_00d22488;
  FUN_0053ceec(param_1 + 2);
  FUN_00520cf4(param_1 + 0xe);
  operator_delete(param_1 + -2);
  return;
}


// ===== 0054ed80  FUN_0054ed80 =====

void FUN_0054ed80(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_00d22910;
  puVar1[0x10] = &PTR_FUN_00d22960;
  puVar1[2] = &PTR_FUN_00d22938;
  puVar1[3] = &PTR_FUN_00d226c8;
  if (*(char *)((long)puVar1 + 0x6f) < '\0') {
    operator_delete((void *)puVar1[0xb]);
  }
  puVar1[3] = &PTR_FUN_00d22488;
  FUN_0053ceec(puVar1 + 4);
  FUN_00520cf4(puVar1 + 0x10);
  return;
}


// ===== 0054edf4  FUN_0054edf4 =====

void FUN_0054edf4(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_00d22910;
  puVar1[0x10] = &PTR_FUN_00d22960;
  puVar1[2] = &PTR_FUN_00d22938;
  puVar1[3] = &PTR_FUN_00d226c8;
  if (*(char *)((long)puVar1 + 0x6f) < '\0') {
    operator_delete((void *)puVar1[0xb]);
  }
  puVar1[3] = &PTR_FUN_00d22488;
  FUN_0053ceec(puVar1 + 4);
  FUN_00520cf4(puVar1 + 0x10);
  operator_delete(puVar1);
  return;
}


// ===== 0054ee70  FUN_0054ee70 =====

void FUN_0054ee70(undefined8 *param_1)

{
  param_1[0xe] = &PTR_FUN_00d22b30;
  *param_1 = &PTR_FUN_00d22b08;
  param_1[1] = &PTR_FUN_00d226c8;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  param_1[1] = &PTR_FUN_00d22488;
  FUN_0053ceec(param_1 + 2);
  FUN_00520cf4(param_1 + 0xe);
  return;
}


// ===== 0054eed4  FUN_0054eed4 =====

void FUN_0054eed4(undefined8 *param_1)

{
  param_1[0xe] = &PTR_FUN_00d22b30;
  *param_1 = &PTR_FUN_00d22b08;
  param_1[1] = &PTR_FUN_00d226c8;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  param_1[1] = &PTR_FUN_00d22488;
  FUN_0053ceec(param_1 + 2);
  FUN_00520cf4(param_1 + 0xe);
  operator_delete(param_1);
  return;
}


// ===== 0054ef40  FUN_0054ef40 =====

void FUN_0054ef40(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1[0xe] = &PTR_FUN_00d22b30;
  *puVar1 = &PTR_FUN_00d22b08;
  puVar1[1] = &PTR_FUN_00d226c8;
  if (*(char *)((long)puVar1 + 0x5f) < '\0') {
    operator_delete((void *)puVar1[9]);
  }
  puVar1[1] = &PTR_FUN_00d22488;
  FUN_0053ceec(puVar1 + 2);
  FUN_00520cf4(puVar1 + 0xe);
  return;
}


// ===== 0054efac  FUN_0054efac =====

void FUN_0054efac(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1[0xe] = &PTR_FUN_00d22b30;
  *puVar1 = &PTR_FUN_00d22b08;
  puVar1[1] = &PTR_FUN_00d226c8;
  if (*(char *)((long)puVar1 + 0x5f) < '\0') {
    operator_delete((void *)puVar1[9]);
  }
  puVar1[1] = &PTR_FUN_00d22488;
  FUN_0053ceec(puVar1 + 2);
  FUN_00520cf4(puVar1 + 0xe);
  operator_delete(puVar1);
  return;
}


// ===== 0054f020  FUN_0054f020 =====

void FUN_0054f020(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d22be0;
  param_1[2] = &PTR_FUN_00d226c8;
  param_1[0xf] = &PTR_FUN_00d22c08;
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    operator_delete((void *)param_1[10]);
  }
  param_1[2] = &PTR_FUN_00d22488;
  FUN_0053ceec(param_1 + 3);
  FUN_00520cf4(param_1 + 0xf);
  return;
}


// ===== 0054f088  FUN_0054f088 =====

void FUN_0054f088(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d22be0;
  param_1[2] = &PTR_FUN_00d226c8;
  param_1[0xf] = &PTR_FUN_00d22c08;
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    operator_delete((void *)param_1[10]);
  }
  param_1[2] = &PTR_FUN_00d22488;
  FUN_0053ceec(param_1 + 3);
  FUN_00520cf4(param_1 + 0xf);
  operator_delete(param_1);
  return;
}


// ===== 0054f0f8  FUN_0054f0f8 =====

void FUN_0054f0f8(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1[2] = &PTR_FUN_00d226c8;
  *puVar1 = &PTR_FUN_00d22be0;
  puVar1[0xf] = &PTR_FUN_00d22c08;
  if (*(char *)((long)puVar1 + 0x67) < '\0') {
    operator_delete((void *)puVar1[10]);
  }
  puVar1[2] = &PTR_FUN_00d22488;
  FUN_0053ceec(puVar1 + 3);
  FUN_00520cf4(puVar1 + 0xf);
  return;
}


// ===== 0054f168  FUN_0054f168 =====

void FUN_0054f168(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1[2] = &PTR_FUN_00d226c8;
  *puVar1 = &PTR_FUN_00d22be0;
  puVar1[0xf] = &PTR_FUN_00d22c08;
  if (*(char *)((long)puVar1 + 0x67) < '\0') {
    operator_delete((void *)puVar1[10]);
  }
  puVar1[2] = &PTR_FUN_00d22488;
  FUN_0053ceec(puVar1 + 3);
  FUN_00520cf4(puVar1 + 0xf);
  operator_delete(puVar1);
  return;
}


// ===== 0054f1e0  FUN_0054f1e0 =====

void FUN_0054f1e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d22cb8;
  param_1[0x17] = &PTR_FUN_00d22ce0;
  FUN_0054dfb0(param_1 + 2);
  FUN_00520cf4(param_1 + 0x17);
  operator_delete(param_1);
  return;
}


// ===== 0054f224  FUN_0054f224 =====

void FUN_0054f224(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1[0x17] = &PTR_FUN_00d22ce0;
  *puVar1 = &PTR_FUN_00d22cb8;
  FUN_0054dfb0(puVar1 + 2);
  FUN_00520cf4(puVar1 + 0x17);
  return;
}


// ===== 0054f268  FUN_0054f268 =====

void FUN_0054f268(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_00d22cb8;
  puVar1[0x17] = &PTR_FUN_00d22ce0;
  FUN_0054dfb0(puVar1 + 2);
  FUN_00520cf4(puVar1 + 0x17);
  operator_delete(puVar1);
  return;
}


// ===== 0054f2b8  FUN_0054f2b8 =====

void FUN_0054f2b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d22d90;
  param_1[0x16] = &PTR_FUN_00d22db8;
  FUN_0054dfb0(param_1 + 1);
  FUN_00520cf4(param_1 + 0x16);
  return;
}


// ===== 0054f2f0  FUN_0054f2f0 =====

void FUN_0054f2f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d22d90;
  param_1[0x16] = &PTR_FUN_00d22db8;
  FUN_0054dfb0(param_1 + 1);
  FUN_00520cf4(param_1 + 0x16);
  operator_delete(param_1);
  return;
}


// ===== 0054f334  FUN_0054f334 =====

void FUN_0054f334(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1[0x16] = &PTR_FUN_00d22db8;
  *puVar1 = &PTR_FUN_00d22d90;
  FUN_0054dfb0(puVar1 + 1);
  FUN_00520cf4(puVar1 + 0x16);
  return;
}


// ===== 0054f378  FUN_0054f378 =====

void FUN_0054f378(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_00d22d90;
  puVar1[0x16] = &PTR_FUN_00d22db8;
  FUN_0054dfb0(puVar1 + 1);
  FUN_00520cf4(puVar1 + 0x16);
  operator_delete(puVar1);
  return;
}


// ===== 0054f3c8  std::__Cr::__libcpp_verbose_abort =====

/* std::__Cr::__libcpp_verbose_abort(char const*, ...) */

void std::__Cr::__libcpp_verbose_abort(char *param_1,...)

{
  long lVar1;
  undefined8 in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  undefined1 auStack_110 [8];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined1 **ppuStack_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  char *local_a8;
  undefined1 *local_a0;
  undefined1 **ppuStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uStack_88 = 0xffffff80ffffffc8;
  local_108 = in_x1;
  uStack_100 = in_x2;
  local_f8 = in_x3;
  uStack_f0 = in_x4;
  local_e8 = in_x5;
  uStack_e0 = in_x6;
  local_d8 = in_x7;
  local_a0 = (undefined1 *)register0x00000008;
  ppuStack_98 = &local_d0;
  puStack_90 = auStack_110;
  vfprintf(*(FILE **)PTR_stderr_00d51cb8,param_1,&local_a0);
  uStack_b8 = 0xffffff80ffffffc8;
  local_d0 = (undefined1 *)register0x00000008;
  ppuStack_c8 = &local_d0;
  puStack_c0 = auStack_110;
  vasprintf(&local_a8,param_1,&local_d0);
  android_set_abort_message(local_a8);
  openlog("libc++",0,0);
  syslog(2,"%s",local_a8);
  closelog();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0054f4c8  FUN_0054f4c8 =====

void FUN_0054f4c8(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_120 [8];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined1 **ppuStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  char *local_b8;
  undefined1 *local_b0;
  undefined1 **ppuStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  
  puVar2 = PTR_stderr_00d51cb8;
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  local_118 = param_2;
  uStack_110 = param_3;
  local_108 = param_4;
  uStack_100 = param_5;
  local_f8 = param_6;
  uStack_f0 = param_7;
  local_e8 = param_8;
  fwrite("libc++abi: ",0xb,1,*(FILE **)PTR_stderr_00d51cb8);
  uStack_98 = 0xffffff80ffffffc8;
  local_b0 = (undefined1 *)register0x00000008;
  ppuStack_a8 = &local_e0;
  puStack_a0 = auStack_120;
  vfprintf(*(FILE **)puVar2,param_1,&local_b0);
  fputc(10,*(FILE **)puVar2);
  uStack_c8 = 0xffffff80ffffffc8;
  local_e0 = (undefined1 *)register0x00000008;
  ppuStack_d8 = &local_e0;
  puStack_d0 = auStack_120;
  vasprintf(&local_b8,param_1,&local_e0);
  android_set_abort_message(local_b8);
  openlog("libc++abi",0,0);
  syslog(2,"%s",local_b8);
  closelog();
  if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0054f5f0  FUN_0054f5f0 =====

void FUN_0054f5f0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0054f64c(8);
  FUN_00552770();
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar1,PTR_PTR_00d51d50,PTR_thunk_FUN_0055234c_00d51df8);
}


// ===== 0054f624  FUN_0054f624 =====

undefined8 FUN_0054f624(undefined8 *param_1)

{
  return *param_1;
}


// ===== 0054f62c  FUN_0054f62c =====

bool FUN_0054f62c(ulong *param_1)

{
  return *param_1 >> 8 == 0x434c4e47432b2b;
}


// ===== 0054f64c  FUN_0054f64c =====

long FUN_0054f64c(long param_1)

{
  void *__s;
  ulong __n;
  
  __n = param_1 + 0x8fU & 0xfffffffffffffff0;
                    /* try { // try from 0054f660 to 0054f667 has its CatchHandler @ 0054f694 */
  __s = (void *)FUN_0055093c(__n);
  if (__s != (void *)0x0) {
    memset(__s,0,__n);
    return (long)__s + 0x80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00550060();
}


// ===== 0054f698  FUN_0054f698 =====

ulong * FUN_0054f698(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  
  uVar6 = *param_1;
                    /* try { // try from 0054f6a8 to 0054f6ab has its CatchHandler @ 0054f728 */
  plVar3 = (long *)FUN_0054fca0();
  puVar5 = param_1 + -0xc;
  if (uVar6 >> 8 == 0x434c4e47432b2b) {
    iVar2 = (int)param_1[-5];
    iVar1 = -iVar2;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    puVar4 = (ulong *)*plVar3;
    *(int *)(param_1 + -5) = iVar1 + 1;
    if (puVar5 != puVar4) {
      param_1[-6] = (ulong)puVar4;
      *plVar3 = (long)puVar5;
    }
    param_1 = (ulong *)param_1[-1];
    *(int *)(plVar3 + 1) = (int)plVar3[1] + -1;
  }
  else {
    if (*plVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00550060();
    }
    param_1 = param_1 + 4;
    *plVar3 = (long)puVar5;
  }
  return param_1;
}


// ===== 0054f72c  FUN_0054f72c =====

void FUN_0054f72c(long param_1)

{
                    /* try { // try from 0054f738 to 0054f73b has its CatchHandler @ 0054f744 */
  FUN_00550b14(param_1 + -0x80);
  return;
}


// ===== 0054f748  FUN_0054f748 =====

void FUN_0054f748(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x1;
  long *plVar6;
  
  lVar4 = FUN_0054fca0();
  uVar5 = FUN_00550050();
  *(undefined8 *)(param_1 + -0x60) = uVar5;
  uVar5 = FUN_0055009c();
  *(undefined8 *)(param_1 + -0x20) = 0x434c4e47432b2b00;
  iVar3 = *(int *)(lVar4 + 8);
  *(undefined8 *)(param_1 + -0x58) = uVar5;
  *(undefined8 *)(param_1 + -0x70) = param_2;
  *(undefined8 *)(param_1 + -0x68) = param_3;
  *(undefined8 *)(param_1 + -0x78) = 1;
  *(code **)(param_1 + -0x18) = FUN_0054f7c8;
  *(int *)(lVar4 + 8) = iVar3 + 1;
  FUN_00d0f860((undefined8 *)(param_1 + -0x20));
  iVar3 = FUN_0054f82c(param_1 + -0x80);
  if (iVar3 == 1) {
    plVar6 = (long *)(extraout_x1 + -0x58);
    do {
      lVar4 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      if (*(code **)(extraout_x1 + -0x48) != (code *)0x0) {
        (**(code **)(extraout_x1 + -0x48))(extraout_x1 + 0x20);
      }
      FUN_00550b14(extraout_x1 + -0x60);
    }
    return;
  }
  FUN_005500ac(*(undefined8 *)(extraout_x1 + -0x38));
                    /* WARNING: Subroutine does not return */
  FUN_004e7ed8();
}


// ===== 0054f7c8  FUN_0054f7c8 =====

void FUN_0054f7c8(int param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (param_1 == 1) {
    plVar3 = (long *)(param_2 + -0x58);
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      if (*(code **)(param_2 + -0x48) != (code *)0x0) {
                    /* try { // try from 0054f804 to 0054f807 has its CatchHandler @ 0054f824 */
        (**(code **)(param_2 + -0x48))(param_2 + 0x20);
      }
                    /* try { // try from 0054f808 to 0054f80f has its CatchHandler @ 0054f828 */
      FUN_00550b14(param_2 + -0x60);
    }
    return;
  }
  FUN_005500ac(*(undefined8 *)(param_2 + -0x38));
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0054f804 with catch @ 0054f824
                        */
  FUN_004e7ed8();
}


// ===== 0054f82c  FUN_0054f82c =====

void FUN_0054f82c(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  FUN_0054f698(param_1 + 0x60);
  FUN_005500ac(*(undefined8 *)(param_1 + 0x28));
  plVar4 = (long *)FUN_0054fd30();
  lVar5 = *plVar4;
  if (lVar5 == 0) {
    return;
  }
  if (*(ulong *)(lVar5 + 0x60) >> 8 == 0x434c4e47432b2b) {
    iVar1 = *(int *)(lVar5 + 0x38);
    if (-1 < iVar1) {
      *(int *)(lVar5 + 0x38) = iVar1 + -1;
      if (iVar1 + -1 != 0) {
        return;
      }
      *plVar4 = *(long *)(lVar5 + 0x30);
      lVar6 = lVar5;
      if (*(char *)(lVar5 + 0x60) == '\x01') {
        lVar6 = *(long *)(lVar5 + 8) + -0x80;
        FUN_00550b14(lVar5);
      }
      plVar4 = (long *)(lVar6 + 8);
      do {
        lVar5 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 != 0) {
        return;
      }
      if (*(code **)(lVar6 + 0x18) != (code *)0x0) {
        (**(code **)(lVar6 + 0x18))(lVar6 + 0x80);
      }
      FUN_00550b14(lVar6);
      return;
    }
    *(int *)(lVar5 + 0x38) = iVar1 + 1;
    if (iVar1 != -1) {
      return;
    }
    lVar5 = *(long *)(lVar5 + 0x30);
  }
  else {
    FUN_00d0fc30();
    lVar5 = 0;
  }
  *plVar4 = lVar5;
  return;
}


// ===== 0054f84c  FUN_0054f84c =====

void FUN_0054f84c(void)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar4 = (long *)FUN_0054fd30();
  lVar5 = *plVar4;
  if (lVar5 == 0) {
    return;
  }
  if (*(ulong *)(lVar5 + 0x60) >> 8 == 0x434c4e47432b2b) {
    iVar1 = *(int *)(lVar5 + 0x38);
    if (-1 < iVar1) {
      *(int *)(lVar5 + 0x38) = iVar1 + -1;
      if (iVar1 + -1 != 0) {
        return;
      }
      *plVar4 = *(long *)(lVar5 + 0x30);
      lVar6 = lVar5;
      if (*(char *)(lVar5 + 0x60) == '\x01') {
        lVar6 = *(long *)(lVar5 + 8) + -0x80;
        FUN_00550b14(lVar5);
      }
      plVar4 = (long *)(lVar6 + 8);
      do {
        lVar5 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 != 0) {
        return;
      }
      if (*(code **)(lVar6 + 0x18) != (code *)0x0) {
                    /* try { // try from 0054f8e8 to 0054f8eb has its CatchHandler @ 0054f924 */
        (**(code **)(lVar6 + 0x18))(lVar6 + 0x80);
      }
                    /* try { // try from 0054f8ec to 0054f8f3 has its CatchHandler @ 0054f928 */
      FUN_00550b14(lVar6);
      return;
    }
    *(int *)(lVar5 + 0x38) = iVar1 + 1;
    if (iVar1 != -1) {
      return;
    }
    lVar5 = *(long *)(lVar5 + 0x30);
  }
  else {
    FUN_00d0fc30();
    lVar5 = 0;
  }
  *plVar4 = lVar5;
  return;
}


// ===== 0054f92c  FUN_0054f92c =====

void FUN_0054f92c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (param_1 != 0) {
    plVar3 = (long *)(param_1 + -0x78);
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      if (*(code **)(param_1 + -0x68) != (code *)0x0) {
                    /* try { // try from 0054f960 to 0054f963 has its CatchHandler @ 0054f978 */
        (**(code **)(param_1 + -0x68))();
      }
                    /* try { // try from 0054f964 to 0054f96b has its CatchHandler @ 0054f97c */
      FUN_00550b14(param_1 + -0x80);
    }
  }
  return;
}


// ===== 0054f980  FUN_0054f980 =====

void FUN_0054f980(void)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  
  plVar3 = (long *)FUN_0054fca0();
  lVar8 = *plVar3;
  if (lVar8 != 0) {
    puVar6 = (ulong *)(lVar8 + 0x60);
    uVar4 = *puVar6;
    if ((uVar4 & 0xffffffffffffff00) == 0x434c4e47432b2b00) {
      lVar5 = plVar3[1];
      *(int *)(lVar8 + 0x38) = -*(int *)(lVar8 + 0x38);
      *(int *)(plVar3 + 1) = (int)lVar5 + 1;
    }
    else {
      *plVar3 = 0;
    }
    FUN_00d0f860(puVar6);
    uVar7 = *puVar6;
                    /* try { // try from 0054f9f0 to 0054f9f3 has its CatchHandler @ 0054fa5c */
    plVar3 = (long *)FUN_0054fca0();
    if ((uVar7 & 0xffffffffffffff00) == 0x434c4e47432b2b00) {
      iVar2 = *(int *)(lVar8 + 0x38);
      iVar1 = -iVar2;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      lVar5 = *plVar3;
      *(int *)(lVar8 + 0x38) = iVar1 + 1;
      if (lVar8 != lVar5) {
        *(long *)(lVar8 + 0x30) = lVar5;
        *plVar3 = lVar8;
      }
      *(int *)(plVar3 + 1) = (int)plVar3[1] + -1;
    }
    else {
      if (*plVar3 != 0) goto LAB_0054f99c;
      *plVar3 = lVar8;
    }
    if ((uVar4 & 0xffffffffffffff00) == 0x434c4e47432b2b00) {
      FUN_005500ac(*(undefined8 *)(lVar8 + 0x28));
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0054f9f0 with catch @ 0054fa5c
                        */
      FUN_004e7ed8();
    }
  }
LAB_0054f99c:
                    /* WARNING: Subroutine does not return */
  FUN_00550060();
}


// ===== 0054fa60  FUN_0054fa60 =====

void FUN_0054fa60(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  
  if (param_1 != 0) {
    plVar3 = (long *)(param_1 + -0x78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return;
}


// ===== 0054fa7c  FUN_0054fa7c =====

long * FUN_0054fa7c(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
                    /* try { // try from 0054fa84 to 0054fa87 has its CatchHandler @ 0054faf0 */
  plVar4 = (long *)FUN_0054fd30();
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    if ((lVar5 == 0) || (*(ulong *)(lVar5 + 0x60) >> 8 != 0x434c4e47432b2b)) {
      return (long *)0x0;
    }
    if ((*(ulong *)(lVar5 + 0x60) & 0xff) == 1) {
      lVar5 = *(long *)(lVar5 + 8) + -0x80;
    }
    plVar4 = (long *)(lVar5 + 0x80);
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
  return plVar4;
}


// ===== 0054faf4  FUN_0054faf4 =====

void FUN_0054faf4(long param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  ulong uVar11;
  
  if (param_1 != 0) {
    puVar5 = (undefined8 *)FUN_0055093c(0x80);
    if (puVar5 == (undefined8 *)0x0) {
LAB_0054fc08:
                    /* WARNING: Subroutine does not return */
      FUN_00550060();
    }
    plVar8 = (long *)(param_1 + -0x78);
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[0xb] = 0;
    puVar5[10] = 0;
    puVar5[0xd] = 0;
    puVar5[0xc] = 0;
    puVar5[0xf] = 0;
    puVar5[0xe] = 0;
    puVar5[1] = param_1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar5[2] = *(undefined8 *)(param_1 + -0x70);
    uVar6 = FUN_00550050();
    puVar5[4] = uVar6;
    uVar6 = FUN_0055009c();
    puVar10 = puVar5 + 0xc;
    *puVar10 = 0x434c4e47432b2b01;
    puVar5[5] = uVar6;
    lVar7 = FUN_0054fca0();
    puVar5[0xd] = FUN_0054fc10;
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    FUN_00d0f860(puVar10);
    uVar11 = *puVar10;
                    /* try { // try from 0054fba4 to 0054fba7 has its CatchHandler @ 0054fc0c */
    plVar8 = (long *)FUN_0054fca0();
    if ((uVar11 & 0xffffffffffffff00) == 0x434c4e47432b2b00) {
      iVar2 = *(int *)(puVar5 + 7);
      iVar1 = -iVar2;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      puVar9 = (undefined8 *)*plVar8;
      *(int *)(puVar5 + 7) = iVar1 + 1;
      if (puVar5 != puVar9) {
        puVar5[6] = puVar9;
        *plVar8 = (long)puVar5;
      }
      *(int *)(plVar8 + 1) = (int)plVar8[1] + -1;
    }
    else {
      if (*plVar8 != 0) goto LAB_0054fc08;
      *plVar8 = (long)puVar5;
    }
  }
  return;
}


// ===== 0054fc10  FUN_0054fc10 =====

void FUN_0054fc10(int param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (param_1 == 1) {
    lVar3 = *(long *)(param_2 + -0x58);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + -0x78);
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 == 0) {
        if (*(code **)(lVar3 + -0x68) != (code *)0x0) {
                    /* try { // try from 0054fc54 to 0054fc57 has its CatchHandler @ 0054fc78 */
          (**(code **)(lVar3 + -0x68))();
        }
                    /* try { // try from 0054fc58 to 0054fc5f has its CatchHandler @ 0054fc7c */
        FUN_00550b14(lVar3 + -0x80);
      }
    }
    FUN_00550b14(param_2 + -0x60);
    return;
  }
  FUN_005500ac(*(undefined8 *)(param_2 + -0x38));
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0054fc54 with catch @ 0054fc78
                        */
  FUN_004e7ed8();
}


// ===== 0054fc80  FUN_0054fc80 =====

ulong FUN_0054fc80(void)

{
  ulong uVar1;
  
                    /* try { // try from 0054fc88 to 0054fc8b has its CatchHandler @ 0054fc9c */
  uVar1 = FUN_0054fd30();
  if (uVar1 != 0) {
    uVar1 = (ulong)*(uint *)(uVar1 + 8);
  }
  return uVar1;
}


// ===== 0054fca0  FUN_0054fca0 =====

void * FUN_0054fca0(void)

{
  int iVar1;
  void *__pointer;
  
  iVar1 = pthread_once((pthread_once_t *)&DAT_00d629fc,FUN_0054fd6c);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0054f4c8("execute once failure in __cxa_get_globals_fast()");
  }
  __pointer = pthread_getspecific(DAT_00d629f8);
  if (__pointer == (void *)0x0) {
    __pointer = (void *)FUN_00550ab8(1,0x10);
    if (__pointer == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f4c8("cannot allocate __cxa_eh_globals");
    }
    iVar1 = pthread_setspecific(DAT_00d629f8,__pointer);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f4c8("std::__libcpp_tls_set failure in __cxa_get_globals()");
    }
  }
  return __pointer;
}


// ===== 0054fd30  FUN_0054fd30 =====

void FUN_0054fd30(void)

{
  int iVar1;
  
  iVar1 = pthread_once((pthread_once_t *)&DAT_00d629fc,FUN_0054fd6c);
  if (iVar1 == 0) {
    pthread_getspecific(DAT_00d629f8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0054f4c8("execute once failure in __cxa_get_globals_fast()");
}


// ===== 0054fd6c  FUN_0054fd6c =====

void FUN_0054fd6c(void)

{
  int iVar1;
  
  iVar1 = pthread_key_create(&DAT_00d629f8,FUN_0054fda0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0054f4c8("cannot create thread specific key for __cxa_get_globals()");
}


// ===== 0054fda0  FUN_0054fda0 =====

void FUN_0054fda0(void)

{
  int iVar1;
  
  FUN_00550c3c();
  iVar1 = pthread_setspecific(DAT_00d629f8,(void *)0x0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0054f4c8("cannot zero out thread value for __cxa_get_globals()");
}


// ===== 0054fdd4  FUN_0054fdd4 =====

bool FUN_0054fdd4(char *param_1)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  int unaff_w20;
  
  if (*param_1 == '\0') {
    iVar4 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00d62a00);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f4c8("%s failed to acquire mutex","__cxa_guard_acquire");
    }
    bVar1 = param_1[1];
    if ((bVar1 >> 1 & 1) != 0) {
      iVar4 = *(int *)(param_1 + 4);
                    /* try { // try from 0054fe18 to 0054fe1f has its CatchHandler @ 0054fee0 */
      lVar5 = syscall(0xb2);
      unaff_w20 = (int)lVar5;
      if (iVar4 == unaff_w20) {
                    /* try { // try from 0054fed4 to 0054fedf has its CatchHandler @ 0054fee0 */
                    /* WARNING: Subroutine does not return */
        FUN_0054f4c8("__cxa_guard_acquire detected recursive initialization");
      }
    }
    while (bVar2 = param_1[1], (bVar2 >> 1 & 1) != 0) {
      param_1[1] = bVar2 | 4;
                    /* try { // try from 0054fe4c to 0054fe57 has its CatchHandler @ 0054fee8 */
      pthread_cond_wait((pthread_cond_t *)&DAT_00d62a28,(pthread_mutex_t *)&DAT_00d62a00);
    }
    if (bVar2 != 1) {
      if ((bVar1 >> 1 & 1) == 0) {
                    /* try { // try from 0054fe68 to 0054fe6f has its CatchHandler @ 0054fee0 */
        lVar5 = syscall(0xb2);
        unaff_w20 = (int)lVar5;
      }
      *(int *)(param_1 + 4) = unaff_w20;
      param_1[1] = '\x02';
    }
                    /* try { // try from 0054fe80 to 0054fe8b has its CatchHandler @ 0054fee4 */
    iVar4 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00d62a00);
    if (iVar4 != 0) {
                    /* try { // try from 0054fec0 to 0054fed3 has its CatchHandler @ 0054fee4 */
                    /* WARNING: Subroutine does not return */
      FUN_0054f4c8("%s failed to release mutex","__cxa_guard_acquire");
    }
    bVar3 = bVar2 != 1;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}


// ===== 0054ff1c  FUN_0054ff1c =====

void FUN_0054ff1c(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  
  *param_1 = 1;
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00d62a00);
  if (iVar2 == 0) {
    bVar1 = *(byte *)((long)param_1 + 1);
    *(undefined1 *)((long)param_1 + 1) = 1;
                    /* try { // try from 0054ff50 to 0054ff5b has its CatchHandler @ 0054ffb8 */
    iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00d62a00);
    if (iVar2 != 0) {
                    /* try { // try from 0054ff90 to 0054ffa3 has its CatchHandler @ 0054ffb8 */
                    /* WARNING: Subroutine does not return */
      FUN_0054f4c8("%s failed to release mutex","__cxa_guard_release");
    }
    if (((bVar1 >> 2 & 1) == 0) ||
       (iVar2 = pthread_cond_broadcast((pthread_cond_t *)&DAT_00d62a28), iVar2 == 0)) {
      return;
    }
    pcVar3 = "%s failed to broadcast";
  }
  else {
    pcVar3 = "%s failed to acquire mutex";
  }
                    /* WARNING: Subroutine does not return */
  FUN_0054f4c8(pcVar3,"__cxa_guard_release");
}


// ===== 0054ffbc  FUN_0054ffbc =====

void FUN_0054ffbc(long param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00d62a00);
  if (iVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 1);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 1) = 0;
                    /* try { // try from 0054ffe8 to 0054fff3 has its CatchHandler @ 0055004c */
    iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00d62a00);
    if (iVar2 != 0) {
                    /* try { // try from 00550024 to 00550037 has its CatchHandler @ 0055004c */
                    /* WARNING: Subroutine does not return */
      FUN_0054f4c8("%s failed to release mutex","__cxa_guard_abort");
    }
    if (((bVar1 >> 2 & 1) == 0) ||
       (iVar2 = pthread_cond_broadcast((pthread_cond_t *)&DAT_00d62a28), iVar2 == 0)) {
      return;
    }
    pcVar3 = "%s failed to broadcast";
  }
  else {
    pcVar3 = "%s failed to acquire mutex";
  }
                    /* WARNING: Subroutine does not return */
  FUN_0054f4c8(pcVar3,"__cxa_guard_abort");
}


// ===== 00550050  FUN_00550050 =====

undefined * FUN_00550050(void)

{
  return PTR_FUN_00d595e8;
}


// ===== 00550060  FUN_00550060 =====

void FUN_00550060(void)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x19;
  
                    /* try { // try from 00550064 to 0055008b has its CatchHandler @ 00550098 */
  plVar1 = (long *)FUN_0054fd30();
  if ((plVar1 != (long *)0x0) && (unaff_x19 = *plVar1, unaff_x19 != 0)) goto LAB_00550084;
  do {
    FUN_005500ac(PTR_abort_00d595e0);
LAB_00550084:
    uVar2 = FUN_0054f62c(unaff_x19 + 0x60);
  } while ((uVar2 & 1) == 0);
  FUN_005500ac(*(undefined8 *)(unaff_x19 + 0x28));
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00550064 with catch @ 00550098
                        */
  FUN_004e7ed8();
}


// ===== 0055009c  FUN_0055009c =====

undefined * FUN_0055009c(void)

{
  return PTR_abort_00d595e0;
}


// ===== 005500ac  FUN_005500ac =====

void FUN_005500ac(code *param_1)

{
                    /* try { // try from 005500b4 to 005500c3 has its CatchHandler @ 005500c4 */
  (*param_1)();
                    /* WARNING: Subroutine does not return */
  FUN_0054f4c8("terminate_handler unexpectedly returned");
}


// ===== 005500d8  FUN_005500d8 =====

undefined8 FUN_005500d8(void)

{
  return DAT_00d629f0;
}


// ===== 005500e8  FUN_005500e8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_005500e8(int param_1,uint param_2,ulong param_3,long param_4,long param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  ulong uVar22;
  byte *pbVar23;
  uint local_a8;
  byte *local_88;
  byte *local_80;
  byte *local_78;
  byte *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar7 = 3;
  if (((param_1 == 1) && (param_4 != 0)) && (param_5 != 0)) {
    param_3 = param_3 & 0xffffffffffffff00;
    if ((param_2 == 6) && (param_3 == 0x434c4e47432b2b00)) {
      iVar3 = *(int *)(param_4 + -0x24);
      uVar7 = *(undefined8 *)(param_4 + -0x10);
      thunk_FUN_00d0fda8(param_5,0,param_4);
      thunk_FUN_00d0fda8(param_5,1,(long)iVar3);
      FUN_00d0fc84(param_5,uVar7);
      if (iVar3 < 0) goto LAB_005501ec;
LAB_00550198:
      uVar7 = 7;
    }
    else if ((param_2 & 1) == 0) {
      if ((param_2 >> 1 & 1) != 0) {
        if (((param_2 ^ 0xffffffff) & 0xc) == 0) {
          lVar18 = 0;
LAB_005501b8:
          uVar22 = 0;
          goto LAB_005501bc;
        }
LAB_00550200:
        puVar8 = (undefined1 *)FUN_00d0fbc8(param_5);
        if (puVar8 != (undefined1 *)0x0) {
          lVar18 = FUN_00d0fc54(param_5);
          uVar9 = FUN_00d0fbfc(param_5);
          local_78 = puVar8 + 1;
          uVar10 = FUN_0055068c(&local_78,*puVar8,0);
          uVar16 = uVar9;
          if (uVar10 != 0) {
            uVar16 = uVar10;
          }
          pbVar19 = local_78 + 1;
          uVar10 = (ulong)*local_78;
          if (uVar10 == 0xff) {
            local_88 = (byte *)0x0;
          }
          else {
            uVar22 = 0;
            uVar14 = 0;
            pbVar20 = pbVar19;
            do {
              pbVar19 = pbVar20 + 1;
              bVar1 = *pbVar20;
              uVar11 = uVar22 & 0x3f;
              uVar22 = uVar22 + 7;
              uVar14 = ((ulong)bVar1 & 0x7f) << uVar11 | uVar14;
              pbVar20 = pbVar19;
            } while ((char)bVar1 < '\0');
            local_88 = pbVar19 + uVar14;
          }
          uVar22 = 0;
          uVar14 = 0;
          uVar9 = lVar18 + ~uVar9;
          bVar1 = *pbVar19;
          pbVar19 = pbVar19 + 1;
          do {
            pbVar20 = pbVar19 + 1;
            bVar2 = *pbVar19;
            uVar11 = uVar22 & 0x3f;
            uVar22 = uVar22 + 7;
            uVar14 = ((ulong)bVar2 & 0x7f) << uVar11 | uVar14;
            pbVar19 = pbVar20;
          } while ((char)bVar2 < '\0');
          local_80 = pbVar20;
          local_78 = pbVar20;
          do {
            if (pbVar20 + (uVar14 & 0xffffffff) <= local_80) break;
            uVar11 = FUN_0055068c(&local_80,bVar1,0);
            lVar12 = FUN_0055068c(&local_80,bVar1,0);
            lVar18 = FUN_0055068c(&local_80,bVar1,0);
            uVar22 = 0;
            uVar15 = 0;
            pbVar19 = local_80;
            do {
              local_80 = pbVar19 + 1;
              bVar2 = *pbVar19;
              uVar4 = uVar22 & 0x3f;
              uVar22 = uVar22 + 7;
              uVar15 = ((ulong)bVar2 & 0x7f) << uVar4 | uVar15;
              pbVar19 = local_80;
            } while ((char)bVar2 < '\0');
            if ((uVar11 <= uVar9) && (uVar9 < lVar12 + uVar11)) {
              if (lVar18 == 0) goto LAB_005505ac;
              lVar18 = lVar18 + uVar16;
              if (uVar15 == 0) {
                if ((param_2 & 1) != 0) goto LAB_005505ac;
                goto LAB_005501b8;
              }
              uVar17 = 0;
              uVar16 = uVar10 & 0xf;
              pbVar20 = pbVar20 + uVar15 + (uVar14 & 0xffffffff) + -1;
              pbVar19 = (byte *)(param_4 + 0x20);
              local_a8 = 0x1c1dU >> uVar16 & 1;
              goto LAB_005503b4;
            }
          } while (uVar11 <= uVar9);
          FUN_0054f698(param_4);
joined_r0x0055066c:
          if (param_3 != 0x434c4e47432b2b00) {
                    /* WARNING: Subroutine does not return */
            FUN_00550060();
          }
          FUN_005500ac(*(undefined8 *)(param_4 + -0x38));
LAB_00550678:
          FUN_0054f698(param_4);
          uVar7 = FUN_005500ac(*(undefined8 *)(param_4 + -0x38));
          goto LAB_00550688;
        }
        goto LAB_005505ac;
      }
    }
    else if ((param_2 & 0xe) == 0) goto LAB_00550200;
  }
LAB_005505b0:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
LAB_00550688:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
LAB_005503b4:
  uVar9 = 0;
  uVar22 = 0;
  pbVar23 = pbVar20;
  do {
    pbVar21 = pbVar23 + 1;
    bVar1 = *pbVar23;
    uVar14 = uVar9 & 0x3f;
    uVar9 = uVar9 + 7;
    uVar22 = ((ulong)bVar1 & 0x7f) << uVar14 | uVar22;
    pbVar23 = pbVar21;
  } while ((char)bVar1 < '\0');
  uVar14 = -1L << (uVar9 & 0x3f);
  if ((uVar9 < 0x40 & bVar1 >> 6) == 0) {
    uVar14 = 0;
  }
  uVar22 = uVar22 | uVar14;
  pbVar23 = pbVar19;
  if ((long)uVar22 < 1) {
    uVar5 = uVar22 == 0 | uVar17;
    if (((param_2 >> 3 & 1) == 0) && (uVar22 != 0)) {
      lVar12 = FUN_0054f624(param_4);
      if (param_3 != 0x434c4e47432b2b00) goto LAB_005505e8;
      if (lVar12 == 0x434c4e47432b2b01) {
        pbVar23 = *(byte **)(param_4 + -0x58);
      }
      if ((pbVar23 == (byte *)0x0) || (*(long *)(param_4 + -0x50) == 0)) goto LAB_00550678;
      uVar9 = FUN_005507ec(uVar22,local_88,uVar10,*(long *)(param_4 + -0x50),pbVar23,param_4,0);
joined_r0x00550524:
      uVar5 = uVar17;
      if ((uVar9 & 1) != 0) goto joined_r0x00550630;
    }
  }
  else {
    if (((local_88 == (byte *)0x0) || (0xc < (uint)uVar16)) || (local_a8 == 0)) {
      FUN_0054f698(param_4);
      goto joined_r0x0055066c;
    }
    local_70 = local_88 + *(long *)(&DAT_001f9878 + uVar16 * 8) * uVar22;
    plVar13 = (long *)FUN_0055068c(&local_70,uVar10,0);
    if (plVar13 == (long *)0x0) {
      lVar12 = FUN_0054f624(param_4);
LAB_005505e8:
      if (lVar12 == 0x434c4e47432b2b01) {
        pbVar23 = *(byte **)(param_4 + -0x58);
      }
      goto joined_r0x00550630;
    }
    uVar5 = uVar17;
    if (param_3 == 0x434c4e47432b2b00) {
      lVar12 = FUN_0054f624(param_4);
      local_70 = pbVar19;
      if (lVar12 == 0x434c4e47432b2b01) {
        local_70 = *(byte **)(param_4 + -0x58);
      }
      if ((local_70 != (byte *)0x0) && (*(long *)(param_4 + -0x50) != 0)) {
        uVar9 = (**(code **)(*plVar13 + 0x20))(plVar13,*(long *)(param_4 + -0x50),&local_70);
        pbVar23 = local_70;
        goto joined_r0x00550524;
      }
      goto LAB_00550678;
    }
  }
  uVar17 = uVar5;
  uVar9 = 0;
  uVar22 = 0;
  pbVar20 = pbVar21;
  do {
    bVar1 = *pbVar20;
    uVar14 = uVar9 & 0x3f;
    uVar9 = uVar9 + 7;
    uVar22 = ((ulong)bVar1 & 0x7f) << uVar14 | uVar22;
    pbVar20 = pbVar20 + 1;
  } while ((char)bVar1 < '\0');
  uVar14 = -1L << (uVar9 & 0x3f);
  if ((uVar9 < 0x40 & bVar1 >> 6) == 0) {
    uVar14 = 0;
  }
  if ((uVar22 | uVar14) == 0) goto LAB_0055057c;
  pbVar20 = pbVar21 + (uVar22 | uVar14);
  goto LAB_005503b4;
LAB_0055057c:
  if ((uVar17 & (param_2 & 2) >> 1) == 0) {
LAB_005505ac:
    uVar7 = 8;
  }
  else {
    pbVar20 = (byte *)0x0;
    uVar22 = 0;
    pbVar23 = (byte *)0x0;
joined_r0x00550630:
    if ((param_2 & 1) == 0) {
LAB_005501bc:
      thunk_FUN_00d0fda8(param_5,0,param_4);
      thunk_FUN_00d0fda8(param_5,1,uVar22);
      FUN_00d0fc84(param_5,lVar18);
      if (-1 < (long)uVar22) goto LAB_00550198;
LAB_005501ec:
      uVar7 = 7;
      *(undefined8 *)(param_4 + -0x10) = 0;
    }
    else if (param_3 == 0x434c4e47432b2b00) {
      *(int *)(param_4 + -0x24) = (int)uVar22;
      uVar7 = 6;
      *(byte **)(param_4 + -0x20) = pbVar20;
      *(undefined1 **)(param_4 + -0x18) = puVar8;
      *(long *)(param_4 + -0x10) = lVar18;
      *(byte **)(param_4 + -8) = pbVar23;
    }
    else {
      uVar7 = 6;
    }
  }
  goto LAB_005505b0;
}


// ===== 0055068c  FUN_0055068c =====

/* WARNING: Type propagation algorithm not settling */

long * FUN_0055068c(undefined8 *param_1,uint param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  if ((param_2 & 0xff) == 0xff) {
    return (long *)0x0;
  }
  if (0xc < (param_2 & 0xf)) {
switchD_005506c4_caseD_5:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar7 = (uint *)*param_1;
  switch(param_2 & 0xf) {
  case 0:
  case 4:
  case 0xc:
    puVar5 = puVar7 + 2;
    plVar3 = *(long **)puVar7;
    break;
  case 1:
    uVar8 = 0;
    plVar3 = (long *)0x0;
    puVar6 = puVar7;
    do {
      puVar5 = (uint *)((long)puVar6 + 1);
      uVar2 = *puVar6;
      uVar4 = uVar8 & 0x3f;
      uVar8 = uVar8 + 7;
      plVar3 = (long *)(((ulong)(byte)uVar2 & 0x7f) << uVar4 | (ulong)plVar3);
      puVar6 = puVar5;
    } while ((char)(byte)uVar2 < '\0');
    break;
  case 2:
    puVar5 = (uint *)((long)puVar7 + 2);
    plVar3 = (long *)(ulong)(ushort)*puVar7;
    break;
  case 3:
    puVar5 = puVar7 + 1;
    plVar3 = (long *)(ulong)*puVar7;
    break;
  default:
    goto switchD_005506c4_caseD_5;
  case 9:
    uVar8 = 0;
    uVar4 = 0;
    puVar6 = puVar7;
    do {
      puVar5 = (uint *)((long)puVar6 + 1);
      bVar1 = (byte)*puVar6;
      uVar9 = uVar8 & 0x3f;
      uVar8 = uVar8 + 7;
      uVar4 = ((ulong)bVar1 & 0x7f) << uVar9 | uVar4;
      puVar6 = puVar5;
    } while ((char)bVar1 < '\0');
    uVar9 = -1L << (uVar8 & 0x3f);
    if ((uVar8 < 0x40 & bVar1 >> 6) == 0) {
      uVar9 = 0;
    }
    plVar3 = (long *)(uVar4 | uVar9);
    break;
  case 10:
    puVar5 = (uint *)((long)puVar7 + 2);
    plVar3 = (long *)(long)(short)*puVar7;
    break;
  case 0xb:
    puVar5 = puVar7 + 1;
    plVar3 = (long *)(long)(int)*puVar7;
  }
  uVar2 = (param_2 & 0xff) >> 4 & 7;
  if (uVar2 != 0) {
    if (uVar2 == 3) {
      if (plVar3 == (long *)0x0) goto LAB_00550788;
      plVar3 = (long *)((long)plVar3 + param_3);
    }
    else {
      if (uVar2 != 1) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (plVar3 == (long *)0x0) goto LAB_00550788;
      plVar3 = (long *)((long)plVar3 + (long)puVar7);
    }
  }
  if ((plVar3 != (long *)0x0) && ((param_2 >> 7 & 1) != 0)) {
    plVar3 = (long *)*plVar3;
  }
LAB_00550788:
  *param_1 = puVar5;
  return plVar3;
}


// ===== 005507ec  FUN_005507ec =====

void FUN_005507ec(ulong param_1,long param_2,ulong param_3,undefined8 param_4,long param_5,
                 long param_6,undefined8 param_7)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  long local_70;
  long local_68;
  byte *pbVar10;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_2 == 0) {
LAB_00550918:
    FUN_0054f698(param_6);
                    /* WARNING: Subroutine does not return */
    FUN_00550060();
  }
  uVar8 = param_3 & 0xf;
  uVar5 = 0;
  uVar6 = 0;
  pbVar10 = (byte *)(param_2 + ~param_1);
  do {
    do {
      pbVar9 = pbVar10 + 1;
      bVar1 = *pbVar10;
      uVar7 = uVar5 & 0x3f;
      uVar5 = uVar5 + 7;
      uVar7 = ((ulong)bVar1 & 0x7f) << uVar7 | uVar6;
      uVar6 = uVar7;
      pbVar10 = pbVar9;
    } while ((char)bVar1 < '\0');
    if (uVar7 == 0) break;
    if ((0xc < (uint)uVar8) || ((0x1c1dU >> uVar8 & 1) == 0)) {
      FUN_0054f698(param_6);
      FUN_005500ac(*(undefined8 *)(param_6 + -0x38));
      goto LAB_00550918;
    }
    local_70 = param_2 + *(long *)(&DAT_001f9878 + uVar8 * 8) * uVar7;
    plVar3 = (long *)FUN_0055068c(&local_70,param_3 & 0xffffffff,param_7);
    local_70 = param_5;
    uVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,param_4,&local_70);
    uVar5 = 0;
    uVar6 = 0;
  } while ((uVar4 & 1) == 0);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7 == 0);
}


// ===== 00550928  FUN_00550928 =====

void FUN_00550928(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0054f4c8("Pure virtual function called!");
}


// ===== 0055093c  FUN_0055093c =====

void FUN_0055093c(size_t param_1)

{
  long lVar1;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) {
    param_1 = 1;
  }
  local_30 = (void *)0x0;
  posix_memalign(&local_30,0x10,param_1);
  if (local_30 == (void *)0x0) {
    FUN_005509a8(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005509a8  FUN_005509a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort * FUN_005509a8(long param_1)

{
  ulong uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  ulong uVar5;
  ushort *puVar6;
  ulong uVar7;
  ulong uVar8;
  ushort *puVar9;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00d62a60);
  if (DAT_00d62a88 == (ushort *)0x0) {
    DAT_00d62a88 = &DAT_00d62a9c;
    _DAT_00d62a9c = 0x7d0080;
  }
  if (DAT_00d62a88 != (ushort *)&DAT_00d62c90) {
    uVar5 = param_1 + 3U >> 2;
    uVar1 = uVar5 + 1;
    puVar4 = (ushort *)0x0;
    puVar6 = DAT_00d62a88;
    do {
      uVar2 = puVar6[1];
      uVar7 = (ulong)uVar2;
      uVar8 = (ulong)((uint)uVar2 - (int)uVar1 & 3);
      if (uVar7 <= uVar1) {
        uVar8 = 0;
      }
      if (uVar8 + uVar1 < uVar7) {
        uVar3 = (ushort)(uVar8 + uVar1);
        uVar2 = uVar2 - uVar3;
        puVar4 = puVar6 + (ulong)uVar2 * 2;
        puVar6[1] = uVar2;
        puVar9 = puVar4 + 2;
        *puVar4 = 0;
        puVar4[1] = uVar3;
        goto LAB_00550a98;
      }
      if (uVar5 < uVar7) {
        if (puVar4 == (ushort *)0x0) {
          DAT_00d62a88 = (ushort *)((ulong)*puVar6 * 4 + 0xd62a90);
          puVar9 = puVar6 + 2;
          *puVar6 = 0;
        }
        else {
          *puVar4 = *puVar6;
          puVar9 = puVar6 + 2;
          *puVar6 = 0;
        }
        goto LAB_00550a98;
      }
      uVar2 = *puVar6;
      puVar4 = puVar6;
      puVar6 = (ushort *)((ulong)uVar2 * 4 + 0xd62a90);
    } while ((ulong)uVar2 != 0x80);
  }
  puVar9 = (ushort *)0x0;
LAB_00550a98:
                    /* try { // try from 00550a98 to 00550aa3 has its CatchHandler @ 00550ab4 */
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00d62a60);
  return puVar9;
}


// ===== 00550ab8  FUN_00550ab8 =====

void * FUN_00550ab8(size_t param_1,size_t param_2)

{
  void *__s;
  
  __s = calloc(param_1,param_2);
  if (__s == (void *)0x0) {
    __s = (void *)FUN_005509a8(param_2 * param_1);
    if (__s != (void *)0x0) {
      memset(__s,0,param_2 * param_1);
    }
  }
  return __s;
}


// ===== 00550b14  FUN_00550b14 =====

void FUN_00550b14(undefined8 *param_1)

{
  if (((undefined8 *)((long)&DAT_00d62a88 + 7) < param_1) && (param_1 < &DAT_00d62c90)) {
    FUN_00550b3c();
    return;
  }
  free(param_1);
  return;
}


// ===== 00550b3c  FUN_00550b3c =====

int FUN_00550b3c(long param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  puVar6 = (ushort *)(param_1 + -4);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00d62a60);
  if (DAT_00d62a88 != (ushort *)0x0 && DAT_00d62a88 != (ushort *)&DAT_00d62c90) {
    puVar2 = DAT_00d62a88;
    puVar5 = (ushort *)0x0;
    do {
      puVar4 = puVar2;
      uVar1 = puVar4[1];
      if (puVar4 + (ulong)uVar1 * 2 == puVar6) {
        puVar4[1] = *(short *)(param_1 + -2) + uVar1;
        goto LAB_00550c20;
      }
      if (puVar6 + (ulong)*(ushort *)(param_1 + -2) * 2 == puVar4) {
        *(ushort *)(param_1 + -2) = *(ushort *)(param_1 + -2) + uVar1;
        if (puVar5 == (ushort *)0x0) {
          DAT_00d62a88 = puVar6;
          *puVar6 = *puVar4;
        }
        else {
          *puVar5 = (ushort)((int)puVar6 - 0xd62a90U >> 2);
        }
        goto LAB_00550c20;
      }
      puVar2 = (ushort *)((ulong)*puVar4 * 4 + 0xd62a90);
      puVar5 = puVar4;
    } while ((ulong)*puVar4 != 0x80);
  }
  iVar3 = (int)DAT_00d62a88;
  DAT_00d62a88 = puVar6;
  *puVar6 = (ushort)(iVar3 - 0xd62a90U >> 2);
LAB_00550c20:
                    /* try { // try from 00550c20 to 00550c2b has its CatchHandler @ 00550c38 */
  iVar3 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00d62a60);
  return iVar3;
}


// ===== 00550c3c  FUN_00550c3c =====

void FUN_00550c3c(undefined8 *param_1)

{
  if (((undefined8 *)((long)&DAT_00d62a88 + 7) < param_1) && (param_1 < &DAT_00d62c90)) {
    FUN_00550b3c();
    return;
  }
  free(param_1);
  return;
}


// ===== 00550c64  thunk_FUN_00552768 =====

void thunk_FUN_00552768(void)

{
  return;
}


// ===== 00550c68  FUN_00550c68 =====

void FUN_00550c68(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x550c6c);
  (*pcVar1)();
}


// ===== 00550c6c  FUN_00550c6c =====

void FUN_00550c6c(void)

{
  return;
}


// ===== 00550c70  FUN_00550c70 =====

void FUN_00550c70(void)

{
  return;
}


// ===== 00550c74  FUN_00550c74 =====

void FUN_00550c74(void *param_1)

{
  FUN_00552768();
  operator_delete(param_1);
  return;
}


// ===== 00550c98  FUN_00550c98 =====

void FUN_00550c98(void *param_1)

{
  FUN_00552768();
  operator_delete(param_1);
  return;
}


// ===== 00550cbc  FUN_00550cbc =====

void FUN_00550cbc(void *param_1)

{
  FUN_00552768();
  operator_delete(param_1);
  return;
}


// ===== 00550ce0  FUN_00550ce0 =====

void FUN_00550ce0(void *param_1)

{
  FUN_00552768();
  operator_delete(param_1);
  return;
}


// ===== 00550d04  FUN_00550d04 =====

void FUN_00550d04(void *param_1)

{
  FUN_00552768();
  operator_delete(param_1);
  return;
}


// ===== 00550d28  FUN_00550d28 =====

void FUN_00550d28(void *param_1)

{
  FUN_00552768();
  operator_delete(param_1);
  return;
}


// ===== 00550d4c  FUN_00550d4c =====

void FUN_00550d4c(void *param_1)

{
  FUN_00552768();
  operator_delete(param_1);
  return;
}


// ===== 00550d70  FUN_00550d70 =====

void FUN_00550d70(void *param_1)

{
  FUN_00552768();
  operator_delete(param_1);
  return;
}


// ===== 00550d94  FUN_00550d94 =====

void FUN_00550d94(void *param_1)

{
  FUN_00552768();
  operator_delete(param_1);
  return;
}


// ===== 00550db8  FUN_00550db8 =====

void FUN_00550db8(void *param_1)

{
  FUN_00552768();
  operator_delete(param_1);
  return;
}


// ===== 00550ddc  FUN_00550ddc =====

bool FUN_00550ddc(long param_1,long param_2)

{
  return *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
}


// ===== 00550df0  FUN_00550df0 =====

undefined8 FUN_00550df0(void)

{
  return 0;
}


// ===== 00550df8  FUN_00550df8 =====

undefined8 FUN_00550df8(void)

{
  return 0;
}


// ===== 00550e00  FUN_00550e00 =====

bool FUN_00550e00(long param_1,long param_2)

{
  return *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
}


// ===== 00550e14  FUN_00550e14 =====

void FUN_00550e14(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  long *local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined1 local_49;
  undefined7 uStack_48;
  undefined8 uStack_41;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 8) == *(long *)(param_2 + 8)) {
    plVar2 = (long *)0x1;
  }
  else {
    plVar2 = (long *)FUN_00550ef4(param_2,&PTR_PTR_thunk_FUN_00552768_00d22e68,
                                  &PTR_PTR_thunk_FUN_00552768_00d22e80,0);
    if (plVar2 != (long *)0x0) {
      uStack_80 = 0;
      uStack_70 = 0xffffffffffffffff;
      uStack_48 = 0;
      uStack_60 = 0;
      local_68 = 0;
      uStack_50 = 0;
      local_49 = 0;
      local_58 = 0;
      uStack_41 = 0x100;
      local_88 = plVar2;
      local_78 = param_1;
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_88,*param_3,1);
      plVar2 = (long *)(ulong)((int)local_58 == 1);
      if ((int)local_58 == 1) {
        *param_3 = local_68;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar2);
}


// ===== 00550ef4  FUN_00550ef4 =====

void FUN_00550ef4(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long local_78;
  long *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  long lStack_50;
  undefined8 local_48;
  int iStack_40;
  int iStack_3c;
  int local_38;
  undefined3 uStack_34;
  undefined8 uStack_31;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  plVar1 = *(long **)(*param_1 + -8);
  lStack_50 = 0;
  local_58 = 0;
  iStack_40 = 0;
  local_48 = 0;
  lVar3 = (long)param_1 + *(long *)(*param_1 + -0x10);
  uStack_31 = 0;
  iStack_3c = 0;
  local_38 = 0;
  uStack_34 = 0;
  local_78 = param_3;
  local_70 = param_1;
  uStack_68 = param_2;
  local_60 = param_4;
  if (plVar1[1] == *(long *)(param_3 + 8)) {
    uStack_31 = 0x100;
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_78,lVar3,lVar3,1,0);
    if ((int)local_48 != 1) {
      lVar3 = 0;
    }
  }
  else {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_78,lVar3,1,0);
    if (iStack_3c == 1) {
      if (((int)local_48 == 1) ||
         (((lVar3 = 0, local_38 == 0 && (local_48._4_4_ == 1)) && (iStack_40 == 1)))) {
        lVar3 = local_58;
      }
    }
    else if (iStack_3c == 0) {
      lVar3 = lStack_50;
      if ((iStack_40 != 1 || local_48._4_4_ != 1) || local_38 != 1) {
        lVar3 = 0;
      }
    }
    else {
      lVar3 = 0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


// ===== 0055102c  FUN_0055102c =====

void FUN_0055102c(long param_1,long param_2,long param_3,undefined4 param_4)

{
  if (*(long *)(param_1 + 8) == *(long *)(*(long *)(param_2 + 0x10) + 8)) {
    if (*(long *)(param_2 + 0x20) == 0) {
      *(long *)(param_2 + 0x20) = param_3;
      *(undefined4 *)(param_2 + 0x30) = param_4;
      *(undefined4 *)(param_2 + 0x3c) = 1;
      return;
    }
    if (*(long *)(param_2 + 0x20) != param_3) {
      *(undefined4 *)(param_2 + 0x30) = 2;
      *(undefined1 *)(param_2 + 0x4e) = 1;
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      return;
    }
    if (*(int *)(param_2 + 0x30) == 2) {
      *(undefined4 *)(param_2 + 0x30) = param_4;
      return;
    }
  }
  return;
}


// ===== 0055109c  FUN_0055109c =====

void FUN_0055109c(long param_1,long param_2,long param_3,undefined4 param_4)

{
  if (*(long *)(param_1 + 8) != *(long *)(*(long *)(param_2 + 0x10) + 8)) {
                    /* WARNING: Could not recover jumptable at 0x005510bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x38))();
    return;
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    if (*(long *)(param_2 + 0x20) == param_3) {
      if (*(int *)(param_2 + 0x30) == 2) {
        *(undefined4 *)(param_2 + 0x30) = param_4;
        return;
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x30) = 2;
      *(undefined1 *)(param_2 + 0x4e) = 1;
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
    }
    return;
  }
  *(long *)(param_2 + 0x20) = param_3;
  *(undefined4 *)(param_2 + 0x30) = param_4;
  *(undefined4 *)(param_2 + 0x3c) = 1;
  return;
}


// ===== 00551118  FUN_00551118 =====

void FUN_00551118(long param_1,long param_2,long *param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 8) == *(long *)(*(long *)(param_2 + 0x10) + 8)) {
    if (*(long **)(param_2 + 0x20) == (long *)0x0) {
      *(long **)(param_2 + 0x20) = param_3;
      *(undefined4 *)(param_2 + 0x30) = param_4;
      *(undefined4 *)(param_2 + 0x3c) = 1;
    }
    else if (*(long **)(param_2 + 0x20) == param_3) {
      if (*(int *)(param_2 + 0x30) == 2) {
        *(undefined4 *)(param_2 + 0x30) = param_4;
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x30) = 2;
      *(undefined1 *)(param_2 + 0x4e) = 1;
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
    }
  }
  else {
    uVar1 = param_1 + (ulong)*(uint *)(param_1 + 0x14) * 0x10 + 0x18;
    uVar4 = *(ulong *)(param_1 + 0x20);
    if (param_3 == (long *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = (long)uVar4 >> 8;
      if ((uVar4 & 1) != 0) {
        lVar6 = *(long *)(*param_3 + lVar6);
      }
    }
    uVar2 = 2;
    if ((uVar4 & 2) != 0) {
      uVar2 = param_4;
    }
    (**(code **)(**(long **)(param_1 + 0x18) + 0x38))
              (*(long **)(param_1 + 0x18),param_2,(long)param_3 + lVar6,uVar2);
    if (param_1 + 0x28U < uVar1) {
      uVar4 = param_1 + 0x38;
      do {
        uVar5 = *(ulong *)(uVar4 - 8);
        if (param_3 == (long *)0x0) {
          lVar6 = 0;
        }
        else {
          lVar6 = (long)uVar5 >> 8;
          if ((uVar5 & 1) != 0) {
            lVar6 = *(long *)(*param_3 + lVar6);
          }
        }
        uVar2 = 2;
        if ((uVar5 & 2) != 0) {
          uVar2 = param_4;
        }
        (**(code **)(**(long **)(uVar4 - 0x10) + 0x38))
                  (*(long **)(uVar4 - 0x10),param_2,(long)param_3 + lVar6,uVar2);
      } while ((*(char *)(param_2 + 0x4e) == '\0') &&
              (bVar3 = uVar4 < uVar1, uVar4 = uVar4 + 0x10, bVar3));
    }
  }
  return;
}


// ===== 00551274  FUN_00551274 =====

bool FUN_00551274(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x10) & 0x18) == 0) {
    if (param_2 == 0) {
      return false;
    }
    lVar2 = FUN_00550ef4(param_2,&PTR_PTR_thunk_FUN_00552768_00d22e68,
                         &PTR_PTR_thunk_FUN_00552768_00d22e98,0);
    if (lVar2 == 0) {
      return false;
    }
    if ((*(byte *)(lVar2 + 0x10) & 0x18) == 0) {
      return *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
    }
  }
  if (param_1 != param_2) {
    iVar1 = strcmp(*(char **)(param_1 + 8),*(char **)(param_2 + 8));
    return iVar1 == 0;
  }
  return true;
}


// ===== 0055130c  FUN_0055130c =====

void FUN_0055130c(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  char *__s2;
  long lVar8;
  long *local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined7 uStack_60;
  undefined1 local_59;
  undefined7 uStack_58;
  undefined8 uStack_51;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __s2 = *(char **)(param_2 + 8);
  if (__s2 == "Dn") {
    plVar4 = (long *)0x1;
    *param_3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x10);
    if ((uVar1 & 0x18) == 0) {
      lVar6 = FUN_00550ef4(param_2,&PTR_PTR_thunk_FUN_00552768_00d22e68,
                           &PTR_PTR_thunk_FUN_00552768_00d22e98,0);
      if (lVar6 != 0) {
        if ((*(byte *)(lVar6 + 0x10) & 0x18) != 0) goto LAB_0055135c;
        if (*(char **)(param_1 + 8) != __s2) goto LAB_005513d0;
        goto LAB_00551374;
      }
LAB_005513d0:
      plVar4 = (long *)FUN_00550ef4(param_2,&PTR_PTR_thunk_FUN_00552768_00d22e68,
                                    &PTR_PTR_thunk_FUN_00552768_00d22eb0,0);
      if (plVar4 != (long *)0x0) {
        if ((long *)*param_3 == (long *)0x0) {
          lVar6 = 0;
        }
        else {
          lVar6 = *(long *)*param_3;
          *param_3 = lVar6;
        }
        if (((*(uint *)(plVar4 + 2) & (uVar1 ^ 0xffffffff) & 7) != 0) ||
           ((uVar1 & (*(uint *)(plVar4 + 2) ^ 0xffffffff) & 0x60) != 0)) goto LAB_00551424;
        lVar8 = *(long *)(param_1 + 0x18);
        lVar7 = plVar4[3];
        if (*(undefined **)(lVar8 + 8) == *(undefined **)(lVar7 + 8)) goto LAB_005514a4;
        if (*(undefined **)(lVar8 + 8) == &DAT_001f9a00) {
          lVar6 = FUN_00550ef4(lVar7,&PTR_PTR_thunk_FUN_00552768_00d22e68,
                               &PTR_PTR_thunk_FUN_00552768_00d22ec8,0);
          plVar4 = (long *)(ulong)(lVar6 == 0);
        }
        else {
          plVar4 = (long *)FUN_00550ef4(lVar8,&PTR_PTR_thunk_FUN_00552768_00d22e68,
                                        &PTR_PTR_thunk_FUN_00552768_00d22eb0,0);
          if (plVar4 == (long *)0x0) {
            plVar4 = (long *)FUN_00550ef4(lVar8,&PTR_PTR_thunk_FUN_00552768_00d22e68,
                                          &PTR_PTR_thunk_FUN_00552768_00d22ee0,0);
            if (plVar4 == (long *)0x0) {
              plVar5 = (long *)FUN_00550ef4(lVar8,&PTR_PTR_thunk_FUN_00552768_00d22e68,
                                            &PTR_PTR_thunk_FUN_00552768_00d22e80,0);
              plVar4 = plVar5;
              if ((plVar5 != (long *)0x0) &&
                 (plVar4 = (long *)FUN_00550ef4(lVar7,&PTR_PTR_thunk_FUN_00552768_00d22e68,
                                                &PTR_PTR_thunk_FUN_00552768_00d22e80,0),
                 plVar4 != (long *)0x0)) {
                uStack_90 = 0;
                uStack_80 = 0xffffffffffffffff;
                uStack_58 = 0;
                uStack_70 = 0;
                local_78 = 0;
                uStack_60 = 0;
                local_59 = 0;
                local_68 = 0;
                uStack_51 = 0x100;
                local_98 = plVar4;
                local_88 = plVar5;
                (**(code **)(*plVar4 + 0x38))(plVar4,&local_98,lVar6,1);
                plVar4 = (long *)(ulong)((int)local_68 == 1);
                if (((int)local_68 == 1) && (lVar6 = local_78, *param_3 != 0)) goto LAB_00551384;
              }
              goto LAB_005514a8;
            }
            if ((uVar1 & 1) != 0) {
              if (*(long *)(lVar2 + 0x28) == local_48) {
                FUN_005516cc(plVar4,lVar7);
                return;
              }
              goto LAB_005515e0;
            }
          }
          else if ((uVar1 & 1) != 0) {
            if (*(long *)(lVar2 + 0x28) == local_48) {
              FUN_005515e4(plVar4,lVar7);
              return;
            }
            goto LAB_005515e0;
          }
LAB_00551424:
          plVar4 = (long *)0x0;
        }
      }
    }
    else {
LAB_0055135c:
      if ((param_1 != param_2) && (iVar3 = strcmp(*(char **)(param_1 + 8),__s2), iVar3 != 0))
      goto LAB_005513d0;
LAB_00551374:
      if ((long *)*param_3 == (long *)0x0) {
LAB_005514a4:
        plVar4 = (long *)0x1;
      }
      else {
        plVar4 = (long *)0x1;
        lVar6 = *(long *)*param_3;
LAB_00551384:
        *param_3 = lVar6;
      }
    }
  }
LAB_005514a8:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_005515e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar4);
}


// ===== 005515e4  FUN_005515e4 =====

undefined8 FUN_005515e4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  while( true ) {
    if (param_2 == 0) {
      return 0;
    }
    lVar1 = FUN_00550ef4(param_2,&PTR_PTR_thunk_FUN_00552768_00d22e68,
                         &PTR_PTR_thunk_FUN_00552768_00d22eb0,0);
    if (lVar1 == 0) {
      return 0;
    }
    if ((*(uint *)(lVar1 + 0x10) & (*(uint *)(param_1 + 0x10) ^ 0xffffffff)) != 0) {
      return 0;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    param_2 = *(long *)(lVar1 + 0x18);
    if (*(long *)(lVar3 + 8) == *(long *)(param_2 + 8)) break;
    if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
      return 0;
    }
    param_1 = FUN_00550ef4(lVar3,&PTR_PTR_thunk_FUN_00552768_00d22e68,
                           &PTR_PTR_thunk_FUN_00552768_00d22eb0,0);
    if (param_1 == 0) {
      lVar1 = FUN_00550ef4(lVar3,&PTR_PTR_thunk_FUN_00552768_00d22e68,
                           &PTR_PTR_thunk_FUN_00552768_00d22ee0,0);
      if (lVar1 != 0) {
        uVar2 = FUN_005516cc(lVar1,param_2);
        return uVar2;
      }
      return 0;
    }
  }
  return 1;
}


// ===== 005516cc  FUN_005516cc =====

bool FUN_005516cc(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_00550ef4(param_2,&PTR_PTR_thunk_FUN_00552768_00d22e68,
                         &PTR_PTR_thunk_FUN_00552768_00d22ee0,0);
    if (lVar1 == 0) {
      return false;
    }
    if (((*(uint *)(lVar1 + 0x10) & (*(uint *)(param_1 + 0x10) ^ 0xffffffff)) == 0) &&
       (*(long *)(*(long *)(param_1 + 0x18) + 8) == *(long *)(*(long *)(lVar1 + 0x18) + 8))) {
      return *(long *)(*(long *)(param_1 + 0x20) + 8) == *(long *)(*(long *)(lVar1 + 0x20) + 8);
    }
  }
  return false;
}


// ===== 00551758  FUN_00551758 =====

bool FUN_00551758(long param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  char *__s2;
  
  __s2 = *(char **)(param_2 + 8);
  if (__s2 == "Dn") {
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar3 = FUN_00550ef4(*(long *)(param_1 + 0x18),&PTR_PTR_thunk_FUN_00552768_00d22e68,
                             &PTR_PTR_thunk_FUN_00552768_00d22ec8,0), lVar3 == 0)) {
      puVar4 = &DAT_001f99d0;
    }
    else {
      puVar4 = &DAT_001f99c0;
    }
    *param_3 = puVar4;
    return true;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x18) == 0) {
    lVar3 = FUN_00550ef4(param_2,&PTR_PTR_thunk_FUN_00552768_00d22e68,
                         &PTR_PTR_thunk_FUN_00552768_00d22e98,0);
    if (lVar3 == 0) goto LAB_0055181c;
    if ((*(byte *)(lVar3 + 0x10) & 0x18) == 0) {
      if (*(char **)(param_1 + 8) == __s2) {
        return true;
      }
      goto LAB_0055181c;
    }
  }
  if ((param_1 == param_2) || (iVar2 = strcmp(*(char **)(param_1 + 8),__s2), iVar2 == 0)) {
    return true;
  }
LAB_0055181c:
  lVar3 = FUN_00550ef4(param_2,&PTR_PTR_thunk_FUN_00552768_00d22e68,
                       &PTR_PTR_thunk_FUN_00552768_00d22ee0,0);
  if (lVar3 == 0) {
    return false;
  }
  if ((((*(uint *)(lVar3 + 0x10) & (uVar1 ^ 0xffffffff) & 7) == 0) &&
      ((uVar1 & (*(uint *)(lVar3 + 0x10) ^ 0xffffffff) & 0x60) == 0)) &&
     (*(long *)(*(long *)(param_1 + 0x18) + 8) == *(long *)(*(long *)(lVar3 + 0x18) + 8))) {
    return *(long *)(*(long *)(param_1 + 0x20) + 8) == *(long *)(*(long *)(lVar3 + 0x20) + 8);
  }
  return false;
}


// ===== 005518b4  FUN_005518b4 =====

void FUN_005518b4(long param_1,long *param_2,long *param_3,int param_4,uint param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  char *__s1;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  
  lVar5 = param_2[2];
  if ((param_5 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar5 + 8)) {
      if (*(long *)(param_1 + 8) != *(long *)(*param_2 + 8)) {
LAB_0055198c:
        uVar6 = *(ulong *)(param_1 + 0x20);
        puVar8 = (undefined8 *)(param_1 + (ulong)*(uint *)(param_1 + 0x14) * 0x10 + 0x18);
        lVar5 = (long)uVar6 >> 8;
        if ((uVar6 & 1) != 0) {
          lVar5 = *(long *)(*param_3 + lVar5);
        }
        iVar4 = 2;
        if ((uVar6 & 2) != 0) {
          iVar4 = param_4;
        }
        (**(code **)(**(long **)(param_1 + 0x18) + 0x30))
                  (*(long **)(param_1 + 0x18),param_2,(long)param_3 + lVar5,iVar4,param_5 & 1);
        puVar9 = (undefined8 *)(param_1 + 0x28);
        if (puVar8 <= puVar9) {
          return;
        }
        if (((*(uint *)(param_1 + 0x10) >> 1 & 1) != 0) || (*(int *)((long)param_2 + 0x3c) == 1)) {
          do {
            if (*(char *)((long)param_2 + 0x4e) != '\0') {
              return;
            }
            uVar6 = puVar9[1];
            lVar5 = (long)uVar6 >> 8;
            if ((uVar6 & 1) != 0) {
              lVar5 = *(long *)(*param_3 + lVar5);
            }
            puVar7 = puVar9 + 2;
            iVar4 = 2;
            if ((uVar6 & 2) != 0) {
              iVar4 = param_4;
            }
            (**(code **)(*(long *)*puVar9 + 0x30))
                      ((long *)*puVar9,param_2,(long)param_3 + lVar5,iVar4,param_5 & 1);
            puVar9 = puVar7;
          } while (puVar7 < puVar8);
          return;
        }
        if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
          while( true ) {
            if (*(char *)((long)param_2 + 0x4e) != '\0') {
              return;
            }
            if (*(int *)((long)param_2 + 0x3c) == 1) break;
            uVar6 = puVar9[1];
            lVar5 = (long)uVar6 >> 8;
            if ((uVar6 & 1) != 0) {
              lVar5 = *(long *)(*param_3 + lVar5);
            }
            puVar7 = puVar9 + 2;
            iVar4 = 2;
            if ((uVar6 & 2) != 0) {
              iVar4 = param_4;
            }
            (**(code **)(*(long *)*puVar9 + 0x30))
                      ((long *)*puVar9,param_2,(long)param_3 + lVar5,iVar4,param_5 & 1);
            puVar9 = puVar7;
            if (puVar8 <= puVar7) {
              return;
            }
          }
          return;
        }
        while( true ) {
          if (*(char *)((long)param_2 + 0x4e) != '\0') {
            return;
          }
          if ((*(int *)((long)param_2 + 0x3c) == 1) && ((int)param_2[6] == 1)) break;
          uVar6 = puVar9[1];
          lVar5 = (long)uVar6 >> 8;
          if ((uVar6 & 1) != 0) {
            lVar5 = *(long *)(*param_3 + lVar5);
          }
          puVar7 = puVar9 + 2;
          iVar4 = 2;
          if ((uVar6 & 2) != 0) {
            iVar4 = param_4;
          }
          (**(code **)(*(long *)*puVar9 + 0x30))
                    ((long *)*puVar9,param_2,(long)param_3 + lVar5,iVar4,param_5 & 1);
          puVar9 = puVar7;
          if (puVar8 <= puVar7) {
            return;
          }
        }
        return;
      }
LAB_00551924:
      if (((long *)param_2[4] == param_3) || ((long *)param_2[5] == param_3)) {
        if (param_4 != 1) {
          return;
        }
        *(undefined4 *)(param_2 + 7) = 1;
        return;
      }
      *(int *)(param_2 + 7) = param_4;
      if (*(int *)((long)param_2 + 0x44) != 4) {
        if (*(uint *)(param_1 + 0x14) == 0) {
          *(undefined4 *)((long)param_2 + 0x44) = 4;
        }
        else {
          puVar8 = (undefined8 *)(param_1 + 0x18);
          bVar2 = false;
          bVar1 = false;
          puVar9 = puVar8 + (ulong)*(uint *)(param_1 + 0x14) * 2;
          do {
            *(undefined2 *)((long)param_2 + 0x4c) = 0;
            uVar6 = puVar8[1];
            lVar5 = (long)uVar6 >> 8;
            if ((uVar6 & 1) != 0) {
              lVar5 = *(long *)(*param_3 + lVar5);
            }
            uVar10 = 1;
            if ((uVar6 & 2) == 0) {
              uVar10 = 2;
            }
            (**(code **)(*(long *)*puVar8 + 0x28))
                      ((long *)*puVar8,param_2,param_3,(long)param_3 + lVar5,uVar10,param_5 & 1);
            if (*(char *)((long)param_2 + 0x4e) != '\0') break;
            bVar3 = bVar2;
            if (*(char *)((long)param_2 + 0x4d) != '\0') {
              if (*(char *)((long)param_2 + 0x4c) == '\0') {
                if ((*(byte *)(param_1 + 0x10) & 1) == 0) goto LAB_00551bfc;
                bVar1 = true;
              }
              else {
                if ((int)param_2[6] == 1) {
                  bVar2 = true;
                  goto LAB_00551bfc;
                }
                bVar1 = true;
                bVar2 = bVar1;
                bVar3 = true;
                if ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0) goto LAB_00551bfc;
              }
            }
            bVar2 = bVar3;
            puVar8 = puVar8 + 2;
          } while (puVar8 < puVar9);
          if (bVar1) {
LAB_00551bfc:
            uVar10 = 3;
          }
          else {
            uVar10 = 4;
          }
          *(undefined4 *)((long)param_2 + 0x44) = uVar10;
          if (bVar2) {
            return;
          }
        }
      }
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
  else if (lVar5 != param_1) {
    __s1 = *(char **)(param_1 + 8);
    iVar4 = strcmp(__s1,*(char **)(lVar5 + 8));
    if (iVar4 != 0) {
      if ((*param_2 != param_1) && (iVar4 = strcmp(__s1,*(char **)(*param_2 + 8)), iVar4 != 0))
      goto LAB_0055198c;
      goto LAB_00551924;
    }
  }
  if (((long *)param_2[1] == param_3) && (*(int *)((long)param_2 + 0x34) != 1)) {
    *(int *)((long)param_2 + 0x34) = param_4;
  }
  return;
}


// ===== 00551c54  FUN_00551c54 =====

void FUN_00551c54(long param_1,long *param_2,long param_3,int param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  char *__s1;
  
  lVar2 = param_2[2];
  if ((param_5 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar2 + 8)) {
      if (*(long *)(param_1 + 8) != *(long *)(*param_2 + 8)) {
LAB_00551d48:
                    /* WARNING: Could not recover jumptable at 0x00551d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x10) + 0x30))
                  (*(long **)(param_1 + 0x10),param_2,param_3,param_4,param_5 & 1);
        return;
      }
LAB_00551cbc:
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
  else if (lVar2 != param_1) {
    __s1 = *(char **)(param_1 + 8);
    iVar1 = strcmp(__s1,*(char **)(lVar2 + 8));
    if (iVar1 != 0) {
      if ((*param_2 != param_1) && (iVar1 = strcmp(__s1,*(char **)(*param_2 + 8)), iVar1 != 0))
      goto LAB_00551d48;
      goto LAB_00551cbc;
    }
  }
  if ((param_2[1] == param_3) && (*(int *)((long)param_2 + 0x34) != 1)) {
    *(int *)((long)param_2 + 0x34) = param_4;
  }
  return;
}


// ===== 00551df4  FUN_00551df4 =====

void FUN_00551df4(long param_1,long *param_2,long param_3,int param_4,uint param_5)

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
LAB_00551e7c:
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
      goto LAB_00551e7c;
    }
  }
  if ((param_2[1] == param_3) && (*(int *)((long)param_2 + 0x34) != 1)) {
    *(int *)((long)param_2 + 0x34) = param_4;
  }
  return;
}


// ===== 00551f14  FUN_00551f14 =====

void FUN_00551f14(long param_1,long param_2,long param_3,long *param_4,int param_5,uint param_6)

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
  
  lVar5 = *(long *)(param_2 + 0x10);
  if ((param_6 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar5 + 8)) goto LAB_00551fb0;
  }
  else if ((lVar5 != param_1) &&
          (iVar4 = strcmp(*(char **)(param_1 + 8),*(char **)(lVar5 + 8)), iVar4 != 0)) {
LAB_00551fb0:
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
    puVar9 = (undefined8 *)(param_1 + 0x28);
    while (puVar9 < (undefined8 *)(param_1 + (ulong)uVar1 * 0x10 + 0x18)) {
      bVar7 = bVar7 & 1;
      bVar8 = bVar8 & 1;
      if (*(char *)(param_2 + 0x4e) != '\0') break;
      if (bVar2 == 0) {
        if (bVar3 != 0) {
          bVar2 = *(byte *)(param_1 + 0x10);
          goto joined_r0x00552098;
        }
      }
      else {
        if (*(int *)(param_2 + 0x30) == 1) break;
        bVar2 = *(byte *)(param_1 + 0x10) >> 1;
joined_r0x00552098:
        if ((bVar2 & 1) == 0) break;
      }
      *(undefined2 *)(param_2 + 0x4c) = 0;
      uVar6 = puVar9[1];
      lVar5 = (long)uVar6 >> 8;
      if ((uVar6 & 1) != 0) {
        lVar5 = *(long *)(*param_4 + lVar5);
      }
      iVar4 = 2;
      if ((uVar6 & 2) != 0) {
        iVar4 = param_5;
      }
      (**(code **)(*(long *)*puVar9 + 0x28))
                ((long *)*puVar9,param_2,param_3,(long)param_4 + lVar5,iVar4,param_6 & 1);
      bVar2 = *(byte *)(param_2 + 0x4c);
      bVar3 = *(byte *)(param_2 + 0x4d);
      bVar8 = bVar2 | bVar8;
      bVar7 = bVar3 | bVar7;
      puVar9 = puVar9 + 2;
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
    iVar4 = *(int *)(param_2 + 0x48);
  }
  else {
    if (*(long *)(param_2 + 0x20) != param_3) {
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      goto LAB_00552118;
    }
    iVar4 = *(int *)(param_2 + 0x30);
    if (*(int *)(param_2 + 0x30) == 2) {
      *(int *)(param_2 + 0x30) = param_5;
      iVar4 = param_5;
    }
    if (*(int *)(param_2 + 0x48) != 1) {
      return;
    }
  }
  if (iVar4 != 1) {
    return;
  }
LAB_00552118:
  *(undefined1 *)(param_2 + 0x4e) = 1;
  return;
}


// ===== 0055213c  FUN_0055213c =====

void FUN_0055213c(long param_1,long param_2,long param_3,long param_4,int param_5,uint param_6)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x10);
  if ((param_6 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar2 + 8)) goto LAB_005521d0;
  }
  else if ((lVar2 != param_1) &&
          (iVar1 = strcmp(*(char **)(param_1 + 8),*(char **)(lVar2 + 8)), iVar1 != 0)) {
LAB_005521d0:
                    /* WARNING: Could not recover jumptable at 0x00552200. Too many branches */
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
    iVar1 = *(int *)(param_2 + 0x48);
  }
  else {
    if (*(long *)(param_2 + 0x20) != param_3) {
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      goto LAB_00552248;
    }
    iVar1 = *(int *)(param_2 + 0x30);
    if (*(int *)(param_2 + 0x30) == 2) {
      *(int *)(param_2 + 0x30) = param_5;
      iVar1 = param_5;
    }
    if (*(int *)(param_2 + 0x48) != 1) {
      return;
    }
  }
  if (iVar1 != 1) {
    return;
  }
LAB_00552248:
  *(undefined1 *)(param_2 + 0x4e) = 1;
  return;
}


// ===== 00552264  FUN_00552264 =====

void FUN_00552264(long param_1,long param_2,long param_3,long param_4,int param_5,uint param_6)

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
    iVar1 = *(int *)(param_2 + 0x48);
  }
  else {
    if (*(long *)(param_2 + 0x20) != param_3) {
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      goto LAB_00552334;
    }
    iVar1 = *(int *)(param_2 + 0x30);
    if (*(int *)(param_2 + 0x30) == 2) {
      *(int *)(param_2 + 0x30) = param_5;
      iVar1 = param_5;
    }
    if (*(int *)(param_2 + 0x48) != 1) {
      return;
    }
  }
  if (iVar1 != 1) {
    return;
  }
LAB_00552334:
  *(undefined1 *)(param_2 + 0x4e) = 1;
  return;
}


// ===== 0055234c  FUN_0055234c =====

void FUN_0055234c(void)

{
  return;
}


// ===== 00552350  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00552354  FUN_00552354 =====

char * FUN_00552354(void)

{
  return "std::exception";
}


// ===== 00552360  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00552364  FUN_00552364 =====

char * FUN_00552364(void)

{
  return "std::bad_exception";
}


// ===== 00552370  FUN_00552370 =====

void FUN_00552370(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d23a00;
  return;
}


// ===== 00552380  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00552384  FUN_00552384 =====

char * FUN_00552384(void)

{
  return "std::bad_alloc";
}


// ===== 00552390  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00552394  FUN_00552394 =====

char * FUN_00552394(void)

{
  return "bad_array_new_length";
}


// ===== 005523a0  FUN_005523a0 =====

void FUN_005523a0(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = param_1[1];
  piVar5 = (int *)(lVar4 + -8);
  *param_1 = &PTR_FUN_00d23af8;
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
  FUN_0055234c(param_1);
  return;
}


// ===== 005523f0  FUN_005523f0 =====

void FUN_005523f0(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = param_1[1];
  piVar5 = (int *)(lVar4 + -8);
  *param_1 = &PTR_FUN_00d23af8;
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
  FUN_0055234c(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00552448  FUN_00552448 =====

undefined8 FUN_00552448(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 00552450  FUN_00552450 =====

void FUN_00552450(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = param_1[1];
  piVar5 = (int *)(lVar4 + -8);
  *param_1 = &PTR_FUN_00d23b20;
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
  FUN_0055234c(param_1);
  return;
}


// ===== 005524a0  FUN_005524a0 =====

void FUN_005524a0(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = param_1[1];
  piVar5 = (int *)(lVar4 + -8);
  *param_1 = &PTR_FUN_00d23b20;
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
  FUN_0055234c(param_1);
  operator_delete(param_1);
  return;
}


// ===== 005524f8  FUN_005524f8 =====

undefined8 FUN_005524f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 00552500  FUN_00552500 =====

void FUN_00552500(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = param_1[1];
  piVar5 = (int *)(lVar4 + -8);
  *param_1 = &PTR_FUN_00d23af8;
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
  FUN_0055234c(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00552558  FUN_00552558 =====

void FUN_00552558(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = param_1[1];
  piVar5 = (int *)(lVar4 + -8);
  *param_1 = &PTR_FUN_00d23af8;
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
  FUN_0055234c(param_1);
  operator_delete(param_1);
  return;
}


// ===== 005525b0  FUN_005525b0 =====

void FUN_005525b0(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = param_1[1];
  piVar5 = (int *)(lVar4 + -8);
  *param_1 = &PTR_FUN_00d23af8;
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
  FUN_0055234c(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00552608  FUN_00552608 =====

void FUN_00552608(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = param_1[1];
  piVar5 = (int *)(lVar4 + -8);
  *param_1 = &PTR_FUN_00d23af8;
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
  FUN_0055234c(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00552660  FUN_00552660 =====

void FUN_00552660(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = param_1[1];
  piVar5 = (int *)(lVar4 + -8);
  *param_1 = &PTR_FUN_00d23b20;
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
  FUN_0055234c(param_1);
  operator_delete(param_1);
  return;
}


// ===== 005526b8  FUN_005526b8 =====

void FUN_005526b8(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = param_1[1];
  piVar5 = (int *)(lVar4 + -8);
  *param_1 = &PTR_FUN_00d23b20;
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
  FUN_0055234c(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00552710  FUN_00552710 =====

void FUN_00552710(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = param_1[1];
  piVar5 = (int *)(lVar4 + -8);
  *param_1 = &PTR_FUN_00d23b20;
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
  FUN_0055234c(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00552768  FUN_00552768 =====

void FUN_00552768(void)

{
  return;
}


// ===== 0055276c  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00552770  FUN_00552770 =====

void FUN_00552770(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_0055234c_00d23d38;
  return;
}


// ===== 00552780  thunk_FUN_0055234c =====

void thunk_FUN_0055234c(void)

{
  return;
}


// ===== 00552784  FUN_00552784 =====

void FUN_00552784(void *param_1)

{
  FUN_0055234c();
  operator_delete(param_1);
  return;
}


// ===== 005527a8  FUN_005527a8 =====

char * FUN_005527a8(void)

{
  return "std::bad_cast";
}


// ===== 005527b4  thunk_FUN_0055234c =====

void thunk_FUN_0055234c(void)

{
  return;
}


// ===== 005527b8  FUN_005527b8 =====

void FUN_005527b8(void *param_1)

{
  FUN_0055234c();
  operator_delete(param_1);
  return;
}


// ===== 005527dc  FUN_005527dc =====

char * FUN_005527dc(void)

{
  return "std::bad_typeid";
}


// ===== 005527e8  FUN_005527e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_005527e8(uint param_1,uint param_2,uint *param_3,ulong *param_4)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  float *pfVar8;
  ulong uVar9;
  ulong uVar10;
  double __x;
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int iVar16;
  int iVar20;
  int iVar21;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int iVar22;
  int iStack_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  double local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80 [2];
  double local_68;
  
  uVar9 = (-(ulong)(param_1 - 1 >> 0x1f) & 0xfffffff800000000 | (ulong)(param_1 - 1) << 3) + 0x110;
  if (param_4 == (ulong *)0x0) {
    puVar4 = (uint *)malloc(uVar9);
  }
  else {
    if (param_3 == (uint *)0x0) {
      puVar4 = (uint *)0x0;
    }
    else {
      puVar4 = (uint *)0x0;
      if (uVar9 <= *param_4) {
        puVar4 = param_3;
      }
    }
    *param_4 = uVar9;
  }
  if (puVar4 == (uint *)0x0) {
    return (uint *)0x0;
  }
  dVar12 = (double)(int)param_1;
  *puVar4 = param_1;
  puVar4[1] = param_2;
  if (0 < (int)param_1) {
    uVar9 = (ulong)param_1;
    if (param_1 < 4) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar9 & 0xfffffffc;
      pfVar8 = (float *)(puVar4 + 0x42);
      uVar7 = uVar10;
      iVar16 = _DAT_001f3f60;
      iVar20 = _UNK_001f3f64;
      iVar21 = _UNK_001f3f68;
      iVar22 = _UNK_001f3f6c;
      do {
        auVar15._0_8_ = (long)iVar16;
        auVar15._8_8_ = (long)iVar20;
        auVar13 = NEON_scvtf(auVar15,8);
        auVar17._0_8_ = (long)iStack_c8;
        auVar17._8_8_ = (long)iStack_c4;
        auVar18 = NEON_scvtf(auVar17,8);
        auVar14._0_8_ = (auVar13._0_8_ * -6.283185307179586) / dVar12;
        auVar14._8_8_ = (auVar13._8_8_ * -6.283185307179586) / dVar12;
        auVar19._0_8_ = (auVar18._0_8_ * -6.283185307179586) / dVar12;
        auVar19._8_8_ = (auVar18._8_8_ * -6.283185307179586) / dVar12;
        auVar13 = NEON_cmeq(ZEXT416(param_2),ZEXT816(0),4);
        auVar11._0_4_ = auVar13._0_4_;
        auVar11._4_4_ = auVar11._0_4_;
        auVar11._8_4_ = auVar11._0_4_;
        auVar11._12_4_ = auVar11._0_4_;
        auVar13._8_4_ = SUB84(-auVar14._8_8_,0);
        auVar13._0_8_ = -auVar14._0_8_;
        auVar13._12_4_ = (int)((ulong)-auVar14._8_8_ >> 0x20);
        auVar15 = NEON_bif(auVar14,auVar13,auVar11,1);
        auVar18._8_4_ = SUB84(-auVar19._8_8_,0);
        auVar18._0_8_ = -auVar19._0_8_;
        auVar18._12_4_ = (int)((ulong)-auVar19._8_8_ >> 0x20);
        auVar13 = NEON_bsl(auVar11,auVar19,auVar18,1);
        local_c0 = iVar21;
        iStack_bc = iVar22;
        sincos(auVar13._0_8_,&local_88,&local_90);
        sincos(auVar13._8_8_,&local_68,local_80);
        sincos(auVar15._0_8_,&dStack_a8,&local_b0);
        sincos(auVar15._8_8_,&local_98,&local_a0);
        uVar7 = uVar7 - 4;
        *pfVar8 = (float)local_b0;
        pfVar8[1] = (float)dStack_a8;
        pfVar8[2] = (float)local_a0;
        pfVar8[3] = (float)local_98;
        pfVar8[4] = (float)local_90;
        pfVar8[5] = (float)local_88;
        pfVar8[6] = (float)local_80[0];
        pfVar8[7] = (float)local_68;
        pfVar8 = pfVar8 + 8;
        iVar16 = iVar16 + 4;
        iVar20 = iVar20 + 4;
        iVar21 = iStack_c8 + 4;
        iVar22 = iStack_c4 + 4;
      } while (uVar7 != 0);
      if (uVar10 == uVar9) goto LAB_00552a0c;
    }
    dVar3 = DAT_001f54a8;
    pfVar8 = (float *)(puVar4 + uVar10 * 2 + 0x43);
    do {
      __x = ((double)(int)uVar10 * dVar3) / dVar12;
      if (param_2 != 0) {
        __x = -__x;
      }
      sincos(__x,&local_b8,(double *)&local_c0);
      uVar10 = uVar10 + 1;
      pfVar8[-1] = (float)(double)CONCAT44(iStack_bc,local_c0);
      *pfVar8 = (float)local_b8;
      pfVar8 = pfVar8 + 2;
    } while (uVar9 != uVar10);
  }
LAB_00552a0c:
  puVar5 = puVar4 + 2;
  uVar6 = 4;
  do {
    while( true ) {
      iVar16 = 0;
      if (uVar6 != 0) {
        iVar16 = (int)param_1 / (int)uVar6;
      }
      if (param_1 == iVar16 * uVar6) break;
      uVar2 = uVar6 + 2;
      if (uVar6 == 2) {
        uVar2 = 3;
      }
      uVar1 = 2;
      if (uVar6 != 4) {
        uVar1 = uVar2;
      }
      uVar6 = param_1;
      if ((double)(int)uVar1 <= (double)(long)SQRT(dVar12)) {
        uVar6 = uVar1;
      }
    }
    uVar2 = 0;
    if (uVar6 != 0) {
      uVar2 = (int)param_1 / (int)uVar6;
    }
    *puVar5 = uVar6;
    puVar5[1] = uVar2;
    puVar5 = puVar5 + 2;
    param_1 = uVar2;
  } while (1 < (int)uVar2);
  return puVar4;
}


// ===== 00552a94  FUN_00552a94 =====

void FUN_00552a94(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                 uint *param_5,int *param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  float *pfVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  float *pfVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  float *pfVar21;
  float *pfVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  int iVar27;
  float fVar28;
  int iVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined4 uVar53;
  float fVar54;
  float fVar55;
  
  uVar5 = *param_5;
  uVar6 = param_5[1];
  uVar25 = (ulong)uVar6;
  uVar18 = (ulong)(int)uVar5;
  lVar26 = (long)(int)uVar6;
  lVar23 = (long)(int)(uVar6 * uVar5) * 8;
  if (uVar6 == 1) {
    puVar7 = param_1;
    do {
      uVar20 = *param_2;
      param_2 = param_2 + (int)param_4 * param_3;
      lVar23 = lVar23 + -8;
      *puVar7 = uVar20;
      puVar7 = puVar7 + 1;
    } while (lVar23 != 0);
  }
  else {
    lVar24 = 0;
    do {
      FUN_00552a94((long)param_1 + lVar24,param_2,uVar18 * param_3,param_4,param_5 + 2,param_6);
      param_2 = param_2 + (int)param_4 * param_3;
      lVar24 = lVar24 + lVar26 * 8;
    } while (lVar23 - lVar24 != 0);
  }
  switch(uVar5) {
  case 2:
    param_6 = param_6 + 0x42;
    do {
      uVar5 = (int)uVar25 - 1;
      uVar25 = (ulong)uVar5;
      fVar28 = *(float *)(param_1 + lVar26);
      fVar31 = *(float *)((long)(param_1 + lVar26) + 4);
      uVar20 = *(undefined8 *)param_6;
      param_6 = param_6 + param_3 * 2;
      fVar32 = (float)uVar20;
      fVar47 = (float)((ulong)uVar20 >> 0x20);
      uVar20 = NEON_rev64(CONCAT44(fVar47 * -fVar31,fVar32 * fVar31),4);
      fVar31 = (float)uVar20 + fVar32 * fVar28;
      fVar28 = (float)((ulong)uVar20 >> 0x20) + fVar47 * fVar28;
      param_1[lVar26] = CONCAT44((float)((ulong)*param_1 >> 0x20) - fVar28,(float)*param_1 - fVar31)
      ;
      *param_1 = CONCAT44(fVar28 + (float)((ulong)*param_1 >> 0x20),fVar31 + (float)*param_1);
      param_1 = param_1 + 1;
    } while (uVar5 != 0);
    break;
  case 3:
    pfVar13 = (float *)(param_6 + 0x43);
    pfVar8 = (float *)((long)param_1 + 4);
    fVar28 = (float)param_6[lVar26 * param_3 * 2 + 0x43];
    pfVar22 = pfVar13;
    lVar23 = lVar26;
    do {
      pfVar2 = pfVar8 + lVar26 * 2;
      pfVar3 = pfVar8 + lVar26 * 4;
      pfVar21 = pfVar13 + -1;
      fVar32 = *pfVar13;
      pfVar1 = pfVar22 + -1;
      fVar33 = *pfVar22;
      lVar23 = lVar23 + -1;
      pfVar22 = pfVar22 + param_3 * 4;
      pfVar13 = pfVar13 + param_3 * 2;
      fVar31 = (float)NEON_fmadd(pfVar2[-1],*pfVar21,-(*pfVar2 * fVar32));
      fVar47 = (float)NEON_fmadd(pfVar2[-1],fVar32,*pfVar21 * *pfVar2);
      fVar55 = (float)NEON_fmadd(pfVar3[-1],*pfVar1,-(*pfVar3 * fVar33));
      fVar34 = (float)NEON_fmadd(pfVar3[-1],fVar33,*pfVar1 * *pfVar3);
      fVar51 = (float)NEON_fmsub(fVar31 + fVar55,0x3f000000,pfVar8[-1]);
      fVar36 = (float)NEON_fmsub(fVar47 + fVar34,0x3f000000,*pfVar8);
      fVar32 = fVar28 * (fVar31 - fVar55);
      fVar33 = fVar28 * (fVar47 - fVar34);
      pfVar2[-1] = fVar51;
      *pfVar2 = fVar36;
      pfVar8[-1] = fVar31 + fVar55 + pfVar8[-1];
      *pfVar8 = fVar47 + fVar34 + *pfVar8;
      pfVar8 = pfVar8 + 2;
      fVar31 = *pfVar2;
      pfVar3[-1] = fVar33 + pfVar2[-1];
      *pfVar3 = fVar31 - fVar32;
      pfVar2[-1] = pfVar2[-1] - fVar33;
      *pfVar2 = fVar32 + *pfVar2;
    } while (lVar23 != 0);
    break;
  case 4:
    pfVar13 = (float *)((long)param_1 + 4);
    iVar27 = param_6[1];
    pfVar8 = (float *)(param_6 + 0x43);
    pfVar21 = pfVar8;
    pfVar22 = pfVar8;
    lVar23 = lVar26;
    do {
      pfVar1 = pfVar13 + lVar26 * 2;
      pfVar2 = pfVar13 + lVar26 * 4;
      pfVar3 = pfVar13 + lVar26 * 6;
      fVar28 = (float)NEON_fmadd(pfVar1[-1],pfVar21[-1],-(*pfVar1 * *pfVar21));
      fVar55 = (float)NEON_fmadd(pfVar1[-1],*pfVar21,pfVar21[-1] * *pfVar1);
      fVar31 = (float)NEON_fmadd(pfVar2[-1],pfVar22[-1],-(*pfVar2 * *pfVar22));
      fVar32 = (float)NEON_fmadd(pfVar2[-1],*pfVar22,pfVar22[-1] * *pfVar2);
      fVar47 = (float)NEON_fmadd(pfVar3[-1],pfVar8[-1],-(*pfVar3 * *pfVar8));
      fVar34 = (float)NEON_fmadd(pfVar3[-1],*pfVar8,pfVar8[-1] * *pfVar3);
      fVar36 = fVar31 + pfVar13[-1];
      fVar37 = fVar32 + *pfVar13;
      fVar31 = pfVar13[-1] - fVar31;
      fVar32 = *pfVar13 - fVar32;
      fVar33 = fVar28 - fVar47;
      fVar51 = fVar55 - fVar34;
      pfVar13[-1] = fVar36;
      *pfVar13 = fVar37;
      pfVar2[-1] = fVar36 - (fVar28 + fVar47);
      *pfVar2 = fVar37 - (fVar55 + fVar34);
      pfVar13[-1] = fVar28 + fVar47 + pfVar13[-1];
      *pfVar13 = fVar55 + fVar34 + *pfVar13;
      if (iVar27 == 0) {
        fVar28 = fVar31 + fVar51;
        fVar47 = fVar32 - fVar33;
        fVar31 = fVar31 - fVar51;
        fVar32 = fVar32 + fVar33;
      }
      else {
        fVar28 = fVar31 - fVar51;
        fVar47 = fVar32 + fVar33;
        fVar31 = fVar31 + fVar51;
        fVar32 = fVar32 - fVar33;
      }
      pfVar13[lVar26 * 2] = fVar47;
      lVar23 = lVar23 + -1;
      pfVar13[lVar26 * 6] = fVar32;
      pfVar13 = pfVar13 + 2;
      pfVar8 = pfVar8 + param_3 * 6;
      pfVar22 = pfVar22 + param_3 * 4;
      pfVar21 = pfVar21 + param_3 * 2;
      pfVar1[-1] = fVar28;
      pfVar3[-1] = fVar31;
    } while (lVar23 != 0);
    break;
  case 5:
    if (0 < (int)uVar6) {
      uVar17 = 0;
      uVar18 = 0;
      lVar23 = 0;
      iVar27 = param_6[lVar26 * param_3 * 2 + 0x42];
      fVar28 = (float)(param_6 + lVar26 * param_3 * 2 + 0x42)[1];
      iVar29 = param_6[lVar26 * param_3 * 4 + 0x42];
      fVar31 = (float)(param_6 + lVar26 * param_3 * 4 + 0x42)[1];
      pfVar13 = (float *)(param_6 + 0x43);
      pfVar8 = pfVar13;
      do {
        pfVar22 = (float *)((long)param_1 + lVar23 + lVar26 * 8 + 4);
        uVar19 = uVar18 & 0xfffffffc;
        pfVar21 = (float *)((long)param_1 + lVar23 + lVar26 * 0x20);
        pfVar1 = (float *)((long)param_1 + lVar23 + lVar26 * 0x10);
        pfVar2 = (float *)((long)param_1 + lVar23 + (long)(int)(uVar6 * 3) * 8);
        uVar18 = uVar18 + 4;
        fVar47 = (float)param_6[uVar19 * param_3 * 2 + 0x42];
        fVar51 = (float)(param_6 + uVar19 * param_3 * 2 + 0x42)[1];
        fVar43 = (float)NEON_fmadd(pfVar22[-1],pfVar8[-1],-(*pfVar22 * *pfVar8));
        fVar34 = (float)param_6[(uVar17 & 0xffffffff) * param_3 * 2 + 0x42];
        fVar55 = (float)(param_6 + (uVar17 & 0xffffffff) * param_3 * 2 + 0x42)[1];
        pfVar3 = (float *)((long)param_1 + lVar23);
        fVar32 = (float)NEON_fmadd(pfVar22[-1],*pfVar8,pfVar8[-1] * *pfVar22);
        fVar33 = (float)NEON_fmadd(*pfVar21,fVar47,-(pfVar21[1] * fVar51));
        fVar41 = (float)NEON_fmadd(*pfVar21,fVar51,fVar47 * pfVar21[1]);
        fVar45 = (float)NEON_fmadd(*pfVar1,*pfVar13,pfVar13[-1] * pfVar1[1]);
        lVar23 = lVar23 + 8;
        fVar47 = (float)NEON_fmadd(*pfVar1,pfVar13[-1],-(pfVar1[1] * *pfVar13));
        uVar17 = uVar17 + 3;
        fVar48 = (float)NEON_fmadd(*pfVar2,fVar55,fVar34 * pfVar2[1]);
        fVar34 = (float)NEON_fmadd(*pfVar2,fVar34,-(pfVar2[1] * fVar55));
        fVar55 = fVar43 + fVar33;
        fVar37 = fVar32 + fVar41;
        fVar40 = *pfVar3;
        fVar52 = pfVar3[1];
        fVar44 = fVar47 + fVar34;
        fVar46 = fVar45 + fVar48;
        pfVar13 = pfVar13 + param_3 * 4;
        uVar49 = NEON_fmadd(fVar55,iVar27,fVar40);
        uVar53 = NEON_fmadd(fVar37,iVar27,fVar52);
        uVar35 = NEON_fmadd(fVar55,iVar29,fVar40);
        fVar51 = (float)NEON_fmsub(fVar47 - fVar34,fVar31,-((fVar43 - fVar33) * fVar28));
        uVar38 = NEON_fmadd(fVar37,iVar29,fVar52);
        fVar50 = (float)NEON_fmadd(fVar44,iVar29,uVar49);
        fVar42 = (float)NEON_fmadd(fVar32 - fVar41,fVar28,fVar31 * (fVar45 - fVar48));
        fVar54 = (float)NEON_fmadd(fVar46,iVar29,uVar53);
        fVar36 = (float)NEON_fmadd(fVar44,iVar27,uVar35);
        fVar39 = (float)NEON_fmadd(fVar46,iVar27,uVar38);
        fVar47 = (float)NEON_fmadd(fVar43 - fVar33,fVar31,-((fVar47 - fVar34) * fVar28));
        fVar32 = (float)NEON_fmadd(fVar45 - fVar48,fVar28,-((fVar32 - fVar41) * fVar31));
        *pfVar3 = fVar40 + fVar44 + fVar55;
        pfVar3[1] = fVar52 + fVar46 + fVar37;
        pfVar8 = pfVar8 + param_3 * 2;
        pfVar22[-1] = fVar50 - fVar42;
        *pfVar22 = fVar54 - fVar51;
        *pfVar21 = fVar42 + fVar50;
        pfVar21[1] = fVar54 + fVar51;
        *pfVar1 = fVar32 + fVar36;
        pfVar1[1] = fVar39 + fVar47;
        *pfVar2 = fVar36 - fVar32;
        pfVar2[1] = fVar39 - fVar47;
      } while (uVar25 * 8 - lVar23 != 0);
    }
    break;
  default:
    iVar27 = *param_6;
    puVar7 = (undefined8 *)malloc(uVar18 << 3);
    if (puVar7 != (undefined8 *)0x0) {
      if (0 < (int)uVar6) {
        uVar19 = (ulong)uVar5;
        uVar18 = uVar18 & 0xfffffffe;
        uVar17 = 0;
        puVar9 = param_1;
        do {
          if (0 < (int)uVar5) {
            if (uVar5 == 1) {
              uVar11 = uVar17;
              uVar15 = 0;
LAB_00552c94:
              lVar23 = uVar19 - uVar15;
              puVar12 = param_1 + uVar11;
              puVar14 = puVar7 + uVar15;
              do {
                uVar20 = *puVar12;
                lVar23 = lVar23 + -1;
                puVar12 = puVar12 + uVar25;
                *puVar14 = uVar20;
                puVar14 = puVar14 + 1;
              } while (lVar23 != 0);
            }
            else {
              uVar11 = uVar17 + uVar18 * uVar6;
              puVar14 = puVar9;
              uVar15 = uVar18;
              puVar12 = puVar7 + 1;
              do {
                uVar16 = puVar14[uVar25];
                uVar15 = uVar15 - 2;
                uVar20 = *puVar14;
                puVar14 = puVar14 + uVar25 * 2;
                puVar12[-1] = uVar20;
                *puVar12 = uVar16;
                puVar12 = puVar12 + 2;
              } while (uVar15 != 0);
              uVar15 = uVar18;
              if (uVar18 != uVar19) goto LAB_00552c94;
            }
            uVar20 = *puVar7;
            uVar10 = 0;
            uVar11 = uVar17;
            do {
              param_1[uVar11] = uVar20;
              if (1 < (int)uVar5) {
                iVar29 = 0;
                uVar16 = CONCAT44(*(undefined4 *)((long)param_1 + uVar11 * 8 + 4),(int)uVar20);
                pfVar13 = (float *)((long)puVar7 + 0xc);
                lVar23 = uVar19 - 1;
                do {
                  fVar28 = *pfVar13;
                  iVar29 = iVar29 + (int)uVar11 * (int)param_3;
                  iVar4 = 0;
                  if (iVar27 <= iVar29) {
                    iVar4 = iVar27;
                  }
                  lVar23 = lVar23 + -1;
                  iVar29 = iVar29 - iVar4;
                  pfVar8 = pfVar13 + -1;
                  pfVar13 = pfVar13 + 2;
                  fVar31 = (float)*(undefined8 *)(param_6 + (long)iVar29 * 2 + 0x42);
                  fVar32 = (float)((ulong)*(undefined8 *)(param_6 + (long)iVar29 * 2 + 0x42) >> 0x20
                                  );
                  uVar30 = NEON_rev64(CONCAT44(fVar32 * -fVar28,fVar31 * fVar28),4);
                  uVar16 = CONCAT44((float)((ulong)uVar16 >> 0x20) +
                                    (float)((ulong)uVar30 >> 0x20) + fVar32 * *pfVar8,
                                    (float)uVar16 + (float)uVar30 + fVar31 * *pfVar8);
                  param_1[uVar11] = uVar16;
                } while (lVar23 != 0);
              }
              uVar11 = uVar11 + uVar25;
              uVar10 = uVar10 + 1;
            } while (uVar10 != uVar5);
          }
          uVar17 = uVar17 + 1;
          puVar9 = puVar9 + 1;
        } while (uVar17 != uVar25);
      }
      free(puVar7);
      return;
    }
  }
  return;
}


// ===== 00553140  FUN_00553140 =====

void FUN_00553140(int *param_1,void *param_2,void *param_3)

{
  void *__src;
  
  if (param_2 != param_3) {
    FUN_00552a94(param_3,param_2,1,1,param_1 + 2,param_1);
    return;
  }
  if ((param_2 != (void *)0x0) && (__src = malloc((long)*param_1 << 3), __src != (void *)0x0)) {
    FUN_00552a94(__src,param_2,1,1,param_1 + 2,param_1);
    memcpy(param_2,__src,(long)*param_1 << 3);
    free(__src);
    return;
  }
  return;
}


// ===== 005531f0  FUN_005531f0 =====

void FUN_005531f0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1;
  do {
    for (; (param_1 & 1) == 0; param_1 = (int)param_1 >> 1) {
      if ((int)param_1 < 0) {
        param_1 = param_1 + 1;
      }
    }
    for (; uVar1 = param_1, param_1 * -0x55555555 + 0x2aaaaaaa < 0x55555555;
        param_1 = (int)param_1 / 3) {
    }
    for (; uVar1 * -0x33333333 + 0x19999999 < 0x33333333; uVar1 = (int)uVar1 / 5) {
    }
    param_1 = uVar2 + 1;
    uVar2 = param_1;
  } while (1 < (int)uVar1);
  return;
}


// ===== 005532c0  FUN_005532c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005532c0(uint param_1,ulong param_2,long *param_3,ulong *param_4)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  double __x;
  double dVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  float *pfVar11;
  float *pfVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  long lVar20;
  long lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  long lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int local_f0;
  int iStack_e8;
  double local_d8;
  double local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  long local_88;
  long local_80;
  
  lVar5 = tpidr_el0;
  local_80 = *(long *)(lVar5 + 0x28);
  plVar7 = (long *)0x0;
  local_88 = 0;
  if ((param_1 & 1) != 0) goto LAB_005535a0;
  iVar3 = (int)param_1 >> 1;
  FUN_005527e8(iVar3,param_2,0,&local_88);
  lVar17 = local_88;
  iVar2 = (param_1 & 0xfffffffe) + iVar3;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 1;
  }
  uVar9 = local_88 + (long)(iVar2 >> 1) * 8 + 0x18;
  if (param_4 == (ulong *)0x0) {
    plVar7 = (long *)malloc(uVar9);
    if (plVar7 == (long *)0x0) goto LAB_005533c0;
  }
  else {
    uVar8 = *param_4;
    *param_4 = uVar9;
    if ((uVar8 < uVar9) || (plVar7 = param_3, param_3 == (long *)0x0)) {
LAB_005533c0:
      plVar7 = (long *)0x0;
      goto LAB_005535a0;
    }
  }
  plVar1 = plVar7 + 3;
  *plVar7 = (long)plVar1;
  plVar7[1] = (long)plVar1 + lVar17;
  plVar7[2] = (long)plVar1 + lVar17 + (long)iVar3 * 8;
  FUN_005527e8(iVar3,param_2 & 0xffffffff,plVar1,&local_88);
  if (3 < (int)param_1) {
    dVar13 = (double)iVar3;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 1;
    }
    pfVar11 = (float *)plVar7[2];
    uVar4 = iVar3 >> 1;
    if ((int)uVar4 < 2) {
      uVar4 = 1;
    }
    uVar9 = (ulong)uVar4;
    if (uVar4 < 4) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar9 & 0x7ffffffc;
      auVar26 = NEON_fmov(0x3fe0000000000000,8);
      uVar10 = uVar8;
      pfVar12 = pfVar11;
      lVar17 = _DAT_001f3b10;
      lVar20 = _UNK_001f3b18;
      lVar21 = _DAT_001f1d00;
      lVar25 = _UNK_001f1d08;
      do {
        local_f0 = (int)lVar17;
        iStack_e8 = (int)lVar20;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = param_2 & 0xffffffff;
        auVar15 = NEON_cmeq(auVar23,ZEXT816(0),4);
        auVar16._0_4_ = auVar15._0_4_;
        auVar16._4_4_ = auVar16._0_4_;
        auVar16._8_4_ = auVar16._0_4_;
        auVar16._12_4_ = auVar16._0_4_;
        auVar22._0_8_ = (long)((int)lVar21 + 1);
        auVar22._8_8_ = (long)((int)lVar25 + 1);
        auVar18._0_8_ = (long)(local_f0 + 1);
        auVar18._8_8_ = (long)(iStack_e8 + 1);
        auVar23 = NEON_scvtf(auVar22,8);
        auVar15 = NEON_scvtf(auVar18,8);
        auVar24._0_8_ = (auVar23._0_8_ / dVar13 + auVar26._0_8_) * -3.141592653589793;
        auVar24._8_8_ = (auVar23._8_8_ / dVar13 + auVar26._8_8_) * -3.141592653589793;
        auVar19._0_8_ = (auVar15._0_8_ / dVar13 + auVar26._0_8_) * -3.141592653589793;
        auVar19._8_8_ = (auVar15._8_8_ / dVar13 + auVar26._8_8_) * -3.141592653589793;
        auVar27._0_8_ = -auVar19._0_8_;
        auVar27._8_8_ = -auVar19._8_8_;
        auVar15._8_4_ = SUB84(-auVar24._8_8_,0);
        auVar15._0_8_ = -auVar24._0_8_;
        auVar15._12_4_ = (int)((ulong)-auVar24._8_8_ >> 0x20);
        auVar23 = NEON_bif(auVar24,auVar15,auVar16,1);
        auVar15 = NEON_bsl(auVar16,auVar19,auVar27,1);
        sincos(auVar15._0_8_,&local_a0,&local_a8);
        sincos(auVar15._8_8_,&local_90,&local_98);
        sincos(auVar23._0_8_,&dStack_c0,&local_c8);
        sincos(auVar23._8_8_,&local_b0,&local_b8);
        uVar10 = uVar10 - 4;
        *pfVar12 = (float)local_c8;
        pfVar12[1] = (float)dStack_c0;
        pfVar12[2] = (float)local_b8;
        pfVar12[3] = (float)local_b0;
        pfVar12[4] = (float)local_a8;
        pfVar12[5] = (float)local_a0;
        pfVar12[6] = (float)local_98;
        pfVar12[7] = (float)local_90;
        pfVar12 = pfVar12 + 8;
        lVar17 = lVar17 + 4;
        lVar20 = lVar20 + 4;
        lVar21 = lVar21 + 4;
        lVar25 = lVar25 + 4;
      } while (uVar10 != 0);
      if (uVar8 == uVar9) goto LAB_005535a0;
    }
    dVar6 = DAT_001f54b0;
    pfVar11 = pfVar11 + uVar8 * 2 + 1;
    do {
      uVar8 = uVar8 + 1;
      dVar14 = (double)(int)uVar8 / dVar13 + 0.5;
      __x = dVar14 * dVar6;
      if ((int)param_2 != 0) {
        __x = -(dVar14 * dVar6);
      }
      sincos(__x,&local_d0,&local_d8);
      pfVar11[-1] = (float)local_d8;
      *pfVar11 = (float)local_d0;
      pfVar11 = pfVar11 + 2;
    } while (uVar9 != uVar8);
  }
LAB_005535a0:
  if (*(long *)(lVar5 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar7);
  }
  return;
}


// ===== 005535d8  FUN_005535d8 =====

void FUN_005535d8(undefined8 *param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  float *pfVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  piVar4 = (int *)*param_1;
  if (piVar4[1] == 0) {
    iVar3 = *piVar4;
    uVar9 = (ulong)iVar3;
    FUN_00553140(piVar4,param_2,param_1[1]);
    pfVar5 = (float *)param_1[1];
    fVar10 = *pfVar5;
    fVar11 = pfVar5[1];
    param_3[1] = 0.0;
    (param_3 + uVar9 * 2)[1] = 0.0;
    *param_3 = fVar10 + fVar11;
    param_3[uVar9 * 2] = fVar10 - fVar11;
    if (1 < iVar3) {
      lVar7 = param_1[2];
      lVar8 = uVar9 * 8 + -4;
      lVar6 = 0;
      do {
        fVar12 = *(float *)((long)pfVar5 + lVar6 + 8);
        fVar10 = *(float *)((long)pfVar5 + lVar6 + 0xc);
        fVar13 = ((float *)((long)pfVar5 + lVar8))[-1];
        fVar11 = *(float *)((long)pfVar5 + lVar8);
        fVar16 = *(float *)(lVar7 + lVar6);
        fVar15 = ((float *)(lVar7 + lVar6))[1];
        pfVar2 = (float *)((long)param_3 + lVar8);
        lVar1 = lVar6 + 8;
        lVar8 = lVar8 + -8;
        fVar14 = fVar10 + fVar11;
        fVar17 = fVar12 - fVar13;
        fVar12 = fVar12 + fVar13;
        fVar10 = fVar10 - fVar11;
        fVar13 = (float)NEON_fmadd(fVar17,fVar16,-(fVar14 * fVar15));
        fVar11 = (float)NEON_fmadd(fVar17,fVar15,fVar14 * fVar16);
        *(float *)((long)param_3 + lVar6 + 8) = (fVar12 + fVar13) * 0.5;
        *(float *)((long)param_3 + lVar6 + 0xc) = (fVar10 + fVar11) * 0.5;
        pfVar2[-1] = (fVar12 - fVar13) * 0.5;
        *pfVar2 = (fVar11 - fVar10) * 0.5;
        lVar6 = lVar1;
      } while ((uVar9 & 0xfffffffe) * 4 - lVar1 != 0);
    }
  }
  return;
}


// ===== 005536e0  FUN_005536e0 =====

void FUN_005536e0(undefined8 *param_1,float *param_2)

{
  long lVar1;
  float *pfVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  piVar4 = (int *)*param_1;
  if (piVar4[1] != 0) {
    iVar3 = *piVar4;
    uVar8 = (ulong)iVar3;
    pfVar5 = (float *)param_1[1];
    *pfVar5 = *param_2 + param_2[uVar8 * 2];
    pfVar5[1] = *param_2 - param_2[uVar8 * 2];
    if (1 < iVar3) {
      lVar6 = param_1[2];
      lVar9 = uVar8 * 8 + -4;
      lVar7 = 0;
      do {
        fVar12 = *(float *)((long)param_2 + lVar7 + 8);
        fVar10 = *(float *)((long)param_2 + lVar7 + 0xc);
        fVar13 = ((float *)((long)param_2 + lVar9))[-1];
        fVar11 = *(float *)((long)param_2 + lVar9);
        fVar16 = *(float *)(lVar6 + lVar7);
        fVar15 = ((float *)(lVar6 + lVar7))[1];
        pfVar2 = (float *)((long)pfVar5 + lVar9);
        lVar1 = lVar7 + 8;
        lVar9 = lVar9 + -8;
        fVar14 = fVar10 + fVar11;
        fVar17 = fVar12 - fVar13;
        fVar10 = fVar10 - fVar11;
        fVar12 = fVar12 + fVar13;
        fVar11 = (float)NEON_fmadd(fVar17,fVar15,fVar14 * fVar16);
        fVar13 = (float)NEON_fmadd(fVar17,fVar16,-(fVar14 * fVar15));
        *(float *)((long)pfVar5 + lVar7 + 8) = fVar12 + fVar13;
        *(float *)((long)pfVar5 + lVar7 + 0xc) = fVar10 + fVar11;
        pfVar2[-1] = fVar12 - fVar13;
        *pfVar2 = -(fVar10 - fVar11);
        lVar7 = lVar1;
      } while ((uVar8 & 0xfffffffe) * 4 - lVar1 != 0);
    }
    FUN_00553140(piVar4,pfVar5);
    return;
  }
  return;
}


// ===== 005537b8  FUN_005537b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_005537b8(undefined4 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  
  __ptr = (undefined4 *)malloc(0x98);
  uVar2 = _UNK_001f3848;
  uVar1 = _DAT_001f3840;
  if (__ptr != (undefined4 *)0x0) {
    *(undefined8 *)(__ptr + 0x10) = 0x100;
    *(undefined8 *)(__ptr + 8) = uVar2;
    *(undefined8 *)(__ptr + 6) = uVar1;
    *(undefined8 *)(__ptr + 0x18) = 10;
    __ptr_00 = malloc(0x10035);
    *(void **)(__ptr + 4) = __ptr_00;
    __ptr_01 = malloc(0x100);
    *(void **)(__ptr + 0xe) = __ptr_01;
    __ptr_02 = malloc(0x230);
    *(void **)(__ptr + 0x16) = __ptr_02;
    if (((__ptr_00 == (void *)0x0) || (__ptr_01 == (void *)0x0)) || (__ptr_02 == (void *)0x0)) {
      if (__ptr_01 != (void *)0x0) {
        free(__ptr_01);
      }
      if (__ptr_00 != (void *)0x0) {
        free(__ptr_00);
      }
      if (__ptr_02 != (void *)0x0) {
        free(__ptr_02);
      }
      free(__ptr);
      __ptr = (undefined4 *)0x0;
    }
    else {
      *__ptr = param_1;
      *(undefined8 *)(__ptr + 10) = 0;
      *(undefined8 *)(__ptr + 0xc) = 0;
      *(undefined8 *)(__ptr + 0x12) = 0;
      *(undefined8 *)(__ptr + 0x14) = 0;
      *(long *)(__ptr + 2) = (long)__ptr_00 + 0x11a;
      *(undefined8 *)(__ptr + 0x1a) = 0;
      *(undefined8 *)(__ptr + 0x1c) = 0;
      __ptr[0x1e] = 0;
      *(undefined8 *)(__ptr + 0x22) = 0;
      *(undefined8 *)(__ptr + 0x24) = 0;
      *(undefined8 *)(__ptr + 0x20) = 0;
    }
  }
  return __ptr;
}


// ===== 005538ac  FUN_005538ac =====

void FUN_005538ac(void *param_1)

{
  free(*(void **)((long)param_1 + 0x38));
  free(*(void **)((long)param_1 + 0x10));
  free(*(void **)((long)param_1 + 0x58));
  free(param_1);
  return;
}


// ===== 005538e4  FUN_005538e4 =====

void FUN_005538e4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x70) = param_2;
  return;
}


// ===== 005538ec  FUN_005538ec =====

void FUN_005538ec(long param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (*(ulong *)(param_1 + 0x20) < (ulong)(lVar2 + param_2)) {
    FUN_0055396c(param_1);
    lVar2 = *(long *)(param_1 + 0x28);
    uVar3 = lVar2 + param_2;
    if (*(ulong *)(param_1 + 0x20) < uVar3) {
      uVar3 = uVar3 * 3 + 0x34e >> 1;
      pvVar1 = realloc(*(void **)(param_1 + 0x10),uVar3);
      if (pvVar1 == (void *)0x0) {
        return;
      }
      lVar2 = *(long *)(param_1 + 0x28);
      *(ulong *)(param_1 + 0x20) = uVar3;
      *(long *)(param_1 + 8) = (long)pvVar1 + 0x11a;
      *(void **)(param_1 + 0x10) = pvVar1;
    }
  }
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 8) + lVar2;
  return;
}


// ===== 0055396c  FUN_0055396c =====

void FUN_0055396c(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  if (*(long *)(param_1 + 0x68) == 0) {
    plVar3 = (long *)(param_1 + 0x30);
    plVar6 = (long *)(param_1 + 0x50);
  }
  else {
    plVar3 = (long *)(*(long *)(param_1 + 0x58) + 8);
    plVar6 = (long *)(*(long *)(param_1 + 0x58) + 0x18);
  }
  lVar11 = *plVar6;
  lVar10 = *plVar3;
  if (*(ulong *)(param_1 + 0x48) < (ulong)(lVar11 << 2)) {
    memmove(*(void **)(param_1 + 0x38),(void *)((long)*(void **)(param_1 + 0x38) + lVar11),
            *(ulong *)(param_1 + 0x48) - lVar11);
    uVar4 = *(ulong *)(param_1 + 0x68);
    if (uVar4 != 0) {
      lVar7 = *(long *)(param_1 + 0x58);
      uVar8 = 0;
      uVar9 = uVar4 - 1;
      if (((uVar9 != 0) &&
          (auVar1._8_8_ = 0, auVar1._0_8_ = uVar9, lVar7 + 0x18U <= lVar7 + 0x18U + uVar9 * 0x38))
         && (SUB168(auVar1 * ZEXT816(0x38),8) == 0)) {
        uVar8 = uVar4 & 0xfffffffffffffffe;
        plVar3 = (long *)(lVar7 + 0x50);
        uVar9 = uVar8;
        do {
          uVar9 = uVar9 - 2;
          plVar3[-7] = plVar3[-7] - lVar11;
          *plVar3 = *plVar3 - lVar11;
          plVar3 = plVar3 + 0xe;
        } while (uVar9 != 0);
        if (uVar4 == uVar8) goto LAB_00553a58;
      }
      lVar5 = uVar4 - uVar8;
      plVar3 = (long *)(lVar7 + uVar8 * 0x38 + 0x18);
      do {
        lVar5 = lVar5 + -1;
        *plVar3 = *plVar3 - lVar11;
        plVar3 = plVar3 + 7;
      } while (lVar5 != 0);
    }
LAB_00553a58:
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) - lVar11;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) - lVar11;
  }
  if ((ulong)(lVar10 << 2) <= *(ulong *)(param_1 + 0x28)) {
    return;
  }
  memmove(*(void **)(param_1 + 8),(void *)((long)*(void **)(param_1 + 8) + lVar10),
          *(ulong *)(param_1 + 0x28) - lVar10);
  uVar4 = *(ulong *)(param_1 + 0x68);
  if (uVar4 != 0) {
    lVar11 = *(long *)(param_1 + 0x58);
    uVar8 = 0;
    uVar9 = uVar4 - 1;
    if (((uVar9 != 0) &&
        (auVar2._8_8_ = 0, auVar2._0_8_ = uVar9, lVar11 + 8U <= lVar11 + 8U + uVar9 * 0x38)) &&
       (SUB168(auVar2 * ZEXT816(0x38),8) == 0)) {
      uVar8 = uVar4 & 0xfffffffffffffffe;
      plVar3 = (long *)(lVar11 + 0x40);
      uVar9 = uVar8;
      do {
        uVar9 = uVar9 - 2;
        plVar3[-7] = plVar3[-7] - lVar10;
        *plVar3 = *plVar3 - lVar10;
        plVar3 = plVar3 + 0xe;
      } while (uVar9 != 0);
      if (uVar4 == uVar8) goto LAB_00553b18;
    }
    lVar7 = uVar4 - uVar8;
    plVar3 = (long *)(lVar11 + uVar8 * 0x38 + 8);
    do {
      lVar7 = lVar7 + -1;
      *plVar3 = *plVar3 - lVar10;
      plVar3 = plVar3 + 7;
    } while (lVar7 != 0);
  }
LAB_00553b18:
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) - lVar10;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) - lVar10;
  return;
}


// ===== 00553b38  FUN_00553b38 =====

undefined8 FUN_00553b38(long param_1,int param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar4 = *(long *)(param_1 + 0x48);
  uVar6 = (ulong)(param_2 / 0xff);
  if ((((uVar6 + lVar4) - *(long *)(param_1 + 0x50)) - 0xff < 0xffffffffffffff00) ||
     ((*(ulong *)(param_1 + 0x70) != 0 &&
      (*(ulong *)(param_1 + 0x70) < (ulong)(param_3 - *(long *)(param_1 + 0x88)))))) {
    FUN_00553cd8(param_1);
    lVar4 = *(long *)(param_1 + 0x48);
  }
  lVar1 = uVar6 + 1;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + (long)param_2;
  if (*(ulong *)(param_1 + 0x40) < (ulong)(lVar1 + lVar4)) {
    FUN_0055396c(param_1);
    uVar5 = lVar1 + *(long *)(param_1 + 0x48);
    if (*(ulong *)(param_1 + 0x40) < uVar5) {
      uVar5 = uVar5 * 3 >> 1;
      pvVar3 = realloc(*(void **)(param_1 + 0x38),uVar5);
      if (pvVar3 == (void *)0x0) {
        return 1;
      }
      *(void **)(param_1 + 0x38) = pvVar3;
      *(ulong *)(param_1 + 0x40) = uVar5;
    }
  }
  pvVar3 = (void *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x28));
  if (pvVar3 < *(void **)(param_1 + 0x18)) {
    memmove(pvVar3,*(void **)(param_1 + 0x18),(long)param_2);
  }
  if (0x1fc < param_2 + 0xfeU) {
    uVar5 = 0;
    uVar2 = uVar6;
    if (uVar6 < 2) {
      uVar2 = 1;
    }
    do {
      *(undefined1 *)(*(long *)(param_1 + 0x38) + *(long *)(param_1 + 0x48) + uVar5) = 0xff;
      uVar5 = uVar5 + 1;
    } while (uVar2 != uVar5);
  }
  *(char *)(*(long *)(param_1 + 0x38) + *(long *)(param_1 + 0x48) + uVar6) =
       (char)(param_2 / 0xff) + (char)param_2;
  *(long *)(param_1 + 0x80) = param_3;
  *(undefined4 *)(param_1 + 0x78) = param_4;
  *(long *)(param_1 + 0x48) = lVar1 + *(long *)(param_1 + 0x48);
  if ((*(ulong *)(param_1 + 0x70) != 0) &&
     (*(ulong *)(param_1 + 0x70) <= (ulong)(param_3 - *(long *)(param_1 + 0x88)))) {
    FUN_00553cd8(param_1);
  }
  return 0;
}


// ===== 00553cd8  FUN_00553cd8 =====

undefined8 FUN_00553cd8(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  
  lVar6 = *(long *)(param_1 + 0x50);
  uVar16 = *(long *)(param_1 + 0x48) - lVar6;
  if (uVar16 == 0) {
    uVar3 = 1;
  }
  else {
    uVar18 = *(ulong *)(param_1 + 0x60);
    uVar7 = *(ulong *)(param_1 + 0x68);
    uVar17 = 0;
    do {
      if (uVar7 < uVar18) {
        pvVar4 = *(void **)(param_1 + 0x58);
        uVar8 = uVar7;
      }
      else {
        uVar18 = (uVar18 * 3 >> 1) + 1;
        pvVar4 = realloc(*(void **)(param_1 + 0x58),uVar18 * 0x38);
        uVar8 = *(ulong *)(param_1 + 0x68);
        *(void **)(param_1 + 0x58) = pvVar4;
        *(ulong *)(param_1 + 0x60) = uVar18;
        lVar6 = *(long *)(param_1 + 0x50);
      }
      puVar14 = (undefined8 *)((long)pvVar4 + uVar8 * 0x38);
      uVar7 = uVar8 + 1;
      uVar9 = *(undefined8 *)(param_1 + 0x80);
      lVar11 = *(long *)(param_1 + 0x30);
      *(ulong *)(param_1 + 0x68) = uVar7;
      puVar14[3] = lVar6;
      puVar14[4] = uVar16;
      puVar10 = (uint *)(puVar14 + 5);
      *puVar10 = uVar17;
      *puVar14 = uVar9;
      puVar14[1] = lVar11;
      uVar13 = uVar17;
      if (uVar16 < 0x100) {
        iVar1 = *(int *)(param_1 + 0x78);
        lVar12 = *(long *)(param_1 + 0x28) - lVar11;
        *(long *)((long)pvVar4 + uVar8 * 0x38 + 0x10) = lVar12;
        uVar5 = uVar16;
        if (iVar1 != 0) {
          *puVar10 = uVar17 | 4;
          uVar13 = uVar17 | 4;
        }
      }
      else {
        bVar2 = *(byte *)(lVar6 + *(long *)(param_1 + 0x38) + 1);
        puVar14[4] = 0xff;
        *puVar14 = 0xffffffffffffffff;
        lVar12 = (ulong)bVar2 * 0xff;
        *(long *)((long)pvVar4 + uVar8 * 0x38 + 0x10) = lVar12;
        uVar5 = 0xff;
        uVar17 = 1;
      }
      lVar15 = *(long *)(param_1 + 0x90);
      lVar6 = uVar5 + lVar6;
      uVar16 = uVar16 - uVar5;
      *(long *)(param_1 + 0x50) = lVar6;
      *(long *)(param_1 + 0x30) = lVar12 + lVar11;
      *(long *)(param_1 + 0x90) = lVar15 + 1;
      *(long *)((long)pvVar4 + uVar8 * 0x38 + 0x30) = lVar15;
      if (lVar15 == 0) {
        *puVar10 = uVar13 | 2;
      }
    } while (uVar16 != 0);
    uVar3 = 0;
    *(undefined8 *)(param_1 + 0x88) = uVar9;
  }
  return uVar3;
}


// ===== 00553e60  FUN_00553e60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00553e60(undefined4 *param_1,undefined8 *param_2,int *param_3)

{
  void *__dest;
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (*(long *)(param_1 + 0x1a) == 0) {
    uVar2 = 0;
    *param_2 = 0;
    *param_3 = 0;
  }
  else {
    puVar8 = *(undefined8 **)(param_1 + 0x16);
    lVar4 = puVar8[2];
    lVar9 = (long)((int)puVar8[4] + 0x1b);
    pbVar7 = (byte *)((*(long *)(param_1 + 2) + puVar8[1]) - lVar9);
    memcpy(pbVar7 + 0x1b,(void *)(*(long *)(param_1 + 0xe) + puVar8[3]),puVar8[4]);
    pbVar7[4] = 0;
    pbVar7[0] = 0x4f;
    auVar10 = _DAT_001f4730;
    pbVar7[1] = 0x67;
    pbVar7[2] = 0x67;
    pbVar7[3] = 0x53;
    pbVar7[5] = (byte)*(undefined4 *)(puVar8 + 5);
    auVar12 = _DAT_001f45f0;
    uVar2 = *puVar8;
    auVar11._8_8_ = uVar2;
    auVar11._0_8_ = uVar2;
    pbVar7[6] = (byte)uVar2;
    auVar10 = NEON_ushl(auVar11,auVar10,8);
    auVar12 = NEON_ushl(auVar11,auVar12,8);
    pbVar7[0xb] = (byte)((ulong)uVar2 >> 0x28);
    pbVar7[0xc] = (byte)((ulong)uVar2 >> 0x30);
    pbVar7[0xd] = (byte)((ulong)uVar2 >> 0x38);
    *(uint *)(pbVar7 + 7) =
         CONCAT13(auVar12[8],CONCAT12(auVar12[0],CONCAT11(auVar10[8],auVar10[0])));
    *(undefined4 *)(pbVar7 + 0xe) = *param_1;
    *(int *)(pbVar7 + 0x12) = (int)puVar8[6];
    uVar5 = lVar4 + lVar9;
    uVar2 = puVar8[4];
    iVar1 = (int)uVar5;
    pbVar7[0x16] = 0;
    pbVar7[0x17] = 0;
    pbVar7[0x18] = 0;
    pbVar7[0x19] = 0;
    pbVar7[0x1a] = (byte)uVar2;
    uVar3 = 0;
    if (0 < iVar1) {
      uVar5 = uVar5 & 0xffffffff;
      pbVar6 = pbVar7;
      do {
        uVar5 = uVar5 - 1;
        uVar3 = *(uint *)(&DAT_001f9c90 + (ulong)((uint)*pbVar6 ^ uVar3 >> 0x18) * 4) ^ uVar3 << 8;
        pbVar6 = pbVar6 + 1;
      } while (uVar5 != 0);
    }
    *(uint *)(pbVar7 + 0x16) = uVar3;
    lVar4 = *(long *)(param_1 + 0x1a);
    *param_2 = pbVar7;
    __dest = *(void **)(param_1 + 0x16);
    *param_3 = iVar1;
    *(long *)(param_1 + 0x1a) = lVar4 + -1;
    memmove(__dest,(void *)((long)__dest + 0x38),(lVar4 + -1) * 0x38);
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 00553fe4  FUN_00553fe4 =====

void FUN_00553fe4(undefined8 *param_1,char *param_2)

{
  ulong uVar1;
  char *__filename;
  byte bVar2;
  FILE *pFVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  bVar2 = param_2[0x17];
  uVar1 = *(ulong *)(param_2 + 8);
  if (-1 < (char)bVar2) {
    uVar1 = (ulong)bVar2;
  }
  if (uVar1 != 0) {
    __filename = *(char **)param_2;
    if (-1 < (char)bVar2) {
      __filename = param_2;
    }
    pFVar3 = fopen(__filename,"wb");
    param_1[1] = pFVar3;
  }
  return;
}


// ===== 00554038  FUN_00554038 =====

int FUN_00554038(undefined8 *param_1)

{
  int iVar1;
  
  FUN_005538ac(*param_1);
  iVar1 = fclose((FILE *)param_1[1]);
  return iVar1;
}


// ===== 00554060  FUN_00554060 =====

bool FUN_00554060(long *param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  size_t sVar7;
  int local_164;
  void *local_160;
  undefined1 auStack_158 [4];
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  undefined8 local_148;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_150 = 0;
  local_148 = 0;
  local_154 = param_3;
  local_14c = param_2;
  iVar3 = rand();
  lVar5 = FUN_005537b8(iVar3);
  *param_1 = lVar5;
  if (lVar5 == 0) {
    bVar2 = false;
  }
  else {
    FUN_005538e4(lVar5,48000);
    uVar4 = FUN_00554438(auStack_158);
    uVar6 = FUN_005538ec(*param_1,uVar4);
    uVar4 = FUN_00554444(auStack_158,uVar6,uVar4);
    FUN_00553b38(*param_1,uVar4,0,0);
    FUN_00553cd8(*param_1);
    do {
      iVar3 = FUN_00553e60(*param_1,&local_160,&local_164);
      bVar2 = iVar3 == 0;
      if (iVar3 == 0) break;
      sVar7 = fwrite(local_160,1,(long)local_164,(FILE *)param_1[1]);
    } while (sVar7 == (long)local_164);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}


// ===== 0055415c  FUN_0055415c =====

void FUN_0055415c(undefined8 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  void *__dest;
  size_t sVar4;
  int local_54;
  void *local_50;
  int local_44;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  FUN_00554498(&local_50,&local_54,plVar1);
  plVar1 = (long *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    plVar1 = param_3;
  }
  FUN_00554588(&local_50,&local_54,"ENCODER",plVar1);
  FUN_00554708(&local_50,&local_54,0x200);
  __dest = (void *)FUN_005538ec(*param_1,local_54);
  memcpy(__dest,local_50,(long)local_54);
  FUN_00553b38(*param_1,local_54,0,0);
  FUN_00553cd8(*param_1);
  do {
    iVar3 = FUN_00553e60(*param_1,&local_40,&local_44);
    if (iVar3 == 0) break;
    sVar4 = fwrite(local_40,1,(long)local_44,(FILE *)param_1[1]);
  } while (sVar4 == (long)local_44);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3 == 0);
}


// ===== 00554270  FUN_00554270 =====

void FUN_00554270(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  undefined2 *puVar4;
  long lVar5;
  int local_44;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  do {
    iVar2 = FUN_00553e60(*param_1,&local_40,&local_44);
    if (iVar2 == 0) break;
    sVar3 = fwrite(local_40,1,(long)local_44,(FILE *)param_1[1]);
  } while (sVar3 == (long)local_44);
  puVar4 = (undefined2 *)FUN_005538ec(*param_1,3);
  *puVar4 = 0xfff8;
  *(undefined1 *)(puVar4 + 1) = 0xfe;
  lVar5 = param_1[2];
  param_1[2] = lVar5 + 0x3c0;
  FUN_00553b38(*param_1,3,lVar5 + 0x3c0,1);
  FUN_00553cd8(*param_1);
  do {
    iVar2 = FUN_00553e60(*param_1,&local_40,&local_44);
    if (iVar2 == 0) break;
    sVar3 = fwrite(local_40,1,(long)local_44,(FILE *)param_1[1]);
  } while (sVar3 == (long)local_44);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}


// ===== 00554370  FUN_00554370 =====

void FUN_00554370(undefined8 *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  void *__dest;
  size_t sVar3;
  long lVar4;
  int local_44;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __dest = (void *)FUN_005538ec(*param_1,param_3 & 0xffffffff);
  memcpy(__dest,param_2,param_3);
  lVar4 = param_1[2];
  param_1[2] = lVar4 + 0x3c0;
  FUN_00553b38(*param_1,param_3 & 0xffffffff,lVar4 + 0x3c0,0);
  do {
    iVar2 = FUN_00553e60(*param_1,&local_40,&local_44);
    if (iVar2 == 0) break;
    sVar3 = fwrite(local_40,1,(long)local_44,(FILE *)param_1[1]);
  } while (sVar3 == (long)local_44);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}


// ===== 00554438  FUN_00554438 =====

int FUN_00554438(long param_1)

{
  return *(int *)(param_1 + 4) + 0x15;
}


// ===== 00554444  FUN_00554444 =====

undefined8 FUN_00554444(long param_1,undefined8 *param_2,int param_3)

{
  if (param_3 < 0x13) {
    return 0;
  }
  *param_2 = DAT_001f53c8;
  *(undefined1 *)(param_2 + 1) = 1;
  *(char *)((long)param_2 + 9) = (char)*(undefined4 *)(param_1 + 4);
  *(short *)((long)param_2 + 10) = (short)*(undefined4 *)(param_1 + 8);
  *(undefined4 *)((long)param_2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(short *)(param_2 + 2) = (short)*(undefined4 *)(param_1 + 0x10);
  *(char *)((long)param_2 + 0x12) = (char)*(undefined4 *)(param_1 + 0x14);
  return 0x13;
}


// ===== 00554498  FUN_00554498 =====

void FUN_00554498(undefined8 *param_1,int *param_2,char *param_3)

{
  size_t sVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  
  sVar1 = strlen(param_3);
  iVar3 = (int)sVar1 + 0x10;
  puVar2 = (undefined8 *)malloc((long)iVar3);
  if (puVar2 == (undefined8 *)0x0) {
    iVar3 = 0;
  }
  else {
    *(char *)((long)puVar2 + 0xb) = (char)(sVar1 >> 0x18);
    *(char *)((long)puVar2 + 10) = (char)(sVar1 >> 0x10);
    lVar4 = sVar1 << 0x20;
    *puVar2 = 0x736761547375704f;
    *(char *)(puVar2 + 1) = (char)sVar1;
    *(char *)((long)puVar2 + 9) = (char)(sVar1 >> 8);
    memcpy((void *)((long)puVar2 + 0xc),param_3,(long)(int)sVar1);
    *(undefined1 *)((long)puVar2 + (lVar4 + 0xf00000000 >> 0x20)) = 0;
    *(undefined1 *)((long)puVar2 + (lVar4 + 0xe00000000 >> 0x20)) = 0;
    *(undefined1 *)((long)puVar2 + (lVar4 + 0xd00000000 >> 0x20)) = 0;
    *(undefined1 *)((long)puVar2 + (lVar4 + 0xc00000000 >> 0x20)) = 0;
  }
  *param_2 = iVar3;
  *param_1 = puVar2;
  return;
}


// ===== 00554588  FUN_00554588 =====

undefined8 FUN_00554588(undefined8 *param_1,int *param_2,char *param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  size_t sVar5;
  undefined8 uVar6;
  void *pvVar7;
  ulong uVar8;
  int iVar9;
  
  pvVar7 = (void *)*param_1;
  uVar8 = (long)(int)((uint)*(byte *)((long)pvVar7 + 0xb) << 0x18) |
          (ulong)*(byte *)((long)pvVar7 + 10) << 0x10 | (ulong)*(byte *)((long)pvVar7 + 9) << 8 |
          (ulong)*(byte *)((long)pvVar7 + 8);
  iVar4 = *(int *)((long)pvVar7 + uVar8 + 0xc);
  if (param_3 == (char *)0x0) {
    iVar9 = 0;
  }
  else {
    sVar5 = strlen(param_3);
    iVar9 = (int)sVar5 + 1;
  }
  sVar5 = strlen(param_4);
  iVar2 = iVar9 + (int)sVar5;
  iVar1 = iVar2 + *param_2 + 4;
  pvVar7 = realloc(pvVar7,(long)iVar1);
  if (pvVar7 == (void *)0x0) {
    uVar6 = 1;
  }
  else {
    piVar3 = (int *)((long)pvVar7 + (long)*param_2);
    *piVar3 = iVar2;
    if (param_3 != (char *)0x0) {
      memcpy(piVar3 + 1,param_3,(long)iVar9);
      *(undefined1 *)((long)(piVar3 + 1) + ((long)iVar9 - 1U)) = 0x3d;
    }
    memcpy((void *)((long)piVar3 + (long)iVar9 + 4),param_4,(long)(int)sVar5);
    uVar6 = 0;
    *param_2 = iVar1;
    iVar4 = iVar4 + 1;
    *(char *)((long)pvVar7 + uVar8 + 0xf) = (char)((uint)iVar4 >> 0x18);
    *(char *)((long)pvVar7 + uVar8 + 0xc) = (char)iVar4;
    *(char *)((long)pvVar7 + uVar8 + 0xe) = (char)((uint)iVar4 >> 0x10);
    *param_1 = pvVar7;
    *(char *)((long)pvVar7 + uVar8 + 0xd) = (char)((uint)iVar4 >> 8);
  }
  return uVar6;
}


// ===== 00554708  FUN_00554708 =====

void FUN_00554708(undefined8 *param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  
  if (0 < param_3) {
    iVar3 = *param_2;
    iVar1 = param_3 + iVar3 + 0xff;
    uVar2 = iVar1 % 0xff;
    iVar1 = iVar1 + ~uVar2;
    pvVar5 = realloc((void *)*param_1,(long)iVar1);
    if (pvVar5 != (void *)0x0) {
      iVar4 = *param_2;
      if (iVar4 < iVar1) {
        memset((void *)((long)pvVar5 + (long)iVar4),0,
               (ulong)((((iVar3 + param_3) - iVar4) - uVar2) + 0xfd) + 1);
      }
      *param_1 = pvVar5;
      *param_2 = iVar1;
    }
  }
  return;
}


// ===== 005547cc  FUN_005547cc =====

undefined8
FUN_005547cc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,undefined8 param_10)

{
  long lVar1;
  undefined4 local_1e4;
  undefined8 local_1e0;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined1 auStack_1b0 [64];
  undefined1 auStack_170 [264];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_1e4 = 0;
  FUN_00554be4(auStack_1d8,param_9,param_10,0);
  local_1e0 = *(undefined8 *)(param_9 + 0x10);
  thunk_FUN_00555c30(auStack_1b0,0x40,&local_1e4,auStack_1d8);
  thunk_FUN_0055532c(auStack_170,auStack_1b0);
  FUN_00556994(auStack_1b0,0x40);
  thunk_FUN_005553c0(auStack_170,param_6,param_7);
  thunk_FUN_005553c0(auStack_170,&DAT_001fa090,-(int)param_7 & 0xf);
  thunk_FUN_00555d6c(param_1,param_4,param_5,&local_1e4,1,auStack_1d8);
  thunk_FUN_005553c0(auStack_170,param_1,param_5);
  thunk_FUN_005553c0(auStack_170,&DAT_001fa090,-(int)param_5 & 0xf);
  local_1b8 = param_7;
  thunk_FUN_005553c0(auStack_170,&local_1b8,8);
  local_1b8 = param_5;
  thunk_FUN_005553c0(auStack_170,&local_1b8,8);
  thunk_FUN_005553d8(auStack_170,param_2);
  FUN_00556994(auStack_170,0x100);
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0x10;
  }
  FUN_00556994(auStack_1d8,0x20);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0055495c  FUN_0055495c =====

undefined8
FUN_0055495c(long param_1,long *param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  if (param_4 < 0xfffffffffffffff0) {
    FUN_005547cc(param_1,param_1 + param_4,0,param_3,param_4,param_5,param_6,param_8,param_8,param_9
                );
    if (param_2 != (long *)0x0) {
      *param_2 = param_4 + 0x10;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_005568f0();
}


// ===== 005549c4  FUN_005549c4 =====

int FUN_005549c4(void *param_1,undefined8 param_2,undefined8 param_3,size_t param_4,
                undefined8 param_5,undefined8 param_6,size_t param_7,long param_8,undefined8 param_9
                )

{
  long lVar1;
  int iVar2;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined1 auStack_1e8 [32];
  undefined1 auStack_1c8 [16];
  size_t local_1b8;
  undefined1 auStack_1b0 [64];
  undefined1 auStack_170 [264];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_1f4 = 0;
  FUN_00554be4(auStack_1e8,param_8,param_9,0);
  local_1f0 = *(undefined8 *)(param_8 + 0x10);
  thunk_FUN_00555c30(auStack_1b0,0x40,&local_1f4,auStack_1e8);
  thunk_FUN_0055532c(auStack_170,auStack_1b0);
  FUN_00556994(auStack_1b0,0x40);
  thunk_FUN_005553c0(auStack_170,param_6,param_7);
  thunk_FUN_005553c0(auStack_170,&DAT_001fa090,-(int)param_7 & 0xf);
  thunk_FUN_005553c0(auStack_170,param_3,param_4);
  thunk_FUN_005553c0(auStack_170,&DAT_001fa090,-(int)param_4 & 0xf);
  local_1b8 = param_7;
  thunk_FUN_005553c0(auStack_170,&local_1b8,8);
  local_1b8 = param_4;
  thunk_FUN_005553c0(auStack_170,&local_1b8,8);
  thunk_FUN_005553d8(auStack_170,auStack_1c8);
  FUN_00556994(auStack_170,0x100);
  iVar2 = FUN_00556138(auStack_1c8,param_5);
  FUN_00556994(auStack_1c8,0x10);
  if (param_1 != (void *)0x0) {
    if (iVar2 == 0) {
      thunk_FUN_00555d6c(param_1,param_3,param_4,&local_1f4,1,auStack_1e8);
    }
    else {
      memset(param_1,0,param_4);
      iVar2 = -1;
    }
  }
  FUN_00556994(auStack_1e8,0x20);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00554b84  FUN_00554b84 =====

void FUN_00554b84(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,ulong param_5)

{
  long lVar1;
  int iVar2;
  
  lVar1 = param_5 - 0x10;
  if (param_5 < 0x10) {
    iVar2 = -1;
  }
  else {
    iVar2 = FUN_005549c4(param_1,param_2,param_4,lVar1,lVar1 + param_4);
  }
  if (param_2 != (long *)0x0) {
    if (iVar2 != 0) {
      lVar1 = 0;
    }
    *param_2 = lVar1;
  }
  return;
}


// ===== 00554be4  FUN_00554be4 =====

undefined8
FUN_00554be4(char *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],char *param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar5;
  undefined8 uVar4;
  int iVar6;
  int iVar8;
  undefined8 uVar7;
  int iVar9;
  int iVar11;
  int iVar12;
  undefined1 auVar10 [16];
  int iVar13;
  uint uVar14;
  undefined1 auVar17 [12];
  byte bVar32;
  uint uVar30;
  undefined1 auVar21 [16];
  int iVar15;
  int iVar31;
  int iVar33;
  int iVar34;
  undefined1 auVar22 [16];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  byte bVar35;
  undefined1 auVar36 [12];
  byte bVar54;
  byte bVar56;
  undefined1 auVar37 [12];
  undefined1 auVar38 [12];
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar55;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  byte bVar64;
  byte bVar66;
  byte bVar67;
  undefined1 auVar65 [16];
  undefined1 auVar16 [12];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  byte bVar29;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  
  uVar4 = s_expand_32_byte_k_001f3b20._0_8_;
  uVar7 = s_expand_32_byte_k_001f3b20._8_8_;
  if (param_4 != (char *)0x0) {
    uVar4 = *(undefined8 *)param_4;
    uVar7 = *(undefined8 *)(param_4 + 8);
  }
  auVar21 = *param_3;
  iVar2 = 10;
  auVar10 = NEON_ext(param_3[1],param_3[1],8,1);
  auVar65 = *param_2;
  do {
    iVar3 = auVar21._0_4_ + (int)uVar4;
    iVar5 = auVar21._4_4_ + SUB84(uVar4,4);
    iVar6 = auVar21._8_4_ + (int)uVar7;
    iVar8 = auVar21._12_4_ + SUB84(uVar7,4);
    iVar2 = iVar2 + -1;
    auVar10 = NEON_ext(auVar10,auVar10,0xc,1);
    bVar35 = auVar65[0] ^ (byte)iVar3;
    bVar44 = auVar65[1] ^ (byte)((uint)iVar3 >> 8);
    bVar45 = auVar65[2] ^ (byte)((uint)iVar3 >> 0x10);
    bVar46 = auVar65[3] ^ (byte)((uint)iVar3 >> 0x18);
    bVar47 = auVar65[4] ^ (byte)iVar5;
    bVar48 = auVar65[5] ^ (byte)((uint)iVar5 >> 8);
    bVar49 = auVar65[6] ^ (byte)((uint)iVar5 >> 0x10);
    bVar50 = auVar65[7] ^ (byte)((uint)iVar5 >> 0x18);
    bVar51 = auVar65[8] ^ (byte)iVar6;
    bVar52 = auVar65[9] ^ (byte)((uint)iVar6 >> 8);
    bVar53 = auVar65[10] ^ (byte)((uint)iVar6 >> 0x10);
    bVar55 = auVar65[0xb] ^ (byte)((uint)iVar6 >> 0x18);
    bVar57 = auVar65[0xc] ^ (byte)iVar8;
    bVar59 = auVar65[0xd] ^ (byte)((uint)iVar8 >> 8);
    bVar61 = auVar65[0xe] ^ (byte)((uint)iVar8 >> 0x10);
    bVar63 = auVar65[0xf] ^ (byte)((uint)iVar8 >> 0x18);
    auVar21 = NEON_ext(auVar21,auVar21,4,1);
    auVar39[1] = bVar46;
    auVar39[0] = bVar45;
    auVar39[2] = bVar35;
    auVar39[3] = bVar44;
    auVar39[4] = bVar49;
    auVar39[5] = bVar50;
    auVar39[6] = bVar47;
    auVar39[7] = bVar48;
    auVar39[8] = bVar53;
    auVar39[9] = bVar55;
    auVar39[10] = bVar51;
    auVar39[0xb] = bVar52;
    auVar39[0xc] = bVar61;
    auVar39[0xd] = bVar63;
    auVar39[0xe] = bVar57;
    auVar39[0xf] = bVar59;
    auVar65 = NEON_ext(auVar39,auVar39,4,1);
    iVar9 = auVar65._0_4_ + auVar10._0_4_;
    iVar11 = auVar65._4_4_ + auVar10._4_4_;
    iVar12 = auVar65._8_4_ + auVar10._8_4_;
    iVar13 = auVar65._12_4_ + auVar10._12_4_;
    bVar29 = (byte)((uint)iVar9 >> 0x18) ^ auVar21[3];
    uVar14 = CONCAT13(bVar29,CONCAT12((byte)((uint)iVar9 >> 0x10) ^ auVar21[2],
                                      CONCAT11((byte)((uint)iVar9 >> 8) ^ auVar21[1],
                                               (byte)iVar9 ^ auVar21[0])));
    bVar32 = (byte)((uint)iVar11 >> 0x18) ^ auVar21[7];
    auVar16._0_8_ =
         CONCAT17(bVar32,CONCAT16((byte)((uint)iVar11 >> 0x10) ^ auVar21[6],
                                  CONCAT15((byte)((uint)iVar11 >> 8) ^ auVar21[5],
                                           CONCAT14((byte)iVar11 ^ auVar21[4],uVar14))));
    auVar16[8] = (byte)iVar12 ^ auVar21[8];
    auVar16[9] = (byte)((uint)iVar12 >> 8) ^ auVar21[9];
    auVar16[10] = (byte)((uint)iVar12 >> 0x10) ^ auVar21[10];
    auVar16[0xb] = (byte)((uint)iVar12 >> 0x18) ^ auVar21[0xb];
    auVar28[0xc] = (byte)iVar13 ^ auVar21[0xc];
    auVar28._0_12_ = auVar16;
    auVar28[0xd] = (byte)((uint)iVar13 >> 8) ^ auVar21[0xd];
    auVar28[0xe] = (byte)((uint)iVar13 >> 0x10) ^ auVar21[0xe];
    auVar28[0xf] = (byte)((uint)iVar13 >> 0x18) ^ auVar21[0xf];
    uVar30 = (uint)((ulong)auVar16._0_8_ >> 0x20);
    iVar15 = uVar14 << 0xc;
    iVar31 = uVar30 << 0xc;
    iVar33 = auVar16._8_4_ << 0xc;
    iVar34 = auVar28._12_4_ << 0xc;
    bVar54 = (byte)(uVar14 >> 0x14);
    auVar22[1] = (byte)((uint)iVar15 >> 8) | bVar29 >> 4;
    auVar22[0] = bVar54;
    auVar22[2] = (byte)((uint)iVar15 >> 0x10);
    auVar22[3] = (byte)((uint)iVar15 >> 0x18);
    bVar56 = (byte)(uVar30 >> 0x14);
    auVar22[4] = bVar56;
    auVar22[5] = (byte)((uint)iVar31 >> 8) | bVar32 >> 4;
    auVar22[6] = (byte)((uint)iVar31 >> 0x10);
    auVar22[7] = (byte)((uint)iVar31 >> 0x18);
    bVar32 = (byte)(auVar16._8_4_ >> 0x14);
    auVar22[8] = bVar32;
    auVar22[9] = (byte)((uint)iVar33 >> 8) | auVar16[0xb] >> 4;
    auVar22[10] = (byte)((uint)iVar33 >> 0x10);
    auVar22[0xb] = (byte)((uint)iVar33 >> 0x18);
    bVar58 = (byte)(auVar28._12_4_ >> 0x14);
    auVar22[0xc] = bVar58;
    auVar22[0xd] = (byte)((uint)iVar34 >> 8) | auVar28[0xf] >> 4;
    auVar22[0xe] = (byte)((uint)iVar34 >> 0x10);
    auVar22[0xf] = (byte)((uint)iVar34 >> 0x18);
    auVar21 = NEON_ext(auVar22,auVar22,0xc,1);
    iVar3 = auVar21._0_4_ + iVar3;
    iVar5 = auVar21._4_4_ + iVar5;
    iVar6 = auVar21._8_4_ + iVar6;
    iVar8 = auVar21._12_4_ + iVar8;
    auVar40[0] = (byte)iVar3 ^ bVar45;
    auVar40[1] = (byte)((uint)iVar3 >> 8) ^ bVar46;
    auVar40[2] = (byte)((uint)iVar3 >> 0x10) ^ bVar35;
    auVar40[3] = (byte)((uint)iVar3 >> 0x18) ^ bVar44;
    auVar40[4] = (byte)iVar5 ^ bVar49;
    auVar40[5] = (byte)((uint)iVar5 >> 8) ^ bVar50;
    auVar40[6] = (byte)((uint)iVar5 >> 0x10) ^ bVar47;
    auVar40[7] = (byte)((uint)iVar5 >> 0x18) ^ bVar48;
    auVar40[8] = (byte)iVar6 ^ bVar53;
    auVar40[9] = (byte)((uint)iVar6 >> 8) ^ bVar55;
    auVar40[10] = (byte)((uint)iVar6 >> 0x10) ^ bVar51;
    auVar40[0xb] = (byte)((uint)iVar6 >> 0x18) ^ bVar52;
    auVar40[0xc] = (byte)iVar8 ^ bVar61;
    auVar40[0xd] = (byte)((uint)iVar8 >> 8) ^ bVar63;
    auVar40[0xe] = (byte)((uint)iVar8 >> 0x10) ^ bVar57;
    auVar40[0xf] = (byte)((uint)iVar8 >> 0x18) ^ bVar59;
    auVar21 = NEON_ext(auVar40,auVar40,4,1);
    iVar15 = CONCAT13(auVar21[2],CONCAT12(auVar21[1],CONCAT11(auVar21[0],auVar21[3])));
    uVar4 = CONCAT17(auVar21[6],
                     CONCAT16(auVar21[5],CONCAT15(auVar21[4],CONCAT14(auVar21[7],iVar15))));
    auVar36[8] = auVar21[0xb];
    auVar36._0_8_ = uVar4;
    auVar36[9] = auVar21[8];
    auVar36[10] = auVar21[9];
    auVar36[0xb] = auVar21[10];
    auVar41[0xc] = auVar21[0xf];
    auVar41._0_12_ = auVar36;
    auVar41[0xd] = auVar21[0xc];
    auVar41[0xe] = auVar21[0xd];
    auVar41[0xf] = auVar21[0xe];
    auVar65._0_4_ = iVar15 + iVar9;
    auVar65._4_4_ = (int)((ulong)uVar4 >> 0x20) + iVar11;
    auVar65._8_4_ = auVar36._8_4_ + iVar12;
    auVar65._12_4_ = auVar41._12_4_ + iVar13;
    auVar10 = NEON_ext(auVar41,auVar41,8,1);
    bVar29 = (byte)((uint)auVar65._0_4_ >> 0x18) ^ auVar22[3];
    iVar15 = CONCAT13(bVar29,CONCAT12((byte)((uint)auVar65._0_4_ >> 0x10) ^ auVar22[2],
                                      CONCAT11((byte)((uint)auVar65._0_4_ >> 8) ^ auVar22[1],
                                               (byte)auVar65._0_4_ ^ bVar54)));
    bVar45 = (byte)((uint)auVar65._4_4_ >> 0x18) ^ auVar22[7];
    auVar17._0_8_ =
         CONCAT17(bVar45,CONCAT16((byte)((uint)auVar65._4_4_ >> 0x10) ^ auVar22[6],
                                  CONCAT15((byte)((uint)auVar65._4_4_ >> 8) ^ auVar22[5],
                                           CONCAT14((byte)auVar65._4_4_ ^ bVar56,iVar15))));
    auVar17[8] = (byte)auVar65._8_4_ ^ bVar32;
    auVar17[9] = (byte)((uint)auVar65._8_4_ >> 8) ^ auVar22[9];
    auVar17[10] = (byte)((uint)auVar65._8_4_ >> 0x10) ^ auVar22[10];
    auVar17[0xb] = (byte)((uint)auVar65._8_4_ >> 0x18) ^ auVar22[0xb];
    auVar23[0xc] = (byte)auVar65._12_4_ ^ bVar58;
    auVar23._0_12_ = auVar17;
    auVar23[0xd] = (byte)((uint)auVar65._12_4_ >> 8) ^ auVar22[0xd];
    auVar23[0xe] = (byte)((uint)auVar65._12_4_ >> 0x10) ^ auVar22[0xe];
    auVar23[0xf] = (byte)((uint)auVar65._12_4_ >> 0x18) ^ auVar22[0xf];
    iVar15 = iVar15 << 7;
    iVar9 = (int)((ulong)auVar17._0_8_ >> 0x20) << 7;
    iVar11 = auVar17._8_4_ << 7;
    iVar12 = auVar23._12_4_ << 7;
    auVar21 = NEON_ext(auVar65,auVar65,4,1);
    bVar29 = (byte)iVar15 | bVar29 >> 1;
    bVar32 = (byte)((uint)iVar15 >> 8);
    bVar35 = (byte)((uint)iVar15 >> 0x10);
    bVar44 = (byte)((uint)iVar15 >> 0x18);
    iVar15 = CONCAT13(bVar44,CONCAT12(bVar35,CONCAT11(bVar32,bVar29)));
    bVar45 = (byte)iVar9 | bVar45 >> 1;
    bVar46 = (byte)((uint)iVar9 >> 8);
    bVar47 = (byte)((uint)iVar9 >> 0x10);
    bVar48 = (byte)((uint)iVar9 >> 0x18);
    uVar4 = CONCAT17(bVar48,CONCAT16(bVar47,CONCAT15(bVar46,CONCAT14(bVar45,iVar15))));
    auVar18[8] = (byte)iVar11 | auVar17[0xb] >> 1;
    auVar18._0_8_ = uVar4;
    auVar18[9] = (byte)((uint)iVar11 >> 8);
    auVar18[10] = (byte)((uint)iVar11 >> 0x10);
    auVar18[0xb] = (byte)((uint)iVar11 >> 0x18);
    auVar24[0xc] = (byte)iVar12 | auVar23[0xf] >> 1;
    auVar24._0_12_ = auVar18;
    auVar24[0xd] = (byte)((uint)iVar12 >> 8);
    auVar24[0xe] = (byte)((uint)iVar12 >> 0x10);
    auVar24[0xf] = (byte)((uint)iVar12 >> 0x18);
    iVar15 = iVar15 + iVar3;
    iVar5 = (int)((ulong)uVar4 >> 0x20) + iVar5;
    iVar6 = auVar18._8_4_ + iVar6;
    iVar8 = auVar24._12_4_ + iVar8;
    bVar49 = (byte)iVar15 ^ auVar10[0];
    bVar50 = (byte)((uint)iVar15 >> 8) ^ auVar10[1];
    bVar51 = (byte)((uint)iVar15 >> 0x10) ^ auVar10[2];
    bVar52 = (byte)((uint)iVar15 >> 0x18) ^ auVar10[3];
    bVar53 = (byte)iVar5 ^ auVar10[4];
    bVar55 = (byte)((uint)iVar5 >> 8) ^ auVar10[5];
    bVar57 = (byte)((uint)iVar5 >> 0x10) ^ auVar10[6];
    bVar59 = (byte)((uint)iVar5 >> 0x18) ^ auVar10[7];
    bVar61 = (byte)iVar6 ^ auVar10[8];
    bVar63 = (byte)((uint)iVar6 >> 8) ^ auVar10[9];
    bVar54 = (byte)((uint)iVar6 >> 0x10) ^ auVar10[10];
    bVar56 = (byte)((uint)iVar6 >> 0x18) ^ auVar10[0xb];
    bVar58 = (byte)iVar8 ^ auVar10[0xc];
    bVar60 = (byte)((uint)iVar8 >> 8) ^ auVar10[0xd];
    bVar62 = (byte)((uint)iVar8 >> 0x10) ^ auVar10[0xe];
    bVar64 = (byte)((uint)iVar8 >> 0x18) ^ auVar10[0xf];
    iVar3 = CONCAT13(bVar50,CONCAT12(bVar49,CONCAT11(bVar52,bVar51)));
    uVar4 = CONCAT17(bVar55,CONCAT16(bVar53,CONCAT15(bVar59,CONCAT14(bVar57,iVar3))));
    auVar37[8] = bVar54;
    auVar37._0_8_ = uVar4;
    auVar37[9] = bVar56;
    auVar37[10] = bVar61;
    auVar37[0xb] = bVar63;
    auVar42[0xc] = bVar62;
    auVar42._0_12_ = auVar37;
    auVar42[0xd] = bVar64;
    auVar42[0xe] = bVar58;
    auVar42[0xf] = bVar60;
    iVar3 = iVar3 + auVar21._0_4_;
    iVar11 = (int)((ulong)uVar4 >> 0x20) + auVar21._4_4_;
    iVar12 = auVar37._8_4_ + auVar21._8_4_;
    iVar13 = auVar42._12_4_ + auVar21._12_4_;
    bVar44 = (byte)((uint)iVar3 >> 0x18) ^ bVar44;
    uVar14 = CONCAT13(bVar44,CONCAT12((byte)((uint)iVar3 >> 0x10) ^ bVar35,
                                      CONCAT11((byte)((uint)iVar3 >> 8) ^ bVar32,
                                               (byte)iVar3 ^ bVar29)));
    bVar48 = (byte)((uint)iVar11 >> 0x18) ^ bVar48;
    auVar19._0_8_ =
         CONCAT17(bVar48,CONCAT16((byte)((uint)iVar11 >> 0x10) ^ bVar47,
                                  CONCAT15((byte)((uint)iVar11 >> 8) ^ bVar46,
                                           CONCAT14((byte)iVar11 ^ bVar45,uVar14))));
    auVar19[8] = (byte)iVar12 ^ auVar18[8];
    auVar19[9] = (byte)((uint)iVar12 >> 8) ^ auVar18[9];
    auVar19[10] = (byte)((uint)iVar12 >> 0x10) ^ auVar18[10];
    auVar19[0xb] = (byte)((uint)iVar12 >> 0x18) ^ auVar18[0xb];
    auVar25[0xc] = (byte)iVar13 ^ auVar24[0xc];
    auVar25._0_12_ = auVar19;
    auVar25[0xd] = (byte)((uint)iVar13 >> 8) ^ auVar24[0xd];
    auVar25[0xe] = (byte)((uint)iVar13 >> 0x10) ^ auVar24[0xe];
    auVar25[0xf] = (byte)((uint)iVar13 >> 0x18) ^ auVar24[0xf];
    uVar30 = (uint)((ulong)auVar19._0_8_ >> 0x20);
    iVar9 = uVar14 << 0xc;
    iVar31 = uVar30 << 0xc;
    iVar33 = auVar19._8_4_ << 0xc;
    iVar34 = auVar25._12_4_ << 0xc;
    bVar47 = (byte)(uVar14 >> 0x14);
    bVar29 = (byte)((uint)iVar9 >> 8) | bVar44 >> 4;
    bVar32 = (byte)((uint)iVar9 >> 0x10);
    bVar35 = (byte)((uint)iVar9 >> 0x18);
    iVar9 = CONCAT13(bVar35,CONCAT12(bVar32,CONCAT11(bVar29,bVar47)));
    bVar66 = (byte)(uVar30 >> 0x14);
    bVar44 = (byte)((uint)iVar31 >> 8) | bVar48 >> 4;
    bVar45 = (byte)((uint)iVar31 >> 0x10);
    bVar46 = (byte)((uint)iVar31 >> 0x18);
    uVar7 = CONCAT17(bVar46,CONCAT16(bVar45,CONCAT15(bVar44,CONCAT14(bVar66,iVar9))));
    bVar48 = (byte)(auVar19._8_4_ >> 0x14);
    auVar20[8] = bVar48;
    auVar20._0_8_ = uVar7;
    auVar20[9] = (byte)((uint)iVar33 >> 8) | auVar19[0xb] >> 4;
    auVar20[10] = (byte)((uint)iVar33 >> 0x10);
    auVar20[0xb] = (byte)((uint)iVar33 >> 0x18);
    bVar67 = (byte)(auVar25._12_4_ >> 0x14);
    auVar26[0xc] = bVar67;
    auVar26._0_12_ = auVar20;
    auVar26[0xd] = (byte)((uint)iVar34 >> 8) | auVar25[0xf] >> 4;
    auVar26[0xe] = (byte)((uint)iVar34 >> 0x10);
    auVar26[0xf] = (byte)((uint)iVar34 >> 0x18);
    uVar4._0_4_ = iVar9 + iVar15;
    uVar4._4_4_ = (int)((ulong)uVar7 >> 0x20) + iVar5;
    uVar7._0_4_ = auVar20._8_4_ + iVar6;
    uVar7._4_4_ = auVar26._12_4_ + iVar8;
    iVar15 = CONCAT13((byte)((uint)(int)uVar4 >> 0x10) ^ bVar49,
                      CONCAT12((byte)((uint)(int)uVar4 >> 8) ^ bVar52,
                               CONCAT11((byte)(int)uVar4 ^ bVar51,
                                        (byte)((uint)(int)uVar4 >> 0x18) ^ bVar50)));
    uVar1 = CONCAT17((byte)((uint)uVar4._4_4_ >> 0x10) ^ bVar53,
                     CONCAT16((byte)((uint)uVar4._4_4_ >> 8) ^ bVar59,
                              CONCAT15((byte)uVar4._4_4_ ^ bVar57,
                                       CONCAT14((byte)((uint)uVar4._4_4_ >> 0x18) ^ bVar55,iVar15)))
                    );
    auVar38[8] = (byte)((uint)(int)uVar7 >> 0x18) ^ bVar63;
    auVar38._0_8_ = uVar1;
    auVar38[9] = (byte)(int)uVar7 ^ bVar54;
    auVar38[10] = (byte)((uint)(int)uVar7 >> 8) ^ bVar56;
    auVar38[0xb] = (byte)((uint)(int)uVar7 >> 0x10) ^ bVar61;
    auVar43[0xc] = (byte)((uint)uVar7._4_4_ >> 0x18) ^ bVar60;
    auVar43._0_12_ = auVar38;
    auVar43[0xd] = (byte)uVar7._4_4_ ^ bVar62;
    auVar43[0xe] = (byte)((uint)uVar7._4_4_ >> 8) ^ bVar64;
    auVar43[0xf] = (byte)((uint)uVar7._4_4_ >> 0x10) ^ bVar58;
    auVar10._0_4_ = iVar15 + iVar3;
    auVar10._4_4_ = (int)((ulong)uVar1 >> 0x20) + iVar11;
    auVar10._8_4_ = auVar38._8_4_ + iVar12;
    auVar10._12_4_ = auVar43._12_4_ + iVar13;
    auVar65 = NEON_ext(auVar43,auVar43,4,1);
    auVar27[0] = (byte)auVar10._0_4_ ^ bVar47;
    auVar27[1] = (byte)((uint)auVar10._0_4_ >> 8) ^ bVar29;
    auVar27[2] = (byte)((uint)auVar10._0_4_ >> 0x10) ^ bVar32;
    auVar27[3] = (byte)((uint)auVar10._0_4_ >> 0x18) ^ bVar35;
    auVar27[4] = (byte)auVar10._4_4_ ^ bVar66;
    auVar27[5] = (byte)((uint)auVar10._4_4_ >> 8) ^ bVar44;
    auVar27[6] = (byte)((uint)auVar10._4_4_ >> 0x10) ^ bVar45;
    auVar27[7] = (byte)((uint)auVar10._4_4_ >> 0x18) ^ bVar46;
    auVar27[8] = (byte)auVar10._8_4_ ^ bVar48;
    auVar27[9] = (byte)((uint)auVar10._8_4_ >> 8) ^ auVar20[9];
    auVar27[10] = (byte)((uint)auVar10._8_4_ >> 0x10) ^ auVar20[10];
    auVar27[0xb] = (byte)((uint)auVar10._8_4_ >> 0x18) ^ auVar20[0xb];
    auVar27[0xc] = (byte)auVar10._12_4_ ^ bVar67;
    auVar27[0xd] = (byte)((uint)auVar10._12_4_ >> 8) ^ auVar26[0xd];
    auVar27[0xe] = (byte)((uint)auVar10._12_4_ >> 0x10) ^ auVar26[0xe];
    auVar27[0xf] = (byte)((uint)auVar10._12_4_ >> 0x18) ^ auVar26[0xf];
    auVar28 = NEON_ext(auVar27,auVar27,0xc,1);
    iVar15 = auVar28._0_4_ << 7;
    iVar3 = auVar28._4_4_ << 7;
    iVar9 = auVar28._8_4_ << 7;
    iVar5 = auVar28._12_4_ << 7;
    auVar21[0] = (byte)iVar15 | auVar28[3] >> 1;
    auVar21[1] = (undefined1)((uint)iVar15 >> 8);
    auVar21[2] = (undefined1)((uint)iVar15 >> 0x10);
    auVar21[3] = (undefined1)((uint)iVar15 >> 0x18);
    auVar21[4] = (byte)iVar3 | auVar28[7] >> 1;
    auVar21[5] = (undefined1)((uint)iVar3 >> 8);
    auVar21[6] = (undefined1)((uint)iVar3 >> 0x10);
    auVar21[7] = (undefined1)((uint)iVar3 >> 0x18);
    auVar21[8] = (byte)iVar9 | auVar28[0xb] >> 1;
    auVar21[9] = (undefined1)((uint)iVar9 >> 8);
    auVar21[10] = (undefined1)((uint)iVar9 >> 0x10);
    auVar21[0xb] = (undefined1)((uint)iVar9 >> 0x18);
    auVar21[0xc] = (byte)iVar5 | auVar28[0xf] >> 1;
    auVar21[0xd] = (undefined1)((uint)iVar5 >> 8);
    auVar21[0xe] = (undefined1)((uint)iVar5 >> 0x10);
    auVar21[0xf] = (undefined1)((uint)iVar5 >> 0x18);
  } while (iVar2 != 0);
  *(undefined8 *)(param_1 + 8) = uVar7;
  *(undefined8 *)param_1 = uVar4;
  *(long *)(param_1 + 0x18) = auVar65._8_8_;
  *(long *)(param_1 + 0x10) = auVar65._0_8_;
  return 0;
}


// ===== 00554ce4  FUN_00554ce4 =====

undefined8
FUN_00554ce4(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined1 auVar4 [16];
  byte bVar12;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  undefined8 uVar13;
  undefined8 uVar21;
  undefined8 uVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
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
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  undefined8 uVar50;
  byte bVar57;
  int iVar58;
  int iVar59;
  undefined8 uVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  undefined8 uVar67;
  int iVar68;
  int iVar69;
  uint uVar70;
  undefined8 uVar71;
  uint uVar72;
  uint uVar73;
  undefined8 uVar74;
  uint uVar75;
  
  uVar13 = DAT_001f5690;
  auVar4._0_8_ = DAT_001f5a00;
  if (param_4 != (undefined4 *)0x0) {
    uVar13 = *(undefined8 *)(param_4 + 1);
    auVar4._0_8_ = CONCAT44(*param_4,param_4[3]);
  }
  uVar22 = *(undefined8 *)(param_3 + 4);
  uVar21 = CONCAT44(*param_2,*param_3);
  iVar40 = param_3[6];
  uVar1 = param_3[7];
  bVar31 = (byte)uVar1;
  bVar32 = (byte)((uint)uVar1 >> 8);
  bVar33 = (byte)((uint)uVar1 >> 0x10);
  bVar34 = (byte)((uint)uVar1 >> 0x18);
  uVar1 = param_3[3];
  bVar23 = (byte)uVar1;
  bVar24 = (byte)((uint)uVar1 >> 8);
  bVar25 = (byte)((uint)uVar1 >> 0x10);
  bVar26 = (byte)((uint)uVar1 >> 0x18);
  uVar50 = *(undefined8 *)(param_2 + 1);
  iVar45 = param_3[1];
  uVar1 = param_2[3];
  bVar27 = (byte)uVar1;
  bVar28 = (byte)((uint)uVar1 >> 8);
  bVar29 = (byte)((uint)uVar1 >> 0x10);
  bVar30 = (byte)((uint)uVar1 >> 0x18);
  uVar2 = 0x16;
  uVar1 = param_3[2];
  bVar35 = (byte)uVar1;
  bVar36 = (byte)((uint)uVar1 >> 8);
  bVar37 = (byte)((uint)uVar1 >> 0x10);
  bVar38 = (byte)((uint)uVar1 >> 0x18);
  do {
    uVar60 = NEON_ext(auVar4._0_8_,uVar13,4,1);
    uVar67 = NEON_ext(uVar22,uVar21,4,1);
    uVar71 = NEON_ext(uVar13,auVar4._0_8_,4,1);
    uVar74 = NEON_ext(uVar21,uVar22,4,1);
    uVar2 = uVar2 - 2;
    iVar58 = (int)uVar60 + (int)uVar67;
    iVar61 = (int)((ulong)uVar60 >> 0x20) + (int)((ulong)uVar67 >> 0x20);
    iVar65 = (int)uVar71 + (int)uVar74;
    iVar68 = (int)((ulong)uVar71 >> 0x20) + (int)((ulong)uVar74 >> 0x20);
    iVar59 = iVar58 * 0x80;
    iVar62 = iVar61 * 0x80;
    iVar66 = iVar65 * 0x80;
    iVar69 = iVar68 * 0x80;
    bVar23 = ((byte)iVar59 | (byte)((uint)iVar58 >> 0x19)) ^ bVar23;
    bVar24 = (byte)((uint)iVar59 >> 8) ^ bVar24;
    bVar25 = (byte)((uint)iVar59 >> 0x10) ^ bVar25;
    bVar26 = (byte)((uint)iVar59 >> 0x18) ^ bVar26;
    bVar27 = ((byte)iVar62 | (byte)((uint)iVar61 >> 0x19)) ^ bVar27;
    bVar28 = (byte)((uint)iVar62 >> 8) ^ bVar28;
    bVar29 = (byte)((uint)iVar62 >> 0x10) ^ bVar29;
    bVar30 = (byte)((uint)iVar62 >> 0x18) ^ bVar30;
    bVar31 = bVar31 ^ ((byte)iVar66 | (byte)((uint)iVar65 >> 0x19));
    bVar32 = bVar32 ^ (byte)((uint)iVar66 >> 8);
    bVar33 = bVar33 ^ (byte)((uint)iVar66 >> 0x10);
    bVar34 = bVar34 ^ (byte)((uint)iVar66 >> 0x18);
    bVar35 = bVar35 ^ ((byte)iVar69 | (byte)((uint)iVar68 >> 0x19));
    bVar36 = bVar36 ^ (byte)((uint)iVar69 >> 8);
    bVar37 = bVar37 ^ (byte)((uint)iVar69 >> 0x10);
    bVar38 = bVar38 ^ (byte)((uint)iVar69 >> 0x18);
    uVar60 = NEON_ext(CONCAT17(bVar38,CONCAT16(bVar37,CONCAT15(bVar36,CONCAT14(bVar35,CONCAT13(
                                                  bVar34,CONCAT12(bVar33,CONCAT11(bVar32,bVar31)))))
                                              )),
                      CONCAT17(bVar30,CONCAT16(bVar29,CONCAT15(bVar28,CONCAT14(bVar27,CONCAT13(
                                                  bVar26,CONCAT12(bVar25,CONCAT11(bVar24,bVar23)))))
                                              )),4,1);
    uVar67 = NEON_ext(CONCAT17(bVar30,CONCAT16(bVar29,CONCAT15(bVar28,CONCAT14(bVar27,CONCAT13(
                                                  bVar26,CONCAT12(bVar25,CONCAT11(bVar24,bVar23)))))
                                              )),
                      CONCAT17(bVar38,CONCAT16(bVar37,CONCAT15(bVar36,CONCAT14(bVar35,CONCAT13(
                                                  bVar34,CONCAT12(bVar33,CONCAT11(bVar32,bVar31)))))
                                              )),4,1);
    uVar70 = (int)uVar60 + (int)auVar4._0_8_;
    iVar65 = (int)((ulong)uVar60 >> 0x20);
    uVar72 = iVar65 + (int)((ulong)auVar4._0_8_ >> 0x20);
    uVar73 = (int)uVar67 + (int)uVar13;
    iVar66 = (int)((ulong)uVar67 >> 0x20);
    uVar75 = iVar66 + (int)((ulong)uVar13 >> 0x20);
    iVar58 = uVar70 * 0x200;
    iVar59 = uVar72 * 0x200;
    iVar62 = uVar73 * 0x200;
    iVar68 = uVar75 * 0x200;
    bVar49 = (byte)(uVar70 >> 0x17) ^ (byte)uVar50;
    bVar51 = ((byte)((uint)iVar58 >> 8) | (byte)(uVar70 >> 0x1f)) ^ (byte)((ulong)uVar50 >> 8);
    bVar52 = (byte)((uint)iVar58 >> 0x10) ^ (byte)((ulong)uVar50 >> 0x10);
    bVar53 = (byte)((uint)iVar58 >> 0x18) ^ (byte)((ulong)uVar50 >> 0x18);
    iVar61 = CONCAT13(bVar53,CONCAT12(bVar52,CONCAT11(bVar51,bVar49)));
    bVar54 = (byte)(uVar72 >> 0x17) ^ (byte)((ulong)uVar50 >> 0x20);
    bVar55 = ((byte)((uint)iVar59 >> 8) | (byte)(uVar72 >> 0x1f)) ^ (byte)((ulong)uVar50 >> 0x28);
    bVar56 = (byte)((uint)iVar59 >> 0x10) ^ (byte)((ulong)uVar50 >> 0x30);
    bVar57 = (byte)((uint)iVar59 >> 0x18) ^ (byte)((ulong)uVar50 >> 0x38);
    bVar39 = (byte)iVar40 ^ (byte)(uVar73 >> 0x17);
    bVar41 = (byte)((uint)iVar40 >> 8) ^ ((byte)((uint)iVar62 >> 8) | (byte)(uVar73 >> 0x1f));
    bVar42 = (byte)((uint)iVar40 >> 0x10) ^ (byte)((uint)iVar62 >> 0x10);
    bVar43 = (byte)((uint)iVar40 >> 0x18) ^ (byte)((uint)iVar62 >> 0x18);
    iVar58 = CONCAT13(bVar43,CONCAT12(bVar42,CONCAT11(bVar41,bVar39)));
    bVar44 = (byte)iVar45 ^ (byte)(uVar75 >> 0x17);
    bVar46 = (byte)((uint)iVar45 >> 8) ^ ((byte)((uint)iVar68 >> 8) | (byte)(uVar75 >> 0x1f));
    bVar47 = (byte)((uint)iVar45 >> 0x10) ^ (byte)((uint)iVar68 >> 0x10);
    bVar48 = (byte)((uint)iVar45 >> 0x18) ^ (byte)((uint)iVar68 >> 0x18);
    iVar59 = CONCAT13(bVar48,CONCAT12(bVar47,CONCAT11(bVar46,bVar44)));
    uVar70 = iVar61 + (int)uVar60;
    iVar62 = (int)(CONCAT17(bVar57,CONCAT16(bVar56,CONCAT15(bVar55,CONCAT14(bVar54,iVar61)))) >>
                  0x20);
    uVar72 = iVar62 + iVar65;
    uVar73 = iVar58 + (int)uVar67;
    uVar75 = iVar59 + iVar66;
    iVar40 = uVar70 * 0x2000;
    iVar65 = uVar72 * 0x2000;
    iVar66 = uVar73 * 0x2000;
    iVar68 = uVar75 * 0x2000;
    iVar45 = CONCAT13((byte)((uint)iVar40 >> 0x18) ^ (byte)((ulong)uVar22 >> 0x18),
                      CONCAT12((byte)((uint)iVar40 >> 0x10) ^ (byte)((ulong)uVar22 >> 0x10),
                               CONCAT11(((byte)((uint)iVar40 >> 8) | (byte)(uVar70 >> 0x1b)) ^
                                        (byte)((ulong)uVar22 >> 8),
                                        (byte)(uVar70 >> 0x13) ^ (byte)uVar22)));
    uVar22 = CONCAT17((byte)((uint)iVar65 >> 0x18) ^ (byte)((ulong)uVar22 >> 0x38),
                      CONCAT16((byte)((uint)iVar65 >> 0x10) ^ (byte)((ulong)uVar22 >> 0x30),
                               CONCAT15(((byte)((uint)iVar65 >> 8) | (byte)(uVar72 >> 0x1b)) ^
                                        (byte)((ulong)uVar22 >> 0x28),
                                        CONCAT14((byte)(uVar72 >> 0x13) ^
                                                 (byte)((ulong)uVar22 >> 0x20),iVar45))));
    iVar40 = CONCAT13((byte)((uint)iVar66 >> 0x18) ^ (byte)((ulong)uVar21 >> 0x18),
                      CONCAT12((byte)((uint)iVar66 >> 0x10) ^ (byte)((ulong)uVar21 >> 0x10),
                               CONCAT11(((byte)((uint)iVar66 >> 8) | (byte)(uVar73 >> 0x1b)) ^
                                        (byte)((ulong)uVar21 >> 8),
                                        (byte)(uVar73 >> 0x13) ^ (byte)uVar21)));
    uVar21 = CONCAT17((byte)((uint)iVar68 >> 0x18) ^ (byte)((ulong)uVar21 >> 0x38),
                      CONCAT16((byte)((uint)iVar68 >> 0x10) ^ (byte)((ulong)uVar21 >> 0x30),
                               CONCAT15(((byte)((uint)iVar68 >> 8) | (byte)(uVar75 >> 0x1b)) ^
                                        (byte)((ulong)uVar21 >> 0x28),
                                        CONCAT14((byte)(uVar75 >> 0x13) ^
                                                 (byte)((ulong)uVar21 >> 0x20),iVar40))));
    uVar70 = iVar45 + iVar61;
    uVar72 = (int)((ulong)uVar22 >> 0x20) + iVar62;
    uVar73 = iVar40 + iVar58;
    uVar75 = (int)((ulong)uVar21 >> 0x20) + iVar59;
    uVar50 = NEON_ext(uVar22,uVar21,4,1);
    uVar21 = NEON_ext(uVar21,uVar22,4,1);
    bVar3 = (byte)(uVar70 >> 0xe) ^ (byte)auVar4._0_8_;
    bVar5 = (byte)((uVar70 >> 0xe) >> 8) ^ (byte)((ulong)auVar4._0_8_ >> 8);
    bVar6 = ((byte)(uVar70 * 0x40000 >> 0x10) | (byte)(uVar70 >> 0x1e)) ^
            (byte)((ulong)auVar4._0_8_ >> 0x10);
    bVar7 = (byte)(uVar70 * 0x40000 >> 0x18) ^ (byte)((ulong)auVar4._0_8_ >> 0x18);
    iVar40 = CONCAT13(bVar7,CONCAT12(bVar6,CONCAT11(bVar5,bVar3)));
    bVar8 = (byte)(uVar72 >> 0xe) ^ (byte)((ulong)auVar4._0_8_ >> 0x20);
    bVar9 = (byte)((uVar72 >> 0xe) >> 8) ^ (byte)((ulong)auVar4._0_8_ >> 0x28);
    bVar10 = ((byte)(uVar72 * 0x40000 >> 0x10) | (byte)(uVar72 >> 0x1e)) ^
             (byte)((ulong)auVar4._0_8_ >> 0x30);
    bVar11 = (byte)(uVar72 * 0x40000 >> 0x18) ^ (byte)((ulong)auVar4._0_8_ >> 0x38);
    bVar12 = (byte)(uVar73 >> 0xe) ^ (byte)uVar13;
    bVar14 = (byte)((uVar73 >> 0xe) >> 8) ^ (byte)((ulong)uVar13 >> 8);
    bVar15 = ((byte)(uVar73 * 0x40000 >> 0x10) | (byte)(uVar73 >> 0x1e)) ^
             (byte)((ulong)uVar13 >> 0x10);
    bVar16 = (byte)(uVar73 * 0x40000 >> 0x18) ^ (byte)((ulong)uVar13 >> 0x18);
    iVar58 = CONCAT13(bVar16,CONCAT12(bVar15,CONCAT11(bVar14,bVar12)));
    bVar17 = (byte)(uVar75 >> 0xe) ^ (byte)((ulong)uVar13 >> 0x20);
    bVar18 = (byte)((uVar75 >> 0xe) >> 8) ^ (byte)((ulong)uVar13 >> 0x28);
    bVar19 = ((byte)(uVar75 * 0x40000 >> 0x10) | (byte)(uVar75 >> 0x1e)) ^
             (byte)((ulong)uVar13 >> 0x30);
    bVar20 = (byte)(uVar75 * 0x40000 >> 0x18) ^ (byte)((ulong)uVar13 >> 0x38);
    iVar68 = iVar40 + CONCAT13(bVar34,CONCAT12(bVar33,CONCAT11(bVar32,bVar31)));
    iVar45 = (int)(CONCAT17(bVar11,CONCAT16(bVar10,CONCAT15(bVar9,CONCAT14(bVar8,iVar40)))) >> 0x20)
    ;
    iVar63 = iVar45 + CONCAT13(bVar38,CONCAT12(bVar37,CONCAT11(bVar36,bVar35)));
    iVar61 = iVar58 + CONCAT13(bVar26,CONCAT12(bVar25,CONCAT11(bVar24,bVar23)));
    iVar59 = (int)(CONCAT17(bVar20,CONCAT16(bVar19,CONCAT15(bVar18,CONCAT14(bVar17,iVar58)))) >>
                  0x20);
    iVar65 = iVar59 + CONCAT13(bVar30,CONCAT12(bVar29,CONCAT11(bVar28,bVar27)));
    iVar69 = iVar68 * 0x80;
    iVar64 = iVar63 * 0x80;
    iVar62 = iVar61 * 0x80;
    iVar66 = iVar65 * 0x80;
    iVar69 = CONCAT13((byte)((uint)iVar69 >> 0x18) ^ (byte)((ulong)uVar50 >> 0x18),
                      CONCAT12((byte)((uint)iVar69 >> 0x10) ^ (byte)((ulong)uVar50 >> 0x10),
                               CONCAT11((byte)((uint)iVar69 >> 8) ^ (byte)((ulong)uVar50 >> 8),
                                        ((byte)iVar69 | (byte)((uint)iVar68 >> 0x19)) ^ (byte)uVar50
                                       )));
    iVar68 = CONCAT13((byte)((uint)iVar62 >> 0x18) ^ (byte)((ulong)uVar21 >> 0x18),
                      CONCAT12((byte)((uint)iVar62 >> 0x10) ^ (byte)((ulong)uVar21 >> 0x10),
                               CONCAT11((byte)((uint)iVar62 >> 8) ^ (byte)((ulong)uVar21 >> 8),
                                        ((byte)iVar62 | (byte)((uint)iVar61 >> 0x19)) ^ (byte)uVar21
                                       )));
    uVar70 = iVar69 + iVar40;
    iVar63 = (int)(CONCAT17((byte)((uint)iVar64 >> 0x18) ^ (byte)((ulong)uVar50 >> 0x38),
                            CONCAT16((byte)((uint)iVar64 >> 0x10) ^ (byte)((ulong)uVar50 >> 0x30),
                                     CONCAT15((byte)((uint)iVar64 >> 8) ^
                                              (byte)((ulong)uVar50 >> 0x28),
                                              CONCAT14(((byte)iVar64 | (byte)((uint)iVar63 >> 0x19))
                                                       ^ (byte)((ulong)uVar50 >> 0x20),iVar69)))) >>
                  0x20);
    uVar72 = iVar63 + iVar45;
    uVar73 = iVar68 + iVar58;
    iVar65 = (int)(CONCAT17((byte)((uint)iVar66 >> 0x18) ^ (byte)((ulong)uVar21 >> 0x38),
                            CONCAT16((byte)((uint)iVar66 >> 0x10) ^ (byte)((ulong)uVar21 >> 0x30),
                                     CONCAT15((byte)((uint)iVar66 >> 8) ^
                                              (byte)((ulong)uVar21 >> 0x28),
                                              CONCAT14(((byte)iVar66 | (byte)((uint)iVar65 >> 0x19))
                                                       ^ (byte)((ulong)uVar21 >> 0x20),iVar68)))) >>
                  0x20);
    uVar75 = iVar65 + iVar59;
    iVar40 = uVar70 * 0x200;
    iVar45 = uVar72 * 0x200;
    iVar58 = uVar73 * 0x200;
    iVar59 = uVar75 * 0x200;
    iVar40 = CONCAT13((byte)((uint)iVar40 >> 0x18) ^ bVar43,
                      CONCAT12((byte)((uint)iVar40 >> 0x10) ^ bVar42,
                               CONCAT11(((byte)((uint)iVar40 >> 8) | (byte)(uVar70 >> 0x1f)) ^
                                        bVar41,(byte)(uVar70 >> 0x17) ^ bVar39)));
    iVar45 = CONCAT13((byte)((uint)iVar45 >> 0x18) ^ bVar48,
                      CONCAT12((byte)((uint)iVar45 >> 0x10) ^ bVar47,
                               CONCAT11(((byte)((uint)iVar45 >> 8) | (byte)(uVar72 >> 0x1f)) ^
                                        bVar46,(byte)(uVar72 >> 0x17) ^ bVar44)));
    iVar61 = CONCAT13((byte)((uint)iVar58 >> 0x18) ^ bVar53,
                      CONCAT12((byte)((uint)iVar58 >> 0x10) ^ bVar52,
                               CONCAT11(((byte)((uint)iVar58 >> 8) | (byte)(uVar73 >> 0x1f)) ^
                                        bVar51,(byte)(uVar73 >> 0x17) ^ bVar49)));
    uVar50 = CONCAT17((byte)((uint)iVar59 >> 0x18) ^ bVar57,
                      CONCAT16((byte)((uint)iVar59 >> 0x10) ^ bVar56,
                               CONCAT15(((byte)((uint)iVar59 >> 8) | (byte)(uVar75 >> 0x1f)) ^
                                        bVar55,CONCAT14((byte)(uVar75 >> 0x17) ^ bVar54,iVar61))));
    uVar70 = iVar40 + iVar69;
    uVar72 = iVar45 + iVar63;
    uVar73 = iVar61 + iVar68;
    iVar62 = (int)((ulong)uVar50 >> 0x20);
    uVar75 = iVar62 + iVar65;
    iVar58 = uVar70 * 0x2000;
    iVar59 = uVar72 * 0x2000;
    iVar66 = uVar73 * 0x2000;
    iVar64 = uVar75 * 0x2000;
    uVar21 = CONCAT44(iVar68,iVar63);
    bVar31 = (byte)(uVar70 >> 0x13) ^ bVar31;
    bVar32 = ((byte)((uint)iVar58 >> 8) | (byte)(uVar70 >> 0x1b)) ^ bVar32;
    bVar33 = (byte)((uint)iVar58 >> 0x10) ^ bVar33;
    bVar34 = (byte)((uint)iVar58 >> 0x18) ^ bVar34;
    bVar35 = (byte)(uVar72 >> 0x13) ^ bVar35;
    bVar36 = ((byte)((uint)iVar59 >> 8) | (byte)(uVar72 >> 0x1b)) ^ bVar36;
    bVar37 = (byte)((uint)iVar59 >> 0x10) ^ bVar37;
    bVar38 = (byte)((uint)iVar59 >> 0x18) ^ bVar38;
    bVar23 = (byte)(uVar73 >> 0x13) ^ bVar23;
    bVar24 = ((byte)((uint)iVar66 >> 8) | (byte)(uVar73 >> 0x1b)) ^ bVar24;
    bVar25 = (byte)((uint)iVar66 >> 0x10) ^ bVar25;
    bVar26 = (byte)((uint)iVar66 >> 0x18) ^ bVar26;
    bVar27 = (byte)(uVar75 >> 0x13) ^ bVar27;
    bVar28 = ((byte)((uint)iVar64 >> 8) | (byte)(uVar75 >> 0x1b)) ^ bVar28;
    bVar29 = (byte)((uint)iVar64 >> 0x10) ^ bVar29;
    bVar30 = (byte)((uint)iVar64 >> 0x18) ^ bVar30;
    uVar73 = CONCAT13(bVar34,CONCAT12(bVar33,CONCAT11(bVar32,bVar31))) + iVar40;
    uVar75 = CONCAT13(bVar38,CONCAT12(bVar37,CONCAT11(bVar36,bVar35))) + iVar45;
    uVar22 = CONCAT44(iVar69,iVar65);
    uVar70 = CONCAT13(bVar26,CONCAT12(bVar25,CONCAT11(bVar24,bVar23))) + iVar61;
    uVar72 = CONCAT13(bVar30,CONCAT12(bVar29,CONCAT11(bVar28,bVar27))) + iVar62;
    auVar4._0_8_ = CONCAT17((byte)(uVar75 * 0x40000 >> 0x18) ^ bVar11,
                            CONCAT16(((byte)(uVar75 * 0x40000 >> 0x10) | (byte)(uVar75 >> 0x1e)) ^
                                     bVar10,CONCAT15((byte)((uVar75 >> 0xe) >> 8) ^ bVar9,
                                                     CONCAT14((byte)(uVar75 >> 0xe) ^ bVar8,
                                                              CONCAT13((byte)(uVar73 * 0x40000 >>
                                                                             0x18) ^ bVar7,
                                                                       CONCAT12(((byte)(uVar73 * 
                                                  0x40000 >> 0x10) | (byte)(uVar73 >> 0x1e)) ^ bVar6
                                                  ,CONCAT11((byte)((uVar73 >> 0xe) >> 8) ^ bVar5,
                                                            (byte)(uVar73 >> 0xe) ^ bVar3)))))));
    uVar13 = CONCAT17((byte)(uVar72 * 0x40000 >> 0x18) ^ bVar20,
                      CONCAT16(((byte)(uVar72 * 0x40000 >> 0x10) | (byte)(uVar72 >> 0x1e)) ^ bVar19,
                               CONCAT15((byte)((uVar72 >> 0xe) >> 8) ^ bVar18,
                                        CONCAT14((byte)(uVar72 >> 0xe) ^ bVar17,
                                                 CONCAT13((byte)(uVar70 * 0x40000 >> 0x18) ^ bVar16,
                                                          CONCAT12(((byte)(uVar70 * 0x40000 >> 0x10)
                                                                   | (byte)(uVar70 >> 0x1e)) ^
                                                                   bVar15,CONCAT11((byte)((uVar70 >>
                                                                                          0xe) >> 8)
                                                                                   ^ bVar14,(byte)(
                                                  uVar70 >> 0xe) ^ bVar12)))))));
  } while (2 < uVar2);
  auVar4._8_8_ = uVar13;
  *(int *)(param_1 + 2) = iVar68;
  *(undefined8 *)((long)param_1 + 0x14) = uVar50;
  auVar4 = NEON_ext(auVar4,auVar4,4,1);
  *(uint *)((long)param_1 + 0x1c) = CONCAT13(bVar30,CONCAT12(bVar29,CONCAT11(bVar28,bVar27)));
  param_1[1] = auVar4._8_8_;
  *param_1 = auVar4._0_8_;
  return 0;
}


// ===== 00554ee0  FUN_00554ee0 =====

undefined8 FUN_00554ee0(void)

{
  FUN_00554efc();
  return 0;
}


// ===== 00554efc  FUN_00554efc =====

void FUN_00554efc(int *param_1,uint *param_2,uint *param_3,uint *param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  
  if (param_4 == (uint *)0x0) {
    uVar23 = 0x6b206574;
    uVar21 = 0x61707865;
    uVar30 = 0x79622d32;
    uVar19 = 0x3320646e;
  }
  else {
    uVar21 = *param_4;
    uVar19 = param_4[1];
    uVar30 = param_4[2];
    uVar23 = param_4[3];
  }
  uVar4 = *param_3;
  uVar10 = param_3[1];
  uVar5 = param_3[2];
  uVar11 = param_3[3];
  uVar6 = param_3[4];
  uVar12 = param_3[5];
  uVar7 = param_3[6];
  uVar13 = param_3[7];
  uVar8 = *param_2;
  uVar14 = param_2[1];
  uVar9 = param_2[2];
  uVar15 = param_2[3];
  uVar22 = uVar21;
  uVar20 = uVar19;
  uVar31 = uVar30;
  uVar24 = uVar23;
  uVar17 = uVar11;
  uVar25 = uVar6;
  uVar29 = uVar12;
  uVar33 = uVar7;
  uVar34 = uVar13;
  uVar18 = uVar9;
  uVar16 = uVar15;
  uVar28 = uVar10;
  uVar36 = uVar5;
  uVar26 = uVar4;
  uVar35 = uVar14;
  uVar27 = uVar8;
  if (0 < param_5) {
    iVar32 = 0;
    do {
      iVar32 = iVar32 + 2;
      uVar17 = uVar17 ^ (uVar22 + uVar29 >> 0x19 | (uVar22 + uVar29) * 0x80);
      uVar16 = uVar16 ^ (uVar26 + uVar20 >> 0x19 | (uVar26 + uVar20) * 0x80);
      uVar34 = uVar34 ^ (uVar27 + uVar31 >> 0x19 | (uVar27 + uVar31) * 0x80);
      uVar18 = uVar18 ^ (uVar17 + uVar22 >> 0x17 | (uVar17 + uVar22) * 0x200);
      uVar33 = uVar33 ^ (uVar16 + uVar20 >> 0x17 | (uVar16 + uVar20) * 0x200);
      uVar36 = uVar36 ^ (uVar25 + uVar24 >> 0x19 | (uVar25 + uVar24) * 0x80);
      uVar28 = uVar28 ^ (uVar34 + uVar31 >> 0x17 | (uVar34 + uVar31) * 0x200);
      uVar29 = uVar29 ^ (uVar18 + uVar17 >> 0x13 | (uVar18 + uVar17) * 0x2000);
      uVar35 = uVar35 ^ (uVar36 + uVar24 >> 0x17 | (uVar36 + uVar24) * 0x200);
      uVar1 = uVar29 + uVar18;
      uVar26 = uVar26 ^ (uVar33 + uVar16 >> 0x13 | (uVar33 + uVar16) * 0x2000);
      uVar22 = uVar22 ^ (uVar1 >> 0xe | uVar1 * 0x40000);
      uVar1 = uVar26 + uVar33;
      uVar25 = uVar25 ^ (uVar35 + uVar36 >> 0x13 | (uVar35 + uVar36) * 0x2000);
      uVar27 = uVar27 ^ (uVar28 + uVar34 >> 0x13 | (uVar28 + uVar34) * 0x2000);
      uVar2 = uVar25 + uVar35;
      uVar26 = uVar26 ^ (uVar22 + uVar36 >> 0x19 | (uVar22 + uVar36) * 0x80);
      uVar3 = uVar27 + uVar28;
      uVar20 = uVar20 ^ (uVar1 >> 0xe | uVar1 * 0x40000);
      uVar31 = uVar31 ^ (uVar3 >> 0xe | uVar3 * 0x40000);
      uVar28 = uVar28 ^ (uVar26 + uVar22 >> 0x17 | (uVar26 + uVar22) * 0x200);
      uVar24 = uVar24 ^ (uVar2 >> 0xe | uVar2 * 0x40000);
      uVar27 = uVar27 ^ (uVar20 + uVar17 >> 0x19 | (uVar20 + uVar17) * 0x80);
      uVar36 = uVar36 ^ (uVar28 + uVar26 >> 0x13 | (uVar28 + uVar26) * 0x2000);
      uVar25 = uVar25 ^ (uVar31 + uVar16 >> 0x19 | (uVar31 + uVar16) * 0x80);
      uVar29 = uVar29 ^ (uVar24 + uVar34 >> 0x19 | (uVar24 + uVar34) * 0x80);
      uVar35 = uVar35 ^ (uVar27 + uVar20 >> 0x17 | (uVar27 + uVar20) * 0x200);
      uVar18 = uVar18 ^ (uVar25 + uVar31 >> 0x17 | (uVar25 + uVar31) * 0x200);
      uVar33 = uVar33 ^ (uVar29 + uVar24 >> 0x17 | (uVar29 + uVar24) * 0x200);
      uVar17 = uVar17 ^ (uVar35 + uVar27 >> 0x13 | (uVar35 + uVar27) * 0x2000);
      uVar16 = uVar16 ^ (uVar18 + uVar25 >> 0x13 | (uVar18 + uVar25) * 0x2000);
      uVar34 = uVar34 ^ (uVar33 + uVar29 >> 0x13 | (uVar33 + uVar29) * 0x2000);
      uVar22 = uVar22 ^ (uVar36 + uVar28 >> 0xe | (uVar36 + uVar28) * 0x40000);
      uVar20 = uVar20 ^ (uVar17 + uVar35 >> 0xe | (uVar17 + uVar35) * 0x40000);
      uVar31 = uVar31 ^ (uVar16 + uVar18 >> 0xe | (uVar16 + uVar18) * 0x40000);
      uVar24 = uVar24 ^ (uVar34 + uVar33 >> 0xe | (uVar34 + uVar33) * 0x40000);
    } while (iVar32 < param_5);
  }
  param_1[8] = uVar18 + uVar9;
  param_1[9] = uVar16 + uVar15;
  *param_1 = uVar22 + uVar21;
  param_1[1] = uVar26 + uVar4;
  param_1[2] = uVar28 + uVar10;
  param_1[3] = uVar36 + uVar5;
  param_1[4] = uVar17 + uVar11;
  param_1[5] = uVar20 + uVar19;
  param_1[6] = uVar27 + uVar8;
  param_1[7] = uVar35 + uVar14;
  param_1[0xc] = uVar29 + uVar12;
  param_1[0xd] = uVar33 + uVar7;
  param_1[10] = uVar31 + uVar30;
  param_1[0xb] = uVar25 + uVar6;
  param_1[0xe] = uVar34 + uVar13;
  param_1[0xf] = uVar24 + uVar23;
  return;
}


// ===== 00555168  FUN_00555168 =====

undefined8 FUN_00555168(void)

{
  return 0;
}


// ===== 00555170  thunk_FUN_00555168 =====

undefined8 thunk_FUN_00555168(void)

{
  return 0;
}


// ===== 00555174  FUN_00555174 =====

undefined8 FUN_00555174(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  long lVar1;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulong local_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 local_50;
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0;
  uStack_90 = 0;
  local_98 = 0;
  uStack_80 = 0;
  local_88 = 0;
  local_c0 = (ulong)*param_4 & 0x3ffffff;
  uStack_b8 = (ulong)(*(uint *)((long)param_4 + 3) >> 2 & 0x3ffff03);
  local_b0 = (ulong)(*(uint *)((long)param_4 + 6) >> 4 & 0x3ffc0ff);
  uStack_a8 = (ulong)(*(uint *)((long)param_4 + 9) >> 6 & 0x3f03fff);
  local_50 = 0;
  local_a0 = (ulong)(param_4[3] >> 8) & 0xfffff;
  local_38 = 0;
  local_70 = *(ulong *)(param_4 + 4) & 0xffffffff;
  uStack_68 = *(ulong *)(param_4 + 4) >> 0x20;
  uStack_60 = *(ulong *)(param_4 + 6) & 0xffffffff;
  uStack_58 = *(ulong *)(param_4 + 6) >> 0x20;
  FUN_005553f0(&local_c0);
  FUN_005554e0(&local_c0,param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00555248  FUN_00555248 =====

void FUN_00555248(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  long lVar1;
  undefined1 auStack_110 [16];
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined1 local_78;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_b8 = 0;
  uStack_d0 = 0;
  local_d8 = 0;
  uStack_c0 = 0;
  local_c8 = 0;
  local_100 = (ulong)*param_4 & 0x3ffffff;
  uStack_f8 = (ulong)(*(uint *)((long)param_4 + 3) >> 2 & 0x3ffff03);
  local_f0 = (ulong)(*(uint *)((long)param_4 + 6) >> 4 & 0x3ffc0ff);
  uStack_e8 = (ulong)(*(uint *)((long)param_4 + 9) >> 6 & 0x3f03fff);
  local_90 = 0;
  local_e0 = (ulong)(param_4[3] >> 8) & 0xfffff;
  local_78 = 0;
  local_b0 = *(ulong *)(param_4 + 4) & 0xffffffff;
  uStack_a8 = *(ulong *)(param_4 + 4) >> 0x20;
  uStack_a0 = *(ulong *)(param_4 + 6) & 0xffffffff;
  uStack_98 = *(ulong *)(param_4 + 6) >> 0x20;
  FUN_005553f0(&local_100);
  FUN_005554e0(&local_100,auStack_110);
  FUN_00556138(param_1,auStack_110);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0055532c  FUN_0055532c =====

undefined8 FUN_0055532c(ulong *param_1,uint *param_2)

{
  uint uVar1;
  
  *param_1 = (ulong)*param_2 & 0x3ffffff;
  param_1[1] = (ulong)(*(uint *)((long)param_2 + 3) >> 2 & 0x3ffff03);
  param_1[2] = (ulong)(*(uint *)((long)param_2 + 6) >> 4 & 0x3ffc0ff);
  param_1[3] = (ulong)(*(uint *)((long)param_2 + 9) >> 6 & 0x3f03fff);
  uVar1 = param_2[3];
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[4] = (ulong)(uVar1 >> 8) & 0xfffff;
  param_1[10] = (ulong)param_2[4];
  param_1[0xb] = (ulong)param_2[5];
  param_1[0xc] = (ulong)param_2[6];
  uVar1 = param_2[7];
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0xd] = (ulong)uVar1;
  param_1[0xe] = 0;
  return 0;
}


// ===== 005553c0  FUN_005553c0 =====

undefined8 FUN_005553c0(void)

{
  FUN_005553f0();
  return 0;
}


// ===== 005553d8  FUN_005553d8 =====

undefined8 FUN_005553d8(void)

{
  FUN_005554e0();
  return 0;
}


// ===== 005553f0  FUN_005553f0 =====

void FUN_005553f0(long param_1,undefined1 *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(param_1 + 0x70);
  if (lVar1 != 0) {
    uVar2 = 0x10U - lVar1;
    if (param_3 <= 0x10U - lVar1) {
      uVar2 = param_3;
    }
    if (uVar2 != 0) {
      lVar1 = param_1 + 0x78;
      puVar3 = param_2;
      uVar4 = uVar2;
      do {
        uVar4 = uVar4 - 1;
        *(undefined1 *)(lVar1 + *(long *)(param_1 + 0x70)) = *puVar3;
        lVar1 = lVar1 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar4 != 0);
      lVar1 = *(long *)(param_1 + 0x70);
    }
    *(ulong *)(param_1 + 0x70) = lVar1 + uVar2;
    if (lVar1 + uVar2 < 0x10) {
      return;
    }
    param_2 = param_2 + uVar2;
    param_3 = param_3 - uVar2;
    FUN_0055564c(param_1,param_1 + 0x78,0x10);
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if (0xf < param_3) {
    FUN_0055564c(param_1,param_2,param_3 & 0xfffffffffffffff0);
    param_2 = param_2 + (param_3 & 0xfffffffffffffff0);
    param_3 = param_3 & 0xf;
  }
  if (param_3 != 0) {
    lVar1 = param_1 + 0x78;
    uVar2 = param_3;
    do {
      uVar2 = uVar2 - 1;
      *(undefined1 *)(lVar1 + *(long *)(param_1 + 0x70)) = *param_2;
      lVar1 = lVar1 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
    *(ulong *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + param_3;
  }
  return;
}


// ===== 005554e0  FUN_005554e0 =====

void FUN_005554e0(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  lVar9 = *(long *)(param_1 + 0x70);
  if (lVar9 != 0) {
    *(undefined1 *)(param_1 + 0x78 + lVar9) = 1;
    if (lVar9 + 1U < 0x10) {
      memset((void *)(lVar9 + param_1 + 0x79),0,0xf - lVar9);
    }
    *(undefined1 *)(param_1 + 0x88) = 1;
    FUN_0055564c(param_1,param_1 + 0x78,0x10);
  }
  uVar11 = *(long *)(param_1 + 0x38) + (*(ulong *)(param_1 + 0x30) >> 0x1a);
  uVar13 = *(long *)(param_1 + 0x40) + (uVar11 >> 0x1a);
  uVar11 = uVar11 & 0x3ffffff;
  uVar2 = *(long *)(param_1 + 0x48) + (uVar13 >> 0x1a);
  uVar13 = uVar13 & 0x3ffffff;
  uVar10 = (uVar2 >> 0x1a) * 5 + *(long *)(param_1 + 0x28);
  uVar14 = uVar10 & 0x3ffffff;
  uVar1 = uVar14 + 5;
  uVar10 = (*(ulong *)(param_1 + 0x30) & 0x3ffffff) + (uVar10 >> 0x1a);
  uVar12 = uVar10 + (uVar1 >> 0x1a);
  uVar3 = uVar11 + (uVar12 >> 0x1a);
  uVar4 = uVar13 + (uVar3 >> 0x1a);
  lVar9 = (uVar2 | 0xfffffffffc000000) + (uVar4 >> 0x1a);
  uVar7 = lVar9 >> 0x3f;
  uVar8 = 0xffffffffffffffff - uVar7 & 0x3ffffff;
  uVar10 = uVar7 & uVar10 | uVar8 & uVar12;
  uVar12 = uVar7 & uVar11 | uVar8 & uVar3;
  uVar1 = (uVar7 & uVar14 | uVar8 & uVar1 | (ulong)(uint)((int)uVar10 << 0x1a)) +
          *(long *)(param_1 + 0x50);
  iVar6 = *(int *)(param_1 + 0x68);
  uVar13 = uVar7 & uVar13 | uVar8 & uVar4;
  uVar11 = (ulong)((uint)(uVar10 >> 6) | (int)uVar12 << 0x14) + *(long *)(param_1 + 0x58) +
           (uVar1 >> 0x20);
  lVar5 = *(long *)(param_1 + 0x60) + (uVar12 >> 0xc) + (ulong)(uint)((int)uVar13 << 0xe) +
          (uVar11 >> 0x20);
  *param_2 = (int)uVar1;
  param_2[1] = (int)uVar11;
  param_2[2] = (int)lVar5;
  param_2[3] = (int)(uVar13 >> 0x12) + iVar6 +
               ((uint)(0xffffffffffffffff - uVar7) & (uint)lVar9 |
               (uint)(lVar9 >> 0x3f) & (uint)uVar2) * 0x100 + (int)((ulong)lVar5 >> 0x20);
  FUN_00556994(param_1,0x90);
  return;
}


// ===== 0055564c  FUN_0055564c =====

void FUN_0055564c(long *param_1,uint *param_2,ulong param_3)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  
  uVar13 = param_1[5];
  lVar12 = param_1[6];
  uVar16 = param_1[7];
  uVar15 = param_1[8];
  uVar14 = param_1[9];
  if (0xf < param_3) {
    lVar7 = param_1[1];
    lVar9 = param_1[2];
    lVar8 = param_1[3];
    lVar17 = *param_1;
    lVar10 = lVar8 * 5;
    lVar11 = param_1[4] * 5;
    do {
      param_3 = param_3 - 0x10;
      lVar2 = uVar13 + ((ulong)*param_2 & 0x3ffffff);
      lVar3 = uVar15 + (*(uint *)((long)param_2 + 9) >> 6);
      lVar12 = lVar12 + ((ulong)(*(uint *)((long)param_2 + 3) >> 2) & 0x3ffffff);
      lVar4 = uVar16 + ((ulong)(*(uint *)((long)param_2 + 6) >> 4) & 0x3ffffff);
      puVar1 = param_2 + 3;
      param_2 = param_2 + 4;
      lVar5 = ((ulong)((char)param_1[0x11] == '\0') << 0x18 | (ulong)(*puVar1 >> 8)) + uVar14;
      uVar18 = lVar2 * lVar17 + lVar12 * lVar11 + lVar4 * lVar10 + lVar3 * lVar9 * 5 +
               lVar7 * 5 * lVar5;
      uVar6 = lVar2 * lVar7 + lVar12 * lVar17 + lVar4 * lVar11 + lVar3 * lVar10 + lVar5 * lVar9 * 5
              + (uVar18 >> 0x1a);
      uVar16 = lVar2 * lVar9 + lVar12 * lVar7 + lVar4 * lVar17 + lVar3 * lVar11 + lVar5 * lVar10 +
               (uVar6 >> 0x1a);
      uVar15 = lVar2 * lVar8 + lVar12 * lVar9 + lVar4 * lVar7 + lVar3 * lVar17 + lVar5 * lVar11 +
               (uVar16 >> 0x1a);
      uVar16 = uVar16 & 0x3ffffff;
      uVar13 = lVar2 * param_1[4] + lVar12 * lVar8 + lVar4 * lVar9 + lVar3 * lVar7 + lVar5 * lVar17
               + (uVar15 >> 0x1a);
      uVar14 = uVar13 & 0x3ffffff;
      uVar18 = (uVar13 >> 0x1a) * 5 + (uVar18 & 0x3ffffff);
      uVar15 = uVar15 & 0x3ffffff;
      uVar13 = uVar18 & 0x3ffffff;
      lVar12 = (uVar6 & 0x3ffffff) + (uVar18 >> 0x1a);
    } while (0xf < param_3);
  }
  param_1[5] = uVar13;
  param_1[6] = lVar12;
  param_1[7] = uVar16;
  param_1[8] = uVar15;
  param_1[9] = uVar14;
  return;
}


// ===== 00555798  thunk_FUN_00555248 =====

void thunk_FUN_00555248(void)

{
  (*(code *)PTR_FUN_00d595f8)();
  return;
}


// ===== 005557a8  thunk_FUN_0055532c =====

void thunk_FUN_0055532c(void)

{
  (*(code *)PTR_FUN_00d59600)();
  return;
}


// ===== 005557b8  thunk_FUN_005553c0 =====

void thunk_FUN_005553c0(void)

{
  (*(code *)PTR_FUN_00d59608)();
  return;
}


// ===== 005557c8  thunk_FUN_005553d8 =====

void thunk_FUN_005553d8(void)

{
  (*(code *)PTR_FUN_00d59610)();
  return;
}


// ===== 005557d8  FUN_005557d8 =====

undefined8 FUN_005557d8(void)

{
  return 0;
}


// ===== 005557e0  FUN_005557e0 =====

undefined8 FUN_005557e0(void)

{
  return 0;
}


// ===== 005557e8  FUN_005557e8 =====

undefined8 FUN_005557e8(void)

{
  return 0;
}


// ===== 005557f0  FUN_005557f0 =====

undefined8
FUN_005557f0(void *param_1,undefined8 param_2,void *param_3,ulong param_4,long param_5,
            undefined8 param_6)

{
  size_t __n;
  long lVar1;
  undefined1 auStack_1d0 [32];
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [264];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00554ce4(auStack_1d0,param_5,param_6,0);
  if (((param_3 < param_1) && ((ulong)((long)param_1 - (long)param_3) < param_4)) ||
     ((param_1 < param_3 && ((ulong)((long)param_3 - (long)param_1) < param_4)))) {
    memmove(param_1,param_3,param_4);
    param_3 = param_1;
  }
  __n = param_4;
  if (0x1f < param_4) {
    __n = 0x20;
  }
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  if (__n != 0) {
    memcpy(auStack_190,param_3,__n);
  }
  FUN_00556118(&local_1b0,&local_1b0,__n + 0x20,param_5 + 0x10,auStack_1d0);
  thunk_FUN_0055532c(auStack_170,&local_1b0);
  if (__n != 0) {
    memcpy(param_1,auStack_190,__n);
  }
  FUN_00556994(&local_1b0,0x40);
  if (0x20 < param_4) {
    thunk_FUN_00556c00((long)param_1 + __n,(long)param_3 + __n,param_4 - __n,param_5 + 0x10,1,
                       auStack_1d0);
  }
  FUN_00556994(auStack_1d0,0x20);
  thunk_FUN_005553c0(auStack_170,param_1,param_4);
  thunk_FUN_005553d8(auStack_170,param_2);
  FUN_00556994(auStack_170,0x100);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00555980  FUN_00555980 =====

undefined8 FUN_00555980(long param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0xfffffffffffffff0) {
    FUN_005557f0(param_1 + 0x10,param_1,param_2);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_005568f0();
}


// ===== 005559bc  FUN_005559bc =====

undefined4
FUN_005559bc(void *param_1,void *param_2,undefined8 param_3,ulong param_4,long param_5,
            undefined8 param_6)

{
  size_t __n;
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [32];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00554ce4(auStack_b8,param_5,param_6,0);
  param_5 = param_5 + 0x10;
  thunk_FUN_00556a28(auStack_98,0x20,param_5,auStack_b8);
  iVar2 = thunk_FUN_00555248(param_3,param_2,param_4,auStack_98);
  if (iVar2 == 0) {
    if (param_1 == (void *)0x0) {
      uVar3 = 0;
      goto LAB_00555b30;
    }
    if (((param_1 < param_2) && ((ulong)((long)param_2 - (long)param_1) < param_4)) ||
       ((param_2 < param_1 && ((ulong)((long)param_1 - (long)param_2) < param_4)))) {
      memmove(param_1,param_2,param_4);
      param_2 = param_1;
    }
    __n = param_4;
    if (0x1f < param_4) {
      __n = 0x20;
    }
    if (__n == 0) {
      FUN_00556118(auStack_98,auStack_98,0x20,param_5,auStack_b8);
    }
    else {
      memcpy(auStack_78,param_2,__n);
      FUN_00556118(auStack_98,auStack_98,__n + 0x20,param_5,auStack_b8);
      memcpy(param_1,auStack_78,__n);
    }
    FUN_00556994(auStack_98,0x40);
    if (0x20 < param_4) {
      thunk_FUN_00556c00((long)param_1 + __n,(long)param_2 + __n,param_4 - __n,param_5,1,auStack_b8)
      ;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  FUN_00556994(auStack_b8,0x20);
LAB_00555b30:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00555b64  FUN_00555b64 =====

undefined8
FUN_00555b64(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  
  if (param_3 < 0x10) {
    return 0xffffffff;
  }
  uVar1 = FUN_005559bc(param_1,param_2 + 0x10,param_2,param_3 - 0x10,param_4,param_5);
  return uVar1;
}


// ===== 00555b8c  FUN_00555b8c =====

undefined8 FUN_00555b8c(void *param_1,size_t param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  char local_80 [8];
  char acStack_78 [8];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 != 0) {
    uStack_68 = param_4[1];
    local_70 = *param_4;
    uStack_58 = param_4[3];
    uStack_60 = param_4[2];
    local_50 = 0;
    local_48 = *param_3;
    acStack_78 = (char  [8])s_expand_32_byte_k_001f3b20._8_8_;
    local_80 = (char  [8])s_expand_32_byte_k_001f3b20._0_8_;
    memset(param_1,0,param_2);
    FUN_00555dfc(local_80,param_1,param_1,param_2);
    FUN_00556994(local_80,0x40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00555c30  FUN_00555c30 =====

undefined8 FUN_00555c30(void *param_1,size_t param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  char local_80 [8];
  char acStack_78 [8];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 != 0) {
    uStack_68 = param_4[1];
    local_70 = *param_4;
    uStack_58 = param_4[3];
    uStack_60 = param_4[2];
    local_50 = 0;
    local_4c = *param_3;
    local_44 = *(undefined4 *)(param_3 + 1);
    acStack_78 = (char  [8])s_expand_32_byte_k_001f3b20._8_8_;
    local_80 = (char  [8])s_expand_32_byte_k_001f3b20._0_8_;
    memset(param_1,0,param_2);
    FUN_00555dfc(local_80,param_1,param_1,param_2);
    FUN_00556994(local_80,0x40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00555cdc  FUN_00555cdc =====

undefined8
FUN_00555cdc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,
            undefined4 param_5,undefined8 *param_6)

{
  long lVar1;
  char local_70 [8];
  char acStack_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_3 != 0) {
    uStack_48 = param_6[3];
    uStack_50 = param_6[2];
    uStack_58 = param_6[1];
    local_60 = *param_6;
    local_38 = *param_4;
    acStack_68 = (char  [8])s_expand_32_byte_k_001f3b20._8_8_;
    local_70 = (char  [8])s_expand_32_byte_k_001f3b20._0_8_;
    local_40 = param_5;
    FUN_00555dfc(local_70,param_2,param_1,param_3);
    FUN_00556994(local_70,0x40);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00555d6c  FUN_00555d6c =====

undefined8
FUN_00555d6c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,
            undefined4 param_5,undefined8 *param_6)

{
  long lVar1;
  char local_70 [8];
  char acStack_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_3 != 0) {
    uStack_58 = param_6[1];
    local_60 = *param_6;
    uStack_48 = param_6[3];
    uStack_50 = param_6[2];
    local_3c = *param_4;
    local_34 = *(undefined4 *)(param_4 + 1);
    acStack_68 = (char  [8])s_expand_32_byte_k_001f3b20._8_8_;
    local_70 = (char  [8])s_expand_32_byte_k_001f3b20._0_8_;
    local_40 = param_5;
    FUN_00555dfc(local_70,param_2,param_1,param_3);
    FUN_00556994(local_70,0x40);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00555dfc  FUN_00555dfc =====

void FUN_00555dfc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 (*pauVar10) [16];
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  int iVar16;
  ulong uVar17;
  undefined1 (*pauVar18) [16];
  undefined8 *puVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  int iVar34;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  byte bVar35;
  byte bVar36;
  undefined1 uVar37;
  byte bVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  byte bVar41;
  undefined1 uVar42;
  byte bVar43;
  undefined1 uVar44;
  byte bVar45;
  undefined1 uVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  undefined1 uVar50;
  byte bVar51;
  undefined1 uVar52;
  byte bVar53;
  undefined1 uVar54;
  byte bVar55;
  undefined1 auVar56 [12];
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
  byte bVar76;
  byte bVar77;
  byte bVar78;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  byte bVar75;
  byte bVar79;
  undefined1 auVar61 [16];
  undefined1 auVar57 [12];
  undefined1 auVar64 [16];
  uint uVar80;
  int iVar81;
  int iVar82;
  byte bVar108;
  uint uVar103;
  int iVar104;
  int iVar112;
  undefined1 auVar84 [12];
  undefined1 auVar85 [12];
  undefined1 auVar86 [12];
  undefined1 auVar87 [12];
  int iVar105;
  int iVar113;
  undefined1 auVar88 [12];
  undefined1 auVar89 [12];
  int iVar114;
  undefined1 auVar92 [16];
  int iVar115;
  byte bVar116;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long local_18;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar83 [12];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar106;
  byte bVar107;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  uVar24 = param_1[3];
  uVar21 = *(undefined8 *)*(undefined1 (*) [16])(param_1 + 2);
  auVar9 = *(undefined1 (*) [16])(param_1 + 2);
  uVar27 = param_1[6];
  uVar20 = param_1[7];
  auVar22 = NEON_ext(*(undefined1 (*) [16])(param_1 + 4),*(undefined1 (*) [16])(param_1 + 4),8,1);
  uVar26 = param_1[1];
  uVar25 = *param_1;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar20;
  auVar92._8_8_ = 0;
  auVar92._0_8_ = uVar20;
  auVar23 = NEON_ext(auVar23,auVar92,4,1);
  puVar11 = param_2;
  uVar17 = param_4;
  uVar13 = param_4;
  puVar15 = (undefined8 *)0x0;
  if (param_4 < 0x40) goto LAB_00555e44;
  while( true ) {
    auVar59._8_8_ = 0;
    auVar59._0_8_ = uVar20;
    auVar117._8_8_ = 0;
    auVar117._0_8_ = uVar27;
    iVar16 = -0x14;
    bVar41 = (byte)uVar26;
    bVar43 = (byte)((ulong)uVar26 >> 8);
    bVar45 = (byte)((ulong)uVar26 >> 0x10);
    bVar47 = (byte)((ulong)uVar26 >> 0x18);
    bVar48 = (byte)((ulong)uVar26 >> 0x20);
    bVar49 = (byte)((ulong)uVar26 >> 0x28);
    bVar51 = (byte)((ulong)uVar26 >> 0x30);
    bVar53 = (byte)((ulong)uVar26 >> 0x38);
    bVar100 = (byte)uVar25;
    bVar108 = (byte)((ulong)uVar25 >> 8);
    bVar35 = (byte)((ulong)uVar25 >> 0x10);
    bVar101 = (byte)((ulong)uVar25 >> 0x18);
    bVar109 = (byte)((ulong)uVar25 >> 0x20);
    bVar36 = (byte)((ulong)uVar25 >> 0x28);
    bVar38 = (byte)((ulong)uVar25 >> 0x30);
    bVar110 = (byte)((ulong)uVar25 >> 0x38);
    auVar118 = auVar22;
    auVar92 = auVar9;
    do {
      iVar16 = iVar16 + 2;
      iVar82 = CONCAT13(bVar101,CONCAT12(bVar35,CONCAT11(bVar108,bVar100))) + auVar92._0_4_;
      iVar5 = CONCAT13(bVar110,CONCAT12(bVar38,CONCAT11(bVar36,bVar109))) + auVar92._4_4_;
      iVar6 = CONCAT13(bVar47,CONCAT12(bVar45,CONCAT11(bVar43,bVar41))) + auVar92._8_4_;
      iVar8 = CONCAT13(bVar53,CONCAT12(bVar51,CONCAT11(bVar49,bVar48))) + auVar92._12_4_;
      auVar58[0] = (byte)iVar82 ^ auVar117[0];
      auVar58[1] = (byte)((uint)iVar82 >> 8) ^ auVar117[1];
      auVar58[2] = (byte)((uint)iVar82 >> 0x10) ^ auVar117[2];
      auVar58[3] = (byte)((uint)iVar82 >> 0x18) ^ auVar117[3];
      auVar58[4] = (byte)iVar5 ^ auVar117[4];
      auVar58[5] = (byte)((uint)iVar5 >> 8) ^ auVar117[5];
      auVar58[6] = (byte)((uint)iVar5 >> 0x10) ^ auVar117[6];
      auVar58[7] = (byte)((uint)iVar5 >> 0x18) ^ auVar117[7];
      auVar58[8] = (byte)iVar6 ^ auVar59[0];
      auVar58[9] = (byte)((uint)iVar6 >> 8) ^ auVar59[1];
      auVar58[10] = (byte)((uint)iVar6 >> 0x10) ^ auVar59[2];
      auVar58[0xb] = (byte)((uint)iVar6 >> 0x18) ^ auVar59[3];
      auVar58[0xc] = (byte)iVar8 ^ auVar59[4];
      auVar58[0xd] = (byte)((uint)iVar8 >> 8) ^ auVar59[5];
      auVar58[0xe] = (byte)((uint)iVar8 >> 0x10) ^ auVar59[6];
      auVar58[0xf] = (byte)((uint)iVar8 >> 0x18) ^ auVar59[7];
      auVar59 = NEON_ext(auVar58,auVar58,0xc,1);
      auVar60._0_2_ = auVar59._2_2_;
      auVar60[2] = auVar59[0];
      auVar60[3] = auVar59[1];
      auVar60[4] = auVar59[6];
      auVar60[5] = auVar59[7];
      auVar60[6] = auVar59[4];
      auVar60[7] = auVar59[5];
      auVar60[8] = auVar59[10];
      auVar60[9] = auVar59[0xb];
      auVar60[10] = auVar59[8];
      auVar60[0xb] = auVar59[9];
      auVar60[0xc] = auVar59[0xe];
      auVar60[0xd] = auVar59[0xf];
      auVar60[0xe] = auVar59[0xc];
      auVar60[0xf] = auVar59[0xd];
      auVar117 = NEON_ext(auVar60,auVar60,0xc,1);
      auVar30._0_4_ = auVar117._0_4_ + auVar118._0_4_;
      auVar30._4_4_ = auVar117._4_4_ + auVar118._4_4_;
      auVar30._8_4_ = auVar117._8_4_ + auVar118._8_4_;
      auVar30._12_4_ = auVar117._12_4_ + auVar118._12_4_;
      auVar118 = NEON_ext(auVar30,auVar30,8,1);
      bVar100 = auVar118[3] ^ auVar92[3];
      uVar80 = CONCAT13(bVar100,CONCAT12(auVar118[2] ^ auVar92[2],
                                         CONCAT11(auVar118[1] ^ auVar92[1],auVar118[0] ^ auVar92[0])
                                        ));
      bVar108 = auVar118[7] ^ auVar92[7];
      auVar83._0_8_ =
           CONCAT17(bVar108,CONCAT16(auVar118[6] ^ auVar92[6],
                                     CONCAT15(auVar118[5] ^ auVar92[5],
                                              CONCAT14(auVar118[4] ^ auVar92[4],uVar80))));
      auVar83[8] = auVar118[8] ^ auVar92[8];
      auVar83[9] = auVar118[9] ^ auVar92[9];
      auVar83[10] = auVar118[10] ^ auVar92[10];
      auVar83[0xb] = auVar118[0xb] ^ auVar92[0xb];
      auVar90[0xc] = auVar118[0xc] ^ auVar92[0xc];
      auVar90._0_12_ = auVar83;
      auVar90[0xd] = auVar118[0xd] ^ auVar92[0xd];
      auVar90[0xe] = auVar118[0xe] ^ auVar92[0xe];
      auVar90[0xf] = auVar118[0xf] ^ auVar92[0xf];
      uVar103 = (uint)((ulong)auVar83._0_8_ >> 0x20);
      iVar81 = uVar80 << 0xc;
      iVar104 = uVar103 << 0xc;
      iVar112 = auVar83._8_4_ << 0xc;
      iVar114 = auVar90._12_4_ << 0xc;
      iVar81 = CONCAT13((char)((uint)iVar81 >> 0x18),
                        CONCAT12((char)((uint)iVar81 >> 0x10),
                                 CONCAT11((byte)((uint)iVar81 >> 8) | bVar100 >> 4,
                                          (char)(uVar80 >> 0x14))));
      uVar4 = CONCAT17((char)((uint)iVar104 >> 0x18),
                       CONCAT16((char)((uint)iVar104 >> 0x10),
                                CONCAT15((byte)((uint)iVar104 >> 8) | bVar108 >> 4,
                                         CONCAT14((char)(uVar103 >> 0x14),iVar81))));
      auVar84[8] = (char)(auVar83._8_4_ >> 0x14);
      auVar84._0_8_ = uVar4;
      auVar84[9] = (byte)((uint)iVar112 >> 8) | auVar83[0xb] >> 4;
      auVar84[10] = (undefined1)((uint)iVar112 >> 0x10);
      auVar84[0xb] = (undefined1)((uint)iVar112 >> 0x18);
      auVar91[0xc] = (char)(auVar90._12_4_ >> 0x14);
      auVar91._0_12_ = auVar84;
      auVar91[0xd] = (byte)((uint)iVar114 >> 8) | auVar90[0xf] >> 4;
      auVar91[0xe] = (undefined1)((uint)iVar114 >> 0x10);
      auVar91[0xf] = (undefined1)((uint)iVar114 >> 0x18);
      iVar81 = iVar81 + iVar82;
      iVar5 = (int)((ulong)uVar4 >> 0x20) + iVar5;
      uVar37 = (undefined1)((uint)iVar5 >> 8);
      uVar39 = (undefined1)((uint)iVar5 >> 0x10);
      uVar40 = (undefined1)((uint)iVar5 >> 0x18);
      iVar6 = auVar84._8_4_ + iVar6;
      uVar42 = (undefined1)((uint)iVar6 >> 8);
      uVar44 = (undefined1)((uint)iVar6 >> 0x10);
      uVar46 = (undefined1)((uint)iVar6 >> 0x18);
      iVar8 = auVar91._12_4_ + iVar8;
      uVar50 = (undefined1)((uint)iVar8 >> 8);
      uVar52 = (undefined1)((uint)iVar8 >> 0x10);
      uVar54 = (undefined1)((uint)iVar8 >> 0x18);
      auVar92 = NEON_ext(auVar91,auVar91,4,1);
      auVar2[4] = (char)iVar5;
      auVar2._0_4_ = iVar81;
      auVar2[5] = uVar37;
      auVar2[6] = uVar39;
      auVar2[7] = uVar40;
      auVar2[8] = (char)iVar6;
      auVar2[9] = uVar42;
      auVar2[10] = uVar44;
      auVar2[0xb] = uVar46;
      auVar2[0xc] = (char)iVar8;
      auVar2[0xd] = uVar50;
      auVar2[0xe] = uVar52;
      auVar2[0xf] = uVar54;
      auVar3[4] = (char)iVar5;
      auVar3._0_4_ = iVar81;
      auVar3[5] = uVar37;
      auVar3[6] = uVar39;
      auVar3[7] = uVar40;
      auVar3[8] = (char)iVar6;
      auVar3[9] = uVar42;
      auVar3[10] = uVar44;
      auVar3[0xb] = uVar46;
      auVar3[0xc] = (char)iVar8;
      auVar3[0xd] = uVar50;
      auVar3[0xe] = uVar52;
      auVar3[0xf] = uVar54;
      auVar118 = NEON_ext(auVar2,auVar3,0xc,1);
      bVar55 = auVar118[0] ^ auVar59[2];
      bVar65 = auVar118[1] ^ auVar59[3];
      bVar66 = auVar118[2] ^ auVar60[2];
      bVar67 = auVar118[3] ^ auVar60[3];
      bVar68 = auVar118[4] ^ auVar59[6];
      bVar69 = auVar118[5] ^ auVar59[7];
      bVar70 = auVar118[6] ^ auVar60[6];
      bVar71 = auVar118[7] ^ auVar60[7];
      bVar72 = auVar118[8] ^ auVar59[10];
      bVar73 = auVar118[9] ^ auVar59[0xb];
      bVar74 = auVar118[10] ^ auVar60[10];
      bVar75 = auVar118[0xb] ^ auVar60[0xb];
      bVar76 = auVar118[0xc] ^ auVar59[0xe];
      bVar77 = auVar118[0xd] ^ auVar59[0xf];
      bVar78 = auVar118[0xe] ^ auVar60[0xe];
      bVar79 = auVar118[0xf] ^ auVar60[0xf];
      auVar61[1] = bVar55;
      auVar61[0] = bVar67;
      auVar61[2] = bVar65;
      auVar61[3] = bVar66;
      auVar61[4] = bVar71;
      auVar61[5] = bVar68;
      auVar61[6] = bVar69;
      auVar61[7] = bVar70;
      auVar61[8] = bVar75;
      auVar61[9] = bVar72;
      auVar61[10] = bVar73;
      auVar61[0xb] = bVar74;
      auVar61[0xc] = bVar79;
      auVar61[0xd] = bVar76;
      auVar61[0xe] = bVar77;
      auVar61[0xf] = bVar78;
      auVar118 = NEON_ext(auVar61,auVar61,0xc,1);
      auVar31._0_4_ = auVar118._0_4_ + auVar30._0_4_;
      auVar31._4_4_ = auVar118._4_4_ + auVar30._4_4_;
      auVar31._8_4_ = auVar118._8_4_ + auVar30._8_4_;
      auVar31._12_4_ = auVar118._12_4_ + auVar30._12_4_;
      auVar118 = NEON_ext(auVar31,auVar31,0xc,1);
      bVar100 = auVar118[3] ^ auVar92[3];
      iVar82 = CONCAT13(bVar100,CONCAT12(auVar118[2] ^ auVar92[2],
                                         CONCAT11(auVar118[1] ^ auVar92[1],auVar118[0] ^ auVar92[0])
                                        ));
      bVar109 = auVar118[7] ^ auVar92[7];
      auVar85._0_8_ =
           CONCAT17(bVar109,CONCAT16(auVar118[6] ^ auVar92[6],
                                     CONCAT15(auVar118[5] ^ auVar92[5],
                                              CONCAT14(auVar118[4] ^ auVar92[4],iVar82))));
      auVar85[8] = auVar118[8] ^ auVar92[8];
      auVar85[9] = auVar118[9] ^ auVar92[9];
      auVar85[10] = auVar118[10] ^ auVar92[10];
      auVar85[0xb] = auVar118[0xb] ^ auVar92[0xb];
      auVar93[0xc] = auVar118[0xc] ^ auVar92[0xc];
      auVar93._0_12_ = auVar85;
      auVar93[0xd] = auVar118[0xd] ^ auVar92[0xd];
      auVar93[0xe] = auVar118[0xe] ^ auVar92[0xe];
      auVar93[0xf] = auVar118[0xf] ^ auVar92[0xf];
      iVar82 = iVar82 << 7;
      iVar104 = (int)((ulong)auVar85._0_8_ >> 0x20) << 7;
      iVar112 = auVar85._8_4_ << 7;
      iVar114 = auVar93._12_4_ << 7;
      bVar100 = (byte)iVar82 | bVar100 >> 1;
      bVar108 = (byte)((uint)iVar82 >> 8);
      bVar35 = (byte)((uint)iVar82 >> 0x10);
      bVar101 = (byte)((uint)iVar82 >> 0x18);
      iVar82 = CONCAT13(bVar101,CONCAT12(bVar35,CONCAT11(bVar108,bVar100)));
      bVar109 = (byte)iVar104 | bVar109 >> 1;
      bVar36 = (byte)((uint)iVar104 >> 8);
      bVar38 = (byte)((uint)iVar104 >> 0x10);
      bVar110 = (byte)((uint)iVar104 >> 0x18);
      uVar4 = CONCAT17(bVar110,CONCAT16(bVar38,CONCAT15(bVar36,CONCAT14(bVar109,iVar82))));
      auVar86[8] = (byte)iVar112 | auVar85[0xb] >> 1;
      auVar86._0_8_ = uVar4;
      auVar86[9] = (byte)((uint)iVar112 >> 8);
      auVar86[10] = (byte)((uint)iVar112 >> 0x10);
      auVar86[0xb] = (byte)((uint)iVar112 >> 0x18);
      auVar94[0xc] = (byte)iVar114 | auVar93[0xf] >> 1;
      auVar94._0_12_ = auVar86;
      auVar94[0xd] = (byte)((uint)iVar114 >> 8);
      auVar94[0xe] = (byte)((uint)iVar114 >> 0x10);
      auVar94[0xf] = (byte)((uint)iVar114 >> 0x18);
      iVar82 = iVar82 + iVar81;
      iVar5 = (int)((ulong)uVar4 >> 0x20) + iVar5;
      iVar6 = auVar86._8_4_ + iVar6;
      iVar8 = auVar94._12_4_ + iVar8;
      bVar67 = (byte)iVar82 ^ bVar67;
      bVar55 = (byte)((uint)iVar82 >> 8) ^ bVar55;
      bVar65 = (byte)((uint)iVar82 >> 0x10) ^ bVar65;
      bVar66 = (byte)((uint)iVar82 >> 0x18) ^ bVar66;
      bVar71 = (byte)iVar5 ^ bVar71;
      bVar68 = (byte)((uint)iVar5 >> 8) ^ bVar68;
      bVar69 = (byte)((uint)iVar5 >> 0x10) ^ bVar69;
      bVar70 = (byte)((uint)iVar5 >> 0x18) ^ bVar70;
      bVar75 = (byte)iVar6 ^ bVar75;
      bVar72 = (byte)((uint)iVar6 >> 8) ^ bVar72;
      bVar73 = (byte)((uint)iVar6 >> 0x10) ^ bVar73;
      bVar74 = (byte)((uint)iVar6 >> 0x18) ^ bVar74;
      bVar79 = (byte)iVar8 ^ bVar79;
      bVar76 = (byte)((uint)iVar8 >> 8) ^ bVar76;
      bVar77 = (byte)((uint)iVar8 >> 0x10) ^ bVar77;
      bVar78 = (byte)((uint)iVar8 >> 0x18) ^ bVar78;
      iVar104 = CONCAT13(bVar55,CONCAT12(bVar67,CONCAT11(bVar66,bVar65)));
      uVar4 = CONCAT17(bVar68,CONCAT16(bVar71,CONCAT15(bVar70,CONCAT14(bVar69,iVar104))));
      auVar56[8] = bVar73;
      auVar56._0_8_ = uVar4;
      auVar56[9] = bVar74;
      auVar56[10] = bVar75;
      auVar56[0xb] = bVar72;
      auVar62[0xc] = bVar77;
      auVar62._0_12_ = auVar56;
      auVar62[0xd] = bVar78;
      auVar62[0xe] = bVar79;
      auVar62[0xf] = bVar76;
      iVar104 = iVar104 + auVar31._0_4_;
      iVar112 = (int)((ulong)uVar4 >> 0x20) + auVar31._4_4_;
      iVar114 = auVar56._8_4_ + auVar31._8_4_;
      iVar34 = auVar62._12_4_ + auVar31._12_4_;
      bVar101 = (byte)((uint)iVar104 >> 0x18) ^ bVar101;
      uVar80 = CONCAT13(bVar101,CONCAT12((byte)((uint)iVar104 >> 0x10) ^ bVar35,
                                         CONCAT11((byte)((uint)iVar104 >> 8) ^ bVar108,
                                                  (byte)iVar104 ^ bVar100)));
      bVar110 = (byte)((uint)iVar112 >> 0x18) ^ bVar110;
      auVar87._0_8_ =
           CONCAT17(bVar110,CONCAT16((byte)((uint)iVar112 >> 0x10) ^ bVar38,
                                     CONCAT15((byte)((uint)iVar112 >> 8) ^ bVar36,
                                              CONCAT14((byte)iVar112 ^ bVar109,uVar80))));
      auVar87[8] = (byte)iVar114 ^ auVar86[8];
      auVar87[9] = (byte)((uint)iVar114 >> 8) ^ auVar86[9];
      auVar87[10] = (byte)((uint)iVar114 >> 0x10) ^ auVar86[10];
      auVar87[0xb] = (byte)((uint)iVar114 >> 0x18) ^ auVar86[0xb];
      auVar95[0xc] = (byte)iVar34 ^ auVar94[0xc];
      auVar95._0_12_ = auVar87;
      auVar95[0xd] = (byte)((uint)iVar34 >> 8) ^ auVar94[0xd];
      auVar95[0xe] = (byte)((uint)iVar34 >> 0x10) ^ auVar94[0xe];
      auVar95[0xf] = (byte)((uint)iVar34 >> 0x18) ^ auVar94[0xf];
      uVar103 = (uint)((ulong)auVar87._0_8_ >> 0x20);
      iVar81 = uVar80 << 0xc;
      iVar105 = uVar103 << 0xc;
      iVar113 = auVar87._8_4_ << 0xc;
      iVar115 = auVar95._12_4_ << 0xc;
      bVar116 = (byte)(uVar80 >> 0x14);
      bVar98 = (byte)((uint)iVar81 >> 8) | bVar101 >> 4;
      bVar99 = (byte)((uint)iVar81 >> 0x10);
      bVar102 = (byte)((uint)iVar81 >> 0x18);
      iVar81 = CONCAT13(bVar102,CONCAT12(bVar99,CONCAT11(bVar98,bVar116)));
      bVar120 = (byte)(uVar103 >> 0x14);
      bVar106 = (byte)((uint)iVar105 >> 8) | bVar110 >> 4;
      bVar107 = (byte)((uint)iVar105 >> 0x10);
      bVar111 = (byte)((uint)iVar105 >> 0x18);
      uVar4 = CONCAT17(bVar111,CONCAT16(bVar107,CONCAT15(bVar106,CONCAT14(bVar120,iVar81))));
      bVar121 = (byte)(auVar87._8_4_ >> 0x14);
      auVar88[8] = bVar121;
      auVar88._0_8_ = uVar4;
      auVar88[9] = (byte)((uint)iVar113 >> 8) | auVar87[0xb] >> 4;
      auVar88[10] = (byte)((uint)iVar113 >> 0x10);
      auVar88[0xb] = (byte)((uint)iVar113 >> 0x18);
      bVar122 = (byte)(auVar95._12_4_ >> 0x14);
      auVar96[0xc] = bVar122;
      auVar96._0_12_ = auVar88;
      auVar96[0xd] = (byte)((uint)iVar115 >> 8) | auVar95[0xf] >> 4;
      auVar96[0xe] = (byte)((uint)iVar115 >> 0x10);
      auVar96[0xf] = (byte)((uint)iVar115 >> 0x18);
      iVar81 = iVar81 + iVar82;
      bVar100 = (byte)iVar81;
      bVar108 = (byte)((uint)iVar81 >> 8);
      bVar35 = (byte)((uint)iVar81 >> 0x10);
      bVar101 = (byte)((uint)iVar81 >> 0x18);
      iVar5 = (int)((ulong)uVar4 >> 0x20) + iVar5;
      bVar109 = (byte)iVar5;
      bVar36 = (byte)((uint)iVar5 >> 8);
      bVar38 = (byte)((uint)iVar5 >> 0x10);
      bVar110 = (byte)((uint)iVar5 >> 0x18);
      iVar6 = auVar88._8_4_ + iVar6;
      bVar41 = (byte)iVar6;
      bVar43 = (byte)((uint)iVar6 >> 8);
      bVar45 = (byte)((uint)iVar6 >> 0x10);
      bVar47 = (byte)((uint)iVar6 >> 0x18);
      iVar8 = auVar96._12_4_ + iVar8;
      bVar48 = (byte)iVar8;
      bVar49 = (byte)((uint)iVar8 >> 8);
      bVar51 = (byte)((uint)iVar8 >> 0x10);
      bVar53 = (byte)((uint)iVar8 >> 0x18);
      iVar82 = CONCAT13(bVar35 ^ bVar67,
                        CONCAT12(bVar108 ^ bVar66,CONCAT11(bVar100 ^ bVar65,bVar101 ^ bVar55)));
      uVar4 = CONCAT17(bVar38 ^ bVar71,
                       CONCAT16(bVar36 ^ bVar70,
                                CONCAT15(bVar109 ^ bVar69,CONCAT14(bVar110 ^ bVar68,iVar82))));
      auVar57[8] = bVar47 ^ bVar72;
      auVar57._0_8_ = uVar4;
      auVar57[9] = bVar41 ^ bVar73;
      auVar57[10] = bVar43 ^ bVar74;
      auVar57[0xb] = bVar45 ^ bVar75;
      auVar63[0xc] = bVar53 ^ bVar76;
      auVar63._0_12_ = auVar57;
      auVar63[0xd] = bVar48 ^ bVar77;
      auVar63[0xe] = bVar49 ^ bVar78;
      auVar63[0xf] = bVar51 ^ bVar79;
      auVar118._0_4_ = iVar82 + iVar104;
      iVar104 = (int)((ulong)uVar4 >> 0x20);
      auVar118._4_4_ = iVar104 + iVar112;
      auVar118._8_4_ = auVar57._8_4_ + iVar114;
      auVar118._12_4_ = auVar63._12_4_ + iVar34;
      auVar59 = NEON_ext(auVar63,auVar63,0xc,1);
      bVar102 = (byte)((uint)auVar118._0_4_ >> 0x18) ^ bVar102;
      iVar112 = CONCAT13(bVar102,CONCAT12((byte)((uint)auVar118._0_4_ >> 0x10) ^ bVar99,
                                          CONCAT11((byte)((uint)auVar118._0_4_ >> 8) ^ bVar98,
                                                   (byte)auVar118._0_4_ ^ bVar116)));
      bVar111 = (byte)((uint)auVar118._4_4_ >> 0x18) ^ bVar111;
      auVar89._0_8_ =
           CONCAT17(bVar111,CONCAT16((byte)((uint)auVar118._4_4_ >> 0x10) ^ bVar107,
                                     CONCAT15((byte)((uint)auVar118._4_4_ >> 8) ^ bVar106,
                                              CONCAT14((byte)auVar118._4_4_ ^ bVar120,iVar112))));
      auVar89[8] = (byte)auVar118._8_4_ ^ bVar121;
      auVar89[9] = (byte)((uint)auVar118._8_4_ >> 8) ^ auVar88[9];
      auVar89[10] = (byte)((uint)auVar118._8_4_ >> 0x10) ^ auVar88[10];
      auVar89[0xb] = (byte)((uint)auVar118._8_4_ >> 0x18) ^ auVar88[0xb];
      auVar97[0xc] = (byte)auVar118._12_4_ ^ bVar122;
      auVar97._0_12_ = auVar89;
      auVar97[0xd] = (byte)((uint)auVar118._12_4_ >> 8) ^ auVar96[0xd];
      auVar97[0xe] = (byte)((uint)auVar118._12_4_ >> 0x10) ^ auVar96[0xe];
      auVar97[0xf] = (byte)((uint)auVar118._12_4_ >> 0x18) ^ auVar96[0xf];
      iVar112 = iVar112 << 7;
      iVar114 = (int)((ulong)auVar89._0_8_ >> 0x20) << 7;
      iVar34 = auVar89._8_4_ << 7;
      iVar105 = auVar97._12_4_ << 7;
      auVar117 = NEON_ext(auVar63,auVar63,4,1);
      auVar119[0] = (byte)iVar112 | bVar102 >> 1;
      auVar119[1] = (char)((uint)iVar112 >> 8);
      auVar119[2] = (char)((uint)iVar112 >> 0x10);
      auVar119[3] = (char)((uint)iVar112 >> 0x18);
      auVar119[4] = (byte)iVar114 | bVar111 >> 1;
      auVar119[5] = (char)((uint)iVar114 >> 8);
      auVar119[6] = (char)((uint)iVar114 >> 0x10);
      auVar119[7] = (char)((uint)iVar114 >> 0x18);
      auVar119[8] = (byte)iVar34 | auVar89[0xb] >> 1;
      auVar119[9] = (char)((uint)iVar34 >> 8);
      auVar119[10] = (char)((uint)iVar34 >> 0x10);
      auVar119[0xb] = (char)((uint)iVar34 >> 0x18);
      auVar119[0xc] = (byte)iVar105 | auVar97[0xf] >> 1;
      auVar119[0xd] = (char)((uint)iVar105 >> 8);
      auVar119[0xe] = (char)((uint)iVar105 >> 0x10);
      auVar119[0xf] = (char)((uint)iVar105 >> 0x18);
      auVar92 = NEON_ext(auVar119,auVar119,0xc,1);
    } while (iVar16 != 0);
    iVar114 = (int)(uVar27 >> 0x20);
    iVar112 = (int)uVar27;
    auVar92 = NEON_ext(auVar119,auVar119,0xc,1);
    iVar81 = iVar81 + (int)uVar25;
    iVar5 = iVar5 + (int)((ulong)uVar25 >> 0x20);
    iVar6 = iVar6 + (int)uVar26;
    iVar8 = iVar8 + (int)((ulong)uVar26 >> 0x20);
    iVar34 = auVar92._0_4_ + (int)uVar21;
    iVar105 = auVar92._4_4_ + (int)((ulong)uVar21 >> 0x20);
    iVar113 = auVar92._8_4_ + (int)uVar24;
    iVar115 = auVar92._12_4_ + (int)((ulong)uVar24 >> 0x20);
    auVar32._0_4_ = auVar118._0_4_ + auVar22._0_4_;
    auVar32._4_4_ = auVar118._4_4_ + auVar22._4_4_;
    auVar32._8_4_ = auVar118._8_4_ + auVar22._8_4_;
    auVar32._12_4_ = auVar118._12_4_ + auVar22._12_4_;
    iVar16 = iVar114;
    if (iVar112 == -1) {
      iVar16 = iVar114 + 1;
    }
    uVar17 = uVar13 - 0x40;
    auVar64._0_4_ = iVar82 + auVar23._0_4_;
    auVar64._4_4_ = iVar104 + iVar112;
    auVar64._8_4_ = auVar57._8_4_ + iVar114;
    auVar64._12_4_ = auVar63._12_4_ + auVar23._12_4_;
    uVar29 = puVar11[1];
    uVar28 = *puVar11;
    bVar100 = *(byte *)(puVar11 + 2);
    bVar108 = *(byte *)((long)puVar11 + 0x11);
    bVar35 = *(byte *)((long)puVar11 + 0x12);
    bVar101 = *(byte *)((long)puVar11 + 0x13);
    bVar109 = *(byte *)((long)puVar11 + 0x14);
    bVar36 = *(byte *)((long)puVar11 + 0x15);
    bVar38 = *(byte *)((long)puVar11 + 0x16);
    bVar110 = *(byte *)((long)puVar11 + 0x17);
    bVar41 = *(byte *)(puVar11 + 3);
    bVar43 = *(byte *)((long)puVar11 + 0x19);
    bVar45 = *(byte *)((long)puVar11 + 0x1a);
    bVar47 = *(byte *)((long)puVar11 + 0x1b);
    bVar48 = *(byte *)((long)puVar11 + 0x1c);
    bVar49 = *(byte *)((long)puVar11 + 0x1d);
    bVar51 = *(byte *)((long)puVar11 + 0x1e);
    bVar53 = *(byte *)((long)puVar11 + 0x1f);
    auVar92 = NEON_ext(auVar32,auVar32,8,1);
    auVar118 = NEON_ext(auVar64,auVar64,4,1);
    uVar7 = puVar11[5];
    uVar4 = puVar11[4];
    bVar55 = *(byte *)(puVar11 + 6);
    bVar67 = *(byte *)((long)puVar11 + 0x31);
    bVar65 = *(byte *)((long)puVar11 + 0x32);
    bVar66 = *(byte *)((long)puVar11 + 0x33);
    bVar68 = *(byte *)((long)puVar11 + 0x34);
    bVar71 = *(byte *)((long)puVar11 + 0x35);
    bVar69 = *(byte *)((long)puVar11 + 0x36);
    bVar70 = *(byte *)((long)puVar11 + 0x37);
    bVar72 = *(byte *)(puVar11 + 7);
    bVar75 = *(byte *)((long)puVar11 + 0x39);
    bVar73 = *(byte *)((long)puVar11 + 0x3a);
    bVar74 = *(byte *)((long)puVar11 + 0x3b);
    bVar76 = *(byte *)((long)puVar11 + 0x3c);
    bVar79 = *(byte *)((long)puVar11 + 0x3d);
    bVar77 = *(byte *)((long)puVar11 + 0x3e);
    bVar78 = *(byte *)((long)puVar11 + 0x3f);
    param_3[1] = CONCAT17((byte)((ulong)uVar29 >> 0x38) ^ (byte)((uint)iVar8 >> 0x18),
                          CONCAT16((byte)((ulong)uVar29 >> 0x30) ^ (byte)((uint)iVar8 >> 0x10),
                                   CONCAT15((byte)((ulong)uVar29 >> 0x28) ^ (byte)((uint)iVar8 >> 8)
                                            ,CONCAT14((byte)((ulong)uVar29 >> 0x20) ^ (byte)iVar8,
                                                      CONCAT13((byte)((ulong)uVar29 >> 0x18) ^
                                                               (byte)((uint)iVar6 >> 0x18),
                                                               CONCAT12((byte)((ulong)uVar29 >> 0x10
                                                                              ) ^ (byte)((uint)iVar6
                                                                                        >> 0x10),
                                                                        CONCAT11((byte)((ulong)
                                                  uVar29 >> 8) ^ (byte)((uint)iVar6 >> 8),
                                                  (byte)uVar29 ^ (byte)iVar6)))))));
    *param_3 = CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ (byte)((uint)iVar5 >> 0x18),
                        CONCAT16((byte)((ulong)uVar28 >> 0x30) ^ (byte)((uint)iVar5 >> 0x10),
                                 CONCAT15((byte)((ulong)uVar28 >> 0x28) ^ (byte)((uint)iVar5 >> 8),
                                          CONCAT14((byte)((ulong)uVar28 >> 0x20) ^ (byte)iVar5,
                                                   CONCAT13((byte)((ulong)uVar28 >> 0x18) ^
                                                            (byte)((uint)iVar81 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar28 >> 0x10) ^
                                                                     (byte)((uint)iVar81 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar28
                                                                                    >> 8) ^
                                                                              (byte)((uint)iVar81 >>
                                                                                    8),(byte)uVar28
                                                                                       ^ (byte)
                                                  iVar81)))))));
    *(byte *)(param_3 + 4) = bVar41 ^ (byte)iVar113;
    *(byte *)((long)param_3 + 0x21) = bVar43 ^ (byte)((uint)iVar113 >> 8);
    *(byte *)((long)param_3 + 0x22) = bVar45 ^ (byte)((uint)iVar113 >> 0x10);
    *(byte *)((long)param_3 + 0x23) = bVar47 ^ (byte)((uint)iVar113 >> 0x18);
    *(byte *)((long)param_3 + 0x24) = bVar48 ^ (byte)iVar115;
    *(byte *)((long)param_3 + 0x25) = bVar49 ^ (byte)((uint)iVar115 >> 8);
    *(byte *)((long)param_3 + 0x26) = bVar51 ^ (byte)((uint)iVar115 >> 0x10);
    *(byte *)((long)param_3 + 0x27) = bVar53 ^ (byte)((uint)iVar115 >> 0x18);
    *(byte *)(param_3 + 2) = bVar100 ^ (byte)iVar34;
    *(byte *)((long)param_3 + 0x11) = bVar108 ^ (byte)((uint)iVar34 >> 8);
    *(byte *)((long)param_3 + 0x12) = bVar35 ^ (byte)((uint)iVar34 >> 0x10);
    *(byte *)((long)param_3 + 0x13) = bVar101 ^ (byte)((uint)iVar34 >> 0x18);
    *(byte *)((long)param_3 + 0x14) = bVar109 ^ (byte)iVar105;
    *(byte *)((long)param_3 + 0x15) = bVar36 ^ (byte)((uint)iVar105 >> 8);
    *(byte *)((long)param_3 + 0x16) = bVar38 ^ (byte)((uint)iVar105 >> 0x10);
    *(byte *)((long)param_3 + 0x17) = bVar110 ^ (byte)((uint)iVar105 >> 0x18);
    auVar33._0_8_ =
         CONCAT17((byte)((ulong)uVar4 >> 0x38) ^ auVar92[7],
                  CONCAT16((byte)((ulong)uVar4 >> 0x30) ^ auVar92[6],
                           CONCAT15((byte)((ulong)uVar4 >> 0x28) ^ auVar92[5],
                                    CONCAT14((byte)((ulong)uVar4 >> 0x20) ^ auVar92[4],
                                             CONCAT13((byte)((ulong)uVar4 >> 0x18) ^ auVar92[3],
                                                      CONCAT12((byte)((ulong)uVar4 >> 0x10) ^
                                                               auVar92[2],
                                                               CONCAT11((byte)((ulong)uVar4 >> 8) ^
                                                                        auVar92[1],
                                                                        (byte)uVar4 ^ auVar92[0]))))
                                   )));
    auVar33[8] = (byte)uVar7 ^ auVar92[8];
    auVar33[9] = (byte)((ulong)uVar7 >> 8) ^ auVar92[9];
    auVar33[10] = (byte)((ulong)uVar7 >> 0x10) ^ auVar92[10];
    auVar33[0xb] = (byte)((ulong)uVar7 >> 0x18) ^ auVar92[0xb];
    auVar33[0xc] = (byte)((ulong)uVar7 >> 0x20) ^ auVar92[0xc];
    auVar33[0xd] = (byte)((ulong)uVar7 >> 0x28) ^ auVar92[0xd];
    auVar33[0xe] = (byte)((ulong)uVar7 >> 0x30) ^ auVar92[0xe];
    auVar33[0xf] = (byte)((ulong)uVar7 >> 0x38) ^ auVar92[0xf];
    param_3[5] = auVar33._8_8_;
    param_3[4] = auVar33._0_8_;
    param_3[7] = CONCAT17(bVar78 ^ auVar118[0xf],
                          CONCAT16(bVar77 ^ auVar118[0xe],
                                   CONCAT15(bVar79 ^ auVar118[0xd],
                                            CONCAT14(bVar76 ^ auVar118[0xc],
                                                     CONCAT13(bVar74 ^ auVar118[0xb],
                                                              CONCAT12(bVar73 ^ auVar118[10],
                                                                       CONCAT11(bVar75 ^ auVar118[9]
                                                                                ,bVar72 ^ auVar118[8
                                                  ])))))));
    param_3[6] = CONCAT17(bVar70 ^ auVar118[7],
                          CONCAT16(bVar69 ^ auVar118[6],
                                   CONCAT15(bVar71 ^ auVar118[5],
                                            CONCAT14(bVar68 ^ auVar118[4],
                                                     CONCAT13(bVar66 ^ auVar118[3],
                                                              CONCAT12(bVar65 ^ auVar118[2],
                                                                       CONCAT11(bVar67 ^ auVar118[1]
                                                                                ,bVar55 ^ auVar118[0
                                                  ])))))));
    if (uVar13 < 0x40 || uVar17 == 0) break;
    param_3 = param_3 + 8;
    param_2 = puVar11 + 8;
    uVar27 = CONCAT44(iVar16,iVar112 + 1);
    puVar11 = param_2;
    uVar13 = uVar17;
    if (uVar17 < 0x40) {
LAB_00555e44:
      uStack_58 = 0;
      local_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      local_40 = 0;
      uStack_28 = 0;
      uStack_30 = 0;
      puVar11 = &local_60;
      uVar13 = uVar17;
      puVar15 = param_3;
      param_3 = &local_60;
      if (uVar17 != 0) {
        uVar14 = 0;
        do {
          *(undefined1 *)((long)&local_60 + uVar14) = *(undefined1 *)((long)param_2 + uVar14);
          uVar14 = (ulong)((int)uVar14 + 1);
          puVar11 = &local_60;
          param_3 = &local_60;
        } while (uVar14 < uVar17);
      }
    }
  }
  if (uVar17 < 0xffffffffffffffc1) goto LAB_005560ac;
  uVar17 = 0;
  lVar12 = 0;
  if (0x3f < param_4) {
    lVar12 = param_4 - 0x40;
  }
  param_4 = param_4 - (lVar12 + 0x3fU & 0xffffffffffffffc0);
  if (param_4 < 2) {
    param_4 = 1;
  }
  if ((7 < param_4) && (0x1f < (ulong)((long)puVar15 - (long)param_3))) {
    if (param_4 < 0x20) {
      uVar20 = 0;
    }
    else {
      uVar17 = param_4 & 0xffffffffffffffe0;
      pauVar18 = (undefined1 (*) [16])(param_3 + 2);
      puVar11 = puVar15 + 2;
      uVar20 = uVar17;
      do {
        pauVar10 = pauVar18 + -1;
        uVar21 = *(undefined8 *)pauVar18[-1];
        auVar23 = *pauVar18;
        pauVar18 = pauVar18 + 2;
        uVar20 = uVar20 - 0x20;
        puVar11[-1] = *(undefined8 *)(*pauVar10 + 8);
        puVar11[-2] = uVar21;
        puVar11[1] = auVar23._8_8_;
        *puVar11 = auVar23._0_8_;
        puVar11 = puVar11 + 4;
      } while (uVar20 != 0);
      if (param_4 == uVar17) goto LAB_005560ac;
      uVar20 = uVar17;
      if ((param_4 & 0x18) == 0) goto LAB_00556098;
    }
    uVar17 = param_4 & 0xfffffffffffffff8;
    lVar12 = uVar20 - uVar17;
    puVar11 = (undefined8 *)((long)param_3 + uVar20);
    puVar19 = (undefined8 *)((long)puVar15 + uVar20);
    do {
      lVar12 = lVar12 + 8;
      *puVar19 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar19 = puVar19 + 1;
    } while (lVar12 != 0);
    if (param_4 == uVar17) goto LAB_005560ac;
  }
LAB_00556098:
  do {
    *(undefined1 *)((long)puVar15 + uVar17) = *(undefined1 *)((long)param_3 + uVar17);
    uVar17 = uVar17 + 1;
  } while (uVar17 < uVar13);
LAB_005560ac:
  *(int *)(param_1 + 6) = iVar112 + 1;
  *(int *)((long)param_1 + 0x34) = iVar16;
  if (*(long *)(lVar1 + 0x28) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 005560d0  thunk_FUN_00555c30 =====

void thunk_FUN_00555c30(void)

{
  (*(code *)PTR_FUN_00d59620)();
  return;
}


// ===== 005560e0  thunk_FUN_00555d6c =====

void thunk_FUN_00555d6c(void)

{
  (*(code *)PTR_FUN_00d59630)();
  return;
}


// ===== 005560f0  FUN_005560f0 =====

undefined8 FUN_005560f0(void)

{
  return 0;
}


// ===== 005560f8  thunk_FUN_00556a28 =====

void thunk_FUN_00556a28(void)

{
  (*(code *)PTR_FUN_00d59678)();
  return;
}


// ===== 00556108  thunk_FUN_00556c00 =====

void thunk_FUN_00556c00(void)

{
  (*(code *)PTR_FUN_00d59680)();
  return;
}


// ===== 00556118  FUN_00556118 =====

void FUN_00556118(void)

{
                    /* WARNING: Could not recover jumptable at 0x0055612c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_PTR_FUN_00d51e50 + 8))();
  return;
}


// ===== 00556130  FUN_00556130 =====

undefined8 FUN_00556130(void)

{
  return 0;
}


