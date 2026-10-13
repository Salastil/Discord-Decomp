// ===== 001961a4  FUN_001961a4 =====

void FUN_001961a4(undefined8 *param_1,byte *param_2,byte *param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_80;
  undefined8 *local_78;
  undefined1 local_70;
  undefined8 *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **ppbStack_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **local_58;
  undefined1 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_70 = 0;
  local_78 = param_1;
  if (param_4 != 0) {
    if (0xaaaaaaaaaaaaaaa < param_4) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 001962c0 to 001962c3 has its CatchHandler @ 001962c4 */
        uVar2 = FUN_001939b4();
                    /* catch() { ... } // from try @ 00196200 with catch @ 001962c4
                       catch() { ... } // from try @ 001962c0 with catch @ 001962c4 */
        FUN_00196300(&local_78);
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_001368d4(uVar2);
        }
      }
      goto LAB_001962fc;
    }
                    /* try { // try from 00196200 to 00196203 has its CatchHandler @ 001962c4 */
    local_80 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               operator_new(param_4 * 0x18);
    *param_1 = local_80;
    param_1[1] = local_80;
    local_50 = 0;
    local_68 = param_1 + 2;
    *local_68 = local_80 + param_4 * 0x18;
    ppbStack_60 = &local_88;
    local_58 = &local_80;
    local_88 = local_80;
    if (param_2 != param_3) {
      do {
        if ((*param_2 & 1) == 0) {
          uVar3 = *(undefined8 *)(param_2 + 8);
          uVar2 = *(undefined8 *)param_2;
          *(undefined8 *)(local_80 + 0x10) = *(undefined8 *)(param_2 + 0x10);
          *(undefined8 *)(local_80 + 8) = uVar3;
          *(undefined8 *)local_80 = uVar2;
        }
        else {
                    /* try { // try from 00196274 to 00196277 has its CatchHandler @ 001962cc */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external(local_80,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
        }
        param_2 = param_2 + 0x18;
        local_80 = local_80 + 0x18;
      } while (param_2 != param_3);
    }
    param_1[1] = local_80;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_001962fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00196300  FUN_00196300 =====

void FUN_00196300(undefined8 *param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (*(char *)(param_1 + 1) == '\0') {
    puVar2 = (undefined8 *)*param_1;
    pbVar3 = (byte *)*puVar2;
    if (pbVar3 != (byte *)0x0) {
      pbVar1 = (byte *)puVar2[1];
      pbVar4 = pbVar3;
      if (pbVar1 != pbVar3) {
        do {
          pbVar4 = pbVar1 + -0x18;
          if ((*pbVar4 & 1) != 0) {
            operator_delete(*(void **)(pbVar1 + -8));
          }
          pbVar1 = pbVar4;
        } while (pbVar4 != pbVar3);
        pbVar4 = *(byte **)*param_1;
      }
      puVar2[1] = pbVar3;
      operator_delete(pbVar4);
      return;
    }
  }
  return;
}


// ===== 0019638c  FUN_0019638c =====

void FUN_0019638c(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    pbVar2 = (byte *)**(undefined8 **)(param_1 + 8);
    pbVar3 = (byte *)**(undefined8 **)(param_1 + 0x10);
    while (pbVar1 = pbVar3, pbVar1 != pbVar2) {
      pbVar3 = pbVar1 + -0x18;
      if ((*pbVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar1 + -8));
      }
    }
    return;
  }
  return;
}


// ===== 001963ec  FUN_001963ec =====

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
FUN_001963ec(long *param_1,byte *param_2)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  long lVar3;
  byte *pbVar4;
  void *pvVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 uVar14;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  pbVar12 = (byte *)*param_1;
  pbVar13 = (byte *)param_1[1];
  lVar7 = (long)pbVar13 - (long)pbVar12 >> 3;
  uVar1 = lVar7 * -0x5555555555555555 + 1;
  if (uVar1 < 0xaaaaaaaaaaaaaab) {
    lVar10 = param_1[2] - (long)pbVar12 >> 3;
    uVar11 = lVar10 * 0x5555555555555556;
    if (uVar11 < uVar1 || uVar11 - uVar1 == 0) {
      uVar11 = uVar1;
    }
    if (0x555555555555554 < (ulong)(lVar10 * -0x5555555555555555)) {
      uVar11 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar11 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar11) goto LAB_001965c8;
      pvVar5 = operator_new(uVar11 * 0x18);
    }
    this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           ((long)pvVar5 + lVar7 * 8);
    if ((*param_2 & 1) == 0) {
      uVar14 = *(undefined8 *)param_2;
      uVar8 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(this + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)this = uVar14;
      *(undefined8 *)(this + 0x10) = uVar8;
    }
    else {
                    /* try { // try from 001964d8 to 001964db has its CatchHandler @ 001965dc */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external(this,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
      pbVar12 = (byte *)*param_1;
      pbVar13 = (byte *)param_1[1];
    }
    pbVar2 = this + 0x18;
    pbVar9 = pbVar12;
    if (pbVar13 != pbVar12) {
      do {
        uVar14 = *(undefined8 *)(pbVar13 + -0x10);
        uVar8 = *(undefined8 *)(pbVar13 + -0x18);
        *(undefined8 *)(this + -8) = *(undefined8 *)(pbVar13 + -8);
        pbVar9 = pbVar13 + -0x18;
        *(undefined8 *)(this + -0x10) = uVar14;
        *(undefined8 *)(this + -0x18) = uVar8;
        this = this + -0x18;
        pbVar13[-0x10] = 0;
        pbVar13[-0xf] = 0;
        pbVar13[-0xe] = 0;
        pbVar13[-0xd] = 0;
        pbVar13[-0xc] = 0;
        pbVar13[-0xb] = 0;
        pbVar13[-10] = 0;
        pbVar13[-9] = 0;
        pbVar13[-8] = 0;
        pbVar13[-7] = 0;
        pbVar13[-6] = 0;
        pbVar13[-5] = 0;
        pbVar13[-4] = 0;
        pbVar13[-3] = 0;
        pbVar13[-2] = 0;
        pbVar13[-1] = 0;
        pbVar13[-0x18] = 0;
        pbVar13[-0x17] = 0;
        pbVar13[-0x16] = 0;
        pbVar13[-0x15] = 0;
        pbVar13[-0x14] = 0;
        pbVar13[-0x13] = 0;
        pbVar13[-0x12] = 0;
        pbVar13[-0x11] = 0;
        pbVar13 = pbVar9;
      } while (pbVar9 != pbVar12);
      pbVar12 = (byte *)param_1[1];
      pbVar9 = (byte *)*param_1;
    }
    *param_1 = (long)this;
    param_1[1] = (long)pbVar2;
    param_1[2] = (long)((long)pvVar5 + uVar11 * 0x18);
    pbVar13 = pbVar12;
    while (pbVar4 = pbVar12, pbVar4 != pbVar9) {
      pbVar12 = pbVar4 + -0x18;
      pbVar13 = pbVar9;
      if ((*pbVar12 & 1) != 0) {
        operator_delete(*(void **)(pbVar4 + -8));
      }
    }
    if (pbVar13 != (byte *)0x0) {
      operator_delete(pbVar13);
    }
    if (*(long *)(lVar3 + 0x28) == lVar6) {
      return pbVar2;
    }
  }
  else {
    if (*(long *)(lVar3 + 0x28) != lVar6) goto LAB_00196600;
    FUN_001939b4();
LAB_001965c8:
    if (*(long *)(lVar3 + 0x28) == lVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_0013ed60();
    }
  }
LAB_00196600:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00196604  FUN_00196604 =====

