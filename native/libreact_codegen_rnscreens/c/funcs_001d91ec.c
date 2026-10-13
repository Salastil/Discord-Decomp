// ===== 001d91ec  FUN_001d91ec =====

void FUN_001d91ec(undefined8 param_1,undefined4 *param_2)

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
  FUN_001c862c(local_40);
  uVar1 = (ulong)(local_40[0] >> 1);
  if ((local_40[0] & 1) != 0) {
    uVar1 = local_38;
  }
  if ((long)uVar1 < 6) {
    if (uVar1 == 4) {
      plVar2 = (long *)((ulong)local_40 | 1);
      if ((local_40[0] & 1) != 0) {
        plVar2 = local_30;
      }
      if ((int)*plVar2 == 0x6b636162) {
        *param_2 = 0;
      }
      else {
        if ((int)*plVar2 != 0x7466656c) goto LAB_001d93d0;
        *param_2 = 2;
      }
    }
    else {
      if (uVar1 != 5) goto LAB_001d93d0;
      plVar2 = (long *)((ulong)local_40 | 1);
      if ((local_40[0] & 1) != 0) {
        plVar2 = local_30;
      }
      if ((int)*plVar2 == 0x68676972 && *(char *)((long)plVar2 + 4) == 't') {
        *param_2 = 1;
      }
      else {
        if ((int)*plVar2 != 0x6c746974 || *(char *)((long)plVar2 + 4) != 'e') goto LAB_001d93d0;
        *param_2 = 3;
      }
    }
joined_r0x001d92f8:
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
    if (*(long *)(lVar3 + 0x28) == local_28) {
      return;
    }
  }
  else {
    if (uVar1 == 6) {
      plVar2 = (long *)((ulong)local_40 | 1);
      if ((local_40[0] & 1) != 0) {
        plVar2 = local_30;
      }
      if ((int)*plVar2 == 0x746e6563 && *(short *)((long)plVar2 + 4) == 0x7265) {
        *param_2 = 4;
        goto joined_r0x001d92f8;
      }
    }
    else if (uVar1 == 9) {
      plVar2 = (long *)((ulong)local_40 | 1);
      if ((local_40[0] & 1) != 0) {
        plVar2 = local_30;
      }
      if (*plVar2 == 0x6142686372616573 && (char)plVar2[1] == 'r') {
        *param_2 = 5;
        goto joined_r0x001d92f8;
      }
    }
LAB_001d93d0:
    if (*(long *)(lVar3 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001d93e0 to 001d93e3 has its CatchHandler @ 001d93e4 */
      abort();
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001d9414  FUN_001d9414 =====

void FUN_001d9414(undefined8 param_1,undefined4 *param_2)

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
  FUN_001c862c(local_40);
  uVar1 = (ulong)(local_40[0] >> 1);
  if ((local_40[0] & 1) != 0) {
    uVar1 = local_38;
  }
  if ((long)uVar1 < 9) {
    if (uVar1 == 4) {
      plVar2 = (long *)((ulong)local_40 | 1);
      if ((local_40[0] & 1) != 0) {
        plVar2 = local_30;
      }
      if ((int)*plVar2 == 0x656e6f6e) {
        *param_2 = 1;
        goto joined_r0x001d9514;
      }
    }
    else if (uVar1 == 5) {
      plVar2 = (long *)((ulong)local_40 | 1);
      if ((local_40[0] & 1) != 0) {
        plVar2 = local_30;
      }
      if ((int)*plVar2 == 0x64726f77 && *(char *)((long)plVar2 + 4) == 's') {
        *param_2 = 2;
        goto joined_r0x001d9514;
      }
    }
  }
  else if (uVar1 == 9) {
    plVar2 = (long *)((ulong)local_40 | 1);
    if ((local_40[0] & 1) != 0) {
      plVar2 = local_30;
    }
    if (*plVar2 == 0x65636e65746e6573 && (char)plVar2[1] == 's') {
      *param_2 = 3;
joined_r0x001d9514:
      if ((local_40[0] & 1) != 0) {
        operator_delete(local_30);
      }
      if (*(long *)(lVar3 + 0x28) == local_28) {
        return;
      }
      goto LAB_001d964c;
    }
  }
  else if (uVar1 == 10) {
    plVar2 = (long *)((ulong)local_40 | 1);
    if ((local_40[0] & 1) != 0) {
      plVar2 = local_30;
    }
    if (*plVar2 == 0x6574636172616863 && (short)plVar2[1] == 0x7372) {
      *param_2 = 4;
      goto joined_r0x001d9514;
    }
  }
  else if (uVar1 == 0xd) {
    plVar2 = (long *)((ulong)local_40 | 1);
    if ((local_40[0] & 1) != 0) {
      plVar2 = local_30;
    }
    if (*plVar2 == 0x65446d6574737973 && *(long *)((long)plVar2 + 5) == 0x746c75616665446d) {
      *param_2 = 0;
      goto joined_r0x001d9514;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001d961c to 001d961f has its CatchHandler @ 001d9620 */
    abort();
  }
LAB_001d964c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001d9650  FUN_001d9650 =====

void FUN_001d9650(undefined8 param_1,undefined4 *param_2)

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
  FUN_001c862c(local_40);
  uVar1 = (ulong)(local_40[0] >> 1);
  if ((local_40[0] & 1) != 0) {
    uVar1 = local_38;
  }
  if ((long)uVar1 < 10) {
    if (uVar1 == 6) {
      plVar2 = (long *)((ulong)local_40 | 1);
      if ((local_40[0] & 1) != 0) {
        plVar2 = local_30;
      }
      if ((int)*plVar2 == 0x696c6e69 && *(short *)((long)plVar2 + 4) == 0x656e) {
        *param_2 = 1;
joined_r0x001d9804:
        if ((local_40[0] & 1) != 0) {
          operator_delete(local_30);
        }
        if (*(long *)(lVar3 + 0x28) == local_28) {
          return;
        }
        goto LAB_001d98fc;
      }
    }
    else if (uVar1 == 7) {
      plVar2 = (long *)((ulong)local_40 | 1);
      if ((local_40[0] & 1) != 0) {
        plVar2 = local_30;
      }
      if ((int)*plVar2 == 0x63617473 && *(int *)((long)plVar2 + 3) == 0x64656b63) {
        *param_2 = 2;
        goto joined_r0x001d9804;
      }
    }
    else if (uVar1 == 9) {
      plVar2 = (long *)((ulong)local_40 | 1);
      if ((local_40[0] & 1) != 0) {
        plVar2 = local_30;
      }
      if (*plVar2 == 0x6974616d6f747561 && (char)plVar2[1] == 'c') {
        *param_2 = 0;
        goto joined_r0x001d9804;
      }
    }
  }
  else if (uVar1 == 10) {
    plVar2 = (long *)((ulong)local_40 | 1);
    if ((local_40[0] & 1) != 0) {
      plVar2 = local_30;
    }
    if (*plVar2 == 0x7461726765746e69 && (short)plVar2[1] == 0x6465) {
      *param_2 = 3;
      goto joined_r0x001d9804;
    }
  }
  else if (uVar1 == 0x10) {
    plVar2 = (long *)((ulong)local_40 | 1);
    if ((local_40[0] & 1) != 0) {
      plVar2 = local_30;
    }
    if (*plVar2 == 0x7461726765746e69 && plVar2[1] == 0x6e6f747475426465) {
      *param_2 = 4;
      goto joined_r0x001d9804;
    }
  }
  else if (uVar1 == 0x12) {
    plVar2 = (long *)((ulong)local_40 | 1);
    if ((local_40[0] & 1) != 0) {
      plVar2 = local_30;
    }
    if ((*plVar2 == 0x7461726765746e69 && plVar2[1] == 0x7265746e65436465) &&
        (short)plVar2[2] == 0x6465) {
      *param_2 = 5;
      goto joined_r0x001d9804;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001d98cc to 001d98cf has its CatchHandler @ 001d98d0 */
    abort();
  }
LAB_001d98fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001d9900  FUN_001d9900 =====

void FUN_001d9900(undefined8 param_1,undefined4 *param_2)

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
  FUN_001c862c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 4) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if ((int)*plVar2 == 0x65757274) {
      *param_2 = 2;
joined_r0x001d99e4:
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
      goto LAB_001d9a84;
    }
  }
  else if (uVar1 == 5) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if ((int)*plVar2 == 0x736c6166 && *(char *)((long)plVar2 + 4) == 'e') {
      *param_2 = 1;
      goto joined_r0x001d99e4;
    }
  }
  else if (uVar1 == 9) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if (*plVar2 == 0x656e696665646e75 && (char)plVar2[1] == 'd') {
      *param_2 = 0;
      goto joined_r0x001d99e4;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001d9a54 to 001d9a57 has its CatchHandler @ 001d9a58 */
    abort();
  }
LAB_001d9a84:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001d9a88  FUN_001d9a88 =====

void FUN_001d9a88(undefined8 param_1,undefined4 *param_2)

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
  FUN_001c862c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 4) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if ((int)*plVar2 == 0x65757274) {
      *param_2 = 2;
joined_r0x001d9b6c:
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
      goto LAB_001d9c0c;
    }
  }
  else if (uVar1 == 5) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if ((int)*plVar2 == 0x736c6166 && *(char *)((long)plVar2 + 4) == 'e') {
      *param_2 = 1;
      goto joined_r0x001d9b6c;
    }
  }
  else if (uVar1 == 9) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if (*plVar2 == 0x656e696665646e75 && (char)plVar2[1] == 'd') {
      *param_2 = 0;
      goto joined_r0x001d9b6c;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001d9bdc to 001d9bdf has its CatchHandler @ 001d9be0 */
    abort();
  }
LAB_001d9c0c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001d9c10  FUN_001d9c10 =====

void FUN_001d9c10(undefined8 param_1,undefined4 *param_2)

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
  FUN_001c862c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 4) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if ((int)*plVar2 == 0x64726168) {
      *param_2 = 1;
    }
    else {
      if ((int)*plVar2 != 0x74666f73) goto LAB_001d9d78;
      *param_2 = 2;
    }
joined_r0x001d9d3c:
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
  }
  else {
    if (uVar1 == 6) {
      plVar2 = (long *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        plVar2 = local_40;
      }
      if ((int)*plVar2 == 0x64646968 && *(short *)((long)plVar2 + 4) == 0x6e65) {
        *param_2 = 3;
        goto joined_r0x001d9d3c;
      }
    }
    else if (uVar1 == 9) {
      plVar2 = (long *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        plVar2 = local_40;
      }
      if (*plVar2 == 0x6974616d6f747561 && (char)plVar2[1] == 'c') {
        *param_2 = 0;
        goto joined_r0x001d9d3c;
      }
    }
LAB_001d9d78:
    if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001d9d88 to 001d9d8b has its CatchHandler @ 001d9d8c */
      abort();
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001d9dbc  FUN_001d9dbc =====

void FUN_001d9dbc(undefined8 param_1,undefined4 *param_2)

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
  FUN_001c862c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 4) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if ((int)*plVar2 == 0x64726168) {
      *param_2 = 1;
    }
    else {
      if ((int)*plVar2 != 0x74666f73) goto LAB_001d9f24;
      *param_2 = 2;
    }
joined_r0x001d9ee8:
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
  }
  else {
    if (uVar1 == 6) {
      plVar2 = (long *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        plVar2 = local_40;
      }
      if ((int)*plVar2 == 0x64646968 && *(short *)((long)plVar2 + 4) == 0x6e65) {
        *param_2 = 3;
        goto joined_r0x001d9ee8;
      }
    }
    else if (uVar1 == 9) {
      plVar2 = (long *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        plVar2 = local_40;
      }
      if (*plVar2 == 0x6974616d6f747561 && (char)plVar2[1] == 'c') {
        *param_2 = 0;
        goto joined_r0x001d9ee8;
      }
    }
LAB_001d9f24:
    if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001d9f34 to 001d9f37 has its CatchHandler @ 001d9f38 */
      abort();
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001d9f68  FUN_001d9f68 =====

void FUN_001d9f68(undefined8 param_1,undefined4 *param_2)

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
  FUN_001c862c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 4) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if ((int)*plVar2 == 0x64726168) {
      *param_2 = 1;
    }
    else {
      if ((int)*plVar2 != 0x74666f73) goto LAB_001da0d0;
      *param_2 = 2;
    }
joined_r0x001da094:
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
  }
  else {
    if (uVar1 == 6) {
      plVar2 = (long *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        plVar2 = local_40;
      }
      if ((int)*plVar2 == 0x64646968 && *(short *)((long)plVar2 + 4) == 0x6e65) {
        *param_2 = 3;
        goto joined_r0x001da094;
      }
    }
    else if (uVar1 == 9) {
      plVar2 = (long *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        plVar2 = local_40;
      }
      if (*plVar2 == 0x6974616d6f747561 && (char)plVar2[1] == 'c') {
        *param_2 = 0;
        goto joined_r0x001da094;
      }
    }
LAB_001da0d0:
    if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001da0e0 to 001da0e3 has its CatchHandler @ 001da0e4 */
      abort();
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001da114  FUN_001da114 =====

void FUN_001da114(undefined8 param_1,undefined4 *param_2)

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
  FUN_001c862c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 4) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if ((int)*plVar2 == 0x64726168) {
      *param_2 = 1;
    }
    else {
      if ((int)*plVar2 != 0x74666f73) goto LAB_001da27c;
      *param_2 = 2;
    }
joined_r0x001da240:
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
  }
  else {
    if (uVar1 == 6) {
      plVar2 = (long *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        plVar2 = local_40;
      }
      if ((int)*plVar2 == 0x64646968 && *(short *)((long)plVar2 + 4) == 0x6e65) {
        *param_2 = 3;
        goto joined_r0x001da240;
      }
    }
    else if (uVar1 == 9) {
      plVar2 = (long *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        plVar2 = local_40;
      }
      if (*plVar2 == 0x6974616d6f747561 && (char)plVar2[1] == 'c') {
        *param_2 = 0;
        goto joined_r0x001da240;
      }
    }
LAB_001da27c:
    if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001da28c to 001da28f has its CatchHandler @ 001da290 */
      abort();
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001da2c0  FUN_001da2c0 =====

void FUN_001da2c0(undefined8 *param_1,undefined8 *param_2)

{
  ulong __n;
  void *__dest;
  undefined8 uVar1;
  void *pvVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pvVar2 = (void *)*param_2;
  __n = param_2[1] - (long)pvVar2;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* try { // try from 001da320 to 001da323 has its CatchHandler @ 001da324 */
      uVar1 = FUN_001da84c();
                    /* catch() { ... } // from try @ 001da2ec with catch @ 001da324
                       catch() { ... } // from try @ 001da320 with catch @ 001da324 */
      pvVar2 = (void *)*param_1;
      if (pvVar2 != (void *)0x0) {
        param_1[1] = pvVar2;
        operator_delete(pvVar2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_0016eec4(uVar1);
    }
                    /* try { // try from 001da2ec to 001da2f3 has its CatchHandler @ 001da324 */
    __dest = operator_new(__n);
    *param_1 = __dest;
    param_1[1] = __dest;
    param_1[2] = (long)__dest + __n;
    memcpy(__dest,pvVar2,__n);
    param_1[1] = (long)__dest + __n;
  }
  return;
}


// ===== 001da344  FUN_001da344 =====

void FUN_001da344(int *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  void *pvVar14;
  void *pvVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  void *local_98;
  void *pvStack_90;
  undefined1 uStack_79;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if (param_1[0xc] == 1) {
    uVar9 = FUN_001c8dfc(*(undefined8 *)param_1,param_1 + 2);
    if ((uVar9 & 1) != 0) {
      if (param_1[0xc] == 1) {
        FUN_001c90bc(&local_98,*(undefined8 *)param_1,param_1 + 2);
        goto LAB_001da48c;
      }
      if (param_1[0xc] == 0) goto LAB_001da3c0;
      goto LAB_001da7c0;
    }
LAB_001da3d0:
    pvVar14 = (void *)*param_2;
    param_2[1] = (long)pvVar14;
    if ((void *)param_2[2] == pvVar14) {
      pvVar4 = operator_new(8);
      *param_2 = (long)pvVar4;
      param_2[1] = (long)pvVar4;
      param_2[2] = (long)pvVar4 + 8;
      if (pvVar14 != (void *)0x0) {
        operator_delete(pvVar14);
      }
    }
    uVar19 = FUN_001da860(param_1);
    puVar16 = (undefined8 *)param_2[1];
    if (puVar16 < (undefined8 *)param_2[2]) {
      puVar8 = puVar16 + 1;
      *puVar16 = uVar19;
    }
    else {
      puVar13 = (undefined8 *)*param_2;
      lVar17 = (long)puVar16 - (long)puVar13 >> 3;
      uVar9 = lVar17 + 1;
      if (uVar9 >> 0x3d != 0) {
        if (*(long *)(lVar1 + 0x28) != local_78) goto LAB_001da848;
        FUN_001da84c();
LAB_001da7e8:
        if (*(long *)(lVar1 + 0x28) != local_78) goto LAB_001da848;
                    /* try { // try from 001da7f8 to 001da7fb has its CatchHandler @ 001da810 */
        FUN_001da84c();
LAB_001da7fc:
        if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
          FUN_001730e4();
        }
        goto LAB_001da848;
      }
      uVar6 = param_2[2] - (long)puVar13;
      uVar10 = (long)uVar6 >> 2;
      if (uVar10 <= uVar9) {
        uVar10 = uVar9;
      }
      if (0x7ffffffffffffff7 < uVar6) {
        uVar10 = 0x1fffffffffffffff;
      }
      if (uVar10 == 0) {
        pvVar14 = (void *)0x0;
      }
      else {
        if (uVar10 >> 0x3d != 0) goto LAB_001da7fc;
        pvVar14 = operator_new(uVar10 << 3);
      }
      puVar18 = (undefined8 *)((long)pvVar14 + lVar17 * 8);
      puVar8 = puVar18 + 1;
      *puVar18 = uVar19;
      if ((long)puVar16 - (long)puVar13 != 0) {
        uVar9 = ((long)puVar16 - (long)puVar13) - 8;
        puVar7 = puVar18;
        if ((0x37 < uVar9) &&
           (0x1f < (ulong)((long)puVar16 + (-((long)puVar16 - (long)puVar13) - (long)pvVar14)))) {
          puVar12 = puVar16 + -2;
          uVar9 = (uVar9 >> 3) + 1;
          uVar11 = uVar9 & 0x3ffffffffffffffc;
          puVar16 = puVar16 + -uVar11;
          puVar7 = puVar18 + -uVar11;
          puVar18 = puVar18 + -2;
          uVar6 = uVar11;
          do {
            puVar2 = puVar12 + -1;
            uVar21 = puVar12[-2];
            uVar20 = puVar12[1];
            uVar19 = *puVar12;
            uVar6 = uVar6 - 4;
            puVar12 = puVar12 + -4;
            puVar18[-1] = *puVar2;
            puVar18[-2] = uVar21;
            puVar18[1] = uVar20;
            *puVar18 = uVar19;
            puVar18 = puVar18 + -4;
          } while (uVar6 != 0);
          puVar18 = puVar7;
          if (uVar9 == uVar11) goto LAB_001da744;
        }
        do {
          puVar16 = puVar16 + -1;
          puVar18 = puVar7 + -1;
          *puVar18 = *puVar16;
          puVar7 = puVar18;
        } while (puVar16 != puVar13);
      }
LAB_001da744:
      *param_2 = (long)puVar18;
      param_2[1] = (long)puVar8;
      param_2[2] = (long)((long)pvVar14 + uVar10 * 8);
      if (puVar13 != (undefined8 *)0x0) {
        operator_delete(puVar13);
      }
    }
    param_2[1] = (long)puVar8;
  }
  else {
    if (param_1[0xc] != 0) {
LAB_001da7c0:
      if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_001c858c();
      }
      goto LAB_001da848;
    }
    if (*param_1 != 1) goto LAB_001da3d0;
LAB_001da3c0:
    FUN_001c8f10(&local_98,param_1);
LAB_001da48c:
    pvVar3 = local_98;
    pvVar15 = (void *)*param_2;
    param_2[1] = (long)pvVar15;
    lVar17 = (long)pvStack_90 - (long)local_98 >> 3;
    uVar10 = lVar17 * 0x6db6db6db6db6db7;
    uVar9 = param_2[2] - (long)pvVar15 >> 3;
    pvVar14 = pvVar3;
    pvVar4 = pvStack_90;
    if (uVar9 <= uVar10 && uVar10 - uVar9 != 0) {
      if (uVar10 >> 0x3d != 0) goto LAB_001da7e8;
                    /* try { // try from 001da4d0 to 001da4d3 has its CatchHandler @ 001da810 */
      pvVar5 = operator_new(lVar17 * 0x6db6db6db6db6db8);
      *param_2 = (long)pvVar5;
      param_2[1] = (long)pvVar5;
      param_2[2] = (long)((long)pvVar5 + lVar17 * 0x6db6db6db6db6db8);
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
      }
    }
    for (; pvVar14 != pvStack_90; pvVar14 = (void *)((long)pvVar14 + 0x38)) {
                    /* try { // try from 001da524 to 001da57f has its CatchHandler @ 001da820 */
      uVar19 = FUN_001da860(pvVar14);
      puVar16 = (undefined8 *)param_2[1];
      if (puVar16 < (undefined8 *)param_2[2]) {
        puVar13 = puVar16 + 1;
        *puVar16 = uVar19;
      }
      else {
        puVar18 = (undefined8 *)*param_2;
        lVar17 = (long)puVar16 - (long)puVar18 >> 3;
        uVar9 = lVar17 + 1;
        if (uVar9 >> 0x3d != 0) {
          if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* try { // try from 001da7a4 to 001da7bf has its CatchHandler @ 001da81c */
            FUN_001da84c();
LAB_001da7a8:
            if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
              FUN_001730e4();
            }
          }
          goto LAB_001da848;
        }
        uVar6 = param_2[2] - (long)puVar18;
        uVar10 = (long)uVar6 >> 2;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7ffffffffffffff7 < uVar6) {
          uVar10 = 0x1fffffffffffffff;
        }
        if (uVar10 == 0) {
          pvVar4 = (void *)0x0;
        }
        else {
          if (uVar10 >> 0x3d != 0) goto LAB_001da7a8;
          pvVar4 = operator_new(uVar10 << 3);
        }
        puVar8 = (undefined8 *)((long)pvVar4 + lVar17 * 8);
        puVar13 = puVar8 + 1;
        *puVar8 = uVar19;
        if ((long)puVar16 - (long)puVar18 != 0) {
          uVar9 = ((long)puVar16 - (long)puVar18) - 8;
          puVar7 = puVar8;
          if ((0x37 < uVar9) &&
             (0x1f < (ulong)((long)puVar16 + (-((long)puVar16 - (long)puVar18) - (long)pvVar4)))) {
            puVar12 = puVar16 + -2;
            uVar9 = (uVar9 >> 3) + 1;
            uVar11 = uVar9 & 0x3ffffffffffffffc;
            puVar16 = puVar16 + -uVar11;
            puVar7 = puVar8 + -uVar11;
            puVar8 = puVar8 + -2;
            uVar6 = uVar11;
            do {
              puVar2 = puVar12 + -1;
              uVar21 = puVar12[-2];
              uVar20 = puVar12[1];
              uVar19 = *puVar12;
              uVar6 = uVar6 - 4;
              puVar12 = puVar12 + -4;
              puVar8[-1] = *puVar2;
              puVar8[-2] = uVar21;
              puVar8[1] = uVar20;
              *puVar8 = uVar19;
              puVar8 = puVar8 + -4;
            } while (uVar6 != 0);
            puVar8 = puVar7;
            if (uVar9 == uVar11) goto LAB_001da624;
          }
          do {
            puVar16 = puVar16 + -1;
            puVar8 = puVar7 + -1;
            *puVar8 = *puVar16;
            puVar7 = puVar8;
          } while (puVar16 != puVar18);
        }
LAB_001da624:
        *param_2 = (long)puVar8;
        param_2[1] = (long)puVar13;
        param_2[2] = (long)((long)pvVar4 + uVar10 * 8);
        if (puVar18 != (undefined8 *)0x0) {
          operator_delete(puVar18);
        }
      }
      param_2[1] = (long)puVar13;
      pvVar4 = pvVar3;
    }
    pvVar14 = pvStack_90;
    if (pvVar4 != (void *)0x0) {
      while (pvVar14 != pvVar4) {
        if (*(uint *)((long)pvVar14 + -8) != 0xffffffff) {
                    /* try { // try from 001da684 to 001da68f has its CatchHandler @ 001da818 */
          (*(code *)(&PTR_FUN_001f05f8)[*(uint *)((long)pvVar14 + -8)])
                    (&uStack_79,(void *)((long)pvVar14 + -0x38));
        }
        *(undefined4 *)((long)pvVar14 + -8) = 0xffffffff;
        pvVar14 = (void *)((long)pvVar14 + -0x38);
        pvStack_90 = local_98;
      }
      operator_delete(pvStack_90);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
LAB_001da848:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001da84c  FUN_001da84c =====

void FUN_001da84c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00173064("vector");
}


// ===== 001da860  FUN_001da860 =====

void FUN_001da860(undefined8 param_1,int *param_2)

{
  byte ****ppppbVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined1 auVar6 [16];
  byte ***local_68;
  byte ***local_60;
  byte ***pppbStack_58;
  byte ***local_50;
  byte ***pppbStack_48;
  byte ***local_40;
  byte ***pppbStack_38;
  undefined1 local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  if (param_2[0xc] == 1) {
    if (*(long *)(lVar3 + 0x28) == local_28) {
      facebook::jsi::Value::asNumber();
      return;
    }
    goto LAB_001daa24;
  }
  if (param_2[0xc] != 0) {
LAB_001da9f4:
    if (*(long *)(lVar3 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_001c858c();
    }
    goto LAB_001daa24;
  }
  iVar2 = *param_2;
  if (iVar2 < 4) {
    if (iVar2 == 2) {
      uVar5 = NEON_ucvtf((ulong)*(byte *)(param_2 + 2));
    }
    else {
      if (iVar2 != 3) goto LAB_001daa08;
      uVar5 = *(undefined8 *)(param_2 + 2);
    }
  }
  else {
    if (iVar2 != 6) {
      if (iVar2 == 4) {
        if (*(long *)(lVar3 + 0x28) == local_28) {
          FUN_001c9958(param_2 + 2);
          return;
        }
        goto LAB_001daa24;
      }
LAB_001daa08:
      if (*(long *)(lVar3 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
        FUN_00172ea4("int/double/bool/string");
      }
      goto LAB_001daa24;
    }
    uVar4 = (ulong)(*(byte *)(param_2 + 2) >> 1);
    local_60 = (byte ***)((long)param_2 + 9);
    if ((*(byte *)(param_2 + 2) & 1) != 0) {
      uVar4 = *(ulong *)(param_2 + 4);
      local_60 = (byte ***)*(byte *****)(param_2 + 6);
    }
    pppbStack_58 = (byte ***)((long)local_60 + uVar4);
    local_50 = local_60;
    pppbStack_48 = pppbStack_58;
    auVar6 = folly::detail::str_to_floating<double>((Range *)&local_50);
    uVar5 = auVar6._8_8_;
    uVar4 = auVar6._0_8_;
    param_1 = extraout_d0;
    if ((uVar4 & 0xff) != 1) {
LAB_001da9d0:
      local_50 = (byte ***)&local_60;
      if (*(long *)(lVar3 + 0x28) != local_28) goto LAB_001daa24;
      param_1 = FUN_001ca10c(&local_50,uVar4 >> 8);
      goto LAB_001da9f4;
    }
    local_30 = 1;
    local_40 = local_50;
    pppbStack_38 = pppbStack_48;
    for (ppppbVar1 = (byte ****)local_50; (byte ****)pppbStack_48 != ppppbVar1;
        ppppbVar1 = (byte ****)((long)ppppbVar1 + 1)) {
      if ((*(byte *)ppppbVar1 != 0x20) && (4 < *(byte *)ppppbVar1 - 9)) {
        local_68 = (byte ***)&local_40;
        if (*(long *)(lVar3 + 0x28) != local_28) goto LAB_001daa24;
        uVar4 = FUN_001ca250(&local_68);
        param_1 = extraout_d0_00;
        goto LAB_001da9d0;
      }
    }
  }
  param_1 = uVar5;
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
LAB_001daa24:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 001daa28  FUN_001daa28 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_001daa28(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  byte local_50 [8];
  ulong local_48;
  long *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_001c862c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if ((long)uVar1 < 0x10) {
    if (uVar1 == 9) {
      plVar2 = (long *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        plVar2 = local_40;
      }
      if (*plVar2 == 0x6974616d6f747561 && (char)plVar2[1] == 'c') {
        *param_2 = 0;
        goto joined_r0x001dab90;
      }
    }
    else if (uVar1 == 0xd) {
      plVar2 = (long *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        plVar2 = local_40;
      }
      if (*plVar2 == 0x7261646e6f636573 && *(long *)((long)plVar2 + 5) == 0x796c6e4f79726164) {
        *param_2 = 1;
        goto joined_r0x001dab90;
      }
    }
LAB_001dacb4:
    if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001dacc4 to 001dacc7 has its CatchHandler @ 001dacc8 */
      abort();
    }
  }
  else {
    if (uVar1 == 0x10) {
      plVar2 = (long *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        plVar2 = local_40;
      }
      if (*plVar2 == 0x537265764f656e6f && plVar2[1] == 0x797261646e6f6365) {
        *param_2 = 3;
      }
      else {
        if (*plVar2 != 0x537265764f6f7774 || plVar2[1] != 0x797261646e6f6365) goto LAB_001dacb4;
        *param_2 = 5;
      }
    }
    else {
      if (uVar1 != 0x12) {
        if (uVar1 == 0x14) {
          plVar2 = (long *)((ulong)local_50 | 1);
          if ((local_50[0] & 1) != 0) {
            plVar2 = local_40;
          }
          iVar4 = memcmp(plVar2,"twoDisplaceSecondary",0x14);
          if (iVar4 == 0) {
            *param_2 = 6;
            goto joined_r0x001dab90;
          }
        }
        goto LAB_001dacb4;
      }
      plVar2 = (long *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        plVar2 = local_40;
      }
      if ((*plVar2 == 0x6469736542656e6f && plVar2[1] == 0x61646e6f63655365) &&
          (short)plVar2[2] == 0x7972) {
        *param_2 = 2;
      }
      else {
        if ((*plVar2 != 0x64697365426f7774 || plVar2[1] != 0x61646e6f63655365) ||
            (short)plVar2[2] != 0x7972) goto LAB_001dacb4;
        *param_2 = 4;
      }
    }
joined_r0x001dab90:
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001dacf8  FUN_001dacf8 =====

void FUN_001dacf8(undefined8 param_1,undefined4 *param_2)

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
  FUN_001c862c(local_40);
  uVar1 = (ulong)(local_40[0] >> 1);
  if ((local_40[0] & 1) != 0) {
    uVar1 = local_38;
  }
  if ((long)uVar1 < 8) {
    if (uVar1 == 4) {
      plVar2 = (long *)((ulong)local_40 | 1);
      if ((local_40[0] & 1) != 0) {
        plVar2 = local_30;
      }
      if ((int)*plVar2 == 0x656c6974) {
        *param_2 = 3;
joined_r0x001dade8:
        if ((local_40[0] & 1) != 0) {
          operator_delete(local_30);
        }
        if (*(long *)(lVar3 + 0x28) == local_28) {
          return;
        }
        goto LAB_001daec8;
      }
    }
    else if (uVar1 == 7) {
      plVar2 = (long *)((ulong)local_40 | 1);
      if ((local_40[0] & 1) != 0) {
        plVar2 = local_30;
      }
      if ((int)*plVar2 == 0x7265766f && *(int *)((long)plVar2 + 3) == 0x79616c72) {
        *param_2 = 2;
        goto joined_r0x001dade8;
      }
    }
  }
  else if (uVar1 == 8) {
    plVar2 = (long *)((ulong)local_40 | 1);
    if ((local_40[0] & 1) != 0) {
      plVar2 = local_30;
    }
    if (*plVar2 == 0x6563616c70736964) {
      *param_2 = 1;
      goto joined_r0x001dade8;
    }
  }
  else if (uVar1 == 9) {
    plVar2 = (long *)((ulong)local_40 | 1);
    if ((local_40[0] & 1) != 0) {
      plVar2 = local_30;
    }
    if (*plVar2 == 0x6974616d6f747561 && (char)plVar2[1] == 'c') {
      *param_2 = 0;
      goto joined_r0x001dade8;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001dae98 to 001dae9b has its CatchHandler @ 001dae9c */
    abort();
  }
LAB_001daec8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001daecc  FUN_001daecc =====

void FUN_001daecc(undefined8 param_1,undefined4 *param_2)

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
  FUN_001c862c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 8) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if (*plVar2 == 0x676e696c69617274) {
      *param_2 = 1;
joined_r0x001daf9c:
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
      goto LAB_001db008;
    }
  }
  else if (uVar1 == 7) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if ((int)*plVar2 == 0x6461656c && *(int *)((long)plVar2 + 3) == 0x676e6964) {
      *param_2 = 0;
      goto joined_r0x001daf9c;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001dafd8 to 001dafdb has its CatchHandler @ 001dafdc */
    abort();
  }
LAB_001db008:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001db00c  FUN_001db00c =====

void FUN_001db00c(undefined8 param_1,undefined4 *param_2)

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
  FUN_001c862c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 5) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if ((int)*plVar2 == 0x6576656e && *(char *)((long)plVar2 + 4) == 'r') {
      *param_2 = 2;
joined_r0x001db0f0:
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
      goto LAB_001db19c;
    }
  }
  else if (uVar1 == 9) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if (*plVar2 == 0x6974616d6f747561 && (char)plVar2[1] == 'c') {
      *param_2 = 1;
      goto joined_r0x001db0f0;
    }
  }
  else if (uVar1 == 6) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if ((int)*plVar2 == 0x61776c61 && *(short *)((long)plVar2 + 4) == 0x7379) {
      *param_2 = 0;
      goto joined_r0x001db0f0;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001db16c to 001db16f has its CatchHandler @ 001db170 */
    abort();
  }
