// ===== 007c98a8  facebook::react::EmojiPickerViewEventEmitter::onLongPressEmoji =====

/* facebook::react::EmojiPickerViewEventEmitter::onLongPressEmoji(facebook::react::EmojiPickerViewEventEmitter::OnLongPressEmoji)
   const */

void __thiscall
facebook::react::EmojiPickerViewEventEmitter::onLongPressEmoji
          (EmojiPickerViewEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte local_78;
  char local_77 [6];
  char acStack_71 [2];
  char acStack_6f [6];
  undefined1 local_69;
  void *local_68;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar7 = param_2[1];
  lVar5 = *param_2;
  local_78 = 0x1c;
  local_77 = s_longPr_0036a799;
  lVar3 = param_2[2];
  lVar8 = param_2[4];
  lVar6 = param_2[3];
  lVar4 = param_2[5];
  acStack_71 = (char  [2])s_essEmoji_0036a79f._0_2_;
  acStack_6f = (char  [6])s_essEmoji_0036a79f._2_6_;
  local_69 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c991c to 007c9923 has its CatchHandler @ 007c9a14 */
  local_40 = (long *)operator_new(0x38);
  *local_40 = (long)&PTR_FUN_00988500;
  local_40[2] = lVar7;
  local_40[1] = lVar5;
  local_40[3] = lVar3;
  local_40[5] = lVar8;
  local_40[4] = lVar6;
  local_40[6] = lVar4;
                    /* try { // try from 007c9968 to 007c997f has its CatchHandler @ 007c99dc */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c99ac;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c99ac:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c9a4c  FUN_007c9a4c =====

void FUN_007c9a4c(byte *param_1)

{
  if ((param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 007c9a90  facebook::react::EmojiPickerViewEventEmitter::onScroll =====

/* facebook::react::EmojiPickerViewEventEmitter::onScroll(facebook::react::EmojiPickerViewEventEmitter::OnScroll)
   const */

void __thiscall
facebook::react::EmojiPickerViewEventEmitter::onScroll
          (EmojiPickerViewEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte local_88 [16];
  void *local_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_88[0] = 0xc;
  local_88[1] = 0x73;
  local_88[2] = 99;
  local_88[3] = 0x72;
  local_88[4] = 0x6f;
  local_88[5] = 0x6c;
  local_88[6] = 0x6c;
  local_88[7] = 0;
                    /* try { // try from 007c9ad8 to 007c9adf has its CatchHandler @ 007c9bb4 */
  local_50 = (long *)operator_new(0x30);
  lVar5 = param_2[1];
  lVar4 = *param_2;
  lVar7 = param_2[3];
  lVar6 = param_2[2];
  *local_50 = (long)&PTR_FUN_00988580;
  lVar3 = param_2[4];
  local_50[2] = lVar5;
  local_50[1] = lVar4;
  local_50[4] = lVar7;
  local_50[3] = lVar6;
  local_50[5] = lVar3;
                    /* try { // try from 007c9b04 to 007c9b1b has its CatchHandler @ 007c9b7c */
  ::facebook::react::EventEmitter::dispatchEvent(this,local_88,local_70,2);
  if (local_50 == local_70) {
    lVar3 = 4;
    plVar2 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c9b48;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c9b48:
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c9be4  facebook::react::EmojiPickerViewEventEmitter::onScrollBeginDrag =====

/* facebook::react::EmojiPickerViewEventEmitter::onScrollBeginDrag(facebook::react::EmojiPickerViewEventEmitter::OnScrollBeginDrag)
   const */

void __thiscall
facebook::react::EmojiPickerViewEventEmitter::onScrollBeginDrag
          (EmojiPickerViewEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte local_88;
  char local_87 [7];
  char cStack_80;
  char acStack_7f [7];
  undefined1 local_78;
  undefined7 uStack_77;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_88 = 0x1e;
  local_87 = s_scrollB_0036e666;
  cStack_80 = s_eginDrag_0036e66d[0];
  acStack_7f = (char  [7])s_eginDrag_0036e66d._1_7_;
  local_78 = 0;
                    /* try { // try from 007c9c30 to 007c9c37 has its CatchHandler @ 007c9d0c */
  local_50 = (long *)operator_new(0x30);
  lVar5 = param_2[1];
  lVar4 = *param_2;
  lVar7 = param_2[3];
  lVar6 = param_2[2];
  *local_50 = (long)&PTR_FUN_00988600;
  lVar3 = param_2[4];
  local_50[2] = lVar5;
  local_50[1] = lVar4;
  local_50[4] = lVar7;
  local_50[3] = lVar6;
  local_50[5] = lVar3;
                    /* try { // try from 007c9c5c to 007c9c73 has its CatchHandler @ 007c9cd4 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_88,local_70,2);
  if (local_50 == local_70) {
    lVar3 = 4;
    plVar2 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c9ca0;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c9ca0:
  if ((local_88 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_77,local_78));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c9d3c  facebook::react::EmojiPickerViewEventEmitter::onScrollEndDrag =====

/* facebook::react::EmojiPickerViewEventEmitter::onScrollEndDrag(facebook::react::EmojiPickerViewEventEmitter::OnScrollEndDrag)
   const */

void __thiscall
facebook::react::EmojiPickerViewEventEmitter::onScrollEndDrag
          (EmojiPickerViewEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte local_88;
  char local_87 [5];
  char acStack_82 [3];
  char acStack_7f [5];
  undefined1 local_7a;
  void *local_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_88 = 0x1a;
  local_87 = s_scrol_0036ec84;
  acStack_82 = (char  [3])s_lEndDrag_0036ec89._0_3_;
  acStack_7f = (char  [5])s_lEndDrag_0036ec89._3_5_;
  local_7a = 0;
                    /* try { // try from 007c9d88 to 007c9d8f has its CatchHandler @ 007c9e64 */
  local_50 = (long *)operator_new(0x30);
  lVar5 = param_2[1];
  lVar4 = *param_2;
  lVar7 = param_2[3];
  lVar6 = param_2[2];
  *local_50 = (long)&PTR_FUN_00988680;
  lVar3 = param_2[4];
  local_50[2] = lVar5;
  local_50[1] = lVar4;
  local_50[4] = lVar7;
  local_50[3] = lVar6;
  local_50[5] = lVar3;
                    /* try { // try from 007c9db4 to 007c9dcb has its CatchHandler @ 007c9e2c */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_88,local_70,2);
  if (local_50 == local_70) {
    lVar3 = 4;
    plVar2 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c9df8;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c9df8:
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c9e94  facebook::react::EmojiPickerViewEventEmitter::onShowNitroUpsell =====

/* facebook::react::EmojiPickerViewEventEmitter::onShowNitroUpsell(facebook::react::EmojiPickerViewEventEmitter::OnShowNitroUpsell)
   const */

void __thiscall
facebook::react::EmojiPickerViewEventEmitter::onShowNitroUpsell
          (EmojiPickerViewEventEmitter *this,undefined1 param_2)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [7];
  char cStack_70;
  char acStack_6f [7];
  undefined1 local_68;
  undefined7 uStack_67;
  undefined **local_60;
  undefined1 local_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x1e;
  local_77 = s_showNit_0036f8d2;
  cStack_70 = s_roUpsell_0036f8d9[0];
  acStack_6f = (char  [7])s_roUpsell_0036f8d9._1_7_;
  local_68 = 0;
  local_60 = &PTR_FUN_00988700;
                    /* try { // try from 007c9eec to 007c9efb has its CatchHandler @ 007c9f58 */
  local_58 = param_2;
  local_40 = &local_60;
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_007c9f28;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_007c9f28:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_67,local_68));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c9fb8  facebook::react::EmojiPickerRowViewEventEmitter::onPressEmoji =====

/* facebook::react::EmojiPickerRowViewEventEmitter::onPressEmoji(facebook::react::EmojiPickerRowViewEventEmitter::OnPressEmoji)
   const */

void __thiscall
facebook::react::EmojiPickerRowViewEventEmitter::onPressEmoji
          (EmojiPickerRowViewEventEmitter *this,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  byte local_98;
  char local_97 [8];
  undefined2 local_8f;
  undefined1 local_8d;
  void *local_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_98 = 0x14;
  local_8f = 0x696a;
  uVar2 = *(undefined1 *)param_2;
  local_8d = 0;
  local_97 = (char  [8])s_pressEmoji_003697c0._0_8_;
  uVar1 = param_2[1];
  lVar5 = param_2[2];
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  param_2[1] = 0;
  param_2[2] = 0;
  uStack_79 = (undefined1)uVar1;
  uStack_78 = (undefined7)((ulong)uVar1 >> 8);
  *param_2 = 0;
                    /* try { // try from 007ca01c to 007ca023 has its CatchHandler @ 007ca0f8 */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_00988780;
  *(undefined1 *)(local_50 + 1) = uVar2;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar5;
                    /* try { // try from 007ca048 to 007ca05f has its CatchHandler @ 007ca0c0 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_98,local_70,2);
  if (local_50 == local_70) {
    lVar5 = 4;
    plVar4 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007ca08c;
    lVar5 = 5;
    plVar4 = local_50;
  }
  (**(code **)(*plVar4 + lVar5 * 8))();
LAB_007ca08c:
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ca134  facebook::react::EmojiPickerRowViewEventEmitter::onLongPressEmoji =====

/* facebook::react::EmojiPickerRowViewEventEmitter::onLongPressEmoji(facebook::react::EmojiPickerRowViewEventEmitter::OnLongPressEmoji)
   const */

void __thiscall
facebook::react::EmojiPickerRowViewEventEmitter::onLongPressEmoji
          (EmojiPickerRowViewEventEmitter *this,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  byte local_98;
  char local_97 [6];
  char acStack_91 [2];
  char acStack_8f [6];
  undefined1 local_89;
  void *local_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *(undefined1 *)param_2;
  local_98 = 0x1c;
  local_97 = s_longPr_0036a799;
  acStack_91 = (char  [2])s_essEmoji_0036a79f._0_2_;
  acStack_8f = (char  [6])s_essEmoji_0036a79f._2_6_;
  lVar4 = param_2[2];
  local_89 = 0;
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uStack_79 = (undefined1)param_2[1];
  uStack_78 = (undefined7)((ulong)param_2[1] >> 8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 007ca198 to 007ca19f has its CatchHandler @ 007ca274 */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_00988800;
  *(undefined1 *)(local_50 + 1) = uVar1;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar4;
                    /* try { // try from 007ca1c4 to 007ca1db has its CatchHandler @ 007ca23c */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_98,local_70,2);
  if (local_50 == local_70) {
    lVar4 = 4;
    plVar3 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007ca208;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007ca208:
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ca2b0  facebook::react::DCDFastImageViewEventEmitter::onLoadStart =====

/* facebook::react::DCDFastImageViewEventEmitter::onLoadStart(facebook::react::DCDFastImageViewEventEmitter::OnLoadStart)
   const */

void facebook::react::DCDFastImageViewEventEmitter::onLoadStart(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  void *local_68;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x12;
  local_6f = 0x74;
  local_77 = (char  [8])s_loadStart_0036932e._0_8_;
  local_60[0] = &PTR_FUN_00988880;
                    /* try { // try from 007ca300 to 007ca30f has its CatchHandler @ 007ca36c */
  local_40 = local_60;
  ::facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_007ca33c;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_007ca33c:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ca3cc  facebook::react::DCDFastImageViewEventEmitter::onProgress =====

/* facebook::react::DCDFastImageViewEventEmitter::onProgress(facebook::react::DCDFastImageViewEventEmitter::OnProgress)
   const */

void __thiscall
facebook::react::DCDFastImageViewEventEmitter::onProgress
          (DCDFastImageViewEventEmitter *this,undefined8 param_2)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78 [16];
  void *local_68;
  undefined **local_60;
  undefined8 uStack_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78[0] = 0x10;
  local_78[9] = 0;
  local_78[1] = 0x70;
  local_78[2] = 0x72;
  local_78[3] = 0x6f;
  local_78[4] = 0x67;
  local_78[5] = 0x72;
  local_78[6] = 0x65;
  local_78[7] = 0x73;
  local_78[8] = 0x73;
  local_60 = &PTR_FUN_00988900;
                    /* try { // try from 007ca41c to 007ca42b has its CatchHandler @ 007ca488 */
  uStack_58 = param_2;
  local_40 = &local_60;
  ::facebook::react::EventEmitter::dispatchEvent(this,local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_007ca458;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_007ca458:
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ca4e8  facebook::react::DCDFastImageViewEventEmitter::onError =====

/* facebook::react::DCDFastImageViewEventEmitter::onError(facebook::react::DCDFastImageViewEventEmitter::OnError)
   const */

void __thiscall
facebook::react::DCDFastImageViewEventEmitter::onError
          (DCDFastImageViewEventEmitter *this,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  byte local_98 [16];
  void *local_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar2 = *(undefined1 *)param_2;
  local_98[0] = 10;
  local_98[1] = 0x65;
  local_98[2] = 0x72;
  local_98[3] = 0x72;
  local_98[4] = 0x6f;
  local_98[5] = 0x72;
  local_98[6] = 0;
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uVar1 = param_2[1];
  lVar5 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uStack_79 = (undefined1)uVar1;
  uStack_78 = (undefined7)((ulong)uVar1 >> 8);
                    /* try { // try from 007ca544 to 007ca54b has its CatchHandler @ 007ca620 */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_00988980;
  *(undefined1 *)(local_50 + 1) = uVar2;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar5;
                    /* try { // try from 007ca570 to 007ca587 has its CatchHandler @ 007ca5e8 */
  ::facebook::react::EventEmitter::dispatchEvent(this,local_98,local_70,2);
  if (local_50 == local_70) {
    lVar5 = 4;
    plVar4 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007ca5b4;
    lVar5 = 5;
    plVar4 = local_50;
  }
  (**(code **)(*plVar4 + lVar5 * 8))();
LAB_007ca5b4:
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ca65c  facebook::react::DCDFastImageViewEventEmitter::onLoad =====

/* facebook::react::DCDFastImageViewEventEmitter::onLoad(facebook::react::DCDFastImageViewEventEmitter::OnLoad)
   const */

void facebook::react::DCDFastImageViewEventEmitter::onLoad
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78 [16];
  void *local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78[0] = 8;
  local_78[5] = 0;
  local_78[1] = 0x6c;
  local_78[2] = 0x6f;
  local_78[3] = 0x61;
  local_78[4] = 100;
  local_60 = &PTR_FUN_00988a00;
                    /* try { // try from 007ca6a8 to 007ca6b7 has its CatchHandler @ 007ca714 */
  local_58 = param_1;
  uStack_50 = param_2;
  local_40 = &local_60;
  ::facebook::react::EventEmitter::dispatchEvent(param_3,local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_007ca6e4;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_007ca6e4:
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ca774  facebook::react::DCDFastImageViewEventEmitter::onLoadEnd =====

/* facebook::react::DCDFastImageViewEventEmitter::onLoadEnd(facebook::react::DCDFastImageViewEventEmitter::OnLoadEnd)
   const */

void facebook::react::DCDFastImageViewEventEmitter::onLoadEnd(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78 [16];
  void *local_68;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78[0] = 0xe;
  local_78[1] = 0x6c;
  local_78[2] = 0x6f;
  local_78[3] = 0x61;
  local_78[4] = 100;
  local_78[5] = 0x45;
  local_78[6] = 0x6e;
  local_78[7] = 100;
  local_78[8] = 0;
  local_60[0] = &PTR_FUN_00988a80;
                    /* try { // try from 007ca7c8 to 007ca7d7 has its CatchHandler @ 007ca834 */
  local_40 = local_60;
  ::facebook::react::EventEmitter::dispatchEvent(param_1,local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_007ca804;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_007ca804:
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ca894  facebook::react::FastestListEventEmitter::onLayout =====

/* facebook::react::FastestListEventEmitter::onLayout(facebook::react::FastestListEventEmitter::OnLayout)
   const */

void facebook::react::FastestListEventEmitter::onLayout
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78 [16];
  void *local_68;
  undefined **local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78[0] = 0xc;
  local_78[7] = 0;
  local_78[1] = 0x6c;
  local_78[2] = 0x61;
  local_78[3] = 0x79;
  local_78[4] = 0x6f;
  local_78[5] = 0x75;
  local_78[6] = 0x74;
  local_60 = &PTR_FUN_00988b00;
                    /* try { // try from 007ca8ec to 007ca8fb has its CatchHandler @ 007ca958 */
  local_58 = param_1;
  uStack_54 = param_2;
  local_50 = param_3;
  uStack_4c = param_4;
  local_40 = &local_60;
  ::facebook::react::EventEmitter::dispatchEvent(param_5,local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_007ca928;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_007ca928:
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ca9b8  facebook::react::FastestListEventEmitter::onScroll =====

/* facebook::react::FastestListEventEmitter::onScroll(facebook::react::FastestListEventEmitter::OnScroll)
   const */

void __thiscall
facebook::react::FastestListEventEmitter::onScroll(FastestListEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte local_88 [16];
  void *local_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_88[0] = 0xc;
  local_88[1] = 0x73;
  local_88[2] = 99;
  local_88[3] = 0x72;
  local_88[4] = 0x6f;
  local_88[5] = 0x6c;
  local_88[6] = 0x6c;
  local_88[7] = 0;
                    /* try { // try from 007caa00 to 007caa07 has its CatchHandler @ 007caadc */
  local_50 = (long *)operator_new(0x30);
  lVar5 = param_2[1];
  lVar4 = *param_2;
  lVar7 = param_2[3];
  lVar6 = param_2[2];
  *local_50 = (long)&PTR_FUN_00988b80;
  lVar3 = param_2[4];
  local_50[2] = lVar5;
  local_50[1] = lVar4;
  local_50[4] = lVar7;
  local_50[3] = lVar6;
  local_50[5] = lVar3;
                    /* try { // try from 007caa2c to 007caa43 has its CatchHandler @ 007caaa4 */
  ::facebook::react::EventEmitter::dispatchEvent(this,local_88,local_70,2);
  if (local_50 == local_70) {
    lVar3 = 4;
    plVar2 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007caa70;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007caa70:
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cab0c  facebook::react::FastestListEventEmitter::onScrollBeginDrag =====

/* facebook::react::FastestListEventEmitter::onScrollBeginDrag(facebook::react::FastestListEventEmitter::OnScrollBeginDrag)
   const */

void __thiscall
facebook::react::FastestListEventEmitter::onScrollBeginDrag
          (FastestListEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte local_88;
  char local_87 [7];
  char cStack_80;
  char acStack_7f [7];
  undefined1 local_78;
  undefined7 uStack_77;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_88 = 0x1e;
  local_87 = s_scrollB_0036e666;
  cStack_80 = s_eginDrag_0036e66d[0];
  acStack_7f = (char  [7])s_eginDrag_0036e66d._1_7_;
  local_78 = 0;
                    /* try { // try from 007cab58 to 007cab5f has its CatchHandler @ 007cac34 */
  local_50 = (long *)operator_new(0x30);
  lVar5 = param_2[1];
  lVar4 = *param_2;
  lVar7 = param_2[3];
  lVar6 = param_2[2];
  *local_50 = (long)&PTR_FUN_00988c00;
  lVar3 = param_2[4];
  local_50[2] = lVar5;
  local_50[1] = lVar4;
  local_50[4] = lVar7;
  local_50[3] = lVar6;
  local_50[5] = lVar3;
                    /* try { // try from 007cab84 to 007cab9b has its CatchHandler @ 007cabfc */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_88,local_70,2);
  if (local_50 == local_70) {
    lVar3 = 4;
    plVar2 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007cabc8;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007cabc8:
  if ((local_88 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_77,local_78));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cac64  facebook::react::FastestListEventEmitter::onScrollEndDrag =====

/* facebook::react::FastestListEventEmitter::onScrollEndDrag(facebook::react::FastestListEventEmitter::OnScrollEndDrag)
   const */

void __thiscall
facebook::react::FastestListEventEmitter::onScrollEndDrag
          (FastestListEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte local_88;
  char local_87 [5];
  char acStack_82 [3];
  char acStack_7f [5];
  undefined1 local_7a;
  void *local_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_88 = 0x1a;
  local_87 = s_scrol_0036ec84;
  acStack_82 = (char  [3])s_lEndDrag_0036ec89._0_3_;
  acStack_7f = (char  [5])s_lEndDrag_0036ec89._3_5_;
  local_7a = 0;
                    /* try { // try from 007cacb0 to 007cacb7 has its CatchHandler @ 007cad8c */
  local_50 = (long *)operator_new(0x30);
  lVar5 = param_2[1];
  lVar4 = *param_2;
  lVar7 = param_2[3];
  lVar6 = param_2[2];
  *local_50 = (long)&PTR_FUN_00988c80;
  lVar3 = param_2[4];
  local_50[2] = lVar5;
  local_50[1] = lVar4;
  local_50[4] = lVar7;
  local_50[3] = lVar6;
  local_50[5] = lVar3;
                    /* try { // try from 007cacdc to 007cacf3 has its CatchHandler @ 007cad54 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_88,local_70,2);
  if (local_50 == local_70) {
    lVar3 = 4;
    plVar2 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007cad20;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007cad20:
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cadbc  facebook::react::FastestListEventEmitter::onVisibleItemsChanged =====

/* facebook::react::FastestListEventEmitter::onVisibleItemsChanged(facebook::react::FastestListEventEmitter::OnVisibleItemsChanged)
   const */

void __thiscall
facebook::react::FastestListEventEmitter::onVisibleItemsChanged
          (FastestListEventEmitter *this,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  byte local_a8;
  char local_a7 [8];
  undefined7 uStack_9f;
  undefined4 uStack_98;
  uint uStack_94;
  undefined7 local_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_a8 = 0x26;
  lVar4 = param_2[2];
  uVar1 = *(undefined1 *)param_2;
  uStack_9f = (undefined7)s_visibleItemsChanged_00365c8d._8_8_;
  uStack_98 = CONCAT31(0x646567,SUB81(s_visibleItemsChanged_00365c8d._8_8_,7));
  local_a7 = (char  [8])s_visibleItemsChanged_00365c8d._0_8_;
  uStack_94 = uStack_94 & 0xffffff00;
  local_90 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uStack_89 = (undefined1)param_2[1];
  uStack_88 = (undefined7)((ulong)param_2[1] >> 8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 007cae2c to 007cae33 has its CatchHandler @ 007caf14 */
  local_60 = (long *)operator_new(0x30);
  *local_60 = (long)&PTR_FUN_00988d00;
  lVar6 = param_2[4];
  lVar5 = param_2[3];
  *(undefined1 *)(local_60 + 1) = uVar1;
  *(ulong *)((long)local_60 + 9) = CONCAT17(uStack_89,local_90);
  local_60[2] = CONCAT71(uStack_88,uStack_89);
  local_60[3] = lVar4;
  local_60[5] = lVar6;
  local_60[4] = lVar5;
                    /* try { // try from 007cae60 to 007cae77 has its CatchHandler @ 007caedc */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_a8,local_80,2);
  if (local_60 == local_80) {
    lVar4 = 4;
    plVar3 = local_80;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_007caea4;
    lVar4 = 5;
    plVar3 = local_60;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007caea4:
  if ((local_a8 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_94,uStack_98));
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007caf50  facebook::react::FastestListEventEmitter::onUnexpectedItemSize =====

/* facebook::react::FastestListEventEmitter::onUnexpectedItemSize(facebook::react::FastestListEventEmitter::OnUnexpectedItemSize)
   const */

void __thiscall
facebook::react::FastestListEventEmitter::onUnexpectedItemSize
          (FastestListEventEmitter *this,undefined8 *param_2)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined7 uStack_6f;
  char cStack_68;
  undefined2 uStack_67;
  undefined1 uStack_65;
  undefined4 uStack_64;
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x24;
  uStack_67 = 0x657a;
  local_48 = *(undefined4 *)(param_2 + 2);
  uStack_6f = (undefined7)s_unexpectedItemSize_003669fb._8_8_;
  cStack_68 = SUB81(s_unexpectedItemSize_003669fb._8_8_,7);
  local_77 = (char  [8])s_unexpectedItemSize_003669fb._0_8_;
  uStack_50 = param_2[1];
  local_58 = *param_2;
  uStack_65 = 0;
  local_60 = &PTR_FUN_00988d80;
                    /* try { // try from 007cafb4 to 007cafc3 has its CatchHandler @ 007cb020 */
  local_40 = &local_60;
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_007caff0;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_007caff0:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,cStack_68))));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cb080  facebook::react::PassthroughTouchViewEventEmitter::onTouchDown =====

/* facebook::react::PassthroughTouchViewEventEmitter::onTouchDown(facebook::react::PassthroughTouchViewEventEmitter::OnTouchDown)
   const */

void facebook::react::PassthroughTouchViewEventEmitter::onTouchDown(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  void *local_68;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x12;
  local_6f = 0x6e;
  local_77 = (char  [8])s_touchDown_0036df79._0_8_;
  local_60[0] = &PTR_FUN_00988e00;
                    /* try { // try from 007cb0d0 to 007cb0df has its CatchHandler @ 007cb13c */
  local_40 = local_60;
  ::facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_007cb10c;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_007cb10c:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cb19c  facebook::react::DCDPortalViewEventEmitter::onPortalViewLoaded =====

/* facebook::react::DCDPortalViewEventEmitter::onPortalViewLoaded(facebook::react::DCDPortalViewEventEmitter::OnPortalViewLoaded)
   const */

void __thiscall
facebook::react::DCDPortalViewEventEmitter::onPortalViewLoaded
          (undefined8 param_1,DCDPortalViewEventEmitter *this)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined7 uStack_6f;
  char cStack_68;
  undefined1 uStack_67;
  undefined6 uStack_66;
  undefined **local_60;
  undefined8 local_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x20;
  uStack_6f = (undefined7)s_portalViewLoaded_0036df83._8_8_;
  cStack_68 = SUB81(s_portalViewLoaded_0036df83._8_8_,7);
  local_77 = (char  [8])s_portalViewLoaded_0036df83._0_8_;
  uStack_67 = 0;
  local_60 = &PTR_FUN_00988e80;
                    /* try { // try from 007cb1ec to 007cb1fb has its CatchHandler @ 007cb258 */
  local_58 = param_1;
  local_40 = &local_60;
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_007cb228;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_007cb228:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_66,CONCAT11(uStack_67,cStack_68)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cb2b8  facebook::react::DCDQRScannerEventEmitter::onQRCodeFound =====

/* facebook::react::DCDQRScannerEventEmitter::onQRCodeFound(facebook::react::DCDQRScannerEventEmitter::OnQRCodeFound)
   const */

void __thiscall
facebook::react::DCDQRScannerEventEmitter::onQRCodeFound
          (DCDQRScannerEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte local_78;
  undefined7 local_77;
  char cStack_70;
  undefined3 uStack_6f;
  undefined1 local_6c;
  void *local_68;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar7 = param_2[1];
  lVar5 = *param_2;
  local_78 = 0x16;
  lVar3 = param_2[2];
  lVar8 = param_2[4];
  lVar6 = param_2[3];
  lVar4 = param_2[5];
  local_6c = 0;
  local_77 = (undefined7)s_qRCodeFound_00366e72._0_8_;
  _cStack_70 = CONCAT31(0x646e75,SUB81(s_qRCodeFound_00366e72._0_8_,7));
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007cb330 to 007cb337 has its CatchHandler @ 007cb428 */
  local_40 = (long *)operator_new(0x38);
  *local_40 = (long)&PTR_FUN_00988f00;
  local_40[2] = lVar7;
  local_40[1] = lVar5;
  local_40[3] = lVar3;
  local_40[5] = lVar8;
  local_40[4] = lVar6;
  local_40[6] = lVar4;
                    /* try { // try from 007cb37c to 007cb393 has its CatchHandler @ 007cb3f0 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007cb3c0;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007cb3c0:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cb460  FUN_007cb460 =====

void FUN_007cb460(byte *param_1)

{
  if ((param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 007cb4a4  facebook::react::SelectActionComponentViewEventEmitter::onTap =====

/* facebook::react::SelectActionComponentViewEventEmitter::onTap(facebook::react::SelectActionComponentViewEventEmitter::OnTap)
   const */

void facebook::react::SelectActionComponentViewEventEmitter::onTap(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78 [16];
  void *local_68;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78[0] = 6;
  local_78[1] = 0x74;
  local_78[2] = 0x61;
  local_78[3] = 0x70;
  local_78[4] = 0;
  local_60[0] = &PTR_FUN_00988f80;
                    /* try { // try from 007cb4e8 to 007cb4f7 has its CatchHandler @ 007cb554 */
  local_40 = local_60;
  ::facebook::react::EventEmitter::dispatchEvent(param_1,local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_007cb524;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_007cb524:
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cb5b4  facebook::react::StickerPickerRowViewEventEmitter::onPressSticker =====

/* facebook::react::StickerPickerRowViewEventEmitter::onPressSticker(facebook::react::StickerPickerRowViewEventEmitter::OnPressSticker)
   const */

void __thiscall
facebook::react::StickerPickerRowViewEventEmitter::onPressSticker
          (StickerPickerRowViewEventEmitter *this,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  byte local_98;
  char local_97 [8];
  undefined4 local_8f;
  undefined1 local_8b;
  void *local_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_98 = 0x18;
  uVar1 = *(undefined1 *)param_2;
  local_8f = 0x72656b63;
  local_97 = (char  [8])s_pressSticker_00368cf0._0_8_;
  lVar4 = param_2[2];
  local_8b = 0;
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uStack_79 = (undefined1)param_2[1];
  uStack_78 = (undefined7)((ulong)param_2[1] >> 8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 007cb61c to 007cb623 has its CatchHandler @ 007cb6f8 */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_00989000;
  *(undefined1 *)(local_50 + 1) = uVar1;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar4;
                    /* try { // try from 007cb648 to 007cb65f has its CatchHandler @ 007cb6c0 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_98,local_70,2);
  if (local_50 == local_70) {
    lVar4 = 4;
    plVar3 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007cb68c;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007cb68c:
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cb734  facebook::react::StickerPickerRowViewEventEmitter::onLongPressSticker =====

/* facebook::react::StickerPickerRowViewEventEmitter::onLongPressSticker(facebook::react::StickerPickerRowViewEventEmitter::OnLongPressSticker)
   const */

void __thiscall
facebook::react::StickerPickerRowViewEventEmitter::onLongPressSticker
          (StickerPickerRowViewEventEmitter *this,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  byte local_98;
  char local_97 [8];
  undefined7 uStack_8f;
  char cStack_88;
  undefined1 uStack_87;
  undefined6 uStack_86;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar2 = *(undefined1 *)param_2;
  local_98 = 0x20;
  uStack_8f = (undefined7)s_longPressSticker_00369d4c._8_8_;
  cStack_88 = SUB81(s_longPressSticker_00369d4c._8_8_,7);
  local_97 = (char  [8])s_longPressSticker_00369d4c._0_8_;
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uVar1 = param_2[1];
  lVar5 = param_2[2];
  uStack_87 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uStack_79 = (undefined1)uVar1;
  uStack_78 = (undefined7)((ulong)uVar1 >> 8);
  *param_2 = 0;
                    /* try { // try from 007cb790 to 007cb797 has its CatchHandler @ 007cb86c */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_00989080;
  *(undefined1 *)(local_50 + 1) = uVar2;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar5;
                    /* try { // try from 007cb7bc to 007cb7d3 has its CatchHandler @ 007cb834 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_98,local_70,2);
  if (local_50 == local_70) {
    lVar5 = 4;
    plVar4 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007cb800;
    lVar5 = 5;
    plVar4 = local_50;
  }
  (**(code **)(*plVar4 + lVar5 * 8))();
LAB_007cb800:
  if ((local_98 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_86,CONCAT11(uStack_87,cStack_88)));
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cb8a8  facebook::react::DCDTTIMeasurementViewEventEmitter::onMeasurement =====

/* facebook::react::DCDTTIMeasurementViewEventEmitter::onMeasurement(facebook::react::DCDTTIMeasurementViewEventEmitter::OnMeasurement)
   const */

void __thiscall
facebook::react::DCDTTIMeasurementViewEventEmitter::onMeasurement
          (undefined8 param_1,DCDTTIMeasurementViewEventEmitter *this)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  undefined7 local_77;
  char cStack_70;
  undefined3 uStack_6f;
  undefined1 local_6c;
  void *local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x16;
  local_6c = 0;
  local_77 = (undefined7)s_measurement_0036d920._0_8_;
  _cStack_70 = CONCAT31(0x746e65,SUB81(s_measurement_0036d920._0_8_,7));
  local_60 = &PTR_FUN_00989100;
                    /* try { // try from 007cb904 to 007cb913 has its CatchHandler @ 007cb970 */
  local_58 = param_1;
  local_40 = &local_60;
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_007cb940;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_007cb940:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cb9d0  facebook::react::TextDisplayComponentViewEventEmitter::onTapLink =====

/* facebook::react::TextDisplayComponentViewEventEmitter::onTapLink(facebook::react::TextDisplayComponentViewEventEmitter::OnTapLink)
   const */

void __thiscall
facebook::react::TextDisplayComponentViewEventEmitter::onTapLink
          (TextDisplayComponentViewEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  byte local_d8 [16];
  void *local_c8;
  ulong local_c0;
  long lStack_b8;
  void *local_b0;
  dynamic adStack_a8 [56];
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_d8[0] = 0xe;
  lStack_b8 = param_2[1];
  local_c0 = *param_2;
  local_d8[8] = 0;
  local_d8[1] = 0x74;
  local_d8[2] = 0x61;
  local_d8[3] = 0x70;
  local_d8[4] = 0x4c;
  local_d8[5] = 0x69;
  local_d8[6] = 0x6e;
  local_d8[7] = 0x6b;
  local_b0 = (void *)param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  folly::dynamic::dynamic(adStack_a8,(dynamic *)(param_2 + 3));
  local_50 = (long *)0x0;
                    /* try { // try from 007cba40 to 007cba47 has its CatchHandler @ 007cbb48 */
  plVar2 = (long *)operator_new(0x50);
  *plVar2 = (long)&PTR_FUN_00989180;
  plVar2[2] = lStack_b8;
  plVar2[1] = local_c0;
  plVar2[3] = (long)local_b0;
  local_c0 = 0;
  lStack_b8 = 0;
  local_b0 = (void *)0x0;
  folly::dynamic::dynamic((dynamic *)(plVar2 + 4),adStack_a8);
                    /* try { // try from 007cba80 to 007cba97 has its CatchHandler @ 007cbb10 */
  local_50 = plVar2;
  ::facebook::react::EventEmitter::dispatchEvent(this,local_d8,local_70,2);
  if (local_50 == local_70) {
    lVar3 = 4;
    plVar2 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007cbac4;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007cbac4:
  folly::dynamic::folly::dynamic::destroy(adStack_a8);
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  if ((local_d8[0] & 1) != 0) {
    operator_delete(local_c8);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cbb80  FUN_007cbb80 =====

void FUN_007cbb80(byte *param_1)

{
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x18);
  if ((*param_1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 007cbbbc  facebook::react::TextDisplayComponentViewEventEmitter::onLongPressLink =====

/* facebook::react::TextDisplayComponentViewEventEmitter::onLongPressLink(facebook::react::TextDisplayComponentViewEventEmitter::OnLongPressLink)
   const */

void __thiscall
facebook::react::TextDisplayComponentViewEventEmitter::onLongPressLink
          (TextDisplayComponentViewEventEmitter *this,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  byte local_98;
  char local_97 [5];
  char acStack_92 [3];
  char acStack_8f [5];
  undefined1 local_8a;
  void *local_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *(undefined1 *)param_2;
  local_98 = 0x1a;
  local_97 = s_longP_00367f42;
  acStack_92 = (char  [3])s_ressLink_00367f47._0_3_;
  acStack_8f = (char  [5])s_ressLink_00367f47._3_5_;
  lVar4 = param_2[2];
  local_8a = 0;
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uStack_79 = (undefined1)param_2[1];
  uStack_78 = (undefined7)((ulong)param_2[1] >> 8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 007cbc20 to 007cbc27 has its CatchHandler @ 007cbcfc */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_00989200;
  *(undefined1 *)(local_50 + 1) = uVar1;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar4;
                    /* try { // try from 007cbc4c to 007cbc63 has its CatchHandler @ 007cbcc4 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_98,local_70,2);
  if (local_50 == local_70) {
    lVar4 = 4;
    plVar3 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007cbc90;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007cbc90:
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cbd38  facebook::react::TextDisplayComponentViewEventEmitter::onTapAttachmentLink =====

/* facebook::react::TextDisplayComponentViewEventEmitter::onTapAttachmentLink(facebook::react::TextDisplayComponentViewEventEmitter::OnTapAttachmentLink)
   const */

void __thiscall
facebook::react::TextDisplayComponentViewEventEmitter::onTapAttachmentLink
          (TextDisplayComponentViewEventEmitter *this,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  byte local_98;
  char local_97 [8];
  undefined7 uStack_8f;
  char cStack_88;
  undefined2 uStack_87;
  undefined5 uStack_85;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar2 = *(undefined1 *)param_2;
  uStack_87 = 0x6b;
  local_98 = 0x22;
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uVar1 = param_2[1];
  lVar5 = param_2[2];
  uStack_8f = (undefined7)s_tapAttachmentLink_00366e2b._8_8_;
  cStack_88 = SUB81(s_tapAttachmentLink_00366e2b._8_8_,7);
  local_97 = (char  [8])s_tapAttachmentLink_00366e2b._0_8_;
  param_2[1] = 0;
  param_2[2] = 0;
  uStack_79 = (undefined1)uVar1;
  uStack_78 = (undefined7)((ulong)uVar1 >> 8);
  *param_2 = 0;
                    /* try { // try from 007cbd98 to 007cbd9f has its CatchHandler @ 007cbe74 */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_00989280;
  *(undefined1 *)(local_50 + 1) = uVar2;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar5;
                    /* try { // try from 007cbdc4 to 007cbddb has its CatchHandler @ 007cbe3c */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_98,local_70,2);
  if (local_50 == local_70) {
    lVar5 = 4;
    plVar4 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007cbe08;
    lVar5 = 5;
    plVar4 = local_50;
  }
  (**(code **)(*plVar4 + lVar5 * 8))();
LAB_007cbe08:
  if ((local_98 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_85,CONCAT21(uStack_87,cStack_88)));
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cbeb0  facebook::react::TextDisplayComponentViewEventEmitter::onLongPressAttachmentLink =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::TextDisplayComponentViewEventEmitter::onLongPressAttachmentLink(facebook::react::TextDisplayComponentViewEventEmitter::OnLongPressAttachmentLink)
   const */

void __thiscall
facebook::react::TextDisplayComponentViewEventEmitter::onLongPressAttachmentLink
          (TextDisplayComponentViewEventEmitter *this,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong local_90;
  undefined8 uStack_88;
  char *local_80;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = (char *)operator_new(0x20);
  uVar4 = s_longPressAttach_0036f39d._0_8_;
  uVar2 = CONCAT17(s_mentLink_0036f3ac[0],s_longPressAttach_0036f39d._8_7_);
  uVar3 = CONCAT71(s_mentLink_0036f3ac._1_7_,s_mentLink_0036f3ac[0]);
  local_80[0x17] = '\0';
  *(undefined8 *)(local_80 + 8) = uVar2;
  *(undefined8 *)local_80 = uVar4;
  uStack_88 = _UNK_00372d28;
  local_90 = _s___00372d20;
  *(undefined8 *)(local_80 + 0xf) = uVar3;
  lVar6 = param_2[2];
  lVar10 = param_2[1];
  lVar8 = *param_2;
  lVar7 = param_2[5];
  lVar11 = param_2[4];
  lVar9 = param_2[3];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_50 = (long *)0x0;
                    /* try { // try from 007cbf3c to 007cbf43 has its CatchHandler @ 007cc038 */
  local_50 = (long *)operator_new(0x38);
  *local_50 = (long)&PTR_FUN_00989300;
  local_50[2] = lVar10;
  local_50[1] = lVar8;
  local_50[3] = lVar6;
  local_50[5] = lVar11;
  local_50[4] = lVar9;
  local_50[6] = lVar7;
                    /* try { // try from 007cbf88 to 007cbf9f has its CatchHandler @ 007cc000 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_90,local_70,2);
  if (local_50 == local_70) {
    lVar6 = 4;
    plVar5 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007cbfcc;
    lVar6 = 5;
    plVar5 = local_50;
  }
  (**(code **)(*plVar5 + lVar6 * 8))();
LAB_007cbfcc:
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cc070  FUN_007cc070 =====

void FUN_007cc070(byte *param_1)

{
  if ((param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 007cc0b4  facebook::react::TextDisplayComponentViewEventEmitter::onTapMention =====

/* facebook::react::TextDisplayComponentViewEventEmitter::onTapMention(facebook::react::TextDisplayComponentViewEventEmitter::OnTapMention)
   const */

void __thiscall
facebook::react::TextDisplayComponentViewEventEmitter::onTapMention
          (TextDisplayComponentViewEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  undefined1 local_6d;
  void *local_68;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_6f = 0x6e6f;
  lVar11 = param_2[1];
  lVar7 = *param_2;
  lVar3 = param_2[2];
  local_78 = 0x14;
  lVar12 = param_2[4];
  lVar8 = param_2[3];
  lVar4 = param_2[5];
  lVar13 = param_2[7];
  lVar9 = param_2[6];
  lVar5 = param_2[8];
  lVar14 = param_2[10];
  lVar10 = param_2[9];
  lVar6 = param_2[0xb];
  local_77 = (char  [8])s_tapMention_0036d168._0_8_;
  local_6d = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007cc154 to 007cc15b has its CatchHandler @ 007cc278 */
  local_40 = (long *)operator_new(0x68);
  *local_40 = (long)&PTR_FUN_00989380;
  local_40[2] = lVar11;
  local_40[1] = lVar7;
  local_40[3] = lVar3;
  local_40[5] = lVar12;
  local_40[4] = lVar8;
  local_40[6] = lVar4;
  local_40[8] = lVar13;
  local_40[7] = lVar9;
  local_40[9] = lVar5;
  local_40[0xc] = lVar6;
  local_40[0xb] = lVar14;
  local_40[10] = lVar10;
                    /* try { // try from 007cc1cc to 007cc1e3 has its CatchHandler @ 007cc240 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007cc210;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007cc210:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cc2b0  FUN_007cc2b0 =====

void FUN_007cc2b0(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x48] & 1) == 0) {
    bVar1 = param_1[0x30];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x58));
    bVar1 = param_1[0x30];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 007cc32c  facebook::react::TextDisplayComponentViewEventEmitter::onTapTimestamp =====

/* facebook::react::TextDisplayComponentViewEventEmitter::onTapTimestamp(facebook::react::TextDisplayComponentViewEventEmitter::OnTapTimestamp)
   const */

void __thiscall
facebook::react::TextDisplayComponentViewEventEmitter::onTapTimestamp
          (TextDisplayComponentViewEventEmitter *this,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  byte local_98;
  char local_97 [8];
  undefined4 local_8f;
  undefined1 local_8b;
  void *local_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_98 = 0x18;
  uVar1 = *(undefined1 *)param_2;
  local_8f = 0x706d6174;
  local_97 = (char  [8])s_tapTimestamp_00364f53._0_8_;
  lVar4 = param_2[2];
  local_8b = 0;
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uStack_79 = (undefined1)param_2[1];
  uStack_78 = (undefined7)((ulong)param_2[1] >> 8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 007cc394 to 007cc39b has its CatchHandler @ 007cc470 */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_00989400;
  *(undefined1 *)(local_50 + 1) = uVar1;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar4;
                    /* try { // try from 007cc3c0 to 007cc3d7 has its CatchHandler @ 007cc438 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_98,local_70,2);
  if (local_50 == local_70) {
    lVar4 = 4;
    plVar3 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007cc404;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007cc404:
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cc4ac  facebook::react::TextDisplayComponentViewEventEmitter::onTapInlineCode =====

/* facebook::react::TextDisplayComponentViewEventEmitter::onTapInlineCode(facebook::react::TextDisplayComponentViewEventEmitter::OnTapInlineCode)
   const */

void __thiscall
facebook::react::TextDisplayComponentViewEventEmitter::onTapInlineCode
          (TextDisplayComponentViewEventEmitter *this,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  byte local_98;
  char local_97 [5];
  char acStack_92 [3];
  char acStack_8f [5];
  undefined1 local_8a;
  void *local_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *(undefined1 *)param_2;
  local_98 = 0x1a;
  local_97 = s_tapIn_0036b872;
  acStack_92 = (char  [3])s_lineCode_0036b877._0_3_;
  acStack_8f = (char  [5])s_lineCode_0036b877._3_5_;
  lVar4 = param_2[2];
  local_8a = 0;
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uStack_79 = (undefined1)param_2[1];
  uStack_78 = (undefined7)((ulong)param_2[1] >> 8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 007cc510 to 007cc517 has its CatchHandler @ 007cc5ec */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_00989480;
  *(undefined1 *)(local_50 + 1) = uVar1;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar4;
                    /* try { // try from 007cc53c to 007cc553 has its CatchHandler @ 007cc5b4 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_98,local_70,2);
  if (local_50 == local_70) {
    lVar4 = 4;
    plVar3 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007cc580;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007cc580:
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cc628  facebook::react::TextDisplayComponentViewEventEmitter::onTapEmoji =====

/* facebook::react::TextDisplayComponentViewEventEmitter::onTapEmoji(facebook::react::TextDisplayComponentViewEventEmitter::OnTapEmoji)
   const */

void __thiscall
facebook::react::TextDisplayComponentViewEventEmitter::onTapEmoji
          (TextDisplayComponentViewEventEmitter *this,dynamic *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  byte local_b8 [16];
  void *local_a8;
  dynamic adStack_a0 [48];
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_b8[0] = 0x10;
  local_b8[9] = 0;
  local_b8[1] = 0x74;
  local_b8[2] = 0x61;
  local_b8[3] = 0x70;
  local_b8[4] = 0x45;
  local_b8[5] = 0x6d;
  local_b8[6] = 0x6f;
  local_b8[7] = 0x6a;
  local_b8[8] = 0x69;
  folly::dynamic::dynamic(adStack_a0,param_2);
  local_50 = (long *)0x0;
                    /* try { // try from 007cc678 to 007cc67f has its CatchHandler @ 007cc754 */
  plVar2 = (long *)operator_new(0x38);
  *plVar2 = (long)&PTR_FUN_00989500;
  folly::dynamic::dynamic((dynamic *)(plVar2 + 1),adStack_a0);
                    /* try { // try from 007cc69c to 007cc6b3 has its CatchHandler @ 007cc71c */
  local_50 = plVar2;
  ::facebook::react::EventEmitter::dispatchEvent(this,local_b8,local_70,2);
  if (local_50 == local_70) {
    lVar3 = 4;
    plVar2 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007cc6e0;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007cc6e0:
  folly::dynamic::folly::dynamic::destroy(adStack_a0);
  if ((local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cc78c  facebook::react::DCDVideoRendererEventEmitter::onSize =====

/* facebook::react::DCDVideoRendererEventEmitter::onSize(facebook::react::DCDVideoRendererEventEmitter::OnSize)
   const */

void facebook::react::DCDVideoRendererEventEmitter::onSize
               (undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78 [16];
  void *local_68;
  undefined **local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78[0] = 8;
  local_78[5] = 0;
  local_78[1] = 0x73;
  local_78[2] = 0x69;
  local_78[3] = 0x7a;
  local_78[4] = 0x65;
  local_60 = &PTR_FUN_00989580;
                    /* try { // try from 007cc7d8 to 007cc7e7 has its CatchHandler @ 007cc844 */
  local_58 = param_1;
  uStack_54 = param_2;
  local_40 = &local_60;
  ::facebook::react::EventEmitter::dispatchEvent(param_3,local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_007cc814;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_007cc814:
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cc8a4  facebook::react::DCDVideoRendererEventEmitter::onReady =====

/* facebook::react::DCDVideoRendererEventEmitter::onReady(facebook::react::DCDVideoRendererEventEmitter::OnReady)
   const */

void facebook::react::DCDVideoRendererEventEmitter::onReady(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78 [16];
  void *local_68;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78[0] = 10;
  local_78[1] = 0x72;
  local_78[2] = 0x65;
  local_78[3] = 0x61;
  local_78[4] = 100;
  local_78[5] = 0x79;
  local_78[6] = 0;
  local_60[0] = &PTR_FUN_00989600;
                    /* try { // try from 007cc8f0 to 007cc8ff has its CatchHandler @ 007cc95c */
  local_40 = local_60;
  ::facebook::react::EventEmitter::dispatchEvent(param_1,local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_007cc92c;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_007cc92c:
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cc9bc  facebook::react::DCDZoomLayoutAndroidEventEmitter::onZoomChanged =====

/* facebook::react::DCDZoomLayoutAndroidEventEmitter::onZoomChanged(facebook::react::DCDZoomLayoutAndroidEventEmitter::OnZoomChanged)
   const */

void __thiscall
facebook::react::DCDZoomLayoutAndroidEventEmitter::onZoomChanged
          (undefined4 param_1,DCDZoomLayoutAndroidEventEmitter *this)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  undefined7 local_77;
  char cStack_70;
  undefined3 uStack_6f;
  undefined1 local_6c;
  void *local_68;
  undefined **local_60;
  undefined4 local_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x16;
  local_6c = 0;
  local_77 = (undefined7)s_zoomChanged_00368642._0_8_;
  _cStack_70 = CONCAT31(0x646567,SUB81(s_zoomChanged_00368642._0_8_,7));
  local_60 = &PTR_FUN_00989680;
                    /* try { // try from 007cca18 to 007cca27 has its CatchHandler @ 007cca84 */
  local_58 = param_1;
  local_40 = &local_60;
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_007cca54;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_007cca54:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ccae4  FUN_007ccae4 =====

void FUN_007ccae4(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x78] & 1) == 0) {
    bVar1 = param_1[0x60];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x88));
    bVar1 = param_1[0x60];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x48];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x70));
    bVar1 = param_1[0x48];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x30];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x58));
    bVar1 = param_1[0x30];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 007ccb90  FUN_007ccb90 =====

void FUN_007ccb90(byte *param_1)

{
  if ((param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 007ccbd4  FUN_007ccbd4 =====

void FUN_007ccbd4(byte *param_1)

{
  if ((param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 007ccc18  FUN_007ccc18 =====

void FUN_007ccc18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00984c70;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007ccc38  FUN_007ccc38 =====

void FUN_007ccc38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00984c70;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007ccc78  FUN_007ccc78 =====

undefined8 * FUN_007ccc78(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00984c70;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007cccc4 to 007cccc7 has its CatchHandler @ 007cccd8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007cccec  FUN_007cccec =====

void FUN_007cccec(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00984c70;
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


// ===== 007ccd28  FUN_007ccd28 =====

void FUN_007ccd28(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007ccd3c  FUN_007ccd3c =====

void FUN_007ccd3c(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007ccd70  FUN_007ccd70 =====

void FUN_007ccd70(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007ccdb0 to 007ccdc7 has its CatchHandler @ 007ccdfc */
  FUN_007ccecc(&local_40,param_3,&DAT_00364f7a,param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cce34  FUN_007cce34 =====

long FUN_007cce34(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react30APNGDecorationViewEventEmitter6onLoadENS1_6OnLoadEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007cce50  FUN_007cce50 =====

pointer_____offset_0x10___ * FUN_007cce50(void)

{
  return &PTR_vtable_00984ce0;
}


// ===== 007cce5c  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init_copy_ctor_external =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::__init_copy_ctor_external(char const*, unsigned long) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
__init_copy_ctor_external
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  
  if (param_2 < 0x17) {
    __dest = this + 1;
    *this = SUB41((int)param_2 << 1,0);
  }
  else {
    if (0xffffffffffffffef < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_00782ae0(this);
    }
    __dest = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             operator_new((param_2 | 0xf) + 1);
    *(ulong *)(this + 8) = param_2;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x10) = __dest;
    *(ulong *)this = (param_2 | 0xf) + 2;
  }
  memmove(__dest,param_1,param_2 + 1);
  return;
}


// ===== 007ccecc  FUN_007ccecc =====

void FUN_007ccecc(undefined8 param_1,long *param_2,char *param_3,byte *param_4)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  size_t sVar4;
  undefined8 *local_60;
  undefined4 local_58 [2];
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  sVar4 = strlen(param_3);
  (**(code **)(*param_2 + 0x108))(&local_60,param_2,param_3,sVar4);
  uVar1 = *(ulong *)(param_4 + 8);
  pbVar2 = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    pbVar2 = param_4 + 1;
    uVar1 = (ulong)(*param_4 >> 1);
  }
                    /* try { // try from 007ccf48 to 007ccf53 has its CatchHandler @ 007ccfcc */
  (**(code **)(*param_2 + 0x110))(auStack_50,param_2,pbVar2,uVar1);
  local_58[0] = 6;
                    /* try { // try from 007ccf64 to 007ccf77 has its CatchHandler @ 007ccfbc */
  (**(code **)(*param_2 + 0x1b8))(param_2,param_1,&local_60,local_58);
  facebook::jsi::Value::~Value((Value *)local_58);
  if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)();
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cd000  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007cd004  FUN_007cd004 =====

void FUN_007cd004(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00984d00;
  return;
}


// ===== 007cd028  FUN_007cd028 =====

void FUN_007cd028(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00984d00;
  return;
}


// ===== 007cd038  FUN_007cd038 =====

void FUN_007cd038(void)

{
  return;
}


// ===== 007cd03c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007cd040  FUN_007cd040 =====

void FUN_007cd040(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 007cd0a8  FUN_007cd0a8 =====

long FUN_007cd0a8(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react34AccessibilityFocusViewEventEmitter20onAccessibilityFocusENS1_20OnAccessibilityFocusEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007cd0c4  FUN_007cd0c4 =====

pointer_____offset_0x10___ * FUN_007cd0c4(void)

{
  return &PTR_vtable_00984d60;
}


// ===== 007cd0d0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007cd0d4  FUN_007cd0d4 =====

void FUN_007cd0d4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00984d80;
  return;
}


// ===== 007cd0f8  FUN_007cd0f8 =====

void FUN_007cd0f8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00984d80;
  return;
}


// ===== 007cd108  FUN_007cd108 =====

void FUN_007cd108(void)

{
  return;
}


// ===== 007cd10c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007cd110  FUN_007cd110 =====

void FUN_007cd110(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 007cd178  FUN_007cd178 =====

long FUN_007cd178(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react34AccessibilityFocusViewEventEmitter19onAccessibilityBlurENS1_19OnAccessibilityBlurEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007cd194  FUN_007cd194 =====

pointer_____offset_0x10___ * FUN_007cd194(void)

{
  return &PTR_vtable_00984de0;
}


// ===== 007cd1a0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007cd1a4  FUN_007cd1a4 =====

void FUN_007cd1a4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00984e00;
  puVar1[1] = uVar2;
  return;
}


// ===== 007cd1d8  FUN_007cd1d8 =====

void FUN_007cd1d8(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00984e00;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return;
}


// ===== 007cd1f0  FUN_007cd1f0 =====

void FUN_007cd1f0(void)

{
  return;
}


// ===== 007cd1f4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007cd1f8  FUN_007cd1f8 =====

void FUN_007cd1f8(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007cd238 to 007cd267 has its CatchHandler @ 007cd29c */
  FUN_007cd2fc(&local_40,param_3,"width",param_2 + 8);
  FUN_007cd2fc(&local_40,param_3,"height",param_2 + 0xc);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cd2d4  FUN_007cd2d4 =====

long FUN_007cd2d4(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react24DCDChatInputEventEmitter19onChangeContentSizeENS1_19OnChangeContentSizeEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007cd2f0  FUN_007cd2f0 =====

pointer_____offset_0x10___ * FUN_007cd2f0(void)

{
  return &PTR_vtable_00984e60;
}


// ===== 007cd2fc  FUN_007cd2fc =====

void FUN_007cd2fc(undefined8 param_1,long *param_2,char *param_3,int *param_4)

{
  long lVar1;
  size_t sVar2;
  undefined8 *local_60;
  undefined4 local_58 [2];
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  sVar2 = strlen(param_3);
  (**(code **)(*param_2 + 0x108))(&local_60,param_2,param_3,sVar2);
  local_58[0] = 3;
  local_50 = (double)*param_4;
                    /* try { // try from 007cd370 to 007cd383 has its CatchHandler @ 007cd3c8 */
  (**(code **)(*param_2 + 0x1b8))(param_2,param_1,&local_60,local_58);
  facebook::jsi::Value::~Value((Value *)local_58);
  if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cd404  FUN_007cd404 =====

void FUN_007cd404(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00984e80;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007cd424  FUN_007cd424 =====

void FUN_007cd424(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00984e80;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007cd464  FUN_007cd464 =====

undefined8 * FUN_007cd464(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00984e80;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007cd4b0 to 007cd4b3 has its CatchHandler @ 007cd4c4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007cd4d8  FUN_007cd4d8 =====

void FUN_007cd4d8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00984e80;
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


// ===== 007cd514  FUN_007cd514 =====

void FUN_007cd514(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007cd528  FUN_007cd528 =====

void FUN_007cd528(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007cd55c  FUN_007cd55c =====

void FUN_007cd55c(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007cd59c to 007cd5b3 has its CatchHandler @ 007cd5e8 */
  FUN_007ccecc(&local_40,param_3,&DAT_003697cb,param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cd620  FUN_007cd620 =====

long FUN_007cd620(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react24DCDChatInputEventEmitter9onEndBlurENS1_9OnEndBlurEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007cd63c  FUN_007cd63c =====

pointer_____offset_0x10___ * FUN_007cd63c(void)

{
  return &PTR_vtable_00984ee0;
}


// ===== 007cd648  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007cd64c  FUN_007cd64c =====

void FUN_007cd64c(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)operator_new(0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_00984f00;
  puVar2[1] = uVar3;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  return;
}


// ===== 007cd688  FUN_007cd688 =====

void FUN_007cd688(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_00984f00;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}


// ===== 007cd6a8  FUN_007cd6a8 =====

void FUN_007cd6a8(void)

{
  return;
}


// ===== 007cd6ac  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007cd6b0  FUN_007cd6b0 =====

void FUN_007cd6b0(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007cd6f0 to 007cd737 has its CatchHandler @ 007cd76c */
  FUN_007cd2fc(&local_40,param_3,"start",param_2 + 8);
  FUN_007cd2fc(&local_40,param_3,&DAT_0036ec92,param_2 + 0xc);
  FUN_007cd2fc(&local_40,param_3,"target",param_2 + 0x10);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cd7a4  FUN_007cd7a4 =====

long FUN_007cd7a4(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react24DCDChatInputEventEmitter12onBeginFocusENS1_12OnBeginFocusEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007cd7c0  FUN_007cd7c0 =====

pointer_____offset_0x10___ * FUN_007cd7c0(void)

{
  return &PTR_vtable_00984f60;
}


// ===== 007cd7cc  FUN_007cd7cc =====

void FUN_007cd7cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00984f80;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}


// ===== 007cd81c  FUN_007cd81c =====

void FUN_007cd81c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00984f80;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007cd868  FUN_007cd868 =====

undefined8 * FUN_007cd868(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x40);
  bVar1 = *(byte *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00984f80;
  puVar2[1] = uVar3;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = uVar4;
    puVar2[4] = uVar3;
  }
  else {
                    /* try { // try from 007cd8b8 to 007cd8bf has its CatchHandler @ 007cd914 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 2),*(char **)(param_1 + 0x20),*(ulong *)(param_1 + 0x18));
  }
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = uVar4;
    puVar2[7] = uVar3;
  }
  else {
                    /* try { // try from 007cd8e4 to 007cd8eb has its CatchHandler @ 007cd8fc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 5),*(char **)(param_1 + 0x38),*(ulong *)(param_1 + 0x30));
  }
  return puVar2;
}


// ===== 007cd928  FUN_007cd928 =====

void FUN_007cd928(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00984f80;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    param_2[4] = *(undefined8 *)(param_1 + 0x20);
    param_2[3] = uVar2;
    param_2[2] = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 2),*(char **)(param_1 + 0x20),*(ulong *)(param_1 + 0x18));
  }
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    param_2[7] = *(undefined8 *)(param_1 + 0x38);
    param_2[6] = uVar2;
    param_2[5] = uVar1;
  }
  else {
                    /* try { // try from 007cd9a0 to 007cd9a7 has its CatchHandler @ 007cd9b4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 5),*(char **)(param_1 + 0x38),*(ulong *)(param_1 + 0x30));
  }
  return;
}


// ===== 007cd9d0  FUN_007cd9d0 =====

void FUN_007cd9d0(long param_1)

{
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x38));
  }
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x20));
  return;
}


// ===== 007cda14  FUN_007cda14 =====

void FUN_007cda14(void *param_1)

{
  if ((*(byte *)((long)param_1 + 0x28) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x38));
  }
  if ((*(byte *)((long)param_1 + 0x10) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x20));
  }
  operator_delete(param_1);
  return;
}


// ===== 007cda54  FUN_007cda54 =====

void FUN_007cda54(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007cda94 to 007cdaf3 has its CatchHandler @ 007cdb28 */
  FUN_007cd2fc(&local_40,param_3,"start",param_2 + 8);
  FUN_007cd2fc(&local_40,param_3,&DAT_0036ec92,param_2 + 0xc);
  FUN_007ccecc(&local_40,param_3,&DAT_003697cb,param_2 + 0x10);
  FUN_007ccecc(&local_40,param_3,"editId",param_2 + 0x28);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cdb60  FUN_007cdb60 =====

long FUN_007cdb60(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react24DCDChatInputEventEmitter23onSelectionOrTextChangeENS1_23OnSelectionOrTextChangeEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007cdb7c  FUN_007cdb7c =====

pointer_____offset_0x10___ * FUN_007cdb7c(void)

{
  return &PTR_vtable_00984fe0;
}


// ===== 007cdb88  FUN_007cdb88 =====

void FUN_007cdb88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985000;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007cdbd8  FUN_007cdbd8 =====

void FUN_007cdbd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985000;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007cdc24  FUN_007cdc24 =====

undefined8 * FUN_007cdc24(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00985000;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007cdc78 to 007cdc7f has its CatchHandler @ 007cdcd8 */
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
                    /* try { // try from 007cdca4 to 007cdcab has its CatchHandler @ 007cdcc0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007cdcec  FUN_007cdcec =====

void FUN_007cdcec(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00985000;
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
                    /* try { // try from 007cdd64 to 007cdd6b has its CatchHandler @ 007cdd7c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007cdd98  FUN_007cdd98 =====

void FUN_007cdd98(long param_1)

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


// ===== 007cdddc  FUN_007cdddc =====

void FUN_007cdddc(void *param_1)

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


// ===== 007cde1c  FUN_007cde1c =====

void FUN_007cde1c(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007cde5c to 007cde8b has its CatchHandler @ 007cdec0 */
  FUN_007ccecc(&local_40,param_3,&DAT_003697cb,param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"requestId",param_2 + 0x20);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cdef8  FUN_007cdef8 =====

long FUN_007cdef8(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react24DCDChatInputEventEmitter13onTextFlushedENS1_13OnTextFlushedEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007cdf14  FUN_007cdf14 =====

pointer_____offset_0x10___ * FUN_007cdf14(void)

{
  return &PTR_vtable_00985060;
}


// ===== 007cdf20  FUN_007cdf20 =====

void FUN_007cdf20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985080;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007cdf70  FUN_007cdf70 =====

void FUN_007cdf70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985080;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007cdfbc  FUN_007cdfbc =====

undefined8 * FUN_007cdfbc(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x48);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00985080;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007ce010 to 007ce017 has its CatchHandler @ 007ce078 */
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
                    /* try { // try from 007ce03c to 007ce043 has its CatchHandler @ 007ce060 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar2[8] = *(undefined8 *)(param_1 + 0x40);
  puVar2[7] = uVar3;
  return puVar2;
}


// ===== 007ce08c  FUN_007ce08c =====

void FUN_007ce08c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00985080;
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
                    /* try { // try from 007ce104 to 007ce10b has its CatchHandler @ 007ce124 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  param_2[8] = *(undefined8 *)(param_1 + 0x40);
  param_2[7] = uVar1;
  return;
}


// ===== 007ce140  FUN_007ce140 =====

void FUN_007ce140(long param_1)

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


// ===== 007ce184  FUN_007ce184 =====

void FUN_007ce184(void *param_1)

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


// ===== 007ce1c4  FUN_007ce1c4 =====

void FUN_007ce1c4(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007ce204 to 007ce263 has its CatchHandler @ 007ce298 */
  FUN_007ccecc(&local_40,param_3,&DAT_00364f7a,param_2 + 8);
  FUN_007ccecc(&local_40,param_3,&DAT_0036e67d,param_2 + 0x20);
  FUN_007ce2f8(&local_40,param_3,"width",param_2 + 0x38);
  FUN_007ce2f8(&local_40,param_3,"height",param_2 + 0x40);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ce2d0  FUN_007ce2d0 =====

long FUN_007ce2d0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react24DCDChatInputEventEmitter12onPasteImageENS1_12OnPasteImageEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007ce2ec  FUN_007ce2ec =====

pointer_____offset_0x10___ * FUN_007ce2ec(void)

{
  return &PTR_vtable_009850e0;
}


// ===== 007ce2f8  FUN_007ce2f8 =====

void FUN_007ce2f8(undefined8 param_1,long *param_2,char *param_3,undefined8 *param_4)

{
  long lVar1;
  size_t sVar2;
  undefined8 *local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  sVar2 = strlen(param_3);
  (**(code **)(*param_2 + 0x108))(&local_60,param_2,param_3,sVar2);
  local_50 = *param_4;
  local_58[0] = 3;
                    /* try { // try from 007ce368 to 007ce37b has its CatchHandler @ 007ce3c0 */
  (**(code **)(*param_2 + 0x1b8))(param_2,param_1,&local_60,local_58);
  facebook::jsi::Value::~Value((Value *)local_58);
  if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ce3fc  FUN_007ce3fc =====

void FUN_007ce3fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985100;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007ce41c  FUN_007ce41c =====

void FUN_007ce41c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985100;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007ce45c  FUN_007ce45c =====

undefined8 * FUN_007ce45c(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00985100;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007ce4a8 to 007ce4ab has its CatchHandler @ 007ce4bc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007ce4d0  FUN_007ce4d0 =====

void FUN_007ce4d0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00985100;
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


// ===== 007ce50c  FUN_007ce50c =====

void FUN_007ce50c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007ce520  FUN_007ce520 =====

void FUN_007ce520(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007ce554  FUN_007ce554 =====

void FUN_007ce554(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007ce594 to 007ce5ab has its CatchHandler @ 007ce5e0 */
  FUN_007ccecc(&local_40,param_3,&DAT_0036ec96,param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ce618  FUN_007ce618 =====

long FUN_007ce618(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react24DCDChatInputEventEmitter14onPasteCommandENS1_14OnPasteCommandEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007ce634  FUN_007ce634 =====

pointer_____offset_0x10___ * FUN_007ce634(void)

{
  return &PTR_vtable_00985160;
}


// ===== 007ce640  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007ce644  FUN_007ce644 =====

void FUN_007ce644(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00985180;
  return;
}


// ===== 007ce668  FUN_007ce668 =====

void FUN_007ce668(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00985180;
  return;
}


// ===== 007ce678  FUN_007ce678 =====

void FUN_007ce678(void)

{
  return;
}


// ===== 007ce67c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007ce680  FUN_007ce680 =====

void FUN_007ce680(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 007ce6e8  FUN_007ce6e8 =====

long FUN_007ce6e8(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react24DCDChatInputEventEmitter13onRequestSendENS1_13OnRequestSendEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007ce704  FUN_007ce704 =====

pointer_____offset_0x10___ * FUN_007ce704(void)

{
  return &PTR_vtable_009851e0;
}


// ===== 007ce710  FUN_007ce710 =====

void FUN_007ce710(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00985200;
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


// ===== 007ce780  FUN_007ce780 =====

void FUN_007ce780(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00985200;
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


// ===== 007ce7f0  FUN_007ce7f0 =====

undefined8 * FUN_007ce7f0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  *puVar1 = &PTR_FUN_00985200;
                    /* try { // try from 007ce818 to 007ce81f has its CatchHandler @ 007ce830 */
  FUN_007ceaa8(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007ce844  FUN_007ce844 =====

void FUN_007ce844(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00985200;
  FUN_007ceaa8(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007ce860  FUN_007ce860 =====

void FUN_007ce860(long param_1)

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


// ===== 007ce8c4  FUN_007ce8c4 =====

void FUN_007ce8c4(void *param_1)

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


// ===== 007ce928  FUN_007ce928 =====

void FUN_007ce928(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 007ce970 to 007ce97b has its CatchHandler @ 007cea2c */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007ce984 to 007ce9e3 has its CatchHandler @ 007cea34 */
  FUN_007ccecc(&local_48,param_3,"action",param_2 + 8);
  FUN_007ccecc(&local_48,param_3,"channelId",param_2 + 0x20);
  FUN_007ccecc(&local_48,param_3,"optionName",param_2 + 0x38);
  FUN_007ceb94(&local_50,param_3,"tapAction",&local_48);
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


// ===== 007cea80  FUN_007cea80 =====

long FUN_007cea80(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react24DCDChatInputEventEmitter11onTapActionENS1_11OnTapActionEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007cea9c  FUN_007cea9c =====

pointer_____offset_0x10___ * FUN_007cea9c(void)

{
  return &PTR_vtable_00985260;
}


// ===== 007ceaa8  FUN_007ceaa8 =====

void FUN_007ceaa8(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
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
                    /* try { // try from 007ceb08 to 007ceb0f has its CatchHandler @ 007ceb78 */
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
                    /* try { // try from 007ceb34 to 007ceb3b has its CatchHandler @ 007ceb48 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x30,*(char **)(param_2 + 0x40),*(ulong *)(param_2 + 0x38));
  }
  return;
}


// ===== 007ceb94  FUN_007ceb94 =====

void FUN_007ceb94(undefined8 param_1,long *param_2,char *param_3,undefined8 *param_4)

{
  long lVar1;
  size_t sVar2;
  undefined8 *local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  sVar2 = strlen(param_3);
  (**(code **)(*param_2 + 0x108))(&local_60,param_2,param_3,sVar2);
  local_58[0] = 7;
                    /* try { // try from 007cec00 to 007cec07 has its CatchHandler @ 007cec7c */
  local_50 = (**(code **)(*param_2 + 0x88))(param_2,*param_4);
                    /* try { // try from 007cec14 to 007cec27 has its CatchHandler @ 007cec6c */
  (**(code **)(*param_2 + 0x1b8))(param_2,param_1,&local_60,local_58);
  facebook::jsi::Value::~Value((Value *)local_58);
  if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cecb8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007cecbc  FUN_007cecbc =====

void FUN_007cecbc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x1c);
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *puVar1 = &PTR_FUN_00985280;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar5;
  *(undefined8 *)((long)puVar1 + 0x14) = uVar4;
  return;
}


// ===== 007cecfc  FUN_007cecfc =====

void FUN_007cecfc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_FUN_00985280;
  uVar1 = *(undefined8 *)(param_1 + 0x14);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)((long)param_2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)param_2 + 0x14) = uVar1;
  param_2[2] = uVar3;
  param_2[1] = uVar2;
  return;
}


// ===== 007ced1c  FUN_007ced1c =====

void FUN_007ced1c(void)

{
  return;
}


// ===== 007ced20  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007ced24  FUN_007ced24 =====

void FUN_007ced24(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007ced64 to 007cee83 has its CatchHandler @ 007ceeb8 */
  FUN_007cef18(&local_40,param_3,"isAtBottom",param_2 + 8);
  FUN_007cef18(&local_40,param_3,"isNearBottom",param_2 + 9);
  FUN_007cef18(&local_40,param_3,"isNearTop",param_2 + 10);
  FUN_007cef18(&local_40,param_3,"dragging",param_2 + 0xb);
  FUN_007cef18(&local_40,param_3,"decelerating",param_2 + 0xc);
  FUN_007cef18(&local_40,param_3,"shouldShowJumpToPresent",param_2 + 0xd);
  FUN_007cef18(&local_40,param_3,"isFirstMessageVisible",param_2 + 0xe);
  FUN_007cd2fc(&local_40,param_3,"changesetUpdateId",param_2 + 0x10);
  FUN_007cd2fc(&local_40,param_3,"firstVisibleMessageIndex",param_2 + 0x14);
  FUN_007cd2fc(&local_40,param_3,"lastVisibleMessageIndex",param_2 + 0x18);
  FUN_007cf01c(&local_40,param_3,"firstVisibleMessagePercentVisible",param_2 + 0x1c);
  FUN_007cf01c(&local_40,param_3,"lastVisibleMessagePercentVisible",param_2 + 0x20);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ceef0  FUN_007ceef0 =====

long FUN_007ceef0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter20onChatScrollPositionENS1_20OnChatScrollPositionEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007cef0c  FUN_007cef0c =====

pointer_____offset_0x10___ * FUN_007cef0c(void)

{
  return &PTR_vtable_009852e0;
}


// ===== 007cef18  FUN_007cef18 =====

void FUN_007cef18(undefined8 param_1,long *param_2,char *param_3,undefined1 *param_4)

{
  long lVar1;
  size_t sVar2;
  undefined8 *local_60;
  undefined4 local_58 [2];
  undefined1 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  sVar2 = strlen(param_3);
  (**(code **)(*param_2 + 0x108))(&local_60,param_2,param_3,sVar2);
  local_50 = *param_4;
  local_58[0] = 2;
                    /* try { // try from 007cef88 to 007cef9b has its CatchHandler @ 007cefe0 */
  (**(code **)(*param_2 + 0x1b8))(param_2,param_1,&local_60,local_58);
  facebook::jsi::Value::~Value((Value *)local_58);
  if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cf01c  FUN_007cf01c =====

void FUN_007cf01c(undefined8 param_1,long *param_2,char *param_3,float *param_4)

{
  long lVar1;
  size_t sVar2;
  undefined8 *local_60;
  undefined4 local_58 [2];
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  sVar2 = strlen(param_3);
  (**(code **)(*param_2 + 0x108))(&local_60,param_2,param_3,sVar2);
  local_58[0] = 3;
  local_50 = (double)*param_4;
                    /* try { // try from 007cf090 to 007cf0a3 has its CatchHandler @ 007cf0e8 */
  (**(code **)(*param_2 + 0x1b8))(param_2,param_1,&local_60,local_58);
  facebook::jsi::Value::~Value((Value *)local_58);
  if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cf124  FUN_007cf124 =====

void FUN_007cf124(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00985300;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0xc);
  }
  else {
    operator_delete((void *)param_1[0x12]);
    bVar1 = *(byte *)(param_1 + 0xc);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 5);
  }
  else {
    operator_delete((void *)param_1[0xe]);
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
    return;
  }
  return;
}


// ===== 007cf1ac  FUN_007cf1ac =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007cf1ac(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00985300;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0xc);
  }
  else {
    operator_delete((void *)param_1[0x12]);
    bVar1 = *(byte *)(param_1 + 0xc);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 5);
  }
  else {
    operator_delete((void *)param_1[0xe]);
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


// ===== 007cf234  FUN_007cf234 =====

undefined8 * FUN_007cf234(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x98);
  *puVar1 = &PTR_FUN_00985300;
                    /* try { // try from 007cf25c to 007cf263 has its CatchHandler @ 007cf274 */
  FUN_007cf640(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007cf288  FUN_007cf288 =====

void FUN_007cf288(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00985300;
  FUN_007cf640(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007cf2a4  FUN_007cf2a4 =====

void FUN_007cf2a4(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x60);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x90));
    bVar1 = *(byte *)(param_1 + 0x60);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x70));
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x38));
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 007cf320  FUN_007cf320 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007cf320(void *param_1)

{
  byte bVar1;
  
  if ((*(byte *)((long)param_1 + 0x80) & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 0x60);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x90));
    bVar1 = *(byte *)((long)param_1 + 0x60);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 0x28);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x70));
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


// ===== 007cf39c  FUN_007cf39c =====

void FUN_007cf39c(undefined4 *param_1,long param_2,long *param_3)

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
                    /* try { // try from 007cf3dc to 007cf423 has its CatchHandler @ 007cf5e4 */
  FUN_007ccecc(&local_50,param_3,&DAT_0036adfa,param_2 + 8);
  FUN_007cd2fc(&local_50,param_3,"index",param_2 + 0x20);
  FUN_007ccecc(&local_50,param_3,&DAT_0036e67d,param_2 + 0x28);
                    /* try { // try from 007cf42c to 007cf437 has its CatchHandler @ 007cf5c4 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = (undefined8 *)local_40;
                    /* try { // try from 007cf440 to 007cf49f has its CatchHandler @ 007cf5c8 */
  FUN_007cf01c(&local_48,param_3,&DAT_0036adfd,param_2 + 0x40);
  FUN_007cf01c(&local_48,param_3,&DAT_0036ecbd,param_2 + 0x44);
  FUN_007cf01c(&local_48,param_3,"width",param_2 + 0x48);
  FUN_007cf01c(&local_48,param_3,"height",param_2 + 0x4c);
  pcVar1 = "cover";
  if (*(int *)(param_2 + 0x50) != 1) {
    pcVar1 = "";
  }
  local_40 = "fill";
  if (*(int *)(param_2 + 0x50) != 0) {
    local_40 = pcVar1;
  }
                    /* try { // try from 007cf4d0 to 007cf4e7 has its CatchHandler @ 007cf5c0 */
  FUN_007cf7a0(&local_48,param_3,"resizeMode",&local_40);
                    /* try { // try from 007cf4e8 to 007cf4ff has its CatchHandler @ 007cf5c8 */
  FUN_007ceb94(&local_50,param_3,"layout",&local_48);
  if ((char *)local_48 != (char *)0x0) {
    (**(code **)*local_48)();
  }
                    /* try { // try from 007cf514 to 007cf58b has its CatchHandler @ 007cf5e4 */
  FUN_007cd2fc(&local_50,param_3,"portal",param_2 + 0x54);
  FUN_007cd2fc(&local_50,param_3,"embedIndex",param_2 + 0x58);
  FUN_007ccecc(&local_50,param_3,"componentId",param_2 + 0x60);
  FUN_007cd2fc(&local_50,param_3,"componentMediaIndex",param_2 + 0x78);
  FUN_007ccecc(&local_50,param_3,"embedId",param_2 + 0x80);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_50;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cf618  FUN_007cf618 =====

long FUN_007cf618(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter10onTapImageENS1_10OnTapImageEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007cf634  FUN_007cf634 =====

pointer_____offset_0x10___ * FUN_007cf634(void)

{
  return &PTR_vtable_00985360;
}


// ===== 007cf640  FUN_007cf640 =====

void FUN_007cf640(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,byte *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
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
                    /* try { // try from 007cf6a8 to 007cf6af has its CatchHandler @ 007cf784 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x20,*(char **)(param_2 + 0x30),*(ulong *)(param_2 + 0x28));
  }
  uVar1 = *(undefined8 *)(param_2 + 0x44);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_2 + 0x4c);
  *(undefined8 *)(param_1 + 0x44) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  if ((param_2[0x58] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    uVar1 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    *(undefined8 *)(param_1 + 0x58) = uVar1;
  }
  else {
                    /* try { // try from 007cf6e4 to 007cf6eb has its CatchHandler @ 007cf764 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x58,*(char **)(param_2 + 0x68),*(ulong *)(param_2 + 0x60));
  }
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  if ((param_2[0x78] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x80);
    uVar1 = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x80) = uVar2;
    *(undefined8 *)(param_1 + 0x78) = uVar1;
  }
  else {
                    /* try { // try from 007cf718 to 007cf71f has its CatchHandler @ 007cf72c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x78,*(char **)(param_2 + 0x88),*(ulong *)(param_2 + 0x80));
  }
  return;
}


// ===== 007cf7a0  FUN_007cf7a0 =====

void FUN_007cf7a0(undefined8 param_1,long *param_2,char *param_3,undefined8 *param_4)

{
  long lVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *local_60;
  undefined4 local_58 [2];
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  sVar2 = strlen(param_3);
  (**(code **)(*param_2 + 0x108))(&local_60,param_2,param_3,sVar2);
  uVar4 = *param_4;
                    /* try { // try from 007cf7fc to 007cf827 has its CatchHandler @ 007cf8a0 */
  uVar3 = __strlen_chk(uVar4,0xffffffffffffffff);
  (**(code **)(*param_2 + 0x108))(auStack_50,param_2,uVar4,uVar3);
  local_58[0] = 6;
                    /* try { // try from 007cf838 to 007cf84b has its CatchHandler @ 007cf890 */
  (**(code **)(*param_2 + 0x1b8))(param_2,param_1,&local_60,local_58);
  facebook::jsi::Value::~Value((Value *)local_58);
  if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007cf8d4  FUN_007cf8d4 =====

void FUN_007cf8d4(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00985380;
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


// ===== 007cf95c  FUN_007cf95c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007cf95c(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00985380;
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


// ===== 007cf9e4  FUN_007cf9e4 =====

undefined8 * FUN_007cf9e4(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x68);
  *puVar1 = &PTR_FUN_00985380;
                    /* try { // try from 007cfa0c to 007cfa13 has its CatchHandler @ 007cfa24 */
  FUN_007cfce4(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007cfa38  FUN_007cfa38 =====

void FUN_007cfa38(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00985380;
  FUN_007cfce4(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007cfa54  FUN_007cfa54 =====

void FUN_007cfa54(long param_1)

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


// ===== 007cfad0  FUN_007cfad0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007cfad0(void *param_1)

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


// ===== 007cfb4c  FUN_007cfb4c =====

void FUN_007cfb4c(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 007cfb94 to 007cfb9f has its CatchHandler @ 007cfc68 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007cfba8 to 007cfc1f has its CatchHandler @ 007cfc70 */
  FUN_007ccecc(&local_48,param_3,"guildId",param_2 + 8);
  FUN_007ccecc(&local_48,param_3,"channelId",param_2 + 0x20);
  FUN_007ccecc(&local_48,param_3,"messageId",param_2 + 0x38);
  FUN_007ccecc(&local_48,param_3,"originalLink",param_2 + 0x50);
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


// ===== 007cfcbc  FUN_007cfcbc =====

long FUN_007cfcbc(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter12onTapChannelENS1_12OnTapChannelEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007cfcd8  FUN_007cfcd8 =====

pointer_____offset_0x10___ * FUN_007cfcd8(void)

{
  return &PTR_vtable_009853e0;
}


// ===== 007cfce4  FUN_007cfce4 =====

void FUN_007cfce4(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
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
                    /* try { // try from 007cfd44 to 007cfd4b has its CatchHandler @ 007cfe08 */
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
                    /* try { // try from 007cfd70 to 007cfd77 has its CatchHandler @ 007cfde8 */
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
                    /* try { // try from 007cfd9c to 007cfda3 has its CatchHandler @ 007cfdb0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x48,*(char **)(param_2 + 0x58),*(ulong *)(param_2 + 0x50));
  }
  return;
}


// ===== 007cfe24  FUN_007cfe24 =====

void FUN_007cfe24(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00985400;
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


// ===== 007cfeac  FUN_007cfeac =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007cfeac(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00985400;
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


// ===== 007cff34  FUN_007cff34 =====

undefined8 * FUN_007cff34(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x68);
  *puVar1 = &PTR_FUN_00985400;
                    /* try { // try from 007cff5c to 007cff63 has its CatchHandler @ 007cff74 */
  FUN_007d0234(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007cff88  FUN_007cff88 =====

void FUN_007cff88(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00985400;
  FUN_007d0234(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007cffa4  FUN_007cffa4 =====

void FUN_007cffa4(long param_1)

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


// ===== 007d0020  FUN_007d0020 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007d0020(void *param_1)

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


// ===== 007d009c  FUN_007d009c =====

void FUN_007d009c(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 007d00e4 to 007d00ef has its CatchHandler @ 007d01b8 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007d00f8 to 007d016f has its CatchHandler @ 007d01c0 */
  FUN_007ccecc(&local_48,param_3,"guildId",param_2 + 8);
  FUN_007ccecc(&local_48,param_3,"channelId",param_2 + 0x20);
  FUN_007ccecc(&local_48,param_3,"messageId",param_2 + 0x38);
  FUN_007ccecc(&local_48,param_3,"originalLink",param_2 + 0x50);
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


// ===== 007d020c  FUN_007d020c =====

long FUN_007d020c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter18onLongPressChannelENS1_18OnLongPressChannelEE3$_0")
  {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d0228  FUN_007d0228 =====

pointer_____offset_0x10___ * FUN_007d0228(void)

{
  return &PTR_vtable_00985460;
}


// ===== 007d0234  FUN_007d0234 =====

void FUN_007d0234(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
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
                    /* try { // try from 007d0294 to 007d029b has its CatchHandler @ 007d0358 */
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
                    /* try { // try from 007d02c0 to 007d02c7 has its CatchHandler @ 007d0338 */
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
                    /* try { // try from 007d02ec to 007d02f3 has its CatchHandler @ 007d0300 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x48,*(char **)(param_2 + 0x58),*(ulong *)(param_2 + 0x50));
  }
  return;
}


// ===== 007d0374  FUN_007d0374 =====

void FUN_007d0374(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985480;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d0394  FUN_007d0394 =====

void FUN_007d0394(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985480;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d03d4  FUN_007d03d4 =====

undefined8 * FUN_007d03d4(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00985480;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d0420 to 007d0423 has its CatchHandler @ 007d0434 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007d0448  FUN_007d0448 =====

void FUN_007d0448(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00985480;
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


// ===== 007d0484  FUN_007d0484 =====

void FUN_007d0484(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007d0498  FUN_007d0498 =====

void FUN_007d0498(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007d04cc  FUN_007d04cc =====

void FUN_007d04cc(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 007d0514 to 007d051f has its CatchHandler @ 007d05a0 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007d0528 to 007d0557 has its CatchHandler @ 007d05a8 */
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


// ===== 007d05f4  FUN_007d05f4 =====

long FUN_007d05f4(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter19onTapAttachmentLinkENS1_19OnTapAttachmentLinkEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d0610  FUN_007d0610 =====

pointer_____offset_0x10___ * FUN_007d0610(void)

{
  return &PTR_vtable_009854e0;
}


// ===== 007d061c  FUN_007d061c =====

void FUN_007d061c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985500;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d066c  FUN_007d066c =====

void FUN_007d066c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985500;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d06b8  FUN_007d06b8 =====

undefined8 * FUN_007d06b8(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00985500;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d070c to 007d0713 has its CatchHandler @ 007d076c */
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
                    /* try { // try from 007d0738 to 007d073f has its CatchHandler @ 007d0754 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007d0780  FUN_007d0780 =====

void FUN_007d0780(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00985500;
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
                    /* try { // try from 007d07f8 to 007d07ff has its CatchHandler @ 007d0810 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007d082c  FUN_007d082c =====

void FUN_007d082c(long param_1)

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


// ===== 007d0870  FUN_007d0870 =====

void FUN_007d0870(void *param_1)

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


// ===== 007d08b0  FUN_007d08b0 =====

void FUN_007d08b0(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 007d08f8 to 007d0903 has its CatchHandler @ 007d099c */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007d090c to 007d0953 has its CatchHandler @ 007d09a4 */
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


// ===== 007d09f0  FUN_007d09f0 =====

long FUN_007d09f0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter25onLongPressAttachmentLinkENS1_25OnLongPressAttachmentLinkEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d0a0c  FUN_007d0a0c =====

pointer_____offset_0x10___ * FUN_007d0a0c(void)

{
  return &PTR_vtable_00985560;
}


// ===== 007d0a18  FUN_007d0a18 =====

void FUN_007d0a18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985580;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d0a68  FUN_007d0a68 =====

void FUN_007d0a68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985580;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d0ab4  FUN_007d0ab4 =====

undefined8 * FUN_007d0ab4(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00985580;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d0b08 to 007d0b0f has its CatchHandler @ 007d0b68 */
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
                    /* try { // try from 007d0b34 to 007d0b3b has its CatchHandler @ 007d0b50 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007d0b7c  FUN_007d0b7c =====

void FUN_007d0b7c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00985580;
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
                    /* try { // try from 007d0bf4 to 007d0bfb has its CatchHandler @ 007d0c0c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007d0c28  FUN_007d0c28 =====

void FUN_007d0c28(long param_1)

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


// ===== 007d0c6c  FUN_007d0c6c =====

void FUN_007d0c6c(void *param_1)

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


// ===== 007d0cac  FUN_007d0cac =====

void FUN_007d0cac(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 007d0cf4 to 007d0cff has its CatchHandler @ 007d0d98 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007d0d08 to 007d0d4f has its CatchHandler @ 007d0da0 */
  FUN_007ccecc(&local_48,param_3,"messageId",param_2 + 8);
  FUN_007ccecc(&local_48,param_3,"channelId",param_2 + 0x20);
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


// ===== 007d0dec  FUN_007d0dec =====

long FUN_007d0dec(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter9onTapCallENS1_9OnTapCallEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d0e08  FUN_007d0e08 =====

pointer_____offset_0x10___ * FUN_007d0e08(void)

{
  return &PTR_vtable_009855e0;
}


// ===== 007d0e14  FUN_007d0e14 =====

void FUN_007d0e14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985600;
  FUN_007ccae4(param_1 + 1);
  return;
}


// ===== 007d0e24  FUN_007d0e24 =====

void FUN_007d0e24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985600;
  FUN_007ccae4(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 007d0e54  FUN_007d0e54 =====

undefined8 * FUN_007d0e54(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x98);
  *puVar1 = &PTR_FUN_00985600;
                    /* try { // try from 007d0e7c to 007d0e83 has its CatchHandler @ 007d0e94 */
  FUN_007d1058(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007d0ea8  FUN_007d0ea8 =====

void FUN_007d0ea8(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00985600;
  FUN_007d1058(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007d0ec4  FUN_007d0ec4 =====

void FUN_007d0ec4(long param_1)

{
  FUN_007ccae4(param_1 + 8);
  return;
}


// ===== 007d0ecc  FUN_007d0ecc =====

void FUN_007d0ecc(void *param_1)

{
  FUN_007ccae4((long)param_1 + 8);
  operator_delete(param_1);
  return;
}


// ===== 007d0ef4  FUN_007d0ef4 =====

void FUN_007d0ef4(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d0f34 to 007d0fc3 has its CatchHandler @ 007d0ff8 */
  FUN_007ccecc(&local_40,param_3,"userId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"channelId",param_2 + 0x20);
  FUN_007ccecc(&local_40,param_3,"roleName",param_2 + 0x38);
  FUN_007ccecc(&local_40,param_3,"parsedUserId",param_2 + 0x50);
  FUN_007ccecc(&local_40,param_3,"roleId",param_2 + 0x68);
  FUN_007ccecc(&local_40,param_3,"guildId",param_2 + 0x80);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d1030  FUN_007d1030 =====

long FUN_007d1030(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter12onTapMentionENS1_12OnTapMentionEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d104c  FUN_007d104c =====

pointer_____offset_0x10___ * FUN_007d104c(void)

{
  return &PTR_vtable_00985660;
}


// ===== 007d1058  FUN_007d1058 =====

void FUN_007d1058(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
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
                    /* try { // try from 007d10b8 to 007d10bf has its CatchHandler @ 007d1224 */
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
                    /* try { // try from 007d10e4 to 007d10eb has its CatchHandler @ 007d1204 */
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
                    /* try { // try from 007d1110 to 007d1117 has its CatchHandler @ 007d11e4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x48,*(char **)(param_2 + 0x58),*(ulong *)(param_2 + 0x50));
  }
  if ((param_2[0x60] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x68);
    uVar1 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    *(undefined8 *)(param_1 + 0x60) = uVar1;
  }
  else {
                    /* try { // try from 007d113c to 007d1143 has its CatchHandler @ 007d11c4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x60,*(char **)(param_2 + 0x70),*(ulong *)(param_2 + 0x68));
  }
  if ((param_2[0x78] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x80);
    uVar1 = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x80) = uVar2;
    *(undefined8 *)(param_1 + 0x78) = uVar1;
  }
  else {
                    /* try { // try from 007d1168 to 007d116f has its CatchHandler @ 007d117c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x78,*(char **)(param_2 + 0x88),*(ulong *)(param_2 + 0x80));
  }
  return;
}


// ===== 007d1240  FUN_007d1240 =====

void FUN_007d1240(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00985680;
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


// ===== 007d12c8  FUN_007d12c8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007d12c8(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00985680;
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


// ===== 007d1350  FUN_007d1350 =====

undefined8 * FUN_007d1350(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x68);
  *puVar1 = &PTR_FUN_00985680;
                    /* try { // try from 007d1378 to 007d137f has its CatchHandler @ 007d1390 */
  FUN_007d15ec(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007d13a4  FUN_007d13a4 =====

void FUN_007d13a4(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00985680;
  FUN_007d15ec(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007d13c0  FUN_007d13c0 =====

void FUN_007d13c0(long param_1)

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


// ===== 007d143c  FUN_007d143c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007d143c(void *param_1)

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


// ===== 007d14b8  FUN_007d14b8 =====

void FUN_007d14b8(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d14f8 to 007d1557 has its CatchHandler @ 007d158c */
  FUN_007ccecc(&local_40,param_3,"channelId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"commandId",param_2 + 0x20);
  FUN_007ccecc(&local_40,param_3,"commandName",param_2 + 0x38);
  FUN_007ccecc(&local_40,param_3,"commandKey",param_2 + 0x50);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d15c4  FUN_007d15c4 =====

long FUN_007d15c4(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter19onTapCommandMentionENS1_19OnTapCommandMentionEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d15e0  FUN_007d15e0 =====

pointer_____offset_0x10___ * FUN_007d15e0(void)

{
  return &PTR_vtable_009856e0;
}


// ===== 007d15ec  FUN_007d15ec =====

void FUN_007d15ec(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
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
                    /* try { // try from 007d164c to 007d1653 has its CatchHandler @ 007d1710 */
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
                    /* try { // try from 007d1678 to 007d167f has its CatchHandler @ 007d16f0 */
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
                    /* try { // try from 007d16a4 to 007d16ab has its CatchHandler @ 007d16b8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x48,*(char **)(param_2 + 0x58),*(ulong *)(param_2 + 0x50));
  }
  return;
}


// ===== 007d172c  FUN_007d172c =====

void FUN_007d172c(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00985700;
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


// ===== 007d17b4  FUN_007d17b4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007d17b4(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00985700;
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


// ===== 007d183c  FUN_007d183c =====

undefined8 * FUN_007d183c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x68);
  *puVar1 = &PTR_FUN_00985700;
                    /* try { // try from 007d1864 to 007d186b has its CatchHandler @ 007d187c */
  FUN_007d1ad8(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007d1890  FUN_007d1890 =====

void FUN_007d1890(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00985700;
  FUN_007d1ad8(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007d18ac  FUN_007d18ac =====

void FUN_007d18ac(long param_1)

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


// ===== 007d1928  FUN_007d1928 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007d1928(void *param_1)

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


// ===== 007d19a4  FUN_007d19a4 =====

void FUN_007d19a4(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d19e4 to 007d1a43 has its CatchHandler @ 007d1a78 */
  FUN_007ccecc(&local_40,param_3,"channelId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"commandId",param_2 + 0x20);
  FUN_007ccecc(&local_40,param_3,"commandName",param_2 + 0x38);
  FUN_007ccecc(&local_40,param_3,"commandKey",param_2 + 0x50);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d1ab0  FUN_007d1ab0 =====

long FUN_007d1ab0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter25onLongPressCommandMentionENS1_25OnLongPressCommandMentionEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d1acc  FUN_007d1acc =====

pointer_____offset_0x10___ * FUN_007d1acc(void)

{
  return &PTR_vtable_00985760;
}


// ===== 007d1ad8  FUN_007d1ad8 =====

void FUN_007d1ad8(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
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
                    /* try { // try from 007d1b38 to 007d1b3f has its CatchHandler @ 007d1bfc */
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
                    /* try { // try from 007d1b64 to 007d1b6b has its CatchHandler @ 007d1bdc */
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
                    /* try { // try from 007d1b90 to 007d1b97 has its CatchHandler @ 007d1ba4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x48,*(char **)(param_2 + 0x58),*(ulong *)(param_2 + 0x50));
  }
  return;
}


// ===== 007d1c18  FUN_007d1c18 =====

void FUN_007d1c18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985780;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d1c68  FUN_007d1c68 =====

void FUN_007d1c68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985780;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d1cb4  FUN_007d1cb4 =====

undefined8 * FUN_007d1cb4(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00985780;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d1d08 to 007d1d0f has its CatchHandler @ 007d1d68 */
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
                    /* try { // try from 007d1d34 to 007d1d3b has its CatchHandler @ 007d1d50 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007d1d7c  FUN_007d1d7c =====

void FUN_007d1d7c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00985780;
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
                    /* try { // try from 007d1df4 to 007d1dfb has its CatchHandler @ 007d1e0c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007d1e28  FUN_007d1e28 =====

void FUN_007d1e28(long param_1)

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


// ===== 007d1e6c  FUN_007d1e6c =====

void FUN_007d1e6c(void *param_1)

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


// ===== 007d1eac  FUN_007d1eac =====

void FUN_007d1eac(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d1eec to 007d1f1b has its CatchHandler @ 007d1f50 */
  FUN_007ccecc(&local_40,param_3,"channelId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"gameId",param_2 + 0x20);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d1f88  FUN_007d1f88 =====

long FUN_007d1f88(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter16onTapGameMentionENS1_16OnTapGameMentionEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d1fa4  FUN_007d1fa4 =====

pointer_____offset_0x10___ * FUN_007d1fa4(void)

{
  return &PTR_vtable_009857e0;
}


// ===== 007d1fb0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007d1fb4  FUN_007d1fb4 =====

void FUN_007d1fb4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00985800;
  return;
}


// ===== 007d1fd8  FUN_007d1fd8 =====

void FUN_007d1fd8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00985800;
  return;
}


// ===== 007d1fe8  FUN_007d1fe8 =====

void FUN_007d1fe8(void)

{
  return;
}


// ===== 007d1fec  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007d1ff0  FUN_007d1ff0 =====

void FUN_007d1ff0(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 007d2058  FUN_007d2058 =====

long FUN_007d2058(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter9onTapLinkENS1_9OnTapLinkEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d2074  FUN_007d2074 =====

pointer_____offset_0x10___ * FUN_007d2074(void)

{
  return &PTR_vtable_00985860;
}


// ===== 007d2080  FUN_007d2080 =====

void FUN_007d2080(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985880;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d20a0  FUN_007d20a0 =====

void FUN_007d20a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985880;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d20e0  FUN_007d20e0 =====

undefined8 * FUN_007d20e0(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00985880;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d212c to 007d212f has its CatchHandler @ 007d2140 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007d2154  FUN_007d2154 =====

void FUN_007d2154(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00985880;
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


// ===== 007d2190  FUN_007d2190 =====

void FUN_007d2190(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007d21a4  FUN_007d21a4 =====

void FUN_007d21a4(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007d21d8  FUN_007d21d8 =====

void FUN_007d21d8(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d2218 to 007d222f has its CatchHandler @ 007d2264 */
  FUN_007ccecc(&local_40,param_3,&DAT_00364f7a,param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d229c  FUN_007d229c =====

long FUN_007d229c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter15onLongPressLinkENS1_15OnLongPressLinkEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d22b8  FUN_007d22b8 =====

pointer_____offset_0x10___ * FUN_007d22b8(void)

{
  return &PTR_vtable_009858e0;
}


// ===== 007d22c4  FUN_007d22c4 =====

void FUN_007d22c4(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00985900;
  if ((*(byte *)(param_1 + 0xd) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 9);
  }
  else {
    operator_delete((void *)param_1[0xf]);
    bVar1 = *(byte *)(param_1 + 9);
  }
  if ((bVar1 & 1) == 0) {
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
    return;
  }
  return;
}


// ===== 007d234c  FUN_007d234c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007d234c(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00985900;
  if ((*(byte *)(param_1 + 0xd) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 9);
  }
  else {
    operator_delete((void *)param_1[0xf]);
    bVar1 = *(byte *)(param_1 + 9);
  }
  if ((bVar1 & 1) == 0) {
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


// ===== 007d23d4  FUN_007d23d4 =====

undefined8 * FUN_007d23d4(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x80);
  *puVar1 = &PTR_FUN_00985900;
                    /* try { // try from 007d23fc to 007d2403 has its CatchHandler @ 007d2414 */
  FUN_007d27c4(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007d2428  FUN_007d2428 =====

void FUN_007d2428(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00985900;
  FUN_007d27c4(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007d2444  FUN_007d2444 =====

void FUN_007d2444(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x48);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x78));
    bVar1 = *(byte *)(param_1 + 0x48);
  }
  if ((bVar1 & 1) == 0) {
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
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 007d24c0  FUN_007d24c0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007d24c0(void *param_1)

{
  byte bVar1;
  
  if ((*(byte *)((long)param_1 + 0x68) & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 0x48);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x78));
    bVar1 = *(byte *)((long)param_1 + 0x48);
  }
  if ((bVar1 & 1) == 0) {
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


// ===== 007d253c  FUN_007d253c =====

void FUN_007d253c(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_58,param_3);
                    /* try { // try from 007d2584 to 007d258f has its CatchHandler @ 007d2704 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007d25a0 to 007d25ab has its CatchHandler @ 007d2700 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_50 = local_40;
                    /* try { // try from 007d25b4 to 007d2613 has its CatchHandler @ 007d2728 */
  FUN_007ccecc(&local_50,param_3,&DAT_0036adfa,param_2 + 8);
  FUN_007ccecc(&local_50,param_3,&DAT_0036dfa2,param_2 + 0x20);
  FUN_007cef18(&local_50,param_3,"animated",param_2 + 0x38);
  FUN_007ceb94(&local_48,param_3,"emoji",&local_50);
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)();
  }
                    /* try { // try from 007d2628 to 007d266f has its CatchHandler @ 007d2718 */
  FUN_007cef18(&local_48,param_3,&DAT_0036568f,param_2 + 0x40);
  FUN_007cef18(&local_48,param_3,"me_burst",param_2 + 0x41);
  FUN_007ceb94(&local_58,param_3,"reaction",&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
                    /* try { // try from 007d2684 to 007d26cb has its CatchHandler @ 007d2708 */
  FUN_007ccecc(&local_58,param_3,"messageId",param_2 + 0x48);
  FUN_007cef18(&local_58,param_3,"isBurst",param_2 + 0x60);
  FUN_007ccecc(&local_58,param_3,"location",param_2 + 0x68);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_58;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d279c  FUN_007d279c =====

long FUN_007d279c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter13onTapReactionENS1_13OnTapReactionEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d27b8  FUN_007d27b8 =====

pointer_____offset_0x10___ * FUN_007d27b8(void)

{
  return &PTR_vtable_00985960;
}


// ===== 007d27c4  FUN_007d27c4 =====

void FUN_007d27c4(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
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
                    /* try { // try from 007d2824 to 007d282b has its CatchHandler @ 007d28d4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x18,*(char **)(param_2 + 0x28),*(ulong *)(param_2 + 0x20));
  }
  param_1[0x30] =
       *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (param_2 + 0x30);
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_2 + 0x38);
  if ((param_2[0x40] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x48);
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    *(undefined8 *)(param_1 + 0x40) = uVar1;
  }
  else {
                    /* try { // try from 007d2860 to 007d2867 has its CatchHandler @ 007d28c0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x40,*(char **)(param_2 + 0x50),*(ulong *)(param_2 + 0x48));
  }
  param_1[0x58] =
       *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (param_2 + 0x58);
  if ((param_2[0x60] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x68);
    uVar1 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    *(undefined8 *)(param_1 + 0x60) = uVar1;
  }
  else {
                    /* try { // try from 007d2894 to 007d289b has its CatchHandler @ 007d28a8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x60,*(char **)(param_2 + 0x70),*(ulong *)(param_2 + 0x68));
  }
  return;
}


// ===== 007d28f0  FUN_007d28f0 =====

void FUN_007d28f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985980;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d2940  FUN_007d2940 =====

void FUN_007d2940(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985980;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d298c  FUN_007d298c =====

undefined8 * FUN_007d298c(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00985980;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d29e0 to 007d29e7 has its CatchHandler @ 007d2a40 */
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
                    /* try { // try from 007d2a0c to 007d2a13 has its CatchHandler @ 007d2a28 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007d2a54  FUN_007d2a54 =====

void FUN_007d2a54(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00985980;
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
                    /* try { // try from 007d2acc to 007d2ad3 has its CatchHandler @ 007d2ae4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007d2b00  FUN_007d2b00 =====

void FUN_007d2b00(long param_1)

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


// ===== 007d2b44  FUN_007d2b44 =====

void FUN_007d2b44(void *param_1)

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


// ===== 007d2b84  FUN_007d2b84 =====

void FUN_007d2b84(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d2bc4 to 007d2bf3 has its CatchHandler @ 007d2c28 */
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


// ===== 007d2c60  FUN_007d2c60 =====

long FUN_007d2c60(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter12onTapMessageENS1_12OnTapMessageEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d2c7c  FUN_007d2c7c =====

pointer_____offset_0x10___ * FUN_007d2c7c(void)

{
  return &PTR_vtable_009859e0;
}


// ===== 007d2c88  FUN_007d2c88 =====

void FUN_007d2c88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985a00;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d2cd8  FUN_007d2cd8 =====

void FUN_007d2cd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985a00;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d2d24  FUN_007d2d24 =====

undefined8 * FUN_007d2d24(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00985a00;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d2d78 to 007d2d7f has its CatchHandler @ 007d2dd8 */
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
                    /* try { // try from 007d2da4 to 007d2dab has its CatchHandler @ 007d2dc0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007d2dec  FUN_007d2dec =====

void FUN_007d2dec(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00985a00;
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
                    /* try { // try from 007d2e64 to 007d2e6b has its CatchHandler @ 007d2e7c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007d2e98  FUN_007d2e98 =====

void FUN_007d2e98(long param_1)

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


// ===== 007d2edc  FUN_007d2edc =====

void FUN_007d2edc(void *param_1)

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


// ===== 007d2f1c  FUN_007d2f1c =====

void FUN_007d2f1c(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d2f5c to 007d2f8b has its CatchHandler @ 007d2fc0 */
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


// ===== 007d2ff8  FUN_007d2ff8 =====

long FUN_007d2ff8(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter18onDoubleTapMessageENS1_18OnDoubleTapMessageEE3$_0")
  {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d3014  FUN_007d3014 =====

pointer_____offset_0x10___ * FUN_007d3014(void)

{
  return &PTR_vtable_00985a60;
}


// ===== 007d3020  FUN_007d3020 =====

void FUN_007d3020(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00985a80;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0xd);
  }
  else {
    operator_delete((void *)param_1[0x12]);
    bVar1 = *(byte *)(param_1 + 0xd);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 9);
  }
  else {
    operator_delete((void *)param_1[0xf]);
    bVar1 = *(byte *)(param_1 + 9);
  }
  if ((bVar1 & 1) == 0) {
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


// ===== 007d30c0  FUN_007d30c0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007d30c0(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00985a80;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0xd);
  }
  else {
    operator_delete((void *)param_1[0x12]);
    bVar1 = *(byte *)(param_1 + 0xd);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 9);
  }
  else {
    operator_delete((void *)param_1[0xf]);
    bVar1 = *(byte *)(param_1 + 9);
  }
  if ((bVar1 & 1) == 0) {
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


// ===== 007d3160  FUN_007d3160 =====

undefined8 * FUN_007d3160(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x98);
  *puVar1 = &PTR_FUN_00985a80;
                    /* try { // try from 007d3188 to 007d318f has its CatchHandler @ 007d31a0 */
  FUN_007d34a0(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007d31b4  FUN_007d31b4 =====

void FUN_007d31b4(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00985a80;
  FUN_007d34a0(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007d31d0  FUN_007d31d0 =====

void FUN_007d31d0(long param_1)

{
  FUN_007d3610(param_1 + 8);
  return;
}


// ===== 007d31d8  FUN_007d31d8 =====

void FUN_007d31d8(void *param_1)

{
  FUN_007d3610((long)param_1 + 8);
  operator_delete(param_1);
  return;
}


// ===== 007d3200  FUN_007d3200 =====

void FUN_007d3200(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_58,param_3);
                    /* try { // try from 007d3248 to 007d3253 has its CatchHandler @ 007d33e0 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 007d3264 to 007d326f has its CatchHandler @ 007d33dc */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_50 = local_40;
                    /* try { // try from 007d3278 to 007d32d7 has its CatchHandler @ 007d3404 */
  FUN_007ccecc(&local_50,param_3,&DAT_0036adfa,param_2 + 8);
  FUN_007ccecc(&local_50,param_3,&DAT_0036dfa2,param_2 + 0x20);
  FUN_007cef18(&local_50,param_3,"animated",param_2 + 0x38);
  FUN_007ceb94(&local_48,param_3,"emoji",&local_50);
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)();
  }
                    /* try { // try from 007d32ec to 007d3333 has its CatchHandler @ 007d33e4 */
  FUN_007cef18(&local_48,param_3,&DAT_0036568f,param_2 + 0x40);
  FUN_007cef18(&local_48,param_3,"me_burst",param_2 + 0x41);
  FUN_007ceb94(&local_58,param_3,"reaction",&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
                    /* try { // try from 007d3348 to 007d33a7 has its CatchHandler @ 007d33f4 */
  FUN_007ccecc(&local_58,param_3,"messageId",param_2 + 0x48);
  FUN_007cef18(&local_58,param_3,"isBurst",param_2 + 0x60);
  FUN_007ccecc(&local_58,param_3,"location",param_2 + 0x68);
  FUN_007ccecc(&local_58,param_3,"channelId",param_2 + 0x80);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_58;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d3478  FUN_007d3478 =====

long FUN_007d3478(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter19onLongPressReactionENS1_19OnLongPressReactionEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d3494  FUN_007d3494 =====

pointer_____offset_0x10___ * FUN_007d3494(void)

{
  return &PTR_vtable_00985ae0;
}


// ===== 007d34a0  FUN_007d34a0 =====

void FUN_007d34a0(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
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
                    /* try { // try from 007d3500 to 007d3507 has its CatchHandler @ 007d35f4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x18,*(char **)(param_2 + 0x28),*(ulong *)(param_2 + 0x20));
  }
  param_1[0x30] =
       *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (param_2 + 0x30);
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_2 + 0x38);
  if ((param_2[0x40] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x48);
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    *(undefined8 *)(param_1 + 0x40) = uVar1;
  }
  else {
                    /* try { // try from 007d353c to 007d3543 has its CatchHandler @ 007d35e0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x40,*(char **)(param_2 + 0x50),*(ulong *)(param_2 + 0x48));
  }
  param_1[0x58] =
       *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (param_2 + 0x58);
  if ((param_2[0x60] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x68);
    uVar1 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    *(undefined8 *)(param_1 + 0x60) = uVar1;
  }
  else {
                    /* try { // try from 007d3570 to 007d3577 has its CatchHandler @ 007d35c8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x60,*(char **)(param_2 + 0x70),*(ulong *)(param_2 + 0x68));
  }
  if ((param_2[0x78] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x80);
    uVar1 = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x80) = uVar2;
    *(undefined8 *)(param_1 + 0x78) = uVar1;
  }
  else {
                    /* try { // try from 007d359c to 007d35a3 has its CatchHandler @ 007d35b0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x78,*(char **)(param_2 + 0x88),*(ulong *)(param_2 + 0x80));
  }
  return;
}


// ===== 007d3610  FUN_007d3610 =====

void FUN_007d3610(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x78] & 1) == 0) {
    bVar1 = param_1[0x60];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x88));
    bVar1 = param_1[0x60];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x40];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x70));
    bVar1 = param_1[0x40];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x50));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 007d36a4  FUN_007d36a4 =====

void FUN_007d36a4(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00985b00;
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


// ===== 007d372c  FUN_007d372c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007d372c(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00985b00;
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


// ===== 007d37b4  FUN_007d37b4 =====

undefined8 * FUN_007d37b4(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x78);
  *puVar1 = &PTR_FUN_00985b00;
                    /* try { // try from 007d37dc to 007d37e3 has its CatchHandler @ 007d37f4 */
  FUN_007d3a80(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007d3808  FUN_007d3808 =====

void FUN_007d3808(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00985b00;
  FUN_007d3a80(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007d3824  FUN_007d3824 =====

void FUN_007d3824(long param_1)

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


// ===== 007d38a0  FUN_007d38a0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007d38a0(void *param_1)

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


// ===== 007d391c  FUN_007d391c =====

void FUN_007d391c(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d395c to 007d39eb has its CatchHandler @ 007d3a20 */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"channelId",param_2 + 0x20);
  FUN_007cd2fc(&local_40,param_3,"mediaIndex",param_2 + 0x38);
  FUN_007ccecc(&local_40,param_3,"mediaType",param_2 + 0x40);
  FUN_007ccecc(&local_40,param_3,"componentId",param_2 + 0x58);
  FUN_007cd2fc(&local_40,param_3,"componentMediaIndex",param_2 + 0x70);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d3a58  FUN_007d3a58 =====

long FUN_007d3a58(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter18onLongPressMessageENS1_18OnLongPressMessageEE3$_0")
  {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d3a74  FUN_007d3a74 =====

pointer_____offset_0x10___ * FUN_007d3a74(void)

{
  return &PTR_vtable_00985b60;
}


// ===== 007d3a80  FUN_007d3a80 =====

void FUN_007d3a80(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
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
                    /* try { // try from 007d3ae0 to 007d3ae7 has its CatchHandler @ 007d3bb4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x18,*(char **)(param_2 + 0x28),*(ulong *)(param_2 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  if ((param_2[0x38] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    *(undefined8 *)(param_1 + 0x38) = uVar1;
  }
  else {
                    /* try { // try from 007d3b14 to 007d3b1b has its CatchHandler @ 007d3b94 */
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
                    /* try { // try from 007d3b40 to 007d3b47 has its CatchHandler @ 007d3b5c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x50,*(char **)(param_2 + 0x60),*(ulong *)(param_2 + 0x58));
  }
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  return;
}


// ===== 007d3bd0  FUN_007d3bd0 =====

void FUN_007d3bd0(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00985b80;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
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
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d3c40  FUN_007d3c40 =====

void FUN_007d3c40(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_00985b80;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
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


// ===== 007d3cb0  FUN_007d3cb0 =====

undefined8 * FUN_007d3cb0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x58);
  *puVar1 = &PTR_FUN_00985b80;
                    /* try { // try from 007d3cd8 to 007d3cdf has its CatchHandler @ 007d3cf0 */
  FUN_007d3f1c(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 007d3d04  FUN_007d3d04 =====

void FUN_007d3d04(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00985b80;
  FUN_007d3f1c(param_2 + 1,param_1 + 8);
  return;
}


// ===== 007d3d20  FUN_007d3d20 =====

void FUN_007d3d20(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
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
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007d3d84  FUN_007d3d84 =====

void FUN_007d3d84(void *param_1)

{
  byte bVar1;
  
  if ((*(byte *)((long)param_1 + 0x40) & 1) == 0) {
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


// ===== 007d3de8  FUN_007d3de8 =====

void FUN_007d3de8(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d3e28 to 007d3e87 has its CatchHandler @ 007d3ebc */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"channelId",param_2 + 0x20);
  FUN_007cef18(&local_40,param_3,"triggerHaptic",param_2 + 0x38);
  FUN_007ccecc(&local_40,param_3,"location",param_2 + 0x40);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d3ef4  FUN_007d3ef4 =====

long FUN_007d3ef4(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter15onInitiateReplyENS1_15OnInitiateReplyEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d3f10  FUN_007d3f10 =====

pointer_____offset_0x10___ * FUN_007d3f10(void)

{
  return &PTR_vtable_00985be0;
}


// ===== 007d3f1c  FUN_007d3f1c =====

void FUN_007d3f1c(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
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
                    /* try { // try from 007d3f7c to 007d3f83 has its CatchHandler @ 007d3ff4 */
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
                    /* try { // try from 007d3fb0 to 007d3fb7 has its CatchHandler @ 007d3fc4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x38,*(char **)(param_2 + 0x48),*(ulong *)(param_2 + 0x40));
  }
  return;
}


// ===== 007d4010  FUN_007d4010 =====

void FUN_007d4010(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985c00;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d4060  FUN_007d4060 =====

void FUN_007d4060(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985c00;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d40ac  FUN_007d40ac =====

undefined8 * FUN_007d40ac(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00985c00;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d4100 to 007d4107 has its CatchHandler @ 007d4160 */
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
                    /* try { // try from 007d412c to 007d4133 has its CatchHandler @ 007d4148 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007d4174  FUN_007d4174 =====

void FUN_007d4174(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00985c00;
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
                    /* try { // try from 007d41ec to 007d41f3 has its CatchHandler @ 007d4204 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007d4220  FUN_007d4220 =====

void FUN_007d4220(long param_1)

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


// ===== 007d4264  FUN_007d4264 =====

void FUN_007d4264(void *param_1)

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


// ===== 007d42a4  FUN_007d42a4 =====

void FUN_007d42a4(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d42e4 to 007d4313 has its CatchHandler @ 007d4348 */
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


// ===== 007d4380  FUN_007d4380 =====

long FUN_007d4380(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter16onInitiateThreadENS1_16OnInitiateThreadEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d439c  FUN_007d439c =====

pointer_____offset_0x10___ * FUN_007d439c(void)

{
  return &PTR_vtable_00985c60;
}


// ===== 007d43a8  FUN_007d43a8 =====

void FUN_007d43a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985c80;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d43f8  FUN_007d43f8 =====

void FUN_007d43f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985c80;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d4444  FUN_007d4444 =====

undefined8 * FUN_007d4444(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00985c80;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d4498 to 007d449f has its CatchHandler @ 007d44f8 */
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
                    /* try { // try from 007d44c4 to 007d44cb has its CatchHandler @ 007d44e0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007d450c  FUN_007d450c =====

void FUN_007d450c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00985c80;
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
                    /* try { // try from 007d4584 to 007d458b has its CatchHandler @ 007d459c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007d45b8  FUN_007d45b8 =====

void FUN_007d45b8(long param_1)

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


// ===== 007d45fc  FUN_007d45fc =====

void FUN_007d45fc(void *param_1)

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


// ===== 007d463c  FUN_007d463c =====

void FUN_007d463c(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d467c to 007d46ab has its CatchHandler @ 007d46e0 */
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


// ===== 007d4718  FUN_007d4718 =====

long FUN_007d4718(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter14onInitiateEditENS1_14OnInitiateEditEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d4734  FUN_007d4734 =====

pointer_____offset_0x10___ * FUN_007d4734(void)

{
  return &PTR_vtable_00985ce0;
}


// ===== 007d4740  FUN_007d4740 =====

void FUN_007d4740(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985d00;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d4790  FUN_007d4790 =====

void FUN_007d4790(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985d00;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d47dc  FUN_007d47dc =====

undefined8 * FUN_007d47dc(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00985d00;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d4830 to 007d4837 has its CatchHandler @ 007d4890 */
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
                    /* try { // try from 007d485c to 007d4863 has its CatchHandler @ 007d4878 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007d48a4  FUN_007d48a4 =====

void FUN_007d48a4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00985d00;
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
                    /* try { // try from 007d491c to 007d4923 has its CatchHandler @ 007d4934 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007d4950  FUN_007d4950 =====

void FUN_007d4950(long param_1)

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


// ===== 007d4994  FUN_007d4994 =====

void FUN_007d4994(void *param_1)

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


// ===== 007d49d4  FUN_007d49d4 =====

void FUN_007d49d4(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d4a14 to 007d4a43 has its CatchHandler @ 007d4a78 */
  FUN_007ccecc(&local_40,param_3,&DAT_0036e67d,param_2 + 8);
  FUN_007ccecc(&local_40,param_3,"context",param_2 + 0x20);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d4ab0  FUN_007d4ab0 =====

long FUN_007d4ab0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter14onTapSeparatorENS1_14OnTapSeparatorEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d4acc  FUN_007d4acc =====

pointer_____offset_0x10___ * FUN_007d4acc(void)

{
  return &PTR_vtable_00985d60;
}


// ===== 007d4ad8  FUN_007d4ad8 =====

void FUN_007d4ad8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985d80;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d4af8  FUN_007d4af8 =====

void FUN_007d4af8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985d80;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d4b38  FUN_007d4b38 =====

undefined8 * FUN_007d4b38(long param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = (undefined8 *)operator_new(0x28);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar3 = &PTR_FUN_00985d80;
  if ((bVar1 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    puVar3[2] = *(undefined8 *)(param_1 + 0x10);
    puVar3[1] = uVar5;
    puVar3[3] = uVar4;
  }
  else {
                    /* try { // try from 007d4b84 to 007d4b87 has its CatchHandler @ 007d4ba8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar3 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  uVar2 = *(undefined2 *)(param_1 + 0x24);
  *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_1 + 0x20);
  *(undefined2 *)((long)puVar3 + 0x24) = uVar2;
  return puVar3;
}


// ===== 007d4bbc  FUN_007d4bbc =====

void FUN_007d4bbc(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_FUN_00985d80;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar3;
    param_2[1] = uVar2;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined2 *)((long)param_2 + 0x24) = *(undefined2 *)(param_1 + 0x24);
  *(undefined4 *)(param_2 + 4) = uVar1;
  return;
}


// ===== 007d4c24  FUN_007d4c24 =====

void FUN_007d4c24(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007d4c38  FUN_007d4c38 =====

void FUN_007d4c38(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007d4c6c  FUN_007d4c6c =====

void FUN_007d4c6c(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d4cac to 007d4d0b has its CatchHandler @ 007d4d40 */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  FUN_007cd2fc(&local_40,param_3,"index",param_2 + 0x20);
  FUN_007cef18(&local_40,param_3,"primary",param_2 + 0x24);
  FUN_007cef18(&local_40,param_3,"secondary",param_2 + 0x25);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d4d78  FUN_007d4d78 =====

long FUN_007d4d78(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter16onTapInviteEmbedENS1_16OnTapInviteEmbedEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d4d94  FUN_007d4d94 =====

pointer_____offset_0x10___ * FUN_007d4d94(void)

{
  return &PTR_vtable_00985de0;
}


// ===== 007d4da0  FUN_007d4da0 =====

void FUN_007d4da0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985e00;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d4dc0  FUN_007d4dc0 =====

void FUN_007d4dc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985e00;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d4e00  FUN_007d4e00 =====

undefined8 * FUN_007d4e00(long param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = (undefined8 *)operator_new(0x28);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar3 = &PTR_FUN_00985e00;
  if ((bVar1 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    puVar3[2] = *(undefined8 *)(param_1 + 0x10);
    puVar3[1] = uVar5;
    puVar3[3] = uVar4;
  }
  else {
                    /* try { // try from 007d4e4c to 007d4e4f has its CatchHandler @ 007d4e70 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar3 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  uVar2 = *(undefined2 *)(param_1 + 0x24);
  *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_1 + 0x20);
  *(undefined2 *)((long)puVar3 + 0x24) = uVar2;
  return puVar3;
}


// ===== 007d4e84  FUN_007d4e84 =====

void FUN_007d4e84(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_FUN_00985e00;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar3;
    param_2[1] = uVar2;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined2 *)((long)param_2 + 0x24) = *(undefined2 *)(param_1 + 0x24);
  *(undefined4 *)(param_2 + 4) = uVar1;
  return;
}


// ===== 007d4eec  FUN_007d4eec =====

void FUN_007d4eec(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007d4f00  FUN_007d4f00 =====

void FUN_007d4f00(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007d4f34  FUN_007d4f34 =====

void FUN_007d4f34(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d4f74 to 007d4fd3 has its CatchHandler @ 007d5008 */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  FUN_007cd2fc(&local_40,param_3,"index",param_2 + 0x20);
  FUN_007cef18(&local_40,param_3,"primary",param_2 + 0x24);
  FUN_007cef18(&local_40,param_3,"secondary",param_2 + 0x25);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d5040  FUN_007d5040 =====

long FUN_007d5040(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter22onTapInviteEmbedAcceptENS1_22OnTapInviteEmbedAcceptEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d505c  FUN_007d505c =====

pointer_____offset_0x10___ * FUN_007d505c(void)

{
  return &PTR_vtable_00985e60;
}


// ===== 007d5068  FUN_007d5068 =====

void FUN_007d5068(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985e80;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d50b8  FUN_007d50b8 =====

void FUN_007d50b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985e80;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d5104  FUN_007d5104 =====

undefined8 * FUN_007d5104(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00985e80;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d5158 to 007d515f has its CatchHandler @ 007d51b8 */
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
                    /* try { // try from 007d5184 to 007d518b has its CatchHandler @ 007d51a0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return puVar2;
}


// ===== 007d51cc  FUN_007d51cc =====

void FUN_007d51cc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00985e80;
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
                    /* try { // try from 007d5244 to 007d524b has its CatchHandler @ 007d525c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  return;
}


// ===== 007d5278  FUN_007d5278 =====

void FUN_007d5278(long param_1)

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


// ===== 007d52bc  FUN_007d52bc =====

void FUN_007d52bc(void *param_1)

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


// ===== 007d52fc  FUN_007d52fc =====

void FUN_007d52fc(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d533c to 007d536b has its CatchHandler @ 007d53a0 */
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


// ===== 007d53d8  FUN_007d53d8 =====

long FUN_007d53d8(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter17onTapJoinActivityENS1_17OnTapJoinActivityEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d53f4  FUN_007d53f4 =====

pointer_____offset_0x10___ * FUN_007d53f4(void)

{
  return &PTR_vtable_00985ee0;
}


// ===== 007d5400  FUN_007d5400 =====

void FUN_007d5400(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985f00;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 007d5420  FUN_007d5420 =====

void FUN_007d5420(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985f00;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d5460  FUN_007d5460 =====

undefined8 * FUN_007d5460(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00985f00;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 007d54ac to 007d54af has its CatchHandler @ 007d54c0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 007d54d4  FUN_007d54d4 =====

void FUN_007d54d4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00985f00;
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


// ===== 007d5510  FUN_007d5510 =====

void FUN_007d5510(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007d5524  FUN_007d5524 =====

void FUN_007d5524(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 007d5558  FUN_007d5558 =====

void FUN_007d5558(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 007d5598 to 007d55af has its CatchHandler @ 007d55e4 */
  FUN_007ccecc(&local_40,param_3,"messageId",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007d561c  FUN_007d561c =====

long FUN_007d561c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react19DCDChatEventEmitter21onTapJoinRichPresenceENS1_21OnTapJoinRichPresenceEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007d5638  FUN_007d5638 =====

pointer_____offset_0x10___ * FUN_007d5638(void)

{
  return &PTR_vtable_00985f60;
}


// ===== 007d5644  FUN_007d5644 =====

void FUN_007d5644(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00985f80;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


