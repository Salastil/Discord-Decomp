// ===== 00488940  FUN_00488940 =====

void FUN_00488940(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  FUN_005467a4(lVar1);
  if (*(char *)(lVar1 + 0x48) != '\0') {
    FUN_007b5df8(lVar1 + 0x28,lVar2);
    FUN_005467c8(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 004889a4  FUN_004889a4 =====

void FUN_004889a4(undefined8 *param_1)

{
  FUN_00487ec4(*param_1);
  return;
}


// ===== 004889ac  FUN_004889ac =====

void FUN_004889ac(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  FUN_005467a4(lVar1);
  if (*(char *)(lVar1 + 0x48) != '\0') {
    FUN_007b5df8(lVar1 + 0x28,lVar2);
    FUN_005467c8(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 00488a10  FUN_00488a10 =====

void FUN_00488a10(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  param_1 = (undefined8 *)*param_1;
  uVar2 = *param_1;
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00d1d7b8;
  puVar1[1] = param_1;
  FUN_00512cf8(uVar2);
  return;
}


// ===== 00488a4c  FUN_00488a4c =====

void FUN_00488a4c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  FUN_005467a4(lVar1);
  if (*(char *)(lVar1 + 0x48) != '\0') {
    FUN_007b5df8(lVar1 + 0x28,lVar2);
    FUN_005467c8(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 00488ab0  FUN_00488ab0 =====

void FUN_00488ab0(undefined8 *param_1)

{
  FUN_00488278(*param_1);
  return;
}


// ===== 00488ab8  FUN_00488ab8 =====

void FUN_00488ab8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  FUN_005467a4(lVar1);
  if (*(char *)(lVar1 + 0x48) != '\0') {
    FUN_007b5df8(lVar1 + 0x28,lVar2);
    FUN_005467c8(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 00488b1c  FUN_00488b1c =====

void FUN_00488b1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1d718;
  FUN_00512a8c(param_1 + 2);
  return;
}


// ===== 00488b2c  FUN_00488b2c =====

void FUN_00488b2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1d718;
  FUN_00512a8c(param_1 + 2);
  operator_delete(param_1);
  return;
}


// ===== 00488b5c  FUN_00488b5c =====

void FUN_00488b5c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  FUN_00512a70(auStack_50,param_1 + 0x10);
  FUN_00487bc4(uVar2,uVar3,auStack_50);
  FUN_00512a8c(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00488bd0  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00488bd4  FUN_00488bd4 =====

void FUN_00488bd4(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  char *local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar5 = *(long *)(param_1 + 8);
  uVar4 = FUN_00417e08();
  if ((uVar4 & 1) == 0) {
    lVar1 = *(long *)(lVar5 + 0x78);
    local_40 = auStack_58;
    local_50 = "../../discord_native_lib/src/socket_client.cpp";
    uStack_48 = 0xa61;
    if (*(long *)(lVar5 + 0x70) == lVar1) goto LAB_00488ccc;
    FUN_00623bb0(&DAT_001f6e39,"../../discord_native_lib/src/socket_client.cpp",0xa61,
                 "Ping received from ",lVar1 + -0x28,&DAT_001ca603,*(undefined2 *)(lVar1 + -0x10),
                 ", seq: ",*(undefined4 *)(param_1 + 0x10),", rtt: ",*(undefined4 *)(param_1 + 0x14)
                );
  }
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(lVar5 + 0x88) = uVar2;
  if (*(char *)(*(long *)(lVar5 + 200) + 0x10) == '\0') {
    lVar1 = *(long *)(lVar5 + 0x78);
    if (*(long *)(lVar5 + 0x70) == lVar1) {
LAB_00488ccc:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                 "!empty()","back() called on an empty vector");
    }
    (**(code **)(lVar5 + 0xc0))
              (lVar5 + 0xb0,uVar2,lVar1 + -0x28,*(undefined2 *)(lVar1 + -0x10),
               *(undefined4 *)(param_1 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00488cf8  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00488cfc  FUN_00488cfc =====

void FUN_00488cfc(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    lVar1 = *(long *)(lVar3 + 0x78);
    if (*(long *)(lVar3 + 0x70) == lVar1) goto LAB_00488db4;
    FUN_00623bb0(&DAT_001f6e20,"../../discord_native_lib/src/socket_client.cpp",0xad9,
                 "Ping timeout from: ",lVar1 + -0x28,&DAT_001ca603,*(undefined2 *)(lVar1 + -0x10),
                 ", seq: ",*(undefined4 *)(param_1 + 0x10));
  }
  if (*(char *)(*(long *)(lVar3 + 0xe8) + 0x10) != '\0') {
    return;
  }
  lVar1 = *(long *)(lVar3 + 0x78);
  if (*(long *)(lVar3 + 0x70) != lVar1) {
                    /* WARNING: Could not recover jumptable at 0x00488db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0xe0))
              (lVar3 + 0xd0,lVar1 + -0x28,*(undefined2 *)(lVar1 + -0x10),
               *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    return;
  }
LAB_00488db4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,"!empty()",
             "back() called on an empty vector");
}


// ===== 00488ddc  FUN_00488ddc =====

void FUN_00488ddc(undefined8 *param_1)

{
  char cVar1;
  
  *param_1 = &PTR_FUN_00d1d790;
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete((void *)param_1[0xc]);
    cVar1 = *(char *)((long)param_1 + 0x47);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x47);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[6]);
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  if (-1 < cVar1) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 00488e4c  FUN_00488e4c =====

void FUN_00488e4c(undefined8 *param_1)

{
  char cVar1;
  
  *param_1 = &PTR_FUN_00d1d790;
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete((void *)param_1[0xc]);
    cVar1 = *(char *)((long)param_1 + 0x47);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x47);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[6]);
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00488ebc  FUN_00488ebc =====

void FUN_00488ebc(long param_1)

{
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (*(char *)(*(long *)(lVar2 + 0x108) + 0x10) == '\0') {
    uVar1 = FUN_00417e08();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../discord_native_lib/src/socket_client.cpp",0xb59,
                   "OnConnectionComplete, succeeded: ",*(undefined1 *)(param_1 + 0x10));
    }
    (**(code **)(lVar2 + 0x100))((undefined8 *)(lVar2 + 0xf0),param_1 + 0x10,param_1 + 0x60);
    *(code **)(lVar2 + 0x100) = FUN_0040ea94;
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar2 + 0x108) + 8);
    *(undefined8 **)(lVar2 + 0x108) = &DAT_001f1910;
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00488f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar2 + 0xf0));
      return;
    }
  }
  else {
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/socket_client.cpp",0xb82,
                   "OnConnectionComplete handler is not set up");
      return;
    }
  }
  return;
}


// ===== 00488fa0  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00488fa4  FUN_00488fa4 =====

void FUN_00488fa4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_1 + 8);
  FUN_005467a4(lVar2 + 0x180);
  if (*(char *)(lVar2 + 0x1c8) == '\0') {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
               "this->has_value()","optional operator-> called on a disengaged value");
  }
  FUN_007b6160(lVar2 + 0x1a8,auStack_40,FUN_00441e10);
  FUN_005467c8(lVar2 + 0x180);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00489048  FUN_00489048 =====

void FUN_00489048(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1d7e0;
  if (-1 < *(char *)((long)param_1 + 0x27)) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 00489068  FUN_00489068 =====

void FUN_00489068(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1d7e0;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004890a4  FUN_004890a4 =====

void FUN_004890a4(long param_1)

{
  ulong uVar1;
  undefined1 *__src;
  ulong uVar2;
  long lVar3;
  undefined1 **__dest;
  long lVar4;
  undefined1 *local_60;
  ulong uStack_58;
  undefined8 local_50;
  long local_48;
  
  __dest = &local_60;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar4 = *(long *)(param_1 + 8);
  if (*(char *)(*(long *)(lVar4 + 0x128) + 0x10) == '\0') {
    if (*(char *)(param_1 + 0x27) < '\0') {
      __src = *(undefined1 **)(param_1 + 0x10);
      uVar2 = *(ulong *)(param_1 + 0x18);
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
      uStack_58 = *(ulong *)(param_1 + 0x18);
      local_60 = *(undefined1 **)(param_1 + 0x10);
      local_50 = *(ulong *)(param_1 + 0x20);
    }
    (**(code **)(lVar4 + 0x120))(lVar4 + 0x110,&local_60);
    if ((long)local_50 < 0) {
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004891d0  FUN_004891d0 =====

void FUN_004891d0(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1d808;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004891ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 004891f4  FUN_004891f4 =====

void FUN_004891f4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4891f8);
  (*pcVar1)();
}


// ===== 004891f8  FUN_004891f8 =====

void FUN_004891f8(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  *(code **)(param_1 + 0x20) = FUN_0040dec4;
  pcVar1 = *(code **)(*(long *)(param_1 + 0x28) + 8);
  *(undefined8 **)(param_1 + 0x28) = &DAT_001f1910;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x10));
  }
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x18) = param_2[1];
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = param_2[2];
  *(undefined8 *)(param_1 + 0x28) = param_2[3];
  param_2[2] = FUN_0040dec4;
  param_2[3] = &DAT_001f1910;
  return;
}


// ===== 00489274  FUN_00489274 =====

void FUN_00489274(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  param_1[4] = FUN_0040dec4;
  param_1[5] = &DAT_001f1910;
  *param_1 = &PTR_FUN_00d1d838;
  param_1[1] = param_2;
  FUN_005156ac(param_1 + 6,param_2,param_1);
  *(undefined4 *)(param_1 + 9) = param_3;
  return;
}


// ===== 004892c4  FUN_004892c4 =====

void FUN_004892c4(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  *param_1 = &PTR_FUN_00d1d838;
  FUN_00515738(param_1 + 6);
  if (param_1[7] != 0) {
    FUN_005ce374(param_1[7],PTR_free_00d51ac0);
    param_1[7] = 0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  param_1[6] = &PTR_FUN_00d193e8;
  *param_1 = &PTR_FUN_00d1d808;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00489330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 00489340  FUN_00489340 =====

void FUN_00489340(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_00d1d838;
  FUN_00515738(param_1 + 6);
  if (param_1[7] != 0) {
    FUN_005ce374(param_1[7],PTR_free_00d51ac0);
    param_1[7] = 0;
  }
  pcVar1 = *(code **)(param_1[5] + 8);
  param_1[6] = &PTR_FUN_00d193e8;
  *param_1 = &PTR_FUN_00d1d808;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004893b8  FUN_004893b8 =====

void FUN_004893b8(long param_1)

{
  long lVar1;
  
  lVar1 = (long)(int)(1000.0 / (double)*(int *)(param_1 + 0x48));
  FUN_00515708(param_1 + 0x30,FUN_004893ec,lVar1,lVar1);
  return;
}


// ===== 004893ec  FUN_004893ec =====

void FUN_004893ec(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004893f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(*param_1 + 0x10);
  return;
}


// ===== 004893fc  FUN_004893fc =====

void FUN_004893fc(long param_1)

{
  FUN_00515738(param_1 + 0x30);
  return;
}


// ===== 00489404  FUN_00489404 =====

void FUN_00489404(void)

{
  return;
}


// ===== 00489408  FUN_00489408 =====

void FUN_00489408(void)

{
  return;
}


// ===== 0048940c  FUN_0048940c =====

void FUN_0048940c(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  *param_1 = &PTR_FUN_00d1d868;
  FUN_00512bf4(param_1 + 6);
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1d808;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00489454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 00489464  FUN_00489464 =====

void FUN_00489464(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_00d1d868;
  FUN_00512bf4(param_1 + 6);
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1d808;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004894b8  FUN_004894b8 =====

void FUN_004894b8(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[4] + 8);
  *param_1 = &PTR_FUN_00d1d898;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004894d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[1]);
    return;
  }
  return;
}


// ===== 004894dc  FUN_004894dc =====

void FUN_004894dc(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[4] + 8);
  *param_1 = &PTR_FUN_00d1d898;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0048951c  FUN_0048951c =====

void FUN_0048951c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00489528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))(param_1 + 8);
  return;
}


// ===== 0048952c  FUN_0048952c =====

undefined1  [16] FUN_0048952c(int param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined1 auVar3 [16];
  
  pcVar2 = "[default] ";
  if (param_1 != 0) {
    pcVar2 = "[stream] ";
  }
  uVar1 = 9;
  if (param_1 == 0) {
    uVar1 = 10;
  }
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = pcVar2;
  return auVar3;
}


// ===== 00489550  FUN_00489550 =====

void FUN_00489550(long param_1)

{
  void *pvVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*(long *)(param_1 + 0x90) + 8);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*(undefined8 *)(param_1 + 0x78));
  }
  pcVar2 = *(code **)(*(long *)(param_1 + 0x68) + 8);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*(undefined8 *)(param_1 + 0x50));
  }
  pvVar1 = *(void **)(param_1 + 0x30);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x38) = pvVar1;
    operator_delete(pvVar1);
  }
  if (-1 < *(char *)(param_1 + 0x2f)) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 004895bc  FUN_004895bc =====

/* WARNING: Removing unreachable block (ram,0x0048963c) */

void FUN_004895bc(long param_1)

{
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  if (*(char *)(param_1 + 0xdf) < '\0') {
    operator_delete(*(void **)(param_1 + 200));
    pvVar4 = *(void **)(param_1 + 0xa0);
  }
  else {
    pvVar4 = *(void **)(param_1 + 0xa0);
  }
  if (pvVar4 == (void *)0x0) {
    cVar1 = *(char *)(param_1 + 0x97);
  }
  else {
    pvVar3 = *(void **)(param_1 + 0xa8);
    pvVar2 = pvVar4;
    if (pvVar3 != pvVar4) {
      do {
        pvVar3 = (void *)((long)pvVar3 + -0x18);
      } while (pvVar3 != pvVar4);
      pvVar2 = *(void **)(param_1 + 0xa0);
    }
    *(void **)(param_1 + 0xa8) = pvVar4;
    operator_delete(pvVar2);
    cVar1 = *(char *)(param_1 + 0x97);
  }
  if (cVar1 < '\0') {
    operator_delete(*(void **)(param_1 + 0x80));
    cVar1 = *(char *)(param_1 + 0x77);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x77);
  }
  if (-1 < cVar1) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x60));
  return;
}


// ===== 00489680  FUN_00489680 =====

void FUN_00489680(undefined8 *param_1)

{
  if (*(code **)(param_1[3] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00489690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[3] + 8))(*param_1);
    return;
  }
  return;
}


// ===== 00489698  FUN_00489698 =====

void FUN_00489698(undefined8 *param_1)

{
  if (*(code **)(param_1[3] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004896a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[3] + 8))(*param_1);
    return;
  }
  return;
}


// ===== 004896b0  FUN_004896b0 =====

void FUN_004896b0(undefined2 *param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  uVar5 = *(undefined8 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 2) = uVar5;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  FUN_00441c84(param_1 + 0xc,param_2 + 0xc);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  pcVar4 = (code *)**(undefined8 **)(param_2 + 0x34);
  *(undefined8 **)(param_1 + 0x34) = *(undefined8 **)(param_2 + 0x34);
  if (pcVar4 != (code *)0x0) {
    uVar5 = (*pcVar4)(*(undefined8 *)(param_2 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = uVar5;
  }
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x3c) = uVar5;
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
  pcVar4 = (code *)**(undefined8 **)(param_2 + 0x48);
  *(undefined8 **)(param_1 + 0x48) = *(undefined8 **)(param_2 + 0x48);
  if (pcVar4 != (code *)0x0) {
    uVar5 = (*pcVar4)(*(undefined8 *)(param_2 + 0x3c));
    *(undefined8 *)(param_1 + 0x3c) = uVar5;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x52);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  uVar1 = *(undefined4 *)(param_2 + 0x54);
  *(undefined1 *)(param_1 + 0x52) = uVar2;
  uVar2 = *(undefined1 *)(param_2 + 0x56);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  uVar3 = *(undefined1 *)(param_2 + 0x4c);
  *(undefined1 *)(param_1 + 0x56) = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 0x58);
  uVar2 = *(undefined1 *)(param_2 + 0x5a);
  *(undefined1 *)(param_1 + 0x4c) = uVar3;
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined1 *)(param_1 + 0x5a) = uVar2;
  *(undefined1 *)(param_1 + 0x5c) = 1;
  return;
}


// ===== 004897bc  FUN_004897bc =====

void FUN_004897bc(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_004379f4(param_1 + 0x68);
  FUN_0043ba38(param_1 + 0x36);
  if (*(code **)(param_1[0x30] + 8) != (code *)0x0) {
    (**(code **)(param_1[0x30] + 8))(param_1[0x2d]);
  }
  if (*(code **)(param_1[0x2b] + 8) != (code *)0x0) {
    (**(code **)(param_1[0x2b] + 8))(param_1[0x28]);
  }
  pvVar1 = (void *)param_1[0x24];
  if (pvVar1 != (void *)0x0) {
    param_1[0x25] = pvVar1;
    operator_delete(pvVar1);
  }
  if (*(char *)((long)param_1 + 0x11f) < '\0') {
    operator_delete((void *)param_1[0x21]);
  }
  if (*(code **)(param_1[0xe] + 8) != (code *)0x0) {
    (**(code **)(param_1[0xe] + 8))(param_1[0xb]);
  }
  if (*(code **)(param_1[8] + 8) != (code *)0x0) {
    (**(code **)(param_1[8] + 8))(param_1[5]);
  }
  if (*(code **)(param_1[3] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00489864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[3] + 8))(*param_1);
    return;
  }
  return;
}


// ===== 00489874  FUN_00489874 =====

void FUN_00489874(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (param_2[1] != '\0') {
    *param_1 = *param_2;
    param_1[1] = 1;
  }
  if (param_2[0x10] != '\0') {
    uVar5 = *(undefined8 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 4) = uVar5;
    param_1[0x10] = 1;
  }
  if (param_2[0x48] != '\0') {
    FUN_00411268(param_1 + 0x18,param_2 + 0x18);
    if (param_1 != param_2) {
      FUN_0048a1f0(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38));
    }
    param_1[0x48] = 1;
  }
  if (param_2[0x70] != '\0') {
    uVar5 = *(undefined8 *)(param_2 + 0x60);
    puVar1 = *(undefined8 **)(param_2 + 0x68);
    uVar3 = *(undefined8 *)(param_2 + 0x50);
    uVar2 = *(undefined8 *)(param_2 + 0x58);
    pcVar4 = (code *)*puVar1;
    if (pcVar4 != (code *)0x0) {
      uVar3 = (*pcVar4)();
    }
    lVar6 = *(long *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x60) = uVar5;
    *(undefined8 **)(param_1 + 0x68) = puVar1;
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    *(undefined8 *)(param_1 + 0x58) = uVar2;
    if (*(code **)(lVar6 + 8) != (code *)0x0) {
      (**(code **)(lVar6 + 8))(uVar5);
    }
    param_1[0x70] = 1;
  }
  if (param_2[0x98] != '\0') {
    uVar5 = *(undefined8 *)(param_2 + 0x88);
    puVar1 = *(undefined8 **)(param_2 + 0x90);
    uVar3 = *(undefined8 *)(param_2 + 0x78);
    uVar2 = *(undefined8 *)(param_2 + 0x80);
    pcVar4 = (code *)*puVar1;
    if (pcVar4 != (code *)0x0) {
      uVar3 = (*pcVar4)();
    }
    lVar6 = *(long *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x88) = uVar5;
    *(undefined8 **)(param_1 + 0x90) = puVar1;
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = uVar3;
    *(undefined8 *)(param_1 + 0x80) = uVar2;
    if (*(code **)(lVar6 + 8) != (code *)0x0) {
      (**(code **)(lVar6 + 8))(uVar5);
    }
    param_1[0x98] = 1;
  }
  if (param_2[0xa4] != '\0') {
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
    param_1[0xa4] = 1;
  }
  if (param_2[0xac] != '\0') {
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
    param_1[0xac] = 1;
  }
  return;
}


// ===== 004899c4  FUN_004899c4 =====

void FUN_004899c4(undefined1 *param_1,undefined1 *param_2)

{
  if (param_2[1] != '\0') {
    *param_1 = *param_2;
    param_1[1] = 1;
  }
  if (param_2[3] != '\0') {
    param_1[2] = param_2[2];
    param_1[3] = 1;
  }
  if (param_2[0x10] != '\0') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    param_1[0x10] = 1;
  }
  return;
}


// ===== 00489a10  FUN_00489a10 =====

void FUN_00489a10(undefined4 *param_1,undefined4 *param_2)

{
  if (*(char *)(param_2 + 1) != '\0') {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  if (*(char *)(param_2 + 3) != '\0') {
    param_1[2] = param_2[2];
    *(undefined1 *)(param_1 + 3) = 1;
  }
  if (*(char *)(param_2 + 5) != '\0') {
    param_1[4] = param_2[4];
    *(undefined1 *)(param_1 + 5) = 1;
  }
  if (*(char *)(param_2 + 7) != '\0') {
    param_1[6] = param_2[6];
    *(undefined1 *)(param_1 + 7) = 1;
  }
  if (*(char *)(param_2 + 9) != '\0') {
    param_1[8] = param_2[8];
    *(undefined1 *)(param_1 + 9) = 1;
  }
  if (*(char *)(param_2 + 0xb) != '\0') {
    param_1[10] = param_2[10];
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  if (*(char *)(param_2 + 0xd) != '\0') {
    param_1[0xc] = param_2[0xc];
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  if (*(char *)(param_2 + 0x13) != '\0') {
    param_1[0x12] = param_2[0x12];
    *(undefined1 *)(param_1 + 0x13) = 1;
  }
  if (*(char *)(param_2 + 0xf) != '\0') {
    param_1[0xe] = param_2[0xe];
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  if (*(char *)(param_2 + 0x11) != '\0') {
    param_1[0x10] = param_2[0x10];
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  if (*(char *)(param_2 + 0x15) != '\0') {
    param_1[0x14] = param_2[0x14];
    *(undefined1 *)(param_1 + 0x15) = 1;
  }
  if (*(char *)((long)param_2 + 0x59) != '\0') {
    *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
    *(undefined1 *)((long)param_1 + 0x59) = 1;
  }
  if (*(char *)(param_2 + 0x1e) != '\0') {
    FUN_00411268(param_1 + 0x18,param_2 + 0x18);
    *(undefined1 *)(param_1 + 0x1e) = 1;
  }
  if (*(char *)(param_2 + 0x26) != '\0') {
    FUN_00411268(param_1 + 0x20,param_2 + 0x20);
    *(undefined1 *)(param_1 + 0x26) = 1;
  }
  if (*(char *)(param_2 + 0x2e) != '\0') {
    if (param_1 != param_2) {
      FUN_0048a3d4(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x2a));
    }
    *(undefined1 *)(param_1 + 0x2e) = 1;
  }
  if (*(char *)((long)param_2 + 0xc1) != '\0') {
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
    *(undefined1 *)((long)param_1 + 0xc1) = 1;
  }
  if (*(char *)(param_2 + 0x38) != '\0') {
    FUN_00411268(param_1 + 0x32,param_2 + 0x32);
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  if (*(char *)((long)param_2 + 0xe9) != '\0') {
    *(undefined1 *)(param_1 + 0x3a) = *(undefined1 *)(param_2 + 0x3a);
    *(undefined1 *)((long)param_1 + 0xe9) = 1;
  }
  return;
}


// ===== 00489bf8  FUN_00489bf8 =====

void FUN_00489bf8(undefined4 *param_1,undefined4 *param_2)

{
  if (*(char *)(param_2 + 1) != '\0') {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  if (*(char *)((long)param_2 + 9) != '\0') {
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
    *(undefined1 *)((long)param_1 + 9) = 1;
  }
  if (*(char *)((long)param_2 + 0xb) != '\0') {
    *(undefined1 *)((long)param_1 + 10) = *(undefined1 *)((long)param_2 + 10);
    *(undefined1 *)((long)param_1 + 0xb) = 1;
  }
  return;
}


// ===== 00489c44  FUN_00489c44 =====

void FUN_00489c44(undefined4 *param_1,undefined4 *param_2)

{
  if (*(char *)(param_2 + 1) != '\0') {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  if (*(char *)(param_2 + 3) != '\0') {
    param_1[2] = param_2[2];
    *(undefined1 *)(param_1 + 3) = 1;
  }
  if (*(char *)(param_2 + 5) != '\0') {
    param_1[4] = param_2[4];
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return;
}


// ===== 00489c90  FUN_00489c90 =====

void FUN_00489c90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (*(char *)(param_2 + 4) != '\0') {
    uVar5 = param_2[2];
    puVar1 = (undefined8 *)param_2[3];
    uVar3 = *param_2;
    uVar2 = param_2[1];
    pcVar4 = (code *)*puVar1;
    if (pcVar4 != (code *)0x0) {
      uVar3 = (*pcVar4)();
    }
    lVar6 = param_1[3];
    param_1[2] = uVar5;
    param_1[3] = puVar1;
    uVar5 = *param_1;
    *param_1 = uVar3;
    param_1[1] = uVar2;
    if (*(code **)(lVar6 + 8) != (code *)0x0) {
      (**(code **)(lVar6 + 8))(uVar5);
    }
    *(undefined1 *)(param_1 + 4) = 1;
  }
  if (*(char *)(param_2 + 6) != '\0') {
    param_1[5] = param_2[5];
    *(undefined1 *)(param_1 + 6) = 1;
  }
  if (*(char *)((long)param_2 + 0x3c) != '\0') {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
    *(undefined1 *)((long)param_1 + 0x3c) = 1;
  }
  if (*(char *)((long)param_2 + 0x44) != '\0') {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined1 *)((long)param_1 + 0x44) = 1;
  }
  if (*(char *)((long)param_2 + 0x4c) != '\0') {
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
    *(undefined1 *)((long)param_1 + 0x4c) = 1;
  }
  if (*(char *)((long)param_2 + 0x51) != '\0') {
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
    *(undefined1 *)((long)param_1 + 0x51) = 1;
  }
  if (*(char *)(param_2 + 0xb) != '\0') {
    *(undefined4 *)((long)param_1 + 0x54) = *(undefined4 *)((long)param_2 + 0x54);
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  if (*(char *)(param_2 + 0xc) != '\0') {
    *(undefined4 *)((long)param_1 + 0x5c) = *(undefined4 *)((long)param_2 + 0x5c);
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  return;
}


// ===== 00489dac  FUN_00489dac =====

void FUN_00489dac(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  
  if (*(char *)(param_2 + 0x68) != '\0') {
    if (*(char *)(param_1 + 0xd) == '\0') {
      param_1[2] = FUN_004547f0;
      pcVar1 = *(code **)(param_1[3] + 8);
      param_1[3] = &DAT_001f1910;
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(*param_1);
      }
      param_1[2] = FUN_004547f0;
      param_1[3] = &DAT_001f1910;
      *(undefined1 *)(param_1 + 4) = 0;
      param_1[5] = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined4 *)(param_1 + 7) = 0;
      *(undefined1 *)((long)param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined1 *)((long)param_1 + 0x44) = 0;
      *(undefined4 *)(param_1 + 9) = 0;
      *(undefined1 *)((long)param_1 + 0x4c) = 0;
      *(undefined2 *)(param_1 + 10) = 0;
      *(undefined4 *)((long)param_1 + 0x54) = 0;
      *(undefined1 *)(param_1 + 0xb) = 0;
      *(undefined4 *)((long)param_1 + 0x5c) = 0;
      *(undefined1 *)(param_1 + 0xc) = 0;
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
    FUN_00489c90(param_1,param_2);
  }
  if (*(char *)(param_2 + 0x78) != '\0') {
    if (*(char *)(param_1 + 0xf) == '\0') {
      *(undefined4 *)(param_1 + 0xe) = 0;
      *(undefined1 *)((long)param_1 + 0x74) = 0;
      *(undefined1 *)(param_1 + 0xf) = 1;
    }
    if (*(char *)(param_2 + 0x74) != '\0') {
      *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x70);
      *(undefined1 *)((long)param_1 + 0x74) = 1;
    }
  }
  return;
}


// ===== 00489e98  FUN_00489e98 =====

void FUN_00489e98(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 3) != '\0') {
    if (param_1 != param_2) {
      FUN_0048a868(param_1,*param_2,param_2[1]);
    }
    *(undefined1 *)(param_1 + 3) = 1;
  }
  if (*(char *)(param_2 + 0xb) != '\0') {
    *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
    FUN_00411268(param_1 + 5,param_2 + 5);
    if (param_1 != param_2) {
      FUN_0046cff4(param_1 + 8,param_2[8],param_2 + 9);
    }
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  if (*(char *)(param_2 + 0xf) != '\0') {
    if (param_1 != param_2) {
      FUN_0048ab3c(param_1 + 0xc,param_2[0xc],param_2[0xd]);
    }
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  if (*(char *)(param_2 + 0x17) != '\0') {
    *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
    FUN_00411268(param_1 + 0x11,param_2 + 0x11);
    uVar2 = param_2[0x14];
    uVar1 = *(undefined2 *)(param_2 + 0x16);
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar2;
    *(undefined2 *)(param_1 + 0x16) = uVar1;
    *(undefined1 *)(param_1 + 0x17) = 1;
  }
  if (*(char *)((long)param_2 + 0xc1) != '\0') {
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
    *(undefined1 *)((long)param_1 + 0xc1) = 1;
  }
  if (*(char *)((long)param_2 + 0xc3) != '\0') {
    *(undefined1 *)((long)param_1 + 0xc2) = *(undefined1 *)((long)param_2 + 0xc2);
    *(undefined1 *)((long)param_1 + 0xc3) = 1;
  }
  return;
}


// ===== 00489fa0  FUN_00489fa0 =====

void FUN_00489fa0(undefined4 *param_1,undefined4 *param_2)

{
  if (*(char *)(param_2 + 1) != '\0') {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}


// ===== 00489fbc  FUN_00489fbc =====

void FUN_00489fbc(long *param_1,uint param_2,uint param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if ((param_3 & 1) == 0) {
    if ((param_2 & 1) == 0) {
      lVar3 = FUN_005183d8();
      do {
        if (*param_1 != 0x7fffffffffffffff) {
          ClearExclusiveLocal();
          break;
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = lVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        if (*param_1 != -0x8000000000000000) {
          ClearExclusiveLocal();
          return;
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = lVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    else {
      do {
        lVar3 = *param_1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = 0x7fffffffffffffff;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar3 != 0x7fffffffffffffff) {
        param_1 = param_1 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar2) {
            *(int *)param_1 = (int)*param_1 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
  }
  else {
    *param_1 = -0x8000000000000000;
  }
  return;
}


// ===== 0048a064  FUN_0048a064 =====

void FUN_0048a064(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}


// ===== 0048a070  FUN_0048a070 =====

byte FUN_0048a070(long param_1)

{
  return *(byte *)(param_1 + 0xc) & 1;
}


// ===== 0048a080  FUN_0048a080 =====

bool FUN_0048a080(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == -0x8000000000000000) {
    return (bool)2;
  }
  if (lVar2 != 0) {
    if (lVar2 == 0x7fffffffffffffff) {
      return true;
    }
    if (param_2 != 0) {
      lVar1 = FUN_005183d8();
      return lVar1 < lVar2 + param_2 * 1000000;
    }
  }
  return false;
}


// ===== 0048a0ec  FUN_0048a0ec =====

undefined4 FUN_0048a0ec(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


// ===== 0048a0f4  FUN_0048a0f4 =====

undefined8 * FUN_0048a0f4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  undefined8 *__dest;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
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
    uVar4 = param_2[1];
    uVar3 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar4;
    *param_1 = uVar3;
  }
  return param_1;
}


// ===== 0048a1f0  FUN_0048a1f0 =====

void FUN_0048a1f0(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  size_t __n;
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  void *pvVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar2 = param_1[2];
  pvVar11 = (void *)*param_1;
  uVar10 = (long)param_3 - (long)param_2;
  if (uVar2 - (long)pvVar11 < uVar10) {
    if (pvVar11 != (void *)0x0) {
      param_1[1] = pvVar11;
      operator_delete(pvVar11);
      uVar2 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if ((long)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar6 = uVar2 * 2;
    if (uVar6 < uVar10 || uVar6 - uVar10 == 0) {
      uVar6 = uVar10;
    }
    if (0x3ffffffffffffffe < uVar2) {
      uVar6 = 0x7fffffffffffffff;
    }
    if ((long)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar11 = operator_new(uVar6);
    *param_1 = pvVar11;
    param_1[1] = pvVar11;
    param_1[2] = (long)pvVar11 + uVar6;
    if (param_2 != param_3) {
      memcpy(pvVar11,param_2,uVar10);
      pvVar11 = (void *)((long)pvVar11 + uVar10);
    }
    param_1[1] = pvVar11;
  }
  else {
    uVar6 = param_1[1];
    uVar2 = uVar6 - (long)pvVar11;
    puVar12 = param_2 + uVar2;
    puVar7 = puVar12;
    if (uVar10 <= uVar2) {
      puVar7 = param_3;
    }
    __n = (long)puVar7 - (long)param_2;
    if (__n != 0) {
      memmove(pvVar11,param_2,__n);
    }
    if (uVar2 < uVar10) {
      puVar3 = (undefined1 *)param_1[1];
      if (puVar7 != param_3) {
        puVar7 = (undefined1 *)((long)pvVar11 + (long)param_3) + (~uVar6 - (long)param_2);
        if ((undefined1 *)-(long)puVar3 < puVar7) {
          puVar7 = (undefined1 *)-(long)puVar3;
        }
        puVar7 = puVar7 + 1;
        puVar5 = puVar3;
        if (((undefined1 *)0x20 < puVar7) &&
           ((undefined1 *)0x1f < puVar3 + ((long)pvVar11 - (long)(param_2 + uVar6)))) {
          uVar10 = 0x20;
          if (((ulong)puVar7 & 0x1f) != 0) {
            uVar10 = (ulong)puVar7 & 0x1f;
          }
          lVar8 = (long)puVar7 - uVar10;
          puVar9 = (undefined8 *)(param_2 + uVar2 + 0x10);
          puVar5 = puVar3 + lVar8;
          puVar12 = puVar12 + lVar8;
          puVar4 = (undefined8 *)(puVar3 + 0x10);
          do {
            puVar1 = puVar9 + -1;
            uVar13 = puVar9[-2];
            uVar15 = puVar9[1];
            uVar14 = *puVar9;
            lVar8 = lVar8 + -0x20;
            puVar9 = puVar9 + 4;
            puVar4[-1] = *puVar1;
            puVar4[-2] = uVar13;
            puVar4[1] = uVar15;
            *puVar4 = uVar14;
            puVar4 = puVar4 + 4;
          } while (lVar8 != 0);
        }
        do {
          if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                       ,0x23,"__location != nullptr","null pointer given to construct_at");
          }
          puVar7 = puVar12 + 1;
          puVar3 = puVar5 + 1;
          *puVar5 = *puVar12;
          puVar5 = puVar3;
          puVar12 = puVar7;
        } while (puVar7 != param_3);
      }
    }
    else {
      puVar3 = (undefined1 *)((long)pvVar11 + __n);
    }
    param_1[1] = puVar3;
  }
  return;
}


// ===== 0048a3d4  FUN_0048a3d4 =====

/* WARNING: Removing unreachable block (ram,0x0048a45c) */
/* WARNING: Removing unreachable block (ram,0x0048a5d8) */

void FUN_0048a3d4(undefined8 *param_1,long param_2,long param_3)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  
  lVar2 = param_1[2];
  pvVar7 = (void *)*param_1;
  lVar4 = param_3 - param_2 >> 3;
  lVar6 = lVar2 - (long)pvVar7 >> 3;
  uVar8 = lVar4 * -0x5555555555555555;
  if (uVar8 < (ulong)(lVar6 * -0x5555555555555555) || uVar8 + lVar6 * 0x5555555555555555 == 0) {
    lVar6 = param_1[1] - (long)pvVar7 >> 3;
    lVar2 = param_2 + (param_1[1] - (long)pvVar7);
    lVar4 = lVar2;
    if (uVar8 < (ulong)(lVar6 * -0x5555555555555555) || uVar8 + lVar6 * 0x5555555555555555 == 0) {
      lVar4 = param_3;
    }
    pvVar1 = pvVar7;
    if (lVar4 != param_2) {
      do {
        FUN_00411268(pvVar7,param_2);
        param_2 = param_2 + 0x18;
        pvVar7 = (void *)((long)pvVar7 + 0x18);
        pvVar1 = (void *)((long)pvVar1 + 0x18);
      } while (param_2 != lVar4);
    }
    pvVar7 = (void *)param_1[1];
    if (uVar8 < (ulong)(lVar6 * -0x5555555555555555) || uVar8 + lVar6 * 0x5555555555555555 == 0) {
      for (; pvVar7 != pvVar1; pvVar7 = (void *)((long)pvVar7 + -0x18)) {
      }
      param_1[1] = pvVar1;
    }
    else {
      while (lVar4 != param_3) {
        FUN_0048a0f4(pvVar7,lVar2);
        pvVar7 = (void *)((long)pvVar7 + 0x18);
        lVar2 = lVar2 + 0x18;
        lVar4 = lVar2;
      }
      param_1[1] = pvVar7;
    }
  }
  else {
    if (pvVar7 != (void *)0x0) {
      pvVar3 = (void *)param_1[1];
      pvVar1 = pvVar7;
      if (pvVar3 != pvVar7) {
        do {
          pvVar3 = (void *)((long)pvVar3 + -0x18);
        } while (pvVar3 != pvVar7);
        pvVar1 = (void *)*param_1;
      }
      param_1[1] = pvVar7;
      operator_delete(pvVar1);
      lVar2 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (0xaaaaaaaaaaaaaaa < uVar8) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar5 = (lVar2 >> 3) * 0x5555555555555556;
    if (uVar5 < uVar8 || uVar5 + lVar4 * 0x5555555555555555 == 0) {
      uVar5 = uVar8;
    }
    if (0x555555555555554 < (ulong)((lVar2 >> 3) * -0x5555555555555555)) {
      uVar5 = 0xaaaaaaaaaaaaaaa;
    }
    if (0xaaaaaaaaaaaaaaa < uVar5) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar7 = operator_new(uVar5 * 0x18);
    *param_1 = pvVar7;
    param_1[1] = pvVar7;
    param_1[2] = (void *)((long)pvVar7 + uVar5 * 0x18);
    if (param_2 != param_3) {
      do {
        FUN_0048a0f4(pvVar7,param_2);
        param_2 = param_2 + 0x18;
        pvVar7 = (void *)((long)pvVar7 + 0x18);
      } while (param_2 != param_3);
    }
    param_1[1] = pvVar7;
  }
  return;
}


// ===== 0048a5ec  FUN_0048a5ec =====

/* WARNING: Removing unreachable block (ram,0x0048a7ac) */

undefined4 * FUN_0048a5ec(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar3 = *(undefined1 *)(param_2 + 1);
  uVar4 = *(undefined1 *)(param_2 + 7);
  *param_1 = *param_2;
  uVar1 = param_2[2];
  *(undefined1 *)(param_1 + 1) = uVar3;
  uVar3 = *(undefined1 *)(param_2 + 0x13);
  *(undefined1 *)(param_1 + 7) = uVar4;
  uVar4 = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)(param_2 + 1) = 0;
  param_1[2] = uVar1;
  uVar1 = param_2[4];
  *(undefined1 *)(param_1 + 0x13) = uVar3;
  uVar3 = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined1 *)(param_1 + 9) = uVar4;
  param_1[4] = uVar1;
  uVar4 = *(undefined1 *)(param_2 + 0xb);
  uVar1 = param_2[6];
  *(undefined1 *)(param_1 + 3) = uVar3;
  uVar3 = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined1 *)(param_2 + 9) = 0;
  param_1[6] = uVar1;
  uVar1 = param_2[8];
  *(undefined1 *)(param_1 + 5) = uVar3;
  *(undefined1 *)(param_1 + 0xb) = uVar4;
  uVar3 = *(undefined1 *)(param_2 + 0xf);
  uVar4 = *(undefined1 *)(param_2 + 0xd);
  *(undefined1 *)(param_2 + 5) = 0;
  param_1[8] = uVar1;
  uVar1 = param_2[10];
  *(undefined1 *)(param_1 + 0xf) = uVar3;
  *(undefined1 *)(param_2 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xd) = uVar4;
  uVar3 = *(undefined1 *)(param_2 + 0x11);
  param_1[10] = uVar1;
  uVar4 = *(undefined1 *)(param_2 + 0x15);
  uVar1 = param_2[0xc];
  *(undefined1 *)(param_2 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x11) = uVar3;
  uVar3 = *(undefined1 *)((long)param_2 + 0x59);
  *(undefined1 *)(param_2 + 0xd) = 0;
  param_1[0xc] = uVar1;
  uVar1 = param_2[0xe];
  *(undefined1 *)(param_1 + 0x15) = uVar4;
  *(undefined1 *)(param_2 + 0x13) = 0;
  uVar4 = *(undefined1 *)(param_2 + 0x16);
  *(undefined1 *)(param_2 + 0x11) = 0;
  param_1[0xe] = uVar1;
  uVar1 = param_2[0x10];
  *(undefined1 *)(param_2 + 0x15) = 0;
  *(undefined1 *)((long)param_1 + 0x59) = uVar3;
  uVar2 = param_2[0x12];
  *(undefined1 *)((long)param_2 + 0x59) = 0;
  param_1[0x10] = uVar1;
  uVar1 = param_2[0x14];
  param_1[0x12] = uVar2;
  *(undefined1 *)(param_1 + 0x16) = uVar4;
  param_1[0x14] = uVar1;
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  uVar10 = *(undefined8 *)(param_2 + 0x1a);
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1a) = uVar10;
  *(undefined8 *)(param_1 + 0x18) = uVar9;
  *(undefined1 *)((long)param_2 + 0x77) = 0;
  *(undefined1 *)(param_2 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
  *(undefined1 *)(param_2 + 0x1e) = 0;
  if (*(char *)((long)param_1 + 0x97) < '\0') {
    operator_delete(*(void **)(param_1 + 0x20));
  }
  uVar10 = *(undefined8 *)(param_2 + 0x22);
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x22) = uVar10;
  *(undefined8 *)(param_1 + 0x20) = uVar9;
  *(undefined1 *)((long)param_2 + 0x97) = 0;
  *(undefined1 *)(param_2 + 0x20) = 0;
  puVar7 = (undefined8 *)(param_1 + 0x28);
  pvVar8 = (void *)*puVar7;
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
  *(undefined1 *)(param_2 + 0x26) = 0;
  if (pvVar8 != (void *)0x0) {
    pvVar6 = *(void **)(param_1 + 0x2a);
    pvVar5 = pvVar8;
    if (pvVar6 != pvVar8) {
      do {
        pvVar6 = (void *)((long)pvVar6 + -0x18);
      } while (pvVar6 != pvVar8);
      pvVar5 = (void *)*puVar7;
    }
    *(void **)(param_1 + 0x2a) = pvVar8;
    operator_delete(pvVar5);
    *puVar7 = 0;
    *(undefined8 *)(param_1 + 0x2a) = 0;
    *(undefined8 *)(param_1 + 0x2c) = 0;
  }
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined1 *)((long)param_2 + 0xc1);
  *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
  *(undefined8 *)(param_1 + 0x28) = uVar9;
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_2 + 0x2a) = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(param_2 + 0x2e);
  *(undefined1 *)(param_2 + 0x2e) = 0;
  uVar4 = *(undefined1 *)(param_2 + 0x30);
  *(undefined1 *)((long)param_1 + 0xc1) = uVar3;
  *(undefined1 *)((long)param_2 + 0xc1) = 0;
  *(undefined1 *)(param_1 + 0x30) = uVar4;
  if (*(char *)((long)param_1 + 0xdf) < '\0') {
    operator_delete(*(void **)(param_1 + 0x32));
  }
  uVar10 = *(undefined8 *)(param_2 + 0x34);
  uVar9 = *(undefined8 *)(param_2 + 0x32);
  *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x36);
  *(undefined8 *)(param_1 + 0x34) = uVar10;
  *(undefined8 *)(param_1 + 0x32) = uVar9;
  *(undefined1 *)((long)param_2 + 0xdf) = 0;
  *(undefined1 *)(param_2 + 0x32) = 0;
  uVar3 = *(undefined1 *)((long)param_2 + 0xe9);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  uVar4 = *(undefined1 *)(param_2 + 0x3a);
  *(undefined1 *)((long)param_1 + 0xe9) = uVar3;
  *(undefined1 *)(param_2 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x3a) = uVar4;
  *(undefined1 *)((long)param_2 + 0xe9) = 0;
  return param_1;
}


// ===== 0048a868  FUN_0048a868 =====

/* WARNING: Removing unreachable block (ram,0x0048a910) */
/* WARNING: Removing unreachable block (ram,0x0048aa1c) */

void FUN_0048a868(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  void *pvVar12;
  ulong uVar13;
  
  lVar4 = param_1[2];
  pvVar12 = (void *)*param_1;
  lVar6 = (long)param_3 - (long)param_2 >> 3;
  lVar8 = lVar4 - (long)pvVar12 >> 3;
  uVar13 = lVar6 * 0x6db6db6db6db6db7;
  if (uVar13 < (ulong)(lVar8 * 0x6db6db6db6db6db7) || uVar13 + lVar8 * -0x6db6db6db6db6db7 == 0) {
    lVar4 = param_1[1] - (long)pvVar12 >> 3;
    puVar2 = (undefined8 *)((long)param_2 + (param_1[1] - (long)pvVar12));
    puVar3 = puVar2;
    if (uVar13 < (ulong)(lVar4 * 0x6db6db6db6db6db7) || uVar13 + lVar4 * -0x6db6db6db6db6db7 == 0) {
      puVar3 = param_3;
    }
    if (puVar3 != param_2) {
      puVar10 = (undefined8 *)((long)pvVar12 + 0x20);
      puVar11 = param_2 + 5;
      puVar9 = param_2 + 4;
      do {
        *(undefined2 *)(puVar10 + -4) = *(undefined2 *)(puVar9 + -4);
        FUN_00411268(puVar10 + -3,puVar9 + -3);
        if (puVar10 != puVar9) {
          FUN_0046cff4(puVar10,*puVar9,puVar11);
        }
        pvVar12 = (void *)((long)pvVar12 + 0x38);
        puVar10 = puVar10 + 7;
        puVar11 = puVar11 + 7;
        puVar1 = puVar9 + 3;
        puVar9 = puVar9 + 7;
      } while (puVar1 != puVar3);
    }
    pvVar5 = (void *)param_1[1];
    if (uVar13 < (ulong)(lVar4 * 0x6db6db6db6db6db7) || uVar13 + lVar4 * -0x6db6db6db6db6db7 == 0) {
      if (pvVar5 != pvVar12) {
        lVar4 = (long)pvVar5 + -0x18;
        do {
          FUN_00441e1c(lVar4,*(undefined8 *)(lVar4 + 8));
          pvVar5 = (void *)(lVar4 + -0x20);
          lVar4 = lVar4 + -0x38;
        } while (pvVar5 != pvVar12);
      }
      param_1[1] = pvVar12;
    }
    else {
      while (puVar3 != param_3) {
        if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        FUN_00441364(pvVar5,puVar2);
        pvVar5 = (void *)((long)pvVar5 + 0x38);
        puVar2 = puVar2 + 7;
        puVar3 = puVar2;
      }
      param_1[1] = pvVar5;
    }
  }
  else {
    if (pvVar12 != (void *)0x0) {
      pvVar5 = pvVar12;
      if ((void *)param_1[1] != pvVar12) {
        lVar4 = (long)param_1[1] + -0x18;
        do {
          FUN_00441e1c(lVar4,*(undefined8 *)(lVar4 + 8));
          pvVar5 = (void *)(lVar4 + -0x20);
          lVar4 = lVar4 + -0x38;
        } while (pvVar5 != pvVar12);
        pvVar5 = (void *)*param_1;
      }
      param_1[1] = pvVar12;
      operator_delete(pvVar5);
      lVar4 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (0x492492492492492 < uVar13) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar7 = (lVar4 >> 3) * -0x2492492492492492;
    if (uVar7 < uVar13 || uVar7 + lVar6 * -0x6db6db6db6db6db7 == 0) {
      uVar7 = uVar13;
    }
    if (0x249249249249248 < (ulong)((lVar4 >> 3) * 0x6db6db6db6db6db7)) {
      uVar7 = 0x492492492492492;
    }
    if (0x492492492492492 < uVar7) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar12 = operator_new(uVar7 * 0x38);
    *param_1 = pvVar12;
    param_1[1] = pvVar12;
    param_1[2] = (void *)((long)pvVar12 + uVar7 * 0x38);
    if (param_2 != param_3) {
      do {
        FUN_00441364(pvVar12,param_2);
        param_2 = param_2 + 7;
        pvVar12 = (void *)((long)pvVar12 + 0x38);
      } while (param_2 != param_3);
    }
    param_1[1] = pvVar12;
  }
  return;
}


// ===== 0048ab3c  FUN_0048ab3c =====

/* WARNING: Removing unreachable block (ram,0x0048abc8) */
/* WARNING: Removing unreachable block (ram,0x0048acd0) */

void FUN_0048ab3c(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  undefined1 *puVar7;
  void *pvVar8;
  ulong uVar9;
  
  uVar4 = param_1[2];
  pvVar8 = (void *)*param_1;
  uVar9 = (long)param_3 - (long)param_2 >> 6;
  if ((ulong)((long)(uVar4 - (long)pvVar8) >> 6) < uVar9) {
    if (pvVar8 != (void *)0x0) {
      pvVar5 = pvVar8;
      if ((void *)param_1[1] != pvVar8) {
        lVar6 = (long)param_1[1] + -0x18;
        do {
          FUN_00441e1c(lVar6,*(undefined8 *)(lVar6 + 8));
          pvVar5 = (void *)(lVar6 + -0x28);
          lVar6 = lVar6 + -0x40;
        } while (pvVar5 != pvVar8);
        pvVar5 = (void *)*param_1;
      }
      param_1[1] = pvVar8;
      operator_delete(pvVar5);
      uVar4 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if ((long)param_3 - (long)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar3 = uVar4 >> 5;
    if (uVar4 >> 5 <= uVar9) {
      uVar3 = uVar9;
    }
    if (0x7fffffffffffffbf < uVar4) {
      uVar3 = 0x3ffffffffffffff;
    }
    if (uVar3 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar8 = operator_new(uVar3 * 0x40);
    *param_1 = pvVar8;
    param_1[1] = pvVar8;
    param_1[2] = (void *)((long)pvVar8 + uVar3 * 0x40);
    if (param_2 != param_3) {
      do {
        FUN_00441b00(pvVar8,param_2);
        param_2 = param_2 + 0x40;
        pvVar8 = (void *)((long)pvVar8 + 0x40);
      } while (param_2 != param_3);
    }
    param_1[1] = pvVar8;
  }
  else {
    uVar4 = param_1[1] - (long)pvVar8 >> 6;
    puVar1 = param_2 + (param_1[1] - (long)pvVar8);
    puVar2 = puVar1;
    if (uVar9 <= uVar4) {
      puVar2 = param_3;
    }
    if (puVar2 != param_2) {
      lVar6 = (long)pvVar8 + 0x28;
      puVar7 = param_2 + 0x30;
      do {
        *(undefined1 *)(lVar6 + -0x28) = *param_2;
        FUN_00411268(lVar6 + -0x20,param_2 + 8);
        *(undefined8 *)(lVar6 + -8) = *(undefined8 *)(param_2 + 0x20);
        if ((undefined1 *)(lVar6 + -0x28) != param_2) {
          FUN_0046cff4(lVar6,*(undefined8 *)(param_2 + 0x28),puVar7);
        }
        pvVar8 = (void *)((long)pvVar8 + 0x40);
        lVar6 = lVar6 + 0x40;
        puVar7 = puVar7 + 0x40;
        param_2 = param_2 + 0x40;
      } while (param_2 != puVar2);
    }
    pvVar5 = (void *)param_1[1];
    if (uVar4 < uVar9) {
      while (puVar2 != param_3) {
        if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        FUN_00441b00(pvVar5,puVar1);
        pvVar5 = (void *)((long)pvVar5 + 0x40);
        puVar1 = puVar1 + 0x40;
        puVar2 = puVar1;
      }
      param_1[1] = pvVar5;
    }
    else {
      if (pvVar5 != pvVar8) {
        lVar6 = (long)pvVar5 + -0x18;
        do {
          FUN_00441e1c(lVar6,*(undefined8 *)(lVar6 + 8));
          pvVar5 = (void *)(lVar6 + -0x28);
          lVar6 = lVar6 + -0x40;
        } while (pvVar5 != pvVar8);
      }
      param_1[1] = pvVar8;
    }
  }
  return;
}


// ===== 0048adb8  FUN_0048adb8 =====

/* WARNING: Removing unreachable block (ram,0x0048aef8) */

undefined4 * FUN_0048adb8(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  void *pvVar7;
  void *pvVar8;
  undefined8 uVar9;
  void *pvVar10;
  
  uVar2 = *param_2;
  uVar3 = *(undefined1 *)((long)param_2 + 9);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar4 = *(undefined1 *)(param_2 + 2);
  *param_1 = uVar2;
  *(undefined1 *)((long)param_1 + 9) = uVar3;
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = uVar4;
  *(undefined1 *)((long)param_2 + 9) = 0;
  uVar9 = *(undefined8 *)(param_2 + 3);
  param_1[5] = param_2[5];
  *(undefined8 *)(param_1 + 3) = uVar9;
  uVar3 = *(undefined1 *)((long)param_2 + 0x21);
  uVar4 = *(undefined1 *)(param_2 + 0xc);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar5 = *(undefined1 *)(param_2 + 0xe);
  uVar6 = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((long)param_1 + 0x21) = uVar3;
  uVar3 = *(undefined1 *)((long)param_2 + 0x23);
  *(undefined1 *)((long)param_2 + 0x21) = 0;
  uVar9 = *(undefined8 *)(param_2 + 10);
  *(undefined1 *)(param_2 + 6) = 0;
  *(undefined1 *)(param_1 + 8) = uVar6;
  uVar6 = *(undefined1 *)((long)param_2 + 0x22);
  *(undefined1 *)((long)param_1 + 0x23) = uVar3;
  *(undefined1 *)(param_1 + 0xc) = uVar4;
  *(undefined1 *)(param_1 + 0xe) = uVar5;
  *(undefined8 *)(param_1 + 10) = uVar9;
  *(undefined1 *)((long)param_1 + 0x22) = uVar6;
  *(undefined1 *)((long)param_2 + 0x23) = 0;
  *(undefined1 *)(param_2 + 0xc) = 0;
  *(undefined1 *)(param_2 + 0xe) = 0;
  FUN_0048a5ec(param_1 + 0x10,param_2 + 0x10);
  puVar1 = (undefined8 *)(param_1 + 0x52);
  uVar3 = *(undefined1 *)(param_2 + 0x4f);
  uVar4 = *(undefined1 *)((long)param_2 + 0x141);
  *(undefined1 *)(param_1 + 0x4c) = *(undefined1 *)(param_2 + 0x4c);
  uVar2 = param_2[0x4e];
  *(undefined1 *)(param_1 + 0x4f) = uVar3;
  pvVar10 = *(void **)(param_1 + 0x52);
  uVar3 = *(undefined1 *)(param_2 + 0x50);
  *(undefined1 *)((long)param_1 + 0x141) = uVar4;
  param_1[0x4e] = uVar2;
  uVar4 = *(undefined1 *)((long)param_2 + 0x143);
  uVar5 = *(undefined1 *)(param_2 + 0x51);
  *(undefined1 *)((long)param_2 + 0x141) = 0;
  *(undefined1 *)(param_1 + 0x50) = uVar3;
  uVar3 = *(undefined1 *)((long)param_2 + 0x142);
  *(undefined1 *)((long)param_1 + 0x143) = uVar4;
  *(undefined1 *)(param_2 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x51) = uVar5;
  *(undefined1 *)((long)param_1 + 0x142) = uVar3;
  *(undefined1 *)(param_2 + 0x4f) = 0;
  *(undefined1 *)((long)param_2 + 0x143) = 0;
  *(undefined1 *)(param_2 + 0x51) = 0;
  if (pvVar10 != (void *)0x0) {
    pvVar8 = *(void **)(param_1 + 0x54);
    pvVar7 = pvVar10;
    if (pvVar8 != pvVar10) {
      do {
        pvVar8 = (void *)((long)pvVar8 + -0x48);
      } while (pvVar8 != pvVar10);
      pvVar7 = (void *)*puVar1;
    }
    *(void **)(param_1 + 0x54) = pvVar10;
    operator_delete(pvVar7);
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x54) = 0;
    *(undefined8 *)(param_1 + 0x56) = 0;
  }
  uVar9 = *(undefined8 *)(param_2 + 0x52);
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_2 + 0x54);
  *puVar1 = uVar9;
  *(undefined8 *)(param_1 + 0x56) = *(undefined8 *)(param_2 + 0x56);
  *(undefined8 *)(param_2 + 0x54) = 0;
  *(undefined8 *)(param_2 + 0x56) = 0;
  *(undefined8 *)(param_2 + 0x52) = 0;
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  *(undefined1 *)(param_2 + 0x58) = 0;
  return param_1;
}


// ===== 0048af58  FUN_0048af58 =====

/* WARNING: Removing unreachable block (ram,0x0048afbc) */
/* WARNING: Removing unreachable block (ram,0x0048b0dc) */

undefined8 * FUN_0048af58(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  pvVar7 = (void *)*param_1;
  if (pvVar7 != (void *)0x0) {
    pvVar4 = pvVar7;
    if ((void *)param_1[1] != pvVar7) {
      lVar5 = (long)param_1[1] + -0x18;
      do {
        FUN_00441e1c(lVar5,*(undefined8 *)(lVar5 + 8));
        pvVar4 = (void *)(lVar5 + -0x20);
        lVar5 = lVar5 + -0x38;
      } while (pvVar4 != pvVar7);
      pvVar4 = (void *)*param_1;
    }
    param_1[1] = pvVar7;
    operator_delete(pvVar4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  uVar10 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar10;
  param_1[2] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  uVar11 = param_2[6];
  uVar10 = param_2[5];
  param_1[7] = param_2[7];
  param_1[6] = uVar11;
  param_1[5] = uVar10;
  *(undefined1 *)((long)param_2 + 0x3f) = 0;
  *(undefined1 *)(param_2 + 5) = 0;
  plVar8 = param_1 + 9;
  FUN_00441e1c(param_1 + 8,*plVar8);
  param_1[8] = param_2[8];
  plVar3 = param_2 + 9;
  lVar5 = *plVar3;
  *plVar8 = lVar5;
  lVar6 = param_2[10];
  param_1[10] = lVar6;
  if (lVar6 == 0) {
    param_1[8] = plVar8;
  }
  else {
    *(long **)(lVar5 + 0x10) = plVar8;
    param_2[8] = plVar3;
    *plVar3 = 0;
    param_2[10] = 0;
  }
  puVar9 = param_1 + 0xc;
  pvVar7 = (void *)*puVar9;
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  *(undefined1 *)(param_2 + 0xb) = 0;
  if (pvVar7 != (void *)0x0) {
    pvVar4 = pvVar7;
    if ((void *)param_1[0xd] != pvVar7) {
      lVar5 = (long)param_1[0xd] + -0x18;
      do {
        FUN_00441e1c(lVar5,*(undefined8 *)(lVar5 + 8));
        pvVar4 = (void *)(lVar5 + -0x28);
        lVar5 = lVar5 + -0x40;
      } while (pvVar4 != pvVar7);
      pvVar4 = (void *)*puVar9;
    }
    param_1[0xd] = pvVar7;
    operator_delete(pvVar4);
    *puVar9 = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  uVar10 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar10;
  param_1[0xe] = param_2[0xe];
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xc] = 0;
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  *(undefined1 *)(param_2 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  if (*(char *)((long)param_1 + 0x9f) < '\0') {
    operator_delete((void *)param_1[0x11]);
  }
  uVar11 = param_2[0x12];
  uVar10 = param_2[0x11];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar11;
  param_1[0x11] = uVar10;
  *(undefined1 *)((long)param_2 + 0x9f) = 0;
  uVar11 = param_2[0x15];
  uVar10 = param_2[0x14];
  *(undefined1 *)(param_2 + 0x11) = 0;
  *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_2 + 0x16);
  param_1[0x15] = uVar11;
  param_1[0x14] = uVar10;
  uVar1 = *(undefined1 *)((long)param_2 + 0xc1);
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  uVar2 = *(undefined1 *)(param_2 + 0x18);
  *(undefined1 *)((long)param_1 + 0xc1) = uVar1;
  uVar1 = *(undefined1 *)((long)param_2 + 0xc3);
  *(undefined1 *)((long)param_2 + 0xc1) = 0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x18) = uVar2;
  uVar2 = *(undefined1 *)((long)param_2 + 0xc2);
  *(undefined1 *)((long)param_1 + 0xc3) = uVar1;
  *(undefined1 *)((long)param_1 + 0xc2) = uVar2;
  *(undefined1 *)((long)param_2 + 0xc3) = 0;
  return param_1;
}


// ===== 0048b1b0  _INIT_2 =====

/* WARNING: Removing unreachable block (ram,0x0048bc24) */
/* WARNING: Removing unreachable block (ram,0x0048bc14) */
/* WARNING: Removing unreachable block (ram,0x0048bc08) */
/* WARNING: Removing unreachable block (ram,0x0048bbf8) */
/* WARNING: Removing unreachable block (ram,0x0048bc34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  long *local_1d0;
  long local_1c8;
  long local_1c0;
  undefined1 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined2 local_188;
  void *local_180 [2];
  char local_169;
  void *local_168;
  char local_151;
  undefined1 local_150 [8];
  undefined4 local_148;
  uint auStack_144 [4];
  char local_131;
  undefined8 local_130;
  undefined8 *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined2 local_a8 [4];
  undefined2 local_a0;
  undefined1 uStack_9e;
  undefined auStack_9d [20];
  undefined1 local_89;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  DAT_00d60324 = DAT_001f5a78;
  DAT_00d60380 = FUN_0048870c;
  DAT_00d60388 = &DAT_001f1910;
  DAT_00d603a8 = FUN_00488718;
  DAT_00d603b0 = &DAT_001f1910;
  _DAT_00d60320 = 0x100;
  DAT_00d6032c = 3;
  DAT_00d60330 = 1;
  uRam0000000000d60340 = 0;
  _DAT_00d60338 = 0;
  uRam0000000000d60350 = 0;
  _DAT_00d60348 = 0;
  uRam0000000000d60360 = 0;
  _DAT_00d60358 = 0;
  DAT_00d60368 = 0;
  DAT_00d60390 = 1;
  DAT_00d603b8 = 1;
  DAT_00d603c0 = 0;
  DAT_00d603c4 = 1;
  DAT_00d603c8 = 60000;
  DAT_00d603cc = 1;
  DAT_00d603d0 = 0;
  DAT_00d603d4 = 0;
  __cxa_atexit(FUN_00489550,&DAT_00d60320,&PTR_LOOP_00d19390);
  _DAT_00d603d8 = 0x1000100;
  DAT_00d603f0 = 2500000;
  DAT_00d60400 = 2500000;
  DAT_00d603e0 = 0;
  DAT_00d603f8 = 400000;
  DAT_00d60410 = 0x2d0;
  DAT_00d603e8 = 1;
  DAT_00d60408 = 0x500;
  DAT_00d603f4 = 1;
  DAT_00d603fc = 1;
  DAT_00d60418 = 0x1e;
  DAT_00d60420 = 0x1e;
  DAT_00d60404 = 1;
  DAT_00d6040c = 1;
  DAT_00d60414 = 1;
  DAT_00d6041c = 1;
  DAT_00d60424 = 1;
  DAT_00d60428 = 0;
  DAT_00d6042c = 1;
  DAT_00d60430 = 0x7fffffff;
  DAT_00d60434 = 1;
  DAT_00d60438 = 2;
  DAT_00d6043c = 1;
  DAT_00d60440 = 0;
  DAT_00d60444 = 1;
  DAT_00d60448 = 0;
  DAT_00d60450 = 0;
  DAT_00d60458 = 0;
  DAT_00d60468 = 0;
  DAT_00d60460 = 0;
  DAT_00d60478 = 0;
  DAT_00d60480 = 0;
  DAT_00d60470 = 0;
  DAT_00d60488 = 0;
  DAT_00d60498 = 0;
  DAT_00d604a0 = 0;
  DAT_00d60490 = 0;
  DAT_00d604a8 = 0;
  DAT_00d604b0 = 0;
  DAT_00d604c0 = 0;
  DAT_00d604c8 = 0;
  DAT_00d604b8 = 0;
  DAT_00d604d0 = 0;
  DAT_00d604d8 = 0;
  __cxa_atexit(FUN_004895bc,&DAT_00d603f0,&PTR_LOOP_00d19390);
  DAT_00d604f0 = 64000;
  DAT_00d604e0 = 0;
  DAT_00d604e4 = 0;
  DAT_00d604fc = 0x3f80000000000000;
  _DAT_00d604e8 = 0;
  DAT_00d604f4 = 1;
  DAT_00d604f8 = 0x100;
  DAT_00d60504 = 1;
  DAT_00d60508 = 1;
  DAT_00d60510 = _DAT_00d603d8;
  DAT_00d60518 = DAT_00d603e0;
  DAT_00d60520 = DAT_00d603e8;
  DAT_00d60528 = 1;
  FUN_004426bc(&DAT_00d60530,&DAT_00d603f0);
  DAT_00d60620 = 1;
  DAT_00d60631._3_1_ = 1;
  DAT_00d60628 = DAT_00d604e0;
  DAT_00d6062c = DAT_00d604e4;
  _DAT_00d60630 = _DAT_00d604e8;
  DAT_00d60638 = (undefined4 *)operator_new(0x48);
  DAT_00d60640 = DAT_00d60638 + 0x12;
  *DAT_00d60638 = 0;
  *(undefined8 *)(DAT_00d60638 + 2) = 0;
  uVar4 = _UNK_001f2578;
  uVar3 = _DAT_001f2570;
  *(undefined8 *)((long)DAT_00d60638 + 0x1f) = 0;
  *(undefined2 *)((long)DAT_00d60638 + 0x27) = 0;
  *(undefined8 *)(DAT_00d60638 + 0xf) = 0;
  *(undefined1 *)(DAT_00d60638 + 0x11) = 0;
  *(undefined8 *)(DAT_00d60638 + 0xd) = uVar4;
  *(undefined8 *)(DAT_00d60638 + 0xb) = uVar3;
  DAT_00d60650 = 1;
  DAT_00d60648 = DAT_00d60640;
  __cxa_atexit(FUN_0043ba38,&DAT_00d604f0,&PTR_LOOP_00d19390);
  DAT_00d6065c = 1;
  DAT_00d60658 = 100;
  DAT_00d60660 = 0;
  DAT_00d60664 = 1;
  DAT_00d60668 = 0;
  DAT_00d60680 = FUN_004547f0;
  DAT_00d60688 = &DAT_001f1910;
  DAT_00d6066c = 1;
  DAT_00d60690 = 1;
  DAT_00d606a8 = 0x19;
  DAT_00d60698 = 5;
  DAT_00d606a0 = 1;
  DAT_00d606ac = 1;
  DAT_00d606b0 = 0;
  DAT_00d606b4 = 1;
  DAT_00d606b8 = 0;
  DAT_00d606bc = 1;
  _DAT_00d606c0 = 0x100;
  DAT_00d606c4 = 0x3f000000;
  DAT_00d606c8 = 1;
  DAT_00d606cc = 0;
  DAT_00d606d0 = 1;
  __cxa_atexit(FUN_00489680,&DAT_00d60670,&PTR_LOOP_00d19390);
  DAT_00d606d8 = 0;
  DAT_00d606dc = 1;
  uRam0000000000d606e8 = uRam0000000000d60678;
  DAT_00d606e0 = DAT_00d60670;
  DAT_00d606f0 = DAT_00d60680;
  DAT_00d606f8 = DAT_00d60688;
  if ((code *)*DAT_00d60688 != (code *)0x0) {
    DAT_00d606e0 = (*(code *)*DAT_00d60688)(DAT_00d60670);
  }
  DAT_00d60748 = 1;
  DAT_00d60700 = DAT_00d60690;
  DAT_00d60708 = DAT_00d60698;
  DAT_00d60710 = DAT_00d606a0;
  DAT_00d60718 = DAT_00d606a8;
  DAT_00d6071c = DAT_00d606ac;
  DAT_00d60724 = DAT_00d606b4;
  DAT_00d60728 = DAT_00d606b8;
  DAT_00d6072c = DAT_00d606bc;
  DAT_00d60720 = DAT_00d606b0;
  DAT_00d60731 = DAT_00d606c1;
  DAT_00d60730 = DAT_00d606c0;
  DAT_00d60738 = DAT_00d606c8;
  DAT_00d60734 = DAT_00d606c4;
  DAT_00d6073c = DAT_00d606cc;
  DAT_00d60740 = DAT_00d606d0;
  DAT_00d60758 = 1;
  DAT_00d60750 = DAT_00d606d8;
  DAT_00d60754 = DAT_00d606dc;
  __cxa_atexit(FUN_00489698,&DAT_00d606e0,&PTR_LOOP_00d19390);
  local_89 = 3;
  local_a8[0] = 0x6665;
  if ((&DAT_001ecb0c < &local_a0) || (auStack_9d < &UNK_001ecb0d)) {
    local_88 = &local_80;
    auStack_9d[0] = 0;
    uStack_9e = 0x38;
    local_a0 = 0x5056;
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    local_80 = 0;
    uStack_78 = 0;
    FUN_004414e0(&local_88,local_88,&local_e0,&local_e0);
    pvVar5 = operator_new(0x38);
    lVar1 = (long)pvVar5 + 0x38;
    FUN_00441364(pvVar5,local_a8);
    DAT_00d60778 = 1;
    local_1d8 = CONCAT17(3,(undefined7)local_1d8);
    DAT_00d60760 = pvVar5;
    DAT_00d60768 = lVar1;
    DAT_00d60770 = lVar1;
    if ((&DAT_001ecb0c < &local_1e8) || ((undefined *)((long)&local_1e8 + 3) < &UNK_001ecb0d)) {
      local_1e8 = (void *)CONCAT44(local_1e8._4_4_,0x385056);
      uStack_f8 = 0;
      local_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_108 = 0;
      local_110 = 0;
      local_1c8 = 0;
      local_1c0 = 0;
      local_1d0 = &local_1c8;
      FUN_004414e0(&local_1d0,&local_1c8,&local_110,&local_110);
      DAT_00d60798 = local_1d8;
      uRam0000000000d60790 = uStack_1e0;
      _DAT_00d60788 = local_1e8;
      local_1e8 = (void *)0x0;
      uStack_1e0 = 0;
      local_1d8 = 0;
      DAT_00d60780 = 0x6665;
      DAT_00d607a0 = local_1d0;
      DAT_00d607a8 = local_1c8;
      DAT_00d607b0 = local_1c0;
      if (local_1c0 == 0) {
        DAT_00d607a0 = &DAT_00d607a8;
      }
      else {
        *(long **)(local_1c8 + 0x10) = &DAT_00d607a8;
        local_1c8 = 0;
        local_1c0 = 0;
        local_1d0 = &local_1c8;
      }
      DAT_00d607b8 = 1;
      local_150[0] = 0x78;
      local_131 = '\x04';
      if ((&DAT_0019cb8c < &local_148) || (auStack_144 < &UNK_0019cb8d)) {
        local_148 = 0x7375706f;
        auStack_144[0] = auStack_144[0] & 0xffffff00;
        local_130 = DAT_001f4f10;
        FUN_00465d60(local_180,"stereo",&DAT_001a8867);
        local_128 = &local_120;
        local_120 = 0;
        uStack_118 = 0;
        FUN_004414e0(&local_128,local_128,local_180,local_180);
        pvVar5 = operator_new(0x40);
        lVar1 = (long)pvVar5 + 0x40;
        FUN_00441b00(pvVar5,local_150);
        uVar3 = uStack_1a8;
        local_1a0 = CONCAT17(4,(undefined7)local_1a0);
        uVar4 = local_1a0;
        DAT_00d607d8 = 1;
        local_1b8 = 0x78;
        DAT_00d607c0 = pvVar5;
        DAT_00d607c8 = lVar1;
        DAT_00d607d0 = lVar1;
        if ((&DAT_0019cb8c < &local_1b0) || ((undefined *)((long)&local_1b0 + 4) < &UNK_0019cb8d)) {
          local_1b0 = CONCAT35(local_1b0._5_3_,0x7375706f);
          _DAT_00d607e8 = local_1b0;
          local_1b0 = 0;
          uStack_1a8 = 0;
          local_1a0 = 0;
          uRam0000000000d607f0 = uVar3;
          DAT_00d607e0 = 0x78;
          uStack_190 = _UNK_001f2188;
          local_198 = _DAT_001f2180;
          local_188 = 0;
          DAT_00d607f8 = uVar4;
          DAT_00d60810 = 0;
          DAT_00d60818 = 1;
          uRam0000000000d60808 = _UNK_001f2188;
          _DAT_00d60800 = _DAT_001f2180;
          DAT_00d60820 = 0x1000100;
          FUN_00441e1c(&local_128,local_120);
          if (local_131 < '\0') {
            operator_delete((void *)CONCAT44(auStack_144[0],local_148));
          }
          if (local_151 < '\0') {
            operator_delete(local_168);
          }
          if (local_169 < '\0') {
            operator_delete(local_180[0]);
          }
          FUN_00441e1c(&local_1d0,local_1c8);
          if (local_1d8 < 0) {
            operator_delete(local_1e8);
          }
          FUN_00441e1c(&local_88,local_80);
          __cxa_atexit(FUN_004379f4,&DAT_00d60760,&PTR_LOOP_00d19390);
          DAT_00d60828 = 0x3dcccccd;
          DAT_00d6082c = 1;
          DAT_00d60850 = 1;
          DAT_00d60840 = FUN_00442f08;
          DAT_00d60848 = &DAT_001f1910;
          DAT_00d60878 = 1;
          DAT_00d60880 = 1;
          DAT_00d60884 = 1;
          DAT_00d60868 = FUN_0040dec4;
          DAT_00d60870 = &DAT_001f1910;
          uRam0000000000d60890 = uRam0000000000d606e8;
          DAT_00d60888 = DAT_00d606e0;
          DAT_00d60898 = DAT_00d606f0;
          DAT_00d608a0 = DAT_00d606f8;
          if ((code *)*DAT_00d606f8 != (code *)0x0) {
            DAT_00d60888 = (*(code *)*DAT_00d606f8)(DAT_00d606e0);
          }
          DAT_00d60908 = 1;
          DAT_00d60914 = 0;
          DAT_00d608a8 = DAT_00d60700;
          DAT_00d608b0 = DAT_00d60708;
          DAT_00d608b8 = DAT_00d60710;
          DAT_00d608c0 = DAT_00d60718;
          DAT_00d608c4 = DAT_00d6071c;
          DAT_00d608cc = DAT_00d60724;
          DAT_00d608d0 = DAT_00d60728;
          DAT_00d608d4 = DAT_00d6072c;
          DAT_00d608d8 = DAT_00d60730;
          DAT_00d608d9 = DAT_00d60731;
          DAT_00d608e0 = DAT_00d60738;
          DAT_00d608c8 = DAT_00d60720;
          DAT_00d608e8 = DAT_00d60740;
          DAT_00d608f0 = DAT_00d60748;
          DAT_00d608e4 = DAT_00d6073c;
          DAT_00d608f8 = DAT_00d60750;
          DAT_00d608dc = DAT_00d60734;
          DAT_00d608fc = DAT_00d60754;
          DAT_00d60900 = DAT_00d60758;
          DAT_00d60910 = 0x100;
          DAT_00d60918 = 1;
          FUN_004896b0(&DAT_00d60920,&DAT_00d60320);
          DAT_00d609ec = DAT_00d604fc;
          DAT_00d609e0 = DAT_00d604f0;
          DAT_00d609e4 = DAT_00d604f4;
          DAT_00d609e8 = DAT_00d604f8;
          DAT_00d609f4 = DAT_00d60504;
          DAT_00d609f8 = DAT_00d60508;
          DAT_00d60a00 = DAT_00d60510;
          DAT_00d60a08 = DAT_00d60518;
          DAT_00d60a10 = DAT_00d60520;
          DAT_00d60a18 = DAT_00d60528;
          FUN_004426bc(&DAT_00d60a20,&DAT_00d60530);
          DAT_00d60b10 = DAT_00d60620;
          DAT_00d60b18 = DAT_00d60628;
          DAT_00d60b21 = CONCAT13(DAT_00d60631._3_1_,(undefined3)DAT_00d60631);
          DAT_00d60b1c = DAT_00d6062c;
          DAT_00d60b20 = DAT_00d60630;
          FUN_0040d960(&DAT_00d60b28,&DAT_00d60638);
          DAT_00d60b50 = DAT_00d60658;
          DAT_00d60b54 = DAT_00d6065c;
          DAT_00d60b48 = 1;
          DAT_00d60b58 = DAT_00d60660;
          DAT_00d60b5c = DAT_00d60664;
          DAT_00d60b60 = DAT_00d60668;
          DAT_00d60b64 = DAT_00d6066c;
          DAT_00d60b68 = 1;
          FUN_00435de4(&DAT_00d60b70,&DAT_00d60760);
          DAT_00d60c48 = 700000;
          DAT_00d60c38 = 1;
          DAT_00d60c40 = 0;
          DAT_00d60c44 = 1;
          DAT_00d60c4c = 1;
          DAT_00d60c50 = 10000000;
          DAT_00d60c54 = 1;
          DAT_00d60c58 = DAT_00d60828;
          DAT_00d60c5c = DAT_00d6082c;
          DAT_00d60c60 = 1;
          __cxa_atexit(FUN_004897bc,&DAT_00d60830,&PTR_LOOP_00d19390);
          if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
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


// ===== 0048bc6c  FUN_0048bc6c =====

void FUN_0048bc6c(undefined8 param_1,short *param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  size_t sVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined *local_1b8 [11];
  void *local_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined *local_138;
  undefined8 uStack_130;
  undefined4 auStack_128 [34];
  char acStack_a0 [48];
  long local_70;
  
  puVar6 = PTR_PTR_00d51b18;
  puVar5 = PTR_DAT_00d51b10;
  lVar4 = tpidr_el0;
  ppuVar1 = local_1b8 + 3;
  local_70 = *(long *)(lVar4 + 0x28);
  ppuVar2 = local_1b8 + 2;
  puVar3 = PTR_DAT_00d51b10 + 0x68;
  puVar9 = PTR_DAT_00d51b10 + 0x40;
  local_1b8[0] = *(undefined **)(PTR_PTR_00d51b18 + 0x10);
  local_1b8[1] = (undefined *)0x0;
  local_1b8[2] = puVar9;
  local_138 = puVar3;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_00d51b18 + 0x18);
  lVar11 = *(long *)(local_1b8[0] + -0x18);
  FUN_00520e8c((long)local_1b8 + lVar11,ppuVar1);
  *(undefined8 *)((long)&uStack_130 + lVar11) = 0;
  lVar12 = *(long *)(puVar6 + 8);
  *(undefined4 *)((long)auStack_128 + lVar11) = 0xffffffff;
  *(undefined8 *)((long)ppuVar2 + *(long *)(*(long *)(puVar6 + 0x20) + -0x18)) =
       *(undefined8 *)(puVar6 + 0x28);
  *(undefined8 *)((long)local_1b8 + *(long *)(lVar12 + -0x18)) = *(undefined8 *)(puVar6 + 0x30);
  local_1b8[0] = puVar5 + 0x18;
  local_1b8[2] = puVar9;
  local_138 = puVar3;
  FUN_0054a4c8(ppuVar1);
  puVar3 = PTR_DAT_00d51b20;
  local_140 = 0x18;
  uStack_158 = 0;
  local_160 = (void *)0x0;
  uStack_148 = 0;
  lStack_150 = 0;
  local_1b8[3] = PTR_DAT_00d51b20 + 0x10;
  if (*param_2 == 10) {
    inet_ntop(10,param_2 + 4,acStack_a0,0x2e);
    uVar13 = (uint)((ushort)param_2[1] >> 8) | ((ushort)param_2[1] & 0xff00ff) << 8;
    uVar8 = FUN_00428964(ppuVar2,&DAT_0019769a,1);
    sVar7 = strlen(acStack_a0);
    uVar8 = FUN_00428964(uVar8,acStack_a0,sVar7);
    puVar9 = &DAT_0019769c;
    uVar10 = 2;
  }
  else {
    if (*param_2 != 2) goto LAB_0048be2c;
    inet_ntop(2,param_2 + 2,acStack_a0,0x2e);
    uVar13 = (uint)((ushort)param_2[1] >> 8) | ((ushort)param_2[1] & 0xff00ff) << 8;
    sVar7 = strlen(acStack_a0);
    uVar8 = FUN_00428964(ppuVar2,acStack_a0,sVar7);
    puVar9 = &DAT_001ca603;
    uVar10 = 1;
  }
  uVar8 = FUN_00428964(uVar8,puVar9,uVar10);
  FUN_0054bae0(uVar8,uVar13);
LAB_0048be2c:
  FUN_0054d504(param_1,ppuVar1);
  local_1b8[0] = *(undefined **)puVar6;
  uVar8 = *(undefined8 *)(puVar6 + 0x48);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18)) =
       *(undefined8 *)(puVar6 + 0x40);
  local_1b8[3] = puVar3 + 0x10;
  local_1b8[2] = (undefined *)uVar8;
  if (lStack_150 < 0) {
    operator_delete(local_160);
  }
  FUN_0054a488(ppuVar1);
  FUN_0054ce58(local_1b8,puVar6 + 8);
  thunk_FUN_00520cf4(&local_138);
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048beb8  FUN_0048beb8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048beb8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  void *pvVar5;
  undefined8 *puVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0 [2];
  code *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  void *local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)((long)param_1 + 0x41) = 0;
  *(undefined8 *)((long)param_1 + 0x39) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_007b5d10(param_1 + 5);
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((long)param_1 + 0x91) = 0;
  *(undefined8 *)((long)param_1 + 0x89) = 0;
  FUN_007b5d10(param_1 + 0xf);
  *(undefined1 *)(param_1 + 0x13) = 1;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((long)param_1 + 0xe1) = 0;
  *(undefined8 *)((long)param_1 + 0xd9) = 0;
  FUN_007b5d10(param_1 + 0x19);
  *(undefined1 *)(param_1 + 0x1d) = 1;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((long)param_1 + 0x131) = 0;
  *(undefined8 *)((long)param_1 + 0x129) = 0;
  FUN_007b5d10(param_1 + 0x23);
  *(undefined1 *)(param_1 + 0x27) = 1;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)((long)param_1 + 0x181) = 0;
  *(undefined8 *)((long)param_1 + 0x179) = 0;
  FUN_007b5d10(param_1 + 0x2d);
  *(undefined1 *)(param_1 + 0x31) = 1;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  *(undefined8 *)((long)param_1 + 0x1d1) = 0;
  *(undefined8 *)((long)param_1 + 0x1c9) = 0;
  FUN_007b5d10(param_1 + 0x37);
  *(undefined1 *)(param_1 + 0x3b) = 1;
  puVar4 = PTR_free_00d51ac0;
  *(undefined2 *)(param_1 + 0x43) = 0;
  *(undefined8 *)((long)param_1 + 0x26c) = 0;
  *(undefined8 *)((long)param_1 + 0x27c) = 0;
  *(undefined8 *)((long)param_1 + 0x274) = 0;
  param_1[0x42] = puVar4;
  *(undefined8 *)((long)param_1 + 0x282) = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  *(undefined8 *)((long)param_1 + 0x262) = 0;
  *(undefined8 *)((long)param_1 + 0x25a) = 0;
  uVar3 = _UNK_001f42d8;
  uVar2 = _DAT_001f42d0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)((long)param_1 + 0x2d7) = 0;
  *(undefined4 *)(param_1 + 0x59) = 60000;
  param_1[0x44] = 0;
  *(undefined2 *)(param_1 + 0x47) = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x57] = uVar3;
  param_1[0x56] = uVar2;
  param_1[0x58] = 0;
  *(undefined4 *)((long)param_1 + 0x2dc) = 0;
  param_1[0x5a] = 0;
  param_1[0x5c] = param_1;
  param_1[0x5d] = FUN_0048c264;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  pvVar5 = operator_new(0x80);
  local_80 = FUN_0040df64;
  local_78 = &DAT_001f1910;
  local_a0 = FUN_0040dec4;
  local_98 = &DAT_001f1910;
  FUN_00513ef0(pvVar5,"UdpSocket",&local_90,local_b0);
  if ((code *)local_98[1] != (code *)0x0) {
    (*(code *)local_98[1])(local_b0[0]);
  }
  puVar6 = param_1 + 0x3c;
  if ((code *)local_78[1] != (code *)0x0) {
    (*(code *)local_78[1])(local_90);
  }
  pvVar7 = (void *)*puVar6;
  *puVar6 = pvVar5;
  if (pvVar7 != (void *)0x0) {
    FUN_00514454(pvVar7);
    operator_delete(pvVar7);
    pvVar5 = (void *)*puVar6;
  }
  lVar8 = *(long *)((long)pvVar5 + 0x58);
  local_c0 = param_1;
  if (lVar8 != 0) {
    lVar9 = *(long *)((long)pvVar5 + 0x78);
    if (lVar9 == 0) {
      FUN_00520194(&local_90);
      puVar6 = (undefined8 *)operator_new(0x18);
      puVar6[2] = &local_90;
      *puVar6 = &PTR_FUN_00d1d8e8;
      puVar6[1] = &local_c0;
      FUN_00512cf8(lVar8,puVar6);
      FUN_005203e8(local_b0,&local_90);
      FUN_0052007c(local_b0[0]);
      FUN_00520164(local_b0);
      FUN_005201dc(&local_90);
    }
    else {
      local_50 = FUN_005ce36c();
      local_78 = (undefined8 *)CONCAT17(9,(undefined7)local_78);
      local_90 = param_1;
      if ((&local_88 < (void **)0x1e9fbf) && ("UdpSocket" < (char *)((long)&local_80 + 1U))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      local_88 = (void *)s_UdpSocket_001e9fbe._0_8_;
      local_80 = (code *)CONCAT62(local_80._2_6_,0x74);
      local_60 = FUN_0040e7ec;
      local_58 = &DAT_001f4e70;
      local_70 = lVar9;
      FUN_00520194(local_b0);
      puVar6 = (undefined8 *)operator_new(0x18);
      puVar6[2] = local_b0;
      *puVar6 = &PTR_FUN_00d1d8c0;
      puVar6[1] = &local_90;
      FUN_00512cf8(lVar8,puVar6);
      FUN_005203e8(&local_b8,local_b0);
      FUN_0052007c(local_b8);
      FUN_00520164(&local_b8);
      FUN_005201dc(local_b0);
      if (*(code **)(local_58 + 8) != (code *)0x0) {
        (**(code **)(local_58 + 8))(local_70);
      }
      if ((long)local_78 < 0) {
        operator_delete(local_88);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048c264  FUN_0048c264 =====

/* WARNING: Removing unreachable block (ram,0x0048c548) */
/* WARNING: Removing unreachable block (ram,0x0048c338) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048c264(long param_1,int param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *__dest;
  ulong uVar8;
  undefined8 *puVar9;
  char *pcVar10;
  size_t sVar11;
  long lVar12;
  void *__src;
  char *local_b8;
  undefined8 local_b0;
  long lStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  long local_90;
  char *local_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (param_2 < 0) {
    local_b8 = (char *)operator_new(0x40);
    uVar7 = s__OnAddressIPResolved__Failed_to_r_001b09d0._24_8_;
    uVar6 = s__OnAddressIPResolved__Failed_to_r_001b09d0._16_8_;
    uVar5 = s__OnAddressIPResolved__Failed_to_r_001b09d0._8_8_;
    uVar4 = s__OnAddressIPResolved__Failed_to_r_001b09d0._0_8_;
    lStack_a8 = _UNK_001f3dc8;
    local_b0 = _DAT_001f3dc0;
    if ((local_b8 < "OnAddressIPResolved] Failed to resolve IP address ") &&
       ("[OnAddressIPResolved] Failed to resolve IP address " < local_b8 + 0x33)) {
LAB_0048c578:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    local_b8[0x33] = '\0';
    local_b8[0x2f] = 'e';
    local_b8[0x30] = 's';
    local_b8[0x31] = 's';
    local_b8[0x32] = ' ';
    bVar2 = *(byte *)(param_1 + 0x267);
    *(undefined8 *)(local_b8 + 8) = uVar5;
    *(undefined8 *)local_b8 = uVar4;
    *(undefined8 *)(local_b8 + 0x18) = uVar7;
    *(undefined8 *)(local_b8 + 0x10) = uVar6;
    uVar4 = s__OnAddressIPResolved__Failed_to_r_001b09d0._32_8_;
    uVar8 = *(ulong *)(param_1 + 600);
    lVar12 = *(long *)(param_1 + 0x250);
    if (-1 < (char)bVar2) {
      uVar8 = (ulong)bVar2;
      lVar12 = param_1 + 0x250;
    }
    *(undefined8 *)(local_b8 + 0x28) = s__OnAddressIPResolved__Failed_to_r_001b09d0._40_8_;
    *(undefined8 *)(local_b8 + 0x20) = uVar4;
    puVar9 = (undefined8 *)FUN_00547cac(&local_b8,lVar12,uVar8);
    uStack_98 = puVar9[1];
    local_a0 = (void *)*puVar9;
    local_90 = puVar9[2];
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    puVar9 = (undefined8 *)FUN_00547cac(&local_a0," with error ",0xc);
    uStack_78 = puVar9[1];
    local_80 = (char *)*puVar9;
    lStack_70 = puVar9[2];
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    pcVar10 = (char *)FUN_005cd33c(param_2);
    if (pcVar10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string",0xad0,
                 "__s != nullptr","string::append received nullptr");
    }
    sVar11 = strlen(pcVar10);
    puVar9 = (undefined8 *)FUN_00547cac(&local_80,pcVar10,sVar11);
    local_50 = puVar9[2];
    uStack_58 = puVar9[1];
    local_60 = *puVar9;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    if (lStack_70 < 0) {
      operator_delete(local_80);
    }
    pcVar10 = local_b8;
    lVar12 = lStack_a8;
    if (local_90 < 0) {
      operator_delete(local_a0);
      pcVar10 = local_b8;
      lVar12 = lStack_a8;
    }
  }
  else {
    if (param_3 != 0) {
      do {
        __src = *(void **)(param_3 + 0x20);
        if ((__src != (void *)0x0) && ((*(uint *)(param_3 + 4) | 8) == 10)) {
          uVar1 = *(uint *)(param_3 + 0x10);
          __dest = malloc((ulong)uVar1);
          if (__dest != (void *)0x0) {
            memcpy(__dest,__src,(ulong)uVar1);
            lVar12 = *(long *)(param_1 + 0x208);
            *(void **)(param_1 + 0x208) = __dest;
            if (lVar12 != 0) {
              (**(code **)(param_1 + 0x210))();
            }
            *(undefined **)(param_1 + 0x210) = PTR_free_00d51ac0;
            uVar8 = FUN_00417e08();
            if ((uVar8 & 1) == 0) {
              FUN_0048bc6c(&local_60,*(undefined8 *)(param_1 + 0x208));
              FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/udp_socket.cpp",0x1c11,
                           "[OnAddressIPResolved]: ",&local_60);
            }
            FUN_0048fc50(param_1);
            goto LAB_0048c550;
          }
          break;
        }
        param_3 = *(long *)(param_3 + 0x28);
      } while (param_3 != 0);
    }
    local_80 = (char *)operator_new(0x50);
    uVar7 = s__OnAddressIPResolved__Failed_par_001ea019._24_8_;
    uVar6 = s__OnAddressIPResolved__Failed_par_001ea019._16_8_;
    uVar5 = s__OnAddressIPResolved__Failed_par_001ea019._8_8_;
    uVar4 = s__OnAddressIPResolved__Failed_par_001ea019._0_8_;
    lStack_70 = _UNK_001f27e8;
    uStack_78 = _DAT_001f27e0;
    if ((local_80 < "OnAddressIPResolved] Failed parsing the address info result for ") &&
       ("[OnAddressIPResolved] Failed parsing the address info result for " < local_80 + 0x41))
    goto LAB_0048c578;
    local_80[0x40] = ' ';
    local_80[0x41] = '\0';
    bVar2 = *(byte *)(param_1 + 0x267);
    *(undefined8 *)(local_80 + 8) = uVar5;
    *(undefined8 *)local_80 = uVar4;
    *(undefined8 *)(local_80 + 0x18) = uVar7;
    *(undefined8 *)(local_80 + 0x10) = uVar6;
    uVar6 = s__OnAddressIPResolved__Failed_par_001ea019._56_8_;
    uVar5 = s__OnAddressIPResolved__Failed_par_001ea019._48_8_;
    uVar4 = s__OnAddressIPResolved__Failed_par_001ea019._32_8_;
    lVar12 = *(long *)(param_1 + 0x250);
    *(undefined8 *)(local_80 + 0x28) = s__OnAddressIPResolved__Failed_par_001ea019._40_8_;
    *(undefined8 *)(local_80 + 0x20) = uVar4;
    *(undefined8 *)(local_80 + 0x38) = uVar6;
    *(undefined8 *)(local_80 + 0x30) = uVar5;
    uVar8 = *(ulong *)(param_1 + 600);
    if (-1 < (char)bVar2) {
      uVar8 = (ulong)bVar2;
      lVar12 = param_1 + 0x250;
    }
    puVar9 = (undefined8 *)FUN_00547cac(&local_80,lVar12,uVar8);
    local_50 = puVar9[2];
    uStack_58 = puVar9[1];
    local_60 = *puVar9;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    pcVar10 = local_80;
    lVar12 = lStack_70;
  }
  if (lVar12 < 0) {
    operator_delete(pcVar10);
  }
  FUN_0048ed5c(param_1,0,0,&local_60);
LAB_0048c550:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0048c5cc  FUN_0048c5cc =====

void FUN_0048c5cc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  void *pvVar10;
  long lVar11;
  void *pvVar12;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  void *local_88;
  undefined2 local_80;
  char local_7e [13];
  char local_71;
  long local_70;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar8 = *(long *)(*(long *)(param_1 + 0x1e0) + 0x58);
  local_a8 = param_1;
  if (lVar8 != 0) {
    lVar11 = *(long *)(*(long *)(param_1 + 0x1e0) + 0x78);
    if (lVar11 == 0) {
      FUN_00520194(&local_90);
      puVar5 = (undefined8 *)operator_new(0x18);
      puVar5[2] = &local_90;
      *puVar5 = &PTR_FUN_00d1d938;
      puVar5[1] = &local_a8;
      FUN_00512cf8(lVar8,puVar5);
      FUN_005203e8(&local_98,&local_90);
      FUN_0052007c(local_98);
      FUN_00520164(&local_98);
      FUN_005201dc(&local_90);
    }
    else {
      local_50 = FUN_005ce36c();
      local_71 = '\n';
      local_90 = param_1;
      if ((&local_88 < (void **)0x1a5dd7) && ("~UdpSocket" < local_7e)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      local_80 = 0x7465;
      local_88 = (void *)s__UdpSocket_001a5dd6._0_8_;
      local_7e[0] = '\0';
      local_60 = FUN_0040e7ec;
      local_58 = &DAT_001f4e70;
      local_70 = lVar11;
      FUN_00520194(&local_98);
      puVar5 = (undefined8 *)operator_new(0x18);
      puVar5[2] = &local_98;
      *puVar5 = &PTR_FUN_00d1d910;
      puVar5[1] = &local_90;
      FUN_00512cf8(lVar8,puVar5);
      FUN_005203e8(&local_a0,&local_98);
      FUN_0052007c(local_a0);
      FUN_00520164(&local_a0);
      FUN_005201dc(&local_98);
      if (*(code **)(local_58 + 8) != (code *)0x0) {
        (**(code **)(local_58 + 8))(local_70);
      }
      if (local_71 < '\0') {
        operator_delete(local_88);
      }
    }
  }
  FUN_005144ec(*(undefined8 *)(param_1 + 0x1e0));
  FUN_004312b4((undefined8 *)(param_1 + 0x308));
  pvVar10 = *(void **)(param_1 + 0x308);
  if (pvVar10 != (void *)0x0) {
    pvVar12 = pvVar10;
    pvVar6 = *(void **)(param_1 + 0x310);
    if (*(void **)(param_1 + 0x310) != pvVar10) {
      do {
        pvVar12 = (void *)((long)pvVar6 + -0x20);
        pcVar7 = *(code **)(*(long *)((long)pvVar6 + -8) + 8);
        if (pcVar7 != (code *)0x0) {
          (*pcVar7)(*(undefined8 *)((long)pvVar6 + -0x20));
        }
        pvVar6 = pvVar12;
      } while (pvVar12 != pvVar10);
      pvVar12 = *(void **)(param_1 + 0x308);
    }
    *(void **)(param_1 + 0x310) = pvVar10;
    operator_delete(pvVar12);
  }
  puVar5 = *(undefined8 **)(param_1 + 0x2f8);
  if (puVar5 != (undefined8 *)0x0) {
    if (*(char *)(param_1 + 0x300) == '\0') {
      operator_delete(puVar5);
    }
    else {
      *puVar5 = 0;
    }
    *(undefined8 *)(param_1 + 0x2f8) = 0;
  }
  puVar5 = *(undefined8 **)(param_1 + 0x2d0);
  *(undefined1 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_00d193e8;
    if (puVar5[1] != 0) {
      FUN_005ce374(puVar5[1],PTR_free_00d51ac0);
    }
    operator_delete(puVar5);
  }
  puVar5 = *(undefined8 **)(param_1 + 0x2c0);
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_00d193e8;
    if (puVar5[1] != 0) {
      FUN_005ce374(puVar5[1],PTR_free_00d51ac0);
    }
    operator_delete(puVar5);
  }
  pvVar10 = *(void **)(param_1 + 0x298);
  if (pvVar10 != (void *)0x0) {
    *(void **)(param_1 + 0x2a0) = pvVar10;
    operator_delete(pvVar10);
  }
  puVar5 = *(undefined8 **)(param_1 + 0x290);
  *(undefined8 *)(param_1 + 0x290) = 0;
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_00d193e8;
    if (puVar5[1] != 0) {
      FUN_005ce374(puVar5[1],PTR_free_00d51ac0);
    }
    operator_delete(puVar5);
  }
  if (*(char *)(param_1 + 0x287) < '\0') {
    operator_delete(*(void **)(param_1 + 0x270));
    cVar2 = *(char *)(param_1 + 0x267);
  }
  else {
    cVar2 = *(char *)(param_1 + 0x267);
  }
  if (cVar2 < '\0') {
    operator_delete(*(void **)(param_1 + 0x250));
  }
  pvVar10 = *(void **)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x248) = 0;
  if (pvVar10 != (void *)0x0) {
    *(undefined ***)((long)pvVar10 + 8) = &PTR_FUN_00d193e8;
    if (*(long *)((long)pvVar10 + 0x10) != 0) {
      FUN_005ce374(*(long *)((long)pvVar10 + 0x10),PTR_free_00d51ac0);
    }
    operator_delete(pvVar10);
  }
  puVar5 = *(undefined8 **)(param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x230) = 0;
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_00d1db90;
    if (puVar5[1] != 0) {
      FUN_005ce374(puVar5[1],PTR_free_00d51ac0);
    }
    operator_delete(puVar5);
  }
  lVar8 = *(long *)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x208) = 0;
  if (lVar8 != 0) {
    (**(code **)(param_1 + 0x210))();
  }
  pvVar10 = *(void **)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x200) = 0;
  if (pvVar10 != (void *)0x0) {
    FUN_00515578(pvVar10);
    operator_delete(pvVar10);
  }
  pvVar10 = *(void **)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  if (pvVar10 != (void *)0x0) {
    FUN_00515578(pvVar10);
    operator_delete(pvVar10);
  }
  plVar9 = *(long **)(param_1 + 0x1f0);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
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
      (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_005466cc(plVar9);
    }
  }
  pvVar10 = *(void **)(param_1 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  if (pvVar10 != (void *)0x0) {
    FUN_00514454(pvVar10);
    operator_delete(pvVar10);
  }
  if (*(char *)(param_1 + 0x1d8) != '\0') {
    FUN_007b5d24(param_1 + 0x1b8);
  }
  FUN_00546ab0(param_1 + 400);
  if (*(char *)(param_1 + 0x188) != '\0') {
    FUN_007b5d24(param_1 + 0x168);
  }
  FUN_00546ab0(param_1 + 0x140);
  if (*(char *)(param_1 + 0x138) != '\0') {
    FUN_007b5d24(param_1 + 0x118);
  }
  FUN_00546ab0(param_1 + 0xf0);
  if (*(char *)(param_1 + 0xe8) != '\0') {
    FUN_007b5d24(param_1 + 200);
  }
  FUN_00546ab0(param_1 + 0xa0);
  if (*(char *)(param_1 + 0x98) != '\0') {
    FUN_007b5d24(param_1 + 0x78);
  }
  FUN_00546ab0(param_1 + 0x50);
  if (*(char *)(param_1 + 0x48) != '\0') {
    FUN_007b5d24(param_1 + 0x28);
  }
  FUN_00546ab0(param_1);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048ca8c  FUN_0048ca8c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0048ca8c(long param_1,undefined4 param_2,undefined8 *param_3,undefined2 param_4,
                 byte param_5)

{
  ulong uVar1;
  size_t sVar2;
  undefined8 *******pppppppuVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *******pppppppuVar8;
  long lVar9;
  long lVar10;
  undefined8 *******local_100;
  ulong uStack_f8;
  undefined8 local_f0;
  undefined2 local_e8;
  byte local_e6;
  long local_e0;
  undefined4 local_d8;
  undefined8 *******local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  byte local_b6;
  void *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  pppppppuVar8 = &local_100;
  lVar10 = *(long *)(param_1 + 0x1e0);
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    pppppppuVar3 = (undefined8 *******)*param_3;
    uVar4 = param_3[1];
    if (uVar4 < 0x17) {
      local_f0 = CONCAT17((char)uVar4,(undefined7)local_f0);
    }
    else {
      if (0x7fffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar4 | 0xf) + 1;
      pppppppuVar8 = (undefined8 *******)operator_new(uVar1);
      local_f0 = uVar1 | 0x8000000000000000;
      local_100 = pppppppuVar8;
      uStack_f8 = uVar4;
    }
    if ((pppppppuVar8 <= pppppppuVar3) &&
       (pppppppuVar3 < (undefined8 *******)((long)pppppppuVar8 + uVar4 + 1))) goto LAB_0048cec8;
    memmove(pppppppuVar8,pppppppuVar3,uVar4 + 1);
  }
  else {
    uStack_f8 = param_3[1];
    local_100 = (undefined8 *******)*param_3;
    local_f0 = param_3[2];
  }
  local_e6 = param_5 & 1;
  lVar9 = *(long *)(lVar10 + 0x58);
  local_e8 = param_4;
  if (lVar9 != 0) {
    lVar10 = *(long *)(lVar10 + 0x78);
    if (lVar10 == 0) {
      puVar7 = (undefined8 *)operator_new(0x38);
      uVar4 = uStack_f8;
      pppppppuVar3 = local_100;
      pppppppuVar8 = (undefined8 *******)(puVar7 + 3);
      *puVar7 = &PTR_FUN_00d1d988;
      puVar7[1] = param_1;
      *(undefined4 *)(puVar7 + 2) = param_2;
      if ((long)local_f0 < 0) {
        if (uStack_f8 < 0x17) {
          *(char *)((long)puVar7 + 0x2f) = (char)uStack_f8;
        }
        else {
          if (0x7fffffffffffffef < uStack_f8) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar1 = (uStack_f8 | 0xf) + 1;
          pppppppuVar8 = (undefined8 *******)operator_new(uVar1);
          puVar7[3] = pppppppuVar8;
          puVar7[4] = uVar4;
          puVar7[5] = uVar1 | 0x8000000000000000;
        }
        sVar2 = uVar4 + 1;
        if ((pppppppuVar8 <= pppppppuVar3) &&
           (pppppppuVar3 < (undefined8 *******)((long)pppppppuVar8 + sVar2))) goto LAB_0048cec8;
        memmove(pppppppuVar8,pppppppuVar3,sVar2);
      }
      else {
        puVar7[4] = uStack_f8;
        *pppppppuVar8 = local_100;
        puVar7[5] = local_f0;
      }
      *(undefined2 *)(puVar7 + 6) = local_e8;
      *(byte *)((long)puVar7 + 0x32) = local_e6;
      FUN_00512cf8(lVar9,puVar7);
      goto joined_r0x0048cec0;
    }
    uVar6 = FUN_005ce36c();
    uVar4 = uStack_f8;
    pppppppuVar3 = local_100;
    pppppppuVar8 = &local_d0;
    local_e0 = param_1;
    local_d8 = param_2;
    if ((long)local_f0 < 0) {
      if (uStack_f8 < 0x17) {
        local_c0 = CONCAT17((char)uStack_f8,(undefined7)local_c0);
      }
      else {
        if (0x7fffffffffffffef < uStack_f8) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar1 = (uStack_f8 | 0xf) + 1;
        pppppppuVar8 = (undefined8 *******)operator_new(uVar1);
        local_c0 = uVar1 | 0x8000000000000000;
        uStack_c8 = uVar4;
        local_d0 = pppppppuVar8;
      }
      sVar2 = uVar4 + 1;
      if ((pppppppuVar8 <= pppppppuVar3) &&
         (pppppppuVar3 < (undefined8 *******)((long)pppppppuVar8 + sVar2))) goto LAB_0048cec8;
      memmove(pppppppuVar8,pppppppuVar3,sVar2);
    }
    else {
      uStack_c8 = uStack_f8;
      local_d0 = local_100;
      local_c0 = local_f0;
    }
    local_b8 = local_e8;
    local_b6 = local_e6;
    local_a0 = CONCAT17(10,(undefined7)local_a0);
    if ((&local_b0 < (void **)0x1976a0) && ("TryConnect" < (char *)((long)&uStack_a8 + 2U))) {
LAB_0048cec8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar4 = (ulong)uStack_a8 >> 0x10;
    uStack_a8 = CONCAT62((uint6)uVar4 & 0xffffffffff00,0x7463);
    local_b0 = (void *)s_TryConnect_0019769f._0_8_;
    local_88 = FUN_0040e7ec;
    local_80 = &DAT_001f4e70;
    local_98 = lVar10;
    local_78 = uVar6;
    puVar7 = (undefined8 *)operator_new(0x78);
    uVar4 = uStack_c8;
    pppppppuVar3 = local_d0;
    pppppppuVar8 = (undefined8 *******)(puVar7 + 3);
    *puVar7 = &PTR_FUN_00d1d960;
    puVar7[1] = param_1;
    *(undefined4 *)(puVar7 + 2) = param_2;
    if ((long)local_c0 < 0) {
      if (uStack_c8 < 0x17) {
        *(char *)((long)puVar7 + 0x2f) = (char)uStack_c8;
      }
      else {
        if (0x7fffffffffffffef < uStack_c8) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar1 = (uStack_c8 | 0xf) + 1;
        pppppppuVar8 = (undefined8 *******)operator_new(uVar1);
        puVar7[3] = pppppppuVar8;
        puVar7[4] = uVar4;
        puVar7[5] = uVar1 | 0x8000000000000000;
      }
      sVar2 = uVar4 + 1;
      if ((pppppppuVar8 <= pppppppuVar3) &&
         (pppppppuVar3 < (undefined8 *******)((long)pppppppuVar8 + sVar2))) goto LAB_0048cec8;
      memmove(pppppppuVar8,pppppppuVar3,sVar2);
    }
    else {
      puVar7[4] = uStack_c8;
      *pppppppuVar8 = local_d0;
      puVar7[5] = local_c0;
    }
    *(undefined2 *)(puVar7 + 6) = local_e8;
    puVar7[8] = uStack_a8;
    puVar7[7] = local_b0;
    *(byte *)((long)puVar7 + 0x32) = local_e6;
    puVar7[9] = local_a0;
    local_b0 = (void *)0x0;
    uStack_a8 = 0;
    local_a0 = 0;
    puVar7[0xb] = uStack_90;
    puVar7[10] = local_98;
    puVar7[0xc] = FUN_0040e7ec;
    puVar7[0xd] = &DAT_001f4e70;
    puVar7[0xe] = uVar6;
    FUN_00512cf8(lVar9,puVar7);
    if (*(code **)(local_80 + 8) != (code *)0x0) {
      (**(code **)(local_80 + 8))(local_98);
    }
    if (local_a0 < 0) {
      operator_delete(local_b0);
    }
    if ((long)local_c0 < 0) {
      operator_delete(local_d0);
    }
  }
joined_r0x0048cec0:
  if ((long)local_f0 < 0) {
    operator_delete(local_100);
  }
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0048cf04  FUN_0048cf04 =====

void FUN_0048cf04(long param_1,undefined4 param_2,undefined8 param_3,uint param_4,byte param_5)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_68 [8];
  char *local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    local_50 = auStack_68;
    local_60 = "../../discord_native_lib/src/udp_socket.cpp";
    uStack_58 = 0x391;
    FUN_00623bb0(&DAT_001f6e20,"../../discord_native_lib/src/udp_socket.cpp",0x391,"TryConnect: ",
                 param_3,&DAT_001ca603,param_4 & 0xffff," with ssrc: ",param_2,"TryConnect: ",
                 &local_60);
  }
  FUN_0048d010(param_1);
  *(byte *)(param_1 + 0x239) = param_5 & 1;
  *(undefined4 *)(param_1 + 0x219) = 1;
  FUN_00411268(param_1 + 0x250,param_3);
  *(short *)(param_1 + 0x268) = (short)param_4;
  *(undefined4 *)(param_1 + 0x26c) = param_2;
  FUN_0048d1cc(param_1,param_3,param_4,FUN_0048c264,0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048d010  FUN_0048d010 =====

void FUN_0048d010(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  if ((*(byte *)(param_1 + 0x219) & 1) != 0) {
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/udp_socket.cpp",0x10d9,
                   "Disconnect in progress connection");
    }
    *(undefined4 *)(param_1 + 0x219) = 0;
  }
  *(undefined2 *)(param_1 + 0x2d8) = 0;
  *(undefined1 *)(param_1 + 0x2da) = 0;
  *(undefined4 *)(param_1 + 700) = 0;
  if (*(char *)(param_1 + 0x218) != '\0') {
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/udp_socket.cpp",0x1131,"Disconnect");
    }
    *(undefined1 *)(param_1 + 0x218) = 0;
  }
  FUN_00515738(*(undefined8 *)(param_1 + 0x290));
  FUN_00515738(*(long *)(param_1 + 0x248) + 8);
  FUN_00515738(*(undefined8 *)(param_1 + 0x2c0));
  FUN_00515738(*(undefined8 *)(param_1 + 0x2d0));
  (**(code **)(**(long **)(param_1 + 0x1e8) + 0x18))();
  puVar1 = PTR_free_00d51ac0;
  pvVar4 = *(void **)(param_1 + 0x1f8);
  if (pvVar4 == (void *)0x0) {
    lVar6 = 0;
    lVar3 = *(long *)(param_1 + 0x200);
  }
  else {
    lVar6 = *(long *)((long)pvVar4 + 8);
    lVar3 = *(long *)(param_1 + 0x200);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(lVar3 + 8);
  }
  plVar7 = *(long **)(param_1 + 0x298);
  plVar8 = *(long **)(param_1 + 0x2a0);
  if (plVar7 != plVar8) {
    do {
      lVar5 = *plVar7;
      if (((lVar5 != 0) && (lVar5 != lVar6)) && (lVar5 != lVar3)) {
        FUN_005cdc6c(lVar5);
        FUN_005ce374(lVar5,puVar1);
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar8);
    plVar7 = *(long **)(param_1 + 0x298);
    pvVar4 = *(void **)(param_1 + 0x1f8);
  }
  *(long **)(param_1 + 0x2a0) = plVar7;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  if (pvVar4 != (void *)0x0) {
    FUN_00515578(pvVar4);
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x200) = 0;
  if (pvVar4 != (void *)0x0) {
    FUN_00515578(pvVar4);
    operator_delete(pvVar4);
    return;
  }
  return;
}


// ===== 0048d1cc  FUN_0048d1cc =====

/* WARNING: Removing unreachable block (ram,0x0048d3d8) */

void FUN_0048d1cc(long param_1,long *param_2,undefined2 param_3,long param_4,ulong param_5)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60 [24];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_005490bc(local_60,param_3);
  uVar4 = param_2[1];
  plVar1 = (long *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar4 = (ulong)*(byte *)((long)param_2 + 0x17);
    plVar1 = param_2;
  }
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  if ((plVar1 == (long *)0x0) && (uVar4 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
               "__len == 0 || __s != nullptr",
               "string_view::string_view(_CharT *, size_t): received nullptr");
  }
  if ((uVar4 == 9) && (*plVar1 == 0x736f686c61636f6c && (char)plVar1[1] == 't')) {
    local_90 = 0x200000000;
  }
  uStack_88 = 2;
  if ((*(char *)(param_1 + 0x300) != '\0') && (uVar4 = FUN_004022fc(), (uVar4 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/udp_socket.cpp",0x1b5a,
                 "Already have a pending lookup, cancelling previous lookup");
  }
  if ((param_4 == 0) && (param_5 == 0 || (param_5 & 1) == 0 && param_4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004d7934("../../discord_common/native/uv/uv_ops.h",0x16,"callback_ != nullptr",&DAT_001f6647
                );
  }
  puVar5 = *(undefined8 **)(param_1 + 0x2f8);
  if (puVar5 != (undefined8 *)0x0) {
    if (*(char *)(param_1 + 0x300) == '\0') {
      operator_delete(puVar5);
    }
    else {
      *puVar5 = 0;
    }
  }
  *(long *)(param_1 + 0x2e0) = param_1;
  *(long *)(param_1 + 0x2e8) = param_4;
  *(ulong *)(param_1 + 0x2f0) = param_5;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined1 *)(param_1 + 0x300) = 0;
  uVar6 = FUN_0051452c(*(undefined8 *)(param_1 + 0x1e0));
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  if (*(char *)(param_1 + 0x300) == '\0') {
    plVar7 = *(long **)(param_1 + 0x2f8);
    *(undefined1 *)(param_1 + 0x300) = 1;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)operator_new(0xa0);
      *(long **)(param_1 + 0x2f8) = plVar7;
    }
    *plVar7 = param_1 + 0x2e0;
    iVar3 = FUN_005cee90(uVar6,plVar7,FUN_004923d8,plVar1,local_60,&local_90);
    if (iVar3 < 0) {
      *(undefined1 *)(param_1 + 0x300) = 0;
      pcVar8 = *(code **)(param_1 + 0x2e8);
      plVar1 = (long *)(*(long *)(param_1 + 0x2e0) + ((long)*(ulong *)(param_1 + 0x2f0) >> 1));
      if ((*(ulong *)(param_1 + 0x2f0) & 1) != 0) {
        pcVar8 = *(code **)(pcVar8 + *plVar1);
      }
      (*pcVar8)(plVar1,iVar3,0);
    }
    if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004d7934("../../discord_common/native/uv/uv_ops.h",0x53,"!isPending_",&DAT_001f6647);
}


// ===== 0048d450  FUN_0048d450 =====

void FUN_0048d450(long param_1,char *param_2,uint param_3)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  char *__s2;
  char *pcVar8;
  
  uVar5 = FUN_00417e08();
  if ((uVar5 & 1) == 0) {
    FUN_00623bb0(&DAT_001f614e,"../../discord_native_lib/src/udp_socket.cpp",0x441,
                 "SetUdpEndpointOnNetworkThread: ",param_2,&DAT_001ca603,param_3 & 0xffff);
  }
  if ((*(long *)(param_1 + 0x208) != 0) && (*(char *)(param_1 + 0x2d9) == '\0')) {
    bVar2 = param_2[0x17];
    uVar5 = (ulong)bVar2;
    bVar3 = *(byte *)(param_1 + 0x267);
    __n = *(size_t *)(param_2 + 8);
    if (-1 < (char)bVar2) {
      __n = uVar5;
    }
    sVar1 = *(size_t *)(param_1 + 600);
    if (-1 < (char)bVar3) {
      sVar1 = (ulong)bVar3;
    }
    if (__n == sVar1) {
      pcVar8 = *(char **)param_2;
      if (-1 < (char)bVar2) {
        pcVar8 = param_2;
      }
      __s2 = *(char **)(param_1 + 0x250);
      if (-1 < (char)bVar3) {
        __s2 = (char *)(param_1 + 0x250);
      }
      if ((char)bVar2 < '\0') {
        if ((__n != 0) && (iVar4 = memcmp(pcVar8,__s2,__n), iVar4 != 0)) goto LAB_0048d564;
      }
      else {
        pcVar8 = param_2;
        if (bVar2 != 0) {
          do {
            if (*pcVar8 != *__s2) goto LAB_0048d564;
            uVar5 = uVar5 - 1;
            __s2 = __s2 + 1;
            pcVar8 = pcVar8 + 1;
          } while (uVar5 != 0);
        }
      }
      if ((uint)*(ushort *)(param_1 + 0x268) == (param_3 & 0xffff)) {
        uVar5 = FUN_00417e08();
        if ((uVar5 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/udp_socket.cpp",0x461,
                       "UDP endpoint is unchanged, skipping retarget");
          return;
        }
        return;
      }
    }
  }
LAB_0048d564:
  FUN_0048d610(param_1);
  puVar6 = *(undefined8 **)(param_1 + 0x2f8);
  if (puVar6 != (undefined8 *)0x0) {
    if (*(char *)(param_1 + 0x300) == '\0') {
      operator_delete(puVar6);
    }
    else {
      *puVar6 = 0;
    }
    *(undefined8 *)(param_1 + 0x2f8) = 0;
  }
  lVar7 = *(long *)(param_1 + 0x208);
  *(undefined1 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  if (lVar7 != 0) {
    (**(code **)(param_1 + 0x210))();
  }
  FUN_00411268(param_1 + 0x250,param_2);
  *(short *)(param_1 + 0x268) = (short)param_3;
  *(undefined1 *)(param_1 + 0x2d9) = 1;
  FUN_0048d1cc(param_1,param_2,param_3,FUN_0048d7a8,0);
  return;
}


// ===== 0048d610  FUN_0048d610 =====

void FUN_0048d610(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  FUN_00515738(*(long *)(param_1 + 0x248) + 8);
  (**(code **)(**(long **)(param_1 + 0x1e8) + 0x18))();
  FUN_00515738(*(undefined8 *)(param_1 + 0x2c0));
  puVar1 = PTR_free_00d51ac0;
  if (*(char *)(param_1 + 0x2d8) != '\0') {
    if (*(long *)(param_1 + 0x1f8) == 0) {
      lVar4 = 0;
      lVar2 = *(long *)(param_1 + 0x200);
      if (lVar2 != 0) goto LAB_0048d66c;
LAB_0048d680:
      lVar2 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(param_1 + 0x1f8) + 8);
      lVar2 = *(long *)(param_1 + 0x200);
      if (lVar2 == 0) goto LAB_0048d680;
LAB_0048d66c:
      lVar2 = *(long *)(lVar2 + 8);
    }
    plVar5 = *(long **)(param_1 + 0x298);
    plVar6 = *(long **)(param_1 + 0x2a0);
    if (plVar5 != plVar6) {
      do {
        lVar3 = *plVar5;
        if (((lVar3 != 0) && (lVar3 != lVar4)) && (lVar3 != lVar2)) {
          FUN_005cdc6c(lVar3);
          FUN_005ce374(lVar3,puVar1);
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar6);
      plVar5 = *(long **)(param_1 + 0x298);
    }
    *(long **)(param_1 + 0x2a0) = plVar5;
    *(undefined1 *)(param_1 + 0x2d8) = 0;
  }
  if (*(char *)(param_1 + 0x2d9) == '\0') goto LAB_0048d78c;
  FUN_00515738(*(undefined8 *)(param_1 + 0x290));
  *(undefined4 *)(param_1 + 700) = 0;
  puVar1 = PTR_free_00d51ac0;
  if (*(long *)(param_1 + 0x1f8) == 0) {
    lVar4 = 0;
    lVar2 = *(long *)(param_1 + 0x200);
    if (lVar2 != 0) goto LAB_0048d710;
LAB_0048d724:
    lVar2 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 0x1f8) + 8);
    lVar2 = *(long *)(param_1 + 0x200);
    if (lVar2 == 0) goto LAB_0048d724;
LAB_0048d710:
    lVar2 = *(long *)(lVar2 + 8);
  }
  plVar5 = *(long **)(param_1 + 0x298);
  plVar6 = *(long **)(param_1 + 0x2a0);
  if (plVar5 != plVar6) {
    do {
      lVar3 = *plVar5;
      if (((lVar3 != 0) && (lVar3 != lVar4)) && (lVar3 != lVar2)) {
        FUN_005cdc6c(lVar3);
        FUN_005ce374(lVar3,puVar1);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar6);
    plVar5 = *(long **)(param_1 + 0x298);
  }
  *(long **)(param_1 + 0x2a0) = plVar5;
  *(undefined1 *)(param_1 + 0x2d9) = 0;
LAB_0048d78c:
  *(undefined1 *)(param_1 + 0x2da) = 0;
  return;
}


// ===== 0048d7a8  FUN_0048d7a8 =====

/* WARNING: Removing unreachable block (ram,0x0048d888) */
/* WARNING: Removing unreachable block (ram,0x0048da98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048d7a8(long param_1,int param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *__dest;
  ulong uVar10;
  undefined8 *puVar11;
  char *pcVar12;
  size_t sVar13;
  long lVar14;
  void *__src;
  char *local_b8;
  undefined8 local_b0;
  long lStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  long local_90;
  char *local_80;
  undefined8 uStack_78;
  long lStack_70;
  char *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(char *)(param_1 + 0x2d9) != '\0') {
    if (param_2 < 0) {
      local_b8 = (char *)operator_new(0x40);
      uVar8 = s__OnUdpEndpointResolved__Failed_t_001db692._24_8_;
      uVar7 = s__OnUdpEndpointResolved__Failed_t_001db692._16_8_;
      uVar6 = s__OnUdpEndpointResolved__Failed_t_001db692._8_8_;
      uVar5 = s__OnUdpEndpointResolved__Failed_t_001db692._0_8_;
      lStack_a8 = _UNK_001f3838;
      local_b0 = _DAT_001f3830;
      if ((local_b8 < "OnUdpEndpointResolved] Failed to resolve IP address ") &&
         ("[OnUdpEndpointResolved] Failed to resolve IP address " < local_b8 + 0x35))
      goto LAB_0048db20;
      bVar2 = *(byte *)(param_1 + 0x267);
      local_b8[0x35] = '\0';
      uVar9 = s__OnUdpEndpointResolved__Failed_t_001db692._32_8_;
      uVar4 = CONCAT35(s__OnUdpEndpointResolved__Failed_t_001db692._45_3_,
                       s__OnUdpEndpointResolved__Failed_t_001db692._40_5_);
      *(undefined8 *)(local_b8 + 8) = uVar6;
      *(undefined8 *)local_b8 = uVar5;
      *(undefined8 *)(local_b8 + 0x18) = uVar8;
      *(undefined8 *)(local_b8 + 0x10) = uVar7;
      lVar14 = *(long *)(param_1 + 0x250);
      uVar10 = *(ulong *)(param_1 + 600);
      uVar5 = CONCAT53(s__OnUdpEndpointResolved__Failed_t_001db692._48_5_,
                       s__OnUdpEndpointResolved__Failed_t_001db692._45_3_);
      *(undefined8 *)(local_b8 + 0x28) = uVar4;
      *(undefined8 *)(local_b8 + 0x20) = uVar9;
      if (-1 < (char)bVar2) {
        uVar10 = (ulong)bVar2;
        lVar14 = param_1 + 0x250;
      }
      *(undefined8 *)(local_b8 + 0x2d) = uVar5;
      puVar11 = (undefined8 *)FUN_00547cac(&local_b8,lVar14,uVar10);
      uStack_98 = puVar11[1];
      local_a0 = (void *)*puVar11;
      local_90 = puVar11[2];
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = 0;
      puVar11 = (undefined8 *)FUN_00547cac(&local_a0," with error ",0xc);
      uStack_78 = puVar11[1];
      local_80 = (char *)*puVar11;
      lStack_70 = puVar11[2];
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = 0;
      pcVar12 = (char *)FUN_005cd33c(param_2);
      if (pcVar12 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string",0xad0,
                   "__s != nullptr","string::append received nullptr");
      }
      sVar13 = strlen(pcVar12);
      puVar11 = (undefined8 *)FUN_00547cac(&local_80,pcVar12,sVar13);
      local_50 = puVar11[2];
      uStack_58 = puVar11[1];
      local_60 = (char *)*puVar11;
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = 0;
      if (lStack_70 < 0) {
        operator_delete(local_80);
      }
      pcVar12 = local_b8;
      lVar14 = lStack_a8;
      if (local_90 < 0) {
        operator_delete(local_a0);
        pcVar12 = local_b8;
        lVar14 = lStack_a8;
      }
    }
    else {
      if (param_3 != 0) {
        do {
          __src = *(void **)(param_3 + 0x20);
          if ((__src != (void *)0x0) && ((*(uint *)(param_3 + 4) | 8) == 10)) {
            uVar1 = *(uint *)(param_3 + 0x10);
            __dest = malloc((ulong)uVar1);
            if (__dest != (void *)0x0) {
              memcpy(__dest,__src,(ulong)uVar1);
              lVar14 = *(long *)(param_1 + 0x208);
              *(void **)(param_1 + 0x208) = __dest;
              if (lVar14 != 0) {
                (**(code **)(param_1 + 0x210))();
              }
              *(undefined **)(param_1 + 0x210) = PTR_free_00d51ac0;
              uVar10 = FUN_00417e08();
              if ((uVar10 & 1) == 0) {
                FUN_0048bc6c(&local_60,*(undefined8 *)(param_1 + 0x208));
                FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/udp_socket.cpp",0x1d51,
                             "[OnUdpEndpointResolved]: ",&local_60);
              }
              if (*(char *)(param_1 + 0x218) != '\0') {
                FUN_004900c0(param_1);
                goto LAB_0048daa0;
              }
              local_60 = (char *)operator_new(0x40);
              uVar8 = s__OnUdpEndpointResolved__UDP_sock_001ca655._24_8_;
              uVar7 = s__OnUdpEndpointResolved__UDP_sock_001ca655._16_8_;
              uVar6 = s__OnUdpEndpointResolved__UDP_sock_001ca655._8_8_;
              uVar5 = s__OnUdpEndpointResolved__UDP_sock_001ca655._0_8_;
              local_50 = _UNK_001f3dc8;
              uStack_58 = _DAT_001f3dc0;
              if ((local_60 < "OnUdpEndpointResolved] UDP socket is not connected") &&
                 ("[OnUdpEndpointResolved] UDP socket is not connected" < local_60 + 0x33))
              goto LAB_0048db20;
              local_60[0x33] = '\0';
              local_60[0x2f] = 'c';
              uVar9 = s__OnUdpEndpointResolved__UDP_sock_001ca655._40_8_;
              uVar4 = s__OnUdpEndpointResolved__UDP_sock_001ca655._32_8_;
              local_60[0x30] = 't';
              local_60[0x31] = 'e';
              local_60[0x32] = 'd';
              *(undefined8 *)(local_60 + 8) = uVar6;
              *(undefined8 *)local_60 = uVar5;
              *(undefined8 *)(local_60 + 0x18) = uVar8;
              *(undefined8 *)(local_60 + 0x10) = uVar7;
              *(undefined8 *)(local_60 + 0x28) = uVar9;
              *(undefined8 *)(local_60 + 0x20) = uVar4;
              goto LAB_0048da84;
            }
            break;
          }
          param_3 = *(long *)(param_3 + 0x28);
        } while (param_3 != 0);
      }
      local_80 = (char *)operator_new(0x50);
      uVar8 = s__OnUdpEndpointResolved__Failed_p_001ecb92._24_8_;
      uVar7 = s__OnUdpEndpointResolved__Failed_p_001ecb92._16_8_;
      uVar6 = s__OnUdpEndpointResolved__Failed_p_001ecb92._8_8_;
      uVar5 = s__OnUdpEndpointResolved__Failed_p_001ecb92._0_8_;
      lStack_70 = _UNK_001f4ae8;
      uStack_78 = _DAT_001f4ae0;
      if ((local_80 < "OnUdpEndpointResolved] Failed parsing the address info result for ") &&
         ("[OnUdpEndpointResolved] Failed parsing the address info result for " < local_80 + 0x43))
      {
LAB_0048db20:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      local_80[0x43] = '\0';
      local_80[0x3f] = 'f';
      local_80[0x40] = 'o';
      local_80[0x41] = 'r';
      local_80[0x42] = ' ';
      bVar2 = *(byte *)(param_1 + 0x267);
      *(undefined8 *)(local_80 + 8) = uVar6;
      *(undefined8 *)local_80 = uVar5;
      *(undefined8 *)(local_80 + 0x18) = uVar8;
      *(undefined8 *)(local_80 + 0x10) = uVar7;
      uVar7 = s__OnUdpEndpointResolved__Failed_p_001ecb92._56_8_;
      uVar6 = s__OnUdpEndpointResolved__Failed_p_001ecb92._48_8_;
      uVar5 = s__OnUdpEndpointResolved__Failed_p_001ecb92._32_8_;
      lVar14 = *(long *)(param_1 + 0x250);
      *(undefined8 *)(local_80 + 0x28) = s__OnUdpEndpointResolved__Failed_p_001ecb92._40_8_;
      *(undefined8 *)(local_80 + 0x20) = uVar5;
      *(undefined8 *)(local_80 + 0x38) = uVar7;
      *(undefined8 *)(local_80 + 0x30) = uVar6;
      uVar10 = *(ulong *)(param_1 + 600);
      if (-1 < (char)bVar2) {
        uVar10 = (ulong)bVar2;
        lVar14 = param_1 + 0x250;
      }
      puVar11 = (undefined8 *)FUN_00547cac(&local_80,lVar14,uVar10);
      local_50 = puVar11[2];
      uStack_58 = puVar11[1];
      local_60 = (char *)*puVar11;
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = 0;
      pcVar12 = local_80;
      lVar14 = lStack_70;
    }
    if (lVar14 < 0) {
      operator_delete(pcVar12);
    }
LAB_0048da84:
    FUN_0048db74(param_1,&local_60);
  }
LAB_0048daa0:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0048db74  FUN_0048db74 =====

void FUN_0048db74(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x2d9) == '\0') goto LAB_0048dd58;
  uVar3 = FUN_004249b0();
  if ((uVar3 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/udp_socket.cpp",0x61b,
                 "UDP endpoint retarget failed: ",param_2);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x2f8);
  if (puVar4 != (undefined8 *)0x0) {
    if (*(char *)(param_1 + 0x300) == '\0') {
      operator_delete(puVar4);
    }
    else {
      *puVar4 = 0;
    }
    *(undefined8 *)(param_1 + 0x2f8) = 0;
  }
  *(undefined1 *)(param_1 + 0x300) = 0;
  FUN_00515738(*(undefined8 *)(param_1 + 0x290));
  FUN_00515738(*(undefined8 *)(param_1 + 0x2c0));
  FUN_00515738(*(undefined8 *)(param_1 + 0x2d0));
  FUN_00515738(*(long *)(param_1 + 0x248) + 8);
  (**(code **)(**(long **)(param_1 + 0x1e8) + 0x18))();
  puVar2 = PTR_free_00d51ac0;
  pvVar6 = *(void **)(param_1 + 0x1f8);
  if (pvVar6 == (void *)0x0) {
    lVar8 = 0;
    lVar5 = *(long *)(param_1 + 0x200);
    if (lVar5 != 0) goto LAB_0048dc48;
LAB_0048dc5c:
    lVar5 = 0;
  }
  else {
    lVar8 = *(long *)((long)pvVar6 + 8);
    lVar5 = *(long *)(param_1 + 0x200);
    if (lVar5 == 0) goto LAB_0048dc5c;
LAB_0048dc48:
    lVar5 = *(long *)(lVar5 + 8);
  }
  plVar9 = *(long **)(param_1 + 0x298);
  plVar10 = *(long **)(param_1 + 0x2a0);
  if (plVar9 != plVar10) {
    do {
      lVar7 = *plVar9;
      if (((lVar7 != 0) && (lVar7 != lVar8)) && (lVar7 != lVar5)) {
        FUN_005cdc6c(lVar7);
        FUN_005ce374(lVar7,puVar2);
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar10);
    plVar9 = *(long **)(param_1 + 0x298);
    pvVar6 = *(void **)(param_1 + 0x1f8);
  }
  *(long **)(param_1 + 0x2a0) = plVar9;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  if (pvVar6 != (void *)0x0) {
    FUN_00515578(pvVar6);
    operator_delete(pvVar6);
  }
  pvVar6 = *(void **)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x200) = 0;
  if (pvVar6 != (void *)0x0) {
    FUN_00515578(pvVar6);
    operator_delete(pvVar6);
  }
  lVar5 = *(long *)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x208) = 0;
  if (lVar5 != 0) {
    (**(code **)(param_1 + 0x210))();
  }
  *(undefined4 *)(param_1 + 700) = 0;
  *(undefined1 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x219) = 0;
  *(undefined2 *)(param_1 + 0x2d8) = 0;
  *(undefined1 *)(param_1 + 0x2da) = 0;
  FUN_005467a4(param_1 + 400);
  if (*(char *)(param_1 + 0x1d8) == '\0') {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
               "this->has_value()","optional operator-> called on a disengaged value");
  }
  local_70 = param_2;
  FUN_007b6160(param_1 + 0x1b8,&local_70,FUN_0046af44);
  FUN_005467c8(param_1 + 400);
LAB_0048dd58:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0048ddb4  FUN_0048ddb4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0048ddb4(long param_1,undefined8 *param_2,undefined2 param_3)

{
  ulong uVar1;
  size_t sVar2;
  undefined8 *******pppppppuVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *******pppppppuVar11;
  long lVar12;
  long lVar13;
  undefined8 *******local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  long local_d0;
  undefined8 *******local_c8;
  ulong uStack_c0;
  undefined8 local_b8;
  undefined2 local_b0;
  char local_a8 [16];
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pppppppuVar11 = &local_f0;
  lVar13 = *(long *)(param_1 + 0x1e0);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    pppppppuVar3 = (undefined8 *******)*param_2;
    uVar4 = param_2[1];
    if (uVar4 < 0x17) {
      local_e0 = CONCAT17((char)uVar4,(undefined7)local_e0);
    }
    else {
      if (0x7fffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar4 | 0xf) + 1;
      pppppppuVar11 = (undefined8 *******)operator_new(uVar1);
      local_e0 = uVar1 | 0x8000000000000000;
      local_f0 = pppppppuVar11;
      uStack_e8 = uVar4;
    }
    if ((pppppppuVar11 <= pppppppuVar3) &&
       (pppppppuVar3 < (undefined8 *******)((long)pppppppuVar11 + uVar4 + 1))) goto LAB_0048e19c;
    memmove(pppppppuVar11,pppppppuVar3,uVar4 + 1);
  }
  else {
    uStack_e8 = param_2[1];
    local_f0 = (undefined8 *******)*param_2;
    local_e0 = param_2[2];
  }
  lVar12 = *(long *)(lVar13 + 0x58);
  local_d8 = param_3;
  if (lVar12 != 0) {
    lVar13 = *(long *)(lVar13 + 0x78);
    if (lVar13 == 0) {
      puVar10 = (undefined8 *)operator_new(0x30);
      uVar4 = uStack_e8;
      pppppppuVar3 = local_f0;
      pppppppuVar11 = (undefined8 *******)(puVar10 + 2);
      *puVar10 = &PTR_FUN_00d1da28;
      puVar10[1] = param_1;
      if ((long)local_e0 < 0) {
        if (uStack_e8 < 0x17) {
          *(char *)((long)puVar10 + 0x27) = (char)uStack_e8;
        }
        else {
          if (0x7fffffffffffffef < uStack_e8) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar1 = (uStack_e8 | 0xf) + 1;
          pppppppuVar11 = (undefined8 *******)operator_new(uVar1);
          puVar10[2] = pppppppuVar11;
          puVar10[3] = uVar4;
          puVar10[4] = uVar1 | 0x8000000000000000;
        }
        sVar2 = uVar4 + 1;
        if ((pppppppuVar11 <= pppppppuVar3) &&
           (pppppppuVar3 < (undefined8 *******)((long)pppppppuVar11 + sVar2))) goto LAB_0048e19c;
        memmove(pppppppuVar11,pppppppuVar3,sVar2);
      }
      else {
        puVar10[3] = uStack_e8;
        *pppppppuVar11 = local_f0;
        puVar10[4] = local_e0;
      }
      *(undefined2 *)(puVar10 + 5) = param_3;
      FUN_00512cf8(lVar12,puVar10);
      goto joined_r0x0048e194;
    }
    uVar9 = FUN_005ce36c();
    uVar4 = uStack_e8;
    pppppppuVar3 = local_f0;
    pppppppuVar11 = &local_c8;
    local_d0 = param_1;
    if ((long)local_e0 < 0) {
      if (uStack_e8 < 0x17) {
        local_b8 = CONCAT17((char)uStack_e8,(undefined7)local_b8);
      }
      else {
        if (0x7fffffffffffffef < uStack_e8) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar1 = (uStack_e8 | 0xf) + 1;
        pppppppuVar11 = (undefined8 *******)operator_new(uVar1);
        local_b8 = uVar1 | 0x8000000000000000;
        uStack_c0 = uVar4;
        local_c8 = pppppppuVar11;
      }
      sVar2 = uVar4 + 1;
      if ((pppppppuVar11 <= pppppppuVar3) &&
         (pppppppuVar3 < (undefined8 *******)((long)pppppppuVar11 + sVar2))) goto LAB_0048e19c;
      memmove(pppppppuVar11,pppppppuVar3,sVar2);
    }
    else {
      uStack_c0 = uStack_e8;
      local_c8 = local_f0;
      local_b8 = local_e0;
    }
    uVar8 = local_d8;
    local_b0 = local_d8;
    local_98 = CONCAT17(0xe,(undefined7)local_98);
    if ((local_a8 < "etUdpEndpoint") && ("SetUdpEndpoint" < local_a8 + 0xe)) {
LAB_0048e19c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    local_a8[0xe] = 0;
    local_a8[0] = s_SetUdpEndpoint_001a88e4[0];
    local_a8[1] = s_SetUdpEndpoint_001a88e4[1];
    local_a8[2] = s_SetUdpEndpoint_001a88e4[2];
    local_a8[3] = s_SetUdpEndpoint_001a88e4[3];
    local_a8[4] = s_SetUdpEndpoint_001a88e4[4];
    local_a8[5] = s_SetUdpEndpoint_001a88e4[5];
    local_a8[6] = s_SetUdpEndpoint_001a88e4[6];
    local_a8[7] = s_SetUdpEndpoint_001a88e4[7];
    local_a8[8] = s_SetUdpEndpoint_001a88e4[8];
    local_a8[9] = s_SetUdpEndpoint_001a88e4[9];
    local_a8[10] = s_SetUdpEndpoint_001a88e4[10];
    local_a8[0xb] = s_SetUdpEndpoint_001a88e4[0xb];
    local_a8[0xc] = s_SetUdpEndpoint_001a88e4[0xc];
    local_a8[0xd] = s_SetUdpEndpoint_001a88e4[0xd];
    local_80 = FUN_0040e7ec;
    local_78 = &DAT_001f4e70;
    local_90 = lVar13;
    local_70 = uVar9;
    puVar10 = (undefined8 *)operator_new(0x70);
    uVar4 = uStack_c0;
    pppppppuVar3 = local_c8;
    pppppppuVar11 = (undefined8 *******)(puVar10 + 2);
    *puVar10 = &PTR_FUN_00d1da00;
    puVar10[1] = param_1;
    if ((long)local_b8 < 0) {
      if (uStack_c0 < 0x17) {
        *(char *)((long)puVar10 + 0x27) = (char)uStack_c0;
      }
      else {
        if (0x7fffffffffffffef < uStack_c0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar1 = (uStack_c0 | 0xf) + 1;
        pppppppuVar11 = (undefined8 *******)operator_new(uVar1);
        puVar10[2] = pppppppuVar11;
        puVar10[3] = uVar4;
        puVar10[4] = uVar1 | 0x8000000000000000;
      }
      sVar2 = uVar4 + 1;
      if ((pppppppuVar11 <= pppppppuVar3) &&
         (pppppppuVar3 < (undefined8 *******)((long)pppppppuVar11 + sVar2))) goto LAB_0048e19c;
      memmove(pppppppuVar11,pppppppuVar3,sVar2);
    }
    else {
      puVar10[3] = uStack_c0;
      *pppppppuVar11 = local_c8;
      puVar10[4] = local_b8;
    }
    lVar13 = local_98;
    uVar7 = CONCAT17(local_a8[0xf],CONCAT16(local_a8[0xe],local_a8._8_6_));
    uVar6 = CONCAT26(local_a8._6_2_,local_a8._0_6_);
    *(undefined2 *)(puVar10 + 5) = uVar8;
    local_a8[0] = '\0';
    local_a8[1] = '\0';
    local_a8[2] = '\0';
    local_a8[3] = '\0';
    local_a8[4] = '\0';
    local_a8[5] = '\0';
    local_a8[6] = '\0';
    local_a8[7] = '\0';
    local_a8[8] = '\0';
    local_a8[9] = '\0';
    local_a8[10] = '\0';
    local_a8[0xb] = '\0';
    local_a8[0xc] = '\0';
    local_a8[0xd] = '\0';
    local_a8[0xe] = 0;
    local_a8[0xf] = 0;
    local_98 = 0;
    puVar10[7] = uVar7;
    puVar10[6] = uVar6;
    puVar10[8] = lVar13;
    puVar10[10] = uStack_88;
    puVar10[9] = local_90;
    puVar10[0xb] = FUN_0040e7ec;
    puVar10[0xc] = &DAT_001f4e70;
    puVar10[0xd] = uVar9;
    FUN_00512cf8(lVar12,puVar10);
    if (*(code **)(local_78 + 8) != (code *)0x0) {
      (**(code **)(local_78 + 8))(local_90);
    }
    if (local_98 < 0) {
      operator_delete((void *)CONCAT26(local_a8._6_2_,local_a8._0_6_));
    }
    if ((long)local_b8 < 0) {
      operator_delete(local_c8);
    }
  }
joined_r0x0048e194:
  if ((long)local_e0 < 0) {
    operator_delete(local_f0);
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0048e1d8  FUN_0048e1d8 =====

void FUN_0048e1d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  void *local_98;
  char acStack_90 [8];
  undefined8 local_88;
  long local_80;
  undefined8 uStack_78;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(*(long *)(param_1 + 0x1e0) + 0x58);
  if (lVar4 != 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x1e0) + 0x78);
    if (lVar5 == 0) {
      puVar3 = (undefined8 *)operator_new(0x10);
      *puVar3 = &PTR_FUN_00d1da78;
      puVar3[1] = param_1;
      if (*(long *)(lVar1 + 0x28) == local_58) {
        FUN_00512cf8(lVar4,puVar3);
        return;
      }
      goto LAB_0048e380;
    }
    uVar2 = FUN_005ce36c();
    local_88 = CONCAT17(0x10,(undefined7)local_88);
    if ((&local_98 < (void **)0x1db638) && ("ClearUdpEndpoint" < &local_88)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    local_88 = local_88 & 0xffffffffffffff00;
    acStack_90[0] = s_ClearUdpEndpoint_001db637[8];
    acStack_90[1] = s_ClearUdpEndpoint_001db637[9];
    acStack_90[2] = s_ClearUdpEndpoint_001db637[10];
    acStack_90[3] = s_ClearUdpEndpoint_001db637[0xb];
    acStack_90[4] = s_ClearUdpEndpoint_001db637[0xc];
    acStack_90[5] = s_ClearUdpEndpoint_001db637[0xd];
    acStack_90[6] = s_ClearUdpEndpoint_001db637[0xe];
    acStack_90[7] = s_ClearUdpEndpoint_001db637[0xf];
    local_98 = (void *)s_ClearUdpEndpoint_001db637._0_8_;
    local_70 = FUN_0040e7ec;
    local_68 = &DAT_001f4e70;
    local_80 = lVar5;
    local_60 = uVar2;
    puVar3 = (undefined8 *)operator_new(0x50);
    puVar3[7] = FUN_0040e7ec;
    puVar3[8] = &DAT_001f4e70;
    puVar3[3] = acStack_90;
    puVar3[2] = local_98;
    *puVar3 = &PTR_FUN_00d1da50;
    puVar3[1] = param_1;
    puVar3[4] = local_88;
    puVar3[6] = uStack_78;
    puVar3[5] = local_80;
    puVar3[9] = uVar2;
    local_98 = (void *)0x0;
    acStack_90[0] = '\0';
    acStack_90[1] = '\0';
    acStack_90[2] = '\0';
    acStack_90[3] = '\0';
    acStack_90[4] = '\0';
    acStack_90[5] = '\0';
    acStack_90[6] = '\0';
    acStack_90[7] = '\0';
    local_88 = 0;
    FUN_00512cf8(lVar4,puVar3);
    if (*(code **)(local_68 + 8) != (code *)0x0) {
      (**(code **)(local_68 + 8))(local_80);
    }
    if ((long)local_88 < 0) {
      operator_delete(local_98);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_0048e380:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048e384  FUN_0048e384 =====

void FUN_0048e384(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 param_6)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined7 uStack_c7;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  cVar1 = *(char *)(param_1 + 0x218);
  if (cVar1 != '\0') {
    lVar6 = *(long *)(*(long *)(param_1 + 0x1e0) + 0x58);
    if (lVar6 != 0) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x1e0) + 0x78);
      if (lVar7 == 0) {
        puVar5 = (undefined8 *)operator_new(0x38);
        puVar5[2] = param_5;
        *(undefined1 *)(puVar5 + 3) = param_6;
        *puVar5 = &PTR_FUN_00d1dac8;
        puVar5[1] = param_1;
        puVar5[4] = param_2;
        puVar5[5] = param_3;
        puVar5[6] = param_4;
        FUN_00512cf8(lVar6,puVar5);
      }
      else {
        uVar4 = FUN_005ce36c();
        local_98 = CONCAT17(4,(undefined7)local_98);
        if ((&local_a8 < &UNK_001b660d) && (&UNK_001b660c < (undefined *)((long)&local_a8 + 4))) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                     ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
        }
        uVar3 = (ulong)local_a8 >> 0x20;
        local_a8 = (void *)CONCAT44((uint)uVar3 & 0xffffff00,0x646e6553);
        local_80 = FUN_0040e7ec;
        local_78 = &DAT_001f4e70;
        local_90 = lVar7;
        local_70 = uVar4;
        puVar5 = (undefined8 *)operator_new(0x78);
        puVar5[2] = param_5;
        puVar5[1] = param_1;
        puVar5[4] = param_2;
        puVar5[3] = CONCAT71(uStack_c7,param_6);
        *puVar5 = &PTR_FUN_00d1daa0;
        puVar5[6] = param_4;
        puVar5[5] = param_3;
        puVar5[8] = uStack_a0;
        puVar5[7] = local_a8;
        puVar5[9] = local_98;
        puVar5[0xb] = uStack_88;
        puVar5[10] = local_90;
        puVar5[0xc] = FUN_0040e7ec;
        puVar5[0xd] = &DAT_001f4e70;
        puVar5[0xe] = uVar4;
        local_a8 = (void *)0x0;
        uStack_a0 = 0;
        local_98 = 0;
        FUN_00512cf8(lVar6,puVar5);
        if (*(code **)(local_78 + 8) != (code *)0x0) {
          (**(code **)(local_78 + 8))(local_90);
        }
        if (local_98 < 0) {
          operator_delete(local_a8);
        }
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 != '\0');
}


// ===== 0048e570  FUN_0048e570 =====

void FUN_0048e570(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long lStack_88;
  char local_80 [5];
  char acStack_7b [3];
  char acStack_78 [5];
  char local_73 [10];
  char local_69;
  long local_68;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(*(long *)(param_1 + 0x1e0) + 0x58);
  local_b0 = param_2;
  lStack_a8 = param_1;
  if (lVar3 != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x1e0) + 0x78);
    if (lVar4 == 0) {
      FUN_00520194(&local_90);
      puVar2 = (undefined8 *)operator_new(0x18);
      puVar2[2] = &local_90;
      *puVar2 = &PTR_FUN_00d1db18;
      puVar2[1] = &local_b0;
      FUN_00512cf8(lVar3,puVar2);
      FUN_005203e8(&local_98,&local_90);
      FUN_0052007c(local_98);
      FUN_00520164(&local_98);
      FUN_005201dc(&local_90);
    }
    else {
      local_48 = FUN_005ce36c();
      lStack_88 = lStack_a8;
      local_90 = local_b0;
      local_69 = '\r';
      if ((local_80 < "pplySettings") && ("ApplySettings" < local_73)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      local_80[0] = s_ApplySettings_001ab41b[0];
      local_80[1] = s_ApplySettings_001ab41b[1];
      local_80[2] = s_ApplySettings_001ab41b[2];
      local_80[3] = s_ApplySettings_001ab41b[3];
      local_80[4] = s_ApplySettings_001ab41b[4];
      acStack_7b[0] = s_ApplySettings_001ab41b[5];
      acStack_7b[1] = s_ApplySettings_001ab41b[6];
      acStack_7b[2] = s_ApplySettings_001ab41b[7];
      acStack_78[0] = s_ApplySettings_001ab41b[8];
      acStack_78[1] = s_ApplySettings_001ab41b[9];
      acStack_78[2] = s_ApplySettings_001ab41b[10];
      acStack_78[3] = s_ApplySettings_001ab41b[0xb];
      acStack_78[4] = s_ApplySettings_001ab41b[0xc];
      local_73[0] = '\0';
      local_58 = FUN_0040e7ec;
      local_50 = &DAT_001f4e70;
      local_68 = lVar4;
      FUN_00520194(&local_98);
      puVar2 = (undefined8 *)operator_new(0x18);
      puVar2[2] = &local_98;
      *puVar2 = &PTR_FUN_00d1daf0;
      puVar2[1] = &local_90;
      FUN_00512cf8(lVar3,puVar2);
      FUN_005203e8(&local_a0,&local_98);
      FUN_0052007c(local_a0);
      FUN_00520164(&local_a0);
      FUN_005201dc(&local_98);
      if (*(code **)(local_50 + 8) != (code *)0x0) {
        (**(code **)(local_50 + 8))(local_68);
      }
      if (local_69 < '\0') {
        operator_delete((void *)CONCAT35(acStack_7b,local_80));
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048e734  FUN_0048e734 =====

byte FUN_0048e734(long param_1)

{
  return *(byte *)(param_1 + 0x219) & 1;
}


// ===== 0048e744  FUN_0048e744 =====

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0048e744(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined1 auStack_b8 [8];
  char *local_b0;
  char **ppcStack_a8;
  char *local_a0;
  char **ppcStack_98;
  undefined *local_90;
  char **ppcStack_88;
  char *local_80;
  undefined **ppuStack_78;
  undefined *local_70;
  char **ppcStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  char *local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  local_60 = param_4;
  uStack_58 = param_5;
  if ((((*(char *)(param_1 + 0x238) != '\0') || (param_2 == 0)) ||
      ((*(byte *)(param_1 + 0x219) & 1) == 0 && *(char *)(param_1 + 0x218) == '\0')) ||
     (*(long *)(param_1 + 0x208) == 0)) {
    if (*(long *)(lVar4 + 0x28) == local_38) {
      FUN_005126f8(param_3,0);
      return;
    }
    goto LAB_0048e964;
  }
  iVar5 = FUN_005cdc10(param_3,param_2,&local_60,1,*(long *)(param_1 + 0x208),PTR_FUN_00d51c08);
  *(int *)(param_1 + 0x2dc) = iVar5;
  if (iVar5 < 0) {
    *(undefined1 *)(param_1 + 0x238) = 1;
    uVar6 = FUN_004249b0();
    if ((uVar6 & 1) == 0) {
      uStack_48 = 0xa0b;
      uVar9 = 0x141;
LAB_0048e8d8:
      local_40 = auStack_b8;
      ppuStack_78 = &local_90;
      ppcStack_88 = &local_a0;
      ppcStack_98 = &local_b0;
      ppcStack_a8 = &local_50;
      local_50 = "../../discord_native_lib/src/udp_socket.cpp";
      local_80 = "../../discord_native_lib/src/udp_socket.cpp";
      local_90 = &DAT_001b3542;
      local_a0 = "UdpSafeSend";
      local_b0 = "[UdpSocket::";
      ppcStack_68 = &local_80;
      local_70 = &DAT_001ca603;
      uVar7 = FUN_005cd33c(*(undefined4 *)(param_1 + 0x2dc));
      uVar8 = FUN_005cd7e4(*(undefined4 *)(param_1 + 0x2dc));
      puVar1 = *(undefined8 **)(ppcStack_68[1] + 8);
      puVar2 = (undefined8 *)puVar1[1];
      puVar3 = (undefined8 *)puVar2[1];
      FUN_00623bb0(&DAT_001f6e50,*puVar3,puVar3[1],*puVar2,*puVar1,*(undefined8 *)ppcStack_68[1],
                   *ppcStack_68,local_70,uVar9,&DAT_001d2ea9,uVar7,&DAT_001c4dc3,uVar8);
    }
  }
  else {
    iVar5 = FUN_0051567c(*(undefined8 *)(param_1 + 0x230));
    *(int *)(param_1 + 0x2dc) = iVar5;
    if (iVar5 < 0) {
      *(undefined1 *)(param_1 + 0x238) = 1;
      uVar6 = FUN_004249b0();
      if ((uVar6 & 1) == 0) {
        uStack_48 = 0xa43;
        uVar9 = 0x148;
        goto LAB_0048e8d8;
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
LAB_0048e964:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048e968  FUN_0048e968 =====

void FUN_0048e968(long param_1,long param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined1 auStack_78 [8];
  char *local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar5 = FUN_00417e08();
  if ((uVar5 & 1) == 0) {
    local_60 = auStack_78;
    local_70 = "../../discord_native_lib/src/udp_socket.cpp";
    uStack_68 = 0xa79;
    FUN_00623bb0(&DAT_001f6e5c,"../../discord_native_lib/src/udp_socket.cpp",0xa79,
                 "ReconnectionAttemptFinished: socket: ",param_2,", succeeded: ",param_3 & 1,
                 ", error: ",param_4,"ReconnectionAttemptFinished: socket: ",&local_70);
  }
  if ((param_3 & 1) == 0) {
    uVar5 = FUN_004249b0();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/udp_socket.cpp",0xb83,
                   "ReconnectionAttemptFinished: failed with error: ",param_4);
    }
    if (*(char *)(param_1 + 0x2d9) != '\0') {
      FUN_0048db74(param_1,param_4);
      goto LAB_0048ec90;
    }
    if (param_2 != 0) {
      FUN_005cdc6c(param_2);
      FUN_005ce374(param_2,PTR_free_00d51ac0);
    }
  }
  else {
    uVar5 = FUN_00417e08();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f614e,"../../discord_native_lib/src/udp_socket.cpp",0xa91,
                   "ReconnectionAttemptFinished: succeeded, local address: ",param_1 + 0x270,
                   &DAT_001ca603,*(undefined2 *)(param_1 + 0x288));
    }
    if ((*(long *)(param_1 + 0x200) != 0) && (uVar5 = FUN_004022fc(), (uVar5 & 1) == 0)) {
      FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/udp_socket.cpp",0xaba,
                   "ReconnectionAttemptFinished: previousSocket_ was never closed");
    }
    if ((param_2 != 0) &&
       ((lVar7 = *(long *)(param_1 + 0x1f8), lVar7 == 0 || (*(long *)(lVar7 + 8) != param_2)))) {
      *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_1 + 0x200);
      *(long *)(param_1 + 0x200) = lVar7;
      pvVar6 = operator_new(0x18);
      FUN_00515560(pvVar6,param_2,1);
      pvVar9 = *(void **)(param_1 + 0x1f8);
      *(void **)(param_1 + 0x1f8) = pvVar6;
      if (pvVar9 != (void *)0x0) {
        FUN_00515578(pvVar9);
        operator_delete(pvVar9);
      }
    }
    puVar4 = PTR_free_00d51ac0;
    lVar7 = *(long *)(param_1 + 0x1f8);
    if (lVar7 == 0) {
      lVar11 = 0;
      lVar8 = *(long *)(param_1 + 0x200);
      if (lVar8 == 0) goto LAB_0048eb28;
LAB_0048ead0:
      lVar8 = *(long *)(lVar8 + 8);
    }
    else {
      lVar11 = *(long *)(lVar7 + 8);
      lVar8 = *(long *)(param_1 + 0x200);
      if (lVar8 != 0) goto LAB_0048ead0;
LAB_0048eb28:
      lVar8 = 0;
    }
    plVar13 = *(long **)(param_1 + 0x298);
    plVar14 = *(long **)(param_1 + 0x2a0);
    if (plVar13 != plVar14) {
      do {
        lVar7 = *plVar13;
        if (((lVar7 != 0) && (lVar7 != lVar11)) && (lVar7 != lVar8)) {
          FUN_005cdc6c(lVar7);
          FUN_005ce374(lVar7,puVar4);
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar14);
      plVar13 = *(long **)(param_1 + 0x298);
      lVar7 = *(long *)(param_1 + 0x1f8);
    }
    *(long **)(param_1 + 0x2a0) = plVar13;
    if (lVar7 != 0) {
      cVar2 = *(char *)(param_1 + 0x239);
      FUN_004913e0(param_1,cVar2 != '\0',*(undefined8 *)(lVar7 + 8));
      puVar12 = *(undefined8 **)(param_1 + 0x2a0);
      for (puVar10 = *(undefined8 **)(param_1 + 0x298); puVar10 != puVar12; puVar10 = puVar10 + 1) {
        FUN_004913e0(param_1,cVar2 != '\0',*puVar10);
      }
    }
    *(undefined1 *)(param_1 + 0x2da) = 1;
    FUN_005467a4(param_1 + 0x140);
    if (*(char *)(param_1 + 0x188) == '\0') {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
                 "this->has_value()","optional operator-> called on a disengaged value");
    }
    FUN_007b6160(param_1 + 0x168,&local_70,FUN_00441e10);
    FUN_005467c8(param_1 + 0x140);
    if (*(char *)(param_1 + 0x2d9) != '\0') {
      FUN_00515738(*(undefined8 *)(param_1 + 0x290));
      FUN_00515708(*(long *)(param_1 + 0x248) + 8,FUN_00491514,100,
                   *(undefined8 *)(*(long *)(param_1 + 0x248) + 0x20));
      (**(code **)(**(long **)(param_1 + 0x1e8) + 0x10))();
      iVar1 = *(int *)(param_1 + 0x2c8);
      if (0 < iVar1) {
        FUN_00515708(*(undefined8 *)(param_1 + 0x2c0),FUN_0048ece8,iVar1,iVar1);
      }
    }
  }
  *(undefined2 *)(param_1 + 0x2d8) = 0;
LAB_0048ec90:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048ece8  FUN_0048ece8 =====

void FUN_0048ece8(undefined8 *param_1)

{
  FUN_0049047c(*param_1);
  return;
}


// ===== 0048ecf0  FUN_0048ecf0 =====

void FUN_0048ecf0(long *param_1)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (*(long *)(lVar3 + 0x200) != 0) {
    uVar1 = FUN_0044075c();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/udp_socket.cpp",0xc28,
                   "Closing previousSocket_ after reconnection.");
    }
    pvVar2 = *(void **)(lVar3 + 0x200);
    *(undefined8 *)(lVar3 + 0x200) = 0;
    if (pvVar2 != (void *)0x0) {
      FUN_00515578(pvVar2);
      operator_delete(pvVar2);
    }
  }
  FUN_00515738(*(undefined8 *)(lVar3 + 0x2d0));
  return;
}


// ===== 0048ed5c  FUN_0048ed5c =====

void FUN_0048ed5c(long param_1,long param_2,byte param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  undefined8 *****__dest;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  void *pvVar11;
  undefined8 *****__src;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 ****local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  byte local_b8 [8];
  void *local_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 ****local_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined2 local_80;
  undefined1 local_7c;
  undefined1 local_78;
  undefined1 local_74;
  undefined1 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (((*(byte *)(param_1 + 0x219) & 1) != 0) || (*(char *)(param_1 + 0x2d8) != '\0')) {
    if (param_2 != 0) {
      plVar9 = *(long **)(param_1 + 0x2a0);
      plVar8 = *(long **)(param_1 + 0x298);
      plVar13 = plVar8;
      for (plVar10 = plVar8; (plVar10 != plVar9 && (plVar13 = plVar10, *plVar10 != param_2));
          plVar10 = plVar10 + 1) {
        plVar13 = plVar9;
      }
      if (((param_3 & 1) == 0) && (8 < (ulong)((long)plVar9 - (long)plVar8))) {
        FUN_005cdc6c(param_2);
        FUN_005ce374(param_2,PTR_free_00d51ac0);
        plVar10 = *(long **)(param_1 + 0x2a0);
        if (plVar10 == plVar13) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x630,
                     "__position != end()",
                     "vector::erase(iterator) called with a non-dereferenceable iterator");
        }
        memmove(plVar13,plVar13 + 1,(long)plVar10 - (long)(plVar13 + 1));
        *(long **)(param_1 + 0x2a0) = plVar10 + -1;
        goto LAB_0048f1a8;
      }
    }
    if (*(char *)(param_1 + 0x2d8) != '\0') {
      if (*(long *)(lVar4 + 0x28) == local_68) {
        FUN_0048e968(param_1,param_2,param_3 & 1,param_4);
        return;
      }
      goto LAB_0048f254;
    }
    if ((*(byte *)(param_1 + 0x219) & 1) != 0) {
      if ((param_2 != 0) &&
         ((lVar7 = *(long *)(param_1 + 0x1f8), lVar7 == 0 || (*(long *)(lVar7 + 8) != param_2)))) {
        *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_1 + 0x200);
        *(long *)(param_1 + 0x200) = lVar7;
        pvVar5 = operator_new(0x18);
        FUN_00515560(pvVar5,param_2,1);
        pvVar11 = *(void **)(param_1 + 0x1f8);
        *(void **)(param_1 + 0x1f8) = pvVar5;
        if (pvVar11 != (void *)0x0) {
          FUN_00515578(pvVar11);
          operator_delete(pvVar11);
        }
      }
      puVar2 = PTR_free_00d51ac0;
      if (*(long *)(param_1 + 0x1f8) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(long *)(*(long *)(param_1 + 0x1f8) + 8);
      }
      if (*(long *)(param_1 + 0x200) == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = *(long *)(*(long *)(param_1 + 0x200) + 8);
      }
      plVar10 = *(long **)(param_1 + 0x298);
      plVar13 = *(long **)(param_1 + 0x2a0);
      if (plVar10 != plVar13) {
        do {
          lVar12 = *plVar10;
          if (((lVar12 != 0) && (lVar12 != lVar7)) && (lVar12 != lVar14)) {
            FUN_005cdc6c(lVar12);
            FUN_005ce374(lVar12,puVar2);
          }
          plVar10 = plVar10 + 1;
        } while (plVar10 != plVar13);
        plVar10 = *(long **)(param_1 + 0x298);
      }
      puVar2 = &UNK_001a897d;
      if ((param_3 & 1) == 0) {
        puVar2 = &DAT_001b3348;
      }
      *(long **)(param_1 + 0x2a0) = plVar10;
      local_7c = 0;
      local_78 = 0;
      local_74 = 0;
      local_70 = 0;
      uStack_a8 = 0;
      local_b0 = (void *)0x0;
      local_98 = (undefined8 ****)0x0;
      lStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      local_b8[0] = param_3 & 1;
      FUN_00547bf8(&local_b0,puVar2);
      if ((param_3 & 1) == 0) {
        local_c0 = local_c0 & 0xffffffffffffff;
        local_d0 = (undefined8 ****)((ulong)local_d0 & 0xffffffffffffff00);
      }
      else if (*(char *)(param_1 + 0x287) < '\0') {
        uVar6 = *(ulong *)(param_1 + 0x278);
        __src = *(undefined8 ******)(param_1 + 0x270);
        if (uVar6 < 0x17) {
          __dest = &local_d0;
          local_c0 = CONCAT17((char)uVar6,(undefined7)local_c0);
        }
        else {
          if (0x7fffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar1 = (uVar6 | 0xf) + 1;
          __dest = (undefined8 *****)operator_new(uVar1);
          local_c0 = uVar1 | 0x8000000000000000;
          local_d0 = __dest;
          uStack_c8 = uVar6;
        }
        if ((__dest <= __src) && (__src < (undefined8 *****)((long)__dest + uVar6 + 1))) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                     ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
        }
        memmove(__dest,__src,uVar6 + 1);
      }
      else {
        uStack_c8 = *(ulong *)(param_1 + 0x278);
        local_d0 = *(undefined8 *****)(param_1 + 0x270);
        local_c0 = *(ulong *)(param_1 + 0x280);
      }
      if ((long)uStack_88 < 0) {
        operator_delete(local_98);
      }
      local_80 = *(undefined2 *)(param_1 + 0x288);
      if ((param_3 & 1) == 0) {
        local_80 = 0;
      }
      uStack_90 = uStack_c8;
      local_98 = local_d0;
      uStack_88 = local_c0;
      if ((param_3 & 1) == 0) {
        uVar6 = FUN_004249b0();
        if ((uVar6 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/udp_socket.cpp",0xdd3,
                       "ConnectionAttemptFinished: failed with error: ",param_4);
        }
      }
      else {
        uVar6 = FUN_00417e08();
        if ((uVar6 & 1) == 0) {
          FUN_00623bb0(&DAT_001f614e,"../../discord_native_lib/src/udp_socket.cpp",0xdb1,
                       "ConnectionAttemptFinished: succeeded, local address: ",&local_98,
                       &DAT_001ca603,local_80);
        }
      }
      FUN_005467a4(param_1 + 0xf0);
      if (*(char *)(param_1 + 0x138) == '\0') {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
                   "this->has_value()","optional operator-> called on a disengaged value");
      }
      local_d0 = (undefined8 ****)local_b8;
      uStack_c8 = param_4;
      FUN_007b6160(param_1 + 0x118,&local_d0,FUN_0049186c);
      FUN_005467c8(param_1 + 0xf0);
      if ((param_3 & 1) != 0) {
        FUN_00515708(*(long *)(param_1 + 0x248) + 8,FUN_00491514,100,
                     *(undefined8 *)(*(long *)(param_1 + 0x248) + 0x20));
        (**(code **)(**(long **)(param_1 + 0x1e8) + 0x10))();
        iVar3 = *(int *)(param_1 + 0x2c8);
        if (0 < iVar3) {
          FUN_00515708(*(undefined8 *)(param_1 + 0x2c0),FUN_0048ece8,iVar3,iVar3);
        }
      }
      FUN_00515738(*(undefined8 *)(param_1 + 0x290));
      *(byte *)(param_1 + 0x218) = param_3 & 1;
      *(undefined4 *)(param_1 + 0x219) = 0;
      if ((long)uStack_88 < 0) {
        operator_delete(local_98);
      }
      if (lStack_a0 < 0) {
        operator_delete(local_b0);
      }
    }
  }
LAB_0048f1a8:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
LAB_0048f254:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048f258  FUN_0048f258 =====

/* WARNING: Removing unreachable block (ram,0x0048f634) */
/* WARNING: Removing unreachable block (ram,0x0048f50c) */
/* WARNING: Removing unreachable block (ram,0x0048f3e4) */
/* WARNING: Removing unreachable block (ram,0x0048f410) */
/* WARNING: Removing unreachable block (ram,0x0048f638) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0048f258(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  char cVar2;
  ushort uVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  undefined1 **ppuVar7;
  bool bVar8;
  undefined8 *******__dest;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *******__src;
  undefined1 *local_120;
  ulong uStack_118;
  byte local_109;
  void *local_108 [2];
  char local_f1;
  void *local_f0;
  undefined8 uStack_e8;
  long local_e0;
  void *local_d0;
  undefined8 uStack_c8;
  long local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 *******local_90;
  ulong uStack_88;
  undefined8 local_80;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  cVar2 = *(char *)(param_1 + 0x2d8);
  if ((*(byte *)(param_1 + 0x219) & 1) != 0 || cVar2 != '\0') {
    uVar10 = 0;
    uVar3 = *(ushort *)(param_1 + 0x288);
    do {
      if (*(char *)(param_3 + 8 + uVar10) == '\0') {
        bVar8 = uVar10 == 0;
        if (0x16 < uVar10) goto LAB_0048f2f4;
        __dest = &local_90;
        local_80 = CONCAT17((char)uVar10,(undefined7)local_80);
        goto LAB_0048f310;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != 0x40);
    bVar8 = false;
LAB_0048f2f4:
    uVar1 = (uVar10 | 0xf) + 1;
    __dest = (undefined8 *******)operator_new(uVar1);
    local_80 = uVar1 | 0x8000000000000000;
    local_90 = __dest;
    uStack_88 = uVar10;
LAB_0048f310:
    __src = (undefined8 *******)(param_3 + 8);
    if ((__dest <= __src) && (__src < (undefined8 *******)((long)__dest + uVar10))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    if (!bVar8) {
      memcpy(__dest,__src,uVar10);
    }
    cVar4 = *(char *)(param_1 + 0x287);
    *(undefined1 *)((long)__dest + uVar10) = 0;
    if (cVar4 < '\0') {
      operator_delete(*(void **)(param_1 + 0x270));
      cVar2 = *(char *)(param_1 + 0x2d8);
    }
    *(ulong *)(param_1 + 0x278) = uStack_88;
    *(undefined8 ********)(param_1 + 0x270) = local_90;
    *(ulong *)(param_1 + 0x280) = local_80;
    *(ushort *)(param_1 + 0x288) =
         *(ushort *)(param_3 + 0x48) >> 8 | (ushort)((*(ushort *)(param_3 + 0x48) & 0xff00ff) << 8);
    uVar5 = (*(uint *)(param_3 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_3 + 4) & 0xff00ff) << 8;
    bVar8 = (uVar5 >> 0x10 | uVar5 << 0x10) == *(uint *)(param_1 + 0x26c);
    if (cVar2 == '\0') {
      if (bVar8) {
        local_80 = local_80 & 0xffffffffffffff;
        local_90 = (undefined8 *******)((ulong)local_90 & 0xffffffffffffff00);
        FUN_0048ed5c(param_1,param_2,1,&local_90);
        goto LAB_0048f680;
      }
      FUN_0054923c(local_108);
      puVar9 = (undefined8 *)
               FUN_00547994(local_108,0,
                            "[OnConnectionResponse] Server acknowledged our connection attempt but the SSRC returned ("
                            ,0x59);
      uStack_e8 = puVar9[1];
      local_f0 = (void *)*puVar9;
      local_e0 = puVar9[2];
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      puVar9 = (undefined8 *)FUN_00547cac(&local_f0,") did not match (",0x11);
      uStack_c8 = puVar9[1];
      local_d0 = (void *)*puVar9;
      local_c0 = puVar9[2];
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      FUN_0054923c(&local_120,*(undefined4 *)(param_1 + 0x26c));
      ppuVar7 = (undefined1 **)local_120;
      if (-1 < (char)local_109) {
        uStack_118 = (ulong)local_109;
        ppuVar7 = &local_120;
      }
      puVar9 = (undefined8 *)FUN_00547cac(&local_d0,ppuVar7,uStack_118);
      uStack_a8 = puVar9[1];
      local_b0 = *puVar9;
      local_a0 = puVar9[2];
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      puVar9 = (undefined8 *)FUN_00547cac(&local_b0,&DAT_001ca519,1);
      uStack_88 = puVar9[1];
      local_90 = (undefined8 *******)*puVar9;
      local_80 = puVar9[2];
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      FUN_0048ed5c(param_1,param_2,0,&local_90);
    }
    else {
      if (bVar8) {
        if (((uint)uVar3 ==
             ((uint)(*(ushort *)(param_3 + 0x48) >> 8) |
             (*(ushort *)(param_3 + 0x48) & 0xff00ff) << 8)) &&
           (uVar10 = FUN_004022fc(), (uVar10 & 1) == 0)) {
          FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/udp_socket.cpp",0xf7a,
                       "OnConnectionResponse: reconnection didn\'t change local port");
        }
        local_80 = local_80 & 0xffffffffffffff;
        local_90 = (undefined8 *******)((ulong)local_90 & 0xffffffffffffff00);
        FUN_0048e968(param_1,param_2,1,&local_90);
        goto LAB_0048f680;
      }
      FUN_0054923c(local_108);
      puVar9 = (undefined8 *)
               FUN_00547994(local_108,0,
                            "[OnConnectionResponse] Server acknowledged our connection attempt but the SSRC returned ("
                            ,0x59);
      uStack_e8 = puVar9[1];
      local_f0 = (void *)*puVar9;
      local_e0 = puVar9[2];
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      puVar9 = (undefined8 *)FUN_00547cac(&local_f0,") did not match (",0x11);
      uStack_c8 = puVar9[1];
      local_d0 = (void *)*puVar9;
      local_c0 = puVar9[2];
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      FUN_0054923c(&local_120,*(undefined4 *)(param_1 + 0x26c));
      ppuVar7 = (undefined1 **)local_120;
      if (-1 < (char)local_109) {
        uStack_118 = (ulong)local_109;
        ppuVar7 = &local_120;
      }
      puVar9 = (undefined8 *)FUN_00547cac(&local_d0,ppuVar7,uStack_118);
      uStack_a8 = puVar9[1];
      local_b0 = *puVar9;
      local_a0 = puVar9[2];
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      puVar9 = (undefined8 *)FUN_00547cac(&local_b0,&DAT_001ca519,1);
      uStack_88 = puVar9[1];
      local_90 = (undefined8 *******)*puVar9;
      local_80 = puVar9[2];
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      FUN_0048e968(param_1,param_2,0,&local_90);
    }
    if ((char)local_109 < '\0') {
      operator_delete(local_120);
    }
    if (local_c0 < 0) {
      operator_delete(local_d0);
    }
    if (local_e0 < 0) {
      operator_delete(local_f0);
    }
    if (local_f1 < '\0') {
      operator_delete(local_108[0]);
    }
  }
LAB_0048f680:
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048f6dc  FUN_0048f6dc =====

void FUN_0048f6dc(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  long *local_78 [3];
  undefined8 local_60;
  undefined8 *local_58;
  long **pplStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_006258f0();
  lVar6 = *param_1;
  *(undefined8 *)(lVar6 + 0x240) = uVar2;
  FUN_00512a58(local_78,param_3,param_2);
  if (param_2 < 1) goto LAB_0048f7f0;
  uVar3 = FUN_00510654(local_78[0],param_2);
  if (((uVar3 & 1) == 0) || (*(char *)(lVar6 + 0x2d8) == '\0')) {
    if ((*(byte *)(lVar6 + 0x219) & 1) == 0) {
      if ((uVar3 & 1) == 0) {
        if (param_2 == 8) {
          local_58 = (undefined8 *)*local_78[0];
          FUN_0048f8dc(*(undefined8 *)(lVar6 + 0x248),&local_58,uVar2);
        }
        else {
          if ((*(char *)(lVar6 + 0x2da) != '\0') &&
             ((*(long *)(lVar6 + 0x200) == 0 ||
              (*(long **)(*(long *)(lVar6 + 0x200) + 8) != param_1)))) {
            FUN_0048f9e0(lVar6);
          }
          local_60 = uVar2;
          FUN_005467a4(lVar6);
          if (*(char *)(lVar6 + 0x48) == '\0') {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
                       "this->has_value()","optional operator-> called on a disengaged value");
          }
          local_58 = &local_60;
          pplStack_50 = local_78;
          FUN_007b6160(lVar6 + 0x28,&local_58,FUN_00491880);
          FUN_005467c8(lVar6);
        }
      }
      goto LAB_0048f7f0;
    }
    uVar4 = FUN_0044075c();
    if ((uVar3 & 1) == 0) {
      if ((uVar4 & 1) == 0) {
        FUN_00623bb0(&DAT_001f6276,"../../discord_native_lib/src/udp_socket.cpp",0x1300,
                     "Connection in progress, received packet of size: ",param_2);
      }
      goto LAB_0048f7f0;
    }
    if ((uVar4 & 1) == 0) {
      pcVar5 = "Connection in progress, received native echo response of size: ";
      uVar2 = 0x12d0;
      goto LAB_0048f7d8;
    }
  }
  else {
    uVar3 = FUN_0044075c();
    if ((uVar3 & 1) == 0) {
      pcVar5 = "Reconnection in progress, received native echo response of size: ";
      uVar2 = 0x1298;
LAB_0048f7d8:
      FUN_00623bb0(&DAT_001f6276,"../../discord_native_lib/src/udp_socket.cpp",uVar2,pcVar5,param_2)
      ;
    }
  }
  FUN_0048f258(lVar6,param_1,local_78[0]);
LAB_0048f7f0:
  FUN_00512a8c(local_78);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048f8dc  FUN_0048f8dc =====

void FUN_0048f8dc(long *param_1,long param_2,long param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  long lVar3;
  long lVar4;
  int local_50;
  int iStack_4c;
  int *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  iVar1 = *(int *)(param_2 + 4);
  if ((iVar1 == (int)param_1[5]) && (*(char *)((long)param_1 + 0x2c) == '\0')) {
    lVar4 = *param_1;
    auVar2 = SEXT816(param_3 * 1000 - param_1[6]) * SEXT816(0x431bde82d7b634db);
    local_50 = (int)(auVar2._8_8_ >> 0x12) - (auVar2._12_4_ >> 0x1f);
    *(undefined1 *)((long)param_1 + 0x2c) = 1;
    iStack_4c = iVar1;
    FUN_005467a4(lVar4 + 0x50);
    if (*(char *)(lVar4 + 0x98) == '\0') {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
                 "this->has_value()","optional operator-> called on a disengaged value");
    }
    local_48 = &iStack_4c;
    puStack_40 = (undefined1 *)&local_50;
    FUN_007b6160(lVar4 + 0x78,&local_48,FUN_004918a8);
    FUN_005467c8(lVar4 + 0x50);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048f9e0  FUN_0048f9e0 =====

void FUN_0048f9e0(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0044075c();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/udp_socket.cpp",0x13d0,
                 "Received first data on new socket. Starting timeout to close previous socket.");
  }
  *(undefined1 *)(param_1 + 0x2da) = 0;
  FUN_00515708(*(undefined8 *)(param_1 + 0x2d0),FUN_0048ecf0,5000,0);
  return;
}


// ===== 0048fa3c  FUN_0048fa3c =====

/* WARNING: Removing unreachable block (ram,0x0048fc20) */

void FUN_0048fa3c(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *local_a8 [2];
  char local_91;
  void *local_90;
  undefined8 uStack_88;
  long local_80;
  undefined1 local_70 [16];
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  iVar1 = *(int *)(param_1 + 700);
  *(int *)(param_1 + 700) = iVar1 + 1;
  if (iVar1 < *(int *)(param_1 + 0x2b8)) {
    lVar4 = FUN_005157ac();
    uVar5 = lVar4 << 1;
    if ((ulong)(long)*(int *)(param_1 + 0x2b4) <= (ulong)(lVar4 << 1)) {
      uVar5 = (long)*(int *)(param_1 + 0x2b4);
    }
    FUN_00515768(*(undefined8 *)(param_1 + 0x290));
    FUN_00515798(*(undefined8 *)(param_1 + 0x290),uVar5);
    uVar5 = FUN_00417e08();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/udp_socket.cpp",0x1549,"Sending echo"
                  );
    }
    puVar9 = *(undefined8 **)(param_1 + 0x2a0);
    for (puVar8 = *(undefined8 **)(param_1 + 0x298); puVar8 != puVar9; puVar8 = puVar8 + 1) {
      uVar7 = *puVar8;
      local_70 = FUN_005cd334(0,0);
      uVar6 = FUN_005125e4(local_70,0x4a);
      local_70._8_8_ = 0x4a;
      *(undefined4 *)local_70._0_8_ = 0x46000100;
      *(undefined8 *)(local_70._0_8_ + 0x10) = 0;
      *(undefined8 *)(local_70._0_8_ + 8) = 0;
      *(undefined8 *)(local_70._0_8_ + 0x20) = 0;
      *(undefined8 *)(local_70._0_8_ + 0x18) = 0;
      *(undefined8 *)(local_70._0_8_ + 0x30) = 0;
      *(undefined8 *)(local_70._0_8_ + 0x28) = 0;
      *(undefined8 *)(local_70._0_8_ + 0x40) = 0;
      *(undefined8 *)(local_70._0_8_ + 0x38) = 0;
      uVar2 = (*(uint *)(param_1 + 0x26c) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0x26c) & 0xff00ff) << 8;
      *(uint *)(local_70._0_8_ + 4) = uVar2 >> 0x10 | uVar2 << 0x10;
      FUN_0048e744(param_1,uVar7,uVar6,local_70._0_8_,0x4a);
    }
  }
  else {
    FUN_00515738(*(undefined8 *)(param_1 + 0x290));
    FUN_005490bc(local_a8,*(undefined4 *)(param_1 + 0x2b8));
    puVar8 = (undefined8 *)
             FUN_00547994(local_a8,0,"[OnConnectAttemptTimedOut] Connection timed out ",0x30);
    uStack_88 = puVar8[1];
    local_90 = (void *)*puVar8;
    local_80 = puVar8[2];
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    puVar8 = (undefined8 *)FUN_00547cac(&local_90," times.",7);
    local_70._8_8_ = puVar8[1];
    local_70._0_8_ = *puVar8;
    local_60 = puVar8[2];
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    FUN_0048ed5c(param_1,0,0,local_70);
    if (local_80 < 0) {
      operator_delete(local_90);
    }
    if (local_91 < '\0') {
      operator_delete(local_a8[0]);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048fc50  FUN_0048fc50 =====

/* WARNING: Removing unreachable block (ram,0x0048fd54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0048fc50(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined2 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 auStack_b8 [8];
  char *local_b0;
  long **pplStack_a8;
  char *local_a0;
  char **ppcStack_98;
  undefined *local_90;
  char **ppcStack_88;
  char *local_80;
  undefined **ppuStack_78;
  undefined *local_70;
  char **ppcStack_68;
  long *local_60;
  undefined8 local_58;
  undefined1 *puStack_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (*(long *)(param_1 + 0x290) == 0) {
    local_60 = (long *)operator_new(0x30);
    uVar7 = s__ConnectNow__invalid_call__use_T_001de770._16_8_;
    uVar13 = s__ConnectNow__invalid_call__use_T_001de770._8_8_;
    uVar11 = s__ConnectNow__invalid_call__use_T_001de770._0_8_;
    puStack_50 = _UNK_001f2198;
    local_58 = _DAT_001f2190;
    if ((local_60 < (long *)0x1de771) &&
       ("[ConnectNow] invalid call; use TryConnect first" < (char *)((long)local_60 + 0x2fU))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    lVar5 = CONCAT17(s__ConnectNow__invalid_call__use_T_001de770[0x1f],
                     s__ConnectNow__invalid_call__use_T_001de770._24_7_);
    *(char *)((long)local_60 + 0x2f) = '\0';
    uVar8 = s__ConnectNow__invalid_call__use_T_001de770._39_8_;
    uVar6 = CONCAT71(s__ConnectNow__invalid_call__use_T_001de770._32_7_,
                     s__ConnectNow__invalid_call__use_T_001de770[0x1f]);
    local_60[1] = uVar13;
    *local_60 = uVar11;
    local_60[3] = lVar5;
    local_60[2] = uVar7;
    *(undefined8 *)((long)local_60 + 0x27) = uVar8;
    *(undefined8 *)((long)local_60 + 0x1f) = uVar6;
    FUN_0048ed5c(param_1,0,0,&local_60);
    goto LAB_0048ff54;
  }
  uVar3 = **(undefined2 **)(param_1 + 0x208);
  plVar10 = (long *)malloc(0xe0);
  if (plVar10 != (long *)0x0) {
    uVar11 = *(undefined8 *)(param_1 + 0x1e0);
    *plVar10 = param_1;
    uVar11 = FUN_0051452c(uVar11);
    iVar9 = FUN_005d14d0(uVar11,plVar10,uVar3);
    *(int *)(param_1 + 0x2dc) = iVar9;
    if (-1 < iVar9) {
      iVar9 = FUN_005cdc4c(plVar10,PTR_FUN_00d51c18,FUN_0048f6dc);
      *(int *)(param_1 + 0x2dc) = iVar9;
      if (-1 < iVar9) {
        local_60 = plVar10;
        FUN_0048ffa8(param_1 + 0x298,&local_60);
        goto LAB_0048fd70;
      }
    }
    FUN_005ce374(plVar10,PTR_free_00d51ac0);
  }
LAB_0048fd70:
  uVar3 = **(undefined2 **)(param_1 + 0x208);
  plVar10 = (long *)malloc(0xe0);
  if (plVar10 != (long *)0x0) {
    uVar11 = *(undefined8 *)(param_1 + 0x1e0);
    *plVar10 = param_1;
    uVar11 = FUN_0051452c(uVar11);
    iVar9 = FUN_005d14d0(uVar11,plVar10,uVar3);
    *(int *)(param_1 + 0x2dc) = iVar9;
    if (-1 < iVar9) {
      iVar9 = FUN_005cdc4c(plVar10,PTR_FUN_00d51c18,FUN_0048f6dc);
      *(int *)(param_1 + 0x2dc) = iVar9;
      if (-1 < iVar9) {
        local_60 = plVar10;
        FUN_0048ffa8(param_1 + 0x298,&local_60);
        goto LAB_0048fdec;
      }
    }
    FUN_005ce374(plVar10,PTR_free_00d51ac0);
  }
LAB_0048fdec:
  puVar14 = *(undefined8 **)(param_1 + 0x298);
  puVar15 = *(undefined8 **)(param_1 + 0x2a0);
  if (puVar14 == puVar15) {
    if (*(int *)(param_1 + 0x2dc) < 0) {
      *(undefined1 *)(param_1 + 0x238) = 1;
      uVar12 = FUN_004249b0();
      if ((uVar12 & 1) == 0) {
        puStack_50 = auStack_b8;
        ppcStack_68 = &local_80;
        local_60 = (long *)0x1befa6;
        local_58 = 0x175b;
        pplStack_a8 = &local_60;
        local_b0 = "[UdpSocket::";
        ppcStack_98 = &local_b0;
        local_a0 = "ConnectNow";
        ppcStack_88 = &local_a0;
        local_90 = &DAT_001b3542;
        ppuStack_78 = &local_90;
        local_80 = "../../discord_native_lib/src/udp_socket.cpp";
        local_70 = &DAT_001ca603;
        uVar11 = FUN_005cd33c(*(undefined4 *)(param_1 + 0x2dc));
        uVar13 = FUN_005cd7e4(*(undefined4 *)(param_1 + 0x2dc));
        puVar14 = *(undefined8 **)(ppcStack_68[1] + 8);
        puVar15 = (undefined8 *)puVar14[1];
        puVar1 = (undefined8 *)puVar15[1];
        FUN_00623bb0(&DAT_001f6e50,*puVar1,puVar1[1],*puVar15,*puVar14,*(undefined8 *)ppcStack_68[1]
                     ,*ppcStack_68,local_70,0x2eb,&DAT_001d2ea9,uVar11,&DAT_001c4dc3,uVar13);
      }
    }
  }
  else {
    cVar2 = *(char *)(param_1 + 0x239);
    if (*(long *)(param_1 + 0x1f8) != 0) {
      FUN_004913e0(param_1,cVar2 != '\0',*(undefined8 *)(*(long *)(param_1 + 0x1f8) + 8));
      puVar14 = *(undefined8 **)(param_1 + 0x298);
      puVar15 = *(undefined8 **)(param_1 + 0x2a0);
    }
    for (; puVar14 != puVar15; puVar14 = puVar14 + 1) {
      FUN_004913e0(param_1,cVar2 != '\0',*puVar14);
    }
    *(undefined4 *)(param_1 + 0x2dc) = 0;
    *(undefined4 *)(param_1 + 0x219) = 1;
    *(undefined4 *)(param_1 + 700) = 0;
    FUN_00515708(*(undefined8 *)(param_1 + 0x290),FUN_00491898,0,(long)*(int *)(param_1 + 0x2b0));
  }
LAB_0048ff54:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0048ffa8  FUN_0048ffa8 =====

void FUN_0048ffa8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  void *__dest;
  void *__src;
  ulong __n;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 == (undefined8 *)param_1[2]) {
    __src = (void *)*param_1;
    __n = (long)puVar3 - (long)__src;
    uVar1 = ((long)__n >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar2 = __n >> 2;
    if (__n >> 2 <= uVar1) {
      uVar2 = uVar1;
    }
    if (0x7ffffffffffffff7 < __n) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) goto LAB_00490090;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    __dest = operator_new(uVar2 * 8);
    puVar3 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
    *puVar3 = *param_2;
    memmove(__dest,__src,__n);
    *param_1 = __dest;
    param_1[1] = puVar3 + 1;
    param_1[2] = (void *)((long)__dest + uVar2 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    if (puVar3 == (undefined8 *)0x0) {
LAB_00490090:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
    *puVar3 = *param_2;
    param_1[1] = puVar3 + 1;
  }
  return;
}


// ===== 004900c0  FUN_004900c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004900c0(long param_1)

{
  char cVar1;
  undefined2 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined2 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *local_80;
  undefined8 local_78;
  long lStack_70;
  long local_68;
  
  puVar8 = PTR_free_00d51ac0;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (*(long *)(param_1 + 0x290) == 0) {
    local_80 = (long *)operator_new(0x50);
    uVar5 = s__ConnectNowForEndpointRetarget__i_001adcaa._48_8_;
    uVar4 = s__ConnectNowForEndpointRetarget__i_001adcaa._40_8_;
    uVar10 = s__ConnectNowForEndpointRetarget__i_001adcaa._32_8_;
    lStack_70 = _UNK_001f2598;
    local_78 = _DAT_001f2590;
    if ((local_80 < (long *)0x1adcab) &&
       ("[ConnectNowForEndpointRetarget] invalid call; use SetUdpEndpoint first" <
        (char *)((long)local_80 + 0x46U))) goto LAB_00490450;
    lVar12 = CONCAT26(s__ConnectNowForEndpointRetarget__i_001adcaa._62_2_,
                      s__ConnectNowForEndpointRetarget__i_001adcaa._56_6_);
    *(char *)((long)local_80 + 0x46) = '\0';
    local_80[5] = uVar4;
    local_80[4] = uVar10;
    local_80[7] = lVar12;
    local_80[6] = uVar5;
    uVar6 = s__ConnectNowForEndpointRetarget__i_001adcaa._24_8_;
    uVar5 = s__ConnectNowForEndpointRetarget__i_001adcaa._16_8_;
    uVar4 = s__ConnectNowForEndpointRetarget__i_001adcaa._8_8_;
    uVar10 = s__ConnectNowForEndpointRetarget__i_001adcaa._0_8_;
    *(ulong *)((long)local_80 + 0x3e) =
         CONCAT62(s__ConnectNowForEndpointRetarget__i_001adcaa._64_6_,
                  s__ConnectNowForEndpointRetarget__i_001adcaa._62_2_);
    local_80[1] = uVar4;
    *local_80 = uVar10;
    local_80[3] = uVar6;
    local_80[2] = uVar5;
  }
  else {
    puVar11 = *(undefined2 **)(param_1 + 0x208);
    if (puVar11 == (undefined2 *)0x0) {
      local_80 = (long *)operator_new(0x40);
      uVar6 = s__ConnectNowForEndpointRetarget__U_001e9fe1._24_8_;
      uVar5 = s__ConnectNowForEndpointRetarget__U_001e9fe1._16_8_;
      uVar4 = s__ConnectNowForEndpointRetarget__U_001e9fe1._8_8_;
      uVar10 = s__ConnectNowForEndpointRetarget__U_001e9fe1._0_8_;
      lStack_70 = _UNK_001f2588;
      local_78 = _DAT_001f2580;
      if ((local_80 < (long *)0x1e9fe2) &&
         ("[ConnectNowForEndpointRetarget] UDP endpoint is not set" <
          (char *)((long)local_80 + 0x37U))) goto LAB_00490450;
      *(char *)((long)local_80 + 0x37) = '\0';
      uVar7 = s__ConnectNowForEndpointRetarget__U_001e9fe1._32_8_;
      lVar12 = CONCAT17(s__ConnectNowForEndpointRetarget__U_001e9fe1[0x2f],
                        s__ConnectNowForEndpointRetarget__U_001e9fe1._40_7_);
      local_80[1] = uVar4;
      *local_80 = uVar10;
      local_80[3] = uVar6;
      local_80[2] = uVar5;
      uVar10 = CONCAT71(s__ConnectNowForEndpointRetarget__U_001e9fe1._48_7_,
                        s__ConnectNowForEndpointRetarget__U_001e9fe1[0x2f]);
      local_80[5] = lVar12;
      local_80[4] = uVar7;
      *(undefined8 *)((long)local_80 + 0x2f) = uVar10;
    }
    else {
      if (*(long *)(param_1 + 0x1f8) == 0) {
        lVar16 = 0;
        lVar12 = *(long *)(param_1 + 0x200);
        if (lVar12 != 0) goto LAB_00490114;
LAB_004901d0:
        lVar12 = 0;
      }
      else {
        lVar16 = *(long *)(*(long *)(param_1 + 0x1f8) + 8);
        lVar12 = *(long *)(param_1 + 0x200);
        if (lVar12 == 0) goto LAB_004901d0;
LAB_00490114:
        lVar12 = *(long *)(lVar12 + 8);
      }
      plVar17 = *(long **)(param_1 + 0x298);
      plVar18 = *(long **)(param_1 + 0x2a0);
      if (plVar17 != plVar18) {
        do {
          lVar14 = *plVar17;
          if (((lVar14 != 0) && (lVar14 != lVar16)) && (lVar14 != lVar12)) {
            FUN_005cdc6c(lVar14);
            FUN_005ce374(lVar14,puVar8);
          }
          plVar17 = plVar17 + 1;
        } while (plVar17 != plVar18);
        plVar17 = *(long **)(param_1 + 0x298);
        puVar11 = *(undefined2 **)(param_1 + 0x208);
      }
      *(long **)(param_1 + 0x2a0) = plVar17;
      uVar2 = *puVar11;
      plVar17 = (long *)malloc(0xe0);
      if (plVar17 != (long *)0x0) {
        uVar10 = *(undefined8 *)(param_1 + 0x1e0);
        *plVar17 = param_1;
        uVar10 = FUN_0051452c(uVar10);
        iVar9 = FUN_005d14d0(uVar10,plVar17,uVar2);
        *(int *)(param_1 + 0x2dc) = iVar9;
        if (-1 < iVar9) {
          iVar9 = FUN_005cdc4c(plVar17,PTR_FUN_00d51c18,FUN_0048f6dc);
          *(int *)(param_1 + 0x2dc) = iVar9;
          if (-1 < iVar9) {
            local_80 = plVar17;
            FUN_0048ffa8(param_1 + 0x298,&local_80);
            goto LAB_004902b4;
          }
        }
        FUN_005ce374(plVar17,PTR_free_00d51ac0);
      }
LAB_004902b4:
      uVar2 = **(undefined2 **)(param_1 + 0x208);
      plVar17 = (long *)malloc(0xe0);
      if (plVar17 != (long *)0x0) {
        uVar10 = *(undefined8 *)(param_1 + 0x1e0);
        *plVar17 = param_1;
        uVar10 = FUN_0051452c(uVar10);
        iVar9 = FUN_005d14d0(uVar10,plVar17,uVar2);
        *(int *)(param_1 + 0x2dc) = iVar9;
        if (-1 < iVar9) {
          iVar9 = FUN_005cdc4c(plVar17,PTR_FUN_00d51c18,FUN_0048f6dc);
          *(int *)(param_1 + 0x2dc) = iVar9;
          if (-1 < iVar9) {
            local_80 = plVar17;
            FUN_0048ffa8(param_1 + 0x298,&local_80);
            goto LAB_00490330;
          }
        }
        FUN_005ce374(plVar17,PTR_free_00d51ac0);
      }
LAB_00490330:
      puVar13 = *(undefined8 **)(param_1 + 0x298);
      puVar15 = *(undefined8 **)(param_1 + 0x2a0);
      if (puVar13 != puVar15) {
        cVar1 = *(char *)(param_1 + 0x239);
        if (*(long *)(param_1 + 0x1f8) != 0) {
          FUN_004913e0(param_1,cVar1 != '\0',*(undefined8 *)(*(long *)(param_1 + 0x1f8) + 8));
          puVar13 = *(undefined8 **)(param_1 + 0x298);
          puVar15 = *(undefined8 **)(param_1 + 0x2a0);
        }
        for (; puVar13 != puVar15; puVar13 = puVar13 + 1) {
          FUN_004913e0(param_1,cVar1 != '\0',*puVar13);
        }
        *(undefined4 *)(param_1 + 0x2dc) = 0;
        *(undefined1 *)(param_1 + 0x2d8) = 1;
        *(undefined4 *)(param_1 + 700) = 0;
        FUN_00515708(*(undefined8 *)(param_1 + 0x290),FUN_004918a0,0,(long)*(int *)(param_1 + 0x2b0)
                    );
        goto LAB_00490420;
      }
      local_80 = (long *)operator_new(0x40);
      uVar6 = s__ConnectNowForEndpointRetarget__f_001bf032._24_8_;
      uVar5 = s__ConnectNowForEndpointRetarget__f_001bf032._16_8_;
      uVar4 = s__ConnectNowForEndpointRetarget__f_001bf032._8_8_;
      uVar10 = s__ConnectNowForEndpointRetarget__f_001bf032._0_8_;
      lStack_70 = _UNK_001f2b28;
      local_78 = _DAT_001f2b20;
      if ((local_80 < (long *)0x1bf033) &&
         ("[ConnectNowForEndpointRetarget] failed to create test sockets" <
          (char *)((long)local_80 + 0x3dU))) {
LAB_00490450:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      *(char *)((long)local_80 + 0x3d) = '\0';
      uVar7 = s__ConnectNowForEndpointRetarget__f_001bf032._32_8_;
      lVar12 = CONCAT35(s__ConnectNowForEndpointRetarget__f_001bf032._45_3_,
                        s__ConnectNowForEndpointRetarget__f_001bf032._40_5_);
      local_80[1] = uVar4;
      *local_80 = uVar10;
      local_80[3] = uVar6;
      local_80[2] = uVar5;
      uVar4 = s__ConnectNowForEndpointRetarget__f_001bf032._53_8_;
      uVar10 = CONCAT53(s__ConnectNowForEndpointRetarget__f_001bf032._48_5_,
                        s__ConnectNowForEndpointRetarget__f_001bf032._45_3_);
      local_80[5] = lVar12;
      local_80[4] = uVar7;
      *(undefined8 *)((long)local_80 + 0x35) = uVar4;
      *(undefined8 *)((long)local_80 + 0x2d) = uVar10;
    }
  }
  FUN_0048db74(param_1,&local_80);
  if (lStack_70 < 0) {
    operator_delete(local_80);
  }
LAB_00490420:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0049047c  FUN_0049047c =====

void FUN_0049047c(long param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined2 uVar6;
  uint uVar7;
  long lVar8;
  char *pcVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined1 auStack_b8 [8];
  char *local_b0;
  undefined1 *puStack_a8;
  char *local_a0;
  char **ppcStack_98;
  undefined *local_90;
  char **ppcStack_88;
  char *local_80;
  undefined **ppuStack_78;
  undefined *local_70;
  char **ppcStack_68;
  long *local_60;
  undefined **local_58;
  undefined1 local_50 [16];
  undefined1 *local_40;
  long local_38;
  
  lVar8 = tpidr_el0;
  local_38 = *(long *)(lVar8 + 0x28);
  if (*(undefined2 **)(param_1 + 0x208) != (undefined2 *)0x0) {
    uVar6 = **(undefined2 **)(param_1 + 0x208);
    plVar11 = (long *)malloc(0xe0);
    if (plVar11 != (long *)0x0) {
      uVar12 = *(undefined8 *)(param_1 + 0x1e0);
      *plVar11 = param_1;
      uVar12 = FUN_0051452c(uVar12);
      iVar10 = FUN_005d14d0(uVar12,plVar11,uVar6);
      *(int *)(param_1 + 0x2dc) = iVar10;
      if (-1 < iVar10) {
        iVar10 = FUN_005cdc4c(plVar11,PTR_FUN_00d51c18,FUN_0048f6dc);
        *(int *)(param_1 + 0x2dc) = iVar10;
        if (-1 < iVar10) {
          local_60 = plVar11;
          FUN_0048ffa8(param_1 + 0x298,&local_60);
          *(undefined1 *)(param_1 + 0x2d8) = 1;
          uVar13 = FUN_00417e08();
          if ((uVar13 & 1) == 0) {
            FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/udp_socket.cpp",0x1a31,
                         "Reconnection started, sending echo");
          }
          plVar11 = local_60;
          local_50 = FUN_005cd334(0,0);
          uVar12 = FUN_005125e4(local_50,0x4a);
          local_50._8_8_ = 0x4a;
          *(undefined4 *)local_50._0_8_ = 0x46000100;
          pcVar1 = (char *)(local_50._0_8_ + 8);
          pcVar9 = (char *)(local_50._0_8_ + 0x10);
          pcVar9[0] = '\0';
          pcVar9[1] = '\0';
          pcVar9[2] = '\0';
          pcVar9[3] = '\0';
          pcVar9[4] = '\0';
          pcVar9[5] = '\0';
          pcVar9[6] = '\0';
          pcVar9[7] = '\0';
          pcVar1[0] = '\0';
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
          pcVar1[4] = '\0';
          pcVar1[5] = '\0';
          pcVar1[6] = '\0';
          pcVar1[7] = '\0';
          pcVar1 = (char *)(local_50._0_8_ + 0x18);
          pcVar9 = (char *)(local_50._0_8_ + 0x20);
          pcVar9[0] = '\0';
          pcVar9[1] = '\0';
          pcVar9[2] = '\0';
          pcVar9[3] = '\0';
          pcVar9[4] = '\0';
          pcVar9[5] = '\0';
          pcVar9[6] = '\0';
          pcVar9[7] = '\0';
          pcVar1[0] = '\0';
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
          pcVar1[4] = '\0';
          pcVar1[5] = '\0';
          pcVar1[6] = '\0';
          pcVar1[7] = '\0';
          pcVar1 = (char *)(local_50._0_8_ + 0x28);
          pcVar9 = (char *)(local_50._0_8_ + 0x30);
          pcVar9[0] = '\0';
          pcVar9[1] = '\0';
          pcVar9[2] = '\0';
          pcVar9[3] = '\0';
          pcVar9[4] = '\0';
          pcVar9[5] = '\0';
          pcVar9[6] = '\0';
          pcVar9[7] = '\0';
          pcVar1[0] = '\0';
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
          pcVar1[4] = '\0';
          pcVar1[5] = '\0';
          pcVar1[6] = '\0';
          pcVar1[7] = '\0';
          pcVar1 = (char *)(local_50._0_8_ + 0x38);
          pcVar9 = (char *)(local_50._0_8_ + 0x40);
          pcVar9[0] = '\0';
          pcVar9[1] = '\0';
          pcVar9[2] = '\0';
          pcVar9[3] = '\0';
          pcVar9[4] = '\0';
          pcVar9[5] = '\0';
          pcVar9[6] = '\0';
          pcVar9[7] = '\0';
          pcVar1[0] = '\0';
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
          pcVar1[4] = '\0';
          pcVar1[5] = '\0';
          pcVar1[6] = '\0';
          pcVar1[7] = '\0';
          uVar7 = (*(uint *)(param_1 + 0x26c) & 0xff00ff00) >> 8 |
                  (*(uint *)(param_1 + 0x26c) & 0xff00ff) << 8;
          *(uint *)(local_50._0_8_ + 4) = uVar7 >> 0x10 | uVar7 << 0x10;
          FUN_0048e744(param_1,plVar11,uVar12,local_50._0_8_,0x4a);
          goto LAB_0049069c;
        }
      }
      FUN_005ce374(plVar11,PTR_free_00d51ac0);
    }
    if (*(int *)(param_1 + 0x2dc) < 0) {
      *(undefined1 *)(param_1 + 0x238) = 1;
      uVar13 = FUN_004249b0();
      if ((uVar13 & 1) == 0) {
        local_40 = auStack_b8;
        ppcStack_68 = &local_80;
        local_50._0_8_ = "../../discord_native_lib/src/udp_socket.cpp";
        local_50._8_8_ = 0x19f3;
        puStack_a8 = local_50;
        local_b0 = "[UdpSocket::";
        ppcStack_98 = &local_b0;
        local_a0 = "ReconnectNow";
        ppcStack_88 = &local_a0;
        local_90 = &DAT_001b3542;
        ppuStack_78 = &local_90;
        local_80 = "../../discord_native_lib/src/udp_socket.cpp";
        local_58 = &local_70;
        local_70 = &DAT_001ca603;
        local_60 = (long *)0x33e;
        uVar12 = FUN_005cd33c(*(undefined4 *)(param_1 + 0x2dc));
        uVar14 = FUN_005cd7e4(*(undefined4 *)(param_1 + 0x2dc));
        puVar2 = *(undefined8 **)((long)local_58[1] + 8);
        puVar3 = (undefined8 *)puVar2[1];
        puVar4 = (undefined8 *)puVar3[1];
        puVar5 = (undefined8 *)puVar4[1];
        FUN_00623bb0(&DAT_001f6e50,*puVar5,puVar5[1],*puVar4,*puVar3,*puVar2,
                     *(undefined8 *)local_58[1],*local_58,local_60._0_4_,&DAT_001d2ea9,uVar12,
                     &DAT_001c4dc3,uVar14);
      }
    }
  }
LAB_0049069c:
  if (*(long *)(lVar8 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004906c4  FUN_004906c4 =====

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004906c4(long param_1)

{
  long *plVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  void *pvVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_c0 [8];
  char *local_b8;
  char **ppcStack_b0;
  char *local_a8;
  char **ppcStack_a0;
  undefined *local_98;
  char **ppcStack_90;
  char *local_88;
  undefined **ppuStack_80;
  undefined *local_78;
  char **ppcStack_70;
  char *local_68;
  long lStack_60;
  code *local_58;
  undefined8 *local_50;
  long local_48;
  
  lVar8 = tpidr_el0;
  local_48 = *(long *)(lVar8 + 0x28);
  auVar16 = FUN_004a1fb8();
  plVar14 = *(long **)(param_1 + 0x1f0);
  *(undefined1 (*) [16])(param_1 + 0x1e8) = auVar16;
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 1;
    do {
      lVar13 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      FUN_005466cc(plVar14);
    }
  }
  lVar13 = *(long *)(param_1 + 0x1e8);
  pcVar2 = (char *)(lVar13 + 0x18);
  FUN_005467a4(pcVar2);
  if (*(char *)(lVar13 + 0x60) == '\0') {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
               "this->has_value()","optional operator-> called on a disengaged value");
  }
  FUN_007b5a0c(lVar13 + 0x40,param_1,param_1,FUN_0049243c);
  FUN_005467c8(pcVar2);
  plVar14 = *(long **)(param_1 + 0x310);
  local_58 = FUN_00492444;
  local_50 = (undefined8 *)&DAT_001f6e68;
  local_68 = pcVar2;
  lStack_60 = param_1;
  if (plVar14 < *(long **)(param_1 + 0x318)) {
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
    plVar14[1] = param_1;
    *plVar14 = (long)pcVar2;
    plVar14[2] = (long)FUN_00492444;
    plVar14[3] = (long)&DAT_001f6e68;
    if (DAT_001f6e70 != 0) {
      local_58 = FUN_0040dec4;
      local_50 = &DAT_001f1910;
    }
    *(long **)(param_1 + 0x310) = plVar14 + 4;
  }
  else {
    FUN_004313e8(param_1 + 0x308,&local_68);
  }
  if ((code *)local_50[1] != (code *)0x0) {
    (*(code *)local_50[1])(local_68);
  }
  uVar9 = FUN_0051452c(*(undefined8 *)(param_1 + 0x1e0));
  pvVar10 = operator_new(0x18);
  FUN_005156ac(pvVar10,uVar9,param_1);
  puVar15 = *(undefined8 **)(param_1 + 0x290);
  *(void **)(param_1 + 0x290) = pvVar10;
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &PTR_FUN_00d193e8;
    if (puVar15[1] != 0) {
      FUN_005ce374(puVar15[1],PTR_free_00d51ac0);
    }
    operator_delete(puVar15);
  }
  plVar14 = (long *)operator_new(0x38);
  uVar9 = *(undefined8 *)(param_1 + 0x1e0);
  *plVar14 = param_1;
  uVar9 = FUN_0051452c(uVar9);
  FUN_005156ac(plVar14 + 1,uVar9,plVar14);
  pvVar10 = *(void **)(param_1 + 0x248);
  *(undefined4 *)(plVar14 + 5) = 0;
  plVar14[6] = 0;
  plVar14[4] = 5000;
  *(undefined1 *)((long)plVar14 + 0x2c) = 1;
  *(long **)(param_1 + 0x248) = plVar14;
  if (pvVar10 != (void *)0x0) {
    *(undefined ***)((long)pvVar10 + 8) = &PTR_FUN_00d193e8;
    if (*(long *)((long)pvVar10 + 0x10) != 0) {
      FUN_005ce374(*(long *)((long)pvVar10 + 0x10),PTR_free_00d51ac0);
    }
    operator_delete(pvVar10);
  }
  uVar9 = FUN_0051452c(*(undefined8 *)(param_1 + 0x1e0));
  pvVar10 = operator_new(0x18);
  FUN_005156ac(pvVar10,uVar9,param_1);
  puVar15 = *(undefined8 **)(param_1 + 0x2c0);
  *(void **)(param_1 + 0x2c0) = pvVar10;
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &PTR_FUN_00d193e8;
    if (puVar15[1] != 0) {
      FUN_005ce374(puVar15[1],PTR_free_00d51ac0);
    }
    operator_delete(puVar15);
  }
  uVar9 = FUN_0051452c(*(undefined8 *)(param_1 + 0x1e0));
  pvVar10 = operator_new(0x18);
  FUN_005156ac(pvVar10,uVar9,param_1);
  puVar15 = *(undefined8 **)(param_1 + 0x2d0);
  *(void **)(param_1 + 0x2d0) = pvVar10;
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &PTR_FUN_00d193e8;
    if (puVar15[1] != 0) {
      FUN_005ce374(puVar15[1],PTR_free_00d51ac0);
    }
    operator_delete(puVar15);
  }
  uVar9 = FUN_0051452c(*(undefined8 *)(param_1 + 0x1e0));
  pvVar10 = operator_new(0x18);
  FUN_00515620(pvVar10,uVar9,0);
  puVar15 = *(undefined8 **)(param_1 + 0x230);
  *(void **)(param_1 + 0x230) = pvVar10;
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &PTR_FUN_00d1db90;
    if (puVar15[1] != 0) {
      FUN_005ce374(puVar15[1],PTR_free_00d51ac0);
    }
    operator_delete(puVar15);
    pvVar10 = *(void **)(param_1 + 0x230);
  }
  iVar5 = *(int *)((long)pvVar10 + 0x10);
  *(int *)(param_1 + 0x2dc) = iVar5;
  if (iVar5 < 0) {
    *(undefined1 *)(param_1 + 0x238) = 1;
    uVar11 = FUN_004249b0();
    if ((uVar11 & 1) == 0) {
      local_58 = (code *)auStack_c0;
      ppcStack_70 = &local_88;
      local_68 = "../../discord_native_lib/src/udp_socket.cpp";
      lStack_60 = 0x1e3b;
      ppcStack_b0 = &local_68;
      local_b8 = "[UdpSocket::";
      ppcStack_a0 = &local_b8;
      local_a8 = "Initialize";
      ppcStack_90 = &local_a8;
      local_98 = &DAT_001b3542;
      ppuStack_80 = &local_98;
      local_88 = "../../discord_native_lib/src/udp_socket.cpp";
      local_78 = &DAT_001ca603;
      uVar9 = FUN_005cd33c(*(undefined4 *)(param_1 + 0x2dc));
      uVar12 = FUN_005cd7e4(*(undefined4 *)(param_1 + 0x2dc));
      puVar15 = *(undefined8 **)(ppcStack_70[1] + 8);
      puVar3 = (undefined8 *)puVar15[1];
      puVar4 = (undefined8 *)puVar3[1];
      FUN_00623bb0(&DAT_001f6e50,*puVar4,puVar4[1],*puVar3,*puVar15,*(undefined8 *)ppcStack_70[1],
                   *ppcStack_70,local_78,0x3c7,&DAT_001d2ea9,uVar9,&DAT_001c4dc3,uVar12);
    }
  }
  if (*(long *)(lVar8 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00490b14  FUN_00490b14 =====

void FUN_00490b14(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  undefined7 local_98;
  char cStack_91;
  char acStack_90 [8];
  undefined8 local_88;
  long local_80;
  undefined8 uStack_78;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00514534(*(undefined8 *)(param_1 + 0x1e0));
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x1e0) + 0x58);
    if (lVar6 != 0) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x1e0) + 0x78);
      if (lVar7 == 0) {
        puVar3 = (undefined8 *)operator_new(0x18);
        *(char *)(puVar3 + 2) = (char)param_2;
        *(int *)((long)puVar3 + 0x11) = (int)(param_2 >> 8);
        *puVar3 = &PTR_FUN_00d1db68;
        puVar3[1] = param_1;
        *(char *)((long)puVar3 + 0x17) = (char)(param_2 >> 0x38);
        *(short *)((long)puVar3 + 0x15) = (short)(param_2 >> 0x28);
        if (*(long *)(lVar1 + 0x28) == local_58) {
          FUN_00512cf8(lVar6,puVar3);
          return;
        }
        goto LAB_00490e58;
      }
      uVar4 = FUN_005ce36c();
      local_88 = CONCAT17(0xf,(undefined7)local_88);
      if ((&local_98 < "nNetworkChange") && ("OnNetworkChange" < acStack_90 + 7)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      acStack_90[7] = 0;
      local_98._0_1_ = s_OnNetworkChange_001c4f11[0];
      local_98._1_1_ = s_OnNetworkChange_001c4f11[1];
      local_98._2_1_ = s_OnNetworkChange_001c4f11[2];
      local_98._3_1_ = s_OnNetworkChange_001c4f11[3];
      local_98._4_1_ = s_OnNetworkChange_001c4f11[4];
      local_98._5_1_ = s_OnNetworkChange_001c4f11[5];
      local_98._6_1_ = s_OnNetworkChange_001c4f11[6];
      cStack_91 = s_OnNetworkChange_001c4f11[7];
      acStack_90[0] = s_OnNetworkChange_001c4f11[8];
      acStack_90[1] = s_OnNetworkChange_001c4f11[9];
      acStack_90[2] = s_OnNetworkChange_001c4f11[10];
      acStack_90[3] = s_OnNetworkChange_001c4f11[0xb];
      acStack_90[4] = s_OnNetworkChange_001c4f11[0xc];
      acStack_90[5] = s_OnNetworkChange_001c4f11[0xd];
      acStack_90[6] = s_OnNetworkChange_001c4f11[0xe];
      local_70 = FUN_0040e7ec;
      local_68 = &DAT_001f4e70;
      local_80 = lVar7;
      local_60 = uVar4;
      puVar3 = (undefined8 *)operator_new(0x58);
      puVar3[2] = param_2;
      puVar3[1] = param_1;
      *puVar3 = &PTR_FUN_00d1db40;
      puVar3[4] = CONCAT17(acStack_90[7],acStack_90._0_7_);
      puVar3[3] = CONCAT17(cStack_91,local_98);
      puVar3[5] = local_88;
      puVar3[7] = uStack_78;
      puVar3[6] = local_80;
      puVar3[8] = FUN_0040e7ec;
      puVar3[9] = &DAT_001f4e70;
      puVar3[10] = uVar4;
      local_98 = 0;
      cStack_91 = 0;
      acStack_90[0] = '\0';
      acStack_90[1] = '\0';
      acStack_90[2] = '\0';
      acStack_90[3] = '\0';
      acStack_90[4] = '\0';
      acStack_90[5] = '\0';
      acStack_90[6] = '\0';
      acStack_90[7] = 0;
      local_88 = 0;
      FUN_00512cf8(lVar6,puVar3);
      if (*(code **)(local_68 + 8) != (code *)0x0) {
        (**(code **)(local_68 + 8))(local_80);
      }
      if (local_88 < 0) {
        operator_delete((void *)CONCAT17(cStack_91,local_98));
      }
    }
  }
  else {
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/udp_socket.cpp",0x1eb1,
                   "Detected network change, re-resolving address");
    }
    if ((param_2 & 1) == 0) {
      uVar2 = FUN_00417e08();
      if ((uVar2 & 1) == 0) {
        if (*(long *)(lVar1 + 0x28) == local_58) {
          pcVar5 = "Network is not connected, skipping address resolution";
          uVar4 = 0x1ec9;
LAB_00490e14:
          FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/udp_socket.cpp",uVar4,pcVar5);
          return;
        }
        goto LAB_00490e58;
      }
    }
    else if (*(char *)(param_1 + 0x218) == '\0') {
      uVar2 = FUN_00417e08();
      if ((uVar2 & 1) == 0) {
        if (*(long *)(lVar1 + 0x28) == local_58) {
          pcVar5 = "UDP socket is not connected, skipping address resolution";
          uVar4 = 0x1ef1;
          goto LAB_00490e14;
        }
        goto LAB_00490e58;
      }
    }
    else {
      if (*(long *)(param_1 + 0x208) != 0) {
        if (*(long *)(lVar1 + 0x28) == local_58) {
          FUN_0048d1cc(param_1,param_1 + 0x250,*(undefined2 *)(param_1 + 0x268),FUN_00490e5c,0);
          return;
        }
        goto LAB_00490e58;
      }
      uVar2 = FUN_00417e08();
      if ((uVar2 & 1) == 0) {
        if (*(long *)(lVar1 + 0x28) == local_58) {
          pcVar5 = "UDP endpoint is not set, skipping address resolution";
          uVar4 = 0x1f19;
          goto LAB_00490e14;
        }
        goto LAB_00490e58;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_00490e58:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00490e5c  FUN_00490e5c =====

void FUN_00490e5c(long param_1,int param_2,long param_3)

{
  char *pcVar1;
  uint uVar2;
  short sVar3;
  long lVar4;
  undefined *puVar5;
  long *__dest;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  void *__src;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined1 auStack_88 [8];
  char *local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (param_2 < 0) {
    uVar6 = FUN_004022fc();
    if ((uVar6 & 1) == 0) {
      local_70 = auStack_88;
      local_80 = "../../discord_native_lib/src/udp_socket.cpp";
      uStack_78 = 0x1f82;
      uVar7 = FUN_005cd33c(param_2);
      FUN_00623bb0("\r\t\n\t\t",local_80,uStack_78,"Failed to resolve IP address ",param_1 + 0x250,
                   " with error ",uVar7);
    }
  }
  else {
    if (param_3 != 0) {
LAB_00490ea0:
      __src = *(void **)(param_3 + 0x20);
      if ((__src == (void *)0x0) || ((*(uint *)(param_3 + 4) | 8) != 10)) goto LAB_00490e98;
      uVar2 = *(uint *)(param_3 + 0x10);
      __dest = (long *)malloc((ulong)uVar2);
      if (__dest != (long *)0x0) {
        memcpy(__dest,__src,(ulong)uVar2);
        plVar11 = *(long **)(param_1 + 0x208);
        if ((plVar11 != (long *)0x0) && (sVar3 = (short)*plVar11, sVar3 == (short)*__dest)) {
          if (sVar3 != 10) {
            if (sVar3 != 2) {
              lVar8 = *plVar11;
              lVar10 = plVar11[1];
              lVar12 = *__dest;
              lVar9 = __dest[1];
              goto LAB_00490ffc;
            }
            if ((*(short *)((long)plVar11 + 2) != *(short *)((long)__dest + 2)) ||
               (*(int *)((long)plVar11 + 4) != *(int *)((long)__dest + 4))) goto LAB_00491008;
LAB_004911d8:
            uVar6 = FUN_00417e08();
            if ((uVar6 & 1) == 0) {
              FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/udp_socket.cpp",0x1ff9,
                           "Address hasn\'t changed, skipping reconnect");
            }
            if (*(long *)(lVar4 + 0x28) == local_68) {
              free(__dest);
              return;
            }
            goto LAB_00491234;
          }
          if (*(short *)((long)plVar11 + 2) == *(short *)((long)__dest + 2)) {
            lVar8 = plVar11[1];
            lVar10 = plVar11[2];
            lVar12 = __dest[1];
            lVar9 = __dest[2];
LAB_00490ffc:
            if (lVar8 == lVar12 && lVar10 == lVar9) goto LAB_004911d8;
          }
        }
LAB_00491008:
        uVar6 = FUN_00417e08();
        if ((uVar6 & 1) == 0) {
          pcVar1 = "UDP endpoint is set";
          if (plVar11 != (long *)0x0) {
            pcVar1 = "Address has changed";
          }
          FUN_0048bc6c(&local_80,__dest);
          FUN_00623bb0(&DAT_001f6e8e,"../../discord_native_lib/src/udp_socket.cpp",0x2019,pcVar1,
                       ", starting reconnect to ",&local_80);
          if ((long)local_70 < 0) {
            operator_delete(local_80);
          }
        }
        FUN_00515738(*(undefined8 *)(param_1 + 0x2c0));
        puVar5 = PTR_free_00d51ac0;
        if (*(char *)(param_1 + 0x2d8) != '\0') {
          if (*(long *)(param_1 + 0x1f8) == 0) {
            lVar12 = 0;
            lVar8 = *(long *)(param_1 + 0x200);
            if (lVar8 == 0) goto LAB_004910a4;
LAB_00491090:
            lVar8 = *(long *)(lVar8 + 8);
          }
          else {
            lVar12 = *(long *)(*(long *)(param_1 + 0x1f8) + 8);
            lVar8 = *(long *)(param_1 + 0x200);
            if (lVar8 != 0) goto LAB_00491090;
LAB_004910a4:
            lVar8 = 0;
          }
          plVar13 = *(long **)(param_1 + 0x298);
          plVar14 = *(long **)(param_1 + 0x2a0);
          if (plVar13 != plVar14) {
            do {
              lVar10 = *plVar13;
              if (((lVar10 != 0) && (lVar10 != lVar12)) && (lVar10 != lVar8)) {
                FUN_005cdc6c(lVar10);
                FUN_005ce374(lVar10,puVar5);
              }
              plVar13 = plVar13 + 1;
            } while (plVar13 != plVar14);
            plVar13 = *(long **)(param_1 + 0x298);
          }
          *(long **)(param_1 + 0x2a0) = plVar13;
          *(undefined1 *)(param_1 + 0x2d8) = 0;
        }
        lVar8 = *(long *)(param_1 + 0x208);
        *(long **)(param_1 + 0x208) = __dest;
        if (lVar8 != 0) {
          (**(code **)(param_1 + 0x210))();
        }
        *(undefined **)(param_1 + 0x210) = PTR_free_00d51ac0;
        if (*(char *)(param_1 + 0x218) == '\0') {
          uVar6 = FUN_00417e08();
          if ((uVar6 & 1) == 0) {
            FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/udp_socket.cpp",0x2079,
                         "UDP socket is not connected, skipping reconnect");
          }
        }
        else {
          if (plVar11 == (long *)0x0) {
            FUN_00515708(*(long *)(param_1 + 0x248) + 8,FUN_00491514,100,
                         *(undefined8 *)(*(long *)(param_1 + 0x248) + 0x20));
            (**(code **)(**(long **)(param_1 + 0x1e8) + 0x10))();
          }
          FUN_00515708(*(undefined8 *)(param_1 + 0x2c0),FUN_0048ece8,0,
                       (long)*(int *)(param_1 + 0x2c8));
        }
        goto LAB_004911a8;
      }
    }
LAB_00490f24:
    uVar6 = FUN_004022fc();
    if ((uVar6 & 1) == 0) {
      if (*(long *)(lVar4 + 0x28) == local_68) {
        FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/udp_socket.cpp",0x1fc2,
                     "Failed to parse address info result for ",param_1 + 0x250);
        return;
      }
      goto LAB_00491234;
    }
  }
LAB_004911a8:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
LAB_00491234:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00490e98:
  param_3 = *(long *)(param_3 + 0x28);
  if (param_3 == 0) goto LAB_00490f24;
  goto LAB_00490ea0;
}


// ===== 00491238  FUN_00491238 =====

void FUN_00491238(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  
  FUN_0048d010();
  FUN_004312b4(param_1 + 0x308);
  plVar6 = *(long **)(param_1 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
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
      puVar4 = *(undefined8 **)(param_1 + 0x2f8);
      goto joined_r0x00491280;
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0x2f8);
joined_r0x00491280:
  if (puVar4 != (undefined8 *)0x0) {
    if (*(char *)(param_1 + 0x300) == '\0') {
      operator_delete(puVar4);
    }
    else {
      *puVar4 = 0;
    }
    *(undefined8 *)(param_1 + 0x2f8) = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x230);
  *(undefined1 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_00d1db90;
    if (puVar4[1] != 0) {
      FUN_005ce374(puVar4[1],PTR_free_00d51ac0);
    }
    operator_delete(puVar4);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_00d193e8;
    if (puVar4[1] != 0) {
      FUN_005ce374(puVar4[1],PTR_free_00d51ac0);
    }
    operator_delete(puVar4);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x2c0);
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_00d193e8;
    if (puVar4[1] != 0) {
      FUN_005ce374(puVar4[1],PTR_free_00d51ac0);
    }
    operator_delete(puVar4);
  }
  pvVar7 = *(void **)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x248) = 0;
  if (pvVar7 != (void *)0x0) {
    *(undefined ***)((long)pvVar7 + 8) = &PTR_FUN_00d193e8;
    if (*(long *)((long)pvVar7 + 0x10) != 0) {
      FUN_005ce374(*(long *)((long)pvVar7 + 0x10),PTR_free_00d51ac0);
    }
    operator_delete(pvVar7);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x290);
  *(undefined8 *)(param_1 + 0x290) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_00d193e8;
    if (puVar4[1] != 0) {
      FUN_005ce374(puVar4[1],PTR_free_00d51ac0);
    }
    operator_delete(puVar4);
  }
  lVar5 = *(long *)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x208) = 0;
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004913cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x210))();
    return;
  }
  return;
}


// ===== 004913e0  FUN_004913e0 =====

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004913e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_a8 [8];
  char *local_a0;
  char **ppcStack_98;
  char *local_90;
  char **ppcStack_88;
  undefined *local_80;
  char **ppcStack_78;
  char *local_70;
  undefined **ppuStack_68;
  undefined *local_60;
  char **ppcStack_58;
  char *local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  iVar5 = FUN_00513314(param_3);
  *(int *)(param_1 + 0x2dc) = iVar5;
  if (iVar5 < 0) {
    *(undefined1 *)(param_1 + 0x238) = 1;
    uVar6 = FUN_004249b0();
    if ((uVar6 & 1) == 0) {
      local_40 = auStack_a8;
      ppcStack_58 = &local_70;
      local_50 = "../../discord_native_lib/src/udp_socket.cpp";
      uStack_48 = 0x2403;
      ppcStack_98 = &local_50;
      local_a0 = "[UdpSocket::";
      ppcStack_88 = &local_a0;
      local_90 = "ApplyQoSToSocket";
      ppcStack_78 = &local_90;
      local_80 = &DAT_001b3542;
      ppuStack_68 = &local_80;
      local_70 = "../../discord_native_lib/src/udp_socket.cpp";
      local_60 = &DAT_001ca603;
      uVar7 = FUN_005cd33c(*(undefined4 *)(param_1 + 0x2dc));
      uVar8 = FUN_005cd7e4(*(undefined4 *)(param_1 + 0x2dc));
      puVar1 = *(undefined8 **)(ppcStack_58[1] + 8);
      puVar2 = (undefined8 *)puVar1[1];
      puVar3 = (undefined8 *)puVar2[1];
      FUN_00623bb0(&DAT_001f6e50,*puVar3,puVar3[1],*puVar2,*puVar1,*(undefined8 *)ppcStack_58[1],
                   *ppcStack_58,local_60,0x480,&DAT_001d2ea9,uVar7,&DAT_001c4dc3,uVar8);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00491514  FUN_00491514 =====

void FUN_00491514(undefined8 *param_1)

{
  FUN_0049151c(*param_1);
  return;
}


// ===== 0049151c  FUN_0049151c =====

void FUN_0049151c(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_a8 [8];
  undefined1 local_a0 [16];
  char *local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  char **local_78;
  undefined1 *puStack_70;
  char local_61;
  undefined2 local_60;
  void *local_58;
  char local_41;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(char *)((long)param_1 + 0x2c) == '\0') {
    lVar5 = *param_1;
    local_a0._0_4_ = 5000;
    local_90 = (char *)CONCAT44(local_90._4_4_,(int)param_1[5]);
    FUN_005467a4(lVar5 + 0xa0);
    if (*(char *)(lVar5 + 0xe8) == '\0') {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
                 "this->has_value()","optional operator-> called on a disengaged value");
    }
    local_78 = &local_90;
    puStack_70 = local_a0;
    FUN_007b6160(lVar5 + 200,&local_78,FUN_004918a8);
    FUN_005467c8(lVar5 + 0xa0);
  }
  local_a0 = FUN_005cd334(0,0);
  uVar3 = FUN_005125e4(local_a0,8);
  local_a0._8_8_ = 8;
  *(undefined4 *)local_a0._0_8_ = 0xfeca3713;
  iVar1 = (int)param_1[5] + 1;
  *(int *)(param_1 + 5) = iVar1;
  *(int *)(local_a0._0_8_ + 4) = iVar1;
  FUN_004916f8(&local_78,*param_1 + 0x250);
  uVar4 = FUN_00417e08();
  if ((uVar4 & 1) == 0) {
    local_80 = auStack_a8;
    local_90 = "../../discord_native_lib/src/udp_socket.cpp";
    uStack_88 = 0x2629;
    FUN_00623bb0(&DAT_001f6e20,"../../discord_native_lib/src/udp_socket.cpp",0x2629,
                 "Sending ping to ",&local_78,&DAT_001ca603,local_60,", seq: ",(int)param_1[5],
                 "Sending ping to ",&local_90);
  }
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  lVar5 = FUN_006258f0();
  param_1[6] = lVar5 * 1000;
  FUN_0048e744(*param_1,*(undefined8 *)(*(long *)(*param_1 + 0x1f8) + 8),uVar3,local_a0._0_8_,
               local_a0._8_8_);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  if (local_61 < '\0') {
    operator_delete(local_78);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004916f8  FUN_004916f8 =====

void FUN_004916f8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    puVar4 = (undefined8 *)*param_2;
    uVar2 = param_2[1];
    if (uVar2 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar2;
      puVar3 = param_1;
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      puVar3 = (undefined8 *)operator_new(uVar1);
      *param_1 = puVar3;
      param_1[1] = uVar2;
      param_1[2] = uVar1 | 0x8000000000000000;
    }
    if ((puVar3 <= puVar4) && (puVar4 < (undefined8 *)((long)puVar3 + uVar2 + 1)))
    goto LAB_0049183c;
    memmove(puVar3,puVar4,uVar2 + 1);
  }
  else {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar5;
  }
  puVar4 = param_1 + 4;
  param_1[3] = param_2[3];
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    puVar3 = (undefined8 *)param_2[4];
    uVar2 = param_2[5];
    if (uVar2 < 0x17) {
      *(char *)((long)param_1 + 0x37) = (char)uVar2;
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      puVar4 = (undefined8 *)operator_new(uVar1);
      param_1[4] = puVar4;
      param_1[5] = uVar2;
      param_1[6] = uVar1 | 0x8000000000000000;
    }
    if ((puVar4 <= puVar3) && (puVar3 < (undefined8 *)((long)puVar4 + uVar2 + 1))) {
LAB_0049183c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(puVar4,puVar3,uVar2 + 1);
  }
  else {
    uVar6 = param_2[5];
    uVar5 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar6;
    *puVar4 = uVar5;
  }
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  return;
}


// ===== 0049186c  FUN_0049186c =====

void FUN_0049186c(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0049187c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*param_1,param_1[1]);
  return;
}


// ===== 00491880  FUN_00491880 =====

void FUN_00491880(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00491894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)*param_1,param_1[1]);
  return;
}


// ===== 00491898  FUN_00491898 =====

void FUN_00491898(undefined8 *param_1)

{
  FUN_0048fa3c(*param_1);
  return;
}


// ===== 004918a0  FUN_004918a0 =====

void FUN_004918a0(undefined8 *param_1)

{
  FUN_0048fa3c(*param_1);
  return;
}


// ===== 004918a8  FUN_004918a8 =====

void FUN_004918a8(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x004918c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined4 *)*param_1,*(undefined4 *)param_1[1]);
  return;
}


// ===== 004918c4  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004918c8  FUN_004918c8 =====

void FUN_004918c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  uVar1 = FUN_005ce36c();
  FUN_004906c4(*puVar3);
  uVar2 = FUN_005ce36c();
  (*(code *)puVar3[6])(puVar3 + 4,puVar3 + 1,puVar3[8],uVar1,uVar2);
  FUN_00520464(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 00491924  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00491928  FUN_00491928 =====

void FUN_00491928(long param_1)

{
  FUN_004906c4(**(undefined8 **)(param_1 + 8));
  FUN_00520464(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 00491954  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00491958  FUN_00491958 =====

void FUN_00491958(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  uVar1 = FUN_005ce36c();
  FUN_00491238(*puVar3);
  uVar2 = FUN_005ce36c();
  (*(code *)puVar3[6])(puVar3 + 4,puVar3 + 1,puVar3[8],uVar1,uVar2);
  FUN_00520464(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 004919b4  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004919b8  FUN_004919b8 =====

void FUN_004919b8(long param_1)

{
  FUN_00491238(**(undefined8 **)(param_1 + 8));
  FUN_00520464(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 004919e4  FUN_004919e4 =====

void FUN_004919e4(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[0xd] + 8);
  *param_1 = &PTR_FUN_00d1d960;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  if (-1 < cVar1) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 00491a50  FUN_00491a50 =====

void FUN_00491a50(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[0xd] + 8);
  *param_1 = &PTR_FUN_00d1d960;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00491abc  FUN_00491abc =====

void FUN_00491abc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  FUN_0048cf04(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10),param_1 + 0x18,
               *(undefined2 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x32));
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x00491b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x60))
            (param_1 + 0x50,param_1 + 0x38,*(undefined8 *)(param_1 + 0x70),uVar1,uVar2);
  return;
}


// ===== 00491b18  FUN_00491b18 =====

void FUN_00491b18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1d988;
  if (-1 < *(char *)((long)param_1 + 0x2f)) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 00491b38  FUN_00491b38 =====

void FUN_00491b38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1d988;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00491b74  FUN_00491b74 =====

void FUN_00491b74(long param_1)

{
  FUN_0048cf04(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10),param_1 + 0x18,
               *(undefined2 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x32));
  return;
}


// ===== 00491b90  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00491b94  FUN_00491b94 =====

void FUN_00491b94(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  uVar1 = FUN_005ce36c();
  FUN_0048d010(*puVar3);
  uVar2 = FUN_005ce36c();
  (*(code *)puVar3[6])(puVar3 + 4,puVar3 + 1,puVar3[8],uVar1,uVar2);
  FUN_00520464(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 00491bf0  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00491bf4  FUN_00491bf4 =====

void FUN_00491bf4(long param_1)

{
  FUN_0048d010(**(undefined8 **)(param_1 + 8));
  FUN_00520464(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 00491c20  FUN_00491c20 =====

void FUN_00491c20(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1da00;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  if (-1 < cVar1) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 00491c8c  FUN_00491c8c =====

void FUN_00491c8c(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1da00;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00491cf8  FUN_00491cf8 =====

void FUN_00491cf8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  FUN_0048d450(*(undefined8 *)(param_1 + 8),param_1 + 0x10,*(undefined2 *)(param_1 + 0x28));
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x00491d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar1,uVar2);
  return;
}


// ===== 00491d4c  FUN_00491d4c =====

void FUN_00491d4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1da28;
  if (-1 < *(char *)((long)param_1 + 0x27)) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 00491d6c  FUN_00491d6c =====

void FUN_00491d6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1da28;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00491da8  FUN_00491da8 =====

void FUN_00491da8(long param_1)

{
  FUN_0048d450(*(undefined8 *)(param_1 + 8),param_1 + 0x10,*(undefined2 *)(param_1 + 0x28));
  return;
}


// ===== 00491dbc  FUN_00491dbc =====

void FUN_00491dbc(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[8] + 8);
  *param_1 = &PTR_FUN_00d1da50;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[5]);
  }
  if (-1 < *(char *)((long)param_1 + 0x27)) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 00491e10  FUN_00491e10 =====

void FUN_00491e10(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[8] + 8);
  *param_1 = &PTR_FUN_00d1da50;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[5]);
  }
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00491e60  FUN_00491e60 =====

void FUN_00491e60(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar1 = FUN_005ce36c();
  lVar6 = *(long *)(param_1 + 8);
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/udp_socket.cpp",0x4f9,
                 "ClearUdpEndpointOnNetworkThread");
  }
  FUN_0048d610(lVar6);
  puVar3 = *(undefined8 **)(lVar6 + 0x2f8);
  if (puVar3 != (undefined8 *)0x0) {
    if (*(char *)(lVar6 + 0x300) == '\0') {
      operator_delete(puVar3);
    }
    else {
      *puVar3 = 0;
    }
    *(undefined8 *)(lVar6 + 0x2f8) = 0;
  }
  lVar4 = *(long *)(lVar6 + 0x208);
  *(undefined1 *)(lVar6 + 0x300) = 0;
  *(undefined8 *)(lVar6 + 0x208) = 0;
  if (lVar4 != 0) {
    (**(code **)(lVar6 + 0x210))();
  }
  uVar5 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x00491f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))
            (param_1 + 0x28,param_1 + 0x10,*(undefined8 *)(param_1 + 0x48),uVar1,uVar5);
  return;
}


// ===== 00491f18  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00491f1c  FUN_00491f1c =====

void FUN_00491f1c(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/udp_socket.cpp",0x4f9,
                 "ClearUdpEndpointOnNetworkThread");
  }
  FUN_0048d610(lVar4);
  puVar2 = *(undefined8 **)(lVar4 + 0x2f8);
  if (puVar2 != (undefined8 *)0x0) {
    if (*(char *)(lVar4 + 0x300) == '\0') {
      operator_delete(puVar2);
    }
    else {
      *puVar2 = 0;
    }
    *(undefined8 *)(lVar4 + 0x2f8) = 0;
  }
  lVar3 = *(long *)(lVar4 + 0x208);
  *(undefined1 *)(lVar4 + 0x300) = 0;
  *(undefined8 *)(lVar4 + 0x208) = 0;
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00491f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 0x210))();
    return;
  }
  return;
}


// ===== 00491fa8  FUN_00491fa8 =====

void FUN_00491fa8(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xd] + 8);
  *param_1 = &PTR_FUN_00d1daa0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[10]);
  }
  if (-1 < *(char *)((long)param_1 + 0x4f)) {
    return;
  }
  operator_delete((void *)param_1[7]);
  return;
}


// ===== 00491ffc  FUN_00491ffc =====

void FUN_00491ffc(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xd] + 8);
  *param_1 = &PTR_FUN_00d1daa0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0049204c  FUN_0049204c =====

void FUN_0049204c(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  uVar5 = FUN_005ce36c();
  lVar10 = *(long *)(param_1 + 8);
  if (*(char *)(param_1 + 0x18) != '\0') {
    lVar6 = FUN_006258f0();
    if (*(char *)(param_1 + 0x18) == '\0') {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b9,
                 "this->has_value()","optional operator* called on a disengaged value");
    }
    lVar8 = 0x7fffffffffffffff;
    if (lVar6 != 0x7fffffffffffffff) {
      lVar9 = *(long *)(param_1 + 0x10);
      lVar2 = -0x8000000000000000;
      if (lVar9 != 0x7fffffffffffffff && lVar6 != -0x8000000000000000) {
        lVar2 = lVar6 - lVar9;
      }
      lVar8 = 0x7fffffffffffffff;
      if (lVar9 != -0x8000000000000000) {
        lVar8 = lVar2;
      }
    }
    plVar1 = (long *)(lVar10 + 0x220);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + lVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = (long *)(lVar10 + 0x228);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_0048e744(lVar10,*(undefined8 *)(*(long *)(lVar10 + 0x1f8) + 8),*(undefined8 *)(param_1 + 0x20)
               ,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  uVar7 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x00492118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x60))
            (param_1 + 0x50,param_1 + 0x38,*(undefined8 *)(param_1 + 0x70),uVar5,uVar7);
  return;
}


// ===== 00492144  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00492148  FUN_00492148 =====

void FUN_00492148(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 8);
  if (*(char *)(param_1 + 0x18) != '\0') {
    lVar5 = FUN_006258f0();
    if (*(char *)(param_1 + 0x18) == '\0') {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b9,
                 "this->has_value()","optional operator* called on a disengaged value");
    }
    lVar6 = 0x7fffffffffffffff;
    if (lVar5 != 0x7fffffffffffffff) {
      lVar7 = *(long *)(param_1 + 0x10);
      lVar2 = -0x8000000000000000;
      if (lVar7 != 0x7fffffffffffffff && lVar5 != -0x8000000000000000) {
        lVar2 = lVar5 - lVar7;
      }
      lVar6 = 0x7fffffffffffffff;
      if (lVar7 != -0x8000000000000000) {
        lVar6 = lVar2;
      }
    }
    plVar1 = (long *)(lVar8 + 0x220);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = (long *)(lVar8 + 0x228);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_0048e744(lVar8,*(undefined8 *)(*(long *)(lVar8 + 0x1f8) + 8),*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}


// ===== 0049220c  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00492210  FUN_00492210 =====

void FUN_00492210(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  uVar1 = FUN_005ce36c();
  FUN_0049226c(lVar3);
  uVar2 = FUN_005ce36c();
  (**(code **)(lVar3 + 0x38))(lVar3 + 0x28,lVar3 + 0x10,*(undefined8 *)(lVar3 + 0x48),uVar1,uVar2);
  FUN_00520464(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 0049226c  FUN_0049226c =====

void FUN_0049226c(long *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  lVar1 = param_1[1];
  if (((char *)*param_1)[1] != '\0') {
    cVar4 = *(char *)*param_1;
    *(char *)(lVar1 + 0x239) = cVar4;
    if (*(long *)(lVar1 + 0x1f8) != 0) {
      FUN_004913e0(lVar1,cVar4 != '\0',*(undefined8 *)(*(long *)(lVar1 + 0x1f8) + 8));
    }
    puVar8 = *(undefined8 **)(lVar1 + 0x2a0);
    for (puVar7 = *(undefined8 **)(lVar1 + 0x298); puVar7 != puVar8; puVar7 = puVar7 + 1) {
      FUN_004913e0(lVar1,cVar4 != '\0',*puVar7);
    }
  }
  lVar5 = *param_1;
  if (*(char *)(lVar5 + 0x10) != '\0') {
    *(undefined4 *)(lVar1 + 0x2b8) = *(undefined4 *)(lVar5 + 0xc);
    *(undefined8 *)(lVar1 + 0x2b0) = *(undefined8 *)(lVar5 + 4);
  }
  if (*(char *)(lVar5 + 0xa4) != '\0') {
    lVar6 = *(long *)(lVar1 + 0x248);
    *(long *)(lVar6 + 0x20) = (long)*(int *)(lVar5 + 0xa0);
    FUN_00515798(lVar6 + 8);
    lVar5 = *param_1;
  }
  if (*(char *)(lVar5 + 0xac) != '\0') {
    iVar2 = *(int *)(lVar5 + 0xa8);
    iVar3 = *(int *)(lVar1 + 0x2c8);
    *(int *)(lVar1 + 0x2c8) = iVar2;
    if (((*(char *)(lVar1 + 0x218) != '\0') && (*(long *)(lVar1 + 0x208) != 0)) && (iVar3 != iVar2))
    {
      FUN_00515738(*(undefined8 *)(lVar1 + 0x2c0));
      iVar2 = *(int *)(lVar1 + 0x2c8);
      if (0 < iVar2) {
        FUN_00515708(*(undefined8 *)(lVar1 + 0x2c0),FUN_0048ece8,iVar2,iVar2);
      }
    }
  }
  if (*(char *)(*param_1 + 0xb4) == '\0') {
    return;
  }
  FUN_00514570(*(undefined8 *)(lVar1 + 0x1e0),*(undefined4 *)(*param_1 + 0xb0));
  return;
}


// ===== 004923ac  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004923b0  FUN_004923b0 =====

void FUN_004923b0(long param_1)

{
  FUN_0049226c(*(undefined8 *)(param_1 + 8));
  FUN_00520464(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 004923d8  FUN_004923d8 =====

void FUN_004923d8(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    operator_delete(param_1);
  }
  else {
    pcVar2 = (code *)plVar3[1];
    *(undefined1 *)(plVar3 + 4) = 0;
    plVar1 = (long *)(*plVar3 + (plVar3[2] >> 1));
    if ((plVar3[2] & 1U) != 0) {
      pcVar2 = *(code **)(pcVar2 + *plVar1);
    }
    (*pcVar2)(plVar1,param_2,param_3);
  }
  if (param_3 != 0) {
    FUN_005cf288(param_3);
    return;
  }
  return;
}


// ===== 0049243c  FUN_0049243c =====

void FUN_0049243c(undefined8 *param_1)

{
  FUN_00490b14(*param_1);
  return;
}


// ===== 00492444  FUN_00492444 =====

void FUN_00492444(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  FUN_005467a4(lVar1);
  if (*(char *)(lVar1 + 0x48) != '\0') {
    FUN_007b5df8(lVar1 + 0x28,lVar2);
    FUN_005467c8(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 004924a8  FUN_004924a8 =====

void FUN_004924a8(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1db40;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (-1 < *(char *)((long)param_1 + 0x2f)) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 004924fc  FUN_004924fc =====

void FUN_004924fc(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1db40;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0049254c  FUN_0049254c =====

void FUN_0049254c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  FUN_00490b14(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x00492594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))
            (param_1 + 0x30,param_1 + 0x18,*(undefined8 *)(param_1 + 0x50),uVar1,uVar2);
  return;
}


// ===== 00492598  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0049259c  FUN_0049259c =====

void FUN_0049259c(long param_1)

{
  FUN_00490b14(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 004925a8  FUN_004925a8 =====

void FUN_004925a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1db90;
  if (param_1[1] != 0) {
    FUN_005ce374(param_1[1],PTR_free_00d51ac0);
    param_1[1] = 0;
  }
  return;
}


// ===== 004925e8  FUN_004925e8 =====

void FUN_004925e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1db90;
  if (param_1[1] != 0) {
    FUN_005ce374(param_1[1],PTR_free_00d51ac0);
  }
  operator_delete(param_1);
  return;
}


// ===== 00492628  FUN_00492628 =====

void FUN_00492628(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  puVar5 = PTR_DAT_00d51c28;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  puVar7 = *(undefined8 **)(puVar5 + 0x18);
  uVar10 = *(undefined8 *)(puVar5 + 8);
  uVar6 = *(undefined8 *)puVar5;
  param_1[7] = *(undefined8 *)(puVar5 + 0x10);
  param_1[6] = uVar10;
  param_1[5] = uVar6;
  pcVar8 = (code *)*puVar7;
  param_1[8] = puVar7;
  if (pcVar8 != (code *)0x0) {
    uVar6 = (*pcVar8)(*(undefined8 *)puVar5);
    param_1[5] = uVar6;
  }
  uVar2 = puVar5[0x20];
  uVar6 = *(undefined8 *)(puVar5 + 0x28);
  *(undefined1 *)(param_1 + 0x12) = 0;
  uVar3 = puVar5[0x30];
  *(undefined8 *)((long)param_1 + 0xa1) = 0;
  *(undefined1 *)(param_1 + 9) = uVar2;
  uVar1 = *(undefined4 *)(puVar5 + 0x38);
  param_1[10] = uVar6;
  uVar2 = puVar5[0x3c];
  *(undefined1 *)(param_1 + 0xb) = uVar3;
  uVar3 = puVar5[0x44];
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = *(undefined4 *)(puVar5 + 0x48);
  *(undefined1 *)((long)param_1 + 100) = uVar2;
  uVar2 = puVar5[0x4c];
  uVar9 = *(undefined4 *)(puVar5 + 0x40);
  *(undefined1 *)((long)param_1 + 0x6c) = uVar3;
  *(undefined4 *)(param_1 + 0xe) = uVar1;
  uVar3 = puVar5[0x51];
  *(undefined1 *)((long)param_1 + 0x74) = uVar2;
  uVar2 = puVar5[0x58];
  uVar4 = puVar5[0x50];
  *(undefined4 *)(param_1 + 0xd) = uVar9;
  uVar9 = *(undefined4 *)(puVar5 + 0x54);
  *(undefined1 *)((long)param_1 + 0x79) = uVar3;
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  *(undefined1 *)(param_1 + 0x10) = uVar2;
  uVar2 = puVar5[0x60];
  *(undefined1 *)(param_1 + 0xf) = uVar4;
  *(undefined4 *)((long)param_1 + 0x7c) = uVar9;
  *(undefined4 *)((long)param_1 + 0x84) = uVar1;
  *(undefined1 *)(param_1 + 0x11) = uVar2;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  puVar7 = (undefined8 *)operator_new(0xd8);
  param_1[0x16] = puVar7;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  puVar7[1] = 0;
  *puVar7 = 0;
  puVar7[3] = 0;
  puVar7[2] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  puVar7[0xb] = 0;
  puVar7[10] = 0;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  puVar7[0xe] = 0;
  puVar7[9] = 0;
  puVar7[8] = 0;
  *(undefined4 *)(puVar7 + 10) = 0x3f800000;
  puVar7[0x10] = 0;
  puVar7[0xf] = 0;
  puVar7[0x12] = 0;
  puVar7[0x11] = 0;
  puVar7[0x14] = 0;
  puVar7[0x13] = 0;
  puVar7[0x16] = 0;
  puVar7[0x15] = 0;
  puVar7[0x18] = 0;
  puVar7[0x17] = 0;
  puVar7[0x1a] = 0;
  puVar7[0x19] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  *(undefined4 *)(puVar7 + 0xe) = 0;
  FUN_004a1af0(param_1 + 0x1a);
  param_1[0x39c] = 0;
  param_1[0x39f] = FUN_00402980;
  param_1[0x3a0] = &DAT_001f1910;
  uVar6 = FUN_00655484();
  param_1[0x13] = uVar6;
  thunk_FUN_00655618();
  FUN_006554b8(param_1[0x13],*(undefined4 *)(param_1 + 0xe));
  return;
}


// ===== 0049279c  FUN_0049279c =====

void FUN_0049279c(undefined8 param_1,undefined8 param_2)

{
  FUN_00492628();
  FUN_004927c8(param_1,param_2);
  return;
}


// ===== 004927c8  FUN_004927c8 =====

void FUN_004927c8(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  undefined1 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_005467a4();
  if (*(char *)(param_2 + 0x4c) != '\0') {
    uVar3 = *(uint *)(param_2 + 0x48);
    *(bool *)(param_1 + 0x90) = uVar3 < 4;
    if (uVar3 < 4) {
      FUN_006554b8(*(undefined8 *)(param_1 + 0x98));
    }
  }
  if (*(char *)(param_2 + 0x51) != '\0') {
    uVar3 = (uint)(*(char *)(param_2 + 0x50) != '\0');
    if ((*(char *)(param_2 + 0x50) != '\0') && ((*(byte *)(param_1 + 0xa8) & 1) == 0)) {
      uVar2 = FUN_0041ffb8(*(undefined8 *)(param_1 + 0xb0));
      if ((uVar2 & 1) == 0) {
        if (*(char *)(*(long *)(param_1 + 0x1d00) + 0x10) == '\0') {
          local_70 = 0;
          local_68 = 0;
          local_60 = 0;
          local_58 = 0;
          local_50 = 0;
          local_4c = 0;
          local_48 = 0;
          local_40 = 0;
          (**(code **)(param_1 + 0x1cf8))(param_1 + 0x1ce8,5,&local_70);
        }
        uVar3 = 0;
      }
      else {
        FUN_00420254(*(undefined8 *)(param_1 + 0xb0));
        uVar3 = 1;
        *(undefined8 *)(param_1 + 0xb8) = 0;
        *(undefined8 *)(param_1 + 0xc0) = 0;
        *(undefined8 *)(param_1 + 200) = 0;
      }
    }
    *(uint *)(param_1 + 0xa8) = uVar3;
  }
  FUN_00489c90(param_1 + 0x28,param_2);
  FUN_005467c8(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004928ec  FUN_004928ec =====

void FUN_004928ec(long param_1)

{
  void *pvVar1;
  code *pcVar2;
  void *pvVar3;
  
  free(*(void **)(param_1 + 0x98));
  pcVar2 = *(code **)(*(long *)(param_1 + 0x1d00) + 8);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*(undefined8 *)(param_1 + 0x1ce8));
  }
  FUN_004a1c80(param_1 + 0xd0);
  pvVar3 = *(void **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_00420254(pvVar3);
    FUN_00546ab0((long)pvVar3 + 0x28);
    pvVar1 = *(void **)((long)pvVar3 + 8);
    if (pvVar1 != (void *)0x0) {
      *(void **)((long)pvVar3 + 0x10) = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(pvVar3);
  }
  pcVar2 = *(code **)(*(long *)(param_1 + 0x40) + 8);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*(undefined8 *)(param_1 + 0x28));
  }
  FUN_00546ab0(param_1);
  return;
}


// ===== 00492978  FUN_00492978 =====

void FUN_00492978(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  FUN_005467a4();
  *(code **)(param_1 + 0x1cf8) = FUN_00402980;
  pcVar1 = *(code **)(*(long *)(param_1 + 0x1d00) + 8);
  *(undefined8 **)(param_1 + 0x1d00) = &DAT_001f1910;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x1ce8));
  }
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x1cf0) = param_2[1];
  *(undefined8 *)(param_1 + 0x1ce8) = uVar2;
  *(undefined8 *)(param_1 + 0x1cf8) = param_2[2];
  *(undefined8 *)(param_1 + 0x1d00) = param_2[3];
  param_2[2] = FUN_00402980;
  param_2[3] = &DAT_001f1910;
  FUN_005467c8(param_1);
  return;
}


// ===== 00492a00  FUN_00492a00 =====

/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffef0 : 0x00492cb0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00492a00(long param_1,long param_2)

{
  code *pcVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined1 auStack_138 [8];
  char *local_130;
  char **ppcStack_128;
  ulong local_120;
  char **ppcStack_118;
  char *local_110;
  ulong *puStack_108;
  ulong local_100;
  char **ppcStack_f8;
  char *local_f0;
  ulong *puStack_e8;
  ulong local_e0;
  undefined1 local_d8;
  ulong local_d0;
  undefined1 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined1 local_b0;
  char *local_a8;
  undefined8 uStack_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined8 *local_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar8 = FUN_00659108(param_2);
  FUN_004a1cac(param_1 + 0xd0,uVar8,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x28))
  ;
  uVar16 = FUN_004a1fb0(param_1 + 0xd0);
  FUN_005467a4(param_1);
  if (*(char *)(param_1 + 0x90) == '\0') {
    bVar5 = false;
    bVar6 = false;
    uVar18 = uVar16;
  }
  else {
    if ((*(char *)(param_1 + 0x78) == '\0') || ((*(byte *)(param_1 + 0xa8) & 1) == 0)) {
      uVar12 = *(undefined8 *)(param_1 + 0x98);
      uVar18 = *(undefined4 *)(param_2 + 0x20);
      uVar8 = FUN_00659108(param_2);
      iVar7 = FUN_006554d8(uVar12,uVar18,uVar8,*(undefined8 *)(param_2 + 0x18));
      bVar6 = iVar7 == 1;
      bVar5 = false;
    }
    else {
      if (*(long *)(param_1 + 0xb8) == 0) {
        uVar8 = FUN_005183d8();
        *(undefined8 *)(param_1 + 0xb8) = uVar8;
        *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x60);
        *(undefined8 *)(param_1 + 200) = *(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x58);
      }
      FUN_004202f0(*(undefined8 *)(param_1 + 0xb0),param_2);
      if (*(long *)(*(long *)(param_1 + 0xb0) + 0x20) == 0) {
        fVar17 = 0.0;
      }
      else {
        fVar17 = (float)*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x50);
      }
      fVar19 = *(float *)(param_1 + 0x7c);
      bVar5 = true;
      bVar6 = fVar17 != fVar19 && fVar17 < fVar19 == (NAN(fVar17) || NAN(fVar19));
    }
    uVar18 = 0;
    if (bVar6 == false) {
      uVar18 = 0xc2c80000;
    }
  }
  *(undefined4 *)(param_1 + 0x94) = uVar18;
  lVar9 = FUN_005183d8();
  pcVar1 = *(code **)(param_1 + 0x38);
  puVar3 = *(undefined8 **)(param_1 + 0x40);
  uStack_88 = *(undefined8 *)(param_1 + 0x30);
  local_90 = *(undefined8 *)(param_1 + 0x28);
  local_80 = pcVar1;
  local_78 = puVar3;
  if ((code *)*puVar3 != (code *)0x0) {
    local_90 = (*(code *)*puVar3)(*(undefined8 *)(param_1 + 0x28));
  }
  if ((*(char *)(puVar3 + 2) == '\0') && (99999999 < lVar9 - *(long *)(param_1 + 0xa0))) {
    (*pcVar1)(uVar16,&local_90,bVar6);
    *(long *)(param_1 + 0xa0) = lVar9;
  }
  lVar13 = *(long *)(*(long *)(param_1 + 0xb0) + 0x58);
  *(long *)(param_1 + 0x1ce0) = lVar13;
  if ((bVar5) && (1000000000 < lVar9 - *(long *)(param_1 + 0xb8))) {
    lVar11 = *(long *)(*(long *)(param_1 + 0xb0) + 0x60);
    if (((*(byte *)(param_1 + 0xa8) & 1) != 0) && (lVar11 != *(long *)(param_1 + 0xc0))) {
      uVar14 = lVar11 - *(long *)(param_1 + 0xc0);
      uVar15 = lVar13 - *(long *)(param_1 + 200);
      uVar10 = 0;
      if (uVar14 != 0) {
        uVar10 = uVar15 / uVar14;
      }
      if (0x270 < uVar10 >> 3) {
        uVar10 = FUN_004022fc();
        if ((uVar10 & 1) == 0) {
          local_98 = auStack_138;
          ppcStack_f8 = &local_110;
          local_a8 = "../../discord_native_lib/src/vad_observer.cpp";
          uStack_a0 = 0x3ea;
          ppcStack_128 = &local_a8;
          local_130 = "Voice activity detector CPU overuse (";
          ppcStack_118 = &local_130;
          local_110 = " frames / ";
          puStack_e8 = &local_100;
          local_f0 = " us, rate ";
          uVar10 = *puStack_108;
          puVar2 = puStack_108 + 1;
          puVar3 = (undefined8 *)((undefined8 *)*puVar2)[1];
          local_120 = uVar14;
          puStack_108 = &local_120;
          local_100 = uVar15;
          FUN_00623bb0(&DAT_001f5f87,*puVar3,puVar3[1],*(undefined8 *)*puVar2,uVar10," frames / ",
                       uVar15," us, rate ",*(undefined4 *)(param_2 + 0x20)," Hz, setup count ",
                       *(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x68),&DAT_001ca519);
        }
        *(undefined4 *)(param_1 + 0xa8) = 0;
        if (*(char *)(*(long *)(param_1 + 0x1d00) + 0x10) == '\0') {
          local_c0 = *(undefined4 *)(param_2 + 0x20);
          local_d8 = 1;
          local_c8 = 1;
          local_bc = 1;
          local_b8 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x68);
          local_b0 = 1;
          local_e0 = uVar15;
          local_d0 = uVar14;
          (**(code **)(param_1 + 0x1cf8))(param_1 + 0x1ce8,3,&local_e0);
        }
      }
    }
    *(long *)(param_1 + 0xb8) = lVar9;
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x60);
    *(long *)(param_1 + 200) = lVar13;
  }
  if ((code *)local_78[1] != (code *)0x0) {
    (*(code *)local_78[1])(local_90);
  }
  FUN_005467c8(param_1);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00492dac  FUN_00492dac =====

void FUN_00492dac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  char *local_68;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(*(long *)(param_1 + 0xb0) + 0x20) != 0) {
    FUN_004df5b4(auStack_60,1);
    local_68 = "voiceActivityDetectorIsEnabled";
    uVar2 = FUN_004e148c(param_2,&local_68);
    FUN_004dfa04(uVar2,auStack_60);
    FUN_004df880(auStack_60);
    FUN_004df230(auStack_60,*(ulong *)(param_1 + 0x1ce0) / 1000);
    local_68 = "voiceActivityDetectorProcessTime";
    uVar2 = FUN_004e148c(param_2,&local_68);
    FUN_004dfa04(uVar2,auStack_60);
    FUN_004df880(auStack_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00492e94  discord::voice::Connection::ConnectUser =====

/* discord::voice::Connection::ConnectUser(std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> >, unsigned int,
   std::__Cr::vector<unsigned int, std::__Cr::allocator<unsigned int> >&, bool, float, bool) */

void __thiscall
discord::voice::Connection::ConnectUser
          (undefined4 param_1,Connection *this,undefined8 *param_3,undefined4 param_4,long *param_5,
          ulong param_6,uint param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  void *pvVar10;
  uint uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined7 local_a8;
  undefined1 uStack_a1;
  undefined8 *local_98 [2];
  code *local_88;
  undefined **ppuStack_80;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  uVar12 = *(undefined8 *)((long)param_3 + 0xf);
  uVar4 = *(undefined1 *)((long)param_3 + 0x17);
  uVar2 = *param_3;
  uVar20 = param_3[1];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  puVar16 = (undefined4 *)*param_5;
  puVar3 = (undefined4 *)param_5[1];
  local_a8 = (undefined7)uVar20;
  uStack_a1 = (undefined1)uVar12;
  uVar5 = (long)puVar3 - (long)puVar16;
  if (uVar5 == 0) {
    puVar16 = (undefined4 *)0x0;
    puVar8 = (undefined4 *)0x0;
    puVar19 = (undefined4 *)0x0;
    goto LAB_00492fe8;
  }
  if ((long)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  param_6 = param_6 & 0xffffffff;
  puVar8 = (undefined4 *)operator_new(uVar5);
  puVar18 = puVar8;
  if ((uVar5 - 4 < 0x1c) || ((ulong)((long)puVar8 - (long)puVar16) < 0x20)) {
LAB_00492fd4:
    do {
      puVar17 = puVar16 + 1;
      puVar19 = puVar18 + 1;
      *puVar18 = *puVar16;
      puVar16 = puVar17;
      puVar18 = puVar19;
    } while (puVar17 != puVar3);
  }
  else {
    puVar9 = (undefined8 *)(puVar16 + 4);
    uVar1 = (uVar5 - 4 >> 2) + 1;
    puVar14 = (undefined8 *)(puVar8 + 4);
    uVar13 = uVar1 & 0x7ffffffffffffff8;
    puVar19 = puVar8 + uVar13;
    uVar15 = uVar13;
    do {
      puVar7 = puVar9 + -1;
      uVar20 = puVar9[-2];
      uVar22 = puVar9[1];
      uVar21 = *puVar9;
      puVar9 = puVar9 + 4;
      uVar15 = uVar15 - 8;
      puVar14[-1] = *puVar7;
      puVar14[-2] = uVar20;
      puVar14[1] = uVar22;
      *puVar14 = uVar21;
      puVar14 = puVar14 + 4;
    } while (uVar15 != 0);
    puVar16 = puVar16 + uVar13;
    puVar18 = puVar19;
    if (uVar1 != uVar13) goto LAB_00492fd4;
  }
  puVar16 = puVar8 + ((long)uVar5 >> 2);
LAB_00492fe8:
  uVar11 = 0x100;
  if ((param_6 & 1) == 0) {
    uVar11 = 0;
  }
  local_88 = FUN_0049a34c;
  ppuStack_80 = &PTR_FUN_00d1dbd8;
  puVar9 = (undefined8 *)operator_new(0x48);
  *puVar9 = this;
  puVar9[1] = uVar2;
  *(undefined1 *)((long)puVar9 + 0x1f) = uVar4;
  puVar9[2] = CONCAT17(uStack_a1,local_a8);
  *(undefined8 *)((long)puVar9 + 0x17) = uVar12;
  puVar9[5] = puVar8;
  puVar9[6] = puVar19;
  puVar9[7] = puVar16;
  *(undefined4 *)(puVar9 + 4) = param_4;
  *(uint *)(puVar9 + 8) = uVar11 | param_7 & 1;
  *(undefined4 *)((long)puVar9 + 0x44) = param_1;
  local_98[0] = puVar9;
  FUN_004930c4(this,local_98,"ConnectUser",0xb);
  pvVar10 = (void *)puVar9[5];
  if (pvVar10 != (void *)0x0) {
    puVar9[6] = pvVar10;
    operator_delete(pvVar10);
  }
  if (*(char *)((long)puVar9 + 0x1f) < '\0') {
    operator_delete((void *)puVar9[1]);
  }
  if (*(long *)(lVar6 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  operator_delete(puVar9);
  return;
}


// ===== 004930c4  FUN_004930c4 =====

/* WARNING: Removing unreachable block (ram,0x0049333c) */

void FUN_004930c4(undefined8 *param_1,undefined8 *param_2,undefined8 *****param_3,ulong param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  undefined8 ****ppppuVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *****__dest;
  undefined8 *puVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *local_b8;
  undefined8 ****local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  uVar3 = *param_1;
  lVar5 = param_1[1];
  if (lVar5 == 0) {
    lVar17 = param_1[6];
  }
  else {
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = *plVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    lVar17 = param_1[6];
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = *plVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  uVar4 = param_2[2];
  local_b8 = (undefined8 *)param_2[3];
  uVar12 = *param_2;
  uVar6 = param_2[1];
  if ((code *)*local_b8 != (code *)0x0) {
    uVar12 = (*(code *)*local_b8)(uVar12);
  }
  lVar16 = *(long *)(lVar17 + 0x58);
  if (lVar16 == 0) {
    pcVar15 = (code *)local_b8[1];
    lVar17 = lVar5;
  }
  else {
    lVar17 = *(long *)(lVar17 + 0x78);
    puVar18 = local_b8;
    if (lVar17 == 0) {
      puVar14 = (undefined8 *)operator_new(0x38);
      puVar14[2] = lVar5;
      puVar14[3] = uVar12;
      puVar14[4] = uVar6;
      puVar14[5] = uVar4;
      *puVar14 = &PTR_FUN_00d1e470;
      puVar14[1] = uVar3;
      puVar14[6] = local_b8;
      if (local_b8[1] != 0) {
        puVar18 = &DAT_001f1910;
      }
      FUN_00512cf8(lVar16,puVar14);
    }
    else {
      uVar13 = FUN_005ce36c();
      if (local_b8[1] != 0) {
        puVar18 = &DAT_001f1910;
      }
      if (0x7fffffffffffffef < param_4) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      __dest = &local_b0;
      if (param_4 < 0x17) {
        local_a0 = CONCAT17((char)param_4,(undefined7)local_a0);
      }
      else {
        uVar2 = (param_4 | 0xf) + 1;
        __dest = (undefined8 *****)operator_new(uVar2);
        local_a0 = uVar2 | 0x8000000000000000;
        local_b0 = __dest;
        uStack_a8 = param_4;
      }
      if ((__dest <= param_3) && (param_3 < (undefined8 *****)((long)__dest + param_4))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      if (param_4 != 0) {
        memmove(__dest,param_3,param_4);
      }
      *(undefined1 *)((long)__dest + param_4) = 0;
      local_88 = FUN_0040e7ec;
      local_80 = &DAT_001f4e70;
      local_98 = lVar17;
      local_78 = uVar13;
      puVar14 = (undefined8 *)operator_new(0x78);
      uVar11 = local_a0;
      uVar2 = uStack_a8;
      ppppuVar10 = local_b0;
      *puVar14 = &PTR_FUN_00d1e448;
      puVar14[2] = lVar5;
      puVar14[1] = uVar3;
      puVar14[4] = uVar6;
      puVar14[3] = uVar12;
      puVar14[5] = uVar4;
      puVar14[6] = local_b8;
      if (local_b8[1] != 0) {
        local_b8 = &DAT_001f1910;
      }
      uStack_a8 = 0;
      local_a0 = 0;
      local_b0 = (undefined8 *****)0x0;
      puVar14[8] = uVar2;
      puVar14[7] = ppppuVar10;
      puVar14[9] = uVar11;
      puVar14[0xc] = FUN_0040e7ec;
      puVar14[0xd] = &DAT_001f4e70;
      puVar14[0xb] = uStack_90;
      puVar14[10] = local_98;
      puVar14[0xe] = uVar13;
      FUN_00512cf8(lVar16);
      if (*(code **)(local_80 + 8) != (code *)0x0) {
        (**(code **)(local_80 + 8))(local_98);
      }
      if ((long)local_a0 < 0) {
        operator_delete(local_b0);
      }
      if ((code *)local_b8[1] != (code *)0x0) {
        (*(code *)local_b8[1])(uVar12);
      }
    }
    lVar17 = 0;
    pcVar15 = (code *)puVar18[1];
  }
  if (pcVar15 != (code *)0x0) {
    (*pcVar15)(uVar12);
  }
  if (lVar17 != 0) {
    FUN_005466cc(lVar17);
  }
  if (lVar5 != 0) {
    FUN_005466cc(lVar5);
  }
  if (*(long *)(lVar9 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004933d0  discord::voice::Connection::DisconnectUser =====

/* discord::voice::Connection::DisconnectUser(std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> > const&) */

void __thiscall discord::voice::Connection::DisconnectUser(Connection *this,basic_string *param_1)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  long lVar3;
  undefined8 **__src;
  undefined8 ***pppuVar4;
  undefined8 *puVar5;
  undefined8 ***pppuVar6;
  undefined8 **local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 *local_78 [2];
  code *local_68;
  undefined **ppuStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pppuVar4 = &local_90;
  if ((char)param_1[0x17] < '\0') {
    pppuVar6 = *(undefined8 ****)param_1;
    uVar2 = *(ulong *)(param_1 + 8);
    if (uVar2 < 0x17) {
      local_80 = CONCAT17((char)uVar2,(undefined7)local_80);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      pppuVar4 = (undefined8 ***)operator_new(uVar1);
      local_80 = uVar1 | 0x8000000000000000;
      local_90 = pppuVar4;
      uStack_88 = uVar2;
    }
    if ((pppuVar4 <= pppuVar6) && (pppuVar6 < (undefined8 ***)((long)pppuVar4 + uVar2 + 1)))
    goto LAB_004935a0;
    memmove(pppuVar4,pppuVar6,uVar2 + 1);
  }
  else {
    uStack_88 = *(ulong *)(param_1 + 8);
    local_90 = *(undefined8 ***)param_1;
    local_80 = *(ulong *)(param_1 + 0x10);
  }
  local_68 = FUN_0049a798;
  ppuStack_60 = &PTR_FUN_00d1dbf8;
  puVar5 = (undefined8 *)operator_new(0x20);
  uVar2 = uStack_88;
  __src = local_90;
  pppuVar4 = (undefined8 ***)(puVar5 + 1);
  *puVar5 = this;
  if ((long)local_80 < 0) {
    if (uStack_88 < 0x17) {
      *(char *)((long)puVar5 + 0x1f) = (char)uStack_88;
      pppuVar6 = pppuVar4;
    }
    else {
      if (0x7fffffffffffffef < uStack_88) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uStack_88 | 0xf) + 1;
      pppuVar6 = (undefined8 ***)operator_new(uVar1);
      puVar5[1] = pppuVar6;
      puVar5[2] = uVar2;
      puVar5[3] = uVar1 | 0x8000000000000000;
    }
    __n = uVar2 + 1;
    if ((pppuVar6 <= __src) && (__src < (undefined8 ***)((long)pppuVar6 + __n))) {
LAB_004935a0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(pppuVar6,__src,__n);
  }
  else {
    puVar5[2] = uStack_88;
    *pppuVar4 = local_90;
    puVar5[3] = local_80;
  }
  local_78[0] = puVar5;
  FUN_004930c4(this,local_78,"DisconnectUser",0xe);
  if (*(char *)((long)puVar5 + 0x1f) < '\0') {
    operator_delete(*pppuVar4);
  }
  operator_delete(puVar5);
  if ((long)local_80 < 0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004935d4  discord::voice::Connection::PrepareSecureFramesTransition =====

/* discord::voice::Connection::PrepareSecureFramesTransition(unsigned short, unsigned short,
   std::__Cr::function<void ()>) */

void __thiscall
discord::voice::Connection::PrepareSecureFramesTransition
          (Connection *this,undefined2 param_1,undefined2 param_2,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *local_78 [2];
  code *local_68;
  undefined **ppuStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)param_4[3];
  uVar3 = *param_4;
  uVar6 = param_4[2];
  uVar5 = param_4[1];
  if ((code *)*puVar4 != (code *)0x0) {
    uVar3 = (*(code *)*puVar4)(uVar3);
  }
  local_68 = FUN_0049a8bc;
  ppuStack_60 = &PTR_FUN_00d1dc18;
  puVar2 = (undefined8 *)operator_new(0x30);
  *puVar2 = this;
  *(undefined2 *)(puVar2 + 1) = param_1;
  *(undefined2 *)((long)puVar2 + 10) = param_2;
  puVar2[2] = uVar3;
  puVar2[4] = uVar6;
  puVar2[3] = uVar5;
  puVar2[5] = puVar4;
  if (puVar4[1] != 0) {
    puVar4 = &DAT_001f1910;
  }
  local_78[0] = puVar2;
  FUN_004930c4(this,local_78,"PrepareSecureFramesTransition",0x1d);
  if (*(code **)(puVar2[5] + 8) != (code *)0x0) {
    (**(code **)(puVar2[5] + 8))(puVar2[2]);
  }
  operator_delete(puVar2);
  if ((code *)puVar4[1] == (code *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Could not recover jumptable at 0x004936e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar4[1])(uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049371c  discord::voice::Connection::PrepareSecureFramesEpoch =====

/* discord::voice::Connection::PrepareSecureFramesEpoch(unsigned long, unsigned short, unsigned
   long) */

void __thiscall
discord::voice::Connection::PrepareSecureFramesEpoch
          (Connection *this,ulong param_1,ushort param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *local_68 [2];
  code *local_58;
  undefined **ppuStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = FUN_0049aa00;
  ppuStack_50 = &PTR_FUN_00d1dc38;
  puVar2 = (undefined8 *)operator_new(0x20);
  *puVar2 = this;
  puVar2[1] = param_1;
  *(ushort *)(puVar2 + 2) = param_2;
  puVar2[3] = param_3;
  local_68[0] = puVar2;
  FUN_004930c4(this,local_68,"PrepareSecureFramesEpoch",0x18);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    operator_delete(puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004937c8  discord::voice::Connection::ExecuteSecureFramesTransition =====

/* discord::voice::Connection::ExecuteSecureFramesTransition(unsigned short) */

void __thiscall
discord::voice::Connection::ExecuteSecureFramesTransition(Connection *this,ushort param_1)

{
  long lVar1;
  Connection *local_48;
  ulong uStack_40;
  code *local_38;
  undefined *puStack_30;
  long local_28;
  
  uStack_40 = (ulong)param_1;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_0049aa48;
  puStack_30 = &DAT_001f6e98;
  local_48 = this;
  FUN_004930c4(this,&local_48,"ExecuteSecureFramesTransition",0x1d);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00493838  discord::voice::Connection::SetMLSTransientPrivateKey =====

/* discord::voice::Connection::SetMLSTransientPrivateKey(std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> >, int) */

void __thiscall
discord::voice::Connection::SetMLSTransientPrivateKey
          (Connection *this,undefined8 *param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined8 ***__src;
  ulong uVar2;
  long lVar3;
  undefined8 ***__dest;
  undefined8 *puVar4;
  undefined8 **local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 *local_68 [2];
  code *local_58;
  undefined **ppuStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  __dest = &local_80;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src = (undefined8 ***)*param_2;
    uVar2 = param_2[1];
    if (uVar2 < 0x17) {
      local_70 = CONCAT17((char)uVar2,(undefined7)local_70);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 ***)operator_new(uVar1);
      local_70 = uVar1 | 0x8000000000000000;
      local_80 = __dest;
      uStack_78 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined8 ***)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uStack_78 = param_2[1];
    local_80 = (undefined8 **)*param_2;
    local_70 = param_2[2];
  }
  local_58 = FUN_0049aa5c;
  ppuStack_50 = &PTR_FUN_00d1dc58;
  puVar4 = (undefined8 *)operator_new(0x28);
  *puVar4 = this;
  *(undefined4 *)(puVar4 + 1) = param_3;
  puVar4[3] = uStack_78;
  puVar4[2] = local_80;
  puVar4[4] = local_70;
  local_80 = (undefined8 **)0x0;
  uStack_78 = 0;
  local_70 = 0;
  local_68[0] = puVar4;
  FUN_004930c4(this,local_68,"SetMLSTransientPrivateKey",0x19);
  if (*(char *)((long)puVar4 + 0x27) < '\0') {
    operator_delete((void *)puVar4[2]);
  }
  operator_delete(puVar4);
  if ((long)local_70 < 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004939d4  discord::voice::Connection::GetMLSKeyPackage =====

/* discord::voice::Connection::GetMLSKeyPackage(std::__Cr::function<void (std::__Cr::vector<unsigned
   char, std::__Cr::allocator<unsigned char> > const&)>) */

void __thiscall discord::voice::Connection::GetMLSKeyPackage(Connection *this,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *local_68 [2];
  code *local_58;
  undefined **ppuStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)param_2[3];
  uVar3 = *param_2;
  uVar6 = param_2[2];
  uVar5 = param_2[1];
  if (puVar4[1] != 0) {
    param_2[2] = FUN_0049ac00;
    param_2[3] = &DAT_001f1910;
  }
  local_58 = FUN_0049ac0c;
  ppuStack_50 = &PTR_FUN_00d1dc78;
  puVar2 = (undefined8 *)operator_new(0x28);
  *puVar2 = this;
  puVar2[1] = uVar3;
  puVar2[4] = puVar4;
  puVar2[3] = uVar6;
  puVar2[2] = uVar5;
  if (puVar4[1] != 0) {
    puVar4 = &DAT_001f1910;
  }
  local_68[0] = puVar2;
  FUN_004930c4(this,local_68,"GetMLSKeyPackage",0x10);
  if (*(code **)(puVar2[4] + 8) != (code *)0x0) {
    (**(code **)(puVar2[4] + 8))(puVar2[1]);
  }
  operator_delete(puVar2);
  if ((code *)puVar4[1] == (code *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x00493acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar4[1])(uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00493afc  discord::voice::Connection::UpdateMLSExternalSender =====

/* discord::voice::Connection::UpdateMLSExternalSender(std::__Cr::vector<unsigned char,
   std::__Cr::allocator<unsigned char> >) */

void __thiscall discord::voice::Connection::UpdateMLSExternalSender(Connection *this,long *param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *local_78 [2];
  code *local_68;
  undefined **ppuStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  puVar13 = (undefined1 *)*param_2;
  puVar1 = (undefined1 *)param_2[1];
  uVar2 = (long)puVar1 - (long)puVar13;
  if (uVar2 == 0) {
    puVar13 = (undefined1 *)0x0;
    puVar12 = (undefined1 *)0x0;
    puVar5 = (undefined1 *)0x0;
    goto code_r0x00493bc8;
  }
  if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar5 = (undefined1 *)operator_new(uVar2);
  puVar11 = puVar5;
  if ((uVar2 < 0x20) || ((ulong)((long)puVar5 - (long)puVar13) < 0x20)) {
LAB_00493bb0:
    do {
      puVar14 = puVar13 + 1;
      puVar12 = puVar11 + 1;
      *puVar11 = *puVar13;
      puVar11 = puVar12;
      puVar13 = puVar14;
    } while (puVar14 != puVar1);
  }
  else {
    uVar8 = uVar2 & 0xffffffffffffffe0;
    puVar6 = (undefined8 *)(puVar13 + 0x10);
    puVar12 = puVar5 + uVar8;
    puVar9 = (undefined8 *)(puVar5 + 0x10);
    uVar10 = uVar8;
    do {
      puVar4 = puVar6 + -1;
      uVar15 = puVar6[-2];
      uVar17 = puVar6[1];
      uVar16 = *puVar6;
      puVar6 = puVar6 + 4;
      uVar10 = uVar10 - 0x20;
      puVar9[-1] = *puVar4;
      puVar9[-2] = uVar15;
      puVar9[1] = uVar17;
      *puVar9 = uVar16;
      puVar9 = puVar9 + 4;
    } while (uVar10 != 0);
    puVar11 = puVar12;
    puVar13 = puVar13 + uVar8;
    if (uVar2 != uVar8) goto LAB_00493bb0;
  }
  puVar13 = puVar5 + uVar2;
code_r0x00493bc8:
  local_68 = FUN_0049ad20;
  ppuStack_60 = &PTR_FUN_00d1dc98;
  puVar6 = (undefined8 *)operator_new(0x20);
  *puVar6 = this;
  puVar6[1] = puVar5;
  puVar6[2] = puVar12;
  puVar6[3] = puVar13;
  local_78[0] = puVar6;
  FUN_004930c4(this,local_78,"UpdateMLSExternalSender",0x17);
  pvVar7 = (void *)puVar6[1];
  if (pvVar7 != (void *)0x0) {
    puVar6[2] = pvVar7;
    operator_delete(pvVar7);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  operator_delete(puVar6);
  return;
}


// ===== 00493c50  discord::voice::Connection::ProcessMLSProposals =====

/* discord::voice::Connection::ProcessMLSProposals(std::__Cr::vector<unsigned char,
   std::__Cr::allocator<unsigned char> >, std::__Cr::function<void (std::__Cr::vector<unsigned char,
   std::__Cr::allocator<unsigned char> > const&)>) */

void __thiscall
discord::voice::Connection::ProcessMLSProposals(Connection *this,long *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *local_88 [2];
  code *local_78;
  undefined **ppuStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  puVar13 = (undefined8 *)param_3[3];
  uVar20 = param_3[2];
  uVar18 = param_3[1];
  if (puVar13[1] != 0) {
    param_3[2] = FUN_0049ac00;
    param_3[3] = &DAT_001f1910;
  }
  puVar16 = (undefined1 *)*param_2;
  puVar1 = (undefined1 *)param_2[1];
  uVar12 = *param_3;
  uVar2 = (long)puVar1 - (long)puVar16;
  if (uVar2 == 0) {
    puVar16 = (undefined1 *)0x0;
    puVar15 = (undefined1 *)0x0;
    puVar5 = (undefined1 *)0x0;
    goto code_r0x00493d4c;
  }
  if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar5 = (undefined1 *)operator_new(uVar2);
  puVar14 = puVar5;
  if ((uVar2 < 0x20) || ((ulong)((long)puVar5 - (long)puVar16) < 0x20)) {
LAB_00493d34:
    do {
      puVar17 = puVar16 + 1;
      puVar15 = puVar14 + 1;
      *puVar14 = *puVar16;
      puVar14 = puVar15;
      puVar16 = puVar17;
    } while (puVar17 != puVar1);
  }
  else {
    uVar8 = uVar2 & 0xffffffffffffffe0;
    puVar6 = (undefined8 *)(puVar16 + 0x10);
    puVar15 = puVar5 + uVar8;
    puVar10 = (undefined8 *)(puVar5 + 0x10);
    uVar11 = uVar8;
    do {
      puVar4 = puVar6 + -1;
      uVar19 = puVar6[-2];
      uVar22 = puVar6[1];
      uVar21 = *puVar6;
      puVar6 = puVar6 + 4;
      uVar11 = uVar11 - 0x20;
      puVar10[-1] = *puVar4;
      puVar10[-2] = uVar19;
      puVar10[1] = uVar22;
      *puVar10 = uVar21;
      puVar10 = puVar10 + 4;
    } while (uVar11 != 0);
    puVar14 = puVar15;
    puVar16 = puVar16 + uVar8;
    if (uVar2 != uVar8) goto LAB_00493d34;
  }
  puVar16 = puVar5 + uVar2;
code_r0x00493d4c:
  local_78 = FUN_0049af38;
  ppuStack_70 = &PTR_FUN_00d1dcb8;
  puVar6 = (undefined8 *)operator_new(0x40);
  *puVar6 = this;
  puVar6[1] = uVar12;
  puVar6[4] = puVar13;
  puVar6[3] = uVar20;
  puVar6[2] = uVar18;
  lVar9 = puVar13[1];
  puVar6[5] = puVar5;
  puVar6[6] = puVar15;
  puVar6[7] = puVar16;
  if (lVar9 != 0) {
    puVar13 = &DAT_001f1910;
  }
  local_88[0] = puVar6;
  FUN_004930c4(this,local_88,"ProcessMLSProposals",0x13);
  pvVar7 = (void *)puVar6[5];
  if (pvVar7 != (void *)0x0) {
    puVar6[6] = pvVar7;
    operator_delete(pvVar7);
  }
  if (*(code **)(puVar6[4] + 8) != (code *)0x0) {
    (**(code **)(puVar6[4] + 8))(puVar6[1]);
  }
  operator_delete(puVar6);
  if ((code *)puVar13[1] == (code *)0x0) {
    if (*(long *)(lVar3 + 0x28) == local_68) {
      return;
    }
  }
  else if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Could not recover jumptable at 0x00493e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar13[1])(uVar12);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00493e48  discord::voice::Connection::PrepareMLSCommitTransition =====

/* discord::voice::Connection::PrepareMLSCommitTransition(unsigned short, std::__Cr::vector<unsigned
   char, std::__Cr::allocator<unsigned char> >, std::__Cr::function<void
   (std::__Cr::optional<std::__Cr::map<unsigned long, std::__Cr::vector<unsigned char,
   std::__Cr::allocator<unsigned char> >, std::__Cr::less<unsigned long>,
   std::__Cr::allocator<std::__Cr::pair<unsigned long const, std::__Cr::vector<unsigned char,
   std::__Cr::allocator<unsigned char> > > > > >, unsigned short)>) */

void __thiscall
discord::voice::Connection::PrepareMLSCommitTransition
          (Connection *this,undefined2 param_1,long *param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *local_88 [2];
  code *local_78;
  undefined **ppuStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  puVar13 = (undefined8 *)param_4[3];
  uVar20 = param_4[2];
  uVar18 = param_4[1];
  if (puVar13[1] != 0) {
    param_4[2] = FUN_0049b1d4;
    param_4[3] = &DAT_001f1910;
  }
  puVar14 = (undefined1 *)*param_3;
  puVar1 = (undefined1 *)param_3[1];
  uVar12 = *param_4;
  uVar2 = (long)puVar1 - (long)puVar14;
  if (uVar2 == 0) {
    puVar14 = (undefined1 *)0x0;
    puVar17 = (undefined1 *)0x0;
    puVar5 = (undefined1 *)0x0;
    goto code_r0x00493f50;
  }
  if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar5 = (undefined1 *)operator_new(uVar2);
  puVar16 = puVar5;
  if ((uVar2 < 0x20) || ((ulong)((long)puVar5 - (long)puVar14) < 0x20)) {
LAB_00493f38:
    do {
      puVar15 = puVar14 + 1;
      puVar17 = puVar16 + 1;
      *puVar16 = *puVar14;
      puVar14 = puVar15;
      puVar16 = puVar17;
    } while (puVar15 != puVar1);
  }
  else {
    uVar8 = uVar2 & 0xffffffffffffffe0;
    puVar6 = (undefined8 *)(puVar14 + 0x10);
    puVar17 = puVar5 + uVar8;
    puVar10 = (undefined8 *)(puVar5 + 0x10);
    uVar11 = uVar8;
    do {
      puVar4 = puVar6 + -1;
      uVar19 = puVar6[-2];
      uVar22 = puVar6[1];
      uVar21 = *puVar6;
      puVar6 = puVar6 + 4;
      uVar11 = uVar11 - 0x20;
      puVar10[-1] = *puVar4;
      puVar10[-2] = uVar19;
      puVar10[1] = uVar22;
      *puVar10 = uVar21;
      puVar10 = puVar10 + 4;
    } while (uVar11 != 0);
    puVar14 = puVar14 + uVar8;
    puVar16 = puVar17;
    if (uVar2 != uVar8) goto LAB_00493f38;
  }
  puVar14 = puVar5 + uVar2;
code_r0x00493f50:
  local_78 = FUN_0049b1e0;
  ppuStack_70 = &PTR_FUN_00d1dcd8;
  puVar6 = (undefined8 *)operator_new(0x48);
  *puVar6 = this;
  puVar6[1] = uVar12;
  puVar6[4] = puVar13;
  puVar6[3] = uVar20;
  puVar6[2] = uVar18;
  lVar9 = puVar13[1];
  *(undefined2 *)(puVar6 + 5) = param_1;
  puVar6[6] = puVar5;
  puVar6[7] = puVar17;
  puVar6[8] = puVar14;
  if (lVar9 != 0) {
    puVar13 = &DAT_001f1910;
  }
  local_88[0] = puVar6;
  FUN_004930c4(this,local_88,"PrepareMLSCommitTransition",0x1a);
  pvVar7 = (void *)puVar6[6];
  if (pvVar7 != (void *)0x0) {
    puVar6[7] = pvVar7;
    operator_delete(pvVar7);
  }
  if (*(code **)(puVar6[4] + 8) != (code *)0x0) {
    (**(code **)(puVar6[4] + 8))(puVar6[1]);
  }
  operator_delete(puVar6);
  if ((code *)puVar13[1] == (code *)0x0) {
    if (*(long *)(lVar3 + 0x28) == local_68) {
      return;
    }
  }
  else if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Could not recover jumptable at 0x00494018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar13[1])(uVar12);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00494054  discord::voice::Connection::ProcessMLSWelcome =====

/* discord::voice::Connection::ProcessMLSWelcome(unsigned short, std::__Cr::vector<unsigned char,
   std::__Cr::allocator<unsigned char> >, std::__Cr::function<void
   (std::__Cr::optional<std::__Cr::map<unsigned long, std::__Cr::vector<unsigned char,
   std::__Cr::allocator<unsigned char> >, std::__Cr::less<unsigned long>,
   std::__Cr::allocator<std::__Cr::pair<unsigned long const, std::__Cr::vector<unsigned char,
   std::__Cr::allocator<unsigned char> > > > > >, unsigned short)>) */

void __thiscall
discord::voice::Connection::ProcessMLSWelcome
          (Connection *this,undefined2 param_1,long *param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *local_88 [2];
  code *local_78;
  undefined **ppuStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  puVar13 = (undefined8 *)param_4[3];
  uVar20 = param_4[2];
  uVar18 = param_4[1];
  if (puVar13[1] != 0) {
    param_4[2] = FUN_0049b1d4;
    param_4[3] = &DAT_001f1910;
  }
  puVar14 = (undefined1 *)*param_3;
  puVar1 = (undefined1 *)param_3[1];
  uVar12 = *param_4;
  uVar2 = (long)puVar1 - (long)puVar14;
  if (uVar2 == 0) {
    puVar14 = (undefined1 *)0x0;
    puVar17 = (undefined1 *)0x0;
    puVar5 = (undefined1 *)0x0;
    goto code_r0x0049415c;
  }
  if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar5 = (undefined1 *)operator_new(uVar2);
  puVar16 = puVar5;
  if ((uVar2 < 0x20) || ((ulong)((long)puVar5 - (long)puVar14) < 0x20)) {
LAB_00494144:
    do {
      puVar15 = puVar14 + 1;
      puVar17 = puVar16 + 1;
      *puVar16 = *puVar14;
      puVar14 = puVar15;
      puVar16 = puVar17;
    } while (puVar15 != puVar1);
  }
  else {
    uVar8 = uVar2 & 0xffffffffffffffe0;
    puVar6 = (undefined8 *)(puVar14 + 0x10);
    puVar17 = puVar5 + uVar8;
    puVar10 = (undefined8 *)(puVar5 + 0x10);
    uVar11 = uVar8;
    do {
      puVar4 = puVar6 + -1;
      uVar19 = puVar6[-2];
      uVar22 = puVar6[1];
      uVar21 = *puVar6;
      puVar6 = puVar6 + 4;
      uVar11 = uVar11 - 0x20;
      puVar10[-1] = *puVar4;
      puVar10[-2] = uVar19;
      puVar10[1] = uVar22;
      *puVar10 = uVar21;
      puVar10 = puVar10 + 4;
    } while (uVar11 != 0);
    puVar14 = puVar14 + uVar8;
    puVar16 = puVar17;
    if (uVar2 != uVar8) goto LAB_00494144;
  }
  puVar14 = puVar5 + uVar2;
code_r0x0049415c:
  local_78 = FUN_0049b494;
  ppuStack_70 = &PTR_FUN_00d1dcf8;
  puVar6 = (undefined8 *)operator_new(0x48);
  *puVar6 = this;
  puVar6[1] = uVar12;
  puVar6[4] = puVar13;
  puVar6[3] = uVar20;
  puVar6[2] = uVar18;
  lVar9 = puVar13[1];
  *(undefined2 *)(puVar6 + 5) = param_1;
  puVar6[6] = puVar5;
  puVar6[7] = puVar17;
  puVar6[8] = puVar14;
  if (lVar9 != 0) {
    puVar13 = &DAT_001f1910;
  }
  local_88[0] = puVar6;
  FUN_004930c4(this,local_88,"ProcessMLSWelcome",0x11);
  pvVar7 = (void *)puVar6[6];
  if (pvVar7 != (void *)0x0) {
    puVar6[7] = pvVar7;
    operator_delete(pvVar7);
  }
  if (*(code **)(puVar6[4] + 8) != (code *)0x0) {
    (**(code **)(puVar6[4] + 8))(puVar6[1]);
  }
  operator_delete(puVar6);
  if ((code *)puVar13[1] == (code *)0x0) {
    if (*(long *)(lVar3 + 0x28) == local_68) {
      return;
    }
  }
  else if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Could not recover jumptable at 0x00494224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar13[1])(uVar12);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00494260  discord::voice::Connection::GetMLSPairwiseFingerprint =====

/* discord::voice::Connection::GetMLSPairwiseFingerprint(unsigned short,
   std::__Cr::basic_string<char, std::__Cr::char_traits<char>, std::__Cr::allocator<char> >,
   std::__Cr::function<void (std::__Cr::vector<unsigned char, std::__Cr::allocator<unsigned char> >
   const&)>) */

void __thiscall
discord::voice::Connection::GetMLSPairwiseFingerprint
          (Connection *this,undefined2 param_1,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 ****__src;
  ulong uVar3;
  long lVar4;
  undefined8 ****__dest;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *local_b0;
  undefined8 ***local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 *local_88 [2];
  code *local_78;
  undefined **ppuStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar2 = param_4[2];
  local_b0 = (undefined8 *)param_4[3];
  uVar6 = *param_4;
  if (local_b0[1] != 0) {
    param_4[2] = FUN_0049ac00;
    param_4[3] = &DAT_001f1910;
  }
  __dest = &local_a0;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    __src = (undefined8 ****)*param_3;
    uVar3 = param_3[1];
    if (uVar3 < 0x17) {
      local_90 = CONCAT17((char)uVar3,(undefined7)local_90);
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      __dest = (undefined8 ****)operator_new(uVar1);
      local_90 = uVar1 | 0x8000000000000000;
      local_a0 = __dest;
      uStack_98 = uVar3;
    }
    if ((__dest <= __src) && (__src < (undefined8 ****)((long)__dest + uVar3 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar3 + 1);
  }
  else {
    uStack_98 = param_3[1];
    local_a0 = (undefined8 ***)*param_3;
    local_90 = param_3[2];
  }
  local_78 = FUN_0049b748;
  ppuStack_70 = &PTR_FUN_00d1dd18;
  puVar5 = (undefined8 *)operator_new(0x48);
  uVar8 = param_4[1];
  uVar7 = *param_4;
  *puVar5 = this;
  puVar5[3] = uVar2;
  puVar5[4] = local_b0;
  puVar5[2] = uVar8;
  puVar5[1] = uVar7;
  if (local_b0[1] != 0) {
    local_b0 = &DAT_001f1910;
  }
  *(undefined2 *)(puVar5 + 5) = param_1;
  puVar5[7] = uStack_98;
  puVar5[6] = local_a0;
  puVar5[8] = local_90;
  local_a0 = (undefined8 ***)0x0;
  uStack_98 = 0;
  local_90 = 0;
  local_88[0] = puVar5;
  FUN_004930c4(this,local_88,"GetMLSPairwiseFingerprint",0x19);
  if (*(char *)((long)puVar5 + 0x47) < '\0') {
    operator_delete((void *)puVar5[6]);
  }
  if (*(code **)(puVar5[4] + 8) != (code *)0x0) {
    (**(code **)(puVar5[4] + 8))(puVar5[1]);
  }
  operator_delete(puVar5);
  if ((long)local_90 < 0) {
    operator_delete(local_a0);
  }
  if ((code *)local_b0[1] != (code *)0x0) {
    (*(code *)local_b0[1])(uVar6);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049448c  discord::voice::Connection::SetOnMLSFailureCallback =====

/* discord::voice::Connection::SetOnMLSFailureCallback(std::__Cr::function<void
   (std::__Cr::basic_string<char, std::__Cr::char_traits<char>, std::__Cr::allocator<char> > const&,
   std::__Cr::basic_string<char, std::__Cr::char_traits<char>, std::__Cr::allocator<char> >
   const&)>) */

void __thiscall
discord::voice::Connection::SetOnMLSFailureCallback(Connection *this,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *local_68 [2];
  code *local_58;
  undefined **ppuStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)param_2[3];
  uVar3 = *param_2;
  uVar6 = param_2[2];
  uVar5 = param_2[1];
  if (puVar4[1] != 0) {
    param_2[2] = FUN_0041829c;
    param_2[3] = &DAT_001f1910;
  }
  local_58 = FUN_0049b954;
  ppuStack_50 = &PTR_FUN_00d1dd38;
  puVar2 = (undefined8 *)operator_new(0x28);
  *puVar2 = this;
  puVar2[1] = uVar3;
  puVar2[4] = puVar4;
  puVar2[3] = uVar6;
  puVar2[2] = uVar5;
  if (puVar4[1] != 0) {
    puVar4 = &DAT_001f1910;
  }
  local_68[0] = puVar2;
  FUN_004930c4(this,local_68,"SetOnMLSFailureCallback",0x17);
  if (*(code **)(puVar2[4] + 8) != (code *)0x0) {
    (**(code **)(puVar2[4] + 8))(puVar2[1]);
  }
  operator_delete(puVar2);
  if ((code *)puVar4[1] == (code *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x00494584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar4[1])(uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004945b4  discord::voice::Connection::SetSecureFramesStateUpdateCallback =====

/* discord::voice::Connection::SetSecureFramesStateUpdateCallback(std::__Cr::function<void
   (discord::voice::SecureFramesStateUpdate)>) */

void __thiscall
discord::voice::Connection::SetSecureFramesStateUpdateCallback(Connection *this,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *local_68 [2];
  code *local_58;
  undefined **ppuStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)param_2[3];
  uVar3 = *param_2;
  uVar6 = param_2[2];
  uVar5 = param_2[1];
  if (puVar4[1] != 0) {
    param_2[2] = FUN_00442f5c;
    param_2[3] = &DAT_001f1910;
  }
  local_58 = FUN_0049ba78;
  ppuStack_50 = &PTR_FUN_00d1dd58;
  puVar2 = (undefined8 *)operator_new(0x28);
  *puVar2 = this;
  puVar2[1] = uVar3;
  puVar2[4] = puVar4;
  puVar2[3] = uVar6;
  puVar2[2] = uVar5;
  if (puVar4[1] != 0) {
    puVar4 = &DAT_001f1910;
  }
  local_68[0] = puVar2;
  FUN_004930c4(this,local_68,"SetSecureFramesStateUpdateCallback",0x22);
  if (*(code **)(puVar2[4] + 8) != (code *)0x0) {
    (**(code **)(puVar2[4] + 8))(puVar2[1]);
  }
  operator_delete(puVar2);
  if ((code *)puVar4[1] == (code *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x004946ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar4[1])(uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004946dc  discord::voice::Connection::GetEncryptionModes =====

/* discord::voice::Connection::GetEncryptionModes(std::__Cr::function<void
   (std::__Cr::vector<std::__Cr::basic_string<char, std::__Cr::char_traits<char>,
   std::__Cr::allocator<char> >, std::__Cr::allocator<std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> > > > const&)>) */

void __thiscall discord::voice::Connection::GetEncryptionModes(Connection *this,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *local_68 [2];
  code *local_58;
  undefined **ppuStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)param_2[3];
  uVar3 = *param_2;
  uVar6 = param_2[2];
  uVar5 = param_2[1];
  if ((code *)*puVar4 != (code *)0x0) {
    uVar3 = (*(code *)*puVar4)(uVar3);
  }
  local_58 = FUN_0049bb9c;
  ppuStack_50 = &PTR_FUN_00d1dd78;
  puVar2 = (undefined8 *)operator_new(0x28);
  *puVar2 = this;
  puVar2[1] = uVar3;
  puVar2[4] = puVar4;
  puVar2[3] = uVar6;
  puVar2[2] = uVar5;
  if (puVar4[1] != 0) {
    puVar4 = &DAT_001f1910;
  }
  local_68[0] = puVar2;
  FUN_004930c4(this,local_68,"GetEncryptionModes",0x12);
  if (*(code **)(puVar2[4] + 8) != (code *)0x0) {
    (**(code **)(puVar2[4] + 8))(puVar2[1]);
  }
  operator_delete(puVar2);
  if ((code *)puVar4[1] == (code *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x004947d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar4[1])(uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00494804  discord::voice::Connection::SetUserPlayoutPan =====

/* discord::voice::Connection::SetUserPlayoutPan(std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> > const&, float, float) */

void __thiscall
discord::voice::Connection::SetUserPlayoutPan
          (Connection *this,basic_string *param_1,float param_2,float param_3)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  long lVar3;
  undefined8 **__src;
  undefined8 ***pppuVar4;
  undefined8 *puVar5;
  undefined8 ***pppuVar6;
  undefined8 **local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  float local_90;
  float fStack_8c;
  undefined8 *local_88 [2];
  code *local_78;
  undefined **ppuStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pppuVar4 = &local_a8;
  if ((char)param_1[0x17] < '\0') {
    pppuVar6 = *(undefined8 ****)param_1;
    uVar2 = *(ulong *)(param_1 + 8);
    if (uVar2 < 0x17) {
      local_98 = CONCAT17((char)uVar2,(undefined7)local_98);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      pppuVar4 = (undefined8 ***)operator_new(uVar1);
      local_98 = uVar1 | 0x8000000000000000;
      local_a8 = pppuVar4;
      uStack_a0 = uVar2;
    }
    if ((pppuVar4 <= pppuVar6) && (pppuVar6 < (undefined8 ***)((long)pppuVar4 + uVar2 + 1)))
    goto LAB_004949f0;
    memmove(pppuVar4,pppuVar6,uVar2 + 1);
  }
  else {
    uStack_a0 = *(ulong *)(param_1 + 8);
    local_a8 = *(undefined8 ***)param_1;
    local_98 = *(ulong *)(param_1 + 0x10);
  }
  local_78 = FUN_0049bcf0;
  ppuStack_70 = &PTR_FUN_00d1dd98;
  local_90 = param_2;
  fStack_8c = param_3;
  puVar5 = (undefined8 *)operator_new(0x28);
  uVar2 = uStack_a0;
  __src = local_a8;
  pppuVar4 = (undefined8 ***)(puVar5 + 1);
  *puVar5 = this;
  if ((long)local_98 < 0) {
    if (uStack_a0 < 0x17) {
      *(char *)((long)puVar5 + 0x1f) = (char)uStack_a0;
      pppuVar6 = pppuVar4;
    }
    else {
      if (0x7fffffffffffffef < uStack_a0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uStack_a0 | 0xf) + 1;
      pppuVar6 = (undefined8 ***)operator_new(uVar1);
      puVar5[1] = pppuVar6;
      puVar5[2] = uVar2;
      puVar5[3] = uVar1 | 0x8000000000000000;
    }
    __n = uVar2 + 1;
    if ((pppuVar6 <= __src) && (__src < (undefined8 ***)((long)pppuVar6 + __n))) {
LAB_004949f0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(pppuVar6,__src,__n);
  }
  else {
    puVar5[2] = uStack_a0;
    *pppuVar4 = local_a8;
    puVar5[3] = local_98;
  }
  puVar5[4] = CONCAT44(fStack_8c,local_90);
  local_88[0] = puVar5;
  FUN_004930c4(this,local_88,"SetUserPlayoutPan",0x11);
  if (*(char *)((long)puVar5 + 0x1f) < '\0') {
    operator_delete(*pppuVar4);
  }
  operator_delete(puVar5);
  if ((long)local_98 < 0) {
    operator_delete(local_a8);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00494a24  discord::voice::Connection::SetUserPlayoutVolume =====

/* discord::voice::Connection::SetUserPlayoutVolume(std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> > const&, float) */

void __thiscall
discord::voice::Connection::SetUserPlayoutVolume
          (Connection *this,basic_string *param_1,float param_2)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  long lVar3;
  undefined8 **__src;
  undefined8 ***pppuVar4;
  undefined8 *puVar5;
  undefined8 ***pppuVar6;
  undefined8 **local_98;
  ulong uStack_90;
  undefined8 local_88;
  float local_80;
  undefined8 *local_78 [2];
  code *local_68;
  undefined **ppuStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pppuVar4 = &local_98;
  if ((char)param_1[0x17] < '\0') {
    pppuVar6 = *(undefined8 ****)param_1;
    uVar2 = *(ulong *)(param_1 + 8);
    if (uVar2 < 0x17) {
      local_88 = CONCAT17((char)uVar2,(undefined7)local_88);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      pppuVar4 = (undefined8 ***)operator_new(uVar1);
      local_88 = uVar1 | 0x8000000000000000;
      local_98 = pppuVar4;
      uStack_90 = uVar2;
    }
    if ((pppuVar4 <= pppuVar6) && (pppuVar6 < (undefined8 ***)((long)pppuVar4 + uVar2 + 1)))
    goto LAB_00494c08;
    memmove(pppuVar4,pppuVar6,uVar2 + 1);
  }
  else {
    uStack_90 = *(ulong *)(param_1 + 8);
    local_98 = *(undefined8 ***)param_1;
    local_88 = *(ulong *)(param_1 + 0x10);
  }
  local_68 = FUN_0049be90;
  ppuStack_60 = &PTR_FUN_00d1ddb8;
  local_80 = param_2;
  puVar5 = (undefined8 *)operator_new(0x28);
  uVar2 = uStack_90;
  __src = local_98;
  pppuVar4 = (undefined8 ***)(puVar5 + 1);
  *puVar5 = this;
  if ((long)local_88 < 0) {
    if (uStack_90 < 0x17) {
      *(char *)((long)puVar5 + 0x1f) = (char)uStack_90;
      pppuVar6 = pppuVar4;
    }
    else {
      if (0x7fffffffffffffef < uStack_90) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uStack_90 | 0xf) + 1;
      pppuVar6 = (undefined8 ***)operator_new(uVar1);
      puVar5[1] = pppuVar6;
      puVar5[2] = uVar2;
      puVar5[3] = uVar1 | 0x8000000000000000;
    }
    __n = uVar2 + 1;
    if ((pppuVar6 <= __src) && (__src < (undefined8 ***)((long)pppuVar6 + __n))) {
LAB_00494c08:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(pppuVar6,__src,__n);
  }
  else {
    puVar5[2] = uStack_90;
    *pppuVar4 = local_98;
    puVar5[3] = local_88;
  }
  *(float *)(puVar5 + 4) = param_2;
  local_78[0] = puVar5;
  FUN_004930c4(this,local_78,"SetUserPlayoutVolume",0x14);
  if (*(char *)((long)puVar5 + 0x1f) < '\0') {
    operator_delete(*pppuVar4);
  }
  operator_delete(puVar5);
  if ((long)local_88 < 0) {
    operator_delete(local_98);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00494c3c  discord::voice::Connection::GetUserPlayoutVolume =====

/* WARNING: Type propagation algorithm not settling */
/* discord::voice::Connection::GetUserPlayoutVolume(std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> > const&) */

void __thiscall
discord::voice::Connection::GetUserPlayoutVolume(Connection *this,basic_string *param_1)

{
  ulong uVar1;
  size_t __n;
  undefined8 *******pppppppuVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  Connection *local_100;
  undefined4 *puStack_f8;
  undefined8 *******local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  Connection *local_c0;
  undefined4 *puStack_b8;
  undefined8 *******local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  void *local_98;
  char acStack_90 [8];
  undefined4 local_88;
  char local_84 [3];
  char local_81;
  long local_80;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  puStack_f8 = &local_d4;
  local_d4 = 0x3f800000;
  pppppppuVar6 = &local_f0;
  lVar9 = *(long *)(this + 0x30);
  local_100 = this;
  if ((char)param_1[0x17] < '\0') {
    pppppppuVar2 = *(undefined8 ********)param_1;
    uVar3 = *(ulong *)(param_1 + 8);
    if (uVar3 < 0x17) {
      local_e0 = CONCAT17((char)uVar3,(undefined7)local_e0);
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      pppppppuVar6 = (undefined8 *******)operator_new(uVar1);
      local_e0 = uVar1 | 0x8000000000000000;
      local_f0 = pppppppuVar6;
      uStack_e8 = uVar3;
    }
    if ((pppppppuVar6 <= pppppppuVar2) &&
       (pppppppuVar2 < (undefined8 *******)((long)pppppppuVar6 + uVar3 + 1))) goto LAB_00494f4c;
    memmove(pppppppuVar6,pppppppuVar2,uVar3 + 1);
    lVar8 = *(long *)(lVar9 + 0x58);
  }
  else {
    uStack_e8 = *(ulong *)(param_1 + 8);
    local_f0 = *(undefined8 ********)param_1;
    local_e0 = *(ulong *)(param_1 + 0x10);
    lVar8 = *(long *)(lVar9 + 0x58);
  }
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar9 + 0x78);
    if (lVar9 == 0) {
      FUN_00520194(&local_c0);
      puVar7 = (undefined8 *)operator_new(0x18);
      puVar7[2] = &local_c0;
      *puVar7 = &PTR_FUN_00d1de10;
      puVar7[1] = &local_100;
      FUN_00512cf8(lVar8,puVar7);
      FUN_005203e8(&local_c8,&local_c0);
      FUN_0052007c(local_c8);
      FUN_00520164(&local_c8);
      FUN_005201dc(&local_c0);
      goto joined_r0x00494eec;
    }
    uVar5 = FUN_005ce36c();
    uVar3 = uStack_e8;
    pppppppuVar2 = local_f0;
    pppppppuVar6 = &local_b0;
    puStack_b8 = puStack_f8;
    local_c0 = local_100;
    if ((long)local_e0 < 0) {
      if (uStack_e8 < 0x17) {
        local_a0 = CONCAT17((char)uStack_e8,(undefined7)local_a0);
      }
      else {
        if (0x7fffffffffffffef < uStack_e8) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar1 = (uStack_e8 | 0xf) + 1;
        pppppppuVar6 = (undefined8 *******)operator_new(uVar1);
        local_a0 = uVar1 | 0x8000000000000000;
        uStack_a8 = uVar3;
        local_b0 = pppppppuVar6;
      }
      __n = uVar3 + 1;
      if ((pppppppuVar6 <= pppppppuVar2) &&
         (pppppppuVar2 < (undefined8 *******)((long)pppppppuVar6 + __n))) goto LAB_00494f4c;
      memmove(pppppppuVar6,pppppppuVar2,__n);
    }
    else {
      uStack_a8 = uStack_e8;
      local_b0 = local_f0;
      local_a0 = local_e0;
    }
    local_81 = '\x14';
    if ((&local_98 < (void **)0x1b96d2) && ("GetUserPlayoutVolume" < local_84)) {
LAB_00494f4c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    acStack_90[0] = s_GetUserPlayoutVolume_001b96d1[8];
    acStack_90[1] = s_GetUserPlayoutVolume_001b96d1[9];
    acStack_90[2] = s_GetUserPlayoutVolume_001b96d1[10];
    acStack_90[3] = s_GetUserPlayoutVolume_001b96d1[0xb];
    acStack_90[4] = s_GetUserPlayoutVolume_001b96d1[0xc];
    acStack_90[5] = s_GetUserPlayoutVolume_001b96d1[0xd];
    acStack_90[6] = s_GetUserPlayoutVolume_001b96d1[0xe];
    acStack_90[7] = s_GetUserPlayoutVolume_001b96d1[0xf];
    local_98 = (void *)s_GetUserPlayoutVolume_001b96d1._0_8_;
    local_88 = 0x656d756c;
    local_84[0] = '\0';
    local_70 = FUN_0040e7ec;
    local_68 = &DAT_001f4e70;
    local_80 = lVar9;
    local_60 = uVar5;
    FUN_00520194(&local_c8);
    puVar7 = (undefined8 *)operator_new(0x18);
    puVar7[2] = &local_c8;
    *puVar7 = &PTR_FUN_00d1dde8;
    puVar7[1] = &local_c0;
    FUN_00512cf8(lVar8,puVar7);
    FUN_005203e8(&local_d0,&local_c8);
    FUN_0052007c(local_d0);
    FUN_00520164(&local_d0);
    FUN_005201dc(&local_c8);
    if (*(code **)(local_68 + 8) != (code *)0x0) {
      (**(code **)(local_68 + 8))(local_80);
    }
    if (local_81 < '\0') {
      operator_delete(local_98);
    }
    if ((long)local_a0 < 0) {
      operator_delete(local_b0);
    }
  }
joined_r0x00494eec:
  if ((long)local_e0 < 0) {
    operator_delete(local_f0);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_d4);
}


// ===== 00494f80  discord::voice::Connection::MuteUser =====

/* discord::voice::Connection::MuteUser(std::__Cr::basic_string<char, std::__Cr::char_traits<char>,
   std::__Cr::allocator<char> > const&, bool) */

void __thiscall
discord::voice::Connection::MuteUser(Connection *this,basic_string *param_1,bool param_2)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  long lVar3;
  undefined8 **__src;
  undefined8 ***pppuVar4;
  undefined8 *puVar5;
  undefined8 ***pppuVar6;
  undefined8 **local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 *local_78 [2];
  code *local_68;
  undefined **ppuStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pppuVar4 = &local_98;
  if ((char)param_1[0x17] < '\0') {
    pppuVar6 = *(undefined8 ****)param_1;
    uVar2 = *(ulong *)(param_1 + 8);
    if (uVar2 < 0x17) {
      local_88 = CONCAT17((char)uVar2,(undefined7)local_88);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      pppuVar4 = (undefined8 ***)operator_new(uVar1);
      local_88 = uVar1 | 0x8000000000000000;
      local_98 = pppuVar4;
      uStack_90 = uVar2;
    }
    if ((pppuVar4 <= pppuVar6) && (pppuVar6 < (undefined8 ***)((long)pppuVar4 + uVar2 + 1)))
    goto LAB_00495160;
    memmove(pppuVar4,pppuVar6,uVar2 + 1);
  }
  else {
    uStack_90 = *(ulong *)(param_1 + 8);
    local_98 = *(undefined8 ***)param_1;
    local_88 = *(ulong *)(param_1 + 0x10);
  }
  local_68 = FUN_0049c168;
  ppuStack_60 = &PTR_FUN_00d1de28;
  local_80 = param_2;
  puVar5 = (undefined8 *)operator_new(0x28);
  uVar2 = uStack_90;
  __src = local_98;
  pppuVar4 = (undefined8 ***)(puVar5 + 1);
  *puVar5 = this;
  if ((long)local_88 < 0) {
    if (uStack_90 < 0x17) {
      *(char *)((long)puVar5 + 0x1f) = (char)uStack_90;
      pppuVar6 = pppuVar4;
    }
    else {
      if (0x7fffffffffffffef < uStack_90) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uStack_90 | 0xf) + 1;
      pppuVar6 = (undefined8 ***)operator_new(uVar1);
      puVar5[1] = pppuVar6;
      puVar5[2] = uVar2;
      puVar5[3] = uVar1 | 0x8000000000000000;
    }
    __n = uVar2 + 1;
    if ((pppuVar6 <= __src) && (__src < (undefined8 ***)((long)pppuVar6 + __n))) {
LAB_00495160:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(pppuVar6,__src,__n);
  }
  else {
    puVar5[2] = uStack_90;
    *pppuVar4 = local_98;
    puVar5[3] = local_88;
  }
  *(bool *)(puVar5 + 4) = param_2;
  local_78[0] = puVar5;
  FUN_004930c4(this,local_78,"MuteUser",8);
  if (*(char *)((long)puVar5 + 0x1f) < '\0') {
    operator_delete(*pppuVar4);
  }
  operator_delete(puVar5);
  if ((long)local_88 < 0) {
    operator_delete(local_98);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00495194  discord::voice::Connection::SetUserPosition =====

/* discord::voice::Connection::SetUserPosition(std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> > const&, discord::media::Vector3
   const&) */

void __thiscall
discord::voice::Connection::SetUserPosition(Connection *this,basic_string *param_1,Vector3 *param_2)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 **__src;
  undefined8 ***pppuVar5;
  undefined8 *puVar6;
  undefined8 ***pppuVar7;
  undefined8 **local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 *local_78 [2];
  code *local_68;
  undefined **ppuStack_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  pppuVar5 = &local_a0;
  if ((char)param_1[0x17] < '\0') {
    pppuVar7 = *(undefined8 ****)param_1;
    uVar2 = *(ulong *)(param_1 + 8);
    if (uVar2 < 0x17) {
      local_90 = CONCAT17((char)uVar2,(undefined7)local_90);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      pppuVar5 = (undefined8 ***)operator_new(uVar1);
      local_90 = uVar1 | 0x8000000000000000;
      local_a0 = pppuVar5;
      uStack_98 = uVar2;
    }
    if ((pppuVar5 <= pppuVar7) && (pppuVar7 < (undefined8 ***)((long)pppuVar5 + uVar2 + 1)))
    goto LAB_00495388;
    memmove(pppuVar5,pppuVar7,uVar2 + 1);
  }
  else {
    uStack_98 = *(ulong *)(param_1 + 8);
    local_a0 = *(undefined8 ***)param_1;
    local_90 = *(ulong *)(param_1 + 0x10);
  }
  local_88 = *(undefined8 *)param_2;
  local_80 = *(undefined4 *)(param_2 + 8);
  local_68 = FUN_0049c308;
  ppuStack_60 = &PTR_FUN_00d1de48;
  puVar6 = (undefined8 *)operator_new(0x30);
  uVar2 = uStack_98;
  __src = local_a0;
  pppuVar5 = (undefined8 ***)(puVar6 + 1);
  *puVar6 = this;
  if ((long)local_90 < 0) {
    if (uStack_98 < 0x17) {
      *(char *)((long)puVar6 + 0x1f) = (char)uStack_98;
      pppuVar7 = pppuVar5;
    }
    else {
      if (0x7fffffffffffffef < uStack_98) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uStack_98 | 0xf) + 1;
      pppuVar7 = (undefined8 ***)operator_new(uVar1);
      puVar6[1] = pppuVar7;
      puVar6[2] = uVar2;
      puVar6[3] = uVar1 | 0x8000000000000000;
    }
    __n = uVar2 + 1;
    if ((pppuVar7 <= __src) && (__src < (undefined8 ***)((long)pppuVar7 + __n))) {
LAB_00495388:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(pppuVar7,__src,__n);
  }
  else {
    puVar6[2] = uStack_98;
    *pppuVar5 = local_a0;
    puVar6[3] = local_90;
  }
  uVar3 = *(undefined4 *)(param_2 + 8);
  puVar6[4] = *(undefined8 *)param_2;
  *(undefined4 *)(puVar6 + 5) = uVar3;
  local_78[0] = puVar6;
  FUN_004930c4(this,local_78,"SetUserPosition",0xf);
  if (*(char *)((long)puVar6 + 0x1f) < '\0') {
    operator_delete(*pppuVar5);
  }
  operator_delete(puVar6);
  if ((long)local_90 < 0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004953bc  discord::voice::Connection::FastUdpReconnect =====

/* discord::voice::Connection::FastUdpReconnect() */

void __thiscall discord::voice::Connection::FastUdpReconnect(Connection *this)

{
  long lVar1;
  Connection *local_48 [2];
  code *local_38;
  undefined *puStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_0049c454;
  puStack_30 = &DAT_001f6eb8;
  local_48[0] = this;
  FUN_004930c4(this,local_48,"FastUdpReconnect",0x10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00495428  discord::voice::Connection::SetUdpEndpoint =====

/* discord::voice::Connection::SetUdpEndpoint(std::__Cr::optional<std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> > >, unsigned short) */

void __thiscall
discord::voice::Connection::SetUdpEndpoint(Connection *this,long param_2,undefined2 param_3)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  void *local_a0;
  undefined8 uStack_98;
  long local_90;
  char local_88;
  undefined2 local_80;
  undefined8 *local_78 [2];
  code *local_68;
  undefined **ppuStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_a0 = (void *)((ulong)local_a0 & 0xffffffffffffff00);
  local_88 = '\0';
  if (*(char *)(param_2 + 0x18) == '\0') {
    bVar5 = true;
  }
  else {
    FUN_004244a8(&local_a0);
    bVar5 = local_88 == '\0';
  }
  local_68 = FUN_0049c464;
  ppuStack_60 = &PTR_FUN_00d1de68;
  local_80 = param_3;
  puVar6 = (undefined8 *)operator_new(0x30);
  lVar4 = local_90;
  uVar3 = uStack_98;
  pvVar2 = local_a0;
  *puVar6 = this;
  *(undefined1 *)(puVar6 + 4) = 0;
  puVar7 = puVar6 + 1;
  *(undefined1 *)puVar7 = 0;
  if (!bVar5) {
    uStack_98 = 0;
    local_90 = 0;
    local_a0 = (void *)0x0;
    puVar6[2] = uVar3;
    *puVar7 = (ulong)pvVar2;
    puVar6[3] = lVar4;
    *(undefined1 *)(puVar6 + 4) = 1;
  }
  *(undefined2 *)(puVar6 + 5) = param_3;
  local_78[0] = puVar6;
  FUN_004930c4(this,local_78,"SetUdpEndpoint",0xe);
  if ((*(char *)(puVar6 + 4) != '\0') && (*(char *)((long)puVar6 + 0x1f) < '\0')) {
    operator_delete((void *)*puVar7);
  }
  operator_delete(puVar6);
  if ((local_88 != '\0') && (local_90 < 0)) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00495578  discord::voice::Connection::SetOnConnectionFailedCallback =====

/* discord::voice::Connection::SetOnConnectionFailedCallback(std::__Cr::function<void
   (std::__Cr::basic_string<char, std::__Cr::char_traits<char>, std::__Cr::allocator<char> >)>) */

void __thiscall
discord::voice::Connection::SetOnConnectionFailedCallback(Connection *this,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *local_68 [2];
  code *local_58;
  undefined **ppuStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)param_2[3];
  uVar3 = *param_2;
  uVar6 = param_2[2];
  uVar5 = param_2[1];
  if (puVar4[1] != 0) {
    param_2[2] = FUN_00410008;
    param_2[3] = &DAT_001f1910;
  }
  local_58 = FUN_0049c518;
  ppuStack_50 = &PTR_FUN_00d1de88;
  puVar2 = (undefined8 *)operator_new(0x28);
  *puVar2 = this;
  puVar2[1] = uVar3;
  puVar2[4] = puVar4;
  puVar2[3] = uVar6;
  puVar2[2] = uVar5;
  if (puVar4[1] != 0) {
    puVar4 = &DAT_001f1910;
  }
  local_68[0] = puVar2;
  FUN_004930c4(this,local_68,"SetOnConnectionFailedCallback",0x1d);
  if (*(code **)(puVar2[4] + 8) != (code *)0x0) {
    (**(code **)(puVar2[4] + 8))(puVar2[1]);
  }
  operator_delete(puVar2);
  if ((code *)puVar4[1] == (code *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x00495670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar4[1])(uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004956a0  discord::voice::Connection::GetUserMuteState =====

/* WARNING: Type propagation algorithm not settling */
/* discord::voice::Connection::GetUserMuteState(std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> > const&) */

void __thiscall discord::voice::Connection::GetUserMuteState(Connection *this,basic_string *param_1)

{
  ulong uVar1;
  size_t __n;
  undefined8 *******pppppppuVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  Connection *local_100;
  char *pcStack_f8;
  undefined8 *******local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  char local_d4 [4];
  undefined8 local_d0;
  undefined8 local_c8;
  Connection *local_c0;
  char *pcStack_b8;
  undefined8 *******local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  void *local_98;
  char acStack_90 [8];
  char local_88 [7];
  char local_81;
  long local_80;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  pppppppuVar6 = &local_f0;
  pcStack_f8 = local_d4;
  local_d4[0] = '\0';
  lVar9 = *(long *)(this + 0x30);
  local_100 = this;
  if ((char)param_1[0x17] < '\0') {
    pppppppuVar2 = *(undefined8 ********)param_1;
    uVar3 = *(ulong *)(param_1 + 8);
    if (uVar3 < 0x17) {
      local_e0 = CONCAT17((char)uVar3,(undefined7)local_e0);
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      pppppppuVar6 = (undefined8 *******)operator_new(uVar1);
      local_e0 = uVar1 | 0x8000000000000000;
      local_f0 = pppppppuVar6;
      uStack_e8 = uVar3;
    }
    if ((pppppppuVar6 <= pppppppuVar2) &&
       (pppppppuVar2 < (undefined8 *******)((long)pppppppuVar6 + uVar3 + 1))) goto LAB_004959a8;
    memmove(pppppppuVar6,pppppppuVar2,uVar3 + 1);
    lVar8 = *(long *)(lVar9 + 0x58);
  }
  else {
    uStack_e8 = *(ulong *)(param_1 + 8);
    local_f0 = *(undefined8 ********)param_1;
    local_e0 = *(ulong *)(param_1 + 0x10);
    lVar8 = *(long *)(lVar9 + 0x58);
  }
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar9 + 0x78);
    if (lVar9 == 0) {
      FUN_00520194(&local_c0);
      puVar7 = (undefined8 *)operator_new(0x18);
      puVar7[2] = &local_c0;
      *puVar7 = &PTR_FUN_00d1dee0;
      puVar7[1] = &local_100;
      FUN_00512cf8(lVar8,puVar7);
      FUN_005203e8(&local_c8,&local_c0);
      FUN_0052007c(local_c8);
      FUN_00520164(&local_c8);
      FUN_005201dc(&local_c0);
      goto joined_r0x00495940;
    }
    uVar5 = FUN_005ce36c();
    uVar3 = uStack_e8;
    pppppppuVar2 = local_f0;
    pppppppuVar6 = &local_b0;
    pcStack_b8 = pcStack_f8;
    local_c0 = local_100;
    if ((long)local_e0 < 0) {
      if (uStack_e8 < 0x17) {
        local_a0 = CONCAT17((char)uStack_e8,(undefined7)local_a0);
      }
      else {
        if (0x7fffffffffffffef < uStack_e8) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar1 = (uStack_e8 | 0xf) + 1;
        pppppppuVar6 = (undefined8 *******)operator_new(uVar1);
        local_a0 = uVar1 | 0x8000000000000000;
        uStack_a8 = uVar3;
        local_b0 = pppppppuVar6;
      }
      __n = uVar3 + 1;
      if ((pppppppuVar6 <= pppppppuVar2) &&
         (pppppppuVar2 < (undefined8 *******)((long)pppppppuVar6 + __n))) goto LAB_004959a8;
      memmove(pppppppuVar6,pppppppuVar2,__n);
    }
    else {
      uStack_a8 = uStack_e8;
      local_b0 = local_f0;
      local_a0 = local_e0;
    }
    local_81 = '\x10';
    if ((&local_98 < (void **)0x199ef5) && ("GetUserMuteState" < local_88)) {
LAB_004959a8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    local_88[0] = '\0';
    acStack_90[0] = s_GetUserMuteState_00199ef4[8];
    acStack_90[1] = s_GetUserMuteState_00199ef4[9];
    acStack_90[2] = s_GetUserMuteState_00199ef4[10];
    acStack_90[3] = s_GetUserMuteState_00199ef4[0xb];
    acStack_90[4] = s_GetUserMuteState_00199ef4[0xc];
    acStack_90[5] = s_GetUserMuteState_00199ef4[0xd];
    acStack_90[6] = s_GetUserMuteState_00199ef4[0xe];
    acStack_90[7] = s_GetUserMuteState_00199ef4[0xf];
    local_98 = (void *)s_GetUserMuteState_00199ef4._0_8_;
    local_70 = FUN_0040e7ec;
    local_68 = &DAT_001f4e70;
    local_80 = lVar9;
    local_60 = uVar5;
    FUN_00520194(&local_c8);
    puVar7 = (undefined8 *)operator_new(0x18);
    puVar7[2] = &local_c8;
    *puVar7 = &PTR_FUN_00d1deb8;
    puVar7[1] = &local_c0;
    FUN_00512cf8(lVar8,puVar7);
    FUN_005203e8(&local_d0,&local_c8);
    FUN_0052007c(local_d0);
    FUN_00520164(&local_d0);
    FUN_005201dc(&local_c8);
    if (*(code **)(local_68 + 8) != (code *)0x0) {
      (**(code **)(local_68 + 8))(local_80);
    }
    if (local_81 < '\0') {
      operator_delete(local_98);
    }
    if ((long)local_a0 < 0) {
      operator_delete(local_b0);
    }
  }
joined_r0x00495940:
  if ((long)local_e0 < 0) {
    operator_delete(local_f0);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_d4[0] != '\0');
}


// ===== 004959dc  discord::voice::Connection::IsRemoteUserSpeaking =====

/* WARNING: Type propagation algorithm not settling */
/* discord::voice::Connection::IsRemoteUserSpeaking(std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> > const&) */

void __thiscall
discord::voice::Connection::IsRemoteUserSpeaking(Connection *this,basic_string *param_1)

{
  ulong uVar1;
  size_t __n;
  undefined8 *******pppppppuVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  Connection *local_100;
  char *pcStack_f8;
  undefined8 *******local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  char local_d4 [4];
  undefined8 local_d0;
  undefined8 local_c8;
  Connection *local_c0;
  char *pcStack_b8;
  undefined8 *******local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  void *local_98;
  char acStack_90 [8];
  undefined4 local_88;
  char local_84 [3];
  char local_81;
  long local_80;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  pppppppuVar6 = &local_f0;
  pcStack_f8 = local_d4;
  local_d4[0] = '\0';
  lVar9 = *(long *)(this + 0x30);
  local_100 = this;
  if ((char)param_1[0x17] < '\0') {
    pppppppuVar2 = *(undefined8 ********)param_1;
    uVar3 = *(ulong *)(param_1 + 8);
    if (uVar3 < 0x17) {
      local_e0 = CONCAT17((char)uVar3,(undefined7)local_e0);
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      pppppppuVar6 = (undefined8 *******)operator_new(uVar1);
      local_e0 = uVar1 | 0x8000000000000000;
      local_f0 = pppppppuVar6;
      uStack_e8 = uVar3;
    }
    if ((pppppppuVar6 <= pppppppuVar2) &&
       (pppppppuVar2 < (undefined8 *******)((long)pppppppuVar6 + uVar3 + 1))) goto LAB_00495cf0;
    memmove(pppppppuVar6,pppppppuVar2,uVar3 + 1);
    lVar8 = *(long *)(lVar9 + 0x58);
  }
  else {
    uStack_e8 = *(ulong *)(param_1 + 8);
    local_f0 = *(undefined8 ********)param_1;
    local_e0 = *(ulong *)(param_1 + 0x10);
    lVar8 = *(long *)(lVar9 + 0x58);
  }
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar9 + 0x78);
    if (lVar9 == 0) {
      FUN_00520194(&local_c0);
      puVar7 = (undefined8 *)operator_new(0x18);
      puVar7[2] = &local_c0;
      *puVar7 = &PTR_FUN_00d1df30;
      puVar7[1] = &local_100;
      FUN_00512cf8(lVar8,puVar7);
      FUN_005203e8(&local_c8,&local_c0);
      FUN_0052007c(local_c8);
      FUN_00520164(&local_c8);
      FUN_005201dc(&local_c0);
      goto joined_r0x00495c88;
    }
    uVar5 = FUN_005ce36c();
    uVar3 = uStack_e8;
    pppppppuVar2 = local_f0;
    pppppppuVar6 = &local_b0;
    pcStack_b8 = pcStack_f8;
    local_c0 = local_100;
    if ((long)local_e0 < 0) {
      if (uStack_e8 < 0x17) {
        local_a0 = CONCAT17((char)uStack_e8,(undefined7)local_a0);
      }
      else {
        if (0x7fffffffffffffef < uStack_e8) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar1 = (uStack_e8 | 0xf) + 1;
        pppppppuVar6 = (undefined8 *******)operator_new(uVar1);
        local_a0 = uVar1 | 0x8000000000000000;
        uStack_a8 = uVar3;
        local_b0 = pppppppuVar6;
      }
      __n = uVar3 + 1;
      if ((pppppppuVar6 <= pppppppuVar2) &&
         (pppppppuVar2 < (undefined8 *******)((long)pppppppuVar6 + __n))) goto LAB_00495cf0;
      memmove(pppppppuVar6,pppppppuVar2,__n);
    }
    else {
      uStack_a8 = uStack_e8;
      local_b0 = local_f0;
      local_a0 = local_e0;
    }
    local_81 = '\x14';
    if ((&local_98 < (void **)0x1e745b) && ("IsRemoteUserSpeaking" < local_84)) {
LAB_00495cf0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    acStack_90[0] = s_IsRemoteUserSpeaking_001e745a[8];
    acStack_90[1] = s_IsRemoteUserSpeaking_001e745a[9];
    acStack_90[2] = s_IsRemoteUserSpeaking_001e745a[10];
    acStack_90[3] = s_IsRemoteUserSpeaking_001e745a[0xb];
    acStack_90[4] = s_IsRemoteUserSpeaking_001e745a[0xc];
    acStack_90[5] = s_IsRemoteUserSpeaking_001e745a[0xd];
    acStack_90[6] = s_IsRemoteUserSpeaking_001e745a[0xe];
    acStack_90[7] = s_IsRemoteUserSpeaking_001e745a[0xf];
    local_98 = (void *)s_IsRemoteUserSpeaking_001e745a._0_8_;
    local_88 = 0x676e696b;
    local_84[0] = '\0';
    local_70 = FUN_0040e7ec;
    local_68 = &DAT_001f4e70;
    local_80 = lVar9;
    local_60 = uVar5;
    FUN_00520194(&local_c8);
    puVar7 = (undefined8 *)operator_new(0x18);
    puVar7[2] = &local_c8;
    *puVar7 = &PTR_FUN_00d1df08;
    puVar7[1] = &local_c0;
    FUN_00512cf8(lVar8,puVar7);
    FUN_005203e8(&local_d0,&local_c8);
    FUN_0052007c(local_d0);
    FUN_00520164(&local_d0);
    FUN_005201dc(&local_c8);
    if (*(code **)(local_68 + 8) != (code *)0x0) {
      (**(code **)(local_68 + 8))(local_80);
    }
    if (local_81 < '\0') {
      operator_delete(local_98);
    }
    if ((long)local_a0 < 0) {
      operator_delete(local_b0);
    }
  }
joined_r0x00495c88:
  if ((long)local_e0 < 0) {
    operator_delete(local_f0);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_d4[0] != '\0');
}


// ===== 00495d24  discord::voice::Connection::SetRemoteUserSpeaking =====

/* discord::voice::Connection::SetRemoteUserSpeaking(std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> > const&, unsigned int, bool) */

void __thiscall
discord::voice::Connection::SetRemoteUserSpeaking
          (Connection *this,basic_string *param_1,uint param_2,bool param_3)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  long lVar3;
  undefined8 **__src;
  undefined8 ***pppuVar4;
  undefined8 *puVar5;
  undefined8 ***pppuVar6;
  undefined8 **local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 *local_78 [2];
  code *local_68;
  undefined **ppuStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pppuVar4 = &local_98;
  if ((char)param_1[0x17] < '\0') {
    pppuVar6 = *(undefined8 ****)param_1;
    uVar2 = *(ulong *)(param_1 + 8);
    if (uVar2 < 0x17) {
      local_88 = CONCAT17((char)uVar2,(undefined7)local_88);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      pppuVar4 = (undefined8 ***)operator_new(uVar1);
      local_88 = uVar1 | 0x8000000000000000;
      local_98 = pppuVar4;
      uStack_90 = uVar2;
    }
    if ((pppuVar4 <= pppuVar6) && (pppuVar6 < (undefined8 ***)((long)pppuVar4 + uVar2 + 1)))
    goto LAB_00495f04;
    memmove(pppuVar4,pppuVar6,uVar2 + 1);
  }
  else {
    uStack_90 = *(ulong *)(param_1 + 8);
    local_98 = *(undefined8 ***)param_1;
    local_88 = *(ulong *)(param_1 + 0x10);
  }
  local_68 = FUN_0049c8c0;
  ppuStack_60 = &PTR_FUN_00d1df48;
  local_80 = param_3;
  puVar5 = (undefined8 *)operator_new(0x28);
  uVar2 = uStack_90;
  __src = local_98;
  pppuVar4 = (undefined8 ***)(puVar5 + 1);
  *puVar5 = this;
  if ((long)local_88 < 0) {
    if (uStack_90 < 0x17) {
      *(char *)((long)puVar5 + 0x1f) = (char)uStack_90;
      pppuVar6 = pppuVar4;
    }
    else {
      if (0x7fffffffffffffef < uStack_90) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uStack_90 | 0xf) + 1;
      pppuVar6 = (undefined8 ***)operator_new(uVar1);
      puVar5[1] = pppuVar6;
      puVar5[2] = uVar2;
      puVar5[3] = uVar1 | 0x8000000000000000;
    }
    __n = uVar2 + 1;
    if ((pppuVar6 <= __src) && (__src < (undefined8 ***)((long)pppuVar6 + __n))) {
LAB_00495f04:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(pppuVar6,__src,__n);
  }
  else {
    puVar5[2] = uStack_90;
    *pppuVar4 = local_98;
    puVar5[3] = local_88;
  }
  *(bool *)(puVar5 + 4) = param_3;
  local_78[0] = puVar5;
  FUN_004930c4(this,local_78,"SetRemoteUserSpeaking",0x15);
  if (*(char *)((long)puVar5 + 0x1f) < '\0') {
    operator_delete(*pppuVar4);
  }
  operator_delete(puVar5);
  if ((long)local_88 < 0) {
    operator_delete(local_98);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00495f38  discord::voice::Connection::SetRemoteUserCanHavePriority =====

/* discord::voice::Connection::SetRemoteUserCanHavePriority(std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> > const&, bool) */

void __thiscall
discord::voice::Connection::SetRemoteUserCanHavePriority
          (Connection *this,basic_string *param_1,bool param_2)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  long lVar3;
  undefined8 **__src;
  undefined8 ***pppuVar4;
  undefined8 *puVar5;
  undefined8 ***pppuVar6;
  undefined8 **local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 *local_78 [2];
  code *local_68;
  undefined **ppuStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pppuVar4 = &local_98;
  if ((char)param_1[0x17] < '\0') {
    pppuVar6 = *(undefined8 ****)param_1;
    uVar2 = *(ulong *)(param_1 + 8);
    if (uVar2 < 0x17) {
      local_88 = CONCAT17((char)uVar2,(undefined7)local_88);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      pppuVar4 = (undefined8 ***)operator_new(uVar1);
      local_88 = uVar1 | 0x8000000000000000;
      local_98 = pppuVar4;
      uStack_90 = uVar2;
    }
    if ((pppuVar4 <= pppuVar6) && (pppuVar6 < (undefined8 ***)((long)pppuVar4 + uVar2 + 1)))
    goto LAB_00496118;
    memmove(pppuVar4,pppuVar6,uVar2 + 1);
  }
  else {
    uStack_90 = *(ulong *)(param_1 + 8);
    local_98 = *(undefined8 ***)param_1;
    local_88 = *(ulong *)(param_1 + 0x10);
  }
  local_68 = FUN_0049ca60;
  ppuStack_60 = &PTR_FUN_00d1df68;
  local_80 = param_2;
  puVar5 = (undefined8 *)operator_new(0x28);
  uVar2 = uStack_90;
  __src = local_98;
  pppuVar4 = (undefined8 ***)(puVar5 + 1);
  *puVar5 = this;
  if ((long)local_88 < 0) {
    if (uStack_90 < 0x17) {
      *(char *)((long)puVar5 + 0x1f) = (char)uStack_90;
      pppuVar6 = pppuVar4;
    }
    else {
      if (0x7fffffffffffffef < uStack_90) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uStack_90 | 0xf) + 1;
      pppuVar6 = (undefined8 ***)operator_new(uVar1);
      puVar5[1] = pppuVar6;
      puVar5[2] = uVar2;
      puVar5[3] = uVar1 | 0x8000000000000000;
    }
    __n = uVar2 + 1;
    if ((pppuVar6 <= __src) && (__src < (undefined8 ***)((long)pppuVar6 + __n))) {
LAB_00496118:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(pppuVar6,__src,__n);
  }
  else {
    puVar5[2] = uStack_90;
    *pppuVar4 = local_98;
    puVar5[3] = local_88;
  }
  *(bool *)(puVar5 + 4) = param_2;
  local_78[0] = puVar5;
  FUN_004930c4(this,local_78,"SetRemoteUserCanHavePriority",0x1c);
  if (*(char *)((long)puVar5 + 0x1f) < '\0') {
    operator_delete(*pppuVar4);
  }
  operator_delete(puVar5);
  if ((long)local_88 < 0) {
    operator_delete(local_98);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049614c  discord::voice::Connection::DisableUserVideo =====

/* discord::voice::Connection::DisableUserVideo(std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> > const&, bool) */

void __thiscall
discord::voice::Connection::DisableUserVideo(Connection *this,basic_string *param_1,bool param_2)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  long lVar3;
  undefined8 **__src;
  undefined8 ***pppuVar4;
  undefined8 *puVar5;
  undefined8 ***pppuVar6;
  undefined8 **local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 *local_78 [2];
  code *local_68;
  undefined **ppuStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pppuVar4 = &local_98;
  if ((char)param_1[0x17] < '\0') {
    pppuVar6 = *(undefined8 ****)param_1;
    uVar2 = *(ulong *)(param_1 + 8);
    if (uVar2 < 0x17) {
      local_88 = CONCAT17((char)uVar2,(undefined7)local_88);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      pppuVar4 = (undefined8 ***)operator_new(uVar1);
      local_88 = uVar1 | 0x8000000000000000;
      local_98 = pppuVar4;
      uStack_90 = uVar2;
    }
    if ((pppuVar4 <= pppuVar6) && (pppuVar6 < (undefined8 ***)((long)pppuVar4 + uVar2 + 1)))
    goto LAB_0049632c;
    memmove(pppuVar4,pppuVar6,uVar2 + 1);
  }
  else {
    uStack_90 = *(ulong *)(param_1 + 8);
    local_98 = *(undefined8 ***)param_1;
    local_88 = *(ulong *)(param_1 + 0x10);
  }
  local_68 = FUN_0049cc00;
  ppuStack_60 = &PTR_FUN_00d1df88;
  local_80 = param_2;
  puVar5 = (undefined8 *)operator_new(0x28);
  uVar2 = uStack_90;
  __src = local_98;
  pppuVar4 = (undefined8 ***)(puVar5 + 1);
  *puVar5 = this;
  if ((long)local_88 < 0) {
    if (uStack_90 < 0x17) {
      *(char *)((long)puVar5 + 0x1f) = (char)uStack_90;
      pppuVar6 = pppuVar4;
    }
    else {
      if (0x7fffffffffffffef < uStack_90) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uStack_90 | 0xf) + 1;
      pppuVar6 = (undefined8 ***)operator_new(uVar1);
      puVar5[1] = pppuVar6;
      puVar5[2] = uVar2;
      puVar5[3] = uVar1 | 0x8000000000000000;
    }
    __n = uVar2 + 1;
    if ((pppuVar6 <= __src) && (__src < (undefined8 ***)((long)pppuVar6 + __n))) {
LAB_0049632c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(pppuVar6,__src,__n);
  }
  else {
    puVar5[2] = uStack_90;
    *pppuVar4 = local_98;
    puVar5[3] = local_88;
  }
  *(bool *)(puVar5 + 4) = param_2;
  local_78[0] = puVar5;
  FUN_004930c4(this,local_78,"DisableUserVideo",0x10);
  if (*(char *)((long)puVar5 + 0x1f) < '\0') {
    operator_delete(*pppuVar4);
  }
  operator_delete(puVar5);
  if ((long)local_88 < 0) {
    operator_delete(local_98);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00496360  discord::voice::Connection::ApplySettings =====

/* discord::voice::Connection::ApplySettings(discord::ConnectionSettings const&,
   std::__Cr::basic_string_view<char, std::__Cr::char_traits<char> >) */

void discord::voice::Connection::ApplySettings
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_4b0 [3];
  long local_498;
  undefined8 local_488;
  long local_470;
  undefined8 local_458;
  long local_440;
  void *local_3a8;
  char local_391;
  void *local_390;
  void *local_388;
  undefined8 local_370;
  long local_358;
  undefined8 local_348;
  long local_330;
  undefined1 auStack_300 [400];
  undefined1 auStack_170 [248];
  undefined8 *local_78 [2];
  code *local_68;
  undefined **ppuStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_004964c0(local_4b0);
  local_68 = FUN_0049cda0;
  ppuStack_60 = &PTR_FUN_00d1dfa8;
  puVar2 = (undefined8 *)operator_new(0x440);
  *puVar2 = param_1;
  FUN_004964c0(puVar2 + 1,local_4b0);
  local_78[0] = puVar2;
  FUN_004930c4(param_1,local_78,param_3,param_4);
  FUN_0049cdec(puVar2);
  FUN_004379f4(auStack_170);
  FUN_0043ba38(auStack_300);
  if (*(code **)(local_330 + 8) != (code *)0x0) {
    (**(code **)(local_330 + 8))(local_348);
  }
  if (*(code **)(local_358 + 8) != (code *)0x0) {
    (**(code **)(local_358 + 8))(local_370);
  }
  if (local_390 != (void *)0x0) {
    local_388 = local_390;
    operator_delete(local_390);
  }
  if (local_391 < '\0') {
    operator_delete(local_3a8);
  }
  if (*(code **)(local_440 + 8) != (code *)0x0) {
    (**(code **)(local_440 + 8))(local_458);
  }
  if (*(code **)(local_470 + 8) != (code *)0x0) {
    (**(code **)(local_470 + 8))(local_488);
  }
  if (*(code **)(local_498 + 8) != (code *)0x0) {
    (**(code **)(local_498 + 8))(local_4b0[0]);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004964c0  FUN_004964c0 =====

void FUN_004964c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined4 uVar7;
  
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[2] = param_2[2];
  pcVar6 = *(code **)param_2[3];
  param_1[3] = (undefined8 *)param_2[3];
  if (pcVar6 != (code *)0x0) {
    uVar5 = (*pcVar6)(*param_2);
    *param_1 = uVar5;
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar5 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar5;
  param_1[7] = param_2[7];
  pcVar6 = *(code **)param_2[8];
  param_1[8] = (undefined8 *)param_2[8];
  if (pcVar6 != (code *)0x0) {
    uVar5 = (*pcVar6)(param_2[5]);
    param_1[5] = uVar5;
  }
  uVar1 = *(undefined4 *)(param_2 + 10);
  uVar2 = *(undefined1 *)((long)param_2 + 0x54);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined4 *)(param_1 + 10) = uVar1;
  *(undefined1 *)((long)param_1 + 0x54) = uVar2;
  uVar5 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar5;
  param_1[0xd] = param_2[0xd];
  pcVar6 = *(code **)param_2[0xe];
  param_1[0xe] = (undefined8 *)param_2[0xe];
  if (pcVar6 != (code *)0x0) {
    uVar5 = (*pcVar6)(param_2[0xb]);
    param_1[0xb] = uVar5;
  }
  uVar5 = param_2[0x10];
  uVar2 = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  uVar1 = *(undefined4 *)(param_2 + 0x12);
  param_1[0x10] = uVar5;
  uVar3 = *(undefined1 *)((long)param_2 + 0x94);
  *(undefined1 *)(param_1 + 0x11) = uVar2;
  uVar7 = *(undefined4 *)(param_2 + 0x13);
  *(undefined4 *)(param_1 + 0x12) = uVar1;
  uVar2 = *(undefined1 *)((long)param_2 + 0x9c);
  *(undefined1 *)((long)param_1 + 0x94) = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined1 *)((long)param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x13) = uVar7;
  *(undefined1 *)((long)param_1 + 0x9c) = uVar2;
  uVar2 = *(undefined1 *)(param_2 + 0x15);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar4 = *(undefined1 *)((long)param_2 + 0xa9);
  *(undefined1 *)((long)param_1 + 0xa4) = uVar3;
  uVar1 = *(undefined4 *)((long)param_2 + 0xb4);
  *(undefined1 *)(param_1 + 0x15) = uVar2;
  uVar2 = *(undefined1 *)(param_2 + 0x17);
  *(undefined1 *)((long)param_1 + 0xa9) = uVar4;
  uVar3 = *(undefined1 *)(param_2 + 0x16);
  *(undefined4 *)((long)param_1 + 0xb4) = uVar1;
  uVar4 = *(undefined1 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x17) = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 0x19);
  *(undefined1 *)(param_1 + 0x16) = uVar3;
  uVar2 = *(undefined1 *)((long)param_2 + 0xcc);
  *(undefined1 *)(param_1 + 0x18) = uVar4;
  uVar3 = *(undefined1 *)(param_2 + 0x1a);
  *(undefined4 *)(param_1 + 0x19) = uVar1;
  uVar4 = *(undefined1 *)(param_2 + 0x1b);
  *(undefined1 *)((long)param_1 + 0xcc) = uVar2;
  uVar2 = *(undefined1 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x1a) = uVar3;
  uVar3 = *(undefined1 *)((long)param_2 + 0xe1);
  *(undefined1 *)(param_1 + 0x1b) = uVar4;
  uVar1 = *(undefined4 *)((long)param_2 + 0xe4);
  *(undefined1 *)(param_1 + 0x1c) = uVar2;
  uVar2 = *(undefined1 *)(param_2 + 0x1d);
  uVar7 = *(undefined4 *)((long)param_2 + 0xac);
  *(undefined1 *)((long)param_1 + 0xe1) = uVar3;
  *(undefined4 *)((long)param_1 + 0xe4) = uVar1;
  *(undefined1 *)(param_1 + 0x1d) = uVar2;
  *(undefined4 *)((long)param_1 + 0xac) = uVar7;
  FUN_0049a1f8(param_1 + 0x1e,param_2 + 0x1e);
  uVar2 = *(undefined1 *)((long)param_2 + 0x1b4);
  *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)(param_2 + 0x36);
  *(undefined1 *)((long)param_1 + 0x1b4) = uVar2;
  *(undefined2 *)(param_1 + 0x37) = *(undefined2 *)(param_2 + 0x37);
  uVar5 = *(undefined8 *)((long)param_2 + 0x1bc);
  *(undefined4 *)((long)param_1 + 0x1c4) = *(undefined4 *)((long)param_2 + 0x1c4);
  *(undefined8 *)((long)param_1 + 0x1bc) = uVar5;
  *(undefined1 *)(param_1 + 0x39) = *(undefined1 *)(param_2 + 0x39);
  *(undefined2 *)(param_1 + 0x3a) = *(undefined2 *)(param_2 + 0x3a);
  *(undefined2 *)((long)param_1 + 0x1d2) = *(undefined2 *)((long)param_2 + 0x1d2);
  uVar5 = param_2[0x3b];
  uVar2 = *(undefined1 *)(param_2 + 0x3d);
  *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
  param_1[0x3b] = uVar5;
  *(undefined1 *)(param_1 + 0x3d) = uVar2;
  FUN_004426bc(param_1 + 0x3e,param_2 + 0x3e);
  uVar1 = *(undefined4 *)(param_2 + 0x5d);
  uVar2 = *(undefined1 *)((long)param_2 + 0x2ec);
  *(undefined1 *)(param_1 + 0x5c) = *(undefined1 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x5d) = uVar1;
  *(undefined1 *)((long)param_1 + 0x2ec) = uVar2;
  *(undefined2 *)(param_1 + 0x5e) = *(undefined2 *)(param_2 + 0x5e);
  *(undefined2 *)((long)param_1 + 0x2f2) = *(undefined2 *)((long)param_2 + 0x2f2);
  *(undefined1 *)((long)param_1 + 0x2f4) = *(undefined1 *)((long)param_2 + 0x2f4);
  FUN_0040d960(param_1 + 0x5f,param_2 + 0x5f);
  uVar2 = *(undefined1 *)((long)param_2 + 0x324);
  uVar3 = *(undefined1 *)(param_2 + 99);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  uVar4 = *(undefined1 *)(param_2 + 0x67);
  *(undefined1 *)((long)param_1 + 0x324) = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 0x65);
  uVar2 = *(undefined1 *)((long)param_2 + 0x32c);
  *(undefined1 *)(param_1 + 99) = uVar3;
  *(undefined1 *)(param_1 + 0x67) = uVar4;
  *(undefined4 *)(param_1 + 0x65) = uVar1;
  *(undefined1 *)((long)param_1 + 0x32c) = uVar2;
  uVar2 = *(undefined1 *)((long)param_2 + 0x334);
  *(undefined4 *)(param_1 + 0x66) = *(undefined4 *)(param_2 + 0x66);
  *(undefined1 *)((long)param_1 + 0x334) = uVar2;
  FUN_00435de4(param_1 + 0x68,param_2 + 0x68);
  uVar2 = *(undefined1 *)((long)param_2 + 0x414);
  uVar3 = *(undefined1 *)(param_2 + 0x81);
  *(undefined4 *)(param_1 + 0x82) = *(undefined4 *)(param_2 + 0x82);
  uVar7 = *(undefined4 *)(param_2 + 0x85);
  uVar1 = *(undefined4 *)(param_2 + 0x83);
  *(undefined1 *)((long)param_1 + 0x414) = uVar2;
  uVar2 = *(undefined1 *)((long)param_2 + 0x41c);
  *(undefined1 *)(param_1 + 0x81) = uVar3;
  *(undefined4 *)(param_1 + 0x85) = uVar7;
  *(undefined4 *)(param_1 + 0x83) = uVar1;
  uVar3 = *(undefined1 *)((long)param_2 + 0x42c);
  *(undefined1 *)((long)param_1 + 0x41c) = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 0x84);
  uVar2 = *(undefined1 *)(param_2 + 0x86);
  *(undefined1 *)((long)param_1 + 0x42c) = uVar3;
  uVar3 = *(undefined1 *)((long)param_2 + 0x424);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  *(undefined1 *)((long)param_1 + 0x424) = uVar3;
  *(undefined1 *)(param_1 + 0x86) = uVar2;
  return;
}


// ===== 004967ac  discord::voice::Connection::ApplySettings =====

/* discord::voice::Connection::ApplySettings(discord::ConnectionSettings const&) */

void discord::voice::Connection::ApplySettings(ConnectionSettings *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_4a0 [3];
  long local_488;
  undefined8 local_478;
  long local_460;
  undefined8 local_448;
  long local_430;
  void *local_398;
  char local_381;
  void *local_380;
  void *local_378;
  undefined8 local_360;
  long local_348;
  undefined8 local_338;
  long local_320;
  undefined1 auStack_2f0 [400];
  undefined1 auStack_160 [248];
  undefined8 *local_68 [2];
  code *local_58;
  undefined **ppuStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_004964c0(local_4a0);
  local_58 = FUN_0049cea0;
  ppuStack_50 = &PTR_FUN_00d1dfc8;
  puVar2 = (undefined8 *)operator_new(0x440);
  *puVar2 = param_1;
  FUN_004964c0(puVar2 + 1,local_4a0);
  local_68[0] = puVar2;
  FUN_004930c4(param_1,local_68,"ApplySettings",0xd);
  FUN_0049ceec(puVar2);
  FUN_004379f4(auStack_160);
  FUN_0043ba38(auStack_2f0);
  if (*(code **)(local_320 + 8) != (code *)0x0) {
    (**(code **)(local_320 + 8))(local_338);
  }
  if (*(code **)(local_348 + 8) != (code *)0x0) {
    (**(code **)(local_348 + 8))(local_360);
  }
  if (local_380 != (void *)0x0) {
    local_378 = local_380;
    operator_delete(local_380);
  }
  if (local_381 < '\0') {
    operator_delete(local_398);
  }
  if (*(code **)(local_430 + 8) != (code *)0x0) {
    (**(code **)(local_430 + 8))(local_448);
  }
  if (*(code **)(local_460 + 8) != (code *)0x0) {
    (**(code **)(local_460 + 8))(local_478);
  }
  if (*(code **)(local_488 + 8) != (code *)0x0) {
    (**(code **)(local_488 + 8))(local_4a0[0]);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00496900  discord::voice::Connection::SetPTTActive =====

/* discord::voice::Connection::SetPTTActive(bool, bool, bool) */

void __thiscall
discord::voice::Connection::SetPTTActive(Connection *this,bool param_1,bool param_2,bool param_3)

{
  FUN_00489fbc(*(undefined8 *)(this + 0x10),param_1,param_3);
  FUN_0048a064(*(undefined8 *)(this + 0x10),param_2);
  return;
}


// ===== 00496934  discord::voice::Connection::GetPTTActivationState =====

/* discord::voice::Connection::GetPTTActivationState(std::__Cr::chrono::duration<long long,
   std::__Cr::ratio<1l, 1000l> >) */

bool discord::voice::Connection::GetPTTActivationState(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_0048a080(*(undefined8 *)(param_1 + 0x10));
  return iVar1 == 1;
}


// ===== 00496954  discord::voice::Connection::SetVideoBroadcast =====

/* discord::voice::Connection::SetVideoBroadcast(bool) */

void __thiscall discord::voice::Connection::SetVideoBroadcast(Connection *this,bool param_1)

{
  long lVar1;
  Connection *local_48;
  ulong uStack_40;
  code *local_38;
  undefined *puStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_40 = (ulong)param_1 & 1;
  local_38 = FUN_0049cfa0;
  puStack_30 = &DAT_001f6ed8;
  local_48 = this;
  FUN_004930c4(this,&local_48,"SetVideoBroadcast",0x11);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004969c4  discord::voice::Connection::SetOnVideoCallback =====

/* discord::voice::Connection::SetOnVideoCallback(std::__Cr::function<void
   (std::__Cr::basic_string<char, std::__Cr::char_traits<char>, std::__Cr::allocator<char> > const&,
   unsigned int, std::__Cr::basic_string<char, std::__Cr::char_traits<char>,
   std::__Cr::allocator<char> > const&, std::__Cr::vector<discord::StreamParameters,
   std::__Cr::allocator<discord::StreamParameters> > const&)>) */

void __thiscall discord::voice::Connection::SetOnVideoCallback(Connection *this,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *local_68 [2];
  code *local_58;
  undefined **ppuStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)param_2[3];
  uVar3 = *param_2;
  uVar6 = param_2[2];
  uVar5 = param_2[1];
  if (puVar4[1] != 0) {
    param_2[2] = FUN_00442f14;
    param_2[3] = &DAT_001f1910;
  }
  local_58 = FUN_0049cfb8;
  ppuStack_50 = &PTR_FUN_00d1dfe8;
  puVar2 = (undefined8 *)operator_new(0x28);
  *puVar2 = this;
  puVar2[1] = uVar3;
  puVar2[4] = puVar4;
  puVar2[3] = uVar6;
  puVar2[2] = uVar5;
  if (puVar4[1] != 0) {
    puVar4 = &DAT_001f1910;
  }
  local_68[0] = puVar2;
  FUN_004930c4(this,local_68,"SetOnVideoCallback",0x12);
  if (*(code **)(puVar2[4] + 8) != (code *)0x0) {
    (**(code **)(puVar2[4] + 8))(puVar2[1]);
  }
  operator_delete(puVar2);
  if ((code *)puVar4[1] == (code *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x00496abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar4[1])(uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00496aec  discord::voice::Connection::SetOnFirstFrameCallback =====

/* discord::voice::Connection::SetOnFirstFrameCallback(std::__Cr::function<void
   (std::__Cr::basic_string<char, std::__Cr::char_traits<char>, std::__Cr::allocator<char> > const&,
   unsigned int, std::__Cr::basic_string<char, std::__Cr::char_traits<char>,
   std::__Cr::allocator<char> > const&)>) */

void __thiscall
discord::voice::Connection::SetOnFirstFrameCallback(Connection *this,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *local_68 [2];
  code *local_58;
  undefined **ppuStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)param_2[3];
  uVar3 = *param_2;
  uVar6 = param_2[2];
  uVar5 = param_2[1];
  if (puVar4[1] != 0) {
    param_2[2] = FUN_00442f20;
    param_2[3] = &DAT_001f1910;
  }
  local_58 = FUN_0049d0dc;
  ppuStack_50 = &PTR_FUN_00d1e008;
  puVar2 = (undefined8 *)operator_new(0x28);
  *puVar2 = this;
  puVar2[1] = uVar3;
  puVar2[4] = puVar4;
  puVar2[3] = uVar6;
  puVar2[2] = uVar5;
  if (puVar4[1] != 0) {
    puVar4 = &DAT_001f1910;
  }
  local_68[0] = puVar2;
  FUN_004930c4(this,local_68,"SetOnFirstFrameCallback",0x17);
  if (*(code **)(puVar2[4] + 8) != (code *)0x0) {
    (**(code **)(puVar2[4] + 8))(puVar2[1]);
  }
  operator_delete(puVar2);
  if ((code *)puVar4[1] == (code *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x00496be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar4[1])(uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00496c14  discord::voice::Connection::SetOnFirstFrameDeliveredStatsCallback =====

/* discord::voice::Connection::SetOnFirstFrameDeliveredStatsCallback(std::__Cr::function<void
   (discord::VideoFrameDeliveredStats const&)>) */

void __thiscall
discord::voice::Connection::SetOnFirstFrameDeliveredStatsCallback
          (Connection *this,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *local_68 [2];
  code *local_58;
  undefined **ppuStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)param_2[3];
  uVar3 = *param_2;
  uVar6 = param_2[2];
  uVar5 = param_2[1];
  if (puVar4[1] != 0) {
    param_2[2] = FUN_00442f2c;
    param_2[3] = &DAT_001f1910;
  }
  local_58 = FUN_0049d200;
  ppuStack_50 = &PTR_FUN_00d1e028;
  puVar2 = (undefined8 *)operator_new(0x28);
  *puVar2 = this;
  puVar2[1] = uVar3;
  puVar2[4] = puVar4;
  puVar2[3] = uVar6;
  puVar2[2] = uVar5;
  if (puVar4[1] != 0) {
    puVar4 = &DAT_001f1910;
  }
  local_68[0] = puVar2;
  FUN_004930c4(this,local_68,"SetOnFirstFrameDeliveredStatsCallback",0x25);
  if (*(code **)(puVar2[4] + 8) != (code *)0x0) {
    (**(code **)(puVar2[4] + 8))(puVar2[1]);
  }
  operator_delete(puVar2);
  if ((code *)puVar4[1] == (code *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x00496d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar4[1])(uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00496d3c  discord::voice::Connection::SetOnFirstFrameEncryptedStatsCallback =====

/* discord::voice::Connection::SetOnFirstFrameEncryptedStatsCallback(std::__Cr::function<void
   (discord::VideoFrameEncryptedStats const&)>) */

void __thiscall
discord::voice::Connection::SetOnFirstFrameEncryptedStatsCallback
          (Connection *this,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *local_68 [2];
  code *local_58;
  undefined **ppuStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)param_2[3];
  uVar3 = *param_2;
  uVar6 = param_2[2];
  uVar5 = param_2[1];
  if (puVar4[1] != 0) {
    param_2[2] = FUN_00442f38;
    param_2[3] = &DAT_001f1910;
  }
  local_58 = FUN_0049d324;
  ppuStack_50 = &PTR_FUN_00d1e048;
  puVar2 = (undefined8 *)operator_new(0x28);
  *puVar2 = this;
  puVar2[1] = uVar3;
  puVar2[4] = puVar4;
  puVar2[3] = uVar6;
  puVar2[2] = uVar5;
  if (puVar4[1] != 0) {
    puVar4 = &DAT_001f1910;
  }
  local_68[0] = puVar2;
  FUN_004930c4(this,local_68,"SetOnFirstFrameEncryptedStatsCallback",0x25);
  if (*(code **)(puVar2[4] + 8) != (code *)0x0) {
    (**(code **)(puVar2[4] + 8))(puVar2[1]);
  }
  operator_delete(puVar2);
  if ((code *)puVar4[1] == (code *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x00496e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar4[1])(uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00496e64  discord::voice::Connection::SetOnDesktopSourceEnded =====

/* discord::voice::Connection::SetOnDesktopSourceEnded(std::__Cr::function<void (int,
   discord::Optional<long>)>) */

void __thiscall
discord::voice::Connection::SetOnDesktopSourceEnded(Connection *this,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *local_68 [2];
  code *local_58;
  undefined **ppuStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)param_2[3];
  uVar3 = *param_2;
  uVar6 = param_2[2];
  uVar5 = param_2[1];
  if (puVar4[1] != 0) {
    param_2[2] = FUN_00442f44;
    param_2[3] = &DAT_001f1910;
  }
  local_58 = FUN_0049d448;
  ppuStack_50 = &PTR_FUN_00d1e068;
  puVar2 = (undefined8 *)operator_new(0x28);
  *puVar2 = this;
  puVar2[1] = uVar3;
  puVar2[4] = puVar4;
  puVar2[3] = uVar6;
  puVar2[2] = uVar5;
  if (puVar4[1] != 0) {
    puVar4 = &DAT_001f1910;
  }
  local_68[0] = puVar2;
  FUN_004930c4(this,local_68,"SetOnDesktopSourceEnded",0x17);
  if (*(code **)(puVar2[4] + 8) != (code *)0x0) {
    (**(code **)(puVar2[4] + 8))(puVar2[1]);
  }
  operator_delete(puVar2);
  if ((code *)puVar4[1] == (code *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x00496f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar4[1])(uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00496f8c  discord::voice::Connection::SetOnSoundshareCallback =====

/* discord::voice::Connection::SetOnSoundshareCallback(std::__Cr::function<void (bool)>) */

void __thiscall
discord::voice::Connection::SetOnSoundshareCallback(Connection *this,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *local_68 [2];
  code *local_58;
  undefined **ppuStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)param_2[3];
  uVar3 = *param_2;
  uVar6 = param_2[2];
  uVar5 = param_2[1];
  if (puVar4[1] != 0) {
    param_2[2] = FUN_0041c32c;
    param_2[3] = &DAT_001f1910;
  }
  local_58 = FUN_0049d56c;
  ppuStack_50 = &PTR_FUN_00d1e088;
  puVar2 = (undefined8 *)operator_new(0x28);
  *puVar2 = this;
  puVar2[1] = uVar3;
  puVar2[4] = puVar4;
  puVar2[3] = uVar6;
  puVar2[2] = uVar5;
  if (puVar4[1] != 0) {
    puVar4 = &DAT_001f1910;
  }
  local_68[0] = puVar2;
  FUN_004930c4(this,local_68,"SetOnSoundshareCallback",0x17);
  if (*(code **)(puVar2[4] + 8) != (code *)0x0) {
    (**(code **)(puVar2[4] + 8))(puVar2[1]);
  }
  operator_delete(puVar2);
  if ((code *)puVar4[1] == (code *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x00497084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar4[1])(uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004970b4  discord::voice::Connection::SetOnSoundshareEndedCallback =====

/* discord::voice::Connection::SetOnSoundshareEndedCallback(std::__Cr::function<void ()>) */

void __thiscall
discord::voice::Connection::SetOnSoundshareEndedCallback(Connection *this,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *local_68 [2];
  code *local_58;
  undefined **ppuStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)param_2[3];
  uVar3 = *param_2;
  uVar6 = param_2[2];
  uVar5 = param_2[1];
  if (puVar4[1] != 0) {
    param_2[2] = FUN_0040dec4;
    param_2[3] = &DAT_001f1910;
  }
  local_58 = FUN_0049d690;
  ppuStack_50 = &PTR_FUN_00d1e0a8;
  puVar2 = (undefined8 *)operator_new(0x28);
  *puVar2 = this;
  puVar2[1] = uVar3;
  puVar2[4] = puVar4;
  puVar2[3] = uVar6;
  puVar2[2] = uVar5;
  if (puVar4[1] != 0) {
    puVar4 = &DAT_001f1910;
  }
  local_68[0] = puVar2;
  FUN_004930c4(this,local_68,"SetOnSoundshareEndedCallback",0x1c);
  if (*(code **)(puVar2[4] + 8) != (code *)0x0) {
    (**(code **)(puVar2[4] + 8))(puVar2[1]);
  }
  operator_delete(puVar2);
  if ((code *)puVar4[1] == (code *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x004971ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar4[1])(uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004971dc  discord::voice::Connection::SetOnSoundshareFailedCallback =====

/* discord::voice::Connection::SetOnSoundshareFailedCallback(std::__Cr::function<void (unsigned int,
   std::__Cr::basic_string<char, std::__Cr::char_traits<char>, std::__Cr::allocator<char> >, bool)>)
    */

void __thiscall
discord::voice::Connection::SetOnSoundshareFailedCallback(Connection *this,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *local_68 [2];
  code *local_58;
  undefined **ppuStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)param_2[3];
  uVar3 = *param_2;
  uVar6 = param_2[2];
  uVar5 = param_2[1];
  if (puVar4[1] != 0) {
    param_2[2] = FUN_00442f50;
    param_2[3] = &DAT_001f1910;
  }
  local_58 = FUN_0049d7b4;
  ppuStack_50 = &PTR_FUN_00d1e0c8;
  puVar2 = (undefined8 *)operator_new(0x28);
  *puVar2 = this;
  puVar2[1] = uVar3;
  puVar2[4] = puVar4;
  puVar2[3] = uVar6;
  puVar2[2] = uVar5;
  if (puVar4[1] != 0) {
    puVar4 = &DAT_001f1910;
  }
  local_68[0] = puVar2;
  FUN_004930c4(this,local_68,"SetOnSoundshareFailedCallback",0x1d);
  if (*(code **)(puVar2[4] + 8) != (code *)0x0) {
    (**(code **)(puVar2[4] + 8))(puVar2[1]);
  }
  operator_delete(puVar2);
  if ((code *)puVar4[1] == (code *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x004972d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar4[1])(uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00497304  discord::voice::Connection::SetOnVideoEncoderFallbackCallback =====

/* discord::voice::Connection::SetOnVideoEncoderFallbackCallback(std::__Cr::function<void
   (std::__Cr::basic_string<char, std::__Cr::char_traits<char>, std::__Cr::allocator<char> >)>) */

void __thiscall
discord::voice::Connection::SetOnVideoEncoderFallbackCallback(Connection *this,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *local_68 [2];
  code *local_58;
  undefined **ppuStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)param_2[3];
  uVar3 = *param_2;
  uVar6 = param_2[2];
  uVar5 = param_2[1];
  if (puVar4[1] != 0) {
    param_2[2] = FUN_00410008;
    param_2[3] = &DAT_001f1910;
  }
  local_58 = FUN_0049d8d8;
  ppuStack_50 = &PTR_FUN_00d1e0e8;
  puVar2 = (undefined8 *)operator_new(0x28);
  *puVar2 = this;
  puVar2[1] = uVar3;
  puVar2[4] = puVar4;
  puVar2[3] = uVar6;
  puVar2[2] = uVar5;
  if (puVar4[1] != 0) {
    puVar4 = &DAT_001f1910;
  }
  local_68[0] = puVar2;
  FUN_004930c4(this,local_68,"SetOnVideoEncoderFallbackCallback",0x21);
  if (*(code **)(puVar2[4] + 8) != (code *)0x0) {
    (**(code **)(puVar2[4] + 8))(puVar2[1]);
  }
  operator_delete(puVar2);
  if ((code *)puVar4[1] == (code *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x004973fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar4[1])(uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049742c  discord::voice::Connection::SetOnVideoDecoderFallbackCallback =====

/* discord::voice::Connection::SetOnVideoDecoderFallbackCallback(std::__Cr::function<void
   (std::__Cr::basic_string<char, std::__Cr::char_traits<char>, std::__Cr::allocator<char> >)>) */

void __thiscall
discord::voice::Connection::SetOnVideoDecoderFallbackCallback(Connection *this,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *local_68 [2];
  code *local_58;
  undefined **ppuStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)param_2[3];
  uVar3 = *param_2;
  uVar6 = param_2[2];
  uVar5 = param_2[1];
  if (puVar4[1] != 0) {
    param_2[2] = FUN_00410008;
    param_2[3] = &DAT_001f1910;
  }
  local_58 = FUN_0049d9fc;
  ppuStack_50 = &PTR_FUN_00d1e108;
  puVar2 = (undefined8 *)operator_new(0x28);
  *puVar2 = this;
  puVar2[1] = uVar3;
  puVar2[4] = puVar4;
  puVar2[3] = uVar6;
  puVar2[2] = uVar5;
  if (puVar4[1] != 0) {
    puVar4 = &DAT_001f1910;
  }
  local_68[0] = puVar2;
  FUN_004930c4(this,local_68,"SetOnVideoDecoderFallbackCallback",0x21);
  if (*(code **)(puVar2[4] + 8) != (code *)0x0) {
    (**(code **)(puVar2[4] + 8))(puVar2[1]);
  }
  operator_delete(puVar2);
  if ((code *)puVar4[1] == (code *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x00497524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar4[1])(uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00497554  discord::voice::Connection::SetVideoCodecErrorCallback =====

/* discord::voice::Connection::SetVideoCodecErrorCallback(std::__Cr::function<void
   (discord::media::VideoCodecErrorInfo)>) */

void __thiscall
discord::voice::Connection::SetVideoCodecErrorCallback(Connection *this,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *local_68 [2];
  code *local_58;
  undefined **ppuStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)param_2[3];
  uVar3 = *param_2;
  uVar6 = param_2[2];
  uVar5 = param_2[1];
  if (puVar4[1] != 0) {
    param_2[2] = FUN_00442d38;
    param_2[3] = &DAT_001f1910;
  }
  local_58 = FUN_0049db20;
  ppuStack_50 = &PTR_FUN_00d1e128;
  puVar2 = (undefined8 *)operator_new(0x28);
  *puVar2 = this;
  puVar2[1] = uVar3;
  puVar2[4] = puVar4;
  puVar2[3] = uVar6;
  puVar2[2] = uVar5;
  if (puVar4[1] != 0) {
    puVar4 = &DAT_001f1910;
  }
  local_68[0] = puVar2;
  FUN_004930c4(this,local_68,"SetVideoCodecErrorCallback",0x1a);
  if (*(code **)(puVar2[4] + 8) != (code *)0x0) {
    (**(code **)(puVar2[4] + 8))(puVar2[1]);
  }
  operator_delete(puVar2);
  if ((code *)puVar4[1] == (code *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x0049764c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar4[1])(uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049767c  discord::voice::Connection::SetOnRtcpMessageCallback =====

/* discord::voice::Connection::SetOnRtcpMessageCallback(std::__Cr::function<void
   (std::__Cr::basic_string<char, std::__Cr::char_traits<char>, std::__Cr::allocator<char> >,
   std::__Cr::basic_string<char, std::__Cr::char_traits<char>, std::__Cr::allocator<char> >)>) */

void __thiscall
discord::voice::Connection::SetOnRtcpMessageCallback(Connection *this,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *local_68 [2];
  code *local_58;
  undefined **ppuStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)param_2[3];
  uVar3 = *param_2;
  uVar6 = param_2[2];
  uVar5 = param_2[1];
  if (puVar4[1] != 0) {
    param_2[2] = FUN_0049dc44;
    param_2[3] = &DAT_001f1910;
  }
  local_58 = FUN_0049dc50;
  ppuStack_50 = &PTR_FUN_00d1e168;
  puVar2 = (undefined8 *)operator_new(0x28);
  *puVar2 = this;
  puVar2[1] = uVar3;
  puVar2[4] = puVar4;
  puVar2[3] = uVar6;
  puVar2[2] = uVar5;
  if (puVar4[1] != 0) {
    puVar4 = &DAT_001f1910;
  }
  local_68[0] = puVar2;
  FUN_004930c4(this,local_68,"SetOnRtcpMessageCallback",0x18);
  if (*(code **)(puVar2[4] + 8) != (code *)0x0) {
    (**(code **)(puVar2[4] + 8))(puVar2[1]);
  }
  operator_delete(puVar2);
  if ((code *)puVar4[1] == (code *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x00497774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar4[1])(uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004977a4  discord::voice::Connection::SetGoLiveDevices =====

/* discord::voice::Connection::SetGoLiveDevices(std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> >, std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> >) */

void __thiscall
discord::voice::Connection::SetGoLiveDevices
          (Connection *this,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  ulong uVar3;
  char cVar4;
  long lVar5;
  undefined8 ****ppppuVar6;
  undefined8 *puVar7;
  undefined8 ***local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  undefined8 ***local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 *local_78 [2];
  code *local_68;
  undefined **ppuStack_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  ppppuVar6 = &local_a8;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    ppppuVar2 = (undefined8 ****)*param_2;
    uVar3 = param_2[1];
    if (uVar3 < 0x17) {
      local_98 = CONCAT17((char)uVar3,(undefined7)local_98);
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      ppppuVar6 = (undefined8 ****)operator_new(uVar1);
      local_98 = uVar1 | 0x8000000000000000;
      local_a8 = ppppuVar6;
      uStack_a0 = uVar3;
    }
    if ((ppppuVar6 <= ppppuVar2) && (ppppuVar2 < (undefined8 ****)((long)ppppuVar6 + uVar3 + 1)))
    goto LAB_004979ec;
    memmove(ppppuVar6,ppppuVar2,uVar3 + 1);
  }
  else {
    uStack_a0 = param_2[1];
    local_a8 = (undefined8 ***)*param_2;
    local_98 = param_2[2];
  }
  ppppuVar6 = &local_90;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    ppppuVar2 = (undefined8 ****)*param_3;
    uVar3 = param_3[1];
    if (uVar3 < 0x17) {
      local_80 = CONCAT17((char)uVar3,(undefined7)local_80);
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      ppppuVar6 = (undefined8 ****)operator_new(uVar1);
      local_80 = uVar1 | 0x8000000000000000;
      local_90 = ppppuVar6;
      uStack_88 = uVar3;
    }
    if ((ppppuVar6 <= ppppuVar2) && (ppppuVar2 < (undefined8 ****)((long)ppppuVar6 + uVar3 + 1))) {
LAB_004979ec:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(ppppuVar6,ppppuVar2,uVar3 + 1);
  }
  else {
    uStack_88 = param_3[1];
    local_90 = (undefined8 ***)*param_3;
    local_80 = param_3[2];
  }
  local_68 = FUN_0049e000;
  ppuStack_60 = &PTR_FUN_00d1e188;
  puVar7 = (undefined8 *)operator_new(0x38);
  *puVar7 = this;
  puVar7[2] = uStack_a0;
  puVar7[1] = local_a8;
  puVar7[3] = local_98;
  local_a8 = (undefined8 ***)0x0;
  uStack_a0 = 0;
  puVar7[5] = uStack_88;
  puVar7[4] = local_90;
  puVar7[6] = local_80;
  local_98 = 0;
  local_90 = (undefined8 ***)0x0;
  uStack_88 = 0;
  local_80 = 0;
  local_78[0] = puVar7;
  FUN_004930c4(this,local_78,"SetGoLiveDevices",0x10);
  if (*(char *)((long)puVar7 + 0x37) < '\0') {
    operator_delete((void *)puVar7[4]);
    cVar4 = *(char *)((long)puVar7 + 0x1f);
  }
  else {
    cVar4 = *(char *)((long)puVar7 + 0x1f);
  }
  if (cVar4 < '\0') {
    operator_delete((void *)puVar7[1]);
  }
  operator_delete(puVar7);
  if ((long)local_80 < 0) {
    operator_delete(local_90);
  }
  if ((long)local_98 < 0) {
    operator_delete(local_a8);
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00497a20  discord::voice::Connection::ClearGoLiveDevices =====

/* discord::voice::Connection::ClearGoLiveDevices() */

void __thiscall discord::voice::Connection::ClearGoLiveDevices(Connection *this)

{
  long lVar1;
  Connection *local_48 [2];
  code *local_38;
  undefined *puStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_0049e39c;
  puStack_30 = &DAT_001f6ef8;
  local_48[0] = this;
  FUN_004930c4(this,local_48,"ClearGoLiveDevices",0x12);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00497a8c  discord::voice::Connection::SetDesktopSource =====

/* discord::voice::Connection::SetDesktopSource(std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> >, discord::DesktopCapturerType,
   discord::voice::DesktopSourceOptions) */

void discord::voice::Connection::SetDesktopSource(void)

{
  return;
}


// ===== 00497a90  discord::voice::Connection::ClearDesktopSource =====

/* discord::voice::Connection::ClearDesktopSource() */

void __thiscall discord::voice::Connection::ClearDesktopSource(Connection *this)

{
  long lVar1;
  Connection *local_48 [2];
  code *local_38;
  undefined *puStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_0049e3ac;
  puStack_30 = &DAT_001f6f18;
  local_48[0] = this;
  FUN_004930c4(this,local_48,"ClearDesktopSource",0x12);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00497afc  discord::voice::Connection::SetExternalVideoSource =====

/* discord::voice::Connection::SetExternalVideoSource(std::__Cr::shared_ptr<discord::media::ExternalVideoSource>,
   bool) */

void discord::voice::Connection::SetExternalVideoSource
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *local_68 [2];
  code *local_58;
  undefined **ppuStack_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_58 = FUN_0049e3bc;
  ppuStack_50 = &PTR_FUN_00d1e1a8;
  puVar5 = (undefined8 *)operator_new(0x20);
  *puVar5 = param_1;
  puVar5[1] = param_2;
  puVar5[2] = param_3;
  *(undefined1 *)(puVar5 + 3) = param_4;
  local_68[0] = puVar5;
  FUN_004930c4(param_1,local_68,"SetExternalVideoSource",0x16);
  plVar7 = (long *)puVar5[2];
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
  if (*(long *)(lVar4 + 0x28) == local_48) {
    operator_delete(puVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00497be0  discord::voice::Connection::ClearExternalVideoSource =====

/* discord::voice::Connection::ClearExternalVideoSource() */

void __thiscall discord::voice::Connection::ClearExternalVideoSource(Connection *this)

{
  long lVar1;
  Connection *local_48 [2];
  code *local_38;
  undefined *puStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_0049e49c;
  puStack_30 = &DAT_001f6f38;
  local_48[0] = this;
  FUN_004930c4(this,local_48,"ClearExternalVideoSource",0x18);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00497c4c  discord::voice::Connection::PresentDesktopSourcePicker =====

/* discord::voice::Connection::PresentDesktopSourcePicker(std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> > const&) */

void __thiscall
discord::voice::Connection::PresentDesktopSourcePicker(Connection *this,basic_string *param_1)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  long lVar3;
  undefined8 **__src;
  undefined8 ***pppuVar4;
  undefined8 *puVar5;
  undefined8 ***pppuVar6;
  undefined8 **local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 *local_78 [2];
  code *local_68;
  undefined **ppuStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pppuVar4 = &local_90;
  if ((char)param_1[0x17] < '\0') {
    pppuVar6 = *(undefined8 ****)param_1;
    uVar2 = *(ulong *)(param_1 + 8);
    if (uVar2 < 0x17) {
      local_80 = CONCAT17((char)uVar2,(undefined7)local_80);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      pppuVar4 = (undefined8 ***)operator_new(uVar1);
      local_80 = uVar1 | 0x8000000000000000;
      local_90 = pppuVar4;
      uStack_88 = uVar2;
    }
    if ((pppuVar4 <= pppuVar6) && (pppuVar6 < (undefined8 ***)((long)pppuVar4 + uVar2 + 1)))
    goto LAB_00497e1c;
    memmove(pppuVar4,pppuVar6,uVar2 + 1);
  }
  else {
    uStack_88 = *(ulong *)(param_1 + 8);
    local_90 = *(undefined8 ***)param_1;
    local_80 = *(ulong *)(param_1 + 0x10);
  }
  local_68 = FUN_0049e4b8;
  ppuStack_60 = &PTR_FUN_00d1e1c8;
  puVar5 = (undefined8 *)operator_new(0x20);
  uVar2 = uStack_88;
  __src = local_90;
  pppuVar4 = (undefined8 ***)(puVar5 + 1);
  *puVar5 = this;
  if ((long)local_80 < 0) {
    if (uStack_88 < 0x17) {
      *(char *)((long)puVar5 + 0x1f) = (char)uStack_88;
      pppuVar6 = pppuVar4;
    }
    else {
      if (0x7fffffffffffffef < uStack_88) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uStack_88 | 0xf) + 1;
      pppuVar6 = (undefined8 ***)operator_new(uVar1);
      puVar5[1] = pppuVar6;
      puVar5[2] = uVar2;
      puVar5[3] = uVar1 | 0x8000000000000000;
    }
    __n = uVar2 + 1;
    if ((pppuVar6 <= __src) && (__src < (undefined8 ***)((long)pppuVar6 + __n))) {
LAB_00497e1c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(pppuVar6,__src,__n);
  }
  else {
    puVar5[2] = uStack_88;
    *pppuVar4 = local_90;
    puVar5[3] = local_80;
  }
  local_78[0] = puVar5;
  FUN_004930c4(this,local_78,"PresentDesktopSourcePicker",0x1a);
  if (*(char *)((long)puVar5 + 0x1f) < '\0') {
    operator_delete(*pppuVar4);
  }
  operator_delete(puVar5);
  if ((long)local_80 < 0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00497e50  discord::voice::Connection::SetDesktopSourceAndroid =====

/* discord::voice::Connection::SetDesktopSourceAndroid(discord::android::GlobalReference) */

void __thiscall discord::voice::Connection::SetDesktopSourceAndroid(Connection *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *local_58 [2];
  code *local_48;
  undefined **ppuStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_2;
  *param_2 = 0;
  local_48 = FUN_0049e5e0;
  ppuStack_40 = &PTR_FUN_00d1e1e8;
  plVar2 = (long *)operator_new(0x10);
  *plVar2 = lVar4;
  plVar2[1] = (long)this;
  local_58[0] = plVar2;
  FUN_004930c4(this,local_58,"SetDesktopSourceAndroid",0x17);
  if (*plVar2 != 0) {
    plVar3 = (long *)FUN_004a2934();
    (**(code **)(*plVar3 + 0xb0))(plVar3,*plVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    operator_delete(plVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00497f04  discord::voice::Connection::SetSoundshareControllerAndroid =====

/* discord::voice::Connection::SetSoundshareControllerAndroid(std::__Cr::shared_ptr<discord::media::soundshare::Controller>)
    */

void discord::voice::Connection::SetSoundshareControllerAndroid
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *local_68 [2];
  code *local_58;
  undefined **ppuStack_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_58 = FUN_0049e8bc;
  ppuStack_50 = &PTR_FUN_00d1e208;
  puVar5 = (undefined8 *)operator_new(0x18);
  *puVar5 = param_2;
  puVar5[1] = param_3;
  puVar5[2] = param_1;
  local_68[0] = puVar5;
  FUN_004930c4(param_1,local_68,"SetSoundshareControllerAndroid",0x1e);
  plVar7 = (long *)puVar5[1];
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
  if (*(long *)(lVar4 + 0x28) == local_48) {
    operator_delete(puVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00497fe0  discord::voice::Connection::SetEncodingQualityAndroid =====

/* discord::voice::Connection::SetEncodingQualityAndroid(int, int, int, int, int) */

void __thiscall
discord::voice::Connection::SetEncodingQualityAndroid
          (Connection *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *local_78 [2];
  code *local_68;
  undefined **ppuStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_68 = FUN_0049e990;
  ppuStack_60 = &PTR_FUN_00d1e228;
  puVar2 = (undefined8 *)operator_new(0x18);
  *puVar2 = this;
  *(int *)(puVar2 + 1) = param_1;
  *(int *)((long)puVar2 + 0xc) = param_2;
  *(int *)(puVar2 + 2) = param_4 * param_3;
  *(int *)((long)puVar2 + 0x14) = param_5;
  local_78[0] = puVar2;
  FUN_004930c4(this,local_78,"SetEncodingQualityAndroid",0x19);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    operator_delete(puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00498098  discord::voice::Connection::SetDesktopSourceStatusCallback =====

/* discord::voice::Connection::SetDesktopSourceStatusCallback(std::__Cr::function<void
   (std::__Cr::basic_string<char, std::__Cr::char_traits<char>, std::__Cr::allocator<char> >)>) */

void __thiscall
discord::voice::Connection::SetDesktopSourceStatusCallback(Connection *this,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *local_68 [2];
  code *local_58;
  undefined **ppuStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)param_2[3];
  uVar3 = *param_2;
  uVar6 = param_2[2];
  uVar5 = param_2[1];
  if (puVar4[1] != 0) {
    param_2[2] = FUN_00410008;
    param_2[3] = &DAT_001f1910;
  }
  local_58 = FUN_0049ee5c;
  ppuStack_50 = &PTR_FUN_00d1e248;
  puVar2 = (undefined8 *)operator_new(0x28);
  *puVar2 = this;
  puVar2[1] = uVar3;
  puVar2[4] = puVar4;
  puVar2[3] = uVar6;
  puVar2[2] = uVar5;
  if (puVar4[1] != 0) {
    puVar4 = &DAT_001f1910;
  }
  local_68[0] = puVar2;
  FUN_004930c4(this,local_68,"SetDesktopSourceStatusCallback",0x1e);
  if (*(code **)(puVar2[4] + 8) != (code *)0x0) {
    (**(code **)(puVar2[4] + 8))(puVar2[1]);
  }
  operator_delete(puVar2);
  if ((code *)puVar4[1] == (code *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x00498190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar4[1])(uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004981c0  discord::voice::Connection::GetStats =====

/* discord::voice::Connection::GetStats(std::__Cr::function<void (std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> >)>, discord::voice::StatsFilter) */

void __thiscall
discord::voice::Connection::GetStats(Connection *this,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *local_78 [2];
  code *local_68;
  undefined **ppuStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar5 = (undefined8 *)param_2[3];
  if (*(char *)(puVar5 + 2) == '\0') {
    uVar4 = *param_2;
    uVar7 = param_2[2];
    uVar6 = param_2[1];
    if (puVar5[1] != 0) {
      param_2[2] = FUN_00410008;
      param_2[3] = &DAT_001f1910;
    }
    local_68 = FUN_0049ef80;
    ppuStack_60 = &PTR_FUN_00d1e268;
    puVar2 = (undefined8 *)operator_new(0x30);
    *puVar2 = this;
    puVar2[1] = uVar4;
    puVar2[4] = puVar5;
    puVar2[3] = uVar7;
    puVar2[2] = uVar6;
    lVar3 = puVar5[1];
    *(undefined4 *)(puVar2 + 5) = param_3;
    if (lVar3 != 0) {
      puVar5 = &DAT_001f1910;
    }
    local_78[0] = puVar2;
    FUN_004930c4(this,local_78,"GetStats",8);
    if (*(code **)(puVar2[4] + 8) != (code *)0x0) {
      (**(code **)(puVar2[4] + 8))(puVar2[1]);
    }
    operator_delete(puVar2);
    if ((code *)puVar5[1] != (code *)0x0) {
      (*(code *)puVar5[1])(uVar4);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004982dc  discord::voice::Connection::GetPacketStats =====

/* discord::voice::Connection::GetPacketStats(std::__Cr::function<void (discord::stats::Packet)>) */

void __thiscall discord::voice::Connection::GetPacketStats(Connection *this,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *local_68 [2];
  code *local_58;
  undefined **ppuStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)param_2[3];
  if (*(char *)(puVar4 + 2) == '\0') {
    uVar3 = *param_2;
    uVar6 = param_2[2];
    uVar5 = param_2[1];
    if (puVar4[1] != 0) {
      param_2[2] = FUN_0049f0fc;
      param_2[3] = &DAT_001f1910;
    }
    local_58 = FUN_0049f108;
    ppuStack_50 = &PTR_FUN_00d1e288;
    puVar2 = (undefined8 *)operator_new(0x28);
    *puVar2 = this;
    puVar2[1] = uVar3;
    puVar2[4] = puVar4;
    puVar2[3] = uVar6;
    puVar2[2] = uVar5;
    if (puVar4[1] != 0) {
      puVar4 = &DAT_001f1910;
    }
    local_68[0] = puVar2;
    FUN_004930c4(this,local_68,"GetPacketStats",0xe);
    if (*(code **)(puVar2[4] + 8) != (code *)0x0) {
      (**(code **)(puVar2[4] + 8))(puVar2[1]);
    }
    operator_delete(puVar2);
    if ((code *)puVar4[1] != (code *)0x0) {
      (*(code *)puVar4[1])(uVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004983e8  discord::voice::Connection::GetFrameOpStats =====

/* discord::voice::Connection::GetFrameOpStats(std::__Cr::function<void (discord::stats::FrameOp)>)
    */

void __thiscall discord::voice::Connection::GetFrameOpStats(Connection *this,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *local_68 [2];
  code *local_58;
  undefined **ppuStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)param_2[3];
  if (*(char *)(puVar4 + 2) == '\0') {
    uVar3 = *param_2;
    uVar6 = param_2[2];
    uVar5 = param_2[1];
    if (puVar4[1] != 0) {
      param_2[2] = FUN_0049f20c;
      param_2[3] = &DAT_001f1910;
    }
    local_58 = FUN_0049f218;
    ppuStack_50 = &PTR_FUN_00d1e2a8;
    puVar2 = (undefined8 *)operator_new(0x28);
    *puVar2 = this;
    puVar2[1] = uVar3;
    puVar2[4] = puVar4;
    puVar2[3] = uVar6;
    puVar2[2] = uVar5;
    if (puVar4[1] != 0) {
      puVar4 = &DAT_001f1910;
    }
    local_68[0] = puVar2;
    FUN_004930c4(this,local_68,"GetFrameOpStats",0xf);
    if (*(code **)(puVar2[4] + 8) != (code *)0x0) {
      (**(code **)(puVar2[4] + 8))(puVar2[1]);
    }
    operator_delete(puVar2);
    if ((code *)puVar4[1] != (code *)0x0) {
      (*(code *)puVar4[1])(uVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004984f4  FUN_004984f4 =====

/* WARNING: Removing unreachable block (ram,0x00498774) */
/* WARNING: Removing unreachable block (ram,0x00498778) */
/* WARNING: Removing unreachable block (ram,0x00498780) */
/* WARNING: Removing unreachable block (ram,0x00498788) */
/* WARNING: Removing unreachable block (ram,0x0049878c) */
/* WARNING: Removing unreachable block (ram,0x0049873c) */
/* WARNING: Removing unreachable block (ram,0x00498740) */
/* WARNING: Removing unreachable block (ram,0x00498748) */
/* WARNING: Removing unreachable block (ram,0x00498750) */
/* WARNING: Removing unreachable block (ram,0x00498754) */
/* WARNING: Removing unreachable block (ram,0x004987ac) */
/* WARNING: Removing unreachable block (ram,0x004987b0) */
/* WARNING: Removing unreachable block (ram,0x004987b8) */
/* WARNING: Removing unreachable block (ram,0x004987c0) */
/* WARNING: Removing unreachable block (ram,0x004987c4) */

void FUN_004984f4(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined7 local_a8;
  undefined4 uStack_a1;
  char cStack_9d;
  undefined4 uStack_9c;
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  lVar15 = *(long *)(param_1 + 0x30);
  if (lVar15 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    plVar10 = *(long **)(param_1 + 0x28);
    if (plVar10 != (long *)0x0) {
      plVar11 = plVar10 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = *plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar15 = *(long *)(param_1 + 0x30);
    }
    plVar11 = *(long **)(param_1 + 0x38);
    if (plVar11 != (long *)0x0) {
      plVar12 = plVar11 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *plVar12 = *plVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    plVar12 = *(long **)(param_1 + 0x48);
    if (plVar12 != (long *)0x0) {
      plVar13 = plVar12 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = *plVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar13 = *(long **)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (plVar13 != (long *)0x0) {
      plVar1 = plVar13 + 1;
      do {
        lVar9 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        FUN_005466cc(plVar13);
      }
    }
    plVar13 = *(long **)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (plVar13 != (long *)0x0) {
      plVar1 = plVar13 + 1;
      do {
        lVar9 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        FUN_005466cc(plVar13);
      }
    }
    lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 0x58);
    if (lVar9 != 0) {
      lVar14 = *(long *)(*(long *)(param_1 + 0x30) + 0x78);
      if (lVar14 == 0) {
        puVar8 = (undefined8 *)operator_new(0x38);
        puVar8[2] = plVar10;
        puVar8[3] = lVar15;
        puVar8[4] = plVar11;
        puVar8[5] = uVar3;
        *puVar8 = &PTR_FUN_00d1e300;
        puVar8[1] = uVar2;
        puVar8[6] = plVar12;
        FUN_00512cf8(lVar9,puVar8);
      }
      else {
        uVar7 = FUN_005ce36c();
        local_98 = CONCAT17(0xb,(undefined7)local_98);
        if ((&local_a8 < "Connection") && ("~Connection" < &cStack_9d)) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                     ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
        }
        cStack_9d = '\0';
        local_a8 = (undefined7)s__Connection_001b96e6._0_8_;
        uStack_a1._0_1_ = SUB81(s__Connection_001b96e6._0_8_,7);
        uStack_a1._1_3_ = 0x6e6f69;
        local_80 = FUN_0040e7ec;
        local_78 = &DAT_001f4e70;
        local_90 = lVar14;
        local_70 = uVar7;
        puVar8 = (undefined8 *)operator_new(0x78);
        puVar8[2] = plVar10;
        puVar8[3] = lVar15;
        puVar8[6] = plVar12;
        *puVar8 = &PTR_FUN_00d1e2d8;
        puVar8[1] = uVar2;
        puVar8[8] = CONCAT44(uStack_9c,CONCAT13(cStack_9d,uStack_a1._1_3_));
        puVar8[7] = CONCAT17((char)uStack_a1,local_a8);
        puVar8[0xe] = uVar7;
        puVar8[4] = plVar11;
        puVar8[5] = uVar3;
        puVar8[0xb] = uStack_88;
        puVar8[10] = local_90;
        puVar8[9] = local_98;
        local_a8 = 0;
        uStack_a1 = 0;
        cStack_9d = '\0';
        uStack_9c = 0;
        puVar8[0xc] = FUN_0040e7ec;
        puVar8[0xd] = &DAT_001f4e70;
        local_98 = 0;
        FUN_00512cf8(lVar9,puVar8);
        if (*(code **)(local_78 + 8) != (code *)0x0) {
          (**(code **)(local_78 + 8))(local_90);
        }
        if (local_98 < 0) {
          operator_delete((void *)CONCAT17((char)uStack_a1,local_a8));
        }
      }
      plVar12 = (long *)0x0;
      plVar11 = (long *)0x0;
      plVar10 = (long *)0x0;
    }
    plVar13 = *(long **)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (plVar13 != (long *)0x0) {
      plVar1 = plVar13 + 1;
      do {
        lVar15 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        FUN_005466cc(plVar13);
      }
    }
    if (plVar12 != (long *)0x0) {
      plVar13 = plVar12 + 1;
      do {
        lVar15 = *plVar13;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = lVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        FUN_005466cc(plVar12);
      }
    }
    if (plVar11 != (long *)0x0) {
      plVar12 = plVar11 + 1;
      do {
        lVar15 = *plVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *plVar12 = lVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        FUN_005466cc(plVar11);
      }
    }
    if (plVar10 != (long *)0x0) {
      plVar11 = plVar10 + 1;
      do {
        lVar15 = *plVar11;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = lVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        FUN_005466cc(plVar10);
      }
    }
  }
  plVar10 = *(long **)(param_1 + 0x48);
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10 + 1;
    do {
      lVar15 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_005466cc(plVar10);
    }
  }
  plVar10 = *(long **)(param_1 + 0x38);
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10 + 1;
    do {
      lVar15 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_005466cc(plVar10);
    }
  }
  plVar10 = *(long **)(param_1 + 0x28);
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10 + 1;
    do {
      lVar15 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_005466cc(plVar10);
    }
  }
  plVar10 = *(long **)(param_1 + 0x18);
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10 + 1;
    do {
      lVar15 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_005466cc(plVar10);
    }
  }
  if (*(long *)(param_1 + 8) != 0) {
    FUN_005466cc();
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00498a38  discord::voice::Connection::GetVideoSendStats =====

/* discord::voice::Connection::GetVideoSendStats(std::__Cr::function<void
   (discord::stats::VideoSend)>) */

void __thiscall discord::voice::Connection::GetVideoSendStats(Connection *this,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *local_68 [2];
  code *local_58;
  undefined **ppuStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)param_2[3];
  if (*(char *)(puVar4 + 2) == '\0') {
    uVar3 = *param_2;
    uVar6 = param_2[2];
    uVar5 = param_2[1];
    if (puVar4[1] != 0) {
      param_2[2] = FUN_0049f8dc;
      param_2[3] = &DAT_001f1910;
    }
    local_58 = FUN_0049f8e8;
    ppuStack_50 = &PTR_FUN_00d1e318;
    puVar2 = (undefined8 *)operator_new(0x28);
    *puVar2 = this;
    puVar2[1] = uVar3;
    puVar2[4] = puVar4;
    puVar2[3] = uVar6;
    puVar2[2] = uVar5;
    if (puVar4[1] != 0) {
      puVar4 = &DAT_001f1910;
    }
    local_68[0] = puVar2;
    FUN_004930c4(this,local_68,"GetVideoSendStats",0x11);
    if (*(code **)(puVar2[4] + 8) != (code *)0x0) {
      (**(code **)(puVar2[4] + 8))(puVar2[1]);
    }
    operator_delete(puVar2);
    if ((code *)puVar4[1] != (code *)0x0) {
      (*(code *)puVar4[1])(uVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00498b44  FUN_00498b44 =====

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16]
FUN_00498b44(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
            undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
            undefined8 *param_9)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  undefined8 ****__src;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined4 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  char cVar17;
  bool bVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 ***pppuVar23;
  void *pvVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  long *plVar29;
  undefined8 ****__dest;
  undefined8 uVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  long lVar33;
  long lVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  long *plVar37;
  long *plVar38;
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined4 local_340 [2];
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined2 local_320;
  undefined1 local_31e;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined1 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined1 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  code *local_298;
  undefined8 *puStack_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  code *local_270;
  undefined8 *puStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  code *local_250;
  undefined8 *puStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  code *local_230;
  undefined8 *puStack_228;
  undefined8 ***local_220;
  ulong uStack_218;
  undefined8 local_210;
  void *local_208;
  long *plStack_200;
  undefined4 local_1f8 [2];
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined2 local_1d8;
  undefined1 local_1d6;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  code *local_150;
  undefined8 *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  code *local_128;
  undefined8 *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  code *local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  code *local_e8;
  undefined8 *local_e0;
  undefined8 ***local_d8;
  ulong uStack_d0;
  ulong local_c8;
  void *local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  long local_70;
  
  local_b0 = (void *)CONCAT17(local_b0._7_1_,
                              CONCAT16(local_b0._6_1_,CONCAT24(local_b0._4_2_,(undefined4)local_b0))
                             );
  lVar19 = tpidr_el0;
  local_70 = *(long *)(lVar19 + 0x28);
  auVar40._0_8_ = operator_new(0x50);
  puVar28 = (undefined8 *)operator_new(0x28);
  puVar28[1] = 0;
  puVar28[2] = 0;
  puVar28[4] = 0;
  *puVar28 = &PTR_FUN_00d1dbb0;
  *(undefined8 *)((long)auVar40._0_8_ + 0x28) = 0;
  *(undefined8 *)((long)auVar40._0_8_ + 0x20) = 0;
  *(undefined8 *)((long)auVar40._0_8_ + 0x38) = 0;
  *(undefined8 *)((long)auVar40._0_8_ + 0x30) = 0;
  puVar28[3] = 0;
  *(undefined8 **)((long)auVar40._0_8_ + 0x10) = puVar28 + 3;
  *(undefined8 **)((long)auVar40._0_8_ + 0x18) = puVar28;
  *(undefined8 *)((long)auVar40._0_8_ + 0x48) = 0;
  *(undefined8 *)((long)auVar40._0_8_ + 0x40) = 0;
  plVar29 = (long *)operator_new(0x20);
  plVar29[3] = (long)auVar40._0_8_;
  *plVar29 = (long)&PTR_FUN_00d1e4d0;
  plVar38 = plVar29 + 1;
  *plVar38 = 0;
  plVar37 = plVar29 + 2;
  *plVar37 = 0;
  do {
    cVar17 = '\x01';
    bVar18 = (bool)ExclusiveMonitorPass(plVar38,0x10);
    if (bVar18) {
      *plVar38 = *plVar38 + 1;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  do {
    cVar17 = '\x01';
    bVar18 = (bool)ExclusiveMonitorPass(plVar37,0x10);
    if (bVar18) {
      *plVar37 = *plVar37 + 1;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  *(void **)auVar40._0_8_ = auVar40._0_8_;
  *(long **)((long)auVar40._0_8_ + 8) = plVar29;
  do {
    lVar33 = *plVar38;
    cVar17 = '\x01';
    bVar18 = (bool)ExclusiveMonitorPass(plVar38,0x10);
    if (bVar18) {
      *plVar38 = lVar33 + -1;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  if (lVar33 == 0) {
    (**(code **)(*plVar29 + 0x10))(plVar29);
    FUN_005466cc(plVar29);
  }
  plVar37 = *(long **)((long)auVar40._0_8_ + 0x38);
  *(undefined8 *)((long)auVar40._0_8_ + 0x30) = param_1;
  *(undefined8 *)((long)auVar40._0_8_ + 0x38) = param_2;
  if (plVar37 != (long *)0x0) {
    plVar1 = plVar37 + 1;
    do {
      lVar33 = *plVar1;
      cVar17 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar18) {
        *plVar1 = lVar33 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar33 == 0) {
      (**(code **)(*plVar37 + 0x10))(plVar37);
      FUN_005466cc(plVar37);
    }
  }
  uStack_330 = *(undefined8 *)(param_4 + 4);
  local_338 = *(undefined8 *)(param_4 + 2);
  *(undefined8 *)(param_4 + 2) = 0;
  *(undefined8 *)(param_4 + 4) = 0;
  local_328 = *(undefined8 *)(param_4 + 6);
  *(undefined8 *)(param_4 + 6) = 0;
  local_320 = *(undefined2 *)(param_4 + 8);
  local_31e = *(undefined1 *)((long)param_4 + 0x22);
  uStack_2d0 = *(undefined8 *)(param_4 + 0x1c);
  local_2d8 = *(undefined8 *)(param_4 + 0x1a);
  uVar39 = *(undefined8 *)(param_4 + 10);
  uVar8 = *(undefined8 *)(param_4 + 0xc);
  uVar35 = *(undefined8 *)(param_4 + 0xe);
  *(undefined8 *)(param_4 + 0xc) = 0;
  *(undefined8 *)(param_4 + 0xe) = 0;
  uVar15 = *(undefined1 *)(param_4 + 0x10);
  *(undefined8 *)(param_4 + 10) = 0;
  uVar3 = *(undefined8 *)(param_4 + 0x12);
  uVar9 = *(undefined8 *)(param_4 + 0x14);
  *(undefined1 *)(param_4 + 0x10) = 0;
  uVar36 = *(undefined8 *)(param_4 + 0x16);
  *(undefined8 *)(param_4 + 0x14) = 0;
  *(undefined8 *)(param_4 + 0x16) = 0;
  *(undefined8 *)(param_4 + 0x12) = 0;
  uVar16 = *(undefined1 *)(param_4 + 0x18);
  *(undefined1 *)(param_4 + 0x18) = 0;
  local_2c8 = *(undefined8 *)(param_4 + 0x1e);
  uStack_2b8 = *(undefined8 *)(param_4 + 0x22);
  local_2c0 = *(undefined8 *)(param_4 + 0x20);
  *(undefined8 *)(param_4 + 0x1a) = 0;
  *(undefined8 *)(param_4 + 0x1c) = 0;
  local_2b0 = *(undefined8 *)(param_4 + 0x24);
  *(undefined8 *)(param_4 + 0x22) = 0;
  *(undefined8 *)(param_4 + 0x24) = 0;
  *(undefined8 *)(param_4 + 0x1e) = 0;
  *(undefined8 *)(param_4 + 0x20) = 0;
  pcVar4 = (code *)param_5[2];
  puVar28 = (undefined8 *)param_5[3];
  uStack_2a0 = param_5[1];
  local_2a8 = *param_5;
  uVar14 = *param_4;
  if (puVar28[1] != 0) {
    param_5[2] = FUN_0040ea94;
    param_5[3] = &DAT_001f1910;
  }
  uVar32 = *param_6;
  *param_6 = 0;
  pcVar5 = (code *)param_7[2];
  puVar10 = (undefined8 *)param_7[3];
  uStack_278 = param_7[1];
  local_280 = *param_7;
  if (puVar10[1] != 0) {
    param_7[2] = FUN_0040eaa0;
    param_7[3] = &DAT_001f1910;
  }
  pcVar6 = (code *)param_8[2];
  puVar11 = (undefined8 *)param_8[3];
  uStack_258 = param_8[1];
  local_260 = *param_8;
  if (puVar11[1] != 0) {
    param_8[2] = FUN_0040eaac;
    param_8[3] = &DAT_001f1910;
  }
  pcVar7 = (code *)param_9[2];
  puVar12 = (undefined8 *)param_9[3];
  uStack_238 = param_9[1];
  local_240 = *param_9;
  if (puVar12[1] != 0) {
    param_9[2] = FUN_0040eab8;
    param_9[3] = &DAT_001f1910;
  }
  __dest = &local_220;
  local_340[0] = uVar14;
  local_318 = uVar39;
  local_310 = uVar8;
  local_308 = uVar35;
  local_300 = uVar15;
  local_2f8 = uVar3;
  local_2f0 = uVar9;
  local_2e8 = uVar36;
  local_2e0 = uVar16;
  local_298 = pcVar4;
  puStack_290 = puVar28;
  local_288 = uVar32;
  local_270 = pcVar5;
  puStack_268 = puVar10;
  local_250 = pcVar6;
  puStack_248 = puVar11;
  local_230 = pcVar7;
  puStack_228 = puVar12;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    __src = (undefined8 ****)*param_3;
    uVar13 = param_3[1];
    if (uVar13 < 0x17) {
      local_210 = CONCAT17((char)uVar13,(undefined7)local_210);
    }
    else {
      if (0x7fffffffffffffef < uVar13) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar2 = (uVar13 | 0xf) + 1;
      __dest = (undefined8 ****)operator_new(uVar2);
      local_210 = uVar2 | 0x8000000000000000;
      local_220 = __dest;
      uStack_218 = uVar13;
    }
    if ((__dest <= __src) && (__src < (undefined8 ****)((long)__dest + uVar13 + 1)))
    goto LAB_00499604;
    memmove(__dest,__src,uVar13 + 1);
  }
  else {
    uStack_218 = param_3[1];
    local_220 = (undefined8 ***)*param_3;
    local_210 = param_3[2];
  }
  do {
    cVar17 = '\x01';
    bVar18 = (bool)ExclusiveMonitorPass(plVar38,0x10);
    if (bVar18) {
      *plVar38 = *plVar38 + 1;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  lVar33 = *(long *)(*(long *)((long)auVar40._0_8_ + 0x30) + 0x58);
  local_208 = auVar40._0_8_;
  plStack_200 = plVar29;
  if (lVar33 != 0) {
    lVar34 = *(long *)(*(long *)((long)auVar40._0_8_ + 0x30) + 0x78);
    if (lVar34 == 0) {
      puVar31 = (undefined8 *)operator_new(0x150);
      uVar2 = local_210;
      uVar13 = uStack_218;
      pppuVar23 = local_220;
      uVar22 = local_2b0;
      uVar21 = local_2c8;
      uVar20 = uStack_330;
      uVar30 = local_338;
      local_318 = 0;
      local_310 = 0;
      local_338 = 0;
      uStack_330 = 0;
      *puVar31 = &PTR_FUN_00d1e390;
      *(undefined4 *)(puVar31 + 1) = uVar14;
      puVar31[3] = uVar20;
      puVar31[2] = uVar30;
      puVar31[4] = local_328;
      local_328 = 0;
      puVar31[0xf] = uStack_2d0;
      puVar31[0xe] = local_2d8;
      local_308 = 0;
      *(undefined2 *)(puVar31 + 5) = local_320;
      *(undefined1 *)((long)puVar31 + 0x2a) = local_31e;
      puVar31[0x12] = uStack_2b8;
      puVar31[0x11] = local_2c0;
      puVar31[6] = uVar39;
      puVar31[7] = uVar8;
      local_300 = 0;
      local_2f0 = 0;
      local_2e8 = 0;
      puVar31[8] = uVar35;
      local_2f8 = 0;
      local_2e0 = 0;
      *(undefined1 *)(puVar31 + 9) = uVar15;
      local_2d8 = 0;
      uStack_2d0 = 0;
      local_2c0 = 0;
      uStack_2b8 = 0;
      puVar31[10] = uVar3;
      puVar31[0xb] = uVar9;
      puVar31[0xc] = uVar36;
      *(undefined1 *)(puVar31 + 0xd) = uVar16;
      local_2c8 = 0;
      puVar31[0x10] = uVar21;
      local_2b0 = 0;
      puVar31[0x13] = uVar22;
      puVar31[0x15] = uStack_2a0;
      puVar31[0x14] = local_2a8;
      puVar31[0x16] = pcVar4;
      puVar31[0x17] = puVar28;
      if (puVar28[1] != 0) {
        local_298 = FUN_0040ea94;
        puStack_290 = &DAT_001f1910;
      }
      local_288 = 0;
      puVar31[0x1a] = uStack_278;
      puVar31[0x19] = local_280;
      puVar31[0x18] = uVar32;
      puVar31[0x1b] = pcVar5;
      puVar31[0x1c] = puVar10;
      if (puVar10[1] != 0) {
        local_270 = FUN_0040eaa0;
        puStack_268 = &DAT_001f1910;
      }
      puVar31[0x1e] = uStack_258;
      puVar31[0x1d] = local_260;
      puVar31[0x1f] = pcVar6;
      puVar31[0x20] = puVar11;
      if (puVar11[1] != 0) {
        local_250 = FUN_0040eaac;
        puStack_248 = &DAT_001f1910;
      }
      uVar39 = *param_9;
      puVar31[0x22] = param_9[1];
      puVar31[0x21] = uVar39;
      puVar31[0x23] = pcVar7;
      puVar31[0x24] = puVar12;
      if (puVar12[1] != 0) {
        local_230 = FUN_0040eab8;
        puStack_228 = &DAT_001f1910;
      }
      uStack_218 = 0;
      local_210 = 0;
      local_220 = (undefined8 ****)0x0;
      puVar31[0x26] = uVar13;
      puVar31[0x25] = pppuVar23;
      puVar31[0x27] = uVar2;
      puVar31[0x28] = auVar40._0_8_;
      puVar31[0x29] = plVar29;
      local_208 = (void *)0x0;
      plStack_200 = (long *)0x0;
      FUN_00512cf8(lVar33);
    }
    else {
      uVar30 = FUN_005ce36c();
      plVar37 = plStack_200;
      pvVar24 = local_208;
      local_c8 = local_210;
      uStack_d0 = uStack_218;
      local_d8 = local_220;
      puVar12 = puStack_228;
      pcVar7 = local_230;
      puVar11 = puStack_248;
      pcVar6 = local_250;
      puVar10 = puStack_268;
      pcVar5 = local_270;
      uVar32 = local_288;
      puVar28 = puStack_290;
      pcVar4 = local_298;
      local_168 = local_2b0;
      uStack_170 = uStack_2b8;
      local_178 = local_2c0;
      uStack_188 = uStack_2d0;
      local_190 = local_2d8;
      uVar16 = local_2e0;
      uVar36 = local_2e8;
      uVar35 = local_2f0;
      uVar9 = local_2f8;
      uVar15 = local_300;
      uVar8 = local_308;
      uVar3 = local_310;
      uVar39 = local_318;
      local_1e0 = local_328;
      uStack_1e8 = uStack_330;
      local_1f0 = local_338;
      uVar14 = local_340[0];
      local_338 = 0;
      uStack_330 = 0;
      local_328 = 0;
      local_1d8 = local_320;
      local_2d8 = 0;
      uStack_2d0 = 0;
      local_180 = local_2c8;
      local_2c8 = 0;
      local_2c0 = 0;
      uStack_2b8 = 0;
      local_1d6 = local_31e;
      local_2b0 = 0;
      local_1d0 = local_318;
      local_1c8 = local_310;
      uStack_158 = uStack_2a0;
      local_160 = local_2a8;
      local_1c0 = local_308;
      local_310 = 0;
      local_308 = 0;
      local_318 = 0;
      local_1b8 = local_300;
      local_300 = 0;
      local_1b0 = local_2f8;
      local_1a8 = local_2f0;
      local_1a0 = local_2e8;
      local_2f0 = 0;
      local_2e8 = 0;
      local_2f8 = 0;
      local_198 = local_2e0;
      local_2e0 = 0;
      local_150 = local_298;
      local_148 = puStack_290;
      local_1f8[0] = local_340[0];
      if (puStack_290[1] != 0) {
        local_298 = FUN_0040ea94;
        puStack_290 = &DAT_001f1910;
      }
      uStack_130 = uStack_278;
      local_138 = local_280;
      local_288 = 0;
      local_128 = local_270;
      local_140 = uVar32;
      local_120 = puStack_268;
      if (puStack_268[1] != 0) {
        local_270 = FUN_0040eaa0;
        puStack_268 = &DAT_001f1910;
      }
      uStack_110 = uStack_258;
      local_118 = local_260;
      local_108 = local_250;
      local_100 = puStack_248;
      if (puStack_248[1] != 0) {
        local_250 = FUN_0040eaac;
        puStack_248 = &DAT_001f1910;
      }
      local_e8 = local_230;
      uStack_f0 = uStack_238;
      local_f8 = local_240;
      local_e0 = puStack_228;
      if (puStack_228[1] != 0) {
        local_230 = FUN_0040eab8;
        puStack_228 = &DAT_001f1910;
      }
      local_220 = (undefined8 ****)0x0;
      uStack_218 = 0;
      local_210 = 0;
      local_208 = (void *)0x0;
      plStack_200 = (long *)0x0;
      local_a0 = CONCAT17(6,(undefined7)local_a0);
      local_c0 = pvVar24;
      local_b8 = plVar37;
      if ((&local_b0 < "reate") && ("Create" < (char *)((long)&local_b0 + 6U))) {
LAB_00499604:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      local_88 = FUN_0040e7ec;
      local_b0 = (void *)CONCAT17(local_b0._7_1_,0x657461657243);
      local_80 = &DAT_001f4e70;
      local_98 = lVar34;
      local_78 = uVar30;
      puVar31 = (undefined8 *)operator_new(400);
      lVar34 = local_a0;
      uVar27 = local_b0;
      uVar2 = local_c8;
      uVar13 = uStack_d0;
      pppuVar23 = local_d8;
      uVar26 = local_168;
      uVar25 = local_180;
      uVar22 = local_1e0;
      uVar21 = uStack_1e8;
      uVar20 = local_1f0;
      *(undefined4 *)(puVar31 + 1) = uVar14;
      local_1f0 = 0;
      uStack_1e8 = 0;
      *puVar31 = &PTR_FUN_00d1e348;
      local_1e0 = 0;
      puVar31[3] = uVar21;
      puVar31[2] = uVar20;
      puVar31[4] = uVar22;
      puVar31[6] = uVar39;
      puVar31[7] = uVar3;
      puVar31[0xf] = uStack_188;
      puVar31[0xe] = local_190;
      *(undefined2 *)(puVar31 + 5) = local_320;
      *(undefined1 *)((long)puVar31 + 0x2a) = local_31e;
      puVar31[0x12] = uStack_170;
      puVar31[0x11] = local_178;
      *(undefined1 *)(puVar31 + 9) = uVar15;
      puVar31[8] = uVar8;
      local_1d0 = 0;
      local_1c8 = 0;
      local_1c0 = 0;
      puVar31[10] = uVar9;
      puVar31[0xb] = uVar35;
      local_1b8 = 0;
      local_1a8 = 0;
      local_1a0 = 0;
      puVar31[0xc] = uVar36;
      local_1b0 = 0;
      local_198 = 0;
      *(undefined1 *)(puVar31 + 0xd) = uVar16;
      local_190 = 0;
      uStack_188 = 0;
      local_180 = 0;
      puVar31[0x10] = uVar25;
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      puVar31[0x13] = uVar26;
      puVar31[0x15] = uStack_2a0;
      puVar31[0x14] = local_2a8;
      puVar31[0x16] = pcVar4;
      puVar31[0x17] = puVar28;
      if (puVar28[1] != 0) {
        local_148 = &DAT_001f1910;
        local_150 = FUN_0040ea94;
      }
      local_140 = 0;
      puVar31[0x1a] = uStack_130;
      puVar31[0x19] = local_138;
      puVar31[0x18] = uVar32;
      puVar31[0x1b] = pcVar5;
      puVar31[0x1c] = puVar10;
      if (puVar10[1] != 0) {
        local_120 = &DAT_001f1910;
        local_128 = FUN_0040eaa0;
      }
      puVar31[0x1f] = pcVar6;
      puVar31[0x20] = puVar11;
      puVar31[0x1e] = uStack_110;
      puVar31[0x1d] = local_118;
      if (puVar11[1] != 0) {
        local_100 = &DAT_001f1910;
        local_108 = FUN_0040eaac;
      }
      puVar31[0x22] = uStack_f0;
      puVar31[0x21] = local_f8;
      puVar31[0x23] = pcVar7;
      puVar31[0x24] = puVar12;
      if (puVar12[1] != 0) {
        local_e0 = &DAT_001f1910;
        local_e8 = FUN_0040eab8;
      }
      local_d8 = (undefined8 ****)0x0;
      uStack_d0 = 0;
      local_c8 = 0;
      local_c0 = (void *)0x0;
      local_b8 = (long *)0x0;
      puVar31[0x27] = uVar2;
      puVar31[0x28] = pvVar24;
      puVar31[0x26] = uVar13;
      puVar31[0x25] = pppuVar23;
      local_b0 = (void *)0x0;
      puVar31[0x29] = plVar37;
      puVar31[0x2b] = uStack_a8;
      puVar31[0x2a] = uVar27;
      uStack_a8 = 0;
      local_a0 = 0;
      puVar31[0x2c] = lVar34;
      puVar31[0x2e] = uStack_90;
      puVar31[0x2d] = local_98;
      puVar31[0x2f] = FUN_0040e7ec;
      puVar31[0x30] = &DAT_001f4e70;
      puVar31[0x31] = uVar30;
      FUN_00512cf8(lVar33);
      if (*(code **)(local_80 + 8) != (code *)0x0) {
        (**(code **)(local_80 + 8))(local_98);
      }
      if (local_a0 < 0) {
        operator_delete(local_b0);
      }
      FUN_00499634(local_1f8);
    }
  }
  FUN_00499634(local_340);
  if (*(long *)(lVar19 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar40._8_8_ = plVar29;
  return auVar40;
}


// ===== 00499634  FUN_00499634 =====

void FUN_00499634(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0x140);
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
      cVar2 = *(char *)(param_1 + 0x137);
      goto joined_r0x00499668;
    }
  }
  cVar2 = *(char *)(param_1 + 0x137);
joined_r0x00499668:
  if (cVar2 < '\0') {
    operator_delete(*(void **)(param_1 + 0x120));
  }
  pcVar4 = *(code **)(*(long *)(param_1 + 0x118) + 8);
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(*(undefined8 *)(param_1 + 0x100));
  }
  pcVar4 = *(code **)(*(long *)(param_1 + 0xf8) + 8);
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(*(undefined8 *)(param_1 + 0xe0));
  }
  pcVar4 = *(code **)(*(long *)(param_1 + 0xd8) + 8);
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(*(undefined8 *)(param_1 + 0xc0));
  }
  plVar6 = *(long **)(param_1 + 0xb8);
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
  pcVar4 = *(code **)(*(long *)(param_1 + 0xb0) + 8);
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(*(undefined8 *)(param_1 + 0x98));
  }
  FUN_004037cc(param_1);
  return;
}


// ===== 00499724  FUN_00499724 =====

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16]
FUN_00499724(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *****__src;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  code *pcVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *****__dest;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  undefined1 auVar19 [16];
  long *local_150;
  void *pvStack_148;
  long *local_140;
  undefined8 ****local_138;
  ulong uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  code *local_110;
  undefined8 *local_108;
  long *local_100;
  void *local_f8;
  long *local_f0;
  undefined8 ****local_e8;
  ulong uStack_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  code *local_c0;
  undefined8 *local_b8;
  undefined5 local_b0;
  undefined3 uStack_ab;
  char acStack_a8 [6];
  undefined2 uStack_a2;
  undefined8 local_a0;
  long local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  auVar19._0_8_ = operator_new(0x50);
  puVar11 = (undefined8 *)operator_new(0x28);
  puVar11[1] = 0;
  puVar11[2] = 0;
  puVar11[4] = 0;
  *puVar11 = &PTR_FUN_00d1dbb0;
  *(undefined8 *)((long)auVar19._0_8_ + 0x28) = 0;
  *(undefined8 *)((long)auVar19._0_8_ + 0x20) = 0;
  *(undefined8 *)((long)auVar19._0_8_ + 0x38) = 0;
  *(undefined8 *)((long)auVar19._0_8_ + 0x30) = 0;
  puVar11[3] = 0;
  *(undefined8 **)((long)auVar19._0_8_ + 0x10) = puVar11 + 3;
  *(undefined8 **)((long)auVar19._0_8_ + 0x18) = puVar11;
  *(undefined8 *)((long)auVar19._0_8_ + 0x48) = 0;
  *(undefined8 *)((long)auVar19._0_8_ + 0x40) = 0;
  plVar12 = (long *)operator_new(0x20);
  plVar12[3] = (long)auVar19._0_8_;
  *plVar12 = (long)&PTR_FUN_00d1e4d0;
  plVar18 = plVar12 + 1;
  *plVar18 = 0;
  plVar17 = plVar12 + 2;
  *plVar17 = 0;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar5) {
      *plVar18 = *plVar18 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = *plVar17 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(void **)auVar19._0_8_ = auVar19._0_8_;
  *(long **)((long)auVar19._0_8_ + 8) = plVar12;
  do {
    lVar15 = *plVar18;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar5) {
      *plVar18 = lVar15 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar15 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_005466cc(plVar12);
  }
  plVar17 = *(long **)((long)auVar19._0_8_ + 0x38);
  *(undefined8 *)((long)auVar19._0_8_ + 0x30) = param_1;
  *(undefined8 *)((long)auVar19._0_8_ + 0x38) = param_2;
  if (plVar17 != (long *)0x0) {
    plVar1 = plVar17 + 1;
    do {
      lVar15 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      FUN_005466cc(plVar17);
    }
  }
  local_150 = (long *)*param_5;
  puVar11 = (undefined8 *)((ulong)&local_150 | 8);
  *param_5 = 0;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar5) {
      *plVar18 = *plVar18 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  __dest = &local_138;
  pvStack_148 = auVar19._0_8_;
  local_140 = plVar12;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    __src = (undefined8 *****)*param_3;
    uVar3 = param_3[1];
    if (uVar3 < 0x17) {
      local_128 = CONCAT17((char)uVar3,(undefined7)local_128);
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar2 = (uVar3 | 0xf) + 1;
      __dest = (undefined8 *****)operator_new(uVar2);
      local_128 = uVar2 | 0x8000000000000000;
      local_138 = __dest;
      uStack_130 = uVar3;
    }
    if ((__dest <= __src) && (__src < (undefined8 *****)((long)__dest + uVar3 + 1)))
    goto LAB_00499cc8;
    memmove(__dest,__src,uVar3 + 1);
  }
  else {
    uStack_130 = param_3[1];
    local_138 = (undefined8 ****)*param_3;
    local_128 = param_3[2];
  }
  local_110 = (code *)param_4[2];
  local_108 = (undefined8 *)param_4[3];
  uStack_118 = param_4[1];
  local_120 = *param_4;
  if ((code *)*local_108 != (code *)0x0) {
    local_120 = (*(code *)*local_108)(*param_4);
  }
  lVar15 = *(long *)(*(long *)((long)auVar19._0_8_ + 0x30) + 0x58);
  if (lVar15 != 0) {
    lVar16 = *(long *)(*(long *)((long)auVar19._0_8_ + 0x30) + 0x78);
    if (lVar16 == 0) {
      puVar14 = (undefined8 *)operator_new(0x58);
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar14[3] = local_140;
      puVar14[2] = pvStack_148;
      puVar14[1] = local_150;
      *puVar14 = &PTR_FUN_00d1e3e0;
      puVar14[6] = local_128;
      puVar14[5] = uStack_130;
      puVar14[4] = local_138;
      local_138 = (undefined8 *****)0x0;
      uStack_130 = 0;
      local_128 = 0;
      local_150 = (long *)0x0;
      puVar14[8] = uStack_118;
      puVar14[7] = local_120;
      puVar14[9] = local_110;
      puVar14[10] = local_108;
      if (local_108[1] != 0) {
        local_110 = FUN_0040ea94;
        local_108 = &DAT_001f1910;
      }
      FUN_00512cf8(lVar15,puVar14);
    }
    else {
      uVar13 = FUN_005ce36c();
      puVar14 = local_108;
      pcVar10 = local_110;
      uStack_e0 = uStack_130;
      local_e8 = local_138;
      plVar18 = local_140;
      pvVar9 = pvStack_148;
      plVar17 = local_150;
      local_138 = (undefined8 *****)0x0;
      uStack_130 = 0;
      local_100 = local_150;
      local_f8 = pvStack_148;
      *puVar11 = 0;
      puVar11[1] = 0;
      local_f0 = local_140;
      local_d8 = local_128;
      local_128 = 0;
      uStack_c8 = uStack_118;
      local_d0 = local_120;
      local_c0 = local_110;
      local_b8 = local_108;
      local_150 = (long *)0x0;
      if (local_108[1] != 0) {
        local_110 = FUN_0040ea94;
        local_108 = &DAT_001f1910;
      }
      local_a0 = CONCAT17(0xd,(undefined7)local_a0);
      if ((&local_b0 < "reateFromLog") && ("CreateFromLog" < acStack_a8 + 5)) {
LAB_00499cc8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      local_b0._0_1_ = s_CreateFromLog_001adcf1[0];
      local_b0._1_1_ = s_CreateFromLog_001adcf1[1];
      local_b0._2_1_ = s_CreateFromLog_001adcf1[2];
      local_b0._3_1_ = s_CreateFromLog_001adcf1[3];
      local_b0._4_1_ = s_CreateFromLog_001adcf1[4];
      uStack_ab._0_1_ = s_CreateFromLog_001adcf1[5];
      uStack_ab._1_1_ = s_CreateFromLog_001adcf1[6];
      uStack_ab._2_1_ = s_CreateFromLog_001adcf1[7];
      acStack_a8[0] = s_CreateFromLog_001adcf1[8];
      acStack_a8[1] = s_CreateFromLog_001adcf1[9];
      acStack_a8[2] = s_CreateFromLog_001adcf1[10];
      acStack_a8[3] = s_CreateFromLog_001adcf1[0xb];
      acStack_a8[4] = s_CreateFromLog_001adcf1[0xc];
      acStack_a8[5] = 0;
      local_88 = FUN_0040e7ec;
      local_80 = &DAT_001f4e70;
      local_98 = lVar16;
      local_78 = uVar13;
      puVar11 = (undefined8 *)operator_new(0x98);
      uVar3 = local_d8;
      puVar11[2] = pvVar9;
      puVar11[3] = plVar18;
      local_f8 = (void *)0x0;
      local_f0 = (long *)0x0;
      *puVar11 = &PTR_FUN_00d1e3b8;
      puVar11[1] = plVar17;
      puVar11[5] = uStack_e0;
      puVar11[4] = local_e8;
      uStack_e0 = 0;
      local_d8 = 0;
      puVar11[6] = uVar3;
      local_e8 = (undefined8 *****)0x0;
      puVar11[9] = pcVar10;
      puVar11[10] = puVar14;
      local_100 = (long *)0x0;
      puVar11[8] = uStack_118;
      puVar11[7] = local_120;
      if (puVar14[1] != 0) {
        local_c0 = FUN_0040ea94;
        local_b8 = &DAT_001f1910;
      }
      uVar8 = CONCAT26(uStack_a2,CONCAT15(acStack_a8[5],acStack_a8._0_5_));
      uVar7 = CONCAT35(uStack_ab,local_b0);
      puVar11[0xd] = local_a0;
      acStack_a8[0] = '\0';
      acStack_a8[1] = '\0';
      acStack_a8[2] = '\0';
      acStack_a8[3] = '\0';
      acStack_a8[4] = '\0';
      acStack_a8[5] = 0;
      uStack_a2 = 0;
      local_a0 = 0;
      local_b0 = 0;
      uStack_ab = 0;
      puVar11[0xc] = uVar8;
      puVar11[0xb] = uVar7;
      puVar11[0xf] = uStack_90;
      puVar11[0xe] = local_98;
      puVar11[0x10] = FUN_0040e7ec;
      puVar11[0x11] = &DAT_001f4e70;
      puVar11[0x12] = uVar13;
      FUN_00512cf8(lVar15);
      if (*(code **)(local_80 + 8) != (code *)0x0) {
        (**(code **)(local_80 + 8))(local_98);
      }
      if (local_a0 < 0) {
        operator_delete((void *)CONCAT35(uStack_ab,local_b0));
      }
      if ((code *)local_b8[1] != (code *)0x0) {
        (*(code *)local_b8[1])(local_d0);
      }
      if ((long)local_d8 < 0) {
        operator_delete(local_e8);
      }
      plVar17 = local_f0;
      if (local_f0 != (long *)0x0) {
        plVar18 = local_f0 + 1;
        do {
          lVar15 = *plVar18;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = lVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*local_f0 + 0x10))(local_f0);
          FUN_005466cc(plVar17);
        }
      }
      if (local_100 != (long *)0x0) {
        plVar17 = local_100 + 1;
        do {
          lVar15 = *plVar17;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = lVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*local_100 + 0x10))();
        }
      }
    }
  }
  if ((code *)local_108[1] != (code *)0x0) {
    (*(code *)local_108[1])(local_120);
  }
  if ((long)local_128 < 0) {
    operator_delete(local_138);
  }
  plVar17 = local_140;
  if (local_140 != (long *)0x0) {
    plVar18 = local_140 + 1;
    do {
      lVar15 = *plVar18;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*local_140 + 0x10))(local_140);
      FUN_005466cc(plVar17);
    }
  }
  if (local_150 != (long *)0x0) {
    plVar17 = local_150 + 1;
    do {
      lVar15 = *plVar17;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*local_150 + 0x10))();
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_70) {
    auVar19._8_8_ = plVar12;
    return auVar19;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00499cf8  discord::voice::Connection::StartReplay =====

/* discord::voice::Connection::StartReplay() */

void __thiscall discord::voice::Connection::StartReplay(Connection *this)

{
  long lVar1;
  Connection *local_48 [2];
  code *local_38;
  undefined *puStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_004a1248;
  puStack_30 = &DAT_001f6f58;
  local_48[0] = this;
  FUN_004930c4(this,local_48,"StartReplay",0xb);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00499d64  discord::voice::Connection::StartSamplesLocalPlayback =====

/* WARNING: Removing unreachable block (ram,0x00499f50) */
/* WARNING: Removing unreachable block (ram,0x00499f60) */
/* WARNING: Removing unreachable block (ram,0x00499f74) */
/* WARNING: Removing unreachable block (ram,0x00499f7c) */
/* WARNING: Removing unreachable block (ram,0x00499f68) */
/* WARNING: Removing unreachable block (ram,0x00499f88) */
/* WARNING: Removing unreachable block (ram,0x00499f8c) */
/* discord::voice::Connection::StartSamplesLocalPlayback(std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> >, int, float,
   std::__Cr::vector<std::__Cr::vector<float, std::__Cr::allocator<float> >,
   std::__Cr::allocator<std::__Cr::vector<float, std::__Cr::allocator<float> > > >,
   std::__Cr::function<void (int, std::__Cr::basic_string<char, std::__Cr::char_traits<char>,
   std::__Cr::allocator<char> >)>) */

void __thiscall
discord::voice::Connection::StartSamplesLocalPlayback
          (undefined4 param_1,Connection *this,undefined8 *param_3,undefined4 param_4,
          undefined8 *param_5,undefined8 *param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 ****__src;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 ***pppuVar7;
  undefined8 ****__dest;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *local_c8;
  undefined8 ***local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 *local_a0 [2];
  code *local_90;
  undefined **ppuStack_88;
  long local_80;
  
  lVar6 = tpidr_el0;
  local_80 = *(long *)(lVar6 + 0x28);
  uVar9 = *param_5;
  uVar2 = param_5[1];
  uVar4 = param_5[2];
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  uVar3 = param_6[2];
  local_c8 = (undefined8 *)param_6[3];
  uVar10 = *param_6;
  if (local_c8[1] != 0) {
    param_6[2] = FUN_00419a50;
    param_6[3] = &DAT_001f1910;
  }
  __dest = &local_c0;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    __src = (undefined8 ****)*param_3;
    uVar5 = param_3[1];
    if (uVar5 < 0x17) {
      local_b0 = CONCAT17((char)uVar5,(undefined7)local_b0);
    }
    else {
      if (0x7fffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar5 | 0xf) + 1;
      __dest = (undefined8 ****)operator_new(uVar1);
      local_b0 = uVar1 | 0x8000000000000000;
      local_c0 = __dest;
      uStack_b8 = uVar5;
    }
    if ((__dest <= __src) && (__src < (undefined8 ****)((long)__dest + uVar5 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar5 + 1);
  }
  else {
    uStack_b8 = param_3[1];
    local_c0 = (undefined8 ***)*param_3;
    local_b0 = param_3[2];
  }
  local_90 = FUN_004a1254;
  ppuStack_88 = &PTR_FUN_00d1e3f8;
  local_a8 = param_4;
  uStack_a4 = param_1;
  puVar8 = (undefined8 *)operator_new(0x60);
  uVar1 = local_b0;
  uVar5 = uStack_b8;
  pppuVar7 = local_c0;
  uVar12 = param_6[1];
  uVar11 = *param_6;
  *puVar8 = this;
  puVar8[1] = uVar9;
  puVar8[2] = uVar2;
  puVar8[3] = uVar4;
  puVar8[5] = uVar12;
  puVar8[4] = uVar11;
  puVar8[6] = uVar3;
  puVar8[7] = local_c8;
  if (local_c8[1] != 0) {
    local_c8 = &DAT_001f1910;
  }
  local_c0 = (undefined8 ***)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  puVar8[9] = uVar5;
  puVar8[8] = pppuVar7;
  puVar8[10] = uVar1;
  puVar8[0xb] = CONCAT44(uStack_a4,local_a8);
  local_a0[0] = puVar8;
  FUN_004930c4(this,local_a0,"StartSamplesLocalPlayback",0x19);
  FUN_004a1560(puVar8);
  if ((long)local_b0 < 0) {
    operator_delete(local_c0);
  }
  if ((code *)local_c8[1] != (code *)0x0) {
    (*(code *)local_c8[1])(uVar10);
  }
  if (*(long *)(lVar6 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00499ffc  discord::voice::Connection::StopSamplesLocalPlayback =====

/* discord::voice::Connection::StopSamplesLocalPlayback(std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> >) */

void __thiscall
discord::voice::Connection::StopSamplesLocalPlayback(Connection *this,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 ***__src;
  ulong uVar2;
  long lVar3;
  undefined8 ***__dest;
  undefined8 *puVar4;
  undefined8 **local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 *local_68 [2];
  code *local_58;
  undefined **ppuStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  __dest = &local_80;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src = (undefined8 ***)*param_2;
    uVar2 = param_2[1];
    if (uVar2 < 0x17) {
      local_70 = CONCAT17((char)uVar2,(undefined7)local_70);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 ***)operator_new(uVar1);
      local_70 = uVar1 | 0x8000000000000000;
      local_80 = __dest;
      uStack_78 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined8 ***)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uStack_78 = param_2[1];
    local_80 = (undefined8 **)*param_2;
    local_70 = param_2[2];
  }
  local_58 = FUN_004a15f8;
  ppuStack_50 = &PTR_FUN_00d1e418;
  puVar4 = (undefined8 *)operator_new(0x20);
  *puVar4 = this;
  puVar4[2] = uStack_78;
  puVar4[1] = local_80;
  puVar4[3] = local_70;
  local_80 = (undefined8 **)0x0;
  uStack_78 = 0;
  local_70 = 0;
  local_68[0] = puVar4;
  FUN_004930c4(this,local_68,"StopSamplesLocalPlayback",0x18);
  if (*(char *)((long)puVar4 + 0x1f) < '\0') {
    operator_delete((void *)puVar4[1]);
  }
  operator_delete(puVar4);
  if ((long)local_70 < 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049a188  discord::voice::Connection::StopAllSamplesLocalPlayback =====

/* discord::voice::Connection::StopAllSamplesLocalPlayback() */

void __thiscall discord::voice::Connection::StopAllSamplesLocalPlayback(Connection *this)

{
  long lVar1;
  Connection *local_48 [2];
  code *local_38;
  undefined *puStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_004a1830;
  puStack_30 = &DAT_001f6f78;
  local_48[0] = this;
  FUN_004930c4(this,local_48,"StopAllSamplesLocalPlayback",0x1b);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049a1f4  discord::voice::Connection::SetClipRecordUser =====

/* discord::voice::Connection::SetClipRecordUser(std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> > const&, discord::voice::ClipDataType,
   bool) */

void discord::voice::Connection::SetClipRecordUser(void)

{
  return;
}


// ===== 0049a1f8  FUN_0049a1f8 =====

void FUN_0049a1f8(undefined2 *param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  uVar5 = *(undefined8 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 2) = uVar5;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  FUN_00441c84(param_1 + 0xc,param_2 + 0xc);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  pcVar4 = (code *)**(undefined8 **)(param_2 + 0x34);
  *(undefined8 **)(param_1 + 0x34) = *(undefined8 **)(param_2 + 0x34);
  if (pcVar4 != (code *)0x0) {
    uVar5 = (*pcVar4)(*(undefined8 *)(param_2 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = uVar5;
  }
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x3c) = uVar5;
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
  pcVar4 = (code *)**(undefined8 **)(param_2 + 0x48);
  *(undefined8 **)(param_1 + 0x48) = *(undefined8 **)(param_2 + 0x48);
  if (pcVar4 != (code *)0x0) {
    uVar5 = (*pcVar4)(*(undefined8 *)(param_2 + 0x3c));
    *(undefined8 *)(param_1 + 0x3c) = uVar5;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x52);
  uVar3 = *(undefined1 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x52) = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 0x54);
  uVar2 = *(undefined1 *)(param_2 + 0x56);
  *(undefined1 *)(param_1 + 0x4c) = uVar3;
  uVar3 = *(undefined1 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined1 *)(param_1 + 0x56) = uVar2;
  uVar2 = *(undefined1 *)(param_2 + 0x5a);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x5a) = uVar2;
  *(undefined1 *)(param_1 + 0x5c) = uVar3;
  return;
}


// ===== 0049a304  FUN_0049a304 =====

void FUN_0049a304(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1dbb0;
  FUN_005466c0();
  return;
}


// ===== 0049a314  FUN_0049a314 =====

void FUN_0049a314(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1dbb0;
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 0049a344  FUN_0049a344 =====

void FUN_0049a344(void)

{
  return;
}


// ===== 0049a348  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0049a34c  FUN_0049a34c =====

void FUN_0049a34c(long *param_1)

{
  long *plVar1;
  undefined8 ****__src;
  undefined4 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 ****__dest;
  long *plVar6;
  ulong uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined4 *puVar15;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 *local_98;
  undefined4 *local_90;
  undefined4 *local_88;
  undefined8 ***local_80;
  ulong uStack_78;
  undefined8 local_70;
  long local_68;
  undefined4 *puVar16;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  param_1 = (long *)*param_1;
  lVar14 = *param_1;
  plVar1 = param_1 + 1;
  uVar13 = *(undefined8 *)(lVar14 + 0x20);
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __src = (undefined8 ****)param_1[1];
    uVar7 = param_1[2];
    if (uVar7 < 0x17) {
      __dest = &local_80;
      local_70 = CONCAT17((char)uVar7,(undefined7)local_70);
    }
    else {
      if (0x7fffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar12 = (uVar7 | 0xf) + 1;
      __dest = (undefined8 ****)operator_new(uVar12);
      local_70 = uVar12 | 0x8000000000000000;
      local_80 = __dest;
      uStack_78 = uVar7;
    }
    if ((__dest <= __src) && (__src < (undefined8 ****)((long)__dest + uVar7 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar7 + 1);
  }
  else {
    local_70 = param_1[3];
    uStack_78 = param_1[2];
    local_80 = (undefined8 ***)*plVar1;
  }
  puVar15 = (undefined4 *)param_1[5];
  puVar2 = (undefined4 *)param_1[6];
  local_90 = (undefined4 *)0x0;
  local_88 = (undefined4 *)0x0;
  lVar5 = param_1[4];
  local_98 = (undefined4 *)0x0;
  uVar7 = (long)puVar2 - (long)puVar15;
  if (uVar7 != 0) {
    if ((long)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_98 = (undefined4 *)operator_new(uVar7);
    local_88 = local_98 + ((long)uVar7 >> 2);
    puVar8 = local_98;
    if ((0x1b < uVar7 - 4) && (0x1f < (ulong)((long)local_98 - (long)puVar15))) {
      puVar10 = (undefined8 *)(puVar15 + 4);
      uVar7 = (uVar7 - 4 >> 2) + 1;
      puVar11 = (undefined8 *)(local_98 + 4);
      uVar9 = uVar7 & 0x7ffffffffffffff8;
      puVar8 = local_98 + uVar9;
      puVar15 = puVar15 + uVar9;
      uVar12 = uVar9;
      do {
        puVar4 = puVar10 + -1;
        uVar17 = puVar10[-2];
        uVar19 = puVar10[1];
        uVar18 = *puVar10;
        puVar10 = puVar10 + 4;
        uVar12 = uVar12 - 8;
        puVar11[-1] = *puVar4;
        puVar11[-2] = uVar17;
        puVar11[1] = uVar19;
        *puVar11 = uVar18;
        puVar11 = puVar11 + 4;
      } while (uVar12 != 0);
      local_90 = puVar8;
      if (uVar7 == uVar9) goto LAB_0049a4b4;
    }
    do {
      puVar16 = puVar15 + 1;
      local_90 = puVar8 + 1;
      *puVar8 = *puVar15;
      puVar8 = local_90;
      puVar15 = puVar16;
    } while (puVar16 != puVar2);
  }
LAB_0049a4b4:
  FUN_004387f8(uVar13,&local_80,(int)lVar5,&local_98,(char)param_1[8]);
  if (local_98 != (undefined4 *)0x0) {
    local_90 = local_98;
    operator_delete(local_98);
  }
  if ((long)local_70 < 0) {
    operator_delete(local_80);
  }
  plVar6 = (long *)FUN_0043a79c(*(undefined8 *)(lVar14 + 0x20),plVar1);
  if (*plVar6 == 0) {
    uVar7 = FUN_0044075c();
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/voice_connection.cpp",0x170,
                   "ConnectUser(): Unable to find user ",plVar1);
    }
  }
  else {
    FUN_0047ea60(*plVar6,*(undefined1 *)((long)param_1 + 0x41));
    FUN_0047e888(*(undefined4 *)((long)param_1 + 0x44),*plVar6);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0049a5ac  FUN_0049a5ac =====

undefined8 * FUN_0049a5ac(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined4 *puVar14;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 *puVar15;
  
  puVar6 = (undefined8 *)operator_new(0x48);
  cVar3 = *(char *)((long)param_1 + 0x1f);
  puVar7 = puVar6 + 1;
  *puVar6 = *param_1;
  if (cVar3 < '\0') {
    puVar12 = (undefined8 *)param_1[1];
    uVar4 = param_1[2];
    if (uVar4 < 0x17) {
      *(char *)((long)puVar6 + 0x1f) = (char)uVar4;
    }
    else {
      if (0x7fffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar13 = (uVar4 | 0xf) + 1;
      puVar7 = (undefined8 *)operator_new(uVar13);
      puVar6[1] = puVar7;
      puVar6[2] = uVar4;
      puVar6[3] = uVar13 | 0x8000000000000000;
    }
    if ((puVar7 <= puVar12) && (puVar12 < (undefined8 *)((long)puVar7 + uVar4 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(puVar7,puVar12,uVar4 + 1);
  }
  else {
    uVar16 = param_1[1];
    uVar9 = param_1[3];
    puVar6[2] = param_1[2];
    *puVar7 = uVar16;
    puVar6[3] = uVar9;
  }
  puVar14 = (undefined4 *)param_1[5];
  puVar1 = (undefined4 *)param_1[6];
  puVar6[6] = 0;
  puVar6[7] = 0;
  uVar2 = *(undefined4 *)(param_1 + 4);
  puVar6[5] = 0;
  uVar4 = (long)puVar1 - (long)puVar14;
  *(undefined4 *)(puVar6 + 4) = uVar2;
  if (uVar4 == 0) goto LAB_0049a708;
  if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar8 = (undefined4 *)operator_new(uVar4);
  puVar6[5] = puVar8;
  puVar6[7] = puVar8 + ((long)uVar4 >> 2);
  if ((uVar4 - 4 < 0x1c) || ((ulong)((long)puVar8 - (long)puVar14) < 0x20)) {
LAB_0049a6f4:
    do {
      puVar15 = puVar14 + 1;
      puVar10 = puVar8 + 1;
      *puVar8 = *puVar14;
      puVar8 = puVar10;
      puVar14 = puVar15;
    } while (puVar15 != puVar1);
  }
  else {
    puVar7 = (undefined8 *)(puVar14 + 4);
    uVar4 = (uVar4 - 4 >> 2) + 1;
    puVar12 = (undefined8 *)(puVar8 + 4);
    uVar11 = uVar4 & 0x7ffffffffffffff8;
    puVar10 = puVar8 + uVar11;
    puVar14 = puVar14 + uVar11;
    uVar13 = uVar11;
    do {
      puVar5 = puVar7 + -1;
      uVar9 = puVar7[-2];
      uVar17 = puVar7[1];
      uVar16 = *puVar7;
      puVar7 = puVar7 + 4;
      uVar13 = uVar13 - 8;
      puVar12[-1] = *puVar5;
      puVar12[-2] = uVar9;
      puVar12[1] = uVar17;
      *puVar12 = uVar16;
      puVar12 = puVar12 + 4;
    } while (uVar13 != 0);
    puVar8 = puVar10;
    if (uVar4 != uVar11) goto LAB_0049a6f4;
  }
  puVar6[6] = puVar10;
LAB_0049a708:
  puVar6[8] = param_1[8];
  return puVar6;
}


// ===== 0049a758  FUN_0049a758 =====

void FUN_0049a758(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((long)param_1 + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)((long)param_1 + 0x30) = pvVar1;
    operator_delete(pvVar1);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete(*(void **)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049a798  FUN_0049a798 =====

void FUN_0049a798(long *param_1)

{
  FUN_00438f34(*(undefined8 *)(*(long *)*param_1 + 0x20),(long *)*param_1 + 1);
  return;
}


// ===== 0049a7a8  FUN_0049a7a8 =====

undefined8 * FUN_0049a7a8(undefined8 *param_1)

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


// ===== 0049a88c  FUN_0049a88c =====

void FUN_0049a88c(void *param_1)

{
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete(*(void **)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049a8bc  FUN_0049a8bc =====

void FUN_0049a8bc(long *param_1)

{
  undefined2 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long local_60;
  long lStack_58;
  long local_50;
  undefined8 *local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  param_1 = (long *)*param_1;
  local_50 = param_1[4];
  local_48 = (undefined8 *)param_1[5];
  lStack_58 = param_1[3];
  local_60 = param_1[2];
  lVar3 = param_1[1];
  uVar1 = *(undefined2 *)((long)param_1 + 10);
  uVar4 = *(undefined8 *)(*param_1 + 0x20);
  if ((code *)*local_48 != (code *)0x0) {
    local_60 = (*(code *)*local_48)(param_1[2]);
  }
  FUN_00439204(uVar4,(short)lVar3,uVar1,&local_60);
  if ((code *)local_48[1] != (code *)0x0) {
    (*(code *)local_48[1])(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049a964  FUN_0049a964 =====

undefined8 * FUN_0049a964(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar3 = (undefined8 *)operator_new(0x30);
  uVar4 = param_1[4];
  puVar1 = (undefined8 *)param_1[5];
  uVar2 = *(undefined4 *)(param_1 + 1);
  uVar7 = param_1[3];
  uVar6 = param_1[2];
  *puVar3 = *param_1;
  pcVar5 = (code *)*puVar1;
  *(undefined4 *)(puVar3 + 1) = uVar2;
  puVar3[3] = uVar7;
  puVar3[2] = uVar6;
  puVar3[4] = uVar4;
  puVar3[5] = puVar1;
  if (pcVar5 != (code *)0x0) {
    uVar4 = (*pcVar5)(param_1[2]);
    puVar3[2] = uVar4;
  }
  return puVar3;
}


// ===== 0049a9cc  FUN_0049a9cc =====

void FUN_0049a9cc(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x28) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 0x10));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049aa00  FUN_0049aa00 =====

void FUN_0049aa00(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  FUN_004394a8(*(undefined8 *)(*plVar1 + 0x20),plVar1[1],(short)plVar1[2],plVar1[3]);
  return;
}


// ===== 0049aa18  FUN_0049aa18 =====

void FUN_0049aa18(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  return;
}


// ===== 0049aa44  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0049aa48  FUN_0049aa48 =====

void FUN_0049aa48(long *param_1)

{
  FUN_004396b4(*(undefined8 *)(*param_1 + 0x20),(short)param_1[1]);
  return;
}


// ===== 0049aa5c  FUN_0049aa5c =====

void FUN_0049aa5c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 (*pauVar4) [16];
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  plVar6 = (long *)*param_1;
  pauVar4 = (undefined1 (*) [16])
            FUN_0044de5c(*(undefined8 *)(*(long *)(*plVar6 + 0x20) + 0x88),(int)plVar6[1]);
  auVar7 = FUN_004f0880(plVar6 + 2,(int)plVar6[1]);
  plVar6 = *(long **)(*pauVar4 + 8);
  *pauVar4 = auVar7;
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


// ===== 0049aae0  FUN_0049aae0 =====

undefined8 * FUN_0049aae0(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *__dest;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar5 = (undefined8 *)operator_new(0x28);
  uVar3 = *(undefined4 *)(param_1 + 1);
  __dest = puVar5 + 2;
  cVar4 = *(char *)((long)param_1 + 0x27);
  *puVar5 = *param_1;
  *(undefined4 *)(puVar5 + 1) = uVar3;
  if (cVar4 < '\0') {
    __src = (undefined8 *)param_1[2];
    uVar2 = param_1[3];
    if (uVar2 < 0x17) {
      *(char *)((long)puVar5 + 0x27) = (char)uVar2;
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 *)operator_new(uVar1);
      puVar5[2] = __dest;
      puVar5[3] = uVar2;
      puVar5[4] = uVar1 | 0x8000000000000000;
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
    uVar7 = param_1[2];
    uVar6 = param_1[4];
    puVar5[3] = param_1[3];
    *__dest = uVar7;
    puVar5[4] = uVar6;
  }
  return puVar5;
}


// ===== 0049abd0  FUN_0049abd0 =====

void FUN_0049abd0(void *param_1)

{
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete(*(void **)((long)param_1 + 0x10));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049ac00  FUN_0049ac00 =====

void FUN_0049ac00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0049ac0c  FUN_0049ac0c =====

void FUN_0049ac0c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  void *local_40;
  void *local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)*param_1;
  FUN_00439aa4(&local_40,*(undefined8 *)(*plVar2 + 0x20));
  if (local_40 != local_38) {
    (*(code *)plVar2[3])(plVar2 + 1,&local_40);
  }
  if (local_40 != (void *)0x0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049ac8c  FUN_0049ac8c =====

undefined8 * FUN_0049ac8c(undefined8 *param_1)

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


// ===== 0049acec  FUN_0049acec =====

void FUN_0049acec(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049ad20  FUN_0049ad20 =====

void FUN_0049ad20(long *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  long local_48;
  undefined1 *puVar12;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  param_1 = (long *)*param_1;
  local_58 = (undefined1 *)0x0;
  local_50 = (undefined1 *)0x0;
  puVar12 = (undefined1 *)param_1[1];
  puVar1 = (undefined1 *)param_1[2];
  local_60 = (undefined1 *)0x0;
  uVar10 = *(undefined8 *)(*param_1 + 0x20);
  uVar2 = (long)puVar1 - (long)puVar12;
  if (uVar2 != 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_60 = (undefined1 *)operator_new(uVar2);
    local_50 = local_60 + uVar2;
    puVar5 = local_60;
    if ((0x1f < uVar2) && (0x1f < (ulong)((long)local_60 - (long)puVar12))) {
      uVar6 = uVar2 & 0xffffffffffffffe0;
      puVar7 = (undefined8 *)(puVar12 + 0x10);
      puVar5 = local_60 + uVar6;
      puVar12 = puVar12 + uVar6;
      puVar8 = (undefined8 *)(local_60 + 0x10);
      uVar9 = uVar6;
      do {
        puVar4 = puVar7 + -1;
        uVar13 = puVar7[-2];
        uVar15 = puVar7[1];
        uVar14 = *puVar7;
        puVar7 = puVar7 + 4;
        uVar9 = uVar9 - 0x20;
        puVar8[-1] = *puVar4;
        puVar8[-2] = uVar13;
        puVar8[1] = uVar15;
        *puVar8 = uVar14;
        puVar8 = puVar8 + 4;
      } while (uVar9 != 0);
      local_58 = puVar5;
      if (uVar2 == uVar6) goto LAB_0049ade8;
    }
    do {
      puVar11 = puVar12 + 1;
      local_58 = puVar5 + 1;
      *puVar5 = *puVar12;
      puVar5 = local_58;
      puVar12 = puVar11;
    } while (puVar11 != puVar1);
  }
LAB_0049ade8:
  FUN_00439b10(uVar10,&local_60);
  if (local_60 != (undefined1 *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0049ae34  FUN_0049ae34 =====

undefined8 * FUN_0049ae34(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 *puVar12;
  
  puVar4 = (undefined8 *)operator_new(0x20);
  puVar12 = (undefined1 *)param_1[1];
  puVar1 = (undefined1 *)param_1[2];
  puVar4[2] = 0;
  puVar4[3] = 0;
  uVar2 = (long)puVar1 - (long)puVar12;
  *puVar4 = *param_1;
  puVar4[1] = 0;
  if (uVar2 == 0) {
    return puVar4;
  }
  if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar5 = (undefined1 *)operator_new(uVar2);
  puVar4[1] = puVar5;
  puVar4[3] = puVar5 + uVar2;
  if ((0x1f < uVar2) && (0x1f < (ulong)((long)puVar5 - (long)puVar12))) {
    uVar7 = uVar2 & 0xffffffffffffffe0;
    puVar8 = (undefined8 *)(puVar12 + 0x10);
    puVar6 = puVar5 + uVar7;
    puVar12 = puVar12 + uVar7;
    puVar9 = (undefined8 *)(puVar5 + 0x10);
    uVar10 = uVar7;
    do {
      puVar3 = puVar8 + -1;
      uVar13 = puVar8[-2];
      uVar15 = puVar8[1];
      uVar14 = *puVar8;
      puVar8 = puVar8 + 4;
      uVar10 = uVar10 - 0x20;
      puVar9[-1] = *puVar3;
      puVar9[-2] = uVar13;
      puVar9[1] = uVar15;
      *puVar9 = uVar14;
      puVar9 = puVar9 + 4;
    } while (uVar10 != 0);
    puVar5 = puVar6;
    if (uVar2 == uVar7) goto LAB_0049aeec;
  }
  do {
    puVar11 = puVar12 + 1;
    puVar6 = puVar5 + 1;
    *puVar5 = *puVar12;
    puVar5 = puVar6;
    puVar12 = puVar11;
  } while (puVar11 != puVar1);
LAB_0049aeec:
  puVar4[2] = puVar6;
  return puVar4;
}


// ===== 0049af08  FUN_0049af08 =====

void FUN_0049af08(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((long)param_1 + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)((long)param_1 + 0x10) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 0049af38  FUN_0049af38 =====

void FUN_0049af38(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  long local_70;
  long lStack_68;
  long local_60;
  undefined8 *local_58;
  long local_48;
  undefined1 *puVar13;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar11 = (long *)*param_1;
  puVar13 = (undefined1 *)plVar11[5];
  puVar1 = (undefined1 *)plVar11[6];
  local_80 = (undefined1 *)0x0;
  local_78 = (undefined1 *)0x0;
  local_88 = (undefined1 *)0x0;
  uVar10 = *(undefined8 *)(*plVar11 + 0x20);
  uVar2 = (long)puVar1 - (long)puVar13;
  if (uVar2 != 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_88 = (undefined1 *)operator_new(uVar2);
    local_78 = local_88 + uVar2;
    puVar5 = local_88;
    if ((0x1f < uVar2) && (0x1f < (ulong)((long)local_88 - (long)puVar13))) {
      uVar6 = uVar2 & 0xffffffffffffffe0;
      puVar7 = (undefined8 *)(puVar13 + 0x10);
      puVar5 = local_88 + uVar6;
      puVar13 = puVar13 + uVar6;
      puVar8 = (undefined8 *)(local_88 + 0x10);
      uVar9 = uVar6;
      do {
        puVar4 = puVar7 + -1;
        uVar14 = puVar7[-2];
        uVar16 = puVar7[1];
        uVar15 = *puVar7;
        puVar7 = puVar7 + 4;
        uVar9 = uVar9 - 0x20;
        puVar8[-1] = *puVar4;
        puVar8[-2] = uVar14;
        puVar8[1] = uVar16;
        *puVar8 = uVar15;
        puVar8 = puVar8 + 4;
      } while (uVar9 != 0);
      local_80 = puVar5;
      if (uVar2 == uVar6) goto LAB_0049b000;
    }
    do {
      puVar12 = puVar13 + 1;
      local_80 = puVar5 + 1;
      *puVar5 = *puVar13;
      puVar5 = local_80;
      puVar13 = puVar12;
    } while (puVar12 != puVar1);
  }
LAB_0049b000:
  local_60 = plVar11[3];
  local_58 = (undefined8 *)plVar11[4];
  lStack_68 = plVar11[2];
  local_70 = plVar11[1];
  if ((code *)*local_58 != (code *)0x0) {
    local_70 = (*(code *)*local_58)(plVar11[1]);
  }
  FUN_00439bc0(uVar10,&local_88,&local_70);
  if ((code *)local_58[1] != (code *)0x0) {
    (*(code *)local_58[1])(local_70);
  }
  if (local_88 != (undefined1 *)0x0) {
    local_80 = local_88;
    operator_delete(local_88);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0049b08c  FUN_0049b08c =====

undefined8 * FUN_0049b08c(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  code *pcVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 *puVar14;
  
  puVar4 = (undefined8 *)operator_new(0x40);
  uVar5 = param_1[3];
  puVar10 = (undefined8 *)param_1[4];
  uVar16 = param_1[2];
  uVar15 = param_1[1];
  *puVar4 = *param_1;
  pcVar7 = (code *)*puVar10;
  puVar4[2] = uVar16;
  puVar4[1] = uVar15;
  puVar4[3] = uVar5;
  puVar4[4] = puVar10;
  if (pcVar7 != (code *)0x0) {
    uVar5 = (*pcVar7)(param_1[1]);
    puVar4[1] = uVar5;
  }
  puVar14 = (undefined1 *)param_1[5];
  puVar1 = (undefined1 *)param_1[6];
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  uVar2 = (long)puVar1 - (long)puVar14;
  if (uVar2 == 0) {
    return puVar4;
  }
  if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar6 = (undefined1 *)operator_new(uVar2);
  puVar4[5] = puVar6;
  puVar4[7] = puVar6 + uVar2;
  if ((0x1f < uVar2) && (0x1f < (ulong)((long)puVar6 - (long)puVar14))) {
    uVar9 = uVar2 & 0xffffffffffffffe0;
    puVar10 = (undefined8 *)(puVar14 + 0x10);
    puVar8 = puVar6 + uVar9;
    puVar14 = puVar14 + uVar9;
    puVar11 = (undefined8 *)(puVar6 + 0x10);
    uVar12 = uVar9;
    do {
      puVar3 = puVar10 + -1;
      uVar5 = puVar10[-2];
      uVar16 = puVar10[1];
      uVar15 = *puVar10;
      puVar10 = puVar10 + 4;
      uVar12 = uVar12 - 0x20;
      puVar11[-1] = *puVar3;
      puVar11[-2] = uVar5;
      puVar11[1] = uVar16;
      *puVar11 = uVar15;
      puVar11 = puVar11 + 4;
    } while (uVar12 != 0);
    puVar6 = puVar8;
    if (uVar2 == uVar9) goto LAB_0049b174;
  }
  do {
    puVar13 = puVar14 + 1;
    puVar8 = puVar6 + 1;
    *puVar6 = *puVar14;
    puVar6 = puVar8;
    puVar14 = puVar13;
  } while (puVar13 != puVar1);
LAB_0049b174:
  puVar4[6] = puVar8;
  return puVar4;
}


// ===== 0049b190  FUN_0049b190 =====

void FUN_0049b190(void *param_1)

{
  void *pvVar1;
  code *pcVar2;
  
  pvVar1 = *(void **)((long)param_1 + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)((long)param_1 + 0x30) = pvVar1;
    operator_delete(pvVar1);
  }
  pcVar2 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049b1d4  FUN_0049b1d4 =====

void FUN_0049b1d4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0049b1e0  FUN_0049b1e0 =====

void FUN_0049b1e0(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined1 *puVar13;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  long local_80;
  long lStack_78;
  long local_70;
  undefined8 *local_68;
  long local_58;
  undefined1 *puVar14;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  plVar12 = (long *)*param_1;
  puVar14 = (undefined1 *)plVar12[6];
  puVar1 = (undefined1 *)plVar12[7];
  local_90 = (undefined1 *)0x0;
  local_88 = (undefined1 *)0x0;
  lVar5 = plVar12[5];
  local_98 = (undefined1 *)0x0;
  uVar11 = *(undefined8 *)(*plVar12 + 0x20);
  uVar2 = (long)puVar1 - (long)puVar14;
  if (uVar2 != 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_98 = (undefined1 *)operator_new(uVar2);
    local_88 = local_98 + uVar2;
    puVar6 = local_98;
    if ((0x1f < uVar2) && (0x1f < (ulong)((long)local_98 - (long)puVar14))) {
      uVar7 = uVar2 & 0xffffffffffffffe0;
      puVar8 = (undefined8 *)(puVar14 + 0x10);
      puVar6 = local_98 + uVar7;
      puVar14 = puVar14 + uVar7;
      puVar9 = (undefined8 *)(local_98 + 0x10);
      uVar10 = uVar7;
      do {
        puVar4 = puVar8 + -1;
        uVar15 = puVar8[-2];
        uVar17 = puVar8[1];
        uVar16 = *puVar8;
        puVar8 = puVar8 + 4;
        uVar10 = uVar10 - 0x20;
        puVar9[-1] = *puVar4;
        puVar9[-2] = uVar15;
        puVar9[1] = uVar17;
        *puVar9 = uVar16;
        puVar9 = puVar9 + 4;
      } while (uVar10 != 0);
      local_90 = puVar6;
      if (uVar2 == uVar7) goto LAB_0049b2b0;
    }
    do {
      puVar13 = puVar14 + 1;
      local_90 = puVar6 + 1;
      *puVar6 = *puVar14;
      puVar6 = local_90;
      puVar14 = puVar13;
    } while (puVar13 != puVar1);
  }
LAB_0049b2b0:
  local_70 = plVar12[3];
  local_68 = (undefined8 *)plVar12[4];
  lStack_78 = plVar12[2];
  local_80 = plVar12[1];
  if ((code *)*local_68 != (code *)0x0) {
    local_80 = (*(code *)*local_68)(plVar12[1]);
  }
  FUN_00439dd4(uVar11,(short)lVar5,&local_98,&local_80);
  if ((code *)local_68[1] != (code *)0x0) {
    (*(code *)local_68[1])(local_80);
  }
  if (local_98 != (undefined1 *)0x0) {
    local_90 = local_98;
    operator_delete(local_98);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0049b344  FUN_0049b344 =====

undefined8 * FUN_0049b344(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  code *pcVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined1 *puVar14;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 *puVar15;
  
  puVar5 = (undefined8 *)operator_new(0x48);
  uVar6 = param_1[3];
  puVar11 = (undefined8 *)param_1[4];
  uVar17 = param_1[2];
  uVar16 = param_1[1];
  *puVar5 = *param_1;
  pcVar8 = (code *)*puVar11;
  puVar5[2] = uVar17;
  puVar5[1] = uVar16;
  puVar5[3] = uVar6;
  puVar5[4] = puVar11;
  if (pcVar8 != (code *)0x0) {
    uVar6 = (*pcVar8)(param_1[1]);
    puVar5[1] = uVar6;
  }
  puVar15 = (undefined1 *)param_1[6];
  puVar1 = (undefined1 *)param_1[7];
  puVar5[7] = 0;
  puVar5[8] = 0;
  uVar2 = *(undefined2 *)(param_1 + 5);
  puVar5[6] = 0;
  uVar3 = (long)puVar1 - (long)puVar15;
  *(undefined2 *)(puVar5 + 5) = uVar2;
  if (uVar3 == 0) {
    return puVar5;
  }
  if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar7 = (undefined1 *)operator_new(uVar3);
  puVar5[6] = puVar7;
  puVar5[8] = puVar7 + uVar3;
  if ((0x1f < uVar3) && (0x1f < (ulong)((long)puVar7 - (long)puVar15))) {
    uVar10 = uVar3 & 0xffffffffffffffe0;
    puVar11 = (undefined8 *)(puVar15 + 0x10);
    puVar9 = puVar7 + uVar10;
    puVar15 = puVar15 + uVar10;
    puVar12 = (undefined8 *)(puVar7 + 0x10);
    uVar13 = uVar10;
    do {
      puVar4 = puVar11 + -1;
      uVar6 = puVar11[-2];
      uVar17 = puVar11[1];
      uVar16 = *puVar11;
      puVar11 = puVar11 + 4;
      uVar13 = uVar13 - 0x20;
      puVar12[-1] = *puVar4;
      puVar12[-2] = uVar6;
      puVar12[1] = uVar17;
      *puVar12 = uVar16;
      puVar12 = puVar12 + 4;
    } while (uVar13 != 0);
    puVar7 = puVar9;
    if (uVar3 == uVar10) goto LAB_0049b434;
  }
  do {
    puVar14 = puVar15 + 1;
    puVar9 = puVar7 + 1;
    *puVar7 = *puVar15;
    puVar7 = puVar9;
    puVar15 = puVar14;
  } while (puVar14 != puVar1);
LAB_0049b434:
  puVar5[7] = puVar9;
  return puVar5;
}


// ===== 0049b450  FUN_0049b450 =====

void FUN_0049b450(void *param_1)

{
  void *pvVar1;
  code *pcVar2;
  
  pvVar1 = *(void **)((long)param_1 + 0x30);
  if (pvVar1 != (void *)0x0) {
    *(void **)((long)param_1 + 0x38) = pvVar1;
    operator_delete(pvVar1);
  }
  pcVar2 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049b494  FUN_0049b494 =====

void FUN_0049b494(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined1 *puVar13;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  long local_80;
  long lStack_78;
  long local_70;
  undefined8 *local_68;
  long local_58;
  undefined1 *puVar14;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  plVar12 = (long *)*param_1;
  puVar14 = (undefined1 *)plVar12[6];
  puVar1 = (undefined1 *)plVar12[7];
  local_90 = (undefined1 *)0x0;
  local_88 = (undefined1 *)0x0;
  lVar5 = plVar12[5];
  local_98 = (undefined1 *)0x0;
  uVar11 = *(undefined8 *)(*plVar12 + 0x20);
  uVar2 = (long)puVar1 - (long)puVar14;
  if (uVar2 != 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_98 = (undefined1 *)operator_new(uVar2);
    local_88 = local_98 + uVar2;
    puVar6 = local_98;
    if ((0x1f < uVar2) && (0x1f < (ulong)((long)local_98 - (long)puVar14))) {
      uVar7 = uVar2 & 0xffffffffffffffe0;
      puVar8 = (undefined8 *)(puVar14 + 0x10);
      puVar6 = local_98 + uVar7;
      puVar14 = puVar14 + uVar7;
      puVar9 = (undefined8 *)(local_98 + 0x10);
      uVar10 = uVar7;
      do {
        puVar4 = puVar8 + -1;
        uVar15 = puVar8[-2];
        uVar17 = puVar8[1];
        uVar16 = *puVar8;
        puVar8 = puVar8 + 4;
        uVar10 = uVar10 - 0x20;
        puVar9[-1] = *puVar4;
        puVar9[-2] = uVar15;
        puVar9[1] = uVar17;
        *puVar9 = uVar16;
        puVar9 = puVar9 + 4;
      } while (uVar10 != 0);
      local_90 = puVar6;
      if (uVar2 == uVar7) goto LAB_0049b564;
    }
    do {
      puVar13 = puVar14 + 1;
      local_90 = puVar6 + 1;
      *puVar6 = *puVar14;
      puVar6 = local_90;
      puVar14 = puVar13;
    } while (puVar13 != puVar1);
  }
LAB_0049b564:
  local_70 = plVar12[3];
  local_68 = (undefined8 *)plVar12[4];
  lStack_78 = plVar12[2];
  local_80 = plVar12[1];
  if ((code *)*local_68 != (code *)0x0) {
    local_80 = (*(code *)*local_68)(plVar12[1]);
  }
  FUN_0043a090(uVar11,(short)lVar5,&local_98,&local_80);
  if ((code *)local_68[1] != (code *)0x0) {
    (*(code *)local_68[1])(local_80);
  }
  if (local_98 != (undefined1 *)0x0) {
    local_90 = local_98;
    operator_delete(local_98);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0049b5f8  FUN_0049b5f8 =====

undefined8 * FUN_0049b5f8(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  code *pcVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined1 *puVar14;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 *puVar15;
  
  puVar5 = (undefined8 *)operator_new(0x48);
  uVar6 = param_1[3];
  puVar11 = (undefined8 *)param_1[4];
  uVar17 = param_1[2];
  uVar16 = param_1[1];
  *puVar5 = *param_1;
  pcVar8 = (code *)*puVar11;
  puVar5[2] = uVar17;
  puVar5[1] = uVar16;
  puVar5[3] = uVar6;
  puVar5[4] = puVar11;
  if (pcVar8 != (code *)0x0) {
    uVar6 = (*pcVar8)(param_1[1]);
    puVar5[1] = uVar6;
  }
  puVar15 = (undefined1 *)param_1[6];
  puVar1 = (undefined1 *)param_1[7];
  puVar5[7] = 0;
  puVar5[8] = 0;
  uVar2 = *(undefined2 *)(param_1 + 5);
  puVar5[6] = 0;
  uVar3 = (long)puVar1 - (long)puVar15;
  *(undefined2 *)(puVar5 + 5) = uVar2;
  if (uVar3 == 0) {
    return puVar5;
  }
  if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar7 = (undefined1 *)operator_new(uVar3);
  puVar5[6] = puVar7;
  puVar5[8] = puVar7 + uVar3;
  if ((0x1f < uVar3) && (0x1f < (ulong)((long)puVar7 - (long)puVar15))) {
    uVar10 = uVar3 & 0xffffffffffffffe0;
    puVar11 = (undefined8 *)(puVar15 + 0x10);
    puVar9 = puVar7 + uVar10;
    puVar15 = puVar15 + uVar10;
    puVar12 = (undefined8 *)(puVar7 + 0x10);
    uVar13 = uVar10;
    do {
      puVar4 = puVar11 + -1;
      uVar6 = puVar11[-2];
      uVar17 = puVar11[1];
      uVar16 = *puVar11;
      puVar11 = puVar11 + 4;
      uVar13 = uVar13 - 0x20;
      puVar12[-1] = *puVar4;
      puVar12[-2] = uVar6;
      puVar12[1] = uVar17;
      *puVar12 = uVar16;
      puVar12 = puVar12 + 4;
    } while (uVar13 != 0);
    puVar7 = puVar9;
    if (uVar3 == uVar10) goto LAB_0049b6e8;
  }
  do {
    puVar14 = puVar15 + 1;
    puVar9 = puVar7 + 1;
    *puVar7 = *puVar15;
    puVar7 = puVar9;
    puVar15 = puVar14;
  } while (puVar14 != puVar1);
LAB_0049b6e8:
  puVar5[7] = puVar9;
  return puVar5;
}


// ===== 0049b704  FUN_0049b704 =====

void FUN_0049b704(void *param_1)

{
  void *pvVar1;
  code *pcVar2;
  
  pvVar1 = *(void **)((long)param_1 + 0x30);
  if (pvVar1 != (void *)0x0) {
    *(void **)((long)param_1 + 0x38) = pvVar1;
    operator_delete(pvVar1);
  }
  pcVar2 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049b748  FUN_0049b748 =====

void FUN_0049b748(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long local_60;
  long lStack_58;
  long local_50;
  undefined8 *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1 = (long *)*param_1;
  local_50 = param_1[3];
  local_48 = (undefined8 *)param_1[4];
  lStack_58 = param_1[2];
  local_60 = param_1[1];
  lVar2 = param_1[5];
  uVar3 = *(undefined8 *)(*param_1 + 0x20);
  if ((code *)*local_48 != (code *)0x0) {
    local_60 = (*(code *)*local_48)(param_1[1]);
  }
  FUN_0043a318(uVar3,(short)lVar2,param_1 + 6,&local_60);
  if ((code *)local_48[1] != (code *)0x0) {
    (*(code *)local_48[1])(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049b7f0  FUN_0049b7f0 =====

undefined8 * FUN_0049b7f0(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar4 = (undefined8 *)operator_new(0x48);
  puVar5 = (undefined8 *)param_1[4];
  uVar9 = param_1[2];
  uVar8 = param_1[1];
  uVar7 = *param_1;
  puVar4[3] = param_1[3];
  puVar4[2] = uVar9;
  puVar4[1] = uVar8;
  pcVar6 = (code *)*puVar5;
  *puVar4 = uVar7;
  puVar4[4] = puVar5;
  if (pcVar6 != (code *)0x0) {
    uVar7 = (*pcVar6)(param_1[1]);
    puVar4[1] = uVar7;
  }
  puVar5 = puVar4 + 6;
  cVar3 = *(char *)((long)param_1 + 0x47);
  *(undefined2 *)(puVar4 + 5) = *(undefined2 *)(param_1 + 5);
  if (cVar3 < '\0') {
    __src = (undefined8 *)param_1[6];
    uVar2 = param_1[7];
    if (uVar2 < 0x17) {
      *(char *)((long)puVar4 + 0x47) = (char)uVar2;
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      puVar5 = (undefined8 *)operator_new(uVar1);
      puVar4[6] = puVar5;
      puVar4[7] = uVar2;
      puVar4[8] = uVar1 | 0x8000000000000000;
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
    uVar8 = param_1[6];
    uVar7 = param_1[8];
    puVar4[7] = param_1[7];
    *puVar5 = uVar8;
    puVar4[8] = uVar7;
  }
  return puVar4;
}


// ===== 0049b910  FUN_0049b910 =====

void FUN_0049b910(void *param_1)

{
  code *pcVar1;
  
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete(*(void **)((long)param_1 + 0x30));
  }
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049b954  FUN_0049b954 =====

void FUN_0049b954(long *param_1)

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
  FUN_0043a3c4(uVar2,&local_50);
  if ((code *)local_38[1] != (code *)0x0) {
    (*(code *)local_38[1])(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049b9e4  FUN_0049b9e4 =====

undefined8 * FUN_0049b9e4(undefined8 *param_1)

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


// ===== 0049ba44  FUN_0049ba44 =====

void FUN_0049ba44(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049ba78  FUN_0049ba78 =====

void FUN_0049ba78(long *param_1)

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
  FUN_0043a440(uVar2,&local_50);
  if ((code *)local_38[1] != (code *)0x0) {
    (*(code *)local_38[1])(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049bb08  FUN_0049bb08 =====

undefined8 * FUN_0049bb08(undefined8 *param_1)

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


// ===== 0049bb68  FUN_0049bb68 =====

void FUN_0049bb68(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049bb9c  FUN_0049bb9c =====

/* WARNING: Removing unreachable block (ram,0x0049bc1c) */

void FUN_0049bb9c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  void *local_50;
  void *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)*param_1;
  local_50 = (void *)0x0;
  local_48 = (void *)0x0;
  local_40 = 0;
  FUN_004874c8(*(undefined8 *)(*plVar2 + 0x40),&local_50);
  (*(code *)plVar2[3])(plVar2 + 1,&local_50);
  if (local_50 != (void *)0x0) {
    for (; local_48 != local_50; local_48 = (void *)((long)local_48 + -0x18)) {
    }
    local_48 = local_50;
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049bc5c  FUN_0049bc5c =====

undefined8 * FUN_0049bc5c(undefined8 *param_1)

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


// ===== 0049bcbc  FUN_0049bcbc =====

void FUN_0049bcbc(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049bcf0  FUN_0049bcf0 =====

void FUN_0049bcf0(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  plVar1 = (long *)FUN_0043a79c(*(undefined8 *)(*plVar3 + 0x20),plVar3 + 1);
  if (*plVar1 != 0) {
    FUN_0047eb04((int)plVar3[4],*(undefined4 *)((long)plVar3 + 0x24));
    return;
  }
  uVar2 = FUN_0044075c();
  if ((uVar2 & 1) != 0) {
    return;
  }
  FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/voice_connection.cpp",0x540,
               "SetUserPlayoutPan(): Unable to find user ",plVar3 + 1);
  return;
}


// ===== 0049bd6c  FUN_0049bd6c =====

undefined8 * FUN_0049bd6c(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *__dest;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)operator_new(0x28);
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
  puVar4[4] = param_1[4];
  return puVar4;
}


// ===== 0049be60  FUN_0049be60 =====

void FUN_0049be60(void *param_1)

{
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete(*(void **)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049be90  FUN_0049be90 =====

void FUN_0049be90(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  plVar1 = (long *)FUN_0043a79c(*(undefined8 *)(*plVar3 + 0x20),plVar3 + 1);
  if (*plVar1 != 0) {
    FUN_0047e888((int)plVar3[4]);
    return;
  }
  uVar2 = FUN_0044075c();
  if ((uVar2 & 1) != 0) {
    return;
  }
  FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/voice_connection.cpp",0x5a8,
               "SetUserPlayoutVolume(): Unable to find user ",plVar3 + 1);
  return;
}


// ===== 0049bf0c  FUN_0049bf0c =====

undefined8 * FUN_0049bf0c(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *__dest;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)operator_new(0x28);
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
  *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(param_1 + 4);
  return puVar4;
}


// ===== 0049c000  FUN_0049c000 =====

void FUN_0049c000(void *param_1)

{
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete(*(void **)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049c030  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0049c034  FUN_0049c034 =====

void FUN_0049c034(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  uVar1 = FUN_005ce36c();
  plVar2 = (long *)FUN_0043a79c(*(undefined8 *)(*plVar5 + 0x20),plVar5 + 2);
  if (*plVar2 == 0) {
    uVar3 = FUN_0044075c();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/voice_connection.cpp",0x618,
                   "GetUserPlayoutVolume(): Unable to find user ",plVar5 + 2);
    }
  }
  else {
    *(undefined4 *)plVar5[1] = *(undefined4 *)(*plVar2 + 0x1db8);
  }
  uVar4 = FUN_005ce36c();
  (*(code *)plVar5[10])(plVar5 + 8,plVar5 + 5,plVar5[0xc],uVar1,uVar4);
  FUN_00520464(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 0049c0e0  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0049c0e4  FUN_0049c0e4 =====

void FUN_0049c0e4(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar1 = (long *)FUN_0043a79c(*(undefined8 *)(*plVar3 + 0x20),plVar3 + 2);
  if (*plVar1 == 0) {
    uVar2 = FUN_0044075c();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/voice_connection.cpp",0x618,
                   "GetUserPlayoutVolume(): Unable to find user ",plVar3 + 2);
    }
  }
  else {
    *(undefined4 *)plVar3[1] = *(undefined4 *)(*plVar1 + 0x1db8);
  }
  FUN_00520464(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 0049c168  FUN_0049c168 =====

void FUN_0049c168(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  plVar1 = (long *)FUN_0043a79c(*(undefined8 *)(*plVar3 + 0x20),plVar3 + 1);
  if (*plVar1 != 0) {
    FUN_0047ea60(*plVar1,(char)plVar3[4]);
    return;
  }
  uVar2 = FUN_0044075c();
  if ((uVar2 & 1) != 0) {
    return;
  }
  FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/voice_connection.cpp",0x680,
               "MuteUser(): Unable to find user ",plVar3 + 1);
  return;
}


// ===== 0049c1e4  FUN_0049c1e4 =====

undefined8 * FUN_0049c1e4(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *__dest;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)operator_new(0x28);
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
  *(undefined1 *)(puVar4 + 4) = *(undefined1 *)(param_1 + 4);
  return puVar4;
}


// ===== 0049c2d8  FUN_0049c2d8 =====

void FUN_0049c2d8(void *param_1)

{
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete(*(void **)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049c308  FUN_0049c308 =====

void FUN_0049c308(long *param_1)

{
  param_1 = (long *)*param_1;
  if (*(long *)(*param_1 + 0x20) != 0) {
    FUN_0043ee58(*(long *)(*param_1 + 0x20),param_1 + 1,param_1 + 4);
    return;
  }
  return;
}


// ===== 0049c328  FUN_0049c328 =====

undefined8 * FUN_0049c328(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *__dest;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar5 = (undefined8 *)operator_new(0x30);
  cVar4 = *(char *)((long)param_1 + 0x1f);
  __dest = puVar5 + 1;
  *puVar5 = *param_1;
  if (cVar4 < '\0') {
    __src = (undefined8 *)param_1[1];
    uVar2 = param_1[2];
    if (uVar2 < 0x17) {
      *(char *)((long)puVar5 + 0x1f) = (char)uVar2;
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 *)operator_new(uVar1);
      puVar5[1] = __dest;
      puVar5[2] = uVar2;
      puVar5[3] = uVar1 | 0x8000000000000000;
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
    uVar7 = param_1[1];
    uVar6 = param_1[3];
    puVar5[2] = param_1[2];
    *__dest = uVar7;
    puVar5[3] = uVar6;
  }
  uVar3 = *(undefined4 *)(param_1 + 5);
  puVar5[4] = param_1[4];
  *(undefined4 *)(puVar5 + 5) = uVar3;
  return puVar5;
}


// ===== 0049c424  FUN_0049c424 =====

void FUN_0049c424(void *param_1)

{
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete(*(void **)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049c454  FUN_0049c454 =====

void FUN_0049c454(long *param_1)

{
  FUN_004624d0(*(undefined8 *)(*(long *)(*param_1 + 0x20) + 0x3d8));
  return;
}


// ===== 0049c464  FUN_0049c464 =====

void FUN_0049c464(long *param_1)

{
  param_1 = (long *)*param_1;
  if ((char)param_1[4] != '\0') {
    FUN_004872e0(*(undefined8 *)(*param_1 + 0x40),param_1 + 1,(short)param_1[5]);
    return;
  }
  FUN_00487404(*(undefined8 *)(*param_1 + 0x40));
  return;
}


// ===== 0049c48c  FUN_0049c48c =====

undefined8 * FUN_0049c48c(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  cVar1 = *(char *)(param_1 + 4);
  *puVar2 = *param_1;
  *(undefined1 *)(puVar2 + 1) = 0;
  *(undefined1 *)(puVar2 + 4) = 0;
  if (cVar1 != '\0') {
    FUN_004244a8(puVar2 + 1,param_1 + 1);
  }
  *(undefined2 *)(puVar2 + 5) = *(undefined2 *)(param_1 + 5);
  return puVar2;
}


// ===== 0049c4e0  FUN_0049c4e0 =====

void FUN_0049c4e0(void *param_1)

{
  if ((*(char *)((long)param_1 + 0x20) != '\0') && (*(char *)((long)param_1 + 0x1f) < '\0')) {
    operator_delete(*(void **)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049c518  FUN_0049c518 =====

void FUN_0049c518(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_50;
  long lStack_48;
  long local_40;
  long local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  param_1 = (long *)*param_1;
  local_40 = param_1[3];
  local_38 = param_1[4];
  lStack_48 = param_1[2];
  local_50 = param_1[1];
  uVar2 = *(undefined8 *)(*param_1 + 0x40);
  if (*(long *)(local_38 + 8) != 0) {
    param_1[3] = (long)FUN_00410008;
    param_1[4] = (long)&DAT_001f1910;
  }
  FUN_0048744c(uVar2,&local_50);
  if (*(code **)(local_38 + 8) != (code *)0x0) {
    (**(code **)(local_38 + 8))(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049c5ac  FUN_0049c5ac =====

undefined8 * FUN_0049c5ac(undefined8 *param_1)

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


// ===== 0049c60c  FUN_0049c60c =====

void FUN_0049c60c(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049c640  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0049c644  FUN_0049c644 =====

void FUN_0049c644(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  uVar1 = FUN_005ce36c();
  plVar2 = (long *)FUN_0043a79c(*(undefined8 *)(*plVar5 + 0x20),plVar5 + 2);
  if (*plVar2 == 0) {
    uVar3 = FUN_0044075c();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/voice_connection.cpp",0x7f8,
                   "GetUserMuteState(): Unable to find user ",plVar5 + 2);
    }
  }
  else {
    *(undefined1 *)plVar5[1] = *(undefined1 *)(*plVar2 + 0x3c);
  }
  uVar4 = FUN_005ce36c();
  (*(code *)plVar5[10])(plVar5 + 8,plVar5 + 5,plVar5[0xc],uVar1,uVar4);
  FUN_00520464(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 0049c6f0  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0049c6f4  FUN_0049c6f4 =====

void FUN_0049c6f4(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar1 = (long *)FUN_0043a79c(*(undefined8 *)(*plVar3 + 0x20),plVar3 + 2);
  if (*plVar1 == 0) {
    uVar2 = FUN_0044075c();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/voice_connection.cpp",0x7f8,
                   "GetUserMuteState(): Unable to find user ",plVar3 + 2);
    }
  }
  else {
    *(undefined1 *)plVar3[1] = *(undefined1 *)(*plVar1 + 0x3c);
  }
  FUN_00520464(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 0049c778  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0049c77c  FUN_0049c77c =====

void FUN_0049c77c(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  uVar1 = FUN_005ce36c();
  plVar2 = (long *)FUN_0043a79c(*(undefined8 *)(*plVar5 + 0x20),plVar5 + 2);
  if (*plVar2 == 0) {
    uVar3 = FUN_0044075c();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/voice_connection.cpp",0x868,
                   "IsRemoteUserSpeaking(): Unable to find user ",plVar5 + 2);
    }
  }
  else {
    *(bool *)plVar5[1] = *(int *)(*plVar2 + 0x40) != 0;
  }
  uVar4 = FUN_005ce36c();
  (*(code *)plVar5[10])(plVar5 + 8,plVar5 + 5,plVar5[0xc],uVar1,uVar4);
  FUN_00520464(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 0049c830  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0049c834  FUN_0049c834 =====

void FUN_0049c834(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar1 = (long *)FUN_0043a79c(*(undefined8 *)(*plVar3 + 0x20),plVar3 + 2);
  if (*plVar1 == 0) {
    uVar2 = FUN_0044075c();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/voice_connection.cpp",0x868,
                   "IsRemoteUserSpeaking(): Unable to find user ",plVar3 + 2);
    }
  }
  else {
    *(bool *)plVar3[1] = *(int *)(*plVar1 + 0x40) != 0;
  }
  FUN_00520464(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 0049c8c0  FUN_0049c8c0 =====

void FUN_0049c8c0(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  plVar1 = (long *)FUN_0043a79c(*(undefined8 *)(*plVar3 + 0x20),plVar3 + 1);
  if (*plVar1 != 0) {
    FUN_004817d4(*plVar1,(char)plVar3[4]);
    return;
  }
  uVar2 = FUN_0044075c();
  if ((uVar2 & 1) != 0) {
    return;
  }
  FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/voice_connection.cpp",0x8e0,
               "SetRemoteUserSpeaking(): Unable to find user ",plVar3 + 1);
  return;
}


// ===== 0049c93c  FUN_0049c93c =====

undefined8 * FUN_0049c93c(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *__dest;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)operator_new(0x28);
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
  *(undefined1 *)(puVar4 + 4) = *(undefined1 *)(param_1 + 4);
  return puVar4;
}


// ===== 0049ca30  FUN_0049ca30 =====

void FUN_0049ca30(void *param_1)

{
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete(*(void **)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049ca60  FUN_0049ca60 =====

void FUN_0049ca60(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  plVar1 = (long *)FUN_0043a79c(*(undefined8 *)(*plVar3 + 0x20),plVar3 + 1);
  if (*plVar1 != 0) {
    FUN_0048185c(*plVar1,(char)plVar3[4]);
    return;
  }
  uVar2 = FUN_0044075c();
  if ((uVar2 & 1) != 0) {
    return;
  }
  FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/voice_connection.cpp",0x948,
               "SetRemoteUserCanHavePriority(): Unable to find user ",plVar3 + 1);
  return;
}


// ===== 0049cadc  FUN_0049cadc =====

undefined8 * FUN_0049cadc(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *__dest;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)operator_new(0x28);
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
  *(undefined1 *)(puVar4 + 4) = *(undefined1 *)(param_1 + 4);
  return puVar4;
}


// ===== 0049cbd0  FUN_0049cbd0 =====

void FUN_0049cbd0(void *param_1)

{
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete(*(void **)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049cc00  FUN_0049cc00 =====

void FUN_0049cc00(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  plVar1 = (long *)FUN_0043a79c(*(undefined8 *)(*plVar3 + 0x20),plVar3 + 1);
  if (*plVar1 != 0) {
    FUN_00481b50(*plVar1,(char)plVar3[4]);
    return;
  }
  uVar2 = FUN_0044075c();
  if ((uVar2 & 1) != 0) {
    return;
  }
  FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/voice_connection.cpp",0x9b8,
               "DisableUserVideo(): Unable to find user ",plVar3 + 1);
  return;
}


// ===== 0049cc7c  FUN_0049cc7c =====

undefined8 * FUN_0049cc7c(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *__dest;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)operator_new(0x28);
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
  *(undefined1 *)(puVar4 + 4) = *(undefined1 *)(param_1 + 4);
  return puVar4;
}


// ===== 0049cd70  FUN_0049cd70 =====

void FUN_0049cd70(void *param_1)

{
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete(*(void **)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049cda0  FUN_0049cda0 =====

void FUN_0049cda0(long *param_1)

{
  FUN_0043b43c(*(undefined8 *)(*(long *)*param_1 + 0x20),(long *)*param_1 + 1);
  return;
}


// ===== 0049cdb0  FUN_0049cdb0 =====

undefined8 * FUN_0049cdb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x440);
  *puVar1 = *param_1;
  FUN_004964c0(puVar1 + 1,param_1 + 1);
  return puVar1;
}


// ===== 0049cdec  FUN_0049cdec =====

void FUN_0049cdec(void *param_1)

{
  void *pvVar1;
  code *pcVar2;
  
  FUN_004379f4((long)param_1 + 0x348);
  FUN_0043ba38((long)param_1 + 0x1b8);
  pcVar2 = *(code **)(*(long *)((long)param_1 + 0x188) + 8);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*(undefined8 *)((long)param_1 + 0x170));
  }
  pcVar2 = *(code **)(*(long *)((long)param_1 + 0x160) + 8);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*(undefined8 *)((long)param_1 + 0x148));
  }
  pvVar1 = *(void **)((long)param_1 + 0x128);
  if (pvVar1 != (void *)0x0) {
    *(void **)((long)param_1 + 0x130) = pvVar1;
    operator_delete(pvVar1);
  }
  if (*(char *)((long)param_1 + 0x127) < '\0') {
    operator_delete(*(void **)((long)param_1 + 0x110));
  }
  pcVar2 = *(code **)(*(long *)((long)param_1 + 0x78) + 8);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*(undefined8 *)((long)param_1 + 0x60));
  }
  pcVar2 = *(code **)(*(long *)((long)param_1 + 0x48) + 8);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*(undefined8 *)((long)param_1 + 0x30));
  }
  pcVar2 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049cea0  FUN_0049cea0 =====

void FUN_0049cea0(long *param_1)

{
  FUN_0043b43c(*(undefined8 *)(*(long *)*param_1 + 0x20),(long *)*param_1 + 1);
  return;
}


// ===== 0049ceb0  FUN_0049ceb0 =====

undefined8 * FUN_0049ceb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x440);
  *puVar1 = *param_1;
  FUN_004964c0(puVar1 + 1,param_1 + 1);
  return puVar1;
}


// ===== 0049ceec  FUN_0049ceec =====

void FUN_0049ceec(void *param_1)

{
  void *pvVar1;
  code *pcVar2;
  
  FUN_004379f4((long)param_1 + 0x348);
  FUN_0043ba38((long)param_1 + 0x1b8);
  pcVar2 = *(code **)(*(long *)((long)param_1 + 0x188) + 8);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*(undefined8 *)((long)param_1 + 0x170));
  }
  pcVar2 = *(code **)(*(long *)((long)param_1 + 0x160) + 8);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*(undefined8 *)((long)param_1 + 0x148));
  }
  pvVar1 = *(void **)((long)param_1 + 0x128);
  if (pvVar1 != (void *)0x0) {
    *(void **)((long)param_1 + 0x130) = pvVar1;
    operator_delete(pvVar1);
  }
  if (*(char *)((long)param_1 + 0x127) < '\0') {
    operator_delete(*(void **)((long)param_1 + 0x110));
  }
  pcVar2 = *(code **)(*(long *)((long)param_1 + 0x78) + 8);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*(undefined8 *)((long)param_1 + 0x60));
  }
  pcVar2 = *(code **)(*(long *)((long)param_1 + 0x48) + 8);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*(undefined8 *)((long)param_1 + 0x30));
  }
  pcVar2 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049cfa0  FUN_0049cfa0 =====

void FUN_0049cfa0(long *param_1)

{
  FUN_00462560(*(undefined8 *)(*(long *)(*param_1 + 0x20) + 0x3d8),(char)param_1[1]);
  return;
}


// ===== 0049cfb8  FUN_0049cfb8 =====

void FUN_0049cfb8(long *param_1)

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
  FUN_0043a924(uVar2,&local_50);
  if ((code *)local_38[1] != (code *)0x0) {
    (*(code *)local_38[1])(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049d048  FUN_0049d048 =====

undefined8 * FUN_0049d048(undefined8 *param_1)

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


// ===== 0049d0a8  FUN_0049d0a8 =====

void FUN_0049d0a8(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049d0dc  FUN_0049d0dc =====

void FUN_0049d0dc(long *param_1)

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
  FUN_0043ac00(uVar2,&local_50);
  if ((code *)local_38[1] != (code *)0x0) {
    (*(code *)local_38[1])(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049d16c  FUN_0049d16c =====

undefined8 * FUN_0049d16c(undefined8 *param_1)

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


// ===== 0049d1cc  FUN_0049d1cc =====

void FUN_0049d1cc(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049d200  FUN_0049d200 =====

void FUN_0049d200(long *param_1)

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
  FUN_0043ac7c(uVar2,&local_50);
  if ((code *)local_38[1] != (code *)0x0) {
    (*(code *)local_38[1])(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049d290  FUN_0049d290 =====

undefined8 * FUN_0049d290(undefined8 *param_1)

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


// ===== 0049d2f0  FUN_0049d2f0 =====

void FUN_0049d2f0(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049d324  FUN_0049d324 =====

void FUN_0049d324(long *param_1)

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
  FUN_0043acf8(uVar2,&local_50);
  if ((code *)local_38[1] != (code *)0x0) {
    (*(code *)local_38[1])(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049d3b4  FUN_0049d3b4 =====

undefined8 * FUN_0049d3b4(undefined8 *param_1)

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


// ===== 0049d414  FUN_0049d414 =====

void FUN_0049d414(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049d448  FUN_0049d448 =====

void FUN_0049d448(long *param_1)

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
  FUN_0043afb0(uVar2,&local_50);
  if ((code *)local_38[1] != (code *)0x0) {
    (*(code *)local_38[1])(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049d4d8  FUN_0049d4d8 =====

undefined8 * FUN_0049d4d8(undefined8 *param_1)

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


// ===== 0049d538  FUN_0049d538 =====

void FUN_0049d538(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049d56c  FUN_0049d56c =====

void FUN_0049d56c(long *param_1)

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
  FUN_0043b02c(uVar2,&local_50);
  if ((code *)local_38[1] != (code *)0x0) {
    (*(code *)local_38[1])(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049d5fc  FUN_0049d5fc =====

undefined8 * FUN_0049d5fc(undefined8 *param_1)

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


// ===== 0049d65c  FUN_0049d65c =====

void FUN_0049d65c(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049d690  FUN_0049d690 =====

void FUN_0049d690(long *param_1)

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
  FUN_0043b0a8(uVar2,&local_50);
  if ((code *)local_38[1] != (code *)0x0) {
    (*(code *)local_38[1])(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049d720  FUN_0049d720 =====

undefined8 * FUN_0049d720(undefined8 *param_1)

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


// ===== 0049d780  FUN_0049d780 =====

void FUN_0049d780(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049d7b4  FUN_0049d7b4 =====

void FUN_0049d7b4(long *param_1)

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
  FUN_0043b124(uVar2,&local_50);
  if ((code *)local_38[1] != (code *)0x0) {
    (*(code *)local_38[1])(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049d844  FUN_0049d844 =====

undefined8 * FUN_0049d844(undefined8 *param_1)

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


// ===== 0049d8a4  FUN_0049d8a4 =====

void FUN_0049d8a4(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049d8d8  FUN_0049d8d8 =====

void FUN_0049d8d8(long *param_1)

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
  FUN_0043b1a0(uVar2,&local_50);
  if ((code *)local_38[1] != (code *)0x0) {
    (*(code *)local_38[1])(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049d968  FUN_0049d968 =====

undefined8 * FUN_0049d968(undefined8 *param_1)

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


// ===== 0049d9c8  FUN_0049d9c8 =====

void FUN_0049d9c8(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049d9fc  FUN_0049d9fc =====

void FUN_0049d9fc(long *param_1)

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
  FUN_0043b344(uVar2,&local_50);
  if ((code *)local_38[1] != (code *)0x0) {
    (*(code *)local_38[1])(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049da8c  FUN_0049da8c =====

undefined8 * FUN_0049da8c(undefined8 *param_1)

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


// ===== 0049daec  FUN_0049daec =====

void FUN_0049daec(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049db20  FUN_0049db20 =====

void FUN_0049db20(long *param_1)

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
  FUN_0043b3c0(uVar2,&local_50);
  if ((code *)local_38[1] != (code *)0x0) {
    (*(code *)local_38[1])(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049dbb0  FUN_0049dbb0 =====

undefined8 * FUN_0049dbb0(undefined8 *param_1)

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


// ===== 0049dc10  FUN_0049dc10 =====

void FUN_0049dc10(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049dc44  FUN_0049dc44 =====

void FUN_0049dc44(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0049dc50  FUN_0049dc50 =====

void FUN_0049dc50(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *local_58 [2];
  code *local_48;
  undefined **local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)*param_1;
  lVar2 = plVar3[1];
  puVar5 = (undefined8 *)plVar3[4];
  lVar7 = plVar3[3];
  lVar6 = plVar3[2];
  uVar4 = *(undefined8 *)(*plVar3 + 0x20);
  if ((code *)*puVar5 != (code *)0x0) {
    lVar2 = (*(code *)*puVar5)(lVar2);
  }
  local_48 = FUN_0049dd38;
  local_40 = &PTR_FUN_00d1e148;
  local_58[0] = (long *)operator_new(0x20);
  *local_58[0] = lVar2;
  local_58[0][3] = (long)puVar5;
  local_58[0][2] = lVar7;
  local_58[0][1] = lVar6;
  if (puVar5[1] != 0) {
    puVar5 = &DAT_001f1910;
  }
  FUN_0043a4bc(uVar4,local_58);
  if ((code *)local_40[1] != (code *)0x0) {
    (*(code *)local_40[1])(local_58[0]);
  }
  if ((code *)puVar5[1] != (code *)0x0) {
    (*(code *)puVar5[1])(lVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049dd38  FUN_0049dd38 =====

/* WARNING: Removing unreachable block (ram,0x0049de5c) */

void FUN_0049dd38(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 ***__src;
  ulong uVar2;
  undefined4 uVar3;
  char cVar4;
  long lVar5;
  undefined8 ***__dest;
  long lVar6;
  void *local_d0 [2];
  char local_b9;
  undefined8 **local_b8;
  ulong local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [40];
  undefined3 local_78;
  undefined1 uStack_75;
  undefined3 uStack_74;
  undefined **local_70 [5];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  __src = (undefined8 ***)*param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined4 *)(param_2 + 2);
  lVar6 = *param_1;
  *param_2 = 0;
  cVar4 = *(char *)((long)param_2 + 0x17);
  param_2[1] = 0;
  param_2[2] = 0;
  local_78 = (undefined3)uVar3;
  uStack_75 = (undefined1)*(undefined4 *)((long)param_2 + 0x13);
  uStack_74 = (undefined3)((uint)*(undefined4 *)((long)param_2 + 0x13) >> 8);
  FUN_004df808(auStack_a0,param_3);
  if (cVar4 < '\0') {
    if (uVar2 < 0x17) {
      __dest = &local_b8;
      local_a8 = CONCAT17((char)uVar2,(undefined7)local_a8);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 ***)operator_new(uVar1);
      local_a8 = uVar1 | 0x8000000000000000;
      local_b8 = __dest;
      local_b0 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined8 ***)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    local_a8._0_7_ = CONCAT43(CONCAT31(uStack_74,uStack_75),local_78);
    local_a8 = CONCAT17(cVar4,(undefined7)local_a8);
    local_b8 = __src;
    local_b0 = uVar2;
  }
  FUN_004e36c8(local_70);
  FUN_004e36e0(local_d0,local_70,auStack_a0);
  (**(code **)(lVar6 + 0x10))(lVar6,&local_b8,local_d0);
  if (local_b9 < '\0') {
    operator_delete(local_d0[0]);
  }
  local_70[0] = &PTR_FUN_00d1f540;
  FUN_004e36c0(local_70);
  if ((long)local_a8 < 0) {
    operator_delete(local_b8);
  }
  FUN_004df880(auStack_a0);
  if (cVar4 < '\0') {
    operator_delete(__src);
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0049dee8  FUN_0049dee8 =====

undefined8 * FUN_0049dee8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  uVar3 = param_1[2];
  puVar1 = (undefined8 *)param_1[3];
  uVar5 = *param_1;
  pcVar4 = (code *)*puVar1;
  puVar2[1] = param_1[1];
  *puVar2 = uVar5;
  puVar2[2] = uVar3;
  puVar2[3] = puVar1;
  if (pcVar4 != (code *)0x0) {
    uVar3 = (*pcVar4)(*param_1);
    *puVar2 = uVar3;
  }
  return puVar2;
}


// ===== 0049df38  FUN_0049df38 =====

void FUN_0049df38(undefined8 *param_1)

{
  if (*(code **)(param_1[3] + 8) != (code *)0x0) {
    (**(code **)(param_1[3] + 8))(*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 0049df6c  FUN_0049df6c =====

undefined8 * FUN_0049df6c(undefined8 *param_1)

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


// ===== 0049dfcc  FUN_0049dfcc =====

void FUN_0049dfcc(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049e000  FUN_0049e000 =====

void FUN_0049e000(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 ****__src;
  undefined1 *__src_00;
  ulong uVar2;
  char cVar3;
  long lVar4;
  undefined8 ****__dest;
  undefined1 **__dest_00;
  undefined8 uVar5;
  long *plVar6;
  undefined1 *local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 ***local_60;
  ulong uStack_58;
  undefined8 local_50;
  long local_48;
  
  __dest_00 = &local_80;
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  plVar6 = (long *)*param_1;
  uVar5 = *(undefined8 *)(*(long *)(*plVar6 + 0x20) + 0x3d8);
  if (*(char *)((long)plVar6 + 0x1f) < '\0') {
    __src = (undefined8 ****)plVar6[1];
    uVar2 = plVar6[2];
    if (uVar2 < 0x17) {
      __dest = &local_60;
      local_50 = CONCAT17((char)uVar2,(undefined7)local_50);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 ****)operator_new(uVar1);
      local_50 = uVar1 | 0x8000000000000000;
      local_60 = __dest;
      uStack_58 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined8 ****)((long)__dest + uVar2 + 1)))
    goto LAB_0049e1a4;
    memmove(__dest,__src,uVar2 + 1);
    cVar3 = *(char *)((long)plVar6 + 0x37);
  }
  else {
    local_50 = plVar6[3];
    uStack_58 = plVar6[2];
    local_60 = (undefined8 ***)plVar6[1];
    cVar3 = *(char *)((long)plVar6 + 0x37);
  }
  if (cVar3 < '\0') {
    __src_00 = (undefined1 *)plVar6[4];
    uVar2 = plVar6[5];
    if (uVar2 < 0x17) {
      local_70 = CONCAT17((char)uVar2,(undefined7)local_70);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest_00 = (undefined1 **)operator_new(uVar1);
      local_70 = uVar1 | 0x8000000000000000;
      local_80 = (undefined1 *)__dest_00;
      uStack_78 = uVar2;
    }
    if ((__dest_00 <= __src_00) && (__src_00 < (undefined1 *)((long)__dest_00 + uVar2 + 1))) {
LAB_0049e1a4:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest_00,__src_00,uVar2 + 1);
  }
  else {
    uStack_78 = plVar6[5];
    local_80 = (undefined1 *)plVar6[4];
    local_70 = plVar6[6];
  }
  FUN_004629b0(uVar5,&local_60,&local_80);
  if ((long)local_70 < 0) {
    operator_delete(local_80);
  }
  if ((long)local_50 < 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0049e1d8  FUN_0049e1d8 =====

undefined8 * FUN_0049e1d8(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar5 = (undefined8 *)operator_new(0x38);
  cVar4 = *(char *)((long)param_1 + 0x1f);
  puVar6 = puVar5 + 1;
  *puVar5 = *param_1;
  if (cVar4 < '\0') {
    puVar2 = (undefined8 *)param_1[1];
    uVar3 = param_1[2];
    if (uVar3 < 0x17) {
      *(char *)((long)puVar5 + 0x1f) = (char)uVar3;
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      puVar6 = (undefined8 *)operator_new(uVar1);
      puVar5[1] = puVar6;
      puVar5[2] = uVar3;
      puVar5[3] = uVar1 | 0x8000000000000000;
    }
    if ((puVar6 <= puVar2) && (puVar2 < (undefined8 *)((long)puVar6 + uVar3 + 1)))
    goto LAB_0049e320;
    memmove(puVar6,puVar2,uVar3 + 1);
  }
  else {
    uVar8 = param_1[1];
    uVar7 = param_1[3];
    puVar5[2] = param_1[2];
    *puVar6 = uVar8;
    puVar5[3] = uVar7;
  }
  puVar6 = puVar5 + 4;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    puVar2 = (undefined8 *)param_1[4];
    uVar3 = param_1[5];
    if (uVar3 < 0x17) {
      *(char *)((long)puVar5 + 0x37) = (char)uVar3;
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      puVar6 = (undefined8 *)operator_new(uVar1);
      puVar5[4] = puVar6;
      puVar5[5] = uVar3;
      puVar5[6] = uVar1 | 0x8000000000000000;
    }
    if ((puVar6 <= puVar2) && (puVar2 < (undefined8 *)((long)puVar6 + uVar3 + 1))) {
LAB_0049e320:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(puVar6,puVar2,uVar3 + 1);
  }
  else {
    uVar8 = param_1[4];
    uVar7 = param_1[6];
    puVar5[5] = param_1[5];
    *puVar6 = uVar8;
    puVar5[6] = uVar7;
  }
  return puVar5;
}


// ===== 0049e350  FUN_0049e350 =====

void FUN_0049e350(void *param_1)

{
  char cVar1;
  
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete(*(void **)((long)param_1 + 0x20));
    cVar1 = *(char *)((long)param_1 + 0x1f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x1f);
  }
  if (cVar1 < '\0') {
    operator_delete(*(void **)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049e39c  FUN_0049e39c =====

void FUN_0049e39c(long *param_1)

{
  FUN_00462c64(*(undefined8 *)(*(long *)(*param_1 + 0x20) + 0x3d8));
  return;
}


// ===== 0049e3ac  FUN_0049e3ac =====

void FUN_0049e3ac(long *param_1)

{
  FUN_00461950(*(undefined8 *)(*(long *)(*param_1 + 0x20) + 0x3d8));
  return;
}


// ===== 0049e3bc  FUN_0049e3bc =====

void FUN_0049e3bc(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = (long *)*param_1;
  lVar2 = plVar7[1];
  lVar6 = plVar7[2];
  uVar5 = *(undefined8 *)(*(long *)(*plVar7 + 0x20) + 0x3d8);
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_00463488(uVar5,lVar2,lVar6,(char)plVar7[3]);
  return;
}


// ===== 0049e3f0  FUN_0049e3f0 =====

void FUN_0049e3f0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)operator_new(0x20);
  uVar6 = *param_1;
  lVar5 = param_1[2];
  puVar4[1] = param_1[1];
  *puVar4 = uVar6;
  puVar4[2] = lVar5;
  if (lVar5 != 0) {
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
  *(undefined1 *)(puVar4 + 3) = *(undefined1 *)(param_1 + 3);
  return;
}


// ===== 0049e444  FUN_0049e444 =====

void FUN_0049e444(void *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)((long)param_1 + 0x10);
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


// ===== 0049e49c  FUN_0049e49c =====

void FUN_0049e49c(long *param_1)

{
  FUN_00463488(*(undefined8 *)(*(long *)(*param_1 + 0x20) + 0x3d8),0,0,0);
  return;
}


// ===== 0049e4b8  FUN_0049e4b8 =====

void FUN_0049e4b8(long *param_1)

{
  FUN_00463494(*(undefined8 *)(*(long *)(*(long *)*param_1 + 0x20) + 0x3d8),(long *)*param_1 + 1);
  return;
}


// ===== 0049e4cc  FUN_0049e4cc =====

undefined8 * FUN_0049e4cc(undefined8 *param_1)

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


// ===== 0049e5b0  FUN_0049e5b0 =====

void FUN_0049e5b0(void *param_1)

{
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete(*(void **)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0049e5e0  FUN_0049e5e0 =====

void FUN_0049e5e0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  lVar1 = ((long *)*param_1)[1];
  if (*(long *)*param_1 == 0) {
    if (*(long *)(lVar2 + 0x28) == local_28) {
      FUN_00461950(*(undefined8 *)(*(long *)(lVar1 + 0x20) + 0x3d8));
      return;
    }
  }
  else {
    auVar3 = FUN_0049e678(auStack_30);
    FUN_00463524(*(undefined8 *)(*(long *)(lVar1 + 0x20) + 0x3d8),auVar3._0_8_,auVar3._8_8_);
    if (*(long *)(lVar2 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049e678  FUN_0049e678 =====

undefined1  [16] FUN_0049e678(undefined8 param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  long local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar4 = (long *)operator_new(0x4a8);
  lVar6 = *param_2;
  local_50 = 0;
  plVar8 = plVar4 + 1;
  *plVar8 = 0;
  plVar9 = plVar4 + 2;
  *plVar9 = 0;
  plVar7 = plVar4 + 3;
  *plVar4 = (long)&PTR_FUN_00d1e498;
  if (lVar6 != 0) {
    plVar5 = (long *)FUN_004a2934();
    local_50 = (**(code **)(*plVar5 + 0xa8))(plVar5,*param_2);
  }
  FUN_004c1dc4(plVar7,&local_50);
  if (local_50 != 0) {
    plVar5 = (long *)FUN_004a2934();
    (**(code **)(*plVar5 + 0xb0))(plVar5,local_50);
  }
  if (plVar4[5] == 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = *plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4[4] = (long)plVar7;
    plVar4[5] = (long)plVar4;
  }
  else {
    if (*(long *)(plVar4[5] + 8) != -1) goto LAB_0049e7a8;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = *plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4[4] = (long)plVar7;
    plVar4[5] = (long)plVar4;
    FUN_005466cc();
  }
  do {
    lVar6 = *plVar8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_005466cc(plVar4);
  }
LAB_0049e7a8:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    auVar10._8_8_ = plVar4;
    auVar10._0_8_ = plVar7;
    return auVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049e7dc  FUN_0049e7dc =====

void FUN_0049e7dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1e498;
  FUN_005466c0();
  return;
}


// ===== 0049e7ec  FUN_0049e7ec =====

void FUN_0049e7ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1e498;
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 0049e81c  FUN_0049e81c =====

void FUN_0049e81c(long param_1)

{
  FUN_004c1e7c(param_1 + 0x18);
  return;
}


// ===== 0049e824  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0049e828  FUN_0049e828 =====

undefined8 * FUN_0049e828(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  puVar1[1] = param_1[1];
  return puVar1;
}


// ===== 0049e880  FUN_0049e880 =====

void FUN_0049e880(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 0049e8bc  FUN_0049e8bc =====

void FUN_0049e8bc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1 = (undefined8 *)*param_1;
  uVar5 = *param_1;
  uVar4 = *(undefined8 *)(*(long *)(param_1[2] + 0x20) + 0x3d8);
  if (param_1[1] != 0) {
    plVar1 = (long *)(param_1[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_004635a4(uVar4,uVar5);
  return;
}


// ===== 0049e8ec  FUN_0049e8ec =====

void FUN_0049e8ec(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)operator_new(0x18);
  lVar2 = param_1[1];
  *puVar5 = *param_1;
  puVar5[1] = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar5[2] = param_1[2];
  return;
}


// ===== 0049e938  FUN_0049e938 =====

void FUN_0049e938(void *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)((long)param_1 + 8);
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


// ===== 0049e990  FUN_0049e990 =====

/* WARNING: Removing unreachable block (ram,0x0049ec40) */
/* WARNING: Removing unreachable block (ram,0x0049ebf0) */
/* WARNING: Removing unreachable block (ram,0x0049eb94) */
/* WARNING: Removing unreachable block (ram,0x0049ebb4) */
/* WARNING: Removing unreachable block (ram,0x0049ec50) */

void FUN_0049e990(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  void *pvVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  void *local_2b8;
  void *local_2b0;
  undefined4 local_2a0;
  undefined1 local_29c;
  undefined2 local_298;
  undefined5 local_294;
  undefined3 uStack_28f;
  undefined5 uStack_28c;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268;
  undefined1 auStack_260 [240];
  undefined1 local_170;
  undefined5 uStack_168;
  undefined3 local_163;
  undefined5 uStack_160;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined1 local_134;
  undefined4 local_130;
  undefined1 local_12c;
  undefined4 local_128;
  undefined1 local_124;
  undefined4 local_120;
  undefined1 local_11c;
  undefined4 local_118;
  undefined1 local_114;
  undefined4 local_110;
  undefined1 local_10c;
  undefined4 local_108;
  undefined1 local_104;
  undefined4 local_100;
  undefined1 local_fc;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined2 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  void *local_98;
  void *local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined2 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined2 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar10 = (long *)*param_1;
  local_138 = 0;
  local_130 = (undefined4)plVar10[1];
  local_12c = 1;
  local_128 = *(undefined4 *)((long)plVar10 + 0xc);
  local_124 = 1;
  local_120 = 0;
  local_11c = 0;
  local_118 = 0;
  local_114 = 0;
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  local_104 = 0;
  local_100 = (undefined4)plVar10[2];
  local_fc = 1;
  local_134 = 0;
  local_f8 = *(undefined4 *)((long)plVar10 + 0x14);
  local_f4 = 1;
  local_f0 = 0;
  local_ec = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_e0 = 0;
  local_c0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_d8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_b8 = 0;
  local_80 = 0;
  local_90 = (void *)0x0;
  uStack_88 = 0;
  local_98 = (void *)0x0;
  local_78 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar9 = *(undefined8 *)(*(long *)(*plVar10 + 0x20) + 0x3d8);
  FUN_00469548(&local_2b8,uVar9);
  if (local_2b8 != local_2b0) {
    uVar1 = *(undefined4 *)((long)plVar10 + 0xc);
    uVar2 = (undefined4)plVar10[2];
    uVar6 = (long)local_2b0 + (-0x48 - (long)local_2b8);
    pvVar4 = local_2b8;
    if (0x47 < uVar6) {
      uVar6 = uVar6 / 0x48 + 1;
      uVar7 = uVar6 & 0x7fffffffffffffe;
      pvVar4 = (void *)((long)local_2b8 + uVar7 * 0x48);
      puVar5 = (undefined4 *)((long)local_2b8 + 0x84);
      uVar8 = uVar7;
      do {
        uVar8 = uVar8 - 2;
        puVar5[-0x16] = uVar1;
        puVar5[-4] = uVar1;
        puVar5[-0x12] = uVar2;
        *puVar5 = uVar2;
        puVar5 = puVar5 + 0x24;
      } while (uVar8 != 0);
      if (uVar6 == uVar7) goto LAB_0049eb00;
    }
    do {
      *(undefined4 *)((long)pvVar4 + 0x2c) = uVar1;
      *(undefined4 *)((long)pvVar4 + 0x3c) = uVar2;
      pvVar4 = (void *)((long)pvVar4 + 0x48);
    } while (pvVar4 != local_2b0);
  }
LAB_0049eb00:
  local_2a0 = 0;
  local_29c = 0;
  local_298 = 0;
  local_294 = 0;
  uStack_28f = 0;
  uStack_28c = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_280 = 0;
  local_268 = 0;
  FUN_004426bc(auStack_260,&local_138);
  local_170 = 1;
  uStack_160 = 0;
  uStack_168 = 0;
  local_163 = 0;
  FUN_0049ec60(auStack_158,&local_2b8);
  FUN_00464438(uVar9,&local_2a0);
  FUN_0043ba38(&local_2a0);
  if (local_2b8 != (void *)0x0) {
    for (; local_2b0 != local_2b8; local_2b0 = (void *)((long)local_2b0 + -0x48)) {
    }
    local_2b0 = local_2b8;
    operator_delete(local_2b8);
  }
  if (local_98 != (void *)0x0) {
    for (; local_90 != local_98; local_90 = (void *)((long)local_90 + -0x18)) {
    }
    local_90 = local_98;
    operator_delete(local_98);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