LAB_001db19c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001db1a0  FUN_001db1a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001db1a0(undefined8 *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  void *pvVar14;
  undefined4 uVar15;
  ulong local_90;
  undefined8 uStack_88;
  char *local_80;
  void *local_70 [2];
  void *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 6) == 1) {
    FUN_001d3d44(local_70,*param_1,param_1 + 1);
  }
  else {
    if (*(int *)(param_1 + 6) != 0) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_001c858c();
      }
      goto LAB_001db758;
    }
    FUN_001d37e0(local_70);
  }
                    /* try { // try from 001db1f8 to 001db1ff has its CatchHandler @ 001db734 */
  local_80 = (char *)operator_new(0x20);
  uVar7 = _UNK_00142468;
  uVar10 = _DAT_00142460;
  uVar6 = s_minimumPrimaryColumnWidth_0013f070._17_8_;
  uVar3 = s_minimumPrimaryColumnWidth_0013f070._0_8_;
  uVar2 = CONCAT17(s_minimumPrimaryColumnWidth_0013f070[0x10],
                   s_minimumPrimaryColumnWidth_0013f070._9_7_);
  *(ulong *)(local_80 + 8) =
       CONCAT71(s_minimumPrimaryColumnWidth_0013f070._9_7_,s_minimumPrimaryColumnWidth_0013f070[8]);
  *(undefined8 *)local_80 = uVar3;
  *(undefined8 *)(local_80 + 0x11) = uVar6;
  *(undefined8 *)(local_80 + 9) = uVar2;
  local_80[0x19] = '\0';
  uStack_88 = uVar7;
  local_90 = uVar10;
  lVar13 = FUN_001d5c1c(local_70,&local_90);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (lVar13 != 0) {
                    /* try { // try from 001db250 to 001db257 has its CatchHandler @ 001db708 */
    uVar15 = FUN_001c97bc(lVar13 + 0x28);
    *param_2 = uVar15;
  }
                    /* try { // try from 001db25c to 001db263 has its CatchHandler @ 001db730 */
  local_80 = (char *)operator_new(0x20);
  uVar6 = s_maximumPrimaryColumnWidth_00140230._17_8_;
  uVar3 = s_maximumPrimaryColumnWidth_00140230._0_8_;
  uStack_88 = uVar7;
  local_90 = uVar10;
  uVar2 = CONCAT17(s_maximumPrimaryColumnWidth_00140230[0x10],
                   s_maximumPrimaryColumnWidth_00140230._9_7_);
  *(ulong *)(local_80 + 8) =
       CONCAT71(s_maximumPrimaryColumnWidth_00140230._9_7_,s_maximumPrimaryColumnWidth_00140230[8]);
  *(undefined8 *)local_80 = uVar3;
  *(undefined8 *)(local_80 + 0x11) = uVar6;
  *(undefined8 *)(local_80 + 9) = uVar2;
  local_80[0x19] = '\0';
  lVar13 = FUN_001d5c1c(local_70,&local_90);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (lVar13 != 0) {
                    /* try { // try from 001db2b0 to 001db2b7 has its CatchHandler @ 001db704 */
    uVar15 = FUN_001c97bc(lVar13 + 0x28);
    param_2[1] = uVar15;
  }
                    /* try { // try from 001db2bc to 001db2c3 has its CatchHandler @ 001db72c */
  local_80 = (char *)operator_new(0x30);
  uStack_88 = _UNK_00142438;
  local_90 = _DAT_00142430;
  uVar8 = s_preferredPrimaryColumnWidthOrFra_0013e393._16_8_;
  uVar7 = s_preferredPrimaryColumnWidthOrFra_0013e393._8_8_;
  uVar6 = s_preferredPrimaryColumnWidthOrFra_0013e393._0_8_;
  uVar2 = CONCAT35(s_preferredPrimaryColumnWidthOrFra_0013e393._29_3_,
                   s_preferredPrimaryColumnWidthOrFra_0013e393._24_5_);
  uVar3 = CONCAT53(s_preferredPrimaryColumnWidthOrFra_0013e393._32_5_,
                   s_preferredPrimaryColumnWidthOrFra_0013e393._29_3_);
  local_80[0x25] = '\0';
  *(undefined8 *)(local_80 + 8) = uVar7;
  *(undefined8 *)local_80 = uVar6;
  *(undefined8 *)(local_80 + 0x18) = uVar2;
  *(undefined8 *)(local_80 + 0x10) = uVar8;
  *(undefined8 *)(local_80 + 0x1d) = uVar3;
  lVar13 = FUN_001d5c1c(local_70,&local_90);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (lVar13 != 0) {
                    /* try { // try from 001db314 to 001db31b has its CatchHandler @ 001db700 */
    uVar15 = FUN_001c97bc(lVar13 + 0x28);
    param_2[2] = uVar15;
  }
                    /* try { // try from 001db320 to 001db327 has its CatchHandler @ 001db728 */
  local_80 = (char *)operator_new(0x20);
  uVar7 = _UNK_00142488;
  uVar10 = _DAT_00142480;
  uVar6 = s_minimumSupplementaryColumnWidth_0013f659._23_8_;
  uVar3 = s_minimumSupplementaryColumnWidth_0013f659._0_8_;
  uVar2 = CONCAT71(s_minimumSupplementaryColumnWidth_0013f659._16_7_,
                   s_minimumSupplementaryColumnWidth_0013f659[0xf]);
  *(ulong *)(local_80 + 8) =
       CONCAT17(s_minimumSupplementaryColumnWidth_0013f659[0xf],
                s_minimumSupplementaryColumnWidth_0013f659._8_7_);
  *(undefined8 *)local_80 = uVar3;
  *(undefined8 *)(local_80 + 0x17) = uVar6;
  *(undefined8 *)(local_80 + 0xf) = uVar2;
  local_80[0x1f] = '\0';
  uStack_88 = uVar7;
  local_90 = uVar10;
  lVar13 = FUN_001d5c1c(local_70,&local_90);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (lVar13 != 0) {
                    /* try { // try from 001db378 to 001db37f has its CatchHandler @ 001db6fc */
    uVar15 = FUN_001c97bc(lVar13 + 0x28);
    param_2[3] = uVar15;
  }
                    /* try { // try from 001db384 to 001db38b has its CatchHandler @ 001db724 */
  local_80 = (char *)operator_new(0x20);
  uVar6 = s_maximumSupplementaryColumnWidth_001405ad._23_8_;
  uVar3 = s_maximumSupplementaryColumnWidth_001405ad._0_8_;
  uStack_88 = uVar7;
  local_90 = uVar10;
  uVar2 = CONCAT71(s_maximumSupplementaryColumnWidth_001405ad._16_7_,
                   s_maximumSupplementaryColumnWidth_001405ad[0xf]);
  *(ulong *)(local_80 + 8) =
       CONCAT17(s_maximumSupplementaryColumnWidth_001405ad[0xf],
                s_maximumSupplementaryColumnWidth_001405ad._8_7_);
  *(undefined8 *)local_80 = uVar3;
  *(undefined8 *)(local_80 + 0x17) = uVar6;
  *(undefined8 *)(local_80 + 0xf) = uVar2;
  local_80[0x1f] = '\0';
  lVar13 = FUN_001d5c1c(local_70,&local_90);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (lVar13 != 0) {
                    /* try { // try from 001db3d8 to 001db3df has its CatchHandler @ 001db6f8 */
    uVar15 = FUN_001c97bc(lVar13 + 0x28);
    param_2[4] = uVar15;
  }
                    /* try { // try from 001db3e4 to 001db3eb has its CatchHandler @ 001db720 */
  local_80 = (char *)operator_new(0x30);
  uStack_88 = _UNK_001424b8;
  local_90 = _DAT_001424b0;
  uVar7 = s_preferredSupplementaryColumnWidt_0013ec72._16_8_;
  uVar6 = s_preferredSupplementaryColumnWidt_0013ec72._8_8_;
  uVar3 = s_preferredSupplementaryColumnWidt_0013ec72._0_8_;
  uVar2 = CONCAT53(s_preferredSupplementaryColumnWidt_0013ec72._27_5_,
                   s_preferredSupplementaryColumnWidt_0013ec72._24_3_);
  local_80[0x2b] = '\0';
  *(undefined8 *)(local_80 + 8) = uVar6;
  *(undefined8 *)local_80 = uVar3;
  *(undefined8 *)(local_80 + 0x18) = uVar2;
  *(undefined8 *)(local_80 + 0x10) = uVar7;
  uVar2 = CONCAT35(s_preferredSupplementaryColumnWidt_0013ec72._32_3_,
                   s_preferredSupplementaryColumnWidt_0013ec72._27_5_);
  *(undefined8 *)(local_80 + 0x23) = s_preferredSupplementaryColumnWidt_0013ec72._35_8_;
  *(undefined8 *)(local_80 + 0x1b) = uVar2;
  lVar13 = FUN_001d5c1c(local_70,&local_90);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (lVar13 != 0) {
                    /* try { // try from 001db43c to 001db443 has its CatchHandler @ 001db6f4 */
    uVar15 = FUN_001c97bc(lVar13 + 0x28);
    param_2[5] = uVar15;
  }
                    /* try { // try from 001db448 to 001db44f has its CatchHandler @ 001db71c */
  local_80 = (char *)operator_new(0x20);
  uVar7 = _UNK_00142458;
  uVar10 = _DAT_00142450;
  uVar6 = s_minimumSecondaryColumnWidth_0013e92a._19_8_;
  uVar3 = s_minimumSecondaryColumnWidth_0013e92a._0_8_;
  uVar2 = CONCAT35(s_minimumSecondaryColumnWidth_0013e92a._16_3_,
                   s_minimumSecondaryColumnWidth_0013e92a._11_5_);
  *(ulong *)(local_80 + 8) =
       CONCAT53(s_minimumSecondaryColumnWidth_0013e92a._11_5_,
                s_minimumSecondaryColumnWidth_0013e92a._8_3_);
  *(undefined8 *)local_80 = uVar3;
  *(undefined8 *)(local_80 + 0x13) = uVar6;
  *(undefined8 *)(local_80 + 0xb) = uVar2;
  local_80[0x1b] = '\0';
  uStack_88 = uVar7;
  local_90 = uVar10;
  lVar13 = FUN_001d5c1c(local_70,&local_90);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (lVar13 != 0) {
                    /* try { // try from 001db4a0 to 001db4a7 has its CatchHandler @ 001db6f0 */
    uVar15 = FUN_001c97bc(lVar13 + 0x28);
    param_2[6] = uVar15;
  }
                    /* try { // try from 001db4ac to 001db4b3 has its CatchHandler @ 001db718 */
  local_80 = (char *)operator_new(0x30);
  uVar12 = _UNK_00142478;
  uVar11 = _DAT_00142470;
  uVar9 = s_preferredSecondaryColumnWidthOrF_0013f94e._16_8_;
  uVar8 = s_preferredSecondaryColumnWidthOrF_0013f94e._8_8_;
  uVar6 = s_preferredSecondaryColumnWidthOrF_0013f94e._0_8_;
  uVar2 = CONCAT17(s_preferredSecondaryColumnWidthOrF_0013f94e[0x1f],
                   s_preferredSecondaryColumnWidthOrF_0013f94e._24_7_);
  uVar3 = CONCAT71(s_preferredSecondaryColumnWidthOrF_0013f94e._32_7_,
                   s_preferredSecondaryColumnWidthOrF_0013f94e[0x1f]);
  local_80[0x27] = '\0';
  *(undefined8 *)(local_80 + 8) = uVar8;
  *(undefined8 *)local_80 = uVar6;
  *(undefined8 *)(local_80 + 0x18) = uVar2;
  *(undefined8 *)(local_80 + 0x10) = uVar9;
  *(undefined8 *)(local_80 + 0x1f) = uVar3;
  uStack_88 = uVar12;
  local_90 = uVar11;
  lVar13 = FUN_001d5c1c(local_70,&local_90);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (lVar13 != 0) {
                    /* try { // try from 001db508 to 001db50f has its CatchHandler @ 001db6ec */
    uVar15 = FUN_001c97bc(lVar13 + 0x28);
    param_2[7] = uVar15;
  }
                    /* try { // try from 001db514 to 001db51b has its CatchHandler @ 001db714 */
  local_80 = (char *)operator_new(0x20);
  uVar6 = s_minimumInspectorColumnWidth_0013f976._19_8_;
  uVar3 = s_minimumInspectorColumnWidth_0013f976._0_8_;
  uStack_88 = uVar7;
  local_90 = uVar10;
  uVar2 = CONCAT35(s_minimumInspectorColumnWidth_0013f976._16_3_,
                   s_minimumInspectorColumnWidth_0013f976._11_5_);
  *(ulong *)(local_80 + 8) =
       CONCAT53(s_minimumInspectorColumnWidth_0013f976._11_5_,
                s_minimumInspectorColumnWidth_0013f976._8_3_);
  *(undefined8 *)local_80 = uVar3;
  *(undefined8 *)(local_80 + 0x13) = uVar6;
  *(undefined8 *)(local_80 + 0xb) = uVar2;
  local_80[0x1b] = '\0';
  lVar13 = FUN_001d5c1c(local_70,&local_90);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (lVar13 != 0) {
                    /* try { // try from 001db568 to 001db56f has its CatchHandler @ 001db6e8 */
    uVar15 = FUN_001c97bc(lVar13 + 0x28);
    param_2[8] = uVar15;
  }
                    /* try { // try from 001db574 to 001db57b has its CatchHandler @ 001db710 */
  local_80 = (char *)operator_new(0x20);
  uVar6 = s_maximumInspectorColumnWidth_0013fe8f._19_8_;
  uVar3 = s_maximumInspectorColumnWidth_0013fe8f._0_8_;
  uStack_88 = uVar7;
  local_90 = uVar10;
  uVar2 = CONCAT35(s_maximumInspectorColumnWidth_0013fe8f._16_3_,
                   s_maximumInspectorColumnWidth_0013fe8f._11_5_);
  *(ulong *)(local_80 + 8) =
       CONCAT53(s_maximumInspectorColumnWidth_0013fe8f._11_5_,
                s_maximumInspectorColumnWidth_0013fe8f._8_3_);
  *(undefined8 *)local_80 = uVar3;
  *(undefined8 *)(local_80 + 0x13) = uVar6;
  *(undefined8 *)(local_80 + 0xb) = uVar2;
  local_80[0x1b] = '\0';
  lVar13 = FUN_001d5c1c(local_70,&local_90);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (lVar13 != 0) {
                    /* try { // try from 001db5c8 to 001db5cf has its CatchHandler @ 001db6e4 */
    uVar15 = FUN_001c97bc(lVar13 + 0x28);
    param_2[9] = uVar15;
  }
                    /* try { // try from 001db5d4 to 001db5db has its CatchHandler @ 001db70c */
  local_80 = (char *)operator_new(0x30);
  uVar8 = s_preferredInspectorColumnWidthOrF_0013ef0e._16_8_;
  uVar7 = s_preferredInspectorColumnWidthOrF_0013ef0e._8_8_;
  uVar6 = s_preferredInspectorColumnWidthOrF_0013ef0e._0_8_;
  uStack_88 = uVar12;
  local_90 = uVar11;
  uVar2 = CONCAT17(s_preferredInspectorColumnWidthOrF_0013ef0e[0x1f],
                   s_preferredInspectorColumnWidthOrF_0013ef0e._24_7_);
  uVar3 = CONCAT71(s_preferredInspectorColumnWidthOrF_0013ef0e._32_7_,
                   s_preferredInspectorColumnWidthOrF_0013ef0e[0x1f]);
  local_80[0x27] = '\0';
  *(undefined8 *)(local_80 + 8) = uVar7;
  *(undefined8 *)local_80 = uVar6;
  *(undefined8 *)(local_80 + 0x18) = uVar2;
  *(undefined8 *)(local_80 + 0x10) = uVar8;
  *(undefined8 *)(local_80 + 0x1f) = uVar3;
  lVar13 = FUN_001d5c1c(local_70,&local_90);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  pvVar4 = local_70[0];
  puVar5 = (undefined8 *)local_60;
  if (lVar13 != 0) {
                    /* try { // try from 001db628 to 001db62f has its CatchHandler @ 001db6e0 */
    uVar15 = FUN_001c97bc(lVar13 + 0x28);
    param_2[10] = uVar15;
    pvVar4 = local_70[0];
    puVar5 = (undefined8 *)local_60;
  }
  while (puVar5 != (undefined8 *)0x0) {
    pvVar14 = (void *)*puVar5;
    local_70[0] = pvVar4;
    if (*(uint *)(puVar5 + 0xb) != 0xffffffff) {
                    /* try { // try from 001db670 to 001db67b has its CatchHandler @ 001db75c */
      (*(code *)(&PTR_FUN_001f05f8)[*(uint *)(puVar5 + 0xb)])(&local_90,puVar5 + 5);
    }
    *(undefined4 *)(puVar5 + 0xb) = 0xffffffff;
    if ((*(byte *)(puVar5 + 2) & 1) != 0) {
      operator_delete((void *)puVar5[4]);
    }
    operator_delete(puVar5);
    pvVar4 = local_70[0];
    puVar5 = (undefined8 *)pvVar14;
  }
  local_70[0] = (void *)0x0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_001db758:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001db760  FUN_001db760 =====

void FUN_001db760(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  byte local_50 [8];
  ulong local_48;
  long *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_001c862c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if ((long)uVar1 < 10) {
    if ((long)uVar1 < 8) {
      if (uVar1 == 3) {
        plVar2 = (long *)((ulong)local_50 | 1);
        if ((local_50[0] & 1) != 0) {
          plVar2 = local_40;
        }
        if ((short)*plVar2 == 0x6c61 && *(char *)((long)plVar2 + 2) == 'l') {
          *param_2 = 1;
          goto joined_r0x001db874;
        }
      }
      else if (uVar1 == 7) {
        plVar2 = (long *)((ulong)local_50 | 1);
        if ((local_50[0] & 1) != 0) {
          plVar2 = local_40;
        }
        if ((int)*plVar2 == 0x65686e69 && *(int *)((long)plVar2 + 3) == 0x74697265) {
          *param_2 = 0;
          goto joined_r0x001db874;
        }
      }
    }
    else if (uVar1 == 8) {
      plVar2 = (long *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        plVar2 = local_40;
      }
      if (*plVar2 == 0x7469617274726f70) {
        *param_2 = 3;
        goto joined_r0x001db874;
      }
    }
    else if (uVar1 == 9) {
      plVar2 = (long *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        plVar2 = local_40;
      }
      iVar4 = memcmp(plVar2,"landscape",9);
      if (iVar4 == 0) {
        *param_2 = 6;
        goto joined_r0x001db874;
      }
    }
  }
  else if ((long)uVar1 < 0xd) {
    if (uVar1 == 10) {
      plVar2 = (long *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        plVar2 = local_40;
      }
      if (*plVar2 == 0x7469617274726f70 && (short)plVar2[1] == 0x7055) {
        *param_2 = 4;
        goto joined_r0x001db874;
      }
    }
    else if (uVar1 == 0xc) {
      plVar2 = (long *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        plVar2 = local_40;
      }
      if (*plVar2 == 0x7469617274726f70 && (int)plVar2[1] == 0x6e776f44) {
        *param_2 = 5;
        goto joined_r0x001db874;
      }
    }
  }
  else if (uVar1 == 0xd) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    iVar4 = memcmp(plVar2,"landscapeLeft",0xd);
    if (iVar4 == 0) {
      *param_2 = 7;
joined_r0x001db874:
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
      goto LAB_001dbabc;
    }
  }
  else if (uVar1 == 0xe) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    iVar4 = memcmp(plVar2,"landscapeRight",0xe);
    if (iVar4 == 0) {
      *param_2 = 8;
      goto joined_r0x001db874;
    }
  }
  else if (uVar1 == 0x10) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if (*plVar2 == 0x70557475426c6c61 && plVar2[1] == 0x6e776f4465646973) {
      *param_2 = 2;
      goto joined_r0x001db874;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001dba8c to 001dba8f has its CatchHandler @ 001dba90 */
    abort();
  }
LAB_001dbabc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001dbac0  FUN_001dbac0 =====

void FUN_001dbac0(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  byte local_50 [8];
  ulong local_48;
  int *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_001c862c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 4) {
    piVar2 = (int *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      piVar2 = local_40;
    }
    if (*piVar2 == 0x6b726164) {
      *param_2 = 2;
joined_r0x001dbba0:
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
      goto LAB_001dbc40;
    }
  }
  else if (uVar1 == 5) {
    piVar2 = (int *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      piVar2 = local_40;
    }
    if (*piVar2 == 0x6867696c && (char)piVar2[1] == 't') {
      *param_2 = 1;
      goto joined_r0x001dbba0;
    }
  }
  else if (uVar1 == 7) {
    piVar2 = (int *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      piVar2 = local_40;
    }
    if (*piVar2 == 0x65686e69 && *(int *)((long)piVar2 + 3) == 0x74697265) {
      *param_2 = 0;
      goto joined_r0x001dbba0;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001dbc10 to 001dbc13 has its CatchHandler @ 001dbc14 */
    abort();
  }
LAB_001dbc40:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001dbc44  FUN_001dbc44 =====

void FUN_001dbc44(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  byte local_50 [8];
  ulong local_48;
  int *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_001c862c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 4) {
    piVar2 = (int *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      piVar2 = local_40;
    }
    if (*piVar2 == 0x656e6f6e) {
      *param_2 = 1;
      goto joined_r0x001dbd64;
    }
  }
  else if (uVar1 == 7) {
    piVar2 = (int *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      piVar2 = local_40;
    }
    if (*piVar2 == 0x61666564 && *(int *)((long)piVar2 + 3) == 0x746c7561) {
      *param_2 = 0;
    }
    else {
      if (*piVar2 != 0x65646973 || *(int *)((long)piVar2 + 3) != 0x72616265) goto LAB_001dbd6c;
      *param_2 = 2;
    }
joined_r0x001dbd64:
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
    goto LAB_001dbdac;
  }
LAB_001dbd6c:
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001dbd7c to 001dbd7f has its CatchHandler @ 001dbd80 */
    abort();
  }
LAB_001dbdac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001dbdb0  FUN_001dbdb0 =====

void FUN_001dbdb0(undefined8 param_1,undefined4 *param_2)

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
  FUN_001c862c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 0xd) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if (*plVar2 == 0x656d656c70707573 && *(long *)((long)plVar2 + 5) == 0x797261746e656d65) {
      *param_2 = 2;
      goto joined_r0x001dbebc;
    }
  }
  else if (uVar1 == 9) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if (*plVar2 == 0x7261646e6f636573 && (char)plVar2[1] == 'y') {
      *param_2 = 3;
      goto joined_r0x001dbebc;
    }
  }
  else if (uVar1 == 7) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if ((int)*plVar2 == 0x61666564 && *(int *)((long)plVar2 + 3) == 0x746c7561) {
      *param_2 = 0;
    }
    else {
      if ((int)*plVar2 != 0x6d697270 || *(int *)((long)plVar2 + 3) != 0x7972616d) goto LAB_001dbf4c;
      *param_2 = 1;
    }
joined_r0x001dbebc:
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
    goto LAB_001dbf8c;
  }
LAB_001dbf4c:
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001dbf5c to 001dbf5f has its CatchHandler @ 001dbf60 */
    abort();
  }
LAB_001dbf8c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001dbf90  FUN_001dbf90 =====

void FUN_001dbf90(undefined8 param_1,undefined4 *param_2)

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
  FUN_001c862c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 9) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if (*plVar2 == 0x6f74636570736e69 && (char)plVar2[1] == 'r') {
      *param_2 = 1;
joined_r0x001dc068:
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
      goto LAB_001dc0d4;
    }
  }
  else if (uVar1 == 6) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if ((int)*plVar2 == 0x756c6f63 && *(short *)((long)plVar2 + 4) == 0x6e6d) {
      *param_2 = 0;
      goto joined_r0x001dc068;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001dc0a4 to 001dc0a7 has its CatchHandler @ 001dc0a8 */
    abort();
  }
LAB_001dc0d4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001dc0d8  FUN_001dc0d8 =====

void FUN_001dc0d8(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  byte local_50 [8];
  ulong local_48;
  int *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_001c862c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 6) {
    piVar2 = (int *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      piVar2 = local_40;
    }
    if (*piVar2 == 0x6964656d && (short)piVar2[1] == 0x6d75) {
      *param_2 = 1;
      goto joined_r0x001dc1fc;
    }
  }
  else if (uVar1 == 5) {
    piVar2 = (int *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      piVar2 = local_40;
    }
    if (*piVar2 == 0x6c616d73 && (char)piVar2[1] == 'l') {
      *param_2 = 0;
    }
    else {
      if (*piVar2 != 0x6772616c || (char)piVar2[1] != 'e') goto LAB_001dc204;
      *param_2 = 2;
    }
joined_r0x001dc1fc:
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
    goto LAB_001dc244;
  }
LAB_001dc204:
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001dc214 to 001dc217 has its CatchHandler @ 001dc218 */
    abort();
  }
LAB_001dc244:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001dc248  FUN_001dc248 =====

void FUN_001dc248(undefined4 *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  ulong uVar4;
  long lVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  undefined8 uVar7;
  byte *pbVar8;
  undefined8 uVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_98;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_90;
  undefined8 *local_88;
  undefined1 local_80;
  undefined8 *local_78;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **ppbStack_70;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **local_68;
  undefined1 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  pbVar6 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + 2);
  *param_1 = *param_2;
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    uVar9 = *(undefined8 *)(param_2 + 4);
    uVar7 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar9;
    *(undefined8 *)pbVar6 = uVar7;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(pbVar6,*(char **)(param_2 + 6),*(ulong *)(param_2 + 4));
  }
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  if ((*(byte *)(param_2 + 10) & 1) == 0) {
    uVar9 = *(undefined8 *)(param_2 + 0xc);
    uVar7 = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0xc) = uVar9;
    *(undefined8 *)(param_1 + 10) = uVar7;
  }
  else {
                    /* try { // try from 001dc2dc to 001dc2e3 has its CatchHandler @ 001dc4a8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 10),*(char **)(param_2 + 0xe),*(ulong *)(param_2 + 0xc));
  }
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  param_1[0x12] = param_2[0x12];
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  if ((*(byte *)(param_2 + 0x14) & 1) == 0) {
    uVar9 = *(undefined8 *)(param_2 + 0x16);
    uVar7 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x16) = uVar9;
    *(undefined8 *)(param_1 + 0x14) = uVar7;
  }
  else {
                    /* try { // try from 001dc318 to 001dc31f has its CatchHandler @ 001dc498 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x14),*(char **)(param_2 + 0x18),*(ulong *)(param_2 + 0x16));
  }
  if ((*(byte *)(param_2 + 0x1a) & 1) == 0) {
    uVar9 = *(undefined8 *)(param_2 + 0x1c);
    uVar7 = *(undefined8 *)(param_2 + 0x1a);
    *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
    *(undefined8 *)(param_1 + 0x1c) = uVar9;
    *(undefined8 *)(param_1 + 0x1a) = uVar7;
  }
  else {
                    /* try { // try from 001dc344 to 001dc34b has its CatchHandler @ 001dc488 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x1a),*(char **)(param_2 + 0x1e),*(ulong *)(param_2 + 0x1c));
  }
  uVar2 = param_2[0x20];
  local_80 = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  local_88 = (undefined8 *)(param_1 + 0x22);
  *local_88 = 0;
  pbVar8 = *(byte **)(param_2 + 0x22);
  pbVar1 = *(byte **)(param_2 + 0x24);
  param_1[0x20] = uVar2;
  uVar4 = (long)pbVar1 - (long)pbVar8;
  if (uVar4 != 0) {
    if (0x555555555555555 < (ulong)(((long)uVar4 >> 4) * -0x5555555555555555)) {
      if (*(long *)(lVar5 + 0x28) != local_58) goto LAB_001dc568;
                    /* try { // try from 001dc484 to 001dc487 has its CatchHandler @ 001dc4b8 */
      uVar7 = FUN_001dead8();
                    /* catch() { ... } // from try @ 001dc344 with catch @ 001dc488 */
      if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
        if ((*(byte *)(param_1 + 10) & 1) == 0) goto LAB_001dc50c;
LAB_001dc554:
        operator_delete(*(void **)(param_1 + 0xe));
        bVar3 = *pbVar6;
      }
      else {
        operator_delete(*(void **)(param_1 + 0x18));
        if ((*(byte *)(param_1 + 10) & 1) != 0) goto LAB_001dc554;
LAB_001dc50c:
        bVar3 = *pbVar6;
      }
      if (((byte)bVar3 & 1) != 0) {
        operator_delete(*(void **)(param_1 + 6));
      }
      if (*(long *)(lVar5 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_0016eec4(uVar7);
      }
      goto LAB_001dc568;
    }
                    /* try { // try from 001dc3a0 to 001dc3a7 has its CatchHandler @ 001dc4b8 */
    pbVar6 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             operator_new(uVar4);
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (param_1 + 0x26) = pbVar6 + uVar4;
    ppbStack_70 = &local_98;
    local_68 = &local_90;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (param_1 + 0x22) = pbVar6;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (param_1 + 0x24) = pbVar6;
    local_60 = 0;
    local_98 = pbVar6;
    local_78 = (undefined8 *)(param_1 + 0x26);
    do {
      local_90 = pbVar6;
      if ((*pbVar8 & 1) == 0) {
        uVar9 = *(undefined8 *)(pbVar8 + 8);
        uVar7 = *(undefined8 *)pbVar8;
        *(undefined8 *)(pbVar6 + 0x10) = *(undefined8 *)(pbVar8 + 0x10);
        *(undefined8 *)(pbVar6 + 8) = uVar9;
        *(undefined8 *)pbVar6 = uVar7;
      }
      else {
                    /* try { // try from 001dc420 to 001dc427 has its CatchHandler @ 001dc4c0 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external(pbVar6,*(char **)(pbVar8 + 0x10),*(ulong *)(pbVar8 + 8));
      }
      if ((pbVar8[0x18] & 1) == 0) {
        uVar9 = *(undefined8 *)(pbVar8 + 0x20);
        uVar7 = *(undefined8 *)(pbVar8 + 0x18);
        *(undefined8 *)(pbVar6 + 0x28) = *(undefined8 *)(pbVar8 + 0x28);
        *(undefined8 *)(pbVar6 + 0x20) = uVar9;
        *(undefined8 *)(pbVar6 + 0x18) = uVar7;
      }
      else {
                    /* try { // try from 001dc438 to 001dc43f has its CatchHandler @ 001dc4c8 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  (pbVar6 + 0x18,*(char **)(pbVar8 + 0x28),*(ulong *)(pbVar8 + 0x20));
      }
      pbVar8 = pbVar8 + 0x30;
      pbVar6 = local_90 + 0x30;
    } while (pbVar8 != pbVar1);
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (param_1 + 0x24) = pbVar6;
    local_90 = pbVar6;
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
LAB_001dc568:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001dc56c  FUN_001dc56c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_001dc56c(int *param_1,undefined4 *param_2)

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
      goto LAB_001dc5b8;
    }
    goto LAB_001de2b4;
  }
LAB_001dc5b8:
  if (*piVar33 == 6) {
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1;
    cStack_12f = '\0';
    uStack_12e = 0;
    FUN_001c862c(&cStack_128);
    uStack_110 = uStack_110 & 0xffffffffffffff00;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = DAT_001423a8;
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
    FUN_001deb50(param_2,&local_130);
    FUN_00192310(&local_130);
  }
  else if (iVar21 == 1) {
    uVar28 = FUN_001d361c(*(undefined8 *)param_1,param_1 + 2);
    if ((uVar28 & 1) != 0) {
      if (param_1[0xc] == 1) {
        FUN_001d3d44(local_158,*(undefined8 *)param_1,param_1 + 2);
        goto LAB_001dc6ec;
      }
      if (param_1[0xc] == 0) goto LAB_001dc674;
      goto LAB_001de2b4;
    }
LAB_001dc680:
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    cStack_12f = '\0';
    uStack_12e = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = DAT_001423a8;
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
    FUN_001deb50(param_2,&local_130);
    FUN_00192310(&local_130);
    *param_2 = 0;
  }
  else {
    if (iVar21 != 0) {
LAB_001de2b4:
      if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
        FUN_001c858c();
      }
      goto LAB_001dea38;
    }
    if (*param_1 != 5) goto LAB_001dc680;
LAB_001dc674:
    FUN_001d37e0(local_158);
LAB_001dc6ec:
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    cStack_12f = 0;
    uStack_12e = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = DAT_001423a8;
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
    FUN_001deb50(param_2,&local_130);
    FUN_00192310(&local_130);
    uVar50 = s___packager_asset_0013e3b9._8_8_;
    uVar49 = s___packager_asset_0013e3b9._0_8_;
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
    lVar22 = FUN_001d5c1c(local_158,&local_130);
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
    lVar22 = FUN_001d5c1c(local_158,&local_130);
    if (lVar22 == 0) {
      uVar18 = false;
joined_r0x001dc868:
      if (((byte)local_130 & 1) == 0) goto LAB_001dc940;
LAB_001dc86c:
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
      if ((bool)uVar18) goto LAB_001dc944;
    }
    else {
      local_180 = 0x6965680c;
      cStack_17c = 'g';
      cStack_17b = 'h';
      cStack_17a = 't';
      cStack_179 = '\0';
      lVar22 = FUN_001d5c1c(local_158,&local_180);
      if (lVar22 == 0) {
        uVar18 = false;
      }
      else {
        local_1d0 = CONCAT17(local_1d0._7_1_,0x68746469770a);
        lVar22 = FUN_001d5c1c(local_158,&local_1d0);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 001de568 to 001de573 has its CatchHandler @ 001de7c0 */
                    /* WARNING: Subroutine does not return */
            FUN_00175a1c("unordered_map::at: key not found");
          }
          goto LAB_001dea38;
        }
        if (*(int *)(lVar22 + 0x58) == 1) {
          if (*(int *)(lVar22 + 0x30) != 3) goto LAB_001dc840;
LAB_001dc8a8:
          local_1e8 = (undefined8 *)0x7468676965680c;
          lVar22 = FUN_001d5c1c(local_158,&local_1e8);
          if (lVar22 == 0) {
            if (plVar40[5] == local_88) {
                    /* try { // try from 001de6e8 to 001de707 has its CatchHandler @ 001de7a8 */
                    /* WARNING: Subroutine does not return */
              FUN_00175a1c("unordered_map::at: key not found");
            }
            goto LAB_001dea38;
          }
          if (*(int *)(lVar22 + 0x58) == 1) {
            uVar18 = *(int *)(lVar22 + 0x30) == 3;
          }
          else {
            if (*(int *)(lVar22 + 0x58) != 0) {
              if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                FUN_001c858c();
              }
              goto LAB_001dea38;
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
                    /* try { // try from 001de6d4 to 001de6d7 has its CatchHandler @ 001de7c0 */
              FUN_001c858c();
            }
            goto LAB_001dea38;
          }
          if (*(int *)(lVar22 + 0x28) - 3U < 2) goto LAB_001dc8a8;
