// ===== 007e684c  FUN_007e684c =====

void FUN_007e684c(void)

{
  return;
}


// ===== 007e6850  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e6854  FUN_007e6854 =====

void FUN_007e6854(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 007e689c to 007e68a7 has its CatchHandler @ 007e6af0 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007e68b0 to 007e6927 has its CatchHandler @ 007e6b04 */
  FUN_007cf01c(&local_48,param_3,&DAT_0036d96a,param_2 + 8);
  FUN_007cf01c(&local_48,param_3,&DAT_0036b8e4,param_2 + 0xc);
  FUN_007cf01c(&local_48,param_3,"bottom",param_2 + 0x10);
  FUN_007cf01c(&local_48,param_3,"right",param_2 + 0x14);
  FUN_007ceb94(&local_50,param_3,"contentInset",&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
                    /* try { // try from 007e6944 to 007e694f has its CatchHandler @ 007e6ae8 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007e6958 to 007e699f has its CatchHandler @ 007e6b00 */
  FUN_007cf01c(&local_48,param_3,&DAT_0036adfd,param_2 + 0x18);
  FUN_007cf01c(&local_48,param_3,&DAT_0036ecbd,param_2 + 0x1c);
  FUN_007ceb94(&local_50,param_3,"contentOffset",&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
                    /* try { // try from 007e69bc to 007e69c7 has its CatchHandler @ 007e6ae0 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007e69d0 to 007e6a17 has its CatchHandler @ 007e6afc */
  FUN_007cf01c(&local_48,param_3,"width",param_2 + 0x20);
  FUN_007cf01c(&local_48,param_3,"height",param_2 + 0x24);
  FUN_007ceb94(&local_50,param_3,"contentSize",&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
                    /* try { // try from 007e6a34 to 007e6a3f has its CatchHandler @ 007e6ad8 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007e6a48 to 007e6a8f has its CatchHandler @ 007e6af8 */
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


// ===== 007e6b50  FUN_007e6b50 =====

long FUN_007e6b50(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react23FastestListEventEmitter8onScrollENS1_8OnScrollEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e6b6c  FUN_007e6b6c =====

pointer_____offset_0x10___ * FUN_007e6b6c(void)

{
  return &PTR_vtable_00988be0;
}


// ===== 007e6b78  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e6b7c  FUN_007e6b7c =====

void FUN_007e6b7c(long param_1)

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
  *puVar1 = &PTR_FUN_00988c00;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  puVar1[4] = uVar6;
  puVar1[3] = uVar5;
  puVar1[5] = uVar2;
  return;
}


// ===== 007e6bc4  FUN_007e6bc4 =====

void FUN_007e6bc4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_FUN_00988c00;
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


// ===== 007e6bec  FUN_007e6bec =====

void FUN_007e6bec(void)

{
  return;
}


// ===== 007e6bf0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e6bf4  FUN_007e6bf4 =====

void FUN_007e6bf4(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 007e6c3c to 007e6c47 has its CatchHandler @ 007e6e90 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007e6c50 to 007e6cc7 has its CatchHandler @ 007e6ea4 */
  FUN_007cf01c(&local_48,param_3,&DAT_0036d96a,param_2 + 8);
  FUN_007cf01c(&local_48,param_3,&DAT_0036b8e4,param_2 + 0xc);
  FUN_007cf01c(&local_48,param_3,"bottom",param_2 + 0x10);
  FUN_007cf01c(&local_48,param_3,"right",param_2 + 0x14);
  FUN_007ceb94(&local_50,param_3,"contentInset",&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
                    /* try { // try from 007e6ce4 to 007e6cef has its CatchHandler @ 007e6e88 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007e6cf8 to 007e6d3f has its CatchHandler @ 007e6ea0 */
  FUN_007cf01c(&local_48,param_3,&DAT_0036adfd,param_2 + 0x18);
  FUN_007cf01c(&local_48,param_3,&DAT_0036ecbd,param_2 + 0x1c);
  FUN_007ceb94(&local_50,param_3,"contentOffset",&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
                    /* try { // try from 007e6d5c to 007e6d67 has its CatchHandler @ 007e6e80 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007e6d70 to 007e6db7 has its CatchHandler @ 007e6e9c */
  FUN_007cf01c(&local_48,param_3,"width",param_2 + 0x20);
  FUN_007cf01c(&local_48,param_3,"height",param_2 + 0x24);
  FUN_007ceb94(&local_50,param_3,"contentSize",&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
                    /* try { // try from 007e6dd4 to 007e6ddf has its CatchHandler @ 007e6e78 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007e6de8 to 007e6e2f has its CatchHandler @ 007e6e98 */
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


// ===== 007e6ef0  FUN_007e6ef0 =====

long FUN_007e6ef0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react23FastestListEventEmitter17onScrollBeginDragENS1_17OnScrollBeginDragEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e6f0c  FUN_007e6f0c =====

pointer_____offset_0x10___ * FUN_007e6f0c(void)

{
  return &PTR_vtable_00988c60;
}


// ===== 007e6f18  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e6f1c  FUN_007e6f1c =====

void FUN_007e6f1c(long param_1)

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
  *puVar1 = &PTR_FUN_00988c80;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  puVar1[4] = uVar6;
  puVar1[3] = uVar5;
  puVar1[5] = uVar2;
  return;
}


// ===== 007e6f64  FUN_007e6f64 =====

void FUN_007e6f64(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_FUN_00988c80;
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


// ===== 007e6f8c  FUN_007e6f8c =====

void FUN_007e6f8c(void)

{
  return;
}


// ===== 007e6f90  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e6f94  FUN_007e6f94 =====

void FUN_007e6f94(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 007e6fdc to 007e6fe7 has its CatchHandler @ 007e7230 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007e6ff0 to 007e7067 has its CatchHandler @ 007e7244 */
  FUN_007cf01c(&local_48,param_3,&DAT_0036d96a,param_2 + 8);
  FUN_007cf01c(&local_48,param_3,&DAT_0036b8e4,param_2 + 0xc);
  FUN_007cf01c(&local_48,param_3,"bottom",param_2 + 0x10);
  FUN_007cf01c(&local_48,param_3,"right",param_2 + 0x14);
  FUN_007ceb94(&local_50,param_3,"contentInset",&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
                    /* try { // try from 007e7084 to 007e708f has its CatchHandler @ 007e7228 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007e7098 to 007e70df has its CatchHandler @ 007e7240 */
  FUN_007cf01c(&local_48,param_3,&DAT_0036adfd,param_2 + 0x18);
  FUN_007cf01c(&local_48,param_3,&DAT_0036ecbd,param_2 + 0x1c);
  FUN_007ceb94(&local_50,param_3,"contentOffset",&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
                    /* try { // try from 007e70fc to 007e7107 has its CatchHandler @ 007e7220 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007e7110 to 007e7157 has its CatchHandler @ 007e723c */
  FUN_007cf01c(&local_48,param_3,"width",param_2 + 0x20);
  FUN_007cf01c(&local_48,param_3,"height",param_2 + 0x24);
  FUN_007ceb94(&local_50,param_3,"contentSize",&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
                    /* try { // try from 007e7174 to 007e717f has its CatchHandler @ 007e7218 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007e7188 to 007e71cf has its CatchHandler @ 007e7238 */
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


// ===== 007e7290  FUN_007e7290 =====

long FUN_007e7290(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react23FastestListEventEmitter15onScrollEndDragENS1_15OnScrollEndDragEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e72ac  FUN_007e72ac =====

pointer_____offset_0x10___ * FUN_007e72ac(void)

{
  return &PTR_vtable_00988ce0;
}


// ===== 007e72b8  FUN_007e72b8 =====

void FUN_007e72b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00988d00;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007e72d8  FUN_007e72d8 =====

void FUN_007e72d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00988d00;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007e7318  FUN_007e7318 =====

undefined8 * FUN_007e7318(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00988d00;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007e7364 to 007e7367 has its CatchHandler @ 007e7380 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  puVar2[4] = uVar3;
  return puVar2;
}


// ===== 007e7394  FUN_007e7394 =====

void FUN_007e7394(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00988d00;
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
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar1;
  return;
}


// ===== 007e73f4  FUN_007e73f4 =====

void FUN_007e73f4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007e7408  FUN_007e7408 =====

void FUN_007e7408(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007e743c  FUN_007e743c =====

void FUN_007e743c(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e747c to 007e74f3 has its CatchHandler @ 007e7528 */
  FUN_007ccecc(&local_40,param_3,"sectionsId",param_2 + 8);
  FUN_007cd2fc(&local_40,param_3,"sectionStart",param_2 + 0x20);
  FUN_007cd2fc(&local_40,param_3,"sectionEnd",param_2 + 0x24);
  FUN_007cd2fc(&local_40,param_3,"itemStart",param_2 + 0x28);
  FUN_007cd2fc(&local_40,param_3,"itemEnd",param_2 + 0x2c);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e7560  FUN_007e7560 =====

long FUN_007e7560(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react23FastestListEventEmitter21onVisibleItemsChangedENS1_21OnVisibleItemsChangedEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e757c  FUN_007e757c =====

pointer_____offset_0x10___ * FUN_007e757c(void)

{
  return &PTR_vtable_00988d60;
}


// ===== 007e7588  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e758c  FUN_007e758c =====

void FUN_007e758c(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *puVar2 = &PTR_FUN_00988d80;
  puVar2[2] = uVar4;
  puVar2[1] = uVar3;
  *(undefined4 *)(puVar2 + 3) = uVar1;
  return;
}


// ===== 007e75cc  FUN_007e75cc =====

void FUN_007e75cc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00988d80;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}


// ===== 007e75ec  FUN_007e75ec =====

void FUN_007e75ec(void)

{
  return;
}


// ===== 007e75f0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e75f4  FUN_007e75f4 =====

void FUN_007e75f4(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e7634 to 007e76c3 has its CatchHandler @ 007e76f8 */
  FUN_007cd2fc(&local_40,param_3,"section",param_2 + 8);
  FUN_007cd2fc(&local_40,param_3,&DAT_0037060a,param_2 + 0xc);
  FUN_007cef18(&local_40,param_3,"isSectionHeader",param_2 + 0x10);
  FUN_007cef18(&local_40,param_3,"isSectionFooter",param_2 + 0x11);
  FUN_007cd2fc(&local_40,param_3,&DAT_0036ff78,param_2 + 0x14);
  FUN_007cd2fc(&local_40,param_3,"sizeExpected",param_2 + 0x18);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e7730  FUN_007e7730 =====

long FUN_007e7730(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react23FastestListEventEmitter20onUnexpectedItemSizeENS1_20OnUnexpectedItemSizeEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e774c  FUN_007e774c =====

pointer_____offset_0x10___ * FUN_007e774c(void)

{
  return &PTR_vtable_00988de0;
}


// ===== 007e7758  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e775c  FUN_007e775c =====

void FUN_007e775c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00988e00;
  return;
}


// ===== 007e7780  FUN_007e7780 =====

void FUN_007e7780(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00988e00;
  return;
}


// ===== 007e7790  FUN_007e7790 =====

void FUN_007e7790(void)

{
  return;
}


// ===== 007e7794  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e7798  FUN_007e7798 =====

void FUN_007e7798(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 007e7800  FUN_007e7800 =====

long FUN_007e7800(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react32PassthroughTouchViewEventEmitter11onTouchDownENS1_11OnTouchDownEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e781c  FUN_007e781c =====

pointer_____offset_0x10___ * FUN_007e781c(void)

{
  return &PTR_vtable_00988e60;
}


// ===== 007e7828  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e782c  FUN_007e782c =====

void FUN_007e782c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00988e80;
  puVar1[1] = uVar2;
  return;
}


// ===== 007e7860  FUN_007e7860 =====

void FUN_007e7860(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00988e80;
  param_2[1] = uVar1;
  return;
}


// ===== 007e7874  FUN_007e7874 =====

void FUN_007e7874(void)

{
  return;
}


// ===== 007e7878  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e787c  FUN_007e787c =====

void FUN_007e787c(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e78bc to 007e78d3 has its CatchHandler @ 007e7908 */
  FUN_007ce2f8(&local_40,param_3,"portal",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e7940  FUN_007e7940 =====

long FUN_007e7940(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react25DCDPortalViewEventEmitter18onPortalViewLoadedENS1_18OnPortalViewLoadedEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e795c  FUN_007e795c =====

pointer_____offset_0x10___ * FUN_007e795c(void)

{
  return &PTR_vtable_00988ee0;
}


// ===== 007e7968  FUN_007e7968 =====

void FUN_007e7968(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00988f00;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007e79b8  FUN_007e79b8 =====

void FUN_007e79b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00988f00;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007e7a04  FUN_007e7a04 =====

undefined8 * FUN_007e7a04(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00988f00;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007e7a58 to 007e7a5f has its CatchHandler @ 007e7ab8 */
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
                    /* try { // try from 007e7a84 to 007e7a8b has its CatchHandler @ 007e7aa0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007e7acc  FUN_007e7acc =====

void FUN_007e7acc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00988f00;
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
                    /* try { // try from 007e7b44 to 007e7b4b has its CatchHandler @ 007e7b5c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007e7b78  FUN_007e7b78 =====

void FUN_007e7b78(long param_1)

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


// ===== 007e7bbc  FUN_007e7bbc =====

void FUN_007e7bbc(void *param_1)

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


// ===== 007e7bfc  FUN_007e7bfc =====

void FUN_007e7bfc(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e7c3c to 007e7c6b has its CatchHandler @ 007e7ca0 */
  FUN_007ccecc(&local_40,param_3,"status",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"result",param_2 + 0x20);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e7cd8  FUN_007e7cd8 =====

long FUN_007e7cd8(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react24DCDQRScannerEventEmitter13onQRCodeFoundENS1_13OnQRCodeFoundEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e7cf4  FUN_007e7cf4 =====

pointer_____offset_0x10___ * FUN_007e7cf4(void)

{
  return &PTR_vtable_00988f60;
}


// ===== 007e7d00  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e7d04  FUN_007e7d04 =====

void FUN_007e7d04(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00988f80;
  return;
}


// ===== 007e7d28  FUN_007e7d28 =====

void FUN_007e7d28(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00988f80;
  return;
}


// ===== 007e7d38  FUN_007e7d38 =====

void FUN_007e7d38(void)

{
  return;
}


// ===== 007e7d3c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e7d40  FUN_007e7d40 =====

void FUN_007e7d40(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 007e7da8  FUN_007e7da8 =====

long FUN_007e7da8(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react37SelectActionComponentViewEventEmitter5onTapENS1_5OnTapEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e7dc4  FUN_007e7dc4 =====

pointer_____offset_0x10___ * FUN_007e7dc4(void)

{
  return &PTR_vtable_00988fe0;
}


// ===== 007e7dd0  FUN_007e7dd0 =====

void FUN_007e7dd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00989000;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007e7df0  FUN_007e7df0 =====

void FUN_007e7df0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00989000;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007e7e30  FUN_007e7e30 =====

undefined8 * FUN_007e7e30(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00989000;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007e7e7c to 007e7e7f has its CatchHandler @ 007e7e90 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007e7ea4  FUN_007e7ea4 =====

void FUN_007e7ea4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00989000;
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


// ===== 007e7ee0  FUN_007e7ee0 =====

void FUN_007e7ee0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007e7ef4  FUN_007e7ef4 =====

void FUN_007e7ef4(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007e7f28  FUN_007e7f28 =====

void FUN_007e7f28(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e7f68 to 007e7f7f has its CatchHandler @ 007e7fb4 */
  FUN_007ccecc(&local_40,param_3,"stickerId",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e7fec  FUN_007e7fec =====

long FUN_007e7fec(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react32StickerPickerRowViewEventEmitter14onPressStickerENS1_14OnPressStickerEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e8008  FUN_007e8008 =====

pointer_____offset_0x10___ * FUN_007e8008(void)

{
  return &PTR_vtable_00989060;
}


// ===== 007e8014  FUN_007e8014 =====

void FUN_007e8014(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00989080;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007e8034  FUN_007e8034 =====

void FUN_007e8034(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00989080;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007e8074  FUN_007e8074 =====

undefined8 * FUN_007e8074(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00989080;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007e80c0 to 007e80c3 has its CatchHandler @ 007e80d4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007e80e8  FUN_007e80e8 =====

void FUN_007e80e8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00989080;
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


// ===== 007e8124  FUN_007e8124 =====

void FUN_007e8124(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007e8138  FUN_007e8138 =====

void FUN_007e8138(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007e816c  FUN_007e816c =====

void FUN_007e816c(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e81ac to 007e81c3 has its CatchHandler @ 007e81f8 */
  FUN_007ccecc(&local_40,param_3,"stickerId",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e8230  FUN_007e8230 =====

long FUN_007e8230(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react32StickerPickerRowViewEventEmitter18onLongPressStickerENS1_18OnLongPressStickerEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e824c  FUN_007e824c =====

pointer_____offset_0x10___ * FUN_007e824c(void)

{
  return &PTR_vtable_009890e0;
}


// ===== 007e8258  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e825c  FUN_007e825c =====

void FUN_007e825c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00989100;
  puVar1[1] = uVar2;
  return;
}


// ===== 007e8290  FUN_007e8290 =====

void FUN_007e8290(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00989100;
  param_2[1] = uVar1;
  return;
}


// ===== 007e82a4  FUN_007e82a4 =====

void FUN_007e82a4(void)

{
  return;
}


// ===== 007e82a8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e82ac  FUN_007e82ac =====

void FUN_007e82ac(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e82ec to 007e8303 has its CatchHandler @ 007e8338 */
  FUN_007ce2f8(&local_40,param_3,"timestamp",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e8370  FUN_007e8370 =====

long FUN_007e8370(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react33DCDTTIMeasurementViewEventEmitter13onMeasurementENS1_13OnMeasurementEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e838c  FUN_007e838c =====

pointer_____offset_0x10___ * FUN_007e838c(void)

{
  return &PTR_vtable_00989160;
}


// ===== 007e8398  FUN_007e8398 =====

void FUN_007e8398(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00989180;
  folly::dynamic::folly::dynamic::destroy(param_1 + 4);
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007e83dc  FUN_007e83dc =====

void FUN_007e83dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00989180;
  folly::dynamic::folly::dynamic::destroy(param_1 + 4);
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007e841c  FUN_007e841c =====

undefined8 * FUN_007e841c(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x50);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00989180;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007e8470 to 007e8477 has its CatchHandler @ 007e8498 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
                    /* try { // try from 007e8478 to 007e8483 has its CatchHandler @ 007e84a0 */
  folly::dynamic::dynamic((dynamic *)(puVar2 + 4),(dynamic *)(param_1 + 0x20));
  return puVar2;
}


// ===== 007e84c4  FUN_007e84c4 =====

void FUN_007e84c4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00989180;
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
                    /* try { // try from 007e8518 to 007e8523 has its CatchHandler @ 007e8534 */
  folly::dynamic::dynamic((dynamic *)(param_2 + 4),(dynamic *)(param_1 + 0x20));
  return;
}


// ===== 007e8550  FUN_007e8550 =====

void FUN_007e8550(long param_1)

{
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x20);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007e858c  FUN_007e858c =====

void FUN_007e858c(void *param_1)

{
  folly::dynamic::folly::dynamic::destroy((long)param_1 + 0x20);
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007e85c4  FUN_007e85c4 =====

void FUN_007e85c4(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_60;
  undefined8 *local_58 [2];
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_60,param_3);
                    /* try { // try from 007e860c to 007e8617 has its CatchHandler @ 007e8738 */
  (**(code **)(*param_3 + 0x130))(local_58,param_3);
  local_48 = local_58[0];
                    /* try { // try from 007e8620 to 007e8637 has its CatchHandler @ 007e8740 */
  FUN_007ccecc(&local_48,param_3,&DAT_00364f7a,param_2 + 8);
                    /* try { // try from 007e8638 to 007e8647 has its CatchHandler @ 007e8730 */
  facebook::jsi::facebook::jsi::valueFromDynamic(local_58,param_3,param_2 + 0x20);
                    /* try { // try from 007e8648 to 007e8677 has its CatchHandler @ 007e8748 */
  uVar2 = __strlen_chk(&DAT_00370ab4,5);
  (**(code **)(*param_3 + 0x108))(&local_40,param_3,&DAT_00370ab4,uVar2);
                    /* try { // try from 007e8680 to 007e8693 has its CatchHandler @ 007e8710 */
  (**(code **)(*param_3 + 0x1b8))(param_3,&local_48,&local_40,local_58);
  if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)();
  }
  facebook::jsi::Value::~Value((Value *)local_58);
                    /* try { // try from 007e86b0 to 007e86c7 has its CatchHandler @ 007e8740 */
  FUN_007ceb94(&local_60,param_3,&DAT_0036ec96,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_60;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e8798  FUN_007e8798 =====

long FUN_007e8798(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react36TextDisplayComponentViewEventEmitter9onTapLinkENS1_9OnTapLinkEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e87b4  FUN_007e87b4 =====

pointer_____offset_0x10___ * FUN_007e87b4(void)

{
  return &PTR_vtable_009891e0;
}


// ===== 007e87c0  FUN_007e87c0 =====

void FUN_007e87c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00989200;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007e87e0  FUN_007e87e0 =====

void FUN_007e87e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00989200;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007e8820  FUN_007e8820 =====

undefined8 * FUN_007e8820(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00989200;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007e886c to 007e886f has its CatchHandler @ 007e8880 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007e8894  FUN_007e8894 =====

void FUN_007e8894(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00989200;
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


// ===== 007e88d0  FUN_007e88d0 =====

void FUN_007e88d0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007e88e4  FUN_007e88e4 =====

void FUN_007e88e4(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007e8918  FUN_007e8918 =====

void FUN_007e8918(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e8958 to 007e896f has its CatchHandler @ 007e89a4 */
  FUN_007ccecc(&local_40,param_3,&DAT_00364f7a,param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e89dc  FUN_007e89dc =====

long FUN_007e89dc(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react36TextDisplayComponentViewEventEmitter15onLongPressLinkENS1_15OnLongPressLinkEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e89f8  FUN_007e89f8 =====

pointer_____offset_0x10___ * FUN_007e89f8(void)

{
  return &PTR_vtable_00989260;
}


// ===== 007e8a04  FUN_007e8a04 =====

void FUN_007e8a04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00989280;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007e8a24  FUN_007e8a24 =====

void FUN_007e8a24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00989280;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007e8a64  FUN_007e8a64 =====

undefined8 * FUN_007e8a64(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00989280;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007e8ab0 to 007e8ab3 has its CatchHandler @ 007e8ac4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007e8ad8  FUN_007e8ad8 =====

void FUN_007e8ad8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00989280;
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


// ===== 007e8b14  FUN_007e8b14 =====

void FUN_007e8b14(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007e8b28  FUN_007e8b28 =====

void FUN_007e8b28(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007e8b5c  FUN_007e8b5c =====

void FUN_007e8b5c(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 007e8ba4 to 007e8baf has its CatchHandler @ 007e8c30 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007e8bb8 to 007e8be7 has its CatchHandler @ 007e8c38 */
  FUN_007ccecc(&local_48,param_3,"attachmentUrl",param_2 + 8);
  FUN_007ceb94(&local_50,param_3,&DAT_0036ec96,&local_48);
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


// ===== 007e8c84  FUN_007e8c84 =====

long FUN_007e8c84(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react36TextDisplayComponentViewEventEmitter19onTapAttachmentLinkENS1_19OnTapAttachmentLinkEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e8ca0  FUN_007e8ca0 =====

pointer_____offset_0x10___ * FUN_007e8ca0(void)

{
  return &PTR_vtable_009892e0;
}


// ===== 007e8cac  FUN_007e8cac =====

void FUN_007e8cac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00989300;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007e8cfc  FUN_007e8cfc =====

void FUN_007e8cfc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00989300;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007e8d48  FUN_007e8d48 =====

undefined8 * FUN_007e8d48(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00989300;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007e8d9c to 007e8da3 has its CatchHandler @ 007e8dfc */
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
                    /* try { // try from 007e8dc8 to 007e8dcf has its CatchHandler @ 007e8de4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007e8e10  FUN_007e8e10 =====

void FUN_007e8e10(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00989300;
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
                    /* try { // try from 007e8e88 to 007e8e8f has its CatchHandler @ 007e8ea0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007e8ebc  FUN_007e8ebc =====

void FUN_007e8ebc(long param_1)

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


// ===== 007e8f00  FUN_007e8f00 =====

void FUN_007e8f00(void *param_1)

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


// ===== 007e8f40  FUN_007e8f40 =====

void FUN_007e8f40(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 007e8f88 to 007e8f93 has its CatchHandler @ 007e902c */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007e8f9c to 007e8fe3 has its CatchHandler @ 007e9034 */
  FUN_007ccecc(&local_48,param_3,"attachmentUrl",param_2 + 8);
  FUN_007ccecc(&local_48,param_3,"attachmentName",param_2 + 0x20);
  FUN_007ceb94(&local_50,param_3,&DAT_0036ec96,&local_48);
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


// ===== 007e9080  FUN_007e9080 =====

long FUN_007e9080(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react36TextDisplayComponentViewEventEmitter25onLongPressAttachmentLinkENS1_25OnLongPressAttachmentLinkEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e909c  FUN_007e909c =====

pointer_____offset_0x10___ * FUN_007e909c(void)

{
  return &PTR_vtable_00989360;
}


// ===== 007e90a8  FUN_007e90a8 =====

void FUN_007e90a8(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00989380;
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


// ===== 007e9130  FUN_007e9130 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007e9130(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00989380;
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


// ===== 007e91b8  FUN_007e91b8 =====

undefined8 * FUN_007e91b8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x68);
  *puVar1 = &PTR_FUN_00989380;
                    /* try { // try from 007e91e0 to 007e91e7 has its CatchHandler @ 007e91f8 */
  FUN_007e9454(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007e920c  FUN_007e920c =====

void FUN_007e920c(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00989380;
  FUN_007e9454(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007e9228  FUN_007e9228 =====

void FUN_007e9228(long param_1)

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


// ===== 007e92a4  FUN_007e92a4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007e92a4(void *param_1)

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


// ===== 007e9320  FUN_007e9320 =====

void FUN_007e9320(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e9360 to 007e93bf has its CatchHandler @ 007e93f4 */
  FUN_007ccecc(&local_40,param_3,"userId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"channelId",param_2 + 0x20);
  FUN_007ccecc(&local_40,param_3,"roleName",param_2 + 0x38);
  FUN_007ccecc(&local_40,param_3,"parsedUserId",param_2 + 0x50);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e942c  FUN_007e942c =====

long FUN_007e942c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react36TextDisplayComponentViewEventEmitter12onTapMentionENS1_12OnTapMentionEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e9448  FUN_007e9448 =====

pointer_____offset_0x10___ * FUN_007e9448(void)

{
  return &PTR_vtable_009893e0;
}


// ===== 007e9454  FUN_007e9454 =====

void FUN_007e9454(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
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
                    /* try { // try from 007e94b4 to 007e94bb has its CatchHandler @ 007e9578 */
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
                    /* try { // try from 007e94e0 to 007e94e7 has its CatchHandler @ 007e9558 */
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
                    /* try { // try from 007e950c to 007e9513 has its CatchHandler @ 007e9520 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x48,*(char **)(param_2 + 0x58),*(ulong *)(param_2 + 0x50));
  }
  return;
}


// ===== 007e9594  FUN_007e9594 =====

void FUN_007e9594(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00989400;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007e95b4  FUN_007e95b4 =====

void FUN_007e95b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00989400;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007e95f4  FUN_007e95f4 =====

undefined8 * FUN_007e95f4(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00989400;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007e9640 to 007e9643 has its CatchHandler @ 007e9654 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007e9668  FUN_007e9668 =====

void FUN_007e9668(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00989400;
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


// ===== 007e96a4  FUN_007e96a4 =====

void FUN_007e96a4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007e96b8  FUN_007e96b8 =====

void FUN_007e96b8(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007e96ec  FUN_007e96ec =====

void FUN_007e96ec(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 007e9734 to 007e973f has its CatchHandler @ 007e97c0 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007e9748 to 007e9777 has its CatchHandler @ 007e97c8 */
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


// ===== 007e9814  FUN_007e9814 =====

long FUN_007e9814(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react36TextDisplayComponentViewEventEmitter14onTapTimestampENS1_14OnTapTimestampEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e9830  FUN_007e9830 =====

pointer_____offset_0x10___ * FUN_007e9830(void)

{
  return &PTR_vtable_00989460;
}


// ===== 007e983c  FUN_007e983c =====

void FUN_007e983c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00989480;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007e985c  FUN_007e985c =====

void FUN_007e985c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00989480;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007e989c  FUN_007e989c =====

undefined8 * FUN_007e989c(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00989480;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007e98e8 to 007e98eb has its CatchHandler @ 007e98fc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007e9910  FUN_007e9910 =====

void FUN_007e9910(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00989480;
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


// ===== 007e994c  FUN_007e994c =====

void FUN_007e994c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007e9960  FUN_007e9960 =====

void FUN_007e9960(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007e9994  FUN_007e9994 =====

void FUN_007e9994(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 007e99dc to 007e99e7 has its CatchHandler @ 007e9a68 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007e99f0 to 007e9a1f has its CatchHandler @ 007e9a70 */
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


// ===== 007e9abc  FUN_007e9abc =====

long FUN_007e9abc(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react36TextDisplayComponentViewEventEmitter15onTapInlineCodeENS1_15OnTapInlineCodeEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e9ad8  FUN_007e9ad8 =====

pointer_____offset_0x10___ * FUN_007e9ad8(void)

{
  return &PTR_vtable_009894e0;
}


// ===== 007e9ae4  FUN_007e9ae4 =====

void FUN_007e9ae4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00989500;
  folly::dynamic::folly::dynamic::destroy(param_1 + 1);
  return;
}


// ===== 007e9af4  FUN_007e9af4 =====

void FUN_007e9af4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00989500;
  folly::dynamic::folly::dynamic::destroy(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 007e9b24  FUN_007e9b24 =====

undefined8 * FUN_007e9b24(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x38);
  *puVar1 = &PTR_FUN_00989500;
                    /* try { // try from 007e9b4c to 007e9b53 has its CatchHandler @ 007e9b64 */
  folly::dynamic::dynamic((dynamic *)(puVar1 + 1),(dynamic *)(param_1 + 8));
  return puVar1;
}


// ===== 007e9b78  FUN_007e9b78 =====

void FUN_007e9b78(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00989500;
  folly::dynamic::dynamic((dynamic *)(param_2 + 1),(dynamic *)(param_1 + 8));
  return;
}


// ===== 007e9b94  FUN_007e9b94 =====

void FUN_007e9b94(long param_1)

{
  folly::dynamic::folly::dynamic::destroy(param_1 + 8);
  return;
}


// ===== 007e9b9c  FUN_007e9b9c =====

void FUN_007e9b9c(void *param_1)

{
  folly::dynamic::folly::dynamic::destroy((long)param_1 + 8);
  operator_delete(param_1);
  return;
}


// ===== 007e9bc4  FUN_007e9bc4 =====

void FUN_007e9bc4(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(local_60,param_3);
  local_68 = local_60[0];
                    /* try { // try from 007e9c10 to 007e9c1f has its CatchHandler @ 007e9ce0 */
  facebook::jsi::facebook::jsi::valueFromDynamic(local_60,param_3,param_2 + 8);
                    /* try { // try from 007e9c20 to 007e9c4f has its CatchHandler @ 007e9ce8 */
  uVar2 = __strlen_chk(&DAT_00370ab4,5);
  (**(code **)(*param_3 + 0x108))(&local_50,param_3,&DAT_00370ab4,uVar2);
                    /* try { // try from 007e9c58 to 007e9c6b has its CatchHandler @ 007e9cc0 */
  (**(code **)(*param_3 + 0x1b8))(param_3,&local_68,&local_50,local_60);
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)();
  }
  facebook::jsi::Value::~Value((Value *)local_60);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_68;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e9d28  FUN_007e9d28 =====

long FUN_007e9d28(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react36TextDisplayComponentViewEventEmitter10onTapEmojiENS1_10OnTapEmojiEE3$_0")
  {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e9d44  FUN_007e9d44 =====

pointer_____offset_0x10___ * FUN_007e9d44(void)

{
  return &PTR_vtable_00989560;
}


// ===== 007e9d50  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e9d54  FUN_007e9d54 =====

void FUN_007e9d54(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00989580;
  puVar1[1] = uVar2;
  return;
}


// ===== 007e9d88  FUN_007e9d88 =====

void FUN_007e9d88(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00989580;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return;
}


// ===== 007e9da0  FUN_007e9da0 =====

void FUN_007e9da0(void)

{
  return;
}


// ===== 007e9da4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e9da8  FUN_007e9da8 =====

void FUN_007e9da8(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007e9de8 to 007e9e17 has its CatchHandler @ 007e9e4c */
  FUN_007cf01c(&local_40,param_3,"width",param_2 + 8);
  FUN_007cf01c(&local_40,param_3,"height",param_2 + 0xc);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e9e84  FUN_007e9e84 =====

long FUN_007e9e84(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react28DCDVideoRendererEventEmitter6onSizeENS1_6OnSizeEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e9ea0  FUN_007e9ea0 =====

pointer_____offset_0x10___ * FUN_007e9ea0(void)

{
  return &PTR_vtable_009895e0;
}


// ===== 007e9eac  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e9eb0  FUN_007e9eb0 =====

void FUN_007e9eb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00989600;
  return;
}


// ===== 007e9ed4  FUN_007e9ed4 =====

void FUN_007e9ed4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00989600;
  return;
}


// ===== 007e9ee4  FUN_007e9ee4 =====

void FUN_007e9ee4(void)

{
  return;
}


// ===== 007e9ee8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e9eec  FUN_007e9eec =====

void FUN_007e9eec(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 007e9f54  FUN_007e9f54 =====

long FUN_007e9f54(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react28DCDVideoRendererEventEmitter7onReadyENS1_7OnReadyEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007e9f70  FUN_007e9f70 =====

pointer_____offset_0x10___ * FUN_007e9f70(void)

{
  return &PTR_vtable_00989660;
}


// ===== 007e9f7c  FUN_007e9f7c =====

void FUN_007e9f7c(void)

{
  return;
}


// ===== 007e9f80  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e9f84  FUN_007e9f84 =====

void FUN_007e9f84(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00989680;
  *(undefined4 *)(puVar2 + 1) = uVar1;
  return;
}


// ===== 007e9fbc  FUN_007e9fbc =====

void FUN_007e9fbc(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00989680;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return;
}


// ===== 007e9fd4  FUN_007e9fd4 =====

void FUN_007e9fd4(void)

{
  return;
}


// ===== 007e9fd8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007e9fdc  FUN_007e9fdc =====

void FUN_007e9fdc(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007ea01c to 007ea033 has its CatchHandler @ 007ea068 */
  FUN_007cf01c(&local_40,param_3,"zoomScale",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ea0a0  FUN_007ea0a0 =====

long FUN_007ea0a0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react32DCDZoomLayoutAndroidEventEmitter13onZoomChangedENS1_13OnZoomChangedEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007ea0bc  FUN_007ea0bc =====

pointer_____offset_0x10___ * FUN_007ea0bc(void)

{
  return &PTR_vtable_009896e0;
}


// ===== 007ea0c8  facebook::react::APNGDecorationViewProps::APNGDecorationViewProps =====

/* facebook::react::APNGDecorationViewProps::APNGDecorationViewProps(facebook::react::PropsParserContext
   const&, facebook::react::APNGDecorationViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::APNGDecorationViewProps::APNGDecorationViewProps
          (APNGDecorationViewProps *this,PropsParserContext *param_1,
          APNGDecorationViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  ulong *puVar3;
  function *in_x4;
  long lVar4;
  ulong local_90 [2];
  void *local_80;
  long *local_70;
  long local_58;
  
  puVar3 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007ea108 to 007ea117 has its CatchHandler @ 007ea224 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if ((ulong *)local_70 == local_90) {
    lVar4 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007ea144;
    lVar4 = 5;
    puVar3 = (ulong *)local_70;
  }
  (**(code **)(*puVar3 + lVar4 * 8))();
LAB_007ea144:
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 007ea154 to 007ea17b has its CatchHandler @ 007ea200 */
  FUN_007ea274(this + 0x6e0,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = CONCAT71(local_90[0]._1_7_,1);
                    /* try { // try from 007ea194 to 007ea1b7 has its CatchHandler @ 007ea1ec */
  bVar2 = FUN_007ea510(param_2);
  this[0x6f8] = (APNGDecorationViewProps)(bVar2 & 1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ea274  FUN_007ea274 =====

void FUN_007ea274(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,undefined8 param_2,char *param_3,char *param_4,byte *param_5,
                 byte *param_6,char *param_7)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_3,param_4,param_7);
  if (lVar2 == 0) {
    if ((*param_5 & 1) == 0) {
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        uVar8 = *(undefined8 *)(param_5 + 8);
        uVar7 = *(undefined8 *)param_5;
        uVar6 = *(undefined8 *)(param_5 + 0x10);
LAB_007ea2f0:
        *(undefined8 *)(param_1 + 8) = uVar8;
        *(undefined8 *)param_1 = uVar7;
        *(undefined8 *)(param_1 + 0x10) = uVar6;
        return;
      }
      goto LAB_007ea508;
    }
    uVar3 = *(ulong *)(param_5 + 8);
    pcVar4 = *(char **)(param_5 + 0x10);
  }
  else {
    uVar3 = FUN_00807970();
    if ((uVar3 & 1) != 0) {
      *(undefined8 *)param_1 = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
                    /* try { // try from 007ea35c to 007ea36b has its CatchHandler @ 007ea3ac */
      FUN_008079ac(param_2,lVar2,param_1);
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        return;
      }
      goto LAB_007ea508;
    }
    if ((*param_6 & 1) == 0) {
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        uVar8 = *(undefined8 *)(param_6 + 8);
        uVar7 = *(undefined8 *)param_6;
        uVar6 = *(undefined8 *)(param_6 + 0x10);
        goto LAB_007ea2f0;
      }
      goto LAB_007ea508;
    }
    uVar3 = *(ulong *)(param_6 + 8);
    pcVar4 = *(char **)(param_6 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1,pcVar4,uVar3);
    return;
  }
LAB_007ea508:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ea510  FUN_007ea510 =====

void FUN_007ea510(undefined8 param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                 char *param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  char local_70 [24];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_2,param_3,param_6);
  if (lVar2 == 0) {
    local_70[0] = *param_4;
  }
  else {
    uVar3 = FUN_00807970();
    if ((uVar3 & 1) == 0) {
      local_70[0] = *param_5;
    }
    else {
                    /* try { // try from 007ea5ac to 007ea5bb has its CatchHandler @ 007ea5cc */
      FUN_00807f20(param_1,lVar2,local_70);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_70[0] != '\0');
}


// ===== 007ea6f0  facebook::react::APNGDecorationViewProps::APNGDecorationViewProps =====

/* facebook::react::APNGDecorationViewProps::APNGDecorationViewProps(facebook::react::PropsParserContext
   const&, facebook::react::APNGDecorationViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::APNGDecorationViewProps::APNGDecorationViewProps
          (APNGDecorationViewProps *this,PropsParserContext *param_1,
          APNGDecorationViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  ulong *puVar3;
  long lVar4;
  ulong local_90 [2];
  void *local_80;
  long *local_70;
  long local_58;
  
  puVar3 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007ea72c to 007ea74f has its CatchHandler @ 007ea864 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099de90 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if ((ulong *)local_70 == local_90) {
    lVar4 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007ea77c;
    lVar4 = 5;
    puVar3 = (ulong *)local_70;
  }
  (**(code **)(*puVar3 + lVar4 * 8))();
LAB_007ea77c:
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
  *(undefined **)this = PTR_vtable_0099de88 + 0x20;
                    /* try { // try from 007ea794 to 007ea7bb has its CatchHandler @ 007ea840 */
  FUN_007ea274(this + 0x6e0,param_1,param_3,&DAT_00364f7a,param_2 + 0x6e0,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = CONCAT71(local_90[0]._1_7_,1);
                    /* try { // try from 007ea7d4 to 007ea7f7 has its CatchHandler @ 007ea82c */
  bVar2 = FUN_007ea510(param_1,param_3,"autoplay",param_2 + 0x6f8,local_90,0,0);
  this[0x6f8] = (APNGDecorationViewProps)(bVar2 & 1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ea8b4  facebook::react::APNGDecorationViewProps::getDiffPropsImplementationTarget =====

/* facebook::react::APNGDecorationViewProps::getDiffPropsImplementationTarget() const */

char * facebook::react::APNGDecorationViewProps::getDiffPropsImplementationTarget(void)

{
  return "APNGDecorationView";
}


// ===== 007ea8c0  facebook::react::APNGDecorationViewProps::getDiffProps =====

/* facebook::react::APNGDecorationViewProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::APNGDecorationViewProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  ulong uVar2;
  ulong uVar3;
  Props PVar4;
  Props PVar5;
  long lVar6;
  int iVar7;
  dynamic *this;
  int *piVar8;
  Props *in_x1;
  Props *__s2;
  undefined4 *in_x8;
  ulong uVar9;
  Props *pPVar10;
  size_t __n;
  char *__s1;
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  undefined4 local_78 [2];
  ulong local_70;
  undefined8 uStack_68;
  void *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  if (((DAT_009a8c40 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_009a8c40), iVar7 != 0)) {
    memset(&DAT_009a8540,0,0x700);
                    /* try { // try from 007eab04 to 007eab07 has its CatchHandler @ 007eab38 */
    FUN_007eab98();
    __cxa_atexit(FUN_007eac34,&DAT_009a8540,&PTR_LOOP_008d5d30);
    __cxa_guard_release(&DAT_009a8c40);
  }
  pPVar1 = (Props *)&DAT_009a8540;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    local_58 = 0;
    local_78[0] = 5;
    uStack_68 = 0;
    local_60 = (void *)0x0;
    local_50 = 0x3f800000;
    *in_x8 = 5;
    local_70 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_78);
    goto LAB_007eaab0;
  }
  ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
  PVar4 = param_1[0x6e0];
  PVar5 = pPVar1[0x6e0];
  __n = *(size_t *)(param_1 + 0x6e8);
  uVar9 = (ulong)((byte)PVar4 >> 1);
  uVar2 = uVar9;
  if (((byte)PVar4 & 1) != 0) {
    uVar2 = __n;
  }
  uVar3 = (ulong)((byte)PVar5 >> 1);
  if (((byte)PVar5 & 1) != 0) {
    uVar3 = *(ulong *)(pPVar1 + 0x6e8);
  }
  if (uVar2 == uVar3) {
    __s2 = pPVar1 + 0x6e1;
    if (((byte)PVar5 & 1) != 0) {
      __s2 = *(Props **)(pPVar1 + 0x6f0);
    }
    if (((byte)PVar4 & 1) == 0) {
      if (1 < (byte)PVar4) {
        pPVar10 = param_1 + 0x6e1;
        do {
          if (*pPVar10 != *__s2) goto LAB_007ea9cc;
          uVar9 = uVar9 - 1;
          pPVar10 = pPVar10 + 1;
          __s2 = __s2 + 1;
        } while (uVar9 != 0);
      }
    }
    else {
      __s1 = *(char **)(param_1 + 0x6f0);
      iVar7 = memcmp(__s1,__s2,__n);
      if (iVar7 != 0) goto LAB_007eaa04;
    }
  }
  else {
LAB_007ea9cc:
    if (((byte)PVar4 & 1) == 0) {
      uStack_88 = *(undefined8 *)(param_1 + 0x6e8);
      local_90 = *(ulong *)(param_1 + 0x6e0);
      local_80 = *(void **)(param_1 + 0x6f0);
    }
    else {
      __s1 = *(char **)(param_1 + 0x6f0);
LAB_007eaa04:
                    /* try { // try from 007eaa04 to 007eaa13 has its CatchHandler @ 007eab4c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_90,__s1,__n);
    }
    local_78[0] = 6;
    uStack_68 = uStack_88;
    local_70 = local_90;
    local_60 = local_80;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = (void *)0x0;
                    /* try { // try from 007eaa34 to 007eaa47 has its CatchHandler @ 007eab58 */
    this = (dynamic *)folly::dynamic::operator[]();
    folly::dynamic::operator=(this,(dynamic *)local_78);
    folly::dynamic::folly::dynamic::destroy(local_78);
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
  }
  PVar4 = param_1[0x6f8];
  if (PVar4 != pPVar1[0x6f8]) {
                    /* try { // try from 007eaa78 to 007eaa8b has its CatchHandler @ 007eab50 */
    piVar8 = (int *)folly::dynamic::operator[]();
    if (*piVar8 != 2) {
      folly::dynamic::folly::dynamic::destroy(piVar8);
      *piVar8 = 2;
    }
    *(Props *)(piVar8 + 2) = PVar4;
  }
LAB_007eaab0:
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 007eab98  FUN_007eab98 =====

void FUN_007eab98(void)

{
  FUN_00788b10(&DAT_009a8540,PTR_PTR_0099de90 + 0x10);
  DAT_009a8b1c = 0;
  DAT_009a8b20 = 0;
  DAT_009a8b80 = 0;
  DAT_009a8b88 = 0;
  DAT_009a8be8 = 0;
  DAT_009a8bf8 = 0;
  DAT_009a8bfc = 0;
  DAT_009a8c00 = 0;
  DAT_009a8c04 = 0;
  DAT_009a8c08 = 0;
  DAT_009a8c0c = 0;
  DAT_009a8c10 = 0;
  DAT_009a8c14 = 0;
  DAT_009a8c18 = 0;
  DAT_009a8c1c = 0;
  DAT_009a8bf0 = 0;
  DAT_009a8bf4 = 0;
  DAT_009a8c20 = 0;
  DAT_009a8540 = PTR_vtable_0099de88 + 0x20;
  DAT_009a8c30 = 0;
  DAT_009a8c28 = 0;
  DAT_009a8c38 = 1;
  return;
}


// ===== 007eac34  FUN_007eac34 =====

void FUN_007eac34(long param_1)

{
  if ((*(byte *)(param_1 + 0x6e0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x6f0));
  }
  FUN_0078917c(param_1,PTR_PTR_0099de90 + 8);
  return;
}


// ===== 007eac74  FUN_007eac74 =====

bool FUN_007eac74(byte *param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *__s2;
  
  bVar3 = *param_1;
  bVar4 = *param_2;
  uVar8 = (ulong)(bVar3 >> 1);
  sVar1 = uVar8;
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 8);
  }
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 8);
  }
  if (sVar1 == sVar2) {
    __s2 = *(byte **)(param_2 + 0x10);
    if ((bVar4 & 1) == 0) {
      __s2 = param_2 + 1;
    }
    if ((bVar3 & 1) == 0) {
      if (bVar3 < 2) {
        return true;
      }
      pbVar7 = param_1 + 1;
      do {
        uVar8 = uVar8 - 1;
        bVar5 = *pbVar7 == *__s2;
        if (*pbVar7 != *__s2) {
          return bVar5;
        }
        __s2 = __s2 + 1;
        pbVar7 = pbVar7 + 1;
      } while (uVar8 != 0);
      return bVar5;
    }
    iVar6 = memcmp(*(void **)(param_1 + 0x10),__s2,*(size_t *)(param_1 + 8));
    return iVar6 == 0;
  }
  return false;
}


// ===== 007ead24  facebook::react::APNGViewProps::APNGViewProps =====

/* facebook::react::APNGViewProps::APNGViewProps(facebook::react::PropsParserContext const&,
   facebook::react::APNGViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::APNGViewProps::APNGViewProps
          (APNGViewProps *this,PropsParserContext *param_1,APNGViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  ulong *puVar2;
  function *in_x4;
  long lVar3;
  ulong local_90 [2];
  void *local_80;
  long *local_70;
  long local_58;
  
  puVar2 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007ead64 to 007ead73 has its CatchHandler @ 007eae38 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if ((ulong *)local_70 == local_90) {
    lVar3 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007eada0;
    lVar3 = 5;
    puVar2 = (ulong *)local_70;
  }
  (**(code **)(*puVar2 + lVar3 * 8))();
LAB_007eada0:
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 007eadb0 to 007eadd7 has its CatchHandler @ 007eae14 */
  FUN_007ea274(this + 0x6e0,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007eae88  facebook::react::APNGViewProps::APNGViewProps =====

/* facebook::react::APNGViewProps::APNGViewProps(facebook::react::PropsParserContext const&,
   facebook::react::APNGViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::APNGViewProps::APNGViewProps
          (APNGViewProps *this,PropsParserContext *param_1,APNGViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  ulong local_90 [2];
  void *local_80;
  long *local_70;
  long local_58;
  
  puVar2 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007eaec4 to 007eaee7 has its CatchHandler @ 007eafb4 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099dec8 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if ((ulong *)local_70 == local_90) {
    lVar3 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007eaf14;
    lVar3 = 5;
    puVar2 = (ulong *)local_70;
  }
  (**(code **)(*puVar2 + lVar3 * 8))();
LAB_007eaf14:
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
  *(undefined **)this = PTR_vtable_0099dec0 + 0x20;
                    /* try { // try from 007eaf2c to 007eaf53 has its CatchHandler @ 007eaf90 */
  FUN_007ea274(this + 0x6e0,param_1,param_3,&DAT_00364f7a,param_2 + 0x6e0,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007eb004  facebook::react::APNGViewProps::getDiffPropsImplementationTarget =====

/* facebook::react::APNGViewProps::getDiffPropsImplementationTarget() const */

char * facebook::react::APNGViewProps::getDiffPropsImplementationTarget(void)

{
  return "APNGView";
}


// ===== 007eb010  facebook::react::APNGViewProps::getDiffProps =====

/* facebook::react::APNGViewProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::APNGViewProps::getDiffProps(Props *param_1)

{
  ulong uVar1;
  ulong uVar2;
  Props PVar3;
  Props PVar4;
  long lVar5;
  int iVar6;
  dynamic *this;
  Props *in_x1;
  Props *__s2;
  undefined4 *in_x8;
  ulong uVar7;
  Props *pPVar8;
  char *__s1;
  size_t __n;
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  undefined4 local_78 [2];
  ulong local_70;
  undefined8 uStack_68;
  void *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if (((DAT_009a9340 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_009a9340), iVar6 != 0)) {
    memset(&DAT_009a8c48,0,0x6f8);
                    /* try { // try from 007eb20c to 007eb20f has its CatchHandler @ 007eb240 */
    FUN_007eb29c();
    __cxa_atexit(FUN_007eb330,&DAT_009a8c48,&PTR_LOOP_008d5d30);
    __cxa_guard_release(&DAT_009a9340);
  }
  pPVar8 = (Props *)&DAT_009a8c48;
  if (in_x1 != (Props *)0x0) {
    pPVar8 = in_x1;
  }
  if (pPVar8 == param_1) {
    local_58 = 0;
    local_78[0] = 5;
    uStack_68 = 0;
    local_60 = (void *)0x0;
    local_50 = 0x3f800000;
    *in_x8 = 5;
    local_70 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_78);
    goto LAB_007eb1b8;
  }
  ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
  PVar3 = param_1[0x6e0];
  PVar4 = pPVar8[0x6e0];
  __n = *(size_t *)(param_1 + 0x6e8);
  uVar7 = (ulong)((byte)PVar3 >> 1);
  uVar1 = uVar7;
  if (((byte)PVar3 & 1) != 0) {
    uVar1 = __n;
  }
  uVar2 = (ulong)((byte)PVar4 >> 1);
  if (((byte)PVar4 & 1) != 0) {
    uVar2 = *(ulong *)(pPVar8 + 0x6e8);
  }
  if (uVar1 == uVar2) {
    __s2 = pPVar8 + 0x6e1;
    if (((byte)PVar4 & 1) != 0) {
      __s2 = *(Props **)(pPVar8 + 0x6f0);
    }
    if (((byte)PVar3 & 1) == 0) {
      if (1 < (byte)PVar3) {
        pPVar8 = param_1 + 0x6e1;
        do {
          if (*pPVar8 != *__s2) goto LAB_007eb11c;
          uVar7 = uVar7 - 1;
          pPVar8 = pPVar8 + 1;
          __s2 = __s2 + 1;
        } while (uVar7 != 0);
      }
      goto LAB_007eb1b8;
    }
    __s1 = *(char **)(param_1 + 0x6f0);
    iVar6 = memcmp(__s1,__s2,__n);
    if (iVar6 == 0) goto LAB_007eb1b8;
LAB_007eb154:
                    /* try { // try from 007eb154 to 007eb163 has its CatchHandler @ 007eb254 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_90,__s1,__n);
  }
  else {
LAB_007eb11c:
    if (((byte)PVar3 & 1) != 0) {
      __s1 = *(char **)(param_1 + 0x6f0);
      goto LAB_007eb154;
    }
    uStack_88 = *(undefined8 *)(param_1 + 0x6e8);
    local_90 = *(ulong *)(param_1 + 0x6e0);
    local_80 = *(void **)(param_1 + 0x6f0);
  }
  local_78[0] = 6;
  uStack_68 = uStack_88;
  local_70 = local_90;
  local_60 = local_80;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 007eb184 to 007eb197 has its CatchHandler @ 007eb25c */
  this = (dynamic *)folly::dynamic::operator[]();
  folly::dynamic::operator=(this,(dynamic *)local_78);
  folly::dynamic::folly::dynamic::destroy(local_78);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
LAB_007eb1b8:
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 007eb29c  FUN_007eb29c =====

void FUN_007eb29c(void)

{
  FUN_00788b10(&DAT_009a8c48,PTR_PTR_0099dec8 + 0x10);
  DAT_009a9224 = 0;
  DAT_009a9228 = 0;
  DAT_009a9288 = 0;
  DAT_009a9290 = 0;
  DAT_009a92f0 = 0;
  DAT_009a9300 = 0;
  DAT_009a9304 = 0;
  DAT_009a9308 = 0;
  DAT_009a930c = 0;
  DAT_009a9310 = 0;
  DAT_009a9314 = 0;
  DAT_009a9318 = 0;
  DAT_009a931c = 0;
  DAT_009a9320 = 0;
  DAT_009a9324 = 0;
  DAT_009a92f8 = 0;
  DAT_009a92fc = 0;
  DAT_009a9328 = 0;
  DAT_009a8c48 = PTR_vtable_0099dec0 + 0x20;
  DAT_009a9338 = 0;
  DAT_009a9330 = 0;
  return;
}


// ===== 007eb330  FUN_007eb330 =====

void FUN_007eb330(long param_1)

{
  if ((*(byte *)(param_1 + 0x6e0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x6f0));
  }
  FUN_0078917c(param_1,PTR_PTR_0099dec8 + 8);
  return;
}


// ===== 007eb370  facebook::react::APNGStickerViewProps::APNGStickerViewProps =====

/* facebook::react::APNGStickerViewProps::APNGStickerViewProps(facebook::react::PropsParserContext
   const&, facebook::react::APNGStickerViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::APNGStickerViewProps::APNGStickerViewProps
          (APNGStickerViewProps *this,PropsParserContext *param_1,APNGStickerViewProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  ulong *puVar2;
  function *in_x4;
  long lVar3;
  ulong local_90 [2];
  void *local_80;
  long *local_70;
  long local_58;
  
  puVar2 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007eb3b0 to 007eb3bf has its CatchHandler @ 007eb484 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if ((ulong *)local_70 == local_90) {
    lVar3 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007eb3ec;
    lVar3 = 5;
    puVar2 = (ulong *)local_70;
  }
  (**(code **)(*puVar2 + lVar3 * 8))();
LAB_007eb3ec:
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 007eb3fc to 007eb423 has its CatchHandler @ 007eb460 */
  FUN_007ea274(this + 0x6e0,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007eb4d4  facebook::react::APNGStickerViewProps::APNGStickerViewProps =====

/* facebook::react::APNGStickerViewProps::APNGStickerViewProps(facebook::react::PropsParserContext
   const&, facebook::react::APNGStickerViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::APNGStickerViewProps::APNGStickerViewProps
          (APNGStickerViewProps *this,PropsParserContext *param_1,APNGStickerViewProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  ulong local_90 [2];
  void *local_80;
  long *local_70;
  long local_58;
  
  puVar2 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007eb510 to 007eb533 has its CatchHandler @ 007eb600 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099dee0 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if ((ulong *)local_70 == local_90) {
    lVar3 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007eb560;
    lVar3 = 5;
    puVar2 = (ulong *)local_70;
  }
  (**(code **)(*puVar2 + lVar3 * 8))();
LAB_007eb560:
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
  *(undefined **)this = PTR_vtable_0099ded8 + 0x20;
                    /* try { // try from 007eb578 to 007eb59f has its CatchHandler @ 007eb5dc */
  FUN_007ea274(this + 0x6e0,param_1,param_3,&DAT_00364f7a,param_2 + 0x6e0,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007eb650  facebook::react::APNGStickerViewProps::getDiffPropsImplementationTarget =====

/* facebook::react::APNGStickerViewProps::getDiffPropsImplementationTarget() const */

char * facebook::react::APNGStickerViewProps::getDiffPropsImplementationTarget(void)

{
  return "APNGStickerView";
}


// ===== 007eb65c  facebook::react::APNGStickerViewProps::getDiffProps =====

/* facebook::react::APNGStickerViewProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::APNGStickerViewProps::getDiffProps(Props *param_1)

{
  ulong uVar1;
  ulong uVar2;
  Props PVar3;
  Props PVar4;
  long lVar5;
  int iVar6;
  dynamic *this;
  Props *in_x1;
  Props *__s2;
  undefined4 *in_x8;
  ulong uVar7;
  Props *pPVar8;
  char *__s1;
  size_t __n;
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  undefined4 local_78 [2];
  ulong local_70;
  undefined8 uStack_68;
  void *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if (((DAT_009a9a40 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_009a9a40), iVar6 != 0)) {
    memset(&DAT_009a9348,0,0x6f8);
                    /* try { // try from 007eb858 to 007eb85b has its CatchHandler @ 007eb88c */
    FUN_007eb8e8();
    __cxa_atexit(FUN_007eb97c,&DAT_009a9348,&PTR_LOOP_008d5d30);
    __cxa_guard_release(&DAT_009a9a40);
  }
  pPVar8 = (Props *)&DAT_009a9348;
  if (in_x1 != (Props *)0x0) {
    pPVar8 = in_x1;
  }
  if (pPVar8 == param_1) {
    local_58 = 0;
    local_78[0] = 5;
    uStack_68 = 0;
    local_60 = (void *)0x0;
    local_50 = 0x3f800000;
    *in_x8 = 5;
    local_70 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_78);
    goto LAB_007eb804;
  }
  ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
  PVar3 = param_1[0x6e0];
  PVar4 = pPVar8[0x6e0];
  __n = *(size_t *)(param_1 + 0x6e8);
  uVar7 = (ulong)((byte)PVar3 >> 1);
  uVar1 = uVar7;
  if (((byte)PVar3 & 1) != 0) {
    uVar1 = __n;
  }
  uVar2 = (ulong)((byte)PVar4 >> 1);
  if (((byte)PVar4 & 1) != 0) {
    uVar2 = *(ulong *)(pPVar8 + 0x6e8);
  }
  if (uVar1 == uVar2) {
    __s2 = pPVar8 + 0x6e1;
    if (((byte)PVar4 & 1) != 0) {
      __s2 = *(Props **)(pPVar8 + 0x6f0);
    }
    if (((byte)PVar3 & 1) == 0) {
      if (1 < (byte)PVar3) {
        pPVar8 = param_1 + 0x6e1;
        do {
          if (*pPVar8 != *__s2) goto LAB_007eb768;
          uVar7 = uVar7 - 1;
          pPVar8 = pPVar8 + 1;
          __s2 = __s2 + 1;
        } while (uVar7 != 0);
      }
      goto LAB_007eb804;
    }
    __s1 = *(char **)(param_1 + 0x6f0);
    iVar6 = memcmp(__s1,__s2,__n);
    if (iVar6 == 0) goto LAB_007eb804;
LAB_007eb7a0:
                    /* try { // try from 007eb7a0 to 007eb7af has its CatchHandler @ 007eb8a0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_90,__s1,__n);
  }
  else {
LAB_007eb768:
    if (((byte)PVar3 & 1) != 0) {
      __s1 = *(char **)(param_1 + 0x6f0);
      goto LAB_007eb7a0;
    }
    uStack_88 = *(undefined8 *)(param_1 + 0x6e8);
    local_90 = *(ulong *)(param_1 + 0x6e0);
    local_80 = *(void **)(param_1 + 0x6f0);
  }
  local_78[0] = 6;
  uStack_68 = uStack_88;
  local_70 = local_90;
  local_60 = local_80;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 007eb7d0 to 007eb7e3 has its CatchHandler @ 007eb8a8 */
  this = (dynamic *)folly::dynamic::operator[]();
  folly::dynamic::operator=(this,(dynamic *)local_78);
  folly::dynamic::folly::dynamic::destroy(local_78);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
LAB_007eb804:
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 007eb8e8  FUN_007eb8e8 =====

void FUN_007eb8e8(void)

{
  FUN_00788b10(&DAT_009a9348,PTR_PTR_0099dee0 + 0x10);
  DAT_009a9924 = 0;
  DAT_009a9928 = 0;
  DAT_009a9988 = 0;
  DAT_009a9990 = 0;
  DAT_009a99f0 = 0;
  DAT_009a9a00 = 0;
  DAT_009a9a04 = 0;
  DAT_009a9a08 = 0;
  DAT_009a9a0c = 0;
  DAT_009a9a10 = 0;
  DAT_009a9a14 = 0;
  DAT_009a9a18 = 0;
  DAT_009a9a1c = 0;
  DAT_009a9a20 = 0;
  DAT_009a9a24 = 0;
  DAT_009a99f8 = 0;
  DAT_009a99fc = 0;
  DAT_009a9a28 = 0;
  DAT_009a9348 = PTR_vtable_0099ded8 + 0x20;
  DAT_009a9a38 = 0;
  DAT_009a9a30 = 0;
  return;
}


// ===== 007eb97c  FUN_007eb97c =====

void FUN_007eb97c(long param_1)

{
  if ((*(byte *)(param_1 + 0x6e0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x6f0));
  }
  FUN_0078917c(param_1,PTR_PTR_0099dee0 + 8);
  return;
}


// ===== 007eb9bc  facebook::react::AccessibilityFocusViewProps::AccessibilityFocusViewProps =====

/* facebook::react::AccessibilityFocusViewProps::AccessibilityFocusViewProps(facebook::react::PropsParserContext
   const&, facebook::react::AccessibilityFocusViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::AccessibilityFocusViewProps::AccessibilityFocusViewProps
          (AccessibilityFocusViewProps *this,PropsParserContext *param_1,
          AccessibilityFocusViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  long *plVar2;
  function *in_x4;
  long lVar3;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar2 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (long *)0x0;
                    /* try { // try from 007eb9e8 to 007eb9f7 has its CatchHandler @ 007eba50 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if (local_50 == local_70) {
    lVar3 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007eba24;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007eba24:
  *(undefined8 *)this = *(undefined8 *)param_1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ebaa0  facebook::react::AccessibilityFocusViewProps::AccessibilityFocusViewProps =====

/* facebook::react::AccessibilityFocusViewProps::AccessibilityFocusViewProps(facebook::react::PropsParserContext
   const&, facebook::react::AccessibilityFocusViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::AccessibilityFocusViewProps::AccessibilityFocusViewProps
          (AccessibilityFocusViewProps *this,PropsParserContext *param_1,
          AccessibilityFocusViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar2 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (long *)0x0;
                    /* try { // try from 007ebad4 to 007ebaeb has its CatchHandler @ 007ebb4c */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099def8 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if (local_50 == local_70) {
    lVar3 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007ebb18;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007ebb18:
  *(undefined **)this = PTR_vtable_0099def0 + 0x20;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ebb9c  facebook::react::AccessibilityFocusViewProps::getDiffPropsImplementationTarget =====

/* facebook::react::AccessibilityFocusViewProps::getDiffPropsImplementationTarget() const */

char * facebook::react::AccessibilityFocusViewProps::getDiffPropsImplementationTarget(void)

{
  return "AccessibilityFocusView";
}


// ===== 007ebba8  facebook::react::AccessibilityFocusViewProps::getDiffProps =====

/* facebook::react::AccessibilityFocusViewProps::getDiffProps(facebook::react::Props const*) const
    */

void facebook::react::AccessibilityFocusViewProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  long lVar2;
  int iVar3;
  Props *in_x1;
  undefined4 *in_x8;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if ((DAT_009aa128 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_009aa128);
    if (iVar3 != 0) {
      memset(&DAT_009a9a48,0,0x6e0);
                    /* try { // try from 007ebc9c to 007ebc9f has its CatchHandler @ 007ebcd4 */
      FUN_007ebd00();
      __cxa_atexit(FUN_007ebd88,&DAT_009a9a48,&PTR_LOOP_008d5d30);
      __cxa_guard_release(&DAT_009aa128);
    }
  }
  pPVar1 = (Props *)&DAT_009a9a48;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    local_38 = 0;
    local_58[0] = 5;
    local_48 = 0;
    uStack_40 = 0;
    local_30 = 0x3f800000;
    *in_x8 = 5;
    local_50 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_58);
    if (*(long *)(lVar2 + 0x28) == local_28) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_28) {
    ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ebd00  FUN_007ebd00 =====

void FUN_007ebd00(void)

{
  FUN_00788b10(&DAT_009a9a48,PTR_PTR_0099def8 + 0x10);
  DAT_009aa024 = 0;
  DAT_009aa028 = 0;
  DAT_009aa088 = 0;
  DAT_009aa090 = 0;
  DAT_009aa0f0 = 0;
  DAT_009aa100 = 0;
  DAT_009aa104 = 0;
  DAT_009aa108 = 0;
  DAT_009aa10c = 0;
  DAT_009aa110 = 0;
  DAT_009aa114 = 0;
  DAT_009aa118 = 0;
  DAT_009aa11c = 0;
  DAT_009aa120 = 0;
  DAT_009aa124 = 0;
  DAT_009aa0f8 = 0;
  DAT_009aa0fc = 0;
  DAT_009a9a48 = PTR_vtable_0099def0 + 0x20;
  return;
}


// ===== 007ebd88  FUN_007ebd88 =====

void FUN_007ebd88(undefined8 param_1)

{
  FUN_0078917c(param_1,PTR_PTR_0099def8 + 8);
  return;
}


// ===== 007ebd98  facebook::react::DCDAutoModerationSystemMessageViewProps::DCDAutoModerationSystemMessageViewProps =====

/* facebook::react::DCDAutoModerationSystemMessageViewProps::DCDAutoModerationSystemMessageViewProps(facebook::react::PropsParserContext
   const&, facebook::react::DCDAutoModerationSystemMessageViewProps const&,
   facebook::react::RawProps const&) */

void __thiscall
facebook::react::DCDAutoModerationSystemMessageViewProps::DCDAutoModerationSystemMessageViewProps
          (DCDAutoModerationSystemMessageViewProps *this,PropsParserContext *param_1,
          DCDAutoModerationSystemMessageViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  ulong *puVar2;
  function *in_x4;
  long lVar3;
  ulong local_90 [2];
  void *local_80;
  long *local_70;
  long local_58;
  
  puVar2 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007ebdd8 to 007ebde7 has its CatchHandler @ 007ebeac */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if ((ulong *)local_70 == local_90) {
    lVar3 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007ebe14;
    lVar3 = 5;
    puVar2 = (ulong *)local_70;
  }
  (**(code **)(*puVar2 + lVar3 * 8))();
LAB_007ebe14:
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 007ebe24 to 007ebe4b has its CatchHandler @ 007ebe88 */
  FUN_007ea274(this + 0x6e0,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ebefc  facebook::react::DCDAutoModerationSystemMessageViewProps::DCDAutoModerationSystemMessageViewProps =====

/* facebook::react::DCDAutoModerationSystemMessageViewProps::DCDAutoModerationSystemMessageViewProps(facebook::react::PropsParserContext
   const&, facebook::react::DCDAutoModerationSystemMessageViewProps const&,
   facebook::react::RawProps const&) */

void __thiscall
facebook::react::DCDAutoModerationSystemMessageViewProps::DCDAutoModerationSystemMessageViewProps
          (DCDAutoModerationSystemMessageViewProps *this,PropsParserContext *param_1,
          DCDAutoModerationSystemMessageViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  ulong local_90 [2];
  void *local_80;
  long *local_70;
  long local_58;
  
  puVar2 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007ebf38 to 007ebf5b has its CatchHandler @ 007ec028 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099e150 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if ((ulong *)local_70 == local_90) {
    lVar3 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007ebf88;
    lVar3 = 5;
    puVar2 = (ulong *)local_70;
  }
  (**(code **)(*puVar2 + lVar3 * 8))();
LAB_007ebf88:
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
  *(undefined **)this = PTR_vtable_0099e148 + 0x20;
                    /* try { // try from 007ebfa0 to 007ebfc7 has its CatchHandler @ 007ec004 */
  FUN_007ea274(this + 0x6e0,param_1,param_3,&DAT_00369815,param_2 + 0x6e0,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ec078  facebook::react::DCDAutoModerationSystemMessageViewProps::getDiffPropsImplementationTarget =====

/* facebook::react::DCDAutoModerationSystemMessageViewProps::getDiffPropsImplementationTarget()
   const */

char * facebook::react::DCDAutoModerationSystemMessageViewProps::getDiffPropsImplementationTarget
                 (void)

{
  return "DCDAutoModerationSystemMessageView";
}


// ===== 007ec084  facebook::react::DCDAutoModerationSystemMessageViewProps::getDiffProps =====

/* facebook::react::DCDAutoModerationSystemMessageViewProps::getDiffProps(facebook::react::Props
   const*) const */

void facebook::react::DCDAutoModerationSystemMessageViewProps::getDiffProps(Props *param_1)

{
  ulong uVar1;
  ulong uVar2;
  Props PVar3;
  Props PVar4;
  long lVar5;
  int iVar6;
  dynamic *this;
  Props *in_x1;
  Props *__s2;
  undefined4 *in_x8;
  ulong uVar7;
  Props *pPVar8;
  char *__s1;
  size_t __n;
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  undefined4 local_78 [2];
  ulong local_70;
  undefined8 uStack_68;
  void *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if (((DAT_009aa828 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_009aa828), iVar6 != 0)) {
    memset(&DAT_009aa130,0,0x6f8);
                    /* try { // try from 007ec280 to 007ec283 has its CatchHandler @ 007ec2b4 */
    FUN_007ec310();
    __cxa_atexit(FUN_007ec3a4,&DAT_009aa130,&PTR_LOOP_008d5d30);
    __cxa_guard_release(&DAT_009aa828);
  }
  pPVar8 = (Props *)&DAT_009aa130;
  if (in_x1 != (Props *)0x0) {
    pPVar8 = in_x1;
  }
  if (pPVar8 == param_1) {
    local_58 = 0;
    local_78[0] = 5;
    uStack_68 = 0;
    local_60 = (void *)0x0;
    local_50 = 0x3f800000;
    *in_x8 = 5;
    local_70 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_78);
    goto LAB_007ec22c;
  }
  ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
  PVar3 = param_1[0x6e0];
  PVar4 = pPVar8[0x6e0];
  __n = *(size_t *)(param_1 + 0x6e8);
  uVar7 = (ulong)((byte)PVar3 >> 1);
  uVar1 = uVar7;
  if (((byte)PVar3 & 1) != 0) {
    uVar1 = __n;
  }
  uVar2 = (ulong)((byte)PVar4 >> 1);
  if (((byte)PVar4 & 1) != 0) {
    uVar2 = *(ulong *)(pPVar8 + 0x6e8);
  }
  if (uVar1 == uVar2) {
    __s2 = pPVar8 + 0x6e1;
    if (((byte)PVar4 & 1) != 0) {
      __s2 = *(Props **)(pPVar8 + 0x6f0);
    }
    if (((byte)PVar3 & 1) == 0) {
      if (1 < (byte)PVar3) {
        pPVar8 = param_1 + 0x6e1;
        do {
          if (*pPVar8 != *__s2) goto LAB_007ec190;
          uVar7 = uVar7 - 1;
          pPVar8 = pPVar8 + 1;
          __s2 = __s2 + 1;
        } while (uVar7 != 0);
      }
      goto LAB_007ec22c;
    }
    __s1 = *(char **)(param_1 + 0x6f0);
    iVar6 = memcmp(__s1,__s2,__n);
    if (iVar6 == 0) goto LAB_007ec22c;
LAB_007ec1c8:
                    /* try { // try from 007ec1c8 to 007ec1d7 has its CatchHandler @ 007ec2c8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_90,__s1,__n);
  }
  else {
LAB_007ec190:
    if (((byte)PVar3 & 1) != 0) {
      __s1 = *(char **)(param_1 + 0x6f0);
      goto LAB_007ec1c8;
    }
    uStack_88 = *(undefined8 *)(param_1 + 0x6e8);
    local_90 = *(ulong *)(param_1 + 0x6e0);
    local_80 = *(void **)(param_1 + 0x6f0);
  }
  local_78[0] = 6;
  uStack_68 = uStack_88;
  local_70 = local_90;
  local_60 = local_80;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 007ec1f8 to 007ec20b has its CatchHandler @ 007ec2d0 */
  this = (dynamic *)folly::dynamic::operator[]();
  folly::dynamic::operator=(this,(dynamic *)local_78);
  folly::dynamic::folly::dynamic::destroy(local_78);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
LAB_007ec22c:
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 007ec310  FUN_007ec310 =====

void FUN_007ec310(void)

{
  FUN_00788b10(&DAT_009aa130,PTR_PTR_0099e150 + 0x10);
  DAT_009aa70c = 0;
  DAT_009aa710 = 0;
  DAT_009aa770 = 0;
  DAT_009aa778 = 0;
  DAT_009aa7d8 = 0;
  DAT_009aa7e8 = 0;
  DAT_009aa7ec = 0;
  DAT_009aa7f0 = 0;
  DAT_009aa7f4 = 0;
  DAT_009aa7f8 = 0;
  DAT_009aa7fc = 0;
  DAT_009aa800 = 0;
  DAT_009aa804 = 0;
  DAT_009aa808 = 0;
  DAT_009aa80c = 0;
  DAT_009aa7e0 = 0;
  DAT_009aa7e4 = 0;
  DAT_009aa810 = 0;
  DAT_009aa130 = PTR_vtable_0099e148 + 0x20;
  DAT_009aa820 = 0;
  DAT_009aa818 = 0;
  return;
}


// ===== 007ec3a4  FUN_007ec3a4 =====

void FUN_007ec3a4(long param_1)

{
  if ((*(byte *)(param_1 + 0x6e0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x6f0));
  }
  FUN_0078917c(param_1,PTR_PTR_0099e150 + 8);
  return;
}


// ===== 007ec3e4  facebook::react::DCDChatInputProps::DCDChatInputProps =====

/* facebook::react::DCDChatInputProps::DCDChatInputProps(facebook::react::PropsParserContext const&,
   facebook::react::DCDChatInputProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::DCDChatInputProps::DCDChatInputProps
          (DCDChatInputProps *this,PropsParserContext *param_1,DCDChatInputProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined8 uVar6;
  function *in_x4;
  long lVar7;
  uint local_90;
  undefined1 uStack_8c;
  void *local_80;
  char local_78;
  long *local_70;
  long local_58;
  
  puVar5 = &local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007ec424 to 007ec433 has its CatchHandler @ 007ec790 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if ((uint *)local_70 == &local_90) {
    lVar7 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007ec460;
    lVar7 = 5;
    puVar5 = (uint *)local_70;
  }
  (**(code **)(*(long *)puVar5 + lVar7 * 8))();
LAB_007ec460:
  local_90 = 0;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 007ec46c to 007ec48f has its CatchHandler @ 007ec764 */
  uVar4 = FUN_007ec7c8(param_2);
  *(undefined4 *)(this + 0x6e0) = uVar4;
  local_90._0_1_ = 1;
                    /* try { // try from 007ec49c to 007ec4bf has its CatchHandler @ 007ec760 */
  bVar2 = FUN_007ea510(param_2);
  local_90._0_1_ = 0;
  this[0x6e4] = (DCDChatInputProps)(bVar2 & 1);
                    /* try { // try from 007ec4cc to 007ec4ef has its CatchHandler @ 007ec75c */
  bVar2 = FUN_007ea510(param_2);
  local_90 = (uint)local_90._1_3_ << 8;
  this[0x6e5] = (DCDChatInputProps)(bVar2 & 1);
  local_78 = '\0';
                    /* try { // try from 007ec500 to 007ec527 has its CatchHandler @ 007ec740 */
  FUN_007ec9b8(this + 0x6e8,param_2);
  if ((local_78 != '\0') && ((local_90 & 1) != 0)) {
    operator_delete(local_80);
  }
  local_90 = local_90 & 0xffffff00;
  uStack_8c = 0;
                    /* try { // try from 007ec548 to 007ec563 has its CatchHandler @ 007ec720 */
  uVar6 = FUN_007ecc38(param_2);
  *(undefined8 *)(this + 0x708) = uVar6;
  local_90 = local_90 & 0xffffff00;
  local_78 = '\0';
                    /* try { // try from 007ec570 to 007ec597 has its CatchHandler @ 007ec704 */
  FUN_007ec9b8(this + 0x710,param_2);
  if ((local_78 != '\0') && ((local_90 & 1) != 0)) {
    operator_delete(local_80);
  }
  local_90 = 0;
                    /* try { // try from 007ec5b4 to 007ec5d7 has its CatchHandler @ 007ec6e4 */
  uVar4 = FUN_007ece34(param_2);
  *(undefined4 *)(this + 0x730) = uVar4;
  local_90 = 0;
                    /* try { // try from 007ec5e0 to 007ec603 has its CatchHandler @ 007ec6e0 */
  uVar4 = FUN_007ec7c8(param_2);
  *(undefined4 *)(this + 0x734) = uVar4;
  local_90 = local_90 & 0xffff0000;
                    /* try { // try from 007ec60c to 007ec623 has its CatchHandler @ 007ec6dc */
  uVar3 = FUN_007ecff4();
  *(undefined2 *)(this + 0x738) = uVar3;
  local_90 = 1;
                    /* try { // try from 007ec630 to 007ec63f has its CatchHandler @ 007ec6d8 */
  uVar4 = FUN_007ed1a8();
  *(undefined4 *)(this + 0x73c) = uVar4;
  local_90 = local_90 & 0xffffff00;
  uStack_8c = 0;
                    /* try { // try from 007ec64c to 007ec66f has its CatchHandler @ 007ec6d4 */
  uVar6 = FUN_007ed35c(param_2);
  *(undefined8 *)(this + 0x740) = uVar6;
  local_90 = local_90 & 0xffffff00;
  uStack_8c = 0;
                    /* try { // try from 007ec67c to 007ec69f has its CatchHandler @ 007ec6d0 */
  uVar6 = FUN_007ed35c(param_2);
  *(undefined8 *)(this + 0x748) = uVar6;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ec7c8  FUN_007ec7c8 =====

void FUN_007ec7c8(undefined4 *param_1,char *param_2,char *param_3,undefined4 *param_4,
                 undefined4 *param_5,char *param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_2,param_3,param_6);
  if (lVar2 == 0) {
    local_5c = *param_4;
  }
  else {
    uVar3 = FUN_00807970();
    if ((uVar3 & 1) == 0) {
      local_5c = *param_5;
    }
    else {
      local_5c = 0;
                    /* try { // try from 007ec870 to 007ec883 has its CatchHandler @ 007ec890 */
      FUN_00807f90(*(undefined8 *)(param_1 + 2),*param_1,lVar2,&local_5c,
                   PTR_parsePlatformColor_0099e140);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_5c);
  }
  return;
}


// ===== 007ec9b8  FUN_007ec9b8 =====

void FUN_007ec9b8(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,undefined8 param_2,char *param_3,char *param_4,byte *param_5,
                 undefined8 param_6,char *param_7)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  lVar3 = facebook::react::RawProps::at(param_3,param_4,param_7);
  if (lVar3 == 0) {
    bVar1 = param_5[0x18];
    *param_1 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    param_1[0x18] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    if (bVar1 != 0) {
      if ((*param_5 & 1) == 0) {
        uVar7 = *(undefined8 *)param_5;
        uVar6 = *(undefined8 *)(param_5 + 0x10);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_5 + 8);
        *(undefined8 *)param_1 = uVar7;
        *(undefined8 *)(param_1 + 0x10) = uVar6;
      }
      else {
                    /* try { // try from 007eca40 to 007eca47 has its CatchHandler @ 007ecc00 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external(param_1,*(char **)(param_5 + 0x10),*(ulong *)(param_5 + 8));
      }
      param_1[0x18] =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1;
    }
  }
  else {
    uVar4 = FUN_00807970();
    if ((uVar4 & 1) == 0) {
      if (*(long *)(lVar2 + 0x28) == lVar5) {
        FUN_00816054(param_1,param_6);
        return;
      }
      goto LAB_007ecc34;
    }
    *param_1 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    param_1[0x18] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
                    /* try { // try from 007eca90 to 007eca9b has its CatchHandler @ 007ecad4 */
    FUN_008160d8(lVar3,param_1);
  }
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return;
  }
LAB_007ecc34:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ecc38  FUN_007ecc38 =====

ulong FUN_007ecc38(undefined4 *param_1,char *param_2,char *param_3,ulong *param_4,ulong *param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_2,param_3,(char *)0x0);
  if (lVar2 == 0) {
    uVar5 = *param_4;
  }
  else {
    uVar5 = FUN_00807970();
    if ((uVar5 & 1) != 0) {
      local_4c = 0;
                    /* try { // try from 007ecce0 to 007eccf3 has its CatchHandler @ 007ecd0c */
      FUN_00807f90(*(undefined8 *)(param_1 + 2),*param_1,lVar2,&local_4c,
                   PTR_parsePlatformColor_0099e140);
      uVar5 = (ulong)local_4c;
      uVar4 = 0;
      uVar3 = 0x100000000;
      goto LAB_007ecc90;
    }
    uVar5 = *param_5;
  }
  uVar3 = uVar5 & 0xffffffff00000000;
  uVar4 = uVar5 & 0xffffff0000000000;
LAB_007ecc90:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar4 | uVar5 & 0xffffffff | uVar3 & 0xff00000000;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ece34  FUN_007ece34 =====

void FUN_007ece34(undefined8 param_1,char *param_2,char *param_3,uint *param_4,uint *param_5,
                 char *param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_2,param_3,param_6);
  if (lVar2 == 0) {
    uVar3 = (ulong)*param_4;
  }
  else {
    uVar3 = FUN_00807970();
    if ((uVar3 & 1) == 0) {
      uVar3 = (ulong)*param_5;
    }
    else {
                    /* try { // try from 007ecebc to 007ecec3 has its CatchHandler @ 007eced0 */
      uVar3 = FUN_008161a0(lVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 007ecff4  FUN_007ecff4 =====

void FUN_007ecff4(char *param_1,char *param_2,undefined2 *param_3,undefined2 *param_4)

{
  long lVar1;
  undefined2 uVar2;
  long lVar3;
  ulong uVar4;
  undefined2 local_3c [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = facebook::react::RawProps::at(param_1,param_2,(char *)0x0);
  if (lVar3 == 0) {
    uVar2 = *param_3;
  }
  else {
    uVar4 = FUN_00807970();
    if ((uVar4 & 1) == 0) {
      uVar2 = *param_4;
    }
    else {
      local_3c[0] = 0;
                    /* try { // try from 007ed068 to 007ed073 has its CatchHandler @ 007ed084 */
      FUN_00816240(lVar3,local_3c);
      uVar2 = local_3c[0];
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 007ed1a8  FUN_007ed1a8 =====

void FUN_007ed1a8(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_50 [6];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_1,"keyboardType",(char *)0x0);
  if (lVar2 == 0) {
    local_50[0] = *param_2;
  }
  else {
    uVar3 = FUN_00807970();
    if ((uVar3 & 1) == 0) {
      local_50[0] = *param_3;
    }
    else {
                    /* try { // try from 007ed220 to 007ed22b has its CatchHandler @ 007ed23c */
      FUN_008162b0(lVar2,local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_50[0]);
}


// ===== 007ed35c  FUN_007ed35c =====

ulong FUN_007ed35c(undefined8 param_1,char *param_2,char *param_3,uint *param_4,uint *param_5,
                  char *param_6,ulong param_7)

{
  undefined1 uVar1;
  byte bVar2;
  undefined2 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  lVar5 = facebook::react::RawProps::at(param_2,param_3,param_6);
  if (lVar5 == 0) {
    uVar1 = *(undefined1 *)((long)param_4 + 7);
    uVar3 = *(undefined2 *)((long)param_4 + 5);
    uVar8 = *param_4;
    bVar2 = (byte)param_4[1];
  }
  else {
    uVar7 = FUN_00807970();
    if ((uVar7 & 1) != 0) {
                    /* try { // try from 007ed40c to 007ed413 has its CatchHandler @ 007ed430 */
      uVar8 = FUN_00809024(lVar5);
      uVar7 = 1;
      goto LAB_007ed3c4;
    }
    uVar1 = *(undefined1 *)((long)param_5 + 7);
    uVar3 = *(undefined2 *)((long)param_5 + 5);
    uVar8 = *param_5;
    bVar2 = (byte)param_5[1];
  }
  uVar7 = (ulong)bVar2;
  param_7 = (ulong)CONCAT12(uVar1,uVar3);
LAB_007ed3c4:
  if (*(long *)(lVar4 + 0x28) == lVar6) {
    return param_7 << 0x28 | uVar7 << 0x20 | (ulong)uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ed564  facebook::react::DCDChatInputProps::DCDChatInputProps =====

/* facebook::react::DCDChatInputProps::DCDChatInputProps(facebook::react::PropsParserContext const&,
   facebook::react::DCDChatInputProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::DCDChatInputProps::DCDChatInputProps
          (DCDChatInputProps *this,PropsParserContext *param_1,DCDChatInputProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined8 uVar6;
  long lVar7;
  uint local_90;
  undefined1 uStack_8c;
  void *local_80;
  char local_78;
  long *local_70;
  long local_58;
  
  puVar5 = &local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007ed5a0 to 007ed5c3 has its CatchHandler @ 007ed928 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099df10 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if ((uint *)local_70 == &local_90) {
    lVar7 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007ed5f0;
    lVar7 = 5;
    puVar5 = (uint *)local_70;
  }
  (**(code **)(*(long *)puVar5 + lVar7 * 8))();
LAB_007ed5f0:
  local_90 = 0;
  *(undefined **)this = PTR_vtable_0099df08 + 0x20;
                    /* try { // try from 007ed604 to 007ed627 has its CatchHandler @ 007ed8fc */
  uVar4 = FUN_007ec7c8(param_1,param_3,"textColor",param_2 + 0x6e0,&local_90,0,0);
  *(undefined4 *)(this + 0x6e0) = uVar4;
  local_90._0_1_ = 1;
                    /* try { // try from 007ed634 to 007ed657 has its CatchHandler @ 007ed8f8 */
  bVar2 = FUN_007ea510(param_1,param_3,"editable",param_2 + 0x6e4,&local_90,0,0);
  local_90._0_1_ = 0;
  this[0x6e4] = (DCDChatInputProps)(bVar2 & 1);
                    /* try { // try from 007ed664 to 007ed687 has its CatchHandler @ 007ed8f4 */
  bVar2 = FUN_007ea510(param_1,param_3,"shouldShowCursor",param_2 + 0x6e5,&local_90,0,0);
  local_90 = (uint)local_90._1_3_ << 8;
  this[0x6e5] = (DCDChatInputProps)(bVar2 & 1);
  local_78 = '\0';
                    /* try { // try from 007ed698 to 007ed6bf has its CatchHandler @ 007ed8d8 */
  FUN_007ec9b8(this + 0x6e8,param_1,param_3,"placeholder",param_2 + 0x6e8,&local_90,0,0);
  if ((local_78 != '\0') && ((local_90 & 1) != 0)) {
    operator_delete(local_80);
  }
  local_90 = local_90 & 0xffffff00;
  uStack_8c = 0;
                    /* try { // try from 007ed6e0 to 007ed6fb has its CatchHandler @ 007ed8b8 */
  uVar6 = FUN_007ecc38(param_1,param_3,"placeholderColor",param_2 + 0x708,&local_90);
  *(undefined8 *)(this + 0x708) = uVar6;
  local_90 = local_90 & 0xffffff00;
  local_78 = '\0';
                    /* try { // try from 007ed708 to 007ed72f has its CatchHandler @ 007ed89c */
  FUN_007ec9b8(this + 0x710,param_1,param_3,"markAsSpoilerTitle",param_2 + 0x710,&local_90,0,0);
  if ((local_78 != '\0') && ((local_90 & 1) != 0)) {
    operator_delete(local_80);
  }
  local_90 = 0;
                    /* try { // try from 007ed74c to 007ed76f has its CatchHandler @ 007ed87c */
  uVar4 = FUN_007ece34(param_1,param_3,"keyboardAppearance",param_2 + 0x730,&local_90,0,0);
  *(undefined4 *)(this + 0x730) = uVar4;
  local_90 = 0;
                    /* try { // try from 007ed778 to 007ed79b has its CatchHandler @ 007ed878 */
  uVar4 = FUN_007ec7c8(param_1,param_3,"selectionColor",param_2 + 0x734,&local_90,0,0);
  *(undefined4 *)(this + 0x734) = uVar4;
  local_90 = local_90 & 0xffff0000;
                    /* try { // try from 007ed7a4 to 007ed7bb has its CatchHandler @ 007ed874 */
  uVar3 = FUN_007ecff4(param_3,"setNoExtractUI",param_2 + 0x738,&local_90);
  *(undefined2 *)(this + 0x738) = uVar3;
  local_90 = 1;
                    /* try { // try from 007ed7c8 to 007ed7d7 has its CatchHandler @ 007ed870 */
  uVar4 = FUN_007ed1a8(param_3,param_2 + 0x73c,&local_90);
  *(undefined4 *)(this + 0x73c) = uVar4;
  local_90 = local_90 & 0xffffff00;
  uStack_8c = 0;
                    /* try { // try from 007ed7e4 to 007ed807 has its CatchHandler @ 007ed86c */
  uVar6 = FUN_007ed35c(param_1,param_3,"maxHeight",param_2 + 0x740,&local_90,0,0);
  *(undefined8 *)(this + 0x740) = uVar6;
  local_90 = local_90 & 0xffffff00;
  uStack_8c = 0;
                    /* try { // try from 007ed814 to 007ed837 has its CatchHandler @ 007ed868 */
  uVar6 = FUN_007ed35c(param_1,param_3,"verticalInset",param_2 + 0x748,&local_90,0,0);
  *(undefined8 *)(this + 0x748) = uVar6;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ed960  facebook::react::DCDChatInputProps::getDiffPropsImplementationTarget =====

/* facebook::react::DCDChatInputProps::getDiffPropsImplementationTarget() const */

char * facebook::react::DCDChatInputProps::getDiffPropsImplementationTarget(void)

{
  return "DCDChatInput";
}


// ===== 007ed96c  facebook::react::DCDChatInputProps::getDiffProps =====

/* facebook::react::DCDChatInputProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::DCDChatInputProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  size_t sVar2;
  size_t sVar3;
  Props PVar4;
  Props PVar5;
  long lVar6;
  int iVar7;
  int *piVar8;
  dynamic *pdVar9;
  Props *in_x1;
  Props *pPVar10;
  undefined4 *in_x8;
  undefined4 uVar11;
  ulong uVar12;
  Props *pPVar13;
  Props PVar14;
  float fVar15;
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  undefined4 uStack_90;
  undefined3 uStack_8c;
  undefined4 local_88 [2];
  undefined8 local_80;
  ulong uStack_78;
  void *local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  if (((DAT_009aaf80 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_009aaf80), iVar7 != 0)) {
    memset(&DAT_009aa830,0,0x750);
                    /* try { // try from 007ee1f0 to 007ee1f3 has its CatchHandler @ 007ee258 */
    FUN_007ee308();
    __cxa_atexit(FUN_007ee3d0,&DAT_009aa830,&PTR_LOOP_008d5d30);
    __cxa_guard_release(&DAT_009aaf80);
  }
  pPVar1 = (Props *)&DAT_009aa830;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    local_68 = 0;
    local_88[0] = 5;
    uStack_78 = 0;
    local_70 = (void *)0x0;
    local_60 = 0x3f800000;
    *in_x8 = 5;
    local_80 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
LAB_007edb5c:
    folly::dynamic::folly::dynamic::destroy(local_88);
  }
  else {
    ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    iVar7 = *(int *)(param_1 + 0x6e0);
    if (iVar7 != *(int *)(pPVar1 + 0x6e0)) {
                    /* try { // try from 007ed9e0 to 007eda83 has its CatchHandler @ 007ee2e0 */
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 4) {
        folly::dynamic::folly::dynamic::destroy(piVar8);
        *piVar8 = 4;
      }
      *(long *)(piVar8 + 2) = (long)iVar7;
    }
    PVar4 = param_1[0x6e4];
    if (PVar4 != pPVar1[0x6e4]) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 2) {
        folly::dynamic::folly::dynamic::destroy(piVar8);
        *piVar8 = 2;
      }
      *(Props *)(piVar8 + 2) = PVar4;
    }
    PVar4 = param_1[0x6e5];
    if (PVar4 != pPVar1[0x6e5]) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 2) {
        folly::dynamic::folly::dynamic::destroy(piVar8);
        *piVar8 = 2;
      }
      *(Props *)(piVar8 + 2) = PVar4;
    }
    PVar4 = param_1[0x700];
    if ((PVar4 == (Props)0x0) || (pPVar1[0x700] == (Props)0x0)) {
      if ((PVar4 != (Props)0x0) != (pPVar1[0x700] != (Props)0x0)) {
LAB_007edb80:
        if (PVar4 != (Props)0x0) {
          PVar14 = param_1[0x6e8];
          goto LAB_007edb98;
        }
        local_88[0] = 0;
        local_80 = 0;
                    /* try { // try from 007edc20 to 007edc33 has its CatchHandler @ 007ee280 */
        pdVar9 = (dynamic *)folly::dynamic::operator[]();
        folly::dynamic::operator=(pdVar9,(dynamic *)local_88);
        folly::dynamic::folly::dynamic::destroy(local_88);
      }
    }
    else {
      PVar14 = param_1[0x6e8];
      PVar5 = pPVar1[0x6e8];
      uVar12 = (ulong)((byte)PVar14 >> 1);
      sVar2 = uVar12;
      if (((byte)PVar14 & 1) != 0) {
        sVar2 = *(size_t *)(param_1 + 0x6f0);
      }
      sVar3 = (ulong)((byte)PVar5 >> 1);
      if (((byte)PVar5 & 1) != 0) {
        sVar3 = *(size_t *)(pPVar1 + 0x6f0);
      }
      if (sVar2 == sVar3) {
        pPVar10 = pPVar1 + 0x6e9;
        if (((byte)PVar5 & 1) != 0) {
          pPVar10 = *(Props **)(pPVar1 + 0x6f8);
        }
        if (((byte)PVar14 & 1) == 0) {
          if (1 < (byte)PVar14) {
            pPVar13 = param_1 + 0x6e9;
            do {
              if (*pPVar13 != *pPVar10) goto LAB_007edb80;
              uVar12 = uVar12 - 1;
              pPVar13 = pPVar13 + 1;
              pPVar10 = pPVar10 + 1;
            } while (uVar12 != 0);
          }
        }
        else {
          iVar7 = memcmp(*(void **)(param_1 + 0x6f8),pPVar10,*(size_t *)(param_1 + 0x6f0));
          if (iVar7 != 0) goto LAB_007edb98;
        }
      }
      else {
LAB_007edb98:
        if (((byte)PVar14 & 1) == 0) {
          uStack_a8 = *(ulong *)(param_1 + 0x6f0);
          local_b0 = *(ulong *)(param_1 + 0x6e8);
          local_a0 = *(void **)(param_1 + 0x6f8);
        }
        else {
                    /* try { // try from 007edbb8 to 007edbbf has its CatchHandler @ 007ee28c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_b0,*(char **)(param_1 + 0x6f8),*(ulong *)(param_1 + 0x6f0));
        }
        local_88[0] = 6;
        uStack_78 = uStack_a8;
        local_80 = local_b0;
        local_70 = local_a0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_a0 = (void *)0x0;
                    /* try { // try from 007edbe0 to 007edbf3 has its CatchHandler @ 007ee2c0 */
        pdVar9 = (dynamic *)folly::dynamic::operator[]();
        folly::dynamic::operator=(pdVar9,(dynamic *)local_88);
        folly::dynamic::folly::dynamic::destroy(local_88);
        if ((local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
      }
    }
    PVar4 = param_1[0x70c];
    if ((PVar4 == (Props)0x0) || (pPVar1[0x70c] == (Props)0x0)) {
      if ((PVar4 != (Props)0x0) != (pPVar1[0x70c] != (Props)0x0)) {
        if (PVar4 != (Props)0x0) {
          iVar7 = *(int *)(param_1 + 0x708);
          goto LAB_007edc88;
        }
        local_88[0] = 0;
        local_80 = 0;
                    /* try { // try from 007ee114 to 007ee127 has its CatchHandler @ 007ee278 */
        pdVar9 = (dynamic *)folly::dynamic::operator[]();
        folly::dynamic::operator=(pdVar9,(dynamic *)local_88);
        folly::dynamic::folly::dynamic::destroy(local_88);
      }
    }
    else {
      iVar7 = *(int *)(param_1 + 0x708);
      if (iVar7 != *(int *)(pPVar1 + 0x708)) {
LAB_007edc88:
                    /* try { // try from 007edc88 to 007edc9b has its CatchHandler @ 007ee2e0 */
        piVar8 = (int *)folly::dynamic::operator[]();
        if (*piVar8 != 4) {
          folly::dynamic::folly::dynamic::destroy(piVar8);
          *piVar8 = 4;
        }
        *(long *)(piVar8 + 2) = (long)iVar7;
      }
    }
    PVar4 = param_1[0x728];
    if ((PVar4 == (Props)0x0) || (pPVar1[0x728] == (Props)0x0)) {
      if ((PVar4 != (Props)0x0) != (pPVar1[0x728] != (Props)0x0)) {
LAB_007edd64:
        if (PVar4 != (Props)0x0) {
          PVar14 = param_1[0x710];
          goto LAB_007edd7c;
        }
        local_88[0] = 0;
        local_80 = 0;
                    /* try { // try from 007ede04 to 007ede17 has its CatchHandler @ 007ee27c */
        pdVar9 = (dynamic *)folly::dynamic::operator[]();
        folly::dynamic::operator=(pdVar9,(dynamic *)local_88);
        folly::dynamic::folly::dynamic::destroy(local_88);
      }
    }
    else {
      PVar14 = param_1[0x710];
      PVar5 = pPVar1[0x710];
      uVar12 = (ulong)((byte)PVar14 >> 1);
      sVar2 = uVar12;
      if (((byte)PVar14 & 1) != 0) {
        sVar2 = *(size_t *)(param_1 + 0x718);
      }
      sVar3 = (ulong)((byte)PVar5 >> 1);
      if (((byte)PVar5 & 1) != 0) {
        sVar3 = *(size_t *)(pPVar1 + 0x718);
      }
      if (sVar2 == sVar3) {
        pPVar10 = pPVar1 + 0x711;
        if (((byte)PVar5 & 1) != 0) {
          pPVar10 = *(Props **)(pPVar1 + 0x720);
        }
        if (((byte)PVar14 & 1) == 0) {
          if (1 < (byte)PVar14) {
            pPVar13 = param_1 + 0x711;
            do {
              if (*pPVar13 != *pPVar10) goto LAB_007edd64;
              uVar12 = uVar12 - 1;
              pPVar13 = pPVar13 + 1;
              pPVar10 = pPVar10 + 1;
            } while (uVar12 != 0);
          }
        }
        else {
          iVar7 = memcmp(*(void **)(param_1 + 0x720),pPVar10,*(size_t *)(param_1 + 0x718));
          if (iVar7 != 0) goto LAB_007edd7c;
        }
      }
      else {
LAB_007edd7c:
        if (((byte)PVar14 & 1) == 0) {
          uStack_c8 = *(ulong *)(param_1 + 0x718);
          local_d0 = *(ulong *)(param_1 + 0x710);
          local_c0 = *(void **)(param_1 + 0x720);
        }
        else {
                    /* try { // try from 007edd9c to 007edda3 has its CatchHandler @ 007ee288 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_d0,*(char **)(param_1 + 0x720),*(ulong *)(param_1 + 0x718));
        }
        local_88[0] = 6;
        uStack_78 = uStack_c8;
        local_80 = local_d0;
        local_70 = local_c0;
        local_d0 = 0;
        uStack_c8 = 0;
        local_c0 = (void *)0x0;
                    /* try { // try from 007eddc4 to 007eddd7 has its CatchHandler @ 007ee2a0 */
        pdVar9 = (dynamic *)folly::dynamic::operator[]();
        folly::dynamic::operator=(pdVar9,(dynamic *)local_88);
        folly::dynamic::folly::dynamic::destroy(local_88);
        if ((local_d0 & 1) != 0) {
          operator_delete(local_c0);
        }
      }
    }
    iVar7 = *(int *)(param_1 + 0x730);
    if (iVar7 != *(int *)(pPVar1 + 0x730)) {
                    /* try { // try from 007ede38 to 007edf0f has its CatchHandler @ 007ee2e0 */
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 4) {
        folly::dynamic::folly::dynamic::destroy(piVar8);
        *piVar8 = 4;
      }
      *(long *)(piVar8 + 2) = (long)iVar7;
    }
    iVar7 = *(int *)(param_1 + 0x734);
    if (iVar7 != *(int *)(pPVar1 + 0x734)) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 4) {
        folly::dynamic::folly::dynamic::destroy(piVar8);
        *piVar8 = 4;
      }
      *(long *)(piVar8 + 2) = (long)iVar7;
    }
    PVar4 = param_1[0x739];
    if ((PVar4 == (Props)0x0) || (pPVar1[0x739] == (Props)0x0)) {
      if ((PVar4 != (Props)0x0) != (pPVar1[0x739] != (Props)0x0)) {
        if (PVar4 != (Props)0x0) {
          PVar4 = param_1[0x738];
          goto LAB_007edefc;
        }
        local_88[0] = 0;
        local_80 = 0;
                    /* try { // try from 007ee144 to 007ee157 has its CatchHandler @ 007ee274 */
        pdVar9 = (dynamic *)folly::dynamic::operator[]();
        folly::dynamic::operator=(pdVar9,(dynamic *)local_88);
        folly::dynamic::folly::dynamic::destroy(local_88);
      }
    }
    else {
      PVar4 = param_1[0x738];
      if (PVar4 != pPVar1[0x738]) {
LAB_007edefc:
        piVar8 = (int *)folly::dynamic::operator[]();
        if (*piVar8 != 2) {
          folly::dynamic::folly::dynamic::destroy(piVar8);
          *piVar8 = 2;
        }
        *(Props *)(piVar8 + 2) = PVar4;
      }
    }
    iVar7 = *(int *)(param_1 + 0x73c);
    if (iVar7 != *(int *)(pPVar1 + 0x73c)) {
      if (iVar7 == 1) {
        uStack_8c = 0x726574;
        uVar11 = 0x74697774;
      }
      else {
        if (iVar7 != 0) {
          if (*(long *)(lVar6 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007ee254 to 007ee257 has its CatchHandler @ 007ee284 */
            abort();
          }
          goto LAB_007ee304;
        }
        uStack_8c = 0x746c75;
        uVar11 = 0x61666564;
      }
      local_88[0] = 6;
      uStack_90._3_1_ = (undefined1)((uint)uVar11 >> 0x18);
      local_80._0_5_ = CONCAT41(uVar11,0xe);
      local_80 = CONCAT44(CONCAT31(uStack_8c,uStack_90._3_1_),(undefined4)local_80);
      uStack_78 = uStack_78 & 0xffffffffffffff00;
      local_70 = (void *)0x0;
      uStack_90 = uVar11;
                    /* try { // try from 007edfa4 to 007edfb7 has its CatchHandler @ 007ee290 */
      pdVar9 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar9,(dynamic *)local_88);
      folly::dynamic::folly::dynamic::destroy(local_88);
    }
    PVar4 = param_1[0x744];
    PVar14 = pPVar1[0x744];
    if ((PVar4 == (Props)0x0) || (PVar14 == (Props)0x0)) {
      if ((PVar4 != (Props)0x0) != (PVar14 != (Props)0x0)) {
        if (PVar4 != (Props)0x0) {
          fVar15 = *(float *)(param_1 + 0x740);
          if (PVar14 != (Props)0x0) goto LAB_007ee010;
          goto LAB_007ee018;
        }
        local_88[0] = 0;
        local_80 = 0;
                    /* try { // try from 007ee174 to 007ee187 has its CatchHandler @ 007ee270 */
        pdVar9 = (dynamic *)folly::dynamic::operator[]();
        folly::dynamic::operator=(pdVar9,(dynamic *)local_88);
        folly::dynamic::folly::dynamic::destroy(local_88);
      }
    }
    else {
      fVar15 = *(float *)(param_1 + 0x740);
      if (fVar15 != *(float *)(pPVar1 + 0x740)) {
LAB_007ee010:
        if ((!NAN(fVar15)) || (!NAN(*(float *)(pPVar1 + 0x740)))) {
LAB_007ee018:
                    /* try { // try from 007ee018 to 007ee0b7 has its CatchHandler @ 007ee2e0 */
          piVar8 = (int *)folly::dynamic::operator[]();
          if (*piVar8 != 3) {
            folly::dynamic::folly::dynamic::destroy(piVar8);
            *piVar8 = 3;
          }
          *(double *)(piVar8 + 2) = (double)fVar15;
        }
      }
    }
    PVar4 = param_1[0x74c];
    PVar14 = pPVar1[0x74c];
    if ((PVar4 == (Props)0x0) || (PVar14 == (Props)0x0)) {
      if ((PVar4 != (Props)0x0) != (PVar14 != (Props)0x0)) {
        if (PVar4 != (Props)0x0) {
          fVar15 = *(float *)(param_1 + 0x748);
          if (PVar14 != (Props)0x0) goto LAB_007ee09c;
          goto LAB_007ee0a4;
        }
        local_88[0] = 0;
        local_80 = 0;
                    /* try { // try from 007ee1a4 to 007ee1b7 has its CatchHandler @ 007ee26c */
        pdVar9 = (dynamic *)folly::dynamic::operator[]();
        folly::dynamic::operator=(pdVar9,(dynamic *)local_88);
        goto LAB_007edb5c;
      }
    }
    else {
      fVar15 = *(float *)(param_1 + 0x748);
      if (fVar15 != *(float *)(pPVar1 + 0x748)) {
LAB_007ee09c:
        if ((!NAN(fVar15)) || (!NAN(*(float *)(pPVar1 + 0x748)))) {
LAB_007ee0a4:
          piVar8 = (int *)folly::dynamic::operator[]();
          if (*piVar8 != 3) {
            folly::dynamic::folly::dynamic::destroy(piVar8);
            *piVar8 = 3;
          }
          *(double *)(piVar8 + 2) = (double)fVar15;
        }
      }
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
LAB_007ee304:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ee308  FUN_007ee308 =====

void FUN_007ee308(void)

{
  FUN_00788b10(&DAT_009aa830,PTR_PTR_0099df10 + 0x10);
  DAT_009aae0c = 0;
  DAT_009aae10 = 0;
  DAT_009aae70 = 0;
  DAT_009aae78 = 0;
  DAT_009aaed8 = 0;
  DAT_009aaee8 = 0;
  DAT_009aaeec = 0;
  DAT_009aaef0 = 0;
  DAT_009aaef4 = 0;
  DAT_009aaef8 = 0;
  DAT_009aaefc = 0;
  DAT_009aaf00 = 0;
  DAT_009aaf04 = 0;
  DAT_009aaf08 = 0;
  DAT_009aaf0c = 0;
  DAT_009aaee0 = 0;
  DAT_009aaee4 = 0;
  DAT_009aaf10 = 0;
  DAT_009aa830 = PTR_vtable_0099df08 + 0x20;
  DAT_009aaf14 = 1;
  DAT_009aaf18 = 0;
  DAT_009aaf30 = 0;
  DAT_009aaf38 = 0;
  DAT_009aaf3c = 0;
  DAT_009aaf40 = 0;
  DAT_009aaf58 = 0;
  DAT_009aaf68 = 0;
  DAT_009aaf60 = 0;
  DAT_009aaf6c = 1;
  DAT_009aaf70 = 0;
  DAT_009aaf74 = 0;
  DAT_009aaf78 = 0;
  DAT_009aaf7c = 0;
  return;
}


// ===== 007ee3d0  FUN_007ee3d0 =====

void FUN_007ee3d0(long param_1)

{
  if ((*(char *)(param_1 + 0x728) != '\0') && ((*(byte *)(param_1 + 0x710) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x720));
  }
  if ((*(char *)(param_1 + 0x700) != '\0') && ((*(byte *)(param_1 + 0x6e8) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x6f8));
  }
  FUN_0078917c(param_1,PTR_PTR_0099df10 + 8);
  return;
}


// ===== 007ee43c  facebook::react::DCDChatListProps::DCDChatListProps =====

/* facebook::react::DCDChatListProps::DCDChatListProps(facebook::react::PropsParserContext const&,
   facebook::react::DCDChatListProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::DCDChatListProps::DCDChatListProps
          (DCDChatListProps *this,PropsParserContext *param_1,DCDChatListProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  function *in_x4;
  long lVar4;
  undefined1 local_90 [32];
  long *local_70;
  long local_58;
  
  plVar3 = (long *)local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007ee47c to 007ee48b has its CatchHandler @ 007ee530 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if (local_70 == (long *)local_90) {
    lVar4 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007ee4b8;
    lVar4 = 5;
    plVar3 = local_70;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007ee4b8:
  local_90[0] = 0;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 007ee4c4 to 007ee4e7 has its CatchHandler @ 007ee51c */
  bVar2 = FUN_007ea510(param_2);
  this[0x6e0] = (DCDChatListProps)(bVar2 & 1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ee580  facebook::react::DCDChatListProps::DCDChatListProps =====

/* facebook::react::DCDChatListProps::DCDChatListProps(facebook::react::PropsParserContext const&,
   facebook::react::DCDChatListProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::DCDChatListProps::DCDChatListProps
          (DCDChatListProps *this,PropsParserContext *param_1,DCDChatListProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  undefined1 local_90 [32];
  long *local_70;
  long local_58;
  
  plVar3 = (long *)local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007ee5bc to 007ee5df has its CatchHandler @ 007ee68c */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099df28 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if (local_70 == (long *)local_90) {
    lVar4 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007ee60c;
    lVar4 = 5;
    plVar3 = local_70;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007ee60c:
  local_90[0] = 0;
  *(undefined **)this = PTR_vtable_0099df20 + 0x20;
                    /* try { // try from 007ee620 to 007ee643 has its CatchHandler @ 007ee678 */
  bVar2 = FUN_007ea510(param_1,param_3,"floatingChatInputEnabled",param_2 + 0x6e0,local_90,0,0);
  this[0x6e0] = (DCDChatListProps)(bVar2 & 1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ee6dc  facebook::react::DCDChatListProps::getDiffPropsImplementationTarget =====

/* facebook::react::DCDChatListProps::getDiffPropsImplementationTarget() const */

char * facebook::react::DCDChatListProps::getDiffPropsImplementationTarget(void)

{
  return "DCDChatList";
}


// ===== 007ee6e8  facebook::react::DCDChatListProps::getDiffProps =====

/* facebook::react::DCDChatListProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::DCDChatListProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  Props PVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  Props *in_x1;
  undefined4 *in_x8;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((DAT_009ab670 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(&DAT_009ab670);
    if (iVar4 != 0) {
      memset(&DAT_009aaf88,0,0x6e8);
                    /* try { // try from 007ee828 to 007ee82b has its CatchHandler @ 007ee860 */
      FUN_007ee89c();
      __cxa_atexit(FUN_007ee928,&DAT_009aaf88,&PTR_LOOP_008d5d30);
      __cxa_guard_release(&DAT_009ab670);
    }
  }
  pPVar1 = (Props *)&DAT_009aaf88;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    local_58 = 0;
    local_78[0] = 5;
    local_68 = 0;
    uStack_60 = 0;
    local_50 = 0x3f800000;
    *in_x8 = 5;
    local_70 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_78);
  }
  else {
    ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    PVar2 = param_1[0x6e0];
    if (PVar2 != pPVar1[0x6e0]) {
                    /* try { // try from 007ee754 to 007ee767 has its CatchHandler @ 007ee874 */
      piVar5 = (int *)folly::dynamic::operator[]();
      if (*piVar5 != 2) {
        folly::dynamic::folly::dynamic::destroy(piVar5);
        *piVar5 = 2;
      }
      *(Props *)(piVar5 + 2) = PVar2;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ee89c  FUN_007ee89c =====

void FUN_007ee89c(void)

{
  FUN_00788b10(&DAT_009aaf88,PTR_PTR_0099df28 + 0x10);
  DAT_009ab564 = 0;
  DAT_009ab568 = 0;
  DAT_009ab5c8 = 0;
  DAT_009ab5d0 = 0;
  DAT_009ab630 = 0;
  DAT_009ab640 = 0;
  DAT_009ab644 = 0;
  DAT_009ab648 = 0;
  DAT_009ab64c = 0;
  DAT_009ab650 = 0;
  DAT_009ab654 = 0;
  DAT_009ab658 = 0;
  DAT_009ab65c = 0;
  DAT_009ab660 = 0;
  DAT_009ab664 = 0;
  DAT_009ab638 = 0;
  DAT_009ab63c = 0;
  DAT_009ab668 = 0;
  DAT_009aaf88 = PTR_vtable_0099df20 + 0x20;
  return;
}


// ===== 007ee928  FUN_007ee928 =====

void FUN_007ee928(undefined8 param_1)

{
  FUN_0078917c(param_1,PTR_PTR_0099df28 + 8);
  return;
}


// ===== 007ee938  facebook::react::DCDChatProps::DCDChatProps =====

/* facebook::react::DCDChatProps::DCDChatProps(facebook::react::PropsParserContext const&,
   facebook::react::DCDChatProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::DCDChatProps::DCDChatProps
          (DCDChatProps *this,PropsParserContext *param_1,DCDChatProps *param_2,RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined8 uVar6;
  function *in_x4;
  long lVar7;
  uint local_90;
  undefined1 uStack_8c;
  void *local_80;
  char local_78;
  long *local_70;
  long local_58;
  
  puVar5 = &local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007ee978 to 007ee987 has its CatchHandler @ 007eeb88 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if ((uint *)local_70 == &local_90) {
    lVar7 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007ee9b4;
    lVar7 = 5;
    puVar5 = (uint *)local_70;
  }
  (**(code **)(*(long *)puVar5 + lVar7 * 8))();
LAB_007ee9b4:
  local_90 = local_90 & 0xffffff00;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 007ee9c0 to 007ee9e3 has its CatchHandler @ 007eeb5c */
  bVar2 = FUN_007ea510(param_2);
  local_90 = local_90 & 0xffff0000;
  this[0x6e0] = (DCDChatProps)(bVar2 & 1);
                    /* try { // try from 007ee9f0 to 007eea07 has its CatchHandler @ 007eeb58 */
  uVar3 = FUN_007ecff4();
  local_90 = local_90 & 0xffff0000;
  *(undefined2 *)(this + 0x6e1) = uVar3;
                    /* try { // try from 007eea14 to 007eea2b has its CatchHandler @ 007eeb54 */
  uVar3 = FUN_007ecff4();
  *(undefined2 *)(this + 0x6e3) = uVar3;
  local_90 = local_90 & 0xffff0000;
                    /* try { // try from 007eea34 to 007eea4b has its CatchHandler @ 007eeb50 */
  uVar3 = FUN_007ecff4();
  *(undefined2 *)(this + 0x6e5) = uVar3;
  local_90 = 0;
                    /* try { // try from 007eea54 to 007eea63 has its CatchHandler @ 007eeb4c */
  uVar4 = FUN_007eebc0();
  *(undefined4 *)(this + 0x6e8) = uVar4;
  local_90 = local_90 & 0xffff0000;
                    /* try { // try from 007eea6c to 007eea83 has its CatchHandler @ 007eeb48 */
  uVar3 = FUN_007ecff4();
  *(undefined2 *)(this + 0x6ec) = uVar3;
  local_90 = local_90 & 0xffffff00;
  uStack_8c = 0;
                    /* try { // try from 007eea90 to 007eeaab has its CatchHandler @ 007eeb44 */
  uVar6 = FUN_007ecc38(param_2);
  *(undefined8 *)(this + 0x6f0) = uVar6;
  local_90 = local_90 & 0xffffff00;
  local_78 = '\0';
                    /* try { // try from 007eeab8 to 007eeadf has its CatchHandler @ 007eeb24 */
  FUN_007ec9b8(this + 0x6f8,param_2);
  if ((local_78 != '\0') && ((local_90 & 1) != 0)) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007eebc0  FUN_007eebc0 =====

void FUN_007eebc0(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_50 [6];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_1,"roleStyle",(char *)0x0);
  if (lVar2 == 0) {
    local_50[0] = *param_2;
  }
  else {
    uVar3 = FUN_00807970();
    if ((uVar3 & 1) == 0) {
      local_50[0] = *param_3;
    }
    else {
                    /* try { // try from 007eec38 to 007eec43 has its CatchHandler @ 007eec54 */
      FUN_008163dc(lVar2,local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_50[0]);
}


// ===== 007eed74  facebook::react::DCDChatProps::DCDChatProps =====

/* facebook::react::DCDChatProps::DCDChatProps(facebook::react::PropsParserContext const&,
   facebook::react::DCDChatProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::DCDChatProps::DCDChatProps
          (DCDChatProps *this,PropsParserContext *param_1,DCDChatProps *param_2,RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined8 uVar6;
  long lVar7;
  uint local_90;
  undefined1 uStack_8c;
  void *local_80;
  char local_78;
  long *local_70;
  long local_58;
  
  puVar5 = &local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007eedb0 to 007eedd3 has its CatchHandler @ 007eefdc */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099df40 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if ((uint *)local_70 == &local_90) {
    lVar7 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007eee00;
    lVar7 = 5;
    puVar5 = (uint *)local_70;
  }
  (**(code **)(*(long *)puVar5 + lVar7 * 8))();
LAB_007eee00:
  local_90 = local_90 & 0xffffff00;
  *(undefined **)this = PTR_vtable_0099df38 + 0x20;
                    /* try { // try from 007eee14 to 007eee37 has its CatchHandler @ 007eefb0 */
  bVar2 = FUN_007ea510(param_1,param_3,"inverted",param_2 + 0x6e0,&local_90,0,0);
  local_90 = local_90 & 0xffff0000;
  this[0x6e0] = (DCDChatProps)(bVar2 & 1);
                    /* try { // try from 007eee44 to 007eee5b has its CatchHandler @ 007eefac */
  uVar3 = FUN_007ecff4(param_3,"animateEmoji",param_2 + 0x6e1,&local_90);
  local_90 = local_90 & 0xffff0000;
  *(undefined2 *)(this + 0x6e1) = uVar3;
                    /* try { // try from 007eee68 to 007eee7f has its CatchHandler @ 007eefa8 */
  uVar3 = FUN_007ecff4(param_3,"HACK_fixModalInteraction",param_2 + 0x6e3,&local_90);
  *(undefined2 *)(this + 0x6e3) = uVar3;
  local_90 = local_90 & 0xffff0000;
                    /* try { // try from 007eee88 to 007eee9f has its CatchHandler @ 007eefa4 */
  uVar3 = FUN_007ecff4(param_3,"alwaysRespectKeyboard",param_2 + 0x6e5,&local_90);
  *(undefined2 *)(this + 0x6e5) = uVar3;
  local_90 = 0;
                    /* try { // try from 007eeea8 to 007eeeb7 has its CatchHandler @ 007eefa0 */
  uVar4 = FUN_007eebc0(param_3,param_2 + 0x6e8,&local_90);
  *(undefined4 *)(this + 0x6e8) = uVar4;
  local_90 = local_90 & 0xffff0000;
                    /* try { // try from 007eeec0 to 007eeed7 has its CatchHandler @ 007eef9c */
  uVar3 = FUN_007ecff4(param_3,"adjustContentOffsetWithBounds",param_2 + 0x6ec,&local_90);
  *(undefined2 *)(this + 0x6ec) = uVar3;
  local_90 = local_90 & 0xffffff00;
  uStack_8c = 0;
                    /* try { // try from 007eeee4 to 007eeeff has its CatchHandler @ 007eef98 */
  uVar6 = FUN_007ecc38(param_1,param_3,"keyboardBackgroundColor",param_2 + 0x6f0,&local_90);
  *(undefined8 *)(this + 0x6f0) = uVar6;
  local_90 = local_90 & 0xffffff00;
  local_78 = '\0';
                    /* try { // try from 007eef0c to 007eef33 has its CatchHandler @ 007eef78 */
  FUN_007ec9b8(this + 0x6f8,param_1,param_3,"channelId",param_2 + 0x6f8,&local_90,0,0);
  if ((local_78 != '\0') && ((local_90 & 1) != 0)) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ef014  facebook::react::DCDChatProps::getDiffPropsImplementationTarget =====

/* facebook::react::DCDChatProps::getDiffPropsImplementationTarget() const */

char * facebook::react::DCDChatProps::getDiffPropsImplementationTarget(void)

{
  return "DCDChat";
}


// ===== 007ef020  facebook::react::DCDChatProps::getDiffProps =====

/* facebook::react::DCDChatProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::DCDChatProps::getDiffProps(Props *param_1)

{
  size_t sVar1;
  size_t sVar2;
  Props PVar3;
  Props PVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int *piVar9;
  dynamic *pdVar10;
  Props *in_x1;
  Props *__s2;
  undefined4 *in_x8;
  undefined1 *puVar11;
  int iVar12;
  ulong uVar13;
  undefined1 uVar14;
  Props *pPVar15;
  uint uVar16;
  Props PVar17;
  undefined1 local_9c [12];
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  void *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if (((DAT_009abd90 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_009abd90), iVar8 != 0)) {
    memset(&DAT_009ab678,0,0x718);
                    /* try { // try from 007ef6f4 to 007ef6f7 has its CatchHandler @ 007ef73c */
    FUN_007ef7c8();
    __cxa_atexit(FUN_007ef874,&DAT_009ab678,&PTR_LOOP_008d5d30);
    __cxa_guard_release(&DAT_009abd90);
  }
  pPVar15 = (Props *)&DAT_009ab678;
  if (in_x1 != (Props *)0x0) {
    pPVar15 = in_x1;
  }
  if (pPVar15 == param_1) {
    local_58 = 0;
    local_78[0] = 5;
    uStack_68 = 0;
    local_60 = (void *)0x0;
    local_50 = 0x3f800000;
    *in_x8 = 5;
    local_70 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
LAB_007ef118:
    folly::dynamic::folly::dynamic::destroy(local_78);
  }
  else {
    ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    PVar3 = param_1[0x6e0];
    if (PVar3 != pPVar15[0x6e0]) {
                    /* try { // try from 007ef090 to 007ef24f has its CatchHandler @ 007ef7a0 */
      piVar9 = (int *)folly::dynamic::operator[]();
      if (*piVar9 != 2) {
        folly::dynamic::folly::dynamic::destroy(piVar9);
        *piVar9 = 2;
      }
      *(Props *)(piVar9 + 2) = PVar3;
    }
    PVar3 = param_1[0x6e2];
    if ((PVar3 == (Props)0x0) || (pPVar15[0x6e2] == (Props)0x0)) {
      if ((PVar3 != (Props)0x0) != (pPVar15[0x6e2] != (Props)0x0)) {
        if (PVar3 != (Props)0x0) {
          PVar3 = param_1[0x6e1];
          goto LAB_007ef144;
        }
        local_78[0] = 0;
        local_70 = 0;
                    /* try { // try from 007ef5e0 to 007ef5f3 has its CatchHandler @ 007ef760 */
        pdVar10 = (dynamic *)folly::dynamic::operator[]();
        folly::dynamic::operator=(pdVar10,(dynamic *)local_78);
        folly::dynamic::folly::dynamic::destroy(local_78);
      }
    }
    else {
      PVar3 = param_1[0x6e1];
      if (PVar3 != pPVar15[0x6e1]) {
LAB_007ef144:
        piVar9 = (int *)folly::dynamic::operator[]();
        if (*piVar9 != 2) {
          folly::dynamic::folly::dynamic::destroy(piVar9);
          *piVar9 = 2;
        }
        *(Props *)(piVar9 + 2) = PVar3;
      }
    }
    PVar3 = param_1[0x6e4];
    if ((PVar3 == (Props)0x0) || (pPVar15[0x6e4] == (Props)0x0)) {
      if ((PVar3 != (Props)0x0) != (pPVar15[0x6e4] != (Props)0x0)) {
        if (PVar3 != (Props)0x0) {
          PVar3 = param_1[0x6e3];
          goto LAB_007ef1c0;
        }
        local_78[0] = 0;
        local_70 = 0;
                    /* try { // try from 007ef610 to 007ef623 has its CatchHandler @ 007ef75c */
        pdVar10 = (dynamic *)folly::dynamic::operator[]();
        folly::dynamic::operator=(pdVar10,(dynamic *)local_78);
        folly::dynamic::folly::dynamic::destroy(local_78);
      }
    }
    else {
      PVar3 = param_1[0x6e3];
      if (PVar3 != pPVar15[0x6e3]) {
LAB_007ef1c0:
        piVar9 = (int *)folly::dynamic::operator[]();
        if (*piVar9 != 2) {
          folly::dynamic::folly::dynamic::destroy(piVar9);
          *piVar9 = 2;
        }
        *(Props *)(piVar9 + 2) = PVar3;
      }
    }
    PVar3 = param_1[0x6e6];
    if ((PVar3 == (Props)0x0) || (pPVar15[0x6e6] == (Props)0x0)) {
      if ((PVar3 != (Props)0x0) != (pPVar15[0x6e6] != (Props)0x0)) {
        if (PVar3 != (Props)0x0) {
          PVar3 = param_1[0x6e5];
          goto LAB_007ef23c;
        }
        local_78[0] = 0;
        local_70 = 0;
                    /* try { // try from 007ef640 to 007ef653 has its CatchHandler @ 007ef758 */
        pdVar10 = (dynamic *)folly::dynamic::operator[]();
        folly::dynamic::operator=(pdVar10,(dynamic *)local_78);
        folly::dynamic::folly::dynamic::destroy(local_78);
      }
    }
    else {
      PVar3 = param_1[0x6e5];
      if (PVar3 != pPVar15[0x6e5]) {
LAB_007ef23c:
        piVar9 = (int *)folly::dynamic::operator[]();
        if (*piVar9 != 2) {
          folly::dynamic::folly::dynamic::destroy(piVar9);
          *piVar9 = 2;
        }
        *(Props *)(piVar9 + 2) = PVar3;
      }
    }
    iVar8 = *(int *)(param_1 + 0x6e8);
    iVar12 = *(int *)(pPVar15 + 0x6e8);
    if (iVar8 != iVar12) {
      if (iVar8 == 2) {
        puVar11 = local_9c + 4;
        local_9c[8] = 100;
        uVar14 = 0xc;
        iVar12 = 0x6e65;
        uVar16 = 0x646968;
      }
      else if (iVar8 == 1) {
        puVar11 = local_9c + 8;
        uVar14 = 6;
        uVar16 = 0x746f64;
      }
      else {
        if (iVar8 != 0) {
          if (*(long *)(lVar5 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007ef738 to 007ef73b has its CatchHandler @ 007ef768 */
            abort();
          }
          goto LAB_007ef7c4;
        }
        local_9c[8] = 0x72;
        puVar11 = local_9c;
        uVar14 = 0x10;
        local_9c[4] = 0x6d;
        iVar12 = 0x616e;
        uVar16 = 0x657375;
      }
      *puVar11 = 0;
      local_78[0] = 6;
      local_70._0_4_ = (uVar16 >> 0x10) << 0x18;
      local_70._0_5_ = (uint5)(uint)local_70;
      local_70 = CONCAT17(local_9c[4],CONCAT25((short)iVar12,(uint5)local_70));
      uVar6 = local_70;
      local_70._0_3_ = CONCAT21((short)uVar16,uVar14);
      uVar7 = local_70;
      local_70._5_3_ = SUB83(uVar6,5);
      local_70._0_4_ = (uint)uVar7;
      local_70._0_5_ = CONCAT14(local_9c[8],(uint)local_70);
      uStack_68._0_2_ = CONCAT11(local_9c[0],0x65);
      local_60 = (void *)0x0;
                    /* try { // try from 007ef334 to 007ef347 has its CatchHandler @ 007ef770 */
      pdVar10 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar10,(dynamic *)local_78);
      folly::dynamic::folly::dynamic::destroy(local_78);
    }
    PVar3 = param_1[0x6ed];
    if ((PVar3 == (Props)0x0) || (pPVar15[0x6ed] == (Props)0x0)) {
      if ((PVar3 != (Props)0x0) != (pPVar15[0x6ed] != (Props)0x0)) {
        if (PVar3 != (Props)0x0) {
          PVar3 = param_1[0x6ec];
          goto LAB_007ef39c;
        }
        local_78[0] = 0;
        local_70 = 0;
                    /* try { // try from 007ef670 to 007ef683 has its CatchHandler @ 007ef754 */
        pdVar10 = (dynamic *)folly::dynamic::operator[]();
        folly::dynamic::operator=(pdVar10,(dynamic *)local_78);
        folly::dynamic::folly::dynamic::destroy(local_78);
      }
    }
    else {
      PVar3 = param_1[0x6ec];
      if (PVar3 != pPVar15[0x6ec]) {
LAB_007ef39c:
                    /* try { // try from 007ef39c to 007ef42b has its CatchHandler @ 007ef7a0 */
        piVar9 = (int *)folly::dynamic::operator[]();
        if (*piVar9 != 2) {
          folly::dynamic::folly::dynamic::destroy(piVar9);
          *piVar9 = 2;
        }
        *(Props *)(piVar9 + 2) = PVar3;
      }
    }
    PVar3 = param_1[0x6f4];
    if ((PVar3 == (Props)0x0) || (pPVar15[0x6f4] == (Props)0x0)) {
      if ((PVar3 != (Props)0x0) != (pPVar15[0x6f4] != (Props)0x0)) {
        if (PVar3 != (Props)0x0) {
          iVar8 = *(int *)(param_1 + 0x6f0);
          goto LAB_007ef418;
        }
        local_78[0] = 0;
        local_70 = 0;
                    /* try { // try from 007ef6a0 to 007ef6b3 has its CatchHandler @ 007ef750 */
        pdVar10 = (dynamic *)folly::dynamic::operator[]();
        folly::dynamic::operator=(pdVar10,(dynamic *)local_78);
        folly::dynamic::folly::dynamic::destroy(local_78);
      }
    }
    else {
      iVar8 = *(int *)(param_1 + 0x6f0);
      if (iVar8 != *(int *)(pPVar15 + 0x6f0)) {
LAB_007ef418:
        piVar9 = (int *)folly::dynamic::operator[]();
        if (*piVar9 != 4) {
          folly::dynamic::folly::dynamic::destroy(piVar9);
          *piVar9 = 4;
        }
        *(long *)(piVar9 + 2) = (long)iVar8;
      }
    }
    PVar3 = param_1[0x710];
    if ((PVar3 == (Props)0x0) || (pPVar15[0x710] == (Props)0x0)) {
      if ((PVar3 != (Props)0x0) != (pPVar15[0x710] != (Props)0x0)) {
LAB_007ef4f4:
        if (PVar3 == (Props)0x0) {
          local_78[0] = 0;
          local_70 = 0;
                    /* try { // try from 007ef5b8 to 007ef5cb has its CatchHandler @ 007ef764 */
          pdVar10 = (dynamic *)folly::dynamic::operator[]();
          folly::dynamic::operator=(pdVar10,(dynamic *)local_78);
          goto LAB_007ef118;
        }
        PVar17 = param_1[0x6f8];
        goto LAB_007ef50c;
      }
    }
    else {
      PVar17 = param_1[0x6f8];
      PVar4 = pPVar15[0x6f8];
      uVar13 = (ulong)((byte)PVar17 >> 1);
      sVar1 = uVar13;
      if (((byte)PVar17 & 1) != 0) {
        sVar1 = *(size_t *)(param_1 + 0x700);
      }
      sVar2 = (ulong)((byte)PVar4 >> 1);
      if (((byte)PVar4 & 1) != 0) {
        sVar2 = *(size_t *)(pPVar15 + 0x700);
      }
      if (sVar1 == sVar2) {
        __s2 = pPVar15 + 0x6f9;
        if (((byte)PVar4 & 1) != 0) {
          __s2 = *(Props **)(pPVar15 + 0x708);
        }
        if (((byte)PVar17 & 1) == 0) {
          if (1 < (byte)PVar17) {
            pPVar15 = param_1 + 0x6f9;
            do {
              if (*pPVar15 != *__s2) goto LAB_007ef4f4;
              uVar13 = uVar13 - 1;
              pPVar15 = pPVar15 + 1;
              __s2 = __s2 + 1;
            } while (uVar13 != 0);
          }
        }
        else {
          iVar8 = memcmp(*(void **)(param_1 + 0x708),__s2,*(size_t *)(param_1 + 0x700));
          if (iVar8 != 0) goto LAB_007ef50c;
        }
      }
      else {
LAB_007ef50c:
        if (((byte)PVar17 & 1) == 0) {
          uStack_88 = *(undefined8 *)(param_1 + 0x700);
          local_90 = *(ulong *)(param_1 + 0x6f8);
          local_80 = *(void **)(param_1 + 0x708);
        }
        else {
                    /* try { // try from 007ef52c to 007ef533 has its CatchHandler @ 007ef76c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_90,*(char **)(param_1 + 0x708),*(ulong *)(param_1 + 0x700));
        }
        local_78[0] = 6;
        uStack_68 = uStack_88;
        local_70 = local_90;
        local_60 = local_80;
        local_90 = 0;
        uStack_88 = 0;
        local_80 = (void *)0x0;
                    /* try { // try from 007ef554 to 007ef567 has its CatchHandler @ 007ef780 */
        pdVar10 = (dynamic *)folly::dynamic::operator[]();
        folly::dynamic::operator=(pdVar10,(dynamic *)local_78);
        folly::dynamic::folly::dynamic::destroy(local_78);
        if ((local_90 & 1) != 0) {
          operator_delete(local_80);
        }
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
LAB_007ef7c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ef7c8  FUN_007ef7c8 =====

void FUN_007ef7c8(void)

{
  FUN_00788b10(&DAT_009ab678,PTR_PTR_0099df40 + 0x10);
  DAT_009abc54 = 0;
  DAT_009abc58 = 0;
  DAT_009abcb8 = 0;
  DAT_009abcc0 = 0;
  DAT_009abd20 = 0;
  DAT_009abd30 = 0;
  DAT_009abd34 = 0;
  DAT_009abd38 = 0;
  DAT_009abd3c = 0;
  DAT_009abd40 = 0;
  DAT_009abd44 = 0;
  DAT_009abd48 = 0;
  DAT_009abd4c = 0;
  DAT_009abd50 = 0;
  DAT_009abd54 = 0;
  DAT_009abd28 = 0;
  DAT_009abd2c = 0;
  DAT_009abd60 = 0;
  DAT_009ab678 = PTR_vtable_0099df38 + 0x20;
  DAT_009abd64 = 0;
  DAT_009abd68 = 0;
  DAT_009abd6c = 0;
  DAT_009abd70 = 0;
  DAT_009abd88 = 0;
  uRam00000000009abd5c = 0;
  DAT_009abd58 = 0;
  return;
}


// ===== 007ef874  FUN_007ef874 =====

void FUN_007ef874(long param_1)

{
  if ((*(char *)(param_1 + 0x710) != '\0') && ((*(byte *)(param_1 + 0x6f8) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x708));
  }
  FUN_0078917c(param_1,PTR_PTR_0099df40 + 8);
  return;
}


// ===== 007ef8bc  facebook::react::ClipViewProps::ClipViewProps =====

/* facebook::react::ClipViewProps::ClipViewProps(facebook::react::PropsParserContext const&,
   facebook::react::ClipViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::ClipViewProps::ClipViewProps
          (ClipViewProps *this,PropsParserContext *param_1,ClipViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  byte *pbVar2;
  long *plVar3;
  function *in_x4;
  long lVar4;
  byte *pbVar5;
  undefined1 local_90;
  undefined7 uStack_8f;
  byte *local_88;
  char local_78;
  long *local_70;
  long local_58;
  
  plVar3 = (long *)&local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007ef8fc to 007ef90b has its CatchHandler @ 007efa0c */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if (local_70 == (long *)&local_90) {
    lVar4 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007ef938;
    lVar4 = 5;
    plVar3 = local_70;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007ef938:
  local_90 = 0;
  local_78 = '\0';
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 007ef948 to 007ef96f has its CatchHandler @ 007ef9f0 */
  FUN_007efa5c(this + 0x6e0,param_2);
  if ((local_78 != '\0') && (pbVar2 = (byte *)CONCAT71(uStack_8f,local_90), pbVar2 != (byte *)0x0))
  {
    pbVar5 = pbVar2;
    if (local_88 != pbVar2) {
      do {
        pbVar5 = local_88 + -0x48;
        if ((*pbVar5 & 1) != 0) {
          operator_delete(*(void **)(local_88 + -0x38));
        }
        local_88 = pbVar5;
      } while (pbVar5 != pbVar2);
      pbVar5 = (byte *)CONCAT71(uStack_8f,local_90);
    }
    local_88 = pbVar2;
    operator_delete(pbVar5);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 007efa5c  FUN_007efa5c =====

void FUN_007efa5c(undefined8 *param_1,undefined8 param_2,char *param_3,char *param_4,long *param_5,
                 undefined8 param_6,char *param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  lVar3 = facebook::react::RawProps::at(param_3,param_4,param_7);
  if (lVar3 == 0) {
    lVar3 = param_5[3];
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    if ((char)lVar3 != '\0') {
      lVar3 = *param_5;
      lVar1 = param_5[1];
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
                    /* try { // try from 007efaec to 007efaf3 has its CatchHandler @ 007efc9c */
      FUN_008170a0(param_1,lVar3,lVar1,(lVar1 - lVar3 >> 3) * -0x71c71c71c71c71c7);
      *(undefined1 *)(param_1 + 3) = 1;
    }
  }
  else {
    uVar4 = FUN_00807970();
    if ((uVar4 & 1) == 0) {
      if (*(long *)(lVar2 + 0x28) == lVar5) {
        FUN_00816560(param_1,param_6);
        return;
      }
      goto LAB_007efcc0;
    }
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
                    /* try { // try from 007efb3c to 007efb47 has its CatchHandler @ 007efb80 */
    FUN_008165d8(lVar3,param_1);
  }
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return;
  }
LAB_007efcc0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007efcc4  FUN_007efcc4 =====

void FUN_007efcc4(undefined8 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if ((*(char *)(param_1 + 3) != '\0') && (pbVar2 = (byte *)*param_1, pbVar2 != (byte *)0x0)) {
    pbVar1 = (byte *)param_1[1];
    pbVar3 = pbVar2;
    if (pbVar1 != pbVar2) {
      do {
        pbVar3 = pbVar1 + -0x48;
        if ((*pbVar3 & 1) != 0) {
          operator_delete(*(void **)(pbVar1 + -0x38));
        }
        pbVar1 = pbVar3;
      } while (pbVar3 != pbVar2);
      pbVar3 = (byte *)*param_1;
    }
    param_1[1] = pbVar2;
    operator_delete(pbVar3);
    return;
  }
  return;
}


// ===== 007efd48  facebook::react::ClipViewProps::ClipViewProps =====

/* facebook::react::ClipViewProps::ClipViewProps(facebook::react::PropsParserContext const&,
   facebook::react::ClipViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::ClipViewProps::ClipViewProps
          (ClipViewProps *this,PropsParserContext *param_1,ClipViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  byte *pbVar2;
  long *plVar3;
  long lVar4;
  byte *pbVar5;
  long local_90;
  byte *local_88;
  char local_78;
  long *local_70;
  long local_58;
  
  plVar3 = &local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007efd84 to 007efda7 has its CatchHandler @ 007efeb0 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099df58 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if (local_70 == &local_90) {
    lVar4 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007efdd4;
    lVar4 = 5;
    plVar3 = local_70;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007efdd4:
  local_90._0_1_ = 0;
  local_78 = '\0';
  *(undefined **)this = PTR_vtable_0099df50 + 0x20;
                    /* try { // try from 007efdec to 007efe13 has its CatchHandler @ 007efe94 */
  FUN_007efa5c(this + 0x6e0,param_1,param_3,"cutouts",param_2 + 0x6e0,&local_90,0,0);
  if ((local_78 != '\0') &&
     (pbVar2 = (byte *)CONCAT71(local_90._1_7_,(undefined1)local_90), pbVar2 != (byte *)0x0)) {
    pbVar5 = pbVar2;
    if (local_88 != pbVar2) {
      do {
        pbVar5 = local_88 + -0x48;
        if ((*pbVar5 & 1) != 0) {
          operator_delete(*(void **)(local_88 + -0x38));
        }
        local_88 = pbVar5;
      } while (pbVar5 != pbVar2);
      pbVar5 = (byte *)CONCAT71(local_90._1_7_,(undefined1)local_90);
    }
    local_88 = pbVar2;
    operator_delete(pbVar5);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 007eff00  facebook::react::ClipViewProps::getDiffPropsImplementationTarget =====

/* facebook::react::ClipViewProps::getDiffPropsImplementationTarget() const */

char * facebook::react::ClipViewProps::getDiffPropsImplementationTarget(void)

{
  return "ClipView";
}


// ===== 007eff0c  facebook::react::ClipViewProps::getDiffProps =====

/* facebook::react::ClipViewProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::ClipViewProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  size_t sVar2;
  size_t sVar3;
  Props PVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  bool bVar8;
  int iVar9;
  dynamic *pdVar10;
  int *piVar11;
  Props *in_x1;
  undefined4 *in_x8;
  ulong uVar12;
  byte *__s2;
  byte *pbVar13;
  ulong *puVar14;
  ulong *puVar15;
  float fVar16;
  ulong local_130;
  ulong uStack_128;
  void *local_120;
  int local_110 [2];
  undefined8 local_108;
  dynamic *local_100;
  dynamic *pdStack_f8;
  undefined4 local_e0 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 local_b0 [2];
  ulong local_a8;
  ulong uStack_a0;
  void *local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  
  lVar7 = tpidr_el0;
  local_80 = *(long *)(lVar7 + 0x28);
  if (((DAT_009ac498 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_009ac498), iVar9 != 0)) {
    memset(&DAT_009abd98,0,0x700);
                    /* try { // try from 007f05d0 to 007f05d3 has its CatchHandler @ 007f0608 */
    FUN_007f069c();
    __cxa_atexit(FUN_007f072c,&DAT_009abd98,&PTR_LOOP_008d5d30);
    __cxa_guard_release(&DAT_009ac498);
  }
  pPVar1 = (Props *)&DAT_009abd98;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    local_90 = 0;
    local_b0[0] = 5;
    uStack_a0 = 0;
    local_98 = (void *)0x0;
    local_88 = 0x3f800000;
    *in_x8 = 5;
    local_a8 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
LAB_007f0540:
    folly::dynamic::folly::dynamic::destroy(local_b0);
  }
  else {
    ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    PVar4 = param_1[0x6f8];
    if ((PVar4 == (Props)0x0) || (pPVar1[0x6f8] == (Props)0x0)) {
      if ((PVar4 != (Props)0x0) == (pPVar1[0x6f8] != (Props)0x0)) goto LAB_007f0548;
LAB_007f01d8:
      if (PVar4 == (Props)0x0) {
        local_b0[0] = 0;
        local_a8 = 0;
                    /* try { // try from 007f0524 to 007f0537 has its CatchHandler @ 007f061c */
        pdVar10 = (dynamic *)folly::dynamic::operator[]();
        folly::dynamic::operator=(pdVar10,(dynamic *)local_b0);
        goto LAB_007f0540;
      }
      puVar14 = *(ulong **)(param_1 + 0x6e0);
      puVar15 = *(ulong **)(param_1 + 0x6e8);
    }
    else {
      puVar15 = *(ulong **)(param_1 + 0x6e8);
      puVar14 = *(ulong **)(param_1 + 0x6e0);
      pbVar13 = *(byte **)(pPVar1 + 0x6e0);
      if ((long)puVar15 - (long)puVar14 == *(long *)(pPVar1 + 0x6e8) - (long)pbVar13) {
        if (puVar14 == puVar15) goto LAB_007f0548;
        do {
          bVar5 = (byte)*puVar14;
          bVar6 = *pbVar13;
          sVar2 = (ulong)(bVar5 >> 1);
          if ((bVar5 & 1) != 0) {
            sVar2 = puVar14[1];
          }
          sVar3 = (ulong)(bVar6 >> 1);
          if ((bVar6 & 1) != 0) {
            sVar3 = *(size_t *)(pbVar13 + 8);
          }
          if (sVar2 != sVar3) goto LAB_007f01d8;
          __s2 = *(byte **)(pbVar13 + 0x10);
          if ((bVar6 & 1) == 0) {
            __s2 = pbVar13 + 1;
          }
          if ((bVar5 & 1) == 0) {
            if (1 < bVar5) {
              uVar12 = 0;
              do {
                if (*(byte *)((long)puVar14 + uVar12 + 1) != __s2[uVar12]) goto LAB_007f01d8;
                uVar12 = uVar12 + 1;
              } while (bVar5 >> 1 != uVar12);
            }
          }
          else {
            iVar9 = memcmp((void *)puVar14[2],__s2,puVar14[1]);
            if (iVar9 != 0) goto LAB_007f01d8;
          }
          if ((*(float *)(puVar14 + 3) != *(float *)(pbVar13 + 0x18)) ||
             (*(float *)((long)puVar14 + 0x1c) != *(float *)(pbVar13 + 0x1c))) goto LAB_007f01d8;
          if ((*(byte *)((long)puVar14 + 0x24) == 0) || (pbVar13[0x24] == 0)) {
            if ((*(byte *)((long)puVar14 + 0x24) != 0) != (pbVar13[0x24] != 0)) goto LAB_007f01d8;
          }
          else if (*(float *)(puVar14 + 4) != *(float *)(pbVar13 + 0x20)) goto LAB_007f01d8;
          if ((*(byte *)((long)puVar14 + 0x2c) == 0) || (pbVar13[0x2c] == 0)) {
            if ((*(byte *)((long)puVar14 + 0x2c) != 0) != (pbVar13[0x2c] != 0)) goto LAB_007f01d8;
          }
          else if (*(float *)(puVar14 + 5) != *(float *)(pbVar13 + 0x28)) goto LAB_007f01d8;
          if ((*(byte *)((long)puVar14 + 0x34) == 0) || (pbVar13[0x34] == 0)) {
            if ((*(byte *)((long)puVar14 + 0x34) != 0) != (pbVar13[0x34] != 0)) goto LAB_007f01d8;
          }
          else if (*(float *)(puVar14 + 6) != *(float *)(pbVar13 + 0x30)) goto LAB_007f01d8;
          if ((*(byte *)((long)puVar14 + 0x3c) == 0) || (pbVar13[0x3c] == 0)) {
            if ((*(byte *)((long)puVar14 + 0x3c) != 0) != (pbVar13[0x3c] != 0)) goto LAB_007f01d8;
          }
          else if (*(float *)(puVar14 + 7) != *(float *)(pbVar13 + 0x38)) goto LAB_007f01d8;
          bVar8 = (*(byte *)((long)puVar14 + 0x44) != 0) == (pbVar13[0x44] != 0);
          if ((*(byte *)((long)puVar14 + 0x44) != 0) && (pbVar13[0x44] != 0)) {
            bVar8 = *(float *)(puVar14 + 8) == *(float *)(pbVar13 + 0x40);
          }
          if (!bVar8) break;
          puVar14 = puVar14 + 9;
          pbVar13 = pbVar13 + 0x48;
        } while (puVar14 != puVar15);
        if (bVar8) goto LAB_007f0548;
        goto LAB_007f01d8;
      }
    }
    local_100 = (dynamic *)0x0;
    pdStack_f8 = (dynamic *)0x0;
    local_110[0] = 1;
    local_108 = 0;
    for (; puVar14 != puVar15; puVar14 = puVar14 + 9) {
      local_b0[0] = 5;
      local_90 = 0;
      local_98 = (void *)0x0;
      local_88 = 0x3f800000;
      local_a8 = 0;
      uStack_a0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_e0[0] = 5;
      local_b8 = 0x3f800000;
      folly::dynamic::folly::dynamic::destroy(local_b0);
      if ((*puVar14 & 1) == 0) {
        local_120 = (void *)puVar14[2];
        uStack_128 = puVar14[1];
        local_130 = *puVar14;
      }
      else {
                    /* try { // try from 007f02a0 to 007f02a7 has its CatchHandler @ 007f0634 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_130,(char *)puVar14[2],puVar14[1]);
      }
      uStack_a0 = uStack_128;
      local_a8 = local_130;
      local_130 = 0;
      uStack_128 = 0;
      local_b0[0] = 6;
      local_98 = local_120;
      local_120 = (void *)0x0;
                    /* try { // try from 007f02c8 to 007f02db has its CatchHandler @ 007f063c */
      pdVar10 = (dynamic *)folly::dynamic::operator[](local_e0,"shape","");
      folly::dynamic::operator=(pdVar10,(dynamic *)local_b0);
      folly::dynamic::folly::dynamic::destroy(local_b0);
      if ((local_130 & 1) != 0) {
        operator_delete(local_120);
      }
      fVar16 = *(float *)(puVar14 + 3);
                    /* try { // try from 007f0304 to 007f049f has its CatchHandler @ 007f0660 */
      piVar11 = (int *)folly::dynamic::operator[](local_e0,&DAT_0036adfd,&DAT_0036adfe);
      if (*piVar11 != 3) {
        folly::dynamic::folly::dynamic::destroy(piVar11);
        *piVar11 = 3;
      }
      *(double *)(piVar11 + 2) = (double)fVar16;
      fVar16 = *(float *)((long)puVar14 + 0x1c);
      piVar11 = (int *)folly::dynamic::operator[](local_e0,&DAT_0036ecbd,&DAT_0036ecbe);
      if (*piVar11 != 3) {
        folly::dynamic::folly::dynamic::destroy(piVar11);
        *piVar11 = 3;
      }
      *(double *)(piVar11 + 2) = (double)fVar16;
      if (*(byte *)((long)puVar14 + 0x24) != 0) {
        fVar16 = *(float *)(puVar14 + 4);
        piVar11 = (int *)folly::dynamic::operator[](local_e0,&DAT_0036ff78,&DAT_0036ff7c);
        if (*piVar11 != 3) {
          folly::dynamic::folly::dynamic::destroy(piVar11);
          *piVar11 = 3;
        }
        *(double *)(piVar11 + 2) = (double)fVar16;
      }
      if (*(byte *)((long)puVar14 + 0x2c) != 0) {
        fVar16 = *(float *)(puVar14 + 5);
        piVar11 = (int *)folly::dynamic::operator[](local_e0,"width","");
        if (*piVar11 != 3) {
          folly::dynamic::folly::dynamic::destroy(piVar11);
          *piVar11 = 3;
        }
        *(double *)(piVar11 + 2) = (double)fVar16;
      }
      if (*(byte *)((long)puVar14 + 0x34) != 0) {
        fVar16 = *(float *)(puVar14 + 6);
        piVar11 = (int *)folly::dynamic::operator[](local_e0,"height","");
        if (*piVar11 != 3) {
          folly::dynamic::folly::dynamic::destroy(piVar11);
          *piVar11 = 3;
        }
        *(double *)(piVar11 + 2) = (double)fVar16;
      }
      if (*(byte *)((long)puVar14 + 0x3c) != 0) {
        fVar16 = *(float *)(puVar14 + 7);
        piVar11 = (int *)folly::dynamic::operator[](local_e0,"cornerRadius","");
        if (*piVar11 != 3) {
          folly::dynamic::folly::dynamic::destroy(piVar11);
          *piVar11 = 3;
        }
        *(double *)(piVar11 + 2) = (double)fVar16;
      }
      if (*(byte *)((long)puVar14 + 0x44) != 0) {
        fVar16 = *(float *)(puVar14 + 8);
        piVar11 = (int *)folly::dynamic::operator[](local_e0,"rotatio","");
        if (*piVar11 != 3) {
          folly::dynamic::folly::dynamic::destroy(piVar11);
          *piVar11 = 3;
        }
        *(double *)(piVar11 + 2) = (double)fVar16;
      }
      pdVar10 = local_100;
      if (local_110[0] != 1) {
        if (*(long *)(lVar7 + 0x28) == local_80) {
                    /* try { // try from 007f0590 to 007f059f has its CatchHandler @ 007f065c */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099e338);
        }
        goto LAB_007f0698;
      }
      if (local_100 < pdStack_f8) {
        folly::dynamic::dynamic(local_100,(dynamic *)local_e0);
        local_100 = pdVar10 + 0x30;
      }
      else {
                    /* try { // try from 007f04dc to 007f04eb has its CatchHandler @ 007f0638 */
        local_100 = (dynamic *)FUN_00801fe4(&local_108,local_e0);
      }
      folly::dynamic::folly::dynamic::destroy(local_e0);
    }
                    /* try { // try from 007f04f0 to 007f0503 has its CatchHandler @ 007f062c */
    pdVar10 = (dynamic *)folly::dynamic::operator[](in_x8,"cutouts","");
    folly::dynamic::operator=(pdVar10,(dynamic *)local_110);
    folly::dynamic::folly::dynamic::destroy(local_110);
  }
LAB_007f0548:
  if (*(long *)(lVar7 + 0x28) == local_80) {
    return;
  }
LAB_007f0698:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007f069c  FUN_007f069c =====

void FUN_007f069c(void)

{
  FUN_00788b10(&DAT_009abd98,PTR_PTR_0099df58 + 0x10);
  DAT_009ac374 = 0;
  DAT_009ac378 = 0;
  DAT_009ac3d8 = 0;
  DAT_009ac3e0 = 0;
  DAT_009ac440 = 0;
  DAT_009ac450 = 0;
  DAT_009ac454 = 0;
  DAT_009ac458 = 0;
  DAT_009ac45c = 0;
  DAT_009ac460 = 0;
  DAT_009ac464 = 0;
  DAT_009ac468 = 0;
  DAT_009ac46c = 0;
  DAT_009ac470 = 0;
  DAT_009ac474 = 0;
  DAT_009ac448 = 0;
  DAT_009ac44c = 0;
  DAT_009ac478 = 0;
  DAT_009abd98 = PTR_vtable_0099df50 + 0x20;
  DAT_009ac490 = 0;
  return;
}


// ===== 007f072c  FUN_007f072c =====

void FUN_007f072c(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if ((*(char *)(param_1 + 0x6f8) != '\0') &&
     (pbVar2 = *(byte **)(param_1 + 0x6e0), pbVar2 != (byte *)0x0)) {
    pbVar1 = *(byte **)(param_1 + 0x6e8);
    pbVar3 = pbVar2;
    if (pbVar1 != pbVar2) {
      do {
        pbVar3 = pbVar1 + -0x48;
        if ((*pbVar3 & 1) != 0) {
          operator_delete(*(void **)(pbVar1 + -0x38));
        }
        pbVar1 = pbVar3;
      } while (pbVar3 != pbVar2);
      pbVar3 = *(byte **)(param_1 + 0x6e0);
    }
    *(byte **)(param_1 + 0x6e8) = pbVar2;
    operator_delete(pbVar3);
  }
  FUN_0078917c(param_1,PTR_PTR_0099df58 + 8);
  return;
}


// ===== 007f07b4  facebook::react::DiscordGestureHandlerRootViewProps::DiscordGestureHandlerRootViewProps =====

/* facebook::react::DiscordGestureHandlerRootViewProps::DiscordGestureHandlerRootViewProps(facebook::react::PropsParserContext
   const&, facebook::react::DiscordGestureHandlerRootViewProps const&, facebook::react::RawProps
   const&) */

void __thiscall
facebook::react::DiscordGestureHandlerRootViewProps::DiscordGestureHandlerRootViewProps
          (DiscordGestureHandlerRootViewProps *this,PropsParserContext *param_1,
          DiscordGestureHandlerRootViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  long *plVar2;
  function *in_x4;
  long lVar3;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar2 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (long *)0x0;
                    /* try { // try from 007f07e0 to 007f07ef has its CatchHandler @ 007f0848 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if (local_50 == local_70) {
    lVar3 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007f081c;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007f081c:
  *(undefined8 *)this = *(undefined8 *)param_1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007f0898  facebook::react::DiscordGestureHandlerRootViewProps::DiscordGestureHandlerRootViewProps =====

/* facebook::react::DiscordGestureHandlerRootViewProps::DiscordGestureHandlerRootViewProps(facebook::react::PropsParserContext
   const&, facebook::react::DiscordGestureHandlerRootViewProps const&, facebook::react::RawProps
   const&) */

void __thiscall
facebook::react::DiscordGestureHandlerRootViewProps::DiscordGestureHandlerRootViewProps
          (DiscordGestureHandlerRootViewProps *this,PropsParserContext *param_1,
          DiscordGestureHandlerRootViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar2 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (long *)0x0;
                    /* try { // try from 007f08cc to 007f08e3 has its CatchHandler @ 007f0944 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099df70 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if (local_50 == local_70) {
    lVar3 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007f0910;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007f0910:
  *(undefined **)this = PTR_vtable_0099df68 + 0x20;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007f0994  facebook::react::DiscordGestureHandlerRootViewProps::getDiffPropsImplementationTarget =====

/* facebook::react::DiscordGestureHandlerRootViewProps::getDiffPropsImplementationTarget() const */

char * facebook::react::DiscordGestureHandlerRootViewProps::getDiffPropsImplementationTarget(void)

{
  return "DiscordGestureHandlerRootView";
}


// ===== 007f09a0  facebook::react::DiscordGestureHandlerRootViewProps::getDiffProps =====

/* facebook::react::DiscordGestureHandlerRootViewProps::getDiffProps(facebook::react::Props const*)
   const */

void facebook::react::DiscordGestureHandlerRootViewProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  long lVar2;
  int iVar3;
  Props *in_x1;
  undefined4 *in_x8;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if ((DAT_009acb80 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_009acb80);
    if (iVar3 != 0) {
      memset(&DAT_009ac4a0,0,0x6e0);
                    /* try { // try from 007f0a94 to 007f0a97 has its CatchHandler @ 007f0acc */
      FUN_007f0af8();
      __cxa_atexit(FUN_007f0b80,&DAT_009ac4a0,&PTR_LOOP_008d5d30);
      __cxa_guard_release(&DAT_009acb80);
    }
  }
  pPVar1 = (Props *)&DAT_009ac4a0;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    local_38 = 0;
    local_58[0] = 5;
    local_48 = 0;
    uStack_40 = 0;
    local_30 = 0x3f800000;
    *in_x8 = 5;
    local_50 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_58);
    if (*(long *)(lVar2 + 0x28) == local_28) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_28) {
    ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007f0af8  FUN_007f0af8 =====

void FUN_007f0af8(void)

{
  FUN_00788b10(&DAT_009ac4a0,PTR_PTR_0099df70 + 0x10);
  DAT_009aca7c = 0;
  DAT_009aca80 = 0;
  DAT_009acae0 = 0;
  DAT_009acae8 = 0;
  DAT_009acb48 = 0;
  DAT_009acb58 = 0;
  DAT_009acb5c = 0;
  DAT_009acb60 = 0;
  DAT_009acb64 = 0;
  DAT_009acb68 = 0;
  DAT_009acb6c = 0;
  DAT_009acb70 = 0;
  DAT_009acb74 = 0;
  DAT_009acb78 = 0;
  DAT_009acb7c = 0;
  DAT_009acb50 = 0;
  DAT_009acb54 = 0;
  DAT_009ac4a0 = PTR_vtable_0099df68 + 0x20;
  return;
}


// ===== 007f0b80  FUN_007f0b80 =====

void FUN_007f0b80(undefined8 param_1)

{
  FUN_0078917c(param_1,PTR_PTR_0099df70 + 8);
  return;
}


// ===== 007f0b90  facebook::react::EmojiPickerViewProps::EmojiPickerViewProps =====

/* facebook::react::EmojiPickerViewProps::EmojiPickerViewProps(facebook::react::PropsParserContext
   const&, facebook::react::EmojiPickerViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::EmojiPickerViewProps::EmojiPickerViewProps
          (EmojiPickerViewProps *this,PropsParserContext *param_1,EmojiPickerViewProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  ulong *puVar3;
  function *in_x4;
  long lVar4;
  undefined4 uVar5;
  undefined1 auVar6 [12];
  ulong local_a0;
  ulong local_98;
  undefined8 local_90;
  undefined4 local_88;
  long *local_80;
  undefined8 local_78;
  undefined7 uStack_70;
  undefined4 local_69;
  long local_58;
  
  puVar3 = &local_a0;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_80 = (long *)0x0;
                    /* try { // try from 007f0bd0 to 007f0bdf has its CatchHandler @ 007f0dcc */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if ((ulong *)local_80 == &local_a0) {
    lVar4 = 4;
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_007f0c0c;
    lVar4 = 5;
    puVar3 = (ulong *)local_80;
  }
  (**(code **)(*puVar3 + lVar4 * 8))();
LAB_007f0c0c:
  local_a0 = (local_a0 >> 0x10 & 0xffff) << 0x10;
  *(undefined8 *)this = *(undefined8 *)param_1;
  local_98 = local_98 & 0xffffffffffffff00;
                    /* try { // try from 007f0c20 to 007f0c2f has its CatchHandler @ 007f0da0 */
  auVar6 = FUN_007f0e04();
  *(undefined1 (*) [12])(this + 0x6e0) = auVar6;
  local_a0 = local_a0 & 0xffffffff00000000;
                    /* try { // try from 007f0c3c to 007f0c5f has its CatchHandler @ 007f0d9c */
  uVar5 = FUN_007f0fe0(param_2);
  *(undefined4 *)(this + 0x6ec) = uVar5;
  local_a0 = local_a0 & 0xffffffff00000000;
                    /* try { // try from 007f0c68 to 007f0c8b has its CatchHandler @ 007f0d98 */
  uVar5 = FUN_007f0fe0(param_2);
  *(undefined4 *)(this + 0x6f0) = uVar5;
  local_a0 = local_a0 & 0xffffffffffffff00;
                    /* try { // try from 007f0c94 to 007f0cb7 has its CatchHandler @ 007f0d94 */
  bVar2 = FUN_007ea510(param_2);
  local_a0 = 0;
  local_98 = 0;
  this[0x6f4] = (EmojiPickerViewProps)(bVar2 & 1);
  local_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = (long *)0x0;
  local_69 = 0;
                    /* try { // try from 007f0cd8 to 007f0cef has its CatchHandler @ 007f0d84 */
  FUN_007f11a8(this + 0x6f8,param_2);
  local_a0 = local_a0 & 0xffffffff00000000;
                    /* try { // try from 007f0cf4 to 007f0d17 has its CatchHandler @ 007f0d78 */
  uVar5 = FUN_007ece34(param_2);
  *(undefined4 *)(this + 0x738) = uVar5;
  local_a0 = local_a0 & 0xffffffff00000000;
                    /* try { // try from 007f0d20 to 007f0d43 has its CatchHandler @ 007f0d74 */
  uVar5 = FUN_007ece34(param_2);
  *(undefined4 *)(this + 0x73c) = uVar5;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007f0e04  FUN_007f0e04 =====

void FUN_007f0e04(char *param_1,ulong *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong local_48;
  uint local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_1,"config",(char *)0x0);
  if (lVar2 == 0) {
    local_48 = *param_2;
    local_40 = (uint)param_2[1];
  }
  else {
    uVar3 = FUN_00807970();
    if ((uVar3 & 1) == 0) {
      local_48 = *param_3;
      local_40 = (uint)param_3[1];
    }
    else {
      local_48 = (local_48 >> 0x10 & 0xffff) << 0x10;
      local_40 = local_40 & 0xffffff00;
                    /* try { // try from 007f0e9c to 007f0ea7 has its CatchHandler @ 007f0eb8 */
      FUN_00817ea0(lVar2,&local_48);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_48,local_40);
  }
  return;
}


// ===== 007f0fe0  FUN_007f0fe0 =====

void FUN_007f0fe0(undefined8 param_1,char *param_2,char *param_3,undefined4 *param_4,
                 undefined4 *param_5,char *param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_2,param_3,param_6);
  if (lVar2 == 0) {
    uVar5 = *param_4;
  }
  else {
    uVar3 = FUN_00807970();
    if ((uVar3 & 1) == 0) {
      uVar5 = *param_5;
    }
    else {
                    /* try { // try from 007f1070 to 007f1077 has its CatchHandler @ 007f1084 */
      uVar5 = FUN_00809024(lVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 007f11a8  FUN_007f11a8 =====

void FUN_007f11a8(undefined8 *param_1,undefined8 param_2,char *param_3,long *param_4,void *param_5)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  void *__dest;
  ulong uVar5;
  long lVar6;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  lVar4 = facebook::react::RawProps::at(param_3,"emojiData",(char *)0x0);
  if (lVar4 == 0) {
    lVar4 = *param_4;
    lVar1 = param_4[1];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_00819eec(param_1,lVar4,lVar1,(lVar1 - lVar4 >> 4) * 0x4ec4ec4ec4ec4ec5);
    param_5 = (void *)param_4[4];
    lVar4 = param_4[5];
    lVar1 = param_4[3];
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    uVar5 = lVar4 - (long)param_5;
    *(int *)(param_1 + 3) = (int)lVar1;
    if (uVar5 != 0) {
      if ((long)uVar5 < 0) {
        if (*(long *)(lVar3 + 0x28) != lVar6) goto LAB_007f148c;
                    /* try { // try from 007f1304 to 007f1307 has its CatchHandler @ 007f1454 */
        FUN_0081a8e0();
        goto LAB_007f1308;
      }
                    /* try { // try from 007f1250 to 007f1257 has its CatchHandler @ 007f1454 */
      __dest = operator_new(uVar5);
      param_1[4] = __dest;
      param_1[5] = __dest;
      param_1[6] = (long)__dest + uVar5;
      memcpy(__dest,param_5,uVar5);
      param_1[5] = (long)__dest + uVar5;
    }
    if (*(long *)(lVar3 + 0x28) == lVar6) {
      uVar2 = *(undefined1 *)((long)param_4 + 0x3a);
      *(short *)(param_1 + 7) = (short)param_4[7];
      *(undefined1 *)((long)param_1 + 0x3a) = uVar2;
      return;
    }
  }
  else {
    uVar5 = FUN_00807970();
    if ((uVar5 & 1) != 0) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 3) = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[4] = 0;
      *(undefined4 *)((long)param_1 + 0x37) = 0;
                    /* try { // try from 007f12d0 to 007f12df has its CatchHandler @ 007f1338 */
      FUN_00818394(param_2,lVar4,param_1);
      if (*(long *)(lVar3 + 0x28) == lVar6) {
        return;
      }
      goto LAB_007f148c;
    }
LAB_007f1308:
    if (*(long *)(lVar3 + 0x28) == lVar6) {
      FUN_008182b0(param_1,param_5);
      return;
    }
  }
LAB_007f148c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007f1490  FUN_007f1490 =====

void FUN_007f1490(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = (void *)param_1[4];
  if (pvVar1 != (void *)0x0) {
    param_1[5] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)param_1[1];
    pvVar2 = pvVar1;
    if (pvVar3 != pvVar1) {
      do {
        pvVar3 = (void *)((long)pvVar3 + -0xd0);
        FUN_0079a054(pvVar3);
      } while (pvVar3 != pvVar1);
      pvVar2 = (void *)*param_1;
    }
    param_1[1] = pvVar1;
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 007f1508  facebook::react::EmojiPickerViewProps::EmojiPickerViewProps =====

/* facebook::react::EmojiPickerViewProps::EmojiPickerViewProps(facebook::react::PropsParserContext
   const&, facebook::react::EmojiPickerViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::EmojiPickerViewProps::EmojiPickerViewProps
          (EmojiPickerViewProps *this,PropsParserContext *param_1,EmojiPickerViewProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  ulong *puVar3;
  long lVar4;
  undefined4 uVar5;
  undefined1 auVar6 [12];
  ulong local_a0;
  ulong local_98;
  undefined8 local_90;
  undefined4 local_88;
  long *local_80;
  undefined8 local_78;
  undefined7 uStack_70;
  undefined4 local_69;
  long local_58;
  
  puVar3 = &local_a0;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_80 = (long *)0x0;
                    /* try { // try from 007f1544 to 007f1567 has its CatchHandler @ 007f175c */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099df88 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if ((ulong *)local_80 == &local_a0) {
    lVar4 = 4;
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_007f1594;
    lVar4 = 5;
    puVar3 = (ulong *)local_80;
  }
  (**(code **)(*puVar3 + lVar4 * 8))();
LAB_007f1594:
  local_a0 = (local_a0 >> 0x10 & 0xffff) << 0x10;
  local_98 = local_98 & 0xffffffffffffff00;
  *(undefined **)this = PTR_vtable_0099df80 + 0x20;
                    /* try { // try from 007f15b0 to 007f15bf has its CatchHandler @ 007f1730 */
  auVar6 = FUN_007f0e04(param_3,param_2 + 0x6e0,&local_a0);
  *(undefined1 (*) [12])(this + 0x6e0) = auVar6;
  local_a0 = local_a0 & 0xffffffff00000000;
                    /* try { // try from 007f15cc to 007f15ef has its CatchHandler @ 007f172c */
  uVar5 = FUN_007f0fe0(param_1,param_3,"paddingTop",param_2 + 0x6ec,&local_a0,0,0);
  *(undefined4 *)(this + 0x6ec) = uVar5;
  local_a0 = local_a0 & 0xffffffff00000000;
                    /* try { // try from 007f15f8 to 007f161b has its CatchHandler @ 007f1728 */
  uVar5 = FUN_007f0fe0(param_1,param_3,"paddingBottom",param_2 + 0x6f0,&local_a0,0,0);
  *(undefined4 *)(this + 0x6f0) = uVar5;
  local_a0 = local_a0 & 0xffffffffffffff00;
                    /* try { // try from 007f1624 to 007f1647 has its CatchHandler @ 007f1724 */
  bVar2 = FUN_007ea510(param_1,param_3,"useTier0UpsellContent",param_2 + 0x6f4,&local_a0,0,0);
  local_a0 = 0;
  local_98 = 0;
  this[0x6f4] = (EmojiPickerViewProps)(bVar2 & 1);
  local_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = (long *)0x0;
  local_69 = 0;
                    /* try { // try from 007f1668 to 007f167f has its CatchHandler @ 007f1714 */
  FUN_007f11a8(this + 0x6f8,param_1,param_3,param_2 + 0x6f8,&local_a0);
  local_a0 = local_a0 & 0xffffffff00000000;
                    /* try { // try from 007f1684 to 007f16a7 has its CatchHandler @ 007f1708 */
  uVar5 = FUN_007ece34(param_1,param_3,"emojiMargin",param_2 + 0x738,&local_a0,0,0);
  *(undefined4 *)(this + 0x738) = uVar5;
  local_a0 = local_a0 & 0xffffffff00000000;
                    /* try { // try from 007f16b0 to 007f16d3 has its CatchHandler @ 007f1704 */
  uVar5 = FUN_007ece34(param_1,param_3,"emojiSize",param_2 + 0x73c,&local_a0,0,0);
  *(undefined4 *)(this + 0x73c) = uVar5;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007f1794  facebook::react::EmojiPickerViewProps::getDiffPropsImplementationTarget =====

/* facebook::react::EmojiPickerViewProps::getDiffPropsImplementationTarget() const */

char * facebook::react::EmojiPickerViewProps::getDiffPropsImplementationTarget(void)

{
  return "EmojiPickerView";
}


// ===== 007f17a0  facebook::react::EmojiPickerViewProps::getDiffProps =====

/* facebook::react::EmojiPickerViewProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::EmojiPickerViewProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  size_t sVar2;
  void *pvVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong *puVar6;
  byte *pbVar7;
  ulong *puVar8;
  Props PVar9;
  byte bVar10;
  byte bVar11;
  undefined1 uVar12;
  long lVar13;
  int iVar14;
  int *piVar15;
  dynamic *pdVar16;
  Props *in_x1;
  size_t sVar17;
  undefined4 *in_x8;
  ulong uVar18;
  byte *pbVar19;
  int *piVar20;
  int *piVar21;
  float fVar22;
  ulong local_240;
  ulong uStack_238;
  dynamic *local_230;
  ulong local_220;
  ulong uStack_218;
  dynamic *local_210;
  ulong local_200;
  ulong uStack_1f8;
  dynamic *local_1f0;
  ulong local_1e0;
  ulong uStack_1d8;
  dynamic *local_1d0;
  ulong local_1c0;
  ulong uStack_1b8;
  dynamic *local_1b0;
  undefined4 local_1a0 [2];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  int local_170 [2];
  undefined8 local_168;
  dynamic *local_160;
  dynamic *pdStack_158;
  undefined4 local_140 [2];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  int local_110 [2];
  undefined8 local_108;
  dynamic *local_100;
  dynamic *pdStack_f8;
  undefined8 local_e0;
  ulong uStack_d8;
  dynamic *local_d0;
  dynamic *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 local_b0 [2];
  ulong local_a8;
  ulong uStack_a0;
  dynamic *local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  
  lVar13 = tpidr_el0;
  local_80 = *(long *)(lVar13 + 0x28);
  if (((DAT_009ad2c8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_009ad2c8), iVar14 != 0)) {
    memset(&DAT_009acb88,0,0x740);
                    /* try { // try from 007f2aec to 007f2aef has its CatchHandler @ 007f2b20 */
    FUN_007f2cf8();
    __cxa_atexit(FUN_007f2dc0,&DAT_009acb88,&PTR_LOOP_008d5d30);
    __cxa_guard_release(&DAT_009ad2c8);
  }
  pPVar1 = (Props *)&DAT_009acb88;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    local_90 = 0;
    local_b0[0] = 5;
    uStack_a0 = 0;
    local_98 = (dynamic *)0x0;
    local_88 = 0x3f800000;
    *in_x8 = 5;
    local_a8 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_b0);
    goto LAB_007f2a20;
  }
  ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
  if ((((param_1[0x6e0] != pPVar1[0x6e0]) || (param_1[0x6e1] != pPVar1[0x6e1])) ||
      (*(int *)(param_1 + 0x6e4) != *(int *)(pPVar1 + 0x6e4))) || (param_1[0x6e8] != pPVar1[0x6e8]))
  {
    local_90 = 0;
    local_b0[0] = 5;
    uStack_a0 = 0;
    local_98 = (dynamic *)0x0;
    local_88 = 0x3f800000;
    local_e0 = CONCAT44(local_e0._4_4_,5);
    local_a8 = 0;
    uStack_d8 = 0;
    local_d0 = (dynamic *)0x0;
    local_c8 = (dynamic *)0x0;
    uStack_c0 = 0;
    local_b8 = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_b0);
    PVar9 = param_1[0x6e0];
                    /* try { // try from 007f1884 to 007f194b has its CatchHandler @ 007f2b58 */
    piVar15 = (int *)folly::dynamic::operator[](&local_e0,"animateEmoji","");
    if (*piVar15 != 2) {
      folly::dynamic::folly::dynamic::destroy(piVar15);
      *piVar15 = 2;
    }
    *(Props *)(piVar15 + 2) = PVar9;
    PVar9 = param_1[0x6e1];
    piVar15 = (int *)folly::dynamic::operator[](&local_e0,"scrollFastOpt","");
    if (*piVar15 != 2) {
      folly::dynamic::folly::dynamic::destroy(piVar15);
      *piVar15 = 2;
    }
    *(Props *)(piVar15 + 2) = PVar9;
    iVar14 = *(int *)(param_1 + 0x6e4);
    piVar15 = (int *)folly::dynamic::operator[](&local_e0,"scrollFastVelocity","");
    if (*piVar15 != 4) {
      folly::dynamic::folly::dynamic::destroy(piVar15);
      *piVar15 = 4;
    }
    *(long *)(piVar15 + 2) = (long)iVar14;
    PVar9 = param_1[0x6e8];
    piVar15 = (int *)folly::dynamic::operator[](&local_e0,"disableAn","");
    if (*piVar15 != 2) {
      folly::dynamic::folly::dynamic::destroy(piVar15);
      *piVar15 = 2;
    }
    *(Props *)(piVar15 + 2) = PVar9;
                    /* try { // try from 007f1970 to 007f1983 has its CatchHandler @ 007f2b34 */
    pdVar16 = (dynamic *)folly::dynamic::operator[]();
    folly::dynamic::operator=(pdVar16,(dynamic *)&local_e0);
    folly::dynamic::folly::dynamic::destroy(&local_e0);
  }
  fVar22 = *(float *)(param_1 + 0x6ec);
  if ((fVar22 != *(float *)(pPVar1 + 0x6ec)) &&
     ((!NAN(fVar22) || (!NAN(*(float *)(pPVar1 + 0x6ec)))))) {
                    /* try { // try from 007f19b4 to 007f1a6f has its CatchHandler @ 007f2b50 */
    piVar15 = (int *)folly::dynamic::operator[]();
    if (*piVar15 != 3) {
      folly::dynamic::folly::dynamic::destroy(piVar15);
      *piVar15 = 3;
    }
    *(double *)(piVar15 + 2) = (double)fVar22;
  }
  fVar22 = *(float *)(param_1 + 0x6f0);
  if ((fVar22 != *(float *)(pPVar1 + 0x6f0)) &&
     ((!NAN(fVar22) || (!NAN(*(float *)(pPVar1 + 0x6f0)))))) {
    piVar15 = (int *)folly::dynamic::operator[]();
    if (*piVar15 != 3) {
      folly::dynamic::folly::dynamic::destroy(piVar15);
      *piVar15 = 3;
    }
    *(double *)(piVar15 + 2) = (double)fVar22;
  }
  PVar9 = param_1[0x6f4];
  if (PVar9 != pPVar1[0x6f4]) {
    piVar15 = (int *)folly::dynamic::operator[]();
    if (*piVar15 != 2) {
      folly::dynamic::folly::dynamic::destroy(piVar15);
      *piVar15 = 2;
    }
    *(Props *)(piVar15 + 2) = PVar9;
  }
  piVar20 = *(int **)(param_1 + 0x700);
  piVar15 = *(int **)(param_1 + 0x6f8);
  piVar21 = *(int **)(pPVar1 + 0x6f8);
  if ((long)piVar20 - (long)piVar15 == *(long *)(pPVar1 + 0x700) - (long)piVar21) {
    for (; piVar15 != piVar20; piVar15 = piVar15 + 0x34) {
      if ((*piVar15 != *piVar21) || ((char)piVar15[1] != (char)piVar21[1])) goto LAB_007f207c;
      if (((char)piVar15[8] == '\0') || ((char)piVar21[8] == '\0')) {
        if (((char)piVar15[8] != '\0') != ((char)piVar21[8] != '\0')) goto LAB_007f207c;
      }
      else {
        bVar10 = *(byte *)(piVar15 + 2);
        bVar11 = *(byte *)(piVar21 + 2);
        sVar17 = (ulong)(bVar10 >> 1);
        if ((bVar10 & 1) != 0) {
          sVar17 = *(size_t *)(piVar15 + 4);
        }
        sVar2 = (ulong)(bVar11 >> 1);
        if ((bVar11 & 1) != 0) {
          sVar2 = *(size_t *)(piVar21 + 4);
        }
        if (sVar17 != sVar2) goto LAB_007f207c;
        pvVar3 = (void *)((long)piVar21 + 9);
        if ((bVar11 & 1) != 0) {
          pvVar3 = *(void **)(piVar21 + 6);
        }
        if ((bVar10 & 1) == 0) {
          if (1 < bVar10) {
            uVar18 = 0;
            do {
              if (*(char *)((long)piVar15 + uVar18 + 9) != *(char *)((long)pvVar3 + uVar18))
              goto LAB_007f207c;
              uVar18 = uVar18 + 1;
            } while (bVar10 >> 1 != uVar18);
          }
        }
        else {
          iVar14 = memcmp(*(void **)(piVar15 + 6),pvVar3,*(size_t *)(piVar15 + 4));
          if (iVar14 != 0) goto LAB_007f207c;
        }
      }
      if (((char)piVar15[0x10] == '\0') || ((char)piVar21[0x10] == '\0')) {
        if (((char)piVar15[0x10] != '\0') != ((char)piVar21[0x10] != '\0')) goto LAB_007f207c;
      }
      else {
        bVar10 = *(byte *)(piVar15 + 10);
        bVar11 = *(byte *)(piVar21 + 10);
        sVar17 = (ulong)(bVar10 >> 1);
        if ((bVar10 & 1) != 0) {
          sVar17 = *(size_t *)(piVar15 + 0xc);
        }
        sVar2 = (ulong)(bVar11 >> 1);
        if ((bVar11 & 1) != 0) {
          sVar2 = *(size_t *)(piVar21 + 0xc);
        }
        if (sVar17 != sVar2) goto LAB_007f207c;
        pvVar3 = (void *)((long)piVar21 + 0x29);
        if ((bVar11 & 1) != 0) {
          pvVar3 = *(void **)(piVar21 + 0xe);
        }
        if ((bVar10 & 1) == 0) {
          if (1 < bVar10) {
            uVar18 = 0;
            do {
              if (*(char *)((long)piVar15 + uVar18 + 0x29) != *(char *)((long)pvVar3 + uVar18))
              goto LAB_007f207c;
              uVar18 = uVar18 + 1;
            } while (bVar10 >> 1 != uVar18);
          }
        }
        else {
          iVar14 = memcmp(*(void **)(piVar15 + 0xe),pvVar3,*(size_t *)(piVar15 + 0xc));
          if (iVar14 != 0) goto LAB_007f207c;
        }
      }
      if (piVar15[0x12] != piVar21[0x12]) goto LAB_007f207c;
      if ((*(char *)((long)piVar15 + 0x4d) == '\0') || (*(char *)((long)piVar21 + 0x4d) == '\0')) {
        if ((*(char *)((long)piVar15 + 0x4d) != '\0') != (*(char *)((long)piVar21 + 0x4d) != '\0'))
        goto LAB_007f207c;
      }
      else if ((char)piVar15[0x13] != (char)piVar21[0x13]) goto LAB_007f207c;
      if ((*(char *)((long)piVar15 + 0x4f) == '\0') || (*(char *)((long)piVar21 + 0x4f) == '\0')) {
        if ((*(char *)((long)piVar15 + 0x4f) != '\0') != (*(char *)((long)piVar21 + 0x4f) != '\0'))
        goto LAB_007f207c;
      }
      else if (*(char *)((long)piVar15 + 0x4e) != *(char *)((long)piVar21 + 0x4e))
      goto LAB_007f207c;
      uVar18 = FUN_00801e04(piVar15 + 0x14,piVar21 + 0x14);
      if (((uVar18 & 1) == 0) ||
         (uVar18 = FUN_00801e04(piVar15 + 0x1c,piVar21 + 0x1c), (uVar18 & 1) == 0))
      goto LAB_007f207c;
      if (((char)piVar15[0x2a] == '\0') || ((char)piVar21[0x2a] == '\0')) {
        if (((char)piVar15[0x2a] != '\0') != ((char)piVar21[0x2a] != '\0')) goto LAB_007f207c;
      }
      else {
        pbVar4 = *(byte **)(piVar15 + 0x24);
        pbVar7 = *(byte **)(piVar15 + 0x26);
        pbVar5 = *(byte **)(piVar21 + 0x24);
        if ((long)pbVar7 - (long)pbVar4 != *(long *)(piVar21 + 0x26) - (long)pbVar5)
        goto LAB_007f207c;
        for (; pbVar4 != pbVar7; pbVar4 = pbVar4 + 0x68) {
          if ((pbVar4[0x18] == 0) || (pbVar5[0x18] == 0)) {
            if ((pbVar4[0x18] != 0) != (pbVar5[0x18] != 0)) goto LAB_007f207c;
          }
          else {
            bVar10 = *pbVar4;
            bVar11 = *pbVar5;
            sVar17 = (ulong)(bVar10 >> 1);
            if ((bVar10 & 1) != 0) {
              sVar17 = *(size_t *)(pbVar4 + 8);
            }
            sVar2 = (ulong)(bVar11 >> 1);
            if ((bVar11 & 1) != 0) {
              sVar2 = *(size_t *)(pbVar5 + 8);
            }
            if (sVar17 != sVar2) goto LAB_007f207c;
            pbVar19 = *(byte **)(pbVar5 + 0x10);
            if ((bVar11 & 1) == 0) {
              pbVar19 = pbVar5 + 1;
            }
            if ((bVar10 & 1) == 0) {
              if (1 < bVar10) {
                uVar18 = 0;
                do {
                  if (pbVar4[uVar18 + 1] != pbVar19[uVar18]) goto LAB_007f207c;
                  uVar18 = uVar18 + 1;
                } while (bVar10 >> 1 != uVar18);
              }
            }
            else {
              iVar14 = memcmp(*(void **)(pbVar4 + 0x10),pbVar19,*(size_t *)(pbVar4 + 8));
              if (iVar14 != 0) goto LAB_007f207c;
            }
          }
          if ((pbVar4[0x38] == 0) || (pbVar5[0x38] == 0)) {
            if ((pbVar4[0x38] != 0) != (pbVar5[0x38] != 0)) goto LAB_007f207c;
          }
          else {
            bVar10 = pbVar4[0x20];
            bVar11 = pbVar5[0x20];
            sVar17 = (ulong)(bVar10 >> 1);
            if ((bVar10 & 1) != 0) {
              sVar17 = *(size_t *)(pbVar4 + 0x28);
            }
            sVar2 = (ulong)(bVar11 >> 1);
            if ((bVar11 & 1) != 0) {
              sVar2 = *(size_t *)(pbVar5 + 0x28);
            }
            if (sVar17 != sVar2) goto LAB_007f207c;
            pbVar19 = pbVar5 + 0x21;
            if ((bVar11 & 1) != 0) {
              pbVar19 = *(byte **)(pbVar5 + 0x30);
            }
            if ((bVar10 & 1) == 0) {
              if (1 < bVar10) {
                uVar18 = 0;
                do {
                  if (pbVar4[uVar18 + 0x21] != pbVar19[uVar18]) goto LAB_007f207c;
                  uVar18 = uVar18 + 1;
                } while (bVar10 >> 1 != uVar18);
              }
            }
            else {
              iVar14 = memcmp(*(void **)(pbVar4 + 0x30),pbVar19,*(size_t *)(pbVar4 + 0x28));
              if (iVar14 != 0) goto LAB_007f207c;
            }
          }
          if ((pbVar4[0x58] == 0) || (pbVar5[0x58] == 0)) {
            if ((pbVar4[0x58] != 0) != (pbVar5[0x58] != 0)) goto LAB_007f207c;
          }
          else {
            bVar10 = pbVar4[0x40];
            bVar11 = pbVar5[0x40];
            sVar17 = (ulong)(bVar10 >> 1);
            if ((bVar10 & 1) != 0) {
              sVar17 = *(size_t *)(pbVar4 + 0x48);
            }
            sVar2 = (ulong)(bVar11 >> 1);
            if ((bVar11 & 1) != 0) {
              sVar2 = *(size_t *)(pbVar5 + 0x48);
            }
            if (sVar17 != sVar2) goto LAB_007f207c;
            pbVar19 = pbVar5 + 0x41;
            if ((bVar11 & 1) != 0) {
              pbVar19 = *(byte **)(pbVar5 + 0x50);
            }
            if ((bVar10 & 1) == 0) {
              if (1 < bVar10) {
                uVar18 = 0;
                do {
                  if (pbVar4[uVar18 + 0x41] != pbVar19[uVar18]) goto LAB_007f207c;
                  uVar18 = uVar18 + 1;
                } while (bVar10 >> 1 != uVar18);
              }
            }
            else {
              iVar14 = memcmp(*(void **)(pbVar4 + 0x50),pbVar19,*(size_t *)(pbVar4 + 0x48));
              if (iVar14 != 0) goto LAB_007f207c;
            }
          }
          if ((pbVar4[0x60] != pbVar5[0x60]) || (pbVar4[0x61] != pbVar5[0x61])) goto LAB_007f207c;
          pbVar5 = pbVar5 + 0x68;
        }
      }
      if (((char)piVar15[0x32] == '\0') || ((char)piVar21[0x32] == '\0')) {
        if (((char)piVar15[0x32] != '\0') != ((char)piVar21[0x32] != '\0')) goto LAB_007f207c;
      }
      else {
        bVar10 = *(byte *)(piVar15 + 0x2c);
        bVar11 = *(byte *)(piVar21 + 0x2c);
        sVar17 = (ulong)(bVar10 >> 1);
        if ((bVar10 & 1) != 0) {
          sVar17 = *(size_t *)(piVar15 + 0x2e);
        }
        sVar2 = (ulong)(bVar11 >> 1);
        if ((bVar11 & 1) != 0) {
          sVar2 = *(size_t *)(piVar21 + 0x2e);
        }
        if (sVar17 != sVar2) goto LAB_007f207c;
        pvVar3 = (void *)((long)piVar21 + 0xb1);
        if ((bVar11 & 1) != 0) {
          pvVar3 = *(void **)(piVar21 + 0x30);
        }
        if ((bVar10 & 1) == 0) {
          if (1 < bVar10) {
            uVar18 = 0;
            do {
              if (*(char *)((long)piVar15 + uVar18 + 0xb1) != *(char *)((long)pvVar3 + uVar18))
              goto LAB_007f207c;
              uVar18 = uVar18 + 1;
            } while (bVar10 >> 1 != uVar18);
          }
        }
        else {
          iVar14 = memcmp(*(void **)(piVar15 + 0x30),pvVar3,*(size_t *)(piVar15 + 0x2e));
          if (iVar14 != 0) goto LAB_007f207c;
        }
      }
      piVar21 = piVar21 + 0x34;
    }
    if (*(int *)(param_1 + 0x710) != *(int *)(pPVar1 + 0x710)) goto LAB_007f207c;
    sVar17 = *(long *)(param_1 + 0x720) - (long)*(void **)(param_1 + 0x718);
    if ((((sVar17 != *(long *)(pPVar1 + 0x720) - (long)*(void **)(pPVar1 + 0x718)) ||
         (iVar14 = memcmp(*(void **)(param_1 + 0x718),*(void **)(pPVar1 + 0x718),sVar17),
         iVar14 != 0)) || (param_1[0x730] != pPVar1[0x730])) ||
       ((param_1[0x731] != pPVar1[0x731] || (param_1[0x732] != pPVar1[0x732])))) goto LAB_007f207c;
  }
  else {
LAB_007f207c:
    local_90 = 0;
    local_b0[0] = 5;
    uStack_a0 = 0;
    local_98 = (dynamic *)0x0;
    local_88 = 0x3f800000;
    local_1a0[0] = 5;
    local_a8 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_b0);
    piVar15 = *(int **)(param_1 + 0x6f8);
    piVar21 = *(int **)(param_1 + 0x700);
    local_170[0] = 1;
    local_160 = (dynamic *)0x0;
    pdStack_158 = (dynamic *)0x0;
    local_168 = 0;
    for (; piVar15 != piVar21; piVar15 = piVar15 + 0x34) {
      local_b0[0] = 5;
      local_90 = 0;
      local_98 = (dynamic *)0x0;
      local_88 = 0x3f800000;
      local_a8 = 0;
      uStack_a0 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_140[0] = 5;
      local_118 = 0x3f800000;
      folly::dynamic::folly::dynamic::destroy(local_b0);
      iVar14 = *piVar15;
                    /* try { // try from 007f2150 to 007f219f has its CatchHandler @ 007f2c34 */
      piVar20 = (int *)folly::dynamic::operator[](local_140,&DAT_0036e67d,&DAT_0036e681);
      if (*piVar20 != 4) {
        folly::dynamic::folly::dynamic::destroy(piVar20);
        *piVar20 = 4;
      }
      *(long *)(piVar20 + 2) = (long)iVar14;
      iVar14 = piVar15[1];
      piVar20 = (int *)folly::dynamic::operator[](local_140,"isSectionNitroLocked","");
      if (*piVar20 != 2) {
        folly::dynamic::folly::dynamic::destroy(piVar20);
        *piVar20 = 2;
      }
      *(char *)(piVar20 + 2) = (char)iVar14;
      if ((char)piVar15[8] != '\0') {
        if ((*(byte *)(piVar15 + 2) & 1) == 0) {
          local_210 = *(dynamic **)(piVar15 + 6);
          uStack_218 = *(ulong *)(piVar15 + 4);
          local_220 = *(ulong *)(piVar15 + 2);
        }
        else {
                    /* try { // try from 007f21ec to 007f21f3 has its CatchHandler @ 007f2b70 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_220,*(char **)(piVar15 + 6),*(ulong *)(piVar15 + 4));
        }
        uStack_a0 = uStack_218;
        local_a8 = local_220;
        local_b0[0] = 6;
        local_220 = 0;
        uStack_218 = 0;
        local_98 = local_210;
        local_210 = (dynamic *)0x0;
                    /* try { // try from 007f2210 to 007f2223 has its CatchHandler @ 007f2bd4 */
        pdVar16 = (dynamic *)folly::dynamic::operator[](local_140,"title","");
        folly::dynamic::operator=(pdVar16,(dynamic *)local_b0);
        folly::dynamic::folly::dynamic::destroy(local_b0);
        if ((local_220 & 1) != 0) {
          operator_delete(local_210);
        }
      }
      if ((char)piVar15[0x10] != '\0') {
        if ((*(byte *)(piVar15 + 10) & 1) == 0) {
          uStack_238 = *(ulong *)(piVar15 + 0xc);
          local_240 = *(ulong *)(piVar15 + 10);
          local_230 = *(dynamic **)(piVar15 + 0xe);
        }
        else {
                    /* try { // try from 007f226c to 007f2273 has its CatchHandler @ 007f2b74 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_240,*(char **)(piVar15 + 0xe),*(ulong *)(piVar15 + 0xc));
        }
        uStack_a0 = uStack_238;
        local_a8 = local_240;
        local_b0[0] = 6;
        local_240 = 0;
        uStack_238 = 0;
        local_98 = local_230;
        local_230 = (dynamic *)0x0;
                    /* try { // try from 007f2290 to 007f22a3 has its CatchHandler @ 007f2bb0 */
        pdVar16 = (dynamic *)folly::dynamic::operator[](local_140,"guildId","");
        folly::dynamic::operator=(pdVar16,(dynamic *)local_b0);
        folly::dynamic::folly::dynamic::destroy(local_b0);
        if ((local_240 & 1) != 0) {
          operator_delete(local_230);
        }
      }
      iVar14 = piVar15[0x12];
                    /* try { // try from 007f22c8 to 007f2363 has its CatchHandler @ 007f2c34 */
      piVar20 = (int *)folly::dynamic::operator[](local_140,"emojiCount","");
      if (*piVar20 != 4) {
        folly::dynamic::folly::dynamic::destroy(piVar20);
        *piVar20 = 4;
      }
      *(long *)(piVar20 + 2) = (long)iVar14;
      if (*(char *)((long)piVar15 + 0x4d) != '\0') {
        iVar14 = piVar15[0x13];
        piVar20 = (int *)folly::dynamic::operator[](local_140,"hasPremiumInlin","");
        if (*piVar20 != 2) {
          folly::dynamic::folly::dynamic::destroy(piVar20);
          *piVar20 = 2;
        }
        *(char *)(piVar20 + 2) = (char)iVar14;
      }
      if (*(char *)((long)piVar15 + 0x4f) != '\0') {
        uVar12 = *(undefined1 *)((long)piVar15 + 0x4e);
        piVar20 = (int *)folly::dynamic::operator[](local_140,"hasPremiumInlin","");
        if (*piVar20 != 2) {
          folly::dynamic::folly::dynamic::destroy(piVar20);
          *piVar20 = 2;
        }
        *(undefined1 *)(piVar20 + 2) = uVar12;
      }
      if ((char)piVar15[0x1a] != '\0') {
                    /* try { // try from 007f2390 to 007f239b has its CatchHandler @ 007f2bac */
        FUN_00802138(local_b0,piVar15 + 0x14);
                    /* try { // try from 007f239c to 007f23af has its CatchHandler @ 007f2bd0 */
        pdVar16 = (dynamic *)folly::dynamic::operator[](local_140,"emojis","");
        folly::dynamic::operator=(pdVar16,(dynamic *)local_b0);
        folly::dynamic::folly::dynamic::destroy(local_b0);
      }
      if ((char)piVar15[0x22] != '\0') {
                    /* try { // try from 007f23c8 to 007f23d3 has its CatchHandler @ 007f2bf4 */
        FUN_00802138(local_b0,piVar15 + 0x1c);
                    /* try { // try from 007f23d4 to 007f23e7 has its CatchHandler @ 007f2bf8 */
        pdVar16 = (dynamic *)folly::dynamic::operator[](local_140,"emojisHidden","");
        folly::dynamic::operator=(pdVar16,(dynamic *)local_b0);
        folly::dynamic::folly::dynamic::destroy(local_b0);
      }
      if ((char)piVar15[0x2a] != '\0') {
        puVar6 = *(ulong **)(piVar15 + 0x24);
        puVar8 = *(ulong **)(piVar15 + 0x26);
        local_110[0] = 1;
        local_100 = (dynamic *)0x0;
        pdStack_f8 = (dynamic *)0x0;
        local_108 = 0;
        for (; puVar6 != puVar8; puVar6 = puVar6 + 0xd) {
          local_b0[0] = 5;
          local_90 = 0;
          local_98 = (dynamic *)0x0;
          local_88 = 0x3f800000;
          local_a8 = 0;
          uStack_a0 = 0;
          uStack_d8 = 0;
          local_d0 = (dynamic *)0x0;
          local_c8 = (dynamic *)0x0;
          uStack_c0 = 0;
          local_e0._4_4_ = (undefined4)(local_e0 >> 0x20);
          local_e0 = CONCAT44(local_e0._4_4_,5);
          local_b8 = 0x3f800000;
          folly::dynamic::folly::dynamic::destroy(local_b0);
          if ((byte)puVar6[3] != 0) {
            if ((*puVar6 & 1) == 0) {
              local_1b0 = (dynamic *)puVar6[2];
              uStack_1b8 = puVar6[1];
              local_1c0 = *puVar6;
            }
            else {
                    /* try { // try from 007f24e4 to 007f24eb has its CatchHandler @ 007f2c2c */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              __init_copy_ctor_external
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_1c0,(char *)puVar6[2],puVar6[1]);
            }
            uStack_a0 = uStack_1b8;
            local_a8 = local_1c0;
            local_b0[0] = 6;
            local_1c0 = 0;
            uStack_1b8 = 0;
            local_98 = local_1b0;
            local_1b0 = (dynamic *)0x0;
                    /* try { // try from 007f2508 to 007f251b has its CatchHandler @ 007f2c7c */
            pdVar16 = (dynamic *)folly::dynamic::operator[](&local_e0,&DAT_0036adfa,&DAT_0036adfc);
            folly::dynamic::operator=(pdVar16,(dynamic *)local_b0);
            folly::dynamic::folly::dynamic::destroy(local_b0);
            if ((local_1c0 & 1) != 0) {
              operator_delete(local_1b0);
            }
          }
          if ((byte)puVar6[7] != 0) {
            if ((puVar6[4] & 1) == 0) {
              local_1d0 = (dynamic *)puVar6[6];
              uStack_1d8 = puVar6[5];
              local_1e0 = puVar6[4];
            }
            else {
                    /* try { // try from 007f2564 to 007f256b has its CatchHandler @ 007f2c30 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              __init_copy_ctor_external
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_1e0,(char *)puVar6[6],puVar6[5]);
            }
            uStack_a0 = uStack_1d8;
            local_a8 = local_1e0;
            local_b0[0] = 6;
            local_1e0 = 0;
            uStack_1d8 = 0;
            local_98 = local_1d0;
            local_1d0 = (dynamic *)0x0;
                    /* try { // try from 007f2588 to 007f259b has its CatchHandler @ 007f2c60 */
            pdVar16 = (dynamic *)folly::dynamic::operator[](&local_e0,&DAT_0036dfa2,&DAT_0036dfa6);
            folly::dynamic::operator=(pdVar16,(dynamic *)local_b0);
            folly::dynamic::folly::dynamic::destroy(local_b0);
            if ((local_1e0 & 1) != 0) {
              operator_delete(local_1d0);
            }
          }
          if ((byte)puVar6[0xb] != 0) {
            if ((puVar6[8] & 1) == 0) {
              local_1f0 = (dynamic *)puVar6[10];
              uStack_1f8 = puVar6[9];
              local_200 = puVar6[8];
            }
            else {
                    /* try { // try from 007f25e4 to 007f25eb has its CatchHandler @ 007f2c28 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              __init_copy_ctor_external
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_200,(char *)puVar6[10],puVar6[9]);
            }
            uStack_a0 = uStack_1f8;
            local_a8 = local_200;
            local_b0[0] = 6;
            local_200 = 0;
            uStack_1f8 = 0;
            local_98 = local_1f0;
            local_1f0 = (dynamic *)0x0;
                    /* try { // try from 007f2608 to 007f261b has its CatchHandler @ 007f2c44 */
            pdVar16 = (dynamic *)folly::dynamic::operator[](&local_e0,"surrogates","");
            folly::dynamic::operator=(pdVar16,(dynamic *)local_b0);
            folly::dynamic::folly::dynamic::destroy(local_b0);
            if ((local_200 & 1) != 0) {
              operator_delete(local_1f0);
            }
          }
          uVar18 = puVar6[0xc];
                    /* try { // try from 007f2640 to 007f268f has its CatchHandler @ 007f2ca4 */
          piVar20 = (int *)folly::dynamic::operator[](&local_e0,"animated","");
          if (*piVar20 != 2) {
            folly::dynamic::folly::dynamic::destroy(piVar20);
            *piVar20 = 2;
          }
          *(byte *)(piVar20 + 2) = (byte)uVar18;
          bVar10 = *(byte *)((long)puVar6 + 0x61);
          piVar20 = (int *)folly::dynamic::operator[](&local_e0,"disabled","");
          if (*piVar20 != 2) {
            folly::dynamic::folly::dynamic::destroy(piVar20);
            *piVar20 = 2;
          }
          pdVar16 = local_100;
          *(byte *)(piVar20 + 2) = bVar10;
          if (local_110[0] != 1) {
            if (*(long *)(lVar13 + 0x28) == local_80) {
                    /* try { // try from 007f2a68 to 007f2a7b has its CatchHandler @ 007f2c9c */
                    /* WARNING: Subroutine does not return */
              FUN_00789f8c(*(undefined8 *)PTR_name_0099e338);
            }
            goto LAB_007f2cf4;
          }
          if (local_100 < pdStack_f8) {
            folly::dynamic::dynamic(local_100,(dynamic *)&local_e0);
            local_100 = pdVar16 + 0x30;
          }
          else {
                    /* try { // try from 007f26cc to 007f26db has its CatchHandler @ 007f2c40 */
            local_100 = (dynamic *)FUN_00801fe4(&local_108,&local_e0);
          }
          folly::dynamic::folly::dynamic::destroy(&local_e0);
        }
                    /* try { // try from 007f2420 to 007f2433 has its CatchHandler @ 007f2b80 */
        pdVar16 = (dynamic *)folly::dynamic::operator[](local_140,&DAT_0036e02c,&DAT_0036e032);
        folly::dynamic::operator=(pdVar16,(dynamic *)local_110);
        folly::dynamic::folly::dynamic::destroy(local_110);
      }
      if ((char)piVar15[0x32] != '\0') {
        if ((*(byte *)(piVar15 + 0x2c) & 1) == 0) {
          uStack_d8 = *(ulong *)(piVar15 + 0x2e);
          local_e0 = *(ulong *)(piVar15 + 0x2c);
          local_d0 = *(dynamic **)(piVar15 + 0x30);
        }
        else {
                    /* try { // try from 007f26e4 to 007f26eb has its CatchHandler @ 007f2b6c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_e0,*(char **)(piVar15 + 0x30),*(ulong *)(piVar15 + 0x2e));
        }
        uStack_a0 = uStack_d8;
        local_a8 = local_e0;
        local_b0[0] = 6;
        local_e0 = 0;
        uStack_d8 = 0;
        local_98 = local_d0;
        local_d0 = (dynamic *)0x0;
                    /* try { // try from 007f2708 to 007f271b has its CatchHandler @ 007f2b8c */
        pdVar16 = (dynamic *)folly::dynamic::operator[](local_140,&DAT_0036adfa,&DAT_0036adfc);
        folly::dynamic::operator=(pdVar16,(dynamic *)local_b0);
        folly::dynamic::folly::dynamic::destroy(local_b0);
        if ((local_e0 & 1) != 0) {
          operator_delete(local_d0);
        }
      }
      pdVar16 = local_160;
      if (local_170[0] != 1) {
        if (*(long *)(lVar13 + 0x28) == local_80) {
                    /* try { // try from 007f2ab0 to 007f2abf has its CatchHandler @ 007f2c08 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099e338);
        }
        goto LAB_007f2cf4;
      }
      if (local_160 < pdStack_158) {
        folly::dynamic::dynamic(local_160,(dynamic *)local_140);
        local_160 = pdVar16 + 0x30;
      }
      else {
                    /* try { // try from 007f2754 to 007f2763 has its CatchHandler @ 007f2b78 */
        local_160 = (dynamic *)FUN_00801fe4(&local_168,local_140);
      }
      folly::dynamic::folly::dynamic::destroy(local_140);
    }
                    /* try { // try from 007f2768 to 007f277b has its CatchHandler @ 007f2b44 */
    pdVar16 = (dynamic *)folly::dynamic::operator[](local_1a0,&DAT_0036ec96,&DAT_0036ec9a);
    folly::dynamic::operator=(pdVar16,(dynamic *)local_170);
    folly::dynamic::folly::dynamic::destroy(local_170);
    iVar14 = *(int *)(param_1 + 0x710);
                    /* try { // try from 007f2794 to 007f27ab has its CatchHandler @ 007f2b64 */
    piVar15 = (int *)folly::dynamic::operator[](local_1a0,"rowSize","");
    if (*piVar15 != 4) {
      folly::dynamic::folly::dynamic::destroy(piVar15);
      *piVar15 = 4;
    }
    *(long *)(piVar15 + 2) = (long)iVar14;
    piVar15 = *(int **)(param_1 + 0x718);
    piVar21 = *(int **)(param_1 + 0x720);
    local_e0 = CONCAT44(local_e0._4_4_,1);
    local_d0 = (dynamic *)0x0;
    local_c8 = (dynamic *)0x0;
    uStack_d8 = 0;
    pdVar16 = local_d0;
    for (; local_d0 = pdVar16, piVar15 != piVar21; piVar15 = piVar15 + 1) {
      local_a8 = (ulong)*piVar15;
      local_b0[0] = 4;
      if ((int)local_e0 != 1) {
        if (*(long *)(lVar13 + 0x28) == local_80) {
                    /* try { // try from 007f2a8c to 007f2a9b has its CatchHandler @ 007f2c0c */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099e338);
        }
        goto LAB_007f2cf4;
      }
      if (pdVar16 < local_c8) {
        folly::dynamic::dynamic(pdVar16,(dynamic *)local_b0);
        local_d0 = pdVar16 + 0x30;
      }
      else {
                    /* try { // try from 007f2848 to 007f2853 has its CatchHandler @ 007f2b7c */
        local_d0 = (dynamic *)FUN_00801fe4(&uStack_d8,local_b0);
      }
      folly::dynamic::folly::dynamic::destroy(local_b0);
      pdVar16 = local_d0;
    }
                    /* try { // try from 007f2858 to 007f286b has its CatchHandler @ 007f2b3c */
    pdVar16 = (dynamic *)folly::dynamic::operator[](local_1a0,"heade","");
    folly::dynamic::operator=(pdVar16,(dynamic *)&local_e0);
    folly::dynamic::folly::dynamic::destroy(&local_e0);
    PVar9 = param_1[0x730];
                    /* try { // try from 007f2880 to 007f290b has its CatchHandler @ 007f2b64 */
    piVar15 = (int *)folly::dynamic::operator[](local_1a0,"hasGuildData","");
    if (*piVar15 != 2) {
      folly::dynamic::folly::dynamic::destroy(piVar15);
      *piVar15 = 2;
    }
    *(Props *)(piVar15 + 2) = PVar9;
    PVar9 = param_1[0x731];
    piVar15 = (int *)folly::dynamic::operator[](local_1a0,"hasSe","");
    if (*piVar15 != 2) {
      folly::dynamic::folly::dynamic::destroy(piVar15);
      *piVar15 = 2;
    }
    *(Props *)(piVar15 + 2) = PVar9;
    PVar9 = param_1[0x732];
    piVar15 = (int *)folly::dynamic::operator[](local_1a0,"hasSear","");
    if (*piVar15 != 2) {
      folly::dynamic::folly::dynamic::destroy(piVar15);
      *piVar15 = 2;
    }
    *(Props *)(piVar15 + 2) = PVar9;
                    /* try { // try from 007f2934 to 007f2947 has its CatchHandler @ 007f2b38 */
    pdVar16 = (dynamic *)folly::dynamic::operator[](in_x8,"emojiData","");
    folly::dynamic::operator=(pdVar16,(dynamic *)local_1a0);
    folly::dynamic::folly::dynamic::destroy(local_1a0);
  }
  iVar14 = *(int *)(param_1 + 0x738);
  if (iVar14 != *(int *)(pPVar1 + 0x738)) {
                    /* try { // try from 007f2968 to 007f29c3 has its CatchHandler @ 007f2b50 */
    piVar15 = (int *)folly::dynamic::operator[](in_x8,"emojiMargin","");
    if (*piVar15 != 4) {
      folly::dynamic::folly::dynamic::destroy(piVar15);
      *piVar15 = 4;
    }
    *(long *)(piVar15 + 2) = (long)iVar14;
  }
  iVar14 = *(int *)(param_1 + 0x73c);
  if (iVar14 != *(int *)(pPVar1 + 0x73c)) {
    piVar15 = (int *)folly::dynamic::operator[](in_x8,"emojiSize","");
    if (*piVar15 != 4) {
      folly::dynamic::folly::dynamic::destroy(piVar15);
      *piVar15 = 4;
    }
    *(long *)(piVar15 + 2) = (long)iVar14;
  }
LAB_007f2a20:
  if (*(long *)(lVar13 + 0x28) == local_80) {
    return;
  }
LAB_007f2cf4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007f2cf8  FUN_007f2cf8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007f2cf8(void)

{
  FUN_00788b10(&DAT_009acb88,PTR_PTR_0099df88 + 0x10);
  DAT_009ad164 = 0;
  DAT_009ad168 = 0;
  DAT_009ad1c8 = 0;
  DAT_009ad1d0 = 0;
  DAT_009ad230 = 0;
  DAT_009ad240 = 0;
  DAT_009ad244 = 0;
  DAT_009ad248 = 0;
  DAT_009ad24c = 0;
  DAT_009ad250 = 0;
  DAT_009ad254 = 0;
  DAT_009ad258 = 0;
  DAT_009ad25c = 0;
  DAT_009ad260 = 0;
  DAT_009ad264 = 0;
  DAT_009ad238 = 0;
  DAT_009ad23c = 0;
  DAT_009ad268 = 0;
  DAT_009acb88 = PTR_vtable_0099df80 + 0x20;
  DAT_009ad274 = 0;
  DAT_009ad26c = 0;
  DAT_009ad270 = 0;
  DAT_009ad2c0 = 0;
  DAT_009ad27c = 0;
  DAT_009ad290 = 0;
  DAT_009ad298 = 0;
  uRam00000000009ad288 = 0;
  _DAT_009ad280 = 0;
  DAT_009ad2b0._0_7_ = 0;
  ram0x009ad2b7 = 0;
  DAT_009ad2a0 = 0;
  DAT_009ad2a8 = 0;
  return;
}


// ===== 007f2dc0  FUN_007f2dc0 =====

void FUN_007f2dc0(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = *(void **)(param_1 + 0x718);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x720) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x6f8);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = *(void **)(param_1 + 0x700);
    pvVar2 = pvVar1;
    if (pvVar3 != pvVar1) {
      do {
        pvVar3 = (void *)((long)pvVar3 + -0xd0);
        FUN_0079a054(pvVar3);
      } while (pvVar3 != pvVar1);
      pvVar2 = *(void **)(param_1 + 0x6f8);
    }
    *(void **)(param_1 + 0x700) = pvVar1;
    operator_delete(pvVar2);
  }
  FUN_0078917c(param_1,PTR_PTR_0099df88 + 8);
  return;
}


// ===== 007f2e3c  facebook::react::EmojiPickerRowViewProps::EmojiPickerRowViewProps =====

/* facebook::react::EmojiPickerRowViewProps::EmojiPickerRowViewProps(facebook::react::PropsParserContext
   const&, facebook::react::EmojiPickerRowViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::EmojiPickerRowViewProps::EmojiPickerRowViewProps
          (EmojiPickerRowViewProps *this,PropsParserContext *param_1,
          EmojiPickerRowViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  long *plVar2;
  function *in_x4;
  long lVar3;
  undefined8 *local_98;
  long local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  undefined1 local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007f2e7c to 007f2e8b has its CatchHandler @ 007f2f5c */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if (local_70 == &local_90) {
    lVar3 = 4;
    plVar2 = &local_90;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007f2eb8;
    lVar3 = 5;
    plVar2 = local_70;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007f2eb8:
  local_88 = 0;
  local_90 = 0;
  *(undefined8 *)this = *(undefined8 *)param_1;
  local_78 = 0;
  local_70 = (long *)0x0;
  local_80 = 0;
  local_68 = 0;
                    /* try { // try from 007f2edc to 007f2f03 has its CatchHandler @ 007f2f3c */
  FUN_007f2fac(this + 0x6e0,param_2);
  local_98 = &local_80;
  FUN_0079bf5c(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007f2fac  FUN_007f2fac =====

void FUN_007f2fac(undefined8 *param_1,undefined8 param_2,char *param_3,char *param_4,
                 undefined8 *param_5,undefined8 param_6,char *param_7)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  lVar3 = facebook::react::RawProps::at(param_3,param_4,param_7);
  if (lVar3 == 0) {
    uVar6 = *param_5;
    uVar1 = *(undefined4 *)(param_5 + 1);
    param_1[3] = 0;
    param_1[4] = 0;
    *param_1 = uVar6;
    *(undefined4 *)(param_1 + 1) = uVar1;
    param_1[2] = 0;
    FUN_0081c2fc();
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_5 + 5);
  }
  else {
    uVar4 = FUN_00807970();
    if ((uVar4 & 1) == 0) {
      if (*(long *)(lVar2 + 0x28) == lVar5) {
        FUN_0081b75c(param_1,param_6);
        return;
      }
      goto LAB_007f3220;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 5) = 0;
                    /* try { // try from 007f30a4 to 007f30af has its CatchHandler @ 007f30ec */
    FUN_0081b7c4(lVar3,param_1);
  }
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return;
  }
LAB_007f3220:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007f3228  facebook::react::EmojiPickerRowViewProps::EmojiPickerRowViewProps =====

/* facebook::react::EmojiPickerRowViewProps::EmojiPickerRowViewProps(facebook::react::PropsParserContext
   const&, facebook::react::EmojiPickerRowViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::EmojiPickerRowViewProps::EmojiPickerRowViewProps
          (EmojiPickerRowViewProps *this,PropsParserContext *param_1,
          EmojiPickerRowViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *local_98;
  long local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  undefined1 local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007f3264 to 007f3287 has its CatchHandler @ 007f3360 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099dfa0 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if (local_70 == &local_90) {
    lVar3 = 4;
    plVar2 = &local_90;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007f32b4;
    lVar3 = 5;
    plVar2 = local_70;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007f32b4:
  local_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = (long *)0x0;
  *(undefined **)this = PTR_vtable_0099df98 + 0x20;
  local_80 = 0;
  local_68 = 0;
                    /* try { // try from 007f32e0 to 007f3307 has its CatchHandler @ 007f3340 */
  FUN_007f2fac(this + 0x6e0,param_1,param_3,"rowData",param_2 + 0x6e0,&local_90,0,0);
  local_98 = &local_80;
  FUN_0079bf5c(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007f33b0  facebook::react::EmojiPickerRowViewProps::getDiffPropsImplementationTarget =====

/* facebook::react::EmojiPickerRowViewProps::getDiffPropsImplementationTarget() const */

char * facebook::react::EmojiPickerRowViewProps::getDiffPropsImplementationTarget(void)

{
  return "EmojiPickerRowView";
}


// ===== 007f33bc  facebook::react::EmojiPickerRowViewProps::getDiffProps =====

/* facebook::react::EmojiPickerRowViewProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::EmojiPickerRowViewProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  Props PVar6;
  long lVar7;
  int iVar8;
  int *piVar9;
  dynamic *pdVar10;
  undefined4 *puVar11;
  Props *in_x1;
  undefined4 *in_x8;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong *puVar17;
  ulong *puVar18;
  float fVar19;
  ulong local_1a0;
  ulong uStack_198;
  void *local_190;
  ulong local_180;
  ulong uStack_178;
  void *local_170;
  ulong local_160;
  ulong uStack_158;
  void *local_150;
  undefined4 local_140 [2];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  int local_110 [2];
  undefined8 local_108;
  dynamic *local_100;
  dynamic *pdStack_f8;
  undefined4 local_e0 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 local_b0 [2];
  ulong local_a8;
  ulong uStack_a0;
  void *local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  
  lVar7 = tpidr_el0;
  local_80 = *(long *)(lVar7 + 0x28);
  if (((DAT_009ad9e0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_009ad9e0), iVar8 != 0)) {
    memset(&DAT_009ad2d0,0,0x710);
                    /* try { // try from 007f3b58 to 007f3b5b has its CatchHandler @ 007f3b90 */
    FUN_007f3c70();
    __cxa_atexit(FUN_007f3d10,&DAT_009ad2d0,&PTR_LOOP_008d5d30);
    __cxa_guard_release(&DAT_009ad9e0);
  }
  pPVar1 = (Props *)&DAT_009ad2d0;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    local_90 = 0;
    local_b0[0] = 5;
    puVar11 = local_b0;
    uStack_a0 = 0;
    local_98 = (void *)0x0;
    local_88 = 0x3f800000;
    *in_x8 = 5;
    local_a8 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
  }
  else {
    ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    if (((*(float *)(param_1 + 0x6e0) == *(float *)(pPVar1 + 0x6e0)) &&
        (*(int *)(param_1 + 0x6e4) == *(int *)(pPVar1 + 0x6e4))) &&
       (*(int *)(param_1 + 0x6e8) == *(int *)(pPVar1 + 0x6e8))) {
      pbVar14 = *(byte **)(param_1 + 0x6f8);
      pbVar15 = *(byte **)(param_1 + 0x6f0);
      pbVar16 = *(byte **)(pPVar1 + 0x6f0);
      if ((long)pbVar14 - (long)pbVar15 == *(long *)(pPVar1 + 0x6f8) - (long)pbVar16) {
        for (; pbVar15 != pbVar14; pbVar15 = pbVar15 + 0x58) {
          if ((pbVar15[0x18] == 0) || (pbVar16[0x18] == 0)) {
            if ((pbVar15[0x18] != 0) != (pbVar16[0x18] != 0)) goto LAB_007f3668;
          }
          else {
            bVar4 = *pbVar15;
            bVar5 = *pbVar16;
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = *(size_t *)(pbVar15 + 8);
            }
            sVar3 = (ulong)(bVar5 >> 1);
            if ((bVar5 & 1) != 0) {
              sVar3 = *(size_t *)(pbVar16 + 8);
            }
            if (sVar2 != sVar3) goto LAB_007f3668;
            pbVar13 = *(byte **)(pbVar16 + 0x10);
            if ((bVar5 & 1) == 0) {
              pbVar13 = pbVar16 + 1;
            }
            if ((bVar4 & 1) == 0) {
              if (1 < bVar4) {
                uVar12 = 0;
                do {
                  if (pbVar15[uVar12 + 1] != pbVar13[uVar12]) goto LAB_007f3668;
                  uVar12 = uVar12 + 1;
                } while (bVar4 >> 1 != uVar12);
              }
            }
            else {
              iVar8 = memcmp(*(void **)(pbVar15 + 0x10),pbVar13,*(size_t *)(pbVar15 + 8));
              if (iVar8 != 0) goto LAB_007f3668;
            }
          }
          bVar4 = pbVar15[0x20];
          bVar5 = pbVar16[0x20];
          sVar2 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            sVar2 = *(size_t *)(pbVar15 + 0x28);
          }
          sVar3 = (ulong)(bVar5 >> 1);
          if ((bVar5 & 1) != 0) {
            sVar3 = *(size_t *)(pbVar16 + 0x28);
          }
          if (sVar2 != sVar3) goto LAB_007f3668;
          pbVar13 = pbVar16 + 0x21;
          if ((bVar5 & 1) != 0) {
            pbVar13 = *(byte **)(pbVar16 + 0x30);
          }
          if ((bVar4 & 1) == 0) {
            if (1 < bVar4) {
              uVar12 = 0;
              do {
                if (pbVar15[uVar12 + 0x21] != pbVar13[uVar12]) goto LAB_007f3668;
                uVar12 = uVar12 + 1;
              } while (bVar4 >> 1 != uVar12);
            }
          }
          else {
            iVar8 = memcmp(*(void **)(pbVar15 + 0x30),pbVar13,*(size_t *)(pbVar15 + 0x28));
            if (iVar8 != 0) goto LAB_007f3668;
          }
          bVar4 = pbVar15[0x38];
          bVar5 = pbVar16[0x38];
          sVar2 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            sVar2 = *(size_t *)(pbVar15 + 0x40);
          }
          sVar3 = (ulong)(bVar5 >> 1);
          if ((bVar5 & 1) != 0) {
            sVar3 = *(size_t *)(pbVar16 + 0x40);
          }
          if (sVar2 != sVar3) goto LAB_007f3668;
          pbVar13 = pbVar16 + 0x39;
          if ((bVar5 & 1) != 0) {
            pbVar13 = *(byte **)(pbVar16 + 0x48);
          }
          if ((bVar4 & 1) == 0) {
            if (1 < bVar4) {
              uVar12 = 0;
              do {
                if (pbVar15[uVar12 + 0x39] != pbVar13[uVar12]) goto LAB_007f3668;
                uVar12 = uVar12 + 1;
              } while (bVar4 >> 1 != uVar12);
            }
          }
          else {
            iVar8 = memcmp(*(void **)(pbVar15 + 0x48),pbVar13,*(size_t *)(pbVar15 + 0x40));
            if (iVar8 != 0) goto LAB_007f3668;
          }
          if ((pbVar15[0x50] != pbVar16[0x50]) || (pbVar15[0x51] != pbVar16[0x51]))
          goto LAB_007f3668;
          pbVar16 = pbVar16 + 0x58;
        }
        if (param_1[0x708] == pPVar1[0x708]) goto LAB_007f3ad0;
      }
    }
LAB_007f3668:
    local_90 = 0;
    local_b0[0] = 5;
    uStack_a0 = 0;
    local_98 = (void *)0x0;
    local_88 = 0x3f800000;
    local_140[0] = 5;
    local_a8 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_b0);
    fVar19 = *(float *)(param_1 + 0x6e0);
                    /* try { // try from 007f36a0 to 007f3733 has its CatchHandler @ 007f3bb0 */
    piVar9 = (int *)folly::dynamic::operator[](local_140,"rowCont","");
    if (*piVar9 != 3) {
      folly::dynamic::folly::dynamic::destroy(piVar9);
      *piVar9 = 3;
    }
    *(double *)(piVar9 + 2) = (double)fVar19;
    iVar8 = *(int *)(param_1 + 0x6e4);
    piVar9 = (int *)folly::dynamic::operator[](local_140,"rowConten","");
    if (*piVar9 != 4) {
      folly::dynamic::folly::dynamic::destroy(piVar9);
      *piVar9 = 4;
    }
    *(long *)(piVar9 + 2) = (long)iVar8;
    iVar8 = *(int *)(param_1 + 0x6e8);
    piVar9 = (int *)folly::dynamic::operator[](local_140,"itemSize","");
    if (*piVar9 != 4) {
      folly::dynamic::folly::dynamic::destroy(piVar9);
      *piVar9 = 4;
    }
    *(long *)(piVar9 + 2) = (long)iVar8;
    puVar18 = *(ulong **)(param_1 + 0x6f0);
    puVar17 = *(ulong **)(param_1 + 0x6f8);
    local_110[0] = 1;
    local_100 = (dynamic *)0x0;
    pdStack_f8 = (dynamic *)0x0;
    local_108 = 0;
    for (; puVar18 != puVar17; puVar18 = puVar18 + 0xb) {
      local_b0[0] = 5;
      local_90 = 0;
      local_98 = (void *)0x0;
      local_88 = 0x3f800000;
      local_a8 = 0;
      uStack_a0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_e0[0] = 5;
      local_b8 = 0x3f800000;
      folly::dynamic::folly::dynamic::destroy(local_b0);
      if ((byte)puVar18[3] != 0) {
        if ((*puVar18 & 1) == 0) {
          local_150 = (void *)puVar18[2];
          uStack_158 = puVar18[1];
          local_160 = *puVar18;
        }
        else {
                    /* try { // try from 007f3828 to 007f382f has its CatchHandler @ 007f3bb8 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_160,(char *)puVar18[2],puVar18[1]);
        }
        uStack_a0 = uStack_158;
        local_a8 = local_160;
        local_b0[0] = 6;
        local_160 = 0;
        uStack_158 = 0;
        local_98 = local_150;
        local_150 = (void *)0x0;
                    /* try { // try from 007f384c to 007f385f has its CatchHandler @ 007f3bc8 */
        pdVar10 = (dynamic *)folly::dynamic::operator[](local_e0,&DAT_0036adfa,&DAT_0036adfc);
        folly::dynamic::operator=(pdVar10,(dynamic *)local_b0);
        folly::dynamic::folly::dynamic::destroy(local_b0);
        if ((local_160 & 1) != 0) {
          operator_delete(local_150);
        }
      }
      if ((puVar18[4] & 1) == 0) {
        local_170 = (void *)puVar18[6];
        uStack_178 = puVar18[5];
        local_180 = puVar18[4];
      }
      else {
                    /* try { // try from 007f38a4 to 007f38ab has its CatchHandler @ 007f3bc0 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_180,(char *)puVar18[6],puVar18[5]);
      }
      uStack_a0 = uStack_178;
      local_a8 = local_180;
      local_b0[0] = 6;
      local_180 = 0;
      uStack_178 = 0;
      local_98 = local_170;
      local_170 = (void *)0x0;
                    /* try { // try from 007f38c8 to 007f38db has its CatchHandler @ 007f3bec */
      pdVar10 = (dynamic *)folly::dynamic::operator[](local_e0,&DAT_0036dfa2,&DAT_0036dfa6);
      folly::dynamic::operator=(pdVar10,(dynamic *)local_b0);
      folly::dynamic::folly::dynamic::destroy(local_b0);
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
      }
      if ((puVar18[7] & 1) == 0) {
        local_190 = (void *)puVar18[9];
        uStack_198 = puVar18[8];
        local_1a0 = puVar18[7];
      }
      else {
                    /* try { // try from 007f3920 to 007f3927 has its CatchHandler @ 007f3bbc */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_1a0,(char *)puVar18[9],puVar18[8]);
      }
      uStack_a0 = uStack_198;
      local_a8 = local_1a0;
      local_b0[0] = 6;
      local_1a0 = 0;
      uStack_198 = 0;
      local_98 = local_190;
      local_190 = (void *)0x0;
                    /* try { // try from 007f3944 to 007f3953 has its CatchHandler @ 007f3c0c */
      pdVar10 = (dynamic *)folly::dynamic::operator[](local_e0,&DAT_00364f7a,&DAT_00364f7d);
      folly::dynamic::operator=(pdVar10,(dynamic *)local_b0);
      folly::dynamic::folly::dynamic::destroy(local_b0);
      if ((local_1a0 & 1) != 0) {
        operator_delete(local_190);
      }
      uVar12 = puVar18[10];
                    /* try { // try from 007f3978 to 007f39bf has its CatchHandler @ 007f3c2c */
      piVar9 = (int *)folly::dynamic::operator[](local_e0,"animated","");
      if (*piVar9 != 2) {
        folly::dynamic::folly::dynamic::destroy(piVar9);
        *piVar9 = 2;
      }
      *(byte *)(piVar9 + 2) = (byte)uVar12;
      bVar4 = *(byte *)((long)puVar18 + 0x51);
      piVar9 = (int *)folly::dynamic::operator[](local_e0,"disabled","");
      if (*piVar9 != 2) {
        folly::dynamic::folly::dynamic::destroy(piVar9);
        *piVar9 = 2;
      }
      pdVar10 = local_100;
      *(byte *)(piVar9 + 2) = bVar4;
      if (local_110[0] != 1) {
        if (*(long *)(lVar7 + 0x28) == local_80) {
                    /* try { // try from 007f3b18 to 007f3b27 has its CatchHandler @ 007f3be8 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099e338);
        }
        goto LAB_007f3c6c;
      }
      if (local_100 < pdStack_f8) {
        folly::dynamic::dynamic(local_100,(dynamic *)local_e0);
        local_100 = pdVar10 + 0x30;
      }
      else {
                    /* try { // try from 007f39fc to 007f3a0b has its CatchHandler @ 007f3bc4 */
        local_100 = (dynamic *)FUN_00801fe4(&local_108,local_e0);
      }
      folly::dynamic::folly::dynamic::destroy(local_e0);
    }
                    /* try { // try from 007f3a10 to 007f3a23 has its CatchHandler @ 007f3ba8 */
    pdVar10 = (dynamic *)folly::dynamic::operator[](local_140,&DAT_00369875,&DAT_0036987a);
    folly::dynamic::operator=(pdVar10,(dynamic *)local_110);
    folly::dynamic::folly::dynamic::destroy(local_110);
    PVar6 = param_1[0x708];
                    /* try { // try from 007f3a3c to 007f3a53 has its CatchHandler @ 007f3bb0 */
    piVar9 = (int *)folly::dynamic::operator[](local_140,"isSectionNitroLocked","");
    if (*piVar9 != 2) {
      folly::dynamic::folly::dynamic::destroy(piVar9);
      *piVar9 = 2;
    }
    *(Props *)(piVar9 + 2) = PVar6;
                    /* try { // try from 007f3a78 to 007f3a8b has its CatchHandler @ 007f3ba4 */
    pdVar10 = (dynamic *)folly::dynamic::operator[](in_x8,"rowData","");
    folly::dynamic::operator=(pdVar10,(dynamic *)local_140);
    puVar11 = local_140;
  }
  folly::dynamic::folly::dynamic::destroy(puVar11);
LAB_007f3ad0:
  if (*(long *)(lVar7 + 0x28) == local_80) {
    return;
  }
LAB_007f3c6c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007f3c70  FUN_007f3c70 =====

void FUN_007f3c70(void)

{
  FUN_00788b10(&DAT_009ad2d0,PTR_PTR_0099dfa0 + 0x10);
  DAT_009ad8ac = 0;
  DAT_009ad8b0 = 0;
  DAT_009ad910 = 0;
  DAT_009ad918 = 0;
  DAT_009ad978 = 0;
  DAT_009ad988 = 0;
  DAT_009ad98c = 0;
  DAT_009ad990 = 0;
  DAT_009ad994 = 0;
  DAT_009ad998 = 0;
  DAT_009ad99c = 0;
  DAT_009ad9a0 = 0;
  DAT_009ad9a4 = 0;
  DAT_009ad9a8 = 0;
  DAT_009ad9ac = 0;
  DAT_009ad980 = 0;
  DAT_009ad984 = 0;
  DAT_009ad9b0 = 0;
  DAT_009ad2d0 = PTR_vtable_0099df98 + 0x20;
  DAT_009ad9b8 = 0;
  DAT_009ad9c8 = 0;
  DAT_009ad9c0 = 0;
  DAT_009ad9d8 = 0;
  DAT_009ad9d0 = 0;
  return;
}


// ===== 007f3d10  FUN_007f3d10 =====

void FUN_007f3d10(long param_1)

{
  long lVar1;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_30 = param_1 + 0x6f0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0079bf5c(&local_30);
  FUN_0078917c(param_1,PTR_PTR_0099dfa0 + 8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007f3d78  facebook::react::DCDFastImageViewProps::DCDFastImageViewProps =====

/* facebook::react::DCDFastImageViewProps::DCDFastImageViewProps(facebook::react::PropsParserContext
   const&, facebook::react::DCDFastImageViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::DCDFastImageViewProps::DCDFastImageViewProps
          (DCDFastImageViewProps *this,PropsParserContext *param_1,DCDFastImageViewProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  byte *pbVar3;
  function *in_x4;
  long lVar4;
  byte local_100 [16];
  void *local_f0;
  char local_e8;
  long *local_e0;
  char local_60;
  long local_58;
  
  pbVar3 = local_100;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_e0 = (long *)0x0;
                    /* try { // try from 007f3db8 to 007f3dc7 has its CatchHandler @ 007f40a4 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if ((byte *)local_e0 == local_100) {
    lVar4 = 4;
  }
  else {
    if (local_e0 == (long *)0x0) goto LAB_007f3df4;
    lVar4 = 5;
    pbVar3 = (byte *)local_e0;
  }
  (**(code **)(*(long *)pbVar3 + lVar4 * 8))();
LAB_007f3df4:
  local_100[0] = 0;
  local_60 = '\0';
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 007f3e04 to 007f3e17 has its CatchHandler @ 007f4090 */
  FUN_007f40dc(this + 0x6e0);
  if (local_60 != '\0') {
    FUN_0079dd90(local_100);
  }
  local_100[0] = 10;
  local_100[1] = 99;
  local_100[2] = 0x6f;
  local_100[3] = 0x76;
  local_100[4] = 0x65;
  local_100[5] = 0x72;
  local_100[6] = 0;
                    /* try { // try from 007f3e44 to 007f3e6b has its CatchHandler @ 007f407c */
  FUN_007ea274(this + 0x788,param_2);
  if ((local_100[0] & 1) != 0) {
    operator_delete(local_f0);
  }
  local_100[0] = 0;
  local_e8 = '\0';
                    /* try { // try from 007f3e84 to 007f3eab has its CatchHandler @ 007f4018 */
  FUN_007ec9b8(this + 0x7a0,param_2);
  if ((local_e8 != '\0') && ((local_100[0] & 1) != 0)) {
    operator_delete(local_f0);
  }
  local_100[0] = 1;
                    /* try { // try from 007f3ecc to 007f3eef has its CatchHandler @ 007f3ff8 */
  bVar2 = FUN_007ea510(param_2);
  local_100[0] = 0;
  this[0x7c0] = (DCDFastImageViewProps)(bVar2 & 1);
                    /* try { // try from 007f3efc to 007f3f1f has its CatchHandler @ 007f3ff4 */
  bVar2 = FUN_007ea510(param_2);
  local_100[0] = 0;
  this[0x7c1] = (DCDFastImageViewProps)(bVar2 & 1);
                    /* try { // try from 007f3f2c to 007f3f4f has its CatchHandler @ 007f3ff0 */
  bVar2 = FUN_007ea510(param_2);
  this[0x7c2] = (DCDFastImageViewProps)(bVar2 & 1);
  local_100[0] = 1;
                    /* try { // try from 007f3f60 to 007f3f83 has its CatchHandler @ 007f3fec */
  bVar2 = FUN_007ea510(param_2);
  local_100[0] = 0;
  this[0x7c3] = (DCDFastImageViewProps)(bVar2 & 1);
                    /* try { // try from 007f3f90 to 007f3fb3 has its CatchHandler @ 007f3fe8 */
  bVar2 = FUN_007ea510(param_2);
  this[0x7c4] = (DCDFastImageViewProps)(bVar2 & 1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007f40dc  FUN_007f40dc =====

void FUN_007f40dc(undefined1 *param_1,char *param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  lVar3 = facebook::react::RawProps::at(param_2,"source",(char *)0x0);
  if (lVar3 == 0) {
    cVar1 = *(char *)(param_3 + 0xa0);
    *param_1 = 0;
    param_1[0xa0] = 0;
    if (cVar1 != '\0') {
                    /* try { // try from 007f4138 to 007f4143 has its CatchHandler @ 007f42ec */
      FUN_0081c904(param_1,param_3);
      param_1[0xa0] = 1;
    }
  }
  else {
    uVar4 = FUN_00807970();
    if ((uVar4 & 1) == 0) {
      if (*(long *)(lVar2 + 0x28) == lVar5) {
        FUN_0081c698(param_1,param_4);
        return;
      }
      goto LAB_007f4318;
    }
    *param_1 = 0;
    param_1[0xa0] = 0;
                    /* try { // try from 007f4188 to 007f4193 has its CatchHandler @ 007f41c8 */
    FUN_0081c6ec(lVar3,param_1);
  }
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return;
  }
LAB_007f4318:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007f431c  facebook::react::DCDFastImageViewProps::DCDFastImageViewProps =====

/* facebook::react::DCDFastImageViewProps::DCDFastImageViewProps(facebook::react::PropsParserContext
   const&, facebook::react::DCDFastImageViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::DCDFastImageViewProps::DCDFastImageViewProps
          (DCDFastImageViewProps *this,PropsParserContext *param_1,DCDFastImageViewProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  byte local_100 [16];
  void *local_f0;
  char local_e8;
  long *local_e0;
  char local_60;
  long local_58;
  
  pbVar3 = local_100;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_e0 = (long *)0x0;
                    /* try { // try from 007f4358 to 007f437b has its CatchHandler @ 007f4660 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099dfb8 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if ((byte *)local_e0 == local_100) {
    lVar4 = 4;
  }
  else {
    if (local_e0 == (long *)0x0) goto LAB_007f43a8;
    lVar4 = 5;
    pbVar3 = (byte *)local_e0;
  }
  (**(code **)(*(long *)pbVar3 + lVar4 * 8))();
LAB_007f43a8:
  local_100[0] = 0;
  local_60 = '\0';
  *(undefined **)this = PTR_vtable_0099dfb0 + 0x20;
                    /* try { // try from 007f43c0 to 007f43d3 has its CatchHandler @ 007f464c */
  FUN_007f40dc(this + 0x6e0,param_3,param_2 + 0x6e0,local_100);
  if (local_60 != '\0') {
    FUN_0079dd90(local_100);
  }
  local_100[0] = 10;
  local_100[1] = 99;
  local_100[2] = 0x6f;
  local_100[3] = 0x76;
  local_100[4] = 0x65;
  local_100[5] = 0x72;
  local_100[6] = 0;
                    /* try { // try from 007f4400 to 007f4427 has its CatchHandler @ 007f4638 */
  FUN_007ea274(this + 0x788,param_1,param_3,"resizeMode",param_2 + 0x788,local_100,0,0);
  if ((local_100[0] & 1) != 0) {
    operator_delete(local_f0);
  }
  local_100[0] = 0;
  local_e8 = '\0';
                    /* try { // try from 007f4440 to 007f4467 has its CatchHandler @ 007f45d4 */
  FUN_007ec9b8(this + 0x7a0,param_1,param_3,"placeholder",param_2 + 0x7a0,local_100,0,0);
  if ((local_e8 != '\0') && ((local_100[0] & 1) != 0)) {
    operator_delete(local_f0);
  }
  local_100[0] = 1;
                    /* try { // try from 007f4488 to 007f44ab has its CatchHandler @ 007f45b4 */
  bVar2 = FUN_007ea510(param_1,param_3,"enableAnimation",param_2 + 0x7c0,local_100,0,0);
  local_100[0] = 0;
  this[0x7c0] = (DCDFastImageViewProps)(bVar2 & 1);
                    /* try { // try from 007f44b8 to 007f44db has its CatchHandler @ 007f45b0 */
  bVar2 = FUN_007ea510(param_1,param_3,"paused",param_2 + 0x7c1,local_100,0,0);
  local_100[0] = 0;
  this[0x7c1] = (DCDFastImageViewProps)(bVar2 & 1);
                    /* try { // try from 007f44e8 to 007f450b has its CatchHandler @ 007f45ac */
  bVar2 = FUN_007ea510(param_1,param_3,"manualPlayback",param_2 + 0x7c2,local_100,0,0);
  this[0x7c2] = (DCDFastImageViewProps)(bVar2 & 1);
  local_100[0] = 1;
                    /* try { // try from 007f451c to 007f453f has its CatchHandler @ 007f45a8 */
  bVar2 = FUN_007ea510(param_1,param_3,&DAT_0036a7c9,param_2 + 0x7c3,local_100,0,0);
  local_100[0] = 0;
  this[0x7c3] = (DCDFastImageViewProps)(bVar2 & 1);
                    /* try { // try from 007f454c to 007f456f has its CatchHandler @ 007f45a4 */
  bVar2 = FUN_007ea510(param_1,param_3,"usesSmallCache",param_2 + 0x7c4,local_100,0,0);
  this[0x7c4] = (DCDFastImageViewProps)(bVar2 & 1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007f4698  facebook::react::DCDFastImageViewProps::getDiffPropsImplementationTarget =====

/* facebook::react::DCDFastImageViewProps::getDiffPropsImplementationTarget() const */

char * facebook::react::DCDFastImageViewProps::getDiffPropsImplementationTarget(void)

{
  return "DCDFastImageView";
}


// ===== 007f46a4  facebook::react::DCDFastImageViewProps::getDiffProps =====

/* facebook::react::DCDFastImageViewProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::DCDFastImageViewProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  ulong uVar2;
  size_t sVar3;
  byte *pbVar4;
  Props PVar5;
  Props PVar6;
  long lVar7;
  int iVar8;
  undefined4 *puVar9;
  dynamic *pdVar10;
  int *piVar11;
  Props *in_x1;
  Props *pPVar12;
  undefined4 *in_x8;
  ulong uVar13;
  ulong uVar14;
  Props *pPVar15;
  size_t sVar16;
  Props PVar17;
  byte *pbVar18;
  char *__s1;
  byte *pbVar19;
  float fVar20;
  ulong local_210;
  undefined8 uStack_208;
  void *local_200;
  ulong local_1f0;
  undefined8 uStack_1e8;
  void *local_1e0;
  ulong local_1d0;
  undefined8 uStack_1c8;
  void *local_1c0;
  ulong local_1b0;
  undefined8 uStack_1a8;
  void *local_1a0;
  ulong local_190;
  undefined8 uStack_188;
  void *local_180;
  ulong local_170;
  undefined8 uStack_168;
  void *local_160;
  ulong local_150;
  undefined8 uStack_148;
  void *local_140;
  undefined4 local_138 [2];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined4 local_108 [2];
  ulong local_100;
  undefined8 uStack_f8;
  void *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8 [2];
  undefined4 local_d0;
  char cStack_cc;
  undefined2 uStack_cb;
  char cStack_c9;
  uint uStack_c8;
  char cStack_c4;
  undefined2 uStack_c3;
  undefined1 uStack_c1;
  void *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8 [2];
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  if (((DAT_009ae1b0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_009ae1b0), iVar8 != 0)) {
    memset(&DAT_009ad9e8,0,0x7c8);
                    /* try { // try from 007f5350 to 007f5353 has its CatchHandler @ 007f5384 */
    FUN_007f5530();
    __cxa_atexit(FUN_007f55fc,&DAT_009ad9e8,&PTR_LOOP_008d5d30);
    __cxa_guard_release(&DAT_009ae1b0);
  }
  pPVar1 = (Props *)&DAT_009ad9e8;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    local_88 = 0;
    local_a8[0] = 5;
    uStack_98 = 0;
    local_90 = (void *)0x0;
    local_80 = 0x3f800000;
    *in_x8 = 5;
    local_a0 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_a8);
    goto LAB_007f52b4;
  }
  ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
  PVar5 = param_1[0x780];
  if ((PVar5 == (Props)0x0) || (pPVar1[0x780] == (Props)0x0)) {
    if ((PVar5 != (Props)0x0) == (pPVar1[0x780] != (Props)0x0)) goto LAB_007f4ed8;
LAB_007f47f8:
    if (PVar5 != (Props)0x0) goto LAB_007f47fc;
    local_a8[0] = 0;
    local_a0 = 0;
                    /* try { // try from 007f52f0 to 007f5303 has its CatchHandler @ 007f5398 */
    pdVar10 = (dynamic *)folly::dynamic::operator[]();
    folly::dynamic::operator=(pdVar10,(dynamic *)local_a8);
    puVar9 = local_a8;
LAB_007f4ed4:
    folly::dynamic::folly::dynamic::destroy(puVar9);
  }
  else {
    if (*(int *)(param_1 + 0x6e0) != *(int *)(pPVar1 + 0x6e0)) {
LAB_007f47fc:
      local_88 = 0;
      local_a8[0] = 5;
      uStack_98 = 0;
      local_90 = (void *)0x0;
      local_80 = 0x3f800000;
      local_138[0] = 5;
      local_a0 = 0;
      local_130 = 0;
      uStack_128 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_110 = 0x3f800000;
      folly::dynamic::folly::dynamic::destroy(local_a8);
      if (*(int *)(param_1 + 0x6e0) == 2) {
        local_a8[0] = 6;
        local_a0 = 0x6c61636f6c0a;
                    /* try { // try from 007f48ac to 007f48bf has its CatchHandler @ 007f53c0 */
        pdVar10 = (dynamic *)folly::dynamic::operator[](local_138,&DAT_0036e67d,&DAT_0036e681);
      }
      else if (*(int *)(param_1 + 0x6e0) == 1) {
        local_a8[0] = 6;
        local_a0 = 0x65746f6d65720c;
                    /* try { // try from 007f486c to 007f487f has its CatchHandler @ 007f53c8 */
        pdVar10 = (dynamic *)folly::dynamic::operator[](local_138,&DAT_0036e67d,&DAT_0036e681);
      }
      else {
        uStack_98 = uStack_98 & 0xffffffffffffff00;
        local_a8[0] = 6;
        local_a0 = 0x64696c61766e690e;
                    /* try { // try from 007f48f0 to 007f4903 has its CatchHandler @ 007f53b8 */
        pdVar10 = (dynamic *)folly::dynamic::operator[](local_138,&DAT_0036e67d,&DAT_0036e681);
      }
      folly::dynamic::operator=(pdVar10,(dynamic *)local_a8);
      folly::dynamic::folly::dynamic::destroy(local_a8);
      if (((byte)param_1[0x6e8] & 1) == 0) {
        uStack_148 = *(undefined8 *)(param_1 + 0x6f0);
        local_150 = *(ulong *)(param_1 + 0x6e8);
        local_140 = *(void **)(param_1 + 0x6f8);
      }
      else {
                    /* try { // try from 007f493c to 007f4943 has its CatchHandler @ 007f53e8 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_150,*(char **)(param_1 + 0x6f8),*(ulong *)(param_1 + 0x6f0));
      }
      local_a8[0] = 6;
      uStack_98 = uStack_148;
      local_a0 = local_150;
      local_90 = local_140;
      local_150 = 0;
      uStack_148 = 0;
      local_140 = (void *)0x0;
                    /* try { // try from 007f4964 to 007f4977 has its CatchHandler @ 007f5474 */
      pdVar10 = (dynamic *)folly::dynamic::operator[](local_138,&DAT_0036c4b0,&DAT_0036c4b3);
      folly::dynamic::operator=(pdVar10,(dynamic *)local_a8);
      folly::dynamic::folly::dynamic::destroy(local_a8);
      if ((local_150 & 1) != 0) {
        operator_delete(local_140);
      }
      PVar5 = param_1[0x700];
                    /* try { // try from 007f499c to 007f49af has its CatchHandler @ 007f54b8 */
      piVar11 = (int *)folly::dynamic::operator[](local_138,"isFor","");
      if (*piVar11 != 2) {
        folly::dynamic::folly::dynamic::destroy(piVar11);
        *piVar11 = 2;
      }
      *(Props *)(piVar11 + 2) = PVar5;
      if (((byte)param_1[0x708] & 1) == 0) {
        uStack_168 = *(undefined8 *)(param_1 + 0x710);
        local_170 = *(ulong *)(param_1 + 0x708);
        local_160 = *(void **)(param_1 + 0x718);
      }
      else {
                    /* try { // try from 007f49fc to 007f4a03 has its CatchHandler @ 007f53e4 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_170,*(char **)(param_1 + 0x718),*(ulong *)(param_1 + 0x710));
      }
      local_a8[0] = 6;
      uStack_98 = uStack_168;
      local_a0 = local_170;
      local_90 = local_160;
      local_170 = 0;
      uStack_168 = 0;
      local_160 = (void *)0x0;
                    /* try { // try from 007f4a24 to 007f4a37 has its CatchHandler @ 007f5454 */
      pdVar10 = (dynamic *)folly::dynamic::operator[](local_138,"bundle","");
      folly::dynamic::operator=(pdVar10,(dynamic *)local_a8);
      folly::dynamic::folly::dynamic::destroy(local_a8);
      if ((local_170 & 1) != 0) {
        operator_delete(local_160);
      }
      fVar20 = *(float *)(param_1 + 0x720);
                    /* try { // try from 007f4a5c to 007f4a6f has its CatchHandler @ 007f54b8 */
      piVar11 = (int *)folly::dynamic::operator[](local_138,"scale","");
      if (*piVar11 != 3) {
        folly::dynamic::folly::dynamic::destroy(piVar11);
        *piVar11 = 3;
      }
      local_d8[0] = 5;
      local_a8[0] = 5;
      *(double *)(piVar11 + 2) = (double)fVar20;
      local_b8 = 0;
      uStack_c8 = 0;
      cStack_c4 = 0;
      uStack_c3 = 0;
      uStack_c1 = 0;
      local_c0 = (void *)0x0;
      local_b0 = 0x3f800000;
      local_d0 = 0;
      cStack_cc = 0;
      uStack_cb = 0;
      cStack_c9 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = (void *)0x0;
      local_88 = 0;
      local_80 = CONCAT44(local_80._4_4_,0x3f800000);
      folly::dynamic::folly::dynamic::destroy(local_d8);
      fVar20 = *(float *)(param_1 + 0x724);
                    /* try { // try from 007f4ad0 to 007f4b67 has its CatchHandler @ 007f54c0 */
      piVar11 = (int *)folly::dynamic::operator[](local_a8,"width","");
      if (*piVar11 != 3) {
        folly::dynamic::folly::dynamic::destroy(piVar11);
        *piVar11 = 3;
      }
      *(double *)(piVar11 + 2) = (double)fVar20;
      fVar20 = *(float *)(param_1 + 0x728);
      piVar11 = (int *)folly::dynamic::operator[](local_a8,"height","");
      if (*piVar11 != 3) {
        folly::dynamic::folly::dynamic::destroy(piVar11);
        *piVar11 = 3;
      }
      *(double *)(piVar11 + 2) = (double)fVar20;
      pdVar10 = (dynamic *)folly::dynamic::operator[](local_138,&DAT_0036ff78,&DAT_0036ff7c);
      folly::dynamic::operator=(pdVar10,(dynamic *)local_a8);
      if (((byte)param_1[0x730] & 1) == 0) {
        uStack_188 = *(undefined8 *)(param_1 + 0x738);
        local_190 = *(ulong *)(param_1 + 0x730);
        local_180 = *(void **)(param_1 + 0x740);
      }
      else {
                    /* try { // try from 007f4b90 to 007f4b97 has its CatchHandler @ 007f53dc */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_190,*(char **)(param_1 + 0x740),*(ulong *)(param_1 + 0x738));
      }
      local_d8[0] = 6;
      uStack_c8 = (uint)uStack_188;
      cStack_c4 = (char)((ulong)uStack_188 >> 0x20);
      uStack_c3 = (undefined2)((ulong)uStack_188 >> 0x28);
      uStack_c1 = (undefined1)((ulong)uStack_188 >> 0x38);
      local_d0 = (undefined4)local_190;
      cStack_cc = (char)(local_190 >> 0x20);
      uStack_cb = (undefined2)(local_190 >> 0x28);
      cStack_c9 = (char)(local_190 >> 0x38);
      local_c0 = local_180;
      local_190 = 0;
      uStack_188 = 0;
      local_180 = (void *)0x0;
                    /* try { // try from 007f4bb8 to 007f4bcb has its CatchHandler @ 007f5434 */
      pdVar10 = (dynamic *)folly::dynamic::operator[](local_138,&DAT_00366338,&DAT_0036633c);
      folly::dynamic::operator=(pdVar10,(dynamic *)local_d8);
      folly::dynamic::folly::dynamic::destroy(local_d8);
      if ((local_190 & 1) != 0) {
        operator_delete(local_180);
      }
      if (((byte)param_1[0x748] & 1) == 0) {
        uStack_1a8 = *(undefined8 *)(param_1 + 0x750);
        local_1b0 = *(ulong *)(param_1 + 0x748);
        local_1a0 = *(void **)(param_1 + 0x758);
      }
      else {
                    /* try { // try from 007f4c14 to 007f4c1b has its CatchHandler @ 007f53d4 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_1b0,*(char **)(param_1 + 0x758),*(ulong *)(param_1 + 0x750));
      }
      local_d8[0] = 6;
      uStack_c8 = (uint)uStack_1a8;
      cStack_c4 = (char)((ulong)uStack_1a8 >> 0x20);
      uStack_c3 = (undefined2)((ulong)uStack_1a8 >> 0x28);
      uStack_c1 = (undefined1)((ulong)uStack_1a8 >> 0x38);
      local_d0 = (undefined4)local_1b0;
      cStack_cc = (char)(local_1b0 >> 0x20);
      uStack_cb = (undefined2)(local_1b0 >> 0x28);
      cStack_c9 = (char)(local_1b0 >> 0x38);
      local_c0 = local_1a0;
      local_1b0 = 0;
      uStack_1a8 = 0;
      local_1a0 = (void *)0x0;
                    /* try { // try from 007f4c3c to 007f4c4f has its CatchHandler @ 007f5414 */
      pdVar10 = (dynamic *)folly::dynamic::operator[](local_138,"method","");
      folly::dynamic::operator=(pdVar10,(dynamic *)local_d8);
      folly::dynamic::folly::dynamic::destroy(local_d8);
      if ((local_1b0 & 1) != 0) {
        operator_delete(local_1a0);
      }
      iVar8 = *(int *)(param_1 + 0x760);
      if (iVar8 == 1) {
        cStack_c9 = '\0';
        local_d8[0] = 6;
        local_d0 = 0x6c65720c;
        cStack_cc = 'o';
        uStack_cb = 0x6461;
                    /* try { // try from 007f4d40 to 007f4d53 has its CatchHandler @ 007f53ac */
        pdVar10 = (dynamic *)folly::dynamic::operator[](local_138,"cache","");
      }
      else if (iVar8 == 2) {
        cStack_c4 = '\0';
        local_d8[0] = 6;
        local_d0._1_3_ = (undefined3)s_force_cache_00365d5c._0_8_;
        local_d0 = CONCAT31(local_d0._1_3_,0x16);
        cStack_cc = SUB81(s_force_cache_00365d5c._0_8_,3);
        uStack_cb = SUB82(s_force_cache_00365d5c._0_8_,4);
        cStack_c9 = SUB81(s_force_cache_00365d5c._0_8_,6);
        uStack_c8 = CONCAT31(0x656863,SUB81(s_force_cache_00365d5c._0_8_,7));
                    /* try { // try from 007f4d00 to 007f4d13 has its CatchHandler @ 007f53b0 */
        pdVar10 = (dynamic *)folly::dynamic::operator[](local_138,"cache","");
      }
      else if (iVar8 == 3) {
        local_d8[0] = 6;
        local_d0._1_3_ = s_only_i_0036e033._0_3_;
        local_d0 = CONCAT31(local_d0._1_3_,0x1c);
        cStack_cc = s_only_i_0036e033[3];
        uStack_cb = s_only_i_0036e033._4_2_;
        cStack_c9 = (char)s_f_cached_0036e039._0_2_;
        uStack_c8 = (uint)(CONCAT62(s_f_cached_0036e039._2_6_,s_f_cached_0036e039._0_2_) >> 8);
        cStack_c4 = SUB61(s_f_cached_0036e039._2_6_,3);
        uStack_c3 = SUB62(s_f_cached_0036e039._2_6_,4);
        uStack_c1 = 0;
                    /* try { // try from 007f4cc0 to 007f4ccb has its CatchHandler @ 007f53b4 */
        pdVar10 = (dynamic *)folly::dynamic::operator[](local_138,"cache","");
      }
      else {
        local_d8[0] = 6;
        local_d0 = 0x6665640e;
        uStack_c8 = uStack_c8 & 0xffffff00;
        cStack_cc = 'a';
        uStack_cb = 0x6c75;
        cStack_c9 = 't';
                    /* try { // try from 007f4d80 to 007f4d8b has its CatchHandler @ 007f53a8 */
        pdVar10 = (dynamic *)folly::dynamic::operator[](local_138,"cache","");
      }
      folly::dynamic::operator=(pdVar10,(dynamic *)local_d8);
      folly::dynamic::folly::dynamic::destroy(local_d8);
      local_e8 = 0;
      local_108[0] = 5;
      uStack_f8 = 0;
      local_f0 = (void *)0x0;
      local_e0 = 0x3f800000;
      local_d8[0] = 5;
      local_100 = 0;
      local_d0 = 0;
      cStack_cc = 0;
      uStack_cb = 0;
      cStack_c9 = 0;
      uStack_c8 = 0;
      cStack_c4 = 0;
      uStack_c3 = 0;
      uStack_c1 = 0;
      local_c0 = (void *)0x0;
      local_b8 = 0;
      local_b0 = CONCAT44(local_b0._4_4_,0x3f800000);
      folly::dynamic::folly::dynamic::destroy(local_108);
      pbVar19 = *(byte **)(param_1 + 0x770);
      for (pbVar18 = *(byte **)(param_1 + 0x768); pbVar18 != pbVar19; pbVar18 = pbVar18 + 0x30) {
        if ((*(ulong *)(pbVar18 + 0x18) & 1) == 0) {
          local_1c0 = *(void **)(pbVar18 + 0x28);
          uStack_1c8 = *(undefined8 *)(pbVar18 + 0x20);
          local_1d0 = *(ulong *)(pbVar18 + 0x18);
        }
        else {
                    /* try { // try from 007f4e1c to 007f4e23 has its CatchHandler @ 007f54d0 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_1d0,*(char **)(pbVar18 + 0x28),*(ulong *)(pbVar18 + 0x20));
        }
        uStack_f8 = uStack_1c8;
        local_100 = local_1d0;
        local_108[0] = 6;
        local_1d0 = 0;
        uStack_1c8 = 0;
        local_f0 = local_1c0;
        local_1c0 = (void *)0x0;
        uVar13 = *(ulong *)(pbVar18 + 8);
        pbVar4 = *(byte **)(pbVar18 + 0x10);
        if ((*pbVar18 & 1) == 0) {
          pbVar4 = pbVar18 + 1;
          uVar13 = (ulong)(*pbVar18 >> 1);
        }
                    /* try { // try from 007f4e58 to 007f4e63 has its CatchHandler @ 007f54d8 */
        pdVar10 = (dynamic *)folly::dynamic::operator[](local_d8,pbVar4,pbVar4 + uVar13);
        folly::dynamic::operator=(pdVar10,(dynamic *)local_108);
        folly::dynamic::folly::dynamic::destroy(local_108);
        if ((local_1d0 & 1) != 0) {
          operator_delete(local_1c0);
        }
      }
                    /* try { // try from 007f4e88 to 007f4ea3 has its CatchHandler @ 007f54b4 */
      pdVar10 = (dynamic *)folly::dynamic::operator[](local_138,"headers","");
      folly::dynamic::operator=(pdVar10,(dynamic *)local_d8);
      folly::dynamic::folly::dynamic::destroy(local_d8);
      folly::dynamic::folly::dynamic::destroy(local_a8);
                    /* try { // try from 007f4eb4 to 007f4ec7 has its CatchHandler @ 007f5410 */
      pdVar10 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar10,(dynamic *)local_138);
      puVar9 = local_138;
      goto LAB_007f4ed4;
    }
    PVar17 = param_1[0x6e8];
    PVar6 = pPVar1[0x6e8];
    uVar13 = (ulong)((byte)PVar17 >> 1);
    sVar16 = uVar13;
    if (((byte)PVar17 & 1) != 0) {
      sVar16 = *(size_t *)(param_1 + 0x6f0);
    }
    sVar3 = (ulong)((byte)PVar6 >> 1);
    if (((byte)PVar6 & 1) != 0) {
      sVar3 = *(size_t *)(pPVar1 + 0x6f0);
    }
    if (sVar16 != sVar3) goto LAB_007f47fc;
    pPVar12 = pPVar1 + 0x6e9;
    if (((byte)PVar6 & 1) != 0) {
      pPVar12 = *(Props **)(pPVar1 + 0x6f8);
    }
    if (((byte)PVar17 & 1) == 0) {
      if (1 < (byte)PVar17) {
        pPVar15 = param_1 + 0x6e9;
        do {
          if (*pPVar15 != *pPVar12) goto LAB_007f47f8;
          uVar13 = uVar13 - 1;
          pPVar15 = pPVar15 + 1;
          pPVar12 = pPVar12 + 1;
        } while (uVar13 != 0);
      }
    }
    else {
      iVar8 = memcmp(*(void **)(param_1 + 0x6f8),pPVar12,*(size_t *)(param_1 + 0x6f0));
      if (iVar8 != 0) goto LAB_007f47fc;
    }
  }
LAB_007f4ed8:
  PVar5 = param_1[0x788];
  PVar17 = pPVar1[0x788];
  sVar16 = *(size_t *)(param_1 + 0x790);
  uVar14 = (ulong)((byte)PVar5 >> 1);
  uVar13 = uVar14;
  if (((byte)PVar5 & 1) != 0) {
    uVar13 = sVar16;
  }
  uVar2 = (ulong)((byte)PVar17 >> 1);
  if (((byte)PVar17 & 1) != 0) {
    uVar2 = *(ulong *)(pPVar1 + 0x790);
  }
  if (uVar13 == uVar2) {
    pPVar12 = pPVar1 + 0x789;
    if (((byte)PVar17 & 1) != 0) {
      pPVar12 = *(Props **)(pPVar1 + 0x798);
    }
    if (((byte)PVar5 & 1) == 0) {
      if (1 < (byte)PVar5) {
        pPVar15 = param_1 + 0x789;
        do {
          if (*pPVar15 != *pPVar12) goto LAB_007f4f4c;
          uVar14 = uVar14 - 1;
          pPVar15 = pPVar15 + 1;
          pPVar12 = pPVar12 + 1;
        } while (uVar14 != 0);
      }
    }
    else {
      __s1 = *(char **)(param_1 + 0x798);
      iVar8 = memcmp(__s1,pPVar12,sVar16);
      if (iVar8 != 0) goto LAB_007f4f84;
    }
  }
  else {
LAB_007f4f4c:
    if (((byte)PVar5 & 1) == 0) {
      uStack_1e8 = *(undefined8 *)(param_1 + 0x790);
      local_1f0 = *(ulong *)(param_1 + 0x788);
      local_1e0 = *(void **)(param_1 + 0x798);
    }
    else {
      __s1 = *(char **)(param_1 + 0x798);
LAB_007f4f84:
                    /* try { // try from 007f4f84 to 007f4f93 has its CatchHandler @ 007f53ec */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_1f0,__s1,sVar16);
    }
    local_a8[0] = 6;
    uStack_98 = uStack_1e8;
    local_a0 = local_1f0;
    local_90 = local_1e0;
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_1e0 = (void *)0x0;
                    /* try { // try from 007f4fb4 to 007f4fc7 has its CatchHandler @ 007f5494 */
    pdVar10 = (dynamic *)folly::dynamic::operator[]();
    folly::dynamic::operator=(pdVar10,(dynamic *)local_a8);
    folly::dynamic::folly::dynamic::destroy(local_a8);
    if ((local_1f0 & 1) != 0) {
      operator_delete(local_1e0);
    }
  }
  PVar5 = param_1[0x7b8];
  if ((PVar5 == (Props)0x0) || (pPVar1[0x7b8] == (Props)0x0)) {
    if ((PVar5 != (Props)0x0) != (pPVar1[0x7b8] != (Props)0x0)) {
LAB_007f5088:
      if (PVar5 != (Props)0x0) {
        PVar17 = param_1[0x7a0];
        goto LAB_007f50a0;
      }
      local_a8[0] = 0;
      local_a0 = 0;
                    /* try { // try from 007f5128 to 007f513b has its CatchHandler @ 007f539c */
      pdVar10 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar10,(dynamic *)local_a8);
      folly::dynamic::folly::dynamic::destroy(local_a8);
    }
  }
  else {
    PVar17 = param_1[0x7a0];
    PVar6 = pPVar1[0x7a0];
    uVar13 = (ulong)((byte)PVar17 >> 1);
    sVar16 = uVar13;
    if (((byte)PVar17 & 1) != 0) {
      sVar16 = *(size_t *)(param_1 + 0x7a8);
    }
    sVar3 = (ulong)((byte)PVar6 >> 1);
    if (((byte)PVar6 & 1) != 0) {
      sVar3 = *(size_t *)(pPVar1 + 0x7a8);
    }
    if (sVar16 == sVar3) {
      pPVar12 = pPVar1 + 0x7a1;
      if (((byte)PVar6 & 1) != 0) {
        pPVar12 = *(Props **)(pPVar1 + 0x7b0);
      }
      if (((byte)PVar17 & 1) == 0) {
        if (1 < (byte)PVar17) {
          pPVar15 = param_1 + 0x7a1;
          do {
            if (*pPVar15 != *pPVar12) goto LAB_007f5088;
            uVar13 = uVar13 - 1;
            pPVar15 = pPVar15 + 1;
            pPVar12 = pPVar12 + 1;
          } while (uVar13 != 0);
        }
      }
      else {
        iVar8 = memcmp(*(void **)(param_1 + 0x7b0),pPVar12,*(size_t *)(param_1 + 0x7a8));
        if (iVar8 != 0) goto LAB_007f50a0;
      }
    }
    else {
LAB_007f50a0:
      if (((byte)PVar17 & 1) == 0) {
        uStack_208 = *(undefined8 *)(param_1 + 0x7a8);
        local_210 = *(ulong *)(param_1 + 0x7a0);
        local_200 = *(void **)(param_1 + 0x7b0);
      }
      else {
                    /* try { // try from 007f50c0 to 007f50c7 has its CatchHandler @ 007f53d0 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_210,*(char **)(param_1 + 0x7b0),*(ulong *)(param_1 + 0x7a8));
      }
      local_a8[0] = 6;
      uStack_98 = uStack_208;
      local_a0 = local_210;
      local_90 = local_200;
      local_210 = 0;
      uStack_208 = 0;
      local_200 = (void *)0x0;
                    /* try { // try from 007f50e8 to 007f50fb has its CatchHandler @ 007f53f0 */
      pdVar10 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar10,(dynamic *)local_a8);
      folly::dynamic::folly::dynamic::destroy(local_a8);
      if ((local_210 & 1) != 0) {
        operator_delete(local_200);
      }
    }
  }
  PVar5 = param_1[0x7c0];
  if (PVar5 != pPVar1[0x7c0]) {
                    /* try { // try from 007f515c to 007f528f has its CatchHandler @ 007f54c8 */
    piVar11 = (int *)folly::dynamic::operator[]();
    if (*piVar11 != 2) {
      folly::dynamic::folly::dynamic::destroy(piVar11);
      *piVar11 = 2;
    }
    *(Props *)(piVar11 + 2) = PVar5;
  }
  PVar5 = param_1[0x7c1];
  if (PVar5 != pPVar1[0x7c1]) {
    piVar11 = (int *)folly::dynamic::operator[]();
    if (*piVar11 != 2) {
      folly::dynamic::folly::dynamic::destroy(piVar11);
      *piVar11 = 2;
    }
    *(Props *)(piVar11 + 2) = PVar5;
  }
  PVar5 = param_1[0x7c2];
  if (PVar5 != pPVar1[0x7c2]) {
    piVar11 = (int *)folly::dynamic::operator[]();
    if (*piVar11 != 2) {
      folly::dynamic::folly::dynamic::destroy(piVar11);
      *piVar11 = 2;
    }
    *(Props *)(piVar11 + 2) = PVar5;
  }
  PVar5 = param_1[0x7c3];
  if (PVar5 != pPVar1[0x7c3]) {
    piVar11 = (int *)folly::dynamic::operator[]();
    if (*piVar11 != 2) {
      folly::dynamic::folly::dynamic::destroy(piVar11);
      *piVar11 = 2;
    }
    *(Props *)(piVar11 + 2) = PVar5;
  }
  PVar5 = param_1[0x7c4];
  if (PVar5 != pPVar1[0x7c4]) {
    piVar11 = (int *)folly::dynamic::operator[]();
    if (*piVar11 != 2) {
      folly::dynamic::folly::dynamic::destroy(piVar11);
      *piVar11 = 2;
    }
    *(Props *)(piVar11 + 2) = PVar5;
  }
LAB_007f52b4:
  if (*(long *)(lVar7 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 007f5530  FUN_007f5530 =====

void FUN_007f5530(void)

{
  FUN_00788b10(&DAT_009ad9e8,PTR_PTR_0099dfb8 + 0x10);
  DAT_009adfc4 = 0;
  DAT_009adfc8 = 0;
  DAT_009ae028 = 0;
  DAT_009ae030 = 0;
  DAT_009ae090 = 0;
  DAT_009ae0a0 = 0;
  DAT_009ae0a4 = 0;
  DAT_009ae0a8 = 0;
  DAT_009ae0ac = 0;
  DAT_009ae0b0 = 0;
  DAT_009ae0b4 = 0;
  DAT_009ae0b8 = 0;
  DAT_009ae0bc = 0;
  DAT_009ae0c0 = 0;
  DAT_009ae0c4 = 0;
  DAT_009ae098 = 0;
  DAT_009ae09c = 0;
  DAT_009ae0c8 = 0;
  DAT_009ad9e8 = PTR_vtable_0099dfb0 + 0x20;
  DAT_009ae170 = 10;
  DAT_009ae175 = 0x72;
  DAT_009ae168 = 0;
  DAT_009ae171 = 0x65766f63;
  DAT_009ae188 = 0;
  DAT_009ae1a0 = 0;
  DAT_009ae1a8 = (int)DAT_00374e78;
  DAT_009ae1ac = 0;
  return;
}


// ===== 007f55fc  FUN_007f55fc =====

void FUN_007f55fc(long param_1)

{
  if ((*(char *)(param_1 + 0x7b8) != '\0') && ((*(byte *)(param_1 + 0x7a0) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x7b0));
  }
  if ((*(byte *)(param_1 + 0x788) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x798));
  }
  if (*(char *)(param_1 + 0x780) != '\0') {
    FUN_0079dd90(param_1 + 0x6e0);
  }
  FUN_0078917c(param_1,PTR_PTR_0099dfb8 + 8);
  return;
}


// ===== 007f5660  facebook::react::FastestListProps::FastestListProps =====

/* facebook::react::FastestListProps::FastestListProps(facebook::react::PropsParserContext const&,
   facebook::react::FastestListProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::FastestListProps::FastestListProps
          (FastestListProps *this,PropsParserContext *param_1,FastestListProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  function *in_x4;
  long lVar4;
  undefined4 uVar5;
  undefined8 local_850;
  undefined8 local_848;
  void *pvStack_840;
  undefined8 local_838;
  long *plStack_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined1 local_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined4 local_7e0;
  undefined8 local_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined4 local_7c0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined1 local_788;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined8 local_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  ulong local_758;
  undefined1 local_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined1 local_658;
  undefined1 local_650;
  undefined1 local_558;
  undefined1 local_550;
  undefined1 local_458;
  undefined1 local_450;
  undefined1 local_358;
  undefined1 local_350;
  undefined1 local_258;
  undefined1 local_250;
  undefined1 local_158;
  undefined8 local_150;
  undefined5 uStack_148;
  undefined3 uStack_143;
  undefined5 uStack_140;
  undefined1 local_138;
  undefined1 local_134;
  undefined8 local_130;
  undefined1 local_128;
  undefined1 local_110;
  undefined1 local_108;
  undefined1 local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined1 local_ec;
  undefined1 local_e8;
  undefined1 local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined1 local_80;
  undefined1 local_78;
  undefined1 local_60;
  long local_58;
  
  plVar3 = &local_850;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plStack_830 = (long *)0x0;
                    /* try { // try from 007f56a0 to 007f56af has its CatchHandler @ 007f5a90 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if (plStack_830 == &local_850) {
    lVar4 = 4;
  }
  else {
    if (plStack_830 == (long *)0x0) goto LAB_007f56dc;
    lVar4 = 5;
    plVar3 = plStack_830;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007f56dc:
  local_850._0_4_ = 0;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 007f56e8 to 007f570b has its CatchHandler @ 007f5a88 */
  uVar5 = FUN_007f0fe0(param_2);
  *(undefined4 *)(this + 0x6e0) = uVar5;
  local_850 = (ulong)local_850._4_4_ << 0x20;
                    /* try { // try from 007f5714 to 007f5737 has its CatchHandler @ 007f5a80 */
  uVar5 = FUN_007f0fe0(param_2);
  *(undefined4 *)(this + 0x6e4) = uVar5;
  local_850 = local_850 & 0xffffffffffffff00;
                    /* try { // try from 007f5740 to 007f5763 has its CatchHandler @ 007f5a78 */
  bVar2 = FUN_007ea510(param_2);
  local_850 = local_850 & 0xffffffffffffff00;
  this[0x6e8] = (FastestListProps)(bVar2 & 1);
                    /* try { // try from 007f5770 to 007f5797 has its CatchHandler @ 007f5a70 */
  bVar2 = FUN_007ea510(param_2);
  local_850 = local_850 & 0xffffffffffffff00;
  this[0x6e9] = (FastestListProps)(bVar2 & 1);
  local_758 = local_758 & 0xffffffffffffff00;
  local_750 = 0;
  local_658 = 0;
  local_650 = 0;
  local_558 = 0;
  local_550 = 0;
  local_458 = 0;
  local_450 = 0;
  local_358 = 0;
  local_350 = 0;
  local_258 = 0;
  local_250 = 0;
  local_158 = 0;
  local_138 = 0;
  local_134 = 0;
  local_110 = 0;
  local_108 = 0;
  local_104 = 0;
  local_ec = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_80 = 0;
  local_78 = 0;
  local_60 = 0;
  uStack_140 = 0;
  uStack_148 = 0;
  uStack_143 = 0;
  local_150 = 0;
  local_128 = 0;
  local_130 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_98 = 0;
                    /* try { // try from 007f5848 to 007f585f has its CatchHandler @ 007f5a64 */
  FUN_007f5ac8(this + 0x6f0,param_2);
  FUN_0079ff04(&local_850);
  local_850 = 0;
  local_848 = 0;
  pvStack_840 = (void *)0x0;
                    /* try { // try from 007f5870 to 007f5897 has its CatchHandler @ 007f5a20 */
  FUN_007ea274(this + 0xee8,param_2);
  if ((local_850 & 1) != 0) {
    operator_delete(pvStack_840);
  }
  local_850 = local_850 & 0xffffffff00000000;
                    /* try { // try from 007f58ac to 007f58d3 has its CatchHandler @ 007f5a0c */
  uVar5 = FUN_007ece34(param_2);
  *(undefined4 *)(this + 0xf00) = uVar5;
  local_850 = local_850 & 0xffffffffffffff00;
  local_818 = 0;
  local_7e0 = 0;
  uStack_7b0 = 0;
  local_7b8 = 0;
  uStack_7a0 = 0;
  local_7a8 = 0;
  uStack_790 = 0;
  local_798 = 0;
  pvStack_840 = (void *)0x0;
  local_848 = 0;
  plStack_830 = (long *)0x0;
  local_838 = 0;
  uStack_820 = 0;
  local_828 = 0;
  uStack_808 = 0;
  local_810 = 0;
  uStack_7f8 = 0;
  uStack_800 = 0;
  uStack_7e8 = 0;
  local_7f0 = 0;
  local_7d0 = 0;
  uStack_7c8 = 0;
  local_7d8 = 0;
  local_7c0 = 0;
  local_788 = 0;
  local_750 = 0;
  uStack_768 = 0;
  local_770 = 0;
  local_758 = 0;
  uStack_760 = 0;
  uStack_778 = 0;
  local_780 = 0;
  uStack_730 = 0;
  local_738 = 0;
  uStack_720 = 0;
  uStack_728 = 0;
  uStack_740 = 0;
  local_748 = 0;
                    /* try { // try from 007f5934 to 007f594b has its CatchHandler @ 007f59fc */
  FUN_007f5ce8(this + 0xf08,param_2);
  FUN_0079fcd0(&local_850);
  local_850 = local_850 & 0xffffffffffffff00;
                    /* try { // try from 007f595c to 007f597f has its CatchHandler @ 007f59f0 */
  bVar2 = FUN_007ea510(param_2);
  local_850 = local_850 & 0xffffffffffffff00;
  this[0x1040] = (FastestListProps)(bVar2 & 1);
                    /* try { // try from 007f5994 to 007f59b7 has its CatchHandler @ 007f59ec */
  bVar2 = FUN_007ea510(param_2);
  this[0x1041] = (FastestListProps)(bVar2 & 1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007f5ac8  FUN_007f5ac8 =====

void FUN_007f5ac8(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = tpidr_el0;
  lVar3 = *(long *)(lVar4 + 0x28);
  lVar1 = facebook::react::RawProps::at(param_3,"placeholderConfig",(char *)0x0);
  if (lVar1 == 0) {
    lVar4 = *(long *)(lVar4 + 0x28);
  }
  else {
    uVar2 = FUN_00807970();
    if ((uVar2 & 1) != 0) {
      FUN_008208e8(param_1);
                    /* try { // try from 007f5b60 to 007f5b6f has its CatchHandler @ 007f5bb4 */
      FUN_00820994(param_2,lVar1,param_1);
      if (*(long *)(lVar4 + 0x28) == lVar3) {
        return;
      }
      goto LAB_007f5ce0;
    }
    lVar4 = *(long *)(lVar4 + 0x28);
    param_4 = param_5;
  }
  if (lVar4 == lVar3) {
    FUN_0081f750(param_1,param_4);
    return;
  }
LAB_007f5ce0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007f5ce8  FUN_007f5ce8 =====

void FUN_007f5ce8(undefined1 *param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = tpidr_el0;
  lVar3 = *(long *)(lVar4 + 0x28);
  lVar1 = facebook::react::RawProps::at(param_3,"sectionsVersioned",(char *)0x0);
  if (lVar1 == 0) {
    lVar4 = *(long *)(lVar4 + 0x28);
  }
  else {
    uVar2 = FUN_00807970();
    if ((uVar2 & 1) != 0) {
      *param_1 = 0;
      param_1[0x38] = 0;
      *(undefined4 *)(param_1 + 0x70) = 0;
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined8 *)(param_1 + 0xb8) = 0;
      param_1[200] = 0;
      param_1[0x100] = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      *(undefined8 *)(param_1 + 0xf0) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined8 *)(param_1 + 0x120) = 0;
      *(undefined8 *)(param_1 + 0x118) = 0;
      *(undefined8 *)(param_1 + 0x130) = 0;
      *(undefined8 *)(param_1 + 0x128) = 0;
      *(undefined8 *)(param_1 + 0x110) = 0;
      *(undefined8 *)(param_1 + 0x108) = 0;
                    /* try { // try from 007f5dd0 to 007f5ddf has its CatchHandler @ 007f5e24 */
      FUN_0082c368(param_2,lVar1,param_1);
      if (*(long *)(lVar4 + 0x28) == lVar3) {
        return;
      }
      goto LAB_007f5f50;
    }
    lVar4 = *(long *)(lVar4 + 0x28);
    param_4 = param_5;
  }
  if (lVar4 == lVar3) {
    FUN_0082bcfc(param_1,param_4);
    return;
  }
LAB_007f5f50:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007f5f58  facebook::react::FastestListProps::FastestListProps =====

/* facebook::react::FastestListProps::FastestListProps(facebook::react::PropsParserContext const&,
   facebook::react::FastestListProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::FastestListProps::FastestListProps
          (FastestListProps *this,PropsParserContext *param_1,FastestListProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 local_850;
  undefined8 local_848;
  void *pvStack_840;
  undefined8 local_838;
  long *plStack_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined1 local_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined4 local_7e0;
  undefined8 local_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined4 local_7c0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined1 local_788;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined8 local_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  ulong local_758;
  undefined1 local_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined1 local_658;
  undefined1 local_650;
  undefined1 local_558;
  undefined1 local_550;
  undefined1 local_458;
  undefined1 local_450;
  undefined1 local_358;
  undefined1 local_350;
  undefined1 local_258;
  undefined1 local_250;
  undefined1 local_158;
  undefined8 local_150;
  undefined5 uStack_148;
  undefined3 uStack_143;
  undefined5 uStack_140;
  undefined1 local_138;
  undefined1 local_134;
  undefined8 local_130;
  undefined1 local_128;
  undefined1 local_110;
  undefined1 local_108;
  undefined1 local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined1 local_ec;
  undefined1 local_e8;
  undefined1 local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined1 local_80;
  undefined1 local_78;
  undefined1 local_60;
  long local_58;
  
  plVar3 = &local_850;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plStack_830 = (long *)0x0;
                    /* try { // try from 007f5f94 to 007f5fb7 has its CatchHandler @ 007f63a0 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099dfd0 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if (plStack_830 == &local_850) {
    lVar4 = 4;
  }
  else {
    if (plStack_830 == (long *)0x0) goto LAB_007f5fe4;
    lVar4 = 5;
    plVar3 = plStack_830;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007f5fe4:
  local_850._0_4_ = 0;
  *(undefined **)this = PTR_vtable_0099dfc8 + 0x20;
                    /* try { // try from 007f5ff8 to 007f601b has its CatchHandler @ 007f6398 */
  uVar5 = FUN_007f0fe0(param_1,param_3,"insetStart",param_2 + 0x6e0,&local_850,0,0);
  *(undefined4 *)(this + 0x6e0) = uVar5;
  local_850 = (ulong)local_850._4_4_ << 0x20;
                    /* try { // try from 007f6024 to 007f6047 has its CatchHandler @ 007f6390 */
  uVar5 = FUN_007f0fe0(param_1,param_3,"insetEnd",param_2 + 0x6e4,&local_850,0,0);
  *(undefined4 *)(this + 0x6e4) = uVar5;
  local_850 = local_850 & 0xffffffffffffff00;
                    /* try { // try from 007f6050 to 007f6073 has its CatchHandler @ 007f6388 */
  bVar2 = FUN_007ea510(param_1,param_3,"horizontal",param_2 + 0x6e8,&local_850,0,0);
  local_850 = local_850 & 0xffffffffffffff00;
  this[0x6e8] = (FastestListProps)(bVar2 & 1);
                    /* try { // try from 007f6080 to 007f60a7 has its CatchHandler @ 007f6380 */
  bVar2 = FUN_007ea510(param_1,param_3,"keyboardDismissOnDrag",param_2 + 0x6e9,&local_850,0,0);
  local_850 = local_850 & 0xffffffffffffff00;
  this[0x6e9] = (FastestListProps)(bVar2 & 1);
  local_758 = local_758 & 0xffffffffffffff00;
  local_750 = 0;
  local_658 = 0;
  local_650 = 0;
  local_558 = 0;
  local_550 = 0;
  local_458 = 0;
  local_450 = 0;
  local_358 = 0;
  local_350 = 0;
  local_258 = 0;
  local_250 = 0;
  local_158 = 0;
  local_138 = 0;
  local_134 = 0;
  local_110 = 0;
  local_108 = 0;
  local_104 = 0;
  local_ec = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_80 = 0;
  local_78 = 0;
  local_60 = 0;
  uStack_140 = 0;
  uStack_148 = 0;
  uStack_143 = 0;
  local_150 = 0;
  local_128 = 0;
  local_130 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_98 = 0;
                    /* try { // try from 007f6158 to 007f616f has its CatchHandler @ 007f6374 */
  FUN_007f5ac8(this + 0x6f0,param_1,param_3,param_2 + 0x6f0,&local_850);
  FUN_0079ff04(&local_850);
  local_850 = 0;
  local_848 = 0;
  pvStack_840 = (void *)0x0;
                    /* try { // try from 007f6180 to 007f61a7 has its CatchHandler @ 007f6330 */
  FUN_007ea274(this + 0xee8,param_1,param_3,"renderAhead",param_2 + 0xee8,&local_850,0,0);
  if ((local_850 & 1) != 0) {
    operator_delete(pvStack_840);
  }
  local_850 = local_850 & 0xffffffff00000000;
                    /* try { // try from 007f61bc to 007f61e3 has its CatchHandler @ 007f631c */
  uVar5 = FUN_007ece34(param_1,param_3,"scrollEventThrottle",param_2 + 0xf00,&local_850,0,0);
  *(undefined4 *)(this + 0xf00) = uVar5;
  local_850 = local_850 & 0xffffffffffffff00;
  local_818 = 0;
  local_7e0 = 0;
  uStack_7b0 = 0;
  local_7b8 = 0;
  uStack_7a0 = 0;
  local_7a8 = 0;
  uStack_790 = 0;
  local_798 = 0;
  pvStack_840 = (void *)0x0;
  local_848 = 0;
  plStack_830 = (long *)0x0;
  local_838 = 0;
  uStack_820 = 0;
  local_828 = 0;
  uStack_808 = 0;
  local_810 = 0;
  uStack_7f8 = 0;
  uStack_800 = 0;
  uStack_7e8 = 0;
  local_7f0 = 0;
  local_7d0 = 0;
  uStack_7c8 = 0;
  local_7d8 = 0;
  local_7c0 = 0;
  local_788 = 0;
  local_750 = 0;
  uStack_768 = 0;
  local_770 = 0;
  local_758 = 0;
  uStack_760 = 0;
  uStack_778 = 0;
  local_780 = 0;
  uStack_730 = 0;
  local_738 = 0;
  uStack_720 = 0;
  uStack_728 = 0;
  uStack_740 = 0;
  local_748 = 0;
                    /* try { // try from 007f6244 to 007f625b has its CatchHandler @ 007f630c */
  FUN_007f5ce8(this + 0xf08,param_1,param_3,param_2 + 0xf08,&local_850);
  FUN_0079fcd0(&local_850);
  local_850 = local_850 & 0xffffffffffffff00;
                    /* try { // try from 007f626c to 007f628f has its CatchHandler @ 007f6300 */
  bVar2 = FUN_007ea510(param_1,param_3,"showsHorizontalScrollIndicator",param_2 + 0x1040,&local_850,
                       0,0);
  local_850 = local_850 & 0xffffffffffffff00;
  this[0x1040] = (FastestListProps)(bVar2 & 1);
                    /* try { // try from 007f62a4 to 007f62c7 has its CatchHandler @ 007f62fc */
  bVar2 = FUN_007ea510(param_1,param_3,"showsVerticalScrollIndicator",param_2 + 0x1041,&local_850,0,
                       0);
  this[0x1041] = (FastestListProps)(bVar2 & 1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007f63d8  facebook::react::FastestListProps::getDiffPropsImplementationTarget =====

/* facebook::react::FastestListProps::getDiffPropsImplementationTarget() const */

char * facebook::react::FastestListProps::getDiffPropsImplementationTarget(void)

{
  return "FastestList";
}


// ===== 007f63e4  facebook::react::FastestListProps::getDiffProps =====

/* facebook::react::FastestListProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::FastestListProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  ulong uVar2;
  size_t sVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  Props PVar7;
  Props PVar8;
  byte bVar9;
  byte bVar10;
  long lVar11;
  int iVar12;
  int *piVar13;
  dynamic *pdVar14;
  Props *in_x1;
  Props *pPVar15;
  undefined4 *in_x8;
  ulong uVar16;
  ulong uVar17;
  Props *pPVar18;
  float *pfVar19;
  float *pfVar20;
  byte *__s2;
  long *plVar21;
  long lVar22;
  long *plVar23;
  int *piVar24;
  size_t sVar25;
  long *plVar26;
  long lVar27;
  char *__s1;
  float fVar28;
  double local_1c0;
  undefined8 uStack_1b8;
  dynamic *local_1b0;
  double local_1a0;
  undefined8 uStack_198;
  dynamic *local_190;
  undefined4 local_180 [2];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  dynamic *local_140;
  dynamic *pdStack_138;
  undefined8 local_120;
  undefined8 uStack_118;
  dynamic *local_110;
  dynamic *local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  dynamic *local_e0;
  dynamic *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 local_b8 [2];
  double local_b0;
  undefined8 uStack_a8;
  dynamic *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  
  lVar11 = tpidr_el0;
  local_88 = *(long *)(lVar11 + 0x28);
  if (((DAT_009af200 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_009af200), iVar12 != 0)) {
    memset(&DAT_009ae1b8,0,0x1048);
                    /* try { // try from 007f7394 to 007f7397 has its CatchHandler @ 007f8680 */
    FUN_007f8884();
    __cxa_atexit(FUN_007f8a20,&DAT_009ae1b8,&PTR_LOOP_008d5d30);
    __cxa_guard_release(&DAT_009af200);
  }
  pPVar1 = (Props *)&DAT_009ae1b8;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    local_98 = 0;
    local_b8[0] = 5;
    uStack_a8 = 0;
    local_a0 = (dynamic *)0x0;
    local_90 = 0x3f800000;
    *in_x8 = 5;
    local_b0 = 0.0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_b8);
    goto LAB_007f8570;
  }
  ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
  fVar28 = *(float *)(param_1 + 0x6e0);
  if ((fVar28 != *(float *)(pPVar1 + 0x6e0)) &&
     ((!NAN(fVar28) || (!NAN(*(float *)(pPVar1 + 0x6e0)))))) {
                    /* try { // try from 007f6474 to 007f6577 has its CatchHandler @ 007f87a0 */
    piVar13 = (int *)folly::dynamic::operator[]();
    if (*piVar13 != 3) {
      folly::dynamic::folly::dynamic::destroy(piVar13);
      *piVar13 = 3;
    }
    *(double *)(piVar13 + 2) = (double)fVar28;
  }
  fVar28 = *(float *)(param_1 + 0x6e4);
  if ((fVar28 != *(float *)(pPVar1 + 0x6e4)) &&
     ((!NAN(fVar28) || (!NAN(*(float *)(pPVar1 + 0x6e4)))))) {
    piVar13 = (int *)folly::dynamic::operator[]();
    if (*piVar13 != 3) {
      folly::dynamic::folly::dynamic::destroy(piVar13);
      *piVar13 = 3;
    }
    *(double *)(piVar13 + 2) = (double)fVar28;
  }
  PVar7 = param_1[0x6e8];
  if (PVar7 != pPVar1[0x6e8]) {
    piVar13 = (int *)folly::dynamic::operator[]();
    if (*piVar13 != 2) {
      folly::dynamic::folly::dynamic::destroy(piVar13);
      *piVar13 = 2;
    }
    *(Props *)(piVar13 + 2) = PVar7;
  }
  PVar7 = param_1[0x6e9];
  if (PVar7 != pPVar1[0x6e9]) {
    piVar13 = (int *)folly::dynamic::operator[]();
    if (*piVar13 != 2) {
      folly::dynamic::folly::dynamic::destroy(piVar13);
      *piVar13 = 2;
    }
    *(Props *)(piVar13 + 2) = PVar7;
  }
  if ((param_1[0x7e8] == (Props)0x0) || (pPVar1[0x7e8] == (Props)0x0)) {
    if ((param_1[0x7e8] != (Props)0x0) != (pPVar1[0x7e8] != (Props)0x0)) goto LAB_007f7688;
LAB_007f6684:
    if ((param_1[0x8e8] != (Props)0x0) && (pPVar1[0x8e8] != (Props)0x0)) {
      if ((((*(float *)(param_1 + 0x7f0) == *(float *)(pPVar1 + 0x7f0)) &&
           ((*(float *)(param_1 + 0x7f4) == *(float *)(pPVar1 + 0x7f4) &&
            (*(float *)(param_1 + 0x7f8) == *(float *)(pPVar1 + 0x7f8))))) &&
          (*(float *)(param_1 + 0x7fc) == *(float *)(pPVar1 + 0x7fc))) &&
         ((*(float *)(param_1 + 0x800) == *(float *)(pPVar1 + 0x800) &&
          (param_1[0x804] == pPVar1[0x804])))) {
        if ((param_1[0x80c] == (Props)0x0) || (pPVar1[0x80c] == (Props)0x0)) {
          if ((param_1[0x80c] != (Props)0x0) == (pPVar1[0x80c] != (Props)0x0)) goto LAB_007f69c8;
        }
        else if (*(int *)(param_1 + 0x808) == *(int *)(pPVar1 + 0x808)) {
LAB_007f69c8:
          if (((*(float *)(param_1 + 0x810) == *(float *)(pPVar1 + 0x810)) &&
              (*(float *)(param_1 + 0x814) == *(float *)(pPVar1 + 0x814))) &&
             (uVar16 = FUN_00801d34(param_1 + 0x818,pPVar1 + 0x818), (uVar16 & 1) != 0)) {
            if ((param_1[0x83c] == (Props)0x0) || (pPVar1[0x83c] == (Props)0x0)) {
              if ((param_1[0x83c] != (Props)0x0) == (pPVar1[0x83c] != (Props)0x0))
              goto LAB_007f6bc4;
            }
            else if (*(int *)(param_1 + 0x838) == *(int *)(pPVar1 + 0x838)) {
LAB_007f6bc4:
              if (((*(int *)(param_1 + 0x840) == *(int *)(pPVar1 + 0x840)) &&
                  (*(float *)(param_1 + 0x844) == *(float *)(pPVar1 + 0x844))) &&
                 ((*(float *)(param_1 + 0x848) == *(float *)(pPVar1 + 0x848) &&
                  (*(float *)(param_1 + 0x84c) == *(float *)(pPVar1 + 0x84c))))) {
                if ((param_1[0x854] == (Props)0x0) || (pPVar1[0x854] == (Props)0x0)) {
                  if ((param_1[0x854] != (Props)0x0) == (pPVar1[0x854] != (Props)0x0))
                  goto LAB_007f7034;
                }
                else if (*(int *)(param_1 + 0x850) == *(int *)(pPVar1 + 0x850)) {
LAB_007f7034:
                  if ((param_1[0x85c] == (Props)0x0) || (pPVar1[0x85c] == (Props)0x0)) {
                    if ((param_1[0x85c] != (Props)0x0) == (pPVar1[0x85c] != (Props)0x0))
                    goto LAB_007f7090;
                  }
                  else if (*(int *)(param_1 + 0x858) == *(int *)(pPVar1 + 0x858)) {
LAB_007f7090:
                    if ((((((*(float *)(param_1 + 0x860) == *(float *)(pPVar1 + 0x860)) &&
                           (*(float *)(param_1 + 0x864) == *(float *)(pPVar1 + 0x864))) &&
                          (*(float *)(param_1 + 0x868) == *(float *)(pPVar1 + 0x868))) &&
                         ((*(float *)(param_1 + 0x86c) == *(float *)(pPVar1 + 0x86c) &&
                          (*(float *)(param_1 + 0x870) == *(float *)(pPVar1 + 0x870))))) &&
                        ((uVar16 = FUN_00801d34(param_1 + 0x878,pPVar1 + 0x878), (uVar16 & 1) != 0
                         && ((*(float *)(param_1 + 0x898) == *(float *)(pPVar1 + 0x898) &&
                             (*(int *)(param_1 + 0x89c) == *(int *)(pPVar1 + 0x89c))))))) &&
                       ((*(float *)(param_1 + 0x8a0) == *(float *)(pPVar1 + 0x8a0) &&
                        (((*(float *)(param_1 + 0x8a4) == *(float *)(pPVar1 + 0x8a4) &&
                          (uVar16 = FUN_00801d34(param_1 + 0x8a8,pPVar1 + 0x8a8), (uVar16 & 1) != 0)
                          ) && (uVar16 = FUN_00801d34(param_1 + 0x8c8,pPVar1 + 0x8c8),
                               (uVar16 & 1) != 0)))))) goto LAB_007f6730;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_007f7688;
    }
    if ((param_1[0x8e8] != (Props)0x0) != (pPVar1[0x8e8] != (Props)0x0)) goto LAB_007f7688;
LAB_007f6730:
    if ((param_1[0x9e8] != (Props)0x0) && (pPVar1[0x9e8] != (Props)0x0)) {
      if ((((*(float *)(param_1 + 0x8f0) == *(float *)(pPVar1 + 0x8f0)) &&
           ((*(float *)(param_1 + 0x8f4) == *(float *)(pPVar1 + 0x8f4) &&
            (*(float *)(param_1 + 0x8f8) == *(float *)(pPVar1 + 0x8f8))))) &&
          (*(float *)(param_1 + 0x8fc) == *(float *)(pPVar1 + 0x8fc))) &&
         ((*(float *)(param_1 + 0x900) == *(float *)(pPVar1 + 0x900) &&
          (param_1[0x904] == pPVar1[0x904])))) {
        if ((param_1[0x90c] == (Props)0x0) || (pPVar1[0x90c] == (Props)0x0)) {
          if ((param_1[0x90c] != (Props)0x0) == (pPVar1[0x90c] != (Props)0x0)) goto LAB_007f6b04;
        }
        else if (*(int *)(param_1 + 0x908) == *(int *)(pPVar1 + 0x908)) {
LAB_007f6b04:
          if (((*(float *)(param_1 + 0x910) == *(float *)(pPVar1 + 0x910)) &&
              (*(float *)(param_1 + 0x914) == *(float *)(pPVar1 + 0x914))) &&
             (uVar16 = FUN_00801d34(param_1 + 0x918,pPVar1 + 0x918), (uVar16 & 1) != 0)) {
            if ((param_1[0x93c] == (Props)0x0) || (pPVar1[0x93c] == (Props)0x0)) {
              if ((param_1[0x93c] != (Props)0x0) == (pPVar1[0x93c] != (Props)0x0))
              goto LAB_007f6d20;
            }
            else if (*(int *)(param_1 + 0x938) == *(int *)(pPVar1 + 0x938)) {
LAB_007f6d20:
              if (((*(int *)(param_1 + 0x940) == *(int *)(pPVar1 + 0x940)) &&
                  (*(float *)(param_1 + 0x944) == *(float *)(pPVar1 + 0x944))) &&
                 ((*(float *)(param_1 + 0x948) == *(float *)(pPVar1 + 0x948) &&
                  (*(float *)(param_1 + 0x94c) == *(float *)(pPVar1 + 0x94c))))) {
                if ((param_1[0x954] == (Props)0x0) || (pPVar1[0x954] == (Props)0x0)) {
                  if ((param_1[0x954] != (Props)0x0) == (pPVar1[0x954] != (Props)0x0))
                  goto LAB_007f7230;
                }
                else if (*(int *)(param_1 + 0x950) == *(int *)(pPVar1 + 0x950)) {
LAB_007f7230:
                  if ((param_1[0x95c] == (Props)0x0) || (pPVar1[0x95c] == (Props)0x0)) {
                    if ((param_1[0x95c] != (Props)0x0) == (pPVar1[0x95c] != (Props)0x0))
                    goto LAB_007f728c;
                  }
                  else if (*(int *)(param_1 + 0x958) == *(int *)(pPVar1 + 0x958)) {
LAB_007f728c:
                    if (((((*(float *)(param_1 + 0x960) == *(float *)(pPVar1 + 0x960)) &&
                          (*(float *)(param_1 + 0x964) == *(float *)(pPVar1 + 0x964))) &&
                         (*(float *)(param_1 + 0x968) == *(float *)(pPVar1 + 0x968))) &&
                        ((*(float *)(param_1 + 0x96c) == *(float *)(pPVar1 + 0x96c) &&
                         (*(float *)(param_1 + 0x970) == *(float *)(pPVar1 + 0x970))))) &&
                       (((uVar16 = FUN_00801d34(param_1 + 0x978,pPVar1 + 0x978), (uVar16 & 1) != 0
                         && ((*(float *)(param_1 + 0x998) == *(float *)(pPVar1 + 0x998) &&
                             (*(int *)(param_1 + 0x99c) == *(int *)(pPVar1 + 0x99c))))) &&
                        ((*(float *)(param_1 + 0x9a0) == *(float *)(pPVar1 + 0x9a0) &&
                         (((*(float *)(param_1 + 0x9a4) == *(float *)(pPVar1 + 0x9a4) &&
                           (uVar16 = FUN_00801d34(param_1 + 0x9a8,pPVar1 + 0x9a8), (uVar16 & 1) != 0
                           )) && (uVar16 = FUN_00801d34(param_1 + 0x9c8,pPVar1 + 0x9c8),
                                 (uVar16 & 1) != 0)))))))) goto LAB_007f67dc;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_007f7688;
    }
    if ((param_1[0x9e8] != (Props)0x0) != (pPVar1[0x9e8] != (Props)0x0)) goto LAB_007f7688;
LAB_007f67dc:
    if ((param_1[0xae8] != (Props)0x0) && (pPVar1[0xae8] != (Props)0x0)) {
      if ((((*(float *)(param_1 + 0x9f0) == *(float *)(pPVar1 + 0x9f0)) &&
           ((*(float *)(param_1 + 0x9f4) == *(float *)(pPVar1 + 0x9f4) &&
            (*(float *)(param_1 + 0x9f8) == *(float *)(pPVar1 + 0x9f8))))) &&
          (*(float *)(param_1 + 0x9fc) == *(float *)(pPVar1 + 0x9fc))) &&
         ((*(float *)(param_1 + 0xa00) == *(float *)(pPVar1 + 0xa00) &&
          (param_1[0xa04] == pPVar1[0xa04])))) {
        if ((param_1[0xa0c] == (Props)0x0) || (pPVar1[0xa0c] == (Props)0x0)) {
          if ((param_1[0xa0c] != (Props)0x0) == (pPVar1[0xa0c] != (Props)0x0)) goto LAB_007f6c90;
        }
        else if (*(int *)(param_1 + 0xa08) == *(int *)(pPVar1 + 0xa08)) {
LAB_007f6c90:
          if (((*(float *)(param_1 + 0xa10) == *(float *)(pPVar1 + 0xa10)) &&
              (*(float *)(param_1 + 0xa14) == *(float *)(pPVar1 + 0xa14))) &&
             (uVar16 = FUN_00801d34(param_1 + 0xa18,pPVar1 + 0xa18), (uVar16 & 1) != 0)) {
            if ((param_1[0xa3c] == (Props)0x0) || (pPVar1[0xa3c] == (Props)0x0)) {
              if ((param_1[0xa3c] != (Props)0x0) == (pPVar1[0xa3c] != (Props)0x0))
              goto LAB_007f6f98;
            }
            else if (*(int *)(param_1 + 0xa38) == *(int *)(pPVar1 + 0xa38)) {
LAB_007f6f98:
              if (((*(int *)(param_1 + 0xa40) == *(int *)(pPVar1 + 0xa40)) &&
                  (*(float *)(param_1 + 0xa44) == *(float *)(pPVar1 + 0xa44))) &&
                 ((*(float *)(param_1 + 0xa48) == *(float *)(pPVar1 + 0xa48) &&
                  (*(float *)(param_1 + 0xa4c) == *(float *)(pPVar1 + 0xa4c))))) {
                if ((param_1[0xa54] == (Props)0x0) || (pPVar1[0xa54] == (Props)0x0)) {
                  if ((param_1[0xa54] != (Props)0x0) == (pPVar1[0xa54] != (Props)0x0))
                  goto LAB_007f73f4;
                }
                else if (*(int *)(param_1 + 0xa50) == *(int *)(pPVar1 + 0xa50)) {
LAB_007f73f4:
                  if ((param_1[0xa5c] == (Props)0x0) || (pPVar1[0xa5c] == (Props)0x0)) {
                    if ((param_1[0xa5c] != (Props)0x0) == (pPVar1[0xa5c] != (Props)0x0))
                    goto LAB_007f7450;
                  }
                  else if (*(int *)(param_1 + 0xa58) == *(int *)(pPVar1 + 0xa58)) {
LAB_007f7450:
                    if (((((((*(float *)(param_1 + 0xa60) == *(float *)(pPVar1 + 0xa60)) &&
                            (*(float *)(param_1 + 0xa64) == *(float *)(pPVar1 + 0xa64))) &&
                           (*(float *)(param_1 + 0xa68) == *(float *)(pPVar1 + 0xa68))) &&
                          ((*(float *)(param_1 + 0xa6c) == *(float *)(pPVar1 + 0xa6c) &&
                           (*(float *)(param_1 + 0xa70) == *(float *)(pPVar1 + 0xa70))))) &&
                         (uVar16 = FUN_00801d34(param_1 + 0xa78,pPVar1 + 0xa78), (uVar16 & 1) != 0))
                        && ((*(float *)(param_1 + 0xa98) == *(float *)(pPVar1 + 0xa98) &&
                            (*(int *)(param_1 + 0xa9c) == *(int *)(pPVar1 + 0xa9c))))) &&
                       ((*(float *)(param_1 + 0xaa0) == *(float *)(pPVar1 + 0xaa0) &&
                        (((*(float *)(param_1 + 0xaa4) == *(float *)(pPVar1 + 0xaa4) &&
                          (uVar16 = FUN_00801d34(param_1 + 0xaa8,pPVar1 + 0xaa8), (uVar16 & 1) != 0)
                          ) && (uVar16 = FUN_00801d34(param_1 + 0xac8,pPVar1 + 0xac8),
                               (uVar16 & 1) != 0)))))) goto LAB_007f6900;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_007f7688;
    }
    if ((param_1[0xae8] != (Props)0x0) != (pPVar1[0xae8] != (Props)0x0)) goto LAB_007f7688;
LAB_007f6900:
    if ((param_1[0xbe8] != (Props)0x0) && (pPVar1[0xbe8] != (Props)0x0)) {
      if (((*(float *)(param_1 + 0xaf0) == *(float *)(pPVar1 + 0xaf0)) &&
          ((*(float *)(param_1 + 0xaf4) == *(float *)(pPVar1 + 0xaf4) &&
           (*(float *)(param_1 + 0xaf8) == *(float *)(pPVar1 + 0xaf8))))) &&
         ((*(float *)(param_1 + 0xafc) == *(float *)(pPVar1 + 0xafc) &&
          ((*(float *)(param_1 + 0xb00) == *(float *)(pPVar1 + 0xb00) &&
           (param_1[0xb04] == pPVar1[0xb04])))))) {
        if ((param_1[0xb0c] == (Props)0x0) || (pPVar1[0xb0c] == (Props)0x0)) {
          if ((param_1[0xb0c] != (Props)0x0) == (pPVar1[0xb0c] != (Props)0x0)) goto LAB_007f6e08;
        }
        else if (*(int *)(param_1 + 0xb08) == *(int *)(pPVar1 + 0xb08)) {
LAB_007f6e08:
          if (((*(float *)(param_1 + 0xb10) == *(float *)(pPVar1 + 0xb10)) &&
              (*(float *)(param_1 + 0xb14) == *(float *)(pPVar1 + 0xb14))) &&
             (uVar16 = FUN_00801d34(param_1 + 0xb18,pPVar1 + 0xb18), (uVar16 & 1) != 0)) {
            if ((param_1[0xb3c] == (Props)0x0) || (pPVar1[0xb3c] == (Props)0x0)) {
              if ((param_1[0xb3c] != (Props)0x0) == (pPVar1[0xb3c] != (Props)0x0))
              goto LAB_007f7194;
            }
            else if (*(int *)(param_1 + 0xb38) == *(int *)(pPVar1 + 0xb38)) {
LAB_007f7194:
              if (((*(int *)(param_1 + 0xb40) == *(int *)(pPVar1 + 0xb40)) &&
                  (*(float *)(param_1 + 0xb44) == *(float *)(pPVar1 + 0xb44))) &&
                 ((*(float *)(param_1 + 0xb48) == *(float *)(pPVar1 + 0xb48) &&
                  (*(float *)(param_1 + 0xb4c) == *(float *)(pPVar1 + 0xb4c))))) {
                if ((param_1[0xb54] == (Props)0x0) || (pPVar1[0xb54] == (Props)0x0)) {
                  if ((param_1[0xb54] != (Props)0x0) == (pPVar1[0xb54] != (Props)0x0))
                  goto LAB_007f7554;
                }
                else if (*(int *)(param_1 + 0xb50) == *(int *)(pPVar1 + 0xb50)) {
LAB_007f7554:
                  if ((param_1[0xb5c] == (Props)0x0) || (pPVar1[0xb5c] == (Props)0x0)) {
                    if ((param_1[0xb5c] != (Props)0x0) == (pPVar1[0xb5c] != (Props)0x0))
                    goto LAB_007f75b0;
                  }
                  else if (*(int *)(param_1 + 0xb58) == *(int *)(pPVar1 + 0xb58)) {
LAB_007f75b0:
                    if (((((((*(float *)(param_1 + 0xb60) == *(float *)(pPVar1 + 0xb60)) &&
                            (*(float *)(param_1 + 0xb64) == *(float *)(pPVar1 + 0xb64))) &&
                           (*(float *)(param_1 + 0xb68) == *(float *)(pPVar1 + 0xb68))) &&
                          ((*(float *)(param_1 + 0xb6c) == *(float *)(pPVar1 + 0xb6c) &&
                           (*(float *)(param_1 + 0xb70) == *(float *)(pPVar1 + 0xb70))))) &&
                         ((uVar16 = FUN_00801d34(param_1 + 0xb78,pPVar1 + 0xb78), (uVar16 & 1) != 0
                          && ((*(float *)(param_1 + 0xb98) == *(float *)(pPVar1 + 0xb98) &&
                              (*(int *)(param_1 + 0xb9c) == *(int *)(pPVar1 + 0xb9c))))))) &&
                        (*(float *)(param_1 + 0xba0) == *(float *)(pPVar1 + 0xba0))) &&
                       (((*(float *)(param_1 + 0xba4) == *(float *)(pPVar1 + 0xba4) &&
                         (uVar16 = FUN_00801d34(param_1 + 0xba8,pPVar1 + 0xba8), (uVar16 & 1) != 0))
                        && (uVar16 = FUN_00801d34(param_1 + 0xbc8,pPVar1 + 0xbc8), (uVar16 & 1) != 0
                           )))) goto LAB_007f6a40;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_007f7688;
    }
    if ((param_1[0xbe8] != (Props)0x0) != (pPVar1[0xbe8] != (Props)0x0)) goto LAB_007f7688;
LAB_007f6a40:
    if ((param_1[0xce8] == (Props)0x0) || (pPVar1[0xce8] == (Props)0x0)) {
      if ((param_1[0xce8] != (Props)0x0) == (pPVar1[0xce8] != (Props)0x0)) goto LAB_007f6b7c;
      goto LAB_007f7688;
    }
    uVar16 = FUN_00802b90(param_1 + 0xbf0,pPVar1 + 0xbf0);
    if ((uVar16 & 1) == 0) goto LAB_007f7688;
LAB_007f6b7c:
    if ((param_1[0xde8] == (Props)0x0) || (pPVar1[0xde8] == (Props)0x0)) {
      if ((param_1[0xde8] != (Props)0x0) == (pPVar1[0xde8] != (Props)0x0)) goto LAB_007f6c58;
      goto LAB_007f7688;
    }
    uVar16 = FUN_00802e48(param_1 + 0xcf0,pPVar1 + 0xcf0);
    if ((uVar16 & 1) == 0) goto LAB_007f7688;
LAB_007f6c58:
    uVar16 = FUN_008028d8(param_1 + 0xdf0,pPVar1 + 0xdf0);
    if ((uVar16 & 1) == 0) goto LAB_007f7688;
  }
  else {
    if (((((*(float *)(param_1 + 0x6f0) == *(float *)(pPVar1 + 0x6f0)) &&
          (*(float *)(param_1 + 0x6f4) == *(float *)(pPVar1 + 0x6f4))) &&
         (*(float *)(param_1 + 0x6f8) == *(float *)(pPVar1 + 0x6f8))) &&
        ((*(float *)(param_1 + 0x6fc) == *(float *)(pPVar1 + 0x6fc) &&
         (*(float *)(param_1 + 0x700) == *(float *)(pPVar1 + 0x700))))) &&
       (param_1[0x704] == pPVar1[0x704])) {
      if ((param_1[0x70c] == (Props)0x0) || (pPVar1[0x70c] == (Props)0x0)) {
        if ((param_1[0x70c] != (Props)0x0) == (pPVar1[0x70c] != (Props)0x0)) goto LAB_007f6888;
      }
      else if (*(int *)(param_1 + 0x708) == *(int *)(pPVar1 + 0x708)) {
LAB_007f6888:
        if (((*(float *)(param_1 + 0x710) == *(float *)(pPVar1 + 0x710)) &&
            (*(float *)(param_1 + 0x714) == *(float *)(pPVar1 + 0x714))) &&
           (uVar16 = FUN_00801d34(param_1 + 0x718,pPVar1 + 0x718), (uVar16 & 1) != 0)) {
          if ((param_1[0x73c] == (Props)0x0) || (pPVar1[0x73c] == (Props)0x0)) {
            if ((param_1[0x73c] != (Props)0x0) == (pPVar1[0x73c] != (Props)0x0)) goto LAB_007f6a88;
          }
          else if (*(int *)(param_1 + 0x738) == *(int *)(pPVar1 + 0x738)) {
LAB_007f6a88:
            if (((*(int *)(param_1 + 0x740) == *(int *)(pPVar1 + 0x740)) &&
                (*(float *)(param_1 + 0x744) == *(float *)(pPVar1 + 0x744))) &&
               ((*(float *)(param_1 + 0x748) == *(float *)(pPVar1 + 0x748) &&
                (*(float *)(param_1 + 0x74c) == *(float *)(pPVar1 + 0x74c))))) {
              if ((param_1[0x754] == (Props)0x0) || (pPVar1[0x754] == (Props)0x0)) {
                if ((param_1[0x754] != (Props)0x0) == (pPVar1[0x754] != (Props)0x0))
                goto LAB_007f6db4;
              }
              else if (*(int *)(param_1 + 0x750) == *(int *)(pPVar1 + 0x750)) {
LAB_007f6db4:
                if ((param_1[0x75c] == (Props)0x0) || (pPVar1[0x75c] == (Props)0x0)) {
                  if ((param_1[0x75c] != (Props)0x0) == (pPVar1[0x75c] != (Props)0x0))
                  goto LAB_007f6e94;
                }
                else if (*(int *)(param_1 + 0x758) == *(int *)(pPVar1 + 0x758)) {
LAB_007f6e94:
                  if (((((*(float *)(param_1 + 0x760) == *(float *)(pPVar1 + 0x760)) &&
                        (*(float *)(param_1 + 0x764) == *(float *)(pPVar1 + 0x764))) &&
                       (*(float *)(param_1 + 0x768) == *(float *)(pPVar1 + 0x768))) &&
                      ((((*(float *)(param_1 + 0x76c) == *(float *)(pPVar1 + 0x76c) &&
                         (*(float *)(param_1 + 0x770) == *(float *)(pPVar1 + 0x770))) &&
                        ((uVar16 = FUN_00801d34(param_1 + 0x778,pPVar1 + 0x778), (uVar16 & 1) != 0
                         && ((*(float *)(param_1 + 0x798) == *(float *)(pPVar1 + 0x798) &&
                             (*(int *)(param_1 + 0x79c) == *(int *)(pPVar1 + 0x79c))))))) &&
                       (*(float *)(param_1 + 0x7a0) == *(float *)(pPVar1 + 0x7a0))))) &&
                     (((*(float *)(param_1 + 0x7a4) == *(float *)(pPVar1 + 0x7a4) &&
                       (uVar16 = FUN_00801d34(param_1 + 0x7a8,pPVar1 + 0x7a8), (uVar16 & 1) != 0))
                      && (uVar16 = FUN_00801d34(param_1 + 0x7c8,pPVar1 + 0x7c8), (uVar16 & 1) != 0))
                     )) goto LAB_007f6684;
                }
              }
            }
          }
        }
      }
    }
LAB_007f7688:
                    /* try { // try from 007f7688 to 007f768f has its CatchHandler @ 007f8794 */
    FUN_00803100(local_b8,param_1 + 0x6f0);
                    /* try { // try from 007f7690 to 007f76a3 has its CatchHandler @ 007f8788 */
    pdVar14 = (dynamic *)folly::dynamic::operator[](in_x8,"placeholderConfig","");
    folly::dynamic::operator=(pdVar14,(dynamic *)local_b8);
    folly::dynamic::folly::dynamic::destroy(local_b8);
  }
  PVar7 = param_1[0xee8];
  PVar8 = pPVar1[0xee8];
  sVar25 = *(size_t *)(param_1 + 0xef0);
  uVar17 = (ulong)((byte)PVar7 >> 1);
  uVar16 = uVar17;
  if (((byte)PVar7 & 1) != 0) {
    uVar16 = sVar25;
  }
  uVar2 = (ulong)((byte)PVar8 >> 1);
  if (((byte)PVar8 & 1) != 0) {
    uVar2 = *(ulong *)(pPVar1 + 0xef0);
  }
  if (uVar16 == uVar2) {
    pPVar15 = pPVar1 + 0xee9;
    if (((byte)PVar8 & 1) != 0) {
      pPVar15 = *(Props **)(pPVar1 + 0xef8);
    }
    if (((byte)PVar7 & 1) == 0) {
      if (1 < (byte)PVar7) {
        pPVar18 = param_1 + 0xee9;
        do {
          if (*pPVar18 != *pPVar15) goto LAB_007f772c;
          uVar17 = uVar17 - 1;
          pPVar18 = pPVar18 + 1;
          pPVar15 = pPVar15 + 1;
        } while (uVar17 != 0);
      }
    }
    else {
      __s1 = *(char **)(param_1 + 0xef8);
      iVar12 = memcmp(__s1,pPVar15,sVar25);
      if (iVar12 != 0) goto LAB_007f7764;
    }
  }
  else {
LAB_007f772c:
    if (((byte)PVar7 & 1) == 0) {
      uStack_1b8 = *(undefined8 *)(param_1 + 0xef0);
      local_1c0 = *(double *)(param_1 + 0xee8);
      local_1b0 = *(dynamic **)(param_1 + 0xef8);
    }
    else {
      __s1 = *(char **)(param_1 + 0xef8);
LAB_007f7764:
                    /* try { // try from 007f7764 to 007f7773 has its CatchHandler @ 007f8694 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_1c0,__s1,sVar25);
    }
    local_b8[0] = 6;
    uStack_a8 = uStack_1b8;
    local_b0 = local_1c0;
    local_a0 = local_1b0;
    local_1c0 = 0.0;
    uStack_1b8 = 0;
    local_1b0 = (dynamic *)0x0;
                    /* try { // try from 007f7794 to 007f77a7 has its CatchHandler @ 007f86b8 */
    pdVar14 = (dynamic *)folly::dynamic::operator[](in_x8,"renderAhead","");
    folly::dynamic::operator=(pdVar14,(dynamic *)local_b8);
    folly::dynamic::folly::dynamic::destroy(local_b8);
    if (((ulong)local_1c0 & 1) != 0) {
      operator_delete(local_1b0);
    }
  }
  iVar12 = *(int *)(param_1 + 0xf00);
  if (iVar12 != *(int *)(pPVar1 + 0xf00)) {
                    /* try { // try from 007f77d8 to 007f77eb has its CatchHandler @ 007f87a0 */
    piVar13 = (int *)folly::dynamic::operator[](in_x8,"scrollEventThrottle","");
    if (*piVar13 != 4) {
      folly::dynamic::folly::dynamic::destroy(piVar13);
      *piVar13 = 4;
    }
    *(long *)(piVar13 + 2) = (long)iVar12;
  }
  if (param_1[0xf08] == pPVar1[0xf08]) {
    plVar21 = *(long **)(param_1 + 0xf18);
    plVar23 = *(long **)(param_1 + 0xf10);
    plVar26 = *(long **)(pPVar1 + 0xf10);
    if ((long)plVar21 - (long)plVar23 != *(long *)(pPVar1 + 0xf18) - (long)plVar26)
    goto LAB_007f7be8;
    for (; plVar23 != plVar21; plVar23 = plVar23 + 3) {
      pbVar4 = (byte *)*plVar23;
      pbVar6 = (byte *)plVar23[1];
      pbVar5 = (byte *)*plVar26;
      if ((long)pbVar6 - (long)pbVar4 != plVar26[1] - (long)pbVar5) goto LAB_007f7be8;
      for (; pbVar4 != pbVar6; pbVar4 = pbVar4 + 0x18) {
        bVar9 = *pbVar4;
        bVar10 = *pbVar5;
        sVar25 = (ulong)(bVar9 >> 1);
        if ((bVar9 & 1) != 0) {
          sVar25 = *(size_t *)(pbVar4 + 8);
        }
        sVar3 = (ulong)(bVar10 >> 1);
        if ((bVar10 & 1) != 0) {
          sVar3 = *(size_t *)(pbVar5 + 8);
        }
        if (sVar25 != sVar3) goto LAB_007f7be8;
        __s2 = *(byte **)(pbVar5 + 0x10);
        if ((bVar10 & 1) == 0) {
          __s2 = pbVar5 + 1;
        }
        if ((bVar9 & 1) == 0) {
          if (1 < bVar9) {
            uVar16 = 0;
            do {
              if (pbVar4[uVar16 + 1] != __s2[uVar16]) goto LAB_007f7be8;
              uVar16 = uVar16 + 1;
            } while (bVar9 >> 1 != uVar16);
          }
        }
        else {
          iVar12 = memcmp(*(void **)(pbVar4 + 0x10),__s2,*(size_t *)(pbVar4 + 8));
          if (iVar12 != 0) goto LAB_007f7be8;
        }
        pbVar5 = pbVar5 + 0x18;
      }
      plVar26 = plVar26 + 3;
    }
    plVar23 = *(long **)(param_1 + 0xf28);
    plVar26 = *(long **)(pPVar1 + 0xf28);
    if ((long)*(long **)(param_1 + 0xf30) - (long)plVar23 !=
        *(long *)(pPVar1 + 0xf30) - (long)plVar26) goto LAB_007f7be8;
    for (; plVar23 != *(long **)(param_1 + 0xf30); plVar23 = plVar23 + 3) {
      pfVar19 = (float *)*plVar23;
      pfVar20 = (float *)*plVar26;
      if (plVar23[1] - (long)pfVar19 != plVar26[1] - (long)pfVar20) goto LAB_007f7be8;
      for (; pfVar19 != (float *)plVar23[1]; pfVar19 = pfVar19 + 1) {
        if (*pfVar19 != *pfVar20) goto LAB_007f7be8;
        pfVar20 = pfVar20 + 1;
      }
      plVar26 = plVar26 + 3;
    }
    if (param_1[0xf40] != pPVar1[0xf40]) goto LAB_007f7be8;
    PVar7 = param_1[0xf48];
    PVar8 = pPVar1[0xf48];
    uVar16 = (ulong)((byte)PVar7 >> 1);
    sVar25 = uVar16;
    if (((byte)PVar7 & 1) != 0) {
      sVar25 = *(size_t *)(param_1 + 0xf50);
    }
    sVar3 = (ulong)((byte)PVar8 >> 1);
    if (((byte)PVar8 & 1) != 0) {
      sVar3 = *(size_t *)(pPVar1 + 0xf50);
    }
    if (sVar25 != sVar3) goto LAB_007f7be8;
    pPVar15 = pPVar1 + 0xf49;
    if (((byte)PVar8 & 1) != 0) {
      pPVar15 = *(Props **)(pPVar1 + 0xf58);
    }
    if (((byte)PVar7 & 1) == 0) {
      if (1 < (byte)PVar7) {
        pPVar18 = param_1 + 0xf49;
        do {
          if (*pPVar18 != *pPVar15) goto LAB_007f7be8;
          uVar16 = uVar16 - 1;
          pPVar18 = pPVar18 + 1;
          pPVar15 = pPVar15 + 1;
        } while (uVar16 != 0);
      }
    }
    else {
      iVar12 = memcmp(*(void **)(param_1 + 0xf58),pPVar15,*(size_t *)(param_1 + 0xf50));
      if (iVar12 != 0) goto LAB_007f7be8;
    }
    PVar7 = param_1[0xf60];
    PVar8 = pPVar1[0xf60];
    uVar16 = (ulong)((byte)PVar7 >> 1);
    sVar25 = uVar16;
    if (((byte)PVar7 & 1) != 0) {
      sVar25 = *(size_t *)(param_1 + 0xf68);
    }
    sVar3 = (ulong)((byte)PVar8 >> 1);
    if (((byte)PVar8 & 1) != 0) {
      sVar3 = *(size_t *)(pPVar1 + 0xf68);
    }
    if (sVar25 != sVar3) goto LAB_007f7be8;
    pPVar15 = pPVar1 + 0xf61;
    if (((byte)PVar8 & 1) != 0) {
      pPVar15 = *(Props **)(pPVar1 + 0xf70);
    }
    if (((byte)PVar7 & 1) == 0) {
      if (1 < (byte)PVar7) {
        pPVar18 = param_1 + 0xf61;
        do {
          if (*pPVar18 != *pPVar15) goto LAB_007f7be8;
          uVar16 = uVar16 - 1;
          pPVar18 = pPVar18 + 1;
          pPVar15 = pPVar15 + 1;
        } while (uVar16 != 0);
      }
    }
    else {
      iVar12 = memcmp(*(void **)(param_1 + 0xf70),pPVar15,*(size_t *)(param_1 + 0xf68));
      if (iVar12 != 0) goto LAB_007f7be8;
    }
    if ((((*(float *)(param_1 + 0xf78) != *(float *)(pPVar1 + 0xf78)) ||
         (uVar16 = FUN_007eac74(param_1 + 0xf80,pPVar1 + 0xf80), (uVar16 & 1) == 0)) ||
        (*(float *)(param_1 + 0xf98) != *(float *)(pPVar1 + 0xf98))) ||
       (uVar16 = FUN_00801f0c(param_1 + 4000,pPVar1 + 4000), (uVar16 & 1) == 0)) goto LAB_007f7be8;
    pfVar19 = *(float **)(param_1 + 0xfb8);
    pfVar20 = *(float **)(pPVar1 + 0xfb8);
    if ((long)*(float **)(param_1 + 0xfc0) - (long)pfVar19 !=
        *(long *)(pPVar1 + 0xfc0) - (long)pfVar20) goto LAB_007f7be8;
    for (; pfVar19 != *(float **)(param_1 + 0xfc0); pfVar19 = pfVar19 + 1) {
      if (*pfVar19 != *pfVar20) goto LAB_007f7be8;
      pfVar20 = pfVar20 + 1;
    }
    if ((param_1[0xfd0] != pPVar1[0xfd0]) ||
       (uVar16 = FUN_00801f0c(param_1 + 0xfd8,pPVar1 + 0xfd8), (uVar16 & 1) == 0))
    goto LAB_007f7be8;
    pfVar19 = *(float **)(param_1 + 0xff0);
    pfVar20 = *(float **)(pPVar1 + 0xff0);
    if ((long)*(float **)(param_1 + 0xff8) - (long)pfVar19 !=
        *(long *)(pPVar1 + 0xff8) - (long)pfVar20) goto LAB_007f7be8;
    for (; pfVar19 != *(float **)(param_1 + 0xff8); pfVar19 = pfVar19 + 1) {
      if (*pfVar19 != *pfVar20) goto LAB_007f7be8;
      pfVar20 = pfVar20 + 1;
    }
    if (((param_1[0x1008] != pPVar1[0x1008]) ||
        (uVar16 = FUN_00801cf8(param_1 + 0x1010,pPVar1 + 0x1010), (uVar16 & 1) == 0)) ||
       (uVar16 = FUN_007eac74(param_1 + 0x1028,pPVar1 + 0x1028), (uVar16 & 1) == 0))
    goto LAB_007f7be8;
  }
  else {
LAB_007f7be8:
    local_98 = 0;
    local_b8[0] = 5;
    uStack_a8 = 0;
    local_a0 = (dynamic *)0x0;
    local_90 = 0x3f800000;
    local_180[0] = 5;
    local_b0 = 0.0;
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_b8);
    PVar7 = param_1[0xf08];
                    /* try { // try from 007f7c20 to 007f7c33 has its CatchHandler @ 007f87a8 */
    piVar13 = (int *)folly::dynamic::operator[](local_180,"keysAr","");
    if (*piVar13 != 2) {
      folly::dynamic::folly::dynamic::destroy(piVar13);
      *piVar13 = 2;
    }
    *(Props *)(piVar13 + 2) = PVar7;
    lVar27 = *(long *)(param_1 + 0xf10);
    lVar22 = *(long *)(param_1 + 0xf18);
    local_120 = CONCAT44(local_120._4_4_,1);
    local_110 = (dynamic *)0x0;
    local_108 = (dynamic *)0x0;
    uStack_118 = 0;
    for (; lVar27 != lVar22; lVar27 = lVar27 + 0x18) {
      local_b8[0] = 5;
      local_98 = 0;
      local_a0 = (dynamic *)0x0;
      local_90 = 0x3f800000;
      local_b0 = 0.0;
      uStack_a8 = 0;
      uStack_e8 = 0;
      local_e0 = (dynamic *)0x0;
      local_d8 = (dynamic *)0x0;
      uStack_d0 = 0;
      local_f0._4_4_ = (undefined4)((ulong)local_f0 >> 0x20);
      local_f0 = (double)CONCAT44(local_f0._4_4_,5);
      local_c8 = 0x3f800000;
      folly::dynamic::folly::dynamic::destroy(local_b8);
                    /* try { // try from 007f7cf0 to 007f7cfb has its CatchHandler @ 007f8800 */
      FUN_00802138(local_b8,lVar27);
                    /* try { // try from 007f7cfc to 007f7d0b has its CatchHandler @ 007f8808 */
      pdVar14 = (dynamic *)folly::dynamic::operator[](&local_f0,&DAT_00366ecb,&DAT_00366ecf);
      folly::dynamic::operator=(pdVar14,(dynamic *)local_b8);
      folly::dynamic::folly::dynamic::destroy(local_b8);
      pdVar14 = local_110;
      if ((int)local_120 != 1) {
        if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* try { // try from 007f85e0 to 007f85ef has its CatchHandler @ 007f87fc */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099e338);
        }
        goto LAB_007f8880;
      }
      if (local_110 < local_108) {
        folly::dynamic::dynamic(local_110,(dynamic *)&local_f0);
        local_110 = pdVar14 + 0x30;
      }
      else {
                    /* try { // try from 007f7d34 to 007f7d3f has its CatchHandler @ 007f87c4 */
        local_110 = (dynamic *)FUN_00801fe4(&uStack_118,&local_f0);
      }
      folly::dynamic::folly::dynamic::destroy(&local_f0);
    }
                    /* try { // try from 007f7d44 to 007f7d57 has its CatchHandler @ 007f8798 */
    local_150._4_4_ = (undefined4)(local_150 >> 0x20);
    pdVar14 = (dynamic *)folly::dynamic::operator[](local_180,"itemKeys","");
    folly::dynamic::operator=(pdVar14,(dynamic *)&local_120);
    folly::dynamic::folly::dynamic::destroy(&local_120);
    local_140 = (dynamic *)0x0;
    pdStack_138 = (dynamic *)0x0;
    local_150 = CONCAT44(local_150._4_4_,1);
    plVar23 = *(long **)(param_1 + 0xf28);
    plVar26 = *(long **)(param_1 + 0xf30);
    uStack_148 = 0;
    for (; plVar23 != plVar26; plVar23 = plVar23 + 3) {
      local_b8[0] = 5;
      local_98 = 0;
      local_a0 = (dynamic *)0x0;
      local_90 = 0x3f800000;
      local_b0 = 0.0;
      uStack_a8 = 0;
      uStack_118 = 0;
      local_110 = (dynamic *)0x0;
      local_108 = (dynamic *)0x0;
      uStack_100 = 0;
      local_120._4_4_ = (undefined4)(local_120 >> 0x20);
      local_120 = CONCAT44(local_120._4_4_,5);
      local_f8 = 0x3f800000;
      folly::dynamic::folly::dynamic::destroy(local_b8);
      local_e0 = (dynamic *)0x0;
      local_d8 = (dynamic *)0x0;
      local_f0 = (double)CONCAT44(local_f0._4_4_,1);
      uStack_e8 = 0;
      pfVar20 = (float *)plVar23[1];
      for (pfVar19 = (float *)*plVar23; pdVar14 = local_e0, pfVar19 != pfVar20;
          pfVar19 = pfVar19 + 1) {
        local_b8[0] = 3;
        local_b0 = (double)*pfVar19;
        if ((int)local_f0 != 1) {
          if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* try { // try from 007f85b8 to 007f85cb has its CatchHandler @ 007f8834 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099e338);
          }
          goto LAB_007f8880;
        }
        if (local_e0 < local_d8) {
          folly::dynamic::dynamic(local_e0,(dynamic *)local_b8);
          local_e0 = pdVar14 + 0x30;
        }
        else {
                    /* try { // try from 007f7e6c to 007f7e77 has its CatchHandler @ 007f882c */
          local_e0 = (dynamic *)FUN_00801fe4(&uStack_e8,local_b8);
        }
        folly::dynamic::folly::dynamic::destroy(local_b8);
      }
                    /* try { // try from 007f7e7c to 007f7e8b has its CatchHandler @ 007f87d4 */
      pdVar14 = (dynamic *)folly::dynamic::operator[](&local_120,"sizes","");
      folly::dynamic::operator=(pdVar14,(dynamic *)&local_f0);
      folly::dynamic::folly::dynamic::destroy(&local_f0);
      pdVar14 = local_140;
      if ((int)local_150 != 1) {
        if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* try { // try from 007f8670 to 007f867f has its CatchHandler @ 007f87c8 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099e338);
        }
        goto LAB_007f8880;
      }
      if (local_140 < pdStack_138) {
        folly::dynamic::dynamic(local_140,(dynamic *)&local_120);
        local_140 = pdVar14 + 0x30;
      }
      else {
                    /* try { // try from 007f7eb4 to 007f7ec3 has its CatchHandler @ 007f87b4 */
        local_140 = (dynamic *)FUN_00801fe4(&uStack_148,&local_120);
      }
      folly::dynamic::folly::dynamic::destroy(&local_120);
    }
                    /* try { // try from 007f7ec8 to 007f7edb has its CatchHandler @ 007f877c */
    pdVar14 = (dynamic *)folly::dynamic::operator[](local_180,"itemSizes","");
    folly::dynamic::operator=(pdVar14,(dynamic *)&local_150);
    folly::dynamic::folly::dynamic::destroy(&local_150);
    PVar7 = param_1[0xf40];
                    /* try { // try from 007f7ef4 to 007f7f0b has its CatchHandler @ 007f87a8 */
    piVar13 = (int *)folly::dynamic::operator[](local_180,"itemSizeIsUniform","");
    if (*piVar13 != 2) {
      folly::dynamic::folly::dynamic::destroy(piVar13);
      *piVar13 = 2;
    }
    *(Props *)(piVar13 + 2) = PVar7;
    if (((byte)param_1[0xf48] & 1) == 0) {
      uStack_118 = *(undefined8 *)(param_1 + 0xf50);
      local_120 = *(ulong *)(param_1 + 0xf48);
      local_110 = *(dynamic **)(param_1 + 0xf58);
    }
    else {
                    /* try { // try from 007f7f5c to 007f7f63 has its CatchHandler @ 007f86b0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_120,*(char **)(param_1 + 0xf58),*(ulong *)(param_1 + 0xf50));
    }
    local_b8[0] = 6;
    uStack_a8 = uStack_118;
    local_b0 = (double)local_120;
    local_a0 = local_110;
    local_120 = 0;
    uStack_118 = 0;
    local_110 = (dynamic *)0x0;
                    /* try { // try from 007f7f84 to 007f7f97 has its CatchHandler @ 007f875c */
    pdVar14 = (dynamic *)folly::dynamic::operator[](local_180,"listId","");
    folly::dynamic::operator=(pdVar14,(dynamic *)local_b8);
    folly::dynamic::folly::dynamic::destroy(local_b8);
    if ((local_120 & 1) != 0) {
      operator_delete(local_110);
    }
    if (((byte)param_1[0xf60] & 1) == 0) {
      uStack_148 = *(undefined8 *)(param_1 + 0xf68);
      local_150 = *(ulong *)(param_1 + 0xf60);
      local_140 = *(dynamic **)(param_1 + 0xf70);
    }
    else {
                    /* try { // try from 007f7fe0 to 007f7fe7 has its CatchHandler @ 007f86a8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_150,*(char **)(param_1 + 0xf70),*(ulong *)(param_1 + 0xf68));
    }
    local_b8[0] = 6;
    uStack_a8 = uStack_148;
    local_b0 = (double)local_150;
    local_a0 = local_140;
    local_150 = 0;
    uStack_148 = 0;
    local_140 = (dynamic *)0x0;
                    /* try { // try from 007f8008 to 007f801b has its CatchHandler @ 007f8740 */
    pdVar14 = (dynamic *)folly::dynamic::operator[](local_180,"listF","");
    folly::dynamic::operator=(pdVar14,(dynamic *)local_b8);
    folly::dynamic::folly::dynamic::destroy(local_b8);
    if ((local_150 & 1) != 0) {
      operator_delete(local_140);
    }
    fVar28 = *(float *)(param_1 + 0xf78);
                    /* try { // try from 007f8040 to 007f8053 has its CatchHandler @ 007f87a8 */
    piVar13 = (int *)folly::dynamic::operator[](local_180,"listFo","");
    if (*piVar13 != 3) {
      folly::dynamic::folly::dynamic::destroy(piVar13);
      *piVar13 = 3;
    }
    *(double *)(piVar13 + 2) = (double)fVar28;
    if (((byte)param_1[0xf80] & 1) == 0) {
      uStack_198 = *(undefined8 *)(param_1 + 0xf88);
      local_1a0 = *(double *)(param_1 + 0xf80);
      local_190 = *(dynamic **)(param_1 + 0xf90);
    }
    else {
                    /* try { // try from 007f80a4 to 007f80ab has its CatchHandler @ 007f86a0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_1a0,*(char **)(param_1 + 0xf90),*(ulong *)(param_1 + 0xf88));
    }
    local_b8[0] = 6;
    uStack_a8 = uStack_198;
    local_b0 = local_1a0;
    local_a0 = local_190;
    local_1a0 = 0.0;
    uStack_198 = 0;
    local_190 = (dynamic *)0x0;
                    /* try { // try from 007f80cc to 007f80df has its CatchHandler @ 007f8724 */
    pdVar14 = (dynamic *)folly::dynamic::operator[](local_180,"listH","");
    folly::dynamic::operator=(pdVar14,(dynamic *)local_b8);
    folly::dynamic::folly::dynamic::destroy(local_b8);
    if (((ulong)local_1a0 & 1) != 0) {
      operator_delete(local_190);
    }
    fVar28 = *(float *)(param_1 + 0xf98);
                    /* try { // try from 007f8104 to 007f8117 has its CatchHandler @ 007f87a8 */
    piVar13 = (int *)folly::dynamic::operator[](local_180,"listHe","");
    if (*piVar13 != 3) {
      folly::dynamic::folly::dynamic::destroy(piVar13);
      *piVar13 = 3;
    }
    *(double *)(piVar13 + 2) = (double)fVar28;
                    /* try { // try from 007f8140 to 007f814b has its CatchHandler @ 007f8720 */
    FUN_00802138(local_b8,param_1 + 4000);
                    /* try { // try from 007f814c to 007f815f has its CatchHandler @ 007f8710 */
    pdVar14 = (dynamic *)folly::dynamic::operator[](local_180,"sectionHeaderKeys","");
    folly::dynamic::operator=(pdVar14,(dynamic *)local_b8);
    folly::dynamic::folly::dynamic::destroy(local_b8);
    pfVar19 = *(float **)(param_1 + 0xfb8);
    pfVar20 = *(float **)(param_1 + 0xfc0);
    local_f0 = (double)CONCAT44(local_f0._4_4_,1);
    local_e0 = (dynamic *)0x0;
    local_d8 = (dynamic *)0x0;
    uStack_e8 = 0;
    pdVar14 = local_e0;
    for (; local_e0 = pdVar14, pfVar19 != pfVar20; pfVar19 = pfVar19 + 1) {
      local_b8[0] = 3;
      local_b0 = (double)*pfVar19;
      if ((int)local_f0 != 1) {
        if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* try { // try from 007f8604 to 007f8613 has its CatchHandler @ 007f87e8 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099e338);
        }
        goto LAB_007f8880;
      }
      if (pdVar14 < local_d8) {
        folly::dynamic::dynamic(pdVar14,(dynamic *)local_b8);
        local_e0 = pdVar14 + 0x30;
      }
      else {
                    /* try { // try from 007f81ec to 007f81f7 has its CatchHandler @ 007f87c0 */
        local_e0 = (dynamic *)FUN_00801fe4(&uStack_e8,local_b8);
      }
      folly::dynamic::folly::dynamic::destroy(local_b8);
      pdVar14 = local_e0;
    }
                    /* try { // try from 007f81fc to 007f820f has its CatchHandler @ 007f8708 */
    pdVar14 = (dynamic *)folly::dynamic::operator[](local_180,"sectionHeaderSizes","");
    folly::dynamic::operator=(pdVar14,(dynamic *)&local_f0);
    folly::dynamic::folly::dynamic::destroy(&local_f0);
    PVar7 = param_1[0xfd0];
                    /* try { // try from 007f8224 to 007f8237 has its CatchHandler @ 007f87a8 */
    piVar13 = (int *)folly::dynamic::operator[](local_180,"sectionHea","");
    if (*piVar13 != 2) {
      folly::dynamic::folly::dynamic::destroy(piVar13);
      *piVar13 = 2;
    }
    *(Props *)(piVar13 + 2) = PVar7;
                    /* try { // try from 007f825c to 007f8267 has its CatchHandler @ 007f8704 */
    FUN_00802138(local_b8,param_1 + 0xfd8);
                    /* try { // try from 007f8268 to 007f827b has its CatchHandler @ 007f8700 */
    pdVar14 = (dynamic *)folly::dynamic::operator[](local_180,"sectionFooterKeys","");
    folly::dynamic::operator=(pdVar14,(dynamic *)local_b8);
    folly::dynamic::folly::dynamic::destroy(local_b8);
    pfVar19 = *(float **)(param_1 + 0xff0);
    pfVar20 = *(float **)(param_1 + 0xff8);
    local_f0 = (double)CONCAT44(local_f0._4_4_,1);
    local_e0 = (dynamic *)0x0;
    local_d8 = (dynamic *)0x0;
    uStack_e8 = 0;
    pdVar14 = local_e0;
    for (; local_e0 = pdVar14, pfVar19 != pfVar20; pfVar19 = pfVar19 + 1) {
      local_b8[0] = 3;
      local_b0 = (double)*pfVar19;
      if ((int)local_f0 != 1) {
        if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* try { // try from 007f8628 to 007f8637 has its CatchHandler @ 007f87e4 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099e338);
        }
        goto LAB_007f8880;
      }
      if (pdVar14 < local_d8) {
        folly::dynamic::dynamic(pdVar14,(dynamic *)local_b8);
        local_e0 = pdVar14 + 0x30;
      }
      else {
                    /* try { // try from 007f8308 to 007f8313 has its CatchHandler @ 007f87bc */
        local_e0 = (dynamic *)FUN_00801fe4(&uStack_e8,local_b8);
      }
      folly::dynamic::folly::dynamic::destroy(local_b8);
      pdVar14 = local_e0;
    }
                    /* try { // try from 007f8318 to 007f832b has its CatchHandler @ 007f86fc */
    pdVar14 = (dynamic *)folly::dynamic::operator[](local_180,"sectionFooterSizes","");
    folly::dynamic::operator=(pdVar14,(dynamic *)&local_f0);
    folly::dynamic::folly::dynamic::destroy(&local_f0);
    PVar7 = param_1[0x1008];
                    /* try { // try from 007f8344 to 007f8357 has its CatchHandler @ 007f87a8 */
    piVar13 = (int *)folly::dynamic::operator[](local_180,"sectionFoo","");
    if (*piVar13 != 2) {
      folly::dynamic::folly::dynamic::destroy(piVar13);
      *piVar13 = 2;
    }
    *(Props *)(piVar13 + 2) = PVar7;
    piVar13 = *(int **)(param_1 + 0x1010);
    piVar24 = *(int **)(param_1 + 0x1018);
    local_f0 = (double)CONCAT44(local_f0._4_4_,1);
    local_e0 = (dynamic *)0x0;
    local_d8 = (dynamic *)0x0;
    uStack_e8 = 0;
    pdVar14 = local_e0;
    for (; local_e0 = pdVar14, piVar13 != piVar24; piVar13 = piVar13 + 1) {
      local_b0 = (double)(long)*piVar13;
      local_b8[0] = 4;
      if ((int)local_f0 != 1) {
        if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* try { // try from 007f864c to 007f865b has its CatchHandler @ 007f87e0 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099e338);
        }
        goto LAB_007f8880;
      }
      if (pdVar14 < local_d8) {
        folly::dynamic::dynamic(pdVar14,(dynamic *)local_b8);
        local_e0 = pdVar14 + 0x30;
      }
      else {
                    /* try { // try from 007f83f4 to 007f83ff has its CatchHandler @ 007f87b8 */
        local_e0 = (dynamic *)FUN_00801fe4(&uStack_e8,local_b8);
      }
      folly::dynamic::folly::dynamic::destroy(local_b8);
      pdVar14 = local_e0;
    }
                    /* try { // try from 007f8404 to 007f8417 has its CatchHandler @ 007f86f8 */
    pdVar14 = (dynamic *)folly::dynamic::operator[](local_180,"sections","");
    folly::dynamic::operator=(pdVar14,(dynamic *)&local_f0);
    folly::dynamic::folly::dynamic::destroy(&local_f0);
    if (((byte)param_1[0x1028] & 1) == 0) {
      uStack_e8 = *(undefined8 *)(param_1 + 0x1030);
      local_f0 = *(double *)(param_1 + 0x1028);
      local_e0 = *(dynamic **)(param_1 + 0x1038);
    }
    else {
                    /* try { // try from 007f8450 to 007f8457 has its CatchHandler @ 007f8698 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_f0,*(char **)(param_1 + 0x1038),*(ulong *)(param_1 + 0x1030));
    }
    local_b8[0] = 6;
    uStack_a8 = uStack_e8;
    local_b0 = local_f0;
    local_a0 = local_e0;
    local_f0 = 0.0;
    uStack_e8 = 0;
    local_e0 = (dynamic *)0x0;
                    /* try { // try from 007f8478 to 007f848b has its CatchHandler @ 007f86dc */
    pdVar14 = (dynamic *)folly::dynamic::operator[](local_180,"sectionsId","");
    folly::dynamic::operator=(pdVar14,(dynamic *)local_b8);
    folly::dynamic::folly::dynamic::destroy(local_b8);
    if (((ulong)local_f0 & 1) != 0) {
      operator_delete(local_e0);
    }
                    /* try { // try from 007f84ac to 007f84bf has its CatchHandler @ 007f86d8 */
    pdVar14 = (dynamic *)folly::dynamic::operator[](in_x8,"sectionsVersioned","");
    folly::dynamic::operator=(pdVar14,(dynamic *)local_180);
    folly::dynamic::folly::dynamic::destroy(local_180);
  }
  PVar7 = param_1[0x1040];
  if (PVar7 != pPVar1[0x1040]) {
                    /* try { // try from 007f84ec to 007f854b has its CatchHandler @ 007f87a0 */
    piVar13 = (int *)folly::dynamic::operator[](in_x8,"showsHorizontalScrollIndicator","");
    if (*piVar13 != 2) {
      folly::dynamic::folly::dynamic::destroy(piVar13);
      *piVar13 = 2;
    }
    *(Props *)(piVar13 + 2) = PVar7;
  }
  PVar7 = param_1[0x1041];
  if (PVar7 != pPVar1[0x1041]) {
    piVar13 = (int *)folly::dynamic::operator[](in_x8,"showsVerticalScrollIndicator","");
    if (*piVar13 != 2) {
      folly::dynamic::folly::dynamic::destroy(piVar13);
      *piVar13 = 2;
    }
    *(Props *)(piVar13 + 2) = PVar7;
  }
LAB_007f8570:
  if (*(long *)(lVar11 + 0x28) == local_88) {
    return;
  }
LAB_007f8880:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007f8884  FUN_007f8884 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007f8884(void)

{
  FUN_00788b10(&DAT_009ae1b8,PTR_PTR_0099dfd0 + 0x10);
  DAT_009ae794 = 0;
  DAT_009ae798 = 0;
  DAT_009ae7f8 = 0;
  DAT_009ae800 = 0;
  DAT_009ae860 = 0;
  DAT_009ae870 = 0;
  DAT_009ae874 = 0;
  DAT_009ae878 = 0;
  DAT_009ae87c = 0;
  DAT_009ae880 = 0;
  DAT_009ae884 = 0;
  DAT_009ae888 = 0;
  DAT_009ae88c = 0;
  DAT_009ae890 = 0;
  DAT_009ae894 = 0;
  DAT_009ae868 = 0;
  DAT_009ae86c = 0;
  DAT_009ae8a8 = 0;
  DAT_009ae1b8 = PTR_vtable_0099dfc8 + 0x20;
  DAT_009aefb5._3_5_ = 0;
  uRam00000000009af058 = 0;
  _DAT_009af050 = 0;
  uRam00000000009af0a8 = 0;
  _DAT_009af0a0 = 0;
  DAT_009ae9a0 = 0;
  DAT_009ae9a8 = 0;
  DAT_009aeaa0 = 0;
  DAT_009aeaa8 = 0;
  DAT_009aeba0 = 0;
  DAT_009aeba8 = 0;
  DAT_009aeca0 = 0;
  DAT_009aeca8 = 0;
  DAT_009aeda0 = 0;
  DAT_009aeda8 = 0;
  DAT_009aeea0 = 0;
  DAT_009aeea8 = 0;
  DAT_009aefa0 = 0;
  DAT_009aefc0 = 0;
  DAT_009aefc4 = 0;
  DAT_009aefe8 = 0;
  DAT_009aeff0 = 0;
  DAT_009aeff4 = 0;
  DAT_009af00c = 0;
  DAT_009af010 = 0;
  DAT_009af014 = 0;
  DAT_009af030 = 0;
  DAT_009af048 = 0;
  DAT_009af078 = 0;
  DAT_009af080 = 0;
  DAT_009af098 = 0;
  DAT_009af0c0 = 0;
  DAT_009ae8a0 = 0;
  DAT_009ae898 = 0;
  uRam00000000009aefb0 = 0;
  DAT_009aefb5._0_3_ = 0;
  _DAT_009aefa8 = 0;
  DAT_009aefd0 = 0;
  DAT_009aefc8 = 0;
  DAT_009af008 = 0;
  uRam00000000009af000 = 0;
  _DAT_009aeff8 = 0;
  DAT_009af028 = 0;
  uRam00000000009af020 = 0;
  _DAT_009af018 = 0;
  DAT_009af060 = 0;
  DAT_009af0b8 = 0;
  DAT_009af0b0 = 0;
  DAT_009af0f8 = 0;
  uRam00000000009af0f0 = 0;
  _DAT_009af0e8 = 0;
  uRam00000000009af0e0 = 0;
  _DAT_009af0d8 = 0;
  uRam00000000009af0d0 = 0;
  _DAT_009af0c8 = 0;
  DAT_009af130 = 0;
  uRam00000000009af118 = 0;
  _DAT_009af110 = 0;
  uRam00000000009af128 = 0;
  _DAT_009af120 = 0;
  uRam00000000009af108 = 0;
  _DAT_009af100 = 0;
  DAT_009af148 = 0;
  DAT_009af150 = 0;
  DAT_009af138 = 0;
  DAT_009af140 = 0;
  uRam00000000009af160 = 0;
  _DAT_009af158 = 0;
  uRam00000000009af170 = 0;
  _DAT_009af168 = 0;
  uRam00000000009af180 = 0;
  _DAT_009af178 = 0;
  DAT_009af188 = 0;
  uRam00000000009af198 = 0;
  _DAT_009af190 = 0;
  uRam00000000009af1a8 = 0;
  _DAT_009af1a0 = 0;
  uRam00000000009af1b8 = 0;
  _DAT_009af1b0 = 0;
  DAT_009af1c0 = 0;
  DAT_009af1f8 = 0;
  uRam00000000009af1f0 = 0;
  _DAT_009af1e8 = 0;
  uRam00000000009af1e0 = 0;
  _DAT_009af1d8 = 0;
  uRam00000000009af1d0 = 0;
  _DAT_009af1c8 = 0;
  return;
}


// ===== 007f8a20  FUN_007f8a20 =====

void FUN_007f8a20(long param_1)

{
  FUN_0079fcd0(param_1 + 0xf08);
  if ((*(byte *)(param_1 + 0xee8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xef8));
  }
  FUN_0079ff04(param_1 + 0x6f0);
  FUN_0078917c(param_1,PTR_PTR_0099dfd0 + 8);
  return;
}


// ===== 007f8a6c  facebook::react::DCDImageWithThumbhashPlaceholderViewProps::DCDImageWithThumbhashPlaceholderViewProps =====

/* facebook::react::DCDImageWithThumbhashPlaceholderViewProps::DCDImageWithThumbhashPlaceholderViewProps(facebook::react::PropsParserContext
   const&, facebook::react::DCDImageWithThumbhashPlaceholderViewProps const&,
   facebook::react::RawProps const&) */

void __thiscall
facebook::react::DCDImageWithThumbhashPlaceholderViewProps::
DCDImageWithThumbhashPlaceholderViewProps
          (DCDImageWithThumbhashPlaceholderViewProps *this,PropsParserContext *param_1,
          DCDImageWithThumbhashPlaceholderViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  undefined4 uVar2;
  ulong *puVar3;
  function *in_x4;
  long lVar4;
  ulong local_90 [2];
  void *local_80;
  char local_78;
  long *local_70;
  long local_58;
  
  puVar3 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007f8aac to 007f8abb has its CatchHandler @ 007f8cbc */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if ((ulong *)local_70 == local_90) {
    lVar4 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007f8ae8;
    lVar4 = 5;
    puVar3 = (ulong *)local_70;
  }
  (**(code **)(*puVar3 + lVar4 * 8))();
LAB_007f8ae8:
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 007f8af8 to 007f8b1f has its CatchHandler @ 007f8c80 */
  FUN_007ea274(this + 0x6e0,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = local_90[0] & 0xffffffffffffff00;
  local_78 = '\0';
                    /* try { // try from 007f8b38 to 007f8b5f has its CatchHandler @ 007f8c54 */
  FUN_007ec9b8(this + 0x6f8,param_2);
  if ((local_78 != '\0') && ((local_90[0] & 1) != 0)) {
    operator_delete(local_80);
  }
  local_90[0] = local_90[0] & 0xffffffff00000000;
                    /* try { // try from 007f8b7c to 007f8b9f has its CatchHandler @ 007f8c38 */
  uVar2 = FUN_007ece34(param_2);
  *(undefined4 *)(this + 0x718) = uVar2;
  local_90[0] = local_90[0] & 0xffffffffffffff00;
  local_78 = '\0';
                    /* try { // try from 007f8bac to 007f8bd3 has its CatchHandler @ 007f8c18 */
  FUN_007ec9b8(this + 0x720,param_2);
  if ((local_78 != '\0') && ((local_90[0] & 1) != 0)) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007f8cf4  facebook::react::DCDImageWithThumbhashPlaceholderViewProps::DCDImageWithThumbhashPlaceholderViewProps =====

/* facebook::react::DCDImageWithThumbhashPlaceholderViewProps::DCDImageWithThumbhashPlaceholderViewProps(facebook::react::PropsParserContext
   const&, facebook::react::DCDImageWithThumbhashPlaceholderViewProps const&,
   facebook::react::RawProps const&) */

void __thiscall
facebook::react::DCDImageWithThumbhashPlaceholderViewProps::
DCDImageWithThumbhashPlaceholderViewProps
          (DCDImageWithThumbhashPlaceholderViewProps *this,PropsParserContext *param_1,
          DCDImageWithThumbhashPlaceholderViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  undefined4 uVar2;
  ulong *puVar3;
  long lVar4;
  ulong local_90 [2];
  void *local_80;
  char local_78;
  long *local_70;
  long local_58;
  
  puVar3 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007f8d30 to 007f8d53 has its CatchHandler @ 007f8f5c */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099dfe8 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if ((ulong *)local_70 == local_90) {
    lVar4 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007f8d80;
    lVar4 = 5;
    puVar3 = (ulong *)local_70;
  }
  (**(code **)(*puVar3 + lVar4 * 8))();
LAB_007f8d80:
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
  *(undefined **)this = PTR_vtable_0099dfe0 + 0x20;
                    /* try { // try from 007f8d98 to 007f8dbf has its CatchHandler @ 007f8f20 */
  FUN_007ea274(this + 0x6e0,param_1,param_3,&DAT_0036c4b0,param_2 + 0x6e0,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = local_90[0] & 0xffffffffffffff00;
  local_78 = '\0';
                    /* try { // try from 007f8dd8 to 007f8dff has its CatchHandler @ 007f8ef4 */
  FUN_007ec9b8(this + 0x6f8,param_1,param_3,"placeholder",param_2 + 0x6f8,local_90,0,0);
  if ((local_78 != '\0') && ((local_90[0] & 1) != 0)) {
    operator_delete(local_80);
  }
  local_90[0] = local_90[0] & 0xffffffff00000000;
                    /* try { // try from 007f8e1c to 007f8e3f has its CatchHandler @ 007f8ed8 */
  uVar2 = FUN_007ece34(param_1,param_3,"placeholderVersion",param_2 + 0x718,local_90,0,0);
  *(undefined4 *)(this + 0x718) = uVar2;
  local_90[0] = local_90[0] & 0xffffffffffffff00;
  local_78 = '\0';
                    /* try { // try from 007f8e4c to 007f8e73 has its CatchHandler @ 007f8eb8 */
  FUN_007ec9b8(this + 0x720,param_1,param_3,&DAT_00366ec7,param_2 + 0x720,local_90,0,0);
  if ((local_78 != '\0') && ((local_90[0] & 1) != 0)) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007f8f94  facebook::react::DCDImageWithThumbhashPlaceholderViewProps::getDiffPropsImplementationTarget =====

/* facebook::react::DCDImageWithThumbhashPlaceholderViewProps::getDiffPropsImplementationTarget()
   const */

char * facebook::react::DCDImageWithThumbhashPlaceholderViewProps::getDiffPropsImplementationTarget
                 (void)

{
  return "DCDImageWithThumbhashPlaceholderView";
}


// ===== 007f8fa0  facebook::react::DCDImageWithThumbhashPlaceholderViewProps::getDiffProps =====

/* facebook::react::DCDImageWithThumbhashPlaceholderViewProps::getDiffProps(facebook::react::Props
   const*) const */

void facebook::react::DCDImageWithThumbhashPlaceholderViewProps::getDiffProps(Props *param_1)

{
  ulong uVar1;
  size_t sVar2;
  Props PVar3;
  Props PVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  dynamic *pdVar8;
  Props *in_x1;
  Props *pPVar9;
  undefined4 *in_x8;
  ulong uVar10;
  ulong uVar11;
  Props *pPVar12;
  Props *pPVar13;
  size_t sVar14;
  Props PVar15;
  char *__s1;
  ulong local_d0;
  undefined8 uStack_c8;
  void *local_c0;
  ulong local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  undefined4 local_78 [2];
  ulong local_70;
  undefined8 uStack_68;
  void *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if (((DAT_009af948 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_009af948), iVar6 != 0)) {
    memset(&DAT_009af208,0,0x740);
                    /* try { // try from 007f94a4 to 007f94a7 has its CatchHandler @ 007f94d8 */
    FUN_007f9598();
    __cxa_atexit(FUN_007f9640,&DAT_009af208,&PTR_LOOP_008d5d30);
    __cxa_guard_release(&DAT_009af948);
  }
  pPVar13 = (Props *)&DAT_009af208;
  if (in_x1 != (Props *)0x0) {
    pPVar13 = in_x1;
  }
  if (pPVar13 == param_1) {
    local_58 = 0;
    local_78[0] = 5;
    uStack_68 = 0;
    local_60 = (void *)0x0;
    local_50 = 0x3f800000;
    *in_x8 = 5;
    local_70 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
LAB_007f90a0:
    folly::dynamic::folly::dynamic::destroy(local_78);
  }
  else {
    ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    PVar3 = param_1[0x6e0];
    PVar15 = pPVar13[0x6e0];
    sVar14 = *(size_t *)(param_1 + 0x6e8);
    uVar10 = (ulong)((byte)PVar3 >> 1);
    uVar11 = uVar10;
    if (((byte)PVar3 & 1) != 0) {
      uVar11 = sVar14;
    }
    uVar1 = (ulong)((byte)PVar15 >> 1);
    if (((byte)PVar15 & 1) != 0) {
      uVar1 = *(ulong *)(pPVar13 + 0x6e8);
    }
    if (uVar11 == uVar1) {
      pPVar9 = pPVar13 + 0x6e1;
      if (((byte)PVar15 & 1) != 0) {
        pPVar9 = *(Props **)(pPVar13 + 0x6f0);
      }
      if (((byte)PVar3 & 1) == 0) {
        if (1 < (byte)PVar3) {
          pPVar12 = param_1 + 0x6e1;
          do {
            if (*pPVar12 != *pPVar9) goto LAB_007f90ac;
            uVar10 = uVar10 - 1;
            pPVar12 = pPVar12 + 1;
            pPVar9 = pPVar9 + 1;
          } while (uVar10 != 0);
        }
      }
      else {
        __s1 = *(char **)(param_1 + 0x6f0);
        iVar6 = memcmp(__s1,pPVar9,sVar14);
        if (iVar6 != 0) goto LAB_007f90e4;
      }
    }
    else {
LAB_007f90ac:
      if (((byte)PVar3 & 1) == 0) {
        uStack_88 = *(undefined8 *)(param_1 + 0x6e8);
        local_90 = *(ulong *)(param_1 + 0x6e0);
        local_80 = *(void **)(param_1 + 0x6f0);
      }
      else {
        __s1 = *(char **)(param_1 + 0x6f0);
LAB_007f90e4:
                    /* try { // try from 007f90e4 to 007f90f3 has its CatchHandler @ 007f9510 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_90,__s1,sVar14);
      }
      local_78[0] = 6;
      uStack_68 = uStack_88;
      local_70 = local_90;
      local_60 = local_80;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = (void *)0x0;
                    /* try { // try from 007f9114 to 007f9127 has its CatchHandler @ 007f9558 */
      pdVar8 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar8,(dynamic *)local_78);
      folly::dynamic::folly::dynamic::destroy(local_78);
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
    }
    PVar3 = param_1[0x710];
    if ((PVar3 == (Props)0x0) || (pPVar13[0x710] == (Props)0x0)) {
      if ((PVar3 != (Props)0x0) != (pPVar13[0x710] != (Props)0x0)) {
LAB_007f91e8:
        if (PVar3 != (Props)0x0) {
          PVar15 = param_1[0x6f8];
          goto LAB_007f9200;
        }
        local_78[0] = 0;
        local_70 = 0;
                    /* try { // try from 007f9288 to 007f929b has its CatchHandler @ 007f94f0 */
        pdVar8 = (dynamic *)folly::dynamic::operator[]();
        folly::dynamic::operator=(pdVar8,(dynamic *)local_78);
        folly::dynamic::folly::dynamic::destroy(local_78);
      }
    }
    else {
      PVar15 = param_1[0x6f8];
      PVar4 = pPVar13[0x6f8];
      uVar11 = (ulong)((byte)PVar15 >> 1);
      sVar14 = uVar11;
      if (((byte)PVar15 & 1) != 0) {
        sVar14 = *(size_t *)(param_1 + 0x700);
      }
      sVar2 = (ulong)((byte)PVar4 >> 1);
      if (((byte)PVar4 & 1) != 0) {
        sVar2 = *(size_t *)(pPVar13 + 0x700);
      }
      if (sVar14 == sVar2) {
        pPVar9 = pPVar13 + 0x6f9;
        if (((byte)PVar4 & 1) != 0) {
          pPVar9 = *(Props **)(pPVar13 + 0x708);
        }
        if (((byte)PVar15 & 1) == 0) {
          if (1 < (byte)PVar15) {
            pPVar12 = param_1 + 0x6f9;
            do {
              if (*pPVar12 != *pPVar9) goto LAB_007f91e8;
              uVar11 = uVar11 - 1;
              pPVar12 = pPVar12 + 1;
              pPVar9 = pPVar9 + 1;
            } while (uVar11 != 0);
          }
        }
        else {
          iVar6 = memcmp(*(void **)(param_1 + 0x708),pPVar9,*(size_t *)(param_1 + 0x700));
          if (iVar6 != 0) goto LAB_007f9200;
        }
      }
      else {
LAB_007f9200:
        if (((byte)PVar15 & 1) == 0) {
          uStack_a8 = *(undefined8 *)(param_1 + 0x700);
          local_b0 = *(ulong *)(param_1 + 0x6f8);
          local_a0 = *(void **)(param_1 + 0x708);
        }
        else {
                    /* try { // try from 007f9220 to 007f9227 has its CatchHandler @ 007f9508 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_b0,*(char **)(param_1 + 0x708),*(ulong *)(param_1 + 0x700));
        }
        local_78[0] = 6;
        uStack_68 = uStack_a8;
        local_70 = local_b0;
        local_60 = local_a0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_a0 = (void *)0x0;
                    /* try { // try from 007f9248 to 007f925b has its CatchHandler @ 007f953c */
        pdVar8 = (dynamic *)folly::dynamic::operator[]();
        folly::dynamic::operator=(pdVar8,(dynamic *)local_78);
        folly::dynamic::folly::dynamic::destroy(local_78);
        if ((local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
      }
    }
    iVar6 = *(int *)(param_1 + 0x718);
    if (iVar6 != *(int *)(pPVar13 + 0x718)) {
                    /* try { // try from 007f92bc to 007f92cf has its CatchHandler @ 007f9518 */
      piVar7 = (int *)folly::dynamic::operator[]();
      if (*piVar7 != 4) {
        folly::dynamic::folly::dynamic::destroy(piVar7);
        *piVar7 = 4;
      }
      *(long *)(piVar7 + 2) = (long)iVar6;
    }
    PVar3 = param_1[0x738];
    if ((PVar3 == (Props)0x0) || (pPVar13[0x738] == (Props)0x0)) {
      if ((PVar3 != (Props)0x0) == (pPVar13[0x738] != (Props)0x0)) goto LAB_007f9428;
LAB_007f9394:
      if (PVar3 == (Props)0x0) {
        local_78[0] = 0;
        local_70 = 0;
                    /* try { // try from 007f9458 to 007f946b has its CatchHandler @ 007f94ec */
        pdVar8 = (dynamic *)folly::dynamic::operator[]();
        folly::dynamic::operator=(pdVar8,(dynamic *)local_78);
        goto LAB_007f90a0;
      }
      PVar15 = param_1[0x720];
    }
    else {
      PVar15 = param_1[0x720];
      PVar4 = pPVar13[0x720];
      uVar11 = (ulong)((byte)PVar15 >> 1);
      sVar14 = uVar11;
      if (((byte)PVar15 & 1) != 0) {
        sVar14 = *(size_t *)(param_1 + 0x728);
      }
      sVar2 = (ulong)((byte)PVar4 >> 1);
      if (((byte)PVar4 & 1) != 0) {
        sVar2 = *(size_t *)(pPVar13 + 0x728);
      }
      if (sVar14 == sVar2) {
        pPVar9 = pPVar13 + 0x721;
        if (((byte)PVar4 & 1) != 0) {
          pPVar9 = *(Props **)(pPVar13 + 0x730);
        }
        if (((byte)PVar15 & 1) == 0) {
          if (1 < (byte)PVar15) {
            pPVar13 = param_1 + 0x721;
            do {
              if (*pPVar13 != *pPVar9) goto LAB_007f9394;
              uVar11 = uVar11 - 1;
              pPVar13 = pPVar13 + 1;
              pPVar9 = pPVar9 + 1;
            } while (uVar11 != 0);
          }
          goto LAB_007f9428;
        }
        iVar6 = memcmp(*(void **)(param_1 + 0x730),pPVar9,*(size_t *)(param_1 + 0x728));
        if (iVar6 == 0) goto LAB_007f9428;
      }
    }
    if (((byte)PVar15 & 1) == 0) {
      uStack_c8 = *(undefined8 *)(param_1 + 0x728);
      local_d0 = *(ulong *)(param_1 + 0x720);
      local_c0 = *(void **)(param_1 + 0x730);
    }
    else {
                    /* try { // try from 007f93cc to 007f93d3 has its CatchHandler @ 007f9500 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_d0,*(char **)(param_1 + 0x730),*(ulong *)(param_1 + 0x728));
    }
    local_78[0] = 6;
    uStack_68 = uStack_c8;
    local_70 = local_d0;
    local_60 = local_c0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = (void *)0x0;
                    /* try { // try from 007f93f4 to 007f9407 has its CatchHandler @ 007f9520 */
    pdVar8 = (dynamic *)folly::dynamic::operator[]();
    folly::dynamic::operator=(pdVar8,(dynamic *)local_78);
    folly::dynamic::folly::dynamic::destroy(local_78);
    if ((local_d0 & 1) != 0) {
      operator_delete(local_c0);
    }
  }
LAB_007f9428:
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 007f9598  FUN_007f9598 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007f9598(void)

{
  FUN_00788b10(&DAT_009af208,PTR_PTR_0099dfe8 + 0x10);
  DAT_009af7e4 = 0;
  DAT_009af7e8 = 0;
  DAT_009af848 = 0;
  DAT_009af850 = 0;
  DAT_009af8b0 = 0;
  DAT_009af8c0 = 0;
  DAT_009af8c4 = 0;
  DAT_009af8c8 = 0;
  DAT_009af8cc = 0;
  DAT_009af8d0 = 0;
  DAT_009af8d4 = 0;
  DAT_009af8d8 = 0;
  DAT_009af8dc = 0;
  DAT_009af8e0 = 0;
  DAT_009af8e4 = 0;
  DAT_009af8b8 = 0;
  DAT_009af8bc = 0;
  DAT_009af918 = 0;
  DAT_009af208 = PTR_vtable_0099dfe0 + 0x20;
  DAT_009af920 = 0;
  DAT_009af928 = 0;
  DAT_009af940 = 0;
  DAT_009af900 = 0;
  DAT_009af8f8 = 0;
  uRam00000000009af8f0 = 0;
  _DAT_009af8e8 = 0;
  return;
}


// ===== 007f9640  FUN_007f9640 =====

void FUN_007f9640(long param_1)

{
  if ((*(char *)(param_1 + 0x738) != '\0') && ((*(byte *)(param_1 + 0x720) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x730));
  }
  if ((*(char *)(param_1 + 0x710) != '\0') && ((*(byte *)(param_1 + 0x6f8) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x708));
  }
  if ((*(byte *)(param_1 + 0x6e0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x6f0));
  }
  FUN_0078917c(param_1,PTR_PTR_0099dfe8 + 8);
  return;
}


// ===== 007f96ac  facebook::react::DCDLocalImageThumbnailProps::DCDLocalImageThumbnailProps =====

/* facebook::react::DCDLocalImageThumbnailProps::DCDLocalImageThumbnailProps(facebook::react::PropsParserContext
   const&, facebook::react::DCDLocalImageThumbnailProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::DCDLocalImageThumbnailProps::DCDLocalImageThumbnailProps
          (DCDLocalImageThumbnailProps *this,PropsParserContext *param_1,
          DCDLocalImageThumbnailProps *param_2,RawProps *param_3)

{
  long lVar1;
  byte *pbVar2;
  function *in_x4;
  long lVar3;
  byte local_90 [16];
  void *local_80;
  char local_78;
  long *local_70;
  undefined8 uStack_68;
  long local_58;
  
  pbVar2 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007f96ec to 007f96fb has its CatchHandler @ 007f97d4 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if ((byte *)local_70 == local_90) {
    lVar3 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007f9728;
    lVar3 = 5;
    pbVar2 = (byte *)local_70;
  }
  (**(code **)(*(long *)pbVar2 + lVar3 * 8))();
LAB_007f9728:
  local_90[0] = 0;
  local_78 = '\0';
  *(undefined8 *)this = *(undefined8 *)param_1;
  local_70 = (long *)0x0;
  uStack_68 = 0;
                    /* try { // try from 007f973c to 007f9763 has its CatchHandler @ 007f97a8 */
  FUN_007f9824(this + 0x6e0,param_2);
  if ((local_78 != '\0') && ((local_90[0] & 1) != 0)) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007f9824  FUN_007f9824 =====

void FUN_007f9824(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,undefined8 param_2,char *param_3,char *param_4,byte *param_5,
                 undefined8 param_6,char *param_7)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  lVar3 = facebook::react::RawProps::at(param_3,param_4,param_7);
  if (lVar3 == 0) {
    bVar1 = param_5[0x18];
    *param_1 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    param_1[0x18] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    if (bVar1 != 0) {
      if ((*param_5 & 1) == 0) {
        uVar7 = *(undefined8 *)param_5;
        uVar6 = *(undefined8 *)(param_5 + 0x10);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_5 + 8);
        *(undefined8 *)param_1 = uVar7;
        *(undefined8 *)(param_1 + 0x10) = uVar6;
      }
      else {
                    /* try { // try from 007f98ac to 007f98b3 has its CatchHandler @ 007f9a88 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external(param_1,*(char **)(param_5 + 0x10),*(ulong *)(param_5 + 8));
      }
      param_1[0x18] =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1;
    }
    if (*(long *)(lVar2 + 0x28) == lVar5) {
      uVar6 = *(undefined8 *)(param_5 + 0x20);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_5 + 0x28);
      *(undefined8 *)(param_1 + 0x20) = uVar6;
      return;
    }
  }
  else {
    uVar4 = FUN_00807970();
    if ((uVar4 & 1) == 0) {
      if (*(long *)(lVar2 + 0x28) == lVar5) {
        FUN_0082df9c(param_1,param_6);
        return;
      }
    }
    else {
      *param_1 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0
      ;
      param_1[0x18] =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
                    /* try { // try from 007f9908 to 007f9913 has its CatchHandler @ 007f995c */
      FUN_0082e030(lVar3,param_1);
      if (*(long *)(lVar2 + 0x28) == lVar5) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007f9ac0  facebook::react::DCDLocalImageThumbnailProps::DCDLocalImageThumbnailProps =====

/* facebook::react::DCDLocalImageThumbnailProps::DCDLocalImageThumbnailProps(facebook::react::PropsParserContext
   const&, facebook::react::DCDLocalImageThumbnailProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::DCDLocalImageThumbnailProps::DCDLocalImageThumbnailProps
          (DCDLocalImageThumbnailProps *this,PropsParserContext *param_1,
          DCDLocalImageThumbnailProps *param_2,RawProps *param_3)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  byte local_90 [16];
  void *local_80;
  char local_78;
  long *local_70;
  undefined8 uStack_68;
  long local_58;
  
  pbVar2 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007f9afc to 007f9b1f has its CatchHandler @ 007f9c00 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099e000 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if ((byte *)local_70 == local_90) {
    lVar3 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007f9b4c;
    lVar3 = 5;
    pbVar2 = (byte *)local_70;
  }
  (**(code **)(*(long *)pbVar2 + lVar3 * 8))();
LAB_007f9b4c:
  local_90[0] = 0;
  local_78 = '\0';
  local_70 = (long *)0x0;
  uStack_68 = 0;
  *(undefined **)this = PTR_vtable_0099dff8 + 0x20;
                    /* try { // try from 007f9b68 to 007f9b8f has its CatchHandler @ 007f9bd4 */
  FUN_007f9824(this + 0x6e0,param_1,param_3,"localImageSource",param_2 + 0x6e0,local_90,0,0);
  if ((local_78 != '\0') && ((local_90[0] & 1) != 0)) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007f9c50  facebook::react::DCDLocalImageThumbnailProps::getDiffPropsImplementationTarget =====

/* facebook::react::DCDLocalImageThumbnailProps::getDiffPropsImplementationTarget() const */

char * facebook::react::DCDLocalImageThumbnailProps::getDiffPropsImplementationTarget(void)

{
  return "DCDLocalImageThumbnail";
}


// ===== 007f9c5c  facebook::react::DCDLocalImageThumbnailProps::getDiffProps =====

/* facebook::react::DCDLocalImageThumbnailProps::getDiffProps(facebook::react::Props const*) const
    */

void facebook::react::DCDLocalImageThumbnailProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  size_t sVar2;
  size_t sVar3;
  Props PVar4;
  Props PVar5;
  long lVar6;
  int iVar7;
  dynamic *pdVar8;
  int *piVar9;
  undefined4 *puVar10;
  Props *in_x1;
  Props *__s2;
  undefined4 *in_x8;
  ulong uVar11;
  Props *pPVar12;
  undefined8 uVar13;
  ulong local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 local_78 [2];
  ulong local_70;
  undefined8 uStack_68;
  void *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  if (((DAT_009b0060 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_009b0060), iVar7 != 0)) {
    memset(&DAT_009af950,0,0x710);
                    /* try { // try from 007f9f6c to 007f9f6f has its CatchHandler @ 007f9fa0 */
    FUN_007fa00c();
    __cxa_atexit(FUN_007fa0a4,&DAT_009af950,&PTR_LOOP_008d5d30);
    __cxa_guard_release(&DAT_009b0060);
  }
  pPVar1 = (Props *)&DAT_009af950;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    local_58 = 0;
    local_78[0] = 5;
    puVar10 = local_78;
    uStack_68 = 0;
    local_60 = (void *)0x0;
    local_50 = 0x3f800000;
    *in_x8 = 5;
    local_70 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
  }
  else {
    ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    if ((param_1[0x6f8] == (Props)0x0) || (pPVar1[0x6f8] == (Props)0x0)) {
      if ((param_1[0x6f8] != (Props)0x0) == (pPVar1[0x6f8] != (Props)0x0)) goto LAB_007f9d8c;
    }
    else {
      PVar4 = param_1[0x6e0];
      PVar5 = pPVar1[0x6e0];
      uVar11 = (ulong)((byte)PVar4 >> 1);
      sVar2 = uVar11;
      if (((byte)PVar4 & 1) != 0) {
        sVar2 = *(size_t *)(param_1 + 0x6e8);
      }
      sVar3 = (ulong)((byte)PVar5 >> 1);
      if (((byte)PVar5 & 1) != 0) {
        sVar3 = *(size_t *)(pPVar1 + 0x6e8);
      }
      if (sVar2 == sVar3) {
        __s2 = pPVar1 + 0x6e1;
        if (((byte)PVar5 & 1) != 0) {
          __s2 = *(Props **)(pPVar1 + 0x6f0);
        }
        if (((byte)PVar4 & 1) == 0) {
          if (1 < (byte)PVar4) {
            pPVar12 = param_1 + 0x6e1;
            do {
              if (*pPVar12 != *__s2) goto LAB_007f9dbc;
              uVar11 = uVar11 - 1;
              pPVar12 = pPVar12 + 1;
              __s2 = __s2 + 1;
            } while (uVar11 != 0);
          }
        }
        else {
          iVar7 = memcmp(*(void **)(param_1 + 0x6f0),__s2,*(size_t *)(param_1 + 0x6e8));
          if (iVar7 != 0) goto LAB_007f9dbc;
        }
LAB_007f9d8c:
        if ((*(double *)(param_1 + 0x700) == *(double *)(pPVar1 + 0x700)) &&
           (*(double *)(param_1 + 0x708) == *(double *)(pPVar1 + 0x708))) goto LAB_007f9f18;
      }
    }
LAB_007f9dbc:
    local_58 = 0;
    local_78[0] = 5;
    uStack_68 = 0;
    local_60 = (void *)0x0;
    local_50 = 0x3f800000;
    local_a8[0] = 5;
    local_70 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_78);
    if (param_1[0x6f8] != (Props)0x0) {
      if (((byte)param_1[0x6e0] & 1) == 0) {
        uStack_b8 = *(undefined8 *)(param_1 + 0x6e8);
        local_c0 = *(ulong *)(param_1 + 0x6e0);
        local_b0 = *(void **)(param_1 + 0x6f0);
      }
      else {
                    /* try { // try from 007f9e20 to 007f9e27 has its CatchHandler @ 007f9fb4 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_c0,*(char **)(param_1 + 0x6f0),*(ulong *)(param_1 + 0x6e8));
      }
      local_78[0] = 6;
      uStack_68 = uStack_b8;
      local_70 = local_c0;
      local_60 = local_b0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = (void *)0x0;
                    /* try { // try from 007f9e48 to 007f9e5b has its CatchHandler @ 007f9fb8 */
      pdVar8 = (dynamic *)folly::dynamic::operator[](local_a8,&DAT_0036c4b0,&DAT_0036c4b3);
      folly::dynamic::operator=(pdVar8,(dynamic *)local_78);
      folly::dynamic::folly::dynamic::destroy(local_78);
      if ((local_c0 & 1) != 0) {
        operator_delete(local_b0);
      }
    }
    uVar13 = *(undefined8 *)(param_1 + 0x700);
                    /* try { // try from 007f9e80 to 007f9ecf has its CatchHandler @ 007f9fdc */
    piVar9 = (int *)folly::dynamic::operator[](local_a8,"width","");
    if (*piVar9 != 3) {
      folly::dynamic::folly::dynamic::destroy(piVar9);
      *piVar9 = 3;
    }
    *(undefined8 *)(piVar9 + 2) = uVar13;
    uVar13 = *(undefined8 *)(param_1 + 0x708);
    piVar9 = (int *)folly::dynamic::operator[](local_a8,"height","");
    if (*piVar9 != 3) {
      folly::dynamic::folly::dynamic::destroy(piVar9);
      *piVar9 = 3;
    }
    *(undefined8 *)(piVar9 + 2) = uVar13;
                    /* try { // try from 007f9ef4 to 007f9f07 has its CatchHandler @ 007f9fd8 */
    pdVar8 = (dynamic *)folly::dynamic::operator[]();
    folly::dynamic::operator=(pdVar8,(dynamic *)local_a8);
    puVar10 = local_a8;
  }
  folly::dynamic::folly::dynamic::destroy(puVar10);
LAB_007f9f18:
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fa00c  FUN_007fa00c =====

void FUN_007fa00c(void)

{
  FUN_00788b10(&DAT_009af950,PTR_PTR_0099e000 + 0x10);
  DAT_009aff2c = 0;
  DAT_009aff30 = 0;
  DAT_009aff90 = 0;
  DAT_009aff98 = 0;
  DAT_009afff8 = 0;
  DAT_009b0008 = 0;
  DAT_009b000c = 0;
  DAT_009b0010 = 0;
  DAT_009b0014 = 0;
  DAT_009b0018 = 0;
  DAT_009b001c = 0;
  DAT_009b0020 = 0;
  DAT_009b0024 = 0;
  DAT_009b0028 = 0;
  DAT_009b002c = 0;
  DAT_009b0000 = 0;
  DAT_009b0004 = 0;
  DAT_009b0030 = 0;
  DAT_009af950 = PTR_vtable_0099dff8 + 0x20;
  DAT_009b0048 = 0;
  DAT_009b0058 = 0;
  DAT_009b0050 = 0;
  return;
}


// ===== 007fa0a4  FUN_007fa0a4 =====

void FUN_007fa0a4(long param_1)

{
  if ((*(char *)(param_1 + 0x6f8) != '\0') && ((*(byte *)(param_1 + 0x6e0) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x6f0));
  }
  FUN_0078917c(param_1,PTR_PTR_0099e000 + 8);
  return;
}


// ===== 007fa0ec  facebook::react::NativeLottieNodeProps::NativeLottieNodeProps =====

/* facebook::react::NativeLottieNodeProps::NativeLottieNodeProps(facebook::react::PropsParserContext
   const&, facebook::react::NativeLottieNodeProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::NativeLottieNodeProps::NativeLottieNodeProps
          (NativeLottieNodeProps *this,PropsParserContext *param_1,NativeLottieNodeProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  long *plVar2;
  function *in_x4;
  long lVar3;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar2 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (long *)0x0;
                    /* try { // try from 007fa118 to 007fa127 has its CatchHandler @ 007fa180 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if (local_50 == local_70) {
    lVar3 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007fa154;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007fa154:
  *(undefined8 *)this = *(undefined8 *)param_1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fa1d0  facebook::react::NativeLottieNodeProps::NativeLottieNodeProps =====

/* facebook::react::NativeLottieNodeProps::NativeLottieNodeProps(facebook::react::PropsParserContext
   const&, facebook::react::NativeLottieNodeProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::NativeLottieNodeProps::NativeLottieNodeProps
          (NativeLottieNodeProps *this,PropsParserContext *param_1,NativeLottieNodeProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar2 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (long *)0x0;
                    /* try { // try from 007fa204 to 007fa21b has its CatchHandler @ 007fa27c */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099e018 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if (local_50 == local_70) {
    lVar3 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007fa248;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007fa248:
  *(undefined **)this = PTR_vtable_0099e010 + 0x20;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fa2cc  facebook::react::NativeLottieNodeProps::getDiffPropsImplementationTarget =====

/* facebook::react::NativeLottieNodeProps::getDiffPropsImplementationTarget() const */

char * facebook::react::NativeLottieNodeProps::getDiffPropsImplementationTarget(void)

{
  return "NativeLottieNode";
}


// ===== 007fa2d8  facebook::react::NativeLottieNodeProps::getDiffProps =====

/* facebook::react::NativeLottieNodeProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::NativeLottieNodeProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  long lVar2;
  int iVar3;
  Props *in_x1;
  undefined4 *in_x8;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if ((DAT_009b0748 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_009b0748);
    if (iVar3 != 0) {
      memset(&DAT_009b0068,0,0x6e0);
                    /* try { // try from 007fa3cc to 007fa3cf has its CatchHandler @ 007fa404 */
      FUN_007fa430();
      __cxa_atexit(FUN_007fa4b8,&DAT_009b0068,&PTR_LOOP_008d5d30);
      __cxa_guard_release(&DAT_009b0748);
    }
  }
  pPVar1 = (Props *)&DAT_009b0068;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    local_38 = 0;
    local_58[0] = 5;
    local_48 = 0;
    uStack_40 = 0;
    local_30 = 0x3f800000;
    *in_x8 = 5;
    local_50 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_58);
    if (*(long *)(lVar2 + 0x28) == local_28) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_28) {
    ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fa430  FUN_007fa430 =====

void FUN_007fa430(void)

{
  FUN_00788b10(&DAT_009b0068,PTR_PTR_0099e018 + 0x10);
  DAT_009b0644 = 0;
  DAT_009b0648 = 0;
  DAT_009b06a8 = 0;
  DAT_009b06b0 = 0;
  DAT_009b0710 = 0;
  DAT_009b0720 = 0;
  DAT_009b0724 = 0;
  DAT_009b0728 = 0;
  DAT_009b072c = 0;
  DAT_009b0730 = 0;
  DAT_009b0734 = 0;
  DAT_009b0738 = 0;
  DAT_009b073c = 0;
  DAT_009b0740 = 0;
  DAT_009b0744 = 0;
  DAT_009b0718 = 0;
  DAT_009b071c = 0;
  DAT_009b0068 = PTR_vtable_0099e010 + 0x20;
  return;
}


// ===== 007fa4b8  FUN_007fa4b8 =====

void FUN_007fa4b8(undefined8 param_1)

{
  FUN_0078917c(param_1,PTR_PTR_0099e018 + 8);
  return;
}


// ===== 007fa4c8  facebook::react::DCDMessageViewProps::DCDMessageViewProps =====

/* facebook::react::DCDMessageViewProps::DCDMessageViewProps(facebook::react::PropsParserContext
   const&, facebook::react::DCDMessageViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::DCDMessageViewProps::DCDMessageViewProps
          (DCDMessageViewProps *this,PropsParserContext *param_1,DCDMessageViewProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  ulong *puVar2;
  function *in_x4;
  long lVar3;
  ulong local_90 [2];
  void *local_80;
  long *local_70;
  long local_58;
  
  puVar2 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007fa508 to 007fa517 has its CatchHandler @ 007fa5dc */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if ((ulong *)local_70 == local_90) {
    lVar3 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007fa544;
    lVar3 = 5;
    puVar2 = (ulong *)local_70;
  }
  (**(code **)(*puVar2 + lVar3 * 8))();
LAB_007fa544:
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 007fa554 to 007fa57b has its CatchHandler @ 007fa5b8 */
  FUN_007ea274(this + 0x6e0,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fa62c  facebook::react::DCDMessageViewProps::DCDMessageViewProps =====

/* facebook::react::DCDMessageViewProps::DCDMessageViewProps(facebook::react::PropsParserContext
   const&, facebook::react::DCDMessageViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::DCDMessageViewProps::DCDMessageViewProps
          (DCDMessageViewProps *this,PropsParserContext *param_1,DCDMessageViewProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  ulong local_90 [2];
  void *local_80;
  long *local_70;
  long local_58;
  
  puVar2 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007fa668 to 007fa68b has its CatchHandler @ 007fa758 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099e160 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if ((ulong *)local_70 == local_90) {
    lVar3 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007fa6b8;
    lVar3 = 5;
    puVar2 = (ulong *)local_70;
  }
  (**(code **)(*puVar2 + lVar3 * 8))();
LAB_007fa6b8:
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
  *(undefined **)this = PTR_vtable_0099e158 + 0x20;
                    /* try { // try from 007fa6d0 to 007fa6f7 has its CatchHandler @ 007fa734 */
  FUN_007ea274(this + 0x6e0,param_1,param_3,&DAT_00369815,param_2 + 0x6e0,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fa7a8  facebook::react::DCDMessageViewProps::getDiffPropsImplementationTarget =====

/* facebook::react::DCDMessageViewProps::getDiffPropsImplementationTarget() const */

char * facebook::react::DCDMessageViewProps::getDiffPropsImplementationTarget(void)

{
  return "DCDMessageView";
}


// ===== 007fa7b4  facebook::react::DCDMessageViewProps::getDiffProps =====

/* facebook::react::DCDMessageViewProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::DCDMessageViewProps::getDiffProps(Props *param_1)

{
  ulong uVar1;
  ulong uVar2;
  Props PVar3;
  Props PVar4;
  long lVar5;
  int iVar6;
  dynamic *this;
  Props *in_x1;
  Props *__s2;
  undefined4 *in_x8;
  ulong uVar7;
  Props *pPVar8;
  char *__s1;
  size_t __n;
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  undefined4 local_78 [2];
  ulong local_70;
  undefined8 uStack_68;
  void *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if (((DAT_009b0e48 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_009b0e48), iVar6 != 0)) {
    memset(&DAT_009b0750,0,0x6f8);
                    /* try { // try from 007fa9b0 to 007fa9b3 has its CatchHandler @ 007fa9e4 */
    FUN_007faa40();
    __cxa_atexit(FUN_007faad4,&DAT_009b0750,&PTR_LOOP_008d5d30);
    __cxa_guard_release(&DAT_009b0e48);
  }
  pPVar8 = (Props *)&DAT_009b0750;
  if (in_x1 != (Props *)0x0) {
    pPVar8 = in_x1;
  }
  if (pPVar8 == param_1) {
    local_58 = 0;
    local_78[0] = 5;
    uStack_68 = 0;
    local_60 = (void *)0x0;
    local_50 = 0x3f800000;
    *in_x8 = 5;
    local_70 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_78);
    goto LAB_007fa95c;
  }
  ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
  PVar3 = param_1[0x6e0];
  PVar4 = pPVar8[0x6e0];
  __n = *(size_t *)(param_1 + 0x6e8);
  uVar7 = (ulong)((byte)PVar3 >> 1);
  uVar1 = uVar7;
  if (((byte)PVar3 & 1) != 0) {
    uVar1 = __n;
  }
  uVar2 = (ulong)((byte)PVar4 >> 1);
  if (((byte)PVar4 & 1) != 0) {
    uVar2 = *(ulong *)(pPVar8 + 0x6e8);
  }
  if (uVar1 == uVar2) {
    __s2 = pPVar8 + 0x6e1;
    if (((byte)PVar4 & 1) != 0) {
      __s2 = *(Props **)(pPVar8 + 0x6f0);
    }
    if (((byte)PVar3 & 1) == 0) {
      if (1 < (byte)PVar3) {
        pPVar8 = param_1 + 0x6e1;
        do {
          if (*pPVar8 != *__s2) goto LAB_007fa8c0;
          uVar7 = uVar7 - 1;
          pPVar8 = pPVar8 + 1;
          __s2 = __s2 + 1;
        } while (uVar7 != 0);
      }
      goto LAB_007fa95c;
    }
    __s1 = *(char **)(param_1 + 0x6f0);
    iVar6 = memcmp(__s1,__s2,__n);
    if (iVar6 == 0) goto LAB_007fa95c;
LAB_007fa8f8:
                    /* try { // try from 007fa8f8 to 007fa907 has its CatchHandler @ 007fa9f8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_90,__s1,__n);
  }
  else {
LAB_007fa8c0:
    if (((byte)PVar3 & 1) != 0) {
      __s1 = *(char **)(param_1 + 0x6f0);
      goto LAB_007fa8f8;
    }
    uStack_88 = *(undefined8 *)(param_1 + 0x6e8);
    local_90 = *(ulong *)(param_1 + 0x6e0);
    local_80 = *(void **)(param_1 + 0x6f0);
  }
  local_78[0] = 6;
  uStack_68 = uStack_88;
  local_70 = local_90;
  local_60 = local_80;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 007fa928 to 007fa93b has its CatchHandler @ 007faa00 */
  this = (dynamic *)folly::dynamic::operator[]();
  folly::dynamic::operator=(this,(dynamic *)local_78);
  folly::dynamic::folly::dynamic::destroy(local_78);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
LAB_007fa95c:
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 007faa40  FUN_007faa40 =====

void FUN_007faa40(void)

{
  FUN_00788b10(&DAT_009b0750,PTR_PTR_0099e160 + 0x10);
  DAT_009b0d2c = 0;
  DAT_009b0d30 = 0;
  DAT_009b0d90 = 0;
  DAT_009b0d98 = 0;
  DAT_009b0df8 = 0;
  DAT_009b0e08 = 0;
  DAT_009b0e0c = 0;
  DAT_009b0e10 = 0;
  DAT_009b0e14 = 0;
  DAT_009b0e18 = 0;
  DAT_009b0e1c = 0;
  DAT_009b0e20 = 0;
  DAT_009b0e24 = 0;
  DAT_009b0e28 = 0;
  DAT_009b0e2c = 0;
  DAT_009b0e00 = 0;
  DAT_009b0e04 = 0;
  DAT_009b0e30 = 0;
  DAT_009b0750 = PTR_vtable_0099e158 + 0x20;
  DAT_009b0e40 = 0;
  DAT_009b0e38 = 0;
  return;
}


// ===== 007faad4  FUN_007faad4 =====

void FUN_007faad4(long param_1)

{
  if ((*(byte *)(param_1 + 0x6e0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x6f0));
  }
  FUN_0078917c(param_1,PTR_PTR_0099e160 + 8);
  return;
}


// ===== 007fab14  facebook::react::DCDNonRecycledViewProps::DCDNonRecycledViewProps =====

/* facebook::react::DCDNonRecycledViewProps::DCDNonRecycledViewProps(facebook::react::PropsParserContext
   const&, facebook::react::DCDNonRecycledViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::DCDNonRecycledViewProps::DCDNonRecycledViewProps
          (DCDNonRecycledViewProps *this,PropsParserContext *param_1,
          DCDNonRecycledViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  long *plVar2;
  function *in_x4;
  long lVar3;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar2 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (long *)0x0;
                    /* try { // try from 007fab40 to 007fab4f has its CatchHandler @ 007faba8 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if (local_50 == local_70) {
    lVar3 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007fab7c;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007fab7c:
  *(undefined8 *)this = *(undefined8 *)param_1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fabf8  facebook::react::DCDNonRecycledViewProps::DCDNonRecycledViewProps =====

/* facebook::react::DCDNonRecycledViewProps::DCDNonRecycledViewProps(facebook::react::PropsParserContext
   const&, facebook::react::DCDNonRecycledViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::DCDNonRecycledViewProps::DCDNonRecycledViewProps
          (DCDNonRecycledViewProps *this,PropsParserContext *param_1,
          DCDNonRecycledViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar2 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (long *)0x0;
                    /* try { // try from 007fac2c to 007fac43 has its CatchHandler @ 007faca4 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099e030 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if (local_50 == local_70) {
    lVar3 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007fac70;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007fac70:
  *(undefined **)this = PTR_vtable_0099e028 + 0x20;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007facf4  facebook::react::DCDNonRecycledViewProps::getDiffPropsImplementationTarget =====

/* facebook::react::DCDNonRecycledViewProps::getDiffPropsImplementationTarget() const */

char * facebook::react::DCDNonRecycledViewProps::getDiffPropsImplementationTarget(void)

{
  return "DCDNonRecycledView";
}


// ===== 007fad00  facebook::react::DCDNonRecycledViewProps::getDiffProps =====

/* facebook::react::DCDNonRecycledViewProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::DCDNonRecycledViewProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  long lVar2;
  int iVar3;
  Props *in_x1;
  undefined4 *in_x8;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if ((DAT_009b1530 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_009b1530);
    if (iVar3 != 0) {
      memset(&DAT_009b0e50,0,0x6e0);
                    /* try { // try from 007fadf4 to 007fadf7 has its CatchHandler @ 007fae2c */
      FUN_007fae58();
      __cxa_atexit(FUN_007faee0,&DAT_009b0e50,&PTR_LOOP_008d5d30);
      __cxa_guard_release(&DAT_009b1530);
    }
  }
  pPVar1 = (Props *)&DAT_009b0e50;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    local_38 = 0;
    local_58[0] = 5;
    local_48 = 0;
    uStack_40 = 0;
    local_30 = 0x3f800000;
    *in_x8 = 5;
    local_50 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_58);
    if (*(long *)(lVar2 + 0x28) == local_28) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_28) {
    ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fae58  FUN_007fae58 =====

void FUN_007fae58(void)

{
  FUN_00788b10(&DAT_009b0e50,PTR_PTR_0099e030 + 0x10);
  DAT_009b142c = 0;
  DAT_009b1430 = 0;
  DAT_009b1490 = 0;
  DAT_009b1498 = 0;
  DAT_009b14f8 = 0;
  DAT_009b1508 = 0;
  DAT_009b150c = 0;
  DAT_009b1510 = 0;
  DAT_009b1514 = 0;
  DAT_009b1518 = 0;
  DAT_009b151c = 0;
  DAT_009b1520 = 0;
  DAT_009b1524 = 0;
  DAT_009b1528 = 0;
  DAT_009b152c = 0;
  DAT_009b1500 = 0;
  DAT_009b1504 = 0;
  DAT_009b0e50 = PTR_vtable_0099e028 + 0x20;
  return;
}


// ===== 007faee0  FUN_007faee0 =====

void FUN_007faee0(undefined8 param_1)

{
  FUN_0078917c(param_1,PTR_PTR_0099e030 + 8);
  return;
}


// ===== 007faef0  facebook::react::PassthroughTouchViewProps::PassthroughTouchViewProps =====

/* facebook::react::PassthroughTouchViewProps::PassthroughTouchViewProps(facebook::react::PropsParserContext
   const&, facebook::react::PassthroughTouchViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::PassthroughTouchViewProps::PassthroughTouchViewProps
          (PassthroughTouchViewProps *this,PropsParserContext *param_1,
          PassthroughTouchViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  long *plVar2;
  function *in_x4;
  long lVar3;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar2 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (long *)0x0;
                    /* try { // try from 007faf1c to 007faf2b has its CatchHandler @ 007faf84 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if (local_50 == local_70) {
    lVar3 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007faf58;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007faf58:
  *(undefined8 *)this = *(undefined8 *)param_1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fafd4  facebook::react::PassthroughTouchViewProps::PassthroughTouchViewProps =====

/* facebook::react::PassthroughTouchViewProps::PassthroughTouchViewProps(facebook::react::PropsParserContext
   const&, facebook::react::PassthroughTouchViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::PassthroughTouchViewProps::PassthroughTouchViewProps
          (PassthroughTouchViewProps *this,PropsParserContext *param_1,
          PassthroughTouchViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar2 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (long *)0x0;
                    /* try { // try from 007fb008 to 007fb01f has its CatchHandler @ 007fb080 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099e048 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if (local_50 == local_70) {
    lVar3 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007fb04c;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007fb04c:
  *(undefined **)this = PTR_vtable_0099e040 + 0x20;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fb0d0  facebook::react::PassthroughTouchViewProps::getDiffPropsImplementationTarget =====

/* facebook::react::PassthroughTouchViewProps::getDiffPropsImplementationTarget() const */

char * facebook::react::PassthroughTouchViewProps::getDiffPropsImplementationTarget(void)

{
  return "PassthroughTouchView";
}


// ===== 007fb0dc  facebook::react::PassthroughTouchViewProps::getDiffProps =====

/* facebook::react::PassthroughTouchViewProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::PassthroughTouchViewProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  long lVar2;
  int iVar3;
  Props *in_x1;
  undefined4 *in_x8;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if ((DAT_009b1c18 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_009b1c18);
    if (iVar3 != 0) {
      memset(&DAT_009b1538,0,0x6e0);
                    /* try { // try from 007fb1d0 to 007fb1d3 has its CatchHandler @ 007fb208 */
      FUN_007fb234();
      __cxa_atexit(FUN_007fb2bc,&DAT_009b1538,&PTR_LOOP_008d5d30);
      __cxa_guard_release(&DAT_009b1c18);
    }
  }
  pPVar1 = (Props *)&DAT_009b1538;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    local_38 = 0;
    local_58[0] = 5;
    local_48 = 0;
    uStack_40 = 0;
    local_30 = 0x3f800000;
    *in_x8 = 5;
    local_50 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_58);
    if (*(long *)(lVar2 + 0x28) == local_28) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_28) {
    ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fb234  FUN_007fb234 =====

void FUN_007fb234(void)

{
  FUN_00788b10(&DAT_009b1538,PTR_PTR_0099e048 + 0x10);
  DAT_009b1b14 = 0;
  DAT_009b1b18 = 0;
  DAT_009b1b78 = 0;
  DAT_009b1b80 = 0;
  DAT_009b1be0 = 0;
  DAT_009b1bf0 = 0;
  DAT_009b1bf4 = 0;
  DAT_009b1bf8 = 0;
  DAT_009b1bfc = 0;
  DAT_009b1c00 = 0;
  DAT_009b1c04 = 0;
  DAT_009b1c08 = 0;
  DAT_009b1c0c = 0;
  DAT_009b1c10 = 0;
  DAT_009b1c14 = 0;
  DAT_009b1be8 = 0;
  DAT_009b1bec = 0;
  DAT_009b1538 = PTR_vtable_0099e040 + 0x20;
  return;
}


// ===== 007fb2bc  FUN_007fb2bc =====

void FUN_007fb2bc(undefined8 param_1)

{
  FUN_0078917c(param_1,PTR_PTR_0099e048 + 8);
  return;
}


// ===== 007fb2cc  facebook::react::DCDPortalViewProps::DCDPortalViewProps =====

/* facebook::react::DCDPortalViewProps::DCDPortalViewProps(facebook::react::PropsParserContext
   const&, facebook::react::DCDPortalViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::DCDPortalViewProps::DCDPortalViewProps
          (DCDPortalViewProps *this,PropsParserContext *param_1,DCDPortalViewProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  long *plVar2;
  function *in_x4;
  long lVar3;
  undefined8 uVar4;
  long local_90 [4];
  long *local_70;
  long local_58;
  
  plVar2 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007fb30c to 007fb31b has its CatchHandler @ 007fb3bc */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if (local_70 == local_90) {
    lVar3 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007fb348;
    lVar3 = 5;
    plVar2 = local_70;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007fb348:
  local_90[0] = 0;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 007fb354 to 007fb377 has its CatchHandler @ 007fb3a8 */
  uVar4 = FUN_007fb40c(param_2);
  *(undefined8 *)(this + 0x6e0) = uVar4;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fb40c  FUN_007fb40c =====

void FUN_007fb40c(undefined8 param_1,char *param_2,char *param_3,undefined8 *param_4,
                 undefined8 *param_5,char *param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_2,param_3,param_6);
  if (lVar2 == 0) {
    uVar5 = *param_4;
  }
  else {
    uVar3 = FUN_00807970();
    if ((uVar3 & 1) == 0) {
      uVar5 = *param_5;
    }
    else {
                    /* try { // try from 007fb49c to 007fb4a3 has its CatchHandler @ 007fb4b0 */
      uVar5 = FUN_0082e2dc(lVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 007fb5d4  facebook::react::DCDPortalViewProps::DCDPortalViewProps =====

/* facebook::react::DCDPortalViewProps::DCDPortalViewProps(facebook::react::PropsParserContext
   const&, facebook::react::DCDPortalViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::DCDPortalViewProps::DCDPortalViewProps
          (DCDPortalViewProps *this,PropsParserContext *param_1,DCDPortalViewProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long local_90 [4];
  long *local_70;
  long local_58;
  
  plVar2 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007fb610 to 007fb633 has its CatchHandler @ 007fb6dc */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099e060 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if (local_70 == local_90) {
    lVar3 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007fb660;
    lVar3 = 5;
    plVar2 = local_70;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007fb660:
  local_90[0] = 0;
  *(undefined **)this = PTR_vtable_0099e058 + 0x20;
                    /* try { // try from 007fb674 to 007fb697 has its CatchHandler @ 007fb6c8 */
  uVar4 = FUN_007fb40c(param_1,param_3,"portal",param_2 + 0x6e0,local_90,0,0);
  *(undefined8 *)(this + 0x6e0) = uVar4;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fb72c  facebook::react::DCDPortalViewProps::getDiffPropsImplementationTarget =====

/* facebook::react::DCDPortalViewProps::getDiffPropsImplementationTarget() const */

char * facebook::react::DCDPortalViewProps::getDiffPropsImplementationTarget(void)

{
  return "DCDPortalView";
}


// ===== 007fb738  facebook::react::DCDPortalViewProps::getDiffProps =====

/* facebook::react::DCDPortalViewProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::DCDPortalViewProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  Props *in_x1;
  undefined4 *in_x8;
  double dVar5;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (((DAT_009b2308 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_009b2308), iVar3 != 0)) {
    memset(&DAT_009b1c20,0,0x6e8);
                    /* try { // try from 007fb888 to 007fb88b has its CatchHandler @ 007fb8c0 */
    FUN_007fb8fc();
    __cxa_atexit(FUN_007fb988,&DAT_009b1c20,&PTR_LOOP_008d5d30);
    __cxa_guard_release(&DAT_009b2308);
  }
  pPVar1 = (Props *)&DAT_009b1c20;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    local_58 = 0;
    local_78[0] = 5;
    local_68 = 0;
    uStack_60 = 0;
    local_50 = 0x3f800000;
    *in_x8 = 5;
    local_70 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_78);
  }
  else {
    ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    dVar5 = *(double *)(param_1 + 0x6e0);
    if ((dVar5 != *(double *)(pPVar1 + 0x6e0)) &&
       ((!NAN(dVar5) || (!NAN(*(double *)(pPVar1 + 0x6e0)))))) {
                    /* try { // try from 007fb7b4 to 007fb7c7 has its CatchHandler @ 007fb8d4 */
      piVar4 = (int *)folly::dynamic::operator[]();
      if (*piVar4 != 3) {
        folly::dynamic::folly::dynamic::destroy(piVar4);
        *piVar4 = 3;
      }
      *(double *)(piVar4 + 2) = dVar5;
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 007fb8fc  FUN_007fb8fc =====

void FUN_007fb8fc(void)

{
  FUN_00788b10(&DAT_009b1c20,PTR_PTR_0099e060 + 0x10);
  DAT_009b21fc = 0;
  DAT_009b2200 = 0;
  DAT_009b2260 = 0;
  DAT_009b2268 = 0;
  DAT_009b22c8 = 0;
  DAT_009b22d8 = 0;
  DAT_009b22dc = 0;
  DAT_009b22e0 = 0;
  DAT_009b22e4 = 0;
  DAT_009b22e8 = 0;
  DAT_009b22ec = 0;
  DAT_009b22f0 = 0;
  DAT_009b22f4 = 0;
  DAT_009b22f8 = 0;
  DAT_009b22fc = 0;
  DAT_009b22d0 = 0;
  DAT_009b22d4 = 0;
  DAT_009b2300 = 0;
  DAT_009b1c20 = PTR_vtable_0099e058 + 0x20;
  return;
}


// ===== 007fb988  FUN_007fb988 =====

void FUN_007fb988(undefined8 param_1)

{
  FUN_0078917c(param_1,PTR_PTR_0099e060 + 8);
  return;
}


// ===== 007fb998  facebook::react::DCDQRScannerProps::DCDQRScannerProps =====

/* facebook::react::DCDQRScannerProps::DCDQRScannerProps(facebook::react::PropsParserContext const&,
   facebook::react::DCDQRScannerProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::DCDQRScannerProps::DCDQRScannerProps
          (DCDQRScannerProps *this,PropsParserContext *param_1,DCDQRScannerProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  long *plVar2;
  function *in_x4;
  long lVar3;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar2 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (long *)0x0;
                    /* try { // try from 007fb9c4 to 007fb9d3 has its CatchHandler @ 007fba2c */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if (local_50 == local_70) {
    lVar3 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007fba00;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007fba00:
  *(undefined8 *)this = *(undefined8 *)param_1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fba7c  facebook::react::DCDQRScannerProps::DCDQRScannerProps =====

/* facebook::react::DCDQRScannerProps::DCDQRScannerProps(facebook::react::PropsParserContext const&,
   facebook::react::DCDQRScannerProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::DCDQRScannerProps::DCDQRScannerProps
          (DCDQRScannerProps *this,PropsParserContext *param_1,DCDQRScannerProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar2 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (long *)0x0;
                    /* try { // try from 007fbab0 to 007fbac7 has its CatchHandler @ 007fbb28 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099e078 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if (local_50 == local_70) {
    lVar3 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007fbaf4;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007fbaf4:
  *(undefined **)this = PTR_vtable_0099e070 + 0x20;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fbb78  facebook::react::DCDQRScannerProps::getDiffPropsImplementationTarget =====

/* facebook::react::DCDQRScannerProps::getDiffPropsImplementationTarget() const */

char * facebook::react::DCDQRScannerProps::getDiffPropsImplementationTarget(void)

{
  return "DCDQRScanner";
}


// ===== 007fbb84  facebook::react::DCDQRScannerProps::getDiffProps =====

/* facebook::react::DCDQRScannerProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::DCDQRScannerProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  long lVar2;
  int iVar3;
  Props *in_x1;
  undefined4 *in_x8;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if ((DAT_009b29f0 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_009b29f0);
    if (iVar3 != 0) {
      memset(&DAT_009b2310,0,0x6e0);
                    /* try { // try from 007fbc78 to 007fbc7b has its CatchHandler @ 007fbcb0 */
      FUN_007fbcdc();
      __cxa_atexit(FUN_007fbd64,&DAT_009b2310,&PTR_LOOP_008d5d30);
      __cxa_guard_release(&DAT_009b29f0);
    }
  }
  pPVar1 = (Props *)&DAT_009b2310;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    local_38 = 0;
    local_58[0] = 5;
    local_48 = 0;
    uStack_40 = 0;
    local_30 = 0x3f800000;
    *in_x8 = 5;
    local_50 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_58);
    if (*(long *)(lVar2 + 0x28) == local_28) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_28) {
    ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fbcdc  FUN_007fbcdc =====

void FUN_007fbcdc(void)

{
  FUN_00788b10(&DAT_009b2310,PTR_PTR_0099e078 + 0x10);
  DAT_009b28ec = 0;
  DAT_009b28f0 = 0;
  DAT_009b2950 = 0;
  DAT_009b2958 = 0;
  DAT_009b29b8 = 0;
  DAT_009b29c8 = 0;
  DAT_009b29cc = 0;
  DAT_009b29d0 = 0;
  DAT_009b29d4 = 0;
  DAT_009b29d8 = 0;
  DAT_009b29dc = 0;
  DAT_009b29e0 = 0;
  DAT_009b29e4 = 0;
  DAT_009b29e8 = 0;
  DAT_009b29ec = 0;
  DAT_009b29c0 = 0;
  DAT_009b29c4 = 0;
  DAT_009b2310 = PTR_vtable_0099e070 + 0x20;
  return;
}


// ===== 007fbd64  FUN_007fbd64 =====

void FUN_007fbd64(undefined8 param_1)

{
  FUN_0078917c(param_1,PTR_PTR_0099e078 + 8);
  return;
}


// ===== 007fbd74  facebook::react::ReanimatedViewProps::ReanimatedViewProps =====

/* facebook::react::ReanimatedViewProps::ReanimatedViewProps(facebook::react::PropsParserContext
   const&, facebook::react::ReanimatedViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::ReanimatedViewProps::ReanimatedViewProps
          (ReanimatedViewProps *this,PropsParserContext *param_1,ReanimatedViewProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  function *in_x4;
  long lVar4;
  undefined1 local_90 [32];
  long *local_70;
  long local_58;
  
  plVar3 = (long *)local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007fbdb4 to 007fbdc3 has its CatchHandler @ 007fbe68 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if (local_70 == (long *)local_90) {
    lVar4 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007fbdf0;
    lVar4 = 5;
    plVar3 = local_70;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007fbdf0:
  local_90[0] = 0;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 007fbdfc to 007fbe1f has its CatchHandler @ 007fbe54 */
  bVar2 = FUN_007ea510(param_2);
  this[0x6e0] = (ReanimatedViewProps)(bVar2 & 1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fbeb8  facebook::react::ReanimatedViewProps::ReanimatedViewProps =====

/* facebook::react::ReanimatedViewProps::ReanimatedViewProps(facebook::react::PropsParserContext
   const&, facebook::react::ReanimatedViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::ReanimatedViewProps::ReanimatedViewProps
          (ReanimatedViewProps *this,PropsParserContext *param_1,ReanimatedViewProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  undefined1 local_90 [32];
  long *local_70;
  long local_58;
  
  plVar3 = (long *)local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007fbef4 to 007fbf17 has its CatchHandler @ 007fbfc4 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099e170 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if (local_70 == (long *)local_90) {
    lVar4 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007fbf44;
    lVar4 = 5;
    plVar3 = local_70;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007fbf44:
  local_90[0] = 0;
  *(undefined **)this = PTR_vtable_0099e168 + 0x20;
                    /* try { // try from 007fbf58 to 007fbf7b has its CatchHandler @ 007fbfb0 */
  bVar2 = FUN_007ea510(param_1,param_3,"hasEnteringAnimation",param_2 + 0x6e0,local_90,0,0);
  this[0x6e0] = (ReanimatedViewProps)(bVar2 & 1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fc014  facebook::react::ReanimatedViewProps::getDiffPropsImplementationTarget =====

/* facebook::react::ReanimatedViewProps::getDiffPropsImplementationTarget() const */

char * facebook::react::ReanimatedViewProps::getDiffPropsImplementationTarget(void)

{
  return "ReanimatedView";
}


// ===== 007fc020  facebook::react::ReanimatedViewProps::getDiffProps =====

/* facebook::react::ReanimatedViewProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::ReanimatedViewProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  Props PVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  Props *in_x1;
  undefined4 *in_x8;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((DAT_009b30e0 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(&DAT_009b30e0);
    if (iVar4 != 0) {
      memset(&DAT_009b29f8,0,0x6e8);
                    /* try { // try from 007fc160 to 007fc163 has its CatchHandler @ 007fc198 */
      FUN_007fc1d4();
      __cxa_atexit(FUN_007fc260,&DAT_009b29f8,&PTR_LOOP_008d5d30);
      __cxa_guard_release(&DAT_009b30e0);
    }
  }
  pPVar1 = (Props *)&DAT_009b29f8;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    local_58 = 0;
    local_78[0] = 5;
    local_68 = 0;
    uStack_60 = 0;
    local_50 = 0x3f800000;
    *in_x8 = 5;
    local_70 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_78);
  }
  else {
    ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    PVar2 = param_1[0x6e0];
    if (PVar2 != pPVar1[0x6e0]) {
                    /* try { // try from 007fc08c to 007fc09f has its CatchHandler @ 007fc1ac */
      piVar5 = (int *)folly::dynamic::operator[]();
      if (*piVar5 != 2) {
        folly::dynamic::folly::dynamic::destroy(piVar5);
        *piVar5 = 2;
      }
      *(Props *)(piVar5 + 2) = PVar2;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fc1d4  FUN_007fc1d4 =====

void FUN_007fc1d4(void)

{
  FUN_00788b10(&DAT_009b29f8,PTR_PTR_0099e170 + 0x10);
  DAT_009b2fd4 = 0;
  DAT_009b2fd8 = 0;
  DAT_009b3038 = 0;
  DAT_009b3040 = 0;
  DAT_009b30a0 = 0;
  DAT_009b30b0 = 0;
  DAT_009b30b4 = 0;
  DAT_009b30b8 = 0;
  DAT_009b30bc = 0;
  DAT_009b30c0 = 0;
  DAT_009b30c4 = 0;
  DAT_009b30c8 = 0;
  DAT_009b30cc = 0;
  DAT_009b30d0 = 0;
  DAT_009b30d4 = 0;
  DAT_009b30a8 = 0;
  DAT_009b30ac = 0;
  DAT_009b30d8 = 0;
  DAT_009b29f8 = PTR_vtable_0099e168 + 0x20;
  return;
}


// ===== 007fc260  FUN_007fc260 =====

void FUN_007fc260(undefined8 param_1)

{
  FUN_0078917c(param_1,PTR_PTR_0099e170 + 8);
  return;
}


// ===== 007fc270  facebook::react::SelectActionComponentViewProps::SelectActionComponentViewProps =====

/* facebook::react::SelectActionComponentViewProps::SelectActionComponentViewProps(facebook::react::PropsParserContext
   const&, facebook::react::SelectActionComponentViewProps const&, facebook::react::RawProps const&)
    */

void __thiscall
facebook::react::SelectActionComponentViewProps::SelectActionComponentViewProps
          (SelectActionComponentViewProps *this,PropsParserContext *param_1,
          SelectActionComponentViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  ulong *puVar2;
  function *in_x4;
  long lVar3;
  ulong local_90 [2];
  void *local_80;
  long *local_70;
  long local_58;
  
  puVar2 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007fc2b0 to 007fc2bf has its CatchHandler @ 007fc384 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if ((ulong *)local_70 == local_90) {
    lVar3 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007fc2ec;
    lVar3 = 5;
    puVar2 = (ulong *)local_70;
  }
  (**(code **)(*puVar2 + lVar3 * 8))();
LAB_007fc2ec:
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 007fc2fc to 007fc323 has its CatchHandler @ 007fc360 */
  FUN_007ea274(this + 0x6e0,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fc3d4  facebook::react::SelectActionComponentViewProps::SelectActionComponentViewProps =====

/* facebook::react::SelectActionComponentViewProps::SelectActionComponentViewProps(facebook::react::PropsParserContext
   const&, facebook::react::SelectActionComponentViewProps const&, facebook::react::RawProps const&)
    */

void __thiscall
facebook::react::SelectActionComponentViewProps::SelectActionComponentViewProps
          (SelectActionComponentViewProps *this,PropsParserContext *param_1,
          SelectActionComponentViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  ulong local_90 [2];
  void *local_80;
  long *local_70;
  long local_58;
  
  puVar2 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007fc410 to 007fc433 has its CatchHandler @ 007fc500 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099e090 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if ((ulong *)local_70 == local_90) {
    lVar3 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007fc460;
    lVar3 = 5;
    puVar2 = (ulong *)local_70;
  }
  (**(code **)(*puVar2 + lVar3 * 8))();
LAB_007fc460:
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
  *(undefined **)this = PTR_vtable_0099e088 + 0x20;
                    /* try { // try from 007fc478 to 007fc49f has its CatchHandler @ 007fc4dc */
  FUN_007ea274(this + 0x6e0,param_1,param_3,"model",param_2 + 0x6e0,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fc550  facebook::react::SelectActionComponentViewProps::getDiffPropsImplementationTarget =====

/* facebook::react::SelectActionComponentViewProps::getDiffPropsImplementationTarget() const */

char * facebook::react::SelectActionComponentViewProps::getDiffPropsImplementationTarget(void)

{
  return "SelectActionComponentView";
}


// ===== 007fc55c  facebook::react::SelectActionComponentViewProps::getDiffProps =====

/* facebook::react::SelectActionComponentViewProps::getDiffProps(facebook::react::Props const*)
   const */

void facebook::react::SelectActionComponentViewProps::getDiffProps(Props *param_1)

{
  ulong uVar1;
  ulong uVar2;
  Props PVar3;
  Props PVar4;
  long lVar5;
  int iVar6;
  dynamic *this;
  Props *in_x1;
  Props *__s2;
  undefined4 *in_x8;
  ulong uVar7;
  Props *pPVar8;
  char *__s1;
  size_t __n;
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  undefined4 local_78 [2];
  ulong local_70;
  undefined8 uStack_68;
  void *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if (((DAT_009b37e0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_009b37e0), iVar6 != 0)) {
    memset(&DAT_009b30e8,0,0x6f8);
                    /* try { // try from 007fc758 to 007fc75b has its CatchHandler @ 007fc78c */
    FUN_007fc7e8();
    __cxa_atexit(FUN_007fc87c,&DAT_009b30e8,&PTR_LOOP_008d5d30);
    __cxa_guard_release(&DAT_009b37e0);
  }
  pPVar8 = (Props *)&DAT_009b30e8;
  if (in_x1 != (Props *)0x0) {
    pPVar8 = in_x1;
  }
  if (pPVar8 == param_1) {
    local_58 = 0;
    local_78[0] = 5;
    uStack_68 = 0;
    local_60 = (void *)0x0;
    local_50 = 0x3f800000;
    *in_x8 = 5;
    local_70 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_78);
    goto LAB_007fc704;
  }
  ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
  PVar3 = param_1[0x6e0];
  PVar4 = pPVar8[0x6e0];
  __n = *(size_t *)(param_1 + 0x6e8);
  uVar7 = (ulong)((byte)PVar3 >> 1);
  uVar1 = uVar7;
  if (((byte)PVar3 & 1) != 0) {
    uVar1 = __n;
  }
  uVar2 = (ulong)((byte)PVar4 >> 1);
  if (((byte)PVar4 & 1) != 0) {
    uVar2 = *(ulong *)(pPVar8 + 0x6e8);
  }
  if (uVar1 == uVar2) {
    __s2 = pPVar8 + 0x6e1;
    if (((byte)PVar4 & 1) != 0) {
      __s2 = *(Props **)(pPVar8 + 0x6f0);
    }
    if (((byte)PVar3 & 1) == 0) {
      if (1 < (byte)PVar3) {
        pPVar8 = param_1 + 0x6e1;
        do {
          if (*pPVar8 != *__s2) goto LAB_007fc668;
          uVar7 = uVar7 - 1;
          pPVar8 = pPVar8 + 1;
          __s2 = __s2 + 1;
        } while (uVar7 != 0);
      }
      goto LAB_007fc704;
    }
    __s1 = *(char **)(param_1 + 0x6f0);
    iVar6 = memcmp(__s1,__s2,__n);
    if (iVar6 == 0) goto LAB_007fc704;
LAB_007fc6a0:
                    /* try { // try from 007fc6a0 to 007fc6af has its CatchHandler @ 007fc7a0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_90,__s1,__n);
  }
  else {
LAB_007fc668:
    if (((byte)PVar3 & 1) != 0) {
      __s1 = *(char **)(param_1 + 0x6f0);
      goto LAB_007fc6a0;
    }
    uStack_88 = *(undefined8 *)(param_1 + 0x6e8);
    local_90 = *(ulong *)(param_1 + 0x6e0);
    local_80 = *(void **)(param_1 + 0x6f0);
  }
  local_78[0] = 6;
  uStack_68 = uStack_88;
  local_70 = local_90;
  local_60 = local_80;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 007fc6d0 to 007fc6e3 has its CatchHandler @ 007fc7a8 */
  this = (dynamic *)folly::dynamic::operator[]();
  folly::dynamic::operator=(this,(dynamic *)local_78);
  folly::dynamic::folly::dynamic::destroy(local_78);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
LAB_007fc704:
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 007fc7e8  FUN_007fc7e8 =====

void FUN_007fc7e8(void)

{
  FUN_00788b10(&DAT_009b30e8,PTR_PTR_0099e090 + 0x10);
  DAT_009b36c4 = 0;
  DAT_009b36c8 = 0;
  DAT_009b3728 = 0;
  DAT_009b3730 = 0;
  DAT_009b3790 = 0;
  DAT_009b37a0 = 0;
  DAT_009b37a4 = 0;
  DAT_009b37a8 = 0;
  DAT_009b37ac = 0;
  DAT_009b37b0 = 0;
  DAT_009b37b4 = 0;
  DAT_009b37b8 = 0;
  DAT_009b37bc = 0;
  DAT_009b37c0 = 0;
  DAT_009b37c4 = 0;
  DAT_009b3798 = 0;
  DAT_009b379c = 0;
  DAT_009b37c8 = 0;
  DAT_009b30e8 = PTR_vtable_0099e088 + 0x20;
  DAT_009b37d8 = 0;
  DAT_009b37d0 = 0;
  return;
}


// ===== 007fc87c  FUN_007fc87c =====

void FUN_007fc87c(long param_1)

{
  if ((*(byte *)(param_1 + 0x6e0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x6f0));
  }
  FUN_0078917c(param_1,PTR_PTR_0099e090 + 8);
  return;
}


// ===== 007fc8bc  facebook::react::StickerPickerRowViewProps::StickerPickerRowViewProps =====

/* facebook::react::StickerPickerRowViewProps::StickerPickerRowViewProps(facebook::react::PropsParserContext
   const&, facebook::react::StickerPickerRowViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::StickerPickerRowViewProps::StickerPickerRowViewProps
          (StickerPickerRowViewProps *this,PropsParserContext *param_1,
          StickerPickerRowViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  long *plVar2;
  function *in_x4;
  long lVar3;
  undefined8 *local_98;
  long local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007fc8fc to 007fc90b has its CatchHandler @ 007fc9d8 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if (local_70 == &local_90) {
    lVar3 = 4;
    plVar2 = &local_90;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007fc938;
    lVar3 = 5;
    plVar2 = local_70;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007fc938:
  local_88 = 0;
  local_90 = 0;
  *(undefined8 *)this = *(undefined8 *)param_1;
  local_78 = 0;
  local_70 = (long *)0x0;
  local_80 = 0;
                    /* try { // try from 007fc958 to 007fc97f has its CatchHandler @ 007fc9b8 */
  FUN_007fca28(this + 0x6e0,param_2);
  local_98 = &local_80;
  FUN_007b07cc(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fca28  FUN_007fca28 =====

void FUN_007fca28(undefined8 *param_1,undefined8 param_2,char *param_3,char *param_4,
                 undefined8 *param_5,undefined8 *param_6,char *param_7)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_3,param_4,param_7);
  if (lVar2 == 0) {
    uVar5 = *param_5;
    uVar6 = *(undefined4 *)(param_5 + 1);
  }
  else {
    uVar3 = FUN_00807970();
    if ((uVar3 & 1) != 0) {
      *(undefined4 *)(param_1 + 1) = 0;
      *param_1 = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
                    /* try { // try from 007fcb08 to 007fcb13 has its CatchHandler @ 007fcb58 */
      FUN_0082e370(lVar2,param_1);
      if (*(long *)(lVar1 + 0x28) == lVar4) {
        return;
      }
      goto LAB_007fccbc;
    }
    uVar5 = *param_6;
    uVar6 = *(undefined4 *)(param_6 + 1);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *param_1 = uVar5;
  *(undefined4 *)(param_1 + 1) = uVar6;
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    FUN_0082f03c();
    return;
  }
LAB_007fccbc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fccc4  facebook::react::StickerPickerRowViewProps::StickerPickerRowViewProps =====

/* facebook::react::StickerPickerRowViewProps::StickerPickerRowViewProps(facebook::react::PropsParserContext
   const&, facebook::react::StickerPickerRowViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::StickerPickerRowViewProps::StickerPickerRowViewProps
          (StickerPickerRowViewProps *this,PropsParserContext *param_1,
          StickerPickerRowViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *local_98;
  long local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007fcd00 to 007fcd23 has its CatchHandler @ 007fcdf8 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099e0a8 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if (local_70 == &local_90) {
    lVar3 = 4;
    plVar2 = &local_90;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007fcd50;
    lVar3 = 5;
    plVar2 = local_70;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007fcd50:
  local_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = (long *)0x0;
  *(undefined **)this = PTR_vtable_0099e0a0 + 0x20;
  local_80 = 0;
                    /* try { // try from 007fcd78 to 007fcd9f has its CatchHandler @ 007fcdd8 */
  FUN_007fca28(this + 0x6e0,param_1,param_3,"rowData",param_2 + 0x6e0,&local_90,0,0);
  local_98 = &local_80;
  FUN_007b07cc(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fce48  facebook::react::StickerPickerRowViewProps::getDiffPropsImplementationTarget =====

/* facebook::react::StickerPickerRowViewProps::getDiffPropsImplementationTarget() const */

char * facebook::react::StickerPickerRowViewProps::getDiffPropsImplementationTarget(void)

{
  return "StickerPickerRowView";
}


// ===== 007fce54  facebook::react::StickerPickerRowViewProps::getDiffProps =====

/* facebook::react::StickerPickerRowViewProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::StickerPickerRowViewProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  int *piVar8;
  dynamic *pdVar9;
  undefined4 *puVar10;
  Props *in_x1;
  undefined4 *in_x8;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong *puVar17;
  float fVar18;
  ulong local_1a0;
  ulong uStack_198;
  void *local_190;
  ulong local_180;
  ulong uStack_178;
  void *local_170;
  ulong local_160;
  ulong uStack_158;
  void *local_150;
  undefined4 local_140 [2];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  int local_110 [2];
  undefined8 local_108;
  dynamic *local_100;
  dynamic *pdStack_f8;
  undefined4 local_e0 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 local_b0 [2];
  ulong local_a8;
  ulong uStack_a0;
  void *local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  
  lVar6 = tpidr_el0;
  local_80 = *(long *)(lVar6 + 0x28);
  if (((DAT_009b3ef0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_009b3ef0), iVar7 != 0)) {
    memset(&DAT_009b37e8,0,0x708);
                    /* try { // try from 007fd680 to 007fd683 has its CatchHandler @ 007fd6b4 */
    FUN_007fd794();
    __cxa_atexit(FUN_007fd830,&DAT_009b37e8,&PTR_LOOP_008d5d30);
    __cxa_guard_release(&DAT_009b3ef0);
  }
  pPVar1 = (Props *)&DAT_009b37e8;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    local_90 = 0;
    local_b0[0] = 5;
    puVar10 = local_b0;
    uStack_a0 = 0;
    local_98 = (void *)0x0;
    local_88 = 0x3f800000;
    *in_x8 = 5;
    local_a8 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
  }
  else {
    ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    if (((*(float *)(param_1 + 0x6e0) == *(float *)(pPVar1 + 0x6e0)) &&
        (*(int *)(param_1 + 0x6e4) == *(int *)(pPVar1 + 0x6e4))) &&
       (*(int *)(param_1 + 0x6e8) == *(int *)(pPVar1 + 0x6e8))) {
      pbVar13 = *(byte **)(param_1 + 0x6f8);
      pbVar15 = *(byte **)(param_1 + 0x6f0);
      pbVar16 = *(byte **)(pPVar1 + 0x6f0);
      if ((long)pbVar13 - (long)pbVar15 == *(long *)(pPVar1 + 0x6f8) - (long)pbVar16) {
        for (; pbVar15 != pbVar13; pbVar15 = pbVar15 + 0x60) {
          if ((pbVar15[0x18] == 0) || (pbVar16[0x18] == 0)) {
            if ((pbVar15[0x18] != 0) != (pbVar16[0x18] != 0)) goto LAB_007fd124;
          }
          else {
            bVar4 = *pbVar15;
            bVar5 = *pbVar16;
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = *(size_t *)(pbVar15 + 8);
            }
            sVar3 = (ulong)(bVar5 >> 1);
            if ((bVar5 & 1) != 0) {
              sVar3 = *(size_t *)(pbVar16 + 8);
            }
            if (sVar2 != sVar3) goto LAB_007fd124;
            pbVar12 = *(byte **)(pbVar16 + 0x10);
            if ((bVar5 & 1) == 0) {
              pbVar12 = pbVar16 + 1;
            }
            if ((bVar4 & 1) == 0) {
              if (1 < bVar4) {
                uVar11 = 0;
                do {
                  if (pbVar15[uVar11 + 1] != pbVar12[uVar11]) goto LAB_007fd124;
                  uVar11 = uVar11 + 1;
                } while (bVar4 >> 1 != uVar11);
              }
            }
            else {
              iVar7 = memcmp(*(void **)(pbVar15 + 0x10),pbVar12,*(size_t *)(pbVar15 + 8));
              if (iVar7 != 0) goto LAB_007fd124;
            }
          }
          bVar4 = pbVar15[0x20];
          bVar5 = pbVar16[0x20];
          sVar2 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            sVar2 = *(size_t *)(pbVar15 + 0x28);
          }
          sVar3 = (ulong)(bVar5 >> 1);
          if ((bVar5 & 1) != 0) {
            sVar3 = *(size_t *)(pbVar16 + 0x28);
          }
          if (sVar2 != sVar3) goto LAB_007fd124;
          pbVar12 = pbVar16 + 0x21;
          if ((bVar5 & 1) != 0) {
            pbVar12 = *(byte **)(pbVar16 + 0x30);
          }
          if ((bVar4 & 1) == 0) {
            if (1 < bVar4) {
              uVar11 = 0;
              do {
                if (pbVar15[uVar11 + 0x21] != pbVar12[uVar11]) goto LAB_007fd124;
                uVar11 = uVar11 + 1;
              } while (bVar4 >> 1 != uVar11);
            }
          }
          else {
            iVar7 = memcmp(*(void **)(pbVar15 + 0x30),pbVar12,*(size_t *)(pbVar15 + 0x28));
            if (iVar7 != 0) goto LAB_007fd124;
          }
          if (*(int *)(pbVar15 + 0x38) != *(int *)(pbVar16 + 0x38)) goto LAB_007fd124;
          bVar4 = pbVar15[0x40];
          bVar5 = pbVar16[0x40];
          sVar2 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            sVar2 = *(size_t *)(pbVar15 + 0x48);
          }
          sVar3 = (ulong)(bVar5 >> 1);
          if ((bVar5 & 1) != 0) {
            sVar3 = *(size_t *)(pbVar16 + 0x48);
          }
          if (sVar2 != sVar3) goto LAB_007fd124;
          pbVar12 = pbVar16 + 0x41;
          if ((bVar5 & 1) != 0) {
            pbVar12 = *(byte **)(pbVar16 + 0x50);
          }
          if ((bVar4 & 1) == 0) {
            if (1 < bVar4) {
              uVar11 = 0;
              do {
                if (pbVar15[uVar11 + 0x41] != pbVar12[uVar11]) goto LAB_007fd124;
                uVar11 = uVar11 + 1;
              } while (bVar4 >> 1 != uVar11);
            }
          }
          else {
            iVar7 = memcmp(*(void **)(pbVar15 + 0x50),pbVar12,*(size_t *)(pbVar15 + 0x48));
            if (iVar7 != 0) goto LAB_007fd124;
          }
          if (((pbVar15[0x58] != pbVar16[0x58]) || (pbVar15[0x59] != pbVar16[0x59])) ||
             ((pbVar15[0x5a] != pbVar16[0x5a] || (pbVar15[0x5b] != pbVar16[0x5b]))))
          goto LAB_007fd124;
          pbVar16 = pbVar16 + 0x60;
        }
        goto LAB_007fd5fc;
      }
    }
LAB_007fd124:
    local_90 = 0;
    local_b0[0] = 5;
    uStack_a0 = 0;
    local_98 = (void *)0x0;
    local_88 = 0x3f800000;
    local_140[0] = 5;
    local_a8 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_b0);
    fVar18 = *(float *)(param_1 + 0x6e0);
                    /* try { // try from 007fd15c to 007fd1eb has its CatchHandler @ 007fd6d4 */
    piVar8 = (int *)folly::dynamic::operator[](local_140,"rowCont","");
    if (*piVar8 != 3) {
      folly::dynamic::folly::dynamic::destroy(piVar8);
      *piVar8 = 3;
    }
    *(double *)(piVar8 + 2) = (double)fVar18;
    iVar7 = *(int *)(param_1 + 0x6e4);
    piVar8 = (int *)folly::dynamic::operator[](local_140,"rowConten","");
    if (*piVar8 != 4) {
      folly::dynamic::folly::dynamic::destroy(piVar8);
      *piVar8 = 4;
    }
    *(long *)(piVar8 + 2) = (long)iVar7;
    iVar7 = *(int *)(param_1 + 0x6e8);
    piVar8 = (int *)folly::dynamic::operator[](local_140,"itemSize","");
    if (*piVar8 != 4) {
      folly::dynamic::folly::dynamic::destroy(piVar8);
      *piVar8 = 4;
    }
    *(long *)(piVar8 + 2) = (long)iVar7;
    puVar14 = *(ulong **)(param_1 + 0x6f0);
    puVar17 = *(ulong **)(param_1 + 0x6f8);
    local_110[0] = 1;
    local_100 = (dynamic *)0x0;
    pdStack_f8 = (dynamic *)0x0;
    local_108 = 0;
    for (; puVar14 != puVar17; puVar14 = puVar14 + 0xc) {
      local_b0[0] = 5;
      local_90 = 0;
      local_98 = (void *)0x0;
      local_88 = 0x3f800000;
      local_a8 = 0;
      uStack_a0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_e0[0] = 5;
      local_b8 = 0x3f800000;
      folly::dynamic::folly::dynamic::destroy(local_b0);
      if ((byte)puVar14[3] != 0) {
        if ((*puVar14 & 1) == 0) {
          local_150 = (void *)puVar14[2];
          uStack_158 = puVar14[1];
          local_160 = *puVar14;
        }
        else {
                    /* try { // try from 007fd2e0 to 007fd2e7 has its CatchHandler @ 007fd6dc */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_160,(char *)puVar14[2],puVar14[1]);
        }
        uStack_a0 = uStack_158;
        local_a8 = local_160;
        local_b0[0] = 6;
        local_160 = 0;
        uStack_158 = 0;
        local_98 = local_150;
        local_150 = (void *)0x0;
                    /* try { // try from 007fd304 to 007fd317 has its CatchHandler @ 007fd6ec */
        pdVar9 = (dynamic *)folly::dynamic::operator[](local_e0,"stickerId","");
        folly::dynamic::operator=(pdVar9,(dynamic *)local_b0);
        folly::dynamic::folly::dynamic::destroy(local_b0);
        if ((local_160 & 1) != 0) {
          operator_delete(local_150);
        }
      }
      if ((puVar14[4] & 1) == 0) {
        local_170 = (void *)puVar14[6];
        uStack_178 = puVar14[5];
        local_180 = puVar14[4];
      }
      else {
                    /* try { // try from 007fd35c to 007fd363 has its CatchHandler @ 007fd6e4 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_180,(char *)puVar14[6],puVar14[5]);
      }
      uStack_a0 = uStack_178;
      local_a8 = local_180;
      local_b0[0] = 6;
      local_180 = 0;
      uStack_178 = 0;
      local_98 = local_170;
      local_170 = (void *)0x0;
                    /* try { // try from 007fd380 to 007fd393 has its CatchHandler @ 007fd710 */
      pdVar9 = (dynamic *)folly::dynamic::operator[](local_e0,"stickerName","");
      folly::dynamic::operator=(pdVar9,(dynamic *)local_b0);
      folly::dynamic::folly::dynamic::destroy(local_b0);
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
      }
      uVar11 = puVar14[7];
                    /* try { // try from 007fd3b8 to 007fd3cb has its CatchHandler @ 007fd750 */
      piVar8 = (int *)folly::dynamic::operator[](local_e0,"stickerType","");
      if (*piVar8 != 4) {
        folly::dynamic::folly::dynamic::destroy(piVar8);
        *piVar8 = 4;
      }
      *(long *)(piVar8 + 2) = (long)(int)uVar11;
      if ((puVar14[8] & 1) == 0) {
        local_190 = (void *)puVar14[10];
        uStack_198 = puVar14[9];
        local_1a0 = puVar14[8];
      }
      else {
                    /* try { // try from 007fd414 to 007fd41b has its CatchHandler @ 007fd6e0 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_1a0,(char *)puVar14[10],puVar14[9]);
      }
      uStack_a0 = uStack_198;
      local_a8 = local_1a0;
      local_b0[0] = 6;
      local_1a0 = 0;
      uStack_198 = 0;
      local_98 = local_190;
      local_190 = (void *)0x0;
                    /* try { // try from 007fd438 to 007fd44b has its CatchHandler @ 007fd730 */
      pdVar9 = (dynamic *)folly::dynamic::operator[](local_e0,"stickerUrl","");
      folly::dynamic::operator=(pdVar9,(dynamic *)local_b0);
      folly::dynamic::folly::dynamic::destroy(local_b0);
      if ((local_1a0 & 1) != 0) {
        operator_delete(local_190);
      }
      uVar11 = puVar14[0xb];
                    /* try { // try from 007fd470 to 007fd52b has its CatchHandler @ 007fd750 */
      piVar8 = (int *)folly::dynamic::operator[](local_e0,"sticker","");
      if (*piVar8 != 2) {
        folly::dynamic::folly::dynamic::destroy(piVar8);
        *piVar8 = 2;
      }
      *(byte *)(piVar8 + 2) = (byte)uVar11;
      bVar4 = *(byte *)((long)puVar14 + 0x59);
      piVar8 = (int *)folly::dynamic::operator[](local_e0,"sticker","");
      if (*piVar8 != 2) {
        folly::dynamic::folly::dynamic::destroy(piVar8);
        *piVar8 = 2;
      }
      *(byte *)(piVar8 + 2) = bVar4;
      bVar4 = *(byte *)((long)puVar14 + 0x5a);
      piVar8 = (int *)folly::dynamic::operator[](local_e0,"stick","");
      if (*piVar8 != 2) {
        folly::dynamic::folly::dynamic::destroy(piVar8);
        *piVar8 = 2;
      }
      *(byte *)(piVar8 + 2) = bVar4;
      bVar4 = *(byte *)((long)puVar14 + 0x5b);
      piVar8 = (int *)folly::dynamic::operator[](local_e0,"stick","");
      if (*piVar8 != 2) {
        folly::dynamic::folly::dynamic::destroy(piVar8);
        *piVar8 = 2;
      }
      pdVar9 = local_100;
      *(byte *)(piVar8 + 2) = bVar4;
      if (local_110[0] != 1) {
        if (*(long *)(lVar6 + 0x28) == local_80) {
                    /* try { // try from 007fd644 to 007fd653 has its CatchHandler @ 007fd70c */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099e338);
        }
        goto LAB_007fd790;
      }
      if (local_100 < pdStack_f8) {
        folly::dynamic::dynamic(local_100,(dynamic *)local_e0);
        local_100 = pdVar9 + 0x30;
      }
      else {
                    /* try { // try from 007fd568 to 007fd577 has its CatchHandler @ 007fd6e8 */
        local_100 = (dynamic *)FUN_00801fe4(&local_108,local_e0);
      }
      folly::dynamic::folly::dynamic::destroy(local_e0);
    }
                    /* try { // try from 007fd57c to 007fd58f has its CatchHandler @ 007fd6cc */
    pdVar9 = (dynamic *)folly::dynamic::operator[](local_140,&DAT_00369875,&DAT_0036987a);
    folly::dynamic::operator=(pdVar9,(dynamic *)local_110);
    folly::dynamic::folly::dynamic::destroy(local_110);
                    /* try { // try from 007fd5a0 to 007fd5b7 has its CatchHandler @ 007fd6c8 */
    pdVar9 = (dynamic *)folly::dynamic::operator[](in_x8,"rowData","");
    folly::dynamic::operator=(pdVar9,(dynamic *)local_140);
    puVar10 = local_140;
  }
  folly::dynamic::folly::dynamic::destroy(puVar10);
LAB_007fd5fc:
  if (*(long *)(lVar6 + 0x28) == local_80) {
    return;
  }
LAB_007fd790:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fd794  FUN_007fd794 =====

void FUN_007fd794(void)

{
  FUN_00788b10(&DAT_009b37e8,PTR_PTR_0099e0a8 + 0x10);
  DAT_009b3dc4 = 0;
  DAT_009b3dc8 = 0;
  DAT_009b3e28 = 0;
  DAT_009b3e30 = 0;
  DAT_009b3e90 = 0;
  DAT_009b3ea0 = 0;
  DAT_009b3ea4 = 0;
  DAT_009b3ea8 = 0;
  DAT_009b3eac = 0;
  DAT_009b3eb0 = 0;
  DAT_009b3eb4 = 0;
  DAT_009b3eb8 = 0;
  DAT_009b3ebc = 0;
  DAT_009b3ec0 = 0;
  DAT_009b3ec4 = 0;
  DAT_009b3e98 = 0;
  DAT_009b3e9c = 0;
  DAT_009b3ec8 = 0;
  DAT_009b37e8 = PTR_vtable_0099e0a0 + 0x20;
  DAT_009b3ed0 = 0;
  DAT_009b3ee0 = 0;
  DAT_009b3ed8 = 0;
  DAT_009b3ee8 = 0;
  return;
}


// ===== 007fd830  FUN_007fd830 =====

void FUN_007fd830(long param_1)

{
  long lVar1;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_30 = param_1 + 0x6f0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_007b07cc(&local_30);
  FUN_0078917c(param_1,PTR_PTR_0099e0a8 + 8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fd898  facebook::react::DCDSystemMessageViewProps::DCDSystemMessageViewProps =====

/* facebook::react::DCDSystemMessageViewProps::DCDSystemMessageViewProps(facebook::react::PropsParserContext
   const&, facebook::react::DCDSystemMessageViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::DCDSystemMessageViewProps::DCDSystemMessageViewProps
          (DCDSystemMessageViewProps *this,PropsParserContext *param_1,
          DCDSystemMessageViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  ulong *puVar2;
  function *in_x4;
  long lVar3;
  ulong local_90 [2];
  void *local_80;
  long *local_70;
  long local_58;
  
  puVar2 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007fd8d8 to 007fd8e7 has its CatchHandler @ 007fd9ac */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if ((ulong *)local_70 == local_90) {
    lVar3 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007fd914;
    lVar3 = 5;
    puVar2 = (ulong *)local_70;
  }
  (**(code **)(*puVar2 + lVar3 * 8))();
LAB_007fd914:
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 007fd924 to 007fd94b has its CatchHandler @ 007fd988 */
  FUN_007ea274(this + 0x6e0,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fd9fc  facebook::react::DCDSystemMessageViewProps::DCDSystemMessageViewProps =====

/* facebook::react::DCDSystemMessageViewProps::DCDSystemMessageViewProps(facebook::react::PropsParserContext
   const&, facebook::react::DCDSystemMessageViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::DCDSystemMessageViewProps::DCDSystemMessageViewProps
          (DCDSystemMessageViewProps *this,PropsParserContext *param_1,
          DCDSystemMessageViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  ulong local_90 [2];
  void *local_80;
  long *local_70;
  long local_58;
  
  puVar2 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007fda38 to 007fda5b has its CatchHandler @ 007fdb28 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099e180 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if ((ulong *)local_70 == local_90) {
    lVar3 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007fda88;
    lVar3 = 5;
    puVar2 = (ulong *)local_70;
  }
  (**(code **)(*puVar2 + lVar3 * 8))();
LAB_007fda88:
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
  *(undefined **)this = PTR_vtable_0099e178 + 0x20;
                    /* try { // try from 007fdaa0 to 007fdac7 has its CatchHandler @ 007fdb04 */
  FUN_007ea274(this + 0x6e0,param_1,param_3,&DAT_00369815,param_2 + 0x6e0,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fdb78  facebook::react::DCDSystemMessageViewProps::getDiffPropsImplementationTarget =====

/* facebook::react::DCDSystemMessageViewProps::getDiffPropsImplementationTarget() const */

char * facebook::react::DCDSystemMessageViewProps::getDiffPropsImplementationTarget(void)

{
  return "DCDSystemMessageView";
}


// ===== 007fdb84  facebook::react::DCDSystemMessageViewProps::getDiffProps =====

/* facebook::react::DCDSystemMessageViewProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::DCDSystemMessageViewProps::getDiffProps(Props *param_1)

{
  ulong uVar1;
  ulong uVar2;
  Props PVar3;
  Props PVar4;
  long lVar5;
  int iVar6;
  dynamic *this;
  Props *in_x1;
  Props *__s2;
  undefined4 *in_x8;
  ulong uVar7;
  Props *pPVar8;
  char *__s1;
  size_t __n;
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  undefined4 local_78 [2];
  ulong local_70;
  undefined8 uStack_68;
  void *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if (((DAT_009b45f0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_009b45f0), iVar6 != 0)) {
    memset(&DAT_009b3ef8,0,0x6f8);
                    /* try { // try from 007fdd80 to 007fdd83 has its CatchHandler @ 007fddb4 */
    FUN_007fde10();
    __cxa_atexit(FUN_007fdea4,&DAT_009b3ef8,&PTR_LOOP_008d5d30);
    __cxa_guard_release(&DAT_009b45f0);
  }
  pPVar8 = (Props *)&DAT_009b3ef8;
  if (in_x1 != (Props *)0x0) {
    pPVar8 = in_x1;
  }
  if (pPVar8 == param_1) {
    local_58 = 0;
    local_78[0] = 5;
    uStack_68 = 0;
    local_60 = (void *)0x0;
    local_50 = 0x3f800000;
    *in_x8 = 5;
    local_70 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_78);
    goto LAB_007fdd2c;
  }
  ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
  PVar3 = param_1[0x6e0];
  PVar4 = pPVar8[0x6e0];
  __n = *(size_t *)(param_1 + 0x6e8);
  uVar7 = (ulong)((byte)PVar3 >> 1);
  uVar1 = uVar7;
  if (((byte)PVar3 & 1) != 0) {
    uVar1 = __n;
  }
  uVar2 = (ulong)((byte)PVar4 >> 1);
  if (((byte)PVar4 & 1) != 0) {
    uVar2 = *(ulong *)(pPVar8 + 0x6e8);
  }
  if (uVar1 == uVar2) {
    __s2 = pPVar8 + 0x6e1;
    if (((byte)PVar4 & 1) != 0) {
      __s2 = *(Props **)(pPVar8 + 0x6f0);
    }
    if (((byte)PVar3 & 1) == 0) {
      if (1 < (byte)PVar3) {
        pPVar8 = param_1 + 0x6e1;
        do {
          if (*pPVar8 != *__s2) goto LAB_007fdc90;
          uVar7 = uVar7 - 1;
          pPVar8 = pPVar8 + 1;
          __s2 = __s2 + 1;
        } while (uVar7 != 0);
      }
      goto LAB_007fdd2c;
    }
    __s1 = *(char **)(param_1 + 0x6f0);
    iVar6 = memcmp(__s1,__s2,__n);
    if (iVar6 == 0) goto LAB_007fdd2c;
LAB_007fdcc8:
                    /* try { // try from 007fdcc8 to 007fdcd7 has its CatchHandler @ 007fddc8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_90,__s1,__n);
  }
  else {
LAB_007fdc90:
    if (((byte)PVar3 & 1) != 0) {
      __s1 = *(char **)(param_1 + 0x6f0);
      goto LAB_007fdcc8;
    }
    uStack_88 = *(undefined8 *)(param_1 + 0x6e8);
    local_90 = *(ulong *)(param_1 + 0x6e0);
    local_80 = *(void **)(param_1 + 0x6f0);
  }
  local_78[0] = 6;
  uStack_68 = uStack_88;
  local_70 = local_90;
  local_60 = local_80;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 007fdcf8 to 007fdd0b has its CatchHandler @ 007fddd0 */
  this = (dynamic *)folly::dynamic::operator[]();
  folly::dynamic::operator=(this,(dynamic *)local_78);
  folly::dynamic::folly::dynamic::destroy(local_78);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
LAB_007fdd2c:
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 007fde10  FUN_007fde10 =====

void FUN_007fde10(void)

{
  FUN_00788b10(&DAT_009b3ef8,PTR_PTR_0099e180 + 0x10);
  DAT_009b44d4 = 0;
  DAT_009b44d8 = 0;
  DAT_009b4538 = 0;
  DAT_009b4540 = 0;
  DAT_009b45a0 = 0;
  DAT_009b45b0 = 0;
  DAT_009b45b4 = 0;
  DAT_009b45b8 = 0;
  DAT_009b45bc = 0;
  DAT_009b45c0 = 0;
  DAT_009b45c4 = 0;
  DAT_009b45c8 = 0;
  DAT_009b45cc = 0;
  DAT_009b45d0 = 0;
  DAT_009b45d4 = 0;
  DAT_009b45a8 = 0;
  DAT_009b45ac = 0;
  DAT_009b45d8 = 0;
  DAT_009b3ef8 = PTR_vtable_0099e178 + 0x20;
  DAT_009b45e8 = 0;
  DAT_009b45e0 = 0;
  return;
}


// ===== 007fdea4  FUN_007fdea4 =====

void FUN_007fdea4(long param_1)

{
  if ((*(byte *)(param_1 + 0x6e0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x6f0));
  }
  FUN_0078917c(param_1,PTR_PTR_0099e180 + 8);
  return;
}


// ===== 007fdee4  facebook::react::DCDTTIMeasurementViewProps::DCDTTIMeasurementViewProps =====

/* facebook::react::DCDTTIMeasurementViewProps::DCDTTIMeasurementViewProps(facebook::react::PropsParserContext
   const&, facebook::react::DCDTTIMeasurementViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::DCDTTIMeasurementViewProps::DCDTTIMeasurementViewProps
          (DCDTTIMeasurementViewProps *this,PropsParserContext *param_1,
          DCDTTIMeasurementViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  long *plVar2;
  function *in_x4;
  long lVar3;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar2 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (long *)0x0;
                    /* try { // try from 007fdf10 to 007fdf1f has its CatchHandler @ 007fdf78 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if (local_50 == local_70) {
    lVar3 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007fdf4c;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007fdf4c:
  *(undefined8 *)this = *(undefined8 *)param_1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fdfc8  facebook::react::DCDTTIMeasurementViewProps::DCDTTIMeasurementViewProps =====

/* facebook::react::DCDTTIMeasurementViewProps::DCDTTIMeasurementViewProps(facebook::react::PropsParserContext
   const&, facebook::react::DCDTTIMeasurementViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::DCDTTIMeasurementViewProps::DCDTTIMeasurementViewProps
          (DCDTTIMeasurementViewProps *this,PropsParserContext *param_1,
          DCDTTIMeasurementViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar2 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (long *)0x0;
                    /* try { // try from 007fdffc to 007fe013 has its CatchHandler @ 007fe074 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099e0c0 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if (local_50 == local_70) {
    lVar3 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007fe040;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007fe040:
  *(undefined **)this = PTR_vtable_0099e0b8 + 0x20;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fe0c4  facebook::react::DCDTTIMeasurementViewProps::getDiffPropsImplementationTarget =====

/* facebook::react::DCDTTIMeasurementViewProps::getDiffPropsImplementationTarget() const */

char * facebook::react::DCDTTIMeasurementViewProps::getDiffPropsImplementationTarget(void)

{
  return "DCDTTIMeasurementView";
}


// ===== 007fe0d0  facebook::react::DCDTTIMeasurementViewProps::getDiffProps =====

/* facebook::react::DCDTTIMeasurementViewProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::DCDTTIMeasurementViewProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  long lVar2;
  int iVar3;
  Props *in_x1;
  undefined4 *in_x8;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if ((DAT_009b4cd8 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_009b4cd8);
    if (iVar3 != 0) {
      memset(&DAT_009b45f8,0,0x6e0);
                    /* try { // try from 007fe1c4 to 007fe1c7 has its CatchHandler @ 007fe1fc */
      FUN_007fe228();
      __cxa_atexit(FUN_007fe2b0,&DAT_009b45f8,&PTR_LOOP_008d5d30);
      __cxa_guard_release(&DAT_009b4cd8);
    }
  }
  pPVar1 = (Props *)&DAT_009b45f8;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    local_38 = 0;
    local_58[0] = 5;
    local_48 = 0;
    uStack_40 = 0;
    local_30 = 0x3f800000;
    *in_x8 = 5;
    local_50 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_58);
    if (*(long *)(lVar2 + 0x28) == local_28) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_28) {
    ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fe228  FUN_007fe228 =====

void FUN_007fe228(void)

{
  FUN_00788b10(&DAT_009b45f8,PTR_PTR_0099e0c0 + 0x10);
  DAT_009b4bd4 = 0;
  DAT_009b4bd8 = 0;
  DAT_009b4c38 = 0;
  DAT_009b4c40 = 0;
  DAT_009b4ca0 = 0;
  DAT_009b4cb0 = 0;
  DAT_009b4cb4 = 0;
  DAT_009b4cb8 = 0;
  DAT_009b4cbc = 0;
  DAT_009b4cc0 = 0;
  DAT_009b4cc4 = 0;
  DAT_009b4cc8 = 0;
  DAT_009b4ccc = 0;
  DAT_009b4cd0 = 0;
  DAT_009b4cd4 = 0;
  DAT_009b4ca8 = 0;
  DAT_009b4cac = 0;
  DAT_009b45f8 = PTR_vtable_0099e0b8 + 0x20;
  return;
}


// ===== 007fe2b0  FUN_007fe2b0 =====

void FUN_007fe2b0(undefined8 param_1)

{
  FUN_0078917c(param_1,PTR_PTR_0099e0c0 + 8);
  return;
}


// ===== 007fe2c0  facebook::react::TextDisplayComponentViewProps::TextDisplayComponentViewProps =====

/* facebook::react::TextDisplayComponentViewProps::TextDisplayComponentViewProps(facebook::react::PropsParserContext
   const&, facebook::react::TextDisplayComponentViewProps const&, facebook::react::RawProps const&)
    */

void __thiscall
facebook::react::TextDisplayComponentViewProps::TextDisplayComponentViewProps
          (TextDisplayComponentViewProps *this,PropsParserContext *param_1,
          TextDisplayComponentViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  ulong *puVar2;
  function *in_x4;
  long lVar3;
  ulong local_90 [2];
  undefined5 local_80;
  undefined3 uStack_7b;
  undefined5 uStack_78;
  long *local_70;
  long local_58;
  
  puVar2 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007fe300 to 007fe30f has its CatchHandler @ 007fe43c */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if ((ulong *)local_70 == local_90) {
    lVar3 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007fe33c;
    lVar3 = 5;
    puVar2 = (ulong *)local_70;
  }
  (**(code **)(*puVar2 + lVar3 * 8))();
LAB_007fe33c:
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = 0;
  uStack_7b = 0;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 007fe34c to 007fe373 has its CatchHandler @ 007fe418 */
  FUN_007ea274(this + 0x6e0,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete((void *)CONCAT35(uStack_7b,local_80));
  }
  local_90[0] = 0;
  local_90[1] = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_7b = 0;
                    /* try { // try from 007fe390 to 007fe3b7 has its CatchHandler @ 007fe3f4 */
  FUN_007fe48c(this + 0x6f8,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete((void *)CONCAT35(uStack_7b,local_80));
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fe48c  FUN_007fe48c =====

void FUN_007fe48c(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,undefined8 param_2,char *param_3,char *param_4,byte *param_5,
                 undefined8 param_6,char *param_7)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  lVar3 = facebook::react::RawProps::at(param_3,param_4,param_7);
  if (lVar3 == 0) {
    if ((*param_5 & 1) == 0) {
      uVar7 = *(undefined8 *)param_5;
      uVar6 = *(undefined8 *)(param_5 + 0x10);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_5 + 8);
      *(undefined8 *)param_1 = uVar7;
      *(undefined8 *)(param_1 + 0x10) = uVar6;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external(param_1,*(char **)(param_5 + 0x10),*(ulong *)(param_5 + 8));
    }
    if (*(long *)(lVar2 + 0x28) == lVar5) {
      bVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_5 + 0x1c);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_5 + 0x18);
      param_1[0x1c] = bVar1;
      return;
    }
  }
  else {
    uVar4 = FUN_00807970();
    if ((uVar4 & 1) == 0) {
      if (*(long *)(lVar2 + 0x28) == lVar5) {
        FUN_0082f3dc(param_1,param_6);
        return;
      }
    }
    else {
      *(undefined8 *)param_1 = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x15) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
                    /* try { // try from 007fe560 to 007fe56b has its CatchHandler @ 007fe5b4 */
      FUN_0082f434(lVar3,param_1);
      if (*(long *)(lVar2 + 0x28) == lVar5) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fe6f4  facebook::react::TextDisplayComponentViewProps::TextDisplayComponentViewProps =====

/* facebook::react::TextDisplayComponentViewProps::TextDisplayComponentViewProps(facebook::react::PropsParserContext
   const&, facebook::react::TextDisplayComponentViewProps const&, facebook::react::RawProps const&)
    */

void __thiscall
facebook::react::TextDisplayComponentViewProps::TextDisplayComponentViewProps
          (TextDisplayComponentViewProps *this,PropsParserContext *param_1,
          TextDisplayComponentViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  ulong local_90 [2];
  undefined5 local_80;
  undefined3 uStack_7b;
  undefined5 uStack_78;
  long *local_70;
  long local_58;
  
  puVar2 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007fe730 to 007fe753 has its CatchHandler @ 007fe888 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099e0d8 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if ((ulong *)local_70 == local_90) {
    lVar3 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007fe780;
    lVar3 = 5;
    puVar2 = (ulong *)local_70;
  }
  (**(code **)(*puVar2 + lVar3 * 8))();
LAB_007fe780:
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = 0;
  uStack_7b = 0;
  *(undefined **)this = PTR_vtable_0099e0d0 + 0x20;
                    /* try { // try from 007fe798 to 007fe7bf has its CatchHandler @ 007fe864 */
  FUN_007ea274(this + 0x6e0,param_1,param_3,"model",param_2 + 0x6e0,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete((void *)CONCAT35(uStack_7b,local_80));
  }
  local_90[0] = 0;
  local_90[1] = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_7b = 0;
                    /* try { // try from 007fe7dc to 007fe803 has its CatchHandler @ 007fe840 */
  FUN_007fe48c(this + 0x6f8,param_1,param_3,"markdownTextRenderOptions",param_2 + 0x6f8,local_90,0,0
              );
  if ((local_90[0] & 1) != 0) {
    operator_delete((void *)CONCAT35(uStack_7b,local_80));
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007fe8d8  facebook::react::TextDisplayComponentViewProps::getDiffPropsImplementationTarget =====

/* facebook::react::TextDisplayComponentViewProps::getDiffPropsImplementationTarget() const */

char * facebook::react::TextDisplayComponentViewProps::getDiffPropsImplementationTarget(void)

{
  return "TextDisplayComponentView";
}


// ===== 007fe8e4  facebook::react::TextDisplayComponentViewProps::getDiffProps =====

/* facebook::react::TextDisplayComponentViewProps::getDiffProps(facebook::react::Props const*) const
    */

void facebook::react::TextDisplayComponentViewProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  ulong uVar2;
  size_t sVar3;
  Props PVar4;
  Props PVar5;
  long lVar6;
  int iVar7;
  dynamic *pdVar8;
  int *piVar9;
  undefined4 *puVar10;
  Props *in_x1;
  Props *pPVar11;
  undefined4 *in_x8;
  ulong uVar12;
  ulong uVar13;
  Props *pPVar14;
  size_t sVar15;
  char *__s1;
  ulong local_e0;
  undefined8 uStack_d8;
  void *local_d0;
  ulong local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 local_78 [2];
  ulong local_70;
  undefined8 uStack_68;
  void *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  if (((DAT_009b53f8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_009b53f8), iVar7 != 0)) {
    memset(&DAT_009b4ce0,0,0x718);
                    /* try { // try from 007fedb4 to 007fedb7 has its CatchHandler @ 007fede8 */
    FUN_007fee7c();
    __cxa_atexit(FUN_007fef1c,&DAT_009b4ce0,&PTR_LOOP_008d5d30);
    __cxa_guard_release(&DAT_009b53f8);
  }
  pPVar1 = (Props *)&DAT_009b4ce0;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    local_58 = 0;
    local_78[0] = 5;
    puVar10 = local_78;
    uStack_68 = 0;
    local_60 = (void *)0x0;
    local_50 = 0x3f800000;
    *in_x8 = 5;
    local_70 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
  }
  else {
    ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    PVar4 = param_1[0x6e0];
    PVar5 = pPVar1[0x6e0];
    sVar15 = *(size_t *)(param_1 + 0x6e8);
    uVar13 = (ulong)((byte)PVar4 >> 1);
    uVar12 = uVar13;
    if (((byte)PVar4 & 1) != 0) {
      uVar12 = sVar15;
    }
    uVar2 = (ulong)((byte)PVar5 >> 1);
    if (((byte)PVar5 & 1) != 0) {
      uVar2 = *(ulong *)(pPVar1 + 0x6e8);
    }
    if (uVar12 == uVar2) {
      pPVar11 = pPVar1 + 0x6e1;
      if (((byte)PVar5 & 1) != 0) {
        pPVar11 = *(Props **)(pPVar1 + 0x6f0);
      }
      if (((byte)PVar4 & 1) == 0) {
        if (1 < (byte)PVar4) {
          pPVar14 = param_1 + 0x6e1;
          do {
            if (*pPVar14 != *pPVar11) goto LAB_007fe9ec;
            uVar13 = uVar13 - 1;
            pPVar14 = pPVar14 + 1;
            pPVar11 = pPVar11 + 1;
          } while (uVar13 != 0);
        }
      }
      else {
        __s1 = *(char **)(param_1 + 0x6f0);
        iVar7 = memcmp(__s1,pPVar11,sVar15);
        if (iVar7 != 0) goto LAB_007fea24;
      }
    }
    else {
LAB_007fe9ec:
      if (((byte)PVar4 & 1) == 0) {
        uStack_d8 = *(undefined8 *)(param_1 + 0x6e8);
        local_e0 = *(ulong *)(param_1 + 0x6e0);
        local_d0 = *(void **)(param_1 + 0x6f0);
      }
      else {
        __s1 = *(char **)(param_1 + 0x6f0);
LAB_007fea24:
                    /* try { // try from 007fea24 to 007fea33 has its CatchHandler @ 007fedfc */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_e0,__s1,sVar15);
      }
      local_78[0] = 6;
      uStack_68 = uStack_d8;
      local_70 = local_e0;
      local_60 = local_d0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = (void *)0x0;
                    /* try { // try from 007fea54 to 007fea67 has its CatchHandler @ 007fee08 */
      pdVar8 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar8,(dynamic *)local_78);
      folly::dynamic::folly::dynamic::destroy(local_78);
      if ((local_e0 & 1) != 0) {
        operator_delete(local_d0);
      }
    }
    PVar4 = param_1[0x6f8];
    PVar5 = pPVar1[0x6f8];
    uVar12 = (ulong)((byte)PVar4 >> 1);
    sVar15 = uVar12;
    if (((byte)PVar4 & 1) != 0) {
      sVar15 = *(size_t *)(param_1 + 0x700);
    }
    sVar3 = (ulong)((byte)PVar5 >> 1);
    if (((byte)PVar5 & 1) != 0) {
      sVar3 = *(size_t *)(pPVar1 + 0x700);
    }
    if (sVar15 == sVar3) {
      pPVar11 = pPVar1 + 0x6f9;
      if (((byte)PVar5 & 1) != 0) {
        pPVar11 = *(Props **)(pPVar1 + 0x708);
      }
      if (((byte)PVar4 & 1) == 0) {
        if (1 < (byte)PVar4) {
          pPVar14 = param_1 + 0x6f9;
          do {
            if (*pPVar14 != *pPVar11) goto LAB_007feb58;
            uVar12 = uVar12 - 1;
            pPVar14 = pPVar14 + 1;
            pPVar11 = pPVar11 + 1;
          } while (uVar12 != 0);
        }
      }
      else {
        iVar7 = memcmp(*(void **)(param_1 + 0x708),pPVar11,*(size_t *)(param_1 + 0x700));
        if (iVar7 != 0) goto LAB_007feb58;
      }
      if ((((param_1[0x710] == pPVar1[0x710]) && (param_1[0x711] == pPVar1[0x711])) &&
          (param_1[0x712] == pPVar1[0x712])) &&
         ((param_1[0x713] == pPVar1[0x713] && (param_1[0x714] == pPVar1[0x714]))))
      goto LAB_007fed60;
    }
LAB_007feb58:
    local_58 = 0;
    local_78[0] = 5;
    uStack_68 = 0;
    local_60 = (void *)0x0;
    local_50 = 0x3f800000;
    local_a8[0] = 5;
    local_70 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_78);
    if (((byte)param_1[0x6f8] & 1) == 0) {
      uStack_b8 = *(undefined8 *)(param_1 + 0x700);
      local_c0 = *(ulong *)(param_1 + 0x6f8);
      local_b0 = *(void **)(param_1 + 0x708);
    }
    else {
                    /* try { // try from 007febb4 to 007febbb has its CatchHandler @ 007fee04 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_c0,*(char **)(param_1 + 0x708),*(ulong *)(param_1 + 0x700));
    }
    local_78[0] = 6;
    uStack_68 = uStack_b8;
    local_70 = local_c0;
    local_60 = local_b0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = (void *)0x0;
                    /* try { // try from 007febdc to 007febef has its CatchHandler @ 007fee2c */
    pdVar8 = (dynamic *)folly::dynamic::operator[](local_a8,"containerId","");
    folly::dynamic::operator=(pdVar8,(dynamic *)local_78);
    folly::dynamic::folly::dynamic::destroy(local_78);
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    PVar4 = param_1[0x710];
                    /* try { // try from 007fec14 to 007fed17 has its CatchHandler @ 007fee4c */
    piVar9 = (int *)folly::dynamic::operator[](local_a8,"shouldAnimateEmoji","");
    if (*piVar9 != 2) {
      folly::dynamic::folly::dynamic::destroy(piVar9);
      *piVar9 = 2;
    }
    *(Props *)(piVar9 + 2) = PVar4;
    PVar4 = param_1[0x711];
    piVar9 = (int *)folly::dynamic::operator[](local_a8,"shouldSho","");
    if (*piVar9 != 2) {
      folly::dynamic::folly::dynamic::destroy(piVar9);
      *piVar9 = 2;
    }
    *(Props *)(piVar9 + 2) = PVar4;
    PVar4 = param_1[0x712];
    piVar9 = (int *)folly::dynamic::operator[](local_a8,"shouldFor","");
    if (*piVar9 != 2) {
      folly::dynamic::folly::dynamic::destroy(piVar9);
      *piVar9 = 2;
    }
    *(Props *)(piVar9 + 2) = PVar4;
    PVar4 = param_1[0x713];
    piVar9 = (int *)folly::dynamic::operator[](local_a8,"shouldShowRoleDot","");
    if (*piVar9 != 2) {
      folly::dynamic::folly::dynamic::destroy(piVar9);
      *piVar9 = 2;
    }
    *(Props *)(piVar9 + 2) = PVar4;
    PVar4 = param_1[0x714];
    piVar9 = (int *)folly::dynamic::operator[](local_a8,"shouldShowRoleOnName","");
    if (*piVar9 != 2) {
      folly::dynamic::folly::dynamic::destroy(piVar9);
      *piVar9 = 2;
    }
    *(Props *)(piVar9 + 2) = PVar4;
                    /* try { // try from 007fed3c to 007fed4f has its CatchHandler @ 007fee28 */
    pdVar8 = (dynamic *)folly::dynamic::operator[]();
    folly::dynamic::operator=(pdVar8,(dynamic *)local_a8);
    puVar10 = local_a8;
  }
  folly::dynamic::folly::dynamic::destroy(puVar10);
LAB_007fed60:
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 007fee7c  FUN_007fee7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007fee7c(void)

{
  FUN_00788b10(&DAT_009b4ce0,PTR_PTR_0099e0d8 + 0x10);
  DAT_009b52bc = 0;
  DAT_009b52c0 = 0;
  DAT_009b5320 = 0;
  DAT_009b5328 = 0;
  DAT_009b5388 = 0;
  DAT_009b5398 = 0;
  DAT_009b539c = 0;
  DAT_009b53a0 = 0;
  DAT_009b53a4 = 0;
  DAT_009b53a8 = 0;
  DAT_009b53ac = 0;
  DAT_009b53b0 = 0;
  DAT_009b53b4 = 0;
  DAT_009b53b8 = 0;
  DAT_009b53bc = 0;
  DAT_009b5390 = 0;
  DAT_009b5394 = 0;
  uRam00000000009b53c8 = 0;
  _DAT_009b53c0 = 0;
  DAT_009b4ce0 = PTR_vtable_0099e0d0 + 0x20;
  uRam00000000009b53d8 = 0;
  _DAT_009b53d0 = 0;
  uRam00000000009b53e8 = 0;
  _DAT_009b53e0 = 0;
  DAT_009b53ed._0_3_ = 0;
  DAT_009b53ed._3_5_ = 0;
  return;
}


// ===== 007fef1c  FUN_007fef1c =====

void FUN_007fef1c(long param_1)

{
  if ((*(byte *)(param_1 + 0x6f8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x708));
  }
  if ((*(byte *)(param_1 + 0x6e0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x6f0));
  }
  FUN_0078917c(param_1,PTR_PTR_0099e0d8 + 8);
  return;
}


// ===== 007fef68  facebook::react::DCDVideoRendererProps::DCDVideoRendererProps =====

/* facebook::react::DCDVideoRendererProps::DCDVideoRendererProps(facebook::react::PropsParserContext
   const&, facebook::react::DCDVideoRendererProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::DCDVideoRendererProps::DCDVideoRendererProps
          (DCDVideoRendererProps *this,PropsParserContext *param_1,DCDVideoRendererProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  byte *pbVar3;
  function *in_x4;
  long lVar4;
  byte local_90 [16];
  void *local_80;
  char local_78;
  long *local_70;
  long local_58;
  
  pbVar3 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007fefa8 to 007fefb7 has its CatchHandler @ 007ff0c4 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if ((byte *)local_70 == local_90) {
    lVar4 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007fefe4;
    lVar4 = 5;
    pbVar3 = (byte *)local_70;
  }
  (**(code **)(*(long *)pbVar3 + lVar4 * 8))();
LAB_007fefe4:
  local_90[0] = 0;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 007feff0 to 007ff013 has its CatchHandler @ 007ff0b0 */
  bVar2 = FUN_007ea510(param_2);
  local_90[0] = 0;
  this[0x6e0] = (DCDVideoRendererProps)(bVar2 & 1);
  local_78 = '\0';
                    /* try { // try from 007ff024 to 007ff04b has its CatchHandler @ 007ff090 */
  FUN_007ec9b8(this + 0x6e8,param_2);
  if ((local_78 != '\0') && ((local_90[0] & 1) != 0)) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ff114  facebook::react::DCDVideoRendererProps::DCDVideoRendererProps =====

/* facebook::react::DCDVideoRendererProps::DCDVideoRendererProps(facebook::react::PropsParserContext
   const&, facebook::react::DCDVideoRendererProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::DCDVideoRendererProps::DCDVideoRendererProps
          (DCDVideoRendererProps *this,PropsParserContext *param_1,DCDVideoRendererProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  byte local_90 [16];
  void *local_80;
  char local_78;
  long *local_70;
  long local_58;
  
  pbVar3 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007ff150 to 007ff173 has its CatchHandler @ 007ff288 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099e0f0 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if ((byte *)local_70 == local_90) {
    lVar4 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007ff1a0;
    lVar4 = 5;
    pbVar3 = (byte *)local_70;
  }
  (**(code **)(*(long *)pbVar3 + lVar4 * 8))();
LAB_007ff1a0:
  local_90[0] = 0;
  *(undefined **)this = PTR_vtable_0099e0e8 + 0x20;
                    /* try { // try from 007ff1b4 to 007ff1d7 has its CatchHandler @ 007ff274 */
  bVar2 = FUN_007ea510(param_1,param_3,"useSurfaceDirectRenderer",param_2 + 0x6e0,local_90,0,0);
  local_90[0] = 0;
  this[0x6e0] = (DCDVideoRendererProps)(bVar2 & 1);
  local_78 = '\0';
                    /* try { // try from 007ff1e8 to 007ff20f has its CatchHandler @ 007ff254 */
  FUN_007ec9b8(this + 0x6e8,param_1,param_3,"streamId",param_2 + 0x6e8,local_90,0,0);
  if ((local_78 != '\0') && ((local_90[0] & 1) != 0)) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ff2d8  facebook::react::DCDVideoRendererProps::getDiffPropsImplementationTarget =====

/* facebook::react::DCDVideoRendererProps::getDiffPropsImplementationTarget() const */

char * facebook::react::DCDVideoRendererProps::getDiffPropsImplementationTarget(void)

{
  return "DCDVideoRenderer";
}


// ===== 007ff2e4  facebook::react::DCDVideoRendererProps::getDiffProps =====

/* facebook::react::DCDVideoRendererProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::DCDVideoRendererProps::getDiffProps(Props *param_1)

{
  size_t sVar1;
  size_t sVar2;
  Props PVar3;
  Props PVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  dynamic *pdVar8;
  Props *in_x1;
  Props *__s2;
  undefined4 *in_x8;
  ulong uVar9;
  Props *pPVar10;
  Props PVar11;
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  undefined4 local_78 [2];
  ulong local_70;
  undefined8 uStack_68;
  void *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if (((DAT_009b5b08 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_009b5b08), iVar6 != 0)) {
    memset(&DAT_009b5400,0,0x708);
                    /* try { // try from 007ff574 to 007ff577 has its CatchHandler @ 007ff5a8 */
    FUN_007ff61c();
    __cxa_atexit(FUN_007ff6b0,&DAT_009b5400,&PTR_LOOP_008d5d30);
    __cxa_guard_release(&DAT_009b5b08);
  }
  pPVar10 = (Props *)&DAT_009b5400;
  if (in_x1 != (Props *)0x0) {
    pPVar10 = in_x1;
  }
  if (pPVar10 == param_1) {
    local_58 = 0;
    local_78[0] = 5;
    uStack_68 = 0;
    local_60 = (void *)0x0;
    local_50 = 0x3f800000;
    *in_x8 = 5;
    local_70 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
LAB_007ff440:
    folly::dynamic::folly::dynamic::destroy(local_78);
  }
  else {
    ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    PVar3 = param_1[0x6e0];
    if (PVar3 != pPVar10[0x6e0]) {
                    /* try { // try from 007ff354 to 007ff367 has its CatchHandler @ 007ff5d4 */
      piVar7 = (int *)folly::dynamic::operator[]();
      if (*piVar7 != 2) {
        folly::dynamic::folly::dynamic::destroy(piVar7);
        *piVar7 = 2;
      }
      *(Props *)(piVar7 + 2) = PVar3;
    }
    PVar3 = param_1[0x700];
    if ((PVar3 == (Props)0x0) || (pPVar10[0x700] == (Props)0x0)) {
      if ((PVar3 != (Props)0x0) == (pPVar10[0x700] != (Props)0x0)) goto LAB_007ff4f8;
LAB_007ff464:
      if (PVar3 == (Props)0x0) {
        local_78[0] = 0;
        local_70 = 0;
                    /* try { // try from 007ff528 to 007ff53b has its CatchHandler @ 007ff5bc */
        pdVar8 = (dynamic *)folly::dynamic::operator[]();
        folly::dynamic::operator=(pdVar8,(dynamic *)local_78);
        goto LAB_007ff440;
      }
      PVar11 = param_1[0x6e8];
    }
    else {
      PVar11 = param_1[0x6e8];
      PVar4 = pPVar10[0x6e8];
      uVar9 = (ulong)((byte)PVar11 >> 1);
      sVar1 = uVar9;
      if (((byte)PVar11 & 1) != 0) {
        sVar1 = *(size_t *)(param_1 + 0x6f0);
      }
      sVar2 = (ulong)((byte)PVar4 >> 1);
      if (((byte)PVar4 & 1) != 0) {
        sVar2 = *(size_t *)(pPVar10 + 0x6f0);
      }
      if (sVar1 == sVar2) {
        __s2 = pPVar10 + 0x6e9;
        if (((byte)PVar4 & 1) != 0) {
          __s2 = *(Props **)(pPVar10 + 0x6f8);
        }
        if (((byte)PVar11 & 1) == 0) {
          if (1 < (byte)PVar11) {
            pPVar10 = param_1 + 0x6e9;
            do {
              if (*pPVar10 != *__s2) goto LAB_007ff464;
              uVar9 = uVar9 - 1;
              pPVar10 = pPVar10 + 1;
              __s2 = __s2 + 1;
            } while (uVar9 != 0);
          }
          goto LAB_007ff4f8;
        }
        iVar6 = memcmp(*(void **)(param_1 + 0x6f8),__s2,*(size_t *)(param_1 + 0x6f0));
        if (iVar6 == 0) goto LAB_007ff4f8;
      }
    }
    if (((byte)PVar11 & 1) == 0) {
      uStack_88 = *(undefined8 *)(param_1 + 0x6f0);
      local_90 = *(ulong *)(param_1 + 0x6e8);
      local_80 = *(void **)(param_1 + 0x6f8);
    }
    else {
                    /* try { // try from 007ff49c to 007ff4a3 has its CatchHandler @ 007ff5cc */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_90,*(char **)(param_1 + 0x6f8),*(ulong *)(param_1 + 0x6f0));
    }
    local_78[0] = 6;
    uStack_68 = uStack_88;
    local_70 = local_90;
    local_60 = local_80;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = (void *)0x0;
                    /* try { // try from 007ff4c4 to 007ff4d7 has its CatchHandler @ 007ff5dc */
    pdVar8 = (dynamic *)folly::dynamic::operator[]();
    folly::dynamic::operator=(pdVar8,(dynamic *)local_78);
    folly::dynamic::folly::dynamic::destroy(local_78);
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
  }
LAB_007ff4f8:
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 007ff61c  FUN_007ff61c =====

void FUN_007ff61c(void)

{
  FUN_00788b10(&DAT_009b5400,PTR_PTR_0099e0f0 + 0x10);
  DAT_009b59dc = 0;
  DAT_009b59e0 = 0;
  DAT_009b5a40 = 0;
  DAT_009b5a48 = 0;
  DAT_009b5aa8 = 0;
  DAT_009b5ab8 = 0;
  DAT_009b5abc = 0;
  DAT_009b5ac0 = 0;
  DAT_009b5ac4 = 0;
  DAT_009b5ac8 = 0;
  DAT_009b5acc = 0;
  DAT_009b5ad0 = 0;
  DAT_009b5ad4 = 0;
  DAT_009b5ad8 = 0;
  DAT_009b5adc = 0;
  DAT_009b5ab0 = 0;
  DAT_009b5ab4 = 0;
  DAT_009b5ae0 = 0;
  DAT_009b5400 = PTR_vtable_0099e0e8 + 0x20;
  DAT_009b5ae8 = 0;
  DAT_009b5b00 = 0;
  return;
}


// ===== 007ff6b0  FUN_007ff6b0 =====

void FUN_007ff6b0(long param_1)

{
  if ((*(char *)(param_1 + 0x700) != '\0') && ((*(byte *)(param_1 + 0x6e8) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x6f8));
  }
  FUN_0078917c(param_1,PTR_PTR_0099e0f0 + 8);
  return;
}


// ===== 007ff6f8  facebook::react::DCDVisualEffectViewProps::DCDVisualEffectViewProps =====

/* facebook::react::DCDVisualEffectViewProps::DCDVisualEffectViewProps(facebook::react::PropsParserContext
   const&, facebook::react::DCDVisualEffectViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::DCDVisualEffectViewProps::DCDVisualEffectViewProps
          (DCDVisualEffectViewProps *this,PropsParserContext *param_1,
          DCDVisualEffectViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  uint *puVar2;
  undefined8 uVar3;
  function *in_x4;
  long lVar4;
  undefined4 uVar5;
  uint local_90;
  undefined1 uStack_8c;
  void *local_80;
  char local_78;
  long *local_70;
  long local_58;
  
  puVar2 = &local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007ff738 to 007ff747 has its CatchHandler @ 007ff940 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if ((uint *)local_70 == &local_90) {
    lVar4 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007ff774;
    lVar4 = 5;
    puVar2 = (uint *)local_70;
  }
  (**(code **)(*(long *)puVar2 + lVar4 * 8))();
LAB_007ff774:
  local_90 = 0;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 007ff780 to 007ff7a3 has its CatchHandler @ 007ff914 */
  uVar5 = FUN_007f0fe0(param_2);
  *(undefined4 *)(this + 0x6e0) = uVar5;
  local_90 = local_90 & 0xffffff00;
  local_78 = '\0';
                    /* try { // try from 007ff7b0 to 007ff7d7 has its CatchHandler @ 007ff8f4 */
  FUN_007ec9b8(this + 0x6e8,param_2);
  if ((local_78 != '\0') && ((local_90 & 1) != 0)) {
    operator_delete(local_80);
  }
  local_90 = local_90 & 0xffffff00;
  uStack_8c = 0;
                    /* try { // try from 007ff7f8 to 007ff813 has its CatchHandler @ 007ff8d8 */
  uVar3 = FUN_007ecc38(param_2);
  *(undefined8 *)(this + 0x708) = uVar3;
  local_90 = local_90 & 0xffffff00;
  uStack_8c = 0;
                    /* try { // try from 007ff820 to 007ff83b has its CatchHandler @ 007ff8d4 */
  uVar3 = FUN_007ecc38(param_2);
  *(undefined8 *)(this + 0x710) = uVar3;
  local_90 = local_90 & 0xffffff00;
  local_78 = '\0';
                    /* try { // try from 007ff848 to 007ff86f has its CatchHandler @ 007ff8b4 */
  FUN_007ec9b8(this + 0x718,param_2);
  if ((local_78 != '\0') && ((local_90 & 1) != 0)) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ff978  facebook::react::DCDVisualEffectViewProps::DCDVisualEffectViewProps =====

/* facebook::react::DCDVisualEffectViewProps::DCDVisualEffectViewProps(facebook::react::PropsParserContext
   const&, facebook::react::DCDVisualEffectViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::DCDVisualEffectViewProps::DCDVisualEffectViewProps
          (DCDVisualEffectViewProps *this,PropsParserContext *param_1,
          DCDVisualEffectViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  uint *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  uint local_90;
  undefined1 uStack_8c;
  void *local_80;
  char local_78;
  long *local_70;
  long local_58;
  
  puVar2 = &local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 007ff9b4 to 007ff9d7 has its CatchHandler @ 007ffbd8 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099e108 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if ((uint *)local_70 == &local_90) {
    lVar4 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007ffa04;
    lVar4 = 5;
    puVar2 = (uint *)local_70;
  }
  (**(code **)(*(long *)puVar2 + lVar4 * 8))();
LAB_007ffa04:
  local_90 = 0;
  *(undefined **)this = PTR_vtable_0099e100 + 0x20;
                    /* try { // try from 007ffa18 to 007ffa3b has its CatchHandler @ 007ffbac */
  uVar5 = FUN_007f0fe0(param_1,param_3,"blurAmount",param_2 + 0x6e0,&local_90,0,0);
  *(undefined4 *)(this + 0x6e0) = uVar5;
  local_90 = local_90 & 0xffffff00;
  local_78 = '\0';
                    /* try { // try from 007ffa48 to 007ffa6f has its CatchHandler @ 007ffb8c */
  FUN_007ec9b8(this + 0x6e8,param_1,param_3,"blurEffectName",param_2 + 0x6e8,&local_90,0,0);
  if ((local_78 != '\0') && ((local_90 & 1) != 0)) {
    operator_delete(local_80);
  }
  local_90 = local_90 & 0xffffff00;
  uStack_8c = 0;
                    /* try { // try from 007ffa90 to 007ffaab has its CatchHandler @ 007ffb70 */
  uVar3 = FUN_007ecc38(param_1,param_3,"blurTintIOSParityCompensationColor",param_2 + 0x708,
                       &local_90);
  *(undefined8 *)(this + 0x708) = uVar3;
  local_90 = local_90 & 0xffffff00;
  uStack_8c = 0;
                    /* try { // try from 007ffab8 to 007ffad3 has its CatchHandler @ 007ffb6c */
  uVar3 = FUN_007ecc38(param_1,param_3,"tintColor",param_2 + 0x710,&local_90);
  *(undefined8 *)(this + 0x710) = uVar3;
  local_90 = local_90 & 0xffffff00;
  local_78 = '\0';
                    /* try { // try from 007ffae0 to 007ffb07 has its CatchHandler @ 007ffb4c */
  FUN_007ec9b8(this + 0x718,param_1,param_3,"blurTargetViewNativeId",param_2 + 0x718,&local_90,0,0);
  if ((local_78 != '\0') && ((local_90 & 1) != 0)) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ffc10  facebook::react::DCDVisualEffectViewProps::getDiffPropsImplementationTarget =====

/* facebook::react::DCDVisualEffectViewProps::getDiffPropsImplementationTarget() const */

char * facebook::react::DCDVisualEffectViewProps::getDiffPropsImplementationTarget(void)

{
  return "DCDVisualEffectView";
}


// ===== 007ffc1c  facebook::react::DCDVisualEffectViewProps::getDiffProps =====

/* facebook::react::DCDVisualEffectViewProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::DCDVisualEffectViewProps::getDiffProps(Props *param_1)

{
  size_t sVar1;
  size_t sVar2;
  Props PVar3;
  Props PVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  dynamic *pdVar8;
  Props *in_x1;
  Props *pPVar9;
  undefined4 *in_x8;
  ulong uVar10;
  Props *pPVar11;
  Props *pPVar12;
  Props PVar13;
  float fVar14;
  ulong local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  ulong local_a0;
  undefined8 uStack_98;
  void *local_90;
  undefined4 local_88 [2];
  ulong local_80;
  undefined8 uStack_78;
  void *local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if (((DAT_009b6248 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_009b6248), iVar6 != 0)) {
    memset(&DAT_009b5b10,0,0x738);
                    /* try { // try from 0080018c to 0080018f has its CatchHandler @ 008001c0 */
    FUN_00800260();
    __cxa_atexit(FUN_0080030c,&DAT_009b5b10,&PTR_LOOP_008d5d30);
    __cxa_guard_release(&DAT_009b6248);
  }
  pPVar12 = (Props *)&DAT_009b5b10;
  if (in_x1 != (Props *)0x0) {
    pPVar12 = in_x1;
  }
  if (pPVar12 == param_1) {
    local_68 = 0;
    local_88[0] = 5;
    uStack_78 = 0;
    local_70 = (void *)0x0;
    local_60 = 0x3f800000;
    *in_x8 = 5;
    local_80 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
LAB_007ffd90:
    folly::dynamic::folly::dynamic::destroy(local_88);
  }
  else {
    ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    fVar14 = *(float *)(param_1 + 0x6e0);
    if ((fVar14 != *(float *)(pPVar12 + 0x6e0)) &&
       ((!NAN(fVar14) || (!NAN(*(float *)(pPVar12 + 0x6e0)))))) {
                    /* try { // try from 007ffca0 to 007ffcb3 has its CatchHandler @ 00800238 */
      piVar7 = (int *)folly::dynamic::operator[]();
      if (*piVar7 != 3) {
        folly::dynamic::folly::dynamic::destroy(piVar7);
        *piVar7 = 3;
      }
      *(double *)(piVar7 + 2) = (double)fVar14;
    }
    PVar3 = param_1[0x700];
    if ((PVar3 == (Props)0x0) || (pPVar12[0x700] == (Props)0x0)) {
      if ((PVar3 != (Props)0x0) != (pPVar12[0x700] != (Props)0x0)) {
LAB_007ffdb4:
        if (PVar3 != (Props)0x0) {
          PVar13 = param_1[0x6e8];
          goto LAB_007ffdcc;
        }
        local_88[0] = 0;
        local_80 = 0;
                    /* try { // try from 007ffe54 to 007ffe67 has its CatchHandler @ 008001e0 */
        pdVar8 = (dynamic *)folly::dynamic::operator[]();
        folly::dynamic::operator=(pdVar8,(dynamic *)local_88);
        folly::dynamic::folly::dynamic::destroy(local_88);
      }
    }
    else {
      PVar13 = param_1[0x6e8];
      PVar4 = pPVar12[0x6e8];
      uVar10 = (ulong)((byte)PVar13 >> 1);
      sVar1 = uVar10;
      if (((byte)PVar13 & 1) != 0) {
        sVar1 = *(size_t *)(param_1 + 0x6f0);
      }
      sVar2 = (ulong)((byte)PVar4 >> 1);
      if (((byte)PVar4 & 1) != 0) {
        sVar2 = *(size_t *)(pPVar12 + 0x6f0);
      }
      if (sVar1 == sVar2) {
        pPVar9 = pPVar12 + 0x6e9;
        if (((byte)PVar4 & 1) != 0) {
          pPVar9 = *(Props **)(pPVar12 + 0x6f8);
        }
        if (((byte)PVar13 & 1) == 0) {
          if (1 < (byte)PVar13) {
            pPVar11 = param_1 + 0x6e9;
            do {
              if (*pPVar11 != *pPVar9) goto LAB_007ffdb4;
              uVar10 = uVar10 - 1;
              pPVar11 = pPVar11 + 1;
              pPVar9 = pPVar9 + 1;
            } while (uVar10 != 0);
          }
        }
        else {
          iVar6 = memcmp(*(void **)(param_1 + 0x6f8),pPVar9,*(size_t *)(param_1 + 0x6f0));
          if (iVar6 != 0) goto LAB_007ffdcc;
        }
      }
      else {
LAB_007ffdcc:
        if (((byte)PVar13 & 1) == 0) {
          uStack_98 = *(undefined8 *)(param_1 + 0x6f0);
          local_a0 = *(ulong *)(param_1 + 0x6e8);
          local_90 = *(void **)(param_1 + 0x6f8);
        }
        else {
                    /* try { // try from 007ffdec to 007ffdf3 has its CatchHandler @ 008001f4 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_a0,*(char **)(param_1 + 0x6f8),*(ulong *)(param_1 + 0x6f0));
        }
        local_88[0] = 6;
        uStack_78 = uStack_98;
        local_80 = local_a0;
        local_70 = local_90;
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = (void *)0x0;
                    /* try { // try from 007ffe14 to 007ffe27 has its CatchHandler @ 00800218 */
        pdVar8 = (dynamic *)folly::dynamic::operator[]();
        folly::dynamic::operator=(pdVar8,(dynamic *)local_88);
        folly::dynamic::folly::dynamic::destroy(local_88);
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
      }
    }
    PVar3 = param_1[0x70c];
    if ((PVar3 == (Props)0x0) || (pPVar12[0x70c] == (Props)0x0)) {
      if ((PVar3 != (Props)0x0) != (pPVar12[0x70c] != (Props)0x0)) {
        if (PVar3 != (Props)0x0) {
          iVar6 = *(int *)(param_1 + 0x708);
          goto LAB_007ffebc;
        }
        local_88[0] = 0;
        local_80 = 0;
                    /* try { // try from 00800108 to 0080011b has its CatchHandler @ 008001d8 */
        pdVar8 = (dynamic *)folly::dynamic::operator[]();
        folly::dynamic::operator=(pdVar8,(dynamic *)local_88);
        folly::dynamic::folly::dynamic::destroy(local_88);
      }
    }
    else {
      iVar6 = *(int *)(param_1 + 0x708);
      if (iVar6 != *(int *)(pPVar12 + 0x708)) {
LAB_007ffebc:
                    /* try { // try from 007ffebc to 007fff4f has its CatchHandler @ 00800238 */
        piVar7 = (int *)folly::dynamic::operator[]();
        if (*piVar7 != 4) {
          folly::dynamic::folly::dynamic::destroy(piVar7);
          *piVar7 = 4;
        }
        *(long *)(piVar7 + 2) = (long)iVar6;
      }
    }
    PVar3 = param_1[0x714];
    if ((PVar3 == (Props)0x0) || (pPVar12[0x714] == (Props)0x0)) {
      if ((PVar3 != (Props)0x0) != (pPVar12[0x714] != (Props)0x0)) {
        if (PVar3 != (Props)0x0) {
          iVar6 = *(int *)(param_1 + 0x710);
          goto LAB_007fff3c;
        }
        local_88[0] = 0;
        local_80 = 0;
                    /* try { // try from 00800138 to 0080014b has its CatchHandler @ 008001d4 */
        pdVar8 = (dynamic *)folly::dynamic::operator[]();
        folly::dynamic::operator=(pdVar8,(dynamic *)local_88);
        folly::dynamic::folly::dynamic::destroy(local_88);
      }
    }
    else {
      iVar6 = *(int *)(param_1 + 0x710);
      if (iVar6 != *(int *)(pPVar12 + 0x710)) {
LAB_007fff3c:
        piVar7 = (int *)folly::dynamic::operator[]();
        if (*piVar7 != 4) {
          folly::dynamic::folly::dynamic::destroy(piVar7);
          *piVar7 = 4;
        }
        *(long *)(piVar7 + 2) = (long)iVar6;
      }
    }
    PVar3 = param_1[0x730];
    if ((PVar3 == (Props)0x0) || (pPVar12[0x730] == (Props)0x0)) {
      if ((PVar3 != (Props)0x0) == (pPVar12[0x730] != (Props)0x0)) goto LAB_008000ac;
LAB_00800018:
      if (PVar3 == (Props)0x0) {
        local_88[0] = 0;
        local_80 = 0;
                    /* try { // try from 008000e0 to 008000f3 has its CatchHandler @ 008001dc */
        pdVar8 = (dynamic *)folly::dynamic::operator[]();
        folly::dynamic::operator=(pdVar8,(dynamic *)local_88);
        goto LAB_007ffd90;
      }
      PVar13 = param_1[0x718];
    }
    else {
      PVar13 = param_1[0x718];
      PVar4 = pPVar12[0x718];
      uVar10 = (ulong)((byte)PVar13 >> 1);
      sVar1 = uVar10;
      if (((byte)PVar13 & 1) != 0) {
        sVar1 = *(size_t *)(param_1 + 0x720);
      }
      sVar2 = (ulong)((byte)PVar4 >> 1);
      if (((byte)PVar4 & 1) != 0) {
        sVar2 = *(size_t *)(pPVar12 + 0x720);
      }
      if (sVar1 == sVar2) {
        pPVar9 = pPVar12 + 0x719;
        if (((byte)PVar4 & 1) != 0) {
          pPVar9 = *(Props **)(pPVar12 + 0x728);
        }
        if (((byte)PVar13 & 1) == 0) {
          if (1 < (byte)PVar13) {
            pPVar12 = param_1 + 0x719;
            do {
              if (*pPVar12 != *pPVar9) goto LAB_00800018;
              uVar10 = uVar10 - 1;
              pPVar12 = pPVar12 + 1;
              pPVar9 = pPVar9 + 1;
            } while (uVar10 != 0);
          }
          goto LAB_008000ac;
        }
        iVar6 = memcmp(*(void **)(param_1 + 0x728),pPVar9,*(size_t *)(param_1 + 0x720));
        if (iVar6 == 0) goto LAB_008000ac;
      }
    }
    if (((byte)PVar13 & 1) == 0) {
      uStack_b8 = *(undefined8 *)(param_1 + 0x720);
      local_c0 = *(ulong *)(param_1 + 0x718);
      local_b0 = *(void **)(param_1 + 0x728);
    }
    else {
                    /* try { // try from 00800050 to 00800057 has its CatchHandler @ 008001f0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_c0,*(char **)(param_1 + 0x728),*(ulong *)(param_1 + 0x720));
    }
    local_88[0] = 6;
    uStack_78 = uStack_b8;
    local_80 = local_c0;
    local_70 = local_b0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = (void *)0x0;
                    /* try { // try from 00800078 to 0080008b has its CatchHandler @ 008001f8 */
    pdVar8 = (dynamic *)folly::dynamic::operator[]();
    folly::dynamic::operator=(pdVar8,(dynamic *)local_88);
    folly::dynamic::folly::dynamic::destroy(local_88);
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
  }
LAB_008000ac:
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00800260  FUN_00800260 =====

void FUN_00800260(void)

{
  FUN_00788b10(&DAT_009b5b10,PTR_PTR_0099e108 + 0x10);
  DAT_009b60ec = 0;
  DAT_009b60f0 = 0;
  DAT_009b6150 = 0;
  DAT_009b6158 = 0;
  DAT_009b61b8 = 0;
  DAT_009b61c8 = 0;
  DAT_009b61cc = 0;
  DAT_009b61d0 = 0;
  DAT_009b61d4 = 0;
  DAT_009b61d8 = 0;
  DAT_009b61dc = 0;
  DAT_009b61e0 = 0;
  DAT_009b61e4 = 0;
  DAT_009b61e8 = 0;
  DAT_009b61ec = 0;
  DAT_009b61c0 = 0;
  DAT_009b61c4 = 0;
  DAT_009b61f0 = 0;
  DAT_009b5b10 = PTR_vtable_0099e100 + 0x20;
  DAT_009b61f8 = 0;
  DAT_009b6210 = 0;
  DAT_009b6218 = 0;
  DAT_009b621c = 0;
  DAT_009b6220 = 0;
  DAT_009b6224 = 0;
  DAT_009b6228 = 0;
  DAT_009b6240 = 0;
  return;
}


// ===== 0080030c  FUN_0080030c =====

void FUN_0080030c(long param_1)

{
  if ((*(char *)(param_1 + 0x730) != '\0') && ((*(byte *)(param_1 + 0x718) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x728));
  }
  if ((*(char *)(param_1 + 0x700) != '\0') && ((*(byte *)(param_1 + 0x6e8) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x6f8));
  }
  FUN_0078917c(param_1,PTR_PTR_0099e108 + 8);
  return;
}


