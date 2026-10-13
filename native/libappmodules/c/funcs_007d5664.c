// ===== 007d5664  FUN_007d5664 =====

void FUN_007d5664(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985f80;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d56a4  FUN_007d56a4 =====

undefined8 * FUN_007d56a4(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00985f80;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d56f0 to 007d56f3 has its CatchHandler @ 007d5704 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007d5718  FUN_007d5718 =====

void FUN_007d5718(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00985f80;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
    return;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  __init_copy_ctor_external
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  return;
}


// ===== 007d5754  FUN_007d5754 =====

void FUN_007d5754(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007d5768  FUN_007d5768 =====

void FUN_007d5768(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007d579c  FUN_007d579c =====

void FUN_007d579c(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d57dc to 007d57f3 has its CatchHandler @ 007d5828 */
  FUN_007ccecc(&local_40,param_3,"keyCommand",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d5860  FUN_007d5860 =====

long FUN_007d5860(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter10onPressKeyENS1_10OnPressKeyEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d587c  FUN_007d587c =====

pointer_____offset_0x10___ * FUN_007d587c(void)

{
  return &PTR_vtable_00985fe0;
}


// ===== 007d5888  FUN_007d5888 =====

void FUN_007d5888(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986000;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d58d8  FUN_007d58d8 =====

void FUN_007d58d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986000;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d5924  FUN_007d5924 =====

undefined8 * FUN_007d5924(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00986000;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d5978 to 007d597f has its CatchHandler @ 007d59d8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = uVar4;
    puVar2[6] = uVar3;
  }
  else {
                    /* try { // try from 007d59a4 to 007d59ab has its CatchHandler @ 007d59c0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007d59ec  FUN_007d59ec =====

void FUN_007d59ec(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00986000;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    param_2[6] = *(undefined8 *)(param_1 + 0x30);
    param_2[5] = uVar2;
    param_2[4] = uVar1;
  }
  else {
                    /* try { // try from 007d5a64 to 007d5a6b has its CatchHandler @ 007d5a7c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007d5a98  FUN_007d5a98 =====

void FUN_007d5a98(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007d5adc  FUN_007d5adc =====

void FUN_007d5adc(void *param_1)

{
  if ((*(byte *)((long)param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x30));
  }
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007d5b1c  FUN_007d5b1c =====

void FUN_007d5b1c(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d5b5c to 007d5b8b has its CatchHandler @ 007d5bc0 */
  FUN_007ccecc(&local_40,param_3,"giftCode",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 0x20);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d5bf8  FUN_007d5bf8 =====

long FUN_007d5bf8(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter18onTapGiftCodeEmbedENS1_18OnTapGiftCodeEmbedEE3$_0")
  {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d5c14  FUN_007d5c14 =====

pointer_____offset_0x10___ * FUN_007d5c14(void)

{
  return &PTR_vtable_00986060;
}


// ===== 007d5c20  FUN_007d5c20 =====

void FUN_007d5c20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986080;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d5c70  FUN_007d5c70 =====

void FUN_007d5c70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986080;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d5cbc  FUN_007d5cbc =====

undefined8 * FUN_007d5cbc(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00986080;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d5d10 to 007d5d17 has its CatchHandler @ 007d5d70 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = uVar4;
    puVar2[6] = uVar3;
  }
  else {
                    /* try { // try from 007d5d3c to 007d5d43 has its CatchHandler @ 007d5d58 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007d5d84  FUN_007d5d84 =====

void FUN_007d5d84(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00986080;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    param_2[6] = *(undefined8 *)(param_1 + 0x30);
    param_2[5] = uVar2;
    param_2[4] = uVar1;
  }
  else {
                    /* try { // try from 007d5dfc to 007d5e03 has its CatchHandler @ 007d5e14 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007d5e30  FUN_007d5e30 =====

void FUN_007d5e30(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007d5e74  FUN_007d5e74 =====

void FUN_007d5e74(void *param_1)

{
  if ((*(byte *)((long)param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x30));
  }
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007d5eb4  FUN_007d5eb4 =====

void FUN_007d5eb4(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d5ef4 to 007d5f23 has its CatchHandler @ 007d5f58 */
  FUN_007ccecc(&local_40,param_3,"giftCode",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 0x20);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d5f90  FUN_007d5f90 =====

long FUN_007d5f90(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter19onTapGiftCodeAcceptENS1_19OnTapGiftCodeAcceptEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d5fac  FUN_007d5fac =====

pointer_____offset_0x10___ * FUN_007d5fac(void)

{
  return &PTR_vtable_009860e0;
}


// ===== 007d5fb8  FUN_007d5fb8 =====

void FUN_007d5fb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986100;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d5fd8  FUN_007d5fd8 =====

void FUN_007d5fd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986100;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d6018  FUN_007d6018 =====

undefined8 * FUN_007d6018(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00986100;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d6064 to 007d6067 has its CatchHandler @ 007d6078 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007d608c  FUN_007d608c =====

void FUN_007d608c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00986100;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
    return;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  __init_copy_ctor_external
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  return;
}


// ===== 007d60c8  FUN_007d60c8 =====

void FUN_007d60c8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007d60dc  FUN_007d60dc =====

void FUN_007d60dc(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007d6110  FUN_007d6110 =====

void FUN_007d6110(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d6150 to 007d6167 has its CatchHandler @ 007d619c */
  FUN_007ccecc(&local_40,param_3,"referralId",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d61d4  FUN_007d61d4 =====

long FUN_007d61d4(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter19onTapReferralRedeemENS1_19OnTapReferralRedeemEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d61f0  FUN_007d61f0 =====

pointer_____offset_0x10___ * FUN_007d61f0(void)

{
  return &PTR_vtable_00986160;
}


// ===== 007d61fc  FUN_007d61fc =====

void FUN_007d61fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986180;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d624c  FUN_007d624c =====

void FUN_007d624c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986180;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d6298  FUN_007d6298 =====

undefined8 * FUN_007d6298(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x40);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00986180;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d62ec to 007d62f3 has its CatchHandler @ 007d6354 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = uVar4;
    puVar2[6] = uVar3;
  }
  else {
                    /* try { // try from 007d6318 to 007d631f has its CatchHandler @ 007d633c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(param_1 + 0x38);
  return puVar2;
}


// ===== 007d6368  FUN_007d6368 =====

void FUN_007d6368(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00986180;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    param_2[6] = *(undefined8 *)(param_1 + 0x30);
    param_2[5] = uVar2;
    param_2[4] = uVar1;
  }
  else {
                    /* try { // try from 007d63e0 to 007d63e7 has its CatchHandler @ 007d6400 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  *(undefined4 *)(param_2 + 7) = *(undefined4 *)(param_1 + 0x38);
  return;
}


// ===== 007d641c  FUN_007d641c =====

void FUN_007d641c(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007d6460  FUN_007d6460 =====

void FUN_007d6460(void *param_1)

{
  if ((*(byte *)((long)param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x30));
  }
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007d64a0  FUN_007d64a0 =====

void FUN_007d64a0(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d64e0 to 007d6527 has its CatchHandler @ 007d655c */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"recipientUserId",param_2 + 0x20);
  FUN_007cd2fc(&local_40,param_3,"giftIntentType",param_2 + 0x38);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d6594  FUN_007d6594 =====

long FUN_007d6594(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter22onGiftIntentCardViewedENS1_22OnGiftIntentCardViewedEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d65b0  FUN_007d65b0 =====

pointer_____offset_0x10___ * FUN_007d65b0(void)

{
  return &PTR_vtable_009861e0;
}


// ===== 007d65bc  FUN_007d65bc =====

void FUN_007d65bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986200;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d660c  FUN_007d660c =====

void FUN_007d660c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986200;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d6658  FUN_007d6658 =====

undefined8 * FUN_007d6658(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x40);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00986200;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d66ac to 007d66b3 has its CatchHandler @ 007d6714 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = uVar4;
    puVar2[6] = uVar3;
  }
  else {
                    /* try { // try from 007d66d8 to 007d66df has its CatchHandler @ 007d66fc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(param_1 + 0x38);
  return puVar2;
}


// ===== 007d6728  FUN_007d6728 =====

void FUN_007d6728(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00986200;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    param_2[6] = *(undefined8 *)(param_1 + 0x30);
    param_2[5] = uVar2;
    param_2[4] = uVar1;
  }
  else {
                    /* try { // try from 007d67a0 to 007d67a7 has its CatchHandler @ 007d67c0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  *(undefined4 *)(param_2 + 7) = *(undefined4 *)(param_1 + 0x38);
  return;
}


// ===== 007d67dc  FUN_007d67dc =====

void FUN_007d67dc(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007d6820  FUN_007d6820 =====

void FUN_007d6820(void *param_1)

{
  if ((*(byte *)((long)param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x30));
  }
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007d6860  FUN_007d6860 =====

void FUN_007d6860(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d68a0 to 007d68e7 has its CatchHandler @ 007d691c */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"recipientUserId",param_2 + 0x20);
  FUN_007cd2fc(&local_40,param_3,"giftIntentType",param_2 + 0x38);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d6954  FUN_007d6954 =====

long FUN_007d6954(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter25onTapGiftIntentPrimaryCtaENS1_25OnTapGiftIntentPrimaryCtaEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d6970  FUN_007d6970 =====

pointer_____offset_0x10___ * FUN_007d6970(void)

{
  return &PTR_vtable_00986260;
}


// ===== 007d697c  FUN_007d697c =====

void FUN_007d697c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986280;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d69cc  FUN_007d69cc =====

void FUN_007d69cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986280;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d6a18  FUN_007d6a18 =====

undefined8 * FUN_007d6a18(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x40);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00986280;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d6a6c to 007d6a73 has its CatchHandler @ 007d6ad4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = uVar4;
    puVar2[6] = uVar3;
  }
  else {
                    /* try { // try from 007d6a98 to 007d6a9f has its CatchHandler @ 007d6abc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(param_1 + 0x38);
  return puVar2;
}


// ===== 007d6ae8  FUN_007d6ae8 =====

void FUN_007d6ae8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00986280;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    param_2[6] = *(undefined8 *)(param_1 + 0x30);
    param_2[5] = uVar2;
    param_2[4] = uVar1;
  }
  else {
                    /* try { // try from 007d6b60 to 007d6b67 has its CatchHandler @ 007d6b80 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  *(undefined4 *)(param_2 + 7) = *(undefined4 *)(param_1 + 0x38);
  return;
}


// ===== 007d6b9c  FUN_007d6b9c =====

void FUN_007d6b9c(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007d6be0  FUN_007d6be0 =====

void FUN_007d6be0(void *param_1)

{
  if ((*(byte *)((long)param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x30));
  }
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007d6c20  FUN_007d6c20 =====

void FUN_007d6c20(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d6c60 to 007d6ca7 has its CatchHandler @ 007d6cdc */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"recipientUserId",param_2 + 0x20);
  FUN_007cd2fc(&local_40,param_3,"giftIntentType",param_2 + 0x38);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d6d14  FUN_007d6d14 =====

long FUN_007d6d14(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter27onTapGiftIntentSecondaryCtaENS1_27OnTapGiftIntentSecondaryCtaEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d6d30  FUN_007d6d30 =====

pointer_____offset_0x10___ * FUN_007d6d30(void)

{
  return &PTR_vtable_009862e0;
}


// ===== 007d6d3c  FUN_007d6d3c =====

void FUN_007d6d3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986300;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d6d8c  FUN_007d6d8c =====

void FUN_007d6d8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986300;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d6dd8  FUN_007d6dd8 =====

undefined8 * FUN_007d6dd8(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00986300;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d6e2c to 007d6e33 has its CatchHandler @ 007d6e8c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = uVar4;
    puVar2[6] = uVar3;
  }
  else {
                    /* try { // try from 007d6e58 to 007d6e5f has its CatchHandler @ 007d6e74 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007d6ea0  FUN_007d6ea0 =====

void FUN_007d6ea0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00986300;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    param_2[6] = *(undefined8 *)(param_1 + 0x30);
    param_2[5] = uVar2;
    param_2[4] = uVar1;
  }
  else {
                    /* try { // try from 007d6f18 to 007d6f1f has its CatchHandler @ 007d6f30 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007d6f4c  FUN_007d6f4c =====

void FUN_007d6f4c(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007d6f90  FUN_007d6f90 =====

void FUN_007d6f90(void *param_1)

{
  if ((*(byte *)((long)param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x30));
  }
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007d6fd0  FUN_007d6fd0 =====

void FUN_007d6fd0(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d7010 to 007d703f has its CatchHandler @ 007d7074 */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"userId",param_2 + 0x20);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d70ac  FUN_007d70ac =====

long FUN_007d70ac(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter11onTapAvatarENS1_11OnTapAvatarEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d70c8  FUN_007d70c8 =====

pointer_____offset_0x10___ * FUN_007d70c8(void)

{
  return &PTR_vtable_00986360;
}


// ===== 007d70d4  FUN_007d70d4 =====

void FUN_007d70d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986380;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d70f4  FUN_007d70f4 =====

void FUN_007d70f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986380;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d7134  FUN_007d7134 =====

undefined8 * FUN_007d7134(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00986380;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d7180 to 007d7183 has its CatchHandler @ 007d7194 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007d71a8  FUN_007d71a8 =====

void FUN_007d71a8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00986380;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
    return;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  __init_copy_ctor_external
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  return;
}


// ===== 007d71e4  FUN_007d71e4 =====

void FUN_007d71e4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007d71f8  FUN_007d71f8 =====

void FUN_007d71f8(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007d722c  FUN_007d722c =====

void FUN_007d722c(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d726c to 007d7283 has its CatchHandler @ 007d72b8 */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d72f0  FUN_007d72f0 =====

long FUN_007d72f0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter12onTapStickerENS1_12OnTapStickerEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d730c  FUN_007d730c =====

pointer_____offset_0x10___ * FUN_007d730c(void)

{
  return &PTR_vtable_009863e0;
}


// ===== 007d7318  FUN_007d7318 =====

void FUN_007d7318(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986400;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d7338  FUN_007d7338 =====

void FUN_007d7338(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986400;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d7378  FUN_007d7378 =====

undefined8 * FUN_007d7378(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00986400;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d73c4 to 007d73c7 has its CatchHandler @ 007d73d8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007d73ec  FUN_007d73ec =====

void FUN_007d73ec(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00986400;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
    return;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  __init_copy_ctor_external
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  return;
}


// ===== 007d7428  FUN_007d7428 =====

void FUN_007d7428(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007d743c  FUN_007d743c =====

void FUN_007d743c(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007d7470  FUN_007d7470 =====

void FUN_007d7470(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d74b0 to 007d74c7 has its CatchHandler @ 007d74fc */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d7534  FUN_007d7534 =====

long FUN_007d7534(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter18onLongPressStickerENS1_18OnLongPressStickerEE3$_0")
  {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d7550  FUN_007d7550 =====

pointer_____offset_0x10___ * FUN_007d7550(void)

{
  return &PTR_vtable_00986460;
}


// ===== 007d755c  FUN_007d755c =====

void FUN_007d755c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986480;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d75ac  FUN_007d75ac =====

void FUN_007d75ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986480;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d75f8  FUN_007d75f8 =====

undefined8 * FUN_007d75f8(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00986480;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d764c to 007d7653 has its CatchHandler @ 007d76ac */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = uVar4;
    puVar2[6] = uVar3;
  }
  else {
                    /* try { // try from 007d7678 to 007d767f has its CatchHandler @ 007d7694 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007d76c0  FUN_007d76c0 =====

void FUN_007d76c0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00986480;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    param_2[6] = *(undefined8 *)(param_1 + 0x30);
    param_2[5] = uVar2;
    param_2[4] = uVar1;
  }
  else {
                    /* try { // try from 007d7738 to 007d773f has its CatchHandler @ 007d7750 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007d776c  FUN_007d776c =====

void FUN_007d776c(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007d77b0  FUN_007d77b0 =====

void FUN_007d77b0(void *param_1)

{
  if ((*(byte *)((long)param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x30));
  }
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007d77f0  FUN_007d77f0 =====

void FUN_007d77f0(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d7830 to 007d785f has its CatchHandler @ 007d7894 */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"userId",param_2 + 0x20);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d78cc  FUN_007d78cc =====

long FUN_007d78cc(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter17onLongPressAvatarENS1_17OnLongPressAvatarEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d78e8  FUN_007d78e8 =====

pointer_____offset_0x10___ * FUN_007d78e8(void)

{
  return &PTR_vtable_009864e0;
}


// ===== 007d78f4  FUN_007d78f4 =====

void FUN_007d78f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986500;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d7944  FUN_007d7944 =====

void FUN_007d7944(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986500;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d7990  FUN_007d7990 =====

undefined8 * FUN_007d7990(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00986500;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d79e4 to 007d79eb has its CatchHandler @ 007d7a44 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = uVar4;
    puVar2[6] = uVar3;
  }
  else {
                    /* try { // try from 007d7a10 to 007d7a17 has its CatchHandler @ 007d7a2c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007d7a58  FUN_007d7a58 =====

void FUN_007d7a58(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00986500;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    param_2[6] = *(undefined8 *)(param_1 + 0x30);
    param_2[5] = uVar2;
    param_2[4] = uVar1;
  }
  else {
                    /* try { // try from 007d7ad0 to 007d7ad7 has its CatchHandler @ 007d7ae8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007d7b04  FUN_007d7b04 =====

void FUN_007d7b04(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007d7b48  FUN_007d7b48 =====

void FUN_007d7b48(void *param_1)

{
  if ((*(byte *)((long)param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x30));
  }
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007d7b88  FUN_007d7b88 =====

void FUN_007d7b88(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d7bc8 to 007d7bf7 has its CatchHandler @ 007d7c2c */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"userId",param_2 + 0x20);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d7c64  FUN_007d7c64 =====

long FUN_007d7c64(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter13onTapUsernameENS1_13OnTapUsernameEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d7c80  FUN_007d7c80 =====

pointer_____offset_0x10___ * FUN_007d7c80(void)

{
  return &PTR_vtable_00986560;
}


// ===== 007d7c8c  FUN_007d7c8c =====

void FUN_007d7c8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986580;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d7cdc  FUN_007d7cdc =====

void FUN_007d7cdc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986580;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d7d28  FUN_007d7d28 =====

undefined8 * FUN_007d7d28(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00986580;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d7d7c to 007d7d83 has its CatchHandler @ 007d7ddc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = uVar4;
    puVar2[6] = uVar3;
  }
  else {
                    /* try { // try from 007d7da8 to 007d7daf has its CatchHandler @ 007d7dc4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007d7df0  FUN_007d7df0 =====

void FUN_007d7df0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00986580;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    param_2[6] = *(undefined8 *)(param_1 + 0x30);
    param_2[5] = uVar2;
    param_2[4] = uVar1;
  }
  else {
                    /* try { // try from 007d7e68 to 007d7e6f has its CatchHandler @ 007d7e80 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007d7e9c  FUN_007d7e9c =====

void FUN_007d7e9c(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007d7ee0  FUN_007d7ee0 =====

void FUN_007d7ee0(void *param_1)

{
  if ((*(byte *)((long)param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x30));
  }
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007d7f20  FUN_007d7f20 =====

void FUN_007d7f20(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d7f60 to 007d7f8f has its CatchHandler @ 007d7fc4 */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"userId",param_2 + 0x20);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d7ffc  FUN_007d7ffc =====

long FUN_007d7ffc(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter19onLongPressUsernameENS1_19OnLongPressUsernameEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d8018  FUN_007d8018 =====

pointer_____offset_0x10___ * FUN_007d8018(void)

{
  return &PTR_vtable_009865e0;
}


// ===== 007d8024  FUN_007d8024 =====

void FUN_007d8024(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986600;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d8074  FUN_007d8074 =====

void FUN_007d8074(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986600;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d80c0  FUN_007d80c0 =====

undefined8 * FUN_007d80c0(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00986600;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d8114 to 007d811b has its CatchHandler @ 007d8174 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = uVar4;
    puVar2[6] = uVar3;
  }
  else {
                    /* try { // try from 007d8140 to 007d8147 has its CatchHandler @ 007d815c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007d8188  FUN_007d8188 =====

void FUN_007d8188(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00986600;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    param_2[6] = *(undefined8 *)(param_1 + 0x30);
    param_2[5] = uVar2;
    param_2[4] = uVar1;
  }
  else {
                    /* try { // try from 007d8200 to 007d8207 has its CatchHandler @ 007d8218 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007d8234  FUN_007d8234 =====

void FUN_007d8234(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007d8278  FUN_007d8278 =====

void FUN_007d8278(void *param_1)

{
  if ((*(byte *)((long)param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x30));
  }
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007d82b8  FUN_007d82b8 =====

void FUN_007d82b8(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d82f8 to 007d8327 has its CatchHandler @ 007d835c */
  FUN_007ccecc(&local_40,param_3,"channelId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"originId",param_2 + 0x20);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d8394  FUN_007d8394 =====

long FUN_007d8394(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter17onTapMessageReplyENS1_17OnTapMessageReplyEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d83b0  FUN_007d83b0 =====

pointer_____offset_0x10___ * FUN_007d83b0(void)

{
  return &PTR_vtable_00986660;
}


// ===== 007d83bc  FUN_007d83bc =====

void FUN_007d83bc(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00986680;
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 4);
  }
  else {
    operator_delete((void *)param_1[9]);
    bVar1 = *(byte *)(param_1 + 4);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 1);
  }
  else {
    operator_delete((void *)param_1[6]);
    bVar1 = *(byte *)(param_1 + 1);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d842c  FUN_007d842c =====

void FUN_007d842c(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00986680;
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 4);
  }
  else {
    operator_delete((void *)param_1[9]);
    bVar1 = *(byte *)(param_1 + 4);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 1);
  }
  else {
    operator_delete((void *)param_1[6]);
    bVar1 = *(byte *)(param_1 + 1);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d849c  FUN_007d849c =====

undefined8 * FUN_007d849c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  *puVar1 = &PTR_FUN_00986680;
                    /* try { // try from 007d84c4 to 007d84cb has its CatchHandler @ 007d84dc */
  FUN_007d86f0(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007d84f0  FUN_007d84f0 =====

void FUN_007d84f0(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00986680;
  FUN_007d86f0(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007d850c  FUN_007d850c =====

void FUN_007d850c(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x48));
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x30));
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007d8570  FUN_007d8570 =====

void FUN_007d8570(void *param_1)

{
  byte bVar1;
  
  if ((*(byte *)((long)param_1 + 0x38) & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 0x20);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x48));
    bVar1 = *(byte *)((long)param_1 + 0x20);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 8);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x30));
    bVar1 = *(byte *)((long)param_1 + 8);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007d85d4  FUN_007d85d4 =====

void FUN_007d85d4(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d8614 to 007d865b has its CatchHandler @ 007d8690 */
  FUN_007ccecc(&local_40,param_3,"channelId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 0x20);
  FUN_007ccecc(&local_40,param_3,"summaryId",param_2 + 0x38);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d86c8  FUN_007d86c8 =====

long FUN_007d86c8(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter12onTapSummaryENS1_12OnTapSummaryEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d86e4  FUN_007d86e4 =====

pointer_____offset_0x10___ * FUN_007d86e4(void)

{
  return &PTR_vtable_009866e0;
}


// ===== 007d86f0  FUN_007d86f0 =====

void FUN_007d86f0(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,byte *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*param_2 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)param_1 = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  if ((param_2[0x18] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  else {
                    /* try { // try from 007d8750 to 007d8757 has its CatchHandler @ 007d87c0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x18,*(char **)(param_2 + 0x28),*(ulong *)(param_2 + 0x20));
  }
  if ((param_2[0x30] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_1 + 0x30) = uVar1;
  }
  else {
                    /* try { // try from 007d877c to 007d8783 has its CatchHandler @ 007d8790 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x30,*(char **)(param_2 + 0x40),*(ulong *)(param_2 + 0x38));
  }
  return;
}


// ===== 007d87dc  FUN_007d87dc =====

void FUN_007d87dc(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00986700;
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 4);
  }
  else {
    operator_delete((void *)param_1[9]);
    bVar1 = *(byte *)(param_1 + 4);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 1);
  }
  else {
    operator_delete((void *)param_1[6]);
    bVar1 = *(byte *)(param_1 + 1);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d884c  FUN_007d884c =====

void FUN_007d884c(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00986700;
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 4);
  }
  else {
    operator_delete((void *)param_1[9]);
    bVar1 = *(byte *)(param_1 + 4);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 1);
  }
  else {
    operator_delete((void *)param_1[6]);
    bVar1 = *(byte *)(param_1 + 1);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d88bc  FUN_007d88bc =====

undefined8 * FUN_007d88bc(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  *puVar1 = &PTR_FUN_00986700;
                    /* try { // try from 007d88e4 to 007d88eb has its CatchHandler @ 007d88fc */
  FUN_007d8b10(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007d8910  FUN_007d8910 =====

void FUN_007d8910(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00986700;
  FUN_007d8b10(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007d892c  FUN_007d892c =====

void FUN_007d892c(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x48));
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x30));
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007d8990  FUN_007d8990 =====

void FUN_007d8990(void *param_1)

{
  byte bVar1;
  
  if ((*(byte *)((long)param_1 + 0x38) & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 0x20);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x48));
    bVar1 = *(byte *)((long)param_1 + 0x20);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 8);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x30));
    bVar1 = *(byte *)((long)param_1 + 8);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007d89f4  FUN_007d89f4 =====

void FUN_007d89f4(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d8a34 to 007d8a7b has its CatchHandler @ 007d8ab0 */
  FUN_007ccecc(&local_40,param_3,"channelId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 0x20);
  FUN_007ccecc(&local_40,param_3,"summaryId",param_2 + 0x38);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d8ae8  FUN_007d8ae8 =====

long FUN_007d8ae8(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter16onTapSummaryJumpENS1_16OnTapSummaryJumpEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d8b04  FUN_007d8b04 =====

pointer_____offset_0x10___ * FUN_007d8b04(void)

{
  return &PTR_vtable_00986760;
}


// ===== 007d8b10  FUN_007d8b10 =====

void FUN_007d8b10(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,byte *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*param_2 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)param_1 = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  if ((param_2[0x18] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  else {
                    /* try { // try from 007d8b70 to 007d8b77 has its CatchHandler @ 007d8be0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x18,*(char **)(param_2 + 0x28),*(ulong *)(param_2 + 0x20));
  }
  if ((param_2[0x30] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_1 + 0x30) = uVar1;
  }
  else {
                    /* try { // try from 007d8b9c to 007d8ba3 has its CatchHandler @ 007d8bb0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x30,*(char **)(param_2 + 0x40),*(ulong *)(param_2 + 0x38));
  }
  return;
}


// ===== 007d8bfc  FUN_007d8bfc =====

void FUN_007d8bfc(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00986780;
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 4);
  }
  else {
    operator_delete((void *)param_1[9]);
    bVar1 = *(byte *)(param_1 + 4);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 1);
  }
  else {
    operator_delete((void *)param_1[6]);
    bVar1 = *(byte *)(param_1 + 1);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d8c6c  FUN_007d8c6c =====

void FUN_007d8c6c(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00986780;
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 4);
  }
  else {
    operator_delete((void *)param_1[9]);
    bVar1 = *(byte *)(param_1 + 4);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 1);
  }
  else {
    operator_delete((void *)param_1[6]);
    bVar1 = *(byte *)(param_1 + 1);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d8cdc  FUN_007d8cdc =====

undefined8 * FUN_007d8cdc(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  *puVar1 = &PTR_FUN_00986780;
                    /* try { // try from 007d8d04 to 007d8d0b has its CatchHandler @ 007d8d1c */
  FUN_007d8f30(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007d8d30  FUN_007d8d30 =====

void FUN_007d8d30(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00986780;
  FUN_007d8f30(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007d8d4c  FUN_007d8d4c =====

void FUN_007d8d4c(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x48));
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x30));
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007d8db0  FUN_007d8db0 =====

void FUN_007d8db0(void *param_1)

{
  byte bVar1;
  
  if ((*(byte *)((long)param_1 + 0x38) & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 0x20);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x48));
    bVar1 = *(byte *)((long)param_1 + 0x20);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 8);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x30));
    bVar1 = *(byte *)((long)param_1 + 8);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007d8e14  FUN_007d8e14 =====

void FUN_007d8e14(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d8e54 to 007d8e9b has its CatchHandler @ 007d8ed0 */
  FUN_007ccecc(&local_40,param_3,"channelId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 0x20);
  FUN_007ccecc(&local_40,param_3,"conversationId",param_2 + 0x38);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d8f08  FUN_007d8f08 =====

long FUN_007d8f08(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter23onTapConversationHeaderENS1_23OnTapConversationHeaderEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d8f24  FUN_007d8f24 =====

pointer_____offset_0x10___ * FUN_007d8f24(void)

{
  return &PTR_vtable_009867e0;
}


// ===== 007d8f30  FUN_007d8f30 =====

void FUN_007d8f30(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,byte *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*param_2 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)param_1 = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  if ((param_2[0x18] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  else {
                    /* try { // try from 007d8f90 to 007d8f97 has its CatchHandler @ 007d9000 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x18,*(char **)(param_2 + 0x28),*(ulong *)(param_2 + 0x20));
  }
  if ((param_2[0x30] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_1 + 0x30) = uVar1;
  }
  else {
                    /* try { // try from 007d8fbc to 007d8fc3 has its CatchHandler @ 007d8fd0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x30,*(char **)(param_2 + 0x40),*(ulong *)(param_2 + 0x38));
  }
  return;
}


// ===== 007d901c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007d9020  FUN_007d9020 =====

void FUN_007d9020(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00986800;
  return;
}


// ===== 007d9044  FUN_007d9044 =====

void FUN_007d9044(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00986800;
  return;
}


// ===== 007d9054  FUN_007d9054 =====

void FUN_007d9054(void)

{
  return;
}


// ===== 007d9058  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007d905c  FUN_007d905c =====

void FUN_007d905c(undefined4 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_30,param_3);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d90c4  FUN_007d90c4 =====

long FUN_007d90c4(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter10onTapEmojiENS1_10OnTapEmojiEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d90e0  FUN_007d90e0 =====

pointer_____offset_0x10___ * FUN_007d90e0(void)

{
  return &PTR_vtable_00986860;
}


// ===== 007d90ec  FUN_007d90ec =====

void FUN_007d90ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986880;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d910c  FUN_007d910c =====

void FUN_007d910c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986880;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d914c  FUN_007d914c =====

undefined8 * FUN_007d914c(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00986880;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d9198 to 007d919b has its CatchHandler @ 007d91ac */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007d91c0  FUN_007d91c0 =====

void FUN_007d91c0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00986880;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
    return;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  __init_copy_ctor_external
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  return;
}


// ===== 007d91fc  FUN_007d91fc =====

void FUN_007d91fc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007d9210  FUN_007d9210 =====

void FUN_007d9210(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007d9244  FUN_007d9244 =====

void FUN_007d9244(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d9284 to 007d929b has its CatchHandler @ 007d92d0 */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d9308  FUN_007d9308 =====

long FUN_007d9308(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter16onTapThreadEmbedENS1_16OnTapThreadEmbedEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d9324  FUN_007d9324 =====

pointer_____offset_0x10___ * FUN_007d9324(void)

{
  return &PTR_vtable_009868e0;
}


// ===== 007d9330  FUN_007d9330 =====

void FUN_007d9330(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986900;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d9380  FUN_007d9380 =====

void FUN_007d9380(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986900;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d93cc  FUN_007d93cc =====

undefined8 * FUN_007d93cc(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00986900;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d9420 to 007d9427 has its CatchHandler @ 007d9480 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = uVar4;
    puVar2[6] = uVar3;
  }
  else {
                    /* try { // try from 007d944c to 007d9453 has its CatchHandler @ 007d9468 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007d9494  FUN_007d9494 =====

void FUN_007d9494(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00986900;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    param_2[6] = *(undefined8 *)(param_1 + 0x30);
    param_2[5] = uVar2;
    param_2[4] = uVar1;
  }
  else {
                    /* try { // try from 007d950c to 007d9513 has its CatchHandler @ 007d9524 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007d9540  FUN_007d9540 =====

void FUN_007d9540(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007d9584  FUN_007d9584 =====

void FUN_007d9584(void *param_1)

{
  if ((*(byte *)((long)param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x30));
  }
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007d95c4  FUN_007d95c4 =====

void FUN_007d95c4(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d9604 to 007d9633 has its CatchHandler @ 007d9668 */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"componentId",param_2 + 0x20);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d96a0  FUN_007d96a0 =====

long FUN_007d96a0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter26onTapButtonActionComponentENS1_26OnTapButtonActionComponentEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d96bc  FUN_007d96bc =====

pointer_____offset_0x10___ * FUN_007d96bc(void)

{
  return &PTR_vtable_00986960;
}


// ===== 007d96c8  FUN_007d96c8 =====

void FUN_007d96c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986980;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d9718  FUN_007d9718 =====

void FUN_007d9718(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986980;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d9764  FUN_007d9764 =====

undefined8 * FUN_007d9764(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00986980;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d97b8 to 007d97bf has its CatchHandler @ 007d9818 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = uVar4;
    puVar2[6] = uVar3;
  }
  else {
                    /* try { // try from 007d97e4 to 007d97eb has its CatchHandler @ 007d9800 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007d982c  FUN_007d982c =====

void FUN_007d982c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00986980;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    param_2[6] = *(undefined8 *)(param_1 + 0x30);
    param_2[5] = uVar2;
    param_2[4] = uVar1;
  }
  else {
                    /* try { // try from 007d98a4 to 007d98ab has its CatchHandler @ 007d98bc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007d98d8  FUN_007d98d8 =====

void FUN_007d98d8(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007d991c  FUN_007d991c =====

void FUN_007d991c(void *param_1)

{
  if ((*(byte *)((long)param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x30));
  }
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007d995c  FUN_007d995c =====

void FUN_007d995c(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d999c to 007d99cb has its CatchHandler @ 007d9a00 */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"componentId",param_2 + 0x20);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d9a38  FUN_007d9a38 =====

long FUN_007d9a38(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter26onTapSelectActionComponentENS1_26OnTapSelectActionComponentEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d9a54  FUN_007d9a54 =====

pointer_____offset_0x10___ * FUN_007d9a54(void)

{
  return &PTR_vtable_009869e0;
}


// ===== 007d9a60  FUN_007d9a60 =====

void FUN_007d9a60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986a00;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d9ab0  FUN_007d9ab0 =====

void FUN_007d9ab0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986a00;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d9afc  FUN_007d9afc =====

undefined8 * FUN_007d9afc(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00986a00;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d9b50 to 007d9b57 has its CatchHandler @ 007d9bb0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = uVar4;
    puVar2[6] = uVar3;
  }
  else {
                    /* try { // try from 007d9b7c to 007d9b83 has its CatchHandler @ 007d9b98 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007d9bc4  FUN_007d9bc4 =====

void FUN_007d9bc4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00986a00;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    param_2[6] = *(undefined8 *)(param_1 + 0x30);
    param_2[5] = uVar2;
    param_2[4] = uVar1;
  }
  else {
                    /* try { // try from 007d9c3c to 007d9c43 has its CatchHandler @ 007d9c54 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007d9c70  FUN_007d9c70 =====

void FUN_007d9c70(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007d9cb4  FUN_007d9cb4 =====

void FUN_007d9cb4(void *param_1)

{
  if ((*(byte *)((long)param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x30));
  }
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007d9cf4  FUN_007d9cf4 =====

void FUN_007d9cf4(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d9d34 to 007d9d63 has its CatchHandler @ 007d9d98 */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"stickerId",param_2 + 0x20);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d9dd0  FUN_007d9dd0 =====

long FUN_007d9dd0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter17onTapWelcomeReplyENS1_17OnTapWelcomeReplyEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d9dec  FUN_007d9dec =====

pointer_____offset_0x10___ * FUN_007d9dec(void)

{
  return &PTR_vtable_00986a60;
}


// ===== 007d9df8  FUN_007d9df8 =====

void FUN_007d9df8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986a80;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d9e18  FUN_007d9e18 =====

void FUN_007d9e18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986a80;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d9e58  FUN_007d9e58 =====

undefined8 * FUN_007d9e58(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00986a80;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d9ea4 to 007d9ea7 has its CatchHandler @ 007d9eb8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007d9ecc  FUN_007d9ecc =====

void FUN_007d9ecc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00986a80;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
    return;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  __init_copy_ctor_external
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  return;
}


// ===== 007d9f08  FUN_007d9f08 =====

void FUN_007d9f08(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007d9f1c  FUN_007d9f1c =====

void FUN_007d9f1c(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007d9f50  FUN_007d9f50 =====

void FUN_007d9f50(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d9f90 to 007d9fa7 has its CatchHandler @ 007d9fdc */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007da014  FUN_007da014 =====

long FUN_007da014(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter18onTapInviteToSpeakENS1_18OnTapInviteToSpeakEE3$_0")
  {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007da030  FUN_007da030 =====

pointer_____offset_0x10___ * FUN_007da030(void)

{
  return &PTR_vtable_00986ae0;
}


// ===== 007da03c  FUN_007da03c =====

void FUN_007da03c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986b00;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007da05c  FUN_007da05c =====

void FUN_007da05c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986b00;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007da09c  FUN_007da09c =====

undefined8 * FUN_007da09c(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00986b00;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007da0e8 to 007da0eb has its CatchHandler @ 007da0fc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007da110  FUN_007da110 =====

void FUN_007da110(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00986b00;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
    return;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  __init_copy_ctor_external
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  return;
}


// ===== 007da14c  FUN_007da14c =====

void FUN_007da14c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007da160  FUN_007da160 =====

void FUN_007da160(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007da194  FUN_007da194 =====

void FUN_007da194(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 007da1dc to 007da1e7 has its CatchHandler @ 007da268 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007da1f0 to 007da21f has its CatchHandler @ 007da270 */
  FUN_007ccecc(&local_48,param_3,&DAT_00368d20,param_2 + 8);
  FUN_007ceb94(&local_50,param_3,&DAT_00370ab4,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_50;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007da2bc  FUN_007da2bc =====

long FUN_007da2bc(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter14onTapTimestampENS1_14OnTapTimestampEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007da2d8  FUN_007da2d8 =====

pointer_____offset_0x10___ * FUN_007da2d8(void)

{
  return &PTR_vtable_00986b60;
}


// ===== 007da2e4  FUN_007da2e4 =====

void FUN_007da2e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986b80;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007da304  FUN_007da304 =====

void FUN_007da304(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986b80;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007da344  FUN_007da344 =====

undefined8 * FUN_007da344(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00986b80;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007da390 to 007da393 has its CatchHandler @ 007da3a4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007da3b8  FUN_007da3b8 =====

void FUN_007da3b8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00986b80;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
    return;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  __init_copy_ctor_external
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  return;
}


// ===== 007da3f4  FUN_007da3f4 =====

void FUN_007da3f4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007da408  FUN_007da408 =====

void FUN_007da408(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007da43c  FUN_007da43c =====

void FUN_007da43c(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 007da484 to 007da48f has its CatchHandler @ 007da510 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007da498 to 007da4c7 has its CatchHandler @ 007da518 */
  FUN_007ccecc(&local_48,param_3,"content",param_2 + 8);
  FUN_007ceb94(&local_50,param_3,&DAT_00370ab4,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_50;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007da564  FUN_007da564 =====

long FUN_007da564(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter15onTapInlineCodeENS1_15OnTapInlineCodeEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007da580  FUN_007da580 =====

pointer_____offset_0x10___ * FUN_007da580(void)

{
  return &PTR_vtable_00986be0;
}


// ===== 007da58c  FUN_007da58c =====

void FUN_007da58c(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00986c00;
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 4);
  }
  else {
    operator_delete((void *)param_1[9]);
    bVar1 = *(byte *)(param_1 + 4);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 1);
  }
  else {
    operator_delete((void *)param_1[6]);
    bVar1 = *(byte *)(param_1 + 1);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007da5fc  FUN_007da5fc =====

void FUN_007da5fc(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00986c00;
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 4);
  }
  else {
    operator_delete((void *)param_1[9]);
    bVar1 = *(byte *)(param_1 + 4);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 1);
  }
  else {
    operator_delete((void *)param_1[6]);
    bVar1 = *(byte *)(param_1 + 1);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007da66c  FUN_007da66c =====

undefined8 * FUN_007da66c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  *puVar1 = &PTR_FUN_00986c00;
                    /* try { // try from 007da694 to 007da69b has its CatchHandler @ 007da6ac */
  FUN_007da8c0(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007da6c0  FUN_007da6c0 =====

void FUN_007da6c0(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00986c00;
  FUN_007da8c0(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007da6dc  FUN_007da6dc =====

void FUN_007da6dc(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x48));
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x30));
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007da740  FUN_007da740 =====

void FUN_007da740(void *param_1)

{
  byte bVar1;
  
  if ((*(byte *)((long)param_1 + 0x38) & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 0x20);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x48));
    bVar1 = *(byte *)((long)param_1 + 0x20);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 8);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x30));
    bVar1 = *(byte *)((long)param_1 + 8);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007da7a4  FUN_007da7a4 =====

void FUN_007da7a4(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007da7e4 to 007da82b has its CatchHandler @ 007da860 */
  FUN_007ccecc(&local_40,param_3,"roleName",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"roleIconSource",param_2 + 0x20);
  FUN_007ccecc(&local_40,param_3,"roleIconUnicodeEmoji",param_2 + 0x38);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007da898  FUN_007da898 =====

long FUN_007da898(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter13onTapRoleIconENS1_13OnTapRoleIconEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007da8b4  FUN_007da8b4 =====

pointer_____offset_0x10___ * FUN_007da8b4(void)

{
  return &PTR_vtable_00986c60;
}


// ===== 007da8c0  FUN_007da8c0 =====

void FUN_007da8c0(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,byte *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*param_2 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)param_1 = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  if ((param_2[0x18] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  else {
                    /* try { // try from 007da920 to 007da927 has its CatchHandler @ 007da990 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x18,*(char **)(param_2 + 0x28),*(ulong *)(param_2 + 0x20));
  }
  if ((param_2[0x30] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_1 + 0x30) = uVar1;
  }
  else {
                    /* try { // try from 007da94c to 007da953 has its CatchHandler @ 007da960 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x30,*(char **)(param_2 + 0x40),*(ulong *)(param_2 + 0x38));
  }
  return;
}


// ===== 007da9ac  FUN_007da9ac =====

void FUN_007da9ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986c80;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007da9cc  FUN_007da9cc =====

void FUN_007da9cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986c80;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007daa0c  FUN_007daa0c =====

undefined8 * FUN_007daa0c(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00986c80;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007daa58 to 007daa5b has its CatchHandler @ 007daa6c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007daa80  FUN_007daa80 =====

void FUN_007daa80(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00986c80;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
    return;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  __init_copy_ctor_external
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  return;
}


// ===== 007daabc  FUN_007daabc =====

void FUN_007daabc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007daad0  FUN_007daad0 =====

void FUN_007daad0(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007dab04  FUN_007dab04 =====

void FUN_007dab04(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007dab44 to 007dab5b has its CatchHandler @ 007dab90 */
  FUN_007ccecc(&local_40,param_3,"channelId",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007dabc8  FUN_007dabc8 =====

long FUN_007dabc8(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter22onTapVoiceChannelBadgeENS1_22OnTapVoiceChannelBadgeEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007dabe4  FUN_007dabe4 =====

pointer_____offset_0x10___ * FUN_007dabe4(void)

{
  return &PTR_vtable_00986ce0;
}


// ===== 007dabf0  FUN_007dabf0 =====

void FUN_007dabf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986d00;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007dac40  FUN_007dac40 =====

void FUN_007dac40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00986d00;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007dac8c  FUN_007dac8c =====

undefined8 * FUN_007dac8c(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00986d00;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007dace0 to 007dace7 has its CatchHandler @ 007dad40 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = uVar4;
    puVar2[6] = uVar3;
  }
  else {
                    /* try { // try from 007dad0c to 007dad13 has its CatchHandler @ 007dad28 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007dad54  FUN_007dad54 =====

void FUN_007dad54(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00986d00;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    param_2[6] = *(undefined8 *)(param_1 + 0x30);
    param_2[5] = uVar2;
    param_2[4] = uVar1;
  }
  else {
                    /* try { // try from 007dadcc to 007dadd3 has its CatchHandler @ 007dade4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007dae00  FUN_007dae00 =====

void FUN_007dae00(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007dae44  FUN_007dae44 =====

void FUN_007dae44(void *param_1)

{
  if ((*(byte *)((long)param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x30));
  }
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007dae84  FUN_007dae84 =====

void FUN_007dae84(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007daec4 to 007daef3 has its CatchHandler @ 007daf28 */
  FUN_007ccecc(&local_40,param_3,"gameApplicationId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"timestamp",param_2 + 0x20);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007daf60  FUN_007daf60 =====

long FUN_007daf60(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter13onTapGameIconENS1_13OnTapGameIconEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007daf7c  FUN_007daf7c =====

pointer_____offset_0x10___ * FUN_007daf7c(void)

{
  return &PTR_vtable_00986d60;
}


// ===== 007daf88  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007daf8c  FUN_007daf8c =====

void FUN_007daf8c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00986d80;
  return;
}


// ===== 007dafb0  FUN_007dafb0 =====

void FUN_007dafb0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00986d80;
  return;
}


// ===== 007dafc0  FUN_007dafc0 =====

void FUN_007dafc0(void)

{
  return;
}


// ===== 007dafc4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007dafc8  FUN_007dafc8 =====

void FUN_007dafc8(undefined4 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_30,param_3);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007db030  FUN_007db030 =====

long FUN_007db030(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter30onTapSuppressNotificationsIconENS1_30OnTapSuppressNotificationsIconEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007db04c  FUN_007db04c =====

pointer_____offset_0x10___ * FUN_007db04c(void)

{
  return &PTR_vtable_00986de0;
}


// ===== 007db058  FUN_007db058 =====

void FUN_007db058(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00986e00;
  if ((*(byte *)(param_1 + 10) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 7);
  }
  else {
    operator_delete((void *)param_1[0xc]);
    bVar1 = *(byte *)(param_1 + 7);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 4);
  }
  else {
    operator_delete((void *)param_1[9]);
    bVar1 = *(byte *)(param_1 + 4);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 1);
  }
  else {
    operator_delete((void *)param_1[6]);
    bVar1 = *(byte *)(param_1 + 1);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete((void *)param_1[3]);
    return;
  }
  return;
}


// ===== 007db0e0  FUN_007db0e0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007db0e0(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00986e00;
  if ((*(byte *)(param_1 + 10) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 7);
  }
  else {
    operator_delete((void *)param_1[0xc]);
    bVar1 = *(byte *)(param_1 + 7);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 4);
  }
  else {
    operator_delete((void *)param_1[9]);
    bVar1 = *(byte *)(param_1 + 4);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 1);
  }
  else {
    operator_delete((void *)param_1[6]);
    bVar1 = *(byte *)(param_1 + 1);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007db168  FUN_007db168 =====

undefined8 * FUN_007db168(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x68);
  *puVar1 = &PTR_FUN_00986e00;
                    /* try { // try from 007db190 to 007db197 has its CatchHandler @ 007db1a8 */
  FUN_007db404(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007db1bc  FUN_007db1bc =====

void FUN_007db1bc(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00986e00;
  FUN_007db404(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007db1d8  FUN_007db1d8 =====

void FUN_007db1d8(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x38);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x60));
    bVar1 = *(byte *)(param_1 + 0x38);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x48));
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x30));
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 007db254  FUN_007db254 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007db254(void *param_1)

{
  byte bVar1;
  
  if ((*(byte *)((long)param_1 + 0x50) & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 0x38);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x60));
    bVar1 = *(byte *)((long)param_1 + 0x38);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 0x20);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x48));
    bVar1 = *(byte *)((long)param_1 + 0x20);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 8);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x30));
    bVar1 = *(byte *)((long)param_1 + 8);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007db2d0  FUN_007db2d0 =====

void FUN_007db2d0(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007db310 to 007db36f has its CatchHandler @ 007db3a4 */
  FUN_007ccecc(&local_40,param_3,"userId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"guildId",param_2 + 0x20);
  FUN_007ccecc(&local_40,param_3,"channelId",param_2 + 0x38);
  FUN_007ccecc(&local_40,param_3,"roleId",param_2 + 0x50);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007db3dc  FUN_007db3dc =====

long FUN_007db3dc(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter23onTapConnectionsRoleTagENS1_23OnTapConnectionsRoleTagEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007db3f8  FUN_007db3f8 =====

pointer_____offset_0x10___ * FUN_007db3f8(void)

{
  return &PTR_vtable_00986e60;
}


// ===== 007db404  FUN_007db404 =====

void FUN_007db404(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,byte *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*param_2 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)param_1 = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  if ((param_2[0x18] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  else {
                    /* try { // try from 007db464 to 007db46b has its CatchHandler @ 007db528 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x18,*(char **)(param_2 + 0x28),*(ulong *)(param_2 + 0x20));
  }
  if ((param_2[0x30] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_1 + 0x30) = uVar1;
  }
  else {
                    /* try { // try from 007db490 to 007db497 has its CatchHandler @ 007db508 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x30,*(char **)(param_2 + 0x40),*(ulong *)(param_2 + 0x38));
  }
  if ((param_2[0x48] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x50);
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = uVar2;
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  else {
                    /* try { // try from 007db4bc to 007db4c3 has its CatchHandler @ 007db4d0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x48,*(char **)(param_2 + 0x58),*(ulong *)(param_2 + 0x50));
  }
  return;
}


// ===== 007db544  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007db548  FUN_007db548 =====

void FUN_007db548(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00986e80;
  return;
}


// ===== 007db56c  FUN_007db56c =====

void FUN_007db56c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00986e80;
  return;
}


// ===== 007db57c  FUN_007db57c =====

void FUN_007db57c(void)

{
  return;
}


// ===== 007db580  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007db584  FUN_007db584 =====

void FUN_007db584(undefined4 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_30,param_3);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007db5ec  FUN_007db5ec =====

long FUN_007db5ec(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter16onTapTimeoutIconENS1_16OnTapTimeoutIconEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007db608  FUN_007db608 =====

pointer_____offset_0x10___ * FUN_007db608(void)

{
  return &PTR_vtable_00986ee0;
}


// ===== 007db614  FUN_007db614 =====

void FUN_007db614(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00986f00;
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 4);
  }
  else {
    operator_delete((void *)param_1[9]);
    bVar1 = *(byte *)(param_1 + 4);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 1);
  }
  else {
    operator_delete((void *)param_1[6]);
    bVar1 = *(byte *)(param_1 + 1);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007db684  FUN_007db684 =====

void FUN_007db684(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00986f00;
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 4);
  }
  else {
    operator_delete((void *)param_1[9]);
    bVar1 = *(byte *)(param_1 + 4);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 1);
  }
  else {
    operator_delete((void *)param_1[6]);
    bVar1 = *(byte *)(param_1 + 1);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007db6f4  FUN_007db6f4 =====

undefined8 * FUN_007db6f4(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  *puVar1 = &PTR_FUN_00986f00;
                    /* try { // try from 007db71c to 007db723 has its CatchHandler @ 007db734 */
  FUN_007db948(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007db748  FUN_007db748 =====

void FUN_007db748(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00986f00;
  FUN_007db948(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007db764  FUN_007db764 =====

void FUN_007db764(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x48));
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x30));
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007db7c8  FUN_007db7c8 =====

void FUN_007db7c8(void *param_1)

{
  byte bVar1;
  
  if ((*(byte *)((long)param_1 + 0x38) & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 0x20);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x48));
    bVar1 = *(byte *)((long)param_1 + 0x20);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 8);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x30));
    bVar1 = *(byte *)((long)param_1 + 8);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007db82c  FUN_007db82c =====

void FUN_007db82c(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007db86c to 007db8b3 has its CatchHandler @ 007db8e8 */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"channelId",param_2 + 0x20);
  FUN_007ccecc(&local_40,param_3,"guildId",param_2 + 0x38);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007db920  FUN_007db920 =====

long FUN_007db920(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter26onTapAutoModerationActionsENS1_26OnTapAutoModerationActionsEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007db93c  FUN_007db93c =====

pointer_____offset_0x10___ * FUN_007db93c(void)

{
  return &PTR_vtable_00986f60;
}


// ===== 007db948  FUN_007db948 =====

void FUN_007db948(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,byte *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*param_2 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)param_1 = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  if ((param_2[0x18] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  else {
                    /* try { // try from 007db9a8 to 007db9af has its CatchHandler @ 007dba18 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x18,*(char **)(param_2 + 0x28),*(ulong *)(param_2 + 0x20));
  }
  if ((param_2[0x30] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_1 + 0x30) = uVar1;
  }
  else {
                    /* try { // try from 007db9d4 to 007db9db has its CatchHandler @ 007db9e8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x30,*(char **)(param_2 + 0x40),*(ulong *)(param_2 + 0x38));
  }
  return;
}


// ===== 007dba34  FUN_007dba34 =====

void FUN_007dba34(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00986f80;
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 4);
  }
  else {
    operator_delete((void *)param_1[9]);
    bVar1 = *(byte *)(param_1 + 4);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 1);
  }
  else {
    operator_delete((void *)param_1[6]);
    bVar1 = *(byte *)(param_1 + 1);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007dbaa4  FUN_007dbaa4 =====

void FUN_007dbaa4(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00986f80;
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 4);
  }
  else {
    operator_delete((void *)param_1[9]);
    bVar1 = *(byte *)(param_1 + 4);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 1);
  }
  else {
    operator_delete((void *)param_1[6]);
    bVar1 = *(byte *)(param_1 + 1);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007dbb14  FUN_007dbb14 =====

undefined8 * FUN_007dbb14(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  *puVar1 = &PTR_FUN_00986f80;
                    /* try { // try from 007dbb3c to 007dbb43 has its CatchHandler @ 007dbb54 */
  FUN_007dbd68(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007dbb68  FUN_007dbb68 =====

void FUN_007dbb68(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00986f80;
  FUN_007dbd68(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007dbb84  FUN_007dbb84 =====

void FUN_007dbb84(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x48));
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x30));
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007dbbe8  FUN_007dbbe8 =====

void FUN_007dbbe8(void *param_1)

{
  byte bVar1;
  
  if ((*(byte *)((long)param_1 + 0x38) & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 0x20);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x48));
    bVar1 = *(byte *)((long)param_1 + 0x20);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 8);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x30));
    bVar1 = *(byte *)((long)param_1 + 8);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007dbc4c  FUN_007dbc4c =====

void FUN_007dbc4c(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007dbc8c to 007dbcd3 has its CatchHandler @ 007dbd08 */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"channelId",param_2 + 0x20);
  FUN_007ccecc(&local_40,param_3,"guildId",param_2 + 0x38);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007dbd40  FUN_007dbd40 =====

long FUN_007dbd40(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter27onTapAutoModerationFeedbackENS1_27OnTapAutoModerationFeedbackEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007dbd5c  FUN_007dbd5c =====

pointer_____offset_0x10___ * FUN_007dbd5c(void)

{
  return &PTR_vtable_00986fe0;
}


// ===== 007dbd68  FUN_007dbd68 =====

void FUN_007dbd68(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,byte *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*param_2 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)param_1 = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  if ((param_2[0x18] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  else {
                    /* try { // try from 007dbdc8 to 007dbdcf has its CatchHandler @ 007dbe38 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x18,*(char **)(param_2 + 0x28),*(ulong *)(param_2 + 0x20));
  }
  if ((param_2[0x30] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_1 + 0x30) = uVar1;
  }
  else {
                    /* try { // try from 007dbdf4 to 007dbdfb has its CatchHandler @ 007dbe08 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x30,*(char **)(param_2 + 0x40),*(ulong *)(param_2 + 0x38));
  }
  return;
}


// ===== 007dbe54  FUN_007dbe54 =====

void FUN_007dbe54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00987000;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007dbe74  FUN_007dbe74 =====

void FUN_007dbe74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00987000;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007dbeb4  FUN_007dbeb4 =====

undefined8 * FUN_007dbeb4(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00987000;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007dbf00 to 007dbf03 has its CatchHandler @ 007dbf14 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007dbf28  FUN_007dbf28 =====

void FUN_007dbf28(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00987000;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
    return;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  __init_copy_ctor_external
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  return;
}


// ===== 007dbf64  FUN_007dbf64 =====

void FUN_007dbf64(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007dbf78  FUN_007dbf78 =====

void FUN_007dbf78(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007dbfac  FUN_007dbfac =====

void FUN_007dbfac(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007dbfec to 007dc003 has its CatchHandler @ 007dc038 */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007dc070  FUN_007dc070 =====

long FUN_007dc070(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter12onTapSeeMoreENS1_12OnTapSeeMoreEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007dc08c  FUN_007dc08c =====

pointer_____offset_0x10___ * FUN_007dc08c(void)

{
  return &PTR_vtable_00987060;
}


// ===== 007dc098  FUN_007dc098 =====

void FUN_007dc098(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00987080;
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 4);
  }
  else {
    operator_delete((void *)param_1[9]);
    bVar1 = *(byte *)(param_1 + 4);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 1);
  }
  else {
    operator_delete((void *)param_1[6]);
    bVar1 = *(byte *)(param_1 + 1);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007dc108  FUN_007dc108 =====

void FUN_007dc108(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00987080;
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 4);
  }
  else {
    operator_delete((void *)param_1[9]);
    bVar1 = *(byte *)(param_1 + 4);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 1);
  }
  else {
    operator_delete((void *)param_1[6]);
    bVar1 = *(byte *)(param_1 + 1);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007dc178  FUN_007dc178 =====

undefined8 * FUN_007dc178(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  *puVar1 = &PTR_FUN_00987080;
                    /* try { // try from 007dc1a0 to 007dc1a7 has its CatchHandler @ 007dc1b8 */
  FUN_007dc3cc(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007dc1cc  FUN_007dc1cc =====

void FUN_007dc1cc(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00987080;
  FUN_007dc3cc(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007dc1e8  FUN_007dc1e8 =====

void FUN_007dc1e8(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x48));
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x30));
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007dc24c  FUN_007dc24c =====

void FUN_007dc24c(void *param_1)

{
  byte bVar1;
  
  if ((*(byte *)((long)param_1 + 0x38) & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 0x20);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x48));
    bVar1 = *(byte *)((long)param_1 + 0x20);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 8);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x30));
    bVar1 = *(byte *)((long)param_1 + 8);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007dc2b0  FUN_007dc2b0 =====

void FUN_007dc2b0(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007dc2f0 to 007dc337 has its CatchHandler @ 007dc36c */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"channelId",param_2 + 0x20);
  FUN_007ccecc(&local_40,param_3,"tagType",param_2 + 0x38);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007dc3a4  FUN_007dc3a4 =====

long FUN_007dc3a4(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter8onTapTagENS1_8OnTapTagEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007dc3c0  FUN_007dc3c0 =====

pointer_____offset_0x10___ * FUN_007dc3c0(void)

{
  return &PTR_vtable_009870e0;
}


// ===== 007dc3cc  FUN_007dc3cc =====

void FUN_007dc3cc(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,byte *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*param_2 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)param_1 = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  if ((param_2[0x18] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  else {
                    /* try { // try from 007dc42c to 007dc433 has its CatchHandler @ 007dc49c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x18,*(char **)(param_2 + 0x28),*(ulong *)(param_2 + 0x20));
  }
  if ((param_2[0x30] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_1 + 0x30) = uVar1;
  }
  else {
                    /* try { // try from 007dc458 to 007dc45f has its CatchHandler @ 007dc46c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x30,*(char **)(param_2 + 0x40),*(ulong *)(param_2 + 0x38));
  }
  return;
}


// ===== 007dc4b8  FUN_007dc4b8 =====

void FUN_007dc4b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00987100;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007dc508  FUN_007dc508 =====

void FUN_007dc508(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00987100;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007dc554  FUN_007dc554 =====

undefined8 * FUN_007dc554(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00987100;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007dc5a8 to 007dc5af has its CatchHandler @ 007dc608 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = uVar4;
    puVar2[6] = uVar3;
  }
  else {
                    /* try { // try from 007dc5d4 to 007dc5db has its CatchHandler @ 007dc5f0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007dc61c  FUN_007dc61c =====

void FUN_007dc61c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00987100;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    param_2[6] = *(undefined8 *)(param_1 + 0x30);
    param_2[5] = uVar2;
    param_2[4] = uVar1;
  }
  else {
                    /* try { // try from 007dc694 to 007dc69b has its CatchHandler @ 007dc6ac */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007dc6c8  FUN_007dc6c8 =====

void FUN_007dc6c8(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007dc70c  FUN_007dc70c =====

void FUN_007dc70c(void *param_1)

{
  if ((*(byte *)((long)param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x30));
  }
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007dc74c  FUN_007dc74c =====

void FUN_007dc74c(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007dc78c to 007dc7bb has its CatchHandler @ 007dc7f0 */
  FUN_007ccecc(&local_40,param_3,"uploaderId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"itemId",param_2 + 0x20);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007dc828  FUN_007dc828 =====

long FUN_007dc828(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter21onTapCancelUploadItemENS1_21OnTapCancelUploadItemEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007dc844  FUN_007dc844 =====

pointer_____offset_0x10___ * FUN_007dc844(void)

{
  return &PTR_vtable_00987160;
}


// ===== 007dc850  FUN_007dc850 =====

void FUN_007dc850(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00987180;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007dc8a0  FUN_007dc8a0 =====

void FUN_007dc8a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00987180;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007dc8ec  FUN_007dc8ec =====

undefined8 * FUN_007dc8ec(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00987180;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007dc940 to 007dc947 has its CatchHandler @ 007dc9a0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = uVar4;
    puVar2[6] = uVar3;
  }
  else {
                    /* try { // try from 007dc96c to 007dc973 has its CatchHandler @ 007dc988 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007dc9b4  FUN_007dc9b4 =====

void FUN_007dc9b4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00987180;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    param_2[6] = *(undefined8 *)(param_1 + 0x30);
    param_2[5] = uVar2;
    param_2[4] = uVar1;
  }
  else {
                    /* try { // try from 007dca2c to 007dca33 has its CatchHandler @ 007dca44 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007dca60  FUN_007dca60 =====

void FUN_007dca60(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007dcaa4  FUN_007dcaa4 =====

void FUN_007dcaa4(void *param_1)

{
  if ((*(byte *)((long)param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x30));
  }
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007dcae4  FUN_007dcae4 =====

void FUN_007dcae4(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007dcb24 to 007dcb53 has its CatchHandler @ 007dcb88 */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"channelId",param_2 + 0x20);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007dcbc0  FUN_007dcbc0 =====

long FUN_007dcbc0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter20onTapFollowForumPostENS1_20OnTapFollowForumPostEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007dcbdc  FUN_007dcbdc =====

pointer_____offset_0x10___ * FUN_007dcbdc(void)

{
  return &PTR_vtable_009871e0;
}


// ===== 007dcbe8  FUN_007dcbe8 =====

void FUN_007dcbe8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00987200;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007dcc38  FUN_007dcc38 =====

void FUN_007dcc38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00987200;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007dcc84  FUN_007dcc84 =====

undefined8 * FUN_007dcc84(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00987200;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007dccd8 to 007dccdf has its CatchHandler @ 007dcd38 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = uVar4;
    puVar2[6] = uVar3;
  }
  else {
                    /* try { // try from 007dcd04 to 007dcd0b has its CatchHandler @ 007dcd20 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007dcd4c  FUN_007dcd4c =====

void FUN_007dcd4c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00987200;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    param_2[6] = *(undefined8 *)(param_1 + 0x30);
    param_2[5] = uVar2;
    param_2[4] = uVar1;
  }
  else {
                    /* try { // try from 007dcdc4 to 007dcdcb has its CatchHandler @ 007dcddc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007dcdf8  FUN_007dcdf8 =====

void FUN_007dcdf8(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007dce3c  FUN_007dce3c =====

void FUN_007dce3c(void *param_1)

{
  if ((*(byte *)((long)param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x30));
  }
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007dce7c  FUN_007dce7c =====

void FUN_007dce7c(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007dcebc to 007dceeb has its CatchHandler @ 007dcf20 */
  FUN_007ccecc(&local_40,param_3,"guildId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"channelId",param_2 + 0x20);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007dcf58  FUN_007dcf58 =====

long FUN_007dcf58(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter19onTapShareForumPostENS1_19OnTapShareForumPostEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007dcf74  FUN_007dcf74 =====

pointer_____offset_0x10___ * FUN_007dcf74(void)

{
  return &PTR_vtable_00987260;
}


// ===== 007dcf80  FUN_007dcf80 =====

void FUN_007dcf80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00987280;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007dcfd0  FUN_007dcfd0 =====

void FUN_007dcfd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00987280;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007dd01c  FUN_007dd01c =====

undefined8 * FUN_007dd01c(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00987280;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007dd070 to 007dd077 has its CatchHandler @ 007dd0d0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = uVar4;
    puVar2[6] = uVar3;
  }
  else {
                    /* try { // try from 007dd09c to 007dd0a3 has its CatchHandler @ 007dd0b8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007dd0e4  FUN_007dd0e4 =====

void FUN_007dd0e4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00987280;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    param_2[6] = *(undefined8 *)(param_1 + 0x30);
    param_2[5] = uVar2;
    param_2[4] = uVar1;
  }
  else {
                    /* try { // try from 007dd15c to 007dd163 has its CatchHandler @ 007dd174 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007dd190  FUN_007dd190 =====

void FUN_007dd190(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007dd1d4  FUN_007dd1d4 =====

void FUN_007dd1d4(void *param_1)

{
  if ((*(byte *)((long)param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x30));
  }
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007dd214  FUN_007dd214 =====

void FUN_007dd214(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007dd254 to 007dd283 has its CatchHandler @ 007dd2b8 */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"channelId",param_2 + 0x20);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007dd2f0  FUN_007dd2f0 =====

long FUN_007dd2f0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter21onTapReactionOverflowENS1_21OnTapReactionOverflowEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007dd30c  FUN_007dd30c =====

pointer_____offset_0x10___ * FUN_007dd30c(void)

{
  return &PTR_vtable_009872e0;
}


// ===== 007dd318  FUN_007dd318 =====

void FUN_007dd318(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00987300;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007dd338  FUN_007dd338 =====

void FUN_007dd338(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00987300;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007dd378  FUN_007dd378 =====

undefined8 * FUN_007dd378(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00987300;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007dd3c4 to 007dd3c7 has its CatchHandler @ 007dd3d8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007dd3ec  FUN_007dd3ec =====

void FUN_007dd3ec(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00987300;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
    return;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  __init_copy_ctor_external
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  return;
}


// ===== 007dd428  FUN_007dd428 =====

void FUN_007dd428(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007dd43c  FUN_007dd43c =====

void FUN_007dd43c(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007dd470  FUN_007dd470 =====

void FUN_007dd470(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007dd4b0 to 007dd4c7 has its CatchHandler @ 007dd4fc */
  FUN_007ccecc(&local_40,param_3,&DAT_003697cb,param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007dd534  FUN_007dd534 =====

long FUN_007dd534(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter13onTapCopyTextENS1_13OnTapCopyTextEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007dd550  FUN_007dd550 =====

pointer_____offset_0x10___ * FUN_007dd550(void)

{
  return &PTR_vtable_00987360;
}


// ===== 007dd55c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007dd560  FUN_007dd560 =====

void FUN_007dd560(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00987380;
  return;
}


// ===== 007dd584  FUN_007dd584 =====

void FUN_007dd584(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00987380;
  return;
}


// ===== 007dd594  FUN_007dd594 =====

void FUN_007dd594(void)

{
  return;
}


// ===== 007dd598  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007dd59c  FUN_007dd59c =====

void FUN_007dd59c(undefined4 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_30,param_3);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007dd604  FUN_007dd604 =====

long FUN_007dd604(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter10onTapOpTagENS1_10OnTapOpTagEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007dd620  FUN_007dd620 =====

pointer_____offset_0x10___ * FUN_007dd620(void)

{
  return &PTR_vtable_009873e0;
}


// ===== 007dd62c  FUN_007dd62c =====

void FUN_007dd62c(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00987400;
  if ((*(byte *)(param_1 + 9) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 5);
  }
  else {
    operator_delete((void *)param_1[0xb]);
    bVar1 = *(byte *)(param_1 + 5);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 1);
  }
  else {
    operator_delete((void *)param_1[7]);
    bVar1 = *(byte *)(param_1 + 1);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007dd69c  FUN_007dd69c =====

void FUN_007dd69c(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00987400;
  if ((*(byte *)(param_1 + 9) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 5);
  }
  else {
    operator_delete((void *)param_1[0xb]);
    bVar1 = *(byte *)(param_1 + 5);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 1);
  }
  else {
    operator_delete((void *)param_1[7]);
    bVar1 = *(byte *)(param_1 + 1);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007dd70c  FUN_007dd70c =====

undefined8 * FUN_007dd70c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x60);
  *puVar1 = &PTR_FUN_00987400;
                    /* try { // try from 007dd734 to 007dd73b has its CatchHandler @ 007dd74c */
  FUN_007dd9c0(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007dd760  FUN_007dd760 =====

void FUN_007dd760(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00987400;
  FUN_007dd9c0(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007dd77c  FUN_007dd77c =====

void FUN_007dd77c(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x58));
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x38));
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007dd7e0  FUN_007dd7e0 =====

void FUN_007dd7e0(void *param_1)

{
  byte bVar1;
  
  if ((*(byte *)((long)param_1 + 0x48) & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 0x28);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x58));
    bVar1 = *(byte *)((long)param_1 + 0x28);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 8);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x38));
    bVar1 = *(byte *)((long)param_1 + 8);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007dd844  FUN_007dd844 =====

void FUN_007dd844(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007dd884 to 007dd92b has its CatchHandler @ 007dd960 */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  FUN_007cf01c(&local_40,param_3,"totalDurationSecs",param_2 + 0x20);
  FUN_007cf01c(&local_40,param_3,"endDurationSecs",param_2 + 0x24);
  FUN_007ccecc(&local_40,param_3,"senderUserId",param_2 + 0x28);
  FUN_007cf01c(&local_40,param_3,"durationListeningSecs",param_2 + 0x40);
  FUN_007cef18(&local_40,param_3,"isVoiceMessage",param_2 + 0x44);
  FUN_007ccecc(&local_40,param_3,"attachmentId",param_2 + 0x48);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007dd998  FUN_007dd998 =====

long FUN_007dd998(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter30onMediaAttachmentPlaybackEndedENS1_30OnMediaAttachmentPlaybackEndedEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007dd9b4  FUN_007dd9b4 =====

pointer_____offset_0x10___ * FUN_007dd9b4(void)

{
  return &PTR_vtable_00987460;
}


// ===== 007dd9c0  FUN_007dd9c0 =====

void FUN_007dd9c0(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,byte *param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((*param_2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar3;
    *(undefined8 *)param_1 = uVar2;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  if ((param_2[0x20] & 1) == 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
  }
  else {
                    /* try { // try from 007dda28 to 007dda2f has its CatchHandler @ 007ddaa8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x20,*(char **)(param_2 + 0x30),*(ulong *)(param_2 + 0x28));
  }
  bVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  param_1[0x3c] = bVar1;
  if ((param_2[0x40] & 1) == 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x48);
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    *(undefined8 *)(param_1 + 0x40) = uVar2;
  }
  else {
                    /* try { // try from 007dda64 to 007dda6b has its CatchHandler @ 007dda78 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x40,*(char **)(param_2 + 0x50),*(ulong *)(param_2 + 0x48));
  }
  return;
}


// ===== 007ddac4  FUN_007ddac4 =====

void FUN_007ddac4(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00987480;
  if ((*(byte *)(param_1 + 9) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 5);
  }
  else {
    operator_delete((void *)param_1[0xb]);
    bVar1 = *(byte *)(param_1 + 5);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 1);
  }
  else {
    operator_delete((void *)param_1[7]);
    bVar1 = *(byte *)(param_1 + 1);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007ddb34  FUN_007ddb34 =====

void FUN_007ddb34(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00987480;
  if ((*(byte *)(param_1 + 9) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 5);
  }
  else {
    operator_delete((void *)param_1[0xb]);
    bVar1 = *(byte *)(param_1 + 5);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 1);
  }
  else {
    operator_delete((void *)param_1[7]);
    bVar1 = *(byte *)(param_1 + 1);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007ddba4  FUN_007ddba4 =====

undefined8 * FUN_007ddba4(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x60);
  *puVar1 = &PTR_FUN_00987480;
                    /* try { // try from 007ddbcc to 007ddbd3 has its CatchHandler @ 007ddbe4 */
  FUN_007dde40(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007ddbf8  FUN_007ddbf8 =====

void FUN_007ddbf8(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00987480;
  FUN_007dde40(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007ddc14  FUN_007ddc14 =====

void FUN_007ddc14(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x58));
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x38));
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007ddc78  FUN_007ddc78 =====

void FUN_007ddc78(void *param_1)

{
  byte bVar1;
  
  if ((*(byte *)((long)param_1 + 0x48) & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 0x28);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x58));
    bVar1 = *(byte *)((long)param_1 + 0x28);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 8);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x38));
    bVar1 = *(byte *)((long)param_1 + 8);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007ddcdc  FUN_007ddcdc =====

void FUN_007ddcdc(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007ddd1c to 007dddab has its CatchHandler @ 007ddde0 */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  FUN_007cf01c(&local_40,param_3,"totalDurationSecs",param_2 + 0x20);
  FUN_007cf01c(&local_40,param_3,"startDurationSecs",param_2 + 0x24);
  FUN_007ccecc(&local_40,param_3,"senderUserId",param_2 + 0x28);
  FUN_007cef18(&local_40,param_3,"isVoiceMessage",param_2 + 0x40);
  FUN_007ccecc(&local_40,param_3,"attachmentId",param_2 + 0x48);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007dde18  FUN_007dde18 =====

long FUN_007dde18(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter32onMediaAttachmentPlaybackStartedENS1_32OnMediaAttachmentPlaybackStartedEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007dde34  FUN_007dde34 =====

pointer_____offset_0x10___ * FUN_007dde34(void)

{
  return &PTR_vtable_009874e0;
}


// ===== 007dde40  FUN_007dde40 =====

void FUN_007dde40(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,byte *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*param_2 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)param_1 = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  if ((param_2[0x20] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
  }
  else {
                    /* try { // try from 007ddea8 to 007ddeaf has its CatchHandler @ 007ddf20 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x20,*(char **)(param_2 + 0x30),*(ulong *)(param_2 + 0x28));
  }
  param_1[0x38] =
       *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (param_2 + 0x38);
  if ((param_2[0x40] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x48);
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    *(undefined8 *)(param_1 + 0x40) = uVar1;
  }
  else {
                    /* try { // try from 007ddedc to 007ddee3 has its CatchHandler @ 007ddef0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x40,*(char **)(param_2 + 0x50),*(ulong *)(param_2 + 0x48));
  }
  return;
}


// ===== 007ddf3c  FUN_007ddf3c =====

void FUN_007ddf3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00987500;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007ddf8c  FUN_007ddf8c =====

void FUN_007ddf8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00987500;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007ddfd8  FUN_007ddfd8 =====

undefined8 * FUN_007ddfd8(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00987500;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007de02c to 007de033 has its CatchHandler @ 007de08c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = uVar4;
    puVar2[6] = uVar3;
  }
  else {
                    /* try { // try from 007de058 to 007de05f has its CatchHandler @ 007de074 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007de0a0  FUN_007de0a0 =====

void FUN_007de0a0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00987500;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    param_2[6] = *(undefined8 *)(param_1 + 0x30);
    param_2[5] = uVar2;
    param_2[4] = uVar1;
  }
  else {
                    /* try { // try from 007de118 to 007de11f has its CatchHandler @ 007de130 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007de14c  FUN_007de14c =====

void FUN_007de14c(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007de190  FUN_007de190 =====

void FUN_007de190(void *param_1)

{
  if ((*(byte *)((long)param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x30));
  }
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007de1d0  FUN_007de1d0 =====

void FUN_007de1d0(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007de210 to 007de23f has its CatchHandler @ 007de274 */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"errorMessage",param_2 + 0x20);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007de2ac  FUN_007de2ac =====

long FUN_007de2ac(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter28onVoiceMessagePlaybackFailedENS1_28OnVoiceMessagePlaybackFailedEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