void FUN_00196604(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  byte local_50 [8];
  ulong local_48;
  long *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00188d10(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 6) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if ((int)*plVar2 == 0x6d726f6e && *(short *)((long)plVar2 + 4) == 0x6c61) {
      *param_2 = 1;
    }
    else if ((int)*plVar2 == 0x65726373 && *(short *)((long)plVar2 + 4) == 0x6e65) {
      *param_2 = 3;
    }
    else {
      if ((int)*plVar2 != 0x6b726164 || *(short *)((long)plVar2 + 4) != 0x6e65) goto LAB_001967dc;
      *param_2 = 4;
    }
joined_r0x001967d4:
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
  }
  else {
    if (uVar1 == 8) {
      plVar2 = (long *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        plVar2 = local_40;
      }
      if (*plVar2 == 0x796c7069746c756d) {
        *param_2 = 2;
        goto joined_r0x001967d4;
      }
    }
    else if (uVar1 == 7) {
      plVar2 = (long *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        plVar2 = local_40;
      }
      if ((int)*plVar2 == 0x6e6b6e75 && *(int *)((long)plVar2 + 3) == 0x6e776f6e) {
        *param_2 = 0;
      }
      else {
        if ((int)*plVar2 != 0x6867696c || *(int *)((long)plVar2 + 3) != 0x6e657468)
        goto LAB_001967dc;
        *param_2 = 5;
      }
      goto joined_r0x001967d4;
    }
LAB_001967dc:
    if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001967ec to 001967ef has its CatchHandler @ 001967f0 */
      abort();
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00196820  FUN_00196820 =====

void FUN_00196820(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  byte local_40 [8];
  ulong local_38;
  long *local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  FUN_00188d10(local_40);
  uVar1 = (ulong)(local_40[0] >> 1);
  if ((local_40[0] & 1) != 0) {
    uVar1 = local_38;
  }
  if ((long)uVar1 < 9) {
    if (uVar1 == 6) {
      plVar2 = (long *)((ulong)local_40 | 1);
      if ((local_40[0] & 1) != 0) {
        plVar2 = local_30;
      }
      if ((int)*plVar2 == 0x7274616d && *(short *)((long)plVar2 + 4) == 0x7869) {
        *param_2 = 0;
joined_r0x00196910:
        if ((local_40[0] & 1) != 0) {
          operator_delete(local_30);
        }
        if (*(long *)(lVar3 + 0x28) == local_28) {
          return;
        }
        goto LAB_00196a08;
      }
    }
    else if (uVar1 == 8) {
      plVar2 = (long *)((ulong)local_40 | 1);
      if ((local_40[0] & 1) != 0) {
        plVar2 = local_30;
      }
      if (*plVar2 == 0x6574617275746173) {
        *param_2 = 1;
        goto joined_r0x00196910;
      }
    }
  }
  else if (uVar1 == 9) {
    plVar2 = (long *)((ulong)local_40 | 1);
    if ((local_40[0] & 1) != 0) {
      plVar2 = local_30;
    }
    if (*plVar2 == 0x7461746f52657568 && (char)plVar2[1] == 'e') {
      *param_2 = 2;
      goto joined_r0x00196910;
    }
  }
  else if (uVar1 == 0x10) {
    plVar2 = (long *)((ulong)local_40 | 1);
    if ((local_40[0] & 1) != 0) {
      plVar2 = local_30;
    }
    if (*plVar2 == 0x636e616e696d756c && plVar2[1] == 0x6168706c416f5465) {
      *param_2 = 3;
      goto joined_r0x00196910;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001969d8 to 001969db has its CatchHandler @ 001969dc */
    abort();
  }
LAB_00196a08:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00196a0c  FUN_00196a0c =====

void FUN_00196a0c(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  byte local_40 [8];
  ulong local_38;
  long *local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  FUN_00188d10(local_40);
  uVar1 = (ulong)(local_40[0] >> 1);
  if ((local_40[0] & 1) != 0) {
    uVar1 = local_38;
  }
  if ((long)uVar1 < 4) {
    if (uVar1 == 2) {
      plVar2 = (long *)((ulong)local_40 | 1);
      if ((local_40[0] & 1) != 0) {
        plVar2 = local_30;
      }
      if ((short)*plVar2 == 0x6e69) {
        *param_2 = 1;
        goto joined_r0x00196bb0;
      }
    }
    else if (uVar1 == 3) {
      plVar2 = (long *)((ulong)local_40 | 1);
      if ((local_40[0] & 1) != 0) {
        plVar2 = local_30;
      }
      if ((short)*plVar2 == 0x756f && *(char *)((long)plVar2 + 2) == 't') {
        *param_2 = 2;
      }
      else {
        if ((short)*plVar2 != 0x6f78 || *(char *)((long)plVar2 + 2) != 'r') goto LAB_00196bd8;
        *param_2 = 4;
      }
joined_r0x00196bb0:
      if ((local_40[0] & 1) != 0) {
        operator_delete(local_30);
      }
      if (*(long *)(lVar3 + 0x28) == local_28) {
        return;
      }
      goto LAB_00196c18;
    }
  }
  else if (uVar1 == 10) {
    plVar2 = (long *)((ulong)local_40 | 1);
    if ((local_40[0] & 1) != 0) {
      plVar2 = local_30;
    }
    if (*plVar2 == 0x74656d6874697261 && (short)plVar2[1] == 0x6369) {
      *param_2 = 5;
      goto joined_r0x00196bb0;
    }
  }
  else if (uVar1 == 4) {
    plVar2 = (long *)((ulong)local_40 | 1);
    if ((local_40[0] & 1) != 0) {
      plVar2 = local_30;
    }
    if ((int)*plVar2 == 0x7265766f) {
      *param_2 = 0;
    }
    else {
      if ((int)*plVar2 != 0x706f7461) goto LAB_00196bd8;
      *param_2 = 3;
    }
    goto joined_r0x00196bb0;
  }
LAB_00196bd8:
  if (*(long *)(lVar3 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00196be8 to 00196beb has its CatchHandler @ 00196bec */
    abort();
  }
LAB_00196c18:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00196c1c  FUN_00196c1c =====

void FUN_00196c1c(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  byte local_50 [8];
  ulong local_48;
  long *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00188d10(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 4) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if ((int)*plVar2 == 0x70617277) {
      *param_2 = 1;
    }
    else {
      if ((int)*plVar2 != 0x656e6f6e) goto LAB_00196d38;
      *param_2 = 2;
    }
joined_r0x00196cfc:
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
  }
  else {
    if (uVar1 == 9) {
      plVar2 = (long *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        plVar2 = local_40;
      }
      if (*plVar2 == 0x746163696c707564 && (char)plVar2[1] == 'e') {
        *param_2 = 0;
        goto joined_r0x00196cfc;
      }
    }
LAB_00196d38:
    if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00196d48 to 00196d4b has its CatchHandler @ 00196d4c */
      abort();
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00196d7c  FUN_00196d7c =====

void FUN_00196d7c(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  byte local_50 [8];
  ulong local_48;
  long *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00188d10(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 0x11) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if ((*plVar2 == 0x6f427463656a626f && plVar2[1] == 0x6f42676e69646e75) && (char)plVar2[2] == 'x'
       ) {
      *param_2 = 1;
joined_r0x00196e7c:
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
      goto LAB_00196ee8;
    }
  }
  else if (uVar1 == 0xe) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if (*plVar2 == 0x6361705372657375 && *(long *)((long)plVar2 + 6) == 0x6573556e4f656361) {
      *param_2 = 0;
      goto joined_r0x00196e7c;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00196eb8 to 00196ebb has its CatchHandler @ 00196ebc */
    abort();
  }
LAB_00196ee8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00196eec  FUN_00196eec =====

void FUN_00196eec(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  byte local_50 [8];
  ulong local_48;
  long *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00188d10(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 0x11) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if ((*plVar2 == 0x6f427463656a626f && plVar2[1] == 0x6f42676e69646e75) && (char)plVar2[2] == 'x'
       ) {
      *param_2 = 1;
joined_r0x00196fec:
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
      goto LAB_00197058;
    }
  }
  else if (uVar1 == 0xe) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if (*plVar2 == 0x6361705372657375 && *(long *)((long)plVar2 + 6) == 0x6573556e4f656361) {
      *param_2 = 0;
      goto joined_r0x00196fec;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00197028 to 0019702b has its CatchHandler @ 0019702c */
    abort();
  }
LAB_00197058:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019705c  FUN_0019705c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0019705c(int *param_1,undefined4 *param_2)

{
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined5 uVar6;
  undefined5 uVar7;
  undefined5 uVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  undefined2 uVar15;
  char cVar16;
  undefined2 uVar17;
  undefined1 uVar18;
  bool bVar19;
  byte bVar20;
  int iVar21;
  long lVar22;
  undefined4 *puVar23;
  ulong uVar24;
  void *pvVar25;
  undefined8 *puVar26;
  undefined4 *puVar27;
  ulong uVar28;
  long *plVar29;
  undefined4 *puVar30;
  undefined8 *puVar31;
  long lVar32;
  int *piVar33;
  ulong uVar34;
  char *pcVar35;
  undefined8 *puVar36;
  char *pcVar37;
  undefined8 *puVar38;
  long *plVar39;
  long *plVar40;
  void *pvVar41;
  long *plVar42;
  undefined4 *puVar43;
  undefined8 *puVar44;
  byte *pbVar45;
  undefined2 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  uint local_200;
  undefined4 uStack_1fc;
  undefined1 local_1f8;
  void *local_1f0;
  undefined8 *local_1e8;
  long lStack_1e0;
  void *local_1d8;
  ulong local_1d0;
  undefined8 *puStack_1c8;
  char *local_1c0;
  int local_1b8 [4];
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  uint local_180;
  char cStack_17c;
  char cStack_17b;
  char cStack_17a;
  char cStack_179;
  char cStack_178;
  char acStack_177 [7];
  long *local_170;
  ulong local_168;
  float local_160;
  void *local_158 [2];
  undefined8 *local_148;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_130;
  char cStack_12f;
  undefined2 uStack_12e;
  char cStack_12c;
  char cStack_12b;
  char cStack_12a;
  char cStack_129;
  char cStack_128;
  undefined2 uStack_127;
  char cStack_125;
  undefined2 uStack_124;
  char cStack_122;
  char cStack_121;
  char cStack_120;
  undefined1 uStack_11f;
  undefined6 uStack_11e;
  ulong local_118;
  ulong uStack_110;
  void *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_88;
  
  plVar40 = (long *)tpidr_el0;
  local_88 = plVar40[5];
  iVar21 = param_1[0xc];
  piVar33 = param_1;
  if (iVar21 != 0) {
    if (iVar21 == 1) {
      piVar33 = param_1 + 2;
      goto LAB_001970a8;
    }
    goto LAB_00198dac;
  }
LAB_001970a8:
  if (*piVar33 == 6) {
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1;
    cStack_12f = '\0';
    uStack_12e = 0;
    FUN_00188d10(&cStack_128);
    uStack_110 = uStack_110 & 0xffffffffffffff00;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = DAT_001206a8;
    local_108 = (void *)0x0;
    local_e8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_a8 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    local_b0 = 0;
    FUN_00199538(param_2,&local_130);
    FUN_0013a948(&local_130);
  }
  else if (iVar21 == 1) {
    uVar28 = FUN_001920ec(*(undefined8 *)param_1,param_1 + 2);
    if ((uVar28 & 1) != 0) {
      if (param_1[0xc] == 1) {
        FUN_00192814(local_158,*(undefined8 *)param_1,param_1 + 2);
        goto LAB_001971dc;
      }
      if (param_1[0xc] == 0) goto LAB_00197164;
      goto LAB_00198dac;
    }
LAB_00197170:
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    cStack_12f = '\0';
    uStack_12e = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = DAT_001206a8;
    local_108 = (void *)0x0;
    cStack_120 = '\0';
    uStack_11f = 0;
    uStack_11e = 0;
    local_118 = 0;
    cStack_128 = '\0';
    uStack_127 = 0;
    cStack_125 = '\0';
    uStack_124 = 0;
    cStack_122 = '\0';
    cStack_121 = '\0';
    uStack_110 = uStack_110 & 0xffffffffffffff00;
    local_e8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_a8 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    local_b0 = 0;
    FUN_00199538(param_2,&local_130);
    FUN_0013a948(&local_130);
    *param_2 = 0;
  }
  else {
    if (iVar21 != 0) {
LAB_00198dac:
      if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
        FUN_00187e7c();
      }
      goto LAB_00199530;
    }
    if (*param_1 != 5) goto LAB_00197170;
LAB_00197164:
    FUN_001922b0(local_158);
LAB_001971dc:
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    cStack_12f = 0;
    uStack_12e = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = DAT_001206a8;
    local_108 = (void *)0x0;
    cStack_120 = 0;
    uStack_11f = 0;
    uStack_11e = 0;
    local_118 = 0;
    cStack_128 = '\0';
    uStack_127 = 0;
    cStack_125 = 0;
    uStack_124 = 0;
    cStack_122 = 0;
    cStack_121 = 0;
    uStack_110 = uStack_110 & 0xffffffffffffff00;
    local_e8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_a8 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    local_b0 = 0;
    FUN_00199538(param_2,&local_130);
    FUN_0013a948(&local_130);
    uVar50 = s___packager_asset_0011edbc._8_8_;
    uVar49 = s___packager_asset_0011edbc._0_8_;
    *param_2 = 1;
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x20
    ;
    uStack_127 = (undefined2)uVar50;
    cStack_125 = SUB81(uVar50,2);
    uStack_124 = SUB82(uVar50,3);
    cStack_122 = SUB81(uVar50,5);
    cStack_121 = SUB81(uVar50,6);
    cStack_120 = SUB81(uVar50,7);
    cStack_12f = (char)uVar49;
    uStack_12e = SUB82(uVar49,1);
    cStack_12c = SUB81(uVar49,3);
    cStack_12b = SUB81(uVar49,4);
    cStack_12a = SUB81(uVar49,5);
    cStack_129 = SUB81(uVar49,6);
    cStack_128 = SUB81(uVar49,7);
    uStack_11f = 0;
    lVar22 = FUN_00194908(local_158,&local_130);
    if (((byte)local_130 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
    }
    if (lVar22 != 0) {
      *param_2 = 2;
    }
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xa;
    cStack_12f = 'w';
    uStack_12e = 0x6469;
    cStack_12c = 't';
    cStack_12b = 'h';
    cStack_12a = '\0';
    lVar22 = FUN_00194908(local_158,&local_130);
    if (lVar22 == 0) {
      uVar18 = false;
joined_r0x00197358:
      if (((byte)local_130 & 1) == 0) goto LAB_00197430;
LAB_0019735c:
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
      if ((bool)uVar18) goto LAB_00197434;
    }
    else {
      local_180 = 0x6965680c;
      cStack_17c = 'g';
      cStack_17b = 'h';
      cStack_17a = 't';
      cStack_179 = '\0';
      lVar22 = FUN_00194908(local_158,&local_180);
      if (lVar22 == 0) {
        uVar18 = false;
      }
      else {
        local_1d0 = CONCAT17(local_1d0._7_1_,0x68746469770a);
        lVar22 = FUN_00194908(local_158,&local_1d0);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 00199060 to 0019906b has its CatchHandler @ 001992b8 */
                    /* WARNING: Subroutine does not return */
            FUN_0013d01c("unordered_map::at: key not found");
          }
          goto LAB_00199530;
        }
        if (*(int *)(lVar22 + 0x58) == 1) {
          if (*(int *)(lVar22 + 0x30) != 3) goto LAB_00197330;
LAB_00197398:
          local_1e8 = (undefined8 *)0x7468676965680c;
          lVar22 = FUN_00194908(local_158,&local_1e8);
          if (lVar22 == 0) {
            if (plVar40[5] == local_88) {
                    /* try { // try from 001991e0 to 001991ff has its CatchHandler @ 001992a0 */
                    /* WARNING: Subroutine does not return */
              FUN_0013d01c("unordered_map::at: key not found");
            }
            goto LAB_00199530;
          }
          if (*(int *)(lVar22 + 0x58) == 1) {
            uVar18 = *(int *)(lVar22 + 0x30) == 3;
          }
          else {
            if (*(int *)(lVar22 + 0x58) != 0) {
              if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                FUN_00187e7c();
              }
              goto LAB_00199530;
            }
            uVar18 = *(int *)(lVar22 + 0x28) - 3U < 2;
          }
          if (((ulong)local_1e8 & 1) != 0) {
            operator_delete(local_1d8);
          }
        }
        else {
          if (*(int *)(lVar22 + 0x58) != 0) {
            if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001991cc to 001991cf has its CatchHandler @ 001992b8 */
              FUN_00187e7c();
            }
            goto LAB_00199530;
          }
          if (*(int *)(lVar22 + 0x28) - 3U < 2) goto LAB_00197398;
LAB_00197330:
          uVar18 = false;
        }
        if ((local_1d0 & 1) != 0) {
          operator_delete(local_1c0);
        }
      }
      if ((local_180 & 1) == 0) goto joined_r0x00197358;
      operator_delete(local_170);
      if (((byte)local_130 & 1) != 0) goto LAB_0019735c;
LAB_00197430:
      if ((bool)uVar18) {
LAB_00197434:
        local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                    0xa;
        cStack_12f = 'w';
        uStack_12e = 0x6469;
        cStack_12c = 't';
        cStack_12b = 'h';
        cStack_12a = '\0';
        lVar22 = FUN_00194908(local_158,&local_130);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 00198f08 to 00198f13 has its CatchHandler @ 00199340 */
                    /* WARNING: Subroutine does not return */
            FUN_0013d01c("unordered_map::at: key not found");
          }
          goto LAB_00199530;
        }
                    /* try { // try from 00197460 to 00197467 has its CatchHandler @ 00199340 */
        uVar47 = FUN_00188160(lVar22 + 0x28);
        local_180 = 0x6965680c;
        cStack_17c = 'g';
        cStack_17b = 'h';
        cStack_17a = 't';
        cStack_179 = '\0';
        lVar22 = FUN_00194908(local_158,&local_180);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 00198f24 to 00198f2f has its CatchHandler @ 00199330 */
                    /* WARNING: Subroutine does not return */
            FUN_0013d01c("unordered_map::at: key not found");
          }
          goto LAB_00199530;
        }
                    /* try { // try from 0019749c to 001974a3 has its CatchHandler @ 00199330 */
        uVar48 = FUN_00188160(lVar22 + 0x28);
        param_2[0x11] = uVar47;
        param_2[0x12] = uVar48;
        if ((local_180 & 1) != 0) {
          operator_delete(local_170);
        }
        if (((byte)local_130 & 1) != 0) {
          operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
        }
      }
    }
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xa;
    cStack_12f = 's';
    uStack_12e = 0x6163;
    cStack_12c = 'l';
    cStack_12b = 'e';
    cStack_12a = '\0';
    lVar22 = FUN_00194908(local_158,&local_130);
    if (lVar22 == 0) {
      bVar19 = false;
    }
    else {
      local_180 = 0x6163730a;
      cStack_17c = 'l';
      cStack_17b = 'e';
      cStack_17a = '\0';
      lVar22 = FUN_00194908(local_158,&local_180);
      if (lVar22 == 0) {
        if (plVar40[5] == local_88) {
                    /* try { // try from 00198dec to 00198df7 has its CatchHandler @ 001992ec */
                    /* WARNING: Subroutine does not return */
          FUN_0013d01c("unordered_map::at: key not found");
        }
        goto LAB_00199530;
      }
      if (*(int *)(lVar22 + 0x58) == 1) {
        bVar19 = *(int *)(lVar22 + 0x30) == 3;
      }
      else {
        if (*(int *)(lVar22 + 0x58) != 0) {
          if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00199080 to 00199083 has its CatchHandler @ 001992ec */
            FUN_00187e7c();
          }
          goto LAB_00199530;
        }
        bVar19 = *(int *)(lVar22 + 0x28) - 3U < 2;
      }
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
      }
    }
    if (((byte)local_130 & 1) == 0) {
      if (bVar19) goto LAB_0019756c;
LAB_001975b0:
      local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                  0x14;
      uStack_127 = 0x6465;
      cStack_12f = (char)s_deprecated_0011f6a8._0_8_;
      uStack_12e = SUB82(s_deprecated_0011f6a8._0_8_,1);
      cStack_12c = SUB81(s_deprecated_0011f6a8._0_8_,3);
      cStack_12b = SUB81(s_deprecated_0011f6a8._0_8_,4);
      cStack_12a = SUB81(s_deprecated_0011f6a8._0_8_,5);
      cStack_129 = SUB81(s_deprecated_0011f6a8._0_8_,6);
      cStack_128 = SUB81(s_deprecated_0011f6a8._0_8_,7);
      cStack_125 = '\0';
      lVar22 = FUN_00194908(local_158,&local_130);
      uVar47 = 0x3f800000;
      if (lVar22 != 0) {
        uVar47 = 0;
      }
    }
    else {
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
      if (!bVar19) goto LAB_001975b0;
LAB_0019756c:
      local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                  0xa;
      cStack_12f = 's';
      uStack_12e = 0x6163;
      cStack_12c = 'l';
      cStack_12b = 'e';
      cStack_12a = '\0';
      lVar22 = FUN_00194908(local_158,&local_130);
      if (lVar22 == 0) {
        if (plVar40[5] == local_88) {
                    /* try { // try from 00198f44 to 00198f4f has its CatchHandler @ 0019932c */
                    /* WARNING: Subroutine does not return */
          FUN_0013d01c("unordered_map::at: key not found");
        }
        goto LAB_00199530;
      }
                    /* try { // try from 00197598 to 0019759f has its CatchHandler @ 0019932c */
      uVar47 = FUN_00188160(lVar22 + 0x28);
    }
    param_2[0x10] = uVar47;
    if (((byte)local_130 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
    }
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x6;
    cStack_12f = 'u';
    uStack_12e = 0x6c72;
    cStack_12c = '\0';
    lVar22 = FUN_00194908(local_158,&local_130);
    if (lVar22 == 0) {
      bVar19 = false;
joined_r0x00197660:
      if (((byte)local_130 & 1) == 0) goto LAB_00197694;
LAB_00197664:
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
      if (bVar19) goto LAB_00197698;
    }
    else {
      local_180 = 0x6c727506;
      cStack_17c = '\0';
      lVar22 = FUN_00194908(local_158,&local_180);
      if (lVar22 == 0) {
        if (plVar40[5] == local_88) {
                    /* try { // try from 00198e0c to 00198e17 has its CatchHandler @ 001992e8 */
                    /* WARNING: Subroutine does not return */
          FUN_0013d01c("unordered_map::at: key not found");
        }
        goto LAB_00199530;
      }
      if (*(int *)(lVar22 + 0x58) == 0) {
        piVar33 = (int *)(lVar22 + 0x28);
      }
      else {
        if (*(int *)(lVar22 + 0x58) != 1) {
          if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00199098 to 0019909b has its CatchHandler @ 001992e8 */
            FUN_00187e7c();
          }
          goto LAB_00199530;
        }
        piVar33 = (int *)(lVar22 + 0x30);
      }
      bVar19 = *piVar33 == 6;
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
        goto joined_r0x00197660;
      }
      if (((byte)local_130 & 1) != 0) goto LAB_00197664;
LAB_00197694:
      if (bVar19) {
LAB_00197698:
        local_180 = 0x6c727506;
        cStack_17c = '\0';
        lVar22 = FUN_00194908(local_158,&local_180);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 00198f64 to 00198f6f has its CatchHandler @ 00199314 */
                    /* WARNING: Subroutine does not return */
            FUN_0013d01c("unordered_map::at: key not found");
          }
          goto LAB_00199530;
        }
                    /* try { // try from 001976bc to 001976c7 has its CatchHandler @ 00199314 */
        FUN_00188d10(&local_130,lVar22 + 0x28);
        if ((*(byte *)(param_2 + 2) & 1) != 0) {
          operator_delete(*(void **)(param_2 + 6));
        }
        uVar46 = CONCAT11(cStack_12f,local_130);
        local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                    0x0;
        cStack_12f = 0;
        *(ulong *)(param_2 + 4) =
             CONCAT17(cStack_121,
                      CONCAT16(cStack_122,
                               CONCAT24(uStack_124,
                                        CONCAT13(cStack_125,CONCAT21(uStack_127,cStack_128)))));
        *(ulong *)(param_2 + 2) =
             CONCAT17(cStack_129,
                      CONCAT16(cStack_12a,
                               CONCAT15(cStack_12b,CONCAT14(cStack_12c,CONCAT22(uStack_12e,uVar46)))
                              ));
        *(ulong *)(param_2 + 6) = CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120));
        if ((local_180 & 1) != 0) {
          operator_delete(local_170);
        }
      }
    }
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x6;
    cStack_12f = 'u';
    uStack_12e = 0x6972;
    cStack_12c = '\0';
    lVar22 = FUN_00194908(local_158,&local_130);
    if (lVar22 == 0) {
      bVar19 = false;
joined_r0x0019775c:
      if (((byte)local_130 & 1) == 0) goto LAB_001977a4;
LAB_00197760:
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
      if (bVar19) goto LAB_001977a8;
    }
    else {
      local_180 = 0x69727506;
      cStack_17c = '\0';
      lVar22 = FUN_00194908(local_158,&local_180);
      if (lVar22 == 0) {
        if (plVar40[5] == local_88) {
                    /* try { // try from 00198e2c to 00198e37 has its CatchHandler @ 001992e4 */
                    /* WARNING: Subroutine does not return */
          FUN_0013d01c("unordered_map::at: key not found");
        }
        goto LAB_00199530;
      }
      if (*(int *)(lVar22 + 0x58) == 0) {
        piVar33 = (int *)(lVar22 + 0x28);
      }
      else {
        if (*(int *)(lVar22 + 0x58) != 1) {
          if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001990b0 to 001990b3 has its CatchHandler @ 001992e4 */
            FUN_00187e7c();
          }
          goto LAB_00199530;
        }
        piVar33 = (int *)(lVar22 + 0x30);
      }
      bVar19 = *piVar33 == 6;
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
        goto joined_r0x0019775c;
      }
      if (((byte)local_130 & 1) != 0) goto LAB_00197760;
LAB_001977a4:
      if (bVar19) {
LAB_001977a8:
        local_180 = 0x69727506;
        cStack_17c = '\0';
        lVar22 = FUN_00194908(local_158,&local_180);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 00198f84 to 00198f8f has its CatchHandler @ 00199310 */
                    /* WARNING: Subroutine does not return */
            FUN_0013d01c("unordered_map::at: key not found");
          }
          goto LAB_00199530;
        }
                    /* try { // try from 001977cc to 001977d7 has its CatchHandler @ 00199310 */
        FUN_00188d10(&local_130,lVar22 + 0x28);
        if ((*(byte *)(param_2 + 2) & 1) != 0) {
          operator_delete(*(void **)(param_2 + 6));
        }
        uVar46 = CONCAT11(cStack_12f,local_130);
        local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                    0x0;
        cStack_12f = 0;
        *(ulong *)(param_2 + 4) =
             CONCAT17(cStack_121,
                      CONCAT16(cStack_122,
                               CONCAT24(uStack_124,
                                        CONCAT13(cStack_125,CONCAT21(uStack_127,cStack_128)))));
        *(ulong *)(param_2 + 2) =
             CONCAT17(cStack_129,
                      CONCAT16(cStack_12a,
                               CONCAT15(cStack_12b,CONCAT14(cStack_12c,CONCAT22(uStack_12e,uVar46)))
                              ));
        *(ulong *)(param_2 + 6) = CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120));
        if ((local_180 & 1) != 0) {
          operator_delete(local_170);
        }
      }
    }
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xc;
    cStack_12f = 'b';
    uStack_12e = 0x6e75;
    cStack_12c = 'd';
    cStack_12b = 'l';
    cStack_12a = 'e';
    cStack_129 = '\0';
    lVar22 = FUN_00194908(local_158,&local_130);
    if (lVar22 == 0) {
      bVar19 = false;
joined_r0x00197880:
      if (((byte)local_130 & 1) == 0) goto LAB_001978c8;
LAB_00197884:
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
      if (bVar19) goto LAB_001978cc;
    }
    else {
      local_180 = 0x6e75620c;
      cStack_17c = 'd';
      cStack_17b = 'l';
      cStack_17a = 'e';
      cStack_179 = '\0';
      lVar22 = FUN_00194908(local_158,&local_180);
      if (lVar22 == 0) {
        if (plVar40[5] == local_88) {
                    /* try { // try from 00198e4c to 00198e57 has its CatchHandler @ 001992e0 */
                    /* WARNING: Subroutine does not return */
          FUN_0013d01c("unordered_map::at: key not found");
        }
        goto LAB_00199530;
      }
      if (*(int *)(lVar22 + 0x58) == 0) {
        piVar33 = (int *)(lVar22 + 0x28);
      }
      else {
        if (*(int *)(lVar22 + 0x58) != 1) {
          if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001990c8 to 001990cb has its CatchHandler @ 001992e0 */
            FUN_00187e7c();
          }
          goto LAB_00199530;
        }
        piVar33 = (int *)(lVar22 + 0x30);
      }
      bVar19 = *piVar33 == 6;
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
        goto joined_r0x00197880;
      }
      if (((byte)local_130 & 1) != 0) goto LAB_00197884;