LAB_001dc840:
          uVar18 = false;
        }
        if ((local_1d0 & 1) != 0) {
          operator_delete(local_1c0);
        }
      }
      if ((local_180 & 1) == 0) goto joined_r0x001dc868;
      operator_delete(local_170);
      if (((byte)local_130 & 1) != 0) goto LAB_001dc86c;
LAB_001dc940:
      if ((bool)uVar18) {
LAB_001dc944:
        local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                    0xa;
        cStack_12f = 'w';
        uStack_12e = 0x6469;
        cStack_12c = 't';
        cStack_12b = 'h';
        cStack_12a = '\0';
        lVar22 = FUN_001d5c1c(local_158,&local_130);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 001de410 to 001de41b has its CatchHandler @ 001de848 */
                    /* WARNING: Subroutine does not return */
            FUN_00175a1c("unordered_map::at: key not found");
          }
          goto LAB_001dea38;
        }
                    /* try { // try from 001dc970 to 001dc977 has its CatchHandler @ 001de848 */
        uVar47 = FUN_001c97bc(lVar22 + 0x28);
        local_180 = 0x6965680c;
        cStack_17c = 'g';
        cStack_17b = 'h';
        cStack_17a = 't';
        cStack_179 = '\0';
        lVar22 = FUN_001d5c1c(local_158,&local_180);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 001de42c to 001de437 has its CatchHandler @ 001de838 */
                    /* WARNING: Subroutine does not return */
            FUN_00175a1c("unordered_map::at: key not found");
          }
          goto LAB_001dea38;
        }
                    /* try { // try from 001dc9ac to 001dc9b3 has its CatchHandler @ 001de838 */
        uVar48 = FUN_001c97bc(lVar22 + 0x28);
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
    lVar22 = FUN_001d5c1c(local_158,&local_130);
    if (lVar22 == 0) {
      bVar19 = false;
    }
    else {
      local_180 = 0x6163730a;
      cStack_17c = 'l';
      cStack_17b = 'e';
      cStack_17a = '\0';
      lVar22 = FUN_001d5c1c(local_158,&local_180);
      if (lVar22 == 0) {
        if (plVar40[5] == local_88) {
                    /* try { // try from 001de2f4 to 001de2ff has its CatchHandler @ 001de7f4 */
                    /* WARNING: Subroutine does not return */
          FUN_00175a1c("unordered_map::at: key not found");
        }
        goto LAB_001dea38;
      }
      if (*(int *)(lVar22 + 0x58) == 1) {
        bVar19 = *(int *)(lVar22 + 0x30) == 3;
      }
      else {
        if (*(int *)(lVar22 + 0x58) != 0) {
          if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001de588 to 001de58b has its CatchHandler @ 001de7f4 */
            FUN_001c858c();
          }
          goto LAB_001dea38;
        }
        bVar19 = *(int *)(lVar22 + 0x28) - 3U < 2;
      }
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
      }
    }
    if (((byte)local_130 & 1) == 0) {
      if (bVar19) goto LAB_001dca7c;
LAB_001dcac0:
      local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                  0x14;
      uStack_127 = 0x6465;
      cStack_12f = (char)s_deprecated_0013f4ca._0_8_;
      uStack_12e = SUB82(s_deprecated_0013f4ca._0_8_,1);
      cStack_12c = SUB81(s_deprecated_0013f4ca._0_8_,3);
      cStack_12b = SUB81(s_deprecated_0013f4ca._0_8_,4);
      cStack_12a = SUB81(s_deprecated_0013f4ca._0_8_,5);
      cStack_129 = SUB81(s_deprecated_0013f4ca._0_8_,6);
      cStack_128 = SUB81(s_deprecated_0013f4ca._0_8_,7);
      cStack_125 = '\0';
      lVar22 = FUN_001d5c1c(local_158,&local_130);
      uVar47 = 0x3f800000;
      if (lVar22 != 0) {
        uVar47 = 0;
      }
    }
    else {
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
      if (!bVar19) goto LAB_001dcac0;
LAB_001dca7c:
      local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                  0xa;
      cStack_12f = 's';
      uStack_12e = 0x6163;
      cStack_12c = 'l';
      cStack_12b = 'e';
      cStack_12a = '\0';
      lVar22 = FUN_001d5c1c(local_158,&local_130);
      if (lVar22 == 0) {
        if (plVar40[5] == local_88) {
                    /* try { // try from 001de44c to 001de457 has its CatchHandler @ 001de834 */
                    /* WARNING: Subroutine does not return */
          FUN_00175a1c("unordered_map::at: key not found");
        }
        goto LAB_001dea38;
      }
                    /* try { // try from 001dcaa8 to 001dcaaf has its CatchHandler @ 001de834 */
      uVar47 = FUN_001c97bc(lVar22 + 0x28);
    }
    param_2[0x10] = uVar47;
    if (((byte)local_130 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
    }
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x6;
    cStack_12f = 'u';
    uStack_12e = 0x6c72;
    cStack_12c = '\0';
    lVar22 = FUN_001d5c1c(local_158,&local_130);
    if (lVar22 == 0) {
      bVar19 = false;
joined_r0x001dcb70:
      if (((byte)local_130 & 1) == 0) goto LAB_001dcba4;
LAB_001dcb74:
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
      if (bVar19) goto LAB_001dcba8;
    }
    else {
      local_180 = 0x6c727506;
      cStack_17c = '\0';
      lVar22 = FUN_001d5c1c(local_158,&local_180);
      if (lVar22 == 0) {
        if (plVar40[5] == local_88) {
                    /* try { // try from 001de314 to 001de31f has its CatchHandler @ 001de7f0 */
                    /* WARNING: Subroutine does not return */
          FUN_00175a1c("unordered_map::at: key not found");
        }
        goto LAB_001dea38;
      }
      if (*(int *)(lVar22 + 0x58) == 0) {
        piVar33 = (int *)(lVar22 + 0x28);
      }
      else {
        if (*(int *)(lVar22 + 0x58) != 1) {
          if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001de5a0 to 001de5a3 has its CatchHandler @ 001de7f0 */
            FUN_001c858c();
          }
          goto LAB_001dea38;
        }
        piVar33 = (int *)(lVar22 + 0x30);
      }
      bVar19 = *piVar33 == 6;
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
        goto joined_r0x001dcb70;
      }
      if (((byte)local_130 & 1) != 0) goto LAB_001dcb74;
LAB_001dcba4:
      if (bVar19) {
LAB_001dcba8:
        local_180 = 0x6c727506;
        cStack_17c = '\0';
        lVar22 = FUN_001d5c1c(local_158,&local_180);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 001de46c to 001de477 has its CatchHandler @ 001de81c */
                    /* WARNING: Subroutine does not return */
            FUN_00175a1c("unordered_map::at: key not found");
          }
          goto LAB_001dea38;
        }
                    /* try { // try from 001dcbcc to 001dcbd7 has its CatchHandler @ 001de81c */
        FUN_001c862c(&local_130,lVar22 + 0x28);
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
    lVar22 = FUN_001d5c1c(local_158,&local_130);
    if (lVar22 == 0) {
      bVar19 = false;
joined_r0x001dcc6c:
      if (((byte)local_130 & 1) == 0) goto LAB_001dccb4;
LAB_001dcc70:
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
      if (bVar19) goto LAB_001dccb8;
    }
    else {
      local_180 = 0x69727506;
      cStack_17c = '\0';
      lVar22 = FUN_001d5c1c(local_158,&local_180);
      if (lVar22 == 0) {
        if (plVar40[5] == local_88) {
                    /* try { // try from 001de334 to 001de33f has its CatchHandler @ 001de7ec */
                    /* WARNING: Subroutine does not return */
          FUN_00175a1c("unordered_map::at: key not found");
        }
        goto LAB_001dea38;
      }
      if (*(int *)(lVar22 + 0x58) == 0) {
        piVar33 = (int *)(lVar22 + 0x28);
      }
      else {
        if (*(int *)(lVar22 + 0x58) != 1) {
          if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001de5b8 to 001de5bb has its CatchHandler @ 001de7ec */
            FUN_001c858c();
          }
          goto LAB_001dea38;
        }
        piVar33 = (int *)(lVar22 + 0x30);
      }
      bVar19 = *piVar33 == 6;
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
        goto joined_r0x001dcc6c;
      }
      if (((byte)local_130 & 1) != 0) goto LAB_001dcc70;
LAB_001dccb4:
      if (bVar19) {
LAB_001dccb8:
        local_180 = 0x69727506;
        cStack_17c = '\0';
        lVar22 = FUN_001d5c1c(local_158,&local_180);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 001de48c to 001de497 has its CatchHandler @ 001de818 */
                    /* WARNING: Subroutine does not return */
            FUN_00175a1c("unordered_map::at: key not found");
          }
          goto LAB_001dea38;
        }
                    /* try { // try from 001dccdc to 001dcce7 has its CatchHandler @ 001de818 */
        FUN_001c862c(&local_130,lVar22 + 0x28);
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
    lVar22 = FUN_001d5c1c(local_158,&local_130);
    if (lVar22 == 0) {
      bVar19 = false;
joined_r0x001dcd90:
      if (((byte)local_130 & 1) == 0) goto LAB_001dcdd8;
LAB_001dcd94:
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
      if (bVar19) goto LAB_001dcddc;
    }
    else {
      local_180 = 0x6e75620c;
      cStack_17c = 'd';
      cStack_17b = 'l';
      cStack_17a = 'e';
      cStack_179 = '\0';
      lVar22 = FUN_001d5c1c(local_158,&local_180);
      if (lVar22 == 0) {
        if (plVar40[5] == local_88) {
                    /* try { // try from 001de354 to 001de35f has its CatchHandler @ 001de7e8 */
                    /* WARNING: Subroutine does not return */
          FUN_00175a1c("unordered_map::at: key not found");
        }
        goto LAB_001dea38;
      }
      if (*(int *)(lVar22 + 0x58) == 0) {
        piVar33 = (int *)(lVar22 + 0x28);
      }
      else {
        if (*(int *)(lVar22 + 0x58) != 1) {
          if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001de5d0 to 001de5d3 has its CatchHandler @ 001de7e8 */
            FUN_001c858c();
          }
          goto LAB_001dea38;
        }
        piVar33 = (int *)(lVar22 + 0x30);
      }
      bVar19 = *piVar33 == 6;
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
        goto joined_r0x001dcd90;
      }
      if (((byte)local_130 & 1) != 0) goto LAB_001dcd94;
LAB_001dcdd8:
      if (bVar19) {
LAB_001dcddc:
        local_180 = 0x6e75620c;
        cStack_17c = 'd';
        cStack_17b = 'l';
        cStack_17a = 'e';
        cStack_179 = '\0';
        lVar22 = FUN_001d5c1c(local_158,&local_180);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 001de4ac to 001de4b7 has its CatchHandler @ 001de814 */
                    /* WARNING: Subroutine does not return */
            FUN_00175a1c("unordered_map::at: key not found");
          }
          goto LAB_001dea38;
        }
                    /* try { // try from 001dce0c to 001dce17 has its CatchHandler @ 001de814 */
        FUN_001c862c(&local_130,lVar22 + 0x28);
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
    lVar22 = FUN_001d5c1c(local_158,&local_130);
    if (lVar22 == 0) {
      bVar19 = false;
joined_r0x001dcee8:
      if (((byte)local_130 & 1) == 0) goto LAB_001dd02c;
LAB_001dceec:
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
      if (bVar19) goto LAB_001dd030;
    }
    else {
      local_180 = 0x6165680e;
      cStack_17c = 'd';
      cStack_17b = 'e';
      cStack_17a = 'r';
      cStack_179 = 's';
      cStack_178 = '\0';
      lVar22 = FUN_001d5c1c(local_158,&local_180);
      if (lVar22 == 0) {
        if (plVar40[5] == local_88) {
                    /* try { // try from 001de374 to 001de37f has its CatchHandler @ 001de850 */
                    /* WARNING: Subroutine does not return */
          FUN_00175a1c("unordered_map::at: key not found");
        }
        goto LAB_001dea38;
      }
      if (*(int *)(lVar22 + 0x58) == 1) {
        if (*(int *)(lVar22 + 0x30) == 7) {
          plVar42 = *(long **)(lVar22 + 0x28);
                    /* try { // try from 001dcf2c to 001dcf33 has its CatchHandler @ 001de850 */
          local_1e8 = (undefined8 *)
                      (**(code **)(*plVar42 + 0x88))(plVar42,*(undefined8 *)(lVar22 + 0x38));
                    /* try { // try from 001dcf40 to 001dcf4f has its CatchHandler @ 001de76c */
          (**(code **)(*plVar42 + 0x218))(&local_200,plVar42,&local_1e8);
                    /* try { // try from 001dcf58 to 001dcf63 has its CatchHandler @ 001de748 */
          lVar22 = (**(code **)(*plVar42 + 0x240))(plVar42,&local_200);
          if (lVar22 == 0) {
            bVar19 = true;
          }
          else {
                    /* try { // try from 001dcf70 to 001dcf83 has its CatchHandler @ 001de744 */
            (**(code **)(*plVar42 + 0x260))(&local_1d0,plVar42,&local_200,0);
            local_1a0 = puStack_1c8;
            puStack_1c8 = (undefined8 *)0x0;
            facebook::jsi::Value::~Value((Value *)&local_1d0);
                    /* try { // try from 001dcfa0 to 001dcfb3 has its CatchHandler @ 001de708 */
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
LAB_001dcfe0:
          bVar19 = false;
        }
      }
      else {
        if (*(int *)(lVar22 + 0x58) != 0) {
          if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001de5e8 to 001de5eb has its CatchHandler @ 001de850 */
            FUN_001c858c();
          }
          goto LAB_001dea38;
        }
        if (*(int *)(lVar22 + 0x28) != 5) goto LAB_001dcfe0;
        if (*(long *)(lVar22 + 0x40) == 0) {
          bVar19 = true;
        }
        else {
          bVar19 = *(int *)(*(long *)(lVar22 + 0x40) + 0x40) == 6;
        }
      }
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
        goto joined_r0x001dcee8;
      }
      if (((byte)local_130 & 1) != 0) goto LAB_001dceec;
LAB_001dd02c:
      if (bVar19) {
LAB_001dd030:
        local_200 = 0x6165680e;
        uStack_1fc = 0x73726564;
        local_1f8 = 0;
        lVar22 = FUN_001d5c1c(local_158,&local_200);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 001de4cc to 001de4d7 has its CatchHandler @ 001de804 */
                    /* WARNING: Subroutine does not return */
            FUN_00175a1c("unordered_map::at: key not found");
          }
          goto LAB_001dea38;
        }
        if (*(int *)(lVar22 + 0x58) == 1) {
          plVar42 = *(long **)(lVar22 + 0x28);
                    /* try { // try from 001dd488 to 001dd48f has its CatchHandler @ 001de804 */
          local_188 = (undefined8 *)
                      (**(code **)(*plVar42 + 0x88))(plVar42,*(undefined8 *)(lVar22 + 0x38));
                    /* try { // try from 001dd49c to 001dd4ab has its CatchHandler @ 001de798 */
          (**(code **)(*plVar42 + 0x218))(&local_190,plVar42,&local_188);
                    /* try { // try from 001dd4b4 to 001dd4bf has its CatchHandler @ 001de788 */
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
                    /* try { // try from 001dd514 to 001dd527 has its CatchHandler @ 001de924 */
              (**(code **)(*plVar42 + 0x260))(&local_1a0,plVar42,&local_190,lVar32);
                    /* try { // try from 001dd534 to 001dd53b has its CatchHandler @ 001de92c */
              local_1a8 = (undefined8 *)(**(code **)(*plVar42 + 0x80))(plVar42,local_198);
                    /* try { // try from 001dd548 to 001dd55b has its CatchHandler @ 001de934 */
              (**(code **)(*plVar42 + 0x188))(local_1b8,plVar42,&local_188,&local_1a8);
              if (local_1b8[0] != 0) {
                    /* try { // try from 001dd56c to 001dd57b has its CatchHandler @ 001de8f8 */
                (**(code **)(*plVar42 + 0x120))(&local_1d0,plVar42,&local_1a8);
                    /* try { // try from 001dd57c to 001dd58b has its CatchHandler @ 001de900 */
                facebook::jsi::Value::asString((IRuntime *)local_1b8);
                    /* try { // try from 001dd594 to 001dd5a3 has its CatchHandler @ 001de8d0 */
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
                    /* try { // try from 001dd5d4 to 001dd5db has its CatchHandler @ 001de8f0 */
                puVar23 = (undefined4 *)FUN_001788dc(&local_130,pcVar3,puVar26);
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
                            if (bVar20 < 2) goto LAB_001dd908;
                            pcVar35 = (char *)((long)plVar39 + 0x11);
                            pcVar37 = pcVar3;
                            while (*pcVar35 == *pcVar37) {
                              puVar31 = (undefined8 *)((long)puVar31 + -1);
                              pcVar35 = pcVar35 + 1;
                              pcVar37 = pcVar37 + 1;
                              if (puVar31 == (undefined8 *)0x0) goto LAB_001dd908;
                            }
                          }
                          else {
                            iVar21 = memcmp((void *)plVar39[4],pcVar3,(size_t)plVar39[3]);
                            if (iVar21 == 0) goto LAB_001dd908;
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
                    /* try { // try from 001dd6fc to 001dd703 has its CatchHandler @ 001de8b8 */
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
                    /* try { // try from 001dd738 to 001dd73f has its CatchHandler @ 001de88c */
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
                    /* try { // try from 001dd7d0 to 001dd853 has its CatchHandler @ 001de888 */
                    uVar28 = std::__ndk1::__next_prime(uVar28);
                  }
                  uVar34 = CONCAT17(acStack_177[6],
                                    CONCAT16(acStack_177[5],CONCAT51(acStack_177._0_5_,cStack_178)))
                  ;
                  if (uVar34 < uVar28) {
LAB_001dd7e8:
                    FUN_001deda8(&local_180,uVar28);
                  }
                  else if (uVar28 < uVar34) {
                    uVar24 = (ulong)((float)local_168 / local_160);
                    if (uVar34 < 3) {
LAB_001dd850:
                      uVar24 = std::__ndk1::__next_prime(uVar24);
                    }
                    else {
                      uVar49 = NEON_cnt(uVar34,1);
                      uVar46 = NEON_uaddlv(uVar49,1);
                      if (1 < (uint)CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar46))
                      goto LAB_001dd850;
                      if (1 < uVar24) {
                        uVar24 = 1L << (-LZCOUNT(uVar24 - 1) & 0x3fU);
                      }
                    }
                    if (uVar28 <= uVar24) {
                      uVar28 = uVar24;
                    }
                    if (uVar28 < uVar34) goto LAB_001dd7e8;
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
                    goto LAB_001dd8f8;
                  }
                }
                else {
                  *plVar39 = *plVar29;
LAB_001dd8f8:
                  *plVar29 = (long)plVar39;
                }
                local_168 = local_168 + 1;
LAB_001dd908:
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
                    /* try { // try from 001de660 to 001de663 has its CatchHandler @ 001de804 */
              FUN_001c858c();
            }
            goto LAB_001dea38;
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
                    /* try { // try from 001de678 to 001de687 has its CatchHandler @ 001de790 */
                    /* WARNING: Subroutine does not return */
              FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
            }
            goto LAB_001dea38;
          }
          plVar42 = *(long **)(lVar22 + 0x40);
          if (plVar42 != (long *)0x0) {
            do {
              if ((int)plVar42[8] != 6) {
                if (plVar40[5] == local_88) {
                    /* try { // try from 001de28c to 001de29b has its CatchHandler @ 001de9c4 */
                    /* WARNING: Subroutine does not return */
                  FUN_00172ea4(*(undefined8 *)PTR_name_001f0bb0);
                }
                goto LAB_001dea38;
              }
              if ((plVar42[9] & 1U) == 0) {
                puStack_1c8 = (undefined8 *)plVar42[10];
                local_1d0 = plVar42[9];
                local_1c0 = (char *)plVar42[0xb];
              }
              else {
                    /* try { // try from 001dd0f4 to 001dd0fb has its CatchHandler @ 001de8b0 */
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                __init_copy_ctor_external
                          ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_1d0,(char *)plVar42[0xb],plVar42[10]);
              }
              if ((int)plVar42[2] != 6) {
                if (plVar40[5] == local_88) {
                    /* try { // try from 001de268 to 001de277 has its CatchHandler @ 001de9cc */
                    /* WARNING: Subroutine does not return */
                  FUN_00172ea4(*(undefined8 *)PTR_name_001f0bb0);
                }
                goto LAB_001dea38;
              }
              pbVar45 = (byte *)(plVar42 + 3);
              uVar28 = plVar42[4];
              lVar22 = plVar42[5];
              if ((*pbVar45 & 1) == 0) {
                lVar22 = (long)plVar42 + 0x19;
                uVar28 = (ulong)(*pbVar45 >> 1);
              }
                    /* try { // try from 001dd124 to 001dd12b has its CatchHandler @ 001de9fc */
              puVar23 = (undefined4 *)FUN_001788dc(&local_130,lVar22,uVar28);
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
                          if (bVar20 < 2) goto LAB_001dd44c;
                          uVar34 = 0;
                          while (*(char *)((long)plVar39 + uVar34 + 0x11) ==
                                 *(char *)((long)pvVar25 + uVar34)) {
                            uVar34 = uVar34 + 1;
                            if (bVar20 >> 1 == uVar34) goto LAB_001dd44c;
                          }
                        }
                        else {
                          iVar21 = memcmp((void *)plVar39[4],pvVar25,plVar39[3]);
                          if (iVar21 == 0) goto LAB_001dd44c;
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
                    /* try { // try from 001dd250 to 001dd257 has its CatchHandler @ 001de920 */
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
                    /* try { // try from 001dd288 to 001dd28f has its CatchHandler @ 001de89c */
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
                    /* try { // try from 001dd310 to 001dd393 has its CatchHandler @ 001de8a0 */
                  uVar28 = std::__ndk1::__next_prime(uVar28);
                }
                uVar34 = CONCAT17(acStack_177[6],
                                  CONCAT16(acStack_177[5],CONCAT51(acStack_177._0_5_,cStack_178)));
                if (uVar34 < uVar28) {
LAB_001dd328:
                  FUN_001deda8(&local_180,uVar28);
                }
                else if (uVar28 < uVar34) {
                  uVar24 = (ulong)((float)local_168 / local_160);
                  if (uVar34 < 3) {
LAB_001dd390:
                    uVar24 = std::__ndk1::__next_prime(uVar24);
                  }
                  else {
                    uVar49 = NEON_cnt(uVar34,1);
                    uVar46 = NEON_uaddlv(uVar49,1);
                    if (1 < (uint)CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar46)) goto LAB_001dd390;
                    if (1 < uVar24) {
                      uVar24 = 1L << (-LZCOUNT(uVar24 - 1) & 0x3fU);
                    }
                  }
                  if (uVar28 <= uVar24) {
                    uVar28 = uVar24;
                  }
                  if (uVar28 < uVar34) goto LAB_001dd328;
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
                  goto LAB_001dd43c;
                }
              }
              else {
                *plVar39 = *plVar29;
LAB_001dd43c:
                *plVar29 = (long)plVar39;
              }
              local_168 = local_168 + 1;
LAB_001dd44c:
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
                    /* try { // try from 001dd9e4 to 001dd9eb has its CatchHandler @ 001de9bc */
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
                    /* try { // try from 001dda10 to 001dda17 has its CatchHandler @ 001de9a4 */
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
                if (plVar40[5] != local_88) goto LAB_001dea38;
                    /* try { // try from 001de2b0 to 001de2b3 has its CatchHandler @ 001dea00 */
                FUN_001dead8();
                plVar40 = plVar42;
                goto LAB_001de2b4;
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
                    /* try { // try from 001de2dc to 001de2df has its CatchHandler @ 001dea00 */
                    FUN_001730e4();
                  }
                  goto LAB_001dea38;
                }
                    /* try { // try from 001ddab0 to 001ddab3 has its CatchHandler @ 001de8f4 */
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
    lVar22 = FUN_001d5c1c(local_158,&local_130);
    if (lVar22 == 0) {
      bVar19 = false;
joined_r0x001ddc8c:
      if (((byte)local_130 & 1) == 0) goto LAB_001ddcc0;
LAB_001ddc90:
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
      if (bVar19) goto LAB_001ddcc4;
    }
    else {
      local_180 = 0x646f6208;
      cStack_17c = 'y';
      cStack_17b = '\0';
      lVar22 = FUN_001d5c1c(local_158,&local_180);
      if (lVar22 == 0) {
        if (plVar40[5] == local_88) {
                    /* try { // try from 001de394 to 001de39f has its CatchHandler @ 001de7e4 */
                    /* WARNING: Subroutine does not return */
          FUN_00175a1c("unordered_map::at: key not found");
        }
        goto LAB_001dea38;
      }
      if (*(int *)(lVar22 + 0x58) == 0) {
        piVar33 = (int *)(lVar22 + 0x28);
      }
      else {
        if (*(int *)(lVar22 + 0x58) != 1) {
          if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001de600 to 001de603 has its CatchHandler @ 001de7e4 */
            FUN_001c858c();
          }
          goto LAB_001dea38;
        }
        piVar33 = (int *)(lVar22 + 0x30);
      }
      bVar19 = *piVar33 == 6;
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
        goto joined_r0x001ddc8c;
      }
      if (((byte)local_130 & 1) != 0) goto LAB_001ddc90;
LAB_001ddcc0:
      if (bVar19) {
LAB_001ddcc4:
        cStack_17c = 'y';
        local_180 = 0x646f6208;
        cStack_17b = '\0';
        lVar22 = FUN_001d5c1c(local_158,&local_180);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 001de4ec to 001de4f7 has its CatchHandler @ 001de800 */
                    /* WARNING: Subroutine does not return */
            FUN_00175a1c("unordered_map::at: key not found");
          }
          goto LAB_001dea38;
        }
                    /* try { // try from 001ddce4 to 001ddcef has its CatchHandler @ 001de800 */
        FUN_001c862c(&local_130,lVar22 + 0x28);
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
    lVar22 = FUN_001d5c1c(local_158,&local_130);
    if (lVar22 == 0) {
      bVar19 = false;
joined_r0x001ddd98:
      if (((byte)local_130 & 1) == 0) goto LAB_001ddde0;
LAB_001ddd9c:
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
      if (bVar19) goto LAB_001ddde4;
    }
    else {
      local_180 = 0x74656d0c;
      cStack_17c = 'h';
      cStack_17b = 'o';
      cStack_17a = 'd';
      cStack_179 = '\0';
      lVar22 = FUN_001d5c1c(local_158,&local_180);
      if (lVar22 == 0) {
        if (plVar40[5] == local_88) {
                    /* try { // try from 001de3b4 to 001de3bf has its CatchHandler @ 001de7e0 */
                    /* WARNING: Subroutine does not return */
          FUN_00175a1c("unordered_map::at: key not found");
        }
        goto LAB_001dea38;
      }
      if (*(int *)(lVar22 + 0x58) == 0) {
        piVar33 = (int *)(lVar22 + 0x28);
      }
      else {
        if (*(int *)(lVar22 + 0x58) != 1) {
          if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001de618 to 001de61b has its CatchHandler @ 001de7e0 */
            FUN_001c858c();
          }
          goto LAB_001dea38;
        }
        piVar33 = (int *)(lVar22 + 0x30);
      }
      bVar19 = *piVar33 == 6;
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
        goto joined_r0x001ddd98;
      }
      if (((byte)local_130 & 1) != 0) goto LAB_001ddd9c;
LAB_001ddde0:
      if (bVar19) {
LAB_001ddde4:
        local_180 = 0x74656d0c;
        cStack_17c = 'h';
        cStack_17b = 'o';
        cStack_17a = 'd';
        cStack_179 = '\0';
        lVar22 = FUN_001d5c1c(local_158,&local_180);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 001de50c to 001de517 has its CatchHandler @ 001de7fc */
                    /* WARNING: Subroutine does not return */
            FUN_00175a1c("unordered_map::at: key not found");
          }
          goto LAB_001dea38;
        }
                    /* try { // try from 001dde14 to 001dde1f has its CatchHandler @ 001de7fc */
        FUN_001c862c(&local_130,lVar22 + 0x28);
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
    lVar22 = FUN_001d5c1c(local_158,&local_130);
    if (lVar22 == 0) {
      bVar19 = false;
joined_r0x001ddec0:
      if (((byte)local_130 & 1) == 0) goto LAB_001ddf08;
LAB_001ddec4:
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
      if (bVar19) goto LAB_001ddf0c;
    }
    else {
      local_180 = 0x6361630a;
      cStack_17c = 'h';
      cStack_17b = 'e';
      cStack_17a = '\0';
      lVar22 = FUN_001d5c1c(local_158,&local_180);
      if (lVar22 == 0) {
        if (plVar40[5] == local_88) {
                    /* try { // try from 001de3d4 to 001de3df has its CatchHandler @ 001de7dc */
                    /* WARNING: Subroutine does not return */
          FUN_00175a1c("unordered_map::at: key not found");
        }
        goto LAB_001dea38;
      }
      if (*(int *)(lVar22 + 0x58) == 0) {
        piVar33 = (int *)(lVar22 + 0x28);
      }
      else {
        if (*(int *)(lVar22 + 0x58) != 1) {
          if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001de630 to 001de633 has its CatchHandler @ 001de7dc */
            FUN_001c858c();
          }
          goto LAB_001dea38;
        }
        piVar33 = (int *)(lVar22 + 0x30);
      }
      bVar19 = *piVar33 == 6;
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
        goto joined_r0x001ddec0;
      }
      if (((byte)local_130 & 1) != 0) goto LAB_001ddec4;
