// ===== 007de2c8  FUN_007de2c8 =====

pointer_____offset_0x10___ * FUN_007de2c8(void)

{
  return &PTR_vtable_00987560;
}


// ===== 007de2d4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007de2d8  FUN_007de2d8 =====

void FUN_007de2d8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00987580;
  return;
}


// ===== 007de2fc  FUN_007de2fc =====

void FUN_007de2fc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00987580;
  return;
}


// ===== 007de30c  FUN_007de30c =====

void FUN_007de30c(void)

{
  return;
}


// ===== 007de310  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007de314  FUN_007de314 =====

void FUN_007de314(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 007de37c  FUN_007de37c =====

long FUN_007de37c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter11onTapNavBarENS1_11OnTapNavBarEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007de398  FUN_007de398 =====

pointer_____offset_0x10___ * FUN_007de398(void)

{
  return &PTR_vtable_009875e0;
}


// ===== 007de3a4  FUN_007de3a4 =====

void FUN_007de3a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00987600;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007de3c4  FUN_007de3c4 =====

void FUN_007de3c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00987600;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007de404  FUN_007de404 =====

undefined8 * FUN_007de404(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00987600;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007de450 to 007de453 has its CatchHandler @ 007de464 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007de478  FUN_007de478 =====

void FUN_007de478(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00987600;
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


// ===== 007de4b4  FUN_007de4b4 =====

void FUN_007de4b4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007de4c8  FUN_007de4c8 =====

void FUN_007de4c8(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007de4fc  FUN_007de4fc =====

void FUN_007de4fc(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007de53c to 007de553 has its CatchHandler @ 007de588 */
  FUN_007ccecc(&local_40,param_3,"description",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007de5c0  FUN_007de5c0 =====

long FUN_007de5c0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter16onTapShowAltTextENS1_16OnTapShowAltTextEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007de5dc  FUN_007de5dc =====

pointer_____offset_0x10___ * FUN_007de5dc(void)

{
  return &PTR_vtable_00987660;
}


// ===== 007de5e8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007de5ec  FUN_007de5ec =====

void FUN_007de5ec(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00987680;
  return;
}


// ===== 007de610  FUN_007de610 =====

void FUN_007de610(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00987680;
  return;
}


// ===== 007de620  FUN_007de620 =====

void FUN_007de620(void)

{
  return;
}


// ===== 007de624  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007de628  FUN_007de628 =====

void FUN_007de628(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 007de690  FUN_007de690 =====

long FUN_007de690(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter14onTapTableViewENS1_14OnTapTableViewEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007de6ac  FUN_007de6ac =====

pointer_____offset_0x10___ * FUN_007de6ac(void)

{
  return &PTR_vtable_009876e0;
}


// ===== 007de6b8  FUN_007de6b8 =====

void FUN_007de6b8(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00987700;
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


// ===== 007de740  FUN_007de740 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007de740(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00987700;
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


// ===== 007de7c8  FUN_007de7c8 =====

undefined8 * FUN_007de7c8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x68);
  *puVar1 = &PTR_FUN_00987700;
                    /* try { // try from 007de7f0 to 007de7f7 has its CatchHandler @ 007de808 */
  FUN_007dea64(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007de81c  FUN_007de81c =====

void FUN_007de81c(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00987700;
  FUN_007dea64(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007de838  FUN_007de838 =====

void FUN_007de838(long param_1)

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


// ===== 007de8b4  FUN_007de8b4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007de8b4(void *param_1)

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


// ===== 007de930  FUN_007de930 =====

void FUN_007de930(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007de970 to 007de9cf has its CatchHandler @ 007dea04 */
  FUN_007ccecc(&local_40,param_3,"guildId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"parentChannelId",param_2 + 0x20);
  FUN_007ccecc(&local_40,param_3,"threadId",param_2 + 0x38);
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 0x50);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007dea3c  FUN_007dea3c =====

long FUN_007dea3c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter21onTapPostPreviewEmbedENS1_21OnTapPostPreviewEmbedEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007dea58  FUN_007dea58 =====

pointer_____offset_0x10___ * FUN_007dea58(void)

{
  return &PTR_vtable_00987760;
}


// ===== 007dea64  FUN_007dea64 =====

void FUN_007dea64(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
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
                    /* try { // try from 007deac4 to 007deacb has its CatchHandler @ 007deb88 */
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
                    /* try { // try from 007deaf0 to 007deaf7 has its CatchHandler @ 007deb68 */
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
                    /* try { // try from 007deb1c to 007deb23 has its CatchHandler @ 007deb30 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x48,*(char **)(param_2 + 0x58),*(ulong *)(param_2 + 0x50));
  }
  return;
}


// ===== 007deba4  FUN_007deba4 =====

void FUN_007deba4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00987780;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007debc4  FUN_007debc4 =====

void FUN_007debc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00987780;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007dec04  FUN_007dec04 =====

undefined8 * FUN_007dec04(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00987780;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007dec50 to 007dec53 has its CatchHandler @ 007dec64 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007dec78  FUN_007dec78 =====

void FUN_007dec78(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00987780;
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


// ===== 007decb4  FUN_007decb4 =====

void FUN_007decb4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007decc8  FUN_007decc8 =====

void FUN_007decc8(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007decfc  FUN_007decfc =====

void FUN_007decfc(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007ded3c to 007ded53 has its CatchHandler @ 007ded88 */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007dedc0  FUN_007dedc0 =====

long FUN_007dedc0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter32onTapDismissMediaPostSharePromptENS1_32OnTapDismissMediaPostSharePromptEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007deddc  FUN_007deddc =====

pointer_____offset_0x10___ * FUN_007deddc(void)

{
  return &PTR_vtable_009877e0;
}


// ===== 007dede8  FUN_007dede8 =====

void FUN_007dede8(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00987800;
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


// ===== 007dee58  FUN_007dee58 =====

void FUN_007dee58(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00987800;
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


// ===== 007deec8  FUN_007deec8 =====

undefined8 * FUN_007deec8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  *puVar1 = &PTR_FUN_00987800;
                    /* try { // try from 007deef0 to 007deef7 has its CatchHandler @ 007def08 */
  FUN_007df11c(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007def1c  FUN_007def1c =====

void FUN_007def1c(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00987800;
  FUN_007df11c(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007def38  FUN_007def38 =====

void FUN_007def38(long param_1)

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


// ===== 007def9c  FUN_007def9c =====

void FUN_007def9c(void *param_1)

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


// ===== 007df000  FUN_007df000 =====

void FUN_007df000(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007df040 to 007df087 has its CatchHandler @ 007df0bc */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"channelId",param_2 + 0x20);
  FUN_007ccecc(&local_40,param_3,"buttonType",param_2 + 0x38);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007df0f4  FUN_007df0f4 =====

long FUN_007df0f4(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter24onTapChannelPromptButtonENS1_24OnTapChannelPromptButtonEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007df110  FUN_007df110 =====

pointer_____offset_0x10___ * FUN_007df110(void)

{
  return &PTR_vtable_00987860;
}


// ===== 007df11c  FUN_007df11c =====

void FUN_007df11c(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
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
                    /* try { // try from 007df17c to 007df183 has its CatchHandler @ 007df1ec */
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
                    /* try { // try from 007df1a8 to 007df1af has its CatchHandler @ 007df1bc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x30,*(char **)(param_2 + 0x40),*(ulong *)(param_2 + 0x38));
  }
  return;
}


// ===== 007df208  FUN_007df208 =====

void FUN_007df208(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00987880;
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


// ===== 007df290  FUN_007df290 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007df290(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00987880;
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


// ===== 007df318  FUN_007df318 =====

undefined8 * FUN_007df318(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x68);
  *puVar1 = &PTR_FUN_00987880;
                    /* try { // try from 007df340 to 007df347 has its CatchHandler @ 007df358 */
  FUN_007df5b4(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007df36c  FUN_007df36c =====

void FUN_007df36c(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00987880;
  FUN_007df5b4(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007df388  FUN_007df388 =====

void FUN_007df388(long param_1)

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


// ===== 007df404  FUN_007df404 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007df404(void *param_1)

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


// ===== 007df480  FUN_007df480 =====

void FUN_007df480(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007df4c0 to 007df51f has its CatchHandler @ 007df554 */
  FUN_007ccecc(&local_40,param_3,"channelId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 0x20);
  FUN_007ccecc(&local_40,param_3,"attachmentId",param_2 + 0x38);
  FUN_007ccecc(&local_40,param_3,"embedId",param_2 + 0x50);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007df58c  FUN_007df58c =====

long FUN_007df58c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter27onTapObscuredMediaLearnMoreENS1_27OnTapObscuredMediaLearnMoreEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007df5a8  FUN_007df5a8 =====

pointer_____offset_0x10___ * FUN_007df5a8(void)

{
  return &PTR_vtable_009878e0;
}


// ===== 007df5b4  FUN_007df5b4 =====

void FUN_007df5b4(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
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
                    /* try { // try from 007df614 to 007df61b has its CatchHandler @ 007df6d8 */
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
                    /* try { // try from 007df640 to 007df647 has its CatchHandler @ 007df6b8 */
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
                    /* try { // try from 007df66c to 007df673 has its CatchHandler @ 007df680 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x48,*(char **)(param_2 + 0x58),*(ulong *)(param_2 + 0x50));
  }
  return;
}


// ===== 007df6f4  FUN_007df6f4 =====

void FUN_007df6f4(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00987900;
  if ((*(byte *)(param_1 + 0xb) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    operator_delete((void *)param_1[0xd]);
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 4);
  }
  else {
    operator_delete((void *)param_1[10]);
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


// ===== 007df77c  FUN_007df77c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007df77c(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00987900;
  if ((*(byte *)(param_1 + 0xb) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    operator_delete((void *)param_1[0xd]);
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 4);
  }
  else {
    operator_delete((void *)param_1[10]);
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


// ===== 007df804  FUN_007df804 =====

undefined8 * FUN_007df804(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x70);
  *puVar1 = &PTR_FUN_00987900;
                    /* try { // try from 007df82c to 007df833 has its CatchHandler @ 007df844 */
  FUN_007dfab8(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007df858  FUN_007df858 =====

void FUN_007df858(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00987900;
  FUN_007dfab8(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007df874  FUN_007df874 =====

void FUN_007df874(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x40);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x68));
    bVar1 = *(byte *)(param_1 + 0x40);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x50));
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


// ===== 007df8f0  FUN_007df8f0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007df8f0(void *param_1)

{
  byte bVar1;
  
  if ((*(byte *)((long)param_1 + 0x58) & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 0x40);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x68));
    bVar1 = *(byte *)((long)param_1 + 0x40);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 0x20);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x50));
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


// ===== 007df96c  FUN_007df96c =====

void FUN_007df96c(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007df9ac to 007dfa23 has its CatchHandler @ 007dfa58 */
  FUN_007ccecc(&local_40,param_3,"channelId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 0x20);
  FUN_007cef18(&local_40,param_3,"isReveal",param_2 + 0x38);
  FUN_007ccecc(&local_40,param_3,"attachmentId",param_2 + 0x40);
  FUN_007ccecc(&local_40,param_3,"embedId",param_2 + 0x58);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007dfa90  FUN_007dfa90 =====

long FUN_007dfa90(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter24onTapObscuredMediaToggleENS1_24OnTapObscuredMediaToggleEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007dfaac  FUN_007dfaac =====

pointer_____offset_0x10___ * FUN_007dfaac(void)

{
  return &PTR_vtable_00987960;
}


// ===== 007dfab8  FUN_007dfab8 =====

void FUN_007dfab8(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
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
                    /* try { // try from 007dfb18 to 007dfb1f has its CatchHandler @ 007dfbe4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x18,*(char **)(param_2 + 0x28),*(ulong *)(param_2 + 0x20));
  }
  param_1[0x30] =
       *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (param_2 + 0x30);
  if ((param_2[0x38] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    *(undefined8 *)(param_1 + 0x38) = uVar1;
  }
  else {
                    /* try { // try from 007dfb4c to 007dfb53 has its CatchHandler @ 007dfbc4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x38,*(char **)(param_2 + 0x48),*(ulong *)(param_2 + 0x40));
  }
  if ((param_2[0x50] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x58);
    uVar1 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = uVar2;
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  else {
                    /* try { // try from 007dfb78 to 007dfb7f has its CatchHandler @ 007dfb8c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x50,*(char **)(param_2 + 0x60),*(ulong *)(param_2 + 0x58));
  }
  return;
}


// ===== 007dfc00  FUN_007dfc00 =====

void FUN_007dfc00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00987980;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007dfc20  FUN_007dfc20 =====

void FUN_007dfc20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00987980;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007dfc60  FUN_007dfc60 =====

undefined8 * FUN_007dfc60(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00987980;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007dfcac to 007dfcaf has its CatchHandler @ 007dfcc0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007dfcd4  FUN_007dfcd4 =====

void FUN_007dfcd4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00987980;
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


// ===== 007dfd10  FUN_007dfd10 =====

void FUN_007dfd10(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007dfd24  FUN_007dfd24 =====

void FUN_007dfd24(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007dfd58  FUN_007dfd58 =====

void FUN_007dfd58(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007dfd98 to 007dfdaf has its CatchHandler @ 007dfde4 */
  FUN_007ccecc(&local_40,param_3,"classificationId",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007dfe1c  FUN_007dfe1c =====

long FUN_007dfe1c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter28onTapSafetyPolicyNoticeEmbedENS1_28OnTapSafetyPolicyNoticeEmbedEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007dfe38  FUN_007dfe38 =====

pointer_____offset_0x10___ * FUN_007dfe38(void)

{
  return &PTR_vtable_009879e0;
}


// ===== 007dfe44  FUN_007dfe44 =====

void FUN_007dfe44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00987a00;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007dfe94  FUN_007dfe94 =====

void FUN_007dfe94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00987a00;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007dfee0  FUN_007dfee0 =====

undefined8 * FUN_007dfee0(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00987a00;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007dff34 to 007dff3b has its CatchHandler @ 007dff94 */
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
                    /* try { // try from 007dff60 to 007dff67 has its CatchHandler @ 007dff7c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007dffa8  FUN_007dffa8 =====

void FUN_007dffa8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00987a00;
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
                    /* try { // try from 007e0020 to 007e0027 has its CatchHandler @ 007e0038 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007e0054  FUN_007e0054 =====

void FUN_007e0054(long param_1)

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


// ===== 007e0098  FUN_007e0098 =====

void FUN_007e0098(void *param_1)

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


// ===== 007e00d8  FUN_007e00d8 =====

void FUN_007e00d8(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e0118 to 007e0147 has its CatchHandler @ 007e017c */
  FUN_007ccecc(&local_40,param_3,"ctaType",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"ctaKey",param_2 + 0x20);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e01b4  FUN_007e01b4 =====

long FUN_007e01b4(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter32onTapSafetySystemNotificationCtaENS1_32OnTapSafetySystemNotificationCtaEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e01d0  FUN_007e01d0 =====

pointer_____offset_0x10___ * FUN_007e01d0(void)

{
  return &PTR_vtable_00987a60;
}


// ===== 007e01dc  FUN_007e01dc =====

void FUN_007e01dc(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00987a80;
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


// ===== 007e024c  FUN_007e024c =====

void FUN_007e024c(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00987a80;
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


// ===== 007e02bc  FUN_007e02bc =====

undefined8 * FUN_007e02bc(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  *puVar1 = &PTR_FUN_00987a80;
                    /* try { // try from 007e02e4 to 007e02eb has its CatchHandler @ 007e02fc */
  FUN_007e0510(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007e0310  FUN_007e0310 =====

void FUN_007e0310(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00987a80;
  FUN_007e0510(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007e032c  FUN_007e032c =====

void FUN_007e032c(long param_1)

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


// ===== 007e0390  FUN_007e0390 =====

void FUN_007e0390(void *param_1)

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


// ===== 007e03f4  FUN_007e03f4 =====

void FUN_007e03f4(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e0434 to 007e047b has its CatchHandler @ 007e04b0 */
  FUN_007ccecc(&local_40,param_3,"channelId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 0x20);
  FUN_007ccecc(&local_40,param_3,"answerId",param_2 + 0x38);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e04e8  FUN_007e04e8 =====

long FUN_007e04e8(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter15onTapPollAnswerENS1_15OnTapPollAnswerEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e0504  FUN_007e0504 =====

pointer_____offset_0x10___ * FUN_007e0504(void)

{
  return &PTR_vtable_00987ae0;
}


// ===== 007e0510  FUN_007e0510 =====

void FUN_007e0510(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
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
                    /* try { // try from 007e0570 to 007e0577 has its CatchHandler @ 007e05e0 */
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
                    /* try { // try from 007e059c to 007e05a3 has its CatchHandler @ 007e05b0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x30,*(char **)(param_2 + 0x40),*(ulong *)(param_2 + 0x38));
  }
  return;
}


// ===== 007e05fc  FUN_007e05fc =====

void FUN_007e05fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00987b00;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007e064c  FUN_007e064c =====

void FUN_007e064c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00987b00;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007e0698  FUN_007e0698 =====

undefined8 * FUN_007e0698(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00987b00;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007e06ec to 007e06f3 has its CatchHandler @ 007e074c */
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
                    /* try { // try from 007e0718 to 007e071f has its CatchHandler @ 007e0734 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007e0760  FUN_007e0760 =====

void FUN_007e0760(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00987b00;
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
                    /* try { // try from 007e07d8 to 007e07df has its CatchHandler @ 007e07f0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007e080c  FUN_007e080c =====

void FUN_007e080c(long param_1)

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


// ===== 007e0850  FUN_007e0850 =====

void FUN_007e0850(void *param_1)

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


// ===== 007e0890  FUN_007e0890 =====

void FUN_007e0890(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e08d0 to 007e08ff has its CatchHandler @ 007e0934 */
  FUN_007ccecc(&local_40,param_3,"channelId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 0x20);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e096c  FUN_007e096c =====

long FUN_007e096c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter19onTapPollSubmitVoteENS1_19OnTapPollSubmitVoteEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e0988  FUN_007e0988 =====

pointer_____offset_0x10___ * FUN_007e0988(void)

{
  return &PTR_vtable_00987b60;
}


// ===== 007e0994  FUN_007e0994 =====

void FUN_007e0994(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00987b80;
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


// ===== 007e0a04  FUN_007e0a04 =====

void FUN_007e0a04(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00987b80;
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


// ===== 007e0a74  FUN_007e0a74 =====

undefined8 * FUN_007e0a74(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  *puVar1 = &PTR_FUN_00987b80;
                    /* try { // try from 007e0a9c to 007e0aa3 has its CatchHandler @ 007e0ab4 */
  FUN_007e0cc8(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007e0ac8  FUN_007e0ac8 =====

void FUN_007e0ac8(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00987b80;
  FUN_007e0cc8(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007e0ae4  FUN_007e0ae4 =====

void FUN_007e0ae4(long param_1)

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


// ===== 007e0b48  FUN_007e0b48 =====

void FUN_007e0b48(void *param_1)

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


// ===== 007e0bac  FUN_007e0bac =====

void FUN_007e0bac(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e0bec to 007e0c33 has its CatchHandler @ 007e0c68 */
  FUN_007ccecc(&local_40,param_3,"channelId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 0x20);
  FUN_007ccecc(&local_40,param_3,&DAT_0036e67d,param_2 + 0x38);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e0ca0  FUN_007e0ca0 =====

long FUN_007e0ca0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter15onTapPollActionENS1_15OnTapPollActionEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e0cbc  FUN_007e0cbc =====

pointer_____offset_0x10___ * FUN_007e0cbc(void)

{
  return &PTR_vtable_00987be0;
}


// ===== 007e0cc8  FUN_007e0cc8 =====

void FUN_007e0cc8(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
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
                    /* try { // try from 007e0d28 to 007e0d2f has its CatchHandler @ 007e0d98 */
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
                    /* try { // try from 007e0d54 to 007e0d5b has its CatchHandler @ 007e0d68 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x30,*(char **)(param_2 + 0x40),*(ulong *)(param_2 + 0x38));
  }
  return;
}


// ===== 007e0db4  FUN_007e0db4 =====

void FUN_007e0db4(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00987c00;
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


// ===== 007e0e24  FUN_007e0e24 =====

void FUN_007e0e24(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00987c00;
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


// ===== 007e0e94  FUN_007e0e94 =====

undefined8 * FUN_007e0e94(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x68);
  *puVar1 = &PTR_FUN_00987c00;
                    /* try { // try from 007e0ebc to 007e0ec3 has its CatchHandler @ 007e0ed4 */
  FUN_007e11fc(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007e0ee8  FUN_007e0ee8 =====

void FUN_007e0ee8(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00987c00;
  FUN_007e11fc(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007e0f04  FUN_007e0f04 =====

void FUN_007e0f04(long param_1)

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


// ===== 007e0f68  FUN_007e0f68 =====

void FUN_007e0f68(void *param_1)

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


// ===== 007e0fcc  FUN_007e0fcc =====

void FUN_007e0fcc(undefined4 *param_1,long param_2,long *param_3)

{
  char *pcVar1;
  long lVar2;
  undefined8 local_50;
  undefined8 *local_48;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 007e100c to 007e1053 has its CatchHandler @ 007e1184 */
  FUN_007ccecc(&local_50,param_3,"channelId",param_2 + 8);
  FUN_007ccecc(&local_50,param_3,"messageId",param_2 + 0x20);
  FUN_007ccecc(&local_50,param_3,"attachmentId",param_2 + 0x38);
                    /* try { // try from 007e105c to 007e1067 has its CatchHandler @ 007e117c */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = (undefined8 *)local_40;
                    /* try { // try from 007e1070 to 007e10cf has its CatchHandler @ 007e118c */
  FUN_007cf01c(&local_48,param_3,&DAT_0036adfd,param_2 + 0x50);
  FUN_007cf01c(&local_48,param_3,&DAT_0036ecbd,param_2 + 0x54);
  FUN_007cf01c(&local_48,param_3,"width",param_2 + 0x58);
  FUN_007cf01c(&local_48,param_3,"height",param_2 + 0x5c);
  pcVar1 = "cover";
  if (*(int *)(param_2 + 0x60) != 1) {
    pcVar1 = "";
  }
  local_40 = "fill";
  if (*(int *)(param_2 + 0x60) != 0) {
    local_40 = pcVar1;
  }
                    /* try { // try from 007e1100 to 007e1117 has its CatchHandler @ 007e1178 */
  FUN_007cf7a0(&local_48,param_3,"resizeMode",&local_40);
                    /* try { // try from 007e1118 to 007e112f has its CatchHandler @ 007e118c */
  FUN_007ceb94(&local_50,param_3,"layout",&local_48);
  if ((char *)local_48 != (char *)0x0) {
    (**(code **)*local_48)();
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_50;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e11d4  FUN_007e11d4 =====

long FUN_007e11d4(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter20onLongPressPollImageENS1_20OnLongPressPollImageEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e11f0  FUN_007e11f0 =====

pointer_____offset_0x10___ * FUN_007e11f0(void)

{
  return &PTR_vtable_00987c60;
}


// ===== 007e11fc  FUN_007e11fc =====

void FUN_007e11fc(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
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
                    /* try { // try from 007e125c to 007e1263 has its CatchHandler @ 007e12dc */
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
                    /* try { // try from 007e1288 to 007e128f has its CatchHandler @ 007e12ac */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x30,*(char **)(param_2 + 0x40),*(ulong *)(param_2 + 0x38));
  }
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  return;
}


// ===== 007e12f8  FUN_007e12f8 =====

void FUN_007e12f8(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00987c80;
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


// ===== 007e1368  FUN_007e1368 =====

void FUN_007e1368(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00987c80;
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


// ===== 007e13d8  FUN_007e13d8 =====

undefined8 * FUN_007e13d8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  *puVar1 = &PTR_FUN_00987c80;
                    /* try { // try from 007e1400 to 007e1407 has its CatchHandler @ 007e1418 */
  FUN_007e162c(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007e142c  FUN_007e142c =====

void FUN_007e142c(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00987c80;
  FUN_007e162c(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007e1448  FUN_007e1448 =====

void FUN_007e1448(long param_1)

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


// ===== 007e14ac  FUN_007e14ac =====

void FUN_007e14ac(void *param_1)

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


// ===== 007e1510  FUN_007e1510 =====

void FUN_007e1510(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e1550 to 007e1597 has its CatchHandler @ 007e15cc */
  FUN_007ccecc(&local_40,param_3,"channelId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 0x20);
  FUN_007ccecc(&local_40,param_3,"callback",param_2 + 0x38);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e1604  FUN_007e1604 =====

long FUN_007e1604(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter14onTapCtaButtonENS1_14OnTapCtaButtonEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e1620  FUN_007e1620 =====

pointer_____offset_0x10___ * FUN_007e1620(void)

{
  return &PTR_vtable_00987ce0;
}


// ===== 007e162c  FUN_007e162c =====

void FUN_007e162c(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
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
                    /* try { // try from 007e168c to 007e1693 has its CatchHandler @ 007e16fc */
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
                    /* try { // try from 007e16b8 to 007e16bf has its CatchHandler @ 007e16cc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x30,*(char **)(param_2 + 0x40),*(ulong *)(param_2 + 0x38));
  }
  return;
}


// ===== 007e1718  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e171c  FUN_007e171c =====

void FUN_007e171c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00987d00;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  return;
}


// ===== 007e1754  FUN_007e1754 =====

void FUN_007e1754(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_00987d00;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}


// ===== 007e176c  FUN_007e176c =====

void FUN_007e176c(void)

{
  return;
}


// ===== 007e1770  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e1774  FUN_007e1774 =====

void FUN_007e1774(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e17b4 to 007e1813 has its CatchHandler @ 007e1848 */
  FUN_007cd2fc(&local_40,param_3,"firstVisibleMessageIndex",param_2 + 8);
  FUN_007cd2fc(&local_40,param_3,"lastVisibleMessageIndex",param_2 + 0xc);
  FUN_007cf01c(&local_40,param_3,"firstVisibleMessagePercentVisible",param_2 + 0x10);
  FUN_007cf01c(&local_40,param_3,"lastVisibleMessagePercentVisible",param_2 + 0x14);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e1880  FUN_007e1880 =====

long FUN_007e1880(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter13onFirstLayoutENS1_13OnFirstLayoutEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e189c  FUN_007e189c =====

pointer_____offset_0x10___ * FUN_007e189c(void)

{
  return &PTR_vtable_00987d60;
}


// ===== 007e18a8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e18ac  FUN_007e18ac =====

void FUN_007e18ac(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00987d80;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  return;
}


// ===== 007e18e4  FUN_007e18e4 =====

void FUN_007e18e4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_00987d80;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}


// ===== 007e18fc  FUN_007e18fc =====

void FUN_007e18fc(void)

{
  return;
}


// ===== 007e1900  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e1904  FUN_007e1904 =====

void FUN_007e1904(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e1944 to 007e19a3 has its CatchHandler @ 007e19d8 */
  FUN_007cd2fc(&local_40,param_3,"firstVisibleMessageIndex",param_2 + 8);
  FUN_007cd2fc(&local_40,param_3,"lastVisibleMessageIndex",param_2 + 0xc);
  FUN_007cd2fc(&local_40,param_3,"firstVisibleMessagePercentVisible",param_2 + 0x10);
  FUN_007cd2fc(&local_40,param_3,"lastVisibleMessagePercentVisible",param_2 + 0x14);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e1a10  FUN_007e1a10 =====

long FUN_007e1a10(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter26onMessageVisibilityChangedENS1_26OnMessageVisibilityChangedEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e1a2c  FUN_007e1a2c =====

pointer_____offset_0x10___ * FUN_007e1a2c(void)

{
  return &PTR_vtable_00987de0;
}


// ===== 007e1a38  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e1a3c  FUN_007e1a3c =====

void FUN_007e1a3c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00987e00;
  puVar1[1] = uVar2;
  return;
}


// ===== 007e1a70  FUN_007e1a70 =====

void FUN_007e1a70(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00987e00;
  param_2[1] = uVar1;
  return;
}


// ===== 007e1a84  FUN_007e1a84 =====

void FUN_007e1a84(void)

{
  return;
}


// ===== 007e1a88  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e1a8c  FUN_007e1a8c =====

void FUN_007e1a8c(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e1acc to 007e1ae3 has its CatchHandler @ 007e1b18 */
  FUN_007ce2f8(&local_40,param_3,"timestampMs",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e1b50  FUN_007e1b50 =====

long FUN_007e1b50(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter21onCompleteFirstLayoutENS1_21OnCompleteFirstLayoutEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e1b6c  FUN_007e1b6c =====

pointer_____offset_0x10___ * FUN_007e1b6c(void)

{
  return &PTR_vtable_00987e60;
}


// ===== 007e1b78  FUN_007e1b78 =====

void FUN_007e1b78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00987e80;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007e1bc8  FUN_007e1bc8 =====

void FUN_007e1bc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00987e80;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007e1c14  FUN_007e1c14 =====

undefined8 * FUN_007e1c14(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00987e80;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007e1c68 to 007e1c6f has its CatchHandler @ 007e1cc8 */
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
                    /* try { // try from 007e1c94 to 007e1c9b has its CatchHandler @ 007e1cb0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007e1cdc  FUN_007e1cdc =====

void FUN_007e1cdc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00987e80;
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
                    /* try { // try from 007e1d54 to 007e1d5b has its CatchHandler @ 007e1d6c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007e1d88  FUN_007e1d88 =====

void FUN_007e1d88(long param_1)

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


// ===== 007e1dcc  FUN_007e1dcc =====

void FUN_007e1dcc(void *param_1)

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


// ===== 007e1e0c  FUN_007e1e0c =====

void FUN_007e1e0c(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e1e4c to 007e1e7b has its CatchHandler @ 007e1eb0 */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"action",param_2 + 0x20);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e1ee8  FUN_007e1ee8 =====

long FUN_007e1ee8(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter28onMessageAccessibilityActionENS1_28OnMessageAccessibilityActionEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e1f04  FUN_007e1f04 =====

pointer_____offset_0x10___ * FUN_007e1f04(void)

{
  return &PTR_vtable_00987ee0;
}


// ===== 007e1f10  FUN_007e1f10 =====

void FUN_007e1f10(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00987f00;
  if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    operator_delete((void *)param_1[0xe]);
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 4);
  }
  else {
    operator_delete((void *)param_1[10]);
    bVar1 = *(byte *)(param_1 + 4);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[6]);
  return;
}


// ===== 007e1f80  FUN_007e1f80 =====

void FUN_007e1f80(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00987f00;
  if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    operator_delete((void *)param_1[0xe]);
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 4);
  }
  else {
    operator_delete((void *)param_1[10]);
    bVar1 = *(byte *)(param_1 + 4);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007e1ff0  FUN_007e1ff0 =====

undefined8 * FUN_007e1ff0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x78);
  *puVar1 = &PTR_FUN_00987f00;
                    /* try { // try from 007e2018 to 007e201f has its CatchHandler @ 007e2030 */
  FUN_007e22ec(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007e2044  FUN_007e2044 =====

void FUN_007e2044(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00987f00;
  FUN_007e22ec(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007e2060  FUN_007e2060 =====

void FUN_007e2060(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x40);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x70));
    bVar1 = *(byte *)(param_1 + 0x40);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x50));
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x30));
  return;
}


// ===== 007e20c4  FUN_007e20c4 =====

void FUN_007e20c4(void *param_1)

{
  byte bVar1;
  
  if ((*(byte *)((long)param_1 + 0x60) & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 0x40);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x70));
    bVar1 = *(byte *)((long)param_1 + 0x40);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 0x20);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x50));
    bVar1 = *(byte *)((long)param_1 + 0x20);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x30));
  }
  operator_delete(param_1);
  return;
}


// ===== 007e2128  FUN_007e2128 =====

void FUN_007e2128(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e2168 to 007e2257 has its CatchHandler @ 007e228c */
  FUN_007cd2fc(&local_40,param_3,"playWallTimeMs",param_2 + 8);
  FUN_007cd2fc(&local_40,param_3,"stallMs",param_2 + 0xc);
  FUN_007cd2fc(&local_40,param_3,"stallCount",param_2 + 0x10);
  FUN_007cd2fc(&local_40,param_3,"seekCount",param_2 + 0x14);
  FUN_007cd2fc(&local_40,param_3,"firstPlayWaitingMs",param_2 + 0x18);
  FUN_007ccecc(&local_40,param_3,"mediaSource",param_2 + 0x20);
  FUN_007cf01c(&local_40,param_3,"fileDurationSec",param_2 + 0x38);
  FUN_007ccecc(&local_40,param_3,"mimeType",param_2 + 0x40);
  FUN_007cd2fc(&local_40,param_3,"errorCode",param_2 + 0x58);
  FUN_007ccecc(&local_40,param_3,"errorMessage",param_2 + 0x60);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e22c4  FUN_007e22c4 =====

long FUN_007e22c4(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter28onMediaPlayFinishedAnalyticsENS1_28OnMediaPlayFinishedAnalyticsEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e22e0  FUN_007e22e0 =====

pointer_____offset_0x10___ * FUN_007e22e0(void)

{
  return &PTR_vtable_00987f60;
}


// ===== 007e22ec  FUN_007e22ec =====

void FUN_007e22ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  if ((*(byte *)(param_2 + 3) & 1) == 0) {
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 3),(char *)param_2[5],param_2[4]);
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  if ((*(byte *)(param_2 + 7) & 1) == 0) {
    uVar2 = param_2[8];
    uVar1 = param_2[7];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[7] = uVar1;
  }
  else {
                    /* try { // try from 007e2368 to 007e236f has its CatchHandler @ 007e23e0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 7),(char *)param_2[9],param_2[8]);
  }
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  if ((*(byte *)(param_2 + 0xb) & 1) == 0) {
    uVar2 = param_2[0xc];
    uVar1 = param_2[0xb];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar2;
    param_1[0xb] = uVar1;
  }
  else {
                    /* try { // try from 007e239c to 007e23a3 has its CatchHandler @ 007e23b0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0xb),(char *)param_2[0xd],param_2[0xc]);
  }
  return;
}


// ===== 007e23fc  FUN_007e23fc =====

void FUN_007e23fc(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00987f80;
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


// ===== 007e246c  FUN_007e246c =====

void FUN_007e246c(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00987f80;
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


// ===== 007e24dc  FUN_007e24dc =====

undefined8 * FUN_007e24dc(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  *puVar1 = &PTR_FUN_00987f80;
                    /* try { // try from 007e2504 to 007e250b has its CatchHandler @ 007e251c */
  FUN_007e2730(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007e2530  FUN_007e2530 =====

void FUN_007e2530(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00987f80;
  FUN_007e2730(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007e254c  FUN_007e254c =====

void FUN_007e254c(long param_1)

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


// ===== 007e25b0  FUN_007e25b0 =====

void FUN_007e25b0(void *param_1)

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


// ===== 007e2614  FUN_007e2614 =====

void FUN_007e2614(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e2654 to 007e269b has its CatchHandler @ 007e26d0 */
  FUN_007ccecc(&local_40,param_3,"snapshotIndex",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 0x20);
  FUN_007ccecc(&local_40,param_3,"channelId",param_2 + 0x38);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e2708  FUN_007e2708 =====

long FUN_007e2708(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter18onTapForwardFooterENS1_18OnTapForwardFooterEE3$_0")
  {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e2724  FUN_007e2724 =====

pointer_____offset_0x10___ * FUN_007e2724(void)

{
  return &PTR_vtable_00987fe0;
}


// ===== 007e2730  FUN_007e2730 =====

void FUN_007e2730(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
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
                    /* try { // try from 007e2790 to 007e2797 has its CatchHandler @ 007e2800 */
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
                    /* try { // try from 007e27bc to 007e27c3 has its CatchHandler @ 007e27d0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x30,*(char **)(param_2 + 0x40),*(ulong *)(param_2 + 0x38));
  }
  return;
}


// ===== 007e281c  FUN_007e281c =====

void FUN_007e281c(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00988000;
  if ((*(byte *)(param_1 + 9) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 4);
  }
  else {
    operator_delete((void *)param_1[0xb]);
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


// ===== 007e288c  FUN_007e288c =====

void FUN_007e288c(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00988000;
  if ((*(byte *)(param_1 + 9) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 4);
  }
  else {
    operator_delete((void *)param_1[0xb]);
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


// ===== 007e28fc  FUN_007e28fc =====

undefined8 * FUN_007e28fc(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x60);
  *puVar1 = &PTR_FUN_00988000;
                    /* try { // try from 007e2924 to 007e292b has its CatchHandler @ 007e293c */
  FUN_007e2bc4(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007e2950  FUN_007e2950 =====

void FUN_007e2950(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00988000;
  FUN_007e2bc4(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007e296c  FUN_007e296c =====

void FUN_007e296c(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x58));
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


// ===== 007e29d0  FUN_007e29d0 =====

void FUN_007e29d0(void *param_1)

{
  byte bVar1;
  
  if ((*(byte *)((long)param_1 + 0x48) & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 0x20);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x58));
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


// ===== 007e2a34  FUN_007e2a34 =====

void FUN_007e2a34(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_48;
  undefined *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_48,param_3);
                    /* try { // try from 007e2a74 to 007e2abb has its CatchHandler @ 007e2b68 */
  FUN_007ccecc(&local_48,param_3,"channelId",param_2 + 8);
  FUN_007ccecc(&local_48,param_3,"messageId",param_2 + 0x20);
  FUN_007cd2fc(&local_48,param_3,"embedIndex",param_2 + 0x38);
  if (*(uint *)(param_2 + 0x3c) < 3) {
    local_40 = &DAT_0048268c + *(int *)(&DAT_0048268c + (ulong)*(uint *)(param_2 + 0x3c) * 4);
  }
  else {
    local_40 = &DAT_003675a8;
  }
                    /* try { // try from 007e2ae8 to 007e2aff has its CatchHandler @ 007e2b64 */
  FUN_007cf7a0(&local_48,param_3,"targetKind",&local_40);
                    /* try { // try from 007e2b00 to 007e2b2f has its CatchHandler @ 007e2b68 */
  FUN_007cef18(&local_48,param_3,"triggerHaptic",param_2 + 0x40);
  FUN_007ccecc(&local_48,param_3,"location",param_2 + 0x48);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e2b9c  FUN_007e2b9c =====

long FUN_007e2b9c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter18onTapInlineForwardENS1_18OnTapInlineForwardEE3$_0")
  {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e2bb8  FUN_007e2bb8 =====

pointer_____offset_0x10___ * FUN_007e2bb8(void)

{
  return &PTR_vtable_00988060;
}


// ===== 007e2bc4  FUN_007e2bc4 =====

void FUN_007e2bc4(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
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
                    /* try { // try from 007e2c24 to 007e2c2b has its CatchHandler @ 007e2ca4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x18,*(char **)(param_2 + 0x28),*(ulong *)(param_2 + 0x20));
  }
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  param_1[0x38] =
       *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  if ((param_2[0x40] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x48);
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    *(undefined8 *)(param_1 + 0x40) = uVar1;
  }
  else {
                    /* try { // try from 007e2c60 to 007e2c67 has its CatchHandler @ 007e2c74 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x40,*(char **)(param_2 + 0x50),*(ulong *)(param_2 + 0x48));
  }
  return;
}


// ===== 007e2cc0  FUN_007e2cc0 =====

void FUN_007e2cc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00988080;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007e2ce0  FUN_007e2ce0 =====

void FUN_007e2ce0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00988080;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007e2d20  FUN_007e2d20 =====

undefined8 * FUN_007e2d20(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00988080;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007e2d6c to 007e2d6f has its CatchHandler @ 007e2d80 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007e2d94  FUN_007e2d94 =====

void FUN_007e2d94(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00988080;
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


// ===== 007e2dd0  FUN_007e2dd0 =====

void FUN_007e2dd0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007e2de4  FUN_007e2de4 =====

void FUN_007e2de4(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007e2e18  FUN_007e2e18 =====

void FUN_007e2e18(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e2e58 to 007e2e6f has its CatchHandler @ 007e2ea4 */
  FUN_007ccecc(&local_40,param_3,"guildId",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e2edc  FUN_007e2edc =====

long FUN_007e2edc(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter19onTapClanTagChipletENS1_19OnTapClanTagChipletEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e2ef8  FUN_007e2ef8 =====

pointer_____offset_0x10___ * FUN_007e2ef8(void)

{
  return &PTR_vtable_009880e0;
}


// ===== 007e2f04  FUN_007e2f04 =====

void FUN_007e2f04(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00988100;
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


// ===== 007e2f74  FUN_007e2f74 =====

void FUN_007e2f74(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00988100;
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


// ===== 007e2fe4  FUN_007e2fe4 =====

undefined8 * FUN_007e2fe4(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x58);
  *puVar1 = &PTR_FUN_00988100;
                    /* try { // try from 007e300c to 007e3013 has its CatchHandler @ 007e3024 */
  FUN_007e327c(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007e3038  FUN_007e3038 =====

void FUN_007e3038(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00988100;
  FUN_007e327c(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007e3054  FUN_007e3054 =====

void FUN_007e3054(long param_1)

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


// ===== 007e30b8  FUN_007e30b8 =====

void FUN_007e30b8(void *param_1)

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


// ===== 007e311c  FUN_007e311c =====

void FUN_007e311c(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_48;
  undefined *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_48,param_3);
                    /* try { // try from 007e315c to 007e31a3 has its CatchHandler @ 007e3220 */
  FUN_007ccecc(&local_48,param_3,"messageId",param_2 + 8);
  FUN_007ccecc(&local_48,param_3,"authorId",param_2 + 0x20);
  FUN_007ccecc(&local_48,param_3,"contentId",param_2 + 0x38);
  if (*(uint *)(param_2 + 0x50) < 6) {
    local_40 = &DAT_00482698 + *(int *)(&DAT_00482698 + (ulong)*(uint *)(param_2 + 0x50) * 4);
  }
  else {
    local_40 = &DAT_003675a8;
  }
                    /* try { // try from 007e31d0 to 007e31e7 has its CatchHandler @ 007e321c */
  FUN_007cf7a0(&local_48,param_3,"tappedElement",&local_40);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e3254  FUN_007e3254 =====

long FUN_007e3254(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter31onTapContentInventoryEntryEmbedENS1_31OnTapContentInventoryEntryEmbedEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e3270  FUN_007e3270 =====

pointer_____offset_0x10___ * FUN_007e3270(void)

{
  return &PTR_vtable_00988160;
}


// ===== 007e327c  FUN_007e327c =====

void FUN_007e327c(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
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
                    /* try { // try from 007e32dc to 007e32e3 has its CatchHandler @ 007e3354 */
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
                    /* try { // try from 007e3308 to 007e330f has its CatchHandler @ 007e3324 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x30,*(char **)(param_2 + 0x40),*(ulong *)(param_2 + 0x38));
  }
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  return;
}


// ===== 007e3370  FUN_007e3370 =====

void FUN_007e3370(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00988180;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007e33c0  FUN_007e33c0 =====

void FUN_007e33c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00988180;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007e340c  FUN_007e340c =====

undefined8 * FUN_007e340c(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00988180;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007e3460 to 007e3467 has its CatchHandler @ 007e34c0 */
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
                    /* try { // try from 007e348c to 007e3493 has its CatchHandler @ 007e34a8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007e34d4  FUN_007e34d4 =====

void FUN_007e34d4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00988180;
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
                    /* try { // try from 007e354c to 007e3553 has its CatchHandler @ 007e3564 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007e3580  FUN_007e3580 =====

void FUN_007e3580(long param_1)

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


// ===== 007e35c4  FUN_007e35c4 =====

void FUN_007e35c4(void *param_1)

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


// ===== 007e3604  FUN_007e3604 =====

void FUN_007e3604(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e3644 to 007e3673 has its CatchHandler @ 007e36a8 */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"authorId",param_2 + 0x20);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e36e0  FUN_007e36e0 =====

long FUN_007e36e0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter19onTapCheckpointCardENS1_19OnTapCheckpointCardEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e36fc  FUN_007e36fc =====

pointer_____offset_0x10___ * FUN_007e36fc(void)

{
  return &PTR_vtable_009881e0;
}


// ===== 007e3708  FUN_007e3708 =====

void FUN_007e3708(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00988200;
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


// ===== 007e3790  FUN_007e3790 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007e3790(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00988200;
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


// ===== 007e3818  FUN_007e3818 =====

undefined8 * FUN_007e3818(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x68);
  *puVar1 = &PTR_FUN_00988200;
                    /* try { // try from 007e3840 to 007e3847 has its CatchHandler @ 007e3858 */
  FUN_007e3ab4(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007e386c  FUN_007e386c =====

void FUN_007e386c(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00988200;
  FUN_007e3ab4(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007e3888  FUN_007e3888 =====

void FUN_007e3888(long param_1)

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


// ===== 007e3904  FUN_007e3904 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007e3904(void *param_1)

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


// ===== 007e3980  FUN_007e3980 =====

void FUN_007e3980(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e39c0 to 007e3a1f has its CatchHandler @ 007e3a54 */
  FUN_007ccecc(&local_40,param_3,"soundId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"guildId",param_2 + 0x20);
  FUN_007ccecc(&local_40,param_3,"channelId",param_2 + 0x38);
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 0x50);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e3a8c  FUN_007e3a8c =====

long FUN_007e3a8c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter14onTapSoundmojiENS1_14OnTapSoundmojiEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e3aa8  FUN_007e3aa8 =====

pointer_____offset_0x10___ * FUN_007e3aa8(void)

{
  return &PTR_vtable_00988260;
}


// ===== 007e3ab4  FUN_007e3ab4 =====

void FUN_007e3ab4(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
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
                    /* try { // try from 007e3b14 to 007e3b1b has its CatchHandler @ 007e3bd8 */
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
                    /* try { // try from 007e3b40 to 007e3b47 has its CatchHandler @ 007e3bb8 */
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
                    /* try { // try from 007e3b6c to 007e3b73 has its CatchHandler @ 007e3b80 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x48,*(char **)(param_2 + 0x58),*(ulong *)(param_2 + 0x50));
  }
  return;
}


// ===== 007e3bf4  FUN_007e3bf4 =====

void FUN_007e3bf4(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00988280;
  if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0xb);
  }
  else {
    operator_delete((void *)param_1[0x10]);
    bVar1 = *(byte *)(param_1 + 0xb);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    operator_delete((void *)param_1[0xd]);
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 5);
  }
  else {
    operator_delete((void *)param_1[10]);
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


// ===== 007e3c94  FUN_007e3c94 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007e3c94(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00988280;
  if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0xb);
  }
  else {
    operator_delete((void *)param_1[0x10]);
    bVar1 = *(byte *)(param_1 + 0xb);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    operator_delete((void *)param_1[0xd]);
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 5);
  }
  else {
    operator_delete((void *)param_1[10]);
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


// ===== 007e3d34  FUN_007e3d34 =====

undefined8 * FUN_007e3d34(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x88);
  *puVar1 = &PTR_FUN_00988280;
                    /* try { // try from 007e3d5c to 007e3d63 has its CatchHandler @ 007e3d74 */
  FUN_007e3f64(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007e3d88  FUN_007e3d88 =====

void FUN_007e3d88(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00988280;
  FUN_007e3f64(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007e3da4  FUN_007e3da4 =====

void FUN_007e3da4(long param_1)

{
  FUN_007e4100(param_1 + 8);
  return;
}


// ===== 007e3dac  FUN_007e3dac =====

void FUN_007e3dac(void *param_1)

{
  FUN_007e4100((long)param_1 + 8);
  operator_delete(param_1);
  return;
}


// ===== 007e3dd4  FUN_007e3dd4 =====

void FUN_007e3dd4(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_48;
  undefined *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_48,param_3);
                    /* try { // try from 007e3e14 to 007e3e2b has its CatchHandler @ 007e3f08 */
  FUN_007ccecc(&local_48,param_3,"messageId",param_2 + 8);
  if (*(uint *)(param_2 + 0x20) < 6) {
    local_40 = &DAT_004826b0 + *(int *)(&DAT_004826b0 + (ulong)*(uint *)(param_2 + 0x20) * 4);
  }
  else {
    local_40 = &DAT_003675a8;
  }
                    /* try { // try from 007e3e58 to 007e3e6f has its CatchHandler @ 007e3f04 */
  FUN_007cf7a0(&local_48,param_3,"actionId",&local_40);
                    /* try { // try from 007e3e70 to 007e3ecf has its CatchHandler @ 007e3f08 */
  FUN_007ccecc(&local_48,param_3,"appId",param_2 + 0x28);
  FUN_007ccecc(&local_48,param_3,"embedUrl",param_2 + 0x40);
  FUN_007ccecc(&local_48,param_3,"customId",param_2 + 0x58);
  FUN_007ccecc(&local_48,param_3,"referrerId",param_2 + 0x70);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e3f3c  FUN_007e3f3c =====

long FUN_007e3f3c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter20onTapAppMessageEmbedENS1_20OnTapAppMessageEmbedEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e3f58  FUN_007e3f58 =====

pointer_____offset_0x10___ * FUN_007e3f58(void)

{
  return &PTR_vtable_009882e0;
}


// ===== 007e3f64  FUN_007e3f64 =====

void FUN_007e3f64(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
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
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  if ((param_2[0x20] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
  }
  else {
                    /* try { // try from 007e3fcc to 007e3fd3 has its CatchHandler @ 007e40e4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x20,*(char **)(param_2 + 0x30),*(ulong *)(param_2 + 0x28));
  }
  if ((param_2[0x38] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    *(undefined8 *)(param_1 + 0x38) = uVar1;
  }
  else {
                    /* try { // try from 007e3ff8 to 007e3fff has its CatchHandler @ 007e40c4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x38,*(char **)(param_2 + 0x48),*(ulong *)(param_2 + 0x40));
  }
  if ((param_2[0x50] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x58);
    uVar1 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = uVar2;
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  else {
                    /* try { // try from 007e4024 to 007e402b has its CatchHandler @ 007e40a4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x50,*(char **)(param_2 + 0x60),*(ulong *)(param_2 + 0x58));
  }
  if ((param_2[0x68] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x70);
    uVar1 = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x70) = uVar2;
    *(undefined8 *)(param_1 + 0x68) = uVar1;
  }
  else {
                    /* try { // try from 007e4050 to 007e4057 has its CatchHandler @ 007e4064 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x68,*(char **)(param_2 + 0x78),*(ulong *)(param_2 + 0x70));
  }
  return;
}


// ===== 007e4100  FUN_007e4100 =====

void FUN_007e4100(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x68] & 1) == 0) {
    bVar1 = param_1[0x50];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x78));
    bVar1 = param_1[0x50];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x38];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x60));
    bVar1 = param_1[0x38];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x20];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x48));
    bVar1 = param_1[0x20];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x30));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 007e4194  FUN_007e4194 =====

void FUN_007e4194(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00988300;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007e41b4  FUN_007e41b4 =====

void FUN_007e41b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00988300;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007e41f4  FUN_007e41f4 =====

undefined8 * FUN_007e41f4(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00988300;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007e4240 to 007e4243 has its CatchHandler @ 007e4254 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007e4268  FUN_007e4268 =====

void FUN_007e4268(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00988300;
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


// ===== 007e42a4  FUN_007e42a4 =====

void FUN_007e42a4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007e42b8  FUN_007e42b8 =====

void FUN_007e42b8(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007e42ec  FUN_007e42ec =====

void FUN_007e42ec(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e432c to 007e4343 has its CatchHandler @ 007e4378 */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e43b0  FUN_007e43b0 =====

long FUN_007e43b0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter29onTapPreviewSharedClientThemeENS1_29OnTapPreviewSharedClientThemeEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e43cc  FUN_007e43cc =====

pointer_____offset_0x10___ * FUN_007e43cc(void)

{
  return &PTR_vtable_00988360;
}


// ===== 007e43d8  FUN_007e43d8 =====

void FUN_007e43d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00988380;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007e43f8  FUN_007e43f8 =====

void FUN_007e43f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00988380;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007e4438  FUN_007e4438 =====

undefined8 * FUN_007e4438(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00988380;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007e4484 to 007e4487 has its CatchHandler @ 007e4498 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007e44ac  FUN_007e44ac =====

void FUN_007e44ac(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00988380;
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


// ===== 007e44e8  FUN_007e44e8 =====

void FUN_007e44e8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007e44fc  FUN_007e44fc =====

void FUN_007e44fc(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007e4530  FUN_007e4530 =====

void FUN_007e4530(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e4570 to 007e4587 has its CatchHandler @ 007e45bc */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e45f4  FUN_007e45f4 =====

long FUN_007e45f4(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter25onSharedClientThemeViewedENS1_25OnSharedClientThemeViewedEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e4610  FUN_007e4610 =====

pointer_____offset_0x10___ * FUN_007e4610(void)

{
  return &PTR_vtable_009883e0;
}


// ===== 007e461c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e4620  FUN_007e4620 =====

void FUN_007e4620(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00988400;
  *(undefined4 *)(puVar2 + 1) = uVar1;
  return;
}


// ===== 007e4658  FUN_007e4658 =====

void FUN_007e4658(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00988400;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return;
}


// ===== 007e4670  FUN_007e4670 =====

void FUN_007e4670(void)

{
  return;
}


// ===== 007e4674  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e4678  FUN_007e4678 =====

void FUN_007e4678(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e46b8 to 007e46cf has its CatchHandler @ 007e4704 */
  FUN_007cd2fc(&local_40,param_3,"index",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e473c  FUN_007e473c =====

long FUN_007e473c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react27EmojiPickerViewEventEmitter20onStickyHeaderRenderENS1_20OnStickyHeaderRenderEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e4758  FUN_007e4758 =====

pointer_____offset_0x10___ * FUN_007e4758(void)

{
  return &PTR_vtable_00988460;
}


// ===== 007e4764  FUN_007e4764 =====

void FUN_007e4764(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00988480;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007e47b4  FUN_007e47b4 =====

void FUN_007e47b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00988480;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007e4800  FUN_007e4800 =====

undefined8 * FUN_007e4800(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00988480;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007e4854 to 007e485b has its CatchHandler @ 007e48b4 */
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
                    /* try { // try from 007e4880 to 007e4887 has its CatchHandler @ 007e489c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007e48c8  FUN_007e48c8 =====

void FUN_007e48c8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00988480;
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
                    /* try { // try from 007e4940 to 007e4947 has its CatchHandler @ 007e4958 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007e4974  FUN_007e4974 =====

void FUN_007e4974(long param_1)

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


// ===== 007e49b8  FUN_007e49b8 =====

void FUN_007e49b8(void *param_1)

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


// ===== 007e49f8  FUN_007e49f8 =====

void FUN_007e49f8(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e4a38 to 007e4a67 has its CatchHandler @ 007e4a9c */
  FUN_007ccecc(&local_40,param_3,"emojiId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"emojiName",param_2 + 0x20);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e4ad4  FUN_007e4ad4 =====

long FUN_007e4ad4(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react27EmojiPickerViewEventEmitter12onPressEmojiENS1_12OnPressEmojiEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e4af0  FUN_007e4af0 =====

pointer_____offset_0x10___ * FUN_007e4af0(void)

{
  return &PTR_vtable_009884e0;
}


// ===== 007e4afc  FUN_007e4afc =====

void FUN_007e4afc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00988500;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007e4b4c  FUN_007e4b4c =====

void FUN_007e4b4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00988500;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007e4b98  FUN_007e4b98 =====

undefined8 * FUN_007e4b98(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00988500;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007e4bec to 007e4bf3 has its CatchHandler @ 007e4c4c */
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
                    /* try { // try from 007e4c18 to 007e4c1f has its CatchHandler @ 007e4c34 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007e4c60  FUN_007e4c60 =====

void FUN_007e4c60(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00988500;
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
                    /* try { // try from 007e4cd8 to 007e4cdf has its CatchHandler @ 007e4cf0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007e4d0c  FUN_007e4d0c =====

void FUN_007e4d0c(long param_1)

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


// ===== 007e4d50  FUN_007e4d50 =====

void FUN_007e4d50(void *param_1)

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


// ===== 007e4d90  FUN_007e4d90 =====

void FUN_007e4d90(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e4dd0 to 007e4dff has its CatchHandler @ 007e4e34 */
  FUN_007ccecc(&local_40,param_3,"emojiId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"emojiName",param_2 + 0x20);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e4e6c  FUN_007e4e6c =====

long FUN_007e4e6c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react27EmojiPickerViewEventEmitter16onLongPressEmojiENS1_16OnLongPressEmojiEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e4e88  FUN_007e4e88 =====

pointer_____offset_0x10___ * FUN_007e4e88(void)

{
  return &PTR_vtable_00988560;
}


// ===== 007e4e94  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e4e98  FUN_007e4e98 =====

void FUN_007e4e98(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_00988580;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  puVar1[4] = uVar6;
  puVar1[3] = uVar5;
  puVar1[5] = uVar2;
  return;
}


// ===== 007e4ee0  FUN_007e4ee0 =====

void FUN_007e4ee0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_FUN_00988580;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar2;
  param_2[3] = uVar1;
  param_2[2] = uVar4;
  param_2[1] = uVar3;
  return;
}


// ===== 007e4f08  FUN_007e4f08 =====

void FUN_007e4f08(void)

{
  return;
}


// ===== 007e4f0c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e4f10  FUN_007e4f10 =====

void FUN_007e4f10(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 007e4f58 to 007e4f63 has its CatchHandler @ 007e51ac */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007e4f6c to 007e4fe3 has its CatchHandler @ 007e51c0 */
  FUN_007cf01c(&local_48,param_3,&DAT_0036d96a,param_2 + 8);
  FUN_007cf01c(&local_48,param_3,&DAT_0036b8e4,param_2 + 0xc);
  FUN_007cf01c(&local_48,param_3,"bottom",param_2 + 0x10);
  FUN_007cf01c(&local_48,param_3,"right",param_2 + 0x14);
  FUN_007ceb94(&local_50,param_3,"contentInset",&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
                    /* try { // try from 007e5000 to 007e500b has its CatchHandler @ 007e51a4 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007e5014 to 007e505b has its CatchHandler @ 007e51bc */
  FUN_007cf01c(&local_48,param_3,&DAT_0036adfd,param_2 + 0x18);
  FUN_007cf01c(&local_48,param_3,&DAT_0036ecbd,param_2 + 0x1c);
  FUN_007ceb94(&local_50,param_3,"contentOffset",&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
                    /* try { // try from 007e5078 to 007e5083 has its CatchHandler @ 007e519c */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007e508c to 007e50d3 has its CatchHandler @ 007e51b8 */
  FUN_007cf01c(&local_48,param_3,"width",param_2 + 0x20);
  FUN_007cf01c(&local_48,param_3,"height",param_2 + 0x24);
  FUN_007ceb94(&local_50,param_3,"contentSize",&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
                    /* try { // try from 007e50f0 to 007e50fb has its CatchHandler @ 007e5194 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007e5104 to 007e514b has its CatchHandler @ 007e51b4 */
  FUN_007cf01c(&local_48,param_3,"width",param_2 + 0x28);
  FUN_007cf01c(&local_48,param_3,"height",param_2 + 0x2c);
  FUN_007ceb94(&local_50,param_3,"layoutMeasurement",&local_48);
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


// ===== 007e520c  FUN_007e520c =====

long FUN_007e520c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react27EmojiPickerViewEventEmitter8onScrollENS1_8OnScrollEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e5228  FUN_007e5228 =====

pointer_____offset_0x10___ * FUN_007e5228(void)

{
  return &PTR_vtable_009885e0;
}


// ===== 007e5234  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e5238  FUN_007e5238 =====

void FUN_007e5238(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_00988600;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  puVar1[4] = uVar6;
  puVar1[3] = uVar5;
  puVar1[5] = uVar2;
  return;
}


// ===== 007e5280  FUN_007e5280 =====

void FUN_007e5280(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_FUN_00988600;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar2;
  param_2[3] = uVar1;
  param_2[2] = uVar4;
  param_2[1] = uVar3;
  return;
}


// ===== 007e52a8  FUN_007e52a8 =====

void FUN_007e52a8(void)

{
  return;
}


// ===== 007e52ac  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e52b0  FUN_007e52b0 =====

void FUN_007e52b0(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 007e52f8 to 007e5303 has its CatchHandler @ 007e554c */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007e530c to 007e5383 has its CatchHandler @ 007e5560 */
  FUN_007cf01c(&local_48,param_3,&DAT_0036d96a,param_2 + 8);
  FUN_007cf01c(&local_48,param_3,&DAT_0036b8e4,param_2 + 0xc);
  FUN_007cf01c(&local_48,param_3,"bottom",param_2 + 0x10);
  FUN_007cf01c(&local_48,param_3,"right",param_2 + 0x14);
  FUN_007ceb94(&local_50,param_3,"contentInset",&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
                    /* try { // try from 007e53a0 to 007e53ab has its CatchHandler @ 007e5544 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007e53b4 to 007e53fb has its CatchHandler @ 007e555c */
  FUN_007cf01c(&local_48,param_3,&DAT_0036adfd,param_2 + 0x18);
  FUN_007cf01c(&local_48,param_3,&DAT_0036ecbd,param_2 + 0x1c);
  FUN_007ceb94(&local_50,param_3,"contentOffset",&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
                    /* try { // try from 007e5418 to 007e5423 has its CatchHandler @ 007e553c */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007e542c to 007e5473 has its CatchHandler @ 007e5558 */
  FUN_007cf01c(&local_48,param_3,"width",param_2 + 0x20);
  FUN_007cf01c(&local_48,param_3,"height",param_2 + 0x24);
  FUN_007ceb94(&local_50,param_3,"contentSize",&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
                    /* try { // try from 007e5490 to 007e549b has its CatchHandler @ 007e5534 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007e54a4 to 007e54eb has its CatchHandler @ 007e5554 */
  FUN_007cf01c(&local_48,param_3,"width",param_2 + 0x28);
  FUN_007cf01c(&local_48,param_3,"height",param_2 + 0x2c);
  FUN_007ceb94(&local_50,param_3,"layoutMeasurement",&local_48);
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


// ===== 007e55ac  FUN_007e55ac =====

long FUN_007e55ac(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react27EmojiPickerViewEventEmitter17onScrollBeginDragENS1_17OnScrollBeginDragEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e55c8  FUN_007e55c8 =====

pointer_____offset_0x10___ * FUN_007e55c8(void)

{
  return &PTR_vtable_00988660;
}


// ===== 007e55d4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e55d8  FUN_007e55d8 =====

void FUN_007e55d8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_00988680;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  puVar1[4] = uVar6;
  puVar1[3] = uVar5;
  puVar1[5] = uVar2;
  return;
}


// ===== 007e5620  FUN_007e5620 =====

void FUN_007e5620(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_FUN_00988680;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar2;
  param_2[3] = uVar1;
  param_2[2] = uVar4;
  param_2[1] = uVar3;
  return;
}


// ===== 007e5648  FUN_007e5648 =====

void FUN_007e5648(void)

{
  return;
}


// ===== 007e564c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e5650  FUN_007e5650 =====

void FUN_007e5650(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 007e5698 to 007e56a3 has its CatchHandler @ 007e58ec */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007e56ac to 007e5723 has its CatchHandler @ 007e5900 */
  FUN_007cf01c(&local_48,param_3,&DAT_0036d96a,param_2 + 8);
  FUN_007cf01c(&local_48,param_3,&DAT_0036b8e4,param_2 + 0xc);
  FUN_007cf01c(&local_48,param_3,"bottom",param_2 + 0x10);
  FUN_007cf01c(&local_48,param_3,"right",param_2 + 0x14);
  FUN_007ceb94(&local_50,param_3,"contentInset",&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
                    /* try { // try from 007e5740 to 007e574b has its CatchHandler @ 007e58e4 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007e5754 to 007e579b has its CatchHandler @ 007e58fc */
  FUN_007cf01c(&local_48,param_3,&DAT_0036adfd,param_2 + 0x18);
  FUN_007cf01c(&local_48,param_3,&DAT_0036ecbd,param_2 + 0x1c);
  FUN_007ceb94(&local_50,param_3,"contentOffset",&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
                    /* try { // try from 007e57b8 to 007e57c3 has its CatchHandler @ 007e58dc */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007e57cc to 007e5813 has its CatchHandler @ 007e58f8 */
  FUN_007cf01c(&local_48,param_3,"width",param_2 + 0x20);
  FUN_007cf01c(&local_48,param_3,"height",param_2 + 0x24);
  FUN_007ceb94(&local_50,param_3,"contentSize",&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
                    /* try { // try from 007e5830 to 007e583b has its CatchHandler @ 007e58d4 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007e5844 to 007e588b has its CatchHandler @ 007e58f4 */
  FUN_007cf01c(&local_48,param_3,"width",param_2 + 0x28);
  FUN_007cf01c(&local_48,param_3,"height",param_2 + 0x2c);
  FUN_007ceb94(&local_50,param_3,"layoutMeasurement",&local_48);
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


// ===== 007e594c  FUN_007e594c =====

long FUN_007e594c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react27EmojiPickerViewEventEmitter15onScrollEndDragENS1_15OnScrollEndDragEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e5968  FUN_007e5968 =====

pointer_____offset_0x10___ * FUN_007e5968(void)

{
  return &PTR_vtable_009886e0;
}


// ===== 007e5974  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e5978  FUN_007e5978 =====

void FUN_007e5978(long param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = *(undefined1 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00988700;
  *(undefined1 *)(puVar2 + 1) = uVar1;
  return;
}


// ===== 007e59b0  FUN_007e59b0 =====

void FUN_007e59b0(long param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00988700;
  *(undefined1 *)(param_2 + 1) = uVar1;
  return;
}


// ===== 007e59c8  FUN_007e59c8 =====

void FUN_007e59c8(void)

{
  return;
}


// ===== 007e59cc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e59d0  FUN_007e59d0 =====

void FUN_007e59d0(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e5a10 to 007e5a27 has its CatchHandler @ 007e5a5c */
  FUN_007cef18(&local_40,param_3,"showNit",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e5a94  FUN_007e5a94 =====

long FUN_007e5a94(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react27EmojiPickerViewEventEmitter17onShowNitroUpsellENS1_17OnShowNitroUpsellEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e5ab0  FUN_007e5ab0 =====

pointer_____offset_0x10___ * FUN_007e5ab0(void)

{
  return &PTR_vtable_00988760;
}


// ===== 007e5abc  FUN_007e5abc =====

void FUN_007e5abc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00988780;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007e5adc  FUN_007e5adc =====

void FUN_007e5adc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00988780;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007e5b1c  FUN_007e5b1c =====

undefined8 * FUN_007e5b1c(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00988780;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007e5b68 to 007e5b6b has its CatchHandler @ 007e5b7c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007e5b90  FUN_007e5b90 =====

void FUN_007e5b90(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00988780;
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


// ===== 007e5bcc  FUN_007e5bcc =====

void FUN_007e5bcc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007e5be0  FUN_007e5be0 =====

void FUN_007e5be0(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007e5c14  FUN_007e5c14 =====

void FUN_007e5c14(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e5c54 to 007e5c6b has its CatchHandler @ 007e5ca0 */
  FUN_007ccecc(&local_40,param_3,"emojiName",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e5cd8  FUN_007e5cd8 =====

long FUN_007e5cd8(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react30EmojiPickerRowViewEventEmitter12onPressEmojiENS1_12OnPressEmojiEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e5cf4  FUN_007e5cf4 =====

pointer_____offset_0x10___ * FUN_007e5cf4(void)

{
  return &PTR_vtable_009887e0;
}


// ===== 007e5d00  FUN_007e5d00 =====

void FUN_007e5d00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00988800;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007e5d20  FUN_007e5d20 =====

void FUN_007e5d20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00988800;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007e5d60  FUN_007e5d60 =====

undefined8 * FUN_007e5d60(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00988800;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007e5dac to 007e5daf has its CatchHandler @ 007e5dc0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007e5dd4  FUN_007e5dd4 =====

void FUN_007e5dd4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00988800;
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


// ===== 007e5e10  FUN_007e5e10 =====

void FUN_007e5e10(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007e5e24  FUN_007e5e24 =====

void FUN_007e5e24(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007e5e58  FUN_007e5e58 =====

void FUN_007e5e58(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e5e98 to 007e5eaf has its CatchHandler @ 007e5ee4 */
  FUN_007ccecc(&local_40,param_3,"emojiName",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e5f1c  FUN_007e5f1c =====

long FUN_007e5f1c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react30EmojiPickerRowViewEventEmitter16onLongPressEmojiENS1_16OnLongPressEmojiEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e5f38  FUN_007e5f38 =====

pointer_____offset_0x10___ * FUN_007e5f38(void)

{
  return &PTR_vtable_00988860;
}


// ===== 007e5f44  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e5f48  FUN_007e5f48 =====

void FUN_007e5f48(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00988880;
  return;
}


// ===== 007e5f6c  FUN_007e5f6c =====

void FUN_007e5f6c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00988880;
  return;
}


// ===== 007e5f7c  FUN_007e5f7c =====

void FUN_007e5f7c(void)

{
  return;
}


// ===== 007e5f80  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e5f84  FUN_007e5f84 =====

void FUN_007e5f84(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 007e5fec  FUN_007e5fec =====

long FUN_007e5fec(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react28DCDFastImageViewEventEmitter11onLoadStartENS1_11OnLoadStartEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e6008  FUN_007e6008 =====

pointer_____offset_0x10___ * FUN_007e6008(void)

{
  return &PTR_vtable_009888e0;
}


// ===== 007e6014  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e6018  FUN_007e6018 =====

void FUN_007e6018(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00988900;
  puVar1[1] = uVar2;
  return;
}


// ===== 007e604c  FUN_007e604c =====

void FUN_007e604c(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00988900;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return;
}


// ===== 007e6064  FUN_007e6064 =====

void FUN_007e6064(void)

{
  return;
}


// ===== 007e6068  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e606c  FUN_007e606c =====

void FUN_007e606c(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e60ac to 007e60db has its CatchHandler @ 007e6110 */
  FUN_007cd2fc(&local_40,param_3,"loaded",param_2 + 8);
  FUN_007cd2fc(&local_40,param_3,"total",param_2 + 0xc);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e6148  FUN_007e6148 =====

long FUN_007e6148(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react28DCDFastImageViewEventEmitter10onProgressENS1_10OnProgressEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e6164  FUN_007e6164 =====

pointer_____offset_0x10___ * FUN_007e6164(void)

{
  return &PTR_vtable_00988960;
}


// ===== 007e6170  FUN_007e6170 =====

void FUN_007e6170(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00988980;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007e6190  FUN_007e6190 =====

void FUN_007e6190(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00988980;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007e61d0  FUN_007e61d0 =====

undefined8 * FUN_007e61d0(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00988980;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007e621c to 007e621f has its CatchHandler @ 007e6230 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007e6244  FUN_007e6244 =====

void FUN_007e6244(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00988980;
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


// ===== 007e6280  FUN_007e6280 =====

void FUN_007e6280(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007e6294  FUN_007e6294 =====

void FUN_007e6294(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007e62c8  FUN_007e62c8 =====

void FUN_007e62c8(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e6308 to 007e631f has its CatchHandler @ 007e6354 */
  FUN_007ccecc(&local_40,param_3,"error",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e638c  FUN_007e638c =====

long FUN_007e638c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react28DCDFastImageViewEventEmitter7onErrorENS1_7OnErrorEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e63a8  FUN_007e63a8 =====

pointer_____offset_0x10___ * FUN_007e63a8(void)

{
  return &PTR_vtable_009889e0;
}


// ===== 007e63b4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e63b8  FUN_007e63b8 =====

void FUN_007e63b8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00988a00;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  return;
}


// ===== 007e63f0  FUN_007e63f0 =====

void FUN_007e63f0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_00988a00;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}


// ===== 007e6408  FUN_007e6408 =====

void FUN_007e6408(void)

{
  return;
}


// ===== 007e640c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e6410  FUN_007e6410 =====

void FUN_007e6410(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e6450 to 007e647f has its CatchHandler @ 007e64b4 */
  FUN_007ce2f8(&local_40,param_3,"width",param_2 + 8);
  FUN_007ce2f8(&local_40,param_3,"height",param_2 + 0x10);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e64ec  FUN_007e64ec =====

long FUN_007e64ec(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react28DCDFastImageViewEventEmitter6onLoadENS1_6OnLoadEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e6508  FUN_007e6508 =====

pointer_____offset_0x10___ * FUN_007e6508(void)

{
  return &PTR_vtable_00988a60;
}


// ===== 007e6514  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e6518  FUN_007e6518 =====

void FUN_007e6518(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00988a80;
  return;
}


// ===== 007e653c  FUN_007e653c =====

void FUN_007e653c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00988a80;
  return;
}


// ===== 007e654c  FUN_007e654c =====

void FUN_007e654c(void)

{
  return;
}


// ===== 007e6550  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e6554  FUN_007e6554 =====

void FUN_007e6554(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 007e65bc  FUN_007e65bc =====

long FUN_007e65bc(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react28DCDFastImageViewEventEmitter9onLoadEndENS1_9OnLoadEndEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e65d8  FUN_007e65d8 =====

pointer_____offset_0x10___ * FUN_007e65d8(void)

{
  return &PTR_vtable_00988ae0;
}


// ===== 007e65e4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e65e8  FUN_007e65e8 =====

void FUN_007e65e8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00988b00;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  return;
}


// ===== 007e6620  FUN_007e6620 =====

void FUN_007e6620(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_00988b00;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}


// ===== 007e6638  FUN_007e6638 =====

void FUN_007e6638(void)

{
  return;
}


// ===== 007e663c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e6640  FUN_007e6640 =====

void FUN_007e6640(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 007e6688 to 007e6693 has its CatchHandler @ 007e675c */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007e669c to 007e6713 has its CatchHandler @ 007e6764 */
  FUN_007cf01c(&local_48,param_3,&DAT_0036adfd,param_2 + 8);
  FUN_007cf01c(&local_48,param_3,&DAT_0036ecbd,param_2 + 0xc);
  FUN_007cf01c(&local_48,param_3,"width",param_2 + 0x10);
  FUN_007cf01c(&local_48,param_3,"height",param_2 + 0x14);
  FUN_007ceb94(&local_50,param_3,"layout",&local_48);
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


// ===== 007e67b0  FUN_007e67b0 =====

long FUN_007e67b0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react23FastestListEventEmitter8onLayoutENS1_8OnLayoutEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e67cc  FUN_007e67cc =====

pointer_____offset_0x10___ * FUN_007e67cc(void)

{
  return &PTR_vtable_00988b60;
}


// ===== 007e67d8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e67dc  FUN_007e67dc =====

void FUN_007e67dc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_00988b80;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  puVar1[4] = uVar6;
  puVar1[3] = uVar5;
  puVar1[5] = uVar2;
  return;
}


// ===== 007e6824  FUN_007e6824 =====

void FUN_007e6824(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_FUN_00988b80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar2;
  param_2[3] = uVar1;
  param_2[2] = uVar4;
  param_2[1] = uVar3;
  return;
}