LAB_001978c8:
      if (bVar19) {
LAB_001978cc:
        local_180 = 0x6e75620c;
        cStack_17c = 'd';
        cStack_17b = 'l';
        cStack_17a = 'e';
        cStack_179 = '\0';
        lVar22 = FUN_00194908(local_158,&local_180);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 00198fa4 to 00198faf has its CatchHandler @ 0019930c */
                    /* WARNING: Subroutine does not return */
            FUN_0013d01c("unordered_map::at: key not found");
          }
          goto LAB_00199530;
        }
                    /* try { // try from 001978fc to 00197907 has its CatchHandler @ 0019930c */
        FUN_00188d10(&local_130,lVar22 + 0x28);
        if ((*(byte *)(param_2 + 10) & 1) != 0) {
          operator_delete(*(void **)(param_2 + 0xe));
        }
        uVar46 = CONCAT11(cStack_12f,local_130);
        local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                    0x0;
        cStack_12f = 0;
        *(ulong *)(param_2 + 0xc) =
             CONCAT17(cStack_121,
                      CONCAT16(cStack_122,
                               CONCAT24(uStack_124,
                                        CONCAT13(cStack_125,CONCAT21(uStack_127,cStack_128)))));
        *(ulong *)(param_2 + 10) =
             CONCAT17(cStack_129,
                      CONCAT16(cStack_12a,
                               CONCAT15(cStack_12b,CONCAT14(cStack_12c,CONCAT22(uStack_12e,uVar46)))
                              ));
        *(ulong *)(param_2 + 0xe) = CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120));
        if ((local_180 & 1) != 0) {
          operator_delete(local_170);
        }
        *param_2 = 2;
      }
    }
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xe;
    cStack_12f = 'h';
    uStack_12e = 0x6165;
    cStack_12c = 'd';
    cStack_12b = 'e';
    cStack_12a = 'r';
    cStack_129 = 's';
    cStack_128 = '\0';
    lVar22 = FUN_00194908(local_158,&local_130);
    if (lVar22 == 0) {
      bVar19 = false;
joined_r0x001979d8:
      if (((byte)local_130 & 1) == 0) goto LAB_00197b1c;
LAB_001979dc:
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
      if (bVar19) goto LAB_00197b20;
    }
    else {
      local_180 = 0x6165680e;
      cStack_17c = 'd';
      cStack_17b = 'e';
      cStack_17a = 'r';
      cStack_179 = 's';
      cStack_178 = '\0';
      lVar22 = FUN_00194908(local_158,&local_180);
      if (lVar22 == 0) {
        if (plVar40[5] == local_88) {
                    /* try { // try from 00198e6c to 00198e77 has its CatchHandler @ 00199348 */
                    /* WARNING: Subroutine does not return */
          FUN_0013d01c("unordered_map::at: key not found");
        }
        goto LAB_00199530;
      }
      if (*(int *)(lVar22 + 0x58) == 1) {
        if (*(int *)(lVar22 + 0x30) == 7) {
          plVar42 = *(long **)(lVar22 + 0x28);
                    /* try { // try from 00197a1c to 00197a23 has its CatchHandler @ 00199348 */
          local_1e8 = (undefined8 *)
                      (**(code **)(*plVar42 + 0x88))(plVar42,*(undefined8 *)(lVar22 + 0x38));
                    /* try { // try from 00197a30 to 00197a3f has its CatchHandler @ 00199264 */
          (**(code **)(*plVar42 + 0x218))(&local_200,plVar42,&local_1e8);
                    /* try { // try from 00197a48 to 00197a53 has its CatchHandler @ 00199240 */
          lVar22 = (**(code **)(*plVar42 + 0x240))(plVar42,&local_200);
          if (lVar22 == 0) {
            bVar19 = true;
          }
          else {
                    /* try { // try from 00197a60 to 00197a73 has its CatchHandler @ 0019923c */
            (**(code **)(*plVar42 + 0x260))(&local_1d0,plVar42,&local_200,0);
            local_1a0 = puStack_1c8;
            puStack_1c8 = (undefined8 *)0x0;
            facebook::jsi::Value::~Value((Value *)&local_1d0);
                    /* try { // try from 00197a90 to 00197aa3 has its CatchHandler @ 00199200 */
            (**(code **)(*plVar42 + 0x188))(&local_1d0,plVar42,&local_1e8,&local_1a0);
            bVar19 = (int)local_1d0 == 6;
            facebook::jsi::Value::~Value((Value *)&local_1d0);
            if (local_1a0 != (undefined8 *)0x0) {
              (**(code **)*local_1a0)();
            }
          }
          if ((undefined8 *)CONCAT44(uStack_1fc,local_200) != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)CONCAT44(uStack_1fc,local_200))();
          }
          if (local_1e8 != (undefined8 *)0x0) {
            (**(code **)*local_1e8)();
          }
        }
        else {
LAB_00197ad0:
          bVar19 = false;
        }
      }
      else {
        if (*(int *)(lVar22 + 0x58) != 0) {
          if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001990e0 to 001990e3 has its CatchHandler @ 00199348 */
            FUN_00187e7c();
          }
          goto LAB_00199530;
        }
        if (*(int *)(lVar22 + 0x28) != 5) goto LAB_00197ad0;
        if (*(long *)(lVar22 + 0x40) == 0) {
          bVar19 = true;
        }
        else {
          bVar19 = *(int *)(*(long *)(lVar22 + 0x40) + 0x40) == 6;
        }
      }
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
        goto joined_r0x001979d8;
      }
      if (((byte)local_130 & 1) != 0) goto LAB_001979dc;
LAB_00197b1c:
      if (bVar19) {
LAB_00197b20:
        local_200 = 0x6165680e;
        uStack_1fc = 0x73726564;
        local_1f8 = 0;
        lVar22 = FUN_00194908(local_158,&local_200);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 00198fc4 to 00198fcf has its CatchHandler @ 001992fc */
                    /* WARNING: Subroutine does not return */
            FUN_0013d01c("unordered_map::at: key not found");
          }
          goto LAB_00199530;
        }
        if (*(int *)(lVar22 + 0x58) == 1) {
          plVar42 = *(long **)(lVar22 + 0x28);
                    /* try { // try from 00197f78 to 00197f7f has its CatchHandler @ 001992fc */
          local_188 = (undefined8 *)
                      (**(code **)(*plVar42 + 0x88))(plVar42,*(undefined8 *)(lVar22 + 0x38));
                    /* try { // try from 00197f8c to 00197f9b has its CatchHandler @ 00199290 */
          (**(code **)(*plVar42 + 0x218))(&local_190,plVar42,&local_188);
                    /* try { // try from 00197fa4 to 00197faf has its CatchHandler @ 00199280 */
          lVar22 = (**(code **)(*plVar42 + 0x240))(plVar42,&local_190);
          local_160 = 1.0;
          cStack_178 = '\0';
          acStack_177[0] = '\0';
          acStack_177[1] = '\0';
          acStack_177[2] = '\0';
          acStack_177[3] = '\0';
          acStack_177[4] = '\0';
          acStack_177[5] = 0;
          acStack_177[6] = 0;
          local_180 = 0;
          cStack_17c = '\0';
          cStack_17b = '\0';
          cStack_17a = '\0';
          cStack_179 = '\0';
          local_168 = 0;
          local_170 = (long *)0x0;
          if (lVar22 != 0) {
            lVar32 = 0;
            do {
                    /* try { // try from 00198004 to 00198017 has its CatchHandler @ 0019941c */
              (**(code **)(*plVar42 + 0x260))(&local_1a0,plVar42,&local_190,lVar32);
                    /* try { // try from 00198024 to 0019802b has its CatchHandler @ 00199424 */
              local_1a8 = (undefined8 *)(**(code **)(*plVar42 + 0x80))(plVar42,local_198);
                    /* try { // try from 00198038 to 0019804b has its CatchHandler @ 0019942c */
              (**(code **)(*plVar42 + 0x188))(local_1b8,plVar42,&local_188,&local_1a8);
              if (local_1b8[0] != 0) {
                    /* try { // try from 0019805c to 0019806b has its CatchHandler @ 001993f0 */
                (**(code **)(*plVar42 + 0x120))(&local_1d0,plVar42,&local_1a8);
                    /* try { // try from 0019806c to 0019807b has its CatchHandler @ 001993f8 */
                facebook::jsi::Value::asString((IRuntime *)local_1b8);
                    /* try { // try from 00198084 to 00198093 has its CatchHandler @ 001993c8 */
                (**(code **)(*plVar42 + 0x120))(&local_1e8,plVar42,&local_130);
                puVar26 = (undefined8 *)
                          CONCAT17(cStack_129,
                                   CONCAT16(cStack_12a,
                                            CONCAT15(cStack_12b,
                                                     CONCAT14(cStack_12c,
                                                              CONCAT22(uStack_12e,
                                                                       CONCAT11(cStack_12f,local_130
                                                                               ))))));
                if (puVar26 != (undefined8 *)0x0) {
                  (**(code **)*puVar26)();
                }
                puVar26 = (undefined8 *)(local_1d0 >> 1 & 0x7f);
                pcVar3 = (char *)((ulong)&local_1d0 | 1);
                if ((local_1d0 & 1) != 0) {
                  puVar26 = puStack_1c8;
                  pcVar3 = local_1c0;
                }
                    /* try { // try from 001980c4 to 001980cb has its CatchHandler @ 001993e8 */
                puVar23 = (undefined4 *)FUN_0013f2f0(&local_130,pcVar3,puVar26);
                puVar43 = (undefined4 *)
                          CONCAT17(acStack_177[6],
                                   CONCAT16(acStack_177[5],CONCAT51(acStack_177._0_5_,cStack_178)));
                puVar30 = param_2;
                if (puVar43 != (undefined4 *)0x0) {
                  uVar49 = NEON_cnt(puVar43,1);
                  uVar46 = NEON_uaddlv(uVar49,1);
                  uVar28 = CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar46) & 0xffffffff;
                  if (uVar28 < 2) {
                    puVar30 = (undefined4 *)((long)puVar43 - 1U & (ulong)puVar23);
                  }
                  else {
                    puVar30 = puVar23;
                    if (puVar43 <= puVar23) {
                      uVar34 = 0;
                      if (puVar43 != (undefined4 *)0x0) {
                        uVar34 = (ulong)puVar23 / (ulong)puVar43;
                      }
                      puVar30 = (undefined4 *)((long)puVar23 - uVar34 * (long)puVar43);
                    }
                  }
                  plVar39 = *(long **)(CONCAT17(cStack_179,
                                                CONCAT16(cStack_17a,
                                                         CONCAT15(cStack_17b,
                                                                  CONCAT14(cStack_17c,local_180))))
                                      + (long)puVar30 * 8);
                  if ((plVar39 != (long *)0x0) &&
                     (plVar39 = (long *)*plVar39, plVar39 != (long *)0x0)) {
                    puVar26 = (undefined8 *)(local_1d0 >> 1 & 0x7f);
                    pcVar3 = (char *)((ulong)&local_1d0 | 1);
                    if ((local_1d0 & 1) != 0) {
                      puVar26 = puStack_1c8;
                      pcVar3 = local_1c0;
                    }
                    do {
                      puVar27 = (undefined4 *)plVar39[1];
                      if (puVar27 == puVar23) {
                        bVar20 = *(byte *)(plVar39 + 2);
                        puVar31 = (undefined8 *)(ulong)(bVar20 >> 1);
                        puVar44 = puVar31;
                        if ((bVar20 & 1) != 0) {
                          puVar44 = (undefined8 *)plVar39[3];
                        }
                        if (puVar44 == puVar26) {
                          if ((bVar20 & 1) == 0) {
                            if (bVar20 < 2) goto LAB_001983f8;
                            pcVar35 = (char *)((long)plVar39 + 0x11);
                            pcVar37 = pcVar3;
                            while (*pcVar35 == *pcVar37) {
                              puVar31 = (undefined8 *)((long)puVar31 + -1);
                              pcVar35 = pcVar35 + 1;
                              pcVar37 = pcVar37 + 1;
                              if (puVar31 == (undefined8 *)0x0) goto LAB_001983f8;
                            }
                          }
                          else {
                            iVar21 = memcmp((void *)plVar39[4],pcVar3,(size_t)plVar39[3]);
                            if (iVar21 == 0) goto LAB_001983f8;
                          }
                        }
                      }
                      else {
                        if (uVar28 < 2) {
                          puVar27 = (undefined4 *)((ulong)puVar27 & (long)puVar43 - 1U);
                        }
                        else if (puVar43 <= puVar27) {
                          uVar34 = 0;
                          if (puVar43 != (undefined4 *)0x0) {
                            uVar34 = (ulong)puVar27 / (ulong)puVar43;
                          }
                          puVar27 = (undefined4 *)((long)puVar27 - uVar34 * (long)puVar43);
                        }
                        if (puVar27 != puVar30) break;
                      }
                      plVar39 = (long *)*plVar39;
                    } while (plVar39 != (long *)0x0);
                  }
                }
                    /* try { // try from 001981ec to 001981f3 has its CatchHandler @ 001993b0 */
                plVar39 = (long *)operator_new(0x40);
                cStack_120 = 0;
                *plVar39 = 0;
                plVar39[1] = (long)puVar23;
                local_130 = SUB81(plVar39,0);
                cStack_12f = (char)((ulong)plVar39 >> 8);
                uStack_12e = (undefined2)((ulong)plVar39 >> 0x10);
                cStack_12c = (char)((ulong)plVar39 >> 0x20);
                cStack_12b = (char)((ulong)plVar39 >> 0x28);
                cStack_12a = (char)((ulong)plVar39 >> 0x30);
                cStack_129 = (char)((ulong)plVar39 >> 0x38);
                cStack_128 = (char)&local_170;
                uStack_127 = (undefined2)((ulong)&local_170 >> 8);
                cStack_125 = (char)((ulong)&local_170 >> 0x18);
                uStack_124 = (undefined2)((ulong)&local_170 >> 0x20);
                cStack_122 = (char)((ulong)&local_170 >> 0x30);
                cStack_121 = (char)((ulong)&local_170 >> 0x38);
                if ((local_1d0 & 1) == 0) {
                  plVar39[3] = (long)puStack_1c8;
                  plVar39[2] = local_1d0;
                  plVar39[4] = (long)local_1c0;
                }
                else {
                    /* try { // try from 00198228 to 0019822f has its CatchHandler @ 00199384 */
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  __init_copy_ctor_external
                            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              *)(plVar39 + 2),local_1c0,(ulong)puStack_1c8);
                }
                pvVar25 = local_1d8;
                lVar4 = lStack_1e0;
                lStack_1e0 = 0;
                local_1d8 = (void *)0x0;
                plVar39[7] = (long)pvVar25;
                plVar39[6] = lVar4;
                plVar39[5] = (long)local_1e8;
                local_1e8 = (undefined8 *)0x0;
                cStack_120 = '\x01';
                if ((puVar43 == (undefined4 *)0x0) ||
                   (local_160 * (float)puVar43 < (float)(local_168 + 1))) {
                  if (puVar43 < (undefined4 *)0x3) {
                    uVar28 = 1;
                  }
                  else {
                    uVar28 = (ulong)(((ulong)puVar43 & (long)puVar43 - 1U) != 0);
                  }
                  uVar28 = uVar28 | (long)puVar43 << 1;
                  uVar34 = (ulong)((float)(local_168 + 1) / local_160);
                  if (uVar28 <= uVar34) {
                    uVar28 = uVar34;
                  }
                  if (uVar28 - 1 == 0) {
                    uVar28 = 2;
                  }
                  else if ((uVar28 & uVar28 - 1) != 0) {
                    /* try { // try from 001982c0 to 00198343 has its CatchHandler @ 00199380 */
                    uVar28 = std::__ndk1::__next_prime(uVar28);
                  }
                  uVar34 = CONCAT17(acStack_177[6],
                                    CONCAT16(acStack_177[5],CONCAT51(acStack_177._0_5_,cStack_178)))
                  ;
                  if (uVar34 < uVar28) {
LAB_001982d8:
                    FUN_00199790(&local_180,uVar28);
                  }
                  else if (uVar28 < uVar34) {
                    uVar24 = (ulong)((float)local_168 / local_160);
                    if (uVar34 < 3) {
LAB_00198340:
                      uVar24 = std::__ndk1::__next_prime(uVar24);
                    }
                    else {
                      uVar49 = NEON_cnt(uVar34,1);
                      uVar46 = NEON_uaddlv(uVar49,1);
                      if (1 < (uint)CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar46))
                      goto LAB_00198340;
                      if (1 < uVar24) {
                        uVar24 = 1L << (-LZCOUNT(uVar24 - 1) & 0x3fU);
                      }
                    }
                    if (uVar28 <= uVar24) {
                      uVar28 = uVar24;
                    }
                    if (uVar28 < uVar34) goto LAB_001982d8;
                  }
                  puVar43 = (undefined4 *)
                            CONCAT17(acStack_177[6],
                                     CONCAT16(acStack_177[5],CONCAT51(acStack_177._0_5_,cStack_178))
                                    );
                  if (((ulong)puVar43 & (long)puVar43 - 1U) == 0) {
                    puVar30 = (undefined4 *)((long)puVar43 - 1U & (ulong)puVar23);
                  }
                  else {
                    puVar30 = puVar23;
                    if (puVar43 <= puVar23) {
                      uVar28 = 0;
                      if (puVar43 != (undefined4 *)0x0) {
                        uVar28 = (ulong)puVar23 / (ulong)puVar43;
                      }
                      puVar30 = (undefined4 *)((long)puVar23 - uVar28 * (long)puVar43);
                    }
                  }
                }
                lVar4 = CONCAT17(cStack_179,
                                 CONCAT16(cStack_17a,
                                          CONCAT15(cStack_17b,CONCAT14(cStack_17c,local_180))));
                plVar29 = *(long **)(lVar4 + (long)puVar30 * 8);
                if (plVar29 == (long *)0x0) {
                  *plVar39 = (long)local_170;
                  *(long ***)(lVar4 + (long)puVar30 * 8) = &local_170;
                  local_170 = plVar39;
                  if (*plVar39 != 0) {
                    puVar30 = *(undefined4 **)(*plVar39 + 8);
                    if (((ulong)puVar43 & (long)puVar43 - 1U) == 0) {
                      puVar30 = (undefined4 *)((ulong)puVar30 & (long)puVar43 - 1U);
                    }
                    else if (puVar43 <= puVar30) {
                      uVar28 = 0;
                      if (puVar43 != (undefined4 *)0x0) {
                        uVar28 = (ulong)puVar30 / (ulong)puVar43;
                      }
                      puVar30 = (undefined4 *)((long)puVar30 - uVar28 * (long)puVar43);
                    }
                    plVar29 = (long *)(CONCAT17(cStack_179,
                                                CONCAT16(cStack_17a,
                                                         CONCAT15(cStack_17b,
                                                                  CONCAT14(cStack_17c,local_180))))
                                      + (long)puVar30 * 8);
                    goto LAB_001983e8;
                  }
                }
                else {
                  *plVar39 = *plVar29;
LAB_001983e8:
                  *plVar29 = (long)plVar39;
                }
                local_168 = local_168 + 1;