LAB_001ddf08:
      if (bVar19) {
LAB_001ddf0c:
        local_180 = 0x6361630a;
        cStack_17c = 'h';
        cStack_17b = 'e';
        cStack_17a = '\0';
        lVar22 = FUN_001d5c1c(local_158,&local_180);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 001de52c to 001de537 has its CatchHandler @ 001de7f8 */
                    /* WARNING: Subroutine does not return */
            FUN_00175a1c("unordered_map::at: key not found");
          }
          goto LAB_001dea38;
        }
                    /* try { // try from 001ddf38 to 001ddf43 has its CatchHandler @ 001de7f8 */
        FUN_001c862c(&local_130,lVar22 + 0x28);
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
LAB_001de06c:
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
            goto LAB_001de06c;
          }
        }
        else if (uVar28 == 6) {
          piVar33 = (int *)((ulong)&local_130 | 1);
          if (((byte)local_130 & 1) != 0) {
            piVar33 = (int *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120));
          }
          if (*piVar33 == 0x6f6c6572 && (short)piVar33[1] == 0x6461) {
            uVar47 = 1;
            goto LAB_001de06c;
          }
        }
        if (((byte)local_130 & 1) != 0) {
          operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
        }
      }
    }
    uVar7 = s_isForceCached_0013f55f._8_5_;
    uVar6 = s_isForceCached_0013f55f._0_5_;
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1a
    ;
    cStack_12f = (char)s_isForceCached_0013f55f._0_5_;
    cVar9 = cStack_12f;
    uStack_12e = SUB52(s_isForceCached_0013f55f._0_5_,1);
    uVar46 = uStack_12e;
    cStack_12c = SUB51(s_isForceCached_0013f55f._0_5_,3);
    cVar10 = cStack_12c;
    cStack_12b = SUB51(s_isForceCached_0013f55f._0_5_,4);
    cVar11 = cStack_12b;
    cStack_12a = (char)s_isForceCached_0013f55f._5_3_;
    cVar12 = cStack_12a;
    cStack_129 = SUB31(s_isForceCached_0013f55f._5_3_,1);
    cVar13 = cStack_129;
    cStack_128 = SUB31(s_isForceCached_0013f55f._5_3_,2);
    cVar14 = cStack_128;
    uStack_127 = (undefined2)s_isForceCached_0013f55f._8_5_;
    uVar15 = uStack_127;
    cStack_125 = SUB51(s_isForceCached_0013f55f._8_5_,2);
    cVar16 = cStack_125;
    uStack_124 = SUB52(s_isForceCached_0013f55f._8_5_,3);
    uVar17 = uStack_124;
    cStack_122 = '\0';
    lVar22 = FUN_001d5c1c(local_158,&local_130);
    uVar8 = s_isForceCached_0013f55f._8_5_;
    if (lVar22 == 0) {
      bVar19 = false;
joined_r0x001de0f0:
      if (((byte)local_130 & 1) == 0) goto LAB_001de124;
LAB_001de0f4:
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
      pvVar25 = local_158[0];
      puVar26 = local_148;
      if (bVar19) goto LAB_001de128;
    }
    else {
      local_180 = CONCAT31((int3)uVar6,0x1a);
      s_isForceCached_0013f55f[8] = (char)uVar7;
      s_isForceCached_0013f55f[9] = SUB51(uVar7,1);
      s_isForceCached_0013f55f[10] = SUB51(uVar7,2);
      s_isForceCached_0013f55f[0xb] = SUB51(uVar7,3);
      s_isForceCached_0013f55f[0xc] = SUB51(uVar7,4);
      acStack_177[0] = s_isForceCached_0013f55f[8];
      acStack_177[1] = s_isForceCached_0013f55f[9];
      acStack_177[2] = s_isForceCached_0013f55f[10];
      acStack_177[3] = s_isForceCached_0013f55f[0xb];
      acStack_177[4] = s_isForceCached_0013f55f[0xc];
      acStack_177[5] = 0;
      s_isForceCached_0013f55f._8_5_ = uVar8;
      cStack_17c = cVar10;
      cStack_17b = cVar11;
      cStack_17a = cVar12;
      cStack_179 = cVar13;
      cStack_178 = cVar14;
      lVar22 = FUN_001d5c1c(local_158,&local_180);
      if (lVar22 == 0) {
        if (plVar40[5] == local_88) {
                    /* try { // try from 001de3f4 to 001de3ff has its CatchHandler @ 001de7d8 */
                    /* WARNING: Subroutine does not return */
          FUN_00175a1c("unordered_map::at: key not found");
        }
        goto LAB_001dea38;
      }
      if (*(int *)(lVar22 + 0x58) == 0) {
        piVar33 = (int *)(lVar22 + 0x28);
      }
      else {
        if (*(int *)(lVar22 + 0x58) != 1) {
          if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001de648 to 001de64b has its CatchHandler @ 001de7d8 */
            FUN_001c858c();
          }
          goto LAB_001dea38;
        }
        piVar33 = (int *)(lVar22 + 0x30);
      }
      bVar19 = *piVar33 == 2;
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
        goto joined_r0x001de0f0;
      }
      if (((byte)local_130 & 1) != 0) goto LAB_001de0f4;
LAB_001de124:
      pvVar25 = local_158[0];
      puVar26 = local_148;
      if (bVar19) {
LAB_001de128:
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
        lVar22 = FUN_001d5c1c(local_158,&local_130);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 001de54c to 001de557 has its CatchHandler @ 001de878 */
                    /* WARNING: Subroutine does not return */
            FUN_00175a1c("unordered_map::at: key not found");
          }
          goto LAB_001dea38;
        }
        if (*(int *)(lVar22 + 0x58) == 1) {
                    /* try { // try from 001de18c to 001de193 has its CatchHandler @ 001de878 */
          bVar20 = facebook::jsi::Value::asBool();
        }
        else {
          if (*(int *)(lVar22 + 0x58) != 0) {
            if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001de69c to 001de6c3 has its CatchHandler @ 001de878 */
              FUN_001c858c();
            }
            goto LAB_001dea38;
          }
          if (*(int *)(lVar22 + 0x28) != 2) {
            if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
              FUN_00172ea4(*(undefined8 *)PTR_name_001f0f60);
            }
            goto LAB_001dea38;
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
                    /* try { // try from 001de1e8 to 001de1f3 has its CatchHandler @ 001dea3c */
        (*(code *)(&PTR_FUN_001f05f8)[*(uint *)(puVar26 + 0xb)])(&local_130,puVar26 + 5);
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
LAB_001dea38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001dea40  FUN_001dea40 =====

void FUN_001dea40(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  
  if (*(char *)(param_1 + 1) == '\0') {
    puVar2 = (undefined8 *)*param_1;
    pvVar3 = (void *)*puVar2;
    if (pvVar3 != (void *)0x0) {
      pvVar4 = (void *)puVar2[1];
      pvVar1 = pvVar3;
      if (pvVar4 != pvVar3) {
        do {
          if ((*(byte *)((long)pvVar4 + -0x18) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar4 + -8));
          }
          if ((*(byte *)((long)pvVar4 + -0x30) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar4 + -0x20));
          }
          pvVar4 = (void *)((long)pvVar4 + -0x30);
        } while (pvVar4 != pvVar3);
        pvVar1 = *(void **)*param_1;
      }
      puVar2[1] = pvVar3;
      operator_delete(pvVar1);
      return;
    }
  }
  return;
}


// ===== 001dead8  FUN_001dead8 =====

void FUN_001dead8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00173064("vector");
}


// ===== 001deaec  FUN_001deaec =====

void FUN_001deaec(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    return;
  }
  lVar2 = **(long **)(param_1 + 8);
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x30) {
    if ((*(byte *)(lVar1 + -0x18) & 1) != 0) {
      operator_delete(*(void **)(lVar1 + -8));
    }
    if ((*(byte *)(lVar1 + -0x30) & 1) != 0) {
      operator_delete(*(void **)(lVar1 + -0x20));
    }
  }
  return;
}


// ===== 001deb50  FUN_001deb50 =====

undefined4 * FUN_001deb50(undefined4 *param_1,undefined4 *param_2)

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


// ===== 001deccc  FUN_001deccc =====

void FUN_001deccc(undefined8 *param_1)

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


// ===== 001ded4c  FUN_001ded4c =====

void FUN_001ded4c(undefined8 *param_1)

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


// ===== 001deda8  FUN_001deda8 =====

void FUN_001deda8(long *param_1,ulong param_2)

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
      FUN_001730e4();
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


// ===== 001def04  FUN_001def04 =====

void FUN_001def04(undefined8 param_1,undefined4 *param_2)

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
  FUN_001c862c(local_40);
  uVar1 = (ulong)(local_40[0] >> 1);
  if ((local_40[0] & 1) != 0) {
    uVar1 = local_38;
  }
  if ((long)uVar1 < 8) {
    if (uVar1 == 5) {
      plVar2 = (long *)((ulong)local_40 | 1);
      if ((local_40[0] & 1) != 0) {
        plVar2 = local_30;
      }
      if ((int)*plVar2 == 0x6c746974 && *(char *)((long)plVar2 + 4) == 'e') {
        *param_2 = 2;
        goto joined_r0x001df0a4;
      }
    }
    else if (uVar1 == 7) {
      plVar2 = (long *)((ulong)local_40 | 1);
      if ((local_40[0] & 1) != 0) {
        plVar2 = local_30;
      }
      if ((int)*plVar2 == 0x6461656c && *(int *)((long)plVar2 + 3) == 0x676e6964) {
        *param_2 = 0;
        goto joined_r0x001df0a4;
      }
    }
  }
  else {
    if (uVar1 == 8) {
      plVar2 = (long *)((ulong)local_40 | 1);
      if ((local_40[0] & 1) != 0) {
        plVar2 = local_30;
      }
      if (*plVar2 == 0x676e696c69617274) {
        *param_2 = 1;
      }
      else {
        if (*plVar2 != 0x656c746974627573) goto LAB_001df0dc;
        *param_2 = 3;
      }
joined_r0x001df0a4:
      if ((local_40[0] & 1) != 0) {
        operator_delete(local_30);
      }
      if (*(long *)(lVar3 + 0x28) == local_28) {
        return;
      }
      goto LAB_001df11c;
    }
    if (uVar1 == 0xd) {
      plVar2 = (long *)((ulong)local_40 | 1);
      if ((local_40[0] & 1) != 0) {
        plVar2 = local_30;
      }
      if (*plVar2 == 0x627553656772616c && *(long *)((long)plVar2 + 5) == 0x656c746974627553) {
        *param_2 = 4;
        goto joined_r0x001df0a4;
      }
    }
  }
LAB_001df0dc:
  if (*(long *)(lVar3 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001df0ec to 001df0ef has its CatchHandler @ 001df0f0 */
    abort();
  }
LAB_001df11c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001df120  FUN_001df120 =====

void FUN_001df120(undefined8 param_1,undefined4 *param_2)

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
  FUN_001c862c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 8) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if (*plVar2 == 0x676e696c69617274) {
      *param_2 = 1;
joined_r0x001df1f0:
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
      goto LAB_001df25c;
    }
  }
  else if (uVar1 == 7) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if ((int)*plVar2 == 0x6461656c && *(int *)((long)plVar2 + 3) == 0x676e6964) {
      *param_2 = 0;
      goto joined_r0x001df1f0;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001df22c to 001df22f has its CatchHandler @ 001df230 */
    abort();
  }
LAB_001df25c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001df260  FUN_001df260 =====

void FUN_001df260(undefined8 param_1,undefined4 *param_2)

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
  FUN_001c862c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 8) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if (*plVar2 == 0x656c626978656c66) {
      *param_2 = 1;
joined_r0x001df32c:
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
      goto LAB_001df398;
    }
  }
  else if (uVar1 == 5) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if ((int)*plVar2 == 0x65786966 && *(char *)((long)plVar2 + 4) == 'd') {
      *param_2 = 0;
      goto joined_r0x001df32c;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001df368 to 001df36b has its CatchHandler @ 001df36c */
    abort();
  }
LAB_001df398:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001df39c  FUN_001df39c =====

void FUN_001df39c(undefined8 param_1,undefined4 *param_2)

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
  FUN_001c862c(local_40);
  uVar1 = (ulong)(local_40[0] >> 1);
  if ((local_40[0] & 1) != 0) {
    uVar1 = local_38;
  }
  if ((long)uVar1 < 8) {
    if (uVar1 == 6) {
      plVar2 = (long *)((ulong)local_40 | 1);
      if ((local_40[0] & 1) != 0) {
        plVar2 = local_30;
      }
      if ((int)*plVar2 == 0x746e6563 && *(short *)((long)plVar2 + 4) == 0x7265) {
        *param_2 = 2;
joined_r0x001df48c:
        if ((local_40[0] & 1) != 0) {
          operator_delete(local_30);
        }
        if (*(long *)(lVar3 + 0x28) == local_28) {
          return;
        }
        goto LAB_001df578;
      }
    }
    else if (uVar1 == 7) {
      plVar2 = (long *)((ulong)local_40 | 1);
      if ((local_40[0] & 1) != 0) {
        plVar2 = local_30;
      }
      if ((int)*plVar2 == 0x6461656c && *(int *)((long)plVar2 + 3) == 0x676e6964) {
        *param_2 = 1;
        goto joined_r0x001df48c;
      }
    }
  }
  else if (uVar1 == 8) {
    plVar2 = (long *)((ulong)local_40 | 1);
    if ((local_40[0] & 1) != 0) {
      plVar2 = local_30;
    }
    if (*plVar2 == 0x676e696c69617274) {
      *param_2 = 3;
      goto joined_r0x001df48c;
    }
  }
  else if (uVar1 == 10) {
    plVar2 = (long *)((ulong)local_40 | 1);
    if ((local_40[0] & 1) != 0) {
      plVar2 = local_30;
    }
    if (*plVar2 == 0x756f72676b636162 && (short)plVar2[1] == 0x646e) {
      *param_2 = 0;
      goto joined_r0x001df48c;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001df548 to 001df54b has its CatchHandler @ 001df54c */
    abort();
  }
LAB_001df578:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001df57c  FUN_001df57c =====

void FUN_001df57c(undefined8 param_1,undefined4 *param_2)

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
  FUN_001c862c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 8) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if (*plVar2 == 0x78616c6c61726170) {
      *param_2 = 1;
joined_r0x001df644:
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
      goto LAB_001df6b0;
    }
  }
  else if (uVar1 == 3) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if ((short)*plVar2 == 0x666f && *(char *)((long)plVar2 + 2) == 'f') {
      *param_2 = 0;
      goto joined_r0x001df644;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001df680 to 001df683 has its CatchHandler @ 001df684 */
    abort();
  }
LAB_001df6b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001df6b4  FUN_001df6b4 =====

void FUN_001df6b4(undefined8 param_1,undefined4 *param_2)

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
  FUN_001c862c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 8) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if (*plVar2 == 0x6465686361746564) {
      *param_2 = 0;
    }
    else {
      if (*plVar2 != 0x6465686361747461) goto LAB_001df780;
      *param_2 = 1;
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
  }
  else {
LAB_001df780:
    if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001df790 to 001df793 has its CatchHandler @ 001df794 */
      abort();
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001df7c4  FUN_001df7c4 =====

void FUN_001df7c4(undefined8 *param_1,byte *param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  byte bVar4;
  long lVar5;
  void *pvVar6;
  byte local_88;
  undefined4 local_87;
  ushort local_83;
  undefined1 local_81;
  void *local_78;
  void *local_70 [2];
  void *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 6) == 1) {
    FUN_001d3d44(local_70,*param_1,param_1 + 1);
  }
  else {
    if (*(int *)(param_1 + 6) != 0) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_001c858c();
      }
      goto LAB_001dfbb0;
    }
    FUN_001d37e0(local_70);
  }
  local_88 = 6;
  local_87 = 0x706f74;
  lVar5 = FUN_001d5c1c(local_70,&local_88);
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x58) == 1) {
                    /* try { // try from 001df880 to 001df887 has its CatchHandler @ 001dfb8c */
      bVar4 = facebook::jsi::Value::asBool();
    }
    else {
      if (*(int *)(lVar5 + 0x58) != 0) {
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001dfac0 to 001dfac3 has its CatchHandler @ 001dfb8c */
          FUN_001c858c();
        }
        goto LAB_001dfbb0;
      }
      if (*(int *)(lVar5 + 0x28) != 2) {
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 001dfae8 to 001dfaf7 has its CatchHandler @ 001dfb8c */
                    /* WARNING: Subroutine does not return */
          FUN_00172ea4(*(undefined8 *)PTR_name_001f0f60);
        }
        goto LAB_001dfbb0;
      }
      bVar4 = *(char *)(lVar5 + 0x30) != '\0';
    }
    *param_2 = bVar4 & 1;
  }
  local_88 = 10;
  local_87 = 0x68676972;
  local_83 = 0x74;
  lVar5 = FUN_001d5c1c(local_70,&local_88);
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x58) == 1) {
                    /* try { // try from 001df8fc to 001df903 has its CatchHandler @ 001dfb88 */
      bVar4 = facebook::jsi::Value::asBool();
    }
    else {
      if (*(int *)(lVar5 + 0x58) != 0) {
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001dfad4 to 001dfad7 has its CatchHandler @ 001dfb88 */
          FUN_001c858c();
        }
        goto LAB_001dfbb0;
      }
      if (*(int *)(lVar5 + 0x28) != 2) {
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 001dfb1c to 001dfb2b has its CatchHandler @ 001dfb88 */
                    /* WARNING: Subroutine does not return */
          FUN_00172ea4(*(undefined8 *)PTR_name_001f0f60);
        }
        goto LAB_001dfbb0;
      }
      bVar4 = *(char *)(lVar5 + 0x30) != '\0';
    }
    param_2[1] = bVar4 & 1;
  }
  local_88 = 0xc;
  local_87 = 0x74746f62;
  local_83 = 0x6d6f;
  local_81 = 0;
  lVar5 = FUN_001d5c1c(local_70,&local_88);
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x58) == 1) {
                    /* try { // try from 001df97c to 001df983 has its CatchHandler @ 001dfb84 */
      bVar4 = facebook::jsi::Value::asBool();
    }
    else {
      if (*(int *)(lVar5 + 0x58) != 0) {
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001dfb08 to 001dfb0b has its CatchHandler @ 001dfb84 */
          FUN_001c858c();
        }
        goto LAB_001dfbb0;
      }
      if (*(int *)(lVar5 + 0x28) != 2) {
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 001dfb50 to 001dfb5f has its CatchHandler @ 001dfb84 */
                    /* WARNING: Subroutine does not return */
          FUN_00172ea4(*(undefined8 *)PTR_name_001f0f60);
        }
        goto LAB_001dfbb0;
      }
      bVar4 = *(char *)(lVar5 + 0x30) != '\0';
    }
    param_2[2] = bVar4 & 1;
  }
  local_88 = 8;
  local_87 = 0x7466656c;
  local_83 = local_83 & 0xff00;
  lVar5 = FUN_001d5c1c(local_70,&local_88);
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  pvVar2 = local_70[0];
  puVar3 = (undefined8 *)local_60;
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x58) == 1) {
                    /* try { // try from 001df9f4 to 001df9fb has its CatchHandler @ 001dfb80 */
      bVar4 = facebook::jsi::Value::asBool();
    }
    else {
      if (*(int *)(lVar5 + 0x58) != 0) {
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001dfb3c to 001dfb3f has its CatchHandler @ 001dfb80 */
          FUN_001c858c();
        }
        goto LAB_001dfbb0;
      }
      if (*(int *)(lVar5 + 0x28) != 2) {
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 001dfb70 to 001dfb7f has its CatchHandler @ 001dfb80 */
                    /* WARNING: Subroutine does not return */
          FUN_00172ea4(*(undefined8 *)PTR_name_001f0f60);
        }
        goto LAB_001dfbb0;
      }
      bVar4 = *(char *)(lVar5 + 0x30) != '\0';
    }
    param_2[3] = bVar4 & 1;
    pvVar2 = local_70[0];
    puVar3 = (undefined8 *)local_60;
  }
  while (puVar3 != (undefined8 *)0x0) {
    pvVar6 = (void *)*puVar3;
    local_70[0] = pvVar2;
    if (*(uint *)(puVar3 + 0xb) != 0xffffffff) {
                    /* try { // try from 001dfa40 to 001dfa4b has its CatchHandler @ 001dfbb4 */
      (*(code *)(&PTR_FUN_001f05f8)[*(uint *)(puVar3 + 0xb)])(&local_88,puVar3 + 5);
    }
    *(undefined4 *)(puVar3 + 0xb) = 0xffffffff;
    if ((*(byte *)(puVar3 + 2) & 1) != 0) {
      operator_delete((void *)puVar3[4]);
    }
    operator_delete(puVar3);
    pvVar2 = local_70[0];
    puVar3 = (undefined8 *)pvVar6;
  }
  local_70[0] = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_001dfbb0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001dfbb8  FUN_001dfbb8 =====

void FUN_001dfbb8(undefined8 param_1,undefined4 *param_2)

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
  FUN_001c862c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 9) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if (*plVar2 == 0x6361667265746e69 && (char)plVar2[1] == 'e') {
      *param_2 = 2;
joined_r0x001dfc90:
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
      goto LAB_001dfd44;
    }
  }
  else if (uVar1 == 6) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if ((int)*plVar2 == 0x74737973 && *(short *)((long)plVar2 + 4) == 0x6d65) {
      *param_2 = 1;
      goto joined_r0x001dfc90;
    }
  }
  else if (uVar1 == 3) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if ((short)*plVar2 == 0x6c61 && *(char *)((long)plVar2 + 2) == 'l') {
      *param_2 = 0;
      goto joined_r0x001dfc90;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001dfd14 to 001dfd17 has its CatchHandler @ 001dfd18 */
    abort();
  }
LAB_001dfd44:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001dfd48  FUN_001dfd48 =====

void FUN_001dfd48(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  byte local_50 [8];
  ulong local_48;
  int *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_001c862c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 6) {
    piVar2 = (int *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      piVar2 = local_40;
    }
    if (*piVar2 == 0x696c6e69 && (short)piVar2[1] == 0x656e) {
      *param_2 = 1;
joined_r0x001dfe1c:
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
      goto LAB_001dfe88;
    }
  }
  else if (uVar1 == 7) {
    piVar2 = (int *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      piVar2 = local_40;
    }
    if (*piVar2 == 0x75676572 && *(int *)((long)piVar2 + 3) == 0x72616c75) {
      *param_2 = 0;
      goto joined_r0x001dfe1c;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001dfe58 to 001dfe5b has its CatchHandler @ 001dfe5c */
    abort();
  }
LAB_001dfe88:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001dfe8c  FUN_001dfe8c =====

void FUN_001dfe8c(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
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
  return;
}


// ===== 001dfedc  FUN_001dfedc =====

void FUN_001dfedc(undefined8 *param_1,byte *param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  long lVar5;
  void *pvVar6;
  byte local_88;
  undefined6 uStack_87;
  char cStack_81;
  char cStack_80;
  undefined6 uStack_7f;
  char cStack_79;
  char cStack_78;
  undefined2 uStack_77;
  undefined5 uStack_75;
  void *local_70 [2];
  void *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 6) == 1) {
    FUN_001d3d44(local_70,*param_1,param_1 + 1);
  }
  else {
    if (*(int *)(param_1 + 6) != 0) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_001c858c();
      }
      goto LAB_001e00cc;
    }
    FUN_001d37e0(local_70);
  }
  local_88 = 0x22;
  uStack_77 = 0x79;
  uStack_7f = (undefined6)s_selectedScreenKey_0013e6fb._8_8_;
  cStack_79 = SUB81(s_selectedScreenKey_0013e6fb._8_8_,6);
  cStack_78 = SUB81(s_selectedScreenKey_0013e6fb._8_8_,7);
  uStack_87 = (undefined6)s_selectedScreenKey_0013e6fb._0_8_;
  cStack_81 = SUB81(s_selectedScreenKey_0013e6fb._0_8_,6);
  cStack_80 = SUB81(s_selectedScreenKey_0013e6fb._0_8_,7);
  lVar5 = FUN_001d5c1c(local_70,&local_88);
  if ((local_88 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_75,CONCAT21(uStack_77,cStack_78)));
  }
  if (lVar5 != 0) {
                    /* try { // try from 001dff78 to 001dff83 has its CatchHandler @ 001e00a8 */
    FUN_001c862c(&local_88,lVar5 + 0x28);
    if ((*param_2 & 1) != 0) {
      operator_delete(*(void **)(param_2 + 0x10));
    }
    *(ulong *)(param_2 + 8) = CONCAT17(cStack_79,CONCAT61(uStack_7f,cStack_80));
    *(ulong *)param_2 = CONCAT17(cStack_81,CONCAT61(uStack_87,local_88));
    *(ulong *)(param_2 + 0x10) = CONCAT53(uStack_75,CONCAT21(uStack_77,cStack_78));
  }
  local_88 = 0x1c;
  uStack_87._0_1_ = s_baseProvenance_001403dd[0];
  uStack_87._1_1_ = s_baseProvenance_001403dd[1];
  uStack_87._2_1_ = s_baseProvenance_001403dd[2];
  uStack_87._3_1_ = s_baseProvenance_001403dd[3];
  uStack_87._4_1_ = s_baseProvenance_001403dd[4];
  uStack_87._5_1_ = s_baseProvenance_001403dd[5];
  cStack_81 = (char)s_baseProvenance_001403dd._6_2_;
  cStack_80 = SUB21(s_baseProvenance_001403dd._6_2_,1);
  uStack_7f._0_1_ = s_baseProvenance_001403dd[8];
  uStack_7f._1_1_ = s_baseProvenance_001403dd[9];
  uStack_7f._2_1_ = s_baseProvenance_001403dd[10];
  uStack_7f._3_1_ = s_baseProvenance_001403dd[0xb];
  uStack_7f._4_1_ = s_baseProvenance_001403dd[0xc];
  uStack_7f._5_1_ = s_baseProvenance_001403dd[0xd];
  cStack_79 = 0;
  lVar5 = FUN_001d5c1c(local_70,&local_88);
  if ((local_88 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_75,CONCAT21(uStack_77,cStack_78)));
  }
  pvVar2 = local_70[0];
  puVar3 = (undefined8 *)local_60;
  if (lVar5 != 0) {
                    /* try { // try from 001dffec to 001dfff3 has its CatchHandler @ 001e00a4 */
    uVar4 = FUN_001ca300(lVar5 + 0x28);
    *(undefined4 *)(param_2 + 0x18) = uVar4;
    pvVar2 = local_70[0];
    puVar3 = (undefined8 *)local_60;
  }
  while (puVar3 != (undefined8 *)0x0) {
    pvVar6 = (void *)*puVar3;
    local_70[0] = pvVar2;
    if (*(uint *)(puVar3 + 0xb) != 0xffffffff) {
                    /* try { // try from 001e0034 to 001e003f has its CatchHandler @ 001e00d0 */
      (*(code *)(&PTR_FUN_001f05f8)[*(uint *)(puVar3 + 0xb)])(&local_88,puVar3 + 5);
    }
    *(undefined4 *)(puVar3 + 0xb) = 0xffffffff;
    if ((*(byte *)(puVar3 + 2) & 1) != 0) {
      operator_delete((void *)puVar3[4]);
    }
    operator_delete(puVar3);
    pvVar2 = local_70[0];
    puVar3 = (undefined8 *)pvVar6;
  }
  local_70[0] = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_001e00cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e00d4  FUN_001e00d4 =====

void FUN_001e00d4(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  byte local_50 [8];
  ulong local_48;
  int *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_001c862c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 4) {
    piVar2 = (int *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      piVar2 = local_40;
    }
    if (*piVar2 == 0x6b726164) {
      *param_2 = 2;
joined_r0x001e01b4:
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
      goto LAB_001e0254;
    }
  }
  else if (uVar1 == 5) {
    piVar2 = (int *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      piVar2 = local_40;
    }
    if (*piVar2 == 0x6867696c && (char)piVar2[1] == 't') {
      *param_2 = 1;
      goto joined_r0x001e01b4;
    }
  }
  else if (uVar1 == 7) {
    piVar2 = (int *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      piVar2 = local_40;
    }
    if (*piVar2 == 0x65686e69 && *(int *)((long)piVar2 + 3) == 0x74697265) {
      *param_2 = 0;
      goto joined_r0x001e01b4;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001e0224 to 001e0227 has its CatchHandler @ 001e0228 */
    abort();
  }
LAB_001e0254:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e0258  FUN_001e0258 =====

void FUN_001e0258(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
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
  return;
}


// ===== 001e02a8  FUN_001e02a8 =====

void FUN_001e02a8(undefined8 *param_1,byte *param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  long lVar5;
  void *pvVar6;
  byte local_88;
  undefined6 uStack_87;
  char cStack_81;
  char cStack_80;
  undefined6 uStack_7f;
  char cStack_79;
  char cStack_78;
  undefined2 uStack_77;
  undefined5 uStack_75;
  void *local_70 [2];
  void *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 6) == 1) {
    FUN_001d3d44(local_70,*param_1,param_1 + 1);
  }
  else {
    if (*(int *)(param_1 + 6) != 0) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_001c858c();
      }
      goto LAB_001e0498;
    }
    FUN_001d37e0(local_70);
  }
  local_88 = 0x22;
  uStack_77 = 0x79;
  uStack_7f = (undefined6)s_selectedScreenKey_0013e6fb._8_8_;
  cStack_79 = SUB81(s_selectedScreenKey_0013e6fb._8_8_,6);
  cStack_78 = SUB81(s_selectedScreenKey_0013e6fb._8_8_,7);
  uStack_87 = (undefined6)s_selectedScreenKey_0013e6fb._0_8_;
  cStack_81 = SUB81(s_selectedScreenKey_0013e6fb._0_8_,6);
  cStack_80 = SUB81(s_selectedScreenKey_0013e6fb._0_8_,7);
  lVar5 = FUN_001d5c1c(local_70,&local_88);
  if ((local_88 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_75,CONCAT21(uStack_77,cStack_78)));
  }
  if (lVar5 != 0) {
                    /* try { // try from 001e0344 to 001e034f has its CatchHandler @ 001e0474 */
    FUN_001c862c(&local_88,lVar5 + 0x28);
    if ((*param_2 & 1) != 0) {
      operator_delete(*(void **)(param_2 + 0x10));
    }
    *(ulong *)(param_2 + 8) = CONCAT17(cStack_79,CONCAT61(uStack_7f,cStack_80));
    *(ulong *)param_2 = CONCAT17(cStack_81,CONCAT61(uStack_87,local_88));
    *(ulong *)(param_2 + 0x10) = CONCAT53(uStack_75,CONCAT21(uStack_77,cStack_78));
  }
  local_88 = 0x1c;
  uStack_87._0_1_ = s_baseProvenance_001403dd[0];
  uStack_87._1_1_ = s_baseProvenance_001403dd[1];
  uStack_87._2_1_ = s_baseProvenance_001403dd[2];
  uStack_87._3_1_ = s_baseProvenance_001403dd[3];
  uStack_87._4_1_ = s_baseProvenance_001403dd[4];
  uStack_87._5_1_ = s_baseProvenance_001403dd[5];
  cStack_81 = (char)s_baseProvenance_001403dd._6_2_;
  cStack_80 = SUB21(s_baseProvenance_001403dd._6_2_,1);
  uStack_7f._0_1_ = s_baseProvenance_001403dd[8];
  uStack_7f._1_1_ = s_baseProvenance_001403dd[9];
  uStack_7f._2_1_ = s_baseProvenance_001403dd[10];
  uStack_7f._3_1_ = s_baseProvenance_001403dd[0xb];
  uStack_7f._4_1_ = s_baseProvenance_001403dd[0xc];
  uStack_7f._5_1_ = s_baseProvenance_001403dd[0xd];
  cStack_79 = 0;
  lVar5 = FUN_001d5c1c(local_70,&local_88);
  if ((local_88 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_75,CONCAT21(uStack_77,cStack_78)));
  }
  pvVar2 = local_70[0];
  puVar3 = (undefined8 *)local_60;
  if (lVar5 != 0) {
                    /* try { // try from 001e03b8 to 001e03bf has its CatchHandler @ 001e0470 */
    uVar4 = FUN_001ca300(lVar5 + 0x28);
    *(undefined4 *)(param_2 + 0x18) = uVar4;
    pvVar2 = local_70[0];
    puVar3 = (undefined8 *)local_60;
  }
  while (puVar3 != (undefined8 *)0x0) {
    pvVar6 = (void *)*puVar3;
    local_70[0] = pvVar2;
    if (*(uint *)(puVar3 + 0xb) != 0xffffffff) {
                    /* try { // try from 001e0400 to 001e040b has its CatchHandler @ 001e049c */
      (*(code *)(&PTR_FUN_001f05f8)[*(uint *)(puVar3 + 0xb)])(&local_88,puVar3 + 5);
    }
    *(undefined4 *)(puVar3 + 0xb) = 0xffffffff;
    if ((*(byte *)(puVar3 + 2) & 1) != 0) {
      operator_delete((void *)puVar3[4]);
    }
    operator_delete(puVar3);
    pvVar2 = local_70[0];
    puVar3 = (undefined8 *)pvVar6;
  }
  local_70[0] = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_001e0498:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e04a0  FUN_001e04a0 =====