LAB_001983f8:
                if (((ulong)local_1e8 & 1) != 0) {
                  operator_delete(local_1d8);
                }
                if ((local_1d0 & 1) != 0) {
                  operator_delete(local_1c0);
                }
              }
              facebook::jsi::Value::~Value((Value *)local_1b8);
              if (local_1a8 != (undefined8 *)0x0) {
                (**(code **)*local_1a8)();
              }
              facebook::jsi::Value::~Value((Value *)&local_1a0);
              lVar32 = lVar32 + 1;
            } while (lVar32 != lVar22);
          }
          if (local_190 != (undefined8 *)0x0) {
            (**(code **)*local_190)();
          }
          if (local_188 != (undefined8 *)0x0) {
            (**(code **)*local_188)();
          }
        }
        else {
          if (*(int *)(lVar22 + 0x58) != 0) {
            if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00199158 to 0019915b has its CatchHandler @ 001992fc */
              FUN_00187e7c();
            }
            goto LAB_00199530;
          }
          local_160 = 1.0;
          cStack_178 = '\0';
          acStack_177[0] = '\0';
          acStack_177[1] = '\0';
          acStack_177[2] = '\0';
          acStack_177[3] = '\0';
          acStack_177[4] = '\0';
          acStack_177[5] = 0;
          acStack_177[6] = 0;
          local_180 = 0;
          cStack_17c = '\0';
          cStack_17b = '\0';
          cStack_17a = '\0';
          cStack_179 = '\0';
          local_168 = 0;
          local_170 = (long *)0x0;
          if (*(int *)(lVar22 + 0x28) != 5) {
            if (plVar40[5] == local_88) {
                    /* try { // try from 00199170 to 0019917f has its CatchHandler @ 00199288 */
                    /* WARNING: Subroutine does not return */
              FUN_00141e98(*(undefined8 *)PTR_name_001a2c60);
            }
            goto LAB_00199530;
          }
          plVar42 = *(long **)(lVar22 + 0x40);
          if (plVar42 != (long *)0x0) {
            do {
              if ((int)plVar42[8] != 6) {
                if (plVar40[5] == local_88) {
                    /* try { // try from 00198d7c to 00198d8b has its CatchHandler @ 001994bc */
                    /* WARNING: Subroutine does not return */
                  FUN_00141e98(*(undefined8 *)PTR_name_001a2c68);
                }
                goto LAB_00199530;
              }
              if ((plVar42[9] & 1U) == 0) {
                puStack_1c8 = (undefined8 *)plVar42[10];
                local_1d0 = plVar42[9];
                local_1c0 = (char *)plVar42[0xb];
              }
              else {
                    /* try { // try from 00197be4 to 00197beb has its CatchHandler @ 001993a8 */
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                __init_copy_ctor_external
                          ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_1d0,(char *)plVar42[0xb],plVar42[10]);
              }
              if ((int)plVar42[2] != 6) {
                if (plVar40[5] == local_88) {
                    /* try { // try from 00198d58 to 00198d67 has its CatchHandler @ 001994c4 */
                    /* WARNING: Subroutine does not return */
                  FUN_00141e98(*(undefined8 *)PTR_name_001a2c68);
                }
                goto LAB_00199530;
              }
              pbVar45 = (byte *)(plVar42 + 3);
              uVar28 = plVar42[4];
              lVar22 = plVar42[5];
              if ((*pbVar45 & 1) == 0) {
                lVar22 = (long)plVar42 + 0x19;
                uVar28 = (ulong)(*pbVar45 >> 1);
              }
                    /* try { // try from 00197c14 to 00197c1b has its CatchHandler @ 001994f4 */
              puVar23 = (undefined4 *)FUN_0013f2f0(&local_130,lVar22,uVar28);
              puVar43 = (undefined4 *)
                        CONCAT17(acStack_177[6],
                                 CONCAT16(acStack_177[5],CONCAT51(acStack_177._0_5_,cStack_178)));
              puVar30 = param_2;
              if (puVar43 != (undefined4 *)0x0) {
                uVar49 = NEON_cnt(puVar43,1);
                uVar46 = NEON_uaddlv(uVar49,1);
                uVar28 = CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar46) & 0xffffffff;
                if (uVar28 < 2) {
                  puVar30 = (undefined4 *)((long)puVar43 - 1U & (ulong)puVar23);
                }
                else {
                  puVar30 = puVar23;
                  if (puVar43 <= puVar23) {
                    uVar34 = 0;
                    if (puVar43 != (undefined4 *)0x0) {
                      uVar34 = (ulong)puVar23 / (ulong)puVar43;
                    }
                    puVar30 = (undefined4 *)((long)puVar23 - uVar34 * (long)puVar43);
                  }
                }
                puVar26 = *(undefined8 **)
                           (CONCAT17(cStack_179,
                                     CONCAT16(cStack_17a,
                                              CONCAT15(cStack_17b,CONCAT14(cStack_17c,local_180))))
                           + (long)puVar30 * 8);
                if ((puVar26 != (undefined8 *)0x0) &&
                   (plVar39 = (long *)*puVar26, plVar39 != (long *)0x0)) {
                  pvVar25 = (void *)((long)plVar42 + 0x19);
                  sVar1 = (ulong)(*(byte *)(plVar42 + 3) >> 1);
                  if ((*(byte *)(plVar42 + 3) & 1) != 0) {
                    pvVar25 = (void *)plVar42[5];
                    sVar1 = plVar42[4];
                  }
                  do {
                    puVar27 = (undefined4 *)plVar39[1];
                    if (puVar27 == puVar23) {
                      bVar20 = *(byte *)(plVar39 + 2);
                      sVar2 = (ulong)(bVar20 >> 1);
                      if ((bVar20 & 1) != 0) {
                        sVar2 = plVar39[3];
                      }
                      if (sVar2 == sVar1) {
                        if ((bVar20 & 1) == 0) {
                          if (bVar20 < 2) goto LAB_00197f3c;
                          uVar34 = 0;
                          while (*(char *)((long)plVar39 + uVar34 + 0x11) ==
                                 *(char *)((long)pvVar25 + uVar34)) {
                            uVar34 = uVar34 + 1;
                            if (bVar20 >> 1 == uVar34) goto LAB_00197f3c;
                          }
                        }
                        else {
                          iVar21 = memcmp((void *)plVar39[4],pvVar25,plVar39[3]);
                          if (iVar21 == 0) goto LAB_00197f3c;
                        }
                      }
                    }
                    else {
                      if (uVar28 < 2) {
                        puVar27 = (undefined4 *)((ulong)puVar27 & (long)puVar43 - 1U);
                      }
                      else if (puVar43 <= puVar27) {
                        uVar34 = 0;
                        if (puVar43 != (undefined4 *)0x0) {
                          uVar34 = (ulong)puVar27 / (ulong)puVar43;
                        }
                        puVar27 = (undefined4 *)((long)puVar27 - uVar34 * (long)puVar43);
                      }
                      if (puVar27 != puVar30) break;
                    }
                    plVar39 = (long *)*plVar39;
                  } while (plVar39 != (long *)0x0);
                }
              }
                    /* try { // try from 00197d40 to 00197d47 has its CatchHandler @ 00199418 */
              plVar39 = (long *)operator_new(0x40);
              *plVar39 = 0;
              plVar39[1] = (long)puVar23;
              local_130 = SUB81(plVar39,0);
              cStack_12f = (char)((ulong)plVar39 >> 8);
              uStack_12e = (undefined2)((ulong)plVar39 >> 0x10);
              cStack_12c = (char)((ulong)plVar39 >> 0x20);
              cStack_12b = (char)((ulong)plVar39 >> 0x28);
              cStack_12a = (char)((ulong)plVar39 >> 0x30);
              cStack_129 = (char)((ulong)plVar39 >> 0x38);
              cStack_128 = (char)&local_170;
              uStack_127 = (undefined2)((ulong)&local_170 >> 8);
              cStack_125 = (char)((ulong)&local_170 >> 0x18);
              uStack_124 = (undefined2)((ulong)&local_170 >> 0x20);
              cStack_122 = (char)((ulong)&local_170 >> 0x30);
              cStack_121 = (char)((ulong)&local_170 >> 0x38);
              cStack_120 = 0;
              if ((*pbVar45 & 1) == 0) {
                lVar32 = plVar42[4];
                lVar22 = *(long *)pbVar45;
                plVar39[4] = plVar42[5];
                plVar39[3] = lVar32;
                plVar39[2] = lVar22;
              }
              else {
                    /* try { // try from 00197d78 to 00197d7f has its CatchHandler @ 00199394 */
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                __init_copy_ctor_external
                          ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)(plVar39 + 2),(char *)plVar42[5],plVar42[4]);
              }
              plVar39[5] = 0;
              plVar39[6] = 0;
              plVar39[7] = 0;
              cStack_120 = '\x01';
              if ((puVar43 == (undefined4 *)0x0) ||
                 (local_160 * (float)puVar43 < (float)(local_168 + 1))) {
                if (puVar43 < (undefined4 *)0x3) {
                  uVar28 = 1;
                }
                else {
                  uVar28 = (ulong)(((ulong)puVar43 & (long)puVar43 - 1U) != 0);
                }
                uVar28 = uVar28 | (long)puVar43 << 1;
                uVar34 = (ulong)((float)(local_168 + 1) / local_160);
                if (uVar28 <= uVar34) {
                  uVar28 = uVar34;
                }
                if (uVar28 - 1 == 0) {
                  uVar28 = 2;
                }
                else if ((uVar28 & uVar28 - 1) != 0) {
                    /* try { // try from 00197e00 to 00197e83 has its CatchHandler @ 00199398 */
                  uVar28 = std::__ndk1::__next_prime(uVar28);
                }
                uVar34 = CONCAT17(acStack_177[6],
                                  CONCAT16(acStack_177[5],CONCAT51(acStack_177._0_5_,cStack_178)));
                if (uVar34 < uVar28) {
LAB_00197e18:
                  FUN_00199790(&local_180,uVar28);
                }
                else if (uVar28 < uVar34) {
                  uVar24 = (ulong)((float)local_168 / local_160);
                  if (uVar34 < 3) {
LAB_00197e80:
                    uVar24 = std::__ndk1::__next_prime(uVar24);
                  }
                  else {
                    uVar49 = NEON_cnt(uVar34,1);
                    uVar46 = NEON_uaddlv(uVar49,1);
                    if (1 < (uint)CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar46)) goto LAB_00197e80;
                    if (1 < uVar24) {
                      uVar24 = 1L << (-LZCOUNT(uVar24 - 1) & 0x3fU);
                    }
                  }
                  if (uVar28 <= uVar24) {
                    uVar28 = uVar24;
                  }
                  if (uVar28 < uVar34) goto LAB_00197e18;
                }
                puVar43 = (undefined4 *)
                          CONCAT17(acStack_177[6],
                                   CONCAT16(acStack_177[5],CONCAT51(acStack_177._0_5_,cStack_178)));
                if (((ulong)puVar43 & (long)puVar43 - 1U) == 0) {
                  puVar30 = (undefined4 *)((long)puVar43 - 1U & (ulong)puVar23);
                }
                else {
                  puVar30 = puVar23;
                  if (puVar43 <= puVar23) {
                    uVar28 = 0;
                    if (puVar43 != (undefined4 *)0x0) {
                      uVar28 = (ulong)puVar23 / (ulong)puVar43;
                    }
                    puVar30 = (undefined4 *)((long)puVar23 - uVar28 * (long)puVar43);
                  }
                }
              }
              lVar22 = CONCAT17(cStack_179,
                                CONCAT16(cStack_17a,
                                         CONCAT15(cStack_17b,CONCAT14(cStack_17c,local_180))));
              plVar29 = *(long **)(lVar22 + (long)puVar30 * 8);
              if (plVar29 == (long *)0x0) {
                *plVar39 = (long)local_170;
                *(long ***)(lVar22 + (long)puVar30 * 8) = &local_170;
                local_170 = plVar39;
                if (*plVar39 != 0) {
                  puVar30 = *(undefined4 **)(*plVar39 + 8);
                  if (((ulong)puVar43 & (long)puVar43 - 1U) == 0) {
                    puVar30 = (undefined4 *)((ulong)puVar30 & (long)puVar43 - 1U);
                  }
                  else if (puVar43 <= puVar30) {
                    uVar28 = 0;
                    if (puVar43 != (undefined4 *)0x0) {
                      uVar28 = (ulong)puVar30 / (ulong)puVar43;
                    }
                    puVar30 = (undefined4 *)((long)puVar30 - uVar28 * (long)puVar43);
                  }
                  plVar29 = (long *)(CONCAT17(cStack_179,
                                              CONCAT16(cStack_17a,
                                                       CONCAT15(cStack_17b,
                                                                CONCAT14(cStack_17c,local_180)))) +
                                    (long)puVar30 * 8);
                  goto LAB_00197f2c;
                }
              }
              else {
                *plVar39 = *plVar29;
LAB_00197f2c:
                *plVar29 = (long)plVar39;
              }
              local_168 = local_168 + 1;
LAB_00197f3c:
              if ((plVar39[5] & 1U) != 0) {
                operator_delete((void *)plVar39[7]);
              }
              plVar39[6] = (long)puStack_1c8;
              plVar39[5] = local_1d0;
              plVar39[7] = (long)local_1c0;
              plVar42 = (long *)*plVar42;
            } while (plVar42 != (long *)0x0);
          }
        }
        if ((local_200 & 1) != 0) {
          operator_delete(local_1f0);
        }
        if (local_170 != (long *)0x0) {
          plVar42 = local_170;
          do {
            if ((*(byte *)(plVar42 + 2) & 1) == 0) {
              lVar32 = plVar42[3];
              uVar49 = plVar42[2];
              lVar22 = plVar42[4];
              cStack_128 = (char)lVar32;
              uStack_127 = (undefined2)((ulong)lVar32 >> 8);
              cStack_125 = (char)((ulong)lVar32 >> 0x18);
              uStack_124 = (undefined2)((ulong)lVar32 >> 0x20);
              cStack_122 = (char)((ulong)lVar32 >> 0x30);
              cStack_121 = (char)((ulong)lVar32 >> 0x38);
              local_130 = SUB81(uVar49,0);
              cStack_12f = (char)((ulong)uVar49 >> 8);
              uStack_12e = (undefined2)((ulong)uVar49 >> 0x10);
              cStack_12c = (char)((ulong)uVar49 >> 0x20);
              cStack_12b = (char)((ulong)uVar49 >> 0x28);
              cStack_12a = (char)((ulong)uVar49 >> 0x30);
              cStack_129 = (char)((ulong)uVar49 >> 0x38);
              cStack_120 = (char)lVar22;
              uStack_11f = (undefined1)((ulong)lVar22 >> 8);
              uStack_11e = (undefined6)((ulong)lVar22 >> 0x10);
            }
            else {
                    /* try { // try from 001984d4 to 001984db has its CatchHandler @ 001994b4 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              __init_copy_ctor_external(&local_130,(char *)plVar42[4],plVar42[3]);
            }
            if ((plVar42[5] & 1U) == 0) {
              uStack_110 = plVar42[6];
              local_118 = plVar42[5];
              local_108 = (void *)plVar42[7];
            }
            else {
                    /* try { // try from 00198500 to 00198507 has its CatchHandler @ 0019949c */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              __init_copy_ctor_external
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_118,(char *)plVar42[7],plVar42[6]);
            }
            puVar26 = *(undefined8 **)(param_2 + 0x24);
            if (puVar26 < *(undefined8 **)(param_2 + 0x26)) {
              puVar26[2] = CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120));
              puVar26[1] = CONCAT17(cStack_121,
                                    CONCAT16(cStack_122,
                                             CONCAT24(uStack_124,
                                                      CONCAT13(cStack_125,
                                                               CONCAT21(uStack_127,cStack_128)))));
              *puVar26 = CONCAT17(cStack_129,
                                  CONCAT16(cStack_12a,
                                           CONCAT15(cStack_12b,
                                                    CONCAT14(cStack_12c,
                                                             CONCAT22(uStack_12e,
                                                                      CONCAT11(cStack_12f,local_130)
                                                                     )))));
              cStack_128 = '\0';
              uStack_127 = 0;
              cStack_125 = '\0';
              uStack_124 = 0;
              cStack_122 = '\0';
              cStack_121 = '\0';
              cStack_120 = '\0';
              uStack_11f = 0;
              uStack_11e = 0;
              local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           )0x0;
              cStack_12f = '\0';
              uStack_12e = 0;
              cStack_12c = '\0';
              cStack_12b = '\0';
              cStack_12a = '\0';
              cStack_129 = '\0';
              puVar26[5] = local_108;
              puVar26[4] = uStack_110;
              puVar26[3] = local_118;
              uStack_110 = 0;
              local_108 = (void *)0x0;
              local_118 = 0;
              *(undefined8 **)(param_2 + 0x24) = puVar26 + 6;
            }
            else {
              puVar44 = *(undefined8 **)(param_2 + 0x22);
              lVar22 = (long)puVar26 - (long)puVar44 >> 4;
              uVar28 = lVar22 * -0x5555555555555555 + 1;
              if (0x555555555555555 < uVar28) {
                if (plVar40[5] != local_88) goto LAB_00199530;
                    /* try { // try from 00198da0 to 00198dab has its CatchHandler @ 001994f8 */
                FUN_0013b3e0(param_2 + 0x22);
                plVar40 = plVar42;
                goto LAB_00198dac;
              }
              lVar32 = (long)*(undefined8 **)(param_2 + 0x26) - (long)puVar44 >> 4;
              uVar34 = lVar32 * 0x5555555555555556;
              if (uVar34 < uVar28 || uVar34 - uVar28 == 0) {
                uVar34 = uVar28;
              }
              if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar32 * -0x5555555555555555)) {
                uVar34 = 0x555555555555555;
              }
              if (uVar34 == 0) {
                pvVar25 = (void *)0x0;
              }
              else {
                if (0x555555555555555 < uVar34) {
                  if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00198dd4 to 00198dd7 has its CatchHandler @ 001994f8 */
                    FUN_0013ed60();
                  }
                  goto LAB_00199530;
                }
                    /* try { // try from 001985a0 to 001985a3 has its CatchHandler @ 001993ec */
                pvVar25 = operator_new(uVar34 * 0x30);
              }
              pvVar41 = local_108;
              puVar36 = (undefined8 *)((long)pvVar25 + lVar22 * 0x10);
              uVar5 = CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120));
              uVar50 = CONCAT17(cStack_121,
                                CONCAT16(cStack_122,
                                         CONCAT24(uStack_124,
                                                  CONCAT13(cStack_125,
                                                           CONCAT21(uStack_127,cStack_128)))));
              uVar49 = CONCAT17(cStack_129,
                                CONCAT16(cStack_12a,
                                         CONCAT15(cStack_12b,
                                                  CONCAT14(cStack_12c,
                                                           CONCAT22(uStack_12e,
                                                                    CONCAT11(cStack_12f,local_130)))
                                                 )));
              local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           )0x0;
              cStack_12f = '\0';
              uStack_12e = 0;
              cStack_12c = '\0';
              cStack_12b = '\0';
              cStack_12a = '\0';
              cStack_129 = '\0';
              cStack_128 = '\0';
              uStack_127 = 0;
              cStack_125 = '\0';
              uStack_124 = 0;
              cStack_122 = '\0';
              cStack_121 = '\0';
              cStack_120 = '\0';
              uStack_11f = 0;
              uStack_11e = 0;
              local_108 = (void *)0x0;
              puVar36[2] = uVar5;
              pvVar25 = (void *)((long)pvVar25 + uVar34 * 0x30);
              puVar31 = puVar36 + 6;
              puVar36[1] = uVar50;
              *puVar36 = uVar49;
              puVar36[5] = pvVar41;
              puVar36[4] = uStack_110;
              puVar36[3] = local_118;
              local_118 = 0;
              uStack_110 = 0;
              if (puVar26 == puVar44) {
                *(undefined8 **)(param_2 + 0x22) = puVar36;
                *(undefined8 **)(param_2 + 0x24) = puVar31;
                *(void **)(param_2 + 0x26) = pvVar25;
              }
              else {
                do {
                  uVar50 = puVar26[-5];
                  uVar49 = puVar26[-6];
                  puVar36[-4] = puVar26[-4];
                  puVar36[-5] = uVar50;
                  puVar36[-6] = uVar49;
                  uVar50 = puVar26[-2];
                  uVar49 = puVar26[-3];
                  puVar26[-5] = 0;
                  puVar26[-4] = 0;
                  puVar26[-6] = 0;
                  puVar36[-1] = puVar26[-1];
                  puVar38 = puVar26 + -6;
                  puVar36[-2] = uVar50;
                  puVar36[-3] = uVar49;
                  puVar36 = puVar36 + -6;
                  puVar26[-2] = 0;
                  puVar26[-1] = 0;
                  puVar26[-3] = 0;
                  puVar26 = puVar38;
                } while (puVar38 != puVar44);
                puVar26 = *(undefined8 **)(param_2 + 0x22);
                puVar44 = *(undefined8 **)(param_2 + 0x24);
                *(undefined8 **)(param_2 + 0x22) = puVar36;
                *(undefined8 **)(param_2 + 0x24) = puVar31;
                *(void **)(param_2 + 0x26) = pvVar25;
                for (; puVar44 != puVar26; puVar44 = puVar44 + -6) {
                  if ((*(byte *)(puVar44 + -3) & 1) != 0) {
                    operator_delete((void *)puVar44[-1]);
                  }
                  if ((*(byte *)(puVar44 + -6) & 1) != 0) {
                    operator_delete((void *)puVar44[-4]);
                  }
                }
              }
              if (puVar26 != (undefined8 *)0x0) {
                operator_delete(puVar26);
              }
              *(undefined8 **)(param_2 + 0x24) = puVar31;
              if ((local_118 & 1) != 0) {
                operator_delete(local_108);
              }
            }
            if (((byte)local_130 & 1) != 0) {
              operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
            }
            plVar42 = (long *)*plVar42;
            plVar39 = local_170;
          } while (plVar42 != (long *)0x0);
          while (plVar39 != (long *)0x0) {
            plVar42 = (long *)*plVar39;
            if ((*(byte *)(plVar39 + 5) & 1) != 0) {
              operator_delete((void *)plVar39[7]);
            }
            if ((*(byte *)(plVar39 + 2) & 1) != 0) {
              operator_delete((void *)plVar39[4]);
            }
            operator_delete(plVar39);
            plVar39 = plVar42;
          }
        }
        pvVar25 = (void *)CONCAT17(cStack_179,
                                   CONCAT16(cStack_17a,
                                            CONCAT15(cStack_17b,CONCAT14(cStack_17c,local_180))));
        local_180 = 0;
        cStack_17c = '\0';
        cStack_17b = '\0';
        cStack_17a = '\0';
        cStack_179 = '\0';
        if (pvVar25 != (void *)0x0) {
          operator_delete(pvVar25);
        }
      }
    }
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x8;
    cStack_12f = 'b';
    uStack_12e = 0x646f;
    cStack_12c = 'y';
    cStack_12b = '\0';
    lVar22 = FUN_00194908(local_158,&local_130);
    if (lVar22 == 0) {
      bVar19 = false;
joined_r0x0019877c:
      if (((byte)local_130 & 1) == 0) goto LAB_001987b0;
LAB_00198780:
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
      if (bVar19) goto LAB_001987b4;
    }
    else {
      local_180 = 0x646f6208;
      cStack_17c = 'y';
      cStack_17b = '\0';
      lVar22 = FUN_00194908(local_158,&local_180);
      if (lVar22 == 0) {
        if (plVar40[5] == local_88) {
                    /* try { // try from 00198e8c to 00198e97 has its CatchHandler @ 001992dc */
                    /* WARNING: Subroutine does not return */
          FUN_0013d01c("unordered_map::at: key not found");
        }
        goto LAB_00199530;
      }
      if (*(int *)(lVar22 + 0x58) == 0) {
        piVar33 = (int *)(lVar22 + 0x28);
      }
      else {
        if (*(int *)(lVar22 + 0x58) != 1) {
          if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001990f8 to 001990fb has its CatchHandler @ 001992dc */
            FUN_00187e7c();
          }
          goto LAB_00199530;
        }
        piVar33 = (int *)(lVar22 + 0x30);
      }
      bVar19 = *piVar33 == 6;
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
        goto joined_r0x0019877c;
      }
      if (((byte)local_130 & 1) != 0) goto LAB_00198780;
LAB_001987b0:
      if (bVar19) {
LAB_001987b4:
        cStack_17c = 'y';
        local_180 = 0x646f6208;
        cStack_17b = '\0';
        lVar22 = FUN_00194908(local_158,&local_180);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 00198fe4 to 00198fef has its CatchHandler @ 001992f8 */
                    /* WARNING: Subroutine does not return */
            FUN_0013d01c("unordered_map::at: key not found");
          }
          goto LAB_00199530;
        }
                    /* try { // try from 001987d4 to 001987df has its CatchHandler @ 001992f8 */
        FUN_00188d10(&local_130,lVar22 + 0x28);
        if ((*(byte *)(param_2 + 0x14) & 1) != 0) {
          operator_delete(*(void **)(param_2 + 0x18));
        }
        uVar46 = CONCAT11(cStack_12f,local_130);
        local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                    0x0;
        cStack_12f = 0;
        *(ulong *)(param_2 + 0x16) =
             CONCAT17(cStack_121,
                      CONCAT16(cStack_122,
                               CONCAT24(uStack_124,
                                        CONCAT13(cStack_125,CONCAT21(uStack_127,cStack_128)))));
        *(ulong *)(param_2 + 0x14) =
             CONCAT17(cStack_129,
                      CONCAT16(cStack_12a,
                               CONCAT15(cStack_12b,CONCAT14(cStack_12c,CONCAT22(uStack_12e,uVar46)))
                              ));
        *(ulong *)(param_2 + 0x18) = CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120));
        if ((local_180 & 1) != 0) {
          operator_delete(local_170);
        }
      }
    }
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xc;
    cStack_12f = 'm';
    uStack_12e = 0x7465;
    cStack_12c = 'h';
    cStack_12b = 'o';
    cStack_12a = 'd';
    cStack_129 = '\0';
    lVar22 = FUN_00194908(local_158,&local_130);
    if (lVar22 == 0) {
      bVar19 = false;
joined_r0x00198888:
      if (((byte)local_130 & 1) == 0) goto LAB_001988d0;
LAB_0019888c:
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
      if (bVar19) goto LAB_001988d4;
    }
    else {
      local_180 = 0x74656d0c;
      cStack_17c = 'h';
      cStack_17b = 'o';
      cStack_17a = 'd';
      cStack_179 = '\0';
      lVar22 = FUN_00194908(local_158,&local_180);
      if (lVar22 == 0) {
        if (plVar40[5] == local_88) {
                    /* try { // try from 00198eac to 00198eb7 has its CatchHandler @ 001992d8 */
                    /* WARNING: Subroutine does not return */
          FUN_0013d01c("unordered_map::at: key not found");
        }
        goto LAB_00199530;
      }
      if (*(int *)(lVar22 + 0x58) == 0) {
        piVar33 = (int *)(lVar22 + 0x28);
      }
      else {
        if (*(int *)(lVar22 + 0x58) != 1) {
          if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00199110 to 00199113 has its CatchHandler @ 001992d8 */
            FUN_00187e7c();
          }
          goto LAB_00199530;
        }
        piVar33 = (int *)(lVar22 + 0x30);
      }
      bVar19 = *piVar33 == 6;
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
        goto joined_r0x00198888;
      }
      if (((byte)local_130 & 1) != 0) goto LAB_0019888c;
LAB_001988d0:
      if (bVar19) {
LAB_001988d4:
        local_180 = 0x74656d0c;
        cStack_17c = 'h';
        cStack_17b = 'o';
        cStack_17a = 'd';
        cStack_179 = '\0';
        lVar22 = FUN_00194908(local_158,&local_180);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 00199004 to 0019900f has its CatchHandler @ 001992f4 */
                    /* WARNING: Subroutine does not return */
            FUN_0013d01c("unordered_map::at: key not found");
          }
          goto LAB_00199530;
        }
                    /* try { // try from 00198904 to 0019890f has its CatchHandler @ 001992f4 */
        FUN_00188d10(&local_130,lVar22 + 0x28);
        if ((*(byte *)(param_2 + 0x1a) & 1) != 0) {
          operator_delete(*(void **)(param_2 + 0x1e));
        }
        uVar46 = CONCAT11(cStack_12f,local_130);
        local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                    0x0;
        cStack_12f = 0;
        *(ulong *)(param_2 + 0x1c) =
             CONCAT17(cStack_121,
                      CONCAT16(cStack_122,
                               CONCAT24(uStack_124,
                                        CONCAT13(cStack_125,CONCAT21(uStack_127,cStack_128)))));
        *(ulong *)(param_2 + 0x1a) =
             CONCAT17(cStack_129,
                      CONCAT16(cStack_12a,
                               CONCAT15(cStack_12b,CONCAT14(cStack_12c,CONCAT22(uStack_12e,uVar46)))
                              ));
        *(ulong *)(param_2 + 0x1e) = CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120));
        if ((local_180 & 1) != 0) {
          operator_delete(local_170);
        }
      }
    }
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xa;
    cStack_12f = 'c';
    uStack_12e = 0x6361;
    cStack_12c = 'h';
    cStack_12b = 'e';
    cStack_12a = '\0';
    lVar22 = FUN_00194908(local_158,&local_130);
    if (lVar22 == 0) {
      bVar19 = false;
joined_r0x001989b0:
      if (((byte)local_130 & 1) == 0) goto LAB_001989f8;
LAB_001989b4:
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
      if (bVar19) goto LAB_001989fc;
    }
    else {
      local_180 = 0x6361630a;
      cStack_17c = 'h';
      cStack_17b = 'e';
      cStack_17a = '\0';
      lVar22 = FUN_00194908(local_158,&local_180);
      if (lVar22 == 0) {
        if (plVar40[5] == local_88) {
                    /* try { // try from 00198ecc to 00198ed7 has its CatchHandler @ 001992d4 */
                    /* WARNING: Subroutine does not return */
          FUN_0013d01c("unordered_map::at: key not found");
        }
        goto LAB_00199530;
      }
      if (*(int *)(lVar22 + 0x58) == 0) {
        piVar33 = (int *)(lVar22 + 0x28);
      }
      else {
        if (*(int *)(lVar22 + 0x58) != 1) {
          if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00199128 to 0019912b has its CatchHandler @ 001992d4 */
            FUN_00187e7c();
          }
          goto LAB_00199530;
        }
        piVar33 = (int *)(lVar22 + 0x30);
      }
      bVar19 = *piVar33 == 6;
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
        goto joined_r0x001989b0;
      }
      if (((byte)local_130 & 1) != 0) goto LAB_001989b4;
LAB_001989f8:
      if (bVar19) {
LAB_001989fc:
        local_180 = 0x6361630a;
        cStack_17c = 'h';
        cStack_17b = 'e';
        cStack_17a = '\0';
        lVar22 = FUN_00194908(local_158,&local_180);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 00199024 to 0019902f has its CatchHandler @ 001992f0 */
                    /* WARNING: Subroutine does not return */
            FUN_0013d01c("unordered_map::at: key not found");
          }
          goto LAB_00199530;
        }
                    /* try { // try from 00198a28 to 00198a33 has its CatchHandler @ 001992f0 */
        FUN_00188d10(&local_130,lVar22 + 0x28);
        if ((local_180 & 1) != 0) {
          operator_delete(local_170);
        }
        uVar28 = (ulong)((byte)local_130 >> 1);
        if (((byte)local_130 & 1) != 0) {
          uVar28 = CONCAT17(cStack_121,
                            CONCAT16(cStack_122,
                                     CONCAT24(uStack_124,
                                              CONCAT13(cStack_125,CONCAT21(uStack_127,cStack_128))))
                           );
        }
        if (uVar28 == 0xe) {
          plVar42 = (long *)((ulong)&local_130 | 1);
          if (((byte)local_130 & 1) != 0) {
            plVar42 = (long *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120));
          }
          if (*plVar42 == 0x2d66692d796c6e6f && *(long *)((long)plVar42 + 6) == 0x6465686361632d66)
          {
            uVar47 = 3;
LAB_00198b5c:
            param_2[0x20] = uVar47;
          }
        }
        else if (uVar28 == 0xb) {
          plVar42 = (long *)((ulong)&local_130 | 1);
          if (((byte)local_130 & 1) != 0) {
            plVar42 = (long *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120));
          }
          if (*plVar42 == 0x61632d6563726f66 && *(long *)((long)plVar42 + 3) == 0x65686361632d6563)
          {
            uVar47 = 2;
            goto LAB_00198b5c;
          }
        }
        else if (uVar28 == 6) {
          piVar33 = (int *)((ulong)&local_130 | 1);
          if (((byte)local_130 & 1) != 0) {
            piVar33 = (int *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120));
          }
          if (*piVar33 == 0x6f6c6572 && (short)piVar33[1] == 0x6461) {
            uVar47 = 1;
            goto LAB_00198b5c;
          }
        }
        if (((byte)local_130 & 1) != 0) {
          operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
        }
      }
    }
    uVar7 = s_isForceCached_0011f70a._8_5_;
    uVar6 = s_isForceCached_0011f70a._0_5_;
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1a
    ;
    cStack_12f = (char)s_isForceCached_0011f70a._0_5_;
    cVar9 = cStack_12f;
    uStack_12e = SUB52(s_isForceCached_0011f70a._0_5_,1);
    uVar46 = uStack_12e;
    cStack_12c = SUB51(s_isForceCached_0011f70a._0_5_,3);
    cVar10 = cStack_12c;
    cStack_12b = SUB51(s_isForceCached_0011f70a._0_5_,4);
    cVar11 = cStack_12b;
    cStack_12a = (char)s_isForceCached_0011f70a._5_3_;
    cVar12 = cStack_12a;
    cStack_129 = SUB31(s_isForceCached_0011f70a._5_3_,1);
    cVar13 = cStack_129;
    cStack_128 = SUB31(s_isForceCached_0011f70a._5_3_,2);
    cVar14 = cStack_128;
    uStack_127 = (undefined2)s_isForceCached_0011f70a._8_5_;
    uVar15 = uStack_127;
    cStack_125 = SUB51(s_isForceCached_0011f70a._8_5_,2);
    cVar16 = cStack_125;
    uStack_124 = SUB52(s_isForceCached_0011f70a._8_5_,3);
    uVar17 = uStack_124;
    cStack_122 = '\0';
    lVar22 = FUN_00194908(local_158,&local_130);
    uVar8 = s_isForceCached_0011f70a._8_5_;
    if (lVar22 == 0) {
      bVar19 = false;
joined_r0x00198be0:
      if (((byte)local_130 & 1) == 0) goto LAB_00198c14;
LAB_00198be4:
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
      pvVar25 = local_158[0];
      puVar26 = local_148;
      if (bVar19) goto LAB_00198c18;
    }
    else {
      local_180 = CONCAT31((int3)uVar6,0x1a);
      s_isForceCached_0011f70a[8] = (char)uVar7;
      s_isForceCached_0011f70a[9] = SUB51(uVar7,1);
      s_isForceCached_0011f70a[10] = SUB51(uVar7,2);
      s_isForceCached_0011f70a[0xb] = SUB51(uVar7,3);
      s_isForceCached_0011f70a[0xc] = SUB51(uVar7,4);
      acStack_177[0] = s_isForceCached_0011f70a[8];
      acStack_177[1] = s_isForceCached_0011f70a[9];
      acStack_177[2] = s_isForceCached_0011f70a[10];
      acStack_177[3] = s_isForceCached_0011f70a[0xb];
      acStack_177[4] = s_isForceCached_0011f70a[0xc];
      acStack_177[5] = 0;
      s_isForceCached_0011f70a._8_5_ = uVar8;
      cStack_17c = cVar10;
      cStack_17b = cVar11;
      cStack_17a = cVar12;
      cStack_179 = cVar13;
      cStack_178 = cVar14;
      lVar22 = FUN_00194908(local_158,&local_180);
      if (lVar22 == 0) {
        if (plVar40[5] == local_88) {
                    /* try { // try from 00198eec to 00198ef7 has its CatchHandler @ 001992d0 */
                    /* WARNING: Subroutine does not return */
          FUN_0013d01c("unordered_map::at: key not found");
        }
        goto LAB_00199530;
      }
      if (*(int *)(lVar22 + 0x58) == 0) {
        piVar33 = (int *)(lVar22 + 0x28);
      }
      else {
        if (*(int *)(lVar22 + 0x58) != 1) {
          if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00199140 to 00199143 has its CatchHandler @ 001992d0 */
            FUN_00187e7c();
          }
          goto LAB_00199530;
        }
        piVar33 = (int *)(lVar22 + 0x30);
      }
      bVar19 = *piVar33 == 2;
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
        goto joined_r0x00198be0;
      }
      if (((byte)local_130 & 1) != 0) goto LAB_00198be4;