void FUN_001e04a0(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  byte local_50 [8];
  ulong local_48;
  int *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_001c862c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 4) {
    piVar2 = (int *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      piVar2 = local_40;
    }
    if (*piVar2 == 0x6b726164) {
      *param_2 = 2;
joined_r0x001e0580:
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
      goto LAB_001e0620;
    }
  }
  else if (uVar1 == 5) {
    piVar2 = (int *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      piVar2 = local_40;
    }
    if (*piVar2 == 0x6867696c && (char)piVar2[1] == 't') {
      *param_2 = 1;
      goto joined_r0x001e0580;
    }
  }
  else if (uVar1 == 7) {
    piVar2 = (int *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      piVar2 = local_40;
    }
    if (*piVar2 == 0x65686e69 && *(int *)((long)piVar2 + 3) == 0x74697265) {
      *param_2 = 0;
      goto joined_r0x001e0580;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001e05f0 to 001e05f3 has its CatchHandler @ 001e05f4 */
    abort();
  }
LAB_001e0620:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e0624  FUN_001e0624 =====

void FUN_001e0624(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  byte local_50 [8];
  ulong local_48;
  int *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_001c862c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 3) {
    piVar2 = (int *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      piVar2 = local_40;
    }
    if ((short)*piVar2 == 0x746c && *(char *)((long)piVar2 + 2) == 'r') {
      *param_2 = 1;
    }
    else {
      if ((short)*piVar2 != 0x7472 || *(char *)((long)piVar2 + 2) != 'l') goto LAB_001e074c;
      *param_2 = 2;
    }
joined_r0x001e0710:
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
  }
  else {
    if (uVar1 == 7) {
      piVar2 = (int *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        piVar2 = local_40;
      }
      if (*piVar2 == 0x65686e69 && *(int *)((long)piVar2 + 3) == 0x74697265) {
        *param_2 = 0;
        goto joined_r0x001e0710;
      }
    }
LAB_001e074c:
    if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001e075c to 001e075f has its CatchHandler @ 001e0760 */
      abort();
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e0790  FUN_001e0790 =====

void FUN_001e0790(undefined8 param_1,undefined4 *param_2)

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
  FUN_001c862c(local_40);
  uVar1 = (ulong)(local_40[0] >> 1);
  if ((local_40[0] & 1) != 0) {
    uVar1 = local_38;
  }
  if ((long)uVar1 < 10) {
    if (uVar1 == 5) {
      plVar2 = (long *)((ulong)local_40 | 1);
      if ((local_40[0] & 1) != 0) {
        plVar2 = local_30;
      }
      if ((int)*plVar2 == 0x6576656e && *(char *)((long)plVar2 + 4) == 'r') {
        *param_2 = 1;
joined_r0x001e0888:
        if ((local_40[0] & 1) != 0) {
          operator_delete(local_30);
        }
        if (*(long *)(lVar3 + 0x28) == local_28) {
          return;
        }
        goto LAB_001e0980;
      }
    }
    else if (uVar1 == 9) {
      plVar2 = (long *)((ulong)local_40 | 1);
      if ((local_40[0] & 1) != 0) {
        plVar2 = local_30;
      }
      if (*plVar2 == 0x6974616d6f747561 && (char)plVar2[1] == 'c') {
        *param_2 = 0;
        goto joined_r0x001e0888;
      }
    }
  }
  else if (uVar1 == 10) {
    plVar2 = (long *)((ulong)local_40 | 1);
    if ((local_40[0] & 1) != 0) {
      plVar2 = local_30;
    }
    if (*plVar2 == 0x6c6c6f7263536e6f && (short)plVar2[1] == 0x7055) {
      *param_2 = 3;
      goto joined_r0x001e0888;
    }
  }
  else if (uVar1 == 0xc) {
    plVar2 = (long *)((ulong)local_40 | 1);
    if ((local_40[0] & 1) != 0) {
      plVar2 = local_30;
    }
    if (*plVar2 == 0x6c6c6f7263536e6f && (int)plVar2[1] == 0x6e776f44) {
      *param_2 = 2;
      goto joined_r0x001e0888;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001e0950 to 001e0953 has its CatchHandler @ 001e0954 */
    abort();
  }
LAB_001e0980:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e0984  FUN_001e0984 =====

void FUN_001e0984(undefined8 param_1,undefined4 *param_2)

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
  FUN_001c862c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 6) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if ((int)*plVar2 == 0x42626174 && *(short *)((long)plVar2 + 4) == 0x7261) {
      *param_2 = 1;
joined_r0x001e0a70:
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
      goto LAB_001e0b1c;
    }
  }
  else if (uVar1 == 10) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if (*plVar2 == 0x6265646953626174 && (short)plVar2[1] == 0x7261) {
      *param_2 = 2;
      goto joined_r0x001e0a70;
    }
  }
  else if (uVar1 == 9) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if (*plVar2 == 0x6974616d6f747561 && (char)plVar2[1] == 'c') {
      *param_2 = 0;
      goto joined_r0x001e0a70;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001e0aec to 001e0aef has its CatchHandler @ 001e0af0 */
    abort();
  }
LAB_001e0b1c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e0b20  FUN_001e0b20 =====

void FUN_001e0b20(undefined8 *param_1,byte *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  byte local_b0;
  undefined7 local_af;
  char cStack_a8;
  undefined2 uStack_a7;
  undefined1 uStack_a5;
  undefined1 local_a4;
  void *local_a0;
  void *local_98 [2];
  void *local_88;
  byte local_70;
  undefined7 uStack_6f;
  char cStack_68;
  undefined7 uStack_67;
  char cStack_60;
  undefined4 uStack_5f;
  undefined1 uStack_5b;
  undefined2 uStack_5a;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 6) == 1) {
    FUN_001d3d44(local_98,*param_1,param_1 + 1);
  }
  else {
    if (*(int *)(param_1 + 6) != 0) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_001c858c();
      }
      goto LAB_001e0ec4;
    }
    FUN_001d37e0(local_98);
  }
  local_70 = 0x28;
  uStack_5f = 0x6e6f6974;
  uStack_67 = (undefined7)s_repeatedTabSelection_001403ec._8_8_;
  cStack_60 = SUB81(s_repeatedTabSelection_001403ec._8_8_,7);
  uStack_6f = (undefined7)s_repeatedTabSelection_001403ec._0_8_;
  cStack_68 = SUB81(s_repeatedTabSelection_001403ec._0_8_,7);
  uStack_5b = 0;
  lVar4 = FUN_001d5c1c(local_98,&local_70);
  if ((local_70 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_5a,CONCAT15(uStack_5b,CONCAT41(uStack_5f,cStack_60))));
  }
  pvVar5 = local_98[0];
  puVar2 = (undefined8 *)local_88;
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x58) == 1) {
      FUN_001d3d44(&local_70,*(undefined8 *)(lVar4 + 0x28),lVar4 + 0x30);
    }
    else {
      if (*(int *)(lVar4 + 0x58) != 0) {
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001e0e20 to 001e0e23 has its CatchHandler @ 001e0ea0 */
          FUN_001c858c();
        }
        goto LAB_001e0ec4;
      }
                    /* try { // try from 001e0bdc to 001e0bfb has its CatchHandler @ 001e0ea0 */
      FUN_001d37e0(&local_70,lVar4 + 0x28);
    }
    local_b0 = 0x12;
    uStack_a7 = 0x74;
    local_af = (undefined7)s_popToRoot_001408a9._0_8_;
    cStack_a8 = SUB81(s_popToRoot_001408a9._0_8_,7);
    lVar4 = FUN_001d5c1c(&local_70,&local_b0);
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x58) == 1) {
                    /* try { // try from 001e0c6c to 001e0c73 has its CatchHandler @ 001e0e90 */
        bVar3 = facebook::jsi::Value::asBool();
      }
      else {
        if (*(int *)(lVar4 + 0x58) != 0) {
          if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001e0e34 to 001e0e37 has its CatchHandler @ 001e0e90 */
            FUN_001c858c();
          }
          goto LAB_001e0ec4;
        }
        if (*(int *)(lVar4 + 0x28) != 2) {
          if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 001e0e5c to 001e0e6b has its CatchHandler @ 001e0e90 */
                    /* WARNING: Subroutine does not return */
            FUN_00172ea4(*(undefined8 *)PTR_name_001f0f60);
          }
          goto LAB_001e0ec4;
        }
        bVar3 = *(char *)(lVar4 + 0x30) != '\0';
      }
      *param_2 = bVar3 & 1;
    }
    local_b0 = 0x16;
    uStack_a7 = 0x6f54;
    uStack_a5 = 0x70;
    local_af = (undefined7)s_scrollToTop_00140260._0_8_;
    cStack_a8 = SUB81(s_scrollToTop_00140260._0_8_,7);
    local_a4 = 0;
    lVar4 = FUN_001d5c1c(&local_70,&local_b0);
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x58) == 1) {
                    /* try { // try from 001e0cf4 to 001e0cfb has its CatchHandler @ 001e0e8c */
        bVar3 = facebook::jsi::Value::asBool();
      }
      else {
        if (*(int *)(lVar4 + 0x58) != 0) {
          if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001e0e48 to 001e0e4b has its CatchHandler @ 001e0e8c */
            FUN_001c858c();
          }
          goto LAB_001e0ec4;
        }
        if (*(int *)(lVar4 + 0x28) != 2) {
          if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 001e0e7c to 001e0e8b has its CatchHandler @ 001e0e8c */
                    /* WARNING: Subroutine does not return */
            FUN_00172ea4(*(undefined8 *)PTR_name_001f0f60);
          }
          goto LAB_001e0ec4;
        }
        bVar3 = *(char *)(lVar4 + 0x30) != '\0';
      }
      param_2[1] = bVar3 & 1;
    }
    puVar2 = (undefined8 *)CONCAT26(uStack_5a,CONCAT15(uStack_5b,CONCAT41(uStack_5f,cStack_60)));
    while (puVar2 != (undefined8 *)0x0) {
      pvVar5 = (void *)*puVar2;
      if (*(uint *)(puVar2 + 0xb) != 0xffffffff) {
                    /* try { // try from 001e0d38 to 001e0d43 has its CatchHandler @ 001e0ec8 */
        (*(code *)(&PTR_FUN_001f05f8)[*(uint *)(puVar2 + 0xb)])(&local_b0,puVar2 + 5);
      }
      *(undefined4 *)(puVar2 + 0xb) = 0xffffffff;
      if ((*(byte *)(puVar2 + 2) & 1) != 0) {
        operator_delete((void *)puVar2[4]);
      }
      operator_delete(puVar2);
      puVar2 = (undefined8 *)pvVar5;
    }
    pvVar6 = (void *)CONCAT71(uStack_6f,local_70);
    local_70 = 0;
    uStack_6f = 0;
    pvVar5 = local_98[0];
    puVar2 = (undefined8 *)local_88;
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
      pvVar5 = local_98[0];
      puVar2 = (undefined8 *)local_88;
    }
  }
  while (puVar2 != (undefined8 *)0x0) {
    pvVar6 = (void *)*puVar2;
    local_98[0] = pvVar5;
    if (*(uint *)(puVar2 + 0xb) != 0xffffffff) {
                    /* try { // try from 001e0da0 to 001e0dab has its CatchHandler @ 001e0ecc */
      (*(code *)(&PTR_FUN_001f05f8)[*(uint *)(puVar2 + 0xb)])(&local_70,puVar2 + 5);
    }
    *(undefined4 *)(puVar2 + 0xb) = 0xffffffff;
    if ((*(byte *)(puVar2 + 2) & 1) != 0) {
      operator_delete((void *)puVar2[4]);
    }
    operator_delete(puVar2);
    pvVar5 = local_98[0];
    puVar2 = (undefined8 *)pvVar6;
  }
  local_98[0] = (void *)0x0;
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_001e0ec4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e0ed0  FUN_001e0ed0 =====

void FUN_001e0ed0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[1];
  uVar3 = *param_2;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  if ((*(byte *)(param_2 + 7) & 1) == 0) {
    uVar2 = param_2[8];
    uVar1 = param_2[7];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[7] = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 7),(char *)param_2[9],param_2[8]);
  }
  param_1[10] = param_2[10];
  if ((*(byte *)(param_2 + 0xb) & 1) == 0) {
    uVar2 = param_2[0xc];
    uVar1 = param_2[0xb];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar2;
    param_1[0xb] = uVar1;
  }
  else {
                    /* try { // try from 001e0f54 to 001e0f5b has its CatchHandler @ 001e0fcc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0xb),(char *)param_2[0xd],param_2[0xc]);
  }
  if ((*(byte *)(param_2 + 0xe) & 1) == 0) {
    uVar2 = param_2[0xf];
    uVar1 = param_2[0xe];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar2;
    param_1[0xe] = uVar1;
  }
  else {
                    /* try { // try from 001e0f80 to 001e0f87 has its CatchHandler @ 001e0f9c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0xe),(char *)param_2[0x10],param_2[0xf]);
  }
  param_1[0x11] = param_2[0x11];
  return;
}


// ===== 001e0fe8  FUN_001e0fe8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e0fe8(undefined4 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined2 uVar32;
  undefined2 uVar33;
  undefined2 uVar34;
  byte bVar35;
  long lVar36;
  char *pcVar37;
  void *pvVar38;
  void *pvVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  byte local_e0;
  undefined7 uStack_df;
  char cStack_d8;
  undefined7 uStack_d7;
  undefined4 local_d0;
  uint uStack_cc;
  void *local_c8 [2];
  void *local_b8;
  uint local_a0;
  char cStack_9c;
  undefined2 uStack_9b;
  char cStack_99;
  char cStack_98;
  char cStack_97;
  undefined4 uStack_96;
  undefined2 uStack_92;
  char cStack_90;
  undefined5 uStack_8f;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  if (*(int *)(param_2 + 6) == 1) {
    FUN_001d3d44(local_c8,*param_2,param_2 + 1);
  }
  else {
    if (*(int *)(param_2 + 6) != 0) {
      if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_001c858c();
      }
      goto LAB_001e1f70;
    }
    FUN_001d37e0(local_c8,param_2);
  }
  cStack_97 = (char)s_tabBarBackgroundColor_0013e954._8_5_;
  uStack_96 = SUB54(s_tabBarBackgroundColor_0013e954._8_5_,1);
  local_a0._1_3_ = (undefined3)s_tabBarBackgroundColor_0013e954._0_8_;
  local_a0 = CONCAT31(local_a0._1_3_,0x2a);
  cStack_9c = SUB81(s_tabBarBackgroundColor_0013e954._0_8_,3);
  uStack_9b = SUB82(s_tabBarBackgroundColor_0013e954._0_8_,4);
  cStack_99 = SUB81(s_tabBarBackgroundColor_0013e954._0_8_,6);
  cStack_98 = SUB81(s_tabBarBackgroundColor_0013e954._0_8_,7);
  uStack_92 = (undefined2)s_tabBarBackgroundColor_0013e954._13_3_;
  cStack_90 = SUB31(s_tabBarBackgroundColor_0013e954._13_3_,2);
  uStack_8f._0_1_ = s_tabBarBackgroundColor_0013e954[0x10];
  uStack_8f._1_1_ = s_tabBarBackgroundColor_0013e954[0x11];
  uStack_8f._2_1_ = s_tabBarBackgroundColor_0013e954[0x12];
  uStack_8f._3_1_ = s_tabBarBackgroundColor_0013e954[0x13];
  uStack_8f._4_1_ = s_tabBarBackgroundColor_0013e954[0x14];
  uStack_8a = 0;
  lVar36 = FUN_001d5c1c(local_c8,&local_a0);
  if ((local_a0 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT51(uStack_8f,cStack_90))));
  }
  if (lVar36 != 0) {
                    /* try { // try from 001e1098 to 001e10a3 has its CatchHandler @ 001e1ef4 */
    FUN_001caad4(*(undefined8 *)(param_1 + 2),*param_1,lVar36 + 0x28,param_3);
  }
  cStack_97 = (char)s_tabBarItemRippleColor_0013f992._8_5_;
  uStack_96 = SUB54(s_tabBarItemRippleColor_0013f992._8_5_,1);
  local_a0._1_3_ = (undefined3)s_tabBarItemRippleColor_0013f992._0_8_;
  local_a0 = CONCAT31(local_a0._1_3_,0x2a);
  cStack_9c = SUB81(s_tabBarItemRippleColor_0013f992._0_8_,3);
  uStack_9b = SUB82(s_tabBarItemRippleColor_0013f992._0_8_,4);
  cStack_99 = SUB81(s_tabBarItemRippleColor_0013f992._0_8_,6);
  cStack_98 = SUB81(s_tabBarItemRippleColor_0013f992._0_8_,7);
  uStack_92 = (undefined2)s_tabBarItemRippleColor_0013f992._13_3_;
  cStack_90 = SUB31(s_tabBarItemRippleColor_0013f992._13_3_,2);
  uStack_8f._0_1_ = s_tabBarItemRippleColor_0013f992[0x10];
  uStack_8f._1_1_ = s_tabBarItemRippleColor_0013f992[0x11];
  uStack_8f._2_1_ = s_tabBarItemRippleColor_0013f992[0x12];
  uStack_8f._3_1_ = s_tabBarItemRippleColor_0013f992[0x13];
  uStack_8f._4_1_ = s_tabBarItemRippleColor_0013f992[0x14];
  uStack_8a = 0;
  lVar36 = FUN_001d5c1c(local_c8,&local_a0);
  if ((local_a0 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT51(uStack_8f,cStack_90))));
  }
  if (lVar36 != 0) {
                    /* try { // try from 001e10f4 to 001e10ff has its CatchHandler @ 001e1ef0 */
    FUN_001caad4(*(undefined8 *)(param_1 + 2),*param_1,lVar36 + 0x28,param_3 + 4);
  }
                    /* try { // try from 001e1100 to 001e1107 has its CatchHandler @ 001e1f48 */
  pcVar37 = (char *)operator_new(0x20);
  uVar10 = _UNK_00142498;
  uVar9 = _DAT_00142490;
  uVar8 = s_tabBarItemLabelVisibilityMode_0013feb2._21_8_;
  uVar7 = s_tabBarItemLabelVisibilityMode_0013feb2._0_8_;
  uVar4 = CONCAT53(s_tabBarItemLabelVisibilityMode_0013feb2._16_5_,
                   s_tabBarItemLabelVisibilityMode_0013feb2._13_3_);
  cStack_90 = (char)pcVar37;
  uStack_8f = (undefined5)((ulong)pcVar37 >> 8);
  uStack_8a = (undefined1)((ulong)pcVar37 >> 0x30);
  uStack_89 = (undefined1)((ulong)pcVar37 >> 0x38);
  *(ulong *)(pcVar37 + 8) =
       CONCAT35(s_tabBarItemLabelVisibilityMode_0013feb2._13_3_,
                s_tabBarItemLabelVisibilityMode_0013feb2._8_5_);
  *(undefined8 *)pcVar37 = uVar7;
  *(undefined8 *)(pcVar37 + 0x15) = uVar8;
  *(undefined8 *)(pcVar37 + 0xd) = uVar4;
  pcVar37[0x1d] = '\0';
  cStack_98 = (char)uVar10;
  cStack_97 = (char)((ulong)uVar10 >> 8);
  uStack_96 = (undefined4)((ulong)uVar10 >> 0x10);
  uStack_92 = (undefined2)((ulong)uVar10 >> 0x30);
  local_a0 = (uint)uVar9;
  cStack_9c = (char)((ulong)uVar9 >> 0x20);
  uStack_9b = (undefined2)((ulong)uVar9 >> 0x28);
  cStack_99 = (char)((ulong)uVar9 >> 0x38);
  lVar36 = FUN_001d5c1c(local_c8,&local_a0);
  if ((local_a0 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT51(uStack_8f,cStack_90))));
  }
  if (lVar36 != 0) {
                    /* try { // try from 001e1168 to 001e1173 has its CatchHandler @ 001e1eec */
    FUN_001c862c(&local_a0,lVar36 + 0x28);
    uVar1 = (ulong)((byte)local_a0 >> 1);
    if ((local_a0 & 1) != 0) {
      uVar1 = CONCAT26(uStack_92,CONCAT42(uStack_96,CONCAT11(cStack_97,cStack_98)));
    }
    if ((long)uVar1 < 8) {
      if (uVar1 == 4) {
        plVar5 = (long *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT51(uStack_8f,cStack_90)));
        plVar2 = (long *)((ulong)&local_a0 | 1);
        if ((local_a0 & 1) != 0) {
          plVar2 = plVar5;
        }
        if ((int)*plVar2 == 0x6f747561) {
          *(undefined4 *)(param_3 + 8) = 0;
joined_r0x001e123c:
          if ((local_a0 & 1) != 0) {
            operator_delete(plVar5);
          }
          goto LAB_001e12ac;
        }
      }
      else if (uVar1 == 7) {
        plVar5 = (long *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT51(uStack_8f,cStack_90)));
        plVar2 = (long *)((ulong)&local_a0 | 1);
        if ((local_a0 & 1) != 0) {
          plVar2 = plVar5;
        }
        if ((int)*plVar2 == 0x6562616c && *(int *)((long)plVar2 + 3) == 0x64656c65) {
          *(undefined4 *)(param_3 + 8) = 2;
          goto joined_r0x001e123c;
        }
      }
    }
    else if (uVar1 == 8) {
      plVar5 = (long *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT51(uStack_8f,cStack_90)));
      plVar2 = (long *)((ulong)&local_a0 | 1);
      if ((local_a0 & 1) != 0) {
        plVar2 = plVar5;
      }
      if (*plVar2 == 0x64657463656c6573) {
        *(undefined4 *)(param_3 + 8) = 1;
        goto joined_r0x001e123c;
      }
    }
    else if (uVar1 == 9) {
      plVar5 = (long *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT51(uStack_8f,cStack_90)));
      plVar2 = (long *)((ulong)&local_a0 | 1);
      if ((local_a0 & 1) != 0) {
        plVar2 = plVar5;
      }
      if (*plVar2 == 0x656c6562616c6e75 && (char)plVar2[1] == 'd') {
        *(undefined4 *)(param_3 + 8) = 3;
        goto joined_r0x001e123c;
      }
    }
    if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* try { // try from 001e1dec to 001e1df3 has its CatchHandler @ 001e1ef8 */
                    /* WARNING: Subroutine does not return */
      abort();
    }
    goto LAB_001e1f70;
  }