LAB_00198c14:
      pvVar25 = local_158[0];
      puVar26 = local_148;
      if (bVar19) {
LAB_00198c18:
        local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                    0x1a;
        cStack_122 = '\0';
        cStack_12f = cVar9;
        uStack_12e = uVar46;
        cStack_12c = cVar10;
        cStack_12b = cVar11;
        cStack_12a = cVar12;
        cStack_129 = cVar13;
        cStack_128 = cVar14;
        uStack_127 = uVar15;
        cStack_125 = cVar16;
        uStack_124 = uVar17;
        lVar22 = FUN_00194908(local_158,&local_130);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 00199044 to 0019904f has its CatchHandler @ 00199370 */
                    /* WARNING: Subroutine does not return */
            FUN_0013d01c("unordered_map::at: key not found");
          }
          goto LAB_00199530;
        }
        if (*(int *)(lVar22 + 0x58) == 1) {
                    /* try { // try from 00198c7c to 00198c83 has its CatchHandler @ 00199370 */
          bVar20 = facebook::jsi::Value::asBool();
        }
        else {
          if (*(int *)(lVar22 + 0x58) != 0) {
            if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00199194 to 001991bb has its CatchHandler @ 00199370 */
              FUN_00187e7c();
            }
            goto LAB_00199530;
          }
          if (*(int *)(lVar22 + 0x28) != 2) {
            if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
              FUN_00141e98(*(undefined8 *)PTR_name_001a2f48);
            }
            goto LAB_00199530;
          }
          bVar20 = *(char *)(lVar22 + 0x30) != '\0';
        }
        *(byte *)(param_2 + 8) = bVar20 & 1;
        pvVar25 = local_158[0];
        puVar26 = local_148;
        if (((byte)local_130 & 1) != 0) {
          operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
          pvVar25 = local_158[0];
          puVar26 = local_148;
        }
      }
    }
    while (puVar26 != (undefined8 *)0x0) {
      pvVar41 = (void *)*puVar26;
      local_158[0] = pvVar25;
      if (*(uint *)(puVar26 + 0xb) != 0xffffffff) {
                    /* try { // try from 00198cd8 to 00198ce3 has its CatchHandler @ 00199534 */
        (*(code *)(&PTR_FUN_001a2890)[*(uint *)(puVar26 + 0xb)])(&local_130,puVar26 + 5);
      }
      *(undefined4 *)(puVar26 + 0xb) = 0xffffffff;
      if ((*(byte *)(puVar26 + 2) & 1) != 0) {
        operator_delete((void *)puVar26[4]);
      }
      operator_delete(puVar26);
      pvVar25 = local_158[0];
      puVar26 = (undefined8 *)pvVar41;
    }
    local_158[0] = (void *)0x0;
    if (pvVar25 != (void *)0x0) {
      operator_delete(pvVar25);
    }
  }
  if (plVar40[5] == local_88) {
    return;
  }
LAB_00199530:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00199538  FUN_00199538 =====

undefined4 * FUN_00199538(undefined4 *param_1,undefined4 *param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 6));
  }
  uVar6 = *(undefined8 *)(param_2 + 4);
  uVar2 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = uVar6;
  *(undefined8 *)(param_1 + 2) = uVar2;
  *(undefined2 *)(param_2 + 2) = 0;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  if ((*(byte *)(param_1 + 10) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xe));
  }
  uVar6 = *(undefined8 *)(param_2 + 0xc);
  uVar2 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = uVar6;
  *(undefined8 *)(param_1 + 10) = uVar2;
  *(undefined2 *)(param_2 + 10) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  param_1[0x12] = param_2[0x12];
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  if ((*(byte *)(param_1 + 0x14) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  uVar6 = *(undefined8 *)(param_2 + 0x16);
  uVar2 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x16) = uVar6;
  *(undefined8 *)(param_1 + 0x14) = uVar2;
  *(undefined2 *)(param_2 + 0x14) = 0;
  if ((*(byte *)(param_1 + 0x1a) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x1e));
  }
  uVar6 = *(undefined8 *)(param_2 + 0x1c);
  uVar2 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1c) = uVar6;
  *(undefined8 *)(param_1 + 0x1a) = uVar2;
  *(undefined2 *)(param_2 + 0x1a) = 0;
  puVar3 = (undefined8 *)(param_1 + 0x22);
  pvVar4 = (void *)*puVar3;
  param_1[0x20] = param_2[0x20];
  if (pvVar4 != (void *)0x0) {
    pvVar5 = *(void **)(param_1 + 0x24);
    pvVar1 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        if ((*(byte *)((long)pvVar5 + -0x18) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar5 + -8));
        }
        if ((*(byte *)((long)pvVar5 + -0x30) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar5 + -0x20));
        }
        pvVar5 = (void *)((long)pvVar5 + -0x30);
      } while (pvVar5 != pvVar4);
      pvVar1 = (void *)*puVar3;
    }
    *(void **)(param_1 + 0x24) = pvVar4;
    operator_delete(pvVar1);
    *puVar3 = 0;
    *(undefined8 *)(param_1 + 0x24) = 0;
    *(undefined8 *)(param_1 + 0x26) = 0;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x22) = uVar2;
  *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_2 + 0x22) = 0;
  *(undefined8 *)(param_2 + 0x24) = 0;
  *(undefined8 *)(param_2 + 0x26) = 0;
  return param_1;
}


// ===== 001996b4  FUN_001996b4 =====

void FUN_001996b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = (undefined8 *)param_1[2];
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 5) & 1) != 0) {
      operator_delete((void *)puVar1[7]);
    }
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}


// ===== 00199734  FUN_00199734 =====

void FUN_00199734(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    if (*(char *)(param_1 + 2) != '\0') {
      if ((*(byte *)((long)pvVar1 + 0x28) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar1 + 0x38));
      }
      if ((*(byte *)((long)pvVar1 + 0x10) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar1 + 0x20));
      }
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00199790  FUN_00199790 =====

void FUN_00199790(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar2 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0013ed60();
    }
    pvVar2 = operator_new(param_2 << 3);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)pvVar2;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar10 = NEON_cnt(param_2,1);
      uVar9 = NEON_uaddlv(uVar10,1);
      uVar6 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
      if (uVar6 < 2) {
        uVar4 = uVar4 & param_2 - 1;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar5;
      if (plVar7 != (long *)0x0) {
        do {
          uVar8 = plVar7[1];
          if (uVar6 < 2) {
            uVar8 = uVar8 & param_2 - 1;
          }
          else if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar4) {
            if (*(long *)(*param_1 + uVar8 * 8) == 0) {
              *(long **)(*param_1 + uVar8 * 8) = plVar5;
              uVar4 = uVar8;
            }
            else {
              *plVar5 = *plVar7;
              *plVar7 = **(long **)(*param_1 + uVar8 * 8);
              **(undefined8 **)(*param_1 + uVar8 * 8) = plVar7;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar7 = (long *)*plVar5;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return;
}


// ===== 001998f0  FUN_001998f0 =====

void FUN_001998f0(void)

{
  (*(code *)PTR_001a2f68)();
  return;
}


// ===== 00199910  <EXTERNAL>::__cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_001a2f70)();
  return;
}


// ===== 00199920  <EXTERNAL>::__cxa_atexit =====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_001a2f78)();
  return;
}


// ===== 00199930  <EXTERNAL>::__register_atfork =====

void __register_atfork(void)

{
  (*(code *)PTR___register_atfork_001a2f80)();
  return;
}


// ===== 00199940  facebook::react::RNSVGImageShadowNode::updateStateIfNeeded =====

void __thiscall
facebook::react::RNSVGImageShadowNode::updateStateIfNeeded(RNSVGImageShadowNode *this)

{
  (*(code *)PTR_updateStateIfNeeded_001a2f88)();
  return;
}


// ===== 00199950  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init_copy_ctor_external =====

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
__init_copy_ctor_external
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  (*(code *)PTR___init_copy_ctor_external_001a2f90)();
  return;
}


// ===== 00199960  <EXTERNAL>::facebook::react::LayoutableShadowNode::getLayoutMetrics =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::getLayoutMetrics(void)

{
  (*(code *)PTR_getLayoutMetrics_001a2f98)();
  return;
}


// ===== 00199970  <EXTERNAL>::facebook::react::ShadowNode::getSurfaceId =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getSurfaceId(void)

{
  (*(code *)PTR_getSurfaceId_001a2fa0)();
  return;
}


// ===== 00199980  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::layout =====

void facebook::react::YogaLayoutableShadowNode::layout(void)

{
  (*(code *)PTR_layout_001a2fa8)();
  return;
}


// ===== 00199990  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::completeClone =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::completeClone
               (ShadowNode *param_1,ShadowNodeFragment *param_2)

{
  (*(code *)PTR_completeClone_001a2fb0)();
  return;
}


// ===== 001999a0  <EXTERNAL>::__cxa_allocate_exception =====

void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_001a2fb8)();
  return;
}


// ===== 001999b0  <EXTERNAL>::__cxa_free_exception =====

void __cxa_free_exception(void)

{
  (*(code *)PTR___cxa_free_exception_001a2fc0)();
  return;
}


// ===== 001999c0  <EXTERNAL>::__cxa_throw =====

void __cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_001a2fc8)();
  return;
}


// ===== 001999d0  <EXTERNAL>::std::logic_error::logic_error =====

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
  (*(code *)PTR_logic_error_001a2fd0)();
  return;
}


// ===== 001999e0  <EXTERNAL>::operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_001a2fd8)();
  return pvVar1;
}


// ===== 001999f0  <EXTERNAL>::__cxa_begin_catch =====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_001a2fe0)();
  return;
}


// ===== 00199a00  <EXTERNAL>::std::terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
  (*(code *)PTR_terminate_001a2fe8)();
  return;
}


// ===== 00199a10  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 00199a20  <EXTERNAL>::memcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_001a2ff8)((int)__s1);
  return iVar1;
}


// ===== 00199a30  <EXTERNAL>::std::__ndk1::__shared_weak_count::~__shared_weak_count =====

void __thiscall std::__ndk1::__shared_weak_count::~__shared_weak_count(__shared_weak_count *this)

{
  (*(code *)PTR____shared_weak_count_001a3000)();
  return;
}


// ===== 00199a40  <EXTERNAL>::std::__ndk1::__shared_weak_count::__release_weak =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__release_weak(void)

{
  (*(code *)PTR___release_weak_001a3008)();
  return;
}


// ===== 00199a50  <EXTERNAL>::facebook::jsi::NativeState::~NativeState =====

void __thiscall facebook::jsi::NativeState::~NativeState(NativeState *this)

{
  (*(code *)PTR__NativeState_001a3010)();
  return;
}


// ===== 00199a60  <EXTERNAL>::facebook::react::State::State =====

void __thiscall facebook::react::State::State(void)

{
  (*(code *)PTR_State_001a3018)();
  return;
}


// ===== 00199a70  <EXTERNAL>::facebook::react::MapBufferBuilder::EMPTY =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::MapBufferBuilder::EMPTY(void)

{
  (*(code *)PTR_EMPTY_001a3020)();
  return;
}


// ===== 00199a80  <EXTERNAL>::folly::dynamic::dynamic =====

void __thiscall folly::dynamic::dynamic(dynamic *this,dynamic *param_1)

{
  (*(code *)PTR_dynamic_001a3028)();
  return;
}


// ===== 00199a90  <EXTERNAL>::facebook::react::ShadowNodeFamily::dispatchRawState =====

void facebook::react::ShadowNodeFamily::dispatchRawState(void)

{
  (*(code *)PTR_dispatchRawState_001a3030)();
  return;
}


// ===== 00199aa0  <EXTERNAL>::std::__ndk1::__shared_weak_count::lock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::lock(void)

{
  (*(code *)PTR_lock_001a3038)();
  return;
}


// ===== 00199ab0  <EXTERNAL>::std::exception::~exception =====

void __thiscall std::exception::~exception(exception *this)

{
  (*(code *)PTR__exception_001a3040)();
  return;
}


// ===== 00199ac0  <EXTERNAL>::folly::dynamic::destroy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::dynamic::destroy(void)

{
  (*(code *)PTR_destroy_001a3048)();
  return;
}


// ===== 00199ad0  <EXTERNAL>::facebook::react::BaseViewProps::resolveTransform =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::BaseViewProps::resolveTransform(LayoutMetrics *param_1)

{
  (*(code *)PTR_resolveTransform_001a3050)();
  return;
}


// ===== 00199ae0  facebook::react::RNSVGLayoutableShadowNode::setZeroDimensions =====

void __thiscall
facebook::react::RNSVGLayoutableShadowNode::setZeroDimensions(RNSVGLayoutableShadowNode *this)

{
  (*(code *)PTR_setZeroDimensions_001a3058)();
  return;
}


// ===== 00199af0  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode =====

void __thiscall facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(void)

{
  (*(code *)PTR_YogaLayoutableShadowNode_001a3060)();
  return;
}


// ===== 00199b00  <EXTERNAL>::strcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_001a3068)((int)__s1);
  return iVar1;
}


// ===== 00199b10  <EXTERNAL>::facebook::react::ShadowNode::getComponentName =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getComponentName(void)

{
  (*(code *)PTR_getComponentName_001a3070)();
  return;
}


// ===== 00199b20  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode =====

void __thiscall
facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
          (YogaLayoutableShadowNode *this,ShadowNode *param_1,ShadowNodeFragment *param_2)

{
  (*(code *)PTR_YogaLayoutableShadowNode_001a3078)();
  return;
}


// ===== 00199b30  facebook::react::NativeSvgRenderableModuleSpecJSI::NativeSvgRenderableModuleSpecJSI =====

void __thiscall
facebook::react::NativeSvgRenderableModuleSpecJSI::NativeSvgRenderableModuleSpecJSI
          (NativeSvgRenderableModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeSvgRenderableModuleSpecJSI_001a3080)();
  return;
}


// ===== 00199b40  facebook::react::NativeSvgViewModuleSpecJSI::NativeSvgViewModuleSpecJSI =====

void __thiscall
facebook::react::NativeSvgViewModuleSpecJSI::NativeSvgViewModuleSpecJSI
          (NativeSvgViewModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeSvgViewModuleSpecJSI_001a3088)();
  return;
}


// ===== 00199b50  <EXTERNAL>::facebook::react::JavaTurboModule::JavaTurboModule =====

void __thiscall
facebook::react::JavaTurboModule::JavaTurboModule(JavaTurboModule *this,InitParams *param_1)

{
  (*(code *)PTR_JavaTurboModule_001a3090)();
  return;
}


// ===== 00199b60  <EXTERNAL>::facebook::react::JavaTurboModule::~JavaTurboModule =====

void __thiscall facebook::react::JavaTurboModule::~JavaTurboModule(JavaTurboModule *this)

{
  (*(code *)PTR__JavaTurboModule_001a3098)();
  return;
}


// ===== 00199b70  <EXTERNAL>::facebook::react::JavaTurboModule::invokeJavaMethod =====

void facebook::react::JavaTurboModule::invokeJavaMethod(void)

{
  (*(code *)PTR_invokeJavaMethod_001a30a0)();
  return;
}


// ===== 00199b80  <EXTERNAL>::std::bad_array_new_length::bad_array_new_length =====

void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
  (*(code *)PTR_bad_array_new_length_001a30a8)();
  return;
}


// ===== 00199b90  <EXTERNAL>::std::__ndk1::__next_prime =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__next_prime(ulong param_1)

{
  (*(code *)PTR___next_prime_001a30b0)();
  return;
}


// ===== 00199ba0  <EXTERNAL>::facebook::jsi::Value::asObject =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asObject(IRuntime *param_1)

{
  (*(code *)PTR_asObject_001a30b8)();
  return;
}


// ===== 00199bb0  <EXTERNAL>::facebook::jsi::Value::~Value =====

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
  (*(code *)PTR__Value_001a30c0)();
  return;
}


// ===== 00199bc0  <EXTERNAL>::facebook::jsi::Value::Value =====

void __thiscall facebook::jsi::Value::Value(Value *this,IRuntime *param_1,Value *param_2)

{
  (*(code *)PTR_Value_001a30c8)();
  return;
}


// ===== 00199bd0  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc =====

void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc(void)

{
  (*(code *)
    PTR__ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc_001a30d0
  )();
  return;
}


// ===== 00199be0  <EXTERNAL>::facebook::react::ComponentDescriptorProviderRegistry::add =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ComponentDescriptorProviderRegistry::add(ComponentDescriptorProvider *param_1)

{
  (*(code *)PTR_add_001a30d8)();
  return;
}


// ===== 00199bf0  <EXTERNAL>::facebook::react::ComponentDescriptor::ComponentDescriptor =====

void __thiscall
facebook::react::ComponentDescriptor::ComponentDescriptor
          (ComponentDescriptor *this,ComponentDescriptorParameters *param_1,RawPropsParser *param_2)

{
  (*(code *)PTR_ComponentDescriptor_001a30e0)();
  return;
}


// ===== 00199c00  <EXTERNAL>::facebook::react::RawProps::parse =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::parse(RawPropsParser *param_1)

{
  (*(code *)PTR_parse_001a30e8)();
  return;
}


// ===== 00199c10  facebook::react::RNSVGSvgViewAndroidProps::RNSVGSvgViewAndroidProps =====

void __thiscall
facebook::react::RNSVGSvgViewAndroidProps::RNSVGSvgViewAndroidProps
          (RNSVGSvgViewAndroidProps *this,PropsParserContext *param_1,
          RNSVGSvgViewAndroidProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_RNSVGSvgViewAndroidProps_001a30f0)();
  return;
}


// ===== 00199c20  <EXTERNAL>::facebook::react::RawPropsParser::postPrepare =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawPropsParser::postPrepare(void)

{
  (*(code *)PTR_postPrepare_001a30f8)();
  return;
}


// ===== 00199c30  <EXTERNAL>::std::__ndk1::__shared_mutex_base::__shared_mutex_base =====

void __thiscall std::__ndk1::__shared_mutex_base::__shared_mutex_base(__shared_mutex_base *this)

{
  (*(code *)PTR___shared_mutex_base_001a3100)();
  return;
}


// ===== 00199c40  <EXTERNAL>::std::__ndk1::condition_variable::~condition_variable =====

void __thiscall std::__ndk1::condition_variable::~condition_variable(condition_variable *this)

{
  (*(code *)PTR__condition_variable_001a3108)();
  return;
}


// ===== 00199c50  <EXTERNAL>::std::__ndk1::mutex::~mutex =====

void __thiscall std::__ndk1::mutex::~mutex(mutex *this)

{
  (*(code *)PTR__mutex_001a3110)();
  return;
}


// ===== 00199c60  <EXTERNAL>::facebook::react::ShadowNode::transferRuntimeShadowNodeReference =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::transferRuntimeShadowNodeReference
               (shared_ptr *param_1,ShadowNodeFragment *param_2)

{
  (*(code *)PTR_transferRuntimeShadowNodeReference_001a3118)();
  return;
}


// ===== 00199c70  <EXTERNAL>::facebook::react::RawProps::isEmpty =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::isEmpty(void)

{
  (*(code *)PTR_isEmpty_001a3120)();
  return;
}


// ===== 00199c80  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid(void)

{
  (*(code *)PTR_enableExclusivePropsUpdateAndroid_001a3128)();
  return;
}


// ===== 00199c90  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid(void)

{
  (*(code *)PTR_enableAccumulatedUpdatesInRawPropsAndroid_001a3130)();
  return;
}


// ===== 00199ca0  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(void)

{
  (*(code *)PTR_enablePropsUpdateReconciliationAndroid_001a3138)();
  return;
}


// ===== 00199cb0  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter(void)

{
  (*(code *)PTR_enableCppPropsIteratorSetter_001a3140)();
  return;
}


// ===== 00199cc0  <EXTERNAL>::folly::dynamic::dynamic =====

void __thiscall folly::dynamic::dynamic(dynamic *this,dynamic *param_1)

{
  (*(code *)PTR_dynamic_001a3148)();
  return;
}


// ===== 00199cd0  <EXTERNAL>::facebook::react::RawProps::operator.cast.to.dynamic =====

void __thiscall facebook::react::RawProps::operator_cast_to_dynamic(RawProps *this)

{
  (*(code *)PTR_operator_cast_to_dynamic_001a3150)();
  return;
}


// ===== 00199ce0  <EXTERNAL>::facebook::react::HostPlatformViewProps::setProp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::HostPlatformViewProps::setProp
               (PropsParserContext *param_1,uint param_2,char *param_3,RawValue *param_4)

{
  (*(code *)PTR_setProp_001a3158)(param_1,param_2);
  return;
}


// ===== 00199cf0  <EXTERNAL>::__cxa_guard_acquire =====

void __cxa_guard_acquire(void)

{
  (*(code *)PTR___cxa_guard_acquire_001a3160)();
  return;
}


// ===== 00199d00  <EXTERNAL>::__cxa_guard_abort =====

void __cxa_guard_abort(void)

{
  (*(code *)PTR___cxa_guard_abort_001a3168)();
  return;
}


// ===== 00199d10  <EXTERNAL>::__cxa_guard_release =====

void __cxa_guard_release(void)

{
  (*(code *)PTR___cxa_guard_release_001a3170)();
  return;
}


// ===== 00199d20  <EXTERNAL>::facebook::react::Props::initializeDynamicProps =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::Props::initializeDynamicProps
               (Props *param_1,RawProps *param_2,function *param_3)

{
  (*(code *)PTR_initializeDynamicProps_001a3178)();
  return;
}


// ===== 00199d30  <EXTERNAL>::folly::TypeError::TypeError =====

void __thiscall folly::TypeError::TypeError(void)

{
  (*(code *)PTR_TypeError_001a3180)();
  return;
}


// ===== 00199d40  <EXTERNAL>::std::runtime_error::~runtime_error =====

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  (*(code *)PTR__runtime_error_001a3188)();
  return;
}


// ===== 00199d50  <EXTERNAL>::std::runtime_error::runtime_error =====

void __thiscall std::runtime_error::runtime_error(runtime_error *this,runtime_error *param_1)

{
  (*(code *)PTR_runtime_error_001a3190)();
  return;
}


// ===== 00199d60  <EXTERNAL>::strlen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_001a3198)();
  return sVar1;
}


// ===== 00199d70  <EXTERNAL>::facebook::react::EventEmitter::setShadowNodeFamily =====

void facebook::react::EventEmitter::setShadowNodeFamily(void)

{
  (*(code *)PTR_setShadowNodeFamily_001a31a0)();
  return;
}


// ===== 00199d80  <EXTERNAL>::facebook::react::EventEmitter::EventEmitter =====

void __thiscall facebook::react::EventEmitter::EventEmitter(void)

{
  (*(code *)PTR_EventEmitter_001a31a8)();
  return;
}


// ===== 00199d90  <EXTERNAL>::facebook::react::EventTarget::EventTarget =====

void __thiscall facebook::react::EventTarget::EventTarget(void)

{
  (*(code *)PTR_EventTarget_001a31b0)();
  return;
}


// ===== 00199da0  <EXTERNAL>::facebook::react::ShadowNodeFamily::ShadowNodeFamily =====

void __thiscall facebook::react::ShadowNodeFamily::ShadowNodeFamily(void)

{
  (*(code *)PTR_ShadowNodeFamily_001a31b8)();
  return;
}


// ===== 00199db0  <EXTERNAL>::facebook::react::ShadowNodeFamily::~ShadowNodeFamily =====

void __thiscall facebook::react::ShadowNodeFamily::~ShadowNodeFamily(ShadowNodeFamily *this)

{
  (*(code *)PTR__ShadowNodeFamily_001a31c0)();
  return;
}


// ===== 00199dc0  facebook::react::RNSVGSvgViewProps::RNSVGSvgViewProps =====

void __thiscall
facebook::react::RNSVGSvgViewProps::RNSVGSvgViewProps
          (RNSVGSvgViewProps *this,PropsParserContext *param_1,RNSVGSvgViewProps *param_2,
          RawProps *param_3)

{
  (*(code *)PTR_RNSVGSvgViewProps_001a31c8)();
  return;
}


// ===== 00199dd0  <EXTERNAL>::facebook::react::EventEmitter::dispatchEvent =====

void facebook::react::EventEmitter::dispatchEvent(void)

{
  (*(code *)PTR_dispatchEvent_001a31d0)();
  return;
}


// ===== 00199de0  <EXTERNAL>::__strlen_chk =====

void __strlen_chk(void)

{
  (*(code *)PTR___strlen_chk_001a31d8)();
  return;
}


// ===== 00199df0  <EXTERNAL>::facebook::jsi::Value::~Value =====

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
  (*(code *)PTR__Value_001a31e0)();
  return;
}


// ===== 00199e00  facebook::react::parsePlatformColor =====

void facebook::react::parsePlatformColor(ContextContainer *param_1,int param_2,RawValue *param_3)

{
  (*(code *)PTR_parsePlatformColor_001a31e8)(param_1,param_2);
  return;
}


// ===== 00199e10  facebook::jni::JObject::getClass =====

void facebook::jni::JObject::getClass(void)

{
  (*(code *)PTR_getClass_001a31f0)();
  return;
}


// ===== 00199e20  facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *this)

{
  (*(code *)PTR__base_owned_ref_001a31f8)();
  return;
}


// ===== 00199e30  facebook::jni::base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator> *this)

{
  (*(code *)PTR__base_owned_ref_001a3200)();
  return;
}


// ===== 00199e40  _JNIEnv::CallIntMethod =====

void _JNIEnv::CallIntMethod(_jobject *param_1,_jmethodID *param_2,...)

{
  (*(code *)PTR_CallIntMethod_001a3208)();
  return;
}


// ===== 00199e50  <EXTERNAL>::facebook::react::HostPlatformViewProps::HostPlatformViewProps =====

void __thiscall
facebook::react::HostPlatformViewProps::HostPlatformViewProps
          (HostPlatformViewProps *this,PropsParserContext *param_1,HostPlatformViewProps *param_2,
          RawProps *param_3,function *param_4)

{
  (*(code *)PTR_HostPlatformViewProps_001a3210)();
  return;
}


// ===== 00199e60  <EXTERNAL>::facebook::react::HostPlatformViewProps::getDiffProps =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::HostPlatformViewProps::getDiffProps(Props *param_1)

{
  (*(code *)PTR_getDiffProps_001a3218)();
  return;
}


// ===== 00199e70  <EXTERNAL>::folly::dynamic::operator[] =====

void folly::dynamic::operator[](void)

{
  (*(code *)PTR_operator___001a3220)();
  return;
}


// ===== 00199e80  <EXTERNAL>::folly::dynamic::operator= =====

void __thiscall folly::dynamic::operator=(dynamic *this,dynamic *param_1)

{
  (*(code *)PTR_operator__001a3228)();
  return;
}


// ===== 00199e90  <EXTERNAL>::folly::dynamic::operator= =====

void __thiscall folly::dynamic::operator=(dynamic *this,dynamic *param_1)

{
  (*(code *)PTR_operator__001a3230)();
  return;
}


// ===== 00199ea0  <EXTERNAL>::folly::operator== =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::operator==(dynamic *param_1,dynamic *param_2)

{
  (*(code *)PTR_operator___001a3238)();
  return;
}


// ===== 00199eb0  <EXTERNAL>::abort =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_001a3240)();
  return;
}


// ===== 00199ec0  <EXTERNAL>::facebook::react::RawProps::at =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::at(char *param_1,char *param_2,char *param_3)

{
  (*(code *)PTR_at_001a3248)();
  return;
}


// ===== 00199ed0  <EXTERNAL>::google::LogMessage::LogMessage =====

void __thiscall
google::LogMessage::LogMessage(LogMessage *this,char *param_1,int param_2,int param_3)

{
  (*(code *)PTR_LogMessage_001a3250)(this,param_1,param_2,param_3);
  return;
}


// ===== 00199ee0  <EXTERNAL>::google::LogMessage::stream =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void google::LogMessage::stream(void)

{
  (*(code *)PTR_stream_001a3258)();
  return;
}


// ===== 00199ef0  <EXTERNAL>::facebook::react::RawPropsKey::operator.cast.to.basic_string =====

void __thiscall facebook::react::RawPropsKey::operator_cast_to_basic_string(RawPropsKey *this)

{
  (*(code *)PTR_operator_cast_to_basic_string_001a3260)();
  return;
}


// ===== 00199f00  <EXTERNAL>::google::LogMessage::~LogMessage =====

void __thiscall google::LogMessage::~LogMessage(LogMessage *this)

{
  (*(code *)PTR__LogMessage_001a3268)();
  return;
}


// ===== 00199f10  <EXTERNAL>::__cxa_end_catch =====

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_001a3270)();
  return;
}


// ===== 00199f20  <EXTERNAL>::facebook::jsi::dynamicFromValue =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::dynamicFromValue(Runtime *param_1,Value *param_2,function *param_3)

{
  (*(code *)PTR_dynamicFromValue_001a3278)();
  return;
}


// ===== 00199f30  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry =====

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry
          (sentry *this,basic_ostream *param_1)

{
  (*(code *)PTR_sentry_001a3280)();
  return;
}


// ===== 00199f40  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry =====

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(sentry *this)

{
  (*(code *)PTR__sentry_001a3288)();
  return;
}


// ===== 00199f50  <EXTERNAL>::std::__ndk1::ios_base::__set_badbit_and_consider_rethrow =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::__set_badbit_and_consider_rethrow(void)

{
  (*(code *)PTR___set_badbit_and_consider_rethrow_001a3290)();
  return;
}


// ===== 00199f60  <EXTERNAL>::std::__ndk1::ios_base::getloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::getloc(void)

{
  (*(code *)PTR_getloc_001a3298)();
  return;
}


// ===== 00199f70  <EXTERNAL>::std::__ndk1::locale::~locale =====

void __thiscall std::__ndk1::locale::~locale(locale *this)

{
  (*(code *)PTR__locale_001a32a0)();
  return;
}


// ===== 00199f80  <EXTERNAL>::std::__ndk1::locale::use_facet =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::locale::use_facet(id *param_1)

{
  (*(code *)PTR_use_facet_001a32a8)();
  return;
}


// ===== 00199f90  <EXTERNAL>::std::__ndk1::ios_base::clear =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::clear(uint param_1)

{
  (*(code *)PTR_clear_001a32b0)(param_1);
  return;
}


// ===== 00199fa0  <EXTERNAL>::nextafter =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double nextafter(double __x,double __y)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_nextafter_001a32b8)();
  return dVar1;
}


// ===== 00199fb0  <EXTERNAL>::std::range_error::~range_error =====

void __thiscall std::range_error::~range_error(range_error *this)

{
  (*(code *)PTR__range_error_001a32c0)();
  return;
}


// ===== 00199fc0  <EXTERNAL>::folly::makeConversionError =====

void folly::makeConversionError(void)

{
  (*(code *)PTR_makeConversionError_001a32c8)();
  return;
}


// ===== 00199fd0  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::reserve =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     reserve(ulong param_1)

{
  (*(code *)PTR_reserve_001a32d0)();
  return;
}


// ===== 00199fe0  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     append(char *param_1,ulong param_2)

{
  (*(code *)PTR_append_001a32d8)();
  return;
}


// ===== 00199ff0  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     push_back(char param_1)

{
  (*(code *)PTR_push_back_001a32e0)(param_1);
  return;
}


// ===== 0019a000  <EXTERNAL>::folly::detail::str_to_floating<double> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::detail::str_to_floating<double>(Range *param_1)

{
  (*(code *)PTR_str_to_floating<double>_001a32e8)();
  return;
}


// ===== 0019a010  <EXTERNAL>::facebook::jsi::Value::asNumber =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asNumber(void)

{
  (*(code *)PTR_asNumber_001a32f0)();
  return;
}


// ===== 0019a020  <EXTERNAL>::facebook::jsi::Value::asString =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asString(IRuntime *param_1)

{
  (*(code *)PTR_asString_001a32f8)();
  return;
}


// ===== 0019a030  <EXTERNAL>::double_conversion::DoubleToStringConverter::ToShortestIeeeNumber =====

void double_conversion::DoubleToStringConverter::ToShortestIeeeNumber(void)

{
  (*(code *)PTR_ToShortestIeeeNumber_001a3300)();
  return;
}


// ===== 0019a040  <EXTERNAL>::folly::detail::str_to_integral<long> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::detail::str_to_integral<long>(Range *param_1)

{
  (*(code *)PTR_str_to_integral<long>_001a3308)();
  return;
}


// ===== 0019a050  <EXTERNAL>::facebook::react::getDefaultColorSpace =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::getDefaultColorSpace(void)

{
  (*(code *)PTR_getDefaultColorSpace_001a3310)();
  return;
}


// ===== 0019a060  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableNativeCSSParsing =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableNativeCSSParsing(void)

{
  (*(code *)PTR_enableNativeCSSParsing_001a3318)();
  return;
}


// ===== 0019a070  <EXTERNAL>::facebook::react::colorFromComponents =====

void facebook::react::colorFromComponents(void)

{
  (*(code *)PTR_colorFromComponents_001a3320)();
  return;
}


// ===== 0019a080  <EXTERNAL>::remainderf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float remainderf(float __x,float __y)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_remainderf_001a3328)();
  return fVar1;
}


// ===== 0019a090  <EXTERNAL>::folly::dynamic::size =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::dynamic::size(void)

{
  (*(code *)PTR_size_001a3330)();
  return;
}


// ===== 0019a0a0  <EXTERNAL>::facebook::jsi::Value::Value =====

void __thiscall facebook::jsi::Value::Value(Value *this,Value *param_1)

{
  (*(code *)PTR_Value_001a3338)();
  return;
}


// ===== 0019a0b0  <EXTERNAL>::std::__ndk1::__call_once =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__call_once(ulong *param_1,void *param_2,_func_void_void_ptr *param_3)

{
  (*(code *)PTR___call_once_001a3340)();
  return;
}


// ===== 0019a0c0  <EXTERNAL>::std::__ndk1::mutex::lock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::lock(void)

{
  (*(code *)PTR_lock_001a3348)();
  return;
}


// ===== 0019a0d0  <EXTERNAL>::std::__ndk1::__shared_mutex_base::lock_shared =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_mutex_base::lock_shared(void)

{
  (*(code *)PTR_lock_shared_001a3350)();
  return;
}


// ===== 0019a0e0  <EXTERNAL>::facebook::jni::Environment::current =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::Environment::current(void)

{
  (*(code *)PTR_current_001a3358)();
  return;
}


// ===== 0019a0f0  <EXTERNAL>::facebook::jni::throwPendingJniExceptionAsCppException =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwPendingJniExceptionAsCppException(void)

{
  (*(code *)PTR_throwPendingJniExceptionAsCppException_001a3360)();
  return;
}


// ===== 0019a100  <EXTERNAL>::std::__ndk1::__shared_mutex_base::unlock_shared =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_mutex_base::unlock_shared(void)

{
  (*(code *)PTR_unlock_shared_001a3368)();
  return;
}


// ===== 0019a110  <EXTERNAL>::facebook::jni::throwCppExceptionIf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwCppExceptionIf(bool param_1)

{
  (*(code *)PTR_throwCppExceptionIf_001a3370)(param_1);
  return;
}


// ===== 0019a120  <EXTERNAL>::facebook::jni::findClassStatic =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::findClassStatic(char *param_1)

{
  (*(code *)PTR_findClassStatic_001a3378)();
  return;
}


// ===== 0019a130  <EXTERNAL>::facebook::jni::make_jstring =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::make_jstring(char *param_1)

{
  (*(code *)PTR_make_jstring_001a3380)();
  return;
}


// ===== 0019a140  <EXTERNAL>::std::__ndk1::mutex::unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::unlock(void)

{
  (*(code *)PTR_unlock_001a3388)();
  return;
}


// ===== 0019a150  <EXTERNAL>::facebook::jsi::Value::asBool =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asBool(void)

{
  (*(code *)PTR_asBool_001a3390)();
  return;
}


// ===== 0019a160  <EXTERNAL>::dl_iterate_phdr =====

void dl_iterate_phdr(void)

{
  (*(code *)PTR_dl_iterate_phdr_001a3398)();
  return;
}


// ===== 0019a170  <EXTERNAL>::fwrite =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_001a33a0)();
  return sVar1;
}


// ===== 0019a180  <EXTERNAL>::memmove =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_001a33a8)();
  return pvVar1;
}


// ===== 0019a190  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_001a33b0)();
  return;
}


// ===== 0019a1a0  <EXTERNAL>::malloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_001a33b8)();
  return pvVar1;
}


// ===== 0019a1b0  <EXTERNAL>::strncmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_001a33c0)((int)__s1);
  return iVar1;
}


// ===== 0019a1c0  <EXTERNAL>::fprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_001a33c8)((int)__stream);
  return iVar1;
}