LAB_001e12ac:
  local_a0 = 0x726f6e0c;
  cStack_9c = 0x6d;
  uStack_9b = 0x6c61;
  cStack_99 = 0;
  lVar36 = FUN_001d5c1c(local_c8,&local_a0);
  if ((local_a0 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT51(uStack_8f,cStack_90))));
  }
  if (lVar36 != 0) {
    if (*(int *)(lVar36 + 0x58) == 1) {
      FUN_001d3d44(&local_a0,*(undefined8 *)(lVar36 + 0x28),lVar36 + 0x30);
    }
    else {
      if (*(int *)(lVar36 + 0x58) != 0) {
        if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001e1e18 to 001e1e1b has its CatchHandler @ 001e1f20 */
          FUN_001c858c();
        }
        goto LAB_001e1f70;
      }
                    /* try { // try from 001e131c to 001e133b has its CatchHandler @ 001e1f20 */
      FUN_001d37e0(&local_a0,lVar36 + 0x28);
    }
                    /* try { // try from 001e133c to 001e1343 has its CatchHandler @ 001e1ed8 */
    pcVar37 = (char *)operator_new(0x20);
    uVar9 = _UNK_001423e8;
    uVar8 = _DAT_001423e0;
    uVar7 = s_tabBarItemTitleFontColor_0013f56d._16_8_;
    uVar4 = s_tabBarItemTitleFontColor_0013f56d._0_8_;
    local_d0 = SUB84(pcVar37,0);
    uStack_cc = (uint)((ulong)pcVar37 >> 0x20);
    *(undefined8 *)(pcVar37 + 8) = s_tabBarItemTitleFontColor_0013f56d._8_8_;
    *(undefined8 *)pcVar37 = uVar4;
    *(undefined8 *)(pcVar37 + 0x10) = uVar7;
    pcVar37[0x18] = '\0';
    cStack_d8 = (char)uVar9;
    uStack_d7 = (undefined7)((ulong)uVar9 >> 8);
    local_e0 = (byte)uVar8;
    uStack_df = (undefined7)((ulong)uVar8 >> 8);
    lVar36 = FUN_001d5c1c(&local_a0,&local_e0);
    if ((local_e0 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_cc,local_d0));
    }
    if (lVar36 != 0) {
                    /* try { // try from 001e1390 to 001e139b has its CatchHandler @ 001e1ea8 */
      FUN_001caad4(*(undefined8 *)(param_1 + 2),*param_1,lVar36 + 0x28,param_3 + 0xc);
    }
    local_e0 = 0x26;
    uStack_d7 = (undefined7)s_tabBarItemIconColor_0013edcd._8_8_;
    local_d0._0_1_ = SUB81(s_tabBarItemIconColor_0013edcd._8_8_,7);
    local_d0 = CONCAT31(0x726f6c,(char)local_d0);
    uStack_df = (undefined7)s_tabBarItemIconColor_0013edcd._0_8_;
    cStack_d8 = SUB81(s_tabBarItemIconColor_0013edcd._0_8_,7);
    uStack_cc = uStack_cc & 0xffffff00;
    lVar36 = FUN_001d5c1c(&local_a0,&local_e0);
    if ((local_e0 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_cc,local_d0));
    }
    if (lVar36 != 0) {
                    /* try { // try from 001e13f4 to 001e13ff has its CatchHandler @ 001e1ea4 */
      FUN_001caad4(*(undefined8 *)(param_1 + 2),*param_1,lVar36 + 0x28,param_3 + 0x10);
    }
    puVar6 = (undefined8 *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT51(uStack_8f,cStack_90)));
    while (puVar6 != (undefined8 *)0x0) {
      pvVar39 = (void *)*puVar6;
      if (*(uint *)(puVar6 + 0xb) != 0xffffffff) {
                    /* try { // try from 001e1434 to 001e143f has its CatchHandler @ 001e1f80 */
        (*(code *)(&PTR_FUN_001f05f8)[*(uint *)(puVar6 + 0xb)])(&local_e0,puVar6 + 5);
      }
      *(undefined4 *)(puVar6 + 0xb) = 0xffffffff;
      if ((*(byte *)(puVar6 + 2) & 1) != 0) {
        operator_delete((void *)puVar6[4]);
      }
      operator_delete(puVar6);
      puVar6 = (undefined8 *)pvVar39;
    }
    pvVar39 = (void *)CONCAT17(cStack_99,CONCAT25(uStack_9b,CONCAT14(cStack_9c,local_a0)));
    local_a0 = 0;
    cStack_9c = 0;
    uStack_9b = 0;
    cStack_99 = 0;
    if (pvVar39 != (void *)0x0) {
      operator_delete(pvVar39);
    }
  }
  cStack_9c = 0x65;
  uStack_9b = 0x7463;
  cStack_99 = 0x65;
  cStack_98 = 100;
  local_a0 = 0x6c657310;
  cStack_97 = 0;
  lVar36 = FUN_001d5c1c(local_c8,&local_a0);
  if ((local_a0 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT51(uStack_8f,cStack_90))));
  }
  if (lVar36 != 0) {
    if (*(int *)(lVar36 + 0x58) == 1) {
      FUN_001d3d44(&local_a0,*(undefined8 *)(lVar36 + 0x28),lVar36 + 0x30);
    }
    else {
      if (*(int *)(lVar36 + 0x58) != 0) {
        if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001e1e2c to 001e1e2f has its CatchHandler @ 001e1f1c */
          FUN_001c858c();
        }
        goto LAB_001e1f70;
      }
                    /* try { // try from 001e14c0 to 001e14df has its CatchHandler @ 001e1f1c */
      FUN_001d37e0(&local_a0,lVar36 + 0x28);
    }
                    /* try { // try from 001e14e0 to 001e14e7 has its CatchHandler @ 001e1ed4 */
    pcVar37 = (char *)operator_new(0x20);
    uVar9 = _UNK_001423e8;
    uVar8 = _DAT_001423e0;
    uVar7 = s_tabBarItemTitleFontColor_0013f56d._16_8_;
    uVar4 = s_tabBarItemTitleFontColor_0013f56d._0_8_;
    local_d0 = SUB84(pcVar37,0);
    uStack_cc = (uint)((ulong)pcVar37 >> 0x20);
    *(undefined8 *)(pcVar37 + 8) = s_tabBarItemTitleFontColor_0013f56d._8_8_;
    *(undefined8 *)pcVar37 = uVar4;
    *(undefined8 *)(pcVar37 + 0x10) = uVar7;
    pcVar37[0x18] = '\0';
    cStack_d8 = (char)uVar9;
    uStack_d7 = (undefined7)((ulong)uVar9 >> 8);
    local_e0 = (byte)uVar8;
    uStack_df = (undefined7)((ulong)uVar8 >> 8);
    lVar36 = FUN_001d5c1c(&local_a0,&local_e0);
    if ((local_e0 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_cc,local_d0));
    }
    if (lVar36 != 0) {
                    /* try { // try from 001e1534 to 001e153f has its CatchHandler @ 001e1ea0 */
      FUN_001caad4(*(undefined8 *)(param_1 + 2),*param_1,lVar36 + 0x28,param_3 + 0x14);
    }
    local_e0 = 0x26;
    uStack_d7 = (undefined7)s_tabBarItemIconColor_0013edcd._8_8_;
    local_d0._0_1_ = SUB81(s_tabBarItemIconColor_0013edcd._8_8_,7);
    local_d0 = CONCAT31(0x726f6c,(char)local_d0);
    uStack_df = (undefined7)s_tabBarItemIconColor_0013edcd._0_8_;
    cStack_d8 = SUB81(s_tabBarItemIconColor_0013edcd._0_8_,7);
    uStack_cc = uStack_cc & 0xffffff00;
    lVar36 = FUN_001d5c1c(&local_a0,&local_e0);
    if ((local_e0 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_cc,local_d0));
    }
    if (lVar36 != 0) {
                    /* try { // try from 001e158c to 001e1597 has its CatchHandler @ 001e1e9c */
      FUN_001caad4(*(undefined8 *)(param_1 + 2),*param_1,lVar36 + 0x28,param_3 + 0x18);
    }
    puVar6 = (undefined8 *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT51(uStack_8f,cStack_90)));
    while (puVar6 != (undefined8 *)0x0) {
      pvVar39 = (void *)*puVar6;
      if (*(uint *)(puVar6 + 0xb) != 0xffffffff) {
                    /* try { // try from 001e15cc to 001e15d7 has its CatchHandler @ 001e1f7c */
        (*(code *)(&PTR_FUN_001f05f8)[*(uint *)(puVar6 + 0xb)])(&local_e0,puVar6 + 5);
      }
      *(undefined4 *)(puVar6 + 0xb) = 0xffffffff;
      if ((*(byte *)(puVar6 + 2) & 1) != 0) {
        operator_delete((void *)puVar6[4]);
      }
      operator_delete(puVar6);
      puVar6 = (undefined8 *)pvVar39;
    }
    pvVar39 = (void *)CONCAT17(cStack_99,CONCAT25(uStack_9b,CONCAT14(cStack_9c,local_a0)));
    local_a0 = 0;
    cStack_9c = 0;
    uStack_9b = 0;
    cStack_99 = 0;
    if (pvVar39 != (void *)0x0) {
      operator_delete(pvVar39);
    }
  }
  local_a0 = 0x636f660e;
  cStack_9c = 0x75;
  uStack_9b = 0x6573;
  cStack_99 = 100;
  cStack_98 = 0;
  lVar36 = FUN_001d5c1c(local_c8,&local_a0);
  if ((local_a0 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT51(uStack_8f,cStack_90))));
  }
  if (lVar36 != 0) {
    if (*(int *)(lVar36 + 0x58) == 1) {
      FUN_001d3d44(&local_a0,*(undefined8 *)(lVar36 + 0x28),lVar36 + 0x30);
    }
    else {
      if (*(int *)(lVar36 + 0x58) != 0) {
        if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001e1e40 to 001e1e43 has its CatchHandler @ 001e1f18 */
          FUN_001c858c();
        }
        goto LAB_001e1f70;
      }
                    /* try { // try from 001e1658 to 001e1677 has its CatchHandler @ 001e1f18 */
      FUN_001d37e0(&local_a0,lVar36 + 0x28);
    }
                    /* try { // try from 001e1678 to 001e167f has its CatchHandler @ 001e1ed0 */
    pcVar37 = (char *)operator_new(0x20);
    uVar9 = _UNK_001423e8;
    uVar8 = _DAT_001423e0;
    uVar7 = s_tabBarItemTitleFontColor_0013f56d._16_8_;
    uVar4 = s_tabBarItemTitleFontColor_0013f56d._0_8_;
    local_d0 = SUB84(pcVar37,0);
    uStack_cc = (uint)((ulong)pcVar37 >> 0x20);
    *(undefined8 *)(pcVar37 + 8) = s_tabBarItemTitleFontColor_0013f56d._8_8_;
    *(undefined8 *)pcVar37 = uVar4;
    *(undefined8 *)(pcVar37 + 0x10) = uVar7;
    pcVar37[0x18] = '\0';
    cStack_d8 = (char)uVar9;
    uStack_d7 = (undefined7)((ulong)uVar9 >> 8);
    local_e0 = (byte)uVar8;
    uStack_df = (undefined7)((ulong)uVar8 >> 8);
    lVar36 = FUN_001d5c1c(&local_a0,&local_e0);
    if ((local_e0 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_cc,local_d0));
    }
    if (lVar36 != 0) {
                    /* try { // try from 001e16cc to 001e16d7 has its CatchHandler @ 001e1e98 */
      FUN_001caad4(*(undefined8 *)(param_1 + 2),*param_1,lVar36 + 0x28,param_3 + 0x1c);
    }
    local_e0 = 0x26;
    uStack_d7 = (undefined7)s_tabBarItemIconColor_0013edcd._8_8_;
    local_d0._0_1_ = SUB81(s_tabBarItemIconColor_0013edcd._8_8_,7);
    local_d0 = CONCAT31(0x726f6c,(char)local_d0);
    uStack_df = (undefined7)s_tabBarItemIconColor_0013edcd._0_8_;
    cStack_d8 = SUB81(s_tabBarItemIconColor_0013edcd._0_8_,7);
    uStack_cc = uStack_cc & 0xffffff00;
    lVar36 = FUN_001d5c1c(&local_a0,&local_e0);
    if ((local_e0 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_cc,local_d0));
    }
    if (lVar36 != 0) {
                    /* try { // try from 001e1724 to 001e172f has its CatchHandler @ 001e1e94 */
      FUN_001caad4(*(undefined8 *)(param_1 + 2),*param_1,lVar36 + 0x28,param_3 + 0x20);
    }
    puVar6 = (undefined8 *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT51(uStack_8f,cStack_90)));
    while (puVar6 != (undefined8 *)0x0) {
      pvVar39 = (void *)*puVar6;
      if (*(uint *)(puVar6 + 0xb) != 0xffffffff) {
                    /* try { // try from 001e1764 to 001e176f has its CatchHandler @ 001e1f78 */
        (*(code *)(&PTR_FUN_001f05f8)[*(uint *)(puVar6 + 0xb)])(&local_e0,puVar6 + 5);
      }
      *(undefined4 *)(puVar6 + 0xb) = 0xffffffff;
      if ((*(byte *)(puVar6 + 2) & 1) != 0) {
        operator_delete((void *)puVar6[4]);
      }
      operator_delete(puVar6);
      puVar6 = (undefined8 *)pvVar39;
    }
    pvVar39 = (void *)CONCAT17(cStack_99,CONCAT25(uStack_9b,CONCAT14(cStack_9c,local_a0)));
    local_a0 = 0;
    cStack_9c = 0;
    uStack_9b = 0;
    cStack_99 = 0;
    if (pvVar39 != (void *)0x0) {
      operator_delete(pvVar39);
    }
  }
  cStack_97 = 0;
  local_a0 = 0x73696410;
  cStack_9c = 0x61;
  uStack_9b = 0x6c62;
  cStack_99 = 0x65;
  cStack_98 = 100;
  lVar36 = FUN_001d5c1c(local_c8,&local_a0);
  if ((local_a0 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT51(uStack_8f,cStack_90))));
  }
  if (lVar36 != 0) {
    if (*(int *)(lVar36 + 0x58) == 1) {
      FUN_001d3d44(&local_a0,*(undefined8 *)(lVar36 + 0x28),lVar36 + 0x30);
    }
    else {
      if (*(int *)(lVar36 + 0x58) != 0) {
        if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001e1e54 to 001e1e57 has its CatchHandler @ 001e1f14 */
          FUN_001c858c();
        }
        goto LAB_001e1f70;
      }
                    /* try { // try from 001e17ec to 001e180b has its CatchHandler @ 001e1f14 */
      FUN_001d37e0(&local_a0,lVar36 + 0x28);
    }
                    /* try { // try from 001e180c to 001e1813 has its CatchHandler @ 001e1ecc */
    pcVar37 = (char *)operator_new(0x20);
    uVar9 = _UNK_001423e8;
    uVar8 = _DAT_001423e0;
    uVar7 = s_tabBarItemTitleFontColor_0013f56d._16_8_;
    uVar4 = s_tabBarItemTitleFontColor_0013f56d._0_8_;
    local_d0 = SUB84(pcVar37,0);
    uStack_cc = (uint)((ulong)pcVar37 >> 0x20);
    *(undefined8 *)(pcVar37 + 8) = s_tabBarItemTitleFontColor_0013f56d._8_8_;
    *(undefined8 *)pcVar37 = uVar4;
    *(undefined8 *)(pcVar37 + 0x10) = uVar7;
    pcVar37[0x18] = '\0';
    cStack_d8 = (char)uVar9;
    uStack_d7 = (undefined7)((ulong)uVar9 >> 8);
    local_e0 = (byte)uVar8;
    uStack_df = (undefined7)((ulong)uVar8 >> 8);
    lVar36 = FUN_001d5c1c(&local_a0,&local_e0);
    if ((local_e0 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_cc,local_d0));
    }
    if (lVar36 != 0) {
                    /* try { // try from 001e1860 to 001e186b has its CatchHandler @ 001e1e90 */
      FUN_001caad4(*(undefined8 *)(param_1 + 2),*param_1,lVar36 + 0x28,param_3 + 0x24);
    }
    local_e0 = 0x26;
    uStack_d7 = (undefined7)s_tabBarItemIconColor_0013edcd._8_8_;
    local_d0._0_1_ = SUB81(s_tabBarItemIconColor_0013edcd._8_8_,7);
    local_d0 = CONCAT31(0x726f6c,(char)local_d0);
    uStack_df = (undefined7)s_tabBarItemIconColor_0013edcd._0_8_;
    cStack_d8 = SUB81(s_tabBarItemIconColor_0013edcd._0_8_,7);
    uStack_cc = uStack_cc & 0xffffff00;
    lVar36 = FUN_001d5c1c(&local_a0,&local_e0);
    if ((local_e0 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_cc,local_d0));
    }
    if (lVar36 != 0) {
                    /* try { // try from 001e18b8 to 001e18c3 has its CatchHandler @ 001e1e8c */
      FUN_001caad4(*(undefined8 *)(param_1 + 2),*param_1,lVar36 + 0x28,param_3 + 0x28);
    }
    puVar6 = (undefined8 *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT51(uStack_8f,cStack_90)));
    while (puVar6 != (undefined8 *)0x0) {
      pvVar39 = (void *)*puVar6;
      if (*(uint *)(puVar6 + 0xb) != 0xffffffff) {
                    /* try { // try from 001e18f8 to 001e1903 has its CatchHandler @ 001e1f74 */
        (*(code *)(&PTR_FUN_001f05f8)[*(uint *)(puVar6 + 0xb)])(&local_e0,puVar6 + 5);
      }
      *(undefined4 *)(puVar6 + 0xb) = 0xffffffff;
      if ((*(byte *)(puVar6 + 2) & 1) != 0) {
        operator_delete((void *)puVar6[4]);
      }
      operator_delete(puVar6);
      puVar6 = (undefined8 *)pvVar39;
    }
    pvVar39 = (void *)CONCAT17(cStack_99,CONCAT25(uStack_9b,CONCAT14(cStack_9c,local_a0)));
    local_a0 = 0;
    cStack_9c = 0;
    uStack_9b = 0;
    cStack_99 = 0;
    if (pvVar39 != (void *)0x0) {
      operator_delete(pvVar39);
    }
  }
                    /* try { // try from 001e192c to 001e1933 has its CatchHandler @ 001e1f44 */
  pcVar37 = (char *)operator_new(0x20);
  uVar10 = _UNK_00142428;
  uVar9 = _DAT_00142420;
  uVar8 = s_tabBarItemActiveIndicatorColor_0013f08a._22_8_;
  uVar7 = s_tabBarItemActiveIndicatorColor_0013f08a._0_8_;
  uVar4 = CONCAT62(s_tabBarItemActiveIndicatorColor_0013f08a._16_6_,
                   s_tabBarItemActiveIndicatorColor_0013f08a._14_2_);
  cStack_90 = (char)pcVar37;
  uStack_8f = (undefined5)((ulong)pcVar37 >> 8);
  uStack_8a = (undefined1)((ulong)pcVar37 >> 0x30);
  uStack_89 = (undefined1)((ulong)pcVar37 >> 0x38);
  *(ulong *)(pcVar37 + 8) =
       CONCAT26(s_tabBarItemActiveIndicatorColor_0013f08a._14_2_,
                s_tabBarItemActiveIndicatorColor_0013f08a._8_6_);
  *(undefined8 *)pcVar37 = uVar7;
  *(undefined8 *)(pcVar37 + 0x16) = uVar8;
  *(undefined8 *)(pcVar37 + 0xe) = uVar4;
  pcVar37[0x1e] = '\0';
  cStack_98 = (char)uVar10;
  cVar24 = cStack_98;
  cStack_97 = (char)((ulong)uVar10 >> 8);
  cVar27 = cStack_97;
  uStack_96 = (undefined4)((ulong)uVar10 >> 0x10);
  uVar30 = uStack_96;
  uStack_92 = (undefined2)((ulong)uVar10 >> 0x30);
  uVar32 = uStack_92;
  local_a0 = (uint)uVar9;
  uVar12 = local_a0;
  cStack_9c = (char)((ulong)uVar9 >> 0x20);
  cVar15 = cStack_9c;
  uStack_9b = (undefined2)((ulong)uVar9 >> 0x28);
  uVar18 = uStack_9b;
  cStack_99 = (char)((ulong)uVar9 >> 0x38);
  cVar21 = cStack_99;
  lVar36 = FUN_001d5c1c(local_c8,&local_a0);
  if ((local_a0 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT51(uStack_8f,cStack_90))));
  }
  if (lVar36 != 0) {
                    /* try { // try from 001e1990 to 001e199b has its CatchHandler @ 001e1ec8 */
    FUN_001caad4(*(undefined8 *)(param_1 + 2),*param_1,lVar36 + 0x28,param_3 + 0x2c);
  }
                    /* try { // try from 001e199c to 001e19a3 has its CatchHandler @ 001e1f40 */
  pcVar37 = (char *)operator_new(0x30);
  uVar11 = _UNK_00142448;
  uVar10 = _DAT_00142440;
  uVar9 = s_tabBarItemActiveIndicatorEnabled_0013f679._24_8_;
  uVar8 = s_tabBarItemActiveIndicatorEnabled_0013f679._16_8_;
  uVar7 = s_tabBarItemActiveIndicatorEnabled_0013f679._8_8_;
  uVar4 = s_tabBarItemActiveIndicatorEnabled_0013f679._0_8_;
  cStack_90 = (char)pcVar37;
  uStack_8f = (undefined5)((ulong)pcVar37 >> 8);
  uStack_8a = (undefined1)((ulong)pcVar37 >> 0x30);
  uStack_89 = (undefined1)((ulong)pcVar37 >> 0x38);
  pcVar37[0x20] = '\0';
  *(undefined8 *)(pcVar37 + 8) = uVar7;
  *(undefined8 *)pcVar37 = uVar4;
  *(undefined8 *)(pcVar37 + 0x18) = uVar9;
  *(undefined8 *)(pcVar37 + 0x10) = uVar8;
  cStack_98 = (char)uVar11;
  cStack_97 = (char)((ulong)uVar11 >> 8);
  uStack_96 = (undefined4)((ulong)uVar11 >> 0x10);
  uStack_92 = (undefined2)((ulong)uVar11 >> 0x30);
  local_a0 = (uint)uVar10;
  cStack_9c = (char)((ulong)uVar10 >> 0x20);
  uStack_9b = (undefined2)((ulong)uVar10 >> 0x28);
  cStack_99 = (char)((ulong)uVar10 >> 0x38);
  lVar36 = FUN_001d5c1c(local_c8,&local_a0);
  if ((local_a0 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT51(uStack_8f,cStack_90))));
  }
  if (lVar36 != 0) {
    if (*(int *)(lVar36 + 0x58) == 1) {
                    /* try { // try from 001e1a18 to 001e1a1f has its CatchHandler @ 001e1f10 */
      bVar35 = facebook::jsi::Value::asBool();
    }
    else {
      if (*(int *)(lVar36 + 0x58) != 0) {
        if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001e1e68 to 001e1e8b has its CatchHandler @ 001e1f10 */
          FUN_001c858c();
        }
        goto LAB_001e1f70;
      }
      if (*(int *)(lVar36 + 0x28) != 2) {
        if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
          FUN_00172ea4(*(undefined8 *)PTR_name_001f0f60);
        }
        goto LAB_001e1f70;
      }
      bVar35 = *(char *)(lVar36 + 0x30) != '\0';
    }
    *(byte *)(param_3 + 0x30) = bVar35 & 1;
  }
                    /* try { // try from 001e1a28 to 001e1a2f has its CatchHandler @ 001e1f3c */
  pcVar37 = (char *)operator_new(0x20);
  uVar10 = _UNK_00142468;
  uVar9 = _DAT_00142460;
  uVar8 = s_tabBarItemTitleFontFamily_00140273._17_8_;
  uVar7 = s_tabBarItemTitleFontFamily_00140273._0_8_;
  uVar4 = CONCAT17(s_tabBarItemTitleFontFamily_00140273[0x10],
                   s_tabBarItemTitleFontFamily_00140273._9_7_);
  cStack_90 = (char)pcVar37;
  uStack_8f = (undefined5)((ulong)pcVar37 >> 8);
  uStack_8a = (undefined1)((ulong)pcVar37 >> 0x30);
  uStack_89 = (undefined1)((ulong)pcVar37 >> 0x38);
  *(ulong *)(pcVar37 + 8) =
       CONCAT71(s_tabBarItemTitleFontFamily_00140273._9_7_,s_tabBarItemTitleFontFamily_00140273[8]);
  *(undefined8 *)pcVar37 = uVar7;
  *(undefined8 *)(pcVar37 + 0x11) = uVar8;
  *(undefined8 *)(pcVar37 + 9) = uVar4;
  pcVar37[0x19] = '\0';
  cStack_98 = (char)uVar10;
  cVar25 = cStack_98;
  cStack_97 = (char)((ulong)uVar10 >> 8);
  cVar28 = cStack_97;
  uStack_96 = (undefined4)((ulong)uVar10 >> 0x10);
  uVar31 = uStack_96;
  uStack_92 = (undefined2)((ulong)uVar10 >> 0x30);
  uVar33 = uStack_92;
  local_a0 = (uint)uVar9;
  uVar13 = local_a0;
  cStack_9c = (char)((ulong)uVar9 >> 0x20);
  cVar16 = cStack_9c;
  uStack_9b = (undefined2)((ulong)uVar9 >> 0x28);
  uVar19 = uStack_9b;
  cStack_99 = (char)((ulong)uVar9 >> 0x38);
  cVar22 = cStack_99;
  lVar36 = FUN_001d5c1c(local_c8,&local_a0);
  if ((local_a0 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT51(uStack_8f,cStack_90))));
  }
  if (lVar36 != 0) {
                    /* try { // try from 001e1a84 to 001e1a8f has its CatchHandler @ 001e1ec4 */
    FUN_001c862c(&local_a0,lVar36 + 0x28);
    if ((*(byte *)(param_3 + 0x38) & 1) != 0) {
      operator_delete(*(void **)(param_3 + 0x48));
    }
    *(ulong *)(param_3 + 0x40) =
         CONCAT26(uStack_92,CONCAT42(uStack_96,CONCAT11(cStack_97,cStack_98)));
    *(ulong *)(param_3 + 0x38) =
         CONCAT17(cStack_99,CONCAT25(uStack_9b,CONCAT14(cStack_9c,local_a0)));
    *(ulong *)(param_3 + 0x48) =
         CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT51(uStack_8f,cStack_90)));
  }
                    /* try { // try from 001e1ab0 to 001e1ab7 has its CatchHandler @ 001e1f38 */
  pcVar37 = (char *)operator_new(0x30);
  uVar11 = _UNK_001424d8;
  uVar10 = _DAT_001424d0;
  uVar9 = s_tabBarItemTitleSmallLabelFontSiz_0013fed0._24_8_;
  uVar8 = s_tabBarItemTitleSmallLabelFontSiz_0013fed0._16_8_;
  uVar7 = s_tabBarItemTitleSmallLabelFontSiz_0013fed0._8_8_;
  uVar4 = s_tabBarItemTitleSmallLabelFontSiz_0013fed0._0_8_;
  cStack_90 = (char)pcVar37;
  uStack_8f = (undefined5)((ulong)pcVar37 >> 8);
  uStack_8a = (undefined1)((ulong)pcVar37 >> 0x30);
  uStack_89 = (undefined1)((ulong)pcVar37 >> 0x38);
  pcVar37[0x20] = 'e';
  pcVar37[0x21] = '\0';
  *(undefined8 *)(pcVar37 + 8) = uVar7;
  *(undefined8 *)pcVar37 = uVar4;
  *(undefined8 *)(pcVar37 + 0x18) = uVar9;
  *(undefined8 *)(pcVar37 + 0x10) = uVar8;
  cStack_98 = (char)uVar11;
  cVar26 = cStack_98;
  cStack_97 = (char)((ulong)uVar11 >> 8);
  cVar29 = cStack_97;
  uStack_96 = (undefined4)((ulong)uVar11 >> 0x10);
  uVar41 = uStack_96;
  uStack_92 = (undefined2)((ulong)uVar11 >> 0x30);
  uVar34 = uStack_92;
  local_a0 = (uint)uVar10;
  uVar14 = local_a0;
  cStack_9c = (char)((ulong)uVar10 >> 0x20);
  cVar17 = cStack_9c;
  uStack_9b = (undefined2)((ulong)uVar10 >> 0x28);
  uVar20 = uStack_9b;
  cStack_99 = (char)((ulong)uVar10 >> 0x38);
  cVar23 = cStack_99;
  lVar36 = FUN_001d5c1c(local_c8,&local_a0);
  if ((local_a0 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT51(uStack_8f,cStack_90))));
  }
  if (lVar36 != 0) {
                    /* try { // try from 001e1b08 to 001e1b0f has its CatchHandler @ 001e1ec0 */
    uVar40 = FUN_001c97bc(lVar36 + 0x28);
    *(undefined4 *)(param_3 + 0x50) = uVar40;
  }
                    /* try { // try from 001e1b14 to 001e1b1b has its CatchHandler @ 001e1f34 */
  pcVar37 = (char *)operator_new(0x30);
  uVar9 = s_tabBarItemTitleLargeLabelFontSiz_00140644._24_8_;
  uVar8 = s_tabBarItemTitleLargeLabelFontSiz_00140644._16_8_;
  uVar7 = s_tabBarItemTitleLargeLabelFontSiz_00140644._8_8_;
  uVar4 = s_tabBarItemTitleLargeLabelFontSiz_00140644._0_8_;
  cStack_90 = (char)pcVar37;
  uStack_8f = (undefined5)((ulong)pcVar37 >> 8);
  uStack_8a = (undefined1)((ulong)pcVar37 >> 0x30);
  uStack_89 = (undefined1)((ulong)pcVar37 >> 0x38);
  pcVar37[0x20] = 'e';
  pcVar37[0x21] = '\0';
  *(undefined8 *)(pcVar37 + 8) = uVar7;
  *(undefined8 *)pcVar37 = uVar4;
  *(undefined8 *)(pcVar37 + 0x18) = uVar9;
  *(undefined8 *)(pcVar37 + 0x10) = uVar8;
  local_a0 = uVar14;
  cStack_9c = cVar17;
  uStack_9b = uVar20;
  cStack_99 = cVar23;
  cStack_98 = cVar26;
  cStack_97 = cVar29;
  uStack_96 = uVar41;
  uStack_92 = uVar34;
  lVar36 = FUN_001d5c1c(local_c8,&local_a0);
  if ((local_a0 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT51(uStack_8f,cStack_90))));
  }
  if (lVar36 != 0) {
                    /* try { // try from 001e1b64 to 001e1b6b has its CatchHandler @ 001e1ebc */
    uVar41 = FUN_001c97bc(lVar36 + 0x28);
    *(undefined4 *)(param_3 + 0x54) = uVar41;
  }
                    /* try { // try from 001e1b70 to 001e1b77 has its CatchHandler @ 001e1f30 */
  pcVar37 = (char *)operator_new(0x20);
  uVar8 = s_tabBarItemTitleFontWeight_0013f165._17_8_;
  uVar7 = s_tabBarItemTitleFontWeight_0013f165._0_8_;
  cStack_90 = (char)pcVar37;
  uStack_8f = (undefined5)((ulong)pcVar37 >> 8);
  uStack_8a = (undefined1)((ulong)pcVar37 >> 0x30);
  uStack_89 = (undefined1)((ulong)pcVar37 >> 0x38);
  uVar4 = CONCAT17(s_tabBarItemTitleFontWeight_0013f165[0x10],
                   s_tabBarItemTitleFontWeight_0013f165._9_7_);
  *(ulong *)(pcVar37 + 8) =
       CONCAT71(s_tabBarItemTitleFontWeight_0013f165._9_7_,s_tabBarItemTitleFontWeight_0013f165[8]);
  *(undefined8 *)pcVar37 = uVar7;
  *(undefined8 *)(pcVar37 + 0x11) = uVar8;
  *(undefined8 *)(pcVar37 + 9) = uVar4;
  pcVar37[0x19] = '\0';
  local_a0 = uVar13;
  cStack_9c = cVar16;
  uStack_9b = uVar19;
  cStack_99 = cVar22;
  cStack_98 = cVar25;
  cStack_97 = cVar28;
  uStack_96 = uVar31;
  uStack_92 = uVar33;
  lVar36 = FUN_001d5c1c(local_c8,&local_a0);
  if ((local_a0 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT51(uStack_8f,cStack_90))));
  }
  if (lVar36 != 0) {
                    /* try { // try from 001e1bc4 to 001e1bcf has its CatchHandler @ 001e1eb8 */
    FUN_001c862c(&local_a0,lVar36 + 0x28);
    if ((*(byte *)(param_3 + 0x58) & 1) != 0) {
      operator_delete(*(void **)(param_3 + 0x68));
    }
    *(ulong *)(param_3 + 0x60) =
         CONCAT26(uStack_92,CONCAT42(uStack_96,CONCAT11(cStack_97,cStack_98)));
    *(ulong *)(param_3 + 0x58) =
         CONCAT17(cStack_99,CONCAT25(uStack_9b,CONCAT14(cStack_9c,local_a0)));
    *(ulong *)(param_3 + 0x68) =
         CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT51(uStack_8f,cStack_90)));
  }
                    /* try { // try from 001e1bf0 to 001e1bf7 has its CatchHandler @ 001e1f2c */
  pcVar37 = (char *)operator_new(0x20);
  uVar10 = _UNK_001423e8;
  uVar9 = _DAT_001423e0;
  uVar8 = s_tabBarItemTitleFontStyle_0013ef36._16_8_;
  uVar7 = s_tabBarItemTitleFontStyle_0013ef36._8_8_;
  uVar4 = s_tabBarItemTitleFontStyle_0013ef36._0_8_;
  cStack_90 = (char)pcVar37;
  uStack_8f = (undefined5)((ulong)pcVar37 >> 8);
  uStack_8a = (undefined1)((ulong)pcVar37 >> 0x30);
  uStack_89 = (undefined1)((ulong)pcVar37 >> 0x38);
  pcVar37[0x18] = '\0';
  *(undefined8 *)(pcVar37 + 8) = uVar7;
  *(undefined8 *)pcVar37 = uVar4;
  *(undefined8 *)(pcVar37 + 0x10) = uVar8;
  cStack_98 = (char)uVar10;
  cVar25 = cStack_98;
  cStack_97 = (char)((ulong)uVar10 >> 8);
  cVar28 = cStack_97;
  uStack_96 = (undefined4)((ulong)uVar10 >> 0x10);
  uVar31 = uStack_96;
  uStack_92 = (undefined2)((ulong)uVar10 >> 0x30);
  uVar33 = uStack_92;
  local_a0 = (uint)uVar9;
  uVar13 = local_a0;
  cStack_9c = (char)((ulong)uVar9 >> 0x20);
  cVar16 = cStack_9c;
  uStack_9b = (undefined2)((ulong)uVar9 >> 0x28);
  uVar19 = uStack_9b;
  cStack_99 = (char)((ulong)uVar9 >> 0x38);
  cVar22 = cStack_99;
  lVar36 = FUN_001d5c1c(local_c8,&local_a0);
  if ((local_a0 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT51(uStack_8f,cStack_90))));
  }
  if (lVar36 != 0) {
                    /* try { // try from 001e1c48 to 001e1c53 has its CatchHandler @ 001e1eb4 */
    FUN_001c862c(&local_a0,lVar36 + 0x28);
    if ((*(byte *)(param_3 + 0x70) & 1) != 0) {
      operator_delete(*(void **)(param_3 + 0x80));
    }
    *(ulong *)(param_3 + 0x78) =
         CONCAT26(uStack_92,CONCAT42(uStack_96,CONCAT11(cStack_97,cStack_98)));
    *(ulong *)(param_3 + 0x70) =
         CONCAT17(cStack_99,CONCAT25(uStack_9b,CONCAT14(cStack_9c,local_a0)));
    *(ulong *)(param_3 + 0x80) =
         CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT51(uStack_8f,cStack_90)));
  }
                    /* try { // try from 001e1c74 to 001e1c7b has its CatchHandler @ 001e1f28 */
  pcVar37 = (char *)operator_new(0x20);
  uVar8 = s_tabBarItemBadgeBackgroundColor_0014028d._22_8_;
  uVar7 = s_tabBarItemBadgeBackgroundColor_0014028d._0_8_;
  cStack_90 = (char)pcVar37;
  uStack_8f = (undefined5)((ulong)pcVar37 >> 8);
  uStack_8a = (undefined1)((ulong)pcVar37 >> 0x30);
  uStack_89 = (undefined1)((ulong)pcVar37 >> 0x38);
  uVar4 = CONCAT62(s_tabBarItemBadgeBackgroundColor_0014028d._16_6_,
                   s_tabBarItemBadgeBackgroundColor_0014028d._14_2_);
  *(ulong *)(pcVar37 + 8) =
       CONCAT26(s_tabBarItemBadgeBackgroundColor_0014028d._14_2_,
                s_tabBarItemBadgeBackgroundColor_0014028d._8_6_);
  *(undefined8 *)pcVar37 = uVar7;
  *(undefined8 *)(pcVar37 + 0x16) = uVar8;
  *(undefined8 *)(pcVar37 + 0xe) = uVar4;
  pcVar37[0x1e] = '\0';
  local_a0 = uVar12;
  cStack_9c = cVar15;
  uStack_9b = uVar18;
  cStack_99 = cVar21;
  cStack_98 = cVar24;
  cStack_97 = cVar27;
  uStack_96 = uVar30;
  uStack_92 = uVar32;
  lVar36 = FUN_001d5c1c(local_c8,&local_a0);
  if ((local_a0 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT51(uStack_8f,cStack_90))));
  }
  if (lVar36 != 0) {
                    /* try { // try from 001e1cd0 to 001e1cdb has its CatchHandler @ 001e1eb0 */
    FUN_001caad4(*(undefined8 *)(param_1 + 2),*param_1,lVar36 + 0x28,param_3 + 0x88);
  }
                    /* try { // try from 001e1cdc to 001e1ce3 has its CatchHandler @ 001e1f24 */
  pcVar37 = (char *)operator_new(0x20);
  uVar8 = s_tabBarItemBadgeTextColor_0013e63e._16_8_;
  uVar7 = s_tabBarItemBadgeTextColor_0013e63e._8_8_;
  uVar4 = s_tabBarItemBadgeTextColor_0013e63e._0_8_;
  cStack_90 = (char)pcVar37;
  uStack_8f = (undefined5)((ulong)pcVar37 >> 8);
  uStack_8a = (undefined1)((ulong)pcVar37 >> 0x30);
  uStack_89 = (undefined1)((ulong)pcVar37 >> 0x38);
  pcVar37[0x18] = '\0';
  *(undefined8 *)(pcVar37 + 8) = uVar7;
  *(undefined8 *)pcVar37 = uVar4;
  *(undefined8 *)(pcVar37 + 0x10) = uVar8;
  local_a0 = uVar13;
  cStack_9c = cVar16;
  uStack_9b = uVar19;
  cStack_99 = cVar22;
  cStack_98 = cVar25;
  cStack_97 = cVar28;
  uStack_96 = uVar31;
  uStack_92 = uVar33;
  lVar36 = FUN_001d5c1c(local_c8,&local_a0);
  if ((local_a0 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT51(uStack_8f,cStack_90))));
  }
  pvVar39 = local_c8[0];
  puVar6 = (undefined8 *)local_b8;
  if (lVar36 != 0) {
                    /* try { // try from 001e1d38 to 001e1d43 has its CatchHandler @ 001e1eac */
    FUN_001caad4(*(undefined8 *)(param_1 + 2),*param_1,lVar36 + 0x28,param_3 + 0x8c);
    pvVar39 = local_c8[0];
    puVar6 = (undefined8 *)local_b8;
  }
  while (puVar6 != (undefined8 *)0x0) {
    pvVar38 = (void *)*puVar6;
    local_c8[0] = pvVar39;
    if (*(uint *)(puVar6 + 0xb) != 0xffffffff) {
                    /* try { // try from 001e1d78 to 001e1d83 has its CatchHandler @ 001e1f84 */
      (*(code *)(&PTR_FUN_001f05f8)[*(uint *)(puVar6 + 0xb)])(&local_a0,puVar6 + 5);
    }
    *(undefined4 *)(puVar6 + 0xb) = 0xffffffff;
    if ((*(byte *)(puVar6 + 2) & 1) != 0) {
      operator_delete((void *)puVar6[4]);
    }
    operator_delete(puVar6);
    pvVar39 = local_c8[0];
    puVar6 = (undefined8 *)pvVar38;
  }
  local_c8[0] = (void *)0x0;
  if (pvVar39 != (void *)0x0) {
    operator_delete(pvVar39);
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
LAB_001e1f70:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e1f88  FUN_001e1f88 =====

void FUN_001e1f88(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  byte local_50 [8];
  ulong local_48;
  long *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_001c862c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if ((long)uVar1 < 10) {
    if ((long)uVar1 < 8) {
      if (uVar1 == 3) {
        plVar2 = (long *)((ulong)local_50 | 1);
        if ((local_50[0] & 1) != 0) {
          plVar2 = local_40;
        }
        if ((short)*plVar2 == 0x6c61 && *(char *)((long)plVar2 + 2) == 'l') {
          *param_2 = 1;
          goto joined_r0x001e209c;
        }
      }
      else if (uVar1 == 7) {
        plVar2 = (long *)((ulong)local_50 | 1);
        if ((local_50[0] & 1) != 0) {
          plVar2 = local_40;
        }
        if ((int)*plVar2 == 0x65686e69 && *(int *)((long)plVar2 + 3) == 0x74697265) {
          *param_2 = 0;
          goto joined_r0x001e209c;
        }
      }
    }
    else if (uVar1 == 8) {
      plVar2 = (long *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        plVar2 = local_40;
      }
      if (*plVar2 == 0x7469617274726f70) {
        *param_2 = 3;
        goto joined_r0x001e209c;
      }
    }
    else if (uVar1 == 9) {
      plVar2 = (long *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        plVar2 = local_40;
      }
      iVar4 = memcmp(plVar2,"landscape",9);
      if (iVar4 == 0) {
        *param_2 = 6;
        goto joined_r0x001e209c;
      }
    }
  }
  else if ((long)uVar1 < 0xd) {
    if (uVar1 == 10) {
      plVar2 = (long *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        plVar2 = local_40;
      }
      if (*plVar2 == 0x7469617274726f70 && (short)plVar2[1] == 0x7055) {
        *param_2 = 4;
        goto joined_r0x001e209c;
      }
    }
    else if (uVar1 == 0xc) {
      plVar2 = (long *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        plVar2 = local_40;
      }
      if (*plVar2 == 0x7469617274726f70 && (int)plVar2[1] == 0x6e776f44) {
        *param_2 = 5;
        goto joined_r0x001e209c;
      }
    }
  }
  else if (uVar1 == 0xd) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    iVar4 = memcmp(plVar2,"landscapeLeft",0xd);
    if (iVar4 == 0) {
      *param_2 = 7;
joined_r0x001e209c:
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
      goto LAB_001e22e4;
    }
  }
  else if (uVar1 == 0xe) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    iVar4 = memcmp(plVar2,"landscapeRight",0xe);
    if (iVar4 == 0) {
      *param_2 = 8;
      goto joined_r0x001e209c;
    }
  }
  else if (uVar1 == 0x10) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if (*plVar2 == 0x70557475426c6c61 && plVar2[1] == 0x6e776f4465646973) {
      *param_2 = 2;
      goto joined_r0x001e209c;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001e22b4 to 001e22b7 has its CatchHandler @ 001e22b8 */
    abort();
  }
LAB_001e22e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e22e8  FUN_001e22e8 =====

void FUN_001e22e8(undefined8 *param_1,byte *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  byte local_b0;
  undefined7 local_af;
  char cStack_a8;
  undefined2 uStack_a7;
  undefined1 uStack_a5;
  undefined1 local_a4;
  void *local_a0;
  void *local_98 [2];
  void *local_88;
  byte local_70;
  undefined7 uStack_6f;
  char cStack_68;
  undefined7 uStack_67;
  char cStack_60;
  undefined4 uStack_5f;
  undefined1 uStack_5b;
  undefined2 uStack_5a;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 6) == 1) {
    FUN_001d3d44(local_98,*param_1,param_1 + 1);
  }
  else {
    if (*(int *)(param_1 + 6) != 0) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_001c858c();
      }
      goto LAB_001e268c;
    }
    FUN_001d37e0(local_98);
  }
  local_70 = 0x28;
  uStack_5f = 0x6e6f6974;
  uStack_67 = (undefined7)s_repeatedTabSelection_001403ec._8_8_;
  cStack_60 = SUB81(s_repeatedTabSelection_001403ec._8_8_,7);
  uStack_6f = (undefined7)s_repeatedTabSelection_001403ec._0_8_;
  cStack_68 = SUB81(s_repeatedTabSelection_001403ec._0_8_,7);
  uStack_5b = 0;
  lVar4 = FUN_001d5c1c(local_98,&local_70);
  if ((local_70 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_5a,CONCAT15(uStack_5b,CONCAT41(uStack_5f,cStack_60))));
  }
  pvVar5 = local_98[0];
  puVar2 = (undefined8 *)local_88;
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x58) == 1) {
      FUN_001d3d44(&local_70,*(undefined8 *)(lVar4 + 0x28),lVar4 + 0x30);
    }
    else {
      if (*(int *)(lVar4 + 0x58) != 0) {
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001e25e8 to 001e25eb has its CatchHandler @ 001e2668 */
          FUN_001c858c();
        }
        goto LAB_001e268c;
      }
                    /* try { // try from 001e23a4 to 001e23c3 has its CatchHandler @ 001e2668 */
      FUN_001d37e0(&local_70,lVar4 + 0x28);
    }
    local_b0 = 0x12;
    uStack_a7 = 0x74;
    local_af = (undefined7)s_popToRoot_001408a9._0_8_;
    cStack_a8 = SUB81(s_popToRoot_001408a9._0_8_,7);
    lVar4 = FUN_001d5c1c(&local_70,&local_b0);
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x58) == 1) {
                    /* try { // try from 001e2434 to 001e243b has its CatchHandler @ 001e2658 */
        bVar3 = facebook::jsi::Value::asBool();
      }
      else {
        if (*(int *)(lVar4 + 0x58) != 0) {
          if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001e25fc to 001e25ff has its CatchHandler @ 001e2658 */
            FUN_001c858c();
          }
          goto LAB_001e268c;
        }
        if (*(int *)(lVar4 + 0x28) != 2) {
          if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 001e2624 to 001e2633 has its CatchHandler @ 001e2658 */
                    /* WARNING: Subroutine does not return */
            FUN_00172ea4(*(undefined8 *)PTR_name_001f0f60);
          }
          goto LAB_001e268c;
        }
        bVar3 = *(char *)(lVar4 + 0x30) != '\0';
      }
      *param_2 = bVar3 & 1;
    }
    local_b0 = 0x16;
    uStack_a7 = 0x6f54;
    uStack_a5 = 0x70;
    local_af = (undefined7)s_scrollToTop_00140260._0_8_;
    cStack_a8 = SUB81(s_scrollToTop_00140260._0_8_,7);
    local_a4 = 0;
    lVar4 = FUN_001d5c1c(&local_70,&local_b0);
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x58) == 1) {
                    /* try { // try from 001e24bc to 001e24c3 has its CatchHandler @ 001e2654 */
        bVar3 = facebook::jsi::Value::asBool();
      }
      else {
        if (*(int *)(lVar4 + 0x58) != 0) {
          if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001e2610 to 001e2613 has its CatchHandler @ 001e2654 */
            FUN_001c858c();
          }
          goto LAB_001e268c;
        }
        if (*(int *)(lVar4 + 0x28) != 2) {
          if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 001e2644 to 001e2653 has its CatchHandler @ 001e2654 */
                    /* WARNING: Subroutine does not return */
            FUN_00172ea4(*(undefined8 *)PTR_name_001f0f60);
          }
          goto LAB_001e268c;
        }
        bVar3 = *(char *)(lVar4 + 0x30) != '\0';
      }
      param_2[1] = bVar3 & 1;
    }
    puVar2 = (undefined8 *)CONCAT26(uStack_5a,CONCAT15(uStack_5b,CONCAT41(uStack_5f,cStack_60)));
    while (puVar2 != (undefined8 *)0x0) {
      pvVar5 = (void *)*puVar2;
      if (*(uint *)(puVar2 + 0xb) != 0xffffffff) {
                    /* try { // try from 001e2500 to 001e250b has its CatchHandler @ 001e2690 */
        (*(code *)(&PTR_FUN_001f05f8)[*(uint *)(puVar2 + 0xb)])(&local_b0,puVar2 + 5);
      }
      *(undefined4 *)(puVar2 + 0xb) = 0xffffffff;
      if ((*(byte *)(puVar2 + 2) & 1) != 0) {
        operator_delete((void *)puVar2[4]);
      }
      operator_delete(puVar2);
      puVar2 = (undefined8 *)pvVar5;
    }
    pvVar6 = (void *)CONCAT71(uStack_6f,local_70);
    local_70 = 0;
    uStack_6f = 0;
    pvVar5 = local_98[0];
    puVar2 = (undefined8 *)local_88;
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
      pvVar5 = local_98[0];
      puVar2 = (undefined8 *)local_88;
    }
  }
  while (puVar2 != (undefined8 *)0x0) {
    pvVar6 = (void *)*puVar2;
    local_98[0] = pvVar5;
    if (*(uint *)(puVar2 + 0xb) != 0xffffffff) {
                    /* try { // try from 001e2568 to 001e2573 has its CatchHandler @ 001e2694 */
      (*(code *)(&PTR_FUN_001f05f8)[*(uint *)(puVar2 + 0xb)])(&local_70,puVar2 + 5);
    }
    *(undefined4 *)(puVar2 + 0xb) = 0xffffffff;
    if ((*(byte *)(puVar2 + 2) & 1) != 0) {
      operator_delete((void *)puVar2[4]);
    }
    operator_delete(puVar2);
    pvVar5 = local_98[0];
    puVar2 = (undefined8 *)pvVar6;
  }
  local_98[0] = (void *)0x0;
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_001e268c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e2698  FUN_001e2698 =====

void FUN_001e2698(undefined8 param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  byte local_60 [8];
  ulong local_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_001c862c(local_60);
  uVar4 = (ulong)(local_60[0] >> 1);
  if ((local_60[0] & 1) != 0) {
    uVar4 = local_58;
  }
  if ((long)uVar4 < 8) {
    if (uVar4 == 4) {
      plVar1 = (long *)((ulong)local_60 | 1);
      if ((local_60[0] & 1) != 0) {
        plVar1 = local_50;
      }
      if ((int)*plVar1 == 0x656e6f6e) {
        uVar5 = 0;
      }
      else {
        plVar1 = (long *)((ulong)local_60 | 1);
        if ((local_60[0] & 1) != 0) {
          plVar1 = local_50;
        }
        iVar3 = memcmp(plVar1,&DAT_00140145,4);
        if (iVar3 != 0) goto LAB_001e28d4;
        uVar5 = 7;
      }
    }
    else if (uVar4 == 7) {
      plVar1 = (long *)((ulong)local_60 | 1);
      if ((local_60[0] & 1) != 0) {
        plVar1 = local_50;
      }
      iVar3 = memcmp(plVar1,"history",7);
      if (iVar3 == 0) {
        uVar5 = 6;
      }
      else {
        iVar3 = memcmp(plVar1,"recents",7);
        if (iVar3 != 0) goto LAB_001e28d4;
        uVar5 = 10;
      }
    }
    else {
LAB_001e28d4:
      uVar4 = FUN_001caa60(local_60,"search");
      if ((uVar4 & 1) == 0) {
        uVar4 = FUN_001caa60(local_60,"topRated");
        if ((uVar4 & 1) == 0) {
          if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001e2988 to 001e298b has its CatchHandler @ 001e298c */
            abort();
          }
          goto LAB_001e29b8;
        }
        uVar5 = 0xc;
      }
      else {
        uVar5 = 0xb;
      }
    }
  }
  else if (uVar4 == 8) {
    plVar1 = (long *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      plVar1 = local_50;
    }
    if (*plVar1 == 0x73746361746e6f63) {
      uVar5 = 2;
    }
    else {
      if (*plVar1 != 0x6465727574616566) goto LAB_001e28d4;
      uVar5 = 5;
    }
  }
  else if (uVar4 == 9) {
    plVar1 = (long *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      plVar1 = local_50;
    }
    if (*plVar1 == 0x6b72616d6b6f6f62 && (char)plVar1[1] == 's') {
      uVar5 = 1;
    }
    else if (*plVar1 == 0x64616f6c6e776f64 && (char)plVar1[1] == 's') {
      uVar5 = 3;
    }
    else {
      if (*plVar1 != 0x657469726f766166 || (char)plVar1[1] != 's') goto LAB_001e28d4;
      uVar5 = 4;
    }
  }
  else {
    if (uVar4 != 10) goto LAB_001e28d4;
    plVar1 = (long *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      plVar1 = local_50;
    }
    iVar3 = memcmp(plVar1,"mostRecent",10);
    if (iVar3 == 0) {
      uVar5 = 8;
    }
    else {
      if (*plVar1 != 0x7765695674736f6d || (short)plVar1[1] != 0x6465) goto LAB_001e28d4;
      uVar5 = 9;
    }
  }
  *param_2 = uVar5;
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_001e29b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e29bc  FUN_001e29bc =====

void FUN_001e29bc(undefined8 param_1,undefined4 *param_2)

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
  FUN_001c862c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 8) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if (*plVar2 == 0x6574616c706d6574) {
      *param_2 = 1;
    }
    else {
      if (*plVar2 != 0x6c6f626d79536673) goto LAB_001e2b30;
      *param_2 = 2;
    }
joined_r0x001e2af4:
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
  }
  else {
    if (uVar1 == 7) {
      plVar2 = (long *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        plVar2 = local_40;
      }
      if ((int)*plVar2 == 0x73616378 && *(int *)((long)plVar2 + 3) == 0x74657373) {
        *param_2 = 3;
        goto joined_r0x001e2af4;
      }
    }
    else if (uVar1 == 5) {
      plVar2 = (long *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        plVar2 = local_40;
      }
      if ((int)*plVar2 == 0x67616d69 && *(char *)((long)plVar2 + 4) == 'e') {
        *param_2 = 0;
        goto joined_r0x001e2af4;
      }
    }
LAB_001e2b30:
    if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001e2b40 to 001e2b43 has its CatchHandler @ 001e2b44 */
      abort();
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e2b74  FUN_001e2b74 =====

void FUN_001e2b74(undefined8 param_1,undefined4 *param_2)

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
  FUN_001c862c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 4) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if ((int)*plVar2 == 0x6b726164) {
      *param_2 = 2;
joined_r0x001e2c64:
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
      goto LAB_001e2d04;
    }
  }
  else if (uVar1 == 5) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if ((int)*plVar2 == 0x6867696c && *(char *)((long)plVar2 + 4) == 't') {
      *param_2 = 1;
      goto joined_r0x001e2c64;
    }
  }
  else if (uVar1 == 0xb) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if (*plVar2 == 0x6669636570736e75 && *(long *)((long)plVar2 + 3) == 0x6465696669636570) {
      *param_2 = 0;
      goto joined_r0x001e2c64;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001e2cd4 to 001e2cd7 has its CatchHandler @ 001e2cd8 */
    abort();
  }
LAB_001e2d04:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e2d10  FUN_001e2d10 =====

void FUN_001e2d10(void)

{
  (*(code *)PTR_001f0f90)();
  return;
}


// ===== 001e2d30  <EXTERNAL>::__cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_001f0f98)();
  return;
}


// ===== 001e2d40  <EXTERNAL>::__cxa_atexit =====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_001f0fa0)();
  return;
}


// ===== 001e2d50  <EXTERNAL>::__register_atfork =====

void __register_atfork(void)

{
  (*(code *)PTR___register_atfork_001f0fa8)();
  return;
}


// ===== 001e2d60  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc =====

void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc(void)

{
  (*(code *)
    PTR__ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc_001f0fb0
  )();
  return;
}


// ===== 001e2d70  <EXTERNAL>::folly::dynamic::dynamic =====

void __thiscall folly::dynamic::dynamic(dynamic *this,dynamic *param_1)

{
  (*(code *)PTR_dynamic_001f0fb8)();
  return;
}


// ===== 001e2d80  <EXTERNAL>::folly::dynamic::operator= =====

void __thiscall folly::dynamic::operator=(dynamic *this,dynamic *param_1)

{
  (*(code *)PTR_operator__001f0fc0)();
  return;
}


// ===== 001e2d90  <EXTERNAL>::folly::TypeError::TypeError =====

void __thiscall folly::TypeError::TypeError(void)

{
  (*(code *)PTR_TypeError_001f0fc8)();
  return;
}


// ===== 001e2da0  <EXTERNAL>::std::runtime_error::~runtime_error =====

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  (*(code *)PTR__runtime_error_001f0fd0)();
  return;
}


// ===== 001e2db0  <EXTERNAL>::__cxa_allocate_exception =====

void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_001f0fd8)();
  return;
}


// ===== 001e2dc0  <EXTERNAL>::__cxa_throw =====

void __cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_001f0fe0)();
  return;
}


// ===== 001e2dd0  <EXTERNAL>::std::runtime_error::runtime_error =====

void __thiscall std::runtime_error::runtime_error(runtime_error *this,runtime_error *param_1)

{
  (*(code *)PTR_runtime_error_001f0fe8)();
  return;
}


// ===== 001e2de0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 001e2df0  <EXTERNAL>::__cxa_free_exception =====

void __cxa_free_exception(void)

{
  (*(code *)PTR___cxa_free_exception_001f0ff8)();
  return;
}


// ===== 001e2e00  <EXTERNAL>::std::logic_error::logic_error =====

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
  (*(code *)PTR_logic_error_001f1000)();
  return;
}


// ===== 001e2e10  <EXTERNAL>::std::bad_array_new_length::bad_array_new_length =====

void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
  (*(code *)PTR_bad_array_new_length_001f1008)();
  return;
}


// ===== 001e2e20  <EXTERNAL>::operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_001f1010)();
  return pvVar1;
}


// ===== 001e2e30  <EXTERNAL>::strlen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_001f1018)();
  return sVar1;
}


// ===== 001e2e40  <EXTERNAL>::folly::dynamic::hash =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::dynamic::hash(void)

{
  (*(code *)PTR_hash_001f1020)();
  return;
}


// ===== 001e2e50  <EXTERNAL>::folly::operator== =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::operator==(dynamic *param_1,dynamic *param_2)

{
  (*(code *)PTR_operator___001f1028)();
  return;
}


// ===== 001e2e60  <EXTERNAL>::std::__ndk1::__next_prime =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__next_prime(ulong param_1)

{
  (*(code *)PTR___next_prime_001f1030)();
  return;
}


// ===== 001e2e70  <EXTERNAL>::folly::dynamic::destroy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::dynamic::destroy(void)

{
  (*(code *)PTR_destroy_001f1038)();
  return;
}


// ===== 001e2e80  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::completeClone =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::completeClone
               (ShadowNode *param_1,ShadowNodeFragment *param_2)

{
  (*(code *)PTR_completeClone_001f1040)();
  return;
}


// ===== 001e2e90  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::appendChild =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::appendChild(shared_ptr *param_1)

{
  (*(code *)PTR_appendChild_001f1048)();
  return;
}


// ===== 001e2ea0  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::layout =====

void facebook::react::YogaLayoutableShadowNode::layout(void)

{
  (*(code *)PTR_layout_001f1050)();
  return;
}


// ===== 001e2eb0  <EXTERNAL>::std::__ndk1::__shared_weak_count::__release_weak =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__release_weak(void)

{
  (*(code *)PTR___release_weak_001f1058)();
  return;
}


// ===== 001e2ec0  <EXTERNAL>::facebook::jsi::NativeState::~NativeState =====

void __thiscall facebook::jsi::NativeState::~NativeState(NativeState *this)

{
  (*(code *)PTR__NativeState_001f1060)();
  return;
}


// ===== 001e2ed0  <EXTERNAL>::facebook::react::LayoutableShadowNode::getLayoutMetrics =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::getLayoutMetrics(void)

{
  (*(code *)PTR_getLayoutMetrics_001f1068)();
  return;
}


// ===== 001e2ee0  <EXTERNAL>::facebook::react::BaseViewProps::resolveTransform =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::BaseViewProps::resolveTransform(LayoutMetrics *param_1)

{
  (*(code *)PTR_resolveTransform_001f1070)();
  return;
}


// ===== 001e2ef0  <EXTERNAL>::facebook::react::ShadowNode::getState =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getState(void)

{
  (*(code *)PTR_getState_001f1078)();
  return;
}


// ===== 001e2f00  <EXTERNAL>::facebook::yoga::Node::setDirty =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::yoga::Node::setDirty(bool param_1)

{
  (*(code *)PTR_setDirty_001f1080)(param_1);
  return;
}


// ===== 001e2f10  <EXTERNAL>::folly::dynamic::operator[] =====

void folly::dynamic::operator[](void)

{
  (*(code *)PTR_operator___001f1088)();
  return;
}


// ===== 001e2f20  <EXTERNAL>::folly::dynamic::operator= =====

void __thiscall folly::dynamic::operator=(dynamic *this,dynamic *param_1)

{
  (*(code *)PTR_operator__001f1090)();
  return;
}


// ===== 001e2f30  facebook::react::findHeaderHeight =====

void facebook::react::findHeaderHeight(int param_1,bool param_2,bool param_3)

{
  (*(code *)PTR_findHeaderHeight_001f1098)(param_1,param_2,param_3);
  return;
}


// ===== 001e2f40  _JNIEnv::CallStaticObjectMethod =====

void _JNIEnv::CallStaticObjectMethod(_jclass *param_1,_jmethodID *param_2,...)

{
  (*(code *)PTR_CallStaticObjectMethod_001f10a0)();
  return;
}


// ===== 001e2f50  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init_copy_ctor_external =====

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
__init_copy_ctor_external
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  (*(code *)PTR___init_copy_ctor_external_001f10a8)();
  return;
}


// ===== 001e2f60  <EXTERNAL>::facebook::react::ShadowNode::getChildren =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getChildren(void)

{
  (*(code *)PTR_getChildren_001f10b0)();
  return;
}


// ===== 001e2f70  <EXTERNAL>::strcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_001f10b8)((int)__s1);
  return iVar1;
}


// ===== 001e2f80  <EXTERNAL>::facebook::react::ShadowNode::getComponentName =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getComponentName(void)

{
  (*(code *)PTR_getComponentName_001f10c0)();
  return;
}


// ===== 001e2f90  <EXTERNAL>::facebook::jni::Environment::current =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::Environment::current(void)

{
  (*(code *)PTR_current_001f10c8)();
  return;
}


// ===== 001e2fa0  <EXTERNAL>::google::LogMessage::LogMessage =====

void __thiscall
google::LogMessage::LogMessage(LogMessage *this,char *param_1,int param_2,int param_3)

{
  (*(code *)PTR_LogMessage_001f10d0)(this,param_1,param_2,param_3);
  return;
}


// ===== 001e2fb0  <EXTERNAL>::google::LogMessage::stream =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void google::LogMessage::stream(void)

{
  (*(code *)PTR_stream_001f10d8)();
  return;
}


// ===== 001e2fc0  <EXTERNAL>::google::LogMessage::~LogMessage =====

void __thiscall google::LogMessage::~LogMessage(LogMessage *this)

{
  (*(code *)PTR__LogMessage_001f10e0)();
  return;
}


// ===== 001e2fd0  <EXTERNAL>::facebook::react::ShadowNode::getProps =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getProps(void)

{
  (*(code *)PTR_getProps_001f10e8)();
  return;
}


// ===== 001e2fe0  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::setPadding =====

void facebook::react::YogaLayoutableShadowNode::setPadding(void)

{
  (*(code *)PTR_setPadding_001f10f0)();
  return;
}


// ===== 001e2ff0  <EXTERNAL>::__cxa_begin_catch =====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_001f10f8)();
  return;
}


// ===== 001e3000  <EXTERNAL>::std::terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
  (*(code *)PTR_terminate_001f1100)();
  return;
}


// ===== 001e3010  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry =====

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry
          (sentry *this,basic_ostream *param_1)

{
  (*(code *)PTR_sentry_001f1108)();
  return;
}


// ===== 001e3020  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry =====

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(sentry *this)

{
  (*(code *)PTR__sentry_001f1110)();
  return;
}


// ===== 001e3030  <EXTERNAL>::std::__ndk1::ios_base::__set_badbit_and_consider_rethrow =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::__set_badbit_and_consider_rethrow(void)

{
  (*(code *)PTR___set_badbit_and_consider_rethrow_001f1118)();
  return;
}


// ===== 001e3040  <EXTERNAL>::__cxa_end_catch =====

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_001f1120)();
  return;
}


// ===== 001e3050  <EXTERNAL>::std::__ndk1::ios_base::getloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::getloc(void)

{
  (*(code *)PTR_getloc_001f1128)();
  return;
}


// ===== 001e3060  <EXTERNAL>::std::__ndk1::locale::~locale =====

void __thiscall std::__ndk1::locale::~locale(locale *this)

{
  (*(code *)PTR__locale_001f1130)();
  return;
}


// ===== 001e3070  <EXTERNAL>::std::__ndk1::locale::use_facet =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::locale::use_facet(id *param_1)

{
  (*(code *)PTR_use_facet_001f1138)();
  return;
}


// ===== 001e3080  <EXTERNAL>::std::__ndk1::ios_base::clear =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::clear(uint param_1)

{
  (*(code *)PTR_clear_001f1140)(param_1);
  return;
}


// ===== 001e3090  facebook::react::RNSScreenShadowNodeCommitHook::getUIManagerFromSharedContext =====

void __thiscall
facebook::react::RNSScreenShadowNodeCommitHook::getUIManagerFromSharedContext
          (RNSScreenShadowNodeCommitHook *this,shared_ptr *param_1)

{
  (*(code *)PTR_getUIManagerFromSharedContext_001f1148)();
  return;
}


// ===== 001e30a0  facebook::react::RNSScreenShadowNodeCommitHook::newRootShadowNodeWithScreenFrameSizesReset =====

void __thiscall
facebook::react::RNSScreenShadowNodeCommitHook::newRootShadowNodeWithScreenFrameSizesReset(void)

{
  (*(code *)PTR_newRootShadowNodeWithScreenFrameSizesReset_001f1150)();
  return;
}


// ===== 001e30b0  facebook::react::RNSScreenShadowNodeCommitHook::findScreenNodes =====

void facebook::react::RNSScreenShadowNodeCommitHook::findScreenNodes
               (shared_ptr *param_1,vector *param_2)

{
  (*(code *)PTR_findScreenNodes_001f1158)();
  return;
}


// ===== 001e30c0  facebook::react::RNSScreenShadowNodeCommitHook::~RNSScreenShadowNodeCommitHook =====

void __thiscall
facebook::react::RNSScreenShadowNodeCommitHook::~RNSScreenShadowNodeCommitHook
          (RNSScreenShadowNodeCommitHook *this)

{
  (*(code *)PTR__RNSScreenShadowNodeCommitHook_001f1160)();
  return;
}


// ===== 001e30d0  <EXTERNAL>::facebook::react::UIManager::registerCommitHook =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::UIManager::registerCommitHook(UIManagerCommitHook *param_1)

{
  (*(code *)PTR_registerCommitHook_001f1168)();
  return;
}


// ===== 001e30e0  <EXTERNAL>::facebook::react::ShadowNode::cloneTree =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::cloneTree(ShadowNodeFamily *param_1,function *param_2)

{
  (*(code *)PTR_cloneTree_001f1170)();
  return;
}


// ===== 001e30f0  <EXTERNAL>::facebook::react::ShadowNode::getFamily =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getFamily(void)

{
  (*(code *)PTR_getFamily_001f1178)();
  return;
}


// ===== 001e3100  <EXTERNAL>::facebook::react::ShadowNode::getComponentHandle =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getComponentHandle(void)

{
  (*(code *)PTR_getComponentHandle_001f1180)();
  return;
}


// ===== 001e3110  <EXTERNAL>::facebook::react::JFabricUIManager::getBinding =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::JFabricUIManager::getBinding(void)

{
  (*(code *)PTR_getBinding_001f1188)();
  return;
}


// ===== 001e3120  <EXTERNAL>::facebook::react::FabricUIManagerBinding::getScheduler =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::FabricUIManagerBinding::getScheduler(void)

{
  (*(code *)PTR_getScheduler_001f1190)();
  return;
}


// ===== 001e3130  <EXTERNAL>::facebook::react::Scheduler::getUIManager =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::Scheduler::getUIManager(void)

{
  (*(code *)PTR_getUIManager_001f1198)();
  return;
}


// ===== 001e3140  <EXTERNAL>::facebook::react::ShadowNode::clone =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::clone(ShadowNodeFragment *param_1)

{
  (*(code *)PTR_clone_001f11a0)();
  return;
}


// ===== 001e3150  <EXTERNAL>::facebook::react::ShadowNodeFragment::propsPlaceholder =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNodeFragment::propsPlaceholder(void)

{
  (*(code *)PTR_propsPlaceholder_001f11a8)();
  return;
}


// ===== 001e3160  <EXTERNAL>::facebook::react::ShadowNodeFragment::childrenPlaceholder =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNodeFragment::childrenPlaceholder(void)

{
  (*(code *)PTR_childrenPlaceholder_001f11b0)();
  return;
}


// ===== 001e3170  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::setSize =====

void facebook::react::YogaLayoutableShadowNode::setSize(void)

{
  (*(code *)PTR_setSize_001f11b8)();
  return;
}


// ===== 001e3180  <EXTERNAL>::std::__ndk1::__shared_mutex_base::lock_shared =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_mutex_base::lock_shared(void)

{
  (*(code *)PTR_lock_shared_001f11c0)();
  return;
}


// ===== 001e3190  <EXTERNAL>::memcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_001f11c8)((int)__s1);
  return iVar1;
}


// ===== 001e31a0  <EXTERNAL>::std::__ndk1::__shared_mutex_base::unlock_shared =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_mutex_base::unlock_shared(void)

{
  (*(code *)PTR_unlock_shared_001f11d0)();
  return;
}


// ===== 001e31b0  <EXTERNAL>::facebook::react::ComponentDescriptorProviderRegistry::add =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ComponentDescriptorProviderRegistry::add(ComponentDescriptorProvider *param_1)

{
  (*(code *)PTR_add_001f11d8)();
  return;
}


// ===== 001e31c0  <EXTERNAL>::facebook::react::ComponentDescriptor::ComponentDescriptor =====

void __thiscall
facebook::react::ComponentDescriptor::ComponentDescriptor
          (ComponentDescriptor *this,ComponentDescriptorParameters *param_1,RawPropsParser *param_2)

{
  (*(code *)PTR_ComponentDescriptor_001f11e0)();
  return;
}


// ===== 001e31d0  <EXTERNAL>::facebook::react::RawProps::parse =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::parse(RawPropsParser *param_1)

{
  (*(code *)PTR_parse_001f11e8)();
  return;
}


// ===== 001e31e0  <EXTERNAL>::facebook::react::RawPropsParser::postPrepare =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawPropsParser::postPrepare(void)

{
  (*(code *)PTR_postPrepare_001f11f0)();
  return;
}


// ===== 001e31f0  <EXTERNAL>::facebook::jsi::Value::~Value =====

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
  (*(code *)PTR__Value_001f11f8)();
  return;
}


// ===== 001e3200  <EXTERNAL>::std::__ndk1::__shared_mutex_base::__shared_mutex_base =====

void __thiscall std::__ndk1::__shared_mutex_base::__shared_mutex_base(__shared_mutex_base *this)

{
  (*(code *)PTR___shared_mutex_base_001f1200)();
  return;
}


// ===== 001e3210  <EXTERNAL>::std::__ndk1::condition_variable::~condition_variable =====

void __thiscall std::__ndk1::condition_variable::~condition_variable(condition_variable *this)

{
  (*(code *)PTR__condition_variable_001f1208)();
  return;
}


// ===== 001e3220  <EXTERNAL>::std::__ndk1::mutex::~mutex =====

void __thiscall std::__ndk1::mutex::~mutex(mutex *this)

{
  (*(code *)PTR__mutex_001f1210)();
  return;
}


// ===== 001e3230  <EXTERNAL>::std::__ndk1::__shared_weak_count::~__shared_weak_count =====

void __thiscall std::__ndk1::__shared_weak_count::~__shared_weak_count(__shared_weak_count *this)

{
  (*(code *)PTR____shared_weak_count_001f1218)();
  return;
}


// ===== 001e3240  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode =====

void __thiscall facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(void)

{
  (*(code *)PTR_YogaLayoutableShadowNode_001f1220)();
  return;
}


// ===== 001e3250  <EXTERNAL>::facebook::react::ShadowNode::transferRuntimeShadowNodeReference =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::transferRuntimeShadowNodeReference
               (shared_ptr *param_1,ShadowNodeFragment *param_2)

{
  (*(code *)PTR_transferRuntimeShadowNodeReference_001f1228)();
  return;
}


// ===== 001e3260  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode =====

void __thiscall
facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
          (YogaLayoutableShadowNode *this,ShadowNode *param_1,ShadowNodeFragment *param_2)

{
  (*(code *)PTR_YogaLayoutableShadowNode_001f1230)();
  return;
}


// ===== 001e3270  <EXTERNAL>::facebook::react::RawProps::isEmpty =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::isEmpty(void)

{
  (*(code *)PTR_isEmpty_001f1238)();
  return;
}


// ===== 001e3280  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid(void)

{
  (*(code *)PTR_enableExclusivePropsUpdateAndroid_001f1240)();
  return;
}


// ===== 001e3290  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid(void)

{
  (*(code *)PTR_enableAccumulatedUpdatesInRawPropsAndroid_001f1248)();
  return;
}


// ===== 001e32a0  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(void)

{
  (*(code *)PTR_enablePropsUpdateReconciliationAndroid_001f1250)();
  return;
}


// ===== 001e32b0  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter(void)

{
  (*(code *)PTR_enableCppPropsIteratorSetter_001f1258)();
  return;
}


// ===== 001e32c0  <EXTERNAL>::folly::dynamic::dynamic =====

void __thiscall folly::dynamic::dynamic(dynamic *this,dynamic *param_1)

{
  (*(code *)PTR_dynamic_001f1260)();
  return;
}


// ===== 001e32d0  <EXTERNAL>::facebook::react::RawProps::operator.cast.to.dynamic =====

void __thiscall facebook::react::RawProps::operator_cast_to_dynamic(RawProps *this)

{
  (*(code *)PTR_operator_cast_to_dynamic_001f1268)();
  return;
}


// ===== 001e32e0  <EXTERNAL>::facebook::react::HostPlatformViewProps::setProp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::HostPlatformViewProps::setProp
               (PropsParserContext *param_1,uint param_2,char *param_3,RawValue *param_4)

{
  (*(code *)PTR_setProp_001f1270)(param_1,param_2);
  return;
}


// ===== 001e32f0  <EXTERNAL>::__cxa_guard_acquire =====

void __cxa_guard_acquire(void)

{
  (*(code *)PTR___cxa_guard_acquire_001f1278)();
  return;
}


// ===== 001e3300  <EXTERNAL>::__cxa_guard_abort =====

void __cxa_guard_abort(void)

{
  (*(code *)PTR___cxa_guard_abort_001f1280)();
  return;
}


// ===== 001e3310  <EXTERNAL>::__cxa_guard_release =====