// ===== 0019a1d0  <EXTERNAL>::__stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_001a33d0)();
  return;
}


// ===== 0019a1e0  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_wrlock_001a33d8)((int)__rwlock);
  return iVar1;
}


// ===== 0019a1f0  <EXTERNAL>::syscall =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_syscall_001a33e0)();
  return lVar1;
}


// ===== 0019a200  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_unlock_001a33e8)((int)__rwlock);
  return iVar1;
}


// ===== 0019a210  <EXTERNAL>::memcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_001a33f0)();
  return pvVar1;
}


// ===== 0019a220  <EXTERNAL>::getauxval =====

void getauxval(void)

{
  (*(code *)PTR_getauxval_001a33f8)();
  return;
}


// ===== 0019a230  <EXTERNAL>::__system_property_get =====

void __system_property_get(void)

{
  (*(code *)PTR___system_property_get_001a3400)();
  return;
}


// ===== 0019a240  <EXTERNAL>::getpid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_001a3408)();
  return _Var1;
}


// ===== 0019a250  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_rdlock_001a3410)((int)__rwlock);
  return iVar1;
}


// ===== 0019a260  <EXTERNAL>::memset =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_001a3418)(__s,__c);
  return pvVar1;
}


// ===== 0019a270  <EXTERNAL>::fflush =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_001a3420)((int)__stream);
  return iVar1;
}


// ===== 001ba000  <EXTERNAL>::__cxa_finalize =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba008  <EXTERNAL>::__cxa_atexit =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba010  <EXTERNAL>::__register_atfork =====

/* WARNING: Control flow encountered bad instruction data */

void __register_atfork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba018  <EXTERNAL>::facebook::react::LayoutableShadowNode::getLayoutMetrics =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::getLayoutMetrics(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba020  <EXTERNAL>::__gxx_personality_v0 =====

/* WARNING: Control flow encountered bad instruction data */

void __gxx_personality_v0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba028  <EXTERNAL>::facebook::react::ShadowNode::getSurfaceId =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getSurfaceId(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba030  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::layout =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::YogaLayoutableShadowNode::layout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba038  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::completeClone =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::completeClone
               (ShadowNode *param_1,ShadowNodeFragment *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba040  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::appendChild =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::appendChild(shared_ptr *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba048  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::replaceChild =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::replaceChild
               (ShadowNode *param_1,shared_ptr *param_2,ulong param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba050  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::layoutTree =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::YogaLayoutableShadowNode::layoutTree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba058  <EXTERNAL>::facebook::react::LayoutableShadowNode::measureContent =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::measureContent
               (LayoutContext *param_1,LayoutConstraints *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba060  <EXTERNAL>::facebook::react::LayoutableShadowNode::measure =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::measure
               (LayoutContext *param_1,LayoutConstraints *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba068  <EXTERNAL>::facebook::react::LayoutableShadowNode::getContentOriginOffset =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::getContentOriginOffset(bool param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba070  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::dirtyLayout =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::dirtyLayout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba078  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::getIsLayoutClean =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::getIsLayoutClean(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba080  <EXTERNAL>::facebook::react::LayoutableShadowNode::baseline =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::LayoutableShadowNode::baseline(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba088  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::shouldNewRevisionDirtyMeasurement =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::shouldNewRevisionDirtyMeasurement
               (ShadowNode *param_1,ShadowNodeFragment *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba090  <EXTERNAL>::__cxa_allocate_exception =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_allocate_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba098  <EXTERNAL>::__cxa_free_exception =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_free_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba0a0  <EXTERNAL>::std::length_error::~length_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::length_error::~length_error(length_error *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba0a8  <EXTERNAL>::__cxa_throw =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_throw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba0b0  <EXTERNAL>::std::logic_error::logic_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba0b8  <EXTERNAL>::operator.new =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba0c0  <EXTERNAL>::__cxa_begin_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_begin_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba0c8  <EXTERNAL>::std::terminate =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba0d0  <EXTERNAL>::operator.delete =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba0d8  <EXTERNAL>::memcmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba0e0  <EXTERNAL>::std::__ndk1::__shared_weak_count::~__shared_weak_count =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::__shared_weak_count::~__shared_weak_count(__shared_weak_count *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba0e8  <EXTERNAL>::std::__ndk1::__shared_weak_count::__get_deleter =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__get_deleter(type_info *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba0f0  <EXTERNAL>::__cxa_pure_virtual =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_pure_virtual(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba0f8  <EXTERNAL>::std::__ndk1::__shared_weak_count::__release_weak =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__release_weak(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba100  <EXTERNAL>::facebook::jsi::NativeState::~NativeState =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::NativeState::~NativeState(NativeState *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba108  <EXTERNAL>::facebook::react::State::State =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::State::State(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba110  <EXTERNAL>::facebook::react::MapBufferBuilder::EMPTY =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::MapBufferBuilder::EMPTY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba118  <EXTERNAL>::folly::dynamic::dynamic =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall folly::dynamic::dynamic(dynamic *this,dynamic *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba120  <EXTERNAL>::facebook::react::ShadowNodeFamily::dispatchRawState =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::ShadowNodeFamily::dispatchRawState(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba128  <EXTERNAL>::std::__ndk1::__shared_weak_count::lock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba130  <EXTERNAL>::std::exception::~exception =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::exception::~exception(exception *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba138  <EXTERNAL>::std::exception::what =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::exception::what(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba140  <EXTERNAL>::folly::dynamic::destroy =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::dynamic::destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba148  <EXTERNAL>::facebook::react::BaseViewProps::resolveTransform =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::BaseViewProps::resolveTransform(LayoutMetrics *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba198  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba1a0  <EXTERNAL>::strcmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba1a8  <EXTERNAL>::facebook::react::ShadowNode::getComponentName =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getComponentName(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba1b0  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
          (YogaLayoutableShadowNode *this,ShadowNode *param_1,ShadowNodeFragment *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba1b8  <EXTERNAL>::facebook::react::LayoutableShadowNode::getTransform =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::getTransform(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba1c0  <EXTERNAL>::facebook::react::LayoutableShadowNode::canBeTouchTarget =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::canBeTouchTarget(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba1c8  <EXTERNAL>::facebook::react::LayoutableShadowNode::canChildrenBeTouchTarget =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::canChildrenBeTouchTarget(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba1d0  <EXTERNAL>::std::out_of_range::~out_of_range =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::out_of_range::~out_of_range(out_of_range *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba1e8  <EXTERNAL>::facebook::react::JavaTurboModule::JavaTurboModule =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
facebook::react::JavaTurboModule::JavaTurboModule(JavaTurboModule *this,InitParams *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba1f0  <EXTERNAL>::facebook::jsi::HostObject::set =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::HostObject::set(Runtime *param_1,PropNameID *param_2,Value *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba1f8  <EXTERNAL>::facebook::react::JavaTurboModule::~JavaTurboModule =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::JavaTurboModule::~JavaTurboModule(JavaTurboModule *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba200  <EXTERNAL>::facebook::react::JavaTurboModule::invokeJavaMethod =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::JavaTurboModule::invokeJavaMethod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba208  <EXTERNAL>::std::bad_array_new_length::bad_array_new_length =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba210  <EXTERNAL>::std::bad_array_new_length::~bad_array_new_length =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba218  <EXTERNAL>::std::__ndk1::__next_prime =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__next_prime(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba220  <EXTERNAL>::facebook::jsi::Value::asObject =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asObject(IRuntime *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba228  <EXTERNAL>::facebook::jsi::Value::~Value =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba230  <EXTERNAL>::facebook::jsi::Value::Value =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::Value::Value(Value *this,IRuntime *param_1,Value *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba248  <EXTERNAL>::facebook::react::ComponentDescriptorProviderRegistry::add =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ComponentDescriptorProviderRegistry::add(ComponentDescriptorProvider *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba250  <EXTERNAL>::facebook::react::ComponentDescriptor::ComponentDescriptor =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
facebook::react::ComponentDescriptor::ComponentDescriptor
          (ComponentDescriptor *this,ComponentDescriptorParameters *param_1,RawPropsParser *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba258  <EXTERNAL>::facebook::react::RawProps::parse =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::parse(RawPropsParser *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba260  <EXTERNAL>::facebook::react::RawPropsParser::postPrepare =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawPropsParser::postPrepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba268  <EXTERNAL>::std::__ndk1::__shared_mutex_base::__shared_mutex_base =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::__shared_mutex_base::__shared_mutex_base(__shared_mutex_base *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba270  <EXTERNAL>::std::__ndk1::condition_variable::~condition_variable =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::condition_variable::~condition_variable(condition_variable *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba278  <EXTERNAL>::std::__ndk1::mutex::~mutex =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::mutex::~mutex(mutex *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba280  <EXTERNAL>::facebook::react::ShadowNode::transferRuntimeShadowNodeReference =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::transferRuntimeShadowNodeReference
               (shared_ptr *param_1,ShadowNodeFragment *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba288  <EXTERNAL>::facebook::react::RawProps::isEmpty =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::isEmpty(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba290  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba298  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba2a0  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba2a8  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba2b0  <EXTERNAL>::folly::dynamic::dynamic =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall folly::dynamic::dynamic(dynamic *this,dynamic *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba2b8  <EXTERNAL>::facebook::react::RawProps::operator.cast.to.dynamic =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::RawProps::operator_cast_to_dynamic(RawProps *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba2c0  <EXTERNAL>::facebook::react::HostPlatformViewProps::setProp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::HostPlatformViewProps::setProp
               (PropsParserContext *param_1,uint param_2,char *param_3,RawValue *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba2c8  <EXTERNAL>::__cxa_guard_acquire =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_acquire(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba2d0  <EXTERNAL>::__cxa_guard_abort =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba2d8  <EXTERNAL>::__cxa_guard_release =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba2e0  <EXTERNAL>::facebook::react::Props::initializeDynamicProps =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::Props::initializeDynamicProps
               (Props *param_1,RawProps *param_2,function *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba2e8  <EXTERNAL>::folly::TypeError::TypeError =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall folly::TypeError::TypeError(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba2f0  <EXTERNAL>::std::runtime_error::~runtime_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba2f8  <EXTERNAL>::std::runtime_error::runtime_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::runtime_error(runtime_error *this,runtime_error *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba300  <EXTERNAL>::std::runtime_error::what =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::runtime_error::what(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba308  <EXTERNAL>::strlen =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba310  <EXTERNAL>::facebook::react::EventEmitter::setShadowNodeFamily =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::EventEmitter::setShadowNodeFamily(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba318  <EXTERNAL>::facebook::react::EventEmitter::EventEmitter =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::EventEmitter::EventEmitter(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba320  <EXTERNAL>::facebook::react::EventTarget::EventTarget =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::EventTarget::EventTarget(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba328  <EXTERNAL>::facebook::react::ShadowNodeFamily::ShadowNodeFamily =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::ShadowNodeFamily::ShadowNodeFamily(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba330  <EXTERNAL>::facebook::react::ShadowNodeFamily::~ShadowNodeFamily =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::ShadowNodeFamily::~ShadowNodeFamily(ShadowNodeFamily *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba350  <EXTERNAL>::facebook::react::EventEmitter::dispatchEvent =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::EventEmitter::dispatchEvent(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba358  <EXTERNAL>::__strlen_chk =====

/* WARNING: Control flow encountered bad instruction data */

void __strlen_chk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba360  <EXTERNAL>::facebook::jsi::Value::~Value =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba368  <EXTERNAL>::facebook::react::HostPlatformViewProps::HostPlatformViewProps =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
facebook::react::HostPlatformViewProps::HostPlatformViewProps
          (HostPlatformViewProps *this,PropsParserContext *param_1,HostPlatformViewProps *param_2,
          RawProps *param_3,function *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba370  <EXTERNAL>::facebook::react::HostPlatformViewProps::getDiffProps =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::HostPlatformViewProps::getDiffProps(Props *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba378  <EXTERNAL>::folly::dynamic::operator[] =====

/* WARNING: Control flow encountered bad instruction data */

void folly::dynamic::operator[](void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba380  <EXTERNAL>::folly::dynamic::operator= =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall folly::dynamic::operator=(dynamic *this,dynamic *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba388  <EXTERNAL>::folly::dynamic::operator= =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall folly::dynamic::operator=(dynamic *this,dynamic *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba390  <EXTERNAL>::facebook::react::HostPlatformViewProps::getDiffPropsImplementationTarget =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::HostPlatformViewProps::getDiffPropsImplementationTarget(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba398  <EXTERNAL>::facebook::react::Props::getDiffPropsImplementationTarget =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::Props::getDiffPropsImplementationTarget(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba3a0  <EXTERNAL>::folly::operator== =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::operator==(dynamic *param_1,dynamic *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba3a8  <EXTERNAL>::abort =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba3b0  <EXTERNAL>::facebook::react::RawProps::at =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::at(char *param_1,char *param_2,char *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba3b8  <EXTERNAL>::google::LogMessage::LogMessage =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
google::LogMessage::LogMessage(LogMessage *this,char *param_1,int param_2,int param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba3c0  <EXTERNAL>::google::LogMessage::stream =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void google::LogMessage::stream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba3c8  <EXTERNAL>::facebook::react::RawPropsKey::operator.cast.to.basic_string =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::RawPropsKey::operator_cast_to_basic_string(RawPropsKey *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba3d0  <EXTERNAL>::google::LogMessage::~LogMessage =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall google::LogMessage::~LogMessage(LogMessage *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba3d8  <EXTERNAL>::__cxa_end_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_end_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba3e0  <EXTERNAL>::facebook::jsi::dynamicFromValue =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::dynamicFromValue(Runtime *param_1,Value *param_2,function *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba3e8  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry
          (sentry *this,basic_ostream *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba3f0  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(sentry *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba3f8  <EXTERNAL>::std::__ndk1::ios_base::__set_badbit_and_consider_rethrow =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::__set_badbit_and_consider_rethrow(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba400  <EXTERNAL>::std::__ndk1::ios_base::getloc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::getloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba408  <EXTERNAL>::std::__ndk1::locale::~locale =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::locale::~locale(locale *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba410  <EXTERNAL>::std::__ndk1::locale::use_facet =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::locale::use_facet(id *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba418  <EXTERNAL>::std::__ndk1::ios_base::clear =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::clear(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba420  <EXTERNAL>::nextafter =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double nextafter(double __x,double __y)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba428  <EXTERNAL>::std::range_error::~range_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::range_error::~range_error(range_error *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba430  <EXTERNAL>::folly::makeConversionError =====

/* WARNING: Control flow encountered bad instruction data */

void folly::makeConversionError(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba438  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::reserve =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     reserve(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba440  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     append(char *param_1,ulong param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba448  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     push_back(char param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba450  <EXTERNAL>::folly::detail::str_to_floating<double> =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::detail::str_to_floating<double>(Range *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba458  <EXTERNAL>::facebook::jsi::Value::asNumber =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asNumber(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba460  <EXTERNAL>::facebook::jsi::Value::asString =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asString(IRuntime *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba468  <EXTERNAL>::double_conversion::DoubleToStringConverter::ToShortestIeeeNumber =====

/* WARNING: Control flow encountered bad instruction data */

void double_conversion::DoubleToStringConverter::ToShortestIeeeNumber(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba470  <EXTERNAL>::folly::detail::str_to_integral<long> =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::detail::str_to_integral<long>(Range *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba478  <EXTERNAL>::facebook::react::getDefaultColorSpace =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::getDefaultColorSpace(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba480  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableNativeCSSParsing =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableNativeCSSParsing(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba488  <EXTERNAL>::facebook::react::colorFromComponents =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::colorFromComponents(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba490  <EXTERNAL>::remainderf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float remainderf(float __x,float __y)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba498  <EXTERNAL>::folly::dynamic::size =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::dynamic::size(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba4a0  <EXTERNAL>::facebook::jsi::Value::Value =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::Value::Value(Value *this,Value *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba4a8  <EXTERNAL>::facebook::react::configurePlatformColorCacheInvalidationHook =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::configurePlatformColorCacheInvalidationHook(function *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba4b0  <EXTERNAL>::std::__ndk1::__call_once =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__call_once(ulong *param_1,void *param_2,_func_void_void_ptr *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba4b8  <EXTERNAL>::std::__ndk1::mutex::lock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba4c0  <EXTERNAL>::std::__ndk1::__shared_mutex_base::lock_shared =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_mutex_base::lock_shared(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba4c8  <EXTERNAL>::facebook::jni::Environment::current =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::Environment::current(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba4d0  <EXTERNAL>::facebook::jni::throwPendingJniExceptionAsCppException =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwPendingJniExceptionAsCppException(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba4d8  <EXTERNAL>::std::__ndk1::__shared_mutex_base::unlock_shared =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_mutex_base::unlock_shared(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba4e0  <EXTERNAL>::facebook::jni::throwCppExceptionIf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwCppExceptionIf(bool param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba4e8  <EXTERNAL>::facebook::jni::findClassStatic =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::findClassStatic(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba4f0  <EXTERNAL>::facebook::jni::make_jstring =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::make_jstring(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba4f8  <EXTERNAL>::std::__ndk1::mutex::unlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::unlock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba500  <EXTERNAL>::facebook::jsi::Value::asBool =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asBool(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba570  <EXTERNAL>::dl_iterate_phdr =====

/* WARNING: Control flow encountered bad instruction data */

void dl_iterate_phdr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba578  <EXTERNAL>::fwrite =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba580  <EXTERNAL>::memmove =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba588  <EXTERNAL>::free =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba590  <EXTERNAL>::malloc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba598  <EXTERNAL>::strncmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba5a0  <EXTERNAL>::fprintf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba5a8  <EXTERNAL>::__stack_chk_fail =====

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba5b0  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba5c0  <EXTERNAL>::syscall =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba5c8  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba5d0  <EXTERNAL>::memcpy =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba5d8  <EXTERNAL>::getauxval =====

/* WARNING: Control flow encountered bad instruction data */

void getauxval(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba5e0  <EXTERNAL>::__system_property_get =====

/* WARNING: Control flow encountered bad instruction data */

void __system_property_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba5e8  <EXTERNAL>::getpid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba5f0  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba5f8  <EXTERNAL>::memset =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001ba600  <EXTERNAL>::fflush =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