void __cxa_guard_release(void)

{
  (*(code *)PTR___cxa_guard_release_001f1288)();
  return;
}


// ===== 001e3320  <EXTERNAL>::facebook::react::Props::initializeDynamicProps =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::Props::initializeDynamicProps
               (Props *param_1,RawProps *param_2,function *param_3)

{
  (*(code *)PTR_initializeDynamicProps_001f1290)();
  return;
}


// ===== 001e3330  <EXTERNAL>::facebook::react::EventEmitter::setShadowNodeFamily =====

void facebook::react::EventEmitter::setShadowNodeFamily(void)

{
  (*(code *)PTR_setShadowNodeFamily_001f1298)();
  return;
}


// ===== 001e3340  <EXTERNAL>::facebook::react::EventEmitter::EventEmitter =====

void __thiscall facebook::react::EventEmitter::EventEmitter(void)

{
  (*(code *)PTR_EventEmitter_001f12a0)();
  return;
}


// ===== 001e3350  <EXTERNAL>::facebook::react::EventTarget::EventTarget =====

void __thiscall facebook::react::EventTarget::EventTarget(void)

{
  (*(code *)PTR_EventTarget_001f12a8)();
  return;
}


// ===== 001e3360  <EXTERNAL>::facebook::react::ShadowNodeFamily::ShadowNodeFamily =====

void __thiscall facebook::react::ShadowNodeFamily::ShadowNodeFamily(void)

{
  (*(code *)PTR_ShadowNodeFamily_001f12b0)();
  return;
}


// ===== 001e3370  <EXTERNAL>::facebook::react::ShadowNodeFamily::~ShadowNodeFamily =====

void __thiscall facebook::react::ShadowNodeFamily::~ShadowNodeFamily(ShadowNodeFamily *this)

{
  (*(code *)PTR__ShadowNodeFamily_001f12b8)();
  return;
}


// ===== 001e3380  facebook::react::RNSScreenStackProps::RNSScreenStackProps =====

void __thiscall
facebook::react::RNSScreenStackProps::RNSScreenStackProps
          (RNSScreenStackProps *this,PropsParserContext *param_1,RNSScreenStackProps *param_2,
          RawProps *param_3)

{
  (*(code *)PTR_RNSScreenStackProps_001f12c0)();
  return;
}


// ===== 001e3390  facebook::react::RNSSearchBarProps::RNSSearchBarProps =====

void __thiscall
facebook::react::RNSSearchBarProps::RNSSearchBarProps
          (RNSSearchBarProps *this,PropsParserContext *param_1,RNSSearchBarProps *param_2,
          RawProps *param_3)

{
  (*(code *)PTR_RNSSearchBarProps_001f12c8)();
  return;
}


// ===== 001e33a0  facebook::react::RNSScrollViewMarkerProps::RNSScrollViewMarkerProps =====

void __thiscall
facebook::react::RNSScrollViewMarkerProps::RNSScrollViewMarkerProps
          (RNSScrollViewMarkerProps *this,PropsParserContext *param_1,
          RNSScrollViewMarkerProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_RNSScrollViewMarkerProps_001f12d0)();
  return;
}


// ===== 001e33b0  facebook::react::RNSSplitHostProps::RNSSplitHostProps =====

void __thiscall
facebook::react::RNSSplitHostProps::RNSSplitHostProps
          (RNSSplitHostProps *this,PropsParserContext *param_1,RNSSplitHostProps *param_2,
          RawProps *param_3)

{
  (*(code *)PTR_RNSSplitHostProps_001f12d8)();
  return;
}


// ===== 001e33c0  facebook::react::RNSStackHeaderItemSpacerIOSProps::RNSStackHeaderItemSpacerIOSProps =====

void __thiscall
facebook::react::RNSStackHeaderItemSpacerIOSProps::RNSStackHeaderItemSpacerIOSProps
          (RNSStackHeaderItemSpacerIOSProps *this,PropsParserContext *param_1,
          RNSStackHeaderItemSpacerIOSProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_RNSStackHeaderItemSpacerIOSProps_001f12e0)();
  return;
}


// ===== 001e33d0  facebook::react::RNSTabsBottomAccessoryContentProps::RNSTabsBottomAccessoryContentProps =====

void __thiscall
facebook::react::RNSTabsBottomAccessoryContentProps::RNSTabsBottomAccessoryContentProps
          (RNSTabsBottomAccessoryContentProps *this,PropsParserContext *param_1,
          RNSTabsBottomAccessoryContentProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_RNSTabsBottomAccessoryContentProps_001f12e8)();
  return;
}


// ===== 001e33e0  facebook::react::RNSTabsScreenAndroidProps::RNSTabsScreenAndroidProps =====

void __thiscall
facebook::react::RNSTabsScreenAndroidProps::RNSTabsScreenAndroidProps
          (RNSTabsScreenAndroidProps *this,PropsParserContext *param_1,
          RNSTabsScreenAndroidProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_RNSTabsScreenAndroidProps_001f12f0)();
  return;
}


// ===== 001e33f0  facebook::react::RNSTabsScreenIOSProps::RNSTabsScreenIOSProps =====

void __thiscall
facebook::react::RNSTabsScreenIOSProps::RNSTabsScreenIOSProps
          (RNSTabsScreenIOSProps *this,PropsParserContext *param_1,RNSTabsScreenIOSProps *param_2,
          RawProps *param_3)

{
  (*(code *)PTR_RNSTabsScreenIOSProps_001f12f8)();
  return;
}


// ===== 001e3400  <EXTERNAL>::facebook::react::EventEmitter::dispatchEvent =====

void facebook::react::EventEmitter::dispatchEvent(void)

{
  (*(code *)PTR_dispatchEvent_001f1300)();
  return;
}


// ===== 001e3410  <EXTERNAL>::__strlen_chk =====

void __strlen_chk(void)

{
  (*(code *)PTR___strlen_chk_001f1308)();
  return;
}


// ===== 001e3420  <EXTERNAL>::facebook::jsi::Value::~Value =====

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
  (*(code *)PTR__Value_001f1310)();
  return;
}


// ===== 001e3430  facebook::react::parsePlatformColor =====

void facebook::react::parsePlatformColor(ContextContainer *param_1,int param_2,RawValue *param_3)

{
  (*(code *)PTR_parsePlatformColor_001f1318)(param_1,param_2);
  return;
}


// ===== 001e3440  facebook::jni::JObject::getClass =====

void facebook::jni::JObject::getClass(void)

{
  (*(code *)PTR_getClass_001f1320)();
  return;
}


// ===== 001e3450  facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *this)

{
  (*(code *)PTR__base_owned_ref_001f1328)();
  return;
}


// ===== 001e3460  facebook::jni::base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator> *this)

{
  (*(code *)PTR__base_owned_ref_001f1330)();
  return;
}


// ===== 001e3470  _JNIEnv::CallIntMethod =====

void _JNIEnv::CallIntMethod(_jobject *param_1,_jmethodID *param_2,...)

{
  (*(code *)PTR_CallIntMethod_001f1338)();
  return;
}


// ===== 001e3480  <EXTERNAL>::facebook::react::HostPlatformViewProps::HostPlatformViewProps =====

void __thiscall
facebook::react::HostPlatformViewProps::HostPlatformViewProps
          (HostPlatformViewProps *this,PropsParserContext *param_1,HostPlatformViewProps *param_2,
          RawProps *param_3,function *param_4)

{
  (*(code *)PTR_HostPlatformViewProps_001f1340)();
  return;
}


// ===== 001e3490  <EXTERNAL>::facebook::react::HostPlatformViewProps::getDiffProps =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::HostPlatformViewProps::getDiffProps(Props *param_1)

{
  (*(code *)PTR_getDiffProps_001f1348)();
  return;
}


// ===== 001e34a0  <EXTERNAL>::abort =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_001f1350)();
  return;
}


// ===== 001e34b0  <EXTERNAL>::facebook::react::RawProps::at =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::at(char *param_1,char *param_2,char *param_3)

{
  (*(code *)PTR_at_001f1358)();
  return;
}


// ===== 001e34c0  <EXTERNAL>::facebook::react::RawPropsKey::operator.cast.to.basic_string =====

void __thiscall facebook::react::RawPropsKey::operator_cast_to_basic_string(RawPropsKey *this)

{
  (*(code *)PTR_operator_cast_to_basic_string_001f1360)();
  return;
}


// ===== 001e34d0  <EXTERNAL>::facebook::jsi::Value::asBool =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asBool(void)

{
  (*(code *)PTR_asBool_001f1368)();
  return;
}


// ===== 001e34e0  <EXTERNAL>::facebook::jsi::Value::asString =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asString(IRuntime *param_1)

{
  (*(code *)PTR_asString_001f1370)();
  return;
}


// ===== 001e34f0  <EXTERNAL>::folly::dynamic::size =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::dynamic::size(void)

{
  (*(code *)PTR_size_001f1378)();
  return;
}


// ===== 001e3500  <EXTERNAL>::facebook::jsi::Value::Value =====

void __thiscall facebook::jsi::Value::Value(Value *this,Value *param_1)

{
  (*(code *)PTR_Value_001f1380)();
  return;
}


// ===== 001e3510  <EXTERNAL>::facebook::jsi::Value::Value =====

void __thiscall facebook::jsi::Value::Value(Value *this,IRuntime *param_1,Value *param_2)

{
  (*(code *)PTR_Value_001f1388)();
  return;
}


// ===== 001e3520  <EXTERNAL>::nextafter =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double nextafter(double __x,double __y)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_nextafter_001f1390)();
  return dVar1;
}


// ===== 001e3530  <EXTERNAL>::std::range_error::~range_error =====

void __thiscall std::range_error::~range_error(range_error *this)

{
  (*(code *)PTR__range_error_001f1398)();
  return;
}


// ===== 001e3540  <EXTERNAL>::folly::makeConversionError =====

void folly::makeConversionError(void)

{
  (*(code *)PTR_makeConversionError_001f13a0)();
  return;
}


// ===== 001e3550  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::reserve =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     reserve(ulong param_1)

{
  (*(code *)PTR_reserve_001f13a8)();
  return;
}


// ===== 001e3560  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     append(char *param_1,ulong param_2)

{
  (*(code *)PTR_append_001f13b0)();
  return;
}


// ===== 001e3570  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     push_back(char param_1)

{
  (*(code *)PTR_push_back_001f13b8)(param_1);
  return;
}


// ===== 001e3580  <EXTERNAL>::folly::detail::str_to_floating<double> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::detail::str_to_floating<double>(Range *param_1)

{
  (*(code *)PTR_str_to_floating<double>_001f13c0)();
  return;
}


// ===== 001e3590  <EXTERNAL>::facebook::jsi::Value::asNumber =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asNumber(void)

{
  (*(code *)PTR_asNumber_001f13c8)();
  return;
}


// ===== 001e35a0  <EXTERNAL>::double_conversion::DoubleToStringConverter::ToShortestIeeeNumber =====

void double_conversion::DoubleToStringConverter::ToShortestIeeeNumber(void)

{
  (*(code *)PTR_ToShortestIeeeNumber_001f13d0)();
  return;
}


// ===== 001e35b0  <EXTERNAL>::folly::detail::str_to_integral<long> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::detail::str_to_integral<long>(Range *param_1)

{
  (*(code *)PTR_str_to_integral<long>_001f13d8)();
  return;
}


// ===== 001e35c0  <EXTERNAL>::facebook::react::getDefaultColorSpace =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::getDefaultColorSpace(void)

{
  (*(code *)PTR_getDefaultColorSpace_001f13e0)();
  return;
}


// ===== 001e35d0  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableNativeCSSParsing =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableNativeCSSParsing(void)

{
  (*(code *)PTR_enableNativeCSSParsing_001f13e8)();
  return;
}


// ===== 001e35e0  <EXTERNAL>::facebook::react::colorFromComponents =====

void facebook::react::colorFromComponents(void)

{
  (*(code *)PTR_colorFromComponents_001f13f0)();
  return;
}


// ===== 001e35f0  <EXTERNAL>::remainderf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float remainderf(float __x,float __y)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_remainderf_001f13f8)();
  return fVar1;
}


// ===== 001e3600  <EXTERNAL>::std::__ndk1::__call_once =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__call_once(ulong *param_1,void *param_2,_func_void_void_ptr *param_3)

{
  (*(code *)PTR___call_once_001f1400)();
  return;
}


// ===== 001e3610  <EXTERNAL>::std::exception::~exception =====

void __thiscall std::exception::~exception(exception *this)

{
  (*(code *)PTR__exception_001f1408)();
  return;
}


// ===== 001e3620  <EXTERNAL>::std::__ndk1::mutex::lock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::lock(void)

{
  (*(code *)PTR_lock_001f1410)();
  return;
}


// ===== 001e3630  <EXTERNAL>::facebook::jni::throwPendingJniExceptionAsCppException =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwPendingJniExceptionAsCppException(void)

{
  (*(code *)PTR_throwPendingJniExceptionAsCppException_001f1418)();
  return;
}


// ===== 001e3640  <EXTERNAL>::facebook::jni::throwCppExceptionIf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwCppExceptionIf(bool param_1)

{
  (*(code *)PTR_throwCppExceptionIf_001f1420)(param_1);
  return;
}


// ===== 001e3650  <EXTERNAL>::facebook::jni::findClassStatic =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::findClassStatic(char *param_1)

{
  (*(code *)PTR_findClassStatic_001f1428)();
  return;
}


// ===== 001e3660  <EXTERNAL>::facebook::jni::make_jstring =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::make_jstring(char *param_1)

{
  (*(code *)PTR_make_jstring_001f1430)();
  return;
}


// ===== 001e3670  <EXTERNAL>::std::__ndk1::mutex::unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::unlock(void)

{
  (*(code *)PTR_unlock_001f1438)();
  return;
}


// ===== 001e3680  <EXTERNAL>::facebook::jsi::dynamicFromValue =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::dynamicFromValue(Runtime *param_1,Value *param_2,function *param_3)

{
  (*(code *)PTR_dynamicFromValue_001f1440)();
  return;
}


// ===== 001e3690  <EXTERNAL>::dl_iterate_phdr =====

void dl_iterate_phdr(void)

{
  (*(code *)PTR_dl_iterate_phdr_001f1448)();
  return;
}


// ===== 001e36a0  <EXTERNAL>::fwrite =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_001f1450)();
  return sVar1;
}


// ===== 001e36b0  <EXTERNAL>::memmove =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_001f1458)();
  return pvVar1;
}


// ===== 001e36c0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_001f1460)();
  return;
}


// ===== 001e36d0  <EXTERNAL>::malloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_001f1468)();
  return pvVar1;
}


// ===== 001e36e0  <EXTERNAL>::strncmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_001f1470)((int)__s1);
  return iVar1;
}


// ===== 001e36f0  <EXTERNAL>::fprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_001f1478)((int)__stream);
  return iVar1;
}


// ===== 001e3700  <EXTERNAL>::__stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_001f1480)();
  return;
}


// ===== 001e3710  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_wrlock_001f1488)((int)__rwlock);
  return iVar1;
}


// ===== 001e3720  <EXTERNAL>::syscall =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_syscall_001f1490)();
  return lVar1;
}


// ===== 001e3730  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_unlock_001f1498)((int)__rwlock);
  return iVar1;
}


// ===== 001e3740  <EXTERNAL>::memcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_001f14a0)();
  return pvVar1;
}


// ===== 001e3750  <EXTERNAL>::getauxval =====

void getauxval(void)

{
  (*(code *)PTR_getauxval_001f14a8)();
  return;
}


// ===== 001e3760  <EXTERNAL>::__system_property_get =====

void __system_property_get(void)

{
  (*(code *)PTR___system_property_get_001f14b0)();
  return;
}


// ===== 001e3770  <EXTERNAL>::getpid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_001f14b8)();
  return _Var1;
}


// ===== 001e3780  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_rdlock_001f14c0)((int)__rwlock);
  return iVar1;
}


// ===== 001e3790  <EXTERNAL>::memset =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_001f14c8)(__s,__c);
  return pvVar1;
}


// ===== 001e37a0  <EXTERNAL>::fflush =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_001f14d0)((int)__stream);
  return iVar1;
}


// ===== 00205000  <EXTERNAL>::__cxa_finalize =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205008  <EXTERNAL>::__cxa_atexit =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205010  <EXTERNAL>::__register_atfork =====

/* WARNING: Control flow encountered bad instruction data */

void __register_atfork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205018  <EXTERNAL>::__gxx_personality_v0 =====

/* WARNING: Control flow encountered bad instruction data */

void __gxx_personality_v0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205020  <EXTERNAL>::folly::dynamic::dynamic =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall folly::dynamic::dynamic(dynamic *this,dynamic *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205028  <EXTERNAL>::folly::dynamic::operator= =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall folly::dynamic::operator=(dynamic *this,dynamic *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205030  <EXTERNAL>::folly::TypeError::TypeError =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall folly::TypeError::TypeError(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205038  <EXTERNAL>::std::runtime_error::~runtime_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205040  <EXTERNAL>::__cxa_allocate_exception =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_allocate_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205048  <EXTERNAL>::__cxa_throw =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_throw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205050  <EXTERNAL>::std::runtime_error::runtime_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::runtime_error(runtime_error *this,runtime_error *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205058  <EXTERNAL>::std::runtime_error::what =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::runtime_error::what(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205060  <EXTERNAL>::operator.delete =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205068  <EXTERNAL>::__cxa_free_exception =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_free_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205070  <EXTERNAL>::std::length_error::~length_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::length_error::~length_error(length_error *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205078  <EXTERNAL>::std::logic_error::logic_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205080  <EXTERNAL>::std::bad_array_new_length::bad_array_new_length =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205088  <EXTERNAL>::std::bad_array_new_length::~bad_array_new_length =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205090  <EXTERNAL>::operator.new =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205098  <EXTERNAL>::strlen =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002050a0  <EXTERNAL>::folly::dynamic::hash =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::dynamic::hash(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002050a8  <EXTERNAL>::folly::operator== =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::operator==(dynamic *param_1,dynamic *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002050b0  <EXTERNAL>::std::__ndk1::__next_prime =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__next_prime(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002050b8  <EXTERNAL>::folly::dynamic::destroy =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::dynamic::destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002050f0  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::completeClone =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::completeClone
               (ShadowNode *param_1,ShadowNodeFragment *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002050f8  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::appendChild =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::appendChild(shared_ptr *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205100  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::replaceChild =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::replaceChild
               (ShadowNode *param_1,shared_ptr *param_2,ulong param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205108  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::layoutTree =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::YogaLayoutableShadowNode::layoutTree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205110  <EXTERNAL>::facebook::react::LayoutableShadowNode::measureContent =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::measureContent
               (LayoutContext *param_1,LayoutConstraints *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205118  <EXTERNAL>::facebook::react::LayoutableShadowNode::measure =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::measure
               (LayoutContext *param_1,LayoutConstraints *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205120  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::layout =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::YogaLayoutableShadowNode::layout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205128  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::dirtyLayout =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::dirtyLayout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205130  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::getIsLayoutClean =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::getIsLayoutClean(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205138  <EXTERNAL>::facebook::react::LayoutableShadowNode::baseline =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::LayoutableShadowNode::baseline(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205140  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::shouldNewRevisionDirtyMeasurement =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::shouldNewRevisionDirtyMeasurement
               (ShadowNode *param_1,ShadowNodeFragment *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205148  <EXTERNAL>::std::__ndk1::__shared_weak_count::__release_weak =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__release_weak(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205150  <EXTERNAL>::facebook::jsi::NativeState::~NativeState =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::NativeState::~NativeState(NativeState *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205158  <EXTERNAL>::facebook::react::LayoutableShadowNode::getLayoutMetrics =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::getLayoutMetrics(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205160  <EXTERNAL>::facebook::react::BaseViewProps::resolveTransform =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::BaseViewProps::resolveTransform(LayoutMetrics *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205180  <EXTERNAL>::facebook::react::ShadowNode::getState =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getState(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205188  <EXTERNAL>::facebook::yoga::Node::setDirty =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::yoga::Node::setDirty(bool param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205190  <EXTERNAL>::std::out_of_range::~out_of_range =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::out_of_range::~out_of_range(out_of_range *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002051a8  <EXTERNAL>::folly::dynamic::operator[] =====

/* WARNING: Control flow encountered bad instruction data */

void folly::dynamic::operator[](void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002051b0  <EXTERNAL>::folly::dynamic::operator= =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall folly::dynamic::operator=(dynamic *this,dynamic *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002051b8  <EXTERNAL>::facebook::react::ShadowNode::getChildren =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getChildren(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002051c0  <EXTERNAL>::strcmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002051c8  <EXTERNAL>::facebook::react::ShadowNode::getComponentName =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getComponentName(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002051d0  <EXTERNAL>::facebook::jni::Environment::current =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::Environment::current(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002051d8  <EXTERNAL>::google::LogMessage::LogMessage =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
google::LogMessage::LogMessage(LogMessage *this,char *param_1,int param_2,int param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002051e0  <EXTERNAL>::google::LogMessage::stream =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void google::LogMessage::stream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002051e8  <EXTERNAL>::google::LogMessage::~LogMessage =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall google::LogMessage::~LogMessage(LogMessage *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002051f0  <EXTERNAL>::facebook::react::ShadowNode::getProps =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getProps(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002051f8  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::setPadding =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::YogaLayoutableShadowNode::setPadding(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205200  <EXTERNAL>::__cxa_begin_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_begin_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205208  <EXTERNAL>::std::terminate =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205210  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry
          (sentry *this,basic_ostream *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205218  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(sentry *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205220  <EXTERNAL>::std::__ndk1::ios_base::__set_badbit_and_consider_rethrow =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::__set_badbit_and_consider_rethrow(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205228  <EXTERNAL>::__cxa_end_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_end_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205230  <EXTERNAL>::std::__ndk1::ios_base::getloc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::getloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205238  <EXTERNAL>::std::__ndk1::locale::~locale =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::locale::~locale(locale *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205240  <EXTERNAL>::std::__ndk1::locale::use_facet =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::locale::use_facet(id *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205248  <EXTERNAL>::std::__ndk1::ios_base::clear =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::clear(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205258  <EXTERNAL>::facebook::react::UIManager::registerCommitHook =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::UIManager::registerCommitHook(UIManagerCommitHook *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205260  <EXTERNAL>::facebook::react::ShadowNode::cloneTree =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::cloneTree(ShadowNodeFamily *param_1,function *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205268  <EXTERNAL>::facebook::react::ShadowNode::getFamily =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getFamily(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205270  <EXTERNAL>::facebook::react::ShadowNode::getComponentHandle =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getComponentHandle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205278  <EXTERNAL>::facebook::react::JFabricUIManager::getBinding =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::JFabricUIManager::getBinding(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205280  <EXTERNAL>::facebook::react::FabricUIManagerBinding::getScheduler =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::FabricUIManagerBinding::getScheduler(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205288  <EXTERNAL>::facebook::react::Scheduler::getUIManager =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::Scheduler::getUIManager(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205290  <EXTERNAL>::facebook::react::ShadowNode::clone =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::clone(ShadowNodeFragment *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205298  <EXTERNAL>::facebook::react::ShadowNodeFragment::propsPlaceholder =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNodeFragment::propsPlaceholder(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002052a0  <EXTERNAL>::facebook::react::ShadowNodeFragment::childrenPlaceholder =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNodeFragment::childrenPlaceholder(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002052a8  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::setSize =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::YogaLayoutableShadowNode::setSize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002052b0  <EXTERNAL>::std::__ndk1::__shared_mutex_base::lock_shared =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_mutex_base::lock_shared(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002052b8  <EXTERNAL>::memcmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002052c0  <EXTERNAL>::std::__ndk1::__shared_mutex_base::unlock_shared =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_mutex_base::unlock_shared(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002052d0  <EXTERNAL>::facebook::react::LayoutableShadowNode::getContentOriginOffset =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::getContentOriginOffset(bool param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002052d8  <EXTERNAL>::facebook::react::ComponentDescriptorProviderRegistry::add =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ComponentDescriptorProviderRegistry::add(ComponentDescriptorProvider *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002052e0  <EXTERNAL>::facebook::react::ComponentDescriptor::ComponentDescriptor =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
facebook::react::ComponentDescriptor::ComponentDescriptor
          (ComponentDescriptor *this,ComponentDescriptorParameters *param_1,RawPropsParser *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002052e8  <EXTERNAL>::facebook::react::RawProps::parse =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::parse(RawPropsParser *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002052f0  <EXTERNAL>::facebook::react::RawPropsParser::postPrepare =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawPropsParser::postPrepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002052f8  <EXTERNAL>::facebook::jsi::Value::~Value =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205300  <EXTERNAL>::std::__ndk1::__shared_mutex_base::__shared_mutex_base =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::__shared_mutex_base::__shared_mutex_base(__shared_mutex_base *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205308  <EXTERNAL>::std::__ndk1::condition_variable::~condition_variable =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::condition_variable::~condition_variable(condition_variable *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205310  <EXTERNAL>::std::__ndk1::mutex::~mutex =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::mutex::~mutex(mutex *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205318  <EXTERNAL>::__cxa_pure_virtual =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_pure_virtual(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205320  <EXTERNAL>::std::__ndk1::__shared_weak_count::~__shared_weak_count =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::__shared_weak_count::~__shared_weak_count(__shared_weak_count *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205328  <EXTERNAL>::std::__ndk1::__shared_weak_count::__get_deleter =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__get_deleter(type_info *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205330  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205338  <EXTERNAL>::facebook::react::ShadowNode::transferRuntimeShadowNodeReference =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::transferRuntimeShadowNodeReference
               (shared_ptr *param_1,ShadowNodeFragment *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205340  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
          (YogaLayoutableShadowNode *this,ShadowNode *param_1,ShadowNodeFragment *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205348  <EXTERNAL>::facebook::react::RawProps::isEmpty =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::isEmpty(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205350  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205358  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205360  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205368  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205370  <EXTERNAL>::folly::dynamic::dynamic =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall folly::dynamic::dynamic(dynamic *this,dynamic *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205378  <EXTERNAL>::facebook::react::RawProps::operator.cast.to.dynamic =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::RawProps::operator_cast_to_dynamic(RawProps *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205380  <EXTERNAL>::facebook::react::HostPlatformViewProps::setProp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::HostPlatformViewProps::setProp
               (PropsParserContext *param_1,uint param_2,char *param_3,RawValue *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205388  <EXTERNAL>::__cxa_guard_acquire =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_acquire(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205390  <EXTERNAL>::__cxa_guard_abort =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205398  <EXTERNAL>::__cxa_guard_release =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002053a0  <EXTERNAL>::facebook::react::Props::initializeDynamicProps =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::Props::initializeDynamicProps
               (Props *param_1,RawProps *param_2,function *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002053a8  <EXTERNAL>::facebook::react::EventEmitter::setShadowNodeFamily =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::EventEmitter::setShadowNodeFamily(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002053b0  <EXTERNAL>::facebook::react::EventEmitter::EventEmitter =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::EventEmitter::EventEmitter(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002053b8  <EXTERNAL>::facebook::react::EventTarget::EventTarget =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::EventTarget::EventTarget(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002053c0  <EXTERNAL>::facebook::react::ShadowNodeFamily::ShadowNodeFamily =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::ShadowNodeFamily::ShadowNodeFamily(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002053c8  <EXTERNAL>::facebook::react::ShadowNodeFamily::~ShadowNodeFamily =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::ShadowNodeFamily::~ShadowNodeFamily(ShadowNodeFamily *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002053e0  <EXTERNAL>::facebook::react::EventEmitter::dispatchEvent =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::EventEmitter::dispatchEvent(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002053e8  <EXTERNAL>::__strlen_chk =====

/* WARNING: Control flow encountered bad instruction data */

void __strlen_chk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002053f0  <EXTERNAL>::facebook::jsi::Value::~Value =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002053f8  <EXTERNAL>::facebook::react::HostPlatformViewProps::HostPlatformViewProps =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
facebook::react::HostPlatformViewProps::HostPlatformViewProps
          (HostPlatformViewProps *this,PropsParserContext *param_1,HostPlatformViewProps *param_2,
          RawProps *param_3,function *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205400  <EXTERNAL>::facebook::react::HostPlatformViewProps::getDiffProps =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::HostPlatformViewProps::getDiffProps(Props *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205408  <EXTERNAL>::facebook::react::HostPlatformViewProps::getDiffPropsImplementationTarget =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::HostPlatformViewProps::getDiffPropsImplementationTarget(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205410  <EXTERNAL>::facebook::react::Props::getDiffPropsImplementationTarget =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::Props::getDiffPropsImplementationTarget(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205418  <EXTERNAL>::abort =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205420  <EXTERNAL>::facebook::react::RawProps::at =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::at(char *param_1,char *param_2,char *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205428  <EXTERNAL>::facebook::react::RawPropsKey::operator.cast.to.basic_string =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::RawPropsKey::operator_cast_to_basic_string(RawPropsKey *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205430  <EXTERNAL>::facebook::jsi::Value::asBool =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asBool(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205438  <EXTERNAL>::facebook::jsi::Value::asString =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asString(IRuntime *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205440  <EXTERNAL>::folly::dynamic::size =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::dynamic::size(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205448  <EXTERNAL>::facebook::jsi::Value::Value =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::Value::Value(Value *this,Value *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205450  <EXTERNAL>::facebook::jsi::Value::Value =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::Value::Value(Value *this,IRuntime *param_1,Value *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205458  <EXTERNAL>::nextafter =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double nextafter(double __x,double __y)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205460  <EXTERNAL>::std::range_error::~range_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::range_error::~range_error(range_error *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205468  <EXTERNAL>::folly::makeConversionError =====

/* WARNING: Control flow encountered bad instruction data */

void folly::makeConversionError(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205470  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::reserve =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     reserve(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205478  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     append(char *param_1,ulong param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205480  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     push_back(char param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205488  <EXTERNAL>::folly::detail::str_to_floating<double> =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::detail::str_to_floating<double>(Range *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205490  <EXTERNAL>::facebook::jsi::Value::asNumber =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asNumber(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205498  <EXTERNAL>::double_conversion::DoubleToStringConverter::ToShortestIeeeNumber =====

/* WARNING: Control flow encountered bad instruction data */

void double_conversion::DoubleToStringConverter::ToShortestIeeeNumber(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002054a0  <EXTERNAL>::folly::detail::str_to_integral<long> =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::detail::str_to_integral<long>(Range *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002054a8  <EXTERNAL>::facebook::react::getDefaultColorSpace =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::getDefaultColorSpace(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002054b0  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableNativeCSSParsing =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableNativeCSSParsing(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002054b8  <EXTERNAL>::facebook::react::colorFromComponents =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::colorFromComponents(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002054c0  <EXTERNAL>::remainderf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float remainderf(float __x,float __y)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002054c8  <EXTERNAL>::facebook::react::configurePlatformColorCacheInvalidationHook =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::configurePlatformColorCacheInvalidationHook(function *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002054d0  <EXTERNAL>::std::__ndk1::__call_once =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__call_once(ulong *param_1,void *param_2,_func_void_void_ptr *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002054d8  <EXTERNAL>::std::exception::~exception =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::exception::~exception(exception *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002054e0  <EXTERNAL>::std::__ndk1::mutex::lock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002054e8  <EXTERNAL>::facebook::jni::throwPendingJniExceptionAsCppException =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwPendingJniExceptionAsCppException(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002054f0  <EXTERNAL>::facebook::jni::throwCppExceptionIf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwCppExceptionIf(bool param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002054f8  <EXTERNAL>::facebook::jni::findClassStatic =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::findClassStatic(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205500  <EXTERNAL>::facebook::jni::make_jstring =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::make_jstring(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205508  <EXTERNAL>::std::__ndk1::mutex::unlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::unlock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205510  <EXTERNAL>::facebook::jsi::dynamicFromValue =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::dynamicFromValue(Runtime *param_1,Value *param_2,function *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205580  <EXTERNAL>::dl_iterate_phdr =====

/* WARNING: Control flow encountered bad instruction data */

void dl_iterate_phdr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205588  <EXTERNAL>::fwrite =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205590  <EXTERNAL>::memmove =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205598  <EXTERNAL>::free =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002055a0  <EXTERNAL>::malloc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002055a8  <EXTERNAL>::strncmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002055b0  <EXTERNAL>::fprintf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002055b8  <EXTERNAL>::__stack_chk_fail =====

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002055c0  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002055d0  <EXTERNAL>::syscall =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002055d8  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002055e0  <EXTERNAL>::memcpy =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002055e8  <EXTERNAL>::getauxval =====

/* WARNING: Control flow encountered bad instruction data */

void getauxval(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002055f0  <EXTERNAL>::__system_property_get =====

/* WARNING: Control flow encountered bad instruction data */

void __system_property_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 002055f8  <EXTERNAL>::getpid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205600  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205608  <EXTERNAL>::memset =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00205610  <EXTERNAL>::fflush =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


